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
   volatile int f0;
   unsigned short f1;
   volatile int f2;
   short f3;
   volatile short f4;
   int f5;
};

union U1 {
   struct S0 f0;
   volatile unsigned f1;
};


static int *g_8 = (void*)0;
static short g_9 = 0x2703L;
static int g_30 = 0L;
static union U1 g_55 = {{0x54C3EBE1L,65532UL,2L,0xADBEL,-1L,0x27B1AA43L}};
static struct S0 g_98 = {1L,5UL,0xF2A9E5F6L,-1L,-1L,0x14A3D9B2L};
static volatile struct S0 g_112 = {0x8C465D2EL,1UL,0xA708938AL,0x3921L,0x45DBL,0x19AA3B2AL};
static volatile struct S0 g_122 = {1L,4UL,0x621383E1L,0x4C74L,-10L,-10L};
static int *g_130 = &g_98.f5;
static volatile union U1 g_133 = {{0xC46DEB76L,0xD413L,0x0277B54EL,0xBA69L,0x7BAFL,-10L}};
static volatile union U1 *g_132 = &g_133;
static volatile union U1 **g_131 = &g_132;
static volatile struct S0 g_142 = {0x47E73AB6L,0x9172L,2L,0x3B3DL,0x5BC1L,0L};
static volatile struct S0 g_143 = {0xFA10622CL,0x61D1L,0x06CC583AL,0xB3D9L,0x3968L,0xC71F3EC1L};
static union U1 *g_156 = (void*)0;
static int *g_160 = &g_30;
static int **g_184 = (void*)0;
static int ***g_183 = &g_184;
static struct S0 g_190 = {0x98820683L,1UL,8L,-1L,0x858BL,-8L};
static struct S0 g_194 = {-2L,0xE970L,0x6A69D1A7L,-6L,0xC511L,0x62D161A4L};
static struct S0 g_195 = {0xAE0DD45DL,65534UL,0xC83ECCD7L,0x5239L,-4L,0x1A18FF7EL};
static volatile struct S0 g_239 = {0xD4E1C924L,0x5BC3L,-10L,0xF4F3L,-8L,0xD3A84F11L};
static int *g_240 = (void*)0;
static union U1 g_268 = {{3L,65535UL,0xFBDBB868L,6L,0xBAB3L,0x22FC6183L}};
static struct S0 g_293 = {-2L,0xC8D8L,0x85B255EBL,2L,-1L,0x8EEFBA7EL};
static struct S0 *g_346 = &g_190;
static struct S0 **g_345 = &g_346;
static struct S0 g_351 = {0xBABF78FDL,0UL,0L,0x7180L,1L,1L};



static unsigned short func_1(void);
static int * func_2(int p_3, int * p_4, int * p_5, char p_6, int * p_7);
static int * func_10(int * p_11);
static int * func_12(int * p_13, int * p_14, short p_15, unsigned p_16, unsigned short p_17);
static int * func_18(char p_19, int * p_20);
static unsigned short func_23(int * p_24);
static int * func_25(int * p_26, int * p_27, int p_28);
static unsigned short func_31(unsigned char p_32, int * p_33, short p_34);
static int * func_38(unsigned p_39, unsigned p_40, int * p_41, int p_42, int * p_43);
static int * func_45(int * p_46, unsigned short p_47, int * p_48, unsigned p_49, short p_50);
static unsigned short func_1(void)
{
    int *l_29 = &g_30;
    char l_297 = 0x57L;
    int l_352 = 0xC37194E9L;
    l_29 = func_2((+0x2086BD08L), g_8, g_8, g_9, func_10(func_12(func_18((safe_lshift_func_uint16_t_u_u(func_23(func_25(g_8, l_29, (*l_29))), l_297)), l_29), l_29, l_297, g_195.f1, g_268.f0.f3)));

    ;

    ;
    ;
    (*g_160) = l_352;
    return g_142.f1;
}







static int * func_2(int p_3, int * p_4, int * p_5, char p_6, int * p_7)
{
    unsigned l_348 = 4294967293UL;
    int *l_349 = &g_190.f5;
    int **l_350 = &g_240;
    (*l_350) = func_12(func_18(l_348, l_349), &p_3, l_348, g_190.f1, g_268.f0.f3);

    ;
    (**g_345) = g_351;
    (**g_345) = (*g_346);
    return (*l_350);


}







static int * func_10(int * p_11)
{
    int *l_344 = (void*)0;
    struct S0 ***l_347 = &g_345;
    l_344 = l_344;
    (*l_347) = g_345;
    (***l_347) = (***l_347);
    return p_11;


}







static int * func_12(int * p_13, int * p_14, short p_15, unsigned p_16, unsigned short p_17)
{
    int *l_343 = &g_98.f5;
    (*p_14) = 0L;
    l_343 = l_343;
    (*l_343) = 0x79FF928EL;
    l_343 = l_343;
    return p_13;


}







static int * func_18(char p_19, int * p_20)
{
    char l_298 = 0L;
    int l_305 = 0x359C2F6AL;
    union U1 *l_312 = (void*)0;
    unsigned char l_333 = 249UL;
    union U1 **l_341 = (void*)0;
    union U1 ***l_340 = &l_341;
    int *l_342 = &l_305;
    if ((l_298 || (safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(((void*)0 != (*g_183)), func_31((safe_sub_func_uint8_t_u_u(p_19, ((p_19 & (p_19 <= (g_268.f0.f1 || (l_298 | l_298)))) ^ (*p_20)))), p_20, l_305))), 6))))
    {
        unsigned l_309 = 0x4EC49DA8L;
        for (g_293.f5 = 0; (g_293.f5 == 7); g_293.f5 = safe_add_func_uint8_t_u_u(g_293.f5, 1))
        {
            l_309 = (g_98.f4 && (safe_unary_minus_func_int8_t_s(l_298)));
            (*g_240) = 0x0B09115CL;
        }
        return p_20;


    }
    else
    {
        struct S0 *l_310 = &g_55.f0;
        struct S0 **l_311 = &l_310;
        union U1 **l_313 = &g_156;
        int *l_322 = &g_98.f5;
        struct S0 *l_337 = &g_55.f0;
        struct S0 *l_338 = (void*)0;
        struct S0 *l_339 = &g_293;
        (*l_311) = l_310;
        (*l_313) = l_312;

        ;
        for (g_195.f3 = (-24); (g_195.f3 > (-14)); ++g_195.f3)
        {
            unsigned char l_318 = 0x10L;
            int *l_321 = (void*)0;
            if (((0x6A4DL || (safe_sub_func_uint16_t_u_u(p_19, ((*p_20) > l_318)))) > (safe_add_func_int32_t_s_s(l_305, (l_321 != l_322)))))
            {
                int **l_323 = &l_322;
                (*l_323) = p_20;

                ;
            }
            else
            {
                int *l_324 = &g_194.f5;
                int l_332 = 0x5026327AL;
                int **l_334 = &g_160;
                (*l_334) = func_45(l_324, (*l_324), l_321, p_19, p_19);
                (*g_131) = (*g_131);
            }
            (*g_240) = (safe_lshift_func_int16_t_s_u(p_19, 6));
        }

        ;
        (*l_339) = g_55.f0;
    }

    ;
    ;
    (*l_340) = (void*)0;
    p_20 = &l_305;

    ;
    return &g_30;


}







static unsigned short func_23(int * p_24)
{
    int **l_283 = &g_8;
    int l_289 = 0x2055BE12L;
    for (g_98.f5 = 0; (g_98.f5 == 19); ++g_98.f5)
    {
        unsigned l_288 = 7UL;
        int l_295 = 1L;
        unsigned l_296 = 4294967295UL;
        if ((((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(0xECL, 1)), (safe_rshift_func_uint16_t_u_s(((((safe_mod_func_uint8_t_u_u(((&p_24 != l_283) != g_122.f2), (safe_mod_func_int32_t_s_s((*g_240), ((g_194.f3 >= (1L != (safe_add_func_uint16_t_u_u(0x9948L, (~(l_288 ^ l_289)))))) ^ l_288))))) < l_288) ^ (*p_24)) <= l_288), g_55.f0.f1)))), 1L)), 1UL)) != g_190.f3) && g_239.f3))
        {
            unsigned char l_292 = 0x1DL;
            (*g_160) = 0x8D332480L;
            (*p_24) = (safe_lshift_func_int16_t_s_u((1UL & (l_292 ^ 0x31FE69D0L)), 14));
            (*g_240) = (*g_240);
        }
        else
        {
            struct S0 *l_294 = &g_194;
            p_24 = p_24;
            (*l_294) = g_293;
            l_296 = (l_288 < (l_288 != l_295));
        }
    }
    return g_133.f0.f0;
}







static int * func_25(int * p_26, int * p_27, int p_28)
{
    int l_35 = 1L;
    union U1 *l_267 = &g_268;
    (*g_160) = (((func_31(l_35, p_27, (g_30 > (safe_mod_func_uint32_t_u_u((&g_30 == (void*)0), 6UL)))) > (l_267 == (*g_131))) && 1L) == 4UL);


    ;
    ;
    return &g_30;


}







static unsigned short func_31(unsigned char p_32, int * p_33, short p_34)
{
    int l_44 = 0xD015B01DL;
    int **l_242 = &g_240;
    struct S0 *l_243 = &g_98;
    struct S0 **l_244 = &l_243;
    short l_253 = (-7L);
    union U1 *l_256 = &g_55;
    (*l_242) = func_38(g_30, l_44, func_45(&l_44, (l_44 & 0L), p_33, l_44, l_44), l_44, &l_44);

    ;
    (*l_244) = l_243;
    (*g_240) = 1L;
    if ((safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(4UL, 0x5B22501FL)), (safe_lshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((0x1BL < l_253) ^ (safe_sub_func_uint8_t_u_u(((void*)0 != l_256), (p_34 == ((&l_242 == &l_242) != g_194.f4))))), (**l_242))), 10)))))
    {
        short l_257 = 0x27D3L;
        if (l_257)
        {
            (*g_160) = (*p_33);
            (*l_242) = p_33;

            ;
            for (g_55.f0.f3 = 0; (g_55.f0.f3 >= 8); g_55.f0.f3++)
            {
                p_33 = (*l_242);
            }
        }
        else
        {
            struct S0 *l_260 = &g_55.f0;
            int l_265 = 0xC44B1F67L;
            (*l_244) = l_260;

            ;
            (**l_242) = ((safe_add_func_uint8_t_u_u(g_194.f1, ((safe_sub_func_uint16_t_u_u((0x915DL >= (p_34 || l_265)), ((void*)0 == &g_156))) && l_257))) | (l_257 == 0UL));
        }

        ;
        ;
    }
    else
    {
        unsigned l_266 = 4294967292UL;
        l_266 = 0x7F90B8BAL;
    }

    ;
    ;
    return (**l_242);
}







static int * func_38(unsigned p_39, unsigned p_40, int * p_41, int p_42, int * p_43)
{
    int *l_84 = &g_55.f0.f5;
    int **l_83 = &l_84;
    union U1 *l_135 = &g_55;
    union U1 **l_134 = &l_135;
    unsigned char l_138 = 7UL;
    struct S0 *l_208 = &g_55.f0;
    int *l_241 = &g_30;
    for (g_55.f0.f5 = 26; (g_55.f0.f5 > 8); g_55.f0.f5 = safe_sub_func_int8_t_s_s(g_55.f0.f5, 3))
    {
        int *l_81 = &g_55.f0.f5;
        int **l_82 = &l_81;
        (*l_82) = l_81;
        (*p_41) = (**l_82);
    }
    (*l_83) = &g_30;

    ;
    if ((*p_41))
    {
        int l_85 = 0x1248F7C4L;
        short l_105 = (-5L);
        if (l_85)
        {
            int l_90 = 0xE30C9261L;
            (**l_83) = ((((&g_8 == (void*)0) == ((6L < (p_42 < (g_55.f0.f0 >= ((*p_41) ^ (safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(l_90, p_40)), 4)))))) ^ (3UL & g_55.f0.f5))) ^ g_55.f0.f3) > p_40);
            return &g_30;


        }
        else
        {
            int l_93 = (-6L);
            if ((p_39 || (g_30 >= l_93)))
            {
                struct S0 *l_94 = (void*)0;
                struct S0 *l_95 = (void*)0;
                struct S0 *l_96 = &g_55.f0;
                struct S0 *l_97 = (void*)0;
                (*p_43) = g_55.f0.f4;
                g_98 = g_55.f0;
            }
            else
            {
                unsigned l_107 = 0x50DA4A23L;
                union U1 *l_129 = &g_55;
                for (g_55.f0.f1 = 0; (g_55.f0.f1 != 39); g_55.f0.f1 = safe_add_func_uint16_t_u_u(g_55.f0.f1, 8))
                {
                    struct S0 *l_101 = &g_98;
                    int *l_102 = &g_55.f0.f5;
                    (*l_101) = g_98;
                    (**l_83) = (l_102 != &g_30);
                }
                if ((safe_add_func_int8_t_s_s(p_40, l_105)))
                {
                    int *l_106 = &l_93;
                    union U1 **l_121 = (void*)0;
                    (*l_83) = func_45(l_106, l_105, func_45(&g_30, p_42, (*l_83), l_105, p_39), l_107, l_93);
                    if (l_107)
                    {
                        char l_108 = 0x1EL;
                        struct S0 *l_111 = &g_55.f0;
                        (*l_83) = (void*)0;

                        ;
                        l_108 = (p_42 == l_107);
                        (*p_43) = (safe_rshift_func_uint8_t_u_s((l_111 != (void*)0), 4));
                    }
                    else
                    {
                        volatile struct S0 *l_113 = &g_112;
                        (*l_113) = g_112;
                        return &g_30;


                    }

                    ;
                    for (g_55.f0.f3 = 0; (g_55.f0.f3 == 15); g_55.f0.f3 = safe_add_func_int16_t_s_s(g_55.f0.f3, 5))
                    {
                        short l_118 = (-1L);
                        if (g_55.f0.f1)
                            break;
                        (*l_106) = ((g_55.f0.f5 >= (((l_107 || (safe_add_func_int16_t_s_s(p_40, 0xE9DAL))) && (l_107 != l_118)) > ((safe_add_func_uint32_t_u_u(((-1L) || (((void*)0 != l_121) >= l_85)), (*p_43))) >= 0xFC07259FL))) >= p_39);
                        (*l_83) = &p_42;

                        ;
                    }

                    ;
                }
                else
                {
                    volatile struct S0 *l_123 = &g_122;
                    int l_126 = 1L;
                    (*l_123) = g_122;
                    for (g_30 = 26; (g_30 >= 12); g_30--)
                    {
                        (*l_83) = (void*)0;

                        ;
                        (*l_83) = &g_30;

                        ;
                        g_130 = &p_42;

                        ;
                    }


                }

                ;

            }

            ;

        }

        ;

        if ((l_105 < (g_131 == l_134)))
        {
            int *l_144 = &g_30;
            (*p_43) = (-1L);
            for (g_30 = 2; (g_30 == 20); g_30 = safe_add_func_int32_t_s_s(g_30, 9))
            {
                g_130 = &g_30;

                ;
                if (l_138)
                {
                    int l_145 = (-1L);
                    for (l_105 = 0; (l_105 >= (-7)); l_105--)
                    {
                        unsigned l_141 = 0x454CDD2EL;
                        if (l_141)
                            break;
                        g_143 = g_142;
                        (*l_83) = l_144;

                        ;
                        (*p_43) = ((((&g_122 == &g_98) & l_145) >= (*l_84)) != (((safe_sub_func_int8_t_s_s(p_39, ((0x5FL | (safe_div_func_int8_t_s_s(((*l_84) ^ (safe_lshift_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s(((*l_83) == (void*)0), l_145)), l_145)) && 0UL) & 65530UL), p_42))), l_105))) & (*l_84)))) >= (*l_84)) > 0xA680L));
                    }
                }
                else
                {
                    (*l_83) = &p_42;

                    ;
                    (*p_43) = (*g_130);
                }
            }
        }
        else
        {
            return &g_30;



        }
        g_156 = (*l_134);

        ;
    }
    else
    {
        short l_176 = 0x65C1L;
        int *l_182 = &g_30;
        struct S0 *l_215 = &g_98;
        if (((safe_lshift_func_int8_t_s_s(g_98.f3, 5)) ^ 1UL))
        {
            short l_159 = 6L;
            int l_161 = (-3L);
            (*l_83) = func_45(&g_30, (**l_83), &g_30, g_133.f0.f3, (p_42 & p_42));
            (*p_41) = l_159;
            (*l_83) = func_45(&p_42, g_122.f3, g_160, g_55.f0.f1, l_161);
            (*p_41) = (0xF3143B9AL || (0UL | p_40));
        }
        else
        {
            unsigned char l_171 = 0x41L;
            int *l_210 = &g_30;
            struct S0 *l_211 = (void*)0;
            for (p_42 = 13; (p_42 > (-3)); p_42--)
            {
                int l_166 = 0x62979EA2L;
                struct S0 **l_212 = &l_211;
            }
            (*p_43) = (*p_43);
            for (g_194.f1 = 0; (g_194.f1 != 26); g_194.f1++)
            {
                struct S0 **l_216 = &l_211;
                int l_217 = 0xBADE801AL;
                (*l_216) = l_215;

                ;
                if (((l_217 ^ (safe_mod_func_uint8_t_u_u((p_40 != p_42), g_142.f5))) | (safe_add_func_int8_t_s_s((p_39 | l_217), (*l_182)))))
                {
                    for (g_190.f5 = (-2); (g_190.f5 < (-1)); g_190.f5 = safe_add_func_uint32_t_u_u(g_190.f5, 4))
                    {
                        int *l_224 = &l_217;
                        (*l_83) = func_45(&p_42, g_98.f0, l_224, (*l_182), (~((((safe_div_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(l_217, (safe_div_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(0x1CL, (1UL != (1L && (safe_lshift_func_uint8_t_u_s(p_39, g_55.f0.f3)))))), p_40)) | (*p_43)), (*l_224))))) != 0xE78EL), p_42)) && 4294967295UL) <= g_194.f5) > (*l_224))));

                        ;
                        return l_210;



                    }
                    if ((*p_43))
                        break;
                    (*l_83) = &p_42;

                    ;
                }
                else
                {
                    if (l_217)
                    {
                        (*l_208) = g_195;
                        if ((*g_160))
                            continue;
                    }
                    else
                    {
                        if ((*l_182))
                            break;
                    }
                    g_133.f0 = g_190;
                    for (p_39 = 0; (p_39 <= 31); ++p_39)
                    {
                        (*l_215) = g_239;
                        (*l_216) = &g_190;

                        ;
                        g_240 = &p_42;

                        ;
                    }

                    ;
                }

                ;
            }

            ;
            ;
            ;
        }

        ;
        ;
    }

    ;

    ;
    (*p_43) = (*g_160);
    return l_241;




}







static int * func_45(int * p_46, unsigned short p_47, int * p_48, unsigned p_49, short p_50)
{
    int l_60 = 1L;
    int l_63 = 0x9D693CE8L;
    int l_66 = 0x5C0F4FD1L;
    int *l_78 = &l_60;
    for (p_47 = (-5); (p_47 <= 9); p_47 = safe_add_func_int8_t_s_s(p_47, 7))
    {
        union U1 *l_54 = &g_55;
        union U1 **l_53 = &l_54;
        char l_73 = 0x7BL;
        int *l_77 = &g_30;
        (*l_53) = (void*)0;

        ;
        if (((safe_add_func_int32_t_s_s((safe_div_func_uint8_t_u_u(g_55.f0.f2, (0x24L ^ (l_60 >= p_49)))), ((safe_lshift_func_int16_t_s_s(g_9, 14)) > l_63))) ^ (~0x7527L)))
        {
            int *l_76 = &g_55.f0.f5;
            (*l_76) = ((safe_add_func_uint8_t_u_u((p_50 > l_66), (p_50 & (safe_sub_func_uint16_t_u_u(g_55.f0.f0, ((((((safe_add_func_int32_t_s_s((*p_46), 0x655505F4L)) != (safe_sub_func_int32_t_s_s(l_73, (((safe_add_func_int32_t_s_s(0x9F1A7DFAL, (g_30 ^ p_50))) && p_47) < l_73)))) == p_47) >= p_50) || g_55.f0.f3) ^ g_30)))))) > 1UL);
        }
        else
        {
            return l_77;


        }
    }
    p_48 = (void*)0;

    ;
    return &g_30;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_55.f0.f0, "g_55.f0.f0", print_hash_value);
    transparent_crc(g_55.f0.f1, "g_55.f0.f1", print_hash_value);
    transparent_crc(g_55.f0.f2, "g_55.f0.f2", print_hash_value);
    transparent_crc(g_55.f0.f3, "g_55.f0.f3", print_hash_value);
    transparent_crc(g_55.f0.f4, "g_55.f0.f4", print_hash_value);
    transparent_crc(g_55.f0.f5, "g_55.f0.f5", print_hash_value);
    transparent_crc(g_98.f0, "g_98.f0", print_hash_value);
    transparent_crc(g_98.f1, "g_98.f1", print_hash_value);
    transparent_crc(g_98.f2, "g_98.f2", print_hash_value);
    transparent_crc(g_98.f3, "g_98.f3", print_hash_value);
    transparent_crc(g_98.f4, "g_98.f4", print_hash_value);
    transparent_crc(g_98.f5, "g_98.f5", print_hash_value);
    transparent_crc(g_112.f0, "g_112.f0", print_hash_value);
    transparent_crc(g_112.f1, "g_112.f1", print_hash_value);
    transparent_crc(g_112.f2, "g_112.f2", print_hash_value);
    transparent_crc(g_112.f3, "g_112.f3", print_hash_value);
    transparent_crc(g_112.f4, "g_112.f4", print_hash_value);
    transparent_crc(g_112.f5, "g_112.f5", print_hash_value);
    transparent_crc(g_122.f0, "g_122.f0", print_hash_value);
    transparent_crc(g_122.f1, "g_122.f1", print_hash_value);
    transparent_crc(g_122.f2, "g_122.f2", print_hash_value);
    transparent_crc(g_122.f3, "g_122.f3", print_hash_value);
    transparent_crc(g_122.f4, "g_122.f4", print_hash_value);
    transparent_crc(g_122.f5, "g_122.f5", print_hash_value);
    transparent_crc(g_133.f0.f0, "g_133.f0.f0", print_hash_value);
    transparent_crc(g_133.f0.f1, "g_133.f0.f1", print_hash_value);
    transparent_crc(g_133.f0.f2, "g_133.f0.f2", print_hash_value);
    transparent_crc(g_133.f0.f3, "g_133.f0.f3", print_hash_value);
    transparent_crc(g_133.f0.f4, "g_133.f0.f4", print_hash_value);
    transparent_crc(g_133.f0.f5, "g_133.f0.f5", print_hash_value);
    transparent_crc(g_142.f0, "g_142.f0", print_hash_value);
    transparent_crc(g_142.f1, "g_142.f1", print_hash_value);
    transparent_crc(g_142.f2, "g_142.f2", print_hash_value);
    transparent_crc(g_142.f3, "g_142.f3", print_hash_value);
    transparent_crc(g_142.f4, "g_142.f4", print_hash_value);
    transparent_crc(g_142.f5, "g_142.f5", print_hash_value);
    transparent_crc(g_143.f0, "g_143.f0", print_hash_value);
    transparent_crc(g_143.f1, "g_143.f1", print_hash_value);
    transparent_crc(g_143.f2, "g_143.f2", print_hash_value);
    transparent_crc(g_143.f3, "g_143.f3", print_hash_value);
    transparent_crc(g_143.f4, "g_143.f4", print_hash_value);
    transparent_crc(g_143.f5, "g_143.f5", print_hash_value);
    transparent_crc(g_190.f0, "g_190.f0", print_hash_value);
    transparent_crc(g_190.f1, "g_190.f1", print_hash_value);
    transparent_crc(g_190.f2, "g_190.f2", print_hash_value);
    transparent_crc(g_190.f3, "g_190.f3", print_hash_value);
    transparent_crc(g_190.f4, "g_190.f4", print_hash_value);
    transparent_crc(g_190.f5, "g_190.f5", print_hash_value);
    transparent_crc(g_194.f0, "g_194.f0", print_hash_value);
    transparent_crc(g_194.f1, "g_194.f1", print_hash_value);
    transparent_crc(g_194.f2, "g_194.f2", print_hash_value);
    transparent_crc(g_194.f3, "g_194.f3", print_hash_value);
    transparent_crc(g_194.f4, "g_194.f4", print_hash_value);
    transparent_crc(g_194.f5, "g_194.f5", print_hash_value);
    transparent_crc(g_195.f0, "g_195.f0", print_hash_value);
    transparent_crc(g_195.f1, "g_195.f1", print_hash_value);
    transparent_crc(g_195.f2, "g_195.f2", print_hash_value);
    transparent_crc(g_195.f3, "g_195.f3", print_hash_value);
    transparent_crc(g_195.f4, "g_195.f4", print_hash_value);
    transparent_crc(g_195.f5, "g_195.f5", print_hash_value);
    transparent_crc(g_239.f0, "g_239.f0", print_hash_value);
    transparent_crc(g_239.f1, "g_239.f1", print_hash_value);
    transparent_crc(g_239.f2, "g_239.f2", print_hash_value);
    transparent_crc(g_239.f3, "g_239.f3", print_hash_value);
    transparent_crc(g_239.f4, "g_239.f4", print_hash_value);
    transparent_crc(g_239.f5, "g_239.f5", print_hash_value);
    transparent_crc(g_268.f0.f0, "g_268.f0.f0", print_hash_value);
    transparent_crc(g_268.f0.f1, "g_268.f0.f1", print_hash_value);
    transparent_crc(g_268.f0.f2, "g_268.f0.f2", print_hash_value);
    transparent_crc(g_268.f0.f3, "g_268.f0.f3", print_hash_value);
    transparent_crc(g_268.f0.f4, "g_268.f0.f4", print_hash_value);
    transparent_crc(g_268.f0.f5, "g_268.f0.f5", print_hash_value);
    transparent_crc(g_293.f0, "g_293.f0", print_hash_value);
    transparent_crc(g_293.f1, "g_293.f1", print_hash_value);
    transparent_crc(g_293.f2, "g_293.f2", print_hash_value);
    transparent_crc(g_293.f3, "g_293.f3", print_hash_value);
    transparent_crc(g_293.f4, "g_293.f4", print_hash_value);
    transparent_crc(g_293.f5, "g_293.f5", print_hash_value);
    transparent_crc(g_351.f0, "g_351.f0", print_hash_value);
    transparent_crc(g_351.f1, "g_351.f1", print_hash_value);
    transparent_crc(g_351.f2, "g_351.f2", print_hash_value);
    transparent_crc(g_351.f3, "g_351.f3", print_hash_value);
    transparent_crc(g_351.f4, "g_351.f4", print_hash_value);
    transparent_crc(g_351.f5, "g_351.f5", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
