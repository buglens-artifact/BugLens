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
   short f0;
   int f1;
   unsigned f2;
   unsigned f3;
   int f4;
   int f5;
   unsigned short f6;
   unsigned short f7;
   unsigned short f8;
};

struct S1 {
   unsigned f0;
   unsigned char f1;
};

union U2 {
   short f0;
   unsigned f1;
   struct S1 f2;
};

union U3 {
   int f0;
   int f1;
   struct S0 f2;
   char * f3;
   int f4;
};

union U4 {
   char * f0;
   struct S0 f1;
   char f2;
   int f3;
   unsigned f4;
};

union U5 {
   char f0;
};

union U6 {
   struct S1 f0;
   struct S1 f1;
   struct S0 f2;
   struct S1 f3;
   struct S0 f4;
};

union U7 {
   unsigned short f0;
   struct S0 f1;
   char f2;
};

union U8 {
   struct S1 f0;
};

union U9 {
   unsigned f0;
   char f1;
   char * f2;
};


static unsigned short g_45 = 8UL;
static char g_47 = 0x18L;
static int g_50 = 0x910C3349L;
static int g_62 = 0xCDCC21D2L;
static union U4 g_67 = {0};
static unsigned g_103 = 4294967295UL;
static struct S1 g_128 = {0x29090F62L,255UL};
static unsigned short g_145 = 1UL;
static union U9 g_149 = {0UL};
static union U9 *g_148 = &g_149;
static union U9 *g_150 = (void*)0;
static union U4 *g_182 = &g_67;
static union U4 **g_181 = &g_182;
static unsigned short g_252 = 65530UL;
static struct S0 g_257 = {0xA0E6L,0x0F138F81L,4294967295UL,0xD9C254B3L,0x5FCE81A1L,-7L,0UL,65532UL,0xE6EAL};
static int g_259 = 1L;
static int g_270 = 0x473C7CBCL;
static int g_272 = 0xDBE24880L;
static unsigned g_287 = 0x4D960969L;
static union U2 g_291 = {0x9B7EL};
static unsigned g_326 = 0UL;
static int *g_332 = &g_62;
static union U5 g_347 = {1L};
static union U6 g_350 = {{4294967293UL,246UL}};
static unsigned g_495 = 0UL;
static union U7 g_536 = {0x32B3L};
static struct S1 *g_542 = &g_350.f0;
static struct S1 **g_541 = &g_542;
static unsigned g_663 = 0x96C2E0F3L;
static int g_678 = (-1L);
static unsigned g_681 = 4294967289UL;
static union U2 *g_686 = &g_291;
static unsigned g_716 = 0UL;
static unsigned char g_722 = 0x22L;
static short g_758 = 0L;
static char g_766 = 0x15L;
static unsigned short g_769 = 0x6059L;
static char g_788 = 0xBEL;
static short g_800 = 4L;
static unsigned g_806 = 0x7E3D1B74L;
static unsigned g_1002 = 4294967295UL;
static unsigned g_1083 = 9UL;
static union U6 g_1086 = {{4294967295UL,0xBDL}};
static union U7 g_1087 = {0x55F7L};
static union U8 g_1095 = {{0x1E085163L,0xEBL}};
static union U3 g_1098 = {0xBEC53A6CL};
static union U3 *g_1097 = &g_1098;
static int g_1157 = 0x2062805EL;
static unsigned g_1198 = 1UL;
static union U8 **g_1207 = (void*)0;
static unsigned g_1480 = 0x7CE4893EL;
static union U6 *g_1490 = &g_350;
static int **g_1494 = &g_332;
static int ***g_1493 = &g_1494;
static struct S0 *g_1641 = &g_257;
static struct S0 **g_1640 = &g_1641;
static int g_1670 = 1L;
static unsigned g_1676 = 0UL;
static unsigned g_1768 = 0x71B7A8D2L;
static unsigned short g_1827 = 65529UL;
static unsigned g_1889 = 0x0EADBE76L;
static char *g_1919 = &g_347.f0;
static char **g_1918 = &g_1919;
static char ***g_1917 = &g_1918;
static union U5 *g_1979 = &g_347;
static short g_2096 = 0x4E25L;
static unsigned g_2098 = 1UL;
static unsigned short g_2211 = 0x8840L;
static short g_2309 = 0x4783L;
static char g_2344 = 0x6CL;
static unsigned char g_2360 = 0x46L;
static int g_2461 = 1L;
static short g_2464 = 0L;
static unsigned g_2465 = 0xF302E4C5L;
static unsigned char g_2642 = 0UL;
static union U7 **g_2715 = (void*)0;
static unsigned g_2819 = 6UL;
static unsigned g_2833 = 0x0A8F946EL;
static unsigned g_2852 = 4294967295UL;



static int func_1(void);
static struct S0 func_2(struct S1 p_3, union U9 p_4);
static union U9 func_6(char * p_7);
static char * func_8(char * p_9, union U5 p_10);
static union U5 func_12(struct S1 p_13, char * p_14, char * p_15, char * p_16);
static struct S1 func_17(struct S1 p_18, unsigned short p_19, union U4 p_20, char * p_21, int p_22);
static struct S1 func_23(char * p_24, char * p_25);
static char * func_26(union U9 p_27, union U6 p_28, union U7 p_29, char * p_30, unsigned char p_31);
static union U9 func_32(union U5 p_33, char * p_34, int p_35, char * p_36, unsigned char p_37);
static union U5 func_38(unsigned char p_39, int p_40, char * p_41);
static int func_1(void)
{
    struct S1 l_5 = {1UL,255UL};
    char *l_11 = (void*)0;
    char *l_46 = &g_47;
    union U4 l_1204 = {0};
    struct S0 *l_2714 = &g_1098.f2;
    char l_2733 = 0L;
    int l_2785 = 0x36047BEDL;
    int l_2792 = 0xABBBFFEEL;
    unsigned short l_2826 = 65535UL;
    int *l_2860 = &g_62;
    (*l_2714) = func_2(l_5, func_6(func_8(l_11, func_12(func_17(func_23(func_26(func_32(func_38(l_5.f0, ((safe_unary_minus_func_int32_t_s((0L != 0x37L))) | (safe_add_func_uint16_t_u_u((1UL & l_5.f0), g_45))), l_46), &g_47, l_5.f1, &g_47, l_5.f0), g_1086, g_1087, l_11, g_1086.f0.f0), &g_47), l_5.f0, l_1204, &g_788, l_5.f0), &g_47, &g_47, &g_47))));

    ;

    ;
    ;
    ;
    ;
    ;
    ;
    if (l_5.f1)
    {
        int *l_2716 = &g_50;
        (*l_2716) &= ((void*)0 == g_2715);
    }
    else
    {
        unsigned l_2717 = 0x9F063C49L;
        char ***l_2731 = &g_1918;
        int l_2758 = 0x5B54A950L;
        int l_2781 = (-6L);
        int l_2848 = 6L;
        unsigned l_2857 = 0x88CBEF5DL;
        int *l_2859 = &g_50;
        if (l_2717)
        {
            unsigned l_2726 = 0x53584F9FL;
            int *l_2732 = &g_50;
            (*l_2732) &= (safe_add_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s(l_5.f0, 5)) || (safe_mul_func_uint8_t_u_u(l_2726, (((safe_mod_func_uint16_t_u_u(g_257.f3, (safe_add_func_int16_t_s_s(l_2726, (!0x8763L))))) || (l_2731 != &g_1918)) && g_257.f3)))) == 0L), g_257.f2));
        }
        else
        {
            int *l_2734 = &g_50;
            int *l_2735 = &g_272;
            int *l_2736 = &g_62;
            int *l_2737 = (void*)0;
            int *l_2738 = &g_272;
            int *l_2739 = &g_50;
            int *l_2740 = &g_62;
            int *l_2741 = &g_50;
            int *l_2742 = &g_270;
            int *l_2743 = &g_272;
            int *l_2744 = &g_50;
            int *l_2745 = &g_270;
            int *l_2746 = &g_272;
            int *l_2747 = (void*)0;
            int *l_2748 = (void*)0;
            int *l_2749 = &g_62;
            int *l_2750 = &g_50;
            int *l_2751 = &g_270;
            int *l_2752 = &g_50;
            int l_2753 = 8L;
            int *l_2754 = &g_50;
            int *l_2755 = &g_50;
            int *l_2756 = &g_272;
            int *l_2757 = &g_270;
            int *l_2759 = &g_272;
            int *l_2760 = &g_50;
            int *l_2761 = &g_50;
            int *l_2762 = &g_50;
            int *l_2763 = (void*)0;
            int *l_2764 = &g_270;
            int *l_2765 = &g_50;
            int *l_2766 = (void*)0;
            int *l_2767 = (void*)0;
            int *l_2768 = &g_62;
            int *l_2769 = (void*)0;
            int *l_2770 = &g_270;
            int *l_2771 = (void*)0;
            int *l_2772 = (void*)0;
            int *l_2773 = &l_2758;
            int *l_2774 = &g_50;
            int *l_2775 = &g_62;
            int *l_2776 = &l_2753;
            int *l_2777 = &g_270;
            int *l_2778 = (void*)0;
            int *l_2779 = &g_62;
            int *l_2780 = &g_62;
            int *l_2782 = &l_2781;
            int *l_2783 = &g_272;
            int *l_2784 = (void*)0;
            int *l_2786 = &g_62;
            int *l_2787 = &g_62;
            int *l_2788 = (void*)0;
            int *l_2789 = &l_2781;
            int *l_2790 = &g_50;
            int *l_2791 = (void*)0;
            int *l_2793 = &g_272;
            int *l_2794 = &g_62;
            int *l_2795 = (void*)0;
            int *l_2796 = &l_2785;
            int *l_2797 = (void*)0;
            int *l_2798 = (void*)0;
            int l_2799 = 5L;
            int *l_2800 = &l_2781;
            int *l_2801 = (void*)0;
            int *l_2802 = &g_272;
            int *l_2803 = &l_2785;
            int l_2804 = 8L;
            int *l_2805 = &l_2781;
            int *l_2806 = (void*)0;
            int *l_2807 = &l_2804;
            int *l_2808 = (void*)0;
            int *l_2809 = &g_272;
            int *l_2810 = &l_2785;
            int *l_2811 = &l_2758;
            int *l_2812 = &g_270;
            int *l_2813 = (void*)0;
            int *l_2814 = &l_2758;
            int *l_2815 = &g_272;
            int *l_2816 = &g_272;
            int *l_2817 = &l_2792;
            int *l_2818 = &g_62;
            g_2819++;
            (*g_541) = (*g_541);
            if (((safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(l_2717, (&g_347 == &g_347))), g_1098.f2.f2)) <= ((0xDD55L | (0x08L && (-1L))) && l_2785)))
            {
                int l_2831 = 0x22BEAD87L;
                int l_2832 = 0x921EFB9BL;
                (*l_2757) = l_2792;
                (*l_2809) = l_2792;
                l_2826++;
                for (g_103 = 0; (g_103 < 38); g_103 = safe_add_func_uint8_t_u_u(g_103, 8))
                {
                    unsigned l_2836 = 0UL;
                    int l_2839 = 0xD1131E5BL;
                    int l_2840 = (-2L);
                    int l_2841 = 0L;
                    if (l_2831)
                    {
                        ++g_2833;
                        (*l_2736) |= 0L;
                        if (l_2831)
                            break;
                    }
                    else
                    {
                        --l_2836;
                        return l_2733;


                    }
                    (**g_1493) = &l_2785;

                    ;
                    (**g_1493) = &l_2832;

                    ;
                    if ((g_257.f2 != (&g_686 == (void*)0)))
                    {
                        (*l_2790) = l_2836;
                    }
                    else
                    {
                        unsigned l_2842 = 0xE31AD547L;
                        ++l_2842;
                        (*g_1494) = (void*)0;

                        ;
                    }

                    ;
                }


            }
            else
            {
                char l_2847 = 0xFFL;
                int l_2849 = 0L;
                int l_2850 = 1L;
                int l_2851 = 0xFCDF6CF4L;
                (*g_1917) = (*g_1917);
                l_2785 ^= (safe_lshift_func_uint8_t_u_u(g_1827, 3));
                g_2852++;
            }
            return l_5.f1;
        }
        for (g_800 = 0; (g_800 == (-23)); g_800 = safe_sub_func_uint16_t_u_u(g_800, 3))
        {
            int *l_2858 = &l_2792;
            (*l_2858) = ((((l_2857 > l_2781) ^ (g_1098.f2.f2 >= 2UL)) == g_1889) && (+0x20L));
        }
        (*l_2859) |= (~0xCBC4D15FL);
    }
    (*l_2860) |= 0x204A5577L;
    (**g_1493) = &g_50;

    ;
    return (*l_2860);
}







static struct S0 func_2(struct S1 p_3, union U9 p_4)
{
    char l_2711 = (-1L);
    int l_2712 = 0L;
    struct S0 l_2713 = {0xF860L,2L,0xB30DB849L,0xAB29D179L,0x3540A2EEL,0x78EF7240L,0x1D0CL,0x8540L,1UL};
    l_2712 = l_2711;
    return l_2713;
}







static union U9 func_6(char * p_7)
{
    short l_1984 = 1L;
    int *l_1993 = &g_272;
    unsigned short l_1996 = 65530UL;
    struct S1 *l_1997 = &g_1095.f0;
    union U4 *l_2005 = &g_67;
    union U9 l_2027 = {4294967293UL};
    int l_2071 = 0x0D07CCDCL;
    int l_2085 = 0xCA534AD2L;
    unsigned char l_2101 = 255UL;
    unsigned short l_2225 = 0x6DD4L;
    union U8 *l_2244 = &g_1095;
    union U8 **l_2243 = &l_2244;
    int l_2351 = 0x4550B09FL;
    int l_2353 = 0x6BE4AA62L;
    union U9 **l_2373 = &g_148;
    struct S1 l_2382 = {0x89880340L,0UL};
    union U7 *l_2407 = (void*)0;
    unsigned char l_2525 = 255UL;
    unsigned l_2528 = 0UL;
    unsigned char l_2578 = 0x24L;
    struct S0 **l_2588 = (void*)0;
    union U6 **l_2672 = &g_1490;
    union U9 l_2678 = {0x02BCD823L};
    int *l_2710 = (void*)0;
    (*l_1993) = (safe_div_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(l_1984, (safe_mul_func_uint16_t_u_u(l_1984, (safe_div_func_int8_t_s_s(((*g_1917) != (*g_1917)), (safe_mod_func_uint16_t_u_u((l_1984 > (((safe_rshift_func_uint8_t_u_u(((*g_1493) != (*g_1493)), 7)) < (+(6L || l_1984))) | l_1984)), l_1984)))))))) != l_1984), 8UL));
    if ((((*l_1993) || (((*l_1993) < (*l_1993)) >= g_62)) | (((safe_sub_func_int16_t_s_s((*l_1993), l_1996)) <= ((*g_541) == l_1997)) || (safe_rshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u((*l_1993), (*l_1993))), 10)))))
    {
        union U4 *l_2004 = &g_67;
        int l_2006 = 1L;
        int l_2086 = 0x542FF165L;
        char ***l_2130 = (void*)0;
        short l_2132 = 0xC3E2L;
        int l_2284 = 0xA0784252L;
        int l_2316 = 0xD9FA2EAAL;
        int l_2335 = 0xC1098029L;
        if (((safe_rshift_func_int16_t_s_s((l_2004 != l_2005), 13)) == (l_2006 & (safe_div_func_uint8_t_u_u((*l_1993), (safe_add_func_uint8_t_u_u(((*l_1993) > (*l_1993)), l_2006)))))))
        {
            unsigned short l_2016 = 65527UL;
            unsigned char l_2028 = 0x87L;
            int l_2041 = 0xCFEE612FL;
            struct S1 l_2120 = {4294967293UL,0xAFL};
            struct S0 *l_2131 = &g_257;
lbl_2104:
            (*l_1993) = l_2006;
            for (g_257.f4 = 26; (g_257.f4 < (-14)); g_257.f4 = safe_sub_func_uint16_t_u_u(g_257.f4, 8))
            {
                int ***l_2013 = &g_1494;
                int l_2048 = 0xEE0D4AACL;
                int l_2084 = 0x2FB8E54EL;
                int l_2089 = 0x0C24ABA7L;
                union U3 *l_2121 = &g_1098;
                unsigned l_2134 = 3UL;
                if (((void*)0 == l_2013))
                {
                    char l_2044 = 0xB5L;
                    int l_2047 = 3L;
                    if ((safe_add_func_int32_t_s_s(l_2016, (safe_div_func_int16_t_s_s((*l_1993), 0x492FL)))))
                    {
                        (*g_181) = (*g_181);
                        g_272 ^= ((safe_add_func_int16_t_s_s((((***g_1917) > (*p_7)) & 253UL), g_45)) ^ (safe_lshift_func_uint8_t_u_s((((0xC933L > g_257.f4) >= g_1086.f0.f1) ^ (safe_mod_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(l_2016, 0x88BBA444L)) == 0x10FA191DL), (*p_7)))), 7)));
                    }
                    else
                    {
                        return l_2027;



                                            }
                    if (l_2028)
                    {
                        int *l_2029 = &g_50;
                        (*l_1993) = (*l_1993);
                        (*g_1494) = l_2029;

                        ;
                        (**g_1494) = 0L;
                    }
                    else
                    {
                        unsigned char l_2038 = 252UL;
                        (*l_1993) = 0xBC6C3AF0L;
                        l_2041 |= ((safe_sub_func_int32_t_s_s(((safe_div_func_uint16_t_u_u(g_149.f1, (safe_sub_func_uint32_t_u_u(g_257.f1, (safe_mul_func_int16_t_s_s(g_50, l_2038)))))) == ((safe_mod_func_int32_t_s_s(l_2006, l_2038)) == 0x4CCFL)), g_800)) | (*l_1993));
                    }
                    for (g_350.f2.f3 = 17; (g_350.f2.f3 > 21); g_350.f2.f3 = safe_add_func_int16_t_s_s(g_350.f2.f3, 8))
                    {
                        l_2047 ^= (((*l_1993) & l_2044) | (safe_lshift_func_uint16_t_u_s(l_2028, 9)));
                    }
                }
                else
                {
                    unsigned l_2049 = 2UL;
                    l_2049--;
                }
                if ((safe_mod_func_uint8_t_u_u((~((g_1480 == (safe_add_func_uint16_t_u_u(g_1087.f0, g_62))) != g_270)), (safe_lshift_func_uint8_t_u_u(l_2016, 5)))))
                {
                    unsigned l_2062 = 0UL;
                    union U8 *l_2068 = &g_1095;
                    union U8 **l_2067 = &l_2068;
                    char l_2073 = 0x4AL;
                    if ((safe_mul_func_uint16_t_u_u((0x29L & 0L), ((&l_2041 == l_1993) > (((((*l_1993) & l_2062) == (safe_sub_func_uint32_t_u_u((l_2062 & (safe_div_func_uint32_t_u_u(((((((!(l_2067 == g_1207)) && (*l_1993)) || l_2028) & 0x75L) || l_2016) != l_2048), l_2016))), l_2062))) || l_2006) & g_1768)))))
                    {
                        unsigned l_2069 = 4294967287UL;
                        int l_2070 = 0x9CC349E3L;
                        int *l_2072 = &g_50;
                        int *l_2074 = &g_50;
                        int *l_2075 = (void*)0;
                        int *l_2076 = &g_62;
                        int *l_2077 = &l_2041;
                        int *l_2078 = &g_50;
                        int *l_2079 = &l_2041;
                        int *l_2080 = (void*)0;
                        int *l_2081 = (void*)0;
                        int *l_2082 = &l_2070;
                        int *l_2083 = &g_270;
                        int *l_2087 = &l_2070;
                        int *l_2088 = &g_272;
                        int *l_2090 = &l_2086;
                        int *l_2091 = &g_50;
                        int *l_2092 = &l_2084;
                        int *l_2093 = &l_2089;
                        int *l_2094 = (void*)0;
                        int *l_2095 = &g_270;
                        int *l_2097 = &l_2070;
                        if (l_2069)
                            break;
                        (*l_1993) ^= (l_2069 != l_2069);
                        g_2098++;
                    }
                    else
                    {
                        unsigned l_2114 = 0x00F4CCD5L;
                        int l_2118 = 0xAC11F189L;
                        --l_2101;
                        if (l_1996)
                            goto lbl_2104;
                        l_2118 ^= ((safe_rshift_func_int8_t_s_s(l_2006, 5)) != (((***g_1917) || (g_257.f7 ^ (l_2028 > (+(safe_mod_func_int32_t_s_s(l_2073, ((safe_rshift_func_uint16_t_u_u((g_1827 >= (safe_unary_minus_func_uint16_t_u((((safe_lshift_func_uint8_t_u_u(g_766, l_2114)) < (safe_mod_func_int16_t_s_s((safe_unary_minus_func_int32_t_s(l_2006)), l_2086))) == 1L)))), l_2114)) && 0xBFL))))))) && (*l_1993)));
                    }
                    if ((l_2073 >= ((9UL ^ (*l_1993)) & g_145)))
                    {
                        (*l_1993) = 0xD8E81FD9L;
                    }
                    else
                    {
                        int *l_2119 = &l_2006;
                        (*g_1494) = l_2119;

                        ;
                        if ((***l_2013))
                            continue;
                        (*g_332) = (g_678 == l_2062);
                    }
                    (*l_1997) = l_2120;
                }
                else
                {
                    union U3 **l_2122 = &l_2121;
                    int l_2125 = 0xC82CD09CL;
                    (*l_2122) = l_2121;
                    if ((safe_sub_func_uint32_t_u_u((l_2125 ^ 65535UL), (safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(((g_128.f0 ^ (((void*)0 != l_2130) <= ((*g_1640) == l_2131))) && 1UL), g_1095.f0.f0)), 13)))))
                    {
                        unsigned char l_2133 = 255UL;
                        l_2133 &= l_2132;
                        if (l_2089)
                            continue;
                    }
                    else
                    {
                        (**l_2013) = &l_2125;

                        ;
                        ++l_2134;
                    }


                }
            }
        }
        else
        {
            union U9 l_2137 = {4294967291UL};
            return l_2137;


                    }


        for (g_788 = 0; (g_788 != (-23)); g_788 = safe_sub_func_int16_t_s_s(g_788, 1))
        {
            unsigned short l_2140 = 65526UL;
            int l_2188 = 0L;
            int l_2191 = 0L;
            int l_2194 = 0L;
            union U2 *l_2216 = &g_291;
            int *l_2257 = &g_272;
            int *l_2258 = &l_2006;
            int *l_2259 = (void*)0;
            int *l_2260 = &g_272;
            int *l_2261 = &g_272;
            int *l_2262 = &g_272;
            int *l_2263 = &l_2086;
            int *l_2264 = &l_2085;
            int *l_2265 = (void*)0;
            int *l_2266 = &l_2194;
            int *l_2267 = &l_2191;
            int *l_2268 = &g_272;
            int *l_2269 = (void*)0;
            int *l_2270 = &l_2191;
            int *l_2271 = &g_50;
            int *l_2272 = (void*)0;
            int *l_2273 = &g_50;
            int *l_2274 = &g_62;
            int *l_2275 = &l_2006;
            int *l_2276 = (void*)0;
            int *l_2277 = (void*)0;
            int *l_2278 = &g_272;
            int *l_2279 = (void*)0;
            int *l_2280 = &l_2086;
            int *l_2281 = &g_62;
            int *l_2282 = (void*)0;
            int *l_2283 = &l_2085;
            int *l_2285 = (void*)0;
            int *l_2286 = &l_2284;
            int *l_2287 = (void*)0;
            int *l_2288 = &l_2191;
            int *l_2289 = &l_2188;
            int *l_2290 = &g_62;
            int *l_2291 = &l_2006;
            int *l_2292 = &l_2191;
            int *l_2293 = (void*)0;
            int *l_2294 = &l_2284;
            int *l_2295 = &l_2071;
            int *l_2296 = &l_2284;
            int *l_2297 = (void*)0;
            int *l_2298 = &g_50;
            int *l_2299 = &g_50;
            int *l_2300 = &g_62;
            int *l_2301 = (void*)0;
            int *l_2302 = &l_2006;
            int *l_2303 = &l_2284;
            int *l_2304 = &l_2191;
            int *l_2305 = &l_2188;
            int *l_2306 = &g_272;
            int *l_2307 = &g_62;
            int *l_2308 = &l_2191;
            int *l_2310 = &g_50;
            int *l_2311 = &l_2006;
            int *l_2312 = &g_50;
            int *l_2313 = &g_270;
            int *l_2314 = &l_2086;
            int *l_2315 = &g_272;
            int *l_2317 = &l_2188;
            int *l_2318 = &l_2194;
            int *l_2319 = &l_2284;
            int *l_2320 = &l_2284;
            int *l_2321 = &l_2284;
            int *l_2322 = &l_2191;
            int *l_2323 = &l_2086;
            int *l_2324 = &l_2086;
            int *l_2325 = &l_2071;
            int *l_2326 = &l_2086;
            int *l_2327 = &g_62;
            int *l_2328 = &g_270;
            int *l_2329 = &g_50;
            int *l_2330 = &g_62;
            int *l_2331 = (void*)0;
            int *l_2332 = &l_2191;
            int *l_2333 = &g_272;
            int *l_2334 = &l_2085;
            int *l_2336 = &l_2071;
            int *l_2337 = &l_2188;
            int *l_2338 = &g_272;
            int *l_2339 = &l_2316;
            int *l_2340 = (void*)0;
            int *l_2341 = &l_2316;
            int *l_2342 = &l_2316;
            int *l_2343 = &l_2316;
            int *l_2345 = &g_270;
            int *l_2346 = &l_2194;
            int *l_2347 = &g_62;
            int *l_2348 = &l_2085;
            int *l_2349 = &g_270;
            int *l_2350 = &g_270;
            int *l_2352 = &l_2284;
            int *l_2354 = &l_2194;
            int *l_2355 = &l_2006;
            int *l_2356 = &g_270;
            int *l_2357 = &l_2353;
            int *l_2358 = &l_2086;
            int *l_2359 = &l_2086;
            l_2140++;
            (*l_1997) = func_23(p_7, p_7);
        }
    }
    else
    {
        unsigned l_2371 = 4294967295UL;
        union U9 **l_2372 = &g_150;
        int *l_2378 = (void*)0;
        int *l_2379 = &l_2085;
        struct S1 l_2392 = {0x62F27ACAL,0x14L};
        int l_2428 = (-2L);
        char l_2441 = 0x09L;
        struct S0 l_2659 = {-1L,1L,0x9F2BD000L,0x24C50157L,0x31C0091BL,0L,65535UL,0x3950L,0x0057L};
        char l_2687 = (-3L);
        int l_2692 = (-2L);
        (*l_2379) &= (0x1B00L ^ (safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((*p_7), (l_2371 >= (l_2372 != l_2373)))) ^ 2L), (safe_lshift_func_uint8_t_u_u((((safe_sub_func_int16_t_s_s(g_1095.f0.f0, (*l_1993))) <= 0xB4DCD241L) < l_2371), g_2098)))), l_2371)));
        if ((safe_div_func_int32_t_s_s((*l_2379), (g_270 ^ (*l_1993)))))
        {
            struct S1 *l_2383 = (void*)0;
            int l_2386 = 0xDA84C39AL;
            char l_2391 = 0xFEL;
            (*l_2243) = (*l_2243);
            l_2382 = (*l_1997);
            (*l_1993) |= ((~3L) >= g_722);
            (*l_1997) = func_17((*l_1997), (g_1086.f0.f1 > (((~0xD87AL) >= (((l_2383 == (*g_541)) < (safe_lshift_func_uint16_t_u_u((l_2386 && g_2098), 6))) <= (safe_div_func_int8_t_s_s(((l_2386 < (safe_div_func_uint8_t_u_u((*l_2379), g_1095.f0.f0))) >= 0xE6ACL), l_2391)))) | 5L)), (*l_2005), p_7, l_2391);
        }
        else
        {
            int **l_2398 = &g_332;
            (*l_1993) ^= (*l_2379);
            if ((*l_1993))
            {
                l_2392 = func_23(p_7, (*g_1918));
            }
            else
            {
                unsigned char l_2399 = 0xF9L;
                for (g_663 = 29; (g_663 > 17); g_663 = safe_sub_func_uint16_t_u_u(g_663, 5))
                {
                    int *l_2397 = &g_50;
                    for (g_1087.f1.f2 = 19; (g_1087.f1.f2 <= 24); g_1087.f1.f2 = safe_add_func_uint16_t_u_u(g_1087.f1.f2, 7))
                    {
                        (**g_1493) = l_2379;

                        ;
                        (*g_1494) = l_2397;

                        ;
                        l_2398 = &l_1993;

                        ;
                        l_2399--;
                    }

                    ;
                    return (*g_148);


                                    }
                (*l_2379) = (!0x298BBD5EL);
                (**g_1640) = (*g_1641);
                (*l_1993) = (safe_mul_func_uint8_t_u_u(g_257.f1, (*p_7)));
            }
        }
lbl_2572:
        if ((*l_1993))
        {
            union U3 *l_2404 = &g_1098;
            union U3 **l_2405 = &l_2404;
            union U8 *l_2406 = (void*)0;
            union U7 *l_2408 = (void*)0;
            (*l_2405) = l_2404;
            (*l_2243) = l_2406;

            ;
            l_2408 = l_2407;
        }
        else
        {
            union U6 **l_2411 = (void*)0;
            union U6 **l_2412 = &g_1490;
            (*l_1993) ^= (safe_sub_func_uint32_t_u_u(0UL, g_806));
            (*l_2412) = (void*)0;

            ;
        }
        if ((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((*l_1993), (*l_2379))) < g_1087.f0), g_1002)))
        {
            unsigned short l_2419 = 1UL;
            int l_2456 = (-6L);
            struct S0 *l_2547 = (void*)0;
            unsigned l_2568 = 4294967286UL;
            int l_2623 = (-10L);
            int l_2626 = 3L;
            int l_2631 = (-3L);
            for (g_350.f2.f7 = 0; (g_350.f2.f7 < 50); g_350.f2.f7 = safe_add_func_int8_t_s_s(g_350.f2.f7, 1))
            {
                struct S1 **l_2470 = &l_1997;
                int l_2473 = (-1L);
                int l_2519 = 0x575443F7L;
                if (l_2419)
                {
                    int *l_2420 = (void*)0;
                    int *l_2421 = &g_270;
                    int *l_2422 = &l_2353;
                    int *l_2423 = &l_2351;
                    int *l_2424 = (void*)0;
                    int *l_2425 = &g_62;
                    int *l_2426 = &g_50;
                    int *l_2427 = &l_2353;
                    int *l_2429 = (void*)0;
                    int *l_2430 = (void*)0;
                    int *l_2431 = &l_2071;
                    int *l_2432 = &g_50;
                    int *l_2433 = &l_2071;
                    int *l_2434 = (void*)0;
                    int *l_2435 = &g_272;
                    int *l_2436 = &l_2428;
                    int *l_2437 = &l_2353;
                    int *l_2438 = &l_2085;
                    int *l_2439 = (void*)0;
                    int *l_2440 = &g_62;
                    int *l_2442 = &g_272;
                    int *l_2443 = &g_272;
                    int *l_2444 = &l_2085;
                    int *l_2445 = &g_272;
                    int *l_2446 = &l_2353;
                    int *l_2447 = &l_2071;
                    int *l_2448 = &l_2351;
                    int *l_2449 = &l_2428;
                    int *l_2450 = &l_2353;
                    int *l_2451 = &l_2353;
                    int *l_2452 = (void*)0;
                    int *l_2453 = &g_62;
                    int *l_2454 = &l_2353;
                    int *l_2455 = &l_2071;
                    int *l_2457 = (void*)0;
                    int *l_2458 = &l_2085;
                    int l_2459 = 0x1BEE7953L;
                    int *l_2460 = (void*)0;
                    int *l_2462 = &g_50;
                    int *l_2463 = &l_2456;
                    --g_2465;
                }
                else
                {
                    l_2456 = 1L;
                    (*l_2379) = (*l_2379);
                }
                if ((*l_1993))
                {
                    unsigned char l_2474 = 7UL;
                    (*l_1993) = (safe_div_func_int32_t_s_s(((((l_2470 != (void*)0) | (*l_1993)) | (((safe_div_func_int8_t_s_s((*p_7), l_2473)) > l_2473) >= (*l_2379))) ^ (!l_2474)), (safe_div_func_uint8_t_u_u(l_2474, (*p_7)))));
                }
                else
                {
                    int l_2477 = 0L;
                    int l_2478 = 0x7CB343AEL;
                    int l_2497 = 0xB577D724L;
                    struct S1 l_2520 = {0x77BAF448L,255UL};
                    if (l_2419)
                    {
                        int *l_2479 = &l_2351;
                        int *l_2480 = &g_272;
                        int *l_2481 = &l_2085;
                        int *l_2482 = &l_2456;
                        int *l_2483 = &l_2351;
                        int *l_2484 = &l_2477;
                        int *l_2485 = &g_270;
                        int *l_2486 = &g_270;
                        int *l_2487 = &l_2473;
                        int *l_2488 = &l_2477;
                        int *l_2489 = &g_62;
                        int *l_2490 = &g_50;
                        int *l_2491 = (void*)0;
                        int *l_2492 = &l_2071;
                        int *l_2493 = &l_2071;
                        int *l_2494 = &g_270;
                        int *l_2495 = &g_270;
                        int *l_2496 = (void*)0;
                        int *l_2498 = &l_2353;
                        unsigned char l_2499 = 0x8CL;
                        (*l_1993) = ((**g_1918) < (*p_7));
                        l_2499++;
                        l_2477 = (0x4F48L || (*l_2498));
                    }
                    else
                    {
                        char l_2516 = 0x7DL;
                        (*l_1993) = (safe_sub_func_int32_t_s_s((2L != ((g_2344 > (safe_mod_func_uint16_t_u_u(g_1083, (safe_sub_func_int16_t_s_s(l_2473, (((safe_mod_func_uint16_t_u_u((l_2419 <= (safe_rshift_func_int16_t_s_u(((g_800 != (safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(l_2456, l_2497)), l_2516))) != (*l_2379)), l_2473))), g_2360)) | 0xFD8DCBAAL) == l_2473)))))) == l_2473)), l_2497));
                        (*l_2379) = (-1L);
                    }
                    for (g_1087.f1.f0 = (-26); (g_1087.f1.f0 > 22); g_1087.f1.f0 = safe_add_func_int16_t_s_s(g_1087.f1.f0, 2))
                    {
                        short l_2523 = 0x145EL;
                        struct S1 l_2524 = {0xD51A8AE3L,0x54L};
                        (*l_2379) ^= l_2519;
                        l_2524 = func_17(l_2520, (3L >= (safe_rshift_func_int16_t_s_s(l_2523, l_2456))), (*g_182), (*g_1918), (*l_1993));
                    }
                    ++l_2525;
                }
                l_2519 ^= (!l_2528);
            }
            if ((!(safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s(l_2419, (safe_div_func_int16_t_s_s(((l_2456 && (*p_7)) > (~((g_1098.f0 == g_1098.f1) | ((safe_rshift_func_uint8_t_u_s((*l_2379), 5)) != (safe_div_func_uint16_t_u_u((+((safe_rshift_func_uint16_t_u_u(g_270, 7)) == (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((l_2419 < l_2419), (*l_2379))), (*l_1993))), 255UL)))), (-1L))))))), 0xA974L)))), l_2419))))
            {
                unsigned l_2557 = 1UL;
                unsigned l_2559 = 0xA134DBAFL;
                int l_2564 = 0x29991891L;
                (*g_1640) = l_2547;

                ;
                for (g_350.f2.f7 = 18; (g_350.f2.f7 < 15); g_350.f2.f7--)
                {
                    unsigned l_2552 = 0UL;
                    int l_2567 = 0x49A41454L;
                    int *l_2571 = &l_2564;
                    union U8 **l_2585 = &l_2244;
                    union U9 l_2593 = {0x25E631CEL};
                    if (((safe_mul_func_uint16_t_u_u((0x8E42L > 0x7FBBL), ((~(l_2552 && (*l_1993))) > (safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u(0xF982L, 14)), 3))))) | g_681))
                    {
                        int *l_2558 = &l_2428;
                        if (l_2557)
                            break;
                        (**g_1493) = l_2558;

                        ;
                        if (l_2559)
                            break;
                    }
                    else
                    {
                        int *l_2560 = &l_2351;
                        int *l_2561 = &l_2351;
                        int *l_2562 = &l_2351;
                        int *l_2563 = &g_50;
                        int *l_2565 = &l_2351;
                        int *l_2566 = &l_2085;
                        l_2568--;
                        if (l_2564)
                            continue;
                        l_2571 = &l_2353;

                        ;
                    }

                    ;
                    if (l_2559)
                        goto lbl_2572;
                    for (g_2461 = (-2); (g_2461 > (-9)); g_2461 = safe_sub_func_int8_t_s_s(g_2461, 2))
                    {
                        int *l_2575 = &l_2456;
                        l_2575 = &l_2567;

                        ;
                        (**g_1493) = &l_2567;

                        ;
                    }


                    if ((safe_lshift_func_int8_t_s_s(l_2578, (safe_div_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s(g_1002, (l_2585 != g_1207))), (safe_lshift_func_int16_t_s_s(((((void*)0 == l_2588) != ((safe_sub_func_uint32_t_u_u((*l_2571), (safe_mod_func_int16_t_s_s(((((g_1083 != 0x685AL) || g_287) == 0xEFE9C628L) | 4294967294UL), 0x0D63L)))) || (*l_2379))) > 0xF31DF482L), 2)))), 4L)))))
                    {
                        return l_2593;



                                            }
                    else
                    {
                        (*l_2379) |= l_2419;
                    }
                }
            }
            else
            {
                int *l_2600 = &l_2428;
                char l_2629 = (-10L);
                struct S1 l_2647 = {4294967291UL,249UL};
                struct S0 ***l_2650 = (void*)0;
                (*l_2600) ^= (safe_lshift_func_int16_t_s_u(l_2568, (g_252 < (safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s((*l_1993), (l_2419 | 0xD1345A5DL))), (*l_2379))))));
                (*l_2379) &= (*l_1993);
                if (((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint8_t_u_u((0UL != (~(g_2461 < ((*l_2379) ^ (*l_2600))))), (l_2568 || (*l_1993)))) | 0xC351L), 2)) ^ 7L))
                {
                    int *l_2605 = &g_270;
                    int *l_2606 = &g_270;
                    int *l_2607 = &l_2456;
                    int *l_2608 = &l_2456;
                    int *l_2609 = &l_2085;
                    int *l_2610 = &l_2353;
                    int *l_2611 = &g_50;
                    int *l_2612 = &l_2085;
                    int *l_2613 = &l_2428;
                    int *l_2614 = &g_62;
                    int *l_2615 = &l_2085;
                    int l_2616 = (-2L);
                    int *l_2617 = &g_272;
                    int *l_2618 = &l_2351;
                    int *l_2619 = &l_2353;
                    int *l_2620 = &g_50;
                    int *l_2621 = &l_2428;
                    int *l_2622 = &l_2085;
                    int *l_2624 = &l_2085;
                    int *l_2625 = &g_50;
                    int *l_2627 = (void*)0;
                    int *l_2628 = &g_50;
                    int *l_2630 = &g_50;
                    int *l_2632 = &g_270;
                    int *l_2633 = &l_2353;
                    int *l_2634 = &l_2428;
                    int *l_2635 = &l_2085;
                    int *l_2636 = &l_2085;
                    int *l_2637 = &l_2351;
                    int *l_2638 = &g_62;
                    int *l_2639 = &l_2071;
                    int *l_2640 = &l_2623;
                    int *l_2641 = &g_62;
                    struct S0 l_2658 = {9L,0L,0x3ABBAA1AL,0xB1925513L,-4L,0L,65531UL,0xA24EL,65535UL};
                    ++g_2642;
                    for (g_350.f2.f8 = 7; (g_350.f2.f8 == 1); g_350.f2.f8 = safe_sub_func_uint8_t_u_u(g_350.f2.f8, 2))
                    {
                        unsigned short l_2653 = 1UL;
                        union U2 **l_2654 = (void*)0;
                        union U2 **l_2655 = &g_686;
                        (*l_1997) = l_2647;
                        (*g_1494) = &l_2351;

                        ;
                        (*l_2636) &= (((safe_div_func_int16_t_s_s((&g_1640 == l_2650), g_1098.f1)) == g_145) == (safe_add_func_int16_t_s_s(l_2653, 0x31D8L)));
                        (*l_2655) = &g_291;

                        ;
                    }


                    for (g_800 = (-25); (g_800 > 6); ++g_800)
                    {
                        int l_2663 = 8L;
                        l_2659 = l_2658;
                        (*l_1993) = (safe_add_func_int8_t_s_s(((&g_1086 == (void*)0) | (safe_unary_minus_func_int32_t_s(((g_663 || l_2663) != (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(65535UL, 9)), (*l_2379))))))), l_2663));
                    }
                    for (g_536.f1.f1 = (-7); (g_536.f1.f1 == (-18)); g_536.f1.f1 = safe_sub_func_int16_t_s_s(g_536.f1.f1, 4))
                    {
                        (*l_2638) ^= (((safe_mod_func_int32_t_s_s((*l_1993), (*l_1993))) && 0x65F40CDFL) != g_252);
                        l_2672 = &g_1490;
                        (*l_1993) ^= ((safe_rshift_func_int16_t_s_u((*l_2600), 2)) | (g_769 ^ (!((*p_7) != g_1083))));
                    }
                }
                else
                {
                    union U9 *l_2677 = &g_149;
                    for (g_2098 = (-15); (g_2098 > 31); ++g_2098)
                    {
                        g_148 = l_2677;
                        (*l_1993) |= (*l_2600);
                    }
                    return l_2678;



                                    }


                if (((void*)0 == &l_2379))
                {
                    union U9 l_2679 = {0x14962439L};
                    (*l_1993) = (*l_1993);
                    return l_2679;



                                    }
                else
                {
                    unsigned char l_2686 = 3UL;
                    (*l_2379) = ((safe_add_func_int16_t_s_s(l_2419, g_252)) != (safe_add_func_uint8_t_u_u(g_1480, (0x20L || ((safe_add_func_int16_t_s_s(g_1098.f1, (l_2686 <= (*l_2379)))) <= l_2686)))));
                    (**g_1493) = &l_2631;

                    ;
                    (*l_1993) = (((g_2461 & (0x8FD79346L & (g_47 < 6L))) <= l_2687) <= (g_758 <= ((safe_mod_func_int16_t_s_s((0x7AFEL < (1UL != ((safe_add_func_int32_t_s_s((*l_2379), (*g_332))) & l_2692))), (*l_1993))) & 0L)));
                    for (g_1095.f0.f0 = 3; (g_1095.f0.f0 > 19); g_1095.f0.f0 = safe_add_func_uint32_t_u_u(g_1095.f0.f0, 8))
                    {
                        return (*g_148);



                                            }
                }

                ;
            }


            (*l_2372) = &g_149;

            ;
        }
        else
        {
            short l_2705 = (-3L);
            struct S0 *l_2706 = &l_2659;
            union U9 l_2709 = {1UL};
            (*l_2379) = ((safe_mod_func_uint16_t_u_u(((*l_2379) == g_326), (safe_mod_func_int8_t_s_s((*p_7), (safe_add_func_uint8_t_u_u(g_1827, (safe_add_func_int32_t_s_s(l_2705, l_2705)))))))) || (((void*)0 == l_2706) > ((*p_7) > 0UL)));
            return l_2709;



                    }

        ;
    }

    ;
    ;
    (*g_1494) = l_2710;

    ;
    l_2351 ^= (*l_1993);
    return (**l_2373);


    }







static char * func_8(char * p_9, union U5 p_10)
{
    unsigned short l_1499 = 0UL;
    char l_1507 = 0x81L;
    int *l_1515 = &g_62;
    int l_1554 = 0xF96FB901L;
    int l_1587 = 0x3CB0AE59L;
    unsigned char l_1592 = 0x82L;
    char l_1603 = 5L;
    union U8 *l_1608 = (void*)0;
    struct S1 **l_1631 = &g_542;
    unsigned short l_1644 = 0x48D9L;
    int l_1738 = 0x4641A965L;
    unsigned short l_1898 = 0x7D1AL;
    char ***l_1920 = &g_1918;
    unsigned char l_1936 = 0xB5L;
    int l_1943 = 1L;
lbl_1974:
    if ((g_259 & p_10.f0))
    {
        unsigned l_1497 = 0xB922404EL;
        int *l_1498 = (void*)0;
        l_1499 = (safe_add_func_uint8_t_u_u(((void*)0 == g_1493), (safe_mod_func_uint32_t_u_u((&g_1098 == (void*)0), l_1497))));
    }
    else
    {
        int *l_1500 = (void*)0;
        int l_1529 = 0x9ED372D5L;
        struct S1 *l_1838 = (void*)0;
        struct S0 l_1894 = {1L,6L,4294967286UL,7UL,2L,0x6F860A3FL,0xD203L,0xDD1AL,0xD1A7L};
        char *l_1901 = &g_347.f0;
        unsigned l_1970 = 4294967295UL;
        (**g_1493) = l_1500;

        ;
lbl_1680:
        if (p_10.f0)
        {
            short l_1512 = 8L;
            int *l_1513 = (void*)0;
            int *l_1514 = &g_272;
            (*l_1514) ^= ((safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(g_257.f8, 0x716BL)), ((safe_mul_func_int8_t_s_s(l_1499, l_1499)) > (l_1499 > ((g_45 < l_1507) > (((safe_mod_func_uint8_t_u_u(254UL, ((safe_mul_func_uint16_t_u_u(((((l_1512 || p_10.f0) || p_10.f0) == p_10.f0) && l_1499), g_1087.f0)) || l_1499))) < g_1087.f0) >= 0xB1L)))))) && p_10.f0);
        }
        else
        {
            unsigned char l_1526 = 0xCBL;
            int l_1527 = 1L;
            int *l_1528 = &g_62;
            int *l_1530 = &l_1527;
            int *l_1531 = &g_272;
            int *l_1532 = &l_1529;
            int *l_1533 = &g_270;
            int *l_1534 = (void*)0;
            int *l_1535 = &l_1529;
            int *l_1536 = &g_50;
            int *l_1537 = &l_1529;
            int *l_1538 = (void*)0;
            int *l_1539 = (void*)0;
            int *l_1540 = (void*)0;
            int *l_1541 = (void*)0;
            int *l_1542 = &l_1529;
            int *l_1543 = &g_272;
            int *l_1544 = &g_62;
            int *l_1545 = &g_50;
            int *l_1546 = &g_50;
            int *l_1547 = &g_62;
            int *l_1548 = (void*)0;
            int *l_1549 = (void*)0;
            int *l_1550 = &l_1529;
            int *l_1551 = &g_270;
            int *l_1552 = &g_50;
            int *l_1553 = &l_1529;
            int *l_1555 = (void*)0;
            int *l_1556 = (void*)0;
            int *l_1557 = &g_50;
            int *l_1558 = &g_270;
            int *l_1559 = &l_1527;
            int *l_1560 = &g_272;
            int *l_1561 = &g_270;
            int *l_1562 = &l_1529;
            int *l_1563 = (void*)0;
            int *l_1564 = &g_272;
            int *l_1565 = &g_62;
            int *l_1566 = &l_1529;
            int *l_1567 = &l_1554;
            int *l_1568 = &l_1527;
            int *l_1569 = &g_272;
            int *l_1570 = (void*)0;
            int *l_1571 = &g_270;
            int *l_1572 = &g_50;
            int *l_1573 = &l_1529;
            int *l_1574 = &g_272;
            int *l_1575 = &g_270;
            int *l_1576 = &g_50;
            int *l_1577 = &g_50;
            int *l_1578 = &l_1529;
            int *l_1579 = &g_62;
            int *l_1580 = &g_50;
            int *l_1581 = &g_272;
            int *l_1582 = (void*)0;
            int *l_1583 = &l_1529;
            int *l_1584 = &l_1554;
            int *l_1585 = (void*)0;
            int *l_1586 = &g_272;
            int *l_1588 = &l_1587;
            int *l_1589 = &l_1529;
            int *l_1590 = (void*)0;
            int *l_1591 = &g_62;
            (**g_1493) = l_1515;

            ;
            l_1527 |= ((safe_rshift_func_int16_t_s_u(((((p_10.f0 == p_10.f0) != (!((g_1095.f0.f1 <= 0x21F1L) || 0L))) < (safe_lshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(p_10.f0, 0)), 0x4BL)), 0))) && (safe_lshift_func_int8_t_s_u(0x85L, 2))), (((p_10.f0 != 1UL) | l_1526) & 0x1ABBFE67L))) < l_1526);
            l_1592--;
        }
        (*l_1515) = (safe_div_func_int16_t_s_s((safe_mul_func_int8_t_s_s((0x68B1ECFEL > g_50), (0xE5DF460AL <= (safe_rshift_func_int16_t_s_s(p_10.f0, 1))))), (p_10.f0 ^ (~(((p_10.f0 < (((*l_1515) == p_10.f0) || (((*l_1515) & 65535UL) <= (*l_1515)))) || g_272) > l_1603)))));
        if (((((*l_1515) & ((p_10.f0 <= 0xC264L) == (*l_1515))) != ((0xA9L ^ ((void*)0 != l_1608)) != 0x5F506FF1L)) == (p_10.f0 == (*l_1515))))
        {
            short l_1624 = 0L;
            struct S1 **l_1632 = (void*)0;
            int *l_1643 = (void*)0;
            int l_1789 = (-2L);
            union U7 *l_1833 = &g_536;
            union U7 **l_1832 = &l_1833;
            struct S1 l_1841 = {0UL,0xEFL};
            int l_1873 = (-1L);
            int l_1878 = 0L;
            unsigned short l_1925 = 0x068AL;
            int ***l_1962 = &g_1494;
            char l_1964 = 5L;
            if (((safe_lshift_func_int16_t_s_u(((p_10.f0 == p_10.f0) <= p_10.f0), (249UL > (safe_div_func_uint16_t_u_u(g_257.f4, (safe_div_func_uint16_t_u_u((((p_10.f0 & p_10.f0) && (safe_rshift_func_int16_t_s_s((g_257.f4 | 0L), (*l_1515)))) & g_769), p_10.f0))))))) ^ 65534UL))
            {
                unsigned short l_1617 = 0x5E17L;
                l_1617++;
            }
            else
            {
                struct S1 l_1638 = {4294967290UL,247UL};
                int l_1681 = 0x075051F9L;
                int l_1682 = 0xCA1529E6L;
                int l_1713 = 3L;
                int l_1753 = 0x2B6B866EL;
                char *l_1840 = (void*)0;
                unsigned l_1961 = 5UL;
                if ((safe_rshift_func_int16_t_s_s((g_257.f2 != g_1083), (safe_lshift_func_int8_t_s_s(l_1624, 3)))))
                {
                    char l_1637 = 9L;
                    unsigned short l_1679 = 65527UL;
                    int l_1735 = (-1L);
                    int l_1740 = 0x874D3D4FL;
                    if ((safe_mod_func_int8_t_s_s(0x50L, (safe_add_func_int8_t_s_s((((((safe_mul_func_uint8_t_u_u(p_10.f0, (l_1631 == l_1632))) > g_1086.f0.f1) >= (safe_lshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u(0UL, l_1637)), g_1098.f1))) && (-1L)) > l_1624), 0x43L)))))
                    {
                        struct S1 *l_1639 = &l_1638;
                        struct S0 ***l_1642 = &g_1640;
                        (*l_1639) = l_1638;
                        (*l_1642) = g_1640;
                    }
                    else
                    {
                        l_1643 = (*g_1494);

                        ;
                    }

                    ;
                    (*l_1515) |= ((l_1644 <= g_50) == g_287);
                    if ((safe_sub_func_uint16_t_u_u(l_1637, (safe_mul_func_uint8_t_u_u(((l_1637 ^ p_10.f0) || ((safe_mod_func_int16_t_s_s(l_1638.f0, p_10.f0)) < g_663)), 0UL)))))
                    {
                        char l_1653 = 0x49L;
                        int *l_1654 = &g_270;
                        int *l_1655 = &g_270;
                        int *l_1656 = (void*)0;
                        int *l_1657 = &g_62;
                        int *l_1658 = &g_50;
                        int *l_1659 = &l_1554;
                        int *l_1660 = (void*)0;
                        int *l_1661 = &l_1554;
                        int *l_1662 = &g_62;
                        int *l_1663 = (void*)0;
                        int *l_1664 = &g_272;
                        int *l_1665 = &g_62;
                        int *l_1666 = &l_1587;
                        int *l_1667 = &l_1554;
                        int *l_1668 = &l_1554;
                        int *l_1669 = &l_1587;
                        int *l_1671 = &g_50;
                        int *l_1672 = &l_1587;
                        int *l_1673 = (void*)0;
                        int *l_1674 = &l_1529;
                        int *l_1675 = &g_62;
                        int *l_1683 = &g_272;
                        int *l_1684 = &l_1587;
                        int *l_1685 = &l_1681;
                        int *l_1686 = &l_1682;
                        int *l_1687 = &g_50;
                        int *l_1688 = (void*)0;
                        int *l_1689 = &l_1554;
                        int *l_1690 = &g_270;
                        int *l_1691 = &l_1682;
                        int *l_1692 = (void*)0;
                        int l_1693 = 1L;
                        int *l_1694 = &g_50;
                        int *l_1695 = &g_62;
                        int *l_1696 = &g_62;
                        int *l_1697 = &l_1681;
                        int *l_1698 = &g_270;
                        int *l_1699 = &l_1587;
                        int *l_1700 = &g_272;
                        int *l_1701 = &g_50;
                        int *l_1702 = &g_62;
                        int *l_1703 = &l_1529;
                        int *l_1704 = &l_1529;
                        int *l_1705 = &l_1587;
                        int *l_1706 = &l_1587;
                        int *l_1707 = &l_1682;
                        int *l_1708 = &l_1693;
                        int *l_1709 = &l_1554;
                        int *l_1710 = &l_1681;
                        int *l_1711 = &l_1693;
                        int l_1712 = 0x64EAA75CL;
                        int l_1714 = 1L;
                        int *l_1715 = (void*)0;
                        int *l_1716 = &l_1712;
                        int *l_1717 = &l_1713;
                        int *l_1718 = &g_62;
                        int *l_1719 = (void*)0;
                        int *l_1720 = &l_1713;
                        int *l_1721 = &l_1554;
                        int *l_1722 = (void*)0;
                        int *l_1723 = &l_1529;
                        int *l_1724 = (void*)0;
                        int *l_1725 = &l_1554;
                        int *l_1726 = &g_270;
                        int *l_1727 = &l_1713;
                        int *l_1728 = &g_62;
                        int *l_1729 = &l_1713;
                        int *l_1730 = &l_1693;
                        int *l_1731 = &g_50;
                        int *l_1732 = (void*)0;
                        int *l_1733 = &l_1681;
                        int *l_1734 = &g_62;
                        int *l_1736 = &l_1712;
                        int *l_1737 = (void*)0;
                        int *l_1739 = &l_1587;
                        int *l_1741 = &l_1712;
                        int *l_1742 = &g_270;
                        int *l_1743 = &l_1714;
                        int *l_1744 = &l_1712;
                        int *l_1745 = &l_1712;
                        int *l_1746 = (void*)0;
                        int *l_1747 = &l_1712;
                        int *l_1748 = &g_272;
                        int *l_1749 = &l_1738;
                        int *l_1750 = &l_1740;
                        int *l_1751 = &l_1682;
                        int *l_1752 = &l_1681;
                        int *l_1754 = &l_1738;
                        int *l_1755 = &l_1753;
                        int *l_1756 = (void*)0;
                        int *l_1757 = (void*)0;
                        int *l_1758 = &l_1738;
                        int *l_1759 = &l_1735;
                        int *l_1760 = (void*)0;
                        int *l_1761 = &l_1738;
                        int *l_1762 = &l_1554;
                        int *l_1763 = &g_272;
                        int *l_1764 = &l_1738;
                        int *l_1765 = &l_1714;
                        int *l_1766 = &l_1682;
                        int *l_1767 = &l_1753;
                        ++g_1676;
                        (*l_1661) = l_1679;
                        if (g_1086.f0.f1)
                            goto lbl_1680;
                        ++g_1768;
                    }
                    else
                    {
                        int *l_1771 = &l_1529;
                        int *l_1772 = &l_1554;
                        int *l_1773 = &g_270;
                        int *l_1774 = (void*)0;
                        int *l_1775 = &l_1738;
                        int *l_1776 = &l_1681;
                        int *l_1777 = &l_1753;
                        int *l_1778 = &l_1740;
                        int *l_1779 = &g_62;
                        int *l_1780 = &l_1681;
                        int *l_1781 = &l_1713;
                        int *l_1782 = &l_1682;
                        int *l_1783 = (void*)0;
                        int *l_1784 = (void*)0;
                        int *l_1785 = (void*)0;
                        int *l_1786 = (void*)0;
                        int *l_1787 = &l_1735;
                        int *l_1788 = (void*)0;
                        int *l_1790 = &l_1753;
                        int *l_1791 = &l_1789;
                        int *l_1792 = &l_1753;
                        int *l_1793 = &g_62;
                        int *l_1794 = &l_1735;
                        int *l_1795 = &l_1789;
                        int l_1796 = 8L;
                        int *l_1797 = &l_1682;
                        int *l_1798 = &g_62;
                        int *l_1799 = &l_1554;
                        int *l_1800 = &g_272;
                        int *l_1801 = &l_1735;
                        int *l_1802 = &g_270;
                        int *l_1803 = (void*)0;
                        int *l_1804 = &l_1735;
                        int *l_1805 = &l_1682;
                        int *l_1806 = &g_62;
                        int *l_1807 = &l_1738;
                        int *l_1808 = &l_1753;
                        int *l_1809 = &g_50;
                        int *l_1810 = &l_1713;
                        int *l_1811 = &l_1682;
                        int *l_1812 = &l_1682;
                        int *l_1813 = &l_1554;
                        int *l_1814 = &l_1735;
                        int *l_1815 = &g_270;
                        int *l_1816 = &g_62;
                        int *l_1817 = &l_1789;
                        int *l_1818 = (void*)0;
                        int *l_1819 = &l_1796;
                        int *l_1820 = &l_1587;
                        int *l_1821 = &l_1796;
                        int *l_1822 = &l_1738;
                        int *l_1823 = &l_1529;
                        int *l_1824 = &g_62;
                        int *l_1825 = (void*)0;
                        int *l_1826 = &l_1529;
                        --g_1827;
                        (*l_1815) &= (65535UL | g_257.f4);
                        (*l_1795) = 1L;
                        (*l_1824) = (safe_add_func_int32_t_s_s(0x3D16B90BL, ((((void*)0 == l_1832) != (4294967295UL <= ((+(g_806 | ((&g_150 != (void*)0) != (safe_sub_func_uint32_t_u_u((p_10.f0 && p_10.f0), 0x2FB3830BL))))) == p_10.f0))) > g_1198)));
                    }
                }
                else
                {
                    int l_1895 = (-8L);
                    for (g_350.f2.f5 = (-27); (g_350.f2.f5 <= 27); g_350.f2.f5 = safe_add_func_uint16_t_u_u(g_350.f2.f5, 1))
                    {
                        union U8 **l_1839 = &l_1608;
                        int *l_1842 = (void*)0;
                        int *l_1843 = &l_1681;
                        int *l_1844 = (void*)0;
                        int *l_1845 = &g_62;
                        int *l_1846 = &g_272;
                        int *l_1847 = (void*)0;
                        int *l_1848 = &g_270;
                        int *l_1849 = &l_1681;
                        int *l_1850 = (void*)0;
                        int l_1851 = 1L;
                        int *l_1852 = &l_1753;
                        int *l_1853 = &l_1713;
                        int *l_1854 = &l_1738;
                        int *l_1855 = (void*)0;
                        int *l_1856 = &l_1682;
                        int *l_1857 = &l_1713;
                        int *l_1858 = &l_1851;
                        int *l_1859 = &l_1753;
                        int *l_1860 = &g_272;
                        int *l_1861 = &l_1738;
                        int *l_1862 = &g_62;
                        int *l_1863 = &g_62;
                        int *l_1864 = &g_270;
                        int *l_1865 = &l_1587;
                        int *l_1866 = &g_50;
                        int *l_1867 = &l_1682;
                        int *l_1868 = &l_1682;
                        int *l_1869 = &g_62;
                        int l_1870 = 1L;
                        int *l_1871 = &l_1587;
                        int *l_1872 = &l_1529;
                        int *l_1874 = &l_1587;
                        int *l_1875 = &g_272;
                        int *l_1876 = &g_270;
                        int *l_1877 = &l_1554;
                        int *l_1879 = &l_1554;
                        int *l_1880 = &l_1554;
                        int *l_1881 = &l_1587;
                        int *l_1882 = &l_1851;
                        int *l_1883 = &l_1529;
                        int *l_1884 = &l_1529;
                        int *l_1885 = &l_1713;
                        int *l_1886 = &l_1681;
                        int *l_1887 = &l_1789;
                        int *l_1888 = &l_1529;
                        (*l_1631) = l_1838;

                        ;
                        (*l_1839) = (void*)0;
                        l_1841 = l_1638;
                        --g_1889;
                    }
                    for (g_350.f4.f1 = 0; (g_350.f4.f1 <= 13); g_350.f4.f1++)
                    {
                        (**g_1640) = l_1894;
                        l_1895 |= 0L;
                        if (p_10.f0)
                            continue;
                        (*l_1515) ^= (safe_lshift_func_int8_t_s_u((l_1898 < g_1095.f0.f1), g_495));
                    }
                }

                ;
                if ((safe_add_func_uint16_t_u_u(p_10.f0, (p_10.f0 > 0xE8E48555L))))
                {
                    return l_1901;


                }
                else
                {
                    unsigned l_1902 = 0x21E600BCL;
                    union U4 **l_1963 = &g_182;
                    if ((l_1902 <= (((safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s(g_257.f3, 0xF248L)), ((((safe_div_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((0xF0L != (g_1827 == (safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((*l_1515), ((g_1917 == l_1920) | ((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((0xEB34L == p_10.f0), l_1902)), l_1682)) == 0xC514L)))), l_1902)), l_1713)))), (-1L))), 4294967293UL)) || g_1086.f0.f1) < l_1925) & p_10.f0))) > g_766) | 0xAEC6AD46L)))
                    {
                        l_1878 &= (safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(0x08CA08EDL, (safe_sub_func_int16_t_s_s(l_1936, g_769)))) >= ((safe_rshift_func_uint8_t_u_s(p_10.f0, 1)) != (safe_add_func_int32_t_s_s((*l_1515), (((l_1902 < 4L) | (***g_1917)) | (safe_lshift_func_uint16_t_u_s(g_62, 9))))))), g_758)) & p_10.f0), l_1943)), l_1894.f4));
                    }
                    else
                    {
                        unsigned short l_1945 = 0xCF4AL;
                        l_1878 &= (safe_unary_minus_func_int16_t_s((*l_1515)));
                        (*g_1494) = (*g_1494);
                        l_1945 = 0x0D004C21L;
                    }
                    for (g_495 = 0; (g_495 >= 51); ++g_495)
                    {
                        char **l_1948 = &l_1840;
                        l_1948 = &p_9;

                        ;
                    }
                    l_1638 = l_1638;
                    if (((safe_mod_func_int16_t_s_s(((((((!(safe_sub_func_int8_t_s_s((4294967295UL && (p_10.f0 ^ (safe_sub_func_uint32_t_u_u(g_1670, (l_1838 == (void*)0))))), g_257.f7))) & l_1713) & ((safe_rshift_func_uint16_t_u_s((l_1682 || (l_1682 && p_10.f0)), g_50)) & (*l_1515))) && p_10.f0) >= 0xE50B15AFL) && p_10.f0), l_1682)) && 1L))
                    {
                        g_62 |= (((g_1086.f0.f1 | ((safe_add_func_uint8_t_u_u(((g_1095.f0.f1 >= (~p_10.f0)) & p_10.f0), l_1961)) < (l_1962 == &g_1494))) || ((((l_1963 == &g_182) > l_1964) ^ g_1002) < 0L)) & g_1095.f0.f1);
                        (**g_1493) = &l_1753;

                        ;
                    }
                    else
                    {
                        (*l_1515) = (safe_lshift_func_uint16_t_u_s(g_1087.f2, 1));
                    }

                    ;
                }

                ;
            }


            ;
        }
        else
        {
            unsigned short l_1967 = 0x2FA8L;
            union U8 **l_1971 = &l_1608;
            (*l_1515) = p_10.f0;
            --l_1967;
            (*l_1515) = (+l_1970);
            (*l_1971) = l_1608;
        }


    }
    for (g_1095.f0.f0 = 0; (g_1095.f0.f0 >= 54); g_1095.f0.f0++)
    {
        int *l_1975 = &g_62;
        struct S0 l_1976 = {0xBE1EL,0xBA1050EEL,3UL,1UL,0xD49BFEF9L,9L,0UL,65535UL,0x8F1CL};
        struct S1 l_1977 = {4294967295UL,0xB1L};
        struct S1 *l_1978 = &g_350.f0;
        if (g_50)
            goto lbl_1974;
        (*g_1494) = l_1975;

        ;
        (*g_1641) = l_1976;
        (*l_1978) = l_1977;

    }
    g_1979 = (void*)0;

    ;
    return (**g_1917);


}







static union U5 func_12(struct S1 p_13, char * p_14, char * p_15, char * p_16)
{
    short l_1250 = (-6L);
    union U5 l_1259 = {0x84L};
    int l_1309 = 2L;
    int l_1314 = (-3L);
    int l_1446 = 0xD1E0BA66L;
    int l_1467 = 7L;
    int *l_1486 = &g_270;
    for (g_1086.f4.f0 = 13; (g_1086.f4.f0 <= 18); g_1086.f4.f0 = safe_add_func_int16_t_s_s(g_1086.f4.f0, 3))
    {
        char l_1251 = 0x61L;
        int l_1276 = 0x081BE95CL;
        union U3 **l_1287 = (void*)0;
        char *l_1330 = &l_1259.f0;
        char **l_1329 = &l_1330;
        char ***l_1328 = &l_1329;
        struct S0 l_1344 = {4L,0x34498E1DL,0x35AF4FE7L,0x809D96D4L,1L,-1L,0x7794L,65526UL,2UL};
        union U8 *l_1485 = &g_1095;
        union U8 **l_1484 = &l_1485;
        for (g_1095.f0.f0 = 11; (g_1095.f0.f0 > 9); --g_1095.f0.f0)
        {
            unsigned short l_1241 = 0xD2D9L;
            union U5 *l_1283 = &g_347;
            int *l_1483 = &g_62;
            if ((safe_lshift_func_int16_t_s_u(g_45, 5)))
            {
                unsigned char l_1227 = 0x4FL;
                int l_1260 = 4L;
                if ((l_1227 != p_13.f0))
                {
                    unsigned short l_1244 = 65527UL;
                    if (p_13.f1)
                        break;
                    if (g_326)
                    {
                        int *l_1228 = &g_62;
                        int *l_1229 = &g_50;
                        int *l_1230 = &g_272;
                        int *l_1231 = (void*)0;
                        int *l_1232 = &g_272;
                        int *l_1233 = &g_270;
                        int *l_1234 = &g_270;
                        int *l_1235 = &g_270;
                        int *l_1236 = &g_62;
                        int *l_1237 = &g_270;
                        int *l_1238 = &g_62;
                        int *l_1239 = &g_50;
                        int *l_1240 = (void*)0;
                        --l_1241;
                        --l_1244;
                        g_536.f1 = g_257;

                    }
                    else
                    {
                        int *l_1247 = &g_270;
                        int *l_1252 = &g_50;
                        (*l_1247) = p_13.f0;
                        (*l_1252) &= ((safe_mod_func_int8_t_s_s(l_1250, l_1251)) == (*l_1247));
                    }
                }
                else
                {
                    union U5 *l_1255 = &g_347;
                    for (g_291.f1 = (-24); (g_291.f1 <= 32); g_291.f1 = safe_add_func_int8_t_s_s(g_291.f1, 5))
                    {
                        union U5 **l_1256 = (void*)0;
                        union U5 **l_1257 = &l_1255;
                        int *l_1258 = &g_50;
                        (*l_1257) = l_1255;
                        (*l_1258) |= g_291.f1;
                        return g_347;

                                            }

                    return l_1259;

                                    }
                l_1260 ^= (l_1250 ^ g_1002);
            }
            else
            {
                int l_1263 = 0x4A2BF407L;
                struct S0 **l_1273 = (void*)0;
                struct S0 *l_1275 = &g_257;
                struct S0 **l_1274 = &l_1275;
                union U4 *l_1282 = &g_67;
                int l_1288 = 0xFB06963EL;
                int l_1301 = 5L;
                unsigned short l_1322 = 0xD19BL;
                int l_1380 = 0x8F57F592L;
                int l_1410 = 0x9ADA6394L;
                int l_1453 = (-1L);
                int l_1461 = 0x97B92492L;
                for (g_769 = 17; (g_769 != 43); g_769 = safe_add_func_int16_t_s_s(g_769, 5))
                {
                    unsigned l_1267 = 0xBE222EF4L;
                    if (g_1087.f2)
                    {
                        int *l_1264 = &g_50;
                        l_1263 = p_13.f1;
                        (*l_1264) ^= g_287;
                        (*l_1264) ^= ((safe_rshift_func_int16_t_s_u(((p_13.f0 > (p_13.f0 < l_1267)) && l_1267), (((safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(p_13.f0, (&g_291 == (void*)0))), 2)) && (*p_14)) < g_1098.f4))) || g_257.f0);
                    }
                    else
                    {
                        int *l_1272 = &g_272;
                        (*l_1272) ^= ((g_252 | g_257.f0) ^ g_681);
                    }
                }
                (*l_1274) = (void*)0;

                ;
                if ((l_1276 <= (safe_rshift_func_uint8_t_u_s((l_1263 & (!(((((g_716 || (safe_unary_minus_func_int16_t_s((safe_lshift_func_int8_t_s_s(((p_13.f0 < 5L) > (l_1282 == (*g_181))), 1))))) & (!7L)) == (p_13.f0 <= p_13.f0)) < g_1095.f0.f1) & (*p_15)))), l_1276))))
                {
                    union U5 **l_1284 = &l_1283;
                    int l_1297 = 0x339EAFE9L;
                    (*l_1284) = l_1283;
                    if ((g_495 <= (&g_1097 == l_1287)))
                    {
                        int *l_1289 = (void*)0;
                        int *l_1290 = &g_50;
                        int *l_1291 = (void*)0;
                        int *l_1292 = &g_270;
                        int *l_1293 = (void*)0;
                        int *l_1294 = &l_1276;
                        int *l_1295 = &g_50;
                        int *l_1296 = &g_272;
                        int *l_1298 = (void*)0;
                        int *l_1299 = &g_62;
                        int *l_1300 = &l_1288;
                        int *l_1302 = &l_1301;
                        int *l_1303 = &g_62;
                        int *l_1304 = &l_1276;
                        int *l_1305 = &g_62;
                        int *l_1306 = &l_1301;
                        int *l_1307 = (void*)0;
                        int *l_1308 = &g_270;
                        int *l_1310 = &l_1276;
                        int *l_1311 = (void*)0;
                        int *l_1312 = &g_272;
                        int *l_1313 = (void*)0;
                        int *l_1315 = &g_62;
                        int *l_1316 = &g_50;
                        int *l_1317 = &l_1309;
                        int *l_1318 = (void*)0;
                        int *l_1319 = &g_270;
                        int *l_1320 = (void*)0;
                        int *l_1321 = (void*)0;
                        int **l_1325 = &l_1312;
                        --l_1322;
                        (*l_1325) = l_1294;

                        ;
                    }
                    else
                    {
                        int *l_1335 = (void*)0;
                        int *l_1336 = &l_1301;
                        (*l_1336) = (safe_mod_func_uint16_t_u_u(g_716, ((((l_1328 == (void*)0) && (safe_mod_func_uint32_t_u_u(4294967295UL, (safe_mul_func_int16_t_s_s(g_758, g_1086.f0.f0))))) || p_13.f1) | p_13.f0)));
                    }
                    return g_347;

                                    }
                else
                {
                    int l_1346 = (-1L);
                    int *l_1347 = &g_50;
                    int *l_1348 = &l_1346;
                    int *l_1349 = &g_50;
                    int *l_1350 = &g_50;
                    int *l_1351 = (void*)0;
                    int *l_1352 = &l_1276;
                    int *l_1353 = &l_1314;
                    int *l_1354 = &l_1288;
                    int *l_1355 = &l_1309;
                    int *l_1356 = &l_1301;
                    int *l_1357 = &l_1346;
                    int *l_1358 = &g_272;
                    int *l_1359 = &l_1288;
                    int *l_1360 = &g_272;
                    int *l_1361 = &l_1309;
                    int *l_1362 = &l_1346;
                    int *l_1363 = (void*)0;
                    int *l_1364 = &l_1276;
                    int *l_1365 = &l_1301;
                    int *l_1366 = &g_272;
                    int *l_1367 = (void*)0;
                    int *l_1368 = &l_1276;
                    int *l_1369 = &l_1276;
                    int *l_1370 = &l_1314;
                    int *l_1371 = &l_1301;
                    int *l_1372 = (void*)0;
                    int *l_1373 = (void*)0;
                    int *l_1374 = &l_1301;
                    int *l_1375 = &g_62;
                    int *l_1376 = (void*)0;
                    int *l_1377 = (void*)0;
                    int *l_1378 = &g_272;
                    int *l_1379 = &l_1309;
                    int *l_1381 = &l_1380;
                    int *l_1382 = &l_1346;
                    int *l_1383 = &l_1301;
                    int *l_1384 = &l_1276;
                    int *l_1385 = &l_1288;
                    int *l_1386 = &g_272;
                    int *l_1387 = &l_1276;
                    int *l_1388 = &l_1314;
                    int *l_1389 = (void*)0;
                    int *l_1390 = (void*)0;
                    int *l_1391 = (void*)0;
                    int *l_1392 = &g_62;
                    int *l_1393 = &l_1288;
                    int *l_1394 = &l_1346;
                    int *l_1395 = &g_50;
                    int l_1396 = 0x1FD382A0L;
                    int *l_1397 = &g_270;
                    int *l_1398 = &l_1346;
                    int *l_1399 = &g_62;
                    int *l_1400 = &g_272;
                    int *l_1401 = &g_272;
                    int *l_1402 = &l_1380;
                    int *l_1403 = &l_1288;
                    int *l_1404 = (void*)0;
                    int *l_1405 = &g_270;
                    int *l_1406 = &l_1314;
                    int *l_1407 = &g_272;
                    int *l_1408 = &g_272;
                    int *l_1409 = (void*)0;
                    int *l_1411 = (void*)0;
                    int *l_1412 = &l_1346;
                    int *l_1413 = (void*)0;
                    int l_1414 = 0x19BA53C0L;
                    int *l_1415 = &l_1314;
                    int *l_1416 = &l_1396;
                    int *l_1417 = &g_50;
                    int *l_1418 = &l_1301;
                    int *l_1419 = &l_1314;
                    int *l_1420 = &g_272;
                    int *l_1421 = &l_1314;
                    int *l_1422 = &g_272;
                    int *l_1423 = &g_270;
                    int *l_1424 = &l_1301;
                    int *l_1425 = &g_270;
                    int *l_1426 = &l_1396;
                    int *l_1427 = &g_270;
                    int *l_1428 = &g_270;
                    int *l_1429 = (void*)0;
                    int *l_1430 = (void*)0;
                    int *l_1431 = &l_1396;
                    int *l_1432 = &l_1309;
                    int *l_1433 = &l_1301;
                    int *l_1434 = (void*)0;
                    int *l_1435 = (void*)0;
                    int *l_1436 = &l_1314;
                    int *l_1437 = (void*)0;
                    int *l_1438 = &l_1276;
                    int *l_1439 = (void*)0;
                    int *l_1440 = (void*)0;
                    int *l_1441 = &g_62;
                    int *l_1442 = &l_1396;
                    int *l_1443 = &g_62;
                    int *l_1444 = (void*)0;
                    int *l_1445 = &l_1410;
                    int *l_1447 = &l_1396;
                    int *l_1448 = &l_1380;
                    int *l_1449 = &l_1446;
                    int l_1450 = (-6L);
                    int *l_1451 = (void*)0;
                    int *l_1452 = &l_1288;
                    int *l_1454 = &l_1446;
                    int *l_1455 = &l_1446;
                    int *l_1456 = &l_1410;
                    int *l_1457 = (void*)0;
                    int *l_1458 = &g_50;
                    int l_1459 = 0xD95DF0D2L;
                    int *l_1460 = &l_1450;
                    int l_1462 = 1L;
                    int *l_1463 = &l_1288;
                    int *l_1464 = &g_50;
                    int *l_1465 = &g_50;
                    int *l_1466 = (void*)0;
                    int *l_1468 = &g_272;
                    int *l_1469 = (void*)0;
                    int *l_1470 = &l_1467;
                    int *l_1471 = &g_50;
                    int *l_1472 = &l_1288;
                    int *l_1473 = (void*)0;
                    int *l_1474 = (void*)0;
                    int *l_1475 = (void*)0;
                    int *l_1476 = &l_1410;
                    int *l_1477 = &g_62;
                    int *l_1478 = &l_1446;
                    int *l_1479 = &l_1276;
                    if (p_13.f1)
                    {
                        int l_1343 = 0xE5E096BCL;
                        g_62 = p_13.f1;
                        g_272 |= (safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(g_270, l_1343)), l_1343)) != l_1241), l_1314));
                    }
                    else
                    {
                        return g_347;

                                            }
                    if (l_1241)
                    {
                        struct S0 *l_1345 = &g_350.f2;
                        (*l_1345) = l_1344;

                    }
                    else
                    {
                        l_1301 &= l_1344.f4;
                        return g_347;

                                            }

                    g_1480++;
                }

                l_1483 = &l_1288;

                ;
            }


        }
        (*l_1484) = (void*)0;

        ;
    }

    (*l_1486) ^= ((*p_15) ^ l_1314);
    (*l_1486) = (*l_1486);
    if (p_13.f1)
    {
        union U7 *l_1489 = &g_536;
        (*l_1486) |= (safe_sub_func_uint32_t_u_u((&g_536 != l_1489), g_1157));
        return g_347;

            }
    else
    {
        g_1490 = (void*)0;

        ;
    }

    ;
    return l_1259;

    }







static struct S1 func_17(struct S1 p_18, unsigned short p_19, union U4 p_20, char * p_21, int p_22)
{
    int l_1217 = 0L;
    struct S1 l_1220 = {4294967295UL,0x60L};
    if (((!p_19) < (g_1207 != (void*)0)))
    {
        struct S1 l_1208 = {0xC2AED8D7L,246UL};
        return l_1208;
    }
    else
    {
        int l_1211 = (-2L);
        short l_1218 = 3L;
        int *l_1219 = &l_1211;
        l_1211 &= (g_663 <= (safe_add_func_uint16_t_u_u(0x601EL, p_18.f0)));
        (*l_1219) ^= ((safe_add_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u((safe_lshift_func_int8_t_s_u(l_1217, 7)))), l_1218)) | l_1218);
    }
    return l_1220;
}







static struct S1 func_23(char * p_24, char * p_25)
{
    char l_1091 = 1L;
    int *l_1092 = &g_272;
    unsigned l_1120 = 1UL;
    int l_1133 = 6L;
    int l_1135 = (-6L);
    int l_1158 = 0x34A723A6L;
    int l_1189 = (-9L);
    int **l_1202 = &g_332;
    struct S1 l_1203 = {0x6DDCC53CL,0x4FL};
    if ((l_1091 & l_1091))
    {
        int **l_1093 = &g_332;
        union U8 *l_1094 = &g_1095;
        union U8 **l_1096 = &l_1094;
        (*l_1093) = l_1092;

        ;
        (*l_1096) = l_1094;
    }
    else
    {
        union U3 **l_1099 = &g_1097;
        char l_1126 = 7L;
        int l_1139 = 8L;
        int l_1153 = 1L;
        (*l_1099) = g_1097;
        for (g_257.f4 = 0; (g_257.f4 != (-1)); g_257.f4 = safe_sub_func_uint32_t_u_u(g_257.f4, 8))
        {
            union U4 **l_1127 = &g_182;
            int l_1128 = 0x3C165500L;
            int l_1166 = 0xEC7B5ED4L;
            int l_1174 = 0xDFFC98EFL;
            struct S1 *l_1201 = &g_1095.f0;
            if ((safe_lshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((0L >= ((((*l_1092) | ((safe_mod_func_int32_t_s_s((((safe_add_func_int16_t_s_s(g_62, (safe_add_func_int16_t_s_s((safe_div_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((~l_1120), ((+0xE8DFL) && (safe_rshift_func_uint8_t_u_s((!(safe_add_func_int8_t_s_s(((safe_unary_minus_func_int32_t_s(((g_257.f0 | l_1126) ^ ((void*)0 == l_1127)))) <= 0xCD5CL), (*p_24)))), 4))))), 0x0BD63908L)), 1UL)))) & 0x3B60L) || l_1126), l_1128)) & 0x3BC90B6EL)) != (-1L)) || l_1128)), g_259)), g_272)) < (*l_1092)), 0xD37025C6L)), 5)))
            {
                struct S1 l_1129 = {6UL,0x92L};
                return l_1129;
            }
            else
            {
                int *l_1130 = &g_50;
                int *l_1131 = &g_50;
                int *l_1132 = (void*)0;
                int *l_1134 = &g_272;
                int *l_1136 = (void*)0;
                int *l_1137 = &l_1133;
                int *l_1138 = &l_1133;
                int *l_1140 = &l_1135;
                int *l_1141 = &l_1128;
                int *l_1142 = &l_1133;
                int *l_1143 = &g_270;
                int *l_1144 = (void*)0;
                int *l_1145 = &g_272;
                int *l_1146 = (void*)0;
                int *l_1147 = &l_1139;
                int *l_1148 = &g_270;
                int *l_1149 = &l_1128;
                int *l_1150 = &g_50;
                int *l_1151 = &g_272;
                int *l_1152 = &g_62;
                int *l_1154 = &l_1128;
                int *l_1155 = &g_270;
                int *l_1156 = (void*)0;
                int *l_1159 = &l_1139;
                int *l_1160 = &l_1128;
                int *l_1161 = &l_1153;
                int *l_1162 = &g_50;
                int *l_1163 = &g_50;
                int l_1164 = 1L;
                int *l_1165 = &l_1164;
                int *l_1167 = &l_1135;
                int *l_1168 = &g_270;
                int *l_1169 = (void*)0;
                int *l_1170 = &l_1135;
                int *l_1171 = &l_1166;
                int *l_1172 = &g_50;
                int *l_1173 = &l_1164;
                int *l_1175 = &g_62;
                int *l_1176 = &g_62;
                int *l_1177 = (void*)0;
                int *l_1178 = &l_1133;
                int *l_1179 = (void*)0;
                int *l_1180 = &l_1153;
                int *l_1181 = &l_1153;
                int *l_1182 = &l_1135;
                int *l_1183 = &l_1166;
                int *l_1184 = &l_1135;
                int *l_1185 = (void*)0;
                int *l_1186 = &l_1158;
                int *l_1187 = (void*)0;
                int *l_1188 = &l_1135;
                int *l_1190 = &l_1128;
                int l_1191 = (-1L);
                int *l_1192 = &l_1164;
                int *l_1193 = &g_62;
                int *l_1194 = &g_62;
                int l_1195 = 1L;
                int *l_1196 = &l_1128;
                int *l_1197 = &g_50;
                --g_1198;
                (*g_541) = l_1201;

                ;
            }

            ;
        }
    }
    (*l_1202) = &l_1189;

    ;
    return l_1203;


}







static char * func_26(union U9 p_27, union U6 p_28, union U7 p_29, char * p_30, unsigned char p_31)
{
    struct S1 l_1088 = {1UL,246UL};
    struct S1 *l_1089 = &g_350.f3;
    char *l_1090 = &g_149.f1;
    (*l_1089) = l_1088;

    return l_1090;


}







static union U9 func_32(union U5 p_33, char * p_34, int p_35, char * p_36, unsigned char p_37)
{
    union U4 *l_66 = &g_67;
    char l_115 = 0xBFL;
    char l_201 = 0x49L;
    int l_220 = 1L;
    union U2 *l_290 = &g_291;
    union U5 *l_346 = &g_347;
    union U6 *l_349 = &g_350;
    struct S0 l_392 = {0xDCBBL,1L,0x9FE9B06FL,0xBB3F4301L,0L,-5L,3UL,0xEC3DL,0xD051L};
    int l_406 = (-1L);
    int l_410 = (-3L);
    unsigned char l_498 = 0xC5L;
    int l_643 = 0xEBAFAAAEL;
    int l_647 = (-8L);
    int l_668 = 0xF98C77ABL;
    struct S1 l_732 = {1UL,254UL};
    unsigned char l_969 = 0UL;
    union U9 l_972 = {4294967287UL};
    if ((p_37 >= ((safe_lshift_func_uint16_t_u_u(g_50, (&g_47 != (void*)0))) || ((void*)0 != &g_50))))
    {
        union U4 **l_68 = &l_66;
        int *l_69 = (void*)0;
        int *l_70 = &g_62;
        int *l_71 = &g_50;
        int *l_72 = &g_62;
        int *l_73 = (void*)0;
        int *l_74 = &g_50;
        int *l_75 = &g_50;
        int *l_76 = (void*)0;
        int l_77 = 1L;
        int *l_78 = &g_50;
        int *l_79 = &g_50;
        int *l_80 = &l_77;
        int *l_81 = &g_50;
        int *l_82 = &g_62;
        int *l_83 = &g_62;
        int *l_84 = &g_62;
        int *l_85 = &g_50;
        int *l_86 = &g_50;
        int *l_87 = &g_62;
        int *l_88 = &g_62;
        int *l_89 = (void*)0;
        int *l_90 = &g_50;
        int *l_91 = &g_50;
        int *l_92 = &l_77;
        int *l_93 = &g_50;
        int *l_94 = &g_62;
        int *l_95 = &g_50;
        int *l_96 = (void*)0;
        int *l_97 = &g_62;
        int *l_98 = &g_50;
        int *l_99 = (void*)0;
        int *l_100 = (void*)0;
        int *l_101 = (void*)0;
        int *l_102 = &g_50;
        (*l_68) = l_66;

        --g_103;
    }
    else
    {
        union U4 **l_108 = &l_66;
        int l_118 = 3L;
        union U9 *l_207 = (void*)0;
        struct S0 *l_256 = &g_257;
        union U2 *l_292 = (void*)0;
        int *l_293 = &g_50;
        int l_307 = 3L;
        unsigned l_359 = 4UL;
        int l_362 = 0x7B5BDB79L;
        char l_389 = 0x17L;
        if ((((*p_34) & (((p_37 != (safe_rshift_func_int16_t_s_u((&l_66 == l_108), p_35))) != (0xCA99L != ((safe_sub_func_int8_t_s_s((p_37 == ((safe_div_func_uint32_t_u_u(l_115, (safe_lshift_func_uint8_t_u_s(g_103, (*p_34))))) >= 0xC2786FE9L)), l_118)) && 7L))) < p_33.f0)) == g_45))
        {
            int l_123 = (-1L);
            struct S1 l_127 = {0x8E95A608L,0xB6L};
            union U4 **l_196 = (void*)0;
            unsigned l_202 = 0xA01E2AC5L;
            char *l_237 = &l_115;
            int l_261 = 1L;
            struct S0 *l_329 = &g_257;
            for (g_62 = (-16); (g_62 < 7); ++g_62)
            {
                int *l_124 = &l_118;
                (*l_124) ^= (+((!(((safe_add_func_uint32_t_u_u(g_103, (l_123 >= p_33.f0))) & g_62) ^ (255UL > 3UL))) < (-1L)));
                for (g_45 = (-11); (g_45 <= 51); g_45 = safe_add_func_uint8_t_u_u(g_45, 6))
                {
                    g_128 = l_127;
                }
            }
lbl_172:
            for (l_127.f1 = (-25); (l_127.f1 >= 2); l_127.f1++)
            {
                int *l_131 = &g_62;
                int *l_132 = &l_118;
                int *l_133 = &l_118;
                int *l_134 = &l_118;
                int l_135 = 0xAD184991L;
                int *l_136 = &g_50;
                int *l_137 = &l_118;
                int *l_138 = &g_62;
                int *l_139 = &l_135;
                int *l_140 = &g_62;
                int *l_141 = &g_62;
                int *l_142 = (void*)0;
                int *l_143 = &g_50;
                int *l_144 = (void*)0;
                g_145++;
            }
            g_150 = g_148;

            ;
            for (p_35 = 0; (p_35 > 13); ++p_35)
            {
                unsigned l_177 = 0xD0D1FC1CL;
                union U9 *l_208 = &g_149;
                int *l_222 = (void*)0;
                int l_279 = (-1L);
                int l_286 = 0x6602D585L;
                for (g_50 = 2; (g_50 != (-28)); g_50 = safe_sub_func_uint8_t_u_u(g_50, 1))
                {
                    int *l_157 = &l_118;
                    (*l_157) = ((safe_sub_func_uint32_t_u_u(0x026D3962L, p_33.f0)) == (p_35 <= 0x997BD6D7L));
                    if (((safe_add_func_int32_t_s_s((l_118 > (safe_lshift_func_uint16_t_u_u(l_118, 2))), (+(safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(0L, (safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((g_50 & 5UL), 6)), l_115)))), l_123)), p_33.f0))))) ^ (*p_34)))
                    {
                        if (g_47)
                            goto lbl_172;
                    }
                    else
                    {
                        unsigned l_178 = 0UL;
                        if (l_127.f0)
                            break;
                        (*l_157) = (safe_lshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(l_177, (*p_34))), (g_145 >= (((l_178 > (safe_mul_func_int16_t_s_s(((void*)0 == g_181), (g_103 & 0x28L)))) | (safe_lshift_func_int16_t_s_s(p_35, p_33.f0))) >= l_177))));
                        (*l_157) = g_50;
                        if (g_45)
                            break;
                    }
                }
                if ((safe_rshift_func_uint16_t_u_s((&l_118 == &g_62), (safe_unary_minus_func_int16_t_s((safe_mod_func_uint16_t_u_u(((+(safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(l_115, 0)), ((g_128.f0 & (safe_lshift_func_int16_t_s_s((l_196 != (void*)0), g_145))) | ((((safe_div_func_uint32_t_u_u(p_33.f0, (safe_rshift_func_uint16_t_u_s(l_201, g_103)))) <= 0UL) | l_201) > (*p_36)))))) || l_127.f1), l_202)))))))
                {
                    int l_219 = 0xFABF6489L;
                    if ((safe_mul_func_int8_t_s_s(((((l_207 != l_208) & (safe_add_func_uint16_t_u_u((0UL <= (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(65529UL, (safe_mul_func_uint8_t_u_u(l_202, (safe_mod_func_uint8_t_u_u((l_219 <= p_33.f0), l_177)))))), (7L || p_33.f0)))), l_220))) > 0UL) > 0x3B3B4D8FL), (*p_34))))
                    {
                        int *l_221 = &l_219;
                        l_222 = l_221;

                        ;
                        (*l_221) = (safe_rshift_func_uint16_t_u_s(l_118, 4));
                        (*l_222) = (l_202 ^ ((g_128.f0 && 0x82C1C9F6L) > (safe_div_func_int8_t_s_s((*p_36), (*p_36)))));
                    }
                    else
                    {
                        unsigned char l_238 = 0UL;
                        int *l_241 = (void*)0;
                        int *l_242 = &l_219;
                        int *l_243 = &g_62;
                        int *l_244 = &g_50;
                        int *l_245 = &l_219;
                        int *l_246 = &l_118;
                        int *l_247 = (void*)0;
                        int *l_248 = &l_219;
                        int *l_249 = &l_219;
                        int *l_250 = &g_62;
                        int *l_251 = &g_50;
                        (*l_242) = ((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(0x418DL, 4)), 3)) | ((safe_mul_func_int8_t_s_s((*p_36), ((safe_div_func_uint32_t_u_u(((&g_47 == l_237) && l_238), g_149.f0)) ^ ((((safe_sub_func_uint16_t_u_u((p_37 <= p_37), (g_62 || (-3L)))) != 65526UL) & 0xDEE9L) && 0xC6L)))) || g_62));
                        (*l_243) |= (*l_242);
                        --g_252;
                    }

                    ;
                    if (((g_45 > 0xC6L) <= (-1L)))
                    {
                        int **l_255 = &l_222;
                        struct S0 **l_258 = &l_256;
                        int *l_260 = &l_118;
                        int *l_262 = &g_62;
                        int *l_263 = (void*)0;
                        int *l_264 = (void*)0;
                        int *l_265 = &g_50;
                        int *l_266 = &g_62;
                        int *l_267 = (void*)0;
                        int *l_268 = &l_261;
                        int *l_269 = &l_219;
                        int *l_271 = (void*)0;
                        int *l_273 = &g_272;
                        int *l_274 = &g_50;
                        int *l_275 = &g_62;
                        int *l_276 = &g_270;
                        int *l_277 = &g_272;
                        int *l_278 = &g_50;
                        int *l_280 = &g_272;
                        int *l_281 = &l_219;
                        int *l_282 = &l_118;
                        int *l_283 = &l_219;
                        int *l_284 = &g_270;
                        int *l_285 = (void*)0;
                        (*l_255) = (void*)0;

                        ;
                        (*l_258) = l_256;
                        g_287++;
                        l_292 = l_290;

                        ;
                    }
                    else
                    {
                        int **l_294 = &l_222;
                        l_293 = &g_62;

                        ;
                        (*l_294) = &l_286;

                        ;
                    }

                    ;
                    if (g_62)
                        continue;
                    for (p_33.f0 = 0; (p_33.f0 < 28); p_33.f0 = safe_add_func_int32_t_s_s(p_33.f0, 1))
                    {
                        int *l_308 = &l_286;
                        int *l_309 = &g_50;
                        int *l_310 = &l_261;
                        int *l_311 = &l_261;
                        int *l_312 = &g_50;
                        int *l_313 = &l_307;
                        int *l_314 = &l_307;
                        int l_315 = 0x4F027857L;
                        int *l_316 = (void*)0;
                        int *l_317 = &g_270;
                        int *l_318 = (void*)0;
                        int *l_319 = (void*)0;
                        int *l_320 = &l_118;
                        int *l_321 = (void*)0;
                        int *l_322 = &g_62;
                        int *l_323 = (void*)0;
                        int *l_324 = &l_315;
                        int *l_325 = &g_50;
                        (*l_293) ^= (safe_lshift_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((0x17D3F7C7L ^ (safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(p_33.f0, (safe_rshift_func_int16_t_s_u(0xC71BL, 0)))), (((*p_36) && 0x98L) && l_202)))), (l_307 || (g_45 <= (*p_36))))) != p_33.f0), g_149.f1));
                        --g_326;
                        (*l_322) = (l_329 == (void*)0);
                    }
                }
                else
                {
                    int **l_330 = (void*)0;
                    int **l_331 = &l_222;
                    (*l_331) = &l_286;

                    ;
                    g_332 = &g_50;

                    ;
                    for (l_127.f1 = 21; (l_127.f1 <= 26); l_127.f1 = safe_add_func_int16_t_s_s(l_127.f1, 3))
                    {
                        (**l_331) = p_35;
                        return (*g_148);


                                            }
                    (*l_293) = ((g_257.f0 > g_45) == ((safe_unary_minus_func_uint8_t_u((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((*l_293), (p_35 & (**l_331)))), l_123)))) <= p_33.f0));
                }

                ;
                if ((safe_sub_func_uint8_t_u_u(g_128.f0, (1UL <= l_127.f0))))
                {
                    (*l_293) = (*g_332);
                    return (*g_150);


                                    }
                else
                {
                    int l_342 = 3L;
                    if ((*g_332))
                    {
                        (*l_329) = (*l_329);
                        if ((*g_332))
                            break;
                        l_342 &= 1L;
                    }
                    else
                    {
                        int **l_343 = &l_293;
                        (*l_343) = &g_270;

                        ;
                        if ((*g_332))
                            break;
                    }
                }
            }
        }
        else
        {
            union U6 *l_351 = &g_350;
            int l_371 = 1L;
            int l_427 = (-2L);
            struct S1 *l_543 = &g_350.f0;
            union U7 *l_568 = &g_536;
            for (g_62 = (-8); (g_62 != 0); ++g_62)
            {
                union U5 **l_348 = &l_346;
                int **l_352 = &l_293;
                (*l_348) = l_346;
                l_351 = l_349;
                (*l_352) = &l_118;

                ;
            }

            ;
            if (((p_37 == ((safe_mod_func_uint32_t_u_u(0UL, (safe_rshift_func_uint8_t_u_s(((!l_359) & (l_362 || 0UL)), 4)))) || ((void*)0 != &l_118))) < (safe_add_func_uint16_t_u_u(g_62, (safe_sub_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(g_270, 251UL)) ^ 0xED03L), (*p_36))) > l_220), l_371))))))
            {
                int l_380 = 0x4C8BB38CL;
                int l_418 = 0xA4DBD085L;
                int l_440 = 0x711DFE30L;
                unsigned short l_459 = 65530UL;
                struct S1 *l_501 = &g_350.f0;
                union U2 *l_504 = (void*)0;
                union U7 *l_566 = (void*)0;
                for (g_350.f4.f8 = 0; (g_350.f4.f8 == 20); g_350.f4.f8 = safe_add_func_uint16_t_u_u(g_350.f4.f8, 2))
                {
                    struct S0 **l_374 = &l_256;
                    (*l_374) = &g_257;
                    for (g_257.f3 = (-18); (g_257.f3 != 32); ++g_257.f3)
                    {
                        unsigned short l_379 = 0xAF91L;
                        (*l_293) = (safe_mod_func_uint8_t_u_u(247UL, l_379));
                        return (*g_148);


                                            }
                    if ((*g_332))
                        break;
                    if (l_115)
                    {
                        (*l_293) |= (((*g_332) == p_37) < (((g_350.f0.f0 == l_380) >= (safe_rshift_func_int8_t_s_s((0x43L > (p_35 && l_380)), (*p_34)))) & g_350.f0.f1));
                    }
                    else
                    {
                        unsigned short l_385 = 6UL;
                        union U5 **l_386 = &l_346;
                        (*l_293) &= (safe_div_func_int16_t_s_s(g_149.f1, p_35));
                        (*g_332) = p_35;
                        if (l_385)
                            continue;
                        (*l_386) = &g_347;
                    }
                }
                if ((safe_add_func_uint32_t_u_u((((void*)0 == (*g_181)) & (l_371 == (l_389 > (*l_293)))), (l_371 == ((0UL < g_103) || g_257.f4)))))
                {
                    int l_446 = 0x4F9124F8L;
                    int l_456 = (-2L);
                    int *l_462 = &l_418;
                    int *l_463 = (void*)0;
                    int *l_464 = &g_50;
                    int *l_465 = &l_427;
                    int *l_466 = (void*)0;
                    int *l_467 = &l_410;
                    int *l_468 = &l_118;
                    int *l_469 = &g_272;
                    int *l_470 = &l_362;
                    int *l_471 = &l_410;
                    int *l_472 = &g_62;
                    int *l_473 = &l_307;
                    int *l_474 = &l_410;
                    int *l_475 = (void*)0;
                    int *l_476 = &l_440;
                    int *l_477 = &l_371;
                    int *l_478 = &g_270;
                    int *l_479 = &l_410;
                    int *l_480 = &l_427;
                    int *l_481 = (void*)0;
                    int *l_482 = &g_272;
                    int *l_483 = &l_410;
                    int *l_484 = (void*)0;
                    int *l_485 = (void*)0;
                    int *l_486 = &l_307;
                    int *l_487 = (void*)0;
                    int *l_488 = &l_418;
                    int *l_489 = &l_418;
                    int l_490 = 0x579FFB8CL;
                    int *l_491 = &l_456;
                    int l_492 = 0xFC9310ADL;
                    int *l_493 = &l_410;
                    int *l_494 = (void*)0;
                    (*g_332) |= (-5L);
                    for (l_118 = 4; (l_118 < (-26)); --l_118)
                    {
                        int *l_393 = &l_371;
                        int *l_394 = (void*)0;
                        int *l_395 = &g_270;
                        int *l_396 = (void*)0;
                        int *l_397 = &l_307;
                        int *l_398 = &g_270;
                        int *l_399 = &g_50;
                        int *l_400 = &g_272;
                        int *l_401 = (void*)0;
                        int *l_402 = (void*)0;
                        int *l_403 = (void*)0;
                        int *l_404 = &g_50;
                        int *l_405 = &l_371;
                        int *l_407 = (void*)0;
                        int *l_408 = &g_50;
                        int *l_409 = &g_270;
                        int *l_411 = &g_62;
                        int *l_412 = &l_371;
                        int *l_413 = &l_410;
                        int *l_414 = &l_371;
                        int *l_415 = (void*)0;
                        int *l_416 = &l_406;
                        int *l_417 = &l_307;
                        int *l_419 = &l_307;
                        int *l_420 = &g_50;
                        int *l_421 = &l_406;
                        int *l_422 = (void*)0;
                        int *l_423 = (void*)0;
                        int *l_424 = &l_418;
                        int *l_425 = (void*)0;
                        int *l_426 = &l_406;
                        int *l_428 = &l_371;
                        int *l_429 = &l_362;
                        int *l_430 = &g_50;
                        int *l_431 = (void*)0;
                        int *l_432 = (void*)0;
                        int *l_433 = (void*)0;
                        int *l_434 = &g_62;
                        int *l_435 = &g_272;
                        int *l_436 = &l_410;
                        int *l_437 = &l_362;
                        int *l_438 = &g_62;
                        int *l_439 = (void*)0;
                        int *l_441 = &l_406;
                        int *l_442 = &l_362;
                        int *l_443 = &l_406;
                        int *l_444 = &l_440;
                        int *l_445 = (void*)0;
                        int *l_447 = &g_50;
                        int *l_448 = (void*)0;
                        int *l_449 = &g_272;
                        int *l_450 = &g_50;
                        int *l_451 = &l_418;
                        int *l_452 = &l_362;
                        int *l_453 = &l_371;
                        int *l_454 = &l_440;
                        int *l_455 = &g_50;
                        int *l_457 = &l_410;
                        int *l_458 = &g_62;
                        (*l_256) = l_392;
                        --l_459;
                        if ((*g_332))
                            continue;
                        (*l_397) |= l_459;
                    }
                    g_495--;
                    if (l_459)
                    {
                        l_498++;
                    }
                    else
                    {
                        struct S1 **l_502 = (void*)0;
                        struct S1 **l_503 = &l_501;
                        l_418 &= p_37;
                        (*l_503) = l_501;
                    }
                }
                else
                {
                    unsigned l_511 = 0xE32209B3L;
                    (*g_332) = (((((void*)0 != l_504) > 0xA8L) <= p_35) && (safe_div_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((p_36 != &l_115), 0UL)) > 0xB2L), 0x0640L)));
                    if ((safe_mul_func_uint8_t_u_u(g_270, (l_511 && ((safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((((safe_sub_func_int8_t_s_s(((((l_440 && p_35) >= ((((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((*p_36), 6)), ((safe_div_func_int32_t_s_s((0xC1L ^ l_371), (safe_add_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s((~p_35), 8)) || (safe_lshift_func_int8_t_s_u(0x59L, l_392.f3))), 0x6A432728L)))) & g_149.f0))) ^ 0x5A86L) > l_511) > 65535UL)) & l_392.f8) || 1UL), 0xFAL)) <= l_392.f1) & p_33.f0) & g_128.f0), 0x5F9CL)), 0UL)) == 4294967295UL)))))
                    {
                        int **l_530 = (void*)0;
                        int **l_531 = &g_332;
                        (*l_531) = &g_50;

                        ;
                    }
                    else
                    {
                        union U7 *l_535 = &g_536;
                        union U7 **l_534 = &l_535;
                        (*l_293) = l_410;
                        (*g_332) = (g_145 || (&g_270 != (void*)0));
                        (*l_534) = (void*)0;

                        ;
                        (*g_332) &= 9L;
                    }

                    ;
                }

                ;
                (*g_332) = (p_33.f0 | g_128.f0);
                for (g_257.f0 = 0; (g_257.f0 != 3); g_257.f0 = safe_add_func_uint8_t_u_u(g_257.f0, 6))
                {
                    unsigned l_563 = 0x5DE8ABE5L;
                    union U7 **l_567 = (void*)0;
                    (*g_332) = (*g_332);
                    if ((safe_sub_func_int32_t_s_s((((void*)0 != g_541) ^ (*l_293)), ((-1L) | g_103))))
                    {
                        struct S1 *l_544 = (void*)0;
                        int *l_545 = &g_62;
                        int *l_546 = &l_406;
                        int *l_547 = &l_371;
                        int *l_548 = &g_272;
                        int *l_549 = &l_440;
                        int *l_550 = &l_427;
                        int *l_551 = &l_427;
                        int *l_552 = &l_406;
                        int *l_553 = &g_50;
                        int *l_554 = &l_410;
                        int *l_555 = (void*)0;
                        int *l_556 = (void*)0;
                        int *l_557 = &l_427;
                        int *l_558 = &l_427;
                        int *l_559 = &l_410;
                        int *l_560 = &g_62;
                        int *l_561 = &l_118;
                        int l_562 = 4L;
                        g_332 = &g_62;

                        ;
                        l_544 = l_543;

                        ;
                        ++l_563;
                    }
                    else
                    {
                        (*g_332) |= p_33.f0;
                        if (l_459)
                            break;
                        (*l_293) &= p_37;
                        if (p_33.f0)
                            continue;
                    }
                    l_568 = l_566;

                    ;
                    (*l_293) = ((safe_mul_func_uint8_t_u_u(5UL, l_380)) <= (safe_mod_func_int8_t_s_s((*p_34), (*l_293))));
                }

                ;
            }
            else
            {
                (*g_541) = (void*)0;

                ;
            }

            ;
            ;
            ;
            (*l_293) = l_427;
            (*l_293) |= p_33.f0;
        }

        ;
        ;
        ;
        ;
        ;
    }

    ;
    ;
    ;
    if ((safe_rshift_func_uint16_t_u_s(((l_392.f7 & (l_392.f5 || 0x024ED4ACL)) >= ((safe_sub_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(((6L >= 1L) > g_103), (safe_add_func_uint32_t_u_u((((g_350.f0.f1 | (safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((*p_34), 0x7AL)) <= (*g_332)), (*p_34))), p_33.f0))) == 0x5B34L) == g_257.f0), 0xD7236005L)))) == (*p_36)), (*p_36))) & 0xEA87L)), 11)))
    {
        int *l_587 = &l_410;
        int *l_588 = (void*)0;
        int *l_589 = &g_62;
        int *l_590 = &l_406;
        int *l_591 = &l_406;
        int *l_592 = &g_62;
        int *l_593 = (void*)0;
        int *l_594 = &g_270;
        int *l_595 = &l_410;
        int l_596 = 0x008B6538L;
        int *l_597 = &g_270;
        int *l_598 = &l_410;
        int l_599 = 0x68A4B1D5L;
        int *l_600 = (void*)0;
        int *l_601 = &l_406;
        int *l_602 = &l_599;
        int *l_603 = &g_50;
        int *l_604 = &g_270;
        int l_605 = (-1L);
        int *l_606 = &g_62;
        int *l_607 = &g_50;
        int *l_608 = &l_605;
        int *l_609 = (void*)0;
        int *l_610 = &g_62;
        int *l_611 = &g_50;
        int *l_612 = &g_272;
        int l_613 = 0x5877B575L;
        int *l_614 = (void*)0;
        int *l_615 = &g_50;
        int *l_616 = &g_62;
        int *l_617 = &g_272;
        int *l_618 = &l_406;
        int *l_619 = &g_62;
        int *l_620 = &g_272;
        int *l_621 = &g_272;
        int *l_622 = &g_270;
        int *l_623 = &l_605;
        int *l_624 = &l_410;
        int *l_625 = &l_596;
        int *l_626 = &l_410;
        int *l_627 = &l_613;
        int *l_628 = &l_410;
        int *l_629 = &l_613;
        int *l_630 = &l_605;
        int *l_631 = &l_410;
        int *l_632 = (void*)0;
        int *l_633 = (void*)0;
        int *l_634 = (void*)0;
        int *l_635 = &l_605;
        int *l_636 = &l_599;
        int *l_637 = &g_62;
        int l_638 = 2L;
        int *l_639 = &g_62;
        int *l_640 = &l_410;
        int *l_641 = (void*)0;
        int *l_642 = &l_599;
        int *l_644 = &g_272;
        int *l_645 = &g_50;
        int *l_646 = &g_272;
        int *l_648 = &l_599;
        int *l_649 = &l_638;
        int *l_650 = (void*)0;
        int *l_651 = &l_613;
        int *l_652 = (void*)0;
        int *l_653 = &l_643;
        int *l_654 = &l_596;
        int *l_655 = &l_410;
        int *l_656 = &l_596;
        int *l_657 = &l_406;
        int *l_658 = &l_410;
        int *l_659 = (void*)0;
        int *l_660 = &g_270;
        int *l_661 = &g_50;
        int *l_662 = (void*)0;
        int **l_666 = (void*)0;
        int **l_667 = &l_633;
        union U4 *l_743 = &g_67;
        --g_663;
        (*l_667) = (void*)0;
        if ((((((l_290 == (void*)0) >= l_392.f0) != l_668) <= (safe_sub_func_uint16_t_u_u(((*p_36) == (*p_36)), (safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s(0x52574A73L)), 0x9DL))))) < ((65535UL > g_252) & g_350.f0.f0)))
        {
            int **l_674 = &l_623;
            union U9 l_687 = {0x47897659L};
            int l_715 = 0xBA381629L;
            int l_720 = 1L;
            int l_721 = 0x294E479DL;
            union U9 **l_726 = &g_148;
            if ((1UL != (((*g_332) == (*g_332)) == 0x5279585DL)))
            {
                char l_676 = (-6L);
                int **l_694 = &l_600;
                union U7 *l_703 = &g_536;
                if (((void*)0 != l_674))
                {
                    union U5 **l_675 = &l_346;
                    int l_677 = 0xCF6BE472L;
                    int l_679 = 0x7BF9E565L;
                    int l_680 = 0x415A6477L;
                    (*l_675) = &p_33;

                    ;
                    g_681--;
                    (*l_618) ^= (g_257.f3 < l_676);
                }
                else
                {
                    for (g_350.f3.f0 = 13; (g_350.f3.f0 >= 38); g_350.f3.f0 = safe_add_func_int8_t_s_s(g_350.f3.f0, 9))
                    {
                        g_686 = (void*)0;

                        ;
                        return l_687;


                                            }
                    for (g_326 = 0; (g_326 < 14); g_326 = safe_add_func_uint16_t_u_u(g_326, 6))
                    {
                        (*l_667) = &g_62;

                        ;
                    }

                    ;
                    return (*g_148);


                                    }

                ;
                for (g_350.f2.f0 = (-2); (g_350.f2.f0 > 22); g_350.f2.f0++)
                {
                    for (l_115 = 0; (l_115 >= (-3)); --l_115)
                    {
                        int ***l_695 = &l_666;
                        union U9 **l_696 = &g_148;
                        (*l_695) = l_694;

                        ;
                        (*l_696) = &g_149;
                        (*g_181) = (*g_181);
                    }
                    (*l_694) = &l_410;

                    ;
                    for (p_33.f0 = (-3); (p_33.f0 < 4); p_33.f0++)
                    {
                        union U4 *l_706 = &g_67;
                        (*l_604) = (safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((*l_608), ((*l_611) == 0x9CL))), ((((&g_536 != l_703) >= p_37) > (safe_div_func_uint8_t_u_u((**l_674), (**l_674)))) ^ g_257.f6)));
                        (*g_181) = l_706;
                    }
                    (*g_181) = (*g_181);
                }

                ;
                ;
            }
            else
            {
                union U7 *l_708 = &g_536;
                union U7 **l_707 = &l_708;
                unsigned char l_709 = 7UL;
                int l_714 = 0x48F44127L;
                (*l_707) = &g_536;
                l_709--;
                for (l_201 = 23; (l_201 == 4); l_201 = safe_sub_func_int16_t_s_s(l_201, 6))
                {
                    unsigned l_719 = 0UL;
                    (*g_332) = (*g_332);
                    ++g_716;
                    if (l_605)
                        goto lbl_725;
                    if (l_719)
                        continue;
                }
            }

            ;
            ;
            ;
lbl_725:
            --g_722;
            (*l_726) = &g_149;
            (*l_610) |= p_33.f0;
        }
        else
        {
            unsigned l_727 = 1UL;
            int l_749 = 0x9A7F6078L;
            int l_754 = (-1L);
            int l_759 = (-1L);
            int *l_776 = &g_272;
            int *l_777 = &l_596;
            int *l_778 = &l_754;
            int *l_779 = (void*)0;
            int *l_780 = &l_643;
            int *l_781 = &l_759;
            int *l_782 = (void*)0;
            int *l_783 = &l_410;
            int *l_784 = &g_270;
            int *l_785 = &l_638;
            int *l_786 = &l_754;
            int *l_787 = &l_749;
            int *l_789 = (void*)0;
            int *l_790 = &l_613;
            int *l_791 = &l_599;
            int *l_792 = &l_754;
            int *l_793 = &l_749;
            int *l_794 = &l_596;
            int *l_795 = &l_759;
            int *l_796 = &l_410;
            int *l_797 = &l_599;
            int *l_798 = &g_272;
            int *l_799 = &l_749;
            int *l_801 = (void*)0;
            int *l_802 = &l_759;
            int *l_803 = &l_605;
            int *l_804 = &l_638;
            int *l_805 = (void*)0;
            l_727++;
            for (g_536.f1.f6 = 12; (g_536.f1.f6 == 38); g_536.f1.f6 = safe_add_func_uint16_t_u_u(g_536.f1.f6, 1))
            {
                struct S1 *l_733 = &g_350.f1;
                (*l_733) = l_732;

            }

            for (g_257.f0 = 11; (g_257.f0 < (-18)); g_257.f0 = safe_sub_func_uint8_t_u_u(g_257.f0, 1))
            {
                int l_747 = 0x8F935192L;
                int l_748 = 1L;
                int l_751 = (-6L);
                int l_752 = 0xB7A0C809L;
                int l_755 = 0xD7EAC531L;
                int l_757 = 8L;
                struct S1 l_775 = {5UL,255UL};
                for (g_257.f4 = (-21); (g_257.f4 == 9); ++g_257.f4)
                {
                    struct S0 *l_744 = (void*)0;
                    int l_746 = (-1L);
                    int l_750 = 1L;
                    int l_753 = 0x3C9D2B86L;
                    int l_756 = 0L;
                    int *l_760 = &l_605;
                    int *l_761 = &l_755;
                    int *l_762 = (void*)0;
                    int *l_763 = &l_406;
                    int *l_764 = &l_599;
                    int *l_765 = &l_749;
                    int *l_767 = &l_643;
                    int *l_768 = &l_748;
                    for (g_350.f2.f8 = 0; (g_350.f2.f8 <= 31); g_350.f2.f8 = safe_add_func_uint16_t_u_u(g_350.f2.f8, 2))
                    {
                        unsigned l_740 = 0x01CBCA5BL;
                        struct S0 **l_745 = &l_744;
                        --l_740;
                        (*g_181) = l_743;
                        (*l_597) ^= (-7L);
                        (*l_745) = l_744;
                    }
                    ++g_769;
                    if ((*l_760))
                    {
                        if ((*g_332))
                            break;
                    }
                    else
                    {
                        unsigned short l_772 = 1UL;
                        l_772++;
                        (*l_667) = &l_752;

                        ;
                    }
                }


                l_775 = l_732;
            }


            g_806--;
        }

        ;
        ;

        ;
        (*l_640) |= (*g_332);
    }
    else
    {
        int l_809 = 0xF0FBBD52L;
        union U7 *l_820 = (void*)0;
        union U7 **l_819 = &l_820;
        union U2 *l_839 = &g_291;
        int *l_840 = &l_643;
        unsigned l_881 = 0x73DA97D0L;
        int l_931 = 0x32194121L;
        int l_935 = 0L;
        int l_948 = 4L;
        int l_952 = 8L;
        if ((((*p_34) <= (0UL >= l_809)) ^ (l_643 <= (safe_lshift_func_int16_t_s_u((&g_536 != (void*)0), 15)))))
        {
            char l_814 = 0xE8L;
            union U9 **l_821 = &g_148;
            short l_834 = 0L;
            (*g_332) = ((((l_814 ^ (safe_mod_func_uint32_t_u_u(l_809, g_257.f0))) < ((safe_div_func_uint32_t_u_u(g_681, p_33.f0)) < (l_819 != (void*)0))) ^ (*g_332)) >= g_326);
            (*l_821) = &g_149;
            (*g_332) |= (l_220 < (safe_lshift_func_int16_t_s_s((((l_809 == (safe_lshift_func_int8_t_s_s((*p_36), l_809))) != (*p_36)) != (safe_div_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(g_128.f1, ((&g_257 == (void*)0) < p_33.f0))), l_809)) != 0UL), l_809)) & 9L), 0x2AL))), l_834)));
            (*g_332) = ((safe_mul_func_int8_t_s_s(l_392.f1, (!(*p_36)))) <= (0x96L != ((&g_332 == (void*)0) <= (p_33.f0 || ((((safe_lshift_func_uint8_t_u_s((((l_290 != l_839) < (*p_34)) < 0xED212E76L), 2)) == p_35) >= g_716) ^ g_806)))));
        }
        else
        {
            int **l_841 = &g_332;
            int l_865 = 0xB82F7A1CL;
            union U9 l_901 = {0x31B356A4L};
            struct S1 l_902 = {0xA9D6C2FFL,0UL};
            union U5 *l_973 = &g_347;
            int *l_1021 = &g_50;
            int *l_1022 = &g_272;
            int *l_1023 = (void*)0;
            int *l_1024 = &l_406;
            int *l_1025 = &g_50;
            int *l_1026 = &l_647;
            int *l_1027 = &l_865;
            int *l_1028 = &g_50;
            int *l_1029 = &g_270;
            int *l_1030 = &l_948;
            int *l_1031 = (void*)0;
            int *l_1032 = &g_50;
            int *l_1033 = &l_948;
            int *l_1034 = &g_270;
            int *l_1035 = &l_952;
            int *l_1036 = &l_931;
            int *l_1037 = &l_935;
            int *l_1038 = &g_50;
            int *l_1039 = &g_62;
            int *l_1040 = (void*)0;
            int *l_1041 = &l_410;
            int *l_1042 = (void*)0;
            int *l_1043 = &l_647;
            int *l_1044 = &l_931;
            int *l_1045 = &l_647;
            int *l_1046 = &l_952;
            int *l_1047 = &l_406;
            int *l_1048 = &g_62;
            int *l_1049 = &l_931;
            int *l_1050 = &g_50;
            int *l_1051 = &l_931;
            int *l_1052 = (void*)0;
            int *l_1053 = &l_647;
            int *l_1054 = (void*)0;
            int *l_1055 = &l_643;
            int *l_1056 = (void*)0;
            int *l_1057 = &g_272;
            int *l_1058 = &l_643;
            int *l_1059 = &l_931;
            int *l_1060 = &l_931;
            int *l_1061 = &l_865;
            int *l_1062 = (void*)0;
            int *l_1063 = &l_931;
            int *l_1064 = &l_647;
            int *l_1065 = &l_643;
            int *l_1066 = &l_410;
            int *l_1067 = &g_62;
            int *l_1068 = (void*)0;
            int *l_1069 = (void*)0;
            int *l_1070 = (void*)0;
            int *l_1071 = &l_931;
            int *l_1072 = &g_62;
            int *l_1073 = &l_410;
            int *l_1074 = &l_410;
            int *l_1075 = &g_270;
            int *l_1076 = &l_410;
            int *l_1077 = &l_935;
            int *l_1078 = (void*)0;
            int *l_1079 = &l_865;
            int *l_1080 = (void*)0;
            int *l_1081 = &l_406;
            int *l_1082 = (void*)0;
lbl_877:
            (*l_841) = l_840;

            ;
            if ((*g_332))
            {
                unsigned l_874 = 0xDDD2F254L;
                char *l_879 = &l_201;
                char **l_878 = &l_879;
                char ***l_880 = &l_878;
                for (g_291.f2.f0 = (-19); (g_291.f2.f0 <= 57); g_291.f2.f0 = safe_add_func_uint8_t_u_u(g_291.f2.f0, 1))
                {
                    unsigned char l_846 = 0UL;
                    if (p_35)
                        break;
                    for (g_257.f2 = 0; (g_257.f2 == 34); g_257.f2 = safe_add_func_uint8_t_u_u(g_257.f2, 7))
                    {
                        int *l_849 = &g_50;
                        int *l_850 = &g_50;
                        int *l_851 = (void*)0;
                        int *l_852 = &g_50;
                        int *l_853 = &g_50;
                        int *l_854 = &l_410;
                        int *l_855 = (void*)0;
                        int *l_856 = (void*)0;
                        int *l_857 = &g_272;
                        int *l_858 = &l_647;
                        int *l_859 = &g_50;
                        int *l_860 = &l_410;
                        int *l_861 = &l_643;
                        int *l_862 = (void*)0;
                        int *l_863 = &l_643;
                        int *l_864 = &l_643;
                        int *l_866 = &g_270;
                        int *l_867 = &g_62;
                        int *l_868 = &g_62;
                        int *l_869 = (void*)0;
                        int *l_870 = &l_865;
                        int *l_871 = &l_410;
                        int *l_872 = &l_406;
                        int *l_873 = &g_50;
                        l_846--;
                        l_874--;
                        if (l_392.f7)
                            goto lbl_877;
                    }
                }
                (*l_880) = l_878;
                (*g_332) = 0xC89D0FA4L;
            }
            else
            {
                char l_899 = 0xD3L;
                union U5 *l_900 = &g_347;
                struct S1 l_906 = {1UL,0xDCL};
                int l_920 = 0xB160F74AL;
                int l_954 = 1L;
                int l_961 = 0L;
                int l_1010 = 0L;
                --l_881;
                if ((safe_sub_func_int16_t_s_s((*l_840), (safe_unary_minus_func_uint16_t_u(g_149.f0)))))
                {
                    struct S1 l_903 = {7UL,255UL};
                    struct S1 *l_904 = (void*)0;
                    struct S1 *l_905 = (void*)0;
                    if ((((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(p_35, (safe_sub_func_uint32_t_u_u(g_347.f0, ((safe_mul_func_uint16_t_u_u(0x69F6L, g_270)) <= (**l_841)))))), (safe_rshift_func_uint16_t_u_s((~l_899), (&g_347 == l_900))))), (*g_332))) >= 1L) || p_35))
                    {
                        return l_901;



                                            }
                    else
                    {
                        l_903 = l_902;
                        (*l_841) = l_840;
                    }
                    l_906 = l_732;
                }
                else
                {
                    unsigned l_915 = 0x3513E656L;
                    int l_919 = 0xD15E5AC9L;
                    int l_923 = 0L;
                    int l_932 = 0xC2AFCC97L;
                    for (l_899 = 8; (l_899 != 23); l_899 = safe_add_func_uint8_t_u_u(l_899, 1))
                    {
                        int *l_909 = &g_272;
                        int *l_910 = &g_272;
                        int *l_911 = &l_865;
                        int *l_912 = &l_865;
                        int *l_913 = &g_272;
                        int *l_914 = (void*)0;
                        union U9 **l_918 = &g_150;
                        int *l_921 = &g_270;
                        int *l_922 = (void*)0;
                        int *l_924 = &g_62;
                        int *l_925 = (void*)0;
                        int *l_926 = &g_272;
                        int *l_927 = &l_643;
                        int *l_928 = (void*)0;
                        int *l_929 = &g_50;
                        int *l_930 = (void*)0;
                        int *l_933 = &l_410;
                        int *l_934 = (void*)0;
                        int *l_936 = &l_931;
                        int *l_937 = &l_920;
                        int *l_938 = &l_932;
                        int *l_939 = &g_272;
                        int *l_940 = &l_410;
                        int *l_941 = &l_935;
                        int *l_942 = &l_920;
                        int *l_943 = &g_270;
                        int *l_944 = (void*)0;
                        int *l_945 = &l_935;
                        int *l_946 = &l_410;
                        int *l_947 = &g_62;
                        int *l_949 = &g_62;
                        int *l_950 = &g_62;
                        int *l_951 = (void*)0;
                        int *l_953 = (void*)0;
                        int *l_955 = &l_954;
                        int *l_956 = &l_647;
                        int *l_957 = &l_923;
                        int *l_958 = &l_935;
                        int *l_959 = &l_952;
                        int *l_960 = (void*)0;
                        int *l_962 = &l_647;
                        int *l_963 = &g_272;
                        int *l_964 = &l_923;
                        int *l_965 = &l_647;
                        int *l_966 = &l_643;
                        int *l_967 = &l_952;
                        int *l_968 = &l_406;
                        --l_915;
                        (*l_918) = &g_149;

                        ;
                        --l_969;
                        return l_972;



                                            }
                    if ((*g_332))
                    {
                        union U5 **l_974 = &l_346;
                        (*l_974) = l_973;
                        return (*g_148);



                                            }
                    else
                    {
                        int *l_975 = &g_272;
                        int *l_976 = &l_643;
                        int *l_977 = (void*)0;
                        int *l_978 = (void*)0;
                        int *l_979 = &l_647;
                        int *l_980 = &g_270;
                        int *l_981 = (void*)0;
                        int *l_982 = &l_923;
                        int *l_983 = &l_923;
                        int *l_984 = &l_923;
                        int *l_985 = (void*)0;
                        int *l_986 = &l_920;
                        int *l_987 = &l_643;
                        int *l_988 = &g_62;
                        int *l_989 = (void*)0;
                        int *l_990 = &l_643;
                        int *l_991 = (void*)0;
                        int *l_992 = &l_954;
                        int *l_993 = &l_406;
                        int *l_994 = &l_920;
                        int *l_995 = &l_406;
                        int *l_996 = &l_935;
                        int *l_997 = &g_50;
                        int *l_998 = &l_920;
                        int *l_999 = &l_647;
                        int *l_1000 = &g_270;
                        int *l_1001 = &g_270;
                        union U9 **l_1005 = &g_148;
                        --g_1002;
                        (*l_1005) = &g_149;
                        (*g_332) = (safe_mul_func_uint16_t_u_u(l_923, (safe_lshift_func_uint16_t_u_u(l_1010, ((!(0x9BB0L || g_45)) != (l_932 == (safe_mul_func_int8_t_s_s((0x9661L < ((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(p_33.f0, (((safe_rshift_func_uint8_t_u_s(0UL, (safe_sub_func_int8_t_s_s((*p_36), 0xACL)))) && (*g_332)) == 0xE7FCL))) < 0xCEL), 1)) | 0x2EA7D0AAL)), 9L))))))));
                    }
                }
            }
            ++g_1083;
        }

        ;
    }

    ;
    ;
    return (*g_148);



    }







static union U5 func_38(unsigned char p_39, int p_40, char * p_41)
{
    char *l_48 = &g_47;
    int *l_49 = &g_50;
    int *l_61 = &g_62;
    union U5 l_63 = {2L};
    (*l_49) &= (l_48 != l_48);
    (*l_61) |= (((safe_div_func_int8_t_s_s((*l_49), (*p_41))) && ((safe_sub_func_uint32_t_u_u((*l_49), (*l_49))) < (*l_49))) | (safe_sub_func_int16_t_s_s((&g_47 != (void*)0), (safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u(g_47, p_39)), (*l_49))))));
    return l_63;

    }





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_128.f0, "g_128.f0", print_hash_value);
    transparent_crc(g_128.f1, "g_128.f1", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_149.f0, "g_149.f0", print_hash_value);
    transparent_crc(g_149.f1, "g_149.f1", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_257.f0, "g_257.f0", print_hash_value);
    transparent_crc(g_257.f1, "g_257.f1", print_hash_value);
    transparent_crc(g_257.f2, "g_257.f2", print_hash_value);
    transparent_crc(g_257.f3, "g_257.f3", print_hash_value);
    transparent_crc(g_257.f4, "g_257.f4", print_hash_value);
    transparent_crc(g_257.f5, "g_257.f5", print_hash_value);
    transparent_crc(g_257.f6, "g_257.f6", print_hash_value);
    transparent_crc(g_257.f7, "g_257.f7", print_hash_value);
    transparent_crc(g_257.f8, "g_257.f8", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_287, "g_287", print_hash_value);
    transparent_crc(g_291.f0, "g_291.f0", print_hash_value);
    transparent_crc(g_326, "g_326", print_hash_value);
    transparent_crc(g_347.f0, "g_347.f0", print_hash_value);
    transparent_crc(g_495, "g_495", print_hash_value);
    transparent_crc(g_663, "g_663", print_hash_value);
    transparent_crc(g_678, "g_678", print_hash_value);
    transparent_crc(g_681, "g_681", print_hash_value);
    transparent_crc(g_716, "g_716", print_hash_value);
    transparent_crc(g_722, "g_722", print_hash_value);
    transparent_crc(g_758, "g_758", print_hash_value);
    transparent_crc(g_766, "g_766", print_hash_value);
    transparent_crc(g_769, "g_769", print_hash_value);
    transparent_crc(g_788, "g_788", print_hash_value);
    transparent_crc(g_800, "g_800", print_hash_value);
    transparent_crc(g_806, "g_806", print_hash_value);
    transparent_crc(g_1002, "g_1002", print_hash_value);
    transparent_crc(g_1083, "g_1083", print_hash_value);
    transparent_crc(g_1086.f0.f0, "g_1086.f0.f0", print_hash_value);
    transparent_crc(g_1086.f0.f1, "g_1086.f0.f1", print_hash_value);
    transparent_crc(g_1087.f0, "g_1087.f0", print_hash_value);
    transparent_crc(g_1087.f2, "g_1087.f2", print_hash_value);
    transparent_crc(g_1095.f0.f0, "g_1095.f0.f0", print_hash_value);
    transparent_crc(g_1095.f0.f1, "g_1095.f0.f1", print_hash_value);
    transparent_crc(g_1098.f2.f0, "g_1098.f2.f0", print_hash_value);
    transparent_crc(g_1098.f2.f1, "g_1098.f2.f1", print_hash_value);
    transparent_crc(g_1098.f2.f2, "g_1098.f2.f2", print_hash_value);
    transparent_crc(g_1098.f2.f3, "g_1098.f2.f3", print_hash_value);
    transparent_crc(g_1098.f2.f4, "g_1098.f2.f4", print_hash_value);
    transparent_crc(g_1098.f2.f5, "g_1098.f2.f5", print_hash_value);
    transparent_crc(g_1098.f2.f6, "g_1098.f2.f6", print_hash_value);
    transparent_crc(g_1098.f2.f7, "g_1098.f2.f7", print_hash_value);
    transparent_crc(g_1098.f2.f8, "g_1098.f2.f8", print_hash_value);
    transparent_crc(g_1157, "g_1157", print_hash_value);
    transparent_crc(g_1198, "g_1198", print_hash_value);
    transparent_crc(g_1480, "g_1480", print_hash_value);
    transparent_crc(g_1670, "g_1670", print_hash_value);
    transparent_crc(g_1676, "g_1676", print_hash_value);
    transparent_crc(g_1768, "g_1768", print_hash_value);
    transparent_crc(g_1827, "g_1827", print_hash_value);
    transparent_crc(g_1889, "g_1889", print_hash_value);
    transparent_crc(g_2096, "g_2096", print_hash_value);
    transparent_crc(g_2098, "g_2098", print_hash_value);
    transparent_crc(g_2211, "g_2211", print_hash_value);
    transparent_crc(g_2309, "g_2309", print_hash_value);
    transparent_crc(g_2344, "g_2344", print_hash_value);
    transparent_crc(g_2360, "g_2360", print_hash_value);
    transparent_crc(g_2461, "g_2461", print_hash_value);
    transparent_crc(g_2464, "g_2464", print_hash_value);
    transparent_crc(g_2465, "g_2465", print_hash_value);
    transparent_crc(g_2642, "g_2642", print_hash_value);
    transparent_crc(g_2819, "g_2819", print_hash_value);
    transparent_crc(g_2833, "g_2833", print_hash_value);
    transparent_crc(g_2852, "g_2852", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
