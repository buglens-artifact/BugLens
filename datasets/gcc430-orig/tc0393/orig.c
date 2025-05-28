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
   int f1;
   unsigned f2;
   int f3;
   char f4;
   short f5;
   int f6;
};


static int g_2 = 0x8FAAAEB9L;
static unsigned char g_116 = 1UL;
static unsigned char g_119 = 0x9BL;
static short g_132 = 0x74D2L;
static unsigned short g_145 = 0xB848L;
static unsigned g_155 = 0x17541656L;
static int g_167 = 0x84883CC4L;
static struct S0 g_188 = {0x14FEL,0xC12CE41FL,0x7E891FE2L,0x2A71EAA7L,-1L,0xD8D7L,-5L};
static int g_202 = (-1L);
static int g_254 = (-2L);
static struct S0 g_284 = {0x30B5L,0xDB629B37L,7UL,-10L,0x76L,9L,0x0823372CL};
static int g_337 = 0L;
static int g_475 = 0x38B3DC72L;
static unsigned g_478 = 0x0A8E6CCFL;
static short g_595 = (-1L);
static unsigned char g_706 = 254UL;
static unsigned short g_768 = 0x1A3FL;
static short g_881 = 0x8DCEL;



static struct S0 func_1(void);
static char func_5(int p_6, int p_7);
static unsigned func_27(unsigned char p_28, unsigned p_29, unsigned char p_30);
static struct S0 func_31(unsigned p_32, unsigned p_33);
static unsigned char func_37(unsigned char p_38, unsigned short p_39, int p_40, char p_41);
static unsigned func_43(struct S0 p_44);
static struct S0 func_45(unsigned char p_46, unsigned char p_47, unsigned p_48);
static unsigned short func_51(struct S0 p_52, int p_53, unsigned char p_54, unsigned short p_55, unsigned short p_56);
static int func_58(unsigned char p_59, unsigned char p_60, short p_61, int p_62, unsigned p_63);
static char func_77(short p_78, char p_79, unsigned short p_80);
static struct S0 func_1(void)
{
    int l_8 = 0xD9E2A8D3L;
    unsigned l_825 = 4UL;
    struct S0 l_827 = {0xC0E3L,0x8235152CL,0x1AAD1E86L,0xBD069C04L,0L,1L,0x1C934503L};
    unsigned char l_847 = 255UL;
    unsigned char l_904 = 0x26L;
    unsigned l_964 = 0x0FA7B87DL;
    short l_965 = (-6L);
    for (g_2 = 28; (g_2 <= (-7)); g_2 = safe_sub_func_int16_t_s_s(g_2, 5))
    {
        int l_12 = 0xA90611BCL;
        int l_826 = 0L;
        l_826 = ((l_12 = func_5(l_8, l_8)) && (safe_mul_func_int16_t_s_s((l_8 = (safe_mul_func_uint8_t_u_u(1UL, ((safe_add_func_uint8_t_u_u((l_12 == l_8), (((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(l_8, 15)), ((safe_lshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((~func_5(l_8, (func_27(l_8, l_8, g_2) >= 0xBCDC86EFL))), 0xC8L)) < l_825), l_825)) > l_12))) <= l_825) != 0UL))) == 1L)))), l_825)));
        return l_827;
    }
    g_284.f1 = g_188.f5;
    for (g_188.f5 = 11; (g_188.f5 != 4); g_188.f5 = safe_sub_func_uint8_t_u_u(g_188.f5, 2))
    {
        unsigned l_843 = 0xEA7130D2L;
        struct S0 l_850 = {0xE7CCL,0xCF484DB9L,0x087F0568L,6L,0x17L,0x9AB0L,0x62281C74L};
        int l_903 = 0xBBB7F2D0L;
        unsigned l_947 = 0xA9F8DF21L;
        g_284 = g_188;
        if (l_827.f3)
        {
            char l_842 = (-8L);
            int l_848 = 0x0933B437L;
            char l_849 = 0x80L;
            g_284 = g_284;
            if (g_284.f1)
            {
                for (g_284.f0 = 0; (g_284.f0 >= (-12)); --g_284.f0)
                {
                    for (g_284.f3 = (-20); (g_284.f3 <= 10); g_284.f3 = safe_add_func_uint32_t_u_u(g_284.f3, 5))
                    {
                        int l_844 = 0xE111AB3EL;
                        g_188.f1 = g_706;
                        g_188.f1 = g_188.f3;
                        g_188.f1 = (~g_284.f0);
                        l_848 = (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((g_132 ^ (safe_add_func_uint16_t_u_u(65530UL, (0x6205L > l_842)))), ((l_827.f6 <= l_843) || (l_844 ^ (safe_sub_func_int16_t_s_s((l_843 <= (((-6L) != 0x3ABBL) && 1UL)), g_188.f6)))))) > l_847), 5)) & g_284.f0), 2));
                    }
                }
            }
            else
            {
                g_167 = l_827.f0;
                if (l_842)
                    break;
                g_188.f1 = l_849;
            }
            return l_850;
        }
        else
        {
            unsigned l_857 = 0UL;
            int l_880 = 0x6986B019L;
            unsigned l_902 = 0xA5D3305DL;
            int l_953 = 0L;
            if ((((g_284.f4 = (0x7F18D19EL ^ ((l_8 = 0x4714E09CL) ^ ((g_284.f0 < g_284.f2) & (safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(g_116, (safe_rshift_func_uint16_t_u_u((l_857 ^ ((safe_mod_func_uint32_t_u_u((g_188.f2 = ((safe_rshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s((-1L), g_145)), 7)) >= g_595)), 0xDBE2F83BL)) ^ l_827.f0)), 13)))), g_188.f1)))))) ^ l_850.f4) <= l_850.f6))
            {
                int l_873 = 0xC3DB4DE0L;
                for (l_850.f5 = 0; (l_850.f5 == 8); l_850.f5 = safe_add_func_int16_t_s_s(l_850.f5, 3))
                {
                    int l_872 = 0x85EBF667L;
                    g_2 = (safe_sub_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(l_872, ((l_873 ^ 0x51E4L) >= ((safe_mod_func_int16_t_s_s(g_145, 0x6D1BL)) <= ((safe_lshift_func_uint16_t_u_s((g_188.f0 || (l_880 < (l_872 || g_881))), 1)) > 0x73L))))), l_8)) && 1L), l_850.f2));
                    if (g_337)
                        continue;
                    l_827.f1 = (l_8 = (-3L));
                }
            }
            else
            {
                short l_905 = (-7L);
                if ((safe_mul_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(1L, 1)), (g_478 < (((safe_rshift_func_uint8_t_u_s((((safe_div_func_int8_t_s_s((safe_sub_func_int8_t_s_s((-6L), (safe_lshift_func_int16_t_s_u(((safe_mod_func_int32_t_s_s(g_337, g_284.f1)) || (safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(func_58((249UL > (safe_add_func_int8_t_s_s((l_827.f0 == (l_850.f1 = 0x1EE9L)), func_5((l_903 = (g_202 || l_902)), g_145)))), l_827.f2, g_188.f2, l_904, l_847), 3)) | 0x01CEB843L), 1UL))), 9)))), g_284.f5)) | l_905) | l_827.f4), l_902)) && 246UL) > l_905)))))
                {
                    int l_932 = 0xDEFFF26FL;
                    int l_937 = 0x0987E5ABL;
                    char l_938 = 1L;
                    for (l_850.f6 = (-6); (l_850.f6 != 9); ++l_850.f6)
                    {
                        int l_924 = 0L;
                        unsigned char l_925 = 0UL;
                        l_8 = (0x29L | (-5L));
                        g_284.f1 = (!(safe_sub_func_int32_t_s_s(0xE82AFC8FL, (safe_rshift_func_int16_t_s_u(g_155, (l_925 = func_5(((safe_lshift_func_int8_t_s_u(func_77(g_188.f3, ((safe_mul_func_uint8_t_u_u(((((func_77(g_478, g_284.f5, (g_145 = ((l_827.f1 = 0xF70CL) <= (safe_div_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(1UL, func_37(l_902, (safe_div_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((-10L), 8L)), 0x86L)), l_905, g_284.f6))), g_706))))) & g_284.f5) <= 0UL) >= 0x5BL) & 0xE00B2B2BL), 8L)) < l_924), g_284.f4), l_827.f4)) && 0UL), l_827.f6)))))));
                        if (l_827.f2)
                            continue;
                    }
                    g_284 = g_284;
                    l_938 = (safe_mod_func_uint16_t_u_u(g_188.f5, (safe_div_func_int32_t_s_s((func_77((safe_rshift_func_int8_t_s_u(l_8, 3)), (l_932 = 2L), g_337) == (+(~l_903))), func_51(g_188, func_58((((safe_lshift_func_int8_t_s_s((l_880 >= (safe_div_func_uint32_t_u_u(l_827.f4, l_902))), g_116)) < g_145) == (-10L)), g_116, l_902, g_284.f2, l_937), l_850.f1, l_843, l_937)))));
                }
                else
                {
                    l_8 = (g_284.f1 = g_188.f0);
                }
            }
            g_254 = (l_850.f1 = (safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(l_880, (safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(func_37(g_202, (g_768 = func_5(((l_947 >= ((~((safe_unary_minus_func_int8_t_s((safe_div_func_uint8_t_u_u(func_5(g_881, g_284.f3), (l_850.f1 ^ l_947))))) | (l_903 = ((safe_add_func_int16_t_s_s(((l_953 = ((~l_850.f6) == 0x56L)) == g_202), (-1L))) || g_119)))) > g_768)) != g_202), l_857)), l_904, g_167), 13)), g_188.f6)))), 1)));
            g_167 = (~(((safe_mod_func_int8_t_s_s(0L, (safe_mod_func_uint8_t_u_u(func_37(l_850.f6, (g_254 <= (l_903 = ((g_284.f0 = (g_284.f4 <= (safe_lshift_func_uint8_t_u_s((l_850.f4 != ((g_284.f1 = (l_953 = func_77(l_843, ((safe_mod_func_int16_t_s_s(((func_5((((safe_lshift_func_uint16_t_u_s((0L || (0x07L <= ((1UL != g_284.f5) & g_167))), l_827.f4)) != g_284.f2) != l_827.f3), l_850.f3) <= g_254) && l_850.f4), l_903)) & g_478), g_768))) && 9L)), g_202)))) <= g_188.f4))), g_188.f5, g_284.f4), 0xA5L)))) > l_964) || g_475));
        }
        l_965 = (l_850.f3 != g_188.f4);
        g_284 = g_188;
    }
    return l_827;
}







static char func_5(int p_6, int p_7)
{
    int l_11 = 0L;
    l_11 = (safe_div_func_int32_t_s_s(0x0C3414B5L, 0x17C10977L));
    return p_6;
}







static unsigned func_27(unsigned char p_28, unsigned p_29, unsigned char p_30)
{
    unsigned l_36 = 0x2B2FAA96L;
    struct S0 l_57 = {9L,0x1082E70DL,0xDD215CD4L,0xCD7820EAL,0xDAL,-1L,0x8C683368L};
    int l_338 = 3L;
    int l_754 = 0L;
    short l_774 = 0xD955L;
    int l_782 = 0xC55F6002L;
    unsigned short l_783 = 65529UL;
    unsigned short l_788 = 0xFEFBL;
    struct S0 l_789 = {3L,0xEB4B1DBBL,0xC34D6B52L,-1L,7L,0xDF8BL,0L};
    l_57 = func_31((safe_sub_func_int8_t_s_s((l_36 | ((((func_37(g_2, ((l_338 = (g_337 = ((safe_unary_minus_func_int16_t_s((func_43(func_45(l_36, p_28, (g_2 < (l_57.f1 = (safe_mod_func_uint16_t_u_u(func_51(l_57, g_2, func_5(p_28, l_57.f1), l_57.f6, l_57.f6), l_57.f0)))))) && 0xE087C829L))) ^ l_57.f6))) < l_57.f2), p_30, p_28) ^ p_29) | g_2) & p_28) > g_2)), 6L)), p_29);
    g_284.f1 = (g_284.f6 | p_29);
    if ((safe_lshift_func_uint16_t_u_s((func_51(l_57, (safe_mul_func_int8_t_s_s((safe_div_func_int16_t_s_s((p_30 < (safe_lshift_func_int8_t_s_u((l_338 = 0x59L), 1))), (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(g_188.f0, p_28)), (0L | (0UL > l_754)))))), ((g_145 = p_29) <= 0xE634L))), p_28, l_57.f1, p_28) == l_57.f5), g_284.f4)))
    {
        unsigned char l_763 = 255UL;
        int l_773 = 0x90312322L;
        l_754 = (((((p_30 | ((safe_rshift_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((l_338 = (g_155 ^ (safe_div_func_uint8_t_u_u((l_763 = 0x21L), func_37(((safe_mod_func_uint8_t_u_u(func_37((p_28 = (~(l_57.f1 = 0x48L))), ((((safe_rshift_func_int16_t_s_u((-1L), ((+g_284.f6) == g_768))) < l_36) & (safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s(p_29, l_57.f5)), l_57.f3))) & 0x6BL), l_57.f4, g_284.f1), 0x89L)) ^ g_768), g_167, g_188.f5, g_188.f2))))), l_773)), g_155)), g_132)) || l_773)) & 0UL) >= l_774) && l_338) | p_29);
    }
    else
    {
        struct S0 l_779 = {0L,7L,4294967292UL,0xAB2EE0FBL,0xE8L,0x25CBL,0L};
        l_779 = func_31(((g_284.f4 || func_77(l_338, (+func_77((safe_mul_func_int16_t_s_s(func_51(func_45(((1L != (safe_mod_func_int8_t_s_s((((func_43(l_779) > (((safe_mod_func_uint16_t_u_u((l_779.f4 <= (-1L)), p_29)) > p_29) ^ l_57.f1)) && 255UL) | l_782), l_782))) && p_28), l_779.f4, p_30), l_779.f1, l_779.f3, l_36, g_2), (-1L))), p_29, l_779.f0)), p_30)) >= l_783), p_28);
        g_284 = l_57;
        l_754 = (0x88L <= (safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(p_29, (0x5E63L < (func_58(l_788, l_779.f6, p_29, (g_284.f6 = p_28), p_29) > (-1L))))), l_57.f0)));
        l_57 = func_45(func_51(l_789, (safe_mod_func_int8_t_s_s(g_167, func_58((l_779.f1 = func_43(l_779)), p_28, p_28, p_30, l_779.f5))), l_57.f4, g_2, g_284.f1), p_28, p_28);
    }
    if ((safe_add_func_int32_t_s_s((+(l_57.f0 && (safe_lshift_func_int16_t_s_u(l_774, 0)))), (255UL & g_2))))
    {
        struct S0 l_796 = {0L,6L,3UL,3L,0x84L,0xC9DFL,0L};
        if ((g_254 = g_2))
        {
            struct S0 l_797 = {1L,0x9A0DE9C7L,0xCE0414D9L,0x9711FBCBL,0xF8L,0x5F3DL,1L};
            l_797 = (l_789 = l_796);
            return p_29;
        }
        else
        {
            unsigned char l_802 = 0xB1L;
            g_188 = l_789;
            g_188.f1 = (safe_add_func_uint8_t_u_u(0x81L, (safe_add_func_int8_t_s_s(p_30, (~l_802)))));
            g_284.f1 = func_77(func_58(func_5(p_29, p_28), g_284.f2, (l_57.f3 >= ((((safe_unary_minus_func_uint8_t_u(p_28)) < (safe_sub_func_int8_t_s_s(2L, 255UL))) >= ((g_337 | (-2L)) != 0x76L)) | 0UL)), p_29, g_116), g_188.f4, g_254);
            g_284.f1 = p_28;
        }
        l_754 = (0x7E21L && 0x142AL);
        return g_119;
    }
    else
    {
        short l_822 = 1L;
        short l_823 = 0xFC1CL;
        int l_824 = 1L;
        l_824 = (safe_lshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(l_789.f2, (safe_add_func_int8_t_s_s((l_823 = (safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u(((func_51(func_31((safe_mul_func_uint16_t_u_u(0x76DFL, g_284.f4)), (g_2 | func_5((g_167 = l_822), ((0x6AL || p_30) & (p_28 = (g_2 != (g_188.f6 > 4L))))))), g_706, l_822, l_338, g_706) ^ g_768) <= 0x182AL), l_822)) != 0x69L), 7)) < 8UL), 0L))), g_2)))), l_822)) >= l_822), p_30));
    }
    return p_29;
}







static struct S0 func_31(unsigned p_32, unsigned p_33)
{
    unsigned char l_356 = 6UL;
    int l_357 = 6L;
    struct S0 l_369 = {9L,-9L,4294967295UL,0xC9BEBC32L,0x68L,-6L,0x5BDC4105L};
    unsigned char l_530 = 0x4DL;
    int l_561 = 0x531E5470L;
    unsigned l_631 = 0x083F6B17L;
    unsigned l_695 = 0UL;
    int l_708 = (-8L);
    int l_741 = (-1L);
lbl_661:
    for (p_33 = 0; (p_33 == 14); p_33++)
    {
        char l_355 = 0x67L;
        for (g_284.f5 = (-29); (g_284.f5 <= 15); ++g_284.f5)
        {
            unsigned l_354 = 4294967289UL;
            int l_358 = (-3L);
            struct S0 l_383 = {0x7D3DL,-3L,4294967295UL,7L,0x4DL,0L,0x53772DA2L};
            l_358 = func_58(func_58((safe_lshift_func_uint16_t_u_u(func_37(((safe_unary_minus_func_uint16_t_u(((safe_add_func_int32_t_s_s(g_155, func_58(func_37((l_356 = (0xD1L ^ (safe_add_func_int16_t_s_s(1L, (((safe_div_func_uint16_t_u_u(65535UL, ((safe_mod_func_int32_t_s_s(0L, g_284.f4)) || g_132))) == (l_354 == l_354)) < l_355))))), l_354, l_357, g_284.f4), g_202, l_358, p_32, g_337))) && 0xC89F135EL))) || (-10L)), g_284.f1, l_354, l_357), 6)), p_32, g_337, l_357, g_284.f2), p_32, l_355, l_354, g_188.f3);
            for (g_284.f0 = 21; (g_284.f0 > (-15)); g_284.f0 = safe_sub_func_uint32_t_u_u(g_284.f0, 2))
            {
                int l_375 = 1L;
                int l_376 = 0x1051B631L;
                l_376 = (safe_mul_func_uint8_t_u_u((l_357 = p_33), func_77(g_284.f5, (safe_mul_func_int8_t_s_s((safe_div_func_uint16_t_u_u((l_369.f1 = (safe_lshift_func_uint8_t_u_s(func_5(func_51((g_188 = l_369), (func_5((safe_div_func_int16_t_s_s(g_116, p_32)), (safe_div_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(g_284.f0)), ((l_358 = l_369.f3) ^ p_32)))) <= l_375), l_354, l_369.f0, g_284.f2), g_2), 3))), 0x9CFDL)), g_284.f0)), p_32)));
                for (g_132 = 0; (g_132 > 22); ++g_132)
                {
                    if (l_355)
                        break;
                    for (l_358 = 25; (l_358 >= (-25)); l_358--)
                    {
                        g_284.f1 = (safe_mod_func_int8_t_s_s(0x4BL, ((-10L) & (l_357 = g_188.f2))));
                        g_188.f1 = 1L;
                        l_369 = l_383;
                        g_188 = g_284;
                    }
                }
            }
        }
    }
    if ((safe_unary_minus_func_uint8_t_u(g_188.f1)))
    {
        struct S0 l_385 = {1L,0x41997E4CL,7UL,-1L,1L,9L,-10L};
        int l_467 = 2L;
        int l_468 = 1L;
        struct S0 l_470 = {6L,0xA6B21737L,4294967286UL,0x56664ACDL,0x0DL,0x4507L,-1L};
        g_188 = (l_385 = l_369);
        if (((g_188.f4 = (l_385.f3 || (p_33 > (g_254 = (((safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(0x0AA29DE7L, (safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((g_119 = (((p_32 = ((safe_lshift_func_uint16_t_u_s(65528UL, (g_284.f5 = g_188.f4))) <= (l_369.f1 = l_385.f0))) == (safe_add_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((g_284.f4 = g_188.f4), 0xC1L)) != g_2), l_357))) != 249UL)), p_33)), p_33)))), 1)) != g_188.f4) | l_385.f6))))) <= l_385.f3))
        {
            g_188 = g_188;
        }
        else
        {
            int l_402 = 1L;
            int l_423 = 0x651075F8L;
            int l_436 = 0x7493E909L;
            struct S0 l_455 = {-3L,8L,4294967289UL,0x8A46075FL,0x81L,0L,0L};
            char l_466 = 0x9DL;
            unsigned short l_469 = 0xF905L;
            if (p_33)
            {
                unsigned l_409 = 4294967295UL;
                unsigned short l_424 = 0UL;
                struct S0 l_425 = {0x9497L,-1L,4294967295UL,0x884D231EL,-1L,0xB127L,0x19C6F292L};
                int l_430 = 0L;
                for (g_284.f5 = 0; (g_284.f5 <= (-21)); --g_284.f5)
                {
                    int l_422 = 0x5804FEDBL;
                    g_188 = g_188;
                    l_424 = (l_423 = ((l_402 ^ g_284.f2) || (safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(g_188.f6, l_409)), (safe_mul_func_uint16_t_u_u(g_119, (g_188.f5 = (safe_mul_func_int8_t_s_s((l_385.f1 = (g_188.f4 = (safe_lshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u(((1UL == (p_33 <= func_5(p_33, (safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s((p_33 | p_32), p_33)), p_33))))) & l_422), g_188.f0)), 2)))), 9L))))))), g_188.f3))));
                    g_188 = l_425;
                }
                for (l_425.f1 = 0; (l_425.f1 <= 10); l_425.f1++)
                {
                    short l_431 = (-1L);
                    for (l_369.f1 = (-5); (l_369.f1 >= (-3)); l_369.f1 = safe_add_func_uint16_t_u_u(l_369.f1, 6))
                    {
                        g_284.f1 = (l_402 && (g_284.f0 = (l_430 = g_284.f3)));
                    }
                    l_436 = (l_423 = ((func_77(g_155, l_431, func_37((g_116 = l_357), (safe_rshift_func_uint16_t_u_s(func_5(g_132, ((safe_lshift_func_int16_t_s_u(9L, 7)) && (l_431 & 0x5F8BL))), 14)), (l_385.f1 = g_254), g_284.f3)) >= l_431) > 0UL));
                }
                if (g_188.f5)
                {
                    for (g_284.f0 = (-14); (g_284.f0 != (-5)); ++g_284.f0)
                    {
                        l_436 = 0xD1B261DAL;
                        if (p_33)
                            break;
                    }
                    return l_385;
                }
                else
                {
                    for (p_33 = 0; (p_33 < 59); p_33++)
                    {
                        l_423 = (safe_unary_minus_func_int16_t_s(l_409));
                    }
                }
            }
            else
            {
                int l_452 = 2L;
                l_357 = (p_32 != (safe_lshift_func_uint16_t_u_u(g_145, (safe_mod_func_int32_t_s_s((safe_div_func_int8_t_s_s(0L, g_284.f5)), ((!((safe_add_func_uint32_t_u_u((func_37(p_32, g_188.f2, (safe_mod_func_int8_t_s_s(((g_284.f0 <= p_33) & p_33), l_452)), g_188.f0) > 246UL), 1L)) | g_132)) ^ g_145))))));
            }
            l_436 = (l_369.f1 = ((safe_div_func_int16_t_s_s(l_423, func_51((g_188 = l_455), g_119, (safe_sub_func_int16_t_s_s((-9L), (l_468 = ((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(g_284.f4, ((safe_mul_func_uint8_t_u_u((l_467 = ((0x48L | func_77((l_385.f1 = (safe_mul_func_uint16_t_u_u(l_455.f4, 0xE664L))), l_466, l_385.f2)) & 0xCB7CL)), 0x99L)) <= p_33))), g_145)) < g_155)))), g_155, g_284.f2))) ^ l_469));
            g_254 = g_284.f2;
        }
        l_385 = l_470;
        l_369.f1 = ((func_77(g_284.f3, ((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((l_470.f1 = ((((g_475 = (l_369.f6 < 0L)) || l_369.f6) || (l_369.f1 < ((safe_sub_func_uint8_t_u_u(((l_369.f3 > (g_145 = p_33)) ^ (g_478 = 65534UL)), (p_33 != p_33))) != 255UL))) || p_33)), p_32)) <= 0x1A79A1D3L), 2)) | 0xF0B8L), l_369.f0) & l_385.f3) && g_475);
    }
    else
    {
        char l_493 = 0L;
        int l_498 = (-1L);
        char l_508 = 0xD0L;
        struct S0 l_593 = {0x5ECCL,0x60375822L,0UL,0xAD7CEA23L,3L,-7L,-6L};
        unsigned l_609 = 0xF16CD8C8L;
        unsigned char l_687 = 253UL;
lbl_592:
        l_369.f1 = (safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(p_32, (g_155 <= (safe_lshift_func_uint16_t_u_s((safe_mul_func_uint32_t_u_u(p_32, ((((-1L) >= func_51(l_369, (((l_498 = (0UL <= ((+func_58((safe_mod_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((((safe_div_func_uint8_t_u_u((l_493 >= (((0xB745L > (safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((g_132 >= 0xAAL), l_493)), p_33))) != p_32) < 0xACL)), l_493)) | 0x81L) && g_132), p_32)) > g_202), l_493)), l_498, g_188.f4, g_116, p_32)) || g_188.f3))) && g_475) & p_32), g_188.f4, p_32, g_188.f6)) || g_188.f1) != 0L))), l_369.f6))))), g_475));
        if ((safe_div_func_uint8_t_u_u(func_43(l_369), l_369.f1)))
        {
            struct S0 l_501 = {-1L,-8L,0x41E486DEL,-9L,-1L,0xFB40L,1L};
            unsigned l_552 = 7UL;
            if (((((0x2F4FFE47L != func_51(l_501, (safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((g_119 = l_493), (-1L))), p_33)), (safe_sub_func_uint32_t_u_u((g_188.f2 = (l_508 = (0x48L <= l_501.f3))), 1UL)), g_188.f0, p_33)) == l_501.f6) & p_33) == 0x0391L))
            {
                short l_537 = 1L;
                int l_538 = 0xC538D2C8L;
                struct S0 l_562 = {0xFA8EL,5L,3UL,0x51FE829BL,0xE5L,0x94DAL,0x386950EFL};
lbl_563:
                l_501.f1 = p_32;
                if (func_77(((p_32 >= func_77(g_188.f5, (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((p_32 < (g_337 < (g_284.f2 = (safe_mod_func_uint16_t_u_u(func_43(l_501), p_32))))), 3)), (g_337 | l_508))), p_33)) != l_369.f0), p_33, p_32))
                {
                    struct S0 l_515 = {-1L,-10L,0x069D2D8EL,0xC57E579DL,0xD7L,6L,0xAC422ADFL};
                    if (func_43(l_515))
                    {
                        char l_521 = 1L;
                        g_188.f1 = (safe_mod_func_int16_t_s_s(g_188.f1, ((safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u(func_51((g_284 = (l_501 = l_369)), (g_202 = l_521), g_119, (0L || (safe_sub_func_int16_t_s_s((!(!9L)), p_32))), ((safe_div_func_int16_t_s_s(((((g_145 <= (g_188.f4 = p_33)) >= g_188.f3) <= p_33) >= 0x1D72L), 0x9D5FL)) < g_119)))), 0L)) & g_188.f3)));
                    }
                    else
                    {
                        struct S0 l_526 = {0x06CFL,0L,0UL,0L,-2L,0xD915L,-1L};
                        l_369 = (g_284 = g_284);
                        g_284 = l_526;
                    }
                    l_501.f1 = (func_51(g_188, (safe_add_func_int8_t_s_s(((safe_unary_minus_func_uint32_t_u((g_284.f6 || g_284.f4))) || l_501.f0), (0UL == (l_515.f1 = p_32)))), p_33, p_32, p_32) ^ g_254);
                }
                else
                {
                    int l_545 = 0x72FBA364L;
                    struct S0 l_577 = {0xD008L,6L,5UL,1L,0L,0x640FL,1L};
                    g_167 = func_77((l_498 = (func_77(g_188.f0, g_188.f4, l_530) | (((safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((((-1L) == (l_369.f1 && ((p_33 = l_501.f6) && (l_369.f3 ^ (l_538 = ((safe_mul_func_uint8_t_u_u(251UL, 0xB1L)) & l_537)))))) || g_478), g_284.f5)), g_119)) > p_32) && g_145))), g_188.f3, g_188.f0);
                    if ((!((func_58(l_501.f4, (safe_lshift_func_uint16_t_u_s((0UL & (safe_add_func_int32_t_s_s(p_33, (+(safe_mod_func_uint16_t_u_u(((+(l_537 ^ ((l_545 = g_284.f3) && func_5(p_32, g_284.f6)))) & (g_284.f1 = 0x1CCB8855L)), l_538)))))), p_33)), p_33, g_188.f6, g_254) > p_32) & g_2)))
                    {
                        unsigned l_551 = 5UL;
                        l_498 = (safe_rshift_func_uint8_t_u_u(l_501.f0, (func_51(g_284, p_33, l_545, (safe_unary_minus_func_int16_t_s((((p_32 <= func_77(l_538, g_188.f2, func_5((safe_rshift_func_uint8_t_u_s(l_369.f1, 6)), p_33))) != g_284.f3) > 3UL))), l_551) & l_551)));
                    }
                    else
                    {
                        unsigned l_560 = 4294967295UL;
                        l_562 = func_45(l_552, l_493, (p_32 || (((l_561 = ((safe_mul_func_int16_t_s_s((func_5(p_33, (safe_unary_minus_func_uint32_t_u((safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((func_58(p_33, p_32, l_560, g_145, l_501.f2) >= l_545), 4UL)), (-3L)))))) && p_32), g_337)) > p_32)) || p_33) != 0xD2CE0D3EL)));
                        l_369 = g_188;
                        if (g_188.f1)
                            goto lbl_563;
                    }
                    for (l_493 = (-13); (l_493 <= (-27)); l_493--)
                    {
                        short l_566 = 0x35E9L;
                        struct S0 l_567 = {0L,0x8048058DL,0x55F846FEL,0x1E956571L,0x20L,9L,0x3F0EC19EL};
                        if (l_566)
                            break;
                        l_369.f1 = g_2;
                        return l_567;
                    }
                    if ((g_188.f2 || (((safe_lshift_func_int8_t_s_s(0x47L, ((g_188.f4 & (safe_add_func_uint32_t_u_u((p_33 < p_32), p_32))) || g_284.f0))) > ((safe_div_func_int16_t_s_s(((0x4702L != g_284.f4) & 0xF5L), 0x704BL)) >= p_32)) == 0L)))
                    {
                        l_501.f1 = l_562.f6;
                        if (g_188.f4)
                            goto lbl_576;
lbl_576:
                        g_284.f1 = g_284.f6;
                        g_188 = l_577;
                        g_254 = (l_369.f1 = ((safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s(((l_498 = 0x12L) && (safe_add_func_int16_t_s_s(g_145, (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(func_37(func_43(g_188), l_369.f0, l_357, l_369.f0), 65526UL)), p_32))))), 0UL)), g_284.f0)), 0xF3F6L)), p_33)) != 0x2DL));
                    }
                    else
                    {
                        if (g_254)
                            goto lbl_592;
                    }
                }
            }
            else
            {
                struct S0 l_594 = {-3L,0x8257AE0BL,0x788B7660L,2L,0x96L,9L,0x90FC8968L};
                l_501 = (l_593 = g_284);
                if (l_501.f1)
                    goto lbl_592;
                g_284 = l_594;
                g_188 = g_188;
            }
            return l_593;
        }
        else
        {
            short l_608 = (-1L);
            int l_680 = 0xF552F81DL;
            struct S0 l_686 = {0x7B43L,0xD943739BL,4294967295UL,-9L,-4L,0x7329L,0L};
            if ((func_51(l_369, g_595, (p_32 > g_155), ((safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(65535UL, (safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((func_51(l_369, p_32, (g_119 = (safe_rshift_func_int16_t_s_s(p_33, ((safe_mul_func_int16_t_s_s(((((l_357 = l_608) < l_369.f2) & g_188.f2) <= 1L), 9L)) & 1L)))), g_167, p_32) == 2UL), 0x8AL)), l_609)))), 0xD5L)) & l_608), l_608) & 0x221DL))
            {
                unsigned l_612 = 0x2AE1FBEBL;
                struct S0 l_662 = {0xF092L,0x40285ECAL,4294967287UL,0x3A9FCF5BL,1L,0xDBCFL,-1L};
                unsigned l_674 = 0x307F2A65L;
lbl_681:
                for (g_188.f2 = 0; (g_188.f2 > 28); g_188.f2 = safe_add_func_int8_t_s_s(g_188.f2, 1))
                {
                    char l_642 = 0L;
                    struct S0 l_663 = {0x80DCL,0xC8453EFDL,4294967295UL,0xDFF3BE77L,0x2AL,0L,0xF423FFE4L};
                    int l_679 = 1L;
                    g_284.f1 = (l_612 = 0x453BF109L);
                    if ((safe_mod_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(((p_32 < p_33) ^ g_188.f3), (((safe_mod_func_int32_t_s_s(0xB60DB3BFL, g_188.f1)) ^ (((g_284.f2 = (safe_mod_func_uint16_t_u_u(0x5C96L, func_5((safe_add_func_uint32_t_u_u(p_32, g_284.f4)), (safe_mod_func_uint16_t_u_u(((g_188.f4 = 0xCCL) ^ (-6L)), 0x6A16L)))))) & l_608) < 0xDB7EL)) > 0xBF2B7A54L))) != p_32), 1L)), 0x34EAL)) & g_478), p_32)))
                    {
                        unsigned char l_643 = 0xD7L;
                        int l_658 = 0xD7277B6CL;
                        g_167 = (g_188.f1 = (0x770CL && ((safe_mul_func_uint8_t_u_u(l_631, ((safe_rshift_func_int8_t_s_s(((((safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(g_337, (safe_mul_func_int16_t_s_s(g_188.f5, (g_284.f4 & (g_284.f6 ^ (safe_mul_func_uint8_t_u_u(p_32, p_33)))))))), func_58(g_254, p_32, p_33, p_33, g_284.f4))) >= 0x62L) && l_508) & l_642), l_643)) > g_475))) >= l_608)));
                        g_188.f1 = (g_188.f3 ^ (safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s((g_284.f3 | ((((((func_58(g_116, (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(l_369.f5, 4)), (safe_sub_func_uint16_t_u_u(0x7B16L, (safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(p_32, 14)), 0xB88AL)))))), (l_658 = g_167), func_37((safe_mul_func_int8_t_s_s(0x58L, p_32)), g_284.f6, p_33, l_642), p_33) != g_284.f1) < l_642) && l_642) <= g_595) & l_609) <= 0x75C4L)), 0x0F99L)), l_612)));
                        if (g_155)
                            goto lbl_661;
                    }
                    else
                    {
                        if (p_33)
                            break;
                        l_662 = g_284;
                        g_284 = g_188;
                        if (l_357)
                            goto lbl_681;
                        l_663 = g_188;
                    }
                    l_680 = (safe_mod_func_uint16_t_u_u((p_33 != (l_663.f1 = func_5((l_357 <= p_33), p_32))), (l_679 = (safe_sub_func_int16_t_s_s(((((safe_add_func_uint8_t_u_u(func_37(p_32, (g_145 = ((safe_lshift_func_int16_t_s_u(((safe_div_func_int16_t_s_s((l_674 = (l_593.f1 = l_608)), g_167)) == (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((l_662.f1 = ((p_32 & p_33) & p_32)) >= p_33), (-6L))), g_188.f0))), g_475)) && l_593.f0)), l_662.f6, p_32), 0xF8L)) & 0x20FAL) == l_608) && l_663.f4), g_119)))));
                }
                l_680 = ((l_687 = ((p_33 = (safe_lshift_func_int16_t_s_s(((g_284.f1 ^ (-3L)) > (safe_add_func_uint16_t_u_u(func_43(l_686), 0x1475L))), (0x4BL || g_202)))) & l_686.f2)) ^ (safe_mul_func_uint8_t_u_u(0x1DL, p_32)));
                for (g_155 = 0; (g_155 == 1); g_155 = safe_add_func_int8_t_s_s(g_155, 1))
                {
                    struct S0 l_692 = {0x2AF8L,0x749AFC8EL,0x02696175L,0L,-6L,0L,-2L};
                    l_357 = (0x09L || (l_686.f1 || g_132));
                    l_593 = g_188;
                    l_662 = (l_692 = g_284);
                    g_284 = l_593;
                }
            }
            else
            {
                int l_707 = 0xD4FAA9C2L;
                int l_709 = (-3L);
                struct S0 l_712 = {0L,1L,0xA21932A3L,4L,-5L,-2L,0x34914094L};
                unsigned l_740 = 8UL;
                for (g_478 = 0; (g_478 == 4); g_478++)
                {
                    return g_188;
                }
                if ((l_593.f3 & func_58((l_357 = g_188.f5), l_695, (safe_add_func_int32_t_s_s(func_77(((((!g_155) ^ (safe_lshift_func_uint16_t_u_s((l_709 = (func_51(g_188, p_32, (((safe_div_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_s((((0x5D1DL | g_2) & (safe_add_func_uint8_t_u_u((l_631 ^ g_337), (-2L)))) >= g_188.f4), l_356)) > g_706) | 0x08A3L), l_369.f1)) & g_116) ^ l_707), l_708, p_32) & l_686.f6)), p_32))) > g_188.f2) >= p_32), g_155, g_284.f3), 0x19951991L)), p_32, g_478)))
                {
                    return g_284;
                }
                else
                {
                    for (l_593.f0 = 0; (l_593.f0 < 20); l_593.f0++)
                    {
                        struct S0 l_713 = {0L,0x9A643DCFL,4294967295UL,6L,0xD5L,0x3A11L,-1L};
                        l_713 = l_712;
                        l_709 = (0xA2E5L < ((l_713.f1 = l_686.f4) >= (safe_sub_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(func_43(g_284), 6UL)), 0xF708L))));
                    }
                }
                g_284.f1 = (safe_sub_func_int8_t_s_s(g_284.f0, p_32));
                g_188.f1 = (p_32 >= ((safe_rshift_func_int16_t_s_s(func_58((safe_mod_func_int8_t_s_s(((l_498 = g_475) || (~g_2)), (safe_lshift_func_int8_t_s_s(((~((safe_add_func_int16_t_s_s(0x4601L, (safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((l_712.f1 = l_686.f1), func_58(g_284.f3, (l_593.f1 = 0x43L), (g_595 = g_284.f5), (safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(0xEAF84AE5L, l_740)), p_32)), l_686.f5)), l_686.f2))), l_712.f3)))) && p_33)) >= (-1L)), p_32)))), l_369.f2, g_284.f1, g_337, l_741), g_188.f4)) && 0x48L));
            }
            return g_188;
        }
    }
    l_369 = g_188;
    l_357 = func_43(l_369);
    return l_369;
}







static unsigned char func_37(unsigned char p_38, unsigned short p_39, int p_40, char p_41)
{
    return g_284.f5;
}







static unsigned func_43(struct S0 p_44)
{
    int l_326 = 0L;
    int l_329 = 1L;
    char l_336 = 0x62L;
    g_188.f1 = func_58((g_284.f1 || (safe_sub_func_uint8_t_u_u(l_326, (safe_div_func_int8_t_s_s(l_326, 0xBDL))))), g_145, (g_284.f5 = ((((p_44.f1 = ((l_329 = l_326) < (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((func_58(g_155, g_188.f6, (func_51(g_284, p_44.f4, p_44.f4, l_326, p_44.f5) <= 9UL), g_284.f0, p_44.f1) & 0x2C29L) >= l_336), 11)), 6)), 4294967291UL)))) | g_284.f6) || p_44.f4) | p_44.f6)), p_44.f0, l_336);
    return p_44.f4;
}







static struct S0 func_45(unsigned char p_46, unsigned char p_47, unsigned p_48)
{
    unsigned short l_134 = 65535UL;
    struct S0 l_135 = {-8L,0xDD65D987L,0x5FAFB163L,-5L,-1L,0L,8L};
    int l_144 = (-10L);
    unsigned char l_146 = 0x58L;
    int l_147 = 0x11A8DCBCL;
    unsigned char l_168 = 250UL;
    struct S0 l_189 = {0L,0xA1B52123L,4294967286UL,-3L,0x4FL,0x55B7L,1L};
    short l_200 = 0xA6E0L;
    unsigned char l_242 = 3UL;
    unsigned l_262 = 0xD2B076EBL;
    unsigned char l_275 = 0x4AL;
    l_134 = p_47;
    if ((p_46 | func_51((l_135 = l_135), ((safe_rshift_func_uint16_t_u_s(g_116, 4)) > (l_147 = (safe_rshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s((g_145 = (!(0x22B6L == (safe_mul_func_int16_t_s_s((l_144 = (g_132 = 0x2652L)), p_48))))), (l_146 = g_2))), 3)))), g_119, l_134, g_116)))
    {
        unsigned short l_150 = 65535UL;
        int l_156 = 1L;
        struct S0 l_161 = {0xE8EBL,0x946C84E0L,0xF389711EL,0L,0x0BL,0x8DDDL,0xEBFA9BDDL};
        int l_162 = 1L;
        l_135.f1 = (g_116 == (l_147 = (0x74L ^ (l_150 = (safe_add_func_int32_t_s_s((~l_135.f0), g_116))))));
        l_168 = ((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((l_156 = ((g_155 = l_135.f3) && 0UL)), (1UL <= ((safe_rshift_func_uint16_t_u_u(1UL, func_5((g_167 = func_77((l_144 = func_5((safe_sub_func_uint32_t_u_u(p_46, (0xEFL <= func_51(l_161, (l_162 = (-3L)), (+func_58((safe_div_func_uint32_t_u_u((((safe_mod_func_int16_t_s_s(g_132, p_47)) >= p_48) || 6L), l_150)), g_119, l_150, l_161.f6, l_135.f5)), l_135.f6, l_161.f1)))), p_46)), g_145, p_47)), p_46))) ^ 0UL)))), g_2)) && 0xC211L);
    }
    else
    {
        int l_173 = 2L;
        struct S0 l_187 = {0x915AL,0x5C47ABECL,4294967286UL,-7L,0x40L,0xD08FL,0x0D6E8A3BL};
        l_173 = (safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((l_173 || (((safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(p_46, func_77((safe_lshift_func_uint8_t_u_u(((safe_unary_minus_func_int16_t_s((((~0xE3L) != ((safe_div_func_uint8_t_u_u((((p_47 | (l_135.f1 = g_155)) | (safe_add_func_uint32_t_u_u((+0x7ACCF6E1L), ((safe_div_func_uint8_t_u_u(g_145, func_58(g_145, g_132, p_47, p_47, l_173))) || g_132)))) | p_47), p_48)) < 2UL)) && p_47))) <= 0x60D0L), p_48)), l_173, g_167))), 2)) != 1L) & g_132)), p_48)), 0x5FL));
        g_188 = l_187;
        if (p_46)
        {
            struct S0 l_190 = {0x75CBL,-1L,4294967295UL,-1L,0xAFL,0x555BL,0x299B2AD0L};
            l_190 = (l_189 = l_187);
            l_135 = g_188;
            l_190 = l_189;
        }
        else
        {
            unsigned char l_197 = 0xB3L;
            int l_201 = (-6L);
            g_188.f1 = (safe_add_func_int16_t_s_s(((g_145 = p_48) != (g_202 = ((l_187.f1 = (((safe_mod_func_uint8_t_u_u(func_51(l_135, (g_188.f3 = (((func_51(l_187, (0L == (l_147 = (safe_mul_func_int16_t_s_s((l_197 = g_188.f2), (((l_200 = (p_46 > ((g_188.f2 >= (g_119 = 0x7BL)) <= g_2))) <= 1L) & g_188.f0))))), g_188.f2, g_116, p_48) & l_187.f3) == l_201) ^ 0xE8L)), p_46, l_187.f3, g_188.f5), g_2)) || p_48) | p_48)) | 0xDC6AL))), l_173));
        }
    }
lbl_323:
    for (l_189.f4 = 23; (l_189.f4 < (-11)); --l_189.f4)
    {
        short l_211 = 6L;
        int l_214 = 1L;
        struct S0 l_255 = {0x939DL,-1L,4294967294UL,0x31FF24D7L,-10L,-8L,4L};
        for (l_189.f2 = (-26); (l_189.f2 < 60); l_189.f2 = safe_add_func_int8_t_s_s(l_189.f2, 9))
        {
            char l_217 = 0x17L;
            int l_218 = 0L;
            int l_219 = 0xDC768721L;
            if ((((safe_lshift_func_int8_t_s_u(g_116, 1)) > ((safe_rshift_func_uint16_t_u_s(p_47, ((l_211 & p_47) != func_77((((safe_div_func_int32_t_s_s((g_167 = ((g_188.f0 = ((1L != (l_214 = 1UL)) >= (l_219 = ((l_218 = (g_188.f3 && func_77(p_47, ((safe_add_func_int16_t_s_s(l_217, l_211)) <= p_47), g_155))) <= l_217)))) >= p_46)), 2UL)) == l_134) <= l_135.f6), g_119, p_47)))) && 0x4682L)) <= g_188.f1))
            {
                g_188 = g_188;
                if (g_145)
                    continue;
            }
            else
            {
                char l_239 = 4L;
                int l_243 = 9L;
                for (g_119 = 20; (g_119 < 34); ++g_119)
                {
                    int l_230 = 0x45C51EADL;
                    if ((func_77((g_188.f0 = (((safe_rshift_func_uint8_t_u_u(((p_48 = (safe_mul_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(((safe_add_func_uint32_t_u_u(p_47, l_230)) >= ((safe_add_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(l_214, 0x1905L)) >= (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(l_218, 4)), ((-7L) > l_239)))), (safe_sub_func_uint32_t_u_u((((((g_116 && (l_243 = ((!l_189.f1) < l_242))) && 0xE2L) & l_239) >= g_188.f4) <= l_239), l_211)))) || 0x0324E9D9L)), g_188.f3)) ^ p_46), l_211))) == g_119), g_188.f3)) < 0x80103624L) >= g_155)), g_188.f5, g_188.f4) < 0x78347ABFL))
                    {
                        g_167 = ((safe_div_func_uint32_t_u_u(p_47, l_239)) >= (p_48 > func_58(func_77(p_46, (safe_div_func_uint8_t_u_u((l_218 = (0x994F7FA5L < g_119)), ((((-1L) == (safe_sub_func_int16_t_s_s(l_200, 1UL))) >= l_189.f3) & p_46))), p_48), l_211, l_217, l_242, p_47)));
                    }
                    else
                    {
                        g_188.f1 = l_243;
                        return l_189;
                    }
                    l_189.f1 = 0x568F5A85L;
                    g_188 = g_188;
                }
                g_188.f1 = (safe_div_func_uint16_t_u_u(func_58(g_155, (safe_mul_func_int16_t_s_s(((g_188.f5 < (l_218 == g_188.f5)) == p_48), 1UL)), p_46, l_243, (g_254 = ((g_132 = (((-3L) == g_167) && p_47)) <= 0UL))), p_48));
                g_167 = p_47;
            }
            l_255 = l_255;
        }
        l_135 = l_135;
    }
    if ((g_202 ^ (l_147 = (safe_sub_func_uint32_t_u_u(p_48, (safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(g_188.f5, ((l_262 == (p_48 & (safe_mod_func_uint32_t_u_u(((g_132 = (l_189.f6 >= (safe_add_func_uint32_t_u_u((l_144 = (l_189.f1 = 2UL)), g_188.f4)))) & g_167), g_116)))) | (-10L)))), l_189.f3)))))))
    {
        unsigned l_276 = 5UL;
        struct S0 l_277 = {0x03CEL,0xFD678DBAL,0xA70E696EL,-1L,0x8AL,-1L,1L};
        if (((p_48 != ((safe_div_func_int16_t_s_s((-4L), g_188.f5)) | (g_119 | (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(l_189.f1, (safe_sub_func_int32_t_s_s(((l_275 | p_48) <= l_276), p_48)))), 0x15L))))) >= 8L))
        {
            char l_278 = 0L;
            struct S0 l_285 = {-6L,8L,0x3AD1F110L,1L,0x75L,5L,0x6EB511B2L};
            if ((p_47 <= p_46))
            {
                g_188 = l_277;
                l_278 = (-1L);
                for (g_188.f3 = 9; (g_188.f3 >= (-7)); g_188.f3 = safe_sub_func_uint32_t_u_u(g_188.f3, 2))
                {
                    short l_283 = 2L;
                    struct S0 l_288 = {0x5FF8L,0xF1C5D373L,0x8A6C8DEDL,-1L,0x17L,0x8BD1L,6L};
                    for (l_135.f4 = (-19); (l_135.f4 < (-21)); l_135.f4 = safe_sub_func_int32_t_s_s(l_135.f4, 4))
                    {
                        l_283 = p_46;
                        l_285 = (g_284 = l_135);
                    }
                    for (g_188.f0 = 0; (g_188.f0 != 6); ++g_188.f0)
                    {
                        return l_288;
                    }
                }
            }
            else
            {
                int l_294 = 0x549B1720L;
                l_285 = l_277;
                if (l_189.f1)
                    goto lbl_295;
lbl_296:
                g_254 = p_47;
lbl_295:
                for (g_145 = 0; (g_145 <= 54); g_145 = safe_add_func_int8_t_s_s(g_145, 5))
                {
                    struct S0 l_293 = {0L,-1L,0xE57FDA3CL,0xB0DC29E2L,-1L,-1L,-6L};
                    for (g_188.f3 = 0; (g_188.f3 < (-2)); --g_188.f3)
                    {
                        l_285 = l_293;
                        if (g_188.f0)
                            continue;
                        l_277.f1 = g_116;
                        l_294 = l_189.f4;
                    }
                }
                if (g_116)
                    goto lbl_296;
            }
        }
        else
        {
            short l_303 = 0xBBC7L;
            int l_316 = 0x76518F14L;
            l_189 = l_135;
            l_277.f1 = (safe_rshift_func_int8_t_s_s(((g_132 = ((safe_sub_func_uint32_t_u_u((g_188.f2 | (safe_add_func_uint32_t_u_u((g_284.f2 = (~l_277.f5)), p_48))), l_303)) == (safe_div_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(g_119, (safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((l_144 = func_77(g_188.f0, p_48, (l_316 = (safe_mod_func_int16_t_s_s(1L, l_303))))), l_146)), 6)), l_275)))), 0xADB9L)))) >= p_47), 4));
        }
    }
    else
    {
        short l_321 = (-1L);
        int l_322 = 0x679C8553L;
        l_322 = (l_189.f1 = ((((safe_sub_func_int32_t_s_s(g_284.f3, g_188.f4)) < (l_321 = (safe_rshift_func_int16_t_s_s(l_262, ((p_48 && 0xD8L) != 0xDD86L))))) > ((g_116 = (g_119 = (((l_144 != 8L) || l_322) < 255UL))) | l_322)) != g_188.f1));
        if (l_135.f4)
            goto lbl_323;
        l_322 = (p_48 < 0xBFBDL);
    }
    return l_135;
}







static unsigned short func_51(struct S0 p_52, int p_53, unsigned char p_54, unsigned short p_55, unsigned short p_56)
{
    unsigned short l_66 = 65527UL;
    int l_74 = 0xDC3C1A33L;
    unsigned l_124 = 4UL;
    int l_125 = 0xEFE8F334L;
    int l_128 = 0x47EB4981L;
    unsigned short l_131 = 5UL;
    p_52.f1 = func_58(g_2, (safe_lshift_func_int16_t_s_s((func_5(l_66, (((-1L) & (!l_66)) < (((safe_rshift_func_int8_t_s_s((((safe_unary_minus_func_uint16_t_u(g_2)) || p_56) > g_2), ((l_74 = ((safe_add_func_int8_t_s_s(func_5((safe_mul_func_int8_t_s_s(((p_55 || l_66) != p_52.f6), g_2)), p_54), g_2)) && g_2)) == p_52.f5))) >= (-10L)) == l_66))) <= 9UL), 1)), l_66, g_2, l_66);
lbl_133:
    g_119 = (safe_mod_func_int16_t_s_s(p_56, l_66));
    p_52.f1 = (g_132 = func_5((safe_div_func_int16_t_s_s((l_74 = ((l_74 == ((l_125 = (safe_div_func_int16_t_s_s(g_119, l_124))) ^ g_2)) != l_66)), func_77((p_52.f5 = func_5((l_128 = (safe_mod_func_uint16_t_u_u(g_116, g_116))), (safe_rshift_func_int16_t_s_s(0x3A75L, ((g_2 ^ g_116) >= 255UL))))), p_52.f4, l_124))), l_131));
    if (p_55)
        goto lbl_133;
    return l_124;
}







static int func_58(unsigned char p_59, unsigned char p_60, short p_61, int p_62, unsigned p_63)
{
    short l_85 = 0x0F3EL;
    int l_88 = 0x45D263D1L;
    int l_115 = 0x469BA6CEL;
    l_88 = ((safe_lshift_func_int8_t_s_u(func_77(((p_62 | (safe_mul_func_int16_t_s_s((func_5(p_60, l_85) > g_2), 0x0EBEL))) > (((safe_lshift_func_int8_t_s_s((p_61 != l_85), p_59)) & 0x0016L) == 4294967287UL)), l_85, p_60), g_2)) || p_61);
    l_88 = 0x768641A0L;
    l_115 = ((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(((l_88 = ((safe_add_func_uint8_t_u_u(func_5(l_85, p_63), g_2)) > l_88)) | (safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(65529UL, 11)) != (safe_rshift_func_int16_t_s_u(p_60, 8))), 0xC022L)), (((safe_div_func_int32_t_s_s((p_63 & g_2), g_2)) || 0UL) > g_2))) != p_60), 15)), p_59)), 8UL)), 0x50L)), g_2))), 13)), p_63)) && g_2);
    g_116 = (l_115 = l_115);
    return l_115;
}







static char func_77(short p_78, char p_79, unsigned short p_80)
{
    return p_79;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_188.f0, "g_188.f0", print_hash_value);
    transparent_crc(g_188.f1, "g_188.f1", print_hash_value);
    transparent_crc(g_188.f2, "g_188.f2", print_hash_value);
    transparent_crc(g_188.f3, "g_188.f3", print_hash_value);
    transparent_crc(g_188.f4, "g_188.f4", print_hash_value);
    transparent_crc(g_188.f5, "g_188.f5", print_hash_value);
    transparent_crc(g_188.f6, "g_188.f6", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_284.f0, "g_284.f0", print_hash_value);
    transparent_crc(g_284.f1, "g_284.f1", print_hash_value);
    transparent_crc(g_284.f2, "g_284.f2", print_hash_value);
    transparent_crc(g_284.f3, "g_284.f3", print_hash_value);
    transparent_crc(g_284.f4, "g_284.f4", print_hash_value);
    transparent_crc(g_284.f5, "g_284.f5", print_hash_value);
    transparent_crc(g_284.f6, "g_284.f6", print_hash_value);
    transparent_crc(g_337, "g_337", print_hash_value);
    transparent_crc(g_475, "g_475", print_hash_value);
    transparent_crc(g_478, "g_478", print_hash_value);
    transparent_crc(g_595, "g_595", print_hash_value);
    transparent_crc(g_706, "g_706", print_hash_value);
    transparent_crc(g_768, "g_768", print_hash_value);
    transparent_crc(g_881, "g_881", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
