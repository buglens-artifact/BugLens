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
   unsigned short f0;
   int f1;
   short f2;
   int f3;
};

struct S1 {
   unsigned f0 : 28;
};

struct S2 {
   struct S1 f0;
};


static int g_15 = 0L;
static int g_39 = 0xF230B56BL;
static int *g_56 = &g_39;
static int **g_55 = &g_56;
static int g_61 = 7L;
static struct S1 *g_65 = (void*)0;
static struct S0 g_71 = {5UL,0x1997FBCBL,4L,1L};
static struct S0 *g_70 = &g_71;
static struct S1 g_80 = {4014};
static struct S0 **g_144 = (void*)0;
static struct S0 ***g_143 = &g_144;
static struct S2 g_186 = {{7103}};
static unsigned char g_317 = 0x8DL;
static char g_389 = (-1L);
static struct S1 g_432 = {14423};
static struct S1 *g_431 = &g_432;
static struct S1 **g_430 = &g_431;
static int g_525 = (-10L);



static struct S0 func_1(void);
static short func_2(short p_3, struct S0 p_4, struct S1 p_5);
static struct S0 func_7(struct S0 p_8, struct S2 p_9, char p_10);
static struct S0 func_11(unsigned p_12, struct S0 p_13, struct S1 p_14);
static int * func_18(unsigned short p_19);
static struct S0 func_21(unsigned short p_22, char p_23, int * p_24, unsigned p_25, int * p_26);
static short func_29(int * p_30, short p_31, char p_32, int * p_33, struct S1 p_34);
static char func_36(unsigned short p_37);
static struct S1 func_49(struct S2 p_50);
static struct S0 * func_52(int ** p_53, int * p_54);
static struct S0 func_1(void)
{
    int l_6 = 0x47597A61L;
    struct S0 l_16 = {0UL,-6L,0L,0x736D0C11L};
    struct S1 l_17 = {15358};
    struct S2 l_425 = {{9244}};
    struct S1 *l_429 = &l_425.f0;
    struct S1 **l_428 = &l_429;
    int *l_549 = &g_61;
    if ((func_2(l_6, func_7(func_11(g_15, l_16, l_17), l_425, ((safe_add_func_int8_t_s_s(((0xE8L && (l_428 != (l_17.f0 , g_430))) >= 3UL), g_317)) || 0xE2D00BD7L)), g_432) <= l_6))
    {
        struct S2 *l_550 = &l_425;
        struct S2 **l_551 = &l_550;
        int *l_552 = &g_39;
        struct S1 *l_553 = &l_425.f0;
        g_56 = l_549;

        ;
        (*l_551) = l_550;
        l_552 = ((*l_549) , &l_6);

        ;
        (*g_430) = l_553;

        ;
    }
    else
    {
        short l_554 = 1L;
        int **l_555 = &g_56;
        (*l_555) = (l_554 , (void*)0);

        ;
        (*l_428) = (*g_430);

        ;
        (*l_555) = &l_6;

        ;
    }

    ;
    ;
    ;
    ;
    ;
    return l_16;



}







static short func_2(short p_3, struct S0 p_4, struct S1 p_5)
{
    struct S1 **l_527 = &g_431;
    int *l_528 = &g_525;
    int *l_529 = &g_61;
    int ***l_544 = &g_55;
    int *l_546 = &g_39;
    l_529 = l_528;

    ;
    (*l_529) = 0L;
    if ((((g_317 > g_71.f2) > (safe_add_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((((~((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(p_4.f0, 3)), (safe_sub_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((g_39 > (*l_529)), g_317)), (*l_529))) < ((void*)0 != l_544)), (*l_529))))) <= (*l_529))) , 0xE46CL) | 0x8F0BL), p_4.f0)) || (*l_529)), g_317))) | g_15))
    {
        int **l_545 = &l_528;
        (*l_545) = &g_525;
        (*l_545) = (void*)0;

        ;
    }
    else
    {
        int *l_547 = &g_39;
        int **l_548 = &g_56;
        (*l_548) = l_547;

        ;
    }

    ;
    ;
    return g_80.f0;
}







static struct S0 func_7(struct S0 p_8, struct S2 p_9, char p_10)
{
    int *l_433 = &g_61;
    struct S1 l_458 = {9851};
    char l_489 = 3L;
    int *l_492 = &g_61;
    int ***l_523 = &g_55;
    struct S0 **l_524 = &g_70;
    struct S1 l_526 = {8701};
    if (p_8.f1)
    {
        int *l_434 = &g_61;
        l_434 = l_434;
    }
    else
    {
        int *l_435 = &g_39;
        struct S1 *l_439 = &g_432;
        short l_451 = 0x8E2EL;
        unsigned short l_480 = 0x6772L;
        if (p_9.f0.f0)
        {
            struct S1 *l_438 = &g_186.f0;
            int *l_440 = &g_61;
            short l_446 = 0x8E56L;
            if (p_8.f3)
            {
                int **l_436 = (void*)0;
                int **l_437 = &g_56;
                (*l_433) = p_8.f2;
                (*l_437) = l_435;

                ;
                (*l_437) = l_433;

                ;
                (*g_430) = l_438;

                ;
            }
            else
            {
                int *l_441 = (void*)0;
                (*l_435) = ((g_186 , (*g_430)) == l_439);
                l_441 = l_440;

                ;
                (*l_433) = (safe_rshift_func_int16_t_s_s((((g_71.f1 > ((safe_lshift_func_int16_t_s_s(l_446, 2)) >= g_15)) != (3L != p_8.f1)) == p_8.f2), p_10));
            }

            ;
            (*g_70) = (*g_70);
        }
        else
        {
            int *l_452 = (void*)0;
            int *l_494 = &g_61;
            if ((*l_435))
            {
                int **l_453 = &l_433;
                struct S1 **l_483 = (void*)0;
                for (p_10 = 8; (p_10 > (-30)); p_10 = safe_sub_func_int32_t_s_s(p_10, 1))
                {
                    for (g_71.f0 = 0; (g_71.f0 == 44); g_71.f0 = safe_add_func_int32_t_s_s(g_71.f0, 8))
                    {
                        (*l_433) = ((p_8.f2 , g_432.f0) >= p_8.f0);
                        if (l_451)
                            continue;
                        l_435 = l_452;

                        ;
                    }
                }

                ;
                (*l_453) = l_452;

                ;
                if ((g_186.f0.f0 & ((g_71.f1 || ((*g_430) == (((p_8.f0 < (safe_add_func_int8_t_s_s(p_9.f0.f0, g_71.f1))) ^ 7UL) , (void*)0))) , p_8.f1)))
                {
                    int *l_467 = &g_61;
                    struct S1 l_481 = {3189};
                    struct S0 l_488 = {0UL,0xA21CFF75L,0xAE98L,0x39F87221L};
                    if (((g_186.f0.f0 || (((void*)0 == &g_144) , (safe_div_func_uint8_t_u_u((safe_add_func_int32_t_s_s(g_15, p_9.f0.f0)), g_71.f2)))) <= p_8.f3))
                    {
                        int *l_482 = (void*)0;
                        (*l_467) = ((p_8.f1 || p_8.f0) <= (safe_div_func_uint8_t_u_u(((g_80.f0 && (safe_mod_func_uint32_t_u_u(g_432.f0, p_8.f3))) , p_8.f2), g_432.f0)));
                        (*l_453) = l_482;
                        l_482 = l_452;
                        return p_8;
                    }
                    else
                    {
                        (*l_467) = ((-7L) == (safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((g_61 , p_9.f0.f0), (0x55CA0AABL | p_8.f2))), (0x761F9B6BL | (p_8.f2 , g_186.f0.f0)))));
                        return l_488;
                    }
                }
                else
                {
                    (*l_453) = l_433;
                }
                l_433 = l_433;
            }
            else
            {
                int **l_493 = &g_56;
                (*l_493) = l_492;

                ;
                l_435 = l_494;

                ;
                (*l_433) = (((safe_rshift_func_uint8_t_u_s(0x55L, (*l_494))) <= (safe_mod_func_uint8_t_u_u(p_8.f0, g_317))) || ((**l_493) , ((safe_add_func_int32_t_s_s(p_8.f3, (safe_lshift_func_uint16_t_u_s((*l_492), 0)))) == (p_8.f2 || (safe_unary_minus_func_uint16_t_u(p_8.f1))))));
            }

            ;
            ;
            (*l_494) = ((safe_add_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((65530UL < (*l_492)), p_9.f0.f0)) != (safe_add_func_uint8_t_u_u(0xF3L, (g_39 , g_71.f2)))), 0x0D04L)) , p_8.f1);
        }

        ;
        ;
        ;
    }

    ;
    ;
    (*l_492) = (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(p_8.f3, g_317)), 7UL));
    return (**l_524);
}







static struct S0 func_11(unsigned p_12, struct S0 p_13, struct S1 p_14)
{
    unsigned l_20 = 0x1E13CA4DL;
    int **l_390 = &g_56;
    struct S1 l_393 = {6697};
    struct S1 **l_396 = &g_65;
    int *l_403 = &g_61;
    int *l_419 = &g_61;
    unsigned short l_420 = 1UL;
    struct S0 l_421 = {1UL,0x715099B3L,0L,4L};
    (*l_390) = func_18(l_20);

    ;
    ;
    ;
    if ((((l_393 , (safe_rshift_func_uint8_t_u_s((+p_13.f3), 5))) , g_71.f0) == ((g_389 , &g_56) == (void*)0)))
    {
        struct S1 *l_402 = &g_186.f0;
        struct S0 l_404 = {0x49A2L,7L,0L,0L};
        int *l_409 = &g_61;
        (*l_402) = (p_14 , ((&g_55 == &l_390) , (g_71.f1 , g_80)));
        (*l_390) = &g_39;

        ;
        if ((*g_56))
        {
            (*l_390) = l_403;

            ;
            p_13 = l_404;
        }
        else
        {
            unsigned short l_412 = 65532UL;
            (*l_390) = (void*)0;

            ;
            for (g_39 = 0; (g_39 > 11); g_39++)
            {
                int *l_410 = &g_61;
                for (l_20 = 18; (l_20 != 22); l_20++)
                {
                    int l_411 = (-8L);
                    l_410 = l_409;
                    (*l_410) = (l_411 && (*l_410));
                    if (((l_412 > (p_14.f0 != (safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(((g_80.f0 < (p_13.f3 | (g_80.f0 && (!l_411)))) && ((safe_sub_func_uint32_t_u_u((p_13.f2 , (!g_317)), (g_80.f0 , p_14.f0))) , (-5L))), 2L)), 0)))) , (-9L)))
                    {
                        (*l_409) = (*l_409);
                        if (p_13.f1)
                            continue;
                    }
                    else
                    {
                        (*l_390) = l_419;

                        ;
                        (*l_419) = l_420;
                        (*l_402) = g_186.f0;
                        (*l_410) = (*l_410);
                    }
                }

                ;
                (*l_390) = (void*)0;

                ;
                (*g_70) = l_404;
            }
            return l_421;
        }

        ;
        return p_13;
    }
    else
    {
        struct S1 *l_422 = (void*)0;
        (*l_390) = (g_317 , (*l_390));
        (*l_390) = ((1L > (p_14.f0 <= ((&p_14 != l_422) > (safe_lshift_func_uint16_t_u_u(p_12, 7))))) , (void*)0);
    }
    return p_13;
}







static int * func_18(unsigned short p_19)
{
    int *l_28 = (void*)0;
    unsigned l_35 = 0x4C46983CL;
    struct S1 l_264 = {7189};
    struct S0 *l_377 = &g_71;
    struct S0 ***l_381 = &g_144;
    struct S1 **l_388 = &g_65;
    (*l_377) = func_21((((safe_unary_minus_func_uint16_t_u(65531UL)) || ((void*)0 != l_28)) > func_29(l_28, l_35, func_36(g_15), l_28, l_264)), g_186.f0.f0, l_28, l_264.f0, l_28);


    ;
    ;
    (*l_377) = (*l_377);
    return l_28;


}







static struct S0 func_21(unsigned short p_22, char p_23, int * p_24, unsigned p_25, int * p_26)
{
    short l_275 = 0xDC0BL;
    struct S0 l_309 = {0xECE8L,0x7D4F4D55L,0L,-7L};
    int *l_325 = &g_61;
    struct S1 *l_361 = &g_186.f0;
    if ((+(1UL | l_275)))
    {
        struct S1 *l_276 = &g_80;
        unsigned char l_279 = 2UL;
        int *l_280 = &g_61;
        struct S0 l_287 = {0x5CC4L,-1L,0L,-10L};
        int l_297 = 0x17768C49L;
        struct S1 l_336 = {1201};
        struct S0 l_350 = {65535UL,-10L,0x8B71L,1L};
        g_65 = l_276;

        ;
        if (((safe_div_func_uint16_t_u_u((g_71.f3 , p_23), l_279)) > (((((void*)0 == l_280) > p_25) || (safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((func_29((*g_55), l_275, p_22, p_24, (*g_65)) && l_275), 6)) & 0x2585D44CL), g_15))) || 0x58L)))
        {
            unsigned short l_292 = 0x420FL;
            unsigned l_303 = 0x020AE25DL;
            int *l_310 = &g_61;
            struct S1 l_346 = {43};
            struct S0 l_362 = {0x6852L,-7L,1L,-7L};
            for (l_279 = 24; (l_279 < 40); l_279 = safe_add_func_uint16_t_u_u(l_279, 4))
            {
                char l_296 = (-1L);
                unsigned l_316 = 0x03E51691L;
            }
            if ((g_186 , g_317))
            {
                unsigned l_330 = 0x78012076L;
                p_26 = (*g_55);

                ;
                for (g_71.f1 = 0; (g_71.f1 != 19); g_71.f1 = safe_add_func_uint8_t_u_u(g_71.f1, 5))
                {
                    int *l_335 = &l_297;
                    for (l_309.f3 = 0; (l_309.f3 >= (-30)); l_309.f3--)
                    {
                        (*l_310) = (*p_26);
                        (*g_55) = (*g_55);
                    }
                    for (l_303 = (-20); (l_303 != 16); l_303++)
                    {
                        struct S1 l_324 = {3626};
                        (**g_55) = (**g_55);
                        (*g_65) = l_324;
                    }
                    if (func_29(l_325, (safe_add_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((*l_325), p_23)) | (0x9FE9L <= l_330)), ((0x6977314DL & ((safe_add_func_uint8_t_u_u((((*p_26) , (p_26 != p_26)) & l_330), 1UL)) != g_71.f1)) , 0x2F74L))), (*l_280), l_335, l_336))
                    {
                        unsigned char l_337 = 255UL;
                        int *l_347 = (void*)0;
                        if ((*g_56))
                            break;
                        (*g_56) = ((*g_70) , (((65535UL >= l_337) || ((((safe_div_func_int8_t_s_s(p_23, (safe_lshift_func_int16_t_s_s(g_80.f0, func_29(((safe_div_func_uint8_t_u_u((+(l_330 >= (safe_sub_func_int16_t_s_s((func_29(p_26, (*l_310), (p_22 <= g_71.f3), (*g_55), l_346) , l_330), p_23)))), l_330)) , (void*)0), p_25, l_330, l_347, (*g_65)))))) || g_71.f3) , g_61) == 0x09L)) ^ g_71.f1));
                        if ((*l_280))
                            continue;
                        (*g_56) = (*g_56);
                    }
                    else
                    {
                        (*l_310) = 1L;
                    }
                }
                (*g_55) = p_26;
            }
            else
            {
                int ***l_348 = (void*)0;
                int ***l_349 = &g_55;
                struct S0 *l_359 = (void*)0;
                struct S1 *l_360 = &l_346;
                (*l_349) = (void*)0;

                ;
                (*l_280) = func_29(p_24, ((g_61 , l_350) , (safe_rshift_func_int16_t_s_u((((safe_lshift_func_int8_t_s_s(g_15, p_25)) , (safe_sub_func_int16_t_s_s(p_23, (!(safe_lshift_func_uint8_t_u_s((((((((&l_309 != l_359) , (-3L)) , l_360) == l_361) < 254UL) < g_71.f2) , g_71.f3), p_23)))))) < 0xB31FL), p_23))), g_71.f0, p_24, (*l_361));
            }

            ;
            ;
            return l_362;
        }
        else
        {
            struct S0 *l_363 = &g_71;
            struct S0 **l_364 = &l_363;
            (*l_364) = l_363;
        }
    }
    else
    {
        struct S0 **l_367 = &g_70;
        int l_373 = 0L;
        for (g_39 = (-9); (g_39 <= 18); g_39++)
        {
            unsigned l_372 = 0x3A3543B8L;
            int l_374 = 9L;
            l_374 = (((((l_367 != (void*)0) < g_71.f2) || (0x23C2D5CFL ^ (((safe_sub_func_int16_t_s_s(g_15, g_71.f0)) , ((p_22 , (((safe_mod_func_uint8_t_u_u((((l_372 == p_25) ^ 65529UL) | p_25), l_372)) || p_25) & 65535UL)) <= l_372)) ^ g_39))) > l_373) && 0x02D3D8FCL);
            (**l_367) = l_309;
            (*g_55) = &l_373;

            ;
            (*l_325) = (safe_mod_func_int16_t_s_s(g_71.f2, (*l_325)));
        }

        ;
    }


    return l_309;
}







static short func_29(int * p_30, short p_31, char p_32, int * p_33, struct S1 p_34)
{
    unsigned l_273 = 0x2A8A4705L;
    int *l_274 = &g_39;
    (*g_56) = 0x86318243L;
    l_274 = (((*g_56) >= (safe_add_func_int8_t_s_s(0xB4L, (safe_add_func_int32_t_s_s(0xE00818ECL, ((safe_add_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s((l_273 <= p_34.f0), g_80.f0)) <= (g_71.f1 <= g_39)) == (l_273 && p_32)), l_273)) < 255UL)))))) , (void*)0);

    ;
    return l_273;
}







static char func_36(unsigned short p_37)
{
    int *l_38 = &g_39;
    int **l_40 = (void*)0;
    int **l_41 = &l_38;
    unsigned short l_48 = 0x6979L;
    struct S2 l_51 = {{5605}};
    (*l_38) = ((void*)0 != l_38);
    (*l_41) = (p_37 , l_38);
    (*l_38) = (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((*l_38), p_37)), (safe_lshift_func_uint8_t_u_s((l_48 , (255UL & ((func_49(l_51) , &l_38) != (void*)0))), 7))));

    ;
    ;
    (*l_38) = p_37;
    return g_80.f0;
}







static struct S1 func_49(struct S2 p_50)
{
    int *l_57 = &g_39;
    struct S0 *l_261 = &g_71;
    int *l_262 = &g_61;
    struct S1 l_263 = {5699};
    l_261 = func_52(g_55, l_57);

    ;
    ;
    ;
    (*l_262) = 0x4505B793L;
    (*g_70) = (*g_70);
    return l_263;
}







static struct S0 * func_52(int ** p_53, int * p_54)
{
    struct S0 l_58 = {65535UL,0xC5BCCBF7L,9L,1L};
    struct S0 *l_59 = &l_58;
    int *l_60 = &g_61;
    struct S0 *l_103 = (void*)0;
    struct S2 l_104 = {{10086}};
    struct S0 l_125 = {65526UL,0x56B39C3AL,4L,1L};
    struct S1 *l_126 = (void*)0;
    struct S0 *l_146 = &l_125;
    struct S0 ***l_217 = (void*)0;
    struct S0 *l_260 = &g_71;
    (*l_59) = l_58;
    (*l_59) = (*l_59);
    (*l_60) = (*p_54);
    if (((*l_60) != ((*l_60) , (*l_60))))
    {
        (*l_60) = (*l_60);
    }
    else
    {
        unsigned short l_69 = 1UL;
        struct S1 *l_79 = &g_80;
        struct S0 **l_87 = &l_59;
        char l_119 = 0x20L;
        int *l_120 = &g_39;
        unsigned short l_189 = 1UL;
        unsigned l_208 = 0xFF8EE6FDL;
        if (((g_39 , 0xEBL) , 0xE27C2130L))
        {
            unsigned l_64 = 0x8CDD5017L;
            struct S1 **l_66 = (void*)0;
            struct S1 **l_67 = (void*)0;
            struct S1 **l_68 = &g_65;
            struct S0 **l_83 = &g_70;
            (*g_55) = ((safe_sub_func_uint16_t_u_u((*l_60), l_64)) , (((((void*)0 != l_60) , g_15) || (*l_60)) , (*g_55)));
            (*l_68) = g_65;
            (*l_60) = (*p_54);
            if (l_69)
            {
                struct S0 **l_72 = &g_70;
                struct S2 l_84 = {{6148}};
                (*l_72) = g_70;
                (*l_60) = (((g_39 | (safe_rshift_func_int8_t_s_u((0x1EL && ((g_39 == (*l_60)) > g_71.f3)), 6))) ^ ((4L >= g_71.f1) , (((*g_56) ^ (**g_55)) > 0xD2740D6AL))) || 0L);
                for (l_64 = 0; (l_64 != 50); ++l_64)
                {
                    (*l_68) = l_79;

                    ;
                    (*l_60) = ((safe_add_func_int32_t_s_s((l_83 == ((l_84 , (safe_add_func_int8_t_s_s(l_64, 248UL))) , l_87)), g_71.f2)) >= ((*l_60) < ((void*)0 != (*l_87))));
                }

                ;
                for (l_58.f1 = 6; (l_58.f1 == (-10)); l_58.f1--)
                {
                    unsigned short l_92 = 0x239AL;
                    (*l_60) = (((((*l_60) || ((l_64 | ((((*l_79) , (**p_53)) || (safe_div_func_int32_t_s_s((l_92 == 4L), (safe_rshift_func_uint16_t_u_s(g_71.f1, (safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_s(l_64, l_64)) ^ g_61), 5))))))) , l_92)) & (-3L))) || g_15) <= (-1L)) < (**p_53));
                    for (l_64 = (-14); (l_64 < 4); l_64 = safe_add_func_uint8_t_u_u(l_64, 4))
                    {
                        (*p_53) = (*p_53);
                        return (*l_72);


                    }
                    (**l_83) = (*l_59);
                    if ((*p_54))
                        break;
                }
            }
            else
            {
                return &g_71;


            }

            ;
        }
        else
        {
            unsigned l_101 = 4294967294UL;
            struct S1 l_105 = {2618};
            int *l_106 = &g_39;
            if (l_101)
            {
                struct S0 *l_102 = &g_71;
                (*l_87) = l_102;

                ;
            }
            else
            {
                return l_103;


            }

            ;
            (*l_79) = (l_104 , l_105);
            (*g_55) = (void*)0;

            ;
            (*g_55) = l_106;

            ;
        }

        ;
        ;
        if ((~(~(safe_lshift_func_int8_t_s_u(g_61, 3)))))
        {
            unsigned l_113 = 4294967291UL;
            l_119 = (safe_mod_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u(g_71.f3, (l_113 != (g_61 < ((!((l_113 < (+((*l_60) && (g_80.f0 , ((safe_rshift_func_uint16_t_u_s(l_113, (l_113 ^ (safe_unary_minus_func_uint16_t_u((g_71.f3 > g_15)))))) >= g_71.f2))))) , g_80.f0)) != 1UL))))) , 0x87C5F228L), (**g_55)));
            (*p_53) = l_120;
        }
        else
        {
            struct S1 *l_127 = &l_104.f0;
            int l_135 = (-10L);
            struct S0 *l_201 = &l_58;
            if ((4294967295UL != (safe_mod_func_uint16_t_u_u((g_71.f0 || (((l_125 , g_80.f0) , l_126) != l_127)), g_39))))
            {
                unsigned l_136 = 0xC7AEF280L;
                struct S0 ***l_145 = &l_87;
                struct S1 **l_153 = &g_65;
                for (l_125.f3 = 0; (l_125.f3 > 4); l_125.f3 = safe_add_func_int16_t_s_s(l_125.f3, 4))
                {
                    if ((**p_53))
                    {
                        struct S0 ***l_130 = &l_87;
                        if ((**p_53))
                            break;
                        (*l_87) = &g_71;

                        ;
                        (*l_130) = l_87;
                    }
                    else
                    {
                        (*l_60) = (safe_sub_func_int8_t_s_s(((*l_79) , (safe_lshift_func_int16_t_s_s(l_135, ((*p_54) , 1L)))), l_136));
                        return &g_71;


                    }

                    ;
                }
                if ((safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((g_143 == l_145), (*l_60))), (l_135 , (((*l_60) != (((*l_120) && (l_104 , (((**l_87) , &g_65) == &l_79))) || l_135)) , (*l_120))))), (*l_60))))
                {
                    struct S0 *l_147 = (void*)0;
                    return l_147;


                }
                else
                {
                    struct S0 *l_148 = &l_125;
                    unsigned l_185 = 1UL;
                    l_148 = (**l_145);

                    ;
                    if ((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((l_153 == &g_65), 1)), ((*l_148) , g_80.f0))))
                    {
                        struct S0 *l_154 = (void*)0;
                        return l_154;


                    }
                    else
                    {
                        unsigned l_165 = 1UL;
                        (*l_60) = ((0xD7A1L != (+((safe_rshift_func_int16_t_s_u((safe_div_func_int32_t_s_s((1UL > (safe_div_func_uint8_t_u_u(((*l_60) & 0xBA32L), (safe_mod_func_uint8_t_u_u(l_165, (((safe_mod_func_uint32_t_u_u(((l_135 , ((*l_120) & g_71.f0)) >= (g_80.f0 ^ (**g_55))), (**g_55))) != (*p_54)) & l_165)))))), 9L)), 6)) <= 0UL))) != l_136);
                    }
                    for (l_125.f2 = (-6); (l_125.f2 <= 25); ++l_125.f2)
                    {
                        int l_178 = 1L;
                        (*p_53) = (((((safe_rshift_func_int8_t_s_u(0xAEL, g_71.f3)) , (safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_s(g_71.f1, 7)) <= (((*l_60) >= (safe_rshift_func_int8_t_s_u(g_39, (((((((l_178 < 1L) > ((**g_55) | (g_71.f1 || (*l_60)))) , (*l_79)) , (*l_60)) == 4294967295UL) == l_178) != 4294967295UL)))) != g_15)), 6))) && g_71.f3) || 0L) , l_60);

                        ;
                    }

                    ;
                    (*l_60) = (safe_div_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((void*)0 == &g_56) ^ (((((*l_120) < (safe_mod_func_uint8_t_u_u((((((l_185 > (g_186 , 0x78386D6AL)) ^ ((g_71.f0 || ((safe_mod_func_uint16_t_u_u((l_189 != (((*g_56) < 0x885B45BFL) & 0L)), 65530UL)) , l_135)) ^ (*l_60))) || g_15) >= l_136) && 0x2F9FE98CL), g_71.f2))) && l_135) & (*l_120)) <= (*p_54))), (*l_120))), g_39));
                }

                ;
                (*l_60) = 0L;
            }
            else
            {
                unsigned char l_200 = 0x29L;
                struct S1 l_202 = {7276};
                struct S0 *l_207 = &l_125;
                (*l_60) = (safe_sub_func_int16_t_s_s(((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((*l_120), ((g_71.f3 | (&g_80 == l_79)) <= ((l_135 ^ ((safe_sub_func_uint32_t_u_u(l_200, (((void*)0 != l_201) , (l_202 , g_39)))) ^ (*l_60))) > (*l_60))))), 1L)) , l_202.f0), g_71.f2));
                for (l_125.f3 = (-28); (l_125.f3 == (-26)); l_125.f3 = safe_add_func_int16_t_s_s(l_125.f3, 9))
                {
                    unsigned char l_218 = 252UL;
                    if (((safe_add_func_uint32_t_u_u((l_207 == l_201), 0xD75997CBL)) | l_208))
                    {
                        (*l_60) = (**g_55);
                        (*l_60) = (safe_sub_func_uint8_t_u_u(((**l_87) , g_71.f1), (safe_mod_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u((g_71.f0 < (safe_add_func_uint8_t_u_u(((-1L) >= g_15), (+g_39)))), (*l_60))) >= ((l_217 != &g_144) , l_218)) , g_71.f1), 0x9A89L))));
                        (*l_60) = (safe_div_func_int8_t_s_s((-9L), ((&g_80 != &l_202) ^ ((**p_53) | (safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((*l_60), ((safe_div_func_int8_t_s_s(l_200, 6L)) , 0x2DL))), (((((safe_add_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s((*p_54), (**g_55))), g_39)), g_39)) || l_135) ^ l_202.f0) <= 1L) | g_61)))))));
                    }
                    else
                    {
                        unsigned char l_236 = 1UL;
                        l_236 = (((safe_unary_minus_func_int16_t_s((*l_60))) | (safe_rshift_func_uint16_t_u_s(l_200, ((*l_60) , ((void*)0 == (*p_53)))))) & (!((l_218 | (((*l_60) , &p_54) != &g_56)) || g_186.f0.f0)));
                    }
                    if ((**g_55))
                        break;
                }
                for (l_125.f3 = 0; (l_125.f3 != (-16)); l_125.f3 = safe_sub_func_uint8_t_u_u(l_125.f3, 1))
                {
                    (*g_55) = (*g_55);
                }
            }

            ;
            (*l_60) = ((safe_sub_func_int8_t_s_s((*l_60), (safe_lshift_func_uint8_t_u_s((g_71.f0 , (((((safe_add_func_uint16_t_u_u(((&l_60 != (void*)0) > (safe_rshift_func_uint16_t_u_s(g_71.f2, (safe_add_func_uint32_t_u_u(l_135, ((safe_rshift_func_uint8_t_u_s(0xF9L, 6)) >= ((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(((0UL && ((*l_60) , 0x81L)) == 0xA503L), 0x9BL)) | (*l_60)), 3UL)) > (**g_55)))))))), 0L)) | l_135) || 0x971EL) , &l_79) == &l_79)), (*l_120))))) ^ (**g_55));
            (*l_60) = (((g_71.f0 || (((safe_unary_minus_func_int32_t_s((*p_54))) || ((safe_rshift_func_uint8_t_u_u(g_71.f0, 7)) > ((safe_rshift_func_uint16_t_u_u(l_135, 12)) & 0xFD6CL))) != ((**g_55) == (0xA383L > (*l_60))))) == ((&l_120 == (void*)0) || 7L)) == (*l_120));
            (*l_60) = (**p_53);
        }

        ;
    }

    ;
    ;
    ;
    return l_260;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_71.f0, "g_71.f0", print_hash_value);
    transparent_crc(g_71.f1, "g_71.f1", print_hash_value);
    transparent_crc(g_71.f2, "g_71.f2", print_hash_value);
    transparent_crc(g_71.f3, "g_71.f3", print_hash_value);
    transparent_crc(g_80.f0, "g_80.f0", print_hash_value);
    transparent_crc(g_186.f0.f0, "g_186.f0.f0", print_hash_value);
    transparent_crc(g_317, "g_317", print_hash_value);
    transparent_crc(g_389, "g_389", print_hash_value);
    transparent_crc(g_432.f0, "g_432.f0", print_hash_value);
    transparent_crc(g_525, "g_525", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
