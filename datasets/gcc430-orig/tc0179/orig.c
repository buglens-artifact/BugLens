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
};

struct S1 {
   unsigned f0;
   const short f1;
   struct S0 f2;
   const char f3;
   int f4;
   struct S0 f5;
};

union U2 {
   const unsigned char f0;
   unsigned char f1;
   const struct S0 f2;
   unsigned f3;
};

union U3 {
   const int f0;
   struct S0 f1;
   char f2;
};

union U4 {
   unsigned f0;
   struct S1 f1;
};


static unsigned g_8 = 0UL;
static const union U3 g_49 = {0x395B915FL};
static int g_76 = 0L;
static struct S1 g_79 = {0xE68AC39FL,0L,{-1L,0x8097L},0xF9L,4L,{0x53869515L,0x8451L}};
static union U4 g_96 = {0x3A677434L};
static union U2 g_160 = {0x2BL};
static struct S0 *g_162 = &g_79.f2;
static struct S1 g_169 = {0x6A9E613BL,0L,{0xC1F7DF86L,0x15D6L},6L,4L,{0L,0x0AEDL}};
static struct S1 *g_168 = &g_169;
static unsigned g_229 = 1UL;
static union U3 g_231 = {0x1289C804L};
static union U3 g_233 = {0xEDCDB787L};
static union U3 *g_232 = &g_233;
static int *g_263 = &g_79.f4;
static struct S1 g_312 = {0x45B20288L,1L,{1L,9UL},0x81L,-10L,{1L,0xA8CCL}};
static union U3 g_321 = {0xCCBAE7F3L};
static union U4 *g_333 = &g_96;
static union U4 **g_332 = &g_333;
static union U2 **g_394 = (void*)0;
static int * const *g_429 = &g_263;
static unsigned g_437 = 0xD43E7835L;
static union U2 g_576 = {0x8DL};
static struct S0 **g_588 = &g_162;
static struct S0 ***g_587 = &g_588;
static struct S1 g_600 = {0x0B56DA2CL,0xD364L,{0xF2DE5A33L,5UL},0x6DL,1L,{0xD5351EE5L,65531UL}};
static const struct S1 *g_599 = &g_600;
static union U3 **g_715 = &g_232;
static union U3 ***g_714 = &g_715;
static int g_770 = (-1L);
static unsigned short g_806 = 0x93B5L;
static int *g_839 = &g_600.f4;
static union U4 g_925 = {3UL};
static union U4 *g_924 = &g_925;



static int func_1(void);
static union U3 func_2(unsigned p_3, int p_4, char p_5);
static unsigned short func_13(const unsigned p_14);
static const unsigned func_15(struct S0 p_16, unsigned p_17, const struct S1 p_18, int p_19, unsigned char p_20);
static struct S0 func_21(struct S0 p_22, short p_23, unsigned char p_24, int p_25);
static struct S0 func_26(const unsigned p_27, unsigned p_28, struct S0 p_29, union U4 p_30);
static int func_35(int p_36, char p_37);
static short func_44(const union U3 p_45, unsigned char p_46, int p_47, int p_48);
static unsigned func_54(unsigned p_55, char p_56, int p_57, unsigned short p_58);
static int func_68(struct S0 p_69, unsigned char p_70, unsigned char p_71);
static int func_1(void)
{
    struct S1 l_31 = {4294967294UL,-3L,{0L,0xE7F1L},0xBCL,0x59F89F2EL,{0x72305ABAL,65535UL}};
    struct S0 l_32 = {0x2783DE76L,1UL};
    union U4 l_33 = {0xAC8E4C12L};
    unsigned short l_822 = 0UL;
    struct S0 l_836 = {0x9AAA38EEL,0x2BB7L};
    unsigned char l_852 = 1UL;
    union U4 l_859 = {4294967295UL};
    int *l_892 = &g_770;
    unsigned short l_902 = 0x2452L;
    union U3 l_923 = {0x76D32132L};
    union U2 l_928 = {0x52L};
    union U3 **l_941 = &g_232;
    int **l_950 = &g_839;
    if ((func_2((safe_mod_func_uint16_t_u_u(0UL, g_8)), ((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(func_13(func_15(func_21(func_26((l_31 , g_8), l_31.f2.f1, l_32, l_33), g_231.f2, g_233.f0, g_8), g_312.f1, l_31, l_33.f0, l_31.f2.f0)), (-1L))), 7)) || g_79.f5.f1), g_312.f2.f1) , l_31.f2.f0))
    {
        int *l_689 = &g_169.f5.f0;
        int **l_690 = &l_689;
        struct S0 l_691 = {1L,6UL};
        (*l_690) = l_689;
        l_691 = l_31.f2;
    }
    else
    {
        int *l_692 = &g_79.f4;
        int **l_693 = &l_692;
        char l_694 = 0xC3L;
        const union U4 l_697 = {0x7B6D14BAL};
        struct S1 l_734 = {4294967292UL,-1L,{0x35FC95CDL,0x6355L},0x12L,1L,{0xBECC1E63L,0xE297L}};
        struct S1 *l_746 = &g_600;
        const struct S0 * const l_749 = &g_312.f5;
        unsigned char l_759 = 0xE9L;
        struct S1 l_776 = {4294967295UL,0x494DL,{0xDDD404F5L,9UL},0xC0L,0xF8A7B10BL,{0x68DCEAA9L,65535UL}};
        struct S0 l_781 = {3L,7UL};
        int l_835 = (-3L);
        unsigned l_860 = 0xB7C84231L;
        union U2 l_879 = {1UL};
        struct S0 l_880 = {0x64366C10L,65528UL};
        unsigned l_926 = 0x1CF230F6L;
        union U4 **l_932 = &g_333;
        (*l_693) = l_692;
        if ((g_169.f4 == l_694))
        {
            int l_695 = 0xB21160A9L;
            unsigned l_713 = 4294967292UL;
            struct S0 **l_723 = &g_162;
            struct S0 l_787 = {1L,0x6104L};
            (**l_693) = 1L;
            if ((l_695 < (*l_692)))
            {
                int *l_696 = &g_76;
                union U3 **l_698 = &g_232;
                (*l_693) = l_696;
                (*l_693) = (l_697 , l_696);
                (*l_698) = &g_233;
                (*l_693) = l_696;
            }
            else
            {
                short l_706 = 0x1E61L;
                int l_728 = (-8L);
                unsigned short l_737 = 0UL;
                struct S1 **l_758 = &l_746;
                union U2 l_789 = {0xEAL};
                union U4 l_791 = {0x1234E6ECL};
                if (l_695)
                {
                    unsigned short l_699 = 0xDF17L;
                    int l_716 = 0x284E647EL;
                    if (l_699)
                    {
                        (**l_693) = (g_79.f2.f0 >= (safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s((+l_699), func_13((safe_lshift_func_int16_t_s_s((&g_231 == &g_233), 8))))), (**l_693))));
                        (**l_693) = (l_706 == (0L & 255UL));
                        (**l_693) = (*g_263);
                        (*g_332) = (*g_332);
                    }
                    else
                    {
                        (**l_693) = (safe_sub_func_int16_t_s_s(1L, (func_13(l_31.f1) , ((safe_lshift_func_uint8_t_u_s(l_706, ((*g_168) , (safe_sub_func_uint32_t_u_u(g_160.f0, (func_13((((func_44((*g_232), (((0x7540L >= (g_76 , g_160.f1)) < l_699) , 0xA8L), (**g_429), (**g_429)) <= 0xC0022666L) >= l_713) || g_169.f5.f0)) < 0x3151L)))))) && l_699))));
                    }
                    (*g_263) = ((-1L) & (l_716 >= (safe_mod_func_uint16_t_u_u(((0x3CAAL && ((safe_rshift_func_int16_t_s_u((**l_693), l_706)) >= g_169.f5.f1)) < (*g_263)), (**l_693)))));
                    (*g_263) = (*g_263);
                    for (g_96.f1.f2.f1 = 18; (g_96.f1.f2.f1 > 40); ++g_96.f1.f2.f1)
                    {
                        struct S0 l_729 = {0x3206B796L,0xEC2EL};
                        struct S0 *l_730 = (void*)0;
                        struct S0 *l_731 = &g_600.f2;
                        (*l_731) = ((safe_mod_func_int16_t_s_s(((*g_168) , g_79.f5.f0), l_728)) , l_729);
                    }
                }
                else
                {
                    (**g_714) = ((&g_263 == (void*)0) , (**g_714));
                    (*l_692) = ((safe_lshift_func_int16_t_s_s(func_13((l_734 , func_44((**g_715), (0UL < (l_31.f5.f1 == l_33.f0)), func_13(g_600.f0), l_695))), 11)) | (*l_692));
                    if ((safe_mul_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(g_49.f0, g_79.f5.f1)) >= (-1L)), (safe_lshift_func_int8_t_s_u(((((0L == g_437) || g_312.f1) <= (safe_sub_func_uint32_t_u_u(((l_32.f1 , (+((**l_693) , 0x3BC19BBEL))) & g_600.f4), l_31.f2.f0))) <= l_737), g_79.f5.f1)))))
                    {
                        struct S1 **l_747 = (void*)0;
                        struct S1 **l_748 = &l_746;
                        (*l_748) = l_746;
                        (*l_692) = (*g_263);
                        (**l_693) = ((*l_692) , (**g_429));
                        (*l_693) = (*l_693);
                    }
                    else
                    {
                        const struct S0 *l_751 = &l_734.f2;
                        const struct S0 **l_750 = &l_751;
                        (*l_750) = l_749;
                        return g_600.f5.f0;
                    }
                }
                if ((safe_mod_func_uint16_t_u_u((l_759 & (**g_429)), g_312.f4)))
                {
                    union U4 l_775 = {0x6136CC26L};
                    int *l_780 = &g_312.f2.f0;
                    struct S0 l_785 = {0L,4UL};
                    union U2 l_786 = {0x19L};
                    union U4 l_788 = {4294967294UL};
                    l_728 = (((safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(((safe_mod_func_int32_t_s_s(l_31.f0, (safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(g_770, 5)) | (g_79.f5.f0 > l_31.f2.f1)), g_600.f4)))) <= g_312.f2.f1), g_79.f0)), 6)) == 4294967289UL) & g_312.f2.f0);
                    for (g_312.f4 = (-8); (g_312.f4 <= (-12)); --g_312.f4)
                    {
                        int **l_779 = (void*)0;
                        struct S0 *l_782 = &g_96.f1.f2;
                        l_780 = (*g_429);
                        (*l_782) = l_781;
                    }
                    (*g_263) = 0xE4C57AE4L;
                    (*l_692) = ((g_312.f3 & 0x72L) <= (g_79.f4 >= g_160.f0));
                }
                else
                {
                    struct S0 l_790 = {0x071C59E2L,65530UL};
                    (**l_693) = (l_789 , func_68(l_790, g_169.f4, (g_600.f2.f0 , (((l_695 ^ (l_791 , l_706)) > l_789.f1) >= ((safe_sub_func_int32_t_s_s((**g_429), g_79.f3)) && (*g_263))))));
                }
                (*l_692) = l_31.f5.f0;
                (**g_714) = (**g_714);
            }
        }
        else
        {
            const unsigned char l_794 = 1UL;
            struct S0 l_795 = {-5L,65533UL};
            struct S0 *l_796 = &l_734.f2;
            union U3 l_803 = {2L};
            int *l_807 = (void*)0;
            (*l_796) = l_795;
            if (((l_31.f0 < g_312.f2.f0) && ((safe_rshift_func_uint8_t_u_s((**l_693), (safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((l_31.f3 > g_312.f0), 15)), (l_803 , (safe_lshift_func_int16_t_s_s(g_76, (**l_693)))))))) && (((**g_332) , l_32.f0) != 255UL))))
            {
                struct S0 l_811 = {1L,65534UL};
                union U3 *l_814 = (void*)0;
                int *l_823 = &l_781.f0;
                if (g_806)
                {
                    (*l_693) = l_807;
                }
                else
                {
                    for (g_79.f4 = 0; (g_79.f4 > 9); g_79.f4 = safe_add_func_int32_t_s_s(g_79.f4, 2))
                    {
                        unsigned l_810 = 0x3445FC5AL;
                        if (l_810)
                            break;
                        (*l_796) = l_811;
                        if (l_811.f0)
                            continue;
                    }
                    for (l_776.f0 = 25; (l_776.f0 > 10); l_776.f0 = safe_sub_func_uint16_t_u_u(l_776.f0, 3))
                    {
                        (**g_587) = (*g_588);
                        (*l_693) = &g_770;
                        (**l_693) = ((l_811.f1 < (l_814 == (void*)0)) ^ l_33.f0);
                    }
                }
                if (((safe_rshift_func_uint16_t_u_u(((((**g_715) , g_76) || g_229) == g_79.f2.f0), l_811.f1)) <= l_31.f1))
                {
                    char l_834 = 0x74L;
                    (*l_693) = l_823;
                    if ((safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((l_836 , g_312.f3) > 0UL), g_576.f1)), (-4L))), g_8)))
                    {
                        (*l_693) = &g_76;
                        (*g_332) = (void*)0;
                    }
                    else
                    {
                        struct S1 **l_837 = &l_746;
                        int *l_838 = &g_169.f5.f0;
                        (*l_837) = &g_79;
                        (*l_692) = (&g_76 != l_838);
                        (*l_693) = g_839;
                        (*g_839) = (safe_unary_minus_func_uint32_t_u(0x27F23A64L));
                    }
                }
                else
                {
                    (*g_839) = (-10L);
                    g_839 = l_823;
                }
            }
            else
            {
                union U2 *l_842 = &g_576;
                union U2 **l_841 = &l_842;
                (*l_841) = &g_160;
            }
            for (l_734.f2.f0 = (-10); (l_734.f2.f0 >= 10); l_734.f2.f0++)
            {
                char l_851 = (-1L);
                (*g_839) = ((safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(((void*)0 != (*g_332)), l_31.f5.f1)) <= l_851), l_795.f1)), 0)) == l_852);
                (*g_715) = &l_803;
            }
            l_776.f4 = l_836.f1;
        }
        if ((safe_lshift_func_uint16_t_u_s((l_836.f0 == ((((*g_168) , (g_312.f4 && g_169.f3)) & g_79.f5.f0) , (g_49.f0 || ((((((safe_sub_func_int8_t_s_s(((((((safe_div_func_int32_t_s_s(0x07624869L, (g_312.f0 , ((l_859 , g_312.f2.f0) , 0x7ABB8869L)))) , g_312.f4) > g_79.f3) > l_860) , (*g_839)) | l_31.f1), l_694)) , (*g_587)) != (void*)0) || 5UL) > g_312.f3) <= g_312.f4)))), 5)))
        {
            unsigned char l_863 = 0xDDL;
            unsigned char l_881 = 0x61L;
            int * const l_887 = &g_312.f2.f0;
            struct S0 l_890 = {0x598A0053L,0UL};
            union U4 l_897 = {1UL};
            short l_905 = (-9L);
            struct S1 **l_913 = &g_168;
            for (g_79.f2.f0 = 0; (g_79.f2.f0 != 26); g_79.f2.f0 = safe_add_func_int16_t_s_s(g_79.f2.f0, 9))
            {
                union U2 l_868 = {1UL};
                l_859.f1.f4 = (*g_839);
                if (l_863)
                    continue;
                if (l_859.f0)
                    break;
                (*g_839) = (safe_rshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(g_312.f4, (l_868 , (safe_lshift_func_uint16_t_u_s(((((safe_mod_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(0x8B92L, ((void*)0 == &g_588))), (safe_lshift_func_int16_t_s_s(((l_879 , g_79.f0) & func_68(l_880, l_863, l_863)), l_868.f1)))) ^ g_600.f3), 4294967295UL)) , (void*)0) != (void*)0) < 0x9099F748L), l_868.f1))))) != l_881), 11));
            }
            if (l_881)
            {
                unsigned char l_886 = 0x15L;
                struct S0 l_911 = {-1L,0xFD93L};
                union U2 l_912 = {0x15L};
                for (g_96.f1.f0 = 7; (g_96.f1.f0 < 19); g_96.f1.f0++)
                {
                    union U4 ***l_889 = &g_332;
                    struct S0 *l_891 = &l_776.f5;
                    if ((safe_mod_func_uint32_t_u_u(l_886, 0x0ADAE480L)))
                    {
                        if ((*g_839))
                            break;
                    }
                    else
                    {
                        int **l_888 = &l_692;
                        if ((*g_839))
                            break;
                        l_31.f2 = l_31.f5;
                        (*l_888) = ((*g_168) , l_887);
                        if ((*g_839))
                            break;
                    }
                    (*l_889) = (void*)0;
                    (*l_891) = l_890;
                }
                (*l_693) = l_892;
                g_263 = l_887;
                if ((safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((l_859 , (l_897 , ((safe_add_func_int32_t_s_s((**g_429), ((g_160.f0 == 3L) <= (safe_sub_func_int8_t_s_s(func_68(g_600.f5, (l_902 ^ ((1L || (safe_mod_func_int8_t_s_s(((void*)0 != &g_160), l_886))) , (*g_263))), g_160.f0), (*l_892)))))) | g_76))), g_312.f2.f0)), l_905)))
                {
                    int **l_908 = (void*)0;
                    int **l_909 = &g_839;
                    for (l_734.f0 = (-1); (l_734.f0 >= 53); l_734.f0++)
                    {
                        (**l_693) = (**g_429);
                    }
                    (*l_909) = (*g_429);
                    (*l_909) = (*l_693);
                    (**g_429) = 0xFEBA263AL;
                }
                else
                {
                    struct S0 l_914 = {0x9C957BBBL,0x7B21L};
                    struct S0 *l_915 = &g_233.f1;
                    (*l_915) = l_914;
                    for (g_96.f1.f5.f1 = 0; (g_96.f1.f5.f1 <= 27); ++g_96.f1.f5.f1)
                    {
                        struct S0 l_918 = {0xD40085C6L,65535UL};
                        l_918 = l_911;
                        (*g_839) = ((safe_div_func_uint8_t_u_u(248UL, l_886)) >= func_68(l_890, (+func_68(l_911, g_600.f2.f0, g_233.f1.f0)), g_79.f5.f1));
                        (*l_913) = &l_776;
                    }
                    for (g_770 = (-8); (g_770 >= (-20)); g_770 = safe_sub_func_int32_t_s_s(g_770, 6))
                    {
                        (*l_887) = (*g_263);
                        if ((*g_263))
                            break;
                    }
                }
            }
            else
            {
                return g_312.f5.f0;
            }
            (*l_913) = (l_923 , (void*)0);
            g_924 = &l_897;
        }
        else
        {
            unsigned char l_927 = 0x94L;
            int l_935 = 2L;
            unsigned short l_942 = 0xCD62L;
            if (l_926)
            {
                union U3 *l_929 = &g_321;
                (*l_892) = l_927;
                (*l_693) = (*l_693);
                (*l_693) = (g_160 , ((l_928 , (*g_168)) , (*l_693)));
                (**g_714) = l_929;
            }
            else
            {
                int l_933 = 0x8A22796BL;
                struct S0 l_937 = {-1L,65533UL};
                int *l_949 = &g_169.f2.f0;
                for (g_925.f1.f2.f1 = 0; (g_925.f1.f2.f1 > 7); g_925.f1.f2.f1++)
                {
                    union U4 l_934 = {0xBB1FF876L};
                    struct S0 l_936 = {0x302F8A92L,65526UL};
                    int *l_938 = &g_312.f5.f0;
                    union U3 **l_940 = &g_232;
                    (*l_892) = l_927;
                    if (((void*)0 != l_932))
                    {
                        if (l_933)
                            break;
                    }
                    else
                    {
                        (*g_715) = (void*)0;
                        l_935 = (((*l_892) , l_934) , (*g_839));
                    }
                    if (((l_936 , &l_880) == (g_925.f0 , (g_160.f0 , &l_781))))
                    {
                        g_96.f1.f2 = l_937;
                        if ((*l_892))
                            break;
                    }
                    else
                    {
                        unsigned l_939 = 6UL;
                        (*l_693) = (l_859 , l_938);
                        (*l_892) = l_939;
                        if ((*l_892))
                            continue;
                        if ((*g_839))
                            continue;
                    }
                    (*g_839) = ((l_940 != l_941) , l_942);
                }
                for (g_925.f0 = 0; (g_925.f0 != 38); g_925.f0 = safe_add_func_uint8_t_u_u(g_925.f0, 6))
                {
                    union U3 *l_945 = (void*)0;
                    int l_948 = 0x0958EB19L;
                    (*g_715) = l_945;
                    (*g_588) = &l_32;
                    for (g_600.f5.f1 = 0; (g_600.f5.f1 == 47); ++g_600.f5.f1)
                    {
                        return l_948;
                    }
                    g_839 = (void*)0;
                }
                l_949 = (*l_693);
            }
            return (*l_892);
        }
    }
    (*l_950) = l_892;
    return (**l_950);
}







static union U3 func_2(unsigned p_3, int p_4, char p_5)
{
    unsigned l_515 = 1UL;
    union U2 *l_516 = (void*)0;
    const union U3 *l_518 = (void*)0;
    unsigned char l_527 = 255UL;
    int **l_530 = &g_263;
    union U4 l_537 = {4294967293UL};
    const struct S0 *l_539 = &g_79.f5;
    const struct S0 **l_538 = &l_539;
    const union U3 l_540 = {8L};
    union U2 * const *l_580 = &l_516;
    union U2 * const ** const l_579 = &l_580;
    const struct S1 *l_596 = &g_312;
    union U3 **l_608 = &g_232;
    union U3 ***l_607 = &l_608;
    int l_652 = (-7L);
    struct S0 l_683 = {-1L,0x1D17L};
    short l_688 = 1L;
    for (g_233.f1.f0 = 0; (g_233.f1.f0 >= 25); g_233.f1.f0 = safe_add_func_int32_t_s_s(g_233.f1.f0, 9))
    {
        short l_521 = 1L;
        if (l_515)
        {
            union U2 **l_517 = &l_516;
            const union U3 **l_519 = &l_518;
            (*l_517) = l_516;
            (*l_519) = l_518;
        }
        else
        {
            union U2 **l_520 = &l_516;
            struct S0 l_524 = {0x2ECEE631L,0x34A7L};
            (*l_520) = l_516;
            p_4 = (l_515 , (l_521 ^ ((p_5 && 248UL) == (safe_add_func_uint32_t_u_u(func_68(l_524, g_169.f1, p_5), (!((safe_sub_func_int32_t_s_s(func_13(g_169.f5.f0), l_527)) == 0x8FL)))))));
            (*g_263) = (safe_rshift_func_uint8_t_u_u(((void*)0 != l_520), (p_4 >= l_521)));
        }
    }
    if (((l_530 != l_530) >= ((p_3 >= (~((((safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(g_312.f4, ((**l_530) | (l_537 , (((void*)0 == l_538) <= ((func_44(l_540, p_4, p_5, p_3) || (**g_429)) >= (**l_530))))))), p_3)) == g_79.f1) <= 0L) >= g_79.f2.f0))) , 0x44A9BF5BL)))
    {
        int l_543 = 4L;
        struct S0 l_544 = {-7L,0x8768L};
        union U3 l_556 = {0x7285C46FL};
        union U2 *l_574 = &g_160;
        for (g_96.f1.f2.f0 = (-17); (g_96.f1.f2.f0 == (-15)); g_96.f1.f2.f0++)
        {
            char l_551 = 0xC5L;
            struct S0 l_552 = {-9L,65526UL};
            union U2 l_553 = {0xA9L};
            char l_589 = 0x98L;
            if ((!((*g_263) > ((void*)0 != &g_333))))
            {
                struct S0 l_554 = {1L,6UL};
                unsigned l_555 = 1UL;
                struct S0 *l_577 = &g_321.f1;
                if (((l_543 >= 0UL) > func_68(l_544, (((((((safe_mod_func_int8_t_s_s(((((safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(l_551, func_68(l_552, p_4, (l_553 , func_68(l_554, func_44((*g_232), l_555, l_554.f1, p_3), (**l_530)))))), l_552.f0)) | (*g_263)) , l_556) , p_5), p_4)) , (*g_263)) >= 1UL) , l_544.f1) || 0x0A61A6B9L) || p_5) || p_5), l_556.f0)))
                {
                    char l_564 = 9L;
                    if ((&g_263 != (void*)0))
                    {
                        union U2 **l_557 = &l_516;
                        union U2 ***l_558 = &g_394;
                        union U3 **l_559 = &g_232;
                        (*l_558) = l_557;
                        (*l_557) = (*g_394);
                        (**l_530) = p_4;
                        (*l_559) = &g_233;
                    }
                    else
                    {
                        short l_571 = 0L;
                        g_312.f4 = ((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((l_564 > p_3), (-10L))), (l_516 != ((func_13(((safe_div_func_uint32_t_u_u(l_554.f0, func_44(l_556, g_49.f0, p_5, (safe_mul_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(p_4, (-9L))) && p_4), g_79.f5.f1))))) <= (**l_530))) <= (-4L)) , (void*)0)))) , l_571);
                        return l_556;
                    }
                }
                else
                {
                    (*l_538) = &l_552;
                }
                (*l_530) = (func_13(g_160.f0) , &p_4);
                for (g_312.f5.f0 = 28; (g_312.f5.f0 > 26); --g_312.f5.f0)
                {
                    union U2 *l_575 = &g_576;
                    l_575 = l_574;
                    (**l_530) = l_554.f1;
                }
                (*l_577) = l_544;
            }
            else
            {
                struct S0 l_578 = {0x92D1ED59L,0x8DD1L};
                if ((&g_79 == ((g_8 | (((l_578 , l_579) != (void*)0) || (((func_68(l_578, ((((safe_lshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(func_44((*g_232), (((g_437 && (safe_mul_func_int8_t_s_s(g_79.f5.f1, g_49.f2))) != g_8) , l_578.f1), l_578.f1, l_544.f0), l_543)), 1)) <= l_556.f0) || 5L) <= 7L), g_312.f3) , g_587) == (void*)0) > l_556.f0))) , &g_79)))
                {
                    const int *l_592 = &g_79.f2.f0;
                    const int **l_591 = &l_592;
                    const int ***l_590 = &l_591;
                    (**l_530) = l_589;
                    (*l_590) = (void*)0;
                }
                else
                {
                    int **l_593 = &g_263;
                    const struct S1 **l_597 = (void*)0;
                    const struct S1 **l_598 = (void*)0;
                    union U3 **l_602 = (void*)0;
                    union U3 ***l_601 = &l_602;
                    (*l_593) = (*g_429);
                    for (l_515 = (-18); (l_515 <= 32); l_515++)
                    {
                        if ((*g_263))
                            break;
                        return (*g_232);
                    }
                    g_599 = l_596;
                    (*l_601) = (void*)0;
                }
            }
            for (g_600.f2.f1 = 16; (g_600.f2.f1 != 38); g_600.f2.f1 = safe_add_func_uint32_t_u_u(g_600.f2.f1, 5))
            {
                (*g_263) = (&p_4 == &p_4);
            }
            (*l_530) = &p_4;
        }
        for (g_169.f5.f0 = 0; (g_169.f5.f0 >= 10); g_169.f5.f0 = safe_add_func_int8_t_s_s(g_169.f5.f0, 7))
        {
            return (*g_232);
        }
    }
    else
    {
        union U2 *l_609 = &g_160;
        struct S0 * const l_615 = &g_312.f5;
        union U4 **l_617 = &g_333;
        const int *l_618 = &g_600.f2.f0;
        union U2 *** const l_650 = (void*)0;
        char l_651 = 8L;
        int l_668 = 0x99F15E6DL;
        if ((((g_312.f5.f0 > 0xD845L) > (l_607 != (void*)0)) | ((g_576 , l_609) == l_609)))
        {
            union U4 **l_612 = (void*)0;
            int l_613 = 9L;
            struct S1 l_614 = {1UL,7L,{-1L,65535UL},0x4CL,0L,{-1L,1UL}};
            int *l_626 = &g_312.f5.f0;
            union U2 l_659 = {250UL};
            (**g_429) = p_5;
            if ((((safe_mul_func_uint16_t_u_u(65535UL, (&g_588 == (void*)0))) , l_612) != l_612))
            {
                struct S0 l_621 = {-1L,65535UL};
                (*g_332) = (*g_332);
                if (((p_3 < p_5) , (*g_263)))
                {
                    struct S0 **l_616 = &g_162;
                    (*l_616) = ((l_613 & (l_614 , (!(!(1L == ((*g_599) , 252UL)))))) , l_615);
                    if ((&g_333 != ((*g_232) , l_617)))
                    {
                        const int **l_619 = &l_618;
                        union U3 l_620 = {0xC4A1BEA8L};
                        (*l_619) = l_618;
                        (*l_619) = (void*)0;
                        (***g_587) = (*l_539);
                        return l_620;
                    }
                    else
                    {
                        int **l_622 = &g_263;
                        int l_625 = 7L;
                        (*l_530) = (l_621 , (void*)0);
                        (*l_622) = (*g_429);
                        l_625 = (safe_div_func_int32_t_s_s(p_3, l_614.f5.f0));
                    }
                }
                else
                {
                    return (*g_232);
                }
            }
            else
            {
                const short l_633 = 0x4341L;
                struct S1 *l_662 = &g_312;
                struct S0 l_669 = {-1L,0xCF12L};
                (*l_530) = l_626;
                (*l_530) = (*l_530);
                if ((safe_sub_func_uint32_t_u_u((*l_618), (safe_div_func_int8_t_s_s(0x80L, (func_13((p_4 | (safe_add_func_uint32_t_u_u(0x7DF997FAL, ((*g_263) , (1UL | ((func_68(l_614.f5, p_4, (l_633 && 0x9E50L)) < p_4) , 0L))))))) ^ (*l_626)))))))
                {
                    char l_639 = 0x69L;
                    if ((safe_unary_minus_func_uint32_t_u(((safe_mul_func_int8_t_s_s(4L, 0L)) ^ (*l_626)))))
                    {
                        struct S0 **l_653 = (void*)0;
                        int *l_654 = &g_600.f2.f0;
                        (*g_588) = l_615;
                        (*l_530) = &p_4;
                        (*l_530) = l_654;
                        (*l_530) = &p_4;
                    }
                    else
                    {
                        (**l_530) = l_633;
                        (*l_608) = &g_233;
                    }
                }
                else
                {
                    for (g_160.f1 = 0; (g_160.f1 < 59); g_160.f1 = safe_add_func_uint32_t_u_u(g_160.f1, 5))
                    {
                        p_4 = 0x5250F0BBL;
                    }
                    for (g_79.f0 = (-17); (g_79.f0 == 2); g_79.f0 = safe_add_func_int16_t_s_s(g_79.f0, 7))
                    {
                        union U4 **l_663 = (void*)0;
                        (**g_429) = p_3;
                        (**g_429) = ((((l_659 , (*l_618)) , l_663) == (void*)0) && p_3);
                    }
                    (**l_530) = (safe_rshift_func_uint8_t_u_u(0xFCL, 6));
                    for (g_76 = 0; (g_76 < 27); g_76 = safe_add_func_int8_t_s_s(g_76, 3))
                    {
                        l_668 = ((*g_232) , (**g_429));
                        if ((**g_429))
                            break;
                        (*l_615) = (func_13(g_231.f2) , l_669);
                    }
                }
            }
            (*l_530) = &p_4;
        }
        else
        {
            unsigned char l_672 = 251UL;
            int **l_677 = &g_263;
            for (g_96.f1.f2.f1 = 0; (g_96.f1.f2.f1 < 25); g_96.f1.f2.f1++)
            {
                l_672 = (*g_263);
                (*l_615) = (*l_615);
            }
            (**g_429) = (safe_div_func_uint16_t_u_u(((void*)0 == g_394), (safe_add_func_int16_t_s_s((2UL >= p_5), (*l_618)))));
            (*l_677) = (*g_429);
        }
        for (g_96.f1.f5.f1 = (-22); (g_96.f1.f5.f1 > 50); g_96.f1.f5.f1 = safe_add_func_uint8_t_u_u(g_96.f1.f5.f1, 9))
        {
            union U3 l_680 = {0x5DBD6B5FL};
            if ((**g_429))
                break;
            if ((((g_169.f2.f0 , (0xD2L == g_79.f5.f1)) | p_3) & (*g_263)))
            {
                return l_680;
            }
            else
            {
                (*g_588) = (void*)0;
            }
            if ((**l_530))
                continue;
        }
        (**l_530) = (&l_618 != (void*)0);
    }
    p_4 = (safe_mul_func_uint16_t_u_u((!0x10ADL), (**l_530)));
    return (***l_607);
}







static unsigned short func_13(const unsigned p_14)
{
    int * const l_511 = &g_79.f2.f0;
    int **l_512 = &g_263;
    (*l_512) = l_511;
    return g_169.f1;
}







static const unsigned func_15(struct S0 p_16, unsigned p_17, const struct S1 p_18, int p_19, unsigned char p_20)
{
    int *l_395 = (void*)0;
    union U4 l_396 = {4294967295UL};
    struct S1 l_409 = {4UL,-1L,{0x79222388L,0UL},1L,-5L,{-1L,0x0942L}};
    unsigned l_410 = 0x6D836C02L;
    union U3 **l_471 = &g_232;
    union U2 l_505 = {4UL};
    int **l_510 = (void*)0;
    if (((safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((((g_394 != (void*)0) , l_395) == (l_396 , &g_76)) ^ (safe_sub_func_uint16_t_u_u(((((-1L) | (safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(g_49.f2, ((safe_div_func_int16_t_s_s((g_312.f1 >= ((l_409 , &g_232) == &g_232)), l_410)) ^ g_79.f4))), p_16.f1)), g_169.f2.f0)), p_18.f4))) && (-4L)) | p_18.f2.f1), p_18.f2.f1))), p_18.f4)), p_18.f3)) , l_396.f0))
    {
        int * const *l_428 = &g_263;
        union U4 l_440 = {0x86FDFC26L};
        const union U3 l_465 = {0x316EEFBFL};
        struct S1 **l_480 = (void*)0;
        for (g_231.f2 = 0; (g_231.f2 < 6); g_231.f2++)
        {
            union U2 *l_431 = &g_160;
            union U2 ** const l_430 = &l_431;
            int l_432 = 0xA4A64453L;
            unsigned l_433 = 1UL;
            g_169.f4 = 0L;
            if ((safe_add_func_uint32_t_u_u(0xE1A9D191L, (safe_lshift_func_int8_t_s_s((-7L), g_231.f2)))))
            {
                int *l_417 = (void*)0;
                int *l_418 = &g_96.f1.f5.f0;
                (*l_418) = (&g_232 == (void*)0);
                return g_321.f2;
            }
            else
            {
                int l_426 = (-2L);
                struct S0 l_441 = {0L,0xE969L};
                for (g_233.f1.f0 = 0; (g_233.f1.f0 >= (-6)); --g_233.f1.f0)
                {
                    struct S0 *l_421 = &l_396.f1.f5;
                    int *l_434 = &l_396.f1.f4;
                    (*l_421) = p_18.f5;
                    for (g_96.f1.f0 = 10; (g_96.f1.f0 >= 4); --g_96.f1.f0)
                    {
                        int **l_424 = &l_395;
                        short l_425 = 3L;
                        int *l_427 = &l_396.f1.f4;
                        (*l_424) = l_395;
                        (*l_427) = (p_20 >= ((g_312.f2.f0 & l_425) | l_426));
                        (*l_424) = &g_76;
                        g_429 = l_428;
                    }
                    (*l_434) = (g_321.f0 ^ ((((p_17 <= 0xE8B8L) > (0L <= ((l_430 == &l_431) & p_20))) | l_433) < 4294967290UL));
                    (*l_421) = p_18.f2;
                }
                p_16 = l_441;
                for (g_321.f1.f1 = 0; (g_321.f1.f1 < 21); g_321.f1.f1++)
                {
                    int *l_444 = &l_440.f1.f2.f0;
                    (*l_444) = p_17;
                    return g_229;
                }
            }
            if ((g_229 , p_20))
            {
                struct S0 *l_454 = &l_396.f1.f5;
                p_16.f0 = g_49.f2;
                for (g_79.f0 = 18; (g_79.f0 != 40); g_79.f0++)
                {
                    int **l_453 = &g_263;
                    (*l_453) = &l_432;
                    return p_18.f2.f1;
                }
                (*l_454) = p_18.f2;
            }
            else
            {
                if (l_432)
                    break;
                p_16.f0 = (safe_lshift_func_int16_t_s_u((+(-1L)), ((&g_232 != (void*)0) ^ p_19)));
                for (g_96.f1.f2.f0 = (-13); (g_96.f1.f2.f0 != (-27)); --g_96.f1.f2.f0)
                {
                    const char l_459 = 7L;
                    return l_459;
                }
            }
        }
        for (l_409.f2.f1 = 0; (l_409.f2.f1 > 29); l_409.f2.f1 = safe_add_func_uint16_t_u_u(l_409.f2.f1, 3))
        {
            int **l_462 = &g_263;
            int l_466 = 0x6E8A2D6BL;
            struct S1 * const l_479 = (void*)0;
            const union U2 ***l_491 = (void*)0;
            (*l_462) = (p_16.f0 , l_395);
            g_233.f1 = g_169.f5;
            if ((safe_mod_func_int8_t_s_s(func_44(l_465, g_79.f1, l_465.f0, l_466), ((+(((safe_lshift_func_uint16_t_u_s((g_312.f5.f1 == (65535UL && (safe_mod_func_int16_t_s_s(((p_18 , g_312.f1) & 1UL), g_79.f5.f0)))), 13)) , l_471) != l_471)) , g_8))))
            {
                union U2 *l_475 = &g_160;
                union U2 **l_474 = &l_475;
                int l_478 = 0xFB7131E2L;
                int *l_481 = &g_169.f2.f0;
                g_263 = (*g_429);
                (*l_481) = (safe_sub_func_int16_t_s_s((0xB0EAL >= (g_394 != l_474)), (0x811CL || ((1L ^ ((((((safe_mul_func_uint8_t_u_u(l_478, p_18.f1)) , ((~p_19) != ((((l_478 | p_18.f2.f1) ^ 0L) , &g_312) == l_479))) <= g_169.f3) , l_480) == l_480) != p_18.f2.f1)) , g_321.f2))));
                (*l_481) = (*l_481);
                for (l_396.f1.f0 = (-9); (l_396.f1.f0 == 11); l_396.f1.f0 = safe_add_func_int8_t_s_s(l_396.f1.f0, 1))
                {
                    const int l_484 = 1L;
                    return l_484;
                }
            }
            else
            {
                p_16.f0 = ((safe_sub_func_int16_t_s_s((-5L), ((*l_471) == (void*)0))) , (-1L));
                for (g_160.f1 = 0; (g_160.f1 <= 3); ++g_160.f1)
                {
                    (*l_462) = ((safe_lshift_func_uint8_t_u_s(((p_18 , l_491) != &g_394), 2)) , (*l_462));
                }
            }
            (*l_462) = (void*)0;
        }
    }
    else
    {
        int *l_492 = &g_96.f1.f4;
        int **l_493 = (void*)0;
        int **l_494 = &l_492;
        unsigned char l_506 = 8UL;
        int *l_507 = &g_169.f5.f0;
        (*l_492) = p_18.f5.f1;
        (*l_494) = l_395;
        (*l_507) = (p_18.f0 && (safe_div_func_int8_t_s_s(0xE6L, (safe_mul_func_uint16_t_u_u((g_312.f3 , p_18.f5.f1), g_312.f2.f0)))));
    }
    for (l_409.f0 = 27; (l_409.f0 > 33); ++l_409.f0)
    {
        return g_312.f4;
    }
    g_263 = l_395;
    return p_16.f0;
}







static struct S0 func_21(struct S0 p_22, short p_23, unsigned char p_24, int p_25)
{
    const char l_303 = 1L;
    struct S0 l_307 = {0x77E9CDB6L,0xA65DL};
    struct S1 *l_310 = (void*)0;
    char l_327 = 0xD7L;
    union U4 *l_367 = &g_96;
    struct S1 l_380 = {0UL,0xB538L,{0x5573769EL,65535UL},-5L,0L,{0xF33F1C36L,0xCF2EL}};
    union U3 l_381 = {-5L};
    short l_384 = (-1L);
    int *l_389 = &g_96.f1.f2.f0;
    if ((safe_sub_func_int8_t_s_s(0x9AL, (((-2L) & (safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(func_68(p_22, (0xD9L ^ 0x09L), func_68(g_79.f2, l_303, p_24)), p_22.f1)), 9)), 1UL))) <= p_22.f0))))
    {
        int *l_308 = &g_169.f2.f0;
        int **l_309 = &l_308;
        (*l_309) = l_308;
    }
    else
    {
        struct S1 *l_311 = &g_312;
        int l_317 = 0x8D2CA16AL;
        union U3 *l_320 = &g_321;
        const union U4 *l_322 = (void*)0;
        struct S0 l_326 = {0xBD2F91FEL,0UL};
        struct S0 l_328 = {0L,65531UL};
        int l_357 = 0xD6B91F25L;
        struct S0 *l_363 = &g_169.f2;
        l_311 = l_310;
        l_307.f0 = (-4L);
        if ((((safe_mul_func_uint8_t_u_u(g_160.f1, g_79.f5.f0)) < (*g_263)) < (((safe_mul_func_uint16_t_u_u(l_317, 0x421FL)) , (p_24 ^ (p_23 || (0x6DL & (safe_unary_minus_func_int8_t_s(g_79.f1)))))) ^ p_24)))
        {
            union U3 *l_319 = &g_231;
            const union U4 **l_323 = (void*)0;
            const union U4 **l_324 = (void*)0;
            const union U4 **l_325 = &l_322;
            l_320 = l_319;
            (*l_325) = l_322;
            l_328 = (l_326 , l_326);
        }
        else
        {
            int *l_344 = &l_317;
            struct S1 l_352 = {0x74A671EDL,0xD3D2L,{0x2699EA8DL,65535UL},0x15L,1L,{7L,1UL}};
            char l_358 = 1L;
            (*g_263) = (0xB3L < (safe_unary_minus_func_int32_t_s((((safe_add_func_int32_t_s_s((*g_263), (g_332 == (void*)0))) <= p_22.f0) <= ((((func_68(p_22, p_22.f0, (safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((func_68(p_22, (safe_div_func_int16_t_s_s(g_233.f2, 0x5C1DL)), g_169.f4) <= l_328.f1), 1)), l_307.f0))) | (*g_263)) >= p_25) , l_307.f1) < (-2L))))));
            if (p_24)
            {
                (*g_263) = l_307.f1;
            }
            else
            {
                int **l_349 = &g_263;
                for (g_312.f4 = 0; (g_312.f4 <= (-19)); g_312.f4 = safe_sub_func_int32_t_s_s(g_312.f4, 5))
                {
                    for (g_96.f1.f2.f0 = 0; (g_96.f1.f2.f0 < (-26)); g_96.f1.f2.f0--)
                    {
                        const int *l_346 = &g_233.f0;
                        const int **l_345 = &l_346;
                        g_263 = l_344;
                        (*g_263) = (*g_263);
                        (*l_345) = (void*)0;
                    }
                    for (g_79.f5.f1 = (-28); (g_79.f5.f1 < 25); g_79.f5.f1 = safe_add_func_int16_t_s_s(g_79.f5.f1, 9))
                    {
                        p_22 = p_22;
                    }
                    if (p_24)
                        continue;
                }
                (*l_349) = (void*)0;
            }
            if ((g_160.f0 , ((((g_312.f2.f1 == (p_23 != (safe_rshift_func_int16_t_s_s((l_352 , (safe_rshift_func_uint8_t_u_s(l_307.f0, p_22.f1))), g_79.f1)))) < ((((safe_unary_minus_func_int32_t_s(((((safe_unary_minus_func_int16_t_s((((l_307.f1 == ((g_49.f0 < l_357) , l_358)) , 0xFAL) && p_22.f1))) > 0xBCCD831EL) ^ 1UL) || (*l_344)))) && (*l_344)) & (*l_344)) != (-10L))) || p_24) || g_169.f1)))
            {
                return l_352.f2;
            }
            else
            {
                struct S0 *l_359 = &l_326;
                union U4 l_362 = {0x17A14D4DL};
                struct S1 l_364 = {0x13CCDA48L,0xC742L,{1L,0UL},0x49L,0x46B94E04L,{1L,0xC403L}};
                const int *l_365 = &g_169.f5.f0;
                const int **l_366 = &l_365;
                (*l_359) = l_328;
                (*l_344) = (func_68(((g_321.f2 || (((l_362 , &p_22) == l_363) && (l_364 , (g_321.f0 != g_169.f5.f0)))) , p_22), (((p_25 , (void*)0) == (void*)0) >= p_24), p_24) || 0x708AF41FL);
                l_317 = l_303;
                (*l_366) = l_365;
            }
            (*g_332) = l_367;
        }
        (*l_363) = (*l_363);
    }
    (*l_389) = (~((safe_add_func_int16_t_s_s(l_327, ((safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((((safe_rshift_func_uint16_t_u_u(((*g_332) != (void*)0), 10)) <= (safe_div_func_int16_t_s_s((l_380 , (l_381 , (safe_add_func_uint32_t_u_u(((l_384 & (((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(g_160.f1, g_321.f0)), l_380.f3)) != 0L) && 4294967295UL)) , p_24), l_380.f2.f0)))), g_169.f4))) && (-9L)), 6)), g_169.f4)), l_381.f0)) <= p_23))) & g_312.f5.f0));
    return p_22;
}







static struct S0 func_26(const unsigned p_27, unsigned p_28, struct S0 p_29, union U4 p_30)
{
    unsigned char l_34 = 0xEEL;
    char l_38 = 1L;
    short l_39 = 0x5D57L;
    int *l_218 = &g_169.f5.f0;
    struct S0 l_219 = {0x656CE499L,0xA862L};
    struct S0 *l_220 = &g_169.f5;
    const union U3 l_292 = {-4L};
    (*l_218) = (((l_34 & (-3L)) > func_35((l_38 < (g_8 != 6L)), l_39)) == ((4UL && (p_29.f0 < g_49.f0)) | p_29.f1));
    (*l_220) = l_219;
    (*l_220) = p_29;
    if ((((safe_div_func_int8_t_s_s(((!0xF02CE6A8L) < (((safe_mul_func_uint16_t_u_u(g_79.f5.f1, (&l_218 == ((safe_sub_func_int32_t_s_s(0L, ((g_229 | p_29.f1) != ((g_79.f2.f0 < 0x11L) > p_30.f0)))) , (void*)0)))) >= p_27) != g_79.f5.f1)), (*l_218))) & 0x94L) || 1L))
    {
        union U3 *l_230 = &g_231;
        int l_254 = 7L;
        g_232 = l_230;
        for (g_169.f2.f1 = 10; (g_169.f2.f1 >= 27); ++g_169.f2.f1)
        {
            unsigned l_236 = 0xC48F9F20L;
            union U3 l_245 = {-9L};
            struct S0 l_249 = {1L,0UL};
            if ((g_229 != g_8))
            {
                union U2 l_244 = {0xC7L};
                if (l_236)
                    break;
                if ((0UL & (safe_unary_minus_func_uint16_t_u(((g_169.f2.f0 <= ((*g_168) , (safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((g_160 , p_30) , g_231.f2), 1)), g_169.f2.f0)))) && (safe_lshift_func_uint16_t_u_u((l_244 , 65535UL), p_28)))))))
                {
                    union U4 *l_247 = &g_96;
                    union U4 **l_246 = &l_247;
                    (*l_246) = (l_245 , &p_30);
                }
                else
                {
                    int **l_248 = &l_218;
                    (*l_248) = &g_76;
                }
                return l_249;
            }
            else
            {
                for (p_30.f1.f5.f1 = (-11); (p_30.f1.f5.f1 == 6); p_30.f1.f5.f1 = safe_add_func_uint8_t_u_u(p_30.f1.f5.f1, 3))
                {
                    (*l_218) = p_29.f0;
                    (*l_218) = (safe_div_func_uint16_t_u_u(0UL, l_254));
                }
                (*l_218) = (safe_add_func_int32_t_s_s((p_28 == (safe_mul_func_uint8_t_u_u(3UL, ((safe_div_func_uint8_t_u_u(p_29.f1, (safe_mod_func_uint16_t_u_u((l_254 , (g_8 >= 0xF0ED1FF2L)), g_79.f1)))) == (*l_218))))), p_30.f0));
                g_79.f2.f0 = g_233.f2;
            }
            (*l_218) = ((g_231.f2 != 0xE097L) || 4294967286UL);
        }
        (*l_220) = p_29;
        g_263 = &g_76;
    }
    else
    {
        const union U3 *l_278 = &g_233;
        union U3 * const l_279 = &g_233;
        union U4 l_282 = {0UL};
        struct S0 l_288 = {-7L,0x52A2L};
        int *l_293 = &g_169.f5.f0;
        int **l_294 = &l_218;
        (*l_218) = ((safe_div_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((g_79.f2.f1 != (((((((((*l_218) , (*g_263)) , l_282) , 0xA9CAL) > l_282.f0) < 0xEE24A96FL) ^ p_27) && p_30.f0) >= 0L)), 3)), 8)), l_282.f0)) , g_169.f5.f1), 255UL)) , l_282.f0);
        for (p_30.f1.f2.f1 = 0; (p_30.f1.f2.f1 <= 59); p_30.f1.f2.f1++)
        {
            unsigned l_289 = 8UL;
            (*g_263) = (safe_unary_minus_func_uint8_t_u((safe_add_func_uint32_t_u_u((((((0x2DL < (func_68(l_288, p_29.f0, g_169.f1) & l_289)) && g_231.f2) ^ func_68(p_29, (safe_rshift_func_uint8_t_u_u(((func_44(l_292, p_27, (*l_218), (*l_218)) > g_49.f0) >= g_8), g_169.f5.f1)), p_30.f0)) , g_169.f2) , 0UL), p_29.f0))));
        }
        (*l_294) = l_293;
    }
    return (*l_220);
}







static int func_35(int p_36, char p_37)
{
    unsigned char l_67 = 246UL;
    int l_189 = 0L;
    struct S0 l_199 = {0x73D79527L,65532UL};
    const union U3 l_209 = {9L};
    l_189 = ((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(((!p_37) || p_37), ((g_8 != p_36) & (func_44(g_49, ((safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((~func_54((+1UL), (safe_rshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((-1L), (safe_mul_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u((l_67 <= g_8), g_8)) > l_67) | 4UL), l_67)))), 0)), l_67, l_67)) ^ l_67), p_36)), g_169.f2.f1)) <= p_37), l_67, l_67) , g_49.f2)))) | 0x9DCB8710L), p_36)) > g_49.f2);
    if (((p_37 == 0L) , ((((safe_unary_minus_func_uint16_t_u((((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u((func_68(l_199, (+(safe_rshift_func_uint8_t_u_s((2UL & (safe_add_func_int16_t_s_s((p_36 != ((p_36 ^ ((0x76514B04L || (l_199.f1 > (((safe_mul_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(l_189, p_36)) <= g_8), g_169.f3)) > l_199.f0) || 0xC151L))) >= 0x63L)) >= g_79.f1)), l_199.f0))), 6))), l_199.f0) >= g_160.f0), g_79.f1)) && 0xB1L), 0)), 2)), g_160.f0)) == l_199.f0) >= g_169.f1))) & l_199.f0) == l_199.f1) == 1L)))
    {
        int *l_208 = &g_79.f5.f0;
        struct S1 *l_212 = &g_79;
        const union U3 l_213 = {0x558CCBDEL};
        (*l_208) = p_37;
        (*l_208) = (~(func_68(l_199, (func_44(l_209, (safe_lshift_func_uint16_t_u_s((*l_208), l_199.f0)), p_36, (g_160 , ((l_212 == l_212) ^ func_44(l_213, g_79.f4, (*l_208), g_169.f5.f0)))) || p_37), p_37) >= 1UL));
    }
    else
    {
        const union U3 *l_215 = &g_49;
        const union U3 **l_214 = &l_215;
        (*l_214) = &l_209;
    }
    return p_37;
}







static short func_44(const union U3 p_45, unsigned char p_46, int p_47, int p_48)
{
    return p_48;
}







static unsigned func_54(unsigned p_55, char p_56, int p_57, unsigned short p_58)
{
    union U2 l_72 = {0xF0L};
    struct S0 l_73 = {0L,0UL};
    unsigned short l_74 = 65528UL;
    int *l_85 = &g_76;
    char l_93 = 3L;
    union U4 *l_95 = &g_96;
    union U4 **l_102 = (void*)0;
    unsigned char l_147 = 0UL;
    union U2 *l_159 = &g_160;
    if (func_68((l_72 , l_73), p_55, l_74))
    {
        struct S1 *l_78 = &g_79;
        struct S1 **l_80 = &l_78;
        struct S0 *l_82 = &g_79.f5;
        struct S0 **l_81 = &l_82;
        (*l_80) = l_78;
        (*l_81) = &l_73;
    }
    else
    {
        struct S0 l_83 = {0x229A0C81L,65529UL};
        unsigned char l_84 = 1UL;
        union U4 l_94 = {0xFAD406D4L};
        short l_110 = 0xF30EL;
        struct S1 *l_126 = &g_79;
        struct S1 **l_125 = &l_126;
        if (func_68(l_83, (func_68(l_73, func_68((g_8 , l_73), func_68(l_83, l_83.f0, func_68(g_79.f2, l_83.f1, g_79.f2.f1)), p_56), g_8) < l_83.f0), l_84))
        {
            struct S1 l_90 = {1UL,0x6770L,{0L,65530UL},0x70L,0L,{0x6BDADCC6L,65527UL}};
            union U4 **l_97 = (void*)0;
            union U4 **l_98 = &l_95;
            (*l_85) = func_68(g_79.f2, (l_85 == (void*)0), (safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((l_90 , (func_68(l_73, p_56, (*l_85)) != (safe_lshift_func_uint16_t_u_u(l_93, l_83.f0)))), l_83.f0)), p_58)));
            (*l_98) = (l_94 , l_95);
            return g_76;
        }
        else
        {
            int **l_99 = &l_85;
            (*l_99) = &p_57;
        }
        if (p_56)
        {
            int *l_107 = &g_76;
            for (l_94.f1.f0 = (-28); (l_94.f1.f0 <= 22); l_94.f1.f0 = safe_add_func_int16_t_s_s(l_94.f1.f0, 1))
            {
                int l_115 = 0xA60341E9L;
                (*l_85) = func_68(l_83, g_79.f0, (*l_85));
                l_102 = &l_95;
                (*l_85) = ((safe_lshift_func_int8_t_s_u(((g_79.f0 || ((((safe_add_func_uint16_t_u_u(((g_79.f1 , &p_57) != l_107), (g_79.f3 , (-8L)))) || (safe_mul_func_uint8_t_u_u(g_79.f3, l_84))) | ((!0x8538E7D4L) || l_110)) >= 0UL)) & l_84), 2)) | g_79.f2.f1);
                p_57 = ((safe_div_func_int32_t_s_s(((l_115 , p_55) == func_68(g_79.f5, l_84, g_96.f0)), l_115)) > ((safe_unary_minus_func_int8_t_s(((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((l_125 == &l_126), 0x4EL)), (-1L))) < g_79.f0), g_79.f5.f0)), (*l_85))) != p_58))) >= g_49.f2));
            }
        }
        else
        {
            struct S1 **l_131 = &l_126;
            int l_134 = 1L;
            l_94.f1.f2 = l_83;
            (*l_85) = ((*l_85) & (g_49 , (*l_85)));
            if (func_68(g_79.f2, ((safe_rshift_func_uint8_t_u_s(((void*)0 != l_131), 7)) & (safe_mod_func_uint32_t_u_u(p_58, 0xFFA6F56AL))), l_134))
            {
                return l_134;
            }
            else
            {
                int *l_135 = (void*)0;
                int **l_136 = (void*)0;
                int **l_137 = &l_135;
                struct S0 *l_138 = &g_96.f1.f2;
                (*l_137) = l_135;
                (*l_138) = l_83;
            }
            (*l_85) = (safe_rshift_func_uint8_t_u_u((!g_79.f4), 6));
        }
        (*l_85) = (safe_rshift_func_int8_t_s_s((*l_85), 3));
    }
    if ((safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s(func_68(l_73, l_147, (*l_85)), (safe_lshift_func_int16_t_s_s((((void*)0 == l_95) && (((p_58 & ((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint32_t_u_u((*l_85), g_79.f1)) , g_49.f0), g_79.f4)) | 1UL), 252UL)) <= g_79.f3)) | p_55) <= g_76)), g_79.f2.f1)))), 0L)))
    {
        union U2 *l_158 = &l_72;
        struct S0 * const l_161 = &g_79.f2;
        struct S0 **l_171 = &g_162;
        struct S0 ***l_170 = &l_171;
        l_159 = l_158;
        if (((void*)0 != &p_57))
        {
            (*l_85) = (&l_72 != (void*)0);
        }
        else
        {
            g_162 = l_161;
        }
        for (l_73.f0 = 20; (l_73.f0 <= (-18)); --l_73.f0)
        {
            int **l_165 = (void*)0;
            int **l_166 = &l_85;
            struct S1 **l_167 = (void*)0;
            if ((*l_85))
                break;
            (*l_166) = &g_76;
            g_168 = &g_79;
        }
        (*l_170) = &g_162;
    }
    else
    {
        struct S0 *l_181 = (void*)0;
        int l_185 = 0L;
        const unsigned char l_186 = 0x04L;
        for (l_72.f3 = (-23); (l_72.f3 <= 9); l_72.f3 = safe_add_func_uint32_t_u_u(l_72.f3, 9))
        {
            union U2 **l_188 = &l_159;
            union U2 ***l_187 = &l_188;
            for (g_160.f1 = 0; (g_160.f1 <= 41); ++g_160.f1)
            {
                for (g_79.f2.f0 = 0; (g_79.f2.f0 <= 3); g_79.f2.f0++)
                {
                    struct S0 **l_182 = &g_162;
                    for (g_169.f5.f1 = 0; (g_169.f5.f1 >= 38); ++g_169.f5.f1)
                    {
                        int **l_180 = &l_85;
                        (*l_180) = &p_57;
                    }
                    (*l_182) = l_181;
                }
                return p_57;
            }
            (*l_85) = (safe_lshift_func_int16_t_s_s((func_68(l_73, (*l_85), (*l_85)) != g_76), (((((func_68(((p_56 ^ l_185) , (*g_162)), (p_55 < p_55), g_79.f2.f0) , (*l_85)) | 0xAB455570L) & (-1L)) > g_79.f4) > l_186)));
            (*l_187) = &l_159;
            (*l_85) = 0x7E88078DL;
        }
    }
    return p_55;
}







static int func_68(struct S0 p_69, unsigned char p_70, unsigned char p_71)
{
    int *l_75 = &g_76;
    int **l_77 = &l_75;
    (*l_77) = l_75;
    return (**l_77);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_49.f0, "g_49.f0", print_hash_value);
    transparent_crc(g_49.f2, "g_49.f2", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_79.f0, "g_79.f0", print_hash_value);
    transparent_crc(g_79.f1, "g_79.f1", print_hash_value);
    transparent_crc(g_79.f2.f0, "g_79.f2.f0", print_hash_value);
    transparent_crc(g_79.f2.f1, "g_79.f2.f1", print_hash_value);
    transparent_crc(g_79.f3, "g_79.f3", print_hash_value);
    transparent_crc(g_79.f4, "g_79.f4", print_hash_value);
    transparent_crc(g_79.f5.f0, "g_79.f5.f0", print_hash_value);
    transparent_crc(g_79.f5.f1, "g_79.f5.f1", print_hash_value);
    transparent_crc(g_160.f0, "g_160.f0", print_hash_value);
    transparent_crc(g_160.f1, "g_160.f1", print_hash_value);
    transparent_crc(g_169.f0, "g_169.f0", print_hash_value);
    transparent_crc(g_169.f1, "g_169.f1", print_hash_value);
    transparent_crc(g_169.f2.f0, "g_169.f2.f0", print_hash_value);
    transparent_crc(g_169.f2.f1, "g_169.f2.f1", print_hash_value);
    transparent_crc(g_169.f3, "g_169.f3", print_hash_value);
    transparent_crc(g_169.f4, "g_169.f4", print_hash_value);
    transparent_crc(g_169.f5.f0, "g_169.f5.f0", print_hash_value);
    transparent_crc(g_169.f5.f1, "g_169.f5.f1", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_231.f2, "g_231.f2", print_hash_value);
    transparent_crc(g_312.f0, "g_312.f0", print_hash_value);
    transparent_crc(g_312.f1, "g_312.f1", print_hash_value);
    transparent_crc(g_312.f2.f0, "g_312.f2.f0", print_hash_value);
    transparent_crc(g_312.f2.f1, "g_312.f2.f1", print_hash_value);
    transparent_crc(g_312.f3, "g_312.f3", print_hash_value);
    transparent_crc(g_312.f4, "g_312.f4", print_hash_value);
    transparent_crc(g_312.f5.f0, "g_312.f5.f0", print_hash_value);
    transparent_crc(g_312.f5.f1, "g_312.f5.f1", print_hash_value);
    transparent_crc(g_437, "g_437", print_hash_value);
    transparent_crc(g_576.f0, "g_576.f0", print_hash_value);
    transparent_crc(g_576.f1, "g_576.f1", print_hash_value);
    transparent_crc(g_600.f0, "g_600.f0", print_hash_value);
    transparent_crc(g_600.f1, "g_600.f1", print_hash_value);
    transparent_crc(g_600.f2.f0, "g_600.f2.f0", print_hash_value);
    transparent_crc(g_600.f2.f1, "g_600.f2.f1", print_hash_value);
    transparent_crc(g_600.f3, "g_600.f3", print_hash_value);
    transparent_crc(g_600.f4, "g_600.f4", print_hash_value);
    transparent_crc(g_600.f5.f0, "g_600.f5.f0", print_hash_value);
    transparent_crc(g_600.f5.f1, "g_600.f5.f1", print_hash_value);
    transparent_crc(g_770, "g_770", print_hash_value);
    transparent_crc(g_806, "g_806", print_hash_value);
    transparent_crc(g_925.f0, "g_925.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
