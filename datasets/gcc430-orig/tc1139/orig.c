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



static int g_7 = 9L;
static unsigned g_47 = 4294967295UL;
static int *g_73 = &g_7;
static int **g_72 = &g_73;
static char g_81 = 1L;
static int g_88 = 0xA847E08AL;
static char g_93 = 0xD7L;
static unsigned g_99 = 1UL;
static unsigned short g_109 = 65535UL;
static unsigned short g_111 = 0xA011L;
static unsigned short g_113 = 0xB0FAL;
static char **g_135 = (void*)0;
static short g_155 = (-4L);
static int g_192 = 0xA995AD63L;
static unsigned g_194 = 0x7CD55F75L;
static int g_235 = 0xB3C1EEC7L;
static short g_241 = 3L;
static unsigned short g_244 = 0UL;
static unsigned char g_292 = 1UL;
static short g_301 = 0L;
static unsigned char g_303 = 0xE6L;
static int g_310 = (-1L);
static int g_316 = 0xC9B7E9D3L;
static int *g_315 = &g_316;
static int **g_344 = &g_73;
static unsigned char **g_359 = (void*)0;
static short **g_375 = (void*)0;
static unsigned short g_377 = 0xAD39L;
static int *g_389 = &g_192;
static int **g_388 = &g_389;
static unsigned *g_410 = &g_194;



static unsigned func_1(void);
static int * func_3(int * p_4, int * p_5);
static int * func_8(unsigned p_9, int * p_10, unsigned char p_11, unsigned short p_12, int * p_13);
static unsigned char func_16(unsigned p_17, int * p_18);
static int * func_19(int p_20, unsigned short p_21);
static unsigned char func_26(unsigned p_27, unsigned short p_28, int * p_29, unsigned short p_30);
static int * func_35(unsigned p_36, unsigned p_37, unsigned short * p_38, char p_39);
static char func_44(unsigned char p_45);
static unsigned char func_53(int * p_54);
static unsigned short func_60(int p_61, unsigned char p_62, int ** p_63, unsigned p_64, unsigned p_65);
static unsigned func_1(void)
{
    char l_2 = 0x1EL;
    int *l_6 = &g_7;
    int l_311 = 0xD3ECDBF4L;
    unsigned char l_312 = 248UL;
    unsigned *l_313 = &g_194;
    unsigned *l_314 = &g_47;
    int **l_477 = &g_315;
    (*l_477) = (l_2 , func_3(l_6, func_8((safe_add_func_int8_t_s_s(((((*l_314) = ((*l_313) = ((((((0xF0L < (((func_16(g_7, ((*l_6) , l_6)) | ((safe_add_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u((+g_113), (g_310 = ((g_113 || 0x36C6A78CL) | 65535UL)))), l_311)) ^ 4294967293UL), 0x16L)) | g_113)) && g_301) <= l_312)) < g_113) >= 0x91DCL) || g_93) , g_81) > g_113))) , g_7) , 0xD8L), g_113)), g_315, g_93, g_113, &g_316)));


    ;
    ;
    return (*g_410);
}







static int * func_3(int * p_4, int * p_5)
{
    return p_4;


}







static int * func_8(unsigned p_9, int * p_10, unsigned char p_11, unsigned short p_12, int * p_13)
{
    unsigned l_319 = 0xB9A496BBL;
    unsigned l_334 = 0x53DDB62CL;
    unsigned char **l_360 = (void*)0;
    int *l_394 = &g_316;
    int **l_404 = &g_315;
    short *l_422 = &g_301;
    char *l_438 = &g_81;
    char **l_437 = &l_438;
    int l_450 = (-8L);
    if (((safe_rshift_func_uint16_t_u_u(7UL, 7)) != l_319))
    {
        short *l_320 = &g_301;
        int l_327 = 3L;
        int **l_337 = &g_315;
        int ***l_338 = (void*)0;
        int ***l_339 = (void*)0;
        int ***l_340 = (void*)0;
        int ***l_341 = &g_72;
        int ***l_342 = &g_72;
        int ***l_343 = &g_72;
        int ***l_345 = &g_72;
        int ***l_346 = &g_72;
        int ***l_347 = &g_72;
        int **l_348 = &g_73;
        unsigned char *l_380 = &g_292;
        unsigned char **l_379 = &l_380;
        int *l_395 = &g_7;
        (*p_13) = ((!(((*l_320) = p_9) , (safe_sub_func_int16_t_s_s((g_99 == 0x0DC0L), (safe_sub_func_uint32_t_u_u(6UL, (((p_9 , (safe_mul_func_uint8_t_u_u((l_327 != (safe_rshift_func_int16_t_s_u(g_194, ((safe_rshift_func_uint16_t_u_s(g_99, 12)) ^ (safe_rshift_func_uint16_t_u_u(((+((p_12 != 0x71L) < g_113)) , 0x0A81L), g_301)))))), p_9))) != 0xBC80L) , g_301))))))) | l_334);
        if ((safe_sub_func_int32_t_s_s(l_327, ((g_344 = (l_337 = &g_73)) == (l_348 = &g_73)))))
        {
            short ***l_349 = (void*)0;
            p_10 = (*g_344);

            ;
            (**g_344) = ((~65535UL) , ((void*)0 != l_349));
        }
        else
        {
            unsigned l_352 = 0xF79DBF3EL;
            int *l_358 = (void*)0;
            int *l_378 = &g_316;
            char *l_384 = &g_81;
            char **l_383 = &l_384;
            unsigned *l_405 = &g_194;
            unsigned short *l_406 = &g_111;
            unsigned **l_409 = &l_405;
            if ((*g_73))
            {
                (*g_315) = (safe_lshift_func_int16_t_s_s(0x5BEFL, 0));
            }
            else
            {
                short *l_361 = &g_241;
                int *l_364 = &g_88;
                unsigned char *l_371 = &g_292;
                unsigned char **l_370 = &l_371;
                if (l_319)
                {
                    unsigned l_357 = 4294967295UL;
                    (*g_73) = (l_352 = (*p_13));
                    for (g_310 = 25; (g_310 <= (-1)); --g_310)
                    {
                        p_10 = (void*)0;

                        ;
                        l_357 = ((safe_mul_func_int16_t_s_s(p_12, p_12)) && ((*p_13) = l_352));
                        return l_358;


                    }
                    l_360 = g_359;
                }
                else
                {
                    if ((((~((l_319 , l_361) != ((g_81 , p_11) , l_361))) <= p_9) , (safe_lshift_func_int16_t_s_u(p_11, 13))))
                    {
                        return l_364;


                    }
                    else
                    {
                        return p_13;


                    }
                }
                for (g_192 = 0; (g_192 != 7); g_192++)
                {
                    unsigned short *l_367 = &g_113;
                    unsigned char ***l_372 = (void*)0;
                    unsigned char ***l_373 = &l_370;
                    int l_374 = 1L;
                    unsigned *l_376 = (void*)0;
                    if ((func_26(g_109, p_9, func_19(g_81, ((*l_367) = 0xA831L)), ((*p_10) && (safe_rshift_func_int8_t_s_s(((((*l_373) = l_370) != ((func_26((func_26((g_377 = (((((-8L) | (((p_12 && p_12) | l_374) >= (*g_315))) , 0x7F8D4304L) , g_375) == &l_361)), g_109, p_13, g_241) , 4294967291UL), g_241, l_378, p_11) , p_9) , l_379)) , 0x9EL), 3)))) , (*g_315)))
                    {
                        return p_13;


                    }
                    else
                    {
                        char ***l_385 = &g_135;
                        (*l_337) = func_19(((safe_sub_func_uint16_t_u_u(0UL, g_377)) <= ((l_383 == ((*l_385) = g_135)) > (safe_add_func_int16_t_s_s(l_374, (g_388 != (p_11 , &g_389)))))), ((*l_367) = (((safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((g_109 || 0L), p_11)) & p_11), (-1L))) , 0x0DE8FBF3L) == (-4L))));
                        return l_394;


                    }
                }
                return l_395;


            }
            (*l_348) = func_35(g_301, ((*l_405) = func_60((*g_389), func_60((*l_394), ((safe_mod_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((**g_344), p_12)), (**l_337))), ((*l_405) = ((safe_rshift_func_int8_t_s_u(0x11L, ((((g_194 >= ((((l_404 = &p_10) != (void*)0) , g_292) & p_11)) , 9L) , g_155) , g_244))) ^ 0xA498L)))) , p_9), &g_73, g_7, p_11), &g_315, g_113, g_292)), l_406, (*l_394));

            ;
            ;
            (**g_344) = ((((p_11 && ((*p_13) == (0x03788BE3L || 0xF301A20FL))) , ((safe_add_func_int16_t_s_s((((*l_409) = &g_194) != (g_410 = p_13)), g_301)) , (((***l_346) = (safe_lshift_func_uint8_t_u_s(p_11, 3))) || (p_9 , (*g_315))))) == p_11) == 0x72C8L);

            ;
            (*l_404) = func_19((*l_378), func_16(g_316, l_378));


            ;
        }


        ;
        ;
        ;
        ;
        (*l_348) = p_10;
        for (g_377 = (-10); (g_377 < 1); g_377 = safe_add_func_uint8_t_u_u(g_377, 3))
        {
            int *l_415 = (void*)0;
            int l_420 = 0x656B053FL;
            short *l_421 = &g_155;
            (*g_344) = func_19((((((0xDBB3L == ((void*)0 == l_415)) ^ (((**l_404) != (safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s((*g_315), (-5L))), (((**l_404) | func_26(((l_420 ^ (((l_421 != l_422) , (*g_315)) > (*g_410))) && p_11), l_420, (*l_404), (*l_394))) , 249UL)))) == (*p_13))) ^ (**l_404)) , p_9) < 0UL), p_9);
            (*g_73) = (safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(p_11, 0x04L)), g_93)), p_11));
            (*p_10) = (p_11 & ((**l_337) || (*l_394)));
        }
    }
    else
    {
        char l_431 = 0x30L;
        unsigned char *l_432 = &g_303;
        char **l_439 = (void*)0;
        unsigned short *l_440 = &g_109;
        int *l_441 = &g_88;
        unsigned l_449 = 1UL;
        char l_460 = 8L;
        if (((((*l_440) = (l_431 | ((*l_432) = ((l_432 != &g_303) >= (safe_sub_func_uint8_t_u_u(((p_9 < p_11) && 4294967295UL), ((((((safe_rshift_func_uint16_t_u_s(p_9, 10)) && (l_437 == l_439)) > 0xCB4B0FBFL) <= 0UL) , l_431) & p_12))))))) != 0x3486L) , 0x1DFCF9E4L))
        {
            (*l_404) = (*g_344);

            ;
            (**l_404) = ((((p_11 = g_88) == ((**l_437) = 0xEDL)) > g_192) >= ((*p_10) = (*p_13)));
            l_441 = (void*)0;

            ;
        }
        else
        {
            for (g_194 = 0; (g_194 == 40); g_194++)
            {
                (*l_404) = (*l_404);
                for (g_377 = (-18); (g_377 <= 23); ++g_377)
                {
                    int *l_446 = &g_88;
                    return l_446;


                }
            }
            return (*g_344);


        }

        ;
        ;
        for (p_9 = 0; (p_9 < 30); p_9 = safe_add_func_uint16_t_u_u(p_9, 8))
        {
            unsigned short l_451 = 0UL;
            short *l_458 = (void*)0;
            short *l_459 = &g_241;
            (*p_10) = (g_235 <= (((*g_73) = (l_449 <= ((*l_438) = (((*l_422) = (g_7 >= ((*l_432) = l_450))) , 6L)))) <= ((l_451 <= ((*l_459) = ((p_11 , (*p_10)) || ((p_11 = ((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(((((void*)0 == &g_292) , 0x2C31L) && l_451), p_11)) || g_194), g_113)), 0x37L)) & l_451)) || p_12)))) , (*l_394))));
            if (l_460)
                continue;
        }
        (*l_394) = 0L;
    }


    ;
    ;
    ;
    ;
    for (g_155 = (-13); (g_155 >= 16); ++g_155)
    {
        int l_463 = 0L;
        int l_467 = 0x89674876L;
        short l_468 = 0x5C11L;
        short *l_473 = &g_241;
        unsigned short l_474 = 65535UL;
        (*g_73) = (-1L);
        (*l_404) = func_35(l_463, ((*l_394) , (l_463 <= (((*g_410) = (((((safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u(l_467)), l_468)) , func_60(((**g_388) = (safe_mul_func_int16_t_s_s(((*l_422) = (**l_404)), (l_467 = ((*l_473) = ((~0xE70D1222L) != (safe_lshift_func_int16_t_s_u(0xC377L, 9)))))))), l_468, &g_73, (*l_394), p_9)) >= (*p_10)) > (**l_404)) || (*g_315))) > l_474))), l_422, g_111);

        ;
        for (g_292 = 16; (g_292 < 41); g_292++)
        {
            return p_10;


        }
        l_467 = (**g_344);
    }
    return p_10;


}







static unsigned char func_16(unsigned p_17, int * p_18)
{
    unsigned short *l_33 = (void*)0;
    int l_34 = 0xBFC75DAAL;
    short *l_239 = (void*)0;
    short *l_240 = &g_241;
    int l_242 = 0x0C314D70L;
    unsigned short *l_243 = &g_244;
    int l_245 = 0xE226BEB4L;
    int *l_248 = &g_88;
    int **l_258 = (void*)0;
    int **l_259 = &l_248;
    int ***l_266 = &l_259;
    unsigned *l_273 = &g_194;
    int l_274 = 0x4C1CF038L;
    char *l_277 = &g_81;
    (*l_259) = func_19(g_7, (((*l_248) = ((safe_lshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(((func_26(g_7, (l_34 = (safe_rshift_func_uint16_t_u_s(p_17, 7))), func_35((safe_mod_func_uint32_t_u_u(p_17, (((safe_mul_func_int8_t_s_s(func_44(g_7), ((l_242 = ((*l_240) = 0xC683L)) & 0xA44FL))) <= ((*l_243) = p_17)) , p_17))), g_194, &g_113, l_245), l_245) < g_7) && 7UL), p_17)) > g_7), 1)) ^ l_245)) > (*p_18)));


    ;
    if ((func_26(((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(g_241, (((((*l_266) = (void*)0) == ((+(func_26(p_17, ((*l_243) = ((safe_sub_func_uint16_t_u_u((g_111 = (safe_mod_func_int32_t_s_s(((void*)0 == l_239), g_192))), ((*g_73) | ((*l_273) = (((safe_lshift_func_int16_t_s_s((*l_248), 4)) , (((((*l_248) || 255UL) , (void*)0) == &g_235) , (*l_248))) > 0UL))))) , g_155)), p_18, (*l_248)) , 0x16E46704L)) , (void*)0)) <= g_81) >= (*p_18)))), p_17)), l_274)) , 1UL), g_7, &g_7, p_17) >= 0xD3L))
    {
        int *l_279 = (void*)0;
        int **l_278 = &l_279;
        int *l_281 = &g_192;
        int **l_280 = &l_281;
        int l_288 = 0x8622F486L;
        unsigned short *l_289 = &g_111;
        int **l_290 = &l_248;
        (*l_290) = (((safe_add_func_uint32_t_u_u(l_288, (*l_248))) , p_17) , (void*)0);

        ;
    }
    else
    {
        unsigned char *l_291 = &g_292;
        char ***l_297 = &g_135;
        char ****l_298 = &l_297;
        int *l_299 = &l_245;
        short *l_300 = &g_301;
        unsigned char *l_302 = &g_303;
        (*l_248) = (((*l_302) = ((g_155 > ((*l_291) = 0x20L)) < ((((safe_rshift_func_uint8_t_u_u(g_235, 6)) ^ (-5L)) , (safe_rshift_func_uint16_t_u_u(func_26(g_241, (((*l_300) = func_26(g_109, (g_109 & ((*l_277) = (((*l_298) = l_297) != (void*)0))), l_299, p_17)) ^ (*l_299)), &g_235, (*l_299)), p_17))) ^ g_113))) < g_244);
        return p_17;
    }

    ;
    ;
    g_73 = p_18;

    ;
    l_248 = &g_88;

    ;
    return g_292;
}







static int * func_19(int p_20, unsigned short p_21)
{
    unsigned *l_249 = &g_194;
    short *l_250 = &g_155;
    unsigned *l_251 = &g_99;
    int l_254 = 0x52072D0BL;
    unsigned l_255 = 0xBD3BCB1EL;
    int **l_256 = &g_73;
    int *l_257 = (void*)0;
    l_257 = ((0x2DL <= 0xACL) , ((*l_256) = func_35(p_20, ((*l_249) = (g_88 && (*g_73))), &g_109, (func_26((l_250 != (func_26(((*l_251) = g_81), ((safe_sub_func_int16_t_s_s((func_26((p_20 != p_20), g_111, l_251, l_254) & p_20), l_255)) | (-2L)), &l_254, l_255) , l_250)), p_21, &l_254, p_20) > l_254))));

    ;
    ;
    return (*l_256);


}







static unsigned char func_26(unsigned p_27, unsigned short p_28, int * p_29, unsigned short p_30)
{
    int *l_247 = (void*)0;
    p_29 = l_247;

    ;
    return p_30;
}







static int * func_35(unsigned p_36, unsigned p_37, unsigned short * p_38, char p_39)
{
    int *l_246 = &g_7;
    return l_246;


}







static char func_44(unsigned char p_45)
{
    unsigned *l_46 = &g_47;
    int l_48 = 0x87972E7EL;
    unsigned l_238 = 0x425B5E63L;
    l_238 = ((((*l_46) = g_7) >= l_48) == (safe_add_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(func_53(&l_48), (p_45 || (safe_mul_func_uint8_t_u_u(p_45, (p_45 != p_45)))))), l_48)));


    return l_238;
}







static unsigned char func_53(int * p_54)
{
    int *l_55 = &g_7;
    int *l_59 = &g_7;
    int **l_58 = &l_59;
    char *l_80 = &g_81;
    int **l_122 = &l_59;
    unsigned short *l_172 = &g_111;
    int *l_191 = &g_192;
    unsigned *l_193 = &g_194;
    int ***l_195 = (void*)0;
    unsigned l_222 = 1UL;
    short *l_224 = &g_155;
    short **l_223 = &l_224;
    if (((p_54 != l_55) & ((safe_lshift_func_int16_t_s_s((p_54 == ((*l_58) = p_54)), 11)) > ((*l_80) = ((*l_55) >= (~(g_7 , func_60((*l_55), (safe_mod_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(255UL, 7)) || ((*l_55) & (*l_55))), 1L)), (-1L))), g_72, (*l_55), (*l_55)))))))))
    {
        for (g_81 = 20; (g_81 == (-3)); --g_81)
        {
            short l_84 = 0L;
            l_84 = (*p_54);
            if ((*g_73))
                break;
            if ((**g_72))
                break;
        }
    }
    else
    {
        short l_123 = 0x049DL;
        int l_126 = 1L;
        unsigned l_145 = 0x55696F08L;
        int **l_151 = &l_59;
        int **l_163 = &l_55;
        for (g_81 = 0; (g_81 == 17); ++g_81)
        {
            int *l_87 = &g_88;
            int **l_125 = &g_73;
            int *l_159 = &g_88;
            int *l_160 = &l_126;
            (*l_87) = (*p_54);
        }
        p_54 = ((((((((void*)0 != &g_135) , func_60((*l_55), ((((safe_mul_func_uint8_t_u_u(0xA7L, ((((*l_55) != 0x880E7157L) & 0xD8L) , (**l_163)))) != 0x8A79L) | (**l_122)) >= (*l_55)), &l_59, (**l_122), (**l_151))) , (**l_151)) , (**l_151)) > g_99) , (**l_163)) , (void*)0);

        ;
        ;
    }



    ;
    if ((safe_rshift_func_int16_t_s_s(0x5949L, (((+((safe_lshift_func_int8_t_s_u(((**l_58) < ((((((*l_172) = g_155) , (safe_sub_func_uint32_t_u_u((((((((*l_59) && (**l_122)) ^ (*g_73)) | g_192) , (void*)0) != l_195) < (**g_72)), (**g_72)))) && 0x2E01L) , (**l_58)) > (*g_73))), 2)) <= 0xA41B15C3L)) , 253UL) & (**l_122)))))
    {
        (*l_122) = (*g_72);


        for (g_99 = (-10); (g_99 <= 52); ++g_99)
        {
            char l_198 = (-5L);
            return l_198;


        }
    }
    else
    {
        int l_203 = 0xE8BB6BBBL;
        short *l_214 = (void*)0;
        short *l_215 = (void*)0;
        short *l_216 = &g_155;
        unsigned short l_219 = 0UL;
        unsigned **l_220 = &l_193;
        int l_221 = (-10L);
        (*l_122) = ((((safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(l_203, (safe_mul_func_uint8_t_u_u(((((*l_191) = (1UL || ((((safe_lshift_func_uint16_t_u_s((*l_55), 1)) , (((l_221 = ((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((((*l_216) = g_99) & (g_7 & (g_109 = ((*l_172) = (safe_mod_func_int16_t_s_s(l_219, (8UL & (((*l_220) = (((*l_59) ^ ((~g_93) , (*l_59))) , (void*)0)) == &g_194)))))))), l_219)), 5)) , g_113), 0x0EL)) != l_203)) | (**g_72)) > g_192)) > g_93) , (**l_58)))) , g_7) && (-1L)), 0L)))), (*g_73))) , 0xE8L) | (**l_122)) , p_54);


        ;
        l_222 = ((*g_73) & 0x38FFB32EL);
    }


    ;
    if ((*g_73))
    {
        short ***l_225 = &l_223;
        (*l_122) = (void*)0;

        ;
        (*l_225) = l_223;
        return g_192;


    }
    else
    {
        unsigned l_230 = 0x011ED2F5L;
        unsigned **l_231 = &l_193;
        int *l_232 = &g_88;
        int *l_233 = (void*)0;
        int *l_234 = &g_235;
        (*l_58) = (*g_72);
        (*l_234) = (safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(g_81, (l_230 <= (((*g_73) == (l_231 == (void*)0)) , (((*l_232) = l_230) == (g_111 == (g_109 , g_192))))))), g_93));
    }
    return g_81;


}







static unsigned short func_60(int p_61, unsigned char p_62, int ** p_63, unsigned p_64, unsigned p_65)
{
    char l_76 = 0x09L;
    int ***l_77 = &g_72;
    l_76 = (safe_rshift_func_uint16_t_u_u(g_7, 14));
    (*l_77) = (p_64 , p_63);


    for (p_65 = (-4); (p_65 > 11); p_65 = safe_add_func_int16_t_s_s(p_65, 5))
    {
        if ((*g_73))
            break;
        return g_7;
    }
    (*p_63) = (*g_72);
    return g_7;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_303, "g_303", print_hash_value);
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_316, "g_316", print_hash_value);
    transparent_crc(g_377, "g_377", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
