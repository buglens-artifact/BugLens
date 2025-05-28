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


union U0 {
   const unsigned f0;
   volatile unsigned short f1;
   volatile unsigned f2;
   const int f3;
};


static volatile short g_6 = 1L;
static unsigned g_9 = 0xA1A4D63AL;
static int g_24 = 0x88A01932L;
static unsigned g_26 = 0x5B689063L;
static unsigned char g_32 = 8UL;
static unsigned *g_75 = &g_9;
static unsigned **g_74 = &g_75;
static int g_82 = 1L;
static int *g_84 = &g_82;
static unsigned short g_108 = 0x2FE0L;
static unsigned short g_112 = 65535UL;
static unsigned g_113 = 0x2DE648FBL;
static short g_116 = (-1L);
static short g_119 = 2L;
static unsigned short g_120 = 65533UL;
static char g_138 = 0x8AL;
static int g_161 = 0xCAC18070L;
static unsigned g_180 = 0xBC2C7D6AL;
static union U0 g_189 = {0xE50DD9F3L};
static union U0 *g_188 = &g_189;
static union U0 g_228 = {1UL};
static const int *g_303 = &g_24;
static int g_320 = 0xDE3C0EF0L;
static const unsigned char g_337 = 0xEDL;
static char g_374 = 0L;



static unsigned char func_1(void);
static char func_2(char p_3, const char p_4, unsigned p_5);
static unsigned func_10(short p_11, char p_12);
static const int * func_27(unsigned char * p_28, unsigned char * p_29, const char p_30);
static unsigned char * func_33(int * p_34, unsigned char p_35, const int * p_36, int p_37);
static int * func_38(unsigned p_39, char p_40, unsigned char * p_41, int * p_42, int p_43);
static int * func_44(unsigned p_45);
static unsigned char func_53(char p_54, unsigned * p_55);
static int * func_62(unsigned ** p_63, unsigned p_64, int p_65);
static unsigned ** func_66(unsigned char p_67, int p_68);
static unsigned char func_1(void)
{
    short l_7 = 6L;
    unsigned *l_8 = &g_9;
    unsigned char *l_22 = (void*)0;
    int l_23 = 0L;
    unsigned *l_25 = (void*)0;
    char l_375 = 0L;
    int l_394 = 0x84B2CCAAL;
    int **l_395 = &g_84;
    char *l_397 = &g_374;
    char * const *l_396 = &l_397;
    char * const **l_398 = (void*)0;
    char * const **l_399 = &l_396;
    if (((func_2((g_6 && (((*l_8) = l_7) > func_10(l_7, l_7))), (safe_rshift_func_int8_t_s_u(0x2BL, 4)), (g_26 = (safe_sub_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((((~0xBFL) || (l_23 = ((l_7 < 0x0549EC71L) == 0x27F08E22L))) > l_7), g_24)) | g_24), l_7)))) && g_228.f2) < l_7))
    {
        int **l_305 = &g_84;
        int **l_306 = (void*)0;
        int **l_307 = (void*)0;
        int *l_309 = (void*)0;
        int **l_308 = &l_309;
        (*l_308) = ((*l_305) = &g_161);

        ;
        ;
    }
    else
    {
        unsigned char l_310 = 0xA6L;
        unsigned char *l_311 = &g_32;
        int l_318 = 1L;
        char *l_319 = &g_138;
        unsigned short *l_321 = &g_108;
        int *l_322 = &l_318;
        unsigned l_327 = 4294967295UL;
        (*l_322) = (l_310 && ((g_189.f2 <= ((*l_311) = 0xB2L)) && (g_24 | (safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((*l_319) = (l_318 == l_23)), g_189.f2)), g_320)), (&g_120 != l_321))))));
        (*l_322) = (((safe_sub_func_uint32_t_u_u(func_10((safe_mod_func_int32_t_s_s((*l_322), (*g_75))), (g_116 > (0x4CEAL < ((l_327 = (((&l_311 == (void*)0) > func_10(g_320, (*l_322))) >= g_26)) != (*g_75))))), 4294967290UL)) != (*l_322)) != g_189.f3);
    }

    ;
    ;
    ;
    for (g_116 = 0; (g_116 >= 17); g_116 = safe_add_func_uint32_t_u_u(g_116, 1))
    {
        unsigned char *l_334 = &g_32;
        const unsigned char *l_336 = &g_337;
        const unsigned char **l_335 = &l_336;
        int l_340 = 7L;
        char *l_341 = &g_138;
        int l_377 = 0xEEAECE4BL;
        int *l_384 = &l_377;
        int **l_390 = &g_84;
        int **l_391 = &l_384;
        if ((safe_mod_func_int8_t_s_s((0L & ((*l_341) = ((safe_rshift_func_int16_t_s_u((l_334 != ((*l_335) = (void*)0)), (l_7 >= (safe_add_func_int32_t_s_s((1UL < ((**g_74) = (*g_75))), l_340))))) >= l_340))), func_10((safe_lshift_func_uint16_t_u_u(g_112, 12)), g_189.f0))))
        {
            unsigned l_351 = 0xDAAB47B4L;
            int l_354 = 7L;
            union U0 ** const l_358 = &g_188;
            char l_369 = (-1L);
            for (g_320 = 3; (g_320 <= (-20)); --g_320)
            {
                int l_350 = 0x1FDE4145L;
                int **l_383 = (void*)0;
                for (g_112 = (-2); (g_112 < 15); ++g_112)
                {
                    unsigned l_353 = 9UL;
                    unsigned char *l_355 = &g_32;
                    int **l_356 = &g_84;
                    g_84 = (void*)0;

                    ;
                    if ((g_138 ^ (safe_rshift_func_int8_t_s_u((((0UL | (**g_74)) == l_23) == l_350), 2))))
                    {
                        return l_340;
                    }
                    else
                    {
                        int *l_352 = &l_340;
                        (*l_352) = l_351;
                    }
                    (*l_356) = &l_350;

                    ;
                    if ((*g_84))
                    {
                        short l_357 = 0x7C99L;
                        union U0 **l_360 = (void*)0;
                        union U0 ***l_359 = &l_360;
                        int *l_376 = &g_161;
                        l_357 = (func_53(g_189.f2, l_25) <= g_180);

                        ;
                        (*l_359) = l_358;

                        ;
                        (*g_84) = (safe_sub_func_int16_t_s_s(0xBF1DL, (((l_340 > g_26) | ((**g_74) = (safe_mod_func_uint16_t_u_u((func_10(((safe_rshift_func_uint8_t_u_u((((*g_84) = (((safe_sub_func_uint32_t_u_u((l_369 < (l_340 >= (safe_sub_func_int8_t_s_s((safe_sub_func_int32_t_s_s((-4L), (func_10(g_374, (**l_356)) != l_357))), l_340)))), (*g_84))) < (**l_356)) != 4L)) && l_7), g_116)) != 0xB1DF90D5L), l_375) | (*g_75)), l_340)))) < 7UL)));
                        (*l_356) = l_376;

                        ;
                    }
                    else
                    {
                        (*l_356) = func_62(&g_75, g_6, l_377);

                        ;
                        l_340 = 0xC823759EL;
                        return g_374;
                    }

                    ;
                }
                for (l_377 = 4; (l_377 >= 2); l_377 = safe_sub_func_int16_t_s_s(l_377, 1))
                {
                    for (g_82 = (-18); (g_82 >= (-5)); ++g_82)
                    {
                        unsigned short l_382 = 5UL;
                        if (l_382)
                            break;
                        return g_320;
                    }
                }
                l_384 = &l_377;
                (*l_384) = l_354;
            }
        }
        else
        {
            short l_387 = 7L;
            if ((l_23 = (g_26 & l_23)))
            {
                return g_82;
            }
            else
            {
                char **l_389 = &l_341;
                char ***l_388 = &l_389;
                (*l_384) = (safe_rshift_func_int16_t_s_s(0x30D6L, (((*l_341) = l_387) == l_387)));
                (*l_388) = &l_341;
            }
        }

        ;
        (*l_391) = ((*l_390) = &g_82);

        ;
        ;
        (*g_84) = (safe_rshift_func_uint8_t_u_s(((*l_334) = g_228.f3), (0x5E3EL <= g_228.f0)));
        (*g_84) = (*l_384);
    }
    (*l_395) = func_62(&g_75, (!(l_375 <= l_23)), ((l_394 = 255UL) != ((void*)0 == &g_228)));

    ;
    (*l_399) = l_396;
    return (**l_395);
}







static char func_2(char p_3, const char p_4, unsigned p_5)
{
    unsigned char *l_31 = &g_32;
    int **l_145 = &g_84;
    int *l_147 = &g_82;
    int **l_146 = &l_147;
    char *l_154 = &g_138;
    int *l_155 = (void*)0;
    int *l_156 = (void*)0;
    int *l_157 = (void*)0;
    int *l_158 = (void*)0;
    int *l_159 = (void*)0;
    int *l_160 = &g_161;
    const short l_201 = (-2L);
    union U0 *l_304 = &g_228;
    g_303 = func_27(l_31, func_33(func_38(p_4, p_5, &g_32, ((*l_146) = ((*l_145) = func_44(g_24))), ((safe_lshift_func_uint16_t_u_u(0x9DC4L, (((*l_31) = (safe_mod_func_uint8_t_u_u((0x853DL ^ (safe_rshift_func_int8_t_s_s(((((*l_160) = (((*l_154) = 0x42L) && 0xF3L)) <= p_5) && p_3), g_32))), g_116))) == p_4))) < g_108)), g_116, g_75, g_116), l_201);

    ;
    ;
    ;
    ;
    l_304 = l_304;
    return p_3;
}







static unsigned func_10(short p_11, char p_12)
{
    char l_13 = 0x96L;
    int *l_14 = (void*)0;
    int l_15 = 5L;
    l_15 = l_13;
    return g_6;
}







static const int * func_27(unsigned char * p_28, unsigned char * p_29, const char p_30)
{
    int * const l_202 = &g_161;
    int **l_203 = &g_84;
    unsigned char l_204 = 8UL;
    unsigned *l_209 = (void*)0;
    char l_223 = 0xA1L;
    int l_224 = 0x2124FAB6L;
    union U0 *l_226 = &g_189;
    int l_257 = (-10L);
    int l_271 = 0x576AB1B5L;
    union U0 *l_279 = &g_189;
    (*l_203) = l_202;

    ;
    if (((**l_203) = (*g_84)))
    {
        char *l_207 = &g_138;
        unsigned short *l_208 = &g_120;
        int l_210 = 8L;
        l_210 = ((func_10(p_30, p_30) && l_204) < (safe_lshift_func_int16_t_s_u((func_53(((func_53(p_30, (*g_74)) == g_189.f0) > ((*l_208) = (((&g_138 == l_207) & 65529UL) < p_30))), l_209) | (-3L)), 2)));

        ;
    }
    else
    {
        const short l_213 = 0x7104L;
        unsigned * const *l_221 = &g_75;
        unsigned * const **l_220 = &l_221;
        unsigned char *l_222 = &l_204;
        union U0 *l_227 = &g_228;
        short *l_289 = (void*)0;
        int *l_302 = &g_161;
        if ((safe_add_func_int32_t_s_s(l_213, func_10(((l_213 != (safe_add_func_uint32_t_u_u(((*l_202) = (safe_rshift_func_uint16_t_u_u(((g_119 <= p_30) == ((safe_add_func_int16_t_s_s(((((l_213 == (g_116 = (&g_74 == l_220))) ^ ((*l_222) = ((*p_29) = l_213))) | g_189.f1) > (*g_84)), (**l_203))) > l_213)), g_113))), l_223))) < p_30), l_224))))
        {
            int *l_225 = &g_161;
            union U0 *l_237 = (void*)0;
            int l_243 = 0xB8AA76C0L;
            unsigned short l_256 = 0x7FD1L;
            unsigned short l_281 = 0xA9DCL;
            (*l_203) = (*l_203);
            if ((l_225 == (void*)0))
            {
                unsigned **l_231 = &g_75;
                int l_234 = 0xA04F0C4FL;
                short *l_244 = &g_119;
                unsigned short *l_249 = &g_112;
                unsigned short *l_250 = &g_120;
                l_227 = l_226;

                ;
                (*l_225) = (((*p_28) <= ((*p_29) && (safe_sub_func_uint8_t_u_u(0x84L, func_53(g_228.f3, func_62(l_231, ((**l_203) >= func_10(((safe_mod_func_int32_t_s_s((*g_84), (((void*)0 != &g_138) | 0x2FL))) && l_234), g_82)), g_138)))))) & p_30);

                ;
                for (g_9 = (-8); (g_9 < 4); g_9 = safe_add_func_int16_t_s_s(g_9, 7))
                {
                    union U0 **l_238 = &l_226;
                    (*l_238) = l_237;

                    ;
                }

                ;
                g_24 = ((*l_202) = ((safe_mod_func_int16_t_s_s(((*l_244) = ((func_10((((*g_84) = (safe_rshift_func_uint8_t_u_s((g_24 | ((*l_244) = l_243)), (safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((1UL >= ((*l_250) = (l_234 = ((*l_249) = g_113)))), (safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s(p_30, (l_256 = func_10((*l_225), (safe_unary_minus_func_int16_t_s((+g_82))))))), l_257)))), g_82))))) || l_234), p_30) >= p_30) & p_30)), 8L)) == p_30));
            }
            else
            {
                int *l_258 = (void*)0;
                int l_270 = 0x830B3060L;
                int **l_297 = &l_258;
                if ((*g_84))
                {
                    int l_262 = 0x33E80119L;
                    unsigned short *l_268 = (void*)0;
                    unsigned short *l_269 = &g_108;
                    if (func_10(l_213, l_213))
                    {
                        union U0 **l_259 = &g_188;
                        int l_263 = 7L;
                        (*l_203) = l_225;
                        (*l_203) = l_258;

                        ;
                        (*l_259) = l_227;

                        ;
                        (*l_225) = (safe_add_func_int32_t_s_s((l_262 = 0xFD75F413L), (g_6 && (l_263 > (*l_225)))));
                    }
                    else
                    {
                        int *l_264 = (void*)0;
                        (*l_203) = l_264;

                        ;
                        (*l_202) = 0L;
                    }

                    ;
                    ;
                    if (((((*p_28) = (safe_unary_minus_func_uint8_t_u((g_82 <= ((((*l_269) = (g_189.f1 != (l_262 ^ (~(safe_lshift_func_int8_t_s_u((&g_84 == &l_202), 5)))))) > (&l_221 != (void*)0)) || (*g_75)))))) < g_138) == p_30))
                    {
                        (*l_225) = l_270;
                    }
                    else
                    {
                        int *l_272 = (void*)0;
                        union U0 *l_277 = &g_189;
                        union U0 **l_278 = &l_226;
                        union U0 **l_280 = &l_237;
                        short *l_282 = &g_116;
                        short *l_283 = &g_119;
                        int l_284 = (-9L);
                        char *l_285 = &l_223;
                        char *l_286 = &g_138;
                        int *l_296 = &g_82;
                        l_271 = ((*l_225) = p_30);
                        l_272 = l_225;

                        ;
                        (*l_202) = (+(safe_add_func_uint8_t_u_u(((*p_29) = g_189.f3), (safe_mod_func_uint8_t_u_u(((((*l_278) = l_277) == ((*l_280) = l_279)) <= (0x72DF72C8L <= (((*l_286) = ((*l_285) = ((func_10(g_228.f1, g_82) >= (((((*l_283) = (((**l_221) = l_281) == ((((*l_282) = (+g_228.f3)) <= 3UL) ^ p_30))) != 0x414FL) <= g_189.f3) > g_180)) ^ l_284))) < g_120))), l_213)))));

                        ;
                        (*l_296) = ((((0xD633L == g_82) & (((*p_29) = (l_283 == l_289)) & g_26)) | g_189.f2) | ((safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((l_213 | ((((safe_mod_func_int8_t_s_s(p_30, ((*l_225) = g_120))) == 0x512FD8B4L) ^ g_120) > p_30)), 4294967295UL)), g_138)) <= l_213));
                    }

                    ;
                }
                else
                {
                    return (*l_203);


                }

                ;
                ;
                ;
                (*l_297) = (g_84 = (void*)0);
            }

            ;
            ;
            ;
            ;
            ;
            for (g_116 = (-11); (g_116 <= (-20)); g_116--)
            {
                int l_300 = 0xAB55B0BAL;
                l_300 = p_30;
            }
            (*l_202) = (*l_202);
        }
        else
        {
            int *l_301 = &g_24;
            (*l_203) = (void*)0;

            ;
            l_302 = l_301;

            ;
            (*l_302) = 1L;
            (*l_301) = ((0xDDC8L ^ (~p_30)) <= g_112);
        }

        ;
        ;
        ;
        ;
        ;
    }

    ;
    ;
    ;
    return (*l_203);


}







static unsigned char * func_33(int * p_34, unsigned char p_35, const int * p_36, int p_37)
{
    unsigned short l_181 = 65535UL;
    short *l_182 = &g_116;
    unsigned char *l_184 = &g_32;
    unsigned char **l_183 = &l_184;
    unsigned short *l_187 = &g_120;
    (*g_84) = 0x33CF46C2L;
    if (((((*g_75) = (~func_10(func_10(((*l_182) = l_181), (((*l_187) = ((&p_35 != ((*l_183) = (void*)0)) >= (g_32 = (safe_add_func_int32_t_s_s(((~p_37) == p_37), func_10(p_37, p_35)))))) <= l_181)), l_181))) > 1L) == 0L))
    {
        g_84 = &g_24;

        ;
    }
    else
    {
        union U0 **l_190 = &g_188;
        union U0 *l_192 = &g_189;
        union U0 **l_191 = &l_192;
        int l_198 = (-5L);
        (*l_191) = ((*l_190) = g_188);
        for (g_112 = 15; (g_112 < 22); g_112++)
        {
            int l_197 = 0L;
            (*p_34) = (safe_lshift_func_int16_t_s_s(((0xA0061E2EL == l_197) <= func_10(l_197, l_198)), ((*l_182) = 0x0733L)));
            if (l_181)
                continue;
            for (g_108 = 0; (g_108 > 46); g_108 = safe_add_func_int16_t_s_s(g_108, 1))
            {
                (*g_84) = 0x28033D0BL;
            }
        }
    }

    ;
    return &g_32;


}







static int * func_38(unsigned p_39, char p_40, unsigned char * p_41, int * p_42, int p_43)
{
    unsigned char l_172 = 0x8FL;
    unsigned short *l_173 = &g_120;
    char *l_178 = &g_138;
    unsigned *l_179 = &g_180;
    (*p_42) = ((func_53(((*l_178) = ((((safe_sub_func_uint16_t_u_u((((*l_173) = (p_43 ^ ((((*p_42) = (func_10((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((((*l_173) = l_172) | (safe_sub_func_uint16_t_u_u(func_53(l_172, func_44(p_43)), 0xDA44L))), 0)), (safe_lshift_func_uint8_t_u_s((l_172 <= (-1L)), p_40)))) < 4294967293UL), p_39)), p_40) ^ 0x886503B7L)) & g_116) <= (-1L)))) | p_43), l_172)) || (*g_75)) != (*p_41)) & 0UL)), l_179) < 7L) || (*p_41));

    ;
    (*g_84) = (p_43 != 0x0BC0L);
    return &g_82;


}







static int * func_44(unsigned p_45)
{
    unsigned *l_58 = &g_9;
    int l_94 = 0x355D6903L;
    int **l_97 = &g_84;
    unsigned l_139 = 1UL;
    short *l_144 = &g_119;
    for (g_24 = 9; (g_24 <= (-3)); g_24--)
    {
        int * const l_52 = &g_24;
        unsigned *l_56 = &g_9;
        unsigned *l_59 = &g_9;
        if (p_45)
            break;
        for (g_9 = (-2); (g_9 < 4); ++g_9)
        {
            unsigned **l_57 = &l_56;
            int *l_102 = &l_94;
            int *l_133 = &g_82;
        }
    }
    (*g_84) = (-1L);
    (*g_84) = (-9L);
    (*l_97) = func_62(func_66((**l_97), (((**g_74) = (*g_75)) <= (l_139 && (safe_lshift_func_uint16_t_u_u(((func_10(((*l_144) = 2L), (**l_97)) >= ((void*)0 != &l_139)) <= 247UL), (**l_97)))))), (**l_97), p_45);

    ;
    return (*l_97);


}







static unsigned char func_53(char p_54, unsigned * p_55)
{
    unsigned *l_69 = &g_9;
    int l_76 = (-5L);
    char l_88 = 0x0AL;
    unsigned ***l_89 = &g_74;
    unsigned **l_91 = &l_69;
    unsigned ***l_90 = &l_91;
    int *l_92 = &l_76;
    int l_93 = 0L;
    for (g_26 = 13; (g_26 == 52); g_26 = safe_add_func_uint32_t_u_u(g_26, 8))
    {
        int **l_85 = &g_84;
        int *l_87 = &g_24;
        int **l_86 = &l_87;
        g_84 = func_62(func_66(p_54, (&g_9 == l_69)), p_54, (p_54 && ((~((g_32 == (-3L)) <= l_76)) != p_54)));

        ;
        (*l_86) = ((*l_85) = &g_82);

        ;
        ;
        return g_82;
    }
    (*l_89) = func_66(p_54, l_88);
    (*l_90) = ((*l_89) = (*l_89));

    ;
    (*l_92) = ((*g_84) = p_54);
    return l_93;
}







static int * func_62(unsigned ** p_63, unsigned p_64, int p_65)
{
    int **l_77 = (void*)0;
    int **l_78 = (void*)0;
    int *l_80 = &g_24;
    int **l_79 = &l_80;
    int *l_81 = &g_82;
    int *l_83 = &g_24;
    (*l_79) = &g_24;
    (*l_81) = g_26;
    (*l_79) = &g_82;

    ;
    return l_83;


}







static unsigned ** func_66(unsigned char p_67, int p_68)
{
    int *l_70 = (void*)0;
    unsigned *l_72 = &g_9;
    unsigned **l_71 = &l_72;
    int **l_73 = &l_70;
    l_70 = l_70;
    l_71 = l_71;
    (*l_73) = l_72;

    ;
    return g_74;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_189.f0, "g_189.f0", print_hash_value);
    transparent_crc(g_189.f1, "g_189.f1", print_hash_value);
    transparent_crc(g_189.f2, "g_189.f2", print_hash_value);
    transparent_crc(g_189.f3, "g_189.f3", print_hash_value);
    transparent_crc(g_228.f0, "g_228.f0", print_hash_value);
    transparent_crc(g_228.f1, "g_228.f1", print_hash_value);
    transparent_crc(g_228.f2, "g_228.f2", print_hash_value);
    transparent_crc(g_228.f3, "g_228.f3", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_337, "g_337", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
