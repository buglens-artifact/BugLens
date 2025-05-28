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
   unsigned char f0;
   char f1;
   unsigned f2;
};

union U1 {
   signed f0 : 15;
   unsigned f1;
};

union U2 {
   char * f0;
   unsigned f1;
   unsigned char f2;
};

union U3 {
   char * f0;
   unsigned short f1;
};


static char g_5 = (-1L);
static char *g_4 = &g_5;
static int g_6 = (-7L);
static union U2 g_72 = {0};
static union U2 *g_71 = &g_72;
static union U3 g_87 = {0};
static union U3 *g_89[9] = {&g_87,&g_87,&g_87,&g_87,&g_87,&g_87,&g_87,&g_87,&g_87};
static int g_95[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
static union U1 g_99 = {0x336F7EBAL};
static union U0 g_102[5] = {{0UL},{0UL},{0UL},{0UL},{0UL}};
static union U0 *g_115[8][4] = {{&g_102[1],&g_102[3],&g_102[1],(void*)0},{&g_102[0],&g_102[3],(void*)0,(void*)0},{&g_102[3],&g_102[3],&g_102[1],&g_102[3]},{&g_102[3],&g_102[0],&g_102[1],&g_102[0]},{&g_102[3],&g_102[1],(void*)0,&g_102[1]},{&g_102[0],&g_102[1],&g_102[1],&g_102[0]},{(void*)0,&g_102[3],&g_102[0],&g_102[1]},{(void*)0,&g_102[0],(void*)0,&g_102[3]}};
static union U0 **g_114 = &g_115[7][2];
static int *g_123 = &g_95[5];
static int g_168 = 0L;
static int g_191[5] = {0x982A7E1DL,0x982A7E1DL,0x982A7E1DL,0x982A7E1DL,0x982A7E1DL};
static unsigned char g_263 = 250UL;
static int *g_326 = (void*)0;
static char g_342 = 0x52L;
static union U2 **g_349[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static union U2 ***g_348 = &g_349[2];
static int g_374 = 0x784C33A2L;
static int **g_513[2] = {&g_326,&g_326};
static int ***g_512 = &g_513[1];
static union U1 *g_529 = &g_99;
static unsigned g_567 = 0UL;
static int g_583 = 0xC51F3EDBL;
static union U3 **g_720 = &g_89[6];
static union U3 ***g_719 = &g_720;
static char g_722 = 0L;
static int g_793 = 0x52AE57EBL;
static union U2 **g_808 = &g_71;
static int g_892[2] = {0xCCD2A54CL,0xCCD2A54CL};
static union U1 **g_934 = &g_529;
static union U1 ***g_933 = &g_934;
static char g_1013[7][3] = {{0x04L,0x04L,0x04L},{0xBCL,0xBCL,0xBCL},{0x04L,0x04L,0x04L},{0xBCL,0xBCL,0xBCL},{0x04L,0x04L,0x04L},{0xBCL,0xBCL,0xBCL},{0x04L,0x04L,0x04L}};
static unsigned char g_1042 = 0xA8L;



static short func_1(void);
static short func_14(char * p_15, char * p_16, char * p_17);
static unsigned char func_26(union U3 p_27, unsigned p_28, char * p_29, char * p_30);
static unsigned func_32(int p_33, char p_34, char * p_35, union U3 p_36);
static int func_37(char * p_38, int p_39, char p_40, char * p_41);
static char * func_42(unsigned short p_43, union U2 p_44, char p_45);
static int func_51(union U2 p_52, char * p_53, char * p_54);
static union U2 func_55(char * p_56, int p_57);
static char * func_58(char * p_59, char p_60, char p_61, char * p_62, char * p_63);
static char * func_64(char * p_65, char * p_66, short p_67, int p_68);
static short func_1(void)
{
    unsigned l_7 = 0xDE9E8436L;
    char *l_18[4];
    char *l_724 = &g_5;
    union U2 *l_726 = &g_72;
    char *l_768 = &g_342;
    int *l_779 = &g_583;
    union U1 **l_803 = &g_529;
    char *l_841 = &g_342;
    union U3 l_864 = {0};
    int l_878 = 0x9168E9B0L;
    union U2 l_912[2][8][1] = {{{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}}},{{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}}}};
    int l_921 = 1L;
    union U0 *l_931[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int l_951 = 0x83B3DD4AL;
    union U2 ***l_1050 = &g_349[2];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_18[i] = &g_5;
    g_6 |= (safe_add_func_int32_t_s_s(0x11D962EEL, (g_4 == &g_5)));
    if (((l_7 | (safe_add_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(g_6, 0x78ACL)) | (safe_add_func_int8_t_s_s((*g_4), g_5))), func_14(l_18[2], &g_5, &g_5)))) <= l_7))
    {
        unsigned l_725 = 4294967295UL;
        int *l_727 = &g_583;
        char *l_733 = &g_722;
        union U0 *l_746 = &g_102[2];
        int l_761 = 0L;
        union U1 **l_774 = &g_529;
        (*l_727) |= func_37(l_724, l_725, (l_726 == (void*)0), l_18[2]);
        (**g_512) = (**g_512);
        for (g_583 = 0; (g_583 < 12); g_583++)
        {
            short l_737 = 6L;
            char *l_738 = &g_342;
            int l_754 = (-1L);
            union U1 *l_762 = (void*)0;
            for (g_374 = (-8); (g_374 == 9); g_374 = safe_add_func_uint32_t_u_u(g_374, 1))
            {
                union U3 l_732 = {0};
                int l_734 = 9L;
                unsigned short l_778 = 0xD219L;
            }
            (**g_512) = l_779;
        }
        (*l_727) = (safe_add_func_int8_t_s_s((*l_727), (*l_779)));
    }
    else
    {
        int l_782 = 0x3751BCFBL;
        (*l_779) = (*g_123);
        (*g_123) ^= (*l_779);
        (*g_123) &= l_782;
    }
    for (g_374 = 11; (g_374 == 26); ++g_374)
    {
        union U3 l_787 = {0};
        char *l_790 = &g_722;
        int l_791 = 0xDAC438FDL;
        unsigned l_797 = 0xFD3A2EBCL;
        union U2 l_889 = {0};
        char *l_930 = &g_5;
        unsigned l_962 = 0xF10AE554L;
        int ***l_974 = &g_513[1];
        for (g_5 = 0; (g_5 >= 11); g_5 = safe_add_func_int8_t_s_s(g_5, 3))
        {
            int *l_792 = &g_793;
            int *l_798 = (void*)0;
            union U2 *l_815 = &g_72;
            unsigned short l_816 = 0x9BF4L;
            char *l_840 = &g_5;
            char *l_932 = &g_5;
        }
        (*l_779) = (*g_123);
        (*l_779) = (l_974 == l_974);
        for (l_962 = 0; (l_962 <= 3); l_962 += 1)
        {
            unsigned l_975[9][3][6] = {{{1UL,9UL,0x3A284DE6L,0xA02C6847L,0x3A284DE6L,9UL},{1UL,0x80D55D1FL,0xA02C6847L,0xC8D49C46L,0x6B4DD485L,0xA09B3E91L},{4294967295UL,0xA02C6847L,1UL,0xBECCB507L,0xBECCB507L,1UL}},{{0xA02C6847L,0xA02C6847L,8UL,4294967295UL,0x6B4DD485L,0xBECCB507L},{0xC8D49C46L,0xC0626F13L,4294967295UL,4294967290UL,8UL,4294967290UL},{4294967295UL,0xC8D49C46L,4294967295UL,1UL,0x3A284DE6L,0xA09B3E91L}},{{9UL,1UL,4294967290UL,0x6B4DD485L,0x80D55D1FL,0x80D55D1FL},{0x6B4DD485L,0x80D55D1FL,0x80D55D1FL,0x6B4DD485L,4294967290UL,1UL},{9UL,0xA09B3E91L,0x3A284DE6L,1UL,4294967295UL,0xC8D49C46L}},{{4294967295UL,4294967290UL,8UL,4294967290UL,4294967295UL,0xC0626F13L},{0xC8D49C46L,0xA09B3E91L,0xA02C6847L,0xBECCB507L,4294967290UL,0x3A284DE6L},{0x3A284DE6L,0x80D55D1FL,0xA09B3E91L,0xA09B3E91L,0x80D55D1FL,0x3A284DE6L}},{{0xBECCB507L,1UL,0xA02C6847L,4294967295UL,0x3A284DE6L,0xC0626F13L},{0x80D55D1FL,0xC8D49C46L,8UL,0x3A284DE6L,8UL,0xC8D49C46L},{0x80D55D1FL,0xC0626F13L,0x3A284DE6L,4294967295UL,0xA02C6847L,1UL}},{{0xBECCB507L,0x3A284DE6L,0x80D55D1FL,0xA09B3E91L,0xA09B3E91L,0x80D55D1FL},{0x3A284DE6L,0x3A284DE6L,4294967290UL,0xBECCB507L,0xA02C6847L,0xA09B3E91L},{0xC8D49C46L,0xC0626F13L,4294967295UL,4294967290UL,8UL,4294967290UL}},{{4294967295UL,0xC8D49C46L,4294967295UL,1UL,0x3A284DE6L,0xA09B3E91L},{9UL,1UL,4294967290UL,0x6B4DD485L,0x80D55D1FL,0x80D55D1FL},{0xA02C6847L,0xC0626F13L,0xC0626F13L,0xA02C6847L,9UL,0x80D55D1FL}},{{0xC8D49C46L,1UL,8UL,0x80D55D1FL,0xBECCB507L,4294967295UL},{0xBECCB507L,9UL,4294967290UL,9UL,0xBECCB507L,0x6B4DD485L},{4294967295UL,1UL,0x3A284DE6L,0xA09B3E91L,9UL,8UL}},{{8UL,0xC0626F13L,1UL,1UL,0xC0626F13L,8UL},{0xA09B3E91L,0x80D55D1FL,0x3A284DE6L,0xBECCB507L,8UL,0x6B4DD485L},{0xC0626F13L,4294967295UL,4294967290UL,8UL,4294967290UL,4294967295UL}}};
            int i, j, k;
            (*l_779) ^= (*g_123);
            (*l_779) = l_975[1][0][5];
        }
    }
    if (((*l_779) == ((func_37(&g_5, ((void*)0 != &g_720), (*g_4), l_768) & g_6) & 255UL)))
    {
        short l_985 = 0x1CBAL;
        int l_986[5][8] = {{0xBE9B0F4DL,(-2L),(-8L),0x243B4669L,1L,(-1L),(-1L),(-1L)},{(-8L),0xBE9B0F4DL,0xD9FED198L,0xD9FED198L,0xBE9B0F4DL,(-8L),(-1L),(-2L)},{0xA2BFAD0FL,0xD9FED198L,(-8L),(-1L),0x243B4669L,0L,0x243B4669L,(-1L)},{0x243B4669L,0L,0x243B4669L,(-1L),(-8L),0xD9FED198L,0xA2BFAD0FL,(-2L)},{(-1L),(-8L),0xBE9B0F4DL,0xD9FED198L,0xD9FED198L,0xBE9B0F4DL,(-8L),(-1L)}};
        char *l_1029 = &g_342;
        union U2 l_1035[6] = {{0},{0},{0},{0},{0},{0}};
        int i, j;
        if ((g_567 ^ 0x9637432DL))
        {
            union U3 l_976 = {0};
            int l_979[7][8] = {{4L,4L,2L,(-5L),1L,2L,1L,4L},{1L,4L,1L,5L,4L,9L,9L,4L},{4L,9L,9L,4L,5L,1L,4L,1L},{4L,(-5L),0x4877E3D2L,(-5L),4L,0x4877E3D2L,1L,1L},{1L,(-5L),5L,5L,(-5L),1L,9L,(-5L)},{1L,9L,5L,1L,5L,9L,1L,1L},{(-5L),4L,0x4877E3D2L,1L,1L,0x4877E3D2L,4L,(-5L)}};
            char *l_980 = &g_342;
            int i, j;
            if (((*l_779) < (func_26(l_976, (safe_rshift_func_int16_t_s_u(l_979[0][2], g_99.f0)), l_980, l_724) || (safe_rshift_func_int8_t_s_u(l_979[2][0], g_5)))))
            {
                unsigned short l_989 = 1UL;
                l_986[1][7] &= (0x0804E561L || ((*g_123) && ((l_979[4][7] <= (*l_779)) != l_985)));
                (*l_779) = func_14(func_42((((((((*g_114) != (*g_114)) | (l_989 < 0x9BD74B37L)) & (safe_mod_func_uint16_t_u_u(0x6BCEL, 0xC87DL))) == ((l_979[0][2] < l_989) <= (safe_mod_func_int16_t_s_s(((l_986[1][7] ^ (*l_779)) > 9UL), 2UL)))) || 0UL) < g_263), (*l_726), l_989), &g_5, &g_5);
                (*g_123) |= l_979[0][2];
                (**g_512) = &l_986[4][5];
            }
            else
            {
                int **l_997 = &l_779;
                for (g_6 = 0; (g_6 <= 1); g_6 += 1)
                {
                    int i;
                    if (func_32(g_892[g_6], (*g_4), l_980, l_976))
                    {
                        short l_998 = 0L;
                        (*l_779) = (((-6L) | (*g_4)) && ((((g_99.f0 | 0x3E43L) && ((((safe_rshift_func_int8_t_s_u(l_979[3][5], 3)) != (*g_4)) <= (safe_unary_minus_func_int32_t_s(0x92C90C49L))) & (l_997 == (*g_512)))) >= 0x24B1C2B9L) >= g_583));
                        if ((*g_123))
                            continue;
                        (**l_997) = 0x813B01B3L;
                        (*l_779) &= l_998;
                    }
                    else
                    {
                        return (*l_779);
                    }
                }
            }
            (**g_512) = &l_951;
        }
        else
        {
            unsigned short l_999 = 0x106CL;
            char *l_1009 = &g_342;
            union U0 *l_1023[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            union U3 l_1033 = {0};
            union U2 ***l_1049 = &g_349[7];
            int i;
            for (g_583 = 4; (g_583 >= 0); g_583 -= 1)
            {
                unsigned char l_1000 = 0x8BL;
                unsigned char l_1003[9] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
                int l_1004[5][10] = {{0L,0x2A33D3D2L,0xB04FE396L,0xB04FE396L,0x2A33D3D2L,0L,0x28141F2FL,0L,0x2A33D3D2L,0xB04FE396L},{(-1L),0x445FB70EL,(-1L),0xB04FE396L,0x28141F2FL,0x28141F2FL,0xB04FE396L,(-1L),0x445FB70EL,(-1L)},{(-1L),0L,0x445FB70EL,0x2A33D3D2L,0x445FB70EL,0L,(-1L),(-1L),0L,0x445FB70EL},{0x2A33D3D2L,0xB04FE396L,0xB04FE396L,0x2A33D3D2L,0L,0x28141F2FL,0L,0x2A33D3D2L,0xB04FE396L,0xB04FE396L},{0L,0xB04FE396L,0x445FB70EL,(-1L),(-1L),0x445FB70EL,0xB04FE396L,0L,0xB04FE396L,0x445FB70EL}};
                int l_1008 = (-1L);
                union U2 l_1014 = {0};
                int l_1030 = 0x7E92CD0BL;
                unsigned l_1034 = 0xF9689AF0L;
                char *l_1036[2][4][1] = {{{(void*)0},{&g_342},{(void*)0},{&g_342}},{{(void*)0},{&g_342},{(void*)0},{&g_342}}};
                union U3 l_1039 = {0};
                int i, j, k;
                for (l_951 = 4; (l_951 >= 0); l_951 -= 1)
                {
                    int i;
                    return g_191[l_951];
                }
                if ((l_999 > l_999))
                {
                    (*g_123) = 0x74BFAF81L;
                    return l_1000;
                }
                else
                {
                    for (g_567 = 0; (g_567 <= 7); g_567 += 1)
                    {
                        int i;
                        (**g_512) = &g_95[(g_583 + 1)];
                        (*g_326) &= 1L;
                    }
                }
                (**g_512) = (**g_512);
                if ((safe_sub_func_uint8_t_u_u((l_1003[6] | (+0L)), g_191[3])))
                {
                    l_1004[1][3] = (g_892[0] == (g_892[1] < g_583));
                    (*g_123) |= (*l_779);
                }
                else
                {
                    unsigned char l_1007 = 0x2BL;
                    char *l_1015[2];
                    union U3 l_1016 = {0};
                    int l_1020[8];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1015[i] = &g_1013[1][2];
                    for (i = 0; i < 8; i++)
                        l_1020[i] = 0x6AD963B0L;
                    if ((((safe_sub_func_int8_t_s_s(l_1007, func_32(l_1008, func_32((g_793 <= ((l_985 == func_14(l_1009, func_42((((+func_14(&g_342, func_42(((safe_lshift_func_uint8_t_u_s(((safe_unary_minus_func_int32_t_s((0x23L >= g_102[3].f0))) & 0x4337L), 4)) == (*l_779)), (*g_71), l_1007), &g_5)) & 248UL) >= g_1013[1][2]), l_1014, l_999), &g_1013[2][2])) | l_986[1][7])), l_999, l_1015[0], l_1016), l_1009, g_87))) | l_999) && l_1008))
                    {
                        unsigned l_1017 = 0xB94BA6DEL;
                        (*g_123) ^= (-1L);
                        (*g_123) = ((void*)0 == (*g_719));
                        if (l_1017)
                            continue;
                        (**g_512) = (**g_512);
                    }
                    else
                    {
                        unsigned l_1018[5][9][3] = {{{0xE88A34C0L,1UL,1UL},{0xC615C18AL,4294967295UL,4294967295UL},{0xE88A34C0L,1UL,1UL},{0xC615C18AL,4294967295UL,4294967295UL},{0xE88A34C0L,1UL,1UL},{0xC615C18AL,4294967295UL,4294967295UL},{0xE88A34C0L,1UL,1UL},{0xC615C18AL,4294967295UL,4294967295UL},{0xE88A34C0L,1UL,1UL}},{{0xC615C18AL,4294967295UL,4294967295UL},{0xE88A34C0L,1UL,1UL},{0xC615C18AL,4294967295UL,4294967295UL},{0xE88A34C0L,1UL,1UL},{0xC615C18AL,4294967295UL,4294967295UL},{0xE88A34C0L,1UL,1UL},{0xC615C18AL,4294967295UL,4294967295UL},{0xE88A34C0L,1UL,1UL},{0xC615C18AL,4294967295UL,4294967295UL}},{{0xE88A34C0L,1UL,1UL},{0xC615C18AL,4294967295UL,4294967295UL},{0xE88A34C0L,1UL,1UL},{0xC615C18AL,4294967295UL,4294967295UL},{0xE88A34C0L,1UL,1UL},{0xC615C18AL,4294967295UL,4294967295UL},{0xE88A34C0L,1UL,1UL},{0xC615C18AL,4294967295UL,4294967295UL},{0xE88A34C0L,1UL,1UL}},{{0xC615C18AL,4294967295UL,4294967295UL},{0xE88A34C0L,1UL,1UL},{0xC615C18AL,4294967295UL,4294967295UL},{0xE88A34C0L,1UL,1UL},{0xC615C18AL,4294967295UL,4294967295UL},{0xE88A34C0L,1UL,1UL},{0xC615C18AL,4294967295UL,4294967295UL},{0xE88A34C0L,1UL,1UL},{0xC615C18AL,4294967295UL,4294967295UL}},{{0xE88A34C0L,1UL,1UL},{0xC615C18AL,4294967295UL,4294967295UL},{0xE88A34C0L,1UL,1UL},{0xC615C18AL,4294967295UL,4294967295UL},{0xE88A34C0L,1UL,1UL},{0xC615C18AL,4294967295UL,4294967295UL},{0xE88A34C0L,1UL,1UL},{0xC615C18AL,4294967295UL,4294967295UL},{0xE88A34C0L,1UL,1UL}}};
                        char *l_1019 = &g_102[3].f1;
                        int i, j, k;
                        (*g_123) &= l_999;
                        l_1020[2] ^= (l_1018[3][1][1] > (l_1019 == (void*)0));
                        return l_999;
                    }
                    l_1008 = (0x48L ^ 0x29L);
                    if (((g_102[3].f1 > (safe_mod_func_uint32_t_u_u(g_374, l_1003[0]))) < (g_1013[1][0] >= (l_1023[5] != (*g_114)))))
                    {
                        int l_1024 = 9L;
                        if (l_1024)
                            break;
                        return g_263;
                    }
                    else
                    {
                        unsigned l_1025 = 0UL;
                        (*g_720) = (**g_719);
                        return l_1025;
                    }
                }
                for (g_793 = 3; (g_793 >= 0); g_793 -= 1)
                {
                    int l_1026 = 0x55CF284BL;
                    int i;
                    l_1030 = (((65535UL <= (func_14(l_18[g_793], l_18[g_793], &g_5) && ((l_1026 == (safe_lshift_func_int8_t_s_u(((&g_934 != &g_934) | func_26((***g_719), (*l_779), l_1029, &g_722)), g_1013[1][2]))) ^ l_1003[6]))) || l_985) & l_985);
                    if ((safe_add_func_uint16_t_u_u(func_26(l_1033, g_102[3].f0, func_58(func_58(func_42(l_1034, l_1035[1], l_1026), ((*g_4) || g_102[3].f0), (*g_4), &g_1013[6][0], &g_722), l_985, l_1026, &g_722, l_18[2]), l_1036[1][0][0]), (*l_779))))
                    {
                        int l_1045 = (-1L);
                        int *l_1046 = &l_951;
                        char *l_1053 = &g_722;
                        (*l_1046) = (l_985 <= ((safe_mod_func_int8_t_s_s(func_26(l_1039, (((safe_add_func_int8_t_s_s(8L, g_1042)) ^ func_32((g_722 && l_986[1][7]), ((0x03D1L <= 0L) & (safe_mod_func_uint8_t_u_u((~l_1045), (*l_779)))), &g_722, l_1033)) & l_1026), l_1009, &g_5), l_1008)) >= l_999));
                        (*g_123) = 0x2E5724B6L;
                        (*g_123) ^= ((safe_mod_func_uint8_t_u_u((l_1026 < (l_1049 != l_1050)), l_986[1][7])) | 0xF9L);
                        (*l_1046) = ((*l_779) != func_37(&g_1013[1][2], g_892[0], (*g_4), func_42(g_342, (**g_808), func_32((safe_lshift_func_int16_t_s_u((+(~g_1013[1][2])), l_999)), func_26((**g_720), g_1013[4][0], l_1053, &g_5), &g_342, (***g_719)))));
                    }
                    else
                    {
                        (*g_123) |= l_1030;
                        (*g_123) = (*l_779);
                        (**g_512) = (**g_512);
                    }
                    for (l_878 = 0; (l_878 <= 0); l_878 += 1)
                    {
                        int *l_1054 = &l_986[4][3];
                        union U0 *l_1055 = &g_102[3];
                        (*l_1054) |= (*g_123);
                        (*g_114) = l_1055;
                        return g_342;
                    }
                }
            }
            return g_1013[1][2];
        }
    }
    else
    {
        for (l_878 = 4; (l_878 >= 0); l_878 -= 1)
        {
            union U3 **l_1056[7];
            int i;
            for (i = 0; i < 7; i++)
                l_1056[i] = (void*)0;
            (*l_779) = (l_1056[5] == (void*)0);
        }
    }
    return g_95[4];
}







static short func_14(char * p_15, char * p_16, char * p_17)
{
    unsigned l_25 = 4294967290UL;
    union U3 l_31[10][9][1] = {{{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}}},{{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}}},{{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}}},{{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}}},{{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}}},{{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}}},{{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}}},{{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}}},{{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}}},{{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}}}};
    union U2 l_48 = {0};
    char *l_475 = (void*)0;
    union U2 ***l_493 = &g_349[2];
    union U1 *l_496 = &g_99;
    union U0 *l_499 = &g_102[3];
    union U1 *l_534 = &g_99;
    int *l_566 = (void*)0;
    int l_590 = 0xCE993646L;
    short l_620 = 0x3F86L;
    short l_653[4];
    union U3 **l_680 = &g_89[4];
    char l_704 = 0xB2L;
    unsigned l_723 = 4294967295UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_653[i] = 0x381AL;
    if ((safe_rshift_func_int8_t_s_u(((((safe_sub_func_int8_t_s_s(((((safe_sub_func_int8_t_s_s(((0L < (l_25 > ((p_17 == (void*)0) == (p_16 == p_17)))) > func_26(l_31[9][8][0], func_32(l_25, (func_37(func_42((safe_rshift_func_int16_t_s_s(((p_16 == (void*)0) != l_25), l_25)), l_48, (*p_16)), l_25, (*p_17), p_16) <= 1L), l_475, l_31[9][8][0]), p_17, p_16)), l_25)) || g_95[6]) != (-1L)) < 255UL), l_25)) || l_25) & (*p_17)) & l_25), g_263)))
    {
        char l_488 = (-10L);
        return l_488;
    }
    else
    {
        short l_497 = 0x6A2FL;
        int *l_511 = (void*)0;
        unsigned l_530 = 0xF653D2BDL;
        union U3 l_538 = {0};
        union U2 *l_588[5][3] = {{(void*)0,&g_72,(void*)0},{(void*)0,&l_48,&g_72},{&l_48,(void*)0,(void*)0},{&g_72,(void*)0,(void*)0},{&l_48,&l_48,&g_72}};
        unsigned char l_592 = 0UL;
        char *l_610 = &g_102[3].f1;
        unsigned l_640 = 0x8DE718F5L;
        int i, j;
        l_497 &= (safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((0xBDB4L ^ ((&g_349[8] != l_493) == g_95[6])), ((safe_rshift_func_uint8_t_u_s((((void*)0 == l_496) < 0x69L), 5)) || 8L))), (&g_349[2] == l_493)));
        for (g_99.f1 = 0; (g_99.f1 <= 0); g_99.f1 += 1)
        {
            short l_501 = 0L;
            union U3 l_504 = {0};
            int l_520 = 1L;
            unsigned l_553 = 0x6F9AE997L;
            union U2 **l_570 = &g_71;
            unsigned l_571[1][9][7] = {{{0UL,0x8331DD33L,0x05DADAD8L,0x05DADAD8L,0x8331DD33L,0UL,0x8331DD33L},{4UL,0UL,0UL,4UL,0x8331DD33L,4UL,0UL},{0x9A83BE53L,0x9A83BE53L,0UL,0x05DADAD8L,0UL,4UL,4UL},{4UL,0x05DADAD8L,0x9A83BE53L,0x05DADAD8L,4UL,4UL,0x05DADAD8L},{0x8331DD33L,0UL,0x8331DD33L,0x05DADAD8L,0x05DADAD8L,0x8331DD33L,0UL},{0x05DADAD8L,0UL,0x9A83BE53L,0x9A83BE53L,0UL,0x05DADAD8L,0UL},{0x8331DD33L,0x05DADAD8L,0x05DADAD8L,0x8331DD33L,0UL,0x8331DD33L,0x05DADAD8L},{4UL,4UL,0x05DADAD8L,0x9A83BE53L,0x05DADAD8L,4UL,4UL},{4UL,0x05DADAD8L,0x9A83BE53L,0x05DADAD8L,4UL,4UL,0x05DADAD8L}}};
            int i, j, k;
            for (g_168 = 0; (g_168 >= 0); g_168 -= 1)
            {
                unsigned l_498 = 2UL;
                (*g_114) = (*g_114);
                for (l_497 = 0; (l_497 >= 0); l_497 -= 1)
                {
                    for (g_374 = 3; (g_374 >= 0); g_374 -= 1)
                    {
                        (*g_123) = 0x91C8D4B4L;
                        if (l_498)
                            continue;
                    }
                    (*g_123) = (*g_123);
                }
            }
            (*g_114) = l_499;
        }
        for (g_374 = 0; (g_374 < 1); g_374 = safe_add_func_uint32_t_u_u(g_374, 1))
        {
            char *l_581 = &g_5;
            union U0 *l_591[2];
            int l_599[5][4];
            union U2 *l_635 = &l_48;
            int i, j;
            for (i = 0; i < 2; i++)
                l_591[i] = &g_102[3];
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 4; j++)
                    l_599[i][j] = 0x4C835DAAL;
            }
            for (g_342 = 0; g_342 < 5; g_342 += 1)
            {
                union U0 tmp = {0x5DL};
                g_102[g_342] = tmp;
            }
        }
    }
    for (l_590 = 2; (l_590 <= 7); l_590 += 1)
    {
        (*g_123) = 0x7F5EFEF0L;
    }
    (**g_512) = (**g_512);
    for (l_620 = 5; (l_620 >= 1); l_620 -= 1)
    {
        union U1 **l_643 = &l_496;
        int l_658 = 0L;
        union U3 l_675[8] = {{0},{0},{0},{0},{0},{0},{0},{0}};
        union U2 *l_706[8][8] = {{(void*)0,&l_48,&l_48,&g_72,&g_72,&l_48,&l_48,(void*)0},{(void*)0,&l_48,&l_48,&l_48,&l_48,&g_72,&l_48,&g_72},{&l_48,(void*)0,&l_48,(void*)0,&l_48,&g_72,&g_72,&l_48},{&g_72,&l_48,(void*)0,&g_72,&l_48,&l_48,&g_72,(void*)0},{&l_48,&l_48,(void*)0,(void*)0,&l_48,&g_72,&g_72,&g_72},{&l_48,&g_72,&l_48,&l_48,(void*)0,&l_48,&g_72,&g_72},{&l_48,&l_48,&l_48,&g_72,&g_72,&l_48,&l_48,&g_72},{&l_48,&g_72,&g_72,&l_48,&g_72,&l_48,&g_72,&l_48}};
        union U3 ***l_721 = &l_680;
        int i, j;
        (*l_643) = l_534;
        for (g_374 = 6; (g_374 >= 0); g_374 -= 1)
        {
            union U1 *l_644[1][5][8] = {{{&g_99,&g_99,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_99},{&g_99,&g_99,&g_99,(void*)0,&g_99,&g_99,&g_99,&g_99},{&g_99,&g_99,(void*)0,(void*)0,&g_99,&g_99,&g_99,(void*)0},{&g_99,(void*)0,&g_99,&g_99,(void*)0,&g_99,(void*)0,&g_99},{(void*)0,&g_99,(void*)0,&g_99,&g_99,(void*)0,&g_99,(void*)0}}};
            int l_678[1][8][3] = {{{3L,3L,3L},{(-1L),8L,(-1L)},{3L,3L,3L},{(-1L),8L,(-1L)},{3L,3L,3L},{(-1L),8L,(-1L)},{3L,3L,3L},{(-1L),8L,(-1L)}}};
            union U2 l_682 = {0};
            union U3 *l_701 = &l_31[8][1][0];
            int *l_702[3][7][7] = {{{&g_95[(g_374 + 1)],&g_168,&g_95[(g_374 + 1)],&g_95[(g_374 + 1)],&g_168,&g_95[(g_374 + 1)],&g_95[(g_374 + 1)]},{&g_95[3],&g_95[3],(void*)0,&g_95[3],&g_95[3],(void*)0,&g_95[3]},{&g_168,&g_95[(g_374 + 1)],&g_95[(g_374 + 1)],&g_168,&g_95[(g_374 + 1)],&g_95[(g_374 + 1)],&g_168},{&g_95[(l_620 + 2)],&g_95[3],&g_95[(l_620 + 2)],&g_95[(l_620 + 2)],&g_95[3],&g_95[(l_620 + 2)],&g_95[(l_620 + 2)]},{&g_168,&g_168,&g_6,&g_168,&g_168,&g_6,&g_168},{&g_95[3],&g_95[(l_620 + 2)],&g_95[(l_620 + 2)],&g_95[3],&g_95[(l_620 + 2)],&g_95[(l_620 + 2)],&g_95[3]},{&g_95[(g_374 + 1)],&g_168,&g_95[(g_374 + 1)],&g_95[(g_374 + 1)],&g_168,&g_95[(g_374 + 1)],&g_95[(g_374 + 1)]}},{{&g_95[3],&g_95[3],(void*)0,&g_95[3],&g_95[3],(void*)0,&g_95[3]},{&g_168,&g_95[(g_374 + 1)],&g_95[(g_374 + 1)],&g_168,&g_95[(g_374 + 1)],&g_95[(g_374 + 1)],&g_168},{&g_95[(l_620 + 2)],&g_95[3],&g_95[(l_620 + 2)],&g_95[(l_620 + 2)],&g_95[3],&g_95[(l_620 + 2)],&g_95[(l_620 + 2)]},{&g_168,&g_168,&g_6,&g_168,&g_168,&g_6,&g_168},{&g_95[3],&g_95[(l_620 + 2)],&g_95[(l_620 + 2)],&g_95[3],&g_95[(l_620 + 2)],&g_95[(l_620 + 2)],&g_95[3]},{&g_95[(g_374 + 1)],&g_168,&g_95[(g_374 + 1)],&g_95[(g_374 + 1)],&g_168,&g_95[(g_374 + 1)],&g_95[(g_374 + 1)]},{&g_95[3],&g_95[3],(void*)0,&g_95[3],&g_95[3],(void*)0,&g_95[3]}},{{&g_168,&g_95[(g_374 + 1)],&g_95[(g_374 + 1)],&g_168,&g_95[(g_374 + 1)],&g_95[(g_374 + 1)],&g_168},{&g_95[(l_620 + 2)],&g_95[(l_620 + 2)],(void*)0,(void*)0,&g_95[(l_620 + 2)],(void*)0,(void*)0},{&g_95[(g_374 + 1)],&g_95[(g_374 + 1)],&g_168,&g_95[(g_374 + 1)],&g_95[(g_374 + 1)],&g_168,&g_95[(g_374 + 1)]},{&g_95[(l_620 + 2)],(void*)0,(void*)0,&g_95[(l_620 + 2)],(void*)0,(void*)0,&g_95[(l_620 + 2)]},{&g_6,&g_95[(g_374 + 1)],&g_6,&g_6,&g_95[(g_374 + 1)],&g_6,&g_6},{&g_95[(l_620 + 2)],&g_95[(l_620 + 2)],&g_95[3],&g_95[(l_620 + 2)],&g_95[(l_620 + 2)],&g_95[3],&g_95[(l_620 + 2)]},{&g_95[(g_374 + 1)],&g_6,&g_6,&g_95[(g_374 + 1)],&g_6,&g_6,&g_95[(g_374 + 1)]}}};
            union U2 *l_708 = &l_682;
            int i, j, k;
            if (g_95[(g_374 + 1)])
                break;
        }
    }
    return l_723;
}







static unsigned char func_26(union U3 p_27, unsigned p_28, char * p_29, char * p_30)
{
    int *l_483[5] = {&g_6,&g_6,&g_6,&g_6,&g_6};
    int **l_484 = &l_483[4];
    char *l_487 = &g_5;
    int i;
    (*l_484) = l_483[1];
    (*g_123) ^= (safe_lshift_func_uint8_t_u_u((p_28 == (**l_484)), (**l_484)));
    return p_28;
}







static unsigned func_32(int p_33, char p_34, char * p_35, union U3 p_36)
{
    unsigned short l_476 = 0x36DDL;
    union U2 l_480 = {0};
    char *l_481 = &g_102[3].f1;
    int *l_482 = &g_374;
    (*g_123) = (*g_123);
    (*l_482) &= func_37(func_58(&g_342, l_476, (((l_476 != ((safe_unary_minus_func_int16_t_s(((safe_mod_func_uint16_t_u_u(0x0B52L, func_51(l_480, func_58(l_481, (*g_4), (&p_34 == l_481), l_481, &g_342), l_481))) || p_33))) & g_5)) && 0x1235L) | 246UL), l_481, l_481), p_33, l_476, l_481);
    return g_191[3];
}







static int func_37(char * p_38, int p_39, char p_40, char * p_41)
{
    unsigned char l_350[4];
    char *l_351[6] = {&g_102[3].f1,&g_102[3].f1,&g_102[3].f1,&g_102[3].f1,&g_102[3].f1,&g_102[3].f1};
    union U2 *l_352 = &g_72;
    short l_380 = 0x17CBL;
    int l_400[3];
    union U1 *l_406 = &g_99;
    union U1 **l_405 = &l_406;
    int *l_451 = &l_400[0];
    int i;
    for (i = 0; i < 4; i++)
        l_350[i] = 254UL;
    for (i = 0; i < 3; i++)
        l_400[i] = (-9L);
    (*g_123) ^= (p_40 <= 6UL);
    if (((((safe_sub_func_uint8_t_u_u(((g_348 == (void*)0) >= (l_350[3] ^ ((void*)0 == &g_99))), func_51(func_55(&p_40, p_40), &g_5, l_351[3]))) >= l_350[3]) <= 0xFAF4L) || p_39))
    {
        union U2 **l_353[9][1][7] = {{{(void*)0,&g_71,&g_71,(void*)0,&g_71,&g_71,(void*)0}},{{&g_71,&g_71,&g_71,(void*)0,&l_352,(void*)0,&g_71}},{{(void*)0,(void*)0,&g_71,(void*)0,(void*)0,&g_71,(void*)0}},{{&l_352,(void*)0,&g_71,&g_71,&g_71,(void*)0,&l_352}},{{&g_71,(void*)0,&g_71,&g_71,(void*)0,&g_71,&g_71}},{{&l_352,&g_71,&g_71,&g_71,&l_352,&g_71,&l_352}},{{(void*)0,&g_71,&g_71,(void*)0,&g_71,&g_71,(void*)0}},{{&g_71,&g_71,&g_71,(void*)0,&l_352,(void*)0,&g_71}},{{(void*)0,(void*)0,&g_71,(void*)0,(void*)0,&g_71,(void*)0}}};
        int i, j, k;
        l_352 = l_352;
    }
    else
    {
        unsigned l_356[10][1] = {{0x35907AE6L},{4UL},{0xAC9608DBL},{0xAC9608DBL},{4UL},{0x35907AE6L},{4UL},{0xAC9608DBL},{0xAC9608DBL},{4UL}};
        union U2 l_371 = {0};
        char *l_372 = &g_5;
        char l_379 = (-1L);
        union U2 **l_392[10] = {&l_352,&l_352,(void*)0,(void*)0,&l_352,&l_352,&l_352,(void*)0,(void*)0,&l_352};
        int l_452 = 0xE7CF8928L;
        int **l_455 = &l_451;
        int ***l_454 = &l_455;
        unsigned l_466 = 4294967295UL;
        short l_471[5];
        int *l_472 = &g_95[2];
        int i, j;
        for (i = 0; i < 5; i++)
            l_471[i] = (-5L);
        g_123 = &g_191[2];
    }
    (*l_451) = (safe_rshift_func_int16_t_s_s(func_51((*g_71), &g_5, l_351[3]), 11));
    return (*g_123);
}







static char * func_42(unsigned short p_43, union U2 p_44, char p_45)
{
    char l_69 = 7L;
    int *l_190 = &g_191[3];
    union U2 **l_257[3][8] = {{&g_71,&g_71,&g_71,&g_71,&g_71,&g_71,&g_71,&g_71},{&g_71,&g_71,&g_71,&g_71,&g_71,&g_71,&g_71,&g_71},{&g_71,&g_71,&g_71,&g_71,&g_71,&g_71,&g_71,&g_71}};
    union U2 ***l_256 = &l_257[0][7];
    union U3 **l_271 = &g_89[6];
    unsigned l_275 = 4294967290UL;
    int i, j;
    return &g_5;
}







static int func_51(union U2 p_52, char * p_53, char * p_54)
{
    unsigned char l_178 = 0x70L;
    int *l_187 = &g_6;
    unsigned l_188 = 4294967289UL;
    int l_189 = (-6L);
    for (g_99.f1 = 21; (g_99.f1 <= 33); g_99.f1++)
    {
        for (g_168 = 0; (g_168 >= (-8)); --g_168)
        {
            int *l_173 = &g_95[6];
            (*l_173) ^= ((*p_53) || (4294967295UL <= (safe_lshift_func_int8_t_s_u((*g_4), g_102[3].f1))));
        }
    }
    l_189 ^= (safe_sub_func_uint8_t_u_u((6UL | (((void*)0 != &g_5) && (l_178 <= ((safe_rshift_func_uint8_t_u_u((((safe_add_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((g_99.f0 & (safe_lshift_func_uint8_t_u_u(l_178, (l_187 == &g_168)))), (*l_187))), (*l_187))) == 255UL) | l_188), 7)) >= g_5)))), 0x25L));
    return (*l_187);
}







static union U2 func_55(char * p_56, int p_57)
{
    union U0 *l_163 = &g_102[3];
    int *l_164 = &g_95[6];
    union U2 l_165 = {0};
    (*l_164) ^= (l_163 != (*g_114));
    return l_165;
}







static char * func_58(char * p_59, char p_60, char p_61, char * p_62, char * p_63)
{
    unsigned char l_135[4] = {0xEBL,0xEBL,0xEBL,0xEBL};
    int *l_143 = &g_6;
    char l_148 = 0x55L;
    char *l_162 = &g_5;
    int i;
    if ((((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(g_99.f0, (l_135[2] | (((!l_135[2]) | p_61) >= g_102[3].f1)))), (p_61 | (-4L)))) <= g_102[3].f1) & ((-1L) | (-1L))))
    {
        for (g_99.f1 = (-20); (g_99.f1 < 24); ++g_99.f1)
        {
            union U2 ***l_138 = (void*)0;
            union U2 **l_140 = &g_71;
            union U2 ***l_139 = &l_140;
            (*l_139) = &g_71;
        }
    }
    else
    {
        int *l_145[5];
        int l_149 = 4L;
        int i;
        for (i = 0; i < 5; i++)
            l_145[i] = &g_95[6];
        for (p_60 = 0; (p_60 > (-6)); p_60 = safe_sub_func_uint32_t_u_u(p_60, 4))
        {
            int **l_144 = &g_123;
            (*l_144) = l_143;
            (*l_144) = l_145[2];
        }
        for (p_60 = (-20); (p_60 >= 28); p_60 = safe_add_func_int32_t_s_s(p_60, 9))
        {
            l_148 &= p_61;
        }
        g_99.f0 = l_149;
    }
    for (l_148 = 26; (l_148 < (-12)); --l_148)
    {
        union U1 *l_152 = &g_99;
        int l_159 = 0xAB44AF1EL;
        l_152 = l_152;
        for (p_60 = (-29); (p_60 == 23); ++p_60)
        {
            int *l_160 = &g_95[6];
            (*l_160) |= ((((safe_mod_func_uint32_t_u_u(l_159, g_102[3].f1)) == (+(~0xA0F4C758L))) & (g_102[3].f0 <= l_159)) & 1L);
        }
        for (l_159 = 6; (l_159 >= 2); l_159 -= 1)
        {
            int *l_161 = &g_95[7];
            int i;
            (*l_161) = 0x0CF7338CL;
            g_89[(l_159 + 1)] = &g_87;
            (*l_161) &= (*l_143);
            (*l_161) ^= p_60;
        }
    }
    return l_162;
}







static char * func_64(char * p_65, char * p_66, short p_67, int p_68)
{
    union U2 *l_70 = (void*)0;
    int l_73 = 0xCCEA59F7L;
    unsigned l_93 = 4294967288UL;
    union U0 *l_113[4] = {&g_102[4],&g_102[4],&g_102[4],&g_102[4]};
    union U0 **l_112[6][2] = {{&l_113[1],&l_113[1]},{&l_113[1],&l_113[1]},{&l_113[1],&l_113[1]},{&l_113[1],&l_113[1]},{&l_113[1],&l_113[1]},{&l_113[1],&l_113[1]}};
    int i, j;
    g_71 = l_70;
    l_73 = g_6;
    for (p_68 = (-12); (p_68 < 16); ++p_68)
    {
        char l_76 = 0x2DL;
        union U3 *l_86 = &g_87;
        unsigned l_109 = 4294967293UL;
        if (l_76)
        {
            int l_81[10][4] = {{(-1L),0L,(-1L),(-1L)},{0L,0L,2L,0L},{0L,(-1L),(-1L),(-1L)},{2L,(-1L),2L,2L},{(-1L),(-1L),0L,(-1L)},{(-1L),2L,2L,(-1L)},{2L,(-1L),2L,2L},{(-1L),(-1L),0L,(-1L)},{(-1L),2L,2L,(-1L)},{2L,(-1L),2L,2L}};
            union U3 *l_96 = (void*)0;
            int *l_120 = &g_95[6];
            int *l_122 = &l_73;
            char *l_124 = &g_5;
            int i, j;
            if ((~(1UL == l_76)))
            {
                union U1 *l_98 = &g_99;
                int *l_107 = &g_95[7];
                int **l_121 = &l_107;
                for (l_76 = 0; (l_76 >= (-22)); l_76 = safe_sub_func_int8_t_s_s(l_76, 3))
                {
                    unsigned char l_90 = 0xB3L;
                    if ((~(safe_rshift_func_uint8_t_u_s(l_81[9][2], 4))))
                    {
                        union U2 ***l_82 = (void*)0;
                        union U2 **l_84 = &g_71;
                        union U2 ***l_83 = &l_84;
                        (*l_83) = &g_71;
                        if (l_81[9][2])
                            break;
                        if (l_81[6][1])
                            break;
                    }
                    else
                    {
                        union U2 *l_85 = &g_72;
                        union U3 **l_88[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_88[i] = &l_86;
                        l_70 = l_85;
                        g_89[6] = l_86;
                        if (l_90)
                            continue;
                    }
                }
                for (l_73 = 0; (l_73 < (-30)); --l_73)
                {
                    union U1 *l_100 = &g_99;
                    union U0 *l_101[8] = {&g_102[3],&g_102[0],&g_102[3],&g_102[0],&g_102[3],&g_102[0],&g_102[3],&g_102[0]};
                    int i;
                    if ((l_93 == ((255UL && (g_6 | p_68)) >= p_68)))
                    {
                        return &g_5;
                    }
                    else
                    {
                        int *l_94 = &g_95[6];
                        (*l_94) |= g_5;
                        if (g_95[1])
                            break;
                    }
                    if (p_67)
                    {
                        int *l_97 = &g_95[6];
                        (*l_97) ^= ((void*)0 == l_96);
                        l_100 = l_98;
                    }
                    else
                    {
                        union U0 **l_103 = &l_101[5];
                        int *l_105 = &g_95[6];
                        int **l_104 = &l_105;
                        (*l_103) = l_101[5];
                        (*l_104) = &g_95[6];
                    }
                }
                (*l_121) = l_120;
                for (l_73 = 0; (l_73 <= 8); l_73 += 1)
                {
                    g_123 = l_122;
                    (*l_121) = l_120;
                    return l_124;
                }
            }
            else
            {
                union U3 **l_125 = &g_89[7];
                int l_126 = (-8L);
                (*l_125) = l_86;
                if (l_126)
                    continue;
                if (p_67)
                    break;
            }
            for (p_67 = 0; (p_67 < 27); p_67 = safe_add_func_int32_t_s_s(p_67, 9))
            {
                char l_129 = (-1L);
                if ((*g_123))
                    break;
                (*l_122) = ((l_129 & 1UL) & (p_67 || (0x386AL > 9UL)));
            }
        }
        else
        {
            int **l_130 = &g_123;
            (*l_130) = &p_68;
        }
    }
    return &g_5;
}





int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_95[i], "g_95[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_99.f0, "g_99.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_102[i].f0, "g_102[i].f0", print_hash_value);
        transparent_crc(g_102[i].f1, "g_102[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_168, "g_168", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_191[i], "g_191[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_342, "g_342", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    transparent_crc(g_567, "g_567", print_hash_value);
    transparent_crc(g_583, "g_583", print_hash_value);
    transparent_crc(g_722, "g_722", print_hash_value);
    transparent_crc(g_793, "g_793", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_892[i], "g_892[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1013[i][j], "g_1013[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1042, "g_1042", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
