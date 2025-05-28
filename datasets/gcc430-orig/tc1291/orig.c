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



static int g_8 = 0x8FC558BAL;
static int *g_7 = &g_8;
static unsigned g_62 = 0xE05AF849L;
static short g_66 = 0L;
static unsigned char g_84 = 0x54L;
static unsigned char g_86 = 1UL;
static unsigned char *g_85 = &g_86;
static short g_93 = (-9L);
static char g_101 = 0x90L;
static short g_103 = 0xDFB1L;
static int g_131 = 0x7D0E0566L;
static short *g_155 = (void*)0;
static short **g_154 = &g_155;
static int g_210 = 0xDBC7C010L;
static unsigned char g_257 = 254UL;
static char g_281 = 0x49L;
static int g_283 = 3L;
static unsigned short g_292 = 0x117CL;
static int g_356 = 0x799884CAL;
static volatile int g_363 = 0x11DC3B8FL;
static unsigned short g_385 = 0UL;
static unsigned char **g_402 = &g_85;
static unsigned g_419 = 1UL;
static char *g_435 = &g_281;
static char **g_434 = &g_435;
static char ***g_433 = &g_434;
static int *g_437 = &g_8;



static unsigned func_1(void);
static int * func_2(int * p_3, int * p_4, char p_5, short p_6);
static int * func_9(int * p_10, unsigned p_11, char p_12, unsigned char p_13, int p_14);
static int * func_17(int * p_18, short p_19, int * p_20, unsigned char p_21);
static unsigned func_22(int * p_23, int * p_24, unsigned p_25);
static int * func_26(int p_27, unsigned char p_28, int * p_29);
static short func_30(int * p_31, int * p_32, int p_33, int p_34);
static int * func_35(int * p_36, char p_37, int * p_38, unsigned char p_39, char p_40);
static unsigned short func_43(short p_44, unsigned char p_45, int * p_46, int * p_47, int p_48);
static short func_49(unsigned p_50, int * p_51, int * p_52, int * p_53);
static unsigned func_1(void)
{
    unsigned l_15 = 2UL;
    int *l_16 = (void*)0;
    unsigned l_552 = 4294967295UL;
    int **l_567 = &l_16;
    (*l_567) = func_2(g_7, func_9(((l_15 > ((void*)0 == l_16)) , func_17(&g_8, ((((*g_7) < (func_22(func_26(g_8, ((func_30(l_16, &g_8, (*g_7), (*g_7)) && 7L) ^ (-3L)), &g_8), &g_8, g_292) >= g_292)) == g_292) , g_62), &g_8, l_15)), l_15, g_363, l_15, l_15), g_419, l_552);

    ;


    return (**l_567);
}







static int * func_2(int * p_3, int * p_4, char p_5, short p_6)
{
    int l_557 = 9L;
    short *l_564 = &g_93;
    int *l_565 = &g_131;
    int l_566 = 0L;
    l_566 &= ((0L >= ((*l_565) |= ((*g_7) = (((((p_6 , l_557) | (*g_435)) , &g_419) != &g_419) <= l_557)))) || 0L);
    return &g_8;


}







static int * func_9(int * p_10, unsigned p_11, char p_12, unsigned char p_13, int p_14)
{
    short l_376 = 0x3986L;
    unsigned short *l_379 = &g_292;
    int l_389 = (-1L);
    char l_390 = 0xCBL;
    short l_391 = 0L;
    int *l_392 = (void*)0;
    unsigned char **l_403 = (void*)0;
    char *l_405 = &g_101;
    char **l_404 = &l_405;
    short ***l_449 = &g_154;
    unsigned l_509 = 0x7D058511L;
    int l_519 = (-1L);
    unsigned l_522 = 4294967291UL;
    char l_548 = 0x8DL;
    for (g_292 = 0; (g_292 > 25); g_292++)
    {
        int l_373 = (-6L);
        unsigned short *l_384 = &g_385;
        int **l_393 = &l_392;
        int *l_395 = &l_389;
        int **l_394 = &l_395;
        (*g_7) = ((p_11 < (g_281 , l_373)) || 0xB745L);
        (*p_10) = (safe_rshift_func_uint16_t_u_s(l_376, 9));
        (*l_394) = ((*l_393) = &l_389);

        ;
    }

    ;
    if ((*g_7))
    {
        int **l_396 = &l_392;
        int *l_397 = &g_283;
        int *l_407 = &g_131;
        (*l_396) = &g_210;

        ;
        (**l_396) = func_43(p_14, (*g_85), func_26(((*l_397) = p_13), (g_62 != p_13), &g_356), (*l_396), p_11);
        if (((*g_7) = (**l_396)))
        {
            int *l_399 = (void*)0;
            int **l_398 = &l_399;
            (*l_398) = ((*l_396) = p_10);

            ;
            ;
        }
        else
        {
            short *l_400 = &g_66;
            int *l_401 = &g_131;
            char ***l_406 = &l_404;
            (*l_396) = func_17((*l_396), ((*l_400) = g_84), &g_356, func_22(l_401, p_10, g_84));

            ;
            (*l_406) = (func_22(func_17(p_10, ((((((*g_85) = 0xF7L) , ((g_402 = &g_85) != ((~(*l_401)) , l_403))) | (g_66 || g_103)) & (**l_396)) <= 65535UL), &g_131, (*l_392)), &g_131, (*l_401)) , l_404);
        }

        ;
        (*l_407) &= (*p_10);
    }
    else
    {
        int l_408 = 8L;
        int *l_409 = (void*)0;
        int *l_410 = (void*)0;
        unsigned char *l_413 = &g_84;
        int *l_481 = &g_131;
        unsigned char l_500 = 0xE1L;
        char **l_514 = &g_435;
        unsigned char l_520 = 0xACL;
        int l_521 = 1L;
        l_389 &= (((g_101 < (**g_402)) >= ((*g_7) ^= (-1L))) ^ (l_408 != 0x99978F16L));
        if (((*g_7) = (((safe_rshift_func_uint8_t_u_s((*g_85), 6)) != (*g_85)) | ((*l_413) = (l_391 >= 4294967295UL)))))
        {
            unsigned char l_414 = 1UL;
            int *l_415 = (void*)0;
            unsigned short *l_450 = &g_292;
            char ***l_504 = &l_404;
            unsigned l_510 = 0x038DC0A0L;
            if ((g_283 > ((l_414 >= p_11) || (((p_12 > l_414) ^ ((((*g_7) | ((7UL ^ p_14) , (0x31L > 0x5EL))) == (*g_7)) | 0x908CF12DL)) == 1L))))
            {
                return l_415;


            }
            else
            {
                int *l_418 = (void*)0;
                int **l_420 = &l_392;
                int l_421 = 0x39245AE2L;
                char l_446 = 9L;
                int l_448 = 0x73867A1AL;
                if (((*p_10) = (safe_mod_func_uint8_t_u_u(func_30(l_418, ((*l_420) = func_26(p_11, ((((((*g_85) &= p_11) < l_421) > ((g_257 , 0x1F56D0E3L) ^ g_93)) && g_86) & 4294967295UL), p_10)), (*g_7), (*p_10)), p_13))))
                {
                    for (g_385 = (-24); (g_385 >= 53); g_385 = safe_add_func_int8_t_s_s(g_385, 2))
                    {
                        unsigned l_424 = 0xE9BDD9EDL;
                        short *l_430 = &g_66;
                        (*l_420) = func_26(l_424, (*g_85), func_26(p_14, (**g_402), p_10));
                    }
                }
                else
                {
                    unsigned l_447 = 2UL;
                    if (((*p_10) = ((((*p_10) , &g_363) != (void*)0) & (safe_add_func_int8_t_s_s(g_356, (0L < g_419))))))
                    {
                        char ***l_436 = &l_404;
                        unsigned short *l_445 = &g_385;
                        (*p_10) &= (((void*)0 == g_433) != ((void*)0 != l_436));
                        g_437 = l_415;

                        ;
                        l_448 |= ((safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((*p_10) && (~(((((((**l_420) & ((safe_rshift_func_uint16_t_u_u((((*l_379) = 1UL) & g_385), g_86)) , (((safe_unary_minus_func_int8_t_s((((void*)0 == l_445) == l_446))) && g_363) != p_11))) , l_447) != (*g_85)) , (***g_433)) <= 0x24L) , g_101))), l_447)), 0xBD18L)) , (*g_7));
                    }
                    else
                    {
                        (*p_10) = (*p_10);
                        (*l_420) = (*l_420);
                        (*l_420) = p_10;
                        (*g_7) = (*g_7);
                    }

                    ;
                }

                ;
                ;
                (*l_420) = &g_210;

                ;
                if (((((void*)0 == l_449) , l_450) != (void*)0))
                {
                    int l_459 = 0x4007A445L;
                    for (g_283 = 0; (g_283 < 29); ++g_283)
                    {
                        return &g_131;


                    }
                    (*l_392) &= (*p_10);
                    (*g_7) = (((safe_add_func_int8_t_s_s((&p_13 != &p_13), p_13)) && (-3L)) > (safe_lshift_func_int16_t_s_u((1UL || (safe_add_func_int8_t_s_s((((*g_85) = ((((**l_420) < (func_43(l_459, p_12, p_10, &g_210, p_14) , 0x4BL)) < l_459) ^ (*l_392))) & p_12), 7UL))), 12)));
                }
                else
                {
                    (*l_392) ^= 0xD5045420L;
                }
                if (((safe_lshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((*l_450) |= p_14), (safe_sub_func_uint32_t_u_u(g_257, (g_363 , (5UL >= (g_283 < (p_12 <= func_43(p_14, p_13, (p_13 , &l_389), &g_210, g_103))))))))), g_62)) >= p_14))
                {
                    unsigned short l_468 = 65533UL;
                    int *l_479 = &g_356;
                    char l_480 = 0x8DL;
                    char l_486 = (-1L);
                    int *l_487 = &l_389;
                    short l_488 = 0x5CBEL;
                    if (((*g_7) &= (safe_sub_func_int32_t_s_s((l_468 | p_14), 7L))))
                    {
                        (*l_479) |= (-8L);
                    }
                    else
                    {
                        int *l_482 = &l_448;
                        char l_485 = 0x4DL;
                        (**l_420) = func_49(p_12, l_479, l_481, l_482);
                        (*l_482) ^= (((*l_392) == func_43((((**g_402) < func_43(func_43((p_14 ^ g_84), ((*p_10) , (((*l_481) & ((+(**g_402)) >= p_13)) , (g_283 > 0x0F93FCF1L))), l_479, p_10, (*l_392)), (*g_85), p_10, p_10, p_14)) <= p_11), (*g_85), &g_131, p_10, g_93)) == p_11);
                        (*l_420) = &g_8;

                        ;
                    }

                    ;
                }
                else
                {
                    unsigned l_499 = 0x8E6A1F40L;
                    int *l_501 = &l_389;
                    (*l_501) &= (safe_rshift_func_uint16_t_u_u((((*g_7) == (*g_7)) & ((p_12 |= (safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((0x1C406F77L >= ((((safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((*l_379) = (((*l_420) = (*l_420)) != l_415)), g_101)), (*g_435))) , g_257) && p_11) < g_131)) , l_499), l_500)), 0xBF304A0AL))) & p_13)), 4));
                    (*p_10) = ((**l_420) = (((0L != p_12) >= ((**g_402) = ((*l_413) = 2UL))) && ((safe_add_func_int8_t_s_s((~(&g_85 != &g_85)), ((l_504 == (void*)0) || (safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s((*g_435), func_49(l_509, l_501, l_415, l_481))), l_510))))) > (*l_392))));
                }

                ;
            }

            ;
            ;
        }
        else
        {
            int **l_511 = &l_481;
            (*l_511) = &g_131;
            (*l_511) = func_17(func_17(func_17((*l_511), (((safe_add_func_int8_t_s_s(((*g_433) == l_514), (-7L))) && ((func_22(func_17(&g_131, ((((safe_div_func_uint8_t_u_u(((*g_85) = (((safe_lshift_func_int16_t_s_s(((((*g_437) & (+((p_11 <= p_12) < l_519))) , (*p_10)) , (-3L)), p_11)) , 0x4C7E3E9FL) , 255UL)), p_12)) == 0x62B044E9L) ^ 0xB71EDB14L) , l_520), &g_131, p_11), (*l_511), l_521) < 1UL) == 0xF390L)) , p_13), p_10, p_13), p_13, &g_131, l_522), g_93, &g_131, g_363);
            (*l_511) = (void*)0;

            ;
        }

        ;
        ;
        ;
    }

    ;
    ;
    for (p_11 = 0; (p_11 >= 2); ++p_11)
    {
        int l_525 = 0xB57CE6A7L;
        int *l_545 = &g_283;
        char l_551 = 0xE2L;
        if (l_525)
            break;
        if ((*p_10))
            break;
        for (g_385 = 0; (g_385 <= 56); g_385++)
        {
            int **l_529 = &g_437;
            int ***l_528 = &l_529;
            int **l_532 = (void*)0;
            int **l_533 = (void*)0;
            int **l_534 = &g_437;
            unsigned char l_549 = 0xA7L;
            int *l_550 = &l_389;
            (*l_528) = (void*)0;

            ;
            (*p_10) |= ((7UL <= ((safe_div_func_int32_t_s_s((&g_85 == ((l_525 > p_11) , (p_13 , &g_85))), p_13)) != 0x0FC2L)) & (*g_435));
            (*l_534) = &l_525;

            ;
            (*l_550) |= (safe_div_func_uint16_t_u_u(8UL, func_30(((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((func_43(func_43(func_30(func_17(func_17(&l_389, (l_376 == (((safe_div_func_uint8_t_u_u((**g_402), (safe_add_func_uint16_t_u_u((l_525 == ((((((((l_545 == (func_43((p_13 == p_14), (safe_rshift_func_int8_t_s_u((*g_435), (**g_402))), &l_389, &l_389, p_14) , (void*)0)) < g_356) == g_8) < g_86) > (-1L)) >= l_525) <= p_12) , (*p_10))), p_13)))) == l_548) <= (*g_7))), p_10, p_11), (**l_534), p_10, (**l_534)), &l_525, l_549, p_14), p_12, g_437, p_10, p_13), l_525, p_10, &l_525, p_14) & p_13), g_419)), p_14)) , &l_389), p_10, (*g_437), (*g_437))));
        }


        (*p_10) = ((((((((g_437 = &l_525) != &l_525) , p_11) , (func_43(p_12, (*g_85), &g_131, &g_210, ((*l_545) = (&p_14 != &p_14))) == 0x68L)) == g_210) && l_551) == g_419) <= (*g_7));

        ;
    }


    return p_10;


}







static int * func_17(int * p_18, short p_19, int * p_20, unsigned char p_21)
{
    int l_319 = 0x8B9B9657L;
    unsigned short *l_320 = &g_292;
    int *l_325 = &g_8;
    int **l_326 = (void*)0;
    int *l_328 = &g_210;
    int **l_327 = &l_328;
    int ***l_329 = &l_327;
    unsigned char **l_340 = &g_85;
    unsigned char **l_342 = &g_85;
    unsigned char ***l_341 = &l_342;
    unsigned l_349 = 3UL;
    unsigned char *l_350 = (void*)0;
    unsigned char *l_351 = &g_257;
    unsigned char *l_352 = &g_84;
    char l_353 = 0xACL;
    unsigned *l_354 = &g_62;
    int *l_355 = &g_356;
    unsigned *l_366 = (void*)0;
    unsigned *l_367 = &l_349;
    unsigned short l_368 = 1UL;
    int l_369 = 0x5FA6978BL;
    char *l_370 = &l_353;
    (**l_327) &= ((*g_7) = ((((*l_320) &= l_319) ^ func_43((safe_mod_func_uint32_t_u_u((g_84 & 1UL), 0x6E749ECAL)), (*g_85), (*l_327), p_20, (*l_325))) , 0x42A023E6L));
    (*l_355) |= ((*l_325) < ((*l_354) = ((((l_329 != &l_326) , ((**l_327) = (((*l_320) = (safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((p_19 , (func_43((safe_lshift_func_uint8_t_u_s((!((*l_352) = ((safe_rshift_func_uint16_t_u_s((((*l_351) = ((safe_rshift_func_int8_t_s_u((((*g_85) = ((~(l_340 != ((*l_341) = &g_85))) ^ (~p_21))) > ((*l_325) , (safe_mod_func_uint32_t_u_u(((((safe_div_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((***l_329) |= p_19), 251UL)), 0x089151E2L)) && g_281) | g_62) , l_349), (*g_7))))), 1)) >= g_8)) >= g_131), p_21)) ^ p_19))), g_283)), l_353, &g_8, (*l_327), g_131) > p_21)), p_19)), 3))) == 0x9F6FL))) , 0x2AL) != 0UL)));
    (*l_355) = ((***l_329) && (safe_rshift_func_int8_t_s_s((((*l_325) && ((*l_370) = ((((p_19 | (((*l_367) |= ((*l_354) = ((((*g_7) = (safe_rshift_func_uint16_t_u_s(g_283, 2))) >= (-1L)) , func_22(((*l_327) = &g_131), &g_131, p_21)))) || 4294967295UL)) , p_19) < l_368) , l_369))) , g_62), p_21)));

    ;
    return p_20;


}







static unsigned func_22(int * p_23, int * p_24, unsigned p_25)
{
    char l_311 = (-6L);
    int *l_318 = &g_8;
    int **l_317 = &l_318;
    (*l_317) = func_26((func_43(p_25, (*g_85), &g_131, &g_131, l_311) <= (safe_mod_func_int32_t_s_s((~l_311), (((safe_lshift_func_int8_t_s_u(g_292, (safe_unary_minus_func_uint32_t_u((l_311 | l_311))))) , l_311) && g_281)))), l_311, p_23);

    ;
    (*l_317) = (void*)0;

    ;
    (*l_317) = p_24;

    ;
    return g_8;
}







static int * func_26(int p_27, unsigned char p_28, int * p_29)
{
    char l_309 = 8L;
    int *l_310 = &g_210;
    for (g_283 = 5; (g_283 != (-25)); g_283 = safe_sub_func_uint32_t_u_u(g_283, 4))
    {
        if (l_309)
            break;
    }
    (*l_310) = (*p_29);
    return p_29;


}







static short func_30(int * p_31, int * p_32, int p_33, int p_34)
{
    int *l_54 = &g_8;
    unsigned short *l_291 = &g_292;
    unsigned *l_294 = &g_62;
    unsigned **l_293 = &l_294;
    int *l_295 = (void*)0;
    int *l_296 = (void*)0;
    int *l_297 = &g_210;
    int *l_298 = (void*)0;
    char *l_305 = (void*)0;
    l_54 = func_35(&g_8, (((*g_85) = ((((*g_7) != (0x955AL | ((+0x41022496L) <= ((safe_rshift_func_int16_t_s_s(g_8, 2)) < func_43(func_49(g_8, l_54, &g_8, &p_34), p_33, &g_8, &g_8, g_86))))) , (void*)0) == &g_8)) , (-7L)), &g_8, (*l_54), g_8);

    ;
    g_131 = ((*l_297) = ((l_291 == ((*l_54) , &g_292)) < ((l_293 == (void*)0) && g_8)));
    (*l_297) ^= (safe_rshift_func_uint8_t_u_s((*g_85), p_34));
    for (g_103 = 0; (g_103 <= 29); g_103++)
    {
        int *l_303 = &g_8;
        int **l_304 = &l_298;
        int *l_306 = &g_131;
        (*l_306) ^= (func_49(g_283, l_303, ((*l_304) = &g_210), &g_210) > ((((p_34 || (((l_305 != l_305) > 0x8509249FL) | p_34)) >= g_257) , g_257) , p_33));

        ;
        return p_33;
    }
    return (*l_54);
}







static int * func_35(int * p_36, char p_37, int * p_38, unsigned char p_39, char p_40)
{
    int l_118 = 0x1765D423L;
    unsigned *l_127 = &g_62;
    unsigned l_128 = 0UL;
    int *l_129 = (void*)0;
    int *l_130 = &g_131;
    unsigned l_144 = 0x8C8AB594L;
    char *l_150 = &g_101;
    int l_197 = 0x201F268CL;
    unsigned short l_223 = 65535UL;
    int *l_261 = &g_210;
    unsigned char **l_277 = &g_85;
    int *l_288 = &l_197;
    for (g_103 = 0; (g_103 < 9); g_103++)
    {
        short l_115 = 0x9570L;
        int *l_117 = &g_8;
        int **l_116 = &l_117;
        (*l_116) = ((249UL & (l_115 & (*g_7))) , p_36);


        l_118 = (*l_117);
    }
    (*l_130) |= (safe_sub_func_int32_t_s_s((l_118 <= ((*p_38) && (safe_rshift_func_uint8_t_u_s((((void*)0 == &l_118) , (safe_add_func_int32_t_s_s((func_43((safe_mod_func_uint32_t_u_u(((*g_7) || 0x6325DDBFL), l_128)), p_40, &l_118, &g_8, l_118) > (-1L)), (*p_38)))), l_128)))), g_62));
    if ((p_40 , (*g_7)))
    {
        short l_132 = 0xA18FL;
        int l_133 = (-1L);
        int l_134 = 0xF0F6D163L;
        int l_135 = (-1L);
        unsigned l_149 = 4294967287UL;
        unsigned char l_167 = 5UL;
        unsigned l_178 = 4294967290UL;
        short l_188 = 4L;
        (*l_130) = (l_135 = (g_101 , (~(l_132 > (l_134 = l_133)))));
        if ((*p_36))
        {
            int *l_146 = &g_8;
            char *l_147 = &g_101;
            unsigned l_151 = 4294967295UL;
            short *l_153 = &l_132;
            short **l_152 = &l_153;
            int *l_159 = (void*)0;
            l_135 &= ((void*)0 != &g_84);
            if (((safe_lshift_func_int8_t_s_s((g_101 = (safe_sub_func_int16_t_s_s((((((*l_130) = (safe_div_func_int16_t_s_s((func_49(((func_49(p_40, p_36, &g_131, &l_118) ^ ((p_37 || (g_8 , (((*g_85) = (l_133 > (((safe_lshift_func_int16_t_s_s((g_101 && 6L), g_101)) == (*p_38)) > 248UL))) , 0x42CCL))) ^ g_131)) || (*g_85)), p_36, p_36, &g_131) || l_133), g_101))) , (*g_7)) == p_37) , p_39), g_101))), l_144)) ^ p_40))
            {
                int **l_145 = &l_129;
                (*l_145) = p_36;


                p_38 = l_146;

                ;
            }
            else
            {
                int l_148 = 0x25E2F7FAL;
                short ***l_156 = &l_152;
                l_151 = (l_147 != (l_148 , ((g_103 >= (p_40 == (*l_146))) , l_150)));
                (*l_156) = (g_154 = l_152);

                ;
                (*l_130) = func_43(l_148, (*l_146), &g_131, &l_118, (safe_div_func_uint8_t_u_u(((g_103 && func_43(p_37, l_148, p_36, l_159, l_148)) ^ l_135), l_148)));
            }



            l_134 = (*g_7);
        }
        else
        {
            short **l_175 = &g_155;
            short **l_176 = (void*)0;
            int l_177 = 0L;
            for (p_40 = (-15); (p_40 != 4); p_40++)
            {
                int *l_166 = &l_118;
                short ***l_168 = &g_154;
                unsigned char **l_179 = &g_85;
            }
        }


    }
    else
    {
        unsigned l_195 = 0x456BCAD5L;
        int *l_214 = &l_197;
        int **l_268 = (void*)0;
        int ***l_267 = &l_268;
        unsigned char **l_278 = &g_85;
        unsigned char *l_279 = &g_257;
        char *l_280 = &g_281;
        unsigned *l_282 = &l_144;
        unsigned l_284 = 0x83CA587EL;
        for (p_37 = 0; (p_37 == 20); p_37++)
        {
            int l_196 = 4L;
            short *l_208 = (void*)0;
            short *l_209 = (void*)0;
            l_195 = (*g_7);
            if (((g_210 ^= ((((g_103 = ((l_196 , l_197) , ((safe_sub_func_int16_t_s_s(((safe_div_func_uint16_t_u_u((p_39 == (((7UL > (g_101 = l_195)) ^ (((safe_rshift_func_int16_t_s_u((g_62 == (safe_add_func_int32_t_s_s((0xC09F95BEL < ((safe_rshift_func_uint16_t_u_u(0xCA79L, 4)) == ((((*l_130) &= 0xAC62A2EAL) || p_37) < g_84))), (*g_7)))), p_37)) <= p_37) & 65535UL)) | 0x684FL)), 65535UL)) == (*g_85)), l_196)) == 1UL))) & p_39) & g_86) && (*p_38))) | l_195))
            {
                char l_234 = 0x90L;
                unsigned **l_235 = &l_127;
                int *l_244 = &l_196;
                if ((safe_unary_minus_func_uint8_t_u((&g_62 == (void*)0))))
                {
                    int **l_227 = &l_130;
                    unsigned short *l_245 = &l_223;
                    unsigned char *l_256 = &g_257;
                    for (l_118 = 0; (l_118 >= 5); l_118++)
                    {
                        int **l_215 = &l_129;
                        unsigned **l_218 = &l_127;
                        int *l_224 = &l_196;
                        int *l_225 = &g_210;
                        int **l_226 = &l_130;
                        (*l_215) = l_214;

                        ;
                        (*l_225) &= ((*l_224) &= ((*l_214) = ((safe_sub_func_int32_t_s_s(0L, (*g_7))) && (((*l_218) = p_36) != ((safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((l_223 , (p_37 || (*l_129))), (((*l_150) = (*l_130)) && (*l_130)))), 0x2C41L)) , (void*)0)))));


                        (*l_226) = ((*l_215) = &l_196);

                        ;
                        ;
                        return &g_131;


                    }
                    (*l_227) = &g_131;
                    (*l_214) |= (safe_mod_func_int32_t_s_s((((*l_245) = (safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((&g_85 != &g_85) | l_234), 2)), (((l_235 != ((safe_div_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u((func_43(p_37, (*g_85), l_214, l_244, g_86) != p_40), (*g_85))) <= 0x66L), (**l_227))), 0xFD661819L)), p_39)) , l_235)) , (-5L)) == p_37)))) == 65535UL), l_196));
                    (*l_244) = (((safe_add_func_uint8_t_u_u(func_43(((safe_rshift_func_uint16_t_u_s((0xB660L && (((**l_227) <= ((func_43(func_43(p_37, ((*l_256) |= (func_43(((safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s(p_37, p_40)), (((*g_85) || (*l_214)) && p_40))) && (safe_mod_func_uint32_t_u_u(0x275D2521L, g_84))), p_39, p_36, &g_131, (**l_227)) > 0UL)), &g_8, &l_197, p_37), (*g_85), l_214, &l_197, p_40) , (*p_38)) > (*l_130))) < (*g_85))), (*l_214))) , p_40), (*g_85), &l_196, p_36, g_8), g_84)) | (**l_227)) && l_196);
                }
                else
                {
                    char l_258 = 0L;
                    int **l_262 = &l_244;
                    (*l_261) = ((l_258 == (*l_244)) , ((func_43(p_39, (*l_130), ((((+((func_43((((safe_rshift_func_int8_t_s_u((g_86 ^ func_43(p_39, (*l_214), l_261, &l_196, l_258)), 2)) , p_40) < (-9L)), l_196, p_36, p_38, p_37) ^ p_37) ^ p_40)) , g_131) >= p_37) , &g_131), p_38, p_40) != g_8) != (*g_85)));
                    (*l_262) = &g_210;

                    ;
                }

                ;
                if ((*l_244))
                    continue;
            }
            else
            {
                (*l_261) = (*l_214);
            }
        }
        if ((g_283 |= (safe_mod_func_int16_t_s_s(func_49(((*l_282) = (safe_add_func_uint8_t_u_u((((p_37 , &g_7) != ((*l_267) = &l_214)) & func_49((((((*l_261) = (func_43((((*l_150) = (safe_rshift_func_uint16_t_u_u(g_62, 15))) == ((*g_85) = (*l_130))), p_39, p_36, ((((*l_280) = (((safe_lshift_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(((*l_279) = (l_277 == ((g_103 >= (*l_261)) , l_278))), g_84)), p_39)) ^ g_210) != p_37), p_40)) <= 0xDBF3A560L) , g_131)) , g_8) , &g_131), g_131) | g_66)) , 0x56L) < g_62) , 4294967288UL), &g_8, &l_118, &l_197)), 0x03L))), &g_8, &g_8, &g_131), g_8))))
        {
            (*l_268) = &g_131;

            ;
            (*l_268) = &g_131;
            (*l_214) = l_284;
        }
        else
        {
            unsigned l_287 = 0x20AB7912L;
            (*l_268) = p_38;


            (*l_261) = ((safe_lshift_func_uint16_t_u_u(g_84, (l_287 | (*g_85)))) != p_37);
            (*l_268) = l_288;

            ;
            for (l_128 = 5; (l_128 != 6); l_128++)
            {
                (*l_130) = ((*l_214) = l_287);
            }
        }

        ;
        ;
        (**l_268) ^= (*p_38);
    }


    return p_36;


}







static unsigned short func_43(short p_44, unsigned char p_45, int * p_46, int * p_47, int p_48)
{
    unsigned l_94 = 0xF6CFD11EL;
    int *l_99 = &g_8;
    char *l_100 = &g_101;
    int *l_102 = (void*)0;
    int l_110 = 3L;
    unsigned l_111 = 0xC7FA1D57L;
    int *l_112 = &l_110;
    g_103 = ((l_94 & (l_94 != (safe_mod_func_int16_t_s_s(l_94, (safe_mod_func_int32_t_s_s((-4L), l_94)))))) <= ((((*l_100) = g_62) & p_45) >= (*g_85)));
    l_111 = (l_110 = (*g_7));
    (*l_112) = (g_93 , 0xA62FBF91L);
    return g_8;
}







static short func_49(unsigned p_50, int * p_51, int * p_52, int * p_53)
{
    char l_69 = 0x41L;
    int *l_79 = &g_8;
    unsigned char *l_87 = &g_86;
    for (p_50 = (-7); (p_50 < 35); p_50 = safe_add_func_uint8_t_u_u(p_50, 6))
    {
        char l_57 = 0xB9L;
        int l_59 = (-9L);
        int **l_80 = &l_79;
        unsigned char *l_83 = &g_84;
        int l_90 = 0x72CD76E6L;
        unsigned *l_91 = &g_62;
        short *l_92 = &g_93;
        if ((g_8 , l_57))
        {
            unsigned l_58 = 0xDC23988FL;
            (*p_53) &= (*p_51);
            l_59 ^= l_58;
        }
        else
        {
            short *l_65 = &g_66;
            int l_78 = 0x5E948ECAL;
            for (l_59 = 0; (l_59 == 18); l_59 = safe_add_func_uint8_t_u_u(l_59, 3))
            {
                (*p_53) = (*p_53);
                g_62 &= (*g_7);
            }
            (*p_53) &= (((safe_sub_func_int16_t_s_s((~p_50), ((((*l_65) = 1L) >= (safe_rshift_func_uint16_t_u_s(((l_69 , (safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u((l_59 & (p_50 == (p_50 != (l_65 != (void*)0)))), (safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u((l_78 || p_50), 0x874D2D97L)), p_50)))), 5))) && g_62), 8))) , l_78))) & (-1L)) ^ 0xAFL);
        }
        (*l_80) = l_79;
        (*p_53) &= (((((*l_83) = p_50) <= (&g_7 == &g_7)) > ((l_87 = g_85) != (void*)0)) > (((*l_92) |= ((g_66 , (0x0F9AL != (safe_div_func_uint32_t_u_u(((*l_91) &= (((((((l_90 < (**l_80)) | 0x547EL) ^ (**l_80)) , g_66) || p_50) && (*g_7)) > (**l_80))), 4L)))) > (*l_79))) , p_50));
        (*p_53) ^= (*g_7);
    }


    return p_50;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    transparent_crc(g_419, "g_419", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
