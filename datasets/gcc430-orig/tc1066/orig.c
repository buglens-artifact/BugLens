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



static int g_2 = 0xF6AF1124L;
static int g_6 = 2L;
static char g_37 = (-1L);
static int g_55 = (-5L);
static char g_59 = 0x8FL;
static char *g_58 = &g_59;
static unsigned g_87 = 4294967289UL;
static int *g_97 = (void*)0;
static int **g_96 = &g_97;
static int g_100 = 5L;
static unsigned char g_108 = 5UL;
static int *g_172 = &g_55;
static int *g_186 = &g_100;
static int **g_192 = (void*)0;
static unsigned g_200 = 1UL;
static unsigned *g_199 = &g_200;
static unsigned **g_198 = &g_199;
static unsigned short g_214 = 1UL;
static unsigned char g_223 = 0UL;
static unsigned short g_226 = 65527UL;
static unsigned short g_228 = 65535UL;
static unsigned g_246 = 4294967295UL;
static unsigned short g_264 = 65530UL;
static short g_278 = (-1L);
static short *g_286 = &g_278;
static short **g_285 = &g_286;
static int ****g_301 = (void*)0;
static char g_350 = 0x2FL;
static char **g_416 = (void*)0;
static unsigned char g_423 = 0x79L;
static int g_497 = 0x6D18EE10L;
static int *g_522 = (void*)0;
static short g_541 = (-7L);
static unsigned g_566 = 1UL;
static int ***g_590 = &g_96;
static unsigned g_614 = 0x7CD34A7FL;
static int **g_643 = &g_522;
static unsigned short *g_684 = &g_226;
static unsigned short **g_683 = &g_684;
static unsigned short ***g_682 = &g_683;
static int g_742 = 0x320FE013L;
static unsigned short g_769 = 0xBED7L;
static int *g_792 = &g_497;
static int **g_791 = &g_792;
static unsigned char *g_801 = &g_223;
static unsigned char **g_800 = &g_801;
static unsigned char **g_809 = &g_801;
static unsigned char ***g_808 = &g_809;
static short g_821 = 0x8C99L;
static unsigned g_861 = 0x2E54BF87L;
static unsigned char g_898 = 0UL;



static int func_1(void);
static int func_7(int * p_8, int p_9, unsigned p_10, char p_11);
static int * func_12(int * p_13, int * p_14);
static int * func_15(unsigned p_16);
static int ** func_17(int ** p_18);
static int * func_43(int ** p_44, int * p_45, char * p_46, int p_47, unsigned char p_48);
static int * func_49(unsigned short p_50, char p_51, int ** p_52, char p_53);
static unsigned char func_60(unsigned short p_61, int ** p_62, unsigned p_63, char p_64, char * p_65);
static int ** func_66(char * p_67, int p_68);
static char * func_69(unsigned p_70);
static int func_1(void)
{
    int l_307 = (-1L);
    int **l_458 = &g_186;
    int **l_462 = &g_97;
    char *l_487 = &g_37;
    unsigned char l_491 = 8UL;
    int ***l_575 = &g_96;
    int ****l_574 = &l_575;
    unsigned short *l_578 = &g_228;
    unsigned short **l_577 = &l_578;
    unsigned short l_641 = 0UL;
    unsigned l_663 = 0x29CC63BFL;
    char l_747 = 0xB4L;
    int *l_759 = (void*)0;
    unsigned l_760 = 8UL;
    int *l_766 = (void*)0;
    int **l_765 = &l_766;
    char l_767 = 0xFAL;
    int *l_768 = &g_2;
    int l_775 = (-1L);
    int **l_841 = &g_97;
    int l_856 = 0xFBA2E139L;
    short l_887 = (-1L);
    char l_911 = 0x64L;
    int l_925 = 0x9B645EA8L;
    int l_955 = 0L;
    unsigned short l_970 = 65529UL;
    unsigned char **l_1110 = &g_801;
    for (g_2 = 0; (g_2 <= 18); g_2 = safe_add_func_int32_t_s_s(g_2, 1))
    {
        int *l_5 = &g_6;
        unsigned l_486 = 0xA79F1E16L;
        char *l_490 = &g_37;
        char *l_555 = &g_350;
        unsigned l_558 = 0x0731285FL;
        int l_564 = (-1L);
        int ****l_576 = &l_575;
        int **l_583 = &g_172;
        unsigned short l_584 = 65535UL;
        unsigned l_587 = 4UL;
        int l_608 = 0x81D605E2L;
        int **l_612 = &g_97;
        short l_620 = (-1L);
        int ***l_632 = (void*)0;
        unsigned char l_696 = 0x8BL;
        unsigned short l_725 = 1UL;
        if (g_2)
            break;
    }
    (**l_458) = (func_7((*l_458), g_541, (safe_mod_func_int16_t_s_s((*g_286), (safe_unary_minus_func_uint32_t_u((*g_199))))), (*g_58)) >= (*g_199));

    ;
    (*g_186) ^= (*l_768);
    for (l_641 = 18; (l_641 >= 57); l_641 = safe_add_func_uint32_t_u_u(l_641, 9))
    {
        short l_772 = 0xCEACL;
        int *l_782 = &g_742;
        unsigned char *l_783 = &g_223;
        char *l_794 = &g_59;
        short l_799 = 0x7094L;
        unsigned short l_811 = 0x316CL;
        short l_828 = 0x7451L;
        int l_842 = (-7L);
        unsigned short l_845 = 0x4C2CL;
        short **l_851 = &g_286;
        int *l_915 = &l_307;
        unsigned char l_966 = 0UL;
        int l_973 = 0xEBB899E1L;
        char *l_996 = &l_767;
        char l_1048 = 0xDBL;
        (*l_768) = l_772;
    }
    return (**g_791);
}







static int func_7(int * p_8, int p_9, unsigned p_10, char p_11)
{
    unsigned short *l_310 = &g_214;
    int ***l_311 = &g_192;
    char *l_312 = &g_37;
    int *l_313 = &g_100;
    int l_321 = 0L;
    unsigned short l_417 = 0x9782L;
    int l_435 = 0x3EA799C3L;
    unsigned **l_438 = (void*)0;
    if (((*p_8) > (-1L)))
    {
        int l_316 = 0x6F94ADABL;
        unsigned char *l_317 = &g_223;
        int **l_318 = (void*)0;
        char **l_320 = &g_58;
        unsigned short *l_322 = &g_228;
        int *l_376 = &g_55;
        l_313 = p_8;


lbl_360:
        (*l_313) = ((((*g_58) = (safe_mul_func_int8_t_s_s(l_316, ((g_223 ^= p_10) && p_10)))) || (*g_58)) > p_9);
        if (((void*)0 != l_322))
        {
            char *l_327 = &g_59;
            int l_328 = 0xC78A0E73L;
            (*l_313) = ((l_310 == (void*)0) ^ ((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_u(l_328, 0)) || (*g_58)), 15)) > p_10));
        }
        else
        {
            short l_352 = (-1L);
            char *l_378 = (void*)0;
            int **l_379 = &g_172;
            unsigned short *l_391 = &g_264;
            unsigned short **l_392 = &l_391;
            short l_397 = 0x0D4BL;
            int l_398 = 1L;
            unsigned l_403 = 0x9BAF2872L;
            int l_415 = (-1L);
            for (p_9 = (-9); (p_9 > 11); p_9++)
            {
                char *l_349 = &g_350;
                int **l_351 = &l_313;
                if ((**l_351))
                {
                    for (l_316 = (-11); (l_316 < (-22)); l_316 = safe_sub_func_uint32_t_u_u(l_316, 9))
                    {
                        if ((*p_8))
                            break;
                    }
                    if ((*p_8))
                        break;
                }
                else
                {
                    unsigned char l_359 = 0xA8L;
                    if ((((*l_317) = 1UL) < g_200))
                    {
                        (*p_8) = (*p_8);
                        (*l_313) = (-4L);
                        (**l_351) ^= (safe_mod_func_uint16_t_u_u(g_108, 1L));
                    }
                    else
                    {
                        (*l_351) = p_8;
                    }
                    if (p_10)
                        goto lbl_360;
                }
                for (g_228 = (-2); (g_228 <= 1); g_228 = safe_add_func_int32_t_s_s(g_228, 9))
                {
                    if ((*p_8))
                        break;
                    for (g_246 = 0; (g_246 <= 34); g_246 = safe_add_func_uint8_t_u_u(g_246, 5))
                    {
                        char l_365 = 0x36L;
                        l_365 = (p_10 | g_200);
                    }
                    (*l_351) = p_8;
                }
                p_8 = p_8;
                for (l_316 = 12; (l_316 <= (-15)); l_316--)
                {
                    for (l_352 = (-27); (l_352 < 27); l_352++)
                    {
                        unsigned char l_377 = 0UL;
                        (*l_351) = l_376;

                        ;
                        return l_377;
                    }
                }
                if (g_108)
                    goto lbl_430;
            }
            (*l_379) = p_8;


            (*g_186) ^= (-1L);
            if ((safe_lshift_func_int8_t_s_u((((**g_198) > (**l_379)) < (*g_58)), 6)))
            {
                short l_399 = 1L;
                unsigned short ***l_400 = &l_392;
                int l_404 = (-7L);
                unsigned *l_413 = &g_87;
                unsigned *l_414 = &g_246;
                (*g_186) ^= (((p_10 >= l_399) <= 0UL) == p_9);
                (*l_400) = &l_391;
                (*l_376) = ((0x39L | (l_404 = (safe_mod_func_int32_t_s_s(((*g_172) = (p_10 != (*g_58))), l_399)))) || (**l_379));
                if ((safe_sub_func_int32_t_s_s((**l_379), ((*g_58) ^ (((**g_285) < (safe_lshift_func_int16_t_s_s((l_399 > ((((safe_sub_func_uint32_t_u_u((((((**l_379) < (safe_add_func_int32_t_s_s((((*l_317) = g_200) <= l_399), ((*l_414) = ((*l_413) = l_399))))) != 3UL) < (*l_376)) ^ p_11), p_11)) >= p_10) >= l_415) >= (**l_379))), 10))) || (*l_376))))))
                {
                    unsigned l_420 = 0x81A07439L;
                    int *l_424 = (void*)0;
                    unsigned char **l_425 = &l_317;
                    (**l_379) = (((**g_285) < 0x3FFCL) ^ 0L);
                    (*l_379) = l_424;

                    ;
                    (*l_313) |= ((*g_286) && ((((*l_425) = l_317) != &g_423) != ((*l_413) = (safe_sub_func_uint32_t_u_u((**g_198), ((*l_376) != 0UL))))));
                    (*l_376) |= ((*g_186) = (safe_rshift_func_int8_t_s_u((*g_58), 7)));
                }
                else
                {
                    return (*l_376);
                }

                ;
            }
            else
            {
                (*l_376) |= (*p_8);
                (*l_379) = p_8;
lbl_430:
                (*l_379) = p_8;


                (*g_172) ^= 0x8A339BA4L;
            }


        }


        for (p_10 = 0; (p_10 > 19); p_10 = safe_add_func_uint32_t_u_u(p_10, 7))
        {
            unsigned short **l_434 = (void*)0;
            unsigned short ***l_433 = &l_434;
            (*l_433) = &l_310;

            ;
            if (l_435)
                continue;
            for (g_423 = (-28); (g_423 > 21); g_423 = safe_add_func_int8_t_s_s(g_423, 3))
            {
                unsigned ***l_439 = &l_438;
                int l_440 = 0xC5FC14D1L;
                (*l_439) = l_438;
                (*g_186) ^= (1L && 249UL);
                (*l_376) ^= ((l_440 | (p_10 == p_10)) > (*l_313));
                (*g_186) = (*g_186);
            }
            return (*l_376);
        }
    }
    else
    {
        unsigned char l_441 = 0xC0L;
        l_441 = ((*p_8) = (*p_8));
    }



    return (*p_8);
}







static int * func_12(int * p_13, int * p_14)
{
    unsigned l_189 = 4294967287UL;
    unsigned *l_193 = &g_87;
    unsigned char *l_201 = &g_108;
    int **l_202 = (void*)0;
    int **l_203 = &g_186;
    char l_245 = 2L;
    int ****l_302 = (void*)0;
    short l_305 = 0L;
    short l_306 = (-2L);
    if (((*p_14) = (safe_sub_func_int16_t_s_s((((*p_13) |= ((!(((*l_203) = p_14) == p_13)) < (*g_58))) && 8UL), g_6))))
    {
        int l_229 = 1L;
        int l_236 = 0L;
        unsigned char l_283 = 0x09L;
        (**l_203) = ((**g_198) || 0x2407D1D3L);
        for (l_189 = 28; (l_189 > 47); l_189 = safe_add_func_uint8_t_u_u(l_189, 6))
        {
            short l_219 = 0x3AC0L;
            unsigned short *l_222 = (void*)0;
            char *l_261 = &g_37;
            if (((*g_186) ^= 0x3F0835FFL))
            {
                unsigned l_212 = 1UL;
                int l_218 = 8L;
                unsigned short *l_224 = (void*)0;
                unsigned short *l_225 = &g_226;
                unsigned short *l_227 = &g_228;
                char *l_237 = &g_37;
                for (g_108 = 0; (g_108 < 37); g_108 = safe_add_func_uint16_t_u_u(g_108, 8))
                {
                    unsigned short *l_213 = &g_214;
                    int l_217 = 4L;
                    if ((safe_rshift_func_uint16_t_u_u(((*l_213) = (safe_add_func_uint32_t_u_u(0x7AF5BD10L, (g_59 >= l_212)))), 5)))
                    {
                        short l_216 = 0L;
                        l_218 = ((*p_13) |= ((((*l_203) == (void*)0) ^ (safe_unary_minus_func_uint8_t_u(l_216))) < l_217));
                        if (l_219)
                            break;
                        if ((*p_14))
                            continue;
                        (*p_13) = (safe_lshift_func_uint8_t_u_u((l_222 != (void*)0), 7));
                    }
                    else
                    {
                        (**l_203) &= 0L;
                    }
                }
                (**l_203) = l_236;
                if ((*p_14))
                    continue;
                for (g_214 = 8; (g_214 < 39); g_214 = safe_add_func_int32_t_s_s(g_214, 1))
                {
                    char l_242 = 0x4AL;
                    (*p_13) ^= (g_200 > (safe_sub_func_int32_t_s_s(l_229, l_242)));
                }
            }
            else
            {
                unsigned short l_249 = 0x1124L;
                unsigned short *l_250 = (void*)0;
                unsigned short *l_251 = &g_228;
                char *l_252 = &g_59;
                int **l_268 = &g_172;
                if (((0x8EAFL < ((void*)0 != &g_59)) <= (((l_219 | l_245) ^ (**g_198)) >= ((g_246 && l_229) > l_249))))
                {
                    char l_257 = (-1L);
                    int l_280 = (-7L);
                    if ((*p_14))
                    {
                        (*g_186) ^= (safe_lshift_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(65535UL, l_257)) <= (safe_unary_minus_func_int32_t_s((*p_13)))), (+0x1EL)));
                    }
                    else
                    {
                        short *l_265 = (void*)0;
                        short *l_266 = &l_219;
                        int l_267 = 0xA3F02900L;
                        (*p_13) = ((**l_203) = (*p_13));
                        (*p_13) &= l_236;
                        (*g_186) |= (safe_mul_func_uint8_t_u_u(g_200, (*g_58)));
                    }
                    for (g_55 = 0; (g_55 != (-1)); g_55 = safe_sub_func_uint8_t_u_u(g_55, 3))
                    {
                        (*p_14) = l_257;
                    }
                    for (l_249 = (-9); (l_249 == 60); l_249 = safe_add_func_uint8_t_u_u(l_249, 4))
                    {
                        int ***l_277 = &g_192;
                        char *l_279 = &l_257;
                        (*p_13) &= (safe_add_func_int32_t_s_s((*g_186), (*g_199)));
                        l_280 = (*p_14);
                    }
                }
                else
                {
                    short ***l_287 = &g_285;
                    int ***l_288 = &l_203;
                    int ***l_292 = &l_268;
                    int ****l_291 = &l_292;
                    for (g_59 = 0; (g_59 > (-24)); g_59 = safe_sub_func_int32_t_s_s(g_59, 6))
                    {
                        unsigned short l_284 = 65535UL;
                        (*p_13) &= (0xA0L < (l_219 && ((1L == l_219) > ((g_55 | (g_37 != ((**l_203) == 0UL))) && l_283))));
                        if ((*p_14))
                            break;
                        (**l_203) = ((*g_58) || l_284);
                    }
                    (*l_287) = g_285;
                    (*l_268) = p_14;


                    if ((***l_288))
                        continue;
                }
            }
        }
    }
    else
    {
        return (*l_203);


    }


    l_306 = (((safe_mod_func_int8_t_s_s((((**l_203) ^ (safe_add_func_uint32_t_u_u(((**l_203) <= (safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(0x9945770AL, (0x47AF7898L >= (g_301 != l_302)))), (*g_58)))), (*g_199)))) && (**l_203)), 1L)) | (*p_13)) == (**l_203));
    (*l_203) = (*l_203);
    return (*l_203);


}







static int * func_15(unsigned p_16)
{
    int *l_20 = &g_2;
    int **l_19 = &l_20;
    int ***l_183 = &l_19;
    int ***l_184 = (void*)0;
    int ***l_185 = &g_96;
    (*l_185) = ((*l_183) = func_17(l_19));

    ;
    ;
    ;
    ;
    return g_186;



}







static int ** func_17(int ** p_18)
{
    int l_21 = 0xEC3D4E70L;
    char *l_36 = &g_37;
    unsigned l_38 = 4294967295UL;
    unsigned l_174 = 0x139E91ECL;
    unsigned short l_178 = 0xA18DL;
    int **l_180 = &g_172;
    int *l_182 = &g_100;
    l_21 |= (**p_18);
    if ((((safe_sub_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((safe_add_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((+((safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((*l_36) = l_21), l_38)), (safe_mod_func_uint32_t_u_u((((safe_add_func_uint32_t_u_u(g_6, 3UL)) || (0xFCC013CEL != (**p_18))) > (&l_21 == ((*g_96) = func_43(p_18, ((*g_96) = func_49(l_38, l_21, p_18, l_38)), g_58, (**p_18), l_174)))), g_2)))) <= 0x4DE56815L)), g_6)) && 4L), l_21)) ^ l_178), 0UL)), (-5L))) < 0x6BA5L), 1L)) && 8L) & g_6))
    {
        int *l_179 = (void*)0;
        (*p_18) = (*g_96);
        g_6 = (**g_96);
        return l_180;


    }
    else
    {
        int *l_181 = (void*)0;
        l_181 = ((*g_96) = (void*)0);

        ;
    }

    ;
    (*l_182) &= (**p_18);
    return p_18;


}







static int * func_43(int ** p_44, int * p_45, char * p_46, int p_47, unsigned char p_48)
{
    unsigned char l_175 = 255UL;
    int *l_176 = &g_55;
    char **l_177 = (void*)0;
    (*g_96) = (*g_96);
    (*l_176) |= l_175;
    l_177 = l_177;
    return (*g_96);


}







static int * func_49(unsigned short p_50, char p_51, int ** p_52, char p_53)
{
    int *l_54 = &g_55;
    int l_73 = (-1L);
    unsigned char l_76 = 0UL;
    int *l_173 = &g_100;
    l_54 = (void*)0;

    ;
    (*l_173) = ((((l_73 = (safe_sub_func_uint8_t_u_u((g_58 != &g_59), func_60(g_55, func_66(func_69((safe_mod_func_int16_t_s_s(g_55, ((g_55 > l_73) && (l_73 & (safe_sub_func_int32_t_s_s(l_76, (safe_mul_func_uint16_t_u_u(g_2, p_53))))))))), p_53), p_51, p_51, g_58)))) | (**p_52)) ^ g_6) > 9UL);

    ;
    ;
    return (*p_52);


}







static unsigned char func_60(unsigned short p_61, int ** p_62, unsigned p_63, char p_64, char * p_65)
{
    unsigned l_105 = 4294967295UL;
    unsigned char *l_106 = (void*)0;
    unsigned char *l_107 = &g_108;
    unsigned char l_149 = 6UL;
    int *l_152 = &g_2;
    if ((g_55 = (+(safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((*l_107) = l_105), l_105)), l_105)))))
    {
        return g_100;
    }
    else
    {
        unsigned l_109 = 0x65315FA7L;
        unsigned char l_150 = 0x90L;
        short l_151 = 0x1694L;
        int l_156 = 0xE8E649E9L;
        if (l_109)
        {
            char l_114 = 0xF1L;
            int l_119 = 0x75C26FF5L;
            unsigned *l_123 = (void*)0;
            for (p_61 = (-20); (p_61 >= 36); p_61 = safe_add_func_uint8_t_u_u(p_61, 3))
            {
                unsigned *l_117 = &l_105;
                unsigned *l_118 = &g_87;
                int l_120 = (-1L);
                int *l_121 = (void*)0;
                int *l_122 = &g_55;
                unsigned **l_124 = (void*)0;
                unsigned **l_125 = (void*)0;
                unsigned **l_126 = &l_117;
                (*l_122) ^= (safe_add_func_int8_t_s_s((l_114 <= p_61), (safe_rshift_func_uint8_t_u_s(((l_119 = ((*l_118) ^= ((*l_117) = 9UL))) < l_120), 0))));
                (*l_122) = g_59;
                (*l_122) = (l_123 != ((*l_126) = &g_87));

                ;
                (*l_122) = ((safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u((+g_6), (safe_add_func_int32_t_s_s(l_119, (safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((*g_58) = (l_109 < ((p_63 >= (~((safe_div_func_uint32_t_u_u(p_61, 1L)) >= p_61))) ^ ((safe_mod_func_uint8_t_u_u((p_63 != p_63), 0xAEL)) && g_108)))), l_114)), l_149)), l_109)), 0x66L)), p_64)))))) > g_87) < l_150), l_151)), 15)) | 1UL);
            }
            (*g_96) = l_152;

            ;
            for (l_150 = 0; (l_150 == 51); ++l_150)
            {
                if ((**g_96))
                    break;
                (*p_62) = (*g_96);
            }
        }
        else
        {
            int *l_155 = (void*)0;
            unsigned *l_167 = &g_87;
            unsigned **l_166 = &l_167;
            l_156 = 0x65239069L;
            for (l_150 = 0; (l_150 != 10); l_150 = safe_add_func_int8_t_s_s(l_150, 9))
            {
                int l_163 = 3L;
                g_55 |= (safe_add_func_int8_t_s_s((safe_div_func_int16_t_s_s(p_61, l_163)), (*l_152)));
                for (g_87 = (-30); (g_87 != 55); ++g_87)
                {
                    unsigned ***l_168 = &l_166;
                    int l_171 = 2L;
                    (*l_168) = l_166;
                    g_55 = (safe_mul_func_int32_t_s_s(l_171, ((-8L) <= g_2)));
                    return p_64;
                }
            }
            g_172 = ((*p_62) = (*p_62));


        }
    }
    return p_64;
}







static int ** func_66(char * p_67, int p_68)
{
    unsigned short l_89 = 0x23A2L;
    int *l_99 = &g_100;
    for (g_59 = 8; (g_59 != 18); g_59 = safe_add_func_int16_t_s_s(g_59, 1))
    {
        int *l_84 = &g_55;
        int **l_85 = (void*)0;
        int **l_86 = &l_84;
        char l_88 = (-8L);
        (*l_86) = l_84;
        g_87 &= (g_2 && p_68);
        l_89 = l_88;
        for (g_87 = (-7); (g_87 > 37); g_87++)
        {
            int *l_93 = (void*)0;
            int **l_92 = &l_93;
            int l_98 = 0xF8A133A5L;
            (*l_92) = ((*l_86) = &g_6);

            ;
            ;
            for (l_89 = 0; (l_89 <= 58); l_89 = safe_add_func_uint8_t_u_u(l_89, 1))
            {
                return g_96;


            }
            l_98 |= p_68;
        }

        ;
    }
    (*l_99) = p_68;
    (*l_99) = p_68;
    (*g_96) = l_99;

    ;
    return &g_97;


}







static char * func_69(unsigned p_70)
{
    int *l_79 = &g_2;
    int **l_80 = &l_79;
    char *l_81 = (void*)0;
    (*l_80) = l_79;
    return l_81;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_350, "g_350", print_hash_value);
    transparent_crc(g_423, "g_423", print_hash_value);
    transparent_crc(g_497, "g_497", print_hash_value);
    transparent_crc(g_541, "g_541", print_hash_value);
    transparent_crc(g_566, "g_566", print_hash_value);
    transparent_crc(g_614, "g_614", print_hash_value);
    transparent_crc(g_742, "g_742", print_hash_value);
    transparent_crc(g_769, "g_769", print_hash_value);
    transparent_crc(g_821, "g_821", print_hash_value);
    transparent_crc(g_861, "g_861", print_hash_value);
    transparent_crc(g_898, "g_898", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
