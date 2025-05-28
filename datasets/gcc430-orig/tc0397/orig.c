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



static int g_2 = (-5L);
static char g_8 = (-1L);
static short g_10 = 2L;
static int g_31 = 9L;
static unsigned short g_46 = 5UL;
static int ***g_63 = (void*)0;
static unsigned char g_65 = 1UL;
static int g_78 = 0x72E30E5DL;
static const unsigned short g_85 = 0xAE52L;
static const unsigned short *g_84 = &g_85;
static int g_101 = 0x3326EEDAL;
static int g_102 = 1L;
static int g_146 = 0x0E8CD9E3L;
static int g_148 = 0L;
static unsigned short g_163 = 0xBB67L;
static short g_185 = 0x2E4EL;
static int *g_211 = &g_78;
static unsigned g_241 = 0xBB07CFFEL;
static int g_270 = (-1L);
static char g_280 = 0x2EL;
static short g_293 = 0x3495L;
static short g_295 = 1L;
static int g_304 = 0x94C20FC5L;
static const unsigned short ***g_343 = (void*)0;
static char g_422 = 0xCDL;
static int g_461 = 0xF9B95104L;
static int *g_463 = &g_270;
static int * const *g_462 = &g_463;
static unsigned char *g_471 = &g_65;
static unsigned char **g_470 = &g_471;
static unsigned g_495 = 0UL;
static int **g_520 = (void*)0;
static int ***g_519 = &g_520;
static int *g_550 = &g_304;
static int g_579 = 0x3B752332L;
static unsigned char g_625 = 252UL;



static unsigned func_1(void);
static unsigned func_21(unsigned p_22, unsigned short p_23, short p_24, int p_25, int p_26);
static short func_36(unsigned p_37, unsigned short p_38, int * p_39);
static unsigned short func_47(int p_48, int ** p_49, short p_50, char p_51);
static int func_52(unsigned p_53, int p_54, unsigned short * p_55, unsigned p_56, int ** p_57);
static unsigned func_60(char p_61, int *** p_62);
static unsigned char func_66(int p_67);
static int * func_68(int * const p_69, int *** p_70);
static int * func_71(short p_72, unsigned p_73, int * const * p_74);
static int func_75(int p_76);
static unsigned func_1(void)
{
    int l_7 = 0x3A11C157L;
    unsigned *l_465 = &g_241;
    unsigned short *l_475 = &g_163;
    unsigned short *l_476 = (void*)0;
    unsigned short *l_477 = &g_46;
    unsigned short l_478 = 65535UL;
    short l_487 = 1L;
    int **l_491 = (void*)0;
    const char l_507 = 0xE2L;
    int * const l_518 = &g_2;
    char l_554 = (-1L);
    int *l_679 = &g_270;
    for (g_2 = 23; (g_2 >= 5); g_2 = safe_sub_func_int16_t_s_s(g_2, 3))
    {
        char l_9 = 5L;
        char *l_464 = &g_422;
    }
    if (((func_21((&g_241 == l_465), ((*l_477) = (safe_sub_func_uint8_t_u_u(l_7, (safe_lshift_func_uint8_t_u_u((g_470 != (void*)0), (safe_unary_minus_func_uint16_t_u((((((((safe_sub_func_int32_t_s_s(((*g_211) = (*g_211)), ((*l_465) = l_7))) , ((*l_475) = (((*g_211) <= g_422) , 65532UL))) | (*g_84)) == 0xD1F4L) | l_7) > 0UL) ^ 1UL)))))))), l_478, l_478, (*g_463)) < g_10) , l_478))
    {
        int *l_490 = &g_304;
        int l_492 = (-4L);
        unsigned *l_493 = (void*)0;
        unsigned *l_494 = &g_495;
        int l_528 = (-1L);
        int l_529 = (-1L);
        int l_570 = 0x8FC47F6CL;
        int * const *l_582 = &g_463;
        unsigned l_619 = 0x4C1011A9L;
        int ***l_649 = (void*)0;
        int *l_650 = &g_2;
        int *l_653 = (void*)0;
        if ((*g_463))
        {
            unsigned short l_506 = 0xEEEFL;
            unsigned char l_512 = 0x66L;
            int l_514 = 0xA327C73EL;
            int *l_525 = &l_514;
            int *l_530 = &l_529;
            (*g_463) = (l_492 > (safe_div_func_int16_t_s_s((((((((g_163 = (safe_rshift_func_uint8_t_u_s(((g_270 < (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(l_492, 1)), func_66(g_101)))) , (((*g_471) && ((*g_84) , g_10)) && ((safe_lshift_func_uint8_t_u_u(l_492, (**g_470))) > (-1L)))), 3))) != l_506) || (**g_470)) > (*g_471)) , l_507) < (-9L)) , g_280), l_492)));
            if ((*g_211))
            {
                int **l_508 = &g_463;
                int **l_511 = &g_463;
                (*l_508) = &l_492;
                (*g_211) = ((**g_462) = 0xAEF4B3A1L);
                (*l_511) = ((safe_lshift_func_int8_t_s_s(g_10, g_31)) , (*g_462));
                (*l_511) = &l_492;
            }
            else
            {
                short *l_513 = &g_10;
                int l_515 = 0x3A19758BL;
                int **l_521 = &g_211;
                int **l_522 = &g_463;
                if (((l_514 = ((*l_513) = l_512)) >= (g_293 = g_78)))
                {
                    l_515 = ((*g_463) = 0L);
                }
                else
                {
                    int **l_516 = (void*)0;
                    int **l_517 = &g_211;
                    (*l_517) = &l_492;
                }
                (*l_521) = (*g_462);
                (*l_522) = (*g_462);
            }
            (*g_211) = (&l_478 == &l_506);
            (*l_530) = ((safe_sub_func_uint16_t_u_u((((*g_211) = (0xA0L > ((**g_470) = 0x8CL))) < ((*l_525) = l_506)), ((safe_add_func_int32_t_s_s(func_47(g_85, ((!((0x033FL || (*g_84)) < (l_512 | ((+l_528) , (l_492 < g_280))))) , &l_525), l_528, g_422), l_529)) != 0xA0BEL))) < g_295);
        }
        else
        {
            unsigned char ***l_533 = &g_470;
            const int l_553 = 1L;
            if ((safe_lshift_func_int16_t_s_u(((((g_270 , l_529) , ((*l_490) = func_75(g_295))) , &g_471) != ((*l_533) = &g_471)), 1)))
            {
                int ****l_541 = &g_63;
                int *****l_540 = &l_541;
                (*g_463) = (safe_div_func_uint32_t_u_u(g_31, (((safe_add_func_uint16_t_u_u(65535UL, 0L)) | (((*l_540) = &g_63) != &g_519)) & (g_2 == (safe_lshift_func_uint16_t_u_s(0xD0F1L, 4))))));
            }
            else
            {
                int **l_551 = (void*)0;
                int **l_552 = &l_490;
                int l_563 = 6L;
                short *l_580 = (void*)0;
                short *l_581 = &g_10;
                int **l_583 = &g_211;
                int ***l_584 = &l_552;
                unsigned l_632 = 0x879AAA74L;
                unsigned * const *l_644 = &l_465;
                (*g_211) = (((((safe_add_func_uint8_t_u_u((4294967293UL || (((((safe_rshift_func_int8_t_s_s((1L <= (safe_lshift_func_uint16_t_u_s(l_553, 6))), 7)) <= g_85) ^ g_101) , l_554) != 0xF1L)), 0x00L)) , 0x73L) , (void*)0) != &g_495) ^ 0L);
                (*l_583) = func_71(l_492, (safe_rshift_func_uint8_t_u_s(((g_241 = (safe_sub_func_int16_t_s_s((~(safe_mod_func_int8_t_s_s(g_185, ((**g_470) = (l_528 && ((*l_581) = (safe_div_func_int16_t_s_s(l_563, ((*l_475) = ((safe_mod_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s(func_47((safe_sub_func_uint32_t_u_u((((((g_270 , (*g_471)) || l_570) < (safe_div_func_uint32_t_u_u((((((safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u(g_461, (safe_lshift_func_uint8_t_u_s(g_579, 1)))), (*l_518))) <= l_563) <= g_163) , 0xB10B6447L) < g_85), (**g_462)))) <= 4UL) < 0x07L), 0xEE152A4AL)), (*g_519), l_563, g_65), 5)) >= 0xD5L), l_528)) , l_563)))))))))), 0x992CL))) != l_492), 0)), l_582);
                (*l_584) = &l_490;
                if ((*l_518))
                {
                    short l_592 = 0xB358L;
                    char *l_597 = (void*)0;
                    int l_608 = 0x37E573F3L;
                    int **l_609 = &g_211;
                    const int *l_611 = (void*)0;
                    const int **l_610 = &l_611;
                    unsigned short *l_630 = &g_46;
                    int **l_634 = &g_211;
                    (*g_463) = ((void*)0 == (*g_470));
                    (*l_610) = (((safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((((safe_mod_func_int32_t_s_s(((**l_583) = (safe_rshift_func_int8_t_s_s(l_592, (0x674FF210L && (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((g_280 = g_148) , g_146), 7)), 0x119D7064L)))))), ((*g_463) = (safe_div_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u((func_47((safe_rshift_func_int8_t_s_u(((l_608 = (g_293 = ((*l_581) = (safe_div_func_int8_t_s_s(g_293, (safe_add_func_uint32_t_u_u(((func_47((l_553 , ((*g_84) , ((g_304 != (*g_471)) ^ 0x46F44C14L))), (*g_519), g_495, g_8) <= 0x9BAEL) > l_553), (**l_582)))))))) || l_592), 5)), l_609, g_102, g_295) && g_270), 12)) , (*g_463)), (**l_582)))))) < 0L) == 0x0533C85AL))), l_553)) != g_2) , &l_553);
                    if ((*g_463))
                    {
                        int l_618 = (-6L);
                        int *l_620 = &g_461;
                        char *l_621 = (void*)0;
                        char *l_622 = &l_554;
                        (*l_610) = func_71(g_2, g_102, (*g_519));
                        (*l_620) = (**l_583);
                    }
                    else
                    {
                        unsigned short **l_631 = &l_475;
                        int *l_633 = &g_78;
                        (**l_609) = ((0x6DL <= (g_10 && (((((safe_div_func_int8_t_s_s(g_625, (safe_div_func_uint8_t_u_u(255UL, (safe_rshift_func_int8_t_s_s((g_8 = (((l_553 , l_581) != (l_553 , ((*l_631) = l_630))) , (-2L))), 2)))))) && (*l_518)) && g_280) & l_632) || (-8L)))) , (**l_582));
                        (*l_609) = l_633;
                    }
                    (*l_634) = (*l_582);
                }
                else
                {
                    unsigned l_641 = 0UL;
                    int * const *l_642 = &g_211;
                    int **l_643 = &g_211;
                    unsigned * const **l_645 = &l_644;
                    (*l_643) = func_71((safe_div_func_int8_t_s_s((safe_div_func_int8_t_s_s(((((safe_add_func_int16_t_s_s(l_553, (-3L))) , func_71((g_2 , g_78), l_641, l_642)) == ((func_47((*g_550), l_643, (*l_518), g_280) , g_293) , (void*)0)) | 0xE7L), (**l_642))), 1UL)), (**l_642), (*g_519));
                    (*l_645) = l_644;
                }
            }
        }
        for (g_295 = 9; (g_295 > (-9)); g_295 = safe_sub_func_int8_t_s_s(g_295, 9))
        {
            unsigned l_648 = 0x2FE388D5L;
            int **l_656 = &l_653;
            (*l_518) = ((1L && l_648) , ((**g_462) = (((void*)0 != l_649) >= 0xA9L)));
            l_650 = (g_211 = (void*)0);
            for (l_619 = 0; (l_619 == 56); ++l_619)
            {
                int **l_654 = &l_650;
                int **l_655 = &l_650;
                (*l_654) = l_653;
                (*l_655) = (*l_582);
                (*l_655) = (void*)0;
            }
            (*l_656) = (*l_582);
        }
    }
    else
    {
        int l_657 = (-1L);
        unsigned char *l_674 = (void*)0;
        char *l_675 = &g_280;
        int *l_676 = &g_461;
        (*l_518) = l_657;
        (*l_518) = (safe_mod_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(((*l_518) | (safe_add_func_uint8_t_u_u((*g_471), (safe_lshift_func_uint16_t_u_s(((g_163 > func_47(((safe_add_func_uint16_t_u_u((*g_84), (((*g_211) <= (0x57E6AFCAL | ((**g_462) = ((safe_lshift_func_uint8_t_u_u(((!((g_304 <= ((g_625 = (*g_471)) != ((*l_675) = g_78))) , g_293)) , 1UL), 4)) || g_148)))) || l_657))) ^ g_8), l_491, (*l_518), g_461)) , 0xFB5BL), 1))))), 0)), 2)), 0x2AL)) | 0xBD122721L), 65533UL));
        l_676 = &l_7;
    }
    for (l_7 = 9; (l_7 >= (-12)); l_7--)
    {
        l_679 = (void*)0;
    }
    return g_31;
}







static unsigned func_21(unsigned p_22, unsigned short p_23, short p_24, int p_25, int p_26)
{
    int *l_29 = (void*)0;
    int *l_30 = &g_31;
    unsigned l_365 = 0xDEDA8038L;
    int **l_369 = &l_30;
    unsigned l_370 = 0xB4429329L;
    short l_427 = 1L;
    char *l_444 = &g_280;
    if (((*l_30) = 0x5DC64F6BL))
    {
        int **l_33 = &l_30;
        int ***l_32 = &l_33;
        unsigned short *l_44 = (void*)0;
        unsigned short *l_45 = &g_46;
        unsigned short *l_114 = &g_46;
        unsigned short **l_420 = (void*)0;
        unsigned short ***l_419 = &l_420;
        int l_426 = 0xC6D283DCL;
        (*l_32) = (void*)0;
        (*l_30) = (g_8 != (&p_26 != (((g_31 , g_2) <= (func_36(((&g_2 != ((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(((p_24 ^ ((*l_45) = g_31)) || func_47(func_52((g_8 , (safe_sub_func_uint32_t_u_u(func_60(g_31, g_63), p_23))), g_46, l_114, p_25, &l_29), &l_30, p_24, g_304)), p_25)), p_25)) , l_30)) != (*l_30)), g_2, l_30) < 65535UL)) , &p_26)));
        for (p_22 = 0; (p_22 > 42); ++p_22)
        {
            int **l_368 = &l_29;
            unsigned short **l_418 = &l_114;
            unsigned short ***l_417 = &l_418;
            char *l_421 = &g_422;
            int ****l_423 = &l_32;
            int ****l_424 = &g_63;
            int *l_425 = &g_304;
            (*l_368) = ((*l_369) = func_71((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(p_26, 14)), p_23)), l_370)), p_26)), p_26, &l_30));
            for (g_280 = 0; (g_280 >= (-2)); g_280--)
            {
                unsigned char *l_373 = &g_65;
                int l_375 = 0x44B6E038L;
                const unsigned *l_405 = &g_241;
                int **l_406 = &l_29;
                if (((**l_368) & ((*l_373) = (func_60(g_78, g_63) , g_78))))
                {
                    char l_374 = 0xDAL;
                    int * const *l_376 = &l_30;
                    (*l_368) = &g_2;
                    (*l_369) = func_71(l_374, l_375, l_376);
                    for (p_25 = (-28); (p_25 != (-11)); p_25 = safe_add_func_int32_t_s_s(p_25, 1))
                    {
                        (**l_376) = func_66(g_163);
                        if (p_23)
                            continue;
                        (*l_30) = 0x9D42AF56L;
                        if ((**l_368))
                            break;
                    }
                }
                else
                {
                    int *l_379 = &g_2;
                    int *l_392 = (void*)0;
                    int *l_393 = &g_270;
                    int **l_394 = (void*)0;
                    int *l_396 = &g_101;
                    int **l_395 = &l_396;
                    (*l_368) = l_379;
                    (*l_393) = ((*l_30) = (((0x964395A0L <= (safe_mod_func_uint32_t_u_u(((l_375 , (-1L)) && g_101), p_22))) & ((safe_add_func_uint32_t_u_u(g_146, (safe_sub_func_uint32_t_u_u(((((*l_373) = (safe_mod_func_int16_t_s_s(0x0025L, ((*g_211) & (safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s((*g_211), l_375)), 0x9BL)))))) && 253UL) , 5UL), l_375)))) >= p_23)) , 0xE5EC7123L));
                    p_26 = ((((*l_395) = &p_25) == (((safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((g_241 && (safe_lshift_func_int16_t_s_s(((((*l_393) = func_75(func_47((p_25 | (safe_div_func_uint8_t_u_u((((*l_373) = (func_75((255UL | g_280)) || (l_375 , (((((g_2 , g_304) | g_146) || (**l_368)) , l_405) != (void*)0)))) | 0xF7L), 0xA8L))), l_406, p_22, g_304))) == 0x2C9BB3BCL) , 1L), g_8))), (-1L))), 7)) | (**l_368)) , &p_25)) , (*l_30));
                }
            }
            (*l_30) = ((safe_add_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((**l_368), ((p_23 = ((safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((g_280 = (-1L)) & (((((safe_add_func_uint8_t_u_u(g_163, ((*l_421) = (l_417 == l_419)))) & (l_426 = func_47(((*l_425) = func_60(p_26, ((*l_424) = ((*l_423) = &l_369)))), &g_211, (*l_29), p_26))) | 4294967290UL) , (void*)0) == &g_211)), 0x30L)), g_293)) ^ 0xF5L)) | p_26))) , l_427), 255UL)) > 0x25L);
            p_26 = ((***g_63) = ((safe_lshift_func_int8_t_s_u((*l_30), (safe_lshift_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_s(0x8EL, 7)) & (safe_lshift_func_int8_t_s_s(((*l_421) = 7L), 7))) > (safe_div_func_int16_t_s_s((safe_div_func_int32_t_s_s(p_23, (safe_rshift_func_uint8_t_u_u(g_102, ((void*)0 == l_444))))), p_24))), g_304)) != (***l_32)), 9)))) != (****l_424)));
        }
    }
    else
    {
        int **l_457 = &l_29;
        const int l_459 = 0xBDA03C29L;
        int *l_460 = &g_270;
        for (l_365 = 0; (l_365 == 24); l_365 = safe_add_func_uint16_t_u_u(l_365, 9))
        {
            char *l_451 = &g_8;
            int l_456 = 0xE7F72A6FL;
            int *l_458 = &g_146;
        }
        (*l_457) = &p_26;
        (*l_457) = func_68((*g_462), &l_457);
    }
    return p_25;
}







static short func_36(unsigned p_37, unsigned short p_38, int * p_39)
{
    unsigned char *l_323 = &g_65;
    unsigned char **l_324 = (void*)0;
    unsigned char **l_325 = (void*)0;
    unsigned char **l_326 = &l_323;
    int * const *l_330 = &g_211;
    int **l_331 = &g_211;
    char *l_332 = &g_280;
    int l_333 = 0x9FFD0D49L;
    unsigned short *l_348 = &g_46;
    unsigned short **l_347 = &l_348;
    (*g_211) = 5L;
    (**l_330) = (safe_unary_minus_func_uint16_t_u(((safe_rshift_func_int16_t_s_s(((&g_65 == ((*l_326) = l_323)) > ((safe_unary_minus_func_uint16_t_u(0xE6B1L)) , 0xB268L)), ((((g_270 ^ (g_78 > ((*g_84) >= (*g_84)))) | (((*l_332) = (safe_rshift_func_int8_t_s_s((func_47(((void*)0 == l_330), l_331, p_38, p_38) == p_38), g_102))) , p_37)) || (**l_331)) ^ l_333))) & g_163)));
    for (g_65 = 0; (g_65 >= 45); g_65++)
    {
        short l_336 = 0x6016L;
        (*g_211) = func_47(l_336, l_331, ((safe_mod_func_int32_t_s_s(((**l_331) = (safe_sub_func_uint8_t_u_u((**l_331), (safe_div_func_uint32_t_u_u((((((g_343 != (void*)0) == (0xF5056CABL | ((g_280 , ((*g_211) || (**l_331))) || 0x9FL))) >= l_336) <= 0L) <= 0L), l_336))))), p_38)) , 0x5A4DL), l_336);
        (*g_211) = (*g_211);
        (*g_211) = (p_37 , (safe_unary_minus_func_int32_t_s((0x8FL == ((void*)0 == l_347)))));
    }
    for (g_148 = 0; (g_148 <= (-24)); g_148--)
    {
        (*l_331) = &g_2;
    }
    return p_38;
}







static unsigned short func_47(int p_48, int ** p_49, short p_50, char p_51)
{
    int *l_319 = &g_270;
    l_319 = &g_148;
    return (*g_84);
}







static int func_52(unsigned p_53, int p_54, unsigned short * p_55, unsigned p_56, int ** p_57)
{
    const char l_115 = (-1L);
    const unsigned char l_188 = 0x04L;
    int *l_242 = &g_2;
    int **l_260 = &l_242;
    unsigned short l_265 = 4UL;
    unsigned short *l_289 = &g_163;
    unsigned short **l_288 = &l_289;
    unsigned short ***l_287 = &l_288;
    int *l_302 = &g_146;
    int *l_303 = &g_304;
    int l_305 = 0xF6D19666L;
    short *l_312 = &g_295;
    unsigned *l_317 = &g_241;
    unsigned char *l_318 = &g_65;
    if ((((l_115 > g_78) & l_115) & p_53))
    {
        unsigned l_118 = 0x0B685EF4L;
        const unsigned char l_209 = 0xD1L;
        int l_226 = 0x761F95EDL;
        int *l_236 = &g_146;
        for (g_102 = (-7); (g_102 < (-17)); --g_102)
        {
            int *l_119 = &g_78;
            int l_217 = 0xCDA2E417L;
            (*l_119) = func_75(l_118);
            for (p_56 = 0; (p_56 == 11); p_56 = safe_add_func_int16_t_s_s(p_56, 9))
            {
                unsigned l_164 = 3UL;
                int **l_172 = &l_119;
                int ***l_171 = &l_172;
                unsigned char l_181 = 0UL;
                int l_191 = 1L;
                for (p_53 = 11; (p_53 < 53); ++p_53)
                {
                    for (l_118 = 0; (l_118 >= 18); ++l_118)
                    {
                        unsigned l_126 = 4294967295UL;
                        return l_126;
                    }
                }
                for (g_101 = 0; (g_101 <= (-10)); g_101 = safe_sub_func_int32_t_s_s(g_101, 7))
                {
                    unsigned char l_186 = 0UL;
                }
                (**l_172) = l_188;
                for (g_148 = (-7); (g_148 < (-6)); g_148 = safe_add_func_int8_t_s_s(g_148, 9))
                {
                    short l_208 = 0x1242L;
                    int *l_214 = &g_78;
                    int *l_215 = (void*)0;
                    int *l_216 = &l_191;
                }
            }
            for (p_54 = 0; (p_54 != 6); p_54 = safe_add_func_int8_t_s_s(p_54, 8))
            {
                l_226 = (((*l_119) = (*g_211)) , ((*g_211) = ((((p_54 < ((*p_55) > (safe_lshift_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u(((*p_57) == (*p_57)), (g_31 != (*l_119)))) , (safe_div_func_uint32_t_u_u(((*l_119) > p_53), l_188))) , g_163), g_2)))) == 1L) , p_54) <= 254UL)));
            }
        }
        (*p_57) = func_71(g_65, (g_241 = (safe_div_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u(((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(p_56, (l_226 & ((*p_55) = func_75(((*l_236) = (g_31 == g_78))))))), l_188)) <= (p_56 | ((safe_add_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((l_209 , p_53), 5)) & 0L), l_115)) , p_56))))), g_185)), l_118))), p_57);
        (*p_57) = l_242;
        for (g_101 = 0; (g_101 < 23); g_101 = safe_add_func_int16_t_s_s(g_101, 4))
        {
            const char l_247 = 0x6CL;
            for (l_118 = 0; (l_118 == 55); l_118 = safe_add_func_int32_t_s_s(l_118, 2))
            {
                (*p_57) = &g_31;
            }
            (*g_211) = l_247;
        }
    }
    else
    {
        int l_261 = 1L;
        int l_264 = 2L;
        int * const **l_266 = (void*)0;
        int * const l_269 = &g_270;
        int * const *l_268 = &l_269;
        int * const **l_267 = &l_268;
        char *l_279 = &g_280;
        unsigned short ***l_290 = &l_288;
        short *l_291 = &g_185;
        short *l_292 = &g_293;
        short *l_294 = &g_295;
        unsigned char l_296 = 0x7AL;
        unsigned *l_297 = &g_241;
        (*g_211) = p_56;
        for (g_185 = 12; (g_185 < 9); g_185--)
        {
            unsigned l_250 = 0xEA6C1CABL;
            int ****l_251 = &g_63;
            int l_252 = 0x06F392B1L;
            (*g_211) = func_75(l_250);
            l_252 = func_60(l_250, (func_60(p_54, ((*l_251) = g_63)) , (void*)0));
            if (((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((*g_211) >= 0x9F9B9082L), 2)), 3)) , (*l_242)))
            {
                int **l_259 = &g_211;
                l_260 = ((safe_mod_func_uint32_t_u_u((p_55 != (void*)0), g_102)) , l_259);
                if ((*l_242))
                    continue;
                if ((*l_242))
                {
                    return l_261;
                }
                else
                {
                    const unsigned short **l_263 = &g_84;
                    const unsigned short ***l_262 = &l_263;
                    (*l_262) = &g_84;
                }
            }
            else
            {
                (*g_211) = (!(l_264 = (-8L)));
            }
        }
        (*p_57) = func_71(l_264, l_265, ((*l_267) = p_57));
        (*p_57) = func_71((**l_260), ((*l_297) = ((((safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((((*g_84) && ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((*l_279) = 0x32L), (((*l_269) = (**p_57)) > (safe_rshift_func_int8_t_s_s(((p_53 & ((safe_sub_func_uint32_t_u_u(((((safe_lshift_func_uint8_t_u_s(((**l_260) == (((l_287 != l_290) | (((*l_294) = ((*l_292) = ((*l_291) = ((*p_57) == (*p_57))))) <= p_54)) && p_54)), p_54)) < g_65) > 1UL) >= p_56), p_56)) != (***l_267))) , (-10L)), g_163))))), (*g_84))) > 4L)) | p_56) ^ 0x2134L), 0x209DL)), l_296)) , 0xB8BCL) , 0xE44EL) == (*p_55))), p_57);
    }
    l_305 = ((func_60((func_60(p_54, g_63) <= (0xE427L != (g_185 = g_146))), (((***l_287) = (safe_mod_func_uint32_t_u_u((l_302 == (l_303 = &g_146)), p_56))) , g_63)) < g_295) >= p_53);
    (*g_211) = (safe_sub_func_int8_t_s_s((((*l_318) = ((func_66(g_280) , (~(g_280 = p_56))) > ((safe_sub_func_int16_t_s_s(((*l_242) == (safe_rshift_func_int16_t_s_s(((*l_312) = 0x37C9L), 4))), (safe_lshift_func_uint8_t_u_u(((**p_57) && (((*l_317) = ((p_54 > 0xBCC8L) ^ (safe_lshift_func_int8_t_s_s((g_163 <= 0x1EC9L), p_56)))) ^ p_54)), 1)))) < (*l_242)))) , p_54), g_163));
    return g_8;
}







static unsigned func_60(char p_61, int *** p_62)
{
    unsigned char *l_64 = &g_65;
    int *l_103 = &g_78;
    int l_104 = (-10L);
    int **l_107 = (void*)0;
    int **l_108 = &l_103;
    unsigned l_109 = 4294967295UL;
    unsigned *l_110 = (void*)0;
    unsigned *l_111 = &l_109;
    int *l_112 = &l_104;
    l_104 = ((*l_103) = ((((*l_64) = 248UL) && (p_61 , func_66(g_65))) , 1L));
    if (((*l_112) = (g_101 ^ ((safe_mod_func_uint32_t_u_u(((((*l_108) = (void*)0) == (void*)0) == (l_109 >= (*g_84))), p_61)) , (g_31 < ((*l_111) = p_61))))))
    {
        int *l_113 = &l_104;
        l_113 = (*l_108);
    }
    else
    {
        (*l_108) = (*l_108);
    }
    return p_61;
}







static unsigned char func_66(int p_67)
{
    unsigned char l_81 = 255UL;
    const unsigned short *l_82 = &g_46;
    const unsigned short **l_83 = (void*)0;
    unsigned short *l_86 = &g_46;
    int * const *l_91 = (void*)0;
    int *l_97 = &g_2;
    int **l_96 = &l_97;
    int ***l_95 = &l_96;
    int *l_99 = &g_78;
    int *l_100 = &g_78;
    (*l_96) = func_68((p_67 , func_71((((func_75(g_46) > (safe_div_func_int8_t_s_s((l_81 || ((g_84 = l_82) == l_86)), ((~g_2) , (((l_81 != (((!(safe_lshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(g_65, g_31)), p_67))) , l_81) > 1L)) && 0x8CL) ^ p_67))))) && p_67) , 1L), l_81, l_91)), l_95);
    (*l_96) = (l_99 = (**l_95));
    g_78 = (**l_96);
    g_102 = (g_101 = (((*l_100) = func_75(p_67)) > p_67));
    return g_78;
}







static int * func_68(int * const p_69, int *** p_70)
{
    int *l_98 = &g_2;
    l_98 = l_98;
    return (**p_70);
}







static int * func_71(short p_72, unsigned p_73, int * const * p_74)
{
    int * const l_94 = &g_2;
    int * const *l_93 = &l_94;
    int * const **l_92 = &l_93;
    (*l_92) = p_74;
    return &g_31;
}







static int func_75(int p_76)
{
    int *l_77 = &g_78;
    (*l_77) = g_31;
    return (*l_77);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_422, "g_422", print_hash_value);
    transparent_crc(g_461, "g_461", print_hash_value);
    transparent_crc(g_495, "g_495", print_hash_value);
    transparent_crc(g_579, "g_579", print_hash_value);
    transparent_crc(g_625, "g_625", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
