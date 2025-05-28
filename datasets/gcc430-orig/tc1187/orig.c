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



static unsigned short g_24 = 0x2F67L;
static unsigned short g_30 = 0xD9D0L;
static int * const g_49 = (void*)0;
static int g_51 = 0xB314B812L;
static char g_71 = 0L;
static unsigned short g_74 = 0xEBF6L;
static int g_76 = 0x161DBFA2L;
static short g_87 = 8L;
static unsigned short g_89 = 0UL;
static int g_91 = 0x5F4E4D73L;
static unsigned g_104 = 1UL;
static int *g_107 = (void*)0;
static unsigned *g_121 = (void*)0;
static int g_130 = 0x9CE03596L;
static unsigned char g_159 = 255UL;
static unsigned char g_160 = 0x60L;
static short g_163 = (-5L);
static volatile unsigned short ***g_262 = (void*)0;
static volatile unsigned char g_279 = 255UL;
static unsigned **g_285 = &g_121;
static unsigned ***g_284 = &g_285;
static unsigned short g_322 = 65531UL;
static unsigned g_326 = 2UL;
static short g_333 = 0L;
static unsigned short *g_388 = (void*)0;
static unsigned short **g_387 = &g_388;
static unsigned short *** const g_386 = &g_387;
static int *g_419 = &g_51;
static unsigned g_435 = 0xAD230726L;
static int g_439 = (-7L);



static unsigned func_1(void);
static unsigned char func_4(unsigned short p_5, short p_6, unsigned p_7, char p_8, short p_9);
static unsigned short func_10(unsigned p_11);
static int * func_14(short p_15, int p_16, unsigned char p_17);
static unsigned char func_20(unsigned short p_21, int p_22);
static int func_25(short p_26);
static int func_28(unsigned char p_29);
static int func_34(int p_35, const int p_36, int * p_37, const unsigned short * p_38, unsigned p_39);
static int func_40(unsigned short * p_41, int * p_42, const char p_43, unsigned p_44, unsigned p_45);
static unsigned short * func_46(unsigned char p_47, int * const p_48);
static unsigned func_1(void)
{
    unsigned l_12 = 0x22B16580L;
    short *l_162 = &g_163;
    unsigned short l_164 = 65535UL;
    unsigned short *l_175 = &l_164;
    unsigned short **l_174 = &l_175;
    unsigned short ***l_173 = &l_174;
    int *l_438 = &g_439;
    (*l_438) &= (safe_div_func_uint8_t_u_u(func_4(func_10(l_12), l_12, (((((((*l_162) = (0x30DBL >= g_160)) | g_160) , (l_164 | (safe_lshift_func_int16_t_s_u((g_163 > (safe_sub_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((((((safe_mod_func_uint16_t_u_u(65535UL, l_164)) && g_163) | l_164) || l_12) == g_163), 0)) || l_12), 0xC22DL))), 13)))) == g_160) , l_173) == &l_174), l_164, l_12), l_164));

    ;

    ;
    return (*l_438);
}







static unsigned char func_4(unsigned short p_5, short p_6, unsigned p_7, char p_8, short p_9)
{
    char *l_178 = &g_71;
    unsigned char *l_179 = &g_160;
    int l_182 = 0x8BA2E113L;
    unsigned short *l_184 = &g_30;
    unsigned short **l_183 = &l_184;
    int *l_187 = (void*)0;
    unsigned * const *l_188 = &g_121;
    const unsigned short *l_189 = &g_30;
    unsigned ***l_286 = &g_285;
    int l_296 = (-1L);
    int **l_341 = &g_107;
    const unsigned l_364 = 4294967295UL;
    int l_375 = 0x1323F175L;
    (*g_107) = ((g_163 , p_9) <= (0UL || (p_7 || (g_76 >= (p_7 >= g_130)))));
    if ((((safe_mod_func_uint8_t_u_u((((*l_178) ^= p_6) | ((*l_179) &= 0x8EL)), (safe_sub_func_int32_t_s_s((l_182 , func_40(((*l_183) = &p_5), &l_182, (safe_div_func_uint8_t_u_u(func_34(l_182, (&g_121 != (((!(l_187 == l_187)) && p_6) , l_188)), &l_182, l_189, l_182), 1L)), p_9, p_9)), (*g_107))))) <= 0xD4L) | 9UL))
    {
        int *l_192 = &g_130;
        int **l_193 = (void*)0;
        int **l_194 = &g_107;
        (*l_194) = func_14(p_5, (*g_107), (g_159 = (safe_lshift_func_uint8_t_u_u(l_182, (g_71 <= (func_34(l_182, ((*l_192) = (0L & (g_51 = p_7))), l_192, (*l_183), g_160) , p_8))))));
        (*g_107) = (p_7 && p_7);
        (**l_194) = (*g_107);
    }
    else
    {
        unsigned l_197 = 0UL;
        char l_216 = 0x78L;
        unsigned char *l_236 = (void*)0;
        int *l_238 = &l_182;
        unsigned char *l_338 = &g_160;
        const short l_357 = 0x9FDDL;
        int **l_391 = &g_107;
        (*g_107) = (l_182 = (((safe_rshift_func_uint8_t_u_u(0UL, p_8)) && l_197) == (g_130 == g_51)));
        if ((g_130 & (safe_rshift_func_uint8_t_u_s(g_159, 0))))
        {
            unsigned short *l_208 = (void*)0;
            unsigned short *l_209 = &g_74;
            int l_210 = 1L;
            const unsigned short l_261 = 0x7854L;
            unsigned short ***l_263 = (void*)0;
            unsigned **l_265 = &g_121;
            if ((safe_mod_func_int32_t_s_s(((safe_sub_func_int8_t_s_s(l_182, l_197)) < (safe_rshift_func_uint16_t_u_s(p_5, 0))), ((((*l_209) = ((g_89 = (safe_sub_func_uint16_t_u_u(((void*)0 == &g_24), g_71))) != 0x187FL)) , l_210) ^ 1UL))))
            {
                unsigned l_215 = 1UL;
                const unsigned short *l_217 = &g_24;
                int *l_224 = &l_182;
                (*g_107) = p_7;
                for (p_7 = (-25); (p_7 <= 20); p_7 = safe_add_func_int32_t_s_s(p_7, 4))
                {
                    l_182 = p_7;
                }
                (*g_107) = l_182;
                (*l_224) &= func_10(((l_210 , (1L >= (safe_rshift_func_uint16_t_u_u(0UL, 7)))) , ((safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(p_6, 1L)), l_215)) | p_9)));
            }
            else
            {
                unsigned l_235 = 0x3CB28DBCL;
                char *l_237 = &l_216;
                unsigned *l_242 = &g_104;
                if ((func_34(p_6, func_28((((safe_rshift_func_int16_t_s_s((l_216 & p_7), 0)) & ((*l_179) = (safe_lshift_func_int8_t_s_s(0xF4L, (((safe_add_func_int32_t_s_s(((((((((*l_178) ^= (g_130 & func_34(((safe_div_func_uint16_t_u_u((safe_add_func_int8_t_s_s((l_197 < ((0xFAA44792L | l_235) > ((g_30 , p_7) ^ 65529UL))), g_74)), (-1L))) , (*g_107)), p_6, &g_91, (*l_183), g_24))) & l_216) || p_6) , 4294967288UL) , l_178) != l_236) <= l_182), 0UL)) , &g_71) == l_237))))) && g_76)), l_238, (*l_183), l_182) , 0xAD4E58FDL))
                {
                    short l_243 = (-9L);
                    (*g_107) = ((void*)0 == &l_210);
                    (*g_107) ^= (0xB5L > l_235);
                    for (p_8 = 22; (p_8 >= 17); --p_8)
                    {
                        const unsigned *l_241 = &g_104;
                        (*l_238) = ((l_241 != l_242) >= l_243);
                    }
                    return g_163;
                }
                else
                {
                    unsigned char l_252 = 255UL;
                    for (p_7 = 6; (p_7 == 18); ++p_7)
                    {
                        unsigned l_253 = 4294967288UL;
                        short *l_254 = &g_87;
                        int l_264 = (-5L);
                        unsigned ***l_266 = &l_265;
                        (*l_238) = (safe_rshift_func_uint16_t_u_u(func_28((((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((((*l_266) = (func_10(func_34(l_252, g_51, func_14(((*l_254) = (((*l_209) |= ((g_24 & (l_264 = ((func_20(func_20(l_253, p_8), (((*l_254) = p_7) < ((safe_div_func_int8_t_s_s((safe_div_func_int32_t_s_s(((((safe_add_func_uint32_t_u_u(l_252, 0UL)) == 0x90L) <= l_253) | l_261), p_6)), g_89)) || l_253))) , g_262) != l_263))) <= l_210)) , 0x5A48L)), l_235, l_235), &g_30, p_9)) , l_265)) == (void*)0), g_163)), l_253)) , 0x5087B765L) , 0x83L)), l_235));
                    }
                    return g_24;
                }
            }
        }
        else
        {
            unsigned l_277 = 6UL;
            int l_278 = 0L;
            unsigned short *l_280 = &g_30;
            int l_281 = (-1L);
            unsigned ***l_287 = &g_285;
            unsigned *l_288 = &g_104;
            int l_303 = (-7L);
            unsigned char l_311 = 0x0BL;
            int *l_312 = &g_76;
            unsigned char l_313 = 0xFCL;
            int **l_334 = (void*)0;
            const int *l_336 = &l_281;
            const int **l_335 = &l_336;
            l_281 = (safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(((((*l_280) = (((*l_184) = (safe_rshift_func_uint16_t_u_u(l_182, ((~((safe_add_func_uint8_t_u_u((*l_238), (func_28(((*l_238) || (((safe_lshift_func_uint16_t_u_s((l_278 = ((**l_183) = (l_182 | l_277))), p_9)) > (((((*l_280) = ((p_9 ^ g_279) , (p_9 && (*l_238)))) || 0x825AL) & 0xB9L) , 0x8572L)) , g_104))) < l_182))) & g_160)) | 0x726EC9F8L)))) > l_277)) & g_159) == l_182), (*l_238))), 9));

            ;
            if (func_28(((safe_sub_func_int32_t_s_s(((g_87 , g_284) != (l_287 = l_286)), ((*l_288) = p_7))) > p_6)))
            {
                unsigned char **l_293 = (void*)0;
                unsigned char **l_294 = &l_179;
                const int l_295 = 9L;
                unsigned char l_297 = 0UL;
                unsigned *l_304 = &l_197;
                unsigned *** const l_309 = &g_285;
                int *l_310 = &l_281;
                l_296 ^= (((&g_130 == &g_130) > (safe_div_func_uint16_t_u_u(0xB75FL, 0xA5A1L))) >= ((!l_182) , (safe_add_func_int16_t_s_s((p_7 ^ func_34((2L == ((((*l_294) = l_236) != (((void*)0 == &p_6) , l_236)) >= g_76)), l_295, l_238, &g_24, g_91)), l_281))));

                ;
                (*g_107) |= l_297;
                (*l_238) = (safe_add_func_uint8_t_u_u((((*l_304) &= ((l_278 ^= (((*l_238) & ((safe_add_func_int16_t_s_s((((safe_unary_minus_func_uint16_t_u((l_303 <= func_25(p_6)))) > p_5) >= ((l_304 == (void*)0) <= (safe_sub_func_uint8_t_u_u(l_296, ((safe_div_func_int32_t_s_s(((*l_310) = (&g_285 == l_309)), 0x76B83E55L)) || 0x1EEEL))))), 8L)) , (-3L))) >= g_160)) , 0xBC719AC7L)) <= l_311), g_160));
                l_312 = &l_278;

                ;
            }
            else
            {
                int *l_314 = (void*)0;
                unsigned *l_323 = &l_197;
                unsigned *l_324 = (void*)0;
                unsigned *l_325 = &g_326;
                unsigned l_331 = 0xA0293A83L;
                short *l_332 = &g_333;
                (*l_238) &= (l_313 , (+(l_314 != (void*)0)));
                (*g_107) = ((func_40(&g_89, &l_182, g_130, p_8, p_7) == p_8) , (*l_238));
                if ((g_87 & g_51))
                {
                    (*g_107) = p_7;
                }
                else
                {
                    int **l_317 = &l_238;
                    for (g_130 = 18; (g_130 < 12); --g_130)
                    {
                        return g_74;
                    }
                    (*l_317) = &g_76;

                    ;
                    (*g_107) = (((p_5 , (**l_317)) , l_182) , (*l_238));
                    if (p_7)
                    {
                        (*g_107) = ((*l_238) = (-1L));
                    }
                    else
                    {
                        (*g_107) ^= (*l_312);
                        (*l_317) = l_238;
                    }
                }

                ;
                (*g_107) = (((*l_332) &= (safe_sub_func_int16_t_s_s((g_24 & (~((((safe_add_func_uint16_t_u_u((g_163 < (*l_238)), p_8)) == (*l_238)) , ((*l_325) = ((*l_323) = ((*l_288) |= g_322)))) ^ ((safe_lshift_func_uint8_t_u_s(p_7, 3)) , (((safe_lshift_func_int16_t_s_s(l_296, (((4294967289UL <= l_331) >= (*l_312)) | (*g_107)))) ^ g_24) , 0xB3C05E57L))))), g_87))) && (-8L));
            }

            ;
            ;
            ;
            (*l_335) = ((l_182 |= 0x12A338AAL) , (((l_296 , l_182) > p_9) , (void*)0));

            ;
            (*l_335) = &l_182;

            ;
        }

        ;
        ;
        ;
        if (func_20((((void*)0 == &p_5) , ((safe_unary_minus_func_uint8_t_u(((*l_338) = g_76))) ^ (safe_sub_func_int32_t_s_s(((*g_107) = (l_296 <= (&l_238 == l_341))), ((*l_238) , (p_7 >= (*l_238))))))), (*l_238)))
        {
            unsigned l_350 = 7UL;
            const unsigned short *l_351 = &g_322;
            int *l_372 = &l_182;
            int l_415 = 0x0E0FF557L;
            (*l_238) &= p_5;
            for (p_9 = 12; (p_9 <= (-28)); p_9 = safe_sub_func_int8_t_s_s(p_9, 1))
            {
                (**l_341) = (p_7 ^ ((**l_183) = 0x7CC7L));
            }
            if (p_5)
            {
                int *l_352 = &l_182;
                (*l_352) &= (safe_mod_func_uint8_t_u_u((((((safe_div_func_int16_t_s_s(p_7, (((safe_mod_func_uint16_t_u_u(func_25(g_322), 0xE671L)) | ((g_160 = l_350) | ((l_351 == (void*)0) & g_279))) , 65535UL))) > p_8) != g_322) , p_8) <= g_24), g_333));

                ;
                g_91 &= (safe_mod_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((l_357 , 3UL), ((safe_add_func_int32_t_s_s((safe_div_func_uint16_t_u_u(6UL, p_5)), ((((*l_178) |= p_6) , p_9) < (safe_mod_func_int32_t_s_s(func_40((g_76 , &p_5), &g_51, l_364, (**l_341), (*l_238)), 0x61A3FA46L))))) > l_350))) == 0xA659L), (*l_352)));
            }
            else
            {
                unsigned short *l_371 = &g_89;
                int l_393 = 0x46B94CA9L;
                for (g_104 = (-22); (g_104 > 29); ++g_104)
                {
                    int *l_378 = &g_91;
                    int l_379 = 0x3219D2F7L;
                    (*l_238) = (-1L);
                    l_379 |= (((*l_184) = (func_34(((p_6 == (p_9 = (safe_lshift_func_int8_t_s_u(g_160, 4)))) , p_7), (!(!((safe_mod_func_uint16_t_u_u(func_40(l_371, l_372, g_159, ((safe_sub_func_uint32_t_u_u((l_375 = p_5), (safe_rshift_func_int8_t_s_u(g_74, (g_24 & g_160))))) > p_7), (*l_372)), p_8)) , g_30))), l_378, &g_89, (*l_378)) ^ 0x54L)) , (*l_372));
                }
                (**l_391) = 1L;
                if (((((**l_341) == 0x3EB5L) < (0xDFL >= l_393)) , ((**l_341) = ((void*)0 != &l_238))))
                {
                    int *l_418 = (void*)0;
                    unsigned *l_430 = &g_104;
                    g_419 = ((*l_391) = l_418);

                    ;
                    ;
                    (*l_238) = ((safe_mod_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_mod_func_int8_t_s_s((l_393 & ((safe_sub_func_uint8_t_u_u((((1L > (((g_159 | (1L & p_6)) | (*l_372)) < (((void*)0 != &g_387) == (func_20((safe_sub_func_uint8_t_u_u((((*l_430) = p_6) < 0xEE21C4F0L), 0x1BL)), (*l_372)) <= 0x4CB6625CL)))) < p_8) == g_279), 4L)) || p_8)), g_74)), g_89)), g_51)) && l_393);

                    ;
                    (*g_284) = &l_430;

                    ;
                    (*l_391) = (void*)0;

                    ;
                }
                else
                {
                    int * const l_431 = &l_393;
                    unsigned *l_434 = (void*)0;
                    if ((**l_341))
                    {
                        (*l_341) = &g_91;

                        ;
                    }
                    else
                    {
                        int **l_432 = (void*)0;
                        int **l_433 = &l_372;
                        (*l_433) = l_431;

                        ;
                    }

                    ;
                    ;
                    (**l_341) = (((g_435 = p_8) , g_71) , (*l_372));
                }

                ;

                ;
                ;
                return l_393;
            }

            ;
        }
        else
        {
            short l_436 = 0xD5F5L;
            int l_437 = 0x7561DF37L;
            l_436 = p_7;
            (*l_341) = func_14(g_159, (*g_107), g_159);

            ;
            l_437 = p_9;
        }

        ;
    }

    ;
    ;
    ;
    return (**l_341);
}







static unsigned short func_10(unsigned p_11)
{
    char l_13 = 0xC6L;
    unsigned short *l_23 = &g_24;
    unsigned l_27 = 0UL;
    int *l_134 = &g_130;
    unsigned short **l_156 = &l_23;
    unsigned short ***l_155 = &l_156;
    unsigned char *l_157 = (void*)0;
    unsigned char *l_158 = &g_159;
    int **l_161 = &g_107;
    (*l_161) = (l_13 , func_14((((*l_158) &= ((safe_mod_func_uint8_t_u_u(func_20(((*l_23) = 65535UL), ((*l_134) = func_25(l_27))), ((safe_add_func_uint8_t_u_u((((l_13 != p_11) | l_27) & (((((*l_155) = &l_23) == (void*)0) & l_27) >= l_27)), 254UL)) | l_13))) , 250UL)) | 0xA6L), p_11, g_160));

    ;
    return (**l_161);
}







static int * func_14(short p_15, int p_16, unsigned char p_17)
{
    (*g_107) = p_16;
    return &g_91;


}







static unsigned char func_20(unsigned short p_21, int p_22)
{
    int **l_135 = &g_107;
    int l_136 = (-1L);
    int *l_139 = &g_130;
    char *l_140 = &g_71;
    unsigned l_147 = 4294967290UL;
    int l_148 = 0xA87E6343L;
    unsigned short l_151 = 0xF584L;
    int *l_152 = &l_148;
    (*l_135) = (void*)0;

    ;
    (*l_135) = (l_136 , &g_76);

    ;
    (*l_152) = ((*g_107) = ((safe_rshift_func_uint8_t_u_u((0xE8C80964L && (((*l_140) = (&g_130 != l_139)) || g_104)), 5)) , ((**l_135) ^ (safe_sub_func_uint16_t_u_u(0x4249L, ((safe_sub_func_int32_t_s_s((g_91 = (safe_rshift_func_uint16_t_u_s(l_147, ((l_148 | (safe_div_func_int16_t_s_s((**l_135), (**l_135)))) ^ p_21)))), p_22)) , l_151))))));
    return g_24;
}







static int func_25(short p_26)
{
    int l_133 = 0x1EAD213BL;
    l_133 &= func_28(g_30);
    return p_26;
}







static int func_28(unsigned char p_29)
{
    int *l_50 = &g_51;
    const unsigned short *l_131 = &g_89;
    int l_132 = (-6L);
    for (g_30 = 3; (g_30 == 22); g_30 = safe_add_func_uint32_t_u_u(g_30, 4))
    {
        char l_33 = 5L;
        int *l_90 = &g_91;
        int **l_102 = &l_50;
        unsigned *l_103 = &g_104;
        short l_105 = 0x2DC1L;
        unsigned short *l_106 = &g_89;
        unsigned char l_118 = 253UL;
        unsigned **l_122 = &l_103;
        int *l_129 = &g_130;
        (*l_90) = ((!(p_29 == l_33)) >= func_34((p_29 && l_33), ((g_89 = ((func_40(func_46((g_49 != l_50), &g_51), l_50, g_30, p_29, p_29) >= 0x808E27FBL) || l_33)) == 4UL), l_90, &g_30, p_29));
        g_107 = ((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u(g_30)), (((((*l_50) = (-10L)) == ((*l_103) &= (safe_lshift_func_int8_t_s_s(((*l_90) & g_71), (l_102 != (void*)0))))) & (p_29 >= (g_74 , (((((*l_106) |= l_105) != g_71) < p_29) , 7UL)))) && p_29))) , &g_51);

        ;
        (*l_90) = (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_div_func_int32_t_s_s(((*g_107) = (safe_div_func_int8_t_s_s((-1L), p_29))), (-6L))) >= (g_104 , g_76)), 0)), (*l_90)));
        (*l_90) = ((*l_90) > (safe_mod_func_int32_t_s_s((safe_div_func_int32_t_s_s((*l_90), ((*l_50) = ((((safe_mod_func_int32_t_s_s(func_34(((*l_50) = (-1L)), ((*l_129) = (*l_90)), l_50, l_131, g_104), p_29)) <= p_29) , p_29) & l_132)))), 0x933AC5CEL)));
    }
    return p_29;
}







static int func_34(int p_35, const int p_36, int * p_37, const unsigned short * p_38, unsigned p_39)
{
    int *l_92 = &g_76;
    int **l_93 = &l_92;
    (*l_92) |= g_91;
    (*l_93) = l_92;
    for (g_87 = 2; (g_87 > 11); ++g_87)
    {
        unsigned char l_96 = 6UL;
        (*l_93) = &p_35;

        ;
        (**l_93) = l_96;
    }

    ;
    return (*p_37);
}







static int func_40(unsigned short * p_41, int * p_42, const char p_43, unsigned p_44, unsigned p_45)
{
    int *l_78 = &g_76;
    int l_82 = 0x2CA01DC0L;
    l_78 = (void*)0;

    ;
    for (p_44 = 0; (p_44 <= 57); ++p_44)
    {
        int **l_81 = &l_78;
        (*l_81) = &g_76;

        ;
        l_82 ^= ((**l_81) = (*p_42));
    }

    ;
    for (l_82 = 0; (l_82 < (-22)); l_82 = safe_sub_func_uint16_t_u_u(l_82, 6))
    {
        unsigned short l_85 = 65535UL;
        short *l_86 = &g_87;
        int **l_88 = &l_78;
        if (((*p_42) |= (((l_85 <= (p_44 != 249UL)) , ((*l_86) = (0x0B1CL && p_43))) , (-1L))))
        {
            if ((*p_42))
                break;
        }
        else
        {
            return (*p_42);
        }
        (*l_88) = &g_51;

        ;
    }

    ;
    return g_76;
}







static unsigned short * func_46(unsigned char p_47, int * const p_48)
{
    unsigned short * const l_54 = &g_30;
    const int l_58 = 0x763523E2L;
    unsigned short l_69 = 0x3530L;
    char *l_70 = &g_71;
    int l_72 = 0L;
    unsigned short *l_73 = &g_74;
    int *l_75 = &g_76;
    unsigned short *l_77 = &g_74;
    g_51 = 1L;
    for (p_47 = 0; (p_47 >= 34); ++p_47)
    {
        unsigned l_55 = 0xE1F9531DL;
        unsigned short *l_57 = (void*)0;
        unsigned short **l_56 = &l_57;
        (*p_48) &= ((void*)0 != l_54);
        (*p_48) = l_55;
        (*p_48) ^= (((*l_56) = &g_30) != l_54);

        ;
    }
    (*p_48) ^= l_58;
    (*l_75) |= ((safe_mod_func_int32_t_s_s(((((*l_73) ^= (safe_sub_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u((g_30 ^ (safe_add_func_int32_t_s_s(((*p_48) = (0L < (*p_48))), ((((void*)0 != p_48) , l_54) == l_54)))), (safe_lshift_func_int8_t_s_s((l_72 &= ((*l_70) = (g_30 > l_69))), 5)))) ^ 0x56L) ^ 0xB30732BAL), 1UL))) && 2UL) & 0x5AL), g_30)) ^ 0x20L);
    return l_77;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_322, "g_322", print_hash_value);
    transparent_crc(g_326, "g_326", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_435, "g_435", print_hash_value);
    transparent_crc(g_439, "g_439", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
