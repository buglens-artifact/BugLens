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


union U0 {
   char * f0;
   unsigned short f1;
   char * f2;
   char * f3;
};

union U1 {
   const int f0;
   const unsigned short f1;
   int f2;
};

union U2 {
   unsigned f0;
};

union U3 {
   short f0;
   int f1;
   int f2;
};


static unsigned g_2 = 7UL;
static char g_18 = 0xF2L;
static char *g_17 = &g_18;
static int g_31 = (-8L);
static int * const g_30 = &g_31;
static char g_66 = 4L;
static union U0 g_82 = {0};
static int *g_84 = &g_31;
static short g_92 = 0x2B26L;
static int g_139 = 6L;
static unsigned g_141 = 4294967295UL;
static union U1 g_142 = {-1L};
static union U2 g_207 = {0x81C4FB29L};
static char ***g_238 = (void*)0;
static union U3 g_263 = {0L};
static unsigned short g_311 = 0x586EL;
static unsigned short *g_310 = &g_311;
static unsigned g_313 = 0xD81E7251L;
static short *g_344 = (void*)0;
static short **g_343 = &g_344;
static short g_408 = 0x6AADL;
static char g_412 = 0xEAL;
static int g_431 = 0xB595C745L;
static unsigned g_442 = 0xECF46E8AL;
static int g_477 = (-1L);
static unsigned char g_520 = 1UL;
static union U2 *g_527 = &g_207;
static union U3 *g_545 = &g_263;
static union U3 **g_544 = &g_545;
static const unsigned char g_547 = 255UL;
static union U1 g_562 = {1L};
static union U1 *g_561 = &g_562;
static int g_633 = 1L;
static unsigned char g_638 = 0xEAL;
static unsigned g_675 = 0x1E6CCFD9L;
static int g_770 = 0L;
static union U1 g_853 = {0xD164FED1L};
static int **g_911 = (void*)0;
static int ***g_910 = &g_911;
static union U0 *g_917 = (void*)0;
static union U0 **g_916 = &g_917;
static union U0 *** const g_915 = &g_916;
static unsigned short g_927 = 0xD11AL;
static unsigned short g_929 = 65532UL;
static int g_937 = 0L;



static int func_1(void);
static unsigned func_12(unsigned p_13);
static unsigned func_14(char * p_15, int p_16);
static int * func_19(int p_20, unsigned p_21, int * p_22);
static int func_23(int p_24, unsigned short p_25);
static short func_27(int * const p_28, int * p_29);
static int * func_32(union U3 p_33, char * p_34, union U3 p_35);
static const union U3 func_37(int p_38, int p_39, unsigned p_40);
static int func_41(int * p_42, unsigned short p_43, union U0 p_44);
static unsigned short func_45(char * p_46);
static int func_1(void)
{
    unsigned char l_3 = 0x37L;
    unsigned short *l_928 = &g_929;
    short *l_930 = &g_92;
    unsigned char l_933 = 0x42L;
    union U0 l_934 = {0};
    int **l_935 = &g_84;
    int *l_936 = &g_937;
    l_3 ^= g_2;
    (*l_936) |= (safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(g_2, ((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u((func_12(func_14(g_17, g_18)) < (((*l_928) = 65531UL) | ((*l_930) = 0xCFE3L))), 7)), 4)) , (((safe_add_func_uint16_t_u_u(l_933, func_27(((*l_935) = (l_934 , &g_770)), &g_31))) && (*g_310)) , (**l_935))))), 0xF8L));
    return (**l_935);
}







static unsigned func_12(unsigned p_13)
{
    unsigned l_784 = 4294967292UL;
    const union U1 l_785 = {3L};
    int *l_800 = (void*)0;
    int *l_833 = &g_139;
    int *l_847 = (void*)0;
    int *l_848 = (void*)0;
    union U1 *l_852 = &g_853;
    int *l_857 = &g_142.f2;
    union U0 l_860 = {0};
    union U3 l_895 = {0xCD30L};
    int *l_900 = (void*)0;
    unsigned l_924 = 9UL;
    int **l_925 = &l_847;
    char *l_926 = &g_412;
    for (g_18 = 0; (g_18 == (-2)); g_18 = safe_sub_func_uint32_t_u_u(g_18, 3))
    {
        union U0 *l_786 = &g_82;
        union U0 **l_787 = &l_786;
        int **l_797 = &g_84;
        int **l_798 = &g_84;
        int **l_799 = &g_84;
        int **l_801 = &g_84;
        int **l_802 = (void*)0;
        int **l_803 = &g_84;
        int **l_804 = &g_84;
        int **l_805 = &g_84;
        int **l_806 = (void*)0;
        int **l_807 = &g_84;
        int **l_808 = &g_84;
        int **l_809 = &g_84;
        int **l_810 = &g_84;
        int **l_811 = (void*)0;
        int **l_812 = &g_84;
        int **l_813 = &g_84;
        int **l_814 = &g_84;
        int **l_815 = &g_84;
        int **l_816 = &g_84;
        int **l_817 = &g_84;
        int **l_818 = &g_84;
        int **l_819 = (void*)0;
        int **l_820 = &g_84;
        int **l_821 = (void*)0;
        int **l_822 = &g_84;
        int **l_823 = &g_84;
        int **l_824 = (void*)0;
        int **l_825 = &g_84;
        int **l_826 = (void*)0;
        int **l_827 = &g_84;
        int **l_828 = &g_84;
        int **l_829 = (void*)0;
        int **l_830 = (void*)0;
        int **l_831 = &g_84;
        int **l_832 = &g_84;
        int **l_834 = &g_84;
        int **l_835 = &g_84;
        int **l_836 = &g_84;
        int **l_837 = (void*)0;
        int **l_838 = &g_84;
        int **l_839 = &g_84;
        int **l_840 = &g_84;
        int **l_841 = &g_84;
        int **l_842 = (void*)0;
        int **l_843 = &g_84;
        int **l_844 = (void*)0;
        int **l_845 = &g_84;
        int **l_846 = (void*)0;
        unsigned *l_849 = &g_141;
        char *l_850 = &g_66;
        char *l_894 = &g_66;
        union U3 l_899 = {0x76C6L};
        if ((((*g_30) ^= ((p_13 >= l_784) , ((((l_785 , ((((*l_850) ^= ((((*l_787) = l_786) != (((safe_rshift_func_uint8_t_u_s(((safe_add_func_int16_t_s_s(p_13, ((*g_310) = ((safe_lshift_func_uint8_t_u_u((((*l_849) = (safe_unary_minus_func_int32_t_s((safe_lshift_func_int16_t_s_u(p_13, 4))))) & g_675), g_633)) , 0x26FFL)))) <= p_13), 1)) > g_412) , (void*)0)) , 0x24L)) , (**l_787)) , (void*)0)) != &g_310) & (*l_833)) < 65535UL))) , p_13))
        {
            union U1 **l_851 = (void*)0;
            int l_856 = (-8L);
            unsigned short ** const l_861 = &g_310;
            l_852 = (void*)0;
            if (((safe_mul_func_uint16_t_u_u(l_856, (0xD4C0L >= 65527UL))) <= p_13))
            {
                return g_313;
            }
            else
            {
                unsigned char *l_868 = &g_638;
                int *l_869 = (void*)0;
                l_869 = func_19(g_562.f1, (*l_833), l_833);
            }
        }
        else
        {
            union U3 l_873 = {0x3FC4L};
            char *l_891 = (void*)0;
            int *l_902 = &g_31;
            for (g_633 = 0; (g_633 == 20); g_633 = safe_add_func_uint32_t_u_u(g_633, 2))
            {
                unsigned l_872 = 0xEA73BC96L;
                union U3 l_892 = {0x0903L};
                int *l_893 = &g_853.f2;
                int **l_898 = &l_848;
                char *l_903 = &g_412;
                const char ****l_909 = (void*)0;
                const char *****l_908 = &l_909;
                int ***l_912 = &l_834;
                int l_914 = 0xECBACDF8L;
                if (p_13)
                {
                    (*l_833) = l_872;
                    (*l_838) = &g_770;
                    (**l_843) = (*g_30);
                    (**l_832) = p_13;
                }
                else
                {
                    unsigned *l_874 = &g_442;
                    int l_875 = 1L;
                    int l_890 = 5L;
                    l_875 ^= (((*l_874) ^= p_13) , l_873.f0);
                    for (g_412 = 0; (g_412 >= (-23)); g_412--)
                    {
                        const unsigned char **l_878 = (void*)0;
                        const unsigned char *l_880 = &g_547;
                        const unsigned char **l_879 = &l_880;
                        int l_889 = (-1L);
                        (*g_30) |= l_873.f0;
                        (*l_810) = &l_889;
                        return p_13;
                    }
                }
                if ((*l_857))
                    break;
                if ((safe_lshift_func_uint8_t_u_s(g_675, 2)))
                {
                    int * const l_901 = &g_853.f2;
                    short *l_913 = &l_873.f0;
                    (*l_833) = (*l_893);
                    (*l_898) = &g_31;
                    (*g_30) ^= p_13;
                    (*l_813) = &g_770;
                }
                else
                {
                    (*g_30) |= (-7L);
                    (*l_809) = &g_139;
                    (*g_30) = 0x6FC8AB34L;
                    if (p_13)
                        continue;
                }
                (**l_840) &= ((void*)0 == g_915);
            }
            return (*l_902);
        }
        for (l_784 = 18; (l_784 < 17); l_784 = safe_sub_func_int16_t_s_s(l_784, 8))
        {
            short *l_922 = &l_895.f0;
            int *l_923 = &g_853.f2;
            (*l_845) = func_19((p_13 ^ (safe_mul_func_int16_t_s_s(((*l_922) = 0L), p_13))), g_562.f2, l_923);
        }
        (*g_30) = (*g_30);
    }
    (*l_833) = l_924;
    (*l_925) = l_800;
    (*l_925) = (*l_925);
    return g_927;
}







static unsigned func_14(char * p_15, int p_16)
{
    unsigned l_26 = 0x7A329EF4L;
    union U2 l_768 = {5UL};
    int *l_769 = &g_770;
    int **l_772 = &l_769;
    (*l_772) = func_19(func_23(g_2, l_26), (l_768 , 1UL), l_769);
    for (g_442 = 0; (g_442 == 43); ++g_442)
    {
        union U0 *l_775 = &g_82;
        union U0 **l_776 = (void*)0;
        union U0 **l_777 = &l_775;
        (*l_777) = l_775;
    }
    if (p_16)
    {
        unsigned l_778 = 4294967295UL;
        unsigned *l_781 = &g_141;
        (*g_30) |= ((0x83L && l_778) | ((*l_781) = (safe_mul_func_int8_t_s_s((*g_17), 0L))));
        return g_66;
    }
    else
    {
        return p_16;
    }
}







static int * func_19(int p_20, unsigned p_21, int * p_22)
{
    char *l_771 = &g_66;
    (*p_22) = 0x67075A12L;
    (*p_22) |= func_45(l_771);
    return p_22;
}







static int func_23(int p_24, unsigned short p_25)
{
    union U3 l_36 = {0L};
    char *l_47 = &g_18;
    int *l_383 = &g_263.f2;
    int *l_384 = &g_263.f2;
    int *l_385 = &g_263.f2;
    int *l_386 = &g_263.f2;
    int *l_387 = &g_263.f1;
    int *l_388 = &g_263.f1;
    int *l_389 = &g_263.f1;
    int *l_390 = (void*)0;
    int *l_391 = &g_263.f2;
    int *l_392 = &g_263.f1;
    int *l_393 = &g_263.f1;
    int l_394 = (-2L);
    const union U2 *l_422 = &g_207;
    const union U0 *l_460 = &g_82;
    const union U0 ** const l_459 = &l_460;
    union U1 *l_559 = &g_142;
    int * const *l_586 = &g_30;
    short **l_595 = &g_344;
    int l_657 = 0x8B602BC7L;
    char * const *l_681 = &g_17;
    char * const **l_680 = &l_681;
    unsigned l_693 = 0xB66756ABL;
    int l_699 = 0L;
    unsigned short l_714 = 0x54A5L;
    unsigned char *l_715 = &g_520;
    if ((0x85F8L == func_27(g_30, func_32(l_36, ((func_37((l_394 &= func_41(&g_31, func_45(l_47), g_82)), (safe_sub_func_uint16_t_u_u((0x82L != l_36.f0), l_36.f0)), g_313) , p_24) , (void*)0), g_263))))
    {
        union U0 l_436 = {0};
        int *l_443 = &g_31;
        union U3 *l_446 = &g_263;
        union U1 * const l_465 = (void*)0;
        char *l_476 = &g_18;
        unsigned char l_522 = 0x84L;
        union U2 *l_525 = &g_207;
        int *l_567 = &g_562.f2;
        char l_596 = 0x61L;
        short **l_644 = &g_344;
        char l_671 = (-3L);
        union U2 **l_676 = &l_525;
        union U0 l_684 = {0};
        if ((l_394 , p_24))
        {
            short l_421 = 0xBC9BL;
            const union U2 **l_423 = &l_422;
            const union U2 *l_424 = &g_207;
            union U3 **l_425 = (void*)0;
            union U3 **l_426 = (void*)0;
            union U3 *l_428 = &l_36;
            union U3 **l_427 = &l_428;
            short l_454 = 0x6414L;
            (*g_30) |= l_421;
            l_424 = ((*l_423) = l_422);
            if (((g_142 , &l_36) != ((*l_427) = &g_263)))
            {
                int *l_429 = (void*)0;
                int **l_430 = &l_429;
                (*l_430) = l_429;
                (*g_30) = p_25;
            }
            else
            {
                int l_432 = 0x2D915F21L;
                short *l_435 = (void*)0;
                l_432 |= ((*g_84) = g_431);
                (*g_84) ^= p_24;
                if (p_24)
                {
                    int **l_433 = &g_84;
                    short *l_434 = &g_263.f0;
                    union U3 l_437 = {-1L};
                    char *l_440 = &g_412;
                    (*g_84) = (+l_36.f0);
                    (*l_433) = &g_31;
                    if ((((*g_343) = (g_142 , l_434)) != l_435))
                    {
                        union U0 *l_439 = &g_82;
                        union U0 **l_438 = &l_439;
                        int l_441 = 0L;
                        g_442 |= (l_436 , (l_441 &= ((g_263 = l_437) , (((*l_438) = &g_82) == (func_27(func_32(g_263, l_440, l_36), &l_432) , (void*)0)))));
                    }
                    else
                    {
                        return (**l_433);
                    }
                }
                else
                {
                    int **l_444 = (void*)0;
                    int **l_445 = &l_443;
                    union U3 *l_447 = &g_263;
                    l_443 = &p_24;
                    (*l_445) = l_443;
                    l_447 = l_446;
                }
                l_394 |= (((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((*g_84) != (safe_mul_func_uint8_t_u_u(0x2CL, func_45(&g_412)))), 3)), p_25)) || (p_24 ^ (g_313 , (l_436 , l_454)))) | p_24);
            }
            for (g_263.f0 = 0; (g_263.f0 <= (-6)); g_263.f0--)
            {
                int **l_457 = (void*)0;
                int **l_458 = &l_443;
                const union U0 **l_462 = (void*)0;
                const union U0 ***l_461 = &l_462;
                (*l_458) = &p_24;
                (*l_461) = l_459;
            }
        }
        else
        {
            int * const l_472 = &g_142.f2;
            union U3 l_475 = {-10L};
            int l_641 = 0xCBF2378CL;
            unsigned l_646 = 6UL;
            union U2 l_650 = {5UL};
            union U3 **l_665 = &l_446;
            if ((safe_add_func_int8_t_s_s(((void*)0 == l_465), p_25)))
            {
                int *l_480 = &g_139;
lbl_483:
                (*l_443) = ((*l_472) = ((safe_add_func_int32_t_s_s((((*g_17) > (safe_rshift_func_uint16_t_u_s(p_25, 9))) < (safe_mod_func_uint32_t_u_u(func_27(l_472, func_32(func_37((safe_sub_func_uint32_t_u_u((g_207.f0 &= 0x942E82D8L), func_27(func_32(l_475, l_476, func_37(g_477, ((((*l_443) &= (safe_add_func_uint16_t_u_u((((**l_459) , p_25) , 0UL), (-1L)))) || l_394) == 0x55L), l_394)), l_480))), (*l_480), (*l_480)), l_47, g_263)), l_36.f0))), p_25)) , 0x95CAD862L));
                for (g_139 = 0; (g_139 != (-15)); g_139 = safe_sub_func_int8_t_s_s(g_139, 3))
                {
                    if (g_263.f0)
                        goto lbl_483;
                    for (g_412 = 0; (g_412 > (-3)); g_412 = safe_sub_func_int8_t_s_s(g_412, 6))
                    {
                        int **l_486 = &l_480;
                        (*l_486) = &p_24;
                        if (g_263.f0)
                            goto lbl_483;
                    }
                    return (*l_443);
                }
            }
            else
            {
                unsigned l_521 = 0x6D62D0ABL;
                int l_539 = 0L;
                union U3 **l_543 = &l_446;
                int **l_585 = &g_84;
                unsigned l_600 = 0UL;
                short *l_603 = &l_36.f0;
                if (((safe_sub_func_uint16_t_u_u(((*l_443) <= (((0xD88FL == (*l_472)) || ((*g_17) < (p_24 > 1UL))) , (safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(l_36.f0, 13)), p_25)))), (*l_472))) ^ 0x95L))
                {
                    unsigned l_503 = 0UL;
                    const union U0 * const * const l_504 = (void*)0;
                    const union U0 * const *l_506 = &l_460;
                    const union U0 * const **l_505 = &l_506;
                    union U1 l_518 = {5L};
                    (*g_30) = (((safe_mod_func_int8_t_s_s((((p_25 || ((*g_17) || ((65535UL <= p_24) , ((safe_mod_func_uint32_t_u_u((p_25 <= 0xEC8DL), (p_25 , ((safe_mul_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((*l_443), 11)), ((p_24 != (*l_443)) & 1L))) | l_503), 0x8FDAL)) ^ g_66)))) < 0xD8L)))) > 0xFCL) || g_142.f1), l_36.f0)) , l_472) == l_384);
                    (*l_505) = l_504;
                    if ((*l_472))
                    {
                        unsigned *l_517 = &g_141;
                        unsigned char *l_519 = &g_520;
                        (*l_443) = ((+((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((((p_24 & (safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((*l_517) ^= g_311), 4L)), (l_518 , (*l_472))))) && ((*l_443) < ((*g_84) < ((((*l_519) = ((*l_472) > (*g_310))) ^ l_521) ^ p_25)))) > l_522), 0x70L)), (*g_17))) , g_139)) , p_25);
                        return l_36.f0;
                    }
                    else
                    {
                        union U1 *l_524 = &l_518;
                        union U1 **l_523 = &l_524;
                        (*l_523) = (void*)0;
                        return g_2;
                    }
                }
                else
                {
                    union U2 **l_526 = (void*)0;
                    char *l_534 = &g_18;
                    int l_537 = 0x6AE204A0L;
                    union U3 l_542 = {1L};
                    union U0 l_546 = {0};
                    unsigned l_575 = 0x705C01A7L;
                    g_527 = l_525;
                    for (g_139 = 16; (g_139 <= 17); ++g_139)
                    {
                        char *l_530 = &g_412;
                        union U3 l_533 = {-1L};
                        union U3 **l_535 = &l_446;
                        union U3 * const l_536 = &l_475;
                        int *l_538 = (void*)0;
                        union U1 *l_540 = &g_142;
                        union U1 **l_541 = &l_540;
                        int *l_548 = &l_539;
                    }
                    if (((*g_30) = (*l_472)))
                    {
                        union U1 **l_560 = &l_559;
                        int **l_568 = &l_443;
                        char *l_569 = &g_18;
                        short *l_574 = &g_408;
                        (*g_30) = (((func_37(g_313, (safe_sub_func_int8_t_s_s((*g_17), l_542.f0)), ((safe_mul_func_uint8_t_u_u(func_27(&g_139, &g_31), ((safe_add_func_uint16_t_u_u(l_537, p_25)) < (safe_mod_func_uint8_t_u_u(p_24, 1UL))))) && p_24)) , p_24) & p_24) | p_24);
                        g_561 = ((*l_560) = l_559);
                        p_24 &= (p_25 >= (l_521 != (((safe_mul_func_int16_t_s_s(l_539, ((*g_310) = (((p_25 ^ func_45(l_47)) || (*l_443)) < (l_36.f0 , p_25))))) | g_562.f2) | p_25)));
                        (*l_567) = ((*g_84) = (safe_mul_func_uint16_t_u_u(((l_567 != ((*l_568) = &g_31)) <= (func_45(l_569) > (g_207.f0 || (p_24 == ((((*l_574) = (safe_add_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_u(0UL, (*l_567))) == (*g_310)) || l_542.f0), l_537))) , p_24) | l_575))))), l_542.f0)));
                    }
                    else
                    {
                        short *l_576 = &g_263.f0;
                        (*g_84) ^= p_24;
                        if (g_2)
                            goto lbl_677;
                        (*l_472) = ((*g_30) = func_27((l_537 , (((((*l_576) = func_41((((**g_544) = (*g_545)) , &p_24), (*g_310), l_546)) ^ p_25) , p_25) , &g_139)), l_567));
                        (*g_30) ^= (safe_add_func_int16_t_s_s((l_394 & (p_25 < l_542.f0)), ((*g_310) = (*l_567))));
                        (*g_84) = ((((*g_30) = (*g_30)) != (((p_25 , l_475) , (*g_527)) , (-1L))) >= (p_25 > ((*l_472) <= (*g_310))));
                    }
                    for (p_25 = 21; (p_25 != 58); p_25++)
                    {
                        unsigned l_592 = 0x3A10A6D1L;
                        unsigned short *l_597 = &l_546.f1;
                        (**l_585) = (((safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((l_585 == l_586), (*g_310))), ((*l_597) = (((safe_mul_func_uint16_t_u_u(((((safe_unary_minus_func_int8_t_s(((*l_534) = (**l_586)))) , p_25) | p_24) , (safe_mul_func_int32_t_s_s((((l_592 >= (safe_rshift_func_uint16_t_u_u(((void*)0 != l_595), 13))) || (**l_586)) | (-1L)), 0UL))), (*g_310))) >= l_575) , l_596)))) & (*g_30)) , 0x2E1E5BECL);
                        (**l_586) = (*g_84);
                        (*g_84) = (*l_443);
                    }
                }
                (*l_567) &= ((safe_mod_func_uint32_t_u_u((((**l_586) <= ((!(((*l_603) = (l_600 , (((**l_586) , p_24) == ((+((((*g_310) = 0x3595L) & (p_25 = (*l_472))) , (safe_mul_func_int16_t_s_s((p_24 == ((*g_84) = 0x0F6347FFL)), p_24)))) & 0UL)))) == (**l_586))) < p_24)) , p_24), p_24)) || (**l_586));
            }
            (*l_567) = (0x5BE3L >= p_25);
            for (l_394 = 0; (l_394 > (-27)); l_394 = safe_sub_func_uint8_t_u_u(l_394, 3))
            {
                unsigned char *l_614 = &l_522;
                int l_632 = 0x105D0D24L;
                short **l_651 = (void*)0;
            }
            (*l_567) = ((*g_84) ^= (7UL <= ((*l_47) &= (**l_586))));
        }
        (*l_676) = &g_207;
lbl_677:
        (*g_30) = (l_47 == &l_596);
        p_24 ^= ((*g_30) = ((safe_lshift_func_int8_t_s_s((((void*)0 == l_680) , (p_25 != ((g_477 > (safe_lshift_func_int16_t_s_s((((*l_567) != p_25) , g_18), (l_684 , p_25)))) , g_207.f0))), 3)) , (-4L)));
    }
    else
    {
        union U1 *l_689 = &g_142;
        int * const l_694 = &g_139;
        unsigned *l_702 = &l_693;
        union U2 * const l_705 = &g_207;
        for (g_263.f0 = 0; (g_263.f0 < 3); g_263.f0 = safe_add_func_uint16_t_u_u(g_263.f0, 5))
        {
            union U2 *l_687 = &g_207;
            union U2 **l_688 = &g_527;
            union U1 **l_690 = &l_559;
            (*l_688) = l_687;
            (**l_586) = p_24;
            (*l_690) = l_689;
        }
        (*g_544) = (((*l_694) = ((*l_702) = ((((safe_rshift_func_uint16_t_u_u((l_693 ^ (~((**l_586) = 0x7948EC9BL))), 15)) > (*g_310)) && (func_27(l_694, &g_31) <= (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((p_24 || (l_699 >= (safe_sub_func_uint8_t_u_u((((*g_561) , g_675) != p_24), p_24)))), 15)), p_25)))) > 4L))) , (*g_544));
        (*g_84) &= (safe_add_func_uint32_t_u_u(((*l_702) = (l_705 == (g_311 , l_705))), 0x3DD684CDL));
    }
    (*g_30) = (*g_84);
    if (((**l_586) ^ (((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((l_699 = p_25), 13)), (**l_586))) & g_442) & (((**l_586) <= (255UL | ((safe_sub_func_int32_t_s_s(((*g_84) = ((**l_586) , (((((*l_715) = ((safe_sub_func_int16_t_s_s((**l_586), (((((**l_586) && 5L) > 0UL) == p_24) != l_714))) & g_142.f2)) != (**l_586)) | (-4L)) == (*g_84)))), (-4L))) || (*g_17)))) || g_142.f1))))
    {
        return (**l_586);
    }
    else
    {
        unsigned l_716 = 0xCF02EBDFL;
        int * const l_728 = &l_699;
        const union U3 * const l_731 = (void*)0;
        int l_740 = 0x7172074AL;
        if (l_716)
        {
            int *l_717 = &g_31;
            l_717 = &p_24;
        }
        else
        {
            int l_724 = 0x2AC78932L;
            unsigned short *l_725 = (void*)0;
            unsigned short *l_726 = &g_82.f1;
            unsigned *l_727 = &l_693;
            int **l_729 = &g_84;
            (*g_84) = p_24;
            (*g_84) &= (((**l_586) = (safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(0x81L, 7)), ((safe_sub_func_uint16_t_u_u((0x717AL & l_724), ((*l_726) ^= (l_716 ^ ((*g_310) &= p_24))))) < ((*l_727) = ((((**l_586) < (*g_17)) & (0xB9L < p_24)) | (*g_17))))))) & 0x5D134C11L);
            if (g_263.f0)
                goto lbl_730;
lbl_730:
            (*l_729) = (p_25 , l_728);
            (*l_729) = &p_24;
        }
        (**l_586) = (l_731 != (*g_544));
        (*l_728) |= ((**l_586) &= 0x0C6B29A5L);
        if ((*g_84))
        {
            (*l_459) = (void*)0;
        }
        else
        {
            union U0 l_739 = {0};
            short *l_741 = (void*)0;
            short *l_742 = &l_36.f0;
            int l_750 = 0x73CE476FL;
            int l_761 = 0xCA1BBC37L;
            for (g_139 = 19; (g_139 == (-11)); g_139 = safe_sub_func_uint8_t_u_u(g_139, 1))
            {
                if (p_24)
                    break;
                for (l_36.f2 = 15; (l_36.f2 <= 21); l_36.f2 = safe_add_func_int8_t_s_s(l_36.f2, 6))
                {
                    union U0 *l_736 = &g_82;
                    if (p_25)
                        break;
                    (*l_459) = l_736;
                }
            }
            (*g_30) = ((g_82 , func_41(func_32((*g_545), &g_66, ((safe_rshift_func_int16_t_s_u(((l_739 , &l_693) == &l_693), (l_740 < ((*l_742) |= p_25)))) , (**g_544))), (*l_728), (*l_460))) && (**l_586));
            for (l_693 = 0; (l_693 >= 23); l_693++)
            {
                short l_747 = (-3L);
                int l_757 = 0x7BCE3AB0L;
                int *l_760 = (void*)0;
                unsigned short l_762 = 0x56E6L;
                union U0 *l_763 = &l_739;
                (*l_728) = (((((safe_lshift_func_uint16_t_u_s(0x4C7CL, (l_747 , l_747))) <= g_562.f1) , ((safe_mod_func_int8_t_s_s(p_24, l_750)) | (*g_310))) & (safe_rshift_func_int16_t_s_u((l_750 | (p_24 ^ p_24)), 2))) > (*g_310));
                l_761 |= (safe_rshift_func_uint8_t_u_s((((*g_310) == 0xC307L) | (safe_sub_func_uint16_t_u_u(((*g_310) & (l_757 ^ p_24)), ((g_520 = (p_24 ^ ((safe_mul_func_int8_t_s_s(func_45(&g_18), (p_25 >= (-4L)))) == (*l_728)))) == l_750)))), 6));
                if ((func_41(&g_139, (p_25 >= (0x6F7DL && l_762)), ((*l_763) = l_739)) < (safe_sub_func_uint16_t_u_u(p_24, ((((p_24 != 5UL) > l_750) , l_761) ^ 0xC07DL)))))
                {
                    if (p_24)
                    {
                        (*g_84) = 0x123EA1DDL;
                    }
                    else
                    {
                        return g_477;
                    }
                }
                else
                {
                    for (l_714 = 0; (l_714 != 2); l_714 = safe_add_func_int16_t_s_s(l_714, 6))
                    {
                        if ((*g_84))
                            break;
                        return g_547;
                    }
                }
            }
        }
    }
    return p_25;
}







static short func_27(int * const p_28, int * p_29)
{
    unsigned l_401 = 1UL;
    const union U1 *l_403 = &g_142;
    const union U1 **l_402 = &l_403;
    int l_411 = 0x10EAAE94L;
    char *l_413 = &g_412;
    int **l_414 = &g_84;
    unsigned char l_417 = 1UL;
    unsigned short *l_420 = &g_82.f1;
    (*g_30) = ((g_82 , l_401) , (*p_29));
    (*l_402) = (void*)0;
    (*l_414) = func_32(func_37(g_18, (safe_rshift_func_uint8_t_u_s(l_401, 3)), l_401), (((((safe_add_func_uint8_t_u_u((g_408 = l_401), 1UL)) != (safe_sub_func_uint32_t_u_u(l_411, l_411))) & g_139) , g_412) , l_413), g_263);
    (*p_28) = (safe_mul_func_int16_t_s_s(((l_417 ^= (**l_414)) | (+((**l_414) | ((**l_414) != ((*g_310) &= (**l_414)))))), ((((*l_420) = (safe_sub_func_int16_t_s_s(((**l_414) & (g_31 == (&g_344 != (void*)0))), (**l_414)))) > 0xE4FFL) | (**l_414))));
    return (**l_414);
}







static int * func_32(union U3 p_33, char * p_34, union U3 p_35)
{
    unsigned short l_399 = 2UL;
    int *l_400 = &g_142.f2;
    l_399 ^= (*g_30);
    (*g_84) = (0x26L == p_35.f0);
    return l_400;
}







static const union U3 func_37(int p_38, int p_39, unsigned p_40)
{
    short l_397 = 0xD627L;
    const union U3 l_398 = {0xF580L};
    (*g_30) ^= (0x95829EE7L == (l_397 = p_38));
    return l_398;
}







static int func_41(int * p_42, unsigned short p_43, union U0 p_44)
{
    unsigned char l_83 = 0xB2L;
    int *l_86 = &g_31;
    int **l_85 = &l_86;
    union U1 l_90 = {0x15778C4BL};
    short *l_91 = &g_92;
    const unsigned l_93 = 4294967295UL;
    union U3 l_103 = {0x384EL};
    char *l_128 = &g_18;
    const int l_163 = 0x46675684L;
    const char *l_199 = &g_18;
    const char ** const l_198 = &l_199;
    int l_215 = 0L;
    unsigned short *l_309 = &g_82.f1;
    union U2 l_321 = {4294967290UL};
    const int l_326 = (-5L);
    const char l_360 = 0x51L;
    union U0 *l_374 = &g_82;
    l_83 |= ((*p_42) = func_45(&g_18));
    if (g_31)
        goto lbl_87;
    if (g_31)
        goto lbl_87;
lbl_87:
    (*l_85) = (g_84 = &g_31);
    return p_43;
}







static unsigned short func_45(char * p_46)
{
    int *l_48 = &g_31;
    int **l_49 = &l_48;
    const union U3 l_50 = {-1L};
    char *l_64 = (void*)0;
    char *l_65 = &g_66;
    int l_67 = (-2L);
    unsigned l_80 = 0x00F1D91AL;
lbl_81:
    (*l_49) = l_48;
    (*g_30) = (l_50 , (((l_67 ^= (safe_sub_func_uint16_t_u_u((l_50 , ((**l_49) < ((((g_31 & (safe_add_func_uint32_t_u_u(g_31, (safe_mul_func_uint16_t_u_u(((safe_unary_minus_func_int32_t_s((safe_add_func_uint16_t_u_u(g_18, (**l_49))))) >= (safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((((-1L) != (((*l_65) = ((((void*)0 != (*l_49)) != (**l_49)) , (*p_46))) != (-6L))) , &g_66) == l_64), 0x04BAE914L)), 0xE1L))), 6L))))) ^ (**l_49)) , (*l_48)) | (*l_48)))), 0xED69L))) , (void*)0) == &l_48));
    for (l_67 = 0; (l_67 == (-26)); --l_67)
    {
        unsigned char l_78 = 0xC2L;
        unsigned short l_79 = 7UL;
        (**l_49) = ((l_80 = ((*p_46) = ((safe_add_func_int32_t_s_s(0xBDD1892FL, g_18)) & ((safe_add_func_int16_t_s_s(((~0x8509L) && (*l_48)), ((((safe_lshift_func_int8_t_s_u((*g_17), g_2)) & (safe_add_func_int32_t_s_s((l_50 , 0L), g_31))) & 0x40L) & l_78))) == l_79)))) | 8L);
        if (g_18)
            goto lbl_81;
    }
    return g_66;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_82.f1, "g_82.f1", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_142.f0, "g_142.f0", print_hash_value);
    transparent_crc(g_142.f1, "g_142.f1", print_hash_value);
    transparent_crc(g_142.f2, "g_142.f2", print_hash_value);
    transparent_crc(g_207.f0, "g_207.f0", print_hash_value);
    transparent_crc(g_263.f0, "g_263.f0", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_313, "g_313", print_hash_value);
    transparent_crc(g_408, "g_408", print_hash_value);
    transparent_crc(g_412, "g_412", print_hash_value);
    transparent_crc(g_431, "g_431", print_hash_value);
    transparent_crc(g_442, "g_442", print_hash_value);
    transparent_crc(g_477, "g_477", print_hash_value);
    transparent_crc(g_520, "g_520", print_hash_value);
    transparent_crc(g_547, "g_547", print_hash_value);
    transparent_crc(g_562.f0, "g_562.f0", print_hash_value);
    transparent_crc(g_562.f1, "g_562.f1", print_hash_value);
    transparent_crc(g_562.f2, "g_562.f2", print_hash_value);
    transparent_crc(g_633, "g_633", print_hash_value);
    transparent_crc(g_638, "g_638", print_hash_value);
    transparent_crc(g_675, "g_675", print_hash_value);
    transparent_crc(g_770, "g_770", print_hash_value);
    transparent_crc(g_853.f0, "g_853.f0", print_hash_value);
    transparent_crc(g_853.f1, "g_853.f1", print_hash_value);
    transparent_crc(g_853.f2, "g_853.f2", print_hash_value);
    transparent_crc(g_927, "g_927", print_hash_value);
    transparent_crc(g_929, "g_929", print_hash_value);
    transparent_crc(g_937, "g_937", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
