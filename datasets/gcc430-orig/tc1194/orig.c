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



static unsigned g_3 = 0xC184C506L;
static int g_17 = 0x54EE87F6L;
static unsigned g_41 = 0x790660D6L;
static short g_45 = 0x50DFL;
static short g_46 = (-1L);
static volatile int g_81 = 0x9274CB07L;
static unsigned g_82 = 0x42353725L;
static unsigned g_92 = 3UL;
static char g_98 = (-1L);
static int g_119 = (-1L);
static volatile unsigned g_143 = 0xC178791AL;
static int g_157 = (-6L);
static short g_159 = 0x30E4L;
static int g_171 = 0x1EAB3F10L;
static unsigned short g_219 = 65532UL;
static volatile char g_247 = 0xCBL;
static int g_250 = 6L;
static volatile int g_252 = 0x7DFEA92DL;
static volatile unsigned char g_253 = 0UL;
static char g_289 = 0x6DL;
static unsigned g_292 = 0x8685255FL;
static unsigned g_294 = 0x3429015BL;
static unsigned short g_312 = 65535UL;
static unsigned char g_331 = 0xE2L;
static int g_411 = 4L;
static volatile unsigned g_470 = 0x807C01A6L;
static int g_478 = 0xBC2EA86DL;
static char g_521 = 0x15L;
static unsigned short g_574 = 0x865CL;
static int g_607 = 0xDFE44A10L;
static short g_613 = 0x921DL;
static unsigned g_681 = 1UL;
static volatile int g_738 = (-1L);
static volatile char g_739 = 0xF5L;
static volatile char g_740 = (-4L);
static volatile char g_741 = 0xE6L;
static unsigned g_745 = 0xCB3EF157L;
static int g_757 = 0x43F9D9CBL;
static short g_764 = (-1L);
static volatile char g_765 = 0x26L;
static volatile unsigned short g_776 = 0x30CBL;
static volatile unsigned short g_787 = 65535UL;
static unsigned short g_807 = 65528UL;
static int g_841 = 0L;
static unsigned g_881 = 4294967295UL;
static unsigned g_909 = 1UL;
static volatile unsigned g_918 = 4294967295UL;
static unsigned g_988 = 4294967292UL;



static short func_1(void);
static unsigned short func_14(char p_15, const short p_16);
static char func_18(short p_19, int p_20, unsigned p_21);
static short func_24(unsigned char p_25, unsigned p_26);
static unsigned func_27(unsigned p_28, short p_29, char p_30);
static short func_33(unsigned p_34);
static int func_35(unsigned char p_36, unsigned p_37, const short p_38, const int p_39);
static short func_52(unsigned char p_53);
static int func_56(int p_57, unsigned short p_58);
static short func_64(char p_65, int p_66, unsigned p_67, unsigned char p_68, unsigned p_69);
static short func_1(void)
{
    char l_2 = (-1L);
    int l_842 = 1L;
    unsigned l_845 = 0x26214C65L;
    unsigned char l_873 = 1UL;
    unsigned l_880 = 0xE9CB8CF2L;
    unsigned l_888 = 0xCA129361L;
    int l_929 = 0xD6BED462L;
    unsigned char l_931 = 1UL;
    int l_938 = (-1L);
    unsigned l_939 = 4294967294UL;
    int l_972 = 4L;
    g_3--;
    l_842 = (safe_lshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(g_3, (safe_div_func_uint16_t_u_u((l_2 < (safe_sub_func_uint16_t_u_u(func_14(l_2, (g_17 &= 0xBC10L)), ((((g_841 = (safe_unary_minus_func_int8_t_s(((g_613 == 1UL) != (((l_2 | 0xD1L) > 0x9A45L) | l_2))))) | l_2) >= g_3) != l_2)))), l_2)))), g_764));
    if ((g_738 == (safe_rshift_func_uint16_t_u_s(0xDBEFL, 14))))
    {
        l_842 = (g_250 &= l_845);
    }
    else
    {
        int l_848 = 0xE4899CB1L;
        int l_861 = 0L;
        unsigned l_893 = 4294967295UL;
        unsigned short l_905 = 3UL;
        unsigned short l_967 = 0xC83EL;
        unsigned short l_989 = 7UL;
        l_848 &= (safe_sub_func_uint8_t_u_u(g_776, g_613));
        if ((func_27((l_2 & (safe_mod_func_uint8_t_u_u(((func_33(((-5L) < (safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((+(safe_sub_func_uint32_t_u_u((func_18((safe_rshift_func_int8_t_s_s(((((l_848 |= 0xE0A7AB15L) | 0xA3F17FDCL) <= l_861) | (g_312 &= l_842)), 3)), g_3, func_33(l_861)) & g_247), g_331))), 0x5CL)), 7)), g_574)))) == g_574) | g_613), l_845))), g_289, g_82) < 0x24L))
        {
            unsigned short l_869 = 1UL;
            int l_887 = 0xF55B125FL;
            if (g_82)
            {
                unsigned short l_872 = 1UL;
                unsigned char l_882 = 0xEEL;
                for (g_45 = 0; (g_45 == (-23)); g_45 = safe_sub_func_uint16_t_u_u(g_45, 4))
                {
                    int l_866 = 1L;
                    l_842 = (safe_div_func_int32_t_s_s(func_33(l_866), (safe_rshift_func_uint16_t_u_u(func_52((g_331 = g_478)), 0))));
                    return l_869;
                }
                g_171 |= (g_757 = ((safe_div_func_int8_t_s_s(func_24(l_872, l_873), func_18(((safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(func_18(func_33(g_46), g_247, ((safe_lshift_func_int16_t_s_s((l_842 < func_18(((((l_848 ^ (g_3 = 0x39D83C96L)) < g_157) > l_2) > 0x20L), g_46, l_845)), 14)) | l_880)), g_881)), g_764)) ^ 0x7FE6L), g_250, l_882))) || 0x4925L));
                g_411 = ((safe_add_func_int8_t_s_s((func_33(l_869) > g_681), (0x352FL && (l_842 = 0x779BL)))) && func_52(l_869));
                g_250 = g_247;
            }
            else
            {
                unsigned l_894 = 0xEEC7F7ADL;
                int l_904 = 0x785F2767L;
                unsigned char l_933 = 0UL;
                if (((safe_div_func_uint16_t_u_u((l_869 < g_521), g_17)) <= l_869))
                {
                    short l_903 = (-1L);
                    l_888++;
                    l_904 = ((func_64(g_219, l_869, (safe_div_func_int32_t_s_s(((l_894 = (8UL < (g_3 &= (~l_893)))) ^ l_887), func_33((safe_mod_func_int16_t_s_s(g_252, (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((((+l_869) > ((safe_lshift_func_uint8_t_u_s(l_903, 4)) >= func_33(g_331))) & 0x28BBL), l_903)), g_45))))))), g_613, g_159) == 0x31L) & g_521);
                    return l_888;
                }
                else
                {
                    char l_908 = 0x94L;
                    unsigned l_930 = 4294967288UL;
                    int l_932 = 0xA84256A8L;
                    l_905--;
                    --g_909;
                    g_171 |= (func_35((safe_sub_func_int8_t_s_s((g_681 & 0xBBL), func_35(((safe_lshift_func_uint16_t_u_u((g_219--), 7)) || g_918), (safe_rshift_func_int16_t_s_u((((!(safe_div_func_int16_t_s_s((2UL ^ (safe_div_func_int8_t_s_s((safe_add_func_int8_t_s_s((g_98 &= (g_521 = g_607)), (g_3 > ((g_745 &= 0UL) ^ (-6L))))), (g_331 = func_18((safe_lshift_func_int16_t_s_s((g_613 = l_929), g_292)), l_930, l_904))))), l_931))) < l_861) >= l_930), 13)), g_17, g_46))), g_119, g_45, g_312) ^ l_894);
                    l_933--;
                }
                if ((l_938 |= ((safe_lshift_func_uint8_t_u_s(g_143, 6)) < 0xC5L)))
                {
                    l_842 = 0x2CBF926DL;
                    l_939++;
                }
                else
                {
                    for (l_848 = (-14); (l_848 == 13); l_848 = safe_add_func_uint16_t_u_u(l_848, 8))
                    {
                        g_478 ^= g_764;
                    }
                }
                g_607 = (((g_331 &= 1UL) >= (safe_add_func_uint16_t_u_u(l_905, (l_842 ^= (!l_904))))) < ((safe_rshift_func_uint8_t_u_u(0UL, func_56(l_861, l_893))) <= func_33(l_869)));
            }
            g_81 = (safe_rshift_func_int8_t_s_u(0L, g_119));
            g_157 = (g_740 <= 0x7097L);
        }
        else
        {
            short l_950 = 0x834FL;
            l_842 = (func_64(g_98, (g_841 |= (g_119 = g_171)), l_950, ((l_848 = l_848) > ((func_33((++g_909)) < g_807) > (4294967291UL == g_294))), ((safe_rshift_func_int16_t_s_u(0xB6A1L, g_765)) || l_950)) <= g_757);
            g_171 = (l_950 & (l_972 = (safe_div_func_int16_t_s_s(func_35((safe_div_func_int16_t_s_s(g_250, (safe_lshift_func_int8_t_s_s((l_873 ^ (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u((l_967 >= 65531UL), 7)) != 0UL), (safe_rshift_func_int16_t_s_s((0UL && ((safe_sub_func_uint8_t_u_u((+(l_939 == 65535UL)), l_848)) > l_931)), l_929))))), 3)))), l_950, l_845, g_92), g_98))));
            g_757 |= (!(0xF5L || l_950));
        }
        g_250 &= (safe_add_func_uint8_t_u_u((g_331 = l_2), (func_35(((0UL && (!(safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s(l_972, (safe_div_func_int32_t_s_s((g_757 |= (safe_div_func_uint32_t_u_u(((l_989 &= func_35(((2L ^ 0x80L) > ((safe_unary_minus_func_int32_t_s(l_2)) >= l_2)), (func_24((safe_lshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(g_741, (g_988 = l_893))), 12)), l_2) == 6UL), g_411, l_893)) < g_764), g_745))), l_967)))), g_312)))) <= g_521), l_861, l_861, l_842) > 0x83A7L)));
    }
    return g_741;
}







static unsigned short func_14(char p_15, const short p_16)
{
    unsigned l_47 = 0UL;
    const unsigned char l_350 = 0x80L;
    int l_351 = 0L;
    unsigned l_438 = 4294967288UL;
    int l_474 = 0x9757650EL;
    int l_475 = 0x382AD20DL;
    int l_610 = 0x00ACFC79L;
    int l_707 = 0x8158C7C9L;
    short l_819 = (-1L);
    unsigned short l_820 = 65534UL;
    unsigned char l_827 = 248UL;
    if ((func_18((l_438 = (safe_lshift_func_int16_t_s_s(func_24((func_27((safe_mod_func_int32_t_s_s((3UL > (g_45 = func_33(g_3))), (l_351 = (((g_17 & g_17) || (--l_47)) || (safe_rshift_func_int8_t_s_u(func_35(((l_47 ^ (func_52(p_16) == (p_15 | l_47))) | 0xBC0FL), l_47, l_350, p_15), p_15)))))), p_16, p_15) >= l_350), g_292), 5))), g_292, l_350) > l_350))
    {
        char l_446 = 0x9DL;
        int l_447 = 1L;
        int l_460 = 7L;
        int l_461 = 7L;
        short l_473 = 8L;
        unsigned short l_514 = 0UL;
        short l_538 = (-4L);
        unsigned l_587 = 0xD0E4E403L;
        short l_598 = 0xDDF2L;
        int l_645 = 0x7D8F9618L;
        int l_664 = 0xEE5DF6E2L;
        int l_702 = 0x59CBD55DL;
        int l_756 = 0L;
        int l_775 = 0xF4775428L;
        int l_783 = 0xBE037007L;
        int l_817 = 0L;
        if (g_81)
        {
            unsigned l_449 = 4294967287UL;
            int l_463 = 0x1C4671F3L;
            int l_465 = 0x41E05720L;
            int l_467 = 8L;
            unsigned char l_503 = 8UL;
            if (p_15)
            {
                char l_448 = (-1L);
                for (g_45 = 0; (g_45 > 29); g_45 = safe_add_func_uint32_t_u_u(g_45, 6))
                {
                    const int l_445 = 0L;
                    if (l_445)
                        break;
                    g_157 = (-6L);
                }
                l_449++;
            }
            else
            {
                char l_458 = 3L;
                int l_466 = 1L;
                int l_468 = 0x37563791L;
                for (g_289 = 26; (g_289 >= (-17)); g_289--)
                {
                    short l_462 = 0xCF56L;
                    int l_464 = 7L;
                    int l_469 = 0xC5649DA2L;
                    for (g_41 = 0; (g_41 < 52); g_41++)
                    {
                        short l_459 = 0xA5E8L;
                        l_459 &= (safe_sub_func_int32_t_s_s((l_458 == p_15), 0xC42BA600L));
                        if (p_16)
                            break;
                        if (l_458)
                            break;
                    }
                    ++g_470;
                }
                g_250 &= ((g_478 = (g_331--)) <= (safe_rshift_func_int8_t_s_u((safe_div_func_int8_t_s_s((func_33(g_41) ^ (p_16 && (safe_mod_func_int32_t_s_s(((g_82 &= ((safe_lshift_func_uint16_t_u_u((l_475 |= (++g_219)), 3)) || (l_351 = (l_463 &= (((~(safe_lshift_func_int16_t_s_s((0x6A95L > g_119), (0L != ((g_219++) > (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(p_16, 5)), 4))))))) | (safe_lshift_func_uint8_t_u_u(g_159, 1))) != (+(safe_div_func_uint16_t_u_u((((0xC4L == l_473) || g_292) | 1UL), p_16)))))))) || l_449), l_47)))), 2L)), g_247)));
            }
            l_503++;
        }
        else
        {
            char l_506 = 0xD0L;
            l_351 = ((l_506 &= g_41) || (func_56(g_478, l_461) & 0UL));
        }
        for (l_473 = 0; (l_473 == 14); ++l_473)
        {
            int l_509 = 0xBF30F5FAL;
            int l_510 = 0xB85D963EL;
            int l_511 = 0xDBA808FFL;
            int l_512 = 0x4AC0A801L;
            int l_513 = 1L;
            unsigned char l_589 = 1UL;
            ++l_514;
            l_511 = (((((l_512 &= (g_331 = func_18((safe_mod_func_uint8_t_u_u(p_16, g_3)), (((l_513 = l_446) <= p_16) ^ (safe_rshift_func_int16_t_s_s((p_15 | l_438), p_15))), (g_521 != g_247)))) != g_46) && 0x0DL) && 0xEFC1DE14L) <= l_509);
            for (l_446 = (-12); (l_446 != (-18)); l_446 = safe_sub_func_uint16_t_u_u(l_446, 4))
            {
                short l_533 = 8L;
                int l_588 = 0xCEFC77A9L;
                for (p_15 = (-1); (p_15 > 8); p_15 = safe_add_func_int32_t_s_s(p_15, 8))
                {
                    char l_545 = 1L;
                    int l_561 = 0xA18FB62CL;
                    for (g_331 = 0; (g_331 >= 20); g_331 = safe_add_func_int8_t_s_s(g_331, 4))
                    {
                        unsigned char l_528 = 0x1CL;
                        int l_546 = 0x33C6EA58L;
                        --l_528;
                        g_81 ^= p_16;
                        l_511 = (((g_478 | ((safe_div_func_int32_t_s_s((l_533 <= g_252), (l_546 &= (safe_sub_func_int16_t_s_s((g_159 = l_447), ((p_15 || (safe_div_func_uint16_t_u_u(((l_538 = l_473) ^ ((l_528 >= (safe_add_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s(((4294967295UL | g_312) >= l_545), 1)) == g_289) != g_521), g_46)), 4294967295UL))) || l_533)), p_15))) && 0x0571L)))))) > 0L)) <= 0xB2L) ^ p_16);
                    }
                    for (g_82 = 0; (g_82 == 7); g_82 = safe_add_func_uint16_t_u_u(g_82, 5))
                    {
                        l_513 = ((safe_div_func_uint16_t_u_u(((safe_div_func_int8_t_s_s(g_252, g_478)) & 0UL), (l_474 |= (safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(p_16, 10)), ((safe_div_func_uint8_t_u_u((l_561 = (0xDEL <= g_478)), 0x45L)) != ((safe_mod_func_uint16_t_u_u(l_545, func_35(g_82, g_292, g_45, p_16))) > g_521)))), g_292))))) <= 1L);
                        g_411 = (-1L);
                        g_157 = (g_250 || l_513);
                        if (g_157)
                            continue;
                    }
                    g_17 = (l_461 = l_509);
                }
                l_588 ^= func_24((safe_add_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((((g_574 &= l_47) <= ((g_45 = ((g_312 ^= 0UL) ^ (((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(((l_461 || (l_351 != g_521)) ^ l_510), func_24((safe_lshift_func_int16_t_s_s((0x971AL > (safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((~(p_15 <= (safe_add_func_uint16_t_u_u(l_511, 9UL)))), 4)), p_15))), p_15)), p_15))), 0x3F3C2144L)) | l_350) == g_478))) & 65530UL)) < p_15), 2)) >= g_292), l_509)), 1L)) && p_15), 9)) | l_461) | 0xC9C2AA3FL), 0x993070F6L)), l_587);
            }
            l_589--;
        }
        l_460 = g_294;
        if ((l_474 = (g_411 |= (g_478 &= ((safe_rshift_func_int8_t_s_s((l_460 = l_514), ((safe_rshift_func_uint8_t_u_s(l_446, l_47)) != func_24(((((safe_lshift_func_int16_t_s_s(0x0966L, (0xC7B5BE34L || (func_64(p_16, p_16, (g_92 = ((((l_587 || (p_16 > 2L)) != g_253) && l_538) >= g_521)), l_447, l_473) | 0x777A36C9L)))) && l_598) > 2UL) >= g_331), p_15)))) == p_15)))))
        {
            short l_605 = 0xCE77L;
            int l_606 = 0x53CC7EE4L;
            int l_608 = 0x75EDD77EL;
            int l_609 = 0x895B4131L;
            int l_611 = 4L;
            int l_612 = 6L;
            unsigned short l_614 = 0xF999L;
            int l_744 = (-9L);
            const unsigned l_752 = 0xC82A03D9L;
            l_351 = (g_411 && l_447);
            for (g_82 = 0; (g_82 != 45); g_82++)
            {
                for (l_461 = (-9); (l_461 == (-14)); --l_461)
                {
                    for (g_478 = 0; (g_478 < 20); g_478 = safe_add_func_uint32_t_u_u(g_478, 2))
                    {
                        return p_16;
                    }
                }
                l_447 = g_119;
                if (l_538)
                    continue;
            }
            --l_614;
            if (((l_474 = ((safe_mod_func_int16_t_s_s((g_45 = (l_609 = (-1L))), g_331)) ^ (safe_lshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s(((l_447 = ((safe_add_func_uint32_t_u_u((~(safe_lshift_func_int8_t_s_u((p_16 | (safe_div_func_int16_t_s_s((((safe_div_func_uint8_t_u_u(g_613, ((safe_rshift_func_uint16_t_u_u(l_611, ((l_438 & ((safe_lshift_func_uint16_t_u_s(p_16, 7)) && p_15)) < (safe_lshift_func_uint16_t_u_s((l_606 &= ((1UL && 1UL) >= p_16)), 2))))) && p_15))) >= 0x55D52887L) && 0xF7L), l_605))), 5))), p_16)) > l_587)) & g_613), p_15)), 7)))) >= l_612))
            {
                l_474 = g_331;
            }
            else
            {
                short l_646 = 0x9A1FL;
                int l_649 = 7L;
                int l_663 = 0L;
                unsigned l_676 = 4294967289UL;
                unsigned l_694 = 0xDA99CE6EL;
                int l_733 = 1L;
                int l_736 = 0x2717B869L;
                int l_737 = 0x7C94DF54L;
                int l_742 = 1L;
                short l_769 = 0x7442L;
                if (g_574)
                {
                    unsigned short l_637 = 0x27D8L;
                    int l_665 = 0xD06652DAL;
                    int l_708 = 0xE6361D9BL;
                    l_637--;
                    if (func_18(p_15, (g_411 = (l_351 &= (l_446 | (++g_574)))), (l_612 > (safe_lshift_func_uint8_t_u_s((((l_646 |= (safe_unary_minus_func_uint16_t_u((g_312 = l_645)))) > 0UL) & (safe_add_func_int16_t_s_s((l_649 ^= 0xBC22L), (safe_mod_func_uint32_t_u_u((0x9062L || p_16), (((~((~((0x07FBAF6DL >= g_143) != 0xE1L)) && 0xC3FA4910L)) && p_16) && l_587)))))), 6)))))
                    {
                        unsigned short l_662 = 8UL;
                        g_478 |= ((safe_lshift_func_int8_t_s_u(p_16, (safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(p_15, p_16)), func_27((safe_sub_func_int8_t_s_s((safe_div_func_int8_t_s_s(((l_637 > (((g_607 = func_64((g_98 |= g_252), g_294, g_607, (l_663 = ((p_15 < (l_649 |= (l_662 |= 1UL))) >= 4294967294UL)), l_473)) && l_446) || g_159)) > p_15), g_331)), l_646)), l_614, l_664))))) == 0xF7EEL);
                        l_665 = g_219;
                        l_447 = ((g_98 <= g_607) <= (l_663 = p_15));
                        l_663 = (func_56(((+g_219) & ((p_16 | (((((-1L) < func_24(g_250, l_474)) && p_16) && (p_15 = (p_15 != ((safe_sub_func_int8_t_s_s(((func_18(func_33(g_289), l_587, p_15) != 0x62CDL) >= p_15), l_447)) != p_15)))) || g_613)) & l_637)), g_470) & g_411);
                    }
                    else
                    {
                        int l_679 = 9L;
                        int l_680 = 0xB439C47EL;
                        l_680 = (safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((p_15 || func_24((safe_div_func_int8_t_s_s((~(func_24((safe_rshift_func_int8_t_s_u(l_676, ((func_18(g_45, p_16, l_649) && ((g_294 <= p_15) && ((safe_sub_func_uint32_t_u_u((((((l_679 = (g_247 >= g_92)) == l_351) || 0x8A75L) >= g_159) != g_521), 0xB1C2A432L)) & l_676))) ^ g_98))), p_16) || g_143)), p_16)), p_15)), 0UL)), g_3));
                        g_411 = 0xCDAE556BL;
                        l_663 = (((g_681--) > (g_292 |= ((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((p_16 & l_605), (p_16 ^ 0x59L))), (safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(((g_81 | func_18((l_611 >= (l_610 &= (-4L))), (l_608 = (l_665 = p_16)), (0x87F2L != l_646))) == 0x34522C80L), p_16)), 14)), g_3)))) < l_438))) & g_92);
                        g_157 ^= l_680;
                    }
                    ++l_694;
                    g_157 = (((safe_mod_func_uint32_t_u_u((l_708 &= ((g_92 < (((((l_637 || (safe_unary_minus_func_int8_t_s((safe_add_func_int8_t_s_s((0UL ^ ((l_702 <= (l_665 = p_16)) && (safe_lshift_func_uint8_t_u_u((g_574 <= func_56(p_16, (!(safe_lshift_func_uint16_t_u_s(p_16, 4))))), 1)))), 0x64L))))) != l_646) >= g_289) > p_16) < (-1L))) <= l_707)), p_16)) >= p_16) ^ g_171);
                }
                else
                {
                    unsigned l_726 = 1UL;
                    int l_729 = 0xBA06D7C3L;
                    int l_731 = (-8L);
                    int l_732 = 6L;
                    int l_734 = 0xA7344F28L;
                    int l_735 = (-1L);
                    if (((safe_sub_func_uint32_t_u_u((p_15 & (safe_add_func_uint32_t_u_u(l_608, g_292))), ((~(safe_div_func_int8_t_s_s((-1L), 0xE2L))) || g_478))) | (func_18(func_56(g_411, g_119), g_45, l_598) > p_15)))
                    {
                        unsigned char l_719 = 1UL;
                        g_607 &= ((safe_mul_func_int32_t_s_s(p_15, (l_719 != ((safe_div_func_uint8_t_u_u(0x33L, func_56(((l_474 == ((safe_sub_func_uint32_t_u_u(func_24(p_16, (safe_add_func_uint16_t_u_u((g_574 = l_726), p_15))), (((safe_lshift_func_uint8_t_u_s(func_18(p_16, p_15, p_15), l_447)) < 0x6BL) || p_15))) || l_726)) <= l_447), l_609))) >= l_649)))) <= p_16);
                        l_649 &= g_312;
                    }
                    else
                    {
                        short l_730 = 1L;
                        int l_743 = 0x0D96974DL;
                        l_729 = (l_611 &= (-1L));
                        g_250 = p_16;
                        g_745++;
                        g_171 ^= g_143;
                    }
                }
                if ((l_612 = 8L))
                {
                    short l_754 = (-8L);
                    int l_755 = 1L;
                    int l_762 = 0xB0C31BEAL;
                    unsigned l_766 = 4294967288UL;
                    if (l_663)
                    {
                        unsigned l_753 = 0xE282149EL;
                        l_649 = (safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s(l_609, ((0x6AB01959L || p_16) & (l_753 |= (l_752 > (l_474 |= l_473)))))), (g_159 ^= g_252)));
                        l_733 = l_737;
                    }
                    else
                    {
                        unsigned l_758 = 4294967295UL;
                        int l_761 = 0x15D7B80BL;
                        int l_763 = 5L;
                        l_758--;
                        l_761 &= 0L;
                        l_707 = (g_757 = (-1L));
                        l_766--;
                    }
                    l_762 = g_764;
                    l_769 = (func_52(p_15) < (-7L));
                    return p_16;
                }
                else
                {
                    l_609 = (l_608 = l_460);
                }
                for (g_45 = 0; (g_45 == (-29)); g_45--)
                {
                    short l_772 = 1L;
                    char l_773 = (-7L);
                    int l_774 = 1L;
                    g_17 = (+p_16);
                    g_776--;
                }
            }
        }
        else
        {
            char l_781 = 0x89L;
            int l_782 = 0xFB92E9BEL;
            int l_784 = 0x21B36E5FL;
            int l_785 = (-1L);
            short l_786 = 0x4F8FL;
            int l_803 = (-9L);
            int l_810 = 0xB0F31204L;
            unsigned short l_811 = 1UL;
            for (l_538 = 28; (l_538 < 1); --l_538)
            {
                l_461 = l_514;
            }
            ++g_787;
            for (g_82 = 23; (g_82 != 8); g_82 = safe_sub_func_int16_t_s_s(g_82, 2))
            {
                int l_794 = 0x332B5A33L;
                int l_800 = (-8L);
                int l_801 = 7L;
                int l_805 = (-6L);
                int l_806 = (-1L);
                for (l_460 = 0; (l_460 < 19); ++l_460)
                {
                    l_785 ^= l_794;
                    if (l_350)
                        continue;
                }
                for (l_473 = 0; (l_473 < (-2)); l_473 = safe_sub_func_int16_t_s_s(l_473, 5))
                {
                    int l_797 = 0x4D62CDD5L;
                    int l_798 = (-1L);
                    int l_799 = 0x08BA016BL;
                    int l_802 = 4L;
                    int l_804 = 5L;
                    g_807++;
                    l_811--;
                    for (g_289 = (-27); (g_289 < (-2)); g_289 = safe_add_func_uint8_t_u_u(g_289, 8))
                    {
                        unsigned l_816 = 4294967291UL;
                        l_816 ^= 0xF94BF4B3L;
                        if (l_645)
                            break;
                        l_817 = func_33(l_794);
                    }
                }
            }
        }
    }
    else
    {
        unsigned l_818 = 0xFFC1D8BEL;
        return l_818;
    }
    l_474 = (g_253 != ((l_610 = func_24(func_24((~(((g_292 & 0x040181DBL) & ((g_574 |= ((p_15 ^= func_33(g_331)) <= ((((~(0xC05B47C0L | (p_16 == g_46))) <= func_18(p_16, g_757, g_17)) > g_521) & l_819))) == p_16)) != 0x3402L)), g_98), p_16)) | g_171));
    l_707 = l_820;
    l_475 = (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u((g_521 = (func_64(((safe_div_func_int16_t_s_s(((l_827 = func_33(l_475)) | (safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(g_470, (p_15 && ((l_47 && (l_474 = (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(g_607, 65529UL)), 5)))) ^ l_820)))) | ((g_574 && g_157) < 0UL)), 1UL)), p_16))), g_46)) || g_247), p_16, g_757, l_47, l_819) | g_45)), 7)), 12));
    return p_15;
}







static char func_18(short p_19, int p_20, unsigned p_21)
{
    unsigned short l_439 = 3UL;
    int l_442 = 0xA7AC40B7L;
    g_157 = p_19;
    p_20 &= (-7L);
    --l_439;
    p_20 = (l_442 = g_312);
    return g_331;
}







static short func_24(unsigned char p_25, unsigned p_26)
{
    unsigned char l_435 = 8UL;
    g_17 |= (safe_sub_func_uint32_t_u_u((0x613872D6L || ((++l_435) < (p_26 == 4294967287UL))), 0x78A53E4EL));
    return p_26;
}







static unsigned func_27(unsigned p_28, short p_29, char p_30)
{
    unsigned l_357 = 1UL;
    int l_358 = 1L;
    int l_377 = 0xB1E60F4AL;
    int l_378 = (-3L);
    int l_428 = 0x198C85A8L;
    int l_429 = 2L;
    unsigned l_430 = 0x38FDE2A0L;
    for (g_98 = (-21); (g_98 > 21); g_98 = safe_add_func_uint32_t_u_u(g_98, 1))
    {
        unsigned short l_364 = 0x9B9EL;
        int l_379 = 3L;
        int l_380 = (-1L);
        for (g_46 = (-25); (g_46 >= (-12)); g_46 = safe_add_func_uint32_t_u_u(g_46, 5))
        {
            unsigned char l_356 = 0x47L;
            int l_359 = (-8L);
            l_356 = p_30;
            l_359 |= ((g_294 != (((l_358 = (p_29 <= (p_28 ^ l_357))) < (g_45 != (g_159 = l_357))) | 0x9E23L)) | ((((g_253 >= g_331) >= 3UL) < (-3L)) == g_294));
            for (g_219 = 29; (g_219 >= 14); g_219--)
            {
                l_364 = (safe_sub_func_uint32_t_u_u(g_92, g_253));
            }
            g_157 = (l_359 = p_29);
        }
        if ((p_29 && (safe_div_func_uint32_t_u_u(func_64((g_92 > p_30), (l_379 = (g_119 = (((safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(g_46, (func_35((g_331 = g_3), (safe_rshift_func_int8_t_s_u(((safe_sub_func_int8_t_s_s(((l_378 = ((safe_rshift_func_uint8_t_u_u((l_358 |= g_219), (l_377 |= (l_357 | p_29)))) >= l_364)) ^ g_292), p_29)) != p_29), 3)), p_29, l_364) < 0xD716L))), l_357)) & l_357) | 1UL))), l_380, g_3, p_28), g_312))))
        {
            unsigned short l_383 = 1UL;
            const short l_384 = 0L;
            g_250 = (safe_sub_func_int32_t_s_s(l_383, l_383));
            l_378 = g_294;
            g_250 = p_30;
            l_379 = l_384;
        }
        else
        {
            g_250 |= ((0x7448L | ((func_35(g_171, g_159, (g_45 = (1UL | (safe_rshift_func_uint8_t_u_s((l_357 & func_33((4294967295UL > (func_35(((safe_add_func_int16_t_s_s(g_81, p_29)) | ((safe_div_func_uint32_t_u_u(func_35((+(g_45 != 0x54B44359L)), g_289, l_364, p_30), p_28)) != 9UL)), p_30, g_157, g_82) <= p_30)))), 5)))), g_98) ^ g_157) == g_292)) && g_45);
            for (l_378 = (-3); (l_378 != (-11)); --l_378)
            {
                return g_159;
            }
        }
    }
    g_81 = l_358;
    for (g_46 = (-7); (g_46 < 21); g_46++)
    {
        int l_395 = (-1L);
        int l_410 = 0xBF2FC5D0L;
        l_377 |= p_30;
        l_358 = func_35(g_3, (l_395 = g_331), (safe_rshift_func_uint8_t_u_u(((g_411 |= (safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((g_289 = (p_30 = func_35((p_29 <= ((g_252 && (g_45 <= (safe_div_func_uint16_t_u_u((p_29 ^ ((safe_add_func_uint32_t_u_u(((l_410 <= ((g_157 < g_247) >= l_410)) ^ p_28), 1UL)) && g_46)), l_378)))) < g_250)), g_171, p_30, g_17))), 6)), 6)), g_46)), p_29))) <= 255UL), l_357)), p_29);
        if (p_29)
            continue;
    }
    if (((l_429 ^= ((((safe_div_func_uint8_t_u_u((p_30 < g_3), g_41)) == func_56(p_28, (l_428 ^= (safe_lshift_func_int8_t_s_s((safe_div_func_int16_t_s_s(g_92, ((safe_div_func_uint32_t_u_u(4294967289UL, g_41)) | func_35((safe_mod_func_uint16_t_u_u((l_378 = (safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((g_159 | ((safe_sub_func_uint8_t_u_u((g_331 = 0xADL), l_377)) && p_28)), 65535UL)), p_30))), p_29)), l_358, l_358, g_157)))), l_357))))) > p_28) | l_377)) | 0x79L))
    {
        l_430++;
    }
    else
    {
        g_411 = p_29;
        return p_29;
    }
    return p_29;
}







static short func_33(unsigned p_34)
{
    char l_40 = 0xB8L;
    int l_42 = 8L;
    char l_43 = 0x9CL;
    int l_44 = 0L;
    l_44 |= (l_43 = (l_42 &= func_35(p_34, l_40, l_40, (g_41 = p_34))));
    return g_41;
}







static int func_35(unsigned char p_36, unsigned p_37, const short p_38, const int p_39)
{
    return p_37;
}







static short func_52(unsigned char p_53)
{
    char l_76 = 1L;
    int l_278 = 0L;
    int l_293 = (-10L);
    const unsigned char l_295 = 0xCAL;
    unsigned char l_349 = 0UL;
    for (p_53 = (-23); (p_53 > 23); p_53 = safe_add_func_int16_t_s_s(p_53, 3))
    {
        char l_59 = 0L;
        int l_238 = 0xA066FCE7L;
        int l_277 = (-1L);
        l_277 = func_56(l_59, (((safe_rshift_func_uint8_t_u_s(p_53, 5)) != (safe_lshift_func_int16_t_s_u((l_238 |= ((func_64(p_53, (safe_sub_func_uint32_t_u_u(((safe_div_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(l_76, 5)) >= p_53), g_3)) <= ((safe_sub_func_int16_t_s_s(g_46, (safe_div_func_uint32_t_u_u((g_82 = (p_53 != g_81)), p_53)))) && l_59)), 9UL)), p_53, l_59, l_76) && l_76) == l_59)), p_53))) > l_59));
        l_278 &= (-1L);
    }
    if ((g_17 = ((safe_div_func_int16_t_s_s((+((safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((g_159 == 0UL) <= l_278), g_81)), 9)) & func_35(l_278, (func_35(((g_294 = (safe_lshift_func_int16_t_s_u((l_293 = (((((l_278 > ((g_98 = (((safe_sub_func_int16_t_s_s((g_46 = (g_289 || (safe_add_func_uint8_t_u_u(((l_278 <= g_3) || g_292), l_278)))), 65532UL)) > 65535UL) != g_17)) & 0x85L)) ^ p_53) ^ g_3) <= l_278) | l_76)), 13))) ^ p_53), p_53, l_76, l_295) == l_76), g_159, l_278))), g_157)) < g_292)))
    {
        return l_295;
    }
    else
    {
        char l_300 = 0x10L;
        int l_301 = 0x334DCBC1L;
        unsigned l_308 = 1UL;
        const int l_332 = 0x0030FD1EL;
        l_301 = (l_278 == (safe_add_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(((l_300 = l_76) ^ func_35((l_301 > ((safe_sub_func_int32_t_s_s(((((l_295 >= ((safe_div_func_int16_t_s_s((safe_add_func_int8_t_s_s(l_308, l_308)), (safe_unary_minus_func_uint32_t_u((g_252 != (p_53 = (safe_mod_func_uint32_t_u_u((func_35((g_312 |= (p_53 >= (-1L))), g_82, g_292, l_293) & 65532UL), 4294967288UL)))))))) & g_3)) && g_294) > 4L) || l_76), 0x5B6507D8L)) < l_76)), l_295, l_76, g_159)), g_250)) != g_292), l_308)));
        g_250 = (g_157 = (((-5L) & func_35(l_308, (((~(safe_mod_func_int16_t_s_s((~(((safe_div_func_int8_t_s_s((((((l_300 && (~func_35((((p_53 <= 4294967295UL) <= (safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((((safe_mod_func_int16_t_s_s(((((safe_add_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(p_53, 14)) <= ((!0x30FDA571L) < p_53)), ((g_331 = 0xACL) & l_301))) && g_143), p_53)) ^ g_289) && 0x8DL) > l_295), g_219)) || g_159) ^ l_308), l_308)), g_159)), l_301))) ^ p_53), g_46, l_332, p_53))) != p_53) != g_289) & 8UL) != l_76), l_278)) | l_278) && 0xD107L)), l_332))) ^ l_332) && g_143), l_278, p_53)) < l_278));
        g_171 = (l_293 ^= (l_278 = (p_53 > (p_53 != l_300))));
        g_250 ^= ((safe_sub_func_uint32_t_u_u((p_53 == g_312), ((safe_lshift_func_int8_t_s_s(func_64((((safe_lshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s(((l_293 = p_53) >= (g_17 = ((safe_div_func_uint32_t_u_u((p_53 && g_292), l_76)) & g_81))), (+g_157))) > (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u(g_331, g_3)), 12)), 5L))), 3)) & 65535UL) <= g_82), g_92, g_157, l_295, l_301), 5)) | g_3))) == l_349);
    }
    return l_293;
}







static int func_56(int p_57, unsigned short p_58)
{
    short l_239 = 0xA19CL;
    int l_240 = 7L;
    int l_241 = (-4L);
    int l_242 = (-1L);
    int l_243 = 0xE767DA59L;
    int l_244 = 7L;
    int l_245 = (-4L);
    int l_246 = 5L;
    int l_248 = (-1L);
    int l_249 = 0x2AFED2E4L;
    int l_251 = 0x69CED32FL;
    unsigned l_262 = 7UL;
    unsigned short l_269 = 0xE08EL;
    int l_276 = 0x691F10E8L;
    g_253--;
    p_57 = p_58;
    g_17 = (l_239 == ((g_98 = g_82) > (!(((safe_sub_func_int16_t_s_s(((l_240 || g_247) | g_92), (l_246 &= (g_219 ^= (safe_div_func_int16_t_s_s((-1L), (safe_mod_func_uint8_t_u_u((l_262++), (safe_rshift_func_uint16_t_u_u((((p_58 < (safe_rshift_func_uint16_t_u_s(g_17, l_269))) ^ g_92) <= 0x3807L), p_58)))))))))) != g_82) <= p_57))));
    p_57 = (((safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((0x2CL >= l_248), func_35(g_252, (safe_sub_func_int32_t_s_s((0x74B8L ^ p_58), 0xD100AB29L)), (l_246 = ((g_98 = p_58) >= ((l_276 >= (((g_17 >= l_245) != p_57) > 0x41L)) || g_157))), l_244))), (-6L))) >= g_3) != p_58);
    return l_239;
}







static short func_64(char p_65, int p_66, unsigned p_67, unsigned char p_68, unsigned p_69)
{
    short l_85 = 0x4077L;
    int l_86 = 0x207789B6L;
    unsigned char l_89 = 6UL;
    int l_90 = (-1L);
    int l_91 = 0x0EC62D7FL;
    int l_93 = (-1L);
    unsigned char l_99 = 0x71L;
    int l_142 = (-2L);
    unsigned l_217 = 0UL;
    g_81 = ((!((safe_div_func_uint8_t_u_u((l_85 = ((g_46 = (-8L)) & g_81)), l_86)) < (((l_93 = (((g_92 ^= (safe_div_func_uint16_t_u_u((0xFAL <= ((l_86 || l_89) < l_89)), (l_91 = (l_90 ^= p_68))))) || ((g_3 > l_86) > 1UL)) != l_89)) != g_3) == 0UL))) | g_82);
    g_17 = l_85;
    for (p_68 = (-6); (p_68 == 49); p_68++)
    {
        short l_97 = 0x1F66L;
        int l_112 = 0xEE7B07E0L;
        int l_113 = 1L;
        int l_114 = 0x4F7CDB24L;
        const int l_122 = 1L;
        unsigned char l_237 = 0UL;
        l_112 = (safe_unary_minus_func_int16_t_s(((0x33L != (0xED99L | ((l_99++) | func_35((g_17 > (g_119 = (safe_div_func_uint8_t_u_u(func_35(p_66, (((safe_lshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((func_35(l_93, (g_82++), g_81, p_66) != ((safe_lshift_func_int8_t_s_s(p_65, 6)) ^ g_3)), g_17)), 0xB06ECFB4L)), 251UL)), p_67)) >= 0x3CL) >= 1UL), p_69, l_90), l_85)))), l_90, g_17, l_85)))) > p_68)));
        if ((g_81 || (safe_rshift_func_int16_t_s_u((g_81 >= l_122), (~0x34F7L)))))
        {
            unsigned l_127 = 0UL;
            g_17 ^= (func_35(((safe_lshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s((g_46 ^ l_127), (l_113 = (safe_add_func_uint8_t_u_u(func_35(l_127, p_67, (safe_sub_func_uint8_t_u_u((l_86 == (safe_sub_func_int32_t_s_s(l_127, (0xE0D67C40L >= p_69)))), func_35((p_67 <= p_65), l_86, p_66, p_68))), l_91), l_122))))), 3)) || 0x6EL), p_67, l_127, l_93) == p_67);
        }
        else
        {
            unsigned char l_138 = 0UL;
            int l_139 = 0xB9EA69D9L;
            int l_140 = 0x9F9BF173L;
            int l_141 = 0x98C9807AL;
            g_17 ^= g_81;
            l_139 ^= (safe_div_func_int8_t_s_s(((safe_add_func_int32_t_s_s(g_119, (l_90 = 1UL))) & (-2L)), (l_138 &= p_69)));
            --g_143;
            l_139 = g_17;
        }
        if (p_68)
        {
            unsigned char l_152 = 2UL;
            l_113 ^= ((safe_add_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(p_67, ((safe_add_func_int32_t_s_s((func_35(g_3, (g_82 &= (g_46 & l_152)), g_143, p_66) >= ((func_35(g_3, (l_114 = (safe_div_func_int32_t_s_s(p_69, g_3))), g_119, l_152) & g_17) > 8UL)), p_65)) || 0xB885L))) <= g_119), g_46)) || g_98);
        }
        else
        {
            int l_158 = 0x35F7338AL;
            int l_160 = 0xBEA0BD57L;
            l_160 ^= (g_159 |= ((!func_35(p_65, g_119, p_67, (safe_lshift_func_int16_t_s_s(((l_113 ^= func_35(func_35((g_157 = ((+g_17) ^ 0x3EFAL)), (g_82 ^= l_158), p_66, g_119), g_92, g_119, g_17)) & p_68), 8)))) ^ g_92));
            l_158 = g_81;
            if ((safe_sub_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(l_158, (l_160 = g_81))) && (g_171 = ((safe_rshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u((l_99 & func_35(g_82, p_66, (safe_div_func_int32_t_s_s(((l_160 || (g_92 && (g_46 |= l_158))) | (0x3B25L < l_97)), p_67)), g_3)), 1L)), p_66)) < p_66))), g_17)))
            {
                int l_172 = 0x3DF8C06CL;
                unsigned char l_206 = 0xBAL;
                if ((l_172 < g_157))
                {
                    char l_185 = 1L;
                    for (l_99 = 15; (l_99 != 49); l_99 = safe_add_func_int16_t_s_s(l_99, 1))
                    {
                        short l_175 = 3L;
                        l_175 = (g_46 && 5L);
                        l_91 = l_175;
                    }
                    l_158 = (safe_add_func_int8_t_s_s((p_65 | (safe_unary_minus_func_int8_t_s(((0xE8L == g_81) || (safe_div_func_int16_t_s_s(g_98, 0x3898L)))))), (func_35((safe_add_func_uint32_t_u_u(5UL, (+(-4L)))), (+4294967293UL), (safe_div_func_int16_t_s_s((l_185 = (g_159 = (g_17 == p_66))), g_92)), g_157) && p_68)));
                    return l_113;
                }
                else
                {
                    g_17 = (-5L);
                }
                l_93 = (((g_171 <= (safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((p_65 || (safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((0x20DB3BB4L && (g_82 = (p_67 & ((safe_rshift_func_uint8_t_u_s((p_66 != ((l_142 = func_35(func_35((func_35(g_119, p_67, g_46, (((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((0x895AL != 0x08E4L), (-10L))), 2)), 1)) < 1UL) > l_206)) <= 0x17L), g_81, l_97, g_82), g_92, p_67, p_66)) ^ (-2L))), 4)) != p_66)))), l_97)), 0xC699L)), l_91))), l_206)), 0x7FL))) >= p_67) >= p_66);
            }
            else
            {
                g_81 = l_114;
                if ((~p_65))
                {
                    unsigned short l_207 = 0x6FE9L;
                    unsigned char l_210 = 255UL;
                    char l_225 = 0xB6L;
                    int l_235 = 0x737C675BL;
                    l_207 = (l_114 = (l_160 >= 0x83L));
                    for (l_160 = 0; (l_160 >= 20); l_160 = safe_add_func_int16_t_s_s(l_160, 7))
                    {
                        --l_210;
                    }
                    if ((g_157 = l_210))
                    {
                        int l_218 = (-1L);
                        l_113 = (safe_sub_func_uint32_t_u_u(((g_82 >= ((func_35((((!(safe_add_func_int32_t_s_s(func_35(l_217, (g_219 |= l_218), l_218, p_67), l_210))) <= ((safe_unary_minus_func_int16_t_s((safe_mod_func_uint32_t_u_u(func_35(p_68, ((l_158 &= (safe_mod_func_uint8_t_u_u((0xE794L < g_81), g_46))) == p_67), l_160, p_69), l_89)))) & g_3)) || p_67), p_69, p_67, l_160) == p_68) == l_160)) <= l_225), 4294967295UL));
                    }
                    else
                    {
                        l_235 = (g_92 != (((((safe_unary_minus_func_uint32_t_u((safe_sub_func_uint16_t_u_u(0x5BF7L, (l_210 >= l_114))))) && (safe_sub_func_int8_t_s_s(l_90, (g_143 || (safe_lshift_func_int8_t_s_u(((safe_add_func_uint8_t_u_u(g_98, p_65)) != (p_69 || 0xBF2598EEL)), g_143)))))) < 0xDEECL) <= 0xBA28L) <= 0x847C51F5L));
                        return p_66;
                    }
                }
                else
                {
                    unsigned l_236 = 0x9E628F7EL;
                    l_112 &= l_97;
                    g_157 = l_236;
                    g_81 ^= l_158;
                }
            }
        }
        l_114 &= l_237;
    }
    return l_91;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_411, "g_411", print_hash_value);
    transparent_crc(g_470, "g_470", print_hash_value);
    transparent_crc(g_478, "g_478", print_hash_value);
    transparent_crc(g_521, "g_521", print_hash_value);
    transparent_crc(g_574, "g_574", print_hash_value);
    transparent_crc(g_607, "g_607", print_hash_value);
    transparent_crc(g_613, "g_613", print_hash_value);
    transparent_crc(g_681, "g_681", print_hash_value);
    transparent_crc(g_738, "g_738", print_hash_value);
    transparent_crc(g_739, "g_739", print_hash_value);
    transparent_crc(g_740, "g_740", print_hash_value);
    transparent_crc(g_741, "g_741", print_hash_value);
    transparent_crc(g_745, "g_745", print_hash_value);
    transparent_crc(g_757, "g_757", print_hash_value);
    transparent_crc(g_764, "g_764", print_hash_value);
    transparent_crc(g_765, "g_765", print_hash_value);
    transparent_crc(g_776, "g_776", print_hash_value);
    transparent_crc(g_787, "g_787", print_hash_value);
    transparent_crc(g_807, "g_807", print_hash_value);
    transparent_crc(g_841, "g_841", print_hash_value);
    transparent_crc(g_881, "g_881", print_hash_value);
    transparent_crc(g_909, "g_909", print_hash_value);
    transparent_crc(g_918, "g_918", print_hash_value);
    transparent_crc(g_988, "g_988", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
