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



static unsigned g_25 = 0x5231FBF6L;
static int g_67 = (-2L);
static int *g_90 = &g_67;
static int **g_89 = &g_90;
static int g_109 = (-9L);
static int g_126 = 0x9B892D6DL;
static unsigned short g_131 = 1UL;
static unsigned short g_137 = 65535UL;
static unsigned char g_247 = 0xA9L;
static char g_310 = 0L;
static char g_434 = 0xDCL;
static const int *g_512 = (void*)0;



static char func_1(void);
static unsigned short func_4(char p_5, int p_6, unsigned p_7);
static unsigned func_9(unsigned p_10, short p_11, const int p_12, const int p_13);
static unsigned func_19(unsigned short p_20, unsigned p_21, unsigned char p_22, const unsigned p_23);
static unsigned short func_32(const unsigned char p_33, unsigned p_34, char p_35, int p_36, unsigned p_37);
static unsigned char func_38(const char p_39, unsigned short p_40, short p_41);
static char func_42(short p_43, unsigned short p_44, unsigned p_45);
static const unsigned func_48(unsigned p_49, short p_50, unsigned short p_51, unsigned p_52, unsigned short p_53);
static short func_54(int p_55, unsigned char p_56, int p_57);
static const unsigned short func_58(int p_59, unsigned p_60);
static char func_1(void)
{
    unsigned char l_8 = 247UL;
    unsigned char l_24 = 0UL;
    int l_604 = 0xF6407B59L;
    l_604 = ((~0xEDL) , ((((((safe_sub_func_uint8_t_u_u((func_4(l_8, ((249UL >= (func_9((safe_unary_minus_func_int32_t_s((safe_sub_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((func_19(l_24, g_25, ((safe_add_func_uint8_t_u_u((((g_25 ^ (((g_25 || (0xBB35L <= (((safe_sub_func_uint32_t_u_u(l_8, l_8)) ^ l_8) , 0xA561L))) & g_25) & 0x5749L)) != 4UL) != 1UL), l_24)) | l_24), l_8) || l_24), l_8)) & g_434), l_24)))), g_434, g_434, g_434) , (-1L))) > 5L), g_434) ^ 1UL), l_8)) != l_8) , 251UL) > l_8) < 1L) ^ l_24));
    return l_604;
}







static unsigned short func_4(char p_5, int p_6, unsigned p_7)
{
    int *l_600 = &g_126;
    int **l_601 = &l_600;
    (*l_601) = l_600;
    for (g_109 = (-1); (g_109 != (-19)); g_109 = safe_sub_func_int16_t_s_s(g_109, 6))
    {
        (*l_600) = (!1L);
    }
    return (*l_600);
}







static unsigned func_9(unsigned p_10, short p_11, const int p_12, const int p_13)
{
    char l_541 = (-9L);
    int ***l_552 = &g_89;
    unsigned l_587 = 9UL;
    char l_599 = 0x73L;
    if (l_541)
    {
        unsigned l_542 = 0UL;
        int *l_554 = (void*)0;
        short l_567 = 0x3839L;
        int l_568 = (-3L);
        short l_589 = 0x0780L;
        int *l_596 = (void*)0;
        int *l_597 = &l_568;
        if (l_542)
        {
            unsigned l_547 = 0xC15ABD8DL;
            int *l_570 = (void*)0;
            char l_588 = (-6L);
            for (g_126 = 0; (g_126 == (-7)); --g_126)
            {
                unsigned l_548 = 0xB8312E70L;
                int ***l_551 = &g_89;
                int *l_569 = &g_67;
                if (p_10)
                    break;
                for (g_137 = 0; (g_137 <= 25); g_137++)
                {
                    int ***l_553 = &g_89;
                    int *l_555 = (void*)0;
                    int *l_556 = &g_67;
                    (*l_556) |= (((l_541 && (l_547 , (((l_548 , ((l_548 & (l_551 == &g_89)) || (l_552 == l_553))) <= ((void*)0 != l_554)) || g_310))) >= (-1L)) == 65535UL);
                    return g_25;
                }
                l_568 &= (g_131 < ((func_58(((1UL != (l_548 , g_131)) , (((safe_add_func_int32_t_s_s(((((safe_add_func_uint8_t_u_u(((((-7L) <= p_10) == (safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(g_137, ((safe_mod_func_int16_t_s_s((((0xC15EL > (p_10 , p_10)) , p_11) && 0x5FL), p_13)) || l_547))), 0L))) , 0x9FL), l_547)) || l_547) != p_12) & p_11), p_11)) & g_131) >= g_131)), p_11) > p_10) | l_567));
                l_569 = &g_126;
            }
            l_568 = (l_547 != 1UL);
            if (p_12)
            {
                unsigned char l_573 = 0xA5L;
                int **l_576 = (void*)0;
                int *l_590 = &g_126;
                int **l_591 = &l_554;
                for (l_542 = (-17); (l_542 == 57); ++l_542)
                {
                    int *l_574 = &g_126;
                    const int **l_575 = &g_512;
                    l_573 &= p_10;
                    (*l_574) &= p_12;
                    (*l_575) = (g_131 , &p_13);
                    return p_11;
                }
                l_554 = (void*)0;
                (*l_590) = (((safe_mod_func_uint16_t_u_u((p_11 & p_12), (safe_mod_func_uint16_t_u_u(g_137, 0x71C3L)))) != p_13) , p_10);
                (*l_591) = l_570;
            }
            else
            {
                const unsigned l_592 = 4294967290UL;
                int l_593 = 0x23D9EC4BL;
                l_593 = l_592;
            }
        }
        else
        {
            (*l_552) = &l_554;
            (*g_89) = (*g_89);
        }
        g_512 = &p_13;
        (*l_597) = (p_11 | ((g_434 <= (safe_lshift_func_uint8_t_u_s(0xD3L, ((-1L) <= p_13)))) == p_13));
        (*l_597) &= (*g_512);
    }
    else
    {
        unsigned l_598 = 4294967287UL;
        return l_598;
    }
    return l_599;
}







static unsigned func_19(unsigned short p_20, unsigned p_21, unsigned char p_22, const unsigned p_23)
{
    unsigned l_63 = 4294967295UL;
    const int l_110 = 1L;
    const int *l_187 = (void*)0;
    int l_191 = (-1L);
    unsigned char l_204 = 0xB7L;
    int ***l_227 = (void*)0;
    const int l_277 = 0xCF70450DL;
    short l_372 = 0x4135L;
    int ** const l_410 = &g_90;
    unsigned char l_412 = 252UL;
    unsigned short l_441 = 65535UL;
    const int *l_511 = &g_67;
    unsigned l_532 = 0x65395E7CL;
    const int **l_540 = &g_512;
    if ((g_25 && (safe_sub_func_int16_t_s_s(((func_32(func_38(func_42(g_25, (((safe_rshift_func_int16_t_s_u(0xBD5DL, 1)) , (+func_48(p_23, ((0L <= func_54((func_58(((g_25 | (((g_25 & (safe_add_func_int8_t_s_s(0x7AL, (+p_23)))) < l_63) < p_22)) , p_21), p_21) < g_25), p_23, p_21)) , p_23), g_25, l_63, g_25))) & l_110), g_25), g_25, p_23), p_22, p_21, g_25, l_110) < l_110) > 0xE6L), 0x67CFL))))
    {
        const unsigned l_142 = 0x12EA8682L;
        int *l_147 = (void*)0;
        unsigned l_148 = 0x08E4DAEFL;
        int *l_149 = &g_67;
        int l_195 = 0L;
        unsigned l_229 = 0x30A590F4L;
        unsigned l_254 = 0xA8043B2DL;
        unsigned short l_278 = 0UL;
lbl_192:
        (*l_149) ^= (l_110 || (safe_sub_func_uint16_t_u_u(func_32(l_142, ((0x8D5FL < ((~(p_20 , l_142)) != (safe_add_func_uint32_t_u_u(p_23, (((safe_unary_minus_func_uint16_t_u((g_126 <= 0xA5L))) & ((safe_unary_minus_func_int32_t_s(((l_147 != l_147) | p_20))) && 0xDCCE3023L)) , 0x0061E2E1L))))) , l_148), p_21, p_23, g_137), 65535UL)));
        if ((1UL <= (&g_89 == &g_89)))
        {
            unsigned l_154 = 0xB9F2CFB6L;
            int *l_173 = &g_67;
            int *l_196 = &l_191;
            for (l_148 = 0; (l_148 <= 57); ++l_148)
            {
                unsigned char l_171 = 0xB7L;
                int **l_172 = &l_147;
                (**g_89) = (safe_add_func_int32_t_s_s(p_21, (l_154 | p_23)));
                for (g_137 = 0; (g_137 == 2); g_137 = safe_add_func_int8_t_s_s(g_137, 2))
                {
                    unsigned l_159 = 4294967292UL;
                    const int *l_165 = &g_67;
                    unsigned l_174 = 0x96564E10L;
                    for (g_109 = 0; (g_109 > (-22)); g_109--)
                    {
                        short l_162 = 0x8C6AL;
                        (*l_149) = (**g_89);
                        if ((**g_89))
                            continue;
                        (*l_149) = (l_159 | (safe_mod_func_uint32_t_u_u((l_162 && l_162), (safe_add_func_uint32_t_u_u((func_32(g_25, (*l_149), l_159, g_131, (0xD8575771L || ((g_126 , (void*)0) != (*g_89)))) != p_21), l_159)))));
                        l_165 = (void*)0;
                    }
                    if (p_21)
                    {
                        unsigned char l_170 = 0xECL;
                        (*g_89) = ((func_54((safe_mod_func_int16_t_s_s(p_21, g_109)), p_20, (((((p_22 , g_126) > ((*g_90) == (**g_89))) , l_172) != &g_90) && 0xCAL)) || 0x10F7CF34L) , l_173);
                    }
                    else
                    {
                        (*l_172) = (*g_89);
                        (*l_172) = (*g_89);
                    }
                    (*l_149) = ((p_22 && func_42((*l_173), l_174, (safe_add_func_uint8_t_u_u(((func_32(((&l_165 == &l_147) , p_21), (0xEA04L >= (safe_lshift_func_uint8_t_u_u(1UL, 4))), ((**g_89) , 0xD4L), g_109, (*l_173)) | p_22) == 1UL), l_171)))) == 0x6F31L);
                    if (((safe_sub_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((p_22 < (safe_sub_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((-7L), (p_23 != (((void*)0 != l_187) | p_23)))) ^ g_131), ((g_67 == g_137) == g_126)))), p_22)) , 65532UL), p_23)) > 0UL))
                    {
                        int *l_188 = &g_126;
                        (*l_188) ^= (*l_173);
                        return g_131;
                    }
                    else
                    {
                        (*g_90) = ((-4L) <= (safe_lshift_func_int16_t_s_s(p_22, g_137)));
                    }
                }
                l_191 &= (0x3F102FCDL == p_23);
                if (g_67)
                    goto lbl_192;
            }
            (*l_196) &= (((g_67 && g_109) > (0UL | (((-1L) >= (&g_90 == &l_173)) != (+(safe_rshift_func_uint16_t_u_u(g_131, g_131)))))) <= l_195);
        }
        else
        {
            (*l_149) &= (-2L);
        }
        if (p_21)
        {
            unsigned char l_201 = 0UL;
            (*g_89) = &l_195;
            (*l_149) = (p_20 , p_23);
            (**g_89) = (65530UL > (safe_sub_func_uint16_t_u_u((((g_25 ^ 0x63L) | (g_126 | (&l_191 != &l_195))) && (safe_sub_func_int32_t_s_s(l_201, ((safe_unary_minus_func_int32_t_s(l_201)) != l_201)))), 3L)));
        }
        else
        {
            unsigned short l_203 = 0xBE51L;
            unsigned l_205 = 6UL;
            const int *l_239 = (void*)0;
            int ***l_261 = (void*)0;
            const unsigned short l_263 = 0x3FE4L;
            int * const l_274 = &l_195;
            if (l_203)
            {
                unsigned l_211 = 0x17F48531L;
                int l_230 = 0x68317A62L;
                int *l_236 = &g_67;
                char l_262 = 0xBFL;
                if ((((0x59C66F5CL | p_22) < func_58((l_203 && (((p_23 == (0L | p_23)) , ((func_54(l_204, g_126, p_20) <= g_137) <= l_203)) != p_20)), p_21)) , 0x314AB783L))
                {
                    int *l_214 = &l_195;
                    (**g_89) = (l_205 & g_126);
                    for (p_21 = 0; (p_21 == 1); p_21++)
                    {
                        char l_208 = 0xC9L;
                        if ((**g_89))
                            break;
                        (*l_149) = (251UL | ((((*g_90) >= l_208) , p_20) != (safe_lshift_func_int8_t_s_s(((((**g_89) , ((((1L >= (l_211 ^ p_20)) || (p_22 , (*g_90))) != p_21) == (*l_149))) ^ g_25) , g_25), p_21))));
                    }
                    for (p_21 = 14; (p_21 <= 12); --p_21)
                    {
                        (*g_89) = (*g_89);
                        (*g_89) = l_214;
                        (*l_149) = l_211;
                    }
                }
                else
                {
                    unsigned char l_228 = 1UL;
                    int ***l_234 = (void*)0;
                    int ***l_235 = &g_89;
                    l_230 &= ((safe_sub_func_uint32_t_u_u(((((((safe_add_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(1UL, 0xCD7632F3L)) | (safe_rshift_func_uint16_t_u_s(g_67, 9))), g_25)) | func_32((func_32(g_131, ((p_22 & (safe_mod_func_uint16_t_u_u(func_32(((safe_mod_func_int8_t_s_s(g_25, (func_32(l_211, (((p_23 || p_23) , l_227) == (void*)0), p_22, p_23, g_126) , p_20))) , p_22), l_211, l_228, (*l_149), g_67), p_20))) != 0x6EL), g_137, p_20, g_131) , p_22), (*l_149), g_67, l_229, p_23)) , g_25) , (*g_90)) >= 0x3F6B23ADL) <= p_22), l_203)) > p_22);
                    (*l_235) = (func_48(p_23, (0x3DL == p_23), g_109, p_20, g_131) , (void*)0);
                    l_236 = &l_195;
                    for (l_195 = (-15); (l_195 == (-11)); ++l_195)
                    {
                        const int **l_240 = &l_187;
                        int l_250 = 0x9E33FC4FL;
                        char l_253 = 0x94L;
                        (*l_240) = l_239;
                        if (p_21)
                            continue;
                        if ((*g_90))
                            continue;
                        (*l_149) = (((((((safe_sub_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((*l_236), p_20)) < g_137), 252UL)) , g_25) & 1UL) & p_23) , p_21) , 0xADL) & (*l_236));
                    }
                }
                (*l_236) = ((p_20 ^ ((safe_rshift_func_uint8_t_u_u((p_20 , l_263), 1)) , p_20)) && p_22);
                (*l_149) &= (g_131 != (((0x4227L | p_21) == p_23) ^ (2UL > p_20)));
            }
            else
            {
                char l_266 = 5L;
                int **l_267 = &l_147;
                for (g_25 = 0; (g_25 > 58); g_25 = safe_add_func_uint32_t_u_u(g_25, 5))
                {
                    l_266 &= 9L;
                }
                (*l_149) = p_21;
                (**g_89) = (p_20 , (l_267 == &g_90));
                (*l_149) = (((safe_sub_func_uint16_t_u_u(func_32(g_131, (safe_rshift_func_int8_t_s_s((+((safe_rshift_func_int16_t_s_u((l_274 != (func_48(((((func_54(((safe_mod_func_uint32_t_u_u((*l_149), l_277)) , ((void*)0 == &l_195)), p_21, p_20) || p_22) , p_23) != p_21) > g_131), (*l_274), p_20, g_247, g_109) , (*g_89))), p_21)) || g_247)), g_247)), p_22, g_247, p_21), l_278)) , 0x3912L) == p_20);
            }
        }
        for (p_22 = (-19); (p_22 <= 35); p_22 = safe_add_func_uint16_t_u_u(p_22, 3))
        {
            int ***l_285 = &g_89;
            int *l_290 = &g_109;
            l_187 = &l_195;
            (*l_149) = (safe_lshift_func_int16_t_s_s(g_131, 10));
            (*l_290) |= (safe_lshift_func_uint8_t_u_u((((l_285 == (void*)0) <= g_137) || ((0xB517L != (((safe_sub_func_uint8_t_u_u(g_126, ((g_137 != ((*l_149) , p_23)) != (((((0x85L && (*l_187)) , (*g_90)) > p_23) != p_23) >= p_23)))) & g_137) ^ p_23)) , g_247)), 0));
            (*l_149) = (((p_22 , 0xE5L) >= p_23) & g_137);
        }
    }
    else
    {
        int *l_295 = (void*)0;
        int ***l_309 = &g_89;
        unsigned l_322 = 0x70CCA3B0L;
        int l_404 = 0L;
lbl_405:
        if ((p_21 & 0x95B7L))
        {
            int *l_296 = &l_191;
            (*g_89) = l_295;
            (*l_296) = p_23;
            return g_247;
        }
        else
        {
            int * const *l_299 = &g_90;
            if (((p_21 ^ ((&g_90 == &l_295) , (!((safe_mod_func_uint32_t_u_u((l_299 != l_299), g_137)) & (**l_299))))) | (**l_299)))
            {
lbl_306:
                for (g_109 = 15; (g_109 < 18); g_109 = safe_add_func_int32_t_s_s(g_109, 5))
                {
                    int *l_302 = &g_67;
                    (**g_89) = (p_21 , (*g_90));
                    (*g_89) = l_302;
                    for (p_20 = 0; (p_20 <= 31); p_20 = safe_add_func_int16_t_s_s(p_20, 1))
                    {
                        int **l_305 = &g_90;
                        (*l_302) = (*g_90);
                        (*l_305) = (*l_299);
                    }
                }
            }
            else
            {
                unsigned short l_313 = 65534UL;
                if (p_20)
                    goto lbl_306;
                g_310 &= (((safe_rshift_func_uint16_t_u_s(0x758BL, (g_131 > g_109))) > (**l_299)) >= (g_109 , ((p_21 , l_309) != &g_89)));
                (**l_299) = (safe_lshift_func_uint8_t_u_s((((p_22 <= (**l_299)) , (**l_299)) , l_313), ((safe_rshift_func_uint16_t_u_s(p_20, g_131)) != 0UL)));
                for (g_131 = (-2); (g_131 >= 11); ++g_131)
                {
                    return g_310;
                }
            }
            (**g_89) |= p_23;
            (**l_309) = (g_25 , (**l_309));
        }
        if ((**g_89))
        {
            int l_330 = 0x27F36DEEL;
            (*l_309) = &g_90;
            (**l_309) = (*g_89);
        }
        else
        {
            unsigned char l_398 = 255UL;
            for (g_109 = 0; (g_109 == 5); ++g_109)
            {
                int *l_396 = &g_109;
                for (g_67 = 2; (g_67 > (-29)); g_67 = safe_sub_func_int8_t_s_s(g_67, 6))
                {
                    int l_393 = 1L;
                    unsigned l_397 = 0x5688CFAAL;
                    unsigned l_399 = 0x8E74AD22L;
                    int *l_401 = (void*)0;
                    int *l_402 = (void*)0;
                    int *l_403 = (void*)0;
                    if ((((+(p_22 >= (p_22 & (0L & ((((g_247 != (((p_21 > 0L) <= ((safe_add_func_uint8_t_u_u((((l_393 , (((safe_sub_func_uint16_t_u_u(0x27AAL, func_32(((*g_89) == l_396), l_397, p_21, g_137, g_131))) || 0x6524L) == 0x86D7L)) , l_398) <= p_20), g_67)) ^ p_21)) > p_23)) && (*l_396)) > p_21) ^ l_398))))) , 6L) | g_247))
                    {
                        l_396 = (**l_309);
                    }
                    else
                    {
                        (*g_90) = (l_398 == (p_20 , p_20));
                        (***l_309) &= 0xB57425EDL;
                        (**g_89) = (*g_90);
                        l_399 &= p_23;
                    }
                    l_393 = (safe_unary_minus_func_int8_t_s(func_32(g_126, (((65531UL >= g_247) > l_393) == 0xF492L), (((void*)0 != &g_90) == (((*l_396) | ((l_398 & 1L) , (**g_89))) || g_109)), l_398, g_126)));
                    if (p_23)
                        continue;
                }
            }
            l_404 ^= (~(*g_90));
        }
        if (g_126)
            goto lbl_405;
    }
    if ((safe_add_func_uint32_t_u_u(g_247, (&g_90 == ((safe_sub_func_uint8_t_u_u(g_25, p_21)) , l_410)))))
    {
        unsigned l_411 = 0x899FC982L;
        int *l_413 = &l_191;
        (*l_413) = l_411;
        for (l_191 = 0; (l_191 < 3); l_191 = safe_add_func_int32_t_s_s(l_191, 8))
        {
            for (l_204 = 0; (l_204 != 3); l_204++)
            {
                int l_439 = 0x474F3D4FL;
                for (g_67 = 0; (g_67 >= (-10)); g_67 = safe_sub_func_int32_t_s_s(g_67, 9))
                {
                    int *l_424 = (void*)0;
                    int l_425 = 0L;
                    l_425 = (safe_rshift_func_uint16_t_u_s(((safe_add_func_uint32_t_u_u(p_23, p_23)) && p_22), g_131));
                    for (l_63 = 0; (l_63 == 29); ++l_63)
                    {
                        return p_21;
                    }
                    for (l_372 = (-13); (l_372 > (-15)); --l_372)
                    {
                        int *l_440 = &l_425;
                        (*l_440) = (+(safe_mod_func_int32_t_s_s((&g_89 == &g_89), (safe_mod_func_int16_t_s_s(g_434, l_439)))));
                    }
                }
            }
        }
        return l_441;
    }
    else
    {
        char l_442 = 0x40L;
        int *l_445 = (void*)0;
        int l_503 = 2L;
        unsigned l_505 = 4294967295UL;
        int *l_537 = (void*)0;
        int *l_538 = (void*)0;
        int *l_539 = &g_109;
        if ((p_22 , ((((l_442 , (p_21 , (safe_sub_func_uint8_t_u_u((((void*)0 != l_445) | ((p_21 > (g_131 < g_25)) ^ (p_22 > 65535UL))), p_23)))) <= g_310) < p_22) <= g_434)))
        {
            return g_434;
        }
        else
        {
            unsigned char l_446 = 0UL;
            int **l_515 = &g_90;
            int ***l_516 = &g_89;
            l_446 |= p_23;
            for (g_131 = 14; (g_131 < 51); g_131 = safe_add_func_int8_t_s_s(g_131, 2))
            {
                unsigned short l_462 = 0x5A05L;
                (*l_410) = (void*)0;
                if (p_21)
                    continue;
                if (l_442)
                    continue;
                for (l_412 = (-18); (l_412 < 6); ++l_412)
                {
                    for (g_25 = 0; (g_25 >= 35); ++g_25)
                    {
                        int *l_453 = &g_126;
                        (*l_453) ^= p_23;
                        (*l_453) ^= (safe_lshift_func_uint8_t_u_u((((p_21 , l_446) && (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((((l_446 ^ ((0x61CCL < (+l_446)) > (g_247 ^ (safe_lshift_func_int8_t_s_u(g_25, 3))))) | 0x55CD401BL) , 65535UL), g_434)), 0UL))) > g_25), l_462));
                        return p_20;
                    }
                }
            }
            for (p_21 = (-8); (p_21 < 12); ++p_21)
            {
                unsigned l_465 = 0UL;
                const int *l_510 = &g_109;
                unsigned l_513 = 1UL;
                l_465 = (g_310 ^ (+5UL));
                for (g_25 = 2; (g_25 == 41); g_25++)
                {
                    short l_476 = 1L;
                    short l_483 = 0x14B1L;
                    int ** const *l_498 = &l_410;
                    int l_504 = 0x9B49B4E7L;
                    unsigned l_506 = 1UL;
                    if (((safe_add_func_uint8_t_u_u(0x0CL, (g_67 > ((safe_add_func_uint32_t_u_u(((safe_add_func_int16_t_s_s(g_126, (safe_sub_func_uint32_t_u_u(1UL, g_310)))) == l_476), ((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((l_446 != (+l_465)), p_21)), 4294967295UL)) > 0x7CAD3CB1L))) ^ g_126)))) != g_247))
                    {
                        int l_486 = 0x452924E0L;
                        int l_487 = 0xA19D1770L;
                        l_487 = (((g_67 , g_434) || (safe_sub_func_uint16_t_u_u(l_483, (p_23 , ((safe_lshift_func_uint16_t_u_u(((&g_89 == (((((g_25 < (0x096AL <= g_126)) != p_23) && 0x1592L) , l_486) , (void*)0)) && p_21), 2)) != 0x6973L))))) ^ g_310);
                        l_445 = ((safe_rshift_func_int8_t_s_s((p_21 , g_126), 5)) , &l_487);
                    }
                    else
                    {
                        int *l_491 = &g_67;
                        (*l_491) = p_20;
                        (*l_491) ^= (p_23 || (safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u(p_23, p_21)), l_506)));
                    }
                }
                for (l_503 = 0; (l_503 > (-8)); --l_503)
                {
                    const int *l_509 = &g_126;
                    int *l_514 = &g_126;
                    l_510 = l_509;
                    g_512 = l_511;
                    (*l_514) ^= ((l_513 , ((~p_20) == p_21)) , (-1L));
                }
            }
            (*l_516) = l_515;
        }
        (*l_539) |= ((safe_mod_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(2UL, (func_58((*l_511), (safe_mod_func_int32_t_s_s((g_137 || ((safe_unary_minus_func_int8_t_s((((safe_lshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((func_32((&g_126 != ((l_532 != (safe_sub_func_uint16_t_u_u(g_247, (((-1L) <= ((safe_rshift_func_int16_t_s_s(g_25, 2)) | (((*l_511) | 0x000BFB7DL) ^ p_23))) || g_247)))) , (void*)0)), g_310, p_20, p_21, g_126) < 0x66L), 1L)) > g_131), (*l_511))) == (-1L)), 1L)), p_20)) | 0xE94AL) != 0x9365L))) , 0x16ECL)), 0x34BA687AL))) == 0xC355L))) && g_137), 1L)) > g_247);
    }
    (*l_540) = &l_277;
    return g_434;
}







static unsigned short func_32(const unsigned char p_33, unsigned p_34, char p_35, int p_36, unsigned p_37)
{
    int *l_138 = &g_126;
    unsigned char l_139 = 0x4DL;
    (*g_89) = l_138;
    return l_139;
}







static unsigned char func_38(const char p_39, unsigned short p_40, short p_41)
{
    int l_122 = (-3L);
    for (p_41 = (-28); (p_41 == 17); ++p_41)
    {
        int * const *l_124 = &g_90;
        int * const **l_123 = &l_124;
        int *l_125 = &g_126;
        char l_136 = (-10L);
        (*l_125) |= ((((safe_add_func_uint32_t_u_u(((((((((**g_89) > ((safe_mod_func_uint32_t_u_u(p_39, 5L)) != (((+p_39) <= (safe_unary_minus_func_uint16_t_u((g_109 > (g_109 | (p_40 & (safe_sub_func_int16_t_s_s((g_109 && (p_40 == l_122)), g_25)))))))) < g_67))) || l_122) == 9L) & 0xD7L) , (void*)0) != l_123) < p_39), (*g_90))) || g_25) > g_25) || (**g_89));
        l_122 = (safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((0x9347L <= g_109), (**l_124))), ((-1L) >= g_131)));
        if ((**g_89))
            break;
        for (g_126 = 13; (g_126 > (-27)); g_126 = safe_sub_func_int16_t_s_s(g_126, 6))
        {
            char l_134 = (-1L);
            int *l_135 = &l_122;
            (*g_90) = (l_134 == g_67);
            (*g_89) = l_135;
            if (l_136)
                continue;
        }
    }
    return g_137;
}







static char func_42(short p_43, unsigned short p_44, unsigned p_45)
{
    const int *l_112 = &g_109;
    const int **l_111 = &l_112;
    (**g_89) ^= 0xDC45D42FL;
    (**g_89) = (&g_90 == l_111);
    return g_109;
}







static const unsigned func_48(unsigned p_49, short p_50, unsigned short p_51, unsigned p_52, unsigned short p_53)
{
    unsigned l_106 = 0xF126ED30L;
    int *l_107 = (void*)0;
    int *l_108 = &g_109;
    (**g_89) = 0L;
    for (p_50 = 0; (p_50 != 1); p_50 = safe_add_func_int8_t_s_s(p_50, 1))
    {
        (*g_90) = (safe_rshift_func_uint8_t_u_u(p_50, 7));
    }
    (*l_108) ^= func_54(p_51, p_49, l_106);
    return (*l_108);
}







static short func_54(int p_55, unsigned char p_56, int p_57)
{
    int l_100 = 0xB3A51F89L;
    unsigned short l_101 = 0x099FL;
    for (p_56 = (-17); (p_56 != 27); p_56 = safe_add_func_int16_t_s_s(p_56, 7))
    {
        int *l_85 = &g_67;
        (*l_85) = p_57;
    }
    for (p_56 = 19; (p_56 >= 11); p_56 = safe_sub_func_uint16_t_u_u(p_56, 6))
    {
        unsigned char l_88 = 0x64L;
        int **l_91 = &g_90;
        (**l_91) = (func_58((((((l_88 ^ (((((l_88 < ((g_25 != ((g_89 == l_91) | g_25)) , ((safe_lshift_func_uint16_t_u_u(func_58((func_58((func_58(func_58(p_56, (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((**g_89), g_67)), 3)), 6))), g_25) & l_100), p_56) == l_100), g_25), p_56)) & g_25))) | g_25) > p_57) < (-4L)) , l_100)) , p_55) || l_101) || l_101) , (**l_91)), l_100) > (-1L));
    }
    return p_55;
}







static const unsigned short func_58(int p_59, unsigned p_60)
{
    const unsigned char l_64 = 0UL;
    int *l_65 = (void*)0;
    int *l_66 = &g_67;
    unsigned l_78 = 0x603458E5L;
    int *l_80 = &g_67;
    (*l_66) &= l_64;
    if (((((((((g_25 , g_25) , l_66) != (void*)0) != (safe_mod_func_uint32_t_u_u(g_25, p_59))) , (void*)0) == ((*l_66) , (void*)0)) >= g_25) != p_60))
    {
        short l_72 = 7L;
        unsigned char l_73 = 250UL;
        int *l_79 = (void*)0;
        l_72 &= ((safe_add_func_int16_t_s_s(((*l_66) & (p_59 <= g_25)), (0xA8F9B109L > p_59))) != g_25);
        (*l_66) = (g_67 , (l_73 && ((((*l_66) >= (*l_66)) >= 0x2662B256L) || (((safe_mul_func_uint16_t_u_u(((void*)0 != &g_67), ((+(safe_add_func_uint16_t_u_u((l_78 >= (&g_67 != l_65)), l_73))) == 0x1ABBL))) , l_79) != l_80))));
    }
    else
    {
        int **l_82 = &l_80;
        int ***l_81 = &l_82;
        (*l_81) = (void*)0;
    }
    (*l_80) ^= g_25;
    return p_59;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_434, "g_434", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
