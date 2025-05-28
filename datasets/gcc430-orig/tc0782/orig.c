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



static int g_14 = 1L;
static volatile short g_27 = 3L;
static volatile char g_51 = 0L;
static unsigned char g_53 = 255UL;
static volatile int g_103 = 0x6E71EBDCL;
static volatile int *g_102 = &g_103;
static volatile int **g_101 = &g_102;
static unsigned g_116 = 0UL;
static unsigned short g_118 = 0UL;
static short g_126 = 5L;
static int *g_137 = &g_14;
static int **g_136 = &g_137;
static int **g_139 = &g_137;
static short g_162 = 0L;
static int **g_181 = &g_137;
static char g_190 = 0L;
static char **g_240 = (void*)0;
static unsigned g_255 = 4294967290UL;
static int g_287 = 0x8B055CD9L;
static int *g_301 = &g_14;
static volatile int g_393 = 0x3E9008C8L;
static unsigned char g_417 = 0x98L;
static unsigned g_530 = 0x7B0A1C40L;
static int *g_534 = &g_14;
static volatile int g_544 = (-1L);
static volatile int g_568 = (-1L);
static int g_587 = 0xEC0D1825L;
static volatile unsigned short g_607 = 8UL;
static volatile short g_646 = 0xCADAL;
static volatile char g_704 = 0L;
static int g_765 = 0x382147A8L;
static volatile unsigned char g_768 = 0x4EL;
static volatile unsigned g_805 = 1UL;
static volatile unsigned char g_877 = 0x67L;
static volatile unsigned short *g_909 = &g_607;
static volatile unsigned short **g_908 = &g_909;
static volatile int g_942 = 0xEC0499E0L;
static char g_967 = 4L;
static volatile unsigned g_977 = 0xD19C7746L;
static volatile int **g_980 = (void*)0;
static int g_1217 = 0x748182F7L;
static unsigned g_1229 = 0xCDC563D8L;
static short g_1300 = 0xD4A9L;
static volatile unsigned g_1301 = 8UL;
static volatile short *g_1335 = &g_27;
static volatile short **g_1334 = &g_1335;
static volatile unsigned g_1402 = 3UL;
static volatile int g_1407 = 0x84448767L;
static int g_1497 = 0x228F2526L;
static int g_1499 = 0L;
static volatile unsigned g_1515 = 6UL;
static int ****g_1601 = (void*)0;
static int *g_1605 = &g_287;
static int **g_1604 = &g_1605;
static int ***g_1603 = &g_1604;
static int ****g_1602 = &g_1603;
static int *g_1782 = &g_1497;
static unsigned g_1845 = 0x21BE9005L;
static volatile char g_2065 = 0L;
static unsigned short g_2085 = 0xD6AFL;
static unsigned g_2106 = 4294967287UL;
static char g_2108 = 0xF1L;
static volatile char g_2289 = 0x92L;
static unsigned char g_2313 = 0UL;
static char g_2353 = 0x7DL;
static int g_2543 = 0x6E336DF9L;
static unsigned g_2565 = 0x6E5C96DFL;
static volatile char g_2646 = 0x73L;
static volatile short g_2656 = 0L;
static volatile short g_2676 = 0L;
static unsigned g_2738 = 0xD86D0490L;



static unsigned short func_1(void);
static int func_2(unsigned p_3, unsigned p_4);
static int func_8(char p_9);
static int * func_56(short p_57, short p_58, short p_59, int ** p_60);
static char func_63(char p_64, unsigned char p_65);
static int func_68(int ** p_69, int * p_70, int p_71);
static int ** func_72(int p_73, unsigned char p_74, int * p_75);
static unsigned func_78(unsigned short p_79, unsigned short p_80, unsigned p_81, short p_82);
static char func_87(char p_88, int ** p_89, int ** p_90);
static unsigned short func_93(int * p_94, char p_95, unsigned short p_96, int * p_97, int * p_98);
static unsigned short func_1(void)
{
    char l_5 = 0xADL;
    int *l_2770 = &g_587;
    int l_2815 = (-1L);
    int ****l_2816 = &g_1603;
    int *****l_2817 = &l_2816;
    int ****l_2818 = &g_1603;
    l_2815 = func_2((((l_5 > (((safe_add_func_int32_t_s_s(func_8(l_5), l_5)) ^ (safe_add_func_uint32_t_u_u((l_5 , (((l_2770 != l_2770) ^ g_587) && 0x75DBL)), 0x703FADD3L))) != 0x82L)) || (*g_301)) >= g_587), l_5);
    (*g_301) = (((*l_2817) = l_2816) == l_2818);
    return (**g_908);
}







static int func_2(unsigned p_3, unsigned p_4)
{
    unsigned l_2771 = 0xC0E21D40L;
    int **l_2777 = &g_1782;
    char *l_2782 = &g_190;
    unsigned l_2791 = 0UL;
    int *l_2793 = &g_587;
    int *l_2801 = (void*)0;
    unsigned l_2808 = 0UL;
    int l_2811 = (-1L);
    if ((*g_301))
    {
        for (g_287 = 0; (g_287 == (-13)); g_287 = safe_sub_func_uint16_t_u_u(g_287, 3))
        {
            (**g_136) = 0x5CD1C57CL;
        }
    }
    else
    {
        unsigned l_2776 = 0xBF92F022L;
        unsigned *l_2783 = &g_1229;
        int l_2784 = (-1L);
        int ****l_2792 = (void*)0;
        short *l_2794 = &g_162;
        short *l_2795 = &g_1300;
        unsigned **l_2796 = &l_2783;
        int *l_2797 = &g_765;
        (*g_181) = (*g_136);
        l_2784 &= ((safe_mod_func_uint32_t_u_u((p_3 , 0x23F5A7EFL), ((+l_2776) & ((**g_181) &= ((l_2777 != (((l_2776 ^ (g_2353 , p_4)) >= (safe_add_func_int32_t_s_s((!(~0x02BAA809L)), ((*l_2783) = (((safe_lshift_func_uint8_t_u_s(p_4, g_1217)) , (void*)0) == l_2782))))) , (void*)0)) > p_4))))) || l_2776);
        (*l_2797) ^= ((*g_301) = (g_393 <= ((((*l_2796) = ((safe_add_func_int16_t_s_s(((*l_2795) = ((*l_2794) = (safe_rshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(l_2791, g_2738)) != (((p_4 , (void*)0) != (((1UL <= (((4294967294UL && (func_63(p_4, l_2784) | p_3)) , &g_1603) != l_2792)) >= l_2784) , l_2793)) < l_2776)), 1)))), g_190)) , &p_4)) == &p_4) || 0UL)));
    }
    for (g_530 = 0; (g_530 == 2); g_530 = safe_add_func_uint8_t_u_u(g_530, 1))
    {
        int *l_2800 = &g_1497;
        if (p_3)
            break;
        (*g_181) = l_2800;
        (*l_2800) &= 3L;
    }
    (*l_2777) = ((*g_136) = l_2801);
    for (g_2085 = 0; (g_2085 != 40); g_2085 = safe_add_func_uint8_t_u_u(g_2085, 2))
    {
        int ***l_2809 = &g_136;
        int l_2810 = 0x38E723E5L;
        short *l_2812 = (void*)0;
        short *l_2813 = &g_126;
        int l_2814 = 5L;
        l_2810 = (0x11C80972L && (g_2543 > (safe_sub_func_uint32_t_u_u(((((*l_2813) ^= (safe_rshift_func_uint8_t_u_u(l_2808, (((((l_2811 = p_3) ^ g_2646) > 0x9AL) , g_544) >= g_1229)))) <= 0xF6BDL) & l_2814), 0xA752C7E5L))));
        return p_3;
    }
    return p_4;
}







static int func_8(char p_9)
{
    int *l_11 = (void*)0;
    int **l_10 = &l_11;
    int *l_13 = &g_14;
    int **l_12 = &l_13;
    int *l_15 = &g_14;
    int *l_16 = &g_14;
    int *l_17 = &g_14;
    int *l_18 = &g_14;
    int *l_19 = &g_14;
    int *l_20 = &g_14;
    int *l_21 = &g_14;
    int l_22 = (-1L);
    int l_23 = 0xBDB979CDL;
    int *l_24 = &l_22;
    int *l_25 = &l_22;
    int *l_26 = &g_14;
    int *l_28 = &l_22;
    int l_29 = (-3L);
    int *l_30 = &l_23;
    int *l_31 = &l_22;
    int *l_32 = &l_29;
    int *l_33 = &l_22;
    int *l_34 = &l_23;
    int *l_35 = &g_14;
    int *l_36 = &l_23;
    int *l_37 = &l_22;
    int *l_38 = (void*)0;
    int *l_39 = &l_23;
    int *l_40 = &l_22;
    int *l_41 = &l_22;
    int l_42 = 5L;
    int *l_43 = &l_23;
    int *l_44 = &l_23;
    int l_45 = 1L;
    int *l_46 = &l_22;
    int *l_47 = &l_23;
    int *l_48 = &l_22;
    int *l_49 = (void*)0;
    int *l_50 = &l_23;
    int *l_52 = &l_22;
    char l_1930 = (-4L);
    unsigned *l_2104 = (void*)0;
    unsigned *l_2105 = &g_2106;
    char *l_2107 = &g_2108;
    int **l_2741 = &l_52;
    (*l_12) = ((*l_10) = (void*)0);
    g_53--;
    (*l_10) = func_56((safe_rshift_func_int8_t_s_u(func_63(p_9, (safe_lshift_func_int16_t_s_s((func_68(func_72(p_9, (((*l_2107) |= (safe_sub_func_uint16_t_u_u((((*l_2105) |= func_78((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((-1L), (func_87((safe_mul_func_int16_t_s_s((func_93((*l_10), (*l_36), (safe_mul_func_uint16_t_u_u((*l_47), (g_101 != &g_102))), &g_14, &g_14) && 65529UL), g_116)), &l_28, g_181) , (*l_34)))), g_587)), p_9, l_1930, g_116)) , p_9), g_587))) <= p_9), (*l_10)), (*l_12), p_9) , (*l_36)), g_2543))), p_9)), g_587, g_2543, l_2741);
    (*l_41) = 0xD503C3BDL;
    return p_9;
}







static int * func_56(short p_57, short p_58, short p_59, int ** p_60)
{
    char l_2742 = 0xF0L;
    unsigned short *l_2743 = &g_2085;
    int *l_2744 = &g_765;
    short *l_2753 = &g_126;
    int **l_2756 = &g_1605;
    char *l_2757 = &g_2353;
    unsigned l_2766 = 1UL;
    unsigned *l_2767 = &g_2565;
    (*p_60) = ((g_255 && func_63((((l_2742 , (*g_908)) != l_2743) < l_2742), (p_59 >= 0xF28931F9L))) , l_2744);
    (*g_301) = ((((safe_mod_func_uint8_t_u_u(p_58, (*l_2744))) , (*l_2744)) <= 1L) & 0x9EE8C7EEL);
    (*g_136) = (*p_60);
    (*g_301) = (((*l_2767) |= (safe_sub_func_uint16_t_u_u(((+(*l_2744)) , 65535UL), (((*l_2757) = (((*g_1603) = l_2756) != l_2756)) || (((safe_sub_func_uint8_t_u_u(((((-6L) != (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u((p_58 && (**g_908)), (*l_2744))), (*l_2744)))) > (*g_301)) | p_58), g_1229)) ^ (*l_2744)) != p_57))))) , (*g_301));
    return (*p_60);
}







static char func_63(char p_64, unsigned char p_65)
{
    int *l_2729 = (void*)0;
    char l_2730 = 0x02L;
    short l_2731 = (-1L);
    unsigned l_2736 = 0xCF1FF2A2L;
    int l_2737 = 0x5B2E8A35L;
    l_2729 = l_2729;
    l_2737 |= ((l_2730 , p_64) > l_2736);
    if (g_2738)
    {
        char l_2739 = (-7L);
        l_2739 = l_2736;
    }
    else
    {
        unsigned l_2740 = 0x80DC5411L;
        (*g_181) = &l_2737;
        return l_2740;
    }
    return p_65;
}







static int func_68(int ** p_69, int * p_70, int p_71)
{
    short l_2354 = 0x45B1L;
    int l_2393 = 9L;
    int l_2437 = (-9L);
    int l_2481 = 0x68BD34E4L;
    int l_2485 = 1L;
    int l_2547 = (-6L);
    int l_2550 = 0x37F2F38EL;
    short l_2568 = (-9L);
    unsigned char l_2569 = 0x35L;
    int **l_2592 = (void*)0;
    unsigned short *l_2594 = &g_2085;
    unsigned char l_2602 = 248UL;
    int l_2623 = 1L;
    unsigned l_2690 = 0x9BBB37C5L;
    int *l_2704 = &g_1497;
    int *l_2705 = &l_2481;
    int *l_2706 = &l_2481;
    int *l_2707 = &l_2485;
    int *l_2708 = (void*)0;
    int *l_2709 = &l_2485;
    int *l_2710 = &l_2547;
    int *l_2711 = (void*)0;
    int *l_2712 = &g_1497;
    int *l_2713 = &l_2437;
    int *l_2714 = &g_1499;
    int *l_2715 = &l_2485;
    int *l_2716 = &g_1499;
    int *l_2717 = (void*)0;
    int *l_2718 = &l_2485;
    int *l_2719 = &l_2547;
    int *l_2720 = &l_2550;
    int *l_2721 = &g_1497;
    int *l_2722 = (void*)0;
    int *l_2723 = &l_2393;
    int *l_2724 = (void*)0;
    int *l_2725 = &g_1499;
    unsigned l_2726 = 0x221F2C9EL;
    for (g_116 = 0; (g_116 < 28); g_116 = safe_add_func_uint32_t_u_u(g_116, 3))
    {
        int *l_2349 = &g_1497;
        int l_2391 = 0xDACE96ACL;
        int l_2392 = 0x05F0265CL;
        unsigned char *l_2456 = &g_417;
        char *l_2457 = &g_190;
        (*p_69) = l_2349;
        for (g_2108 = 0; (g_2108 <= 5); g_2108++)
        {
            char l_2352 = 0xAFL;
            int *l_2355 = &g_765;
            int *l_2356 = &g_1497;
            int *l_2357 = &g_765;
            int *l_2358 = &g_1497;
            int *l_2359 = (void*)0;
            int *l_2360 = &g_14;
            int *l_2361 = &g_765;
            int *l_2362 = &g_1497;
            int *l_2363 = &g_14;
            int *l_2364 = (void*)0;
            int *l_2365 = &g_765;
            int *l_2366 = (void*)0;
            int *l_2367 = &g_1497;
            int *l_2368 = (void*)0;
            int *l_2369 = &g_14;
            int *l_2370 = &g_765;
            int *l_2371 = &g_1497;
            int l_2372 = 0xB747975EL;
            int *l_2373 = &g_765;
            int *l_2374 = &g_1497;
            int *l_2375 = &g_765;
            int *l_2376 = (void*)0;
            int *l_2377 = &g_1499;
            int *l_2378 = &g_765;
            int *l_2379 = &g_14;
            int *l_2380 = &g_765;
            int l_2381 = 0x5283A414L;
            int *l_2382 = &l_2372;
            int *l_2383 = &g_1497;
            int *l_2384 = (void*)0;
            int *l_2385 = &l_2381;
            int *l_2386 = &l_2372;
            int *l_2387 = (void*)0;
            int *l_2388 = &g_1499;
            int *l_2389 = &l_2381;
            int *l_2390 = &g_1497;
            int *l_2394 = &g_765;
            int *l_2395 = &l_2392;
            int *l_2396 = (void*)0;
            int *l_2397 = &g_1499;
            int *l_2398 = &l_2372;
            int *l_2399 = &l_2372;
            int *l_2400 = (void*)0;
            int *l_2401 = &g_765;
            int *l_2402 = &g_1497;
            int *l_2403 = (void*)0;
            int *l_2404 = &l_2391;
            int *l_2405 = &l_2381;
            int *l_2406 = &l_2392;
            int *l_2407 = &g_1499;
            int *l_2408 = &g_14;
            int *l_2409 = &g_1497;
            int *l_2410 = (void*)0;
            int *l_2411 = &g_14;
            int *l_2412 = &g_1497;
            int *l_2413 = (void*)0;
            int *l_2414 = &g_14;
            int *l_2415 = &g_765;
            int *l_2416 = &l_2393;
            int *l_2417 = &g_1497;
            int *l_2418 = &g_1497;
            int *l_2419 = &g_1499;
            int *l_2420 = &l_2392;
            int *l_2421 = &l_2392;
            int *l_2422 = &g_1497;
            int *l_2423 = &g_1497;
            int *l_2424 = &g_1497;
            int *l_2425 = (void*)0;
            int *l_2426 = (void*)0;
            int *l_2427 = &l_2392;
            int *l_2428 = &g_14;
            int *l_2429 = &l_2391;
            int *l_2430 = &g_14;
            int *l_2431 = (void*)0;
            int *l_2432 = &g_14;
            int *l_2433 = &g_765;
            int *l_2434 = &g_765;
            int *l_2435 = &g_765;
            int *l_2436 = (void*)0;
            int l_2438 = 0x0A4FAE39L;
            unsigned char l_2439 = 0UL;
            g_2353 = l_2352;
            l_2439++;
            return (****g_1602);
        }
        if ((safe_rshift_func_uint16_t_u_u((g_1407 >= (p_71 , ((*l_2457) = (safe_lshift_func_uint16_t_u_u((*l_2349), (safe_lshift_func_uint16_t_u_s(((*l_2349) <= (+(safe_add_func_uint32_t_u_u((((*l_2456) = (9UL > (safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(((*l_2349) , (safe_mod_func_uint16_t_u_u(p_71, 1UL))), g_1845)), 2)))) , (*l_2349)), g_287)))), 5))))))), g_14)))
        {
            (**p_69) |= (l_2393 , (safe_mul_func_uint16_t_u_u((**g_908), l_2393)));
        }
        else
        {
            return p_71;
        }
        if ((*l_2349))
            break;
    }
    for (g_530 = 0; (g_530 != 24); g_530++)
    {
        int *l_2466 = &g_1497;
        int *l_2467 = &g_1497;
        int *l_2468 = &l_2393;
        int *l_2469 = &g_765;
        int *l_2470 = &g_1499;
        int l_2471 = 0xADF5885FL;
        int *l_2472 = &l_2437;
        int *l_2473 = &g_1499;
        int *l_2474 = &l_2393;
        int *l_2475 = &l_2471;
        int *l_2476 = &g_14;
        int *l_2477 = &g_14;
        int *l_2478 = &g_765;
        int *l_2479 = &l_2437;
        int *l_2480 = &l_2393;
        int *l_2482 = &l_2471;
        int *l_2483 = &g_14;
        int *l_2484 = &g_1497;
        int *l_2486 = &g_1499;
        int *l_2487 = &l_2485;
        int *l_2488 = (void*)0;
        int *l_2489 = &g_765;
        int *l_2490 = (void*)0;
        int *l_2491 = &g_1499;
        int *l_2492 = &g_765;
        int *l_2493 = &g_1497;
        int l_2494 = 0xB3C3CD29L;
        int *l_2495 = (void*)0;
        int *l_2496 = &g_765;
        int *l_2497 = (void*)0;
        int *l_2498 = (void*)0;
        int *l_2499 = &g_1497;
        int *l_2500 = &g_14;
        int *l_2501 = &l_2393;
        int *l_2502 = &l_2481;
        int *l_2503 = &g_765;
        int *l_2504 = (void*)0;
        int *l_2505 = (void*)0;
        int *l_2506 = &g_1497;
        int *l_2507 = (void*)0;
        int l_2508 = 0xA3FE8DC9L;
        int *l_2509 = &l_2393;
        int *l_2510 = (void*)0;
        int *l_2511 = (void*)0;
        int *l_2512 = (void*)0;
        int *l_2513 = &l_2508;
        int *l_2514 = (void*)0;
        int *l_2515 = &l_2494;
        int *l_2516 = &l_2437;
        int *l_2517 = &g_765;
        int *l_2518 = &l_2494;
        int *l_2519 = &l_2485;
        int l_2520 = (-1L);
        int *l_2521 = &l_2481;
        int *l_2522 = &g_14;
        int *l_2523 = &l_2437;
        int *l_2524 = &l_2485;
        int *l_2525 = &l_2520;
        int *l_2526 = &l_2393;
        int *l_2527 = &l_2393;
        int *l_2528 = (void*)0;
        int *l_2529 = &g_765;
        int *l_2530 = (void*)0;
        int *l_2531 = &g_14;
        int *l_2532 = &g_14;
        int *l_2533 = &l_2481;
        int *l_2534 = &l_2393;
        int *l_2535 = &l_2471;
        int *l_2536 = (void*)0;
        int *l_2537 = &l_2437;
        int *l_2538 = &g_1499;
        int *l_2539 = &l_2437;
        int *l_2540 = &l_2437;
        int *l_2541 = &l_2485;
        int *l_2542 = (void*)0;
        int *l_2544 = &g_765;
        int *l_2545 = &g_1497;
        int *l_2546 = &l_2485;
        int *l_2548 = &l_2481;
        int *l_2549 = &g_14;
        int *l_2551 = &g_14;
        int *l_2552 = &l_2508;
        int *l_2553 = &g_1497;
        int *l_2554 = &l_2520;
        int *l_2555 = (void*)0;
        int *l_2556 = &l_2485;
        int *l_2557 = &l_2471;
        int *l_2558 = (void*)0;
        int *l_2559 = &l_2471;
        int *l_2560 = &l_2393;
        int *l_2561 = &l_2393;
        int *l_2562 = &l_2494;
        int *l_2563 = &l_2393;
        int *l_2564 = &g_1497;
        unsigned char *l_2576 = &g_53;
        unsigned char *l_2577 = (void*)0;
        unsigned char *l_2578 = (void*)0;
        unsigned char *l_2579 = &l_2569;
        for (g_1499 = 0; (g_1499 >= 4); g_1499 = safe_add_func_int8_t_s_s(g_1499, 8))
        {
            volatile short ***l_2464 = (void*)0;
            volatile short ***l_2465 = &g_1334;
            (*l_2465) = &g_1335;
        }
        --g_2565;
        l_2569++;
        (*g_136) = ((safe_lshift_func_int16_t_s_u(((safe_add_func_int32_t_s_s(l_2437, ((l_2568 != (l_2550 = (((g_417 >= ((*l_2579) ^= ((*l_2576) = p_71))) > 2L) ^ g_530))) || p_71))) , p_71), 8)) , (*p_69));
    }
    if (l_2547)
    {
        return (*g_1605);
    }
    else
    {
        int *l_2583 = &g_765;
        unsigned l_2584 = 8UL;
        unsigned short *l_2585 = (void*)0;
        unsigned short *l_2586 = &g_118;
        unsigned char *l_2587 = (void*)0;
        unsigned char *l_2588 = &g_53;
        char *l_2591 = (void*)0;
        unsigned char *l_2593 = &g_417;
        unsigned l_2596 = 4294967289UL;
        int l_2643 = 0x34BC7644L;
        int l_2665 = (-1L);
        if ((safe_unary_minus_func_uint8_t_u((((safe_mod_func_int16_t_s_s(l_2568, (p_71 , (*l_2583)))) || 3UL) != p_71))))
        {
            unsigned short **l_2595 = &l_2586;
            char *l_2597 = &g_2108;
            int l_2600 = 0xDD183B79L;
            int l_2601 = 0x7C28C25EL;
            l_2596 = (l_2594 == ((*l_2595) = ((**p_69) , &g_2085)));
            (*p_69) = (void*)0;
            (*l_2583) ^= (((*l_2597) = (-1L)) && g_544);
            for (g_1300 = 0; (g_1300 != 24); g_1300++)
            {
                unsigned *l_2607 = &g_1229;
                int l_2610 = 0x1B906184L;
                ++l_2602;
                (*g_181) = l_2583;
                if ((safe_add_func_uint32_t_u_u(((*l_2607) = ((void*)0 == (***g_1602))), ((safe_sub_func_int16_t_s_s(((**g_908) >= ((l_2600 && ((void*)0 != l_2586)) || (g_53 = l_2610))), (+((((g_255 && g_530) ^ l_2610) , l_2595) != &l_2585)))) & g_967))))
                {
                    unsigned char l_2611 = 7UL;
                    int *l_2612 = &l_2600;
                    int *l_2613 = &l_2550;
                    int *l_2614 = &l_2610;
                    int *l_2615 = &l_2437;
                    int *l_2616 = &g_1497;
                    int *l_2617 = (void*)0;
                    int *l_2618 = (void*)0;
                    int *l_2619 = &l_2437;
                    int *l_2620 = &l_2393;
                    int *l_2621 = &l_2437;
                    int *l_2622 = &g_1499;
                    int *l_2624 = &l_2601;
                    int *l_2625 = (void*)0;
                    int l_2626 = 0xA2150451L;
                    int *l_2627 = &l_2550;
                    int *l_2628 = &l_2437;
                    int l_2629 = 0x54D78A34L;
                    int *l_2630 = &g_765;
                    int *l_2631 = &g_1499;
                    int *l_2632 = &l_2600;
                    int *l_2633 = &l_2550;
                    int *l_2634 = &l_2601;
                    int *l_2635 = &l_2629;
                    int *l_2636 = &l_2437;
                    int *l_2637 = &l_2393;
                    int *l_2638 = &l_2600;
                    int *l_2639 = (void*)0;
                    int *l_2640 = &g_1497;
                    int *l_2641 = &g_14;
                    int *l_2642 = &l_2629;
                    int *l_2644 = &g_14;
                    int l_2645 = 0L;
                    int *l_2647 = &l_2550;
                    int l_2648 = 1L;
                    int *l_2649 = &l_2645;
                    int *l_2650 = (void*)0;
                    int *l_2651 = &l_2643;
                    int *l_2652 = &l_2485;
                    int *l_2653 = &l_2648;
                    int *l_2654 = &g_1499;
                    int *l_2655 = &l_2645;
                    int *l_2657 = &g_14;
                    int *l_2658 = &l_2550;
                    char l_2659 = (-1L);
                    int *l_2660 = &g_14;
                    int *l_2661 = &g_14;
                    int *l_2662 = &g_1497;
                    int *l_2663 = &l_2645;
                    int *l_2664 = &l_2550;
                    int *l_2666 = &l_2550;
                    int *l_2667 = &l_2601;
                    int *l_2668 = (void*)0;
                    int *l_2669 = &l_2626;
                    int *l_2670 = &l_2485;
                    int *l_2671 = &l_2600;
                    int *l_2672 = &l_2393;
                    int *l_2673 = &l_2550;
                    int *l_2674 = (void*)0;
                    int *l_2675 = (void*)0;
                    int *l_2677 = (void*)0;
                    int *l_2678 = &l_2600;
                    int *l_2679 = (void*)0;
                    int *l_2680 = &l_2437;
                    int *l_2681 = &l_2648;
                    int *l_2682 = (void*)0;
                    int l_2683 = 0x98C610A7L;
                    int *l_2684 = &l_2601;
                    int *l_2685 = &l_2683;
                    int *l_2686 = &l_2683;
                    int *l_2687 = &g_14;
                    int *l_2688 = (void*)0;
                    int *l_2689 = (void*)0;
                    (*l_2583) &= l_2611;
                    l_2690--;
                }
                else
                {
                    char l_2703 = 0xF2L;
                    (*g_136) = (*p_69);
                    (*l_2583) |= ((*g_301) = 1L);
                    l_2481 |= (safe_mod_func_int8_t_s_s(p_71, (safe_mul_func_uint8_t_u_u(0x54L, (((safe_sub_func_int32_t_s_s((*g_301), (safe_rshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u((**g_908), ((l_2583 != (void*)0) < (-7L)))), ((((1UL | ((l_2703 || (-9L)) , (*g_301))) == g_118) , &l_2583) != (void*)0))))) | p_71) & (*l_2583))))));
                }
                (*g_301) = l_2610;
            }
        }
        else
        {
            return (**g_1604);
        }
        (*l_2583) = (~(*l_2583));
    }
    --l_2726;
    return p_71;
}







static int ** func_72(int p_73, unsigned char p_74, int * p_75)
{
    unsigned l_2109 = 0x0164097FL;
    int *l_2112 = (void*)0;
    char *l_2119 = (void*)0;
    char *l_2120 = &g_190;
    char l_2122 = 0x00L;
    int l_2129 = 0L;
    int l_2142 = 0x9D88FE39L;
    int l_2152 = 0x45798C1AL;
    int l_2156 = 0x066C1208L;
    int l_2176 = (-1L);
    int l_2177 = 1L;
    int l_2183 = 0x6FCA6BCEL;
    int l_2188 = 0x67A14DFCL;
    int l_2222 = 0x9AB523EEL;
    int l_2229 = 0xDE675E6FL;
    int l_2235 = 0x61EDF55AL;
    int l_2252 = 1L;
    int l_2262 = 0L;
    l_2109--;
    (*g_136) = l_2112;
    (*g_301) = (safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((g_765 , l_2109) != 0xBDD6L), p_74)), g_805));
    if (p_74)
    {
        unsigned short l_2121 = 0xAFC3L;
        unsigned short *l_2123 = &g_118;
        int l_2124 = 1L;
        int *l_2125 = &l_2124;
        int *l_2126 = (void*)0;
        int *l_2127 = &l_2124;
        int *l_2128 = &l_2124;
        int *l_2130 = &g_14;
        int *l_2131 = &l_2129;
        int *l_2132 = (void*)0;
        int *l_2133 = &g_1499;
        int *l_2134 = (void*)0;
        int *l_2135 = &g_14;
        int *l_2136 = &g_1499;
        int *l_2137 = (void*)0;
        int *l_2138 = &l_2129;
        int *l_2139 = &g_1499;
        int *l_2140 = &g_1499;
        int *l_2141 = &g_14;
        int *l_2143 = &l_2142;
        int *l_2144 = &l_2124;
        int *l_2145 = (void*)0;
        int *l_2146 = (void*)0;
        int *l_2147 = &l_2129;
        int *l_2148 = &g_14;
        int *l_2149 = &g_14;
        int *l_2150 = &l_2142;
        int *l_2151 = (void*)0;
        int *l_2153 = &l_2142;
        int *l_2154 = &g_1497;
        int *l_2155 = &g_1499;
        int *l_2157 = &l_2124;
        int *l_2158 = &g_1499;
        int *l_2159 = &l_2152;
        int *l_2160 = (void*)0;
        int *l_2161 = &l_2129;
        int l_2162 = (-1L);
        int *l_2163 = &l_2142;
        int *l_2164 = &g_1499;
        int *l_2165 = &l_2129;
        int *l_2166 = (void*)0;
        int l_2167 = 0L;
        int *l_2168 = (void*)0;
        int *l_2169 = &l_2152;
        int *l_2170 = (void*)0;
        int *l_2171 = &l_2129;
        int *l_2172 = &l_2156;
        int l_2173 = 8L;
        int *l_2174 = &g_1499;
        int *l_2175 = (void*)0;
        int *l_2178 = (void*)0;
        int *l_2179 = &l_2176;
        int *l_2180 = &g_1499;
        int *l_2181 = &l_2156;
        int *l_2182 = &g_1499;
        int *l_2184 = &l_2176;
        int *l_2185 = (void*)0;
        int *l_2186 = &l_2173;
        int *l_2187 = (void*)0;
        int *l_2189 = &l_2173;
        int *l_2190 = &l_2183;
        int *l_2191 = &l_2183;
        int *l_2192 = &g_14;
        int *l_2193 = &l_2129;
        int *l_2194 = &l_2129;
        int *l_2195 = &l_2177;
        int *l_2196 = (void*)0;
        int *l_2197 = (void*)0;
        int *l_2198 = &l_2173;
        int *l_2199 = &l_2167;
        int *l_2200 = &l_2188;
        int *l_2201 = &g_1497;
        int *l_2202 = &l_2188;
        int *l_2203 = &l_2142;
        int *l_2204 = (void*)0;
        int *l_2205 = &g_1497;
        int *l_2206 = (void*)0;
        int *l_2207 = (void*)0;
        int *l_2208 = &l_2156;
        int *l_2209 = &l_2129;
        int *l_2210 = &g_1497;
        int *l_2211 = &g_1497;
        int *l_2212 = &l_2173;
        int *l_2213 = &g_1497;
        int *l_2214 = &g_765;
        int *l_2215 = &g_1497;
        int *l_2216 = &l_2188;
        int *l_2217 = &g_765;
        int *l_2218 = &l_2183;
        int *l_2219 = &l_2124;
        int *l_2220 = &g_1499;
        int *l_2221 = &l_2167;
        int *l_2223 = &l_2142;
        int *l_2224 = &l_2167;
        int *l_2225 = &l_2188;
        int l_2226 = 0xD5CC5646L;
        int *l_2227 = &l_2176;
        int *l_2228 = &l_2188;
        int *l_2230 = &l_2142;
        int *l_2231 = (void*)0;
        int *l_2232 = &g_14;
        int *l_2233 = &l_2183;
        int *l_2234 = &l_2142;
        int *l_2236 = &l_2156;
        int *l_2237 = (void*)0;
        int *l_2238 = &l_2188;
        int *l_2239 = &l_2173;
        int *l_2240 = &l_2167;
        int *l_2241 = &g_1499;
        int *l_2242 = &g_1499;
        int *l_2243 = &l_2235;
        int *l_2244 = &l_2188;
        int *l_2245 = &l_2235;
        int l_2246 = 0xA4844CEFL;
        int *l_2247 = &l_2176;
        int *l_2248 = &l_2177;
        int *l_2249 = &l_2167;
        int *l_2250 = &l_2124;
        int *l_2251 = &l_2246;
        int *l_2253 = &l_2142;
        int *l_2254 = &l_2177;
        int *l_2255 = (void*)0;
        int *l_2256 = &l_2188;
        int *l_2257 = &l_2222;
        int l_2258 = (-1L);
        int *l_2259 = &l_2152;
        int *l_2260 = &l_2258;
        int *l_2261 = &l_2258;
        int *l_2263 = &g_14;
        int *l_2264 = &l_2222;
        int *l_2265 = &g_1497;
        int *l_2266 = &l_2262;
        int *l_2267 = &l_2229;
        int *l_2268 = &l_2173;
        int *l_2269 = &l_2229;
        int *l_2270 = &l_2258;
        int *l_2271 = &l_2124;
        int *l_2272 = &l_2226;
        int *l_2273 = &l_2258;
        int *l_2274 = (void*)0;
        int *l_2275 = &l_2124;
        int *l_2276 = &l_2124;
        int *l_2277 = &l_2167;
        int *l_2278 = &l_2142;
        int *l_2279 = &l_2129;
        int *l_2280 = &g_1499;
        int *l_2281 = &l_2222;
        int l_2282 = (-1L);
        int *l_2283 = (void*)0;
        int *l_2284 = &g_14;
        int *l_2285 = &l_2282;
        int *l_2286 = (void*)0;
        int *l_2287 = &l_2258;
        int *l_2288 = &l_2246;
        int l_2290 = 0xC7EF31E0L;
        int *l_2291 = (void*)0;
        int *l_2292 = &l_2129;
        int *l_2293 = &g_1499;
        int *l_2294 = &l_2156;
        int *l_2295 = &l_2222;
        int *l_2296 = &l_2188;
        int *l_2297 = &l_2183;
        int *l_2298 = &l_2177;
        int *l_2299 = (void*)0;
        int *l_2300 = (void*)0;
        int *l_2301 = &l_2156;
        int *l_2302 = &l_2177;
        int *l_2303 = &g_1499;
        int *l_2304 = &l_2235;
        int l_2305 = 0x34D8EE5BL;
        int *l_2306 = &l_2290;
        int *l_2307 = &l_2252;
        int *l_2308 = (void*)0;
        int *l_2309 = &l_2124;
        int *l_2310 = &l_2129;
        int *l_2311 = &g_14;
        int *l_2312 = &l_2229;
        (*g_136) = ((((l_2121 < 0xCFC5L) < ((((*l_2123) ^= l_2122) && 0UL) | l_2121)) && p_73) , (void*)0);
        (*g_181) = p_75;
        ++g_2313;
    }
    else
    {
        unsigned short l_2340 = 0xA339L;
        for (g_765 = 19; (g_765 <= (-5)); --g_765)
        {
            int *l_2318 = &g_1499;
            int *l_2319 = &l_2177;
            int *l_2320 = &l_2156;
            int *l_2321 = &l_2152;
            int *l_2322 = &l_2252;
            int *l_2323 = &l_2183;
            int *l_2324 = &l_2188;
            int *l_2325 = (void*)0;
            int *l_2326 = (void*)0;
            int l_2327 = 0x064C9A0DL;
            int *l_2328 = (void*)0;
            int *l_2329 = &g_1499;
            int *l_2330 = (void*)0;
            int *l_2331 = &l_2142;
            int *l_2332 = &l_2176;
            int *l_2333 = &g_1499;
            int *l_2334 = &l_2176;
            int *l_2335 = &g_14;
            int *l_2336 = &l_2176;
            int *l_2337 = &l_2177;
            int *l_2338 = (void*)0;
            int *l_2339 = &l_2183;
            ++l_2340;
            for (l_2222 = 0; (l_2222 < (-15)); l_2222 = safe_sub_func_int16_t_s_s(l_2222, 3))
            {
                (*l_2337) |= (safe_sub_func_int16_t_s_s((*g_1335), g_116));
            }
        }
        (*g_136) = &l_2177;
    }
    return &g_1782;
}







static unsigned func_78(unsigned short p_79, unsigned short p_80, unsigned p_81, short p_82)
{
    unsigned l_1935 = 4294967293UL;
    int **l_1936 = &g_301;
    int ***l_1937 = &g_139;
    int ***l_1938 = &l_1936;
    int l_1965 = 0x8AFFB78EL;
    int l_1976 = 0x97ADFAD4L;
    int l_1978 = 1L;
    int l_1983 = 0x3012ED44L;
    int l_1987 = (-5L);
    int l_2051 = 0xA0CD0AABL;
    int l_2062 = 0xEF9DAC08L;
    int *l_2094 = (void*)0;
    unsigned short *l_2099 = &g_118;
    (*g_301) = ((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u(l_1935, (((*l_1938) = l_1936) == &g_1782))) & ((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((+p_80) & (**g_1334)), ((p_80 , (p_80 , l_1938)) != (void*)0))), 0xC8L)) == g_255)) ^ g_765), 5)) ^ 3L);
    for (g_162 = 25; (g_162 <= 29); g_162++)
    {
        int l_1962 = 0x8298C815L;
        int l_1990 = 0x47ECEFB3L;
        int l_1993 = 0xC2FE0C6EL;
        int l_2043 = (-3L);
        int l_2049 = 1L;
        int l_2074 = 3L;
        for (g_53 = 0; (g_53 >= 58); g_53 = safe_add_func_int16_t_s_s(g_53, 1))
        {
            unsigned l_1947 = 0x54B36645L;
            (**l_1938) = (**l_1938);
            ++l_1947;
        }
        for (g_1217 = 0; (g_1217 >= 25); g_1217 = safe_add_func_uint32_t_u_u(g_1217, 1))
        {
            unsigned l_1954 = 0UL;
            int l_1989 = 0xC17BE4C0L;
            int l_2041 = 0x602ED162L;
            char l_2052 = 7L;
            int l_2072 = (-8L);
            int l_2077 = 0xD426DFDFL;
            for (g_126 = 0; (g_126 != (-8)); --g_126)
            {
                int *l_1957 = &g_765;
                int *l_1958 = &g_1499;
                int *l_1959 = &g_765;
                int *l_1960 = (void*)0;
                int l_1961 = 0xEFB053B1L;
                int *l_1963 = (void*)0;
                int *l_1964 = &g_765;
                int *l_1966 = &l_1962;
                int *l_1967 = (void*)0;
                int *l_1968 = &g_1497;
                int *l_1969 = &g_1499;
                int *l_1970 = &l_1962;
                int l_1971 = 0L;
                int l_1972 = 0x9BB2FAA8L;
                int *l_1973 = &l_1965;
                int *l_1974 = &l_1965;
                int *l_1975 = (void*)0;
                int *l_1977 = &l_1972;
                int *l_1979 = (void*)0;
                int *l_1980 = &l_1965;
                int *l_1981 = (void*)0;
                int *l_1982 = &l_1976;
                int *l_1984 = &l_1961;
                int *l_1985 = &l_1978;
                int *l_1986 = (void*)0;
                int *l_1988 = (void*)0;
                int l_1991 = (-1L);
                int *l_1992 = &g_765;
                int *l_1994 = (void*)0;
                int l_1995 = 0x6EBD4724L;
                int *l_1996 = &l_1971;
                int *l_1997 = (void*)0;
                int *l_1998 = &g_14;
                int *l_1999 = (void*)0;
                int *l_2000 = &g_1497;
                int *l_2001 = (void*)0;
                int *l_2002 = (void*)0;
                int *l_2003 = &l_1965;
                int *l_2004 = &l_1983;
                int *l_2005 = (void*)0;
                int *l_2006 = &l_1962;
                int *l_2007 = (void*)0;
                int *l_2008 = &l_1962;
                int *l_2009 = &g_765;
                int *l_2010 = &g_1497;
                int *l_2011 = &l_1987;
                int *l_2012 = &l_1990;
                int *l_2013 = &l_1983;
                int *l_2014 = &l_1983;
                int *l_2015 = &l_1965;
                int *l_2016 = &l_1990;
                int *l_2017 = &g_765;
                int *l_2018 = (void*)0;
                int *l_2019 = &g_1499;
                int *l_2020 = (void*)0;
                int *l_2021 = &l_1989;
                int l_2022 = 1L;
                int *l_2023 = &l_1983;
                int *l_2024 = &l_1995;
                int *l_2025 = &g_1497;
                int *l_2026 = &g_1497;
                int *l_2027 = (void*)0;
                int *l_2028 = &g_1497;
                int *l_2029 = (void*)0;
                int *l_2030 = &l_1989;
                int *l_2031 = &l_1978;
                int *l_2032 = (void*)0;
                int *l_2033 = (void*)0;
                int *l_2034 = &l_1983;
                int *l_2035 = &l_1995;
                int *l_2036 = (void*)0;
                int *l_2037 = &l_1965;
                int *l_2038 = (void*)0;
                int *l_2039 = &l_1971;
                int l_2040 = 0x0ECB98D5L;
                int *l_2042 = &l_1965;
                int *l_2044 = &l_1989;
                int *l_2045 = &l_1976;
                int *l_2046 = &l_1989;
                int *l_2047 = &l_1983;
                int *l_2048 = &l_1978;
                int *l_2050 = &l_2043;
                int *l_2053 = (void*)0;
                int *l_2054 = &l_1965;
                int *l_2055 = (void*)0;
                int *l_2056 = (void*)0;
                int *l_2057 = &l_1983;
                int *l_2058 = &l_1961;
                int l_2059 = 4L;
                int *l_2060 = &g_1499;
                int l_2061 = 0xC51F66D2L;
                int *l_2063 = &l_1983;
                int *l_2064 = &l_2040;
                int *l_2066 = &l_2059;
                int *l_2067 = &l_2061;
                int *l_2068 = &l_2040;
                int *l_2069 = &g_1497;
                int *l_2070 = &l_2040;
                int *l_2071 = (void*)0;
                int *l_2073 = &l_2062;
                int *l_2075 = (void*)0;
                int *l_2076 = &l_1991;
                int *l_2078 = &l_2043;
                int *l_2079 = &g_765;
                int l_2080 = (-5L);
                int *l_2081 = (void*)0;
                int *l_2082 = &l_1995;
                int *l_2083 = &l_1987;
                int *l_2084 = &l_1972;
                l_1954--;
                g_2085--;
                for (l_1965 = 0; (l_1965 >= (-11)); l_1965 = safe_sub_func_uint16_t_u_u(l_1965, 9))
                {
                    if ((*g_1782))
                        break;
                    if (l_2052)
                        break;
                    (*l_2025) |= p_82;
                    return l_2049;
                }
                l_2077 ^= p_81;
            }
        }
    }
    (*g_1782) |= (~((safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u(g_1845, (-1L))), p_82)) , (***l_1938)));
    return p_79;
}







static char func_87(char p_88, int ** p_89, int ** p_90)
{
    int *l_188 = &g_14;
    char *l_189 = &g_190;
    unsigned short *l_191 = (void*)0;
    unsigned short *l_192 = &g_118;
    int l_199 = 2L;
    short *l_274 = &g_126;
    short **l_273 = &l_274;
    int l_431 = 0L;
    unsigned l_469 = 0xA66ECC7CL;
    short l_474 = 0x878FL;
    int **l_623 = &g_534;
    int l_831 = 1L;
    int l_849 = 6L;
    int l_872 = 0x5FE3E3D8L;
    int l_884 = 1L;
    short l_914 = 1L;
    int l_932 = 0x7D241486L;
    int *l_983 = &g_287;
    int **l_982 = &l_983;
    unsigned short l_1317 = 2UL;
    unsigned char *l_1318 = &g_417;
    int *l_1319 = &l_431;
    char l_1336 = 0x1BL;
    char l_1547 = 0x24L;
    int *l_1568 = &l_872;
    int l_1765 = 1L;
    unsigned short l_1827 = 65535UL;
    int l_1844 = 0xAF48C7A2L;
    int *l_1929 = (void*)0;
    if ((((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((**p_89) ^ 1L), (*l_188))), 9L)) , 0xD7L) | p_88))
    {
        char **l_197 = &l_189;
        int l_201 = 0x1AA54D71L;
        int l_221 = 0x2B49F5E6L;
        unsigned l_234 = 0xAD07B9CBL;
        unsigned l_262 = 0x5D18C29AL;
        int **l_263 = &g_137;
        unsigned short l_270 = 65529UL;
        short *l_272 = (void*)0;
        short **l_271 = &l_272;
        unsigned short l_283 = 0x2E22L;
        unsigned *l_297 = &g_255;
        int *l_328 = &g_14;
        (*l_188) = ((**p_90) ^ (*l_188));
        for (g_126 = 22; (g_126 >= 5); --g_126)
        {
            char **l_198 = &l_189;
            int l_200 = 0x5EF69CA3L;
            int l_202 = (-1L);
            int *l_203 = (void*)0;
            int *l_204 = &l_199;
            int *l_205 = &l_202;
            int l_206 = 0xB65092C4L;
            int *l_207 = &g_14;
            int *l_208 = &l_201;
            int *l_209 = (void*)0;
            int *l_210 = &g_14;
            int *l_211 = &l_200;
            int *l_212 = &l_201;
            int *l_213 = &g_14;
            int *l_214 = &l_202;
            int *l_215 = (void*)0;
            int *l_216 = (void*)0;
            int *l_217 = (void*)0;
            int *l_218 = (void*)0;
            int *l_219 = &l_199;
            int *l_220 = &l_206;
            int *l_222 = &l_221;
            int *l_223 = &l_202;
            int *l_224 = &l_200;
            int *l_225 = &l_206;
            int *l_226 = &l_202;
            int *l_227 = &l_200;
            int *l_228 = &l_199;
            int *l_229 = &l_200;
            int *l_230 = (void*)0;
            int *l_231 = &l_206;
            int *l_232 = &g_14;
            int *l_233 = (void*)0;
            short *l_242 = &g_162;
            for (g_14 = (-10); (g_14 > 13); ++g_14)
            {
                l_198 = l_197;
            }
            --l_234;
            if ((*l_188))
            {
                short *l_239 = &g_162;
                (**g_136) = ((safe_add_func_int8_t_s_s(p_88, (((*l_239) = p_88) , (l_197 == (l_198 = g_240))))) , 1L);
                if ((**p_90))
                    continue;
                if ((*g_137))
                    continue;
            }
            else
            {
                short *l_241 = &g_162;
                short **l_243 = &l_242;
                short **l_244 = (void*)0;
                short *l_246 = &g_162;
                short **l_245 = &l_246;
                unsigned short **l_247 = (void*)0;
                unsigned short **l_248 = &l_191;
                unsigned *l_253 = (void*)0;
                unsigned *l_254 = &g_255;
                (*l_204) &= ((l_241 == ((*l_245) = ((*l_243) = l_242))) , (((&g_139 != (void*)0) , ((*l_248) = l_246)) == (g_116 , ((safe_mul_func_int8_t_s_s(((**g_136) < ((*l_254) |= (p_90 == ((safe_rshift_func_int8_t_s_u(p_88, p_88)) , (void*)0)))), 1UL)) , l_242))));
                (*p_89) = (*g_136);
                for (l_199 = (-1); (l_199 > 6); l_199 = safe_add_func_uint8_t_u_u(l_199, 5))
                {
                    (*g_136) = (*p_89);
                    return p_88;
                }
            }
        }
        if ((safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u((!0x90L), (l_262 && ((((*l_188) , &g_53) == ((p_90 == l_263) , l_189)) ^ p_88)))), ((safe_unary_minus_func_int32_t_s((*g_137))) > 0xA66DL))))
        {
            char l_267 = 1L;
            short l_327 = (-1L);
            int l_370 = 0L;
            int l_446 = 0x69161BFEL;
            for (g_126 = 17; (g_126 != 14); g_126 = safe_sub_func_int32_t_s_s(g_126, 6))
            {
                if (l_267)
                    break;
            }
            if ((safe_mod_func_int8_t_s_s((((*l_188) , 0x41E839CCL) | (*l_188)), ((p_88 && ((((*l_189) &= l_270) , l_271) == l_273)) || (safe_add_func_uint16_t_u_u((g_116 > (l_267 == 0xA3L)), (**l_263)))))))
            {
                int l_289 = 0xCD98E6FBL;
                unsigned short *l_290 = &g_118;
                char **l_299 = &l_189;
                unsigned l_314 = 0xC873DF23L;
                int l_344 = 1L;
                int l_391 = 0x0A8AD9A3L;
                if (l_267)
                {
                    unsigned l_284 = 4294967295UL;
                    (**g_136) = 0xE1592F48L;
                    for (g_255 = (-1); (g_255 > 24); g_255 = safe_add_func_uint16_t_u_u(g_255, 1))
                    {
                        int *l_285 = (void*)0;
                        int *l_286 = &g_287;
                        int l_288 = 6L;
                        l_201 &= (**p_89);
                        (**l_263) = (l_288 || (**l_263));
                    }
                }
                else
                {
                    char **l_298 = &l_189;
                    int l_313 = 0L;
                    if (((g_53 = ((l_289 & ((**l_263) || (((void*)0 == l_290) <= (safe_rshift_func_uint8_t_u_u((((*g_137) > g_14) & (safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((void*)0 == l_297), ((**l_263) && 0x5B9120BBL))), 0x60L))), 3))))) < p_88)) , l_289))
                    {
                        int *l_300 = &l_221;
                        (*l_300) ^= ((*g_137) = (l_298 != (l_299 = l_299)));
                    }
                    else
                    {
                        int *l_302 = (void*)0;
                        int *l_303 = &l_199;
                        int *l_304 = &l_199;
                        int *l_305 = (void*)0;
                        int *l_306 = &l_221;
                        int l_307 = 0L;
                        int *l_308 = &l_307;
                        int *l_309 = &l_201;
                        int *l_310 = &l_307;
                        int *l_311 = &l_199;
                        int *l_312 = &g_14;
                        g_301 = (*g_181);
                        l_314--;
                    }
                    (*p_90) = (*l_263);
                    (**g_136) = ((void*)0 == (*p_89));
                    (**g_181) = (((*l_189) = (safe_mul_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((**l_263) | (0L || (safe_mul_func_int16_t_s_s((p_88 != l_267), g_126)))), g_53)), ((g_255 <= (~(l_313 , 0xCFF1L))) , p_88))) >= g_162), 65528UL))) , (**p_89));
                }
                if (((**p_89) = ((g_103 | (*l_188)) ^ (safe_add_func_int8_t_s_s(((**l_263) & (*g_301)), l_327)))))
                {
                    unsigned l_331 = 0UL;
                    int *l_340 = &l_201;
                    (*p_90) = l_328;
                    if ((safe_add_func_uint32_t_u_u(g_126, (l_331 , p_88))))
                    {
                        g_103 |= ((*g_301) = (safe_mul_func_uint16_t_u_u(p_88, ((*l_274) = l_331))));
                        (*l_188) = (l_331 > (+((safe_lshift_func_int8_t_s_s((~((g_27 && (((**p_89) , (~((!(safe_mul_func_uint16_t_u_u(((p_90 == p_89) != (safe_sub_func_uint8_t_u_u(1UL, g_103))), (*l_188)))) < (*l_340)))) , 0x47L)) ^ 5UL)), 5)) , (*l_340))));
                    }
                    else
                    {
                        int *l_341 = &l_221;
                        int *l_342 = &l_221;
                        int *l_343 = &l_201;
                        int *l_345 = &l_344;
                        int *l_346 = &g_14;
                        int *l_347 = &g_14;
                        int *l_348 = &l_199;
                        int *l_349 = &g_14;
                        int *l_350 = &g_14;
                        int *l_351 = (void*)0;
                        int *l_352 = &l_344;
                        int *l_353 = &g_14;
                        int *l_354 = &g_14;
                        int *l_355 = &l_221;
                        int *l_356 = &l_221;
                        int *l_357 = &l_201;
                        int *l_358 = (void*)0;
                        int *l_359 = &g_14;
                        int l_360 = 1L;
                        int *l_361 = &l_360;
                        int *l_362 = (void*)0;
                        int *l_363 = &l_199;
                        int *l_364 = &l_221;
                        int *l_365 = &l_199;
                        int *l_366 = &l_360;
                        int *l_367 = &l_221;
                        int *l_368 = &l_201;
                        int *l_369 = &l_199;
                        int *l_371 = &l_201;
                        int *l_372 = &l_199;
                        int *l_373 = &l_221;
                        int *l_374 = &l_221;
                        int *l_375 = &l_344;
                        int *l_376 = (void*)0;
                        int *l_377 = &l_344;
                        int *l_378 = &l_344;
                        int *l_379 = (void*)0;
                        int *l_380 = (void*)0;
                        int *l_381 = &g_14;
                        int *l_382 = (void*)0;
                        int *l_383 = &l_370;
                        int *l_384 = (void*)0;
                        int *l_385 = &l_201;
                        int *l_386 = &l_201;
                        int *l_387 = &l_201;
                        int *l_388 = &l_344;
                        int *l_389 = &l_221;
                        int *l_390 = &g_14;
                        int *l_392 = &l_391;
                        int *l_394 = &g_14;
                        int *l_395 = &l_370;
                        int *l_396 = (void*)0;
                        int *l_397 = &g_14;
                        int *l_398 = &l_370;
                        int *l_399 = &l_201;
                        int *l_400 = &l_344;
                        int *l_401 = (void*)0;
                        int *l_402 = &l_344;
                        int *l_403 = &l_199;
                        int *l_404 = (void*)0;
                        int *l_405 = &l_221;
                        int *l_406 = (void*)0;
                        int *l_407 = &g_14;
                        int *l_408 = (void*)0;
                        int *l_409 = &l_199;
                        int *l_410 = &l_201;
                        int *l_411 = &l_360;
                        int *l_412 = (void*)0;
                        int *l_413 = &l_344;
                        int *l_414 = &l_201;
                        int *l_415 = &l_199;
                        int *l_416 = &l_360;
                        g_417--;
                    }
                }
                else
                {
                    int *l_420 = &g_14;
                    int *l_421 = &l_370;
                    int *l_422 = &g_14;
                    int *l_423 = (void*)0;
                    int *l_424 = (void*)0;
                    int *l_425 = &l_370;
                    int *l_426 = &l_391;
                    int *l_427 = (void*)0;
                    int *l_428 = &l_344;
                    int *l_429 = &l_199;
                    int *l_430 = &l_221;
                    int *l_432 = &l_391;
                    int *l_433 = &l_391;
                    int *l_434 = &l_201;
                    int *l_435 = &l_199;
                    int *l_436 = &g_14;
                    int *l_437 = &l_221;
                    int *l_438 = &l_221;
                    int *l_439 = &l_370;
                    int l_440 = 0x8B39877DL;
                    int *l_441 = &l_201;
                    int *l_442 = (void*)0;
                    int *l_443 = &l_431;
                    int *l_444 = &l_221;
                    int *l_445 = &l_201;
                    int *l_447 = &l_446;
                    int *l_448 = &l_391;
                    int *l_449 = &l_199;
                    int *l_450 = &l_370;
                    int *l_451 = &l_446;
                    int *l_452 = &l_370;
                    int l_453 = (-1L);
                    int *l_454 = &l_199;
                    int *l_455 = (void*)0;
                    int *l_456 = &l_370;
                    int *l_457 = &g_14;
                    int *l_458 = &g_14;
                    int *l_459 = (void*)0;
                    int *l_460 = &l_199;
                    int *l_461 = &l_370;
                    int *l_462 = &l_221;
                    int *l_463 = &l_199;
                    int *l_464 = (void*)0;
                    int *l_465 = &l_221;
                    int *l_466 = &l_370;
                    int *l_467 = &l_199;
                    int *l_468 = &l_199;
                    --l_469;
                    for (l_283 = (-11); (l_283 == 11); l_283 = safe_add_func_uint16_t_u_u(l_283, 2))
                    {
                        (*l_450) ^= (p_88 == p_88);
                    }
                }
            }
            else
            {
                return l_474;
            }
        }
        else
        {
            int *l_475 = &g_14;
            int l_476 = 0x91E37F5DL;
            int *l_477 = &l_476;
            int l_478 = (-10L);
            int *l_479 = &g_14;
            int *l_480 = &l_431;
            int *l_481 = &g_14;
            int *l_482 = &g_14;
            int *l_483 = &l_221;
            int *l_484 = &l_431;
            int *l_485 = &l_478;
            int *l_486 = &l_478;
            int *l_487 = (void*)0;
            int *l_488 = &l_199;
            int *l_489 = &l_431;
            int *l_490 = &l_476;
            int *l_491 = &l_199;
            int l_492 = (-1L);
            int *l_493 = &l_221;
            int *l_494 = &l_478;
            int *l_495 = &l_431;
            int *l_496 = &l_431;
            int *l_497 = &l_431;
            int *l_498 = &l_478;
            int *l_499 = (void*)0;
            int *l_500 = (void*)0;
            int *l_501 = &l_199;
            int *l_502 = (void*)0;
            int *l_503 = &l_478;
            int *l_504 = &l_201;
            int l_505 = 0x034B923AL;
            int *l_506 = &l_492;
            int *l_507 = &l_478;
            int *l_508 = &l_199;
            int *l_509 = (void*)0;
            int *l_510 = &l_492;
            int *l_511 = (void*)0;
            int *l_512 = (void*)0;
            int *l_513 = &l_221;
            int *l_514 = &l_478;
            int *l_515 = &l_431;
            int *l_516 = &l_199;
            int *l_517 = &l_201;
            int *l_518 = &l_492;
            int *l_519 = (void*)0;
            int *l_520 = (void*)0;
            int l_521 = (-1L);
            int *l_522 = &l_478;
            int *l_523 = &g_14;
            int l_524 = 0xABC4564BL;
            int *l_525 = &g_14;
            int *l_526 = &l_492;
            int *l_527 = &l_505;
            int l_528 = 0xA6278F3BL;
            int *l_529 = &g_14;
            --g_530;
        }
    }
    else
    {
        int *l_533 = (void*)0;
        int l_549 = 8L;
        int l_577 = 1L;
        int l_584 = (-1L);
        short l_783 = 0x53F2L;
        int *l_895 = &l_884;
        int **l_894 = &l_895;
        char l_1006 = 8L;
        int l_1139 = 0xB7B4B49AL;
        int l_1143 = 2L;
        short l_1145 = 0L;
        int l_1146 = 1L;
        int l_1153 = 0x24360889L;
        int l_1178 = (-7L);
        if ((**p_90))
        {
            int *l_535 = (void*)0;
            int *l_536 = &l_199;
            int *l_537 = &l_431;
            int *l_538 = &l_199;
            int l_539 = (-1L);
            int *l_540 = &g_14;
            int *l_541 = &g_14;
            int *l_542 = (void*)0;
            int *l_543 = (void*)0;
            int *l_545 = &l_539;
            int *l_546 = &l_199;
            int *l_547 = &g_14;
            int *l_548 = &l_539;
            int *l_550 = &l_549;
            int *l_551 = &l_549;
            int *l_552 = (void*)0;
            int *l_553 = (void*)0;
            int *l_554 = (void*)0;
            int *l_555 = &g_14;
            int *l_556 = &l_431;
            int *l_557 = &l_431;
            int *l_558 = &l_199;
            int *l_559 = (void*)0;
            int *l_560 = &l_539;
            int *l_561 = &l_199;
            int *l_562 = (void*)0;
            int *l_563 = &l_431;
            int *l_564 = &g_14;
            int *l_565 = &l_199;
            int *l_566 = &l_539;
            int *l_567 = (void*)0;
            int *l_569 = (void*)0;
            int *l_570 = &g_14;
            int *l_571 = &l_549;
            int *l_572 = &l_431;
            int *l_573 = &l_431;
            int *l_574 = &l_539;
            int *l_575 = &l_549;
            int *l_576 = &l_431;
            int *l_578 = (void*)0;
            int *l_579 = &l_431;
            int *l_580 = &l_539;
            int *l_581 = &g_14;
            int *l_582 = &l_549;
            int *l_583 = (void*)0;
            int *l_585 = (void*)0;
            int *l_586 = &g_14;
            int *l_588 = &l_539;
            int *l_589 = &l_549;
            int *l_590 = &l_199;
            int *l_591 = &l_199;
            int *l_592 = &l_539;
            int *l_593 = (void*)0;
            int *l_594 = &l_584;
            int *l_595 = &l_539;
            int l_596 = (-5L);
            int *l_597 = &l_199;
            int *l_598 = &l_577;
            int *l_599 = &g_14;
            int *l_600 = &l_577;
            int *l_601 = &l_199;
            int *l_602 = &g_14;
            int *l_603 = (void*)0;
            int *l_604 = &l_577;
            int *l_605 = &l_549;
            int *l_606 = &l_539;
            unsigned l_610 = 0xB9EFB705L;
            l_188 = ((*g_181) = (p_88 , (*g_181)));
            ++g_607;
            (*l_545) ^= (**p_90);
            --l_610;
        }
        else
        {
            short l_613 = 0x9D9EL;
            int *l_616 = &l_577;
            int **l_622 = &l_533;
            short l_628 = 0x2F70L;
            char l_653 = 0x90L;
            int l_660 = 0L;
            int l_671 = (-1L);
            int l_690 = (-1L);
            unsigned l_773 = 0x1F46A5D5L;
            int *l_887 = &l_884;
            if (l_613)
            {
                unsigned short l_626 = 0xFBF0L;
                int l_627 = 6L;
                int l_643 = 8L;
                int l_799 = (-5L);
                if (((*g_301) = (**p_90)))
                {
                    unsigned char *l_621 = &g_53;
                    int ***l_624 = (void*)0;
                    int ***l_625 = &g_136;
                    int l_681 = 2L;
                    int l_696 = 1L;
                    int l_697 = 0x834887A7L;
                    if (((safe_sub_func_int16_t_s_s(l_626, p_88)) || p_88))
                    {
                        int *l_629 = &l_549;
                        int *l_630 = (void*)0;
                        int *l_631 = &l_577;
                        int *l_632 = &l_627;
                        int *l_633 = &l_199;
                        int *l_634 = &g_14;
                        int *l_635 = &l_584;
                        int *l_636 = (void*)0;
                        int *l_637 = &l_431;
                        int *l_638 = &l_627;
                        int *l_639 = &l_199;
                        int *l_640 = (void*)0;
                        int *l_641 = (void*)0;
                        int *l_642 = (void*)0;
                        int *l_644 = (void*)0;
                        int *l_645 = &g_14;
                        int *l_647 = &l_431;
                        int *l_648 = &g_14;
                        int *l_649 = (void*)0;
                        int *l_650 = &l_643;
                        int *l_651 = &l_643;
                        int *l_652 = &l_584;
                        int *l_654 = &l_643;
                        int *l_655 = &l_627;
                        int *l_656 = &l_199;
                        int *l_657 = &g_14;
                        int *l_658 = &l_577;
                        int *l_659 = &l_199;
                        int *l_661 = (void*)0;
                        int *l_662 = &l_577;
                        int *l_663 = &l_549;
                        int *l_664 = &l_431;
                        int *l_665 = &l_627;
                        int *l_666 = &l_577;
                        int *l_667 = &l_627;
                        int *l_668 = &g_14;
                        int *l_669 = (void*)0;
                        int *l_670 = &l_549;
                        int *l_672 = &l_431;
                        int *l_673 = &l_643;
                        int *l_674 = &l_431;
                        int *l_675 = &l_660;
                        int *l_676 = &l_671;
                        int *l_677 = &l_431;
                        int *l_678 = &l_671;
                        int *l_679 = &l_627;
                        int *l_680 = (void*)0;
                        int *l_682 = &l_199;
                        int *l_683 = (void*)0;
                        int *l_684 = &l_660;
                        int *l_685 = &l_671;
                        int *l_686 = &l_577;
                        int *l_687 = (void*)0;
                        int *l_688 = &l_671;
                        int *l_689 = (void*)0;
                        int *l_691 = (void*)0;
                        int *l_692 = (void*)0;
                        int l_693 = 1L;
                        int *l_694 = (void*)0;
                        int *l_695 = &l_693;
                        int *l_698 = &l_577;
                        int *l_699 = &l_431;
                        int *l_700 = &g_14;
                        int *l_701 = &l_696;
                        int *l_702 = &l_693;
                        int *l_703 = &l_660;
                        int *l_705 = &l_643;
                        int *l_706 = &l_643;
                        int *l_707 = &l_643;
                        int *l_708 = &l_431;
                        int *l_709 = &l_199;
                        int *l_710 = &l_696;
                        int *l_711 = &l_431;
                        int *l_712 = &l_577;
                        int *l_713 = (void*)0;
                        int *l_714 = &l_627;
                        int *l_715 = (void*)0;
                        int *l_716 = &g_14;
                        int *l_717 = &l_584;
                        int *l_718 = &l_660;
                        int *l_719 = &l_199;
                        int *l_720 = (void*)0;
                        int l_721 = 0x87A8E73FL;
                        int *l_722 = (void*)0;
                        int *l_723 = (void*)0;
                        int *l_724 = &l_693;
                        int *l_725 = &l_690;
                        int *l_726 = &l_549;
                        int l_727 = 0x1491F017L;
                        int *l_728 = &l_681;
                        int *l_729 = &l_660;
                        int *l_730 = &l_681;
                        int *l_731 = (void*)0;
                        int *l_732 = (void*)0;
                        int *l_733 = (void*)0;
                        int *l_734 = &l_549;
                        int *l_735 = &l_660;
                        int *l_736 = &l_697;
                        int *l_737 = (void*)0;
                        int *l_738 = &l_549;
                        int *l_739 = (void*)0;
                        int *l_740 = &l_671;
                        int *l_741 = &l_696;
                        int *l_742 = (void*)0;
                        int *l_743 = (void*)0;
                        int *l_744 = &l_693;
                        int *l_745 = &l_696;
                        int *l_746 = &l_681;
                        int *l_747 = &l_549;
                        int *l_748 = &l_697;
                        int *l_749 = (void*)0;
                        int *l_750 = &l_727;
                        int *l_751 = &l_199;
                        int *l_752 = &l_697;
                        int *l_753 = &l_693;
                        int *l_754 = &l_549;
                        int *l_755 = &l_549;
                        int *l_756 = &l_696;
                        int *l_757 = &l_660;
                        int *l_758 = &l_577;
                        int *l_759 = &l_199;
                        int *l_760 = &l_660;
                        int *l_761 = &l_693;
                        int *l_762 = &l_696;
                        int *l_763 = &l_693;
                        int *l_764 = &l_660;
                        int *l_766 = &g_14;
                        int *l_767 = &l_643;
                        g_768++;
                        (***l_625) = (*g_301);
                    }
                    else
                    {
                        int *l_771 = &l_627;
                        unsigned l_772 = 0x01CE15D2L;
                        (*l_616) &= (**g_181);
                        (*p_89) = ((&p_88 == (void*)0) , l_771);
                        (**p_89) ^= (**p_90);
                        (*g_137) ^= l_772;
                    }
                    return l_626;
                }
                else
                {
                    char l_794 = 0xD4L;
                    int *l_808 = &g_14;
                    int *l_809 = &l_660;
                    int *l_810 = &l_660;
                    int *l_811 = &l_431;
                    int *l_812 = &l_690;
                    int *l_813 = &l_627;
                    int *l_814 = &g_14;
                    int *l_815 = &l_690;
                    int *l_816 = &l_643;
                    int *l_817 = (void*)0;
                    int *l_818 = &l_671;
                    int *l_819 = &l_577;
                    int *l_820 = &l_577;
                    int *l_821 = &l_549;
                    int *l_822 = &l_690;
                    int *l_823 = &l_584;
                    int *l_824 = (void*)0;
                    int *l_825 = (void*)0;
                    int *l_826 = (void*)0;
                    int *l_827 = (void*)0;
                    int *l_828 = &l_643;
                    int *l_829 = &l_577;
                    int *l_830 = &l_690;
                    int *l_832 = &g_765;
                    int *l_833 = &l_671;
                    int *l_834 = &g_14;
                    int *l_835 = (void*)0;
                    int *l_836 = &l_831;
                    int *l_837 = &l_627;
                    int *l_838 = &l_671;
                    int l_839 = 1L;
                    int *l_840 = &l_199;
                    int *l_841 = &l_671;
                    int *l_842 = (void*)0;
                    int *l_843 = (void*)0;
                    int *l_844 = (void*)0;
                    int *l_845 = &l_799;
                    int *l_846 = &l_799;
                    int *l_847 = (void*)0;
                    int *l_848 = &l_199;
                    int *l_850 = &l_627;
                    int *l_851 = (void*)0;
                    int *l_852 = &g_765;
                    int *l_853 = &l_671;
                    int *l_854 = (void*)0;
                    int *l_855 = &l_584;
                    int *l_856 = &l_690;
                    int *l_857 = &l_671;
                    int *l_858 = &l_643;
                    int *l_859 = &g_14;
                    int *l_860 = &l_577;
                    int *l_861 = &g_14;
                    int *l_862 = (void*)0;
                    int l_863 = 8L;
                    int *l_864 = &l_863;
                    int *l_865 = &l_199;
                    int *l_866 = &g_765;
                    int *l_867 = &l_831;
                    int *l_868 = &l_671;
                    int *l_869 = (void*)0;
                    int *l_870 = (void*)0;
                    int *l_871 = &l_690;
                    int *l_873 = &g_765;
                    int *l_874 = &l_643;
                    int *l_875 = (void*)0;
                    int *l_876 = &l_577;
                    if ((*g_534))
                    {
                        unsigned char *l_776 = &g_53;
                        (*l_623) = &l_643;
                        (**p_90) = (((*l_776) |= ((~((**l_273) = (l_773 == (**l_623)))) || (safe_mul_func_int16_t_s_s(0L, (l_626 > p_88))))) > g_287);
                        (**g_136) = 0L;
                        (**g_181) = (-9L);
                    }
                    else
                    {
                        int *l_777 = &g_14;
                        int *l_778 = &l_431;
                        int *l_779 = &l_577;
                        int *l_780 = &l_431;
                        int *l_781 = &l_660;
                        int *l_782 = &l_690;
                        int *l_784 = &l_549;
                        int *l_785 = &g_765;
                        int *l_786 = &g_765;
                        int *l_787 = &l_660;
                        int *l_788 = &l_660;
                        int *l_789 = &l_584;
                        int *l_790 = &l_584;
                        int *l_791 = (void*)0;
                        int *l_792 = &l_199;
                        int *l_793 = (void*)0;
                        int *l_795 = &l_431;
                        int *l_796 = (void*)0;
                        int *l_797 = &l_199;
                        int *l_798 = &l_431;
                        int *l_800 = (void*)0;
                        int *l_801 = &l_660;
                        int *l_802 = &l_431;
                        int *l_803 = &l_584;
                        int *l_804 = &l_627;
                        (*p_89) = l_777;
                        --g_805;
                        (*g_181) = (*p_89);
                    }
                    ++g_877;
                    for (l_839 = 0; (l_839 != 18); l_839++)
                    {
                        (*l_837) = (((((g_118 , ((*l_189) = (safe_add_func_uint8_t_u_u(g_118, 0xEFL)))) | (*l_822)) < l_626) != p_88) != 1UL);
                        return g_530;
                    }
                }
                (**p_90) = (**g_136);
            }
            else
            {
                (*l_623) = ((*g_136) = ((*p_89) = (*g_136)));
            }
            if (((0x8222L && (((g_805 , ((*l_887) = p_88)) , g_646) >= ((((safe_sub_func_int8_t_s_s(p_88, ((g_765 <= (((safe_add_func_uint32_t_u_u(p_88, (((**p_90) = (safe_mod_func_int16_t_s_s(0xFDE6L, 0xC925L))) | g_765))) <= p_88) | 0x22A714BFL)) || g_587))) ^ p_88) ^ g_162) ^ p_88))) != 0x72L))
            {
                int ***l_896 = &l_894;
                (*l_896) = l_894;
                (*l_623) = &l_584;
            }
            else
            {
                return p_88;
            }
        }
        for (p_88 = 0; (p_88 >= (-28)); p_88 = safe_sub_func_int32_t_s_s(p_88, 5))
        {
            unsigned *l_903 = &g_255;
            int l_912 = 0x8013A0E7L;
            int l_966 = 1L;
            int l_1048 = 0x47BB21D2L;
            int l_1109 = (-7L);
            int l_1134 = 0x20AF1FD7L;
            int l_1157 = 0x6C615A6BL;
            int l_1167 = 1L;
            int l_1174 = (-1L);
            int l_1183 = 0x36C8C806L;
            int l_1185 = 0x0BEA66BEL;
            int l_1218 = 0xD19C1655L;
            (**p_89) = ((((*l_895) = (safe_rshift_func_int16_t_s_u((p_88 >= ((((safe_mod_func_int32_t_s_s((-1L), (((*l_903)--) || (safe_mul_func_int8_t_s_s(p_88, g_162))))) ^ (**g_136)) < p_88) <= 1UL)), 10))) , &l_191) != g_908);
            for (l_469 = 0; (l_469 < 50); l_469 = safe_add_func_int16_t_s_s(l_469, 9))
            {
                int *l_913 = &l_549;
                (*g_136) = ((l_912 , p_88) , l_913);
            }
            if ((**p_90))
                break;
        }
        (*g_181) = (void*)0;
        for (l_1143 = 0; (l_1143 != 19); l_1143++)
        {
            char l_1239 = 0L;
            int l_1242 = 8L;
            int *l_1243 = &l_431;
            int *l_1244 = &l_431;
            int *l_1245 = &l_1242;
            int *l_1246 = &l_1146;
            int *l_1247 = &l_431;
            int *l_1248 = &l_1242;
            int *l_1249 = &l_872;
            int l_1250 = (-1L);
            int *l_1251 = &g_765;
            int *l_1252 = &l_1178;
            int *l_1253 = &l_431;
            int *l_1254 = &l_577;
            int *l_1255 = &l_584;
            int *l_1256 = &l_831;
            int *l_1257 = &g_14;
            int *l_1258 = &l_1178;
            int *l_1259 = (void*)0;
            int *l_1260 = (void*)0;
            int *l_1261 = &l_584;
            int *l_1262 = &l_1242;
            int *l_1263 = &l_932;
            int *l_1264 = &l_1146;
            int *l_1265 = &g_14;
            int *l_1266 = &l_549;
            int *l_1267 = &l_1153;
            int *l_1268 = &l_431;
            int *l_1269 = &l_549;
            int *l_1270 = (void*)0;
            int *l_1271 = &l_199;
            int *l_1272 = &l_1242;
            int *l_1273 = &l_831;
            int l_1274 = 0x8EA71797L;
            int *l_1275 = &l_431;
            int l_1276 = (-1L);
            int *l_1277 = &l_549;
            int *l_1278 = &l_1274;
            int l_1279 = 0x0BAD65AFL;
            int *l_1280 = &l_1139;
            int *l_1281 = (void*)0;
            int *l_1282 = &l_831;
            int l_1283 = 0xDF59F7ABL;
            int *l_1284 = &l_1250;
            int *l_1285 = &l_831;
            int *l_1286 = &l_1139;
            int l_1287 = 0x50F37C28L;
            int *l_1288 = &l_831;
            int *l_1289 = (void*)0;
            int *l_1290 = &l_1153;
            int *l_1291 = &l_1178;
            int *l_1292 = &l_831;
            int *l_1293 = &l_549;
            int *l_1294 = (void*)0;
            int *l_1295 = &l_1250;
            int *l_1296 = &l_1242;
            int *l_1297 = (void*)0;
            int *l_1298 = &l_1250;
            int *l_1299 = &l_1178;
            (**p_89) = (safe_sub_func_int8_t_s_s(l_1239, (((*l_189) = ((*g_909) < (((void*)0 == &l_189) >= (0xB76D3E11L | 7UL)))) > ((g_587 != (((*l_188) && (safe_lshift_func_uint8_t_u_s((**l_623), 6))) , g_765)) , p_88))));
            ++g_1301;
            (*g_301) = (**p_89);
        }
    }
    if ((p_88 , (*l_1319)))
    {
        unsigned short l_1337 = 4UL;
        unsigned short l_1356 = 0x8F3EL;
        char l_1357 = 0x45L;
        int l_1387 = (-1L);
        unsigned char *l_1538 = &g_53;
        short **l_1554 = &l_274;
        int **l_1566 = &g_534;
        int l_1731 = 0xB50503F8L;
        int l_1733 = 0x1E70888FL;
        int l_1740 = 0x41AD0E52L;
        int l_1761 = (-1L);
        int **l_1778 = &l_983;
        unsigned short **l_1852 = &l_192;
        char l_1870 = 0x49L;
        if ((((safe_mul_func_uint16_t_u_u((*l_1319), (*l_188))) >= 0UL) , (*g_301)))
        {
            char l_1338 = 0x8BL;
            l_1338 &= (**p_89);
        }
        else
        {
            short l_1347 = 0xB242L;
            unsigned short l_1412 = 0xC3A2L;
            int l_1541 = (-4L);
            int *l_1542 = &l_849;
            for (g_287 = 16; (g_287 <= 29); ++g_287)
            {
                char l_1355 = (-4L);
                int *l_1413 = (void*)0;
                int l_1416 = 0xC01EA857L;
                int l_1461 = 4L;
                int l_1466 = 0x62A90B66L;
                int l_1470 = 1L;
                for (l_872 = 28; (l_872 != (-18)); l_872 = safe_sub_func_int32_t_s_s(l_872, 5))
                {
                    unsigned short l_1354 = 0xCD86L;
                    int l_1384 = (-1L);
                    int l_1392 = 7L;
                }
                (*l_1319) = (g_765 != (safe_add_func_uint32_t_u_u(0x372A8D5FL, p_88)));
                l_1461 ^= (((safe_mul_func_uint8_t_u_u(l_1547, p_88)) < (((*l_1542) , (safe_unary_minus_func_uint8_t_u((safe_unary_minus_func_uint32_t_u((l_1416 = g_977)))))) && g_162)) > (((safe_lshift_func_int8_t_s_u(g_1229, 5)) , (safe_rshift_func_uint16_t_u_s(p_88, 14))) >= (l_1554 == l_1554)));
            }
            return p_88;
        }
        (*l_1319) |= (safe_rshift_func_uint16_t_u_s((*g_909), p_88));
        for (l_914 = 0; (l_914 == (-2)); --l_914)
        {
            unsigned short l_1563 = 65535UL;
            int ***l_1564 = (void*)0;
            int ***l_1565 = (void*)0;
            int ***l_1567 = &l_982;
            int ****l_1569 = (void*)0;
            int ****l_1570 = &l_1567;
            unsigned short l_1571 = 1UL;
            int l_1630 = 0x02CF01B2L;
            int l_1655 = (-1L);
            if ((safe_sub_func_int8_t_s_s((((safe_sub_func_int32_t_s_s((l_1563 ^ (&g_980 != ((p_89 != (l_1566 = &g_534)) , l_1567))), 0xD50B53F1L)) , ((*l_274) &= p_88)) && (((*g_1335) > 0xD844L) | 0x53L)), 0L)))
            {
                unsigned l_1572 = 0x07462100L;
                if (l_1571)
                {
                    (*l_1566) = (*p_90);
                    if (l_1572)
                        break;
                    if ((**p_89))
                        break;
                }
                else
                {
                    int l_1573 = 0x46EE7BB3L;
                    if (l_1573)
                        break;
                    (*l_1566) = ((*g_909) , (*g_136));
                    if ((**p_89))
                        continue;
                }
            }
            else
            {
                (*g_181) = (void*)0;
            }
            (**p_89) = (((g_1300 != g_126) & 0x9870L) >= p_88);
            if (((g_544 || ((5L ^ (safe_mul_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((-1L))), g_1499))) && ((safe_rshift_func_uint8_t_u_s(((safe_mod_func_int8_t_s_s((!((*l_189) &= (0L ^ ((safe_lshift_func_int8_t_s_s(p_88, p_88)) && (**p_89))))), p_88)) , 0x19L), 0)) || p_88))) == (**p_89)))
            {
                char *l_1597 = &g_967;
                char *l_1598 = (void*)0;
                char *l_1599 = &l_1547;
                int l_1600 = 1L;
                char *l_1606 = &l_1336;
                unsigned short l_1609 = 0xC2B7L;
                char l_1652 = 0x8CL;
                unsigned l_1768 = 0xB74D9FB3L;
                if ((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((*l_1319), g_190)), (safe_mod_func_int16_t_s_s((*g_1335), (((*l_1318) &= (safe_lshift_func_uint8_t_u_u((((p_88 == (((safe_add_func_int8_t_s_s(((*l_1597) &= p_88), (l_1600 |= ((*l_1599) = p_88)))) ^ (*l_188)) & ((*l_1606) = (1UL != ((g_1601 = g_1601) == g_1602))))) > (**p_89)) != 0xB6L), 1))) | 246UL))))))
                {
                    if (l_1571)
                        break;
                    for (l_1600 = 3; (l_1600 >= (-10)); l_1600 = safe_sub_func_uint32_t_u_u(l_1600, 7))
                    {
                        unsigned l_1612 = 0x360562A6L;
                        (*l_623) = ((((0UL > 8L) == p_88) >= l_1612) , (void*)0);
                    }
                }
                else
                {
                    int *l_1613 = (void*)0;
                    int *l_1614 = &l_849;
                    int *l_1615 = &l_199;
                    int *l_1616 = &g_765;
                    int *l_1617 = &g_1497;
                    int *l_1618 = &g_765;
                    int *l_1619 = &g_1499;
                    int *l_1620 = &g_1499;
                    int *l_1621 = &l_831;
                    int *l_1622 = &l_831;
                    int *l_1623 = &l_872;
                    int *l_1624 = &l_932;
                    int *l_1625 = &g_14;
                    int *l_1626 = &g_765;
                    int *l_1627 = &g_1499;
                    int *l_1628 = (void*)0;
                    int *l_1629 = (void*)0;
                    int *l_1631 = &l_199;
                    int *l_1632 = &l_872;
                    int *l_1633 = &l_831;
                    int *l_1634 = &g_14;
                    int *l_1635 = &l_1600;
                    int l_1636 = 9L;
                    int *l_1637 = &l_1600;
                    int *l_1638 = &l_872;
                    int *l_1639 = &g_14;
                    int *l_1640 = &l_872;
                    int *l_1641 = (void*)0;
                    int *l_1642 = &l_1636;
                    int *l_1643 = &l_1630;
                    int *l_1644 = &l_1636;
                    int *l_1645 = &g_14;
                    int *l_1646 = &l_199;
                    int *l_1647 = &g_765;
                    int *l_1648 = &g_1497;
                    int *l_1649 = (void*)0;
                    int *l_1650 = (void*)0;
                    int *l_1651 = &g_1497;
                    int *l_1653 = &l_872;
                    int *l_1654 = &g_1499;
                    int *l_1656 = (void*)0;
                    int l_1657 = (-7L);
                    int *l_1658 = &l_831;
                    int *l_1659 = &g_765;
                    int *l_1660 = &g_1497;
                    int *l_1661 = (void*)0;
                    int *l_1662 = &l_1655;
                    int *l_1663 = &l_1636;
                    int *l_1664 = &g_14;
                    int *l_1665 = &l_1636;
                    int *l_1666 = (void*)0;
                    int *l_1667 = &g_1499;
                    int *l_1668 = &l_831;
                    int *l_1669 = (void*)0;
                    int *l_1670 = (void*)0;
                    int *l_1671 = &l_1600;
                    int *l_1672 = &l_1636;
                    int *l_1673 = &l_431;
                    int *l_1674 = &g_1497;
                    int l_1675 = (-5L);
                    int *l_1676 = &g_765;
                    int *l_1677 = &g_1499;
                    int *l_1678 = &l_431;
                    int *l_1679 = (void*)0;
                    int *l_1680 = (void*)0;
                    int *l_1681 = (void*)0;
                    int *l_1682 = &l_1630;
                    int *l_1683 = &g_1497;
                    int *l_1684 = (void*)0;
                    int *l_1685 = &g_1497;
                    int *l_1686 = &l_431;
                    int *l_1687 = &l_1600;
                    int l_1688 = 0x522B5B00L;
                    int *l_1689 = &l_1688;
                    int *l_1690 = &g_765;
                    int *l_1691 = &l_872;
                    int *l_1692 = &l_1630;
                    int *l_1693 = (void*)0;
                    int *l_1694 = &l_849;
                    int l_1695 = 0xB741CE71L;
                    int *l_1696 = &l_1600;
                    int *l_1697 = &g_765;
                    int *l_1698 = (void*)0;
                    int *l_1699 = (void*)0;
                    int *l_1700 = &l_849;
                    int *l_1701 = &l_1636;
                    int *l_1702 = &l_1657;
                    int *l_1703 = &l_831;
                    int *l_1704 = (void*)0;
                    int *l_1705 = &l_199;
                    int *l_1706 = (void*)0;
                    int *l_1707 = &l_1600;
                    int *l_1708 = &g_14;
                    int *l_1709 = &g_1497;
                    int *l_1710 = &g_14;
                    int *l_1711 = &l_1657;
                    int *l_1712 = &l_431;
                    int *l_1713 = &l_831;
                    int *l_1714 = &g_1497;
                    int *l_1715 = &g_1497;
                    int *l_1716 = &l_831;
                    int *l_1717 = &l_1655;
                    int *l_1718 = &l_831;
                    int *l_1719 = &l_849;
                    int *l_1720 = (void*)0;
                    int *l_1721 = &l_872;
                    int *l_1722 = (void*)0;
                    int *l_1723 = &l_849;
                    int *l_1724 = &l_1630;
                    int *l_1725 = &l_1630;
                    int *l_1726 = &g_765;
                    int *l_1727 = (void*)0;
                    int l_1728 = 8L;
                    int *l_1729 = &l_849;
                    int *l_1730 = &l_1728;
                    int *l_1732 = &l_1675;
                    int *l_1734 = (void*)0;
                    int *l_1735 = &l_1636;
                    int *l_1736 = (void*)0;
                    int *l_1737 = (void*)0;
                    int *l_1738 = (void*)0;
                    int *l_1739 = &l_1695;
                    int *l_1741 = &l_1695;
                    int *l_1742 = &g_765;
                    int *l_1743 = &l_1688;
                    int *l_1744 = (void*)0;
                    int *l_1745 = (void*)0;
                    int *l_1746 = (void*)0;
                    int *l_1747 = &l_1695;
                    int *l_1748 = &l_1387;
                    int *l_1749 = (void*)0;
                    int *l_1750 = &l_1387;
                    int *l_1751 = &l_1636;
                    int *l_1752 = (void*)0;
                    int *l_1753 = &l_932;
                    int *l_1754 = &l_932;
                    int *l_1755 = &g_1499;
                    int *l_1756 = (void*)0;
                    int *l_1757 = &l_1740;
                    int *l_1758 = (void*)0;
                    int *l_1759 = (void*)0;
                    int *l_1760 = &l_1675;
                    int *l_1762 = &l_431;
                    int *l_1763 = (void*)0;
                    int *l_1764 = (void*)0;
                    int *l_1766 = &l_1636;
                    int *l_1767 = &l_849;
                    --l_1768;
                }
            }
            else
            {
                short l_1771 = 0L;
                int l_1825 = 0x95E509ECL;
                if ((p_88 <= ((~(*g_909)) != g_126)))
                {
                    int l_1779 = 0x7CF8C618L;
                    int l_1783 = 0x13004127L;
                    int l_1823 = 1L;
                    unsigned l_1840 = 0x9BA14E14L;
                    short **l_1853 = &l_274;
                    if (l_1771)
                        break;
                    if (((*g_301) ^= (safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s(0x4BL, (-1L))), ((&l_982 != ((safe_mul_func_int8_t_s_s((l_1779 &= (p_88 < (l_1778 != (void*)0))), ((safe_mod_func_uint16_t_u_u(((p_88 , 0x4567L) | 4UL), (**g_908))) || 0x38C9DB52L))) , &l_1778)) , 1UL)))))
                    {
                        char l_1784 = 0L;
                        int *l_1785 = &g_765;
                        int *l_1786 = &g_1499;
                        int *l_1787 = (void*)0;
                        int *l_1788 = &l_932;
                        int *l_1789 = &l_431;
                        int *l_1790 = &l_1761;
                        int *l_1791 = (void*)0;
                        int *l_1792 = (void*)0;
                        int *l_1793 = (void*)0;
                        int *l_1794 = &l_1765;
                        int *l_1795 = &g_14;
                        int *l_1796 = &l_849;
                        int *l_1797 = &l_1765;
                        int *l_1798 = &l_1761;
                        int *l_1799 = (void*)0;
                        int *l_1800 = &l_849;
                        int *l_1801 = &l_1761;
                        int *l_1802 = &l_1779;
                        int *l_1803 = &l_199;
                        int *l_1804 = &l_1779;
                        int *l_1805 = &l_1733;
                        int *l_1806 = &l_849;
                        int *l_1807 = &l_1731;
                        int *l_1808 = &g_14;
                        int *l_1809 = &l_199;
                        int *l_1810 = &l_1740;
                        int *l_1811 = &l_199;
                        int *l_1812 = &g_765;
                        int *l_1813 = &g_765;
                        int *l_1814 = &l_932;
                        int *l_1815 = &l_831;
                        int *l_1816 = &l_1731;
                        int *l_1817 = &l_932;
                        int *l_1818 = &l_1733;
                        int *l_1819 = &l_1779;
                        int *l_1820 = (void*)0;
                        int *l_1821 = &l_1733;
                        int *l_1822 = &l_1655;
                        int *l_1824 = &l_1387;
                        int *l_1826 = &l_1387;
                        unsigned short *l_1841 = (void*)0;
                        unsigned short *l_1842 = &l_1337;
                        unsigned *l_1843 = &l_1840;
                        --l_1827;
                        (*l_1794) &= (+((*l_1795) |= (safe_add_func_int16_t_s_s((((*l_1826) <= l_1783) | (~l_1783)), ((((*l_1807) & p_88) == 0xEEL) , 0xFA6DL)))));
                        (*l_1818) &= ((p_88 | (safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((*l_1843) |= g_544), (*l_1796))), (*l_1817)))) <= l_1844);
                        (*g_136) = (*g_181);
                    }
                    else
                    {
                        unsigned *l_1857 = (void*)0;
                        unsigned *l_1858 = &l_1840;
                        --g_1845;
                        (**p_89) ^= (255UL <= g_877);
                        (*l_188) &= ((((safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((void*)0 == l_1852), ((l_1853 != (void*)0) ^ ((*l_189) = l_1823)))), ((*l_1319) |= (((**l_1852) = (safe_unary_minus_func_int16_t_s(p_88))) & l_1779)))) >= (((safe_sub_func_uint16_t_u_u(6UL, 65529UL)) & p_88) , g_1300)) > 0xAD694F57L) | p_88);
                        (*l_1319) = ((--(*l_1858)) , ((0L & 0x2E92L) , (-10L)));
                    }
                }
                else
                {
                    int ***l_1869 = &l_1566;
                    char *l_1875 = &l_1870;
                    (*g_1782) = (safe_add_func_uint8_t_u_u(((((((*l_1869) = (((((**g_908) || l_1771) , l_1825) , (-7L)) , (void*)0)) != (void*)0) && 0xA8DBF8DBL) > 0L) , 255UL), p_88));
                    (*g_301) = (safe_mod_func_int8_t_s_s(((*l_189) = (safe_lshift_func_uint8_t_u_u((~g_530), 3))), (*l_1319)));
                    if ((((0x8E75L <= l_1771) , g_1407) & (p_88 & ((((*l_1875) = ((*l_189) |= ((*l_982) == ((*g_1604) = (*l_982))))) > (safe_add_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(p_88, ((*l_1318) = 0x81L))) , (p_88 < 1L)), 0x422DL))) > 0xC1ADED34L))))
                    {
                        char l_1880 = 3L;
                        unsigned *l_1881 = (void*)0;
                        unsigned *l_1882 = &g_255;
                        (*p_90) = ((l_1880 >= (((*l_1882) = p_88) == (--g_1229))) , (*g_136));
                    }
                    else
                    {
                        (*l_1319) ^= (**p_89);
                    }
                    (**p_89) ^= l_1571;
                }
            }
        }
        for (g_126 = (-16); (g_126 != (-12)); ++g_126)
        {
            int l_1910 = 0x692E2F2FL;
            int l_1911 = 0xD850F888L;
        }
    }
    else
    {
        short l_1925 = 0L;
        int *l_1926 = &l_849;
        (*p_89) = ((*g_136) = (*p_90));
        (*l_1568) = (safe_sub_func_uint8_t_u_u((*l_1568), ((*g_1782) == ((((void*)0 == &l_192) != ((&l_1547 != (void*)0) | ((*l_188) & ((safe_sub_func_int8_t_s_s(l_1925, ((((void*)0 != (*g_136)) < 0x1B63L) | (*l_188)))) & (*l_1319))))) , 1L))));
        (*p_89) = l_1926;
    }
    (**p_89) = (0x17L <= ((*l_188) && (p_88 != p_88)));
    return p_88;
}







static unsigned short func_93(int * p_94, char p_95, unsigned short p_96, int * p_97, int * p_98)
{
    int *l_111 = &g_14;
    int **l_140 = &l_111;
    if ((g_14 = (*p_98)))
    {
        unsigned short l_104 = 65535UL;
        (*g_101) = (void*)0;
        ++l_104;
    }
    else
    {
        unsigned l_115 = 1UL;
        unsigned short *l_117 = &g_118;
        int ***l_119 = (void*)0;
        int **l_120 = (void*)0;
        int **l_121 = &l_111;
        unsigned char *l_124 = &g_53;
        short *l_125 = &g_126;
        unsigned l_127 = 1UL;
        int l_132 = 0x46159332L;
        int ***l_180 = &g_139;
        int ***l_182 = &l_121;
        int *l_183 = &l_132;
        (*p_97) = (g_103 | (safe_sub_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(p_96, g_53)), ((void*)0 != l_111))));
        (*g_102) = (+(*g_102));
        if ((safe_unary_minus_func_int16_t_s(((*l_125) &= ((((safe_sub_func_uint32_t_u_u((l_115 ^ (&g_102 != (l_120 = (((*l_117) = g_116) , &l_111)))), ((void*)0 == l_121))) , (safe_sub_func_uint16_t_u_u((**l_120), (((*l_124) = g_103) < 0UL)))) | 3L) , p_96)))))
        {
            volatile int ***l_135 = &g_101;
            (*g_102) &= l_127;
            g_14 |= ((safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s(0L, (l_132 ^ ((safe_lshift_func_int8_t_s_s(g_103, 5)) != p_95)))), p_95)) >= p_95);
            (*l_135) = &g_102;
            (*l_120) = p_97;
        }
        else
        {
            int ***l_138 = (void*)0;
            unsigned char *l_173 = &g_53;
            if ((&g_102 == (l_140 = (g_139 = (g_136 = (p_95 , g_136))))))
            {
                short l_143 = 9L;
                unsigned short **l_152 = &l_117;
                int *l_153 = &l_132;
                (*g_136) = p_97;
                (**g_136) = (((safe_rshift_func_uint8_t_u_s((**l_140), 7)) && 0UL) & (l_143 , (safe_add_func_int8_t_s_s(7L, (safe_mod_func_int32_t_s_s(((*l_153) = (safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((8L == ((((*l_152) = (void*)0) != &g_118) && g_14)) == ((*l_111) < g_118)), 65532UL)), 14))), (*p_98)))))));
                (*l_111) = (**g_101);
            }
            else
            {
                int *l_160 = &l_132;
                short *l_161 = &g_162;
                if ((safe_lshift_func_uint8_t_u_s(((*l_124) |= (safe_sub_func_int8_t_s_s((((*l_111) >= ((p_96 < (**l_140)) == ((((*l_161) = ((*l_125) |= ((safe_mul_func_uint16_t_u_u((!65535UL), ((((*l_160) = (-1L)) > p_95) != p_95))) | (p_96 || ((&p_96 != &p_96) & 0xD1AAL))))) , (void*)0) != (void*)0))) >= 0x0D08L), g_14))), p_96)))
                {
                    (*g_139) = (*g_136);
                    if ((safe_mod_func_int16_t_s_s(p_96, p_96)))
                    {
                        (*p_97) = (*p_98);
                        return p_95;
                    }
                    else
                    {
                        unsigned char *l_165 = &g_53;
                        (*l_120) = ((*g_139) = (((void*)0 != l_165) , l_160));
                        (*p_97) &= ((safe_sub_func_int16_t_s_s(p_96, p_96)) ^ (*l_160));
                    }
                    g_101 = (void*)0;
                }
                else
                {
                    unsigned l_168 = 0x90C4FCC0L;
                    l_168 = (**g_139);
                    (*p_97) |= (p_96 == ((&g_162 == (void*)0) != ((g_116 , &g_53) == ((safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(0xABF03985L, p_95)), 7)) , l_173))));
                    (**l_121) &= (**g_101);
                }
                (*g_102) &= (**l_140);
                (*l_140) = p_97;
            }
            for (g_14 = (-26); (g_14 > 29); g_14 = safe_add_func_uint16_t_u_u(g_14, 7))
            {
                if ((*l_111))
                    break;
                (*g_102) ^= (-1L);
                (*g_102) = (*p_98);
            }
            for (l_115 = (-6); (l_115 == 26); l_115 = safe_add_func_int32_t_s_s(l_115, 1))
            {
                (**l_121) = (*p_97);
                (*g_139) = p_97;
            }
            return g_27;
        }
        (*l_183) &= (g_103 , (((**g_136) >= (((*l_124) = (((*l_117) = (safe_add_func_int16_t_s_s(0xD32EL, (**l_120)))) , p_96)) & (+((g_162 , ((*l_180) = &l_111)) == ((*l_182) = g_181))))) || 0x2475AA40L));
    }
    return p_95;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    transparent_crc(g_287, "g_287", print_hash_value);
    transparent_crc(g_393, "g_393", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_530, "g_530", print_hash_value);
    transparent_crc(g_544, "g_544", print_hash_value);
    transparent_crc(g_568, "g_568", print_hash_value);
    transparent_crc(g_587, "g_587", print_hash_value);
    transparent_crc(g_607, "g_607", print_hash_value);
    transparent_crc(g_646, "g_646", print_hash_value);
    transparent_crc(g_704, "g_704", print_hash_value);
    transparent_crc(g_765, "g_765", print_hash_value);
    transparent_crc(g_768, "g_768", print_hash_value);
    transparent_crc(g_805, "g_805", print_hash_value);
    transparent_crc(g_877, "g_877", print_hash_value);
    transparent_crc(g_942, "g_942", print_hash_value);
    transparent_crc(g_967, "g_967", print_hash_value);
    transparent_crc(g_977, "g_977", print_hash_value);
    transparent_crc(g_1217, "g_1217", print_hash_value);
    transparent_crc(g_1229, "g_1229", print_hash_value);
    transparent_crc(g_1300, "g_1300", print_hash_value);
    transparent_crc(g_1301, "g_1301", print_hash_value);
    transparent_crc(g_1402, "g_1402", print_hash_value);
    transparent_crc(g_1407, "g_1407", print_hash_value);
    transparent_crc(g_1497, "g_1497", print_hash_value);
    transparent_crc(g_1499, "g_1499", print_hash_value);
    transparent_crc(g_1515, "g_1515", print_hash_value);
    transparent_crc(g_1845, "g_1845", print_hash_value);
    transparent_crc(g_2065, "g_2065", print_hash_value);
    transparent_crc(g_2085, "g_2085", print_hash_value);
    transparent_crc(g_2106, "g_2106", print_hash_value);
    transparent_crc(g_2108, "g_2108", print_hash_value);
    transparent_crc(g_2289, "g_2289", print_hash_value);
    transparent_crc(g_2313, "g_2313", print_hash_value);
    transparent_crc(g_2353, "g_2353", print_hash_value);
    transparent_crc(g_2543, "g_2543", print_hash_value);
    transparent_crc(g_2565, "g_2565", print_hash_value);
    transparent_crc(g_2646, "g_2646", print_hash_value);
    transparent_crc(g_2656, "g_2656", print_hash_value);
    transparent_crc(g_2676, "g_2676", print_hash_value);
    transparent_crc(g_2738, "g_2738", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
