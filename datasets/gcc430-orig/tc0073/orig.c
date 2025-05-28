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



static volatile unsigned char g_4 = 9UL;
static unsigned short g_14 = 1UL;
static short g_16 = 0x6B47L;
static short g_37 = (-1L);
static short * const g_36 = &g_37;
static int g_42 = 0x9F196E6CL;
static int g_74 = (-4L);
static int g_78 = 7L;
static unsigned g_87 = 4UL;
static int g_102 = (-1L);
static unsigned char g_103 = 0x8CL;
static char g_122 = 0x82L;
static short g_123 = 4L;
static unsigned short g_136 = 0UL;
static char g_149 = (-1L);
static volatile int g_155 = 0L;
static volatile int * const volatile g_154 = &g_155;
static volatile int * const volatile *g_153 = &g_154;
static unsigned short *g_158 = &g_136;
static unsigned g_183 = 0x56D33D98L;
static unsigned g_211 = 0UL;
static unsigned g_212 = 0x81857D46L;
static int *g_243 = &g_102;
static char g_271 = (-1L);
static int g_292 = 1L;
static unsigned g_324 = 4294967288UL;
static unsigned char g_331 = 0xB6L;
static short g_333 = 0L;
static int g_429 = 0x6DBDAB27L;
static char g_456 = 0L;
static char g_476 = 0xD9L;
static int g_477 = (-1L);
static unsigned char g_482 = 0xF9L;
static unsigned short g_504 = 0xCDE6L;
static char g_562 = 1L;
static short g_582 = 0xB522L;
static unsigned char g_583 = 0x54L;
static unsigned g_628 = 0x6E5381F3L;
static unsigned char g_639 = 0xAAL;
static unsigned g_689 = 0UL;
static unsigned char g_793 = 8UL;
static short g_804 = (-1L);
static short *g_803 = &g_804;
static unsigned short g_849 = 0x98ADL;
static int g_856 = 0x09E816D8L;
static volatile unsigned short g_917 = 0xC973L;



static const char func_1(void);
static short func_23(short p_24, int p_25, short * p_26, unsigned short p_27);
static int func_28(short * p_29, unsigned char p_30, short * p_31, unsigned p_32, short * p_33);
static short * func_34(short * const p_35);
static int * func_43(int p_44, short p_45);
static short func_46(int * p_47, const unsigned char p_48, const int * const p_49);
static int * func_50(short p_51, int p_52, unsigned p_53, int p_54);
static unsigned func_59(short * p_60, unsigned p_61, short * p_62);
static short func_68(int p_69, unsigned p_70);
static const int func_80(unsigned p_81, int * p_82, const short p_83, short p_84);
static const char func_1(void)
{
    char l_5 = 0x60L;
    short *l_15 = &g_16;
    unsigned short *l_853 = (void*)0;
    unsigned short *l_854 = &g_136;
    int *l_855 = &g_856;
    int **l_858 = &g_243;
    int ***l_857 = &l_858;
    char *l_861 = (void*)0;
    char *l_862 = &g_562;
    int *l_863 = &g_78;
    char l_864 = 0L;
    short *l_869 = (void*)0;
    int **l_870 = &l_855;
    int *l_871 = &g_74;
    int *l_872 = &g_78;
    int *l_873 = &g_78;
    int *l_874 = &g_74;
    int l_875 = 0x2EEF8898L;
    int *l_876 = (void*)0;
    int *l_877 = &l_875;
    int *l_878 = &g_856;
    int *l_879 = (void*)0;
    int l_880 = 0xC214BE47L;
    int *l_881 = &g_102;
    int *l_882 = &g_74;
    int *l_883 = (void*)0;
    int *l_884 = &g_856;
    int *l_885 = &g_74;
    int *l_886 = &g_78;
    int *l_887 = &g_42;
    int *l_888 = &g_856;
    int *l_889 = &g_78;
    int *l_890 = &g_78;
    int *l_891 = &g_102;
    int *l_892 = &g_42;
    int *l_893 = (void*)0;
    int *l_894 = &g_42;
    int *l_895 = &g_78;
    int *l_896 = &l_875;
    int *l_897 = &l_880;
    int *l_898 = &g_74;
    int *l_899 = &g_102;
    int *l_900 = &g_78;
    int *l_901 = (void*)0;
    int *l_902 = &g_74;
    int *l_903 = &g_856;
    int *l_904 = &g_78;
    int *l_905 = &g_102;
    int *l_906 = &g_102;
    int *l_907 = &g_74;
    int *l_908 = &l_880;
    int *l_909 = &l_875;
    int *l_910 = &g_78;
    int *l_911 = &g_74;
    int *l_912 = (void*)0;
    int *l_913 = &g_74;
    int *l_914 = &g_74;
    int *l_915 = &l_875;
    int *l_916 = &g_74;
    (*l_855) &= (safe_rshift_func_uint8_t_u_s((g_4 != l_5), (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s((((*l_15) |= (safe_mul_func_int16_t_s_s(g_14, 0xCF30L))) | ((*l_854) = ((safe_lshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(func_23(((0x97L == l_5) > l_5), func_28(func_34(g_36), g_14, g_803, l_5, &g_804), &g_804, g_14), (*g_803))), g_477)), l_5)) ^ l_5))), 1)), l_5)), l_5))));
    (*l_870) = ((**l_857) = func_43(((void*)0 == l_857), ((safe_sub_func_int32_t_s_s((((*l_862) |= (255UL && (*l_855))) == (**l_858)), ((l_864 ^= ((*l_863) = (*g_243))) && func_23((*l_855), ((-1L) <= ((safe_add_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(1UL, 0x04L)) || 0xD181L), (***l_857))) != (*g_36))), l_869, (**l_858))))) != (***l_857))));
    g_917--;
    for (g_856 = (-7); (g_856 != 28); g_856++)
    {
        unsigned l_922 = 0UL;
        int l_925 = 7L;
        unsigned l_928 = 4294967292UL;
        (*l_914) ^= l_922;
        (**g_153) = (safe_sub_func_uint8_t_u_u((((*l_15) ^= (*g_36)) && (0xC8L | g_477)), 0xE8L));
        (*l_894) = (l_925 = (-6L));
        for (l_922 = (-29); (l_922 < 20); l_922++)
        {
            (*l_871) = 0xF4AB8C14L;
            l_925 |= ((&l_925 != (*g_153)) >= 9L);
            if (l_928)
                break;
        }
    }
    return g_103;
}







static short func_23(short p_24, int p_25, short * p_26, unsigned short p_27)
{
    int *l_852 = &g_78;
    l_852 = &g_42;
    return (*g_36);
}







static int func_28(short * p_29, unsigned char p_30, short * p_31, unsigned p_32, short * p_33)
{
    unsigned short l_805 = 0x54BAL;
    int **l_806 = &g_243;
    int **l_807 = (void*)0;
    int *l_809 = (void*)0;
    int **l_808 = &l_809;
    int *l_810 = (void*)0;
    int l_811 = 2L;
    int *l_812 = (void*)0;
    int *l_813 = &g_78;
    int *l_814 = &g_42;
    int l_815 = 0xC38392EBL;
    int *l_816 = &g_78;
    int *l_817 = &g_74;
    int *l_818 = &g_78;
    int l_819 = (-5L);
    int *l_820 = &g_74;
    int *l_821 = &g_74;
    int *l_822 = &g_42;
    int l_823 = 0x2B352CB7L;
    int *l_824 = (void*)0;
    int *l_825 = &g_74;
    int *l_826 = &l_823;
    int *l_827 = &g_78;
    int *l_828 = (void*)0;
    int *l_829 = &g_74;
    int *l_830 = &g_102;
    int *l_831 = &g_78;
    int *l_832 = &l_819;
    int *l_833 = (void*)0;
    int *l_834 = &g_74;
    int l_835 = (-1L);
    int *l_836 = &g_102;
    int *l_837 = &l_811;
    int l_838 = 1L;
    int *l_839 = &g_102;
    int l_840 = 0x50CE07EBL;
    int l_841 = 0x3909E9DBL;
    int l_842 = (-1L);
    int l_843 = 0xED7C35F5L;
    int l_844 = 0x469ACD80L;
    int *l_845 = &l_844;
    int *l_846 = (void*)0;
    int *l_847 = &l_811;
    int l_848 = 0xFEF0CCDEL;
    (*l_808) = ((*l_806) = func_43(l_805, (*p_29)));
    ++g_849;
    (*l_826) &= (*g_243);
    return g_324;
}







static short * func_34(short * const p_35)
{
    const unsigned l_40 = 0xF1E283D1L;
    short *l_63 = &g_37;
    unsigned char *l_330 = &g_331;
    short *l_332 = &g_333;
    const unsigned short l_589 = 1UL;
    const int * const l_590 = &g_42;
    int **l_802 = &g_243;
    for (g_37 = 12; (g_37 == (-5)); g_37--)
    {
        int *l_41 = &g_42;
        (*l_41) &= (l_40 || 65533UL);
    }
    (*l_802) = func_43(g_42, func_46(func_50((((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(func_59(l_63, (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((func_68(l_40, g_42) <= (~((*l_332) ^= (l_40 > (((safe_add_func_uint32_t_u_u((4294967286UL < ((0xA81958DDL <= (((*l_330) = g_42) == l_40)) == 4UL)), 0UL)) && l_40) ^ l_40))))), g_14)), g_14)), l_63), 0x74A86EECL)), g_477)) > 1L) > (-1L)), g_504, l_40, l_40), l_589, l_590));
    g_78 &= (*g_243);
    return &g_333;
}







static int * func_43(int p_44, short p_45)
{
    return &g_102;
}







static short func_46(int * p_47, const unsigned char p_48, const int * const p_49)
{
    int l_593 = (-1L);
    unsigned *l_594 = &g_211;
    char l_595 = 0L;
    int *l_598 = &l_593;
    int **l_597 = &l_598;
    int ***l_596 = &l_597;
    int l_615 = 0x795E8D71L;
    int l_625 = 0x38779D06L;
    int l_685 = 0xF4ADE73CL;
    short *l_754 = &g_37;
    const int *l_759 = &l_593;
    const short l_762 = 0x04DFL;
    unsigned short ***l_766 = (void*)0;
    unsigned short ***l_771 = (void*)0;
    if ((((safe_add_func_uint16_t_u_u(l_593, p_48)) < (func_68(g_14, ((*l_594) = 0xCA2D030CL)) > (65526UL == l_595))) < ((void*)0 == l_596)))
    {
        int *l_599 = &g_102;
        int *l_600 = (void*)0;
        int *l_601 = &g_102;
        int *l_602 = (void*)0;
        int *l_603 = &g_74;
        int *l_604 = (void*)0;
        int *l_605 = &g_102;
        int *l_606 = (void*)0;
        int *l_607 = &l_593;
        int *l_608 = &g_74;
        int *l_609 = &l_593;
        int l_610 = 0x423B886EL;
        int *l_611 = (void*)0;
        int *l_612 = (void*)0;
        int *l_613 = (void*)0;
        int *l_614 = &g_78;
        int l_616 = 0L;
        int *l_617 = &l_616;
        int l_618 = 0x1930937FL;
        int *l_619 = &g_78;
        int *l_620 = &l_615;
        int l_621 = 0x2BABF695L;
        int *l_622 = &l_615;
        int *l_623 = &l_621;
        int *l_624 = (void*)0;
        int *l_626 = &l_593;
        int *l_627 = &l_593;
        short *l_631 = &g_123;
        short **l_632 = (void*)0;
        short **l_633 = &l_631;
        unsigned short *l_634 = &g_504;
        unsigned char l_640 = 8UL;
        unsigned short l_735 = 65533UL;
        unsigned short **l_756 = &l_634;
        unsigned short ***l_755 = &l_756;
        ++g_628;
        if (func_80(g_476, &l_610, func_59(((*l_633) = l_631), g_123, &g_582), (((**l_597) <= (g_639 &= ((((*l_634)--) == (0UL < (safe_mul_func_int16_t_s_s((p_48 != g_476), 65527UL)))) > g_628))) & 0xD9B2L)))
        {
            int l_642 = 1L;
            int l_647 = 0xAA95A07CL;
            int l_665 = 0x660B678BL;
            unsigned char *l_696 = &g_331;
            if ((p_48 != (*g_36)))
            {
                int l_641 = 0L;
                int l_643 = 1L;
                int *l_644 = &l_610;
                int *l_645 = &l_642;
                int *l_646 = &l_616;
                int *l_648 = (void*)0;
                int *l_649 = (void*)0;
                int *l_650 = &g_102;
                int *l_651 = (void*)0;
                int l_652 = 1L;
                int *l_653 = &l_641;
                int *l_654 = (void*)0;
                int *l_655 = &g_102;
                int *l_656 = &l_618;
                int l_657 = 0L;
                int *l_658 = &l_642;
                int *l_659 = &l_621;
                int *l_660 = &l_643;
                int *l_661 = &l_610;
                int *l_662 = &l_610;
                int *l_663 = &l_618;
                int *l_664 = &l_647;
                int *l_666 = (void*)0;
                int *l_667 = &l_643;
                int *l_668 = &l_615;
                int *l_669 = (void*)0;
                int *l_670 = &g_74;
                int *l_671 = &l_642;
                int *l_672 = &l_647;
                int *l_673 = &l_642;
                int *l_674 = (void*)0;
                int *l_675 = &l_610;
                int *l_676 = &l_615;
                int *l_677 = &g_102;
                int *l_678 = &l_641;
                int *l_679 = &g_78;
                int *l_680 = &l_621;
                int *l_681 = &l_610;
                int *l_682 = &g_102;
                int *l_683 = &l_593;
                int *l_684 = &l_616;
                int *l_686 = &l_593;
                int *l_687 = &l_615;
                int *l_688 = &l_621;
                (*l_620) = l_640;
                g_689++;
                (**l_596) = (void*)0;
                (*l_597) = &l_642;
            }
            else
            {
                char *l_702 = &g_476;
                short **l_705 = &l_631;
                int l_750 = 0x3986B405L;
                if ((safe_sub_func_int8_t_s_s(0x8FL, p_48)))
                {
                    unsigned char **l_697 = &l_696;
                    unsigned char *l_699 = (void*)0;
                    unsigned char **l_698 = &l_699;
                    (*l_614) &= (safe_add_func_int32_t_s_s((255UL >= (&g_103 == ((*l_698) = ((*l_697) = l_696)))), 0UL));
                    (*l_601) = ((*p_47) = (safe_mul_func_uint16_t_u_u(((l_702 != &g_562) >= ((*l_605) & (&l_631 == l_705))), ((6L && (safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((*g_36), (safe_mod_func_uint8_t_u_u(((p_48 | (safe_rshift_func_int8_t_s_s(((l_647 || (*g_36)) == (***l_596)), g_582))) != 246UL), g_639)))), 5)), p_48)) != (*l_608)), (*g_36))), 0x0CEBL))) & (*p_47)))));
                }
                else
                {
                    short l_733 = (-2L);
                    if ((safe_rshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((!(safe_unary_minus_func_uint32_t_u((safe_mod_func_int8_t_s_s(p_48, 0xA8L))))), (*g_36))), ((p_48 < p_48) || ((g_103 != g_482) == 0x3318L)))))
                    {
                        int l_734 = 0xDA2DE2E8L;
                        (*l_619) = (!(l_733 & (2L | (*p_47))));
                        (**l_596) = &l_665;
                        (*l_623) |= l_734;
                        (**l_596) = func_50((*g_36), l_735, p_48, p_48);
                    }
                    else
                    {
                        const unsigned char l_751 = 0UL;
                        (**l_596) = func_50((*g_36), p_48, p_48, l_733);
                    }
                }
                (*l_605) &= g_183;
                (*l_619) ^= (p_48 >= 0xC5L);
            }
            for (g_211 = 20; (g_211 >= 3); g_211 = safe_sub_func_int16_t_s_s(g_211, 9))
            {
                (*l_597) = &l_647;
            }
        }
        else
        {
            (***l_596) &= (((l_754 != (void*)0) || (-4L)) || (((*l_594) = g_477) ^ (~0xA924A7ADL)));
        }
        (*l_755) = &l_634;
    }
    else
    {
        (*l_597) = &g_102;
    }
    for (l_615 = 4; (l_615 != 26); l_615 = safe_add_func_uint32_t_u_u(l_615, 2))
    {
        char l_763 = (-1L);
        unsigned short ****l_767 = &l_766;
        unsigned short **l_770 = &g_158;
        unsigned short ***l_769 = &l_770;
        unsigned short ****l_768 = &l_769;
        unsigned short ****l_772 = &l_771;
        int l_773 = (-1L);
        short *l_774 = &g_582;
        char *l_775 = &g_271;
        l_759 = p_49;
        (*p_47) |= (0x73C976F2L & (p_48 != (safe_mul_func_int16_t_s_s(l_762, l_763))));
        if (((safe_sub_func_int16_t_s_s(((*l_774) = (l_773 = ((*g_36) ^= (((*l_768) = ((*l_767) = l_766)) == ((*l_772) = l_771))))), 0x2869L)) & ((*l_775) = (0x40L && p_48))))
        {
            int l_796 = 0x25537350L;
            for (g_102 = (-27); (g_102 != 7); g_102 = safe_add_func_uint32_t_u_u(g_102, 1))
            {
                int *l_778 = &l_685;
                int *l_779 = (void*)0;
                int *l_780 = &g_74;
                int *l_781 = &l_773;
                int *l_782 = &l_593;
                int *l_783 = &l_593;
                int *l_784 = &g_74;
                int *l_785 = &g_78;
                int *l_786 = &g_74;
                int *l_787 = &l_593;
                int *l_788 = &l_625;
                int *l_789 = &l_773;
                int *l_790 = &l_773;
                int *l_791 = &l_773;
                int *l_792 = &g_74;
                ++g_793;
                (*l_781) ^= (*l_780);
            }
            (*p_47) ^= (l_796 < l_773);
        }
        else
        {
            const unsigned l_801 = 4294967294UL;
            l_773 &= ((0x28C4364AL && 0xBE186B8FL) <= (func_68(g_292, (safe_lshift_func_uint8_t_u_u(((((!1UL) | (g_14 >= l_763)) | (*g_36)) || 0xF2FE3ECDL), 2))) <= g_477));
        }
        (*p_47) = ((((+(&l_769 == (void*)0)) || p_48) || 0x7395L) | p_48);
    }
    return p_48;
}







static int * func_50(short p_51, int p_52, unsigned p_53, int p_54)
{
    int l_517 = 0x470504D8L;
    unsigned char *l_518 = (void*)0;
    unsigned char *l_519 = (void*)0;
    int l_520 = 0xB09FE853L;
    int *l_521 = &g_102;
    int *l_522 = &l_520;
    int *l_523 = &l_520;
    int *l_524 = &g_102;
    int l_525 = 0x59152CE2L;
    int *l_526 = &g_74;
    int *l_527 = &g_74;
    int *l_528 = &g_74;
    int *l_529 = &g_78;
    int *l_530 = &l_525;
    int *l_531 = &g_78;
    int *l_532 = &l_520;
    int *l_533 = &g_74;
    int *l_534 = &g_78;
    int *l_535 = (void*)0;
    int *l_536 = &l_525;
    int l_537 = 1L;
    int *l_538 = &g_102;
    int *l_539 = &g_78;
    int *l_540 = &g_74;
    int *l_541 = &g_74;
    int *l_542 = &g_78;
    int *l_543 = &l_520;
    int *l_544 = &l_537;
    int *l_545 = &l_525;
    int *l_546 = &g_74;
    int *l_547 = &l_537;
    int l_548 = 0x74CCA554L;
    int *l_549 = &l_525;
    int *l_550 = &g_74;
    int l_551 = 0xFF18D2C7L;
    int *l_552 = &l_537;
    int *l_553 = &g_74;
    int l_554 = (-1L);
    int l_555 = (-1L);
    int l_556 = 1L;
    int *l_557 = &l_556;
    int *l_558 = &l_551;
    int *l_559 = &l_554;
    int *l_560 = &l_548;
    int *l_561 = (void*)0;
    int *l_563 = (void*)0;
    int *l_564 = &l_555;
    int *l_565 = &l_548;
    int l_566 = 0L;
    int *l_567 = &g_102;
    int *l_568 = (void*)0;
    int *l_569 = &g_74;
    int l_570 = 0xB437FCC7L;
    int *l_571 = &l_570;
    int *l_572 = &l_554;
    int *l_573 = (void*)0;
    int l_574 = (-4L);
    int *l_575 = &g_78;
    int *l_576 = &g_74;
    int *l_577 = &l_556;
    int *l_578 = (void*)0;
    unsigned char l_579 = 252UL;
    (*l_521) |= (safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s(l_517, (l_520 = 0x19L))), l_517));
    --l_579;
    g_583++;
    for (g_136 = (-16); (g_136 == 40); g_136++)
    {
        int *l_588 = &l_574;
        (*l_545) = p_51;
        return &g_74;
    }
    return &g_74;
}







static unsigned func_59(short * p_60, unsigned p_61, short * p_62)
{
    unsigned l_351 = 0xA615A5E8L;
    int l_354 = (-9L);
    int l_366 = 0x164AAAB6L;
    int l_383 = 0xA8B32BEEL;
    int l_397 = 0xC64E1DA1L;
    int l_413 = 0xCFB175DEL;
    int l_433 = 0x5EFAB24AL;
    int l_448 = 0x8DEAA391L;
    int l_450 = 0x3F9BEFCDL;
    int l_472 = 8L;
    int l_473 = (-1L);
    int l_480 = 1L;
    char l_505 = 3L;
    int **l_512 = &g_243;
    for (g_292 = (-6); (g_292 <= 26); g_292++)
    {
        unsigned short l_336 = 0UL;
        int *l_337 = (void*)0;
        int *l_338 = &g_78;
        int *l_355 = &g_102;
        int *l_356 = &g_78;
        int *l_357 = (void*)0;
        int *l_358 = &g_102;
        int *l_359 = &g_78;
        int *l_360 = &g_102;
        int *l_361 = &l_354;
        int *l_362 = &g_102;
        int *l_363 = &g_74;
        int *l_364 = &g_78;
        int *l_365 = &g_78;
        int *l_367 = &g_78;
        int *l_368 = &g_74;
        int *l_369 = (void*)0;
        int *l_370 = &g_78;
        int *l_371 = &g_74;
        int *l_372 = &l_366;
        int *l_373 = &g_102;
        int *l_374 = &g_78;
        int *l_375 = &l_366;
        int *l_376 = (void*)0;
        int *l_377 = &g_74;
        int *l_378 = (void*)0;
        int l_379 = 0x9495E14DL;
        int *l_380 = &g_74;
        int *l_381 = (void*)0;
        int *l_382 = &l_354;
        int *l_384 = (void*)0;
        int *l_385 = &g_74;
        int *l_386 = &g_102;
        int *l_387 = &g_74;
        int *l_388 = &l_379;
        int *l_389 = &l_383;
        int *l_390 = &g_74;
        int *l_391 = &g_102;
        int *l_392 = &g_78;
        int *l_393 = &l_366;
        int *l_394 = (void*)0;
        int *l_395 = &l_366;
        int *l_396 = &l_354;
        int *l_398 = &g_102;
        int *l_399 = &l_397;
        int *l_400 = (void*)0;
        int *l_401 = &g_74;
        int *l_402 = &l_397;
        int *l_403 = &l_379;
        int *l_404 = &g_74;
        int l_405 = 1L;
        int *l_406 = &l_397;
        int *l_407 = &l_366;
        int *l_408 = &g_78;
        int *l_409 = &l_397;
        int *l_410 = &l_354;
        int *l_411 = &g_74;
        int *l_412 = &l_354;
        int *l_414 = &l_397;
        int *l_415 = &l_366;
        int *l_416 = &l_413;
        short l_417 = (-9L);
        int *l_418 = &l_405;
        int *l_419 = (void*)0;
        int *l_420 = &g_102;
        int *l_421 = &l_405;
        int *l_422 = (void*)0;
        int *l_423 = (void*)0;
        int *l_424 = (void*)0;
        int *l_425 = (void*)0;
        int *l_426 = &l_354;
        int *l_427 = (void*)0;
        int *l_428 = &l_413;
        int *l_430 = &l_413;
        int *l_431 = &l_405;
        int *l_432 = &l_354;
        int *l_434 = (void*)0;
        int *l_435 = (void*)0;
        int *l_436 = (void*)0;
        int *l_437 = &l_413;
        int *l_438 = &l_413;
        int *l_439 = &g_102;
        int *l_440 = &g_102;
        int *l_441 = (void*)0;
        int *l_442 = &l_354;
        int *l_443 = &l_366;
        int l_444 = (-2L);
        int *l_445 = &l_413;
        int *l_446 = &l_366;
        int *l_447 = &l_397;
        int *l_449 = &l_383;
        int *l_451 = &g_74;
        int *l_452 = (void*)0;
        int *l_453 = &g_78;
        int *l_454 = (void*)0;
        int *l_455 = (void*)0;
        int *l_457 = &l_397;
        int *l_458 = &l_354;
        int *l_459 = &l_383;
        int *l_460 = &g_74;
        int *l_461 = (void*)0;
        int l_462 = 0xB23CB69BL;
        int *l_463 = (void*)0;
        int *l_464 = &g_74;
        int *l_465 = &l_366;
        int *l_466 = &l_405;
        int *l_467 = (void*)0;
        int *l_468 = (void*)0;
        int *l_469 = (void*)0;
        int *l_470 = &g_74;
        int *l_471 = (void*)0;
        int l_474 = (-7L);
        int *l_475 = &l_462;
        int *l_478 = (void*)0;
        int *l_479 = &l_462;
        int *l_481 = (void*)0;
        (*l_338) = (p_61 < (+l_336));
        for (g_324 = 21; (g_324 <= 46); g_324 = safe_add_func_uint32_t_u_u(g_324, 2))
        {
            int *l_341 = &g_102;
            int *l_342 = &g_78;
            int *l_343 = &g_74;
            int *l_344 = &g_102;
            int *l_345 = &g_78;
            int *l_346 = &g_78;
            int *l_347 = &g_74;
            int *l_348 = (void*)0;
            int *l_349 = &g_74;
            int *l_350 = &g_74;
            l_351++;
        }
        --g_482;
    }
    if (l_433)
    {
        int **l_485 = &g_243;
        char *l_490 = &g_149;
        unsigned short *l_499 = &g_136;
        unsigned short *l_502 = (void*)0;
        unsigned short *l_503 = &g_504;
        (*l_485) = &g_42;
        if ((safe_lshift_func_uint8_t_u_u(0x61L, (func_68(((safe_mod_func_int8_t_s_s(((*l_490) = ((void*)0 != &g_243)), 0x52L)) | (safe_mul_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(((void*)0 == &g_42), l_354)) == p_61), g_331))), g_123) == 4294967289UL))))
        {
            const int * const l_506 = &l_383;
            const int *l_508 = (void*)0;
            const int **l_507 = &l_508;
            (*l_507) = l_506;
        }
        else
        {
            unsigned short l_509 = 0xB38CL;
            return l_509;
        }
    }
    else
    {
        int *l_510 = (void*)0;
        int *l_511 = &g_102;
        (*l_511) = l_366;
    }
    g_102 = (l_512 != &g_243);
    return g_122;
}







static short func_68(int p_69, unsigned p_70)
{
    unsigned l_79 = 1UL;
    int *l_88 = &g_42;
    int l_241 = 0xA71AB258L;
    int l_242 = 0x92DFF05BL;
    for (g_37 = 0; (g_37 >= 3); ++g_37)
    {
        int *l_73 = &g_74;
        int *l_77 = &g_78;
        int l_259 = (-10L);
        int l_276 = 0x8D7CBB44L;
        int l_300 = 0L;
        int l_308 = (-4L);
        int l_320 = 0xB43409B3L;
        (*l_73) = g_42;
        if (((safe_add_func_int32_t_s_s((((((*g_36) && ((&g_42 == (void*)0) && (l_79 = ((*l_77) = ((*l_73) |= 0xA0262B09L))))) == g_42) == (*g_36)) <= func_80((safe_add_func_uint32_t_u_u(0xD3B3E240L, (g_87 &= g_42))), l_88, p_70, (*l_88))), 0xB9F05F92L)) || 249UL))
        {
            int *l_226 = &g_42;
            int **l_227 = &l_73;
            int **l_228 = &l_77;
            (*l_228) = ((*l_227) = l_226);
        }
        else
        {
            int **l_229 = &l_73;
            short *l_230 = (void*)0;
            short *l_231 = &g_123;
            unsigned short *l_236 = (void*)0;
            unsigned short *l_237 = &g_136;
            char *l_240 = &g_149;
            int l_245 = 0x66B2A51BL;
            int l_257 = 7L;
            int l_293 = 1L;
            int l_299 = 0x7E58AAE4L;
            char l_315 = 0x88L;
            (*l_229) = &g_42;
            if (((*l_77) = (((((*l_231) = (p_69 >= (0x726BL > (**l_229)))) <= ((safe_mul_func_uint16_t_u_u((**l_229), (safe_add_func_int8_t_s_s(g_212, (!((--(*l_237)) >= (l_242 = ((g_122 = ((l_241 = (((*l_240) = 0xB2L) > ((void*)0 != &g_87))) != g_37)) || p_70)))))))) ^ 0x45L)) && g_122) != p_69)))
            {
                int *l_244 = &g_102;
                int *l_246 = &l_241;
                int *l_247 = &g_78;
                int *l_248 = &g_102;
                int *l_249 = (void*)0;
                int *l_250 = &g_102;
                int *l_251 = &g_78;
                int *l_252 = &g_102;
                int *l_253 = &l_242;
                int *l_254 = (void*)0;
                int *l_255 = &l_245;
                int *l_256 = (void*)0;
                int *l_258 = (void*)0;
                int *l_260 = &l_259;
                int *l_261 = (void*)0;
                int *l_262 = &g_78;
                int *l_263 = &g_74;
                int *l_264 = &g_78;
                int *l_265 = &l_245;
                int *l_266 = (void*)0;
                int *l_267 = &l_245;
                int *l_268 = &l_241;
                int *l_269 = &g_74;
                int *l_270 = &g_78;
                int *l_272 = &l_259;
                int *l_273 = (void*)0;
                int *l_274 = (void*)0;
                int *l_275 = &l_241;
                int *l_277 = &g_78;
                int *l_278 = &g_102;
                int *l_279 = &l_276;
                int *l_280 = &l_259;
                int *l_281 = (void*)0;
                int *l_282 = &l_242;
                int *l_283 = &l_259;
                int *l_284 = &l_241;
                int *l_285 = &l_245;
                int *l_286 = &l_242;
                int *l_287 = (void*)0;
                int *l_288 = (void*)0;
                int *l_289 = &l_257;
                int *l_290 = &g_102;
                int *l_291 = &l_241;
                int *l_294 = (void*)0;
                int *l_295 = &l_241;
                int *l_296 = &g_78;
                int *l_297 = &l_259;
                int l_298 = 5L;
                int *l_301 = &l_299;
                int *l_302 = &l_300;
                int *l_303 = (void*)0;
                int *l_304 = &l_257;
                int *l_305 = &l_241;
                int *l_306 = &l_241;
                int *l_307 = &g_102;
                int *l_309 = &l_245;
                int l_310 = (-5L);
                int *l_311 = &g_78;
                int *l_312 = &l_276;
                int *l_313 = &l_245;
                int *l_314 = &l_257;
                int *l_316 = &l_300;
                int *l_317 = &g_78;
                int *l_318 = (void*)0;
                int *l_319 = &l_276;
                int *l_321 = &l_308;
                int *l_322 = &g_102;
                int *l_323 = &l_299;
                g_243 = &l_242;
                g_324--;
                (*l_260) |= (*g_243);
            }
            else
            {
                int ***l_327 = &l_229;
                (*l_327) = l_229;
                (*l_77) = p_70;
                g_243 = &g_102;
            }
            (*l_229) = &l_320;
        }
    }
    return p_70;
}







static const int func_80(unsigned p_81, int * p_82, const short p_83, short p_84)
{
    unsigned short l_89 = 9UL;
    int l_118 = 3L;
    short *l_196 = (void*)0;
    char *l_204 = &g_122;
    int *l_218 = &g_102;
    l_89--;
    for (l_89 = 0; (l_89 != 25); l_89 = safe_add_func_int32_t_s_s(l_89, 4))
    {
        char l_104 = 0x0AL;
        int l_148 = 0xFDD69053L;
        int l_150 = 0x23D51155L;
        int l_157 = 1L;
        for (p_84 = (-11); (p_84 > 23); ++p_84)
        {
            int *l_96 = &g_42;
            int l_109 = (-5L);
            const char *l_206 = &g_149;
            if (((void*)0 == l_96))
            {
                for (g_87 = (-11); (g_87 == 43); ++g_87)
                {
                    int *l_101 = &g_102;
                    (*l_101) = (safe_rshift_func_int16_t_s_u(((1UL && l_89) || g_14), 10));
                }
                l_104 = g_103;
                p_82 = p_82;
            }
            else
            {
                int l_107 = 1L;
                unsigned char l_139 = 255UL;
                short *l_156 = &g_37;
                unsigned short *l_160 = &l_89;
                unsigned short **l_159 = &l_160;
                unsigned short *l_162 = (void*)0;
                unsigned short **l_161 = &l_162;
                int l_178 = (-3L);
                int **l_198 = (void*)0;
                int **l_199 = &l_96;
                char **l_205 = &l_204;
                unsigned *l_207 = &g_87;
                unsigned *l_210 = &g_211;
                for (g_103 = 0; (g_103 != 22); ++g_103)
                {
                    int *l_108 = &g_102;
                    (*l_108) ^= (l_107 == (p_81 ^ (*g_36)));
                    if (g_103)
                        continue;
                }
                if ((((((*l_159) = (g_158 = &l_89)) != ((*l_161) = &l_89)) == (*p_82)) & p_84))
                {
                    int *l_163 = &g_102;
                    int *l_164 = &l_148;
                    int *l_165 = (void*)0;
                    int *l_166 = (void*)0;
                    int *l_167 = &l_148;
                    int *l_168 = &l_118;
                    int *l_169 = (void*)0;
                    int *l_170 = &g_102;
                    int *l_171 = &l_148;
                    int *l_172 = &l_148;
                    int *l_173 = &l_118;
                    int *l_174 = (void*)0;
                    int *l_175 = &l_157;
                    int *l_176 = (void*)0;
                    int *l_177 = &g_102;
                    int *l_179 = &l_118;
                    int *l_180 = &g_102;
                    int *l_181 = &l_178;
                    int *l_182 = &g_102;
                    --g_183;
                }
                else
                {
                    int *l_197 = &g_102;
                    (*l_197) |= (safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u((*g_158), (safe_rshift_func_uint8_t_u_s(p_83, 3)))), (safe_sub_func_int16_t_s_s(p_83, (l_196 == (void*)0))))), (-1L)));
                    (*l_197) = 0x639C8BEEL;
                }
                (*l_199) = &g_42;
                g_102 |= (safe_sub_func_int32_t_s_s((&g_149 != &l_104), (g_212 &= (safe_add_func_uint16_t_u_u((l_157 != ((((*l_205) = l_204) == l_206) && (*g_36))), (g_42 ^ (((*l_207) = p_84) < (safe_sub_func_uint32_t_u_u(((*l_210) = p_84), p_83)))))))));
            }
        }
        for (p_84 = 0; (p_84 == (-13)); --p_84)
        {
            int * const l_217 = &l_148;
            for (l_118 = 8; (l_118 != (-21)); l_118--)
            {
                return g_212;
            }
            l_218 = l_217;
            if (l_157)
            {
                unsigned char l_219 = 0xC3L;
                --l_219;
                if ((*p_82))
                    break;
            }
            else
            {
                if ((*p_82))
                    break;
            }
            l_157 |= (*l_218);
        }
        if (g_103)
            break;
    }
    for (g_183 = 14; (g_183 <= 33); ++g_183)
    {
        int *l_224 = &g_102;
        int **l_225 = &l_224;
        (*l_224) = g_212;
        (*l_225) = &g_42;
    }
    return g_14;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_324, "g_324", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_429, "g_429", print_hash_value);
    transparent_crc(g_456, "g_456", print_hash_value);
    transparent_crc(g_476, "g_476", print_hash_value);
    transparent_crc(g_477, "g_477", print_hash_value);
    transparent_crc(g_482, "g_482", print_hash_value);
    transparent_crc(g_504, "g_504", print_hash_value);
    transparent_crc(g_562, "g_562", print_hash_value);
    transparent_crc(g_582, "g_582", print_hash_value);
    transparent_crc(g_583, "g_583", print_hash_value);
    transparent_crc(g_628, "g_628", print_hash_value);
    transparent_crc(g_639, "g_639", print_hash_value);
    transparent_crc(g_689, "g_689", print_hash_value);
    transparent_crc(g_793, "g_793", print_hash_value);
    transparent_crc(g_804, "g_804", print_hash_value);
    transparent_crc(g_849, "g_849", print_hash_value);
    transparent_crc(g_856, "g_856", print_hash_value);
    transparent_crc(g_917, "g_917", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
