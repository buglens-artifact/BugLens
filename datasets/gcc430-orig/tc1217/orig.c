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



static unsigned short g_22 = 0xB054L;
static unsigned g_32 = 4294967295UL;
static char g_72 = 0L;
static int g_89 = 0x7B1D0057L;
static unsigned g_93 = 4294967295UL;
static short g_109 = 0x5AE5L;
static int g_110 = 0L;
static unsigned short g_116 = 0xE2E6L;
static unsigned g_146 = 0xC2D95366L;
static int g_153 = 0x581468E8L;
static char g_179 = 1L;
static int g_240 = 0x1585BBCDL;
static unsigned g_299 = 0UL;
static short g_306 = 5L;
static int g_309 = 0x7D7B11FAL;
static short g_321 = 5L;
static unsigned g_371 = 0x9359FE1FL;
static unsigned short g_452 = 0x096EL;
static int g_535 = 1L;
static unsigned short g_653 = 0UL;
static short g_852 = 1L;
static short g_947 = 7L;
static unsigned g_978 = 0UL;
static int g_983 = (-1L);
static int g_1031 = 0x0F24B66CL;
static unsigned g_1049 = 0x3AD95802L;
static unsigned char g_1076 = 0x8CL;



static short func_1(void);
static unsigned short func_4(unsigned p_5, short p_6, char p_7);
static unsigned func_10(unsigned p_11, unsigned short p_12, unsigned short p_13, short p_14, unsigned p_15);
static unsigned func_16(unsigned p_17, int p_18, int p_19, int p_20, unsigned char p_21);
static short func_25(unsigned short p_26, int p_27, short p_28, unsigned p_29, short p_30);
static int func_33(unsigned short p_34, char p_35);
static short func_44(int p_45, unsigned char p_46, int p_47, int p_48);
static short func_55(unsigned char p_56, short p_57, char p_58, char p_59);
static unsigned func_62(unsigned short p_63, unsigned p_64, unsigned char p_65, char p_66);
static int func_79(int p_80, int p_81, unsigned char p_82);
static short func_1(void)
{
    unsigned short l_31 = 0x6745L;
    short l_1059 = 1L;
    int l_1103 = 0x0DB4214AL;
    l_1103 = ((safe_rshift_func_uint16_t_u_u(func_4((!(safe_add_func_uint32_t_u_u((0x2FDE2BBEL >= (0x4888L >= 7L)), func_10(func_16(g_22, (safe_lshift_func_int16_t_s_s(((9L && func_25(g_22, g_22, (g_32 = l_31), l_31, g_22)) || l_31), 0)), g_22, g_22, l_31), l_1059, g_983, g_1031, g_983)))), l_31, l_31), g_978)) == l_1059);
    return g_109;
}







static unsigned short func_4(unsigned p_5, short p_6, char p_7)
{
    unsigned l_1081 = 0xB2085C78L;
    int l_1084 = 0xAA230833L;
    int l_1087 = (-10L);
    short l_1088 = 0x73D3L;
    int l_1089 = 9L;
    unsigned char l_1102 = 0x3AL;
    l_1089 = (l_1081 < ((l_1084 = 1UL) <= ((((safe_rshift_func_uint8_t_u_u((g_452 < l_1081), (func_79((l_1087 = p_6), l_1088, (p_7 > l_1081)) <= 4294967295UL))) <= l_1088) < g_32) >= (-1L))));
    l_1084 = func_25(l_1084, p_7, g_653, g_299, (((((safe_div_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(l_1089, 5)), (l_1087 = (func_62(p_7, p_6, (safe_add_func_uint16_t_u_u(g_299, (safe_div_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u((0x7C6FL != 0L), g_93)) ^ l_1102) <= l_1087), p_5)) && 0xA45FL), 0x70L)))), l_1089) ^ g_1031)))) > p_7) && l_1084) <= 4294967291UL) & l_1089));
    l_1084 = g_240;
    return p_7;
}







static unsigned func_10(unsigned p_11, unsigned short p_12, unsigned short p_13, short p_14, unsigned p_15)
{
    unsigned l_1060 = 0xA24E2D2AL;
    int l_1063 = 2L;
    int l_1064 = (-1L);
    unsigned short l_1077 = 0UL;
    int l_1078 = 0x82507E10L;
    int l_1079 = 0L;
    int l_1080 = 6L;
    l_1064 = ((p_14 = func_16(g_852, l_1060, l_1060, p_14, (g_852 & (l_1063 = (safe_add_func_int16_t_s_s(g_1031, g_978)))))) < p_11);
    l_1063 = (safe_mod_func_uint16_t_u_u(l_1063, func_33(((l_1080 = ((l_1079 = (func_16(p_13, func_62((safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((((safe_unary_minus_func_int16_t_s(g_110)) && ((~(g_535 = func_62(((((safe_sub_func_uint16_t_u_u((l_1060 ^ (l_1064 = 3UL)), (((-8L) && (p_12 ^ p_14)) || (safe_add_func_uint8_t_u_u(p_15, 0UL))))) != 0UL) < g_371) >= l_1060), l_1060, g_1076, p_12))) & 7UL)) <= 0xBFL), 0L)), l_1077)), l_1077, l_1063, p_12), p_14, p_14, l_1077) > l_1078)) != (-1L))) | g_978), l_1060)));
    return g_1031;
}







static unsigned func_16(unsigned p_17, int p_18, int p_19, int p_20, unsigned char p_21)
{
    char l_797 = 0xF1L;
    int l_799 = (-1L);
    int l_807 = 0x65A3F9DEL;
    int l_819 = 0x3B091FC0L;
    int l_845 = 0x252F011FL;
    char l_921 = 0x76L;
    char l_1009 = 2L;
    unsigned l_1013 = 0UL;
    int l_1025 = 0L;
    if ((0x029FE281L && (l_799 = (g_309 = ((l_797 >= (0x057DL <= l_797)) != (safe_unary_minus_func_int8_t_s(g_371)))))))
    {
        int l_806 = 0xA395D9EEL;
        p_20 = ((safe_lshift_func_uint16_t_u_s(((((((safe_rshift_func_int8_t_s_u(0xCCL, 0)) ^ (safe_lshift_func_uint16_t_u_s(g_109, func_62(func_33((l_806 > 0L), p_17), l_799, p_17, g_116)))) & g_240) <= p_19) && 0x97296046L) ^ l_797), l_806)) == 0xE43AL);
        l_807 = 0x459BCF93L;
    }
    else
    {
        unsigned l_814 = 4294967293UL;
        int l_882 = 0L;
        int l_1004 = (-9L);
        int l_1050 = (-1L);
lbl_868:
        g_110 = (p_18 = 0x961A59D0L);
        if ((safe_lshift_func_int16_t_s_u((((safe_div_func_uint8_t_u_u((((safe_add_func_int32_t_s_s(l_814, (safe_add_func_uint16_t_u_u((((l_807 = (l_814 | (safe_add_func_int8_t_s_s((g_72 = g_535), (g_116 && 0x34L))))) >= 0x1BL) < (func_33((l_819 = g_22), p_18) && 1L)), l_797)))) && 0xF5AA1200L) == 4UL), p_17)) & 0x675BL) && p_19), 15)))
        {
            short l_838 = 0x7A5EL;
            short l_844 = 1L;
            int l_859 = 0L;
            int l_860 = 0x31B304FFL;
            int l_865 = 0L;
            if ((0x073861C2L != (p_20 = (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((0UL || (g_371 >= (safe_add_func_int32_t_s_s((p_18 = (safe_lshift_func_int16_t_s_u(((l_838 = (func_79(p_20, l_807, ((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u(g_153, 4)) ^ (1L >= (((g_306 = (((safe_rshift_func_int8_t_s_s(0x1CL, 2)) && ((safe_div_func_uint32_t_u_u(0xB160626DL, 0xDACCCEF4L)) <= 0x908B0993L)) == 0L)) != 65532UL) || p_20))), 3)), g_22)) & g_109)) ^ g_321)) != 0x90E3L), g_72))), 4294967295UL)))), 6)), g_299)))))
            {
                return p_20;
            }
            else
            {
                for (g_116 = 12; (g_116 <= 22); g_116++)
                {
                    if (g_110)
                        break;
                }
            }
            p_18 = (safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint8_t_u((l_844 && (-5L)))), p_21));
            if ((l_845 > p_17))
            {
                int l_846 = 8L;
                l_846 = p_19;
            }
            else
            {
                unsigned char l_847 = 1UL;
                int l_880 = 0L;
                if (func_62(g_89, l_847, p_20, (l_814 || (safe_sub_func_int8_t_s_s(func_33(g_116, l_814), (p_17 > (g_852 = (((safe_mod_func_uint32_t_u_u(0x13EDB6E5L, p_19)) | 1UL) >= 0x0400L))))))))
                {
                    unsigned l_864 = 0x3A25D23FL;
                    int l_885 = 0x45DE3423L;
                    l_865 = (l_864 = (safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((((((l_860 = (l_859 = p_18)) >= l_814) > ((0x5AL > ((safe_rshift_func_uint16_t_u_u(func_62((safe_unary_minus_func_uint32_t_u(4294967292UL)), l_799, g_306, g_146), (g_452 = ((func_33(g_146, l_819) | 1UL) ^ p_19)))) == 0x11L)) < 0x6BL)) < l_847) && 0x2ECF274FL), g_110)), g_22)));
                    for (p_20 = (-18); (p_20 == 13); p_20++)
                    {
                        char l_879 = 0xC8L;
                        int l_881 = 0xE788E37FL;
                        if (g_93)
                            goto lbl_868;
                        l_882 = (l_860 = (safe_div_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(g_452, func_33(p_20, (l_881 = (l_880 = ((safe_rshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u((((safe_add_func_int8_t_s_s(p_20, l_879)) | (g_110 || func_79(g_371, p_17, g_72))) & p_18), 0xA4L)), 9)) >= 0x3686C4B6L)))))), 6L)));
                    }
                    for (l_797 = 0; (l_797 <= (-6)); l_797 = safe_sub_func_int8_t_s_s(l_797, 8))
                    {
                        p_18 = (l_844 != (-8L));
                        p_18 = l_845;
                        l_885 = p_21;
                    }
                    return l_864;
                }
                else
                {
                    return g_240;
                }
            }
        }
        else
        {
            unsigned l_888 = 4294967295UL;
            int l_896 = (-1L);
            for (g_116 = 0; (g_116 <= 55); ++g_116)
            {
                unsigned short l_895 = 0UL;
                int l_917 = 8L;
                int l_937 = (-1L);
                if (func_33(l_888, g_452))
                {
                    char l_901 = 0xBEL;
                    int l_922 = 4L;
                    for (l_799 = (-12); (l_799 != 21); l_799++)
                    {
                        short l_894 = 0x84D1L;
                        short l_906 = 0xE9B5L;
                        int l_907 = 0xB3861021L;
                        l_896 = (safe_unary_minus_func_int32_t_s((safe_sub_func_uint16_t_u_u(0x3DD5L, (l_895 = l_894)))));
                        l_907 = (safe_lshift_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u(l_901, (safe_sub_func_uint32_t_u_u((!((((g_240 | (+p_17)) || (((func_62((g_22 = 65535UL), g_32, (p_21 = ((safe_rshift_func_int16_t_s_u(p_19, (g_116 ^ l_901))) || g_452)), g_371) <= 0x8F49L) & l_906) > l_906)) || (-7L)) ^ 0xA1C35CDAL)), l_901)))) | l_845), 12));
                        if (g_116)
                            break;
                    }
                    p_18 = l_807;
                    g_535 = g_179;
                    if (p_20)
                    {
                        int l_912 = 0x3E789405L;
                        int l_920 = 0L;
                        l_917 = func_62((g_653 = g_309), func_62(g_109, p_17, ((safe_sub_func_int16_t_s_s(g_240, 65535UL)) == (((safe_rshift_func_int8_t_s_s(l_912, 4)) < g_22) ^ ((((safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((g_179 = g_72) > (l_888 & 0xFDL)), g_240)), g_72)) | p_18) == g_146) || p_19))), l_901), p_18, g_153);
                        if (l_901)
                            break;
                        l_921 = ((!(g_535 && ((0x297AL || ((l_920 = func_33(g_109, ((p_20 = func_33((safe_div_func_uint32_t_u_u((func_62(g_22, p_18, g_321, g_299) && (p_20 ^ p_17)), g_240)), g_852)) < 0x3402DD96L))) < 0x574ED07EL)) & 0xCD14F299L))) < l_819);
                    }
                    else
                    {
                        g_309 = (l_922 = g_306);
                    }
                }
                else
                {
                    g_309 = (~g_240);
                    l_807 = (safe_add_func_uint32_t_u_u((+0x2964EC4EL), (0x0C038C81L && (safe_add_func_uint8_t_u_u(0UL, (safe_sub_func_int32_t_s_s((!(safe_mod_func_uint16_t_u_u((l_917 > (l_937 = ((safe_lshift_func_int8_t_s_s(l_917, 5)) <= (safe_div_func_uint16_t_u_u((0UL || 0xAF4DL), g_22))))), p_20))), p_18)))))));
                }
                if (l_888)
                    break;
            }
            if (l_814)
            {
                unsigned short l_940 = 0x9A5FL;
                p_18 = func_44((safe_add_func_uint32_t_u_u(l_882, l_845)), (g_947 = ((l_819 = l_940) & (l_896 <= (safe_div_func_uint32_t_u_u(((((safe_rshift_func_int8_t_s_s(g_452, (safe_sub_func_int8_t_s_s(l_797, (p_21 >= (p_20 | g_89)))))) ^ l_797) || g_116) <= p_20), 1UL))))), g_153, g_146);
            }
            else
            {
                char l_956 = 0L;
                int l_957 = 0x9CC4F3BAL;
                p_18 = (g_306 && (l_896 & (func_44((((g_179 | (g_309 > (l_819 = func_62((g_22 = (l_807 = (safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((~g_653) == ((((safe_add_func_int16_t_s_s((((safe_add_func_int8_t_s_s(func_62((g_116 = func_62(l_807, p_20, ((-4L) | ((-1L) ^ l_956)), g_93)), l_956, g_22, g_452), l_956)) || g_371) < 1UL), g_179)) <= g_22) ^ 0UL) || 0x1086L)), 0UL)), 0x2EADL)))), g_93, g_309, p_17)))) > p_19) != g_32), g_146, g_653, l_845) | 0x48066EEEL)));
                l_957 = g_309;
                g_309 = (p_18 = g_947);
                for (p_18 = 17; (p_18 != (-8)); p_18 = safe_sub_func_uint16_t_u_u(p_18, 7))
                {
                    p_20 = p_20;
                    g_309 = 0x9FD7A8BEL;
                    p_20 = (safe_lshift_func_int8_t_s_u(l_799, g_452));
                }
            }
            l_896 = g_321;
        }
        if ((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(p_20, 7)), 0x16D26AC5L)))
        {
            int l_977 = 0x353645D7L;
            unsigned short l_1047 = 2UL;
            if ((p_18 = (0x98307DFDL < l_882)))
            {
                unsigned short l_966 = 65531UL;
                int l_1011 = 0L;
                unsigned l_1022 = 0UL;
                g_110 = l_819;
                p_18 = (!(l_819 = (l_966 || 0xC3L)));
                if ((g_535 && (1UL || (((1L | (l_882 ^ ((safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(func_25((safe_lshift_func_int16_t_s_s(p_17, (safe_lshift_func_uint16_t_u_u((g_452 = 0UL), 8)))), ((p_20 = p_19) != (+((l_921 == (safe_div_func_uint8_t_u_u(l_977, p_17))) < 0x3B40E2EEL))), l_882, l_977, l_882), g_32)), l_977)) & g_852))) < g_22) & g_978))))
                {
                    unsigned short l_1010 = 0xD18BL;
                    unsigned l_1012 = 0UL;
                    p_18 = 0x7FE9B007L;
                    if ((4294967295UL < (((l_1013 = (safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s(g_983, 6)), (((safe_lshift_func_uint8_t_u_u((l_1012 = (p_17 == ((safe_rshift_func_int8_t_s_s(g_179, 7)) >= (safe_mod_func_uint8_t_u_u(0x0BL, ((0xCF4C7182L >= ((g_852 = ((l_1011 = (safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((((safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((~(l_807 = (safe_div_func_uint32_t_u_u(((l_1004 = p_20) > func_62((safe_div_func_int8_t_s_s(g_371, (g_72 = (+(((safe_div_func_uint32_t_u_u((p_18 | p_20), l_966)) >= l_1009) == g_653))))), g_179, p_21, l_1010)), g_653)))) == p_17), p_19)), l_966)) != 255UL) || p_19) ^ 7UL), l_966)), l_1010)), l_814))) == g_299)) <= l_966)) ^ l_966)))))), 6)) || g_146) & g_153)))) | 1UL) & g_535)))
                    {
                        char l_1028 = 0x2EL;
                        p_20 = ((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((((g_32 >= g_179) && (g_22 = (safe_lshift_func_uint16_t_u_s((((safe_rshift_func_uint16_t_u_u(l_1022, 2)) || (0x72F5L > ((((~(p_21 = (l_977 | (((g_309 = (-7L)) & (safe_sub_func_uint32_t_u_u(p_18, l_1025))) || (safe_rshift_func_int16_t_s_s(0x3A3CL, l_1010)))))) & 250UL) && l_966) | p_18))) < 1L), 6)))) > 0x20L), g_146)), l_1028)) >= g_146);
                        return p_21;
                    }
                    else
                    {
                        g_535 = (0x8738L < l_1022);
                        g_309 = func_79(((p_20 || func_79(p_19, l_799, l_1004)) & (g_89 == p_18)), l_977, p_21);
                        l_1011 = p_21;
                    }
                }
                else
                {
                    unsigned short l_1048 = 65535UL;
                    l_1011 = 0x231A33DEL;
                    g_535 = (safe_add_func_uint8_t_u_u((g_1031 && (safe_div_func_int8_t_s_s((safe_sub_func_int16_t_s_s(l_814, (safe_unary_minus_func_int8_t_s((p_19 >= (safe_div_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s((l_807 = ((safe_mod_func_uint8_t_u_u((func_79(l_882, l_1013, p_18) & 6UL), (safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((g_371 >= p_17) != l_977), l_1047)), p_20)))) & p_19)), 7)) == (-5L)) | p_21), p_19))))))), g_321))), l_1048));
                }
            }
            else
            {
                return g_240;
            }
            l_1050 = (g_306 >= ((l_882 = l_1004) && (5L && func_62(g_452, p_18, ((!(g_1049 = ((-9L) < l_814))) != (p_21 = (l_819 < p_19))), l_1047))));
        }
        else
        {
            unsigned l_1051 = 0x7A8E5D40L;
            return l_1051;
        }
        for (p_21 = 0; (p_21 >= 19); ++p_21)
        {
            for (g_1049 = 0; (g_1049 != 56); g_1049++)
            {
                int l_1058 = 0L;
                p_20 = (func_33((g_22 = 0x82DCL), ((p_19 && 1L) >= p_20)) & (safe_rshift_func_uint16_t_u_u(l_1058, 0)));
            }
        }
    }
    return p_20;
}







static short func_25(unsigned short p_26, int p_27, short p_28, unsigned p_29, short p_30)
{
    int l_42 = 0x336AE3D4L;
    int l_43 = (-1L);
    int l_73 = 0x76A447D0L;
    int l_467 = 0x23333DDFL;
    unsigned char l_676 = 1UL;
    short l_716 = 0x2B04L;
    unsigned short l_718 = 0x9399L;
    if (func_33((g_32 > (safe_add_func_int8_t_s_s(2L, (safe_lshift_func_int16_t_s_s(((p_29 < ((((((safe_sub_func_int32_t_s_s((l_43 = l_42), 0xC4EB0A11L)) && (-4L)) & 0x9E14L) < func_44((l_467 = (safe_lshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((func_55((safe_sub_func_uint32_t_u_u((l_73 = func_62(l_42, g_32, g_22, g_32)), 4294967290UL)), g_32, g_32, l_42) && p_30), 15)), g_299)) || g_22), 0))), p_28, p_28, l_42)) > (-1L)) ^ l_42)) == 0xF329L), l_42))))), g_32))
    {
        int l_627 = 0xB5964913L;
        unsigned l_636 = 1UL;
        int l_646 = 0x1598BFD5L;
        if ((safe_sub_func_uint32_t_u_u((g_299 = ((l_43 = (safe_sub_func_int16_t_s_s(g_240, (p_26 = (p_27 == (safe_rshift_func_int16_t_s_s((func_33(p_27, p_30) >= (safe_add_func_int8_t_s_s((l_627 && (0x2E9CL < (!(((safe_rshift_func_uint8_t_u_u(0UL, ((safe_sub_func_int8_t_s_s(((safe_add_func_int32_t_s_s((((((((safe_div_func_int32_t_s_s((l_636 ^ p_26), g_321)) == p_27) | g_109) < 255UL) != g_110) > 0x34FB258EL) && g_72), g_32)) && 0xF3L), l_627)) >= p_29))) > l_467) == (-9L))))), g_153))), 13))))))) == g_146)), p_27)))
        {
            short l_643 = 0x41F7L;
            int l_654 = 0x3387C044L;
            g_110 = ((((0x0D82L & (g_116 == (safe_mod_func_int16_t_s_s(func_33(l_636, (g_179 = (safe_mod_func_int16_t_s_s(((safe_div_func_int16_t_s_s((~func_62(g_72, g_32, g_89, func_33(g_110, ((0x5EL <= func_33(l_627, l_467)) || 255UL)))), l_42)) ^ (-1L)), (-1L))))), (-1L))))) >= l_467) < l_643) >= l_643);
            g_653 = (func_44(p_29, (safe_lshift_func_int16_t_s_s(0x3390L, ((l_646 = p_28) | l_636))), (func_44(g_146, g_89, ((safe_lshift_func_int8_t_s_s((l_42 ^ ((g_72 == ((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(4L, p_30)), l_627)) < 0UL)) >= 0L)), g_109)) <= p_26), p_27) <= 0x41A8L), g_371) || p_28);
            p_27 = g_93;
            l_654 = l_636;
        }
        else
        {
            unsigned short l_655 = 1UL;
            int l_656 = 6L;
            if ((l_656 = (p_27 = l_655)))
            {
                int l_677 = 0x7E8873B0L;
                for (g_240 = (-21); (g_240 >= (-9)); g_240 = safe_add_func_uint16_t_u_u(g_240, 6))
                {
                    int l_663 = 0x3843AF71L;
                    g_110 = ((safe_sub_func_int8_t_s_s(((func_33(((safe_sub_func_uint16_t_u_u(l_663, g_153)) ^ (safe_div_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(0xCEL, (p_27 || p_28))) & (((safe_add_func_int16_t_s_s(g_299, (0x2C0ABF15L >= func_33((g_116 = (safe_rshift_func_uint8_t_u_u(l_663, ((((safe_lshift_func_uint16_t_u_u((l_467 && l_676), g_371)) > l_42) | 0x0EL) && l_677)))), p_29)))) || l_677) <= (-1L))), p_28))), l_646) < g_32) > p_28), l_663)) == l_656);
                }
                g_110 = l_655;
            }
            else
            {
                unsigned l_688 = 0xEC5E3333L;
                for (l_627 = 0; (l_627 == (-8)); --l_627)
                {
                    l_646 = l_646;
                    g_535 = g_146;
                    p_27 = ((~g_321) && (safe_add_func_uint8_t_u_u(((g_116 = p_30) >= func_33((p_26 = func_62((g_653 = (g_452 = (safe_rshift_func_int16_t_s_s((((safe_mod_func_int8_t_s_s(l_627, (0x132E502DL & (safe_sub_func_uint16_t_u_u((!p_26), 65530UL))))) && (p_28 = g_309)) || ((func_33(p_28, g_653) & 0UL) != 0x3EL)), g_371)))), g_72, l_688, g_153)), p_27)), 0UL)));
                }
                return p_29;
            }
            g_110 = p_29;
        }
    }
    else
    {
        unsigned short l_693 = 0UL;
        int l_702 = 6L;
        int l_723 = (-2L);
        char l_748 = 0x18L;
        unsigned char l_778 = 0x23L;
        short l_794 = 0L;
        unsigned l_795 = 0xE4924870L;
        if ((g_179 <= g_72))
        {
            unsigned l_701 = 0x081E457EL;
            int l_709 = 0L;
            l_702 = ((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(((l_693 | func_62(func_79((l_693 <= (safe_sub_func_int16_t_s_s(0x5573L, (safe_mod_func_uint16_t_u_u(((safe_unary_minus_func_uint8_t_u((p_30 < p_28))) < (safe_mod_func_int8_t_s_s(func_33(l_701, g_321), func_79(l_43, g_93, l_693)))), g_653))))), l_693, p_30), l_693, l_43, p_30)) & g_535), 6)), l_676)) < 0x046A8C86L);
            l_709 = ((safe_lshift_func_int8_t_s_s((((safe_div_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(func_55((~(g_653 <= 1L)), p_28, (!(g_72 = g_72)), g_240), p_27)) | (l_701 || p_29)), 5L)) & g_22) & g_32), 3)) | 0x1FL);
            l_716 = (safe_sub_func_int32_t_s_s(p_27, (safe_sub_func_int16_t_s_s(((l_701 == (0x02AC4ACEL & ((p_30 | g_110) || ((safe_lshift_func_uint8_t_u_s(((g_32 ^ p_26) ^ func_44(p_30, l_43, l_709, l_43)), 6)) & g_299)))) || l_693), 8UL))));
        }
        else
        {
            short l_730 = (-1L);
            unsigned char l_731 = 0x14L;
            int l_755 = (-5L);
            short l_773 = 0x9B6EL;
            if ((((safe_unary_minus_func_uint32_t_u(g_22)) <= ((0x4EL >= (((g_93 = p_30) > l_718) < (g_22 && (((safe_add_func_int8_t_s_s(func_33((safe_div_func_uint16_t_u_u(l_723, (safe_rshift_func_uint16_t_u_s((0UL == func_33((safe_sub_func_int16_t_s_s((((((g_321 = ((safe_mod_func_uint32_t_u_u(g_371, (l_730 = g_179))) && g_72)) && p_29) ^ l_731) == l_702) > l_731), l_676)), p_28)), 5)))), p_28), p_30)) && p_26) && g_240)))) | g_535)) >= g_452))
            {
                unsigned char l_735 = 0xEEL;
                g_535 = (safe_lshift_func_int16_t_s_s(((0x7253L > (l_676 > (0xC22FL > (p_27 && (p_29 = l_731))))) <= (((p_26 && ((safe_unary_minus_func_uint16_t_u(0x0C40L)) <= ((p_30 > g_116) <= 0xC478L))) <= l_735) < l_735)), 11));
                p_27 = (safe_lshift_func_int16_t_s_u((-1L), 4));
            }
            else
            {
                g_110 = ((((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_div_func_int8_t_s_s(p_30, (safe_add_func_int16_t_s_s(g_110, (safe_mod_func_uint32_t_u_u(l_748, (g_535 = (safe_lshift_func_uint8_t_u_s((g_240 ^ (g_452 = func_33(g_110, g_179))), 3))))))))), (g_72 = (l_73 != (safe_mod_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(4294967288UL, l_731)) & l_730), l_42)))))), p_28)) < g_306) & g_110) || 0xFF7B15D1L);
                g_535 = (p_30 | 0xDB8CL);
            }
            p_27 = func_44(g_653, (l_755 = p_28), l_730, (safe_lshift_func_int8_t_s_u((-8L), (safe_add_func_int32_t_s_s(l_716, (safe_sub_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(func_33(g_146, func_33(func_33(func_62(l_676, (0xEB83244BL | (safe_div_func_uint32_t_u_u((p_27 || g_72), g_32))), l_731, l_43), p_27), l_73)), g_306)), l_42)), g_371)) | l_73), l_467)))))));
            p_27 = (g_306 > ((l_773 = (safe_sub_func_int8_t_s_s(p_26, ((safe_unary_minus_func_uint16_t_u(g_452)) < 0x49DBL)))) && (safe_rshift_func_int16_t_s_u(((l_702 = l_73) & ((safe_rshift_func_uint16_t_u_u(l_778, 13)) < (g_22 > (((0x1AL >= (0x27L > g_535)) <= g_535) && g_72)))), 11))));
        }
        for (l_716 = (-12); (l_716 >= (-29)); l_716 = safe_sub_func_int8_t_s_s(l_716, 1))
        {
            unsigned char l_783 = 1UL;
            int l_796 = (-1L);
            g_535 = ((((safe_div_func_int32_t_s_s(l_783, l_718)) != (l_73 ^ func_79(g_22, g_109, (l_783 & (g_89 & l_467))))) & p_30) ^ p_26);
            p_27 = (safe_sub_func_int32_t_s_s(((~p_26) | func_33(p_29, (((g_306 == g_452) | 0L) >= ((l_73 ^ ((g_93 && (safe_add_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((4L != ((safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((g_32 | g_371), g_309)), l_794)) != l_693)), 15)) ^ g_653), 0L))) || g_371)) >= l_676)))), p_27));
            l_796 = l_795;
        }
    }
    g_110 = (-1L);
    return p_30;
}







static int func_33(unsigned short p_34, char p_35)
{
    g_309 = (safe_add_func_uint16_t_u_u(65526UL, g_299));
    return g_22;
}







static short func_44(int p_45, unsigned char p_46, int p_47, int p_48)
{
    short l_470 = 0L;
    int l_471 = 0xA323F51FL;
    unsigned short l_476 = 0x122AL;
    unsigned char l_607 = 0x7AL;
    int l_613 = 0x452E68BAL;
    if ((safe_div_func_uint16_t_u_u(l_470, (l_471 = g_116))))
    {
        g_110 = g_306;
        g_309 = g_306;
    }
    else
    {
        char l_472 = 0L;
        int l_473 = 0x228ECA0DL;
        l_471 = ((g_179 = (l_473 = l_472)) == g_72);
        l_471 = g_153;
    }
    g_110 = g_179;
    if (((safe_add_func_int16_t_s_s(0x138CL, (-7L))) & l_476))
    {
        int l_500 = 0xDAD0AC49L;
        int l_537 = (-1L);
        for (g_116 = 0; (g_116 > 19); g_116 = safe_add_func_uint32_t_u_u(g_116, 8))
        {
            unsigned char l_501 = 0x2BL;
            int l_514 = (-1L);
            int l_519 = 0L;
            for (g_89 = 12; (g_89 == 25); ++g_89)
            {
                unsigned short l_485 = 1UL;
                int l_488 = 0x5B7B6F85L;
                int l_524 = 0x1183D354L;
                unsigned l_536 = 0x90E7C6ECL;
                for (l_470 = 0; (l_470 > 11); l_470 = safe_add_func_uint16_t_u_u(l_470, 5))
                {
                    char l_489 = 0L;
                    g_110 = (safe_rshift_func_uint8_t_u_u((((g_452 != l_485) >= (l_485 == ((safe_div_func_uint32_t_u_u(0x32DD5C3CL, (l_488 = g_299))) > func_62(g_321, ((g_306 = g_306) & l_471), l_489, p_45)))) ^ 0x6C45A12CL), 5));
                    l_488 = (safe_sub_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(l_470, ((safe_mod_func_int32_t_s_s(0x5FBACF1EL, func_62(l_470, ((l_471 = (((safe_sub_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((l_471 | l_489), l_500)) != ((!l_501) & ((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(255UL, p_47)), p_46)) < 3UL))), 1L)) < l_500) || g_179)) == 0x5EBDE517L), l_501, g_240))) & g_371))), g_32));
                    g_110 = func_62((g_452 = ((safe_rshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u((safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s((l_514 = l_500), (~(!func_62(((l_501 > l_470) <= (l_501 >= 247UL)), func_62(((l_519 = (safe_lshift_func_int8_t_s_s(g_299, 2))) > (safe_rshift_func_uint8_t_u_s(255UL, (safe_mod_func_int16_t_s_s(((func_62(l_500, (l_501 <= p_46), p_46, p_47) ^ g_32) >= 249UL), g_321))))), p_46, g_22, g_110), g_306, l_500))))), (-1L))), l_524)), 2)) <= 4294967295UL)), g_32, g_179, p_45);
                }
                g_110 = (g_452 && (safe_sub_func_uint16_t_u_u((l_471 = (safe_sub_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(func_62(l_500, (l_537 = (safe_rshift_func_uint8_t_u_u(func_62((l_536 = (safe_rshift_func_uint8_t_u_u(0xB5L, (g_535 = (((g_32 < g_72) != (l_500 >= g_306)) || (g_179 || l_470)))))), g_22, l_501, g_146), g_309))), g_110, g_306), p_46)), 0x0A02L))), g_110)));
            }
        }
        l_537 = ((-6L) ^ p_48);
    }
    else
    {
        char l_540 = 0x7EL;
        int l_541 = 1L;
        int l_552 = 0x2A0FDBCBL;
        unsigned l_559 = 4294967293UL;
        char l_562 = (-7L);
        if ((l_541 = (safe_sub_func_int16_t_s_s(l_540, func_79(p_46, g_146, l_471)))))
        {
            int l_542 = 0x43EF6C83L;
            int l_543 = 0L;
            int l_567 = 0L;
            unsigned l_598 = 1UL;
            l_543 = l_542;
            g_309 = (p_47 < l_542);
            if ((l_552 = ((safe_div_func_uint32_t_u_u((p_46 & (p_48 && ((l_541 = g_153) < (g_321 ^ (func_62((l_471 = (safe_rshift_func_uint16_t_u_s(func_62(p_46, (safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((l_540 && (((0x5F1AL != 0xDEDDL) || ((l_540 >= p_46) == 0x54L)) < g_179)), l_543)), l_476)), p_46, p_48), p_48))), g_93, g_153, l_540) && g_371))))), 0x67C49E4FL)) >= 1L)))
            {
                l_541 = (l_471 = (safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(g_22, g_240)), func_62(g_535, l_540, func_62((l_552 = ((safe_rshift_func_int16_t_s_s((l_559 != l_541), (safe_lshift_func_int16_t_s_s(((l_562 = p_45) <= (safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s((g_452 > ((1UL <= (-1L)) || 65535UL)), 0x76DD908CL)), p_46))), 1)))) <= g_153)), g_452, l_470, g_93), g_89))));
                l_567 = (l_543 = l_541);
            }
            else
            {
                unsigned char l_589 = 7UL;
                l_471 = (((p_47 && 0UL) && g_371) & g_179);
                for (g_306 = 0; (g_306 > 28); ++g_306)
                {
                    unsigned l_584 = 1UL;
                    if ((safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((0x0C2CL <= func_62(g_93, (+(safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int8_t_s_s((-4L), ((safe_add_func_int32_t_s_s(((l_584 = g_306) || 0L), (0x44L >= (l_567 > ((~(safe_mod_func_int32_t_s_s((l_567 ^ ((!(~0xC6L)) | g_299)), p_45))) && 4294967295UL))))) >= l_562))) != l_471), 7)), 1))), g_240, g_535)), p_47)), 3)))
                    {
                        return p_47;
                    }
                    else
                    {
                        if (g_110)
                            break;
                        l_543 = (safe_add_func_int16_t_s_s((~l_543), g_179));
                        l_471 = l_589;
                    }
                    g_110 = (((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(g_452, p_45)), 1)) != (l_589 >= (0x38D3L < (p_46 & p_45)))), (g_299 >= ((safe_rshift_func_uint16_t_u_s(p_48, 5)) ^ g_93)))) ^ p_46) ^ l_476);
                    l_541 = p_47;
                }
                l_598 = g_110;
            }
        }
        else
        {
            char l_610 = 0xE6L;
            g_535 = (g_309 = func_62(p_47, l_562, ((func_79((safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(g_22, 0x3BB9D2CBL)), ((safe_add_func_uint32_t_u_u(g_89, (l_552 = (safe_mod_func_int16_t_s_s((((p_45 < p_45) > ((!(((l_607 = l_559) || ((safe_rshift_func_uint16_t_u_u(g_109, l_610)) <= 0x9724E1E5L)) && l_610)) <= g_110)) < g_110), g_89))))) ^ g_321))), g_22, g_146) || g_22) > 0x66L), g_452));
            for (l_471 = 0; (l_471 != 24); l_471 = safe_add_func_uint32_t_u_u(l_471, 2))
            {
                int l_614 = 0x4C74B2B3L;
                l_613 = p_48;
                l_614 = p_46;
            }
        }
        return p_46;
    }
    g_535 = (safe_lshift_func_int16_t_s_s(l_471, 1));
    return l_613;
}







static short func_55(unsigned char p_56, short p_57, char p_58, char p_59)
{
    int l_74 = 0x03F559CDL;
    int l_335 = 0x312C1E33L;
    unsigned l_339 = 1UL;
    int l_368 = 0xBB767924L;
    int l_381 = (-6L);
    unsigned l_394 = 0xF108549FL;
    int l_447 = (-1L);
    char l_463 = 0x4CL;
    short l_466 = 0x0398L;
lbl_460:
    l_74 = 0xC1B2D863L;
    for (g_72 = (-30); (g_72 != 0); g_72++)
    {
        unsigned l_94 = 6UL;
        int l_301 = 0x126A534EL;
        unsigned short l_351 = 0UL;
        int l_352 = 4L;
        for (p_59 = 0; (p_59 <= 27); ++p_59)
        {
            unsigned short l_92 = 0x421AL;
            int l_343 = 0L;
            int l_367 = 0xB0C6D8FCL;
            int l_440 = (-1L);
            unsigned l_457 = 0xE93CFB2FL;
            if (func_79(((safe_rshift_func_uint16_t_u_s(g_22, 12)) <= ((g_93 = ((+(g_89 = g_72)) <= (((0xCFL <= ((-8L) ^ g_72)) && l_74) < (l_92 = (safe_mod_func_uint16_t_u_u(g_22, 5UL)))))) < l_94)), p_58, l_94))
            {
                unsigned l_300 = 0x50761ED4L;
                int l_314 = 0L;
                unsigned char l_414 = 254UL;
                if (g_93)
                {
                    char l_320 = 0x5EL;
                    int l_322 = (-2L);
                    char l_324 = 1L;
                    l_301 = (safe_mod_func_int16_t_s_s((!(l_74 | (+((l_94 && ((((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_s(func_79(p_59, g_116, l_74), (l_74 | g_299))) > (l_300 && p_58)), l_94)), (-8L))) | p_58) ^ 0xCBL) & (-1L))) ^ p_56)))), 65530UL));
                    if (func_79(p_59, ((p_58 <= (l_301 = (((!(func_79(l_300, l_94, g_93) <= (l_92 < (safe_mod_func_uint32_t_u_u((p_58 > (((g_306 = (safe_rshift_func_uint16_t_u_u(1UL, l_74))) > 0L) >= p_56)), p_57))))) == 0x3081A098L) == (-3L)))) && 1UL), g_299))
                    {
                        short l_319 = 0xA250L;
                        int l_323 = 0x70AF4106L;
                        l_301 = ((g_309 = (safe_mod_func_uint8_t_u_u(255UL, g_240))) >= ((g_72 <= g_109) & (g_89 && g_110)));
                        l_323 = func_79((safe_add_func_int16_t_s_s((1L && (g_321 = (l_320 = ((safe_lshift_func_uint16_t_u_s(func_79(((p_57 ^ (((~4UL) == (g_240 > (g_110 = (p_57 ^ 1L)))) >= (l_314 = p_59))) == (-9L)), (safe_lshift_func_uint8_t_u_s((((safe_sub_func_int32_t_s_s(g_22, g_116)) & l_319) && l_319), 2)), p_57), 8)) | p_56)))), g_89)), l_322, g_22);
                    }
                    else
                    {
                        unsigned l_325 = 1UL;
                        int l_326 = 0xD5EF94F0L;
                        l_322 = p_58;
                        l_326 = ((0x0C768133L ^ l_94) > (l_325 = l_324));
                    }
                    l_335 = (g_299 ^ ((g_89 || l_320) > ((safe_rshift_func_int8_t_s_u((-1L), l_301)) >= ((safe_add_func_int32_t_s_s(((safe_div_func_uint8_t_u_u((p_56 = (safe_rshift_func_uint16_t_u_s(l_314, 0))), p_59)) > (l_314 | ((1L || 1L) ^ p_57))), p_59)) | l_74))));
                }
                else
                {
                    unsigned l_336 = 0xAF4F9BA9L;
                    unsigned l_372 = 0UL;
                    int l_403 = (-1L);
                    l_301 = l_336;
                    for (g_89 = 1; (g_89 == 17); g_89++)
                    {
                        unsigned l_348 = 0x268BF3F1L;
                        int l_364 = 0x0DF409EAL;
                        l_343 = (func_79(l_301, p_58, g_32) ^ ((l_339 | p_59) <= (l_314 = (safe_unary_minus_func_uint32_t_u((safe_add_func_int8_t_s_s((g_306 != p_56), g_22)))))));
                        l_348 = (~((safe_div_func_int8_t_s_s(((func_79(g_109, (p_57 & 1UL), (l_301 | g_72)) != (0x7ABD0C99L > (l_92 & (safe_rshift_func_int8_t_s_s(g_309, 5))))) != g_321), g_89)) & p_56));
                        l_352 = (safe_div_func_int32_t_s_s(l_351, ((l_74 == ((((l_301 = func_79(p_56, p_56, func_79(p_59, g_22, l_300))) && g_309) == 0xCB52L) < p_59)) & l_314)));
                        l_368 = (safe_sub_func_int8_t_s_s((0x6CED1800L != ((safe_mod_func_uint8_t_u_u(7UL, (safe_lshift_func_uint8_t_u_s(l_92, 1)))) & (((func_79((safe_unary_minus_func_uint8_t_u((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(1L, l_336)), 6)))), (l_364 = (-1L)), (safe_mod_func_uint8_t_u_u(func_79(l_367, p_57, p_57), 0xC9L))) < l_300) & g_32) <= l_301))), 1L));
                    }
                    if ((((((((g_240 | p_58) < p_58) != (safe_sub_func_uint8_t_u_u((l_352 = (g_371 = g_299)), p_58))) < (!(l_336 >= (p_57 & (l_301 = l_92))))) == l_372) && 0x30380A52L) == l_336))
                    {
                        if (g_371)
                            break;
                    }
                    else
                    {
                        unsigned l_377 = 0UL;
                        int l_380 = (-8L);
                        g_110 = (l_368 = p_58);
                        l_381 = (((safe_sub_func_int32_t_s_s((-1L), (l_368 = (l_351 >= func_79((safe_mod_func_int8_t_s_s((func_79((l_377 = g_306), func_79(l_94, (safe_mod_func_int16_t_s_s(p_56, l_94)), p_57), g_306) != l_300), l_74)), l_380, p_57))))) >= p_58) > l_314);
                        l_343 = (g_72 & (safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((((safe_div_func_int16_t_s_s((g_371 | l_335), func_79(g_309, ((safe_add_func_int32_t_s_s((l_352 | ((((safe_lshift_func_uint8_t_u_u(l_394, 7)) & (l_403 = (g_309 != (func_79(l_343, ((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_mod_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(func_79(l_74, p_57, g_109), 0)) | g_72), l_351)) >= g_309), p_59)), g_309)) | 0x18L), g_72) ^ l_372)))) < 7UL) >= 0x65L)), g_72)) >= p_59), g_371))) < (-1L)) != g_321), l_94)), 4294967290UL)));
                    }
                    for (l_381 = 0; (l_381 > 21); ++l_381)
                    {
                        short l_410 = 6L;
                        int l_413 = 0xAB548E30L;
                        g_309 = ((safe_lshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((l_368 = p_59) > func_79((~g_153), (l_403 = (l_410 & ((g_116 || ((g_299 >= ((g_306 > l_410) | (safe_add_func_uint8_t_u_u(g_109, p_58)))) ^ g_116)) | l_300))), g_32)), 0xBC12L)), 7)) == g_299);
                        l_343 = p_56;
                        l_368 = func_79((func_79(g_89, (g_309 = g_32), l_413) && (0xA3L == l_414)), (safe_lshift_func_int16_t_s_u(l_94, 2)), l_413);
                    }
                }
                for (g_309 = 0; (g_309 <= (-9)); g_309 = safe_sub_func_uint32_t_u_u(g_309, 1))
                {
                    char l_422 = 0L;
                    if (g_309)
                    {
                        unsigned char l_421 = 251UL;
                        l_422 = (safe_div_func_uint8_t_u_u(l_421, p_59));
                        if (g_72)
                            break;
                    }
                    else
                    {
                        l_314 = (g_110 = l_352);
                    }
                    return g_371;
                }
                if (g_32)
                    break;
                for (l_343 = 0; (l_343 <= (-6)); l_343 = safe_sub_func_int8_t_s_s(l_343, 8))
                {
                    short l_439 = 0L;
                    g_309 = (l_440 = ((safe_add_func_int8_t_s_s((+(safe_unary_minus_func_int8_t_s((((p_56 = p_57) <= (g_93 != 0x19L)) != p_57)))), ((safe_unary_minus_func_int32_t_s((l_352 && (safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(g_89, (g_371 = 0UL))), 5))))) & ((safe_mul_func_uint8_t_u_u(l_381, (((safe_add_func_uint16_t_u_u(0UL, l_343)) > 0L) <= l_439))) == 0xEE6CEDDFL)))) | 246UL));
                    for (p_56 = 18; (p_56 >= 14); p_56 = safe_sub_func_int8_t_s_s(p_56, 6))
                    {
                        if (p_57)
                            break;
                        return p_56;
                    }
                    l_301 = (safe_sub_func_uint8_t_u_u((~l_439), (safe_lshift_func_uint16_t_u_u((l_314 = (0x1D57944CL > (l_447 = l_439))), 5))));
                }
            }
            else
            {
                unsigned short l_458 = 0xF50DL;
                l_301 = g_93;
                g_309 = func_79(p_56, p_58, l_394);
                l_458 = (safe_sub_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(0x38EB3B39L, (l_352 & l_351))) ^ (l_457 = ((g_116 >= (g_452 != (g_299 && p_56))) ^ (safe_add_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s(0xA527L, ((((+(((((l_381 = g_89) ^ 9L) ^ p_59) | 0xC2D5L) != l_301)) > 0UL) > g_179) ^ 1L))) | p_59), 0xF0B77432L))))), 0xA162L));
            }
            if (p_58)
                break;
            if (l_301)
            {
                unsigned short l_459 = 0x5B8DL;
                return l_459;
            }
            else
            {
                if (l_339)
                    goto lbl_460;
                return g_110;
            }
        }
        if (l_368)
            continue;
        if (g_109)
            continue;
    }
    l_381 = (g_309 = (~g_321));
    g_309 = (func_62((g_452 = ((safe_lshift_func_uint16_t_u_s((l_463 == ((safe_lshift_func_uint16_t_u_u((0xE4L & ((l_381 = (func_79((g_89 = func_62(p_58, g_109, l_447, p_59)), p_57, g_321) == g_22)) || 0x834EL)), l_74)) != 248UL)), 5)) >= l_368)), g_22, g_22, g_309) ^ l_466);
    return g_116;
}







static unsigned func_62(unsigned short p_63, unsigned p_64, unsigned char p_65, char p_66)
{
    unsigned l_70 = 4294967286UL;
    int l_71 = 0x4A4E7FB1L;
    for (p_65 = 0; (p_65 == 32); p_65 = safe_add_func_int32_t_s_s(p_65, 9))
    {
        return p_66;
    }
    l_71 = (0xD8L != ((safe_unary_minus_func_uint8_t_u(255UL)) && (l_70 = g_32)));
    l_71 = g_22;
    g_72 = g_32;
    return l_71;
}







static int func_79(int p_80, int p_81, unsigned char p_82)
{
    int l_97 = (-1L);
    char l_216 = (-1L);
    p_81 = (safe_sub_func_uint32_t_u_u(((+g_22) ^ l_97), ((safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(p_80, 0x9C36L)), 6)) && (safe_unary_minus_func_int32_t_s(((g_22 != (safe_lshift_func_uint16_t_u_u((g_110 = ((l_97 >= (safe_sub_func_int16_t_s_s(p_82, g_72))) >= ((g_109 = ((p_82 || g_32) ^ p_82)) != p_81))), g_22))) && l_97))))));
    if (l_97)
    {
        return p_80;
    }
    else
    {
        unsigned short l_117 = 0xA2B5L;
        int l_120 = 0L;
        int l_121 = 0xB4F91071L;
        unsigned l_125 = 0UL;
        unsigned l_192 = 4294967295UL;
        int l_232 = 0x7A4C18CAL;
        char l_270 = 0L;
        char l_289 = 0xA4L;
        unsigned short l_290 = 1UL;
        if ((((l_121 = (safe_unary_minus_func_int32_t_s(((safe_sub_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((g_32 <= (p_81 != (g_116 = (l_97 ^ g_93)))), p_80)) > p_82), p_82)) < (l_117 || ((l_120 = (safe_lshift_func_int8_t_s_s((l_117 < p_82), g_110))) > 0x7EL)))))) != p_80) && p_82))
        {
            p_81 = 0x9A8624A7L;
            p_81 = p_81;
            p_81 = ((-10L) & (l_121 = (l_97 = g_110)));
        }
        else
        {
            unsigned char l_124 = 0x77L;
            int l_143 = 8L;
            unsigned l_150 = 0x223BFC9FL;
            int l_160 = (-1L);
            unsigned l_182 = 0x4DB1C9D1L;
            g_110 = (+(l_120 = (((0x54A9L && l_120) < (p_81 = (p_80 != 0xD2L))) & ((~(l_124 = ((~(safe_rshift_func_int8_t_s_u(p_82, 0))) != p_82))) > g_22))));
            g_110 = l_125;
            if (p_80)
            {
                p_81 = (safe_rshift_func_int16_t_s_u(p_82, (~g_89)));
                return g_116;
            }
            else
            {
                int l_147 = (-1L);
                int l_161 = 0x6E9995DDL;
                for (g_93 = 12; (g_93 <= 18); g_93++)
                {
                    if (p_82)
                        break;
                }
                for (l_117 = 0; (l_117 < 42); l_117 = safe_add_func_int32_t_s_s(l_117, 5))
                {
                    int l_140 = 0L;
                    int l_159 = 0x2B09B685L;
                    for (g_109 = 0; (g_109 != 14); g_109++)
                    {
                        l_147 = (0x8FFE4DFDL || ((safe_add_func_int8_t_s_s((l_124 == p_81), ((safe_mul_func_uint8_t_u_u(l_117, (g_146 = ((g_93 = l_124) != (safe_add_func_int8_t_s_s((l_140 != ((safe_sub_func_uint16_t_u_u((l_143 = 0UL), (safe_div_func_int16_t_s_s(l_120, l_97)))) >= l_140)), 0x24L)))))) >= g_32))) | 1L));
                        g_110 = p_80;
                        p_81 = ((l_147 != g_146) | l_124);
                    }
                    if (l_117)
                    {
                        p_81 = (p_81 <= p_81);
                        l_143 = g_146;
                        p_81 = (p_81 && ((safe_sub_func_uint16_t_u_u(l_150, g_109)) > (p_80 >= p_80)));
                    }
                    else
                    {
                        unsigned l_154 = 0xEC10F06FL;
                        int l_162 = 0x985A9A92L;
                        g_110 = p_82;
                        l_161 = ((g_116 != p_81) > ((safe_rshift_func_int8_t_s_u((g_153 = (0x91F1L < l_97)), 6)) && (((l_154 & (safe_lshift_func_uint8_t_u_s(249UL, (l_97 = (safe_sub_func_int32_t_s_s(g_116, g_153)))))) > ((l_159 = (p_80 || g_93)) != l_160)) & g_72)));
                        l_159 = (g_93 || (l_162 = 0x22L));
                        p_81 = (((safe_sub_func_uint32_t_u_u((((l_120 = 0xA5L) || (g_32 && g_32)) > (l_159 = 0xD0E7C882L)), g_72)) || (l_97 <= (l_159 = (safe_rshift_func_int16_t_s_u(g_93, 4))))) | g_89);
                    }
                    g_110 = ((safe_sub_func_uint16_t_u_u((g_153 && (safe_add_func_uint16_t_u_u(((0UL != (p_81 == g_110)) ^ l_97), p_81))), (g_109 = ((l_159 = g_116) | (safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u((((!(((g_179 = (g_146 != g_89)) > l_140) >= 0UL)) & g_153) | g_146), l_160)), p_82)), 0xBCE0L)), p_80)))))) >= l_117);
                    for (l_147 = (-21); (l_147 > 11); ++l_147)
                    {
                        g_110 = 0xED04B031L;
                        l_120 = (l_182 > 0L);
                        l_159 = (safe_sub_func_int16_t_s_s(0L, (65535UL <= (l_120 = g_89))));
                        l_161 = (~(p_81 = (safe_unary_minus_func_uint8_t_u(g_146))));
                    }
                }
                g_110 = (g_32 < 0xC0CBL);
                if ((safe_lshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s((-2L), ((l_143 && p_80) | g_89))), g_116)))
                {
                    int l_193 = 7L;
                    unsigned l_224 = 0x33570BABL;
                    if ((((safe_mod_func_int8_t_s_s((((((l_193 = ((p_82 | ((p_82 >= (g_109 = (-1L))) || p_82)) != l_192)) < ((((safe_sub_func_uint8_t_u_u((p_81 ^ (safe_sub_func_uint32_t_u_u(p_81, (safe_sub_func_uint8_t_u_u(p_81, (safe_mod_func_uint16_t_u_u(0x2400L, p_82))))))), g_89)) >= l_160) || p_82) > 65531UL)) ^ p_81) & l_160) > 1L), 0x45L)) <= 1L) || p_81))
                    {
                        unsigned char l_202 = 0xD7L;
                        l_202 = p_82;
                    }
                    else
                    {
                        unsigned l_215 = 0x11781CC2L;
                        int l_231 = 1L;
                        g_110 = (safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(((((p_81 >= (safe_div_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((safe_div_func_int8_t_s_s(g_93, 0x4FL)) && 0xAD9CL), g_110)), ((p_81 <= g_22) & l_215)))) | 0xC82EL) | p_80) != 6UL), g_110)), 1UL)), l_216));
                        g_110 = (safe_sub_func_uint32_t_u_u((l_124 | (safe_lshift_func_uint16_t_u_s((l_120 = (g_93 | (safe_add_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(l_224)), ((l_193 = p_82) != 0xB9L))))), 9))), (p_80 > (safe_lshift_func_int8_t_s_u(g_146, (g_153 | (safe_mod_func_uint32_t_u_u((l_231 = ((safe_add_func_uint16_t_u_u(l_215, (-1L))) == p_81)), l_143))))))));
                        g_110 = (p_81 = p_81);
                        p_81 = l_215;
                    }
                    if ((g_116 != (l_232 != l_143)))
                    {
                        int l_239 = 0x6C129863L;
                        p_81 = (safe_rshift_func_uint8_t_u_u(l_224, 3));
                        l_161 = ((safe_sub_func_uint32_t_u_u(l_192, (p_81 = (safe_sub_func_uint16_t_u_u(g_110, (p_81 && 0UL)))))) == l_239);
                        l_193 = (-7L);
                    }
                    else
                    {
                        l_97 = (l_161 >= g_109);
                        l_193 = 2L;
                        l_193 = (0x7DL >= p_82);
                        g_240 = (g_110 = l_97);
                    }
                    return l_192;
                }
                else
                {
                    char l_256 = 0L;
                    int l_259 = 0L;
                    l_120 = g_110;
                    for (l_160 = 20; (l_160 >= (-22)); l_160 = safe_sub_func_uint8_t_u_u(l_160, 1))
                    {
                        char l_255 = 9L;
                        unsigned l_260 = 0xD4AA5150L;
                        l_260 = ((g_22 <= ((safe_lshift_func_uint8_t_u_u(g_32, 1)) != ((safe_mod_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s(l_255, p_82)), 0x15L)), ((l_120 = l_256) ^ ((l_259 = ((l_97 = (g_110 = (safe_add_func_uint8_t_u_u(g_72, ((+((((l_161 = (p_80 <= ((g_146 < p_81) <= g_32))) & 0L) >= 0x3BL) >= p_82)) & l_192))))) <= l_256)) ^ l_147)))) & g_153) >= p_81), 0x4CL)) & p_82))) >= p_82);
                    }
                    if ((g_110 = (p_81 | 0xA9L)))
                    {
                        g_110 = 1L;
                        l_97 = p_80;
                    }
                    else
                    {
                        unsigned l_261 = 0xB2CBE358L;
                        g_110 = l_261;
                        return l_97;
                    }
                    g_110 = (p_81 ^ l_117);
                }
            }
        }
        l_120 = (safe_add_func_int32_t_s_s((p_81 = ((safe_add_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u(4294967289UL, 0L)) && (g_240 >= (safe_sub_func_int8_t_s_s(l_216, ((g_146 < l_270) != (safe_div_func_int8_t_s_s(g_109, ((g_22 | ((safe_mod_func_int32_t_s_s((((l_97 = ((p_81 & 1L) ^ (-5L))) | 0x57L) && g_72), l_125)) > l_216)) | g_93)))))))), p_81)) == g_109)), (-1L)));
        l_97 = ((l_121 != g_116) | p_80);
        g_110 = (safe_rshift_func_int16_t_s_u((l_121 = (safe_div_func_uint8_t_u_u(g_179, (((p_82 = l_216) ^ (safe_div_func_uint16_t_u_u((g_32 && p_81), (l_120 = p_81)))) ^ (l_97 = (safe_add_func_int16_t_s_s((l_290 = ((l_97 && p_80) & (safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s((-3L), 249UL)), l_289)))), 7L))))))), g_109));
    }
    return p_82;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_306, "g_306", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    transparent_crc(g_321, "g_321", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_452, "g_452", print_hash_value);
    transparent_crc(g_535, "g_535", print_hash_value);
    transparent_crc(g_653, "g_653", print_hash_value);
    transparent_crc(g_852, "g_852", print_hash_value);
    transparent_crc(g_947, "g_947", print_hash_value);
    transparent_crc(g_978, "g_978", print_hash_value);
    transparent_crc(g_983, "g_983", print_hash_value);
    transparent_crc(g_1031, "g_1031", print_hash_value);
    transparent_crc(g_1049, "g_1049", print_hash_value);
    transparent_crc(g_1076, "g_1076", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
