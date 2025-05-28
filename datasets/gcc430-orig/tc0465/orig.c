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



static int g_13 = 0x3ED15DE0L;
static int g_43 = 1L;
static int *g_50 = &g_43;
static unsigned short g_71 = 7UL;
static int g_104 = 0x8F24B120L;
static char g_137 = 9L;
static unsigned g_138 = 7UL;
static int g_175 = 0x754454C8L;
static int g_293 = 1L;
static int g_307 = 0x7643AB9FL;
static unsigned g_320 = 1UL;
static unsigned g_325 = 0x55C9E55FL;
static const int *g_329 = &g_104;
static unsigned g_338 = 0xD9FA13DBL;
static int **g_380 = &g_50;
static int ***g_379 = &g_380;
static const unsigned short g_410 = 1UL;
static unsigned g_423 = 0xF64FB653L;
static int g_426 = 5L;
static int g_649 = 0x55A24DFEL;
static char g_654 = 0xF7L;
static unsigned g_658 = 7UL;
static unsigned g_672 = 0x7F69D9B0L;
static int g_673 = (-1L);
static int g_736 = (-5L);
static short g_745 = 4L;
static unsigned g_768 = 0x689A9F81L;
static unsigned g_900 = 0UL;
static unsigned g_925 = 0x0EF8EEABL;
static unsigned g_1050 = 4294967290UL;
static short g_1094 = 0xF579L;
static unsigned g_1095 = 0UL;
static unsigned short g_1171 = 0x2AB3L;
static unsigned g_1187 = 0x2F74CB91L;
static int g_1272 = 0xBC27B72DL;
static unsigned char g_1408 = 0x93L;
static unsigned char g_1539 = 1UL;
static unsigned short g_1717 = 65526UL;
static int g_1850 = 0x0BDB2220L;
static char g_1854 = 0x95L;
static unsigned short g_1865 = 0x6D49L;
static int * const g_1878 = &g_104;
static char g_1879 = 0x0BL;
static unsigned g_2130 = 0x5D95ADAEL;
static unsigned g_2302 = 0xA8C08830L;
static short g_2505 = 6L;
static char g_2524 = 0x1DL;
static unsigned char g_2527 = 255UL;
static int g_2535 = 1L;



static int func_1(void);
static int func_2(unsigned p_3, int p_4, unsigned short p_5, unsigned p_6);
static unsigned func_7(short p_8, char p_9, unsigned short p_10, unsigned p_11, int p_12);
static int func_15(short p_16, int p_17, int p_18, unsigned char p_19, int p_20);
static int func_21(int p_22, unsigned char p_23, unsigned char p_24, int p_25);
static char func_26(short p_27);
static unsigned func_28(short p_29, const int p_30, unsigned p_31);
static int * func_33(int p_34, int * p_35, char p_36, int p_37);
static const short func_38(int * p_39, unsigned p_40, int p_41);
static unsigned short func_46(int * p_47, int * p_48, int * p_49);
static int func_1(void)
{
    char l_14 = 2L;
    int ***l_1888 = &g_380;
    int l_1976 = 0x4D992687L;
    unsigned l_1977 = 0x2DE42883L;
    int l_2028 = 0L;
    int l_2037 = 0xA1BFE58DL;
    unsigned short l_2312 = 0x476AL;
    int *l_2387 = &g_43;
    int l_2523 = 0x4FE9A65DL;
    if (func_2(func_7(g_13, ((l_14 & (((g_13 | (((func_15(l_14, ((func_21((func_26(g_13) || (g_1854 < g_1865)), (l_1888 != (void*)0), l_14, g_900) < l_1976) & l_14), l_14, l_1977, l_1977) == (-1L)) <= 0x6103AAA2L) & g_1171)) , 0x91L) , 255UL)) > l_14), g_654, g_1879, l_14), g_13, l_1977, g_1171))
    {
        unsigned l_2011 = 1UL;
        char l_2016 = 0x05L;
        unsigned l_2017 = 0x6E98FB3DL;
        int l_2045 = 5L;
        int l_2048 = 0xE22ED591L;
        char l_2089 = 0xC0L;
        int *l_2136 = &l_2028;
        unsigned l_2143 = 4294967289UL;
        short l_2155 = 0x5431L;
        unsigned char l_2310 = 0UL;
        unsigned short l_2311 = 0UL;
        int l_2322 = 0x54B48581L;
        unsigned char l_2325 = 255UL;
        int l_2335 = 0L;
        if ((safe_mod_func_int16_t_s_s((((((l_2011 && 3UL) || l_2011) , func_28(g_1408, (safe_sub_func_uint8_t_u_u(g_900, (0x7AE5872EL > (safe_sub_func_uint16_t_u_u(g_293, g_307))))), l_2016)) < l_2017) , l_2011), (-8L))))
        {
            int *l_2018 = &g_1272;
            int *l_2019 = &g_307;
            int *l_2020 = &g_104;
            int *l_2021 = &g_175;
            int *l_2022 = &g_649;
            int *l_2023 = &g_43;
            int *l_2024 = &g_1272;
            int *l_2025 = &g_307;
            char l_2026 = 0x62L;
            int *l_2027 = &g_1272;
            int *l_2029 = &g_43;
            int *l_2030 = &g_426;
            int *l_2031 = &g_43;
            int *l_2032 = &g_426;
            int *l_2033 = &g_307;
            int *l_2034 = &g_649;
            int *l_2035 = &g_307;
            int *l_2036 = (void*)0;
            int *l_2038 = &g_649;
            int *l_2039 = &l_2037;
            int *l_2040 = &g_104;
            int *l_2041 = &g_104;
            int *l_2042 = &g_175;
            int *l_2043 = (void*)0;
            int *l_2044 = &g_175;
            int *l_2046 = (void*)0;
            int *l_2047 = &g_104;
            int *l_2049 = &l_2048;
            int *l_2050 = &g_175;
            int *l_2051 = &l_2028;
            int *l_2052 = &g_104;
            int *l_2053 = &g_43;
            int *l_2054 = &l_2028;
            int *l_2055 = (void*)0;
            int *l_2056 = &g_43;
            int *l_2057 = (void*)0;
            unsigned char l_2058 = 0x29L;
            l_2058--;
        }
        else
        {
            unsigned short l_2061 = 0xA03BL;
            const char l_2066 = 0x3FL;
            int l_2071 = (-1L);
            int *l_2074 = &l_2045;
            (*g_50) |= l_2061;
            (*l_2074) &= (((safe_rshift_func_uint16_t_u_u(l_2048, ((safe_sub_func_uint16_t_u_u((g_13 , g_426), l_2066)) == l_2061))) != func_15((((safe_sub_func_int16_t_s_s((***l_1888), (safe_lshift_func_int16_t_s_s(((((l_2071 ^ ((safe_rshift_func_int16_t_s_s(0x7D37L, 9)) & 0xB22CA603L)) < (***l_1888)) == g_1272) , 0L), g_138)))) != g_672) ^ g_768), l_2071, (**g_380), l_2066, (**g_380))) , 0x38431C89L);
            (**g_380) ^= (*l_2074);
        }
        (*g_50) = (g_104 != (g_1187 || func_21((func_21(((((((safe_sub_func_uint32_t_u_u((***l_1888), ((void*)0 != &l_2048))) == (safe_rshift_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u(0x58L, l_2017)) , (***l_1888)) && (+(g_1854 != g_1095))), 8))) , 0x3E8B76BDL) , l_2048) != 0x48569025L) , 1L), g_1094, g_672, g_1187) < 0UL), g_1094, l_14, l_2045)));
        for (g_1187 = 0; (g_1187 < 38); ++g_1187)
        {
            int l_2085 = 0L;
            unsigned l_2086 = 0UL;
            int l_2105 = (-1L);
            short l_2142 = 0L;
            short l_2207 = 0xD847L;
            int l_2254 = 7L;
            unsigned l_2321 = 0x1486E1B5L;
        }
        for (g_1171 = 16; (g_1171 < 30); g_1171++)
        {
            const int l_2328 = 5L;
            int *l_2336 = &g_43;
            unsigned l_2364 = 1UL;
            unsigned char l_2365 = 252UL;
            const unsigned char l_2385 = 0x5CL;
            (*g_380) = l_2336;
            for (l_2312 = (-12); (l_2312 == 14); l_2312 = safe_add_func_int8_t_s_s(l_2312, 4))
            {
                unsigned short l_2347 = 1UL;
                int **l_2352 = &l_2136;
                for (l_2143 = 0; (l_2143 <= 47); l_2143 = safe_add_func_int32_t_s_s(l_2143, 1))
                {
                    const unsigned l_2353 = 0UL;
                    (*g_50) = ((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((((((g_13 , (!0UL)) != g_1717) ^ (safe_sub_func_int16_t_s_s(l_2347, g_925))) , g_672) ^ g_307), (((safe_add_func_uint32_t_u_u((func_7(((safe_mod_func_int8_t_s_s(((((*g_379) == ((((-1L) & 5UL) | l_2347) , l_2352)) == g_1850) <= 1L), (*l_2336))) , (***l_1888)), (*l_2136), (**l_2352), g_2130, (*g_50)) != (-8L)), (**l_2352))) ^ l_2353) < (**l_2352)))), 3)) < (**l_2352));
                    (*g_1878) = (***g_379);
                }
                if ((*g_1878))
                    continue;
                (*l_2352) = (**g_379);
            }
            if (((&l_2045 != ((((((((((**g_380) ^ 0x14DDD5B0L) | (safe_lshift_func_uint8_t_u_u((((func_7(func_7(g_307, g_673, g_1865, ((0x0AA9L && ((safe_rshift_func_uint16_t_u_s((***l_1888), ((((safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((((safe_rshift_func_int8_t_s_u(g_673, g_673)) < l_2364) >= (*l_2136)), (-3L))), g_736)) , (-1L)) & (***l_1888)) == (***l_1888)))) | (*l_2336))) > (***l_1888)), l_2365), (***l_1888), g_175, g_307, (*l_2336)) != 0UL) , g_137) , g_13), g_658))) , (*l_2336)) && 1UL) <= g_338) <= (*l_2136)) , 1UL) == g_2302) , &l_2048)) != 0xECL))
            {
                int *l_2368 = &g_175;
                for (g_426 = 0; (g_426 >= (-2)); g_426 = safe_sub_func_int8_t_s_s(g_426, 2))
                {
                    l_2368 = (**g_379);
                }
                for (l_2312 = 0; (l_2312 == 17); l_2312 = safe_add_func_uint32_t_u_u(l_2312, 5))
                {
                    unsigned char l_2377 = 255UL;
                    if ((*l_2336))
                    {
                        int *l_2371 = &g_426;
                        int *l_2372 = (void*)0;
                        int *l_2373 = &l_2045;
                        int *l_2374 = &g_175;
                        int *l_2375 = &g_43;
                        int *l_2376 = (void*)0;
                        (*g_1878) |= ((void*)0 != &g_380);
                        ++l_2377;
                        return g_1272;
                    }
                    else
                    {
                        return g_43;
                    }
                }
            }
            else
            {
                unsigned l_2382 = 0x6A5EC1E9L;
                (*g_1878) = (safe_mod_func_uint8_t_u_u(func_38((**g_379), l_2382, ((*g_380) != ((*l_2336) , (**g_379)))), (+(((safe_lshift_func_int8_t_s_s((g_745 , l_2385), (g_1850 | l_2382))) >= l_2011) ^ g_1854))));
                (*g_1878) = l_2382;
                (*g_380) = &l_2028;
            }
        }
    }
    else
    {
        int *l_2386 = &l_2037;
        unsigned short l_2424 = 1UL;
        int l_2451 = 0L;
        int l_2454 = 0xCCFE109AL;
        int l_2457 = 0L;
        int *l_2530 = (void*)0;
        unsigned l_2534 = 0x8C6DB2C9L;
        if (func_46(&l_2037, l_2386, ((g_654 , g_137) , l_2387)))
        {
            char l_2398 = (-3L);
            (**l_1888) = (void*)0;
            for (g_104 = 1; (g_104 < (-4)); g_104 = safe_sub_func_int8_t_s_s(g_104, 4))
            {
                g_307 |= (*l_2386);
                (*l_2387) = (((safe_sub_func_int16_t_s_s((*l_2387), (safe_lshift_func_uint8_t_u_u(g_338, 0)))) < (safe_lshift_func_uint16_t_u_u(g_2130, 8))) || (((((((*g_329) , g_426) , &g_380) == (void*)0) ^ (safe_sub_func_int16_t_s_s(g_71, (-1L)))) <= g_1408) == l_2398));
            }
            for (g_138 = 25; (g_138 >= 5); --g_138)
            {
                (**l_1888) = (void*)0;
                (*l_2387) |= (g_423 | 0x03L);
                (*g_380) = l_2386;
            }
            (**g_379) = (**l_1888);
        }
        else
        {
            int *l_2401 = &l_2037;
            int *l_2402 = &g_104;
            int *l_2403 = &g_104;
            int *l_2404 = &g_426;
            int *l_2405 = &g_1272;
            int *l_2406 = &g_307;
            int *l_2407 = &g_104;
            int *l_2408 = (void*)0;
            int *l_2409 = &g_104;
            int *l_2410 = (void*)0;
            int *l_2411 = (void*)0;
            int *l_2412 = (void*)0;
            int *l_2413 = &g_307;
            int *l_2414 = (void*)0;
            int l_2415 = 0xF9D53DCCL;
            int *l_2416 = &g_649;
            int *l_2417 = (void*)0;
            int *l_2418 = &g_175;
            int *l_2419 = &l_2028;
            int *l_2420 = &g_43;
            int *l_2421 = (void*)0;
            int *l_2422 = &g_649;
            int *l_2423 = &g_43;
            int *l_2434 = &g_649;
            int *l_2435 = &g_43;
            int *l_2436 = &g_175;
            int *l_2437 = &l_2037;
            int *l_2438 = &g_175;
            int *l_2439 = &l_2037;
            int *l_2440 = &g_426;
            int *l_2441 = &g_307;
            int *l_2442 = (void*)0;
            int *l_2443 = &g_649;
            int *l_2444 = &g_649;
            int *l_2445 = &g_426;
            int *l_2446 = &g_649;
            int *l_2447 = &g_426;
            int *l_2448 = &g_426;
            int *l_2449 = &g_307;
            int *l_2450 = &g_307;
            int *l_2452 = &g_426;
            int *l_2453 = &g_1272;
            int *l_2455 = &g_104;
            int *l_2456 = (void*)0;
            int *l_2458 = (void*)0;
            int *l_2459 = &l_2037;
            int *l_2460 = &g_426;
            int *l_2461 = &g_649;
            int *l_2462 = &g_649;
            int *l_2463 = (void*)0;
            int *l_2464 = &l_2028;
            int *l_2465 = &l_2037;
            int *l_2466 = &l_2415;
            int *l_2467 = &l_2457;
            int *l_2468 = &l_2037;
            int *l_2469 = &g_104;
            int *l_2470 = &g_43;
            int *l_2471 = &g_43;
            int *l_2472 = &l_2454;
            int *l_2473 = &g_43;
            int *l_2474 = &l_2028;
            int *l_2475 = &l_2457;
            int *l_2476 = &l_2037;
            int *l_2477 = &l_2415;
            int *l_2478 = &g_1272;
            int *l_2479 = &g_175;
            int *l_2480 = (void*)0;
            int *l_2481 = &g_426;
            int *l_2482 = &l_2037;
            int *l_2483 = &g_175;
            int *l_2484 = (void*)0;
            int *l_2485 = &g_307;
            int *l_2486 = (void*)0;
            int *l_2487 = &l_2451;
            int *l_2488 = (void*)0;
            int *l_2489 = &l_2028;
            int *l_2490 = &l_2457;
            int *l_2491 = (void*)0;
            int *l_2492 = &g_175;
            int *l_2493 = (void*)0;
            int *l_2494 = (void*)0;
            int *l_2495 = &g_175;
            int *l_2496 = &l_2415;
            int *l_2497 = &g_649;
            int *l_2498 = &g_43;
            int *l_2499 = &g_307;
            int *l_2500 = &g_175;
            int l_2501 = 0xFB917C88L;
            int *l_2502 = &g_1272;
            int *l_2503 = (void*)0;
            int *l_2504 = &g_175;
            int *l_2506 = &l_2451;
            int *l_2507 = &l_2454;
            int l_2508 = 0x671E6A37L;
            int *l_2509 = (void*)0;
            int *l_2510 = &l_2454;
            int *l_2511 = &g_175;
            int *l_2512 = (void*)0;
            int *l_2513 = &g_104;
            int *l_2514 = &g_43;
            int *l_2515 = &g_426;
            int *l_2516 = (void*)0;
            int *l_2517 = &g_104;
            int *l_2518 = &g_43;
            int *l_2519 = &g_1272;
            int *l_2520 = &g_43;
            int *l_2521 = &g_1272;
            int *l_2522 = &g_104;
            int *l_2525 = &l_2457;
            int *l_2526 = &l_2415;
            --l_2424;
            (*l_2402) = (safe_sub_func_int16_t_s_s(func_46(&l_2415, (**g_379), l_2386), 0x57BAL));
            ++g_2527;
            (*g_380) = (*g_380);
        }
        if ((g_745 , 0L))
        {
            int l_2531 = 0x0DF8D129L;
            int l_2536 = 1L;
            (*l_2386) &= (*g_1878);
            if (func_15((*l_2386), (func_7(l_2531, ((safe_lshift_func_int16_t_s_u((*l_2386), (*l_2386))) , (-2L)), ((0x22L <= ((*g_329) , ((&l_2531 != &l_2451) , 0x81L))) < g_2302), g_423, l_2534) , (*l_2387)), g_2535, g_745, l_2536))
            {
                return l_2531;
            }
            else
            {
                return g_293;
            }
        }
        else
        {
            (**l_1888) = &g_426;
        }
        (*l_2387) |= (*g_1878);
    }
    for (g_768 = 24; (g_768 >= 48); ++g_768)
    {
        for (l_1977 = (-7); (l_1977 == 57); l_1977 = safe_add_func_uint32_t_u_u(l_1977, 1))
        {
            (**l_1888) = (**g_379);
            return g_745;
        }
    }
    return g_138;
}







static int func_2(unsigned p_3, int p_4, unsigned short p_5, unsigned p_6)
{
    int *l_2005 = &g_43;
    unsigned char l_2006 = 255UL;
    for (g_1408 = (-13); (g_1408 >= 30); ++g_1408)
    {
        int *l_2004 = &g_104;
        (*g_1878) = (-9L);
        (**g_379) = l_2005;
        (***g_379) = (g_137 <= (*l_2005));
    }
    return p_6;
}







static unsigned func_7(short p_8, char p_9, unsigned short p_10, unsigned p_11, int p_12)
{
    const int **l_2001 = &g_329;
    (*g_1878) = (((void*)0 != l_2001) | (((**l_2001) , (*g_379)) != (void*)0));
    (*g_1878) = (**l_2001);
    return g_1854;
}







static int func_15(short p_16, int p_17, int p_18, unsigned char p_19, int p_20)
{
    unsigned char l_1985 = 0UL;
    int **l_1990 = (void*)0;
    if (p_18)
    {
        unsigned l_1978 = 1UL;
        --l_1978;
        p_17 = (((safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(0xE6C6L, l_1985)), g_175)) != ((((safe_add_func_int16_t_s_s((+(g_307 && (((((safe_add_func_int16_t_s_s(g_1171, (!g_325))) || ((void*)0 != l_1990)) >= g_175) != g_1879) , g_1717))), g_768)) , &g_380) == &l_1990) > 1L)) , (-7L));
    }
    else
    {
        int *l_1991 = &g_649;
        unsigned l_1998 = 0x7E1D077AL;
        l_1991 = l_1991;
        (*g_380) = &g_175;
        (*g_1878) |= (safe_add_func_int16_t_s_s(p_18, (0UL < (0xB9B1L >= (safe_lshift_func_int16_t_s_u((l_1998 || ((*l_1991) & (safe_lshift_func_int8_t_s_s(g_649, 1)))), 13))))));
    }
    (*g_1878) = 0x4A7FA24AL;
    return (*g_1878);
}







static int func_21(int p_22, unsigned char p_23, unsigned char p_24, int p_25)
{
    char l_1889 = 1L;
    int ***l_1890 = &g_380;
    unsigned l_1895 = 0xE7D33B7FL;
    int *l_1896 = &g_649;
    int *l_1897 = &g_43;
    int l_1933 = 0x5D56AEF0L;
    int l_1940 = 0xE93C8672L;
    int l_1944 = 0L;
    int l_1960 = 0x64CD2E49L;
    unsigned l_1961 = 4294967288UL;
    int *l_1964 = &g_426;
    int *l_1965 = &l_1940;
    int *l_1966 = &g_307;
    int *l_1967 = &g_1272;
    int *l_1968 = (void*)0;
    int *l_1969 = &g_1272;
    int *l_1970 = &g_649;
    int *l_1971 = (void*)0;
    int *l_1972 = &l_1933;
    unsigned l_1973 = 4294967286UL;
    (*l_1897) &= ((l_1889 , (l_1890 == (p_25 , l_1890))) , p_23);
    for (g_1095 = 0; (g_1095 < 34); ++g_1095)
    {
        int *l_1900 = &g_426;
        int *l_1901 = &g_43;
        int *l_1902 = (void*)0;
        int *l_1903 = (void*)0;
        int *l_1904 = &g_1272;
        int *l_1905 = (void*)0;
        int l_1906 = 0L;
        int *l_1907 = &g_307;
        int *l_1908 = &g_175;
        int *l_1909 = &g_43;
        int l_1910 = (-1L);
        int *l_1911 = &g_649;
        int *l_1912 = &g_649;
        int l_1913 = (-2L);
        int *l_1914 = (void*)0;
        int *l_1915 = &l_1913;
        int *l_1916 = &g_175;
        int *l_1917 = (void*)0;
        int l_1918 = 0x9FC287ECL;
        int *l_1919 = &g_307;
        int *l_1920 = &g_307;
        int *l_1921 = &g_175;
        int *l_1922 = &g_649;
        int *l_1923 = (void*)0;
        int *l_1924 = (void*)0;
        int *l_1925 = &g_175;
        int *l_1926 = &g_426;
        int *l_1927 = (void*)0;
        int *l_1928 = &g_43;
        int *l_1929 = (void*)0;
        int *l_1930 = &g_649;
        int *l_1931 = &l_1918;
        int *l_1932 = &g_307;
        int *l_1934 = &l_1906;
        int *l_1935 = &g_175;
        int *l_1936 = &g_43;
        int *l_1937 = &g_104;
        int l_1938 = 0L;
        int *l_1939 = (void*)0;
        int *l_1941 = &l_1906;
        int l_1942 = 0xC97CC889L;
        int *l_1943 = &g_175;
        int *l_1945 = &g_1272;
        int *l_1946 = &l_1938;
        int *l_1947 = &g_649;
        int *l_1948 = &l_1913;
        int l_1949 = 0L;
        int l_1950 = 0xA3D0D5E0L;
        int *l_1951 = &l_1906;
        int *l_1952 = &l_1910;
        int *l_1953 = &l_1949;
        int *l_1954 = &g_104;
        int *l_1955 = &l_1949;
        int *l_1956 = (void*)0;
        int *l_1957 = &g_649;
        int l_1958 = 0xE5FF5092L;
        int *l_1959 = &g_175;
        ++l_1961;
    }
    l_1973--;
    return (*g_329);
}







static char func_26(short p_27)
{
    unsigned char l_32 = 255UL;
    int **l_1239 = &g_50;
    const unsigned l_1245 = 4294967295UL;
    int l_1251 = 0x4C8019D6L;
    int ***l_1254 = (void*)0;
    unsigned l_1282 = 3UL;
    int l_1378 = (-8L);
    int l_1422 = (-1L);
    int l_1426 = 2L;
    int l_1536 = 0xF1458DB5L;
    unsigned short l_1571 = 9UL;
    int l_1698 = (-1L);
    short l_1728 = 0x2A12L;
    int l_1751 = (-1L);
    if (((g_13 , func_28(l_32, p_27, p_27)) , func_28(p_27, l_32, ((p_27 <= (**l_1239)) || (**l_1239)))))
    {
        const int l_1240 = 0xBE47E690L;
        int *l_1241 = &g_104;
        int ***l_1244 = &l_1239;
        unsigned l_1246 = 0xF97FBF10L;
        (**l_1244) = (**g_379);
        (*g_50) = (l_1246 , (safe_sub_func_int32_t_s_s((((((((safe_rshift_func_int16_t_s_s(0L, 2)) , (**l_1244)) == (*g_380)) && (-2L)) > p_27) & g_410) == (*l_1241)), p_27)));
    }
    else
    {
        short l_1255 = 1L;
        int *l_1256 = &g_426;
        int *l_1271 = &g_1272;
        (*l_1239) = l_1256;
        (*l_1271) ^= (p_27 >= (((p_27 || ((safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(0xD509EC46L, 0x8658D902L)), (safe_lshift_func_uint16_t_u_s((((safe_rshift_func_int16_t_s_s((*l_1256), 0)) , ((safe_add_func_uint32_t_u_u((+p_27), ((void*)0 == (*g_379)))) <= ((~(safe_mod_func_int16_t_s_s(func_28((safe_add_func_int32_t_s_s(((g_1050 > (*l_1256)) >= 0xB33024F3L), (***g_379))), (***g_379), (*l_1256)), p_27))) > g_410))) | g_1095), 14)))) > p_27)) <= 0x7C0A7CD8L) && g_426));
    }
    if (((*l_1239) != (*g_380)))
    {
        (*l_1239) = ((**l_1239) , (*l_1239));
    }
    else
    {
        int *l_1273 = &g_1272;
        (*g_380) = l_1273;
    }
    if ((**g_380))
    {
        short l_1274 = 8L;
        int *l_1281 = &g_1272;
        unsigned l_1289 = 0xD77362A0L;
        int l_1308 = 1L;
        int l_1365 = 0x53ECBAE6L;
        int l_1467 = 1L;
        int l_1528 = (-9L);
        int l_1631 = 0xA115B915L;
        char l_1652 = 1L;
        int *l_1729 = &l_1467;
        (*l_1281) = ((p_27 <= l_1274) != ((~((***g_379) >= (((((safe_rshift_func_uint16_t_u_s(g_745, (g_43 , (((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(p_27, (((g_320 , l_1281) == (*g_380)) || l_1282))), g_138)) <= (**l_1239)) , g_320)))) == (***g_379)) < (-10L)) >= (*g_50)) <= 0xC178L))) || 9L));
        for (g_175 = 21; (g_175 == (-10)); g_175--)
        {
            unsigned l_1290 = 0x99903979L;
            int l_1297 = 5L;
            unsigned l_1303 = 1UL;
            int l_1351 = 0x3BECBA04L;
            int l_1387 = 0x04D73C8CL;
            int l_1395 = 0x6908017AL;
            int l_1468 = 0x1FCDC99DL;
            int l_1513 = 5L;
            int **l_1550 = &g_50;
            char l_1603 = 6L;
        }
        (*l_1729) ^= ((safe_mod_func_int32_t_s_s((*g_50), p_27)) >= ((g_658 >= (*l_1281)) < (safe_add_func_int16_t_s_s((g_293 >= ((safe_add_func_int16_t_s_s(((((**l_1239) & ((safe_add_func_int16_t_s_s(p_27, ((g_426 != g_736) , (*l_1281)))) , (**l_1239))) | (*l_1281)) , (-1L)), (*l_1281))) > l_1728)), 0x1D7DL))));
    }
    else
    {
        int l_1730 = 0xB36EE8FBL;
        int ***l_1748 = &g_380;
        int l_1779 = (-9L);
        int l_1805 = (-1L);
        g_426 ^= (*g_329);
        (*g_380) = (**g_379);
        if ((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_u(g_900, 4)) == ((0x58L <= (safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(((func_46(&l_1730, func_33((safe_sub_func_int16_t_s_s(g_293, ((p_27 >= ((-2L) | p_27)) == ((safe_sub_func_int32_t_s_s(p_27, (**l_1239))) || l_1730)))), &l_1730, g_1050, l_1730), (*l_1239)) < p_27) | g_1171), 0xCADD5B35L)), p_27))) <= 0x6FL)), p_27)))
        {
            unsigned l_1747 = 0x5CDE1377L;
            int ***l_1752 = &g_380;
            int l_1811 = 0xA823BCB1L;
            if ((l_1747 , p_27))
            {
                for (l_1251 = 0; (l_1251 > 18); l_1251++)
                {
                    (**l_1239) = 0x2944E47DL;
                }
            }
            else
            {
                int *l_1754 = &g_426;
                short l_1871 = (-10L);
                if ((***g_379))
                {
                    unsigned l_1753 = 5UL;
                    int *l_1769 = &g_104;
                    int *l_1770 = &l_1536;
                    int *l_1771 = &l_1536;
                    int *l_1772 = &g_175;
                    int *l_1773 = &g_104;
                    int *l_1774 = &l_1426;
                    int *l_1775 = &g_104;
                    int *l_1776 = &g_175;
                    int *l_1777 = (void*)0;
                    int *l_1778 = (void*)0;
                    int *l_1780 = &g_175;
                    int *l_1781 = &g_1272;
                    int *l_1782 = &g_175;
                    int *l_1783 = &g_104;
                    int *l_1784 = (void*)0;
                    int *l_1785 = &g_43;
                    int *l_1786 = &g_43;
                    int *l_1787 = &l_1730;
                    int *l_1788 = &g_649;
                    int *l_1789 = (void*)0;
                    int *l_1790 = &g_43;
                    int *l_1791 = (void*)0;
                    int *l_1792 = &l_1779;
                    int *l_1793 = &l_1536;
                    int *l_1794 = &g_1272;
                    int *l_1795 = &l_1779;
                    int *l_1796 = &l_1779;
                    int *l_1797 = &g_649;
                    int *l_1798 = &l_1426;
                    int l_1799 = 5L;
                    int *l_1800 = (void*)0;
                    int *l_1801 = &l_1378;
                    int *l_1802 = &l_1536;
                    int *l_1803 = &g_43;
                    int *l_1804 = &l_1422;
                    int *l_1806 = &l_1426;
                    int *l_1807 = &g_175;
                    int *l_1808 = (void*)0;
                    int *l_1809 = &g_175;
                    int *l_1810 = &g_307;
                    int *l_1812 = &g_1272;
                    int *l_1813 = &g_175;
                    int *l_1814 = &l_1698;
                    int *l_1815 = &l_1426;
                    int *l_1816 = (void*)0;
                    int *l_1817 = &g_43;
                    int *l_1818 = &g_649;
                    int *l_1819 = (void*)0;
                    int *l_1820 = &g_307;
                    int *l_1821 = &l_1799;
                    int *l_1822 = &g_649;
                    int *l_1823 = (void*)0;
                    int *l_1824 = (void*)0;
                    int *l_1825 = &g_104;
                    int *l_1826 = &g_649;
                    int *l_1827 = &l_1426;
                    int *l_1828 = &g_1272;
                    int *l_1829 = (void*)0;
                    int *l_1830 = &g_649;
                    int *l_1831 = (void*)0;
                    int l_1832 = 0x22C47668L;
                    int *l_1833 = (void*)0;
                    int *l_1834 = &l_1698;
                    int *l_1835 = &l_1536;
                    int *l_1836 = &g_426;
                    int *l_1837 = &g_307;
                    int *l_1838 = &l_1799;
                    int *l_1839 = &l_1698;
                    int *l_1840 = &l_1426;
                    int *l_1841 = &l_1698;
                    int *l_1842 = &l_1378;
                    int *l_1843 = &g_426;
                    int *l_1844 = &g_1272;
                    int *l_1845 = (void*)0;
                    int *l_1846 = (void*)0;
                    int *l_1847 = &l_1799;
                    int *l_1848 = &l_1805;
                    int *l_1849 = (void*)0;
                    int *l_1851 = &l_1779;
                    int *l_1852 = &l_1378;
                    int *l_1853 = &l_1536;
                    int *l_1855 = &g_649;
                    int *l_1856 = &g_1272;
                    int *l_1857 = &l_1536;
                    int *l_1858 = &l_1378;
                    int *l_1859 = &g_426;
                    int *l_1860 = &l_1536;
                    int *l_1861 = &g_1272;
                    int *l_1862 = &l_1426;
                    int *l_1863 = &g_1272;
                    int *l_1864 = &l_1378;
                    (*l_1239) = func_33(((l_1751 || ((l_1747 , l_1752) != (void*)0)) <= (l_1753 < p_27)), l_1754, p_27, p_27);
                    for (g_426 = 21; (g_426 <= (-12)); g_426--)
                    {
                        (***l_1752) = ((safe_lshift_func_uint8_t_u_u(g_138, (safe_sub_func_uint32_t_u_u(l_1753, ((safe_sub_func_int32_t_s_s(p_27, (p_27 > ((***l_1752) , (safe_rshift_func_uint16_t_u_s(0x2A31L, 5)))))) , (p_27 >= ((p_27 > (safe_lshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s(0L, p_27)) > 4294967293UL), 2))) | 3L))))))) < (*g_329));
                        (*g_50) = 0xDCDFB45DL;
                    }
                    --g_1865;
                }
                else
                {
                    unsigned char l_1870 = 253UL;
                    (**l_1752) = g_1878;
                }
            }
        }
        else
        {
            (***l_1748) ^= g_1879;
            l_1378 |= ((p_27 , (!((((&g_380 != (((((safe_sub_func_int32_t_s_s((*g_329), (((+(***l_1748)) , l_1748) != &l_1239))) && g_137) == p_27) != p_27) , (void*)0)) > 0x3B87L) == 0xA4L) || g_1171))) == 0xC456L);
        }
        for (g_1850 = 0; (g_1850 <= (-23)); g_1850--)
        {
            for (g_672 = 0; (g_672 != 16); g_672 = safe_add_func_uint16_t_u_u(g_672, 7))
            {
                return p_27;
            }
        }
    }
    return p_27;
}







static unsigned func_28(short p_29, const int p_30, unsigned p_31)
{
    int *l_42 = &g_43;
    char l_1191 = 7L;
    (**g_379) = func_33(((func_38(l_42, g_13, (safe_rshift_func_uint16_t_u_s(func_46((p_30 , l_42), l_42, l_42), p_31))) > l_1191) , 2L), l_42, g_745, p_30);
    return (*l_42);
}







static int * func_33(int p_34, int * p_35, char p_36, int p_37)
{
    unsigned short l_1196 = 0x6B36L;
    int *l_1209 = &g_104;
    (*p_35) |= (safe_mod_func_int8_t_s_s((((g_1187 != ((safe_add_func_int16_t_s_s(l_1196, (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(l_1196, 7)), (safe_mod_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(0xF0L, 0)) , (((0x52L > (+(0xF6L & g_768))) != (safe_sub_func_int8_t_s_s(p_37, 0x8FL))) , (-2L))), l_1196)) || g_745), 0x2011F81AL)))))) , 0x187CL)) > p_36) , g_71), l_1196));
lbl_1234:
    if ((*p_35))
    {
        int *l_1210 = &g_43;
        return l_1210;
    }
    else
    {
        int l_1223 = 0L;
        int *l_1226 = &g_104;
        (*p_35) &= (((((((*l_1209) & 65534UL) ^ (safe_lshift_func_uint16_t_u_s(((p_34 ^ (((*l_1209) & g_320) <= g_649)) > 1UL), 14))) , (g_325 ^ (safe_rshift_func_int16_t_s_s((((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(p_34, p_37)) > p_37), 0xEC0CL)) || p_37), l_1223)), g_672)) & 0x4C515526L) && g_1187), 9)))) ^ p_37) || g_654) <= (*l_1209));
        (*l_1226) = (p_36 , (safe_sub_func_uint16_t_u_u((g_138 || p_36), (g_1187 < (*l_1209)))));
    }
    for (g_658 = (-12); (g_658 != 41); ++g_658)
    {
        int *l_1232 = &g_43;
        for (g_71 = (-19); (g_71 < 60); g_71 = safe_add_func_uint8_t_u_u(g_71, 3))
        {
            int * const l_1231 = &g_426;
            int l_1233 = 0xFD823DC1L;
            (*p_35) ^= ((*l_1209) < ((l_1231 == ((&p_37 != l_1232) , l_1232)) < (l_1233 | p_37)));
            if (p_37)
                goto lbl_1234;
        }
        (*l_1209) = (*p_35);
    }
    return l_1209;
}







static const short func_38(int * p_39, unsigned p_40, int p_41)
{
    unsigned l_357 = 3UL;
    int *l_361 = &g_104;
    short l_389 = 8L;
    int *l_406 = &g_307;
    int ***l_408 = &g_380;
    unsigned l_422 = 0xCBA4B74AL;
    int l_517 = 0x558F219AL;
    int l_573 = (-7L);
    int l_583 = 0x798FFF75L;
    int l_636 = 0xE721772AL;
    int l_657 = 0L;
    int ***l_677 = (void*)0;
    int l_679 = 0xE5BDCAADL;
    unsigned short l_877 = 0x470BL;
    int *l_882 = &l_583;
    int *l_895 = (void*)0;
    char l_1020 = 3L;
    if ((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(p_40, 1)), ((*p_39) < ((l_357 || (l_357 == l_357)) && 0x3DDEL)))))
    {
        int *l_360 = &g_307;
        int * const * const l_382 = &l_361;
        int * const * const *l_381 = &l_382;
        for (g_338 = 0; (g_338 < 7); g_338 = safe_add_func_uint32_t_u_u(g_338, 2))
        {
            return l_357;
        }
        g_50 = p_39;
        (*l_360) |= (*p_39);
        if (func_46(&g_43, p_39, l_361))
        {
            (*l_360) = (func_46(&g_43, l_361, l_361) < l_357);
        }
        else
        {
            unsigned l_376 = 0x683A89B0L;
            unsigned short l_405 = 0x7AF8L;
            int l_407 = (-1L);
            for (p_41 = (-7); (p_41 > (-15)); --p_41)
            {
                unsigned short l_390 = 65527UL;
                const unsigned l_397 = 0x163799DEL;
            }
            return g_410;
        }
    }
    else
    {
        unsigned short l_415 = 0UL;
        int *l_424 = (void*)0;
        int *l_425 = &g_426;
        int ***l_443 = &g_380;
        int l_467 = 0x2E2F530FL;
        int l_656 = 0x5556FB1FL;
        int l_693 = 1L;
        int l_763 = 7L;
        unsigned char l_785 = 255UL;
        short l_786 = 0x3595L;
        int *l_872 = &l_467;
        (*l_425) |= ((safe_rshift_func_uint16_t_u_s(func_46(p_39, (**g_379), p_39), 3)) == (safe_sub_func_uint32_t_u_u((l_415 || ((safe_rshift_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(((0x70L != (0UL != ((((safe_mod_func_int32_t_s_s(l_422, (*l_406))) | 0x0214L) | (*l_406)) != p_40))) || 252UL), 0x2FL)) == l_415), 7)) | g_423)), p_40)));
        if (((safe_rshift_func_uint8_t_u_u(((void*)0 != &l_424), 7)) , ((((***l_408) == ((void*)0 != (*g_380))) , p_41) < 3UL)))
        {
            int ***l_444 = &g_380;
            int l_455 = (-8L);
            int *l_461 = &g_104;
            int l_469 = 7L;
            (*g_380) = (*g_380);
            (**g_380) = (*p_39);
            if (((((safe_rshift_func_int8_t_s_s(1L, 3)) == (safe_rshift_func_int8_t_s_s((g_13 ^ ((0L >= (safe_sub_func_int32_t_s_s((p_41 || ((safe_sub_func_int16_t_s_s(g_307, (safe_rshift_func_uint16_t_u_s(0x778CL, 0)))) ^ (***g_379))), ((safe_rshift_func_uint16_t_u_u(g_307, ((safe_lshift_func_int16_t_s_u(((l_443 == l_444) , 0x6DB6L), 0)) < (*g_329)))) ^ (*g_50))))) ^ p_40)), p_41))) != (*l_425)) , (*p_39)))
            {
                char l_453 = 0L;
                char l_454 = 0x24L;
                int ***l_484 = &g_380;
                (*l_406) |= (*p_39);
                g_175 &= (((((safe_add_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s(((((safe_sub_func_int8_t_s_s((p_40 , g_426), (-1L))) & (*g_50)) , 65535UL) < 1L), p_40)), p_40)) | 1L) == 0xD8L), 2L)) , (*l_406)) != l_453) > g_43) | l_454);
                if ((p_40 & 246UL))
                {
                    unsigned l_456 = 0x19995588L;
                    int *l_462 = &l_455;
                    if ((*p_39))
                    {
                        --l_456;
                    }
                    else
                    {
                        (*l_406) = (safe_rshift_func_uint16_t_u_s((1UL && g_338), 13));
                        (**g_379) = l_461;
                        (**l_444) = l_462;
                    }
                }
                else
                {
                    unsigned l_475 = 0x05330916L;
                    for (g_138 = 0; (g_138 == 18); g_138 = safe_add_func_int16_t_s_s(g_138, 1))
                    {
                        int *l_465 = (void*)0;
                        int *l_466 = &g_307;
                        int *l_468 = &g_175;
                        int *l_470 = &g_43;
                        int *l_471 = &g_426;
                        int *l_472 = &g_104;
                        int *l_473 = &g_43;
                        int *l_474 = &g_307;
                        (***l_443) = (**g_380);
                        ++l_475;
                    }
                }
                (*l_425) = (safe_add_func_uint8_t_u_u(((((0UL ^ (*p_39)) && p_41) ^ ((safe_add_func_int16_t_s_s(g_423, g_137)) ^ (((((*l_425) , (((safe_add_func_int32_t_s_s(l_453, ((*l_461) , (*p_39)))) == g_293) ^ 0xADL)) != p_40) , l_484) == &g_380))) | 0xC7496384L), (***l_484)));
            }
            else
            {
                int l_485 = 0xF46E8A0CL;
                (***l_444) = (l_485 ^ (-1L));
            }
            (**l_408) = (*g_380);
        }
        else
        {
            int *l_486 = &g_104;
            unsigned short l_500 = 0UL;
            int l_506 = 2L;
            int l_538 = 1L;
            int l_566 = 0x5E713FECL;
            int l_581 = (-1L);
            if ((***g_379))
            {
                unsigned short l_487 = 0xB792L;
                int l_501 = 0x7E6BF6D6L;
                int l_503 = (-5L);
                int l_514 = 0xBBF48EEBL;
                int l_548 = (-9L);
                int l_574 = 0x562EA414L;
                int l_610 = 0x110DA4FAL;
                int l_648 = (-8L);
                (*l_361) &= (p_41 || ((g_423 | ((*l_406) < g_138)) <= g_71));
                if ((l_487 < (safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(((((p_41 ^ l_487) && (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(0UL, ((*l_406) >= (1L == 1UL)))) , 65533UL), 8)) >= (*l_406)) > (*l_486)), 0)), 0x0AF4L))) & l_500) >= 0xC0L), g_104)), p_40))))
                {
                    int *l_502 = &l_501;
                    int *l_504 = (void*)0;
                    int *l_505 = &g_175;
                    int *l_507 = &l_467;
                    int *l_508 = &g_307;
                    int *l_509 = &l_506;
                    int *l_510 = &g_426;
                    int *l_511 = &g_175;
                    int *l_512 = (void*)0;
                    int *l_513 = &l_501;
                    int *l_515 = &g_307;
                    int *l_516 = &g_43;
                    int *l_518 = &g_175;
                    int *l_519 = &g_175;
                    int *l_520 = &g_43;
                    int *l_521 = &g_426;
                    int *l_522 = (void*)0;
                    int *l_523 = (void*)0;
                    int *l_524 = &g_426;
                    int *l_525 = &g_43;
                    int *l_526 = &l_514;
                    int *l_527 = &l_503;
                    int *l_528 = &l_506;
                    int *l_529 = &l_503;
                    int *l_530 = &l_503;
                    int *l_531 = (void*)0;
                    int *l_532 = (void*)0;
                    int *l_533 = &g_175;
                    int *l_534 = &g_43;
                    int l_535 = 0x5AA44495L;
                    int *l_536 = &l_514;
                    int *l_537 = (void*)0;
                    int *l_539 = &g_104;
                    int *l_540 = &g_426;
                    int *l_541 = (void*)0;
                    int *l_542 = &l_514;
                    int *l_543 = &g_307;
                    int *l_544 = (void*)0;
                    int *l_545 = &g_307;
                    int *l_546 = &l_535;
                    int *l_547 = &g_175;
                    int *l_549 = (void*)0;
                    int *l_550 = &l_535;
                    int *l_551 = &l_503;
                    int *l_552 = &l_501;
                    int *l_553 = (void*)0;
                    int *l_554 = &l_514;
                    int *l_555 = &g_43;
                    int *l_556 = &g_43;
                    int *l_557 = &l_535;
                    int *l_558 = &l_503;
                    int *l_559 = &l_535;
                    int *l_560 = (void*)0;
                    int *l_561 = &l_501;
                    int *l_562 = &g_175;
                    int *l_563 = &l_535;
                    int *l_564 = &g_307;
                    int *l_565 = (void*)0;
                    int *l_567 = &l_548;
                    int *l_568 = &l_501;
                    int *l_569 = &g_175;
                    int *l_570 = &g_175;
                    int *l_571 = &l_548;
                    int *l_572 = (void*)0;
                    int *l_575 = &l_535;
                    int *l_576 = &g_43;
                    int *l_577 = &l_566;
                    int *l_578 = &l_501;
                    int *l_579 = &l_535;
                    int *l_580 = (void*)0;
                    int *l_582 = (void*)0;
                    int *l_584 = &l_506;
                    int *l_585 = &l_501;
                    int *l_586 = (void*)0;
                    int *l_587 = &l_538;
                    int *l_588 = &l_467;
                    int *l_589 = (void*)0;
                    int *l_590 = (void*)0;
                    int *l_591 = &l_501;
                    int *l_592 = &l_517;
                    int *l_593 = &l_538;
                    int *l_594 = &l_517;
                    int *l_595 = &l_501;
                    int *l_596 = &l_467;
                    int *l_597 = &g_104;
                    int *l_598 = &g_175;
                    int *l_599 = &l_538;
                    int l_600 = 0x710C3276L;
                    int *l_601 = &l_514;
                    int *l_602 = (void*)0;
                    int *l_603 = &l_501;
                    int *l_604 = (void*)0;
                    int *l_605 = (void*)0;
                    int *l_606 = &g_104;
                    int *l_607 = &l_566;
                    int *l_608 = &l_538;
                    int *l_609 = &l_600;
                    int *l_611 = &l_573;
                    int *l_612 = &l_610;
                    int *l_613 = &l_514;
                    int *l_614 = &l_566;
                    int *l_615 = &l_514;
                    int *l_616 = &g_43;
                    int *l_617 = &g_104;
                    int *l_618 = &l_548;
                    int *l_619 = &l_501;
                    int *l_620 = &l_503;
                    int *l_621 = &l_467;
                    int *l_622 = &l_535;
                    int *l_623 = &l_467;
                    int *l_624 = &g_307;
                    int *l_625 = &l_538;
                    int *l_626 = (void*)0;
                    int *l_627 = &l_610;
                    int *l_628 = &l_548;
                    int *l_629 = &g_43;
                    int *l_630 = &l_573;
                    int *l_631 = &l_501;
                    int *l_632 = &g_43;
                    int *l_633 = &l_501;
                    int *l_634 = &g_104;
                    int *l_635 = &g_426;
                    int *l_637 = &l_610;
                    int *l_638 = &g_43;
                    int *l_639 = &g_307;
                    int *l_640 = &l_566;
                    int *l_641 = &l_610;
                    int *l_642 = &l_514;
                    int *l_643 = &l_573;
                    int l_644 = 5L;
                    int *l_645 = &l_538;
                    int *l_646 = &l_548;
                    int *l_647 = &l_517;
                    int *l_650 = &g_175;
                    int *l_651 = (void*)0;
                    int *l_652 = &l_506;
                    int *l_653 = &g_307;
                    int *l_655 = &l_548;
                    g_658++;
                }
                else
                {
                    int *l_667 = (void*)0;
                    int *l_676 = &l_538;
                    (*p_39) &= (safe_add_func_uint16_t_u_u(((~(*l_486)) || 0x61L), g_175));
                    (*l_406) |= (*g_50);
                    for (g_338 = (-26); (g_338 == 30); ++g_338)
                    {
                        int ***l_678 = &g_380;
                        g_672 &= (safe_lshift_func_uint8_t_u_u((*l_361), 0));
                        (*l_361) = g_673;
                        (***l_678) = ((((safe_rshift_func_int8_t_s_u(l_648, (l_676 != ((((g_13 , ((void*)0 != l_677)) , (l_678 == &g_380)) <= p_40) , (*g_380))))) == g_410) ^ (***l_443)) <= 0UL);
                    }
                    (*l_361) |= (*p_39);
                }
            }
            else
            {
                int *l_680 = &l_573;
                int *l_681 = (void*)0;
                int *l_682 = &g_426;
                int l_683 = 0xA36F6203L;
                int *l_684 = &l_581;
                int l_685 = 2L;
                int *l_686 = &l_517;
                int *l_687 = &l_506;
                int *l_688 = &l_581;
                int *l_689 = &g_175;
                int *l_690 = &g_307;
                int *l_691 = &l_517;
                int *l_692 = &l_685;
                int *l_694 = (void*)0;
                int *l_695 = &l_657;
                int *l_696 = (void*)0;
                int *l_697 = (void*)0;
                int *l_698 = &g_175;
                int *l_699 = (void*)0;
                int *l_700 = &l_693;
                int *l_701 = &l_656;
                int *l_702 = &g_43;
                int *l_703 = &l_683;
                int *l_704 = &g_649;
                int *l_705 = &l_573;
                int *l_706 = &l_693;
                int *l_707 = &g_175;
                int *l_708 = (void*)0;
                int *l_709 = &g_104;
                int *l_710 = (void*)0;
                int *l_711 = &l_467;
                int *l_712 = &l_566;
                int *l_713 = (void*)0;
                int *l_714 = &l_683;
                int *l_715 = &g_426;
                int *l_716 = &g_307;
                int *l_717 = &g_649;
                int *l_718 = &l_467;
                int *l_719 = &g_426;
                int *l_720 = &g_649;
                int *l_721 = &l_685;
                int *l_722 = &l_693;
                int *l_723 = &l_685;
                int *l_724 = &l_683;
                int *l_725 = &l_467;
                int *l_726 = &l_693;
                int *l_727 = &l_538;
                int *l_728 = &l_566;
                int *l_729 = (void*)0;
                int *l_730 = (void*)0;
                int *l_731 = &l_657;
                int *l_732 = &l_581;
                int *l_733 = &g_426;
                int *l_734 = (void*)0;
                int *l_735 = &l_573;
                int *l_737 = &l_566;
                int *l_738 = (void*)0;
                int *l_739 = (void*)0;
                int *l_740 = &l_573;
                int *l_741 = (void*)0;
                int *l_742 = &g_104;
                int *l_743 = &l_517;
                int *l_744 = &l_581;
                int *l_746 = &l_573;
                int *l_747 = (void*)0;
                int *l_748 = &l_506;
                int *l_749 = (void*)0;
                int *l_750 = (void*)0;
                int *l_751 = &g_104;
                int *l_752 = (void*)0;
                int *l_753 = (void*)0;
                int *l_754 = (void*)0;
                int *l_755 = &l_566;
                int *l_756 = &g_649;
                int *l_757 = (void*)0;
                int *l_758 = &l_583;
                int *l_759 = &l_636;
                int *l_760 = &l_566;
                int *l_761 = &l_517;
                int *l_762 = &g_104;
                int *l_764 = (void*)0;
                int *l_765 = &l_683;
                int *l_766 = &l_517;
                int *l_767 = &l_517;
                (**l_408) = (*g_380);
                (*l_486) = (p_40 && l_679);
                ++g_768;
                (*l_703) |= (-4L);
            }
        }
        if (((safe_sub_func_uint16_t_u_u(0x6D18L, (safe_lshift_func_uint8_t_u_s(((void*)0 != (*g_379)), g_658)))) , ((*l_425) || (safe_mod_func_int8_t_s_s((g_175 <= ((((safe_sub_func_uint8_t_u_u((((*l_425) , ((((&p_39 == ((safe_mod_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(((0UL < l_785) == p_41), p_41)) <= l_786), p_40)) <= g_658), g_654)) , (void*)0)) , &p_39) != &p_39) == 0UL)) | (-1L)), (*l_425))) , g_325) == p_41) , g_410)), 1UL)))))
        {
            short l_787 = (-1L);
            const int l_791 = 0L;
            int *l_792 = (void*)0;
            int *l_793 = &l_583;
            int *l_794 = &g_104;
            int *l_795 = &l_763;
            int *l_796 = &l_693;
            int *l_797 = &g_426;
            int *l_798 = &l_583;
            int *l_799 = &g_307;
            int *l_800 = (void*)0;
            int *l_801 = (void*)0;
            int *l_802 = &l_583;
            int *l_803 = &l_583;
            int *l_804 = &l_657;
            int *l_805 = &g_649;
            int *l_806 = &l_573;
            int *l_807 = &l_657;
            int *l_808 = &l_583;
            int *l_809 = &l_693;
            int *l_810 = &l_583;
            int *l_811 = (void*)0;
            int *l_812 = &g_307;
            unsigned char l_813 = 2UL;
            int l_835 = 0x92C7058CL;
            if ((*l_425))
            {
                (*l_361) = ((-5L) | (-8L));
                if (g_672)
                    goto lbl_788;
            }
            else
            {
lbl_788:
                (*p_39) |= l_787;
                for (l_517 = 0; (l_517 <= 7); l_517 = safe_add_func_uint32_t_u_u(l_517, 2))
                {
                    return l_791;
                }
                ++l_813;
            }
            for (g_43 = 23; (g_43 > 15); g_43 = safe_sub_func_int8_t_s_s(g_43, 1))
            {
                char l_827 = 0x33L;
                unsigned char l_832 = 0x3CL;
                if ((*p_39))
                {
                    (*l_808) ^= ((safe_add_func_int8_t_s_s(p_40, 0x08L)) , (safe_unary_minus_func_int16_t_s(g_104)));
                }
                else
                {
                    const char l_836 = 0xAFL;
                    (*l_793) ^= (((void*)0 == l_677) , (((safe_add_func_uint32_t_u_u(0xD50859C0L, ((((*l_425) < (((safe_lshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_u((p_41 == l_827), ((safe_sub_func_int32_t_s_s(((safe_sub_func_int16_t_s_s(l_832, p_40)) , (+((safe_lshift_func_uint16_t_u_s(g_338, l_827)) <= p_41))), g_745)) != g_654))) < l_835), 3)) || 0x0009L) >= g_410)) || (-1L)) & p_41))) != l_836) <= g_673));
                    (**g_379) = (p_41 , p_39);
                }
            }
        }
        else
        {
            int **l_846 = &l_424;
            char l_857 = 0xEFL;
            for (l_786 = 0; (l_786 <= (-30)); l_786 = safe_sub_func_int32_t_s_s(l_786, 5))
            {
                unsigned char l_841 = 0UL;
                unsigned l_842 = 4294967290UL;
                (*l_361) = (*p_39);
                (*g_380) = ((safe_sub_func_uint16_t_u_u((((l_841 ^ p_41) ^ l_842) ^ (safe_unary_minus_func_uint16_t_u(((safe_add_func_uint8_t_u_u(((p_40 , g_13) , (l_846 != &p_39)), ((safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((g_410 == (((*p_39) , 0L) & 0L)), p_41)), 3)) != (*g_329)))) && g_43)))), 0x6B14L)) , (void*)0);
                return (*l_425);
            }
            for (l_785 = 26; (l_785 <= 5); l_785--)
            {
                return g_325;
            }
            (*l_425) = (safe_lshift_func_int16_t_s_s((!(safe_sub_func_uint8_t_u_u(l_857, (((void*)0 != &g_380) || ((*p_39) & ((p_41 , p_39) == (void*)0)))))), 1));
        }
        (*l_872) |= ((safe_rshift_func_uint16_t_u_s((*l_425), 13)) & (((safe_lshift_func_int16_t_s_u((g_673 && ((~(safe_rshift_func_int16_t_s_u(((safe_mod_func_int8_t_s_s((((void*)0 == &g_307) < (safe_add_func_int8_t_s_s((((((safe_lshift_func_uint8_t_u_u(p_40, 5)) & (p_40 , (safe_lshift_func_uint16_t_u_u(g_138, p_41)))) | g_410) , &g_649) != l_872), p_40))), p_40)) , 0xC980L), 6))) >= (*l_361))), g_672)) , (*l_406)) , p_41));
    }
    (*p_39) |= ((*l_361) , (safe_mod_func_int8_t_s_s(((void*)0 == l_677), (safe_sub_func_uint8_t_u_u((l_877 > (((safe_sub_func_int8_t_s_s(p_41, g_320)) <= ((safe_lshift_func_uint16_t_u_s(((void*)0 != p_39), ((void*)0 == &p_39))) > (-1L))) != g_325)), g_426)))));
    if (func_46(p_39, p_39, l_882))
    {
        unsigned l_893 = 0x899808B2L;
        int ***l_898 = &g_380;
        int l_917 = 0x5FF860DDL;
        int l_1001 = 0xD7EB9255L;
        int l_1049 = 0xC992D6F1L;
        int l_1078 = 1L;
        if ((***g_379))
        {
            int l_889 = 7L;
            int **l_890 = &g_50;
            (*g_50) = ((safe_mod_func_uint8_t_u_u(((!(safe_add_func_int32_t_s_s((g_175 <= (((safe_sub_func_int32_t_s_s(((*g_329) || l_889), (((*p_39) & g_649) , ((p_40 >= 0x7A481F0FL) ^ ((((((l_890 != ((0x9FE9BB53L || 0xD64D53EFL) , &p_39)) >= 3L) , 0UL) | (*l_406)) , 0L) && (**l_890)))))) & (**l_890)) && p_41)), 0xB66756ABL))) || 0L), g_745)) , (*p_39));
            (*p_39) |= (safe_lshift_func_int16_t_s_u(0L, 9));
            (*l_890) = (**g_379);
        }
        else
        {
            int l_894 = 0L;
            l_893 |= (*p_39);
            l_894 = l_894;
        }
        (*g_380) = l_895;
        for (l_657 = 0; (l_657 < (-27)); --l_657)
        {
            short l_899 = 0xB1DBL;
            int *l_918 = (void*)0;
            int l_1053 = (-1L);
            int l_1055 = (-1L);
            int l_1076 = (-3L);
            int l_1091 = 0x27BA36C1L;
            int l_1151 = 0x694C7D82L;
            int *l_1176 = &l_517;
        }
    }
    else
    {
        int *l_1190 = &g_175;
        for (g_175 = 0; (g_175 == 15); g_175 = safe_add_func_int32_t_s_s(g_175, 4))
        {
            short l_1181 = 0L;
            (*l_361) = (safe_lshift_func_uint8_t_u_s(g_138, ((**g_380) ^ (*p_39))));
            (*p_39) ^= ((((~((l_1181 || ((((((l_1181 , (*l_882)) && g_426) && p_40) < g_1094) && (p_41 & l_1181)) <= l_1181)) <= l_1181)) < 0L) >= 0xDA04L) , 0x1AE0E9EEL);
            for (g_736 = 0; (g_736 < (-9)); g_736--)
            {
                for (g_423 = 19; (g_423 >= 23); g_423++)
                {
                    char l_1186 = (-9L);
                    (*l_882) = ((**g_380) , (*g_329));
                    (**g_380) &= l_1186;
                }
            }
            ++g_1187;
        }
        (*l_361) &= (l_1190 == (void*)0);
    }
    (**l_408) = (**g_379);
    return p_40;
}







static unsigned short func_46(int * p_47, int * p_48, int * p_49)
{
    const unsigned char l_51 = 4UL;
    short l_103 = 0x320CL;
    const int *l_193 = &g_175;
    int l_206 = 0xB84BF07FL;
    int l_207 = 0xC910CF37L;
    int l_209 = 0x1F4025DDL;
    int l_224 = 1L;
    int l_247 = 0xE30F3DA4L;
    int l_282 = 0x87B1761CL;
    short l_337 = 1L;
    unsigned short l_344 = 0x0E00L;
lbl_323:
    g_50 = &g_43;
    if (l_51)
    {
        unsigned short l_54 = 0xB864L;
        int *l_84 = &g_43;
        short l_85 = 9L;
        int l_129 = 0x5FE41CD9L;
        int l_130 = 0x32C2DE0BL;
        int **l_147 = &g_50;
        if ((safe_lshift_func_int16_t_s_u((l_54 != l_54), (g_43 , (((((safe_unary_minus_func_int32_t_s(0x8CE22955L)) ^ (*g_50)) && g_13) , (safe_rshift_func_int8_t_s_u((-6L), 4))) < (safe_mod_func_int16_t_s_s((p_49 != (void*)0), 0x9CADL)))))))
        {
            return g_13;
        }
        else
        {
            int *l_60 = &g_43;
            int *l_61 = &g_43;
            int *l_62 = &g_43;
            int *l_63 = (void*)0;
            int *l_64 = &g_43;
            int *l_65 = (void*)0;
            int *l_66 = &g_43;
            int *l_67 = &g_43;
            int *l_68 = &g_43;
            int *l_69 = &g_43;
            int *l_70 = &g_43;
            ++g_71;
            (*l_70) = 0x3CC8C9F1L;
            (*l_62) = (safe_sub_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(((~((((p_48 != (void*)0) && ((0xF8L | (l_54 , g_13)) >= ((safe_sub_func_uint32_t_u_u(0xF936BB35L, (((safe_rshift_func_uint16_t_u_s(((((safe_lshift_func_int16_t_s_s((((((l_84 == (void*)0) , ((((g_13 && 4UL) < l_51) <= l_51) >= (*g_50))) > (*p_48)) & g_71) < (-1L)), g_43)) || 255UL) == 0x29496125L) ^ 65535UL), (*l_68))) < g_43) >= (*l_64)))) == 1L))) == g_71) <= (*l_61))) || (*l_84)), 65529UL)) || (*l_84)), (*g_50)));
        }
        (*g_50) = l_85;
        if ((p_49 != (((!g_43) , (safe_lshift_func_int16_t_s_s(((*g_50) <= (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(l_51, ((g_13 , ((65532UL | (*l_84)) , &g_43)) == p_48))), 13))), 5))) , &g_43)))
        {
            unsigned l_100 = 0x23DE179BL;
            for (l_85 = 0; (l_85 > (-7)); l_85 = safe_sub_func_int16_t_s_s(l_85, 9))
            {
                int **l_105 = &g_50;
                g_104 &= ((((safe_sub_func_int32_t_s_s((l_84 != &g_43), (safe_rshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((g_13 ^ (l_51 <= l_100)), (((safe_mod_func_uint32_t_u_u((l_103 , (!((*g_50) != 0x2BF48DF1L))), (*p_47))) & 1UL) && 249UL))) != g_13), g_13)))) , (void*)0) == p_47) , l_51);
                (*l_105) = &g_43;
                for (l_54 = (-24); (l_54 <= 45); l_54 = safe_add_func_int16_t_s_s(l_54, 6))
                {
                    int *l_108 = &g_104;
                    int *l_109 = &g_104;
                    int *l_110 = &g_104;
                    int *l_111 = (void*)0;
                    int *l_112 = &g_104;
                    int *l_113 = &g_104;
                    int *l_114 = &g_104;
                    int l_115 = 0x22B755D7L;
                    int *l_116 = &g_43;
                    int *l_117 = (void*)0;
                    int *l_118 = (void*)0;
                    int *l_119 = &g_104;
                    int *l_120 = &l_115;
                    int *l_121 = &g_43;
                    int *l_122 = &g_43;
                    int *l_123 = &l_115;
                    int *l_124 = &l_115;
                    int *l_125 = &l_115;
                    int *l_126 = (void*)0;
                    int *l_127 = (void*)0;
                    int *l_128 = &g_43;
                    int *l_131 = &l_130;
                    int *l_132 = &l_115;
                    int *l_133 = &g_104;
                    int *l_134 = (void*)0;
                    int *l_135 = &l_130;
                    int *l_136 = &g_104;
                    --g_138;
                    (*l_122) = 0x33996C8BL;
                }
            }
        }
        else
        {
            const unsigned l_143 = 0x46D15494L;
            int **l_146 = &g_50;
            l_129 &= ((((safe_rshift_func_int8_t_s_u(((*l_84) || (*p_49)), ((void*)0 != &p_47))) < (!(g_13 & ((l_143 & (((l_143 | (((l_143 , p_48) == (void*)0) , l_143)) , (*l_84)) == l_103)) != 3L)))) , (*p_49)) | l_143);
            (*l_146) = ((safe_sub_func_uint8_t_u_u(l_143, ((*l_84) ^ l_143))) , (void*)0);
        }
        (*l_147) = p_48;
    }
    else
    {
        unsigned l_173 = 4294967287UL;
        int *l_201 = &g_104;
        int l_208 = 1L;
        int l_248 = 0L;
        int l_252 = 0L;
        int l_271 = 0L;
        int *l_333 = (void*)0;
        for (l_103 = 11; (l_103 == 26); l_103++)
        {
            unsigned l_161 = 0xB36A1522L;
            int *l_197 = &g_104;
            int **l_198 = &g_50;
            for (g_104 = 22; (g_104 <= (-14)); --g_104)
            {
                int l_172 = 0L;
                int *l_174 = &g_175;
                for (g_137 = 3; (g_137 >= (-24)); g_137--)
                {
                    int *l_154 = (void*)0;
                    int *l_155 = &g_43;
                    int *l_156 = &g_43;
                    int *l_157 = &g_43;
                    int *l_158 = &g_43;
                    int *l_159 = &g_43;
                    int l_160 = 0x9C6DFE23L;
                    --l_161;
                }
                (*l_174) ^= ((((((!((((((safe_lshift_func_uint8_t_u_s((((safe_add_func_uint8_t_u_u(0UL, ((((((((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_s(g_71, 1)) , (g_104 > (*p_47))), l_161)) , l_51) , l_161) < (g_43 <= (*g_50))) >= l_172) | l_172) & l_161) < l_172))) >= l_172) == l_51), 5)) >= l_172) <= l_161) == l_103) == l_103) && l_172)) | 0x4E2EL) , l_172) , l_173) , 0x6AL) & l_172);
                (*g_50) = (*g_50);
            }
            if ((*g_50))
            {
                int **l_180 = (void*)0;
                int **l_181 = &g_50;
                for (g_175 = 13; (g_175 > (-1)); --g_175)
                {
                    int *l_178 = (void*)0;
                    int l_179 = 1L;
                    l_179 ^= (*g_50);
                }
                (*l_181) = p_48;
                (*l_181) = &g_104;
            }
            else
            {
                int l_194 = 1L;
                for (l_161 = (-19); (l_161 == 6); ++l_161)
                {
                    unsigned l_192 = 0x34C43CD8L;
                    int **l_195 = (void*)0;
                    int **l_196 = &g_50;
                    (*p_49) = (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(l_173, 0)), 8)), ((((safe_lshift_func_int16_t_s_s((253UL > g_71), g_175)) > l_192) , &g_50) != ((((l_193 == p_48) == l_194) | g_137) , &p_47))));
                    if ((*p_47))
                        break;
                    (*l_196) = p_47;
                }
            }
            p_48 = l_197;
            (*l_198) = p_47;
        }
        if (((safe_add_func_int8_t_s_s(((p_48 != l_201) & (*l_201)), g_43)) | ((((safe_rshift_func_uint16_t_u_u(0x2D50L, 0)) & (*l_201)) > (*l_193)) != (&l_193 != &l_201))))
        {
            int l_210 = (-4L);
            int l_226 = 0L;
            int l_240 = 0xE3552C83L;
            int l_244 = 4L;
            int l_250 = 0x2F73C685L;
            int l_263 = 0x25A2B16FL;
            for (l_103 = 0; (l_103 == 17); l_103 = safe_add_func_int16_t_s_s(l_103, 9))
            {
                int *l_211 = &g_43;
                int *l_212 = (void*)0;
                int *l_213 = (void*)0;
                int *l_214 = &l_208;
                int *l_215 = &l_208;
                int *l_216 = &l_208;
                int *l_217 = &g_43;
                int *l_218 = &g_175;
                int *l_219 = &l_206;
                int *l_220 = &l_208;
                int *l_221 = &l_209;
                int *l_222 = (void*)0;
                int *l_223 = &l_207;
                int l_225 = 1L;
                int *l_227 = (void*)0;
                int *l_228 = &g_104;
                int *l_229 = &l_208;
                int *l_230 = &l_209;
                int *l_231 = &l_209;
                int *l_232 = &l_207;
                int *l_233 = &l_208;
                int *l_234 = &g_175;
                int *l_235 = &g_43;
                int *l_236 = (void*)0;
                int *l_237 = &g_104;
                int *l_238 = &l_207;
                int *l_239 = (void*)0;
                int *l_241 = (void*)0;
                int *l_242 = (void*)0;
                int *l_243 = &l_225;
                int *l_245 = &g_43;
                int *l_246 = &l_207;
                int *l_249 = (void*)0;
                int *l_251 = &l_208;
                int *l_253 = &l_207;
                int *l_254 = &g_43;
                int *l_255 = &l_209;
                int *l_256 = &l_244;
                int *l_257 = &l_252;
                int *l_258 = &l_206;
                int *l_259 = (void*)0;
                int *l_260 = &g_104;
                int *l_261 = (void*)0;
                int *l_262 = &l_248;
                int *l_264 = &g_175;
                int *l_265 = &l_263;
                int *l_266 = &l_250;
                int *l_267 = (void*)0;
                int *l_268 = &l_248;
                int *l_269 = &l_247;
                int *l_270 = &l_244;
                int *l_272 = &l_224;
                int *l_273 = &g_104;
                int *l_274 = &l_224;
                int *l_275 = &l_271;
                int *l_276 = (void*)0;
                int *l_277 = &g_104;
                int l_278 = 0x5E6F3355L;
                int *l_279 = &l_271;
                int l_280 = 0x08CD4FB8L;
                int *l_281 = (void*)0;
                int l_283 = 0x2F718E48L;
                int *l_284 = &g_104;
                int l_285 = 0x68153D3BL;
                int *l_286 = &g_104;
                int *l_287 = (void*)0;
                int *l_288 = &l_240;
                int *l_289 = &l_283;
                int *l_290 = &l_244;
                int *l_291 = &l_225;
                int *l_292 = &l_240;
                int *l_294 = &g_43;
                int *l_295 = (void*)0;
                int *l_296 = &g_43;
                int *l_297 = (void*)0;
                int *l_298 = (void*)0;
                int *l_299 = &g_43;
                int *l_300 = &l_240;
                int *l_301 = &l_240;
                int *l_302 = (void*)0;
                int *l_303 = &l_207;
                int *l_304 = &l_280;
                int *l_305 = (void*)0;
                int *l_306 = &l_226;
                int *l_308 = (void*)0;
                int *l_309 = &l_280;
                int *l_310 = &g_175;
                int *l_311 = &l_280;
                int *l_312 = &l_282;
                int *l_313 = &l_208;
                int l_314 = (-8L);
                int *l_315 = (void*)0;
                int *l_316 = &g_175;
                int *l_317 = &l_285;
                int *l_318 = &l_240;
                int *l_319 = &l_226;
                if ((*g_50))
                    break;
                --g_320;
                if ((*g_50))
                {
                    const int *l_328 = &g_307;
                    if (g_320)
                        goto lbl_323;
                    if ((*g_50))
                    {
                        unsigned char l_324 = 0xC5L;
                        (*l_254) = l_324;
                        (*l_233) ^= (*p_48);
                        --g_325;
                    }
                    else
                    {
                        g_329 = l_328;
                        if ((*g_329))
                            break;
                    }
                }
                else
                {
                    int l_330 = 0x76B94E3FL;
                    (*l_232) |= l_330;
                    for (g_137 = 0; (g_137 == 14); g_137 = safe_add_func_uint16_t_u_u(g_137, 1))
                    {
                        int **l_334 = &g_50;
                        (*l_334) = l_333;
                        (*l_334) = &g_104;
                    }
                    for (l_248 = 0; (l_248 == (-11)); l_248 = safe_sub_func_int8_t_s_s(l_248, 8))
                    {
                        g_50 = &g_104;
                        return l_226;
                    }
                    g_338--;
                }
            }
            for (l_224 = 0; (l_224 != 16); l_224++)
            {
                int *l_343 = &l_282;
                (*l_343) &= (*g_50);
            }
            l_344 = (-10L);
        }
        else
        {
            short l_345 = 0xEE4FL;
            int *l_346 = &l_247;
            int *l_347 = (void*)0;
            int *l_348 = &l_247;
            int *l_349 = &l_252;
            unsigned char l_350 = 0x55L;
            ++l_350;
        }
    }
    return (*l_193);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_307, "g_307", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_410, "g_410", print_hash_value);
    transparent_crc(g_423, "g_423", print_hash_value);
    transparent_crc(g_426, "g_426", print_hash_value);
    transparent_crc(g_649, "g_649", print_hash_value);
    transparent_crc(g_654, "g_654", print_hash_value);
    transparent_crc(g_658, "g_658", print_hash_value);
    transparent_crc(g_672, "g_672", print_hash_value);
    transparent_crc(g_673, "g_673", print_hash_value);
    transparent_crc(g_736, "g_736", print_hash_value);
    transparent_crc(g_745, "g_745", print_hash_value);
    transparent_crc(g_768, "g_768", print_hash_value);
    transparent_crc(g_900, "g_900", print_hash_value);
    transparent_crc(g_925, "g_925", print_hash_value);
    transparent_crc(g_1050, "g_1050", print_hash_value);
    transparent_crc(g_1094, "g_1094", print_hash_value);
    transparent_crc(g_1095, "g_1095", print_hash_value);
    transparent_crc(g_1171, "g_1171", print_hash_value);
    transparent_crc(g_1187, "g_1187", print_hash_value);
    transparent_crc(g_1272, "g_1272", print_hash_value);
    transparent_crc(g_1408, "g_1408", print_hash_value);
    transparent_crc(g_1539, "g_1539", print_hash_value);
    transparent_crc(g_1717, "g_1717", print_hash_value);
    transparent_crc(g_1850, "g_1850", print_hash_value);
    transparent_crc(g_1854, "g_1854", print_hash_value);
    transparent_crc(g_1865, "g_1865", print_hash_value);
    transparent_crc(g_1879, "g_1879", print_hash_value);
    transparent_crc(g_2130, "g_2130", print_hash_value);
    transparent_crc(g_2302, "g_2302", print_hash_value);
    transparent_crc(g_2505, "g_2505", print_hash_value);
    transparent_crc(g_2524, "g_2524", print_hash_value);
    transparent_crc(g_2527, "g_2527", print_hash_value);
    transparent_crc(g_2535, "g_2535", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
