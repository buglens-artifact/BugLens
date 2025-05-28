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



static int g_27 = 0xBDD7770BL;
static unsigned short g_71 = 1UL;
static unsigned short g_72 = 65535UL;
static unsigned g_94 = 1UL;
static short g_107 = (-3L);
static unsigned char g_132 = 253UL;
static unsigned char g_149 = 1UL;
static int g_187 = 0L;
static volatile short g_188 = (-6L);
static unsigned short g_189 = 0x44C1L;
static int g_191 = 0L;
static char g_219 = 0L;
static int g_306 = 0xE36DBBD3L;
static unsigned char g_310 = 0x1CL;
static int g_334 = 0L;
static unsigned short g_387 = 1UL;
static int g_425 = 0x3A89F367L;
static unsigned short g_468 = 0x6451L;
static unsigned g_508 = 0UL;
static int g_543 = 9L;
static int g_615 = 5L;
static short g_684 = 0xA19BL;
static int g_705 = 0x6954A7FEL;
static int g_715 = (-1L);
static char g_783 = 0L;
static unsigned g_826 = 0x31AD093BL;
static volatile short g_918 = 9L;
static unsigned char g_952 = 255UL;
static unsigned g_997 = 0UL;
static volatile int g_999 = 0x37AA6D77L;
static int g_1025 = (-6L);
static int g_1119 = 0xB58402F5L;
static volatile char g_1186 = 0xCCL;
static unsigned char g_1212 = 0xAEL;
static unsigned g_1222 = 0x1DCFDDF8L;



static short func_1(void);
static unsigned func_6(unsigned p_7, int p_8);
static unsigned func_9(int p_10, unsigned p_11);
static int func_12(int p_13, unsigned short p_14);
static int func_15(char p_16, unsigned char p_17, unsigned short p_18);
static char func_20(unsigned p_21, char p_22, unsigned short p_23);
static int func_28(unsigned short p_29, char p_30);
static unsigned short func_31(int p_32, char p_33, unsigned short p_34, int p_35, unsigned p_36);
static unsigned func_37(short p_38, unsigned p_39);
static int func_40(unsigned p_41);
static short func_1(void)
{
    unsigned short l_19 = 65532UL;
    unsigned char l_785 = 0x2CL;
    unsigned l_1324 = 7UL;
    int l_1325 = (-8L);
    l_1325 = ((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(((((func_6(func_9(func_12(func_15((((((((l_19 ^ func_20(((safe_rshift_func_int16_t_s_u(0xF985L, (safe_unary_minus_func_uint16_t_u(g_27)))) , ((func_28(func_31((l_19 , ((func_37(l_19, g_27) , (safe_add_func_int16_t_s_s(l_19, ((((safe_mod_func_int16_t_s_s(0x4629L, g_72)) , g_27) | g_188) & g_72)))) , g_191)), g_219, g_219, g_219, l_19), g_508) >= g_543) | l_19)), l_19, g_543)) == l_19) != l_19) != 0UL) <= l_19) >= l_785) | l_785), g_543, g_543), l_19), g_1025), g_1025) != g_1025) , l_1324) , g_997) , 0xD1L), g_543)) | 0xA334AC35L), l_1324)) >= g_543);
    return l_1325;
}







static unsigned func_6(unsigned p_7, int p_8)
{
    unsigned l_1301 = 0x49E899ACL;
    unsigned l_1310 = 0x28F1DE8AL;
    short l_1322 = (-5L);
    int l_1323 = (-1L);
    g_1119 ^= (!(+func_31(((safe_sub_func_int32_t_s_s(func_15((safe_rshift_func_uint8_t_u_s(((safe_add_func_uint32_t_u_u(l_1301, (safe_lshift_func_int8_t_s_u(l_1301, (safe_div_func_uint32_t_u_u((p_7 , (safe_add_func_int16_t_s_s(((((func_15(l_1301, (safe_sub_func_uint32_t_u_u(0x6B82E040L, (g_508 & p_7))), l_1301) <= l_1301) == 0L) || l_1301) < p_7), p_7))), p_7)))))) || (-8L)), l_1301)), l_1310, p_7), (-8L))) , 0xD955B343L), g_1025, l_1310, g_1025, p_7)));
    g_1119 = ((g_1212 = (safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((((!(((func_28(g_187, (safe_unary_minus_func_int8_t_s(p_7))) , ((g_684 <= (func_40((((l_1323 = (safe_add_func_uint8_t_u_u((0L < ((g_107 = (0x420EL < (((((g_219 = ((safe_lshift_func_int16_t_s_s((((safe_div_func_int16_t_s_s((l_1310 > (-1L)), l_1322)) , g_1119) || 0xC6L), p_8)) || p_8)) , 0L) || g_1222) < g_189) < p_8))) ^ l_1301)), g_387))) > g_1025) | g_191)) , 65530UL)) | p_8)) ^ 7UL) < l_1322)) <= 0xC389086BL) <= p_8), g_783)), l_1322))) > (-9L));
    return l_1301;
}







static unsigned func_9(int p_10, unsigned p_11)
{
    unsigned char l_1290 = 1UL;
    unsigned l_1291 = 0UL;
    p_10 &= (func_20(g_425, l_1290, p_11) , l_1290);
    l_1291 = 0x6AB84073L;
    for (g_334 = 12; (g_334 == (-7)); g_334 = safe_sub_func_uint32_t_u_u(g_334, 2))
    {
        short l_1294 = 0xC4F0L;
        l_1294 ^= (0xD7L | (0xF2L != 0x24L));
        return l_1290;
    }
    return p_11;
}







static int func_12(int p_13, unsigned short p_14)
{
    short l_820 = 0xF167L;
    int l_821 = 9L;
    short l_877 = 0xB89CL;
    int l_885 = 0x33901583L;
    int l_980 = 0x23FBCF84L;
    int l_998 = 0L;
    unsigned l_1022 = 0x7DB0A309L;
    unsigned short l_1117 = 65526UL;
    int l_1146 = 0x1A9A333AL;
    unsigned short l_1157 = 65535UL;
    short l_1225 = 0L;
    int l_1252 = (-1L);
    if (((l_821 = (l_820 ^= (safe_div_func_uint32_t_u_u(p_13, (+0xDFB355A3L))))) || (g_826 = (0xE92A3D42L > (safe_rshift_func_int16_t_s_s((((l_820 ^ (l_821 = ((0x84D5E80FL <= (safe_lshift_func_uint8_t_u_s((l_821 , p_13), 2))) >= (((l_820 , 0L) >= g_187) >= g_27)))) ^ g_107) || p_13), 1))))))
    {
        unsigned short l_831 = 5UL;
        g_615 = (safe_lshift_func_int8_t_s_s((g_188 ^ (l_831 == (-10L))), l_820));
        return g_310;
    }
    else
    {
        unsigned l_836 = 0xD063B484L;
        int l_845 = (-6L);
        unsigned l_848 = 0x343D702DL;
        short l_876 = 0x9225L;
        int l_930 = 0x80B5C6D7L;
        unsigned l_981 = 4294967289UL;
        int l_1058 = 0L;
        short l_1059 = 1L;
        unsigned l_1184 = 0x20CAFA96L;
        short l_1203 = 0x51F7L;
        char l_1289 = (-6L);
        if ((safe_sub_func_uint8_t_u_u(255UL, (((l_836 && (0xCCL != l_821)) && (func_15((l_836 ^ (safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(g_306, ((((safe_lshift_func_uint16_t_u_u((((~(safe_mod_func_int8_t_s_s((+(func_37(((l_845 ^= func_40(p_14)) , (((safe_add_func_int32_t_s_s(0x85614F24L, l_848)) <= p_14) == l_836)), g_334) , g_826)), g_425))) , l_820) & p_13), 11)) > g_219) | g_219) != p_13))), 252UL))), l_836, g_468) < 0x73BEL)) || g_72))))
        {
            unsigned char l_855 = 6UL;
            int l_878 = 0x64B91F18L;
            for (g_94 = (-1); (g_94 > 47); g_94++)
            {
                unsigned short l_854 = 0x06CAL;
                int l_856 = 0xC00D0ABAL;
                l_856 = (safe_mod_func_int32_t_s_s(((safe_unary_minus_func_uint32_t_u(l_854)) ^ (p_13 , (((p_14 <= 0xC721C440L) , (((g_191 || (((!((((g_72 & (p_14 ^ 0UL)) , ((l_854 , 0L) == (-3L))) && 0L) == l_820)) > g_306) < 3UL)) ^ g_306) , 0x2786L)) <= l_855))), g_189));
                for (l_836 = 0; (l_836 <= 33); l_836 = safe_add_func_int32_t_s_s(l_836, 3))
                {
                    unsigned l_879 = 6UL;
                    for (g_71 = (-2); (g_71 <= 24); ++g_71)
                    {
                        unsigned short l_865 = 5UL;
                        p_13 |= ((p_14 | (g_615 ^= p_14)) || (safe_rshift_func_int8_t_s_u((g_94 < (safe_sub_func_uint8_t_u_u((p_14 > (l_848 == (g_826 , (+(p_14 >= l_855))))), p_14))), 2)));
                        l_865 = g_715;
                        g_334 ^= g_468;
                        l_821 = ((safe_mod_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(p_14, (safe_lshift_func_int8_t_s_s(((g_191 = ((p_13 & (((safe_mod_func_uint8_t_u_u((p_13 && ((g_27 , (((l_855 , ((safe_div_func_int16_t_s_s((l_876 < (l_821 , 0xE148C93FL)), (((l_878 = ((((g_387 ^= ((g_72 ^= (g_826 , 0UL)) >= 6L)) <= l_877) >= (-1L)) , 0xE44B78A2L)) | g_310) | l_879))) <= 2L)) && g_425) > l_845)) >= 5UL)), l_865)) , 0x89L) | (-8L))) >= l_855)) || p_13), p_14)))), g_508)) != l_879);
                    }
                    g_191 = 1L;
                }
                p_13 ^= g_94;
            }
        }
        else
        {
            unsigned char l_895 = 0x49L;
            unsigned l_914 = 4294967290UL;
            int l_916 = 1L;
            unsigned short l_990 = 0x5DA4L;
            unsigned l_1098 = 0x0141EF85L;
            unsigned l_1110 = 4294967290UL;
            unsigned char l_1137 = 0xE3L;
            char l_1150 = 1L;
            if (((p_13 && (l_845 &= func_37((p_14 <= (safe_unary_minus_func_int32_t_s((p_13 |= 0x857AADEDL)))), g_615))) && g_27))
            {
                int l_892 = 0xCF9C6814L;
                int l_917 = 0x14602716L;
                g_334 = ((safe_sub_func_int16_t_s_s((!(g_107 >= (((safe_sub_func_int8_t_s_s((g_219 = (l_885 == (((((((((p_13 , ((l_821 ^= ((g_188 != (((g_543 & (safe_div_func_uint8_t_u_u(g_508, (safe_sub_func_int8_t_s_s(((((safe_lshift_func_int8_t_s_s((l_892 = (l_848 >= (-7L))), (((((((safe_add_func_uint16_t_u_u(0x2BBBL, l_876)) <= l_895) || 0L) , g_107) >= l_877) & l_895) , p_13))) && g_191) && (-1L)) && g_425), g_72))))) | p_14) < 0x5CL)) > l_836)) != l_877)) , g_187) == p_13) >= l_895) ^ g_132) != g_425) >= 0x1855FB8FL) <= g_387) , l_892))), p_14)) && p_13) , 0L))), g_189)) != 0x9FL);
                if ((safe_div_func_uint8_t_u_u(g_132, p_13)))
                {
                    short l_915 = 0L;
                    if (((p_14 & (p_14 , (safe_sub_func_int16_t_s_s(func_31((((l_821 = ((func_37((((((((l_916 = ((safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u((((safe_div_func_int32_t_s_s((safe_div_func_int8_t_s_s(func_40((g_715 >= 0UL)), (((safe_lshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u(p_13, (safe_add_func_uint16_t_u_u(((g_306 >= (((l_892 || ((l_914 != g_468) | l_821)) , g_684) > 0x83L)) && (-1L)), g_783)))), 0)) >= 0x965FA7B3L) , 247UL))), g_334)) ^ p_14) , l_915), p_13)) || p_13), p_14)) && 0x36DBA307L)) <= l_836) & g_508) >= l_914) == g_468) != g_310) != g_508), g_387) >= p_13) != 0x52L)) , l_836) & p_13), p_13, g_334, l_914, g_715), (-2L))))) , p_14))
                    {
                        l_917 = 0x1E7C1B1BL;
                    }
                    else
                    {
                        g_918 |= 0xECC8CE6EL;
                        g_425 &= p_13;
                        g_191 = l_917;
                    }
                }
                else
                {
                    char l_929 = 1L;
                    int l_931 = (-1L);
                    l_845 = (safe_sub_func_int32_t_s_s(g_918, 5L));
                    for (l_845 = (-21); (l_845 > 6); l_845 = safe_add_func_uint32_t_u_u(l_845, 8))
                    {
                        l_917 = (func_28((func_15((((safe_sub_func_uint16_t_u_u((func_40(l_836) , p_13), ((p_13 >= (g_425 <= ((safe_div_func_uint16_t_u_u(((g_715 != ((0x6245C5F8L > 0L) & (safe_sub_func_int32_t_s_s(p_14, 1UL)))) || p_13), 0x15B5L)) >= g_615))) <= l_929))) & g_783) && l_845), p_13, p_14) ^ 0x6883L), p_14) , p_14);
                        p_13 = (((!p_14) != l_929) & ((0x620EL < (func_20(g_425, (l_930 ^= g_615), p_13) && (l_930 ^= ((l_931 = 65535UL) || 0xA835L)))) >= 8L));
                    }
                }
            }
            else
            {
                unsigned l_932 = 0x1018BFE8L;
                l_845 = (g_918 | l_932);
                l_916 = (1UL > (l_821 = ((l_932 < (safe_sub_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(p_14, l_836)) >= g_107), l_876))) , p_14)));
            }
            if (((safe_rshift_func_int16_t_s_s(((func_40(l_930) && (g_387 = (((safe_add_func_uint8_t_u_u(p_14, p_13)) , (((g_715 <= (4294967295UL != (safe_add_func_uint32_t_u_u(p_14, (((g_94 ^ p_13) >= g_94) & 0xA5AAL))))) > l_821) || g_149)) ^ l_916))) <= 0x8163EE39L), l_895)) & l_885))
            {
                short l_953 = 1L;
                unsigned l_954 = 0x01CE0DB4L;
                int l_991 = 3L;
                int l_996 = 0x1700F88DL;
                int l_1020 = 0x7202777BL;
                int l_1021 = 9L;
                char l_1041 = 1L;
                l_954 = (((((safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(func_15(((func_20((safe_unary_minus_func_int8_t_s(l_845)), (p_14 > l_820), p_14) , (safe_mod_func_uint32_t_u_u(0x5B876FA1L, g_684))) & (safe_mod_func_int32_t_s_s(g_826, (l_914 , g_952)))), g_543, l_953), l_953)), 0L)) < 0L) ^ p_13) > 0xBF29L) || 0x9BL);
                l_821 ^= p_13;
                l_821 = (safe_sub_func_int8_t_s_s((((4294967286UL ^ (((safe_lshift_func_int16_t_s_s(0xEC93L, ((g_132 = l_820) > (((!g_715) | (~g_189)) != (safe_lshift_func_uint16_t_u_s(((g_387 && (0xA4L < l_821)) , ((safe_add_func_uint32_t_u_u((((g_826 = (0x4587FF6BL == 6UL)) , 6UL) , 0x1C7A167BL), l_953)) , p_14)), 0)))))) ^ l_954) || l_877)) , 255UL) & g_918), 0UL));
                if (func_31(((g_107 = ((((safe_sub_func_int16_t_s_s((!l_836), 0xD06AL)) , l_885) >= (~l_836)) == ((safe_lshift_func_int8_t_s_s(0x97L, (+1L))) == g_107))) , (((((safe_div_func_int32_t_s_s(1L, p_14)) && 246UL) , l_930) , p_14) | 3UL)), p_14, p_14, p_13, l_954))
                {
                    unsigned short l_969 = 65535UL;
                    if (l_969)
                    {
                        char l_972 = 0x87L;
                        l_972 = (g_191 = (safe_sub_func_int16_t_s_s((p_14 ^ (p_13 = p_14)), g_826)));
                    }
                    else
                    {
                        g_615 = (safe_sub_func_uint8_t_u_u((g_310 &= ((func_37(g_132, ((safe_mod_func_uint8_t_u_u(p_13, (-4L))) > (safe_lshift_func_int8_t_s_u((((safe_unary_minus_func_uint32_t_u(l_895)) | ((((l_930 = (l_980 = l_916)) == l_981) , (safe_rshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u((!(safe_rshift_func_uint8_t_u_u((l_930 & (safe_lshift_func_uint8_t_u_u(g_684, 2))), g_387))), 0xD56EL)), p_13))) | 0xE4L)) & l_990), g_783)))) != 0UL) && 0xDAAFL)), l_895));
                    }
                    l_998 |= func_15(g_191, (p_14 , (p_13 , (((l_991 = 0x15F3L) | ((g_310 ^ ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(l_969, p_13)), 5)) > (l_996 = (l_821 &= l_845)))) & (l_916 &= p_14))) & g_952))), g_997);
                    g_425 = ((0xFAL & (((((-4L) == g_94) != l_969) && ((l_914 , 5L) != 0x98A0L)) || (g_997 = g_705))) , g_999);
                    for (g_306 = (-28); (g_306 > 23); g_306++)
                    {
                        l_991 = (p_14 ^ 65533UL);
                        if (p_13)
                            continue;
                        if (p_14)
                            continue;
                        g_191 = p_14;
                    }
                }
                else
                {
                    unsigned l_1036 = 0x978D107DL;
                    int l_1046 = 0x9C58D424L;
                    l_991 = g_27;
                    if ((l_1022 |= (((safe_div_func_int16_t_s_s(1L, g_310)) != (((~(safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(g_27, (-1L))), (l_1021 = ((~0xB66C13B5L) , (safe_lshift_func_int16_t_s_u(((l_991 ^= (l_996 = (safe_rshift_func_int16_t_s_s(0x17C5L, 12)))) ^ (~((((g_705 > ((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((0x6DL || ((+(safe_add_func_int16_t_s_s((l_1020 = (safe_rshift_func_int8_t_s_s(g_826, l_990))), 2L))) > p_14)), l_821)), g_684)) && g_94)) != 0UL) >= p_13) >= g_310))), g_188))))))) < 0UL) , g_508)) || 0xC8L)))
                    {
                        l_1020 = (((g_387 = g_715) | (safe_rshift_func_int8_t_s_u(g_1025, (((g_918 && (((safe_add_func_int32_t_s_s(g_94, p_13)) || ((+((((safe_sub_func_uint8_t_u_u(((l_916 &= (g_149 = 0UL)) == (g_468 > (l_991 != (safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(p_13, 4294967288UL)) , 255UL), 7))))), p_14)) & 0x58L) > 1L) & l_1036)) | 4294967295UL)) <= g_705)) >= p_13) || l_877)))) & l_998);
                    }
                    else
                    {
                        int l_1051 = 0x3C61874EL;
                        g_191 |= 0x0A65E290L;
                        g_425 = (safe_mod_func_int8_t_s_s(0xA5L, p_14));
                        p_13 = (safe_add_func_uint32_t_u_u((l_930 = (l_1036 >= ((func_31(func_37(p_13, (l_1041 <= func_40(((safe_rshift_func_int8_t_s_s((p_14 , l_980), p_14)) , ((!(g_107 |= (l_1046 <= (g_310 <= ((((safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(5L, l_1051)), 0x9FL)) | 1L) != p_13) != g_191))))) < p_13))))), p_13, g_310, p_14, l_1051) < l_914) > l_1046))), 0x01A2656AL));
                        l_991 &= (safe_mod_func_uint8_t_u_u(g_705, (g_72 || (safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s(p_14, p_14)), func_37(l_998, p_13))))));
                    }
                    l_845 = g_187;
                }
            }
            else
            {
                unsigned l_1096 = 1UL;
                int l_1118 = 0xD75DE663L;
                l_1059 = ((l_1022 > (g_615 = p_13)) , l_1058);
                for (g_468 = 0; (g_468 > 19); g_468 = safe_add_func_uint32_t_u_u(g_468, 7))
                {
                    unsigned short l_1071 = 65535UL;
                    int l_1097 = 7L;
                    p_13 &= g_425;
                    l_916 ^= ((safe_add_func_int32_t_s_s(0xC0BF059CL, ((((g_189 & p_13) <= (+((((safe_lshift_func_uint16_t_u_s(((safe_unary_minus_func_uint8_t_u(((((safe_sub_func_int16_t_s_s(l_990, (g_684 = (safe_add_func_int16_t_s_s(0L, l_1071))))) < (safe_lshift_func_uint16_t_u_s((p_13 <= ((g_149 = (0xEDL & l_895)) == g_543)), 15))) == 0xC3L) , p_14))) ^ 0xF7L), 11)) && p_13) , 248UL) != g_1025))) > g_72) >= g_72))) | p_14);
                    if ((safe_div_func_uint16_t_u_u(l_998, (((g_107 = (((+(4L >= g_999)) > (((safe_lshift_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(0xFAL, (l_1097 = ((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_s(((g_27 | ((safe_rshift_func_uint8_t_u_u((((l_821 = (((safe_rshift_func_int8_t_s_s(l_1071, 0)) == (safe_sub_func_uint8_t_u_u(g_705, l_1071))) == (safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((((g_71 == 0L) & p_13) ^ g_543), 11)), l_1022)))) < 65535UL) >= g_72), g_425)) || l_1096)) | 5UL), 3)) != 1L) | 0x196EL), 2)), 4)) , l_895)))), l_1071)) != l_848) & 4L)) , g_997)) && p_13) , l_1098))))
                    {
                        unsigned short l_1099 = 0xC5A2L;
                        l_1099 = func_40(g_684);
                        return l_1096;
                    }
                    else
                    {
                        unsigned char l_1102 = 0UL;
                        l_930 = (safe_div_func_int32_t_s_s(l_1102, g_918));
                    }
                    if ((((!(safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((func_15(p_14, l_836, g_94) , (0x06L && (l_998 = ((0xABL <= p_14) > (((l_998 , ((p_13 , g_187) , l_980)) == (-1L)) | l_990))))), g_826)), l_1022)), g_310))) || g_615) , l_1098))
                    {
                        if (g_149)
                            break;
                    }
                    else
                    {
                        l_1110 = func_15(l_1096, (l_1097 = l_916), (safe_unary_minus_func_uint32_t_u(g_715)));
                        return p_14;
                    }
                }
                l_845 |= (g_1119 = (safe_div_func_uint32_t_u_u((p_13 ^ (func_28(((g_952 &= (l_914 < g_918)) , (p_14 = (safe_div_func_int16_t_s_s((((p_14 <= (l_1118 = (((safe_mod_func_uint32_t_u_u(l_1022, g_107)) || (!((l_1058 >= (func_20((((g_94 | (l_916 = l_1096)) >= l_885) , l_1117), l_930, g_72) | 4294967293UL)) | 0x98D96049L))) & p_14))) , 1L) || 0xC0D8AEAEL), 0xCCF2L)))), g_997) > l_980)), p_13)));
            }
            if (((((0xFB1A7483L || ((safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(g_508, 0)), (safe_add_func_uint32_t_u_u((p_14 > l_1117), func_40(p_13))))) > g_715)) & 0xEDC8L) >= g_615) == g_715))
            {
                short l_1130 = 3L;
                int l_1149 = 0x261C9352L;
                int l_1156 = 0x27DDD77AL;
                int l_1158 = 0x28CCE803L;
                l_845 ^= (p_13 >= l_848);
                l_930 ^= g_334;
                g_334 = ((safe_add_func_int16_t_s_s(l_916, (((l_1130 , (safe_sub_func_uint16_t_u_u((p_13 , (((safe_rshift_func_int16_t_s_u((p_13 >= l_885), 14)) | g_71) | (l_1130 && (safe_sub_func_uint16_t_u_u(l_1137, (l_876 > g_543)))))), g_189))) | 0xF588L) > 0L))) == 0UL);
                if ((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s(((0x390EFAB9L != (safe_sub_func_uint8_t_u_u(((func_28((g_71 ^= g_543), g_310) > (p_14 < l_1130)) >= (safe_mul_func_int16_t_s_s(l_1146, ((safe_sub_func_uint8_t_u_u((g_952 ^ g_543), g_783)) <= 0x0FL)))), 0UL))) <= g_952), l_845)), p_14)))
                {
                    l_1158 |= ((p_14 &= (l_1149 = 0xC00AL)) , ((l_1150 = func_28(g_425, p_13)) | (safe_rshift_func_uint16_t_u_u(g_1025, ((safe_unary_minus_func_uint32_t_u((((l_1058 , p_13) & (l_821 = (l_1156 ^= (safe_add_func_int8_t_s_s((l_1149 = (l_998 = (246UL != ((p_14 , 0xE6DBL) | 0xDE4AL)))), l_981))))) & l_1157))) & l_845)))));
                    g_425 |= g_27;
                    return p_13;
                }
                else
                {
                    p_13 = (safe_lshift_func_uint8_t_u_u((l_1157 == g_1119), 5));
                }
            }
            else
            {
                char l_1163 = 0xFEL;
                int l_1179 = 1L;
                unsigned l_1202 = 0UL;
                char l_1230 = 8L;
                for (g_187 = 0; (g_187 < 10); g_187++)
                {
                    unsigned char l_1172 = 0xC7L;
                    int l_1176 = 0x43816C24L;
                    if (((l_1163 < (g_684 = (g_188 && ((l_916 |= (safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s(l_845, ((g_783 |= (safe_rshift_func_uint16_t_u_u((((safe_add_func_int8_t_s_s(l_1172, (safe_mod_func_uint32_t_u_u(4294967291UL, (+((safe_unary_minus_func_int8_t_s(l_1176)) == (g_191 != (((p_13 >= (p_13 > 1UL)) , p_14) , l_877)))))))) , 0x41L) , p_13), g_999))) > 0xDAL))), l_820))) , p_13)))) >= g_189))
                    {
                        if (g_543)
                            break;
                        p_13 = l_877;
                    }
                    else
                    {
                        if (g_543)
                            break;
                    }
                    p_13 = (((safe_lshift_func_int16_t_s_s(p_13, 15)) || (l_1179 |= g_191)) | p_14);
                }
                if (l_1058)
                {
                    unsigned l_1195 = 0xC193078AL;
                    int l_1204 = (-7L);
                    for (l_1110 = 0; (l_1110 == 55); ++l_1110)
                    {
                        char l_1185 = 0xE2L;
                        p_13 = ((safe_lshift_func_int8_t_s_s(0x1EL, 1)) < func_31(g_615, g_71, (l_1184 || 4294967293UL), p_13, l_1185));
                        if (g_149)
                            break;
                        p_13 = g_1186;
                    }
                    l_1179 = (safe_rshift_func_int8_t_s_u(0x45L, (l_1204 = ((safe_rshift_func_int16_t_s_u((p_14 <= (8UL || (safe_mod_func_int8_t_s_s((l_821 == (safe_div_func_int8_t_s_s(func_37(l_1022, l_1195), (safe_add_func_int32_t_s_s(((((l_1202 = (safe_lshift_func_int16_t_s_u(g_952, ((safe_rshift_func_int8_t_s_u(p_13, 0)) | 1UL)))) != g_334) < g_684) < 0xA694L), l_1203))))), l_980)))), g_952)) > l_1163))));
                    if ((safe_unary_minus_func_int8_t_s(p_14)))
                    {
                        p_13 |= g_132;
                        g_1119 = 0x5057180DL;
                        p_13 = (l_1146 |= (1UL && (((safe_rshift_func_int16_t_s_s((p_14 & ((p_13 && (g_188 | ((safe_rshift_func_int16_t_s_u(((~((safe_mod_func_int16_t_s_s(((l_1204 <= p_14) , g_1212), g_310)) < (((((safe_lshift_func_int8_t_s_s(((g_189 < g_387) ^ g_1212), p_14)) , p_14) & 3L) >= p_13) > l_848))) , 0x64D0L), 7)) < (-1L)))) & g_1212)), g_715)) , p_14) && 4294967295UL)));
                    }
                    else
                    {
                        short l_1219 = 0xA9E4L;
                        l_1204 = (0xFEL | ((((safe_rshift_func_int8_t_s_s(((((((safe_div_func_uint16_t_u_u(((0xE324486BL ^ ((l_821 = ((l_1219 ^ (p_13 , (4UL ^ 65535UL))) & ((((g_132 = g_783) != (safe_sub_func_uint16_t_u_u((g_189 || 0xF491L), g_1222))) > 0L) <= g_1212))) >= p_14)) != p_13), l_1219)) >= l_1179) & 0x7ECF7C6AL) > l_1219) , p_14) , l_885), p_13)) , l_1219) , l_1204) <= g_189));
                        g_615 &= ((l_998 = l_981) > ((p_14 , (safe_div_func_uint16_t_u_u(((l_916 ^= l_1137) & l_914), g_705))) && (l_916 = l_1195)));
                    }
                    g_1119 |= l_1225;
                }
                else
                {
                    short l_1231 = (-2L);
                    p_13 = (((safe_mod_func_uint32_t_u_u((l_1117 , (g_71 >= ((safe_mod_func_uint16_t_u_u(l_1230, g_27)) || p_13))), g_952)) & (l_1231 == 0xFDL)) != ((!(safe_add_func_int8_t_s_s(g_543, 0xCBL))) == p_14));
                    g_1119 = (g_334 |= (safe_add_func_int8_t_s_s(((!(((safe_lshift_func_int16_t_s_s(g_715, 14)) < ((safe_div_func_uint8_t_u_u((g_1025 < (safe_lshift_func_int16_t_s_s(l_1231, 13))), func_40(g_715))) & (-7L))) || (safe_sub_func_uint16_t_u_u((((p_14 , (((safe_lshift_func_uint16_t_u_s(func_40(((safe_add_func_int32_t_s_s((g_425 = g_705), ((l_821 = ((safe_lshift_func_int16_t_s_s(func_37(func_37((safe_add_func_int32_t_s_s((l_998 = 0x379EC52DL), 0xF68C619AL)), l_1117), p_13), 2)) , p_14)) || g_468))) || g_543)), l_1252)) , g_94) ^ p_13)) < l_1231) , p_14), p_13)))) == 0xB3L), g_684)));
                }
                l_916 = (safe_mod_func_int16_t_s_s(func_20((g_826 &= func_40(g_27)), l_1225, l_836), 0xDFB2L));
                g_334 = ((g_684 = 0xD17CL) >= (l_1146 = (safe_mod_func_uint32_t_u_u(g_826, (safe_rshift_func_uint8_t_u_s((l_998 = (func_37(g_952, (safe_mod_func_int16_t_s_s(g_94, p_14))) | (p_13 = (safe_unary_minus_func_uint8_t_u(g_425))))), (safe_sub_func_int32_t_s_s(g_952, (safe_div_func_int16_t_s_s(g_468, p_14))))))))));
            }
            p_13 |= g_508;
        }
        for (l_845 = 16; (l_845 != (-17)); l_845 = safe_sub_func_uint32_t_u_u(l_845, 1))
        {
            unsigned short l_1287 = 0x45B3L;
            unsigned l_1288 = 4294967295UL;
            l_1146 = func_28((l_845 & (((safe_sub_func_int16_t_s_s((((l_1288 |= func_37((l_821 = ((((safe_mod_func_int8_t_s_s((g_783 = (safe_unary_minus_func_uint16_t_u((p_14 = (safe_lshift_func_int16_t_s_u(g_1212, 13)))))), 0x86L)) < func_37(l_821, ((g_71 = l_877) , (1L & (p_13 < ((l_930 ^= (safe_div_func_uint32_t_u_u(((g_71 , (!(safe_div_func_uint32_t_u_u((+((safe_div_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((safe_div_func_int16_t_s_s(l_1022, p_13)), 9L)) && l_876), p_13)) >= 8L), 0x3D72L)) ^ g_1186)), 0xB60C2767L)))) , l_1287), p_13))) | g_1222)))))) , (-2L)) < g_1119)), p_13)) != g_715) || g_149), 65526UL)) || g_615) , p_14)), l_1289);
            return p_13;
        }
    }
    p_13 |= g_705;
    return p_14;
}







static int func_15(char p_16, unsigned char p_17, unsigned short p_18)
{
    char l_790 = 0x5BL;
    unsigned l_799 = 3UL;
    int l_804 = (-6L);
    int l_817 = 0x2FD68A29L;
    l_804 = (safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(g_310, (l_790 != (((g_783 = (0x9DL ^ (func_37((((((safe_rshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(p_17, l_790)) != (((safe_mod_func_int8_t_s_s(((~(g_71 = l_790)) ^ (g_132 < (l_799 > (safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(0x9A2CL, l_799)) & p_16), p_17))))), l_790)) >= 0x97L) && 0x3BL)), g_705)) > l_799), 5)) & p_16) , p_17) == p_17) < 0xE3L), p_18) > 255UL))) <= 1L) != p_16)))), g_705));
    g_425 = 0xE843DC2DL;
    l_817 ^= (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_s((func_37((((((safe_mod_func_int16_t_s_s(p_18, ((p_16 , (0x58A4L & (((safe_mod_func_uint16_t_u_u(0x46F4L, 0x1C5DL)) == (l_790 > (((safe_div_func_int32_t_s_s((l_804 = 0xE06D9D1AL), l_790)) <= p_16) , 0x87L))) , 7UL))) | l_790))) & g_425) >= l_799) && g_715) , 0x7B86L), l_799) != p_18), l_799)) ^ (-2L)), 6));
    return l_804;
}







static char func_20(unsigned p_21, char p_22, unsigned short p_23)
{
    int l_780 = 0xCC6270C2L;
    int l_784 = 0x5B822827L;
    l_784 = (l_780 = func_31((l_780 < (func_28(((((g_684 = p_21) > ((0x6BL >= 0x32L) & ((+(p_22 ^= (((safe_add_func_int16_t_s_s(l_780, p_23)) <= func_37(p_21, (g_783 ^= g_468))) , g_71))) , p_23))) == g_715) && p_22), l_780) >= l_780)), g_543, l_780, l_784, g_543));
    return l_784;
}







static int func_28(unsigned short p_29, char p_30)
{
    short l_624 = 0x43A8L;
    int l_640 = 0x4AA5A9EBL;
    unsigned l_641 = 1UL;
    unsigned short l_651 = 0x0BE0L;
    unsigned l_668 = 0xE2BC62B3L;
    char l_669 = (-1L);
    int l_682 = (-1L);
    short l_683 = 0xB959L;
    unsigned l_721 = 1UL;
    int l_777 = 1L;
    for (g_468 = 23; (g_468 >= 5); g_468 = safe_sub_func_uint16_t_u_u(g_468, 9))
    {
        unsigned char l_623 = 0x69L;
        l_624 ^= l_623;
        g_191 = (-3L);
    }
    for (g_306 = 0; (g_306 < (-23)); g_306 = safe_sub_func_uint16_t_u_u(g_306, 9))
    {
        short l_631 = 0xFC51L;
        int l_648 = 0x8A2C2046L;
        for (p_30 = 17; (p_30 != (-3)); p_30--)
        {
            unsigned l_642 = 0xE8BFD0AAL;
            int l_649 = 0xEC50F438L;
            unsigned char l_650 = 0UL;
            int l_652 = 0x3B379B81L;
            if ((((((g_132 , ((safe_mod_func_uint32_t_u_u(g_468, ((p_29 & (0x3D4229B6L ^ g_191)) && (l_631 == (safe_add_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(p_29, ((safe_rshift_func_uint16_t_u_u((l_640 = (1L ^ l_631)), 12)) == g_107))), 0x84L)) != l_641), l_642)))))) < p_30)) == (-1L)) & p_29) > g_189) && (-1L)))
            {
                unsigned short l_647 = 6UL;
                short l_653 = (-6L);
                g_425 = (l_641 > (l_640 |= (safe_div_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u(((l_652 |= func_40(((g_107 || (l_648 = (255UL | l_647))) != ((l_631 | (((((p_29 | l_649) <= ((0x27L != (p_29 < g_107)) <= p_29)) & g_219) , p_29) > l_650)) < l_651)))) != l_653), 7)) ^ g_387), 0x5D45A675L))));
            }
            else
            {
                for (g_508 = (-20); (g_508 == 46); g_508++)
                {
                    int l_664 = 0x2E9BFD41L;
                    int l_665 = (-8L);
                    l_665 = ((p_30 , (l_648 = p_29)) || ((+g_543) & ((!l_631) > (l_640 = ((((g_132 | p_29) | 0x44L) <= (((safe_lshift_func_uint8_t_u_s(((safe_mod_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u((~255UL), ((g_219 |= l_650) | p_30))) & g_189) ^ p_30), l_664)) < 0xFEL), 0)) | p_29) , l_624)) < g_543)))));
                }
            }
        }
    }
    l_682 = (g_425 &= (((g_310 , ((safe_sub_func_uint32_t_u_u((l_668 & (l_640 ^= p_29)), l_641)) & (l_669 & ((g_684 = func_40((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(0x1F96CBD7L, p_30)) | (safe_rshift_func_int8_t_s_s((g_219 = ((~p_29) || ((safe_sub_func_uint8_t_u_u((g_387 != p_30), 0x29L)) & 0x51BBEC8AL))), l_682))), 1UL)), 1)), l_683)))) == p_29)))) | l_641) & l_683));
    for (p_29 = 9; (p_29 < 14); p_29++)
    {
        int l_691 = 9L;
        unsigned short l_710 = 0UL;
        unsigned l_716 = 0x7A0C9CC5L;
        int l_728 = (-1L);
        for (g_387 = 2; (g_387 < 58); g_387 = safe_add_func_int16_t_s_s(g_387, 1))
        {
            unsigned l_692 = 0UL;
            int l_718 = 0x645D82A7L;
            if ((l_691 = (safe_lshift_func_uint8_t_u_u(((g_149 != ((g_543 , p_30) || l_691)) , l_692), 7))))
            {
                unsigned l_717 = 5UL;
                int l_743 = 0x5D67B4B7L;
                if (g_684)
                {
                    char l_711 = (-1L);
                    unsigned l_714 = 0x57CAB776L;
                    g_615 = ((((safe_mod_func_uint16_t_u_u((0xAEC0CA38L != (safe_mod_func_int32_t_s_s(1L, (((safe_add_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(((g_219 |= (safe_lshift_func_int8_t_s_s(((g_71 = (+l_692)) == ((safe_div_func_uint32_t_u_u((g_705 &= g_94), (safe_add_func_uint32_t_u_u((g_715 = ((safe_sub_func_uint16_t_u_u((l_710 <= (l_682 = l_711)), l_641)) != (safe_div_func_uint16_t_u_u((p_29 ^ ((g_132 <= g_684) && l_711)), l_714)))), l_716)))) , p_29)), l_717))) > p_29), p_29)) >= g_306), g_187)) <= g_132) , 7L)))), p_30)) <= p_29) , g_684) , l_717);
                    g_191 &= (p_30 != (-6L));
                    l_718 = (-1L);
                }
                else
                {
                    unsigned l_735 = 1UL;
                    unsigned char l_738 = 0UL;
                    int l_757 = 0x8F2F1556L;
                    if ((g_615 = (+(safe_add_func_uint32_t_u_u(((g_219 = p_29) >= (((~(l_721 == (((g_310 = l_691) > ((safe_lshift_func_uint16_t_u_s(l_721, 4)) , 8UL)) < (safe_mod_func_int16_t_s_s(g_705, (l_728 = (safe_rshift_func_uint8_t_u_s(l_692, 3)))))))) || l_718) ^ (safe_mod_func_uint8_t_u_u((((((((((((l_718 == g_27) <= p_30) == 6L) == l_640) , p_30) , l_669) <= g_187) , 4294967290UL) , p_30) | 0L) < l_717), (-2L))))), p_30)))))
                    {
                        l_735 = ((g_615 = g_191) != ((p_29 , p_29) || (safe_mod_func_int32_t_s_s(((safe_div_func_uint16_t_u_u((g_72 = (g_387 , 0x8C6FL)), p_29)) < 0x97L), p_30))));
                        l_743 ^= (p_29 > (~(safe_add_func_int8_t_s_s((l_735 , ((g_219 &= 1L) < ((l_738 = (g_543 , l_692)) || ((g_310 &= ((safe_add_func_int8_t_s_s(func_40((safe_lshift_func_uint8_t_u_u(l_716, p_30))), (p_30 != (-2L)))) != g_615)) , g_72)))), 0xEAL))));
                        if (g_615)
                            break;
                    }
                    else
                    {
                        int l_756 = 0x6A66C8E1L;
                        g_334 = l_691;
                        l_757 = (g_334 = ((((((safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(g_189, ((safe_sub_func_uint16_t_u_u(p_30, l_735)) != (safe_lshift_func_int16_t_s_s((-1L), g_715))))), (g_149 = g_425))) & l_718) , (safe_sub_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_s(func_37((l_718 &= 0xDA5AL), p_30), 3)) & p_29) , l_756), p_30))) && 255UL) , p_30) == g_306));
                        if (g_705)
                            continue;
                    }
                    for (g_425 = 0; (g_425 <= (-20)); g_425 = safe_sub_func_int8_t_s_s(g_425, 3))
                    {
                        int l_760 = 0x767EAAB5L;
                        if (g_468)
                            break;
                        l_743 |= g_27;
                        if (l_692)
                            continue;
                        l_760 ^= p_30;
                    }
                }
                if (l_692)
                    break;
            }
            else
            {
                unsigned l_778 = 0x575AABA5L;
                int l_779 = 3L;
                g_334 = (l_692 & (safe_lshift_func_int16_t_s_s(0xF313L, (((((safe_div_func_int16_t_s_s(((+(l_682 = p_30)) == l_718), 0xCE13L)) , ((l_692 > g_684) > (safe_div_func_int32_t_s_s((l_682 = g_191), 0xBC19C81CL)))) != p_29) < 0UL) , p_30))));
                l_728 |= (safe_add_func_uint32_t_u_u((func_40(g_187) && ((((p_29 > func_37(((safe_div_func_uint32_t_u_u(0x72E624F4L, l_641)) >= (safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(p_30, func_37(((l_682 ^= l_651) | ((l_777 || (((l_778 = (l_651 || 1L)) < l_779) , (-1L))) || g_334)), p_29))), p_29))), p_29)) ^ 0xC9L) , g_149) || p_30)), g_615));
            }
            l_718 = func_40(g_187);
        }
        l_682 ^= l_728;
    }
    return g_219;
}







static unsigned short func_31(int p_32, char p_33, unsigned short p_34, int p_35, unsigned p_36)
{
    char l_273 = 0x2EL;
    char l_282 = 0x37L;
    int l_298 = 0L;
    unsigned l_315 = 0x890B11C7L;
    short l_369 = 0x1698L;
    char l_397 = 1L;
    char l_414 = 0L;
    int l_528 = (-1L);
    unsigned l_614 = 7UL;
    for (g_219 = 0; (g_219 == (-22)); --g_219)
    {
        unsigned l_271 = 0UL;
        unsigned char l_272 = 0xDAL;
        int l_274 = 0xDA19F3F7L;
        unsigned l_284 = 4UL;
        unsigned l_299 = 0x49FD6D78L;
        int l_320 = 5L;
        unsigned l_368 = 4294967295UL;
        int l_378 = (-5L);
        l_274 = (((g_132 >= g_219) , (((safe_add_func_int8_t_s_s(((((0x6F5CL != (safe_rshift_func_uint8_t_u_u(((safe_div_func_int32_t_s_s(g_71, g_132)) == l_271), 5))) ^ l_272) , ((l_273 && (~(g_71 , g_27))) <= p_36)) | l_271), 0x14L)) ^ p_34) , 0x96L)) & p_34);
        if ((p_32 = g_188))
        {
            char l_278 = (-2L);
            int l_281 = 1L;
            g_191 ^= 0x6F2558EAL;
            if (g_72)
            {
                unsigned l_275 = 0xD891B158L;
                int l_283 = (-5L);
                if (g_132)
                    break;
                l_283 = (l_282 ^= func_40(((0x0C104093L || func_37((l_275 > g_132), ((safe_sub_func_int16_t_s_s((+(g_107 = 0xA303L)), (((l_274 >= l_278) || ((l_281 = (safe_rshift_func_uint16_t_u_u((g_189 || 65531UL), 15))) & (l_278 , p_33))) >= g_27))) , g_71))) , 4UL)));
                g_191 = (p_34 , (((l_282 , l_284) > (safe_mod_func_uint32_t_u_u((l_273 | l_271), 0x094BA521L))) <= l_272));
            }
            else
            {
                unsigned char l_287 = 0x21L;
                int l_323 = (-10L);
                if ((p_32 = (g_191 ^= (l_281 = (0x43169765L && l_284)))))
                {
                    short l_297 = 0xF553L;
                    if ((p_32 = (1L < l_287)))
                    {
                        p_32 ^= p_33;
                        if (l_287)
                            continue;
                        if (g_188)
                            break;
                    }
                    else
                    {
                        unsigned short l_290 = 0x5F4CL;
                        p_32 = (safe_add_func_uint32_t_u_u(l_290, (!(+(((func_37((p_34 < ((func_40((l_281 | ((func_40(g_132) <= 254UL) <= p_36))) && (safe_lshift_func_uint8_t_u_s((((safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(g_71, l_287)), p_32)) ^ g_107) >= g_188), p_33))) >= 3UL)), l_297) > g_219) <= 4294967289UL) && g_187)))));
                        g_191 &= 0x7FE98B08L;
                        l_299 = (p_32 = (0xF6E9L || (l_298 = (p_34 , (p_36 , l_297)))));
                        g_191 = (safe_rshift_func_uint8_t_u_s(247UL, 1));
                    }
                    l_298 = (-1L);
                }
                else
                {
                    int l_309 = 5L;
                    unsigned l_322 = 7UL;
                    short l_324 = 0x6F92L;
                    if ((l_287 , func_37(p_36, l_282)))
                    {
                        g_310 |= (func_40((safe_lshift_func_int8_t_s_s(((func_40(((p_35 = ((((safe_sub_func_int32_t_s_s((-8L), (0xD2L == (~((l_281 = 0x7FL) < p_33))))) , (g_306 = func_40(l_287))) & (g_219 > l_287)) >= (safe_rshift_func_uint16_t_u_u((l_278 >= l_309), g_219)))) , 0xDD971F16L)) >= g_219) && (-1L)), g_219))) , p_35);
                    }
                    else
                    {
                        int l_321 = 0x79CEF782L;
                        p_32 = ((safe_mod_func_int16_t_s_s(l_315, g_72)) && (l_274 < (safe_mod_func_int32_t_s_s((((0x1F7334F8L < (((+(l_274 == ((safe_rshift_func_uint16_t_u_u((g_71 |= g_187), 11)) <= ((l_320 = (!l_271)) == l_321)))) , (((p_35 ^ l_322) ^ p_36) || p_35)) && p_36)) == p_35) , p_32), (-9L)))));
                        g_191 = l_282;
                        p_32 &= l_309;
                        if (p_32)
                            break;
                    }
                    if (g_187)
                        continue;
                    l_323 = (l_278 <= 0x2C48C069L);
                    if (l_323)
                    {
                        l_298 ^= l_274;
                    }
                    else
                    {
                        unsigned l_333 = 0x9F9F4B57L;
                        int l_335 = 1L;
                        l_324 = ((l_274 ^= (func_37(l_323, g_310) < 0x72L)) || ((g_72 , l_281) > 0x6B71L));
                        l_335 ^= (safe_sub_func_int8_t_s_s(((g_191 &= (safe_rshift_func_int8_t_s_s(0xC9L, p_33))) == (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(p_35, 0)), (g_334 = l_333)))), p_34));
                    }
                }
                p_32 &= ((g_107 || g_94) == ((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((g_149 , (safe_lshift_func_uint8_t_u_u(0x21L, (g_149 = ((safe_rshift_func_int8_t_s_u((-1L), 6)) & l_271))))), (((l_323 , ((safe_lshift_func_uint8_t_u_s((g_132 = 0xACL), 3)) < (safe_div_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((~g_71), 5)), l_287)), p_33)))) ^ g_310) <= p_33))), 0)), 0xC30BL)) || g_72));
            }
            if (((safe_div_func_uint32_t_u_u(g_72, (((~(p_32 = ((safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u((g_189 = ((6UL || (l_281 = 0UL)) == l_278)), ((safe_rshift_func_int8_t_s_s((p_33 = (safe_lshift_func_uint16_t_u_s(((g_72 < (((safe_mod_func_int8_t_s_s(((((((safe_div_func_int32_t_s_s(g_310, 0x21EEE773L)) , (0xA9D97A7BL < (l_272 , 0xCAEC7879L))) ^ l_299) & p_32) , p_36) , g_219), g_71)) == l_368) , 7L)) , l_369), 10))), 7)) , 4UL))), l_369)) < (-9L)))) <= 0xE3D4D1B9L) && 0x0560L))) && l_271))
            {
                unsigned char l_374 = 251UL;
                int l_377 = 0x354C98D3L;
                unsigned l_429 = 4294967295UL;
                if ((+l_271))
                {
                    return p_33;
                }
                else
                {
                    unsigned l_396 = 4294967287UL;
                    char l_408 = 0xC9L;
                    int l_432 = 0xFAFFB6A5L;
                    l_378 ^= (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(g_132, l_374)), ((g_27 || (0xCFL || (-1L))) , (safe_lshift_func_uint16_t_u_u(((l_274 ^= 0xC1L) >= (l_377 ^= ((l_315 & 0x4BL) | l_320))), 3)))));
                    p_32 = l_377;
                    for (l_369 = 0; (l_369 < 9); l_369 = safe_add_func_uint32_t_u_u(l_369, 8))
                    {
                        short l_390 = 0x9C50L;
                        int l_391 = 0x98D93EB9L;
                        int l_409 = 0x8766C397L;
                        g_334 = l_378;
                        l_298 = ((((safe_sub_func_uint8_t_u_u(((safe_div_func_int16_t_s_s(0xF397L, (safe_sub_func_int8_t_s_s((g_387 = 0x50L), g_94)))) | ((safe_div_func_uint32_t_u_u(g_149, ((l_391 |= l_390) ^ ((safe_sub_func_uint32_t_u_u(((((0x6BC3L >= 9UL) < g_27) == ((safe_add_func_uint16_t_u_u(((l_396 , l_397) , 0x582CL), 0xBFFAL)) <= 0x3774L)) ^ g_71), 0x4D7EAAA6L)) , 0x532CL)))) >= l_281)), l_369)) < l_377) , l_374) , 1L);
                        g_334 = (!(safe_mod_func_uint16_t_u_u((((+(safe_div_func_int32_t_s_s(((l_281 &= l_284) > (g_132 , (l_377 = g_219))), (safe_add_func_uint32_t_u_u(p_33, (safe_add_func_uint8_t_u_u((l_368 && ((safe_add_func_int16_t_s_s(l_408, ((l_409 = 6UL) & (p_35 > (0x13L >= p_32))))) && 0UL)), l_320))))))) == 0xFAL) | l_278), 0xA120L)));
                        if (g_306)
                            break;
                    }
                    for (g_107 = (-11); (g_107 < (-8)); g_107++)
                    {
                        int l_428 = 0xEE5F72F8L;
                        l_377 |= (safe_sub_func_int8_t_s_s(((l_320 = ((l_315 <= ((((g_71 , ((!l_414) , l_278)) > ((safe_add_func_int32_t_s_s((((g_189 > (safe_sub_func_uint32_t_u_u(0x1F02B386L, p_36))) , (safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((g_425 = p_34), (safe_add_func_uint32_t_u_u(p_34, g_94)))) , l_320), 2)), p_32))) , p_34), l_428)) < p_33)) , 6UL) < p_35)) , l_429)) , (-6L)), g_132));
                        p_32 ^= ((l_429 & l_281) & ((l_432 = (safe_lshift_func_int8_t_s_s(g_72, 1))) | (safe_sub_func_int8_t_s_s((+(((g_132 = g_387) && (safe_add_func_int16_t_s_s((l_408 != g_107), ((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s((l_397 > l_414), l_396)), 4294967291UL)) | g_334)))) , 0x13L)), 0UL))));
                    }
                }
                for (p_36 = 0; (p_36 <= 19); p_36++)
                {
                    if ((g_189 != g_187))
                    {
                        return p_32;
                    }
                    else
                    {
                        int l_443 = (-1L);
                        l_377 = (((l_443 >= (!g_94)) ^ g_310) == l_378);
                        if (p_36)
                            break;
                    }
                }
                for (p_32 = 0; (p_32 == (-6)); p_32 = safe_sub_func_uint8_t_u_u(p_32, 1))
                {
                    short l_456 = 0x41F2L;
                    for (p_35 = (-12); (p_35 <= (-29)); p_35--)
                    {
                        l_298 = (0xCE5A61A3L | g_71);
                        g_334 = (safe_rshift_func_uint8_t_u_s(0xB3L, 1));
                    }
                    for (g_387 = 0; (g_387 != 1); g_387 = safe_add_func_int8_t_s_s(g_387, 8))
                    {
                        l_298 |= (((l_281 |= (safe_lshift_func_uint16_t_u_u(p_35, 12))) , g_27) < 6UL);
                    }
                    l_456 = (l_377 = ((safe_sub_func_int16_t_s_s(p_36, p_34)) < ((+g_132) == (+g_219))));
                    if (g_72)
                    {
                        g_191 = p_32;
                    }
                    else
                    {
                        char l_463 = 1L;
                        l_281 = (g_425 |= (l_281 , l_368));
                        l_378 = (safe_sub_func_int16_t_s_s(((p_34 = ((((((-10L) ^ (((g_191 & g_188) != (((safe_lshift_func_uint8_t_u_u((((l_463 < (((p_35 == 1UL) , l_378) & (((safe_rshift_func_uint16_t_u_s(65533UL, (safe_div_func_int8_t_s_s(l_271, 248UL)))) >= (-10L)) | 1UL))) > l_374) == p_36), p_36)) != p_35) && l_456)) == g_94)) != g_132) <= 0x57C05AC7L) > g_107) , l_397)) ^ 0UL), g_468));
                    }
                }
            }
            else
            {
                unsigned char l_471 = 1UL;
                l_471 = (safe_lshift_func_uint16_t_u_u(p_35, func_40(p_35)));
                l_378 = ((0xFEL > (safe_mod_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((safe_div_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s(g_191, ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s(p_32, 12)), 8)) > (safe_lshift_func_uint8_t_u_s((p_34 & (safe_div_func_uint8_t_u_u(0x8FL, 0x89L))), (safe_div_func_uint32_t_u_u(p_32, p_36))))))) && (p_35 || p_34)) , l_281), 65526UL)), l_397)) <= 0xFE035262L), (-1L)))) == p_32);
            }
        }
        else
        {
            char l_490 = (-6L);
            p_32 = (-4L);
            l_490 = g_189;
        }
    }
    for (l_315 = 0; (l_315 != 5); l_315 = safe_add_func_uint8_t_u_u(l_315, 1))
    {
        unsigned l_497 = 0xF138F6F1L;
        char l_498 = (-10L);
        int l_500 = 0x45C8E805L;
        int l_509 = 0xC842EB54L;
        for (p_36 = 0; (p_36 < 52); p_36++)
        {
            if (g_107)
                break;
        }
        for (g_94 = 0; (g_94 > 22); g_94++)
        {
            unsigned char l_499 = 0x77L;
            short l_505 = 0L;
            int l_563 = 1L;
            if (l_497)
            {
                unsigned l_512 = 4294967286UL;
                l_499 = (l_498 && 65528UL);
                l_500 = p_35;
                g_425 = ((safe_sub_func_int16_t_s_s(g_310, ((((g_187 = (l_498 && p_36)) , ((safe_rshift_func_int16_t_s_s(l_505, 0)) || p_36)) , (safe_sub_func_int32_t_s_s(g_508, l_509))) != (safe_sub_func_uint32_t_u_u(((((((8L & (0x28EEL ^ 0x4336L)) <= l_499) & 8L) >= l_505) || l_505) > l_512), 0xA14C7D38L))))) >= 0x75L);
            }
            else
            {
                unsigned short l_515 = 65527UL;
                int l_550 = (-8L);
                char l_591 = 0x4DL;
                if (((safe_add_func_uint8_t_u_u(((l_282 > p_36) , (l_515 && (g_107 , l_273))), (g_149 = (g_132 = ((g_27 & p_34) , (((safe_div_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((((((p_36 | 0x9A3492D3L) && 4294967288UL) && p_33) | 0x6A7CL) , g_334), 247UL)) || g_468), p_33)) || p_34) < l_499)))))) | l_298))
                {
                    p_32 = (safe_rshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((((safe_mod_func_uint16_t_u_u(p_32, (l_528 = p_36))) , ((((+p_36) ^ l_499) == ((g_219 = p_33) || ((g_72 , (safe_add_func_int16_t_s_s((((p_33 = (0xCBE4L < (safe_lshift_func_uint8_t_u_u((g_149 &= l_315), 0)))) , 0UL) && g_334), g_94))) || 1L))) && (-5L))) | p_32) , 1UL), 3)), 0x06L)), 3));
                    for (g_107 = 0; (g_107 > (-6)); g_107 = safe_sub_func_uint8_t_u_u(g_107, 8))
                    {
                        unsigned char l_535 = 0x21L;
                        p_32 = 0x0422A72AL;
                        g_425 = (l_273 , ((0x1211D8B4L >= (l_535 , p_33)) == (-1L)));
                    }
                    g_191 &= ((((p_32 = l_515) | ((safe_unary_minus_func_uint8_t_u((safe_mod_func_uint32_t_u_u(l_315, p_34)))) == (-7L))) <= (safe_add_func_int8_t_s_s(((((safe_lshift_func_uint16_t_u_s(g_132, ((((g_94 < ((l_499 <= ((p_35 &= g_468) , ((g_71 >= p_36) > 1UL))) ^ 0UL)) || l_499) & 0UL) & g_189))) <= p_34) & l_528) ^ l_499), l_500))) <= 4294967295UL);
                    if (g_543)
                    {
                        l_509 = p_33;
                        l_550 = ((safe_add_func_int8_t_s_s(2L, l_500)) >= (safe_div_func_uint32_t_u_u((((p_36 == g_132) && ((p_33 > p_33) <= ((safe_sub_func_uint16_t_u_u(g_191, (l_499 >= (p_32 >= 0x3110DD68L)))) < p_35))) < 0xA9L), 8L)));
                    }
                    else
                    {
                        int l_561 = 1L;
                        l_561 = (safe_sub_func_int8_t_s_s(p_36, (safe_lshift_func_int16_t_s_s(((p_34 <= p_35) , (safe_rshift_func_int16_t_s_u(g_508, 9))), (l_500 = (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(l_528, l_550)), p_35)))))));
                        g_425 ^= (l_550 = (l_515 , 1L));
                        p_32 = (g_334 &= 0x0A52AECCL);
                    }
                }
                else
                {
                    unsigned char l_562 = 1UL;
                    int l_584 = 2L;
                    l_563 = (1L != l_562);
                    p_32 |= p_35;
                    g_191 &= (safe_lshift_func_int16_t_s_s((g_107 |= g_71), (g_387 , (safe_add_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((l_298 ^= (safe_sub_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(p_36, 1UL)) , ((p_33 , (l_562 < l_562)) ^ l_509)), (safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(l_562, 9UL)), p_34))))), 1L)) , p_33), p_36)))));
                    l_584 = (g_188 | (((safe_lshift_func_int8_t_s_u(p_35, ((l_562 >= (safe_sub_func_int32_t_s_s(p_32, g_191))) >= (safe_sub_func_int8_t_s_s(g_334, (g_468 & (((p_34 ^= g_387) >= p_32) ^ l_497))))))) & 0L) > p_35));
                }
                g_191 = (safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((((g_219 = l_515) & ((safe_rshift_func_uint8_t_u_s(((l_591 == l_509) && (+(safe_add_func_uint8_t_u_u(p_36, 0x0CL)))), l_273)) , (l_500 = 0x82L))) | ((g_387 , (safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(p_36, 0xB8L)), g_508))) , g_188)), p_36)), 0x18EFL));
                l_500 &= (l_505 , (((safe_mod_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(g_306, ((l_563 = ((1L > g_72) || (g_219 = (safe_add_func_uint8_t_u_u(p_36, ((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_s((((safe_div_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u((((0x3DL == (safe_div_func_int32_t_s_s(g_425, p_36))) != 65535UL) ^ 0x0CE76D96L), 3L)) <= g_27), g_71)) >= l_614) != g_94), 3)) & 6UL), 2)) != (-2L))))))) || p_32))) , g_132), l_550)) <= g_187) , g_615));
            }
        }
        l_500 ^= (g_615 = l_397);
        for (g_107 = 20; (g_107 != (-4)); g_107 = safe_sub_func_int16_t_s_s(g_107, 9))
        {
            return p_32;
        }
    }
    l_298 &= (-1L);
    for (l_528 = 0; (l_528 < (-13)); l_528 = safe_sub_func_int16_t_s_s(l_528, 8))
    {
        int l_620 = 0L;
        return l_620;
    }
    return g_306;
}







static unsigned func_37(short p_38, unsigned p_39)
{
    unsigned l_220 = 4294967295UL;
    int l_229 = 0xB1093934L;
    volatile unsigned l_230 = 4294967291UL;
    unsigned char l_237 = 0xFEL;
    l_229 = (((((((~func_40(p_38)) , func_40(p_39)) | (safe_sub_func_int32_t_s_s(7L, (safe_rshift_func_uint8_t_u_u((4294967294UL >= g_219), l_220))))) ^ (((safe_add_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u(g_219, 0x49551247L)) , p_39), g_219)), 0xF251L)), 0x75F00DBDL)) == p_38) , p_39)) ^ p_39) != (-9L)) & p_39);
    l_230 = g_188;
    if ((func_40((safe_lshift_func_int8_t_s_s(g_188, (((safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((l_237 , (g_27 == p_38)) != ((l_237 != (l_229 = 0x3B64E573L)) , ((safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(g_107, ((safe_sub_func_uint32_t_u_u(l_237, (g_219 & 0UL))) && 0xA46FL))), p_38)) > l_237))), 0xC098CBD8L)), g_191)) < l_237) > 4294967294UL)))) ^ l_237))
    {
        unsigned short l_258 = 1UL;
        l_229 = (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((l_229 < (((p_39 = ((safe_div_func_uint32_t_u_u((p_39 , ((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(func_40(g_94), (g_219 >= p_39))) > (p_38 = g_219)), 1UL)), g_219)) != l_258)), 0x824FA916L)) <= 7UL)) , 0xCFL) , 0xBE36L)), l_237)), (-5L)));
    }
    else
    {
        l_229 &= 0xC46A1A6AL;
    }
    l_229 ^= (l_220 ^ p_39);
    return g_72;
}







static int func_40(unsigned p_41)
{
    int l_42 = 0x5BF7C295L;
    unsigned l_52 = 4294967295UL;
    int l_53 = 0x0C8E82B3L;
    int l_54 = 0xD5EBAE88L;
    unsigned char l_108 = 255UL;
    unsigned char l_195 = 0x6FL;
    int l_214 = 0L;
    l_54 = (((l_42 <= ((0x21EBC5F9L ^ 0UL) ^ (g_27 != (p_41 , (l_53 = ((safe_lshift_func_uint8_t_u_u(p_41, (safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u((safe_div_func_uint16_t_u_u((p_41 && (p_41 , (safe_rshift_func_int16_t_s_u(l_52, g_27)))), g_27)))), g_27)))) != 0x7DA8L)))))) | l_42) , p_41);
    if ((p_41 ^ (safe_rshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(p_41, l_54)) , (safe_div_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((g_27 | ((((safe_lshift_func_uint8_t_u_u(p_41, 7)) , p_41) >= (((l_54 = p_41) < (-8L)) >= (safe_div_func_uint16_t_u_u(((g_27 && g_27) ^ g_27), 0xDD03L)))) , p_41)) || 0x4AL), g_27)), 0xB172L))), 5L)), l_42))))
    {
        unsigned l_92 = 8UL;
        unsigned l_97 = 4294967293UL;
        unsigned short l_102 = 0x2A14L;
        int l_109 = (-7L);
        unsigned l_112 = 0UL;
        int l_163 = 0xF1956382L;
        if ((safe_lshift_func_int8_t_s_u((g_27 != (g_72 = (g_71 ^= p_41))), 2)))
        {
            unsigned char l_91 = 0x1CL;
            short l_93 = (-1L);
            int l_119 = 1L;
            unsigned l_190 = 0x3EB6FFE1L;
            g_94 = (((safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s(g_71, 1UL)), (safe_lshift_func_uint16_t_u_s(((g_27 == (((l_54 = (safe_mod_func_int16_t_s_s((safe_div_func_int16_t_s_s((p_41 , (((safe_rshift_func_int8_t_s_s((safe_mul_func_int32_t_s_s(g_72, ((safe_sub_func_uint8_t_u_u(g_72, (g_71 > (((safe_div_func_uint16_t_u_u((p_41 < (p_41 ^ g_71)), g_71)) != l_91) <= l_92)))) <= g_72))), g_72)) , 65533UL) != p_41)), g_72)), g_71))) >= l_42) < l_93)) > 0x864CL), 4)))) , 0x9F79L) , p_41);
            if (((1L ^ (safe_div_func_uint16_t_u_u((!0xE6F9L), ((l_97 , ((safe_sub_func_uint16_t_u_u((g_71 = (safe_sub_func_int8_t_s_s(((1L ^ g_71) , (l_92 < g_27)), l_102))), (safe_rshift_func_uint8_t_u_s((l_109 = ((((safe_div_func_int16_t_s_s(((g_107 |= g_72) & p_41), 0xED4FL)) , l_108) <= g_27) ^ l_92)), 4)))) | l_92)) | 0xDDL)))) <= g_72))
            {
                char l_128 = 0xFDL;
                int l_129 = 0xCEF6A3D7L;
                for (g_27 = 0; (g_27 >= (-10)); g_27 = safe_sub_func_int8_t_s_s(g_27, 5))
                {
                    l_112 = g_71;
                }
                if (((safe_add_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u(g_27, 7)) >= (((safe_add_func_uint8_t_u_u((((l_119 = p_41) | (safe_add_func_int16_t_s_s(l_112, (g_71 , (safe_sub_func_uint8_t_u_u((g_107 , ((l_128 = ((safe_mod_func_int32_t_s_s((1L != ((safe_add_func_int32_t_s_s((g_71 || (((g_94 != p_41) , g_107) , 0x40F3L)), g_71)) >= 0x01CFL)), l_102)) & g_71)) <= 0xB997E345L)), 0L)))))) > g_107), p_41)) <= 0x6AAB061DL) > l_91)), 0xF38FA352L)) & l_129))
                {
                    return g_27;
                }
                else
                {
                    l_119 ^= g_71;
                    return l_92;
                }
            }
            else
            {
                int l_131 = 1L;
                char l_135 = 0x7FL;
                unsigned short l_138 = 65529UL;
                int l_139 = 3L;
                unsigned short l_158 = 1UL;
                if ((safe_unary_minus_func_uint32_t_u(g_71)))
                {
                    l_131 = p_41;
                }
                else
                {
                    unsigned l_148 = 0xB92A5F0EL;
                    int l_150 = 0x763EEA7EL;
                    g_132 = p_41;
                    if (((safe_div_func_int32_t_s_s(p_41, 4294967287UL)) , ((p_41 , l_135) >= ((((l_139 = (65535UL & l_138)) != (safe_div_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((l_93 != ((safe_div_func_int8_t_s_s((l_54 = ((g_107 , (safe_rshift_func_int16_t_s_s((((l_109 = (g_149 = (l_53 |= ((l_148 = ((0x3FC63197L > p_41) | 5L)) && l_119)))) <= p_41) == g_107), 5))) ^ g_132)), p_41)) | l_150)), (-1L))), 4294967295UL))) <= (-1L)) ^ p_41))))
                    {
                        short l_157 = (-8L);
                        int l_164 = 0L;
                        l_119 = ((safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s((((l_163 = ((((safe_sub_func_int8_t_s_s(p_41, (((g_71 &= (g_72 ^= ((((((-6L) | l_108) <= g_94) , l_157) | 0x23BF6274L) , ((l_158 ^ l_112) && (((safe_sub_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((g_94 <= (-5L)), 0xDEF2L)), 0x415CL)) && p_41) != l_53))))) && g_132) < g_107))) , 0x7FL) == 255UL) & p_41)) && l_164) , l_119), l_97)), 0xBE24L)) && 0x8214L);
                        l_139 = g_132;
                    }
                    else
                    {
                        unsigned char l_186 = 247UL;
                        g_187 &= (safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((l_119 == (l_163 = p_41)), (((safe_unary_minus_func_int8_t_s((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_int8_t_s(((((g_71 , (l_148 , (safe_unary_minus_func_uint16_t_u(g_149)))) >= (l_186 = ((safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((l_93 , (p_41 || g_94)) && ((((safe_lshift_func_uint8_t_u_u(((((safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u(p_41, 0xD29DL)), 4)) | p_41), g_107)) > l_119) >= l_42) , 1UL), 5)) < 0x4445L) , 0x149AL) , 0xA6A2L)), p_41)), p_41)) , p_41))) || g_27) | 0x7174L))), 2)))) || 0x45L) != l_148))), 7));
                        g_188 = 1L;
                    }
                }
                l_53 ^= (1UL == p_41);
                g_189 = p_41;
            }
            l_190 = l_163;
        }
        else
        {
            return p_41;
        }
        l_53 &= 0xD3BA113AL;
        g_191 = p_41;
    }
    else
    {
        unsigned short l_192 = 0UL;
        l_192 = (p_41 >= p_41);
    }
    for (g_94 = 26; (g_94 > 30); g_94 = safe_add_func_int16_t_s_s(g_94, 7))
    {
        g_191 ^= (g_107 || p_41);
        l_195 = l_54;
    }
    g_191 = (((l_42 <= (((l_53 = (safe_rshift_func_int16_t_s_u(l_42, l_195))) > (safe_div_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u(((g_132 , (g_188 & (p_41 < (l_214 = (safe_lshift_func_uint8_t_u_s((l_54 ^= ((safe_rshift_func_int16_t_s_u((g_107 = p_41), 9)) | (safe_sub_func_int32_t_s_s(p_41, (safe_rshift_func_uint8_t_u_u((p_41 > 0L), 0)))))), l_195)))))) , l_52), g_94)) , 0x0422813CL), l_42)), l_52)) , 3L), p_41))) >= g_71)) != l_52) ^ l_52);
    return p_41;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_306, "g_306", print_hash_value);
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_387, "g_387", print_hash_value);
    transparent_crc(g_425, "g_425", print_hash_value);
    transparent_crc(g_468, "g_468", print_hash_value);
    transparent_crc(g_508, "g_508", print_hash_value);
    transparent_crc(g_543, "g_543", print_hash_value);
    transparent_crc(g_615, "g_615", print_hash_value);
    transparent_crc(g_684, "g_684", print_hash_value);
    transparent_crc(g_705, "g_705", print_hash_value);
    transparent_crc(g_715, "g_715", print_hash_value);
    transparent_crc(g_783, "g_783", print_hash_value);
    transparent_crc(g_826, "g_826", print_hash_value);
    transparent_crc(g_918, "g_918", print_hash_value);
    transparent_crc(g_952, "g_952", print_hash_value);
    transparent_crc(g_997, "g_997", print_hash_value);
    transparent_crc(g_999, "g_999", print_hash_value);
    transparent_crc(g_1025, "g_1025", print_hash_value);
    transparent_crc(g_1119, "g_1119", print_hash_value);
    transparent_crc(g_1186, "g_1186", print_hash_value);
    transparent_crc(g_1212, "g_1212", print_hash_value);
    transparent_crc(g_1222, "g_1222", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
