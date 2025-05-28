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
   unsigned f0 : 11;
   unsigned f1 : 22;
   signed f2 : 1;
   signed f3 : 8;
};


static unsigned short g_6 = 0UL;
static unsigned g_12 = 0UL;
static unsigned g_13 = 4294967295UL;
static int g_63 = 8L;
static int g_64 = 0xF2F1E73EL;
static struct S0 g_66 = {16,1564,0,-7};
static char g_113 = 0x39L;
static unsigned g_177 = 0xA19A2378L;
static char g_194 = 0L;
static char g_195 = 0L;
static char g_200 = 9L;
static unsigned g_209 = 0xD303C422L;
static unsigned char g_222 = 7UL;
static char g_246 = 0x56L;
static char g_271 = 6L;
static struct S0 g_325 = {26,237,-0,13};
static int g_335 = 8L;
static unsigned char g_356 = 250UL;
static unsigned g_391 = 9UL;
static unsigned g_507 = 0xDE83774FL;
static unsigned g_516 = 4294967295UL;
static unsigned g_541 = 4294967295UL;
static char g_613 = 0x53L;
static unsigned short g_647 = 0xA823L;
static unsigned g_695 = 0x7C17DD9EL;
static unsigned g_698 = 0xF257D1B4L;
static unsigned g_727 = 0x5BA885F1L;
static struct S0 g_750 = {17,1820,0,-3};
static char g_803 = 1L;
static int g_820 = 1L;
static unsigned g_835 = 0xC7E3CE2DL;
static unsigned g_883 = 0xDA6C07D1L;
static short g_884 = 0xB3D3L;
static int g_888 = 1L;
static unsigned g_894 = 0xDE0D1664L;
static unsigned g_924 = 0x6E48F689L;
static struct S0 g_982 = {37,1443,-0,-6};



static unsigned char func_1(void);
static int func_7(short p_8, char p_9, char p_10, unsigned p_11);
static unsigned short func_16(short p_17, int p_18);
static char func_23(char p_24, unsigned short p_25, int p_26, short p_27);
static unsigned char func_32(int p_33, struct S0 p_34, short p_35, unsigned short p_36, int p_37);
static struct S0 func_39(unsigned char p_40);
static int func_41(int p_42);
static unsigned func_43(unsigned char p_44);
static struct S0 func_45(int p_46, unsigned short p_47);
static struct S0 func_57(int p_58);
static unsigned char func_1(void)
{
    int l_2 = 1L;
    int l_355 = 0xBE0B242CL;
    struct S0 l_725 = {39,1369,-0,3};
    char l_907 = 0L;
    unsigned l_977 = 5UL;
    unsigned l_980 = 4294967295UL;
    unsigned l_984 = 5UL;
    unsigned short l_999 = 5UL;
    struct S0 l_1002 = {32,595,-0,9};
    int l_1007 = 0x804B755FL;
    int l_1008 = 0x433099D7L;
    char l_1009 = 0x67L;
    if (((l_2 != (safe_lshift_func_uint8_t_u_u(((safe_unary_minus_func_int16_t_s(g_6)) <= func_7((g_356 = ((g_12 = g_6) >= ((l_355 = ((0xE662L | (g_13 = g_6)) < (safe_lshift_func_uint16_t_u_s(((65527UL | func_16(g_6, l_2)) > l_2), l_2)))) || l_2))), g_6, l_2, g_6)), 7))) && (-7L)))
    {
        unsigned short l_694 = 1UL;
        int l_699 = 0L;
        int l_726 = 0L;
        unsigned l_736 = 0x9FB792FDL;
        struct S0 l_749 = {22,988,0,-9};
        char l_762 = (-1L);
        short l_802 = (-1L);
        int l_821 = (-1L);
        unsigned l_877 = 0UL;
        struct S0 l_889 = {30,1088,-0,-15};
        unsigned l_908 = 3UL;
        unsigned l_930 = 0UL;
        struct S0 l_973 = {33,585,0,-3};
        int l_978 = 0xF9B1A7AAL;
        l_699 = func_16(((((func_16((((func_16(l_694, l_694) || (8UL || g_391)) , ((g_698 = (((g_695 = l_694) , 4L) && (safe_lshift_func_int8_t_s_u((l_355 >= l_355), 4)))) , l_694)) , 0xBA1CL), l_694) == g_13) , 0x899786E7L) && g_194) || g_613), g_647);
        for (g_391 = 20; (g_391 > 10); g_391 = safe_sub_func_uint16_t_u_u(g_391, 2))
        {
            unsigned l_702 = 6UL;
            int l_751 = 0xC079769FL;
            if ((l_702 , 9L))
            {
                unsigned short l_711 = 0x895DL;
                int l_724 = (-3L);
                struct S0 l_728 = {43,201,-0,-7};
                l_728 = (((g_727 = ((safe_mod_func_int32_t_s_s((!((safe_mod_func_uint16_t_u_u((g_516 , 0UL), (((safe_add_func_int8_t_s_s(g_13, (safe_sub_func_uint8_t_u_u((l_711 = l_2), func_16(((safe_rshift_func_uint16_t_u_u((g_6 = 0x112EL), 4)) , ((safe_rshift_func_int16_t_s_s(((func_32(((l_355 = ((l_355 , ((+func_16((safe_mod_func_uint16_t_u_u((l_699 = (safe_lshift_func_int16_t_s_u(g_200, (((safe_mod_func_int16_t_s_s(1L, (safe_sub_func_uint8_t_u_u(((g_325.f0 <= 0x8771AE15L) || g_695), l_702)))) == l_724) && l_702)))), 1UL)), g_222)) , g_695)) < 0x929EL)) , 0x5CEEF347L), l_725, g_12, l_694, l_726) && 0x4FL) > g_698), g_12)) , 0x59E9L)), g_177))))) || 0x430DL) | 0xA9F6L))) & 0xECFF860FL)), 0x3FFBF59EL)) & l_702)) , g_698) , g_66);
                g_325 = func_57(l_728.f3);
                g_750.f3 = (((0xBB363B7BL < (safe_unary_minus_func_int32_t_s(l_728.f3))) >= l_2) ^ ((((((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(func_41((((l_726 = (~l_736)) && (0xBC0FL == (((l_711 & ((safe_mod_func_uint16_t_u_u(((((g_195 = (safe_mod_func_int32_t_s_s((((((safe_rshift_func_uint8_t_u_s(((l_355 = func_32((safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((func_32((g_63 = g_613), (l_749 = l_728), g_177, l_2, l_725.f0) ^ l_728.f3), 0x06L)), g_391)), l_728.f1)), g_750, l_728.f0, l_724, g_391)) ^ l_724), 0)) | 6UL) != 0xB8E00DEBL) <= g_6) || l_736), g_246))) < 9L) <= g_209) | g_391), g_200)) == g_6)) != l_751) < l_725.f2))) && 0x2C89L)), g_246)), 1L)) < g_271) , g_335) < l_702) <= l_728.f1) >= (-2L)));
            }
            else
            {
                g_750 = func_45(g_66.f1, g_356);
                l_749 = g_750;
                g_325 = g_325;
            }
            if (g_613)
                break;
            l_751 = (l_751 == (func_45((g_750.f2 = ((func_41(((safe_sub_func_int32_t_s_s((l_726 = (safe_lshift_func_int8_t_s_s(((0x96222412L | ((g_209 = (func_32(l_702, g_750, ((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((!g_271) <= g_246), 3)), func_23((l_751 >= (safe_sub_func_uint8_t_u_u((0UL | g_335), g_64))), g_613, l_2, l_749.f3))) > l_749.f1), l_762, l_725.f3) <= 0x6B3EL)) == g_222)) == g_222), 6))), g_271)) | l_736)) , 0x013EEDE9L) >= g_271)), g_698) , l_699));
            if (l_702)
                continue;
        }
        l_355 = (g_66.f0 < (~func_23(g_750.f0, func_23(((g_66.f0 != (safe_sub_func_uint16_t_u_u(g_695, (safe_add_func_uint8_t_u_u(l_2, g_113))))) , (safe_rshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(func_23(g_750.f1, l_749.f3, (safe_add_func_uint8_t_u_u(l_726, g_325.f0)), g_541), 0x006BL)), l_355))), g_195, l_725.f3, l_726), l_725.f3, l_725.f3)));
        if ((g_66.f2 = (g_750.f3 = (-10L))))
        {
            unsigned char l_777 = 255UL;
            unsigned short l_789 = 0xA046L;
            int l_790 = 0x8730940BL;
            struct S0 l_801 = {25,682,-0,5};
            unsigned short l_849 = 0x388CL;
            unsigned short l_860 = 0xB247L;
            unsigned char l_931 = 1UL;
            int l_945 = (-1L);
            unsigned char l_955 = 0xBBL;
            g_750.f3 = l_694;
            for (l_355 = 0; (l_355 < (-21)); l_355--)
            {
                unsigned short l_784 = 1UL;
                int l_836 = 1L;
                int l_837 = 0xADD9B8B7L;
                for (g_541 = 0; (g_541 <= 52); g_541 = safe_add_func_uint32_t_u_u(g_541, 2))
                {
                    return l_777;
                }
                l_790 = (safe_rshift_func_uint8_t_u_u((!(safe_rshift_func_uint16_t_u_s((g_66.f2 , (safe_mod_func_int32_t_s_s(l_699, func_41(g_13)))), l_784))), (safe_lshift_func_int8_t_s_s((g_246 = l_725.f0), (l_762 | ((safe_rshift_func_uint16_t_u_u(g_63, l_789)) != g_727))))));
                if (g_66.f2)
                    continue;
                if (func_32(g_12, g_325, (g_335 , 0x1F68L), l_2, ((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((l_749.f2 = (func_43((g_356 = ((safe_lshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(g_64, (safe_lshift_func_int16_t_s_u(g_613, 13)))) > l_749.f2), ((l_801 , 8UL) ^ l_725.f1))) ^ g_356))) && l_762)), l_802)), 13)) <= 7L)))
                {
                    char l_812 = 1L;
                    int l_819 = 0xF2C30FEFL;
                    if ((g_13 < ((g_647 = g_803) <= ((safe_sub_func_uint32_t_u_u(0xBACE5928L, (func_16((l_749.f2 && g_325.f2), l_784) && (g_222 = ((l_725.f3 = (l_784 ^ g_803)) , l_725.f1))))) <= 0xA6L))))
                    {
                        g_66.f2 = ((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_u((l_790 , ((safe_sub_func_uint8_t_u_u((l_812 >= ((g_516 != g_750.f0) & (((((g_820 = (safe_sub_func_uint32_t_u_u((l_819 = (l_790 , (0UL && ((safe_sub_func_uint16_t_u_u((~(safe_lshift_func_int8_t_s_s(l_812, ((l_801.f1 < l_725.f1) == g_325.f2)))), 0xDFF6L)) > 0x23L)))), g_325.f2))) <= l_784) , l_801.f3) < 0UL) , g_13))), l_821)) & l_789)), 1)) | 1UL), g_12)) > g_541);
                        return l_784;
                    }
                    else
                    {
                        return g_647;
                    }
                }
                else
                {
                    short l_831 = 2L;
                    int l_838 = 3L;
                    for (g_194 = 0; (g_194 != 2); g_194 = safe_add_func_int32_t_s_s(g_194, 1))
                    {
                        unsigned char l_826 = 0x50L;
                        int l_834 = (-1L);
                        l_725 = g_750;
                        if (l_725.f3)
                            continue;
                        l_838 = (l_837 = (l_834 = (((0x3919L > 1L) < g_194) | (((((((safe_sub_func_int32_t_s_s((l_699 = ((l_836 = func_32(l_826, g_750, (g_835 = (!((safe_add_func_int8_t_s_s(g_209, (safe_add_func_uint8_t_u_u((l_831 , (((safe_lshift_func_uint8_t_u_u(g_613, 6)) <= 0x8B5FL) < 0UL)), l_834)))) || (-3L)))), g_246, g_113)) > l_831)), 0UL)) ^ g_6) > 1L) , (-9L)) | g_803) || g_391) , g_335))));
                        g_66.f2 = (l_801.f3 != l_749.f0);
                    }
                }
            }
            g_64 = ((-9L) ^ 1L);
            if ((safe_lshift_func_uint16_t_u_u(l_725.f0, 15)))
            {
                unsigned short l_850 = 0xBACBL;
                int l_851 = 0x8056D0F0L;
                unsigned l_882 = 7UL;
                struct S0 l_885 = {42,594,0,2};
                if (func_43((g_356 = (safe_lshift_func_uint16_t_u_s(func_23((g_200 = func_23(((l_851 = ((l_850 = ((l_749.f3 == func_32((l_801.f0 , (g_820 = l_2)), g_325, ((safe_rshift_func_int8_t_s_s((g_66.f0 , (g_516 != (safe_mod_func_uint8_t_u_u(0UL, ((safe_rshift_func_uint16_t_u_s(l_725.f0, l_849)) & g_222))))), 3)) == g_335), g_335, g_13)) | 8L)) & g_750.f3)) != 0x2EB44C80L), g_803, g_222, g_613)), g_541, l_749.f0, g_222), g_698)))))
                {
                    short l_855 = 0x05CAL;
                    g_750 = g_325;
                    l_851 = (g_325.f2 = (safe_unary_minus_func_uint16_t_u((safe_add_func_uint8_t_u_u((((0x349DE674L | g_750.f2) & l_855) | ((l_851 != 0UL) , (((safe_lshift_func_uint8_t_u_s((l_355 = g_209), (safe_lshift_func_int16_t_s_u((l_749 , (((0UL | (l_801.f0 ^ l_855)) ^ g_516) > g_613)), g_113)))) , 0x61B50316L) < l_855))), l_860)))));
                    l_749 = (g_750 = g_325);
                }
                else
                {
                    unsigned l_886 = 4294967295UL;
                    l_355 = ((!((safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(func_7((l_790 & (safe_rshift_func_uint8_t_u_s((0UL ^ g_750.f3), 4))), g_246, (((((0xC2A5L > g_325.f0) & 0xB45CL) <= g_391) ^ (+0xD2BFEEE7L)) || l_725.f3), g_246), 0x69L)), 11)) && g_391)) >= g_750.f3);
                    if (((((((!(-3L)) && 0x9CL) && g_222) , (safe_rshift_func_int16_t_s_u(func_32(((safe_rshift_func_int16_t_s_s((((safe_add_func_uint32_t_u_u((((func_16((g_750.f2 == func_16((g_884 = (l_851 , ((((((!(safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(l_877, ((g_883 = ((safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s(l_762, l_801.f2)), 7)) <= (((((l_882 , g_325.f0) < 0xCEB0D1BAL) , g_325.f0) < 0UL) > g_507))) != g_820))), l_789))) | 0x54C3DEB8L) || l_851) | g_12) > l_801.f1) | 0x3DL))), g_391)), g_391) || l_725.f1) && 0xEFL) ^ 0x88L), l_2)) ^ 0xEBL) ^ 0xF7L), g_750.f0)) >= l_694), l_885, g_727, l_885.f3, g_698), g_647))) , l_886) , l_2))
                    {
                        struct S0 l_887 = {38,1358,-0,8};
                        g_750 = l_887;
                        g_888 = g_63;
                        return l_725.f0;
                    }
                    else
                    {
                        g_66.f2 = g_356;
                        g_325 = func_39(g_325.f1);
                        l_725.f2 = 0x996E4913L;
                        l_889 = g_66;
                    }
                    l_699 = func_41(l_749.f2);
                    l_749 = func_39(g_63);
                }
                l_885 = func_57((safe_sub_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(0xABDFL, (g_884 = g_894))) | ((~l_885.f2) >= (0x408F6FFCL | ((g_66.f1 = (((g_335 <= l_850) >= (g_6 = (l_801.f3 = 0x9AFEL))) <= l_850)) || (g_325.f0 = (l_725.f3 = l_889.f1)))))), g_698)));
                g_750.f2 = ((((safe_add_func_uint8_t_u_u(g_6, g_12)) == 6UL) , l_726) > (g_246 = (safe_add_func_int16_t_s_s(0xAEFCL, ((g_391 ^ ((1UL >= ((((safe_lshift_func_uint16_t_u_u(l_885.f3, (1UL == g_835))) & 1UL) , g_200) ^ l_725.f2)) , 255UL)) == g_66.f0)))));
                if ((safe_rshift_func_int8_t_s_u((func_57(((safe_rshift_func_int8_t_s_s(g_888, func_41((((l_355 = ((((((~((safe_sub_func_int8_t_s_s(l_907, func_16(g_66.f2, g_66.f0))) == g_647)) && (func_57(l_860) , (g_541 < 0xC92CDE89L))) , 0x2687F1A1L) == l_790) , 0xC3L) | g_12)) , l_725.f3) >= g_613)))) == l_725.f3)) , g_177), g_356)))
                {
                    l_908 = l_801.f3;
                }
                else
                {
                    int l_918 = 0L;
                    for (l_908 = 0; (l_908 == 29); l_908++)
                    {
                        unsigned short l_917 = 0UL;
                        int l_919 = 0xC91034D3L;
                        g_66.f2 = (g_888 = ((l_726 = (func_43(l_762) && (l_850 & ((l_919 = ((safe_add_func_int16_t_s_s((func_43(g_647) && 0x30318AA7L), ((g_356 = (safe_mod_func_int8_t_s_s(((g_750.f0 && (l_882 == (safe_mod_func_int8_t_s_s((l_917 = ((((-1L) < g_698) & 0x375675A6L) ^ l_877)), g_727)))) , g_750.f1), l_889.f1))) && l_918))) >= (-1L))) > 0x30L)))) <= 0xCDL));
                        g_750.f3 = (func_41((g_325.f3 = g_507)) , ((safe_sub_func_uint32_t_u_u((!(safe_sub_func_uint32_t_u_u(l_725.f3, ((g_803 = (func_39((g_924 | 0x66L)) , (l_801.f3 = l_919))) | (safe_rshift_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(0xF9L)), (((safe_sub_func_int8_t_s_s((((g_613 < l_930) || l_931) , 0x7DL), l_919)) < 0x4D8FA8A9L) < g_750.f2))))))), l_355)) != l_919));
                        l_749 = (g_325 = g_325);
                    }
                    if (((g_507 = (((l_918 = (l_777 && l_777)) <= g_888) && l_918)) , (safe_rshift_func_int16_t_s_u(1L, 12))))
                    {
                        int l_936 = (-1L);
                        l_699 = (func_16((safe_lshift_func_uint8_t_u_s(((g_64 = l_936) && (safe_sub_func_uint32_t_u_u(g_325.f3, (g_750.f3 || l_725.f1)))), (safe_lshift_func_int16_t_s_u(0xE98EL, ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u(l_945, 5)), g_66.f2)) > (!g_325.f2)))))), g_883) & l_749.f0);
                    }
                    else
                    {
                        g_325.f2 = (safe_add_func_int32_t_s_s(1L, (!(0x5F626200L || 0xF0EDDEE4L))));
                    }
                    g_325 = g_750;
                }
            }
            else
            {
                int l_950 = 0x76842F25L;
                int l_971 = 6L;
                struct S0 l_972 = {31,1126,-0,-12};
                l_950 = (safe_lshift_func_int16_t_s_u(l_749.f0, 3));
                for (g_6 = 19; (g_6 > 39); ++g_6)
                {
                    unsigned short l_970 = 65529UL;
                    int l_974 = 0x3A2915ADL;
                    char l_981 = 0x8EL;
                    if ((g_209 != (safe_rshift_func_uint16_t_u_s(65535UL, 4))))
                    {
                        g_325.f2 = (+((l_950 & ((l_801.f0 || func_43(l_955)) < ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u((((((g_194 = l_801.f1) > (safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((((((((+l_889.f0) == (((safe_lshift_func_uint16_t_u_s((l_971 = ((safe_mod_func_uint32_t_u_u(l_970, g_750.f3)) , 0x7673L)), 14)) == l_945) || l_725.f0)) , g_66.f3) , 1UL) <= g_12) ^ 0x89L) <= g_356), 0xB56AD109L)), l_726)), g_6))) <= l_930) ^ 0L) <= l_889.f3), 6)), g_335)) > l_970))) , 0x3F067AF8L));
                        l_973 = l_972;
                        l_974 = l_877;
                    }
                    else
                    {
                        unsigned l_979 = 0x3687DB61L;
                        g_66 = func_57(((((((((~func_43((safe_lshift_func_uint16_t_u_s(((g_66.f3 & (l_977 = 0xB3E75E20L)) ^ (((((l_930 , func_23((l_978 = g_803), l_955, ((g_647 = l_979) < l_979), func_23(g_695, ((l_801.f0 && 0x0243L) , 0UL), g_325.f3, g_391))) ^ l_980) || g_820) & l_979) <= l_979)), 7)))) == 0x01CCL) < l_981) > 0xE239L) , g_516) > l_979) , 0xBED4L) ^ g_325.f1));
                    }
                }
                g_325 = g_982;
                l_699 = l_980;
            }
        }
        else
        {
            unsigned l_983 = 0x9800B171L;
            struct S0 l_987 = {30,1119,-0,-1};
            char l_988 = (-7L);
            l_978 = ((((l_983 = g_888) , (!g_750.f2)) <= (((l_984 = ((!0xC56F28CAL) , g_391)) , (safe_mod_func_int16_t_s_s(func_7((((((l_987 , (l_726 = (-1L))) && g_325.f0) , (((g_613 != 1L) & 0L) != 1L)) < g_6) | l_988), l_973.f3, l_749.f0, l_694), g_13))) & g_803)) <= l_987.f3);
        }
    }
    else
    {
        struct S0 l_989 = {40,629,-0,-13};
        int l_998 = 4L;
        l_989 = g_982;
        g_66.f2 = (g_750.f1 >= (func_23((g_246 = (safe_add_func_int8_t_s_s((l_989.f2 = (l_725.f3 = l_980)), 1L))), (((func_23((l_989.f3 = (((safe_lshift_func_uint8_t_u_u(((((safe_lshift_func_int8_t_s_u((g_924 , (((g_271 = g_325.f1) < (0x93L == (g_222 = (0xF89486B0L != (g_516 <= (safe_lshift_func_uint8_t_u_s(g_924, g_516))))))) || l_998)), g_66.f3)) != g_209) <= g_391) == 0x497CL), l_989.f1)) && g_982.f2) , 0x6EL)), g_66.f1, g_63, g_6) ^ 7UL) , 0xC863L) >= g_924), g_888, l_999) ^ l_989.f0));
    }
    l_725.f2 = (l_2 = ((safe_mod_func_uint8_t_u_u((((-9L) == ((((1L ^ (l_977 || 0x5EL)) ^ ((g_750 = l_1002) , (~(l_1008 = ((((l_1007 = (safe_sub_func_int8_t_s_s(func_32((g_335 = g_391), g_66, (l_355 = ((safe_sub_func_int8_t_s_s(1L, l_725.f2)) | l_1007)), l_2, g_200), (-1L)))) && g_325.f3) <= g_924) ^ g_195))))) || l_1009) >= g_356)) != 4294967295UL), g_894)) , 0x66540817L));
    return g_750.f0;
}







static int func_7(short p_8, char p_9, char p_10, unsigned p_11)
{
    unsigned l_362 = 4294967295UL;
    int l_363 = 0xE3E843EBL;
    struct S0 l_364 = {12,50,0,-1};
    unsigned char l_401 = 0x2DL;
    char l_519 = 0L;
    unsigned l_572 = 0x6866F548L;
    unsigned l_639 = 4294967295UL;
    short l_665 = 9L;
    int l_672 = 0x671055CAL;
    for (p_8 = 22; (p_8 == 17); p_8 = safe_sub_func_int32_t_s_s(p_8, 3))
    {
        unsigned short l_361 = 1UL;
        int l_374 = 0L;
        struct S0 l_380 = {2,1856,0,-13};
        char l_456 = 0x8FL;
        int l_494 = (-1L);
        unsigned l_549 = 9UL;
        int l_666 = 0xDE969655L;
        if (func_41(((((((l_364 = func_57((l_363 = (~func_16((safe_mod_func_uint32_t_u_u((func_43((l_361 >= g_194)) , (p_10 > (p_11 , p_9))), (func_57((((l_361 , 4294967295UL) & ((((((((p_10 > g_13) < g_325.f2) && 0xC2BDEF93L) > g_356) <= p_9) <= p_8) & 0x9DL) <= l_362)) <= 6UL)) , g_195))), p_8))))) , l_361) , 0x7B1D92D4L) < l_361) | g_12) ^ g_13)))
        {
            unsigned l_365 = 0xE5F9AAEEL;
            int l_375 = 0xC81AF64AL;
            unsigned l_493 = 0xB815D0F4L;
            unsigned char l_495 = 1UL;
            unsigned l_545 = 1UL;
            struct S0 l_548 = {32,616,0,5};
            l_365 = 0x03021451L;
            g_64 = g_113;
            if ((l_375 = (+(+(g_200 | (safe_mod_func_int8_t_s_s(func_23(p_9, g_200, ((safe_rshift_func_int8_t_s_u(p_10, 0)) != ((l_374 = func_43((safe_mod_func_int16_t_s_s(((p_11 != (!(g_325.f2 >= ((safe_sub_func_uint16_t_u_u((4L <= 3L), 1L)) , g_222)))) || 1L), 0x97EBL)))) , p_10)), l_363), 0x3FL)))))))
            {
                unsigned short l_378 = 5UL;
                int l_379 = 0x6557367FL;
                l_380 = func_57((((((safe_mod_func_uint8_t_u_u((l_378 < (((-5L) ^ g_66.f2) != (l_364.f3 = 2UL))), p_11)) == (l_379 = func_43(l_365))) != ((-5L) <= l_364.f2)) == p_11) < 1UL));
                g_325 = (((0x7B4DL < (l_375 = (9UL != ((((safe_add_func_uint32_t_u_u(((0x32F60B59L <= (safe_rshift_func_int16_t_s_s(g_113, 5))) < p_11), p_8)) , func_43((p_9 <= (g_271 = g_63)))) > l_380.f0) == g_113)))) > p_11) , l_364);
                g_325.f2 = (safe_mod_func_int32_t_s_s((((((~((safe_lshift_func_uint8_t_u_s(((((g_391 = (safe_sub_func_int8_t_s_s((p_9 = 3L), g_325.f2))) <= (l_375 = (safe_sub_func_int32_t_s_s(l_374, g_325.f3)))) < (safe_sub_func_uint32_t_u_u((p_11 == 0x60F2E0DBL), (~l_378)))) != (safe_lshift_func_int16_t_s_s(p_10, 10))), ((func_41(p_8) > 0x34185419L) , (-6L)))) >= g_222)) & p_11) , p_10) , p_10) || g_194), g_325.f2));
                l_375 = (-1L);
            }
            else
            {
                unsigned l_398 = 0UL;
                int l_402 = 0xD6FCE88CL;
                int l_403 = 0xCD95A64DL;
                int l_404 = 0x0409D615L;
                struct S0 l_412 = {37,1069,-0,-10};
                l_404 = (l_403 = (((g_200 , ((((l_398 = 0xED015881L) || (safe_mod_func_uint8_t_u_u((l_401 = ((p_8 < func_43(l_398)) > l_362)), 250UL))) <= l_365) || (l_402 = l_362))) == l_380.f2) >= g_209));
                for (g_195 = 0; (g_195 != 3); g_195 = safe_add_func_uint8_t_u_u(g_195, 6))
                {
                    int l_407 = 8L;
                    if (g_66.f1)
                    {
                        g_66.f2 = ((g_391 , (l_374 = l_364.f2)) <= (((l_402 = p_9) <= 4294967291UL) , (p_10 , ((0UL >= g_325.f0) >= p_11))));
                        g_66.f2 = p_9;
                        return l_407;
                    }
                    else
                    {
                        struct S0 l_408 = {38,348,0,12};
                        g_325 = l_408;
                        g_325.f3 = (l_398 != ((((g_325.f0 > (l_407 = 0x90D0L)) <= ((func_23((l_361 || (safe_sub_func_uint32_t_u_u((p_8 >= (safe_unary_minus_func_int8_t_s((g_63 , ((l_403 != l_365) & ((p_11 || p_9) >= p_10)))))), g_66.f2))), l_364.f3, g_222, g_66.f3) ^ l_408.f3) ^ g_246)) & 0x1EL) != l_408.f3));
                        l_364 = l_412;
                    }
                }
            }
            for (p_11 = 20; (p_11 <= 50); ++p_11)
            {
                char l_437 = 0xC2L;
                int l_442 = 0L;
                unsigned short l_443 = 0xF2B9L;
                char l_458 = 0xBEL;
                struct S0 l_544 = {26,1973,-0,13};
                g_66.f2 = (l_375 = 0L);
                if ((safe_add_func_int8_t_s_s(0L, ((l_375 & g_325.f2) < p_9))))
                {
                    unsigned short l_417 = 0x27E9L;
                    int l_436 = 0L;
                    struct S0 l_440 = {7,690,0,11};
                    l_364.f2 = (((l_417 && (func_32(g_13, g_325, p_11, g_391, l_364.f1) , ((!0xE264AE26L) >= ((g_66.f2 = (g_325.f2 = ((((l_401 , 65533UL) < 0xD66BL) , l_375) >= p_8))) < p_11)))) ^ p_8) && p_11);
                    l_437 = (safe_sub_func_uint16_t_u_u(p_8, (((func_43(p_9) != (-8L)) == ((0xB1L ^ ((((((((safe_mod_func_int8_t_s_s((p_10 = ((safe_rshift_func_uint8_t_u_s(((l_374 , ((safe_rshift_func_uint16_t_u_s(p_10, (safe_sub_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((l_436 = g_66.f3), (g_177 , p_8))), 0xCB6CL)) | p_11), l_364.f0)), l_374)) , g_195), g_177)))) & 0xABA2L)) > g_335), p_8)) || g_222)), 0xDFL)) , 0xB54289F8L) == l_365) , 0L) == (-5L)) | g_194) | 252UL) , g_271)) | 0xD801CA20L)) , p_9)));
                    for (l_365 = 0; (l_365 != 35); l_365 = safe_add_func_uint16_t_u_u(l_365, 5))
                    {
                        g_325 = l_440;
                        if (p_8)
                            break;
                        l_440.f2 = g_209;
                    }
                    if (l_437)
                        break;
                }
                else
                {
                    char l_441 = (-4L);
                    l_442 = (p_11 ^ l_441);
                    return l_443;
                }
                if (((l_375 , ((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s((p_9 = ((((!((g_222 = (func_23(g_335, (((l_375 = p_10) , g_12) != ((safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s(l_437, g_325.f1)), (safe_rshift_func_uint16_t_u_u((l_456 = (safe_add_func_uint16_t_u_u(65530UL, p_9))), 3)))) , p_10)), p_9, g_325.f2) , p_8)) || p_10)) , (-1L)) || 1L) , p_8)), 0L)), g_66.f1)) && p_11)) , p_9))
                {
                    short l_461 = 0L;
                    struct S0 l_473 = {22,1260,0,6};
                    unsigned short l_480 = 0UL;
                    if ((!l_456))
                    {
                        unsigned char l_457 = 0x2DL;
                        l_457 = p_9;
                        return l_458;
                    }
                    else
                    {
                        short l_464 = (-2L);
                        unsigned l_471 = 0UL;
                        unsigned l_472 = 4294967293UL;
                        if (g_246)
                            break;
                        l_375 = p_10;
                        l_374 = (safe_add_func_uint8_t_u_u(((l_461 & ((+(p_11 & l_374)) == (0UL || func_16((safe_sub_func_int32_t_s_s(l_464, (p_11 , (((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(func_23((p_9 = (func_23((safe_sub_func_int32_t_s_s(g_335, 7UL)), g_325.f2, g_246, g_246) <= 0xA519L)), l_471, l_380.f1, g_66.f1), p_8)), l_472)) > l_461) , 0x1A112F7DL)))), g_391)))) == g_12), l_375));
                    }
                    l_364 = l_473;
                    l_374 = (safe_sub_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((l_364.f3 < func_32((safe_rshift_func_uint16_t_u_s(p_10, 2)), l_380, l_480, func_41((l_364.f2 = g_195)), ((g_325.f2 >= (safe_lshift_func_int8_t_s_s(((g_63 ^ (safe_add_func_uint16_t_u_u(l_365, l_380.f1))) | g_391), 4))) , 1L))), l_375)) && 0x4D6CL), (-7L)));
                    if (g_63)
                        break;
                }
                else
                {
                    g_66.f3 = ((safe_lshift_func_int8_t_s_u((((g_66.f0 ^ g_200) | ((g_195 , g_356) < ((((((safe_sub_func_uint8_t_u_u(g_66.f3, l_365)) >= 7UL) , (l_363 = ((func_23((g_335 | (l_374 = ((safe_lshift_func_int16_t_s_s((((safe_add_func_uint32_t_u_u(((g_12 & l_380.f2) <= g_222), l_362)) != 255UL) & p_11), 11)) > 0x014425E5L))), l_493, l_494, l_495) && p_8) , 1UL))) || p_9) | 0xE0CB6E95L) , p_11))) || (-1L)), g_222)) ^ g_13);
                }
                if (l_493)
                {
                    unsigned l_517 = 0xFFD4E167L;
                    int l_518 = (-1L);
                    unsigned char l_531 = 0x29L;
                    unsigned l_538 = 0x4C5A0F89L;
                    struct S0 l_557 = {39,1112,-0,-5};
                    if (p_11)
                    {
                        int l_496 = (-1L);
                        l_496 = g_113;
                        g_64 = (((safe_lshift_func_uint8_t_u_u(p_11, (g_391 > ((g_246 >= l_496) < (safe_lshift_func_int16_t_s_u((p_9 , 0xA8F7L), ((((safe_lshift_func_int16_t_s_s((g_325 , (g_507 = ((g_209 || (safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(l_493, 0UL)), g_63))) , l_380.f1))), g_325.f0)) && p_11) ^ g_177) & g_325.f2))))))) >= p_9) || 0xFAL);
                        l_518 = (((safe_rshift_func_uint16_t_u_u(((func_32((func_16(p_11, p_9) != p_9), (((((g_356 > ((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int8_t_s_s((p_8 || (((p_10 || (safe_rshift_func_int8_t_s_u(0xC9L, (g_516 = (l_363 && l_380.f0))))) <= p_9) || p_10)), g_356)) <= l_496), 0)) && l_494)) != 1UL) == 8UL) != p_8) , l_364), p_8, l_496, l_517) & 0UL) ^ 0x8CF5L), g_13)) | 0xB179L) | 0x4FL);
                    }
                    else
                    {
                        l_518 = (p_11 && (8UL != l_365));
                    }
                    if (((l_518 = (((l_519 ^ l_518) > (((l_364.f3 = ((~0x9DL) == (((((safe_rshift_func_uint8_t_u_s(l_365, 5)) <= g_222) & g_209) , ((l_442 = (safe_sub_func_int32_t_s_s(p_9, p_11))) , ((p_10 < 0x89L) < l_517))) & p_8))) ^ l_380.f0) < 0x5BBDL)) && p_9)) < l_364.f2))
                    {
                        int l_530 = 0x4021DC2BL;
                        l_374 = (func_23((l_518 = ((safe_sub_func_uint16_t_u_u(func_23((((safe_rshift_func_int8_t_s_s(0x70L, (g_356 && l_456))) > (func_23(p_10, g_6, (safe_mod_func_int16_t_s_s(func_32(l_364.f1, func_57(l_362), func_43(l_494), p_11, p_8), p_11)), l_530) , 0x343EL)) == 0x73D8L), g_209, g_200, g_507), p_10)) > g_200)), p_8, g_194, l_531) && p_11);
                        g_66.f2 = ((-5L) >= (p_9 , (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((((l_531 ^ (safe_lshift_func_uint8_t_u_s(l_538, p_9))) , 4294967293UL) , (l_544 = func_57((safe_add_func_uint16_t_u_u((g_541 = l_380.f2), (safe_sub_func_int32_t_s_s(0xF7BD5FE8L, (g_271 , 5L)))))))) , g_64), p_11)), 8))));
                        l_380.f2 = ((p_11 || (g_194 = (l_495 > (l_545 != ((safe_mod_func_uint16_t_u_u(((func_32((func_43((0xE9F2L > p_9)) & (p_10 = ((l_548 , g_325.f2) | l_544.f0))), g_325, p_8, l_549, g_391) || l_530) <= 0x1F95L), 0x79C1L)) , 0xACB9L))))) , l_364.f2);
                    }
                    else
                    {
                        l_518 = g_12;
                    }
                    l_544.f3 = ((l_374 = (safe_add_func_int8_t_s_s(func_16((((l_548 , ((g_246 , (safe_unary_minus_func_int32_t_s(func_43(g_66.f2)))) && (p_9 >= (((safe_add_func_int16_t_s_s((l_380.f2 = (-1L)), (safe_lshift_func_uint16_t_u_u(((p_10 || (g_64 && (l_380.f1 != p_9))) , g_6), 6)))) , l_548.f3) & g_113)))) > p_11) | (-3L)), p_10), p_9))) , 0x2E76DD32L);
                    l_557 = l_544;
                }
                else
                {
                    unsigned l_579 = 6UL;
                    int l_582 = 2L;
                    l_548.f2 = (func_39(g_325.f0) , (((255UL && 0UL) >= (0xD4F0L < ((safe_sub_func_int16_t_s_s((+p_11), (l_380.f2 = p_10))) != ((g_222 = 0xBCL) <= (safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s((p_8 | g_66.f2), l_380.f1)), p_11)))))) < l_437));
                    l_364.f3 = (l_544.f3 = (!(l_549 != func_41((g_325.f2 = ((l_582 = (safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u((g_325.f1 , (safe_mul_func_uint32_t_u_u(g_335, ((safe_sub_func_uint8_t_u_u(func_43(l_572), ((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((((l_437 , ((((safe_lshift_func_uint8_t_u_s(g_13, (l_579 >= (safe_add_func_int16_t_s_s((((l_519 & 0xF12DL) & g_66.f0) == g_325.f1), 0x16B6L))))) ^ p_11) <= l_544.f1) <= 0x4AL)) , (-1L)) , g_325.f1) | 4294967294UL), 4)), l_548.f1)) , 0x2BL))) == l_579)))), p_8)), p_11))) == 0UL))))));
                }
            }
        }
        else
        {
            unsigned short l_587 = 0x0CFEL;
            struct S0 l_599 = {7,932,0,-11};
            unsigned short l_626 = 0x4ADDL;
            short l_640 = 1L;
            if (func_23((p_11 , func_16((safe_rshift_func_int8_t_s_u(g_66.f2, ((safe_mod_func_int32_t_s_s(0x00DB2C4CL, l_587)) , func_43((safe_mod_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u(1L, (~p_11))) > func_43(g_6)), (safe_rshift_func_uint8_t_u_s((g_356 = ((l_401 & l_587) != g_6)), 7)))))))), p_10)), p_8, g_541, g_516))
            {
                unsigned l_612 = 4294967295UL;
                for (g_113 = 0; (g_113 == 9); ++g_113)
                {
                    struct S0 l_598 = {6,1550,0,13};
                    for (p_9 = 0; (p_9 > 3); p_9 = safe_add_func_int8_t_s_s(p_9, 1))
                    {
                        l_599 = l_598;
                    }
                    l_598.f2 = (l_364.f2 != ((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(255UL, ((safe_rshift_func_int8_t_s_u((((safe_lshift_func_int8_t_s_s((g_66.f3 == p_8), 5)) >= (safe_rshift_func_int8_t_s_u(p_8, (l_598.f3 = 0xF2L)))) < p_8), 0)) | l_612))), (g_613 = (p_8 && g_64)))) , l_364.f0), g_222)) >= g_195));
                    if (l_380.f2)
                        continue;
                }
                if (p_8)
                    break;
                l_363 = ((safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((g_200 > (((l_612 , ((func_41((((safe_rshift_func_int8_t_s_u(0L, 5)) , ((((safe_lshift_func_int16_t_s_u(l_401, (l_380.f2 & ((func_41(g_271) , (safe_sub_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u((l_626 , func_23(((!g_209) , l_361), l_587, l_572, p_10)), l_572)) , 0x5348FDDFL), g_66.f2))) || 0x3BL)))) ^ p_9) < 0x0FC27A25L) >= p_9)) <= l_626)) && 0xC6L) , p_10)) || l_364.f2) | 0L)), 0UL)), 1L)) & 2L);
                l_364.f3 = (safe_mod_func_uint8_t_u_u(0x85L, (5UL | 4UL)));
            }
            else
            {
                int l_646 = 0x4527B3B8L;
                struct S0 l_649 = {25,583,0,3};
                if ((g_541 < ((l_380.f1 ^ (p_10 > ((((g_325.f1 > l_587) > p_8) && p_11) < (l_599.f2 = (safe_lshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((l_380.f2 = ((safe_lshift_func_int8_t_s_u((g_194 = ((safe_add_func_uint16_t_u_u((g_222 , g_335), g_66.f2)) > (-1L))), 6)) , 0UL)), 3)), g_195)), l_639)))))) ^ (-9L))))
                {
                    char l_645 = 0xA1L;
                    int l_648 = (-8L);
                    l_364 = func_57(func_41(((0UL < l_640) , func_23(l_361, func_23((safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(65535UL, 0)) > (l_645 = p_10)), (l_364.f2 = ((((func_23(l_587, p_11, g_507, (((p_10 , l_646) & p_9) & 0x6C85L)) || 0x63L) && 7UL) , g_647) | 255UL)))), p_9, g_66.f2, g_66.f2), g_66.f2, l_648))));
                }
                else
                {
                    l_649 = g_325;
                }
                l_364 = g_325;
                for (g_246 = 0; (g_246 == (-12)); g_246--)
                {
                    l_364.f2 = ((l_364.f3 = l_363) , ((g_335 >= 4294967286UL) , func_32((g_63 = (l_599.f2 = 1L)), func_57(p_8), p_11, g_222, g_13)));
                }
                for (l_626 = (-9); (l_626 <= 31); l_626++)
                {
                    unsigned short l_664 = 0UL;
                    for (g_516 = 21; (g_516 <= 46); g_516 = safe_add_func_int8_t_s_s(g_516, 3))
                    {
                        g_325 = func_57((g_200 < (((p_11 == p_8) >= ((safe_sub_func_uint16_t_u_u((65533UL >= ((safe_sub_func_uint8_t_u_u(((((p_8 < (safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((g_64 || p_11), p_8)), 7))) , (l_665 = (l_664 = func_41((g_64 = (g_66.f2 = ((g_335 && p_8) , p_9))))))) <= l_649.f0) <= p_9), p_10)) > g_325.f0)), l_572)) && 0x2C828B5EL)) & 0xF8L)));
                        l_380.f2 = (((l_666 , (65535UL | func_41((((((safe_rshift_func_uint16_t_u_u(func_41(g_66.f3), (safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s((p_10 < ((l_640 != (p_8 == (((l_672 != g_325.f3) < 0x4AL) , 0xBF72L))) , (-3L))))), 0)))) > p_11) & l_666) && l_664) , g_325.f3)))) < 251UL) ^ 0L);
                    }
                    return l_456;
                }
            }
        }
        for (p_9 = 12; (p_9 >= (-20)); p_9 = safe_sub_func_uint32_t_u_u(p_9, 4))
        {
            int l_683 = 0L;
            g_325 = l_364;
            l_364.f2 = ((9UL > (p_10 <= (safe_lshift_func_uint16_t_u_s(l_361, (((g_271 = ((g_66.f0 = g_66.f2) , (safe_lshift_func_uint16_t_u_s(l_361, (safe_rshift_func_int16_t_s_u(0x92D2L, (l_401 , (l_380.f3 = (0UL == ((((safe_add_func_uint8_t_u_u(l_672, g_335)) < l_683) & l_683) < g_516)))))))))) >= l_374) , p_11))))) <= p_11);
        }
        g_325 = func_57((((safe_lshift_func_int8_t_s_u((((((safe_add_func_int16_t_s_s(0xFCB3L, (((((((g_194 & g_325.f3) , p_8) && (0x9464L == (!((l_665 == (safe_rshift_func_int8_t_s_s(l_401, 6))) == ((~((safe_sub_func_int8_t_s_s(p_8, (((g_66.f0 & l_666) >= l_364.f0) > l_361))) <= g_13)) <= g_195))))) , l_380.f3) <= (-7L)) , l_672) | 4294967290UL))) >= p_11) ^ (-8L)) , p_8) , p_11), l_672)) && l_494) ^ l_380.f1));
        if (g_194)
            continue;
    }
    return p_8;
}







static unsigned short func_16(short p_17, int p_18)
{
    char l_38 = 0L;
    int l_331 = 0x51C68F02L;
    char l_349 = (-1L);
    int l_350 = 0x84F80DE2L;
    struct S0 l_351 = {3,208,0,2};
    unsigned l_352 = 4294967295UL;
    if ((((safe_lshift_func_uint8_t_u_u(p_17, (safe_sub_func_int8_t_s_s(func_23(((l_331 = (g_6 >= (safe_lshift_func_uint16_t_u_u(((func_32(l_38, func_39(g_6), (g_177 <= (safe_sub_func_uint16_t_u_u((g_6 || l_38), ((((g_6 , p_17) != g_6) , 0L) , l_38)))), g_177, p_18) < 0L) > g_177), 1)))) && g_113), l_38, g_177, p_18), 0x86L)))) && g_200) , p_17))
    {
        unsigned short l_341 = 0UL;
        struct S0 l_345 = {25,107,-0,-2};
        for (l_331 = 3; (l_331 <= (-7)); l_331 = safe_sub_func_uint16_t_u_u(l_331, 6))
        {
            int l_348 = (-6L);
            int l_353 = 1L;
            l_345.f3 = (safe_sub_func_uint32_t_u_u((g_246 | (safe_unary_minus_func_uint8_t_u(func_32(l_341, ((4294967289UL | (safe_unary_minus_func_int8_t_s(((l_350 = (safe_mod_func_int16_t_s_s((p_18 & 0x5A6C28FBL), func_32(g_63, l_345, l_345.f3, (safe_mod_func_int8_t_s_s(((func_43(l_348) > l_349) , l_38), l_348)), g_66.f2)))) == l_349)))) , l_351), l_352, l_345.f2, g_222)))), p_18));
            if (l_349)
                continue;
            l_353 = p_17;
            if (func_41(g_325.f1))
            {
                unsigned l_354 = 4294967290UL;
                g_66.f2 = l_354;
            }
            else
            {
                l_345.f3 = func_41(g_66.f0);
            }
        }
    }
    else
    {
        l_331 = p_17;
    }
    return p_17;
}







static char func_23(char p_24, unsigned short p_25, int p_26, short p_27)
{
    int l_334 = 0x1411F479L;
    g_325.f2 = (((safe_add_func_int32_t_s_s(func_43(l_334), p_24)) && ((((g_335 = g_66.f3) >= g_66.f2) & (p_26 = (-6L))) || (p_26 || (p_24 == (g_66.f2 & 0x43L))))) >= 1UL);
    return p_26;
}







static unsigned char func_32(int p_33, struct S0 p_34, short p_35, unsigned short p_36, int p_37)
{
    short l_315 = 0x33A0L;
    short l_320 = (-1L);
    unsigned l_323 = 0xBD2CD2D6L;
    int l_324 = 0x3F70EDA4L;
    struct S0 l_330 = {28,873,0,10};
    g_66 = p_34;
    g_325 = func_45(l_315, (safe_lshift_func_int16_t_s_s(((((l_320 = (safe_add_func_int32_t_s_s(g_66.f3, p_35))) & p_34.f0) && (safe_sub_func_int8_t_s_s(((l_323 & (((g_66.f1 , (g_64 , (0L < (l_324 = 0x669896BEL)))) & l_320) & g_113)) <= l_315), p_35))) , g_246), p_34.f1)));
    g_66.f2 = (safe_lshift_func_uint8_t_u_u(l_320, (l_324 = (func_43((safe_add_func_uint32_t_u_u(g_66.f3, (g_325.f0 = ((((0UL || g_325.f3) , (((p_34 = (g_177 , (l_330 , l_330))) , (l_330.f3 = l_330.f0)) , (((p_34.f2 | g_325.f1) != g_66.f0) < g_325.f0))) != 0x3305DE48L) <= 1UL))))) < (-1L)))));
    return g_63;
}







static struct S0 func_39(unsigned char p_40)
{
    unsigned short l_50 = 0x9A1DL;
    char l_51 = 6L;
    int l_52 = 1L;
    int l_53 = 0xCE43C7D7L;
    int l_273 = 0x4445633AL;
    short l_286 = (-1L);
    unsigned short l_292 = 65529UL;
    int l_301 = 1L;
    struct S0 l_312 = {44,1723,0,13};
    if (func_41(((+p_40) & (((p_40 >= func_43((func_45((l_53 = (l_52 = ((safe_mod_func_int32_t_s_s(0xC88307B3L, l_50)) | (l_51 = g_6)))), p_40) , (((g_66 , (safe_sub_func_uint8_t_u_u((g_63 || 65527UL), 0x2AL))) ^ 0x57973F93L) | g_66.f0)))) ^ p_40) , 1L))))
    {
        struct S0 l_197 = {8,1517,0,4};
        unsigned l_201 = 0x76FFFE61L;
        short l_220 = 0xD9F5L;
        if (g_177)
        {
            int l_196 = 0x2E702532L;
            l_197 = func_57(l_196);
        }
        else
        {
            unsigned l_202 = 0UL;
            struct S0 l_203 = {43,1278,-0,2};
            l_53 = ((safe_add_func_uint32_t_u_u(g_63, (p_40 && ((-6L) & (l_197.f3 = p_40))))) <= (((((((p_40 , (0x9AB0C0B7L > ((g_200 = 65532UL) , func_41(func_43(p_40))))) | 0UL) <= p_40) >= p_40) | l_201) & l_202) > g_6));
            return l_203;
        }
        if ((g_195 , 7L))
        {
            struct S0 l_204 = {14,232,0,-11};
            unsigned l_232 = 0x670D45DBL;
            unsigned l_255 = 0xF97578CBL;
            l_204 = func_45(l_197.f1, (1L != g_66.f2));
            if ((0xABL && g_200))
            {
                unsigned l_217 = 0x87FC28E3L;
                int l_221 = 0x09C47C9FL;
                for (g_113 = 9; (g_113 < 29); g_113 = safe_add_func_int16_t_s_s(g_113, 5))
                {
                    char l_214 = 0L;
                    l_221 = (((func_41((((((safe_mod_func_int16_t_s_s((g_209 = p_40), (l_51 || (safe_lshift_func_uint16_t_u_s((~0UL), 11))))) < (l_214 == (func_43((l_52 = 255UL)) != ((((((+(g_200 = (-1L))) != (safe_rshift_func_uint8_t_u_u(((l_217 != (safe_rshift_func_uint16_t_u_s(((g_66.f0 = ((l_204.f3 = g_6) && p_40)) <= l_220), p_40))) | l_217), 2))) < l_51) >= g_66.f2) , p_40) == l_201)))) , g_64) && 0x098FL) & p_40)) != 0x46917934L) || 0x76A42D7DL) < p_40);
                }
                l_204.f2 = (func_43((g_222 = 246UL)) || p_40);
                l_197 = func_57(l_53);
            }
            else
            {
                unsigned short l_223 = 65530UL;
                int l_233 = 1L;
                l_223 = l_204.f0;
                g_66.f3 = (l_53 <= func_43((((safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(((l_52 = p_40) == (g_222 , (0xDE277DF4L | g_194))), ((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((l_233 = l_232), (((l_204.f2 || func_43(l_223)) > l_220) < 1UL))), 1UL)) == g_66.f0))), l_197.f2)) <= 0L) & 0x8FC1L)));
                l_233 = ((!(p_40 = (safe_add_func_int32_t_s_s(func_41((safe_lshift_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((l_197.f3 = (((((safe_lshift_func_int8_t_s_u(((g_6 <= (safe_mod_func_int8_t_s_s(l_53, (safe_lshift_func_int16_t_s_u((l_204.f2 = ((+(((g_66.f2 | (0x9CL && (g_66 , ((g_246 = p_40) >= 0x4C8AL)))) < ((safe_mod_func_uint16_t_u_u(func_43(func_43((safe_lshift_func_int16_t_s_s((0xE92D2D4CL > (safe_rshift_func_int16_t_s_s(((g_64 = 0x0A111EAAL) || l_204.f1), 2))), g_66.f0)))), 0xC4ABL)) < 0x0CL)) ^ 1L)) , p_40)), p_40))))) , 0L), 7)) & g_66.f1) , g_194) || p_40) < g_66.f3)), 0L)) >= 0x92L), g_195))), g_222)))) <= (-8L));
                l_233 = (func_41((safe_lshift_func_uint16_t_u_s((l_255 == g_66.f1), (safe_mod_func_int8_t_s_s(g_66.f2, func_43((p_40 = (l_201 > l_197.f1)))))))) != g_200);
            }
        }
        else
        {
            struct S0 l_266 = {5,886,-0,12};
            for (g_64 = (-30); (g_64 == 5); g_64++)
            {
                unsigned char l_263 = 0xE0L;
                struct S0 l_272 = {38,1694,0,-2};
                for (l_52 = 9; (l_52 <= (-24)); l_52 = safe_sub_func_uint8_t_u_u(l_52, 2))
                {
                    unsigned l_262 = 4294967286UL;
                    g_271 = ((l_263 = l_262) | (!(((safe_lshift_func_uint16_t_u_u((l_53 = 0x5D28L), 14)) , (l_266 = (g_66 = func_57((g_209 >= p_40))))) , ((safe_lshift_func_uint16_t_u_u(((g_195 ^ (9L && ((((safe_add_func_uint32_t_u_u(l_262, 0xD8F51295L)) != l_266.f1) > 0x8296L) ^ p_40))) <= p_40), 9)) < p_40))));
                    g_66.f3 = p_40;
                    l_272 = g_66;
                }
                return l_272;
            }
            return g_66;
        }
        l_197.f2 = (-6L);
    }
    else
    {
        int l_276 = 0x5735E2F0L;
        unsigned l_287 = 0xF4225F34L;
        l_52 = (l_273 >= (safe_add_func_uint16_t_u_u(g_64, (func_57(p_40) , ((p_40 = ((((l_276 > 0x9D981C66L) , (safe_rshift_func_int8_t_s_s(g_271, 0))) & (((((l_53 = g_271) , 1UL) && 4294967295UL) & 247UL) , g_66.f2)) ^ l_276)) || 1UL)))));
        for (g_113 = 28; (g_113 > (-10)); --g_113)
        {
            unsigned l_285 = 1UL;
            int l_302 = 0x0EDAC9BBL;
            int l_311 = 0x2DD593ABL;
            l_287 = (safe_sub_func_uint8_t_u_u((g_222 = (p_40 = (safe_rshift_func_int16_t_s_u(func_43((l_286 = (l_51 | (g_113 || (((l_53 = (l_51 && func_41((l_276 = (g_66.f3 = p_40))))) <= 0L) , l_285))))), (p_40 , g_200))))), 0x96L));
            g_66.f2 = (l_285 ^ ((0xAD4FL ^ (g_113 && (safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((((l_52 = p_40) != l_292) == g_66.f0), (0UL ^ ((safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((safe_add_func_int32_t_s_s((l_53 = l_285), (safe_add_func_int16_t_s_s(l_51, p_40)))) == 6UL), g_194)), 0x5D0AL)) == l_287)))), g_200)))) & p_40));
            l_302 = ((g_222 = p_40) || func_43((+((l_52 = (func_43(g_222) || (((p_40 >= func_43(p_40)) <= ((l_276 = ((((l_273 , 0UL) , l_285) <= 0x96L) == 65526UL)) <= g_66.f0)) == 1L))) < l_301))));
            l_311 = (safe_mod_func_uint8_t_u_u((((l_276 = p_40) , (((l_285 , ((l_302 = (!(safe_lshift_func_int8_t_s_u(g_194, g_195)))) || ((p_40 && l_276) != (0xE7L <= (safe_mod_func_uint8_t_u_u((g_209 | 65535UL), p_40)))))) ^ p_40) & 0x8CL)) && g_194), l_273));
        }
        l_276 = (g_209 & g_66.f2);
    }
    return l_312;
}







static int func_41(int p_42)
{
    short l_160 = (-1L);
    struct S0 l_163 = {37,710,-0,-6};
    l_160 = g_66.f3;
    g_66 = func_57((l_160 , p_42));
    for (p_42 = (-26); (p_42 == 29); ++p_42)
    {
        int l_166 = 0xEDEB9ED2L;
        int l_178 = (-5L);
        unsigned l_193 = 4294967291UL;
        g_66 = l_163;
        l_178 = (((safe_sub_func_uint16_t_u_u((l_166 >= (safe_sub_func_uint16_t_u_u(((l_163.f2 = ((l_163.f3 = (-1L)) > g_63)) , ((safe_lshift_func_uint16_t_u_u(l_163.f0, ((!((((safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(func_43((safe_lshift_func_uint8_t_u_s(g_66.f0, func_43(((+((g_66.f2 = (~g_63)) >= l_160)) > g_177))))), p_42)), 0x869285BAL)) , p_42) , 2L) , p_42)) != 0UL))) || p_42)), l_166))), p_42)) | l_163.f0) <= g_66.f0);
        if (g_63)
            continue;
        l_163.f2 = (((g_195 = (l_163.f3 = (g_194 = (l_178 = (safe_lshift_func_uint8_t_u_u(((-1L) && (safe_rshift_func_int16_t_s_s(((((0xB0E9L & 0xEEE5L) || (func_43(p_42) , (l_163.f1 ^ (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(func_43((safe_lshift_func_uint16_t_u_u(((g_66.f2 = ((g_66.f2 >= (safe_sub_func_int8_t_s_s((~(((g_6 , func_43(((safe_lshift_func_int16_t_s_u(((((l_163.f3 > 0x44L) <= l_166) >= 0x25L) ^ g_66.f1), l_178)) , l_178))) , 0xB5L) > g_113)), l_178))) , p_42)) != 0L), g_66.f3))), 2)), g_66.f1))))) & (-8L)) <= g_66.f1), l_178))), l_193)))))) & 250UL) ^ l_163.f2);
    }
    return g_66.f0;
}







static unsigned func_43(unsigned char p_44)
{
    int l_158 = 0x0B43D512L;
    int l_159 = 0x10A1B7E2L;
    g_64 = (-1L);
    l_159 = l_158;
    return l_158;
}







static struct S0 func_45(int p_46, unsigned short p_47)
{
    unsigned l_65 = 8UL;
    char l_70 = 0x5BL;
    int l_81 = (-7L);
    unsigned l_82 = 4294967289UL;
    unsigned l_89 = 0xA3C5B2E9L;
    unsigned l_90 = 1UL;
    struct S0 l_141 = {24,1264,0,-10};
    for (p_46 = 0; (p_46 <= 12); p_46 = safe_add_func_uint32_t_u_u(p_46, 7))
    {
        char l_56 = 0xFFL;
        struct S0 l_67 = {34,1298,0,10};
        unsigned l_75 = 0UL;
        unsigned char l_87 = 0xBBL;
        char l_142 = 0L;
        unsigned short l_155 = 5UL;
        if ((l_56 != g_6))
        {
            l_67 = func_57((((safe_mod_func_uint32_t_u_u((l_56 <= (safe_mod_func_int8_t_s_s(((!((g_64 = ((p_46 || (g_63 = 0UL)) != 7UL)) >= (g_6 < 0xE376A952L))) , l_65), (((g_6 == l_56) < g_6) ^ p_47)))), p_47)) < p_47) && p_47));
        }
        else
        {
            unsigned l_72 = 0x37E3B525L;
            int l_80 = 0x03FBD5CEL;
            struct S0 l_88 = {13,967,-0,-14};
            unsigned l_122 = 4294967295UL;
            int l_128 = 0xB2C3BF42L;
            if (((p_46 && (l_72 = (safe_mod_func_int32_t_s_s((0x7DD1A1FBL && (l_70 = p_47)), (safe_unary_minus_func_int8_t_s((l_65 == g_66.f0))))))) | (safe_lshift_func_int8_t_s_u(l_75, (safe_sub_func_int16_t_s_s((l_81 = (l_67.f2 ^ ((safe_lshift_func_uint16_t_u_s((l_80 & p_47), 5)) > (-4L)))), l_82))))))
            {
                unsigned char l_91 = 0x9FL;
                for (l_81 = 0; (l_81 < (-12)); l_81 = safe_sub_func_uint32_t_u_u(l_81, 3))
                {
                    for (g_63 = 25; (g_63 == 19); g_63--)
                    {
                        l_88 = (l_87 , g_66);
                        g_66 = (((l_89 = g_66.f0) && 0x87L) , func_57(g_64));
                    }
                    if (l_90)
                        continue;
                    g_64 = l_81;
                    g_64 = (l_91 <= g_66.f0);
                }
            }
            else
            {
                unsigned char l_105 = 0x05L;
                char l_127 = (-2L);
                struct S0 l_129 = {12,1099,-0,5};
                unsigned char l_136 = 255UL;
                int l_139 = 0xB645EBEAL;
                if ((safe_add_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s(0x8B36L, l_88.f2)) , ((((safe_mod_func_int32_t_s_s(p_46, p_46)) == p_47) >= ((safe_rshift_func_int8_t_s_s(2L, (p_47 || (g_63 , (safe_lshift_func_uint16_t_u_s(g_63, 2)))))) && l_72)) , p_46)), l_70)))
                {
                    struct S0 l_104 = {25,1973,0,13};
                    for (l_87 = 0; (l_87 >= 56); l_87 = safe_add_func_int16_t_s_s(l_87, 7))
                    {
                        return l_104;
                    }
                    l_81 = l_105;
                    g_66.f2 = ((safe_sub_func_uint8_t_u_u(g_63, g_66.f3)) || g_66.f3);
                    if (((((safe_mod_func_uint16_t_u_u(0x49AAL, p_46)) <= (l_104.f3 != (safe_sub_func_int8_t_s_s((l_67.f2 = g_66.f0), (safe_unary_minus_func_uint16_t_u((l_89 && ((g_113 = 1UL) != l_105)))))))) < (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(l_122, 4)), 7)) , (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((g_6 < (-9L)), 6)), 9))), l_127)), 2))) , g_6))
                    {
                        if (l_128)
                            break;
                        return g_66;
                    }
                    else
                    {
                        g_66 = func_57(p_47);
                        return l_129;
                    }
                }
                else
                {
                    short l_140 = 2L;
                    g_66 = func_57(l_129.f0);
                    g_66.f3 = 5L;
                    if ((safe_mod_func_int32_t_s_s((g_66.f3 = ((l_140 = ((safe_add_func_int16_t_s_s(0xD80EL, (safe_mod_func_int16_t_s_s(0xB8E4L, ((p_47 > (l_136 = g_66.f1)) , g_66.f3))))) < (safe_rshift_func_int16_t_s_u((l_70 != (l_88.f0 || (7UL == (l_139 , g_66.f3)))), 14)))) == l_88.f1)), l_127)))
                    {
                        return l_141;
                    }
                    else
                    {
                        return g_66;
                    }
                }
            }
            if (l_128)
                continue;
            l_141.f2 = (~l_142);
            for (l_65 = (-10); (l_65 < 58); l_65++)
            {
                unsigned l_151 = 0x16F66F74L;
                int l_152 = 1L;
                l_152 = ((safe_sub_func_uint32_t_u_u((((l_141.f2 = l_128) , (((g_63 & (l_141.f2 >= (1UL < ((safe_rshift_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((p_47 != p_47), (l_88.f2 = g_66.f1))) <= (g_66.f3 && (-7L))), g_6)) | p_47)))) <= g_66.f0) , g_66.f1)) == l_151), 5UL)) == 0xD0L);
                if (p_47)
                {
                    l_152 = g_66.f3;
                    for (l_152 = (-1); (l_152 <= (-8)); --l_152)
                    {
                        if (g_6)
                            break;
                    }
                }
                else
                {
                    l_141.f3 = (l_155 <= (0x82L > ((g_63 , p_46) ^ p_47)));
                }
                l_152 = (+l_70);
            }
        }
    }
    l_141 = l_141;
    return g_66;
}







static struct S0 func_57(int p_58)
{
    return g_66;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_66.f0, "g_66.f0", print_hash_value);
    transparent_crc(g_66.f1, "g_66.f1", print_hash_value);
    transparent_crc(g_66.f2, "g_66.f2", print_hash_value);
    transparent_crc(g_66.f3, "g_66.f3", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_325.f0, "g_325.f0", print_hash_value);
    transparent_crc(g_325.f1, "g_325.f1", print_hash_value);
    transparent_crc(g_325.f2, "g_325.f2", print_hash_value);
    transparent_crc(g_325.f3, "g_325.f3", print_hash_value);
    transparent_crc(g_335, "g_335", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    transparent_crc(g_391, "g_391", print_hash_value);
    transparent_crc(g_507, "g_507", print_hash_value);
    transparent_crc(g_516, "g_516", print_hash_value);
    transparent_crc(g_541, "g_541", print_hash_value);
    transparent_crc(g_613, "g_613", print_hash_value);
    transparent_crc(g_647, "g_647", print_hash_value);
    transparent_crc(g_695, "g_695", print_hash_value);
    transparent_crc(g_698, "g_698", print_hash_value);
    transparent_crc(g_727, "g_727", print_hash_value);
    transparent_crc(g_750.f0, "g_750.f0", print_hash_value);
    transparent_crc(g_750.f1, "g_750.f1", print_hash_value);
    transparent_crc(g_750.f2, "g_750.f2", print_hash_value);
    transparent_crc(g_750.f3, "g_750.f3", print_hash_value);
    transparent_crc(g_803, "g_803", print_hash_value);
    transparent_crc(g_820, "g_820", print_hash_value);
    transparent_crc(g_835, "g_835", print_hash_value);
    transparent_crc(g_883, "g_883", print_hash_value);
    transparent_crc(g_884, "g_884", print_hash_value);
    transparent_crc(g_888, "g_888", print_hash_value);
    transparent_crc(g_894, "g_894", print_hash_value);
    transparent_crc(g_924, "g_924", print_hash_value);
    transparent_crc(g_982.f0, "g_982.f0", print_hash_value);
    transparent_crc(g_982.f1, "g_982.f1", print_hash_value);
    transparent_crc(g_982.f2, "g_982.f2", print_hash_value);
    transparent_crc(g_982.f3, "g_982.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
