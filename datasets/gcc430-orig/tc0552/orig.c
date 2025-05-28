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



static int g_20 = 0xB060D2F3L;
static unsigned short g_80 = 0UL;
static int g_81 = (-5L);
static char g_97 = 5L;
static unsigned g_101 = 4294967293UL;
static unsigned char g_102 = 0x5FL;
static int g_108 = 0xA86AC4A7L;
static unsigned char g_119 = 2UL;
static int g_138 = 0xF343CD12L;
static int g_139 = 1L;
static unsigned char g_140 = 0x61L;
static const unsigned g_159 = 0x55BC8499L;
static unsigned g_163 = 0xAA345BFCL;
static unsigned g_187 = 0x13A8B7B4L;
static int g_207 = 1L;
static unsigned g_219 = 0xA21636CAL;
static char g_238 = 0x4CL;
static const short g_241 = 0x8241L;
static unsigned g_242 = 0xA88E2637L;
static int g_259 = 0x6E705DC7L;
static unsigned g_264 = 9UL;
static short g_267 = 0x4912L;
static short g_270 = (-1L);
static short g_290 = 0xAB82L;
static char g_379 = 6L;
static unsigned g_401 = 4294967290UL;
static int g_647 = 0L;
static const int g_748 = 1L;
static unsigned g_771 = 0xFFEBE047L;
static unsigned char g_797 = 0x0DL;
static unsigned g_964 = 0xB2C799DDL;
static char g_967 = 0x2DL;
static unsigned char g_975 = 0xA1L;
static int g_1018 = 0x963CE53CL;



static int func_1(void);
static unsigned char func_4(int p_5, char p_6, unsigned char p_7, short p_8);
static int func_9(short p_10, char p_11, unsigned char p_12, short p_13, char p_14);
static short func_16(unsigned p_17, unsigned short p_18, int p_19);
static char func_21(unsigned p_22, unsigned short p_23);
static unsigned char func_30(char p_31, unsigned p_32, char p_33);
static short func_36(char p_37, int p_38, unsigned p_39, unsigned p_40, int p_41);
static const int func_50(unsigned char p_51, short p_52, unsigned p_53, unsigned char p_54, unsigned p_55);
static char func_61(unsigned p_62);
static unsigned short func_68(const unsigned p_69, const int p_70, unsigned p_71, int p_72, unsigned short p_73);
static int func_1(void)
{
    char l_15 = 0x66L;
    int l_1019 = 0xA7AF22CBL;
    l_1019 = (g_1018 = (safe_mod_func_uint16_t_u_u((func_4(((func_9((+0x5A1FL), (((l_15 ^ (func_16(l_15, g_20, (g_108 = (0x39C7C6F1L >= (g_270 &= (g_20 > (func_21(l_15, l_15) >= l_15)))))) || g_119)) < 3L) , 0x99L), g_159, g_20, g_241) <= g_748) , (-1L)), g_159, g_159, g_647) || g_748), g_748)));
    g_138 = ((0xF0L > (safe_add_func_uint32_t_u_u(0xAF3F3659L, ((safe_rshift_func_int8_t_s_u((l_1019 = (((0x57DFBD2EL & 0L) , ((g_108 & 0xD8255A8FL) ^ g_207)) <= 0UL)), func_68((((g_80 = (l_15 > (-8L))) == g_81) , l_15), g_259, l_15, g_81, g_20))) , g_139)))) < l_15);
    return g_138;
}







static unsigned char func_4(int p_5, char p_6, unsigned char p_7, short p_8)
{
    unsigned l_949 = 0x5C53BDFFL;
    unsigned l_952 = 8UL;
    int l_959 = 0L;
    int l_965 = 0x2C6DFDA1L;
    int l_966 = 0x513E1EA0L;
    int l_968 = 0x7A60415EL;
    int l_979 = (-4L);
    l_949 |= g_219;
    p_5 = g_80;
    l_968 ^= ((((safe_rshift_func_uint16_t_u_u(l_952, func_50((safe_add_func_uint8_t_u_u((((safe_add_func_uint32_t_u_u(((l_966 |= (safe_mod_func_int32_t_s_s((!(p_6 >= ((l_959 = g_138) | l_952))), ((safe_sub_func_uint16_t_u_u(l_952, (p_7 >= (safe_sub_func_uint16_t_u_u(p_5, func_68((((l_965 = ((l_952 < ((0UL ^ 0x032FL) , g_964)) != 0x4AL)) > l_952) | 0xB3L), p_5, p_5, p_7, p_8)))))) , l_952)))) ^ p_6), 0x45A84DB3L)) <= 0UL) , p_7), g_771)), g_238, p_7, p_7, g_967))) , g_102) , g_119) != p_5);
    if ((safe_sub_func_int32_t_s_s(0xB0E14692L, (func_9(l_959, (p_6 && p_5), p_7, g_119, (l_965 , (safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(func_30((l_968 = (l_952 > p_7)), g_140, p_6), 5)), g_975)))) >= l_952))))
    {
        g_81 = g_264;
    }
    else
    {
        int l_978 = 0L;
        int l_996 = 9L;
        char l_1001 = 0x09L;
        g_81 = ((safe_mod_func_uint8_t_u_u(((l_978 && l_979) >= (p_8 >= (g_379 , g_159))), (safe_sub_func_uint16_t_u_u(g_241, (safe_lshift_func_int16_t_s_s(1L, 11)))))) , p_8);
        if ((safe_rshift_func_int16_t_s_u((((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((func_50(l_978, (!l_968), l_952, ((l_1001 = (safe_add_func_uint16_t_u_u((((l_959 = func_21(g_101, (l_996 ^= (l_965 , (safe_add_func_int16_t_s_s(0x073CL, g_647)))))) <= ((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((g_159 , 0x49CDL), 12)), p_8)) < p_6)) & p_7), l_979))) , l_979), l_966) , 0x550714D1L), l_968)), 2)), 2)) != p_6) , p_5), 14)))
        {
            int l_1002 = (-1L);
            l_959 = (func_9(p_7, func_68(((((l_1002 , (+(((l_978 , (((l_978 | (l_978 || (0x740CL != l_1002))) <= (safe_lshift_func_uint16_t_u_u((p_6 == (g_797 = (!g_797))), 15))) >= (-8L))) >= 0x8FL) , g_80))) || g_140) , 0x72L) , p_6), g_102, g_270, l_1002, l_996), g_771, l_968, l_959) >= 0xB602L);
            p_5 = 0x38615275L;
        }
        else
        {
            unsigned l_1013 = 0xFBAB1900L;
            p_5 = (safe_add_func_int8_t_s_s(func_30((1L || (safe_lshift_func_int16_t_s_u(((p_6 = func_21((safe_mod_func_uint16_t_u_u((l_968 = ((g_238 = g_259) , (((((g_119 <= (l_978 = ((l_949 , 0x90L) , 0xE35529D2L))) , l_959) > (((l_949 & ((func_68(l_949, l_1001, p_7, p_8, l_952) < p_8) >= g_797)) == p_7) , g_748)) > g_270) && p_7))), g_108)), p_7)) == g_270), g_771))), l_996, p_8), 0x72L));
            g_81 = (-1L);
            l_978 &= l_1013;
        }
        l_996 = ((safe_mod_func_uint16_t_u_u(func_16(p_8, (((l_959 &= (g_290 = (safe_sub_func_int8_t_s_s(l_949, 0x79L)))) | (func_21(p_6, ((l_1001 < l_978) && g_259)) ^ p_6)) , 1UL), p_5), g_159)) && 1L);
        l_959 ^= g_238;
    }
    return p_7;
}







static int func_9(short p_10, char p_11, unsigned char p_12, short p_13, char p_14)
{
    short l_943 = (-1L);
    int l_946 = 0x4C3CBC53L;
    int l_947 = (-9L);
    int l_948 = 0x74079DFFL;
    l_947 = ((l_943 ^ p_11) | (p_11 | ((l_943 | (l_943 < p_13)) | (safe_lshift_func_int16_t_s_s(0L, func_61(((((((((l_946 = (p_10 , p_14)) < g_797) > p_14) >= (-1L)) > l_943) <= 0x05L) , 0x8EL) == l_943)))))));
    g_138 = p_11;
    return l_948;
}







static short func_16(unsigned p_17, unsigned short p_18, int p_19)
{
    unsigned short l_275 = 0x0A80L;
    int l_280 = 7L;
    unsigned short l_298 = 0x98DAL;
    int l_309 = (-10L);
    unsigned char l_364 = 255UL;
    short l_425 = 0x093FL;
    unsigned short l_480 = 0x781DL;
    const unsigned short l_490 = 0xC787L;
    int l_499 = 0x0CFCD5D4L;
    unsigned l_587 = 0UL;
    unsigned l_588 = 4294967295UL;
    const int l_631 = (-1L);
    char l_648 = 0L;
    int l_651 = 0xFE1940FDL;
    int l_669 = 0xCD44D46BL;
    unsigned l_681 = 2UL;
    unsigned short l_699 = 6UL;
    unsigned l_752 = 0xD1BC1759L;
    const unsigned l_769 = 4294967288UL;
    unsigned short l_770 = 0UL;
    int l_832 = 0xA9EFE2B2L;
    short l_914 = 0x6134L;
    int l_926 = (-9L);
    unsigned char l_941 = 0x61L;
    unsigned short l_942 = 0xCED5L;
    for (g_119 = 0; (g_119 <= 30); g_119 = safe_add_func_uint8_t_u_u(g_119, 1))
    {
        short l_289 = 8L;
        int l_291 = 0x2BA02E1FL;
        int l_299 = (-1L);
        unsigned l_302 = 2UL;
        int l_400 = 6L;
        g_207 = (!(l_291 = (p_18 , ((((((((((l_275 = p_17) >= (safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u((g_219 || (((safe_unary_minus_func_int32_t_s(((g_187 == ((l_280 < (g_119 < (safe_rshift_func_int8_t_s_s((!(func_68(((((g_140 = (safe_sub_func_int16_t_s_s((func_30((g_290 &= ((g_259 | func_30(((safe_rshift_func_int16_t_s_s(l_280, (safe_mod_func_int8_t_s_s(l_289, g_108)))) , l_280), l_280, g_97)) != (-7L))), p_17, l_280) != g_119), p_17))) != l_289) || 65533UL) <= 4294967291UL), l_289, p_18, g_219, p_18) ^ 0x7A06L)), 1)))) | 4294967295UL)) == g_102))) ^ (-10L)) , p_18)))), 2))) , g_20) ^ 6L) || 0L) < (-6L)) && 0L) ^ g_267) & g_267) > p_19))));
        g_207 = ((safe_rshift_func_uint16_t_u_u(func_68((((((((0xD7C6L & (safe_mod_func_uint8_t_u_u((l_280 = l_289), (l_299 &= (p_19 >= (g_267 = (func_30(func_68(p_19, ((safe_mod_func_int8_t_s_s(func_68((l_291 = 0xA89D96C7L), p_17, g_119, g_259, (g_140 && p_19)), l_289)) <= l_275), l_289, l_298, g_139), g_264, l_289) , 0xD351L))))))) == 0x4566L) & p_18) < p_18) != 0L) | p_19) & g_140), p_19, p_18, g_163, l_289), 10)) != g_101);
        if (p_17)
            break;
        if ((g_20 , ((l_275 , (l_280 = (l_299 ^= p_18))) & ((safe_mod_func_uint8_t_u_u((g_102 = (((((l_302 , (safe_lshift_func_int16_t_s_s((0x78338062L < (l_291 |= g_81)), func_30(((safe_sub_func_uint32_t_u_u(p_19, (((safe_sub_func_uint32_t_u_u(((l_309 = ((g_270 , ((func_30(g_20, g_140, g_108) < (-4L)) <= g_119)) , 0x5766L)) , 0xA7950DB6L), l_289)) , 0xD038L) >= l_289))) , g_238), g_102, g_259)))) ^ p_17) , l_291) <= 255UL) & 65533UL)), l_298)) && l_289))))
        {
            int l_317 = 0xBCFED014L;
            int l_318 = 0x0B4C5DE5L;
            int l_343 = 0x4E932698L;
            short l_344 = 0x3EF4L;
            int l_368 = (-3L);
            if (l_309)
            {
                int l_310 = 2L;
                int l_337 = 0x6CB785FBL;
                int l_338 = 1L;
                l_318 = (l_310 >= ((g_187 = (safe_rshift_func_uint8_t_u_s((0xFB49L > p_18), (safe_add_func_uint32_t_u_u(l_291, func_68(l_289, p_19, ((l_280 = ((safe_rshift_func_int8_t_s_u(l_317, 4)) , (((g_242 ^ l_298) != 0x6440DD2EL) || p_17))) , 4294967291UL), l_317, p_17)))))) , p_17));
                g_81 = (safe_sub_func_int32_t_s_s((((g_102 = ((l_280 = (0x91931BB2L > (safe_lshift_func_int16_t_s_u(g_97, 0)))) != (g_187 == ((((safe_lshift_func_uint16_t_u_s(((((safe_lshift_func_int16_t_s_u(((-1L) >= (((l_337 = ((p_18 , 0L) | (((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((l_310 &= 0xA6L), (((safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(p_17, func_30((p_18 , g_102), g_140, p_17))), l_318)) | g_119) ^ 0L))), p_17)), 0xA1BAL)) >= 5UL) & (-3L)))) == 0L) | p_19)), 5)) , p_19) ^ p_18) ^ 0x93L), g_242)) > l_338) , p_18) < g_163)))) || g_140) != p_18), l_302));
                for (l_318 = 0; (l_318 >= (-23)); l_318 = safe_sub_func_uint16_t_u_u(l_318, 8))
                {
                    short l_345 = 0xB7DBL;
                    l_309 = ((((p_19 <= (safe_mod_func_uint8_t_u_u(((l_343 ^= 0x4BL) , (func_68(((((((g_270 & ((l_344 ^= l_302) && (l_345 , (safe_sub_func_int32_t_s_s((((((g_270 , l_337) ^ ((l_318 | (p_17 = ((((l_337 , l_317) ^ 0x3ECDL) & p_18) || p_18))) != p_19)) | l_318) == p_19) < l_280), l_310))))) == p_18) != 4294967293UL) < 1L) ^ 0xA0L) ^ p_19), p_18, g_140, l_338, g_20) != 0x89L)), 8L))) >= g_102) && p_18) || l_345);
                }
            }
            else
            {
                int l_367 = 0x851A1F88L;
                l_368 |= (g_290 > ((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(0xC8L, (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s((0x68A607B7L != (p_17 = g_259)), (l_343 |= ((safe_rshift_func_int8_t_s_s((((((safe_mod_func_uint32_t_u_u(l_318, func_68((((safe_add_func_uint8_t_u_u(((p_18 ^= (safe_mod_func_int8_t_s_s((g_97 < 5UL), l_364))) && (safe_lshift_func_int8_t_s_s(l_317, p_19))), p_19)) | g_163) == p_19), g_159, g_238, g_139, l_291))) & 0xF105L) && 0x573CL) , 0L) , 0L), 3)) & l_344)))), 3)))), l_367)) > g_139));
            }
            g_138 = (l_280 , (((-1L) > ((g_242 != 5UL) == 0xFC1B60DAL)) & g_241));
        }
        else
        {
            unsigned short l_398 = 0xCB0CL;
            int l_399 = 1L;
            int l_402 = (-1L);
            l_402 = ((safe_rshift_func_uint8_t_u_u(((p_18 = ((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(0x24L, 0)), (func_30((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(l_364, 4)), 0)), p_17, (l_291 = ((((g_379 &= 0xCBL) >= ((g_401 ^= (l_400 |= ((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(((l_280 &= (((((safe_rshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((l_299 = ((safe_add_func_int16_t_s_s(p_17, (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(0xDBL, func_68(((l_399 = (safe_add_func_int32_t_s_s(((safe_add_func_uint16_t_u_u((((g_241 <= 4294967295UL) | (l_309 ^= func_68(p_17, g_140, l_398, l_398, l_364))) & g_108), p_18)) >= 0x674AL), l_289))) == l_291), g_101, p_17, p_18, p_18))), p_19)))) | 0x43D81265L)), g_241)), g_241)) <= l_398) == l_302) > 0x81189C19L) <= g_219)) == 0xFA23L), (-2L))), 3)) <= 0xD2BD3837L))) & p_18)) , g_97) != 7UL))) < l_302))) , g_242)) >= l_275), 2)) , 0x52DF0160L);
        }
    }
    for (g_163 = (-6); (g_163 != 16); g_163 = safe_add_func_uint8_t_u_u(g_163, 7))
    {
        unsigned l_407 = 3UL;
        char l_411 = 0x54L;
        int l_415 = 0x7C36A867L;
        int l_475 = 0x568E9172L;
        int l_489 = 1L;
        int l_611 = 0xDF5F5C83L;
        short l_679 = 0x2D64L;
        unsigned char l_695 = 247UL;
        int l_718 = 0x2DF3BCC7L;
        unsigned short l_776 = 0xC1D8L;
        short l_777 = (-2L);
        int l_790 = 2L;
        unsigned l_831 = 0x381915A7L;
        const unsigned char l_924 = 0x5AL;
        if ((l_275 , (safe_rshift_func_int16_t_s_u(l_407, l_407))))
        {
            short l_410 = 0x83D3L;
            int l_412 = (-1L);
            const int l_457 = 0x70EF0CBEL;
            unsigned char l_458 = 0UL;
            if (((safe_add_func_int8_t_s_s((l_410 &= 1L), l_411)) , ((l_415 = ((65531UL < func_30(p_18, ((l_412 |= g_242) == (g_238 ^= p_19)), ((((((((safe_sub_func_uint8_t_u_u((p_17 , l_275), g_81)) , 0x72L) >= l_407) , l_411) , 0xBAL) <= g_97) & 1L) == 0xB09BAB7CL))) < p_19)) || p_18)))
            {
                int l_428 = 0L;
                g_207 |= ((safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((g_379 , (safe_unary_minus_func_int16_t_s((g_270 = (safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((g_80 <= p_19), g_159)), ((l_425 & (safe_lshift_func_uint16_t_u_u(l_412, (l_298 | (l_415 != l_428))))) || l_364))))))), l_428)), 0x2183DC92L)) , g_139);
            }
            else
            {
                int l_437 = (-1L);
                int l_438 = 0xB69C4481L;
                int l_439 = 0L;
                int l_440 = (-8L);
                l_440 ^= func_68(g_140, (safe_rshift_func_int8_t_s_u((0x016AD1CEL <= g_242), 3)), ((((l_438 = ((g_138 <= l_309) , (((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((((l_412 ^= ((g_207 != g_80) & (((safe_add_func_uint8_t_u_u(g_290, p_17)) , 1L) != p_17))) || l_437) | 1UL), g_290)) | p_18), g_401)) , 0x52FBL) <= l_309))) && l_438) <= 0x0B08DB74L) , l_438), g_379, l_439);
                g_81 = func_30((((0x77E1L & (((~(((safe_sub_func_int16_t_s_s((((l_412 > 0x26L) , ((l_438 != (g_238 , (l_439 = p_17))) & (safe_add_func_int16_t_s_s((g_267 = ((((g_270 ^= (g_379 <= p_19)) < (((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_u(((p_19 , 0UL) ^ g_163), 0)) || p_17), p_19)) && 4L) && p_19)) & l_275) & 6UL)), g_241)))) && l_298), l_280)) & 0xB4L) , l_275)) || 0xB599L) , g_259)) , g_264) != l_438), g_140, p_19);
                g_207 ^= (l_458 = (safe_sub_func_uint8_t_u_u(0x67L, (((((p_19 || g_219) < l_309) > (safe_add_func_uint8_t_u_u((((1UL || g_140) | func_30((safe_rshift_func_uint8_t_u_s(0x7BL, func_68(((((((safe_rshift_func_int16_t_s_s((func_30(p_19, l_425, g_81) < 255UL), 13)) != l_412) && 0x8D68B320L) | 0xD1AE066AL) && 0x61533CC7L) < g_108), l_457, l_425, g_102, l_457))), p_19, g_219)) || g_264), 253UL))) <= 0xFABFL) ^ l_407))));
            }
            l_412 = (-1L);
            l_309 = (0x91L > l_458);
        }
        else
        {
            unsigned l_459 = 0xD5A2C046L;
            int l_466 = 0xF47BBD48L;
            l_475 = (((func_68((l_459 = (p_17 = 0xC0E192FCL)), (safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((g_290 = 0x4815L), (g_379 != func_30((safe_sub_func_int8_t_s_s(p_19, (l_466 , (g_140 |= func_30((safe_mod_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u(0x98L, 5)) <= (l_280 |= ((l_415 = (func_30(((((g_270 > 4294967295UL) == ((safe_mod_func_int32_t_s_s(func_30(g_207, p_19, g_119), p_18)) , 65528UL)) || p_19) || l_466), g_97, p_18) | l_298)) >= g_241))), p_19)) <= p_19), p_19)), p_19, g_80))))), l_411, p_19)))), l_466)), g_270, g_238, p_18) , p_17) , p_19) , 1L);
        }
        if ((l_475 = (p_19 , (safe_mod_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(l_475, (l_480 >= p_19))) & (safe_mod_func_int8_t_s_s((((safe_add_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(1UL, (-2L))) != ((g_101 |= (func_68((safe_add_func_int32_t_s_s(l_415, (g_138 &= (g_207 = (((g_219 > (((l_489 &= ((g_163 < g_401) , g_242)) <= l_280) ^ g_270)) || l_280) | 0L))))), l_490, p_17, g_139, l_475) || g_207)) && g_139)), p_18)) < 0UL) || g_20), p_18))), g_379)))))
        {
            short l_506 = 0xA8DEL;
            char l_509 = 1L;
            l_499 = (safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((l_309 ^= g_259))), ((l_280 = ((safe_sub_func_uint8_t_u_u(func_30(((safe_unary_minus_func_int8_t_s((func_68(g_102, (l_275 > 0xFFD9L), g_219, func_68((0UL <= l_490), p_17, (safe_mod_func_int32_t_s_s(g_102, 0xA1A08D1AL)), l_425, g_140), g_163) || p_18))) , l_415), g_140, g_401), p_19)) || 0x2DE71B96L)) < g_163)));
            l_499 ^= ((func_68((((((p_18 > (safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(0x7784L, 6)), l_506)), func_30((((((p_19 < (-1L)) < ((safe_mod_func_uint8_t_u_u((func_68(g_270, (p_17 ^ l_506), l_506, l_489, l_506) | 0x61L), 248UL)) | l_480)) <= p_18) >= g_187) , 0xECL), p_17, g_20)))) && 0x697F7234L) , l_475) || p_19) != g_267), g_159, g_140, g_187, p_19) | l_509) < l_506);
            l_280 = ((l_364 >= l_480) , p_19);
        }
        else
        {
            unsigned char l_510 = 0x7AL;
            int l_513 = 0x0E9538ACL;
            const char l_554 = 0x91L;
            unsigned char l_602 = 252UL;
            const unsigned char l_649 = 0xFBL;
            int l_696 = 0L;
            unsigned char l_740 = 247UL;
            const unsigned l_755 = 8UL;
            if (l_510)
                break;
            if (l_415)
            {
                int l_526 = 6L;
                l_513 &= (p_18 , (safe_rshift_func_uint8_t_u_s(g_81, l_411)));
                for (p_18 = 0; (p_18 <= 40); p_18++)
                {
                    int l_525 = 7L;
                    l_280 = (safe_lshift_func_int16_t_s_u((safe_unary_minus_func_uint32_t_u(g_159)), (safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s(((func_30(g_264, (((((l_309 |= ((p_18 == p_17) , l_525)) , (l_526 = l_526)) && (((0x01533F68L > p_17) < (safe_lshift_func_uint16_t_u_u((l_510 <= 8UL), 0))) , p_18)) > 0x7EABL) <= l_415), l_510) && l_415) && l_475), g_140)) > g_140), 12)), p_18))));
                }
                l_513 = l_526;
            }
            else
            {
                unsigned l_575 = 0UL;
                int l_593 = 0L;
                for (l_275 = 21; (l_275 < 39); l_275 = safe_add_func_uint8_t_u_u(l_275, 3))
                {
                    unsigned char l_548 = 0UL;
                    int l_549 = (-7L);
                    unsigned l_590 = 5UL;
                    int l_612 = 0x7E6D2E6BL;
                    if ((((l_280 = 0x1AEDL) <= (safe_add_func_uint32_t_u_u(4294967295UL, ((safe_mod_func_int16_t_s_s((func_30((func_30((!(safe_add_func_uint16_t_u_u(p_18, ((safe_lshift_func_uint16_t_u_u(65528UL, p_17)) != (safe_sub_func_uint32_t_u_u(g_290, ((p_19 > ((g_101 = ((((safe_add_func_int16_t_s_s((safe_unary_minus_func_int32_t_s(p_18)), (~(safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((((+(p_17 || 0xC658L)) == p_18) , 0xF1L), 0L)), 6))))) | p_17) & l_548) & 2UL)) && 0L)) != g_20))))))), p_17, g_401) < g_238), l_275, l_510) , g_159), 0x8C5CL)) , g_101)))) || 0xD05A995FL))
                    {
                        unsigned l_555 = 4294967290UL;
                        int l_556 = (-1L);
                        g_81 = 0L;
                        l_549 &= p_18;
                        l_556 = (g_207 |= (2UL < ((g_238 , p_19) ^ (safe_add_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(func_68(func_68(l_554, l_475, p_18, g_80, g_267), l_480, p_19, l_411, l_510), l_555)) , p_19), 7UL)))));
                        l_549 = (l_556 , g_20);
                    }
                    else
                    {
                        unsigned l_576 = 0xDA68ADCCL;
                        l_489 = (func_68((p_17 & (safe_add_func_uint16_t_u_u(g_259, (((safe_lshift_func_int16_t_s_s((g_119 < func_68(((safe_add_func_uint32_t_u_u(0UL, (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s(((l_554 , (safe_lshift_func_uint16_t_u_s(g_270, 3))) > (safe_rshift_func_uint16_t_u_s(g_163, 14))), (safe_lshift_func_int16_t_s_s(p_18, (safe_add_func_uint32_t_u_u((l_576 |= ((g_379 != l_480) , l_575)), g_290)))))), 7)))) == p_18), p_18, g_401, g_163, g_108)), g_20)) < 0xBFD8L) , 0L)))), g_140, l_575, p_18, g_101) | g_241);
                        return g_108;
                    }
                    for (l_489 = 9; (l_489 < (-8)); l_489 = safe_sub_func_uint32_t_u_u(l_489, 6))
                    {
                        int l_589 = 0x23799F67L;
                        if (g_20)
                            break;
                        l_589 = (g_138 = (0xC7E1L < (safe_add_func_int8_t_s_s((((~((safe_mod_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(g_119, (p_18 = ((l_588 &= (func_68(g_187, g_138, ((g_139 <= p_19) , ((((func_68(p_17, (l_587 = (((safe_lshift_func_uint16_t_u_s(((((l_513 && (l_475 = 0L)) , l_513) >= g_290) <= 0xE2E490FAL), p_18)) ^ 5L) ^ g_140)), g_219, g_259, l_415) && 0x809AL) <= 0UL) , 3UL) > p_17)), p_19, g_101) | 0x1D580069L)) <= g_163)))) , p_17), l_575)) && p_17)) , g_379) > g_20), g_379))));
                        l_549 |= (l_590 | p_19);
                        l_549 = (((safe_lshift_func_int8_t_s_u(p_19, 5)) == (l_593 = 1UL)) , (safe_lshift_func_uint16_t_u_u((0x1DL & g_238), (func_30(func_68(l_513, (g_290 , 1L), l_589, ((safe_sub_func_int32_t_s_s((g_81 = l_589), l_593)) < 1UL), l_587), g_267, p_18) , p_18))));
                    }
                    l_612 |= ((p_17 , ((l_549 = ((l_549 , g_20) | (safe_add_func_int8_t_s_s(g_379, ((safe_lshift_func_int16_t_s_u((!(l_513 = l_593)), 7)) <= (l_575 ^ (((g_219 = func_30(l_602, ((safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((-9L), (l_309 = 0UL))), g_264)) , p_18) < l_611), p_17)), g_264)) > g_379), p_18)) != g_270) > g_238))))))) < p_17)) | p_19);
                    if ((g_138 >= ((4294967295UL > p_17) | p_17)))
                    {
                        short l_623 = 0x2520L;
                        l_309 = (safe_add_func_int8_t_s_s(g_242, ((p_18 & ((g_259 < (l_510 >= (((safe_add_func_int16_t_s_s(p_17, ((((safe_sub_func_uint8_t_u_u((g_119 | ((-1L) == g_159)), p_19)) , 0x6A71378DL) == l_590) || g_138))) && g_238) > (-7L)))) && p_19)) || 0x9C18EF09L)));
                        l_549 = (0xEF88L ^ (l_411 , (((g_119 = ((l_554 || (g_101 = func_68((l_489 = p_18), (l_611 = g_290), g_140, (((g_290 == (l_612 , g_238)) , 0x5BL) >= 0x30L), l_411))) && g_20)) < 0x32L) , 1UL)));
                        g_207 = 0x6F79AB82L;
                        l_623 = p_17;
                    }
                    else
                    {
                        g_81 ^= 0x04C0E3D8L;
                    }
                }
                l_513 |= 0xFF23EF06L;
                l_611 |= ((safe_sub_func_int32_t_s_s((0L == g_163), g_241)) , (safe_rshift_func_int16_t_s_u(p_18, 15)));
                if (g_138)
                    break;
            }
            if ((g_119 >= 0xC9689EDBL))
            {
                int l_628 = (-1L);
                int l_632 = (-1L);
                int l_694 = 0x7548686DL;
                l_499 = ((((l_628 = g_138) , (((safe_lshift_func_uint8_t_u_s(0xDEL, 7)) && p_18) ^ 0xE059L)) < p_18) ^ l_475);
                if (func_68(l_631, p_18, g_207, (l_628 , g_80), (l_632 |= (((l_628 < g_187) || g_379) <= func_30(l_490, l_298, g_242)))))
                {
                    const unsigned char l_635 = 0x03L;
                    for (g_108 = 17; (g_108 > 26); ++g_108)
                    {
                        int l_650 = 8L;
                        g_138 = ((l_628 > l_635) | ((g_102 , g_81) > ((((l_632 = (safe_unary_minus_func_int16_t_s(((safe_rshift_func_int16_t_s_s(p_18, 10)) != ((+p_17) <= ((safe_rshift_func_uint8_t_u_u((((p_18 != (((safe_mod_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_u((l_635 > (((g_290 = (((g_20 ^ l_415) == 0xAA83L) , g_647)) ^ g_270) , g_159)), 3)) >= 0UL) ^ g_101), 0xD86AF9B8L)) <= l_648) | l_649)) , g_102) , 255UL), l_650)) | g_20)))))) , 0UL) & g_102) , 1L)));
                    }
                }
                else
                {
                    unsigned l_662 = 4294967287UL;
                    int l_680 = 0xD4287D71L;
                    g_207 = ((l_480 & (l_280 = (l_513 &= ((l_651 ^ (safe_rshift_func_uint8_t_u_u(func_30((safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((g_102 ^ l_662), ((safe_sub_func_int16_t_s_s(func_68(p_19, ((0x93L && (l_632 = ((safe_lshift_func_int8_t_s_s((0x1D3438C2L | ((l_632 == (g_270 = ((l_602 , 0L) >= 0xE076L))) == g_379)), l_669)) >= (-1L)))) ^ l_475), g_163, l_662, l_628), p_19)) , l_662))), p_17)), 14)) != g_207), 13)), l_298, p_18), 5))) == p_17)))) || 0UL);
                    l_680 = (safe_rshift_func_int16_t_s_s((p_19 , (safe_lshift_func_int16_t_s_s((l_679 |= (safe_rshift_func_int8_t_s_u((p_19 <= ((+((safe_unary_minus_func_int8_t_s(func_68((g_219 = (l_649 && (l_513 &= (l_632 >= (+(+(0L >= (safe_sub_func_uint32_t_u_u(g_219, func_30(g_242, p_17, p_19)))))))))), l_364, p_17, l_475, g_647))) < p_17)) & 250UL)), p_19))), l_632))), p_19));
                }
                l_415 = (g_207 = (g_270 == (func_30(p_17, l_681, (p_18 , func_30((safe_add_func_int32_t_s_s(((safe_mod_func_int8_t_s_s(((l_696 = (p_18 <= ((((l_628 >= (-8L)) < (safe_mod_func_int32_t_s_s((((l_513 = ((safe_lshift_func_int16_t_s_s((func_68(((l_669 < ((((l_489 |= (safe_rshift_func_uint16_t_u_u((p_19 & 65535UL), 11))) > 0UL) != l_679) >= 0UL)) != 1UL), p_17, g_102, p_19, l_681) , l_694), 11)) <= l_695)) == l_695) , 0L), l_694))) != l_649) != p_17))) != 0xFD677A0AL), 0xBEL)) == l_554), p_19)), g_242, l_631))) && 255UL)));
            }
            else
            {
                int l_708 = 0L;
                int l_733 = 0L;
                if (((safe_rshift_func_int8_t_s_s(func_68(g_270, l_588, g_163, l_699, g_119), 6)) & ((safe_lshift_func_int16_t_s_u((~((safe_add_func_int32_t_s_s(0x271FDF46L, ((safe_rshift_func_int8_t_s_s(g_163, (safe_add_func_int16_t_s_s((-8L), 65529UL)))) || 4L))) > g_119)), l_708)) > 0xA31281C9L)))
                {
                    int l_731 = 0x00F24EBBL;
                    int l_736 = 0xD505FB42L;
                    if (g_259)
                    {
                        int l_709 = 0xB3EA8C3DL;
                        g_81 = l_709;
                        if (p_18)
                            break;
                    }
                    else
                    {
                        const unsigned l_732 = 0xB71ECC7FL;
                        l_415 ^= (g_97 , (safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((-1L), ((safe_sub_func_int32_t_s_s(((safe_add_func_uint8_t_u_u((l_718 < l_425), (safe_rshift_func_uint8_t_u_u(func_30(((l_708 |= 0x16L) | (safe_add_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(((p_17 |= 8UL) == g_138), 2)) != ((safe_rshift_func_uint8_t_u_s(((l_480 || ((safe_lshift_func_uint8_t_u_u(((((safe_add_func_uint32_t_u_u(l_731, p_18)) != l_732) ^ 0x3A7EL) & l_489), 0)) || l_733)) == 3L), 4)) < 0xE2A3DDA7L)), 0x5AL))), g_242, p_18), p_19)))) | l_732), 0x3383BB65L)) && g_140))), l_731)));
                        return l_425;
                    }
                    if (l_731)
                    {
                        char l_739 = 0x87L;
                        l_611 = func_68((p_17 && (safe_mod_func_uint16_t_u_u((1L || (((func_30(l_731, l_708, ((l_736 = p_18) , func_68(((((p_17 < (safe_mod_func_int8_t_s_s(p_17, func_68(p_19, (l_739 = l_718), p_18, l_740, l_587)))) >= 1L) , l_736) , 1UL), p_19, g_101, p_17, g_242))) > l_696) == p_17) , 0x1D61L)), p_19))), p_17, g_379, l_733, p_17);
                        g_81 ^= (l_733 & g_139);
                    }
                    else
                    {
                        l_736 = (l_280 = p_18);
                    }
                    l_513 &= (g_159 | l_681);
                }
                else
                {
                    char l_741 = 0x19L;
                    int l_751 = (-1L);
                    short l_758 = 0xF482L;
                    l_741 = g_270;
                    if ((safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((1UL > ((safe_rshift_func_int16_t_s_s((l_741 == (p_17 = l_708)), (((g_748 || (func_68(g_748, (g_81 = g_138), (l_751 = (((g_290 = (0L & g_20)) ^ ((g_219 |= ((safe_sub_func_int8_t_s_s(g_163, p_18)) >= l_425)) ^ g_102)) != l_669)), l_752, l_741) || 0L)) != l_708) >= l_741))) & 0xBDD4L)) , g_140), g_20)), 12)))
                    {
                        g_138 ^= p_17;
                        l_733 &= ((((p_19 <= g_139) && ((+func_68(p_19, func_30(func_30(g_139, (((l_751 | 1L) | (((safe_sub_func_int32_t_s_s((-2L), (l_513 = (((+l_755) | (safe_sub_func_int32_t_s_s(g_138, (-8L)))) == p_18)))) ^ p_17) & (-1L))) , g_81), p_17), g_140, p_17), g_241, l_758, l_758)) , p_18)) | l_708) && 0x3FL);
                        g_81 |= p_18;
                        l_611 = l_669;
                    }
                    else
                    {
                        g_771 &= ((func_68(l_679, (((safe_mod_func_uint16_t_u_u(l_611, (safe_add_func_int32_t_s_s(((((safe_rshift_func_uint8_t_u_u(func_68((func_30((4294967291UL == (safe_add_func_int16_t_s_s(((((((g_647 | (g_290 != g_101)) ^ p_18) > l_740) ^ func_68((l_769 & p_17), p_17, g_97, g_267, p_17)) , g_119) , g_159), g_139))), l_752, l_770) | l_651), g_207, l_298, p_19, p_19), 0)) >= g_267) & p_19) | g_290), p_17)))) , g_138) & g_290), l_554, p_17, p_18) || l_602) & 4294967290UL);
                    }
                    if (((func_68((safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(l_776, l_770)), (-1L))), l_733, l_777, l_602, ((l_309 = (safe_unary_minus_func_int16_t_s(g_748))) , l_679)) <= p_18) < l_733))
                    {
                        return g_101;
                    }
                    else
                    {
                        l_499 |= p_19;
                        g_207 ^= (func_30(p_19, ((l_280 = g_101) && p_19), (g_97 = (!l_751))) >= g_187);
                    }
                    l_696 = func_68(p_17, l_648, (g_401 &= g_138), g_379, p_17);
                }
                return l_708;
            }
        }
        if ((g_163 | (safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((g_140 |= (safe_add_func_uint16_t_u_u(((g_163 & func_30((0x81L ^ g_102), p_17, (safe_unary_minus_func_uint32_t_u(4294967288UL)))) >= ((!((l_718 ^ (safe_sub_func_int8_t_s_s((((l_752 >= g_267) >= 0x7246L) > p_18), g_647))) & 0UL)) <= g_401)), l_309))), 0xB8L)), 0x47L))))
        {
            char l_800 = 1L;
            int l_801 = (-9L);
            int l_802 = 0x0E84C0ABL;
            l_802 = (safe_sub_func_uint8_t_u_u(g_771, func_30((l_790 , (g_238 = (l_801 = func_30(p_19, ((g_119 ^ (safe_add_func_int8_t_s_s(g_140, (!(safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((g_797 , (safe_mod_func_uint8_t_u_u(g_242, l_489))) <= (p_19 <= g_119)), 1UL)), l_800)))))) > l_425), l_489)))), g_140, l_800)));
        }
        else
        {
            unsigned l_803 = 0UL;
            int l_812 = (-9L);
            const int l_813 = 1L;
            int l_814 = 0L;
            unsigned char l_815 = 0xE9L;
            unsigned l_877 = 0x217A1BBDL;
            unsigned char l_923 = 246UL;
            if (((g_138 = func_68((p_17 &= g_379), (l_803 = 0x91BF4731L), (((safe_lshift_func_int16_t_s_u(g_138, (func_68((safe_lshift_func_int8_t_s_s(func_68(g_138, p_19, ((((g_238 = (func_68((p_19 , (((safe_mod_func_uint32_t_u_u(func_68(g_207, ((l_611 = ((((l_814 = (safe_mod_func_int8_t_s_s((l_812 = p_18), ((p_19 <= 0x2AB0L) ^ l_813)))) && p_18) | l_588) , 0xE050035FL)) , 1L), g_238, g_138, p_19), 1L)) > l_813) == 251UL)), l_490, l_489, p_18, g_290) < g_242)) == g_647) , p_19) == 0xEC35L), g_748, p_19), p_18)), g_401, g_270, g_20, l_415) , p_18))) | 0xA66EB652L) != l_815), l_309, g_242)) == (-6L)))
            {
                unsigned short l_820 = 0xFEFEL;
                if ((safe_lshift_func_int8_t_s_s(g_140, 3)))
                {
                    g_138 = g_163;
                    l_309 ^= (safe_lshift_func_uint16_t_u_u(65530UL, 8));
                }
                else
                {
                    if (g_401)
                        break;
                }
                l_820 = g_797;
            }
            else
            {
                char l_849 = 5L;
                int l_869 = 1L;
                if (l_611)
                {
                    int l_833 = 0L;
                    l_833 = (safe_sub_func_int16_t_s_s(((l_803 <= ((((g_771 = (func_68(p_19, (l_815 >= (safe_mod_func_uint16_t_u_u((g_80 = (((((4294967288UL > p_19) >= 0UL) , func_30((l_415 = (safe_rshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(p_19, 4)), (g_81 , p_18))) != g_159), p_19))), l_831, g_139)) || l_832) | 0x4DL)), l_815))), l_814, l_813, l_803) > p_17)) | 0xDD706C85L) <= l_803) & 0x3AL)) || p_19), g_797));
                }
                else
                {
                    short l_848 = 1L;
                    int l_850 = 1L;
                    l_280 |= (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((((l_813 <= ((safe_add_func_int32_t_s_s(func_68(g_401, p_19, (safe_rshift_func_uint16_t_u_u(l_770, (safe_mod_func_int16_t_s_s(func_30(g_797, g_140, ((safe_rshift_func_uint8_t_u_s((((((func_30((((func_68(((0xB89DL | (safe_add_func_int16_t_s_s(p_19, 0xC0BEL))) ^ p_17), g_238, g_159, g_797, g_81) | (-1L)) <= g_267) > l_848), l_699, l_849) , 0x7218L) <= 1L) , 0x48E8D54DL) , g_242) & p_19), 7)) | l_812)), l_849)))), l_849, l_848), 0xD0D1CB0DL)) == 0xEEL)) != 0x294DC2BCL) , g_647), 6)), 15));
                    l_850 = p_18;
                }
                g_81 = l_849;
                for (l_298 = 4; (l_298 < 33); ++l_298)
                {
                    int l_863 = 0x7394015CL;
                    int l_864 = (-1L);
                    l_812 = ((4294967290UL == (l_415 = (l_611 ^= (p_17 = (((safe_rshift_func_uint8_t_u_u(0x7AL, 0)) > (l_425 && 0x94L)) || (255UL > ((((((safe_sub_func_int16_t_s_s((l_280 = ((safe_rshift_func_uint16_t_u_s((0xF33DL || ((g_139 || (p_18 = (safe_lshift_func_uint16_t_u_u((l_475 &= (safe_add_func_int32_t_s_s((l_814 |= 0x1CC9656FL), (((l_863 &= (g_771 , l_815)) >= p_18) & 0xF6C8BDF2L)))), p_18)))) || g_379)), 3)) >= l_770)), 0L)) ^ 0UL) != 0x9526L) & 0x0BL) & p_17) ^ g_241))))))) | 3UL);
                    l_309 = l_803;
                    l_864 = (g_102 , l_849);
                    if (p_18)
                        continue;
                }
                l_869 = (func_30(g_207, l_849, l_849) ^ func_68(((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((func_68(p_18, p_18, l_803, l_681, ((+(func_68(l_803, l_803, l_587, p_18, p_19) < 2L)) , 0xC2B9L)) , p_17), 2)), 5)) , l_587), p_18, p_19, g_242, p_17));
            }
            if (l_814)
            {
                char l_890 = (-6L);
                int l_895 = (-3L);
                for (l_475 = 25; (l_475 != (-18)); l_475 = safe_sub_func_uint8_t_u_u(l_475, 9))
                {
                    return g_207;
                }
                if (p_17)
                    break;
                for (g_139 = (-2); (g_139 < 3); g_139 = safe_add_func_uint32_t_u_u(g_139, 4))
                {
                    char l_878 = 0L;
                    int l_879 = 0x5C924A60L;
                    l_878 &= (((g_80 = (safe_add_func_uint8_t_u_u((g_119 = 0x3BL), (safe_unary_minus_func_uint32_t_u(((g_20 , (0x12L ^ (l_877 | g_139))) < (l_489 = g_159))))))) <= (~(func_30(l_587, g_139, p_19) != 0L))) && l_812);
                    l_814 &= (l_878 , g_138);
                    g_81 = (0x67BEFBFEL == (g_290 != g_748));
                    l_879 = l_777;
                }
                for (l_814 = (-27); (l_814 > 15); l_814++)
                {
                    char l_882 = 0L;
                    int l_902 = 0xF0E48A9DL;
                    if ((p_18 | (func_68((func_30(l_882, g_80, l_651) <= ((((safe_add_func_uint8_t_u_u(func_68((g_771 = l_611), ((((((safe_lshift_func_int16_t_s_s(((9L | (safe_unary_minus_func_int16_t_s((g_267 = (safe_mod_func_int8_t_s_s(g_80, 9UL)))))) & p_19), p_18)) , g_159) < 7UL) & g_139) , l_890) ^ g_207), l_890, p_17, p_19), l_882)) > p_18) && p_18) < p_17)), p_18, l_803, p_18, p_17) , g_80)))
                    {
                        l_499 = (g_159 && ((l_812 == 0x27L) >= 0x3CL));
                        return p_17;
                    }
                    else
                    {
                        short l_891 = 0x4267L;
                        int l_894 = 1L;
                        l_895 |= func_68(func_68(g_379, g_108, p_19, func_30(((p_18 < (l_891 = l_882)) , ((safe_mod_func_int16_t_s_s(func_30(l_812, p_18, l_631), g_159)) > g_259)), g_401, g_238), l_894), l_894, g_80, l_776, l_882);
                        g_207 = (((safe_rshift_func_uint8_t_u_u((0x6AL > 0x89L), (g_797 |= (l_812 = (((g_97 > (p_17 = ((((safe_sub_func_uint8_t_u_u(p_18, l_895)) < (((g_81 < (((1L || (0x0AL != (safe_sub_func_int32_t_s_s(g_241, g_139)))) > l_882) || g_270)) && p_17) >= 0x5F69D00AL)) && 65534UL) != l_777))) > g_219) , 1UL))))) >= l_699) <= g_81);
                        l_895 &= p_17;
                    }
                    l_499 = func_30(((l_902 = l_890) | l_425), (((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((safe_add_func_uint32_t_u_u(g_108, func_68(((l_815 , (safe_add_func_uint8_t_u_u(l_480, 0xC8L))) , ((func_68(g_138, (l_415 &= ((safe_mod_func_int16_t_s_s(((l_895 == (l_812 < 0x15L)) >= l_679), l_895)) <= p_17)), l_895, l_813, g_163) & l_814) > 0xA227L)), p_19, p_19, l_882, l_718))))), p_17)), p_18)) , (-7L)) <= 0UL), l_914);
                    g_138 = (-9L);
                }
            }
            else
            {
                const int l_925 = 0xD23F497FL;
                int l_927 = (-4L);
                l_927 = func_68(((!(g_80 = ((((((safe_lshift_func_int8_t_s_u((((p_18 >= (((func_68((safe_sub_func_uint32_t_u_u(0xEF8F16B5L, (safe_lshift_func_int8_t_s_s(func_68(func_68((g_138 , (((g_108 , (g_101 = ((((~((!(0x99852B17L == ((((safe_add_func_int16_t_s_s((l_611 = g_207), (p_18 ^ p_17))) , (l_499 = (((g_81 , 0x8FL) < p_18) ^ p_17))) , g_270) || 0x32B68862L))) | 1UL)) > l_923) >= g_748) < p_19))) , 0UL) | l_718)), l_924, g_81, p_19, l_812), l_925, l_407, g_20, p_19), l_926)))), g_379, l_411, p_18, g_159) <= 1UL) != g_267) <= 1UL)) <= 1L) , l_425), g_748)) | p_18) != l_752) ^ l_298) > g_159) || 0x13L))) || 1L), g_290, g_138, p_18, l_752);
                return p_17;
            }
        }
    }
    l_309 = ((p_18 = ((safe_rshift_func_int8_t_s_s((l_942 = (l_832 &= ((safe_mod_func_uint32_t_u_u((p_17 > (safe_lshift_func_uint8_t_u_s(6UL, 7))), ((((+func_36((safe_rshift_func_int8_t_s_u(((l_280 = (safe_add_func_uint8_t_u_u(func_61((((safe_mod_func_uint32_t_u_u(((safe_unary_minus_func_uint8_t_u(((l_926 = func_68((l_770 , l_275), p_19, g_771, l_681, l_425)) <= 249UL))) != p_18), p_18)) , 0x36D590D4L) <= g_20)), g_20))) > g_748), l_699)), g_20, g_108, l_941, l_364)) > p_18) | p_18) || (-1L)))) == l_275))), g_264)) | p_17)) < 0x114EL);
    g_138 = (1UL > ((l_631 == p_18) >= l_699));
    return p_19;
}







static char func_21(unsigned p_22, unsigned short p_23)
{
    char l_26 = (-10L);
    int l_29 = 0x7CD95329L;
    char l_46 = 0x6AL;
    unsigned l_47 = 4294967294UL;
    int l_260 = 0xCC1F51FEL;
    int l_268 = 7L;
    int l_269 = 0x386D9E32L;
    l_269 = ((((safe_sub_func_uint8_t_u_u(((l_268 = (0L != (((-4L) <= (l_26 = 0xB969L)) , ((g_20 > (p_23 || ((+(l_29 |= (safe_rshift_func_uint16_t_u_u(g_20, (p_23 = g_20))))) , (func_30(((((safe_add_func_int16_t_s_s((l_260 = (l_29 |= func_36((safe_rshift_func_int8_t_s_s(((safe_add_func_int32_t_s_s(p_23, 0x37D660F1L)) >= p_22), 4)), l_46, l_46, p_23, l_47))), g_108)) , g_138) || 8UL) & (-4L)), p_22, g_108) ^ g_159)))) & g_267)))) | 0xDF892E81L), g_267)) <= g_20) > 0xEC5B960CL) || 0x300EL);
    return l_26;
}







static unsigned char func_30(char p_31, unsigned p_32, char p_33)
{
    unsigned char l_261 = 254UL;
    int l_265 = 0L;
    char l_266 = (-6L);
    g_138 = l_261;
    l_266 ^= (l_265 = (((l_261 & g_238) < ((g_264 = (safe_unary_minus_func_uint32_t_u((((safe_unary_minus_func_uint16_t_u(g_259)) && 0xBB15B2CFL) < 0UL)))) > g_187)) != 0xD3L));
    return p_33;
}







static short func_36(char p_37, int p_38, unsigned p_39, unsigned p_40, int p_41)
{
    unsigned char l_58 = 0x2EL;
    int l_59 = 1L;
    int l_60 = (-1L);
    int l_226 = 0x817EE1CDL;
    int l_227 = (-6L);
    int l_228 = 0xF54E4A91L;
    unsigned short l_240 = 0UL;
    g_242 ^= (0x1FDFL ^ (((safe_lshift_func_int16_t_s_u(((func_50(p_40, (l_228 = (l_227 ^= (g_20 >= ((((((safe_sub_func_uint32_t_u_u((l_226 = (((l_59 = l_58) & ((l_60 = 0x9D40L) , ((p_41 > (func_61((l_60 = p_40)) <= ((safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u((p_41 | 0xBCD8L))), 8UL)), l_58)) | l_58))) < g_108))) < l_58)), p_40)) <= p_37) == l_58) & 1L) , 0xE400BED7L) != 0x200EB90AL)))), l_58, g_20, g_108) == 9UL) , p_41), p_41)) >= l_240) < g_241));
    l_226 |= (l_59 = (safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(func_61(p_41), (g_259 = ((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((g_20 & (0UL <= (g_159 , (((((+(-1L)) < (safe_sub_func_uint8_t_u_u(l_240, (safe_rshift_func_uint16_t_u_s(p_38, (((safe_lshift_func_int8_t_s_s((g_242 == l_228), g_20)) < 0x55047EB3L) , (-1L))))))) && 4294967291UL) | p_40) < 0x3689L)))), 12)), 0xADL)) ^ l_240)))), g_241)));
    l_60 = (g_81 ^= ((l_226 = 8L) >= p_41));
    return l_59;
}







static const int func_50(unsigned char p_51, short p_52, unsigned p_53, unsigned char p_54, unsigned p_55)
{
    int l_229 = 1L;
    int l_239 = (-1L);
    g_81 ^= l_229;
    l_239 = (((p_53 != ((p_52 != func_68(func_68((((safe_lshift_func_int16_t_s_s(g_20, 12)) , ((p_55 | 65535UL) != (safe_mod_func_int32_t_s_s(func_61(g_139), ((safe_lshift_func_uint8_t_u_s(p_52, 6)) && (safe_mod_func_int16_t_s_s(((g_238 = p_53) ^ l_229), l_229))))))) & g_108), g_108, p_54, g_20, p_51), g_20, p_51, g_108, g_20)) ^ 0x153B5C74L)) , g_102) || 4UL);
    l_239 = 0x1E25E91BL;
    return l_239;
}







static char func_61(unsigned p_62)
{
    char l_65 = 6L;
    int l_78 = 0x5CD22FFDL;
    int l_79 = 0x891D9855L;
    short l_98 = 7L;
    l_98 = (((safe_lshift_func_uint8_t_u_u(((p_62 <= g_20) > g_20), 7)) <= l_65) | (safe_mod_func_uint8_t_u_u((((((g_20 | func_68(((g_80 = (l_79 = (safe_lshift_func_uint16_t_u_u(2UL, (safe_sub_func_int16_t_s_s((0x105EEFFBL ^ ((l_78 = l_65) | (p_62 | p_62))), l_65)))))) , 0UL), l_65, l_65, l_65, l_65)) ^ p_62) , 255UL) , p_62) <= 0x2DD8L), p_62)));
    g_102 |= ((g_81 != (p_62 , (((safe_add_func_uint16_t_u_u(((l_79 = (((l_78 = p_62) < (l_79 ^ l_98)) && (((l_65 , l_65) | (g_20 | (l_78 ^= 0x9CD7L))) ^ g_101))) == 7L), l_98)) > l_65) && (-1L)))) < 0x3BL);
    for (l_65 = 0; (l_65 <= 5); ++l_65)
    {
        unsigned l_107 = 4294967295UL;
        unsigned l_141 = 4294967295UL;
        int l_144 = 0L;
        char l_161 = (-3L);
        unsigned short l_218 = 8UL;
        char l_220 = 0xB9L;
        if (g_102)
        {
            unsigned short l_105 = 65533UL;
            int l_106 = (-8L);
            short l_162 = 6L;
            unsigned short l_208 = 1UL;
            l_106 = l_105;
            if ((func_68(g_102, (l_78 = (p_62 < func_68((g_102 != g_20), func_68(l_98, (l_106 = (9L != p_62)), (((((l_107 , ((g_108 && g_20) ^ 0x6551L)) | 0x83L) != p_62) == p_62) , 0x80DD4D5FL), g_81, g_97), g_108, g_102, l_78))), p_62, g_80, g_101) != g_101))
            {
                short l_113 = (-9L);
                int l_116 = 0xE9680357L;
                int l_132 = 0x99312A2FL;
                int l_143 = 0xA4309C40L;
                unsigned l_172 = 0UL;
                g_81 = (((l_78 = g_102) , (((safe_add_func_uint16_t_u_u((p_62 || ((safe_add_func_int16_t_s_s(l_113, (g_102 ^ p_62))) != 65535UL)), ((((safe_mod_func_uint8_t_u_u((l_116 && (safe_add_func_uint8_t_u_u((((l_78 = (l_106 &= ((g_119 = l_107) & (0x5AL >= 0x67L)))) , l_116) & g_20), l_113))), 0x42L)) , 0x78L) > p_62) , 65535UL))) , p_62) > 0x6BE2L)) , g_97);
                for (l_98 = (-22); (l_98 > 3); l_98 = safe_add_func_uint32_t_u_u(l_98, 8))
                {
                    short l_137 = 1L;
                    int l_142 = (-1L);
                    l_143 ^= (func_68((p_62 = (l_141 = (!(g_140 &= (safe_mod_func_uint32_t_u_u((+(0xB3B6L | (safe_sub_func_uint16_t_u_u((g_108 <= g_81), g_81)))), (g_139 &= (((g_101 = (2UL > (safe_add_func_uint8_t_u_u(((((safe_add_func_int16_t_s_s((g_138 &= ((safe_rshift_func_uint8_t_u_s(((l_132 = l_98) ^ (((safe_rshift_func_uint8_t_u_s((l_137 = ((((safe_add_func_uint16_t_u_u(0x464CL, 0x3E6EL)) == g_80) == 0xC2EEL) ^ p_62)), l_116)) <= p_62) && g_119)), 0)) >= l_116)), l_107)) || p_62) & 255UL) & l_65), p_62)))) <= 0L) || 0x5F76L)))))))), l_106, l_107, l_142, g_108) != l_98);
                    l_144 |= (g_138 = 0x6BEBBADEL);
                }
                if ((safe_lshift_func_int16_t_s_s(l_107, func_68((safe_rshift_func_uint16_t_u_u(0x2F92L, (0xEEL > g_81))), p_62, g_102, (l_79 = (safe_add_func_int8_t_s_s((g_97 = p_62), g_139))), g_119))))
                {
                    const unsigned l_160 = 0xCAFD48ECL;
                    int l_175 = 0x7F07C662L;
                    unsigned char l_194 = 0UL;
                    g_81 = g_140;
                    for (l_141 = 12; (l_141 < 10); l_141--)
                    {
                        return g_140;
                    }
                    l_78 = (g_80 || (!((l_79 = (g_163 &= (safe_sub_func_int32_t_s_s(p_62, ((((((l_98 , (safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint16_t_u_u(p_62, (func_68((l_106 = (l_144 |= (((p_62 , ((func_68(l_98, g_159, g_81, p_62, g_101) , 1UL) <= 0L)) ^ 0xA8A6AB53L) != 0xCCL))), l_160, p_62, p_62, g_140) , l_161))) > 0x16L), l_162))) & p_62) , l_161) | 0UL) & 4294967295UL) <= 2UL))))) , 2UL)));
                    if ((g_140 & func_68(g_80, (g_97 , (p_62 && (p_62 , g_108))), p_62, ((safe_sub_func_int8_t_s_s((-2L), (l_160 != g_20))) , p_62), p_62)))
                    {
                        int l_186 = (-1L);
                        l_175 = ((!(g_101 && (safe_mod_func_uint16_t_u_u((g_80 &= (safe_lshift_func_int8_t_s_u((g_97 = (safe_sub_func_int8_t_s_s(g_101, (-1L)))), 5))), l_105)))) <= ((p_62 > l_172) & (0x438FE63DL > (l_105 <= (safe_lshift_func_int16_t_s_u(l_160, 14))))));
                        l_106 = ((safe_rshift_func_uint16_t_u_s(g_108, (0xFEL > (safe_mod_func_int32_t_s_s(6L, (g_101 = l_162)))))) > l_116);
                        l_106 = func_68(g_140, ((p_62 <= (safe_mod_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u((!(safe_mod_func_uint16_t_u_u(((g_187 = (l_175 = (l_186 = func_68(g_140, l_161, g_97, g_163, p_62)))) & l_144), 0xD1EAL))), l_105)) >= l_79) == 6UL), l_144))) >= g_140), g_101, l_160, g_139);
                        l_132 = (safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(func_68((g_139 , g_108), l_141, ((!p_62) & (((safe_mod_func_uint8_t_u_u(p_62, l_175)) , p_62) & func_68(l_162, l_78, g_81, p_62, g_97))), l_194, p_62), l_175)), 0xD1C8L));
                    }
                    else
                    {
                        int l_195 = 0x25A454C0L;
                        int l_196 = (-5L);
                        g_81 = (l_78 = 0x23ED2118L);
                        l_195 &= 1L;
                        l_196 |= 1L;
                    }
                }
                else
                {
                    return p_62;
                }
                g_138 &= g_187;
            }
            else
            {
                const unsigned l_197 = 0x699C989FL;
                int l_206 = 0x4AA4CFADL;
                g_138 &= g_187;
                if (g_139)
                    break;
                l_208 = (((l_106 ^= (((func_68(l_197, func_68(p_62, ((func_68((safe_rshift_func_int16_t_s_u((func_68(((safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(func_68((g_101 = ((safe_rshift_func_int16_t_s_u(0x2A34L, (((l_144 = (g_80 & ((~0x9F34086FL) ^ (((0xAE92L <= ((l_206 = l_144) || 1L)) > (l_78 = g_97)) >= 0x1164L)))) || g_119) | l_79))) & g_101)), p_62, g_140, g_138, p_62), l_98)), 2)) != g_119), l_162, g_119, l_79, p_62) >= p_62), p_62)), l_197, g_80, g_207, p_62) || p_62) , (-5L)), l_105, p_62, p_62), p_62, g_102, l_98) && g_187) , 0xA988937EL) , g_187)) != l_98) == g_163);
            }
        }
        else
        {
            unsigned l_209 = 0x5622B19BL;
            g_81 = (l_209 < l_144);
            if (l_78)
                break;
        }
        l_79 = ((-1L) || (safe_rshift_func_uint16_t_u_s((l_144 &= g_159), ((g_207 = ((0xAAF8L <= ((safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((l_161 == (~g_159)), 2)), (((g_219 = func_68((g_101 ^= ((((safe_add_func_uint8_t_u_u(0xE6L, (((-1L) & l_218) <= ((p_62 & l_78) <= p_62)))) , p_62) || 5L) != p_62)), l_78, g_219, g_159, l_79)) == p_62) , 0xF1F4L))) , l_79)) , 8L)) , p_62))));
        if (l_220)
            continue;
    }
    g_138 |= ((l_78 = g_20) ^ ((-2L) | (l_79 || (+g_159))));
    return g_187;
}







static unsigned short func_68(const unsigned p_69, const int p_70, unsigned p_71, int p_72, unsigned short p_73)
{
    int l_95 = 1L;
    g_81 = g_80;
    for (g_81 = 0; (g_81 == (-30)); g_81 = safe_sub_func_uint32_t_u_u(g_81, 7))
    {
        short l_90 = 0xB0DDL;
        int l_96 = 0x546ADB2FL;
        l_96 = (((safe_lshift_func_int8_t_s_u(((p_73 && (safe_add_func_uint16_t_u_u(6UL, p_70))) , p_70), 6)) != ((l_95 = (g_80 | ((l_90 & ((((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u(p_71, 7)), p_73)) , g_20) <= l_90) == 0x48BAL)) , 0x32BEL))) | p_73)) , l_95);
        g_97 = p_71;
    }
    return p_71;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_379, "g_379", print_hash_value);
    transparent_crc(g_401, "g_401", print_hash_value);
    transparent_crc(g_647, "g_647", print_hash_value);
    transparent_crc(g_748, "g_748", print_hash_value);
    transparent_crc(g_771, "g_771", print_hash_value);
    transparent_crc(g_797, "g_797", print_hash_value);
    transparent_crc(g_964, "g_964", print_hash_value);
    transparent_crc(g_967, "g_967", print_hash_value);
    transparent_crc(g_975, "g_975", print_hash_value);
    transparent_crc(g_1018, "g_1018", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
