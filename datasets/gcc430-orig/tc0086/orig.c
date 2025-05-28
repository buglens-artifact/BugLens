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
   unsigned f0 : 17;
   signed f1 : 2;
   signed f2 : 28;
   signed f3 : 24;
   unsigned f4 : 7;
   signed f5 : 2;
};

struct S1 {
   struct S0 f0;
   int f1;
   int f2;
   unsigned f3;
   char f4;
   unsigned char f5;
   int f6;
   unsigned short f7;
   char f8;
   struct S0 f9;
};


static unsigned char g_7 = 9UL;
static struct S1 g_29 = {{235,-0,5860,-295,0,1},0x45EB447FL,0x326D35DFL,0x61DFA239L,1L,0x99L,-1L,65535UL,0L,{75,0,10954,-178,7,-0}};
static unsigned char g_51 = 0xF9L;
static struct S1 g_71 = {{9,0,-3919,-575,8,0},1L,0xC6AA55A6L,4294967287UL,0x7BL,0x49L,3L,8UL,0x50L,{225,-0,11959,-936,2,-1}};
static unsigned g_125 = 0x03B9D00BL;
static unsigned char g_171 = 0x2FL;
static struct S1 g_213 = {{145,0,-11018,-1768,3,-0},-1L,0x3B2CC002L,2UL,0xDDL,0x90L,0x04B40D20L,0xE3B4L,-8L,{14,-0,-12411,-674,7,0}};
static short g_214 = 0x75E7L;
static unsigned char g_215 = 0xEAL;
static unsigned g_333 = 4294967286UL;
static int g_334 = 0L;
static int g_485 = (-9L);
static int g_645 = (-4L);
static unsigned char g_676 = 0xD1L;
static unsigned g_719 = 0UL;



static unsigned char func_1(void);
static struct S0 func_2(unsigned p_3, unsigned char p_4, unsigned short p_5, struct S1 p_6);
static short func_11(struct S1 p_12);
static struct S0 func_13(unsigned short p_14, unsigned p_15, int p_16, unsigned p_17, unsigned p_18);
static int func_26(struct S1 p_27, unsigned p_28);
static struct S0 func_32(unsigned char p_33);
static int func_40(short p_41, int p_42, int p_43, short p_44);
static int func_52(unsigned p_53, short p_54);
static short func_58(unsigned short p_59, unsigned short p_60, int p_61, unsigned p_62);
static unsigned short func_65(char p_66, unsigned short p_67, char p_68);
static unsigned char func_1(void)
{
    unsigned short l_8 = 0UL;
    short l_21 = 9L;
    int l_458 = 0L;
    unsigned char l_717 = 0UL;
    char l_720 = 8L;
    short l_741 = 0x687EL;
    struct S1 l_742 = {{107,-1,-3506,-1497,3,-1},0x6E6C2D0AL,0x2A4AC578L,0xECD9366FL,0x37L,0x05L,0x33B97D8EL,65531UL,0x94L,{248,0,-12552,-1469,10,-1}};
    unsigned char l_743 = 255UL;
    l_742.f0 = func_2(g_7, (((l_8 , ((safe_rshift_func_int16_t_s_s(func_11(((l_741 = (func_13(g_7, ((safe_rshift_func_int16_t_s_s(l_21, (g_719 = (safe_rshift_func_uint8_t_u_s((g_7 == g_7), (((safe_lshift_func_int16_t_s_u((func_26((g_29 = g_29), (safe_rshift_func_uint16_t_u_s(((func_32(((safe_lshift_func_int8_t_s_s(((!(g_7 , (safe_sub_func_int32_t_s_s(((safe_mod_func_int32_t_s_s((l_458 = func_40(((safe_mod_func_uint8_t_u_u((g_51 = (((safe_add_func_int32_t_s_s((safe_div_func_uint8_t_u_u(l_21, g_7)), 0xDBA47A58L)) <= 0x1D84L) >= g_7)), g_7)) | 0x4DL), g_7, g_7, g_7)), 1UL)) == g_7), g_333)))) <= g_7), g_7)) == g_333)) , l_717) & l_717), g_7))) , 6L), g_7)) , 0x9BL) >= l_8)))))) , g_71.f8), g_676, g_7, l_720) , l_717)) , l_742)), l_742.f5)) < l_743)) , g_7) || g_645), g_645, l_742);
    g_29.f0.f3 = g_213.f9.f1;
    g_29 = g_71;
    g_29 = g_29;
    return l_720;
}







static struct S0 func_2(unsigned p_3, unsigned char p_4, unsigned short p_5, struct S1 p_6)
{
    struct S0 l_744 = {141,1,-3799,-557,0,0};
    return l_744;
}







static short func_11(struct S1 p_12)
{
    p_12.f0.f2 = g_29.f9.f0;
    return p_12.f9.f5;
}







static struct S0 func_13(unsigned short p_14, unsigned p_15, int p_16, unsigned p_17, unsigned p_18)
{
    unsigned char l_735 = 250UL;
    struct S1 l_736 = {{196,-1,11773,3935,9,-0},1L,-1L,0UL,1L,9UL,-3L,0xAC7EL,0x32L,{326,-1,-3700,2188,3,1}};
    struct S1 l_739 = {{321,1,-1638,50,10,1},0L,-5L,5UL,0x06L,0xC4L,9L,0xD6C0L,-5L,{67,-1,1612,1247,4,-1}};
    g_213.f9.f2 = ((((g_214 = (safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(func_52(g_213.f9.f3, g_213.f9.f3), func_65(((func_52((((safe_sub_func_uint16_t_u_u(func_65(p_15, (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((g_719 = func_65((((((l_735 == (((func_26((l_736 = l_736), ((0x39L ^ (g_213.f5 = (((safe_add_func_uint8_t_u_u(func_26(l_739, l_739.f0.f5), g_71.f0.f1)) || p_15) < 0x8FL))) >= 0xEEL)) , l_736.f5) == g_51) || g_213.f8)) >= 0L) ^ 0UL) != p_15) , 0xEFL), l_739.f9.f2, p_16)), p_16)), 2)), p_16)), g_213.f9.f0), l_739.f3)) ^ (-1L)) != 2L), l_739.f9.f4) , 251UL) != p_15), g_71.f1, g_29.f9.f2))), l_739.f7))) < l_739.f9.f5) > l_739.f8) <= l_739.f0.f2);
    if (p_14)
    {
        struct S0 l_740 = {202,-1,-14261,493,10,-1};
        l_740 = l_740;
    }
    else
    {
        l_736.f9.f1 = (g_29.f9.f1 = (-3L));
    }
    return l_739.f9;
}







static int func_26(struct S1 p_27, unsigned p_28)
{
    int l_718 = (-7L);
    g_213.f0 = g_213.f9;
    g_213.f2 = ((g_71.f0.f5 = (g_71.f0.f2 = l_718)) , (l_718 == g_29.f0.f4));
    return g_333;
}







static struct S0 func_32(unsigned char p_33)
{
    struct S1 l_459 = {{69,1,8592,2017,10,1},3L,0xF90F2415L,0x67A5E661L,0x01L,0xABL,0x2DE31B59L,0x14DEL,-9L,{26,1,5955,841,3,1}};
    short l_501 = 0xF790L;
    char l_528 = 0x4AL;
    short l_550 = 0L;
    unsigned l_555 = 0xD263F547L;
    unsigned l_582 = 0xE815057BL;
    unsigned short l_594 = 0xB8FAL;
    int l_674 = 0L;
    l_459 = g_71;
    for (l_459.f1 = 0; (l_459.f1 > (-14)); l_459.f1--)
    {
        unsigned l_476 = 4294967295UL;
        unsigned short l_488 = 0xA3F1L;
        unsigned char l_492 = 0x22L;
        struct S0 l_520 = {281,-1,-9684,2188,8,-0};
        int l_529 = 0xE9FDBB58L;
        char l_531 = (-1L);
        struct S1 l_569 = {{265,-1,4879,-3579,7,0},0x3C9F7A75L,2L,0xF136A097L,6L,0xCBL,0xCCE9FC63L,5UL,0xCFL,{69,1,-16322,1477,4,-1}};
        unsigned char l_579 = 0x2FL;
        int l_580 = 0x4DE6A923L;
        unsigned l_600 = 4294967295UL;
        unsigned short l_646 = 0xA787L;
        int l_685 = 0x0BFC10E0L;
        unsigned l_712 = 1UL;
        g_71.f0.f5 = ((((safe_add_func_uint16_t_u_u(65527UL, p_33)) & 0x11L) < (safe_lshift_func_int8_t_s_s(0xB5L, (safe_div_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((g_51 || p_33), func_65(l_459.f2, ((safe_add_func_uint8_t_u_u(g_213.f4, (safe_lshift_func_int16_t_s_s(((!((g_213.f9.f1 > 0xAA241CF3L) != p_33)) | p_33), 3)))) , 65535UL), g_333))), (-1L)))))) | p_33);
        if ((g_71.f9.f2 = ((((g_71.f5 & (safe_rshift_func_int8_t_s_s(0x21L, l_476))) && (p_33 != ((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(l_476, ((((safe_sub_func_uint16_t_u_u((!g_7), (((g_485 & (((safe_mod_func_int8_t_s_s(((g_213.f9.f2 || g_71.f0.f0) <= l_476), 0x0DL)) != l_488) , p_33)) || g_171) && g_71.f0.f5))) , 0xAA6FD3B5L) >= l_459.f8) == 0UL))), l_459.f9.f0)) == 1L))) || 0xBA46L) && g_213.f7)))
        {
            unsigned l_491 = 8UL;
            int l_502 = 0x613BDC99L;
            struct S1 l_523 = {{267,-0,-5243,-968,8,1},9L,1L,0x4A8AEFFAL,0L,0xD1L,-1L,0x9F88L,0L,{282,-0,-14646,-245,9,1}};
            unsigned l_544 = 0x8FF0D8EEL;
            l_459.f2 = (safe_div_func_uint32_t_u_u(g_213.f9.f4, ((l_502 = (l_491 == func_58(g_213.f1, ((g_71.f7 = l_459.f5) && (l_492 || (safe_add_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s((l_501 = (safe_add_func_uint16_t_u_u((0x0E4A5E2FL && (p_33 && (safe_lshift_func_uint8_t_u_u(246UL, (0xE239L && p_33))))), 0xB8DFL))), 0x278AL)) | 0xB4L), g_71.f0.f2)))), g_71.f0.f1, p_33))) ^ l_459.f9.f1)));
            if (l_459.f5)
            {
                unsigned char l_517 = 0x30L;
                int l_518 = 0L;
                l_518 = func_65((l_502 <= (p_33 == (safe_div_func_uint16_t_u_u(0x4B88L, (safe_lshift_func_uint8_t_u_u((g_213.f5 = (safe_sub_func_uint32_t_u_u((g_71.f9.f4 = (safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((!g_213.f9.f3) == p_33), func_65((l_459.f9.f3 = (safe_div_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u(l_488, 6L)) != (-2L)), 6UL))), g_213.f3, l_517))), 0))), 0x38B35FB3L))), 0)))))), p_33, l_491);
                g_213.f9 = g_71.f0;
                g_213.f0.f5 = (safe_unary_minus_func_uint8_t_u(l_491));
            }
            else
            {
                l_520 = g_71.f9;
            }
            for (l_459.f2 = (-6); (l_459.f2 > 21); l_459.f2 = safe_add_func_int16_t_s_s(l_459.f2, 2))
            {
                unsigned short l_530 = 0xDF40L;
                char l_532 = (-1L);
                int l_543 = 0x1D81305CL;
                int l_545 = 7L;
                l_520.f3 = (p_33 || ((l_523 , (safe_sub_func_int16_t_s_s(l_501, ((((g_71.f9.f4 = 0x1DF8406FL) , (safe_add_func_uint32_t_u_u(((l_528 == p_33) < (((func_40((((0x20L & g_71.f8) <= g_213.f1) < l_529), p_33, l_530, g_213.f3) < g_7) || l_531) == l_532)), l_459.f6))) > g_485) & 0xDD38DEFAL)))) > g_485));
                l_545 = ((safe_sub_func_uint32_t_u_u(0xF1F48F05L, (safe_rshift_func_int16_t_s_u(0x5090L, (g_213.f7 = (0x316DECFFL && ((l_543 = (p_33 ^ (l_459.f9.f3 = (safe_div_func_uint8_t_u_u(250UL, ((safe_div_func_uint16_t_u_u(g_71.f1, (safe_add_func_int16_t_s_s(p_33, (func_52((p_33 || (l_459.f0.f2 = l_459.f0.f0)), g_171) <= 0UL))))) , g_213.f0.f3)))))) , l_544))))))) == 1L);
            }
            l_523.f0.f5 = (l_459.f9.f3 = ((safe_mod_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(((0xD70DL && ((g_171 = g_214) | g_215)) < p_33), (func_52((func_52(g_213.f8, l_550) , (l_520.f1 = ((((((safe_add_func_int32_t_s_s((0x0032L & func_65((((safe_sub_func_uint16_t_u_u((g_71.f0.f5 >= 0x302B3071L), p_33)) > (-1L)) | g_125), l_459.f0.f5, l_459.f0.f1)), (-8L))) == l_459.f9.f0) , l_555) >= g_125) , 0x370EL) && l_528))), p_33) != g_213.f2))) == 0xF11CL), 0xA3L)) <= l_523.f7));
        }
        else
        {
            struct S1 l_556 = {{94,0,-11290,3536,1,-0},6L,4L,0x4AC26EF1L,-1L,255UL,0x262A4C80L,0x4F96L,0x53L,{156,0,-548,983,7,-0}};
            int l_706 = 9L;
            l_556.f0.f2 = (l_556 , g_71.f7);
            if (((g_213 , (0xBA9DL & ((func_52((safe_div_func_uint32_t_u_u(func_58((0x4ED5L != (0x7EBAL || (l_459.f0.f3 = p_33))), (safe_add_func_int8_t_s_s((g_213.f4 = (safe_rshift_func_uint8_t_u_u(p_33, 7))), (l_520.f2 = 0xF5L))), l_556.f0.f5, g_213.f9.f2), l_556.f3)), l_556.f5) | p_33) , l_492))) ^ l_531))
            {
                struct S1 l_568 = {{282,-1,-14729,3406,7,1},0xCCCDA98AL,1L,0x3A85B086L,0x6BL,0xF2L,0xC34FD3B4L,0x7471L,0x02L,{4,-1,9014,3695,10,1}};
                short l_577 = 0xA3AFL;
                unsigned l_581 = 0xA549E4FBL;
                int l_585 = 0x3D473615L;
                for (l_459.f2 = 0; (l_459.f2 < (-27)); l_459.f2--)
                {
                    struct S1 l_567 = {{156,-0,14786,-1745,5,-1},0x0C62D8CDL,0L,1UL,0x76L,255UL,0x7F4B41BAL,65530UL,0L,{200,0,6158,-588,1,-1}};
                    for (l_459.f5 = 20; (l_459.f5 <= 52); l_459.f5 = safe_add_func_int32_t_s_s(l_459.f5, 5))
                    {
                        unsigned short l_578 = 0x8667L;
                        l_568 = l_567;
                        g_71.f0.f2 = ((g_213.f9.f5 | 0x51L) < ((func_65((((l_569 , l_556.f9) , (safe_unary_minus_func_int16_t_s(l_556.f7))) , (l_569.f2 = (safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((l_459 , l_556.f8), 5)), ((safe_lshift_func_int8_t_s_s((((p_33 && (4UL ^ p_33)) || 1L) > p_33), l_577)) && l_578))))), g_213.f9.f2, l_556.f9.f0) ^ g_213.f9.f5) && (-1L)));
                        if (l_476)
                            break;
                        g_213.f0.f2 = (l_459.f9.f5 = (0xF7L <= (1UL ^ p_33)));
                    }
                    l_556.f9.f5 = (l_579 && (-1L));
                    l_568 = g_71;
                }
                l_556.f9 = l_556.f0;
                l_459.f9.f3 = 0x3C343BA8L;
                if (func_58(l_580, l_459.f0.f3, l_581, (((g_213.f0.f4 != l_582) ^ (((l_459.f9.f5 = g_171) , func_52((safe_div_func_int32_t_s_s((g_213.f9.f5 = (l_585 >= l_568.f0.f3)), ((safe_mod_func_int8_t_s_s(g_71.f9.f1, g_213.f9.f0)) && p_33))), p_33)) || l_459.f1)) < l_459.f0.f0)))
                {
                    if (g_71.f4)
                    {
                        if (p_33)
                            break;
                        return l_568.f0;
                    }
                    else
                    {
                        l_556.f9.f1 = (!0x14ECA7F1L);
                    }
                }
                else
                {
                    l_520.f2 = g_485;
                }
            }
            else
            {
                char l_595 = (-4L);
                struct S0 l_596 = {154,-1,-16194,2893,8,1};
                struct S1 l_618 = {{33,-0,-5562,-1025,9,-1},0x9D081D11L,0x2532375EL,4294967287UL,0x74L,0UL,0x7B8A3C27L,0UL,1L,{328,0,4993,1845,0,-1}};
                int l_627 = 0x8D92F7C8L;
                if (((l_595 = (0x2DD1L || ((safe_rshift_func_int16_t_s_u(((safe_mod_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u(246UL, func_58(l_594, (g_71.f7 = 1UL), g_171, l_550))) < 0UL) , (p_33 || g_71.f0.f5)), 1L)) | g_71.f2), 1)) >= l_569.f3))) ^ l_569.f6))
                {
                    l_596 = g_71.f9;
                    for (g_215 = (-13); (g_215 > 17); g_215 = safe_add_func_uint8_t_u_u(g_215, 8))
                    {
                        unsigned l_599 = 1UL;
                        g_71.f0.f3 = (l_599 = 1L);
                        l_569.f9.f5 = (l_600 && (g_71.f9.f3 || (g_213 , (safe_sub_func_uint32_t_u_u(g_333, g_213.f0.f1)))));
                        l_569.f9.f1 = (g_213.f2 <= p_33);
                    }
                }
                else
                {
                    int l_615 = 5L;
                    int l_617 = 0x6269CC05L;
                    l_596.f5 = l_569.f9.f0;
                    if ((p_33 < g_213.f5))
                    {
                        unsigned short l_616 = 0xADE2L;
                        l_596.f1 = ((l_617 = ((safe_sub_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u(((g_333 = (safe_rshift_func_int16_t_s_s(l_556.f8, (g_71.f8 || (safe_add_func_uint32_t_u_u(func_40((((((~0xFA7DL) == (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(g_213.f0.f3, p_33)), g_213.f7))) <= p_33) ^ func_65(p_33, l_488, g_333)) != g_71.f8), p_33, l_615, p_33), 0x711498A4L)))))) != g_485), g_7)) && g_71.f4), l_616)) & 4UL)) > p_33);
                        g_213.f9.f3 = l_520.f5;
                        l_459.f0.f1 = ((l_556.f0.f4 < l_501) , p_33);
                    }
                    else
                    {
                        l_556.f0.f1 = g_213.f4;
                    }
                }
                g_213 = l_618;
                for (p_33 = 0; (p_33 <= 11); p_33 = safe_add_func_int16_t_s_s(p_33, 6))
                {
                    short l_647 = 0x84CDL;
                    int l_660 = 0x1495CED4L;
                    short l_675 = 0x5247L;
                    if ((((((l_459.f0.f3 = (safe_lshift_func_int8_t_s_u(g_213.f0.f4, ((safe_mod_func_int8_t_s_s(g_71.f9.f0, (safe_sub_func_uint8_t_u_u((func_65(l_627, l_556.f9.f3, (safe_lshift_func_int16_t_s_u(((safe_add_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_add_func_uint16_t_u_u(p_33, ((0x3EL != (p_33 ^ (((p_33 ^ (safe_sub_func_int16_t_s_s(((g_213.f9.f0 , l_556.f8) ^ 6UL), l_529))) & g_71.f9.f4) < 0xA06E6DF0L))) & p_33))), 0x55F2L)), l_476)) ^ 0x17L), 12))) ^ p_33), 248UL)))) && g_7)))) < g_213.f7) , l_618.f3) < 0x4B26L) , 0x8649A2AEL))
                    {
                        unsigned l_638 = 0x91092053L;
                        int l_648 = 1L;
                        l_648 = (g_125 == func_52((g_213 , l_638), (l_459.f9.f5 = (safe_add_func_uint32_t_u_u(g_71.f0.f1, (!(((0x19L > g_71.f3) > func_52((l_647 = (safe_rshift_func_int8_t_s_u((p_33 ^ (((safe_div_func_uint16_t_u_u(func_52(g_71.f9.f0, ((g_213.f0.f0 == g_645) <= l_646)), p_33)) , p_33) < l_595)), g_334))), l_556.f7)) , p_33)))))));
                    }
                    else
                    {
                        int l_659 = 9L;
                        g_213.f0.f5 = ((safe_sub_func_int8_t_s_s((~(-3L)), (l_660 = func_58(((l_531 > ((p_33 , (safe_mod_func_uint32_t_u_u((((g_71.f0.f0 != ((safe_lshift_func_uint8_t_u_u(0UL, p_33)) == ((safe_div_func_uint8_t_u_u(p_33, ((0xFB91L != (l_556.f9.f1 >= g_215)) | p_33))) , 0xD5029486L))) || l_659) & 0x34A15C14L), 0xAD1B075DL))) || l_459.f0.f1)) & l_659), l_556.f8, g_213.f9.f3, p_33)))) != l_459.f1);
                    }
                    l_556.f9.f5 = func_40(func_65((safe_rshift_func_int16_t_s_s((p_33 && (((safe_add_func_int16_t_s_s(((p_33 > l_459.f0.f3) >= (safe_unary_minus_func_uint16_t_u(func_58(((!p_33) >= ((safe_add_func_int16_t_s_s(0xDBABL, (safe_mod_func_int32_t_s_s((l_569.f9.f5 = (safe_lshift_func_int8_t_s_u(((g_71.f7 != ((!p_33) <= l_569.f8)) > l_556.f2), p_33))), l_660)))) && 0x37L)), l_582, l_674, g_71.f9.f3)))), l_675)) > g_333) | g_213.f9.f0)), l_618.f6)), p_33, l_618.f2), g_676, p_33, l_675);
                    if ((4294967295UL != l_556.f0.f2))
                    {
                        g_485 = (func_52(p_33, l_459.f9.f4) != ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((p_33 , (g_213.f8 = ((safe_div_func_uint8_t_u_u(g_333, l_459.f9.f5)) >= (g_213.f5 = 0xE8L)))), l_685)), (safe_rshift_func_uint8_t_u_u((l_660 ^ l_675), p_33)))), 3)) < 2L));
                    }
                    else
                    {
                        int l_707 = 0xA86B30C4L;
                        int l_715 = (-4L);
                        short l_716 = 0x3640L;
                        l_707 = (safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u(g_213.f1, 1UL)), ((g_71.f9.f4 || ((safe_sub_func_uint32_t_u_u((l_706 = (+(safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u((g_215 = func_65(g_676, func_58((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((g_213.f4 = l_618.f0.f4), 6)), ((((safe_sub_func_int32_t_s_s((g_213.f0 , ((g_213.f6 , (safe_add_func_uint8_t_u_u((g_71.f0.f5 & (g_71.f9.f0 = p_33)), 1L))) & p_33)), l_580)) , g_213.f3) >= l_459.f9.f4) <= g_51))), g_71.f7, g_71.f6, g_213.f0.f4), l_569.f0.f0)), 0x2EL)), p_33)))), p_33)) , 0x1A62L)) ^ 250UL)));
                        l_716 = func_40(((((safe_sub_func_int16_t_s_s((l_660 = func_58((safe_lshift_func_int16_t_s_s(func_65(l_459.f0.f1, l_712, l_660), l_618.f0.f2)), (l_569 , ((safe_lshift_func_int16_t_s_s((l_715 = p_33), 1)) != (p_33 < (l_520.f2 = 0xAB649DC8L)))), p_33, g_485)), l_569.f0.f0)) | p_33) ^ p_33) || g_71.f0.f1), l_569.f6, p_33, g_213.f8);
                    }
                }
            }
        }
        l_459.f9 = l_520;
    }
    g_71.f9.f2 = g_71.f0.f3;
    l_674 = (g_213.f2 != ((l_459.f9.f5 = (l_459.f2 = g_213.f0.f2)) > l_459.f0.f0));
    return l_459.f0;
}







static int func_40(short p_41, int p_42, int p_43, short p_44)
{
    unsigned l_55 = 8UL;
    int l_139 = 0x917F2CB1L;
    char l_191 = 0xCDL;
    struct S0 l_192 = {341,1,-14242,3288,4,0};
    struct S1 l_218 = {{143,-0,9372,1673,9,-1},0xAB5B4982L,4L,0x08611548L,1L,255UL,0x452B8B74L,0UL,0x37L,{253,1,14644,3986,0,1}};
    unsigned l_300 = 0x0CE31EFFL;
    unsigned l_308 = 0xB1D9BC29L;
    unsigned short l_326 = 65529UL;
    p_42 = func_52(((((l_55 , (safe_rshift_func_uint16_t_u_u(l_55, 4))) , func_58(l_55, (safe_div_func_int16_t_s_s(0x73B9L, func_65(l_55, p_44, (safe_add_func_uint16_t_u_u((g_51 != 6UL), 0xB2DEL))))), l_55, p_42)) ^ 0xAFCBL) || 0xFDD9L), p_44);
    for (l_55 = 0; (l_55 >= 60); l_55 = safe_add_func_uint8_t_u_u(l_55, 4))
    {
        g_71.f9.f1 = (g_71.f9.f4 , g_71.f9.f1);
        return p_41;
    }
    if (((-6L) <= p_42))
    {
        short l_134 = 0xBEABL;
        int l_140 = 0xA188AF39L;
        l_140 = ((safe_rshift_func_uint16_t_u_s(func_58((p_42 != (((g_71.f9 , g_71.f9.f2) , (g_71.f0.f3 <= ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(((0UL ^ (~(+l_134))) || g_71.f0.f3), 7)), ((((safe_sub_func_int16_t_s_s(func_52((l_139 = (safe_add_func_uint8_t_u_u(p_44, (((g_71.f4 = (l_55 || g_71.f5)) != 1L) & p_41)))), l_55), g_71.f0.f5)) && g_71.f0.f0) >= l_55) & g_71.f0.f0))) || g_71.f8))) ^ l_134)), g_71.f0.f0, g_71.f0.f3, p_43), p_42)) < 0UL);
        l_139 = 3L;
    }
    else
    {
        unsigned short l_154 = 65532UL;
        int l_176 = 1L;
        unsigned short l_209 = 0x7B3EL;
        short l_272 = 0x20F4L;
        struct S1 l_273 = {{217,0,-1809,-662,1,1},0x32C40E74L,-3L,4294967291UL,0L,0x6FL,0x20A5E3A9L,0x7B04L,1L,{109,1,7965,-2588,0,-0}};
        int l_423 = 0x31293859L;
        p_42 = (p_43 <= (safe_sub_func_int16_t_s_s(g_71.f0.f5, p_43)));
        if ((((((g_51 = (safe_mod_func_uint16_t_u_u(0xA5DBL, g_71.f0.f4))) < (g_71.f8 = (safe_unary_minus_func_int8_t_s((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s((((p_41 | ((((safe_rshift_func_int16_t_s_s(0x8728L, g_71.f5)) , func_52((l_154 , p_44), (~p_42))) | (-2L)) || g_71.f4)) | 0xC7E9L) > p_41), l_139)), 13)), 1)))))) || p_41) && 4L) == l_154))
        {
            char l_166 = 0xB7L;
            int l_177 = 0x1008DDBDL;
            struct S0 l_184 = {70,0,-13810,-1443,7,-1};
            short l_204 = (-3L);
            struct S1 l_212 = {{18,0,-15556,-177,5,1},0xC2E444E8L,0xE4CC8F7CL,0x402E7404L,0L,0xF1L,1L,65533UL,0x01L,{82,-1,-9450,-2641,4,-0}};
            for (l_154 = 0; (l_154 >= 36); l_154 = safe_add_func_int8_t_s_s(l_154, 8))
            {
                char l_157 = (-1L);
                struct S0 l_179 = {30,0,-13612,798,6,0};
                if ((g_71.f9.f1 = l_157))
                {
                    unsigned l_160 = 0x001185A1L;
                    int l_163 = 0x210D50EAL;
                    g_71.f0.f3 = (safe_mul_func_int32_t_s_s(l_139, ((l_160 != (safe_sub_func_uint8_t_u_u((l_163 = 255UL), 0x15L))) >= p_43)));
                    if (p_44)
                        break;
                    for (l_160 = 0; (l_160 != 12); l_160 = safe_add_func_int16_t_s_s(l_160, 2))
                    {
                        l_166 = 0xEB332806L;
                    }
                    p_42 = l_157;
                }
                else
                {
                    unsigned short l_178 = 65535UL;
                    l_178 = (safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((p_41 = l_154) | (g_171 = p_42)), g_51)), ((g_71.f0 , (~p_43)) | (+((((((safe_rshift_func_uint8_t_u_u((l_177 = (safe_div_func_int8_t_s_s((g_71.f0.f2 == (l_176 = (g_71.f0.f2 , func_52((g_71.f9.f4 = g_71.f0.f3), l_55)))), p_44))), 2)) || g_71.f9.f0) & 0xD1L) ^ 1L) ^ p_44) < p_42)))));
                    return g_71.f9.f2;
                }
                l_179 = g_71.f9;
                l_176 = ((l_154 == (safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((+((l_184 , ((0xE8L != 0xB6L) > g_71.f9.f2)) != ((safe_mod_func_uint8_t_u_u(((((((l_139 = (g_71.f0.f0 = p_44)) >= (safe_add_func_uint16_t_u_u(g_71.f0.f2, 5UL))) == (safe_add_func_int32_t_s_s(p_42, 0xD9240F40L))) , 0x4C4DL) || p_44) == 1UL), 1L)) == p_43))), 0xEFB26494L)), l_191))) == p_41);
                g_71 = g_71;
            }
            l_192 = g_71.f9;
            if (g_71.f9.f2)
            {
                char l_197 = (-2L);
                unsigned short l_203 = 0UL;
                struct S1 l_219 = {{284,1,-16306,-2006,1,-1},-1L,0x45CCEBF2L,0x81C9DC24L,1L,0x27L,0x7E99EAB1L,0x02E3L,0x62L,{287,1,-15903,2660,9,1}};
                unsigned char l_250 = 0x3CL;
                char l_367 = 0x19L;
                if ((p_44 != ((65532UL < 2UL) & g_71.f0.f0)))
                {
                    short l_202 = 0x1154L;
                    g_71.f9.f5 = ((safe_sub_func_uint8_t_u_u((g_51 = func_65(l_192.f1, (l_184.f3 = (~(safe_rshift_func_uint8_t_u_u(((l_192.f2 = (((l_154 ^ func_65((l_197 , ((safe_mod_func_int16_t_s_s(func_65((safe_lshift_func_uint16_t_u_s((l_154 & p_42), (l_202 == 0x27L))), g_51, ((l_203 = ((p_44 && l_197) >= 0xA170L)) , 7L)), p_42)) | 0xB12F1D45L)), l_176, g_71.f2)) && p_44) && g_71.f9.f4)) | p_44), 0)))), l_204)), p_42)) & 0x2588L);
                    p_42 = ((safe_div_func_int8_t_s_s(p_41, ((0L ^ (safe_rshift_func_int16_t_s_s(func_65((g_71.f4 = l_154), p_44, l_209), 1))) & (g_215 = ((g_214 = ((!((l_139 ^ 1UL) , ((safe_mod_func_int16_t_s_s((((((l_212 = (g_213 = ((0xB8L && 0xCEL) , l_212))) , 9UL) == 0x75689219L) || l_212.f9.f0) , 5L), p_43)) <= 0xE26BL))) != g_71.f5)) & l_154))))) >= g_71.f8);
                    for (g_213.f1 = 0; (g_213.f1 <= 4); ++g_213.f1)
                    {
                        p_42 = (g_7 & g_213.f4);
                    }
                    l_219 = l_218;
                }
                else
                {
                    return g_213.f6;
                }
                if ((safe_sub_func_int32_t_s_s(((((((safe_add_func_uint16_t_u_u(p_43, p_44)) && p_41) <= p_41) > func_52((((g_215 = 0xE0L) && ((safe_add_func_int8_t_s_s(l_219.f9.f5, (g_213.f8 = g_213.f0.f1))) ^ ((-2L) >= ((func_52((safe_div_func_uint8_t_u_u((func_65((g_213.f4 = func_65(((l_212 , 8L) , (-1L)), g_71.f3, p_41)), l_218.f2, p_41) || 8L), g_213.f0.f1)), p_43) && p_43) >= 0x0DL)))) >= p_44), p_41)) || 1UL) < l_219.f9.f3), 4294967294UL)))
                {
                    unsigned l_241 = 2UL;
                    int l_257 = 1L;
                    unsigned char l_280 = 1UL;
                    for (l_203 = (-29); (l_203 == 9); l_203 = safe_add_func_int8_t_s_s(l_203, 6))
                    {
                        short l_242 = 0x47C1L;
                        unsigned char l_243 = 2UL;
                        g_71.f0.f1 = (safe_rshift_func_int16_t_s_u(((safe_sub_func_uint8_t_u_u(l_154, (g_213 , (!(safe_sub_func_int8_t_s_s(g_213.f0.f0, (l_184 , (((g_213.f0.f0 , p_44) != (safe_add_func_uint8_t_u_u((func_52(g_171, (((l_243 = (safe_rshift_func_uint8_t_u_u(((safe_unary_minus_func_int16_t_s((l_176 = (g_214 = (((l_241 = p_42) >= l_242) , g_213.f6))))) | 0xD2L), 5))) ^ g_213.f1) , l_243)) ^ l_219.f5), p_43))) <= 0x84L)))))))) ^ g_71.f0.f2), 10));
                        p_42 = (l_257 = ((safe_add_func_int16_t_s_s(p_43, func_52((safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(l_250, func_58(g_171, func_65((((safe_sub_func_int16_t_s_s(p_43, 0L)) , (l_176 = ((g_213.f2 != (g_213.f0.f0 = (g_71.f0.f4 = p_44))) || (!g_171)))) || (safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u(0x30L, l_212.f9.f3)), l_192.f4))), g_213.f9.f1, l_218.f4), p_43, p_44))), p_41)), g_213.f5))) , p_41));
                        l_176 = g_213.f9.f3;
                        p_42 = (safe_sub_func_uint32_t_u_u((((+((func_65((+g_71.f5), (safe_mod_func_int16_t_s_s(func_52((g_213.f0.f4 = (g_71.f9.f0 = (l_176 = ((l_184.f1 = (l_218.f9.f1 = ((safe_rshift_func_uint8_t_u_s((0L > (((safe_mod_func_uint32_t_u_u(0xD9DC3E89L, func_52(l_192.f1, (((g_71.f9 , 8UL) <= (safe_rshift_func_int16_t_s_s((l_218.f9.f2 = ((safe_rshift_func_int16_t_s_u(0xBCFAL, g_213.f9.f2)) ^ (((safe_sub_func_int8_t_s_s(((p_43 , (-1L)) , 0xF0L), 0L)) || p_41) == 0x022F5329L))), p_41))) < g_213.f5)))) && p_43) > l_272)), p_43)) | p_44))) < (-7L))))), g_213.f0.f1), l_243)), g_71.f7) != g_51) != 4294967295UL)) > p_42) && 0x641BL), l_218.f0.f4));
                    }
                    l_273 = g_213;
                    p_42 = (((safe_rshift_func_int16_t_s_u(l_218.f9.f5, (safe_rshift_func_uint8_t_u_s((l_273.f0.f3 = (safe_lshift_func_int16_t_s_u(l_280, 7))), 2)))) && (g_213.f0 , p_41)) & (p_44 = func_58((safe_mod_func_uint8_t_u_u(g_213.f9.f0, (safe_lshift_func_uint8_t_u_u((l_212.f1 , (l_212.f0.f3 != (((l_257 = func_65(l_219.f4, (g_213.f9.f1 >= p_43), g_7)) < l_273.f9.f3) > 0xFDL))), 4)))), p_43, l_219.f1, l_219.f9.f5)));
                    for (l_273.f3 = 0; (l_273.f3 >= 1); l_273.f3 = safe_add_func_uint16_t_u_u(l_273.f3, 2))
                    {
                        g_71.f9.f1 = (p_42 = l_273.f0.f0);
                        p_42 = (safe_add_func_uint16_t_u_u(g_215, l_218.f9.f5));
                        g_71 = l_212;
                        return p_43;
                    }
                }
                else
                {
                    short l_319 = (-1L);
                    int l_346 = (-1L);
                    struct S1 l_363 = {{187,0,13769,3616,9,0},0x27C3F0ADL,0x424A25B0L,0xF15DCCE0L,3L,0x32L,0L,0x46ACL,-1L,{280,0,-3177,-1172,5,-1}};
                    short l_366 = (-4L);
                    for (g_71.f4 = (-4); (g_71.f4 >= 8); g_71.f4 = safe_add_func_int32_t_s_s(g_71.f4, 5))
                    {
                        int l_299 = 0xE9F3B934L;
                        l_218.f0.f1 = (safe_mod_func_uint32_t_u_u(((l_192.f5 = (p_42 , (((g_71.f9.f3 , (safe_lshift_func_uint16_t_u_u((l_300 = (((((l_212.f6 <= (safe_add_func_uint8_t_u_u((((g_213.f7 | (p_44 > ((4294967295UL > (((((((safe_add_func_int32_t_s_s(l_273.f6, g_71.f3)) ^ (g_7 < 0xE15542F6L)) , 0x73L) < 0xDDL) != 0x0B66L) >= p_44) && 1UL)) , 6L))) & l_218.f0.f4) <= g_71.f0.f4), 0L))) || p_43) < p_44) > l_299) , 0xD307L)), l_184.f1))) && g_51) > p_43))) && l_299), 4294967295UL));
                        g_71.f9.f3 = (safe_lshift_func_uint16_t_u_s((+(safe_sub_func_uint8_t_u_u(((safe_unary_minus_func_uint16_t_u(g_213.f5)) | ((safe_sub_func_int8_t_s_s((l_308 ^ (safe_lshift_func_int16_t_s_u(g_71.f9.f2, 15))), (0x2750L || (func_52((l_212.f0.f5 , ((safe_div_func_int16_t_s_s((p_41 = func_52((1L < (!p_42)), (safe_div_func_int16_t_s_s((+(5L == (p_44 & 0xE05A2D38L))), (-1L))))), 1L)) < g_213.f6)), g_213.f3) == 0xA0AEL)))) > 1L)), 6L))), 1));
                        p_42 = ((safe_rshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(func_65(l_319, (l_219.f9.f1 = (g_213.f0 , ((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((safe_add_func_int32_t_s_s(func_65(l_212.f8, l_326, p_41), func_65(l_250, (g_334 = (((safe_sub_func_uint16_t_u_u((g_213.f7 = ((p_41 >= (safe_lshift_func_uint16_t_u_s(((g_213.f9.f5 = (safe_lshift_func_uint8_t_u_u((((p_41 ^ g_71.f5) | 1L) >= p_41), 0))) != l_218.f4), l_319))) | g_333)), 1L)) , l_219.f7) , p_42)), l_212.f9.f2))) == 0x31B0L), 12)), g_71.f9.f3)) ^ 0x03L))), p_43), l_273.f2)), g_213.f9.f4)) , 0x63799410L);
                        l_218.f9.f5 = (g_171 | (l_346 = (safe_lshift_func_uint8_t_u_u((func_52(p_41, (safe_add_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(((safe_lshift_func_int16_t_s_u(g_213.f5, 3)) , (l_299 & 0x50ACL)))), (safe_add_func_uint16_t_u_u(g_214, (safe_rshift_func_int16_t_s_u(p_42, (((g_71.f4 , (p_41 < g_213.f0.f3)) || 9L) <= g_213.f9.f4)))))))) < 0xA7662354L), p_42))));
                    }
                    l_219 = l_273;
                    g_71.f9.f3 = 0x288F30DEL;
                    l_273.f2 = (((safe_add_func_uint32_t_u_u(p_41, ((((p_41 == g_213.f4) , 0xD49A363CL) , ((((safe_sub_func_uint8_t_u_u((((0L | ((((g_71.f0.f3 = ((safe_div_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_s(func_65((l_273.f9.f5 = (safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((((safe_add_func_int8_t_s_s(func_65(((1UL >= func_65((safe_mod_func_uint8_t_u_u(((l_363 , func_65(((l_212.f0.f5 = ((((safe_rshift_func_uint8_t_u_u(func_65(l_192.f1, ((g_71.f0.f0 == g_71.f1) < g_71.f0.f0), l_218.f4), 2)) == p_42) , 0x93L) <= g_71.f4)) & l_366), p_41, l_212.f9.f2)) , 0xE9L), l_219.f9.f4)), p_41, g_214)) , 0x80L), p_43, g_213.f0.f2), l_273.f2)) || p_41) < p_41), l_154)), l_273.f0.f1))), g_213.f9.f0, g_71.f9.f5), 0)) == l_212.f0.f3) , 0x6AF5C11BL), g_213.f0.f0)) >= p_42)) ^ 0x35A538B8L) > 0x18681D0EL) | p_44)) , 0xB522L) > l_367), (-10L))) != 0x03L) & p_41) == l_273.f2)) & p_42))) > l_219.f2) ^ 0x1518L);
                }
            }
            else
            {
                return l_218.f9.f1;
            }
            l_218 = l_273;
        }
        else
        {
            int l_390 = 0xE7DEB9FCL;
            int l_415 = (-1L);
            g_71.f9 = g_213.f9;
            if ((p_42 = g_213.f8))
            {
                int l_368 = 0xAF208D26L;
                g_71.f0.f2 = (l_368 > p_44);
                return p_42;
            }
            else
            {
                unsigned short l_369 = 65533UL;
                int l_416 = 0x718E61EBL;
                l_369 = p_43;
                for (l_218.f5 = 0; (l_218.f5 <= 46); l_218.f5++)
                {
                    unsigned l_391 = 4294967295UL;
                    unsigned l_392 = 9UL;
                    l_192.f5 = ((safe_lshift_func_uint16_t_u_u((func_58((!(func_52((((((safe_rshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(func_58((l_391 = (l_369 < func_65((p_41 & l_273.f9.f2), (func_52((safe_div_func_int8_t_s_s((+(safe_add_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(((l_191 || (safe_rshift_func_int16_t_s_u((p_44 = func_65(l_390, (g_213.f7 = p_43), p_42)), 5))) , 1L), 12)) >= p_42), 0x14L))), l_218.f9.f5)), p_41) || 0x37FA248BL), g_213.f0.f3))), p_41, p_43, p_41), g_213.f9.f4)) < l_390), 1UL)), 0xBBL)), g_213.f9.f1)) | l_392) , p_42) != p_41) | g_213.f8), p_41) || 1L)), p_41, g_213.f9.f1, l_218.f2) >= g_333), 7)) == g_71.f8);
                    l_218.f2 = ((safe_sub_func_int32_t_s_s((safe_div_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_s(((p_42 != p_44) > l_218.f8), g_71.f2)) >= (l_218.f9.f3 = (safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_add_func_int16_t_s_s(l_392, 0x6957L)), 0x8FL)), (g_71.f7 & (safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(func_65((((g_71.f1 >= l_369) != g_213.f0.f4) | 0UL), l_55, g_171), l_154)), g_213.f9.f2))))), l_392)))) != 4294967294UL), l_192.f2)), p_42)) == 0x092CL);
                }
                l_416 = (func_58(l_273.f5, (g_213.f7 = (+((safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((!(((l_415 = (g_214 = g_71.f9.f0)) && p_43) , (func_65(p_43, l_273.f0.f3, p_43) != (l_218.f0.f5 = g_125)))), func_65(l_192.f4, p_42, l_390))), l_390)) >= g_213.f0.f4))), p_42, l_369) & l_273.f9.f4);
            }
            l_273.f0.f5 = ((safe_add_func_uint32_t_u_u(l_218.f0.f4, ((safe_sub_func_uint8_t_u_u(0x91L, l_273.f5)) || (safe_sub_func_uint8_t_u_u((((((~func_52(p_42, (func_52(l_423, p_41) != ((l_415 && g_213.f6) && p_43)))) < g_71.f9.f3) , g_213.f4) > g_213.f2) ^ p_43), g_213.f0.f0))))) < g_71.f3);
        }
        for (g_71.f3 = (-4); (g_71.f3 < 34); ++g_71.f3)
        {
            int l_457 = 1L;
            for (p_41 = 0; (p_41 < 17); p_41 = safe_add_func_int8_t_s_s(p_41, 5))
            {
                unsigned char l_432 = 0UL;
                l_273 = l_218;
                g_213.f2 = func_52((safe_lshift_func_uint16_t_u_u(p_44, (safe_div_func_int16_t_s_s((g_214 = (l_432 && (safe_div_func_uint32_t_u_u((g_7 ^ g_71.f9.f3), p_43)))), (safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((func_65((g_213.f8 = (safe_lshift_func_uint8_t_u_u(l_432, 7))), (g_215 || g_213.f0.f2), (l_432 != p_44)) , 1L), g_71.f0.f3)), p_43)))))), g_213.f9.f0);
                if (p_44)
                    continue;
                g_71.f9.f3 = (l_273.f9.f4 == ((p_42 = (safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s(((((((safe_mod_func_uint16_t_u_u((l_273.f0.f1 = p_43), ((g_213.f7 = func_52(l_273.f6, (l_457 = (safe_sub_func_int8_t_s_s(l_192.f4, (safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(l_218.f5, (safe_mod_func_int32_t_s_s((0xA5L == (l_192.f4 , p_43)), p_44)))), 2))))))) || g_213.f9.f0))) && p_44) && p_44) < g_213.f9.f1) > 0x47C62190L) , p_42), g_213.f4)), 2))) < l_432));
            }
            l_218 = g_213;
            return l_176;
        }
        g_213.f9.f2 = (p_41 == (~0UL));
    }
    return l_192.f4;
}







static int func_52(unsigned p_53, short p_54)
{
    return g_71.f9.f0;
}







static short func_58(unsigned short p_59, unsigned short p_60, int p_61, unsigned p_62)
{
    struct S0 l_73 = {108,-1,11362,-255,10,1};
    short l_80 = 5L;
    unsigned char l_121 = 253UL;
    g_71.f9 = l_73;
    for (p_61 = 0; (p_61 <= (-8)); p_61 = safe_sub_func_int16_t_s_s(p_61, 3))
    {
        unsigned char l_76 = 255UL;
        int l_77 = 0xE2E09151L;
        struct S0 l_81 = {204,-1,14778,1290,8,0};
        g_71.f0.f3 = (g_71.f0.f1 = (g_71.f9.f3 <= ((((((g_71.f6 = func_65(p_61, ((((g_71.f7 = 65535UL) == (l_77 = (~((g_71.f0.f4 , l_76) < p_62)))) || (func_65(func_65(((l_77 = l_73.f2) != ((safe_add_func_int16_t_s_s((0UL ^ (-1L)), p_60)) & 0xBD28546EL)), l_80, g_71.f9.f2), g_71.f4, g_71.f2) || g_71.f5)) != g_71.f9.f2), l_73.f1)) , p_60) && l_77) && g_71.f0.f4) >= g_71.f9.f4) < p_60)));
        l_73.f3 = l_77;
        g_71.f0 = l_81;
    }
    if (p_60)
    {
        unsigned char l_83 = 0x03L;
        if (l_80)
        {
            short l_82 = 0x510EL;
            short l_90 = 0xD203L;
            int l_99 = 0xEB11F9A0L;
            l_82 = 0L;
            l_99 = (l_83 || (((+(safe_add_func_int16_t_s_s((g_71.f4 != p_61), g_71.f9.f3))) | (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((((l_90 = (l_73.f2 = p_59)) , ((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(((((g_71.f7 = g_71.f0.f2) & (safe_div_func_int32_t_s_s(p_61, ((l_73.f0 , (safe_mod_func_uint32_t_u_u((+p_59), l_73.f1))) & 0xC7D5C23EL)))) ^ 4294967294UL) || 0x1ACBL), 14)) , g_71.f0.f3), g_71.f0.f0)) > 0xEA2DL)) , p_61) & 0UL), g_71.f1)), 65530UL))) & g_71.f3));
        }
        else
        {
            unsigned l_106 = 0x8B132FC0L;
            l_106 = (l_73.f4 == (safe_sub_func_int32_t_s_s((g_71.f9.f3 = ((+(safe_add_func_int16_t_s_s(((0x4A54L && l_73.f3) && (((p_61 , (((p_59 == (((safe_sub_func_uint32_t_u_u(p_62, g_71.f4)) >= func_65(p_62, (l_73 , 0x6208L), l_83)) == p_59)) == 0x4229L) <= g_71.f9.f4)) & 0x4E65D69AL) <= p_62)), 1UL))) > l_83)), g_71.f1)));
        }
        l_73.f2 = (~func_65((safe_add_func_int32_t_s_s((g_71.f9.f2 = ((safe_sub_func_uint32_t_u_u(4294967295UL, 0xBD5F4407L)) , (((((((((0xA71D37E9L | (!(((safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((g_71.f4 = (safe_rshift_func_int8_t_s_u(g_71.f0.f4, (g_51 = p_62)))), (g_71.f5 = ((safe_div_func_int16_t_s_s(((((l_73.f3 ^ (l_83 < (g_71.f9.f4 < (safe_add_func_uint16_t_u_u(p_61, 0xE017L))))) | p_59) | p_59) , l_83), g_71.f5)) > 0x51L)))), g_71.f9.f0)) <= g_71.f1) > g_71.f0.f2))) == p_59) <= p_60) & l_83) | l_121) != g_71.f9.f0) && l_73.f0) >= p_61) > p_59))), p_60)), g_71.f9.f4, g_71.f9.f5));
        for (g_51 = 0; (g_51 < 12); ++g_51)
        {
            g_71.f9.f5 = l_80;
        }
    }
    else
    {
        unsigned l_124 = 9UL;
        l_73.f2 = ((g_125 = (1L == (l_73.f5 , (g_71.f7 = l_124)))) < (p_59 >= g_71.f0.f4));
        l_73 = g_71.f9;
    }
    return g_71.f0.f2;
}







static unsigned short func_65(char p_66, unsigned short p_67, char p_68)
{
    struct S1 l_72 = {{184,-1,9601,991,6,0},8L,0x961B9AEEL,4294967295UL,0x93L,0UL,0x52146605L,0x866DL,0x20L,{40,0,8782,-360,3,-1}};
    l_72 = g_71;
    return p_67;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_29.f0.f0, "g_29.f0.f0", print_hash_value);
    transparent_crc(g_29.f0.f1, "g_29.f0.f1", print_hash_value);
    transparent_crc(g_29.f0.f2, "g_29.f0.f2", print_hash_value);
    transparent_crc(g_29.f0.f3, "g_29.f0.f3", print_hash_value);
    transparent_crc(g_29.f0.f4, "g_29.f0.f4", print_hash_value);
    transparent_crc(g_29.f0.f5, "g_29.f0.f5", print_hash_value);
    transparent_crc(g_29.f1, "g_29.f1", print_hash_value);
    transparent_crc(g_29.f2, "g_29.f2", print_hash_value);
    transparent_crc(g_29.f3, "g_29.f3", print_hash_value);
    transparent_crc(g_29.f4, "g_29.f4", print_hash_value);
    transparent_crc(g_29.f5, "g_29.f5", print_hash_value);
    transparent_crc(g_29.f6, "g_29.f6", print_hash_value);
    transparent_crc(g_29.f7, "g_29.f7", print_hash_value);
    transparent_crc(g_29.f8, "g_29.f8", print_hash_value);
    transparent_crc(g_29.f9.f0, "g_29.f9.f0", print_hash_value);
    transparent_crc(g_29.f9.f1, "g_29.f9.f1", print_hash_value);
    transparent_crc(g_29.f9.f2, "g_29.f9.f2", print_hash_value);
    transparent_crc(g_29.f9.f3, "g_29.f9.f3", print_hash_value);
    transparent_crc(g_29.f9.f4, "g_29.f9.f4", print_hash_value);
    transparent_crc(g_29.f9.f5, "g_29.f9.f5", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_71.f0.f0, "g_71.f0.f0", print_hash_value);
    transparent_crc(g_71.f0.f1, "g_71.f0.f1", print_hash_value);
    transparent_crc(g_71.f0.f2, "g_71.f0.f2", print_hash_value);
    transparent_crc(g_71.f0.f3, "g_71.f0.f3", print_hash_value);
    transparent_crc(g_71.f0.f4, "g_71.f0.f4", print_hash_value);
    transparent_crc(g_71.f0.f5, "g_71.f0.f5", print_hash_value);
    transparent_crc(g_71.f1, "g_71.f1", print_hash_value);
    transparent_crc(g_71.f2, "g_71.f2", print_hash_value);
    transparent_crc(g_71.f3, "g_71.f3", print_hash_value);
    transparent_crc(g_71.f4, "g_71.f4", print_hash_value);
    transparent_crc(g_71.f5, "g_71.f5", print_hash_value);
    transparent_crc(g_71.f6, "g_71.f6", print_hash_value);
    transparent_crc(g_71.f7, "g_71.f7", print_hash_value);
    transparent_crc(g_71.f8, "g_71.f8", print_hash_value);
    transparent_crc(g_71.f9.f0, "g_71.f9.f0", print_hash_value);
    transparent_crc(g_71.f9.f1, "g_71.f9.f1", print_hash_value);
    transparent_crc(g_71.f9.f2, "g_71.f9.f2", print_hash_value);
    transparent_crc(g_71.f9.f3, "g_71.f9.f3", print_hash_value);
    transparent_crc(g_71.f9.f4, "g_71.f9.f4", print_hash_value);
    transparent_crc(g_71.f9.f5, "g_71.f9.f5", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_213.f0.f0, "g_213.f0.f0", print_hash_value);
    transparent_crc(g_213.f0.f1, "g_213.f0.f1", print_hash_value);
    transparent_crc(g_213.f0.f2, "g_213.f0.f2", print_hash_value);
    transparent_crc(g_213.f0.f3, "g_213.f0.f3", print_hash_value);
    transparent_crc(g_213.f0.f4, "g_213.f0.f4", print_hash_value);
    transparent_crc(g_213.f0.f5, "g_213.f0.f5", print_hash_value);
    transparent_crc(g_213.f1, "g_213.f1", print_hash_value);
    transparent_crc(g_213.f2, "g_213.f2", print_hash_value);
    transparent_crc(g_213.f3, "g_213.f3", print_hash_value);
    transparent_crc(g_213.f4, "g_213.f4", print_hash_value);
    transparent_crc(g_213.f5, "g_213.f5", print_hash_value);
    transparent_crc(g_213.f6, "g_213.f6", print_hash_value);
    transparent_crc(g_213.f7, "g_213.f7", print_hash_value);
    transparent_crc(g_213.f8, "g_213.f8", print_hash_value);
    transparent_crc(g_213.f9.f0, "g_213.f9.f0", print_hash_value);
    transparent_crc(g_213.f9.f1, "g_213.f9.f1", print_hash_value);
    transparent_crc(g_213.f9.f2, "g_213.f9.f2", print_hash_value);
    transparent_crc(g_213.f9.f3, "g_213.f9.f3", print_hash_value);
    transparent_crc(g_213.f9.f4, "g_213.f9.f4", print_hash_value);
    transparent_crc(g_213.f9.f5, "g_213.f9.f5", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_485, "g_485", print_hash_value);
    transparent_crc(g_645, "g_645", print_hash_value);
    transparent_crc(g_676, "g_676", print_hash_value);
    transparent_crc(g_719, "g_719", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
