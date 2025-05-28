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
   char f1;
   unsigned f2 : 22;
   unsigned f3 : 2;
   unsigned f4 : 13;
   unsigned f5 : 27;
   unsigned f6 : 20;
   signed f7 : 27;
   unsigned f8 : 22;
};

union U1 {
   short f0;
};


static char g_20 = 0xFDL;
static short g_47 = 0x0C65L;
static char g_54 = 7L;
static short g_56 = (-4L);
static struct S0 g_72 = {0xCD78L,0x0EL,1306,0,65,11318,15,-1957,313};
static union U1 g_85 = {4L};
static struct S0 g_96 = {0L,-1L,39,1,64,1056,705,-7551,1034};
static int g_111 = 0L;
static short g_138 = 0x097DL;
static short g_151 = 0L;
static int g_155 = 0xAA7743CDL;
static unsigned g_166 = 0x6757B94BL;
static unsigned g_200 = 0x1B89C927L;
static unsigned g_209 = 0UL;
static unsigned char g_216 = 0UL;
static unsigned g_218 = 0xB8EC8C7DL;
static short g_238 = 0x79E9L;
static short g_264 = 0xC6B0L;
static int g_281 = 1L;
static int g_298 = 0x79C85531L;
static char g_300 = (-7L);
static unsigned g_315 = 4294967292UL;
static char g_318 = 1L;
static char g_445 = 0x45L;
static unsigned g_468 = 5UL;
static short g_493 = 0xC781L;
static char g_516 = (-1L);
static short g_617 = 0x779EL;
static int g_619 = 0xDCCC8453L;
static unsigned char g_662 = 252UL;
static unsigned g_680 = 0UL;
static struct S0 g_687 = {0x85DCL,0xD7L,324,0,21,4412,706,6451,1677};
static unsigned short g_714 = 65531UL;
static short g_755 = 0x74A5L;
static int g_756 = (-1L);
static unsigned g_757 = 0xCCD3F2AFL;
static int g_777 = 0x85D63546L;
static int g_788 = (-2L);
static unsigned g_818 = 1UL;
static unsigned char g_828 = 251UL;
static union U1 g_892 = {4L};
static int g_920 = 0xCDCBC6B9L;
static unsigned g_922 = 6UL;
static unsigned g_971 = 1UL;



static struct S0 func_1(void);
static unsigned char func_2(char p_3, char p_4, unsigned char p_5, unsigned p_6);
static unsigned short func_16(int p_17, unsigned char p_18, unsigned short p_19);
static unsigned char func_22(unsigned p_23, unsigned char p_24, unsigned char p_25, unsigned short p_26);
static unsigned func_27(char p_28, char p_29, short p_30, unsigned char p_31, unsigned p_32);
static char func_33(unsigned char p_34);
static int func_38(unsigned short p_39, unsigned short p_40, union U1 p_41, char p_42, unsigned p_43);
static unsigned func_60(char p_61, union U1 p_62, int p_63);
static unsigned short func_64(char p_65, unsigned p_66);
static char func_67(char p_68, int p_69, struct S0 p_70, int p_71);
static struct S0 func_1(void)
{
    int l_7 = 0x4A90611BL;
    int l_985 = 0xA2D5C384L;
    union U1 l_993 = {0x31DFL};
    int l_1002 = 0L;
    struct S0 l_1026 = {0x9E1AL,1L,47,0,41,9315,874,-4713,2001};
    int l_1027 = (-1L);
    g_920 = (l_985 ^= (0x18L >= func_2(((4294967286UL && l_7) , (safe_rshift_func_uint16_t_u_u((!(safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(func_16(((g_20 ^ (((safe_unary_minus_func_uint8_t_u(func_22(func_27(func_33((((-1L) >= l_7) > g_20)), g_54, g_47, g_20, l_7), l_7, g_318, g_298))) , g_788) && 1L)) >= g_755), g_971, g_619), 0xCD23L)), g_493)), g_54))), l_7))), g_892.f0, l_7, l_7)));
    for (g_298 = 0; (g_298 != (-25)); --g_298)
    {
        unsigned l_1003 = 0x94B83F22L;
        int l_1004 = 0xB4320207L;
        struct S0 l_1005 = {1L,-9L,1072,0,37,3528,456,9583,1956};
        g_687.f7 = ((g_72 = g_72) , (safe_unary_minus_func_uint16_t_u((g_96 , (safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(0L, (func_64((l_993 , (safe_sub_func_uint8_t_u_u((g_85 , 0xB3L), 7L))), ((l_1004 = (g_687.f2 = ((((safe_lshift_func_uint8_t_u_s(((((g_516 <= (l_1002 = (g_756 = (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s((l_1002 & g_687.f2), l_993.f0)), 2))))) > g_96.f5) , l_1003) >= g_166), g_828)) != 0xFDL) , l_1003) , 4294967291UL))) && 0x1B9BABE5L)) <= 0xE5L))), g_445))))));
        if (g_72.f5)
            goto lbl_1015;
        return l_1005;
    }
lbl_1015:
    for (g_687.f1 = 0; (g_687.f1 <= 12); g_687.f1++)
    {
        unsigned char l_1014 = 248UL;
        if (g_315)
            break;
        g_281 ^= (~(((g_85.f0 ^ (func_64(l_7, l_993.f0) | 0UL)) , ((l_1014 = (safe_sub_func_int16_t_s_s((-9L), (safe_sub_func_int16_t_s_s(0L, (!(safe_rshift_func_uint16_t_u_u(0x45A9L, 2)))))))) <= 8UL)) & 0xB0CBL));
    }
    g_920 |= (g_687.f7 |= ((safe_rshift_func_uint8_t_u_s(0UL, 5)) > (((g_72 , (((((g_687.f6 > ((((((func_64(l_993.f0, ((safe_unary_minus_func_uint32_t_u((safe_add_func_int32_t_s_s((l_1027 ^= func_64(g_922, ((func_67((g_20 |= (safe_unary_minus_func_uint8_t_u(g_96.f2))), ((l_985 ^= ((safe_rshift_func_uint8_t_u_s(g_111, (!l_1002))) , (func_16(g_96.f7, g_298, l_7) , g_54))) , l_1002), l_1026, l_1026.f0) >= 0x91L) , l_1026.f8))), 4294967292UL)))) , 4294967295UL)) < l_993.f0) <= g_96.f8) | 0xABL) > 5UL) ^ l_1002) <= g_687.f0)) ^ g_96.f1) != l_1026.f1) ^ l_1026.f7) <= l_993.f0)) <= l_1026.f4) <= g_687.f5)));
    return l_1026;
}







static unsigned char func_2(char p_3, char p_4, unsigned char p_5, unsigned p_6)
{
    unsigned short l_975 = 65529UL;
    union U1 l_978 = {8L};
    int l_983 = 8L;
    int l_984 = 0L;
    l_984 = (safe_rshift_func_uint16_t_u_u(l_975, (func_64((l_983 = (safe_rshift_func_int16_t_s_u(func_38(l_975, g_318, l_978, l_978.f0, (((g_445 = (~(((safe_rshift_func_uint8_t_u_s(g_687.f4, func_38((((safe_sub_func_uint16_t_u_u((g_72.f1 < func_27(g_72.f6, l_975, l_978.f0, p_3, p_6)), l_975)) != p_3) ^ 0L), g_920, l_978, g_788, l_975))) == p_5) <= l_978.f0))) > g_318) <= 0xFAC174C0L)), 4))), l_975) >= l_978.f0)));
    return g_72.f2;
}







static unsigned short func_16(int p_17, unsigned char p_18, unsigned short p_19)
{
    int l_972 = (-5L);
    return l_972;
}







static unsigned char func_22(unsigned p_23, unsigned char p_24, unsigned char p_25, unsigned short p_26)
{
    unsigned short l_452 = 0xF4FFL;
    int l_458 = (-3L);
    struct S0 l_477 = {0x2AA1L,0xB8L,313,1,36,997,768,4790,680};
    union U1 l_536 = {0x5C45L};
    int l_615 = 0x16F8B90AL;
    int l_616 = 0L;
    int l_618 = 0L;
    int l_661 = 0x0856E033L;
    short l_768 = 1L;
    int l_790 = 5L;
    unsigned l_797 = 0x0A4FCC1AL;
    char l_815 = 0x9BL;
    int l_872 = 0xE14DC194L;
    for (g_47 = 4; (g_47 <= 6); g_47 = safe_add_func_uint16_t_u_u(g_47, 2))
    {
        struct S0 l_457 = {0x5124L,0xE3L,125,0,63,3798,752,-7355,1218};
        int l_479 = 0x51FBB9AEL;
        unsigned l_517 = 1UL;
        union U1 l_531 = {-1L};
        int l_554 = 5L;
        struct S0 l_556 = {0L,4L,1678,0,34,394,913,1153,1648};
        char l_587 = 0x36L;
        char l_610 = 0x9DL;
        unsigned l_620 = 0x3BE7702AL;
        int l_657 = 0x2942D5EFL;
        int l_658 = 0L;
        int l_659 = 0x2943B098L;
        int l_660 = 1L;
        unsigned char l_723 = 0x1EL;
        unsigned l_747 = 7UL;
        unsigned char l_749 = 0xC0L;
        l_457.f7 = ((safe_mod_func_int32_t_s_s((g_96 , (g_315 ^ ((l_458 ^= (7L && (safe_lshift_func_uint16_t_u_u(l_452, ((l_452 > (safe_sub_func_int16_t_s_s((safe_mod_func_int32_t_s_s(g_138, p_24)), func_67(g_72.f1, p_23, l_457, p_25)))) == g_315))))) < g_300))), 3L)) > 0x37888637L);
        if ((safe_mod_func_uint16_t_u_u(func_64(func_67(l_457.f4, l_452, g_96, g_72.f5), ((safe_unary_minus_func_int32_t_s(((safe_rshift_func_int8_t_s_u(g_216, ((safe_rshift_func_int8_t_s_s((!(((g_138 = ((((l_457.f1 || (safe_mod_func_uint32_t_u_u((l_457 , p_24), g_96.f6))) > 0x422ADF35L) & 0L) | g_96.f2)) & g_111) || l_452)), 1)) & g_166))) & g_96.f6))) , g_151)), g_468)))
        {
            unsigned char l_475 = 251UL;
            int l_480 = 8L;
            unsigned char l_539 = 0xCCL;
            int l_553 = 0x7AE0B878L;
            struct S0 l_569 = {0xD838L,0x5EL,2016,1,85,9366,366,2299,574};
            int l_656 = 0xAF6B0E7DL;
            for (g_96.f1 = 0; (g_96.f1 > 24); ++g_96.f1)
            {
                short l_478 = (-6L);
                unsigned l_486 = 6UL;
                int l_500 = 0xF538B6D5L;
                struct S0 l_503 = {4L,0x70L,582,0,58,9372,828,3875,1625};
                unsigned char l_515 = 9UL;
                unsigned l_561 = 0x29C6FF43L;
                short l_566 = (-3L);
                if (g_96.f5)
                {
                    unsigned char l_476 = 0x0FL;
                    struct S0 l_485 = {1L,0xD0L,568,0,79,8412,250,-3709,325};
                    l_480 |= (safe_mod_func_int32_t_s_s((g_281 = (safe_sub_func_int32_t_s_s((l_479 = (func_67(g_56, (func_67(p_23, g_96.f0, l_457, ((l_475 == 0x5295536CL) , (l_457.f3 && ((((l_476 |= 9L) , g_468) <= 0x2824C952L) > 0x995CL)))) ^ p_25), l_477, l_478) & 0x1C427DAAL)), 4294967291UL))), l_457.f7));
                    l_500 = (((safe_add_func_int32_t_s_s(((safe_add_func_int16_t_s_s(g_318, (func_67(l_477.f6, (l_477.f7 = l_476), l_485, l_486) == p_23))) && ((safe_sub_func_int32_t_s_s((l_458 = (safe_rshift_func_uint8_t_u_s(l_477.f8, (safe_add_func_uint8_t_u_u(((p_26++) != (safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((3L <= 1L), g_56)), 0L))), 1L))))), g_298)) ^ p_23)), p_23)) <= 0x032A804DL) > l_477.f1);
                    l_458 &= g_300;
                }
                else
                {
                    unsigned l_506 = 4294967295UL;
                    struct S0 l_521 = {1L,0xB2L,742,0,61,7956,504,-6252,1607};
                    union U1 l_528 = {0x5CBBL};
                    if (func_67((p_25 >= func_27(l_480, g_138, (safe_rshift_func_uint8_t_u_s(((l_457.f7 = ((l_503 , ((((((((safe_add_func_uint16_t_u_u(l_506, 0x1923L)) || ((safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(l_477.f5, 2)), 7)) || (((l_515 || (~(l_457.f2 , g_96.f4))) , g_72.f4) ^ l_503.f3)) <= l_506), g_72.f7)), g_298)) , 4UL)) & 2L) , l_457.f3) | l_477.f5) >= g_72.f8) & 251UL) >= 0x6082F289L)) , g_72.f4)) > l_480), 1)), g_72.f2, p_25)), p_23, g_96, g_516))
                    {
                        struct S0 l_520 = {1L,8L,1773,1,18,2170,46,2164,899};
                        --l_517;
                        l_521 = ((g_72 = l_520) , l_520);
                        return l_457.f3;
                    }
                    else
                    {
                        int l_522 = 1L;
                        l_522 = g_96.f0;
                        g_281 |= g_151;
                        g_96.f7 ^= (safe_mod_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u(((safe_add_func_int32_t_s_s(p_25, (0xE4L ^ (g_200 ^ 0x27C9L)))) ^ (l_522 | (l_528 , l_528.f0))))), func_64((safe_lshift_func_uint8_t_u_u(p_24, p_23)), p_24)));
                        l_457.f7 = (l_531 , (g_281 = 1L));
                    }
                }
                if ((l_480 & (g_516 = (((((g_72.f1 , (0UL >= (safe_lshift_func_int8_t_s_s((func_64((((((g_85 = l_536) , (safe_add_func_int32_t_s_s(p_23, 0x4737537EL))) , (g_151 < p_25)) && (p_26 , l_539)) , p_25), g_96.f7) , g_72.f4), p_24)))) != 0UL) ^ 0xD281L) , l_477.f7) , g_493))))
                {
                    int l_542 = (-1L);
                    union U1 l_555 = {0x5A50L};
                    if ((0x674DL != l_475))
                    {
                        return g_96.f5;
                    }
                    else
                    {
                        l_554 ^= ((+((safe_rshift_func_uint16_t_u_u((l_457.f7 = ((l_542 && ((p_26 = g_96.f5) , g_493)) , p_23)), g_209)) , (safe_rshift_func_uint8_t_u_s(((g_72.f6 , (safe_add_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(p_25, (safe_mod_func_int32_t_s_s(l_542, func_27(((safe_mod_func_uint16_t_u_u((g_96.f6 == 1UL), p_24)) & p_24), p_26, l_553, l_477.f4, g_318))))) != g_264), 0x0FC8L))) & p_26), 6)))) != p_25);
                        l_556 = (l_457 = ((l_536 = l_555) , g_72));
                        l_503.f7 &= (safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((l_561 , p_23), g_200)), 9));
                        if (l_478)
                            continue;
                    }
                    l_503.f7 |= (safe_lshift_func_uint16_t_u_u(g_96.f1, 5));
                    for (p_26 = 15; (p_26 == 5); p_26--)
                    {
                        g_72.f7 ^= p_25;
                        return l_566;
                    }
                }
                else
                {
                    return p_25;
                }
            }
            for (g_468 = 0; (g_468 == 37); g_468 = safe_add_func_uint8_t_u_u(g_468, 6))
            {
                int l_574 = 0xDEDACC3BL;
                union U1 l_582 = {0x0FEFL};
                if (func_67(g_138, (g_209 | 0L), l_569, p_26))
                {
                    unsigned char l_588 = 255UL;
                    int l_589 = 0xE8962453L;
                    l_589 ^= ((safe_lshift_func_int16_t_s_u((l_531.f0 > g_281), 14)) ^ (safe_sub_func_int16_t_s_s((l_574 , ((safe_unary_minus_func_int8_t_s(((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((l_582 , (((l_569.f4 && (((((l_480 = (safe_mod_func_int32_t_s_s((l_554 ^= (func_64(((+0x68AC0215L) ^ ((g_96 = g_72) , (((safe_sub_func_int8_t_s_s(l_574, (p_26 & p_25))) > p_24) != g_85.f0))), p_26) <= l_477.f6)), p_26))) , g_96.f8) & l_569.f3) < g_85.f0) == g_281)) , l_587) | 0x08BEL)) != 0xC1L), 7)), l_588)), 3)) & g_72.f5))) ^ g_281)), (-1L))));
                    if ((~(safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(((l_569.f7 &= (safe_add_func_uint32_t_u_u((l_457 , ((safe_sub_func_int16_t_s_s(((g_516 == (p_23 = g_96.f8)) || g_20), p_26)) , 0xA67ABEF2L)), (((safe_sub_func_uint16_t_u_u((func_27((safe_add_func_uint8_t_u_u((g_300 && l_556.f0), (safe_sub_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(g_264, g_20)) != p_25), 0UL)), p_26)) , l_610), 0L)))), p_26, g_96.f0, p_24, p_25) & g_96.f7), g_72.f0)) ^ 2L) | p_24)))) & g_85.f0), 0x7B8D68D9L)) > p_26), g_72.f2))))
                    {
                        unsigned char l_611 = 0UL;
                        int l_614 = 0x9FCF5BEFL;
                        ++l_611;
                        ++l_620;
                    }
                    else
                    {
                        if (l_569.f2)
                            break;
                        if (l_574)
                            continue;
                    }
                    g_96.f7 |= (-1L);
                }
                else
                {
                    l_554 = (safe_lshift_func_uint16_t_u_u(func_64(((safe_rshift_func_uint16_t_u_s(65526UL, 14)) && (0x01728E7CL == (((l_574 & (safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u(((safe_unary_minus_func_uint32_t_u(4294967286UL)) || (safe_lshift_func_uint16_t_u_s(g_72.f4, 3))), ((!l_587) != (safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((+(g_72.f7 = (((((-6L) ^ l_479) & g_47) < p_25) & g_445))) | p_26), p_23)), g_315))))), 0x4308C313L))) >= g_298) > g_47))), l_477.f4), l_475));
                }
                for (l_618 = 8; (l_618 != (-26)); l_618--)
                {
                    return p_25;
                }
            }
            l_656 ^= (((safe_sub_func_uint32_t_u_u((p_23 = (safe_lshift_func_uint16_t_u_s((g_111 , (safe_rshift_func_uint16_t_u_u(g_96.f8, 1))), 15))), l_616)) & ((safe_sub_func_int16_t_s_s((1UL > (l_569.f7 = ((((((l_480 ^= (safe_rshift_func_int16_t_s_u(p_24, ((((l_536.f0 || (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(l_569.f7, (safe_rshift_func_uint16_t_u_u((+p_26), 3)))), g_72.f6))) != g_72.f4) != 1UL) < 0x991AD895L)))) ^ l_569.f4) == (-1L)) > (-1L)) || l_477.f1) ^ 1L))), 65535UL)) && 0xF86749AFL)) , (-2L));
            g_662--;
        }
        else
        {
            int l_673 = 1L;
            short l_688 = 0x713CL;
            struct S0 l_698 = {0x15CEL,-4L,606,0,49,5958,336,-3107,32};
            char l_746 = 1L;
            union U1 l_750 = {0xF242L};
            unsigned char l_751 = 0xD4L;
            short l_754 = 1L;
            if ((g_617 > (safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(p_23, (l_458 = l_477.f3))), (((safe_mod_func_uint16_t_u_u((g_96.f3 == (~g_151)), 5L)) <= (g_96.f7 = (safe_sub_func_uint32_t_u_u((l_673 |= p_23), (safe_rshift_func_int16_t_s_u(((g_85 = g_85) , func_64((g_96.f1 = 8L), l_660)), g_318)))))) != 0xA7L)))))
            {
                int l_676 = 0L;
                int l_685 = 0x5E3888EDL;
                char l_686 = 1L;
                struct S0 l_701 = {0xABD8L,0L,100,1,46,1548,406,-8828,554};
                unsigned short l_706 = 65535UL;
                unsigned l_748 = 1UL;
                int l_753 = 0L;
                if (func_67((l_676 >= (safe_unary_minus_func_int32_t_s((((p_23 = ((l_458 = (l_673 , ((8L ^ ((l_685 = (safe_sub_func_uint16_t_u_u((g_680 = p_24), func_38((l_477 , (p_25 > (g_264 <= (func_67((func_64(((safe_rshift_func_int8_t_s_u((func_64((g_445 ^= g_72.f7), (safe_rshift_func_int16_t_s_u(0x07CBL, l_673))) == l_556.f6), 7)) || p_23), g_617) , g_216), l_618, g_72, p_25) , 0x01DE3194L)))), p_25, g_85, g_298, p_25)))) && l_686)) | 3L))) < g_20)) ^ g_111) , p_23)))), p_25, g_687, g_47))
                {
                    unsigned l_692 = 4294967295UL;
                    int l_695 = 0L;
                    if (((g_468 , (!p_23)) >= ((g_200++) >= (g_166 |= p_25))))
                    {
                        struct S0 l_691 = {0x68C8L,-8L,329,0,79,7754,772,4260,1326};
                        g_72 = l_691;
                    }
                    else
                    {
                        g_687 = g_96;
                        l_457 = l_477;
                        l_692 = 1L;
                    }
                    for (g_617 = 7; (g_617 == 25); ++g_617)
                    {
                        l_615 = g_111;
                    }
                    g_72.f7 = (g_298 ^ (g_662--));
                    g_72 = l_698;
                }
                else
                {
                    struct S0 l_702 = {0x1E60L,1L,1501,0,54,10565,704,8752,335};
                    int l_752 = 1L;
                    g_687 = l_698;
                    for (g_238 = 0; (g_238 >= (-20)); g_238 = safe_sub_func_int8_t_s_s(g_238, 1))
                    {
                        char l_705 = 6L;
                        int l_709 = 0xCD02C7FDL;
                        l_702 = l_701;
                        l_458 |= (((g_687.f8 | g_96.f2) || 6UL) & (0x882CL == (((((func_27(p_25, (l_702.f0 , (((l_701.f7 = (~(safe_rshift_func_int16_t_s_s(g_72.f7, 1)))) >= g_96.f1) == p_26)), p_26, p_23, g_315) > p_25) | p_23) > 0x9DA8L) & 7L) == g_687.f5)));
                        l_701.f7 = (!(func_38(((l_705 < l_706) && ((g_445 = (0UL <= p_23)) != ((safe_add_func_uint32_t_u_u(l_706, (((g_687.f8 > (l_709 = ((g_111 < func_67(g_54, ((-1L) && l_701.f8), l_701, g_687.f4)) , g_687.f0))) , g_96.f7) , g_54))) || 0xCE7CL))), p_24, g_85, g_96.f3, p_26) , 6L));
                        if (g_662)
                            continue;
                    }
                    if ((l_701.f7 = (((safe_rshift_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s(((((g_714 ^ p_23) == p_25) == 0x9C3E4026L) == l_610), (p_24 == g_96.f0))) == func_27(p_25, (p_24 , l_659), l_698.f7, l_702.f8, l_616)) < 1UL), 12)) , l_702.f6) && g_151)))
                    {
                        int l_718 = (-10L);
                        int l_726 = (-5L);
                        l_661 = (((((safe_lshift_func_int8_t_s_s((g_493 ^ (safe_unary_minus_func_int8_t_s((l_718 = g_54)))), 0)) ^ (g_687.f0 |= ((((l_698.f7 &= (safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((l_723 = g_687.f4) >= (safe_sub_func_int16_t_s_s(p_23, (g_315 != l_726)))), g_96.f3)), ((p_26 = 1UL) & (g_238 = p_24))))) > l_701.f5) || p_24) > g_96.f1))) && p_25) || g_687.f8) , g_96.f3);
                        l_702 = (g_151 , g_687);
                    }
                    else
                    {
                        l_698.f7 = (l_673 = (l_685 = (1UL <= ((l_702.f8 > 0xE2L) , g_687.f5))));
                    }
                    for (l_615 = 8; (l_615 <= (-17)); l_615 = safe_sub_func_int8_t_s_s(l_615, 4))
                    {
                        unsigned l_738 = 0xD572776CL;
                        union U1 l_745 = {-1L};
                        l_659 = func_38((l_685 &= (((safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((g_166 < (0x5B84L & func_27((255UL < 0xFBL), ((p_26 > ((safe_rshift_func_uint16_t_u_s((g_714 |= (safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(func_67(g_138, l_738, l_556, (safe_mod_func_uint8_t_u_u((l_746 = (((safe_rshift_func_uint16_t_u_s((((((l_745 , p_24) ^ 0UL) , l_556.f4) < 1L) , p_25), g_138)) <= 6L) , l_702.f7)), 0x33L))), l_615)), 7))), g_56)) , g_96.f0)) != p_24), l_747, l_698.f0, l_748))))), l_749)) , g_96.f4) & l_477.f0)), g_662, l_750, l_751, g_216);
                        g_757++;
                        g_72.f7 = l_659;
                        l_698 = l_698;
                    }
                }
            }
            else
            {
                unsigned l_769 = 4294967294UL;
                int l_770 = 0x58668E99L;
                for (g_281 = (-13); (g_281 <= 29); g_281 = safe_add_func_uint16_t_u_u(g_281, 6))
                {
                    l_660 ^= g_298;
                    l_770 &= (l_531 , (g_756 = (safe_sub_func_uint16_t_u_u((((safe_mod_func_int32_t_s_s(((func_67(l_457.f0, func_60(l_698.f2, l_750, (func_67(p_24, g_72.f5, g_96, (g_96.f6 < (safe_rshift_func_uint16_t_u_s(((0x67B0F103L && l_768) & g_619), l_769)))) , g_662)), g_687, l_556.f5) & 1L) || p_23), 0x71BD8BF0L)) == g_238) & 0x62L), 0L))));
                }
            }
        }
    }
    g_96.f7 |= g_714;
    if ((l_477.f0 ^ g_218))
    {
        int l_789 = 0x43296106L;
        unsigned l_798 = 4294967295UL;
        g_72 = (((g_680 < ((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((-1L), ((safe_sub_func_uint16_t_u_u((g_714 = g_777), (safe_mod_func_int32_t_s_s((g_757 < (l_615 |= (p_24 || ((-10L) ^ l_618)))), (safe_sub_func_int8_t_s_s(((safe_add_func_int32_t_s_s(func_27(((g_788 |= (p_25 != (((safe_mod_func_uint16_t_u_u((g_96 , 4UL), 0x2920L)) < 1L) != g_264))) , 0x85L), l_477.f0, p_26, l_789, g_687.f6), p_25)) , 0x76L), p_26)))))) == l_790))), p_25)) <= g_687.f0)) , l_477) , l_477);
        l_798 = ((p_25 ^ ((0xD9FCL != ((safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(p_24, 11)), (p_26 , p_25))), g_56)) ^ func_67(g_96.f1, l_790, ((((((l_797 != 0xCC8CL) >= l_789) >= g_687.f2) <= g_714) , p_23) , g_687), g_54))) , g_20)) ^ g_687.f6);
    }
    else
    {
        unsigned char l_802 = 0x9CL;
        int l_803 = 0xF4F740EEL;
        int l_809 = (-9L);
        int l_810 = (-2L);
        int l_811 = 0xBBF3CBF7L;
        int l_812 = 0xDE07F754L;
        int l_813 = (-10L);
        int l_814 = 0x6B01930BL;
        int l_816 = (-1L);
        int l_817 = 1L;
        unsigned char l_821 = 5UL;
        union U1 l_834 = {0x8626L};
        int l_898 = 0x004D1EBFL;
        struct S0 l_901 = {1L,-1L,983,1,51,500,663,-8466,1601};
        unsigned l_967 = 4294967294UL;
        for (g_756 = (-29); (g_756 < (-5)); g_756++)
        {
            unsigned short l_801 = 4UL;
            unsigned char l_806 = 0x1BL;
            union U1 l_807 = {0L};
            struct S0 l_808 = {1L,-1L,1745,0,26,11221,552,3235,857};
            l_803 = ((l_801 = 0x8D19E56BL) && l_802);
            l_803 = (func_67(((safe_mod_func_int16_t_s_s((func_60(l_806, l_807, l_790) > l_807.f0), (p_25 || l_790))) || (0xAFBCE9CEL || (((func_33(p_26) ^ l_802) == p_24) & g_687.f7))), g_687.f2, l_808, p_23) <= 0xC3L);
        }
        g_818--;
        if (l_821)
        {
            short l_822 = 0L;
            int l_823 = 0x45E5BE57L;
            int l_824 = (-6L);
            int l_825 = 0xAA319762L;
            int l_826 = 2L;
            int l_827 = 0L;
            union U1 l_833 = {0x2AAAL};
            struct S0 l_875 = {0x043DL,0x35L,1733,1,7,10769,721,8750,823};
            ++g_828;
            l_661 |= ((safe_rshift_func_uint16_t_u_u(((l_834 = l_833) , g_687.f5), (safe_rshift_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s(func_64(p_26, func_64(((safe_add_func_uint32_t_u_u(l_833.f0, (func_60(g_818, (l_824 , (l_536 = l_833)), l_817) <= 255UL))) , l_615), p_23)), 5)) <= 1UL) && 0x5D29E268L), 1)))) ^ l_618);
            for (l_797 = 8; (l_797 == 6); l_797 = safe_sub_func_int16_t_s_s(l_797, 6))
            {
                unsigned short l_854 = 0x82AFL;
                int l_859 = 1L;
                for (g_714 = (-24); (g_714 == 12); g_714 = safe_add_func_int32_t_s_s(g_714, 3))
                {
                    int l_847 = 0xF4939368L;
                    l_813 = (safe_lshift_func_uint16_t_u_u(l_847, 7));
                    l_859 = (((safe_add_func_uint32_t_u_u((p_26 & (safe_sub_func_int16_t_s_s((l_854 = (safe_sub_func_int32_t_s_s((g_777 ^= g_756), g_72.f3))), (safe_lshift_func_int8_t_s_s(0L, 2))))), g_687.f0)) != (1UL & (--p_23))) && p_25);
                    return g_238;
                }
                l_661 |= (safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(((l_872 = (safe_sub_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((-5L), p_24)) , (safe_add_func_uint8_t_u_u((g_264 || l_810), l_817))), (g_85.f0 |= (-1L))))) != g_662), 3)), (safe_rshift_func_uint8_t_u_s(l_822, 6)))), g_687.f5));
                l_875 = g_687;
                l_810 &= l_812;
            }
            return g_687.f7;
        }
        else
        {
            int l_890 = 1L;
            int l_891 = (-1L);
            union U1 l_893 = {-1L};
            struct S0 l_940 = {8L,-1L,40,0,11,1541,683,2835,782};
lbl_945:
            l_817 = func_60((safe_lshift_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(func_67(func_38(((safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint8_t_u_u(p_24, 0x00L)) && (safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((g_166 >= 0UL), ((l_890 = (p_25 | (((((l_615 &= (safe_lshift_func_uint8_t_u_s((((l_809 , ((0x82CEL < (func_64((g_72.f1 | func_64(p_24, g_238)), g_166) , l_802)) || p_23)) ^ p_25) ^ 0x69B19D47L), 4))) & 2L) , l_890) <= 8L) != 0x1644FA84L))) > p_23))), l_891))), 2)) || g_662), g_238, g_85, p_26, g_755), p_24, g_687, p_26), p_25)) != p_24), p_26)), g_892, l_891);
            if ((l_477.f7 = func_38((0UL ^ 0x2FL), g_72.f2, l_893, (((l_810 = (~(l_816 &= g_72.f0))) <= g_216) , (((safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((g_96.f2 &= 4294967295UL) , ((+g_96.f6) ^ g_777)), p_25)), l_477.f3)) & g_680) || 8UL)), l_898)))
            {
                struct S0 l_902 = {0x0479L,0x2CL,1569,0,60,781,862,-8655,486};
                int l_903 = 0L;
                union U1 l_912 = {6L};
                for (g_96.f0 = 21; (g_96.f0 >= 7); --g_96.f0)
                {
                    unsigned l_904 = 0x6609A336L;
                    l_902 = l_901;
                    l_904++;
                    if (l_904)
                        continue;
                }
                l_902.f7 = (p_25 , ((l_903 = ((safe_unary_minus_func_int32_t_s(((p_25 == ((safe_sub_func_int16_t_s_s(l_901.f5, g_96.f8)) < ((g_687.f5 &= (p_23 = 0xF94F29EFL)) | (safe_add_func_uint8_t_u_u(((l_912 , (((((g_72.f7 = 0x046888DCL) < (safe_rshift_func_int8_t_s_s((l_817 = l_458), (l_803 && 1L)))) > g_617) | 0xFFF5L) , 0xAF2410E9L)) ^ g_200), g_281))))) , 9L))) < 0x81L)) | l_536.f0));
                return l_902.f4;
            }
            else
            {
                struct S0 l_915 = {0x3A6BL,0x7DL,1981,0,41,6096,210,11055,1600};
                int l_916 = 1L;
                int l_917 = 0L;
                int l_918 = 0L;
                int l_919 = (-1L);
                int l_921 = 3L;
                unsigned short l_937 = 1UL;
                l_915 = l_901;
                --g_922;
                for (g_300 = 0; (g_300 < 15); g_300 = safe_add_func_int8_t_s_s(g_300, 5))
                {
                    int l_929 = 5L;
                    int l_934 = 0xB5D20C78L;
                    struct S0 l_944 = {-1L,0x5DL,1651,1,3,2878,705,-157,1782};
                    l_934 &= ((safe_sub_func_int32_t_s_s((!0x5048D588L), (!(l_803 ^= (((((func_64(((l_811 = g_47) & l_929), p_26) , (255UL != (func_64(g_920, ((l_917 &= (p_24 = ((safe_lshift_func_uint8_t_u_u((((l_821 <= (safe_sub_func_int16_t_s_s((((0x1BC0L < p_26) == p_26) || 0x43E8L), p_25))) > p_23) ^ 247UL), 4)) < g_687.f0))) , 4294967288UL)) | p_26))) || 0x8997BFEFL) ^ 1UL) & g_56) != p_25))))) & 0xD337L);
                    if (((safe_lshift_func_uint8_t_u_u(l_934, (p_23 ^ l_891))) > g_72.f8))
                    {
                        ++l_937;
                    }
                    else
                    {
                        struct S0 l_941 = {1L,0L,42,1,46,9546,694,10100,1435};
                        l_941 = l_940;
                        if (l_814)
                            break;
                        l_944 = (((p_25 = l_898) || (!g_238)) , l_944);
                        if (l_901.f2)
                            goto lbl_945;
                    }
                    g_96.f7 |= ((safe_mod_func_int16_t_s_s((p_25 != g_47), 65530UL)) || g_445);
                }
            }
            for (l_802 = 0; (l_802 <= 21); ++l_802)
            {
                unsigned l_950 = 0x689DD39BL;
                int l_970 = 5L;
                l_477.f7 &= ((0x2AAC4329L | l_950) != (safe_add_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((func_60(l_950, l_536, (safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(g_828, (l_950 || (g_85 , ((((safe_add_func_int8_t_s_s(l_950, ((1UL >= 4294967291UL) , l_477.f5))) > p_23) , 252UL) > p_26))))), l_452))) > 65529UL), 4294967295UL)) <= l_661), g_298)));
                l_812 = ((g_300 == (func_60(((((safe_mod_func_uint16_t_u_u(((l_970 |= func_27(l_967, l_790, (safe_sub_func_int32_t_s_s((g_72.f7 = 2L), p_26)), p_23, l_950)) != l_950), l_950)) == 0L) < l_901.f6) || (-10L)), l_536, g_971) , 0x8B8AL)) && (-1L));
                l_661 = 0x1101178DL;
            }
        }
    }
    g_756 = 0xD1C8F42BL;
    return l_477.f0;
}







static unsigned func_27(char p_28, char p_29, short p_30, unsigned char p_31, unsigned p_32)
{
    return p_30;
}







static char func_33(unsigned char p_34)
{
    struct S0 l_37 = {0x6DD3L,0xD2L,19,0,35,2130,701,-3028,360};
    int l_50 = 0x9515ED76L;
    char l_53 = 0xEBL;
    for (p_34 = 1; (p_34 < 52); ++p_34)
    {
        int l_46 = 3L;
        int l_48 = 0x097E65FBL;
        int l_49 = (-1L);
        int l_51 = 0x51885A1EL;
        int l_52 = 0x91450187L;
        char l_55 = 0L;
        unsigned short l_57 = 0x54C5L;
        union U1 l_234 = {0x5841L};
        g_445 &= (l_37 , func_38((l_37.f7 = (safe_add_func_uint32_t_u_u(((--l_57) | func_60((func_64(func_67((g_72 , (g_72.f3 >= (safe_sub_func_uint8_t_u_u((((l_48 != (0xAB77L > ((l_51 , (l_50 ^= p_34)) && g_72.f2))) < (g_72.f7 ^ 3L)) | l_55), p_34)))), p_34, l_37, l_48), g_20) > p_34), g_85, g_20)), g_20))), g_96.f8, l_234, p_34, g_96.f8));
        if (g_54)
            continue;
        if (l_55)
            break;
    }
    return l_37.f2;
}







static int func_38(unsigned short p_39, unsigned short p_40, union U1 p_41, char p_42, unsigned p_43)
{
    unsigned short l_241 = 0x2845L;
    struct S0 l_254 = {-4L,4L,197,0,43,10959,369,1655,1272};
    unsigned char l_262 = 5UL;
    struct S0 l_292 = {0L,0xE0L,1157,0,27,1689,319,6909,1927};
    int l_296 = 0L;
    int l_304 = 0x3447BCE4L;
    int l_305 = 0x2B97F08BL;
    unsigned short l_340 = 0x02C5L;
    char l_400 = 0x14L;
lbl_261:
    for (g_218 = (-21); (g_218 > 33); ++g_218)
    {
        int l_237 = (-7L);
        int l_239 = 1L;
        int l_240 = 0x4EEF04CFL;
        struct S0 l_244 = {0x655AL,0x30L,1371,1,31,6494,379,298,1065};
        --l_241;
        l_244 = g_96;
    }
    for (g_85.f0 = 0; (g_85.f0 >= (-20)); g_85.f0--)
    {
        unsigned l_249 = 0UL;
        int l_258 = 0x4E5ABEBFL;
        int l_293 = 0x64097018L;
        int l_301 = 0x0A9B597BL;
        int l_302 = 0xBF7E247BL;
        int l_303 = 0xDB443416L;
        int l_306 = 0xDD38E617L;
        int l_307 = (-1L);
        int l_308 = 0xBDC434A2L;
        int l_310 = 0x7C229614L;
        int l_311 = 0L;
        int l_313 = 0x92A9F23FL;
        int l_406 = 0L;
        struct S0 l_407 = {0xD080L,0x0FL,496,0,73,2108,922,-5928,471};
        union U1 l_409 = {0x78A5L};
        unsigned l_428 = 1UL;
        for (g_166 = 0; (g_166 <= 15); g_166 = safe_add_func_int8_t_s_s(g_166, 6))
        {
            unsigned l_257 = 7UL;
            int l_294 = (-5L);
            int l_295 = 0x0CF0C47CL;
            int l_297 = (-1L);
            int l_299 = 0x5874EE3FL;
            int l_309 = 5L;
            int l_312 = (-1L);
            int l_314 = 0x6846D414L;
            --l_249;
            for (g_72.f1 = 0; (g_72.f1 != (-8)); --g_72.f1)
            {
                int l_263 = 0x36C56402L;
                int l_278 = 0x8D1871B9L;
                g_96 = l_254;
                for (g_96.f0 = (-2); (g_96.f0 <= 7); g_96.f0 = safe_add_func_int8_t_s_s(g_96.f0, 3))
                {
                    char l_284 = 0xF5L;
                    unsigned l_287 = 4294967295UL;
                    l_258 = (l_257 = p_43);
                    for (p_40 = 0; (p_40 > 23); p_40++)
                    {
                        if (g_85.f0)
                            goto lbl_261;
                        l_263 = l_262;
                        if (g_264)
                            continue;
                        if (g_96.f2)
                            break;
                    }
                    if ((safe_sub_func_uint8_t_u_u((!((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u((safe_rshift_func_uint8_t_u_s(p_39, p_43)))), (safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(0x05L, (g_281 |= (++g_216)))), (func_64((((l_284 ^ g_96.f0) || (((1UL == (safe_mod_func_int16_t_s_s(l_287, g_96.f8))) > (safe_lshift_func_int16_t_s_u(g_96.f5, l_249))) == p_42)) == 8UL), p_43) != l_263))))), p_41.f0)) , g_281)), 0x8DL)))
                    {
                        g_281 = (l_254.f7 > p_41.f0);
                        l_258 = g_238;
                        g_96.f7 |= (safe_lshift_func_uint16_t_u_u(p_41.f0, 9));
                    }
                    else
                    {
                        if (g_96.f5)
                            break;
                    }
                }
                l_258 = l_262;
                l_292 = (l_254 = g_96);
            }
            ++g_315;
            g_72.f7 = func_64(g_96.f8, l_292.f0);
        }
        if ((((((p_42 <= g_318) <= l_293) <= (safe_add_func_uint32_t_u_u((g_96.f6 > ((safe_add_func_uint32_t_u_u((g_96.f3 = func_64(g_72.f8, l_308)), (l_292.f4 > ((safe_rshift_func_int16_t_s_u(g_20, 12)) >= 0x8EL)))) >= 0x00L)), 0x7B01F773L))) >= 0x0EL) == 5L))
        {
            unsigned short l_337 = 0x264FL;
            g_281 = (((+((((((g_216 &= (l_296 |= 0xD6L)) == func_64(p_39, (safe_lshift_func_int16_t_s_u(((l_292.f7 = (((((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(l_306, (g_96.f2 | (func_64(p_42, (+(safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((l_337 ^ (g_96.f8 , ((safe_rshift_func_uint8_t_u_s((l_337 , (((l_340 = g_151) <= g_72.f6) ^ g_54)), 5)) != g_85.f0))), p_42)), g_96.f7)))) & 1L)))), g_111)) & p_40) > p_40) , p_39) & p_41.f0)) > g_166), g_111)))) | 0xCBE6L) , l_337) || p_39) > g_96.f3)) <= p_42) && l_337);
        }
        else
        {
            struct S0 l_343 = {0xE248L,0x8CL,836,1,53,6055,555,4640,100};
            int l_348 = 0xFEAD80EDL;
            int l_427 = (-1L);
            if ((l_293 = (l_254.f7 = (g_96.f7 |= (l_302 &= (p_41.f0 , (((safe_sub_func_uint8_t_u_u(func_67(g_315, p_41.f0, l_343, l_343.f2), ((safe_rshift_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(((-3L) <= ((l_348 = (g_216 = (l_310 , 246UL))) >= p_43)), l_254.f1)) ^ g_85.f0), 6)) ^ 0xCFDD6B7BL))) && g_216) & 0x51L)))))))
            {
                unsigned char l_361 = 3UL;
                struct S0 l_362 = {1L,1L,1379,0,25,0,721,-9125,2012};
                if ((l_305 = (safe_sub_func_int8_t_s_s(0x3FL, (l_348 = (func_67((p_42 = (g_56 , (p_41 , (safe_add_func_int16_t_s_s((g_56 ^= ((l_361 &= (safe_add_func_uint8_t_u_u(((((safe_lshift_func_uint16_t_u_s(p_42, (safe_mod_func_int8_t_s_s((l_343.f7 = func_67((g_300 = (safe_mod_func_uint32_t_u_u(g_318, l_292.f0))), g_96.f0, ((((p_41.f0 != (p_40 = (g_200 & g_96.f3))) > l_254.f6) == g_96.f4) , l_254), l_343.f0)), p_39)))) == 0x737AL) | p_41.f0) ^ p_41.f0), 9L))) && l_361)), l_292.f8))))), l_306, l_362, p_41.f0) >= g_238))))))
                {
                    for (l_343.f1 = 0; (l_343.f1 < 12); l_343.f1 = safe_add_func_int8_t_s_s(l_343.f1, 6))
                    {
                        g_72.f7 = (safe_mod_func_int8_t_s_s(l_292.f4, (p_42 = 0x29L)));
                        return l_254.f2;
                    }
                    if (p_39)
                        continue;
                }
                else
                {
                    short l_371 = (-8L);
                    int l_372 = 0x128C111FL;
                    l_311 = ((l_362.f7 = (safe_rshift_func_uint8_t_u_s(l_343.f4, 6))) , func_64((g_111 , ((safe_sub_func_uint8_t_u_u(l_307, (l_371 && 0xDED5E2A7L))) < ((func_64(l_362.f0, (p_40 & g_72.f4)) , l_343.f4) , l_361))), g_72.f0));
                    l_372 |= p_43;
                    if (p_40)
                    {
                        char l_383 = (-10L);
                        l_302 = (g_72 , (l_362.f7 = 0xBEFE16E3L));
                        l_362.f7 |= ((0UL > (g_216 ^= l_258)) > g_218);
                        l_362.f7 &= (safe_lshift_func_uint8_t_u_u(g_96.f7, ((l_296 = 0x29L) | (0UL >= (!func_67(p_39, ((g_85 , (safe_sub_func_int8_t_s_s((0L >= func_64(g_218, ((safe_add_func_uint8_t_u_u((+0x7CL), 0x72L)) > p_42))), p_42))) < l_292.f3), g_96, p_39))))));
                        g_96.f7 &= func_64((p_43 , 0x70L), ((p_42 = 0xBFL) <= (((((safe_mod_func_int32_t_s_s(func_64(p_41.f0, l_383), l_371)) && (safe_lshift_func_uint16_t_u_s(l_383, (p_41.f0 = (g_96.f5 || p_41.f0))))) <= g_166) & 0L) >= 0xEB08D935L)));
                    }
                    else
                    {
                        l_313 = 1L;
                    }
                }
                for (l_362.f0 = 18; (l_362.f0 < 25); ++l_362.f0)
                {
                    l_343.f7 ^= l_343.f1;
                }
            }
            else
            {
                unsigned l_390 = 4294967288UL;
                int l_399 = 1L;
                struct S0 l_417 = {1L,-9L,1979,0,4,6817,18,8180,1760};
                if (l_343.f8)
                {
                    g_72.f7 = (safe_add_func_int8_t_s_s((l_390 = (p_42 &= p_40)), ((g_96.f2 | ((p_40 == (g_72.f4 | (safe_sub_func_uint16_t_u_u(p_40, p_40)))) & (safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(p_43, l_310)) , 65529UL), l_343.f5)), g_72.f6)))) > l_399)));
                    l_400 = 0L;
                }
                else
                {
                    unsigned char l_401 = 254UL;
                    struct S0 l_408 = {0x52C1L,-1L,1822,1,62,387,790,2981,1916};
                    l_401 = ((+((g_216 |= g_72.f1) | p_43)) > p_41.f0);
                    if (((safe_add_func_uint16_t_u_u(g_96.f2, (safe_lshift_func_uint8_t_u_u((((g_216 = p_41.f0) ^ ((l_311 >= p_43) & ((((p_40 == func_64((l_343.f1 & (l_406 &= l_292.f7)), l_343.f6)) && (-7L)) < l_292.f6) ^ l_292.f2))) >= 0x2EL), g_209)))) >= p_39))
                    {
                        g_96.f7 = (l_348 || (g_264 >= 0xB1L));
                        l_408 = (p_40 , l_407);
                        if (p_43)
                            break;
                    }
                    else
                    {
                        char l_410 = 1L;
                        struct S0 l_418 = {0x400DL,1L,758,1,44,9312,216,-5227,1472};
                        l_254.f7 = ((l_409 , g_72.f0) != (((l_410 && ((p_43 >= (((safe_sub_func_uint16_t_u_u((p_41.f0 ^ (safe_sub_func_int16_t_s_s(p_42, l_343.f6))), (g_300 | (g_216 = (safe_lshift_func_int8_t_s_s(l_343.f0, l_343.f1)))))) || g_300) >= 1L)) >= 1L)) != p_39) || 0x68BDL));
                        l_418 = l_417;
                    }
                    l_304 = ((((g_96.f3 && (p_43 >= p_43)) > (+(p_39++))) , (safe_lshift_func_int16_t_s_s((((func_67(l_408.f6, (safe_add_func_int8_t_s_s(((0UL != g_298) && p_39), (g_96.f5 , p_42))), g_96, l_417.f8) != 0x0404L) > l_343.f6) >= g_238), g_96.f4))) != l_343.f0);
                    g_96.f7 = p_40;
                }
                l_428++;
            }
            for (g_72.f1 = 27; (g_72.f1 != 0); g_72.f1--)
            {
                for (g_200 = 6; (g_200 <= 48); g_200 = safe_add_func_int8_t_s_s(g_200, 8))
                {
                    return g_54;
                }
                l_302 ^= ((safe_rshift_func_uint8_t_u_s(1UL, ((safe_lshift_func_uint8_t_u_s(g_315, (safe_sub_func_int32_t_s_s(g_218, g_72.f5)))) > (safe_add_func_int32_t_s_s(l_292.f4, (p_41.f0 & g_72.f4)))))) >= (l_407.f5 > (safe_lshift_func_int16_t_s_s(p_40, g_300))));
            }
        }
    }
    return l_254.f7;
}







static unsigned func_60(char p_61, union U1 p_62, int p_63)
{
    int l_86 = 0x6C6A45D3L;
    int l_92 = 0x7EB5F43EL;
    char l_117 = 0L;
    int l_146 = 0xBFB6B4A2L;
    struct S0 l_221 = {0L,0x7EL,2037,1,37,3890,706,-1860,1537};
    l_92 |= (l_86 , (safe_unary_minus_func_uint32_t_u((safe_rshift_func_int16_t_s_s((l_86 , p_62.f0), (safe_lshift_func_uint16_t_u_s(func_67(g_72.f1, l_86, (l_86 , g_72), g_72.f3), g_85.f0)))))));
lbl_127:
    p_63 &= 0x33A12938L;
    if (func_67((safe_unary_minus_func_uint32_t_u(((g_72.f1 = func_64((!l_92), g_85.f0)) != (func_64((safe_add_func_uint8_t_u_u(255UL, p_63)), l_86) & 0x08L)))), ((+(p_62.f0 , p_63)) | g_72.f7), g_96, g_96.f4))
    {
        int l_116 = 0xE8F334EEL;
        struct S0 l_136 = {0x9DE9L,-10L,736,0,81,839,140,-7133,781};
        struct S0 l_202 = {0x60E0L,0x09L,291,0,79,7758,630,8419,951};
        p_63 |= (safe_add_func_uint8_t_u_u(4UL, ((g_96.f4 == (safe_sub_func_int16_t_s_s((1UL & p_61), (g_85.f0 = g_47)))) < g_72.f6)));
        if ((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u(0UL, g_72.f8)) , p_62.f0) | (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((g_111 = g_72.f0), 1)), 7))), (safe_add_func_int16_t_s_s((1UL ^ (+(safe_sub_func_int32_t_s_s(2L, func_64(l_116, g_72.f2))))), l_92)))), 0x87L)))
        {
            unsigned char l_118 = 252UL;
            int l_122 = 0L;
            struct S0 l_123 = {1L,0L,482,0,85,11145,666,9099,694};
            unsigned char l_126 = 0UL;
            unsigned l_160 = 0x072B36A8L;
            int l_203 = (-1L);
            p_63 = l_117;
            if ((l_118 == 0L))
            {
                unsigned l_121 = 8UL;
                l_122 &= ((safe_lshift_func_int8_t_s_s((-1L), 0)) > (((((((g_96.f1 || ((((p_62.f0 && ((-1L) >= l_117)) <= p_61) | 1UL) && 0x65FAL)) <= (l_92 ^ p_62.f0)) <= g_96.f5) , 0x85BF1637L) | l_121) & 0UL) && l_118));
                p_63 = (((l_123 , (safe_sub_func_uint16_t_u_u(p_63, ((func_64(((((l_122 < (g_72.f0 = (-1L))) > (g_85 , p_61)) && (l_126 = ((-2L) >= func_64((g_72.f0 ^ (p_62.f0 && g_85.f0)), l_117)))) | 0x3617L), g_72.f1) ^ 8UL) >= p_61)))) , g_85) , g_96.f5);
                if (l_117)
                    goto lbl_127;
                g_72.f7 = ((~(func_64(g_96.f3, p_63) , func_64(g_96.f6, (l_121 & (l_117 >= g_72.f4))))) && g_72.f7);
            }
            else
            {
                short l_137 = (-2L);
                g_138 &= func_67(g_85.f0, ((l_122 = (((1UL ^ ((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((-8L), (safe_sub_func_int32_t_s_s(((p_63 || ((g_72.f6 , (g_72.f8 & ((p_62.f0 && l_116) ^ 0x24L))) >= p_62.f0)) && p_61), 0x4C9D4284L)))), 65535UL)), p_63)) > 0xD93A861CL)) ^ 1UL) | p_61)) == g_96.f7), l_136, l_137);
            }
            if ((safe_sub_func_uint16_t_u_u(l_136.f4, p_62.f0)))
            {
                short l_145 = 0x04A7L;
                unsigned l_162 = 0x1F0EA391L;
                struct S0 l_163 = {0x9BAEL,7L,110,1,53,230,96,10912,1089};
                if (func_67((((safe_rshift_func_uint8_t_u_s(l_86, ((0x3CL | 0x79L) >= l_92))) , l_118) || ((((255UL ^ (l_145 > p_62.f0)) || l_136.f6) || 4294967291UL) >= 0L)), p_63, g_96, l_146))
                {
                    unsigned char l_152 = 7UL;
                    if (g_96.f7)
                    {
                        g_72 = (g_72.f8 , g_72);
                        l_123.f7 |= 0x6379E6B5L;
                        g_72.f7 &= (safe_sub_func_int16_t_s_s(l_123.f2, (p_62.f0 = p_63)));
                        g_155 = (p_63 = (((-8L) > (g_151 = (g_96.f7 = (g_72.f7 ^= (safe_add_func_int16_t_s_s(p_61, g_72.f5)))))) & (l_152++)));
                    }
                    else
                    {
                        p_63 &= g_96.f6;
                    }
                }
                else
                {
                    short l_161 = 0x7202L;
                    int l_169 = 0L;
                    l_92 = (p_63 = func_67(l_136.f7, (((g_72.f3 || ((g_96.f1 || (safe_lshift_func_int8_t_s_s((g_96.f1 ^= l_86), 0))) != 0xA173L)) <= ((safe_mod_func_uint16_t_u_u(((l_160 = 0xFF555B32L) < 0x61CA15E8L), func_64(l_161, p_63))) != 0UL)) == l_162), g_72, l_161));
                    g_72 = l_163;
                    l_169 = (l_92 ^= ((safe_lshift_func_uint16_t_u_s((~(g_166 ^= (g_96 , ((((g_96.f6 ^ 1UL) && 0x02L) | (l_136.f4 >= (g_72 , g_96.f3))) , p_62.f0)))), (((((safe_lshift_func_uint16_t_u_s(l_161, 13)) , l_123.f8) & l_123.f4) || 3UL) >= p_63))) > 4294967294UL));
                    g_72.f7 = g_72.f2;
                }
            }
            else
            {
                unsigned l_182 = 0x692C9271L;
                struct S0 l_183 = {0xC73AL,0x87L,1458,0,23,4081,627,515,481};
                if ((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u((((p_62.f0 <= g_96.f0) & (safe_sub_func_int8_t_s_s((g_96.f4 && func_67(((safe_mod_func_int16_t_s_s((g_151 < (p_62.f0 < (p_62.f0 > p_61))), (safe_sub_func_uint16_t_u_u((((func_64(g_47, l_182) ^ l_182) >= 0x71L) != (-6L)), 0x768EL)))) & 0x17L), g_138, l_183, g_96.f1)), p_63))) <= 0xACL), p_62.f0)) && g_47) < g_96.f3), g_96.f3)), 255UL)))
                {
                    struct S0 l_186 = {0x73BCL,0xC5L,1049,0,0,6154,124,1727,1759};
                    struct S0 l_201 = {1L,7L,1987,0,47,3084,0,-6937,49};
                    for (l_118 = 0; (l_118 > 28); l_118 = safe_add_func_uint16_t_u_u(l_118, 3))
                    {
                        unsigned l_199 = 0x1B478E88L;
                        l_186 = l_123;
                        l_203 ^= ((safe_add_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(p_62.f0, ((l_123 , func_67((((l_136.f7 = func_67(g_72.f4, func_64((safe_mod_func_uint8_t_u_u((g_72.f4 && (l_186.f7 ^= (safe_lshift_func_uint16_t_u_s((g_200 &= func_64(((func_64((g_96.f1 = l_186.f6), ((l_92 = l_122) , (g_47 && (safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((g_56 | (g_72.f0 == 2L)), g_54)), g_96.f5))))) > l_199) >= l_183.f7), l_123.f7)), p_63)))), 248UL)), g_96.f4), l_201, g_56)) != 0x1EC8D397L) >= l_183.f3), p_63, l_202, p_62.f0)) | g_138))) , 0UL), (-1L))) ^ l_183.f1);
                    }
                    for (l_186.f0 = (-25); (l_186.f0 <= (-19)); l_186.f0++)
                    {
                        g_72.f7 |= g_72.f4;
                    }
                }
                else
                {
                    int l_208 = 0x8F5A85F1L;
                    int l_217 = 0x47712989L;
                    for (l_126 = (-16); (l_126 < 43); ++l_126)
                    {
                        g_96.f7 = (g_72.f7 = l_208);
                        if (l_92)
                            continue;
                    }
                    --g_209;
                    g_96.f7 ^= (l_208 || (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((l_217 |= (g_216 ^= func_64((g_209 , ((p_61 <= ((l_208 == ((0x4A00EA68L > (+((((-6L) && g_96.f0) < g_96.f4) <= g_56))) & l_136.f6)) != g_72.f0)) > l_136.f1)), p_61))), g_96.f0)), g_72.f5)));
                }
            }
            --g_218;
        }
        else
        {
            l_221 = l_136;
        }
        p_63 = p_61;
        return l_221.f4;
    }
    else
    {
        unsigned short l_222 = 0x2488L;
        int l_233 = 0x6520A05FL;
        p_63 = (((l_222 == g_72.f7) <= g_96.f1) , (safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((((g_72.f2 | func_64(p_62.f0, (safe_add_func_int32_t_s_s(p_63, (((l_233 |= ((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(g_72.f3, ((l_221.f1 < 1UL) || 65528UL))), g_47)) || 0UL)) && p_62.f0) | l_222))))) != 0x46L) && g_54), l_222)), 0)));
    }
    return l_221.f0;
}







static unsigned short func_64(char p_65, unsigned p_66)
{
    return p_65;
}







static char func_67(char p_68, int p_69, struct S0 p_70, int p_71)
{
    int l_78 = 0x2F47D66AL;
    short l_79 = 2L;
    int l_82 = (-1L);
    int l_83 = 0x1CC5CA36L;
    struct S0 l_84 = {0L,0x24L,335,1,86,4229,686,-8371,900};
    g_72 = ((((l_83 = (safe_unary_minus_func_uint16_t_u(((p_68 > l_78) < (l_82 = ((((g_72.f1 && l_78) ^ p_70.f1) , (0xA5L & (l_79 && l_79))) , (p_70.f0 ^= (safe_rshift_func_int8_t_s_s(0x3BL, l_78))))))))) , l_83) | g_72.f3) , g_72);
    l_84 = p_70;
    return g_72.f6;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_72.f0, "g_72.f0", print_hash_value);
    transparent_crc(g_72.f1, "g_72.f1", print_hash_value);
    transparent_crc(g_72.f2, "g_72.f2", print_hash_value);
    transparent_crc(g_72.f3, "g_72.f3", print_hash_value);
    transparent_crc(g_72.f4, "g_72.f4", print_hash_value);
    transparent_crc(g_72.f5, "g_72.f5", print_hash_value);
    transparent_crc(g_72.f6, "g_72.f6", print_hash_value);
    transparent_crc(g_72.f7, "g_72.f7", print_hash_value);
    transparent_crc(g_72.f8, "g_72.f8", print_hash_value);
    transparent_crc(g_85.f0, "g_85.f0", print_hash_value);
    transparent_crc(g_96.f0, "g_96.f0", print_hash_value);
    transparent_crc(g_96.f1, "g_96.f1", print_hash_value);
    transparent_crc(g_96.f2, "g_96.f2", print_hash_value);
    transparent_crc(g_96.f3, "g_96.f3", print_hash_value);
    transparent_crc(g_96.f4, "g_96.f4", print_hash_value);
    transparent_crc(g_96.f5, "g_96.f5", print_hash_value);
    transparent_crc(g_96.f6, "g_96.f6", print_hash_value);
    transparent_crc(g_96.f7, "g_96.f7", print_hash_value);
    transparent_crc(g_96.f8, "g_96.f8", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_300, "g_300", print_hash_value);
    transparent_crc(g_315, "g_315", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    transparent_crc(g_445, "g_445", print_hash_value);
    transparent_crc(g_468, "g_468", print_hash_value);
    transparent_crc(g_493, "g_493", print_hash_value);
    transparent_crc(g_516, "g_516", print_hash_value);
    transparent_crc(g_617, "g_617", print_hash_value);
    transparent_crc(g_619, "g_619", print_hash_value);
    transparent_crc(g_662, "g_662", print_hash_value);
    transparent_crc(g_680, "g_680", print_hash_value);
    transparent_crc(g_687.f0, "g_687.f0", print_hash_value);
    transparent_crc(g_687.f1, "g_687.f1", print_hash_value);
    transparent_crc(g_687.f2, "g_687.f2", print_hash_value);
    transparent_crc(g_687.f3, "g_687.f3", print_hash_value);
    transparent_crc(g_687.f4, "g_687.f4", print_hash_value);
    transparent_crc(g_687.f5, "g_687.f5", print_hash_value);
    transparent_crc(g_687.f6, "g_687.f6", print_hash_value);
    transparent_crc(g_687.f7, "g_687.f7", print_hash_value);
    transparent_crc(g_687.f8, "g_687.f8", print_hash_value);
    transparent_crc(g_714, "g_714", print_hash_value);
    transparent_crc(g_755, "g_755", print_hash_value);
    transparent_crc(g_756, "g_756", print_hash_value);
    transparent_crc(g_757, "g_757", print_hash_value);
    transparent_crc(g_777, "g_777", print_hash_value);
    transparent_crc(g_788, "g_788", print_hash_value);
    transparent_crc(g_818, "g_818", print_hash_value);
    transparent_crc(g_828, "g_828", print_hash_value);
    transparent_crc(g_892.f0, "g_892.f0", print_hash_value);
    transparent_crc(g_920, "g_920", print_hash_value);
    transparent_crc(g_922, "g_922", print_hash_value);
    transparent_crc(g_971, "g_971", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
