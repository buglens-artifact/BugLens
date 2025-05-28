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
   const unsigned f0 : 27;
   char f1;
   signed f2 : 6;
   int f3;
   char f4;
   unsigned short f5;
   int f6;
   unsigned f7 : 5;
};

struct S1 {
   int f0;
};

struct S2 {
   const signed f0 : 11;
   signed f1 : 29;
   unsigned f2 : 24;
   const char f3;
   unsigned f4 : 4;
   signed f5 : 13;
};

struct S3 {
   unsigned f0 : 31;
   unsigned f1 : 21;
};


static const unsigned char g_14 = 254UL;
static char g_39 = 1L;
static unsigned g_43 = 4294967295UL;
static char * const g_47 = (void*)0;
static unsigned char g_55 = 0xECL;
static int g_57 = 0x7140DA8FL;
static unsigned short g_59 = 65531UL;
static const char *g_61 = (void*)0;
static const char **g_60 = &g_61;
static struct S1 g_63 = {0xCB6AEF2DL};
static struct S1 *g_62 = &g_63;
static struct S3 g_67 = {29260,610};
static struct S3 *g_68 = &g_67;
static unsigned g_72 = 4294967291UL;
static unsigned g_74 = 0UL;
static unsigned char g_85 = 247UL;
static short g_87 = 0L;
static char g_113 = 1L;
static unsigned g_120 = 0xBABBD54EL;
static struct S0 g_145 = {11114,-1L,-0,0L,0xEFL,0x3DBAL,0x1957E0FDL,0};
static struct S0 *g_144 = &g_145;
static struct S0 g_147 = {10220,8L,2,0x7D718789L,1L,0UL,-1L,2};
static unsigned short g_195 = 1UL;
static unsigned char *g_213 = &g_55;
static struct S2 g_220 = {16,-10955,1971,6L,2,-5};
static struct S2 g_223 = {-13,21299,1100,-10L,3,-5};
static struct S3 g_256 = {5227,332};
static int *g_359 = &g_63.f0;
static const unsigned g_397 = 0x31B4DFFAL;
static struct S0 g_399 = {8366,-9L,-1,3L,0x4BL,0xED0FL,0x6C2306FBL,1};
static struct S2 g_423 = {15,-20126,2029,-4L,0,-60};
static char g_435 = 0x64L;
static short g_486 = 0L;
static unsigned short **g_516 = (void*)0;
static int g_566 = 0xEF1E2145L;
static char *g_569 = &g_145.f4;
static short *g_601 = (void*)0;
static short **g_600 = &g_601;
static struct S0 **g_623 = &g_144;
static const int *g_628 = &g_399.f3;
static unsigned g_723 = 0x7334D9CFL;
static struct S0 g_724 = {1130,0xCFL,-5,0x18C241B1L,-10L,0UL,0x3D355041L,0};
static struct S2 g_774 = {-35,13267,3585,0x67L,3,-67};
static struct S0 g_876 = {601,0xB4L,2,0x39E58023L,7L,7UL,-1L,2};
static struct S2 *g_884 = &g_774;
static struct S2 **g_883 = &g_884;
static struct S0 g_909 = {10107,0L,7,-3L,-8L,0xC4B7L,-4L,1};
static struct S0 ***g_921 = (void*)0;
static struct S0 g_933 = {10489,0x55L,-4,0L,6L,0x5856L,0x3481B34DL,2};



static struct S2 func_1(void);
static struct S3 func_2(unsigned p_3);
static unsigned func_4(struct S0 p_5, char p_6, struct S0 p_7, struct S2 p_8);
static struct S0 func_9(const struct S0 p_10, int p_11);
static const struct S0 func_12(const short p_13);
static const int func_17(char p_18, const char p_19, struct S0 p_20, unsigned short p_21);
static unsigned char func_26(unsigned p_27, struct S3 p_28, struct S1 p_29, unsigned short p_30);
static unsigned char func_31(unsigned p_32);
static struct S3 func_44(char * const p_45, char * p_46);
static char * func_49(char p_50, unsigned short p_51, unsigned short p_52, const char ** p_53);
static struct S2 func_1(void)
{
    int l_710 = 0xA95974F7L;
    char *l_722 = (void*)0;
    struct S2 l_725 = {12,-9184,3018,1L,3,-89};
    struct S3 *l_914 = &g_256;
    struct S0 ***l_920 = &g_623;
    short ***l_924 = &g_600;
    short l_927 = 1L;
    struct S1 l_930 = {0x9F4CAC0AL};
    int *l_935 = &g_399.f3;
    (*l_914) = func_2(func_4(func_9(func_12(g_14), l_710), (g_723 = func_31(l_710)), g_724, l_725));

    ;

    ;
    ;
    ;

    for (g_63.f0 = (-2); (g_63.f0 == 19); g_63.f0 = safe_add_func_uint16_t_u_u(g_63.f0, 5))
    {
        int l_919 = (-10L);
        struct S0 ***l_922 = &g_623;
        struct S0 l_923 = {9597,-8L,-3,0x6ABD14B6L,0xFBL,0x3ED1L,1L,3};
        short ****l_925 = &l_924;
        int *l_926 = &g_724.f6;
        int **l_934 = (void*)0;
        if ((((-4L) & (safe_rshift_func_uint16_t_u_u(l_919, 3))) != (l_927 = ((((g_921 = l_920) == l_922) & (func_26((((g_223.f5 != (g_423.f1 = ((*l_926) = func_4(l_923, (((*l_925) = l_924) == &g_600), g_876, (**g_883))))) == 0x8234CD3DL) >= l_725.f4), (*l_914), (*g_62), l_725.f0) >= l_725.f5)) > 1L))))
        {
            (*l_926) = (safe_mul_func_int8_t_s_s((*g_569), (*g_569)));
        }
        else
        {
            struct S1 *l_931 = &l_930;
            struct S0 *l_932 = &g_933;
            (*l_931) = l_930;
            l_932 = (void*)0;

            ;
        }

        ;
        l_935 = &g_57;

        ;
    }


    ;
    ;
    return l_725;
}







static struct S3 func_2(unsigned p_3)
{
    int **l_912 = &g_359;
    struct S3 l_913 = {9015,1299};
    (*l_912) = (void*)0;

    ;
    return l_913;
}







static unsigned func_4(struct S0 p_5, char p_6, struct S0 p_7, struct S2 p_8)
{
    struct S3 l_737 = {4216,754};
    int *l_742 = &g_147.f3;
    const int *l_743 = &g_724.f6;
    struct S2 * const l_747 = &g_223;
    unsigned l_794 = 0x0E178892L;
    unsigned l_838 = 0xDF656AF7L;
    struct S3 l_906 = {42718,316};
    int **l_911 = &l_742;
    for (p_7.f5 = 0; (p_7.f5 > 39); ++p_7.f5)
    {
        unsigned l_728 = 1UL;
        struct S1 l_738 = {0xF32AAA48L};
        int l_793 = 0xBF54FC08L;
        int *l_841 = &g_399.f6;
        const short *l_854 = &g_486;
        const short **l_853 = &l_854;
        const short ***l_852 = &l_853;
        short ***l_862 = &g_600;
        short ***l_864 = &g_600;
        struct S0 *l_908 = &g_909;
    }
    (*l_911) = &g_57;

    ;
    return (*l_743);
}







static struct S0 func_9(const struct S0 p_10, int p_11)
{
    int *l_711 = &g_63.f0;
    int **l_712 = (void*)0;
    struct S3 l_713 = {28071,263};
    struct S3 l_714 = {34632,717};
    struct S0 l_721 = {11227,1L,3,1L,-1L,0x8D8AL,-1L,1};
    l_711 = l_711;
    l_713 = ((*g_68) = l_713);
    g_256 = ((*g_68) = l_714);
    for (g_399.f5 = 0; (g_399.f5 <= 49); g_399.f5 = safe_add_func_int8_t_s_s(g_399.f5, 8))
    {
        int *l_717 = &g_147.f3;
        int **l_718 = &g_359;
        struct S2 *l_720 = (void*)0;
        struct S2 **l_719 = &l_720;
        (*l_718) = l_717;

        ;
        (*l_719) = (void*)0;
        if (p_10.f4)
            break;
    }


    return l_721;
}







static const struct S0 func_12(const short p_13)
{
    unsigned short l_33 = 0xF4FCL;
    char *l_37 = (void*)0;
    char *l_38 = &g_39;
    int l_42 = (-10L);
    char **l_48 = &l_37;
    unsigned char *l_54 = &g_55;
    int *l_56 = &g_57;
    unsigned short *l_58 = &g_59;
    struct S1 l_434 = {0x31F01E25L};
    const char l_457 = (-1L);
    struct S0 l_458 = {9564,-1L,1,0x5BA0F185L,0L,65535UL,0xF429D25AL,0};
    int l_707 = 0x15D6A9CFL;
    int *l_708 = &g_399.f6;
    const struct S0 l_709 = {6766,-1L,2,-10L,2L,0xAF94L,-6L,2};
    (*l_708) = ((*l_56) = (safe_mod_func_int32_t_s_s(func_17(g_14, (((safe_rshift_func_uint8_t_u_s(((~(safe_add_func_uint8_t_u_u(func_26((func_31(l_33) && (g_43 = (safe_rshift_func_uint8_t_u_s((l_33 && ((*l_38) = 0L)), (l_42 = (safe_add_func_uint16_t_u_u(p_13, (~g_14)))))))), func_44(((*l_48) = g_47), func_49(((~(((*l_58) = (((*l_56) = (((*l_54) = 6UL) & p_13)) & g_14)) > 0x0EA3L)) & 1UL), g_14, l_33, g_60)), l_434, g_435), p_13))) < 0xEBL), p_13)) < p_13) & l_457), l_458, g_147.f4), l_707)));

    ;

    ;

    ;

    (*l_56) = p_13;
    return l_709;
}







static const int func_17(char p_18, const char p_19, struct S0 p_20, unsigned short p_21)
{
    unsigned *l_459 = &g_43;
    struct S3 l_461 = {39602,1165};
    const unsigned char *l_472 = &g_14;
    const unsigned char **l_471 = &l_472;
    int l_501 = 6L;
    struct S1 l_540 = {0L};
    unsigned char **l_558 = &g_213;
    int l_567 = 0x272DE33BL;
    struct S1 *l_583 = &g_63;
    struct S2 *l_611 = (void*)0;
    struct S2 **l_610 = &l_611;
    struct S0 **l_621 = &g_144;
    if ((+(((*l_459) = ((void*)0 != &g_14)) <= 0x4507E344L)))
    {
        int **l_460 = &g_359;
        int *l_463 = &g_399.f6;
        int **l_462 = &l_463;
        (*l_460) = l_459;

        ;
        (*g_68) = l_461;
        (*l_462) = ((*l_460) = l_459);

        ;
    }
    else
    {
        char * const l_466 = &g_147.f4;
        const unsigned char **l_473 = (void*)0;
        int l_482 = 0x9910F593L;
        unsigned short *l_483 = &g_195;
        short *l_484 = &g_87;
        short *l_485 = &g_486;
        struct S1 l_487 = {-10L};
        int l_500 = 0xBC4246ADL;
        struct S3 l_505 = {10260,1178};
        const char **l_530 = &g_61;
        char *l_562 = &g_39;
        char **l_561 = &l_562;
        struct S3 *l_570 = (void*)0;
        struct S1 **l_595 = &l_583;
        struct S0 **l_622 = (void*)0;
        int l_669 = 0x5BE0AD75L;
        struct S2 *l_689 = (void*)0;
        if ((safe_sub_func_int32_t_s_s(g_399.f1, (g_147.f6 = func_26(p_20.f1, (*g_68), l_487, g_220.f1)))))
        {
            for (p_20.f4 = (-27); (p_20.f4 == 7); p_20.f4 = safe_add_func_int32_t_s_s(p_20.f4, 9))
            {
                return g_43;
            }
        }
        else
        {
            unsigned l_503 = 4294967295UL;
            struct S3 l_534 = {26973,451};
            int l_543 = 7L;
            struct S1 l_544 = {-7L};
            unsigned char **l_559 = &g_213;
            const char **l_568 = &g_61;
            int **l_594 = &g_359;
            if ((((((*l_483) = ((safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((((((-1L) & p_21) <= (safe_sub_func_int32_t_s_s((&p_20 != &g_145), (p_20.f5 && l_461.f0)))) >= (((safe_sub_func_int32_t_s_s(l_482, func_31(g_145.f3))) && p_20.f6) ^ l_500)) == p_20.f6), l_501)), l_482)), p_20.f5)) == l_461.f1)) | 0xE83CL) & l_500) && p_20.f1))
            {
                char * const l_502 = &g_399.f1;
                int l_504 = 9L;
                int *l_510 = &g_145.f3;
                struct S1 * const **l_527 = (void*)0;
                struct S3 l_547 = {25318,1238};
                (*g_68) = l_505;
                (*l_510) = (safe_sub_func_uint16_t_u_u(((*l_483) = (safe_lshift_func_uint16_t_u_s(l_501, 4))), p_20.f4));
                for (g_435 = 0; (g_435 == (-6)); g_435--)
                {
                    int l_515 = 0L;
                    unsigned short **l_517 = (void*)0;
                    unsigned short ***l_518 = &l_517;
                    struct S3 l_539 = {36596,1055};
                    l_510 = l_459;

                    ;
                    (*g_68) = l_505;
                    for (g_145.f4 = 27; (g_145.f4 > (-17)); --g_145.f4)
                    {
                        int **l_533 = &l_510;
                        (*l_533) = &g_57;

                        ;
                        (*g_68) = l_534;
                        if (p_20.f1)
                            break;
                        g_220.f1 = ((*l_510) = p_20.f5);
                    }

                    ;
                    if ((safe_mul_func_int16_t_s_s(p_20.f5, (((*l_483) = (l_515 = (safe_mod_func_uint16_t_u_u((l_515 > p_21), func_26(l_515, l_539, l_540, (*l_510)))))) || func_26((safe_rshift_func_uint16_t_u_s((l_543 = (6UL <= p_20.f7)), 2)), l_505, l_544, p_20.f4)))))
                    {
                        int **l_545 = (void*)0;
                        int **l_546 = &l_510;
                        (*l_546) = (void*)0;

                        ;
                        l_547 = l_539;
                    }
                    else
                    {
                        int **l_548 = &l_510;
                        (*l_510) = l_540.f0;
                        (*l_548) = &g_57;

                        ;
                        (*l_548) = (void*)0;

                        ;
                        g_144 = &g_145;

                        ;
                    }

                    ;
                }

                ;
            }
            else
            {
                unsigned char ***l_560 = &l_559;
                char ***l_563 = (void*)0;
                char ***l_564 = &l_561;
                const char **l_565 = &g_61;
                int **l_575 = &g_359;
                (*g_68) = l_505;
                if (g_145.f3)
                {
                    (*g_62) = (*g_62);
                }
                else
                {
                    int *l_571 = &g_145.f3;
                    int **l_572 = &l_571;
                    struct S3 l_573 = {16337,458};
                    struct S1 l_574 = {0x9EA72F12L};
                    (*l_571) = (&l_505 != l_570);
                    (*l_572) = &l_482;

                    ;
                    (**l_572) = ((1UL & 0UL) && 0x1C8EL);
                    (**l_572) = ((-10L) <= (func_26((((*l_571) && (*l_571)) <= g_87), l_573, l_574, g_145.f5) & p_20.f5));
                }
                (*l_575) = l_459;

                ;
                for (g_435 = (-21); (g_435 != 0); ++g_435)
                {
                    unsigned char *l_588 = &g_55;
                    int l_589 = (-1L);
                    struct S3 **l_593 = &g_68;
                    if ((safe_div_func_uint32_t_u_u(func_31((safe_unary_minus_func_int8_t_s(1L))), (**l_575))))
                    {
                        return p_21;
                    }
                    else
                    {
                        int *l_582 = (void*)0;
                        int **l_581 = &l_582;
                        p_20.f3 = func_31(p_19);
                        (*l_581) = ((*l_575) = l_459);

                        ;
                        ;
                        (**l_581) = (&g_57 != &l_500);
                        l_583 = &g_63;
                    }

                    ;
                    if ((safe_sub_func_int8_t_s_s(l_540.f0, ((((safe_sub_func_uint32_t_u_u(0xB9B127E9L, (0xB7L == (~((*l_588) = p_18))))) | l_589) >= 0xABB22044L) | (**l_575)))))
                    {
                        int *l_590 = &g_145.f3;
                        (**l_575) = (l_482 == (**l_575));
                        if (p_20.f2)
                            continue;
                        (*l_575) = (*l_575);
                        (*l_575) = l_590;

                        ;
                    }
                    else
                    {
                        struct S3 **l_591 = (void*)0;
                        struct S3 **l_592 = &g_68;
                        if ((**l_575))
                            break;
                        (*l_592) = &g_67;
                        l_593 = &g_68;
                    }

                    ;
                }

                ;
            }


            (*l_594) = (void*)0;

            ;
        }
        (*l_595) = &l_487;

        ;
        if (g_220.f2)
        {
            struct S2 *l_603 = &g_220;
            int *l_607 = &g_399.f3;
            struct S1 l_614 = {-10L};
            struct S0 ***l_624 = &l_622;
            int *l_630 = &g_147.f3;
            unsigned **l_646 = &l_459;
            for (g_145.f5 = 0; (g_145.f5 <= 55); g_145.f5 = safe_add_func_int8_t_s_s(g_145.f5, 3))
            {
                int *l_602 = &l_500;
                struct S2 **l_604 = &l_603;
                (*l_602) = (safe_lshift_func_int16_t_s_u(((*l_484) = ((void*)0 == g_600)), 0));
                (*l_604) = l_603;
            }
            for (g_72 = (-4); (g_72 != 33); ++g_72)
            {
                int **l_608 = &g_359;
                int **l_609 = &l_607;
                (*l_609) = ((*l_608) = l_607);

                ;
                l_540.f0 = ((void*)0 != l_610);
                (*l_608) = &g_57;

                ;
            }
            if (((func_31(((p_20.f5 = 65531UL) || (safe_rshift_func_uint8_t_u_u(func_26(l_487.f0, l_461, l_614, p_21), (safe_rshift_func_uint8_t_u_s(g_147.f0, (safe_div_func_int16_t_s_s(((safe_add_func_int8_t_s_s((l_621 == ((*l_624) = (g_623 = l_622))), 0xA3L)) < 0xBEC4CC88L), l_482)))))))) != l_505.f0) & l_482))
            {
                return p_20.f0;
            }
            else
            {
                const int *l_627 = &l_500;
                struct S1 l_629 = {0x2B9D7D9CL};
                int **l_632 = &l_607;
                const char *l_641 = &g_113;
                if ((safe_rshift_func_int8_t_s_s(0L, p_21)))
                {
                    g_628 = l_627;

                    ;
                }
                else
                {
                    l_614 = l_629;
                    g_628 = l_630;

                    ;
                    if (p_19)
                        goto lbl_631;
                }

                ;
lbl_631:
                g_359 = l_607;

                ;
                (*l_632) = l_607;
                (**l_632) = func_31(((safe_sub_func_int8_t_s_s((safe_div_func_uint32_t_u_u((&g_144 != &g_144), (-1L))), ((*l_562) = ((safe_add_func_int8_t_s_s(p_20.f4, p_20.f6)) & (((*l_530) = l_641) != &p_18))))) || ((safe_add_func_int8_t_s_s((*g_61), (safe_add_func_int8_t_s_s((*l_627), (**l_632))))) || p_20.f6)));

                ;
            }

            ;
            ;
            ;
            ;
            (*l_607) = (l_607 != ((*l_646) = &g_74));

            ;
        }
        else
        {
            unsigned short l_668 = 0UL;
            struct S3 l_684 = {33088,1057};
            unsigned short **l_686 = &l_483;
            int *l_698 = &g_63.f0;
            for (g_195 = 0; (g_195 > 35); g_195 = safe_add_func_uint32_t_u_u(g_195, 1))
            {
                unsigned char l_663 = 0x54L;
                int *l_666 = (void*)0;
                int *l_667 = &g_57;
                unsigned char *l_670 = (void*)0;
                unsigned char *l_671 = &g_55;
                struct S1 l_680 = {-1L};
                unsigned short **l_685 = &l_483;
                struct S0 *l_691 = &g_399;
                if ((((safe_mul_func_int8_t_s_s((g_435 | ((p_20.f1 = (safe_mul_func_uint8_t_u_u(((*l_671) = (safe_sub_func_int32_t_s_s((func_31(((-10L) > (safe_add_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u(l_663, (safe_lshift_func_uint16_t_u_u((&g_59 == &g_195), (((*l_667) = 0x806F2C08L) > l_500))))), 1)) == (l_668 || p_20.f6)), p_18)) > l_669), 2L)))) ^ l_501), l_461.f0))), p_18))) ^ 1L)), p_20.f5)) >= g_423.f4) > p_18))
                {
                    int * const l_674 = &l_487.f0;
                    short l_681 = 1L;
                    struct S3 l_690 = {25496,225};
                    if (func_31(((*l_459) = ((safe_add_func_uint32_t_u_u(0xFA3DD422L, l_668)) < p_20.f3))))
                    {
                        int **l_675 = &g_359;
                        (*l_621) = &p_20;

                        ;
                        (*l_675) = l_674;

                        ;
                        p_20.f3 = func_31(((*l_459) = ((func_26((safe_mul_func_uint16_t_u_u(((((safe_rshift_func_uint8_t_u_u(253UL, 0)) != ((*l_459) = (func_26((*l_667), (*g_68), l_680, l_681) <= (((safe_add_func_uint16_t_u_u(func_31(p_20.f0), ((l_540.f0 = p_20.f2) & l_668))) <= p_19) <= g_399.f5)))) != (-7L)) < l_505.f1), g_220.f4)), l_684, (*g_62), p_21) ^ 0x63AE9033L) || g_220.f2)));


                    }
                    else
                    {
                        l_686 = l_685;
                    }
                    if ((p_20.f7 || func_31((safe_mul_func_int16_t_s_s(0xA784L, g_399.f4)))))
                    {
                        l_689 = (void*)0;
                        if (l_501)
                            break;
                    }
                    else
                    {
                        if (p_20.f3)
                            break;
                        (*g_68) = l_690;
                        (*g_623) = l_691;

                        ;
                    }
                    l_540.f0 = ((safe_sub_func_int32_t_s_s(((p_20.f7 > (((safe_rshift_func_int16_t_s_s(0x0A27L, 2)) || (g_145.f3 & (-6L))) || (safe_mul_func_int16_t_s_s(((*l_484) = 1L), (func_26((255UL | (*g_569)), l_684, (*g_62), p_20.f2) <= p_20.f0))))) >= l_684.f0), l_668)) == 0x31E5EA7CL);
                }
                else
                {
                    int **l_699 = (void*)0;
                    int **l_700 = &l_666;
                    (*l_667) = p_20.f6;
                    if (p_21)
                        continue;
                    g_628 = ((*l_700) = l_698);

                    ;
                    ;
                    (*l_700) = (void*)0;

                    ;
                }
                (*l_610) = &g_223;

                ;
            }

            ;

            ;
            ;
        }

        ;
        ;

        ;
        ;
        ;
        ;
        (*l_610) = &g_220;

        ;
    }

    ;
    ;

    ;

    ;
    ;

    for (g_195 = 6; (g_195 <= 40); g_195 = safe_add_func_int32_t_s_s(g_195, 1))
    {
        unsigned l_703 = 3UL;
        const char ***l_704 = (void*)0;
        const char ***l_705 = (void*)0;
        const char ***l_706 = &g_60;
        if (l_703)
            break;
        (*g_62) = (*g_62);
        (*l_706) = &g_61;
    }
    return l_461.f1;


}







static unsigned char func_26(unsigned p_27, struct S3 p_28, struct S1 p_29, unsigned short p_30)
{
    unsigned char **l_436 = &g_213;
    unsigned char **l_437 = &g_213;
    int l_440 = 0x85B942BDL;
    unsigned *l_441 = (void*)0;
    unsigned *l_442 = &g_72;
    struct S0 **l_446 = &g_144;
    struct S0 ***l_445 = &l_446;
    int *l_447 = &g_57;
    int l_450 = 1L;
    int **l_455 = (void*)0;
    int **l_456 = &l_447;
    (*l_447) = (func_31(((l_436 = (void*)0) != l_437)) | (safe_rshift_func_int8_t_s_s(func_31(func_31(((*l_442) = func_31(l_440)))), (safe_sub_func_uint8_t_u_u((l_445 != (void*)0), 0x46L)))));

    ;
    (*g_68) = (*g_68);
    if ((safe_sub_func_uint32_t_u_u(g_74, l_450)))
    {
        int **l_451 = (void*)0;
        int **l_452 = &g_359;
        (*l_452) = &l_440;

        ;
        return p_28.f0;


    }
    else
    {
        const int *l_453 = &g_63.f0;
        const int **l_454 = &l_453;
        (*l_454) = l_453;
    }
    (*l_456) = &g_57;
    return p_28.f1;
}







static unsigned char func_31(unsigned p_32)
{
    unsigned l_34 = 0UL;
    return l_34;
}







static struct S3 func_44(char * const p_45, char * p_46)
{
    const unsigned short *l_70 = &g_59;
    unsigned *l_71 = &g_72;
    unsigned *l_73 = &g_74;
    int *l_75 = &g_63.f0;
    const char **l_210 = &g_61;
    struct S2 *l_219 = &g_220;
    char *l_270 = (void*)0;
    char **l_269 = &l_270;
    const struct S3 l_290 = {31844,18};
    struct S1 l_291 = {0x8969514CL};
    unsigned short l_310 = 65535UL;
    short l_335 = 0x332AL;
    unsigned l_407 = 0xECEFA5D4L;
lbl_79:
    (*l_75) = func_31(((*l_73) = ((*l_71) = func_31(func_31(func_31(((void*)0 != l_70)))))));
    if ((g_55 ^ ((void*)0 != &g_67)))
    {
        int *l_76 = &g_57;
        unsigned char l_101 = 0x68L;
        struct S1 * const *l_160 = &g_62;
        struct S1 * const *l_163 = &g_62;
        unsigned char l_168 = 255UL;
        l_75 = l_76;

        ;
lbl_102:
        for (g_55 = 0; (g_55 > 55); g_55 = safe_add_func_int32_t_s_s(g_55, 4))
        {
            struct S1 l_90 = {0xCDB2BF7FL};
            int *l_100 = &l_90.f0;
            if (g_55)
                goto lbl_79;
        }
        if (l_101)
        {
            int l_105 = 0xA99849AAL;
            struct S3 *l_139 = &g_67;
            struct S0 *l_146 = &g_147;
            (*l_76) = g_72;
            if (g_55)
                goto lbl_102;
            for (g_72 = 0; (g_72 == 24); ++g_72)
            {
                int l_106 = 0xD733C455L;
                char *l_112 = &g_113;
                unsigned short *l_121 = &g_59;
                unsigned char *l_122 = (void*)0;
                unsigned char *l_123 = &g_55;
                char *l_124 = (void*)0;
                if (l_105)
                    break;
            }
        }
        else
        {
            int l_181 = 0x07ABCEE7L;
            struct S3 l_183 = {24426,89};
            struct S1 ***l_184 = (void*)0;
            struct S1 **l_186 = &g_62;
            struct S1 ***l_185 = &l_186;
            for (g_87 = 0; (g_87 < (-5)); --g_87)
            {
                char l_155 = 1L;
                char ***l_156 = (void*)0;
                char *l_159 = &g_145.f4;
                char **l_158 = &l_159;
                char ***l_157 = &l_158;
                struct S1 * const **l_161 = (void*)0;
                struct S1 * const **l_162 = &l_160;
                if ((safe_rshift_func_uint8_t_u_u(l_155, ((((*l_157) = &p_46) != &p_45) < (((*l_162) = l_160) != l_163)))))
                {
                    unsigned l_182 = 1UL;
                    for (g_85 = 0; (g_85 == 18); g_85 = safe_add_func_uint8_t_u_u(g_85, 8))
                    {
                        unsigned short *l_169 = &g_59;
                        int l_170 = 0x7E2076EBL;
                        (*l_75) = (safe_sub_func_int16_t_s_s(((((*l_169) = l_168) && (p_45 == ((*l_158) = p_46))) <= l_170), ((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((func_31((safe_mul_func_int8_t_s_s(func_31(((*l_71) = ((*l_73) = (safe_lshift_func_uint16_t_u_u(l_181, func_31(g_145.f7)))))), l_182))) > (*l_75)), l_182)) | l_182), l_182)), l_181)) ^ l_155)));
                    }
                }
                else
                {
                    return l_183;
                }

                ;
                (*l_75) = (*l_76);
                (*l_75) = l_155;
            }
            (*l_185) = &g_62;
        }
    }
    else
    {
        unsigned short l_189 = 65535UL;
        int *l_207 = &g_63.f0;
        const struct S0 *l_231 = &g_147;
        unsigned l_243 = 1UL;
        struct S2 **l_252 = &l_219;
        struct S3 l_254 = {25131,708};
        struct S1 l_289 = {0x7DC95DA5L};
        int **l_293 = &l_207;
        int **l_294 = &l_75;
        char *l_305 = &g_147.f1;
        unsigned short *l_306 = &l_189;
        unsigned short l_307 = 0xAD02L;
        if ((safe_sub_func_uint32_t_u_u(l_189, g_145.f4)))
        {
            struct S3 l_190 = {20939,459};
            return l_190;
        }
        else
        {
            int l_200 = 0x5BC01747L;
            unsigned char *l_216 = &g_55;
            struct S1 l_234 = {0xAC587C63L};
            unsigned *l_241 = &g_72;
            unsigned **l_242 = &l_73;
            int *l_247 = &g_145.f3;
lbl_217:
            g_60 = &g_61;
            if ((safe_add_func_int8_t_s_s((((safe_mul_func_int16_t_s_s(g_195, (safe_mul_func_uint8_t_u_u(l_189, ((g_67.f0 >= (safe_div_func_int32_t_s_s(((*l_75) = (*l_75)), (~(func_31(l_200) & (+(safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(l_189, g_72)), 1)))))))) < (+(((*l_73) = func_31(g_147.f1)) | 0xA7DDC295L))))))) & g_72) > l_200), 252UL)))
            {
                short l_209 = 0x5926L;
                unsigned char **l_211 = (void*)0;
                unsigned char **l_212 = (void*)0;
                unsigned char *l_215 = &g_55;
                unsigned char **l_214 = &l_215;
                struct S2 *l_222 = &g_223;
                int l_230 = 0x93F5E3F8L;
                int *l_235 = (void*)0;
                int **l_236 = &l_75;
                for (g_145.f6 = 0; (g_145.f6 > (-28)); g_145.f6 = safe_sub_func_uint16_t_u_u(g_145.f6, 6))
                {
                    int **l_208 = &l_207;
                    (*l_208) = l_207;
                    if (l_189)
                        goto lbl_218;
                    return (*g_68);
                }
                if (((l_216 = ((*l_214) = (g_213 = func_49(func_31(g_74), g_55, l_209, l_210)))) != &g_55))
                {
                    if ((*l_75))
                    {
lbl_218:
                        if (g_195)
                            goto lbl_217;
                        (*l_207) = 0L;
                    }
                    else
                    {
                        struct S2 **l_221 = &l_219;
                        int *l_224 = &g_145.f6;
                        int **l_225 = &l_207;
                        struct S0 *l_226 = &g_147;
                        struct S0 **l_227 = &g_144;
                        struct S0 **l_228 = (void*)0;
                        struct S0 **l_229 = &l_226;
                        l_222 = ((*l_221) = l_219);

                        ;
                        (*l_225) = l_224;

                        ;
                        (*l_229) = ((*l_227) = l_226);

                        ;
                    }

                    ;
                    ;
                    ;
                    ;
                    ;
                    ;
                }
                else
                {
                    (*g_62) = (*g_62);
                    if (g_72)
                    {
                        const struct S0 **l_232 = (void*)0;
                        const struct S0 **l_233 = &l_231;
                        l_230 = ((-1L) > ((*l_75) = (l_209 & (g_223.f2 <= g_113))));
                        g_220.f5 = ((*l_207) = (((*l_73) = (((((((*l_75) < ((*l_207) ^ l_200)) != (*l_207)) < 4294967295UL) || (*l_207)) | g_147.f3) | 1L)) < g_14));
                        (*l_233) = l_231;
                    }
                    else
                    {
                        (*g_62) = l_234;
                        (*g_68) = (*g_68);
                    }
                }

                ;
                ;
                ;
                ;
                (*l_236) = l_235;

                ;
            }
            else
            {
                unsigned short **l_237 = (void*)0;
                unsigned short ***l_238 = &l_237;
                (*l_207) = g_147.f4;
                (*l_238) = l_237;
            }

            ;
            ;
            ;
            if ((safe_add_func_int32_t_s_s(((l_241 == ((*l_242) = l_207)) ^ l_243), ((l_234.f0 | 1UL) | l_200))))
            {
                int **l_244 = (void*)0;
                int **l_245 = &l_75;
                (*l_245) = l_71;

                ;
                return (*g_68);
            }
            else
            {
                int **l_246 = (void*)0;
                l_247 = (void*)0;

                ;
            }

            ;
            ;
        }

        ;
        ;
        ;
        ;
        ;
        for (g_120 = 0; (g_120 == 43); g_120 = safe_add_func_int8_t_s_s(g_120, 1))
        {
            int *l_250 = &g_147.f3;
            int **l_251 = &l_75;
            int l_276 = 0x7E2C62B3L;
            struct S1 *l_292 = &l_289;
            (*l_251) = l_250;

            ;
            if ((*l_75))
            {
                struct S2 ***l_253 = &l_252;
                struct S3 *l_255 = &g_256;
                int l_257 = 0x5D2FD926L;
                (*l_253) = l_252;
                (*l_255) = (l_254 = ((*g_68) = (*g_68)));
                if (l_257)
                {
                    (*l_75) = (*l_75);
                    return (*g_68);
                }
                else
                {
                    const struct S1 l_262 = {0xEE32586AL};
                    for (g_63.f0 = 0; (g_63.f0 == 0); g_63.f0 = safe_add_func_uint8_t_u_u(g_63.f0, 6))
                    {
                        char *l_260 = &g_145.f4;
                        char *l_261 = &g_145.f1;
                        (*l_75) = ((g_147.f4 == ((*l_261) = ((*l_260) = (((*l_253) = (*l_253)) == (void*)0)))) || g_145.f1);
                    }
                    (*g_62) = l_262;
                    (*l_251) = (void*)0;

                    ;
                }

                ;
            }
            else
            {
                int l_263 = 0x653397D4L;
                const unsigned l_288 = 4294967289UL;
                if (l_263)
                {
                    const struct S2 * const l_266 = &g_223;
                    struct S1 **l_274 = &g_62;
                    int l_275 = (-9L);
                    for (g_145.f3 = 0; (g_145.f3 == 17); g_145.f3 = safe_add_func_uint32_t_u_u(g_145.f3, 4))
                    {
                        const struct S2 *l_268 = (void*)0;
                        const struct S2 **l_267 = &l_268;
                        char ***l_271 = &l_269;
                        char **l_273 = (void*)0;
                        char ***l_272 = &l_273;
                        (*l_267) = l_266;

                        ;
                        (*l_272) = ((*l_271) = l_269);

                        ;
                        (*l_251) = l_71;

                        ;
                    }

                    ;
                    (*l_251) = (*l_251);
                    (*l_274) = &g_63;
                    (**l_251) = (!l_275);
                }
                else
                {
                    unsigned l_277 = 0x0DE5B823L;
                    if (func_31(l_276))
                    {
                        (*l_251) = &g_57;

                        ;
                    }
                    else
                    {
                        if (g_85)
                            break;
                        if ((*l_250))
                            break;
                        (**l_251) = l_277;
                    }

                    ;
                    if (((g_220.f4 > (((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(g_145.f7, 5)), l_263)) || (((safe_mul_func_int8_t_s_s(l_277, l_277)) & (**l_251)) == l_288)) >= g_220.f5)) != (-4L)))
                    {
                        return (*g_68);
                    }
                    else
                    {
                        (*g_62) = l_289;
                        (*l_251) = &g_57;

                        ;
                        (*g_68) = l_290;
                    }

                    ;
                    (*l_75) = (-1L);
                }

                ;
                if ((*l_75))
                    continue;
            }

            ;
            (*l_292) = ((*g_62) = l_291);
        }

        ;
        (*l_294) = ((*l_293) = l_71);

        ;
        ;
        (**l_293) = ((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s((*l_75), (safe_lshift_func_uint16_t_u_s((((safe_rshift_func_uint16_t_u_u(((*l_306) = (safe_add_func_uint16_t_u_u((func_31((((*l_306) = (((*l_305) = (**l_293)) < ((*l_75) & (*l_207)))) >= ((-5L) > (l_307 <= ((*l_73) = (*l_75)))))) && (safe_add_func_uint8_t_u_u(((*l_75) <= 0UL), 0xACL))), (*l_207)))), (**l_293))) ^ 1L) || 0x89850A8AL), l_310)))) & 0L), (**l_294))) & (**l_294));
    }

    ;
    ;
    ;
    ;
    for (g_145.f1 = 0; (g_145.f1 < (-26)); g_145.f1--)
    {
        return (*g_68);
    }
    if (((*l_75) = (safe_div_func_uint16_t_u_u(g_113, (*l_75)))))
    {
        short l_317 = 0L;
        unsigned char l_322 = 0x87L;
        unsigned short *l_331 = (void*)0;
        unsigned short *l_332 = (void*)0;
        unsigned short *l_333 = (void*)0;
        unsigned short *l_334 = &g_145.f5;
        short *l_336 = &l_335;
        int l_348 = 0xD163A2F5L;
        struct S1 l_381 = {0xED34DC58L};
        struct S0 *l_392 = &g_145;
        struct S3 l_412 = {4949,954};
        int **l_419 = &g_359;
        if (((*l_75) || ((*l_336) = ((((g_85 = 0xBBL) != func_31(func_31((safe_div_func_int16_t_s_s((((*l_75) = 0x092C0A3AL) || l_317), ((*l_334) = (safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u(func_31(l_322), func_31(((*l_73) = (safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((&g_213 == &g_213) | ((((*l_334) = ((safe_rshift_func_uint16_t_u_s(l_317, 5)) ^ l_322)) >= l_335) | g_74)), 4)), 255UL)), g_145.f4)))))) < (-7L)), l_317)))))))) == g_145.f4) != l_322))))
        {
            struct S1 **l_345 = &g_62;
            struct S1 **l_347 = &g_62;
            int l_350 = 0x38E5D4F6L;
            unsigned char *l_376 = &g_55;
            int l_377 = 0xBBA61E40L;
            struct S0 *l_398 = &g_399;
            int **l_400 = &g_359;
            if (((*l_75) = g_85))
            {
                struct S3 *l_337 = &g_256;
                char *l_342 = (void*)0;
                struct S1 ***l_346 = &l_345;
                int *l_358 = (void*)0;
                (*l_75) = 0x12955A25L;
                (*l_337) = ((*g_68) = (*g_68));
                if ((safe_mul_func_int8_t_s_s(((l_342 != (*g_60)) > (l_348 = (l_317 != (safe_sub_func_uint32_t_u_u((((*l_73) = (!((((*l_346) = l_345) == l_347) < (*l_75)))) | (g_147.f2 = (func_31((*l_75)) != g_220.f5))), g_223.f5))))), 1L)))
                {
                    struct S1 l_349 = {-2L};
                    int *l_351 = &g_147.f3;
                    (*g_62) = l_349;
                    if (func_31(l_350))
                    {
                        int **l_352 = &l_75;
                        l_75 = l_351;

                        ;
                        (*l_352) = l_75;
                        (*g_62) = l_291;
                        (**l_352) = (*l_351);
                    }
                    else
                    {
                        short **l_353 = &l_336;
                        short ***l_354 = &l_353;
                        short **l_356 = &l_336;
                        short ***l_355 = &l_356;
                        int **l_357 = &l_351;
                        (*l_355) = ((*l_354) = l_353);
                        (*l_357) = l_351;
                    }

                    ;
                }
                else
                {
                    int **l_360 = (void*)0;
                    int **l_361 = &l_358;
                    (*l_361) = (g_359 = l_358);

                    ;
                }

                ;
                ;
            }
            else
            {
                int l_366 = (-4L);
                int *l_367 = &l_350;
                struct S1 **l_378 = (void*)0;
                if ((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_s((l_366 = (g_145.f5 = 0xB8A6L)), (*l_75))) & g_220.f4), (*l_75))))
                {
                    int **l_368 = (void*)0;
                    int **l_369 = &l_367;
                    (*l_369) = l_367;
                    (*g_359) = (*g_359);
                }
                else
                {
                    int **l_370 = &l_367;
                    unsigned char **l_375 = &g_213;
                    (*l_370) = &l_348;

                    ;
                    (*l_370) = &l_350;

                    ;
                    (*l_75) = (g_145.f6 > ((((*g_359) | func_31((((*l_71) = ((((*l_367) = l_348) <= (safe_lshift_func_uint8_t_u_s((((safe_mod_func_int32_t_s_s((g_145.f3 = (((l_376 = ((*l_375) = p_46)) != &g_55) & g_55)), (*g_359))) <= ((*l_336) = ((l_322 && (l_377 < 0x8894L)) < l_377))) & (*l_75)), l_377))) > g_55)) & (-10L)))) <= l_377) == 0x917AL));

                    ;
                    ;
                    (*l_367) = (l_378 != (void*)0);
                }

                ;
                for (l_366 = 0; (l_366 <= (-16)); l_366--)
                {
                    (**l_345) = l_381;
                }
                (*l_367) = ((l_322 | ((*l_75) == (safe_div_func_int32_t_s_s((((*g_359) = (func_31(l_322) >= (safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((*l_367) <= g_145.f1), (safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((&g_147 == (l_392 = l_392)) < (safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((g_147.f3 || 1L), (*l_75))), l_377))), 248UL)), g_397)))), (*g_359))))) || 0xA882262BL), l_350)))) <= (*l_75));
                (*g_62) = (*g_62);
            }

            ;
            ;
            ;
            l_398 = l_392;

            ;
            (*l_400) = &g_57;

            ;
        }
        else
        {
            char l_406 = 9L;
            for (g_195 = 0; (g_195 != 9); g_195 = safe_add_func_int32_t_s_s(g_195, 5))
            {
                int **l_403 = &l_75;
                (*l_403) = &g_57;

                ;
            }
            l_407 = (safe_add_func_int32_t_s_s(((*g_359) = ((*l_75) = l_406)), (((0xDBD2L | 0x2D69L) | 0xFAL) > func_31(l_322))));
        }

        ;
        ;
        if (l_381.f0)
        {
            struct S1 l_408 = {-1L};
            int **l_413 = &g_359;
            (*g_62) = l_408;
            for (g_145.f4 = (-23); (g_145.f4 == (-6)); g_145.f4 = safe_add_func_int32_t_s_s(g_145.f4, 4))
            {
                int **l_411 = &g_359;
                (*l_411) = &g_57;

                ;
                return l_412;
            }
            (*l_413) = &g_57;

            ;
            for (g_145.f6 = (-27); (g_145.f6 >= (-18)); g_145.f6 = safe_add_func_uint16_t_u_u(g_145.f6, 1))
            {
                struct S3 l_417 = {39313,478};
                if (((**l_413) = (**l_413)))
                {
                    (**l_413) = l_322;
                    (*l_75) = (((func_31(g_223.f1) ^ (**l_413)) <= (*l_75)) != (!(-1L)));
                }
                else
                {
                    struct S1 l_416 = {-1L};
                    (*l_413) = &g_57;

                    ;
                    (*g_62) = l_416;
                    if (l_416.f0)
                        continue;
                    if ((*g_359))
                    {
                        (*l_413) = l_71;

                        ;
                        (*g_62) = (*g_62);
                        (*g_68) = l_417;
                    }
                    else
                    {
                        (*g_62) = (*g_62);
                    }

                    ;
                }
                if ((*l_75))
                    break;
            }

            ;
        }
        else
        {
            int **l_418 = &g_359;
            (*l_418) = (void*)0;

            ;
            return l_412;
        }

        ;
        (*l_419) = l_73;

        ;
        for (g_85 = 15; (g_85 != 54); g_85 = safe_add_func_uint8_t_u_u(g_85, 1))
        {
            struct S2 *l_422 = &g_423;
            l_422 = &g_223;

            ;
            if ((*g_359))
                break;
        }
    }
    else
    {
        struct S0 **l_428 = (void*)0;
        int *l_431 = (void*)0;
        int **l_432 = (void*)0;
        int **l_433 = &l_431;
        for (g_145.f4 = 0; (g_145.f4 >= 18); g_145.f4 = safe_add_func_uint8_t_u_u(g_145.f4, 4))
        {
            struct S0 **l_426 = &g_144;
            struct S0 ***l_427 = &l_426;
            const int l_429 = 0x6B304CEDL;
            int **l_430 = &l_75;
            (*l_75) = ((*g_359) = ((func_31((*l_75)) ^ ((*l_75) && ((((*l_427) = l_426) == l_428) ^ l_429))) <= g_145.f3));
            (*l_430) = &g_57;

            ;
        }
        (*l_433) = l_431;
    }

    ;
    ;
    return l_290;
}







static char * func_49(char p_50, unsigned short p_51, unsigned short p_52, const char ** p_53)
{
    struct S1 *l_64 = &g_63;
    struct S1 **l_65 = &g_62;
    struct S3 *l_66 = &g_67;
    char *l_69 = (void*)0;
    (*l_65) = (l_64 = g_62);
    (**l_65) = (*l_64);
    g_68 = l_66;
    (*l_66) = (*l_66);
    return l_69;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_63.f0, "g_63.f0", print_hash_value);
    transparent_crc(g_67.f0, "g_67.f0", print_hash_value);
    transparent_crc(g_67.f1, "g_67.f1", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_145.f0, "g_145.f0", print_hash_value);
    transparent_crc(g_145.f1, "g_145.f1", print_hash_value);
    transparent_crc(g_145.f2, "g_145.f2", print_hash_value);
    transparent_crc(g_145.f3, "g_145.f3", print_hash_value);
    transparent_crc(g_145.f4, "g_145.f4", print_hash_value);
    transparent_crc(g_145.f5, "g_145.f5", print_hash_value);
    transparent_crc(g_145.f6, "g_145.f6", print_hash_value);
    transparent_crc(g_145.f7, "g_145.f7", print_hash_value);
    transparent_crc(g_147.f0, "g_147.f0", print_hash_value);
    transparent_crc(g_147.f1, "g_147.f1", print_hash_value);
    transparent_crc(g_147.f2, "g_147.f2", print_hash_value);
    transparent_crc(g_147.f3, "g_147.f3", print_hash_value);
    transparent_crc(g_147.f4, "g_147.f4", print_hash_value);
    transparent_crc(g_147.f5, "g_147.f5", print_hash_value);
    transparent_crc(g_147.f6, "g_147.f6", print_hash_value);
    transparent_crc(g_147.f7, "g_147.f7", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_220.f0, "g_220.f0", print_hash_value);
    transparent_crc(g_220.f1, "g_220.f1", print_hash_value);
    transparent_crc(g_220.f2, "g_220.f2", print_hash_value);
    transparent_crc(g_220.f3, "g_220.f3", print_hash_value);
    transparent_crc(g_220.f4, "g_220.f4", print_hash_value);
    transparent_crc(g_220.f5, "g_220.f5", print_hash_value);
    transparent_crc(g_223.f0, "g_223.f0", print_hash_value);
    transparent_crc(g_223.f1, "g_223.f1", print_hash_value);
    transparent_crc(g_223.f2, "g_223.f2", print_hash_value);
    transparent_crc(g_223.f3, "g_223.f3", print_hash_value);
    transparent_crc(g_223.f4, "g_223.f4", print_hash_value);
    transparent_crc(g_223.f5, "g_223.f5", print_hash_value);
    transparent_crc(g_256.f0, "g_256.f0", print_hash_value);
    transparent_crc(g_256.f1, "g_256.f1", print_hash_value);
    transparent_crc(g_397, "g_397", print_hash_value);
    transparent_crc(g_399.f0, "g_399.f0", print_hash_value);
    transparent_crc(g_399.f1, "g_399.f1", print_hash_value);
    transparent_crc(g_399.f2, "g_399.f2", print_hash_value);
    transparent_crc(g_399.f3, "g_399.f3", print_hash_value);
    transparent_crc(g_399.f4, "g_399.f4", print_hash_value);
    transparent_crc(g_399.f5, "g_399.f5", print_hash_value);
    transparent_crc(g_399.f6, "g_399.f6", print_hash_value);
    transparent_crc(g_399.f7, "g_399.f7", print_hash_value);
    transparent_crc(g_423.f0, "g_423.f0", print_hash_value);
    transparent_crc(g_423.f1, "g_423.f1", print_hash_value);
    transparent_crc(g_423.f2, "g_423.f2", print_hash_value);
    transparent_crc(g_423.f3, "g_423.f3", print_hash_value);
    transparent_crc(g_423.f4, "g_423.f4", print_hash_value);
    transparent_crc(g_423.f5, "g_423.f5", print_hash_value);
    transparent_crc(g_435, "g_435", print_hash_value);
    transparent_crc(g_486, "g_486", print_hash_value);
    transparent_crc(g_566, "g_566", print_hash_value);
    transparent_crc(g_723, "g_723", print_hash_value);
    transparent_crc(g_724.f0, "g_724.f0", print_hash_value);
    transparent_crc(g_724.f1, "g_724.f1", print_hash_value);
    transparent_crc(g_724.f2, "g_724.f2", print_hash_value);
    transparent_crc(g_724.f3, "g_724.f3", print_hash_value);
    transparent_crc(g_724.f4, "g_724.f4", print_hash_value);
    transparent_crc(g_724.f5, "g_724.f5", print_hash_value);
    transparent_crc(g_724.f6, "g_724.f6", print_hash_value);
    transparent_crc(g_724.f7, "g_724.f7", print_hash_value);
    transparent_crc(g_774.f0, "g_774.f0", print_hash_value);
    transparent_crc(g_774.f1, "g_774.f1", print_hash_value);
    transparent_crc(g_774.f2, "g_774.f2", print_hash_value);
    transparent_crc(g_774.f3, "g_774.f3", print_hash_value);
    transparent_crc(g_774.f4, "g_774.f4", print_hash_value);
    transparent_crc(g_774.f5, "g_774.f5", print_hash_value);
    transparent_crc(g_876.f0, "g_876.f0", print_hash_value);
    transparent_crc(g_876.f1, "g_876.f1", print_hash_value);
    transparent_crc(g_876.f2, "g_876.f2", print_hash_value);
    transparent_crc(g_876.f3, "g_876.f3", print_hash_value);
    transparent_crc(g_876.f4, "g_876.f4", print_hash_value);
    transparent_crc(g_876.f5, "g_876.f5", print_hash_value);
    transparent_crc(g_876.f6, "g_876.f6", print_hash_value);
    transparent_crc(g_876.f7, "g_876.f7", print_hash_value);
    transparent_crc(g_909.f0, "g_909.f0", print_hash_value);
    transparent_crc(g_909.f1, "g_909.f1", print_hash_value);
    transparent_crc(g_909.f2, "g_909.f2", print_hash_value);
    transparent_crc(g_909.f3, "g_909.f3", print_hash_value);
    transparent_crc(g_909.f4, "g_909.f4", print_hash_value);
    transparent_crc(g_909.f5, "g_909.f5", print_hash_value);
    transparent_crc(g_909.f6, "g_909.f6", print_hash_value);
    transparent_crc(g_909.f7, "g_909.f7", print_hash_value);
    transparent_crc(g_933.f0, "g_933.f0", print_hash_value);
    transparent_crc(g_933.f1, "g_933.f1", print_hash_value);
    transparent_crc(g_933.f2, "g_933.f2", print_hash_value);
    transparent_crc(g_933.f3, "g_933.f3", print_hash_value);
    transparent_crc(g_933.f4, "g_933.f4", print_hash_value);
    transparent_crc(g_933.f5, "g_933.f5", print_hash_value);
    transparent_crc(g_933.f6, "g_933.f6", print_hash_value);
    transparent_crc(g_933.f7, "g_933.f7", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
