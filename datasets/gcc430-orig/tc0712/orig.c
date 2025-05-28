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



static int g_3 = 0x8ADE19D2L;
static int * volatile g_2 = &g_3;
static int * volatile * volatile g_4 = &g_2;
static unsigned short g_19 = 2UL;
static unsigned g_27 = 0UL;
static int *g_60 = &g_3;
static int **g_59 = &g_60;
static int * volatile * volatile g_63 = &g_2;
static short g_75 = 1L;
static int g_78 = 0x30EA3BBEL;
static int * volatile g_77 = &g_78;
static char g_90 = 0xA1L;
static unsigned g_100 = 0xE64F81AAL;
static unsigned short g_108 = 3UL;
static unsigned short *g_107 = &g_108;
static int *g_110 = (void*)0;
static int **g_109 = &g_110;
static char *g_164 = &g_90;
static unsigned short g_177 = 0xF355L;
static short **g_182 = (void*)0;
static short *** volatile g_181 = &g_182;
static int * volatile g_187 = &g_3;
static unsigned *g_195 = &g_100;
static unsigned **g_194 = &g_195;
static unsigned *** volatile g_193 = &g_194;
static int g_210 = 9L;
static unsigned * volatile * volatile * volatile g_237 = (void*)0;
static int * volatile * volatile g_254 = &g_60;
static unsigned short **g_267 = &g_107;
static unsigned short ***g_266 = &g_267;
static char g_276 = 4L;
static unsigned char g_307 = 7UL;
static int * volatile * volatile g_319 = &g_77;
static int g_337 = (-1L);
static int * volatile g_409 = &g_78;
static unsigned *g_426 = &g_27;
static unsigned **g_425 = &g_426;
static unsigned ***g_424 = &g_425;
static int * volatile g_429 = &g_3;
static int * volatile * volatile g_430 = &g_60;
static unsigned char g_434 = 0x85L;



static int func_1(void);
static char func_11(unsigned short p_12, unsigned p_13, char p_14, unsigned p_15, int ** p_16);
static unsigned char func_20(int ** p_21);
static int func_24(unsigned p_25);
static char func_31(int * p_32, unsigned * p_33, unsigned p_34);
static int * func_35(unsigned p_36, unsigned * p_37, unsigned * p_38, unsigned short * p_39, int ** p_40);
static unsigned * func_41(unsigned * p_42, int p_43, unsigned short * p_44);
static unsigned * func_45(short p_46, int ** p_47);
static int ** func_48(int * p_49, int p_50, unsigned short * p_51, unsigned char p_52);
static int ** func_53(int ** p_54, unsigned short p_55);
static int func_1(void)
{
    char l_17 = (-1L);
    unsigned short *l_18 = &g_19;
    int *l_23 = &g_3;
    int **l_22 = &l_23;
    unsigned short l_415 = 0x5D16L;
    int **l_416 = (void*)0;
    char l_431 = 0x82L;
    unsigned char *l_432 = &g_307;
    unsigned char *l_433 = &g_434;
    int l_442 = (-1L);
    unsigned l_457 = 0xA42A3B7FL;
    unsigned **l_477 = &g_195;
    (*g_4) = g_2;
    (**l_22) = (safe_rshift_func_int16_t_s_u((((*l_433) = (((*l_432) = (g_3 , (safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(func_11(((*l_18) = l_17), (func_20(l_22) >= g_177), g_177, l_415, l_416), 0)), l_431)))) <= g_177)) == 0x1CL), g_177));

    ;

    ;


    for (l_415 = 0; (l_415 >= 35); l_415++)
    {
        int *l_437 = &g_337;
        (*g_109) = l_437;

        ;
        if (((safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(l_442, (*g_195))), 3)) != (*g_164)))
        {
            int **l_458 = &l_23;
            int *l_460 = &l_442;
            int **l_459 = &l_460;
            unsigned char l_464 = 1UL;
            short *l_473 = &g_75;
            int * volatile *l_474 = &l_23;
            if ((((**g_194) , ((*l_459) = func_35((*g_426), (*g_425), l_437, (*g_267), func_53(&g_110, ((*g_164) == func_11((*g_107), (*l_437), (*g_164), (**g_194), l_458)))))) != &g_210))
            {
                char l_461 = 0x89L;
                (**g_63) = (**l_458);
                (*l_22) = (*g_59);

                ;
                (**g_109) = ((l_461 | ((g_276 ^ ((**l_22) = (+(((*g_193) = (*g_193)) != &g_195)))) > (*g_164))) | 6UL);
            }
            else
            {
                (*l_23) = (**g_109);
                if ((**g_59))
                    continue;
            }

            ;
            ;
            (**g_59) = (safe_mod_func_int8_t_s_s((((*g_267) == (*g_267)) , (0x46L ^ ((((**g_194) <= l_464) || (((**g_267) || ((*l_473) = (safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((((*l_437) || (safe_lshift_func_int16_t_s_u((**l_458), 4))) >= 0xFFL), 2)), 9)), 0xB3C5L)))) > (*g_107))) , 0UL))), (*g_164)));
            (*l_474) = (*g_319);

            ;
            (*l_437) = (**l_474);
        }
        else
        {
            return g_19;
        }
        if ((*l_437))
            break;
    }

    ;
    ;

    if ((**g_63))
    {
        (*l_23) = 0x9B1D011BL;
        return g_434;
    }
    else
    {
        int l_475 = 0x87DE6A43L;
        unsigned **l_476 = &g_195;
        (**g_59) = l_475;
        (*g_60) = (l_475 | (((*g_193) = l_476) == l_477));
    }
    return (*l_23);
}







static char func_11(unsigned short p_12, unsigned p_13, char p_14, unsigned p_15, int ** p_16)
{
    unsigned ***l_420 = (void*)0;
    unsigned ****l_419 = &l_420;
    int l_423 = 0x8CB365A6L;
    unsigned ****l_427 = &g_424;
    unsigned ****l_428 = &l_420;
    (*g_429) = (((safe_sub_func_uint32_t_u_u(0xBC112215L, (l_419 != (((safe_lshift_func_uint16_t_u_s((!(**g_267)), l_423)) == (g_237 == ((*l_427) = g_424))) , ((p_14 < 1UL) , l_428))))) || l_423) < p_13);
    (*g_430) = (*g_4);

    ;
    return (*g_164);
}







static unsigned char func_20(int ** p_21)
{
    unsigned *l_26 = &g_27;
    int l_410 = (-1L);
    if (func_24(((*l_26) = 1UL)))
    {
        short l_411 = 1L;
        l_411 = l_410;
    }
    else
    {
        unsigned *l_412 = &g_27;
        int l_413 = 0x1A0C5217L;
        int * volatile *l_414 = &g_409;
        (*g_59) = &l_410;

        ;
        (*g_109) = (((*g_164) <= l_410) , &l_413);

        ;
        (*g_110) = l_413;
        (*l_414) = (*g_254);

        ;
    }


    ;

    ;

    ;
    return l_410;



}







static int func_24(unsigned p_25)
{
    int *l_30 = (void*)0;
    int ***l_61 = (void*)0;
    unsigned short *l_62 = (void*)0;
    (*g_409) = (((void*)0 != l_30) >= (func_31(func_35(g_27, func_41(func_45(g_3, func_48(l_30, ((g_3 , ((g_59 = func_53((g_3 , ((((safe_lshift_func_int8_t_s_u(g_27, p_25)) != (**g_4)) < g_27) , &l_30)), p_25)) != (void*)0)) == (-3L)), l_62, g_3)), p_25, l_62), &g_27, g_107, g_109), l_30, p_25) == p_25));


    ;

    ;

    return p_25;
}







static char func_31(int * p_32, unsigned * p_33, unsigned p_34)
{
    int l_259 = (-1L);
    unsigned short **l_265 = &g_107;
    unsigned short ***l_264 = &l_265;
    unsigned short ****l_268 = (void*)0;
    unsigned short ***l_270 = &g_267;
    unsigned short ****l_269 = &l_270;
    char *l_275 = &g_276;
    int *l_277 = &g_78;
    short *l_316 = (void*)0;
    short **l_315 = &l_316;
    unsigned l_325 = 0UL;
    int ***l_341 = &g_109;
    (**g_59) = (safe_lshift_func_int16_t_s_s(p_34, 4));
    (*g_59) = (((safe_lshift_func_int16_t_s_s(l_259, (safe_lshift_func_uint8_t_u_s((p_34 <= ((*g_164) = 0x10L)), (((~(((*p_32) != ((((**g_267) = (safe_rshift_func_int8_t_s_s((((g_266 = l_264) != ((*l_269) = &l_265)) , ((*l_275) = (safe_add_func_int32_t_s_s((+(l_259 & l_259)), ((safe_mod_func_uint32_t_u_u(((((l_259 | 6UL) | (*p_32)) & p_34) != 1L), 7UL)) > g_100))))), 2))) <= 3UL) , (*p_32))) , 0x8BL)) ^ g_3) , g_75))))) , (*g_187)) , p_33);

    ;
    ;
    ;
    if (((*l_277) = ((*p_32) = (*p_32))))
    {
        int l_314 = (-4L);
        unsigned *l_329 = &l_325;
        short *l_336 = &g_75;
        int *l_373 = &g_210;
        int **l_372 = &l_373;
        int *l_379 = &l_259;
        char *l_408 = &g_90;
        for (g_75 = (-7); (g_75 < (-5)); g_75 = safe_add_func_int8_t_s_s(g_75, 3))
        {
            int l_304 = 0x156F240AL;
            int l_318 = 0L;
            unsigned char l_328 = 1UL;
            for (g_100 = 0; (g_100 <= 26); g_100++)
            {
                unsigned l_292 = 0UL;
                int l_293 = 6L;
                unsigned char *l_305 = (void*)0;
                unsigned char *l_306 = &g_307;
                short ***l_317 = &l_315;
                for (g_210 = (-17); (g_210 != (-27)); --g_210)
                {
                    (*p_32) = (255UL && ((safe_sub_func_uint32_t_u_u(0UL, (*g_2))) || ((*g_164) <= (safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((0xCCD9L == p_34), ((l_293 = l_292) , (safe_mod_func_uint8_t_u_u(0x48L, (*l_277)))))) <= 0x3F67E56BL), p_34)), 14)))));
                    for (g_276 = 0; (g_276 > (-21)); g_276--)
                    {
                        return p_34;


                    }
                    (*g_59) = func_41(func_41(&g_27, (*g_187), (*g_267)), (*l_277), (*g_267));

                    ;
                }
                (*l_277) = (((*g_164) = (safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(((p_34 || (((*l_306) = (safe_add_func_uint16_t_u_u((*l_277), l_304))) < (l_318 = (+(safe_rshift_func_int8_t_s_u(((safe_add_func_uint16_t_u_u(p_34, (safe_sub_func_uint32_t_u_u((l_314 = p_34), (*p_32))))) > g_27), (g_276 , (((*l_317) = l_315) != (*g_181))))))))) <= l_292), (-10L))), 11))) != p_34);
                (*g_319) = (*g_63);

                ;
            }
            if ((*g_187))
                break;
            (*l_277) = ((*p_32) = (*g_2));
            if ((safe_lshift_func_uint16_t_u_s((***g_266), p_34)))
            {
                return p_34;


            }
            else
            {
                unsigned short l_326 = 9UL;
                char **l_327 = &g_164;
                (*p_32) = (safe_unary_minus_func_uint8_t_u(((((*p_32) == ((*l_277) = (safe_mod_func_uint8_t_u_u(((l_325 & (p_34 , l_326)) != ((((*l_327) = &g_276) == &g_90) < g_210)), (((l_314 = (l_304 <= p_34)) > l_328) , p_34))))) , 0x4C242819L) < 0xD0D241F4L)));

                ;
            }

            ;
        }

        ;
        ;
        ;
        if (((((*l_329) = g_177) , g_78) | ((((g_78 > 0x7EL) , l_314) == (0x868DL < (((*p_32) = (((safe_mod_func_int16_t_s_s(((*l_336) = (((safe_add_func_uint32_t_u_u((((*l_277) && p_34) , (safe_sub_func_int16_t_s_s((0x1237L != 0xB188L), p_34))), l_314)) == (*p_32)) < (*l_277))), g_337)) == (*l_277)) , (-6L))) < 0xA809D498L))) == 0x32DDB291L)))
        {
            unsigned char l_338 = 0x3FL;
            int l_344 = 0L;
            int l_362 = 7L;
            int **l_363 = &l_277;
            unsigned *l_365 = &g_27;
            unsigned short ****l_368 = (void*)0;
            short **l_376 = &l_336;
            int * volatile *l_378 = &g_60;
            if (l_314)
            {
                int l_342 = 1L;
                unsigned *l_343 = (void*)0;
                unsigned ***l_345 = &g_194;
                unsigned short *l_360 = &g_177;
                unsigned **l_364 = (void*)0;
                unsigned *l_371 = &g_100;
                int ***l_374 = &l_372;
                if (l_338)
                {
                    unsigned ***l_347 = &g_194;
                    unsigned short *l_359 = (void*)0;
                    int **l_361 = &g_60;
                    if (((safe_rshift_func_uint8_t_u_s((*l_277), (&g_109 == l_341))) <= l_342))
                    {
                        unsigned ****l_346 = &l_345;
                        int l_356 = (-6L);
                        unsigned char *l_357 = (void*)0;
                        unsigned char *l_358 = &l_338;
                        (*g_59) = func_35(g_90, l_343, func_41(func_41((l_344 , &g_27), (*p_32), (l_360 = (((*l_358) = ((((*l_346) = l_345) != l_347) & (safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s((~(p_34 < ((safe_mod_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(((g_307 , 0x06L) , l_356), p_34)) & (*g_77)), 9L)) , (*p_32)))), 1UL)), (-4L))))) , l_359))), l_344, (*g_267)), (*g_267), l_361);

                        ;
                        ;
                    }
                    else
                    {
                        (*g_59) = (*g_109);

                        ;
                    }

                    ;
                    ;
                }
                else
                {
                    (*p_32) = (*p_32);
                }

                ;
                ;
                if ((((((g_100 , ((*g_164) , (&p_34 != (l_365 = func_45(((*l_336) = (l_362 = l_342)), func_53(l_363, p_34)))))) , ((**l_363) = (~(((0x1C36L & (**l_363)) | 0x4DC5L) == 0L)))) || (*l_277)) , (void*)0) != l_368))
                {
                    (**l_341) = (void*)0;
                    for (l_362 = 0; (l_362 != (-10)); l_362--)
                    {
                        (**l_341) = (*g_59);
                        (**l_341) = func_45(((*l_336) = p_34), &g_60);

                        ;
                    }

                    ;
                }
                else
                {
                    (*g_109) = p_32;

                    ;
                    (***l_341) = (p_34 | p_34);
                    (***l_341) = (l_277 != l_371);
                }

                ;
                ;
                (*l_374) = l_372;
                (*g_109) = &l_342;

                ;
            }
            else
            {
                int *l_375 = &g_210;
                int *l_377 = &l_314;
                (*l_277) = (l_375 != (((l_376 == (void*)0) && g_75) , (void*)0));
                l_377 = p_33;

                ;
            }

            ;

            ;
            (*l_378) = (*g_319);

            ;
            (**g_59) = (**g_319);
            return (*g_164);


        }
        else
        {
            (*g_59) = p_33;

            ;
            (*g_59) = (void*)0;
            (**l_341) = l_379;

            ;
        }

        ;
        ;
        (*g_59) = &l_314;

        ;
        for (g_337 = (-25); (g_337 <= (-28)); g_337 = safe_sub_func_int32_t_s_s(g_337, 3))
        {
            unsigned l_401 = 0x7686EA31L;
            for (l_325 = 0; (l_325 <= 30); l_325++)
            {
                for (p_34 = 0; (p_34 > 4); ++p_34)
                {
                    unsigned short l_390 = 0UL;
                    unsigned char *l_392 = (void*)0;
                    unsigned char *l_393 = &g_307;
                    (**g_59) = (safe_mod_func_uint8_t_u_u((((((safe_add_func_int8_t_s_s((((*l_336) = (l_390 = 0x2CD2L)) > p_34), 0L)) < p_34) > ((*l_393) = (safe_unary_minus_func_uint16_t_u((*l_379))))) < (safe_add_func_int8_t_s_s((0L | 0x04L), g_177))) > (*g_164)), p_34));
                    (*g_109) = func_41(l_373, l_390, (**l_270));

                    ;
                    if ((*p_32))
                        continue;
                }
                for (g_108 = 0; (g_108 < 55); ++g_108)
                {
                    int * volatile *l_398 = &g_2;
                    (*l_398) = (*g_63);
                }
                if (((((((safe_lshift_func_uint8_t_u_u((p_34 >= l_401), (p_34 > ((((***g_193) = (((((void*)0 == &p_34) <= ((*g_195) >= 0x4C6166C1L)) , 0xEE88E049L) & (((safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s((((void*)0 == l_408) >= 0x3305L), (*g_164))), (***l_341))), (*l_379))) >= l_401) <= (*p_32)))) , (*g_164)) > p_34)))) > 0x8121A7B5L) <= (*g_164)) > 0xFFL) , 0x9D12L) , (*l_277)))
                {
                    (*l_379) = ((*p_32) = (**g_319));
                }
                else
                {
                    if ((**g_254))
                        break;
                }
            }
        }

        ;
    }
    else
    {
        (*g_59) = p_33;
    }


    ;
    ;
    ;
    return p_34;



}







static int * func_35(unsigned p_36, unsigned * p_37, unsigned * p_38, unsigned short * p_39, int ** p_40)
{
    int l_115 = 0L;
    int *l_118 = (void*)0;
    char l_153 = 1L;
    unsigned short l_183 = 1UL;
    int *l_213 = (void*)0;
    unsigned *l_214 = &g_27;
    char **l_225 = &g_164;
    for (g_108 = 0; (g_108 > 12); g_108 = safe_add_func_int8_t_s_s(g_108, 4))
    {
        char l_121 = 1L;
        unsigned short *l_133 = (void*)0;
        int ***l_156 = &g_59;
    }
    (*g_59) = func_45(p_36, &g_60);

    ;
    return (*g_59);


}







static unsigned * func_41(unsigned * p_42, int p_43, unsigned short * p_44)
{
    int l_106 = 0x311C0D40L;
    (**g_4) = l_106;
    return &g_27;


}







static unsigned * func_45(short p_46, int ** p_47)
{
    char l_81 = (-3L);
    unsigned char l_86 = 1UL;
    char *l_89 = &g_90;
    short *l_96 = (void*)0;
    short **l_95 = &l_96;
    unsigned *l_104 = &g_27;
    int *l_105 = &g_3;
    if ((l_81 >= (((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(l_86, 4)), 0)) & (safe_sub_func_int32_t_s_s(l_81, (((*l_89) = g_78) ^ (p_46 & p_46))))) <= (0L >= (safe_sub_func_uint32_t_u_u((0xFFL >= (safe_lshift_func_uint16_t_u_u(0xB39DL, 0))), (-8L)))))))
    {
        unsigned *l_99 = &g_100;
        int l_103 = 1L;
        l_95 = (void*)0;

        ;
        (**g_4) = ((*g_77) , (safe_lshift_func_uint16_t_u_s((l_81 ^ (((*l_99) = (((void*)0 == &p_46) == g_78)) , p_46)), (safe_mod_func_int32_t_s_s(0xE22F50FAL, (g_3 ^ l_103))))));
    }
    else
    {
        return l_104;


    }

    ;
    (*g_59) = l_105;

    ;
    return l_105;


}







static int ** func_48(int * p_49, int p_50, unsigned short * p_51, unsigned char p_52)
{
    short l_64 = 0xD3D8L;
    int l_65 = 0x757520C2L;
    char *l_76 = (void*)0;
    int **l_79 = &g_60;
    int **l_80 = (void*)0;
    if (p_52)
    {
        (*g_63) = (*g_4);
    }
    else
    {
        p_49 = (*g_59);

        ;
    }

    ;
    l_65 = (l_64 = (*g_60));
    for (l_64 = 0; (l_64 > (-20)); l_64 = safe_sub_func_int16_t_s_s(l_64, 1))
    {
        char l_72 = 8L;
        int l_73 = 1L;
        short *l_74 = &g_75;
        (*g_59) = &p_50;

        ;
        (**g_59) = (((safe_sub_func_uint8_t_u_u((p_50 && p_50), (safe_sub_func_uint32_t_u_u(p_50, p_52)))) , (l_72 || l_72)) == (g_27 , ((((*l_74) = (l_64 || (l_73 = p_50))) && l_64) && g_3)));
        if (l_65)
            continue;
    }

    ;
    (*g_77) = ((0x6A952366L <= (((void*)0 != &l_65) | 5L)) && (l_65 = (&l_65 != &p_50)));
    return l_80;



}







static int ** func_53(int ** p_54, unsigned short p_55)
{
    int * volatile *l_58 = &g_2;
    (*l_58) = (*g_4);
    return g_59;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_276, "g_276", print_hash_value);
    transparent_crc(g_307, "g_307", print_hash_value);
    transparent_crc(g_337, "g_337", print_hash_value);
    transparent_crc(g_434, "g_434", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
