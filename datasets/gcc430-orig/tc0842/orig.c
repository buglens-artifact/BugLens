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
   char f0;
   unsigned f1;
   short f2;
   unsigned short f3;
   unsigned short f4;
   char f5;
   unsigned char f6;
   char f7;
   short f8;
};

struct S1 {
   struct S0 f0;
};


static short g_9 = (-6L);
static unsigned g_32 = 4294967294UL;
static int g_71 = 1L;
static unsigned char g_83 = 0xEBL;
static struct S0 g_87 = {0x56L,7UL,1L,1UL,0x50A3L,1L,0xC7L,0x44L,0x95D4L};
static struct S1 g_104 = {{0L,0xE6B2CF06L,3L,0xF6C2L,0UL,-9L,4UL,9L,0xB726L}};
static struct S1 g_105 = {{0xC5L,0x679535C3L,0L,0x0340L,0x1BDDL,1L,0x05L,0xC3L,0x6C75L}};
static short g_122 = (-9L);
static unsigned char g_151 = 255UL;
static unsigned g_194 = 9UL;
static char g_195 = 0xC5L;
static char g_197 = 0xCEL;
static short g_198 = 0xC94DL;
static unsigned g_240 = 1UL;
static int g_283 = 0x44A5C83BL;
static unsigned char g_317 = 0xB8L;
static short g_320 = 0x8759L;
static unsigned g_352 = 3UL;
static unsigned g_368 = 0xAAC22CEFL;
static unsigned g_426 = 0UL;
static unsigned short g_447 = 1UL;
static unsigned short g_496 = 0xF8B1L;
static int g_513 = 0L;
static unsigned char g_528 = 1UL;



static unsigned short func_1(void);
static unsigned char func_2(unsigned char p_3, struct S0 p_4);
static struct S0 func_6(int p_7, unsigned p_8);
static unsigned short func_12(unsigned char p_13, struct S0 p_14, unsigned p_15, unsigned p_16, struct S1 p_17);
static unsigned char func_18(unsigned p_19);
static short func_20(unsigned p_21, char p_22, char p_23, char p_24);
static unsigned short func_37(int p_38, int p_39, unsigned p_40, unsigned p_41);
static int func_48(unsigned char p_49, unsigned p_50, unsigned short p_51, struct S1 p_52);
static unsigned char func_55(char p_56, unsigned short p_57, unsigned short p_58, struct S0 p_59);
static unsigned char func_72(char p_73, char p_74, struct S0 p_75, struct S1 p_76, unsigned short p_77);
static unsigned short func_1(void)
{
    short l_5 = 0xE554L;
    int l_527 = 0x4C48FB47L;
    l_527 ^= (((func_2(l_5, func_6(l_5, g_9)) == (safe_div_func_int32_t_s_s((safe_add_func_int32_t_s_s((l_5 & l_5), (l_5 > (safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_u(l_5, 0)) || l_5), 6)) > (-7L)), 0x6D45L))))), g_368))) == l_5) <= 0L);
    g_71 = 0xE1ECC352L;
    return g_528;
}







static unsigned char func_2(unsigned char p_3, struct S0 p_4)
{
    return p_4.f4;
}







static struct S0 func_6(int p_7, unsigned p_8)
{
    unsigned char l_27 = 255UL;
    unsigned short l_42 = 0x4EC6L;
    int l_475 = 0xAB684378L;
    struct S0 l_481 = {0x3CL,0x371D4667L,0L,65535UL,0x44E4L,0x0EL,0x74L,3L,0xAE30L};
    struct S1 l_482 = {{-1L,3UL,8L,65535UL,1UL,0xF6L,0UL,-9L,0xC239L}};
    int l_514 = 0xF2C58D41L;
    int l_515 = 0x0DF3DED0L;
    int l_516 = (-1L);
    l_516 &= ((p_8 = ((safe_rshift_func_uint8_t_u_u((l_515 = (l_514 = (func_12(func_18((((g_9 <= ((((l_475 |= ((func_20(p_7, g_9, (safe_rshift_func_uint16_t_u_s(l_27, (safe_div_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((g_32 = g_9) || l_27), (safe_lshift_func_uint16_t_u_s(g_9, (safe_rshift_func_int16_t_s_u(l_27, 8)))))), func_37(l_27, p_7, l_42, g_9))))), g_9) ^ l_42) && 0x640F26BCL)) >= p_8) != p_8) <= 4UL)) != l_27) | p_7)), l_481, g_368, g_368, l_482) & p_7))), l_482.f0.f4)) || 1UL)) || 0L);
    l_482.f0 = g_87;
    return l_482.f0;
}







static unsigned short func_12(unsigned char p_13, struct S0 p_14, unsigned p_15, unsigned p_16, struct S1 p_17)
{
    short l_487 = 0x392DL;
    int l_488 = (-8L);
    unsigned l_493 = 0x375B634DL;
    struct S0 l_511 = {0xD0L,0xD4411998L,0x730CL,0xE7E6L,65529UL,0x33L,252UL,0x9BL,-1L};
    int l_512 = 0L;
    g_513 = ((safe_lshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u((((g_105.f0.f3 = l_487) & (l_488 = l_487)) < l_487), ((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((func_48((l_493 | ((safe_mul_func_uint8_t_u_u(g_87.f7, g_496)) && (safe_add_func_uint16_t_u_u(func_55((p_17.f0.f7 = 1L), (p_14.f8 || (l_512 = ((safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s(func_72((safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(((+g_104.f0.f7) >= 0L), 0xF8L)), l_487)), p_14.f1, l_511, g_104, p_16), 0x6EL)), p_14.f0)), l_511.f3)), p_13)) | p_14.f1))), l_487, l_511), l_511.f2)))), l_511.f8, p_17.f0.f4, g_104) | l_493), p_14.f3)), g_104.f0.f7)) | l_511.f6))), 2)) ^ l_511.f8);
    l_512 = func_72((l_488 = p_17.f0.f7), (p_17.f0.f5 = ((g_368 > func_18(p_14.f1)) > g_240)), p_14, g_104, g_104.f0.f0);
    return g_87.f1;
}







static unsigned char func_18(unsigned p_19)
{
    unsigned char l_479 = 0x95L;
    int l_480 = 0xC48BEC32L;
    for (g_320 = 0; (g_320 == 19); ++g_320)
    {
        unsigned l_478 = 4294967289UL;
        if (l_478)
            break;
        if (l_479)
            continue;
    }
    l_480 = g_426;
    return p_19;
}







static short func_20(unsigned p_21, char p_22, char p_23, char p_24)
{
    char l_106 = 0L;
    struct S0 l_111 = {0x17L,0x09DBB3B7L,0xC63AL,0UL,1UL,3L,0x24L,-7L,0xB7C0L};
    struct S1 l_112 = {{0xA8L,0xF2F1DAF4L,0x1B13L,65535UL,0x1D91L,-3L,1UL,0xB5L,0x97C9L}};
    unsigned short l_117 = 0xA4C4L;
    int l_123 = 0xF9C7B46AL;
    unsigned short l_139 = 0x73E1L;
    struct S0 l_152 = {0xCEL,0x3382DDA2L,0x04B5L,0x7992L,0x5F34L,-2L,9UL,0x5AL,3L};
    short l_156 = 0x80B3L;
    unsigned short l_176 = 65535UL;
    struct S1 l_244 = {{0x7FL,0xE321F603L,-1L,1UL,0UL,-9L,0x49L,-9L,0xAB29L}};
    unsigned short l_314 = 65535UL;
    int l_347 = 2L;
    unsigned short l_439 = 1UL;
lbl_261:
    l_106 = p_22;
    if ((safe_rshift_func_uint8_t_u_s((((safe_lshift_func_int16_t_s_s((l_106 < g_105.f0.f0), (((+func_72((g_87.f7 = p_23), g_83, l_111, l_112, g_32)) > (safe_add_func_uint32_t_u_u(g_104.f0.f8, 1UL))) && 0x3DL))) == p_22) == 0UL), p_22)))
    {
        struct S0 l_126 = {0xD4L,0x06AF828DL,-2L,65535UL,0x5BE8L,0x72L,249UL,0x7FL,1L};
        int l_127 = (-4L);
        l_127 = func_55((safe_rshift_func_uint16_t_u_u(func_37(l_117, p_22, p_24, (safe_lshift_func_uint8_t_u_s(0xFFL, 5))), (safe_add_func_int32_t_s_s((l_123 ^= (g_122 ^= p_24)), (safe_mul_func_int8_t_s_s((p_22 != g_32), (-6L))))))), p_24, p_22, l_126);
        for (g_105.f0.f5 = 0; (g_105.f0.f5 == (-26)); g_105.f0.f5 = safe_sub_func_uint16_t_u_u(g_105.f0.f5, 4))
        {
            struct S0 l_138 = {0L,1UL,0xFFF8L,3UL,65530UL,0x73L,0xCAL,-7L,0x2757L};
            int l_150 = 0xDFE02593L;
            int l_153 = (-5L);
            l_127 = ((safe_sub_func_uint32_t_u_u(func_48(p_24, (p_21 = 4294967295UL), l_126.f1, g_104), p_22)) & func_72((g_105.f0.f7 = ((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(l_111.f7, 10)), 8)) > (safe_lshift_func_int16_t_s_u(g_105.f0.f1, (l_112.f0.f4 || p_24))))), g_105.f0.f2, l_138, g_104, l_138.f5));
            l_139 = (g_71 = g_87.f6);
            l_153 ^= (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((l_112.f0.f2 == (p_21 ^ p_23)) > ((g_71 = 0x1E382ABCL) & func_72((p_22 || g_104.f0.f1), (!(safe_lshift_func_uint8_t_u_s(func_72((g_105.f0.f0 = 0x43L), (safe_mul_func_uint16_t_u_u(l_126.f3, (l_150 = 0xD7E4L))), g_87, l_112, g_151), 3))), l_152, g_104, p_24))), 4)), 0)), p_21));
        }
    }
    else
    {
        short l_169 = 0xDB96L;
        int l_215 = (-4L);
        unsigned short l_279 = 9UL;
        int l_280 = (-7L);
        unsigned l_281 = 1UL;
        struct S0 l_319 = {0xC7L,0xF598C9DFL,-8L,0x3F99L,0x1402L,0xCEL,1UL,0x21L,0xA1B7L};
        struct S1 l_392 = {{0xF3L,0x4222B9C3L,0x138BL,0x9513L,0xCF81L,-1L,255UL,0xB1L,0x5B46L}};
        char l_422 = 6L;
        unsigned short l_456 = 65531UL;
        for (l_111.f5 = (-17); (l_111.f5 <= (-18)); l_111.f5 = safe_sub_func_int32_t_s_s(l_111.f5, 1))
        {
            short l_165 = 0xB7F4L;
            char l_241 = 0x17L;
            struct S1 l_243 = {{0x95L,0xA9FC2AADL,0xE387L,0xAA0EL,0x8675L,1L,255UL,9L,-6L}};
            int l_245 = 0xF743DB38L;
            char l_275 = 0xEEL;
            int l_276 = 0x9D9BFE7AL;
            if ((((l_156 &= l_111.f7) || (248UL || (0x4CL && p_24))) <= (safe_add_func_uint8_t_u_u(1UL, (safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u(g_104.f0.f2, (((l_165 = (7UL != (safe_rshift_func_int8_t_s_u(((-1L) < (l_123 = 0x4B57L)), p_24)))) == g_122) || 0UL))), g_87.f5))))))
            {
                unsigned l_168 = 0UL;
                int l_177 = (-3L);
                int l_178 = (-1L);
                struct S0 l_239 = {0x70L,4294967295UL,-4L,0x4F4CL,65535UL,0xC9L,254UL,0L,0xA352L};
                if ((l_178 = ((safe_mul_func_uint16_t_u_u(((0xFEE0L < ((((l_168 = (-6L)) || g_87.f0) >= (+(+(l_169 = g_9)))) && (g_71 = p_22))) && (1L > l_169)), p_24)) || (safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s((l_177 = func_37(p_21, l_176, p_22, g_105.f0.f3)), p_24)), p_21)), 5UL)))))
                {
                    unsigned short l_196 = 1UL;
                    if (g_105.f0.f5)
                    {
                        short l_193 = 0x839EL;
                        int l_216 = 0xDB3FF220L;
                        g_198 = (safe_div_func_int16_t_s_s(((((((safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u((g_83 = g_104.f0.f6), (safe_rshift_func_uint8_t_u_s((p_24 != ((g_71 = p_21) || p_23)), ((p_23 > p_21) | g_105.f0.f1))))), ((g_195 = (g_194 = l_193)) & l_196))) & p_24) || 0x05CE42CDL), g_87.f8)), g_9)), 11)) && g_104.f0.f5) == p_24) > 9L) & g_105.f0.f0) >= g_197), 65533UL));
                        l_216 = (safe_add_func_int8_t_s_s((l_215 = ((safe_mul_func_int16_t_s_s(0xA89DL, (l_178 = (g_83 > (safe_sub_func_uint16_t_u_u(65535UL, (((safe_add_func_int32_t_s_s(((safe_mod_func_int16_t_s_s(g_104.f0.f4, l_169)) | (safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(l_196, (safe_lshift_func_int8_t_s_s(g_83, 4)))), (func_55(g_83, ((p_23 < l_165) | g_87.f8), p_21, l_111) < 0xFE24L)))), 0x5D8874FFL)) || p_23) <= l_165))))))) | g_104.f0.f4)), (-2L)));
                    }
                    else
                    {
                        unsigned char l_242 = 250UL;
                        l_242 = ((safe_sub_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((1UL <= ((safe_sub_func_int16_t_s_s(g_195, (safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(func_55(g_197, (l_215 | ((safe_add_func_uint8_t_u_u((((safe_mod_func_int16_t_s_s((l_178 != g_87.f7), (safe_div_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(g_105.f0.f2, l_168)), (l_177 &= p_21))))) & g_104.f0.f2) && l_169), p_22)) == l_168)), p_22, l_239), 3)), g_240)))) >= 0xCAL)), g_87.f1)), l_239.f0)), p_24)) || l_241) ^ 0x37L), 6L)) == 3L);
                        if (g_87.f0)
                            break;
                        l_244 = (g_104 = l_243);
                    }
                }
                else
                {
                    g_71 = l_169;
                    l_245 |= l_243.f0.f4;
                    g_71 = l_152.f3;
                    g_71 ^= l_215;
                }
                l_177 = (((l_245 &= (l_178 = ((l_123 ^= g_105.f0.f5) ^ ((safe_lshift_func_uint8_t_u_u(g_105.f0.f8, ((safe_div_func_int8_t_s_s(((0xF314BEDBL == (g_105.f0.f3 != (safe_lshift_func_uint16_t_u_s(p_22, 1)))) > g_71), (g_105.f0.f6 = func_72(l_239.f5, g_104.f0.f0, (g_87 = l_243.f0), g_104, g_105.f0.f6)))) ^ l_239.f0))) || g_104.f0.f1)))) == l_239.f3) <= 0xC036L);
                l_178 |= 0L;
                for (l_152.f3 = 0; (l_152.f3 > 31); l_152.f3 = safe_add_func_int16_t_s_s(l_152.f3, 7))
                {
                    struct S1 l_254 = {{3L,4294967294UL,0xE23CL,65535UL,9UL,0xC7L,0x7BL,-1L,0x5CBDL}};
                    l_254 = g_104;
                }
            }
            else
            {
                return l_111.f8;
            }
            g_71 = l_169;
            for (l_112.f0.f1 = (-19); (l_112.f0.f1 != 16); l_112.f0.f1++)
            {
                short l_259 = 0xF357L;
                struct S0 l_273 = {0xDFL,0x639B9190L,0x542AL,5UL,0x1F70L,0x10L,0x87L,1L,0x7F7FL};
                struct S1 l_274 = {{-8L,0x5335A67BL,1L,0x1D41L,4UL,0x14L,3UL,0xF1L,0xC5E1L}};
                if (g_87.f2)
                {
                    for (l_243.f0.f8 = (-5); (l_243.f0.f8 < (-28)); l_243.f0.f8--)
                    {
                        short l_260 = 0xC64CL;
                        if (g_87.f8)
                            break;
                        if (g_104.f0.f4)
                            break;
                        l_260 = l_259;
                    }
                    if (g_198)
                        continue;
                }
                else
                {
                    int l_262 = 0xEB9DB9A0L;
                    if (l_111.f2)
                    {
                        if (l_243.f0.f7)
                            goto lbl_261;
                        if (p_22)
                            break;
                        l_123 = p_24;
                        if (l_111.f2)
                            goto lbl_261;
                    }
                    else
                    {
                        if (g_105.f0.f3)
                            break;
                    }
                    g_71 ^= p_22;
                    l_262 |= (-6L);
                }
                l_276 ^= func_72(((l_244.f0.f6 < (safe_rshift_func_uint8_t_u_u((l_245 |= l_169), (l_215 = (safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((4294967290UL && (g_151 >= l_259)), p_22)), p_22)))))) || (safe_add_func_int32_t_s_s((l_123 = (l_259 ^ func_37((safe_rshift_func_uint8_t_u_s(0UL, l_112.f0.f5)), l_156, l_259, g_104.f0.f5))), (-1L)))), l_152.f1, l_273, l_274, l_275);
            }
            for (l_112.f0.f6 = (-15); (l_112.f0.f6 == 50); l_112.f0.f6 = safe_add_func_int8_t_s_s(l_112.f0.f6, 5))
            {
                char l_282 = 0x91L;
                g_283 = (func_37((l_279 = func_55(l_112.f0.f4, (g_104.f0.f4 = g_87.f5), g_71, l_243.f0)), l_243.f0.f1, l_243.f0.f8, ((0x7B6EL == ((l_280 |= func_72(g_87.f7, g_197, l_243.f0, g_105, l_215)) || l_281)) > 0x5709L)) <= l_282);
            }
        }
        if ((safe_rshift_func_uint16_t_u_s(p_22, 13)))
        {
            l_123 = g_105.f0.f3;
        }
        else
        {
            unsigned l_293 = 4294967295UL;
            struct S1 l_318 = {{0L,0x09C71677L,-1L,1UL,2UL,0x6AL,0x2AL,-8L,-1L}};
            int l_346 = 0x05E0A1B0L;
            int l_369 = 0xCDCFF567L;
lbl_393:
            if (g_105.f0.f0)
            {
                short l_292 = 0L;
                struct S0 l_313 = {1L,0xA2E2DF67L,0xF6E9L,65528UL,0UL,0x50L,5UL,8L,0xAA03L};
                int l_315 = 0xF1F446DAL;
                struct S1 l_351 = {{0x32L,4294967288UL,-1L,0xEBD4L,65535UL,3L,0xE2L,0x19L,0x83A2L}};
                for (g_87.f0 = 0; (g_87.f0 == (-30)); g_87.f0--)
                {
                    int l_294 = (-8L);
                    struct S0 l_316 = {-1L,4294967294UL,5L,0x3414L,65532UL,0xF7L,0UL,0x3BL,8L};
                    g_317 = func_55((safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((l_292 && l_293), l_294)), (safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(0xEFD8L, (((safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s((l_294 < (safe_unary_minus_func_int16_t_s(l_169))), ((0UL != ((safe_unary_minus_func_int16_t_s((g_105.f0.f2 |= (safe_rshift_func_int8_t_s_u(func_55((l_315 = ((l_314 ^= (safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((g_105.f0.f6 <= func_72(l_294, g_87.f6, l_313, g_104, l_215)), 0)), p_24))) || 0x6FL)), l_281, g_9, g_104.f0), 6))))) >= p_22)) > (-1L)))), 1UL)) <= p_24) || g_283))), 6UL)), p_21)))), p_22, l_244.f0.f0, l_316);
                }
                if (func_48(func_72((g_105.f0.f5 = p_22), ((func_72(l_293, g_105.f0.f4, g_104.f0, l_318, l_313.f5) <= (+l_244.f0.f5)) || ((p_24 & 8UL) & g_105.f0.f8)), l_319, g_104, g_320), g_87.f7, g_195, g_104))
                {
                    int l_323 = 0xE374AD17L;
                    for (g_87.f5 = 0; (g_87.f5 <= (-7)); --g_87.f5)
                    {
                        l_315 |= l_323;
                        g_71 = (g_9 > p_21);
                    }
                }
                else
                {
                    unsigned l_333 = 0xD3141FF9L;
                    int l_344 = 1L;
                    struct S1 l_345 = {{-1L,0x01127916L,-1L,0x30BAL,1UL,-10L,1UL,0L,0xC60DL}};
lbl_350:
                    l_347 ^= (safe_add_func_uint8_t_u_u(l_318.f0.f3, ((g_104.f0.f0 || (safe_div_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u((l_123 = 0x1B4DL))), l_319.f5)) >= (l_215 = (l_346 = (g_105.f0.f1 && (safe_lshift_func_uint16_t_u_s(l_333, ((safe_lshift_func_int16_t_s_s(func_48((safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s((g_87.f0 = ((safe_add_func_uint32_t_u_u(g_104.f0.f1, (safe_sub_func_int8_t_s_s(((g_320 = g_104.f0.f1) && (l_315 = (l_344 = l_318.f0.f2))), l_319.f5)))) | p_22)), l_318.f0.f3)), p_23)), g_105.f0.f3, g_151, l_345), g_104.f0.f1)) <= p_23))))))), 0xC643EF07L))) > p_21)));
                    g_71 = func_72(p_24, l_313.f3, l_111, g_105, l_313.f3);
                    for (g_151 = 0; (g_151 >= 52); g_151 = safe_add_func_int32_t_s_s(g_151, 5))
                    {
                        if (l_152.f1)
                            goto lbl_350;
                    }
                    g_352 |= func_72(p_22, g_198, (l_345.f0 = l_345.f0), (g_105 = l_351), func_55(g_104.f0.f8, g_87.f8, p_24, l_318.f0));
                }
                return p_24;
            }
            else
            {
                struct S0 l_355 = {0x86L,3UL,-4L,5UL,0UL,1L,0x69L,0xD9L,-2L};
                int l_377 = 0x3C8AF4EBL;
                for (g_240 = 13; (g_240 >= 60); g_240++)
                {
                    l_355 = l_319;
                }
                for (l_355.f3 = 28; (l_355.f3 <= 53); l_355.f3 = safe_add_func_uint32_t_u_u(l_355.f3, 7))
                {
                    unsigned short l_370 = 0UL;
                    l_370 |= ((p_22 & (safe_lshift_func_uint8_t_u_s(254UL, 7))) | (safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(0xFAD3L, func_55(((safe_mul_func_int8_t_s_s((l_318.f0.f4 > (safe_add_func_uint32_t_u_u(g_105.f0.f0, (g_32 = g_122)))), ((l_215 = (((l_369 = ((l_346 = g_368) == 0x261EE3FFL)) ^ p_23) && 1UL)) < p_24))) < p_21), p_22, g_71, l_244.f0))), 65529UL)));
                    l_280 |= g_105.f0.f5;
                    if (l_370)
                        continue;
                    l_346 = (p_21 == 0x66CB34F8L);
                }
                if (l_112.f0.f2)
                    goto lbl_393;
                for (g_195 = 29; (g_195 == 11); g_195 = safe_sub_func_int32_t_s_s(g_195, 3))
                {
                    l_346 |= (safe_mod_func_uint32_t_u_u(g_104.f0.f1, l_318.f0.f8));
                    for (l_319.f6 = 0; (l_319.f6 < 56); l_319.f6++)
                    {
                        l_377 ^= 0xF51F3BA3L;
                        l_318.f0 = l_112.f0;
                        l_318 = g_105;
                        g_71 = ((((safe_mul_func_int8_t_s_s(((0x23C8L | ((safe_div_func_uint8_t_u_u((!(g_87.f0 != (safe_sub_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(g_87.f2, func_72((((safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(func_72((g_104.f0.f2 | ((-1L) ^ (safe_lshift_func_int16_t_s_u((p_23 < g_197), 11)))), p_22, l_319, l_392, g_32), p_21)), 0x6066L)) != 3UL) | l_152.f2), l_346, g_87, g_104, p_23))) > 0x5366L), (-1L))))), l_355.f7)) ^ 0L)) ^ g_104.f0.f2), p_22)) > p_21) || 4294967288UL) <= l_318.f0.f7);
                    }
                    g_105 = g_105;
                }
            }
            l_244 = l_392;
        }
        for (l_111.f1 = (-1); (l_111.f1 == 54); ++l_111.f1)
        {
            short l_396 = 0x10FFL;
            int l_433 = 0x15FEB5DDL;
            l_396 = p_22;
            if ((func_72(p_21, (p_22 = 6L), g_105.f0, l_392, (l_111.f5 >= (g_71 = 0x421B84FCL))) & (safe_mod_func_int16_t_s_s(p_21, (g_197 | g_105.f0.f1)))))
            {
                int l_419 = 0xBF14D2F3L;
                int l_438 = 0xBF789BA3L;
                for (l_111.f5 = 19; (l_111.f5 <= 22); l_111.f5 = safe_add_func_int32_t_s_s(l_111.f5, 2))
                {
                    unsigned l_425 = 4294967295UL;
                    if ((l_347 = (safe_div_func_int32_t_s_s(g_105.f0.f3, (safe_lshift_func_int8_t_s_u(p_22, 0))))))
                    {
                        char l_423 = (-7L);
                        struct S0 l_424 = {0L,4UL,0x8876L,0x1B9EL,0x9E92L,0xF2L,2UL,-7L,0x8B7CL};
                        g_426 &= ((safe_rshift_func_uint8_t_u_s(l_396, func_72(((l_425 = (safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(p_24, (g_87.f2 & (safe_sub_func_int8_t_s_s((p_24 != (g_104.f0.f3 = ((safe_sub_func_int32_t_s_s(p_22, (safe_mod_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_u((0x3DL || (l_419 <= g_122)), (~(safe_sub_func_int32_t_s_s(func_55((l_423 ^= (65535UL > l_422)), g_283, g_87.f2, l_424), 0UL))))) >= 0xDB485806L) & 65535UL), p_21)))) ^ g_104.f0.f1))), 0xCFL))))), 0xB0L))) && 0L), p_22, l_319, l_244, l_419))) || 0xEB3FEC1FL);
                        g_71 = (safe_unary_minus_func_uint16_t_u(((safe_sub_func_uint32_t_u_u((g_32 = 0x98E381F5L), l_424.f7)) > 2L)));
                        l_433 &= (safe_rshift_func_int8_t_s_u((safe_unary_minus_func_int32_t_s(p_23)), 7));
                    }
                    else
                    {
                        unsigned short l_446 = 1UL;
                        g_447 |= (((((4L ^ (safe_mod_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((l_152.f5 | (l_433 = 0x721EL)), (l_438 = p_22))) > ((p_24 == func_37((l_439 && (((safe_div_func_uint8_t_u_u((p_21 || (safe_add_func_uint16_t_u_u(p_22, ((safe_rshift_func_int16_t_s_s((p_24 != p_23), g_104.f0.f6)) & 0xA3L)))), p_24)) > p_21) && 0xA1L)), p_22, p_22, l_117)) != l_446)), l_425))) != l_347) == p_22) < l_446) & 0xFF1CCAE6L);
                        if (p_22)
                            break;
                    }
                    l_456 = (safe_add_func_uint8_t_u_u((p_21 | (safe_sub_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((g_87.f3 ^ (func_55(g_32, ((func_55(l_319.f3, g_151, g_104.f0.f8, g_87) <= g_105.f0.f5) >= l_112.f0.f0), p_24, g_105.f0) < g_104.f0.f7)), p_22)) || 0xF9CEL), p_21)), g_104.f0.f4))), l_112.f0.f5));
                    for (l_152.f0 = 17; (l_152.f0 >= 4); l_152.f0 = safe_sub_func_uint32_t_u_u(l_152.f0, 2))
                    {
                        struct S1 l_459 = {{-6L,0xE7EDE4C4L,-1L,65535UL,1UL,0x2FL,8UL,0x73L,0x43ABL}};
                        l_459 = l_112;
                    }
                }
                l_438 = 0x0A86B89AL;
                for (g_197 = 27; (g_197 < (-14)); --g_197)
                {
                    struct S1 l_465 = {{0xB8L,0UL,0x7ED0L,0x4678L,0xFC92L,0x20L,247UL,0xC0L,-8L}};
                    for (l_139 = 2; (l_139 < 34); l_139 = safe_add_func_int32_t_s_s(l_139, 3))
                    {
                        int l_464 = 0xFBF74A89L;
                        l_464 &= p_21;
                        if (g_104.f0.f8)
                            continue;
                        l_465 = g_105;
                        if (p_23)
                            break;
                    }
                }
            }
            else
            {
                unsigned l_466 = 3UL;
                l_347 |= l_466;
                g_71 |= (safe_sub_func_uint32_t_u_u(0xC9910356L, g_87.f0));
            }
        }
        for (l_111.f3 = 7; (l_111.f3 >= 30); l_111.f3++)
        {
            int l_471 = 0xF1EEAD5FL;
            int l_474 = 0x343ED73AL;
            l_471 = p_21;
            for (l_111.f6 = 29; (l_111.f6 > 10); l_111.f6 = safe_sub_func_uint8_t_u_u(l_111.f6, 4))
            {
                l_123 |= g_283;
            }
            l_123 = (l_474 = (0x8E50L <= (-1L)));
            l_474 = (g_71 = l_471);
        }
    }
    return p_21;
}







static unsigned short func_37(int p_38, int p_39, unsigned p_40, unsigned p_41)
{
    unsigned char l_60 = 9UL;
    struct S0 l_80 = {0x7EL,4294967295UL,9L,65534UL,65526UL,6L,0xAEL,0x2FL,0x1925L};
    struct S1 l_81 = {{-1L,0x966A49DFL,-1L,0xB361L,65527UL,0x9EL,0xF4L,5L,0x85DCL}};
    short l_85 = (-8L);
    int l_86 = (-1L);
    int l_101 = 7L;
    int l_103 = 0x6533915DL;
    l_103 = (safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((safe_unary_minus_func_int32_t_s(func_48((l_101 ^= (safe_lshift_func_uint8_t_u_u(func_55(p_39, l_60, ((((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((((l_86 = (safe_lshift_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((g_71 = g_9), func_72(l_60, (safe_mul_func_int8_t_s_s((!g_9), g_9)), l_80, l_81, p_40))) <= l_85), g_9)) >= p_38), g_9))) > l_81.f0.f4) || p_38) | l_80.f8), 0x7FL)), 0x3631A0D1L)) == 3L) ^ p_38) || g_83), g_87), p_39))), g_87.f7, g_87.f0, l_81))) && 0xBDL), p_40)), p_38));
    g_105 = (g_104 = g_104);
    g_105 = g_105;
    l_86 = (l_103 = (l_101 = 0x6A621C59L));
    return g_105.f0.f5;
}







static int func_48(unsigned char p_49, unsigned p_50, unsigned short p_51, struct S1 p_52)
{
    struct S0 l_102 = {-1L,0xEF72180AL,0xC217L,0x68D4L,1UL,0xEAL,1UL,-1L,1L};
    p_52.f0 = (g_87 = g_87);
    p_52.f0 = l_102;
    g_71 = 0x5F1EE036L;
    return p_52.f0.f4;
}







static unsigned char func_55(char p_56, unsigned short p_57, unsigned short p_58, struct S0 p_59)
{
    unsigned l_90 = 0UL;
    int l_91 = 1L;
    struct S0 l_94 = {0x45L,4UL,5L,0xC370L,0x3F07L,0xA4L,0x2BL,0xDBL,0L};
    struct S1 l_95 = {{1L,1UL,1L,0x9CB7L,0UL,1L,4UL,-9L,0xCC5FL}};
    short l_98 = 0x4738L;
    unsigned short l_99 = 0xD8CCL;
    int l_100 = 1L;
    l_91 = (safe_lshift_func_int8_t_s_s(l_90, 1));
    g_71 &= 1L;
    l_100 &= (p_56 && (l_99 ^= (safe_div_func_uint32_t_u_u((func_72((l_91 = l_90), (p_59.f7 = p_59.f0), l_94, l_95, (g_87.f4 = ((safe_rshift_func_uint16_t_u_s(p_59.f0, (p_59.f8 = (l_98 || (-1L))))) & p_59.f4))) || l_91), l_94.f0))));
    return p_59.f6;
}







static unsigned char func_72(char p_73, char p_74, struct S0 p_75, struct S1 p_76, unsigned short p_77)
{
    int l_82 = 0xA11AD519L;
    int l_84 = (-7L);
    l_82 = 0L;
    l_84 &= g_83;
    return l_82;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_87.f0, "g_87.f0", print_hash_value);
    transparent_crc(g_87.f1, "g_87.f1", print_hash_value);
    transparent_crc(g_87.f2, "g_87.f2", print_hash_value);
    transparent_crc(g_87.f3, "g_87.f3", print_hash_value);
    transparent_crc(g_87.f4, "g_87.f4", print_hash_value);
    transparent_crc(g_87.f5, "g_87.f5", print_hash_value);
    transparent_crc(g_87.f6, "g_87.f6", print_hash_value);
    transparent_crc(g_87.f7, "g_87.f7", print_hash_value);
    transparent_crc(g_87.f8, "g_87.f8", print_hash_value);
    transparent_crc(g_104.f0.f0, "g_104.f0.f0", print_hash_value);
    transparent_crc(g_104.f0.f1, "g_104.f0.f1", print_hash_value);
    transparent_crc(g_104.f0.f2, "g_104.f0.f2", print_hash_value);
    transparent_crc(g_104.f0.f3, "g_104.f0.f3", print_hash_value);
    transparent_crc(g_104.f0.f4, "g_104.f0.f4", print_hash_value);
    transparent_crc(g_104.f0.f5, "g_104.f0.f5", print_hash_value);
    transparent_crc(g_104.f0.f6, "g_104.f0.f6", print_hash_value);
    transparent_crc(g_104.f0.f7, "g_104.f0.f7", print_hash_value);
    transparent_crc(g_104.f0.f8, "g_104.f0.f8", print_hash_value);
    transparent_crc(g_105.f0.f0, "g_105.f0.f0", print_hash_value);
    transparent_crc(g_105.f0.f1, "g_105.f0.f1", print_hash_value);
    transparent_crc(g_105.f0.f2, "g_105.f0.f2", print_hash_value);
    transparent_crc(g_105.f0.f3, "g_105.f0.f3", print_hash_value);
    transparent_crc(g_105.f0.f4, "g_105.f0.f4", print_hash_value);
    transparent_crc(g_105.f0.f5, "g_105.f0.f5", print_hash_value);
    transparent_crc(g_105.f0.f6, "g_105.f0.f6", print_hash_value);
    transparent_crc(g_105.f0.f7, "g_105.f0.f7", print_hash_value);
    transparent_crc(g_105.f0.f8, "g_105.f0.f8", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_317, "g_317", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_426, "g_426", print_hash_value);
    transparent_crc(g_447, "g_447", print_hash_value);
    transparent_crc(g_496, "g_496", print_hash_value);
    transparent_crc(g_513, "g_513", print_hash_value);
    transparent_crc(g_528, "g_528", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
