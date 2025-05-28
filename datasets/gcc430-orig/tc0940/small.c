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
   char * f0;
   unsigned char f1;
   int f2;
   unsigned short f3;
   short f4;
};


static int g_29 = 0x37E0D1B7L;
static char g_51 = 3L;
static char *g_50 = &g_51;
static union U0 g_69 = {0};
static int g_73 = 9L;
static int *g_76 = &g_69.f2;
static int **g_167 = &g_76;
static int ***g_166 = &g_167;
static char g_238 = 0L;
static char **g_269 = &g_50;
static char ***g_268 = &g_269;
static union U0 *g_313 = &g_69;
static union U0 **g_312 = &g_313;
static int g_440 = 0xB1718F28L;
static char g_463 = 0x99L;
static char *g_499 = &g_463;
static int g_533 = (-1L);
static unsigned g_567 = 1UL;



static char func_1(void);
static int * func_2(int p_3, char * p_4, int * p_5);
static short func_6(int * p_7, unsigned p_8, unsigned char p_9, unsigned p_10, unsigned p_11);
static int * func_12(int * p_13);
static int * func_14(char * p_15, char * p_16, char * p_17);
static char * func_18(int p_19, char p_20, char * p_21, char * p_22);
static char func_26(unsigned char p_27, char * p_28);
static char * func_30(union U0 p_31, int * p_32);
static union U0 func_33(unsigned short p_34, unsigned short p_35, int * p_36, union U0 p_37, int * p_38);
static unsigned char func_47(char * p_48, short p_49);
static char func_1(void)
{
    unsigned short l_23 = 1UL;
    int *l_43 = (void*)0;
    union U0 l_44 = {0};
    char *l_462 = &g_463;
    char *l_464 = (void*)0;
    int **l_561 = &g_76;
    char l_575 = 0x6AL;
    l_43 = func_2(((-1L) | func_6(func_12(func_14(func_18(l_23, ((l_23 < l_23) ^ (0xC2L != func_26(g_29, func_30(func_33(l_23, ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u((((l_23 & (g_29 || l_23)) & g_29) == l_23), 6)), 2)) | 0x0DL), l_43, l_44, l_43), l_43)))), l_462, l_464), l_464, (**g_268))), g_29, g_463, g_533, g_29)), (**g_268), l_43);

    ;
        ;

    (*l_561) = l_43;
    if (l_23)
    {
        int *l_562 = &g_533;
lbl_569:
        (*l_561) = l_562;

        ;
        for (l_23 = 0; (l_23 <= 28); l_23++)
        {
            unsigned l_570 = 0xB418C892L;
            char ***l_576 = &g_269;
            for (g_440 = (-3); (g_440 == 3); g_440 = safe_add_func_int32_t_s_s(g_440, 3))
            {
                unsigned char l_568 = 0xC9L;
                l_568 = g_567;
                (*l_561) = (void*)0;

                ;
                if (g_238)
                    goto lbl_569;
                (*g_312) = (void*)0;

                ;
            }
            (*l_562) = (l_570 && (((safe_lshift_func_int16_t_s_u((&g_269 == &g_269), (safe_rshift_func_int16_t_s_s(((l_575 <= g_533) && (((**g_269) <= (+(g_567 >= (1UL | (&g_269 == l_576))))) >= g_533)), (*l_562))))) == g_73) <= 0x0BDAL));
        }

        ;
        (*l_562) = (*l_562);
        (*l_561) = l_562;

        ;
    }
    else
    {
        unsigned l_577 = 0xBA32330BL;
        int *l_578 = (void*)0;
        int *l_579 = &g_73;
        (*l_579) = l_577;
        (*g_268) = (*g_268);
        (*l_579) = func_26(func_47((**g_268), ((1UL != 0xEC0D51D8L) <= ((func_47((**g_268), g_73) ^ (0x69ADL & 0x4192L)) && func_47((**g_268), g_533)))), &l_575);
    }

    ;
    ;
    return (*g_50);
}







static int * func_2(int p_3, char * p_4, int * p_5)
{
    int **l_560 = &g_76;
    (*l_560) = p_5;
    return (*l_560);


}







static short func_6(int * p_7, unsigned p_8, unsigned char p_9, unsigned p_10, unsigned p_11)
{
    int **l_559 = &g_76;
    (*l_559) = (void*)0;

    ;
    return g_73;
}







static int * func_12(int * p_13)
{
    short l_473 = 0x42D9L;
    union U0 *l_474 = &g_69;
    int l_475 = 0L;
    int *l_476 = (void*)0;
    int l_502 = 0x96E67F9EL;
    int ***l_509 = &g_167;
    char *l_520 = &g_51;
    char *l_522 = &g_463;
    (*g_166) = &p_13;

    ;
    for (g_440 = 0; (g_440 == 24); ++g_440)
    {
        short l_471 = 0xED74L;
        char *l_472 = &g_463;
        union U0 *l_490 = &g_69;
        int *l_527 = (void*)0;
        unsigned l_557 = 4294967286UL;
        int l_558 = 0x3C37D1B6L;
    }
    (*g_76) = (***l_509);
    return p_13;



}







static int * func_14(char * p_15, char * p_16, char * p_17)
{
    int *l_466 = &g_73;
    return l_466;


}







static char * func_18(int p_19, char p_20, char * p_21, char * p_22)
{
    int *l_465 = &g_73;
    (**g_166) = l_465;

    ;
    return (*g_269);


}







static char func_26(unsigned char p_27, char * p_28)
{
    unsigned l_461 = 4294967295UL;
    return l_461;
}







static char * func_30(union U0 p_31, int * p_32)
{
    char ***l_314 = &g_269;
    int l_319 = 0x2A5CC3B0L;
    char *l_328 = (void*)0;
    union U0 **l_330 = &g_313;
    unsigned short l_369 = 0UL;
    int l_383 = 0L;
    int ***l_457 = &g_167;
    char *l_459 = &g_238;
    if (((l_314 == &g_269) != ((!(safe_mod_func_int32_t_s_s((func_47((**l_314), g_73) | ((safe_lshift_func_int8_t_s_u(l_319, 5)) || (!g_73))), l_319))) > (safe_rshift_func_int8_t_s_s(l_319, (*g_50))))))
    {
        char *l_322 = (void*)0;
        int l_323 = 0L;
        char ***l_324 = (void*)0;
        int *l_325 = &l_323;
        int *l_370 = (void*)0;
        int *l_371 = &l_319;
        if (((l_323 ^ (l_319 > 0xFEL)) == ((void*)0 != l_324)))
        {
            (*g_167) = &l_323;

            ;
            (**g_166) = (*g_167);
            return (*g_269);



        }
        else
        {
            union U0 **l_329 = &g_313;
            int l_331 = 0x75F05275L;
            char *l_342 = (void*)0;
            (*g_76) = l_319;
            if (((void*)0 != (**g_268)))
            {
                l_325 = (void*)0;

                ;
            }
            else
            {
                int l_353 = 1L;
                (***g_166) = ((void*)0 == (**g_268));
                for (l_319 = 0; (l_319 < 26); l_319 = safe_add_func_uint16_t_u_u(l_319, 1))
                {
                    (***g_166) = ((g_51 & (safe_div_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(g_29, (*l_325))), ((safe_sub_func_int8_t_s_s(l_331, g_238)) ^ (*l_325))))) || g_51);
                }
                for (l_331 = 0; (l_331 <= (-9)); l_331 = safe_sub_func_uint32_t_u_u(l_331, 2))
                {
                    return (*g_269);


                }
                if ((*l_325))
                {
                    char *l_340 = &g_238;
                    return l_340;


                }
                else
                {
                    unsigned short l_343 = 0xC13EL;
                    if ((&g_313 != &g_313))
                    {
                        union U0 ***l_341 = &g_312;
                        (**g_166) = p_32;

                        ;
                        (*l_341) = &g_313;
                        (*l_325) = l_319;
                        (*l_325) = ((*l_325) < (l_331 <= l_319));
                    }
                    else
                    {
                        (*l_325) = (*l_325);
                        (**g_166) = p_32;

                        ;
                    }

                    ;
                    (*l_325) = l_331;
                    (*l_325) = (safe_lshift_func_int8_t_s_s(((l_343 >= (0x0296L | (safe_lshift_func_uint8_t_u_s(((safe_unary_minus_func_uint8_t_u(0xBBL)) ^ ((0x9BL ^ func_47((**l_314), (func_47((*g_269), l_343) >= (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(0x2A8BL, l_353)), l_343))))) < 1UL)), 0)))) ^ 0x39L), (*l_325)));
                }

                ;
            }

            ;
            ;
        }

        ;
        ;
        l_319 = ((~(l_319 >= ((((safe_unary_minus_func_uint8_t_u(((void*)0 != (**l_314)))) & (&g_269 != &g_269)) ^ (((l_319 ^ (safe_rshift_func_int16_t_s_s(g_29, 6))) ^ ((l_319 | ((!g_73) < l_323)) >= (-8L))) < (***g_268))) == 0xB154L))) | 0x26FBL);
        (*l_371) = ((g_238 != ((!(safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u((((+func_47((**g_268), func_47((**g_268), g_51))) || (safe_add_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(func_47((**l_314), l_369), 0)), l_323)) < l_319), l_323))) ^ l_319), 9)), l_369))) & 0x97L)) > l_319);
        (*g_167) = &l_323;

        ;
    }
    else
    {
        unsigned char l_377 = 255UL;
        char *l_382 = &g_51;
        int *l_430 = (void*)0;
        char l_443 = 7L;
        if ((safe_rshift_func_uint16_t_u_u(((((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(0x17D2L)), l_377)) <= l_377) | (safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(0x2EL, 1)), l_377))) & ((func_47(l_382, l_377) & (0UL | 0xDD1FL)) || l_383)), 1)))
        {
            unsigned l_396 = 0x02124D56L;
            int l_397 = (-1L);
            char *l_403 = &g_51;
            for (l_369 = 0; (l_369 != 45); l_369++)
            {
                for (g_238 = 11; (g_238 == (-1)); g_238--)
                {
                    (*g_167) = (*g_167);
                }
                for (g_51 = (-15); (g_51 >= (-4)); g_51 = safe_add_func_int32_t_s_s(g_51, 2))
                {
                    for (l_383 = (-29); (l_383 == 10); l_383 = safe_add_func_int8_t_s_s(l_383, 3))
                    {
                        (*l_330) = (*g_312);
                    }
                    (*g_167) = (*g_167);
                    for (g_73 = 0; (g_73 == 4); g_73 = safe_add_func_uint8_t_u_u(g_73, 4))
                    {
                        (*g_312) = (*g_312);
                    }
                    return (**g_268);


                }
            }
            (**g_166) = (*g_167);
            l_397 = (safe_sub_func_int32_t_s_s(((l_396 && (l_377 >= func_47(l_382, l_396))) ^ (***g_268)), 0xC78DA438L));
            if ((safe_sub_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(0x41L)), (g_238 >= ((safe_sub_func_int16_t_s_s((!0L), func_47(l_403, (0xDF80AF4CL != (~((*g_50) || ((safe_add_func_uint8_t_u_u((func_47(l_403, l_377) && (***g_268)), g_238)) > 0x343DL))))))) && 0x3667L)))))
            {
                for (l_397 = (-11); (l_397 < 24); l_397 = safe_add_func_int8_t_s_s(l_397, 4))
                {
                    return (**l_314);


                }
                if ((safe_div_func_int8_t_s_s((~(func_47(l_403, g_73) == l_377)), l_377)))
                {
                    int l_410 = (-9L);
                    char *l_419 = &g_238;
                    p_31.f2 = l_410;


                                        for (g_238 = 16; (g_238 != (-15)); g_238 = safe_sub_func_uint16_t_u_u(g_238, 8))
                    {
                        (***g_166) = (safe_lshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((l_319 | 0xCAD5CFB6L) < (p_31.f1 | g_73)), 1L)), ((func_47(l_419, g_29) != (safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((safe_div_func_int32_t_s_s(((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((0L == 0xBBL) | 0xF9A677B1L), g_51)), 255UL)) && l_410), l_397)) || 1UL), 0x9DL)), p_31.f4))) | 65527UL))) | 0xBEAEL), 4));
                    }
                }
                else
                {
                    l_319 = l_377;
                }
                (**g_167) = (4UL & (l_396 || (**g_269)));
            }
            else
            {
                p_31.f2 = l_397;


                                (**g_166) = l_430;

                ;
                p_32 = (*g_167);

                ;
            }

            ;
        }
        else
        {
            unsigned l_435 = 0xE3AD17ADL;
            int l_436 = 1L;
            for (l_377 = 0; (l_377 > 21); l_377++)
            {
                unsigned char l_439 = 0x84L;
                for (g_238 = 0; (g_238 <= 3); g_238++)
                {
                    return l_382;


                }
                l_436 = (0xDCL == l_435);
                (**g_167) = (safe_sub_func_int8_t_s_s(l_439, g_440));
                l_443 = (safe_rshift_func_int8_t_s_u((&g_269 != &g_269), 2));
            }
            (*g_167) = l_430;

            ;
        }

        ;
    }


    for (g_238 = (-24); (g_238 <= 9); g_238++)
    {
        short l_450 = 0x7CCEL;
        int ***l_458 = &g_167;
        l_319 = (safe_sub_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_u(g_440, 12)) & l_369) & l_319), l_450));
        if ((safe_rshift_func_int16_t_s_s((&g_167 != (void*)0), (safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s((l_457 == &g_167), 9L)), (l_457 != l_458))))))
        {
            p_32 = p_32;
        }
        else
        {
            int *l_460 = &g_73;
            (*l_460) = func_47(l_459, g_238);
        }
    }
    (*g_167) = p_32;

    ;
    return (*g_269);


}







static union U0 func_33(unsigned short p_34, unsigned short p_35, int * p_36, union U0 p_37, int * p_38)
{
    char *l_68 = &g_51;
    int *l_72 = &g_73;
    char ***l_168 = (void*)0;
    unsigned short l_202 = 5UL;
    int l_253 = 0xDAF615AEL;
    int l_288 = 1L;
    union U0 *l_311 = &g_69;
    union U0 **l_310 = &l_311;
    if ((safe_add_func_uint8_t_u_u(func_47(g_50, p_35), (((safe_lshift_func_int16_t_s_u(func_47(l_68, g_29), 14)) | 1L) && (*g_50)))))
    {
        return g_69;


            }
    else
    {
        unsigned l_95 = 4294967290UL;
        int *l_125 = &g_73;
        char *l_127 = &g_51;
        unsigned short l_143 = 0UL;
        int **l_165 = &l_125;
        int ***l_164 = &l_165;
        unsigned char l_173 = 0x9FL;
        unsigned short l_203 = 0x98C0L;
        union U0 l_221 = {0};
        char **l_259 = (void*)0;
        char ***l_258 = &l_259;
        for (g_51 = 0; (g_51 >= 12); g_51 = safe_add_func_int8_t_s_s(g_51, 3))
        {
            int **l_74 = (void*)0;
            int **l_75 = (void*)0;
            char *l_129 = &g_51;
            int *l_155 = &g_73;
            g_76 = l_72;

            ;
            for (g_73 = (-30); (g_73 == 7); ++g_73)
            {
                int *l_79 = (void*)0;
                int *l_80 = &g_69.f2;
                (*l_80) = 0x9A4A91A3L;

                                p_38 = l_72;

                ;
            }
        }
        if (func_47(&g_51, (p_35 >= (g_51 <= ((l_72 != (void*)0) && ((0UL == (*l_72)) <= 0xC186L))))))
        {
            int l_181 = 0xB93622BFL;
            int l_201 = 0x7B0B943BL;
            if ((1UL ^ (((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(func_47(l_127, p_34), 8)) ^ ((0x0806C526L >= ((l_164 == g_166) >= 4UL)) != (l_168 != (void*)0))), (*l_72))) <= (-10L)) && (*l_72))))
            {
                for (l_95 = 0; (l_95 >= 37); l_95++)
                {
                    (**l_164) = (**g_166);
                }

                ;
                (*g_167) = (void*)0;

                ;
                for (g_73 = 0; (g_73 <= 2); g_73++)
                {
                    g_69.f2 = l_173;

                                        (*l_164) = (*g_166);


                }


            }
            else
            {
                short l_178 = 0xCCF4L;
                int *l_184 = (void*)0;
                int *l_191 = (void*)0;
                (*l_72) = 1L;
                for (p_35 = 0; (p_35 != 7); ++p_35)
                {
                    int *l_185 = &g_73;
                    char *l_186 = (void*)0;
                    for (g_51 = 0; (g_51 <= (-16)); --g_51)
                    {
                        (**g_166) = (*g_167);
                        l_178 = g_29;
                        (*l_72) = (safe_sub_func_uint16_t_u_u(l_181, (&g_50 == (void*)0)));
                    }
                }
            }

            ;
            ;

            (*l_125) = (l_202 ^ (g_51 || 0x05L));
        }
        else
        {
            int l_237 = 0x51E36D96L;
            int *l_240 = &g_73;
            unsigned l_241 = 7UL;
            char ***l_250 = (void*)0;
            if (l_203)
            {
                int *l_204 = (void*)0;
                unsigned char l_211 = 0x9BL;
                (**g_166) = (**g_166);
                (**l_164) = l_204;

                ;
                for (l_202 = 0; (l_202 == 47); l_202 = safe_add_func_int32_t_s_s(l_202, 1))
                {
                    for (l_143 = 0; (l_143 <= 30); l_143 = safe_add_func_int32_t_s_s(l_143, 6))
                    {
                        unsigned l_216 = 0xF04F40C7L;
                        (*g_76) = (safe_sub_func_int16_t_s_s(((p_34 & l_211) < g_73), (((p_38 != (**l_164)) == 1UL) ^ (safe_rshift_func_uint16_t_u_s(((((((*g_50) && ((safe_add_func_int8_t_s_s((*g_50), (*l_72))) || l_216)) ^ g_29) >= l_216) | 1L) | (*l_72)), 5)))));
                    }
                }
            }
            else
            {
                char *l_232 = &g_51;
                int l_239 = 0x880B83B8L;
                for (p_34 = 0; (p_34 <= 51); ++p_34)
                {
                    for (g_73 = 3; (g_73 != 23); ++g_73)
                    {
                        return l_221;


                                            }
                    (***l_164) = ((*l_125) == ((((((safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s(p_35, (safe_div_func_uint8_t_u_u((0L == (p_34 < (safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(func_47(l_232, p_35), (safe_lshift_func_int8_t_s_s(func_47(l_232, ((safe_rshift_func_int16_t_s_s(func_47(&g_51, g_73), l_237)) <= g_73)), (*g_50))))), g_238)))), g_73)))), 4)) <= (*g_50)) & l_239) == g_238) <= l_239) < p_34));
                }
                (**g_166) = l_240;

                ;
            }

            ;
            (*l_240) = (l_241 && (func_47(l_68, ((safe_add_func_uint32_t_u_u((0xFEL || ((p_34 ^ (((func_47(&g_238, (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((0x37CA2DBAL > 2UL) != ((void*)0 == l_250)), 14)), p_34))) >= (*l_72)) < p_35) || (*l_240))) || 0xEEC29EF4L)), (*l_72))) >= (*l_240))) & 0xBB08L));
        }

        ;
        ;

        (*l_72) = (safe_sub_func_uint32_t_u_u(((void*)0 == l_72), l_253));
        for (l_95 = 10; (l_95 > 27); ++l_95)
        {
            char **l_257 = (void*)0;
            char ***l_256 = &l_257;
            int **l_260 = (void*)0;
            int l_263 = 0xF3A0AF4FL;
            (*l_72) = ((*l_72) > (l_256 == l_258));
            (*l_72) = ((!((void*)0 == l_260)) || (func_47(&g_238, (safe_mod_func_int16_t_s_s(func_47(&g_51, ((p_34 <= l_263) < (safe_rshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(((-1L) | (g_268 != l_168)), g_238)), 13)))), p_35))) || p_34));
            (*l_72) = func_47((*g_269), ((safe_add_func_uint16_t_u_u(0xFA71L, func_47((**g_268), p_34))) & p_35));
        }
    }

    ;
    for (g_73 = 0; (g_73 < 26); g_73 = safe_add_func_uint16_t_u_u(g_73, 2))
    {
        int *l_274 = &g_69.f2;
        (*l_274) = 0xC6E757BDL;

                (**g_166) = (void*)0;

        ;
        (*g_167) = p_38;
    }
    (**g_166) = l_72;

    ;
    if (func_47((**g_268), (255UL != func_47(l_68, g_73))))
    {
        unsigned l_291 = 0UL;
        (**g_167) = 0xFB92C6D3L;
        for (l_253 = 0; (l_253 < (-4)); l_253--)
        {
            int l_279 = 0x784E5698L;
            union U0 **l_309 = (void*)0;
        }
    }
    else
    {
        (*g_167) = (*g_167);
    }
    return (**l_310);


    }







static unsigned char func_47(char * p_48, short p_49)
{
    int l_60 = (-10L);
    unsigned char l_63 = 0xEDL;
    if ((safe_unary_minus_func_uint8_t_u(((safe_unary_minus_func_int16_t_s(((*g_50) < ((safe_add_func_uint32_t_u_u(p_49, (0xEDL >= ((safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((g_29 ^ ((0x42L == (*g_50)) ^ l_60)), ((g_29 != (((safe_rshift_func_int16_t_s_u(p_49, 3)) || 6UL) > 0x1FE01AF0L)) & l_60))), g_51)) & (*p_48))))) && l_60)))) & l_63))))
    {
        int *l_65 = (void*)0;
        int **l_64 = &l_65;
        (*l_64) = (void*)0;
        return l_63;
    }
    else
    {
        return g_29;
    }
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_440, "g_440", print_hash_value);
    transparent_crc(g_463, "g_463", print_hash_value);
    transparent_crc(g_533, "g_533", print_hash_value);
    transparent_crc(g_567, "g_567", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
