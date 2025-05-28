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
   int f0;
   unsigned short f1;
   const int f2;
   unsigned f3;
   unsigned f4;
   int f5;
   short f6;
   const short f7;
   const int f8;
   char f9;
};


static int g_5 = 0x947597A6L;
static int g_38 = (-9L);
static char g_48 = (-1L);
static int *g_71 = &g_38;
static int ** const g_70 = &g_71;
static unsigned short g_75 = 0xD515L;
static int g_80 = (-8L);
static char *g_82 = &g_48;
static char **g_81 = &g_82;
static unsigned short g_116 = 0x4AE8L;
static char g_152 = 7L;
static struct S0 g_161 = {0x202E23DBL,65535UL,-3L,4294967290UL,1UL,8L,-10L,0x2834L,-1L,0x06L};
static struct S0 * const g_160 = &g_161;
static struct S0 * const *g_159 = &g_160;
static unsigned char g_178 = 255UL;
static unsigned short * const *g_200 = (void*)0;
static short g_272 = 2L;
static unsigned g_274 = 1UL;
static char ***g_291 = &g_81;
static char ****g_290 = &g_291;
static unsigned char g_349 = 0x80L;
static unsigned g_371 = 0x8B44118CL;
static int *g_403 = &g_80;
static short **g_438 = (void*)0;
static const unsigned **g_479 = (void*)0;
static char g_495 = 1L;
static int **g_505 = &g_71;
static int ***g_504 = &g_505;
static struct S0 *g_515 = &g_161;
static short g_611 = (-1L);
static short g_615 = 0L;
static int g_624 = (-7L);
static unsigned *g_754 = (void*)0;
static unsigned **g_753 = &g_754;
static int g_775 = (-1L);
static short ***g_801 = (void*)0;
static const int *g_848 = (void*)0;
static const int **g_847 = &g_848;
static const short ****g_955 = (void*)0;
static int g_974 = 0x9767016DL;
static int *g_1020 = (void*)0;
static int **g_1019 = &g_1020;
static struct S0 **g_1062 = &g_515;



static struct S0 func_1(void);
static int func_2(short p_3, unsigned char p_4);
static unsigned char func_6(const unsigned p_7, unsigned short p_8, struct S0 p_9, unsigned p_10, struct S0 p_11);
static const unsigned func_12(char p_13, unsigned char p_14, unsigned p_15, char p_16);
static char func_18(int p_19, int p_20, short p_21, unsigned char p_22);
static short func_23(unsigned short p_24, short p_25);
static unsigned func_26(struct S0 p_27, struct S0 p_28, unsigned p_29, const char p_30, char p_31);
static struct S0 func_32(char p_33, unsigned short p_34);
static unsigned char func_35(int p_36);
static const unsigned short func_39(int * p_40, unsigned short p_41, const int * const p_42);
static struct S0 func_1(void)
{
    unsigned l_17 = 0UL;
    int *l_43 = &g_38;
    char *l_47 = &g_48;
    struct S0 l_97 = {1L,0x0FD8L,0x3473E551L,1UL,0xE24C2F89L,0xC2D3C6BEL,1L,0xEDD9L,0xC0B5FFC7L,0x43L};
    int l_98 = 0x00CEE564L;
    unsigned char *l_816 = &g_178;
    int l_817 = 0x01016B9DL;
    int l_818 = 0x4B6B2F61L;
    unsigned l_1064 = 4294967295UL;
    unsigned **l_1068 = &g_754;
    (*l_43) = func_2(g_5, func_6(func_12(l_17, (func_18(((((*l_816) = (func_23(g_5, ((func_26(func_32(((*l_43) = ((*l_47) = ((func_35(g_5) , func_39(l_43, (((*l_43) , ((*l_43) > g_38)) <= (*l_43)), l_43)) , (-1L)))), g_5), l_97, l_98, l_97.f8, l_97.f1) , (**g_81)) | (-6L))) & l_97.f9)) & 0x29L) != 0x876FFC1FL), g_615, l_817, l_818) & 0xFEL), l_97.f4, g_615), l_1064, l_97, g_161.f2, l_97));
    (**g_504) = (((void*)0 == l_1068) , &l_818);
    return l_97;
}







static int func_2(short p_3, unsigned char p_4)
{
    for (g_5 = 0; (g_5 != 15); ++g_5)
    {
        return (**g_505);
    }
    return (*g_848);
}







static unsigned char func_6(const unsigned p_7, unsigned short p_8, struct S0 p_9, unsigned p_10, struct S0 p_11)
{
    const int *l_1065 = &g_624;
    (*g_847) = l_1065;
    (*g_70) = (**g_504);
    return (*l_1065);
}







static const unsigned func_12(char p_13, unsigned char p_14, unsigned p_15, char p_16)
{
    int ****l_828 = &g_504;
    int ****l_830 = &g_504;
    int *****l_829 = &l_830;
    unsigned char *l_831 = &g_349;
    unsigned **l_840 = &g_754;
    int *l_893 = &g_38;
    const short *l_959 = &g_161.f7;
    const short **l_958 = &l_959;
    const short ***l_957 = &l_958;
    const short ****l_956 = &l_957;
    int l_979 = (-6L);
    unsigned short l_993 = 0x09B0L;
    struct S0 l_1046 = {0x786C0215L,0x2302L,0x74CD8571L,4294967288UL,1UL,-7L,-10L,0L,0x6481E8A3L,-1L};
    (**g_504) = (*g_70);
    for (g_161.f3 = 0; (g_161.f3 >= 13); g_161.f3++)
    {
        (**g_504) = (*g_505);
    }
    (*g_71) = (safe_add_func_uint8_t_u_u((l_828 == ((*l_829) = l_828)), ((*l_831) = 0x41L)));
    if ((***g_504))
    {
        unsigned l_834 = 9UL;
        unsigned l_878 = 9UL;
        short l_879 = 0x92A5L;
        int *l_892 = &g_775;
        struct S0 l_918 = {0xF480FDA3L,0x444BL,0x184BC0FDL,0xAB1E477AL,1UL,-1L,-3L,0xAB2CL,-1L,0L};
        short * const l_927 = (void*)0;
        short * const *l_926 = &l_927;
        int l_971 = 0x3B7C4F7BL;
        unsigned l_1039 = 0x9B968C6BL;
        short * const l_1051 = &l_1046.f6;
        unsigned short *l_1054 = &l_918.f1;
        for (p_16 = 0; (p_16 == 22); p_16 = safe_add_func_uint8_t_u_u(p_16, 4))
        {
            char ****l_835 = &g_291;
            int l_853 = 0xA4B7B904L;
            char l_897 = 0xDFL;
        }
        for (g_152 = 0; (g_152 >= (-7)); --g_152)
        {
            int *l_937 = &g_624;
            char l_946 = 0x2CL;
            unsigned short *l_960 = &g_161.f1;
            struct S0 l_995 = {-1L,65533UL,6L,0x22BC4BE7L,1UL,0x1C35E2FBL,0xC89DL,0x4E58L,0x54FD7AC7L,0x40L};
            int l_996 = 0xAF4A3366L;
        }
        (*l_892) = ((&g_290 == ((safe_lshift_func_uint16_t_u_s(((*l_1054) = ((*****l_829) = ((0xE0E0L > (*l_892)) , ((l_1046 , (((p_15 && (safe_sub_func_int8_t_s_s((safe_div_func_int16_t_s_s((((*l_831) = (((p_16 , ((void*)0 == l_1051)) ^ (((safe_mod_func_uint8_t_u_u(p_15, g_178)) || p_16) , (*l_892))) == (-9L))) && 0x1AL), 0x8522L)), (*l_892)))) != p_16) != (*g_82))) || p_13)))), 12)) , &g_290)) > (-1L));
    }
    else
    {
        unsigned l_1063 = 0xBBF7C711L;
        for (g_615 = 0; (g_615 >= 5); g_615++)
        {
            (*g_847) = (*g_847);
            for (p_13 = 0; (p_13 == (-15)); p_13--)
            {
                int *l_1059 = (void*)0;
                (*g_847) = l_1059;
            }
            (*g_71) = (safe_sub_func_uint16_t_u_u((+((void*)0 == g_1062)), (l_1063 = (!p_13))));
            (****l_830) = (**g_505);
        }
        return g_80;
    }
    return p_16;
}







static char func_18(int p_19, int p_20, short p_21, unsigned char p_22)
{
    int *l_822 = &g_38;
    unsigned char l_823 = 0x8FL;
lbl_821:
    for (g_161.f0 = 0; (g_161.f0 > 26); g_161.f0 = safe_add_func_uint32_t_u_u(g_161.f0, 9))
    {
        (*g_403) = 0xDCC4B6A2L;
        if (g_161.f0)
            goto lbl_821;
    }
    (*g_505) = l_822;
    (**g_504) = l_822;
    (**g_505) = p_19;
    return l_823;
}







static short func_23(unsigned short p_24, short p_25)
{
    int *l_380 = &g_80;
    int l_383 = 0x99512EF9L;
    unsigned short l_418 = 0xC1C0L;
    struct S0 **l_423 = (void*)0;
    struct S0 l_514 = {8L,0x5189L,0xC986FB32L,4294967290UL,4294967286UL,0x949954C0L,0x015EL,0xFD05L,0x5591BA20L,-1L};
    unsigned char l_521 = 255UL;
    int l_526 = 0x03BA8366L;
    int *l_527 = (void*)0;
    int *l_528 = &l_383;
    unsigned short l_534 = 0UL;
    const unsigned char l_535 = 1UL;
    int l_536 = 0x49E106DEL;
    unsigned *l_537 = &g_371;
    short *l_671 = &g_161.f6;
    short **l_670 = &l_671;
    char l_717 = 0x3FL;
    const unsigned *l_749 = &g_274;
    const unsigned **l_748 = &l_749;
    struct S0 **l_755 = &g_515;
    char *l_802 = &g_48;
lbl_520:
    if ((safe_div_func_uint8_t_u_u((((safe_unary_minus_func_int32_t_s(((*l_380) = p_25))) > (~(0x79L < (safe_sub_func_uint16_t_u_u(((1UL == g_349) >= func_35((l_383 > (safe_rshift_func_uint8_t_u_s(0x06L, 0))))), ((+(g_349 <= 0xA9D4L)) , 0xBA94L)))))) , g_349), g_178)))
    {
        return (*l_380);
    }
    else
    {
        struct S0 *l_390 = &g_161;
        char ** const *l_395 = (void*)0;
        char ** const **l_394 = &l_395;
        char ** const ***l_393 = &l_394;
        int l_402 = 0x86919A17L;
        const unsigned *l_478 = &g_274;
        const unsigned **l_477 = &l_478;
        unsigned char l_485 = 0xEAL;
        struct S0 ***l_486 = &l_423;
        unsigned short * const l_490 = &g_75;
        unsigned short * const *l_489 = &l_490;
        unsigned l_502 = 0x5908953DL;
        int l_509 = 8L;
        struct S0 **l_516 = &l_390;
        for (g_349 = (-1); (g_349 != 25); g_349++)
        {
            int *l_404 = &g_80;
            char l_414 = 0x49L;
            short l_437 = 2L;
            int *** const l_448 = (void*)0;
            unsigned short *l_473 = &g_161.f1;
            struct S0 l_476 = {0L,0xE1C8L,0L,4294967295UL,1UL,0x118DF4F6L,-1L,0xE81AL,-3L,1L};
            for (g_38 = 0; (g_38 > (-20)); g_38 = safe_sub_func_uint32_t_u_u(g_38, 1))
            {
                struct S0 **l_391 = &l_390;
                int l_392 = 0x8506B361L;
                unsigned short *l_396 = &g_116;
                unsigned char *l_397 = (void*)0;
                unsigned char *l_398 = (void*)0;
                unsigned char *l_399 = &g_178;
                (*l_391) = l_390;
                (*l_380) = p_25;
                if (((((((((*g_82) = l_392) ^ (0L & (7UL ^ ((0UL && ((*l_396) = (&g_290 != l_393))) & g_161.f7)))) < (~((*l_399) = 0xE9L))) && ((((((safe_div_func_uint8_t_u_u(1UL, 0xE1L)) != (*g_82)) != p_24) == 65535UL) >= p_24) | l_402)) | 255UL) < p_24) < p_24))
                {
                    l_404 = g_403;
                    return p_25;
                }
                else
                {
                    (*l_404) = (*l_404);
                    (*l_404) = l_392;
                }
            }
            for (g_80 = 26; (g_80 < (-13)); g_80 = safe_sub_func_uint8_t_u_u(g_80, 8))
            {
                unsigned short l_412 = 0x8F4CL;
                unsigned short *l_413 = &l_412;
                int *l_415 = &g_38;
                short *l_440 = (void*)0;
                short **l_439 = &l_440;
                char ***l_452 = &g_81;
                if ((((!((safe_mod_func_uint32_t_u_u(((0xD8L != (((*g_290) == (*g_290)) , (safe_add_func_uint8_t_u_u((((*l_380) , (l_402 && 0x3504L)) , p_25), (((safe_unary_minus_func_int8_t_s(func_39(&l_383, ((*l_413) = (l_412 , p_25)), &l_383))) ^ 0x88C7L) <= g_161.f2))))) ^ l_402), l_414)) || (****g_290))) , (**g_81)) && g_161.f8))
                {
                    unsigned char l_441 = 0x55L;
                    (*g_70) = (l_415 = l_404);
                    for (p_24 = 14; (p_24 < 44); p_24 = safe_add_func_int8_t_s_s(p_24, 2))
                    {
                        int *l_419 = &l_383;
                        struct S0 * const *l_422 = &g_160;
                        (*l_419) = (l_418 , (**g_70));
                        (*l_419) = ((*l_380) || ((safe_div_func_int32_t_s_s(((****g_290) , (g_161.f3 , (*l_380))), ((*l_404) , (~(*l_419))))) || (l_422 == (l_423 = &l_390))));
                    }
                    if ((safe_rshift_func_int8_t_s_s(((p_24 ^ (safe_unary_minus_func_int32_t_s((l_437 = ((l_402 , func_39(l_404, (safe_lshift_func_int8_t_s_s(((**g_81) = l_402), 5)), &l_402)) , (safe_rshift_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u((&g_272 == (void*)0), (safe_lshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u(246UL, (***g_291))), 8)))) >= g_274) > (*l_404)), 1))))))) == 4294967295UL), (*l_415))))
                    {
                        l_439 = g_438;
                        return p_24;
                    }
                    else
                    {
                        int *l_442 = &g_38;
                        (*l_442) = l_441;
                        return (*l_442);
                    }
                }
                else
                {
                    int *l_449 = &g_161.f0;
                    int *l_450 = &g_161.f5;
                    char * const **l_451 = (void*)0;
                    int l_457 = 8L;
                    int *l_459 = &l_402;
                    (*l_415) = (p_25 > (((0xFAB7L > ((*l_413) = p_24)) || (safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_unary_minus_func_int16_t_s(p_24)), (((*l_450) = ((*l_449) = (p_25 | (0xAD72L | (&g_70 != ((*g_160) , l_448)))))) , p_25))), p_25))) , p_25));
                    (*l_415) = (g_161.f0 , (l_451 != l_452));
                    if (((*l_415) = (safe_sub_func_uint16_t_u_u(l_402, 0x2302L))))
                    {
                        int **l_456 = &l_415;
                        int ***l_455 = &l_456;
                        (*l_455) = (void*)0;
                        l_457 = l_457;
                    }
                    else
                    {
                        int *l_458 = &l_457;
                        int **l_468 = &l_415;
                        l_459 = l_458;
                        (*l_459) = ((*g_403) , ((safe_div_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u(p_24, p_25)) || (p_25 , func_39(&l_383, (safe_lshift_func_uint16_t_u_s((g_161.f1 = ((*l_458) = ((*l_413) = p_25))), 0)), l_449))) , (safe_div_func_int8_t_s_s(func_39(((*g_70) = &l_457), p_24, l_415), p_25))), p_25)) , p_25));
                        (**g_70) = (((***g_290) = (*g_81)) == &l_414);
                        (*l_468) = ((*g_70) = l_458);
                    }
                }
                (*g_70) = &l_383;
                (*g_71) = l_402;
                (**g_70) = (**g_70);
            }
            if ((safe_lshift_func_uint16_t_u_s(((*l_473) = ((safe_lshift_func_int8_t_s_s(l_402, 2)) | 0UL)), 12)))
            {
                if ((*g_403))
                    break;
                return (*l_380);
            }
            else
            {
                const unsigned ***l_480 = &l_477;
                (*l_480) = (((!(safe_lshift_func_int16_t_s_u(p_25, ((*l_473) = 0x549CL)))) , ((****g_290) , l_476)) , (g_479 = l_477));
            }
            (*l_380) = ((safe_lshift_func_int8_t_s_s(p_25, 1)) , ((*l_380) < func_35((safe_mod_func_uint16_t_u_u((+((*l_473) = ((&l_423 != (l_485 , l_486)) & func_35((safe_sub_func_uint16_t_u_u(p_25, func_39(&l_402, ((void*)0 == l_489), &l_383))))))), p_25)))));
        }
        for (g_38 = 1; (g_38 < (-11)); g_38--)
        {
            char l_500 = 0L;
            int ** const *l_503 = &g_70;
            for (g_274 = 0; (g_274 > 19); ++g_274)
            {
                unsigned short l_499 = 1UL;
                struct S0 l_501 = {0x2F8B824FL,0UL,-8L,4294967292UL,1UL,0L,-2L,0xA8EDL,-3L,0x19L};
                if ((p_24 , p_24))
                {
                    return g_495;
                }
                else
                {
                    unsigned l_498 = 4294967288UL;
                    for (g_116 = 0; (g_116 <= 2); g_116 = safe_add_func_uint8_t_u_u(g_116, 3))
                    {
                        int ****l_506 = &g_504;
                        (*l_380) = (p_25 || l_498);
                        (*l_380) = (((l_499 , l_500) != (p_24 > ((l_402 , ((((*l_490) = (g_116 >= (l_501 , l_502))) , l_503) != ((*l_506) = g_504))) , (-6L)))) & (****g_290));
                    }
                }
                (**g_504) = &l_402;
                return g_152;
            }
            (*g_403) = p_25;
            (*l_380) = (*l_380);
            for (l_402 = 0; (l_402 != (-20)); l_402 = safe_sub_func_uint16_t_u_u(l_402, 2))
            {
                l_509 = (l_502 , ((*g_403) = (5UL | 0x53L)));
                if (g_161.f8)
                    goto lbl_520;
            }
        }
        (*l_516) = (func_35(((((((*l_380) = l_485) && (l_485 & func_39(&l_509, (((***g_291) = ((***g_291) && ((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((+l_502), (*l_380))), p_24)) < 1L))) < 0x06L), &l_509))) & p_25) < 0x7026L) != (-1L))) , &l_514);
        for (l_509 = 21; (l_509 <= (-28)); l_509 = safe_sub_func_int16_t_s_s(l_509, 8))
        {
            unsigned l_519 = 0xA1302F32L;
            (*g_70) = (void*)0;
            (*g_505) = (void*)0;
            l_519 = (l_402 | 0x72L);
        }
    }
    g_438 = g_438;
    if ((((*l_380) > l_521) <= ((safe_add_func_uint32_t_u_u(((*l_537) = ((!251UL) || (0x3CL || (safe_add_func_int8_t_s_s((func_35(((*l_528) = l_526)) || ((*l_380) , ((*l_528) = (*g_403)))), (safe_rshift_func_uint16_t_u_u((((l_536 = (((safe_mod_func_uint32_t_u_u(((((safe_unary_minus_func_uint32_t_u(((!p_24) < (*l_380)))) || 1UL) , (*g_160)) , l_534), (*l_380))) < 0x2548L) & l_535)) ^ (*l_380)) ^ p_24), 11))))))), p_24)) && p_25)))
    {
        (*l_528) = (*g_403);
        (**g_504) = &l_536;
        (*l_528) = (*g_71);
    }
    else
    {
        (**g_504) = &l_383;
        return p_24;
    }
    for (g_272 = (-6); (g_272 > 16); g_272 = safe_add_func_uint16_t_u_u(g_272, 4))
    {
        const unsigned char l_544 = 255UL;
        struct S0 ***l_549 = &l_423;
        int l_554 = 1L;
        unsigned l_586 = 1UL;
        int *l_625 = &g_5;
        int l_639 = 0xE0F970F9L;
        unsigned l_652 = 8UL;
        char *l_663 = &g_152;
        short **l_672 = &l_671;
        const unsigned l_674 = 4294967289UL;
        unsigned char l_738 = 1UL;
        int *l_747 = &g_624;
        unsigned short l_796 = 5UL;
        short **** const l_813 = &g_801;
    }
    return p_24;
}







static unsigned func_26(struct S0 p_27, struct S0 p_28, unsigned p_29, const char p_30, char p_31)
{
    int l_102 = 0x61B67BCFL;
    char ** const *l_110 = &g_81;
    int *l_124 = &g_80;
    struct S0 * const l_163 = &g_161;
    int l_197 = 0xB88A4E7FL;
    int l_242 = 0x8326687BL;
    for (p_28.f4 = 0; (p_28.f4 > 2); p_28.f4 = safe_add_func_int8_t_s_s(p_28.f4, 6))
    {
        char l_101 = 1L;
        int *l_112 = &l_102;
        struct S0 *l_118 = (void*)0;
        char ** const l_219 = &g_82;
        if ((p_28.f6 > l_101))
        {
            int * const *l_125 = &l_112;
            const int * const l_133 = (void*)0;
            char ***l_170 = (void*)0;
            char ****l_169 = &l_170;
            int *l_179 = &g_38;
            unsigned char * const l_182 = &g_178;
            char *l_198 = &g_161.f9;
            if (((*g_71) = ((g_38 , func_35(l_102)) == (safe_mod_func_int8_t_s_s(p_27.f3, 0xF7L)))))
            {
                int l_109 = 0xE33383FDL;
                char ** const **l_111 = &l_110;
                unsigned short *l_115 = &g_75;
                int *l_117 = &l_102;
                int * const **l_126 = (void*)0;
                int * const **l_127 = &l_125;
                int **l_128 = &g_71;
                struct S0 * const *l_157 = (void*)0;
                char ***l_168 = &g_81;
                char ****l_167 = &l_168;
                unsigned l_176 = 1UL;
                if ((((safe_mod_func_int8_t_s_s((l_109 | (((*l_111) = l_110) == (void*)0)), ((!l_109) , func_39(l_112, (!((*l_115) = ((p_28.f6 > 0x53EC527EL) < ((safe_div_func_int32_t_s_s(l_109, (*l_112))) | p_27.f4)))), l_112)))) | g_116) < p_27.f4))
                {
                    (*g_70) = l_117;
                }
                else
                {
                    struct S0 **l_119 = &l_118;
                    (*l_119) = l_118;
                }
                if (((safe_add_func_uint16_t_u_u(func_39(l_117, (!(((*l_112) | (safe_add_func_uint16_t_u_u((l_102 == func_39(l_124, (((*l_127) = l_125) == (l_128 = &l_124)), ((safe_add_func_int8_t_s_s((((safe_mod_func_uint32_t_u_u(((0x5F92L == (&p_30 == (***l_111))) && g_80), (*l_124))) <= 1L) < g_48), g_80)) , l_133))), 65529UL))) , g_75)), (*g_70)), g_75)) != 248UL))
                {
                    const unsigned l_144 = 0UL;
                    int **l_145 = &l_117;
                    if (((*l_124) != ((safe_sub_func_int8_t_s_s(1L, p_27.f1)) != (safe_sub_func_uint8_t_u_u(((**l_125) <= (*l_112)), 0xB8L)))))
                    {
                        (*l_128) = (*g_70);
                        if ((*l_112))
                            continue;
                    }
                    else
                    {
                        int *l_138 = &g_38;
                        (*g_70) = l_138;
                    }
                    for (p_27.f4 = 0; (p_27.f4 > 53); p_27.f4 = safe_add_func_int32_t_s_s(p_27.f4, 8))
                    {
                        int * const l_141 = &l_102;
                        int **l_142 = (void*)0;
                        int **l_143 = &l_112;
                        (*l_143) = l_141;
                        (*g_71) = ((((l_144 >= p_30) , g_48) , l_145) == ((safe_add_func_uint32_t_u_u(func_35((*l_117)), (g_80 = p_27.f5))) , (void*)0));
                    }
                }
                else
                {
                    for (p_31 = 19; (p_31 != (-29)); p_31 = safe_sub_func_uint8_t_u_u(p_31, 5))
                    {
                        char l_150 = 0xD5L;
                        (*g_70) = ((*l_128) = (p_28.f8 , ((**g_70) , (*l_128))));
                        return l_150;
                    }
                }
                if (p_27.f1)
                {
                    short l_151 = 0L;
                    if ((1UL | l_151))
                    {
                        struct S0 * const **l_158 = (void*)0;
                        struct S0 * const **l_162 = &l_157;
                        struct S0 **l_164 = &l_118;
                        if (g_152)
                            break;
                        (*l_164) = ((((*l_162) = (g_159 = ((safe_add_func_uint32_t_u_u((*l_112), (**g_70))) , ((safe_div_func_int32_t_s_s(0x1708793EL, ((*l_124) , g_75))) , l_157)))) == (void*)0) , l_163);
                        return g_38;
                    }
                    else
                    {
                        int **l_165 = (void*)0;
                        int **l_166 = &l_117;
                        unsigned char *l_177 = &g_178;
                        (*l_166) = (*l_125);
                        (*l_166) = (void*)0;
                        (*l_124) = (((l_111 != (l_169 = l_167)) || (*l_112)) | (safe_lshift_func_uint8_t_u_u(((**l_125) ^ (((safe_unary_minus_func_uint8_t_u(((*l_177) = ((safe_rshift_func_uint16_t_u_s(((*l_115) = g_161.f1), l_176)) ^ p_27.f7)))) || ((((**g_159) , p_27) , 65528UL) , p_28.f0)) == 0x6EL)), 5)));
                        (*l_124) = p_28.f4;
                    }
                    (*l_124) = p_30;
                }
                else
                {
                    (*g_70) = l_179;
                }
            }
            else
            {
                (*l_179) = p_27.f4;
                (**l_125) = func_35(((*g_71) = 0xF72574CFL));
            }
            if (((((safe_sub_func_uint16_t_u_u(((((0x62L | (l_182 == (void*)0)) >= (((*g_82) == ((*l_198) = (safe_lshift_func_int8_t_s_u((g_161.f0 & (((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(0x821DL, (safe_add_func_int16_t_s_s(func_35(((*l_179) = (safe_lshift_func_uint8_t_u_u(247UL, 3)))), (safe_sub_func_uint16_t_u_u(0x04EEL, p_27.f3)))))), 0)), (-8L))) , l_197) , p_30)), p_30)))) , (*l_179))) < 9L) , g_161.f8), (*l_112))) || p_27.f7) && (-10L)) , 0x2968D202L))
            {
                (*l_112) = 0x11891900L;
            }
            else
            {
                (*g_70) = (*g_70);
            }
            (*g_70) = &l_102;
            (*g_71) = p_27.f4;
        }
        else
        {
            (*g_70) = (*g_70);
        }
        if ((0xE7164AAAL | (g_80 ^ p_28.f5)))
        {
            const int l_199 = 1L;
            unsigned short *l_204 = &g_116;
            unsigned short * const *l_203 = &l_204;
            if (l_199)
            {
                unsigned short * const **l_201 = (void*)0;
                unsigned short * const **l_202 = &g_200;
                l_203 = ((*l_202) = g_200);
                (*g_70) = (*g_70);
                (**g_70) = (*l_124);
            }
            else
            {
                unsigned l_207 = 0xA8B32BEEL;
                short *l_216 = &g_161.f6;
                for (g_161.f6 = (-13); (g_161.f6 != 11); ++g_161.f6)
                {
                    l_207 = (**g_70);
                }
                (*l_124) = (safe_sub_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((func_39((*g_70), p_27.f5, &l_199) , ((p_31 | (safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(0xB7L, (l_199 , (*l_124)))), (((*l_216) = 0x2BCBL) > (*l_112))))) , p_30)), 14)) , (*g_82)), (-6L)));
            }
        }
        else
        {
            unsigned char *l_218 = &g_178;
            (*l_112) = func_39((*g_70), (safe_unary_minus_func_int8_t_s((g_161.f4 < ((*l_218) = 0x5CL)))), l_112);
        }
        (*l_124) = (l_219 == (void*)0);
    }
    for (g_161.f3 = (-10); (g_161.f3 >= 56); ++g_161.f3)
    {
        int *l_222 = &l_102;
        unsigned char *l_224 = &g_178;
        (*g_70) = l_222;
        if ((*l_222))
        {
            unsigned char *l_223 = (void*)0;
            (*g_71) = (l_223 == l_224);
            (*g_70) = l_222;
            (*g_70) = (*g_70);
        }
        else
        {
            (*g_70) = (void*)0;
            (*l_222) = (*l_222);
            if ((*l_222))
                continue;
            if (p_27.f3)
                continue;
        }
    }
    if ((safe_div_func_uint16_t_u_u((!((safe_rshift_func_uint16_t_u_u((((func_35(p_27.f0) || g_80) , (safe_add_func_uint16_t_u_u(1UL, (*l_124)))) , ((*l_124) , (safe_add_func_uint32_t_u_u(0x61E312FFL, ((((***l_110) = (safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((((func_39((*g_70), (*l_124), &l_102) >= p_28.f8) , 0xC9B2812DL) , (**g_81)), (**g_81))), 4))) >= 0x7AL) , p_28.f3))))), p_28.f5)) && (*l_124))), 0xE78BL)))
    {
        int *l_241 = (void*)0;
        unsigned short *l_243 = &g_161.f1;
        int l_254 = 0x3036B4E7L;
        unsigned short **l_255 = &l_243;
        unsigned char *l_305 = (void*)0;
        struct S0 * const l_309 = (void*)0;
        int l_310 = 0xF03E5169L;
        if ((safe_mod_func_int8_t_s_s(((((*l_124) = (safe_mod_func_int8_t_s_s((g_161.f2 != func_39(l_241, ((g_200 != ((*l_124) , g_200)) , ((*l_243) = l_242)), (((g_178 , ((p_29 == ((safe_rshift_func_int16_t_s_u(0x1825L, p_28.f9)) <= p_28.f6)) <= 0xB6L)) == p_27.f7) , (void*)0))), p_27.f7))) >= p_27.f6) , (**g_81)), p_27.f4)))
        {
            int l_250 = 0x08245ED7L;
            const int *l_252 = (void*)0;
            const int **l_251 = &l_252;
            unsigned char *l_253 = &g_178;
            l_254 = ((safe_mul_func_int32_t_s_s(1L, (g_161.f5 > (((*l_253) = (((*l_124) = func_35((((*l_124) = l_250) , (g_161.f9 == (p_27.f2 < (p_28 , p_28.f0)))))) < 0x43L)) && p_27.f2)))) <= g_152);
            (*l_124) = (l_255 == (void*)0);
        }
        else
        {
            unsigned char *l_256 = &g_178;
            (*l_124) = g_116;
            (*l_124) = ((((*l_256) = func_39(&l_102, ((*l_124) != p_27.f1), &l_254)) == 4L) , (*l_124));
        }
        for (p_31 = (-11); (p_31 >= (-28)); p_31 = safe_sub_func_int32_t_s_s(p_31, 1))
        {
            char ****l_292 = &g_291;
            int l_308 = 0xFCA21202L;
            if ((func_39((*g_70), p_28.f6, &l_242) >= 65527UL))
            {
                (*g_70) = &l_242;
                if ((**g_70))
                    continue;
            }
            else
            {
                unsigned short *l_267 = &g_75;
                short *l_268 = (void*)0;
                short *l_269 = &g_161.f6;
                short *l_270 = (void*)0;
                short *l_271 = &g_272;
                int l_275 = 0x97B437FCL;
                if ((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((**l_255) = 0xE561L), ((p_27.f4 == (((*l_271) = ((*l_269) = (((((safe_rshift_func_int16_t_s_u((0x1FL > (safe_mod_func_int8_t_s_s(p_28.f0, p_28.f5))), g_152)) & g_48) & ((*l_267) = p_27.f7)) , (void*)0) != (void*)0))) >= p_28.f5)) , g_161.f8))), p_27.f7)))
                {
                    (*l_124) = 0xD44CC3E1L;
                }
                else
                {
                    unsigned *l_273 = &g_274;
                    char *****l_293 = &l_292;
                    int *l_300 = &l_254;
                    int *l_301 = (void*)0;
                    int *l_302 = &l_242;
                    if ((0x9D20FDB9L == (p_28 , ((safe_div_func_int32_t_s_s(p_27.f8, p_28.f2)) || g_161.f8))))
                    {
                        int **l_278 = &l_241;
                        unsigned short *l_287 = &g_116;
                        (*l_278) = ((*g_70) = &l_242);
                        (*l_278) = &l_254;
                        (*l_241) = ((safe_lshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((((safe_add_func_uint8_t_u_u(5UL, (p_27.f7 & (func_35((*l_124)) < ((*l_267) = ((*l_243) = p_27.f9)))))) <= 0x7E730544L) > (l_287 != (g_161.f9 , &g_116))), (**l_278))), 0)) , (-10L));
                    }
                    else
                    {
                        (*l_124) = (p_27.f5 | func_39((g_161.f6 , (void*)0), g_161.f9, (*g_70)));
                    }
                    g_80 = ((safe_add_func_uint16_t_u_u(((*l_124) >= 0x5469L), ((((p_27 , g_290) == ((*l_293) = l_292)) == (*l_124)) >= (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(g_161.f4, ((*l_302) = ((-4L) != ((safe_mod_func_int32_t_s_s(((*l_300) = p_29), 0x8A3AE364L)) & 0x31719309L))))), g_116))))) <= p_31);
                }
            }
            (*l_124) = (safe_add_func_uint32_t_u_u((l_305 == (void*)0), (((safe_mod_func_uint8_t_u_u((g_161.f8 & (((g_274 , (((((l_308 == ((**g_81) < 0x76L)) == ((-4L) || l_308)) > g_161.f0) , g_38) != l_254)) , (*g_159)) == l_309)), p_28.f1)) <= l_310) , (*l_124))));
        }
        (*g_70) = (*g_70);
    }
    else
    {
        for (g_161.f0 = (-12); (g_161.f0 == (-16)); g_161.f0--)
        {
            int *l_313 = &g_80;
            (*l_124) = (g_161.f5 ^ (*l_124));
            (*g_70) = l_313;
        }
    }
    if (p_27.f3)
    {
        int *l_314 = &g_80;
        int l_315 = 0xF46207BFL;
        short l_318 = 0x8012L;
        l_314 = (*g_70);
        (*l_124) = p_27.f6;
        if (((func_35((((*l_124) = 1L) > (g_272 < (l_315 = 0xE0927C5CL)))) , l_315) ^ (!(safe_rshift_func_int16_t_s_u(0x9FE9L, 6)))))
        {
            return l_318;
        }
        else
        {
            (*g_70) = ((*l_124) , (*g_70));
        }
        (*l_124) = (*l_124);
    }
    else
    {
        char l_325 = 0x54L;
        unsigned char *l_338 = &g_178;
        unsigned *l_339 = &g_274;
        int l_366 = 0xE45B5AEDL;
        (*l_124) = (safe_div_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(l_325, (p_27.f7 | (!(safe_add_func_int16_t_s_s(p_28.f5, p_28.f1)))))), ((*l_339) = (l_325 , (safe_mod_func_int16_t_s_s((p_28.f3 , ((safe_div_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(((l_325 , ((*l_338) = (!(((*l_124) , (((p_27.f2 <= l_325) == 0UL) || 0x82EBL)) , (*l_124))))) | l_325), 0x5DCAL)), (*l_124))) & 1UL)), 0x7105L)))))), p_28.f1));
        for (p_28.f6 = 0; (p_28.f6 != (-3)); p_28.f6--)
        {
            unsigned char *l_348 = &g_349;
            int l_360 = 0x80CEB50AL;
            short *l_361 = (void*)0;
            short *l_362 = (void*)0;
            short *l_363 = &g_161.f6;
            short *l_364 = &g_272;
            unsigned short *l_365 = &g_161.f1;
            int *l_367 = &l_242;
            unsigned *l_370 = &g_371;
            int l_374 = 0x60723C2DL;
            (*l_367) = ((*l_124) = (l_366 = (safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((func_35(func_35(((g_161.f6 || ((safe_rshift_func_uint16_t_u_s((((void*)0 == &p_27) == ((((*l_338) = 3UL) == (((p_27.f5 != ((*l_348) = g_48)) <= (+((((*l_365) = (safe_rshift_func_uint8_t_u_s(g_161.f1, (safe_div_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(l_325, ((*l_364) = ((*l_363) = (((safe_lshift_func_uint8_t_u_s((((func_35((safe_sub_func_uint32_t_u_u(l_360, 0xC2DB644AL))) | (*g_82)) , (****g_290)) | 0xFEL), 2)) == p_28.f3) == p_28.f2))))), 0x1D85L))))) , (**g_290)) != (*l_110)))) <= g_161.f0)) , 0L)), g_80)) , l_360)) <= (****g_290)))) , g_161.f0) , 0x2C6AL), p_28.f7)), 65535UL))));
            if ((*l_124))
                continue;
            (*g_70) = (((*l_370) = (((*l_339) = ((p_28.f9 == g_152) | 4294967289UL)) || (safe_rshift_func_int16_t_s_u(g_178, 2)))) , ((safe_sub_func_uint32_t_u_u(p_28.f3, ((***g_291) && (p_27.f5 , ((func_35((l_374 | (safe_sub_func_int16_t_s_s(g_371, 0xEA65L)))) < p_31) , g_48))))) , &l_242));
        }
        (*g_70) = &l_242;
    }
    return g_38;
}







static struct S0 func_32(char p_33, unsigned short p_34)
{
    int *l_50 = &g_38;
    int ** const l_49 = &l_50;
    int **l_52 = (void*)0;
    int ***l_51 = &l_52;
    unsigned short *l_74 = &g_75;
    unsigned char l_76 = 255UL;
    unsigned l_77 = 6UL;
    const short l_78 = 0x11DCL;
    int *l_79 = &g_80;
    char ***l_83 = &g_81;
    unsigned char l_88 = 0x6BL;
    struct S0 l_95 = {0x34B743E6L,65535UL,-2L,0UL,4294967288UL,0x7064EC29L,0L,0x55A1L,0xA538DB7DL,-8L};
    unsigned char l_96 = 3UL;
    (*l_83) = ((func_35(((*l_79) = ((l_49 != ((*l_51) = &l_50)) ^ (safe_rshift_func_uint16_t_u_u(((((*g_71) = ((~func_39((((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s((((*l_49) == &g_38) >= (safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u(((*l_74) = (((safe_unary_minus_func_uint8_t_u((g_70 != (void*)0))) == (**l_49)) == ((p_34 == (safe_mod_func_int32_t_s_s(((0xC497A14FL == 1UL) || 5UL), 2UL))) <= (**l_49)))), 9)) , 4294967295UL) , g_5), (**l_49))), (*g_71))), (*l_50)))), g_38)), 11)), 0L)) == l_76) , (*g_70)), l_77, (*l_49))) ^ l_78)) | g_48) >= p_33), 6))))) || (**l_52)) , g_81);
    (*g_71) = (+(func_35(((***l_51) = func_39((*g_70), ((*l_74) = ((safe_add_func_uint16_t_u_u(p_33, (safe_sub_func_uint32_t_u_u(l_88, (*l_79))))) >= ((*l_50) = ((((*l_52) == ((g_80 | func_35(((safe_mul_func_int16_t_s_s(0xF25DL, ((safe_mod_func_uint16_t_u_u(g_75, g_75)) != 255UL))) == (*g_82)))) , (*g_70))) , (*l_79)) != (-1L))))), (**l_51)))) || p_33));
    (*l_79) = (safe_lshift_func_int16_t_s_s(g_48, 9));
    (*g_70) = ((l_95 , p_33) , (l_96 , (**l_51)));
    return l_95;
}







static unsigned char func_35(int p_36)
{
    int *l_37 = &g_38;
    (*l_37) = p_36;
    return p_36;
}







static const unsigned short func_39(int * p_40, unsigned short p_41, const int * const p_42)
{
    struct S0 l_44 = {0xFFF16CE6L,0xC5BCL,-1L,0x85B8EEB3L,0x3A67D625L,0x2A3DA798L,0x5C87L,0x1771L,0x6CF3632EL,0xBAL};
    int *l_45 = &g_38;
    int **l_46 = &l_45;
    (*l_46) = (l_44 , l_45);
    (*l_45) = (*l_45);
    return g_38;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_161.f0, "g_161.f0", print_hash_value);
    transparent_crc(g_161.f1, "g_161.f1", print_hash_value);
    transparent_crc(g_161.f2, "g_161.f2", print_hash_value);
    transparent_crc(g_161.f3, "g_161.f3", print_hash_value);
    transparent_crc(g_161.f4, "g_161.f4", print_hash_value);
    transparent_crc(g_161.f5, "g_161.f5", print_hash_value);
    transparent_crc(g_161.f6, "g_161.f6", print_hash_value);
    transparent_crc(g_161.f7, "g_161.f7", print_hash_value);
    transparent_crc(g_161.f8, "g_161.f8", print_hash_value);
    transparent_crc(g_161.f9, "g_161.f9", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_495, "g_495", print_hash_value);
    transparent_crc(g_611, "g_611", print_hash_value);
    transparent_crc(g_615, "g_615", print_hash_value);
    transparent_crc(g_624, "g_624", print_hash_value);
    transparent_crc(g_775, "g_775", print_hash_value);
    transparent_crc(g_974, "g_974", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
