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



static int g_3 = 0xC08901F2L;
static int *g_10 = &g_3;
static int * const *g_9 = &g_10;
static unsigned char g_12 = 1UL;
static unsigned g_32 = 0xE6FC2E60L;
static short g_36 = 0x8376L;
static unsigned char g_58 = 253UL;
static unsigned char g_93 = 0x5CL;
static unsigned short g_105 = 0UL;
static int g_130 = 0L;
static unsigned g_133 = 0x5D16F988L;
static int g_175 = 0x89ECE453L;
static short *g_179 = &g_36;
static short **g_178 = &g_179;
static unsigned g_187 = 0x2449837FL;
static unsigned short g_190 = 65532UL;
static unsigned short g_231 = 0x1A3FL;
static unsigned char *g_241 = &g_93;
static unsigned char **g_240 = &g_241;
static unsigned char ***g_239 = &g_240;
static short g_253 = 0xB098L;
static unsigned short g_348 = 0x854DL;
static unsigned *g_363 = &g_187;
static unsigned **g_362 = &g_363;
static int g_378 = 0x86C4E18AL;
static int g_394 = 0L;
static char g_407 = 0xA7L;
static const char * const g_409 = &g_407;
static const char * const *g_408 = &g_409;
static int g_433 = (-4L);
static const unsigned g_457 = 0x46D76933L;
static int *g_491 = &g_3;



static const int func_1(void);
static short func_5(int ** p_6);
static unsigned func_13(unsigned char p_14);
static int func_17(int ** p_18, const unsigned p_19);
static int ** func_20(int p_21, int p_22, short p_23, unsigned p_24, int * p_25);
static const unsigned func_37(short p_38, int p_39);
static int func_41(short * p_42, int * p_43, short p_44, unsigned * p_45);
static short * func_46(unsigned char p_47, unsigned * p_48);
static int func_51(short p_52, unsigned short p_53, const unsigned * p_54, unsigned short p_55, short * p_56);
static const char func_61(unsigned * p_62, unsigned short p_63, unsigned char * const p_64);
static const int func_1(void)
{
    int *l_2 = &g_3;
    int **l_4 = &l_2;
    unsigned char *l_11 = &g_12;
    unsigned *l_29 = (void*)0;
    unsigned *l_30 = (void*)0;
    unsigned *l_31 = &g_32;
    short *l_35 = &g_36;
    const int l_422 = 0x95D9E2DFL;
    int *l_432 = &g_433;
    unsigned l_446 = 0xA0383BF8L;
    unsigned char l_467 = 8UL;
    unsigned char ***l_468 = &g_240;
    char *l_471 = (void*)0;
    char **l_470 = &l_471;
    const int *l_489 = &g_3;
    (*l_4) = l_2;
    if ((func_5(((safe_sub_func_uint32_t_u_u((g_3 < g_3), (((*l_11) = (&l_2 == g_9)) | (func_13(((((*l_432) = ((safe_lshift_func_int16_t_s_s((func_17(func_20(((((*l_31) = (safe_sub_func_uint32_t_u_u((g_3 <= (!(safe_unary_minus_func_int32_t_s((*l_2))))), 0xB3493876L))) != (**g_9)) , (safe_lshift_func_int16_t_s_u(((((*l_35) = g_32) , (**l_4)) < (-1L)), 0))), (**l_4), (*l_2), g_3, &g_3), l_422) >= (**l_4)), (**l_4))) < 1UL)) , 1L) >= (**l_4))) , l_446)))) , &l_2)) , (*l_2)))
    {
        short l_452 = 0x84C8L;
        unsigned *l_456 = &l_446;
        unsigned char * const l_460 = &g_12;
        char **l_472 = &l_471;
        if ((**l_4))
        {
            unsigned short *l_451 = &g_190;
            char *l_453 = (void*)0;
            char *l_454 = &g_407;
            int *l_455 = (void*)0;
            int l_461 = 0xA6877B99L;
            int *l_469 = &g_394;
            (**l_4) = (-1L);
            l_452 = ((**l_4) = (((*l_451) = (!(safe_rshift_func_int16_t_s_s((**g_178), 10)))) | 0xF865L));
            if ((func_17((func_41((((*l_454) = 0xA2L) , &l_452), ((*g_363) , &g_175), (l_31 == l_455), l_456) , &g_10), g_457) & (*l_2)))
            {
                int *l_466 = &g_130;
                (*l_466) = (l_461 , (safe_rshift_func_uint8_t_u_s((((((((safe_lshift_func_uint8_t_u_u(0xD6L, 2)) , ((l_468 = ((((((**g_362) != ((void*)0 != &g_362)) & ((((*l_4) = l_466) != l_456) && (*l_2))) >= l_461) , l_467) , (void*)0)) != (void*)0)) && (**g_178)) <= 4294967293UL) == 0x39CEL) == 0x3BE6L) >= l_452), 5)));
                l_469 = l_456;
                if (g_130)
                    goto lbl_492;
                (*l_2) = g_190;
            }
            else
            {
                if (((**l_4) = ((((*l_469) , l_470) != ((((l_452 == ((*g_179) > (g_231 || 1L))) , (**g_239)) != (void*)0) , l_472)) , l_452)))
                {
                    int **l_473 = (void*)0;
                    int **l_474 = &g_10;
                    (*l_4) = l_456;
                    (*l_4) = &l_461;
                    (*l_474) = ((*l_4) = l_456);
                }
                else
                {
                    (*l_4) = (void*)0;
                }
                for (g_253 = 0; (g_253 == (-12)); g_253 = safe_sub_func_int32_t_s_s(g_253, 4))
                {
                    int *l_477 = (void*)0;
                    int *l_478 = &g_175;
                    (*l_478) = ((*l_469) = l_452);
                    (*l_4) = &l_461;
                }
            }
        }
        else
        {
            unsigned char l_479 = 0x97L;
            int *l_488 = &g_378;
            g_378 = ((**g_178) >= (l_479 < (safe_div_func_int16_t_s_s((**g_178), 0x8243L))));
            (*l_488) = ((*l_2) = (safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((g_32 = ((**g_362) = l_479)) , (((**l_4) != (**g_408)) , ((func_13((*g_241)) >= func_37(l_452, g_457)) ^ l_479))), 11)), g_378)));
        }
    }
    else
    {
        const int **l_490 = &l_489;
        (*l_4) = (void*)0;
        (*l_490) = l_489;
    }
lbl_492:
    (*l_4) = g_491;
    (*l_4) = (void*)0;
    return g_133;
}







static short func_5(int ** p_6)
{
    const unsigned short l_447 = 0x4C76L;
    int l_448 = 0x826A327AL;
    (**p_6) = ((l_447 && (l_448 = 1UL)) | l_447);
    return l_447;
}







static unsigned func_13(unsigned char p_14)
{
    unsigned l_436 = 4294967295UL;
    const unsigned *l_438 = &g_187;
    short *l_439 = (void*)0;
    const unsigned char *l_442 = &g_93;
    for (g_58 = (-20); (g_58 < 47); g_58 = safe_add_func_int16_t_s_s(g_58, 9))
    {
        unsigned char l_437 = 0x07L;
        const int *l_440 = &g_378;
        unsigned short l_441 = 0xD245L;
        int *l_443 = &g_175;
        l_440 = (((p_14 <= ((void*)0 != (*g_178))) , g_231) , l_438);
        (*l_443) = ((((((*g_179) = l_441) , l_442) != ((*g_409) , ((**g_239) = (**g_239)))) , g_253) || 0x3B993314L);
        g_10 = l_443;
        if (((void*)0 != l_442))
        {
            int **l_444 = &g_10;
            (*l_444) = (*g_9);
        }
        else
        {
            const int **l_445 = &l_440;
            (*l_445) = l_438;
        }
    }
    return l_436;
}







static int func_17(int ** p_18, const unsigned p_19)
{
    int *l_431 = &g_3;
    for (g_348 = 7; (g_348 >= 1); g_348 = safe_sub_func_int16_t_s_s(g_348, 9))
    {
        int l_430 = 0x61382A16L;
        for (g_93 = 6; (g_93 >= 22); ++g_93)
        {
            for (g_231 = 18; (g_231 >= 19); g_231 = safe_add_func_int8_t_s_s(g_231, 4))
            {
                unsigned char l_429 = 0x02L;
                l_429 = p_19;
                return l_429;
            }
        }
        return l_430;
    }
    (*p_18) = l_431;
    (*p_18) = l_431;
    (*p_18) = (void*)0;
    return g_36;
}







static int ** func_20(int p_21, int p_22, short p_23, unsigned p_24, int * p_25)
{
    unsigned l_40 = 4294967288UL;
    unsigned char *l_57 = &g_58;
    short *l_82 = (void*)0;
    int l_421 = 0L;
    l_421 = (((func_37((l_40 || p_24), func_41(func_46((l_40 , (safe_sub_func_uint16_t_u_u(g_36, g_3))), (func_51((l_57 == ((safe_add_func_int8_t_s_s(func_61(&l_40, l_40, l_57), g_36)) , (void*)0)), p_21, &l_40, g_3, l_82) , &p_24)), &g_3, l_40, &l_40)) , 2L) <= p_24) > 0x8C5FL);
    return &g_10;
}







static const unsigned func_37(short p_38, int p_39)
{
    unsigned l_418 = 4294967290UL;
    int *l_419 = (void*)0;
    int l_420 = 0L;
    l_420 = ((p_39 <= l_418) | 0x9BF8D893L);
    return p_38;
}







static int func_41(short * p_42, int * p_43, short p_44, unsigned * p_45)
{
    int *l_168 = &g_3;
    int **l_182 = &g_10;
    short * const **l_188 = (void*)0;
    unsigned short *l_189 = &g_190;
    unsigned **l_191 = (void*)0;
    unsigned char * const l_199 = &g_58;
    short *l_228 = &g_36;
    unsigned l_238 = 1UL;
    unsigned l_266 = 0xACA4CA27L;
    unsigned char l_374 = 0x88L;
    unsigned *l_416 = &g_32;
    for (g_32 = 0; (g_32 > 2); g_32 = safe_add_func_int8_t_s_s(g_32, 8))
    {
        int **l_169 = &l_168;
        int *l_170 = (void*)0;
        int *l_171 = &g_130;
        (*l_169) = l_168;
        if (((*l_171) = (*l_168)))
        {
            int *l_174 = &g_175;
            (*l_174) = (g_130 = (safe_div_func_uint16_t_u_u(g_58, p_44)));
            g_10 = p_43;
            (*l_171) = ((*p_45) > (safe_lshift_func_uint16_t_u_s(65535UL, 14)));
        }
        else
        {
            short **l_180 = &g_179;
            short ***l_181 = &l_180;
            (*l_171) = ((p_44 || p_44) != ((g_178 == ((*l_181) = l_180)) <= p_44));
            (*l_171) = (*p_43);
        }
        (*l_171) = (*p_43);
    }
    (*l_182) = l_168;
    if ((safe_sub_func_int16_t_s_s((**g_178), ((((*l_168) ^ (((safe_rshift_func_uint16_t_u_u(((g_187 = p_44) , ((l_188 == l_188) != g_130)), ((*l_189) = (g_36 , (g_105 = 65535UL))))) || ((void*)0 == l_191)) != (-1L))) > g_175) == (-5L)))))
    {
        int *l_192 = &g_175;
        g_10 = l_192;
        (**g_9) = (safe_sub_func_int8_t_s_s(((0x15L <= (*l_168)) , g_190), ((**l_182) , (*l_168))));
        for (g_133 = 0; (g_133 != 2); g_133 = safe_add_func_uint16_t_u_u(g_133, 9))
        {
            const int *l_202 = &g_3;
            const int **l_203 = &l_202;
            (*l_182) = l_192;
            (*l_203) = l_202;
            return p_44;
        }
    }
    else
    {
        unsigned l_204 = 0x559AEF2FL;
        int l_220 = (-1L);
        unsigned char * const l_232 = &g_58;
        short *l_255 = &g_253;
        unsigned *l_274 = &g_187;
        int l_353 = 0x4C0A3D98L;
        char l_415 = 0x6AL;
        int *l_417 = &g_378;
        l_204 = (~(**g_9));
        if (func_61(((0x3A82L || ((void*)0 == (*l_182))) , p_43), g_93, &g_93))
        {
            unsigned char *l_216 = (void*)0;
            unsigned char **l_217 = &l_216;
            int l_218 = (-1L);
            unsigned *l_219 = (void*)0;
            short *l_227 = &g_36;
            unsigned short *l_229 = &g_105;
            unsigned short *l_230 = &g_231;
            char l_252 = (-9L);
            char l_254 = 0L;
            short l_275 = 0xA105L;
            unsigned l_315 = 0xAF418E2FL;
            for (g_190 = 0; (g_190 <= 20); ++g_190)
            {
                int *l_207 = &g_130;
                (*l_207) = 0x6E657614L;
                (*l_207) = ((*l_207) , (**g_9));
            }
            if ((safe_add_func_uint32_t_u_u((((safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s(5L, ((safe_rshift_func_uint16_t_u_u(((p_44 , ((((*l_217) = l_216) != (((l_218 ^ ((*p_42) & g_105)) < (*p_42)) , &g_93)) && 0xCAL)) < l_204), 13)) >= 0UL))), l_204)) <= (*l_168)) , 0x2E6D70E5L), (*l_168))))
            {
                const unsigned short l_235 = 65535UL;
                unsigned *l_257 = &g_187;
                short l_261 = 0x1008L;
                int *l_265 = &g_130;
                short l_269 = 0xEDC0L;
                const unsigned char ***l_282 = (void*)0;
                short l_306 = 0x2B35L;
                unsigned char l_329 = 0xA8L;
                l_218 = ((&g_178 == (g_93 , &g_178)) == ((*l_232) = g_133));
                p_43 = (*g_9);
                if (l_204)
                    goto lbl_256;
                if ((safe_mod_func_uint8_t_u_u((~l_235), (safe_lshift_func_uint16_t_u_s((func_51((((((((((l_238 <= (((p_44 & ((***g_239) || p_44)) || g_187) != l_252)) & 6L) , p_44) , 1L) == g_253) , 0x4539L) || g_190) == g_3) > 0UL), p_44, p_45, l_254, l_255) , g_190), l_254)))))
                {
lbl_256:
                    (*l_182) = p_45;
                    if ((l_235 | (~(**g_178))))
                    {
                        int *l_258 = &g_175;
                        (*l_258) = ((p_45 = l_257) == p_43);
                    }
                    else
                    {
                        int *l_264 = &l_220;
                        (*l_264) = (((4294967291UL ^ ((g_190 = (safe_lshift_func_uint8_t_u_u((***g_239), l_261))) >= l_204)) , ((**l_182) || (safe_rshift_func_uint16_t_u_s(g_231, (*p_42))))) , (**g_9));
                        return p_44;
                    }
                    (*l_265) = ((**g_178) < (*g_179));
                }
                else
                {
                    return g_253;
                }
                if (func_51(l_266, (*l_265), ((safe_lshift_func_uint8_t_u_u((*l_265), ((((&g_187 == (l_220 , (void*)0)) , func_61(p_43, (l_269 ^ ((safe_mod_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u(g_3, 2)) , (**l_182)), (*g_10))) <= p_44)), (*g_240))) <= 0x8222L) , 9UL))) , (void*)0), p_44, l_189))
                {
                    (*l_265) = (*p_43);
                    return l_275;
                }
                else
                {
                    short l_276 = 0x4EC3L;
                    unsigned char ***l_283 = &g_240;
                    unsigned char l_287 = 0x54L;
                    int l_316 = (-6L);
                    l_276 = (*p_43);
                    for (g_190 = 18; (g_190 < 55); g_190 = safe_add_func_int16_t_s_s(g_190, 1))
                    {
                        if ((*p_43))
                            break;
                    }
                    if ((0x956A4831L && (l_220 = (safe_unary_minus_func_uint8_t_u((**g_240))))))
                    {
                        unsigned **l_280 = &l_274;
                        unsigned ***l_281 = &l_191;
                        int l_284 = (-1L);
                        (*l_281) = l_280;
                        l_284 = (l_282 != l_283);
                        (*l_265) = (p_44 , (safe_add_func_uint16_t_u_u(l_287, ((safe_add_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((((g_3 >= ((l_218 || (l_252 , ((void*)0 != &g_3))) < (p_44 & ((*l_255) = (((*p_45) = (safe_rshift_func_uint8_t_u_s(p_44, 4))) | g_253))))) ^ (*g_241)) == (*p_43)), l_254)), p_44)) >= p_44))));
                        (*l_265) = (safe_add_func_int8_t_s_s((((((*p_43) == (p_44 >= ((*p_42) && ((safe_lshift_func_int16_t_s_u((l_218 || g_231), l_204)) , 0x9DCFL)))) | p_44) ^ 0xEFA68B3BL) , g_130), p_44));
                    }
                    else
                    {
                        unsigned short l_342 = 0x0038L;
                        int *l_343 = &g_175;
                        int *l_344 = (void*)0;
                        int *l_345 = &l_220;
                        l_316 = (((*l_189) = (safe_sub_func_uint32_t_u_u(0x59274A44L, (*p_43)))) >= 1UL);
                        (*l_265) = (((***l_283) = (l_276 , p_44)) > (safe_mod_func_int32_t_s_s((*p_43), (*l_265))));
                        (*l_345) = ((*l_265) = ((((safe_rshift_func_int8_t_s_s(l_220, 1)) && ((safe_rshift_func_int16_t_s_u(((safe_div_func_uint32_t_u_u(((g_32 != ((*p_43) , (((((safe_sub_func_int8_t_s_s((((**g_240) > (safe_add_func_int8_t_s_s(((!(l_329 & (safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(7L, 7)) < (*l_265)), (safe_div_func_uint32_t_u_u((*p_45), ((*l_343) = l_342))))), l_287)), 3)), p_44)))) >= g_3), (*l_168)))) ^ p_44), p_44)) || 0UL) < 0xA3L) & l_252) ^ 1UL))) >= p_44), 0x32108994L)) <= (*p_43)), g_93)) | g_3)) & (**g_240)) == g_105));
                        (*l_182) = ((((((g_133 , l_275) == l_276) ^ 0xDA85L) , &p_44) == &p_44) , (void*)0);
                    }
                }
            }
            else
            {
                const int *l_351 = &l_218;
                const int **l_352 = &l_351;
                for (g_187 = (-5); (g_187 < 24); g_187 = safe_add_func_uint32_t_u_u(g_187, 1))
                {
                    return g_231;
                }
                (*l_352) = l_351;
                l_353 = (*p_43);
            }
        }
        else
        {
            int **l_357 = &g_10;
            char *l_375 = (void*)0;
            int l_376 = 0x1168ABE0L;
            char *l_377 = (void*)0;
            short **l_379 = &g_179;
            int *l_380 = (void*)0;
            for (g_187 = 0; (g_187 < 7); ++g_187)
            {
                int *l_356 = &g_130;
                (*l_182) = l_356;
            }
            (*l_357) = (*g_9);
            if ((g_130 = (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((**l_357) & ((((g_32 | ((void*)0 != g_362)) , (safe_lshift_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(0xE63DL, (((safe_sub_func_int32_t_s_s((((((p_44 , (g_378 = ((p_43 != (void*)0) ^ (safe_div_func_uint8_t_u_u(((l_220 = ((((safe_rshift_func_uint16_t_u_s((p_44 , l_374), (*g_179))) && (**l_357)) & l_353) < (**l_357))) == p_44), l_376))))) , l_379) == (void*)0) ^ g_3) , (**g_9)), 0x07DBFFB3L)) , 0xBFL) >= l_204))) >= g_105), 4))) && (*p_43)) > l_353)), (**g_178))), (**l_182)))))
            {
                unsigned char *l_381 = (void*)0;
                int l_389 = 0xC8E9F6F8L;
                int *l_390 = (void*)0;
                int *l_391 = &l_220;
                p_43 = ((*l_182) = p_43);
                if (g_133)
                    goto lbl_382;
lbl_382:
                (*l_182) = (((((*g_240) = (l_381 = (*g_240))) == (void*)0) == p_44) , p_43);
                (*l_391) = (((((((*g_179) == (*g_179)) ^ 250UL) || (((((**l_379) = (safe_add_func_int16_t_s_s((func_61(p_45, (((((safe_rshift_func_uint8_t_u_s(0x17L, 2)) || ((**l_357) != 0x16L)) && p_44) && (*g_363)) , 1UL), l_232) > g_58), (*g_179)))) >= 65535UL) && 65530UL) & l_389)) , 0x6AL) != 0x1FL) > 0x761CL);
            }
            else
            {
                int *l_395 = &g_175;
                unsigned char * const l_405 = &g_58;
                (*l_395) = (((safe_mod_func_uint8_t_u_u((**g_240), (g_394 = (**l_357)))) ^ g_187) != (p_44 | g_93));
                for (l_376 = 0; (l_376 == 26); l_376 = safe_add_func_int32_t_s_s(l_376, 1))
                {
                    unsigned short l_404 = 65527UL;
                    char *l_406 = &g_407;
                    const char * const **l_410 = &g_408;
                    (*l_410) = (((*l_406) = (safe_sub_func_uint16_t_u_u(g_130, (g_231 > ((safe_mod_func_int32_t_s_s(((((**l_182) , (*g_240)) == l_377) == ((*l_395) = (safe_mod_func_uint16_t_u_u(((p_44 ^ (((*p_42) , l_404) > (func_61((*g_362), g_175, l_405) , 0xC4C52AB0L))) > g_130), (-1L))))), (*p_45))) >= p_44))))) , g_408);
                    return p_44;
                }
            }
        }
        (*l_417) = (safe_sub_func_uint32_t_u_u(((((**g_362) = l_415) || (*p_43)) , 4294967286UL), p_44));
        (*l_182) = p_45;
    }
    return g_36;
}







static short * func_46(unsigned char p_47, unsigned * p_48)
{
    int *l_153 = &g_130;
    unsigned char * const l_162 = &g_58;
    int l_163 = 0x86939548L;
    unsigned char * const l_164 = (void*)0;
    short *l_165 = &g_36;
    (*l_153) = (safe_mod_func_uint8_t_u_u(g_32, p_47));
    (*l_153) = (*l_153);
    return l_165;
}







static int func_51(short p_52, unsigned short p_53, const unsigned * p_54, unsigned short p_55, short * p_56)
{
    short l_87 = 0x2669L;
    short l_106 = 4L;
    int *l_127 = &g_3;
    const int *l_135 = &g_130;
    const int **l_134 = &l_135;
    unsigned *l_137 = &g_32;
    unsigned **l_136 = &l_137;
    char l_148 = (-1L);
    int *l_149 = (void*)0;
    int *l_150 = &g_130;
    if ((*g_10))
    {
        unsigned char * const l_88 = (void*)0;
        unsigned char *l_92 = &g_93;
        int l_94 = (-1L);
        unsigned *l_103 = &g_32;
        int *l_124 = &l_94;
        int *l_131 = &g_130;
        int **l_132 = &l_127;
        if (((g_58 | (0L > (safe_rshift_func_int16_t_s_u(((l_87 && g_3) > func_61(&g_32, l_87, l_88)), 0)))) | (safe_rshift_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(((*l_92) = (g_36 , 255UL)))), p_55))))
        {
            unsigned l_117 = 1UL;
            unsigned char **l_121 = &l_92;
            unsigned char ***l_122 = &l_121;
            if (((l_94 = g_3) <= p_55))
            {
                short *l_100 = &g_36;
                short **l_99 = &l_100;
                unsigned short *l_104 = &g_105;
                int l_107 = (-1L);
                const unsigned *l_108 = &g_32;
                int *l_118 = (void*)0;
                int *l_119 = &l_107;
                int *l_120 = &l_94;
                l_94 = (((safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((void*)0 != &g_58), (g_58 , ((*l_103) = ((((*l_99) = &p_52) != (void*)0) == (((safe_lshift_func_uint8_t_u_s((func_61(l_103, ((*l_104) = g_3), ((l_107 = (l_94 & (l_106 | 255UL))) , (void*)0)) > g_3), 3)) > 0xD2L) , 0x6F38C135L)))))), g_36)) , p_52) & 0xD6L);
                (*l_120) = ((*l_119) = (((l_108 == &g_32) || (-6L)) == ((((((safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((*g_10), 0x785ABE16L)) <= ((safe_div_func_uint32_t_u_u(((*g_9) != (*g_9)), l_106)) == (g_105 , g_58))), 0UL)), l_117)) ^ (-3L)) < g_3) , 0xE9ABL) || g_93) || g_105)));
            }
            else
            {
                return p_53;
            }
            (*l_122) = l_121;
        }
        else
        {
            int **l_123 = &g_10;
            (*l_123) = &l_94;
            l_124 = (void*)0;
        }
        for (l_94 = 0; (l_94 <= 27); l_94++)
        {
            int **l_128 = (void*)0;
            int *l_129 = &g_130;
            g_10 = l_127;
            (*l_129) = (*l_127);
            return p_53;
        }
        (*l_131) = p_55;
        (*l_132) = l_127;
    }
    else
    {
        return g_133;
    }
    (*l_134) = p_54;
    (*l_150) = (g_32 || (p_53 || 65535UL));
    return (*l_127);
}







static const char func_61(unsigned * p_62, unsigned short p_63, unsigned char * const p_64)
{
    int l_67 = 1L;
    short *l_68 = &g_36;
    short l_69 = 1L;
    const int *l_77 = &g_3;
    const int **l_76 = &l_77;
    char l_78 = 0xB7L;
    int *l_79 = &l_67;
    (*l_79) = (!((safe_lshift_func_uint16_t_u_u(((((((((l_67 , (l_68 != (void*)0)) , ((l_69 , g_32) >= (((safe_sub_func_int32_t_s_s(((&g_10 == (l_67 , (((**g_9) > (safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((((p_63 == g_58) <= l_67) == g_3), g_58)), 0xB515L))) , l_76))) , 0x2A6A8E49L), (-1L))) && (*g_10)) , 0L))) != (**l_76)) < l_78) & p_63) , g_58) & g_32) <= g_32), p_63)) || (*p_62)));
    for (g_32 = 6; (g_32 < 47); g_32 = safe_add_func_int16_t_s_s(g_32, 5))
    {
        (*l_76) = (void*)0;
        (*l_76) = (void*)0;
    }
    return g_3;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_394, "g_394", print_hash_value);
    transparent_crc(g_407, "g_407", print_hash_value);
    transparent_crc(g_433, "g_433", print_hash_value);
    transparent_crc(g_457, "g_457", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
