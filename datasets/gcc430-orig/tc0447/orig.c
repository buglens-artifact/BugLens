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



static int g_7 = (-1L);
static int **g_43 = (void*)0;
static unsigned g_54 = 0xE7C525ACL;
static unsigned short g_58 = 0xBBD2L;
static unsigned short g_60 = 0x174AL;
static int **g_72 = (void*)0;
static int g_82 = 2L;
static short g_85 = (-2L);
static int g_91 = 0L;
static unsigned char g_119 = 252UL;
static unsigned char *g_118 = &g_119;
static int g_182 = 0x466A0411L;
static int *g_195 = (void*)0;
static unsigned char g_201 = 254UL;
static int g_226 = 2L;
static char g_246 = 0xC9L;
static unsigned char g_424 = 2UL;
static unsigned char ***g_450 = (void*)0;
static char g_482 = (-7L);



static int func_1(void);
static int * func_2(int p_3);
static int * func_8(unsigned char p_9, int * p_10, int * p_11, int * p_12, char p_13);
static int * func_14(int * p_15, int p_16);
static unsigned short func_18(int * p_19, int * p_20, int p_21, int p_22);
static int * func_23(unsigned p_24, int * p_25);
static unsigned char func_26(int p_27);
static int ** func_28(unsigned p_29, unsigned p_30, unsigned char p_31);
static unsigned short func_32(int * p_33, int ** p_34);
static int ** func_35(unsigned char p_36, int ** p_37, unsigned char p_38, int ** p_39);
static int func_1(void)
{
    int *l_6 = &g_7;
    int l_254 = (-10L);
    int **l_295 = &g_195;
    int **l_296 = (void*)0;
    int **l_297 = &g_195;
    int *l_298 = &l_254;
    short l_494 = 0L;
    unsigned l_521 = 0UL;
    (*l_295) = func_2((safe_add_func_uint8_t_u_u((l_6 != (l_298 = func_8((l_6 != l_6), func_14(l_6, (*l_6)), l_6, l_6, l_254))), 0x45L)));

    ;
    ;
    for (g_85 = 15; (g_85 == (-2)); g_85 = safe_sub_func_uint8_t_u_u(g_85, 1))
    {
        int *l_495 = &g_82;
        unsigned *l_497 = &g_54;
        unsigned **l_496 = &l_497;
        unsigned ***l_498 = &l_496;
        unsigned l_505 = 0x0A9DDC4FL;
        (*l_495) = ((*l_6) = l_494);
        (*l_498) = l_496;
        if ((*l_495))
            break;
        for (g_82 = 9; (g_82 < 6); g_82 = safe_sub_func_int8_t_s_s(g_82, 1))
        {
            int l_512 = 1L;
            unsigned l_518 = 0xA756EBC4L;
            if (((safe_lshift_func_int16_t_s_u(((safe_sub_func_int8_t_s_s(g_182, (l_505 <= (safe_sub_func_uint8_t_u_u(((*l_495) == 0L), (-1L)))))) | (((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(0UL, 4)) <= ((*l_6) = g_226)), (*l_495))) > ((*g_118) = 0x23L)) > l_512)), 3)) <= 0x24L))
            {
                (*l_295) = &g_226;

                ;
                for (g_91 = 27; (g_91 != (-27)); g_91 = safe_sub_func_int16_t_s_s(g_91, 9))
                {
                    (*l_295) = (void*)0;

                    ;
                }

                ;
            }
            else
            {
                unsigned short l_517 = 0UL;
                (*l_6) = ((safe_rshift_func_int16_t_s_s((l_512 != l_517), 15)) , l_518);
                (*l_6) = g_58;
            }
            (*l_295) = l_495;

            ;
            if ((safe_rshift_func_uint8_t_u_u(((*g_118) = l_518), (&g_482 == (void*)0))))
            {
                (*l_6) = 0xC1FB84D0L;
            }
            else
            {
                return (*g_195);
            }
            (*l_6) = (*l_6);
        }
    }

    ;
    return l_521;
}







static int * func_2(int p_3)
{
    int *l_302 = &g_226;
    unsigned short l_330 = 65528UL;
    int *l_331 = (void*)0;
    unsigned l_335 = 0UL;
    unsigned *l_344 = &g_54;
    char *l_345 = &g_246;
    short l_470 = 0xC962L;
    int *l_491 = &g_226;
    if (((safe_lshift_func_uint8_t_u_s(p_3, g_85)) != 0x01C76F28L))
    {
        int *l_301 = &g_226;
        l_302 = l_301;
    }
    else
    {
        int l_303 = 9L;
        int *l_306 = &g_91;
        int *l_307 = &g_182;
        int **l_308 = (void*)0;
        int **l_309 = &l_302;
        int **l_310 = &g_195;
        (*l_310) = ((l_303 != (safe_mod_func_uint32_t_u_u(p_3, (((*l_306) = 0L) , g_182)))) , ((*l_309) = (l_307 = func_8((*g_118), &g_226, l_302, l_302, l_303))));

        ;
        ;
        ;
        for (g_85 = 0; (g_85 <= 9); g_85++)
        {
            int **l_314 = (void*)0;
        }
        (*l_309) = &p_3;

        ;
    }


    ;
    if (((*l_302) && (safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((p_3 , (safe_rshift_func_int8_t_s_s((-1L), (*l_302)))), (safe_mod_func_int32_t_s_s((0x10893331L && ((*l_344) = g_58)), (((*l_345) = g_91) && ((*l_345) = 0x8EL)))))), 0))))
    {
        int **l_346 = &l_331;
        int *l_351 = (void*)0;
        int *l_352 = &g_91;
        (*l_346) = func_14(((*l_346) = &p_3), ((*l_352) = (((*l_302) | ((*g_118) = (p_3 == (*l_302)))) , ((safe_lshift_func_int8_t_s_s(p_3, 1)) , (safe_lshift_func_int8_t_s_u((+g_58), 6))))));

        ;
    }
    else
    {
        unsigned l_353 = 1UL;
        int *l_359 = &g_82;
        if (l_353)
        {
            unsigned short *l_355 = &l_330;
            unsigned short **l_354 = &l_355;
            int *l_358 = &g_82;
            int **l_360 = &l_302;
            (*l_360) = ((l_354 != &l_355) , ((safe_add_func_uint32_t_u_u((g_54 = g_246), (~(p_3 , (p_3 <= ((*l_358) = p_3)))))) , &p_3));

            ;
        }
        else
        {
            int **l_361 = &l_331;
            (*l_361) = &p_3;

            ;
        }

        ;
        for (g_201 = 0; (g_201 >= 54); g_201 = safe_add_func_uint16_t_u_u(g_201, 6))
        {
            int *l_364 = (void*)0;
            return l_364;


        }
    }

    ;
    (*l_302) = (!(safe_sub_func_int8_t_s_s(p_3, (*l_302))));
    for (g_58 = 0; (g_58 == 13); ++g_58)
    {
        int *l_369 = &g_182;
        int **l_370 = &l_331;
        unsigned char **l_376 = &g_118;
        unsigned char ***l_375 = &l_376;
        int *l_393 = &g_182;
        unsigned short *l_489 = &g_58;
        (*l_370) = l_369;

        ;
        for (p_3 = 0; (p_3 > (-9)); p_3 = safe_sub_func_int32_t_s_s(p_3, 7))
        {
            unsigned char **l_374 = &g_118;
            unsigned char ***l_373 = &l_374;
            int l_377 = 0x1FAF7DA5L;
            int l_391 = 0L;
            if ((((l_373 != l_375) <= (l_377 , (safe_sub_func_uint8_t_u_u((*l_302), p_3)))) == p_3))
            {
                for (l_330 = (-23); (l_330 == 11); l_330++)
                {
                    for (l_335 = 0; (l_335 >= 53); l_335 = safe_add_func_int8_t_s_s(l_335, 4))
                    {
                        g_195 = ((*l_370) = &p_3);

                        ;
                        ;
                    }
                }


                ;
                (*l_370) = &l_377;

                ;
                (*l_370) = &p_3;

                ;
            }
            else
            {
                unsigned short **l_389 = (void*)0;
                int *l_390 = &l_377;
                unsigned l_392 = 0x9F015E47L;
                (*l_369) = l_377;
                for (g_182 = (-13); (g_182 <= 16); ++g_182)
                {
                    int *l_386 = &g_82;
                    (*l_386) = (-1L);
                }
                l_392 = (safe_sub_func_uint8_t_u_u((p_3 , ((***l_373) = (((l_389 != (void*)0) ^ p_3) && (((*l_344) = p_3) && ((*l_390) = ((((*l_302) < (*l_302)) <= ((((**l_370) = p_3) | (*l_302)) == p_3)) , 0x9F74054FL)))))), l_391));
            }


            ;
            return l_393;



        }
        for (g_246 = 0; (g_246 < 20); g_246 = safe_add_func_uint16_t_u_u(g_246, 1))
        {
            int l_396 = 0xFB830CA0L;
            int **l_401 = &g_195;
        }
    }

    ;
    return l_491;


}







static int * func_8(unsigned char p_9, int * p_10, int * p_11, int * p_12, char p_13)
{
    char l_263 = 0x8CL;
    unsigned char **l_279 = &g_118;
    unsigned short *l_291 = &g_60;
    int l_294 = 0xEEFBA7E3L;
    if ((~(p_9 | p_13)))
    {
        short *l_255 = (void*)0;
        short *l_256 = &g_85;
        int l_257 = 0L;
        unsigned char l_258 = 0UL;
        int *l_274 = &g_91;
        char *l_287 = &g_246;
        unsigned short *l_293 = (void*)0;
        unsigned short **l_292 = &l_293;
        (*p_11) = ((g_85 , ((*l_256) = func_32(p_11, &p_11))) & (~l_257));
        if (l_258)
        {
            return p_11;


        }
        else
        {
            unsigned char **l_261 = (void*)0;
            int *l_262 = &l_257;
            (*l_262) = ((p_13 , (((safe_sub_func_int32_t_s_s((l_261 == &g_118), (((*g_118) == p_13) > ((func_32(l_262, &g_195) != p_13) > 0x591E915DL)))) <= l_263) & p_9)) & p_13);
            if (l_257)
                goto lbl_264;
lbl_264:
            (*p_11) = (*p_12);
            for (l_257 = 0; (l_257 < (-14)); l_257--)
            {
                short l_273 = (-10L);
                int *l_283 = &g_182;
                if ((safe_sub_func_int16_t_s_s(l_263, ((g_7 > (l_256 == l_255)) > (p_9 > ((l_263 || (p_9 , p_9)) , ((0L && 0x31240E19L) , g_54)))))))
                {
                    for (l_258 = 0; (l_258 <= 39); ++l_258)
                    {
                        char *l_271 = &l_263;
                        unsigned short *l_272 = &g_58;
                        (*p_10) = (g_82 , ((!((*l_271) = func_32(p_12, &g_195))) >= 0L));
                        (*p_11) = ((((*l_272) = 4UL) & (((l_273 && ((void*)0 != l_274)) & ((*l_262) & l_273)) == 0x5CL)) ^ (safe_sub_func_uint8_t_u_u((*g_118), (safe_rshift_func_uint8_t_u_s((g_54 <= l_257), 3)))));
                    }
                }
                else
                {
                    int *l_280 = &g_7;
                    int **l_281 = (void*)0;
                    int **l_282 = &l_262;
                    l_261 = l_279;

                    ;
                    (*l_282) = l_280;

                    ;
                }

                ;
                ;
                return l_283;


            }
        }
        (*p_12) = ((l_257 | ((void*)0 != &p_13)) | 0x57L);
        l_294 = (safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((((*l_287) = l_258) & p_13))), (safe_unary_minus_func_uint16_t_u((safe_add_func_uint16_t_u_u((65535UL || (l_291 == (p_13 , ((*l_292) = &g_60)))), l_257))))));

        ;
    }
    else
    {
        return p_12;


    }
    return p_11;


}







static int * func_14(int * p_15, int p_16)
{
    unsigned l_17 = 0x5CA42045L;
    int l_202 = 0x460A3BB4L;
    if (l_17)
    {
        return &g_7;


    }
    else
    {
        unsigned char *l_200 = &g_201;
        int *l_225 = &g_226;
        unsigned short *l_238 = &g_58;
        if ((((*l_238) = ((func_18(&g_7, func_23(((func_26(p_16) , g_82) < (l_202 = ((*l_200) = 0xDAL))), p_15), ((*l_225) = 0x4771272EL), p_16) && g_91) ^ 1UL)) <= p_16))
        {
            unsigned l_241 = 4294967294UL;
            int *l_253 = &g_226;
            for (g_182 = (-4); (g_182 >= 9); g_182++)
            {
                char *l_245 = &g_246;
                int l_252 = 0x808AF1C7L;
                (*p_15) = l_241;
                g_195 = ((((*l_225) = p_16) | (l_202 , (safe_mod_func_uint32_t_u_u(((((*l_200) = ((p_16 || (g_91 < p_16)) >= ((safe_unary_minus_func_int8_t_s(func_32(func_23((((*l_200) = ((*g_118) = ((void*)0 == l_245))) && (safe_sub_func_uint16_t_u_u(0xE92FL, ((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(((((l_241 , 0xFCL) >= p_16) == 252UL) , l_252))), l_202)) || 9UL)))), p_15), &g_195))) || 1L))) == g_82) && g_82), 0x1B82DB4BL)))) , (void*)0);

                ;
                return l_253;


            }
            return &g_7;


        }
        else
        {
            return p_15;


        }
    }
}







static unsigned short func_18(int * p_19, int * p_20, int p_21, int p_22)
{
    unsigned l_230 = 1UL;
    int **l_231 = &g_195;
    char l_236 = 0xFBL;
    int l_237 = 0x5A83E09CL;
    for (g_226 = 0; (g_226 >= (-25)); g_226 = safe_sub_func_int8_t_s_s(g_226, 2))
    {
        int **l_229 = &g_195;
        if ((*p_20))
            break;
        (*l_229) = &p_21;

        ;
        (*l_229) = (*l_229);
    }


    (*l_231) = func_23(l_230, &p_21);

    ;
    (*p_20) = ((safe_add_func_uint8_t_u_u((**l_231), (**l_231))) , (safe_mod_func_uint32_t_u_u(l_236, l_237)));
    return g_201;


}







static int * func_23(unsigned p_24, int * p_25)
{
    int *l_203 = (void*)0;
    int **l_204 = &l_203;
    unsigned short *l_220 = &g_58;
    int l_221 = 0xC894F2F5L;
    int l_222 = (-1L);
    unsigned char **l_224 = &g_118;
    unsigned char ***l_223 = &l_224;
    (*l_204) = l_203;
    for (g_58 = 0; (g_58 > 60); g_58 = safe_add_func_uint32_t_u_u(g_58, 6))
    {
        short l_211 = 0x0993L;
        (*p_25) = (g_85 || p_24);
        (*p_25) = (((-6L) <= ((safe_rshift_func_uint8_t_u_s(p_24, ((*p_25) < ((safe_rshift_func_uint16_t_u_s(p_24, 12)) && ((0L < (*g_118)) , (((*g_118) = ((((l_211 ^ p_24) && l_211) | l_211) == g_91)) & p_24)))))) < l_211)) & p_24);
        if ((*p_25))
            break;
    }
    (*l_223) = ((l_222 = (p_24 <= (safe_add_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u(0x96L, 1)), 15)) >= (0x9ADBD7DAL || (*p_25))), (p_24 <= (g_201 , ((+((safe_lshift_func_int16_t_s_u((p_24 | ((p_24 || (((((((*l_220) = p_24) <= (-1L)) >= (*g_118)) || (*p_25)) , l_221) > (*p_25))) || (*p_25))), 11)) , g_182)) ^ g_82))))))) , (void*)0);

    ;
    return p_25;


}







static unsigned char func_26(int p_27)
{
    short l_40 = 1L;
    int ***l_188 = (void*)0;
    int ***l_189 = (void*)0;
    int ***l_190 = (void*)0;
    int ***l_191 = &g_43;
    (*l_191) = func_28((((((!1L) <= func_32(&g_7, func_35(l_40, ((g_7 == (((g_7 != l_40) == g_7) < (safe_lshift_func_uint16_t_u_u((p_27 & (1L < p_27)), 12)))) , (void*)0), g_7, g_43))) , 0x08BAC569L) || l_40) , 4294967295UL), l_40, p_27);
    for (p_27 = 1; (p_27 <= 6); p_27++)
    {
        int *l_194 = (void*)0;
        g_195 = l_194;

        ;
        for (g_119 = 0; (g_119 == 1); g_119 = safe_add_func_int8_t_s_s(g_119, 2))
        {
            int **l_198 = &g_195;
            int *l_199 = &g_7;
            (*l_198) = l_194;
            (*l_199) = 8L;
        }
        return p_27;
    }
    return (*g_118);
}







static int ** func_28(unsigned p_29, unsigned p_30, unsigned char p_31)
{
    int **l_187 = (void*)0;
    return l_187;


}







static unsigned short func_32(int * p_33, int ** p_34)
{
    int *l_186 = &g_82;
    l_186 = (void*)0;

    ;
    (*p_33) = (255UL && 0x93L);
    return g_58;
}







static int ** func_35(unsigned char p_36, int ** p_37, unsigned char p_38, int ** p_39)
{
    int *l_45 = &g_7;
    int **l_44 = &l_45;
    unsigned short *l_57 = &g_58;
    unsigned short *l_59 = &g_60;
    int *l_81 = &g_7;
    int *l_115 = &g_82;
    unsigned short l_141 = 0x2D4CL;
    short l_154 = 0L;
    unsigned l_158 = 0xF1DF6FF7L;
    unsigned char *l_160 = &g_119;
    short l_176 = 1L;
    int l_179 = 0x768EFDD0L;
    (*l_44) = &g_7;
    if (((**l_44) = (((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(g_7, 65535UL)), (p_36 >= (safe_rshift_func_uint16_t_u_s((+(safe_lshift_func_int8_t_s_s(((g_43 == (void*)0) >= ((*l_59) = ((*l_57) = ((g_54 < ((safe_lshift_func_uint16_t_u_s((((p_36 & p_38) , (*l_44)) == (void*)0), 4)) ^ (**l_44))) , 65535UL)))), (*l_45)))), 9))))) < 0x6F96354DL) && g_7)))
    {
        unsigned char l_63 = 0UL;
        int l_64 = 0L;
        unsigned l_159 = 4294967286UL;
        int *l_180 = &l_179;
        int *l_181 = &g_182;
        l_64 = (safe_mod_func_int32_t_s_s((**l_44), (((*l_59) = l_63) | p_36)));
        for (p_38 = 0; (p_38 >= 3); p_38++)
        {
            char l_73 = 7L;
            unsigned short *l_114 = &g_60;
            unsigned l_157 = 4294967289UL;
            for (g_60 = (-11); (g_60 <= 40); g_60 = safe_add_func_int16_t_s_s(g_60, 2))
            {
                char l_80 = 0xA7L;
                for (g_7 = (-30); (g_7 != 4); ++g_7)
                {
                    int **l_71 = &l_45;
                    return g_72;


                }
                if (((*l_45) = g_54))
                {
                    if ((((l_73 , (safe_mod_func_uint8_t_u_u(g_7, (g_58 && ((g_58 , (safe_rshift_func_uint16_t_u_s(0x9862L, p_36))) <= g_7))))) , g_54) > (l_80 = ((safe_lshift_func_uint8_t_u_s(0x53L, g_60)) == 0x8AD7B590L))))
                    {
                        short *l_83 = (void*)0;
                        short *l_84 = &g_85;
                        (*l_44) = l_81;

                        ;
                        (*l_44) = &g_7;
                        (**l_44) = (g_58 ^ 0L);
                        (*l_44) = (((1L != (l_64 = ((*l_84) = (g_82 = g_60)))) <= 8L) , &g_82);

                        ;
                    }
                    else
                    {
                        return g_72;


                    }

                    ;
                    (*l_44) = (*l_44);
                }
                else
                {
                    unsigned char *l_92 = &l_63;
                    int l_93 = (-1L);
                    int l_100 = (-2L);
                    short *l_101 = &g_85;
                    if ((safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u(((g_91 = (safe_add_func_uint16_t_u_u(p_36, (~0xC152L)))) == p_36))), ((((0xFE46L & ((*l_101) = (((+(((*l_92) = l_73) , l_93)) != ((*l_57) = (p_36 , (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((p_38 | (safe_mod_func_uint8_t_u_u((g_54 & l_93), (*l_81)))), g_54)), 7))))) == l_100))) && 0x2F72L) , l_80) >= l_80))))
                    {
                        int ***l_116 = (void*)0;
                        int ***l_117 = &g_43;
                        char *l_136 = &l_73;
                        (**l_44) = ((safe_add_func_int16_t_s_s((l_93 , (safe_mod_func_int8_t_s_s(g_91, (safe_sub_func_int8_t_s_s((l_73 | l_64), (safe_add_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((g_82 || (safe_add_func_int16_t_s_s(g_91, (l_114 != (l_73 , (void*)0))))), p_38)), 0x5658L))))))), p_38)) , (-2L));
                        (*l_44) = l_115;

                        ;
                        (*l_117) = g_72;
                        (*l_115) = (g_82 | ((((l_73 , ((((*l_81) < ((*l_136) = (g_118 == ((+((safe_rshift_func_int8_t_s_s(((g_54 = ((safe_add_func_uint8_t_u_u((((*l_57) = p_36) | ((safe_lshift_func_uint8_t_u_s(((*g_118) = ((safe_sub_func_uint16_t_u_u((+((l_64 = (safe_mod_func_int16_t_s_s(g_7, (safe_lshift_func_uint8_t_u_u((*g_118), l_80))))) ^ ((((safe_lshift_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((g_119 & 0x1BL), 0x54L)) , l_73), 14)) | 0x45L) >= g_91) | g_119))), (*l_81))) , (*g_118))), 1)) < g_7)), 255UL)) || l_80)) , (-1L)), 7)) , 7UL)) , l_92)))) , l_73) , g_82)) & p_38) , p_38) , g_60));
                    }
                    else
                    {
                        int *l_137 = &g_7;
                        int *l_140 = &g_91;
                        (*l_44) = l_137;

                        ;
                        if ((*l_81))
                            break;
                        (*l_137) = ((safe_lshift_func_int16_t_s_u((((*l_140) = 0x1E3AF264L) , (g_7 , (l_93 >= (((l_93 | (+((g_58 && (4294967286UL <= (p_38 >= (((g_54 = 0UL) > (*l_137)) , 1UL)))) >= p_36))) || (-2L)) == 0L)))), l_63)) & l_141);
                    }

                    ;
                    (**l_44) = ((g_91 | ((safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((&p_38 != ((safe_add_func_int8_t_s_s(l_80, (((safe_add_func_int32_t_s_s(((((g_60 , ((void*)0 == &l_100)) , (safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s((g_119 , l_154), (+(l_159 = (safe_rshift_func_uint8_t_u_s((p_36 & l_157), l_158)))))), g_119))) , p_36) < l_93), g_85)) <= p_36) <= g_54))) , l_160)), g_119)), g_7)) , 8L)) == g_82);
                    if (l_80)
                        continue;
                }

                ;
                (*l_45) = l_63;
                (*l_44) = &l_64;

                ;
            }
            (*l_81) = (safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(p_36, 4)), 0x81L));
        }

        ;
        for (l_154 = 6; (l_154 > 26); l_154 = safe_add_func_int32_t_s_s(l_154, 2))
        {
            return p_37;


        }
        (*l_115) = (p_36 ^ (safe_sub_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((((*l_81) = (safe_add_func_int32_t_s_s(((0x17D6ECEDL == p_38) ^ (*l_45)), ((safe_unary_minus_func_int16_t_s(((safe_rshift_func_uint16_t_u_s(((((*l_181) = (((l_176 >= g_82) , (*l_45)) | ((((safe_rshift_func_uint8_t_u_s(l_179, 3)) && ((((*l_180) = g_82) == 0xBBAAEE78L) || g_85)) & (*g_118)) , p_36))) || (*l_180)) ^ (*l_115)), p_36)) ^ p_38))) == (*l_81))))) , 0x84L), p_36)) <= 0xA1L), g_119)));
    }
    else
    {
        int ***l_185 = &g_72;
        (*l_44) = ((**l_44) , ((((*l_160) = (**l_44)) , (safe_lshift_func_uint8_t_u_u((&p_39 != (l_185 = &p_37)), p_38))) , (*l_44)));

        ;
    }


    return g_72;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_424, "g_424", print_hash_value);
    transparent_crc(g_482, "g_482", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
