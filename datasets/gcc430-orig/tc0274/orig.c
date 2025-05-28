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
   unsigned char f0;
   int f1;
   unsigned short f2;
   unsigned f3;
   short f4;
   int f5;
   unsigned f6;
   unsigned char f7;
   int f8;
   unsigned char f9;
};


static short g_8 = 0L;
static int g_43 = 0x276AC116L;
static unsigned char g_67 = 0x26L;
static int g_80 = 0x8F781BE2L;
static struct S0 g_83 = {0xEDL,0xD6825D0BL,0x5DE3L,0xEA3BBE75L,0x88AFL,0x007DFDCBL,0x3393A39DL,1UL,0xFBF73ECBL,0xAEL};
static struct S0 g_118 = {5UL,0x6B0045B3L,0xFEB1L,4294967294UL,0x27AFL,-6L,0UL,0x1AL,0x9BBF73BCL,4UL};
static unsigned g_130 = 0x63812DD2L;
static int *g_143 = &g_80;
static int **g_142 = &g_143;
static short g_149 = 0L;
static unsigned g_201 = 1UL;
static short *g_221 = &g_83.f4;
static short **g_220 = &g_221;
static unsigned short *g_225 = &g_118.f2;
static char g_256 = 0L;
static int g_270 = 0L;
static short g_327 = 0x981CL;
static unsigned g_345 = 0UL;



static unsigned short func_1(void);
static int func_2(int p_3, int p_4, unsigned short p_5, unsigned short p_6, unsigned p_7);
static unsigned char func_12(unsigned short p_13, short p_14, short p_15);
static char func_30(unsigned short p_31, unsigned char p_32, int p_33);
static int func_36(short p_37, unsigned p_38);
static unsigned short func_39(unsigned p_40);
static int * func_46(unsigned char p_47, short p_48, int * p_49);
static int * func_51(int * p_52);
static unsigned char func_61(unsigned short p_62);
static int func_63(char p_64, unsigned p_65, char p_66);
static unsigned short func_1(void)
{
    unsigned char l_9 = 0xFCL;
    unsigned short l_34 = 1UL;
    int l_239 = 0xC106F47BL;
    int *l_360 = &g_43;
    int l_361 = 1L;
    (*l_360) = func_2(g_8, l_9, (safe_lshift_func_uint8_t_u_s(func_12(((safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_div_func_uint8_t_u_u((g_8 && (1UL | ((((*g_221) = (4294967295UL >= ((safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u(1UL, (safe_lshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u(l_9, l_9)), 0)))), func_30(g_8, g_8, l_34))) || (-1L)))) ^ l_34) ^ 65528UL))), l_9)), 255UL)), g_8)) <= 0x5256L), g_8, l_239), 0)), g_270, g_8);


    ;

    ;
    return l_361;
}







static int func_2(int p_3, int p_4, unsigned short p_5, unsigned short p_6, unsigned p_7)
{
    int l_359 = 7L;
    l_359 |= p_5;
    return l_359;
}







static unsigned char func_12(unsigned short p_13, short p_14, short p_15)
{
    int *l_240 = &g_80;
    unsigned char l_246 = 0UL;
    struct S0 *l_248 = &g_118;
    int l_263 = 0x5E9A02EEL;
    unsigned l_307 = 0x827867CCL;
    unsigned *l_338 = &g_118.f3;
    unsigned **l_337 = &l_338;
    if (((*l_240) = ((void*)0 == &p_13)))
    {
        for (g_83.f0 = 0; (g_83.f0 > 32); ++g_83.f0)
        {
            unsigned l_243 = 0xB4F5F1F4L;
            l_243 |= (*l_240);
        }
        for (g_67 = 0; (g_67 > 12); g_67++)
        {
            (*l_240) = l_246;
        }
    }
    else
    {
        struct S0 *l_247 = &g_118;
        char *l_255 = &g_256;
        int l_257 = (-7L);
        unsigned l_308 = 1UL;
        l_248 = l_247;
        if (((l_257 = (safe_lshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s(0L, (safe_mod_func_int8_t_s_s(((*l_255) = ((0x87FCL > (((*g_225) != 9UL) & ((func_61((*l_240)) == (*g_221)) && 0x6AL))) & ((*g_221) | 0x5F9BL))), l_257)))), 2))) == g_118.f0))
        {
            int ***l_258 = &g_142;
            unsigned *l_264 = &g_83.f3;
            int *l_271 = &g_80;
            int **l_272 = &g_143;
            (*l_258) = (void*)0;

            ;
            l_240 = (void*)0;

            ;
            (*l_271) &= ((*g_225) & 0x3443L);
            (*l_272) = (void*)0;

            ;
        }
        else
        {
            unsigned l_282 = 0x222C9369L;
            int *l_294 = &l_257;
            int l_320 = 0xB1380094L;
            struct S0 l_328 = {0xB1L,0x83FA38E5L,1UL,0xF6D356F0L,0x3EEBL,-1L,0xCA378054L,0x61L,0x98E5B0AAL,249UL};
            unsigned l_334 = 4294967295UL;
            for (g_118.f1 = (-1); (g_118.f1 >= 4); ++g_118.f1)
            {
                char l_281 = (-5L);
                unsigned char *l_319 = &g_118.f0;
                unsigned *l_321 = (void*)0;
                unsigned *l_322 = &g_201;
                unsigned *l_323 = &g_118.f3;
                int l_324 = 1L;
                short *l_325 = &g_118.f4;
                short *l_326 = &g_327;
                struct S0 l_331 = {0xE8L,-6L,0x3303L,2UL,0xE1CEL,1L,4294967288UL,0x69L,0x1CA62E3CL,0UL};
                if ((l_257 = p_13))
                {
                    short l_283 = 9L;
                    int **l_284 = &l_240;
                    int **l_285 = &g_143;
                    for (g_118.f2 = 19; (g_118.f2 == 41); ++g_118.f2)
                    {
                        short *l_279 = &g_118.f4;
                        l_281 &= ((safe_add_func_uint16_t_u_u((l_279 != (void*)0), (func_61(l_257) <= 0xEA0349FBL))) <= (safe_unary_minus_func_int16_t_s(p_15)));
                        g_83 = g_83;
                        l_282 = (p_13 || 9UL);
                        if (l_283)
                            break;
                    }
                    (*l_285) = ((*l_284) = &g_43);

                    ;
                    ;
                    (*g_143) = (**l_284);
                }
                else
                {
                    int l_286 = 0xB2420772L;
                    if ((((((((p_13 >= (((*l_240) ^= l_286) && (safe_rshift_func_int16_t_s_u(p_15, p_14)))) || (safe_unary_minus_func_int32_t_s(p_13))) <= ((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((l_294 == (void*)0), 0)), p_13)) < ((p_14 != (*l_294)) || 0x44F4L))) | (*g_221)) >= l_263) == g_83.f3) <= 0x9037L))
                    {
                        int *l_295 = (void*)0;
                        unsigned short l_296 = 0x3FFBL;
                        g_143 = l_295;

                        ;
                        if (l_296)
                            continue;
                        return g_83.f4;
                    }
                    else
                    {
                        return g_83.f5;
                    }
                }

                ;
                ;
                if ((safe_add_func_int16_t_s_s((65530UL || 0UL), ((*l_326) ^= ((*l_325) = ((safe_add_func_uint32_t_u_u((l_324 = ((((*l_323) = ((*l_322) &= (((*g_225) &= (safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((((safe_add_func_uint16_t_u_u(((l_307 & func_61(l_308)) < (0xE8L != (l_320 = (+(0x3425L < ((*g_221) = (safe_mod_func_int8_t_s_s(((*g_143) & ((safe_sub_func_uint32_t_u_u(((((*l_319) = (((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(p_15, 7UL)), 12)), 0x34C2L)) <= p_13) < p_15)) < g_83.f3) ^ p_14), g_118.f1)) && 0xD2CD2175L)), 0xBEL)))))))), p_13)) <= (-1L)) | 0L), 4)), p_14))) || p_14))) | g_256) >= g_83.f9)), p_15)) > g_149))))))
                {
                    struct S0 *l_329 = &l_328;
                    int **l_330 = &l_240;
                    (*l_329) = l_328;
                    (*l_330) = func_51(&l_257);
                    l_331 = (*l_248);
                }
                else
                {
                    unsigned ***l_339 = &l_337;
                    int l_342 = 0L;
                    for (l_281 = 10; (l_281 < (-24)); --l_281)
                    {
                        (*l_240) |= l_334;
                        (*l_240) = (*g_143);
                        (*l_294) = ((safe_add_func_uint16_t_u_u(p_14, 0x0F53L)) > p_13);
                        (*l_294) = ((-6L) != ((*l_255) |= g_83.f9));
                    }
                    (*l_339) = l_337;
                    (*g_143) = (((safe_add_func_uint8_t_u_u(((*l_319) = func_61(l_342)), (p_14 <= ((safe_lshift_func_int16_t_s_u(((*l_325) ^= ((*l_326) = p_13)), g_345)) <= ((*l_294) = (safe_add_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(1UL, (safe_rshift_func_uint16_t_u_s(l_342, 7)))) ^ 1L), ((safe_div_func_uint8_t_u_u((*l_294), p_14)) && 0x14L)))))))) < p_14) || p_14);
                }
            }


            ;
            (*l_248) = g_83;
            if (p_14)
            {
                for (g_118.f1 = 28; (g_118.f1 >= (-8)); g_118.f1 = safe_sub_func_uint16_t_u_u(g_118.f1, 1))
                {
                    int **l_356 = (void*)0;
                    int **l_357 = &l_294;
                    (*l_357) = &l_257;
                    return g_345;
                }
            }
            else
            {
                int **l_358 = &g_143;
                (*l_358) = (void*)0;

                ;
            }
            (*l_247) = (*l_248);
        }


        ;
    }


    ;
    return p_14;
}







static char func_30(unsigned short p_31, unsigned char p_32, int p_33)
{
    int l_35 = 0x9A023703L;
    int *l_237 = (void*)0;
    int *l_238 = &l_35;
    p_33 = ((~4294967295UL) || l_35);
    (*l_238) = (g_8 == func_36(p_31, p_33));


    ;

    ;
    return p_32;
}







static int func_36(short p_37, unsigned p_38)
{
    int l_199 = (-8L);
    unsigned *l_200 = &g_201;
    unsigned **l_202 = &l_200;
    unsigned *l_203 = &g_201;
    unsigned **l_204 = (void*)0;
    unsigned **l_205 = (void*)0;
    unsigned **l_206 = &l_203;
    unsigned l_209 = 0xBACBEA55L;
    short l_214 = 0xF3EFL;
    unsigned short *l_222 = &g_118.f2;
    unsigned short *l_224 = &g_83.f2;
    int *l_236 = (void*)0;
    if ((((((l_199 = func_39(p_37)) >= (((*l_202) = l_200) != ((*l_206) = l_203))) < 4294967293UL) || 0UL) && (p_37 & (l_199 = 0L))))
    {
        struct S0 *l_210 = (void*)0;
        struct S0 *l_211 = &g_118;
        struct S0 *l_212 = &g_83;
        int **l_213 = &g_143;
        (*g_143) = (safe_rshift_func_uint16_t_u_s(l_209, 3));
        (*l_212) = ((*l_211) = g_118);
        (*l_213) = &l_199;

        ;
    }
    else
    {
        int **l_215 = &g_143;
        short *l_219 = &g_118.f4;
        short **l_218 = &l_219;
        unsigned short **l_223 = &l_222;
        (*g_143) ^= l_214;
        (*l_215) = &l_199;

        ;
        (*l_215) = func_51(&l_199);

        ;
        if ((safe_add_func_int32_t_s_s(((*g_143) = p_38), (((g_220 = l_218) != &g_221) != (((*l_223) = l_222) != (g_225 = l_224))))))
        {
            int l_226 = (-1L);
            int **l_233 = &g_143;
            (**l_215) ^= ((*g_225) == ((*l_222) = l_226));
            for (g_83.f4 = 6; (g_83.f4 > (-9)); g_83.f4 = safe_sub_func_int8_t_s_s(g_83.f4, 1))
            {
                int *l_230 = &g_80;
                int **l_229 = &l_230;
                (*l_215) = &l_199;

                ;
                (*l_229) = ((*l_215) = (*l_215));

                ;
                (*l_229) = func_51(&l_199);

                ;
                (**l_233) = ((**l_229) = func_61(((l_215 == l_233) & (!p_37))));
            }

            ;
        }
        else
        {
            for (g_83.f4 = 0; (g_83.f4 == 12); g_83.f4 = safe_add_func_uint32_t_u_u(g_83.f4, 8))
            {
                l_236 = ((*l_215) = func_51(((*l_215) = (void*)0)));

                ;
            }

            ;
        }

        ;
        ;
        ;
        ;
    }

    ;
    ;

    ;
    ;
    return l_199;


}







static unsigned short func_39(unsigned p_40)
{
    unsigned l_150 = 4294967291UL;
    short *l_182 = &g_149;
    int l_191 = 0L;
    unsigned l_195 = 0xA817FA55L;
    struct S0 l_198 = {0x43L,-1L,5UL,0x56B0E93CL,0xEE54L,0xD390861EL,0xF174FA8EL,0x3AL,0x65356F8BL,0xA3L};
    for (p_40 = (-1); (p_40 < 57); p_40++)
    {
        short *l_183 = &g_83.f4;
        int l_194 = (-1L);
        for (g_43 = 0; (g_43 >= 18); ++g_43)
        {
            unsigned char l_50 = 0xF6L;
            int **l_134 = (void*)0;
            int *l_136 = &g_43;
            int **l_135 = &l_136;
            short *l_139 = &g_83.f4;
            unsigned l_147 = 7UL;
            (*l_135) = func_46(l_50, g_8, &g_43);
            (*l_135) = func_51(func_46((safe_lshift_func_uint16_t_u_s(g_83.f6, 1)), ((*l_139) = (*l_136)), &g_80));
            for (g_118.f4 = 0; (g_118.f4 > (-27)); --g_118.f4)
            {
                int ***l_144 = &l_135;
                if ((((g_142 = (void*)0) != ((*l_144) = &l_136)) ^ 0xB3L))
                {
                    short *l_148 = &g_149;
                    (*g_143) |= (safe_sub_func_int16_t_s_s(((*l_148) ^= (!(0x23L & ((-8L) >= (p_40 & ((*l_139) = l_147)))))), (~(***l_144))));
                    if (l_150)
                        break;
                }
                else
                {
                    short l_151 = 0x1CF4L;
                    struct S0 l_155 = {1UL,-5L,65535UL,0UL,-1L,0x92D9FAADL,0x8FC35A00L,0x83L,0x5E6FF6BBL,0UL};
                    if ((g_118.f2 <= (l_151 >= 9UL)))
                    {
                        unsigned short *l_154 = &g_83.f2;
                        g_83 = g_83;
                        (*g_143) &= (safe_add_func_uint16_t_u_u(7UL, ((*l_154) |= l_150)));
                    }
                    else
                    {
                        struct S0 *l_156 = (void*)0;
                        struct S0 *l_157 = &g_83;
                        (*l_157) = l_155;
                        return p_40;
                    }
                }

                ;
                for (g_83.f0 = 0; (g_83.f0 == 13); g_83.f0 = safe_add_func_uint32_t_u_u(g_83.f0, 2))
                {
                    unsigned l_160 = 0x05660F8DL;
                    unsigned short *l_161 = &g_118.f2;
                    short **l_184 = &l_139;
                    struct S0 *l_185 = &g_83;
                    (**l_144) = (**l_144);
                    (*g_143) = (((+func_61(l_160)) && (p_40 != (g_83.f2 <= (0x39EDL < ((*l_161) = p_40))))) ^ (safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s((((*l_139) = (safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(p_40, 2)), ((**l_144) != (void*)0))), l_150))) ^ 0x154DL), 0x43L)), g_83.f5)), 0x56CCD6F8L)));
                    if ((safe_add_func_uint8_t_u_u((p_40 < (func_61((func_61(((*l_161) ^= ((((safe_rshift_func_uint8_t_u_s(0UL, p_40)) >= l_160) | (p_40 < (safe_rshift_func_uint16_t_u_s((p_40 && (((l_182 == ((*l_184) = l_183)) > 1L) != 0x110AL)), 11)))) < g_83.f3))) | p_40)) > p_40)), 0xFCL)))
                    {
                        (*g_143) = 0xF0983E45L;
                    }
                    else
                    {
                        unsigned l_188 = 0UL;
                        int l_190 = 0x96F3BD68L;
                        (*g_143) = 0xD9F7CD7CL;
                        l_190 = ((((l_185 != &g_83) != ((&l_182 == (void*)0) < (safe_mod_func_uint32_t_u_u((l_188 ^ (safe_unary_minus_func_int16_t_s((((p_40 <= 8UL) == p_40) >= l_160)))), 4UL)))) < p_40) >= l_150);
                        l_191 = (0UL > g_83.f1);
                        (*g_143) &= (l_194 = (safe_add_func_int8_t_s_s((g_83.f9 > g_118.f7), 4UL)));
                    }
                }
            }

            ;
            return (*l_136);
        }
        return g_118.f7;
    }
    if (l_195)
    {
        short l_196 = (-1L);
        l_196 |= (*g_143);
    }
    else
    {
        struct S0 l_197 = {255UL,0x8D6E2808L,0xFBF8L,0xD4ADB4F9L,0x29D7L,-4L,4294967295UL,6UL,4L,0x95L};
        l_198 = l_197;
    }
    return l_198.f9;
}







static int * func_46(unsigned char p_47, short p_48, int * p_49)
{
    unsigned short l_60 = 0x20C2L;
    unsigned char l_68 = 6UL;
    unsigned short *l_121 = &g_83.f2;
    unsigned *l_129 = &g_130;
    int *l_131 = (void*)0;
    int *l_132 = (void*)0;
    int *l_133 = &g_80;
    p_49 = func_51(p_49);

    ;
    (*l_133) = ((safe_add_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(g_8, g_8)), l_60)) ^ ((*l_129) ^= (func_61(((*l_121) = (func_63((((g_67 &= l_60) || 0xEA1EL) ^ l_68), p_47, g_43) <= p_47))) < g_43))), 0x4EF7L)) != g_43);
    return p_49;


}







static int * func_51(int * p_52)
{
    int *l_53 = &g_43;
    return l_53;


}







static unsigned char func_61(unsigned short p_62)
{
    int l_124 = 0x7D733C45L;
    int *l_125 = &g_80;
    (*l_125) ^= (l_124 && (l_124 == 7UL));
    l_124 = ((*l_125) ^= (&l_124 != &g_43));
    for (g_118.f7 = (-3); (g_118.f7 == 54); g_118.f7 = safe_add_func_uint32_t_u_u(g_118.f7, 5))
    {
        unsigned l_128 = 1UL;
        return l_128;
    }
    return (*l_125);
}







static int func_63(char p_64, unsigned p_65, char p_66)
{
    int *l_76 = &g_43;
    int **l_75 = &l_76;
    int *l_119 = (void*)0;
    int *l_120 = &g_80;
    for (g_67 = 10; (g_67 <= 25); ++g_67)
    {
        unsigned short l_99 = 65532UL;
        int *l_100 = (void*)0;
        int *l_101 = &g_80;
        for (p_65 = 0; (p_65 >= 53); ++p_65)
        {
            for (p_66 = 0; (p_66 >= 26); p_66++)
            {
                int ***l_77 = &l_75;
                int *l_78 = (void*)0;
                int *l_79 = &g_80;
                (*l_77) = l_75;
                if (((*l_79) = g_43))
                {
                    (*l_75) = &g_43;

                    ;
                    return p_65;
                }
                else
                {
                    for (p_64 = 0; (p_64 > (-19)); p_64 = safe_sub_func_int16_t_s_s(p_64, 5))
                    {
                        struct S0 *l_84 = &g_83;
                        int l_85 = 1L;
                        (*l_84) = g_83;
                        (**l_77) = &g_80;

                        ;
                        (*l_79) = l_85;
                    }
                }
            }
        }

        ;
        if (p_66)
        {
            g_80 = 0L;
            (*l_75) = func_51(&g_80);

            ;
        }
        else
        {
            int *l_86 = &g_43;
            (*l_75) = l_86;

            ;
            (*l_75) = l_86;
            (*l_75) = l_86;
        }

        ;
        (*l_101) |= ((safe_sub_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((*l_76), p_65)), g_83.f2)), (safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u(0xFBD5CED4L, (safe_sub_func_int8_t_s_s(((*l_76) & l_99), (p_64 & g_83.f4))))), g_83.f3)))) | p_66);
        for (p_66 = 0; (p_66 >= 18); ++p_66)
        {
            for (g_83.f9 = 0; (g_83.f9 > 45); g_83.f9 = safe_add_func_uint32_t_u_u(g_83.f9, 3))
            {
                char l_116 = (-1L);
                l_100 = l_100;
                if ((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(g_80, ((**l_75) == ((((safe_sub_func_uint16_t_u_u((**l_75), ((safe_div_func_int8_t_s_s(((*l_76) > (safe_lshift_func_uint16_t_u_s(((l_116 ^ g_83.f9) || g_83.f8), p_66))), (g_83.f5 & 0x13L))) < g_83.f7))) & g_83.f5) | g_83.f1) == p_65)))), g_83.f5)))
                {
                    struct S0 *l_117 = &g_118;
                    (*l_117) = g_83;
                }
                else
                {
                    return p_64;
                }
                if (p_66)
                    continue;
            }
            (*l_101) |= g_118.f5;
        }
    }
    (*l_120) = (p_64 != (**l_75));
    return g_118.f9;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_83.f0, "g_83.f0", print_hash_value);
    transparent_crc(g_83.f1, "g_83.f1", print_hash_value);
    transparent_crc(g_83.f2, "g_83.f2", print_hash_value);
    transparent_crc(g_83.f3, "g_83.f3", print_hash_value);
    transparent_crc(g_83.f4, "g_83.f4", print_hash_value);
    transparent_crc(g_83.f5, "g_83.f5", print_hash_value);
    transparent_crc(g_83.f6, "g_83.f6", print_hash_value);
    transparent_crc(g_83.f7, "g_83.f7", print_hash_value);
    transparent_crc(g_83.f8, "g_83.f8", print_hash_value);
    transparent_crc(g_83.f9, "g_83.f9", print_hash_value);
    transparent_crc(g_118.f0, "g_118.f0", print_hash_value);
    transparent_crc(g_118.f1, "g_118.f1", print_hash_value);
    transparent_crc(g_118.f2, "g_118.f2", print_hash_value);
    transparent_crc(g_118.f3, "g_118.f3", print_hash_value);
    transparent_crc(g_118.f4, "g_118.f4", print_hash_value);
    transparent_crc(g_118.f5, "g_118.f5", print_hash_value);
    transparent_crc(g_118.f6, "g_118.f6", print_hash_value);
    transparent_crc(g_118.f7, "g_118.f7", print_hash_value);
    transparent_crc(g_118.f8, "g_118.f8", print_hash_value);
    transparent_crc(g_118.f9, "g_118.f9", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_345, "g_345", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
