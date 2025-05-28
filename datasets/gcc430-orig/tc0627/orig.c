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



static int g_6 = 0x88D0D3F7L;
static const unsigned g_14 = 0UL;
static char g_23 = 9L;
static int g_65 = 0x6007B4ADL;
static int g_84 = 1L;
static unsigned g_106 = 0UL;
static const unsigned short g_153 = 65527UL;
static unsigned short g_178 = 65534UL;
static unsigned char g_297 = 0UL;
static int g_318 = 0x0C9ECBAFL;
static unsigned short g_361 = 65532UL;
static unsigned g_523 = 1UL;
static unsigned char g_543 = 0xC2L;
static int g_573 = 0L;
static int g_618 = 0x33717EBFL;
static unsigned g_655 = 0xF77AB9C8L;
static short g_701 = 1L;
static char g_785 = (-8L);
static unsigned g_803 = 0UL;
static int g_858 = 0x861D409EL;
static int g_1211 = 0x5344D9F0L;
static unsigned short g_1221 = 0x8465L;
static int g_1227 = 0L;



static int func_1(void);
static unsigned char func_8(int p_9, const unsigned p_10, int p_11, int p_12, unsigned p_13);
static short func_15(unsigned p_16);
static unsigned short func_31(unsigned p_32, short p_33, unsigned short p_34, short p_35, unsigned short p_36);
static short func_37(int p_38, unsigned p_39, char p_40);
static int func_46(short p_47);
static short func_48(unsigned char p_49, short p_50, unsigned p_51, int p_52, unsigned char p_53);
static unsigned func_55(int p_56, unsigned p_57, int p_58, unsigned p_59, short p_60);
static const char func_66(unsigned short p_67, char p_68, int p_69, char p_70, unsigned short p_71);
static int func_76(unsigned short p_77, int p_78);
static int func_1(void)
{
    const char l_7 = (-6L);
    int l_1209 = 0L;
    l_1209 = (safe_sub_func_int32_t_s_s(((8L | ((((g_6 <= (((((l_7 , (func_8(g_6, g_14, l_7, (func_15(g_14) & l_7), l_7) != g_6)) , 0x6F5BL) < g_153) , l_7) , 0xF2B8L)) || l_7) != g_14) > g_14)) & l_7), g_14));
    if (g_318)
    {
        unsigned l_1210 = 4UL;
        g_1211 ^= func_46(l_1210);
        g_6 |= 0xA70B5E96L;
        g_858 = (l_1210 >= l_7);
    }
    else
    {
        int l_1218 = 0xBE2054E2L;
        int l_1224 = 0L;
        g_6 &= ((safe_sub_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((((safe_add_func_int16_t_s_s((0L & l_1218), l_7)) , (g_1221 && ((safe_lshift_func_uint16_t_u_u(((l_1224 , l_7) , (l_7 && l_1218)), 3)) > (safe_div_func_int16_t_s_s(((!g_573) || g_1227), l_1218))))) , 0x57BBL), l_1224)) > g_153), 0xF212L)) ^ 1L);
    }
    return g_6;
}







static unsigned char func_8(int p_9, const unsigned p_10, int p_11, int p_12, unsigned p_13)
{
    short l_28 = 0L;
    unsigned l_45 = 0x61D0EE3BL;
    unsigned short l_1188 = 1UL;
    char l_1202 = 0xFCL;
    int l_1208 = 0x9F76440EL;
    for (p_13 = 0; (p_13 < 32); p_13 = safe_add_func_int32_t_s_s(p_13, 9))
    {
        unsigned l_44 = 0xE93046AAL;
        int l_1166 = 6L;
        if (g_23)
            break;
        l_1166 = ((safe_rshift_func_uint8_t_u_s(255UL, func_15(l_28))) & ((g_14 >= ((safe_div_func_int16_t_s_s(p_12, func_31(l_28, (p_11 , func_37((safe_unary_minus_func_uint8_t_u(p_9)), (((safe_rshift_func_uint8_t_u_s((l_44 ^ p_13), 4)) & 0x4F86FC33L) < l_45), l_44)), l_45, g_297, p_13))) , g_297)) , (-8L)));
        g_858 = ((safe_rshift_func_int16_t_s_u(((safe_add_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((g_523 > ((safe_add_func_int8_t_s_s(g_318, (65535UL & ((l_1166 | (safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(0x2FL, (((+(func_48(g_523, l_44, (g_618 , g_23), g_84, l_45) ^ 0L)) , p_12) | 0x3E5EL))), g_858)), 6L))) <= p_10)))) && p_13)), g_543)) != l_45), 4294967295UL)) > g_297), 12)) & 0x2600L);
    }
    for (g_318 = 0; (g_318 >= 27); ++g_318)
    {
        unsigned short l_1187 = 1UL;
        int l_1191 = 0x4F51DD79L;
        int l_1207 = 0xE1C86371L;
        l_1191 = (safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s(l_1187, (p_10 == (g_543 , (((g_543 && p_11) & l_1188) & l_1188))))), (0x53L >= (safe_mul_func_int8_t_s_s((l_1187 & g_655), p_10)))));
        l_1191 = ((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((l_28 , (safe_mul_func_uint8_t_u_u(func_37(g_65, (g_106 , ((l_1187 <= ((p_11 < p_9) , ((!g_858) != (g_858 == ((p_10 || p_13) , g_803))))) | 0x09502576L)), g_573), 0x35L))) , l_1188), l_1187)), 0UL)) ^ g_318), g_785)) <= l_1187);
        l_1207 = ((func_46(p_10) <= (safe_div_func_int32_t_s_s(p_9, l_1202))) & ((safe_lshift_func_int16_t_s_s(0x4A01L, func_15((p_9 , g_318)))) , (((safe_sub_func_uint32_t_u_u((g_297 || 0L), 0xCEE81B29L)) , l_1187) , g_318)));
    }
    l_1208 = (-7L);
    return p_12;
}







static short func_15(unsigned p_16)
{
    const char l_19 = (-1L);
    int l_20 = (-2L);
    l_20 = (safe_div_func_int32_t_s_s((1UL | g_6), l_19));
    g_23 |= (safe_sub_func_uint8_t_u_u((g_14 < ((0x4F78L < l_20) != (~g_6))), g_6));
    return l_19;
}







static unsigned short func_31(unsigned p_32, short p_33, unsigned short p_34, short p_35, unsigned short p_36)
{
    unsigned short l_885 = 0UL;
    int l_896 = 1L;
    unsigned l_970 = 0xAD158F79L;
    int l_987 = 0xBDA1F2E3L;
    int l_988 = 4L;
    unsigned char l_1001 = 255UL;
    const short l_1012 = 0xD98FL;
    unsigned l_1024 = 0x36370C30L;
    short l_1144 = (-2L);
    for (g_523 = 29; (g_523 >= 6); --g_523)
    {
        int l_890 = 6L;
        short l_911 = 0L;
        unsigned char l_1096 = 0x17L;
        unsigned l_1113 = 0xBF3B3A3FL;
        g_858 = func_66(p_32, g_361, l_885, (func_76((safe_lshift_func_int16_t_s_u(((safe_sub_func_int16_t_s_s(func_55(l_890, ((safe_unary_minus_func_int8_t_s((((safe_div_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(g_84, 0)) | (0L & p_36)), p_36)) < p_32) < g_84))) , p_33), p_35, l_896, p_32), g_858)) ^ g_297), 0)), g_803) && 0xD6L), p_32);
        if ((((l_885 | ((l_890 ^ (l_885 & (((func_46(func_37(g_803, (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s(l_890, 10)), 2)), ((func_48((safe_mod_func_uint16_t_u_u(g_543, 0x5706L)), ((safe_lshift_func_int8_t_s_u((((safe_sub_func_int32_t_s_s((((safe_add_func_uint8_t_u_u(((((+p_32) | 0xD10ECA6BL) == g_858) <= 255UL), (-1L))) , 4294967293UL) ^ 0xB616A4F4L), p_34)) == p_33) , 0L), 7)) ^ g_803), g_6, p_35, p_32) <= 0x81CA3D15L) , l_885))) , 4L) , 0xB9D9L) | l_890))) > p_35)) && l_911) | l_890))
        {
            unsigned short l_920 = 0x0D81L;
            unsigned char l_962 = 0x45L;
            int l_972 = 0x55B988C1L;
            if (func_55(((g_14 & 5UL) , (p_33 != (((~((((safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s((((safe_sub_func_uint16_t_u_u(l_911, ((-5L) && 4294967295UL))) & p_36) > ((l_896 == (safe_add_func_uint8_t_u_u(l_890, l_920))) ^ g_655)), g_6)), p_35)) <= 0x3143L) >= g_543) , 0x9A91AAF5L)) && l_885) ^ 0x244CA453L))), l_885, p_35, g_618, p_35))
            {
                unsigned char l_925 = 249UL;
                int l_960 = 1L;
                l_890 &= ((safe_rshift_func_int8_t_s_s((((p_34 ^ (g_523 > ((safe_add_func_uint32_t_u_u(func_66(g_153, l_920, ((+p_33) , 0x7856E9D2L), p_33, p_33), p_36)) | l_925))) , (-4L)) <= l_925), 1)) , 0xC001B48BL);
                for (l_925 = 29; (l_925 < 31); ++l_925)
                {
                    const short l_944 = 0xFE62L;
                    if ((safe_rshift_func_uint8_t_u_s((((safe_unary_minus_func_int8_t_s(1L)) , p_35) != (((safe_unary_minus_func_uint32_t_u((safe_add_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_div_func_uint32_t_u_u(1UL, (safe_sub_func_uint32_t_u_u(((0x247EL == func_55(l_885, g_318, (p_34 < (((((safe_sub_func_uint8_t_u_u((((((-1L) >= l_925) <= 1L) & 2UL) , g_297), l_925)) , 0xB1EB83B7L) && 4294967293UL) <= l_944) >= g_361)), p_33, l_925)) && l_911), 0x22AF5393L)))), g_858)), l_885)) , l_885), g_318)))) && p_36) , g_318)), 2)))
                    {
                        if (g_803)
                            break;
                        if (p_35)
                            continue;
                    }
                    else
                    {
                        return p_35;
                    }
                }
                for (g_785 = 0; (g_785 == 0); g_785 = safe_add_func_int32_t_s_s(g_785, 4))
                {
                    unsigned l_959 = 0UL;
                    if ((~((-1L) <= ((safe_add_func_int16_t_s_s(p_32, (safe_lshift_func_int8_t_s_u(p_34, 3)))) < 0xDEFFL))))
                    {
                        unsigned l_961 = 9UL;
                        int l_963 = 0xE1C0862BL;
                        l_960 = ((safe_sub_func_uint32_t_u_u(1UL, (l_896 | (g_523 >= l_885)))) && (((safe_mod_func_uint16_t_u_u((g_523 || (-3L)), func_37((safe_mod_func_uint8_t_u_u((((func_76(p_34, p_36) , g_543) | g_573) <= g_655), 0x86L)), p_36, l_959))) , l_890) , 0x8BL));
                        l_961 = (-1L);
                        l_963 &= l_962;
                    }
                    else
                    {
                        short l_971 = 0xEE32L;
                        l_972 = (((safe_add_func_uint8_t_u_u(p_36, ((((p_33 != func_37(g_297, g_785, (safe_sub_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u((p_34 & 1UL), g_701)) >= (((p_33 <= p_36) || l_885) & g_701)) , l_970), l_959)))) ^ 7UL) != 1L) != l_971))) & 0x97F57568L) && g_618);
                        l_960 ^= (safe_rshift_func_int16_t_s_s(g_65, l_920));
                        l_960 |= 9L;
                    }
                    for (p_36 = 0; (p_36 < 58); p_36 = safe_add_func_uint32_t_u_u(p_36, 4))
                    {
                        unsigned short l_979 = 0UL;
                        g_65 = l_890;
                        l_890 = (l_972 , (safe_rshift_func_int8_t_s_s(p_35, (l_970 == func_55(p_36, g_523, p_32, (((-1L) & ((((((1UL <= (func_66(func_66(l_959, p_35, l_896, l_979, l_896), g_153, g_543, p_32, p_35) != 0L)) | g_618) ^ 0x73L) , p_34) | 0xDA4591F0L) ^ g_858)) & g_701), p_33)))));
                    }
                    l_960 = (safe_mul_func_int8_t_s_s((((safe_sub_func_int16_t_s_s(p_33, g_106)) || ((((func_37(((l_959 , ((func_48(g_153, g_803, (func_48(p_34, p_36, (l_959 <= (p_34 >= 0xE4ADL)), p_33, p_34) >= g_106), p_32, p_33) != 0xC53CL) && l_920)) , g_655), l_911, l_959) , l_896) , l_959) & 0x53L) , g_618)) <= g_523), 0x00L));
                }
            }
            else
            {
                int l_986 = 0L;
                l_988 ^= func_66(l_920, (0x14615121L && p_33), (safe_sub_func_uint32_t_u_u((g_6 >= func_48(g_178, g_618, p_36, (g_543 <= (p_35 , l_986)), l_987)), l_986)), g_858, g_785);
                l_986 = ((safe_mul_func_uint16_t_u_u(g_106, ((l_972 || (safe_mul_func_int16_t_s_s(l_911, p_34))) , (safe_rshift_func_uint16_t_u_u((!l_962), 3))))) , ((l_962 , ((safe_lshift_func_int16_t_s_u(0x4A81L, 0)) , ((safe_div_func_uint8_t_u_u((((((safe_add_func_int32_t_s_s(((l_1001 == (safe_lshift_func_int8_t_s_u(((func_76((((((g_318 && g_523) > g_65) >= g_153) == 0xC861F465L) != 0L), p_36) <= g_655) == l_911), l_987))) >= (-1L)), p_36)) , p_34) , l_986) & 0x2EC3BC10L) & g_618), p_33)) >= p_34))) , p_34));
                if (func_48((~(l_920 && (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((func_37(func_66((safe_rshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(g_803, 0xE8L)), 7)), (((((g_178 < l_920) < (l_920 & 1L)) > g_803) != p_33) , g_153), g_701, g_858, l_890), g_14, g_573) , 0x5CCC3F5AL), 4294967286UL)), p_33)))), p_35, p_33, g_318, g_318))
                {
                    g_65 = ((~g_803) && l_1012);
                }
                else
                {
                    return g_153;
                }
                l_986 = g_701;
            }
            l_890 = p_34;
            if ((4L != l_972))
            {
                unsigned l_1013 = 0x1AEE1FDBL;
                l_1013 = p_32;
                l_988 = p_34;
                l_988 &= ((safe_add_func_uint8_t_u_u((0xA7L || (safe_lshift_func_int8_t_s_s((((((((g_6 != ((((safe_mod_func_uint8_t_u_u(0x3CL, 0x7FL)) <= ((safe_rshift_func_uint8_t_u_s(l_972, 4)) && (func_76(g_785, func_46((safe_mul_func_uint8_t_u_u(((func_66((1L | 0xA8L), p_32, p_33, l_920, p_36) , l_890) , p_33), g_153)))) == g_6))) > l_896) < l_972)) | p_34) != g_785) ^ g_297) | 65532UL) || 0xD6409BBAL) && 0x2EL), 6))), l_1024)) || 1UL);
            }
            else
            {
                g_858 = (safe_add_func_int16_t_s_s(g_573, p_35));
                g_858 = (safe_lshift_func_int16_t_s_u((l_890 ^ ((((safe_add_func_uint8_t_u_u((p_33 > g_785), (-1L))) && g_803) && 0x5DABL) || ((l_920 & (~(safe_sub_func_uint32_t_u_u((((safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((p_33 <= 0x9D41L), g_297)) , g_6), l_890)), g_361)), 0x5C82L)) | 0x203D1D23L) , p_35), (-1L))))) > l_920))), 10));
                g_65 = (g_318 || 7L);
            }
        }
        else
        {
            int l_1065 = 0xFCB6B9C0L;
            int l_1081 = 0xD0EBA67FL;
            short l_1149 = 0x38D3L;
            for (p_33 = 20; (p_33 < 9); p_33 = safe_sub_func_int16_t_s_s(p_33, 9))
            {
                unsigned l_1055 = 1UL;
                l_988 = func_66(p_35, (g_14 && func_76((safe_rshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(func_46((l_1001 || (((safe_mul_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((((((~(safe_mul_func_uint8_t_u_u((l_1055 , 0x05L), g_318))) , (0x99L >= (safe_lshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((func_37(((safe_unary_minus_func_int16_t_s((safe_sub_func_int16_t_s_s(p_32, g_618)))) >= g_573), l_1065, p_34) != 1UL), 6)) ^ g_14), g_6)), 1)))) , g_65) , l_1065) == 0xCFABL), 1L)) <= (-1L)), l_1055)) && p_33) , p_36))), 6)) , l_1065), 1L)), 7)), p_34)), g_153, l_890, g_318);
            }
            g_65 = l_1065;
            if (g_65)
            {
                unsigned l_1070 = 0xC249C038L;
                int l_1072 = 4L;
                for (p_33 = 0; (p_33 == 11); ++p_33)
                {
                    unsigned short l_1071 = 0x6118L;
                    l_1072 = ((g_785 && ((safe_lshift_func_uint16_t_u_u(g_785, p_35)) , 0x9AA1L)) || func_55(func_76(p_34, l_1070), g_655, l_1071, l_1070, l_1071));
                    l_1081 ^= (safe_rshift_func_int8_t_s_u(((p_36 == p_35) , ((0x2834L || (safe_div_func_int32_t_s_s((safe_div_func_uint16_t_u_u(func_76(p_32, p_36), (safe_lshift_func_uint16_t_u_s(p_35, (g_655 & (g_361 & g_318)))))), g_6))) >= 0x2CDC9DA1L)), 0));
                }
                l_890 = (p_36 != (safe_add_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((0xB8AAF214L >= (safe_sub_func_int16_t_s_s((0L && (safe_mod_func_int8_t_s_s((g_14 & g_803), g_65))), p_36))), (func_76(func_76(((safe_div_func_int16_t_s_s(p_32, l_970)) || l_890), g_785), l_1096) > p_36))), 7)), 4294967295UL)) , l_890), 0x1812L)));
            }
            else
            {
                unsigned char l_1101 = 0UL;
                int l_1102 = (-10L);
                int l_1111 = 3L;
                l_890 = ((+p_33) <= (l_911 != (safe_rshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u(l_1081, func_76((func_37(p_32, l_1101, g_297) == 4294967295UL), g_318))), p_36))));
                l_1102 = (~l_1001);
                l_1081 = g_785;
                if ((safe_div_func_uint32_t_u_u(g_361, 8UL)))
                {
                    int l_1112 = 6L;
                    g_65 = g_6;
                    l_1112 = (safe_rshift_func_int8_t_s_u(((p_33 , p_35) < ((safe_lshift_func_int16_t_s_s(((p_36 > ((p_32 | p_33) , (safe_lshift_func_int8_t_s_s((func_76((((l_1024 , 1UL) | func_66(l_1101, g_106, l_1111, p_34, g_318)) && l_1081), g_803) ^ 0x092CL), p_35)))) == p_36), 9)) ^ 0xE694L)), 4));
                    l_1113 = l_1111;
                }
                else
                {
                    unsigned l_1133 = 4294967295UL;
                    for (g_858 = (-2); (g_858 > (-10)); g_858 = safe_sub_func_uint8_t_u_u(g_858, 7))
                    {
                        int l_1132 = 0L;
                        l_987 = (safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s((0L | (((((safe_mod_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(0L, (safe_mod_func_uint8_t_u_u(((((safe_sub_func_uint16_t_u_u(func_76((safe_lshift_func_int8_t_s_s((g_701 == ((safe_div_func_uint16_t_u_u((func_76(l_911, func_55(l_1081, ((func_76(g_297, l_1113) != (0xC2B7A2C3L && 0x80E1113BL)) & p_35), l_1102, l_1132, l_1132)) , 65527UL), l_1132)) > g_655)), l_1101)), g_523), g_573)) , 4294967287UL) && (-7L)) <= 0x0E29E01FL), l_1133)))) || g_153), l_1001)) == l_1133) < 0x2C98L) <= 0x1A8AF38DL) | 0x0645L)), g_803)), l_1102));
                        l_1144 = (p_33 & (((safe_add_func_int32_t_s_s((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(p_36, ((0x0CL >= func_55((p_33 >= (safe_sub_func_uint8_t_u_u(((+g_655) , l_1133), ((l_1081 ^ (p_34 <= ((((safe_lshift_func_int8_t_s_u(func_48((((func_48(p_35, g_543, g_318, g_785, l_890) < 1UL) , g_106) , 0xCDL), p_36, g_785, l_911, l_1133), p_33)) != g_297) != l_1133) , l_1133))) ^ l_1102)))), p_32, p_34, g_65, g_655)) == g_361))), p_34)), l_1133)) > g_803) , g_543));
                        g_65 ^= l_1102;
                    }
                    l_890 ^= l_1133;
                    for (g_618 = 19; (g_618 <= (-18)); g_618 = safe_sub_func_uint16_t_u_u(g_618, 1))
                    {
                        unsigned l_1156 = 4294967295UL;
                        int l_1159 = (-1L);
                        l_890 = (func_55(((((safe_mod_func_uint32_t_u_u(g_6, l_885)) == (l_1149 <= func_55((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(0xB0FEL, 0xC7A5L)), (l_1156 ^ (((((safe_add_func_int16_t_s_s((((g_178 ^ p_33) , func_66((((l_1081 >= p_34) && (-1L)) , l_1149), g_65, p_34, g_106, g_361)) >= l_988), g_803)) == 1L) > p_35) != l_1101) || g_523)))), p_32)), p_33, p_35, l_1156, g_803))) | l_1081) , p_32), l_1081, g_153, g_655, l_1111) , 0L);
                        l_1159 = 0x620AB343L;
                        l_1111 = func_55(l_1159, (safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((l_1065 , (g_573 & g_655)), l_1156)), (0x6AB4L > (safe_add_func_int32_t_s_s(p_33, ((g_543 >= l_1144) , p_36)))))), l_1133, g_543, p_36);
                        return l_1133;
                    }
                }
            }
            g_858 = l_890;
        }
        return g_84;
    }
    return l_1012;
}







static short func_37(int p_38, unsigned p_39, char p_40)
{
    short l_54 = 8L;
    unsigned char l_63 = 0x3BL;
    unsigned short l_408 = 9UL;
    int l_866 = 0xEA2121FDL;
    const char l_869 = 0x1FL;
    unsigned l_876 = 0x7AC5DB4EL;
    int l_877 = (-3L);
    unsigned l_882 = 0x4750D5DCL;
    l_866 &= func_46(func_48((((p_38 > (((l_54 <= ((l_54 , ((0x978D11E8L >= func_55(g_14, (safe_div_func_int32_t_s_s((0x99L | (0x48B7L ^ g_6)), (l_54 & l_54))), p_39, l_63, g_6)) && l_408)) > g_318)) >= 0xE3C1L) < p_38)) , g_178) , 254UL), p_39, l_54, l_63, p_39));
    l_877 |= (safe_mod_func_uint8_t_u_u(((l_866 >= (l_869 != ((((((g_803 < (safe_add_func_uint16_t_u_u(((((p_39 < g_803) > (safe_mul_func_int8_t_s_s((p_39 ^ (!g_65)), (safe_rshift_func_uint8_t_u_s((g_106 , ((l_866 != l_63) , l_876)), p_39))))) || p_39) ^ 0x46L), p_38))) , 0xB4D8L) || 0xBED6L) , g_701) , 0x99L) | p_40))) >= 1UL), l_408));
    l_882 &= (safe_add_func_int8_t_s_s(0x60L, ((safe_div_func_uint32_t_u_u(l_54, func_46(p_39))) >= l_54)));
    return l_869;
}







static int func_46(short p_47)
{
    char l_417 = 0xC0L;
    int l_418 = (-1L);
    int l_428 = 0x86522CE3L;
    int l_434 = 0x451FDCF0L;
    short l_441 = 0xCC23L;
    unsigned char l_524 = 1UL;
    char l_682 = 0xD6L;
    unsigned l_738 = 0x40334A31L;
    int l_739 = (-5L);
    char l_760 = 0xABL;
    unsigned l_824 = 0UL;
    unsigned short l_857 = 4UL;
    int l_863 = 8L;
    l_418 |= (safe_div_func_int8_t_s_s(l_417, 0x05L));
    if ((l_418 & (g_178 > func_66(func_48(p_47, g_318, (l_418 >= (!((safe_div_func_uint32_t_u_u(g_318, 4294967294UL)) == (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((0UL <= 0xAD4D929BL), 2)), 7UL))))), g_65, p_47), l_418, l_418, p_47, p_47))))
    {
        unsigned short l_425 = 6UL;
        int l_429 = (-3L);
        short l_462 = 0L;
        unsigned short l_473 = 0x43C6L;
        int l_522 = 1L;
        const unsigned l_542 = 0x91ECEF29L;
        unsigned l_623 = 0x2B22ACE6L;
        l_429 = func_48((g_65 != l_425), g_178, (safe_div_func_uint16_t_u_u(g_84, g_65)), p_47, l_428);
        if (p_47)
        {
            unsigned l_430 = 0x7729D41FL;
            return l_430;
        }
        else
        {
            int l_431 = 0x94B7FE14L;
            l_434 ^= func_48(p_47, (p_47 , p_47), l_431, (l_431 , (g_318 , g_297)), (func_48(p_47, (safe_mod_func_int16_t_s_s(((func_55(g_361, g_318, p_47, l_425, l_431) == 4294967293UL) < l_431), g_153)), l_418, p_47, p_47) , 255UL));
            g_65 = ((func_48(g_14, g_153, (!(((p_47 >= ((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((-5L), (0x3CL < 0UL))), 2)) | (safe_mod_func_uint32_t_u_u((g_65 , ((p_47 >= l_425) , l_431)), p_47)))) < l_425) > l_431)), l_441, l_431) > 4UL) , g_6);
            g_65 = l_425;
            g_65 = (safe_mul_func_uint16_t_u_u((func_48(g_14, l_429, p_47, p_47, (0x83L && 251UL)) > p_47), g_361));
        }
        if (func_48((safe_mul_func_uint8_t_u_u(p_47, ((l_425 <= (safe_sub_func_int32_t_s_s((g_65 >= ((!(safe_sub_func_int32_t_s_s(g_14, l_434))) || 0xDAL)), ((safe_rshift_func_uint8_t_u_s((((safe_mul_func_int16_t_s_s(p_47, ((((((((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(7UL, ((((safe_sub_func_uint8_t_u_u(1UL, p_47)) && l_462) >= l_425) < 0xC10346A9L))), l_441)), g_65)) || g_14) , (-4L)) , (-1L)) >= g_297) == l_441) >= p_47) <= 0x59513564L))) , l_429) | l_417), 5)) , p_47)))) ^ 0x4600L))), g_14, p_47, g_6, g_65))
        {
            l_429 = ((func_66(g_106, (l_429 , ((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((((safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(1UL, (p_47 != (((-7L) == (p_47 && (((~(safe_sub_func_int32_t_s_s(((!1UL) , l_473), g_297))) & l_425) && 0UL))) , p_47)))), l_418)) , 6L) > p_47) , p_47), g_361)), 0)) == p_47)), p_47, g_318, g_14) <= 0x9DF9L) >= p_47);
        }
        else
        {
            unsigned l_490 = 0xC2BE7EA8L;
            int l_574 = 7L;
            l_418 = ((-1L) || (safe_rshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u((!0x04C3L), (safe_div_func_uint32_t_u_u((~(((safe_mul_func_int8_t_s_s((g_297 , (!(l_425 || ((safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(l_490, 2)), (l_490 ^ (l_418 > func_76(((safe_mod_func_uint32_t_u_u(func_55(func_48(l_462, p_47, g_361, l_490, g_297), p_47, g_178, l_490, l_490), g_153)) >= 0UL), p_47))))), p_47)) && (-10L))))), g_14)) , p_47) & 0x44E8537EL)), 0xB8FBD7B7L)))) , l_473), l_425)), g_318)));
            for (l_462 = (-5); (l_462 < 25); ++l_462)
            {
                const unsigned l_501 = 4294967288UL;
                short l_506 = 0xEE5DL;
                char l_590 = 0x78L;
                char l_599 = 1L;
                for (g_84 = 0; (g_84 <= (-17)); g_84 = safe_sub_func_int32_t_s_s(g_84, 2))
                {
                    g_65 = ((3L <= (safe_div_func_int16_t_s_s(((g_178 , l_501) , g_297), l_441))) <= ((((safe_add_func_int16_t_s_s(((g_6 && 0x93D1BC77L) | ((safe_sub_func_int8_t_s_s((l_501 == g_106), l_428)) <= p_47)), g_6)) < p_47) ^ l_434) , p_47));
                    g_65 = (+((l_506 > ((g_6 ^ l_490) || p_47)) >= (safe_rshift_func_uint16_t_u_u(0x7E6BL, 3))));
                }
                if ((((l_434 > func_48((safe_add_func_uint32_t_u_u(4294967295UL, 4294967290UL)), g_106, (safe_add_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u((safe_sub_func_uint32_t_u_u(((0L <= (p_47 < (p_47 >= ((func_48((safe_lshift_func_int8_t_s_s(p_47, (safe_mod_func_int8_t_s_s(l_490, g_106)))), l_522, g_65, l_501, p_47) > l_473) < l_490)))) & (-3L)), g_523)))), l_524)), l_524, p_47)) , l_501) == 0x04A66332L))
                {
                    const unsigned char l_533 = 0x7EL;
                    if (g_178)
                        break;
                    g_543 = ((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((((safe_div_func_int16_t_s_s((g_318 < ((~(safe_sub_func_uint32_t_u_u(((func_55(((l_533 | (((((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(g_178, ((((func_48((p_47 & (g_153 , p_47)), (l_417 , 0xCF16L), ((safe_div_func_int32_t_s_s((((g_523 >= p_47) , g_178) < 0x9BL), g_178)) & l_533), g_65, g_6) & 0x709FBD1DL) , g_14) , p_47) || 0L))), g_106)) >= 0x6AECL) , p_47) != l_434) && p_47)) & g_6), p_47, l_522, l_506, l_506) , g_318) , g_14), l_506))) || g_6)), 0x1B6CL)) >= 0L) , l_473), l_542)), l_425)) || g_14);
                }
                else
                {
                    unsigned l_568 = 0x7B641124L;
                    l_574 ^= (safe_sub_func_int32_t_s_s((((1L | p_47) < (safe_mul_func_uint16_t_u_u(func_48(func_55(((safe_mod_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_u(l_462, 1)) <= ((p_47 , l_506) | (safe_lshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(0x2C43L, (func_76((+(safe_lshift_func_int8_t_s_u((g_361 , (safe_div_func_uint8_t_u_u(l_568, (safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((4294967295UL ^ 3L), 0x04L)), l_568))))), p_47))), l_568) > l_568))), 1UL)) ^ g_543) , 6L), 8)) , g_523), g_178)), 2)) , g_84), p_47)))) | g_178), (-1L))) <= p_47), l_429, p_47, l_568, l_428), p_47, p_47, l_428, g_153), g_573))) <= 0L), (-9L)));
                    l_574 ^= l_568;
                    for (l_522 = (-7); (l_522 <= 12); l_522 = safe_add_func_uint16_t_u_u(l_522, 5))
                    {
                        unsigned char l_583 = 0x35L;
                        l_574 &= (~(safe_sub_func_uint16_t_u_u((0xFFC8L && 0xE495L), (((((safe_rshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((((l_506 , g_523) == func_76((l_583 & g_14), (((p_47 <= ((((safe_rshift_func_uint16_t_u_s((0x24A3437AL | (safe_add_func_uint16_t_u_u(g_84, l_417))), 9)) , g_106) < p_47) || l_568)) || 0L) >= g_6))) , l_506), (-1L))), g_106)) && l_590) & p_47) == (-8L)) >= p_47))));
                        l_429 = ((((safe_mul_func_uint8_t_u_u((func_55(((func_48(g_106, ((((+(~func_48(g_65, ((0x7A29E458L || (safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(func_76(l_599, (p_47 , (p_47 < ((!0x43L) || (((safe_rshift_func_uint8_t_u_u(g_6, 5)) , ((safe_lshift_func_uint16_t_u_s((g_106 , p_47), 0)) , 3UL)) , 0x01L))))), 0UL)), p_47))) < 4294967295UL), p_47, p_47, g_14))) & p_47) ^ l_568) | 0L), l_590, g_543, p_47) , p_47) , p_47), g_543, l_524, l_568, g_573) , p_47), l_574)) && g_318) != p_47) > 5L);
                        if (l_542)
                            break;
                        g_618 &= (0x074AL ^ (p_47 && ((safe_sub_func_uint32_t_u_u(0xDCE4CCBDL, func_48((safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((p_47 , (safe_mul_func_int8_t_s_s(0x07L, l_599))), g_543)), (safe_lshift_func_int8_t_s_u(((safe_add_func_uint32_t_u_u((0UL || (safe_sub_func_int32_t_s_s(g_318, p_47))), l_568)) ^ p_47), g_178)))), g_84, l_490, p_47, p_47))) != p_47)));
                    }
                }
                if (l_506)
                    continue;
            }
            g_65 = (g_361 , p_47);
            l_429 ^= (((safe_rshift_func_int16_t_s_u(0x94DFL, (4294967295UL && p_47))) || func_55(((p_47 , ((g_178 | 9L) >= ((safe_lshift_func_uint8_t_u_u(0xBAL, ((~g_178) , 0UL))) , (-1L)))) == l_522), l_417, l_434, g_106, l_623)) ^ 0UL);
        }
        l_429 &= ((((((safe_div_func_int8_t_s_s(0x77L, (p_47 , (safe_div_func_uint16_t_u_u(0x0930L, (-1L)))))) <= (((p_47 ^ l_417) , (+(func_48(((((((safe_lshift_func_uint16_t_u_u(l_524, 9)) && ((p_47 & l_524) > 0xD715L)) | p_47) , g_178) != l_542) , g_543), g_106, g_523, p_47, g_523) != l_418))) || 254UL)) , g_106) & p_47) , p_47) > 0xD2D30586L);
    }
    else
    {
        char l_635 = 0xA1L;
        unsigned l_681 = 1UL;
        int l_727 = 0x41FD4225L;
        char l_728 = 0L;
        unsigned char l_737 = 0x6EL;
        for (l_418 = 15; (l_418 < (-10)); l_418--)
        {
            int l_634 = 0x8A0486ECL;
            unsigned short l_700 = 65533UL;
            if ((safe_mod_func_uint16_t_u_u(l_634, p_47)))
            {
                unsigned char l_654 = 0x59L;
                int l_657 = 0xDC2DB316L;
                unsigned l_683 = 0UL;
                l_635 = p_47;
                for (g_178 = 0; (g_178 == 28); ++g_178)
                {
                    for (g_573 = (-8); (g_573 == (-25)); g_573 = safe_sub_func_uint32_t_u_u(g_573, 4))
                    {
                        int l_656 = (-5L);
                        g_655 &= ((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(func_48(g_573, (func_66(g_14, ((((p_47 , (func_66(((safe_sub_func_int32_t_s_s(g_543, 0x6F9E5E86L)) != 0xBEF1C31EL), g_318, (p_47 != ((g_573 , 0x144CL) && 0xCBD4L)), g_153, g_297) , g_153)) > p_47) | 0x71ABL) , 1L), l_524, p_47, l_654) <= g_14), l_634, l_634, l_635), p_47)), l_428)), 0)), p_47)), p_47)), l_635)) >= l_635);
                        l_656 = g_14;
                        l_657 = 1L;
                    }
                }
                for (l_428 = 0; (l_428 < 12); l_428 = safe_add_func_int8_t_s_s(l_428, 7))
                {
                    short l_660 = 0xF6CAL;
                    char l_679 = 0xF3L;
                    short l_680 = (-4L);
                    int l_684 = 0xBB51565FL;
                    g_65 = l_660;
                    if ((((6L || (-2L)) , (safe_add_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s(((-1L) < (safe_mod_func_uint16_t_u_u((l_660 , (safe_rshift_func_int8_t_s_s(func_66((func_76(((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((+(safe_sub_func_int16_t_s_s(0x1E74L, ((safe_rshift_func_int8_t_s_s((((g_14 && (((l_417 & (func_76(((g_178 | ((p_47 , p_47) , l_417)) <= l_679), g_6) , l_634)) == 0x2D60L) > l_679)) == 1UL) , p_47), l_657)) , l_680)))) < p_47), l_681)), g_573)) && p_47), l_682) <= g_361), p_47, p_47, l_683, g_14), 6))), g_318))), g_14)), l_657)) == l_634), g_6))) < g_178))
                    {
                        if (p_47)
                            break;
                        if (p_47)
                            continue;
                        l_684 = g_6;
                        g_65 = g_153;
                    }
                    else
                    {
                        int l_695 = 0x344329D8L;
                        g_701 |= (p_47 , (safe_add_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(((p_47 , (((safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(g_14, l_695)) | l_418), func_66(((l_635 != (l_634 <= (func_66((((safe_add_func_int16_t_s_s(((((l_654 < (((g_361 || 0xFB46CFE7L) && p_47) , l_682)) | p_47) , g_543) < (-4L)), l_428)) & g_65) != p_47), g_153, g_84, p_47, g_153) < 5L))) && 0x3DL), g_573, g_297, l_700, l_681))), p_47)) && p_47) , l_524)) != g_6), 13)) , g_523), 0x770AL)));
                    }
                    if ((p_47 || func_66((((safe_lshift_func_uint16_t_u_u(func_76((+p_47), ((((!func_66((safe_mul_func_int16_t_s_s(7L, ((-10L) > (safe_mul_func_uint8_t_u_u((((-9L) < func_66(l_683, l_660, l_660, (safe_lshift_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(g_618, l_681)), g_153)) ^ g_6), g_14)), g_14)) > (-1L)), 1UL))))), l_680, p_47, p_47, l_441)) , 0xD1B1L) < p_47) , 0xA48F5058L)), 5)) && g_318) <= l_684), l_524, p_47, g_655, g_297)))
                    {
                        unsigned short l_714 = 0xD8B7L;
                        l_714 = l_681;
                        l_727 |= (safe_add_func_int16_t_s_s((-4L), (safe_rshift_func_uint16_t_u_s(((l_679 == ((((safe_sub_func_uint32_t_u_u((g_318 & (g_701 & (((func_76(l_634, (safe_rshift_func_uint8_t_u_s(func_76(l_683, l_654), (safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s((-5L), g_655)), g_523))))) && g_106) & 0xE5EDL) >= l_680))), (-9L))) | g_106) ^ p_47) < p_47)) || 0xF2AAL), 10))));
                        if (l_654)
                            continue;
                        l_434 |= 0xAE8633D7L;
                    }
                    else
                    {
                        l_728 &= func_76(g_543, l_657);
                        if (l_684)
                            break;
                    }
                }
            }
            else
            {
                for (g_573 = 0; (g_573 == 14); g_573++)
                {
                    return g_361;
                }
                l_434 = (l_634 , (((255UL & g_523) != (safe_rshift_func_uint16_t_u_s(l_524, (safe_mul_func_uint16_t_u_u(func_55(p_47, (((!((+(p_47 < g_178)) >= (((safe_add_func_uint32_t_u_u((p_47 & 0xB2F2L), p_47)) ^ (-3L)) > (-2L)))) == g_84) , l_700), p_47, p_47, l_737), (-1L)))))) == l_700));
                l_727 = l_738;
            }
            return g_14;
        }
        l_727 = l_739;
    }
    for (g_361 = 0; (g_361 != 1); g_361++)
    {
        int l_759 = 0x48946935L;
        unsigned char l_840 = 1UL;
        int l_843 = 0x5EE1FE6EL;
        g_65 ^= (+l_417);
        for (p_47 = 0; (p_47 == 15); ++p_47)
        {
            unsigned l_744 = 4294967293UL;
            int l_786 = 0x6E1C4F50L;
            unsigned char l_800 = 255UL;
            unsigned l_825 = 0x73E39EC7L;
            l_744 ^= g_655;
            l_434 = ((safe_lshift_func_int8_t_s_s(p_47, 1)) ^ g_543);
            if ((safe_add_func_int8_t_s_s(g_573, ((((safe_lshift_func_int8_t_s_u(func_48(p_47, ((safe_mul_func_int16_t_s_s(p_47, ((func_55((l_744 , (((((safe_div_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(func_48((l_428 , ((safe_add_func_int16_t_s_s(0x8AD5L, (((g_14 , (p_47 && (((((func_76(((((0x6EL != l_744) >= p_47) && g_153) , p_47), g_573) & 9L) <= 0xBBL) , p_47) & 5UL) < 4L))) != g_573) && g_297))) < l_759)), p_47, g_523, l_441, g_65), l_738)), p_47)) & g_14) , l_744) , g_618) > 5UL)), g_361, p_47, l_759, g_65) > p_47) || l_744))) , p_47), g_701, g_655, g_361), g_655)) > p_47) || 0x28L) ^ 0x1C15L))))
            {
                return l_760;
            }
            else
            {
                char l_775 = (-1L);
                int l_780 = 0x019EB172L;
                unsigned short l_799 = 0x13DEL;
                int l_809 = 0x1C137CF8L;
                if (g_543)
                {
                    unsigned l_776 = 0x1CCBC60FL;
                    int l_778 = 0xF27569AEL;
                    if (g_297)
                    {
                        short l_777 = (-1L);
                        l_778 = (safe_sub_func_uint32_t_u_u((!(safe_add_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u(0x22L, p_47)) <= g_655) , ((safe_sub_func_int32_t_s_s(0xC22BCCBCL, p_47)) > (safe_rshift_func_uint16_t_u_u((g_543 || (safe_div_func_int32_t_s_s(p_47, (safe_rshift_func_uint8_t_u_u(func_55(l_775, (l_776 & g_523), p_47, g_655, l_759), 1))))), 1)))), 0x11L))), l_777));
                    }
                    else
                    {
                        unsigned l_779 = 0x7FB6AB54L;
                        l_418 = func_76((l_524 , ((0xFEL < l_760) , p_47)), l_775);
                        l_780 = l_779;
                    }
                    return g_84;
                }
                else
                {
                    int l_802 = 0L;
                    int l_804 = 1L;
                    if (l_744)
                    {
                        unsigned l_801 = 0x6051F69DL;
                        l_786 = (safe_sub_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((g_153 , func_76(g_785, p_47)), g_573)), g_14));
                        if (p_47)
                            break;
                        g_803 = ((((~(safe_add_func_int8_t_s_s((g_655 && ((((safe_mod_func_uint16_t_u_u((p_47 == func_66((0UL && (safe_lshift_func_int16_t_s_u(g_84, (safe_div_func_int16_t_s_s(((((g_701 == ((0xE8L || (g_361 != (safe_sub_func_int8_t_s_s((safe_div_func_uint8_t_u_u((g_785 ^ l_799), 0x83L)), 0x2DL)))) >= 65535UL)) < p_47) && (-1L)) , g_701), 0xAA80L))))), p_47, l_800, g_523, g_106)), p_47)) == 65535UL) <= g_701) >= 0xAB0BL)), 0xADL))) <= l_801) && g_153) == l_802);
                        l_804 &= 0x58A0DAAAL;
                    }
                    else
                    {
                        l_786 |= g_543;
                        g_65 = p_47;
                        return p_47;
                    }
                    l_786 = func_55(p_47, func_55(l_780, (safe_div_func_uint8_t_u_u(p_47, g_6)), (safe_lshift_func_int8_t_s_s((g_523 < l_786), 6)), p_47, (func_76(l_738, l_809) , g_361)), l_417, p_47, g_701);
                }
                l_780 |= (0x7B60L == l_809);
                for (g_106 = 19; (g_106 >= 54); g_106 = safe_add_func_uint32_t_u_u(g_106, 3))
                {
                    short l_839 = 0x1CCAL;
                    g_65 = func_48(l_739, g_785, p_47, p_47, (safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((((g_65 > (g_573 || (safe_mul_func_int8_t_s_s(func_76(p_47, (((!(((safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s(((p_47 && ((l_682 != l_824) , g_523)) && l_809), g_84)) & 0x3677L), l_775)), 4UL)) , p_47) | l_825)) & l_759) > g_523)), (-5L))))) <= 0xB48FL) || l_760) > p_47), g_65)), 0x86ECL)));
                    for (l_760 = 27; (l_760 != 28); ++l_760)
                    {
                        char l_830 = (-5L);
                        l_830 = (safe_sub_func_uint16_t_u_u(0UL, p_47));
                        l_839 = (safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(l_759, p_47)), ((0xC86DAB55L <= ((((((0xAE772741L & g_84) , g_318) > (safe_mul_func_uint16_t_u_u(g_318, (safe_mod_func_uint32_t_u_u(4294967288UL, 0x8D7BB21CL))))) > p_47) && p_47) || 0x97L)) > p_47)));
                        if (g_65)
                            break;
                        if (p_47)
                            break;
                    }
                }
                l_843 = (func_66(p_47, l_840, g_153, p_47, ((g_153 , l_780) , g_573)) , (safe_div_func_uint16_t_u_u(p_47, p_47)));
            }
        }
        g_858 &= ((g_65 || (((safe_unary_minus_func_uint8_t_u((safe_mul_func_int16_t_s_s(0L, (g_655 >= (safe_rshift_func_int8_t_s_u(g_178, ((safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(p_47, 0xE6L)), l_840)) ^ (safe_mul_func_uint16_t_u_u(p_47, (((safe_rshift_func_int8_t_s_s(l_759, l_857)) , l_434) , p_47))))))))))) < g_65) == p_47)) > p_47);
        l_863 = (safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(g_785, 12)), func_76(p_47, l_434)));
    }
    l_418 = (safe_mod_func_uint8_t_u_u(func_55(p_47, func_55((+0x110F595FL), l_417, l_857, (+p_47), ((l_863 == p_47) , (((p_47 , ((p_47 == p_47) >= g_65)) != g_785) && 3L))), p_47, p_47, p_47), 0xE1L));
    return g_84;
}







static short func_48(unsigned char p_49, short p_50, unsigned p_51, int p_52, unsigned char p_53)
{
    unsigned l_413 = 4294967295UL;
    char l_414 = (-4L);
    p_52 = ((!0xEB1DL) >= ((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((((0xE8332B8EL < (-4L)) > (func_76((l_413 , l_414), l_414) , g_65)) & (((g_178 & p_49) , 3UL) <= l_414)) && l_413), l_413)), l_413)) , 9UL));
    return g_6;
}







static unsigned func_55(int p_56, unsigned p_57, int p_58, unsigned p_59, short p_60)
{
    const unsigned l_64 = 0x571BE33BL;
    unsigned l_81 = 0x428827C8L;
    const int l_244 = 0L;
    const char l_245 = (-1L);
    int l_246 = 0xA16E78BEL;
    unsigned l_276 = 0x9FB94FD6L;
    short l_307 = 8L;
    unsigned l_308 = 5UL;
    int l_315 = (-1L);
    short l_392 = 1L;
    int l_393 = 1L;
    g_65 = (l_64 > p_60);
    if ((func_66(l_64, g_65, g_14, ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((~0xD7L), 4)), (func_76((safe_rshift_func_int16_t_s_s((g_65 & (l_81 || p_57)), ((safe_mul_func_int8_t_s_s(((p_59 < p_58) , 0x32L), p_57)) > (-8L)))), p_60) && g_65))) < l_81), g_6) || p_59))
    {
        short l_239 = 1L;
        l_246 = (((safe_mul_func_int8_t_s_s((0x4B74L >= (safe_rshift_func_int16_t_s_s((0x32L || func_66(l_239, (((func_66(g_178, (safe_mul_func_uint16_t_u_u(g_178, ((((safe_lshift_func_uint16_t_u_s(g_84, 3)) ^ g_6) & (p_57 & (g_153 && l_244))) , (-5L)))), g_6, l_239, l_239) <= l_245) || l_245) == 0xE80EL), p_60, p_57, g_178)), l_239))), p_59)) == p_59) , 0L);
    }
    else
    {
        unsigned char l_247 = 0x88L;
        int l_250 = (-9L);
        unsigned l_275 = 4294967293UL;
        int l_298 = 0xCF2FE66CL;
        l_250 = (l_64 == (g_14 > (l_247 , (((func_66(g_178, l_246, p_59, g_178, (((safe_add_func_uint8_t_u_u((g_106 & (l_64 , l_247)), p_57)) | p_57) & g_106)) ^ p_56) | (-1L)) >= 0UL))));
        l_246 = p_59;
        l_250 = ((safe_mod_func_int32_t_s_s((safe_mod_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(p_58, func_66(((((safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((((safe_add_func_int32_t_s_s(((-1L) || ((((safe_sub_func_int16_t_s_s(p_59, func_66((safe_mul_func_int8_t_s_s(6L, l_81)), func_66(((safe_div_func_int32_t_s_s(func_66((safe_mul_func_uint16_t_u_u(g_178, g_14)), l_247, l_81, p_58, g_84), l_275)) , 0x6A29L), p_56, g_178, l_247, l_64), p_58, p_57, l_275))) > (-1L)) | 0UL) != g_6)), p_59)) ^ p_59) >= p_59), l_276)), 0x8283L)), 7)), l_81)) | 4294967295UL) && 1L) | g_6), g_178, g_178, p_57, g_178))) || p_59), g_14)), p_58)) , 2L);
        l_246 |= (safe_sub_func_int32_t_s_s(g_6, (((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_u(((~p_57) , (safe_rshift_func_int8_t_s_u(g_106, ((safe_rshift_func_int8_t_s_s(p_58, ((safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u(p_56, (p_60 || (safe_mul_func_uint8_t_u_u(l_247, g_297))))) == g_6), p_58)), p_58)) == 1L))) , l_247)))), 15)) || l_245), p_57)), l_298)) == 0x61L) || g_14)));
    }
    if ((safe_div_func_int32_t_s_s(func_66(p_57, (safe_sub_func_uint8_t_u_u((g_6 < ((safe_mod_func_int8_t_s_s(g_153, (((func_66(((g_106 , (safe_lshift_func_uint8_t_u_u(((g_84 || (p_58 & l_81)) , (p_58 , ((0UL < l_246) <= g_153))), l_307))) & l_276), g_14, g_106, l_81, l_308) , l_244) >= g_153) || g_65))) != l_64)), 0x75L)), p_56, l_245, g_6), 0x405192C4L)))
    {
        return g_178;
    }
    else
    {
        short l_344 = 1L;
        unsigned char l_345 = 1UL;
        unsigned l_346 = 0UL;
        int l_349 = 0xFBE3D9C3L;
        l_246 = g_65;
        l_246 = (safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(func_76(p_57, g_14), (p_57 | (safe_sub_func_int16_t_s_s(l_315, l_64))))), ((((p_60 && ((safe_mod_func_uint8_t_u_u((g_153 == (+0xECE4L)), g_318)) <= p_56)) , p_59) , 0L) != p_57)));
        for (g_178 = 0; (g_178 == 58); ++g_178)
        {
            unsigned l_343 = 0x0001E747L;
            g_65 = p_56;
            if ((safe_rshift_func_int16_t_s_u(((p_56 | (((safe_lshift_func_uint8_t_u_s(((((safe_mul_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u(((0x3EDB1312L ^ ((((safe_sub_func_int8_t_s_s(((g_65 || (safe_div_func_int32_t_s_s(g_297, ((safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s(0x4683L, p_60)), ((65535UL != (safe_lshift_func_uint8_t_u_s(((safe_mod_func_int16_t_s_s(l_343, l_315)) , 0x37L), p_56))) == 0xD54AL))), 3)) & g_153)))) & 0L), 0x04L)) || p_57) , l_343) && g_14)) | p_56), g_318)) || p_57) ^ g_106), g_14)) , l_344) <= 0xA81CEC02L) , 255UL), g_106)) & 0x9E0B9C20L) , 0x2F83CE62L)) || l_345), 7)))
            {
                return l_346;
            }
            else
            {
                g_65 |= 0L;
            }
            if ((l_344 ^ (~p_56)))
            {
                l_349 &= (safe_mod_func_uint8_t_u_u(g_318, g_297));
                return p_59;
            }
            else
            {
                short l_360 = 0L;
                int l_378 = 0x917F77FBL;
                if (((l_307 > func_66(p_60, p_59, ((safe_mod_func_int16_t_s_s(((l_343 , ((safe_sub_func_int32_t_s_s(0x862802A2L, func_76((g_178 , ((~l_315) | (safe_mul_func_uint8_t_u_u((0UL < func_76(((((safe_sub_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(((1L > g_153) == l_360), 1UL)) , g_297), g_6)) ^ p_59) > g_297) , p_60), l_346)), l_343)))), g_153))) || p_59)) > 0x26L), l_343)) <= p_59), g_361, l_346)) >= l_360))
                {
                    if ((func_76(p_59, (((((+l_360) , (safe_rshift_func_int16_t_s_s(l_360, 0))) > ((safe_lshift_func_int16_t_s_s(((~(safe_sub_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((g_65 <= (p_56 | p_56)), ((safe_mod_func_uint32_t_u_u(((((p_59 > (safe_mod_func_int16_t_s_s(g_361, (safe_add_func_int8_t_s_s(func_76((safe_lshift_func_uint8_t_u_s(((g_318 ^ l_343) >= p_60), g_361)), g_153), g_318))))) >= l_343) | (-1L)) < g_65), g_297)) && (-2L)))), 0UL))) && 5UL), g_106)) | (-3L))) | g_14) , l_343)) , g_106))
                    {
                        l_349 = l_349;
                        l_246 = func_76(g_84, (((p_60 <= 0x053518A4L) == (g_361 >= g_6)) , 0x0A53F249L));
                    }
                    else
                    {
                        if (l_360)
                            break;
                    }
                }
                else
                {
                    l_378 = p_59;
                    if (p_60)
                        break;
                    l_246 = (l_343 , ((safe_sub_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint8_t_u(((g_297 != ((p_57 , (g_361 | 6L)) <= ((((!(safe_mod_func_uint32_t_u_u((((safe_div_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(p_57, 0xC6L)), (safe_mul_func_uint8_t_u_u(p_60, g_65)))) >= 0xC5L) , p_58), g_318))) <= g_318) || p_58) || l_244))) && l_392))), 4294967289UL)) || 0x3AL), p_60)) ^ l_393));
                }
                l_349 |= (safe_sub_func_int16_t_s_s(func_76(l_245, p_57), (l_346 == (safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u(p_57, g_65)) , l_343), (safe_lshift_func_uint16_t_u_u(0x1742L, (((safe_sub_func_uint32_t_u_u((g_106 > 0xE7BCL), l_246)) , 0x5F08096EL) | 0L))))))));
                return g_106;
            }
        }
        for (g_178 = 0; (g_178 > 37); ++g_178)
        {
            l_246 = p_60;
        }
    }
    return p_60;
}







static const char func_66(unsigned short p_67, char p_68, int p_69, char p_70, unsigned short p_71)
{
    char l_85 = 0x9EL;
    unsigned l_92 = 1UL;
    const unsigned char l_127 = 0x75L;
    int l_128 = 1L;
    int l_152 = (-6L);
    unsigned l_179 = 4294967295UL;
    const char l_227 = 0x92L;
    if (l_85)
    {
        unsigned short l_95 = 0xDD9BL;
        int l_96 = (-8L);
        int l_99 = 0xF8266116L;
        for (l_85 = 0; (l_85 == (-5)); l_85 = safe_sub_func_int8_t_s_s(l_85, 1))
        {
            short l_97 = 9L;
            int l_98 = 0x480A87E9L;
            g_65 = (safe_div_func_int32_t_s_s(func_76(p_71, (safe_div_func_int8_t_s_s(g_65, p_69))), p_70));
            l_98 = (((g_65 <= (func_76(((65535UL ^ (l_85 >= (l_85 & g_6))) <= l_92), ((safe_div_func_int16_t_s_s(((func_76(g_84, (g_14 , l_95)) <= g_65) | 0xC68D18E1L), p_68)) , p_68)) || l_96)) <= l_97) & p_67);
        }
        g_65 ^= l_92;
        l_99 = 0x4942BEBAL;
    }
    else
    {
        int l_126 = 0x87F61242L;
        char l_188 = 0x24L;
        int l_222 = 0x70E72662L;
        if (((0x0C3EL == l_92) ^ (safe_add_func_uint32_t_u_u(func_76((safe_sub_func_uint32_t_u_u(0x8D75FB74L, p_67)), g_6), 4294967290UL))))
        {
            g_106 ^= (safe_lshift_func_uint16_t_u_u(((g_14 == g_6) < g_65), p_70));
        }
        else
        {
            unsigned char l_131 = 0x8CL;
            int l_154 = 8L;
            int l_215 = 1L;
            unsigned l_219 = 0x9766197AL;
            for (p_68 = (-25); (p_68 < (-27)); p_68 = safe_sub_func_int16_t_s_s(p_68, 4))
            {
                const short l_115 = (-7L);
                l_128 = ((func_76(g_6, (g_84 , (safe_rshift_func_int16_t_s_u(func_76((((+func_76((safe_rshift_func_int16_t_s_u(((((((!(safe_lshift_func_int16_t_s_s(l_115, 6))) & 4294967295UL) && (0xDEL || (safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((((((func_76(((0xC8L >= (safe_add_func_uint16_t_u_u((((safe_add_func_int32_t_s_s((p_67 , g_6), ((((safe_sub_func_uint32_t_u_u(0xAF28F66BL, p_69)) == g_106) & l_126) >= l_127))) , p_69) <= l_92), g_6))) , p_67), l_85) > 0xC1C7BDE7L) , g_14) | g_65) > l_92) < p_70), g_6)), 0x9191L)))) , (-2L)) , g_106) , g_6), 14)), g_6)) >= 1UL) , 65535UL), l_85), 2)))) ^ p_69) < g_65);
                l_131 = ((p_69 && ((safe_div_func_uint32_t_u_u(g_6, (g_84 , 4294967290UL))) & (p_71 || p_69))) < p_69);
            }
            if (((p_67 == (l_128 , (l_131 , (l_126 == ((4294967295UL | (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s((-1L), (safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((!(safe_rshift_func_int16_t_s_s(((p_67 ^ (safe_add_func_int16_t_s_s(l_131, (safe_add_func_uint32_t_u_u(g_6, l_126))))) , g_6), 0))), p_67)), p_69)), 0)))), l_152)), g_153))) > g_65))))) && l_154))
            {
                char l_177 = 1L;
                for (g_106 = 27; (g_106 != 55); g_106 = safe_add_func_int32_t_s_s(g_106, 8))
                {
                    g_65 = l_92;
                }
                l_179 = ((((((func_76((0x317AL && (safe_mul_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s((p_70 < (((safe_lshift_func_int8_t_s_u(3L, (safe_sub_func_uint8_t_u_u(p_67, l_127)))) , g_106) & func_76((safe_div_func_int32_t_s_s(((safe_add_func_uint8_t_u_u((safe_div_func_int32_t_s_s((g_14 ^ ((((g_14 & ((func_76(((safe_sub_func_uint8_t_u_u(((0xBDA80610L ^ (-7L)) != p_69), p_67)) , g_106), l_126) & g_65) || p_69)) , p_69) | g_65) == 0x0BL)), 0xDF3A3A19L)), g_106)) , l_177), g_178)), p_68))), 0xBCL)) < 0x00L) > p_70), 1UL))), g_178) < p_67) == 1UL) >= l_131) != p_68) <= p_67) && 0xE541L);
            }
            else
            {
                unsigned l_197 = 4294967294UL;
                int l_218 = (-5L);
                if (((safe_div_func_int16_t_s_s(l_179, (safe_lshift_func_uint16_t_u_s((((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s(g_65, g_84)), g_6)) > (l_188 != g_65)) >= (safe_rshift_func_uint16_t_u_u(65529UL, p_68))), p_71)))) , (-5L)))
                {
                    unsigned short l_198 = 0xC73AL;
                    l_128 = (safe_rshift_func_int8_t_s_u((-5L), (safe_add_func_int32_t_s_s(g_14, (safe_add_func_uint16_t_u_u((func_76(l_197, l_198) && (((1UL > (func_76((func_76(((safe_lshift_func_int8_t_s_u(p_67, (~(((safe_rshift_func_int8_t_s_u((safe_div_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u((0xB0L | func_76((g_106 | g_14), l_92)), p_71)) != l_188) != 0UL), (-4L))), g_65)) , p_70) ^ l_131)))) == p_70), l_197) | g_6), l_154) != p_68)) == 1L) & 0x1A08L)), g_6))))));
                    if ((((g_178 >= ((-1L) < (((((safe_add_func_uint32_t_u_u(p_69, g_153)) < (p_67 , (((((0x5BL != (safe_sub_func_int8_t_s_s(p_68, ((safe_mod_func_int8_t_s_s(l_92, g_178)) <= g_6)))) == 0x4E49L) & p_71) && 0x7E21AE28L) & 0x39E76076L))) <= 0L) < (-5L)) != p_71))) && g_65) , 0xB660CD2BL))
                    {
                        l_128 = l_215;
                        g_65 = (!((((l_198 > (g_14 , ((((((+g_106) , (p_67 && g_84)) , 0x39FE9454L) ^ (((((p_71 <= 0x87DA6A6FL) <= g_106) , 0UL) >= 0x11L) & 0x4965L)) >= 0x4406L) == p_69))) , g_84) >= p_67) < g_153));
                        g_65 &= (l_126 != 6L);
                    }
                    else
                    {
                        l_128 ^= 0xB0DACAF3L;
                        g_65 = (-9L);
                        l_218 = ((safe_add_func_uint32_t_u_u(g_153, p_69)) ^ 0xFECBL);
                        g_65 = 5L;
                    }
                    l_128 = l_219;
                }
                else
                {
                    unsigned l_232 = 0x5F4DCE59L;
                    l_222 = (safe_lshift_func_int16_t_s_u(l_197, 0));
                    g_65 = (((safe_mul_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(l_227, ((safe_add_func_int32_t_s_s((-1L), p_70)) | 0xC39FD4B7L))) && 0L), l_152)) >= g_14) >= (safe_rshift_func_uint8_t_u_u(((l_232 & (l_126 > (-1L))) || p_68), 7)));
                    return g_14;
                }
            }
            return l_222;
        }
        l_128 = func_76((safe_lshift_func_uint16_t_u_u(p_70, 5)), l_152);
        l_128 = l_92;
    }
    return l_85;
}







static int func_76(unsigned short p_77, int p_78)
{
    g_84 = g_6;
    return p_78;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_297, "g_297", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    transparent_crc(g_361, "g_361", print_hash_value);
    transparent_crc(g_523, "g_523", print_hash_value);
    transparent_crc(g_543, "g_543", print_hash_value);
    transparent_crc(g_573, "g_573", print_hash_value);
    transparent_crc(g_618, "g_618", print_hash_value);
    transparent_crc(g_655, "g_655", print_hash_value);
    transparent_crc(g_701, "g_701", print_hash_value);
    transparent_crc(g_785, "g_785", print_hash_value);
    transparent_crc(g_803, "g_803", print_hash_value);
    transparent_crc(g_858, "g_858", print_hash_value);
    transparent_crc(g_1211, "g_1211", print_hash_value);
    transparent_crc(g_1221, "g_1221", print_hash_value);
    transparent_crc(g_1227, "g_1227", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
