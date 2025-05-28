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



static char g_8 = (-3L);
static unsigned g_104 = 6UL;
static unsigned char g_105 = 250UL;
static int g_106 = 0x49ED226FL;
static char g_108 = 0xF9L;
static volatile int g_111 = 0xA47BFE1AL;
static volatile int g_112 = (-1L);
static int g_115 = 0xB6D8D46DL;
static volatile int g_117 = 0x86B7DE7EL;
static volatile unsigned short g_120 = 0UL;
static volatile unsigned g_124 = 1UL;
static volatile int g_137 = 0x67F5904BL;
static unsigned g_144 = 0xAAD56265L;
static volatile unsigned g_151 = 0x0A975422L;
static volatile char g_215 = 0x7DL;
static volatile unsigned short g_216 = 65534UL;
static unsigned g_226 = 4294967295UL;
static volatile char g_233 = 0x08L;
static unsigned short g_253 = 0UL;
static volatile unsigned short g_259 = 65535UL;
static volatile unsigned char g_387 = 254UL;
static int g_393 = (-1L);
static char g_592 = 0xCAL;
static volatile unsigned g_634 = 1UL;
static int g_638 = 0x62376552L;
static unsigned g_639 = 4294967295UL;
static int g_720 = 1L;
static char g_722 = 0x05L;
static volatile unsigned g_830 = 7UL;
static unsigned short g_835 = 0x9718L;
static char g_926 = 0x33L;
static volatile unsigned g_946 = 1UL;
static unsigned g_971 = 0xC99E83E1L;



static int func_1(void);
static int func_2(unsigned char p_3, int p_4, unsigned p_5, int p_6, unsigned p_7);
static char func_22(int p_23, int p_24, unsigned p_25, unsigned p_26, unsigned char p_27);
static char func_30(const unsigned p_31, unsigned p_32, unsigned p_33);
static unsigned short func_46(unsigned p_47, char p_48, short p_49, unsigned char p_50, const unsigned char p_51);
static int func_56(int p_57, unsigned p_58, char p_59, unsigned p_60, short p_61);
static char func_69(unsigned char p_70, unsigned char p_71, int p_72, unsigned p_73);
static unsigned char func_74(short p_75, unsigned p_76, unsigned short p_77, unsigned short p_78, unsigned p_79);
static unsigned func_81(int p_82, const unsigned p_83, char p_84, unsigned char p_85, unsigned char p_86);
static unsigned func_89(unsigned char p_90, unsigned p_91, short p_92, char p_93);
static int func_1(void)
{
    unsigned char l_13 = 0xEAL;
    unsigned short l_28 = 65535UL;
    int l_1152 = 0x49B645EAL;
    l_1152 &= func_2(g_8, (safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(l_13, (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_u(g_8, 6)) ^ l_13), 5)))), (safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s(func_22(l_13, l_28, l_13, g_8, g_8), l_28)), g_722)))), l_13, g_638, g_226);
    l_1152 ^= 0x381688F9L;
    l_1152 |= g_226;
    for (g_144 = 17; (g_144 < 43); ++g_144)
    {
        return g_259;
    }
    return l_1152;
}







static int func_2(unsigned char p_3, int p_4, unsigned p_5, int p_6, unsigned p_7)
{
    short l_912 = 0xF228L;
    short l_921 = 0x4234L;
    int l_938 = 1L;
    int l_939 = 1L;
    char l_941 = 0x14L;
    int l_944 = 1L;
    int l_1013 = (-2L);
    unsigned short l_1130 = 0UL;
    short l_1135 = (-4L);
    unsigned short l_1151 = 6UL;
    p_4 = g_226;
    for (g_226 = 13; (g_226 == 16); ++g_226)
    {
        short l_917 = 0x529AL;
        unsigned l_1026 = 0x72FE0086L;
        int l_1037 = 0xA417460DL;
        int l_1068 = (-5L);
        int l_1069 = 0x093A0571L;
        unsigned short l_1131 = 65531UL;
        if (g_106)
        {
            g_137 = (-1L);
            g_106 = (safe_sub_func_int16_t_s_s(g_638, g_253));
            return g_111;
        }
        else
        {
            const short l_919 = 0xE839L;
            int l_1098 = 0L;
            p_4 = p_5;
            if (g_144)
            {
                unsigned short l_918 = 0x24DAL;
                int l_940 = 2L;
                int l_943 = 0x4B88D020L;
                int l_945 = 0x5FE52280L;
                unsigned l_985 = 4UL;
                unsigned l_1009 = 1UL;
                unsigned short l_1052 = 65526UL;
                for (g_106 = (-13); (g_106 < (-4)); ++g_106)
                {
                    int l_920 = 1L;
                    int l_927 = 0L;
                    char l_942 = 2L;
                    if ((g_387 <= (safe_mod_func_int16_t_s_s((+(l_912 == (safe_mod_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u((p_5 != (((+g_106) <= 0UL) ^ ((p_7 != (func_89(g_638, l_912, ((func_89(l_917, l_918, p_7, p_7) | (-1L)) >= g_722), l_912) > 0x1142L)) > p_5))), p_3)) ^ l_919), l_919)))), g_835))))
                    {
                        if (l_920)
                            break;
                        return p_3;
                    }
                    else
                    {
                        g_117 = (l_921 == (safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((!0x18L), g_115)), 8)));
                        p_4 = 0x98F1AAB5L;
                        g_117 ^= ((!g_926) || g_639);
                        l_927 &= l_920;
                    }
                    l_938 = (safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(p_3, ((safe_mod_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u(p_6, (g_108 == func_89((safe_mul_func_uint16_t_u_u(p_6, ((-10L) >= g_638))), g_8, ((0x86717778L != (p_7 <= 0xA67FE2CCL)) != g_835), l_918)))) && 3UL) == g_215), 0x57L)) < p_3))), 3));
                    g_946++;
                    p_4 = ((safe_rshift_func_int8_t_s_s(p_3, 1)) || l_927);
                }
                g_720 &= (safe_add_func_int16_t_s_s(((func_81(((safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(l_940, ((((safe_add_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(0xA114L, (safe_add_func_int32_t_s_s(l_917, 0x5C357D8AL)))) || l_919), (((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(g_124, 4)), 10)) == (((((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((p_4 && (((7L & (1UL != p_4)) && 9L) && g_971)) | 0x8DBBL) < g_253), g_835)), g_835)) < l_943) & l_917) == (-6L)) == 65526UL)) < p_4))) <= g_105) == 1L) && g_592))), l_918)) >= g_253), p_5, p_7, g_835, g_253) == l_917) & p_3), g_144));
                if (p_4)
                    break;
                if (((p_5 >= ((((0x2641L || g_216) && ((safe_mod_func_uint32_t_u_u(5UL, (~(safe_unary_minus_func_int8_t_s((safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((((safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s((((0xEAL > (safe_lshift_func_uint16_t_u_s((p_5 || func_30(p_3, l_940, (g_830 <= l_938))), g_115))) && l_941) <= 0x3CL), p_7)), 0xEAEAL)) < p_7) > p_4) & p_3) ^ l_985), 0x4FBDL)), p_5))))))) ^ (-1L))) & 2UL) ^ 0x32689293L)) <= l_917))
                {
                    unsigned l_990 = 8UL;
                    g_393 ^= l_917;
                    for (g_108 = 0; (g_108 <= 13); ++g_108)
                    {
                        const unsigned short l_991 = 1UL;
                        int l_1000 = 0xC3725938L;
                        g_720 = 0xE2ED2C78L;
                        g_720 = (safe_mod_func_int8_t_s_s(l_990, l_991));
                        l_1000 = ((safe_mod_func_int16_t_s_s(func_74(((safe_lshift_func_uint8_t_u_s(0x6EL, 1)) || p_7), p_5, g_946, p_3, g_8), (safe_mul_func_uint16_t_u_u(0x1C0EL, (safe_add_func_int16_t_s_s(p_4, g_393)))))) == (-6L));
                    }
                }
                else
                {
                    char l_1010 = 0xF2L;
                    short l_1067 = 0xB746L;
                    l_1013 = ((func_22((((func_22(g_117, (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(2UL, 8)), (safe_lshift_func_int8_t_s_s((func_89(l_1009, (func_89(g_971, l_919, l_1010, g_722) == (safe_lshift_func_int8_t_s_s((0x9DL == p_6), 6))), p_3, g_393) ^ 0UL), g_253)))), l_1013, l_1010, p_6) && g_253) == l_1010) || 0xBEL), p_4, p_4, l_940, p_5) == p_5) > l_917);
                    g_720 = ((safe_rshift_func_uint8_t_u_u(2UL, 4)) ^ p_3);
                    l_1037 = (safe_sub_func_int8_t_s_s((((safe_mod_func_uint32_t_u_u(l_917, (safe_rshift_func_uint16_t_u_s((!(l_1010 || g_638)), (safe_sub_func_uint8_t_u_u(l_919, l_938)))))) | ((safe_lshift_func_int16_t_s_u((-1L), func_89(l_1026, (safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s(func_22(func_69((safe_mod_func_uint8_t_u_u((g_720 != (0x8CL != 0x68L)), l_919)), g_946, p_3, g_253), g_144, p_5, g_835, g_638), g_971)), g_226)), 0x4C2CL)), 0xBDF060BFL)), g_638, p_5))) | 0x5BC8L)) || 65535UL), g_971));
                    if ((+func_22(p_6, (!(g_835 <= 1UL)), g_233, (safe_lshift_func_uint8_t_u_s((+(safe_lshift_func_uint8_t_u_u((~g_144), 3))), func_89((safe_rshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_u(p_6, p_7)) == (((safe_rshift_func_int8_t_s_s(l_938, 2)) | (l_939 & g_592)) || 0x26FBL)), 0)), l_1010, p_5, p_7))), g_393)))
                    {
                        p_4 &= (safe_rshift_func_int8_t_s_s(l_919, 6));
                        l_1037 = ((g_233 < p_3) < p_5);
                        g_106 = (safe_lshift_func_uint8_t_u_u(g_124, 6));
                        --l_1052;
                    }
                    else
                    {
                        if (g_926)
                            break;
                        p_4 = func_56(func_30(func_89(l_921, (safe_mod_func_int8_t_s_s(((0UL == p_5) < (safe_lshift_func_uint16_t_u_u(p_5, g_216))), (~((((p_7 || (safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(l_1010, p_6)), (safe_add_func_int16_t_s_s(g_971, l_912)))), g_144))) & p_4) ^ g_638) || p_4)))), l_1009, g_926), p_4, l_1067), l_917, p_5, l_1067, l_1068);
                    }
                }
            }
            else
            {
                l_1069 = l_1069;
            }
            if ((safe_sub_func_int16_t_s_s(((l_921 && (p_5 != ((~(safe_unary_minus_func_int8_t_s(g_120))) >= (safe_sub_func_int8_t_s_s(p_7, g_144))))) | g_835), (safe_mod_func_int8_t_s_s(func_89(g_8, (func_89(l_1026, (l_944 <= 0L), l_919, l_1037) ^ 65535UL), p_7, g_144), 2L)))))
            {
                unsigned l_1085 = 0UL;
                for (l_1069 = 5; (l_1069 > 4); --l_1069)
                {
                    if (p_6)
                    {
                        return g_393;
                    }
                    else
                    {
                        return g_946;
                    }
                }
                if (l_919)
                    continue;
                --l_1085;
                if (p_5)
                    break;
            }
            else
            {
                unsigned short l_1099 = 0xE0E4L;
                p_4 = func_22(g_216, (func_89((p_6 || ((safe_sub_func_int8_t_s_s(func_89(g_104, (((((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((g_720 | 4L), (safe_lshift_func_uint16_t_u_u(p_3, 10)))), p_7)) <= (g_144 | (g_926 > l_921))) == 0x756AC844L) < 0x5F39A45AL) < g_108), p_6, g_144), g_639)) <= g_115)), p_7, g_144, p_7) < p_3), l_919, p_4, p_7);
                for (p_4 = 0; (p_4 >= (-24)); p_4 = safe_sub_func_int32_t_s_s(p_4, 3))
                {
                    l_1099++;
                }
                if (g_124)
                    continue;
                l_1068 = (safe_lshift_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(p_5, 6)), 247UL)) <= (0xE718E84CL ^ 0UL)), func_89(g_259, g_8, g_592, (!func_89((safe_lshift_func_uint16_t_u_u((func_89((0xB2L | l_944), p_7, g_720, l_938) & p_4), 15)), l_939, g_108, g_253))))), 12)) || p_5) >= g_926), 5));
            }
        }
        if (g_215)
            break;
        for (g_108 = 0; (g_108 != 12); g_108++)
        {
            p_4 = p_5;
            l_938 = 0x74DED1A4L;
        }
        if ((safe_rshift_func_int8_t_s_u(g_259, (safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(func_89((l_921 ^ (safe_add_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((((func_89(p_3, func_89(p_4, p_3, g_971, ((l_1037 <= g_639) && func_89((safe_rshift_func_int16_t_s_u(((!0xA4FD427EL) >= p_4), 14)), l_1069, g_722, p_4))), l_1130, l_1069) ^ g_108) && 1UL) <= 0xD45EL), g_144)) == 0xE963L), l_1131))), l_1068, g_971, g_638), 0x2FFFL)), p_6)))))
        {
            char l_1132 = 0x4FL;
            l_1069 = l_1132;
        }
        else
        {
            unsigned short l_1140 = 65533UL;
            int l_1141 = (-4L);
            unsigned l_1142 = 1UL;
            for (g_106 = 9; (g_106 != (-5)); g_106 = safe_sub_func_int32_t_s_s(g_106, 7))
            {
                p_4 ^= func_56(g_106, func_69(l_912, l_1135, (safe_sub_func_uint32_t_u_u(l_1026, (safe_add_func_uint32_t_u_u((0x4DDCL == (func_56(p_7, l_1037, p_6, g_835, l_1131) == l_1013)), 0x3FF957FCL)))), l_1130), l_1037, g_115, g_835);
                l_1141 = l_1140;
            }
            l_1142--;
        }
    }
    p_4 ^= (safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(l_941, (safe_mod_func_int32_t_s_s((g_722 >= p_7), func_30(l_912, g_634, func_89(l_1130, g_393, g_115, p_3)))))), g_722));
    g_112 = p_6;
    return l_1151;
}







static char func_22(int p_23, int p_24, unsigned p_25, unsigned p_26, unsigned char p_27)
{
    const char l_29 = 1L;
    unsigned short l_595 = 1UL;
    int l_597 = 1L;
    int l_630 = 0xB90BB204L;
    char l_728 = 0x4BL;
    unsigned l_732 = 0x69B906D5L;
    unsigned short l_863 = 1UL;
    char l_864 = 0x6FL;
    unsigned char l_887 = 255UL;
    p_23 = (l_29 || (0x32L != func_30((g_8 && ((safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((((p_23 != (safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(p_27, 0)), 1L))) ^ (safe_rshift_func_uint16_t_u_s(((g_8 & l_29) <= (func_46((safe_mod_func_int8_t_s_s((0x6DL ^ p_24), g_8)), p_25, p_27, g_8, g_8) >= l_29)), 15))) | l_29), l_29)), p_25)) != 0UL)), g_115, g_8)));
    if (((-7L) == (safe_lshift_func_int8_t_s_u(func_56((((l_29 >= g_387) != (((safe_add_func_int32_t_s_s(3L, l_29)) < (safe_lshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(l_29, 0x81C6L)), 3))) > g_104)) ^ 1UL), l_29, g_105, l_29, p_25), 6))))
    {
        short l_568 = (-1L);
        l_568 = (p_24 < g_144);
    }
    else
    {
        const int l_606 = 0xC5BE27D4L;
        int l_622 = (-1L);
        int l_632 = 0xE80FBD60L;
        int l_637 = 0L;
        int l_713 = 0x01A28AB1L;
        unsigned l_723 = 4294967291UL;
        unsigned l_731 = 0xC042A84BL;
        unsigned char l_791 = 249UL;
        int l_792 = (-2L);
        unsigned char l_823 = 0UL;
        unsigned l_862 = 4294967295UL;
        unsigned short l_867 = 0x20A5L;
        for (g_108 = 4; (g_108 <= (-23)); g_108--)
        {
            const unsigned l_593 = 4294967295UL;
            int l_618 = 0xC59F3B2DL;
            int l_620 = (-1L);
            int l_621 = (-1L);
            int l_623 = 0xC5A0136CL;
            int l_624 = 0xFD3F0013L;
            char l_681 = 0xCDL;
            int l_715 = (-1L);
            char l_716 = (-4L);
            unsigned l_779 = 7UL;
            short l_780 = 4L;
            if ((safe_rshift_func_uint8_t_u_u(func_69(g_104, p_23, p_24, func_69(g_120, p_27, ((l_29 ^ (safe_unary_minus_func_uint8_t_u((~((p_26 || 0xE374L) || (g_108 | 1UL)))))) | g_106), g_104)), g_104)))
            {
                unsigned l_594 = 1UL;
                unsigned short l_596 = 2UL;
                int l_626 = 0xEF4C14B4L;
                int l_627 = 0x7ECBDB17L;
                l_597 = (safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((p_23 && (((safe_sub_func_uint32_t_u_u((((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(((((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(0UL, 0xE9ED3B3AL)), (0UL == 0xE69AL))) != ((safe_rshift_func_int16_t_s_u(func_89(g_120, l_29, g_592, ((+p_27) > g_115)), g_144)) <= g_144)) && g_117) & l_593), 13)) & l_594), l_29)), g_226)) < l_595) & p_23), 0x192CDCDDL)) | p_25) <= 0x0C95L)), l_596)), g_108));
                for (l_596 = 8; (l_596 > 51); ++l_596)
                {
                    int l_613 = 0xDFB016FBL;
                    int l_617 = 0L;
                    int l_619 = 0x9363A9B4L;
                    int l_629 = 0xF1DB105FL;
                    int l_633 = (-7L);
                    if ((safe_mul_func_int16_t_s_s(p_27, ((safe_mod_func_uint32_t_u_u(g_393, (safe_lshift_func_int16_t_s_u((l_594 <= (((l_29 && (((((~l_597) | ((((l_594 && func_81((0x434FL == l_596), g_104, l_594, p_26, p_24)) | (-1L)) && l_594) | l_606)) & g_393) | p_23) ^ g_253)) && 65535UL) || p_27)), p_23)))) >= 0x2DL))))
                    {
                        unsigned l_616 = 0x8ABE53C1L;
                        int l_625 = 0xB7FC9F74L;
                        int l_628 = 0x94408D04L;
                        int l_631 = (-5L);
                        g_137 = (safe_mul_func_uint16_t_u_u(g_387, func_89((((((safe_add_func_int16_t_s_s((((p_25 >= p_27) ^ (-1L)) <= (safe_lshift_func_int16_t_s_u(l_606, 7))), p_26)) || l_613) > ((safe_mod_func_uint16_t_u_u((4L > g_115), g_226)) & 2L)) >= 0xF4L) || 0x0D72L), g_226, g_144, g_104)));
                        p_23 = (+l_616);
                        g_634--;
                        g_639--;
                    }
                    else
                    {
                        unsigned l_650 = 0x8BB845BAL;
                        g_112 = func_81((l_594 >= (0x12D7L == (((safe_mod_func_int32_t_s_s(g_117, (safe_add_func_uint8_t_u_u(l_621, l_613)))) | func_89(func_89(g_253, g_115, (safe_mul_func_int8_t_s_s((1L && (((safe_mod_func_int16_t_s_s(0x46F8L, g_393)) | g_104) && g_104)), l_650)), l_620), g_106, g_226, l_621)) || l_650))), l_632, l_597, g_8, p_26);
                        return g_120;
                    }
                    p_23 = func_89(((-1L) >= 4294967295UL), (p_25 & 0x6FD9E5D7L), ((l_595 != ((safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(l_633, (g_151 < (p_27 && l_606)))), 7)) ^ p_27)) <= l_595), p_25);
                    g_106 = (safe_lshift_func_int16_t_s_u(l_594, (safe_add_func_int8_t_s_s(g_117, (255UL == ((l_622 != (l_632 > 0UL)) || (3UL >= 0xE3L)))))));
                }
                for (g_393 = (-21); (g_393 >= (-8)); g_393++)
                {
                    unsigned l_710 = 9UL;
                    int l_712 = (-7L);
                    unsigned l_714 = 0xDCF4EA91L;
                    int l_717 = (-1L);
                    int l_718 = (-10L);
                    int l_719 = 0xAB88C750L;
                    g_117 = (safe_sub_func_int8_t_s_s(g_233, (safe_mod_func_uint32_t_u_u(g_106, (7L && (safe_mod_func_uint8_t_u_u((!g_639), (safe_sub_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_s(0x19L, ((safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(0x908BL, (safe_mul_func_uint8_t_u_u((func_89((l_622 >= (g_105 ^ (safe_rshift_func_int8_t_s_s(p_24, p_24)))), p_26, g_144, p_23) > l_595), 0xB0L)))), g_226)) & g_393))) & l_681), 3)) | (-1L)), 0xDAD8C539L)))))))));
                    for (l_632 = 8; (l_632 <= (-14)); l_632 = safe_sub_func_int8_t_s_s(l_632, 9))
                    {
                        char l_711 = (-1L);
                        int l_721 = (-1L);
                        l_716 |= (safe_rshift_func_int16_t_s_s(((g_137 | (g_115 & ((safe_mul_func_uint8_t_u_u((0x8A9098A0L < (safe_mod_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s(func_89(g_8, g_253, (safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(func_89(l_637, (p_23 > ((safe_sub_func_int16_t_s_s((+(safe_sub_func_int8_t_s_s(l_596, (safe_mod_func_int16_t_s_s(func_89((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(((!(p_25 == p_25)) ^ p_24), p_23)), g_104)), l_710, l_711, p_23), l_626))))), l_710)) > l_630)), g_106, l_712), l_630)) > l_713), p_23)), g_393), l_714)), 0x9BL)), 1L)) != g_592), l_621))), l_715)) == g_639))) & l_710), g_8));
                        --l_723;
                        if (g_104)
                            break;
                        g_106 &= func_69(l_620, ((safe_lshift_func_int16_t_s_s(func_89(g_592, l_710, l_714, g_104), 15)) | (g_117 != l_728)), (safe_lshift_func_int8_t_s_s((g_115 | 250UL), 5)), p_26);
                    }
                }
                l_732 = l_731;
            }
            else
            {
                char l_764 = (-1L);
                g_720 = (65535UL == l_715);
                l_622 |= (~(-7L));
                p_23 = 0xA193AE4FL;
                for (g_720 = 0; (g_720 == 8); g_720 = safe_add_func_uint8_t_u_u(g_720, 6))
                {
                    int l_737 = 0x711AC801L;
                    if ((safe_sub_func_int16_t_s_s(p_27, (l_737 ^ ((func_89(p_26, p_23, ((safe_add_func_uint8_t_u_u(0x6DL, p_25)) < ((safe_mul_func_int16_t_s_s(p_25, ((((safe_lshift_func_int8_t_s_s((+(-2L)), (l_732 > p_25))) && g_393) || 0x67L) > l_737))) >= l_737)), p_27) != 0x8EFCL) > l_713)))))
                    {
                        unsigned char l_746 = 0x85L;
                        if (g_226)
                            break;
                        p_24 = (safe_mod_func_int8_t_s_s(l_746, p_23));
                    }
                    else
                    {
                        char l_757 = (-5L);
                        p_23 = (safe_mod_func_int16_t_s_s(p_23, p_24));
                        g_117 = (4L & ((func_69(p_26, (safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((l_737 != g_8) && func_81((safe_mul_func_uint8_t_u_u(0x46L, func_89(p_23, g_111, l_757, g_104))), g_592, l_731, p_23, g_592)), 4)), 0x92L)), g_393)), p_24, p_25) & g_8) && g_8));
                        g_137 = ((safe_mul_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u(5UL, ((safe_lshift_func_int8_t_s_u((-8L), ((p_23 ^ ((l_764 & 254UL) < p_25)) < (1UL || ((safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((func_81((safe_mod_func_int16_t_s_s(g_124, (((((safe_rshift_func_int16_t_s_s((l_779 || l_681), 15)) && p_23) != 255UL) > l_764) | l_630))), g_105, p_25, p_27, p_23) || p_27), g_115)) || p_24), 6)) < g_115), 0x0328L)), p_25)), 6)) < l_737))))) | g_108))) < g_722) > g_253), 0x4CL)) & l_737);
                        p_24 &= p_26;
                    }
                    p_23 = func_74(p_27, g_144, l_632, (((p_24 > ((g_215 <= l_780) != (safe_unary_minus_func_uint8_t_u(func_89((((((func_89(g_393, ((((safe_add_func_int16_t_s_s(p_26, g_108)) > p_26) >= 0x04E2L) != p_27), p_24, p_24) ^ p_27) <= g_592) >= p_25) && l_597) ^ 0x72L), p_23, l_630, p_23))))) || l_764) != 1L), p_24);
                }
            }
            for (g_253 = 0; (g_253 <= 41); ++g_253)
            {
                unsigned char l_788 = 1UL;
                int l_814 = 6L;
                int l_826 = (-3L);
                int l_829 = (-10L);
                int l_833 = (-6L);
                for (p_25 = 0; (p_25 < 31); p_25 = safe_add_func_int16_t_s_s(p_25, 2))
                {
                    p_24 = g_720;
                    l_632 ^= ((func_81(g_638, (((func_69(l_788, g_108, (safe_sub_func_uint32_t_u_u((l_595 > l_622), func_89(((g_253 ^ l_630) ^ 0L), g_137, p_23, l_788))), g_592) | l_791) ^ p_24) < 0L), l_792, g_226, p_26) > g_226) >= p_26);
                    if ((func_69(p_24, g_117, p_25, p_23) && func_81((safe_mod_func_int16_t_s_s((((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(2L, (safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(g_638, 1)) > (safe_lshift_func_int8_t_s_s(l_620, (p_25 <= l_788)))), p_24)))), p_27)) | 8UL) && 0x8D39F6E7L), 0xE1AAL)), l_593, l_593, l_788, l_731)))
                    {
                        l_814 = ((((func_89(p_25, g_108, (safe_lshift_func_uint16_t_u_u((func_69((safe_add_func_uint16_t_u_u(l_788, p_24)), func_89((safe_rshift_func_uint8_t_u_u(((safe_unary_minus_func_int16_t_s(g_233)) >= (p_23 > p_26)), (safe_sub_func_uint16_t_u_u((((1UL & (-1L)) == g_393) & g_639), p_24)))), g_226, l_728, l_620), g_115, l_632) < 0x1C98L), 12)), g_106) || l_732) ^ 5L) >= p_25) | 0x290DF8FCL);
                        return g_253;
                    }
                    else
                    {
                        g_393 = p_25;
                    }
                }
                for (g_144 = 12; (g_144 < 57); ++g_144)
                {
                    unsigned char l_819 = 0xA7L;
                    int l_822 = 0L;
                    int l_828 = 0xEB7DCF58L;
                    unsigned l_841 = 0UL;
                    for (l_779 = 4; (l_779 <= 9); l_779 = safe_add_func_uint32_t_u_u(l_779, 3))
                    {
                        int l_820 = 0x3D52B50DL;
                        char l_821 = 0x6EL;
                        int l_827 = 0xF1EAFC7EL;
                        l_819 = l_814;
                        l_823++;
                        --g_830;
                    }
                    if ((p_24 & l_833))
                    {
                        short l_834 = (-8L);
                        g_835--;
                    }
                    else
                    {
                        int l_840 = 0x3DFD3F34L;
                        if (g_112)
                            break;
                        l_840 = (+(safe_add_func_uint8_t_u_u((g_120 || g_120), 255UL)));
                        g_112 |= p_23;
                        g_112 = (l_732 == (l_623 & (l_829 != l_814)));
                    }
                    l_841 = 0x64F05FBDL;
                }
            }
        }
        if ((((safe_mod_func_int32_t_s_s((((safe_mul_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(g_216, (g_722 && (((safe_rshift_func_uint16_t_u_s(l_791, (!2L))) == (((safe_sub_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(l_637, 5)), l_29)), p_27)) < (((safe_lshift_func_uint16_t_u_u(((g_722 == (safe_add_func_int8_t_s_s((0x181AFE16L & l_595), l_862))) >= 254UL), 5)) == 0xE7L) || l_606)) != 3L), p_23)) | 8L) || l_731)) > l_863)))) ^ 0xD018L), g_104)) && p_27) | l_864), p_25)) >= g_722) <= l_862))
        {
            g_720 = ((safe_mod_func_int16_t_s_s(p_27, g_112)) && 0xCAA7L);
            l_630 |= g_151;
            l_867++;
            p_24 = (safe_lshift_func_uint16_t_u_s(p_25, 4));
        }
        else
        {
            unsigned l_878 = 0x063C2145L;
            if ((safe_mod_func_int8_t_s_s(g_720, (safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((((g_639 || (l_878 <= (((((safe_add_func_uint16_t_u_u(l_622, ((safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(((p_25 <= func_30((p_25 || l_867), p_26, g_105)) == p_26), g_720)) >= l_878), 0xFFB7L)), l_887)) == 0xAFC579BEL))) < p_23) != 0x0446L) | 0x4EB0F7E4L) < g_592))) & g_720) != l_29), 2)), p_26)))))
            {
                unsigned l_898 = 1UL;
                l_632 = g_638;
                g_720 = (func_69(g_387, (p_27 > 3L), (p_23 != (((safe_mul_func_int16_t_s_s(l_878, ((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((0xF3L <= (safe_mod_func_int32_t_s_s(9L, l_898))), 13)), ((((p_25 & g_638) | g_144) == 0x58L) & 0xDCL))), p_23)) <= p_24))) == l_898) >= g_835)), l_898) != 0x4FL);
            }
            else
            {
                int l_901 = 0x2B1A559DL;
                l_622 &= (l_878 >= (l_878 && ((safe_rshift_func_uint8_t_u_s((0x6FL > ((func_69(l_597, g_393, ((p_25 ^ func_69((0xEEL >= ((p_26 > func_69((p_23 && l_878), l_901, p_27, l_878)) > l_878)), g_835, g_639, g_720)) && p_26), p_27) == p_24) & l_637)), g_639)) < g_104)));
                g_393 = p_26;
                p_24 &= l_637;
            }
        }
        for (p_23 = 0; (p_23 <= 11); p_23++)
        {
            return g_144;
        }
    }
    return p_25;
}







static char func_30(const unsigned p_31, unsigned p_32, unsigned p_33)
{
    unsigned char l_485 = 0x24L;
    unsigned l_486 = 0xAB1568D0L;
    int l_502 = 5L;
    unsigned char l_530 = 1UL;
    unsigned l_558 = 0x7381C1FDL;
    unsigned char l_559 = 4UL;
    g_393 = (((safe_lshift_func_uint16_t_u_s(g_226, l_485)) >= l_485) && (l_486 & g_151));
    if (l_486)
    {
        unsigned char l_489 = 250UL;
        const unsigned short l_513 = 0UL;
        int l_549 = 0x65009F6BL;
        l_502 = (safe_add_func_int16_t_s_s((((+p_33) || (l_489 || (safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(l_486, ((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(func_46(p_33, g_106, (safe_sub_func_uint16_t_u_u(p_32, p_31)), p_32, l_486), 8)), p_31)) <= l_486))), g_115)), p_33)))) <= g_8), g_226));
        g_137 = (g_226 > (safe_sub_func_int8_t_s_s(l_489, (safe_mul_func_uint16_t_u_u((p_32 == ((safe_mod_func_uint8_t_u_u(l_489, (safe_lshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(g_117, func_89((p_31 >= ((((l_513 <= (((((1UL ^ (func_89((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(p_32, g_105)), (-6L))), p_33, l_489, g_108) <= l_489)) | l_502) || 8UL) && g_8) <= l_485)) | l_502) <= l_502) && g_226)), l_502, l_489, g_393))) & 0xCFA0E982L), l_513)))) || p_33)), 0UL)))));
        l_502 = func_69((((safe_lshift_func_uint16_t_u_s(l_489, g_151)) | 0UL) | func_89(g_253, (safe_mod_func_uint8_t_u_u(p_32, ((l_486 <= (safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((p_32 == func_89((safe_mod_func_int16_t_s_s((((func_89(p_31, l_530, p_32, g_393) != p_33) >= l_513) != g_253), g_106)), l_489, p_32, g_8)) | g_8), 0L)), 1UL))) ^ l_513))), p_32, p_31)), p_33, l_513, l_489);
        l_549 = (safe_lshift_func_uint8_t_u_u(((!l_502) == (safe_mul_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u(((p_32 == (safe_add_func_int32_t_s_s(((safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((0x7242L > p_32), (7L ^ (safe_add_func_int16_t_s_s((l_530 & ((l_486 > (g_117 ^ ((safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s(l_513, 6L)), p_33)) || l_485))) || p_32)), g_144))))), 251UL)) & p_31), 0xF64149D9L))) != p_31), l_513)) && l_485) >= p_32), p_33))), 2));
    }
    else
    {
        g_117 ^= l_486;
        return l_486;
    }
    g_106 = (safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((l_485 || (func_89((((l_530 & (safe_lshift_func_int16_t_s_u(p_32, g_120))) & (safe_mul_func_int8_t_s_s(0xFAL, ((~p_31) <= (func_89(l_558, g_253, func_89(func_89(g_8, p_31, l_558, g_393), p_32, l_559, p_33), g_106) & l_530))))) & 8L), g_393, g_226, p_31) != l_558)) == 0x505EL), 0x11L)), 0x631AL));
    return g_106;
}







static unsigned short func_46(unsigned p_47, char p_48, short p_49, unsigned char p_50, const unsigned char p_51)
{
    char l_80 = 0L;
    int l_383 = 0x6A80E99DL;
    int l_392 = (-2L);
    for (p_47 = 0; (p_47 >= 17); ++p_47)
    {
        unsigned l_66 = 0UL;
        int l_384 = 0x3FCA0D5BL;
        int l_385 = (-5L);
        int l_386 = (-6L);
        l_383 ^= func_56((safe_mod_func_uint8_t_u_u((g_8 >= (safe_mod_func_int32_t_s_s(((l_66 || ((safe_mod_func_int8_t_s_s(func_69(func_74(l_80, func_81(p_47, (((!((safe_add_func_uint32_t_u_u(func_89(p_49, g_8, g_8, l_80), p_51)) && 2L)) & g_8) || 0xE707ECB5L), l_66, l_66, l_80), g_108, l_80, g_108), g_108, l_66, g_108), 0x69L)) & p_50)) != 0x21F3L), g_226))), l_80)), p_50, l_80, l_66, g_108);
        ++g_387;
    }
    if (((((safe_add_func_int8_t_s_s(g_151, 0x6BL)) || 0xE753L) >= (p_48 != 1L)) > (g_226 & func_89(p_50, l_392, ((0UL & g_393) | g_144), p_48))))
    {
        int l_398 = 0x7AF958F1L;
        l_383 = ((safe_mod_func_uint32_t_u_u(func_81((safe_rshift_func_int8_t_s_u((1UL & 1UL), (func_74(l_398, (safe_rshift_func_int8_t_s_u(0xC6L, 1)), func_69(p_49, (safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(g_105, (safe_mod_func_uint32_t_u_u(p_48, 0x785BB1C7L)))), g_393)), p_48, l_398), p_51, g_226) & g_108))), g_393, l_398, l_383, p_48), 1UL)) > (-8L));
    }
    else
    {
        unsigned char l_417 = 0UL;
        int l_430 = 0xDA97F9D9L;
        if (((func_74(p_47, g_117, (safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(((65532UL == ((safe_mul_func_uint8_t_u_u(l_392, p_50)) | func_89((safe_sub_func_uint8_t_u_u(g_226, (4294967295UL >= ((g_393 || (-8L)) != l_417)))), p_49, l_417, l_383))) >= l_80), 1)) >= l_392), 0x57L)), g_8)), g_253, l_417) > 0x85L) & g_115))
        {
            unsigned char l_431 = 0UL;
            l_383 = ((safe_mod_func_int16_t_s_s(g_106, ((0x7E38L <= ((safe_rshift_func_uint16_t_u_s(((g_253 & ((g_216 < ((safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((0UL >= 9UL), p_48)), (safe_lshift_func_int16_t_s_u(0x5DD2L, ((safe_add_func_int8_t_s_s((l_80 == p_47), g_106)) ^ p_48))))) <= 0x4275DC9EL)) == p_48)) | l_417), p_48)) > g_144)) && p_50))) != g_104);
            ++l_431;
            for (l_430 = (-4); (l_430 < 11); l_430++)
            {
                short l_438 = (-8L);
                l_438 = (safe_mod_func_uint16_t_u_u(func_69(g_117, p_50, g_108, l_383), p_48));
                g_137 ^= g_144;
                if (g_215)
                    continue;
            }
            for (l_383 = 17; (l_383 != (-19)); --l_383)
            {
                unsigned short l_441 = 0UL;
                l_441--;
                for (l_430 = 12; (l_430 >= (-5)); --l_430)
                {
                    return p_48;
                }
                g_106 ^= p_49;
            }
        }
        else
        {
            short l_446 = 1L;
            int l_457 = (-1L);
            unsigned char l_482 = 1UL;
            l_457 = func_56(func_69(g_151, l_430, l_446, func_89(p_51, p_47, (safe_add_func_int16_t_s_s((((l_446 | (safe_mod_func_int8_t_s_s(p_49, g_393))) < ((safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((l_446 && 0x0743956BL), p_47)) != 0L), p_50)), 8)) <= l_80)) || p_48), g_144)), g_8)), l_80, l_430, l_446, p_48);
            g_112 = (g_215 < g_115);
            for (g_144 = 0; (g_144 != 52); g_144 = safe_add_func_int8_t_s_s(g_144, 5))
            {
                int l_471 = 0L;
                for (g_106 = 7; (g_106 <= (-25)); g_106 = safe_sub_func_int16_t_s_s(g_106, 4))
                {
                    unsigned l_464 = 0UL;
                    l_383 = func_89((safe_lshift_func_int8_t_s_s(l_383, 5)), l_464, g_124, ((0x115BL <= ((safe_add_func_int16_t_s_s(l_457, (g_253 < (safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(((g_104 & ((!l_471) < g_115)) ^ l_383), 0x432666E5L)), l_417))))) && 248UL)) | 5L));
                    l_457 = (safe_add_func_uint16_t_u_u(func_56(p_51, g_111, l_446, (safe_mul_func_int16_t_s_s(p_48, g_104)), g_108), ((safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s((g_106 && (safe_rshift_func_uint16_t_u_u(l_482, 9))), l_80)), l_430)) ^ g_115)));
                    return g_111;
                }
            }
        }
    }
    return l_392;
}







static int func_56(int p_57, unsigned p_58, char p_59, unsigned p_60, short p_61)
{
    int l_359 = 0x0E3D9A88L;
    unsigned l_382 = 4294967286UL;
    for (p_59 = 0; (p_59 <= 14); p_59 = safe_add_func_uint8_t_u_u(p_59, 2))
    {
        unsigned short l_360 = 0UL;
        int l_367 = 0x282A758EL;
        l_359 = p_58;
        l_360++;
        if (((p_59 ^ (((0x9933C14AL != (safe_add_func_int32_t_s_s((l_359 == ((safe_sub_func_uint32_t_u_u(p_58, ((0xC2L ^ p_61) != ((((0x65L && l_367) <= ((safe_add_func_uint16_t_u_u(p_57, 1UL)) ^ p_59)) < p_61) | (-9L))))) < 4294967295UL)), l_359))) || 5UL) > 9L)) | l_359))
        {
            g_117 = p_57;
        }
        else
        {
            unsigned char l_377 = 0xD8L;
            if (p_57)
                break;
            for (g_108 = 15; (g_108 < 0); g_108--)
            {
                unsigned l_372 = 1UL;
                ++l_372;
                g_137 = (safe_mod_func_int16_t_s_s(((((p_58 || 253UL) == g_216) & l_377) | (((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((((((((0x55E5AFDEL >= ((l_377 >= l_360) && g_108)) && 1L) && l_372) ^ 4294967295UL) >= l_359) < g_104) || 0x8B3AE402L), 1)), l_377)) <= g_253) < g_226)), 5L));
            }
        }
    }
    return l_382;
}







static char func_69(unsigned char p_70, unsigned char p_71, int p_72, unsigned p_73)
{
    int l_347 = 0xAEFA68B3L;
    int l_348 = 7L;
    g_137 = (safe_lshift_func_int8_t_s_u(g_115, 1));
    l_348 = ((-1L) <= l_347);
    l_348 = ((((g_253 && (safe_add_func_int32_t_s_s((-1L), l_347))) || (g_216 ^ (1UL <= (p_71 < (safe_lshift_func_uint8_t_u_s((p_70 && (((safe_add_func_uint8_t_u_u(p_71, (~(safe_rshift_func_int16_t_s_s(l_347, 7))))) < 0xE754A42AL) != p_72)), 3)))))) & l_347) == g_105);
    return l_348;
}







static unsigned char func_74(short p_75, unsigned p_76, unsigned short p_77, unsigned short p_78, unsigned p_79)
{
    const unsigned char l_133 = 0x97L;
    volatile int l_136 = 0xE8548DC0L;
    int l_138 = 0x785ABE16L;
    int l_140 = 0x991B7FB1L;
    int l_142 = 0xA8E06690L;
    int l_150 = 6L;
    unsigned short l_154 = 0x8DF1L;
    unsigned short l_206 = 0xD11DL;
    char l_316 = 0xC2L;
    short l_317 = 0xDCDBL;
    g_106 ^= (safe_mul_func_int16_t_s_s(g_105, ((p_75 <= (1UL | (((-1L) & ((g_111 | (0x1D34D3BEL < l_133)) >= g_108)) != (g_105 > 0L)))) || 0x44FE3D07L)));
    for (p_79 = 0; (p_79 < 47); ++p_79)
    {
        int l_139 = 0x8E2D1E93L;
        int l_141 = 1L;
        int l_143 = 0x81DCF01EL;
        int l_147 = (-1L);
        int l_148 = (-9L);
        int l_149 = 0L;
        l_136 = g_124;
        --g_144;
        g_151++;
    }
    g_137 = ((l_154 != func_81((func_89((safe_mod_func_uint16_t_u_u(65535UL, (((~l_133) == (func_81(g_120, g_104, ((safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s((g_144 != p_79), l_140)), 254UL)) > 0x598DL), l_138, l_133) > g_115)) | g_8))), l_154, g_144, l_138) ^ g_108), g_115, l_154, g_144, g_108)) ^ l_133);
    if (p_77)
    {
        int l_161 = 0L;
        int l_175 = 0x6A068B86L;
        short l_182 = 0x769BL;
        if (l_161)
        {
            l_161 = g_8;
            for (p_76 = 0; (p_76 <= 13); ++p_76)
            {
                for (g_104 = (-22); (g_104 == 4); g_104 = safe_add_func_uint32_t_u_u(g_104, 6))
                {
                    l_138 = g_151;
                    if (p_75)
                        break;
                }
            }
        }
        else
        {
            unsigned l_166 = 1UL;
            --l_166;
            l_175 &= ((safe_add_func_uint8_t_u_u(p_78, (l_166 != (func_89(((safe_lshift_func_uint8_t_u_u(l_154, func_89(func_81(p_77, (+l_161), p_77, (safe_add_func_uint16_t_u_u(p_75, l_161)), g_111), p_75, p_77, l_161))) || 4294967287UL), p_77, p_75, g_115) > 0x47AF9668L)))) == l_166);
            g_106 = (4294967289UL != ((g_117 == p_79) >= (safe_rshift_func_uint16_t_u_s((func_89(g_115, func_89(p_78, func_89(g_8, g_115, l_166, (safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s((l_175 == l_182), 0x4E12L)), 0x6C0CL))), g_115, l_161), p_79, l_166) > p_75), l_150))));
        }
        for (p_78 = 14; (p_78 != 31); p_78++)
        {
            unsigned char l_185 = 0x50L;
            l_185 = (g_112 | p_76);
        }
    }
    else
    {
        unsigned l_186 = 0x20459850L;
        int l_187 = 1L;
        unsigned l_207 = 4294967290UL;
        int l_209 = 4L;
        int l_210 = (-3L);
        int l_212 = 0x4344FC8FL;
        unsigned l_237 = 4294967295UL;
        l_187 ^= l_186;
        l_187 = func_81(l_186, (((l_186 <= (0x0273B924L <= (((safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((l_186 && (0xDAL || (p_78 > ((p_79 < (p_79 >= (l_142 == l_187))) < (-5L))))), g_144)), g_111)) | 0x4C2DL) > g_108))) < g_105) == l_140), g_8, p_76, l_142);
        l_187 = ((safe_mod_func_int16_t_s_s(func_89(l_187, (safe_add_func_int8_t_s_s(l_138, (0UL < ((((0x3CC6ED5EL >= ((safe_mod_func_int8_t_s_s(p_78, (safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u(p_79, ((safe_add_func_uint16_t_u_u(p_79, (safe_rshift_func_int16_t_s_s(g_112, p_79)))) && g_124))), l_142)))) | p_78)) == 4294967295UL) & 252UL) >= 1L)))), l_206, l_150), g_115)) & p_76);
        if (func_89(l_207, g_105, l_186, (p_79 == (p_79 > ((safe_unary_minus_func_uint32_t_u(l_140)) >= p_78)))))
        {
            char l_211 = (-1L);
            int l_213 = 0xC0330D54L;
            int l_214 = 9L;
            g_216--;
            for (p_77 = 18; (p_77 >= 6); p_77--)
            {
                unsigned char l_221 = 246UL;
                l_221 = p_75;
                g_137 = (((p_76 != g_215) <= p_79) != (func_89(p_77, (safe_mul_func_uint8_t_u_u((p_77 && ((safe_mul_func_uint8_t_u_u(g_226, (p_79 && func_89(g_105, (safe_mod_func_int8_t_s_s(l_186, p_75)), l_210, g_108)))) >= p_77)), l_140)), g_8, g_108) && p_79));
            }
            for (l_213 = (-27); (l_213 != (-14)); l_213 = safe_add_func_uint32_t_u_u(l_213, 6))
            {
                g_117 = g_215;
            }
            for (g_105 = (-10); (g_105 != 37); g_105 = safe_add_func_int32_t_s_s(g_105, 3))
            {
                l_214 ^= g_233;
                return l_207;
            }
        }
        else
        {
            const int l_284 = 0x098A15B1L;
            int l_318 = 0x5490DEC9L;
            for (l_138 = 0; (l_138 < (-27)); l_138 = safe_sub_func_int16_t_s_s(l_138, 2))
            {
                short l_236 = 0xFA89L;
                int l_254 = (-1L);
                l_236 = p_78;
                if ((0L != (+p_77)))
                {
                    int l_250 = 0x77996893L;
                    l_237 = g_115;
                    for (g_105 = (-20); (g_105 == 41); g_105++)
                    {
                        l_210 = (safe_add_func_int32_t_s_s(p_77, ((((safe_mul_func_int8_t_s_s(((((safe_add_func_int8_t_s_s((0xDD9F72E6L < 0x0E512B8EL), (safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((0xE44B7FDBL > g_115) && l_250), 14)), g_137)))) != ((-2L) <= (safe_add_func_int16_t_s_s(l_236, 0x5BA5L)))) & 0x070E863BL) != g_8), l_236)) <= 0x793AL) < 0x9717L) ^ g_104)));
                        g_253 = (g_108 | (g_105 || g_226));
                    }
                }
                else
                {
                    char l_285 = 0x01L;
                    if (g_120)
                    {
                        return p_78;
                    }
                    else
                    {
                        char l_255 = 0L;
                        int l_256 = 0x0027B1E6L;
                        int l_257 = 0x86BF0284L;
                        int l_258 = 1L;
                        ++g_259;
                        l_150 &= (p_79 || (((l_257 || ((safe_add_func_uint16_t_u_u(((func_81((safe_mod_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(((((safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(l_236, 4294967286UL)), (safe_rshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(g_259, l_284)), 0x1453L)), p_79)), func_89(p_77, g_105, l_207, p_77))), g_226)), p_75)))) & 8UL) | p_75) == 0x62L), 11)) ^ p_78), l_285)), l_187, l_255, p_76, g_108) != g_108) < 4294967287UL), 9UL)) <= 0L)) < g_115) >= g_226));
                    }
                    g_112 = (-6L);
                    if (g_259)
                        continue;
                }
                l_142 = (func_81(((func_89(l_236, g_104, g_117, l_209) <= (safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((0xF4L < p_77), (((g_108 || ((safe_sub_func_uint16_t_u_u(p_78, (-6L))) ^ g_108)) ^ g_8) ^ p_77))), l_284))) <= l_284), l_254, p_77, p_79, l_236) == g_8);
            }
            if ((0x1823L & g_253))
            {
                unsigned l_294 = 0x0A46BAF6L;
                int l_324 = 0xC4C534E0L;
                if ((safe_mod_func_uint16_t_u_u(l_212, l_294)))
                {
                    return g_216;
                }
                else
                {
                    unsigned short l_319 = 65535UL;
                    for (l_138 = 17; (l_138 <= 10); l_138 = safe_sub_func_uint32_t_u_u(l_138, 2))
                    {
                        char l_309 = 0xFFL;
                        l_318 = ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(l_294, (safe_add_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(((0x6AL == (safe_add_func_int8_t_s_s(func_81(g_8, ((safe_add_func_int8_t_s_s(l_309, (safe_sub_func_uint8_t_u_u(l_284, 0xD1L)))) <= (safe_sub_func_int16_t_s_s(g_120, (safe_rshift_func_uint16_t_u_u((p_75 > func_89((l_206 & 0x70L), l_316, p_78, l_284)), 13))))), p_79, g_106, l_187), l_309))) ^ p_79), 0x05A6L)) && l_317), 6UL)))), 0x40A2L)) ^ g_115);
                        ++l_319;
                        g_137 = 0L;
                        return p_78;
                    }
                }
                for (l_206 = 0; (l_206 < 24); l_206 = safe_add_func_int32_t_s_s(l_206, 7))
                {
                    l_324 ^= (1UL && p_75);
                    g_112 = l_318;
                    if (g_151)
                        continue;
                }
                l_324 = (safe_mod_func_int16_t_s_s(func_81(p_79, g_104, (safe_add_func_int32_t_s_s(((safe_add_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(p_78, ((((!p_78) & g_117) < (safe_sub_func_int16_t_s_s(l_324, p_75))) | (+((safe_add_func_int16_t_s_s(l_324, (safe_mul_func_uint8_t_u_u((g_108 <= l_318), g_104)))) != l_206))))), p_77)), l_284)), g_253)) || g_226), p_77)) <= g_115), (-1L))), p_76, l_138), l_212));
            }
            else
            {
                return g_105;
            }
        }
    }
    return l_206;
}







static unsigned func_81(int p_82, const unsigned p_83, char p_84, unsigned char p_85, unsigned char p_86)
{
    short l_107 = 0x8A13L;
    int l_109 = 0xDD44351DL;
    int l_110 = (-1L);
    int l_113 = 0x384C83B0L;
    int l_114 = 0xE40D8EB8L;
    int l_116 = (-8L);
    int l_118 = 0L;
    int l_119 = 0x82C65315L;
    char l_123 = 0xBEL;
    g_106 = p_85;
    --g_120;
    --g_124;
    l_113 &= (((g_120 != (p_85 ^ (+255UL))) || (func_89((safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((func_89(((1L != (l_118 > g_105)) == l_114), l_107, l_116, l_109) < 0x1995L), 0x31L)), 7)), p_85, g_8, g_112) == g_115)) ^ g_115);
    return g_104;
}







static unsigned func_89(unsigned char p_90, unsigned p_91, short p_92, char p_93)
{
    char l_94 = 0x6CL;
    int l_95 = (-2L);
    if ((~g_8))
    {
        l_95 = l_94;
    }
    else
    {
        unsigned char l_96 = 255UL;
        l_96 = g_8;
    }
    for (l_95 = 0; (l_95 == (-25)); --l_95)
    {
        unsigned short l_103 = 0x4D23L;
        g_104 = ((safe_mod_func_uint16_t_u_u(7UL, (safe_add_func_int32_t_s_s((-2L), p_91)))) && l_103);
        g_105 = g_8;
        return p_92;
    }
    return p_93;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_387, "g_387", print_hash_value);
    transparent_crc(g_393, "g_393", print_hash_value);
    transparent_crc(g_592, "g_592", print_hash_value);
    transparent_crc(g_634, "g_634", print_hash_value);
    transparent_crc(g_638, "g_638", print_hash_value);
    transparent_crc(g_639, "g_639", print_hash_value);
    transparent_crc(g_720, "g_720", print_hash_value);
    transparent_crc(g_722, "g_722", print_hash_value);
    transparent_crc(g_830, "g_830", print_hash_value);
    transparent_crc(g_835, "g_835", print_hash_value);
    transparent_crc(g_926, "g_926", print_hash_value);
    transparent_crc(g_946, "g_946", print_hash_value);
    transparent_crc(g_971, "g_971", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
