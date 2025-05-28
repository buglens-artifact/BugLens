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



static int g_2 = 3L;
static char g_80 = (-7L);
static unsigned short g_81 = 0x6CA2L;
static short g_83 = 0xBA43L;
static unsigned char g_105 = 1UL;
static unsigned g_146 = 3UL;
static unsigned g_183 = 0xB09ED61EL;
static char g_203 = 0x27L;
static unsigned short g_230 = 65535UL;
static int g_247 = 0x94F0C07EL;
static unsigned short g_365 = 65535UL;
static unsigned g_647 = 3UL;
static unsigned g_747 = 7UL;



static int func_1(void);
static short func_11(unsigned char p_12, int p_13, const char p_14, short p_15, char p_16);
static short func_17(char p_18, short p_19);
static unsigned char func_20(unsigned p_21, unsigned char p_22, short p_23);
static unsigned short func_26(int p_27, unsigned char p_28, unsigned p_29, int p_30);
static int func_33(unsigned p_34, unsigned p_35);
static char func_38(const short p_39);
static const short func_40(short p_41, unsigned char p_42);
static short func_43(int p_44, unsigned char p_45, int p_46, char p_47);
static unsigned short func_51(short p_52, unsigned short p_53, short p_54, unsigned p_55);
static int func_1(void)
{
    short l_31 = 0L;
    unsigned l_793 = 4294967295UL;
    int l_798 = (-8L);
    unsigned l_799 = 4294967295UL;
    int l_800 = 0x9FF75ECFL;
    unsigned short l_809 = 0x2486L;
    const int l_812 = 0x10C8E0B7L;
    for (g_2 = 0; (g_2 < (-22)); g_2--)
    {
        int l_32 = 0x578CCA69L;
        unsigned char l_792 = 1UL;
        l_32 = ((((((safe_add_func_uint8_t_u_u(9UL, 0xFFL)) , (safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(func_11(g_2, (func_17(((g_2 < (((((func_20(g_2, (safe_mod_func_uint16_t_u_u((g_2 <= func_26((((l_31 == (l_31 , g_2)) <= 0xEDB7L) & l_32), g_2, g_2, g_2)), l_32)), l_32) && g_83) || 0xE023L) ^ g_183) , l_31) == g_183)) > g_183), g_2) || l_32), g_747, g_747, l_31), 10)), g_2))) != l_31) ^ l_31) , 0L) <= g_2);
        if (l_32)
            break;
        l_798 = (((l_792 == (g_747 | (func_40(l_793, g_647) | ((safe_sub_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u((g_747 ^ ((4294967295UL > 4294967290UL) != (g_747 ^ 0x57ABL))), l_31)) == 65535UL) & g_183), g_647)) != l_793)))) , (-3L)) | 4294967295UL);
    }
    g_2 = ((+(func_33(l_799, l_793) & (l_800 ^ g_747))) ^ ((l_800 != (((((((safe_lshift_func_int8_t_s_s(0xD6L, l_793)) , (safe_add_func_int32_t_s_s((g_747 <= 0x68L), 0x973A06C0L))) || g_647) != g_183) | g_747) , l_800) || g_2)) <= g_647));
    g_2 = (((safe_add_func_uint16_t_u_u(((l_31 == ((safe_sub_func_uint16_t_u_u(l_798, ((((l_31 & l_800) , (((((((l_799 == (l_809 , (safe_lshift_func_int8_t_s_s(((g_183 && (0x09L != func_20(g_747, g_647, l_799))) , l_812), 0)))) < g_2) | l_800) != 4294967295UL) , 0L) > l_809) , 0xB4E9L)) <= l_31) < 0x91L))) == 0x5B6DL)) <= l_793), 0x1F65L)) < 254UL) , g_146);
    return g_183;
}







static short func_11(unsigned char p_12, int p_13, const char p_14, short p_15, char p_16)
{
    const unsigned short l_753 = 0x213CL;
    unsigned l_756 = 0x8DB48324L;
    int l_767 = (-4L);
    unsigned short l_782 = 0x129CL;
    g_247 = l_753;
    if ((safe_add_func_uint32_t_u_u(func_20(l_753, g_747, l_756), ((safe_add_func_int16_t_s_s((((safe_add_func_int16_t_s_s(g_2, (safe_add_func_int16_t_s_s((p_14 <= (safe_rshift_func_uint8_t_u_s(p_12, 6))), ((!g_747) < (safe_sub_func_int32_t_s_s(((l_753 , p_13) < l_753), 1UL))))))) > l_756) , 8L), p_16)) && 0L))))
    {
        l_767 = 0L;
        for (g_81 = (-16); (g_81 == 37); g_81++)
        {
            unsigned short l_770 = 65526UL;
            l_770 = g_230;
        }
    }
    else
    {
        unsigned l_783 = 0xF7469C7AL;
        l_767 = (func_51((func_33((((((((safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(g_83, (p_12 && (p_12 | (0x2AL || (~g_105)))))), p_14)) || (p_12 , ((((((p_15 != ((safe_unary_minus_func_int32_t_s(((safe_sub_func_int16_t_s_s((((250UL >= g_2) <= 1L) ^ g_647), 0xADC5L)) , 1L))) || 0xC643L)) && l_753) >= 0xEF91L) & 0x7EBFL) , g_230) < 0UL))) || g_203) || l_782) <= p_13) , 0L) < 1UL), l_783) , 0x6391L), l_782, l_753, p_16) | g_183);
        l_767 = p_16;
    }
    l_767 = ((func_38(g_747) , ((g_247 > ((((-1L) != (safe_lshift_func_uint8_t_u_s(l_767, g_230))) , ((safe_mod_func_int16_t_s_s((!((safe_sub_func_uint16_t_u_u(l_756, (l_753 , (+(safe_rshift_func_int8_t_s_u(((((p_15 || g_203) >= p_14) < 255UL) || 0x1DL), 1)))))) > p_12)), 7UL)) <= g_146)) > g_183)) && g_81)) , g_203);
    return l_782;
}







static short func_17(char p_18, short p_19)
{
    short l_743 = 0L;
    short l_744 = 0xDD85L;
    int l_752 = (-1L);
    l_744 = func_51((253UL & ((l_743 <= g_247) || (p_19 < g_2))), p_18, l_743, p_19);
    l_752 = ((((g_203 >= l_743) ^ (((0x92BADA63L ^ ((g_647 && p_19) > (safe_rshift_func_int8_t_s_u(g_747, ((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(g_647, g_81)), p_19)) > 0x36L))))) && l_743) < g_2)) > 0xBE62L) , (-1L));
    return l_744;
}







static unsigned char func_20(unsigned p_21, unsigned char p_22, short p_23)
{
    unsigned char l_739 = 251UL;
    int l_742 = 0xF38E63BFL;
    l_739 = func_40(g_80, g_247);
    for (g_83 = 0; (g_83 == 4); g_83 = safe_add_func_uint8_t_u_u(g_83, 1))
    {
        l_742 = p_21;
    }
    l_742 = ((p_21 , (l_742 , (((g_105 == 0xC5FA0F80L) != p_21) >= (g_183 , p_23)))) , 0xE5BB1658L);
    return l_742;
}







static unsigned short func_26(int p_27, unsigned char p_28, unsigned p_29, int p_30)
{
    unsigned short l_451 = 0x19CCL;
    short l_457 = (-10L);
    int l_484 = (-8L);
    int l_485 = (-2L);
    char l_613 = 5L;
    unsigned short l_673 = 0x15F4L;
    short l_706 = 0x6817L;
    if (func_33(p_29, p_28))
    {
        unsigned l_454 = 0UL;
        unsigned l_467 = 0x5089336CL;
        int l_496 = 4L;
        int l_530 = 0xA0CD230EL;
        unsigned short l_590 = 65534UL;
        int l_606 = 1L;
        short l_672 = 0x53A5L;
        short l_700 = 0x160DL;
        if (l_451)
        {
            unsigned l_458 = 0x44EB88B9L;
            int l_463 = 0x9611CC5EL;
            char l_729 = 0x11L;
            if (((safe_rshift_func_uint16_t_u_s((((l_454 || 1L) > (safe_sub_func_uint8_t_u_u(0xF3L, func_33((((l_454 != 3UL) , func_38(l_454)) >= (p_27 <= (p_29 & p_27))), l_457)))) && 9UL), l_457)) || l_454))
            {
                unsigned l_470 = 1UL;
                int l_511 = 1L;
                l_458 = p_29;
                for (p_27 = (-24); (p_27 == 28); ++p_27)
                {
                    unsigned l_464 = 1UL;
                    int l_473 = 1L;
                    for (g_146 = 3; (g_146 > 40); g_146 = safe_add_func_int32_t_s_s(g_146, 9))
                    {
                        if (g_2)
                            break;
                        l_463 = g_247;
                        l_464 = p_29;
                        l_473 = ((p_28 < (safe_lshift_func_uint8_t_u_u((~0xE9L), p_30))) | (l_467 > (((safe_lshift_func_int16_t_s_u(g_365, 15)) && (~l_470)) ^ (safe_add_func_uint8_t_u_u(p_29, 0xC4L)))));
                    }
                    if (((safe_mod_func_uint32_t_u_u(func_40(((safe_rshift_func_uint8_t_u_s(p_30, p_30)) ^ g_183), (l_451 || (safe_sub_func_int32_t_s_s(g_183, func_43(p_30, l_458, (safe_sub_func_uint16_t_u_u((((safe_add_func_uint32_t_u_u(g_230, 0x07ED4689L)) , 255UL) , g_83), p_29)), l_484))))), g_183)) != p_28))
                    {
                        char l_494 = (-1L);
                        int l_495 = (-7L);
                        int l_510 = 9L;
                        l_485 = g_146;
                        l_495 = ((g_230 != func_51((((((((l_467 | g_81) | g_247) , (p_27 > (((safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((func_51(g_365, g_247, ((((((((safe_sub_func_int32_t_s_s(p_27, g_203)) , 0xA225L) || 5L) || l_464) , 0xFDA9A762L) && 0x4E31191BL) & p_28) <= p_29), p_27) & g_183) <= g_183), p_30)), g_2)), l_454)) <= l_484) , l_473))) , 0x39L) | p_29) , 0xF5L) && 5L), l_494, g_2, p_30)) > 0xFF2EL);
                        l_496 = l_473;
                        l_511 = (safe_mod_func_int32_t_s_s(func_43((((~(0xC5235FB3L && p_29)) || func_43((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((-2L), ((((safe_sub_func_int32_t_s_s(func_38(p_29), 1L)) , l_473) , (func_38(func_43((safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(((l_454 , (safe_lshift_func_uint8_t_u_u((~((((((((l_473 ^ l_451) != (-1L)) == l_510) , 0UL) && p_27) > (-7L)) || 1L) <= p_27)), 3))) , p_27))), 3)), p_30, l_473, g_80)) > (-1L))) || g_183))), p_28)), l_464, p_27, l_458)) <= g_183), g_2, l_473, g_2), g_183));
                    }
                    else
                    {
                        if (g_230)
                            break;
                        l_511 = (p_30 && (safe_lshift_func_uint16_t_u_s(0x1100L, 14)));
                    }
                }
            }
            else
            {
                unsigned l_518 = 0UL;
                int l_520 = 0x48F12315L;
                if (p_29)
                {
                    short l_519 = (-1L);
                    g_247 = 4L;
                    l_520 = (safe_mod_func_int32_t_s_s((-10L), ((((p_30 , 0xBF06L) , ((((p_27 , 0x986DL) && ((1UL & (l_518 != (p_29 == (func_51((+0xB62AL), g_247, p_28, p_27) && l_519)))) , l_463)) , g_83) | p_28)) || 0UL) ^ p_29)));
                }
                else
                {
                    int l_531 = 0x719C7A6EL;
                    l_496 = ((l_463 & (3UL == (p_28 >= (safe_unary_minus_func_int32_t_s((((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((func_51(g_203, (l_463 > g_203), (((((safe_mod_func_uint32_t_u_u(p_29, (((((((safe_add_func_int32_t_s_s(l_530, (!l_520))) != l_531) <= p_30) == g_81) | 0x67B7AAC5L) >= p_28) || g_203))) >= g_230) ^ l_531) == p_29) == g_247), l_485) == l_484), 12)), l_518)) , 0x36598AF8L) || p_28)))))) == 0UL);
                    for (g_365 = (-19); (g_365 > 41); g_365 = safe_add_func_int8_t_s_s(g_365, 9))
                    {
                        l_531 = ((!(safe_add_func_int32_t_s_s(g_230, p_30))) , func_51(((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(g_230, g_247)) < p_30), (safe_rshift_func_int8_t_s_u(p_27, 2)))), 65533UL)) && ((p_27 <= 0x5F27L) >= g_183)), g_80, l_518, p_29));
                    }
                    return g_365;
                }
            }
            g_247 = l_484;
            if ((func_38(((((l_451 , func_33(g_83, (safe_rshift_func_int8_t_s_u(((+(g_80 >= g_247)) || (~g_105)), ((p_27 && g_146) || 0xECL))))) || l_467) ^ l_467) , g_365)) <= g_183))
            {
                unsigned char l_553 = 0UL;
                int l_581 = 0L;
                if ((((p_27 >= ((l_530 , (func_33(((safe_sub_func_uint8_t_u_u(g_2, ((g_80 , (p_28 & p_29)) <= p_27))) >= (g_2 <= (((safe_add_func_int8_t_s_s(((~l_530) > p_29), g_105)) != g_105) , l_467))), l_457) > g_183)) || 1L)) | p_27) ^ l_496))
                {
                    int l_550 = 0L;
                    if ((((0x9BL & p_30) , l_550) && g_81))
                    {
                        int l_562 = 8L;
                        int l_563 = 0x5FE6D747L;
                        l_553 = ((safe_add_func_int32_t_s_s(l_485, ((8UL | g_230) >= 0L))) ^ p_29);
                        l_563 = ((0xE7L | g_203) != (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(((((g_146 && (((((0xAF5F59F8L && ((0x34L && (safe_lshift_func_int8_t_s_u(((g_365 ^ l_550) && (-10L)), p_27))) | 0UL)) <= 0x36L) , p_30) , 1L) <= 4L)) < p_30) , l_550) , l_562), 0x7D36L)), 4)), g_81)));
                        l_485 = ((l_454 > p_30) ^ 2L);
                    }
                    else
                    {
                        int l_571 = 0xF6B30E7CL;
                        g_247 = (safe_rshift_func_uint8_t_u_s((l_550 == ((l_484 | (safe_unary_minus_func_uint16_t_u((((((l_463 && (0UL ^ (g_80 & (g_2 > g_80)))) & (safe_lshift_func_uint8_t_u_u(((((safe_lshift_func_int16_t_s_s(((((+g_203) , (g_203 , 0L)) || 0xF9DEC1DFL) ^ g_247), l_571)) , p_30) | g_203) > g_183), g_105))) ^ g_183) && (-5L)) | l_553)))) < l_550)), p_27));
                        g_247 = p_27;
                    }
                }
                else
                {
                    int l_580 = 0x3BFCFD2FL;
                    l_581 = (safe_mod_func_uint32_t_u_u((!(((g_80 , (((((l_485 , ((safe_add_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(((l_457 , ((safe_mod_func_uint32_t_u_u((func_43(p_29, l_485, l_463, ((func_33((~0x8EFF5816L), (l_530 ^ p_30)) <= p_27) == 0x81B8L)) <= 0x1DFEL), p_28)) , (-1L))) <= g_2), l_496)) == 0x9EL), p_30)) > l_580)) <= g_2) > g_2) > g_183) <= p_27)) <= g_2) || g_2)), 1L));
                }
                l_581 = g_365;
            }
            else
            {
                short l_608 = (-1L);
                int l_610 = 1L;
                if ((((((+((safe_add_func_int32_t_s_s(p_27, (4294967294UL <= ((safe_sub_func_uint32_t_u_u(g_83, ((l_484 , (((p_30 == ((((safe_sub_func_uint16_t_u_u(65527UL, ((p_27 == l_457) >= (p_29 , 0UL)))) , l_467) | p_29) == l_463)) > g_80) != p_30)) & l_530))) , l_454)))) ^ (-1L))) , p_30) | g_203) | l_457) , g_83))
                {
                    unsigned l_609 = 0UL;
                    unsigned l_622 = 0x403C7669L;
                    unsigned l_651 = 4294967295UL;
                    if ((((l_496 & (g_81 >= (g_2 >= (((safe_add_func_int32_t_s_s(0x157148F4L, ((((0xFB6E76D6L & (p_30 || (g_83 || p_27))) , p_28) & l_590) , 4294967293UL))) , 4294967295UL) ^ 0UL)))) < 1UL) > l_485))
                    {
                        unsigned l_607 = 1UL;
                        g_247 = l_484;
                        g_247 = l_467;
                        g_247 = l_458;
                        l_610 = (((((safe_sub_func_uint16_t_u_u(l_451, 65531UL)) & p_30) && p_27) >= (safe_unary_minus_func_uint16_t_u((safe_lshift_func_int16_t_s_s(l_451, ((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((((safe_sub_func_uint32_t_u_u((p_28 ^ ((safe_mod_func_int32_t_s_s(func_43(g_83, ((~(safe_add_func_uint32_t_u_u(((((l_606 | (g_230 > p_28)) & p_28) <= 0x3AL) >= l_607), 0xB30D606FL))) > p_27), l_606, p_30), p_29)) | l_608)), g_2)) , g_183) > p_30) || g_230), l_609)), 3)) , p_28)))))) , g_247);
                    }
                    else
                    {
                        const int l_629 = 0x5F472947L;
                        unsigned l_646 = 0UL;
                        l_606 = func_51(g_247, p_29, (safe_mod_func_uint32_t_u_u(g_247, l_613)), g_247);
                        l_485 = (safe_rshift_func_uint16_t_u_u(func_43((((g_81 || ((safe_rshift_func_uint8_t_u_u(g_203, (((g_203 , ((safe_add_func_uint16_t_u_u(((g_2 < l_590) , (p_29 <= p_27)), g_2)) < (safe_lshift_func_uint8_t_u_s(l_458, l_622)))) == 0xF0CCL) , 0xDDL))) <= l_457)) && l_530) , 0x8451B015L), p_28, l_608, g_146), 15));
                        l_485 = (safe_add_func_uint8_t_u_u((((g_81 != (+g_230)) >= ((safe_lshift_func_uint8_t_u_s((((safe_rshift_func_int8_t_s_u(l_629, 4)) & g_2) < l_484), (safe_add_func_uint16_t_u_u(p_28, p_27)))) , p_27)) < ((((5L <= 0x1738F0D1L) > g_2) <= g_183) , (-3L))), p_30));
                        g_647 = ((safe_add_func_int32_t_s_s(0xC01E435DL, (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(l_457, 3)), (g_105 , (safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint8_t_u_u(func_38(p_28), ((g_183 == (p_30 , (((g_2 & ((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u(((g_183 <= g_2) & l_646), 3)), 14)) != l_613)) , g_2) , g_183))) | g_183))) , 0xBD9FL), 1))))))) && 0xF2D186D5L);
                    }
                    for (p_28 = 0; (p_28 != 34); ++p_28)
                    {
                        int l_650 = (-9L);
                        l_610 = (p_30 <= l_650);
                        if (l_651)
                            continue;
                        return l_610;
                    }
                }
                else
                {
                    l_485 = (((g_647 >= ((safe_add_func_uint16_t_u_u((func_51((func_43(p_28, (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((!(g_247 , g_203)), 7)), g_183)), g_83, p_28) , (safe_rshift_func_uint8_t_u_u((g_83 & p_27), 2))), l_463, l_485, p_27) != g_2), 1UL)) , l_463)) != g_183) & 0x72L);
                    l_606 = func_40((safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u(g_183, func_38(g_80))), g_647)), l_608);
                    l_485 = l_496;
                    g_247 = 0x5E83600FL;
                }
                l_610 = ((safe_sub_func_int8_t_s_s((251UL >= (func_51(g_146, (safe_rshift_func_uint16_t_u_s(((((safe_add_func_uint8_t_u_u(p_29, ((safe_mod_func_uint8_t_u_u(l_530, ((((+l_672) | (p_29 , (g_247 || ((0xCD7F2948L >= l_454) & p_28)))) & 0x59D6L) ^ g_2))) , g_83))) && l_463) && 1L) > p_30), 5)), g_146, l_484) , 0L)), 0x59L)) >= p_27);
            }
            if (g_183)
            {
                short l_683 = 0x8753L;
                l_485 = func_40(g_105, (l_673 & p_30));
                for (l_463 = 28; (l_463 != (-19)); l_463 = safe_sub_func_int16_t_s_s(l_463, 3))
                {
                    int l_684 = 0xAFEEAECDL;
                    l_496 = (safe_add_func_uint16_t_u_u(func_43(l_606, (((0UL || (((0L | ((safe_unary_minus_func_int16_t_s(0x4359L)) ^ 4294967295UL)) == (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(l_683, 12)), ((p_29 | func_43(l_590, l_684, p_28, p_29)) , 0L)))) && 0x62L)) != p_28) & g_2), l_683, p_28), l_683));
                    if (p_30)
                        break;
                }
            }
            else
            {
                unsigned char l_689 = 249UL;
                int l_707 = 0x5429EDD7L;
                int l_734 = 1L;
                g_247 = (safe_add_func_uint16_t_u_u(g_105, p_27));
                for (l_590 = (-10); (l_590 != 12); l_590 = safe_add_func_int32_t_s_s(l_590, 4))
                {
                    unsigned l_701 = 0x8A925B99L;
                    int l_703 = 3L;
                    l_485 = 0x45241265L;
                    l_689 = (p_28 > g_230);
                    for (l_467 = 0; (l_467 > 10); l_467 = safe_add_func_int32_t_s_s(l_467, 1))
                    {
                        unsigned l_702 = 8UL;
                        l_702 = ((0xFCL < (safe_rshift_func_uint16_t_u_s((func_51((safe_rshift_func_uint16_t_u_u(func_51(func_51(((safe_add_func_int16_t_s_s((((g_81 , ((func_33(p_29, ((safe_rshift_func_int8_t_s_s(p_29, 7)) , (g_365 != l_700))) & (((p_30 <= (g_2 || l_701)) < 255UL) <= l_458)) || g_230)) && l_701) == 255UL), 6L)) & 0xACA16D05L), p_28, p_27, g_2), l_613, l_701, p_29), g_183)), g_647, p_29, p_29) == l_530), g_647))) > 1UL);
                        if (l_703)
                            continue;
                    }
                    l_706 = (((safe_add_func_int16_t_s_s(g_365, (1L ^ (+(((func_43(g_247, g_81, g_105, (((g_80 ^ 0x40EFL) ^ g_80) , 0xEAL)) == l_463) || g_183) <= l_613))))) ^ 0x2DL) | l_703);
                }
                l_707 = ((-1L) | p_27);
                if (g_81)
                {
                    g_247 = 2L;
                }
                else
                {
                    const unsigned short l_724 = 0xDEB6L;
                    l_707 = ((((safe_lshift_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u(p_28, 5L)) != (safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(p_27, (safe_mod_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(0L, (func_40((0x1EB6L >= ((l_530 == l_463) == g_146)), l_467) || 0UL))) ^ g_647), l_707)))), 1)) == l_724), p_27))) | 0x7EEED8A7L), 13)) , l_673) && 0x6CL) , p_28);
                    for (g_647 = 0; (g_647 <= 11); ++g_647)
                    {
                        if (g_105)
                            break;
                        g_247 = ((safe_lshift_func_uint16_t_u_s((l_729 < ((8UL != (safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(l_454, ((p_28 ^ g_146) > ((l_458 == p_27) || p_27)))), ((g_647 != l_734) , g_83)))) || p_30)), 3)) , 0x7D4DDF25L);
                    }
                }
            }
        }
        else
        {
            g_247 = (g_2 | (safe_mod_func_uint16_t_u_u((l_700 , 0x7DB6L), p_28)));
        }
    }
    else
    {
        for (l_673 = 20; (l_673 >= 11); l_673--)
        {
            return p_29;
        }
        l_485 = (g_80 < p_29);
    }
    return g_183;
}







static int func_33(unsigned p_34, unsigned p_35)
{
    unsigned l_50 = 4294967295UL;
    unsigned l_58 = 0x3DEE6EE3L;
    int l_396 = 0x7FC2DDF0L;
    const unsigned short l_438 = 0x7E0CL;
    for (p_35 = (-17); (p_35 == 28); p_35 = safe_add_func_int8_t_s_s(p_35, 4))
    {
        char l_395 = 1L;
        l_396 = ((((((func_38((g_2 , func_40(func_43(((safe_add_func_uint8_t_u_u(((+l_50) || (p_34 | func_51(((g_2 , g_2) && (safe_rshift_func_int16_t_s_s(l_58, 4))), g_2, p_34, g_2))), g_183)) & 250UL), p_34, p_35, g_2), g_2))) , 0x69E3C95EL) || l_395) , 0x63B06DA5L) , g_183) && g_247) ^ (-1L));
    }
    if ((safe_sub_func_int8_t_s_s(g_247, (((safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(p_35, ((safe_lshift_func_int8_t_s_u(l_396, l_50)) < 0x2BF9L))), 0)), (safe_sub_func_uint8_t_u_u(1UL, g_247)))), (((g_2 , (+l_58)) ^ l_50) , (-8L)))) != 0xBE79B4ADL) <= g_146))))
    {
        const unsigned char l_419 = 0UL;
        l_396 = (p_34 , func_40((((p_34 || (g_83 || (safe_sub_func_uint16_t_u_u(p_35, p_35)))) || (safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s(1L, (safe_sub_func_uint8_t_u_u((((+func_38(l_419)) != ((safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s((((safe_lshift_func_int8_t_s_s((+((((l_58 != 1UL) , 0x6407A861L) > l_419) ^ l_419)), l_419)) , 0x18L) , l_50), 4294967288UL)), l_419)) | g_2)) , l_419), g_183)))), g_183))) < g_183), p_35));
    }
    else
    {
        unsigned l_426 = 0UL;
        unsigned short l_427 = 0x88F0L;
        l_426 = 0x13D18E2FL;
        g_247 = l_427;
        g_247 = ((safe_rshift_func_uint16_t_u_u((0xF8C0L > (0xCFE5L < ((((l_426 && (safe_sub_func_uint16_t_u_u(((((((((safe_rshift_func_int8_t_s_s((g_146 , 0L), g_183)) <= (safe_rshift_func_int8_t_s_s((p_34 , g_146), (safe_rshift_func_int8_t_s_s(g_203, 0))))) > g_203) , l_50) | l_58) , g_365) ^ p_34) > 0x3427L), g_81))) || g_80) | p_34) , g_365))), 10)) , l_438);
    }
    l_396 = (safe_rshift_func_int8_t_s_s(((l_50 , (safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(0xCB49L, 11)) == ((safe_rshift_func_uint16_t_u_u(l_438, 12)) != (1UL == ((-8L) < (g_230 != (0x9CL | func_51((l_50 ^ ((safe_add_func_uint16_t_u_u((l_58 ^ l_396), l_58)) , 1L)), p_34, l_396, g_2))))))), 1L)), l_58))) && g_230), 7));
    return p_34;
}







static char func_38(const short p_39)
{
    unsigned l_374 = 5UL;
    short l_381 = 0x855CL;
    int l_382 = 0x1A1727C7L;
    l_382 = ((safe_rshift_func_uint8_t_u_s(p_39, (((safe_add_func_uint8_t_u_u(p_39, func_40(p_39, ((p_39 == (safe_lshift_func_int8_t_s_s(((safe_add_func_int16_t_s_s(l_374, ((safe_mod_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(((((safe_unary_minus_func_int16_t_s(func_51((func_51(g_247, (safe_unary_minus_func_uint32_t_u(g_183)), l_374, g_2) <= 0L), p_39, p_39, g_230))) >= p_39) , 0xBE85L) , p_39), g_230)) < 0xE1638DAEL), g_183)) && 1UL))) , l_381), p_39))) && l_374)))) >= l_374) == p_39))) , g_81);
    l_382 = ((safe_lshift_func_uint8_t_u_s(func_40(g_247, p_39), 3)) < ((safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(l_382, (safe_rshift_func_int16_t_s_s(l_382, (+(+l_382)))))), (l_374 , (l_381 > (safe_lshift_func_int8_t_s_u(0x26L, g_183)))))) | (-7L)));
    l_382 = (((0x07E7B2CCL >= (safe_add_func_uint8_t_u_u(l_382, (((g_365 <= ((l_381 < (p_39 > 0L)) == p_39)) , (g_247 | g_183)) | l_382)))) > g_105) , l_382);
    return g_81;
}







static const short func_40(short p_41, unsigned char p_42)
{
    const unsigned l_358 = 4294967295UL;
    const char l_361 = (-2L);
    g_365 = ((l_358 | 0UL) <= ((safe_add_func_uint16_t_u_u(((0x8AF41F3DL & (0UL >= l_361)) != p_41), ((g_183 != (safe_sub_func_int16_t_s_s(((safe_unary_minus_func_int8_t_s(((func_43(l_358, l_361, g_80, l_361) < l_361) & g_183))) , g_203), 0x2E04L))) & g_183))) ^ p_41));
    return g_146;
}







static short func_43(int p_44, unsigned char p_45, int p_46, char p_47)
{
    int l_333 = 0x192E8225L;
    l_333 = ((safe_rshift_func_int16_t_s_s((((safe_add_func_uint16_t_u_u(((g_2 >= l_333) | func_51((g_2 && (p_47 , (safe_sub_func_uint8_t_u_u(p_44, (g_105 , g_230))))), (g_2 == l_333), p_44, p_46)), 0x0DBDL)) >= g_183) != 0xC9DC0F58L), g_183)) != l_333);
    g_247 = p_47;
    for (g_230 = 0; (g_230 < 11); g_230++)
    {
        unsigned l_340 = 0xB91F25EDL;
        unsigned l_357 = 0x6B94E045L;
        g_247 = (safe_sub_func_int32_t_s_s(g_230, (l_340 != (g_83 | p_45))));
        g_247 = ((safe_mod_func_int8_t_s_s((~(((safe_mod_func_uint16_t_u_u((p_44 , (((g_105 >= (p_47 == (safe_add_func_int32_t_s_s(l_333, ((((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s((g_80 , ((safe_mod_func_int32_t_s_s(l_333, (safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((~g_105), (~1UL))), l_357)))) >= p_44)), g_230)), 5)) && 0x2661L) > g_230) , 0x8C372688L))))) , g_105) && 250UL)), g_203)) ^ p_45) & g_80)), p_47)) , p_47);
    }
    return g_105;
}







static unsigned short func_51(short p_52, unsigned short p_53, short p_54, unsigned p_55)
{
    unsigned l_60 = 0xA770AACCL;
    int l_104 = (-9L);
    int l_106 = 0x4068BD6BL;
    int l_255 = 0x05ABF9FFL;
    int l_283 = 0xC5EE8D9FL;
    l_60 = ((safe_unary_minus_func_uint16_t_u(g_2)) && p_55);
    if ((safe_lshift_func_uint16_t_u_s(l_60, 13)))
    {
        unsigned l_67 = 0x954656E2L;
        int l_82 = 0L;
        char l_85 = 8L;
        unsigned l_202 = 0xE2C77FF3L;
        if ((safe_sub_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((l_67 >= (safe_lshift_func_uint16_t_u_u(p_55, (g_2 != (((l_60 >= (0xB395B915L == (safe_mod_func_int16_t_s_s((((((safe_sub_func_uint8_t_u_u(g_2, 0UL)) , g_2) ^ 0x81F6C987L) != p_53) <= 4294967289UL), g_2)))) & 0x02A9L) > p_53))))), 0xE8L)), (-1L))))
        {
            unsigned short l_74 = 65535UL;
            unsigned l_79 = 4294967295UL;
            l_74 = g_2;
            g_80 = ((g_2 <= (safe_mod_func_uint32_t_u_u((g_2 < 1UL), (safe_rshift_func_uint8_t_u_u((l_79 && l_79), 3))))) >= (p_55 >= p_54));
            g_81 = g_80;
            l_82 = p_53;
        }
        else
        {
            int l_84 = (-1L);
            g_83 = 0x649E8EE0L;
            l_84 = (~p_52);
        }
        l_85 = 0x46B77D86L;
        if ((l_60 > (g_2 ^ (safe_lshift_func_uint16_t_u_s((g_2 ^ l_60), (safe_sub_func_uint8_t_u_u(((250UL == ((safe_lshift_func_int16_t_s_s(1L, 15)) > l_60)) | (((safe_mod_func_int16_t_s_s(l_85, l_67)) <= p_53) ^ l_60)), 0xD7L)))))))
        {
            const short l_133 = 4L;
            g_105 = (((safe_sub_func_int8_t_s_s(0x0DL, (+(safe_lshift_func_uint16_t_u_s(((((~(65535UL == l_60)) && ((((safe_sub_func_int32_t_s_s(g_83, ((((((safe_mul_func_int8_t_s_s((p_52 ^ g_83), (((g_81 != (~(l_60 && (safe_lshift_func_int16_t_s_s(p_53, 4))))) >= g_83) == 0L))) == l_104) , g_80) ^ 6UL) ^ 8L) , l_60))) < (-10L)) && (-6L)) , 0L)) < l_104) == g_81), 7))))) ^ g_2) , p_53);
            l_106 = l_104;
            l_82 = (~(safe_rshift_func_int8_t_s_u(((safe_sub_func_uint16_t_u_u((~g_80), ((safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((l_67 >= ((safe_mod_func_uint32_t_u_u((g_81 > ((safe_mod_func_uint32_t_u_u((g_80 && p_55), (safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((0L & (safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s(p_53, 0xB0L)), 0xD3L)), 0x3FL))), p_52)) <= 0UL), l_133)), 0x085DA103L)), p_54)))) ^ g_81)), l_67)) , p_54)), g_80)), p_52)) ^ 1L))) > l_82), l_85)));
        }
        else
        {
            const char l_151 = 1L;
            int l_227 = 9L;
            for (l_60 = 0; (l_60 >= 9); ++l_60)
            {
                return g_81;
            }
            if (((g_83 <= (0L && ((safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(0x3F81L, (safe_add_func_int32_t_s_s(g_2, (5UL > ((p_55 && g_83) != (l_104 & (safe_lshift_func_int16_t_s_s((1UL <= 250UL), 7))))))))), g_80)) ^ (-2L)))) ^ g_80))
            {
                l_106 = l_67;
                l_106 = (65532UL == 0xA64AL);
            }
            else
            {
                unsigned short l_162 = 1UL;
                int l_264 = (-1L);
                for (l_85 = 5; (l_85 == 9); l_85 = safe_add_func_int8_t_s_s(l_85, 7))
                {
                    short l_155 = 0x4F98L;
                    if (g_81)
                        break;
                    g_146 = 0x2CAA49FFL;
                    l_82 = p_55;
                    l_155 = (safe_rshift_func_uint8_t_u_s((g_2 <= (((l_104 , (((g_80 != p_55) || (safe_rshift_func_int8_t_s_u(p_53, (~0xE8L)))) , g_146)) || l_151) , (safe_add_func_int16_t_s_s(((safe_unary_minus_func_int32_t_s((((4L != l_106) , l_151) || g_80))) , p_52), 65528UL)))), 6));
                }
                for (l_82 = (-11); (l_82 <= 26); l_82 = safe_add_func_uint32_t_u_u(l_82, 3))
                {
                    unsigned char l_161 = 255UL;
                    short l_180 = 0xC066L;
                    unsigned char l_181 = 253UL;
                    int l_182 = 0x7BAECA1BL;
                    l_106 = (safe_unary_minus_func_int16_t_s((l_67 , ((safe_lshift_func_uint8_t_u_s((((l_161 >= l_82) && (l_162 , p_55)) != p_55), 1)) , (((g_2 ^ (safe_sub_func_int8_t_s_s(p_54, (0UL & 65535UL)))) < l_161) != 0xE7L)))));
                    l_182 = ((g_80 == 1UL) && (safe_add_func_uint32_t_u_u((0x0CL >= ((((safe_unary_minus_func_uint32_t_u((g_83 || (safe_mod_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((((l_106 && ((l_161 | ((safe_mod_func_uint8_t_u_u((+(~((safe_rshift_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(l_151, (safe_sub_func_int8_t_s_s(g_146, g_146)))) , l_180), 10)) > l_161))), 1L)) , 0L)) || 0x7A280F67L)) || p_53) < 0L), 0x6949L)) , 1L), 9L))))) , g_2) || 0L) , l_181)), p_53)));
                    g_203 = ((g_183 <= (~l_151)) < (safe_rshift_func_int16_t_s_u((l_182 , (safe_add_func_int16_t_s_s(1L, (safe_add_func_uint8_t_u_u((0x46L && (safe_rshift_func_uint16_t_u_s(((((safe_sub_func_uint32_t_u_u(p_54, ((p_53 && ((safe_mod_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(0UL, (!((safe_mod_func_int32_t_s_s(l_202, g_83)) , l_106)))), 10)) >= 5L) , p_52), 0x9F92L)) >= g_183)) < 1L))) == l_162) , 0x2703BF9EL) | l_85), 1))), p_55))))), 7)));
                }
                if (((0L | l_67) <= (((l_162 && (((safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((g_146 , (l_162 == p_55)), (safe_rshift_func_int8_t_s_s(p_54, l_162)))), 6)) == (l_162 && g_2)) | p_55)) ^ l_151) < p_52)))
                {
                    unsigned l_232 = 1UL;
                    for (g_81 = 0; (g_81 <= 23); g_81 = safe_add_func_int8_t_s_s(g_81, 5))
                    {
                        unsigned short l_222 = 0x7FEBL;
                        int l_231 = 0L;
                        l_227 = (((l_162 , (((((safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((!(safe_sub_func_int8_t_s_s((+(safe_sub_func_int16_t_s_s(0L, p_54))), p_52))), l_222)) , (safe_sub_func_int32_t_s_s((+(((p_54 | ((((l_104 > p_53) , (((safe_rshift_func_int8_t_s_s(p_55, 7)) || p_53) ^ (-9L))) > 255UL) != l_222)) , l_202) & g_203)), 0x440195C6L))), 0UL)), l_202)) && p_55) == 0x9036L) == 1L) , p_53)) | 0xA86230F5L) < 0x3F0AB7DFL);
                        l_231 = ((p_54 , ((g_183 < (p_52 , l_162)) , (g_2 == (((safe_rshift_func_uint16_t_u_s(((((((g_203 & g_81) <= g_83) | (l_85 , p_52)) > g_230) & g_203) == 0x1AL), g_83)) && l_162) , 9UL)))) & g_81);
                    }
                    return l_232;
                }
                else
                {
                    l_106 = (safe_add_func_int32_t_s_s((0UL && g_203), 4294967295UL));
                }
                if ((((safe_add_func_uint8_t_u_u(p_53, l_104)) , g_146) || ((0xFED1L && p_53) > (safe_lshift_func_uint16_t_u_s((0xE88F52E7L <= (safe_lshift_func_uint16_t_u_s(((g_2 | 0L) ^ ((+(safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((l_162 , g_105), g_105)), p_52)), p_54))) >= 0xD9D36A7BL)), p_52))), 7)))))
                {
                    g_247 = g_146;
                    l_106 = l_227;
                }
                else
                {
                    int l_254 = 0x0F757600L;
                    l_106 = ((p_52 | (g_83 == l_162)) , ((l_60 == ((safe_add_func_int32_t_s_s((((p_54 != ((l_60 >= ((g_183 != ((p_52 ^ (safe_sub_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(l_106, l_254)) < 0xB5L), 0x2C90L))) ^ l_67)) < l_104)) == 0L)) == l_227) <= 0x2E43L), p_53)) && l_255)) > l_60));
                    l_264 = (l_162 , ((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(0xC6L, 0)), g_2)) >= (0xD5E7B768L && (0x920CL < (((safe_mod_func_int16_t_s_s((6L <= l_254), g_80)) >= ((safe_rshift_func_int16_t_s_u(p_55, 5)) , g_247)) >= g_2)))));
                }
            }
            g_247 = ((safe_rshift_func_int8_t_s_u(p_54, 0)) , (((((safe_lshift_func_uint16_t_u_u((((g_80 < ((safe_mod_func_int16_t_s_s((((-2L) > (((safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s((((safe_sub_func_int8_t_s_s(l_151, (safe_mod_func_int32_t_s_s(0xA20E4E1FL, (0xA3262FA0L | (((((safe_sub_func_uint16_t_u_u((((safe_mod_func_int32_t_s_s((g_105 >= l_67), g_203)) || g_146) >= 4294967287UL), p_54)) , l_283) != g_80) >= l_227) & l_255)))))) == g_83) >= l_85), g_183)), l_151)) != g_2) , 6UL)) | p_52), 5UL)) && p_52)) | g_203) && g_247), l_104)) <= 0xCD41B4FAL) >= g_183) && p_55) <= p_52));
            g_247 = ((safe_mod_func_uint8_t_u_u(0UL, 1UL)) < p_52);
        }
        l_283 = 0x6F73A530L;
    }
    else
    {
        short l_286 = (-6L);
        g_247 = (g_105 | (((l_286 ^ l_283) >= g_83) , (safe_lshift_func_uint8_t_u_u((p_53 | ((safe_rshift_func_int8_t_s_u((l_286 > (-2L)), 6)) == ((safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((p_54 >= (0xD9B2L ^ (-1L))), 0x34L)), 3)) > g_183))), g_203))));
    }
    for (g_81 = (-16); (g_81 < 13); g_81 = safe_add_func_uint8_t_u_u(g_81, 2))
    {
        short l_309 = 0xA2ACL;
        int l_318 = 1L;
        l_106 = p_53;
        l_106 = (p_53 , ((p_52 , (safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(p_54, p_52)), ((safe_sub_func_uint32_t_u_u(((0x9801L || (g_230 , (((safe_mod_func_int32_t_s_s(p_54, l_283)) < l_309) | 0xEDDAC260L))) ^ 0x8CC6L), l_309)) , g_80))), 3)), 7L))) , 0L));
        for (l_60 = 0; (l_60 >= 23); ++l_60)
        {
            unsigned char l_315 = 0UL;
            for (g_203 = 0; (g_203 > (-21)); g_203 = safe_sub_func_int32_t_s_s(g_203, 3))
            {
                short l_314 = 0x1FE3L;
                l_314 = 0x2C8688D3L;
                g_247 = g_203;
            }
            l_283 = l_315;
        }
        for (g_203 = 0; (g_203 < 10); ++g_203)
        {
            unsigned l_321 = 0x982AE61EL;
            int l_328 = 0x280E95A3L;
            g_247 = l_309;
            l_318 = l_104;
            g_247 = ((0x5EL == (safe_sub_func_uint16_t_u_u(l_309, ((((l_104 | l_309) , p_55) <= l_106) | l_321)))) , (safe_sub_func_int16_t_s_s(((~l_104) , (((p_52 , 0UL) , 0xC70F8A1CL) < g_183)), g_146)));
            l_328 = (((7L | 0x15L) , (l_321 >= (((((((safe_lshift_func_uint8_t_u_u(g_105, 4)) < g_83) , g_83) , p_54) >= l_60) && (safe_rshift_func_uint8_t_u_u((((((l_255 | 0x12F68C6CL) , l_318) < l_321) || 3L) ^ p_54), 0))) != p_53))) , g_80);
        }
    }
    return g_146;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_647, "g_647", print_hash_value);
    transparent_crc(g_747, "g_747", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
