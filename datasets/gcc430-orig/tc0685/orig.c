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
   unsigned f0;
};

union U1 {
   short f0;
};

union U2 {
   char * f0;
   unsigned f1;
   unsigned short f2;
};


static int g_8 = 5L;
static int g_19 = 0x921E124DL;
static union U1 g_37 = {0xF5A2L};
static char g_45 = 0xCBL;
static int g_49 = 0x939C0105L;
static char g_50 = 0xABL;
static char *g_52 = &g_45;
static char **g_51 = &g_52;
static union U2 g_66 = {0};
static unsigned g_80 = 0x064544A9L;
static union U0 g_101 = {3UL};
static int g_118 = 0x72093AA6L;
static int *g_126 = (void*)0;
static int **g_135 = &g_126;
static unsigned short g_138 = 0x9602L;
static unsigned char g_170 = 6UL;
static unsigned g_198 = 0x06CF207FL;
static int *g_222 = (void*)0;
static union U0 *g_260 = &g_101;
static union U0 **g_259 = &g_260;
static int g_262 = (-1L);
static unsigned short g_296 = 0x7973L;
static short g_311 = 6L;
static short *g_310 = &g_311;
static unsigned g_312 = 0x3DD4075EL;
static short g_314 = (-10L);
static char g_361 = 0xA6L;
static char g_402 = (-1L);
static union U1 g_415 = {-3L};
static unsigned short g_417 = 0xC0BEL;
static unsigned *g_496 = &g_101.f0;
static unsigned **g_495 = &g_496;
static union U2 *g_536 = &g_66;
static union U1 **g_537 = (void*)0;
static union U1 *g_540 = (void*)0;
static union U1 **g_539 = &g_540;



static short func_1(void);
static int * func_2(int * p_3);
static int * func_4(union U2 p_5);
static unsigned short func_10(unsigned p_11);
static char ** func_20(unsigned p_21, char p_22);
static union U0 func_23(unsigned p_24, unsigned p_25, union U0 p_26, char ** p_27);
static unsigned func_28(unsigned char p_29, unsigned char p_30, unsigned p_31, char p_32);
static unsigned char func_33(union U1 p_34, int * p_35, char ** p_36);
static int * func_38(char * p_39, int * p_40, int * p_41, int p_42, union U0 p_43);
static union U0 * func_55(char * p_56, unsigned short p_57, union U1 p_58);
static short func_1(void)
{
    unsigned l_12 = 6UL;
    unsigned *l_304 = &g_101.f0;
    unsigned **l_303 = &l_304;
    short *l_313 = &g_314;
    int l_315 = 7L;
    int *l_320 = &g_19;
    int **l_479 = &l_320;
    int *l_494 = &g_118;
    short *l_497 = &g_415.f0;
    int *l_498 = &g_19;
    union U0 l_499 = {0x157EC87FL};
    union U1 l_545 = {0x27B0L};
    int l_546 = 3L;
    unsigned char l_550 = 0x2AL;
    (*l_479) = func_2((l_320 = func_4(((safe_div_func_int16_t_s_s(((!g_8) , (safe_unary_minus_func_uint16_t_u(func_10(l_12)))), ((*l_313) = (l_12 , (l_315 = ((((*l_303) = &g_198) == &g_198) | (safe_unary_minus_func_uint16_t_u(((((((safe_div_func_int8_t_s_s(0x5FL, ((((g_312 = (0UL >= (safe_div_func_int16_t_s_s(((*g_310) |= (g_310 != &g_311)), 0x174FL)))) != 0xE3L) >= g_101.f0) , g_311))) <= l_12) , (void*)0) != l_313) , l_12) , 0x6784L))))))))) , g_66))));


    ;
    ;
    ;
    ;
    if ((safe_rshift_func_uint8_t_u_u(g_296, (safe_div_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u((((*l_498) &= (((safe_add_func_uint8_t_u_u(g_49, l_315)) > g_45) > (safe_sub_func_int16_t_s_s((safe_mod_func_int16_t_s_s((!(!(*g_310))), ((*l_497) = (g_37.f0 = (((*l_304) &= g_170) ^ (((g_45 , ((((*l_313) &= ((((((*l_494) = (0xE115F965L & ((*g_310) > (*g_310)))) , (*g_52)) < (-3L)) != l_315) && g_415.f0)) , (void*)0) == g_495)) && l_315) , l_315)))))), (*g_310))))) != 6L), (*g_310))), g_138)), (*g_52))))))
    {
        char l_500 = 0xCDL;
        union U1 *l_501 = &g_37;
        unsigned char *l_505 = &g_170;
        if ((((**g_495) != func_10(((*g_495) == (*g_495)))) , (l_499 , l_500)))
        {
            union U1 **l_502 = &l_501;
            (*l_502) = l_501;
        }
        else
        {
            (*l_498) = l_500;
        }
        (*l_498) = (((*g_310) >= (func_10((((*l_498) < (safe_mod_func_uint8_t_u_u(((*l_505) = l_500), l_500))) == l_500)) || l_500)) == l_500);
    }
    else
    {
        char l_506 = (-1L);
        int *l_509 = &g_262;
        int l_519 = 1L;
        union U0 *l_549 = &l_499;
        int *l_551 = &l_519;
        (*l_498) = l_506;
        for (g_118 = 6; (g_118 > 11); g_118 = safe_add_func_uint32_t_u_u(g_118, 2))
        {
            unsigned char l_515 = 0x42L;
            short *l_522 = &g_311;
            unsigned l_529 = 1UL;
            int *l_544 = &l_519;
            l_509 = (*l_479);

            ;
            for (g_101.f0 = 0; (g_101.f0 < 23); g_101.f0 = safe_add_func_uint32_t_u_u(g_101.f0, 5))
            {
                union U0 l_514 = {0x8405B058L};
                short l_518 = (-1L);
                (*l_479) = (void*)0;

                ;
                for (g_314 = (-14); (g_314 != (-26)); g_314 = safe_sub_func_uint8_t_u_u(g_314, 2))
                {
                    unsigned char *l_530 = &g_170;
                    int l_531 = 5L;
                    unsigned short *l_532 = &g_296;
                    union U1 *l_533 = &g_37;
                    if (((l_514 , l_515) ^ ((l_519 = (g_80 ^ (safe_mod_func_uint8_t_u_u(l_518, l_515)))) ^ (safe_add_func_uint8_t_u_u(g_415.f0, ((((void*)0 == l_522) || ((*l_532) = (safe_div_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(((((*l_530) = (safe_lshift_func_int8_t_s_s(((**g_51) = (g_296 == l_529)), g_170))) < g_101.f0) , (*g_52)), l_515)) == l_531), 7L)))) != l_515))))))
                    {
                        union U1 **l_534 = &l_533;
                        (*l_534) = l_533;
                        (*l_498) = 0x7906F76AL;
                    }
                    else
                    {
                        union U2 **l_535 = (void*)0;
                        g_536 = (void*)0;

                        ;
                    }
                    if (l_531)
                    {
                        union U1 ***l_538 = &g_537;
                        union U1 ***l_541 = &g_539;
                        union U1 **l_543 = &g_540;
                        union U1 ***l_542 = &l_543;
                        (*l_498) ^= (((*l_538) = g_537) != ((*l_542) = ((*l_541) = g_539)));
                    }
                    else
                    {
                        l_519 ^= (0xC6E2BD32L != (l_531 = (*g_496)));
                    }
                }
                (*l_498) ^= (255UL && 0x69L);
            }
            (*l_544) &= (*l_498);
            if (l_519)
                break;
        }

        ;
        ;
        (*l_551) &= func_33(l_545, ((g_66.f1 = (*l_498)) , func_38((((*g_52) = (func_28((g_417 >= g_311), g_314, g_66.f2, l_550) > (*g_496))) , (void*)0), &g_19, &g_19, g_402, (*l_549))), &g_52);

        ;
    }

    ;
    ;
    return (*g_310);
}







static int * func_2(int * p_3)
{
    int l_330 = 0L;
    char **l_337 = &g_52;
    union U0 l_345 = {0x9423C260L};
    union U1 l_389 = {0x0FECL};
    int *l_423 = &g_19;
    short l_434 = 2L;
    unsigned l_435 = 4294967295UL;
    int *l_448 = &g_49;
    union U0 l_468 = {2UL};
    for (g_101.f0 = 0; (g_101.f0 == 22); g_101.f0++)
    {
        unsigned char l_327 = 255UL;
        char *l_331 = &g_50;
        int l_332 = 0xF61EEE09L;
        int *l_333 = &g_19;
        short *l_413 = &g_311;
        unsigned char l_425 = 255UL;
        union U1 l_426 = {0L};
        char *l_436 = &g_50;
        union U2 l_458 = {0};
        int l_473 = 0xB4CA8E42L;
        short l_477 = 1L;
        l_332 ^= (((safe_sub_func_uint8_t_u_u(0x1EL, (safe_add_func_uint8_t_u_u(4UL, (l_327 == ((**g_51) ^ ((*l_331) |= (safe_sub_func_int16_t_s_s((l_327 ^ l_330), (0x39C2L == l_327)))))))))) > l_327) , l_330);
        (*l_333) = 7L;
    }
    return (*g_135);


}







static int * func_4(union U2 p_5)
{
    char l_316 = 0x05L;
    int *l_319 = &g_262;
    if (l_316)
    {
        return (*g_135);


    }
    else
    {
        int **l_317 = &g_222;
        int l_318 = 0x02C53580L;
        (*l_317) = ((*g_135) = (*g_135));


        l_318 |= l_316;
    }


    return l_319;


}







static unsigned short func_10(unsigned p_11)
{
    unsigned l_17 = 0xE229EDCAL;
    union U0 l_286 = {1UL};
    int *l_300 = &g_49;
    int *l_301 = &g_49;
    for (p_11 = 22; (p_11 > 32); ++p_11)
    {
        int *l_18 = &g_19;
        char *l_44 = &g_45;
        (*l_18) ^= (safe_mod_func_uint32_t_u_u((g_8 ^ g_8), l_17));
        if ((g_19 && l_17))
        {
            if (g_8)
                break;
            if (p_11)
                continue;
            (*l_18) = g_19;
        }
        else
        {
            unsigned short l_46 = 0UL;
            union U0 l_47 = {0x4B693050L};
            unsigned *l_288 = (void*)0;
            unsigned *l_289 = &l_17;
            char ***l_298 = (void*)0;
            char ***l_299 = &g_51;
            union U1 *l_302 = &g_37;
            (*l_299) = func_20(((((((*l_289) = (func_23(g_19, func_28(g_8, func_33(g_37, func_38(l_44, &g_19, l_18, l_46, l_47), g_51), g_19, l_46), l_286, &l_44) , g_170)) , l_286.f0) | 0x0FL) == 1UL) <= g_198), l_47.f0);

            ;
            (*g_135) = l_300;

            ;
            l_18 = func_38((**l_299), l_301, (*g_135), p_11, l_286);

            ;
            l_302 = &g_37;
        }

        ;
    }
    return g_101.f0;
}







static char ** func_20(unsigned p_21, char p_22)
{
    unsigned char *l_292 = &g_170;
    int l_293 = 0x6B97F857L;
    union U0 **l_294 = (void*)0;
    unsigned short *l_295 = &g_296;
    int *l_297 = &g_49;
    (*l_297) = (safe_mod_func_int16_t_s_s(func_28(((*l_292) = g_101.f0), l_293, (&g_260 != l_294), p_22), ((*l_295) = g_198)));
    return &g_52;


}







static union U0 func_23(unsigned p_24, unsigned p_25, union U0 p_26, char ** p_27)
{
    int *l_287 = &g_262;
    (*l_287) |= ((**g_135) = (*g_126));
    return (**g_259);

    }







static unsigned func_28(unsigned char p_29, unsigned char p_30, unsigned p_31, char p_32)
{
    union U1 l_122 = {0L};
    union U2 l_123 = {0};
    int *l_124 = &g_19;
    int **l_125 = &l_124;
    int *l_127 = &g_49;
    int *l_128 = &g_19;
    union U0 l_129 = {0x25DF25B4L};
    union U0 l_130 = {4294967295UL};
    char **l_131 = &g_52;
    int *l_141 = (void*)0;
    unsigned short *l_207 = &g_138;
    unsigned l_218 = 0x1834DD5DL;
    int l_226 = 1L;
    int *l_243 = &l_226;
    unsigned l_285 = 4UL;
    (*l_127) = func_33(l_122, (l_123 , func_38((*g_51), ((*l_125) = l_124), func_38(&p_32, (g_126 = &g_19), ((+0x23A1BF70L) , func_38((*g_51), l_127, l_128, g_80, l_129)), p_31, l_130), (*l_128), g_101)), l_131);

    ;
    ;
    (*l_125) = (*l_125);
    if ((g_49 = (0L < (safe_lshift_func_int16_t_s_s(g_8, 10)))))
    {
        int ***l_134 = &l_125;
        unsigned short *l_136 = &l_123.f2;
        unsigned short *l_137 = &g_138;
        char **l_149 = &g_52;
        union U1 l_241 = {0x951EL};
        (*l_127) = (((*l_137) &= ((+(((((g_135 = ((*l_134) = &g_126)) == &g_126) && ((*l_136) = func_33(g_37, (*g_135), l_131))) >= (g_101.f0 >= (*l_124))) ^ (-3L))) | 5L)) && (-1L));


        ;
        if (p_31)
        {
            int *l_142 = &g_49;
            unsigned l_158 = 4294967287UL;
            char **l_159 = (void*)0;
            union U1 *l_177 = &l_122;
            short l_219 = 0L;
            int *l_221 = &g_49;
            union U2 l_225 = {0};
            int *l_244 = &g_19;
            union U0 **l_261 = &g_260;
            for (g_37.f0 = 0; (g_37.f0 > (-4)); g_37.f0--)
            {
                int *l_151 = &g_49;
                union U0 l_152 = {8UL};
                int l_220 = 9L;
                l_142 = l_141;
                for (p_31 = 0; (p_31 == 33); p_31 = safe_add_func_uint16_t_u_u(p_31, 8))
                {
                    short *l_145 = (void*)0;
                    short *l_146 = &l_122.f0;
                    int *l_150 = &g_49;
                    char **l_153 = &g_52;
                    union U2 *l_182 = &l_123;
                    union U2 **l_181 = &l_182;
                    unsigned *l_183 = &l_130.f0;
                    unsigned *l_196 = &l_152.f0;
                    unsigned *l_197 = &g_80;
                    if (((((*l_146) = g_138) > func_33(g_37, ((safe_mod_func_int16_t_s_s(func_33(g_37, (*g_135), l_149), 0x96FBL)) , func_38((*g_51), ((**l_134) = l_150), l_151, p_30, l_152)), l_153)) <= 0UL))
                    {
                        unsigned char *l_168 = (void*)0;
                        unsigned char *l_169 = &g_170;
                        (**g_135) = (safe_sub_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((((*g_52) = l_158) < ((void*)0 == l_159)), (p_31 && (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((*l_169) = (safe_rshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(2L, ((**g_135) , p_30))), 9))), 7)), 1))))) < (safe_rshift_func_uint8_t_u_u((g_118 != (safe_add_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(0x2AL, 0)) , p_30), 65531UL))), p_29))), p_30));
                    }
                    else
                    {
                        union U1 **l_178 = (void*)0;
                        union U1 **l_179 = &l_177;
                        int l_180 = (-5L);
                        (***l_134) &= 0x015BDF58L;
                        (*l_179) = l_177;
                        l_180 = ((*l_150) |= p_29);
                        (*g_135) = (**l_134);
                    }

                    ;
                    (*l_181) = &l_123;
                    (**g_135) = (((*l_183) = 0x77FB2C37L) | (safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((*l_150), ((safe_sub_func_int8_t_s_s(((((*l_146) = g_101.f0) >= (((!(((*l_137) = ((safe_sub_func_uint32_t_u_u((((((safe_add_func_int32_t_s_s((p_29 == (p_31 , (p_29 && g_118))), ((g_80 , (((*l_197) &= ((*l_196) = ((p_29 > g_101.f0) || g_49))) || p_32)) > p_29))) || 0x8BL) , g_66) , g_8) & g_118), g_49)) <= 1L)) <= p_31)) > (-1L)) <= g_19)) ^ 0x3286L), (*l_124))) , g_198))), 65535UL)));
                    if ((g_45 > ((g_37 , p_29) < ((((**g_135) > p_32) > ((g_45 && (*l_151)) | ((((safe_rshift_func_uint16_t_u_s(g_50, (safe_div_func_uint16_t_u_u(((*l_137) = p_32), g_80)))) , p_32) ^ (*l_150)) == (*l_150)))) == (*l_150)))))
                    {
                        char l_203 = (-1L);
                        int l_204 = 0x3936D73FL;
                        l_204 &= l_203;
                        (*g_135) = (*g_135);
                        (*l_150) = ((((safe_div_func_uint8_t_u_u((((((((*l_150) , l_207) == &g_138) , (p_30 <= p_32)) != (p_32 <= (((*l_196) = ((safe_mod_func_int32_t_s_s(0xE3446011L, (safe_div_func_int32_t_s_s(((((*l_127) == (safe_add_func_uint32_t_u_u(((safe_div_func_uint8_t_u_u((((safe_add_func_int8_t_s_s(((void*)0 != l_142), g_170)) , 253UL) > (***l_134)), (**l_125))) < 0x86E7879BL), p_30))) != p_30) , 0x3B9D7460L), g_49)))) ^ g_45)) & l_218))) ^ 0xDDE0D53BL) <= p_30), l_219)) > 0L) , g_80) , l_220);
                    }
                    else
                    {
                        (***l_134) &= p_31;
                        if (p_32)
                            continue;
                        l_141 = (g_222 = ((**l_134) = l_221));

                        ;
                        ;
                    }
                }
                l_226 |= ((*l_151) , ((!(safe_lshift_func_uint8_t_u_s(p_29, ((l_225 , (*l_221)) , p_29)))) < ((*l_137) &= (***l_134))));
            }

            ;
            ;
            ;
            ;
            for (l_226 = 0; (l_226 <= (-5)); l_226 = safe_sub_func_int16_t_s_s(l_226, 8))
            {
                union U2 *l_230 = &l_225;
                union U2 **l_229 = &l_230;
                (*l_229) = &g_66;

                ;
            }
            for (g_138 = (-1); (g_138 > 59); ++g_138)
            {
                char *l_242 = (void*)0;
                int *l_246 = (void*)0;
                union U0 l_247 = {5UL};
                union U0 *l_264 = &l_129;
                union U0 **l_263 = &l_264;
                if (((l_207 == l_137) && ((safe_unary_minus_func_int16_t_s(func_33(g_37, l_221, &g_52))) == p_31)))
                {
                    char *l_236 = (void*)0;
                    for (l_219 = (-13); (l_219 < (-3)); l_219 = safe_add_func_uint8_t_u_u(l_219, 7))
                    {
                        union U0 l_237 = {4294967295UL};
                        int *l_238 = &l_226;
                        l_142 = func_38(l_236, (*g_135), l_142, p_31, l_237);

                        ;
                        (*l_238) ^= ((*l_142) &= p_31);
                        if ((*l_221))
                            break;
                    }
                    (*l_221) |= ((*g_52) > (safe_rshift_func_int8_t_s_s((l_225 , 0x76L), (**g_51))));
                }
                else
                {
                    int *l_245 = &l_226;
                    union U0 l_248 = {4294967286UL};
                    union U2 *l_249 = &g_66;
                    short *l_258 = &g_37.f0;
                    (*l_221) = func_33(l_241, func_38(l_242, func_38(&p_32, l_243, func_38((*g_51), l_244, func_38(&p_32, func_38(&p_32, func_38((*l_149), l_245, l_246, (*g_126), g_101), l_246, p_30, g_101), (*g_135), (*l_245), l_247), (*l_245), g_101), p_32, l_248), l_246, p_32, g_101), &g_52);
                    (*l_127) = ((p_32 & (((*l_249) = l_225) , ((*l_245) = (safe_mod_func_int16_t_s_s((g_80 | (g_262 = ((((+1L) ^ (p_30 && ((safe_add_func_int32_t_s_s(((((*l_258) = (safe_add_func_uint16_t_u_u(((void*)0 == l_142), ((safe_sub_func_int8_t_s_s((*g_52), (0xE2L && p_29))) <= g_118)))) , g_259) == l_261), g_8)) || p_29))) , (*l_245)) || (***l_134)))), (-1L)))))) < p_30);

                    ;
                }
                (*l_263) = ((*g_259) = func_55(&p_32, g_138, (*l_177)));

                ;
                if ((*l_243))
                    break;
            }
            l_142 = (*l_125);

            ;
        }
        else
        {
            int l_265 = 0x746C7578L;
            (*l_243) = l_265;
        }

        ;
        ;
        (*l_243) = p_32;
    }
    else
    {
        int *l_266 = &g_19;
        union U0 l_273 = {8UL};
        (*g_135) = func_38((*l_131), (*l_125), l_266, ((*l_243) = (safe_rshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u((l_122 , g_50), (*g_52))) != (safe_mod_func_uint32_t_u_u(((*l_266) >= (g_50 && (**l_125))), 0x39D1B266L))), 6))), l_273);

        ;
        for (g_8 = 7; (g_8 != 24); ++g_8)
        {
            int *l_276 = (void*)0;
            l_276 = (void*)0;
        }
        l_266 = (*g_135);

        ;
    }


    ;
    ;
    ;
    for (g_80 = 21; (g_80 >= 59); g_80++)
    {
        short l_279 = 0x98B6L;
        (*l_127) = (+l_279);
        for (g_49 = 2; (g_49 == (-24)); g_49 = safe_sub_func_int8_t_s_s(g_49, 5))
        {
            char l_282 = 0L;
            int *l_283 = &g_262;
            char ***l_284 = &g_51;
            (*l_283) = (l_282 , ((*l_243) &= 0x8AAE3D87L));
            (*l_243) = (*l_124);
            (*l_243) |= (((*l_284) = &g_52) == l_131);
            return p_29;
        }
    }
    return l_285;
}







static unsigned char func_33(union U1 p_34, int * p_35, char ** p_36)
{
    int l_105 = (-5L);
    int l_116 = 0x3A031552L;
    int l_117 = 0xFA8BF40FL;
    union U0 l_119 = {0x2B3FDF2DL};
    int *l_121 = &g_19;
    int **l_120 = &l_121;
    for (p_34.f0 = 0; (p_34.f0 < 4); p_34.f0 = safe_add_func_uint8_t_u_u(p_34.f0, 6))
    {
        char *l_59 = &g_45;
        int l_60 = (-5L);
        union U1 l_61 = {0x7BAAL};
        union U0 *l_103 = &g_101;
        union U0 **l_102 = &l_103;
        char *l_104 = &g_45;
        int *l_107 = &g_19;
        int **l_106 = &l_107;
        (*l_102) = func_55(l_59, l_60, l_61);
        (*l_106) = func_38(l_104, p_35, p_35, l_105, g_101);

        ;
        for (g_45 = 0; (g_45 >= (-15)); g_45--)
        {
            union U0 *l_112 = &g_101;
            unsigned short *l_113 = &g_66.f2;
            l_60 &= ((*p_35) && (safe_mod_func_uint16_t_u_u(g_50, ((g_118 = (((*l_113) = (&g_101 == l_112)) != (0L | ((safe_div_func_int16_t_s_s((((l_116 &= (**p_36)) < ((**l_106) < ((*l_107) | (l_117 |= (*g_52))))) , p_34.f0), 0x3317L)) && (**p_36))))) | 0xF3L))));
        }
    }
    (*l_120) = func_38((*g_51), &g_19, &l_116, (*p_35), l_119);

    ;
    return p_34.f0;
}







static int * func_38(char * p_39, int * p_40, int * p_41, int p_42, union U0 p_43)
{
    int *l_48 = &g_49;
    g_50 = ((*l_48) = (*p_40));
    (*l_48) = (~(*p_40));
    return l_48;


}







static union U0 * func_55(char * p_56, unsigned short p_57, union U1 p_58)
{
    int l_62 = 0L;
    int l_77 = (-4L);
    union U2 l_90 = {0};
    int *l_95 = &l_77;
    int **l_94 = &l_95;
    int ***l_93 = &l_94;
    int **l_97 = &l_95;
    int ***l_96 = &l_97;
    int *l_98 = (void*)0;
    int *l_99 = &g_49;
    union U0 *l_100 = &g_101;
    if (l_62)
    {
        char l_71 = 0x97L;
        unsigned char l_86 = 8UL;
        int *l_88 = &l_77;
        int *l_89 = &g_49;
        if (g_49)
        {
            int *l_65 = &g_49;
            unsigned short *l_74 = &g_66.f2;
            unsigned *l_78 = (void*)0;
            unsigned *l_79 = &g_80;
            int **l_81 = &l_65;
            (*l_81) = ((safe_sub_func_int32_t_s_s(((*l_65) = 0xCB0C7B24L), (((*g_52) || (l_62 <= (g_66 , (safe_div_func_uint32_t_u_u((safe_div_func_int8_t_s_s(l_71, ((*p_56) = (safe_rshift_func_int8_t_s_s((((*l_74) = p_57) || ((*l_74) |= l_71)), 1))))), ((*l_79) = (safe_rshift_func_uint16_t_u_s((p_58.f0 == (((l_77 ^= p_58.f0) == 0UL) < g_8)), l_71)))))))) , 7L))) , (void*)0);

            ;
            for (g_49 = (-3); (g_49 <= (-18)); g_49 = safe_sub_func_uint16_t_u_u(g_49, 9))
            {
                (*l_81) = &l_77;

                ;
            }

            ;
        }
        else
        {
            int *l_87 = &l_77;
            (*l_87) ^= (safe_lshift_func_int16_t_s_u(l_86, 11));
        }
        (*l_89) = ((*l_88) ^= p_58.f0);
    }
    else
    {
        int *l_91 = &l_77;
        union U1 *l_92 = &g_37;
        (*l_91) = ((g_37.f0 , 0x4AL) <= (l_90 , g_80));

        ;
        l_92 = l_92;
    }

    ;
    (*l_99) = ((*l_95) = (((*l_93) = (void*)0) == ((*l_96) = &l_95)));

    ;
    return l_100;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_37.f0, "g_37.f0", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_101.f0, "g_101.f0", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    transparent_crc(g_314, "g_314", print_hash_value);
    transparent_crc(g_361, "g_361", print_hash_value);
    transparent_crc(g_402, "g_402", print_hash_value);
    transparent_crc(g_415.f0, "g_415.f0", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
