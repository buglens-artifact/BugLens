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
   volatile char f0;
   int f1;
   const unsigned short f2;
};

union U1 {
   unsigned f0;
   const short f1;
   volatile unsigned f2 : 28;
};

union U2 {
   const volatile int f0;
   volatile struct S0 f1;
   unsigned short f2;
   unsigned f3 : 18;
};


static int g_15 = 0xD7D711E7L;
static int *g_14 = &g_15;
static int g_43 = 0x6E836EA0L;
static union U2 g_46 = {0x1D691704L};
static short g_48 = (-7L);
static unsigned g_59 = 4294967287UL;
static struct S0 g_63 = {5L,0L,0xA629L};
static const struct S0 *g_62 = &g_63;
static char g_81 = 5L;
static union U1 g_103 = {0xFFE8B44AL};
static union U1 *g_105 = &g_103;
static union U1 ** volatile g_104 = &g_105;
static volatile union U1 g_109 = {9UL};
static const volatile struct S0 g_132 = {-5L,-7L,0UL};
static const short * volatile g_138 = &g_103.f1;
static const short * volatile *g_137 = &g_138;
static union U1 g_166 = {0xF97C3214L};
static int *g_168 = &g_15;
static volatile union U1 g_176 = {0x74A2BAD3L};
static union U2 g_191 = {0x38733E28L};
static unsigned char g_192 = 1UL;
static short *g_234 = &g_48;
static short **g_233 = &g_234;
static short **g_236 = &g_234;
static char g_248 = (-1L);
static struct S0 g_254 = {0x1BL,0xCBC80529L,0xFD0DL};
static struct S0 g_259 = {0x3AL,0x3036BE60L,0x6839L};
static volatile union U1 g_272 = {0x09C68EEAL};
static volatile union U2 g_290 = {1L};
static volatile union U2 *g_289 = &g_290;
static volatile union U2 * volatile * volatile g_288 = &g_289;
static union U2 g_293 = {-1L};
static volatile struct S0 g_298 = {1L,0L,0xF56CL};
static int **g_304 = &g_168;
static int ***g_303 = &g_304;
static int ****g_302 = &g_303;
static char *g_310 = (void*)0;
static volatile union U1 g_327 = {0x9F878823L};
static union U2 g_331 = {0xEA9C36C5L};
static const union U2 *g_330 = &g_331;
static short *** volatile g_339 = &g_236;
static volatile union U1 g_350 = {0xF1DDAC66L};
static union U2 g_376 = {0x5AE7656CL};
static union U2 *g_375 = &g_376;
static union U2 **g_374 = &g_375;
static unsigned char g_379 = 0xE7L;
static struct S0 g_390 = {-3L,-9L,65535UL};
static char g_394 = 9L;
static volatile struct S0 g_406 = {0xCDL,-1L,0xDED6L};
static unsigned char g_421 = 255UL;
static volatile unsigned g_439 = 1UL;
static volatile unsigned char g_503 = 0x8CL;
static volatile unsigned char *g_502 = &g_503;
static volatile unsigned char * const volatile * volatile g_501 = &g_502;
static volatile unsigned char * const volatile * volatile * volatile g_504 = (void*)0;
static volatile union U2 g_534 = {-7L};
static union U1 **g_555 = &g_105;
static int g_572 = (-3L);
static volatile unsigned g_576 = 0x264726F9L;
static union U2 g_580 = {0xD3F3AF64L};



static short func_1(void);
static int * func_2(int * const p_3);
static int * const func_4(char p_5);
static const int func_8(int * p_9, unsigned p_10, int * p_11, unsigned short p_12, unsigned p_13);
static int * func_17(int * p_18);
static int * func_19(unsigned short p_20, int p_21);
static int * func_22(int * p_23, short p_24, int p_25, unsigned short p_26);
static short func_27(int * p_28, int * p_29, int * const p_30);
static int * func_32(char p_33, unsigned p_34);
static union U2 func_37(int * p_38, int * const p_39, int * p_40, unsigned char p_41);
static short func_1(void)
{
    int l_16 = 0xACFF8EE1L;
    char *l_312 = &g_248;
    char **l_311 = &l_312;
    const unsigned short l_313 = 65528UL;
    int *l_437 = (void*)0;
    int *l_465 = &g_390.f1;
    int *l_491 = &g_63.f1;
    int * const l_494 = &g_63.f1;
    int l_498 = 1L;
    int l_520 = (-9L);
    int * const l_530 = &g_259.f1;
    unsigned char l_539 = 2UL;
    int l_554 = 0xF0FE70FFL;
    const struct S0 *l_564 = &g_254;
    int *l_571 = &g_63.f1;
    short l_573 = (-6L);
    int *** const *l_575 = &g_303;
    union U2 *l_579 = &g_580;
    (**g_303) = func_2(func_4((safe_mod_func_int32_t_s_s(func_8(g_14, l_16, func_17(func_19(g_15, (*g_14))), (safe_rshift_func_int8_t_s_s(((((*l_311) = (g_254.f2 , (g_310 = (l_16 , &g_248)))) != &g_248) , l_313), 0)), g_259.f2), l_313))));

    ;
        ;
    ;
    ;
    for (g_248 = (-29); (g_248 == 17); g_248 = safe_add_func_uint32_t_u_u(g_248, 7))
    {
        unsigned char l_435 = 0UL;
        unsigned short *l_436 = &g_191.f2;
        int *l_438 = &g_43;
        union U1 **l_460 = &g_105;
        union U1 *** const l_459 = &l_460;
        int *** const * const *l_477 = (void*)0;
        unsigned short l_549 = 1UL;
        struct S0 *l_563 = (void*)0;
        struct S0 **l_562 = &l_563;
        int *l_574 = &l_16;
        struct S0 *l_578 = &g_254;
        struct S0 **l_577 = &l_578;
        l_438 = l_437;

        ;
    }
    l_579 = ((*g_374) = (*g_374));

    ;
    return (**g_236);
}







static int * func_2(int * const p_3)
{
    int l_367 = 1L;
    union U1 **l_371 = &g_105;
    union U1 ***l_370 = &l_371;
    union U2 ***l_377 = &g_374;
    union U2 **l_378 = &g_375;
    char l_393 = 0xA1L;
    int *l_404 = (void*)0;
    short ** const * const l_415 = &g_236;
    (*g_14) = (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(((***g_339) ^ (l_367 , ((l_367 < (l_367 , g_254.f1)) ^ l_367))), l_367)), l_367));
    if ((g_259.f1 = ((6UL ^ ((0xE55AL != (((safe_add_func_int16_t_s_s((((**g_374) , (((safe_mod_func_int32_t_s_s((l_367 , l_367), (((g_176.f2 , ((*g_14) = (safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((g_390 , ((*l_370) != ((safe_sub_func_uint32_t_u_u((~(l_367 == (*g_310))), 0xD02055A8L)) , &g_105))), l_393)), l_367)), l_393)))) ^ g_394) & 7UL))) , l_367) < l_393)) ^ 0x05B2L), l_393)) < (-4L)) <= l_367)) > l_367)) >= l_367)))
    {
        unsigned char l_398 = 0xDDL;
        int *l_403 = (void*)0;
        unsigned short l_407 = 0x644BL;
        for (g_46.f2 = 5; (g_46.f2 != 18); g_46.f2 = safe_add_func_int32_t_s_s(g_46.f2, 7))
        {
            unsigned char l_397 = 0x2DL;
            int l_399 = (-1L);
            int * const l_405 = &g_390.f1;
        }
        l_404 = (l_393 , &l_367);

        ;
        for (g_293.f2 = (-30); (g_293.f2 >= 42); g_293.f2 = safe_add_func_uint8_t_u_u(g_293.f2, 9))
        {
            int **l_418 = &g_14;
            int l_424 = (-10L);
            (*l_418) = p_3;

            ;
            for (g_166.f0 = 0; (g_166.f0 > 2); ++g_166.f0)
            {
                (**g_303) = l_403;

                ;
                if ((*l_404))
                    continue;
            }
            if (g_421)
                break;
            for (l_398 = 27; (l_398 > 46); l_398 = safe_add_func_uint8_t_u_u(l_398, 2))
            {
                (*l_404) = 0xCE3149CDL;
                (*l_404) = (*l_404);
                (*l_404) = l_424;
            }
        }

        ;
    }
    else
    {
        short l_430 = 0xAEACL;
        for (g_46.f2 = (-21); (g_46.f2 != 4); g_46.f2++)
        {
            unsigned l_429 = 0x7C8F7EC8L;
            (*g_14) = (l_430 = (!(safe_mod_func_int32_t_s_s(l_429, l_429))));
            for (g_48 = 2; (g_48 <= 1); --g_48)
            {
                (*g_14) = l_367;
            }
        }
        return (**g_303);


    }

    ;
    ;
    (*l_404) = ((***l_377) , (*l_404));
    (*l_404) = (*l_404);
    return (*g_304);


}







static int * const func_4(char p_5)
{
    int *l_356 = (void*)0;
    int **l_357 = (void*)0;
    int **l_358 = &l_356;
    (*l_358) = ((**g_303) = l_356);

    ;
    for (g_48 = 0; (g_48 < (-14)); g_48 = safe_sub_func_int16_t_s_s(g_48, 6))
    {
        short l_361 = 0xE067L;
        int *l_362 = &g_15;
        (*g_104) = (*g_104);
        (*g_14) = l_361;
        (*g_304) = l_362;

        ;
        (**g_303) = l_362;
    }

    ;
    (**g_303) = (**g_303);
    return (***g_302);


}







static const int func_8(int * p_9, unsigned p_10, int * p_11, unsigned short p_12, unsigned p_13)
{
    short *l_314 = &g_48;
    int l_321 = 0L;
    short l_322 = 0xCA83L;
    int **l_323 = &g_14;
    unsigned char *l_324 = &g_192;
    const union U2 *l_328 = &g_46;
    const union U2 **l_329 = &l_328;
    const unsigned l_355 = 0x612B42A1L;
    (*p_9) = ((((*l_324) = (((((void*)0 == (*g_288)) == ((void*)0 != l_314)) , ((safe_mod_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(func_27((**g_303), ((*l_323) = ((l_321 , l_322) , ((func_27(p_9, p_9, (**g_303)) & l_322) , p_11))), (***g_302)), 2)) , 0x3BC9L), (**g_233))) | p_12), 0x7A15DE54L)) ^ 0xA5A8761BL)) , g_290.f2)) & (*g_310)) == l_322);

    ;
    g_330 = ((*l_329) = ((((((void*)0 != l_324) , p_10) < (safe_sub_func_int32_t_s_s((*g_168), (*g_168)))) , g_327) , l_328));

    ;
    for (g_192 = 0; (g_192 >= 36); g_192++)
    {
        unsigned char l_335 = 0UL;
        int l_348 = 0x0CD13B23L;
        int l_349 = (-10L);
    }
    return l_355;
}







static int * func_17(int * p_18)
{
    unsigned short l_283 = 1UL;
    union U2 *l_292 = &g_293;
    union U2 * const *l_291 = &l_292;
    int *l_294 = &g_254.f1;
    int **l_295 = (void*)0;
    int **l_296 = (void*)0;
    int **l_297 = &l_294;
    unsigned l_301 = 0x18940EEDL;
    int *****l_305 = &g_302;
    int ****l_306 = &g_303;
    int **l_307 = &g_168;
    (*l_297) = l_294;
    (*g_14) = ((**l_297) = ((func_27((g_298 , p_18), (*l_297), ((safe_rshift_func_int8_t_s_s((0x83L != ((**l_297) & l_301)), g_166.f1)) , ((*l_307) = func_32((((*g_14) <= ((((+(((*l_305) = g_302) == l_306)) < g_63.f2) || (-1L)) ^ 65535UL)) , (**l_297)), g_46.f2)))) ^ l_283) & 4L));

    ;
    return (*g_304);


}







static int * func_19(unsigned short p_20, int p_21)
{
    int *l_31 = &g_15;
    short *l_47 = &g_48;
    unsigned short *l_49 = &g_46.f2;
    l_31 = func_22(&g_15, func_27(l_31, &g_15, func_32(((void*)0 != &p_21), (p_20 != ((*l_49) = (0x15051ACAL & (g_15 == (safe_lshift_func_int16_t_s_s(((*l_47) = (func_37(&g_15, &g_15, &g_15, g_15) , 0xFABAL)), 6)))))))), p_20, p_21);

    ;

    return l_31;


}







static int * func_22(int * p_23, short p_24, int p_25, unsigned short p_26)
{
    const int *l_74 = (void*)0;
    const int **l_73 = &l_74;
    unsigned *l_77 = &g_59;
    char *l_80 = &g_81;
    int * const *l_83 = (void*)0;
    int * const **l_82 = &l_83;
    int * const ***l_84 = (void*)0;
    int **l_90 = &g_14;
    int ***l_89 = &l_90;
    int ****l_91 = &l_89;
    const short l_108 = 0x7F4BL;
    short *l_121 = &g_48;
    short **l_120 = &l_121;
    short *** const l_119 = &l_120;
    int *l_202 = &g_15;
    struct S0 *l_264 = &g_63;
    (*l_73) = (void*)0;
    if ((safe_add_func_int16_t_s_s((((*l_77) = 0xF7267713L) < (safe_rshift_func_int8_t_s_u(((*l_80) = (-6L)), 0))), (((l_82 = l_82) == ((safe_add_func_int8_t_s_s(g_48, (safe_add_func_uint8_t_u_u(p_26, 0x47L)))) , ((*l_91) = l_89))) != 0x08L))))
    {
        int *l_96 = &g_43;
        int **l_97 = (void*)0;
        int *l_98 = (void*)0;
        unsigned l_99 = 4294967293UL;
        short * const l_115 = &g_48;
        short * const *l_114 = &l_115;
        union U1 **l_155 = &g_105;
        const struct S0 **l_201 = &g_62;
        int *l_204 = &g_15;
        if ((func_27(&g_43, &g_43, func_32((g_43 || (safe_add_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u((((p_24 & (*g_14)) || l_99) ^ g_63.f2), g_81)) , (void*)0) == (void*)0), p_25))), g_59)) == g_81))
        {
            int l_110 = 0x50F896C2L;
            short **l_136 = &l_121;
            int *l_152 = &g_63.f1;
            for (g_63.f1 = 0; (g_63.f1 <= 1); g_63.f1++)
            {
                const unsigned l_111 = 6UL;
                if ((*p_23))
                {
                    union U1 *l_102 = &g_103;
                    int l_112 = 0xB685EF4CL;
                    (*g_104) = l_102;
                    for (p_26 = (-28); (p_26 >= 53); p_26++)
                    {
                        char l_113 = 0x59L;
                        short * const **l_116 = &l_114;
                        (*l_73) = func_32(p_24, (((((**g_104) , (((g_103.f1 ^ l_108) ^ (((g_15 , g_109) , (((func_37(&g_15, &g_15, func_32(p_26, l_110), g_63.f1) , p_24) <= l_111) , (-2L))) > l_112)) & (-7L))) == (-4L)) < l_113) | 0xD0477059L));

                        ;
                        (****l_91) = func_27(func_32(p_26, g_59), &l_112, &p_25);
                        (*l_73) = &g_43;
                        (*l_116) = l_114;
                    }
                }
                else
                {
                    union U1 *l_117 = (void*)0;
                    union U1 **l_118 = &l_117;
                    (*l_118) = l_117;
                }
                if ((*g_14))
                    break;
                (*l_96) = ((*p_23) = (*g_14));
            }

            ;
            if ((*p_23))
            {
                unsigned char l_126 = 255UL;
                int * const l_133 = (void*)0;
                if (((&g_81 != ((!func_27(&g_43, &g_43, &g_43)) , &g_81)) | (((void*)0 != l_119) , (safe_mod_func_uint16_t_u_u((0UL <= g_109.f1), p_25)))))
                {
                    (*p_23) = (*p_23);
                }
                else
                {
                    for (g_103.f0 = 0; (g_103.f0 != 2); g_103.f0 = safe_add_func_int32_t_s_s(g_103.f0, 3))
                    {
                        l_126 = ((*l_96) = (*p_23));
                    }
                    for (g_46.f2 = 0; (g_46.f2 >= 42); g_46.f2 = safe_add_func_int16_t_s_s(g_46.f2, 4))
                    {
                        int *l_129 = &l_110;
                        int **l_134 = &l_96;
                        unsigned char *l_135 = &l_126;
                        (*p_23) = 8L;
                        (*p_23) = ((*l_129) = ((p_25 , l_129) != (((safe_mod_func_uint16_t_u_u(((func_27(&g_43, (**l_89), ((*l_134) = (g_132 , l_133))) > (((((*l_119) = (((*l_135) = 3UL) , l_136)) == g_137) >= g_63.f1) | l_110)) < 0x3628L), p_26)) | p_25) , (void*)0)));

                        ;
                        if ((*l_129))
                            continue;
                    }

                    ;
                }

                ;
                (***l_89) = ((-1L) & p_25);
            }
            else
            {
                int l_150 = (-1L);
                int l_151 = (-10L);
                for (p_26 = 0; (p_26 != 49); p_26++)
                {
                    int *l_143 = &g_43;
                    l_151 = ((*g_14) = (((safe_mod_func_uint8_t_u_u(g_132.f0, (((func_27(&p_25, l_143, (((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(g_63.f2, (safe_lshift_func_int16_t_s_u(p_24, 14)))), 15)) > l_150) , &g_43)) && g_46.f2) > (**l_90)) | g_46.f2))) & p_26) >= g_63.f1));
                    (*l_96) = (*p_23);
                    (*l_73) = &p_25;

                    ;
                }

                ;
                (*p_23) = 0xD128F2DFL;
                (*l_82) = (**l_91);

                ;
                (*l_73) = (p_23 = l_152);

                ;
                ;
            }

            ;
            ;
            ;
            ;
        }
        else
        {
            const short l_158 = 0L;
            int l_163 = 0x5807DED5L;
            union U2 *l_187 = &g_46;
            int *l_200 = (void*)0;
            unsigned l_205 = 0xF4EA760EL;
            for (g_48 = 0; (g_48 < (-20)); --g_48)
            {
                int *l_164 = &l_163;
                unsigned char l_171 = 2UL;
                union U2 *l_210 = &g_191;
                if (((0x10L || (((1UL >= ((((l_155 == ((safe_add_func_int8_t_s_s(p_24, g_43)) , &g_105)) & (*g_14)) <= (p_24 & ((0x1BL && p_25) , (***l_89)))) && 0x86L)) < (*g_14)) && l_158)) <= l_158))
                {
                    char l_165 = 0L;
                    if ((!(l_163 = ((****l_91) = (safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((p_25 | g_103.f1), 8)), p_26))))))
                    {
                        short l_167 = (-9L);
                        (***l_89) = (func_27(&g_15, func_32(((*l_80) = (func_27(&g_15, l_164, (func_37(l_164, func_32((0x624FL || (!(l_165 > ((p_24 ^ p_24) || (g_166 , g_103.f0))))), g_15), &g_43, g_63.f2) , l_164)) <= l_167)), g_103.f1), g_14) && (*l_164));
                    }
                    else
                    {
                        g_168 = l_164;

                        ;
                        return &g_43;



                    }
                    for (g_59 = 25; (g_59 > 25); g_59++)
                    {
                        (*l_164) = (l_171 = ((**l_90) = (((void*)0 == &g_15) && (*g_14))));
                        (*l_73) = (p_23 = &g_15);

                        ;
                    }
                }
                else
                {
                    int l_181 = 9L;
                    int *l_184 = &l_163;
                    (****l_91) = (((*l_77) = p_26) > (1L && (((p_26 ^ (-2L)) != ((safe_sub_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(((0xCEF1L && (g_176 , (((0xE3L ^ (-8L)) , (((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(g_103.f2, 6)), p_24)) < g_103.f0) ^ p_24)) ^ (****l_91)))) & g_46.f2), 1UL)) == (**l_90)), l_181)) || (**l_90))) >= (*l_164))));
                    (*l_73) = func_32(((((safe_mod_func_int32_t_s_s(0x5AE6562FL, func_27(l_184, func_32(((*g_138) | (*l_164)), func_27(&g_15, &g_43, l_184)), g_168))) == (*l_184)) < g_63.f2) ^ (*l_164)), g_48);

                    ;
                    for (l_99 = 0; (l_99 <= 34); l_99++)
                    {
                        union U2 **l_188 = &l_187;
                        (*l_188) = l_187;
                        return &g_15;


                    }
                    for (g_46.f2 = 0; (g_46.f2 < 16); g_46.f2++)
                    {
                        int l_195 = (-1L);
                        (*g_14) = ((((g_192 = (func_27((g_191 , &g_43), &g_15, &g_43) , p_26)) & ((safe_rshift_func_uint8_t_u_u(((p_25 >= (((65535UL ^ (p_25 , 0xE4F9L)) , p_24) | g_103.f1)) >= g_103.f1), l_195)) != 5L)) != p_24) && 0x14BE7DE1L);
                        g_168 = &p_25;

                        ;
                        return &g_15;



                    }
                }
                for (g_192 = 0; (g_192 > 23); g_192 = safe_add_func_int32_t_s_s(g_192, 2))
                {
                    int *l_203 = (void*)0;
                    if (((safe_add_func_int32_t_s_s(4L, (*g_14))) & ((*l_164) = ((void*)0 != l_201))))
                    {
                        g_168 = l_202;
                        return l_203;


                    }
                    else
                    {
                        if ((*g_168))
                            break;
                        l_203 = l_204;

                        ;
                        if (l_205)
                            continue;
                    }

                    ;
                    return &g_15;


                }
                if ((*g_14))
                {
                    for (g_43 = 0; (g_43 < (-13)); g_43 = safe_sub_func_int16_t_s_s(g_43, 3))
                    {
                        (*l_73) = &p_25;

                        ;
                    }
                    (*l_164) = ((**l_90) = (safe_lshift_func_uint8_t_u_u(g_176.f0, 4)));
                }
                else
                {
                    int *l_212 = (void*)0;
                    if ((*p_23))
                    {
                        if ((*p_23))
                            break;
                    }
                    else
                    {
                        union U2 **l_211 = &l_210;
                        (*l_211) = l_210;
                    }
                    l_212 = &g_43;

                    ;
                    if ((*g_168))
                        break;
                }
            }

            ;
            return &g_15;


        }

        ;
        ;
        ;
        ;
        (*l_73) = &p_25;

        ;
        for (g_59 = 0; (g_59 > 46); ++g_59)
        {
            unsigned l_225 = 0x8BD2F6D1L;
            char *l_247 = &g_248;
            const struct S0 **l_260 = &g_62;
            int *l_271 = &g_259.f1;
            unsigned short l_279 = 0xBF14L;
            (****l_91) = 0xF28A5CC7L;
        }
    }
    else
    {
        int *l_282 = &g_43;
        for (g_192 = 0; (g_192 == 23); ++g_192)
        {
            return l_282;


        }
    }

    ;
    ;
    ;
    return (*l_90);


}







static short func_27(int * p_28, int * p_29, int * const p_30)
{
    int ***l_65 = (void*)0;
    int * const *l_67 = (void*)0;
    int * const **l_66 = &l_67;
    unsigned short l_72 = 0x2726L;
    (*l_66) = (void*)0;
    l_72 = (g_15 , ((*p_29) = (safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(g_15, 3)), 1L))));
    return g_63.f1;
}







static int * func_32(char p_33, unsigned p_34)
{
    unsigned short *l_52 = &g_46.f2;
    int l_53 = 0x60A87187L;
    unsigned *l_58 = &g_59;
    short **l_61 = (void*)0;
    short ***l_60 = &l_61;
    const struct S0 **l_64 = &g_62;
    l_53 = ((safe_lshift_func_int16_t_s_u((p_33 < g_15), 12)) ^ ((g_48 >= (p_34 != ((((*l_52) = p_33) > 0x6DB9L) | g_15))) | l_53));
    (*l_60) = (((*l_58) = (((((((*g_14) = (*g_14)) , g_15) | l_53) >= (safe_mod_func_uint32_t_u_u(((g_43 , (safe_unary_minus_func_int32_t_s(l_53))) < l_53), ((safe_unary_minus_func_uint8_t_u((p_33 >= p_33))) & (-2L))))) | 0x0CABL) , g_48)) , (void*)0);
    (*l_64) = (g_15 , g_62);
    return &g_43;


}







static union U2 func_37(int * p_38, int * const p_39, int * p_40, unsigned char p_41)
{
    int *l_42 = &g_43;
    int **l_44 = (void*)0;
    int **l_45 = (void*)0;
    (*l_42) = (-2L);
    l_42 = p_40;


    return g_46;

    }





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_46.f2, "g_46.f2", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_63.f0, "g_63.f0", print_hash_value);
    transparent_crc(g_63.f1, "g_63.f1", print_hash_value);
    transparent_crc(g_63.f2, "g_63.f2", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_103.f0, "g_103.f0", print_hash_value);
    transparent_crc(g_103.f1, "g_103.f1", print_hash_value);
    transparent_crc(g_103.f2, "g_103.f2", print_hash_value);
    transparent_crc(g_109.f0, "g_109.f0", print_hash_value);
    transparent_crc(g_109.f1, "g_109.f1", print_hash_value);
    transparent_crc(g_109.f2, "g_109.f2", print_hash_value);
    transparent_crc(g_132.f0, "g_132.f0", print_hash_value);
    transparent_crc(g_132.f1, "g_132.f1", print_hash_value);
    transparent_crc(g_132.f2, "g_132.f2", print_hash_value);
    transparent_crc(g_166.f0, "g_166.f0", print_hash_value);
    transparent_crc(g_166.f1, "g_166.f1", print_hash_value);
    transparent_crc(g_166.f2, "g_166.f2", print_hash_value);
    transparent_crc(g_176.f0, "g_176.f0", print_hash_value);
    transparent_crc(g_176.f1, "g_176.f1", print_hash_value);
    transparent_crc(g_176.f2, "g_176.f2", print_hash_value);
    transparent_crc(g_191.f0, "g_191.f0", print_hash_value);
    transparent_crc(g_191.f2, "g_191.f2", print_hash_value);
    transparent_crc(g_191.f3, "g_191.f3", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_254.f0, "g_254.f0", print_hash_value);
    transparent_crc(g_254.f1, "g_254.f1", print_hash_value);
    transparent_crc(g_254.f2, "g_254.f2", print_hash_value);
    transparent_crc(g_259.f0, "g_259.f0", print_hash_value);
    transparent_crc(g_259.f1, "g_259.f1", print_hash_value);
    transparent_crc(g_259.f2, "g_259.f2", print_hash_value);
    transparent_crc(g_272.f0, "g_272.f0", print_hash_value);
    transparent_crc(g_272.f1, "g_272.f1", print_hash_value);
    transparent_crc(g_272.f2, "g_272.f2", print_hash_value);
    transparent_crc(g_290.f0, "g_290.f0", print_hash_value);
    transparent_crc(g_290.f2, "g_290.f2", print_hash_value);
    transparent_crc(g_290.f3, "g_290.f3", print_hash_value);
    transparent_crc(g_293.f2, "g_293.f2", print_hash_value);
    transparent_crc(g_298.f0, "g_298.f0", print_hash_value);
    transparent_crc(g_298.f1, "g_298.f1", print_hash_value);
    transparent_crc(g_298.f2, "g_298.f2", print_hash_value);
    transparent_crc(g_327.f0, "g_327.f0", print_hash_value);
    transparent_crc(g_327.f1, "g_327.f1", print_hash_value);
    transparent_crc(g_327.f2, "g_327.f2", print_hash_value);
    transparent_crc(g_331.f0, "g_331.f0", print_hash_value);
    transparent_crc(g_331.f2, "g_331.f2", print_hash_value);
    transparent_crc(g_331.f3, "g_331.f3", print_hash_value);
    transparent_crc(g_350.f0, "g_350.f0", print_hash_value);
    transparent_crc(g_350.f1, "g_350.f1", print_hash_value);
    transparent_crc(g_350.f2, "g_350.f2", print_hash_value);
    transparent_crc(g_376.f0, "g_376.f0", print_hash_value);
    transparent_crc(g_376.f2, "g_376.f2", print_hash_value);
    transparent_crc(g_376.f3, "g_376.f3", print_hash_value);
    transparent_crc(g_379, "g_379", print_hash_value);
    transparent_crc(g_390.f0, "g_390.f0", print_hash_value);
    transparent_crc(g_390.f1, "g_390.f1", print_hash_value);
    transparent_crc(g_390.f2, "g_390.f2", print_hash_value);
    transparent_crc(g_394, "g_394", print_hash_value);
    transparent_crc(g_406.f0, "g_406.f0", print_hash_value);
    transparent_crc(g_406.f1, "g_406.f1", print_hash_value);
    transparent_crc(g_406.f2, "g_406.f2", print_hash_value);
    transparent_crc(g_421, "g_421", print_hash_value);
    transparent_crc(g_439, "g_439", print_hash_value);
    transparent_crc(g_503, "g_503", print_hash_value);
    transparent_crc(g_534.f0, "g_534.f0", print_hash_value);
    transparent_crc(g_534.f2, "g_534.f2", print_hash_value);
    transparent_crc(g_534.f3, "g_534.f3", print_hash_value);
    transparent_crc(g_572, "g_572", print_hash_value);
    transparent_crc(g_576, "g_576", print_hash_value);
    transparent_crc(g_580.f0, "g_580.f0", print_hash_value);
    transparent_crc(g_580.f2, "g_580.f2", print_hash_value);
    transparent_crc(g_580.f3, "g_580.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
