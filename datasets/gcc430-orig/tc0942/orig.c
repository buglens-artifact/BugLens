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



static int g_8 = 1L;
static unsigned g_107 = 4UL;
static int g_108 = 0L;
static unsigned short g_111 = 0x40C5L;
static unsigned short g_135 = 0xCD92L;
static int g_136 = 0x6C877778L;
static unsigned short g_140 = 0UL;
static int g_148 = 4L;
static char g_180 = 0x11L;
static int g_188 = (-1L);
static volatile short g_204 = 0x4132L;
static char g_217 = 0xD0L;
static unsigned short g_253 = 0xD9D4L;
static unsigned g_296 = 4294967290UL;
static int g_297 = 0xC1BFE7BBL;
static unsigned short g_326 = 0x90B4L;
static short g_346 = 0L;
static volatile int g_361 = (-10L);
static char g_381 = 0xA7L;
static char g_390 = 0L;
static unsigned g_410 = 4294967290UL;
static short g_411 = (-9L);
static unsigned g_452 = 1UL;
static unsigned g_486 = 4294967292UL;
static char g_514 = (-1L);
static volatile unsigned char g_525 = 249UL;
static short g_573 = 0x49D2L;
static const volatile short g_575 = 1L;
static unsigned g_618 = 4294967295UL;
static unsigned short g_627 = 1UL;
static short g_629 = (-1L);
static unsigned g_690 = 0x5D9F2203L;
static unsigned g_708 = 1UL;
static unsigned short g_770 = 0x1DB1L;
static unsigned char g_771 = 0x1FL;
static const int g_982 = 0L;
static unsigned char g_1088 = 0x6FL;
static volatile int g_1097 = (-9L);
static unsigned g_1101 = 0xC432E4E5L;



static int func_1(void);
static const char func_4(short p_5, const unsigned p_6, unsigned p_7);
static const unsigned short func_24(unsigned short p_25);
static unsigned short func_28(unsigned p_29, int p_30, short p_31, unsigned p_32, unsigned p_33);
static unsigned char func_41(int p_42, char p_43);
static short func_50(unsigned char p_51, unsigned short p_52, unsigned p_53);
static const unsigned func_63(int p_64, const unsigned char p_65);
static int func_67(char p_68, const char p_69, int p_70);
static char func_71(unsigned char p_72, short p_73, unsigned p_74, short p_75);
static const char func_80(int p_81);
static int func_1(void)
{
    short l_1099 = 0x6FB5L;
    int l_1100 = 0x755A6179L;
    l_1100 = (((safe_add_func_uint16_t_u_u(((((func_4(g_8, (8L < 0x16EFL), g_8) > g_690) || ((safe_unary_minus_func_int8_t_s(g_148)) < func_28(((-1L) <= (!((((l_1099 = (g_296 != g_575)) , g_411) == l_1100) , 1UL))), g_1101, l_1100, g_1101, g_8))) || l_1099) <= 0UL), 0xCA42L)) > g_690) , l_1100);
    return l_1099;
}







static const char func_4(short p_5, const unsigned p_6, unsigned p_7)
{
    unsigned char l_13 = 248UL;
    int l_1091 = (-5L);
    int l_1092 = 0x612A399AL;
    unsigned l_1093 = 4294967290UL;
    int l_1094 = 0xE4F30F6EL;
    l_1094 = (safe_add_func_uint16_t_u_u(((0xC865B49DL >= (safe_lshift_func_uint16_t_u_s(l_13, g_8))) , (((((safe_sub_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((((safe_div_func_uint32_t_u_u(l_13, g_8)) >= func_24(p_7)) | (safe_add_func_uint16_t_u_u((((l_1092 = (l_1091 = g_982)) | p_7) || p_6), 0xF031L))), 0L)) , g_1088), (-1L))), l_13)) >= l_13), l_13)) || l_1091) >= 0x67L) ^ l_1093) == g_982)), 0xED5DL));
    l_1091 = l_1091;
    l_1092 = (g_188 = ((g_346 || (safe_rshift_func_uint16_t_u_s(g_297, p_7))) > g_1097));
    return p_5;
}







static const unsigned short func_24(unsigned short p_25)
{
    short l_34 = 0L;
    int l_60 = 0x51ABE719L;
    unsigned l_66 = 0UL;
    int l_798 = 0x6D1CBA71L;
    int l_1083 = (-1L);
    unsigned short l_1084 = 1UL;
    int l_1085 = 0x32A323BBL;
    int l_1086 = 0L;
    g_1088 = ((safe_mod_func_uint8_t_u_u(((func_28(l_34, (safe_mod_func_int16_t_s_s((l_1086 = (l_1085 = (((safe_sub_func_uint8_t_u_u((0xD3L ^ (((l_1083 = (safe_sub_func_int8_t_s_s(l_34, func_41((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((((func_50((l_798 = (safe_add_func_uint32_t_u_u(g_8, ((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(g_8, (g_618 = (((l_60 = 4294967293UL) < ((safe_rshift_func_uint16_t_u_s(l_34, 11)) < 0xEE00L)) & func_63(l_66, l_34))))), 0)) > 0x44A580ADL)))), l_66, g_8) , g_346) > l_34) ^ 0xC2L), l_66)), (-6L))), p_25)), l_66)))) == g_982) || 5L)), g_982)) , l_1084) == p_25))), 0xB3DCL)), g_982, p_25, g_8) | g_8) , p_25), p_25)) | l_34);
    return l_1086;
}







static unsigned short func_28(unsigned p_29, int p_30, short p_31, unsigned p_32, unsigned p_33)
{
    int l_1087 = 0xC5F65A26L;
    return l_1087;
}







static unsigned char func_41(int p_42, char p_43)
{
    unsigned char l_812 = 0x1EL;
    unsigned short l_816 = 0UL;
    int l_825 = 0x1DA6B78DL;
    int l_838 = (-9L);
    int l_951 = 0x458FF35CL;
    if (l_812)
    {
        int l_813 = 0xD569D739L;
        l_813 = l_812;
    }
    else
    {
        short l_817 = 0x83C3L;
        int l_818 = 4L;
        if ((g_297 = (g_629 && ((safe_lshift_func_int8_t_s_u((~(l_817 = l_816)), (+0UL))) ^ 0x91F5L))))
        {
            short l_819 = 0x575AL;
            l_818 = g_180;
            return l_819;
        }
        else
        {
            for (g_486 = 0; (g_486 > 54); g_486 = safe_add_func_uint16_t_u_u(g_486, 1))
            {
                unsigned l_822 = 4294967295UL;
                l_822 = (0xD202L && p_42);
            }
            l_825 = (safe_lshift_func_uint16_t_u_s((0L & (l_818 = p_42)), p_42));
            return p_43;
        }
    }
lbl_938:
    l_838 = (safe_sub_func_int16_t_s_s(((((safe_mod_func_uint32_t_u_u((((l_825 , (((l_825 = (~0x2D209FA9L)) >= ((((((((253UL > 0L) && 0x3BL) && ((0UL > (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(65535UL, (((65527UL >= (safe_div_func_int16_t_s_s((safe_add_func_int16_t_s_s(p_42, l_812)), 0x4B47L))) , g_140) , g_771))), 8))) && 65527UL)) , p_42) > p_42) || 0x36L) ^ g_180) ^ 6L)) ^ 0x1065B9EDL)) == l_816) > l_816), l_812)) >= (-1L)) && 4294967295UL) >= l_816), p_42));
    for (g_148 = 0; (g_148 == (-2)); g_148 = safe_sub_func_uint32_t_u_u(g_148, 4))
    {
        unsigned char l_847 = 4UL;
        int l_862 = (-1L);
        g_297 = ((g_771 = (safe_sub_func_uint16_t_u_u(p_43, (g_627 = ((+p_42) < g_111))))) <= (safe_mod_func_uint8_t_u_u((g_390 | func_67(g_690, (safe_add_func_uint32_t_u_u(l_847, (!((g_411 , (safe_sub_func_int32_t_s_s((g_411 , func_67((safe_mod_func_int32_t_s_s(1L, g_690)), g_188, g_217)), 0xC3A428B1L))) , g_361)))), l_847)), l_825)));
        l_825 = ((safe_sub_func_int8_t_s_s((g_381 = ((safe_lshift_func_int8_t_s_s((((+(-1L)) != (((p_42 ^ (safe_add_func_uint16_t_u_u(p_43, (g_346 = (g_411 <= (p_42 >= p_42)))))) < g_708) , p_43)) | (safe_mod_func_int16_t_s_s(l_847, p_43))), 0)) < g_180)), l_847)) < 0x6C25L);
        l_862 = l_812;
        l_825 = (safe_sub_func_int16_t_s_s(((l_862 = (l_838 = (((safe_lshift_func_int16_t_s_u(((65526UL <= ((safe_div_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(((((-5L) > (+(safe_add_func_int16_t_s_s((safe_div_func_uint32_t_u_u((((safe_sub_func_int8_t_s_s(func_67(func_80(p_42), l_838, p_42), g_390)) <= (p_43 == (-5L))) >= l_847), p_43)), 8L)))) >= 0xFDL) < l_847), l_838)) , g_627), p_42)) != 0x01L)) | p_43), g_486)) | 5L) == g_525))) || g_410), (-6L)));
    }
    for (l_838 = 21; (l_838 != (-30)); l_838--)
    {
        unsigned char l_900 = 0UL;
        int l_910 = 0xD36CE3B9L;
        unsigned char l_1006 = 0x7DL;
        unsigned char l_1040 = 0x80L;
        int l_1069 = 0xD39B85E8L;
        unsigned short l_1075 = 0xECD7L;
        char l_1080 = 0x23L;
        for (g_108 = 0; (g_108 > (-2)); g_108 = safe_sub_func_int16_t_s_s(g_108, 9))
        {
            int l_889 = 0L;
            int l_966 = 0x62F20A35L;
            int l_967 = 6L;
            l_889 = ((safe_div_func_int8_t_s_s(((0x9FL < p_42) ^ g_452), g_108)) || (safe_div_func_uint16_t_u_u(p_42, (safe_lshift_func_int8_t_s_s(g_690, 4)))));
            g_297 = (safe_div_func_uint16_t_u_u(g_188, g_140));
            for (g_629 = 0; (g_629 >= 21); g_629++)
            {
                short l_901 = 0xCBF6L;
                int l_930 = (-2L);
                int l_965 = 0x0DD434E9L;
                unsigned short l_1009 = 0UL;
                l_901 = ((safe_lshift_func_uint16_t_u_u(func_67(p_42, func_67(g_770, (l_900 = func_67((safe_lshift_func_uint16_t_u_s(g_770, g_708)), (((g_204 > (safe_rshift_func_uint8_t_u_u(p_43, 3))) <= func_67(p_43, g_708, l_812)) < 1UL), p_43)), g_108), l_812), 2)) == g_390);
                if ((((safe_rshift_func_uint16_t_u_s((((l_825 = (safe_div_func_int32_t_s_s(((+(g_361 >= l_825)) | (p_43 = (g_107 || (safe_div_func_int32_t_s_s(0x13A70B73L, (l_900 ^ l_838)))))), (~(g_514 != (g_180 = (safe_sub_func_int16_t_s_s((l_910 = 0x3C69L), l_889)))))))) < g_381) < l_889), 4)) , 1L) || 0L))
                {
                    const unsigned l_922 = 0xC20C5606L;
                    int l_931 = 0x0F77A0A8L;
                    g_297 = (safe_rshift_func_int16_t_s_s(l_901, 14));
                    g_188 = ((safe_lshift_func_int16_t_s_s(g_140, 14)) , (0x550238E1L ^ (l_812 ^ (-1L))));
                    if ((func_67((l_901 && (func_67(func_67(((((safe_mod_func_int16_t_s_s(g_140, g_135)) <= (((g_771 == (safe_unary_minus_func_uint32_t_u((p_43 , 0x57862973L)))) == (safe_lshift_func_int8_t_s_s(g_346, 6))) | (p_42 || func_67((((safe_div_func_uint8_t_u_u(0UL, 7UL)) , 0x663AL) != l_889), g_452, g_361)))) , g_107) , 9L), l_922, g_297), g_136, p_42) != l_922)), l_922, g_107) <= p_42))
                    {
                        l_931 = ((p_43 = p_42) >= ((safe_unary_minus_func_uint8_t_u(g_107)) >= (1L >= (safe_rshift_func_int16_t_s_s(func_67(((l_910 = 0UL) , (safe_add_func_uint8_t_u_u((l_922 <= ((l_930 = p_42) || (((p_42 && p_42) && func_67(l_930, g_346, l_922)) , 255UL))), 1UL))), g_326, p_42), 6)))));
                        l_910 = (safe_unary_minus_func_uint32_t_u((g_452 = l_922)));
                    }
                    else
                    {
                        const short l_933 = 0x01A6L;
                        g_297 = (g_148 = (l_889 != (((0x7D8CL >= l_933) > ((g_410 , func_67((l_922 ^ 1UL), l_930, g_204)) <= 2UL)) || 0xA8L)));
                        g_148 = (safe_div_func_uint8_t_u_u((((l_933 & (g_188 = (func_67(p_42, p_43, (g_771 , ((safe_add_func_uint8_t_u_u((((l_931 = p_43) <= func_67(l_900, l_910, (func_67(l_838, (p_42 != 0x5148E5CBL), g_629) == (-6L)))) ^ p_43), 0x49L)) || 0UL))) & 0L))) | g_136) == g_361), g_573));
                    }
                    if (g_771)
                        goto lbl_938;
                }
                else
                {
                    unsigned l_952 = 0x7C451063L;
                    int l_1028 = (-1L);
                    if ((0xB963L && (safe_lshift_func_int8_t_s_u((l_901 ^ (safe_add_func_int16_t_s_s(0x82A9L, (p_42 > (safe_rshift_func_int8_t_s_s(func_67((((l_825 || g_217) , (((safe_rshift_func_int16_t_s_s(l_930, 6)) != (((safe_add_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_u(l_825, ((l_951 = (g_771 = ((+p_42) ^ p_43))) , g_381))) & 0x74ECL) >= 0x84L), 0UL)) || 0x1C18L) , g_108)) | (-2L))) >= g_135), g_410, g_296), p_43)))))), l_838))))
                    {
                        short l_955 = 5L;
                        unsigned l_962 = 4294967293UL;
                        l_966 = (l_952 <= (((safe_rshift_func_uint8_t_u_u(((l_955 = func_67(p_43, g_771, (p_42 >= l_900))) , (l_965 = func_67((safe_div_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_div_func_int32_t_s_s((l_930 = ((g_180 != (((l_951 = l_962) >= (((safe_mod_func_int8_t_s_s(((l_816 ^ (-1L)) , 0x49L), 0x90L)) && 0x59L) && g_629)) <= l_910)) == g_180)), p_42)), g_771)), 5UL)), p_43, g_575))), g_135)) , 0x1C39L) || l_901));
                        g_188 = ((g_452 = l_967) ^ (l_825 = (-1L)));
                        l_951 = (safe_div_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((l_952 > (((l_930 = (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((func_67(((g_573 != ((safe_div_func_int32_t_s_s(l_965, l_889)) <= ((((safe_rshift_func_uint8_t_u_s(g_452, 6)) ^ ((((safe_sub_func_int16_t_s_s(l_910, p_42)) , ((g_253 = (p_43 >= p_43)) & g_982)) && 0xA5L) , l_812)) != 65530UL) ^ l_930))) ^ l_965), l_901, l_901) , p_43), 1)), g_629))) == p_42) < 0x832CL)), g_770)) >= 255UL), p_42));
                    }
                    else
                    {
                        return g_618;
                    }
                    if (l_930)
                    {
                        int l_1005 = 0xBDB55DAFL;
                        g_148 = (p_43 , (((safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((g_326 = (safe_add_func_uint32_t_u_u((safe_div_func_int8_t_s_s((p_42 , ((((safe_add_func_uint8_t_u_u((safe_div_func_int32_t_s_s(g_140, 4294967292UL)), ((((0xEAL & p_42) != (safe_sub_func_uint16_t_u_u((~((g_771 = (safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((l_966 , (safe_sub_func_uint8_t_u_u(((((safe_sub_func_uint16_t_u_u(0x15A0L, l_901)) , 1UL) | g_390) == p_43), l_901))), 10)), l_1005))) , g_690)), 0x29C9L))) >= g_346) <= 0L))) <= p_42) | l_1006) && 0UL)), g_627)), 2L))), g_690)), g_452)) , g_361) , l_952));
                        g_148 = ((safe_mod_func_uint16_t_u_u(l_1009, func_67(((-1L) != (!(((safe_sub_func_int32_t_s_s((func_67(((p_42 < (((safe_div_func_uint16_t_u_u(((p_43 || (((-4L) != (safe_lshift_func_uint16_t_u_s(0xACF7L, (l_838 ^ l_889)))) , (l_910 = func_67(p_43, g_296, l_966)))) <= g_514), 65535UL)) | g_486) == g_486)) == g_188), g_770, g_452) , g_107), 0x6BBE18B9L)) & 248UL) <= 0xB9661C57L))), p_42, l_967))) <= g_217);
                    }
                    else
                    {
                        return p_42;
                    }
                    l_910 = (safe_add_func_uint8_t_u_u((!((g_573 < ((safe_div_func_int16_t_s_s((l_1028 = (g_346 = (safe_sub_func_uint16_t_u_u(((g_217 >= 0x865A3311L) != (safe_lshift_func_uint8_t_u_s(func_67(p_42, p_43, (~g_217)), (safe_mod_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u((l_967 = g_188), l_1009)) | 0x02L) , p_42), 0x5E0AL))))), g_136)))), g_525)) & g_188)) != g_771)), (-2L)));
                    return p_42;
                }
                l_910 = (safe_unary_minus_func_int32_t_s((((p_43 , (safe_div_func_uint16_t_u_u(g_452, g_618))) , (safe_add_func_int32_t_s_s((((((((((l_825 | ((safe_div_func_uint16_t_u_u(l_967, (safe_lshift_func_int8_t_s_u((p_42 != (p_42 || (safe_lshift_func_uint16_t_u_u(l_966, (func_67(p_43, l_900, l_966) , p_43))))), p_42)))) & 8L)) | g_140) > l_825) < p_43) == g_296) , p_43) > l_1040) , l_965) == l_825), l_1040))) == g_140)));
            }
            if ((g_410 & (safe_div_func_uint16_t_u_u((func_67(g_297, p_42, l_889) | g_217), g_514))))
            {
                char l_1049 = 0L;
                int l_1067 = 0L;
                unsigned short l_1068 = 65535UL;
                for (p_43 = 0; (p_43 <= 15); p_43 = safe_add_func_uint8_t_u_u(p_43, 8))
                {
                    unsigned l_1046 = 0x2FA41210L;
                    int l_1047 = 0xE7108FEFL;
                    short l_1048 = 0x3648L;
                    int l_1050 = 0x1C58AF66L;
                    l_951 = ((l_910 = ((safe_unary_minus_func_uint8_t_u((func_67(l_1046, (l_1047 = 0x6AL), ((g_618 = ((((l_1048 , 5L) , p_42) ^ l_967) != ((l_1049 | g_381) , (l_1050 = g_108)))) != 0x5199DE58L)) != p_43))) != p_43)) > g_573);
                    for (g_708 = 0; (g_708 >= 53); g_708++)
                    {
                        return g_770;
                    }
                    l_1069 = (g_148 = ((g_135 < (p_43 || (safe_sub_func_int16_t_s_s((0L >= (0L > (g_452 = (g_204 == p_43)))), (l_1068 = ((safe_mod_func_uint16_t_u_u(((l_910 = ((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u(((l_951 , (l_1067 = (safe_lshift_func_int8_t_s_s(func_67((safe_sub_func_uint16_t_u_u((l_966 = (((l_816 >= (l_967 = 0x0CC58E34L)) | p_42) , l_951)), (-4L))), g_136, g_297), 5)))) || p_42), 9)) != 0x9BCDL) && g_140), l_1046)), 3)) < p_42)) > g_180), l_889)) >= 251UL)))))) <= 0UL));
                    if (p_43)
                        continue;
                }
            }
            else
            {
                short l_1078 = (-1L);
                l_951 = p_43;
                for (g_770 = 0; (g_770 <= 11); g_770++)
                {
                    unsigned char l_1072 = 255UL;
                    int l_1079 = 1L;
                    l_1072 = (p_42 , (l_825 == g_135));
                    if (l_889)
                        break;
                    l_1069 = (g_297 = func_67(((p_43 == p_43) ^ l_889), (safe_div_func_uint8_t_u_u(3UL, l_1075)), (l_951 = ((g_410 = (l_1072 , g_690)) < ((l_1079 = ((~(safe_mod_func_uint32_t_u_u(p_42, g_140))) , l_1078)) & g_573)))));
                }
                l_1080 = l_1075;
            }
        }
        for (l_1040 = 0; (l_1040 <= 17); l_1040 = safe_add_func_uint8_t_u_u(l_1040, 5))
        {
            return l_951;
        }
        if (p_43)
            break;
        l_951 = l_812;
    }
    return g_381;
}







static short func_50(unsigned char p_51, unsigned short p_52, unsigned p_53)
{
    unsigned l_799 = 7UL;
    int l_800 = 0L;
    if ((g_690 ^ p_51))
    {
        int l_803 = 0x42DCC766L;
        int l_804 = (-10L);
        l_800 = func_71(p_52, ((g_573 = p_52) , (l_799 >= func_80(g_148))), l_799, p_53);
        l_804 = ((safe_lshift_func_int8_t_s_s(l_803, 4)) , (-6L));
        g_108 = 0x406BC56DL;
    }
    else
    {
        int l_807 = 0x51456DDBL;
        l_807 = func_67(g_326, g_525, ((((func_80(g_346) , (safe_div_func_int16_t_s_s(l_807, (safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(0x6EL, p_53)), ((l_807 && g_390) > g_452)))))) >= 1L) >= l_807) , 0xFBAA393BL));
        g_361 = (l_807 != g_204);
    }
    return l_800;
}







static const unsigned func_63(int p_64, const unsigned char p_65)
{
    short l_84 = (-5L);
    int l_87 = 0xE57B790EL;
    const unsigned l_88 = 0xBFCC0C20L;
    int l_240 = 0xB1D2B3CBL;
    const char l_254 = 0x05L;
    short l_255 = (-6L);
    short l_306 = 9L;
    unsigned l_316 = 0x7A8C6F49L;
    const int l_345 = (-7L);
    char l_409 = 2L;
    short l_444 = 4L;
    unsigned short l_590 = 0x56A5L;
    unsigned l_593 = 0x455512B6L;
    unsigned l_646 = 0x5B7C3415L;
    const unsigned char l_670 = 248UL;
    int l_736 = 5L;
    unsigned short l_753 = 0xED80L;
    int l_762 = 0x6DF90514L;
    int l_769 = 0xFD953015L;
    int l_772 = 0xF09A65DBL;
    unsigned short l_795 = 3UL;
    if ((!(l_240 = func_67(g_8, func_71((((g_136 = (~(safe_mod_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u(func_80(((((safe_lshift_func_uint16_t_u_s((l_84 = 65535UL), 0)) != g_8) || ((~p_65) < ((l_84 , (safe_add_func_int32_t_s_s(0x0F13E0CAL, p_65))) && (((l_87 = g_8) == l_88) & l_84)))) , g_8)), l_88)) == 65534UL) > p_65), 0x3DL)))) , l_88) , g_111), p_64, l_88, l_88), p_64))))
    {
        char l_243 = 3L;
        int l_252 = 0xBD1D17AEL;
        int l_264 = 1L;
        int l_265 = 0x22A6EC6CL;
        unsigned l_266 = 0x19DA543BL;
        const unsigned short l_279 = 0xFD28L;
        char l_305 = 0x36L;
lbl_465:
        l_240 = (safe_sub_func_int8_t_s_s(((l_255 = ((l_243 , (g_253 = (safe_rshift_func_int16_t_s_s(((l_87 = ((func_67((g_140 && (!(g_136 > (func_80((safe_mul_func_int32_t_s_s(func_80(p_64), (((0xFDB6C3E7L > ((((g_188 && (p_64 & ((l_252 = 0xC7C8L) <= l_243))) && p_64) <= p_65) > l_240)) > l_240) > p_65)))) < 0xD834L)))), g_148, p_65) <= (-5L)) >= l_243)) >= l_243), 13)))) != l_254)) , p_65), g_136));
        if ((func_71(l_252, g_217, (g_107 = 7UL), (safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(((safe_add_func_int8_t_s_s((((safe_lshift_func_int8_t_s_s(l_243, ((l_265 = (l_243 && (l_264 = (~g_217)))) ^ l_252))) <= l_254) , l_266), 250UL)) , (-5L)), g_8)), g_204))) , g_253))
        {
            unsigned l_275 = 4294967293UL;
            int l_276 = 0L;
            l_252 = 0L;
            l_87 = (safe_rshift_func_int16_t_s_s(((g_180 = p_65) >= func_80(l_252)), g_188));
            l_276 = (func_80((((-8L) >= g_188) , (l_265 = (((0x4CL != (safe_div_func_uint16_t_u_u((l_252 <= ((safe_lshift_func_uint8_t_u_s(((((func_71((p_64 && 65534UL), (0x0E7AL && g_8), p_65, g_253) >= 0L) <= l_275) > p_65) > g_8), p_65)) | g_253)), p_64))) & 0xA9B3E444L) , g_188)))) & p_65);
        }
        else
        {
            int l_298 = (-1L);
            int l_300 = 1L;
            int l_327 = 0x7F0FC9F8L;
            int l_373 = 0xD82F6D4AL;
            l_252 = l_87;
lbl_370:
            if ((safe_lshift_func_int16_t_s_s(((func_67(g_135, (l_265 = l_279), p_64) , func_80((((g_107 < g_217) > (l_252 = 0x15A3L)) > (l_265 = ((safe_div_func_uint16_t_u_u((((((safe_mod_func_int32_t_s_s(g_135, 0x367CD0BFL)) || g_188) && l_88) & 0x25BC62C2L) && g_8), l_243)) <= g_135))))) <= 252UL), 10)))
            {
                short l_289 = (-1L);
                int l_331 = 7L;
                l_240 = (l_298 = ((safe_unary_minus_func_int16_t_s((g_297 = (safe_sub_func_int16_t_s_s(((p_64 , p_64) ^ ((safe_add_func_int32_t_s_s(l_289, g_217)) != p_65)), (l_264 , (safe_rshift_func_uint8_t_u_s(((safe_div_func_int8_t_s_s(((g_108 && (safe_mod_func_int16_t_s_s((g_296 = ((0xDDL < (g_253 < 0x71L)) >= g_111)), p_65))) ^ 2UL), p_64)) == 0xFC6BL), 5)))))))) > p_64));
                l_300 = (safe_unary_minus_func_uint8_t_u(0x72L));
                if (((safe_rshift_func_uint8_t_u_u(((((safe_sub_func_int8_t_s_s((p_64 , l_305), func_67(l_306, ((g_108 = (safe_add_func_uint32_t_u_u(0x321C0B2DL, p_65))) != (safe_unary_minus_func_int16_t_s((((+(g_111 <= ((safe_add_func_int8_t_s_s(l_87, ((p_65 & (0xD1L & g_8)) , g_135))) == g_140))) < l_243) > 0xAEL)))), p_64))) , g_180) > 4294967289UL) , g_136), l_306)) >= 0UL))
                {
                    short l_325 = 0xE2A5L;
                    int l_330 = 0x026B292DL;
                    if (p_65)
                    {
                        l_327 = (l_243 < (g_111 , (g_148 , ((~(((p_64 && (((safe_add_func_int32_t_s_s(l_316, g_135)) && (((safe_lshift_func_uint8_t_u_u((((g_326 = (safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((((g_217 || (((~(l_300 = (safe_div_func_uint32_t_u_u(g_297, p_65)))) != p_65) < l_325)) != 0xEA18A9D2L) || 0x64L) , g_188), l_298)), p_65))) > 0xE5L) == g_296), g_148)) , 0x9051D64CL) < p_64)) , 65530UL)) & 0UL) && g_111)) == l_289))));
                        g_188 = 0xF0C85766L;
                    }
                    else
                    {
                        l_240 = (g_108 = l_289);
                        l_330 = (safe_lshift_func_int8_t_s_u((-6L), l_325));
                        l_331 = l_298;
                    }
                }
                else
                {
                    return g_108;
                }
            }
            else
            {
                int l_342 = 0xEC95441FL;
                if ((g_297 = (l_300 , p_64)))
                {
                    l_265 = (-7L);
                }
                else
                {
                    unsigned l_337 = 0xD62C6697L;
                    g_188 = (((safe_unary_minus_func_uint16_t_u(((g_148 <= p_65) > (p_64 > ((p_64 != (3UL && ((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u((((l_265 = func_80(l_337)) < ((((safe_rshift_func_uint8_t_u_s(g_180, (safe_add_func_int16_t_s_s(((l_342 , 0UL) || 0x382C0D10L), l_337)))) , 0x57L) >= 0xE4L) == l_337)) , g_204), p_65)), 65535UL)) ^ p_64))) ^ g_148))))) > l_306) <= l_264);
                }
                g_188 = (safe_sub_func_uint16_t_u_u((g_107 & ((func_67(((l_342 , func_67(p_65, l_345, l_243)) != l_300), l_84, l_279) , 4294967291UL) == 1UL)), 0UL));
                l_327 = func_71(g_136, p_65, g_346, p_64);
                if (func_71(g_326, (l_243 == g_136), func_80(g_148), ((safe_mod_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(g_140, (safe_div_func_int8_t_s_s((safe_mod_func_int32_t_s_s((l_252 = 0xF3669557L), (p_64 ^ (((-7L) > g_253) != p_65)))), 0x6AL)))) , 0x33A6L), p_65)) , l_327)))
                {
                    l_252 = p_65;
                }
                else
                {
                    int l_368 = 7L;
                    int l_369 = 7L;
                    l_264 = 0x4D827149L;
                    l_369 = (l_300 = ((l_327 = ((safe_sub_func_uint32_t_u_u((((safe_mod_func_int16_t_s_s(g_361, (safe_lshift_func_uint16_t_u_u((p_65 > 0UL), ((+(g_296 = ((func_67((!(p_65 , g_326)), func_80((safe_lshift_func_uint8_t_u_s(p_64, ((l_265 , (g_346 , (safe_add_func_int16_t_s_s(func_67(l_254, p_65, p_64), 1UL)))) || p_65)))), g_148) , l_279) | 0x7F697AC6L))) , 0x166CL))))) <= g_136) | g_346), l_368)) && g_8)) , 0x97C399B7L));
                    if (l_306)
                        goto lbl_370;
                }
            }
            for (g_326 = (-19); (g_326 == 19); ++g_326)
            {
                l_265 = l_255;
            }
            if (func_71((l_373 = p_64), (p_64 < (safe_lshift_func_int16_t_s_u(1L, 6))), g_136, (l_327 = (g_346 = l_87))))
            {
                unsigned l_383 = 0xCC990364L;
                unsigned short l_420 = 0UL;
                int l_425 = (-1L);
                for (l_87 = 27; (l_87 >= (-10)); l_87--)
                {
                    int l_380 = 0xB363515BL;
                    for (g_148 = 0; (g_148 == 24); g_148 = safe_add_func_int8_t_s_s(g_148, 4))
                    {
                        return p_65;
                    }
                    if (l_380)
                    {
                        g_148 = func_80(g_381);
                    }
                    else
                    {
                        unsigned char l_382 = 0x0CL;
                        int l_391 = 0x2E6C3A0CL;
                        l_383 = l_382;
                        l_391 = (g_148 = (safe_rshift_func_uint16_t_u_s(g_111, ((safe_add_func_uint16_t_u_u((g_326 != l_87), l_380)) > (g_381 != (safe_rshift_func_uint8_t_u_s((g_390 = 0x37L), 7)))))));
                        return p_64;
                    }
                }
                if ((safe_add_func_uint16_t_u_u((((func_71(((((safe_lshift_func_int8_t_s_u((g_297 && g_381), 2)) > ((func_71(func_71((safe_sub_func_int32_t_s_s(g_8, (g_410 = (((safe_div_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(((safe_div_func_uint16_t_u_u((((g_135 != ((safe_unary_minus_func_uint8_t_u((p_64 < (safe_rshift_func_int16_t_s_u((l_409 > p_64), 1))))) ^ l_383)) == g_253) != g_346), 0x1C7AL)) <= p_64), p_64)) & l_264), g_180)), p_65)) , l_298) ^ l_254)))), g_217, l_383, l_327), p_64, p_64, p_65) , l_298) < g_381)) , 0x9016L) | g_411), l_316, g_411, g_253) <= (-7L)) , 0x49L) & (-6L)), p_65)))
                {
                    unsigned char l_416 = 0x7FL;
                    int l_419 = 0L;
                    l_265 = (g_381 , ((9L != 0x6564DB51L) , (p_64 && (safe_lshift_func_int16_t_s_u((((l_264 = func_67(((safe_div_func_int8_t_s_s((func_80(g_188) != g_204), (l_416 & (safe_mod_func_uint16_t_u_u((l_419 = 0x3ACAL), g_217))))) , p_64), l_383, p_64)) || g_361) , l_420), g_180)))));
                    for (g_188 = 0; (g_188 == 7); g_188 = safe_add_func_int8_t_s_s(g_188, 7))
                    {
                        if (p_64)
                            break;
                        l_425 = (safe_sub_func_uint16_t_u_u((0xA8B3L ^ 65535UL), func_67(l_383, l_383, (g_136 = g_381))));
                        if (g_217)
                            continue;
                    }
                    l_419 = (((((0UL > l_419) < (safe_sub_func_int32_t_s_s((safe_div_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u(g_296, (safe_div_func_uint8_t_u_u(l_373, ((safe_mod_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((p_64 > ((g_140 = (p_65 , (l_300 = (safe_add_func_int8_t_s_s(((l_425 = (65529UL == ((safe_div_func_uint32_t_u_u((((((safe_mul_func_int32_t_s_s(p_65, (p_65 <= p_64))) | 0x9CF4L) == l_416) , 1L) , 0xCA31306AL), 0x56E42DADL)) , (-1L)))) >= p_64), g_390))))) ^ l_416)) <= g_326), (-4L))), g_346)) , p_65))))) && p_65) != l_240), g_188)), 0x67C9084DL))) >= g_111) ^ 0L) != l_444);
                }
                else
                {
                    int l_445 = (-6L);
                    int l_450 = 0x3D5AC0A1L;
                    if (l_445)
                    {
                        int l_451 = 0xD4417AD1L;
                        l_265 = (g_361 != (((!(l_450 = (func_67((!(safe_mod_func_int16_t_s_s((g_346 = g_411), func_80((safe_sub_func_int8_t_s_s(p_65, ((((1UL | g_411) && ((1L | p_65) != (p_65 , p_65))) == g_108) >= 1UL))))))), p_65, l_298) == p_65))) & 5L) , p_65));
                        l_450 = g_8;
                        g_148 = (g_361 , (g_188 = l_266));
                        g_188 = (((((l_451 && ((func_80(p_64) < p_64) || (((g_452 = l_305) && (3L > ((safe_add_func_int8_t_s_s(p_64, ((((safe_add_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(g_108, 5L)) | p_65), g_204)) & 0xF2L) , g_217) & g_188))) > g_297))) & l_373))) | p_64) , g_381) | l_420) , 1L);
                    }
                    else
                    {
                        g_361 = p_64;
                        g_188 = ((safe_div_func_int16_t_s_s((l_240 = (65526UL && 1UL)), (l_264 = (safe_mod_func_uint16_t_u_u(func_67(((!((((g_253 >= p_64) , 0x4287L) || g_410) == (((+p_64) && (safe_div_func_int16_t_s_s((!(l_450 = (l_88 != p_65))), g_217))) & p_65))) , l_383), g_326, p_64), g_111))))) < 7L);
                    }
                    if (g_217)
                        goto lbl_465;
                }
                l_252 = (((0xEE6EL != l_306) && ((g_136 > p_64) ^ (((safe_rshift_func_int16_t_s_s((((safe_div_func_uint32_t_u_u(((((l_88 , 0xCD03L) | ((~p_65) & ((safe_div_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s(p_64)), (safe_unary_minus_func_uint32_t_u(((l_255 >= p_64) < p_65))))) , 0xA2L))) , (-1L)) || l_306), p_65)) != p_65) > l_425), g_180)) , g_253) && p_65))) == g_390);
            }
            else
            {
                unsigned l_474 = 0xCD880B42L;
                int l_475 = 1L;
                l_474 = p_65;
                l_475 = (8UL > p_64);
                l_265 = p_65;
            }
        }
        l_252 = (safe_lshift_func_uint8_t_u_s(l_316, 1));
    }
    else
    {
        int l_478 = 0x895F3961L;
        unsigned short l_479 = 1UL;
        int l_480 = 1L;
        int l_485 = 9L;
        unsigned l_534 = 0x7EBB6B82L;
        unsigned l_619 = 0xFF9E340CL;
        if ((((g_296 > l_478) < (l_480 = (g_410 = l_479))) >= (func_80(p_64) && ((g_486 = (safe_div_func_uint16_t_u_u(((((l_485 = ((p_64 != (l_240 = ((((safe_lshift_func_int16_t_s_s(p_64, 13)) || (p_64 != (l_478 , l_478))) <= p_65) || g_346))) , 0xD20DL)) < l_254) , l_479) , l_444), 0x644FL))) < p_65))))
        {
            unsigned char l_493 = 0UL;
            int l_496 = 1L;
            l_485 = (l_409 , p_64);
            l_240 = ((safe_sub_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u(p_64, (func_80((((safe_lshift_func_uint16_t_u_u((l_493 < (l_478 == p_65)), g_148)) == 0UL) | (safe_mod_func_int32_t_s_s(((l_496 = (l_88 , (-1L))) | 0x22A02EF0L), g_107)))) != 0x12L))) < l_316), p_65)) & g_346);
            if ((p_65 > l_254))
            {
                l_240 = p_64;
                return l_478;
            }
            else
            {
                unsigned char l_509 = 255UL;
                int l_513 = 0xA4A1F350L;
                for (g_346 = 0; (g_346 < 21); ++g_346)
                {
                    int l_508 = 0x32823728L;
                    if (func_80(g_217))
                    {
                        const unsigned char l_507 = 255UL;
                        int l_510 = 0xF6DFB5A8L;
                        l_510 = (func_71(g_411, (func_67(p_64, g_297, ((safe_rshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(g_108, 1UL)), g_108)) <= (safe_div_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((l_507 != (g_326 = l_485)), (l_508 == g_410))) && g_326), p_65)))) , l_485), l_509, l_509) , l_507);
                        g_108 = g_204;
                        if (p_65)
                            continue;
                    }
                    else
                    {
                        if (g_486)
                            break;
                        l_240 = (p_64 , p_65);
                    }
                }
                g_514 = (safe_div_func_int8_t_s_s(((p_65 | (l_513 = 65532UL)) && g_361), g_410));
                g_188 = (safe_sub_func_int32_t_s_s((p_65 >= (safe_sub_func_uint16_t_u_u((l_480 = (((l_496 = (func_80((p_65 == (l_513 = (safe_mod_func_uint16_t_u_u(p_64, g_410))))) , (g_180 >= (l_513 = (~(safe_div_func_uint32_t_u_u(g_390, g_361))))))) ^ g_514) == g_297)), g_217))), p_64));
            }
        }
        else
        {
            unsigned char l_543 = 0x75L;
            int l_563 = 0xBE60AB60L;
            int l_594 = 0x9F73D431L;
            int l_669 = 0L;
            unsigned char l_680 = 0UL;
            if ((l_480 , (((safe_rshift_func_uint16_t_u_u((((g_525 | ((g_486 <= (safe_sub_func_int32_t_s_s(p_64, (((safe_lshift_func_uint16_t_u_u((0xEE3FA67CL <= (l_480 = (((((+(safe_add_func_uint16_t_u_u(0xC73EL, p_64))) | (safe_add_func_int16_t_s_s(g_188, (g_381 >= 0x91D8L)))) == g_411) < l_534) | p_65))), 13)) && 0x9FL) || 0x4F491E00L)))) >= 0x8F8EF05FL)) , 255UL) && g_140), g_111)) || g_217) , p_64)))
            {
                unsigned short l_548 = 65535UL;
                int l_569 = 1L;
                int l_617 = (-1L);
                unsigned l_643 = 8UL;
                unsigned char l_668 = 252UL;
                for (g_411 = (-12); (g_411 < 21); g_411 = safe_add_func_uint16_t_u_u(g_411, 9))
                {
                    unsigned l_549 = 4294967288UL;
                    int l_570 = 0xBEE8C91DL;
                    l_485 = ((func_67(g_180, g_486, p_65) | p_65) , p_65);
                    for (g_111 = 0; (g_111 <= 48); g_111 = safe_add_func_uint16_t_u_u(g_111, 2))
                    {
                        g_148 = (safe_sub_func_uint16_t_u_u(func_67(l_84, (safe_sub_func_uint8_t_u_u(p_65, ((p_65 != (p_64 | (p_65 || (func_67(l_543, (((((safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(((g_361 != ((l_548 , l_543) , g_136)) > l_478), g_296)), g_140)) || 0L) | g_111) | p_65) , (-1L)), p_65) & p_65)))) == 0x8FB7L))), p_64), g_381));
                        if (l_549)
                            break;
                    }
                    if (p_64)
                    {
                        int l_552 = 0xA4B9FE7AL;
                        g_297 = (g_381 , func_67(((func_80(p_64) & ((safe_add_func_int16_t_s_s(l_552, ((~((~((0x08929981L & ((l_563 = (((l_552 || l_552) || ((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(l_485, (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(((l_316 && p_65) > 5UL), p_65)) > l_543), 3)))) | l_548), 0)), 5)) > p_65)) > (-4L))) ^ l_306)) >= l_84)) , g_390)) , g_296))) && p_64)) & l_549), p_65, g_217));
                    }
                    else
                    {
                        unsigned short l_568 = 1UL;
                        unsigned l_574 = 0x8A67D6D3L;
                        g_297 = (safe_lshift_func_uint16_t_u_u(p_64, (~(safe_add_func_int32_t_s_s(((l_485 = (((l_568 , func_67((g_297 , g_188), (((g_136 = (l_570 = (l_569 = 0L))) , ((func_67(g_111, ((5UL && (((l_480 = ((g_573 = ((l_87 = (g_180 = p_65)) & (safe_sub_func_uint32_t_u_u(0xB3AE4180L, g_411)))) || 0xFEL)) , l_568) , g_136)) >= 0x47E9L), l_569) == g_148) , p_64)) <= p_64), l_563)) | g_140) , g_326)) | l_574), g_410)))));
                        if (l_568)
                            continue;
                        g_361 = (g_575 <= (l_549 < (p_65 != ((~(safe_sub_func_int16_t_s_s(func_80(((safe_div_func_uint8_t_u_u(g_346, (g_107 , p_65))) , g_148)), (l_563 = ((0xB4914C5BL ^ 0x87892C08L) && 4294967288UL))))) & 255UL))));
                    }
                    g_108 = (!(safe_div_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((g_107 == ((l_543 >= (l_594 = (safe_add_func_int8_t_s_s((-8L), (l_563 = ((((((func_67(((p_65 && ((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(l_563, (l_590 = l_306))), func_67((func_67(g_361, (safe_sub_func_uint8_t_u_u(func_67(g_514, p_64, p_65), l_548)), p_64) , g_486), p_65, l_485))) ^ l_593)) != 0x9547L), p_65, p_65) == 1L) || 0UL) ^ p_64) ^ g_107) > p_65) != g_188)))))) ^ 246UL)) || g_108), p_64)) , (-1L)), l_478)));
                }
                l_485 = ((((g_297 = (safe_add_func_uint32_t_u_u((func_67((g_361 || (safe_sub_func_uint16_t_u_u(0x017EL, (safe_add_func_int16_t_s_s(0xB506L, g_381))))), (l_619 = ((((p_65 > (((safe_sub_func_uint8_t_u_u(((l_240 = ((safe_div_func_uint32_t_u_u(func_67(((safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((p_65 ^ (((g_135 = (safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((p_65 , (0xB3A8825EL != ((l_594 = (((((~(~g_217)) > p_65) >= p_65) == 4UL) == l_617)) > p_65))), p_64)), 3))) || g_108) ^ g_573)), g_346)), l_306)) ^ g_618), g_514, g_390), 1UL)) <= p_64)) != 0x54L), p_65)) | g_107) & 0UL)) , g_107) != l_543) & g_111)), g_107) , 6UL), 1L))) > 1UL) || 0x780ED2A0L) == 0x58F7B000L);
                g_361 = ((safe_unary_minus_func_uint32_t_u((g_297 && (safe_lshift_func_uint8_t_u_u(0x75L, (!((l_569 < (safe_sub_func_uint32_t_u_u((g_452 = (safe_add_func_uint8_t_u_u(g_627, (safe_unary_minus_func_uint32_t_u((g_525 <= func_67(g_629, g_410, p_65))))))), g_411))) != l_478))))))) , 1L);
                for (l_534 = 0; (l_534 > 29); ++l_534)
                {
                    short l_632 = (-10L);
                    int l_644 = 0x5704FA66L;
                    int l_645 = 0xC17C1646L;
                    l_645 = (l_632 , (safe_sub_func_uint8_t_u_u(255UL, (g_217 = (l_485 >= (safe_lshift_func_uint16_t_u_s(((l_563 = ((+(safe_sub_func_int16_t_s_s(l_548, (safe_lshift_func_int16_t_s_s(p_64, p_64))))) , ((((l_644 = ((l_643 = (safe_sub_func_int8_t_s_s(func_80(((7UL & l_479) , (g_136 = g_452))), p_64))) , p_65)) , 0x91F1L) ^ l_619) >= g_627))) & p_64), l_594)))))));
                    l_617 = func_80(l_646);
                    l_594 = ((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u((p_64 ^ g_253), 1)) , (((0UL == 0x0478L) ^ 0x7DDB4AF2L) && 1L)), 0xAB2DEBEFL)) , (safe_sub_func_uint16_t_u_u(0x6C21L, ((l_87 = ((safe_mod_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((((p_65 || p_65) >= l_87) && 4294967295UL), g_253)), 1L)) != 0UL)) >= l_590))));
                    l_563 = (safe_rshift_func_int16_t_s_u((func_67((func_67((((p_64 == (((((safe_unary_minus_func_int16_t_s(g_629)) ^ l_543) > ((l_669 = (safe_add_func_uint16_t_u_u((func_80(((l_645 == (func_80((safe_sub_func_uint32_t_u_u(7UL, ((func_67((g_381 = p_64), l_643, (((l_548 | (safe_sub_func_uint32_t_u_u((l_534 != p_64), 4294967295UL))) && p_64) < l_594)) ^ 0xBFL) > l_87)))) , l_668)) || p_64)) | p_65), g_326))) <= g_411)) ^ l_645) ^ l_485)) > 0xD734L) == l_594), l_670, p_65) > 0xA577CDF2L), p_65, g_326) == l_569), 3));
                }
            }
            else
            {
                short l_675 = 1L;
                int l_687 = 0L;
                unsigned l_723 = 4294967295UL;
                int l_745 = 1L;
                for (l_593 = 8; (l_593 != 17); l_593 = safe_add_func_uint32_t_u_u(l_593, 2))
                {
                    g_361 = (safe_div_func_int32_t_s_s(func_80(l_675), (g_411 , g_217)));
                    if (l_543)
                        break;
                    g_297 = (-1L);
                    for (g_296 = 0; (g_296 == 2); g_296 = safe_add_func_uint32_t_u_u(g_296, 1))
                    {
                        int l_691 = 1L;
                        g_361 = (safe_rshift_func_int8_t_s_u(g_326, 0));
                        l_240 = p_65;
                        l_691 = (((func_80((g_136 = l_593)) & (l_479 || ((l_680 = p_64) , g_188))) < (safe_mod_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((l_687 = g_525), l_480)), ((l_485 = ((safe_mod_func_int32_t_s_s(((l_543 != (0UL && p_65)) || (-7L)), g_253)) >= g_690)) , l_691))), l_646))) == 4294967286UL);
                    }
                }
                g_148 = (safe_add_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(func_80((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u(7L, 9)) != (((g_108 , p_65) | (((safe_lshift_func_int16_t_s_u(((((g_627 = 0x58DFL) , (((l_240 = ((g_708 = p_65) <= ((0xD901L & ((safe_sub_func_int8_t_s_s(((func_67((((l_480 = (safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(0L, 5)), l_485))) < 0x007BL) & g_107), p_65, g_135) >= g_690) || 65535UL), l_306)) == (-1L))) < l_255))) , 1UL) , (-4L))) >= g_140) == l_680), 4)) > g_217) & g_253)) != g_296)), l_444)), g_217)), p_64))), (-8L))), g_326)) | g_514), l_675));
                for (l_485 = 0; (l_485 != (-7)); l_485 = safe_sub_func_uint32_t_u_u(l_485, 5))
                {
                    int l_724 = (-10L);
                    int l_725 = 0x1F63F1DDL;
                    char l_726 = 0xD2L;
                    l_687 = p_65;
                    l_687 = func_71(func_67((safe_add_func_int32_t_s_s((l_480 = g_708), (safe_div_func_int16_t_s_s(p_64, ((g_108 = g_627) && (safe_add_func_uint16_t_u_u((((l_723 & func_80((g_627 >= 3UL))) , (l_725 = (l_724 = (func_80(g_296) | p_65)))) == p_65), g_296))))))), p_64, g_525), l_726, g_188, l_726);
                }
                l_745 = (safe_lshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u((safe_add_func_int32_t_s_s(g_188, (((safe_mod_func_int8_t_s_s(((g_326 = p_65) > 0x22D4L), (safe_unary_minus_func_int8_t_s((-1L))))) == func_80(l_736)) | 0xFFL))), (safe_sub_func_uint8_t_u_u((g_390 , ((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(((l_687 = g_296) , 0UL), 9)), p_65)), 1UL)) < 65535UL)), g_253)))), g_575));
            }
        }
        if ((safe_div_func_int32_t_s_s(0x861D7EA3L, (p_64 , (g_514 , (safe_lshift_func_int8_t_s_u(g_136, 6)))))))
        {
            const unsigned char l_750 = 255UL;
            l_87 = (g_180 && p_64);
            return l_750;
        }
        else
        {
            return p_64;
        }
    }
    l_736 = ((l_87 = func_67(func_67(p_65, p_65, g_346), ((safe_add_func_int16_t_s_s((+l_670), (((func_67(g_411, p_64, l_753) , 0xEBL) , g_629) < (-1L)))) == g_8), l_736)) || 0xDED6DD4AL);
    if ((safe_lshift_func_uint8_t_u_u(((g_486 = ((g_452 = ((g_135 = ((l_736 = ((p_65 , (safe_add_func_int32_t_s_s(((safe_div_func_int8_t_s_s(((safe_add_func_int16_t_s_s((g_135 > l_762), func_67(p_65, (((safe_add_func_uint8_t_u_u(((((l_240 = g_136) <= ((((g_771 = (g_297 > ((func_67(l_736, g_573, (((l_769 = ((((l_87 = (safe_rshift_func_uint8_t_u_u((((g_381 , 0xDDL) < 9UL) != g_361), 3))) | 0x0AFDL) > 0xDFL) >= g_188)) > g_770) != l_409)) , 0x408A5486L) ^ l_345))) > 5UL) ^ l_772) <= p_64)) <= l_254) , g_253), g_135)) > 0xC9FCD6B9L) , g_411), g_217))) ^ g_148), p_65)) <= (-1L)), p_65))) && g_410)) <= (-1L))) > l_670)) ^ g_297)) > g_8), g_108)))
    {
        char l_775 = 0x84L;
        int l_786 = 1L;
        l_786 = (safe_mod_func_int16_t_s_s((l_775 > ((safe_div_func_uint32_t_u_u(l_775, ((l_769 = (func_67(l_316, l_775, (safe_rshift_func_int8_t_s_s(func_67(func_71(((safe_div_func_int16_t_s_s(((l_87 = (safe_lshift_func_int8_t_s_u(g_346, 5))) | (l_762 = ((g_618 <= (((func_67(((g_771 == func_67((safe_div_func_uint16_t_u_u(((250UL <= p_65) | l_775), (-1L))), g_188, g_135)) , p_64), l_753, l_775) , g_452) , l_762) || p_65)) >= l_753))), g_381)) , 0x8CL), g_575, p_64, g_486), p_65, l_775), 5))) || g_140)) , 4294967286UL))) <= l_775)), p_64));
    }
    else
    {
        unsigned char l_790 = 0x2CL;
        int l_793 = 4L;
        int l_794 = 0x91FE1095L;
        l_87 = (safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s((l_736 = (((!(!((p_65 && (((((0x55AAL || ((4UL && ((((((l_790 = (g_452 == p_65)) <= ((((safe_lshift_func_uint16_t_u_u(2UL, p_65)) ^ 0x68L) > (l_793 = (l_345 | g_136))) || 0UL)) == l_794) == 0UL) < 0L) ^ 0x68L)) & g_8)) || l_793) ^ 0x3BL) >= l_795) ^ g_690)) , g_361))) , (-5L)) <= p_65)))), 0x56D0L));
    }
    for (g_390 = 0; (g_390 <= 1); g_390 = safe_add_func_int8_t_s_s(g_390, 5))
    {
        l_87 = (g_108 = 0x3B8AD0BEL);
        return g_107;
    }
    return p_64;
}







static int func_67(char p_68, const char p_69, int p_70)
{
    unsigned char l_239 = 0UL;
    l_239 = (+p_70);
    return g_107;
}







static char func_71(unsigned char p_72, short p_73, unsigned p_74, short p_75)
{
    unsigned short l_144 = 65535UL;
    int l_149 = 0xB7C33EA3L;
    int l_150 = 0xE941380AL;
    int l_151 = (-1L);
    int l_206 = 0xF66018A5L;
    int l_225 = 4L;
    for (p_75 = (-6); (p_75 < 14); p_75 = safe_add_func_uint8_t_u_u(p_75, 9))
    {
        short l_139 = 1L;
        int l_141 = 0L;
        unsigned char l_145 = 0UL;
        int l_152 = (-1L);
        int l_153 = 0L;
        int l_154 = 0x350E5C28L;
        g_140 = (g_108 = l_139);
        l_154 = (((l_149 = ((+(l_141 = p_72)) , (safe_mod_func_int8_t_s_s(((l_144 = g_8) || l_145), (safe_add_func_uint32_t_u_u(p_72, g_148)))))) != ((func_80((((l_152 = ((l_150 || ((-2L) & func_80((l_151 = 0xF58BFB5AL)))) == 2L)) != l_153) > l_150)) && g_108) , p_74)) , l_144);
        l_150 = (l_145 < l_152);
        if (p_72)
        {
            short l_155 = 0x8626L;
            int l_156 = 0xE046D479L;
            short l_161 = 0xAED2L;
            l_149 = (func_80(func_80(((l_139 , l_155) || g_108))) ^ ((l_156 || (safe_add_func_int8_t_s_s((((g_8 , ((l_152 == g_8) , p_75)) | p_75) != 0x419A621BL), g_136))) >= l_145));
            g_108 = ((g_135 != 0x39L) <= 4294967295UL);
            l_152 = (((g_140 = l_154) ^ (safe_lshift_func_uint16_t_u_u(l_161, 5))) != (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((((g_180 = (safe_lshift_func_uint8_t_u_u(g_136, (safe_div_func_int32_t_s_s((l_141 = l_156), (safe_add_func_int8_t_s_s(func_80(l_153), (0xB2D383E8L >= (l_139 || (safe_sub_func_int8_t_s_s(1L, p_75))))))))))) != l_151) < g_8), g_136)), g_8)) == 0xA12BL), g_8)), 0)), l_161)));
            g_148 = (l_152 = (g_188 = func_80((safe_div_func_uint32_t_u_u((safe_unary_minus_func_uint8_t_u((p_72 = (!(p_74 ^ (((safe_add_func_int16_t_s_s((0xE5FF1E6AL >= g_8), (safe_add_func_uint8_t_u_u(p_74, l_149)))) != l_156) && (((p_75 && func_80(g_180)) != 0x2CC4BC13L) , l_161))))))), l_156)))));
        }
        else
        {
            unsigned l_203 = 4294967291UL;
            int l_218 = (-1L);
            for (g_148 = 0; (g_148 < 17); ++g_148)
            {
                char l_200 = 3L;
                for (g_135 = (-12); (g_135 > 5); g_135++)
                {
                    if (l_154)
                        break;
                }
                for (l_153 = (-27); (l_153 == (-15)); l_153 = safe_add_func_int16_t_s_s(l_153, 1))
                {
                    unsigned l_199 = 5UL;
                    int l_205 = 0x2AFED350L;
                    g_108 = (safe_add_func_uint8_t_u_u((((g_135 | (!(((l_205 = (l_199 ^ ((l_200 = p_74) <= ((((p_73 & (safe_sub_func_uint32_t_u_u((((~l_151) , ((g_188 = l_203) , p_72)) >= ((l_149 = (g_148 != (~0x49L))) && g_180)), p_73))) == 65533UL) == g_204) >= l_199)))) >= l_203) | l_206))) , g_148) >= g_140), g_8));
                    if (((safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((l_203 ^ (l_205 , g_204)) , (safe_sub_func_int32_t_s_s(((l_218 = ((l_200 <= g_111) , ((safe_rshift_func_uint8_t_u_s(l_199, 0)) < (g_217 = (((safe_rshift_func_uint16_t_u_u(1UL, 4)) , p_75) != ((l_149 = 0x889745CEL) & p_75)))))) | (-1L)), 0xB99C00F1L))), l_199)), p_73)) != l_151))
                    {
                        char l_219 = 1L;
                        l_219 = 0x72B09FDDL;
                        g_188 = (safe_mod_func_int8_t_s_s((g_188 , (l_150 = (safe_unary_minus_func_uint8_t_u(((safe_add_func_uint16_t_u_u(l_225, func_80((g_136 ^ 0x47A3A9A0L)))) && ((safe_lshift_func_uint16_t_u_s(g_136, ((safe_div_func_int16_t_s_s(l_139, (safe_rshift_func_int8_t_s_s((g_111 | g_217), 7)))) >= (-9L)))) && p_72)))))), (-6L)));
                    }
                    else
                    {
                        int l_232 = 5L;
                        l_232 = p_74;
                        l_141 = g_217;
                    }
                    l_205 = (l_218 = (safe_mod_func_uint16_t_u_u(65535UL, p_73)));
                }
            }
        }
    }
    g_148 = (safe_mod_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((l_150 = (-1L)), (0xA0L && (g_217 = l_144)))), l_151));
    return l_206;
}







static const char func_80(int p_81)
{
    short l_95 = 0x02CAL;
    int l_106 = 4L;
    int l_109 = (-2L);
    int l_110 = 0xD461CFA8L;
    unsigned l_130 = 4294967295UL;
    char l_133 = (-1L);
    unsigned l_134 = 0xB2A2CB73L;
    if ((g_111 = (safe_sub_func_uint16_t_u_u((l_110 = (l_109 = ((g_108 = (g_107 = (l_106 = (safe_mod_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(l_95, (safe_rshift_func_uint16_t_u_u(g_8, g_8)))) | ((safe_mod_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((p_81 ^ 7UL), (p_81 == (safe_mod_func_uint32_t_u_u(l_95, (((p_81 | ((safe_add_func_uint8_t_u_u(0x5AL, g_8)) <= l_95)) , p_81) , l_95)))))) <= g_8), g_8)) , g_8)), g_8))))) | 0xD25FL))), g_8))))
    {
        short l_118 = (-1L);
        int l_119 = 0L;
        unsigned char l_120 = 1UL;
        l_119 = ((((safe_div_func_uint8_t_u_u(((l_95 , (g_107 , (g_108 == (l_106 < (safe_sub_func_int8_t_s_s((+5L), ((((p_81 != (((((((p_81 | l_95) | ((l_118 < 0xDFL) > g_108)) < 3L) != g_8) != 0xDDL) < p_81) != 0x15A5982EL)) , g_108) | 0UL) < p_81))))))) < 0xB4L), l_95)) <= p_81) || p_81) & 0x2F72L);
        l_120 = g_108;
    }
    else
    {
        unsigned l_121 = 0x4ACF1AFCL;
        g_108 = (l_121 > (g_8 >= g_111));
        return p_81;
    }
    g_135 = (l_106 , (safe_mod_func_int8_t_s_s(((!g_111) < (safe_div_func_int32_t_s_s(((l_106 = 253UL) ^ ((safe_rshift_func_int8_t_s_s((l_133 = ((((((l_110 >= (g_108 = g_8)) , ((safe_rshift_func_uint16_t_u_s((((g_8 <= l_130) >= ((-7L) && (safe_lshift_func_int16_t_s_s(l_130, 1)))) == p_81), p_81)) >= p_81)) ^ 0xC0L) > g_111) && 9UL) , 0x16L)), 4)) || 0x28E4L)), 0x388EEC89L))), l_134)));
    return l_133;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_297, "g_297", print_hash_value);
    transparent_crc(g_326, "g_326", print_hash_value);
    transparent_crc(g_346, "g_346", print_hash_value);
    transparent_crc(g_361, "g_361", print_hash_value);
    transparent_crc(g_381, "g_381", print_hash_value);
    transparent_crc(g_390, "g_390", print_hash_value);
    transparent_crc(g_410, "g_410", print_hash_value);
    transparent_crc(g_411, "g_411", print_hash_value);
    transparent_crc(g_452, "g_452", print_hash_value);
    transparent_crc(g_486, "g_486", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    transparent_crc(g_525, "g_525", print_hash_value);
    transparent_crc(g_573, "g_573", print_hash_value);
    transparent_crc(g_575, "g_575", print_hash_value);
    transparent_crc(g_618, "g_618", print_hash_value);
    transparent_crc(g_627, "g_627", print_hash_value);
    transparent_crc(g_629, "g_629", print_hash_value);
    transparent_crc(g_690, "g_690", print_hash_value);
    transparent_crc(g_708, "g_708", print_hash_value);
    transparent_crc(g_770, "g_770", print_hash_value);
    transparent_crc(g_771, "g_771", print_hash_value);
    transparent_crc(g_982, "g_982", print_hash_value);
    transparent_crc(g_1088, "g_1088", print_hash_value);
    transparent_crc(g_1097, "g_1097", print_hash_value);
    transparent_crc(g_1101, "g_1101", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
