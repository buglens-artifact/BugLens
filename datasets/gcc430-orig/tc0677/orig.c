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



static unsigned char g_10 = 0x19L;
static int *g_56 = (void*)0;
static int g_69 = 0xA36042C8L;
static int g_82 = 0xD2DC0978L;
static unsigned short g_101 = 0x51B7L;
static unsigned g_167 = 0xD0B757F9L;
static unsigned short g_173 = 65532UL;
static unsigned g_209 = 0UL;
static int *g_217 = &g_69;
static int **g_216 = &g_217;
static char g_239 = 0L;
static unsigned g_268 = 0x5F76BB76L;
static int g_276 = 0x9D27B807L;
static short g_290 = 8L;
static char g_312 = 0xA2L;
static unsigned g_323 = 4294967288UL;
static char g_352 = 0x44L;
static int g_386 = (-3L);
static unsigned short g_403 = 0xAA05L;
static short g_490 = 0x1D40L;
static unsigned g_499 = 0x28886CC7L;
static char g_508 = 0xC2L;
static int g_558 = 6L;
static unsigned g_561 = 0x2E7E911EL;
static int g_612 = 0xD6C81ED3L;
static unsigned g_675 = 4294967294UL;
static unsigned short g_780 = 65534UL;
static char g_784 = 0L;
static unsigned short g_822 = 0UL;
static unsigned g_878 = 1UL;
static int g_931 = 0x1D5FEAE2L;
static unsigned g_955 = 0UL;
static unsigned g_1015 = 9UL;
static int g_1082 = 7L;
static short g_1095 = 4L;
static unsigned g_1125 = 4294967291UL;
static unsigned g_1141 = 4294967290UL;



static unsigned char func_1(void);
static int func_4(unsigned p_5, int p_6, unsigned char p_7, int p_8, unsigned p_9);
static int func_11(unsigned short p_12, char p_13, unsigned p_14, unsigned p_15);
static unsigned func_18(int p_19, unsigned short p_20, unsigned char p_21);
static int * func_31(int p_32, unsigned char p_33, int p_34, unsigned p_35);
static unsigned func_43(int p_44, char p_45, unsigned short p_46, int p_47);
static unsigned char func_51(int * p_52, unsigned p_53, char p_54, unsigned char p_55);
static int func_57(unsigned p_58, int * p_59, unsigned char p_60, int p_61);
static char func_62(unsigned p_63, unsigned short p_64);
static int func_72(unsigned char p_73, int * p_74, unsigned p_75, short p_76);
static unsigned char func_1(void)
{
    int l_24 = 1L;
    int *l_1135 = &g_931;
    int ***l_1136 = &g_216;
    int l_1139 = 0x9B216164L;
    int l_1140 = (-7L);
    int **l_1142 = &l_1135;
    (*l_1135) = (safe_add_func_int32_t_s_s(func_4(g_10, func_11((((safe_lshift_func_uint8_t_u_s((func_18(((safe_sub_func_int8_t_s_s(g_10, l_24)) & (g_10 | ((safe_div_func_int16_t_s_s(l_24, g_10)) || (l_24 <= ((safe_mod_func_uint16_t_u_u((0xA5L <= ((safe_div_func_uint16_t_u_u((0x64L && (-1L)), g_10)) <= l_24)), l_24)) ^ g_10))))), l_24, g_10) != g_276), 3)) <= g_508) == l_24), l_24, g_508, l_24), g_167, g_386, g_276), l_24));


    ;

    l_1135 = (void*)0;

    ;
    (*g_217) = ((&g_216 == l_1136) ^ (g_955 && 0xA58AL));
    (*l_1142) = func_31((safe_sub_func_uint8_t_u_u(func_4(g_1095, g_561, func_11((&g_56 == (void*)0), l_24, (l_24 | (*g_217)), (g_312 > (((g_508 > l_1139) < l_1140) ^ (-5L)))), g_1082, g_101), 0UL)), g_1141, g_1141, g_558);

    ;
    return g_1082;
}







static int func_4(unsigned p_5, int p_6, unsigned char p_7, int p_8, unsigned p_9)
{
    int *l_961 = &g_931;
    unsigned char l_962 = 5UL;
    int ***l_965 = &g_216;
    int ***l_970 = &g_216;
    int l_1036 = 0L;
    int l_1073 = 1L;
    int l_1078 = (-1L);
    int l_1093 = (-1L);
    int l_1108 = 0x1C7555E3L;
    int l_1113 = 0xA546631BL;
    for (g_239 = (-11); (g_239 > 11); g_239 = safe_add_func_int16_t_s_s(g_239, 7))
    {
        unsigned char l_960 = 0x85L;
        unsigned short l_973 = 0x7E7EL;
        int l_1033 = 0xE1D85BB9L;
        int l_1063 = 0x4B4E8D98L;
        int l_1070 = 2L;
        int l_1121 = 6L;
        int l_1124 = 0x0498EC84L;
        int ***l_1132 = &g_216;
        if (func_72(l_960, l_961, l_962, g_878))
        {
            unsigned short l_968 = 1UL;
            if (p_8)
            {
                int **l_969 = &l_961;
                (*l_969) = func_31((!(safe_rshift_func_int16_t_s_s((((void*)0 == l_965) || p_9), 0))), (func_11((((safe_add_func_int8_t_s_s(p_9, p_7)) < (func_11(g_675, l_960, g_490, p_8) | 0xD9D1AF45L)) == p_8), l_968, p_6, p_5) ^ 0x95E7L), p_5, g_290);

                ;
                if (((l_970 != &g_216) < (g_822 | (((0x0E2DL || g_561) != (~((safe_lshift_func_int8_t_s_u(func_72(l_968, &g_82, (~(p_8 != (p_8 ^ l_960))), (**l_969)), 7)) < g_499))) == l_973))))
                {
                    (**l_969) = (safe_rshift_func_uint16_t_u_s(0x301BL, 1));
                }
                else
                {
                    int *l_976 = (void*)0;
                    int *l_977 = &g_931;
                    int *l_978 = &g_82;
                    int *l_979 = &g_931;
                    int *l_980 = &g_82;
                    int *l_981 = &g_612;
                    int *l_982 = &g_612;
                    int *l_983 = &g_612;
                    int *l_984 = &g_82;
                    int *l_985 = &g_82;
                    int *l_986 = &g_931;
                    int *l_987 = &g_931;
                    int *l_988 = &g_82;
                    int *l_989 = &g_82;
                    int *l_990 = &g_931;
                    int *l_991 = &g_69;
                    int *l_992 = &g_612;
                    int *l_993 = &g_82;
                    int *l_994 = &g_612;
                    int *l_995 = (void*)0;
                    int *l_996 = (void*)0;
                    int *l_997 = &g_931;
                    int *l_998 = &g_82;
                    int *l_999 = &g_612;
                    int *l_1000 = (void*)0;
                    int *l_1001 = &g_931;
                    int *l_1002 = &g_931;
                    int *l_1003 = &g_82;
                    int *l_1004 = &g_82;
                    int *l_1005 = (void*)0;
                    int *l_1006 = &g_69;
                    int *l_1007 = &g_612;
                    int *l_1008 = &g_931;
                    int *l_1009 = &g_931;
                    int *l_1010 = &g_82;
                    int *l_1011 = &g_612;
                    int *l_1012 = &g_931;
                    int *l_1013 = (void*)0;
                    int *l_1014 = (void*)0;
                    --g_1015;
                    (*l_961) = func_11((safe_mod_func_int8_t_s_s((&g_216 == &g_216), g_290)), l_968, g_561, (((safe_sub_func_int16_t_s_s((l_969 != (void*)0), 1UL)) < ((safe_add_func_int32_t_s_s(p_8, 0x424D8399L)) & p_6)) | p_8));
                    for (g_82 = 0; (g_82 != (-17)); g_82 = safe_sub_func_int16_t_s_s(g_82, 6))
                    {
                        (**l_969) = (safe_mul_func_uint8_t_u_u(g_931, p_9));
                    }
                }
            }
            else
            {
                for (g_561 = 0; (g_561 < 17); g_561 = safe_add_func_int32_t_s_s(g_561, 3))
                {
                    int *l_1030 = &g_69;
                    (*l_961) = ((p_7 && func_72(p_7, l_1030, p_6, g_508)) == (safe_div_func_int32_t_s_s(p_9, p_7)));
                }
            }
            l_1033 &= p_6;
            if (p_8)
                break;
            if (l_960)
                break;
        }
        else
        {
            int *l_1034 = &g_82;
            int *l_1035 = (void*)0;
            int *l_1037 = &g_69;
            int *l_1038 = (void*)0;
            int *l_1039 = (void*)0;
            int *l_1040 = &g_931;
            int *l_1041 = (void*)0;
            int *l_1042 = (void*)0;
            int *l_1043 = (void*)0;
            int *l_1044 = &g_82;
            int *l_1045 = &g_82;
            int *l_1046 = (void*)0;
            int *l_1047 = (void*)0;
            int *l_1048 = &g_931;
            int *l_1049 = &g_931;
            int *l_1050 = &g_82;
            int *l_1051 = &g_82;
            int *l_1052 = &l_1036;
            int *l_1053 = (void*)0;
            int *l_1054 = (void*)0;
            int *l_1055 = &l_1033;
            int *l_1056 = &g_612;
            int *l_1057 = &g_931;
            int *l_1058 = &l_1036;
            int *l_1059 = &g_69;
            int *l_1060 = &g_612;
            int *l_1061 = (void*)0;
            int *l_1062 = &g_82;
            int *l_1064 = &l_1036;
            int *l_1065 = &g_931;
            int *l_1066 = &g_931;
            int *l_1067 = &g_82;
            int l_1068 = 0x98721C41L;
            int l_1069 = 5L;
            int *l_1071 = &l_1036;
            int *l_1072 = &l_1036;
            int *l_1074 = &g_931;
            int *l_1075 = &l_1069;
            int *l_1076 = (void*)0;
            int *l_1077 = &g_931;
            int *l_1079 = &l_1036;
            int *l_1080 = &l_1036;
            int *l_1081 = &l_1036;
            int *l_1083 = &l_1036;
            int *l_1084 = &l_1070;
            int *l_1085 = &l_1063;
            int *l_1086 = &g_82;
            int *l_1087 = &g_69;
            int *l_1088 = &g_82;
            int *l_1089 = &g_931;
            int *l_1090 = (void*)0;
            int *l_1091 = &l_1070;
            int *l_1092 = &l_1068;
            int *l_1094 = &g_612;
            int *l_1096 = (void*)0;
            int *l_1097 = (void*)0;
            int *l_1098 = &g_612;
            int *l_1099 = &l_1070;
            int *l_1100 = &g_1082;
            int *l_1101 = &g_69;
            int *l_1102 = &l_1073;
            int *l_1103 = (void*)0;
            int *l_1104 = &l_1033;
            int *l_1105 = &g_69;
            int *l_1106 = &l_1070;
            int *l_1107 = (void*)0;
            int l_1109 = (-1L);
            int *l_1110 = &l_1036;
            int *l_1111 = (void*)0;
            int *l_1112 = &l_1069;
            int *l_1114 = &l_1070;
            int *l_1115 = (void*)0;
            int *l_1116 = (void*)0;
            int *l_1117 = &l_1069;
            int *l_1118 = &l_1078;
            int *l_1119 = &l_1036;
            int *l_1120 = &l_1108;
            int *l_1122 = &l_1113;
            int *l_1123 = (void*)0;
            g_217 = &g_82;

            ;
            ++g_1125;
            (*l_970) = &g_217;

            ;
            if (l_973)
                break;
        }
        (*g_217) |= (safe_sub_func_uint32_t_u_u(((((safe_mod_func_uint16_t_u_u((g_499 && (&g_216 != l_1132)), g_10)) && g_931) ^ (safe_mul_func_uint16_t_u_u(g_931, ((void*)0 == &l_1124)))) == g_276), l_1063));
    }

    ;
    return (*l_961);
}







static int func_11(unsigned short p_12, char p_13, unsigned p_14, unsigned p_15)
{
    char l_849 = 0x66L;
    int **l_854 = &g_217;
    unsigned l_855 = 0xD86EC774L;
    int l_860 = 0x3A13E1CFL;
    int l_866 = 0L;
    int l_899 = 0x5DE6973BL;
    int l_907 = (-3L);
    (*g_217) = (*g_217);
    if (l_855)
    {
        int *l_856 = &g_612;
        int l_857 = 6L;
        int *l_858 = &g_82;
        int *l_859 = &g_69;
        int *l_861 = (void*)0;
        int *l_862 = &l_857;
        int *l_863 = &l_857;
        int *l_864 = &g_69;
        int *l_865 = &g_612;
        int *l_867 = &l_857;
        int *l_868 = &l_866;
        int l_869 = (-1L);
        int *l_870 = (void*)0;
        int *l_871 = &g_82;
        int *l_872 = &l_869;
        int *l_873 = &g_612;
        int *l_874 = &l_869;
        int *l_875 = &l_857;
        int *l_876 = &l_860;
        int *l_877 = &l_866;
        (**l_854) = ((void*)0 == (*l_854));
        g_878--;
    }
    else
    {
        int *l_881 = (void*)0;
        int *l_882 = &l_860;
        int *l_883 = &g_612;
        int *l_884 = &g_612;
        int *l_885 = &g_612;
        int *l_886 = &g_82;
        int *l_887 = &l_860;
        int *l_888 = &g_82;
        int *l_889 = (void*)0;
        int *l_890 = &g_69;
        int *l_891 = &g_612;
        int *l_892 = &g_612;
        int *l_893 = &g_69;
        int *l_894 = &g_69;
        int *l_895 = &g_69;
        int *l_896 = &g_69;
        int *l_897 = &g_612;
        int *l_898 = &l_860;
        int *l_900 = &l_899;
        int *l_901 = &l_866;
        int *l_902 = &l_860;
        int *l_903 = &l_860;
        int *l_904 = &l_866;
        int *l_905 = &g_612;
        int *l_906 = &g_612;
        int *l_908 = &g_612;
        int *l_909 = &g_612;
        int *l_910 = &g_612;
        int *l_911 = &l_899;
        int l_912 = 0x48286403L;
        int *l_913 = (void*)0;
        int *l_914 = (void*)0;
        int *l_915 = &l_866;
        int *l_916 = &l_907;
        int *l_917 = &l_860;
        int *l_918 = &l_860;
        int *l_919 = &l_912;
        int *l_920 = &l_912;
        int *l_921 = &l_907;
        int *l_922 = &g_612;
        int *l_923 = (void*)0;
        int l_924 = (-10L);
        int *l_925 = &l_924;
        int l_926 = 0x0EB73C55L;
        int *l_927 = &l_907;
        int *l_928 = &l_866;
        int *l_929 = &l_866;
        int *l_930 = (void*)0;
        int l_932 = 0xBE8C4C81L;
        int l_933 = 0L;
        int *l_934 = (void*)0;
        int *l_935 = &g_82;
        int *l_936 = (void*)0;
        int *l_937 = &g_82;
        int *l_938 = &l_912;
        int *l_939 = &l_899;
        int *l_940 = &l_866;
        int *l_941 = &l_926;
        int *l_942 = &l_866;
        int *l_943 = &l_932;
        int *l_944 = &g_69;
        int *l_945 = (void*)0;
        int *l_946 = &g_69;
        int *l_947 = &l_932;
        int l_948 = 0xF51BEEBCL;
        int *l_949 = &l_866;
        int l_950 = 0xAE680DC4L;
        int *l_951 = &g_931;
        int *l_952 = &g_82;
        int *l_953 = &l_899;
        int *l_954 = &l_907;
        --g_955;
    }
    return (**l_854);
}







static unsigned func_18(int p_19, unsigned short p_20, unsigned char p_21)
{
    int l_38 = 0x92079655L;
    short l_48 = 2L;
    int *l_840 = &l_38;
    int *l_841 = &g_82;
    int *l_842 = &l_38;
    int *l_843 = (void*)0;
    int *l_844 = &g_69;
    unsigned l_845 = 0UL;
    int ***l_848 = &g_216;
    (*g_216) = func_31(p_19, (safe_div_func_uint32_t_u_u(l_38, (g_10 & (safe_mod_func_int8_t_s_s(((safe_add_func_int32_t_s_s((func_43(g_10, l_48, ((void*)0 == &p_19), l_38) && p_21), p_21)) == p_19), g_352))))), l_48, l_38);


    ++l_845;
    (*l_848) = &l_841;

    ;
    return (*l_844);


}







static int * func_31(int p_32, unsigned char p_33, int p_34, unsigned p_35)
{
    int *l_839 = &g_612;
    l_839 = &g_69;

    ;
    return &g_69;


}







static unsigned func_43(int p_44, char p_45, unsigned short p_46, int p_47)
{
    int l_408 = 0xB7CE8486L;
    char l_569 = 0x89L;
    int l_674 = 0x6BF60B68L;
    unsigned short l_714 = 0xB48DL;
    int **l_740 = &g_56;
    short l_833 = 0x4757L;
    if ((safe_rshift_func_uint8_t_u_s(func_51(g_56, g_10, (func_57(g_10, g_56, (func_62(g_10, p_47) > (safe_add_func_int16_t_s_s(p_47, p_45))), l_408) & l_408), l_408), l_569)))
    {
        unsigned char l_580 = 1UL;
        unsigned short l_594 = 65534UL;
        int l_686 = 0x1DA85AEEL;
        int l_688 = 0x331A3AA2L;
        int l_690 = (-1L);
        int l_699 = 0L;
        int l_731 = (-7L);
        int **l_746 = (void*)0;
        int *l_785 = &l_690;
        int *l_786 = &g_612;
        int *l_787 = &g_82;
        int *l_788 = (void*)0;
        int *l_789 = (void*)0;
        int *l_790 = &g_82;
        int *l_791 = (void*)0;
        int *l_792 = (void*)0;
        int *l_793 = (void*)0;
        int *l_794 = &l_690;
        int *l_795 = &g_82;
        int *l_796 = &g_69;
        int *l_797 = &l_688;
        int *l_798 = &l_686;
        int *l_799 = &g_82;
        int *l_800 = &g_612;
        int *l_801 = &g_69;
        int *l_802 = &g_612;
        int *l_803 = &l_674;
        int *l_804 = &l_690;
        int *l_805 = &g_69;
        int *l_806 = (void*)0;
        int *l_807 = (void*)0;
        int *l_808 = &g_82;
        int *l_809 = (void*)0;
        int *l_810 = &g_612;
        int *l_811 = &l_688;
        int *l_812 = &l_686;
        int *l_813 = (void*)0;
        int *l_814 = (void*)0;
        int *l_815 = &g_612;
        int *l_816 = (void*)0;
        int *l_817 = &l_688;
        int *l_818 = &l_688;
        int *l_819 = &l_674;
        int *l_820 = &l_690;
        int *l_821 = (void*)0;
        if (p_46)
        {
            int **l_572 = &g_56;
            int l_650 = 0x40B4C9AEL;
            int l_652 = 0x739196A5L;
            int l_659 = 0x962B1F8AL;
            unsigned short l_701 = 65527UL;
            short l_729 = 0x238CL;
            if ((safe_lshift_func_int16_t_s_u(0x6B7CL, p_46)))
            {
                int *l_573 = &g_82;
                int l_574 = 0xF23B5687L;
                int *l_575 = &g_69;
                int *l_576 = &g_69;
                int *l_577 = (void*)0;
                int *l_578 = (void*)0;
                int *l_579 = &l_574;
                (*l_573) = ((void*)0 == l_572);
                --l_580;
            }
            else
            {
                short l_587 = 0x242AL;
                int l_614 = (-8L);
                int l_661 = 0xCDC9DE39L;
lbl_613:
                for (l_580 = 0; (l_580 <= 9); l_580++)
                {
                    int *l_595 = (void*)0;
                    int *l_596 = (void*)0;
                    int *l_597 = &g_69;
                    (*l_597) |= (safe_mod_func_int32_t_s_s(((-7L) <= (l_587 & (safe_sub_func_uint32_t_u_u(((void*)0 != &p_44), (safe_add_func_uint32_t_u_u((((((~(((0L && 0x5CB2F493L) > (safe_mul_func_uint8_t_u_u((&g_217 == &g_217), p_45))) != g_290)) <= 0xC976F7B0L) || l_594) & p_46) != g_209), p_44)))))), 0xA8630E75L));
                }
                if (p_47)
                {
                    int *l_598 = &g_82;
                    (*l_598) &= p_44;
                    for (p_47 = 0; (p_47 == 17); ++p_47)
                    {
                        unsigned short l_607 = 65528UL;
                        int *l_610 = (void*)0;
                        int *l_611 = &g_612;
                        int *l_615 = &g_82;
                        int *l_616 = &g_69;
                        int *l_617 = (void*)0;
                        int *l_618 = &g_82;
                        int *l_619 = &g_82;
                        int *l_620 = &g_82;
                        int *l_621 = &g_82;
                        int *l_622 = &g_69;
                        int *l_623 = &g_82;
                        int *l_624 = &g_69;
                        int l_625 = 0x798DF2CFL;
                        int *l_626 = &g_612;
                        int *l_627 = &g_69;
                        int *l_628 = &g_69;
                        int *l_629 = &l_625;
                        int *l_630 = &g_82;
                        int *l_631 = &g_69;
                        int *l_632 = &g_612;
                        int *l_633 = &l_625;
                        int *l_634 = &g_612;
                        int *l_635 = &g_612;
                        int *l_636 = &g_612;
                        int *l_637 = &g_69;
                        int *l_638 = &g_69;
                        int *l_639 = &g_612;
                        int *l_640 = &g_82;
                        int *l_641 = &g_69;
                        int *l_642 = (void*)0;
                        int *l_643 = &g_69;
                        int *l_644 = &l_625;
                        int *l_645 = (void*)0;
                        int *l_646 = &g_82;
                        int *l_647 = &g_612;
                        int *l_648 = &l_625;
                        int *l_649 = &l_625;
                        int *l_651 = &g_612;
                        int *l_653 = &g_612;
                        int *l_654 = &l_625;
                        int *l_655 = &l_650;
                        int *l_656 = &l_650;
                        int *l_657 = &g_82;
                        int *l_658 = &g_612;
                        int *l_660 = &g_69;
                        int *l_662 = &l_625;
                        int *l_663 = &l_625;
                        int *l_664 = &l_661;
                        int *l_665 = &g_82;
                        int *l_666 = &l_625;
                        int l_667 = (-3L);
                        int *l_668 = (void*)0;
                        int *l_669 = &l_650;
                        int *l_670 = &l_625;
                        int *l_671 = (void*)0;
                        int *l_672 = &l_652;
                        int *l_673 = &g_82;
                        (*l_611) &= (safe_sub_func_uint8_t_u_u(((void*)0 != &g_217), ((safe_unary_minus_func_uint32_t_u((safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u(g_69)), (l_607 | (*l_598)))))) < (safe_rshift_func_int16_t_s_s(g_490, 6)))));
                        if (l_569)
                            goto lbl_613;
                        g_675--;
                        (*l_630) = (safe_rshift_func_uint8_t_u_u(g_612, (*l_638)));
                    }
                }
                else
                {
                    int *l_680 = &l_661;
                    int *l_681 = &l_650;
                    int *l_682 = &l_652;
                    int *l_683 = &l_674;
                    int *l_684 = &l_661;
                    int *l_685 = &l_652;
                    int *l_687 = (void*)0;
                    int *l_689 = &l_686;
                    int *l_691 = &l_686;
                    int *l_692 = &l_686;
                    int *l_693 = &g_69;
                    int *l_694 = (void*)0;
                    int *l_695 = &l_688;
                    int *l_696 = &l_659;
                    int *l_697 = &l_661;
                    int *l_698 = (void*)0;
                    int *l_700 = &g_612;
                    ++l_701;
                    (*g_216) = &g_612;

                    ;
                }


                if (l_661)
                {
                    int *l_713 = &l_661;
lbl_716:
                    if (((safe_mod_func_uint16_t_u_u((8L & (0x285AL != p_46)), ((p_46 & (safe_rshift_func_uint8_t_u_s(p_47, func_62(p_45, (l_674 | 253UL))))) && p_46))) >= g_558))
                    {
                        p_44 |= p_45;
                        if (l_594)
                            goto lbl_716;
                    }
                    else
                    {
                        int *l_715 = &g_612;
                        (*g_216) = &p_44;

                        ;
                        (*l_715) ^= (safe_mod_func_int32_t_s_s(((((g_558 | (safe_lshift_func_uint16_t_u_s(g_101, 2))) ^ p_46) == (g_323 == (func_51((*g_216), p_46, ((safe_unary_minus_func_uint32_t_u(func_72(l_688, l_713, (0x37CFECE7L < l_688), p_46))) >= 0x80E0L), l_690) ^ l_714))) >= 4294967295UL), p_45));

                        ;
                        (*l_713) ^= p_44;
                    }


                    (*l_713) |= p_46;
                    (*g_216) = &l_690;

                    ;
                    return l_661;


                }
                else
                {
                    int l_730 = (-6L);
                    int *l_732 = &l_650;
                    (*l_732) = ((p_46 < (g_612 & p_45)) > p_44);
                    p_44 = l_614;
                    for (p_45 = 14; (p_45 < 28); p_45 = safe_add_func_uint8_t_u_u(p_45, 3))
                    {
                        unsigned l_739 = 0xB3F48BA5L;
                        (*l_732) = (safe_lshift_func_int16_t_s_s(((((safe_lshift_func_int8_t_s_s(g_352, 3)) || func_72((p_44 | p_44), &l_674, l_739, g_403)) < (l_740 == l_572)) || (*l_732)), (*l_732)));
                    }
                }
            }


            l_688 = (p_46 != 0x48ABL);
            (*l_572) = &p_44;

            ;
            for (l_408 = 0; (l_408 >= (-2)); l_408--)
            {
                int *l_743 = (void*)0;
                int l_747 = 0xFB23BA3EL;
                (*g_56) ^= (l_743 == &l_688);
                for (l_690 = 15; (l_690 != 20); ++l_690)
                {
                    int *l_748 = &g_612;
                    int *l_749 = &l_652;
                    int *l_750 = &l_650;
                    int *l_751 = &l_652;
                    int *l_752 = &l_747;
                    int *l_753 = &l_650;
                    int *l_754 = &l_652;
                    int *l_755 = &l_686;
                    int *l_756 = &l_659;
                    int *l_757 = &l_659;
                    int *l_758 = &l_659;
                    int *l_759 = &g_612;
                    int *l_760 = &l_652;
                    int *l_761 = &l_650;
                    int *l_762 = (void*)0;
                    int *l_763 = &l_688;
                    int *l_764 = &g_82;
                    int *l_765 = &l_652;
                    int *l_766 = &g_612;
                    int *l_767 = &l_652;
                    int *l_768 = (void*)0;
                    int *l_769 = &l_650;
                    int *l_770 = &g_612;
                    int *l_771 = &g_69;
                    int *l_772 = &l_686;
                    int *l_773 = &g_82;
                    int *l_774 = &g_82;
                    int *l_775 = &g_82;
                    int *l_776 = &g_69;
                    int *l_777 = &l_686;
                    int *l_778 = &l_686;
                    int *l_779 = &g_612;
                    l_740 = l_746;

                    ;
                    ++g_780;
                }
            }

            ;
        }
        else
        {
            unsigned short l_783 = 0x03E0L;
            return l_783;
        }

        ;

        ;
        --g_822;
        return p_45;


    }
    else
    {
        int l_837 = 0xB4650914L;
        int *l_838 = &l_674;
        for (p_47 = 0; (p_47 == 27); p_47 = safe_add_func_uint8_t_u_u(p_47, 4))
        {
            unsigned char l_836 = 0x2CL;
            (*l_838) = func_72((safe_mod_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_s(((*l_740) == &g_82), (((safe_lshift_func_int16_t_s_u(l_833, 14)) == (safe_sub_func_uint16_t_u_u(func_57(g_403, &p_44, ((p_47 <= l_836) < func_51(&g_612, (l_836 != 0UL), l_837, p_46)), g_290), 0x7830L))) != 0xDF1AB05DL))) >= g_558) != 2L), g_352)), l_838, p_45, p_46);


            if (p_46)
                break;
            return l_836;
        }


        (*g_216) = (*l_740);

        ;
    }

    ;
    return g_675;
}







static unsigned char func_51(int * p_52, unsigned p_53, char p_54, unsigned char p_55)
{
    int **l_523 = &g_217;
    int l_525 = 0xC2DCA600L;
    int l_532 = 0x99940735L;
    int l_535 = 0L;
    int l_541 = 0x6447648BL;
    for (g_239 = 0; (g_239 == (-14)); g_239 = safe_sub_func_uint16_t_u_u(g_239, 5))
    {
        int l_522 = 0x3F2718EBL;
        int *l_526 = &l_522;
        int *l_527 = (void*)0;
        int *l_528 = &g_82;
        int *l_529 = &g_69;
        int *l_530 = &g_82;
        int *l_531 = &g_69;
        int *l_533 = &l_532;
        int *l_534 = &l_532;
        int *l_536 = &l_535;
        int l_537 = (-1L);
        int *l_538 = &l_537;
        int *l_539 = &l_522;
        int *l_540 = &l_532;
        int *l_542 = &l_522;
        int *l_543 = &g_82;
        int *l_544 = (void*)0;
        int *l_545 = &l_522;
        int *l_546 = (void*)0;
        int *l_547 = &l_535;
        int *l_548 = (void*)0;
        int *l_549 = (void*)0;
        int *l_550 = &g_82;
        int *l_551 = &g_69;
        int *l_552 = &l_535;
        int *l_553 = (void*)0;
        int l_554 = 0x1C7E4922L;
        int *l_555 = &l_554;
        int *l_556 = (void*)0;
        int *l_557 = &l_554;
        int *l_559 = (void*)0;
        int *l_560 = &g_82;
        (*g_216) = p_52;


        for (g_209 = 0; (g_209 == 3); g_209++)
        {
            unsigned char l_524 = 0xDFL;
            l_524 &= (safe_mul_func_int16_t_s_s(0x55BCL, (safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((l_522 || (&g_56 == l_523)), ((*g_216) == (*g_216)))), p_55))));
            l_525 = ((-1L) < l_522);
        }
        (*l_526) |= 0x72F4CC3AL;
        g_561--;
    }


    for (g_490 = 0; (g_490 < 6); g_490 = safe_add_func_int8_t_s_s(g_490, 1))
    {
        int *l_568 = &g_69;
        (*g_216) = &g_82;

        ;
        if ((**l_523))
            continue;
        (*l_568) |= (((g_312 <= p_54) != (*g_217)) & ((((**l_523) <= g_101) & p_55) || (safe_rshift_func_int16_t_s_s(g_268, 9))));
        (*l_568) &= (0xE8FAL | ((&l_568 == &p_52) == p_53));
    }
    return p_54;
}







static int func_57(unsigned p_58, int * p_59, unsigned char p_60, int p_61)
{
    int l_413 = 0L;
    int *l_415 = (void*)0;
    int l_423 = 0xAE4FF383L;
    int l_428 = 1L;
    int l_446 = 9L;
    int l_448 = (-10L);
    int l_456 = 0x8EB31C70L;
    int l_460 = 0L;
    unsigned l_463 = 0xCB16B7EBL;
    int *l_466 = &g_82;
    int *l_467 = &l_423;
    int *l_468 = &l_448;
    int *l_469 = (void*)0;
    int *l_470 = &l_456;
    int *l_471 = (void*)0;
    int *l_472 = (void*)0;
    int *l_473 = &l_413;
    int *l_474 = &l_423;
    int *l_475 = &l_413;
    int *l_476 = &l_456;
    int *l_477 = (void*)0;
    int *l_478 = &l_446;
    int *l_479 = &l_446;
    int *l_480 = &g_82;
    int *l_481 = &g_82;
    int *l_482 = &l_428;
    int *l_483 = (void*)0;
    int *l_484 = (void*)0;
    int *l_485 = &l_456;
    int *l_486 = &l_413;
    int *l_487 = &g_82;
    int *l_488 = &g_69;
    int *l_489 = &l_428;
    int *l_491 = &l_428;
    int *l_492 = (void*)0;
    int *l_493 = &l_423;
    int *l_494 = &l_413;
    int *l_495 = (void*)0;
    int *l_496 = (void*)0;
    int *l_497 = &l_456;
    int *l_498 = &l_460;
    if (((safe_mul_func_int16_t_s_s(((safe_div_func_uint8_t_u_u(func_62(l_413, p_58), p_61)) || l_413), 0xCEDBL)) ^ l_413))
    {
        int *l_414 = &g_82;
        l_415 = l_414;

        ;
        return p_60;
    }
    else
    {
        int *l_416 = (void*)0;
        int *l_417 = &l_413;
        int *l_418 = &l_413;
        int l_419 = 1L;
        int *l_420 = (void*)0;
        int *l_421 = &g_69;
        int *l_422 = &l_419;
        int *l_424 = (void*)0;
        int *l_425 = &l_423;
        int *l_426 = (void*)0;
        int *l_427 = &g_69;
        int *l_429 = &l_413;
        int *l_430 = &l_413;
        int *l_431 = &l_419;
        int l_432 = 8L;
        int *l_433 = &l_432;
        int *l_434 = &l_419;
        int *l_435 = &l_428;
        int *l_436 = (void*)0;
        int *l_437 = (void*)0;
        int *l_438 = &l_423;
        int *l_439 = &l_413;
        int *l_440 = &l_428;
        int *l_441 = &g_82;
        int *l_442 = (void*)0;
        int *l_443 = &l_428;
        int *l_444 = &l_419;
        int *l_445 = &l_432;
        int *l_447 = &l_446;
        int *l_449 = &l_446;
        int *l_450 = &l_419;
        int *l_451 = &l_428;
        int *l_452 = &l_446;
        int *l_453 = &g_69;
        int *l_454 = &l_448;
        int *l_455 = &l_423;
        int *l_457 = &l_413;
        int *l_458 = &l_428;
        int l_459 = 1L;
        int *l_461 = &l_446;
        int *l_462 = &l_419;
        --l_463;
        if (g_69)
            goto lbl_502;
    }
lbl_502:
    --g_499;
    for (g_323 = 0; (g_323 < 10); ++g_323)
    {
        short l_511 = 0xDAB1L;
        (*l_489) |= p_61;
        (*l_491) = (*l_482);
        for (l_413 = (-23); (l_413 <= (-1)); l_413 = safe_add_func_uint16_t_u_u(l_413, 3))
        {
            int l_507 = 0x6F946EF1L;
            (*l_481) = l_507;
            if (g_508)
                continue;
            (*l_480) = (safe_mod_func_int8_t_s_s(p_61, l_511));
        }
    }
    return g_173;
}







static char func_62(unsigned p_63, unsigned short p_64)
{
    unsigned short l_67 = 65532UL;
    int *l_68 = &g_69;
    int *l_233 = &g_82;
    int l_249 = 0xE398B15EL;
    int l_288 = 7L;
    int l_322 = 0x9B8EC4C5L;
    int l_402 = 0x806708ECL;
    (*l_233) |= ((l_67 | (l_68 != &g_69)) | (p_63 < (safe_add_func_int32_t_s_s(func_72(g_10, l_68, g_69, (*l_68)), 0x0F068E20L))));
    for (g_209 = 20; (g_209 < 52); g_209 = safe_add_func_int16_t_s_s(g_209, 4))
    {
        int *l_238 = &g_69;
        int l_240 = 1L;
        int l_263 = 3L;
        int l_297 = 6L;
        int l_337 = 0x247686F9L;
        int l_344 = (-1L);
        int l_345 = 0x0984C2C5L;
        int l_382 = (-4L);
        unsigned short l_395 = 0x72A8L;
        if (p_64)
            break;
        g_239 |= (g_101 && ((&l_233 != &l_233) | func_72((*l_68), l_68, (((&g_56 != &l_68) >= (safe_sub_func_int32_t_s_s((0x21L ^ ((void*)0 == l_238)), 0xE4C48B7BL))) < (*l_238)), g_69)));
        (*g_216) = l_238;

        ;
        if ((l_233 != l_238))
        {
            int *l_241 = &l_240;
            int *l_242 = &g_69;
            int *l_243 = &g_82;
            int *l_244 = &l_240;
            int *l_245 = &g_69;
            int *l_246 = (void*)0;
            int *l_247 = &l_240;
            int *l_248 = &l_240;
            int *l_250 = &g_82;
            int *l_251 = &l_240;
            int *l_252 = (void*)0;
            int *l_253 = (void*)0;
            int *l_254 = &l_249;
            int *l_255 = &l_249;
            int *l_256 = &l_240;
            int *l_257 = &l_249;
            int *l_258 = &g_82;
            int l_259 = (-1L);
            int *l_260 = &l_240;
            int *l_261 = &l_259;
            int *l_262 = &l_259;
            int *l_264 = &g_82;
            int *l_265 = &l_249;
            int *l_266 = &l_249;
            int *l_267 = &g_69;
            g_268--;
        }
        else
        {
            int *l_271 = &g_82;
            int *l_272 = &g_82;
            int *l_273 = &l_249;
            int *l_274 = &l_249;
            int *l_275 = &g_69;
            int *l_277 = (void*)0;
            int *l_278 = &l_249;
            int *l_279 = &l_240;
            int *l_280 = &g_69;
            int *l_281 = (void*)0;
            int *l_282 = &l_240;
            int *l_283 = &l_249;
            int *l_284 = &g_82;
            int *l_285 = (void*)0;
            int *l_286 = &l_240;
            int *l_287 = (void*)0;
            int *l_289 = &l_249;
            int *l_291 = &l_288;
            int *l_292 = &l_288;
            int *l_293 = &l_240;
            int *l_294 = (void*)0;
            int *l_295 = &l_288;
            int *l_296 = &l_288;
            int *l_298 = &l_297;
            int *l_299 = &l_297;
            int *l_300 = &l_297;
            int *l_301 = &l_240;
            int *l_302 = &g_69;
            int *l_303 = &l_249;
            int *l_304 = &l_249;
            int l_305 = 0x89FC6894L;
            int l_306 = (-4L);
            int *l_307 = &l_305;
            int *l_308 = &l_305;
            int *l_309 = (void*)0;
            int *l_310 = &l_249;
            int *l_311 = &g_82;
            int *l_313 = &l_249;
            int *l_314 = &l_288;
            int *l_315 = &l_306;
            int *l_316 = (void*)0;
            int *l_317 = (void*)0;
            int *l_318 = (void*)0;
            int l_319 = 0x554AE0E0L;
            int *l_320 = &l_306;
            int *l_321 = &l_240;
            int **l_333 = &l_320;
            int *l_338 = (void*)0;
            ++g_323;
            for (l_297 = 10; (l_297 == (-15)); l_297--)
            {
                int l_332 = 0xF1609E67L;
                int **l_334 = (void*)0;
                int l_379 = 0x66398519L;
                int l_381 = 0xE7CADE12L;
                int l_393 = 0xCF05B782L;
                if ((safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s(func_72(g_239, &l_288, g_276, ((l_332 >= (l_333 == l_334)) | ((1L | p_63) >= func_72(p_64, (*l_333), p_63, p_63)))), 3UL)), 0xF644L)))
                {
                    return (*l_68);
                }
                else
                {
                    int *l_339 = &l_319;
                    unsigned short l_340 = 0x6759L;
                    int *l_346 = &l_344;
                    int *l_347 = &l_344;
                    int *l_348 = &l_344;
                    int *l_349 = (void*)0;
                    int *l_350 = &l_332;
                    int *l_351 = &l_319;
                    int *l_353 = &l_240;
                    int *l_354 = (void*)0;
                    int *l_355 = &l_305;
                    int *l_356 = &l_249;
                    int *l_357 = &l_332;
                    int *l_358 = &l_344;
                    int *l_359 = &l_305;
                    int *l_360 = &l_288;
                    int *l_361 = &l_288;
                    int *l_362 = (void*)0;
                    int *l_363 = (void*)0;
                    int *l_364 = &g_69;
                    int *l_365 = &g_82;
                    int *l_366 = &l_306;
                    int *l_367 = &g_82;
                    int *l_368 = &l_288;
                    int *l_369 = &l_249;
                    int *l_370 = &l_319;
                    int *l_371 = &l_344;
                    int *l_372 = &l_288;
                    int *l_373 = &l_249;
                    int *l_374 = &l_344;
                    int *l_375 = &l_263;
                    int *l_376 = &l_305;
                    int *l_377 = &g_69;
                    int *l_378 = &l_306;
                    int *l_380 = &l_240;
                    int *l_383 = (void*)0;
                    int *l_384 = &l_249;
                    int *l_385 = &l_379;
                    int *l_387 = &l_381;
                    int *l_388 = (void*)0;
                    int *l_389 = &l_263;
                    int *l_390 = &g_82;
                    int *l_391 = &l_306;
                    int *l_392 = &l_382;
                    int *l_394 = &g_82;
                    (*g_216) = &l_332;

                    ;
                    if ((safe_add_func_int8_t_s_s(l_337, g_268)))
                    {
                        (*l_238) = ((*g_216) == l_338);
                    }
                    else
                    {
                        unsigned short l_341 = 65530UL;
                        (*l_296) &= (((void*)0 != l_339) || l_340);
                        (*l_310) ^= (**g_216);
                        --l_341;
                    }
                    ++l_395;
                    (*l_384) = (*l_68);
                }

                ;
                for (g_69 = (-21); (g_69 > 26); g_69 = safe_add_func_int16_t_s_s(g_69, 5))
                {
                    (*l_333) = (*l_333);
                    (*g_216) = &l_288;

                    ;
                    if ((&g_217 == &g_217))
                    {
                        (*l_320) |= p_64;
                        return (*l_233);


                    }
                    else
                    {
                        (*l_315) |= (safe_mul_func_uint8_t_u_u((((*l_233) & (*g_217)) | ((*l_233) > (p_63 != g_312))), 0xC6L));
                        (*l_284) = 0x69CE97E0L;
                    }
                }

                ;
                return l_402;


            }
            if ((*l_238))
                break;
            ++g_403;
        }
    }
    return (*l_233);
}







static int func_72(unsigned char p_73, int * p_74, unsigned p_75, short p_76)
{
    unsigned l_90 = 0xF594A39BL;
    int *l_114 = &g_69;
    int l_166 = 0x836713F9L;
    short l_172 = (-4L);
    unsigned char l_179 = 1UL;
    int l_189 = 0xF83720D7L;
    unsigned l_198 = 0UL;
    (*p_74) = (*p_74);
    for (p_75 = 0; (p_75 > 18); ++p_75)
    {
        char l_112 = 1L;
        int l_113 = (-3L);
        char l_122 = 0x3EL;
        int l_154 = (-1L);
        int *l_182 = &g_69;
        int *l_183 = &g_69;
        int *l_184 = &g_69;
        short l_185 = 0x6698L;
        int *l_186 = &g_82;
        int *l_187 = (void*)0;
        int *l_188 = &l_113;
        int *l_190 = &l_154;
        int *l_191 = &g_82;
        int *l_192 = &l_166;
        int *l_193 = &g_69;
        int *l_194 = &g_69;
        int *l_195 = &g_82;
        int *l_196 = &g_82;
        int *l_197 = (void*)0;
    }
    return (*p_74);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    transparent_crc(g_276, "g_276", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_386, "g_386", print_hash_value);
    transparent_crc(g_403, "g_403", print_hash_value);
    transparent_crc(g_490, "g_490", print_hash_value);
    transparent_crc(g_499, "g_499", print_hash_value);
    transparent_crc(g_508, "g_508", print_hash_value);
    transparent_crc(g_558, "g_558", print_hash_value);
    transparent_crc(g_561, "g_561", print_hash_value);
    transparent_crc(g_612, "g_612", print_hash_value);
    transparent_crc(g_675, "g_675", print_hash_value);
    transparent_crc(g_780, "g_780", print_hash_value);
    transparent_crc(g_784, "g_784", print_hash_value);
    transparent_crc(g_822, "g_822", print_hash_value);
    transparent_crc(g_878, "g_878", print_hash_value);
    transparent_crc(g_931, "g_931", print_hash_value);
    transparent_crc(g_955, "g_955", print_hash_value);
    transparent_crc(g_1015, "g_1015", print_hash_value);
    transparent_crc(g_1082, "g_1082", print_hash_value);
    transparent_crc(g_1095, "g_1095", print_hash_value);
    transparent_crc(g_1125, "g_1125", print_hash_value);
    transparent_crc(g_1141, "g_1141", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
