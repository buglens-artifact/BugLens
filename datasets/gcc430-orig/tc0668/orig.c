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



static unsigned short g_12 = 0x43ACL;
static int g_18 = (-1L);
static char g_28 = 0x7BL;
static char g_30 = (-1L);
static int g_61 = 1L;
static unsigned char g_96 = 247UL;
static const volatile char g_100 = 0xBBL;
static const volatile char *g_99 = &g_100;
static const volatile char ** const g_98 = &g_99;
static unsigned g_113 = 0xAD473CB3L;
static unsigned short g_122 = 0x7C16L;
static unsigned g_134 = 0x0B0D0ED2L;
static unsigned char g_135 = 0UL;
static unsigned short g_139 = 0x320EL;
static short g_149 = 0xB19DL;
static unsigned g_198 = 4294967289UL;
static unsigned g_232 = 9UL;
static unsigned short g_235 = 3UL;
static int g_241 = (-9L);
static unsigned char g_253 = 0UL;
static int g_257 = (-1L);
static short g_305 = 0xE829L;
static unsigned g_321 = 0x7E789185L;
static volatile unsigned short g_324 = 0x23F3L;
static unsigned g_325 = 0xE283C532L;
static unsigned short g_329 = 9UL;
static unsigned g_385 = 3UL;
static int g_398 = 0x04157AFEL;
static char *g_436 = &g_30;
static char **g_435 = &g_436;
static volatile char ***g_496 = (void*)0;
static volatile char ****g_495 = &g_496;
static unsigned char g_511 = 7UL;
static char g_530 = 0x16L;
static volatile int g_531 = 0x4053C0D0L;
static volatile short g_645 = 1L;
static volatile short *g_644 = &g_645;
static volatile short **g_643 = &g_644;
static volatile int *g_649 = &g_531;
static unsigned char ***g_658 = (void*)0;
static const int g_669 = 0x58F382BEL;
static int g_694 = 1L;
static unsigned char *g_704 = &g_253;
static unsigned char **g_703 = &g_704;
static unsigned char ***g_702 = &g_703;
static char g_718 = 0x93L;



static unsigned short func_1(void);
static short func_2(unsigned short p_3, unsigned p_4);
static const int func_31(const unsigned char p_32, char * p_33, char * p_34);
static unsigned char func_35(char * p_36, unsigned p_37, int p_38);
static char * func_39(const char * p_40, char * const p_41, short p_42, short p_43, char p_44);
static char * func_45(char * p_46);
static char * func_47(unsigned short p_48);
static unsigned char func_52(char * p_53, int p_54, unsigned p_55, char * p_56, char p_57);
static char func_75(int * p_76, short p_77, char * const p_78, char * p_79);
static const short func_82(char p_83, char * p_84, unsigned p_85, char * p_86, int p_87);
static unsigned short func_1(void)
{
    unsigned l_5 = 0x36432A27L;
    int *l_684 = &g_61;
    char * const l_685 = &g_28;
    int *l_692 = (void*)0;
    int *l_693 = &g_694;
    unsigned char *l_701 = &g_135;
    unsigned char **l_700 = &l_701;
    unsigned char ***l_699 = &l_700;
    unsigned short l_711 = 0UL;
    char *l_712 = &g_530;
    unsigned short *l_713 = &g_329;
    int *l_714 = (void*)0;
    int *l_715 = &g_398;
    int l_716 = 8L;
    unsigned l_717 = 4294967291UL;
    char *l_719 = (void*)0;
    (*l_693) |= (func_2(l_5, l_5) , (((safe_lshift_func_int8_t_s_u(func_75(l_684, (*l_684), l_685, (((*l_685) = (safe_rshift_func_uint16_t_u_s(((*l_684) <= ((65535UL && (safe_div_func_int8_t_s_s((((safe_div_func_int16_t_s_s((*l_684), (*l_684))) > (*l_684)) != (*l_684)), (*l_684)))) < (*l_684))), (**g_643)))) , &g_30)), 2)) >= 2UL) | g_325));


    (*l_684) ^= (safe_mul_func_int8_t_s_s((0xFCL <= (safe_lshift_func_uint16_t_u_u(((*l_713) = (func_31((g_658 == (g_702 = l_699)), &g_530, &g_30) > (*l_693))), 5))), 1UL));

    ;
    (*l_684) = func_31(((-3L) & g_718), (func_82(func_75(&l_716, (*g_644), l_712, l_712), l_701, g_235, &g_530, (*l_693)) , l_719), l_701);
    return g_30;


}







static short func_2(unsigned short p_3, unsigned p_4)
{
    char *l_58 = &g_28;
    int l_389 = 0x5B77F47EL;
    char *l_405 = &g_28;
    int l_414 = (-1L);
    char ***l_437 = &g_435;
    unsigned short *l_440 = &g_12;
    unsigned short *l_441 = &g_235;
    unsigned short l_472 = 0x9657L;
    short l_493 = 1L;
    unsigned l_522 = 4294967292UL;
    int l_532 = 0L;
    unsigned l_546 = 0x39E1A226L;
    const short l_547 = 0x986AL;
    int *l_579 = &g_61;
    short l_588 = 0x9720L;
    unsigned char l_607 = 0x12L;
    int l_656 = (-2L);
    int l_677 = 0x980FCDB1L;
    for (p_4 = 0; (p_4 > 57); p_4 = safe_add_func_int32_t_s_s(p_4, 8))
    {
        unsigned char l_17 = 1UL;
        int l_413 = 0x64D5561AL;
        char *l_429 = &g_28;
        int l_432 = 0xEF38B845L;
        for (p_3 = (-17); (p_3 == 2); p_3 = safe_add_func_int16_t_s_s(p_3, 1))
        {
            char *l_27 = &g_28;
            char *l_29 = &g_30;
            int l_59 = 0xAD33D2AFL;
            char **l_399 = (void*)0;
            unsigned char *l_404 = &g_253;
            unsigned char *l_412 = &l_17;
            unsigned l_430 = 0x48AC9722L;
            char *l_431 = &g_30;
            unsigned *l_433 = &g_321;
            int *l_434 = &l_389;
            l_414 &= ((((safe_lshift_func_int16_t_s_u(g_12, 6)) & (safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((((g_18 ^= l_17) , l_17) , (g_12 == (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s(l_17, (!(-3L)))) , ((*l_29) = ((*l_27) = g_18))) || ((*l_412) |= (func_31((((*l_404) = func_35((l_58 = func_39(func_45(func_47((safe_unary_minus_func_uint16_t_u((safe_div_func_uint8_t_u_u(g_28, func_52(l_58, l_59, l_59, l_58, g_30))))))), &g_28, l_389, p_3, l_59)), g_232, g_28)) ^ p_4), &g_28, l_405) || g_96))), p_4)), 0xC7C0L)), 1)))), l_413)), 14))) & g_329) != g_232);

            ;
            (*l_434) &= ((safe_rshift_func_uint16_t_u_u(l_414, p_3)) <= (((g_135 ^ ((*l_433) = (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(l_17, ((safe_mod_func_int8_t_s_s(l_414, p_4)) && (-3L)))), (safe_rshift_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(g_325, ((func_31((safe_lshift_func_uint16_t_u_u(((~((+func_75(&l_414, l_59, l_405, l_429)) ^ l_414)) > (-1L)), l_430)), &g_28, l_431) && l_432) , 0xAEL))), g_329)))))) , (*g_99)) & 0x96L));
            return p_3;
        }
        if (p_3)
            break;
    }
    l_414 ^= (&g_99 == ((*l_437) = g_435));
    if (((((safe_add_func_uint16_t_u_u(8UL, ((g_435 = &g_436) != ((((*l_441) |= (((*l_440) = (((void*)0 == &p_4) , (p_4 , l_414))) , l_389)) && (safe_div_func_int32_t_s_s((safe_sub_func_int16_t_s_s((!(safe_mul_func_int8_t_s_s(p_3, 1UL))), p_3)), 1UL))) , (void*)0)))) == 0UL) | 0xE1L) , 0x994BD5D4L))
    {
        char ***l_451 = &g_435;
        char ****l_450 = &l_451;
        int l_459 = 5L;
        int l_461 = 7L;
        int *l_469 = &g_257;
        int **l_468 = &l_469;
        unsigned l_529 = 4294967288UL;
        g_61 &= (l_414 < (0UL != g_100));
        if ((p_3 && (safe_sub_func_int32_t_s_s(((l_389 , l_437) == ((*l_450) = l_437)), 0xEEBCE1E5L))))
        {
            unsigned l_463 = 4294967295UL;
            int *l_474 = &g_398;
            char *l_481 = &g_30;
            short *l_492 = &g_149;
            char * const l_494 = &g_28;
            char ****l_497 = &l_437;
            for (g_61 = (-21); (g_61 == (-29)); g_61--)
            {
                unsigned l_458 = 4294967295UL;
                char *l_460 = &g_28;
                int *l_462 = &l_461;
                int *l_465 = &g_257;
                int **l_464 = &l_465;
                int **l_480 = &l_462;
                const short *l_490 = &g_305;
                const short **l_491 = &l_490;
                if (((*l_462) = ((p_3 || (0UL ^ (safe_mod_func_int8_t_s_s(p_3, (((((safe_lshift_func_uint16_t_u_s((l_459 = ((p_3 || l_458) , (0L | g_241))), func_35(l_460, ((**g_98) > l_389), p_3))) <= l_461) , (-1L)) | g_241) & p_3))))) <= g_135)))
                {
                    int ***l_466 = (void*)0;
                    int ***l_467 = &l_464;
                    unsigned char *l_473 = &g_253;
                    (*l_462) = ((((~1UL) , (+l_463)) > (((*l_467) = l_464) != l_468)) ^ ((*l_473) = (safe_add_func_uint32_t_u_u(4294967295UL, l_472))));
                    if (g_232)
                        continue;
                }
                else
                {
                    int **l_475 = &l_462;
                    (*l_475) = l_474;

                    ;
                    (*l_475) = l_465;

                    ;
                    if (g_232)
                        break;
                }

                ;
                if (g_329)
                    break;
                if ((safe_mul_func_int16_t_s_s(p_4, (((safe_rshift_func_int8_t_s_s(((func_75(((*l_480) = &l_414), (((**l_437) = l_481) != (g_12 , (l_460 = l_481))), ((safe_mod_func_uint8_t_u_u(p_3, (safe_sub_func_uint8_t_u_u((p_3 , (safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s((((*l_491) = l_490) == l_492), g_305)), g_198))), l_493)))) , l_494), l_481) , g_495) != l_497), 0)) <= 1UL) <= l_414))))
                {
                    return p_3;
                }
                else
                {
                    char *l_512 = &g_30;
                    for (g_139 = 0; (g_139 <= 22); ++g_139)
                    {
                        int *l_500 = &l_414;
                        char *l_513 = &g_30;
                        unsigned char *l_514 = &g_135;
                        unsigned char *l_515 = &g_253;
                        unsigned *l_516 = &g_385;
                        if (g_61)
                            break;
                        (*l_474) = func_31((*l_474), ((*g_435) = ((((*l_516) = func_75(((*l_480) = l_500), (safe_mod_func_uint16_t_u_u(((g_18 != p_3) || func_31(((*l_515) ^= ((safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(((*l_500) = (((((safe_mod_func_int32_t_s_s((g_511 = p_3), p_4)) , ((*l_492) ^= g_325)) > (((*l_514) = ((func_31(p_3, (l_58 = ((**l_451) = l_512)), l_513) <= (*g_99)) , g_241)) , 1L)) >= 0UL) < g_329)), 0xB75CA930L)), 7)) > p_3)), l_514, l_512)), p_4)), l_512, l_515)) | 0x066F0E95L) , (void*)0)), l_460);

                        ;
                    }

                    ;
                    (**l_480) ^= ((0x9086L < 0x9062L) , p_3);
                }

                ;
                ;
            }

            ;
            ;
            if ((safe_add_func_int8_t_s_s((((*l_492) |= l_461) , p_4), (!p_4))))
            {
                char * const l_523 = &g_28;
                int l_528 = 0x3E5B3455L;
                unsigned *l_537 = &g_232;
                int *l_578 = (void*)0;
                volatile int *l_595 = &g_531;
                volatile int **l_594 = &l_595;
                l_532 = ((safe_sub_func_int8_t_s_s(func_75(&g_398, (safe_unary_minus_func_uint16_t_u(l_522)), l_523, (***l_450)), (l_459 == ((((safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((func_52(func_45((((p_4 , (l_528 >= ((*l_492) |= g_30))) ^ 0xE8ED3FA8L) , (**l_451))), g_139, l_529, (*g_435), g_530) || g_232), l_528)), p_3)) > g_135) | g_531) , p_3)))) <= g_398);
                if ((((*l_474) = (safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((((*l_537) = (*l_474)) , 2UL), 7)), g_305))) && (-3L)))
                {
                    (*l_474) &= (safe_add_func_int32_t_s_s(l_528, ((p_3 == 1L) > g_257)));
                }
                else
                {
                    char *l_548 = &g_530;
                    const int l_551 = 0x90D4DD0BL;
                    int **l_552 = &l_474;
                    int *l_553 = &g_61;
                    (*l_552) = ((l_551 > p_3) , &l_414);

                    ;
                    (*l_553) |= (**l_552);
                }

                ;
                for (g_28 = 0; (g_28 <= (-25)); --g_28)
                {
                    int *l_593 = &l_461;
                    (*l_474) ^= 8L;
                    for (l_461 = (-26); (l_461 >= 20); ++l_461)
                    {
                        return p_4;
                    }
                    if ((p_3 , 4L))
                    {
                        unsigned l_566 = 2UL;
                        char *l_569 = (void*)0;
                        char *l_570 = &g_530;
                        unsigned char *l_571 = &g_96;
                        unsigned *l_572 = &l_522;
                        int *l_573 = (void*)0;
                        int *l_574 = &l_389;
                        (*l_574) &= ((safe_lshift_func_uint16_t_u_s((func_35((***l_497), ((*l_572) ^= ((((((*l_492) ^= p_3) & (safe_rshift_func_uint16_t_u_s(((*l_440) = 0UL), 11))) , (func_35(func_47((((*l_571) = ((safe_div_func_int8_t_s_s((8L >= ((*l_570) = ((*l_481) ^= ((safe_div_func_uint16_t_u_u((l_566 != func_52((**l_437), ((safe_rshift_func_int16_t_s_u(g_398, l_414)) > (l_547 >= p_3)), l_528, l_569, l_414)), p_3)) ^ l_528)))), p_3)) , p_4)) & l_528)), g_253, g_511) ^ 0x69DF78A9L)) != 0x23L) ^ 0L)), l_546) < 0x34181A82L), p_3)) && g_329);
                    }
                    else
                    {
                        int **l_575 = (void*)0;
                        int **l_576 = (void*)0;
                        int **l_577 = &l_474;
                        l_579 = (l_578 = ((*l_577) = &l_414));

                        ;
                        ;
                        ;
                        (*l_579) &= 1L;
                    }
                    (*l_593) ^= (~(safe_lshift_func_uint8_t_u_u(((safe_div_func_int32_t_s_s(((*l_579) = (safe_div_func_int16_t_s_s((-2L), g_113))), g_135)) != (safe_rshift_func_int8_t_s_s((l_588 | ((0xA5D6L >= (g_122 &= (safe_div_func_int16_t_s_s(((*l_492) = 2L), ((*l_441) ^= 65535UL))))) < g_325)), (safe_mod_func_int16_t_s_s((-1L), l_529))))), 6)));
                }

                ;
                ;
                (*l_594) = &g_531;
            }
            else
            {
                for (g_530 = (-9); (g_530 != 27); g_530 = safe_add_func_int16_t_s_s(g_530, 6))
                {
                    int **l_598 = &l_579;
                    (*l_598) = (void*)0;

                    ;
                }

                ;
            }

            ;
            ;
        }
        else
        {
            (*l_579) |= (safe_mul_func_uint8_t_u_u(((0UL > ((g_321 = (g_257 <= p_3)) , 65532UL)) , ((g_122 != (0L > (-2L))) != g_113)), g_135));
        }

        ;
        ;
        ;
    }
    else
    {
        volatile int *l_602 = &g_531;
        volatile int **l_601 = &l_602;
        char *l_624 = (void*)0;
        int l_642 = 0x365931CCL;
        unsigned l_647 = 0xD73F6327L;
        char *l_660 = &g_30;
        unsigned char *l_674 = &g_511;
        unsigned char **l_673 = &l_674;
        unsigned char *** const l_672 = &l_673;
        (*l_601) = &g_531;
        (**l_601) = g_122;
        (*l_579) = ((**l_601) , (!(safe_add_func_int8_t_s_s((*g_99), (*l_579)))));
        for (g_135 = (-25); (g_135 < 18); g_135 = safe_add_func_uint32_t_u_u(g_135, 8))
        {
            int *l_623 = &l_414;
            unsigned char * const l_636 = &g_253;
            unsigned char * const *l_635 = &l_636;
            unsigned l_654 = 0UL;
            char *l_655 = &g_28;
            if (p_3)
                break;
            if (l_607)
            {
                unsigned char l_608 = 2UL;
                return l_608;
            }
            else
            {
                unsigned short l_626 = 0x85D3L;
                unsigned char *l_628 = &l_607;
                if ((g_324 < (safe_rshift_func_uint8_t_u_s(g_253, (safe_div_func_int8_t_s_s((**g_435), 0x0DL))))))
                {
                    short l_625 = (-4L);
                    int *l_627 = &l_389;
                    unsigned l_629 = 0x9665A277L;
                    if (((*l_627) |= (safe_mod_func_int32_t_s_s(g_235, (safe_sub_func_uint8_t_u_u(p_4, (~((safe_lshift_func_uint8_t_u_u((p_4 != (((safe_add_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(func_82(func_75(l_623, p_3, func_45((*g_435)), l_624), (*g_435), l_625, (*g_435), p_3), 5)) , g_100), g_241)) >= 0xA5L) ^ (*l_623))), 5)) || l_626))))))))
                    {
                        if ((*l_579))
                            break;
                        (*l_602) = ((l_628 == l_624) < p_3);
                    }
                    else
                    {
                        l_629 = 0xA9901845L;
                        (*l_579) = 0xADBF9BB5L;
                    }
                    if ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(p_3, 4)), 6)))
                    {
                        int **l_634 = &l_579;
                        unsigned char * const **l_637 = &l_635;
                        (*l_634) = l_627;

                        ;
                        (*l_602) = 3L;
                        (*l_637) = l_635;
                    }
                    else
                    {
                        volatile short ***l_646 = &g_643;
                        int l_648 = 0x153657CFL;
                        (*l_601) = ((((+((g_321 , ((**g_435) = (((safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((*l_628) ^= ((0x1387DD15L ^ ((*l_627) = l_626)) , ((*l_636) |= (((~p_4) == l_626) & ((*l_58) = ((*g_436) , p_3)))))), func_35((p_3 , (void*)0), l_642, g_30))), 0)) , p_3) , (*l_623)))) == 0x70L)) , p_3) != (*l_579)) , (void*)0);

                        ;
                        (*l_646) = g_643;
                        l_647 |= g_139;
                        return l_648;
                    }

                    ;
                    (*l_602) ^= 0x506B0E17L;
                    g_649 = (*l_601);
                }
                else
                {
                    short *l_650 = &g_149;
                    short **l_651 = &l_650;
                    char *l_659 = (void*)0;
                    int l_670 = 0x68CA1A93L;
                    int *l_678 = &g_18;
                    if (((g_321 > (0x4857L == (p_3 , ((func_52(l_628, ((((*l_651) = l_650) == (void*)0) ^ (-1L)), (safe_add_func_int8_t_s_s(l_654, (((**l_437) = func_45((((((*l_440) &= (((*g_436) = (p_3 > 2L)) > (-1L))) != l_626) , (*l_602)) , l_628))) == l_628))), l_655, p_3) ^ 0xCFF6984CL) , l_656)))) & g_18))
                    {
                        int l_657 = 1L;
                        (**l_601) &= l_657;
                        l_642 ^= func_82(func_31(((g_658 == (void*)0) != 0xA252L), func_45(l_659), l_659), l_660, (l_626 , 0xB1A14CBBL), (**l_437), p_4);
                        if (p_3)
                            break;
                    }
                    else
                    {
                        const int *l_668 = &g_669;
                        const int **l_667 = &l_668;
                        unsigned *l_671 = &g_325;
                        (*l_579) |= (p_4 , (((safe_div_func_uint16_t_u_u(((*l_441) = (~(0x4670L && (safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((p_4 = ((*l_623) ^ ((-1L) >= (&g_61 == (((((g_321 = (((*l_667) = &g_18) != (void*)0)) & ((*l_671) = l_670)) > g_134) < (*g_644)) , &g_398))))), g_30)), 0xDE822062L))))), p_3)) , g_658) == l_672));

                        ;
                        (*l_602) &= p_4;
                        (**l_601) = (safe_sub_func_int16_t_s_s((l_677 == (*g_644)), ((*l_440) = ((void*)0 != l_678))));
                    }

                    ;
                }

                ;
                ;
                return p_3;


            }
        }

        ;
    }

    ;
    ;
    ;
    for (g_305 = 8; (g_305 != 25); ++g_305)
    {
        int l_681 = 0x82B3E60FL;
        return l_681;


    }
    return p_3;


}







static const int func_31(const unsigned char p_32, char * p_33, char * p_34)
{
    int *l_408 = (void*)0;
    int **l_409 = (void*)0;
    int *l_411 = &g_398;
    int **l_410 = &l_411;
    for (g_122 = (-19); (g_122 >= 58); g_122 = safe_add_func_int32_t_s_s(g_122, 6))
    {
        return g_385;
    }
    (*l_410) = (l_408 = l_408);

    ;
    return g_135;
}







static unsigned char func_35(char * p_36, unsigned p_37, int p_38)
{
    unsigned short *l_402 = &g_139;
    int *l_403 = &g_398;
    (*l_403) = (safe_add_func_int16_t_s_s((l_402 != l_402), g_96));
    return (*l_403);
}







static char * func_39(const char * p_40, char * const p_41, short p_42, short p_43, char p_44)
{
    int *l_391 = &g_61;
    int **l_390 = &l_391;
    char *l_392 = &g_30;
    char *l_393 = &g_30;
    int *l_397 = &g_398;
    (**l_390) = ((((void*)0 == l_390) < (((p_42 < (-9L)) & 0xB9L) ^ p_44)) != ((((g_122 , p_44) , func_52(l_392, g_321, (*l_391), l_393, (*l_391))) <= g_135) >= (*p_40)));
    (*l_397) &= func_75((*l_390), ((func_52(func_47((safe_unary_minus_func_int16_t_s((-4L)))), ((((~g_18) & ((((g_305 == (safe_mul_func_int8_t_s_s((g_18 > g_12), (*p_41)))) != g_198) != g_235) == g_253)) && 0x780F72A8L) > g_18), p_44, &g_28, g_257) , g_139) , (**l_390)), &g_28, &g_28);
    return l_393;


}







static char * func_45(char * p_46)
{
    int *l_388 = &g_61;
    (*l_388) |= (safe_rshift_func_int8_t_s_s(0L, 0));
    return p_46;


}







static char * func_47(unsigned short p_48)
{
    unsigned l_62 = 0xF03FA9A1L;
    int *l_80 = &g_61;
    int **l_81 = &l_80;
    char *l_94 = &g_30;
    unsigned char *l_95 = &g_96;
    int l_97 = 0x020A50D0L;
    int *l_132 = (void*)0;
    int *l_133 = &g_61;
    const unsigned short l_136 = 0xA934L;
    int l_137 = (-5L);
    int *l_138 = &l_137;
    short *l_148 = &g_149;
    unsigned char l_150 = 0UL;
    unsigned **l_155 = (void*)0;
    unsigned *l_157 = (void*)0;
    unsigned **l_156 = &l_157;
    char *l_209 = &g_30;
    short l_221 = 0x31DDL;
    char **l_339 = &l_209;
    char ***l_338 = &l_339;
    char l_345 = (-9L);
    int l_375 = (-1L);
    unsigned char l_383 = 255UL;
    short l_384 = 0x7D56L;
    g_139 = ((*l_138) = ((*l_133) = (func_52(&g_30, l_62, (l_137 = (((0x07L >= ((g_135 |= (safe_rshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((g_134 = (((((safe_mul_func_int8_t_s_s(l_62, (safe_add_func_int8_t_s_s(((((safe_sub_func_int32_t_s_s(((*l_133) = ((func_75(((*l_81) = l_80), (func_82(((safe_lshift_func_uint8_t_u_s(((*l_95) = (g_28 , (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((((*l_94) = l_62) <= (!(func_52(&g_28, func_52(l_94, g_61, p_48, l_94, g_61), g_18, l_94, p_48) , g_18))), 15)), p_48)))), 6)) <= 1L), l_94, l_97, &g_28, g_12) , p_48), &g_28, l_95) && (*l_80)) & 0UL)), g_18)) > (-1L)) , p_48) > g_12), 0UL)))) , 0x895DEA71L) , (*l_80)) < 0x46L) != p_48)), p_48)), 3))) <= l_136)) != 0xB06A0B71L) > 0xDFL)), l_94, g_12) , p_48)));
    (**l_81) = (safe_mod_func_uint32_t_u_u((func_82(p_48, ((safe_div_func_uint8_t_u_u(((g_135 != g_122) >= ((*l_133) = (((safe_rshift_func_uint16_t_u_u(((((g_135 , ((((*l_148) |= (safe_rshift_func_int8_t_s_s((*l_133), 4))) | (l_150 >= (0x7EL > ((safe_rshift_func_uint16_t_u_s(0xEA4BL, 1)) < (((*l_156) = &g_134) == &g_134))))) , (**l_81))) || g_18) != 0L) != 1L), (*l_80))) > p_48) >= g_134))), (**g_98))) , l_94), g_113, &g_28, p_48) != g_135), p_48));

    ;
    for (g_61 = (-5); (g_61 == 24); ++g_61)
    {
        int l_183 = 0x0027467CL;
        char * const l_192 = (void*)0;
        char *l_208 = &g_28;
        unsigned l_281 = 1UL;
        unsigned l_304 = 0x13F60D9FL;
        unsigned l_330 = 0xD79E2B91L;
        int *l_374 = &l_183;
    }
    g_385 &= func_52((**l_338), g_324, (((func_75(&g_61, (((safe_mul_func_int16_t_s_s((&g_149 == &l_221), g_198)) && (safe_mod_func_uint8_t_u_u((((*l_148) = (safe_sub_func_int32_t_s_s(func_75((*l_81), l_383, &g_30, &g_30), l_384))) , 1UL), (*l_138)))) <= p_48), &g_28, (*l_339)) , (**l_81)) != g_232) <= 0xB2L), &g_28, (**l_81));
    return &g_28;


}







static unsigned char func_52(char * p_53, int p_54, unsigned p_55, char * p_56, char p_57)
{
    int *l_60 = &g_61;
    (*l_60) = 1L;
    return g_28;
}







static char func_75(int * p_76, short p_77, char * const p_78, char * p_79)
{
    char l_130 = 0x53L;
    int l_131 = 0x1CD86053L;
    for (g_96 = (-21); (g_96 < 7); g_96++)
    {
        return l_130;
    }
    l_131 = (l_130 , g_28);
    return l_130;
}







static const short func_82(char p_83, char * p_84, unsigned p_85, char * p_86, int p_87)
{
    const volatile char **l_102 = &g_99;
    const volatile char ***l_101 = &l_102;
    char *l_104 = &g_28;
    char **l_103 = &l_104;
    unsigned *l_111 = (void*)0;
    unsigned *l_112 = &g_113;
    int l_114 = (-8L);
    char *l_115 = &g_30;
    int *l_120 = &g_61;
    int l_123 = (-2L);
    (*l_101) = g_98;
    if (func_52(((*l_103) = &p_83), ((safe_div_func_int8_t_s_s((((p_83 > g_61) & g_30) && (safe_rshift_func_int8_t_s_u((func_52(&g_28, func_52(&g_30, (((*p_84) && (((safe_mul_func_uint16_t_u_u(g_28, func_52((((*l_112) = p_85) , (void*)0), p_87, l_114, l_115, l_114))) < l_114) && (**g_98))) ^ g_12), p_83, &g_30, l_114), g_12, &g_30, l_114) == p_87), 0))), (*p_86))) || 0xA98DL), l_114, &g_28, (*p_84)))
    {
        int *l_118 = &g_61;
        int **l_119 = (void*)0;
        (*l_118) = (safe_mod_func_uint16_t_u_u(l_114, 65533UL));
        l_120 = (void*)0;

        ;
        return p_83;
    }
    else
    {
        unsigned short *l_121 = &g_122;
        int l_124 = 0x907242BEL;
        int l_127 = (-1L);
        l_124 &= (((*l_121) = (*l_120)) >= (l_123 == (p_85 < ((p_85 , (*l_102)) != &p_83))));
        (*l_120) = ((1UL > (*l_120)) ^ (((l_127 ^= ((safe_lshift_func_uint8_t_u_s(g_12, (((*p_86) && l_124) | ((((g_18 ^ (!p_85)) ^ (*p_84)) || 0x53D9L) || 0x36BDL)))) || 0L)) || p_85) , (*l_120)));
    }

    ;
    return g_100;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_321, "g_321", print_hash_value);
    transparent_crc(g_324, "g_324", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    transparent_crc(g_398, "g_398", print_hash_value);
    transparent_crc(g_511, "g_511", print_hash_value);
    transparent_crc(g_530, "g_530", print_hash_value);
    transparent_crc(g_531, "g_531", print_hash_value);
    transparent_crc(g_645, "g_645", print_hash_value);
    transparent_crc(g_669, "g_669", print_hash_value);
    transparent_crc(g_694, "g_694", print_hash_value);
    transparent_crc(g_718, "g_718", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
