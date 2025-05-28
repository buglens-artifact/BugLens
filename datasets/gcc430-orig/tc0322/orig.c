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
   unsigned f0;
};

struct S1 {
   char f0;
   unsigned char f1;
};


static int g_4 = 0xDE2167FAL;
static struct S0 g_69 = {0xD3351F4AL};
static struct S1 g_73 = {0x0FL,0x10L};
static unsigned g_80 = 0xBC330632L;
static unsigned g_96 = 1UL;
static unsigned char g_116 = 8UL;
static char g_117 = 0xBAL;
static unsigned char g_137 = 246UL;
static int g_138 = 0xFEA996BBL;
static short g_139[9] = {0x8F9AL,1L,0x8F9AL,0x8F9AL,1L,0x8F9AL,0x8F9AL,1L,0x8F9AL};
static unsigned short g_141 = 0UL;
static int g_142 = 0x39DAF5B9L;
static unsigned g_154 = 4294967291UL;
static short g_156 = 1L;
static struct S1 g_176 = {0x7FL,250UL};
static unsigned short g_205 = 3UL;
static int g_207 = 0xB289E97AL;
static struct S1 g_210 = {-6L,4UL};
static char g_217 = 0xB0L;
static unsigned g_245 = 4294967286UL;
static unsigned g_265[2][2][2] = {{{4294967295UL,4294967295UL},{4294967295UL,4294967295UL}},{{4294967295UL,4294967295UL},{4294967295UL,4294967295UL}}};
static int g_266[4] = {1L,1L,1L,1L};
static unsigned char g_267 = 0xC1L;
static char g_275[2] = {9L,9L};
static int g_395 = 0x9AA14C0BL;
static char g_449 = 5L;
static int g_492 = 0xA1359E93L;
static unsigned g_523 = 1UL;
static unsigned g_544 = 4294967295UL;



static struct S0 func_1(void);
static int func_16(unsigned p_17, unsigned p_18, unsigned p_19);
static unsigned short func_23(unsigned short p_24, struct S0 p_25, int p_26);
static char func_29(struct S1 p_30);
static struct S0 func_32(short p_33, struct S0 p_34, struct S1 p_35, unsigned p_36, struct S1 p_37);
static unsigned func_38(unsigned short p_39);
static const short func_47(unsigned short p_48, short p_49, unsigned short p_50, unsigned char p_51);
static struct S1 func_55(unsigned p_56, const unsigned p_57, unsigned p_58);
static unsigned func_59(struct S0 p_60, char p_61, unsigned short p_62);
static struct S0 func_63(int p_64, unsigned p_65, short p_66, int p_67, const unsigned short p_68);
static struct S0 func_1(void)
{
    unsigned short l_5 = 65533UL;
    int l_22 = (-6L);
    unsigned l_611 = 0x4919B0EFL;
    int l_612 = 0L;
    int l_613 = 0xEB5E5586L;
    unsigned l_616 = 1UL;
    struct S0 l_617 = {0xD4A891C6L};
    l_613 = (safe_lshift_func_int8_t_s_u(g_4, (l_612 = ((l_5 < ((((safe_lshift_func_int16_t_s_u(g_4, (safe_sub_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((g_4 >= (safe_add_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(0UL, (func_16(g_4, (((l_22 = ((0xFCL <= 0x11L) < ((safe_sub_func_int32_t_s_s(l_5, 0x56DFC9B9L)) ^ l_5))) < g_4) > g_4), l_5) , l_22))) <= 0x9A13L), g_4))), l_5)) < l_5), 1UL)))) | g_492) <= l_611) , g_275[0])) , 0UL))));
    g_266[1] = (safe_sub_func_uint32_t_u_u(g_210.f1, (func_38(((l_613 >= g_492) || l_616)) & l_616)));
    return l_617;
}







static int func_16(unsigned p_17, unsigned p_18, unsigned p_19)
{
    struct S1 l_31 = {1L,255UL};
    int l_276[2];
    struct S0 l_277 = {2UL};
    unsigned char l_290 = 0x0EL;
    short l_326 = 0x9FE5L;
    unsigned short l_341 = 1UL;
    int l_344 = 0x37F8D430L;
    int l_349 = 0x09F7C56EL;
    unsigned l_406 = 0UL;
    int l_429 = 0xB49C6F01L;
    unsigned l_442 = 4294967293UL;
    unsigned l_473 = 8UL;
    unsigned char l_602 = 0x73L;
    int i;
    for (i = 0; i < 2; i++)
        l_276[i] = 1L;
    l_276[1] = (((func_23((((g_4 && 0xBFL) < g_4) , ((safe_mul_func_int8_t_s_s(func_29(l_31), p_17)) <= ((l_276[1] = (g_275[0] = (l_31.f0 != (safe_sub_func_uint16_t_u_u(l_31.f0, (safe_add_func_int8_t_s_s(0x40L, 0xE3L))))))) && 0xE57FL))), l_277, l_31.f0) | g_210.f0) & 9L) , 0x8B66DF69L);
    for (g_210.f1 = 10; (g_210.f1 != 58); ++g_210.f1)
    {
        short l_281 = (-3L);
        int l_282 = 0L;
        int l_311 = (-1L);
        struct S1 l_335 = {-1L,255UL};
        struct S0 l_336[4] = {{0x7FB69347L},{0x7FB69347L},{0x7FB69347L},{0x7FB69347L}};
        int i;
        for (g_205 = 0; (g_205 <= 8); g_205 += 1)
        {
            short l_283 = 0L;
            int l_291 = 0x4EDF2812L;
            unsigned l_310 = 0xB933D1B2L;
            l_282 = l_281;
            if (l_283)
                break;
            if (((-1L) && func_59(g_69, g_275[0], (l_291 = ((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(g_205, (p_18 && p_18))), ((l_282 = (safe_lshift_func_int16_t_s_s(func_23((l_290 = g_207), g_69, l_277.f0), 6))) ^ 0x4EL))) | p_17)))))
            {
                unsigned l_292 = 4294967286UL;
                l_292 = 5L;
            }
            else
            {
                int l_303[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_303[i] = 0x53CF452AL;
                l_31 = l_31;
                l_276[1] = (safe_sub_func_uint32_t_u_u((func_55((p_17 = (safe_sub_func_int16_t_s_s((((9L && (g_139[g_205] = p_18)) | (((func_47((l_311 = (safe_mod_func_int32_t_s_s((l_282 = func_47(((g_142 = g_116) , ((((safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((!p_17) ^ (p_17 , (((l_303[1] ^ ((!(safe_rshift_func_uint16_t_u_s(p_18, p_17))) != (safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(l_281, p_19)), g_266[1])))) <= p_17) || 0xC67531C0L))), g_117)), l_282)) != 0x0DC0L) & 9L) == (-1L))), p_17, g_275[0], l_303[1])), l_310))), g_137, p_18, g_275[0]) || 2L) & p_17) < g_4)) , 0xA570L), l_290))), g_4, g_266[1]) , p_17), g_265[1][1][0]));
                l_276[1] = (safe_mod_func_int16_t_s_s(p_17, (+((l_303[1] = (g_139[g_205] = (func_59(func_63(((l_291 = l_282) <= (func_47(l_283, (safe_sub_func_int16_t_s_s(func_59(((safe_rshift_func_int8_t_s_s(((g_265[1][0][1] >= 0xDFL) , ((((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(g_207, (func_38(((safe_mul_func_uint16_t_u_u(g_275[0], 0x5BEFL)) != (p_17 & (-10L)))) && g_207))) & l_281), 8)) <= (-1L)), l_281)) >= g_210.f0) == (-1L)) ^ g_265[1][0][1])), 5)) , g_69), p_19, p_17), g_4)), l_283, g_207) | 1L)), g_267, p_19, g_266[1], p_19), p_18, l_311) , g_205))) <= p_19))));
            }
        }
        if (l_276[0])
            continue;
        l_336[0] = func_32(l_326, func_63((safe_mul_func_int16_t_s_s(func_38(g_139[1]), l_31.f0)), g_266[3], p_19, (safe_sub_func_int8_t_s_s(((g_275[0] > ((safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(0x17BC99ACL, p_18)) , g_245), 1)) , 7L)) & 0xD6D4L), 0x9AL)), p_17), l_335, g_266[2], l_31);
        l_311 = l_31.f1;
    }
    l_344 = (l_326 >= (l_276[1] = (func_29(l_31) || (safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(l_341, (safe_add_func_int8_t_s_s(g_275[0], 0x99L)))), p_18)))));
    if ((+(((g_275[0] , ((func_59(l_277, ((l_349 = (g_267 <= (0L > (l_276[1] = (4294967295UL < func_47((safe_mul_func_uint8_t_u_u(255UL, (safe_sub_func_uint32_t_u_u((g_245 = 1UL), (func_63((func_47((l_344 = g_142), (p_18 <= 0x0B5DL), l_276[1], g_210.f1) | g_265[0][0][0]), g_139[1], p_19, l_276[1], g_116) , l_344))))), l_290, l_276[1], p_19)))))) && 0x3ABEL), l_31.f1) & 1L) | g_210.f1)) == l_277.f0) ^ 0x1330L)))
    {
        unsigned short l_360 = 5UL;
        l_31 = g_210;
        g_266[0] = (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(p_18, (0xB9L | ((((safe_lshift_func_int16_t_s_u(((g_69 , p_17) | g_73.f0), 12)) < (g_176.f1 > ((safe_mul_func_uint8_t_u_u((((safe_mod_func_int8_t_s_s(p_17, 1L)) , 0x4CL) && g_176.f1), p_19)) | g_139[8]))) != l_360) != g_205)))), 3));
    }
    else
    {
        int l_369 = (-2L);
        struct S0 l_370 = {0xAAE5C66EL};
        struct S1 l_372 = {0x63L,0UL};
        int l_462 = 0x23E048BFL;
        unsigned l_493 = 4294967288UL;
        unsigned l_537 = 0xC754253CL;
        unsigned l_607 = 0xE7C898E8L;
        if ((g_266[1] != ((l_276[1] = (safe_add_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(l_344, (((safe_mul_func_uint8_t_u_u(1UL, ((1L <= (p_18 || 0x53A083E5L)) != (safe_sub_func_int8_t_s_s(((l_369 && 255UL) , (((p_17 = 1UL) != 0xEF301A20L) || 0UL)), p_19))))) , 4294967293UL) <= g_266[0]))) || g_141), p_18))) , p_18)))
        {
            struct S0 l_371 = {0UL};
            struct S1 l_373[8][3] = {{{1L,0x32L},{7L,0x80L},{0xA2L,255UL}},{{-10L,1UL},{-10L,1UL},{0xA2L,255UL}},{{7L,0x80L},{1L,0x32L},{-1L,0UL}},{{0L,0x64L},{-10L,1UL},{0L,0x64L}},{{0L,0x64L},{7L,0x80L},{-10L,1UL}},{{7L,0x80L},{0L,0x64L},{0L,0x64L}},{{-10L,1UL},{-1L,0UL},{-10L,1UL}},{{0xA2L,255UL},{1L,0x32L},{0xC8L,0x99L}}};
            int l_378[8] = {8L,0xFCEEB9A9L,8L,8L,0xFCEEB9A9L,8L,8L,0xFCEEB9A9L};
            int l_452 = (-9L);
            int i, j;
            g_69 = ((g_176.f1 , g_137) , (l_371 = l_370));
            g_176 = (l_373[4][1] = l_372);
            l_378[1] = (g_265[1][1][0] <= (safe_add_func_uint8_t_u_u((g_116 , p_18), (safe_mul_func_uint8_t_u_u(l_371.f0, g_176.f0)))));
            if ((safe_add_func_uint32_t_u_u((((g_205 >= (~(safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(func_23((g_275[1] , g_139[1]), l_370, l_371.f0), (safe_add_func_int32_t_s_s((((safe_rshift_func_int8_t_s_s(0L, 7)) > (safe_sub_func_uint32_t_u_u(g_141, (g_96 = g_139[1])))) == l_370.f0), 0x50939953L)))), g_210.f1)))) < g_265[1][1][1]) && p_18), l_276[0])))
            {
                unsigned l_398 = 0UL;
                unsigned l_407 = 0x3486B52AL;
                g_395 = ((g_266[1] = g_73.f1) >= (safe_rshift_func_uint16_t_u_u(p_19, (safe_mod_func_uint8_t_u_u((g_154 , p_17), l_378[0])))));
                l_371 = func_32(g_156, l_370, func_55((!(((l_407 = (safe_sub_func_uint16_t_u_u((((p_17 <= l_398) || (((safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((((g_205 = ((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(0xFAD3BD01L)), p_17)) >= l_369)) , (l_406 == l_290)) < l_370.f0), 0x1DFCL)), 0xFBFB2792L)) <= g_73.f0) , l_378[1])) & 0xD286198FL), g_267))) | g_156) == 65527UL)), p_19, l_398), g_69.f0, l_372);
            }
            else
            {
                short l_412 = (-4L);
                unsigned l_415[8][1];
                struct S1 l_426 = {-1L,255UL};
                int l_437[7];
                int l_443 = 0xE5B9472AL;
                unsigned l_444 = 0UL;
                int i, j;
                for (i = 0; i < 8; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_415[i][j] = 0x8B10FAFCL;
                }
                for (i = 0; i < 7; i++)
                    l_437[i] = 8L;
                l_276[1] = (safe_add_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(((p_17 = l_412) < ((safe_lshift_func_uint16_t_u_u(((((l_378[1] = (l_290 != (g_141 < g_139[0]))) < l_31.f1) || ((((l_378[1] <= func_59(func_63((l_341 < ((0x214D5FA8L != (g_245 > 0L)) & 5L)), g_142, g_69.f0, p_18, p_18), g_275[0], g_176.f1)) && 5L) != p_18) > l_415[5][0])) | g_267), g_266[2])) & p_19)), l_415[5][0])) , g_73.f1) && 0x579DL), l_372.f0));
                for (g_73.f1 = 0; (g_73.f1 == 56); g_73.f1 = safe_add_func_int8_t_s_s(g_73.f1, 8))
                {
                    struct S0 l_424 = {0x0BF1E8D4L};
                    struct S1 l_425[8] = {{0L,255UL},{0xAEL,248UL},{0L,255UL},{0xAEL,248UL},{0L,255UL},{0xAEL,248UL},{0L,255UL},{0xAEL,248UL}};
                    int i;
                    g_266[1] = (safe_lshift_func_int8_t_s_s((-6L), (l_349 | ((safe_lshift_func_int8_t_s_u(((((0x428539D0L & p_17) && l_373[4][1].f0) < (safe_mul_func_int8_t_s_s(l_378[1], ((func_23(l_344, (g_69 = l_424), l_415[5][0]) , p_18) < g_275[0])))) >= 0x2A8959ABL), g_210.f1)) && 0x86A1L))));
                    l_426 = l_425[4];
                    g_266[1] = (safe_lshift_func_uint16_t_u_u(p_18, (l_429 , ((safe_unary_minus_func_uint32_t_u((l_444 = ((safe_sub_func_uint16_t_u_u(((g_96 ^ (func_23((l_443 = (g_141 = (safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((l_437[1] = (l_378[1] = (l_415[5][0] > l_326))) , (((safe_mul_func_int8_t_s_s(((l_373[4][1].f1 , (safe_lshift_func_int8_t_s_u((g_217 = 0xD8L), l_442))) > g_117), 0x20L)) | (-5L)) ^ g_156)), g_73.f1)), l_372.f1)))), g_69, l_424.f0) & g_116)) == g_139[1]), 0x88BBL)) & p_17)))) > l_373[4][1].f1))));
                }
                for (g_73.f0 = 0; (g_73.f0 <= (-2)); g_73.f0 = safe_sub_func_int16_t_s_s(g_73.f0, 1))
                {
                    struct S0 l_457[3][4][2] = {{{{7UL},{0x18BF8B18L}},{{0x923C52B2L},{0x923C52B2L}},{{0x923C52B2L},{0x18BF8B18L}},{{7UL},{4294967295UL}}},{{{0x18BF8B18L},{4294967295UL}},{{7UL},{0x18BF8B18L}},{{0x923C52B2L},{0x923C52B2L}},{{0x923C52B2L},{0x18BF8B18L}}},{{{7UL},{4294967295UL}},{{0x18BF8B18L},{4294967295UL}},{{7UL},{0x18BF8B18L}},{{0x923C52B2L},{0x923C52B2L}}}};
                    int i, j, k;
                    l_369 = ((g_449 = (safe_mul_func_uint8_t_u_u(func_23(p_19, g_69, g_245), g_116))) | ((safe_lshift_func_int16_t_s_u((l_437[1] , (-1L)), g_210.f1)) , (l_277.f0 != 0xADDAL)));
                    if (g_245)
                    {
                        return l_452;
                    }
                    else
                    {
                        int l_474 = 0x2CEB77BDL;
                        g_266[1] = (((((((g_156 = ((safe_add_func_uint8_t_u_u(0UL, (safe_mod_func_uint16_t_u_u(func_23(l_31.f0, l_457[0][3][0], func_23((safe_lshift_func_uint8_t_u_s(g_4, 1)), l_277, (l_344 = ((safe_add_func_int16_t_s_s((l_462 ^ (p_17 = func_23(((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(p_19, ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(g_210.f1, ((safe_sub_func_uint16_t_u_u(p_17, g_395)) > g_139[5]))), 0xEADEL)) == l_426.f1))), 0x5526L)) || l_378[6]), l_371, g_137))), l_473)) | l_426.f1)))), p_19)))) | p_18)) < l_474) || p_19) != g_139[7]) || p_19) < (-9L)) && p_19);
                    }
                }
            }
        }
        else
        {
            unsigned char l_475[5][6] = {{4UL,4UL,255UL,6UL,255UL,255UL},{6UL,255UL,255UL,255UL,6UL,255UL},{255UL,6UL,255UL,4UL,4UL,255UL},{4UL,4UL,255UL,6UL,255UL,255UL},{6UL,255UL,255UL,255UL,6UL,255UL}};
            struct S0 l_526[10] = {{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}};
            unsigned l_584[9] = {0x533C9541L,0x69D19A96L,0x533C9541L,0x69D19A96L,0x533C9541L,0x69D19A96L,0x533C9541L,0x69D19A96L,0x533C9541L};
            int l_585 = 0x807B1A2FL;
            struct S1 l_586 = {0xEBL,0UL};
            unsigned l_597 = 0UL;
            struct S0 l_610 = {0UL};
            int i, j;
            if ((l_369 = l_475[0][5]))
            {
                struct S1 l_476[7] = {{0L,0x02L},{1L,1UL},{1L,1UL},{0L,0x02L},{1L,1UL},{1L,1UL},{0L,0x02L}};
                int i;
                l_31 = l_476[1];
                l_493 = (((safe_mod_func_uint16_t_u_u((+l_372.f1), l_369)) > (func_47((l_277.f0 == p_18), (l_349 = (((safe_rshift_func_uint16_t_u_s(func_47(((safe_unary_minus_func_uint16_t_u((safe_add_func_uint32_t_u_u(0xDE7A5479L, (safe_lshift_func_uint8_t_u_u(0UL, 7)))))) , (safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(func_29(l_31), ((safe_mul_func_uint16_t_u_u(((p_17 = l_369) , 0x5484L), l_475[0][5])) || 0UL))), g_275[0]))), p_18, p_19, g_492), 6)) >= 6UL) || g_141)), g_4, g_492) == g_4)) < g_210.f0);
            }
            else
            {
                int l_494 = 0x233714A2L;
                struct S0 l_511 = {0xB300B62BL};
                int l_513 = 0L;
                struct S1 l_556 = {-1L,9UL};
                l_494 = (-10L);
                if ((safe_mul_func_int16_t_s_s((p_18 != p_18), l_372.f0)))
                {
                    char l_499[10] = {0xC7L,0x03L,0x03L,0xC7L,0x15L,0xC7L,0x03L,0x03L,0xC7L,0x15L};
                    struct S0 l_512[9][7] = {{{0x9EC9A96BL},{4294967288UL},{4294967295UL},{4294967288UL},{0x9EC9A96BL},{2UL},{0x9EC9A96BL}},{{0UL},{5UL},{5UL},{0UL},{0xDCCE724BL},{5UL},{0x776CCF4FL}},{{0x56E7F132L},{4294967288UL},{0x56E7F132L},{1UL},{0UL},{1UL},{0x56E7F132L}},{{0UL},{0UL},{2UL},{0x776CCF4FL},{0UL},{0x77663CFEL},{0x776CCF4FL}},{{0x9EC9A96BL},{1UL},{9UL},{4294967288UL},{9UL},{1UL},{0x9EC9A96BL}},{{0xDCCE724BL},{0x776CCF4FL},{5UL},{0xDCCE724BL},{0UL},{5UL},{5UL}},{{0UL},{4294967288UL},{1UL},{4294967288UL},{0UL},{2UL},{0UL}},{{0UL},{0xDCCE724BL},{5UL},{0x776CCF4FL},{0xDCCE724BL},{0xDCCE724BL},{0x776CCF4FL}},{{9UL},{4294967288UL},{9UL},{1UL},{0x9EC9A96BL},{1UL},{9UL}}};
                    struct S1 l_534 = {0L,250UL};
                    int i, j;
                    if ((l_31.f0 < ((safe_add_func_int8_t_s_s((l_499[4] & (safe_mul_func_int16_t_s_s(l_277.f0, 0UL))), (safe_mul_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((l_494 = 0x1BL), func_47(p_19, l_473, p_17, p_19))) | 1UL), g_156)))) > g_245)))
                    {
                        struct S0 l_510[6] = {{0x2784A418L},{0x2784A418L},{0xBD8121BCL},{0x2784A418L},{0x2784A418L},{0xBD8121BCL}};
                        int i;
                        l_494 = (safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((func_47((g_207 || ((g_217 ^ (((1UL < (((l_510[2] , (func_59(g_69, l_494, (p_19 , (func_23(l_494, l_511, p_19) , p_17))) , l_475[0][5])) | 0x675AL) && l_499[4])) <= (-10L)) | 0UL)) || g_265[0][0][1])), p_18, l_511.f0, p_19) || g_492) & g_395), 15)), 0xB5AFL));
                    }
                    else
                    {
                        int l_522 = 0xA43EBCEDL;
                        l_369 = (+(((l_512[7][4] , (g_176 , (((l_513 & (l_494 = (safe_mod_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s(func_29(g_73), ((safe_lshift_func_int16_t_s_s(((l_369 || ((g_210.f0 , g_492) || (g_523 = (l_522 = 0xF136F0ECL)))) >= p_19), l_511.f0)) < p_18))), p_19)) && p_18), 0xD92066DBL)))) & g_210.f1) ^ p_17))) < p_18) != 0UL));
                    }
                    for (l_369 = 0; (l_369 < (-30)); l_369--)
                    {
                        struct S0 l_527 = {4294967295UL};
                        int l_533 = 4L;
                        l_527 = l_526[4];
                        if (g_449)
                            continue;
                        g_266[0] = func_38((safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_unary_minus_func_int8_t_s(g_207)), 0x7E1A42C4L)), (l_533 && g_449))));
                        g_266[3] = (l_534 , (l_372.f0 || p_18));
                    }
                    g_544 = (((+(g_266[0] = (g_265[0][1][0] ^ ((func_47(((safe_mod_func_int16_t_s_s((l_537 == ((l_369 = (g_267 > ((safe_mul_func_uint16_t_u_u((p_17 , p_18), l_473)) <= g_69.f0))) <= ((safe_rshift_func_uint16_t_u_s(0x5121L, ((((safe_mod_func_int8_t_s_s((g_176.f0 = (g_449 || (-10L))), 0x11L)) ^ p_17) , g_4) == g_138))) >= l_370.f0))), l_277.f0)) >= 6UL), p_19, l_372.f1, g_266[1]) < 0xDF92L) | l_513)))) == (-1L)) || 0xE2E698B6L);
                }
                else
                {
                    int l_547 = 0x0CB603B0L;
                    if (((((safe_sub_func_uint32_t_u_u((0UL != ((func_29(g_73) && (+l_537)) & (l_494 = l_547))), g_492)) && (0xC206L < ((safe_mul_func_uint8_t_u_u(func_23(p_18, g_69, p_19), g_210.f0)) ^ g_73.f0))) & (-1L)) && l_442))
                    {
                        g_210 = func_55(g_395, l_511.f0, p_19);
                    }
                    else
                    {
                        return g_141;
                    }
                    l_369 = p_18;
                    if ((l_369 = (safe_rshift_func_int16_t_s_u(l_511.f0, 4))))
                    {
                        g_266[2] = (0xA4E3D260L <= (l_547 , (safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(g_116, 2)), g_210.f1))));
                    }
                    else
                    {
                        short l_563 = 0x369AL;
                        l_369 = g_395;
                        g_176 = (l_372 , l_556);
                        l_349 = (safe_mul_func_uint8_t_u_u(255UL, ((g_69 , func_63((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((l_563 & (safe_lshift_func_uint16_t_u_s((g_141 = (~g_80)), p_19))), (0L & (safe_mod_func_uint32_t_u_u((l_494 = (((safe_mul_func_int8_t_s_s(g_266[1], p_18)) != g_266[1]) > p_19)), p_19))))), 0x48A6L)), g_544, g_73.f0, g_139[1], p_18)) , p_18)));
                    }
                    return g_267;
                }
                for (l_537 = 11; (l_537 > 13); ++l_537)
                {
                    struct S1 l_577[5][8] = {{{0x23L,0x1CL},{1L,0xDCL},{0x24L,0xCEL},{1L,0xDCL},{0x23L,0x1CL},{0x23L,0x1CL},{1L,0xDCL},{0x24L,0xCEL}},{{0x23L,0x1CL},{0x23L,0x1CL},{1L,0xDCL},{4L,255UL},{0x23L,0x1CL},{0x4FL,0x31L},{0x4FL,0x31L},{0x23L,0x1CL}},{{1L,0xDCL},{0x23L,0x1CL},{0x23L,0x1CL},{1L,0xDCL},{0x24L,0xCEL},{1L,0xDCL},{0x23L,0x1CL},{0x23L,0x1CL}},{{0x23L,0x1CL},{0x24L,0xCEL},{4L,255UL},{4L,255UL},{0x24L,0xCEL},{0x23L,0x1CL},{0x24L,0xCEL},{4L,255UL}},{{1L,0xDCL},{0x24L,0xCEL},{1L,0xDCL},{0x23L,0x1CL},{0x23L,0x1CL},{1L,0xDCL},{0x24L,0xCEL},{1L,0xDCL}}};
                    int i, j;
                    for (g_176.f0 = (-6); (g_176.f0 != 12); g_176.f0 = safe_add_func_uint8_t_u_u(g_176.f0, 1))
                    {
                        struct S0 l_576[7] = {{4294967288UL},{4294967288UL},{4294967288UL},{4294967288UL},{4294967288UL},{4294967288UL},{4294967288UL}};
                        int i;
                        l_372 = (l_586 = ((!((safe_mul_func_uint8_t_u_u((g_4 && (1L == (func_59(l_576[1], g_266[0], ((l_577[3][6] , g_210.f1) , (safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((l_585 = (l_494 = (func_59(g_69, ((safe_mul_func_int16_t_s_s(g_544, p_17)) < g_73.f0), l_556.f1) <= l_584[8]))), p_18)), g_210.f1)))) > (-1L)))), l_584[8])) != l_584[8])) , g_176));
                        if (l_576[1].f0)
                            continue;
                    }
                }
                g_69 = l_526[4];
            }
            l_585 = (~((safe_sub_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u(g_267, 8)), 1)) >= (safe_mul_func_uint8_t_u_u((func_47((func_23(((func_55(p_19, ((safe_mod_func_uint32_t_u_u(((g_69.f0 ^ 0UL) < (((p_17 , g_141) < (8L >= func_23(l_584[6], l_370, l_597))) && p_19)), p_19)) & g_449), l_526[4].f0) , l_584[8]) > 0xB641L), g_69, g_176.f0) != g_245), g_275[0], l_475[0][5], p_18) != p_17), 1UL))), g_205)) != 0x88A3L));
            l_276[0] = (safe_add_func_uint16_t_u_u(((((((l_585 = l_584[5]) <= (0x6E5963A6L > ((safe_mul_func_int8_t_s_s(((func_47(l_493, (l_369 = ((func_23(l_462, (l_370 = g_69), (l_602 ^ (p_17 = ((safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(p_19, (l_602 || (g_266[1] = func_23(l_344, g_69, g_80))))), g_492)) || g_139[3])))) <= (-1L)) ^ p_19)), p_18, l_607) > g_275[1]) && (-1L)), p_18)) || g_217))) > l_372.f0) <= 0x71FFC8FBL) || 1L) , g_523), g_116));
            for (g_210.f0 = 0; (g_210.f0 <= 5); g_210.f0 = safe_add_func_uint8_t_u_u(g_210.f0, 8))
            {
                l_344 = (g_266[1] = 1L);
                g_266[0] = 0x32115BC5L;
                l_610 = g_69;
            }
        }
        g_266[1] = (l_276[0] = p_18);
    }
    return p_17;
}







static unsigned short func_23(unsigned short p_24, struct S0 p_25, int p_26)
{
    int l_278 = 0x2DD5C52CL;
    g_266[1] = l_278;
    return g_137;
}







static char func_29(struct S1 p_30)
{
    int l_196 = 0x559E7449L;
    int l_206 = 0L;
    struct S0 l_208 = {0x457A2E97L};
    struct S1 l_209 = {0L,255UL};
    unsigned l_270[1][4] = {{4294967289UL,4294967289UL,4294967289UL,4294967289UL}};
    int i, j;
    l_208 = func_32(((func_38(p_30.f1) , (g_69.f0 || func_47(l_196, l_196, (((((g_207 = (safe_sub_func_uint16_t_u_u(p_30.f1, (g_141 = (l_206 = (safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(g_176.f0, 6)), (g_205 = ((safe_add_func_uint8_t_u_u(0xE1L, (l_196 == 0xFDL))) != g_69.f0))))))))) , l_206) == p_30.f0) < g_138) & p_30.f1), g_80))) == l_196), l_208, l_209, p_30.f1, g_210);
    return l_270[0][3];
}







static struct S0 func_32(short p_33, struct S0 p_34, struct S1 p_35, unsigned p_36, struct S1 p_37)
{
    unsigned short l_211 = 0xAFF7L;
    struct S0 l_214[4] = {{0x6A644C78L},{0x6A644C78L},{0x6A644C78L},{0x6A644C78L}};
    struct S1 l_248 = {4L,0xC7L};
    short l_259 = 0xC1CFL;
    int l_268[1];
    int l_269 = (-1L);
    int i;
    for (i = 0; i < 1; i++)
        l_268[i] = (-4L);
    g_217 = ((g_117 & l_211) & (((safe_lshift_func_int8_t_s_u((l_214[3] , ((+l_211) && 5L)), (p_34 , ((((((safe_add_func_uint32_t_u_u((func_47(((g_210.f0 | 7L) != g_138), p_35.f0, g_96, g_210.f1) , g_116), p_36)) > g_96) != 0xFEL) != g_205) && 0xA1L) || 1L)))) , 0L) | p_33));
    for (g_156 = 0; (g_156 <= 3); g_156 += 1)
    {
        unsigned l_218 = 4294967295UL;
        int l_230 = 0L;
        struct S1 l_247 = {5L,253UL};
        int l_260 = 0x3513BAEDL;
        int i;
        if ((l_218 = (-2L)))
        {
            unsigned l_223 = 0x550B3B61L;
            int l_246 = 1L;
            int i;
            l_230 = (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(l_223, (safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s((+l_223), (safe_sub_func_uint32_t_u_u(g_73.f0, (l_218 || 0xD5L))))), l_218)))), p_37.f1));
            l_246 = (safe_unary_minus_func_int32_t_s((g_245 = ((!(safe_rshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u((l_223 == g_142))), (safe_sub_func_int16_t_s_s((g_139[(g_156 + 3)] = (-5L)), (0x55FA1EA5L > func_47((((safe_add_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((p_37.f1 = (0x1A36L || g_205)), (g_117 = l_211))) < (safe_mod_func_int16_t_s_s((g_138 , 0x3D06L), 0xA624L))), (-1L))) >= p_36) == l_218), g_138, p_35.f0, g_156)))))) | g_137), l_230))) , g_139[(g_156 + 3)]))));
        }
        else
        {
            for (p_34.f0 = 0; (p_34.f0 <= 3); p_34.f0 += 1)
            {
                l_248 = l_247;
            }
        }
        if (g_142)
            break;
        l_214[g_156] = func_63(((safe_lshift_func_uint8_t_u_u((l_269 = (g_154 || (safe_mod_func_uint16_t_u_u((((l_268[0] = (g_267 = (g_266[1] = (g_265[0][0][1] = func_47((l_230 = l_218), (safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(((l_247.f1 > l_259) & l_259), l_247.f1)), (l_260 = l_247.f0))), (g_205 = ((((safe_sub_func_int32_t_s_s(4L, (safe_mul_func_int8_t_s_s(p_34.f0, p_36)))) & 0x4D6A3875L) == g_69.f0) , l_248.f1)))), g_73.f1, g_80))))) < g_96) <= l_211), l_247.f1)))), 3)) | g_117), l_248.f0, g_137, g_156, p_33);
    }
    return g_69;
}







static unsigned func_38(unsigned short p_39)
{
    int l_42 = 0x7EC53A21L;
    char l_178 = 0x83L;
    struct S1 l_183 = {0x35L,0UL};
    int l_195 = (-1L);
    for (p_39 = (-18); (p_39 != 34); ++p_39)
    {
        struct S0 l_143 = {4294967292UL};
        int l_174[7] = {2L,4L,4L,2L,4L,4L,2L};
        int i;
        l_174[0] = (l_42 ^ (safe_sub_func_int8_t_s_s((((((0xD01CL & (p_39 | ((2UL ^ (safe_mul_func_int16_t_s_s(func_47(l_42, g_4, ((((safe_unary_minus_func_int32_t_s((1UL & (safe_add_func_int32_t_s_s((0x14EFL >= (func_55(func_59((l_143 = func_63(p_39, g_4, g_4, g_4, l_42)), p_39, p_39), g_4, p_39) , 0x15C3L)), g_4))))) != p_39) && p_39) , 0xFD6BL), l_174[0]), l_178))) != (-4L)))) | p_39) == l_178) & p_39) , p_39), p_39)));
        for (g_80 = 1; (g_80 > 43); g_80 = safe_add_func_int16_t_s_s(g_80, 6))
        {
            for (g_176.f1 = 19; (g_176.f1 <= 27); g_176.f1 = safe_add_func_uint8_t_u_u(g_176.f1, 5))
            {
                struct S1 l_184 = {0x7BL,1UL};
                l_184 = l_183;
            }
        }
        l_174[2] = (((safe_mod_func_uint16_t_u_u(7UL, l_42)) < (l_183.f0 >= ((safe_rshift_func_int16_t_s_u(l_42, (4294967294UL || ((safe_sub_func_int8_t_s_s(g_142, (4L <= (((safe_mod_func_int32_t_s_s((g_176.f0 , (safe_mod_func_int16_t_s_s((l_195 = (func_47((p_39 <= g_73.f1), l_174[6], l_174[0], l_143.f0) & g_80)), g_141))), l_42)) > 0xD3FFL) > l_174[0])))) < 1UL)))) , p_39))) ^ 1UL);
        l_195 = p_39;
    }
    return g_154;
}







static const short func_47(unsigned short p_48, short p_49, unsigned short p_50, unsigned char p_51)
{
    unsigned short l_175 = 65532UL;
    struct S0 l_177 = {1UL};
    l_175 = g_4;
    g_176 = (g_73 = g_73);
    g_69 = l_177;
    return g_73.f1;
}







static struct S1 func_55(unsigned p_56, const unsigned p_57, unsigned p_58)
{
    unsigned l_162 = 0x0EC63AA8L;
    unsigned char l_169 = 0x13L;
    unsigned char l_170 = 0x70L;
    struct S0 l_171 = {4294967294UL};
    int l_172[6] = {0x576A339AL,0x72D12529L,0x576A339AL,0x576A339AL,0x72D12529L,0x576A339AL};
    struct S1 l_173 = {2L,0x44L};
    int i;
    l_171 = func_63((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(l_162, l_162)), ((0x735A4678L >= (safe_lshift_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(0UL, p_58)) , (1L > ((p_58 <= (safe_mul_func_int8_t_s_s(g_139[5], 0x4CL))) <= g_138))), l_169))) != 3UL))), g_116, l_170, g_139[6], g_156);
    l_172[1] = (g_142 ^ l_162);
    return l_173;
}







static unsigned func_59(struct S0 p_60, char p_61, unsigned short p_62)
{
    const struct S0 l_144 = {0x4F880E71L};
    struct S1 l_157 = {-1L,0x33L};
    p_60 = l_144;
    p_60 = func_63(g_69.f0, g_117, p_62, p_61, (l_144.f0 == 6L));
    for (g_138 = 2; (g_138 <= 8); g_138 += 1)
    {
        int l_146 = 0xC5D88C53L;
        struct S1 l_148[5][8] = {{{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L}},{{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L}},{{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L}},{{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L}},{{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L},{0x48L,0x36L}}};
        int l_153 = 0L;
        int i, j;
        for (g_80 = 0; (g_80 <= 8); g_80 += 1)
        {
            int l_145 = 4L;
            if (l_145)
                break;
            if ((p_61 && (l_144.f0 , p_61)))
            {
                return l_146;
            }
            else
            {
                for (l_146 = 1; (l_146 <= 8); l_146 += 1)
                {
                    if (p_60.f0)
                        break;
                    if ((~l_144.f0))
                    {
                        unsigned l_147[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_147[i] = 4294967294UL;
                        l_147[0] = (g_117 <= (g_73.f0 | l_146));
                        l_148[1][6] = g_73;
                        if (l_148[1][6].f1)
                            continue;
                    }
                    else
                    {
                        g_154 = (g_138 >= (safe_lshift_func_int8_t_s_s((g_96 , ((l_145 > (p_61 = g_142)) , ((l_153 = ((g_73.f0 = (g_142 > (safe_add_func_uint8_t_u_u((p_61 || (g_137 , 0xD052D8D8L)), g_116)))) >= p_61)) & 0x2CL))), l_145)));
                        if (p_62)
                            continue;
                        g_69 = l_144;
                        if (p_61)
                            continue;
                    }
                    g_156 = (safe_unary_minus_func_int8_t_s(p_60.f0));
                }
                p_60 = g_69;
            }
        }
        l_157 = g_73;
    }
    return p_61;
}







static struct S0 func_63(int p_64, unsigned p_65, short p_66, int p_67, const unsigned short p_68)
{
    struct S0 l_70 = {0xD4D44114L};
    unsigned short l_71[1][4][9] = {{{0xDFDEL,0xDFDEL,0x497AL,0UL,0xB673L,0x497AL,0xB673L,0UL,0x497AL},{3UL,3UL,0UL,65528UL,65535UL,0UL,65535UL,65528UL,0UL},{0xDFDEL,0xDFDEL,0x497AL,0UL,0xB673L,0x497AL,0xB673L,0UL,0x497AL},{3UL,3UL,0UL,65528UL,65535UL,0UL,65535UL,65528UL,0UL}}};
    struct S1 l_72[10][9] = {{{-7L,249UL},{0x38L,0UL},{0xACL,255UL},{0x03L,0x22L},{0xB7L,255UL},{0x8FL,0xF0L},{1L,6UL},{1L,6UL},{0x8FL,0xF0L}},{{0x03L,0x22L},{0x69L,0xA1L},{0x93L,255UL},{0x69L,0xA1L},{0x03L,0x22L},{0x38L,0UL},{0L,0UL},{0xACL,255UL},{1L,8UL}},{{0L,0UL},{0x38L,0UL},{0x03L,0x22L},{0x69L,0xA1L},{0x93L,255UL},{0x69L,0xA1L},{0x03L,0x22L},{0x38L,0UL},{0L,0UL}},{{1L,6UL},{0x8FL,0xF0L},{0xB7L,255UL},{0x03L,0x22L},{0xACL,255UL},{0x38L,0UL},{-7L,249UL},{0x38L,0UL},{0xACL,255UL}},{{1L,8UL},{-7L,249UL},{-7L,249UL},{1L,8UL},{0x69L,0xA1L},{0x8FL,0xF0L},{0x40L,0xD1L},{0xACL,255UL},{0xB7L,255UL}},{{1L,6UL},{0xACL,255UL},{-7L,249UL},{-4L,0xCFL},{-4L,0xCFL},{-7L,249UL},{0xACL,255UL},{1L,6UL},{0x93L,255UL}},{{0L,0UL},{-4L,0xCFL},{0xB7L,255UL},{-4L,0xCFL},{0x40L,0xD1L},{0x93L,255UL},{0x93L,255UL},{0x40L,0xD1L},{-4L,0xCFL}},{{1L,6UL},{0x03L,0x22L},{1L,6UL},{-7L,249UL},{0x93L,255UL},{0x8FL,0xF0L},{0L,0UL},{0x69L,0xA1L},{0x69L,0xA1L}},{{0x38L,0UL},{0x03L,0x22L},{0x69L,0xA1L},{0x93L,255UL},{0x69L,0xA1L},{0x03L,0x22L},{0x38L,0UL},{0L,0UL},{0xACL,255UL}},{{0L,0UL},{0x8FL,0xF0L},{0x93L,255UL},{-7L,249UL},{1L,6UL},{0x03L,0x22L},{1L,6UL},{-7L,249UL},{0x93L,255UL}}};
    int l_118 = 0L;
    short l_121 = (-1L);
    int l_129 = 0x9427022DL;
    int i, j, k;
    l_70 = g_69;
    for (p_66 = 0; (p_66 >= 0); p_66 -= 1)
    {
        struct S0 l_101 = {0xEF4A51DBL};
        g_73 = (l_70.f0 , l_72[8][4]);
        for (p_64 = 0; (p_64 >= 0); p_64 -= 1)
        {
            char l_81[3];
            int l_95 = (-8L);
            int i;
            for (i = 0; i < 3; i++)
                l_81[i] = 7L;
            g_73 = l_72[5][8];
            for (l_70.f0 = 0; (l_70.f0 <= 0); l_70.f0 += 1)
            {
                struct S0 l_82[7] = {{0xF9F05BB7L},{0xF9F05BB7L},{0xF9F05BB7L},{0xF9F05BB7L},{0xF9F05BB7L},{0xF9F05BB7L},{0xF9F05BB7L}};
                int l_89 = (-7L);
                int i;
                g_73 = g_73;
                for (p_67 = 0; (p_67 >= 0); p_67 -= 1)
                {
                    struct S1 l_97 = {0L,0x8FL};
                    int l_100 = 9L;
                    int i, j, k;
                    l_81[2] = (safe_mul_func_uint16_t_u_u((~(l_71[p_64][p_66][(p_66 + 6)] & p_68)), ((g_80 = (g_4 <= (safe_mod_func_int16_t_s_s((g_4 != (0xD4L != g_69.f0)), (safe_add_func_int16_t_s_s(p_68, (p_66 >= (g_73.f1 = ((p_66 , p_65) & 0xD91DL))))))))) | l_70.f0)));
                    if (g_80)
                    {
                        char l_83 = (-1L);
                        struct S0 l_88[7][1] = {{{0x4CE6FA97L}},{{0x49D9BB22L}},{{0x4CE6FA97L}},{{0x49D9BB22L}},{{0x4CE6FA97L}},{{0x49D9BB22L}},{{0x4CE6FA97L}}};
                        int l_90 = 0xE6DEAED5L;
                        int i, j;
                        l_82[5] = g_69;
                        if (l_83)
                            break;
                        l_90 = (l_71[0][2][5] , (p_64 ^ (1L || (((((p_67 < (l_89 = (safe_sub_func_uint32_t_u_u((p_64 , ((safe_sub_func_uint8_t_u_u((((l_88[6][0] , p_67) , ((l_82[5].f0 > 5UL) && g_73.f0)) > p_66), 1L)) , l_82[5].f0)), 8UL)))) != l_82[5].f0) > p_67) <= l_71[l_70.f0][(p_67 + 3)][(l_70.f0 + 2)]) || 0x8EL))));
                        g_96 = (safe_lshift_func_int8_t_s_u((+(safe_sub_func_int16_t_s_s((g_73.f0 > (l_88[6][0].f0 & 0xE9346F96L)), (l_95 = g_69.f0)))), l_90));
                    }
                    else
                    {
                        return g_69;
                    }
                    l_72[4][4] = l_97;
                    l_100 = (safe_mul_func_int8_t_s_s(0x70L, (g_73.f0 = (g_73.f1 | (p_68 && 0x82BFL)))));
                }
            }
            return l_101;
        }
    }
    l_121 = (safe_add_func_uint32_t_u_u((g_4 <= ((safe_add_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(0UL, ((safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((g_69.f0 & p_67) && (((g_73.f1 ^ (((safe_lshift_func_uint16_t_u_s((g_117 = (g_116 = l_70.f0)), 5)) & (l_118 = 4294967291UL)) | (safe_mod_func_uint8_t_u_u((l_70.f0 || p_64), l_72[8][4].f0)))) ^ 65531UL) != l_72[8][4].f0)), (-1L))), l_72[8][4].f1)) && l_70.f0))) , g_96), 7)) <= p_64), l_72[8][4].f1)) | p_67)), 0xB53E36E8L));
    for (p_66 = 0; (p_66 < 29); p_66 = safe_add_func_uint8_t_u_u(p_66, 8))
    {
        struct S1 l_126[5][3] = {{{-1L,0xA7L},{0L,0xD7L},{-1L,0xA7L}},{{9L,0xD3L},{1L,1UL},{9L,0xD3L}},{{-1L,0xA7L},{0L,0xD7L},{-1L,0xA7L}},{{9L,0xD3L},{1L,1UL},{9L,0xD3L}},{{-1L,0xA7L},{0L,0xD7L},{-1L,0xA7L}}};
        int l_130 = 0xE41B645FL;
        int i, j;
        l_130 = (((-9L) > (l_118 = p_66)) == (safe_sub_func_int16_t_s_s(p_65, (l_126[4][2] , (l_72[8][4].f1 > (l_129 = (safe_lshift_func_int16_t_s_u(0x0AA6L, p_68))))))));
        for (l_70.f0 = 26; (l_70.f0 < 16); l_70.f0--)
        {
            unsigned short l_140 = 0xB462L;
            g_139[1] = (g_138 = (g_137 = ((safe_rshift_func_uint8_t_u_s((65535UL && (safe_mul_func_int16_t_s_s((l_126[4][2].f1 , p_68), (p_68 && p_68)))), 7)) < (!(g_80 <= p_68)))));
            for (g_73.f0 = 0; g_73.f0 < 5; g_73.f0 += 1)
            {
                for (l_130 = 0; l_130 < 3; l_130 += 1)
                {
                    struct S1 tmp = {0x31L,1UL};
                    l_126[g_73.f0][l_130] = tmp;
                }
            }
            p_64 = (g_142 = (g_141 = (l_140 = p_66)));
        }
    }
    return l_70;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_69.f0, "g_69.f0", print_hash_value);
    transparent_crc(g_73.f0, "g_73.f0", print_hash_value);
    transparent_crc(g_73.f1, "g_73.f1", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_139[i], "g_139[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_176.f0, "g_176.f0", print_hash_value);
    transparent_crc(g_176.f1, "g_176.f1", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_210.f0, "g_210.f0", print_hash_value);
    transparent_crc(g_210.f1, "g_210.f1", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_265[i][j][k], "g_265[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_266[i], "g_266[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_267, "g_267", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_275[i], "g_275[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_395, "g_395", print_hash_value);
    transparent_crc(g_449, "g_449", print_hash_value);
    transparent_crc(g_492, "g_492", print_hash_value);
    transparent_crc(g_523, "g_523", print_hash_value);
    transparent_crc(g_544, "g_544", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
