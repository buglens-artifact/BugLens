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



static int g_9 = (-1L);
static const int *g_8 = &g_9;
static unsigned g_53 = 4294967295UL;
static unsigned g_69 = 5UL;
static int g_77 = 1L;
static char g_91 = 0xB0L;
static unsigned char g_96 = 0x33L;
static int g_102 = 0xFCFB0F81L;
static unsigned char g_113 = 0x25L;
static unsigned g_114 = 0xBED38BC6L;
static int g_226 = 0x10AE63E7L;
static unsigned short g_233 = 65535UL;
static int *g_241 = &g_9;
static int g_257 = 0x238BE1AEL;
static short g_270 = 0L;
static int g_271 = 0L;
static volatile short **g_319 = (void*)0;
static short *g_339 = (void*)0;
static short **g_338 = &g_339;
static short ***g_337 = &g_338;
static const volatile unsigned char g_347 = 252UL;
static const volatile unsigned char *g_346 = &g_347;
static int *g_372 = &g_9;
static unsigned short g_384 = 0xA2D0L;
static unsigned g_398 = 0xB1F8B39EL;
static unsigned char g_428 = 0x82L;
static const volatile char g_438 = 0x70L;
static unsigned g_466 = 4294967295UL;
static unsigned char *g_559 = &g_96;
static unsigned char **g_558 = &g_559;



static int func_1(void);
static int * func_2(const int * p_3, int * p_4, unsigned char p_5, unsigned short p_6, int p_7);
static unsigned char func_11(short p_12, int * const p_13);
static unsigned char func_16(unsigned p_17, int * p_18, short p_19);
static short func_21(int * p_22, unsigned char p_23, const char p_24, int p_25);
static int * func_26(int p_27, unsigned short p_28, char p_29);
static unsigned short func_32(int p_33, int * p_34, int * const p_35, const int * p_36, int * const p_37);
static int func_38(unsigned p_39, int * const p_40);
static const unsigned char func_44(short p_45, const int p_46);
static short func_47(int * p_48, char p_49);
static int func_1(void)
{
    int *l_10 = (void*)0;
    int l_20 = 0L;
    short l_43 = 0xA553L;
    unsigned l_224 = 0UL;
    int *l_225 = &g_226;
    int l_397 = 0x3FFC807BL;
    int * const l_399 = (void*)0;
    int **l_574 = &g_241;
    (*l_574) = func_2(g_8, l_10, ((func_11(((safe_mul_func_uint8_t_u_u((func_16(l_20, &l_20, func_21(func_26(((*l_225) |= (safe_rshift_func_uint16_t_u_u(func_32(((+((g_9 || g_9) < func_38((((safe_add_func_int8_t_s_s((l_43 < func_44(func_47(&l_20, g_9), (*g_8))), g_9)) , g_9) >= 0L), &g_9))) , g_102), &g_9, &g_9, &g_9, &g_9), l_224))), g_9, l_224), g_270, l_224, g_270)) != l_397), g_398)) , l_43), l_399) , 0UL) && 0x02F5L), g_270, l_224);

    ;
    ;
    return g_347;


}







static int * func_2(const int * p_3, int * p_4, unsigned char p_5, unsigned short p_6, int p_7)
{
    int * const l_443 = &g_77;
    unsigned char **l_509 = (void*)0;
    unsigned char *l_513 = &g_428;
    unsigned char **l_512 = &l_513;
    int *l_532 = (void*)0;
    for (g_226 = 0; (g_226 <= (-13)); --g_226)
    {
        unsigned l_437 = 0x4362D382L;
        unsigned *l_439 = &g_53;
        char *l_440 = &g_91;
        unsigned l_441 = 4294967295UL;
        int *l_442 = &g_271;
        const short l_459 = 9L;
        char l_464 = 1L;
        (*l_443) = ((((safe_rshift_func_int8_t_s_s(func_32(((*l_442) = (func_32((((safe_lshift_func_int8_t_s_s((+((*l_440) |= (((*l_439) = (((safe_sub_func_int32_t_s_s((1L != l_437), (1L <= func_21(&g_77, p_7, (0x42A9L ^ (1L && ((g_398 , l_437) , 8L))), (*p_3))))) && g_438) && 0UL)) , l_437))), g_257)) < 4UL) , l_441), &g_9, l_439, &g_257, &g_9) , g_113)), &g_257, l_439, &g_9, l_443), 6)) >= 0L) & l_437) || p_7);

        ;
        for (g_398 = 9; (g_398 != 19); g_398++)
        {
            int l_448 = 0x54076BABL;
            unsigned *l_465 = &g_466;
            p_4 = ((0xE73CL || (safe_mod_func_int8_t_s_s((((*l_440) = (((l_448 , ((safe_mod_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u(g_233, ((safe_mul_func_int8_t_s_s((g_428 & ((safe_mod_func_int32_t_s_s(((l_459 , (safe_mod_func_uint16_t_u_u(0xCD83L, 0x2189L))) != (safe_sub_func_int32_t_s_s((p_7 && p_6), 0xF1865815L))), g_114)) == l_437)), (*g_346))) == 4L))) != 5UL), g_96)) < p_6), 0x42L)) <= p_5)) , l_448) , p_6)) ^ l_448), l_448))) , (void*)0);
        }
    }
    if ((*l_443))
    {
        int *l_469 = &g_77;
        unsigned short l_474 = 3UL;
        int *l_476 = &g_257;
        unsigned l_477 = 6UL;
        unsigned char *l_478 = &g_96;
        short l_479 = 0xFC0EL;
        unsigned ***l_480 = (void*)0;
        unsigned *l_483 = &g_53;
        unsigned **l_482 = &l_483;
        unsigned ***l_481 = &l_482;
        unsigned ***l_484 = (void*)0;
        unsigned **l_486 = (void*)0;
        unsigned ***l_485 = &l_486;
        unsigned l_510 = 0xA11E93D6L;
        unsigned l_531 = 4294967289UL;
        char l_544 = 0xD7L;
        const int *l_545 = &g_257;
        l_479 = (func_32(((((safe_add_func_uint32_t_u_u((*l_443), (+func_21(l_469, ((g_53 && ((*l_478) = (1UL >= (safe_mod_func_int8_t_s_s((l_474 , (safe_unary_minus_func_uint8_t_u((((*l_476) |= (((((*l_443) > (*p_3)) == ((&g_241 != &p_3) <= g_271)) ^ p_5) ^ (*l_469))) == l_477)))), (*g_346)))))) && p_5), (*l_443), (*l_443))))) >= p_6) , g_233) != p_7), &g_77, l_443, l_469, l_469) <= 0xBE1CA866L);

        ;
        (*l_485) = ((*l_481) = (void*)0);

        ;
        for (g_270 = 0; (g_270 >= 23); g_270 = safe_add_func_uint8_t_u_u(g_270, 1))
        {
            char l_493 = 9L;
            int l_505 = (-1L);
            unsigned char **l_508 = (void*)0;
            char *l_536 = &l_493;
            const char *l_543 = (void*)0;
            const char **l_542 = &l_543;
        }
    }
    else
    {
        int * const l_553 = &g_77;
        const int *l_554 = (void*)0;
        for (g_113 = 14; (g_113 <= 41); g_113++)
        {
            int * const l_555 = &g_257;
            for (g_271 = (-27); (g_271 == 23); ++g_271)
            {
                unsigned char l_556 = 0xDBL;
                unsigned char l_568 = 5UL;
                for (g_69 = 0; (g_69 >= 52); ++g_69)
                {
                    int *l_552 = &g_257;
                    short l_557 = (-1L);
                    (*l_555) &= (((func_32(g_438, l_552, l_553, l_554, l_555) <= 0x50L) , (*g_8)) && (((l_556 ^= (((*l_443) , g_398) < (*l_443))) != g_384) ^ 0UL));
                    if ((*g_372))
                        break;
                    if (l_557)
                        continue;
                    if (func_21(&g_77, (g_398 , 6UL), (+(0x80L == (&g_102 == (void*)0))), ((*l_552) = (*p_3))))
                    {
                        unsigned char ***l_560 = &l_512;
                        int l_565 = (-9L);
                        unsigned *l_571 = &g_398;
                        char *l_572 = &g_91;
                        (*l_552) = ((((((*l_560) = g_558) == (void*)0) && ((((p_6 >= (func_11((safe_mul_func_int16_t_s_s((((*l_553) &= (l_565 ^ (l_556 >= (safe_mul_func_int8_t_s_s((*l_555), ((*l_572) = (((0x5EBDL != l_568) != ((safe_sub_func_uint32_t_u_u(((*l_571) = 1UL), g_69)) , 0x44L)) ^ (*g_372)))))))) != g_271), 0L)), &g_9) >= p_5)) && 0xA3L) || 0x2EC5L) || p_5)) , 0x1DFB3079L) == 0UL);

                        ;
                        ;
                    }
                    else
                    {
                        int **l_573 = &g_372;
                        (*l_573) = (p_5 , &g_257);
                    }

                    ;
                }
                if ((*g_372))
                    break;
            }
        }

        ;
    }

    ;
    return l_532;


}







static unsigned char func_11(short p_12, int * const p_13)
{
    int *l_407 = &g_257;
    for (g_9 = 0; (g_9 != 8); ++g_9)
    {
        short l_406 = 0xB856L;
        int **l_408 = &g_241;
        const char l_421 = 0xC7L;
        int *l_422 = (void*)0;
        int l_423 = 1L;
        unsigned *l_425 = &g_398;
        unsigned **l_424 = &l_425;
        char *l_426 = &g_91;
        char *l_427 = (void*)0;
        (*l_407) = (((void*)0 != &g_346) || (safe_sub_func_int16_t_s_s((p_12 = 0x6C78L), (safe_mul_func_uint8_t_u_u(func_16(l_406, ((*l_408) = l_407), l_406), g_102)))));
        if ((*g_8))
            continue;
        (*l_407) = (safe_lshift_func_uint8_t_u_u(((g_428 ^= ((*l_426) = (&g_398 != ((*l_424) = ((safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s(p_12, func_44(p_12, ((*l_407) = (safe_mul_func_uint16_t_u_u((func_44(((0xD6B21FF3L & (!(-2L))) , (((safe_lshift_func_int8_t_s_s((g_96 , g_257), g_69)) > p_12) || 0xC3L)), l_421) != (*l_407)), g_113)))))), p_12)), l_423)) , l_422))))) | 0x8AL), 5));

        ;
        (*l_407) |= 1L;
    }
    return p_12;
}







static unsigned char func_16(unsigned p_17, int * p_18, short p_19)
{
    int l_390 = 0x0EDE039BL;
    l_390 &= 0L;
    if ((*p_18))
    {
        int **l_391 = &g_372;
        (*l_391) = &g_77;

        ;
    }
    else
    {
        int **l_395 = &g_372;
        int **l_396 = &g_241;
        for (g_233 = 0; (g_233 >= 24); ++g_233)
        {
            int **l_394 = &g_241;
            (*l_394) = &l_390;

            ;
        }


        (*l_396) = ((*l_395) = p_18);



        (*l_395) = p_18;
    }


    return l_390;
}







static short func_21(int * p_22, unsigned char p_23, const char p_24, int p_25)
{
    int *l_388 = &g_9;
    int **l_389 = &g_372;
    (*l_389) = l_388;

    ;
    (*l_389) = &g_257;

    ;
    return p_25;
}







static int * func_26(int p_27, unsigned short p_28, char p_29)
{
    int *l_229 = &g_77;
    unsigned *l_231 = &g_53;
    unsigned ** const l_230 = &l_231;
    unsigned short *l_232 = &g_233;
    int * const l_234 = &g_9;
    const int *l_263 = &g_257;
    int *l_318 = &g_257;
    short ***l_340 = &g_338;
    short ****l_341 = &l_340;
    const unsigned char *l_348 = (void*)0;
    const unsigned char **l_349 = &l_348;
    unsigned char *l_354 = &g_96;
    unsigned char *l_355 = &g_113;
    if ((safe_lshift_func_uint16_t_u_u(((*g_8) && (!func_47(l_229, (((g_102 , g_91) == (!(func_32((((*l_232) |= ((void*)0 != l_230)) || ((void*)0 != &l_231)), l_231, l_234, &g_9, l_234) > g_96))) , (*l_229))))), 9)))
    {
        unsigned short l_237 = 0x262BL;
        int l_240 = 0xF47C9686L;
        int *l_245 = (void*)0;
        const int *l_247 = &g_77;
        l_240 = (((safe_mod_func_int16_t_s_s(p_28, (-1L))) & (((*l_234) = p_28) > l_237)) == (safe_mul_func_int8_t_s_s(0xE8L, (0x20L & (((g_113 && func_32(g_53, &g_77, &g_77, l_229, &g_77)) > g_69) != p_27)))));
        if (p_28)
        {
            (*l_234) |= (~(*l_229));
            if (g_114)
                goto lbl_242;
        }
        else
        {
lbl_242:
            g_241 = &l_240;

            ;
            for (g_102 = 0; (g_102 > 8); g_102 = safe_add_func_uint16_t_u_u(g_102, 2))
            {
                int **l_246 = &g_241;
                const int **l_248 = &l_247;
                l_245 = l_231;

                ;
                (*l_246) = (void*)0;

                ;
                g_241 = l_234;

                ;
                (*l_248) = l_247;
            }

            ;
            ;
            (*g_241) ^= p_27;
        }


        ;
    }
    else
    {
        int * const l_255 = &g_9;
        int *l_256 = &g_257;
        int **l_258 = &l_256;
        int l_259 = 0x275BA9C8L;
        short l_274 = 5L;
        unsigned **l_280 = &l_231;
        char l_312 = 0L;
        (*l_256) |= func_38((safe_mul_func_int16_t_s_s((p_28 , (safe_rshift_func_uint8_t_u_s((func_47(l_229, ((void*)0 == &l_234)) == ((*l_232) |= (safe_lshift_func_int8_t_s_u(((((*g_8) | (*l_229)) || ((g_77 &= (((((&g_96 != (void*)0) == g_69) < 0UL) <= 1UL) || 0x91L)) , (-4L))) < 0L), 0)))), 7))), g_9)), l_255);
        if (((((func_32(g_257, ((*l_258) = l_229), &g_9, &g_257, l_229) , func_32(g_53, ((*l_258) = &g_257), l_255, l_231, &g_77)) , g_102) , l_259) <= (-6L)))
        {
            (*l_258) = &g_257;
        }
        else
        {
            const int *l_260 = &g_9;
            const int **l_261 = (void*)0;
            const int **l_262 = &l_260;
            unsigned char *l_266 = &g_96;
            const short l_267 = 1L;
            short *l_268 = (void*)0;
            short *l_269 = &g_270;
            int * const l_272 = &g_77;
            unsigned **l_279 = &l_231;
            int *l_329 = (void*)0;
            l_263 = ((*l_262) = l_260);

            ;
        }

        ;
        (*l_229) &= (**l_258);
        (*l_256) &= p_27;
    }

    ;
    if ((*l_318))
    {
        (*l_318) &= (*g_8);
    }
    else
    {
        unsigned char *l_352 = &g_96;
        unsigned char **l_353 = (void*)0;
        char l_360 = 7L;
        const int *l_371 = (void*)0;
        int l_377 = 0x1C01269EL;
        int **l_378 = &l_318;
        unsigned short *l_383 = &g_384;
        int *l_385 = (void*)0;
        int *l_386 = (void*)0;
        int *l_387 = &l_377;
        if ((((!((!p_27) < (*l_234))) <= (p_28 , (safe_rshift_func_uint8_t_u_s((((l_354 = l_352) != (l_355 = &g_96)) != (safe_mul_func_uint16_t_u_u((((0x8D5E8493L > ((*l_229) = 0xF9248F3EL)) <= (g_233 > (safe_lshift_func_int16_t_s_u((func_47(l_318, (*l_234)) <= p_27), 6)))) && l_360), l_360))), p_28)))) | l_360))
        {
            unsigned l_369 = 0xAA2BB1F5L;
            int *l_370 = &g_271;
            (*l_234) = (0xA331L != (safe_mul_func_uint8_t_u_u(251UL, ((0x4F3BL || (*l_263)) & (g_53 & p_29)))));
            (*l_234) = ((safe_add_func_uint32_t_u_u(g_114, ((((*l_370) = (~(((-6L) ^ (safe_mul_func_int16_t_s_s((((*l_232) |= (p_28 && (*g_346))) && ((*l_318) = ((safe_lshift_func_int8_t_s_u(((p_28 <= p_29) == (l_360 >= func_32(((*l_370) ^= ((l_369 | (-1L)) && l_360)), l_370, l_229, l_371, &g_9))), (*g_346))) > 9L))), p_28))) || p_29))) , 0x6397L) , p_29))) , p_29);
            g_372 = (g_241 = l_318);

            ;
            ;
        }
        else
        {
            int **l_373 = &g_241;
            int **l_374 = &l_318;
            (*l_374) = ((*l_373) = &g_9);

            ;
            ;
            l_377 ^= ((*l_229) = (g_347 >= (safe_add_func_uint16_t_u_u(g_271, ((*l_318) |= p_28)))));
        }

        ;
        ;
        ;
        (*l_378) = l_318;
        (*l_387) |= ((safe_mul_func_int16_t_s_s((*l_229), p_27)) , (safe_sub_func_uint8_t_u_u((((~(func_44(p_28, p_28) | ((*l_383) = ((*l_232) = ((0xD94905E8L && p_27) || g_226))))) | (*g_346)) > 0x8DL), (*l_318))));
        (*l_378) = &g_9;

        ;
    }

    ;
    ;
    return &g_9;


}







static unsigned short func_32(int p_33, int * p_34, int * const p_35, const int * p_36, int * const p_37)
{
    int *l_222 = &g_77;
    for (g_53 = 0; (g_53 <= 22); g_53 = safe_add_func_int32_t_s_s(g_53, 7))
    {
        short l_221 = 2L;
        int **l_223 = &l_222;
        (*l_223) = (l_221 , l_222);
    }
    return g_114;
}







static int func_38(unsigned p_39, int * const p_40)
{
    int **l_97 = (void*)0;
    int *l_99 = &g_9;
    int **l_98 = &l_99;
    int l_100 = 0x289F16C4L;
    int *l_101 = &g_102;
    unsigned char *l_111 = &g_96;
    unsigned char *l_112 = &g_113;
    unsigned short l_145 = 65528UL;
    int l_174 = 1L;
    unsigned short l_205 = 65531UL;
    g_114 ^= func_44((((*l_101) = func_47(((*l_98) = (void*)0), l_100)) , (safe_add_func_uint16_t_u_u(g_69, (safe_rshift_func_uint8_t_u_s(((*l_112) &= (0xFFL != (((g_53 & ((+p_39) | (((safe_sub_func_int32_t_s_s((-1L), ((safe_lshift_func_int8_t_s_u((+(l_111 == l_111)), 1)) < (*g_8)))) >= g_91) > g_96))) ^ g_77) < p_39))), g_102))))), (*g_8));

    ;
    for (l_100 = 15; (l_100 > (-10)); l_100 = safe_sub_func_uint32_t_u_u(l_100, 8))
    {
        char l_160 = (-3L);
        int l_163 = 1L;
        int *l_191 = &l_163;
        int *l_192 = &g_77;
        if ((p_39 , (*p_40)))
        {
            short l_117 = 0x561DL;
            if ((*p_40))
                break;
            if (l_117)
                break;
        }
        else
        {
            unsigned l_120 = 0x1B7303F6L;
            for (g_69 = 0; (g_69 > 60); g_69++)
            {
                l_120 &= (-1L);
                for (g_53 = 0; (g_53 <= 12); g_53 = safe_add_func_int16_t_s_s(g_53, 1))
                {
                    int **l_123 = &l_99;
                    (*l_123) = p_40;

                    ;
                }
            }
        }
        for (g_102 = 0; (g_102 == (-24)); g_102 = safe_sub_func_int16_t_s_s(g_102, 5))
        {
            char *l_134 = &g_91;
            unsigned l_161 = 0x96686465L;
            int l_162 = (-6L);
            for (g_113 = 0; (g_113 >= 17); g_113 = safe_add_func_uint8_t_u_u(g_113, 1))
            {
                int l_146 = 0x69F55D16L;
                unsigned char l_189 = 0x10L;
                (*l_98) = (void*)0;

                ;
                if ((~(g_53 || 0x47L)))
                {
                    int **l_128 = &l_99;
                    unsigned char *l_153 = &g_113;
                    unsigned short l_164 = 8UL;
                    (*l_128) = p_40;

                    ;
                    for (g_91 = 29; (g_91 != (-13)); --g_91)
                    {
                        char *l_133 = &g_91;
                        if ((*g_8))
                            break;
                        (*l_128) = (((0x1DCFL != ((safe_mul_func_int16_t_s_s((((l_133 == l_134) , (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((g_53 , ((*l_111) = 0xC7L)), 3)) || ((p_39 || 0xC9484ABCL) == (*g_8))), (safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(g_9, p_39)), (*g_8))))), (**l_128)))) , (-1L)), p_39)) , l_145)) , g_96) , (void*)0);

                        ;
                        (*l_98) = &g_77;

                        ;
                    }

                    ;
                    l_163 = (l_162 &= ((l_146 && ((((((safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(func_44((p_39 || (((safe_rshift_func_uint16_t_u_s(p_39, 3)) , l_111) != l_153)), ((g_91 , ((*l_111) = func_44((safe_mul_func_int16_t_s_s(g_77, (((((safe_add_func_uint8_t_u_u(p_39, (+(safe_sub_func_uint8_t_u_u(l_160, g_113))))) <= 0xCC14L) != (*l_99)) && g_69) != p_39))), (*g_8)))) , (*p_40))), g_9)), p_39)) || g_102) , (void*)0) == &g_8) ^ l_161) < 0L)) <= g_102));
                    if (l_164)
                        break;
                }
                else
                {
                    char l_173 = 0xCBL;
                    unsigned l_180 = 4294967286UL;
                    int *l_190 = &g_77;
                    for (g_91 = 0; (g_91 < 26); g_91 = safe_add_func_int16_t_s_s(g_91, 1))
                    {
                        int *l_179 = &g_102;
                        char *l_183 = (void*)0;
                        char *l_184 = &l_173;
                        (*l_98) = &g_9;

                        ;
                        l_174 ^= ((g_96 <= (((((g_69 <= p_39) == (safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(g_53, (l_173 , p_39))), l_173)), ((&g_77 != (void*)0) , g_113)))) , 1L) , (-7L)) && 4294967295UL)) & g_69);
                        g_77 &= (safe_add_func_int16_t_s_s((p_39 >= ((safe_rshift_func_uint8_t_u_u(((p_39 , l_179) == p_40), 5)) > (((*l_111) = l_180) != ((*l_184) = (safe_rshift_func_int16_t_s_s(p_39, l_180)))))), 0xE824L));
                        g_77 ^= (safe_mod_func_int16_t_s_s((((g_96 , ((safe_mod_func_int32_t_s_s((*p_40), (~p_39))) , (g_96 , &g_113))) == &g_113) <= p_39), func_47(&l_163, l_189)));
                    }

                    ;
                    (*l_190) &= ((void*)0 == &g_113);
                    (*l_190) &= (*p_40);
                }

                ;
            }
        }
        (*l_191) = (+(*g_8));
        if ((((0x3CC6ED5EL == (*l_191)) >= ((((*l_192) = (g_114 , (0x748EL <= (-1L)))) > ((safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(p_39, (((safe_mul_func_uint16_t_u_u((g_9 > ((g_114 , (safe_rshift_func_uint8_t_u_u(func_47(&g_9, l_205), 6))) , g_9)), 65535UL)) || 9UL) ^ p_39))), p_39)), (*l_191))), (*l_191))) != g_91)) <= (*g_8))) < p_39))
        {
            (*l_98) = &g_77;

            ;
            return (*g_8);
        }
        else
        {
            short l_216 = (-8L);
            unsigned *l_217 = &g_69;
            char *l_218 = &l_160;
            (*l_192) = (g_114 >= ((!(((*l_111) = (((((*l_217) = (safe_mod_func_uint16_t_u_u(((p_39 == (safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((func_44(g_91, (*g_8)) , ((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((((*l_191) = func_47(&g_77, (g_91 = ((*l_218) = (p_39 > ((*l_217) = l_216)))))) ^ 1L), p_39)), 0x0F1C41F1L)) || 8UL)), 255UL)), g_113))) , (*l_192)), 0x2E02L))) || 0x0C7754CEL) && g_96) < p_39)) ^ g_114)) | g_102));
        }
    }

    ;
    return (*g_8);
}







static const unsigned char func_44(short p_45, const int p_46)
{
    int l_62 = (-7L);
    int *l_67 = &g_9;
    unsigned *l_68 = &g_69;
    unsigned l_74 = 0x36C8609EL;
    int l_75 = 0x5BB799E6L;
    int *l_76 = &g_77;
    unsigned l_87 = 0xC93506F8L;
    char *l_88 = (void*)0;
    char *l_89 = (void*)0;
    char *l_90 = &g_91;
    unsigned **l_92 = (void*)0;
    unsigned **l_93 = &l_68;
    unsigned *l_94 = &l_74;
    unsigned char *l_95 = &g_96;
    (*l_76) = (safe_add_func_int32_t_s_s((l_75 = ((((((safe_mul_func_uint8_t_u_u(((*g_8) | l_62), (safe_mod_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(l_62, func_47(l_67, g_53))) | ((l_68 = l_67) == &g_69)), ((safe_sub_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u(p_45, (*l_67))) , (*l_67)) ^ g_9), 251UL)) , (*l_67)))))) || 1L) , p_46) ^ p_46) >= 0x604CL) >= l_74)), 0L));

    ;
    g_77 = ((0x3CL == ((*l_95) = func_47(&g_77, (safe_sub_func_uint32_t_u_u(((*l_94) = (&g_69 == ((*l_93) = (((*l_90) ^= (safe_sub_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((safe_unary_minus_func_int32_t_s(((*l_67) ^ ((*g_8) & l_87)))), p_46)) == (((void*)0 != &l_87) , p_45)), (*l_67))) , 1L), 0xA273DD60L))) , &g_53)))), 4294967295UL))))) , 0x6B7DE7E8L);

    ;
    return g_77;
}







static short func_47(int * p_48, char p_49)
{
    unsigned *l_52 = &g_53;
    int l_56 = 0x8A996121L;
    int l_57 = (-1L);
    l_57 ^= (safe_lshift_func_int8_t_s_u(((~4294967295UL) != ((*l_52) = p_49)), (p_49 ^ ((safe_add_func_int8_t_s_s(0x81L, (p_49 || g_9))) <= l_56))));
    return g_9;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_384, "g_384", print_hash_value);
    transparent_crc(g_398, "g_398", print_hash_value);
    transparent_crc(g_428, "g_428", print_hash_value);
    transparent_crc(g_438, "g_438", print_hash_value);
    transparent_crc(g_466, "g_466", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
