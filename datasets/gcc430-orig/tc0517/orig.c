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
   const volatile short f0;
   unsigned char f1;
   const volatile char f2;
};

union U1 {
   volatile unsigned char f0;
   volatile int f1;
   int f2;
   const unsigned f3;
};

union U2 {
   int f0;
   char f1;
   short f2;
   const int f3;
   volatile unsigned short f4;
};

union U3 {
   const int f0;
};


static unsigned short g_2 = 1UL;
static short g_3 = (-7L);
static unsigned char g_4 = 255UL;
static union U3 g_50 = {-1L};
static short g_93 = 0L;
static union U1 g_96 = {0x23L};
static unsigned short g_97 = 8UL;
static short g_106 = (-1L);
static unsigned short g_108 = 65535UL;
static volatile union U0 g_116 = {-1L};
static int g_117 = 0x2FEC8B64L;
static int g_136 = 1L;
static char g_137 = 0L;
static volatile unsigned short g_138 = 65535UL;
static volatile unsigned short g_148 = 1UL;
static union U2 g_168 = {-2L};
static volatile char g_200 = 0xEBL;
static volatile unsigned g_201 = 0xC52E31ACL;
static char g_220 = 0x93L;
static volatile unsigned char g_223 = 0x24L;
static volatile union U2 g_240 = {1L};
static volatile union U0 g_257 = {0xC28BL};
static volatile unsigned g_265 = 0xB7D57CF0L;
static unsigned char g_268 = 0xC3L;
static union U1 g_276 = {253UL};
static volatile char g_297 = 0xE7L;
static volatile unsigned g_303 = 0x32281006L;
static unsigned g_349 = 0UL;
static unsigned char g_350 = 255UL;
static union U1 g_400 = {255UL};
static const union U2 g_445 = {0x8D3C934CL};
static short g_497 = 0x49D8L;
static int g_498 = 0x6E90F8A7L;
static union U2 g_519 = {4L};
static union U2 g_566 = {0x612BCAFEL};
static volatile unsigned char g_593 = 0xA0L;
static volatile union U2 g_619 = {0L};
static volatile unsigned char g_644 = 0xCDL;
static unsigned g_651 = 0xDEA11C1AL;
static volatile union U1 g_683 = {0x66L};
static volatile union U0 g_693 = {0x1B26L};
static volatile union U2 g_698 = {-8L};
static volatile union U1 g_724 = {0xA8L};
static volatile union U2 g_736 = {0x2D56F13DL};
static int g_744 = 0x829E378AL;



static int func_1(void);
static char func_5(int p_6, short p_7);
static unsigned char func_22(unsigned p_23, unsigned p_24, short p_25, short p_26, unsigned char p_27);
static unsigned func_28(int p_29, unsigned p_30, unsigned char p_31, short p_32);
static short func_39(unsigned short p_40);
static union U3 func_41(unsigned char p_42, const int p_43, unsigned char p_44, short p_45, unsigned short p_46);
static unsigned char func_56(const char p_57, int p_58, unsigned p_59);
static char func_64(unsigned p_65, char p_66, unsigned p_67, short p_68, short p_69);
static unsigned func_70(short p_71, unsigned char p_72, unsigned p_73);
static unsigned char func_76(short p_77, unsigned p_78);
static int func_1(void)
{
    const unsigned char l_14 = 255UL;
    int l_19 = (-1L);
    short l_716 = 0xA69AL;
    g_4 = (g_3 |= g_2);
    g_724.f1 = ((func_5(g_2, (safe_div_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_s((~0x4272L), 10)) <= 251UL) > (l_14 < (g_744 ^= ((safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(((l_19 &= 0x1AL) || ((safe_mul_func_uint8_t_u_u(func_22(func_28((safe_mul_func_uint32_t_u_u(0xBFE73744L, (((safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s(func_39((func_41((safe_div_func_int32_t_s_s((g_3 , l_14), (g_4 , l_19))), g_2, g_4, g_2, g_3) , l_19)), l_19)), l_716)) , l_19) != g_445.f3))), g_566.f0, l_716, l_19), l_14, g_3, g_519.f2, l_14), l_716)) | l_716)), g_519.f3)), 7)) < l_14)))), 0xEFA3L))) || 0xD9L) > g_566.f3);
    return l_14;
}







static char func_5(int p_6, short p_7)
{
    unsigned short l_745 = 7UL;
    int l_746 = 0xB24FDA75L;
    l_746 &= l_745;
    l_746 &= l_745;
    g_400.f1 = (((safe_rshift_func_uint8_t_u_s(p_6, 4)) | p_7) | (safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s((((0x86D778F3L != (p_6 >= g_445.f1)) < (func_22(func_28(g_445.f4, ((0x52B39CA8L == ((l_746 & l_746) < g_3)) == g_651), g_268, p_6), g_2, p_6, p_6, g_519.f0) , p_7)) , 0x490EL), p_7)), 0x26D70E8CL)));
    return l_745;
}







static unsigned char func_22(unsigned p_23, unsigned p_24, short p_25, short p_26, unsigned char p_27)
{
    unsigned l_726 = 1UL;
    union U3 l_737 = {-4L};
    ++l_726;
    if (func_70(g_593, p_27, g_3))
    {
        char l_733 = 0xE6L;
        int l_742 = 0L;
        l_742 ^= (safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(((l_733 | ((safe_sub_func_int16_t_s_s(1L, ((g_736 , l_737) , (safe_div_func_int8_t_s_s((g_168.f1 = (0x3807L != (safe_mod_func_uint16_t_u_u(g_498, (g_698.f2 || p_27))))), p_25))))) < g_220)) >= g_519.f1), l_737.f0)), p_24));
    }
    else
    {
        unsigned short l_743 = 0xFE2CL;
        l_743 = 0xAB6FD1A2L;
    }
    g_117 = p_24;
    g_724.f2 = (l_726 || p_26);
    return p_23;
}







static unsigned func_28(int p_29, unsigned p_30, unsigned char p_31, short p_32)
{
    unsigned char l_719 = 246UL;
    int l_725 = 0xF09966E4L;
    p_29 = (safe_lshift_func_int16_t_s_u((!l_719), 3));
    l_725 = (l_719 , (safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(((l_719 == (((g_693 , g_116.f1) && (!(g_724 , l_719))) != (g_97 = (l_719 == 65535UL)))) , 0x88L), l_719)), g_445.f1)));
    return l_719;
}







static short func_39(unsigned short p_40)
{
    int l_51 = 0xE20EEB49L;
    int l_79 = 1L;
    int l_501 = 0L;
    unsigned short l_523 = 3UL;
    unsigned l_529 = 1UL;
    unsigned char l_548 = 251UL;
    unsigned char l_557 = 255UL;
    int l_558 = 0xF9482752L;
    short l_715 = 8L;
    l_51 = l_51;
    l_51 = 6L;
    if ((safe_div_func_uint32_t_u_u(4294967295UL, (0xF8L || ((g_3 & (((p_40 & (l_51 = p_40)) == ((safe_lshift_func_uint8_t_u_u(func_56((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(g_2, (func_64(func_70((safe_lshift_func_int16_t_s_u((func_76(l_79, l_79) ^ p_40), 5)), g_3, p_40), g_50.f0, p_40, g_50.f0, l_79) > 1L))) | 0x0122C96BL), g_50.f0)), p_40, g_3), 0)) , 0x655BL)) | p_40)) >= l_79)))))
    {
        unsigned l_483 = 4294967290UL;
        int l_484 = 0L;
        int l_500 = 0xB4428B0BL;
        int l_525 = 1L;
        int l_528 = 0x0E63A4D4L;
        int l_561 = 0L;
        unsigned l_677 = 4294967291UL;
        unsigned l_699 = 0x3EA96C5FL;
        l_79 = g_240.f4;
        for (g_93 = 0; (g_93 == 17); g_93 = safe_add_func_uint16_t_u_u(g_93, 6))
        {
            unsigned l_446 = 4294967287UL;
            int l_450 = (-1L);
            short l_513 = 0x44ECL;
            unsigned short l_518 = 0x2750L;
            int l_527 = 0x36EF0189L;
            int l_629 = 7L;
            int l_638 = 1L;
            int l_639 = (-8L);
            int l_640 = 0xF13AAC68L;
            int l_641 = (-8L);
            unsigned l_662 = 0x8C44B7F7L;
            if ((g_445 , (0xFDF90A1AL ^ g_240.f2)))
            {
                unsigned char l_449 = 0x38L;
                int l_499 = (-10L);
                l_446--;
                l_450 = l_449;
                l_79 &= 3L;
                l_501 |= (l_500 = (p_40 , (safe_lshift_func_uint16_t_u_u(g_137, (l_499 = (safe_mod_func_uint32_t_u_u(p_40, (safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(g_200, (safe_div_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((((((safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((((safe_add_func_int32_t_s_s((safe_div_func_uint16_t_u_u(((((((safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((g_117 == (safe_lshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((((l_484 |= l_483) != ((safe_div_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((((l_51 |= ((((safe_div_func_int32_t_s_s(((safe_mod_func_int8_t_s_s(g_349, p_40)) , (safe_div_func_uint16_t_u_u(0UL, p_40))), p_40)) || p_40) > p_40) , (-4L))) && l_449) || 7UL), 0x5AL)) , g_106), (-2L))), g_220)) < l_449)) ^ 0x5FD4406CL), g_4)), 13))), l_449)), 0xBEL)), p_40)) || g_497) && 0x258AL) > 65534UL) || g_137) && 0xF588B686L), g_498)), (-1L))) , 0x6EE8D698L) || 0L), 0xD6L)), l_483)) || p_40) < 0x4BBB311BL) ^ (-1L)) ^ 0x3397EC06L) && l_483), 0x8094L)), p_40)) || l_446), l_79)))), 10)))))))));
            }
            else
            {
                unsigned short l_502 = 0x5E41L;
                --l_502;
            }
        }
    }
    else
    {
        char l_700 = (-7L);
        return l_700;
    }
    g_276.f2 = (~(((0x80EAL < (l_558 = l_529)) != g_106) && func_70(p_40, (safe_mod_func_int32_t_s_s((((g_349 = (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((g_240.f4 > ((safe_lshift_func_int16_t_s_u(l_529, (safe_sub_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((l_501 = l_548), (safe_lshift_func_uint8_t_u_u((g_566.f3 & 0xD3L), 5)))) && 0x345FE1BBL), l_715)))) == l_79)), l_548)), l_548))) > 1L) > l_79), p_40)), p_40)));
    return p_40;
}







static union U3 func_41(unsigned char p_42, const int p_43, unsigned char p_44, short p_45, unsigned short p_46)
{
    unsigned char l_49 = 0x7CL;
    l_49 = 9L;
    return g_50;
}







static unsigned char func_56(const char p_57, int p_58, unsigned p_59)
{
    unsigned char l_412 = 8UL;
    int l_413 = 7L;
    int l_415 = 1L;
    union U3 l_428 = {0xDB9FADFDL};
    int l_429 = 0L;
    int l_430 = 0xCFFCAE45L;
    for (g_97 = 0; (g_97 <= 52); g_97 = safe_add_func_uint8_t_u_u(g_97, 7))
    {
        int l_414 = 0x678578EFL;
        for (g_349 = 0; (g_349 > 31); g_349 = safe_add_func_int8_t_s_s(g_349, 4))
        {
            l_415 &= ((l_413 |= l_412) ^ (g_303 && l_414));
            l_414 ^= (p_58 ^ g_265);
        }
    }
    l_430 ^= (safe_rshift_func_int8_t_s_s(((((g_116.f1 >= (l_429 &= ((safe_sub_func_uint16_t_u_u(p_58, (safe_sub_func_int16_t_s_s((g_168.f2 && (safe_add_func_int16_t_s_s(((((l_415 = (65526UL ^ (safe_lshift_func_uint16_t_u_s(((l_413 = (safe_rshift_func_int8_t_s_u((p_59 || g_136), (g_168.f1 | ((l_428 , (l_413 >= g_106)) != g_137))))) >= g_93), p_59)))) , p_58) , 255UL) & g_2), 0UL))), g_50.f0)))) | g_4))) < l_412) >= 0L) < g_108), 5));
    for (l_430 = 2; (l_430 <= (-24)); l_430 = safe_sub_func_int32_t_s_s(l_430, 1))
    {
        char l_435 = 0xB5L;
        int l_440 = (-1L);
        g_276.f1 = p_58;
        l_413 = (g_96.f1 || (safe_sub_func_uint8_t_u_u(l_435, (safe_mod_func_int32_t_s_s(0x86A8A5BEL, ((safe_add_func_uint32_t_u_u((l_440 <= (~l_440)), 0x07539CE6L)) , p_57))))));
    }
    return p_59;
}







static char func_64(unsigned p_65, char p_66, unsigned p_67, short p_68, short p_69)
{
    int l_195 = 0xACFD07FAL;
    int l_196 = 0x86F730CBL;
    int l_199 = 0L;
    const short l_208 = 5L;
    int l_211 = (-2L);
    int l_230 = 3L;
    unsigned l_275 = 0xC242C42AL;
    unsigned char l_289 = 0UL;
    unsigned l_290 = 0x2C715911L;
    char l_291 = 1L;
    unsigned char l_292 = 6UL;
    int l_298 = 0L;
    int l_299 = 1L;
    int l_300 = 0xCD777301L;
    int l_301 = (-1L);
    int l_302 = 1L;
    unsigned short l_395 = 0xE1F1L;
    unsigned l_405 = 0UL;
    int l_406 = 0xCAF6B08FL;
    unsigned l_407 = 3UL;
    if (l_195)
    {
        int l_197 = 0x89442298L;
        int l_198 = 0L;
        g_201--;
        g_96.f2 = (safe_rshift_func_int8_t_s_u((((safe_add_func_int32_t_s_s(l_208, (safe_mul_func_int8_t_s_s((g_137 ^= p_67), (g_117 <= (l_211 |= ((func_41((g_168 , (0x7831L < g_3)), (l_199 = (g_50 , p_68)), g_106, g_50.f0, l_195) , l_198) , p_68))))))) != l_195) || 0xCBL), 3));
        g_96.f2 = l_197;
        l_211 = 0xA27DD60BL;
    }
    else
    {
        unsigned short l_212 = 0x3B03L;
        int l_213 = 0xF38B4BADL;
        int l_214 = 0x0CE1991DL;
        int l_215 = 5L;
        int l_216 = 1L;
        int l_217 = 8L;
        int l_218 = 0L;
        short l_219 = 1L;
        int l_221 = 0x149EDFFEL;
        int l_222 = 0xC0AA097DL;
        unsigned l_237 = 5UL;
        int l_260 = 0xFC518A76L;
        unsigned l_316 = 1UL;
        l_195 = (0xE35D45CBL == l_212);
        --g_223;
        for (p_68 = (-23); (p_68 != (-29)); p_68 = safe_sub_func_int32_t_s_s(p_68, 4))
        {
            g_117 = g_168.f2;
            l_215 = (g_96.f2 &= (g_116 , g_117));
        }
        if (((((safe_mul_func_uint16_t_u_u((l_230 , 0x0D76L), (safe_lshift_func_uint8_t_u_u(((+l_211) , ((l_217 &= (safe_lshift_func_int8_t_s_u((l_212 < (safe_rshift_func_uint16_t_u_s(func_70((p_69 |= g_223), g_168.f2, g_96.f3), (p_68 || l_199)))), p_65))) >= l_213)), g_137)))) == g_50.f0) > p_65) <= l_237))
        {
            unsigned l_243 = 1UL;
            unsigned char l_244 = 0xFCL;
            for (p_69 = 0; (p_69 > 18); p_69 = safe_add_func_int16_t_s_s(p_69, 7))
            {
                g_117 = (g_240 , g_220);
            }
            l_195 = (0L & (((l_243 = (g_223 > (p_69 = (safe_mul_func_uint8_t_u_u(g_97, g_108))))) , (-9L)) & (l_244 != (g_93 | (l_215 = (safe_mul_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(g_93, (((((l_217 >= p_66) | p_68) == p_65) & g_137) & l_215))), 1L)) | p_68), 0x06L)))))));
            g_96.f2 |= (((((g_117 = (safe_lshift_func_uint16_t_u_s(0x98FBL, (g_168 , (((((((func_70((8UL >= g_138), l_243, g_3) & 0xDEL) , g_257) , (-1L)) || p_67) , l_215) < 0x1967897EL) & 0x2AL))))) == g_97) , 5UL) & 0x49L) , l_195);
        }
        else
        {
            char l_261 = 0xD5L;
            int l_262 = 5L;
            int l_263 = 0xB1722911L;
            int l_264 = 0xEB332806L;
            ++g_265;
            g_268++;
            if ((0x6BL > (g_220 = ((g_4 = (((safe_add_func_int16_t_s_s(l_262, (safe_rshift_func_uint16_t_u_u((0x808F3841L < l_275), 9)))) , l_262) <= p_65)) < l_216))))
            {
                l_264 = (p_69 , g_201);
            }
            else
            {
                char l_293 = (-1L);
                int l_294 = 0x74277A12L;
                int l_295 = 0x8D9240F4L;
                int l_296 = 1L;
                ++g_303;
                l_217 |= p_69;
            }
            for (l_262 = 0; (l_262 < (-9)); l_262 = safe_sub_func_uint8_t_u_u(l_262, 4))
            {
                unsigned char l_323 = 0x70L;
                int l_324 = 0x559A3BD0L;
                short l_330 = 0xEB1FL;
                int l_371 = 1L;
                unsigned short l_375 = 65530UL;
                if ((g_276.f2 = (safe_rshift_func_uint16_t_u_u((!((func_70((0UL != (safe_lshift_func_int16_t_s_u(((l_211 = g_2) >= 0xB371F4C7L), (l_301 = (g_117 | g_137))))), func_70(((g_220 = (p_65 && (((((safe_sub_func_int16_t_s_s(l_213, (safe_mod_func_int16_t_s_s(l_316, (safe_sub_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_u(g_240.f0, 14)) != 1L) < g_168.f1), l_291)), l_323)))))) , 4294967293UL) != l_300) , 0xAFC2CCCFL) > p_68))) , l_262), g_4, p_68), g_108) != 1L) && g_240.f0)), l_324))))
                {
                    unsigned short l_325 = 0x3036L;
                    int l_378 = 0x13EC3675L;
                    int l_379 = 0x3C702A61L;
                    unsigned l_380 = 0x5CCEBF27L;
                    l_325 &= g_138;
                    l_216 = (safe_mod_func_uint32_t_u_u((g_276.f1 != ((p_68 ^ 247UL) && ((g_50.f0 != 0xA994A6ECL) < (safe_lshift_func_int16_t_s_u(((~l_330) , (p_68 & g_96.f2)), (safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((0x042DL || p_65) >= 1UL), g_108)), 255UL)), g_137))))))), 0xB5B80E2FL));
                    if ((safe_add_func_uint16_t_u_u((l_299 = (l_195 = (safe_add_func_uint32_t_u_u((l_263 = 6UL), (safe_mul_func_uint8_t_u_u((g_276.f2 > l_261), l_325)))))), (safe_rshift_func_uint16_t_u_s(((g_108 = ((safe_div_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((((g_349 = 4294967295UL) != (g_350++)) || (safe_rshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u((g_97 = p_67), (safe_rshift_func_uint8_t_u_s((l_300 = ((((((0xDDL <= (safe_mod_func_int8_t_s_s(func_70(((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((g_240.f2 != ((7UL || l_208) < l_264)), g_4)), l_213)) == p_66), g_276.f2, p_65), 9L))) >= 0x20B721F5L) == g_220) , g_50.f0) & g_106) | g_117)), 0)))), g_276.f3))) <= g_106), g_108)), l_261)) != p_69)) & 6L), p_69)))))
                    {
                        short l_367 = 0x28BFL;
                        int l_368 = (-1L);
                        int l_369 = (-1L);
                        int l_370 = 0x3CF4879BL;
                        int l_372 = 0x74140B30L;
                        int l_373 = 9L;
                        int l_374 = (-2L);
                        l_263 = ((safe_div_func_uint16_t_u_u(0xE0E2L, 0x6115L)) | 0UL);
                        ++l_375;
                        if (g_168.f1)
                            continue;
                        l_380--;
                    }
                    else
                    {
                        g_96.f1 |= p_68;
                    }
                }
                else
                {
                    return g_276.f0;
                }
            }
        }
    }
    l_301 &= (safe_lshift_func_int8_t_s_s((((func_70((p_68 , ((safe_lshift_func_uint8_t_u_s(g_168.f1, (l_211 = (safe_add_func_int8_t_s_s(p_69, g_96.f0))))) ^ l_195)), l_300, (++g_349)) == l_302) <= ((safe_sub_func_int8_t_s_s((p_66 = (((l_302 , (-9L)) , 0xC1BF1FC3L) == g_168.f1)), 253UL)) & 0xEDL)) ^ 0L), p_69));
    ++l_395;
    l_302 = (safe_mul_func_int8_t_s_s(((g_400 , ((((l_405 ^= ((g_117 ^ ((safe_add_func_int16_t_s_s((func_70(g_240.f2, g_4, (l_292 != 0x24L)) < (safe_sub_func_uint8_t_u_u(p_65, (g_137 = (g_220 , p_67))))), 8UL)) , l_301)) > 0xDFL)) <= g_2) && 1UL) , l_406)) < l_230), l_291));
    return l_407;
}







static unsigned func_70(short p_71, unsigned char p_72, unsigned p_73)
{
    unsigned l_191 = 1UL;
    int l_194 = 0x969CE4C4L;
    l_191--;
    l_194 = (-9L);
    return g_148;
}







static unsigned char func_76(short p_77, unsigned p_78)
{
    unsigned l_80 = 4294967295UL;
    int l_95 = 1L;
    int l_107 = 3L;
    int l_115 = 8L;
    unsigned char l_132 = 4UL;
    int l_133 = 0x693068B8L;
    int l_134 = 8L;
    int l_145 = 0x64248A5EL;
    const short l_167 = 0xF271L;
    if (l_80)
    {
        short l_81 = (-1L);
        int l_88 = 2L;
        int l_135 = 0x87E15334L;
        if (l_81)
        {
            int l_94 = (-1L);
            l_95 = ((((safe_add_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u(((0L > p_77) && g_4), 6)) | (safe_add_func_int8_t_s_s((l_88 ^= p_77), l_80))) & (safe_sub_func_int16_t_s_s(8L, (((safe_lshift_func_int8_t_s_s((g_93 ^= ((g_2 | p_77) && g_2)), 7)) ^ 0x822C3E50L) , 8L)))), l_94)) , l_94) && 0x97L) | p_78);
            g_97 |= (g_96 , (g_96.f2 = g_50.f0));
            l_107 = (g_50 , ((l_88 = (safe_div_func_int8_t_s_s(((l_80 < ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((p_77 >= (l_81 >= (safe_sub_func_uint16_t_u_u(((g_4 &= l_95) && (g_117 = (((((p_78 > (--g_108)) & 0x40AC15C2L) < (((safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(1UL, l_115)), l_80)) , g_116) , 0UL)) != 0xCA365B03L) >= (-5L)))), p_77)))), p_78)), g_50.f0)) == 0UL)) == g_106), (-3L)))) ^ p_78));
        }
        else
        {
            l_132 ^= ((0x76B58F18L & ((safe_sub_func_int32_t_s_s(0x768DD0F0L, (safe_lshift_func_uint16_t_u_s((g_108++), (safe_mod_func_int16_t_s_s(((l_88 > g_97) != l_95), (safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((l_95 < ((p_77 <= (safe_lshift_func_int16_t_s_u((-10L), 1))) || l_95)), 5)) | g_96.f0), 11)))))))) & 4UL)) >= l_81);
        }
        ++g_138;
    }
    else
    {
        char l_141 = 0L;
        int l_142 = 0xACE7FEFAL;
        int l_143 = 0x76A600E3L;
        int l_144 = 0xA563CFC5L;
        int l_146 = 0xC4AE7C4FL;
        int l_147 = 0x9E710002L;
        g_148--;
        l_142 = (safe_rshift_func_int16_t_s_s(p_78, (g_106 = l_95)));
        for (g_136 = 0; (g_136 <= 27); g_136 = safe_add_func_int32_t_s_s(g_136, 3))
        {
            int l_157 = 0x6B7A3D1CL;
            int l_158 = 0xF0AF6214L;
            g_96.f2 = (safe_div_func_int8_t_s_s((l_157 |= g_138), l_158));
        }
    }
    g_117 &= (0x6DE09DF9L & p_78);
    g_96.f2 = (l_134 || (0x13L <= (l_107 && ((((safe_mul_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_s(((p_77 & l_133) != (((safe_rshift_func_uint8_t_u_s((!l_167), 6)) & (g_168 , (safe_mul_func_uint16_t_u_u((l_145 = (((safe_lshift_func_uint8_t_u_u(0xEEL, (safe_lshift_func_uint16_t_u_u(l_115, 3)))) != 0x03CF1BE4L) || p_77)), g_168.f0)))) & p_77)), 10)) | 1UL) , g_168.f0), 0L)) > p_77) || p_77) ^ g_2))));
    for (l_134 = 23; (l_134 <= (-21)); l_134--)
    {
        unsigned l_190 = 1UL;
        for (p_78 = 0; (p_78 >= 52); ++p_78)
        {
            unsigned l_181 = 0x277048F1L;
            int l_184 = 0xA2DD6720L;
            unsigned l_185 = 0xA0AEB11FL;
            int l_186 = 0x778E667AL;
            l_95 = ((safe_lshift_func_uint16_t_u_s((p_78 != (g_168.f2 = p_78)), 2)) ^ (l_181 ^= g_97));
            l_186 = (g_108 <= (l_185 = (g_96.f3 == ((safe_lshift_func_int16_t_s_s((g_168.f4 != (l_184 &= p_78)), 12)) && (p_77 == l_132)))));
            if ((safe_mod_func_uint16_t_u_u((!((-1L) | g_4)), p_77)))
            {
                g_117 |= g_108;
            }
            else
            {
                union U3 l_189 = {-1L};
                l_190 |= (l_189 , l_167);
            }
        }
    }
    return g_116.f1;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_50.f0, "g_50.f0", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_96.f0, "g_96.f0", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_116.f0, "g_116.f0", print_hash_value);
    transparent_crc(g_116.f1, "g_116.f1", print_hash_value);
    transparent_crc(g_116.f2, "g_116.f2", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_168.f1, "g_168.f1", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_240.f0, "g_240.f0", print_hash_value);
    transparent_crc(g_240.f1, "g_240.f1", print_hash_value);
    transparent_crc(g_240.f2, "g_240.f2", print_hash_value);
    transparent_crc(g_240.f3, "g_240.f3", print_hash_value);
    transparent_crc(g_240.f4, "g_240.f4", print_hash_value);
    transparent_crc(g_257.f0, "g_257.f0", print_hash_value);
    transparent_crc(g_257.f1, "g_257.f1", print_hash_value);
    transparent_crc(g_257.f2, "g_257.f2", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    transparent_crc(g_276.f0, "g_276.f0", print_hash_value);
    transparent_crc(g_297, "g_297", print_hash_value);
    transparent_crc(g_303, "g_303", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    transparent_crc(g_350, "g_350", print_hash_value);
    transparent_crc(g_400.f0, "g_400.f0", print_hash_value);
    transparent_crc(g_400.f1, "g_400.f1", print_hash_value);
    transparent_crc(g_400.f2, "g_400.f2", print_hash_value);
    transparent_crc(g_400.f3, "g_400.f3", print_hash_value);
    transparent_crc(g_445.f0, "g_445.f0", print_hash_value);
    transparent_crc(g_445.f1, "g_445.f1", print_hash_value);
    transparent_crc(g_445.f2, "g_445.f2", print_hash_value);
    transparent_crc(g_445.f3, "g_445.f3", print_hash_value);
    transparent_crc(g_445.f4, "g_445.f4", print_hash_value);
    transparent_crc(g_497, "g_497", print_hash_value);
    transparent_crc(g_498, "g_498", print_hash_value);
    transparent_crc(g_519.f0, "g_519.f0", print_hash_value);
    transparent_crc(g_519.f1, "g_519.f1", print_hash_value);
    transparent_crc(g_519.f2, "g_519.f2", print_hash_value);
    transparent_crc(g_519.f3, "g_519.f3", print_hash_value);
    transparent_crc(g_519.f4, "g_519.f4", print_hash_value);
    transparent_crc(g_566.f0, "g_566.f0", print_hash_value);
    transparent_crc(g_566.f1, "g_566.f1", print_hash_value);
    transparent_crc(g_566.f2, "g_566.f2", print_hash_value);
    transparent_crc(g_566.f3, "g_566.f3", print_hash_value);
    transparent_crc(g_566.f4, "g_566.f4", print_hash_value);
    transparent_crc(g_593, "g_593", print_hash_value);
    transparent_crc(g_619.f0, "g_619.f0", print_hash_value);
    transparent_crc(g_619.f1, "g_619.f1", print_hash_value);
    transparent_crc(g_619.f2, "g_619.f2", print_hash_value);
    transparent_crc(g_619.f3, "g_619.f3", print_hash_value);
    transparent_crc(g_619.f4, "g_619.f4", print_hash_value);
    transparent_crc(g_644, "g_644", print_hash_value);
    transparent_crc(g_651, "g_651", print_hash_value);
    transparent_crc(g_683.f0, "g_683.f0", print_hash_value);
    transparent_crc(g_693.f0, "g_693.f0", print_hash_value);
    transparent_crc(g_693.f1, "g_693.f1", print_hash_value);
    transparent_crc(g_693.f2, "g_693.f2", print_hash_value);
    transparent_crc(g_698.f0, "g_698.f0", print_hash_value);
    transparent_crc(g_698.f1, "g_698.f1", print_hash_value);
    transparent_crc(g_698.f2, "g_698.f2", print_hash_value);
    transparent_crc(g_698.f3, "g_698.f3", print_hash_value);
    transparent_crc(g_698.f4, "g_698.f4", print_hash_value);
    transparent_crc(g_724.f0, "g_724.f0", print_hash_value);
    transparent_crc(g_724.f1, "g_724.f1", print_hash_value);
    transparent_crc(g_724.f2, "g_724.f2", print_hash_value);
    transparent_crc(g_724.f3, "g_724.f3", print_hash_value);
    transparent_crc(g_736.f0, "g_736.f0", print_hash_value);
    transparent_crc(g_736.f1, "g_736.f1", print_hash_value);
    transparent_crc(g_736.f2, "g_736.f2", print_hash_value);
    transparent_crc(g_736.f3, "g_736.f3", print_hash_value);
    transparent_crc(g_736.f4, "g_736.f4", print_hash_value);
    transparent_crc(g_744, "g_744", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
