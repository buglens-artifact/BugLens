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
   signed f0 : 23;
   unsigned f1 : 18;
   signed f2 : 13;
   const signed f3 : 4;
   signed f4 : 5;
   char f5;
   unsigned f6 : 30;
   signed : 0;
};


static short g_49 = 0L;
static short g_60 = (-1L);
static int g_66 = (-8L);
static int g_74 = 6L;
static char g_81 = (-1L);
static short g_100 = (-1L);
static int g_125 = 0x026E73BFL;
static unsigned short g_129 = 0xDA12L;
static unsigned g_130 = 0UL;
static unsigned char g_141 = 0xEDL;
static unsigned char g_143 = 0x5BL;
static unsigned g_175 = 0x79B81428L;
static const unsigned char g_216 = 0x39L;
static const unsigned char *g_215 = &g_216;
static char *g_239 = &g_81;
static char **g_238 = &g_239;
static struct S0 g_274 = {-2214,277,-56,-1,3,1L,30970};
static int *g_275 = &g_74;
static unsigned g_291 = 0xA664A59AL;
static unsigned *g_296 = &g_130;
static unsigned **g_295 = &g_296;
static unsigned char g_319 = 0xF8L;
static const int *g_324 = &g_74;
static unsigned g_404 = 4294967295UL;
static unsigned g_525 = 0xA0D9F4A7L;
static char g_599 = 2L;
static int g_617 = 0L;
static int g_661 = 0x34EC1C7CL;
static unsigned g_702 = 0xB597D218L;
static const struct S0 *g_723 = &g_274;
static const struct S0 **g_722 = &g_723;
static const struct S0 ***g_721 = &g_722;
static unsigned char g_796 = 0x12L;
static int g_812 = 7L;
static int g_813 = 1L;
static int g_815 = 1L;
static char g_826 = 0x00L;
static unsigned short g_828 = 65534UL;
static unsigned g_840 = 1UL;
static unsigned g_845 = 4294967295UL;
static unsigned g_962 = 0x27AE9E77L;
static char g_1102 = (-1L);
static int g_1112 = 0xDC67AE35L;
static unsigned short g_1132 = 2UL;
static int g_1194 = 0x41BF4783L;
static int g_1210 = 0xF7B754D3L;
static short g_1238 = 0x3CAFL;
static int g_1246 = 5L;
static unsigned g_1248 = 0x91283DDDL;
static int g_1347 = 0xD4E48C22L;
static short g_1348 = 0x99ACL;
static unsigned g_1360 = 4294967295UL;
static int g_1538 = 0xB799FE12L;
static unsigned g_1545 = 8UL;
static unsigned short g_1552 = 65531UL;
static unsigned g_1790 = 4294967287UL;
static unsigned char g_2029 = 255UL;
static char ***g_2037 = &g_238;
static char ****g_2036 = &g_2037;
static unsigned char g_2226 = 0xAEL;
static unsigned short g_2413 = 0UL;
static unsigned g_2507 = 0x2D858888L;
static int g_2513 = (-6L);
static unsigned g_2581 = 1UL;
static int g_2748 = 0x2483DF92L;
static short g_2768 = 0x857FL;
static unsigned char g_2769 = 0x19L;
static struct S0 *g_2822 = &g_274;
static struct S0 **g_2821 = &g_2822;
static struct S0 ***g_2820 = &g_2821;
static char g_2899 = 1L;
static unsigned short g_2971 = 0xBF34L;



static int func_1(void);
static int func_2(int p_3, short p_4, unsigned short p_5, const int p_6);
static int func_7(unsigned p_8, char p_9, int p_10, struct S0 p_11, unsigned char p_12);
static unsigned func_13(const char p_14, short p_15);
static const unsigned short func_23(const unsigned p_24, short p_25, unsigned short p_26, unsigned short p_27, struct S0 p_28);
static char func_31(int p_32, unsigned char p_33);
static char func_37(short p_38, unsigned char p_39, const struct S0 p_40);
static char func_43(char p_44, char p_45, unsigned short p_46, unsigned p_47, unsigned short p_48);
static unsigned func_50(short p_51);
static int * func_67(char p_68, short * p_69);
static int func_1(void)
{
    const unsigned l_16 = 0x15FDC8DFL;
    unsigned *l_844 = &g_845;
    int *l_848 = (void*)0;
    int *l_849 = &g_812;
    struct S0 l_850 = {-1610,330,-67,1,-2,0xD7L,32672};
    int *l_852 = (void*)0;
    int *l_853 = &g_74;
    unsigned l_854 = 0xB9881059L;
    int *l_2834 = (void*)0;
    int *l_2835 = (void*)0;
    int *l_2836 = &g_1210;
    int *l_2837 = &g_1210;
    int *l_2838 = &g_66;
    int *l_2839 = &g_2748;
    int *l_2840 = (void*)0;
    int *l_2841 = &g_74;
    int *l_2842 = &g_661;
    int *l_2843 = &g_2513;
    int *l_2844 = &g_2513;
    int *l_2845 = (void*)0;
    int *l_2846 = &g_661;
    int *l_2847 = &g_1112;
    int *l_2848 = &g_661;
    int *l_2849 = &g_617;
    int *l_2850 = (void*)0;
    int *l_2851 = (void*)0;
    int *l_2852 = (void*)0;
    int *l_2853 = &g_617;
    int *l_2854 = &g_1210;
    int *l_2855 = &g_125;
    int *l_2856 = &g_125;
    int *l_2857 = &g_2513;
    int *l_2858 = (void*)0;
    int *l_2859 = &g_1347;
    int *l_2860 = &g_1347;
    int *l_2861 = &g_2748;
    int *l_2862 = (void*)0;
    int *l_2863 = &g_66;
    int *l_2864 = (void*)0;
    int *l_2865 = &g_66;
    int *l_2866 = (void*)0;
    int *l_2867 = &g_2513;
    int *l_2868 = &g_1347;
    int *l_2869 = &g_1210;
    int *l_2870 = &g_2748;
    int *l_2871 = &g_661;
    int *l_2872 = &g_1210;
    int *l_2873 = &g_2748;
    int *l_2874 = &g_1112;
    int *l_2875 = &g_1347;
    int *l_2876 = &g_1347;
    int *l_2877 = &g_2513;
    int *l_2878 = &g_66;
    short l_2879 = (-6L);
    int *l_2880 = &g_125;
    int *l_2881 = &g_74;
    int *l_2882 = &g_617;
    int *l_2883 = &g_661;
    int *l_2884 = &g_661;
    int *l_2885 = (void*)0;
    int *l_2886 = &g_2748;
    int *l_2887 = &g_66;
    int *l_2888 = &g_2513;
    int *l_2889 = &g_1112;
    int *l_2890 = &g_74;
    int *l_2891 = &g_1347;
    int *l_2892 = &g_2513;
    int *l_2893 = &g_2513;
    int *l_2894 = &g_1112;
    int *l_2895 = &g_1347;
    int *l_2896 = &g_1210;
    int *l_2897 = &g_1347;
    int *l_2898 = &g_1210;
    int *l_2900 = &g_66;
    int *l_2901 = (void*)0;
    int *l_2902 = (void*)0;
    int *l_2903 = (void*)0;
    int *l_2904 = &g_661;
    int *l_2905 = &g_1347;
    int *l_2906 = &g_125;
    int *l_2907 = &g_2748;
    int *l_2908 = &g_1210;
    int *l_2909 = &g_2513;
    int *l_2910 = &g_66;
    int *l_2911 = &g_661;
    int *l_2912 = (void*)0;
    int *l_2913 = &g_2748;
    int *l_2914 = (void*)0;
    int *l_2915 = &g_2513;
    int *l_2916 = &g_125;
    int l_2917 = 9L;
    int *l_2918 = &g_74;
    int *l_2919 = &g_74;
    int *l_2920 = (void*)0;
    int *l_2921 = &g_125;
    int *l_2922 = &g_1210;
    int *l_2923 = &g_2513;
    int *l_2924 = &g_1210;
    int *l_2925 = &g_1347;
    int *l_2926 = &g_1347;
    int *l_2927 = &g_1347;
    int *l_2928 = &g_66;
    int *l_2929 = &g_617;
    int *l_2930 = &g_1112;
    int *l_2931 = &g_661;
    int *l_2932 = (void*)0;
    int l_2933 = 3L;
    int *l_2934 = &g_1112;
    int *l_2935 = (void*)0;
    int *l_2936 = (void*)0;
    int *l_2937 = (void*)0;
    int *l_2938 = &g_1210;
    int *l_2939 = &g_1210;
    int *l_2940 = &g_617;
    int *l_2941 = &g_74;
    int *l_2942 = &g_125;
    int *l_2943 = &g_2513;
    int *l_2944 = (void*)0;
    int *l_2945 = &g_2748;
    int *l_2946 = &g_1112;
    int *l_2947 = &g_1210;
    int *l_2948 = (void*)0;
    int *l_2949 = &g_1112;
    int *l_2950 = &g_617;
    int *l_2951 = &g_125;
    int *l_2952 = &g_617;
    int l_2953 = 0L;
    int *l_2954 = &g_2748;
    int *l_2955 = &g_66;
    int *l_2956 = (void*)0;
    int *l_2957 = &g_1210;
    int *l_2958 = (void*)0;
    int *l_2959 = &g_74;
    int *l_2960 = &g_74;
    int *l_2961 = &l_2917;
    int *l_2962 = &g_66;
    int *l_2963 = &l_2917;
    int *l_2964 = (void*)0;
    int *l_2965 = &g_2513;
    int l_2966 = 0x7106D299L;
    int *l_2967 = (void*)0;
    int *l_2968 = &g_661;
    int *l_2969 = &g_66;
    int *l_2970 = &g_1210;
    char * const *l_2976 = (void*)0;
    (*l_853) = func_2(((*l_853) = func_7(((*l_844) ^= func_13(l_16, l_16)), (l_16 >= l_16), ((*l_849) = (safe_mod_func_uint32_t_u_u(l_16, l_16))), l_850, l_850.f6)), g_274.f1, l_854, g_404);
    (*l_853) = (safe_lshift_func_int8_t_s_u((-9L), 1));
    ++g_2971;
    (*l_2887) = (((+0L) < (*l_2891)) == (l_2976 != (void*)0));
    return (*g_324);
}







static int func_2(int p_3, short p_4, unsigned short p_5, const int p_6)
{
    int l_855 = (-1L);
    struct S0 l_875 = {1044,402,-81,2,-4,0x46L,19236};
    int l_1010 = 7L;
    int l_1029 = 0L;
    int l_1040 = (-6L);
    int l_1047 = (-2L);
    int l_1068 = 1L;
    int l_1078 = 3L;
    char l_1138 = 1L;
    char l_1157 = 1L;
    int l_1305 = 1L;
    unsigned char *l_1565 = &g_143;
    unsigned char **l_1564 = &l_1565;
    char ***l_1795 = &g_238;
    char ** const *l_2039 = (void*)0;
    char ** const **l_2038 = &l_2039;
    unsigned short *l_2237 = (void*)0;
    int l_2290 = 0xAE444B4DL;
    int l_2580 = 0xDCF52A44L;
    int **l_2799 = &g_275;
    int l_2802 = 0x2FF32FFBL;
    struct S0 * const l_2809 = &g_274;
    struct S0 ***l_2824 = &g_2821;
    char l_2828 = (-1L);
    unsigned *l_2829 = &g_840;
    short l_2830 = 0L;
    int *l_2831 = &l_1029;
    if ((*g_324))
    {
        int *l_856 = (void*)0;
        int *l_857 = &g_74;
        struct S0 l_868 = {2660,457,36,1,-2,-1L,17176};
        int *l_870 = &g_813;
        int **l_869 = &l_870;
        int **l_871 = (void*)0;
        int *l_873 = (void*)0;
        int **l_872 = &l_873;
        char *l_874 = &g_274.f5;
        int l_926 = 1L;
        int l_942 = (-3L);
        int l_1083 = 0x4C8F0780L;
        int l_1144 = (-8L);
        int l_1229 = (-1L);
        int l_1234 = 0xF3A014E1L;
        (*l_857) = ((l_855 <= p_4) ^ g_141);
lbl_1135:
        if (func_7(func_31((safe_lshift_func_uint8_t_u_u(((l_855 == (safe_rshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(((l_855 != func_23(l_855, p_3, p_6, (p_5--), l_868)) <= ((*l_874) = ((((*l_869) = l_856) != ((*l_872) = &l_855)) ^ 0x8BL))), 7)) <= g_274.f6), 7UL)), 11))) <= l_855), p_6)), g_143), l_855, g_129, l_875, p_4))
        {
            unsigned l_878 = 0xAE680DC4L;
            short *l_879 = &g_49;
            int *l_880 = &g_74;
            int *l_881 = &g_617;
            int *l_882 = &g_661;
            int *l_883 = &g_661;
            int *l_884 = &g_125;
            int *l_885 = &g_125;
            int *l_886 = &g_74;
            int *l_887 = &g_125;
            int *l_888 = &g_661;
            int *l_889 = &g_74;
            int *l_890 = &g_74;
            int *l_891 = &g_66;
            int *l_892 = (void*)0;
            int *l_893 = (void*)0;
            int *l_894 = (void*)0;
            int *l_895 = &g_617;
            int *l_896 = &g_661;
            int *l_897 = (void*)0;
            int *l_898 = &g_66;
            int *l_899 = &g_66;
            int *l_900 = (void*)0;
            int *l_901 = &g_74;
            int l_902 = 0x4C69E78CL;
            int *l_903 = &g_617;
            int *l_904 = &g_74;
            int *l_905 = &g_661;
            int *l_906 = &g_125;
            int *l_907 = &g_74;
            int *l_908 = &l_902;
            int l_909 = (-1L);
            int *l_910 = &g_74;
            int *l_911 = &g_66;
            int *l_912 = &g_661;
            int *l_913 = &g_66;
            int *l_914 = &l_909;
            int *l_915 = (void*)0;
            int *l_916 = &g_661;
            int *l_917 = &g_66;
            int *l_918 = &l_902;
            int *l_919 = &l_909;
            int *l_920 = (void*)0;
            int *l_921 = &g_661;
            int *l_922 = (void*)0;
            int *l_923 = (void*)0;
            int *l_924 = &g_125;
            int *l_925 = &g_661;
            int *l_927 = &g_617;
            int *l_928 = &l_902;
            int *l_929 = &g_66;
            int *l_930 = &g_661;
            int *l_931 = (void*)0;
            int *l_932 = &l_926;
            int *l_933 = &l_902;
            int *l_934 = (void*)0;
            int *l_935 = &g_74;
            int *l_936 = (void*)0;
            int *l_937 = &l_926;
            int *l_938 = &g_125;
            int *l_939 = &g_66;
            int l_940 = 0xF8E2ABB9L;
            int *l_941 = &g_125;
            int l_943 = 0xB3D24DBAL;
            int l_944 = (-1L);
            int *l_945 = &l_940;
            int *l_946 = &l_902;
            int *l_947 = &g_125;
            int *l_948 = &l_943;
            int *l_949 = &l_909;
            int *l_950 = (void*)0;
            int *l_951 = &l_943;
            int *l_952 = &g_617;
            int *l_953 = &l_943;
            int *l_954 = &l_909;
            int *l_955 = &l_909;
            int *l_956 = &g_66;
            int *l_957 = &l_902;
            int *l_958 = &l_909;
            int *l_959 = &l_940;
            int *l_960 = &g_661;
            int *l_961 = &g_74;
            (*l_857) = (((*l_874) |= (safe_mod_func_uint8_t_u_u((p_6 > (l_855 <= (((*l_879) = func_7(p_3, l_878, g_274.f0, l_868, l_878)) == 0x0CA7L))), 251UL))) > 248UL);
            --g_962;
        }
        else
        {
            int *l_965 = &g_66;
            int *l_966 = &l_926;
            int *l_967 = (void*)0;
            int *l_968 = (void*)0;
            int *l_969 = &g_125;
            int *l_970 = &g_617;
            int *l_971 = &g_125;
            int *l_972 = &g_661;
            int *l_973 = &g_74;
            int *l_974 = &g_661;
            int *l_975 = &g_125;
            int *l_976 = &g_661;
            int *l_977 = &g_125;
            int *l_978 = &g_617;
            int *l_979 = (void*)0;
            int l_980 = (-9L);
            int *l_981 = &g_125;
            int *l_982 = &g_66;
            int *l_983 = &g_74;
            int *l_984 = (void*)0;
            int *l_985 = &l_926;
            int *l_986 = &l_942;
            int *l_987 = &g_617;
            int *l_988 = &l_980;
            int *l_989 = &g_125;
            int *l_990 = &l_926;
            int *l_991 = &l_942;
            int *l_992 = &g_66;
            int *l_993 = &l_926;
            int *l_994 = &g_661;
            int l_995 = (-1L);
            int l_996 = 0x3999C5EDL;
            int *l_997 = (void*)0;
            int *l_998 = &g_617;
            int *l_999 = &g_74;
            int *l_1000 = (void*)0;
            int *l_1001 = &g_617;
            int *l_1002 = (void*)0;
            int *l_1003 = (void*)0;
            int *l_1004 = (void*)0;
            int *l_1005 = &l_996;
            int *l_1006 = &l_996;
            int *l_1007 = &g_125;
            int *l_1008 = (void*)0;
            int *l_1009 = &l_926;
            int *l_1011 = &l_942;
            int *l_1012 = &g_617;
            int *l_1013 = &l_996;
            int *l_1014 = &l_995;
            int *l_1015 = (void*)0;
            int *l_1016 = (void*)0;
            int *l_1017 = &g_617;
            int *l_1018 = &g_617;
            int *l_1019 = &l_995;
            int *l_1020 = &l_995;
            int *l_1021 = &g_125;
            int *l_1022 = &g_617;
            int *l_1023 = &l_996;
            int *l_1024 = &l_995;
            int *l_1025 = &l_995;
            int *l_1026 = &l_926;
            int *l_1027 = &g_66;
            int *l_1028 = &l_1010;
            int *l_1030 = &l_1029;
            int *l_1031 = (void*)0;
            int *l_1032 = &g_617;
            int *l_1033 = &l_926;
            int *l_1034 = &l_1029;
            int *l_1035 = (void*)0;
            int *l_1036 = &g_617;
            int *l_1037 = (void*)0;
            int *l_1038 = &g_66;
            int *l_1039 = &l_942;
            int l_1041 = 0x9829466EL;
            int *l_1042 = &l_942;
            int *l_1043 = &g_125;
            int *l_1044 = &l_995;
            int *l_1045 = &l_995;
            int *l_1046 = &l_942;
            int *l_1048 = &g_66;
            int *l_1049 = &l_942;
            int *l_1050 = &l_1041;
            int *l_1051 = &l_942;
            int *l_1052 = &l_1010;
            int *l_1053 = &g_74;
            int *l_1054 = &l_1041;
            int *l_1055 = &l_980;
            int *l_1056 = (void*)0;
            int *l_1057 = &l_1041;
            int *l_1058 = &l_1029;
            int *l_1059 = &l_1047;
            int *l_1060 = (void*)0;
            int *l_1061 = (void*)0;
            int *l_1062 = &g_617;
            int *l_1063 = &l_995;
            int *l_1064 = (void*)0;
            int *l_1065 = &l_1010;
            int *l_1066 = &l_1040;
            int *l_1067 = &l_980;
            int *l_1069 = (void*)0;
            int *l_1070 = &l_995;
            int *l_1071 = (void*)0;
            int *l_1072 = &l_995;
            int *l_1073 = &l_1068;
            int *l_1074 = &g_125;
            int *l_1075 = &g_617;
            int *l_1076 = (void*)0;
            int *l_1077 = (void*)0;
            int *l_1079 = &l_926;
            int *l_1080 = (void*)0;
            int *l_1081 = &l_1078;
            int *l_1082 = &g_125;
            int *l_1084 = (void*)0;
            int *l_1085 = (void*)0;
            int *l_1086 = &g_661;
            int *l_1087 = (void*)0;
            int *l_1088 = &l_1010;
            int *l_1089 = (void*)0;
            int *l_1090 = &l_1068;
            int *l_1091 = &l_1068;
            int *l_1092 = &l_980;
            int *l_1093 = (void*)0;
            int *l_1094 = &l_1047;
            int *l_1095 = (void*)0;
            int *l_1096 = &g_617;
            int *l_1097 = &l_1068;
            int *l_1098 = &l_996;
            int *l_1099 = (void*)0;
            int *l_1100 = &l_1078;
            int *l_1101 = &l_1047;
            int *l_1103 = (void*)0;
            int *l_1104 = (void*)0;
            int l_1105 = 0xB92F926CL;
            int *l_1106 = &l_995;
            int *l_1107 = &l_1068;
            int *l_1108 = (void*)0;
            int *l_1109 = &l_1047;
            int *l_1110 = &g_125;
            int *l_1111 = (void*)0;
            int *l_1113 = &l_1078;
            int *l_1114 = &l_1083;
            int *l_1115 = &g_66;
            int *l_1116 = &l_1068;
            int *l_1117 = &l_926;
            int *l_1118 = &l_1047;
            int *l_1119 = &l_980;
            int *l_1120 = &l_926;
            int *l_1121 = &g_1112;
            int *l_1122 = &l_1029;
            int *l_1123 = &l_1040;
            int *l_1124 = &l_1047;
            int *l_1125 = &g_66;
            int *l_1126 = (void*)0;
            int *l_1127 = &l_980;
            int *l_1128 = &l_1078;
            int *l_1129 = &l_1083;
            int *l_1130 = &l_1105;
            int *l_1131 = &l_1078;
            --g_1132;
            if (l_875.f1)
                goto lbl_1135;
        }
        (*l_857) = (*l_857);
        if ((*l_857))
        {
            int *l_1136 = &l_1010;
            int *l_1137 = &l_1083;
            int *l_1139 = &g_661;
            int *l_1140 = (void*)0;
            int *l_1141 = &l_1010;
            int *l_1142 = &l_1083;
            int l_1143 = 0x0D256413L;
            int *l_1145 = &l_1047;
            int *l_1146 = &g_1112;
            int *l_1147 = (void*)0;
            int *l_1148 = (void*)0;
            int *l_1149 = &g_66;
            int *l_1150 = &l_1029;
            int *l_1151 = &l_1143;
            int *l_1152 = &l_1029;
            int l_1153 = 1L;
            int *l_1154 = &g_1112;
            int *l_1155 = &l_1083;
            int *l_1156 = &l_942;
            int *l_1158 = (void*)0;
            int *l_1159 = &l_1029;
            int *l_1160 = &g_617;
            int *l_1161 = &l_1068;
            int *l_1162 = (void*)0;
            int *l_1163 = &g_66;
            int *l_1164 = (void*)0;
            int *l_1165 = (void*)0;
            int *l_1166 = &l_1040;
            int *l_1167 = &l_1047;
            int *l_1168 = (void*)0;
            int *l_1169 = (void*)0;
            int *l_1170 = &g_617;
            int *l_1171 = &l_1153;
            int *l_1172 = &l_1047;
            int l_1173 = 0xEB110329L;
            int *l_1174 = &l_1029;
            int *l_1175 = &l_1047;
            int *l_1176 = &l_1173;
            int *l_1177 = &l_1173;
            int *l_1178 = &g_125;
            int *l_1179 = &l_942;
            int *l_1180 = &l_1029;
            int *l_1181 = &l_1143;
            int *l_1182 = &l_926;
            int *l_1183 = &l_1029;
            int *l_1184 = &l_942;
            int *l_1185 = &l_1078;
            int *l_1186 = &l_1068;
            int *l_1187 = &l_1029;
            int *l_1188 = &g_125;
            int *l_1189 = &g_74;
            int *l_1190 = &l_926;
            int *l_1191 = &l_1040;
            int *l_1192 = (void*)0;
            int *l_1193 = &l_1083;
            int *l_1195 = &g_1112;
            int *l_1196 = &l_1068;
            int *l_1197 = &l_942;
            int *l_1198 = &l_1083;
            int *l_1199 = &l_1047;
            int *l_1200 = &g_66;
            int *l_1201 = &l_1047;
            int *l_1202 = &l_1068;
            int *l_1203 = &l_1010;
            int *l_1204 = &l_926;
            int *l_1205 = &l_1153;
            int *l_1206 = &l_1153;
            int *l_1207 = &l_1173;
            int *l_1208 = &g_125;
            int *l_1209 = &g_1112;
            int l_1211 = 0x8AAB4918L;
            int *l_1212 = &g_1112;
            int *l_1213 = (void*)0;
            int *l_1214 = (void*)0;
            int *l_1215 = &l_1029;
            int *l_1216 = &l_1083;
            int *l_1217 = &l_1078;
            int *l_1218 = (void*)0;
            int *l_1219 = (void*)0;
            int *l_1220 = (void*)0;
            int *l_1221 = &g_661;
            int *l_1222 = &l_1173;
            int *l_1223 = &l_1078;
            int *l_1224 = &l_1047;
            int *l_1225 = &l_1068;
            int *l_1226 = (void*)0;
            int *l_1227 = &g_1112;
            int *l_1228 = &l_1078;
            int *l_1230 = (void*)0;
            int *l_1231 = &l_1078;
            int *l_1232 = &g_1210;
            int *l_1233 = &l_1143;
            int *l_1235 = (void*)0;
            int *l_1236 = &l_1029;
            int *l_1237 = &l_926;
            int *l_1239 = (void*)0;
            int *l_1240 = (void*)0;
            int *l_1241 = (void*)0;
            int *l_1242 = &g_125;
            int *l_1243 = &l_1029;
            int *l_1244 = &l_1211;
            int *l_1245 = (void*)0;
            int *l_1247 = (void*)0;
            g_1248--;
            return (*l_857);
        }
        else
        {
            int *l_1251 = &l_1047;
            int *l_1252 = &g_1112;
            int *l_1253 = &l_1078;
            int *l_1254 = &l_1229;
            int *l_1255 = (void*)0;
            int *l_1256 = &l_942;
            int *l_1257 = &l_926;
            int *l_1258 = &l_1040;
            int *l_1259 = (void*)0;
            int *l_1260 = &g_66;
            int *l_1261 = (void*)0;
            int *l_1262 = (void*)0;
            int *l_1263 = &g_66;
            int *l_1264 = &g_74;
            int *l_1265 = &g_74;
            int *l_1266 = &l_942;
            int *l_1267 = &l_1029;
            int *l_1268 = &l_926;
            int *l_1269 = &g_125;
            int *l_1270 = &l_1029;
            int *l_1271 = &l_1234;
            int *l_1272 = &l_1229;
            int *l_1273 = &l_1083;
            int *l_1274 = &l_1029;
            int *l_1275 = &l_1040;
            int *l_1276 = &g_1210;
            int *l_1277 = &l_1068;
            int *l_1278 = &l_926;
            int *l_1279 = (void*)0;
            int *l_1280 = &l_1040;
            int *l_1281 = &l_942;
            int *l_1282 = (void*)0;
            int *l_1283 = (void*)0;
            int *l_1284 = &l_1234;
            int *l_1285 = &g_74;
            int *l_1286 = (void*)0;
            int *l_1287 = &g_661;
            int *l_1288 = &l_1229;
            int *l_1289 = &l_1040;
            int *l_1290 = &g_1112;
            int *l_1291 = (void*)0;
            int *l_1292 = &l_1234;
            int *l_1293 = &g_125;
            int *l_1294 = &l_1083;
            int *l_1295 = (void*)0;
            int *l_1296 = &l_1040;
            int *l_1297 = &l_926;
            int *l_1298 = &g_617;
            int *l_1299 = &l_1229;
            int *l_1300 = &l_1040;
            int *l_1301 = &l_1229;
            int *l_1302 = &g_1112;
            int *l_1303 = &g_661;
            int *l_1304 = &l_1029;
            int *l_1306 = &g_661;
            int *l_1307 = &g_74;
            int *l_1308 = &g_74;
            int *l_1309 = &l_1083;
            int *l_1310 = &l_1047;
            int *l_1311 = &l_1047;
            int *l_1312 = &l_1234;
            int *l_1313 = &g_617;
            int *l_1314 = &g_617;
            int *l_1315 = (void*)0;
            int *l_1316 = &g_1210;
            int *l_1317 = &g_125;
            int *l_1318 = &l_1029;
            int *l_1319 = &g_1112;
            int *l_1320 = &l_926;
            int *l_1321 = (void*)0;
            int *l_1322 = &g_617;
            int *l_1323 = &l_1029;
            int *l_1324 = &l_1010;
            int *l_1325 = &l_1234;
            int *l_1326 = &l_1305;
            int *l_1327 = &l_942;
            int *l_1328 = (void*)0;
            int *l_1329 = &g_125;
            int *l_1330 = &g_1112;
            int *l_1331 = &l_1083;
            int *l_1332 = &l_1305;
            int *l_1333 = &l_1229;
            int *l_1334 = &l_1078;
            int *l_1335 = &g_74;
            int *l_1336 = &l_1010;
            int *l_1337 = &l_1029;
            int *l_1338 = &l_1068;
            int *l_1339 = &g_617;
            int *l_1340 = &l_1040;
            int *l_1341 = (void*)0;
            int *l_1342 = &l_1234;
            int *l_1343 = &g_1210;
            int *l_1344 = &l_1305;
            int *l_1345 = &l_942;
            int *l_1346 = &g_661;
            int *l_1349 = &l_942;
            int *l_1350 = (void*)0;
            int *l_1351 = &g_74;
            int *l_1352 = (void*)0;
            int *l_1353 = &l_1234;
            int *l_1354 = (void*)0;
            int *l_1355 = &l_1234;
            int *l_1356 = &g_1112;
            int *l_1357 = &l_1040;
            int *l_1358 = &l_1234;
            int *l_1359 = &g_66;
            g_1360--;
            return p_4;
        }
    }
    else
    {
        int l_1363 = (-1L);
        int l_1368 = 0x47CDC692L;
        int l_1376 = 0x632CFFD9L;
        int l_1416 = 0x465239E5L;
        int l_1430 = 0x4D4AC8E0L;
        int l_1450 = 5L;
        char l_1490 = 1L;
        int l_1493 = 0xC03ECF74L;
        int l_1497 = 0xFCEE5C1AL;
        int l_1504 = 3L;
        int l_1522 = 1L;
        short *l_1578 = &g_1238;
        int l_1954 = 1L;
        unsigned char *l_2070 = &g_796;
        const unsigned short l_2071 = 3UL;
        struct S0 l_2234 = {1935,42,80,-3,-2,1L,11405};
        unsigned short *l_2510 = &g_129;
        unsigned char l_2559 = 0UL;
        char *l_2790 = &l_1157;
        if (l_1363)
        {
            int **l_1364 = &g_275;
            int *l_1365 = &g_1210;
            int *l_1366 = (void*)0;
            int *l_1367 = (void*)0;
            int *l_1369 = &g_1347;
            int *l_1370 = (void*)0;
            int l_1371 = 2L;
            int *l_1372 = &g_125;
            int *l_1373 = &l_1068;
            int *l_1374 = &l_1305;
            int *l_1375 = &l_1010;
            int *l_1377 = (void*)0;
            int *l_1378 = &l_1078;
            int *l_1379 = &l_1010;
            int *l_1380 = &l_1376;
            int *l_1381 = &l_1040;
            int *l_1382 = (void*)0;
            int *l_1383 = (void*)0;
            int *l_1384 = &l_1040;
            int *l_1385 = &l_1376;
            int *l_1386 = &l_1029;
            int *l_1387 = &g_1112;
            int *l_1388 = (void*)0;
            int *l_1389 = (void*)0;
            int *l_1390 = &g_1210;
            int *l_1391 = (void*)0;
            int *l_1392 = &l_1078;
            int *l_1393 = &l_1040;
            int *l_1394 = &l_1047;
            int *l_1395 = &l_1029;
            int *l_1396 = &l_1047;
            int *l_1397 = &g_74;
            int *l_1398 = &g_66;
            int *l_1399 = &g_1347;
            int *l_1400 = &l_1047;
            int *l_1401 = (void*)0;
            int *l_1402 = (void*)0;
            int *l_1403 = &g_1210;
            int *l_1404 = &l_1068;
            int l_1405 = 0x21CE23DEL;
            int *l_1406 = &l_1078;
            int l_1407 = 3L;
            int *l_1408 = &l_1078;
            int *l_1409 = (void*)0;
            int *l_1410 = &l_1040;
            int *l_1411 = &g_1347;
            int *l_1412 = &l_1078;
            int *l_1413 = &g_617;
            int *l_1414 = &g_125;
            int *l_1415 = &l_1029;
            int *l_1417 = &g_74;
            int *l_1418 = (void*)0;
            int *l_1419 = (void*)0;
            int *l_1420 = &l_1078;
            int *l_1421 = (void*)0;
            int *l_1422 = &l_1040;
            int *l_1423 = &l_1029;
            int *l_1424 = &l_1040;
            int *l_1425 = &l_1416;
            int *l_1426 = (void*)0;
            int *l_1427 = &l_1416;
            int *l_1428 = &l_1010;
            int *l_1429 = &l_1010;
            int *l_1431 = &l_1376;
            int *l_1432 = (void*)0;
            int *l_1433 = (void*)0;
            int *l_1434 = &g_125;
            int *l_1435 = &l_1405;
            int *l_1436 = &l_1368;
            int *l_1437 = &l_1029;
            int l_1438 = 0L;
            int *l_1439 = &g_125;
            int *l_1440 = &l_1010;
            int *l_1441 = &g_1112;
            int *l_1442 = (void*)0;
            int *l_1443 = &g_66;
            int *l_1444 = &g_125;
            int *l_1445 = &l_1430;
            int *l_1446 = &l_1047;
            int *l_1447 = &g_617;
            int *l_1448 = &l_1368;
            int l_1449 = 1L;
            int *l_1451 = &l_1305;
            int *l_1452 = &g_661;
            int *l_1453 = &l_1029;
            int *l_1454 = (void*)0;
            int *l_1455 = (void*)0;
            int *l_1456 = &l_1450;
            int *l_1457 = &l_1029;
            int *l_1458 = &g_661;
            int *l_1459 = &l_1029;
            int *l_1460 = &l_1430;
            int *l_1461 = &l_1450;
            int *l_1462 = &l_1078;
            int *l_1463 = &l_1416;
            int *l_1464 = (void*)0;
            int *l_1465 = (void*)0;
            int *l_1466 = &g_661;
            int *l_1467 = &l_1078;
            int *l_1468 = &l_1305;
            int *l_1469 = (void*)0;
            int *l_1470 = &g_74;
            int *l_1471 = (void*)0;
            int *l_1472 = &l_1376;
            int *l_1473 = &l_1040;
            int *l_1474 = &l_1305;
            int *l_1475 = &l_1029;
            int *l_1476 = &l_1430;
            int *l_1477 = &l_1449;
            int *l_1478 = &g_1210;
            int *l_1479 = (void*)0;
            int *l_1480 = &g_125;
            int *l_1481 = &l_1449;
            int *l_1482 = &l_1407;
            int *l_1483 = &l_1430;
            int *l_1484 = &l_1040;
            int *l_1485 = &l_1407;
            int *l_1486 = &l_1078;
            int *l_1487 = &l_1405;
            int *l_1488 = (void*)0;
            int *l_1489 = &g_1112;
            int *l_1491 = &l_1376;
            int *l_1492 = &g_661;
            int *l_1494 = &g_1112;
            int *l_1495 = (void*)0;
            int *l_1496 = (void*)0;
            int *l_1498 = &l_1376;
            int *l_1499 = &l_1068;
            int *l_1500 = &g_66;
            int *l_1501 = &l_1068;
            int *l_1502 = &l_1305;
            int *l_1503 = &g_1347;
            int *l_1505 = &l_1407;
            int *l_1506 = &l_1493;
            int *l_1507 = (void*)0;
            int *l_1508 = &g_66;
            int *l_1509 = &l_1450;
            int *l_1510 = &g_1347;
            int *l_1511 = &g_66;
            int *l_1512 = &l_1493;
            int *l_1513 = &l_1040;
            int *l_1514 = (void*)0;
            int *l_1515 = &l_1010;
            int *l_1516 = (void*)0;
            int *l_1517 = &g_1112;
            int *l_1518 = &l_1449;
            int *l_1519 = &l_1497;
            int *l_1520 = &l_1029;
            int *l_1521 = &l_1068;
            int *l_1523 = &l_1449;
            int *l_1524 = &g_1347;
            int *l_1525 = &l_1449;
            int *l_1526 = &l_1450;
            int *l_1527 = &l_1522;
            int *l_1528 = &l_1493;
            int *l_1529 = &l_1522;
            int *l_1530 = &l_1450;
            int *l_1531 = (void*)0;
            int *l_1532 = &l_1493;
            int *l_1533 = &l_1305;
            int *l_1534 = &g_66;
            int *l_1535 = &l_1305;
            int *l_1536 = &l_1376;
            int *l_1537 = &l_1078;
            int *l_1539 = (void*)0;
            int *l_1540 = &g_125;
            int *l_1541 = (void*)0;
            int *l_1542 = &g_125;
            int *l_1543 = (void*)0;
            int *l_1544 = &g_617;
            (*l_1364) = &p_3;
            --g_1545;
            (*l_1364) = &p_3;
        }
        else
        {
            unsigned short l_1550 = 0x80A5L;
            int *l_1551 = (void*)0;
            short l_1570 = (-2L);
            int **l_1576 = &g_275;
            int *l_1581 = &l_1078;
            int *l_1592 = &l_1068;
            unsigned short *l_1593 = &g_828;
            int *l_1602 = (void*)0;
            int *l_1603 = &l_1376;
            int l_1618 = (-6L);
            int l_1666 = 0x6C1390E4L;
            int l_1756 = 4L;
            int l_1771 = 0x58CD0BD3L;
            short l_1773 = 0x2EEEL;
            int l_1777 = 0x37812FE0L;
            int l_1789 = 1L;
            char ***l_1794 = &g_238;
            char ****l_1796 = &l_1795;
            struct S0 l_1805 = {-2516,196,83,0,4,0x2CL,2073};
            if (((safe_div_func_uint16_t_u_u((func_7(p_5, l_1550, g_274.f3, l_875, l_875.f5) <= l_1497), p_3)) >= (l_1551 != &l_1363)))
            {
lbl_1604:
                g_617 &= (p_3 < (l_1550 == g_1552));
            }
            else
            {
                int **l_1553 = &g_275;
                unsigned short *l_1571 = (void*)0;
                unsigned short *l_1572 = (void*)0;
                unsigned short *l_1573 = &g_1552;
                char *l_1577 = &g_599;
                short **l_1579 = &l_1578;
                int l_1580 = 0xA5EED221L;
                (*l_1553) = &p_3;
                for (g_1545 = (-7); (g_1545 <= 40); g_1545 = safe_add_func_int32_t_s_s(g_1545, 2))
                {
                    short *l_1558 = &g_49;
                    int l_1561 = (-4L);
                    char *l_1566 = &l_1157;
                    if (((safe_mod_func_int16_t_s_s(((*l_1558) = p_4), ((l_1416 = p_3) || ((safe_add_func_int32_t_s_s(1L, l_1561)) | p_3)))) & ((safe_mod_func_uint16_t_u_u((((*l_1566) &= ((&g_215 != l_1564) & ((0x20L > g_840) <= 0x74L))) >= g_404), 0x45B8L)) > (*g_296))))
                    {
                        int *l_1567 = &l_1561;
                        (*l_1553) = l_1567;
                        (**l_1553) ^= (*g_324);
                        (*g_275) |= 0xC02B98DAL;
                        if ((*l_1567))
                            break;
                    }
                    else
                    {
                        (*l_1553) = &g_1112;
                        (*g_275) = (safe_div_func_uint16_t_u_u(p_6, g_702));
                        return l_1570;
                    }
                    (**l_1553) &= l_1570;
                }
                (*l_1576) = func_67(((*l_1577) ^= ((*g_324) | ((--(*l_1573)) && (&g_324 == l_1576)))), ((*l_1579) = l_1578));
                l_1580 = p_5;
            }
            (*l_1581) |= ((*g_324) ^ ((&g_1348 != l_1578) <= l_875.f2));
            if ((safe_sub_func_int32_t_s_s(((*l_1603) = (safe_sub_func_uint8_t_u_u((((*l_1581) = (*g_324)) ^ (((((safe_div_func_uint8_t_u_u(g_274.f5, l_1504)) && ((void*)0 != &g_238)) ^ (((g_1348 && (safe_add_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u(((l_1592 = &p_3) == &l_1029), 2)) & ((*l_1593)--)) > (++(**l_1564))), (safe_div_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(p_4, g_796)) > g_962), g_130))))) > (-1L)) | 0xDF7C1607L)) >= p_6) & l_1497)), 1L))), p_5)))
            {
                unsigned char l_1605 = 255UL;
                int *l_1606 = &g_1210;
                int *l_1607 = (void*)0;
                int *l_1608 = &l_1430;
                int *l_1609 = &l_1416;
                int *l_1610 = &l_1522;
                int *l_1611 = (void*)0;
                int *l_1612 = &l_1305;
                int *l_1613 = &l_1047;
                int *l_1614 = &l_1010;
                int *l_1615 = &l_1068;
                int *l_1616 = &l_1047;
                int *l_1617 = &l_1504;
                int *l_1619 = (void*)0;
                int *l_1620 = &l_1504;
                int l_1621 = 0x9CE1104FL;
                int *l_1622 = &g_74;
                int *l_1623 = &g_66;
                int *l_1624 = &g_1210;
                int *l_1625 = &l_1068;
                int *l_1626 = &l_1305;
                int *l_1627 = &l_1522;
                int *l_1628 = &g_74;
                int *l_1629 = (void*)0;
                int *l_1630 = &g_1347;
                int *l_1631 = &l_1068;
                int *l_1632 = &l_1040;
                int *l_1633 = &g_66;
                int *l_1634 = (void*)0;
                int *l_1635 = &g_66;
                int *l_1636 = (void*)0;
                int *l_1637 = &g_66;
                int *l_1638 = (void*)0;
                int *l_1639 = &l_1368;
                int *l_1640 = &l_1368;
                int *l_1641 = &l_1522;
                int *l_1642 = &l_1010;
                int *l_1643 = &g_66;
                int *l_1644 = &l_1497;
                int l_1645 = 1L;
                int *l_1646 = (void*)0;
                int *l_1647 = &l_1430;
                int *l_1648 = (void*)0;
                int *l_1649 = &l_1416;
                int *l_1650 = &l_1504;
                int *l_1651 = &l_1430;
                int *l_1652 = &g_1210;
                int *l_1653 = &l_1376;
                int *l_1654 = &l_1305;
                int *l_1655 = &l_1497;
                int *l_1656 = &g_617;
                int *l_1657 = &l_1029;
                int *l_1658 = &g_661;
                int *l_1659 = &l_1416;
                int *l_1660 = &l_1645;
                int *l_1661 = &g_661;
                int *l_1662 = &g_1347;
                int *l_1663 = &g_1112;
                int *l_1664 = &g_1347;
                int *l_1665 = &l_1416;
                int *l_1667 = (void*)0;
                int *l_1668 = &l_1450;
                int *l_1669 = (void*)0;
                int *l_1670 = &l_1450;
                int *l_1671 = &l_1450;
                int *l_1672 = &l_1010;
                int *l_1673 = (void*)0;
                int *l_1674 = &l_1376;
                int *l_1675 = &l_1029;
                int *l_1676 = &l_1305;
                int l_1677 = 7L;
                int *l_1678 = &g_617;
                int *l_1679 = &g_66;
                int l_1680 = 7L;
                int *l_1681 = &l_1504;
                int *l_1682 = &l_1368;
                int *l_1683 = (void*)0;
                int *l_1684 = &l_1645;
                int *l_1685 = &l_1305;
                int *l_1686 = &l_1493;
                int *l_1687 = &g_74;
                int *l_1688 = &l_1078;
                int *l_1689 = &l_1376;
                int *l_1690 = (void*)0;
                int l_1691 = 0x2FAB2903L;
                int *l_1692 = &l_1493;
                int *l_1693 = &g_617;
                int *l_1694 = &l_1645;
                int *l_1695 = &l_1680;
                int *l_1696 = &l_1078;
                int *l_1697 = &l_1497;
                int *l_1698 = &l_1493;
                int *l_1699 = &l_1047;
                int *l_1700 = &l_1368;
                int *l_1701 = &l_1376;
                int *l_1702 = &l_1677;
                int *l_1703 = &l_1430;
                int *l_1704 = &g_66;
                int l_1705 = 0L;
                int *l_1706 = (void*)0;
                int *l_1707 = &l_1522;
                int *l_1708 = &l_1666;
                int *l_1709 = &l_1680;
                int *l_1710 = &g_661;
                int *l_1711 = &g_74;
                int *l_1712 = &l_1666;
                int *l_1713 = &l_1705;
                int *l_1714 = &l_1010;
                int *l_1715 = &g_661;
                int *l_1716 = (void*)0;
                int *l_1717 = (void*)0;
                int *l_1718 = (void*)0;
                int *l_1719 = &l_1040;
                int *l_1720 = &l_1368;
                int *l_1721 = &l_1305;
                int *l_1722 = &l_1029;
                int *l_1723 = &l_1430;
                int *l_1724 = &g_66;
                int l_1725 = (-1L);
                int *l_1726 = (void*)0;
                int *l_1727 = (void*)0;
                int *l_1728 = &g_125;
                int *l_1729 = &l_1705;
                int *l_1730 = &l_1677;
                int *l_1731 = &l_1666;
                int *l_1732 = &l_1368;
                int *l_1733 = &l_1305;
                int *l_1734 = &l_1705;
                int *l_1735 = &g_125;
                int *l_1736 = (void*)0;
                int *l_1737 = &g_661;
                int *l_1738 = &l_1680;
                int *l_1739 = &g_617;
                int *l_1740 = &l_1621;
                int *l_1741 = &l_1068;
                int *l_1742 = &l_1680;
                int *l_1743 = (void*)0;
                int *l_1744 = &g_661;
                int *l_1745 = &g_1347;
                int *l_1746 = &l_1645;
                int *l_1747 = &l_1666;
                int *l_1748 = &l_1368;
                int *l_1749 = &l_1680;
                int *l_1750 = &l_1504;
                int *l_1751 = &g_1210;
                int *l_1752 = &g_66;
                int *l_1753 = &l_1645;
                int *l_1754 = &l_1010;
                int *l_1755 = (void*)0;
                int *l_1757 = &g_74;
                int *l_1758 = &g_74;
                int *l_1759 = &l_1645;
                int *l_1760 = &l_1068;
                int l_1761 = 0L;
                int *l_1762 = &g_661;
                int *l_1763 = (void*)0;
                int *l_1764 = &l_1376;
                int *l_1765 = &l_1068;
                int *l_1766 = &g_125;
                int *l_1767 = (void*)0;
                int *l_1768 = &l_1010;
                int *l_1769 = &l_1368;
                int *l_1770 = (void*)0;
                int *l_1772 = &g_617;
                int *l_1774 = &l_1497;
                int *l_1775 = &l_1522;
                int *l_1776 = (void*)0;
                int *l_1778 = &l_1497;
                int *l_1779 = &l_1756;
                int *l_1780 = &g_66;
                int *l_1781 = &l_1761;
                int *l_1782 = &l_1691;
                int *l_1783 = &g_125;
                int *l_1784 = &l_1430;
                int *l_1785 = &l_1430;
                int *l_1786 = &l_1029;
                int *l_1787 = &l_1029;
                int *l_1788 = &g_1347;
                if (g_274.f0)
                    goto lbl_1604;
                (*l_1576) = func_67(l_1605, l_1578);
                ++g_1790;
            }
            else
            {
                unsigned short l_1793 = 0xEE1DL;
                return l_1793;
            }
            if (((*l_1603) = (((*l_1592) = ((l_1794 = &g_238) == ((*l_1796) = l_1795))) ^ (0x7FL == (safe_add_func_int32_t_s_s((((*g_324) | (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((0x52L & (0xACL >= func_7((safe_add_func_uint16_t_u_u(p_6, ((*l_1578) = 0x9AB1L))), l_1450, l_1504, l_1805, p_4))), 3)), l_855))) | l_1376), (*g_296)))))))
            {
                (*l_1592) &= l_1450;
            }
            else
            {
                (*l_1576) = &g_66;
            }
        }
        if (p_6)
        {
            int *l_1806 = &g_1210;
            int *l_1807 = &g_125;
            int l_1808 = 0x9A4B9BEBL;
            int *l_1809 = &g_1210;
            int *l_1810 = &g_1347;
            int *l_1811 = &l_1430;
            int *l_1812 = &l_1305;
            int *l_1813 = (void*)0;
            int *l_1814 = (void*)0;
            int *l_1815 = &l_1497;
            int *l_1816 = &l_1047;
            int *l_1817 = &l_1416;
            int *l_1818 = &l_1078;
            int *l_1819 = &l_1450;
            int *l_1820 = (void*)0;
            int *l_1821 = &g_1347;
            int *l_1822 = &l_1493;
            int *l_1823 = &l_1493;
            int *l_1824 = &l_1416;
            int *l_1825 = &l_1808;
            int *l_1826 = &l_1430;
            int *l_1827 = &l_1808;
            int *l_1828 = &l_1029;
            int *l_1829 = &l_1430;
            int *l_1830 = (void*)0;
            int *l_1831 = &l_1368;
            int *l_1832 = (void*)0;
            int *l_1833 = &l_1010;
            int *l_1834 = (void*)0;
            int *l_1835 = &g_74;
            int *l_1836 = &l_1029;
            int *l_1837 = &l_1450;
            int *l_1838 = &g_66;
            int *l_1839 = &g_661;
            int *l_1840 = &l_1430;
            int *l_1841 = &l_1808;
            int *l_1842 = &g_74;
            int *l_1843 = &l_1047;
            int *l_1844 = &g_66;
            int *l_1845 = (void*)0;
            int *l_1846 = (void*)0;
            int *l_1847 = &l_1305;
            int *l_1848 = &l_1040;
            int *l_1849 = &l_1376;
            int *l_1850 = &l_1504;
            int *l_1851 = &g_661;
            int *l_1852 = (void*)0;
            int *l_1853 = &g_1112;
            int *l_1854 = (void*)0;
            int *l_1855 = &g_66;
            int *l_1856 = (void*)0;
            int *l_1857 = &g_1210;
            int *l_1858 = (void*)0;
            int *l_1859 = &g_74;
            int *l_1860 = &g_66;
            int *l_1861 = &l_1068;
            int *l_1862 = &l_1493;
            int *l_1863 = (void*)0;
            int l_1864 = 0L;
            int *l_1865 = &l_1368;
            int *l_1866 = (void*)0;
            int *l_1867 = (void*)0;
            int *l_1868 = &g_1112;
            int *l_1869 = (void*)0;
            int *l_1870 = &l_1504;
            int *l_1871 = &g_125;
            int *l_1872 = &l_1047;
            int *l_1873 = (void*)0;
            int *l_1874 = &g_74;
            int *l_1875 = &l_1504;
            int *l_1876 = &l_1522;
            int *l_1877 = (void*)0;
            int *l_1878 = &g_661;
            int *l_1879 = &l_1047;
            int *l_1880 = &g_66;
            int *l_1881 = &l_1864;
            int *l_1882 = &l_1430;
            int *l_1883 = &g_74;
            int *l_1884 = (void*)0;
            int *l_1885 = &l_1047;
            int *l_1886 = &l_1047;
            int *l_1887 = &l_1497;
            int *l_1888 = (void*)0;
            int *l_1889 = &l_1047;
            int *l_1890 = &g_617;
            int *l_1891 = &l_1368;
            int *l_1892 = &l_1305;
            int *l_1893 = &g_125;
            int *l_1894 = &l_1047;
            int *l_1895 = &g_1210;
            int *l_1896 = &g_1112;
            int *l_1897 = &l_1029;
            int *l_1898 = &l_1368;
            int *l_1899 = &l_1040;
            int *l_1900 = &g_617;
            int *l_1901 = &l_1040;
            int *l_1902 = &l_1376;
            int *l_1903 = &l_1522;
            int *l_1904 = &l_1808;
            int l_1905 = (-6L);
            int *l_1906 = (void*)0;
            int *l_1907 = &l_1493;
            int *l_1908 = &l_1430;
            int *l_1909 = &l_1040;
            int *l_1910 = &g_66;
            int *l_1911 = &g_1210;
            int *l_1912 = &g_125;
            int *l_1913 = (void*)0;
            int *l_1914 = &l_1504;
            int *l_1915 = &l_1504;
            int *l_1916 = (void*)0;
            int *l_1917 = &g_125;
            int *l_1918 = &g_617;
            int *l_1919 = (void*)0;
            int *l_1920 = &l_1497;
            int *l_1921 = &g_66;
            int l_1922 = 0x125CE3BEL;
            int *l_1923 = &l_1522;
            int *l_1924 = &l_1376;
            int *l_1925 = &l_1493;
            int *l_1926 = (void*)0;
            int *l_1927 = &l_1504;
            int *l_1928 = &g_74;
            int *l_1929 = &g_1347;
            int *l_1930 = &l_1040;
            int l_1931 = 0L;
            int *l_1932 = (void*)0;
            int *l_1933 = &l_1497;
            int *l_1934 = (void*)0;
            int *l_1935 = (void*)0;
            int *l_1936 = (void*)0;
            int *l_1937 = &l_1416;
            int *l_1938 = &l_1078;
            int *l_1939 = &l_1416;
            int *l_1940 = &l_1931;
            int *l_1941 = (void*)0;
            int *l_1942 = &g_1112;
            int *l_1943 = (void*)0;
            int *l_1944 = &l_1078;
            int *l_1945 = &l_1931;
            int *l_1946 = &l_1497;
            int *l_1947 = (void*)0;
            int l_1948 = (-1L);
            int *l_1949 = &g_1112;
            int *l_1950 = &l_1040;
            int *l_1951 = &g_661;
            int *l_1952 = &l_1068;
            int *l_1953 = (void*)0;
            int *l_1955 = (void*)0;
            int *l_1956 = (void*)0;
            int *l_1957 = &l_1522;
            int *l_1958 = &l_1948;
            int *l_1959 = &l_1305;
            int *l_1960 = &l_1068;
            int *l_1961 = &l_1808;
            int *l_1962 = (void*)0;
            int *l_1963 = &l_1922;
            int *l_1964 = &l_1040;
            int *l_1965 = &l_1416;
            int *l_1966 = &l_1522;
            int *l_1967 = (void*)0;
            int *l_1968 = &l_1047;
            int *l_1969 = &l_1416;
            int *l_1970 = &l_1305;
            int *l_1971 = &g_125;
            int *l_1972 = &g_125;
            int *l_1973 = &l_1450;
            int *l_1974 = &l_1029;
            int *l_1975 = &l_1497;
            int *l_1976 = &g_617;
            int *l_1977 = (void*)0;
            int *l_1978 = &l_1040;
            int *l_1979 = &l_1305;
            int *l_1980 = &l_1504;
            int *l_1981 = (void*)0;
            int *l_1982 = (void*)0;
            int l_1983 = 0xB5BEAAF9L;
            int *l_1984 = &g_1112;
            int *l_1985 = &l_1376;
            int *l_1986 = &g_617;
            int *l_1987 = &l_1808;
            int l_1988 = 0x7F9CDBB1L;
            int *l_1989 = &g_1112;
            int *l_1990 = &l_1504;
            int *l_1991 = &l_1368;
            int *l_1992 = &g_1210;
            int *l_1993 = &l_1905;
            int *l_1994 = &l_1905;
            int *l_1995 = &l_1931;
            int *l_1996 = &l_1010;
            int *l_1997 = (void*)0;
            int *l_1998 = &l_1078;
            int l_1999 = 2L;
            int l_2000 = 0xB75884B3L;
            int *l_2001 = &l_1368;
            int *l_2002 = &l_1808;
            int *l_2003 = &l_1905;
            int *l_2004 = &l_1010;
            int *l_2005 = (void*)0;
            int *l_2006 = &l_1905;
            int *l_2007 = (void*)0;
            int *l_2008 = &g_125;
            int *l_2009 = &l_1504;
            int *l_2010 = (void*)0;
            int *l_2011 = &l_1450;
            int *l_2012 = &g_661;
            int *l_2013 = &l_1808;
            int *l_2014 = (void*)0;
            int l_2015 = 1L;
            int *l_2016 = &l_1922;
            int *l_2017 = &l_1905;
            int *l_2018 = &l_1522;
            int *l_2019 = (void*)0;
            int *l_2020 = &l_1983;
            int *l_2021 = &g_1112;
            int *l_2022 = &l_1040;
            int *l_2023 = &l_1368;
            int *l_2024 = &l_1416;
            int *l_2025 = &l_1416;
            int *l_2026 = &g_74;
            int l_2027 = 0x9AE219D6L;
            int *l_2028 = &l_1430;
            g_2029--;
            (*l_2020) &= ((safe_sub_func_uint16_t_u_u(65528UL, g_175)) >= ((safe_lshift_func_uint8_t_u_u((((l_1578 != l_1578) | ((*l_1860) && (g_2036 != l_2038))) == (*g_296)), (((*l_1938) ^= g_1360) | p_6))) ^ (-6L)));
        }
        else
        {
            unsigned l_2059 = 0xC8921D14L;
            int *l_2062 = &l_1047;
            for (g_2029 = 0; (g_2029 > 12); g_2029++)
            {
                short l_2042 = (-1L);
                int *l_2043 = &l_1497;
                int *l_2044 = &g_74;
                int *l_2045 = &g_66;
                int *l_2046 = &l_1493;
                int *l_2047 = (void*)0;
                int *l_2048 = &l_1078;
                int *l_2049 = &l_1305;
                int *l_2050 = (void*)0;
                int *l_2051 = &g_125;
                int *l_2052 = &g_66;
                int *l_2053 = &l_1497;
                int *l_2054 = (void*)0;
                int *l_2055 = &g_1112;
                int *l_2056 = (void*)0;
                int *l_2057 = &g_1112;
                int *l_2058 = (void*)0;
                g_274.f0 = l_1047;
                --l_2059;
                (*l_2048) = (0x8158L <= g_1348);
            }
            l_2062 = l_2062;
            for (g_81 = 0; (g_81 <= 20); g_81 = safe_add_func_uint16_t_u_u(g_81, 2))
            {
                int **l_2065 = &l_2062;
                int **l_2066 = &g_275;
                (*l_2066) = ((*l_2065) = &l_1029);
            }
        }
        for (l_1047 = (-5); (l_1047 == 14); l_1047 = safe_add_func_int32_t_s_s(l_1047, 3))
        {
            int *l_2069 = &g_1112;
            (*l_2069) = l_1305;
            (*l_2069) = (1L >= (&g_141 == (l_2070 = &g_141)));
        }
        if (l_2071)
        {
            int *l_2072 = &l_1029;
            int *l_2073 = &l_1493;
            int *l_2074 = &g_66;
            int *l_2075 = &g_1347;
            int *l_2076 = (void*)0;
            int *l_2077 = (void*)0;
            int *l_2078 = (void*)0;
            int *l_2079 = &g_1210;
            int *l_2080 = (void*)0;
            int *l_2081 = &l_1504;
            int *l_2082 = &l_1493;
            int *l_2083 = &l_1305;
            int *l_2084 = &g_74;
            int *l_2085 = &g_125;
            int *l_2086 = &l_1029;
            short l_2087 = 0xC92BL;
            int *l_2088 = &l_1450;
            int *l_2089 = &g_1347;
            int *l_2090 = &g_661;
            int *l_2091 = &g_617;
            int *l_2092 = (void*)0;
            int *l_2093 = &l_1010;
            int *l_2094 = &g_74;
            int l_2095 = 0x480D707FL;
            int *l_2096 = &l_1010;
            int *l_2097 = &l_1305;
            int *l_2098 = &l_1047;
            int *l_2099 = &l_1368;
            int *l_2100 = &g_1210;
            int *l_2101 = &l_1430;
            int *l_2102 = (void*)0;
            int *l_2103 = &l_1430;
            int *l_2104 = &l_1078;
            int *l_2105 = &l_1040;
            int l_2106 = 0x48A7C9D7L;
            int *l_2107 = &g_617;
            int *l_2108 = &l_1368;
            int l_2109 = 0xA59628C3L;
            int *l_2110 = &l_1029;
            int *l_2111 = &l_1522;
            int *l_2112 = (void*)0;
            int *l_2113 = &l_1430;
            int *l_2114 = (void*)0;
            int *l_2115 = &l_1450;
            int l_2116 = 0x9F6FDB66L;
            int *l_2117 = &g_617;
            int *l_2118 = &g_1210;
            int *l_2119 = &l_1430;
            int *l_2120 = &g_1347;
            int *l_2121 = (void*)0;
            int *l_2122 = &g_661;
            int *l_2123 = (void*)0;
            int *l_2124 = (void*)0;
            int *l_2125 = (void*)0;
            int *l_2126 = &l_1416;
            int *l_2127 = &g_125;
            int *l_2128 = &l_1504;
            int *l_2129 = &l_2116;
            int *l_2130 = &l_1010;
            int *l_2131 = &g_1210;
            int *l_2132 = (void*)0;
            int l_2133 = 0x56AB9745L;
            int *l_2134 = &l_2116;
            int *l_2135 = &g_125;
            int *l_2136 = &l_1497;
            int *l_2137 = &g_1112;
            int *l_2138 = &l_1497;
            int *l_2139 = &l_1010;
            int *l_2140 = (void*)0;
            int *l_2141 = &g_1210;
            int *l_2142 = &l_1040;
            int *l_2143 = (void*)0;
            int *l_2144 = &l_1047;
            int *l_2145 = &l_1450;
            int *l_2146 = (void*)0;
            int *l_2147 = &g_125;
            int l_2148 = 0L;
            int *l_2149 = &g_1347;
            int *l_2150 = &l_1010;
            int *l_2151 = &l_1493;
            int *l_2152 = &g_1347;
            int *l_2153 = &l_1504;
            int *l_2154 = &l_1450;
            int *l_2155 = &l_1522;
            int *l_2156 = (void*)0;
            int *l_2157 = &g_125;
            int *l_2158 = (void*)0;
            int *l_2159 = &l_1416;
            int *l_2160 = &g_125;
            int *l_2161 = &l_2133;
            int *l_2162 = &g_1210;
            int *l_2163 = &l_1368;
            int *l_2164 = &l_1010;
            int *l_2165 = &g_1210;
            int *l_2166 = &g_125;
            int *l_2167 = &l_1029;
            int *l_2168 = (void*)0;
            int *l_2169 = &l_1368;
            int *l_2170 = (void*)0;
            int *l_2171 = &g_1112;
            int *l_2172 = (void*)0;
            int *l_2173 = &l_2148;
            int *l_2174 = &l_1522;
            int *l_2175 = &l_1010;
            int *l_2176 = &g_1210;
            int *l_2177 = &l_1078;
            int *l_2178 = &l_2106;
            int *l_2179 = &l_1493;
            int *l_2180 = &l_1522;
            int *l_2181 = &g_74;
            int *l_2182 = &l_2148;
            int *l_2183 = &l_2133;
            int *l_2184 = &l_2148;
            int *l_2185 = &l_1430;
            int *l_2186 = &g_1210;
            int *l_2187 = (void*)0;
            int *l_2188 = &l_1047;
            int *l_2189 = &l_1504;
            int *l_2190 = (void*)0;
            int *l_2191 = &l_1029;
            int *l_2192 = &l_2109;
            int *l_2193 = &l_1450;
            int *l_2194 = &l_1416;
            int *l_2195 = &l_1368;
            int *l_2196 = &l_2133;
            int *l_2197 = (void*)0;
            int *l_2198 = &g_661;
            int *l_2199 = &l_1497;
            int *l_2200 = &l_1450;
            int l_2201 = 0x10B72ACCL;
            int *l_2202 = &l_2106;
            int *l_2203 = (void*)0;
            int *l_2204 = &l_1305;
            int *l_2205 = (void*)0;
            int *l_2206 = &l_2106;
            int *l_2207 = &l_1504;
            int *l_2208 = (void*)0;
            int *l_2209 = &l_1522;
            int l_2210 = 0xAFB70DDEL;
            int *l_2211 = &l_1368;
            int l_2212 = 0xC3F4C5A4L;
            int *l_2213 = &l_2106;
            int *l_2214 = (void*)0;
            int *l_2215 = (void*)0;
            int *l_2216 = &g_125;
            int *l_2217 = (void*)0;
            int *l_2218 = &l_1430;
            int *l_2219 = &l_2095;
            int *l_2220 = &l_1078;
            int *l_2221 = &l_1047;
            int *l_2222 = &l_1497;
            int *l_2223 = &l_2116;
            int *l_2224 = &l_2148;
            int *l_2225 = &g_66;
            --g_2226;
            (*l_2209) ^= ((*l_2126) = 8L);
        }
        else
        {
            char l_2233 = 0x89L;
            int l_2239 = (-8L);
            int l_2317 = 0xD8AEF490L;
            int l_2397 = 1L;
            int l_2521 = 0L;
            char * const *l_2529 = (void*)0;
            char * const **l_2528 = &l_2529;
            char * const ***l_2527 = &l_2528;
            struct S0 l_2560 = {-982,222,62,3,-2,1L,8248};
            g_1210 = (p_4 >= p_4);
            for (g_1790 = 0; (g_1790 >= 5); ++g_1790)
            {
                int l_2244 = (-1L);
                int l_2295 = 0xB484AC90L;
                int l_2355 = (-1L);
                int l_2409 = 0x609995C4L;
                short *l_2538 = &g_60;
                int **l_2539 = (void*)0;
                int **l_2540 = &g_275;
                int *l_2541 = &l_1416;
                if (((void*)0 == &g_1538))
                {
                    struct S0 l_2238 = {-2430,498,-61,-1,-2,0x87L,13997};
                    if ((safe_add_func_uint8_t_u_u(l_2233, func_43((l_2239 &= func_23(((**g_295) < 3L), func_7((**g_295), p_6, p_5, l_2234, ((**l_1564) &= (((*l_1578) ^= ((safe_sub_func_uint16_t_u_u((((void*)0 != l_2237) || 0xE5L), g_826)) ^ 0xABL)) | l_1305))), g_840, g_130, l_2238)), p_5, l_875.f2, p_4, p_3))))
                    {
                        int *l_2240 = (void*)0;
                        int *l_2241 = (void*)0;
                        int *l_2242 = &g_1347;
                        int *l_2243 = &l_1047;
                        int *l_2245 = (void*)0;
                        int *l_2246 = &l_1504;
                        int *l_2247 = &l_1522;
                        int *l_2248 = &g_74;
                        int *l_2249 = &g_125;
                        int *l_2250 = (void*)0;
                        int *l_2251 = &l_1010;
                        int *l_2252 = &g_1347;
                        int *l_2253 = &g_661;
                        int *l_2254 = (void*)0;
                        int *l_2255 = &l_1047;
                        int *l_2256 = &g_125;
                        int *l_2257 = &l_1068;
                        int *l_2258 = (void*)0;
                        int *l_2259 = &l_1430;
                        int *l_2260 = &l_2239;
                        int *l_2261 = &g_617;
                        int *l_2262 = &l_1078;
                        int *l_2263 = &g_74;
                        int *l_2264 = &l_1029;
                        int *l_2265 = &l_1497;
                        int *l_2266 = &g_1347;
                        int *l_2267 = &l_2239;
                        int *l_2268 = &g_661;
                        int *l_2269 = (void*)0;
                        int *l_2270 = &l_1416;
                        int *l_2271 = (void*)0;
                        int *l_2272 = &g_1210;
                        int *l_2273 = &g_661;
                        int *l_2274 = (void*)0;
                        int *l_2275 = &l_1450;
                        int *l_2276 = &l_1010;
                        int *l_2277 = &l_1430;
                        int *l_2278 = &l_1068;
                        int *l_2279 = &l_1493;
                        int *l_2280 = &l_1450;
                        int *l_2281 = &l_1078;
                        int *l_2282 = &l_1368;
                        int *l_2283 = &l_1029;
                        int *l_2284 = &g_74;
                        int *l_2285 = &l_1029;
                        int *l_2286 = (void*)0;
                        int *l_2287 = &l_1430;
                        int *l_2288 = &l_1493;
                        int *l_2289 = &l_1040;
                        int *l_2291 = &l_1068;
                        int *l_2292 = &l_1368;
                        int *l_2293 = &l_1430;
                        int *l_2294 = &l_1493;
                        int *l_2296 = (void*)0;
                        int *l_2297 = &l_1376;
                        int *l_2298 = &l_1522;
                        int *l_2299 = &g_74;
                        int *l_2300 = &l_1029;
                        int *l_2301 = &g_66;
                        int *l_2302 = &l_2295;
                        int *l_2303 = &g_1347;
                        int *l_2304 = &l_1430;
                        int *l_2305 = &l_1504;
                        int *l_2306 = (void*)0;
                        int *l_2307 = &l_1029;
                        int *l_2308 = (void*)0;
                        int *l_2309 = &g_74;
                        int *l_2310 = &l_2295;
                        int *l_2311 = &g_1210;
                        int *l_2312 = (void*)0;
                        int *l_2313 = &l_1430;
                        int *l_2314 = &g_1112;
                        int *l_2315 = &l_1029;
                        int *l_2316 = (void*)0;
                        int *l_2318 = (void*)0;
                        int *l_2319 = &g_1210;
                        int *l_2320 = &l_1497;
                        int *l_2321 = (void*)0;
                        int l_2322 = 0x2ECC66BCL;
                        int *l_2323 = &l_1305;
                        int *l_2324 = &l_1416;
                        int *l_2325 = &l_1376;
                        int *l_2326 = (void*)0;
                        int *l_2327 = &g_1347;
                        int *l_2328 = &l_1368;
                        int *l_2329 = &l_1029;
                        int *l_2330 = &l_1522;
                        int *l_2331 = (void*)0;
                        int *l_2332 = &l_1430;
                        int *l_2333 = &l_1504;
                        int *l_2334 = &g_617;
                        int *l_2335 = &l_1305;
                        int *l_2336 = (void*)0;
                        int *l_2337 = (void*)0;
                        int *l_2338 = &l_1416;
                        int *l_2339 = &l_1305;
                        int *l_2340 = &g_617;
                        int *l_2341 = &l_2295;
                        int *l_2342 = &l_2290;
                        int l_2343 = (-1L);
                        int *l_2344 = &l_1493;
                        int *l_2345 = (void*)0;
                        int *l_2346 = (void*)0;
                        int *l_2347 = &l_1504;
                        int *l_2348 = &l_1522;
                        int *l_2349 = &g_1347;
                        int *l_2350 = &l_1493;
                        int *l_2351 = &l_1493;
                        int *l_2352 = &l_1497;
                        int *l_2353 = &l_1493;
                        int *l_2354 = &l_2290;
                        int *l_2356 = &l_1010;
                        int *l_2357 = &l_2239;
                        int *l_2358 = &l_1029;
                        int *l_2359 = &g_617;
                        int *l_2360 = (void*)0;
                        int *l_2361 = &g_661;
                        int *l_2362 = &l_2343;
                        int *l_2363 = &l_1504;
                        int *l_2364 = (void*)0;
                        int *l_2365 = &g_74;
                        int *l_2366 = (void*)0;
                        int *l_2367 = &l_1430;
                        int *l_2368 = &l_2290;
                        int *l_2369 = &l_2355;
                        int *l_2370 = &g_1210;
                        int *l_2371 = &l_1497;
                        int *l_2372 = (void*)0;
                        int *l_2373 = &l_1368;
                        int *l_2374 = &l_2343;
                        int *l_2375 = &g_617;
                        int *l_2376 = (void*)0;
                        int l_2377 = 0x6F1A99DDL;
                        int *l_2378 = &g_661;
                        int *l_2379 = &l_2239;
                        int *l_2380 = &l_1497;
                        int *l_2381 = &g_617;
                        int *l_2382 = &l_1497;
                        int *l_2383 = &l_1010;
                        int *l_2384 = &g_125;
                        int *l_2385 = &l_1010;
                        int *l_2386 = &g_74;
                        int *l_2387 = &l_1522;
                        int *l_2388 = &l_1305;
                        int *l_2389 = (void*)0;
                        int *l_2390 = &l_1504;
                        int *l_2391 = &l_2239;
                        int *l_2392 = (void*)0;
                        int *l_2393 = &g_617;
                        int *l_2394 = &g_661;
                        int *l_2395 = &g_1347;
                        int *l_2396 = &l_1416;
                        int *l_2398 = &l_2239;
                        int *l_2399 = (void*)0;
                        int *l_2400 = &g_661;
                        int *l_2401 = &l_1504;
                        int *l_2402 = &l_1047;
                        int *l_2403 = &g_617;
                        int *l_2404 = &l_1305;
                        int *l_2405 = &g_1210;
                        int *l_2406 = &l_1416;
                        int *l_2407 = &l_1430;
                        int *l_2408 = &g_1112;
                        int *l_2410 = &l_2397;
                        int *l_2411 = &g_617;
                        int *l_2412 = &l_2343;
                        g_2413--;
                    }
                    else
                    {
                        return p_3;
                    }
                    return p_4;
                }
                else
                {
                    char l_2502 = 0xE6L;
                    l_1010 = (safe_rshift_func_uint16_t_u_s(1UL, 12));
                    if (l_1157)
                        continue;
                    if (l_1363)
                        break;
                    if ((*g_324))
                    {
                        int *l_2418 = &l_1047;
                        int *l_2419 = &g_1112;
                        int *l_2420 = &l_1430;
                        int *l_2421 = &l_2355;
                        int *l_2422 = (void*)0;
                        int *l_2423 = &l_1450;
                        int *l_2424 = (void*)0;
                        int *l_2425 = (void*)0;
                        int *l_2426 = &l_1376;
                        int *l_2427 = &l_2317;
                        int *l_2428 = &l_2295;
                        int *l_2429 = &l_1493;
                        int *l_2430 = &g_1210;
                        int *l_2431 = &g_661;
                        int *l_2432 = &l_1040;
                        int *l_2433 = (void*)0;
                        int *l_2434 = &g_661;
                        int *l_2435 = &l_1493;
                        int *l_2436 = (void*)0;
                        int *l_2437 = &g_1210;
                        int *l_2438 = &l_2397;
                        int *l_2439 = &l_1029;
                        int *l_2440 = (void*)0;
                        int *l_2441 = &l_2397;
                        int *l_2442 = (void*)0;
                        int *l_2443 = &l_1040;
                        int *l_2444 = &g_1347;
                        int *l_2445 = (void*)0;
                        int *l_2446 = &l_1368;
                        int *l_2447 = &l_1078;
                        int *l_2448 = &l_1497;
                        int *l_2449 = (void*)0;
                        int l_2450 = 0x4988D029L;
                        int *l_2451 = (void*)0;
                        int *l_2452 = (void*)0;
                        int l_2453 = 0x2948A6B7L;
                        int *l_2454 = &l_2355;
                        int *l_2455 = &l_1416;
                        int *l_2456 = &g_125;
                        int *l_2457 = &g_125;
                        int *l_2458 = &l_1376;
                        int *l_2459 = &g_125;
                        int *l_2460 = &l_1068;
                        int *l_2461 = &l_1068;
                        int *l_2462 = &l_2409;
                        int *l_2463 = &g_1210;
                        int *l_2464 = &l_2453;
                        int *l_2465 = &g_1112;
                        int *l_2466 = (void*)0;
                        int *l_2467 = &l_1376;
                        int *l_2468 = (void*)0;
                        int *l_2469 = &l_1450;
                        int *l_2470 = &g_1347;
                        int *l_2471 = &l_1368;
                        int *l_2472 = &l_1047;
                        int *l_2473 = &l_1068;
                        int *l_2474 = &l_2355;
                        int *l_2475 = &g_1210;
                        int *l_2476 = &g_1210;
                        int *l_2477 = &l_1068;
                        int *l_2478 = &g_1112;
                        int *l_2479 = &l_1522;
                        int *l_2480 = &l_1504;
                        int *l_2481 = (void*)0;
                        int *l_2482 = &g_661;
                        int *l_2483 = (void*)0;
                        int *l_2484 = (void*)0;
                        int *l_2485 = (void*)0;
                        int *l_2486 = &l_2453;
                        int *l_2487 = (void*)0;
                        int *l_2488 = &l_1450;
                        int *l_2489 = &g_1347;
                        int *l_2490 = &l_2453;
                        int *l_2491 = &l_2317;
                        int *l_2492 = (void*)0;
                        int *l_2493 = &l_2409;
                        int *l_2494 = (void*)0;
                        int *l_2495 = &l_1493;
                        int *l_2496 = &l_1010;
                        int *l_2497 = &l_1430;
                        int *l_2498 = &l_1416;
                        int l_2499 = (-1L);
                        int *l_2500 = (void*)0;
                        int *l_2501 = &l_2499;
                        int *l_2503 = &l_1430;
                        int *l_2504 = (void*)0;
                        int *l_2505 = &l_1504;
                        int *l_2506 = &l_1305;
                        ++g_2507;
                        (*l_2489) = (((void*)0 != l_2510) || ((safe_sub_func_int8_t_s_s(g_2513, (l_1376 != l_2244))) <= p_6));
                        (*l_2503) |= (l_2295 &= 0xDB152583L);
                    }
                    else
                    {
                        int **l_2514 = &g_275;
                        (*l_2514) = &p_3;
                    }
                }
                for (g_143 = (-28); (g_143 == 36); g_143++)
                {
                    unsigned short *l_2533 = &g_2413;
                    for (g_617 = 0; (g_617 >= (-28)); g_617 = safe_sub_func_int16_t_s_s(g_617, 2))
                    {
                        int *l_2526 = &l_1430;
                        char ****l_2530 = &g_2037;
                        if ((*g_324))
                            break;
                        (*l_2526) = (1UL ^ ((l_2521 = (safe_add_func_uint32_t_u_u((*g_296), 4294967295UL))) > ((p_6 <= l_855) == (safe_add_func_int16_t_s_s((0x96F8L || (p_5 = l_1504)), (((safe_mod_func_uint8_t_u_u(l_2397, (l_1430 | 0xEE75BDCBL))) ^ g_702) < p_4))))));
                        (*l_2526) ^= ((l_2527 == l_2530) && (safe_div_func_int32_t_s_s(((p_3 && p_3) == ((void*)0 == &p_4)), ((**g_295) = (((void*)0 == l_2533) && 0x65L)))));
                    }
                }
                g_1210 = ((*l_2541) = (p_5 > (safe_mod_func_uint8_t_u_u((0xCB74L == (safe_lshift_func_int8_t_s_s((&g_1210 != ((*l_2540) = func_67(p_4, l_2538))), 5))), p_6))));
            }
            if ((&g_49 != &p_4))
            {
                int *l_2542 = &l_1029;
                (*l_2542) &= (-1L);
            }
            else
            {
                unsigned short l_2548 = 0xC334L;
                struct S0 *l_2554 = &g_274;
                int *l_2586 = &g_2513;
                short l_2599 = (-1L);
                int l_2601 = (-9L);
                int l_2697 = (-1L);
                int l_2702 = 0x47CF6EBDL;
                int l_2712 = 0x99D8D6A9L;
                const struct S0 l_2778 = {-2384,339,-45,-0,4,0x8BL,21351};
                char *l_2791 = (void*)0;
                for (g_1248 = 0; (g_1248 < 25); g_1248 = safe_add_func_int8_t_s_s(g_1248, 7))
                {
                    short l_2545 = 0x4D39L;
                    const struct S0 *l_2553 = (void*)0;
                    struct S0 **l_2555 = (void*)0;
                    struct S0 **l_2556 = &l_2554;
                    struct S0 *l_2558 = (void*)0;
                    struct S0 **l_2557 = &l_2558;
                    int **l_2561 = &g_275;
                    int l_2608 = 1L;
                    int l_2627 = 0xA41709F1L;
                    int l_2659 = 0x7C2DC034L;
                    int l_2681 = 0x1F45BDF3L;
                    int l_2700 = 0xD3214B7EL;
                    int l_2717 = 0x11AF069BL;
                    unsigned **l_2779 = &g_296;
                    if (l_2545)
                        break;
                    (*l_2561) = &l_1078;
                    if (((*g_275) = 0x8ABE1518L))
                    {
                        unsigned short *l_2564 = (void*)0;
                        unsigned short *l_2565 = &g_2413;
                        struct S0 * const *l_2568 = &l_2558;
                        (**l_2561) &= ((*g_296) >= (**g_295));
                        (**l_2561) = (safe_lshift_func_uint16_t_u_u(((*l_2565) = ((*l_2510) = (l_2560.f5 | 246UL))), (((**l_1564) = (safe_lshift_func_uint8_t_u_s((l_2568 == (*g_721)), (g_2581 = (safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((*l_1578) = (l_2234.f6 != ((~255UL) & func_7((((**l_2561) & (safe_lshift_func_int16_t_s_s((!(safe_lshift_func_int16_t_s_s(l_2560.f1, (~((((((safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint8_t_u_s(p_3, 2)))) && 65535UL) | p_5) > 9L) >= p_3) | (*g_296)))))), l_1047))) & l_1450), p_3, g_525, (**l_2556), l_2580)))), g_274.f1)), p_6)))))) && l_1040)));
                        (*g_275) = l_1078;
                        (*g_275) = (l_2237 == (void*)0);
                    }
                    else
                    {
                        const struct S0 l_2587 = {-2881,402,-44,1,-1,0x2CL,3340};
                        (*l_2561) = &g_66;
                        (*l_2586) = (safe_add_func_uint16_t_u_u((p_4 == (func_43(((*g_296) & (&g_100 == (void*)0)), p_4, ((*l_2510) = (l_2234.f0 = ((safe_sub_func_int32_t_s_s(func_37((&p_3 != l_2586), (3UL <= (func_37(l_2234.f5, p_6, (**l_2556)) > 0x54L)), l_2587), 1UL)) < p_4))), p_6, (*l_2586)) || l_2587.f4)), 6L));
                        if ((*g_324))
                            continue;
                    }
                    if ((*g_324))
                    {
                        int *l_2588 = &l_1029;
                        int *l_2589 = (void*)0;
                        int *l_2590 = &l_2290;
                        int *l_2591 = &l_2397;
                        int *l_2592 = &g_1112;
                        int *l_2593 = &l_2521;
                        int *l_2594 = &l_2397;
                        int *l_2595 = &l_1047;
                        int *l_2596 = &l_1040;
                        int *l_2597 = &l_1376;
                        int *l_2598 = &l_1029;
                        int *l_2600 = &l_1078;
                        int *l_2602 = &l_1504;
                        int *l_2603 = &l_1450;
                        int *l_2604 = &g_74;
                        int *l_2605 = &l_1450;
                        int *l_2606 = &g_1210;
                        int *l_2607 = &g_74;
                        int *l_2609 = (void*)0;
                        int *l_2610 = &l_1416;
                        int *l_2611 = &g_1112;
                        int *l_2612 = &l_1368;
                        int *l_2613 = &l_1497;
                        int *l_2614 = &l_2239;
                        int *l_2615 = &l_2397;
                        int *l_2616 = &g_1347;
                        int *l_2617 = (void*)0;
                        int *l_2618 = &l_1493;
                        int *l_2619 = &l_1493;
                        int *l_2620 = &l_1430;
                        int *l_2621 = (void*)0;
                        int *l_2622 = &l_1047;
                        int *l_2623 = &l_2608;
                        int *l_2624 = &l_2239;
                        int *l_2625 = &l_1430;
                        int *l_2626 = &l_2317;
                        int *l_2628 = &l_1047;
                        int *l_2629 = &g_2513;
                        int *l_2630 = (void*)0;
                        int *l_2631 = (void*)0;
                        int *l_2632 = &g_66;
                        int *l_2633 = &l_2627;
                        int *l_2634 = &l_1368;
                        int *l_2635 = &g_125;
                        int *l_2636 = &g_1347;
                        int *l_2637 = &l_2239;
                        int *l_2638 = &g_1347;
                        int *l_2639 = &l_1078;
                        int *l_2640 = &l_1029;
                        int *l_2641 = (void*)0;
                        int *l_2642 = &l_1504;
                        int *l_2643 = (void*)0;
                        int *l_2644 = &g_1210;
                        int *l_2645 = &g_66;
                        int *l_2646 = &l_1040;
                        int *l_2647 = &l_1368;
                        int *l_2648 = &l_1493;
                        int *l_2649 = &l_1368;
                        int *l_2650 = &g_66;
                        int *l_2651 = &l_2627;
                        int *l_2652 = (void*)0;
                        int *l_2653 = &l_1040;
                        int *l_2654 = &l_1305;
                        int *l_2655 = &l_1376;
                        int *l_2656 = &l_1493;
                        int *l_2657 = &l_2397;
                        int *l_2658 = &g_125;
                        int *l_2660 = &l_1029;
                        int *l_2661 = &l_1416;
                        int *l_2662 = &l_2601;
                        int *l_2663 = &l_1305;
                        int *l_2664 = &g_1112;
                        int *l_2665 = &l_1029;
                        int *l_2666 = (void*)0;
                        int *l_2667 = &g_2513;
                        int *l_2668 = &l_2521;
                        int *l_2669 = &g_1112;
                        int *l_2670 = &l_1078;
                        int *l_2671 = &l_1430;
                        int *l_2672 = &l_1029;
                        int *l_2673 = (void*)0;
                        int *l_2674 = &l_1368;
                        int *l_2675 = &l_1497;
                        int *l_2676 = &l_2627;
                        int *l_2677 = &l_1040;
                        int *l_2678 = &l_2627;
                        int *l_2679 = &l_1305;
                        int *l_2680 = (void*)0;
                        int *l_2682 = &l_1078;
                        int *l_2683 = (void*)0;
                        int *l_2684 = &l_2521;
                        int *l_2685 = &g_1347;
                        int *l_2686 = &l_1450;
                        int *l_2687 = &g_66;
                        int *l_2688 = &l_2521;
                        int *l_2689 = &g_66;
                        int *l_2690 = &l_2608;
                        int *l_2691 = &l_1068;
                        int *l_2692 = (void*)0;
                        int *l_2693 = (void*)0;
                        int *l_2694 = &l_2627;
                        int *l_2695 = &g_125;
                        int *l_2696 = &g_1210;
                        int *l_2698 = &g_1347;
                        int *l_2699 = &g_661;
                        int *l_2701 = &g_617;
                        int *l_2703 = &l_1010;
                        int *l_2704 = &l_2627;
                        int *l_2705 = &l_1376;
                        int *l_2706 = &g_74;
                        int l_2707 = 0xDEE78866L;
                        int *l_2708 = &g_1210;
                        int *l_2709 = &l_1305;
                        int *l_2710 = &l_1368;
                        int *l_2711 = &l_2601;
                        int *l_2713 = &g_1210;
                        int *l_2714 = &g_1112;
                        int *l_2715 = &l_2697;
                        int *l_2716 = &l_1504;
                        int *l_2718 = &l_2700;
                        int *l_2719 = &l_2317;
                        int *l_2720 = &g_661;
                        int *l_2721 = &l_1040;
                        int *l_2722 = &l_2659;
                        int *l_2723 = &g_125;
                        int *l_2724 = &l_1047;
                        int *l_2725 = &l_1040;
                        int *l_2726 = &g_617;
                        int *l_2727 = &l_1010;
                        int *l_2728 = &l_2712;
                        int *l_2729 = &g_66;
                        int *l_2730 = &l_2627;
                        int *l_2731 = &l_1450;
                        int *l_2732 = &g_1210;
                        int *l_2733 = (void*)0;
                        int *l_2734 = (void*)0;
                        int *l_2735 = &l_2239;
                        int *l_2736 = (void*)0;
                        int *l_2737 = &l_1416;
                        int *l_2738 = &l_2707;
                        int *l_2739 = &l_2239;
                        int *l_2740 = (void*)0;
                        int *l_2741 = (void*)0;
                        int *l_2742 = &l_2397;
                        int *l_2743 = &l_2397;
                        int *l_2744 = &l_1430;
                        int l_2745 = 0x25A89212L;
                        int *l_2746 = &l_2707;
                        int *l_2747 = &l_2601;
                        int *l_2749 = &g_66;
                        int *l_2750 = &g_74;
                        int *l_2751 = (void*)0;
                        int *l_2752 = &l_2317;
                        int *l_2753 = &l_1305;
                        int *l_2754 = &g_74;
                        int *l_2755 = (void*)0;
                        int *l_2756 = &l_1430;
                        int l_2757 = 1L;
                        int *l_2758 = &l_2697;
                        int *l_2759 = &l_1430;
                        int *l_2760 = &g_1347;
                        int *l_2761 = &l_2681;
                        int *l_2762 = &l_1493;
                        int *l_2763 = &l_2290;
                        int *l_2764 = &g_1112;
                        int *l_2765 = &l_1504;
                        int *l_2766 = (void*)0;
                        int *l_2767 = (void*)0;
                        g_2769++;
                    }
                    else
                    {
                        char **l_2784 = &g_239;
                        char **l_2785 = &g_239;
                        char **l_2786 = &g_239;
                        char **l_2787 = &g_239;
                        char **l_2788 = (void*)0;
                        char **l_2789 = &g_239;
                        int l_2792 = 0x21BE41A4L;
                        l_1430 = ((*l_2586) = (1UL || g_274.f3));
                        l_1522 ^= ((*l_2586) = (func_37(g_319, (safe_div_func_uint32_t_u_u(p_3, (safe_rshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((**g_295), p_5)), l_1040)))), l_2778) | (l_2071 & ((void*)0 != l_2779))));
                        (*l_2586) = (0x5EB5L == p_3);
                        (*l_2586) = (safe_sub_func_uint32_t_u_u((+func_31(g_826, ((safe_rshift_func_uint16_t_u_u((*l_2586), 15)) >= p_4))), (func_23(p_6, l_2233, func_7(((l_2790 = &l_1490) == l_2791), (*l_2586), g_2748, l_875, g_2748), l_2792, l_2234) | l_875.f4)));
                    }
                }
                (**g_721) = &l_875;
                return p_5;
            }
        }
    }
    if ((!(safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s((((safe_mod_func_int8_t_s_s((((*l_2799) = (void*)0) != (void*)0), 0xE5L)) ^ (safe_add_func_int8_t_s_s(p_4, l_2802))) ^ (safe_add_func_uint8_t_u_u(func_50(l_1029), (((g_295 = (void*)0) == (void*)0) <= l_1068)))), g_274.f2)), 0x4EL))))
    {
        unsigned l_2805 = 4294967290UL;
        int l_2806 = 0xD54C8267L;
        char *** const *l_2810 = &g_2037;
        p_3 = (l_2806 = ((g_74 < l_2805) < g_1246));
        p_3 &= func_31(p_5, (safe_rshift_func_uint16_t_u_u(65530UL, l_2806)));
        l_2806 &= func_7(p_6, p_6, (l_2809 != (void*)0), (*l_2809), ((**l_1564) = (l_2805 >= ((func_31(p_4, func_50((l_2810 == (void*)0))) & p_4) >= 0L))));
    }
    else
    {
        unsigned char l_2815 = 1UL;
        struct S0 ****l_2823 = &g_2820;
        int *l_2825 = &g_1210;
        (*l_2825) = p_3;
        (*l_2825) = (safe_mod_func_uint8_t_u_u(l_2828, 0x9AL));
    }
    (*l_2831) ^= func_50((p_4 = g_599));
    return p_3;
}







static int func_7(unsigned p_8, char p_9, int p_10, struct S0 p_11, unsigned char p_12)
{
    unsigned l_851 = 4294967295UL;
    return l_851;
}







static unsigned func_13(const char p_14, short p_15)
{
    unsigned l_53 = 0xBAB72157L;
    const struct S0 l_301 = {1941,265,37,3,0,0x9EL,1888};
    int l_531 = (-9L);
    int *l_539 = &g_74;
    int *l_540 = &g_74;
    int *l_541 = &l_531;
    int *l_542 = &l_531;
    int *l_543 = &l_531;
    int *l_544 = &l_531;
    int *l_545 = &g_125;
    int *l_546 = &l_531;
    int l_547 = 0x27A59AF7L;
    int *l_548 = &g_74;
    int *l_549 = &g_74;
    int l_550 = 4L;
    int *l_551 = &g_66;
    int *l_552 = &l_531;
    int *l_553 = &l_531;
    int *l_554 = &g_74;
    int *l_555 = &l_547;
    int *l_556 = &g_74;
    int *l_557 = &g_74;
    int l_558 = 0xD653F4D5L;
    int *l_559 = (void*)0;
    int *l_560 = (void*)0;
    int *l_561 = &g_125;
    int *l_562 = &g_74;
    int *l_563 = &l_558;
    int *l_564 = (void*)0;
    int *l_565 = &g_66;
    int *l_566 = &l_547;
    int *l_567 = &l_531;
    int *l_568 = (void*)0;
    int l_569 = 0L;
    int *l_570 = &l_547;
    int *l_571 = &g_66;
    int *l_572 = &l_569;
    int *l_573 = &l_547;
    short l_574 = (-1L);
    int *l_575 = &l_547;
    int *l_576 = &g_66;
    int *l_577 = &g_125;
    int *l_578 = (void*)0;
    int l_579 = (-1L);
    int l_580 = (-1L);
    int *l_581 = &l_569;
    int *l_582 = &g_74;
    int *l_583 = &l_558;
    int l_584 = 1L;
    int *l_585 = &l_531;
    int *l_586 = &g_66;
    int *l_587 = &g_66;
    int *l_588 = &l_584;
    int *l_589 = &l_558;
    int *l_590 = &l_579;
    int *l_591 = (void*)0;
    int *l_592 = &l_569;
    int *l_593 = &l_547;
    int *l_594 = &g_66;
    int *l_595 = (void*)0;
    int *l_596 = &g_74;
    int *l_597 = (void*)0;
    int *l_598 = &l_547;
    int *l_600 = &l_547;
    int *l_601 = &g_66;
    int *l_602 = &g_74;
    int *l_603 = &g_74;
    int *l_604 = &l_580;
    int *l_605 = (void*)0;
    int *l_606 = (void*)0;
    int l_607 = (-10L);
    int *l_608 = &g_74;
    int *l_609 = &l_580;
    int *l_610 = &l_531;
    int *l_611 = &g_66;
    int *l_612 = &l_558;
    int *l_613 = (void*)0;
    int *l_614 = &l_531;
    int *l_615 = &l_607;
    int *l_616 = &l_547;
    int *l_618 = &l_607;
    int *l_619 = (void*)0;
    int l_620 = 0x0F7D3465L;
    int *l_621 = &l_580;
    int l_622 = 0x985595EEL;
    int *l_623 = &l_579;
    int *l_624 = &l_569;
    int *l_625 = &g_66;
    int *l_626 = &l_584;
    int *l_627 = &l_558;
    int *l_628 = &l_547;
    int *l_629 = &g_125;
    int *l_630 = &l_622;
    int *l_631 = &l_569;
    int *l_632 = &l_531;
    int *l_633 = &l_547;
    int *l_634 = (void*)0;
    int *l_635 = &l_547;
    int *l_636 = &g_617;
    int *l_637 = (void*)0;
    int *l_638 = &l_547;
    int *l_639 = &l_547;
    int *l_640 = &g_125;
    int *l_641 = (void*)0;
    int *l_642 = &l_622;
    int *l_643 = &l_558;
    int *l_644 = &g_66;
    int *l_645 = &l_607;
    int *l_646 = &l_547;
    int l_647 = (-7L);
    int l_648 = 6L;
    int *l_649 = &l_531;
    int *l_650 = &l_648;
    int l_651 = 0L;
    int *l_652 = &g_125;
    int *l_653 = &g_66;
    int *l_654 = &l_622;
    int *l_655 = (void*)0;
    int *l_656 = &l_558;
    int l_657 = 0xD6FBCA5AL;
    int *l_658 = &l_647;
    int *l_659 = (void*)0;
    int *l_660 = &l_550;
    int l_662 = 0x6A55D671L;
    int *l_663 = &l_531;
    int *l_664 = &l_579;
    int l_665 = 0x16A0E592L;
    int *l_666 = &l_665;
    int *l_667 = &g_74;
    int *l_668 = &l_648;
    int *l_669 = &l_647;
    int *l_670 = &l_558;
    int *l_671 = &g_66;
    int l_672 = (-7L);
    int *l_673 = &l_620;
    int *l_674 = &l_662;
    int *l_675 = &l_651;
    int *l_676 = &l_651;
    int *l_677 = (void*)0;
    int *l_678 = &g_66;
    int *l_679 = &l_584;
    int *l_680 = &g_74;
    int l_681 = 0L;
    int *l_682 = (void*)0;
    int *l_683 = (void*)0;
    int *l_684 = &l_531;
    int *l_685 = &l_547;
    int *l_686 = &g_74;
    int *l_687 = &g_617;
    int l_688 = 0x90A6ACD2L;
    int *l_689 = &l_620;
    int l_690 = (-1L);
    int *l_691 = &g_74;
    int l_692 = 1L;
    int *l_693 = &l_620;
    int *l_694 = &l_657;
    int *l_695 = (void*)0;
    int *l_696 = &l_531;
    int *l_697 = &l_648;
    int *l_698 = &l_569;
    int *l_699 = &l_607;
    int *l_700 = (void*)0;
    int *l_701 = &g_617;
    unsigned l_752 = 3UL;
    unsigned short l_789 = 65535UL;
    char l_843 = 0L;
    for (p_15 = 14; (p_15 != (-4)); --p_15)
    {
        int l_34 = 0x86A6C65BL;
        short *l_300 = &g_49;
        int l_422 = 4L;
        char l_423 = 0x4DL;
        int *l_528 = &g_66;
        short l_534 = 0xF6CAL;
        unsigned short *l_535 = &g_129;
        int *l_538 = &l_422;
        (*l_528) = ((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((func_23((safe_lshift_func_int8_t_s_u((func_31(l_34, (safe_mod_func_uint8_t_u_u(((l_422 |= func_37(((*l_300) = (safe_mod_func_int8_t_s_s(func_43(g_49, p_14, l_34, func_50(p_15), l_53), ((-4L) || l_53)))), l_34, l_301)) <= g_274.f5), 1L))) == l_423), g_274.f6)), g_274.f6, g_274.f0, l_301.f2, l_301) || g_129), 7)), l_34)) && 6UL);
        (*l_538) |= (+((safe_sub_func_int8_t_s_s(6L, (l_531 = p_14))) != (safe_div_func_uint32_t_u_u((**g_295), ((1L && (((*l_528) && l_534) & ((*l_535) = g_274.f5))) ^ func_50((((safe_mod_func_int8_t_s_s(0x75L, g_274.f6)) < g_49) >= p_15)))))));
    }
    g_702++;
    for (g_66 = (-17); (g_66 > 28); g_66 = safe_add_func_int32_t_s_s(g_66, 4))
    {
        int * const * const l_714 = &l_541;
        int l_806 = 0x8EEBFF7DL;
        int l_807 = 0x35D9B56BL;
        int l_808 = 0L;
        int l_811 = 0x90CE9071L;
        int l_816 = 2L;
        int l_817 = (-1L);
        int l_831 = 0x968F0B6BL;
        int l_832 = 7L;
        int l_833 = (-8L);
        int *l_834 = &l_657;
        int *l_835 = &l_688;
        int *l_836 = &l_806;
        int *l_837 = (void*)0;
        int *l_838 = &l_690;
        int *l_839 = &g_661;
        if ((((safe_div_func_int16_t_s_s(func_31((*l_650), ((-1L) == ((6L >= (safe_lshift_func_uint16_t_u_s((*l_668), 13))) < 0x7A6BA7E3L))), (*l_630))) ^ p_14) > p_15))
        {
            unsigned l_711 = 0x59D83285L;
            int l_743 = 0x017B4764L;
            int *l_767 = &l_579;
            unsigned *l_790 = &l_53;
            unsigned char *l_793 = &g_143;
            unsigned char *l_794 = &g_319;
            unsigned char *l_795 = &g_796;
            ++l_711;
            if (((void*)0 != l_714))
            {
                unsigned l_715 = 0xD177FFDFL;
                unsigned char l_718 = 0x37L;
                --l_715;
                l_718 &= (**l_714);
            }
            else
            {
                int l_742 = (-8L);
                if ((safe_mod_func_int8_t_s_s((g_721 != (void*)0), (safe_add_func_int8_t_s_s(l_711, 0L)))))
                {
                    unsigned short *l_736 = &g_129;
                    int l_737 = 0x47820749L;
                    if (((safe_sub_func_int16_t_s_s(p_14, p_15)) || ((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((**l_714) || (safe_sub_func_int8_t_s_s(p_14, ((safe_sub_func_uint16_t_u_u(((*l_736) &= 1UL), func_31(l_737, (safe_rshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s(l_742, (func_50(g_141) <= (*l_590)))) < (*l_664)), p_14))))) ^ l_711)))), 15)), 1L)) > 0xBBAE65E6L)))
                    {
                        (*l_615) = (*g_324);
                        l_743 |= ((**l_714) = p_14);
                        (*l_701) |= 0L;
                    }
                    else
                    {
                        unsigned l_744 = 0x8BB439E9L;
                        l_744--;
                    }
                    for (l_53 = (-5); (l_53 == 1); ++l_53)
                    {
                        int l_749 = (-1L);
                        const struct S0 * const l_750 = &l_301;
                        const struct S0 **l_751 = &g_723;
                        if ((*g_324))
                            break;
                        l_749 |= ((*l_570) = 0L);
                        (*l_751) = l_750;
                    }
                    ++l_752;
                }
                else
                {
                    char l_765 = (-2L);
                    char *l_766 = &g_274.f5;
                    int **l_768 = (void*)0;
                    int **l_769 = (void*)0;
                    int **l_770 = &l_562;
                    for (l_53 = 8; (l_53 > 19); l_53 = safe_add_func_int16_t_s_s(l_53, 4))
                    {
                        int **l_757 = &l_685;
                        (*l_757) = &g_74;
                    }
                    for (l_648 = (-10); (l_648 == (-26)); --l_648)
                    {
                        unsigned short l_760 = 0xF0E1L;
                        ++l_760;
                        (**l_714) &= func_50(p_14);
                        (**g_721) = &l_301;
                    }
                    (*l_696) = (safe_add_func_int8_t_s_s(((((*l_766) = l_765) || (**l_714)) || (((l_767 = &g_661) != ((*l_770) = (void*)0)) <= (l_742 & (**l_714)))), (func_50(g_129) < (p_14 | p_15))));
                }
                (*l_767) &= (safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(((p_14 >= (p_14 >= (*g_324))) > g_319), 12)), p_15));
            }
            (*l_645) = (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((*l_795) ^= (safe_sub_func_int8_t_s_s((((*l_544) = ((safe_sub_func_uint16_t_u_u(0UL, (safe_lshift_func_int8_t_s_u(((**l_714) != ((*l_767) = p_15)), 7)))) | 1L)) | (safe_add_func_int16_t_s_s((func_31(g_130, ((*l_794) = ((*l_793) = ((((*l_790) = l_789) || ((safe_add_func_uint8_t_u_u((p_14 != 0xE120C080L), g_141)) == (**g_295))) != p_15)))) != p_15), p_14))), p_14))), 1)), p_15));
        }
        else
        {
            unsigned char l_797 = 255UL;
            unsigned char *l_804 = &g_141;
            int l_805 = (-10L);
            int l_809 = 0x3257E34BL;
            int l_810 = 6L;
            int l_814 = 1L;
            int *l_818 = &l_579;
            int *l_819 = &g_661;
            int *l_820 = &l_657;
            int *l_821 = &l_817;
            int *l_822 = (void*)0;
            int *l_823 = &l_547;
            int *l_824 = (void*)0;
            int *l_825 = &l_647;
            int *l_827 = &l_622;
            ++l_797;
            for (l_569 = 0; (l_569 > (-5)); l_569 = safe_sub_func_int8_t_s_s(l_569, 8))
            {
                return (*g_296);
            }
            l_805 = (safe_sub_func_uint32_t_u_u((p_14 || g_661), func_31(l_797, ((*l_804) = (*l_549)))));
            --g_828;
        }
        (**l_714) ^= 1L;
        g_840++;
    }
    return l_843;
}







static const unsigned short func_23(const unsigned p_24, short p_25, unsigned short p_26, unsigned short p_27, struct S0 p_28)
{
    int *l_424 = (void*)0;
    int *l_425 = &g_66;
    int *l_426 = (void*)0;
    int l_427 = (-10L);
    int *l_428 = (void*)0;
    int *l_429 = &g_74;
    int *l_430 = &g_125;
    int *l_431 = &g_74;
    int *l_432 = &g_125;
    int *l_433 = &g_66;
    int *l_434 = &g_66;
    unsigned l_435 = 4294967295UL;
    int l_448 = 0xF34C10F2L;
    char **l_452 = &g_239;
    int l_477 = 0L;
    int l_482 = 0L;
    int l_502 = 0L;
    short l_513 = (-5L);
    int l_516 = (-1L);
    l_435++;
    if ((*g_324))
    {
        unsigned short l_438 = 65535UL;
        short *l_439 = &g_100;
        int *l_440 = &g_125;
        int **l_441 = &l_431;
        int **l_442 = &l_432;
        unsigned **l_445 = &g_296;
        (*l_442) = ((*l_441) = l_440);
        (**l_442) = (safe_rshift_func_int8_t_s_s(p_25, (func_31(((void*)0 != l_445), (g_274.f0 >= g_66)) & (((0x1F390613L && 0xAEBCF459L) < (**l_441)) > g_141))));
        if ((*g_324))
        {
            char * const *l_451 = &g_239;
            char ***l_453 = &l_452;
            int l_454 = (-1L);
            unsigned *l_455 = &g_291;
            (*l_429) &= (safe_div_func_int32_t_s_s((l_448 | func_31(p_27, (g_319 = p_28.f2))), ((*l_455) |= (safe_sub_func_uint16_t_u_u(((l_451 == ((*l_453) = l_452)) >= (*l_425)), (253UL > ((((func_31(((65535UL < (*l_425)) < g_81), l_454) || (*l_440)) | (*g_296)) > (-1L)) > (**l_441))))))));
        }
        else
        {
            unsigned short l_456 = 65535UL;
            (*l_434) &= ((**l_442) = l_456);
            (*l_440) = (((**g_295) = 0x5AD1BCB1L) | (safe_add_func_int32_t_s_s((*g_324), l_456)));
        }
    }
    else
    {
        short l_461 = 0L;
        int *l_462 = &g_125;
        int *l_463 = &g_125;
        int *l_464 = &g_125;
        int *l_465 = &g_74;
        int *l_466 = &g_74;
        int *l_467 = (void*)0;
        int *l_468 = &g_74;
        int l_469 = (-7L);
        int l_470 = 0x355BCBC9L;
        int *l_471 = &g_125;
        int *l_472 = &g_74;
        int *l_473 = &l_469;
        int *l_474 = &l_469;
        int *l_475 = (void*)0;
        int *l_476 = (void*)0;
        int *l_478 = (void*)0;
        int *l_479 = &l_469;
        int *l_480 = (void*)0;
        int *l_481 = &g_125;
        int *l_483 = &g_74;
        int *l_484 = (void*)0;
        int *l_485 = (void*)0;
        int *l_486 = &g_74;
        int *l_487 = (void*)0;
        int *l_488 = &l_477;
        int *l_489 = (void*)0;
        int *l_490 = &l_477;
        int *l_491 = &g_125;
        int *l_492 = &g_74;
        int l_493 = 0x525ACAF8L;
        int l_494 = 0x58420658L;
        int l_495 = (-1L);
        int *l_496 = (void*)0;
        int *l_497 = &l_482;
        int *l_498 = &l_482;
        int *l_499 = &g_66;
        int *l_500 = (void*)0;
        int *l_501 = (void*)0;
        int *l_503 = &l_470;
        int *l_504 = (void*)0;
        int *l_505 = (void*)0;
        int *l_506 = &l_477;
        int *l_507 = (void*)0;
        int *l_508 = &l_493;
        int l_509 = 0x8C21D9A2L;
        int *l_510 = &l_495;
        int *l_511 = &g_125;
        int *l_512 = &l_493;
        int *l_514 = &l_493;
        int *l_515 = (void*)0;
        int *l_517 = &l_502;
        int *l_518 = &l_482;
        int l_519 = (-4L);
        int *l_520 = &l_495;
        int *l_521 = &l_502;
        int *l_522 = &g_125;
        int *l_523 = &l_502;
        int *l_524 = &l_516;
        (*l_430) = (safe_rshift_func_int16_t_s_s((-3L), 10));
        g_525++;
    }
    return p_28.f2;
}







static char func_31(int p_32, unsigned char p_33)
{
    return p_32;
}







static char func_37(short p_38, unsigned char p_39, const struct S0 p_40)
{
    struct S0 *l_303 = (void*)0;
    struct S0 **l_302 = &l_303;
    struct S0 ***l_304 = &l_302;
    int l_309 = 0x4CEE9C76L;
    int l_372 = 0x23D9D43DL;
    (*l_304) = l_302;
    for (g_66 = 3; (g_66 >= 25); g_66 = safe_add_func_uint8_t_u_u(g_66, 6))
    {
        struct S0 *l_315 = &g_274;
        int l_325 = (-1L);
        int l_344 = 0xA1DA3663L;
        int l_348 = 0L;
        int l_368 = 0x89D5DEC7L;
        int *l_408 = &g_74;
        int **l_421 = &g_275;
        for (g_129 = 25; (g_129 != 41); g_129 = safe_add_func_int16_t_s_s(g_129, 1))
        {
            int *l_310 = &l_309;
            int l_333 = 0x9AE339B0L;
            int l_397 = 1L;
            struct S0 *l_418 = (void*)0;
            int **l_420 = &l_408;
            (*l_310) = l_309;
            if (p_40.f5)
                continue;
        }
        (*l_421) = (void*)0;
    }
    return p_39;
}







static char func_43(char p_44, char p_45, unsigned short p_46, unsigned p_47, unsigned short p_48)
{
    unsigned char l_54 = 251UL;
    int l_55 = 0x8394D257L;
    short *l_61 = &g_60;
    int *l_62 = (void*)0;
    int *l_63 = (void*)0;
    int *l_64 = (void*)0;
    int *l_65 = &g_66;
    int **l_277 = &l_65;
    unsigned *l_288 = (void*)0;
    unsigned *l_289 = (void*)0;
    unsigned *l_290 = &g_291;
    unsigned **l_294 = (void*)0;
    short l_297 = (-3L);
    int l_298 = 0L;
    int *l_299 = &l_55;
    (*l_65) &= ((l_54 = p_45) & (func_50(l_55) && (safe_add_func_int16_t_s_s(((*l_61) = ((safe_rshift_func_uint8_t_u_s(func_50(func_50(g_60)), l_55)) == l_55)), func_50((((l_55 ^ l_55) <= g_49) || l_55))))));
    (*l_277) = func_67(g_49, l_61);
    (*l_299) = (((safe_sub_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u(((g_74 ^ p_47) >= ((!((safe_add_func_int8_t_s_s(0L, (l_297 = (safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(g_130, (++(*l_290)))), (l_294 == g_295)))))) | g_175)) && 9UL)), ((**g_295) && (**g_295)))) >= g_125), p_48)) > g_143) == l_298);
    return p_46;
}







static unsigned func_50(short p_51)
{
    unsigned l_52 = 4294967295UL;
    return l_52;
}







static int * func_67(char p_68, short * p_69)
{
    int *l_70 = &g_66;
    int *l_158 = &g_66;
    int *l_159 = &g_125;
    int l_160 = 5L;
    int l_161 = 7L;
    int *l_162 = (void*)0;
    int *l_163 = &l_161;
    int *l_164 = (void*)0;
    int *l_165 = &l_161;
    int *l_166 = &g_66;
    int *l_167 = &g_74;
    int *l_168 = (void*)0;
    int l_169 = 0x762AA916L;
    int *l_170 = (void*)0;
    int l_171 = (-1L);
    int *l_172 = &l_160;
    int *l_173 = &g_66;
    int *l_174 = &l_169;
    unsigned short *l_180 = &g_129;
    char l_181 = 1L;
    if (((*l_70) = 0x2BBA6DADL))
    {
        for (g_66 = 0; (g_66 <= 0); ++g_66)
        {
            int *l_73 = &g_74;
            (*l_73) = func_50((*p_69));
        }
    }
    else
    {
        int *l_77 = &g_74;
        char *l_80 = &g_81;
        int l_102 = 1L;
        unsigned l_139 = 0x10037B86L;
        if (((safe_rshift_func_int8_t_s_s(((*l_80) = ((l_77 != l_77) > (safe_sub_func_uint8_t_u_u(((void*)0 != p_69), ((p_68 ^ (g_60 >= (*p_69))) < 4UL))))), g_74)) || 0xEAL))
        {
lbl_147:
            for (g_74 = (-2); (g_74 != 8); ++g_74)
            {
                int *l_84 = &g_74;
                return l_84;
            }
            for (g_66 = (-18); (g_66 >= 16); ++g_66)
            {
                int *l_87 = &g_74;
                return l_87;
            }
        }
        else
        {
            unsigned l_90 = 0UL;
            short *l_99 = &g_100;
            int *l_101 = (void*)0;
            char l_155 = 1L;
            int **l_157 = &l_70;
            if ((safe_mul_func_int32_t_s_s(l_90, (((*l_80) = g_66) <= (safe_add_func_uint8_t_u_u((0xE48FL >= (g_74 <= (l_102 &= (safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(g_60, ((*l_99) |= func_50(func_50(func_50(((p_68 >= (((*l_77) ^ (-7L)) && p_68)) ^ g_49))))))), g_49)), 1UL))))), l_90))))))
            {
                char *l_136 = &g_81;
                int l_145 = 0xD0913F08L;
                for (g_81 = 0; (g_81 > (-9)); g_81 = safe_sub_func_uint8_t_u_u(g_81, 5))
                {
                    int l_108 = 1L;
                    int *l_123 = &g_74;
                    unsigned char *l_140 = &g_141;
                    unsigned char *l_142 = &g_143;
                    unsigned short *l_144 = &g_129;
                    int **l_146 = &l_101;
                    for (p_68 = 11; (p_68 > (-7)); p_68 = safe_sub_func_int32_t_s_s(p_68, 4))
                    {
                        const unsigned l_107 = 4294967289UL;
                        unsigned char *l_124 = (void*)0;
                        unsigned short *l_128 = &g_129;
                        unsigned *l_131 = &g_130;
                        if (g_81)
                            break;
                        (*l_70) = (l_107 > (g_49 | ((l_108 & (((*l_131) = (safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(l_108, (safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((g_125 = ((void*)0 != l_123)), (safe_div_func_uint16_t_u_u(((*l_128) = func_50((*p_69))), ((*l_99) &= g_130))))), 0xEBA449F3L)), 65535UL)), p_68)), 0x3FL)))), p_68))) | 0xE7B3B6DFL)) >= (*l_123))));
                        if (g_100)
                            continue;
                    }
                    if (g_49)
                        goto lbl_152;
                    (*l_70) ^= ((((safe_add_func_int16_t_s_s((g_49 = (*p_69)), (((((*p_69) > (p_68 | (safe_lshift_func_uint16_t_u_u(p_68, (8UL || 0x0EL))))) ^ (((void*)0 == l_136) && (((*l_144) = ((safe_add_func_int32_t_s_s((((*l_142) = ((*l_140) ^= l_139)) != p_68), 0xDE39F743L)) <= 0x52L)) == g_100))) == p_68) == (-8L)))) == l_145) || (*l_123)) < p_68);
                    (*l_146) = l_70;
                    if (g_60)
                        goto lbl_147;
                }
                return &g_74;
            }
            else
            {
lbl_152:
                for (g_129 = 0; (g_129 < 59); ++g_129)
                {
                    for (g_141 = 25; (g_141 == 49); g_141++)
                    {
                        return &g_74;
                    }
                }
                if (((void*)0 == &p_68))
                {
                    l_77 = &l_102;
                }
                else
                {
                    unsigned *l_153 = &l_139;
                    unsigned **l_154 = &l_153;
                    if (((*l_70) ^= func_50((l_155 |= ((((*l_154) = l_153) == &g_130) ^ (*p_69))))))
                    {
                        int **l_156 = &l_77;
                        (*l_156) = l_101;
                    }
                    else
                    {
                        return l_101;
                    }
                    l_77 = &g_66;
                }
            }
            (*l_157) = &g_66;
        }
    }
    g_175++;
    return &g_66;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_274.f0, "g_274.f0", print_hash_value);
    transparent_crc(g_274.f1, "g_274.f1", print_hash_value);
    transparent_crc(g_274.f2, "g_274.f2", print_hash_value);
    transparent_crc(g_274.f3, "g_274.f3", print_hash_value);
    transparent_crc(g_274.f4, "g_274.f4", print_hash_value);
    transparent_crc(g_274.f5, "g_274.f5", print_hash_value);
    transparent_crc(g_274.f6, "g_274.f6", print_hash_value);
    transparent_crc(g_291, "g_291", print_hash_value);
    transparent_crc(g_319, "g_319", print_hash_value);
    transparent_crc(g_404, "g_404", print_hash_value);
    transparent_crc(g_525, "g_525", print_hash_value);
    transparent_crc(g_599, "g_599", print_hash_value);
    transparent_crc(g_617, "g_617", print_hash_value);
    transparent_crc(g_661, "g_661", print_hash_value);
    transparent_crc(g_702, "g_702", print_hash_value);
    transparent_crc(g_796, "g_796", print_hash_value);
    transparent_crc(g_812, "g_812", print_hash_value);
    transparent_crc(g_813, "g_813", print_hash_value);
    transparent_crc(g_815, "g_815", print_hash_value);
    transparent_crc(g_826, "g_826", print_hash_value);
    transparent_crc(g_828, "g_828", print_hash_value);
    transparent_crc(g_840, "g_840", print_hash_value);
    transparent_crc(g_845, "g_845", print_hash_value);
    transparent_crc(g_962, "g_962", print_hash_value);
    transparent_crc(g_1102, "g_1102", print_hash_value);
    transparent_crc(g_1112, "g_1112", print_hash_value);
    transparent_crc(g_1132, "g_1132", print_hash_value);
    transparent_crc(g_1194, "g_1194", print_hash_value);
    transparent_crc(g_1210, "g_1210", print_hash_value);
    transparent_crc(g_1238, "g_1238", print_hash_value);
    transparent_crc(g_1246, "g_1246", print_hash_value);
    transparent_crc(g_1248, "g_1248", print_hash_value);
    transparent_crc(g_1347, "g_1347", print_hash_value);
    transparent_crc(g_1348, "g_1348", print_hash_value);
    transparent_crc(g_1360, "g_1360", print_hash_value);
    transparent_crc(g_1538, "g_1538", print_hash_value);
    transparent_crc(g_1545, "g_1545", print_hash_value);
    transparent_crc(g_1552, "g_1552", print_hash_value);
    transparent_crc(g_1790, "g_1790", print_hash_value);
    transparent_crc(g_2029, "g_2029", print_hash_value);
    transparent_crc(g_2226, "g_2226", print_hash_value);
    transparent_crc(g_2413, "g_2413", print_hash_value);
    transparent_crc(g_2507, "g_2507", print_hash_value);
    transparent_crc(g_2513, "g_2513", print_hash_value);
    transparent_crc(g_2581, "g_2581", print_hash_value);
    transparent_crc(g_2748, "g_2748", print_hash_value);
    transparent_crc(g_2768, "g_2768", print_hash_value);
    transparent_crc(g_2769, "g_2769", print_hash_value);
    transparent_crc(g_2899, "g_2899", print_hash_value);
    transparent_crc(g_2971, "g_2971", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
