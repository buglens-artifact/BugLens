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



static int g_2 = (-7L);
static unsigned char g_67 = 252UL;
static unsigned short g_83 = 0xF95DL;
static unsigned g_85 = 4294967295UL;
static unsigned g_86 = 0xD171CF63L;
static int g_90 = 0xF85E685AL;
static unsigned g_132 = 4294967290UL;
static unsigned g_175 = 6UL;
static short g_176 = 5L;
static const unsigned short g_183 = 0x13A2L;
static char g_191 = 1L;
static short g_198 = 0x45EBL;
static short g_212 = 0x25EFL;
static int g_213 = 0L;
static unsigned short g_290 = 0x5EE9L;
static unsigned short g_359 = 0x50C5L;
static int g_395 = (-1L);
static int g_396 = 2L;
static int g_403 = 4L;
static unsigned char g_621 = 248UL;
static unsigned short g_746 = 0xCD8BL;
static unsigned short g_818 = 65535UL;
static unsigned g_894 = 0x54AE473AL;



static unsigned func_1(void);
static unsigned short func_16(unsigned p_17, unsigned short p_18, int p_19);
static char func_20(const unsigned p_21, int p_22, short p_23, unsigned short p_24, unsigned p_25);
static short func_41(char p_42, const unsigned char p_43, short p_44);
static int func_53(const short p_54, char p_55, char p_56, unsigned char p_57);
static int func_74(short p_75, unsigned p_76, char p_77, unsigned char p_78, unsigned p_79);
static unsigned func_93(unsigned short p_94, unsigned p_95, unsigned char p_96);
static char func_106(unsigned char p_107, unsigned p_108, unsigned short p_109, short p_110, unsigned short p_111);
static unsigned func_113(int p_114, int p_115, int p_116, char p_117, int p_118);
static int func_123(const char p_124, unsigned char p_125);
static unsigned func_1(void)
{
    short l_5 = 0x7222L;
    int l_6 = 0xA9565E08L;
    int l_799 = 0xECF26CE9L;
    short l_895 = 0x09F9L;
    unsigned short l_896 = 0xC377L;
    int l_974 = 0x9F102B19L;
    unsigned char l_975 = 1UL;
    unsigned short l_976 = 0x4B5FL;
    unsigned char l_977 = 255UL;
    for (g_2 = 0; (g_2 > 14); g_2++)
    {
        unsigned l_14 = 4294967295UL;
        short l_841 = (-4L);
        int l_845 = 0x81309EF5L;
        int l_871 = 1L;
        char l_890 = 0x11L;
        if ((g_2 < 0xC3C69AEDL))
        {
            unsigned char l_15 = 248UL;
            l_5 = (-8L);
            l_6 = g_2;
            for (l_5 = (-17); (l_5 >= 19); l_5++)
            {
                char l_26 = (-3L);
                int l_725 = (-9L);
                int l_770 = 9L;
                if ((((safe_add_func_uint16_t_u_u((((safe_unary_minus_func_uint32_t_u((safe_sub_func_uint32_t_u_u(0UL, l_14)))) <= g_2) | 0L), (l_15 | (((+(((((func_16(g_2, (l_6 >= func_20((l_26 <= (~((safe_sub_func_int8_t_s_s(g_2, (-1L))) , g_2))), g_2, l_5, g_2, g_2)), g_2) , 0L) && g_175) > (-8L)) != l_14) > 3L)) , l_26) >= g_396)))) || g_213) >= g_359))
                {
                    unsigned char l_724 = 0xEBL;
                    unsigned short l_757 = 65533UL;
                    for (g_198 = 0; (g_198 <= (-30)); g_198--)
                    {
                        if (l_6)
                            break;
                        g_395 = (((l_5 != ((l_724 , l_6) , ((+g_191) >= g_198))) || 247UL) >= g_90);
                    }
                    l_725 = l_5;
                    g_403 = (safe_add_func_int8_t_s_s((((safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s((((((safe_sub_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((g_86 & (((safe_sub_func_int16_t_s_s(g_191, ((!(safe_mod_func_uint8_t_u_u((((g_403 > g_359) >= g_212) & (safe_lshift_func_uint8_t_u_s(l_724, ((g_90 , g_746) , (-9L))))), l_724))) > g_183))) == (-5L)) , l_724)), 249UL)), 2)), g_67)) && 65535UL), 0x5F7C773AL)) && l_26) != 0x8B89C93DL) , l_5) , g_90), l_26)), 0xB4L)) , l_724) , l_14), l_14));
                    g_403 = ((g_67 && ((safe_rshift_func_int16_t_s_u((((((0xACA2C57DL <= (((safe_sub_func_int32_t_s_s(l_14, func_74((safe_rshift_func_uint16_t_u_s(((l_26 < l_15) , 0xA704L), g_191)), (g_213 || (safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(func_20((65535UL && 0xFD72L), g_396, g_132, g_290, g_359), 0x1BL)), 15))), l_26, g_395, g_396))) , l_757) >= g_396)) ^ 255UL) & l_14) , l_14) < g_132), l_724)) > 1UL)) , l_757);
                }
                else
                {
                    unsigned l_771 = 4294967295UL;
                    int l_772 = 0x821C3278L;
                    for (g_212 = 23; (g_212 > (-6)); g_212 = safe_sub_func_int32_t_s_s(g_212, 2))
                    {
                        g_213 = (~func_74(g_621, (+l_5), ((l_5 == l_15) > (g_198 || ((safe_rshift_func_int16_t_s_s(g_90, l_6)) != (((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(g_183, 6)) >= (((l_770 >= l_14) > g_403) <= l_771)), l_772)) | g_86), 3)) == l_6) < 0x9D7DL)))), g_290, l_15));
                    }
                    if (g_175)
                    {
                        unsigned short l_774 = 0x855FL;
                        g_403 = (safe_unary_minus_func_uint16_t_u((+(((((l_774 , (6L && ((((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(0x9B1BL, g_212)), l_770)) == l_14) , l_26) && (l_774 && (safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((g_176 > 1L), 3)), l_6)))))) < g_198) & 0x10L) , g_212) < l_14))));
                        if (l_770)
                            break;
                    }
                    else
                    {
                        g_403 = g_183;
                    }
                    l_6 = ((safe_mod_func_uint16_t_u_u(l_14, g_90)) , ((((safe_mod_func_int16_t_s_s(l_15, 1L)) | (safe_lshift_func_int16_t_s_s(func_123(g_213, l_5), 3))) <= (safe_lshift_func_uint8_t_u_s(((l_26 == 0xDFL) | 0L), 6))) , l_771));
                }
                return l_26;
            }
        }
        else
        {
            char l_791 = 0xCAL;
            unsigned l_842 = 0xEEC8018CL;
            int l_874 = (-1L);
            if ((~l_791))
            {
                const unsigned l_794 = 0xD7B46F81L;
                g_213 = ((safe_lshift_func_uint8_t_u_s(0x31L, 3)) || l_794);
                return g_2;
            }
            else
            {
                unsigned char l_815 = 0x66L;
                int l_855 = 0xE2931374L;
                g_403 = l_791;
                for (g_621 = 0; (g_621 > 48); g_621 = safe_add_func_uint32_t_u_u(g_621, 2))
                {
                    if (l_791)
                        break;
                    for (l_5 = 0; (l_5 < 10); ++l_5)
                    {
                        return g_175;
                    }
                    g_403 = (l_799 ^ (safe_rshift_func_uint8_t_u_s((~0xA6L), (9UL || (safe_rshift_func_int8_t_s_u(g_621, 5))))));
                    g_403 = l_791;
                }
                g_395 = g_90;
                for (g_403 = 0; (g_403 < (-13)); g_403 = safe_sub_func_uint16_t_u_u(g_403, 8))
                {
                    unsigned char l_808 = 0xACL;
                    short l_858 = 0x42BEL;
                    unsigned char l_867 = 0UL;
                    g_395 = ((safe_rshift_func_uint8_t_u_u(l_808, ((((((safe_add_func_int16_t_s_s(((l_799 || 0UL) , (safe_mod_func_uint32_t_u_u(((((l_808 != (safe_mod_func_uint16_t_u_u(0x5828L, func_53(g_359, l_815, (safe_lshift_func_uint16_t_u_u(((g_198 , (g_403 , l_815)) > l_14), g_818)), l_791)))) | 254UL) , l_5) <= 0x3299L), l_791))), g_396)) < g_90) && g_183) < 255UL) , g_85) && l_5))) & l_808);
                    for (l_791 = (-19); (l_791 != (-30)); l_791 = safe_sub_func_int16_t_s_s(l_791, 8))
                    {
                        int l_826 = (-9L);
                        g_213 = (func_74(((func_53(l_815, ((safe_unary_minus_func_uint16_t_u((safe_sub_func_int32_t_s_s(g_191, (safe_sub_func_int16_t_s_s(g_90, (l_826 , (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(g_396, (l_826 > ((((safe_mod_func_uint8_t_u_u(0UL, (((l_815 <= g_85) , l_791) || g_621))) >= l_826) , l_791) > g_67)))), 0xFD5D94A8L))))))))) , 0x7DL), g_746, g_359) , l_808) && g_395), g_67, g_290, l_791, l_808) < l_5);
                        l_845 = (safe_lshift_func_int16_t_s_u((0x10439E71L != func_113((g_359 , ((safe_lshift_func_uint16_t_u_s(g_83, 13)) && g_83)), l_808, func_53((safe_sub_func_int32_t_s_s(((((g_191 , func_113((safe_mod_func_uint32_t_u_u(l_841, ((l_842 && ((safe_lshift_func_int8_t_s_s(l_808, 5)) , l_842)) ^ g_86))), l_826, g_176, g_359, l_842)) ^ l_808) <= g_90) > g_2), l_841)), l_815, g_90, l_815), l_842, g_213)), 8));
                        l_855 = ((((safe_sub_func_int8_t_s_s(l_815, g_83)) > (!(safe_mod_func_int16_t_s_s(l_841, 0x6B38L)))) , g_621) < ((safe_unary_minus_func_uint16_t_u((((0L || ((safe_rshift_func_int8_t_s_u((-3L), 3)) , (safe_add_func_int16_t_s_s((((~l_808) ^ (1UL == g_83)) <= l_815), l_14)))) ^ g_176) == l_826))) < g_175));
                        l_855 = l_14;
                    }
                    if ((safe_add_func_uint32_t_u_u(((func_41((g_359 , 1L), g_213, (+l_858)) , (l_5 , ((safe_add_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((l_845 == ((safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s((9UL ^ (l_815 < l_867)), g_86)), g_183)) & l_799)), g_746)) && l_858), l_855)) | g_83))) == l_845), g_395)))
                    {
                        short l_868 = 0x0B48L;
                        g_213 = 0x2B7F10EDL;
                        g_213 = g_395;
                        g_395 = l_868;
                    }
                    else
                    {
                        if (l_815)
                            break;
                    }
                }
            }
            l_874 = ((((safe_rshift_func_int8_t_s_u(((func_113((g_290 < 0xAC8CE000L), l_5, l_791, l_871, (safe_mod_func_int8_t_s_s(func_53(((0x27L == l_871) , (l_791 | 1UL)), l_791, g_67, g_212), l_5))) & (-2L)) , l_5), 4)) >= l_799) ^ 255UL) | 0x4839A828L);
            for (g_175 = (-11); (g_175 == 1); g_175 = safe_add_func_int16_t_s_s(g_175, 2))
            {
                l_845 = (((func_74(g_67, l_845, g_213, l_842, g_83) & l_5) == 0xD3L) == (g_90 >= g_132));
                for (l_845 = 0; (l_845 > 29); ++l_845)
                {
                    int l_882 = 0L;
                    for (l_5 = 0; (l_5 <= 21); l_5 = safe_add_func_uint16_t_u_u(l_5, 2))
                    {
                        unsigned l_881 = 4294967293UL;
                        l_874 = (g_83 ^ l_874);
                        g_213 = l_881;
                    }
                    g_403 = g_403;
                    if (l_882)
                    {
                        g_213 = l_14;
                    }
                    else
                    {
                        g_395 = l_882;
                        g_213 = 0x7732C602L;
                        if (g_212)
                            break;
                        g_395 = 0xFBCF84C6L;
                    }
                }
            }
        }
        if (func_41(l_14, (safe_rshift_func_int16_t_s_s((((0x16L == l_5) && (0x62L <= (g_818 && (g_213 <= (251UL != (l_841 ^ ((func_123((g_621 > g_67), l_5) || l_871) | g_175))))))) & g_395), l_6)), l_14))
        {
            if (g_85)
                break;
        }
        else
        {
            if (l_845)
                break;
        }
        l_871 = (l_14 , (((safe_mod_func_int32_t_s_s((safe_unary_minus_func_int8_t_s(l_890)), (func_41(l_6, (l_841 == 0xE3L), ((func_16(((((safe_sub_func_uint16_t_u_u((g_175 , (~g_183)), ((((((((l_799 , ((safe_unary_minus_func_uint16_t_u(l_6)) <= 0xA3L)) , 0x318EE37AL) > g_894) == g_212) & 4294967293UL) ^ 65529UL) != l_895) >= 0x0614B800L))) != 0xDFL) > g_396) || g_818), l_896, l_14) || g_403) != l_841)) ^ 4UL))) && 0xC770L) ^ g_746));
    }
    if (g_894)
    {
        unsigned char l_899 = 0xD8L;
        int l_904 = 0x06B858A2L;
        l_904 = func_113(l_6, ((((safe_rshift_func_uint16_t_u_u((((l_899 , g_621) && g_213) , ((func_74((g_212 && (safe_mod_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((l_5 | (+((l_899 <= l_899) | l_899))), 0)) != g_818), g_198))), l_895, g_198, g_746, g_212) ^ 0x202777B0L) > g_359)), l_895)) ^ (-1L)) , g_621) != 0xF9L), g_818, g_67, l_899);
        l_6 = l_895;
        l_904 = (g_86 , g_396);
        g_403 = g_86;
    }
    else
    {
        unsigned short l_907 = 0x934EL;
        unsigned l_916 = 4294967295UL;
        int l_951 = 0xDA1DC1B4L;
        int l_967 = 8L;
        for (g_132 = 0; (g_132 >= 18); ++g_132)
        {
            return l_907;
        }
        g_2 = ((((((safe_mod_func_uint16_t_u_u(func_123(((safe_mod_func_int8_t_s_s(g_132, g_198)) , (((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((g_396 == func_113(func_106(l_6, ((l_916 && (-1L)) , ((l_916 & (g_395 ^ (safe_rshift_func_int16_t_s_u(g_67, 9)))) | 7L)), g_85, l_916, g_198), l_916, l_916, l_5, g_818)), 0)), g_2)) < g_90) >= l_907)), g_2), 2L)) ^ l_6) || 1L) || l_799) , 0x90L) <= 0x9AL);
        for (g_894 = 21; (g_894 >= 36); g_894 = safe_add_func_int8_t_s_s(g_894, 2))
        {
            int l_937 = 0x5C7C388AL;
            int l_950 = 0xCAA8F283L;
            unsigned l_952 = 1UL;
            unsigned l_957 = 1UL;
            unsigned l_958 = 0xF4F57C43L;
            g_403 = (l_895 ^ ((safe_add_func_int32_t_s_s(l_799, g_198)) || g_83));
            l_6 = (((safe_mod_func_uint8_t_u_u((((((func_16((safe_sub_func_uint8_t_u_u(g_359, (safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((g_183 > (safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(l_937, 5)), 10))), 1)), (((safe_sub_func_int16_t_s_s(func_74(((g_83 == l_937) < 0x86L), (g_359 < (l_937 != 0x20L)), g_67, g_2, g_403), l_937)) == 0x649824D7L) , g_894))), 3)))), g_396, l_916) != (-1L)) | (-10L)) >= g_90) <= (-4L)) && l_907), g_621)) != 9L) , 0xAAB95725L);
            g_403 = func_74(l_907, (safe_sub_func_uint32_t_u_u((~(safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(g_191, l_895)), (safe_rshift_func_uint8_t_u_s((0x6C63BC0BL == 0L), 0))))), ((g_176 ^ g_2) == g_67))), func_20(((safe_mod_func_uint32_t_u_u((l_6 != g_183), 4294967290UL)) || g_403), l_907, l_950, l_5, l_799), g_290, l_937);
            l_958 = ((l_5 >= (l_951 , (func_74(g_183, (((l_952 & (func_53(l_916, func_16(func_106((safe_lshift_func_uint8_t_u_u(l_6, 2)), g_191, (safe_add_func_uint16_t_u_u(g_183, ((1UL > l_957) <= g_175))), g_85, g_176), l_952, l_895), g_621, g_132) | g_90)) >= 0xE264L) <= g_2), g_90, g_183, g_183) || l_937))) , l_951);
        }
        g_403 = ((g_621 ^ (g_2 < l_951)) , ((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_s((l_967 , (safe_add_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(l_799, (5UL < 1UL))) <= ((((func_106((safe_sub_func_int16_t_s_s((l_974 ^ l_951), 0x3D46L)), g_175, g_818, l_975, l_974) <= 1L) ^ 0xB4C9L) || (-5L)) | 4L)), 0UL))), l_907)) || 65535UL) , 5UL), l_976)), 4)), l_895)) && 0x8BL));
    }
    g_213 = (!((+((l_977 >= l_5) , ((l_896 , g_83) , g_2))) , (safe_add_func_uint8_t_u_u(l_896, (g_396 && g_176)))));
    return g_746;
}







static unsigned short func_16(unsigned p_17, unsigned short p_18, int p_19)
{
    char l_32 = 0L;
    int l_379 = 1L;
    const int l_423 = 1L;
    unsigned short l_477 = 6UL;
    unsigned char l_495 = 0xC3L;
    int l_496 = 0xE693AD60L;
    int l_553 = 1L;
    unsigned short l_587 = 65535UL;
    int l_632 = 0x22000654L;
    unsigned l_651 = 0x6DF99078L;
    char l_652 = (-4L);
    char l_712 = (-7L);
    for (p_19 = 2; (p_19 < 12); p_19 = safe_add_func_uint16_t_u_u(p_19, 6))
    {
        int l_38 = 0xA81F6ED7L;
        int l_456 = 8L;
        unsigned l_458 = 0xD403DDEDL;
        l_32 = p_18;
        for (p_18 = 22; (p_18 <= 11); p_18--)
        {
            unsigned l_35 = 4294967295UL;
            int l_408 = (-4L);
            unsigned short l_417 = 65528UL;
            unsigned l_457 = 0x1452EECAL;
            l_379 = (l_35 || (((!(func_20((safe_rshift_func_uint16_t_u_s(0UL, func_20(func_20((0xE11771B7L != (l_38 || func_20(((safe_lshift_func_int16_t_s_s(g_2, func_41(g_2, (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s(g_2, func_20(((safe_rshift_func_int8_t_s_u(9L, (0x23917005L & l_35))) , 0xB1495DD6L), g_2, g_2, p_17, p_18))), 6)), l_32))) == (-5L)), g_2, l_38, p_17, g_359))), g_2, g_2, p_18, g_132), g_183, l_35, p_17, p_17))), l_35, g_90, p_18, g_90) > l_35)) , g_132) >= g_132));
            l_379 = (-10L);
            if (p_19)
            {
                g_213 = l_32;
            }
            else
            {
                int l_394 = 0x1EA96E3CL;
                int l_413 = 8L;
                unsigned short l_414 = 0xC4CEL;
                unsigned char l_439 = 1UL;
                if ((safe_sub_func_uint8_t_u_u(p_17, p_19)))
                {
                    int l_393 = 0x9CEDBF01L;
                    if (p_18)
                        break;
                    l_38 = (((safe_mod_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(g_359, p_19)) , p_18), (((65530UL > (p_19 > ((((func_20((safe_unary_minus_func_int8_t_s((safe_add_func_int16_t_s_s(((p_18 < (safe_lshift_func_int16_t_s_u(((func_113(g_83, l_393, l_394, l_379, p_19) | p_18) < 0UL), 8))) & g_359), g_212)))), l_38, l_38, l_35, p_17) <= l_32) , p_18) ^ g_395) | l_35))) == g_85) & 0x5ECBL))) ^ g_175), g_183)) ^ g_396) , p_17);
                    if (((((safe_rshift_func_uint16_t_u_u(((g_83 ^ func_20((safe_rshift_func_uint16_t_u_u((((p_17 && ((0xFD2FL ^ ((+(-9L)) ^ (safe_lshift_func_uint16_t_u_s(((l_394 & func_53((g_2 ^ (func_113((((g_403 <= ((p_19 >= ((0x54L ^ g_395) != 0L)) , p_19)) , l_393) == 0x64C9L), l_38, l_393, l_35, g_183) < p_17)), l_394, p_18, g_175)) || p_18), l_32)))) ^ l_32)) != (-7L)) > p_18), 7)), p_18, g_396, l_32, l_379)) , p_18), 4)) , 65535UL) ^ p_17) > 0xE1B90CF8L))
                    {
                        return p_19;
                    }
                    else
                    {
                        g_213 = ((safe_mod_func_uint8_t_u_u(g_86, 0xA1L)) , g_86);
                        l_408 = (safe_sub_func_uint32_t_u_u(p_18, 4294967295UL));
                        l_393 = (!(!(l_32 , (safe_rshift_func_uint16_t_u_u(func_106((safe_lshift_func_int8_t_s_u(((((g_403 == p_19) , ((l_32 ^ g_176) ^ l_393)) && (+l_35)) < ((0xB0D78328L >= (p_18 , g_85)) == p_17)), 2)), g_85, l_393, l_394, g_396), 4)))));
                        return p_19;
                    }
                }
                else
                {
                    unsigned short l_422 = 9UL;
                    int l_426 = (-10L);
                    l_413 = g_395;
                    g_403 = (((255UL | ((l_414 >= ((!(((g_183 > func_93((safe_lshift_func_uint16_t_u_s(((((((g_191 , p_17) , l_417) > 0x3492L) , (safe_add_func_uint16_t_u_u((~p_19), ((safe_sub_func_uint32_t_u_u(func_20((g_67 == p_18), p_19, l_422, p_18, p_17), 0xB26A752FL)) < 2UL)))) || 4294967294UL) , 65535UL), 14)), l_32, l_408)) & g_290) == g_183)) & l_423)) , l_408)) > p_18) , g_290);
                    l_426 = (safe_mod_func_int32_t_s_s((-1L), g_86));
                }
                for (l_35 = (-21); (l_35 == 22); l_35++)
                {
                    l_38 = (((l_417 != (g_395 | (((safe_rshift_func_uint16_t_u_u(0x5C06L, p_18)) , func_41(((g_176 , (safe_add_func_uint32_t_u_u(l_38, (0xACL > ((safe_rshift_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(g_132, 8)), 4)) & g_191) != g_2), g_359)) & (-1L)))))) & l_38), g_396, p_19)) ^ g_403))) | p_18) != g_132);
                }
                l_38 = ((l_439 | 0x1243464CL) == ((+(safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(p_19, ((((safe_rshift_func_uint8_t_u_u(g_212, 4)) , (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(func_123(g_359, ((func_106(l_379, (safe_add_func_uint8_t_u_u(p_19, ((safe_lshift_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u((((g_395 , (func_106(g_83, p_19, l_456, g_359, p_19) > p_18)) >= p_18) ^ l_394), 1L)) || g_395) , 4UL), l_457)) < l_458))), l_32, g_290, g_132) > p_17) && p_19)), g_396)), l_38))) < g_403) , 0x7479L))), 13))) , l_394));
            }
        }
    }
    if (((safe_lshift_func_int8_t_s_u((((((safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((func_74((((safe_rshift_func_uint16_t_u_u(l_379, ((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(g_90, 0)) || ((safe_add_func_int32_t_s_s(0x74A68DBBL, g_67)) , (func_113(l_32, p_19, p_17, p_17, (l_477 || 0x988AL)) <= g_85))), p_17)), 4)), 5)) , 65535UL))) != p_18) , 0L), l_32, g_86, g_213, p_18) != 0x56527633L), g_132)), p_17)) >= g_403) == g_183) <= 0x73L) >= p_17), 6)) >= l_423))
    {
        int l_482 = 1L;
        unsigned char l_513 = 0UL;
        unsigned l_533 = 0UL;
        int l_535 = 0L;
        for (l_379 = 18; (l_379 <= 19); l_379++)
        {
            const unsigned l_489 = 0xF2BCA897L;
            int l_494 = 0xC80E682FL;
            g_403 = g_86;
            l_496 = (safe_add_func_uint16_t_u_u((p_19 > l_482), ((safe_mod_func_uint8_t_u_u(func_74((((l_379 <= (safe_mod_func_int8_t_s_s((~(((safe_rshift_func_int16_t_s_u(g_90, (p_19 == 0xAAL))) ^ l_489) > ((((safe_sub_func_int8_t_s_s((((((((safe_lshift_func_uint8_t_u_s(l_494, g_191)) ^ p_19) & l_477) != p_17) , 0xD5AC11CBL) , p_19) , 1L), l_489)) , 0xE626L) != l_494) < l_482))), g_175))) || p_18) , l_482), l_423, g_396, p_18, l_495), 3L)) | (-1L))));
            l_496 = ((l_482 , l_482) , p_18);
        }
        g_395 = (p_18 ^ 0L);
        if ((safe_add_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((p_18 <= (p_17 && (0xA4685B68L > g_198))), ((g_396 , (safe_lshift_func_int16_t_s_u((safe_unary_minus_func_int32_t_s((((((safe_rshift_func_uint16_t_u_s(0x1F8BL, 8)) , (safe_sub_func_uint16_t_u_u((g_176 , (l_379 <= (0L && l_482))), p_17))) | g_175) != 0xD1D0L) && p_19))), l_482))) < g_175))) , l_482), 1L)))
        {
            unsigned char l_512 = 1UL;
            int l_514 = 0x722D6235L;
            l_514 = (safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((((p_17 || 0xEFD2C5EDL) <= ((g_395 == g_132) , (func_113(p_17, l_512, p_18, l_513, g_90) & g_83))) | 65531UL) ^ 3L), 5)), g_359));
            return g_403;
        }
        else
        {
            unsigned short l_534 = 0xDED7L;
            g_403 = (l_482 >= 1L);
            l_533 = (((p_19 || p_17) == (safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u(0L, 7)) , ((safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((func_113((!0L), p_17, p_19, l_423, (safe_mod_func_int32_t_s_s(((((-1L) || ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s((func_123((safe_lshift_func_int8_t_s_u((~0x77L), l_482)), g_290) <= g_212), l_513)), 8)) & 1UL)) , g_198) < g_396), p_18))) != g_86) & l_32), (-1L))), p_17)) , l_495)) >= g_132), 5L)), 6))) < l_482);
            l_379 = l_534;
            l_535 = p_18;
        }
        g_403 = l_513;
    }
    else
    {
        int l_552 = 0L;
        l_379 = (safe_sub_func_uint8_t_u_u((g_212 > (safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u((((p_17 , (p_19 || l_423)) ^ (safe_mod_func_uint16_t_u_u(((g_90 <= (safe_mod_func_uint16_t_u_u((l_495 | (((p_17 == 8UL) >= (safe_add_func_int32_t_s_s((func_53((safe_rshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(((g_90 <= l_552) == 1L), l_552)) , 0xD1E4L), 1)), g_212, g_191, g_2) ^ g_198), p_19))) & l_552)), 0x220BL))) ^ g_67), 0x8159L))) & p_19), 5UL)) , l_553), p_18))), g_359));
        return g_2;
    }
    for (l_477 = 0; (l_477 >= 37); l_477 = safe_add_func_uint32_t_u_u(l_477, 4))
    {
        unsigned short l_560 = 1UL;
        int l_574 = 0xDA37A3F2L;
        unsigned short l_581 = 0xE200L;
        int l_592 = 0x9EF162F5L;
        unsigned short l_593 = 6UL;
        if ((safe_mod_func_int8_t_s_s((+(safe_add_func_int8_t_s_s(l_560, l_477))), p_18)))
        {
            int l_561 = 0x8B4259D5L;
            l_574 = ((func_93(((~l_561) & ((safe_rshift_func_int8_t_s_u(g_359, 3)) <= (safe_sub_func_uint16_t_u_u(0UL, (safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(l_423, 3)), (l_561 | ((g_67 | (((p_19 & (p_18 > (l_560 || g_403))) & p_17) == g_86)) >= 255UL)))), g_83)))))), l_477, l_560) < p_18) <= 0L);
            l_574 = (safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u((~g_403), ((safe_add_func_int8_t_s_s(func_106(l_581, (!(safe_rshift_func_uint16_t_u_s(g_395, (+(safe_unary_minus_func_uint8_t_u(((p_17 || (safe_sub_func_int32_t_s_s(((2L < ((l_587 || g_290) < (((((func_53(g_176, g_290, p_17, g_67) | p_17) & g_198) <= 0x3F35F3F7L) < 0UL) > l_561))) <= p_18), p_19))) & 0x95906845L))))))), p_17, p_19, p_19), l_574)) < g_359))), 0x76L));
            l_592 = (((safe_mod_func_uint8_t_u_u((l_581 & func_123(g_67, l_561)), (((!((safe_add_func_int32_t_s_s(func_20(l_581, l_592, (p_18 != l_574), g_175, l_593), g_213)) && g_132)) <= (-2L)) , g_198))) || 247UL) > l_561);
            g_403 = p_18;
        }
        else
        {
            int l_604 = 0x087AEA02L;
            int l_608 = 0xA00A445DL;
            unsigned l_613 = 4294967295UL;
            if ((safe_mod_func_int8_t_s_s(((-1L) ^ (((((safe_add_func_uint32_t_u_u((!g_359), (((safe_lshift_func_uint16_t_u_u(g_175, (safe_add_func_int8_t_s_s((g_86 != p_17), (func_123(p_17, l_587) >= (((safe_rshift_func_uint8_t_u_u(((((func_53((0L <= g_183), p_18, p_18, p_17) & g_403) , g_2) != 0x59L) & l_379), 3)) , 0UL) | l_560)))))) <= g_90) < p_17))) , p_18) | l_574) ^ 0xA7L) , l_604)), p_18)))
            {
                unsigned l_607 = 1UL;
                g_403 = (safe_add_func_int16_t_s_s(l_581, 65526UL));
                l_608 = ((func_113(func_106(((p_17 <= p_17) < g_403), l_604, l_604, l_607, l_593), g_395, l_608, l_32, g_183) == 0x247BL) < g_395);
            }
            else
            {
                short l_620 = 0x7E6CL;
                g_395 = (l_604 , (g_191 > ((safe_sub_func_int8_t_s_s((((0x7242L | ((safe_sub_func_uint32_t_u_u((l_613 , (safe_add_func_int16_t_s_s(p_17, ((((safe_add_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(l_496, 2)) , (0x85D57140L | p_18)), (l_620 != l_620))) | g_198) | 0xFB13L) | 9L)))), p_19)) , l_613)) , 65535UL) && 0x70C2L), g_290)) <= g_621)));
                for (l_495 = (-10); (l_495 > 22); ++l_495)
                {
                    int l_640 = 0x10F41313L;
                    for (g_191 = 0; (g_191 != 1); g_191++)
                    {
                        l_632 = (safe_lshift_func_int8_t_s_s(((((safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u(l_632, (0x84L >= (func_53(((!(p_17 & (g_83 , (g_67 != ((safe_rshift_func_int8_t_s_u(((safe_unary_minus_func_uint8_t_u((safe_sub_func_int16_t_s_s(l_620, (((safe_rshift_func_uint16_t_u_u((p_18 ^ (((g_191 < l_640) < g_395) != p_19)), 9)) || g_86) , p_19))))) != l_620), 4)) == 0xF40F7E67L))))) , (-5L)), g_198, p_18, l_620) == 4294967295UL)))), l_495)) ^ g_403) < 0x93EBL) != g_83), l_640));
                        if (p_19)
                            continue;
                    }
                }
            }
        }
    }
    if ((l_423 , ((-1L) < ((g_176 != g_395) ^ ((g_83 || 1UL) < (safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(func_20(g_67, (((0x976AE7EEL & (safe_lshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(5UL, p_18)), g_67)) && g_176), 2))) , 0x99CCL) & p_19), l_651, p_18, l_652), l_553)), p_19)))))))
    {
        unsigned l_663 = 1UL;
        int l_671 = 0x98CBB094L;
        g_395 = 0xC81CFE61L;
        if ((func_53(((((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((g_67 ^ (0x6BL != (p_19 != (safe_lshift_func_uint8_t_u_s(((((g_67 | (safe_rshift_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s(p_17, (p_17 | (-9L)))) , (func_20(l_553, ((l_663 != p_17) , 0x6B32E001L), l_379, l_663, p_18) != 0xF00CB7D0L)), 4))) || (-9L)) != g_396) >= 0xC97F29B7L), 1))))) & 0UL), 1)), p_19)) && p_19) > g_212) , l_553), g_396, g_396, g_621) , p_19))
        {
            unsigned l_664 = 0x43258319L;
            l_664 = func_93(g_359, ((l_663 & (l_663 , (((p_17 & (g_213 , p_19)) || func_74(g_2, g_132, g_83, p_19, p_17)) ^ 0x51FBAE2CL))) | 7UL), l_663);
            g_403 = (safe_mod_func_int32_t_s_s((p_18 || (((safe_add_func_int32_t_s_s(1L, (safe_add_func_uint8_t_u_u(func_113(p_17, func_93(g_396, (g_183 , 4294967295UL), p_19), l_632, p_19, g_2), 0x75L)))) , 0x32L) >= 254UL)), g_90));
            l_671 = (p_17 == (l_651 <= p_17));
        }
        else
        {
            unsigned char l_674 = 1UL;
            l_632 = ((safe_mod_func_int8_t_s_s(l_674, (4294967290UL && (safe_lshift_func_int8_t_s_u((g_176 < (g_290 , (safe_mod_func_int32_t_s_s((0x3FBFL & ((((0xD91DL == ((p_19 && ((l_663 > func_74(g_213, l_671, l_674, p_18, g_183)) >= p_19)) , g_213)) & l_553) == 0x7BL) > g_212)), g_67)))), l_496))))) == 0xAC81L);
            l_671 = g_90;
            l_379 = (safe_rshift_func_uint8_t_u_u(((((((g_86 >= (p_19 , (65535UL <= (p_18 , g_85)))) , func_20(l_674, g_395, ((safe_lshift_func_int16_t_s_s(((g_198 < (safe_add_func_int8_t_s_s(g_395, g_67))) || g_403), p_18)) , p_17), p_19, l_674)) == 0xAE84L) , l_495) != l_652) >= p_17), 2));
        }
    }
    else
    {
        int l_692 = 0x5D2B67F4L;
        short l_699 = 1L;
        int l_719 = 9L;
        g_213 = g_90;
        l_632 = (safe_rshift_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(g_198, g_395)) == (safe_add_func_int8_t_s_s((g_403 & (safe_unary_minus_func_int16_t_s(0x8C44L))), 255UL))), (func_123((((l_692 , ((g_212 <= (safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((((func_123(p_18, (safe_rshift_func_uint16_t_u_s(0x5226L, p_17))) < g_403) || 3UL) == g_621), 6)), l_699))) || g_132)) <= p_18) > 0L), g_85) , p_18)));
        if ((((safe_lshift_func_uint16_t_u_u((func_93((safe_sub_func_int8_t_s_s(p_19, (p_18 , ((func_41((safe_mod_func_uint8_t_u_u(((l_379 == (((func_20(l_692, l_495, (g_191 | (safe_add_func_int16_t_s_s(p_17, (safe_mod_func_int8_t_s_s((p_18 & (0x35L & 0x74L)), l_692))))), l_712, p_18) & (-4L)) < p_17) > g_198)) < 0x8961L), l_692)), p_19, l_32) && p_17) , g_175)))), p_19, l_699) & l_692), 15)) > l_699) >= p_19))
        {
            short l_717 = 0x1F99L;
            unsigned l_718 = 8UL;
            g_403 = (-3L);
            g_403 = (0UL ^ (+func_93((l_692 , (safe_sub_func_int32_t_s_s((((((l_692 <= func_41(p_17, l_692, (safe_add_func_uint16_t_u_u(g_85, (func_113(((((0UL > (~0xDB81921FL)) != p_19) | p_19) , 0x61285614L), l_652, l_717, g_183, p_18) , l_718))))) & 1UL) != g_359) != l_692) | 0x659E662BL), g_621))), l_692, p_17)));
            l_719 = l_699;
        }
        else
        {
            unsigned short l_720 = 2UL;
            if ((func_20(p_19, (func_41(l_719, l_692, (func_106((p_17 || (l_587 || 0xE9L)), ((((func_41(g_395, g_359, ((((l_32 && 0x8FAB05C6L) || 255UL) <= 0xCF562BCCL) , (-1L))) >= g_2) <= p_17) != l_720) , 0x18B8815EL), p_18, g_621, g_132) ^ g_359)) , l_477), l_720, p_19, p_17) | g_396))
            {
                return g_132;
            }
            else
            {
                unsigned l_721 = 4294967295UL;
                l_721 = p_17;
                return g_83;
            }
        }
    }
    return g_176;
}







static char func_20(const unsigned p_21, int p_22, short p_23, unsigned short p_24, unsigned p_25)
{
    int l_29 = 0x30477AE2L;
    return l_29;
}







static short func_41(char p_42, const unsigned char p_43, short p_44)
{
    const char l_64 = 1L;
    int l_68 = (-1L);
    int l_350 = 1L;
    g_67 = (safe_add_func_int32_t_s_s(func_53(p_44, ((((((8UL || (safe_rshift_func_uint8_t_u_s(g_2, 6))) == (safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(0x65L, (0x49BAL || 0x4A9FL))), (((((-9L) < (!(func_20(l_64, (((((+((p_42 , g_2) || p_42)) , l_64) <= (-4L)) < 5L) == 0UL), l_64, l_64, p_44) != 0x9351L))) != l_64) ^ p_44) , 0xE5L)))) | (-4L)) <= g_2) < 0x6DE7L) != g_2), g_2, g_2), g_2));
    l_68 = 0L;
    for (l_68 = 0; (l_68 >= (-6)); l_68 = safe_sub_func_int8_t_s_s(l_68, 1))
    {
        unsigned l_71 = 0UL;
        unsigned l_87 = 4294967295UL;
        int l_272 = (-1L);
        unsigned char l_283 = 0xCCL;
        int l_330 = 8L;
        int l_339 = 0x3E933A93L;
        int l_363 = 0x64D1F428L;
        l_71 = p_44;
        if ((l_68 > (safe_sub_func_int32_t_s_s((2UL < func_20(g_2, func_74(g_2, p_43, (safe_sub_func_int32_t_s_s(p_43, (func_53(func_53((~((p_42 , 0x87B6FF57L) || func_20(l_64, p_43, g_2, l_64, g_67))), g_67, g_67, g_2), l_71, l_64, g_2) > l_64))), l_71, p_42), l_64, l_87, g_2)), g_67))))
        {
            int l_251 = 0L;
            int l_252 = 0xF6DF76FEL;
            unsigned l_271 = 1UL;
            int l_281 = (-5L);
            unsigned short l_329 = 4UL;
            unsigned l_344 = 4294967287UL;
            unsigned l_360 = 0x565D6A2FL;
            l_252 = ((safe_add_func_int32_t_s_s(g_90, 1L)) > (((((((safe_sub_func_int16_t_s_s(func_20(func_93(((func_20(p_43, ((p_42 != (((1L & (0xAEL < (0x1B7AL | l_68))) >= (!0xD896CD2AL)) , 0xE7L)) , l_68), g_85, g_83, p_42) && g_2) , 1UL), l_87, l_68), l_71, p_44, p_42, g_2), g_183)) < p_43) >= 0xEEL) , l_87) && 65535UL) && l_87) != l_251));
            l_272 = (safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((func_123((func_53((((safe_add_func_uint32_t_u_u(l_64, 0xABBFA448L)) | ((safe_rshift_func_uint8_t_u_s((p_44 & p_43), g_176)) <= (0x349FL ^ (safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(func_74((((func_20(((safe_sub_func_int16_t_s_s(func_53((safe_add_func_uint8_t_u_u(((((p_42 > l_251) , (4294967289UL < 0x7E574C6DL)) && p_44) >= l_251), p_44)), g_198, p_44, l_251), g_132)) < g_86), p_44, l_87, g_90, l_64) | p_42) , 0x6AL) || p_43), l_251, g_175, l_252, p_44), l_271)), 1UL))))) || g_132), p_43, l_64, l_64) , 0x99L), g_212) == 255UL) , 6L), l_252)), p_42));
            for (g_176 = 18; (g_176 >= 14); g_176 = safe_sub_func_int16_t_s_s(g_176, 7))
            {
                int l_282 = 1L;
                g_213 = func_74(func_20((safe_rshift_func_uint16_t_u_s(func_53(g_67, (safe_lshift_func_int16_t_s_s((g_198 , (safe_rshift_func_int16_t_s_s((func_74(func_74((func_74(p_43, l_281, (((g_183 || (g_183 | 0L)) | 0xF782L) < p_42), p_42, l_71) ^ l_252), g_132, l_271, l_64, l_251), l_71, p_44, l_272, l_282) <= g_132), g_183))), 15)), g_176, g_67), 5)), p_43, l_272, g_212, p_43), p_44, l_64, l_282, l_283);
                if (func_74(g_86, l_64, p_43, ((g_175 < l_87) , (func_20(g_198, g_67, g_83, func_20((safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s((p_42 , 0xC66BL), 0x6D72L)), 4294967288UL)), 9)), l_71, l_282, p_43, l_68), g_213) || l_271)), p_44))
                {
                    l_252 = g_290;
                    l_282 = (0x1FL >= 0x03L);
                }
                else
                {
                    unsigned l_307 = 1UL;
                    int l_316 = 0x448FBCCCL;
                    unsigned l_349 = 0x57178973L;
                    for (g_290 = 19; (g_290 > 8); g_290 = safe_sub_func_int16_t_s_s(g_290, 8))
                    {
                        g_213 = ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((g_67 | (g_85 == 4294967287UL)), p_42)), 10)) , (l_272 | (-5L)));
                        g_213 = (+((safe_rshift_func_int16_t_s_u(g_183, (safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((g_132 || (safe_lshift_func_uint8_t_u_u(l_307, func_74(g_67, (l_272 <= (((safe_lshift_func_int8_t_s_s(func_53(((func_20((g_191 < l_64), l_282, (safe_mod_func_int8_t_s_s((func_53((safe_lshift_func_uint16_t_u_s((0x38L ^ l_272), 13)), p_43, g_86, g_132) ^ l_282), g_90)), l_282, g_85) || 1UL) , 0x598AL), p_43, p_44, p_44), 7)) != l_282) < p_43)), l_281, g_183, p_42)))), l_272)), g_67)), p_42)))) , (-5L)));
                    }
                    for (g_290 = (-10); (g_290 == 5); ++g_290)
                    {
                        l_316 = l_64;
                        return l_282;
                    }
                    g_213 = (safe_sub_func_int8_t_s_s(((l_283 , (safe_mod_func_uint32_t_u_u((l_282 == (((0xC3FCL > (safe_add_func_int8_t_s_s(((((g_175 || (safe_mod_func_uint8_t_u_u(((func_74(g_132, l_252, ((g_2 , (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s((func_20((func_20(g_183, l_271, l_251, g_90, p_43) > 0xE1L), l_282, g_176, g_83, l_307) ^ 0UL), 13)), l_271))) && l_68), l_307, l_329) , l_282) >= p_43), 255UL))) < p_43) | g_175) > p_43), 0x34L))) | g_2) & p_44)), l_330))) , 0L), l_71));
                    if ((l_282 > 0x44C6F297L))
                    {
                        g_213 = (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(g_198, (safe_sub_func_uint32_t_u_u((g_90 , (safe_lshift_func_uint16_t_u_s(g_212, 9))), (l_283 == ((l_282 != 0x41C6L) | 0x760DL)))))), (0x55E3L && func_20(func_74(p_44, p_42, g_132, p_44, l_339), g_175, g_175, g_198, l_282))));
                    }
                    else
                    {
                        l_316 = ((p_44 == ((safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((l_68 != (g_175 < (((((((255UL < l_344) && (safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u(248UL, 4)) | 3UL), l_349))) <= func_20((((p_42 , l_252) , l_350) , p_42), l_64, p_44, l_282, g_83)) != g_67) < p_44) , g_175) || g_212))), 0x2746B81BL)), 11)) < (-4L))) & l_87);
                    }
                }
                if ((p_43 == func_20(l_350, (safe_sub_func_uint32_t_u_u(func_74(g_290, (safe_lshift_func_int16_t_s_u((l_282 && (safe_lshift_func_uint8_t_u_s((((!((safe_lshift_func_uint8_t_u_s((func_74((p_42 , g_191), g_2, g_176, (g_191 <= l_68), g_90) , p_42), l_251)) , g_359)) > 6L) == g_290), 1))), l_360)), p_42, p_43, g_132), l_344)), p_43, g_90, p_42)))
                {
                    l_350 = p_42;
                    l_272 = l_282;
                }
                else
                {
                    g_213 = func_53(p_42, (g_86 == 0x9702L), ((p_43 , ((((g_290 ^ ((safe_sub_func_int8_t_s_s((func_20(l_68, (g_90 || (0x57729BDCL >= ((g_67 <= 0x30L) , g_86))), g_290, l_282, l_363) , l_68), p_42)) > g_90)) || p_42) > 0x83D5L) , 0x8CL)) , l_282), g_191);
                }
            }
        }
        else
        {
            int l_368 = 1L;
            g_213 = (safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((l_368 > l_350), 5)), func_113(l_87, l_339, ((safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s((g_359 > ((((safe_mod_func_uint8_t_u_u(0x10L, (safe_lshift_func_uint16_t_u_s(l_64, 9)))) , g_191) & p_44) || g_183)), g_212)), 0x9EL)) , p_42), p_42, g_183)));
        }
    }
    g_213 = ((((safe_add_func_int16_t_s_s(func_53((((((p_44 != 0xE42D54BDL) ^ ((l_68 > (-2L)) == (((l_64 >= (g_191 <= 0L)) , (g_183 >= (~g_85))) || p_44))) || g_67) && l_68) , 0xA0C1L), l_64, l_64, p_44), 0L)) , p_44) <= p_44) , l_350);
    return p_43;
}







static int func_53(const short p_54, char p_55, char p_56, unsigned char p_57)
{
    unsigned l_65 = 0x5EE2CBD0L;
    int l_66 = 0x1D39FA4EL;
    l_66 = l_65;
    return l_66;
}







static int func_74(short p_75, unsigned p_76, char p_77, unsigned char p_78, unsigned p_79)
{
    short l_82 = 1L;
    int l_84 = (-3L);
    g_83 = l_82;
    l_84 = l_82;
    g_85 = 1L;
    g_86 = l_84;
    return g_2;
}







static unsigned func_93(unsigned short p_94, unsigned p_95, unsigned char p_96)
{
    char l_105 = 0L;
    unsigned l_112 = 0UL;
    int l_250 = 1L;
    l_250 = ((safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((0x18DDL != ((safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(l_105, func_106(l_112, l_112, l_105, func_20(g_86, ((1UL == g_2) && (func_20(func_113(g_2, g_83, l_112, l_112, g_90), p_94, l_105, l_105, p_96) | 65527UL)), p_94, p_94, p_95), g_183))) != l_105), p_95)) || g_176)), 65527UL)), l_112)) < 0xEF5FAAF0L);
    return g_132;
}







static char func_106(unsigned char p_107, unsigned p_108, unsigned short p_109, short p_110, unsigned short p_111)
{
    const unsigned short l_203 = 0xFD3CL;
    short l_207 = (-6L);
    short l_220 = 0xBA89L;
    int l_221 = (-7L);
    unsigned char l_231 = 255UL;
    unsigned char l_236 = 0xBBL;
    short l_248 = 0x2A02L;
    unsigned l_249 = 0xA9F0FD85L;
    if ((safe_mod_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(((((func_123(l_203, p_107) , ((safe_unary_minus_func_uint16_t_u(g_183)) , (((safe_lshift_func_int16_t_s_s((l_203 != l_207), func_113(((0xB16AD88BL || (safe_add_func_int32_t_s_s((-1L), p_109))) == l_203), p_108, g_198, p_111, g_176))) >= l_207) & g_183))) | l_207) < l_203) < l_207), 0xB384L)) , (-4L)), g_183)))
    {
        unsigned short l_219 = 1UL;
        for (g_175 = 0; (g_175 < 18); g_175++)
        {
            return l_203;
        }
        g_212 = g_191;
        g_213 = g_198;
        l_221 = ((safe_add_func_int32_t_s_s(func_123((safe_unary_minus_func_uint8_t_u((g_83 != (0L >= ((safe_mod_func_uint8_t_u_u(func_113((func_113(l_219, g_67, p_109, l_203, p_108) , (p_110 >= g_175)), p_108, g_213, l_220, l_219), g_175)) ^ g_212))))), p_110), l_220)) > g_83);
    }
    else
    {
        return p_107;
    }
    l_221 = (((0xF06AL == ((((safe_rshift_func_int8_t_s_u(g_2, 5)) & (((safe_add_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((l_207 , (((safe_lshift_func_int8_t_s_u((g_176 <= (p_109 == 0xC164ED75L)), g_212)) , (safe_unary_minus_func_int16_t_s(l_231))) > func_53((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s((((p_109 , p_107) < g_176) < l_236), g_191)), g_183)), g_85, g_2, g_212))), g_67)) != l_220), p_108)) < 65530UL) <= 0xEEL)) , p_108) == 0UL)) || l_207) | l_236);
    l_221 = ((safe_sub_func_uint32_t_u_u(((safe_unary_minus_func_int16_t_s((~(safe_lshift_func_int8_t_s_u(p_107, (safe_add_func_int8_t_s_s(((p_108 , (func_20(((((0UL != func_74(((((l_220 | g_176) , l_207) != (((g_191 >= (safe_lshift_func_int16_t_s_u((p_110 != ((safe_sub_func_int16_t_s_s((func_74(func_20((!((p_111 , p_111) != l_221)), l_203, l_231, p_108, l_231), l_207, p_108, p_108, l_203) || l_236), l_203)) | l_248)), l_207))) , g_2) > l_248)) , p_108), l_203, g_213, l_221, l_248)) < l_236) < l_249) , g_191), g_198, l_203, l_248, p_107) | g_198)) && l_231), p_111))))))) && 1UL), l_221)) | g_67);
    return g_175;
}







static unsigned func_113(int p_114, int p_115, int p_116, char p_117, int p_118)
{
    const short l_126 = (-1L);
    int l_197 = (-2L);
    g_198 = func_53((((safe_rshift_func_uint8_t_u_s((func_53((g_90 >= g_83), ((safe_add_func_int8_t_s_s(((func_123(l_126, func_53(g_86, p_117, l_126, l_126)) > 8UL) == (-7L)), l_197)) , 0x51L), g_183, g_175) | 0x1F251F00L), l_197)) ^ l_126) , l_197), g_183, p_115, l_126);
    return p_116;
}







static int func_123(const char p_124, unsigned char p_125)
{
    const int l_127 = 0x1667F30DL;
    int l_158 = (-7L);
    int l_190 = (-1L);
    if (func_53(l_127, l_127, ((safe_lshift_func_uint16_t_u_u(((func_53(p_125, g_90, (safe_add_func_int32_t_s_s(g_67, (func_20(g_2, p_125, g_132, g_67, g_83) ^ g_2))), g_83) & g_86) | p_124), 7)) , g_86), p_125))
    {
        const unsigned char l_145 = 248UL;
        unsigned char l_154 = 0x0EL;
        int l_196 = 1L;
        for (g_67 = 0; (g_67 != 24); g_67++)
        {
            unsigned l_143 = 0x63DC2C33L;
            short l_144 = 0x09B7L;
            int l_146 = (-1L);
            if ((((((safe_add_func_uint16_t_u_u(0x32ECL, (0xB92A5F0EL | (((safe_rshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s(l_143, (((0xA8BA3176L > (func_53(l_143, g_83, p_125, l_144) , 0x0E3CEE9FL)) , 5UL) > g_2))), 0xB9F6C78DL)), 8)) >= (-6L)) ^ l_145)))) | l_145) == (-1L)) | p_124) > p_125))
            {
                l_146 = (g_132 && p_125);
            }
            else
            {
                unsigned l_153 = 0x22AC7DB9L;
                int l_155 = (-7L);
                if (g_67)
                    break;
                if (p_125)
                    continue;
                l_155 = func_53(func_53((0L < func_53(l_143, l_144, ((safe_add_func_int32_t_s_s(g_90, l_144)) , p_125), ((safe_lshift_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u(l_153, 0x0673L)) ^ 0x91L) == g_83), g_2)) >= l_127))), p_125, l_154, p_125), p_124, p_124, g_85);
            }
            for (l_144 = (-20); (l_144 < (-7)); ++l_144)
            {
                l_158 = 0x6FEDBD15L;
            }
            return g_132;
        }
        g_176 = (safe_mod_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(0x47L, p_124)) , ((safe_rshift_func_uint16_t_u_u(l_127, l_154)) > ((((((g_86 & func_20(func_20(g_67, (safe_sub_func_uint8_t_u_u((((((((safe_sub_func_int16_t_s_s(p_124, ((safe_add_func_uint8_t_u_u(func_20(((((safe_mod_func_int32_t_s_s(g_2, (safe_add_func_int16_t_s_s(((l_127 >= g_2) != 0x08L), g_85)))) >= g_90) & p_125) >= g_132), p_124, g_175, g_132, g_85), 0xA3L)) && 0L))) ^ 0xD58858CDL) , l_154) < p_125) | l_145) , g_67) , g_86), (-1L))), g_83, l_158, p_124), l_145, p_124, l_127, l_145)) != p_124) > g_132) & 0x1692F62AL) & 0x28L) > 0x3DA9AB64L))), g_85));
        g_191 = ((safe_sub_func_uint16_t_u_u((g_83 , (((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(func_53(g_183, l_158, g_67, p_124), 4)), ((~((((0x83L > ((safe_lshift_func_int16_t_s_u(((safe_add_func_uint8_t_u_u((~(func_20((safe_sub_func_uint16_t_u_u(((l_158 | (p_124 >= 0x18F96CBEL)) , l_190), 0xEB9BL)), p_125, l_158, g_2, l_145) , 255UL)), l_158)) < 0x39L), g_83)) <= g_176)) , g_83) < p_124) > g_2)) ^ l_154))) <= g_176) && p_124)), p_125)) < 0x0739L);
        l_196 = (((p_125 , (-9L)) || ((g_86 , (p_125 & ((~(((p_124 , ((safe_rshift_func_int8_t_s_u((g_67 , (safe_add_func_int32_t_s_s((-2L), p_125))), (l_154 , l_158))) > l_127)) != p_124) , 4294967295UL)) != g_2))) | l_127)) , p_125);
    }
    else
    {
        return l_158;
    }
    return p_125;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_359, "g_359", print_hash_value);
    transparent_crc(g_395, "g_395", print_hash_value);
    transparent_crc(g_396, "g_396", print_hash_value);
    transparent_crc(g_403, "g_403", print_hash_value);
    transparent_crc(g_621, "g_621", print_hash_value);
    transparent_crc(g_746, "g_746", print_hash_value);
    transparent_crc(g_818, "g_818", print_hash_value);
    transparent_crc(g_894, "g_894", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
