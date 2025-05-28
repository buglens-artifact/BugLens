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
   int f0;
   unsigned char f1;
   unsigned f2 : 10;
   short f3;
   unsigned f4;
   int f5;
   char f6;
   unsigned f7;
};

union U1 {
   unsigned char f0;
   char * f1;
   int f2;
   char f3;
   short f4;
};

union U2 {
   signed f0 : 10;
   unsigned f1;
   signed f2 : 13;
};

union U3 {
   unsigned char f0;
};


static char g_11 = 0xDEL;
static struct S0 g_22 = {0x51978E60L,0x74L,3,-1L,4294967291UL,0x43334ADCL,1L,0xB347D170L};
static char *g_26 = &g_22.f6;
static char **g_25 = &g_26;
static union U1 g_42 = {0x6CL};
static int *g_63 = (void*)0;
static struct S0 g_94 = {0L,0xFCL,27,-1L,1UL,-1L,0x4CL,0UL};
static union U3 g_101 = {0x39L};
static int *g_201 = (void*)0;
static union U2 g_307 = {0xD9E755F9L};
static union U3 g_340 = {0x79L};
static struct S0 ***g_356 = (void*)0;
static int **g_378 = (void*)0;
static int ***g_377 = &g_378;
static union U2 *g_400 = &g_307;
static union U2 **g_399 = &g_400;
static unsigned g_433 = 0x27FCC671L;
static int *g_440 = &g_42.f2;
static char g_446 = 0x8EL;
static unsigned g_457 = 4294967295UL;



static unsigned func_1(void);
static char ** func_2(union U3 p_3);
static union U3 func_4(union U3 p_5, union U3 p_6);
static union U3 func_7(char ** p_8);
static unsigned func_12(char ** p_13, char * p_14, char ** p_15, char * p_16, unsigned p_17);
static char ** func_18(struct S0 p_19, int p_20);
static char * func_27(char * p_28, short p_29, short p_30, unsigned p_31, unsigned p_32);
static char * func_33(int p_34);
static int func_35(unsigned p_36);
static short func_37(unsigned char p_38, int p_39, union U1 p_40);
static unsigned func_1(void)
{
    char *l_10 = &g_11;
    char **l_9 = &l_10;
    char ***l_459 = &l_9;
    struct S0 l_460 = {2L,252UL,4,0x1E19L,0UL,0xC8BDA012L,0L,8UL};
    struct S0 *l_461 = (void*)0;
    struct S0 *l_462 = &g_94;
    (*l_459) = func_2(func_4(func_7(l_9), g_340));

    ;




    (*l_462) = l_460;
    return g_94.f6;
}







static char ** func_2(union U3 p_3)
{
    int *l_346 = &g_22.f0;
    char **l_355 = (void*)0;
    short l_360 = 0xD86DL;
    union U1 *l_366 = &g_42;
    struct S0 l_370 = {0x9A6A3311L,1UL,13,0xAF45L,0x1C893E11L,0x61A870D0L,0L,0x83D3E0E9L};
    unsigned l_375 = 0x5E0FBD0EL;
    union U2 *l_385 = &g_307;
    union U3 *l_455 = &g_340;
    if (p_3.f0)
    {
        int **l_347 = &l_346;
        char **l_350 = (void*)0;
        struct S0 *l_359 = &g_22;
        struct S0 **l_358 = &l_359;
        struct S0 ***l_357 = &l_358;
        union U1 l_379 = {0UL};
        union U1 **l_382 = &l_366;
        (*l_347) = l_346;
        for (g_11 = (-7); (g_11 > (-12)); g_11 = safe_sub_func_int8_t_s_s(g_11, 2))
        {
            return l_350;


        }
        if (((safe_sub_func_int32_t_s_s((((safe_lshift_func_uint16_t_u_s((((**l_347) || g_22.f0) != (!p_3.f0)), l_360)) < 0L) & (**g_25)), (**l_347))) && g_340.f0))
        {
            union U1 *l_361 = &g_42;
            char **l_372 = &g_26;
            int ***l_376 = &l_347;
            l_361 = l_361;
            for (g_22.f7 = 9; (g_22.f7 <= 11); g_22.f7 = safe_add_func_int32_t_s_s(g_22.f7, 3))
            {
                if (p_3.f0)
                {
                    struct S0 l_369 = {0x77913A04L,0xBBL,7,0x4BE2L,4294967292UL,0L,0xFCL,8UL};
                    for (g_94.f1 = 23; (g_94.f1 > 4); g_94.f1 = safe_sub_func_uint32_t_u_u(g_94.f1, 1))
                    {
                        union U1 **l_367 = (void*)0;
                        union U1 **l_368 = &l_366;
                        (*l_368) = l_366;
                    }
                    if (p_3.f0)
                    {
                        (**l_347) = p_3.f0;
                        (*l_347) = l_346;
                    }
                    else
                    {
                        l_370 = l_369;
                        return &g_26;


                    }
                    (*l_347) = (*l_347);
                }
                else
                {
                    unsigned short l_371 = 0x5456L;
                    (**l_347) = l_371;
                    return l_372;


                }
            }
            (*l_346) = ((0UL > (safe_add_func_uint8_t_u_u((((l_375 || p_3.f0) <= (*l_346)) >= (((void*)0 != l_355) != g_22.f4)), (*g_26)))) && p_3.f0);
        }
        else
        {
            if (((safe_add_func_uint8_t_u_u((&g_378 == (void*)0), (**g_25))) & (~0UL)))
            {
                (*l_347) = (*l_347);
                (*l_346) = (**l_347);
            }
            else
            {
                union U1 ***l_383 = (void*)0;
                union U1 ***l_384 = &l_382;
                (*l_384) = l_382;
            }
            (*l_347) = l_346;
            return &g_26;


        }
        return &g_26;


    }
    else
    {
        unsigned l_394 = 0UL;
        int *l_396 = &g_94.f0;
        struct S0 l_409 = {0L,1UL,4,0L,0x2BC32486L,-4L,-1L,0xED038F22L};
        unsigned char l_426 = 255UL;
        char **l_436 = (void*)0;
        int **l_458 = &g_440;
        l_385 = l_385;
        if (((*g_26) == (!g_42.f2)))
        {
            union U3 *l_387 = (void*)0;
            union U3 **l_386 = &l_387;
            (*l_386) = &g_101;

            ;
        }
        else
        {
            struct S0 l_398 = {0xE81FB4EBL,0xAFL,15,0xCF33L,2UL,0L,0x2AL,0x615F8351L};
            int *l_402 = &g_42.f2;
            char **l_447 = &g_26;
            union U3 **l_456 = &l_455;
            (*l_346) = 0L;
            if ((safe_sub_func_uint8_t_u_u(((((0x1F09L <= (safe_sub_func_uint8_t_u_u(1UL, 0x79L))) <= (safe_add_func_uint32_t_u_u((0x3FL <= g_22.f5), (g_94.f0 >= p_3.f0)))) != p_3.f0) == l_394), (*l_346))))
            {
                int *l_395 = (void*)0;
                l_396 = l_395;

                ;
            }
            else
            {
                struct S0 l_397 = {3L,1UL,25,0x9C03L,0xFE4F28C9L,0x76B5FFADL,0L,4294967295UL};
                union U2 ***l_401 = &g_399;
                l_398 = l_397;
                (*l_401) = g_399;
            }

            ;
            if (l_394)
            {
                int **l_403 = &l_346;
                l_346 = l_402;

                ;
                (*l_403) = l_346;
                l_346 = (*l_403);
            }
            else
            {
                int **l_404 = (void*)0;
                int **l_405 = &l_346;
                char **l_407 = &g_26;
                (*l_346) = (p_3.f0 <= 4294967294UL);
                l_346 = l_396;

                ;
                (*l_405) = l_346;
                if ((g_22.f1 >= g_94.f6))
                {
                    unsigned l_406 = 5UL;
                    struct S0 l_434 = {0xE1F5575CL,251UL,15,0x7C74L,0xE602A5E3L,0xC630031EL,0xFAL,4294967289UL};
                    struct S0 *l_435 = &l_398;
                    if ((l_406 <= 1L))
                    {
                        int *l_408 = &l_398.f0;
                        l_396 = (*l_405);
                        (*l_402) = (func_12(&g_26, func_27((*g_25), p_3.f0, (g_22.f1 <= (g_94.f1 & (g_94.f3 < ((*g_377) != &l_396)))), p_3.f0, g_22.f5), l_407, (*g_25), g_22.f1) <= p_3.f0);


                        (*l_405) = l_408;

                        ;
                    }
                    else
                    {
                        l_370 = l_409;
                        (*l_402) = (safe_rshift_func_uint16_t_u_u(p_3.f0, p_3.f0));
                        (*l_405) = l_346;
                    }


                    ;
                    (*l_402) = ((((g_42.f4 & ((safe_add_func_int8_t_s_s(p_3.f0, g_307.f0)) && (safe_rshift_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(l_426, ((safe_rshift_func_uint16_t_u_s(g_94.f7, ((((safe_mod_func_uint8_t_u_u(((l_394 != 65535UL) >= ((safe_lshift_func_uint8_t_u_s((*l_402), p_3.f0)) & 0x31F1L)), l_406)) || 0x8106C009L) | g_94.f4) > p_3.f0))) > l_406))), 13)), g_433)) > g_94.f7), p_3.f0)), 0UL)) <= 0UL), p_3.f0)))) | l_370.f6) || 0UL) | 0UL);
                    (*l_435) = l_434;
                    return l_436;


                }
                else
                {
                    char l_441 = 0L;
                    union U2 *l_448 = &g_307;
                    int *l_449 = &g_22.f0;
                    for (l_370.f6 = 5; (l_370.f6 > (-3)); l_370.f6--)
                    {
                        int *l_439 = &l_398.f0;
                        g_440 = l_439;

                        ;
                        (*l_439) = (l_441 && l_409.f3);
                        return &g_26;



                    }
                    if (func_12(&g_26, func_27((*g_25), p_3.f0, p_3.f0, (safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(g_22.f3, g_446)), 12)), p_3.f0), l_447, (*l_407), g_22.f5))
                    {
                        (*g_377) = &l_396;

                        ;
                        (*g_399) = l_448;
                        (**g_377) = l_449;

                        ;
                        (**g_378) = (safe_rshift_func_uint16_t_u_s((1L && (*l_396)), ((((void*)0 != &g_26) <= g_307.f0) && (safe_rshift_func_int8_t_s_s((-1L), 0)))));
                    }
                    else
                    {
                        int *l_454 = &g_22.f0;
                        (*l_405) = l_454;

                        ;
                        (*l_405) = l_346;
                    }


                    ;
                    ;
                    ;
                }


                ;
                ;
                ;
            }


            ;
            ;
            ;
            (*l_456) = l_455;
        }


        ;
        ;
        ;
        l_370.f0 = ((p_3.f0 || (*g_26)) | 0xD41D7B59L);
        (*l_458) = l_396;

        ;
    }


    ;

    ;
    return l_355;


}







static union U3 func_4(union U3 p_5, union U3 p_6)
{
    int *l_341 = &g_94.f0;
    int **l_342 = &g_201;
    union U1 **l_343 = (void*)0;
    (*l_342) = l_341;

    ;
    (*g_201) = (0x5A95L != ((((l_343 != l_343) > (safe_mod_func_int32_t_s_s((p_5.f0 && ((((*l_341) >= (g_94.f7 | (**l_342))) > (!((*l_341) == g_94.f6))) < p_6.f0)), (*l_341)))) != (*l_341)) && (*l_341)));
    (*l_342) = (void*)0;

    ;
    return g_101;

    }







static union U3 func_7(char ** p_8)
{
    struct S0 l_21 = {0x33A4D1B4L,0xE1L,1,0L,0xD402DA3CL,0xD21462CCL,0x20L,0x4653FFD0L};
    int *l_330 = (void*)0;
    int *l_331 = &g_94.f0;
    unsigned short l_336 = 0UL;
    union U3 l_339 = {0x8CL};
    (*l_331) = (func_12(func_18(l_21, l_21.f5), (*p_8), p_8, func_27(func_33((func_35(g_22.f1) && (((((safe_add_func_uint16_t_u_u(0x09F8L, ((((safe_sub_func_uint16_t_u_u(l_21.f6, l_21.f3)) || 0xA2L) & (*g_26)) ^ l_21.f3))) != l_21.f0) <= 0UL) >= l_21.f6) && 0xD6L))), l_21.f6, l_21.f3, l_21.f3, g_22.f6), g_22.f5) != 1UL);



    (*l_331) = (safe_lshift_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((*l_331), ((**p_8) && (0xF2L < ((l_336 && (**g_25)) <= (safe_rshift_func_int8_t_s_u(((void*)0 != &g_101), 6))))))) ^ (((0x583A62ACL || (*l_331)) == 0xEAC4E372L) >= (*l_331))), 3));
    return l_339;

    }







static unsigned func_12(char ** p_13, char * p_14, char ** p_15, char * p_16, unsigned p_17)
{
    struct S0 l_205 = {0x4E822E76L,0xD2L,13,1L,4294967287UL,0xFE65B295L,0x18L,9UL};
    struct S0 *l_206 = &l_205;
    int *l_224 = &g_22.f0;
    struct S0 **l_227 = &l_206;
    struct S0 ***l_226 = &l_227;
    int *l_239 = &g_94.f0;
    unsigned l_275 = 8UL;
    union U2 *l_306 = &g_307;
    union U2 **l_305 = &l_306;
    char *l_314 = &g_22.f6;
    (*l_206) = l_205;
    for (l_205.f5 = 0; (l_205.f5 <= (-9)); l_205.f5 = safe_sub_func_uint8_t_u_u(l_205.f5, 5))
    {
        int **l_209 = &g_63;
        struct S0 l_210 = {0x3B6C18EBL,254UL,10,0L,4294967290UL,-5L,1L,0xDA7ED1F3L};
        struct S0 *l_211 = &g_94;
        l_209 = &g_201;

        ;
        (*l_211) = l_210;
        return l_205.f3;
    }
    if ((safe_lshift_func_uint8_t_u_s((+func_35((safe_mod_func_uint8_t_u_u((l_205.f1 && ((safe_sub_func_int8_t_s_s((p_17 <= (p_17 && ((safe_lshift_func_uint16_t_u_s(g_94.f6, 0)) == (safe_add_func_uint16_t_u_u(p_17, (g_22.f6 < (safe_rshift_func_int16_t_s_s((((l_224 != (void*)0) != (*l_224)) & (*l_224)), 9)))))))), 0x17L)) ^ (*p_16))), (*l_224))))), 1)))
    {
        int *l_225 = &g_94.f0;
        unsigned char l_235 = 0x8DL;
        union U3 *l_257 = &g_101;
        char ***l_274 = &g_25;
        struct S0 *l_286 = &l_205;
        int *l_323 = &l_205.f0;
        if ((*l_224))
        {
            short l_232 = 0x1C78L;
            union U1 l_236 = {1UL};
            g_63 = l_225;

            ;
            (*l_224) = (((((void*)0 != l_226) && ((*l_224) < (safe_lshift_func_int8_t_s_u(((~((safe_sub_func_int32_t_s_s(8L, ((*g_63) > (-1L)))) <= p_17)) || (l_232 <= ((255UL | (*p_14)) | l_232))), g_22.f6)))) && (*l_224)) > 4294967290UL);
            (*l_224) = (0x52D6L | (p_17 & (safe_add_func_int32_t_s_s(func_37(((l_235 > (g_94.f2 > p_17)) != p_17), p_17, l_236), g_22.f6))));


        }
        else
        {
            int **l_241 = (void*)0;
            int **l_242 = &g_63;
            for (g_94.f3 = (-23); (g_94.f3 != (-26)); g_94.f3 = safe_sub_func_int8_t_s_s(g_94.f3, 9))
            {
                int **l_240 = &l_239;
                (*l_240) = l_239;
                if ((**l_240))
                    break;
            }
            (*l_242) = g_201;

            ;
            for (g_94.f3 = 0; (g_94.f3 != (-29)); g_94.f3 = safe_sub_func_int16_t_s_s(g_94.f3, 4))
            {
                short l_251 = 0x7D19L;
                int *l_253 = &g_22.f0;
                union U2 *l_255 = (void*)0;
                for (g_101.f0 = 0; (g_101.f0 <= 25); ++g_101.f0)
                {
                    int *l_254 = (void*)0;
                    if (p_17)
                    {
                        return g_42.f3;


                    }
                    else
                    {
                        (*l_227) = (void*)0;

                        ;
                        (*l_242) = (void*)0;

                        ;
                        (*l_242) = l_225;

                        ;
                        (*l_224) = ((safe_rshift_func_uint16_t_u_s(65535UL, g_42.f3)) > 0x18C07E26L);
                    }

                    ;
                    ;
                    if (((safe_rshift_func_uint8_t_u_s(g_42.f0, (l_251 & (*l_239)))) > (*l_239)))
                    {
                        int *l_252 = &l_205.f0;
                        union U2 **l_256 = &l_255;
                        g_201 = l_252;

                        ;
                        l_254 = l_253;

                        ;
                        if ((*g_63))
                            break;
                        (*l_256) = l_255;
                    }
                    else
                    {
                        union U3 **l_258 = &l_257;
                        (*l_258) = l_257;
                        (*l_239) = ((-8L) <= 0xA501E57FL);
                    }

                    ;
                }
                g_22 = g_22;
            }

            ;
            ;
            ;
            (*l_239) = p_17;
        }


        ;
        ;
        for (l_205.f1 = 14; (l_205.f1 == 33); l_205.f1 = safe_add_func_uint32_t_u_u(l_205.f1, 1))
        {
            union U1 l_263 = {0x28L};
            struct S0 l_266 = {0x0A5EB146L,0x57L,28,1L,4294967295UL,0x0C2F2DA2L,0x86L,3UL};
            struct S0 *l_267 = (void*)0;
            struct S0 *l_268 = &g_94;
            (*l_224) = (((*l_225) >= (+(safe_sub_func_int8_t_s_s(0xF0L, (*g_26))))) & (*l_224));
            (*l_268) = l_266;
            if (p_17)
                continue;
            if (p_17)
            {
                return p_17;


            }
            else
            {
                unsigned l_287 = 4294967290UL;
                g_63 = (void*)0;

                ;
                (**l_226) = l_286;

                ;
                (*l_224) = p_17;
                l_287 = p_17;
            }

            ;
            ;
        }
        if ((((((safe_rshift_func_uint16_t_u_s((*l_239), (g_22.f7 && p_17))) ^ 0x322CL) && (*g_26)) == g_94.f2) < p_17))
        {
            int **l_290 = &l_239;
            union U2 *l_304 = (void*)0;
            union U2 **l_303 = &l_304;
            int l_308 = 0L;
            (*l_290) = l_239;
            (*l_225) = ((p_17 < ((*l_224) ^ (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_u((**l_290), ((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(p_17, (safe_add_func_int8_t_s_s((l_303 != l_305), (*l_224))))), 0x6EL)) > g_94.f5))) || p_17), l_308)))) | g_94.f4);
            for (p_17 = 26; (p_17 < 19); p_17--)
            {
                g_63 = g_201;

                ;
            }


        }
        else
        {
            unsigned short l_322 = 4UL;
            int *l_325 = &g_42.f2;
            g_63 = l_224;

            ;
            if ((*g_63))
            {
                char l_311 = 0L;
                (*l_239) = l_311;
            }
            else
            {
                int **l_324 = (void*)0;
                struct S0 l_326 = {0xFC17B509L,252UL,23,0x04E4L,8UL,-1L,0xA6L,4294967290UL};
                (*l_224) = (func_35((safe_sub_func_uint8_t_u_u(6UL, (l_314 != (*g_25))))) <= (safe_unary_minus_func_uint32_t_u((((safe_mod_func_int32_t_s_s(p_17, p_17)) <= (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((p_17 >= p_17), 6)) > (l_322 || 1L)), g_22.f5))) & p_17))));


                l_325 = l_323;

                ;
                g_22 = l_326;
            }


            ;
        }


    }
    else
    {
        int *l_327 = &g_94.f0;
        union U1 *l_329 = &g_42;
        union U1 **l_328 = &l_329;
        l_327 = l_327;
        (*l_328) = (void*)0;

        ;
    }


    ;
    ;
    g_22 = l_205;
    return p_17;



}







static char ** func_18(struct S0 p_19, int p_20)
{
    char *l_24 = &g_22.f6;
    char **l_23 = &l_24;
    p_19 = g_22;
    return g_25;


}







static char * func_27(char * p_28, short p_29, short p_30, unsigned p_31, unsigned p_32)
{
    struct S0 *l_187 = &g_94;
    struct S0 **l_188 = (void*)0;
    struct S0 **l_189 = &l_187;
    int l_196 = 0L;
    int **l_202 = (void*)0;
    int **l_203 = &g_63;
    char *l_204 = &g_11;
    (*l_189) = l_187;
    if ((((safe_lshift_func_uint8_t_u_u(p_31, g_94.f4)) < (safe_lshift_func_uint8_t_u_s(p_29, ((!(((void*)0 == &g_26) & (safe_mul_func_int8_t_s_s((*g_26), ((*l_189) == (*l_189)))))) >= l_196)))) & g_42.f3))
    {
        for (g_11 = 0; (g_11 == 26); g_11 = safe_add_func_uint8_t_u_u(g_11, 1))
        {
            int **l_199 = &g_63;
            (*l_199) = &l_196;

            ;
        }


    }
    else
    {
        int **l_200 = &g_63;
        (*l_200) = &l_196;

        ;
        (**l_189) = g_94;
    }


    (*l_203) = g_201;

    ;
    return l_204;


}







static char * func_33(int p_34)
{
    int *l_130 = &g_94.f0;
    struct S0 l_133 = {0L,248UL,10,1L,0xFB248A18L,0xD6C3DA0AL,-1L,0x5629ED7CL};
    int l_174 = 1L;
    int *l_184 = &l_133.f0;
    int **l_185 = &g_63;
    char *l_186 = &g_94.f6;
    l_130 = &p_34;

    ;
    for (g_101.f0 = (-27); (g_101.f0 != 37); g_101.f0 = safe_add_func_uint8_t_u_u(g_101.f0, 4))
    {
        struct S0 *l_134 = &g_94;
        int l_143 = 1L;
        struct S0 **l_176 = &l_134;
        struct S0 ***l_175 = &l_176;
        (*l_134) = l_133;
        if (p_34)
        {
            for (l_133.f7 = 0; (l_133.f7 < 1); ++l_133.f7)
            {
                int l_150 = (-1L);
                (*l_130) = g_22.f0;
                for (g_94.f3 = 12; (g_94.f3 <= 24); g_94.f3++)
                {
                    for (p_34 = 0; (p_34 < (-20)); p_34--)
                    {
                        int *l_151 = &l_150;
                        int **l_153 = &g_63;
                        int ***l_152 = &l_153;
                        (*l_151) = (p_34 ^ (p_34 < (safe_sub_func_int8_t_s_s((l_143 == (safe_lshift_func_uint16_t_u_u(g_94.f7, g_94.f5))), (safe_mod_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(g_94.f7, p_34)) && l_150), (249UL ^ 0x8BL)))))));
                        (*l_152) = &g_63;
                        g_63 = &l_150;

                        ;
                    }
                }


                return (*g_25);



            }
        }
        else
        {
            unsigned char l_164 = 0xF8L;
            g_63 = &p_34;

            ;
            for (g_94.f5 = (-26); (g_94.f5 > 24); g_94.f5++)
            {
                int l_167 = 0L;
                short l_168 = 0x246EL;
            }
            if (p_34)
                break;
            (*g_63) = (safe_sub_func_int16_t_s_s(p_34, ((l_174 <= (&l_130 == &g_63)) <= (((l_143 && ((l_175 != &l_176) && (*g_63))) < l_143) < p_34))));
        }
        (*l_130) = p_34;
    }


    if ((*l_130))
    {
        struct S0 *l_178 = (void*)0;
        struct S0 **l_177 = &l_178;
        int l_181 = 9L;
        (*l_177) = &g_94;

        ;
        (*l_130) = (safe_lshift_func_int8_t_s_s(l_181, p_34));
    }
    else
    {
        union U3 *l_183 = &g_101;
        union U3 **l_182 = &l_183;
        (*l_182) = (void*)0;

        ;
    }
    (*l_185) = l_184;

    ;
    return l_186;



}







static int func_35(unsigned p_36)
{
    unsigned l_41 = 0UL;
    struct S0 **l_124 = (void*)0;
    struct S0 ***l_123 = &l_124;
    int *l_125 = &g_42.f2;
    (*l_125) = (func_37(g_22.f4, l_41, g_42) && ((safe_add_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(l_41, l_41)) == p_36), p_36)) & g_94.f5));


    return (*l_125);
}







static short func_37(unsigned char p_38, int p_39, union U1 p_40)
{
    int l_43 = 0xB5D06DE2L;
    char **l_44 = &g_26;
    char ***l_45 = &l_44;
    struct S0 l_95 = {0xFA4CEBEEL,255UL,30,6L,0xC4FEF296L,0x1EF3A5E7L,0L,4294967292UL};
    union U3 *l_100 = &g_101;
    int *l_103 = &g_94.f0;
    unsigned char l_109 = 0x6FL;
    struct S0 *l_118 = &l_95;
    struct S0 **l_117 = &l_118;
    g_42.f2 = l_43;

    (*l_45) = l_44;
    for (l_43 = (-20); (l_43 >= 21); l_43 = safe_add_func_int16_t_s_s(l_43, 1))
    {
        int *l_48 = (void*)0;
        int l_89 = 8L;
        struct S0 *l_92 = &g_22;
        char l_104 = 0xAAL;
        unsigned l_116 = 4294967290UL;
        p_40.f2 = (p_40.f3 < 2UL);

                if (p_40.f2)
        {
            char ***l_53 = &g_25;
            int l_56 = 0x80555F25L;
            if ((((0xB2L == (*g_26)) >= (safe_add_func_uint8_t_u_u(((g_42.f2 | (safe_mod_func_uint8_t_u_u(((l_53 == &l_44) >= (0UL ^ (p_39 ^ ((safe_lshift_func_uint8_t_u_u((0x8AL ^ p_40.f2), g_42.f4)) > l_56)))), p_40.f0))) != g_22.f3), g_22.f4))) & p_39))
            {
                int *l_57 = &g_22.f0;
                int **l_58 = &l_57;
                int *l_59 = (void*)0;
                int *l_60 = &g_42.f2;
                struct S0 l_61 = {-4L,9UL,3,0x464EL,9UL,0x42724202L,-9L,0UL};
                struct S0 *l_62 = &l_61;
                (*l_58) = l_57;
                (*l_60) = (*l_57);
                (*l_62) = l_61;
            }
            else
            {
                int l_68 = 0x2EEDB0E1L;
                char *l_81 = &g_42.f3;
                struct S0 *l_93 = &g_94;
                g_63 = &l_43;

                ;
                for (g_11 = (-10); (g_11 <= (-29)); g_11 = safe_sub_func_uint32_t_u_u(g_11, 6))
                {
                    int **l_66 = (void*)0;
                    int **l_67 = &l_48;
                    (*l_67) = g_63;

                    ;
                    if (l_68)
                    {
                        g_63 = g_63;
                        if ((*g_63))
                            continue;
                    }
                    else
                    {
                        int *l_69 = &g_22.f0;
                        g_63 = l_69;

                        ;
                    }
                }

                ;
                ;
                if ((((safe_rshift_func_uint8_t_u_u(g_22.f4, 6)) || ((p_39 < l_56) >= p_40.f0)) != (safe_sub_func_uint16_t_u_u(0x757AL, p_38))))
                {
                    unsigned l_74 = 4294967286UL;
                    short l_84 = 0xEE79L;
                    int **l_90 = (void*)0;
                    int **l_91 = &g_63;
                    g_42.f2 = ((**g_25) == ((l_74 <= (safe_lshift_func_int8_t_s_s(0xFDL, 0))) < ((((safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((((*l_44) != l_81) & (safe_mod_func_uint8_t_u_u(l_84, (l_56 & ((safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u((&l_81 == &g_26), l_68)), p_39)) < p_40.f2))))), l_89)), p_39)) && p_40.f0) > 0xC6L) & p_40.f0)));
                    (*l_91) = g_63;
                    l_93 = l_92;

                    ;
                }
                else
                {
                    (*l_93) = l_95;
                }

                ;
                l_95 = (*l_93);
            }

            ;
        }
        else
        {
            int *l_99 = &l_95.f0;
            union U3 **l_102 = &l_100;
            for (l_95.f5 = 0; (l_95.f5 != (-8)); l_95.f5--)
            {
                int **l_98 = &l_48;
                (*l_98) = (void*)0;
                (*l_98) = g_63;

                ;
                (*l_98) = (void*)0;

                ;
            }
            (*l_99) = p_38;
            (*l_102) = l_100;
        }

        ;
        if (p_40.f3)
        {
            struct S0 **l_111 = &l_92;
            struct S0 ***l_110 = &l_111;
            l_103 = g_63;
            if (((*g_26) >= (0x49A5L ^ (g_22.f3 == (l_104 || ((safe_mod_func_uint32_t_u_u((g_42.f2 | (~(0xA816L != (safe_add_func_int8_t_s_s(0xCBL, 0xBCL))))), g_22.f3)) | (*g_26)))))))
            {
                l_109 = p_40.f2;
            }
            else
            {
                g_94 = g_22;
            }
            (*l_110) = (void*)0;

            ;
        }
        else
        {
            int **l_112 = (void*)0;
            int **l_113 = (void*)0;
            int **l_114 = (void*)0;
            int **l_115 = &g_63;
            (*l_115) = g_63;
            l_103 = g_63;
        }
        l_95.f0 = l_116;
    }

    ;
    ;
    (*l_117) = &g_22;

    ;
    return p_38;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_22.f0, "g_22.f0", print_hash_value);
    transparent_crc(g_22.f1, "g_22.f1", print_hash_value);
    transparent_crc(g_22.f2, "g_22.f2", print_hash_value);
    transparent_crc(g_22.f3, "g_22.f3", print_hash_value);
    transparent_crc(g_22.f4, "g_22.f4", print_hash_value);
    transparent_crc(g_22.f5, "g_22.f5", print_hash_value);
    transparent_crc(g_22.f6, "g_22.f6", print_hash_value);
    transparent_crc(g_22.f7, "g_22.f7", print_hash_value);
    transparent_crc(g_42.f0, "g_42.f0", print_hash_value);
    transparent_crc(g_42.f2, "g_42.f2", print_hash_value);
    transparent_crc(g_42.f3, "g_42.f3", print_hash_value);
    transparent_crc(g_42.f4, "g_42.f4", print_hash_value);
    transparent_crc(g_94.f0, "g_94.f0", print_hash_value);
    transparent_crc(g_94.f1, "g_94.f1", print_hash_value);
    transparent_crc(g_94.f2, "g_94.f2", print_hash_value);
    transparent_crc(g_94.f3, "g_94.f3", print_hash_value);
    transparent_crc(g_94.f4, "g_94.f4", print_hash_value);
    transparent_crc(g_94.f5, "g_94.f5", print_hash_value);
    transparent_crc(g_94.f6, "g_94.f6", print_hash_value);
    transparent_crc(g_94.f7, "g_94.f7", print_hash_value);
    transparent_crc(g_101.f0, "g_101.f0", print_hash_value);
    transparent_crc(g_307.f0, "g_307.f0", print_hash_value);
    transparent_crc(g_340.f0, "g_340.f0", print_hash_value);
    transparent_crc(g_433, "g_433", print_hash_value);
    transparent_crc(g_446, "g_446", print_hash_value);
    transparent_crc(g_457, "g_457", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
