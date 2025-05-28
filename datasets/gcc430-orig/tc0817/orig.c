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



static int g_26 = 7L;
static int *g_75 = (void*)0;
static short g_76 = 0L;
static unsigned g_110 = 0x200E08B7L;
static int g_131 = 0xA86B27BDL;
static unsigned short g_154 = 0xDF09L;
static unsigned char g_161 = 0x08L;
static unsigned char g_164 = 0x5EL;
static unsigned g_166[6] = {0UL, 0UL, 0xF8BEA3A2L, 0UL, 0UL, 0xF8BEA3A2L};
static char g_196 = 0L;
static unsigned g_197 = 0xDD303C42L;
static unsigned g_220 = 0UL;
static unsigned char g_225[6] = {1UL, 1UL, 1UL, 1UL, 1UL, 1UL};
static int **g_268 = &g_75;
static int ***g_267 = &g_268;
static const int *g_271 = &g_26;
static const int * const *g_270 = &g_271;
static int g_274 = 0x241F43FEL;
static unsigned g_284 = 4294967295UL;
static const unsigned char g_325 = 255UL;



static unsigned func_1(void);
static short func_4(unsigned char p_5, unsigned p_6, unsigned short p_7, unsigned char p_8, unsigned p_9);
static const unsigned func_16(short p_17);
static short func_18(const int p_19, unsigned char p_20, unsigned char p_21, unsigned char p_22, char p_23);
static const unsigned short func_29(unsigned char p_30, char p_31, int p_32, char p_33);
static char func_35(int p_36, unsigned p_37, short p_38, int p_39);
static char func_42(unsigned p_43);
static unsigned short func_49(int p_50, int p_51, char p_52, int p_53, short p_54);
static int func_55(char p_56, short p_57, int p_58, unsigned p_59);
static short func_61(int p_62, unsigned p_63);
static unsigned func_1(void)
{
    short l_34 = 1L;
    int l_46 = (-5L);
    int *l_328 = &g_26;
    (*l_328) = ((safe_lshift_func_int8_t_s_s((func_4((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((func_16(func_18(((safe_mod_func_uint32_t_u_u(g_26, (safe_lshift_func_uint16_t_u_s(func_29(l_34, func_35(l_34, (g_26 , (safe_mul_func_int8_t_s_s(func_42((safe_sub_func_uint32_t_u_u((~(g_26 & g_26)), l_46))), (safe_lshift_func_int8_t_s_s(((l_34 > 2L) == g_274), g_274))))), g_131, g_274), l_46, g_274), g_196)))) ^ 249UL), g_131, l_34, g_196, l_34)) & l_46), l_46)), l_34)), g_325)), l_34, l_46, g_325, g_325) > (-2L)), 3)) < g_325);



    return g_26;
}







static short func_4(unsigned char p_5, unsigned p_6, unsigned short p_7, unsigned char p_8, unsigned p_9)
{
    int *l_326 = &g_26;
    int **l_327 = &l_326;
    (*l_327) = l_326;
    return p_5;
}







static const unsigned func_16(short p_17)
{
    const unsigned l_321 = 2UL;
    int **l_322 = &g_75;
    char l_323 = 0x12L;
    const unsigned char l_324 = 7UL;
    for (p_17 = 5; (p_17 >= 0); p_17 -= 1)
    {
        short l_314 = 0x8C7DL;
        int l_316 = 0xB4DFFA53L;
        int l_317 = 0x181D68D8L;
        for (g_161 = 0; (g_161 <= 5); g_161 += 1)
        {
            int *l_312[6] = {(void*)0, (void*)0, &g_274, (void*)0, (void*)0, &g_274};
            int l_315 = 0x41D38EBBL;
            unsigned short l_318[3][2][5] = {{{0x3420L, 65535UL, 0UL, 7UL, 0UL}, {0x3420L, 65535UL, 0UL, 7UL, 0UL}}, {{0x3420L, 65535UL, 0UL, 7UL, 0UL}, {0x3420L, 65535UL, 0UL, 7UL, 0UL}}, {{0x3420L, 65535UL, 0UL, 7UL, 0UL}, {0x3420L, 65535UL, 0UL, 7UL, 0UL}}};
            int i, j, k;
            if (g_166[p_17])
                break;
            for (g_197 = 0; (g_197 <= 5); g_197 += 1)
            {
                int i;
                return g_225[p_17];
            }
            for (g_131 = 0; (g_131 <= 5); g_131 += 1)
            {
                int **l_313 = &l_312[5];
                (*l_313) = l_312[5];
                (*l_313) = (void*)0;
            }
            l_318[2][0][4]--;
        }
        for (g_196 = 0; (g_196 <= 5); g_196 += 1)
        {
            int i;
            return g_166[g_196];
        }
    }
    l_323 = ((((g_284 | ((g_131 >= l_321) && (l_322 != l_322))) >= 65535UL) || (0xB0FECEFAL != (((p_17 && g_220) && 0xB3F70EDAL) == p_17))) , p_17);
    return l_324;
}







static short func_18(const int p_19, unsigned char p_20, unsigned char p_21, unsigned char p_22, char p_23)
{
    const int l_303 = 0x9411BBB0L;
    unsigned l_310 = 0x88943AF5L;
    int *l_311[6] = {&g_274, &g_274, &g_26, &g_274, &g_274, &g_26};
    int i;
    g_26 = (p_23 < func_61(((safe_add_func_int16_t_s_s(((safe_unary_minus_func_int8_t_s(l_303)) >= (((safe_rshift_func_uint8_t_u_u(func_29(p_23, (((safe_lshift_func_uint8_t_u_u(g_284, 4)) & (safe_lshift_func_int8_t_s_s(g_284, 3))) != p_20), p_19, g_220), 2)) > l_303) , l_310)), p_20)) & g_76), p_19));
    g_26 &= (g_274 && 0x3CL);
    return g_274;
}







static const unsigned short func_29(unsigned char p_30, char p_31, int p_32, char p_33)
{
    unsigned char l_293[5][8] = {{255UL, 255UL, 0x2DL, 255UL, 255UL, 0x2DL, 255UL, 255UL}, {255UL, 255UL, 0x2DL, 255UL, 255UL, 0x2DL, 255UL, 255UL}, {255UL, 255UL, 0x2DL, 255UL, 255UL, 0x2DL, 255UL, 255UL}, {255UL, 255UL, 0x2DL, 255UL, 255UL, 0x2DL, 255UL, 255UL}, {255UL, 255UL, 0x2DL, 255UL, 255UL, 0x2DL, 255UL, 255UL}};
    char l_298 = 0x43L;
    int *l_299 = &g_274;
    int i, j;
    p_32 ^= (l_293[0][1] ^ ((l_293[0][1] | ((((g_76 && l_293[4][2]) & ((&g_270 != (void*)0) && g_76)) < ((&g_268 == (((safe_lshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s(0x2FL, 0x22L)), p_33)) , g_166[5]) , (void*)0)) < g_284)) | l_293[0][1])) , l_293[0][1]));
    (*l_299) ^= (l_298 > g_26);
    return g_26;
}







static char func_35(int p_36, unsigned p_37, short p_38, int p_39)
{
    int l_292 = 0xB0AA003EL;
    for (g_154 = (-12); (g_154 >= 44); g_154 = safe_add_func_int16_t_s_s(g_154, 2))
    {
        if ((**g_270))
            break;
    }
    return l_292;
}







static char func_42(unsigned p_43)
{
    unsigned l_60[7];
    int l_287[8] = {0xB2FD5C62L, 0xB2FD5C62L, 0x024934B0L, 0xB2FD5C62L, 0xB2FD5C62L, 0x024934B0L, 0xB2FD5C62L, 0xB2FD5C62L};
    int i;
    for (i = 0; i < 7; i++)
        l_60[i] = 0x2737AE9FL;
    l_287[5] &= (safe_mul_func_uint16_t_u_u(func_49(g_26, func_55(l_60[1], func_61(p_43, g_26), ((l_60[0] != (0x06D39F52L >= (((p_43 > 4L) , g_270) == (void*)0))) > (**g_270)), g_196), g_196, p_43, p_43), g_274));



    return l_287[5];
}







static unsigned short func_49(int p_50, int p_51, char p_52, int p_53, short p_54)
{
    int *l_273 = &g_274;
    int *l_275 = (void*)0;
    int *l_276 = &g_274;
    int *l_277 = &g_274;
    int *l_278 = &g_274;
    int *l_279 = (void*)0;
    int *l_280 = &g_274;
    int *l_281 = &g_274;
    int *l_282[1][3];
    char l_283 = 0L;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_282[i][j] = &g_274;
    }
    g_284--;
    return g_110;
}







static int func_55(char p_56, short p_57, int p_58, unsigned p_59)
{
    int l_272 = 7L;
    return l_272;
}







static short func_61(int p_62, unsigned p_63)
{
    int l_66 = 0x2D800F4DL;
    int *l_73[9][10][2] = {{{&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}}, {{&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}}, {{&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}}, {{&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}}, {{&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}}, {{&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}}, {{&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}}, {{&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}}, {{&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}, {&l_66, &l_66}}};
    unsigned l_107 = 0x20F127D3L;
    short l_153 = (-6L);
    const unsigned l_209 = 4294967295UL;
    unsigned char l_216 = 0x1DL;
    int i, j, k;
    p_62 = (((safe_sub_func_int16_t_s_s((l_66 , (g_26 > (g_26 , g_26))), ((((l_66 & (safe_mul_func_int8_t_s_s(5L, p_63))) || (!((g_26 <= (((safe_sub_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u(g_26, p_62)) & p_63), g_26)) <= l_66) < l_66)) || l_66))) , l_66) ^ g_26))) && 0xBDE8L) <= 1UL);
    if ((g_26 > ((g_26 , p_62) || ((p_62 | ((&p_62 != &p_62) | g_26)) ^ g_26))))
    {
        int *l_74 = (void*)0;
        g_75 = l_74;

        ;
        g_76 = g_26;
        p_62 = p_62;
        if ((safe_lshift_func_int8_t_s_s(g_76, 1)))
        {
            int **l_80[4][10][6] = {{{(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}}, {{(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}}, {{(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}}, {{(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}, {(void*)0, &l_74, &l_73[6][1][0], &l_73[8][3][0], &g_75, (void*)0}}};
            int ***l_79 = &l_80[2][8][5];
            int i, j, k;
            (*l_79) = &g_75;
        }
        else
        {
            unsigned l_87[5][6] = {{0x2FE88D37L, 8UL, 0x4FA9F1E5L, 8UL, 0x2FE88D37L, 8UL}, {0x2FE88D37L, 8UL, 0x4FA9F1E5L, 8UL, 0x2FE88D37L, 8UL}, {0x2FE88D37L, 8UL, 0x4FA9F1E5L, 8UL, 0x2FE88D37L, 8UL}, {0x2FE88D37L, 8UL, 0x4FA9F1E5L, 8UL, 0x2FE88D37L, 8UL}, {0x2FE88D37L, 8UL, 0x4FA9F1E5L, 8UL, 0x2FE88D37L, 8UL}};
            unsigned l_132 = 3UL;
            int **l_151[1];
            int *** const l_150 = &l_151[0];
            int i, j;
            for (i = 0; i < 1; i++)
                l_151[i] = &l_73[6][1][0];
            if ((safe_sub_func_int32_t_s_s(5L, p_63)))
            {
                unsigned l_90 = 0x530E041BL;
                int l_117[4];
                unsigned short l_136[4][8] = {{0x8BFEL, 0x41D4L, 0UL, 0x8647L, 0x41D4L, 0x3F44L, 0x41D4L, 0x8647L}, {0x8BFEL, 0x41D4L, 0UL, 0x8647L, 0x41D4L, 0x3F44L, 0x41D4L, 0x8647L}, {0x8BFEL, 0x41D4L, 0UL, 0x8647L, 0x41D4L, 0x3F44L, 0x41D4L, 0x8647L}, {0x8BFEL, 0x41D4L, 0UL, 0x8647L, 0x41D4L, 0x3F44L, 0x41D4L, 0x8647L}};
                int ***l_156[1][3][9] = {{{&l_151[0], &l_151[0], &l_151[0], &l_151[0], &l_151[0], &l_151[0], &l_151[0], &l_151[0], &l_151[0]}, {&l_151[0], &l_151[0], &l_151[0], &l_151[0], &l_151[0], &l_151[0], &l_151[0], &l_151[0], &l_151[0]}, {&l_151[0], &l_151[0], &l_151[0], &l_151[0], &l_151[0], &l_151[0], &l_151[0], &l_151[0], &l_151[0]}}};
                short l_157[10] = {2L, 0x26A7L, 0x61ADL, 0x61ADL, 0x26A7L, 2L, 0x26A7L, 0x61ADL, 0x61ADL, 0x26A7L};
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_117[i] = 0xDC7AB573L;
                if ((safe_add_func_int8_t_s_s(g_76, (safe_mul_func_int8_t_s_s(l_87[2][2], p_63)))))
                {
                    short l_106 = 0xC2FFL;
                    for (p_62 = (-4); (p_62 != (-15)); p_62 = safe_sub_func_int8_t_s_s(p_62, 5))
                    {
                        unsigned char l_105 = 0x54L;
                        int **l_108 = (void*)0;
                        int **l_109 = &g_75;
                        ++l_90;
                        l_107 = (safe_mod_func_int8_t_s_s(((g_26 < p_62) & (((safe_mul_func_uint8_t_u_u((&g_26 != &g_26), ((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((p_62 && g_76) && 0xCB0FL), g_76)), (safe_rshift_func_uint8_t_u_s(p_62, l_90)))), 3)) , l_90))) == l_105) >= g_76)), l_106));
                        (*l_109) = &g_26;

                        ;
                    }

                    ;
                    return p_63;
                }
                else
                {
                    g_110 = (g_76 ^ ((g_26 == g_26) | p_62));
                    if ((safe_rshift_func_int16_t_s_u(g_110, (safe_div_func_int32_t_s_s(p_62, p_62)))))
                    {
                        return g_110;
                    }
                    else
                    {
                        l_117[2] = (safe_sub_func_uint32_t_u_u(p_63, l_90));
                    }
                }
                for (l_66 = (-25); (l_66 != (-18)); ++l_66)
                {
                    int l_128[8] = {0x4AC9C96BL, 1L, 0x4AC9C96BL, 1L, 0x4AC9C96BL, 1L, 0x4AC9C96BL, 1L};
                    int **l_135[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_135[i] = &g_75;
                    l_128[2] = (safe_rshift_func_uint16_t_u_u(0x6E2CL, ((((safe_mod_func_int16_t_s_s((&l_117[2] == &l_66), p_63)) <= ((safe_mul_func_int16_t_s_s(g_26, (g_26 , ((0xFDL >= (l_128[2] < 0xED5AC3C9L)) , p_63)))) | p_62)) <= g_76) != g_110)));
                    for (p_62 = (-14); (p_62 != 10); ++p_62)
                    {
                        l_132--;
                        l_128[2] = p_63;
                    }
                    g_75 = &g_26;

                    ;
                    if (l_136[2][6])
                        continue;
                }

                ;
                if (p_63)
                {
                    int l_137 = 0x174CE2EAL;
                    if (l_137)
                    {
                        const char l_152 = 0x89L;
                        l_74 = &p_62;

                        ;
                        (*l_74) = 0L;
                        g_154 |= (((safe_rshift_func_int16_t_s_u(p_63, ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((((safe_div_func_int16_t_s_s(g_131, (safe_sub_func_int8_t_s_s(((0x3706L == l_117[2]) , 0xC7L), ((((safe_mul_func_uint8_t_u_u(((void*)0 == l_150), g_26)) || (l_152 , l_137)) < 0xAE57973FL) > p_62))))) , g_76) > l_153), 0)), l_152)) <= (*l_74)))) && g_110) && (-1L));
                    }
                    else
                    {
                        int *l_155 = &l_66;
                        (**l_150) = l_155;
                    }

                    ;
                    p_62 |= 1L;
                }
                else
                {
                    int **l_158[4] = {&l_74, &l_73[6][1][0], &l_74, &l_73[6][1][0]};
                    unsigned l_165 = 0UL;
                    int i;
                    if (l_90)
                    {
                        (**l_150) = &p_62;


                        l_157[2] = ((void*)0 == l_156[0][2][7]);
                    }
                    else
                    {
                        p_62 ^= (l_158[1] != &g_75);
                    }


                    for (g_76 = (-29); (g_76 >= 24); g_76 = safe_add_func_uint8_t_u_u(g_76, 1))
                    {
                        g_161++;
                        g_164 = (g_110 == g_26);
                        l_165 = p_62;
                    }
                }


                ;
            }
            else
            {
                g_166[5]++;
                return p_62;
            }


            ;
            ;
        }


        ;
        ;
    }
    else
    {
        for (g_164 = 0; (g_164 < 59); g_164++)
        {
            int *l_171 = &g_26;
            int **l_172 = (void*)0;
            int **l_173 = &g_75;
            int l_190 = (-1L);
            (*l_173) = l_171;

            ;
            l_190 |= (safe_add_func_uint16_t_u_u((*l_171), (g_76 , ((p_62 , &l_66) == ((+(((safe_mul_func_uint8_t_u_u(g_166[3], (safe_sub_func_int32_t_s_s((safe_div_func_uint16_t_u_u((!(p_63 == (*l_171))), (**l_173))), ((safe_lshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s(g_166[5], 0x9E9CL)), g_166[0])), 0x96E0L)), 3)) >= g_76))))) > 0x22L) , g_166[5])) , (void*)0)))));
            for (l_190 = 1; (l_190 >= 0); l_190 -= 1)
            {
                unsigned char l_192 = 4UL;
                for (g_154 = 0; (g_154 <= 1); g_154 += 1)
                {
                }
            }
            (*l_173) = &p_62;

            ;
        }


    }



    if (p_62)
    {
        short l_195[4];
        int i;
        for (i = 0; i < 4; i++)
            l_195[i] = 0xA972L;
        g_197--;
    }
    else
    {
        unsigned l_200 = 4294967295UL;
        int l_218 = 1L;
        int ** const l_264 = &l_73[6][1][0];
        l_200++;
        for (p_63 = 0; (p_63 >= 39); ++p_63)
        {
            short l_217 = (-1L);
            unsigned l_242 = 4294967295UL;
            char l_257 = (-3L);
            int l_269 = (-1L);
            if (p_63)
            {
                int **l_205 = (void*)0;
                int **l_206 = &g_75;
                (*l_206) = &g_26;

                ;
            }
            else
            {
                char l_231 = 1L;
                int *l_244 = &l_66;
                if (p_63)
                {
                    int l_215 = (-8L);
                    int l_219[10] = {0x50361599L, (-1L), 0x50361599L, (-1L), 0x50361599L, (-1L), 0x50361599L, (-1L), 0x50361599L, (-1L)};
                    int i;
                    l_217 &= (((safe_rshift_func_int8_t_s_s(l_209, 2)) < (!(safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u((((g_166[5] , (4294967295UL && ((((safe_div_func_int32_t_s_s(l_215, l_216)) ^ 0x3672L) ^ (~(g_196 >= (p_62 , p_63)))) , p_63))) , p_62) > p_63))), 0x7DE4L)))) | p_63);
                    if (p_62)
                        break;
                    g_220++;
                }
                else
                {
                    for (g_110 = 7; (g_110 == 5); --g_110)
                    {
                        int **l_228 = &g_75;
                        g_225[2]--;
                        (*l_228) = (g_196 , &g_26);

                        ;
                    }
                    if (l_217)
                        continue;
                }
                for (l_66 = 0; (l_66 != 16); l_66++)
                {
                    unsigned l_243 = 4UL;
                    int **l_245 = (void*)0;
                    int **l_246 = &g_75;
                    l_243 &= ((0x56EB59E7L || 0L) ^ (p_63 , (((l_231 , (p_63 && l_217)) , (safe_div_func_int32_t_s_s((safe_add_func_int8_t_s_s(((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((p_62 == g_131), p_62)), g_154)), 246UL)) != p_62), l_242)), 0xC222C936L))) | 0x2BC353FDL)));
                    (*l_246) = l_244;

                    ;
                }
                for (l_107 = 0; (l_107 != 1); ++l_107)
                {
                    int **l_252 = (void*)0;
                    if (l_217)
                        break;
                    for (g_164 = 0; (g_164 >= 43); g_164 = safe_add_func_uint8_t_u_u(g_164, 9))
                    {
                        char l_251 = (-5L);
                        return l_251;


                    }
                    l_73[7][8][0] = &g_26;
                }
                if (p_62)
                    continue;
            }
            for (l_66 = 26; (l_66 <= (-4)); l_66--)
            {
                short l_258[6];
                int l_259 = (-4L);
                int i;
                for (i = 0; i < 6; i++)
                    l_258[i] = 8L;
                if (p_63)
                {
                    g_75 = &l_66;

                    ;
                }
                else
                {
                    if (((g_110 & ((((safe_mod_func_uint16_t_u_u(((p_62 , &g_26) == &g_26), l_257)) == g_220) != ((g_225[2] , &g_75) != (void*)0)) & p_62)) <= p_62))
                    {
                        p_62 |= l_258[4];
                        return l_259;


                    }
                    else
                    {
                        l_269 = (safe_mod_func_int32_t_s_s((p_62 , ((((g_154 == (&l_73[6][4][1] != l_264)) < (safe_rshift_func_uint16_t_u_u((g_267 == &g_268), 15))) != p_62) , p_62)), 0x8C49E032L));
                    }
                }
            }
            l_269 = l_257;
            for (l_257 = 0; l_257 < 6; l_257 += 1)
            {
                g_225[l_257] = 1UL;
            }
        }


        (*g_267) = &l_73[6][1][0];

        ;
    }



    return g_161;



}





int main (void)
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_166[i], "g_166[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_225[i], "g_225[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
