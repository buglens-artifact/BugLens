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



static const unsigned char g_8 = 0xADL;
static unsigned g_15 = 0x780CA9F8L;
static int g_87 = 0x464EB7F0L;
static int g_119 = (-10L);
static char g_137 = (-1L);
static unsigned g_153 = 0xB1B4A57DL;
static unsigned g_159 = 0x94001E8EL;
static unsigned char g_168 = 0x99L;
static int g_198 = (-1L);
static volatile unsigned g_235 = 4294967289UL;
static char g_236 = 0xE0L;
static unsigned g_263 = 0xF7A3D568L;
static char g_281 = 0xECL;
static short g_282 = 0x666AL;
static unsigned g_311 = 1UL;
static unsigned g_327 = 0x6405BA79L;
static unsigned char g_339 = 5UL;
static unsigned g_340 = 0x8C86E7D8L;
static unsigned short g_393 = 0UL;
static unsigned char g_437 = 0x8FL;
static volatile unsigned g_497 = 4294967295UL;
static char g_498 = 3L;
static char g_511 = (-4L);
static unsigned short g_514 = 0xE602L;
static unsigned char g_547 = 1UL;
static unsigned short g_555 = 0x3732L;
static unsigned char g_596 = 0xFDL;
static short g_597 = 0x0670L;
static int g_614 = 0xF4B9C93AL;
static int g_624 = 0x20E4FE25L;
static int g_729 = 0x7FCB8743L;
static int g_957 = (-5L);



static unsigned char func_1(void);
static char func_2(const int p_3, unsigned p_4, int p_5, unsigned char p_6, unsigned short p_7);
static short func_16(short p_17, short p_18, unsigned short p_19, unsigned short p_20, const unsigned p_21);
static unsigned short func_22(int p_23, char p_24, unsigned char p_25, int p_26, short p_27);
static unsigned short func_34(short p_35, int p_36, unsigned p_37);
static char func_45(unsigned p_46, char p_47, int p_48);
static char func_56(unsigned p_57, unsigned p_58, short p_59, char p_60);
static const int func_61(unsigned short p_62, unsigned p_63, int p_64, unsigned short p_65);
static unsigned char func_71(int p_72, unsigned p_73, int p_74, short p_75, unsigned p_76);
static unsigned func_77(int p_78);
static unsigned char func_1(void)
{
    unsigned l_9 = 0xC58FB770L;
    short l_40 = 0xE712L;
    const char l_338 = 0xBEL;
    unsigned l_949 = 2UL;
    int l_962 = 6L;
    int l_963 = (-1L);
    g_957 = (func_2(g_8, l_9, ((!(safe_unary_minus_func_uint16_t_u(0x62EEL))) || (safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((g_15 = l_9) <= func_16(l_9, l_9, func_22(g_8, (+(((g_339 = (safe_add_func_uint8_t_u_u(((((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((func_34(((l_9 && (safe_rshift_func_int16_t_s_u(0xA3F1L, l_40))) < 1L), g_8, g_8) ^ 0x76B8L), 3)), 0x17L)) < g_8) && 0x005BL) <= l_338), l_40))) < g_340) | g_340)), l_338, g_340, g_8), l_9, l_9)), 255UL)), l_949))), g_340, l_338) < g_8);
    l_963 = (g_339 < ((((!((l_962 = (safe_rshift_func_uint16_t_u_s(((safe_add_func_uint16_t_u_u(l_40, func_77(func_61(l_9, l_9, l_9, g_597)))) | g_327), g_281))) || g_729)) && 0xE5834189L) <= g_327) & g_511));
    return l_40;
}







static char func_2(const int p_3, unsigned p_4, int p_5, unsigned char p_6, unsigned short p_7)
{
    unsigned char l_952 = 0x0CL;
    int l_955 = 1L;
    int l_956 = 0x81EAC1E7L;
    l_956 = (0x485DB2E6L && (safe_sub_func_uint32_t_u_u(((func_34((p_4 == (g_614 | (-1L))), g_87, l_952) == (l_955 = ((g_511 = (((safe_lshift_func_uint16_t_u_s((p_6 <= p_6), 6)) && l_952) ^ p_7)) != p_4))) > l_952), l_952)));
    return p_6;
}







static short func_16(short p_17, short p_18, unsigned short p_19, unsigned short p_20, const unsigned p_21)
{
    unsigned short l_559 = 0x4E17L;
    unsigned short l_574 = 65534UL;
    int l_577 = 0xA1A09943L;
    int l_578 = 0x3A0B52E1L;
    int l_696 = 0x586532BDL;
    int l_698 = 0xAAAEB6FDL;
    int l_714 = 2L;
    unsigned short l_744 = 65535UL;
    unsigned char l_849 = 0x63L;
    unsigned l_852 = 2UL;
    int l_862 = (-1L);
    if ((l_578 = func_22((safe_sub_func_int8_t_s_s(0xF7L, (l_559 = p_18))), func_22((safe_mod_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s(((p_19 = func_61((g_168 | ((((p_18 < (safe_add_func_int8_t_s_s(g_555, ((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((l_574 > func_77(g_198)), 12)), (l_577 = (safe_mod_func_int32_t_s_s((p_20 && l_574), g_340))))) <= p_21)))) >= l_574) > p_17) < 0x57BF378EL)), l_574, g_339, l_574)) || 5L), g_235)), g_153)) > (-1L)), 0xAF85561BL)), 0xE9E68F76L)), p_21, l_574, p_20, g_263), g_340, g_8, l_574)))
    {
        unsigned l_587 = 9UL;
        short l_588 = 0L;
        unsigned l_609 = 0x78CD3082L;
        int l_610 = 1L;
        int l_612 = 0xC3C23493L;
        char l_671 = 0xE5L;
        if (g_281)
        {
            unsigned l_579 = 3UL;
            int l_580 = 1L;
            l_579 = func_45(g_555, g_282, g_153);
            l_580 = l_577;
            l_577 = ((safe_rshift_func_uint16_t_u_u(func_56((safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(func_22(l_587, l_588, l_580, ((g_393 = g_87) >= g_236), l_588), (g_340 | (safe_unary_minus_func_uint8_t_u((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(g_8, p_20)), g_596)), l_588))))))), l_577)), g_8, l_580, g_597), g_596)) > l_587);
        }
        else
        {
            unsigned char l_600 = 255UL;
            int l_613 = 0L;
            unsigned short l_658 = 65532UL;
            unsigned short l_661 = 3UL;
            unsigned l_672 = 0UL;
            if ((~l_587))
            {
                int l_611 = 1L;
                int l_625 = 0x3CF75FD0L;
                g_614 = (l_613 = func_22(func_22((((safe_lshift_func_int8_t_s_s(0xA7L, (((l_600 = g_596) ^ (~(l_612 = (((safe_sub_func_uint32_t_u_u(g_596, (((safe_rshift_func_int8_t_s_s(((l_577 | (p_19 < ((l_610 = (((p_18 > g_597) < (g_327 = (p_18 || ((l_609 ^ 0xD7L) ^ 0UL)))) >= g_87)) || 1L))) != l_611), 5)) >= g_8) < (-1L)))) == p_21) ^ 0L)))) ^ 0L))) > l_609) & g_555), g_596, p_19, l_613, l_577), g_597, g_340, l_587, p_19));
                for (l_600 = (-13); (l_600 < 50); ++l_600)
                {
                    l_625 = (g_624 = (((safe_sub_func_int32_t_s_s((g_87 = (~g_236)), (safe_unary_minus_func_int16_t_s((g_597 = (safe_add_func_int16_t_s_s((-1L), (+(((g_547 < p_17) || (p_19 >= p_18)) < (safe_mod_func_uint32_t_u_u((0xD0552561L == (0x43L < (l_610 | p_18))), l_578))))))))))) != g_555) == g_311));
                }
            }
            else
            {
                int l_638 = (-6L);
                int l_670 = 0xC398CDC4L;
                for (g_327 = (-13); (g_327 > 38); ++g_327)
                {
                    unsigned l_643 = 0xEE927DC0L;
                    l_578 = (safe_sub_func_uint16_t_u_u(((func_56((safe_mod_func_uint16_t_u_u((p_20 = ((safe_mul_func_uint16_t_u_u(func_56(l_613, func_56((p_17 == (((safe_lshift_func_int8_t_s_s(0xF2L, (safe_sub_func_int32_t_s_s(l_638, (-4L))))) != (safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(func_77(g_511), p_17)), p_19))) <= 0x36F3L)), l_613, g_555, g_340), l_643, l_600), 0x8091L)) > g_236)), p_18)), p_17, g_498, p_21) != g_235) <= 2L), l_610));
                    for (l_587 = 0; (l_587 == 41); l_587++)
                    {
                        unsigned short l_652 = 0xBECCL;
                        int l_653 = 7L;
                        g_624 = ((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(((func_45((l_653 = (safe_sub_func_uint16_t_u_u(p_19, (l_652 >= (g_393 | (-10L)))))), (0x9ECB9247L && ((p_21 <= (safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(1UL, l_658)), g_511))) | l_652)), p_20) & p_20) & p_20), 2)), p_20)) | g_311);
                        g_624 = ((safe_mod_func_int16_t_s_s((l_577 = (l_661 <= (l_613 & (((safe_add_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u(0xE747L, func_71(g_340, func_77((safe_add_func_uint16_t_u_u((((l_670 = ((l_609 & (((func_77(l_613) & g_614) <= (((safe_rshift_func_int8_t_s_s((g_281 = g_393), 1)) || p_18) > l_652)) != g_119)) != p_18)) == g_340) || p_17), (-1L)))), l_653, g_514, g_137))) && 0x7AL) & p_19), l_577)) != p_18) && l_643)))), l_643)) & g_497);
                        if (p_17)
                            continue;
                    }
                }
            }
            l_577 = ((((func_22(g_340, l_613, (g_282 <= p_17), (l_671 = func_77(p_21)), (l_672 && g_159)) > g_340) & 0x23C9L) < g_624) | g_597);
        }
        l_612 = (((l_671 >= 255UL) ^ (p_18 || (safe_mod_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(g_597, 1L)) ^ (safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s(0L, (g_596 = 1UL))), g_153))), (l_610 = ((safe_lshift_func_uint16_t_u_u((g_555 = l_609), l_610)) | p_17)))))) || g_311);
    }
    else
    {
        unsigned l_697 = 0x573E6FE5L;
        int l_699 = (-1L);
        char l_715 = 2L;
        unsigned char l_787 = 0UL;
        int l_861 = (-1L);
        for (p_20 = 0; (p_20 == 27); p_20 = safe_add_func_uint32_t_u_u(p_20, 9))
        {
            unsigned char l_695 = 0UL;
            int l_700 = 0xA59CCE37L;
            int l_808 = (-6L);
            l_698 = (safe_sub_func_int32_t_s_s(g_153, (safe_lshift_func_uint16_t_u_s((((+(65535UL <= (0UL && (g_555 = (0xF028L ^ (g_282 = (l_577 = func_77(func_61(((((safe_rshift_func_uint16_t_u_s(func_77((l_578 = g_327)), (l_696 = ((safe_add_func_int32_t_s_s((((safe_mul_func_uint8_t_u_u(p_19, p_18)) >= l_695) == g_282), 1UL)) >= 0xFEL)))) < g_511) || p_18) ^ 0xD3E2F91BL), l_697, l_697, l_574))))))))) == l_695) >= g_263), g_596))));
            if (p_21)
            {
                l_700 = (g_87 = (l_699 = l_697));
            }
            else
            {
                unsigned char l_722 = 0UL;
                int l_735 = 0xF99C8B4FL;
                if (l_695)
                {
                    int l_705 = 0x2399C392L;
                    int l_706 = 0x4633D413L;
                    if ((l_715 = (safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((func_61(l_705, (l_706 = 0x4C8DDDE8L), g_281, p_18) > (g_168 & g_514)), ((safe_lshift_func_int8_t_s_u((g_119 < ((((safe_unary_minus_func_uint16_t_u((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((l_714 & g_281), 11)), 0x02E42034L)))) > 0x1DD3L) == l_699) == 0x0240L)), 7)) && g_159))), g_137))))
                    {
                        unsigned l_730 = 0x4A1D3C44L;
                        l_578 = (safe_sub_func_int32_t_s_s(p_17, func_71((((safe_add_func_int8_t_s_s((((safe_rshift_func_int16_t_s_u(((l_722 = l_699) == (g_235 != (safe_add_func_uint16_t_u_u(((g_281 < func_77(p_18)) & 0xE90EL), ((safe_mod_func_uint32_t_u_u(0x03BB9D7DL, (safe_mul_func_uint16_t_u_u((p_19 = g_729), 0x2ED0L)))) >= p_20))))), 12)) > 65535UL) ^ l_700), l_559)) | 1L) <= 255UL), l_698, l_730, p_17, l_698)));
                        l_735 = (safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(g_497, l_715)), (1L & p_17)));
                        g_729 = ((func_56((safe_mod_func_uint16_t_u_u(((p_17 && 7UL) >= (safe_rshift_func_int16_t_s_s(g_624, 13))), (((g_511 | (g_168 = p_19)) >= (safe_rshift_func_int8_t_s_u((l_706 != (p_19 | (0x976E9B48L < (!(l_730 | l_715))))), 4))) & 1UL))), g_729, l_744, l_715) ^ 0xEF49L) ^ 1UL);
                        g_87 = 0xAE78EBECL;
                    }
                    else
                    {
                        int l_745 = 0xDB592D95L;
                        if (p_17)
                            break;
                        return l_745;
                    }
                    l_698 = p_20;
                }
                else
                {
                    if (l_695)
                        break;
                    g_624 = (safe_lshift_func_uint8_t_u_s(l_697, g_137));
                    return g_8;
                }
            }
            if (p_19)
            {
                short l_758 = 0L;
                int l_759 = 0L;
                l_699 = g_8;
                if (((-1L) > 0L))
                {
                    unsigned l_750 = 4294967290UL;
                    int l_757 = 0xB4A5DAF3L;
                    l_759 = (((safe_lshift_func_int8_t_s_s((l_750 = g_281), 6)) == func_56(((func_71((safe_lshift_func_uint16_t_u_u(p_21, 12)), g_597, func_71((func_56((g_119 ^ ((+(safe_add_func_uint32_t_u_u(g_282, 0x03B963C5L))) <= (p_18 = (safe_lshift_func_int8_t_s_u(p_17, 5))))), p_21, ((((l_757 = func_77(func_61(g_614, p_21, p_21, g_437))) == p_19) ^ g_282) | 65531UL), g_547) != g_235), g_624, l_715, g_327, l_758), l_758, l_700) >= p_20) >= l_714), p_19, g_596, g_327)) & 0x62B49E65L);
                }
                else
                {
                    char l_766 = 0xB5L;
                    int l_768 = 0x46D3D10DL;
                    if (l_700)
                    {
                        char l_767 = 0xE5L;
                        int l_769 = (-1L);
                        l_768 = (((safe_mod_func_uint8_t_u_u(func_45(g_624, p_20, p_17), p_19)) || (((g_498 = 0xB1L) != (safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((l_759 = g_282), 0)), (l_766 && func_61(p_17, l_767, l_696, p_20))))) == g_153)) | 5L);
                        l_769 = (+g_281);
                        g_87 = (safe_add_func_int32_t_s_s(g_729, p_20));
                    }
                    else
                    {
                        if (g_498)
                            break;
                        g_624 = (safe_lshift_func_uint16_t_u_u((l_698 = 0UL), 8));
                    }
                    for (l_715 = 0; (l_715 <= 5); ++l_715)
                    {
                        const short l_780 = (-1L);
                        l_700 = (((p_19 < ((safe_add_func_uint16_t_u_u(1UL, ((((safe_add_func_int8_t_s_s((((l_780 ^ (p_20 > g_263)) | l_578) | 0xE718F576L), l_768)) <= (((safe_mul_func_int16_t_s_s(p_20, 1L)) == g_393) & g_340)) == 0x48L) | 0xEBCBA13FL))) != p_19)) ^ p_18) >= l_700);
                        l_699 = (1L || (safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(l_787, 14)), (g_596 = l_695))));
                    }
                    for (l_578 = (-15); (l_578 >= (-30)); l_578 = safe_sub_func_int16_t_s_s(l_578, 1))
                    {
                        l_699 = ((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(g_498, l_698)), p_21)) && 0xD1L);
                    }
                }
                l_699 = (l_808 = (l_700 = (g_729 = (l_700 != (((safe_add_func_int8_t_s_s(g_282, (safe_add_func_int32_t_s_s(func_77(p_17), ((((safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((~(((l_758 >= (l_759 = (l_695 <= (g_282 > (safe_mod_func_int16_t_s_s(0x325FL, (safe_sub_func_int8_t_s_s((+((safe_mod_func_int16_t_s_s((p_19 & g_8), g_236)) & g_263)), g_597)))))))) || p_20) == 4294967287UL)) ^ g_311), 0xCD74CA90L)), g_311)) < p_17) & l_758) <= l_700))))) < p_21) >= p_18)))));
                for (l_699 = 0; (l_699 < (-1)); l_699 = safe_sub_func_uint8_t_u_u(l_699, 8))
                {
                    g_624 = (g_87 = (g_282 ^ (g_729 = g_159)));
                    if (p_21)
                        break;
                }
            }
            else
            {
                unsigned l_833 = 4294967295UL;
                short l_838 = 0x0186L;
                if ((g_263 ^ g_596))
                {
                    unsigned short l_813 = 0x0F89L;
                    int l_814 = 0x12072B64L;
                    l_814 = (((g_511 < l_700) < (safe_mod_func_int16_t_s_s((g_437 >= ((g_340 && p_17) >= p_17)), p_18))) & l_813);
                }
                else
                {
                    unsigned char l_825 = 0x73L;
                    int l_826 = 0x3E59E608L;
                    if ((p_19 != (safe_lshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((l_577 = p_20), func_71(func_77(((safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(g_437, (safe_lshift_func_int8_t_s_s((l_826 = l_825), g_393)))), (safe_sub_func_int16_t_s_s(0L, (safe_mod_func_int16_t_s_s(p_18, g_159)))))) && (safe_lshift_func_uint16_t_u_s(g_281, 4)))), g_282, l_833, p_19, g_514))), g_281))))
                    {
                        l_838 = (safe_add_func_uint16_t_u_u(g_235, (func_71(p_20, l_833, g_393, (safe_sub_func_int32_t_s_s((p_17 < p_19), ((p_17 >= p_18) > (l_826 = func_56(l_695, p_18, p_18, p_17))))), l_697) || g_119)));
                    }
                    else
                    {
                        g_624 = 1L;
                    }
                }
                g_624 = (safe_mul_func_uint8_t_u_u((g_327 > (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(((l_852 = (safe_mul_func_int8_t_s_s((0xCCL ^ 0x36L), (safe_mul_func_uint16_t_u_u(0xB15DL, (((l_699 = (~l_849)) >= (g_119 == ((l_700 = ((safe_add_func_uint16_t_u_u(7UL, ((0x63EFL || (p_18 >= p_19)) > l_849))) ^ 0xBEL)) & p_17))) | 1UL)))))) != g_614), g_87)), p_19))), g_87));
            }
            if (p_20)
                break;
        }
        if (l_577)
        {
            unsigned char l_859 = 0x6AL;
            for (g_137 = 0; (g_137 > 14); g_137++)
            {
                l_577 = (g_281 != ((p_17 = 1L) && (safe_lshift_func_uint16_t_u_u(0xB3FBL, 10))));
            }
            l_698 = (safe_lshift_func_int16_t_s_s(func_22(l_787, l_559, ((l_699 = l_859) == (func_45(l_849, (((((l_849 & (safe_unary_minus_func_int32_t_s(((g_393 > (l_861 = p_18)) ^ l_862)))) & func_71(l_852, g_339, g_729, g_614, p_18)) != g_498) >= g_236) | l_578), p_20) == p_20)), g_437, g_340), 13));
            l_698 = l_859;
        }
        else
        {
            return g_168;
        }
    }
    for (g_514 = 15; (g_514 > 36); g_514 = safe_add_func_uint16_t_u_u(g_514, 6))
    {
        unsigned l_875 = 0x69A12B53L;
        short l_894 = 0x7058L;
        int l_896 = 1L;
        if ((safe_sub_func_int8_t_s_s(0x35L, g_137)))
        {
            const unsigned char l_889 = 0x28L;
            int l_895 = 0x1416BC2BL;
            if ((l_698 = (!(~(safe_mul_func_int8_t_s_s((g_511 = ((safe_mul_func_int8_t_s_s((((0x3BBE76C4L >= (g_327 = p_18)) > p_19) ^ (safe_add_func_uint16_t_u_u(g_340, (safe_mul_func_uint8_t_u_u(((l_875 <= ((safe_unary_minus_func_int32_t_s(0xFA09ADFAL)) > (safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((~(safe_sub_func_uint16_t_u_u(((l_896 = (safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s(l_889, (safe_lshift_func_uint8_t_u_s((((l_578 = g_235) < (g_437 = (l_895 = (0x809B6F4EL == l_894)))) | l_559), g_119)))), 2))) ^ g_729), 1L))), 0x39L)) != 0x8F36L), 0xB70BL)), 0x9B48L)))) || 0xE5L), l_894))))), g_340)) & g_596)), p_19))))))
            {
                unsigned l_897 = 0x5DF08390L;
                int l_901 = 0xA8168198L;
                if ((l_897 = 0xACBB7794L))
                {
                    l_578 = p_18;
                }
                else
                {
                    unsigned l_900 = 0UL;
                    l_900 = (safe_lshift_func_uint16_t_u_s(l_698, 10));
                    l_901 = (g_498 ^ g_597);
                }
            }
            else
            {
                int l_904 = 0xD5300F63L;
                const int l_909 = 1L;
                char l_946 = (-1L);
                for (g_311 = 26; (g_311 != 28); g_311 = safe_add_func_int32_t_s_s(g_311, 4))
                {
                    short l_919 = 0x856BL;
                    unsigned l_933 = 0xC79FCA22L;
                    short l_945 = 0L;
                    if (func_56((+((l_904 = g_8) <= (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((g_437 = 0x06L) > (func_45(g_159, g_236, p_20) | (((0x873EEF3FL > l_895) && (p_18 == g_614)) | l_852))), p_18)), l_909)))), g_729, l_909, g_624))
                    {
                        if (g_281)
                            break;
                        if (l_578)
                            continue;
                    }
                    else
                    {
                        int l_912 = 0x35FCC496L;
                        int l_938 = 0x8E7EB0FDL;
                        l_904 = (safe_lshift_func_uint8_t_u_s((l_912 ^ (p_21 != ((safe_rshift_func_int16_t_s_u((func_61(l_578, (g_327 = ((0xA0BF7875L || (g_87 = p_17)) && ((((g_168 = (((safe_mod_func_int8_t_s_s((((((safe_sub_func_int32_t_s_s((((g_547 = p_17) <= 0x27L) | g_235), l_919)) ^ p_21) >= 0x8315CDE7L) && p_19) && l_919), l_904)) > 0xBFC7A88EL) > p_20)) <= 0x0FL) && l_919) != 255UL))), l_875, p_17) != g_498), p_19)) != l_912))), 0));
                        l_904 = (0x96L & (safe_rshift_func_uint8_t_u_s(((0xE15BL <= ((safe_mod_func_uint8_t_u_u(g_547, (safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((g_437 >= (1UL || ((safe_add_func_int16_t_s_s((g_311 ^ l_889), (safe_unary_minus_func_uint16_t_u((safe_add_func_int16_t_s_s((0xD5B7A4C9L <= l_904), 0xFFCBL)))))) != l_919))), g_137)), 0x4ACD3A27L)))) & 65533UL)) != g_8), 1)));
                        l_933 = (1L > g_614);
                        l_895 = (safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((((p_18 || (g_327 = l_938)) != (g_281 = (l_862 ^ (safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(0UL, g_339)), l_938))))) != func_56(((func_61((p_18 > p_21), (safe_add_func_uint32_t_u_u((l_904 >= l_889), 1UL)), p_17, l_945) | l_894) || 0UL), l_895, p_18, g_198)) ^ g_624), p_21)), 0x4744DF4FL));
                    }
                    g_729 = l_889;
                    g_624 = p_18;
                }
                if (l_946)
                    break;
            }
        }
        else
        {
            unsigned char l_947 = 0UL;
            int l_948 = 0x5A37F8ECL;
            l_948 = ((-2L) && (l_947 = p_17));
        }
    }
    return g_596;
}







static unsigned short func_22(int p_23, char p_24, unsigned char p_25, int p_26, short p_27)
{
    unsigned short l_345 = 0xD164L;
    const int l_348 = 0xAACA4989L;
    int l_349 = 0xDB5B4E78L;
    unsigned l_374 = 7UL;
    int l_376 = (-1L);
    unsigned l_377 = 0x462EF824L;
    int l_406 = 0xD14C5FF9L;
    unsigned char l_488 = 255UL;
    char l_546 = 0xB7L;
    l_349 = ((func_77(g_340) <= (g_263 < (safe_rshift_func_uint16_t_u_s((((g_159 && (safe_mul_func_uint8_t_u_u((((p_25 = (g_339 = (l_345 = g_263))) || p_24) & (safe_rshift_func_uint16_t_u_u(p_27, 1))), ((-9L) != g_235)))) < 65535UL) != l_348), p_23)))) | l_348);
    p_26 = p_26;
    for (l_345 = (-9); (l_345 >= 23); l_345 = safe_add_func_uint16_t_u_u(l_345, 6))
    {
        unsigned l_362 = 0x0E331D99L;
        int l_373 = 0x60AADBF9L;
        int l_375 = 8L;
        const int l_420 = (-8L);
        unsigned l_458 = 4294967295UL;
        if (((safe_mod_func_int8_t_s_s((l_349 = ((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(func_71(p_24, p_23, (l_375 = (func_77(g_339) >= ((p_27 = (safe_rshift_func_uint16_t_u_u(65526UL, g_198))) || (l_362 >= (safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(((((safe_add_func_int8_t_s_s((l_373 = (safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(p_23, p_26)) ^ 0x36062C3BL), l_362))), 0x0BL)) > 0x825B64AAL) || 1L) != p_24), l_374)), 8)))))), l_362, l_362), 5)), g_282)), p_23)) != l_376)), p_24)) >= g_159))
        {
            unsigned l_385 = 1UL;
            int l_438 = 0xCF73F7FBL;
            short l_478 = 0L;
            if (l_377)
            {
                unsigned short l_392 = 65530UL;
                g_393 = (safe_rshift_func_int8_t_s_u((p_23 == (safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u(((safe_add_func_int32_t_s_s((l_373 ^ (p_26 = (((0x5A95L || g_263) != (l_385 | func_56((safe_mod_func_uint32_t_u_u(g_340, (l_349 = g_236))), (safe_lshift_func_int8_t_s_u(((func_61((safe_sub_func_int16_t_s_s(p_26, g_168)), g_236, g_153, g_159) <= p_27) > l_362), 1)), p_24, p_24))) != p_26))), l_385)) && l_385))), l_392))), l_373));
                if (((safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((0x0D62FD04L < (l_349 = l_392)) != (safe_sub_func_uint32_t_u_u((g_327 = (safe_add_func_uint8_t_u_u((!(g_87 || p_25)), ((l_385 != g_198) ^ ((safe_lshift_func_int16_t_s_u(((l_406 = (((safe_sub_func_int8_t_s_s((8L > g_87), l_385)) == p_26) && g_153)) == g_153), 0)) | p_26))))), 0x57E433B8L))), 4294967290UL)), g_168)) > 0xC5L))
                {
                    unsigned short l_423 = 0x69EBL;
                    for (g_281 = 26; (g_281 != (-6)); --g_281)
                    {
                        unsigned char l_417 = 0xA1L;
                        g_87 = l_392;
                        if (p_23)
                            continue;
                        g_87 = 0x7E7A68C1L;
                        p_23 = ((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint16_t_u_u(g_327, ((p_25 > 7UL) != g_282))) | g_159), 11)), 1)) && ((l_375 < (65533UL != func_56(g_282, l_417, g_119, l_385))) <= g_159));
                    }
                    if ((safe_sub_func_int32_t_s_s(l_420, ((((safe_mul_func_int16_t_s_s((l_385 != g_263), 0xF7A7L)) >= 0x9F43L) == l_392) | l_423))))
                    {
                        return p_25;
                    }
                    else
                    {
                        unsigned l_426 = 0xA0CA31FBL;
                        l_373 = ((((p_24 = func_34((safe_add_func_uint8_t_u_u(p_23, l_392)), l_426, l_385)) <= p_27) <= ((l_377 != (safe_mul_func_uint16_t_u_u(l_423, l_374))) > 8UL)) < g_340);
                        g_87 = g_153;
                    }
                }
                else
                {
                    char l_435 = 0x20L;
                    int l_436 = (-9L);
                    l_438 = func_71((l_436 = (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u(g_198, (safe_mul_func_int8_t_s_s((l_435 <= p_23), (p_23 ^ func_77(p_27)))))), 4))), g_8, (p_26 = (g_437 = g_8)), l_406, l_375);
                }
            }
            else
            {
                unsigned char l_469 = 0x1FL;
                for (l_349 = (-2); (l_349 >= 25); l_349 = safe_add_func_int8_t_s_s(l_349, 3))
                {
                    unsigned short l_451 = 65535UL;
                    for (l_385 = (-14); (l_385 != 50); l_385 = safe_add_func_uint8_t_u_u(l_385, 8))
                    {
                        unsigned l_445 = 0xD6A60359L;
                        l_406 = (safe_mod_func_uint32_t_u_u(g_159, p_23));
                        l_445 = 0L;
                        p_26 = func_56((((p_27 < (0x38E5L ^ (func_56(g_327, g_236, (safe_unary_minus_func_int16_t_s((safe_mod_func_int16_t_s_s(p_25, 6L)))), func_61((safe_lshift_func_uint8_t_u_s((func_77(l_451) < ((safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(l_438, l_373)) < g_311), l_373)), 7)) & 65527UL)), 7)), g_437, l_385, p_26)) & g_8))) || p_24) & g_263), g_327, g_236, l_451);
                    }
                    g_87 = g_437;
                    g_87 = p_27;
                    l_375 = l_458;
                }
                if ((safe_mul_func_int16_t_s_s(0L, (g_393 = ((safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(func_77(p_25), (p_24 || 0xA9L))), ((l_469 == (-1L)) > (safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(((0xBFA47CDDL >= ((safe_lshift_func_int16_t_s_u(p_24, 2)) >= l_377)) ^ l_469), 0L)), g_393))))) | l_478) != 1L), 5)), g_311)) >= 0x935BA264L)))))
                {
                    p_26 = 0xFE3992A1L;
                    for (g_137 = 28; (g_137 > 16); g_137 = safe_sub_func_uint32_t_u_u(g_137, 4))
                    {
                        if (l_406)
                            break;
                        return p_26;
                    }
                }
                else
                {
                    unsigned char l_485 = 0xD2L;
                    int l_489 = (-4L);
                    l_349 = g_236;
                    for (p_27 = 0; (p_27 <= (-6)); p_27 = safe_sub_func_int32_t_s_s(p_27, 8))
                    {
                        p_23 = 0x6C137A94L;
                        l_488 = (safe_add_func_uint16_t_u_u((l_485 < (6UL < (safe_lshift_func_uint8_t_u_u(g_119, p_24)))), g_198));
                        p_26 = ((g_498 = ((func_71(l_485, (((l_489 = g_198) & (safe_unary_minus_func_uint16_t_u(g_168))) != (safe_add_func_int8_t_s_s((((l_373 = p_24) < ((((p_27 ^ func_71(p_24, (l_406 = 0x0DD78E7BL), ((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(0x4CF8597AL, l_385)), g_168)) >= 0UL), g_340, p_23)) < 0x78CFAC56L) == l_377) != g_497)) < g_282), p_24))), g_311, l_385, g_263) & 0x9100L) == l_362)) ^ 0x881F4751L);
                    }
                }
            }
            if ((9UL != 0x31L))
            {
                char l_507 = 8L;
                int l_523 = 4L;
                g_511 = ((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((func_45(g_339, (safe_lshift_func_uint8_t_u_s(l_507, ((func_77((l_458 <= g_236)) > (+(safe_unary_minus_func_int8_t_s(1L)))) > (g_236 & (safe_mod_func_int8_t_s_s(((l_373 = p_26) && 0x4BC5L), l_420)))))), g_159) == 0x85BEL), 5)), 65532UL)), 65532UL)) >= g_339);
                p_23 = (g_514 = (safe_mul_func_uint16_t_u_u(func_77(((0x9E66737BL == l_406) | p_24)), g_511)));
                p_23 = (((safe_add_func_uint16_t_u_u(0x0D3CL, (((!(safe_rshift_func_int16_t_s_s(((((func_34(((safe_mul_func_uint16_t_u_u(l_507, (l_523 = l_375))) >= (safe_unary_minus_func_uint8_t_u(((safe_sub_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(65529UL, 0x773CL)) >= func_77(g_282)), p_25)) | 4294967287UL)))), p_25, l_507) != 0x2CL) == (-8L)) != 0L) & g_437), p_27))) > g_8) || p_23))) != l_420) != l_438);
            }
            else
            {
                int l_531 = 1L;
                for (p_23 = 0; (p_23 >= 20); p_23 = safe_add_func_int32_t_s_s(p_23, 2))
                {
                    unsigned short l_532 = 0x6659L;
                    int l_543 = 0xC2D5A9D7L;
                    l_532 = func_56(p_23, p_23, g_311, l_531);
                    if ((safe_lshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(p_27, (l_543 = (l_478 & (safe_mod_func_uint16_t_u_u((g_393 = (l_385 <= l_531)), ((func_61(l_377, (((((l_375 = 1UL) == l_458) | (!func_34(g_340, (safe_mod_func_uint32_t_u_u(func_71((safe_mod_func_int8_t_s_s(l_532, (-5L))), g_281, p_23, l_438, g_119), g_281)), g_198))) != 0xC8L) & l_532), p_25, p_25) < 0xEBE6L) && 3L))))))), 5)))
                    {
                        unsigned char l_548 = 0x4AL;
                        g_547 = ((g_514 > (safe_add_func_int16_t_s_s(l_546, g_498))) ^ g_511);
                        l_548 = (l_438 > g_137);
                    }
                    else
                    {
                        l_375 = ((safe_add_func_int32_t_s_s(((l_458 > ((safe_sub_func_uint16_t_u_u(func_71(g_498, ((g_282 = (func_61(l_478, p_24, (0xF89285C7L > p_25), g_498) > ((((p_26 = p_27) != g_159) < l_348) != 0UL))) && 0x1746L), g_236, g_236, l_478), (-1L))) && g_263)) > 0x59546844L), l_385)) <= p_24);
                        if (p_24)
                            continue;
                    }
                    for (l_377 = 0; (l_377 > 51); l_377 = safe_add_func_uint16_t_u_u(l_377, 7))
                    {
                        return p_27;
                    }
                }
            }
            g_555 = (g_87 = l_438);
        }
        else
        {
            int l_556 = (-6L);
            return l_556;
        }
        return l_488;
    }
    return g_327;
}







static unsigned short func_34(short p_35, int p_36, unsigned p_37)
{
    unsigned char l_49 = 1UL;
    unsigned short l_52 = 0x2406L;
    int l_318 = 0xA0112709L;
    int l_335 = 4L;
    for (p_37 = 2; (p_37 <= 1); p_37--)
    {
        int l_53 = 1L;
        int l_310 = 0L;
        g_311 = (l_310 = ((safe_sub_func_int32_t_s_s(((func_45(((l_49 < g_8) < (safe_sub_func_int8_t_s_s((+g_8), ((l_53 = (p_35 && l_52)) | l_52)))), (safe_add_func_int16_t_s_s(((0xCB566E66L > (func_56(g_8, g_8, l_52, p_35) || g_137)) != 0x96A1L), 0xFB24L)), l_52) < g_8) || (-1L)), g_8)) > 0L));
        g_87 = (l_53 = (g_8 == (-1L)));
        for (l_52 = 0; (l_52 != 28); l_52++)
        {
            for (g_198 = 0; (g_198 > 27); g_198++)
            {
                unsigned char l_319 = 248UL;
                l_319 = ((p_35 < func_61(g_235, l_53, (safe_lshift_func_uint8_t_u_s((g_168 = l_318), 1)), g_263)) > (-6L));
            }
        }
        for (g_198 = 26; (g_198 != 24); g_198 = safe_sub_func_uint16_t_u_u(g_198, 5))
        {
            int l_326 = 9L;
            unsigned l_336 = 0UL;
            int l_337 = 4L;
            g_327 = (((safe_rshift_func_int16_t_s_s(0xEF30L, ((g_87 = p_37) >= (l_53 > g_8)))) == l_326) >= g_198);
            for (g_327 = 27; (g_327 != 41); ++g_327)
            {
                return l_326;
            }
            for (g_159 = 0; (g_159 < 27); g_159++)
            {
                char l_334 = 1L;
                l_310 = (safe_add_func_int32_t_s_s(g_198, l_334));
                return l_334;
            }
            l_337 = (((+(l_335 = g_168)) <= (((-8L) <= func_56(g_311, p_35, func_71(l_52, l_52, l_336, p_35, p_35), p_37)) && g_282)) && l_335);
        }
    }
    return l_318;
}







static char func_45(unsigned p_46, char p_47, int p_48)
{
    unsigned l_163 = 0x7829FC7FL;
    int l_164 = 1L;
    int l_167 = 1L;
    char l_184 = 0x7CL;
    int l_195 = 1L;
    const int l_262 = (-1L);
    const int l_302 = 0xDF522524L;
lbl_220:
    g_168 = (safe_mod_func_uint16_t_u_u(((((g_159 = g_119) < ((((p_47 >= g_153) != (safe_add_func_int32_t_s_s((l_163 = (safe_unary_minus_func_uint16_t_u(6UL))), (l_164 & 0xC58EL)))) <= func_77(func_77((safe_lshift_func_int16_t_s_s((l_167 = 0x3886L), 14))))) > p_48)) || g_153) == l_164), l_164));
    if ((safe_mul_func_int8_t_s_s((g_119 ^ p_46), (4294967291UL != (safe_mul_func_int8_t_s_s((l_163 || (safe_add_func_uint8_t_u_u((l_164 = (~255UL)), g_159))), (l_167 != (safe_sub_func_uint32_t_u_u(3UL, 0UL)))))))))
    {
        short l_181 = 0xF5B1L;
        int l_194 = 0x7BA1556EL;
        unsigned l_276 = 0xB3FC7F96L;
        l_167 = 0xA5B65589L;
        for (g_119 = 0; (g_119 == 14); g_119++)
        {
            int l_185 = 0xA2CA1CAAL;
            int l_214 = 0xD149D964L;
            unsigned l_215 = 4294967295UL;
            char l_216 = 0x56L;
            unsigned l_225 = 0xC891D4E8L;
            int l_227 = 0x8EB078A4L;
            l_185 = (safe_add_func_int32_t_s_s(l_181, ((g_153 & (safe_rshift_func_int16_t_s_s((((l_167 = (0xDED1DAF1L < l_184)) >= g_159) || g_8), 3))) & 0L)));
            if ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(p_46, (((safe_add_func_int8_t_s_s(p_48, ((safe_rshift_func_uint16_t_u_s((l_194 = g_119), ((!l_195) <= 0L))) ^ g_8))) < (safe_rshift_func_int16_t_s_s(p_46, 9))) | ((l_181 | ((func_77(((g_198 = 65535UL) < g_159)) != g_159) != 0xFF77B4A3L)) && p_48)))), l_164)))
            {
                int l_205 = (-2L);
                int l_219 = 0x04BB9F76L;
                g_87 = 0xFAC6FD51L;
                l_167 = ((func_77(func_77((safe_lshift_func_int16_t_s_s(0xF28EL, ((g_137 = p_46) | (func_61((!0xA951L), g_168, (safe_rshift_func_uint16_t_u_s(l_164, (l_216 = (safe_mod_func_uint16_t_u_u(0x07C8L, ((l_205 = l_185) ^ ((!(safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((l_215 = (safe_rshift_func_int16_t_s_u((l_163 & (l_214 = (l_194 = (safe_sub_func_uint8_t_u_u(0xE9L, p_47))))), g_119))), g_87)), 1UL))) | 0x28AAD06FL))))))), p_48) > 0x0A89L)))))) && l_205) >= l_184);
                g_87 = (safe_sub_func_int8_t_s_s(g_198, (l_219 = p_46)));
                if (g_168)
                    break;
            }
            else
            {
                int l_226 = 0x48489ECFL;
                if (l_164)
                    goto lbl_220;
                l_227 = (safe_add_func_uint8_t_u_u(p_48, (((l_214 = (g_159 < (g_137 & (p_46 != l_184)))) <= (((((g_87 ^ (l_225 = l_194)) || (((0xE7EDL ^ p_46) < 0x320EAB87L) & p_46)) >= l_194) ^ l_216) <= l_226)) <= 0x0169846BL)));
                l_227 = (l_214 <= (safe_mul_func_uint16_t_u_u(g_137, (safe_lshift_func_uint8_t_u_s((0xF4L >= (safe_unary_minus_func_int8_t_s(p_48))), ((safe_mul_func_uint16_t_u_u(l_226, ((0xE4L == (((g_235 | func_77(p_47)) == 65535UL) <= p_47)) ^ g_153))) || p_46))))));
                g_236 = (g_87 = l_215);
            }
            if ((g_137 && func_61((func_61((safe_sub_func_uint8_t_u_u(l_215, (0x149C6531L > (safe_lshift_func_uint8_t_u_u((l_167 < (safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(g_119, func_61(((l_164 = (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(g_137, (p_46 == 5L))), 0)), 13))) >= func_77(((p_48 == g_236) | p_46))), g_168, p_46, p_46))), 0x7F12E359L)), l_167))), l_214))))), l_215, p_48, p_48) && p_47), l_167, l_215, g_198)))
            {
                int l_253 = 0x91866434L;
                g_87 = (l_253 = g_198);
                for (g_168 = (-5); (g_168 != 18); ++g_168)
                {
                    if ((g_137 != (p_46 >= (safe_mod_func_uint16_t_u_u((g_263 = (((func_77(g_137) && l_164) < 0L) | ((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(l_214, 1)) != l_262), (p_47 = g_235))) <= 0xD1E987FDL))), p_48)))))
                    {
                        g_282 = (+((safe_rshift_func_uint16_t_u_s((func_77((safe_mod_func_uint32_t_u_u((g_153 = (safe_lshift_func_int8_t_s_u((-1L), ((safe_mul_func_uint8_t_u_u(l_253, (g_168 < g_236))) == (((safe_add_func_uint16_t_u_u(2UL, ((safe_mod_func_int16_t_s_s(0L, 0x4B02L)) > l_276))) < (safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((l_164 = (g_281 = (0xE041L || l_181))), p_46)), p_47))) <= g_8))))), g_8))) >= g_159), 3)) <= 0x1429L));
                    }
                    else
                    {
                        if (g_198)
                            break;
                    }
                }
            }
            else
            {
                if (l_194)
                    goto lbl_220;
                return l_181;
            }
        }
    }
    else
    {
        const int l_295 = 0xC35180EFL;
        unsigned short l_299 = 0UL;
        int l_309 = (-7L);
        l_164 = g_168;
        for (l_164 = 0; (l_164 < (-8)); l_164 = safe_sub_func_uint8_t_u_u(l_164, 1))
        {
            unsigned short l_296 = 0UL;
            l_167 = (((safe_lshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s(g_137, (safe_lshift_func_int8_t_s_s(0xF0L, g_282)))), (0xE843L || l_164))) > ((l_184 != (l_296 = (g_235 >= ((safe_sub_func_int16_t_s_s(8L, (safe_rshift_func_uint8_t_u_s((l_295 <= p_48), 7)))) <= g_137)))) && l_296)) != g_236);
        }
        l_309 = ((safe_rshift_func_uint8_t_u_u((func_71((l_299 <= ((safe_add_func_uint32_t_u_u(l_302, (safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(0x5410L, (safe_rshift_func_uint8_t_u_s(g_236, 3)))), 4)))) | g_137)), (l_295 & 0x0DB2345CL), g_137, g_263, l_299) && p_46), 7)) == l_163);
    }
    return l_195;
}







static char func_56(unsigned p_57, unsigned p_58, short p_59, char p_60)
{
    unsigned short l_68 = 0x9639L;
    char l_83 = (-10L);
    int l_86 = 1L;
    int l_152 = 4L;
    short l_154 = 1L;
    char l_156 = (-7L);
    l_156 = (+(~func_61(p_58, ((g_153 = ((g_8 || (l_152 = (safe_rshift_func_uint16_t_u_u((g_8 <= (l_68 ^ ((safe_add_func_uint8_t_u_u(l_68, func_71(((func_77((safe_sub_func_int8_t_s_s(0L, (l_86 = (l_68 <= (safe_mul_func_uint8_t_u_u((l_83 <= (safe_add_func_int16_t_s_s(p_59, g_8))), 3L))))))) && g_87) | p_59), l_68, p_57, p_60, g_8))) >= p_57))), l_68)))) || (-3L))) <= g_8), l_154, l_154)));
    return p_58;
}







static const int func_61(unsigned short p_62, unsigned p_63, int p_64, unsigned short p_65)
{
    short l_155 = 1L;
    l_155 = (g_87 = g_153);
    return l_155;
}







static unsigned char func_71(int p_72, unsigned p_73, int p_74, short p_75, unsigned p_76)
{
    unsigned l_111 = 0xC2AD413EL;
    unsigned short l_118 = 9UL;
    unsigned l_120 = 0xC7F1FF5BL;
    int l_121 = 0xC75790E3L;
    int l_138 = (-1L);
    unsigned l_148 = 0x0C07DD84L;
    unsigned char l_149 = 255UL;
    for (p_74 = 0; (p_74 < (-13)); p_74 = safe_sub_func_uint32_t_u_u(p_74, 8))
    {
        short l_104 = 1L;
        int l_122 = 0x2801F5D8L;
        int l_139 = 0L;
        l_122 = (((p_73 < (l_104 = (g_8 <= g_87))) == (safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(p_72, (safe_lshift_func_int16_t_s_s(l_111, (g_8 > (((p_73 != (l_121 = (+((((safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((g_119 = (safe_lshift_func_int16_t_s_u((p_75 = l_118), 12))) || 0UL), 0xF1EFL)), 0x7C9EL)) < p_72) && l_120) && 0xCECC2FCFL)))) || g_87) && 0x25L)))))) | 0L), 0x9EL))) < l_111);
        l_139 = func_77((p_75 & (0xCD63L <= (l_138 = (safe_lshift_func_uint16_t_u_u(((l_121 = ((safe_sub_func_int16_t_s_s((g_137 = (8UL && (((g_119 == ((l_122 = (safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(g_87, g_119)), p_72))) != (safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s(0x4FD69A81L, l_104)), 2L)), 11)))) != p_76) & p_74))), 0xEB70L)) && g_87)) <= p_75), p_72))))));
    }
    l_149 = func_77((p_74 = ((safe_sub_func_int16_t_s_s(((l_138 = g_137) != 1UL), ((safe_mod_func_int32_t_s_s(func_77(g_119), (l_120 | (!((safe_lshift_func_uint8_t_u_s((g_8 >= p_74), g_8)) | (safe_sub_func_uint8_t_u_u((l_118 <= l_121), l_148))))))) != l_111))) ^ p_76)));
    l_138 = (((1L && l_148) & (safe_add_func_uint8_t_u_u((l_121 = p_74), g_87))) | g_137);
    return l_120;
}







static unsigned func_77(int p_78)
{
    unsigned char l_88 = 0x5CL;
    int l_95 = 0L;
    int l_96 = 1L;
    unsigned short l_101 = 9UL;
    if ((p_78 = (g_8 <= (l_96 = (((3UL || ((((g_87 = p_78) > l_88) >= ((safe_mod_func_uint8_t_u_u(0xAAL, ((safe_mul_func_uint8_t_u_u(g_8, 255UL)) | ((((safe_mod_func_uint16_t_u_u((l_95 = ((l_88 | ((4294967295UL >= g_8) && 0x47E9L)) >= 9UL)), 65535UL)) != g_8) && g_8) < g_8)))) >= g_8)) || 0x78D3L)) || p_78) | l_88)))))
    {
        int l_97 = 0xC5007C8AL;
        g_87 = ((l_95 = g_8) < l_88);
        g_87 = l_97;
        p_78 = 0L;
        return l_88;
    }
    else
    {
        unsigned short l_100 = 0x8334L;
        p_78 = (safe_lshift_func_uint8_t_u_s((l_100 = (+0UL)), 1));
        g_87 = (l_101 > g_87);
    }
    return l_101;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_340, "g_340", print_hash_value);
    transparent_crc(g_393, "g_393", print_hash_value);
    transparent_crc(g_437, "g_437", print_hash_value);
    transparent_crc(g_497, "g_497", print_hash_value);
    transparent_crc(g_498, "g_498", print_hash_value);
    transparent_crc(g_511, "g_511", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    transparent_crc(g_547, "g_547", print_hash_value);
    transparent_crc(g_555, "g_555", print_hash_value);
    transparent_crc(g_596, "g_596", print_hash_value);
    transparent_crc(g_597, "g_597", print_hash_value);
    transparent_crc(g_614, "g_614", print_hash_value);
    transparent_crc(g_624, "g_624", print_hash_value);
    transparent_crc(g_729, "g_729", print_hash_value);
    transparent_crc(g_957, "g_957", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
