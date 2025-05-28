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
   short f0;
};

union U1 {
   short f0;
   unsigned f1;
   char f2;
};

union U2 {
   unsigned f0;
   int f1;
   unsigned char f2;
};


static unsigned g_4 = 4294967295UL;
static int g_9 = 0x3C0BF90AL;
static unsigned char g_10 = 0x24L;
static unsigned char g_20 = 255UL;
static int g_22 = (-8L);
static union U2 g_25 = {3UL};
static union U2 **g_29 = (void*)0;
static int g_60 = 0xF914A126L;
static union U1 g_63 = {0x9139L};
static union U1 *g_62 = &g_63;
static union U0 g_84 = {-5L};
static int *g_91 = &g_60;
static unsigned short g_150 = 0UL;
static char g_183 = (-2L);
static char g_186 = 2L;
static char g_202 = 0L;
static char g_271 = 0x40L;
static union U0 *g_275 = &g_84;
static union U0 **g_274 = &g_275;
static char *g_334 = &g_183;
static char **g_333 = &g_334;
static unsigned short g_364 = 6UL;
static short g_443 = 0x5945L;
static union U2 ***g_497 = &g_29;
static union U2 ****g_496 = &g_497;



static short func_1(void);
static union U2 * func_2(int p_3);
static int * func_11(union U1 p_12, short p_13, union U1 p_14);
static union U1 func_16(unsigned char p_17, unsigned short p_18);
static union U2 * func_32(union U2 * p_33, unsigned char p_34, union U2 * p_35);
static unsigned char func_36(unsigned short p_37, int p_38, short p_39);
static unsigned func_42(short p_43, union U2 ** p_44);
static unsigned char func_48(unsigned short p_49, unsigned char p_50, short p_51, unsigned p_52);
static int * func_53(union U2 ** p_54, unsigned char * p_55, int * p_56);
static unsigned char * func_57(union U2 * p_58);
static short func_1(void)
{
    union U2 *l_488 = &g_25;
    union U2 **l_487 = &l_488;
    int l_491 = (-1L);
    union U2 *****l_498 = (void*)0;
    union U2 ****l_500 = (void*)0;
    union U2 *****l_499 = &l_500;
    char l_505 = 5L;
    short l_506 = (-5L);
    char l_507 = 0xC5L;
    unsigned short l_508 = 0xEEF4L;
    int *l_509 = &l_491;
    (*l_487) = func_2(g_4);

    ;

    ;
    (*l_509) = (safe_rshift_func_int8_t_s_s((l_491 ^ (safe_sub_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u((g_496 == ((*l_499) = &g_497)), (func_36(l_491, g_202, (safe_add_func_int8_t_s_s(((*g_334) = (safe_add_func_uint8_t_u_u(l_505, l_491))), (func_36(l_506, g_10, l_491) <= l_505)))) != l_507))), l_508))), l_491));

    ;
    (*l_509) = ((*l_509) < g_186);
    for (g_150 = (-27); (g_150 < 34); g_150 = safe_add_func_int32_t_s_s(g_150, 8))
    {
        union U1 **l_512 = (void*)0;
        union U1 ***l_513 = &l_512;
        (*l_513) = l_512;
        if (g_22)
            continue;
        return g_202;
    }
    return g_60;
}







static union U2 * func_2(int p_3)
{
    union U2 *l_7 = (void*)0;
    int *l_8 = &g_9;
    union U1 l_15 = {9L};
    unsigned char *l_19 = &g_20;
    int **l_473 = &g_91;
    int **l_474 = (void*)0;
    int **l_475 = &g_91;
    int **l_476 = &g_91;
    int *l_477 = (void*)0;
    unsigned *l_478 = (void*)0;
    unsigned *l_479 = &g_63.f1;
    if ((safe_add_func_int32_t_s_s((g_10 = ((*l_8) = (l_7 == (void*)0))), (((*l_479) = (((l_477 = func_11(l_15, g_4, func_16(((*l_19) = g_4), p_3))) != (void*)0) ^ g_4)) >= p_3))))
    {
        (*l_476) = &g_9;

        ;
        (*g_91) = p_3;
        if (g_22)
            goto lbl_486;
    }
    else
    {
        int *l_485 = (void*)0;
        for (g_364 = 0; (g_364 <= 9); g_364 = safe_add_func_uint16_t_u_u(g_364, 9))
        {
            int l_482 = 0xD9D387A4L;
            union U1 l_483 = {-1L};
            union U1 *l_484 = &g_63;
            l_482 = (g_10 || 0x7BEBL);
            l_485 = func_11(l_483, p_3, ((*l_484) = l_15));

            ;
            (*l_477) = (0x4460E21CL < l_483.f2);
        }

                ;
    }

    ;

    ;
lbl_486:
    (*l_8) = (*l_8);
    return l_7;


}







static int * func_11(union U1 p_12, short p_13, union U1 p_14)
{
    int *l_463 = &g_22;
    int **l_464 = (void*)0;
    int **l_465 = &l_463;
    union U2 *l_467 = &g_25;
    union U2 **l_466 = &l_467;
    int l_468 = 0xE963F069L;
    union U2 *l_470 = &g_25;
    union U2 **l_469 = &l_470;
    union U2 *l_471 = &g_25;
    union U2 *l_472 = &g_25;
    (*l_465) = l_463;
    (*l_465) = (*l_465);
    (*l_463) = (!p_12.f2);
    (*l_465) = (*l_465);
    return &g_22;


}







static union U1 func_16(unsigned char p_17, unsigned short p_18)
{
    int *l_21 = &g_22;
    union U2 *l_24 = &g_25;
    union U2 **l_23 = &l_24;
    union U2 ***l_26 = &l_23;
    union U2 **l_45 = &l_24;
    union U2 *l_284 = (void*)0;
    union U2 **l_283 = &l_284;
    unsigned short *l_285 = (void*)0;
    unsigned short *l_286 = &g_150;
    union U1 *l_287 = &g_63;
    int *l_462 = &g_60;
    (*l_21) = g_4;
    (*l_26) = l_23;
    if (((safe_lshift_func_uint8_t_u_s((g_29 != ((*l_26) = g_29)), 0)) >= ((*l_286) = (0xC134L == ((safe_mod_func_uint16_t_u_u(((l_24 != ((*l_283) = func_32(l_24, func_36((safe_rshift_func_uint8_t_u_u((((*l_21) <= (*l_21)) != func_42(p_18, l_45)), (*l_21))), g_22, g_4), (*l_45)))) || g_186), 7UL)) == 0x622AL)))))
    {
        g_62 = l_287;

        ;
    }
    else
    {
        int l_288 = 0xD3629F83L;
        union U1 *l_301 = (void*)0;
        int l_317 = 0L;
        union U0 *l_394 = &g_84;
        unsigned l_406 = 0x2AD0EDB8L;
        int *l_452 = &l_288;
        (*l_21) = l_288;
        for (p_18 = (-21); (p_18 <= 7); ++p_18)
        {
            unsigned l_300 = 0UL;
            union U1 *l_302 = &g_63;
            union U0 **l_307 = &g_275;
            unsigned char l_316 = 0x54L;
            char **l_335 = &g_334;
            unsigned *l_348 = &g_25.f0;
            char *l_349 = &g_271;
            int l_350 = 0L;
            for (g_25.f2 = 0; (g_25.f2 <= 56); g_25.f2 = safe_add_func_uint32_t_u_u(g_25.f2, 8))
            {
                int **l_329 = (void*)0;
                int **l_330 = &l_21;
                int *l_336 = (void*)0;
                unsigned l_337 = 1UL;
            }
            l_350 = ((((safe_mod_func_int8_t_s_s(((*l_21) == p_18), (safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((((*l_349) = ((**g_333) = ((((((safe_add_func_uint32_t_u_u(((((-1L) < 1UL) != (l_317 = (safe_add_func_uint32_t_u_u(((*l_348) = ((l_288 = (-1L)) & g_150)), (-1L))))) > 1L), p_18)) <= 1UL) >= (*l_21)) <= p_17) | g_186) ^ 0xEEL))) == 0x3EL) <= g_63.f2), 5)), p_17)))) && g_63.f2) | 0UL) && (*g_334));

            for (g_150 = 0; (g_150 == 19); ++g_150)
            {
                int **l_355 = &l_21;
                union U0 **l_360 = &g_275;
                for (g_183 = 0; (g_183 < (-30)); g_183--)
                {
                    (*l_21) = p_18;
                }
                (*l_355) = l_21;
                if ((safe_mod_func_int32_t_s_s(func_36(g_22, p_17, g_150), (safe_sub_func_int8_t_s_s(0xF2L, (l_360 != l_360))))))
                {
                    union U2 **l_363 = &l_24;
                    g_364 = (l_317 = (safe_lshift_func_uint16_t_u_s((l_363 != g_29), 10)));
                    return (*l_287);

                                    }
                else
                {
                    unsigned l_365 = 0x4E30DE83L;
                    union U1 **l_372 = &g_62;
                    (*l_21) = func_36(l_365, p_17, (safe_lshift_func_uint16_t_u_u(p_18, 2)));
                    (*l_355) = l_21;
                    (*l_21) = (safe_sub_func_int8_t_s_s(((*l_349) = ((safe_sub_func_uint8_t_u_u(g_25.f0, g_25.f2)) && g_4)), 0xA2L));
                    (*l_372) = (void*)0;

                    ;
                }

                ;
            }
        }
        l_301 = l_301;
        for (g_22 = (-4); (g_22 < 26); g_22++)
        {
            union U1 *l_379 = &g_63;
            short *l_387 = &g_84.f0;
            int l_390 = 1L;
            int *l_393 = &l_288;
            int **l_455 = &l_452;
            for (g_20 = 7; (g_20 == 45); g_20 = safe_add_func_uint16_t_u_u(g_20, 6))
            {
                union U1 *l_380 = &g_63;
                int l_383 = (-2L);
                union U0 *l_396 = &g_84;
                union U2 **l_417 = &l_24;
                int **l_419 = &l_393;
                if ((*l_21))
                {
                    union U1 **l_377 = (void*)0;
                    union U1 **l_378 = &g_62;
                    int l_381 = 0x56827A0DL;
                    int *l_382 = &l_317;
                    (*l_382) = ((((*l_378) = &g_63) == (l_380 = l_379)) >= l_381);

                    ;
                }
                else
                {
                    int *l_384 = &l_317;
                    union U0 *l_395 = &g_84;
                    union U1 l_400 = {-10L};
                    (*l_384) = l_383;
                    l_390 = (((safe_lshift_func_uint8_t_u_u((l_387 == (void*)0), func_48(((*l_286) = (p_18 || (((0x30F8L != ((void*)0 != l_287)) >= (safe_rshift_func_int16_t_s_s(((g_4 && 246UL) >= ((void*)0 != &g_334)), 2))) & p_18))), g_186, p_18, g_63.f2))) || (**g_333)) & l_383);
                    for (p_17 = 6; (p_17 >= 32); p_17 = safe_add_func_int32_t_s_s(p_17, 4))
                    {
                        unsigned char *l_397 = (void*)0;
                        union U1 **l_398 = (void*)0;
                        union U1 **l_399 = &l_287;
                        l_393 = &g_60;

                        ;
                        l_288 = (((l_394 != l_395) != (l_383 = ((l_396 = (*g_274)) == (*g_274)))) >= (((*l_21) != 0x06BFL) < p_17));
                        (*l_399) = l_287;
                        return l_400;

                                            }
                }
                for (g_25.f0 = 0; (g_25.f0 > 47); g_25.f0 = safe_add_func_uint8_t_u_u(g_25.f0, 1))
                {
                    char l_407 = 1L;
                    union U2 **l_418 = &l_284;
                    for (l_288 = (-16); (l_288 != 18); l_288 = safe_add_func_int16_t_s_s(l_288, 7))
                    {
                        unsigned *l_405 = &g_63.f1;
                        int *l_408 = &l_390;
                        if (p_18)
                            break;
                        l_406 = (((*l_21) && ((*g_334) = (**g_333))) < ((*l_405) = p_17));

                                                l_390 = l_407;
                        (*l_408) = (!0x7BBA4E1FL);
                    }
                    l_383 = ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s(func_48((5UL < func_48(p_17, l_407, p_18, (safe_sub_func_uint32_t_u_u(p_17, 4294967295UL)))), (l_417 != l_418), p_18, l_383), p_18)) != (-1L)), 3)), 6)) ^ l_406);
                }

                (*l_419) = &l_383;

                ;
            }


            if ((*l_21))
            {
                int *l_420 = &l_288;
                int **l_421 = (void*)0;
                int **l_422 = &l_393;
                (*l_422) = l_420;

                ;
            }
            else
            {
                unsigned short **l_423 = &l_285;
                unsigned short *l_424 = &g_364;
                unsigned short **l_425 = &l_286;
                int *l_451 = &g_60;
                if (((((*l_423) = &g_364) == ((*l_425) = (l_424 = &g_150))) ^ p_17))
                {
                    for (g_60 = 23; (g_60 < 19); --g_60)
                    {
                        int *l_430 = &l_390;
                        int **l_431 = &l_21;
                        if (p_17)
                            break;
                        (*l_430) = (safe_mod_func_int32_t_s_s((*l_21), p_17));
                        if (g_364)
                            continue;
                        (*l_431) = &l_317;

                        ;
                    }
                    for (l_390 = (-25); (l_390 < (-7)); l_390++)
                    {
                        union U2 *l_438 = &g_25;
                        unsigned *l_439 = &g_25.f0;
                        int *l_442 = &g_60;
                        g_443 = (safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(65532UL, (&g_25 == ((*l_45) = l_438)))), (l_406 & ((*l_442) = (((*l_439) = 4294967292UL) && (safe_lshift_func_uint8_t_u_s(g_202, 4)))))));

                    }
                }
                else
                {
                    for (g_25.f1 = (-10); (g_25.f1 > 23); g_25.f1 = safe_add_func_int8_t_s_s(g_25.f1, 1))
                    {
                        int *l_446 = &l_317;
                        (*l_446) = 0xE6AA67BEL;
                        if (g_364)
                            break;
                    }

                    for (g_63.f0 = (-25); (g_63.f0 != (-22)); ++g_63.f0)
                    {
                        int *l_449 = &g_60;
                        int **l_450 = &l_21;
                        (*l_450) = (g_91 = l_449);

                        ;
                        ;
                        (*g_91) = (+(*g_91));
                        l_452 = l_451;

                        ;
                        if (p_17)
                            continue;
                    }
                }

                ;
                ;
                for (g_183 = 0; (g_183 > (-9)); g_183 = safe_sub_func_int32_t_s_s(g_183, 9))
                {
                    if (p_18)
                        break;
                }
                if ((*l_451))
                    break;
                if (p_18)
                    break;
            }
            (*l_455) = l_21;

            ;
        }

        ;
        ;
        ;
    }


    ;
    ;

    ;
    ;
    (*l_462) = (safe_sub_func_int16_t_s_s((g_4 >= (safe_rshift_func_uint16_t_u_s(0UL, ((safe_lshift_func_uint8_t_u_u((&g_150 == (void*)0), 4)) || p_17)))), g_183));
    return (*l_287);

    }







static union U2 * func_32(union U2 * p_33, unsigned char p_34, union U2 * p_35)
{
    union U2 *l_282 = &g_25;
    return l_282;


}







static unsigned char func_36(unsigned short p_37, int p_38, short p_39)
{
    union U0 **l_276 = (void*)0;
    int *l_277 = &g_22;
    int **l_278 = &l_277;
    (*l_277) = (safe_add_func_uint8_t_u_u(8UL, ((l_276 = g_274) == &g_275)));

    ;
    (*l_278) = &g_60;

    ;
    if ((*l_277))
    {
        int *l_279 = &g_60;
        (*l_278) = l_279;
        (*l_278) = (void*)0;

        ;
    }
    else
    {
        int *l_280 = (void*)0;
        int **l_281 = &g_91;
        (*l_281) = ((*l_278) = (*l_278));

        ;
        return g_186;
    }

    ;
    return g_202;
}







static unsigned func_42(short p_43, union U2 ** p_44)
{
    int **l_247 = &g_91;
    int **l_248 = &g_91;
    int **l_249 = &g_91;
    int **l_250 = (void*)0;
    int **l_251 = &g_91;
    int **l_252 = &g_91;
    int **l_253 = &g_91;
    int **l_254 = &g_91;
    int **l_255 = &g_91;
    int **l_256 = &g_91;
    int **l_257 = &g_91;
    int **l_258 = &g_91;
    int **l_259 = &g_91;
    int **l_260 = &g_91;
    int **l_261 = (void*)0;
    int **l_262 = &g_91;
    int **l_263 = &g_91;
    int **l_264 = &g_91;
    int *l_265 = &g_60;
    char l_266 = 0x8CL;
    short l_270 = (-8L);
    l_270 = (safe_mod_func_uint8_t_u_u(func_48((&g_22 != (l_265 = func_53(g_29, func_57((*p_44)), &g_22))), (0x925DL <= l_266), g_22, p_43), p_43));

    ;

    ;
    return g_271;
}







static unsigned char func_48(unsigned short p_49, unsigned char p_50, short p_51, unsigned p_52)
{
    char l_267 = (-1L);
    int *l_268 = (void*)0;
    int *l_269 = &g_60;
    (*l_269) = (p_52 < (!l_267));
    return p_50;
}







static int * func_53(union U2 ** p_54, unsigned char * p_55, int * p_56)
{
    unsigned l_93 = 1UL;
    union U1 *l_155 = &g_63;
    union U2 ***l_164 = &g_29;
    unsigned l_206 = 0UL;
    int l_224 = 0x7866B3F0L;
    if (l_93)
    {
        unsigned char l_108 = 1UL;
        int *l_110 = &g_22;
        if ((*p_56))
        {
            union U0 *l_99 = &g_84;
            int l_107 = 0x757037A9L;
            union U2 *l_138 = &g_25;
            if ((*p_56))
            {
                char l_100 = 0xACL;
                int l_134 = 0x38E40FFFL;
                union U2 **l_139 = &l_138;
                int **l_140 = &g_91;
                unsigned char l_153 = 255UL;
                for (g_25.f1 = 0; (g_25.f1 < 11); g_25.f1 = safe_add_func_int32_t_s_s(g_25.f1, 2))
                {
                    int l_96 = (-1L);
                    int *l_120 = (void*)0;
                    int *l_133 = (void*)0;
                    int **l_137 = &l_110;
                    if (l_96)
                    {
                        union U0 *l_98 = &g_84;
                        union U0 **l_97 = &l_98;
                        int l_105 = 0xC9C813C7L;
                        char *l_106 = &g_63.f2;
                        int *l_109 = &l_105;
                        (*l_97) = (void*)0;

                        ;
                        (*l_97) = l_99;

                        ;
                        if (g_25.f1)
                            continue;
                        (*l_109) = (l_100 ^ (((&g_63 == &g_63) == ((safe_add_func_uint8_t_u_u(255UL, l_100)) & l_93)) <= (safe_lshift_func_int8_t_s_s(l_105, (l_96 > (((l_108 = ((((*l_106) = g_25.f2) ^ 1L) || l_107)) != l_107) <= l_100))))));

                    }
                    else
                    {
                        int **l_111 = &l_110;
                        short l_129 = (-1L);
                        int *l_130 = &g_60;
                        (*l_111) = l_110;
                        l_129 = (((l_96 & (**l_111)) & ((((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s((g_25.f2 == ((safe_lshift_func_uint16_t_u_u(65535UL, 12)) > ((g_60 = (((((g_4 ^ (safe_sub_func_int16_t_s_s(4L, ((l_120 = p_56) == (void*)0)))) && ((((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(g_63.f2, l_100)), 0x9040L)), 10)), 0x34L)) != (*p_56)) & g_25.f2) == 0L)) == 0x39L) == (-5L)) <= (*p_56))) & g_63.f2))), l_96)), l_93)) == 0xDCL) > g_84.f0) || 0xBCE55470L)) & l_107);

                        ;
                        (*l_130) = (*p_56);
                    }

                    ;
                    l_134 = (safe_lshift_func_int16_t_s_u(0x51AFL, g_22));
                    for (g_63.f0 = 11; (g_63.f0 != 3); --g_63.f0)
                    {
                        l_134 = 1L;
                        if (g_84.f0)
                            goto lbl_141;
                        return p_56;


                    }

                    (*l_137) = &l_134;

                    ;
                }

                ;
                (*l_139) = l_138;
lbl_141:
                (*l_140) = l_110;

                ;
                for (l_107 = (-24); (l_107 == (-14)); ++l_107)
                {
                    unsigned l_148 = 0UL;
                    unsigned short *l_149 = &g_150;
                    union U1 **l_156 = (void*)0;
                    union U1 **l_157 = (void*)0;
                    union U1 **l_158 = &g_62;
                    int l_161 = 0xB77C0CF4L;
                    if (((safe_sub_func_uint32_t_u_u((l_107 >= (*g_91)), (*g_91))) == ((**l_140) ^ ((**l_140) > (safe_sub_func_uint8_t_u_u(l_148, (((((*l_149) = l_107) >= g_22) || (safe_rshift_func_uint8_t_u_s(0UL, 3))) == (*l_110))))))))
                    {
                        if ((*p_56))
                            break;
                        return &g_60;



                    }
                    else
                    {
                        int *l_154 = &l_134;
                        l_153 = 1L;
                        (*l_154) = (*p_56);
                    }
                    (*l_158) = l_155;
                    for (g_60 = 15; (g_60 == (-26)); g_60 = safe_sub_func_uint32_t_u_u(g_60, 1))
                    {
                        (*l_140) = &g_60;

                        ;
                        l_161 = (*p_56);
                        if ((*g_91))
                            continue;
                    }
                    for (g_25.f2 = 0; (g_25.f2 <= 31); ++g_25.f2)
                    {
                        (*l_140) = p_56;

                        ;
                        if ((*g_91))
                            continue;
                        if ((*p_56))
                            continue;
                    }
                }

                ;
            }
            else
            {
                union U2 ***l_166 = &g_29;
                union U2 ****l_165 = &l_166;
                g_60 = (l_164 == ((*l_165) = (void*)0));

                ;
            }



            for (g_63.f2 = 0; (g_63.f2 != (-13)); g_63.f2--)
            {
                int **l_169 = &l_110;
                char *l_182 = &g_183;
                char *l_184 = (void*)0;
                char *l_185 = &g_186;
                char **l_187 = &l_184;
                int *l_188 = &l_107;
                if ((*p_56))
                    break;
                (*l_169) = &g_60;

                ;
                (**l_169) = (safe_mod_func_uint16_t_u_u(l_107, (safe_rshift_func_int8_t_s_s(((g_25.f2 & (safe_add_func_int32_t_s_s(l_107, g_150))) && 0xA4155BC6L), g_60))));
                (*l_188) = ((**l_169) = (safe_sub_func_int8_t_s_s(((*l_185) = ((safe_sub_func_uint8_t_u_u(((*l_110) <= (g_25.f0 = (safe_mod_func_uint8_t_u_u(247UL, ((*l_182) = 1L))))), ((*p_55) = g_22))) & g_84.f0)), (((*l_187) = p_55) == (void*)0))));

                ;
            }


        }
        else
        {
            int *l_189 = &g_60;
            int **l_190 = &g_91;
            unsigned short *l_195 = &g_150;
            char *l_200 = &g_186;
            char *l_201 = &g_202;
            short *l_203 = (void*)0;
            short *l_204 = &g_84.f0;
            short l_205 = 0xE50EL;
            union U2 *l_211 = &g_25;
            (*l_190) = l_189;

            ;
            if ((safe_add_func_uint8_t_u_u(g_63.f0, ((**l_190) && ((safe_add_func_int32_t_s_s((*p_56), (((*l_195) = (**l_190)) == g_25.f0))) & (safe_lshift_func_uint8_t_u_u(((0L == g_63.f2) || ((*l_204) = (((safe_rshift_func_uint16_t_u_u(7UL, 5)) < (((*l_201) = (g_183 = ((*l_200) = l_93))) == l_93)) & l_93))), 5)))))))
            {
                l_206 = (l_205 != g_25.f1);
                (*l_190) = p_56;

                ;
            }
            else
            {
                return &g_60;


            }

            ;
            if ((((((*l_204) = ((*l_110) != (*l_110))) >= g_25.f0) >= (g_183 = g_183)) & (((safe_lshift_func_int16_t_s_u(((g_60 = (*g_91)) || 4294967286UL), 7)) > (*g_91)) != g_25.f0)))
            {
                (*l_189) = ((safe_mul_func_int32_t_s_s(0x6552DC66L, (l_211 != &g_25))) | (*g_91));
            }
            else
            {
                union U1 **l_212 = &g_62;
                (*l_212) = &g_63;
            }
        }



    }
    else
    {
        unsigned short l_213 = 1UL;
        int *l_218 = &g_60;
        (*l_218) = (l_213 == ((l_213 != 0x351EL) < ((safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(l_213, g_25.f0)), 12)) > (!(g_20 = g_84.f0)))));
    }


    for (g_63.f0 = (-2); (g_63.f0 == (-27)); --g_63.f0)
    {
        union U1 *l_225 = (void*)0;
        union U2 **l_232 = (void*)0;
        int l_234 = 8L;
        for (g_186 = 0; (g_186 > (-7)); g_186 = safe_sub_func_uint8_t_u_u(g_186, 2))
        {
            int l_223 = 0x29366B1BL;
            union U1 **l_226 = &g_62;
            int *l_227 = &l_223;
            l_224 = (g_60 = l_223);
            if ((*p_56))
                continue;
            (*l_226) = l_225;

            ;
            (*l_227) = l_223;
        }
        if ((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((-4L), 7)), 12)))
        {
            int *l_233 = (void*)0;
            l_224 = ((void*)0 != l_232);
            if (l_224)
                continue;
            if ((*p_56))
                break;
            if (l_234)
                continue;
        }
        else
        {
            int *l_235 = &l_234;
            unsigned short *l_242 = &g_150;
            (*l_235) = l_224;
            (*l_235) = ((safe_mod_func_int8_t_s_s(((g_202 | (1L & ((safe_rshift_func_uint8_t_u_s((*p_55), (*l_235))) && (((*l_242) = l_234) && l_206)))) > (*l_235)), g_20)) ^ (p_54 != p_54));
        }
        for (g_25.f2 = (-20); (g_25.f2 >= 13); g_25.f2 = safe_add_func_int16_t_s_s(g_25.f2, 1))
        {
            int **l_245 = (void*)0;
            int **l_246 = &g_91;
            (*l_246) = &g_60;

            ;
            (*l_246) = &g_60;
        }
        return &g_60;


    }

    ;
    return &g_22;


}







static unsigned char * func_57(union U2 * p_58)
{
    int *l_59 = &g_60;
    union U1 *l_76 = &g_63;
    union U0 *l_83 = &g_84;
    int l_87 = 0x7401D8B2L;
    int **l_89 = (void*)0;
    int **l_90 = (void*)0;
    unsigned char *l_92 = &g_20;
    if ((~((*l_59) = g_25.f1)))
    {
        return &g_20;


    }
    else
    {
        char l_61 = 0L;
        int *l_74 = &g_60;
        int *l_75 = &g_60;
        if (l_61)
        {
            union U1 **l_64 = &g_62;
            int *l_68 = &g_22;
            (*l_64) = g_62;
            if (g_25.f1)
                goto lbl_65;
lbl_65:
            (*l_64) = &g_63;
            for (l_61 = (-25); (l_61 > (-20)); ++l_61)
            {
                int **l_69 = &l_59;
                int *l_70 = &g_60;
            }
        }
        else
        {
            int **l_71 = &l_59;
            (*l_71) = &g_22;

            ;
        }

        ;
        (*l_74) = (((g_20 && l_61) < (*l_59)) == (4294967295UL == ((*l_59) > l_61)));
        l_75 = l_74;
    }

    ;
    if ((*l_59))
    {
        l_76 = &g_63;
    }
    else
    {
        int *l_79 = &g_60;
        union U1 **l_82 = (void*)0;
        union U0 *l_88 = &g_84;
        (*l_79) = ((((void*)0 == l_79) & (((*l_79) | (safe_mod_func_uint32_t_u_u((*l_59), g_63.f0))) == ((*l_59) > (0x1351L != (&l_76 == l_82))))) >= g_25.f1);
        l_83 = l_83;
        (*l_79) = (((*l_79) != ((*l_59) == (((*l_79) == (*l_79)) & ((&g_29 == &g_29) || l_87)))) != (&g_84 != l_88));
    }
    g_91 = &l_87;

    ;
    return l_92;



}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_25.f2, "g_25.f2", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_63.f0, "g_63.f0", print_hash_value);
    transparent_crc(g_63.f2, "g_63.f2", print_hash_value);
    transparent_crc(g_84.f0, "g_84.f0", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_443, "g_443", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
