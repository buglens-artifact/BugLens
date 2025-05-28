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



static volatile int g_2 = 0x68206240L;
static volatile int g_3 = 0x642C70BBL;
static int g_4 = (-2L);
static short g_36 = 0L;
static char g_62 = 0L;
static unsigned g_69 = 4294967295UL;
static int g_76 = (-5L);
static int g_79 = 4L;
static int **g_88 = (void*)0;
static volatile unsigned g_93 = 0x3E235BD6L;
static volatile unsigned *g_92 = &g_93;
static volatile unsigned **g_91 = &g_92;
static int *g_103 = &g_79;
static short g_136 = 0xFCB6L;
static short g_141 = 0x14CEL;
static unsigned char g_145 = 0UL;
static unsigned char g_147 = 5UL;
static unsigned g_148 = 0x68F1F7CCL;
static unsigned short g_156 = 0x559FL;
static char g_202 = 0xF9L;
static int g_204 = (-1L);
static unsigned **g_276 = (void*)0;
static unsigned g_308 = 4294967294UL;
static unsigned g_309 = 4294967291UL;
static short g_414 = 0xE263L;
static volatile short *g_460 = (void*)0;
static volatile short **g_459 = &g_460;
static volatile int *g_516 = &g_2;



static int func_1(void);
static unsigned char func_8(unsigned p_9, short p_10);
static unsigned short func_13(char p_14, unsigned char p_15, unsigned short p_16, char p_17, unsigned char p_18);
static char func_19(short p_20, short p_21, short p_22);
static short func_23(unsigned p_24, int p_25, unsigned short p_26, int p_27, unsigned p_28);
static int func_30(short p_31, unsigned p_32, unsigned char p_33);
static unsigned char func_39(unsigned p_40, short p_41, int p_42, unsigned char p_43, char p_44);
static int * func_47(int * p_48);
static int func_52(int ** p_53, int ** p_54, int * p_55);
static int ** func_56(unsigned p_57, short p_58);
static int func_1(void)
{
    short l_29 = 0xD39CL;
    int *l_536 = &g_204;
    int **l_537 = &g_103;
    for (g_4 = 0; (g_4 >= (-15)); --g_4)
    {
        char l_7 = 0L;
        char *l_171 = (void*)0;
        char *l_172 = &g_62;
        unsigned short *l_417 = &g_156;
        int **l_534 = &g_103;
        int ***l_535 = &g_88;
        if ((l_7 | func_8(g_3, ((safe_sub_func_uint16_t_u_u(((*l_417) = func_13(func_19((func_23(l_29, l_29, g_4, func_30(g_4, (safe_mul_func_uint8_t_u_u((((g_36 = 6UL) || g_36) || ((*l_172) = (safe_sub_func_uint32_t_u_u((func_39((safe_add_func_uint16_t_u_u(g_4, g_36)), l_7, g_4, g_36, l_7) | g_4), l_29)))), g_4)), g_4), l_7) <= l_29), g_4, g_4), g_4, l_29, l_7, l_29)), g_4)) ^ 0xD8L))))
        {
            (*g_516) = (-6L);
        }
        else
        {
            unsigned short **l_533 = &l_417;
            unsigned short ***l_532 = &l_533;
            (*l_532) = (void*)0;

            ;
            (*g_516) = 0x3AEEE4ACL;
        }
        (*g_516) = ((l_534 == ((*l_535) = &g_103)) ^ l_29);

        ;
    }

    ;

    (*l_537) = l_536;

    ;
    return g_69;
}







static unsigned char func_8(unsigned p_9, short p_10)
{
    int **l_418 = &g_103;
    int *l_419 = &g_204;
    unsigned *l_438 = &g_308;
    unsigned **l_437 = &l_438;
    unsigned short l_470 = 0UL;
    volatile int *l_519 = &g_3;
lbl_530:
    (*l_418) = (void*)0;

    ;
    if (((*l_419) = p_10))
    {
        unsigned char l_420 = 255UL;
        int *l_457 = (void*)0;
        unsigned short *l_466 = (void*)0;
        short l_471 = 1L;
        int *l_472 = (void*)0;
        unsigned **l_477 = &l_438;
        int **l_483 = &l_419;
        if (l_420)
        {
            unsigned short *l_425 = &g_156;
            unsigned short **l_426 = &l_425;
            int **l_435 = &g_103;
            int *l_436 = &g_204;
            unsigned **l_440 = &l_438;
            if ((safe_mod_func_int16_t_s_s((0x66L ^ (safe_mul_func_int8_t_s_s((((*l_426) = l_425) == &g_156), ((safe_lshift_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(p_10, 6)), g_62)) & (safe_mul_func_uint8_t_u_u(p_9, p_9))), g_147)) == 0xDEL)))), 0xD038L)))
            {
                unsigned **l_439 = (void*)0;
                int l_446 = 0L;
                l_439 = l_437;

                ;
                if (((*l_419) = (p_9 > ((void*)0 == l_440))))
                {
                    int **l_445 = &g_103;
                    short *l_447 = &g_141;
                    int *l_448 = &l_446;
                    (*l_448) = ((safe_add_func_int16_t_s_s(((*l_447) = (((g_136 < (safe_lshift_func_int8_t_s_s(func_52(l_445, &g_103, &g_76), 3))) < (&l_436 == &l_436)) && (((*l_436) = 1L) ^ func_39((**g_91), p_9, p_9, g_141, l_446)))), p_9)) && g_147);


                    return (*l_419);
                }
                else
                {
                    (*l_435) = (*l_435);
                    return g_145;
                }
            }
            else
            {
                int *l_455 = &g_204;
                int *l_456 = &g_76;
                int ***l_458 = &g_88;
                (*l_436) = (l_420 >= (safe_mul_func_int16_t_s_s((*l_436), ((safe_mul_func_int8_t_s_s((func_30((safe_lshift_func_uint8_t_u_s(l_420, p_9)), p_10, g_308) & g_148), 0x39L)) != 4294967286UL))));

                ;
            }

            ;
        }
        else
        {
            volatile short ***l_461 = &g_459;
            volatile int *l_463 = &g_2;
            volatile int **l_462 = &l_463;
            unsigned short *l_465 = (void*)0;
            unsigned short **l_464 = &l_465;
            int *l_467 = &g_4;
            int l_468 = 0L;
            short *l_469 = &g_136;
            (*l_461) = g_459;
            (*l_462) = &g_3;

            ;
            (*l_463) = (0x9EL > (~((*l_419) = func_30(p_9, ((+(((((*l_469) = ((((*l_464) = &g_156) == l_466) > ((l_466 == (void*)0) && (((func_30(g_414, func_52(&l_419, &l_457, l_467), l_468) && (**l_418)) <= p_10) < 0x0327DCEDL)))) <= 1L) < (-1L)) & p_10)) < l_470), l_471))));

            ;
            ;
        }

        ;
        l_457 = l_472;
        for (g_204 = 0; (g_204 > 9); ++g_204)
        {
            unsigned ***l_475 = &l_437;
            unsigned ***l_476 = &g_276;
            unsigned ***l_478 = (void*)0;
            unsigned **l_479 = &l_438;
            int l_480 = 0x3A3F0844L;
        }
        (*g_103) = 0L;
    }
    else
    {
        int *l_486 = &g_4;
        int l_531 = 0x1A86DA81L;
        if (((void*)0 != &l_470))
        {
            char l_489 = 0x3FL;
            (*l_418) = l_486;

            ;
            if (g_76)
                goto lbl_521;
lbl_521:
            if ((((*l_419) = (safe_mul_func_uint8_t_u_u((func_52(&g_103, &g_103, (*l_418)) <= l_489), g_36))) && ((safe_sub_func_int8_t_s_s((g_156 == (*l_486)), ((g_202 > p_9) < g_204))) < g_2)))
            {
                int **l_494 = &l_486;
                short *l_495 = (void*)0;
                short *l_496 = &g_141;
                unsigned char *l_505 = &g_145;
                int ***l_510 = (void*)0;
                int ***l_511 = &l_418;
                int *l_512 = (void*)0;
                unsigned short *l_515 = &g_156;
                volatile int **l_517 = (void*)0;
                volatile int **l_518 = (void*)0;
                (*l_419) = ((safe_mod_func_int8_t_s_s(func_30(((*l_496) = func_52(l_494, l_494, (g_103 = (*l_494)))), (safe_rshift_func_uint8_t_u_u(0x53L, p_9)), (safe_sub_func_uint8_t_u_u(((*l_505) = ((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(p_9, (((*l_419) ^ p_9) > (**l_494)))), p_9)) | p_10)), 1UL))), 0x65L)) == g_148);

                ;
                (*g_103) = (safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(p_10, ((0x33L < ((p_9 != 0UL) >= p_9)) >= l_489))), 15));
                l_519 = g_516;

                ;
            }
            else
            {
                int l_520 = (-6L);
                (*l_519) = p_9;
                (*g_516) = (l_520 ^ 1UL);
            }


            ;
            for (g_36 = 20; (g_36 > (-14)); g_36--)
            {
                for (g_148 = 0; (g_148 > 30); g_148 = safe_add_func_int32_t_s_s(g_148, 4))
                {
                    int *l_526 = &g_79;
                    (*l_418) = l_526;

                    ;
                    if (p_9)
                        break;
                    for (g_156 = 0; (g_156 == 41); g_156 = safe_add_func_uint16_t_u_u(g_156, 1))
                    {
                        int *l_529 = &g_204;
                        (*l_418) = l_529;

                        ;
                        (*g_516) = ((*l_419) = ((*l_526) = 1L));
                        return l_489;
                    }
                }
            }
        }
        else
        {
            (*l_418) = (void*)0;
            if (g_79)
                goto lbl_530;
            (*g_516) = l_531;
        }


        ;
    }


    ;
    return g_93;
}







static unsigned short func_13(char p_14, unsigned char p_15, unsigned short p_16, char p_17, unsigned char p_18)
{
    unsigned short l_216 = 5UL;
    int *l_219 = &g_204;
    short *l_237 = &g_36;
    short **l_236 = &l_237;
    unsigned ***l_330 = &g_276;
    unsigned char **l_339 = (void*)0;
    int *l_379 = &g_79;
    short l_396 = 0xEF91L;
    if (l_216)
    {
        short **l_239 = &l_237;
        int l_243 = 0x4DA1E438L;
        int l_244 = 0L;
        int **l_251 = &g_103;
        int *l_279 = &g_4;
        char l_312 = 0xE7L;
        unsigned char l_319 = 0x5BL;
        for (p_14 = 1; (p_14 == (-18)); p_14--)
        {
            int **l_220 = &l_219;
            short *l_221 = &g_136;
            char *l_232 = &g_202;
            short ***l_238 = &l_236;
            unsigned short *l_240 = (void*)0;
            unsigned short *l_241 = &g_156;
            unsigned short *l_242 = &l_216;
            unsigned *l_294 = &g_69;
            (*l_220) = l_219;
        }
        if (p_17)
        {
            unsigned short *l_307 = &g_156;
            int l_314 = 0xE51A4AEAL;
            g_309 = (((0x4528L && g_141) >= (safe_lshift_func_int8_t_s_u((g_76 != (safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(g_204, func_19((safe_rshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s(((*l_237) = 0x85E2L), 0UL)) | p_18), 1)), ((g_308 = ((*l_307) = 0xBD15L)) <= p_15), p_16))), 7))), g_69))) != g_4);
            for (p_17 = (-20); (p_17 != (-27)); --p_17)
            {
                short **l_313 = &l_237;
                (*g_103) = (l_312 <= (*g_103));
                l_236 = l_313;
                return l_314;
            }
            (*l_219) = ((((-3L) <= (safe_rshift_func_int8_t_s_s((func_30(g_147, g_145, p_18) < (*l_279)), 3))) && (4294967295UL && 1UL)) | (safe_add_func_int32_t_s_s(l_314, 9L)));

            ;
            (*g_103) = p_17;
        }
        else
        {
            char *l_320 = &g_202;
            (*g_103) = (l_319 == ((*l_320) = (g_147 || p_18)));
        }

        ;
        for (p_17 = 0; (p_17 >= 10); ++p_17)
        {
            (*g_103) = (*g_103);
            return g_202;
        }
    }
    else
    {
        short *l_325 = &g_136;
        int **l_326 = &g_103;
        char *l_327 = &g_202;
        char *l_331 = &g_62;
        int *l_397 = &g_204;
        if ((((*l_327) = (((safe_lshift_func_uint8_t_u_s((&g_136 != ((*l_236) = l_325)), 3)) > ((l_219 != ((*l_326) = (void*)0)) >= g_156)) >= 0L)) < (safe_sub_func_uint16_t_u_u((((void*)0 == l_330) & (((*l_331) = (p_14 | p_18)) | g_145)), p_16))))
        {
            return g_141;
        }
        else
        {
            unsigned char *l_333 = &g_145;
            unsigned char **l_332 = &l_333;
            int *l_334 = &g_76;
            int l_369 = 0x297DA323L;
            int *l_374 = &g_79;
            int *l_378 = &g_79;
            g_103 = (*l_326);
            if ((((*l_332) = &p_15) == &g_145))
            {
                int l_342 = (-1L);
                int *l_343 = &g_76;
                (*l_326) = l_334;

                ;
                if (g_147)
                    goto lbl_344;
lbl_344:
                for (g_202 = (-8); (g_202 == 17); g_202 = safe_add_func_uint8_t_u_u(g_202, 5))
                {
                    for (g_147 = 0; (g_147 < 23); g_147 = safe_add_func_uint8_t_u_u(g_147, 2))
                    {
                        (*l_334) = 0xAD86DD0FL;
                    }
                    (*l_219) = func_19((((void*)0 == l_339) == p_15), p_16, g_202);
                    for (g_76 = 0; (g_76 != 12); ++g_76)
                    {
                        return l_342;
                    }
                    (*l_326) = l_343;
                }
                (*l_326) = &g_204;

                ;
            }
            else
            {
                unsigned char **l_346 = (void*)0;
                int **l_354 = &l_219;
                (*l_326) = (*l_326);
                (*l_334) = 0L;
                if (g_69)
                {
                    int *l_355 = &g_79;
                    unsigned *l_363 = &g_148;
                    unsigned l_370 = 0x936E5EAAL;
                    unsigned *l_375 = &g_69;
                    unsigned short *l_376 = (void*)0;
                    unsigned short *l_377 = &l_216;
                    if (p_16)
                    {
                        int **l_345 = &l_334;
                        unsigned char **l_347 = &l_333;
                        (*l_345) = ((*l_326) = l_219);

                        ;
                        ;
                        (**l_345) = 3L;
                        l_347 = l_346;

                        ;
                        (**l_354) = ((safe_mod_func_uint16_t_u_u((p_18 || 0x9741549FL), (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s(((((*l_355) > p_14) ^ ((*l_325) = (8UL <= 0xA7E5L))) >= (**l_326)), 2)), 4)))) == g_145);
                    }
                    else
                    {
                        unsigned short *l_356 = &l_216;
                        (*l_355) = (((g_141 < g_156) || (((*l_356) = 0x10ACL) & (-1L))) >= 5L);
                        return (*l_219);
                    }

                    ;
                    ;
                    (*l_374) = (safe_rshift_func_uint16_t_u_u(((*l_219) | ((safe_add_func_uint8_t_u_u((*l_334), (safe_mod_func_int32_t_s_s(0xB2BAB85AL, ((*l_363) = p_18))))) > 0x00L)), ((safe_rshift_func_int16_t_s_u(0L, ((*l_377) = func_52(l_354, func_56(((*l_375) = (((safe_unary_minus_func_uint8_t_u((safe_sub_func_int32_t_s_s((l_370 = l_369), (safe_mul_func_int16_t_s_s((((safe_unary_minus_func_int32_t_s((((g_62 = ((*l_327) = func_52(l_326, &g_103, l_374))) & 0L) >= (**l_354)))) <= p_16) & 0x6CC3736BL), p_15)))))) | (**l_354)) | g_145)), p_15), l_374)))) && 0xC160A19EL)));


                }
                else
                {
                    (*l_326) = l_378;

                    ;
                }


                ;
                l_378 = ((*l_326) = l_219);

                ;
                ;
            }

            ;
            ;
            ;
            ;
        }

        ;
        ;
        (*l_219) = (*g_103);
        (*l_326) = l_379;

        ;
        for (g_62 = 0; (g_62 >= (-6)); --g_62)
        {
            short *l_388 = &g_36;
            unsigned short *l_389 = &l_216;
            int l_390 = 0x8C7A0681L;
            (*l_326) = (void*)0;

            ;
            if (((safe_lshift_func_uint8_t_u_u((g_309 == (g_202 = (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(((*l_389) = ((g_145 != 4294967295UL) | (l_325 == l_388))), 14)), (l_390 || g_76))))), l_390)) >= ((safe_mod_func_uint8_t_u_u(func_19(g_62, g_69, g_36), g_148)) > p_17)))
            {
                unsigned char l_393 = 1UL;
                if (l_393)
                    break;
                (*l_219) = l_393;
                (*l_219) = (((g_76 >= (((*l_327) = (func_19(g_204, (func_19(g_4, (safe_mul_func_int16_t_s_s((**l_326), 5UL)), l_396) && (**l_326)), l_393) & 0x794AL)) <= g_76)) < p_16) <= l_390);
                (*l_326) = l_397;

                ;
            }
            else
            {
                unsigned char l_416 = 248UL;
                (**l_326) = (safe_lshift_func_uint8_t_u_s(((~((*l_219) = (safe_mod_func_int8_t_s_s(((*l_327) = 2L), (g_309 && (safe_sub_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(g_141, 2)), (**l_326))) | (safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(g_308, 6)), g_414))) ^ (safe_unary_minus_func_int32_t_s((*l_397)))), p_18))))))) >= ((((((*g_103) != l_416) >= g_414) <= p_16) == 0x080BL) < g_414)), 3));
                if (p_15)
                    break;
                return l_390;
            }

            ;
        }

        ;
    }

    ;
    ;
    return p_17;
}







static char func_19(short p_20, short p_21, short p_22)
{
    int *l_209 = &g_76;
    int **l_210 = &g_103;
    int **l_211 = &l_209;
    int *l_213 = &g_76;
    int **l_212 = &l_213;
    int *l_215 = (void*)0;
    int **l_214 = &l_215;
    (*l_214) = ((*l_212) = ((*l_211) = ((*l_210) = l_209)));

    ;
    ;
    return g_148;
}







static short func_23(unsigned p_24, int p_25, unsigned short p_26, int p_27, unsigned p_28)
{
    unsigned l_192 = 0xE34B6610L;
    int *l_207 = &g_204;
    int **l_208 = &l_207;
    for (g_62 = (-10); (g_62 <= (-13)); g_62 = safe_sub_func_int8_t_s_s(g_62, 2))
    {
        for (g_76 = (-4); (g_76 > 25); ++g_76)
        {
            unsigned short l_184 = 65527UL;
            for (p_28 = (-22); (p_28 != 43); p_28++)
            {
                short *l_187 = &g_141;
                int *l_195 = &g_4;
                char *l_200 = (void*)0;
                char *l_201 = &g_202;
                int *l_203 = &g_204;
                int **l_205 = &l_195;
                int **l_206 = &g_103;
                (*g_103) = (safe_rshift_func_uint8_t_u_s(p_24, l_184));
                (*l_203) = ((*g_103) = (safe_add_func_int16_t_s_s(((*l_187) = g_156), ((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(g_156, 7)), (l_192 != p_24))) < ((safe_mod_func_int32_t_s_s((((void*)0 != l_195) && (((*l_201) = ((safe_mul_func_uint8_t_u_u((0L & (safe_mod_func_int16_t_s_s(((*l_195) != p_26), p_25))), (-1L))) && g_62)) != g_148)), g_76)) < g_76)))));
                (*l_206) = ((*l_205) = &p_25);

                ;
                ;
            }

            ;
            (*g_103) = 3L;
            return p_27;


        }
        g_103 = &g_79;
    }
    p_25 = l_192;
    (*l_208) = l_207;
    (*l_208) = func_47(&p_25);


    ;
    return p_27;


}







static int func_30(short p_31, unsigned p_32, unsigned char p_33)
{
    int *l_173 = &g_4;
    int **l_174 = &g_103;
    int **l_175 = &l_173;
    (*l_174) = func_47(l_173);

    ;
    (*l_175) = ((*l_174) = &g_79);

    ;
    ;
    (**l_175) = (*g_103);
    return p_33;
}







static unsigned char func_39(unsigned p_40, short p_41, int p_42, unsigned char p_43, char p_44)
{
    int *l_49 = &g_4;
    int **l_165 = &g_103;
    (*l_165) = func_47(l_49);

    ;
    for (g_148 = 0; (g_148 != 45); g_148 = safe_add_func_int32_t_s_s(g_148, 2))
    {
        for (p_44 = 3; (p_44 != (-1)); p_44--)
        {
            short l_170 = 0L;
            (*l_165) = (void*)0;

            ;
            g_76 = (&p_41 != &p_41);
            return l_170;
        }
        (*g_103) = (g_136 ^ 4UL);
    }
    (**l_165) = p_44;
    (*l_165) = &p_42;

    ;
    return p_44;


}







static int * func_47(int * p_48)
{
    int *l_51 = &g_4;
    int **l_50 = &l_51;
    short *l_59 = &g_36;
    int *l_89 = &g_4;
    int l_157 = 1L;
    int *l_164 = &g_79;
    (*l_50) = &g_4;
    if (func_52(func_56((*l_51), ((*l_59) = (*l_51))), g_88, l_89))
    {
        (*l_50) = (*l_50);
        (*l_50) = (*l_50);
    }
    else
    {
        int **l_113 = &l_51;
        unsigned short *l_154 = (void*)0;
        unsigned short *l_155 = &g_156;
lbl_129:
        (*l_50) = p_48;


        for (g_36 = (-9); (g_36 > (-24)); g_36 = safe_sub_func_int8_t_s_s(g_36, 7))
        {
            int *l_110 = &g_79;
            (*l_50) = l_110;

            ;
            (*l_50) = (*l_50);
            if (func_52(&l_110, &p_48, l_110))
            {
                unsigned char l_122 = 0x2BL;
                (*l_51) = ((safe_add_func_uint8_t_u_u(4UL, 0x45L)) <= g_62);
                if (((**l_50) = func_52(l_113, l_113, &g_79)))
                {
                    unsigned char l_121 = 255UL;
                    l_110 = p_48;


                    if ((*l_51))
                    {
                        unsigned char l_123 = 251UL;
                        (**l_113) = ((func_52(&l_89, &g_103, p_48) ^ ((((g_4 ^ (g_4 == 0x6C03L)) ^ (safe_lshift_func_uint8_t_u_u((*l_89), 0))) != (((((safe_lshift_func_int16_t_s_s(((safe_unary_minus_func_uint32_t_u((l_121 < 0xD0B9L))) > 0x515EL), 10)) >= (*l_110)) | l_122) == l_122) == 5UL)) & 8UL)) && (*l_89));
                        if ((*p_48))
                            continue;
                        if (l_123)
                            continue;
                    }
                    else
                    {
                        char l_126 = (-1L);
                        (*l_51) = 8L;
                        (*l_51) = (safe_mod_func_uint8_t_u_u(l_126, (1L ^ (*l_110))));
                        (*l_50) = &g_76;

                        ;
                    }

                    ;
                }
                else
                {
                    (*l_113) = (void*)0;

                    ;
                }

                ;

                g_76 = 0L;
            }
            else
            {
                unsigned l_139 = 0x21B67715L;
                for (g_69 = (-17); (g_69 > 28); g_69 = safe_add_func_uint16_t_u_u(g_69, 3))
                {
                    int **l_134 = (void*)0;
                    short *l_135 = &g_136;
                    short *l_140 = &g_141;
                    unsigned char *l_144 = &g_145;
                    unsigned char *l_146 = &g_147;
                    if (g_69)
                        goto lbl_129;
                    (*l_50) = &g_76;

                    ;
                    if ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((*l_135) = func_52(l_134, l_134, (*l_50))), ((safe_lshift_func_uint8_t_u_u(((*l_146) = ((*l_144) = (((l_139 == 251UL) | (~((*l_140) = g_4))) > ((safe_rshift_func_int8_t_s_u((3UL != (g_62 && l_139)), g_36)) != g_69)))), 4)) != g_148))), l_139)))
                    {
                        int *l_149 = &g_76;
                        (**l_113) = (0xE1L && 0x55L);
                        return l_149;


                    }
                    else
                    {
                        (*l_51) = func_52(&g_103, &g_103, &g_79);
                    }
                    for (g_62 = 24; (g_62 >= 27); g_62++)
                    {
                        if ((**l_50))
                            break;
                    }
                }

                ;
                (*l_51) = (**l_113);
                if ((**l_113))
                    break;
            }

            ;

        }


        l_157 = ((safe_lshift_func_uint16_t_u_u(g_36, ((*l_155) = g_36))) | ((*l_89) != g_136));
        for (g_136 = 0; (g_136 >= 1); g_136++)
        {
            unsigned l_162 = 0xA6C347B9L;
            int *l_163 = &l_157;
            (*l_50) = (*l_50);
            for (g_69 = 0; (g_69 >= 41); ++g_69)
            {
                if (l_162)
                    break;
                (*l_50) = l_163;

                ;
                if ((*p_48))
                    break;
                (**l_50) = 0L;
            }
        }


    }


    g_103 = ((*l_50) = (*l_50));


    return l_164;



}







static int func_52(int ** p_53, int ** p_54, int * p_55)
{
    int *l_90 = &g_76;
    volatile unsigned ***l_94 = &g_91;
    (*l_90) = (g_69 | g_4);
    (*l_94) = g_91;
    for (g_76 = (-12); (g_76 != (-1)); g_76 = safe_add_func_uint16_t_u_u(g_76, 3))
    {
        short l_102 = 0x3545L;
        int l_107 = 5L;
        for (g_79 = 0; (g_79 < 6); ++g_79)
        {
            short *l_100 = &g_36;
            short **l_99 = &l_100;
            short ***l_101 = &l_99;
            (*l_101) = l_99;
            return l_102;
        }
        g_103 = l_90;

        ;
        for (l_102 = 0; (l_102 > 11); l_102 = safe_add_func_int16_t_s_s(l_102, 9))
        {
            int *l_106 = &g_79;
            l_107 = ((*l_106) = (*p_55));
        }
        g_103 = &l_107;

        ;
    }
    (*l_90) = ((*l_90) | (*l_90));
    return (*p_55);
}







static int ** func_56(unsigned p_57, short p_58)
{
    int *l_60 = (void*)0;
    int *l_61 = (void*)0;
    int l_86 = 0x4437F0D3L;
    int **l_87 = &l_60;
    g_62 = 0L;
    if (g_4)
    {
        unsigned l_74 = 0xAEA381E1L;
        for (p_58 = 1; (p_58 > (-3)); p_58 = safe_sub_func_int8_t_s_s(p_58, 1))
        {
            for (g_36 = 0; (g_36 == (-22)); g_36 = safe_sub_func_uint16_t_u_u(g_36, 2))
            {
                g_69 = (safe_rshift_func_uint16_t_u_u((g_4 > p_58), 0));
            }
            for (g_69 = 0; (g_69 >= 5); ++g_69)
            {
                int **l_80 = (void*)0;
                int **l_81 = &l_60;
                if (p_57)
                    break;
                for (g_62 = 0; (g_62 < (-29)); g_62 = safe_sub_func_int32_t_s_s(g_62, 5))
                {
                    int *l_75 = &g_76;
                    int *l_77 = (void*)0;
                    int *l_78 = &g_79;
                    (*l_78) = ((*l_75) = ((l_74 & 0x4592L) == g_4));
                }
                (*l_81) = &g_4;

                ;
            }
        }

        ;
    }
    else
    {
        unsigned char l_84 = 0xF2L;
        unsigned *l_85 = &g_69;
        g_76 = (safe_mul_func_int16_t_s_s((((*l_85) = l_84) || l_86), p_58));
    }

    ;
    (*l_87) = &g_79;

    ;
    return g_88;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    transparent_crc(g_414, "g_414", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
