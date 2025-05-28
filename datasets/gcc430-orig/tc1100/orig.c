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



static int g_2 = 9L;
static int g_6 = 0L;
static int *g_26 = &g_6;
static int **g_25 = &g_26;
static short g_113 = (-9L);
static int g_179 = 0xC869DD98L;
static const int *g_334 = &g_179;
static volatile char g_339 = (-2L);



static unsigned char func_1(void);
static unsigned func_7(int p_8);
static int * func_11(int * p_12, const unsigned p_13, unsigned char p_14);
static int * func_15(int * p_16, const int p_17, int p_18, int * p_19, const int p_20);
static const int func_21(int * const p_22);
static int * func_27(unsigned char p_28, unsigned p_29);
static const int * func_43(int * p_44, unsigned p_45, int *** p_46, unsigned char p_47);
static int * func_48(int * p_49, const int * p_50, int ** p_51);
static int * func_52(int p_53);
static int * func_54(short p_55, unsigned p_56);
static unsigned char func_1(void)
{
    char l_9 = 0L;
    int ***l_342 = &g_25;
    unsigned l_343 = 0x46EA5D3AL;
    int l_348 = 0xAD98337AL;
    unsigned l_404 = 0x60842B8AL;
    int * const * const l_442 = &g_26;
    int l_465 = 0x41361386L;
    int l_471 = 1L;
    const unsigned l_472 = 0x81259CDCL;
    int *l_501 = &g_2;
    unsigned short l_505 = 0xA4F5L;
    for (g_2 = 24; (g_2 <= 1); --g_2)
    {
        int *l_5 = &g_6;
        (*l_5) = 0xE56F9B2CL;
    }
    if ((((func_7(l_9) <= l_9) > ((safe_lshift_func_int16_t_s_u((-1L), (g_339 >= 1UL))) | (-10L))) ^ l_9))
    {
        int * const l_347 = &g_2;
        char l_363 = 1L;
        (*g_25) = (*g_25);
        if ((safe_sub_func_uint16_t_u_u((l_342 == (void*)0), ((&g_25 != l_342) ^ l_343))))
        {
            int l_346 = 8L;
            const unsigned l_362 = 1UL;
            int *l_366 = &g_179;
            unsigned l_370 = 1UL;
            unsigned l_394 = 1UL;
            int * const *l_414 = (void*)0;
            int * const **l_413 = &l_414;
            (*g_25) = (*g_25);
            (**l_342) = func_48((**l_342), (*g_25), &g_26);
            if ((func_21(l_347) > l_348))
            {
                unsigned l_352 = 4294967295UL;
                for (g_179 = 0; (g_179 < 22); g_179++)
                {
                    short l_351 = 0xB11EL;
                    unsigned short l_361 = 8UL;
                    (*l_347) = 0x4177D834L;
                    if (l_351)
                    {
                        (**l_342) = (*g_25);
                        (*l_347) = l_346;
                    }
                    else
                    {
                        int ** const l_353 = &g_26;
                        int ***l_354 = &g_25;
                        if (l_352)
                            break;
                        (*l_354) = l_353;
                        (*l_353) = func_11((*g_25), (*l_347), l_352);
                        (*l_347) = (safe_mod_func_uint32_t_u_u(((l_352 < (((((safe_rshift_func_uint8_t_u_s((g_113 & g_113), g_179)) || ((func_21((*g_25)) <= (safe_lshift_func_int8_t_s_s(l_351, ((((void*)0 == &g_25) != 0xC9L) == g_6)))) < l_361)) == l_362) < 0x90E3L) | 1L)) && g_113), l_363));
                    }
                    (*l_347) = g_2;
                    (*l_347) = l_362;
                }
            }
            else
            {
                const int *l_367 = &g_179;
                int l_416 = 0x08A8C2A3L;
                if ((safe_rshift_func_int8_t_s_s(g_179, ((l_362 == func_21(func_48(l_366, l_367, (*l_342)))) && 4294967287UL))))
                {
                    short l_378 = 0x9B82L;
                    (*l_366) = (safe_mul_func_uint16_t_u_u(((255UL < ((void*)0 != &g_25)) < l_370), (safe_sub_func_uint8_t_u_u((((func_21(func_48(l_366, l_367, &g_26)) >= g_113) && 0x45L) || 0UL), g_2))));
                    (*g_25) = func_11(l_366, g_2, (*l_367));

                    ;
                    (**g_25) = ((*l_367) <= (safe_rshift_func_int8_t_s_s((*l_366), 7)));
                    (*l_347) = (0xCF46E8A0L & ((safe_sub_func_int8_t_s_s(((!g_113) != (+((((void*)0 != &g_26) < l_378) & (*l_366)))), (g_2 < (safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(((*l_347) > 0x4B32C98BL), (*l_367))), 12))))) <= g_6));
                }
                else
                {
                    int *l_395 = &g_6;
                    for (l_348 = (-24); (l_348 >= 11); ++l_348)
                    {
                        int l_391 = 0L;
                        (*l_347) = (safe_mul_func_uint8_t_u_u((l_391 <= ((*l_347) == ((&g_26 == (*l_342)) == func_21((*g_25))))), 0xDAL));
                        return g_339;
                    }
                    (**l_342) = (*g_25);
                    for (l_363 = 0; (l_363 >= 18); l_363++)
                    {
                        (**l_342) = (*g_25);
                        if (l_394)
                            continue;
                        (**l_342) = (*g_25);
                        l_366 = func_11(l_395, (safe_sub_func_uint8_t_u_u(0UL, (*l_367))), g_2);

                        ;
                    }

                    ;
                    if ((*l_367))
                    {
                        short l_405 = 0x38F8L;
                        int * const l_410 = (void*)0;
                        int **l_415 = &g_26;
                        l_405 = (*l_395);
                        (*l_395) = ((((*l_347) <= (safe_mod_func_uint8_t_u_u(((g_339 >= (0x3B88D473L > ((*l_366) > 0x951BL))) <= ((*l_347) != (l_405 == (g_113 > (((safe_add_func_uint32_t_u_u((func_21(l_410) ^ (*l_367)), (*l_347))) >= g_2) == g_6))))), g_179))) != 0UL) >= g_2);
                        (*l_366) = ((*l_347) != (*l_347));
                        l_416 = ((safe_mod_func_int8_t_s_s((&g_25 != l_413), g_179)) != ((l_415 == &l_395) < 1L));
                    }
                    else
                    {
                        const short l_417 = 0xD43CL;
                        int l_418 = 4L;
                        (*g_25) = l_347;

                        ;
                        l_418 = (**g_25);
                    }
                }

                ;
            }

            ;
        }
        else
        {
            (*g_25) = func_54((g_339 < 1UL), g_179);

            ;
            (**g_25) = (-9L);
            (***l_342) = (*g_26);
        }
        for (l_363 = 0; (l_363 >= 18); ++l_363)
        {
            short l_421 = 4L;
            if (l_421)
                break;
        }
        if (((*g_25) == (*g_25)))
        {
            return g_6;
        }
        else
        {
            (*l_347) = (safe_rshift_func_uint16_t_u_s(g_113, 10));
        }
    }
    else
    {
        short l_426 = 0L;
        unsigned l_457 = 1UL;
        int * const l_458 = &g_2;
        for (g_2 = 0; (g_2 == 14); g_2 = safe_add_func_int32_t_s_s(g_2, 5))
        {
            return l_426;
        }
        for (l_404 = (-13); (l_404 < 53); l_404 = safe_add_func_uint32_t_u_u(l_404, 2))
        {
            for (l_426 = 0; (l_426 > (-2)); --l_426)
            {
                int * const l_439 = &g_179;
                (*g_25) = (*g_25);
                (*l_439) = (((g_113 == ((safe_mod_func_uint8_t_u_u(l_426, (safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(func_21(func_54(g_339, g_113)), g_113)), func_21(l_439))))) <= g_179)) || 0xFAF3L) <= 65533UL);

                ;
                if ((safe_mul_func_int8_t_s_s(g_2, ((&g_334 == l_442) <= (safe_add_func_int16_t_s_s((***l_342), (safe_add_func_int16_t_s_s(g_113, (safe_add_func_uint8_t_u_u(g_2, (~g_339)))))))))))
                {
                    (**l_342) = (*g_25);
                    return (*l_439);
                }
                else
                {
                    char l_449 = 0x0EL;
                    (***l_342) = l_449;
                    (**l_342) = (void*)0;

                    ;
                    for (l_348 = (-21); (l_348 >= 9); ++l_348)
                    {
                        int *l_452 = &g_179;
                        l_452 = (*g_25);

                        ;
                    }
                    (*g_25) = (void*)0;
                }

                ;
                for (g_179 = 2; (g_179 > 29); g_179++)
                {
                    int *l_455 = &g_6;
                    int **l_456 = &g_26;
                    (*g_25) = l_455;

                    ;
                    (*l_456) = l_439;

                    ;
                    (**l_342) = (**l_342);
                }

                ;
            }
        }
        g_6 = l_426;
        g_179 = (func_21((*g_25)) ^ func_21(l_458));
    }

    ;
    ;
    if ((0xAF5E4E25L && g_179))
    {
        unsigned l_470 = 0x2F08D157L;
        char l_473 = 4L;
        (*g_25) = (void*)0;

        ;
        (**l_342) = func_11(func_15(func_15(func_54(((safe_sub_func_uint32_t_u_u(((~(safe_mod_func_int16_t_s_s(g_6, ((safe_sub_func_int8_t_s_s(((l_465 ^ (((-7L) ^ (safe_lshift_func_uint16_t_u_u(g_339, 14))) | func_21((**l_342)))) >= (0xB8L || (safe_rshift_func_int16_t_s_s((&l_442 != &g_25), l_470)))), 1L)) && l_471)))) & l_472), g_6)) || 0x5CL), g_2), g_179, g_2, &g_179, g_113), g_179, l_473, &g_179, g_2), g_2, l_470);

        ;
    }
    else
    {
        int l_474 = (-10L);
        int *l_488 = &g_2;
        short l_490 = 0x982EL;
        const unsigned char l_502 = 6UL;
        if (l_474)
        {
            int *l_480 = (void*)0;
            int l_492 = 1L;
            for (g_2 = 0; (g_2 <= (-28)); g_2 = safe_sub_func_int32_t_s_s(g_2, 1))
            {
                unsigned char l_481 = 0x8EL;
                const int **l_487 = &g_334;
                const int ***l_486 = &l_487;
                int l_489 = 0x9A8B86CEL;
                int *l_491 = &l_489;
                for (l_343 = 0; (l_343 >= 3); l_343 = safe_add_func_int32_t_s_s(l_343, 4))
                {
                    int * const l_479 = &g_2;
                    l_480 = l_479;

                    ;
                    g_6 = l_481;
                }
                g_179 = (safe_sub_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u((0L == g_2), 6)) >= (g_113 < g_6)) | (l_486 != &l_487)), g_339));
                l_489 = (l_488 == (void*)0);
                (*l_491) = ((func_21((*g_25)) < g_179) != ((l_490 == g_2) == (~func_21(l_480))));
            }

            ;
            if ((l_492 ^ (*l_488)))
            {
                (*g_25) = (*g_25);
                (*l_488) = (safe_unary_minus_func_uint32_t_u(0xCD704922L));
                (*l_488) = l_492;
            }
            else
            {
                (*l_488) = func_21(l_488);
                (*l_488) = 0L;
            }
        }
        else
        {
            int *l_496 = &g_179;
            (*l_488) = (safe_sub_func_int16_t_s_s(0x63A2L, ((*g_25) == (*l_442))));
            (**l_342) = func_48(l_496, (*g_25), &l_488);

            ;
            l_496 = l_496;
            return (*l_488);
        }
        if ((+((safe_sub_func_int16_t_s_s(g_6, ((((safe_lshift_func_uint8_t_u_u(0x16L, (func_21((*g_25)) & (*l_488)))) == ((*g_25) != (*g_25))) < (g_2 == func_21((*g_25)))) || l_404))) | g_339)))
        {
            (*g_25) = func_11(l_501, g_113, (~(func_21((*g_25)) >= (*l_501))));

            ;
            (*g_25) = (**l_342);
        }
        else
        {
            (*l_488) = (0xC2E72DC9L ^ l_502);
            (*l_488) = (-4L);
        }
    }
    (*l_501) = ((safe_rshift_func_int8_t_s_s(l_505, 4)) & (!g_339));
    return g_179;
}







static unsigned func_7(int p_8)
{
    int *l_10 = (void*)0;
    int l_275 = 0L;
    const unsigned l_278 = 7UL;
    int *l_292 = &g_179;
    int ***l_329 = &g_25;
    l_10 = &g_2;

    ;
    (*g_25) = func_11(func_15(l_10, func_21(l_10), (g_25 == &l_10), func_27((safe_unary_minus_func_uint16_t_u((safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(0xC7F0L, ((p_8 != (safe_rshift_func_int16_t_s_u(((func_21(l_10) || p_8) > g_6), (*l_10)))) & (*l_10)))), g_2)))), p_8), p_8), p_8, l_275);

    ;
    for (g_113 = 29; (g_113 >= (-25)); g_113 = safe_sub_func_int32_t_s_s(g_113, 1))
    {
        int *l_281 = &g_2;
        if ((+func_21(func_15((*g_25), l_278, (safe_sub_func_uint8_t_u_u((7L < g_2), (&l_10 != &l_10))), l_281, p_8))))
        {
            char l_285 = 5L;
            l_10 = (*g_25);
            (*l_281) = (safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint16_t_u_s(((*l_10) || l_285), 13))));
            (*l_281) = (~((*l_10) == g_179));
            l_10 = func_15(l_10, (*l_281), ((func_21((*g_25)) > (*l_281)) >= func_21((*g_25))), l_281, p_8);
        }
        else
        {
            return g_2;
        }
        (**g_25) = (((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((~g_2), 2)), p_8)) && (0xF14AL == (safe_add_func_int8_t_s_s(func_21(l_10), g_179)))) <= (((*l_10) ^ func_21(func_48(l_292, func_48((*g_25), (*g_25), &l_281), &g_26))) & (-1L)));
    }
    for (g_6 = (-22); (g_6 >= 10); g_6 = safe_add_func_uint16_t_u_u(g_6, 8))
    {
        int l_297 = 1L;
        unsigned l_306 = 0x0628882CL;
        char l_311 = 0x1BL;
        int ***l_312 = &g_25;
        const int *l_314 = &g_6;
        const int **l_313 = &l_314;
        char l_327 = 1L;
        (*l_313) = func_43(func_15(l_292, ((safe_sub_func_int32_t_s_s(l_297, (safe_lshift_func_uint16_t_u_u(0xF650L, (+((p_8 >= ((safe_mul_func_int8_t_s_s(p_8, (safe_mod_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_s(1L, p_8)) ^ l_306) <= ((safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(func_21(func_54(p_8, g_6)), (-1L))), 0xFBL)) <= p_8)), g_2)))) > p_8)) & 0x6F183749L)))))) < 4294967290UL), p_8, l_292, g_113), l_311, l_312, p_8);

        ;
        ;
        if ((((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(func_21((**l_312)), ((((safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s((!func_21(l_10)), (-6L))), 0xFDEBC78CL)) ^ (*l_292)) <= ((*l_292) || ((safe_add_func_int8_t_s_s(0x8CL, 0x4BL)) | p_8))) != (*l_10)))), l_327)), p_8)) == p_8) & p_8))
        {
            char l_328 = 0L;
            g_334 = func_43((*g_25), p_8, l_329, (((safe_lshift_func_int16_t_s_s(p_8, ((safe_add_func_uint8_t_u_u((g_2 == (~func_21(func_48((**l_329), (**l_329), (*l_329))))), 0xACL)) & l_328))) >= 0x5622L) < p_8));
            if (p_8)
                continue;
        }
        else
        {
            (**l_312) = func_54(g_179, ((*l_292) >= (p_8 == p_8)));

            ;
            if (p_8)
                continue;
            (*l_292) = (safe_rshift_func_int16_t_s_u(0x1127L, 8));
        }

        ;
    }

    ;
    ;
    return (*l_292);
}







static int * func_11(int * p_12, const unsigned p_13, unsigned char p_14)
{
    (*g_25) = (*g_25);
    return p_12;


}







static int * func_15(int * p_16, const int p_17, int p_18, int * p_19, const int p_20)
{
    int l_269 = 0L;
    int ***l_270 = (void*)0;
    const int **l_272 = (void*)0;
    const int ***l_271 = &l_272;
    (*g_25) = p_19;

    ;
    (*g_25) = p_16;
    (*l_271) = (void*)0;
    (*g_26) = ((8UL < 65535UL) != (func_21((*g_25)) || ((((((*l_271) == (void*)0) == ((-6L) == (~(&g_26 != (*l_271))))) ^ p_20) & 1UL) & p_17)));
    return (*g_25);


}







static const int func_21(int * const p_22)
{
    int * const *l_24 = (void*)0;
    int * const **l_23 = &l_24;
    (*l_23) = (void*)0;
    return g_6;
}







static int * func_27(unsigned char p_28, unsigned p_29)
{
    const int l_37 = 3L;
    int *l_38 = &g_2;
    const int *l_268 = &g_6;
    const int **l_267 = &l_268;
    (*l_38) = l_37;
    for (p_29 = 3; (p_29 < 57); p_29 = safe_add_func_uint8_t_u_u(p_29, 1))
    {
        const int *l_141 = &l_37;
        const int * const l_152 = &g_6;
        int l_182 = (-1L);
        for (p_28 = 8; (p_28 < 10); p_28 = safe_add_func_uint32_t_u_u(p_28, 1))
        {
            const int **l_149 = &l_141;
        }
        if ((safe_add_func_uint16_t_u_u((*l_141), (*l_38))))
        {
            (*l_38) = ((((void*)0 != l_152) == ((safe_mul_func_int16_t_s_s(p_28, ((func_21((*g_25)) > (&l_141 == (void*)0)) == (safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(p_28, 4)), ((safe_add_func_uint32_t_u_u(((+(*l_152)) && (*l_152)), (*l_152))) <= p_28)))))) < g_2)) || 0x9DCF4DCFL);
        }
        else
        {
            unsigned char l_173 = 0x36L;
            (*g_25) = func_54(g_113, p_28);

            ;
            for (g_2 = (-15); (g_2 > 13); g_2 = safe_add_func_int32_t_s_s(g_2, 1))
            {
                int *l_181 = &g_179;
                for (p_28 = 9; (p_28 == 24); ++p_28)
                {
                    int l_180 = 5L;
                    if ((safe_sub_func_uint8_t_u_u(1UL, ((safe_add_func_int16_t_s_s((((void*)0 != &g_26) || (safe_mul_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(p_29, (l_173 | g_2))) | (safe_rshift_func_uint16_t_u_u(g_2, 0))), (safe_rshift_func_int8_t_s_s(g_2, 2))))), p_29)) & (*l_38)))))
                    {
                        int *l_178 = &g_179;
                        (*l_178) = (**g_25);
                        if (l_180)
                            break;
                        (*l_178) = (((*g_25) == l_152) >= p_28);
                    }
                    else
                    {
                        (*g_25) = l_181;

                        ;
                    }
                }
            }

            ;
        }
        l_182 = (g_2 < ((void*)0 != &l_37));
        (*g_25) = (*g_25);
    }

    ;
    if (p_29)
    {
        (*g_25) = (void*)0;

        ;
    }
    else
    {
        int * const l_186 = (void*)0;
        const int *l_193 = &g_2;
        const int * const *l_192 = &l_193;
        for (p_29 = 0; (p_29 >= 22); ++p_29)
        {
            int l_187 = 0x6BE7C8CAL;
            const int *l_191 = &g_2;
            const int * const *l_190 = &l_191;
            const unsigned l_237 = 0x84D33C81L;
            (*g_25) = (*g_25);
        }
        l_38 = func_52((*l_38));


        ;
        for (p_29 = 0; (p_29 == 15); p_29 = safe_add_func_int8_t_s_s(p_29, 4))
        {
            int l_253 = 0x6B29E6F0L;
            int **l_260 = &l_38;
            int ***l_261 = &l_260;
            unsigned short l_262 = 0UL;
            (*g_25) = func_48(l_38, &l_37, l_260);

            ;
            (*l_261) = (void*)0;

            ;
            (*g_25) = (*g_25);
            if (((**l_192) <= l_262))
            {
                const int **l_263 = &l_193;
                short l_264 = 0xDE75L;
                const int *l_265 = &g_2;
                int *l_266 = &g_179;
                (*l_263) = (*l_192);
                l_264 = p_29;
                (*l_266) = func_21(func_48(l_38, l_265, &g_26));
            }
            else
            {
                (*l_261) = (*l_261);
            }
        }
    }


    ;
    (*l_267) = &l_37;

    ;
    return l_38;


}







static const int * func_43(int * p_44, unsigned p_45, int *** p_46, unsigned char p_47)
{
    for (p_45 = (-28); (p_45 >= 30); p_45++)
    {
        int *l_148 = (void*)0;
        (**p_46) = (void*)0;

        ;
        for (g_2 = (-12); (g_2 > (-18)); g_2 = safe_sub_func_uint8_t_u_u(g_2, 3))
        {
            (*g_25) = l_148;
        }
        (**p_46) = l_148;
        (*g_25) = (void*)0;
    }
    return p_44;


}







static int * func_48(int * p_49, const int * p_50, int ** p_51)
{
    return p_49;


}







static int * func_52(int p_53)
{
    unsigned l_57 = 4294967295UL;
    int ** const l_64 = &g_26;
    int *l_87 = &g_2;
    int l_140 = 0x257E1E0AL;
    if ((p_53 >= 1L))
    {
        unsigned l_61 = 1UL;
        (*g_25) = func_54((&g_25 != (void*)0), l_57);

        ;
        (*g_25) = func_54((safe_add_func_int8_t_s_s(l_61, l_57)), g_2);
    }
    else
    {
        unsigned l_65 = 4294967294UL;
        int **l_70 = &g_26;
        if ((&g_26 != (void*)0))
        {
            int **l_66 = &g_26;
            int *l_69 = &g_2;
            g_2 = (safe_add_func_int16_t_s_s(((&g_26 == l_64) == (g_6 ^ l_65)), (8UL < (**l_64))));
            (*l_69) = ((((void*)0 != l_66) < ((void*)0 != &l_66)) & (g_6 | (p_53 ^ (safe_rshift_func_int16_t_s_s(func_21((*g_25)), (g_2 >= g_2))))));
            (*g_25) = &p_53;

            ;
            if ((*l_69))
            {
                (**l_66) = (**g_25);
            }
            else
            {
                short l_75 = 0xE4F3L;
                int *l_76 = &g_6;
                (*l_69) = ((void*)0 != &l_64);
                (**l_64) = ((**l_64) & p_53);
                l_70 = &g_26;
                if ((((p_53 | (((func_21((*g_25)) ^ ((safe_mul_func_uint8_t_u_u(((p_53 == func_21((*l_70))) >= (safe_rshift_func_int8_t_s_s((p_53 & (((1UL != l_75) & 65535UL) >= g_6)), 0))), (-1L))) <= (**l_70))) <= 0xCB4D6242L) <= g_6)) | (**l_64)) < 1L))
                {
                    return l_76;



                }
                else
                {
                    unsigned l_84 = 4294967289UL;
                    if ((safe_rshift_func_int8_t_s_u(0xBBL, 1)))
                    {
                        int ***l_79 = (void*)0;
                        int ***l_80 = (void*)0;
                        int ***l_81 = &l_70;
                        (*g_25) = (*l_64);
                        (*l_81) = &l_76;

                        ;
                        (*l_69) = 0x8BDC662BL;
                        (*g_25) = func_54(func_21(func_54(p_53, p_53)), (func_21(&g_6) >= (p_53 == (safe_mul_func_uint8_t_u_u(0x69L, ((g_2 ^ (-1L)) >= (**l_70)))))));

                        ;
                    }
                    else
                    {
                        (*l_64) = func_54((**l_64), p_53);

                        ;
                        (*l_64) = &p_53;

                        ;
                    }

                    ;
                    ;
                    if ((l_84 && (safe_rshift_func_int16_t_s_u((-1L), 9))))
                    {
                        (*l_64) = l_87;

                        ;
                        return (*g_25);


                    }
                    else
                    {
                        unsigned l_88 = 0x49D53036L;
                        int * const *l_98 = &l_87;
                        int * const **l_97 = &l_98;
                        l_88 = (g_6 & ((*g_25) == &p_53));
                        (*l_69) = (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(0UL, (safe_mod_func_int16_t_s_s(l_84, (((safe_add_func_int32_t_s_s(l_84, (p_53 | (*l_76)))) <= (1UL < (l_97 != &l_66))) & (safe_rshift_func_int16_t_s_s((g_6 > p_53), g_2))))))), g_2));
                    }
                    if ((**g_25))
                    {
                        int ***l_101 = &l_66;
                        (*l_101) = &g_26;
                        p_53 = p_53;
                    }
                    else
                    {
                        const int *l_108 = &g_2;
                        const int **l_107 = &l_108;
                        const int *** const l_106 = &l_107;
                        (**l_106) = func_54((safe_sub_func_uint8_t_u_u((((p_53 >= (safe_sub_func_int8_t_s_s((**l_64), 6L))) == (g_2 > (l_106 == &g_25))) && 1UL), ((p_53 == ((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((**l_107), g_2)), p_53)) & l_84)) <= g_113))), g_6);

                        ;
                        ;
                        (*l_87) = (safe_rshift_func_uint8_t_u_u((((((*g_25) == (void*)0) > (safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((l_84 > (((-7L) ^ (safe_lshift_func_int16_t_s_s(g_2, 5))) | (-2L))) >= func_21(l_76)), (safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u((**l_107), 65535UL)), (*l_76))), p_53)) <= 9UL), g_6)))), g_2))) & (**l_70)) == 0x7618L), p_53));
                    }
                    for (p_53 = 0; (p_53 < (-10)); --p_53)
                    {
                        (*l_69) = func_21(&p_53);
                        if ((*g_26))
                            continue;
                    }
                }

                ;
                ;
            }

            ;

        }
        else
        {
            (*l_87) = func_21((*g_25));
            (*l_87) = (**g_25);
        }

        ;

    }

    ;
    (*l_64) = func_54((g_6 < ((safe_rshift_func_uint8_t_u_u((**l_64), 6)) || (*g_26))), func_21((*g_25)));

    ;
    (*l_64) = func_54((**l_64), (*l_87));
    p_53 = ((safe_add_func_uint32_t_u_u((g_113 > g_2), (+(**l_64)))) <= (safe_add_func_uint8_t_u_u((((**l_64) && func_21((*g_25))) == (*g_26)), (safe_mul_func_uint16_t_u_u(((func_21((*g_25)) > l_140) & 0x112DL), g_113)))));
    return (*g_25);


}







static int * func_54(short p_55, unsigned p_56)
{
    int *l_58 = &g_6;
    (*g_25) = l_58;

    ;
    return l_58;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
