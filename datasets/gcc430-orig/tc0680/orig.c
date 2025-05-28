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



static char g_7 = 1L;
static unsigned char g_9 = 0x74L;
static unsigned char g_14 = 0x29L;
static unsigned char g_28 = 1UL;
static unsigned char *g_27 = &g_28;
static char g_74 = 5L;
static int g_77 = 0xA4792D8CL;
static int g_79 = (-2L);
static char g_84 = 0x80L;
static int g_86 = 0x975881DDL;
static int * volatile g_85 = &g_86;
static unsigned char g_91 = 0x1BL;
static unsigned g_94 = 4294967295UL;
static int *g_100 = &g_79;
static unsigned short g_129 = 0xDC16L;
static int g_133 = (-9L);
static int ** volatile g_158 = &g_100;
static volatile unsigned short g_165 = 0x101CL;
static volatile short *g_175 = (void*)0;
static int ** volatile g_184 = (void*)0;
static int ** volatile g_185 = (void*)0;
static volatile unsigned ** volatile g_217 = (void*)0;
static int ** volatile g_224 = &g_100;
static int g_261 = 0L;
static int g_264 = 0x866EE0FFL;
static int *g_263 = &g_264;
static int *g_276 = &g_261;
static int ** volatile g_280 = &g_263;
static unsigned char g_289 = 252UL;
static unsigned g_300 = 0x26253D0EL;
static short g_307 = 0x90EEL;
static short *g_310 = (void*)0;
static short **g_309 = &g_310;
static short *** volatile g_308 = &g_309;
static unsigned *g_319 = &g_94;
static short g_335 = 0xCCF7L;
static unsigned short g_375 = 0xF9AEL;
static unsigned char **g_382 = &g_27;
static unsigned char *** volatile g_381 = &g_382;
static volatile unsigned g_400 = 1UL;
static int ** volatile g_402 = &g_263;
static volatile int *g_409 = (void*)0;
static volatile int ** volatile g_408 = &g_409;
static volatile int ** volatile g_444 = &g_409;
static int ** volatile g_476 = &g_100;
static unsigned g_480 = 0UL;
static int g_512 = 1L;
static int * volatile g_522 = &g_77;
static unsigned g_527 = 0x6CF15C61L;
static int * volatile g_531 = &g_512;
static int ** volatile g_546 = &g_100;



static char func_1(void);
static unsigned char func_3(unsigned p_4, short p_5, int p_6);
static unsigned func_15(unsigned char * p_16, char p_17, unsigned char * p_18, short p_19, unsigned char * p_20);
static unsigned char * func_21(unsigned char * p_22, unsigned char * p_23, int p_24, int p_25, unsigned char * p_26);
static int func_29(unsigned short p_30);
static unsigned func_35(short p_36, unsigned char * p_37, unsigned char * p_38, int p_39);
static char func_47(char p_48);
static int * func_49(int * p_50);
static unsigned func_57(unsigned char p_58, int * p_59, int * p_60, int p_61, int p_62);
static char func_65(int p_66, unsigned p_67);
static char func_1(void)
{
    unsigned char l_2 = 0x38L;
    unsigned char *l_8 = &g_9;
    short l_523 = 0x5C4BL;
    unsigned *l_528 = (void*)0;
    unsigned *l_529 = &g_480;
    unsigned char **l_532 = &g_27;
    int l_545 = 0x1EFE6392L;
    int *l_548 = &g_512;
    int *l_551 = &g_512;
    (*g_531) = (l_2 > (0xA53AL ^ (((func_3(g_7, g_7, (((*l_8) = l_2) >= ((*g_27) = (safe_mod_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((g_7 ^ (g_14 ^= l_2)), g_7)) >= ((*l_529) = (g_527 |= func_15(func_21(g_27, &l_2, g_7, g_28, &g_28), l_523, g_27, l_2, g_27)))), l_2))))) || l_523) & g_300) && g_527)));


    ;


    ;
    if ((l_2 <= func_3((g_94 != l_2), (safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((((g_91 | l_2) == l_523) >= g_28), (***g_381))), l_523)), l_2)))
    {
        unsigned l_537 = 4294967293UL;
        int *l_544 = &g_86;
        l_545 &= (l_537 ^ (((l_2 && l_537) < (safe_add_func_uint8_t_u_u((**g_382), l_537))) || (((safe_sub_func_uint16_t_u_u(0xEC42L, (*l_544))) & 0L) | 0UL)));
        (*g_546) = (*g_402);

        ;
    }
    else
    {
        int *l_547 = (void*)0;
        (*g_522) = l_545;
    }
    l_548 = (*g_402);

    ;
    (*l_551) = (1L | (safe_rshift_func_uint8_t_u_s((**g_382), 0)));
    return (*l_551);
}







static unsigned char func_3(unsigned p_4, short p_5, int p_6)
{
    unsigned char l_530 = 255UL;
    return l_530;
}







static unsigned func_15(unsigned char * p_16, char p_17, unsigned char * p_18, short p_19, unsigned char * p_20)
{
    for (g_84 = (-20); (g_84 == (-20)); g_84 = safe_add_func_uint32_t_u_u(g_84, 7))
    {
        unsigned l_526 = 0x08F9594FL;
        if (l_526)
            break;
    }
    return p_17;
}







static unsigned char * func_21(unsigned char * p_22, unsigned char * p_23, int p_24, int p_25, unsigned char * p_26)
{
    int *l_511 = &g_512;
    int *l_513 = (void*)0;
    int **l_514 = &g_263;
    char *l_518 = &g_84;
    int *l_521 = &g_79;
    (*l_511) ^= (func_29(p_25) ^ p_25);





    ;
    (*l_511) = 0x7C7C07CCL;
    (*l_514) = (l_513 = l_513);

    ;
    (*g_522) = ((*l_511) = ((*l_521) &= (0x4C2CC62DL <= (safe_sub_func_int8_t_s_s(((0xECL > ((*l_518) |= (p_24 >= p_25))) < (~(*l_511))), (safe_mod_func_int8_t_s_s(p_24, 8L)))))));
    return (**g_381);


}







static int func_29(unsigned short p_30)
{
    int l_46 = 0x20F30385L;
    unsigned char *l_288 = &g_289;
    unsigned *l_505 = (void*)0;
    unsigned *l_506 = (void*)0;
    unsigned *l_507 = &g_94;
    unsigned l_508 = 0x1D13EEEFL;
    int *l_509 = (void*)0;
    int l_510 = 0x5CD2B4CAL;
    l_510 &= ((safe_mod_func_int32_t_s_s((((safe_lshift_func_int8_t_s_s((((*l_507) = func_35((((safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((*g_27) = (safe_add_func_uint8_t_u_u(p_30, p_30))), l_46)), p_30)) > (func_47(l_46) | ((-7L) < l_46))) | (safe_div_func_int32_t_s_s(l_46, 1L))), l_288, l_288, l_46)) > 0x57602EC6L), p_30)) >= p_30) < 1L), l_46)) | l_508);





    ;
    return p_30;
}







static unsigned func_35(short p_36, unsigned char * p_37, unsigned char * p_38, int p_39)
{
    int **l_291 = &g_276;
    int ***l_290 = &l_291;
    int ***l_293 = &l_291;
    int ****l_292 = &l_293;
    int *l_294 = &g_264;
    short *l_306 = &g_307;
    short **l_305 = &l_306;
    int *l_311 = &g_264;
    int l_318 = 1L;
    unsigned char l_361 = 255UL;
    char l_416 = 0x8EL;
    unsigned char l_439 = 5UL;
    unsigned **l_443 = &g_319;
    int *l_472 = &g_264;
    unsigned char ***l_487 = &g_382;
    if ((l_290 == ((*l_292) = &l_291)))
    {
        l_294 = func_49(func_49(l_294));

        ;
    }
    else
    {
        unsigned *l_299 = &g_94;
        char l_303 = (-9L);
        int l_304 = 0L;
        l_304 = (p_36 || (((*l_294) >= ((safe_sub_func_uint8_t_u_u(func_47((((-1L) > ((*l_299) = (*l_294))) > ((p_36 && g_300) <= (*g_27)))), (safe_sub_func_int8_t_s_s(((((0x11E6L == l_303) && 0x0AL) == (*l_294)) != 0x5FL), (*l_294))))) > p_36)) > g_289));
        l_294 = func_49(func_49(func_49(l_294)));

        ;
        (*g_308) = l_305;

        ;
    }

    ;
    ;
    (*l_311) ^= (func_57((*g_27), l_294, ((*g_158) = (*g_158)), (*g_276), (*g_276)) >= g_289);
    if ((safe_add_func_uint32_t_u_u((l_318 = ((*l_294) = (safe_mul_func_int8_t_s_s(g_129, (p_36 != ((*l_306) = (safe_mod_func_int8_t_s_s((*l_311), p_39)))))))), g_261)))
    {
        (*g_100) = (*l_311);
    }
    else
    {
        unsigned short l_322 = 0x05AAL;
        int ***l_327 = &l_291;
        unsigned *l_330 = &g_94;
        unsigned *l_332 = &g_94;
        unsigned **l_331 = &l_332;
        unsigned short *l_333 = (void*)0;
        unsigned short *l_334 = &g_129;
        int **l_336 = &g_100;
        (*l_311) = ((l_294 == (g_319 = (void*)0)) > func_65(((*g_85) = ((((**g_158) = (safe_lshift_func_uint8_t_u_u(l_322, 4))) | (safe_sub_func_uint16_t_u_u((g_335 = ((*l_334) ^= ((safe_sub_func_uint32_t_u_u(g_77, (l_327 == (void*)0))) ^ (safe_sub_func_uint8_t_u_u((*g_27), (l_330 != ((*l_331) = &g_94))))))), 0x719AL))) >= l_322)), l_322));

        ;
        (*l_336) = (*g_280);

        ;
    }

    ;
    ;
    if ((*l_294))
    {
        unsigned l_342 = 0x9593E8CAL;
        for (g_86 = 27; (g_86 != 1); g_86 = safe_sub_func_int16_t_s_s(g_86, 1))
        {
            char l_341 = (-8L);
            for (p_36 = (-3); (p_36 > (-10)); p_36 = safe_sub_func_int32_t_s_s(p_36, 4))
            {
                return l_341;


            }
            return l_342;


        }
    }
    else
    {
        int l_362 = (-9L);
        int l_363 = 1L;
        int l_379 = 0xF79306F4L;
        int *l_423 = &l_362;
        unsigned *l_424 = (void*)0;
        unsigned *l_425 = &g_94;
        short ***l_429 = &g_309;
        (*l_311) = 0L;
        if (((*l_311) = (safe_lshift_func_uint16_t_u_u(g_165, (0x0BL || (safe_div_func_int8_t_s_s((safe_add_func_int16_t_s_s(0x5AACL, (((safe_sub_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u(((void*)0 == &g_129), (p_36 == (safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(p_36, (l_361 == (l_362 |= (p_36 == (-3L)))))), 14)), g_307)), 1L))))) & 0x17L), l_363)) >= 4UL) ^ (*p_38)))), p_36)))))))
        {
            int l_368 = (-7L);
            char *l_413 = &g_84;
            if ((~(((+(safe_lshift_func_int16_t_s_s(0x4C29L, 9))) | (((((safe_lshift_func_int16_t_s_u(((void*)0 == &g_84), (65530UL || p_39))) & ((&g_85 == (void*)0) <= p_39)) <= l_368) > 0xE09F5BEAL) && 0UL)) | p_39)))
            {
                int **l_369 = &l_294;
                unsigned l_370 = 0xC05E57BFL;
                if (p_39)
                {
                    unsigned short *l_373 = &g_129;
                    unsigned short *l_374 = &g_375;
                    unsigned **l_376 = &g_319;
                    (*l_369) = (*g_280);

                    ;
                    (*g_224) = (void*)0;

                    ;
                    if ((safe_mod_func_uint32_t_u_u(l_363, ((((*l_374) = ((*l_373) ^= l_368)) < p_36) || (l_376 == &g_319)))))
                    {
                        short ***l_377 = (void*)0;
                        short ***l_378 = &l_305;
                        (*l_311) = ((*g_27) >= ((-9L) > l_363));
                        (*l_311) = ((((*l_378) = (*g_308)) == &g_175) & 65527UL);

                        ;
                    }
                    else
                    {
                        return l_379;


                    }

                    ;
                }
                else
                {
                    unsigned l_380 = 0xE57CC7FDL;
                    (**l_369) ^= ((&g_276 == ((**l_292) = &g_276)) & l_380);
                    (*g_381) = &g_27;
                }

                ;
                ;
            }
            else
            {
                short l_401 = 0L;
                volatile int ** volatile *l_410 = &g_408;
                for (g_94 = 0; (g_94 < 29); g_94 = safe_add_func_int8_t_s_s(g_94, 3))
                {
                    char *l_397 = (void*)0;
                    char *l_398 = &g_74;
                    int l_399 = 0L;
                    int **l_403 = &g_263;
                    l_401 &= (safe_mod_func_uint8_t_u_u((**g_382), (l_363 | (safe_div_func_int8_t_s_s((((*l_294) == g_77) <= g_79), (safe_sub_func_int8_t_s_s((((*l_398) &= ((safe_sub_func_uint16_t_u_u(g_84, l_368)) & (((safe_mod_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(p_36, l_368)) & 0xF33F7443L), g_289)) >= (*g_27)) & 0xDDL))) != l_399), g_400)))))));
                    (*g_402) = &l_399;

                    ;
                    (*l_403) = (void*)0;

                    ;
                }
                for (g_261 = 28; (g_261 > (-22)); g_261 = safe_sub_func_uint16_t_u_u(g_261, 9))
                {
                    return p_36;


                }
                for (l_363 = 0; (l_363 >= (-13)); l_363 = safe_sub_func_uint16_t_u_u(l_363, 7))
                {
                    return p_36;


                }
                (*l_410) = g_408;
            }

            ;
            ;
            l_368 = (l_362 != 0x32C39E34L);
        }
        else
        {
            unsigned short *l_414 = &g_129;
            int l_415 = 1L;
            l_415 = ((*l_311) != ((*l_414) = ((*l_311) ^ (*p_38))));
            (*l_311) = l_416;
            l_362 = p_39;
            for (l_361 = (-17); (l_361 > 1); l_361 = safe_add_func_uint8_t_u_u(l_361, 4))
            {
                return (*l_311);


            }
        }

        ;
        ;
        if (p_39)
        {
            unsigned l_426 = 4294967295UL;
            short ***l_428 = &g_309;
            int *l_430 = &l_363;
            (*l_311) = (p_36 | 0x37EBF149L);
            if (g_300)
                goto lbl_427;
lbl_427:
            (*l_423) = l_426;
            if ((l_428 != l_429))
            {
                unsigned char l_440 = 0xE3L;
                unsigned **l_442 = &g_319;
                unsigned ***l_441 = &l_442;
                l_430 = &l_363;
                for (g_84 = 1; (g_84 > 4); g_84 = safe_add_func_int16_t_s_s(g_84, 4))
                {
                    (*l_423) &= p_39;
                }
                (*l_423) = (safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u(g_91, (safe_rshift_func_uint8_t_u_u(((*l_430) != ((!0L) >= (*l_423))), l_439)))), ((g_264 ^ (-4L)) >= l_440)));
                (*l_430) = (((((l_443 = ((*l_441) = &g_319)) != &g_319) == (*l_430)) > (p_36 = 1L)) == ((*p_37) ^= 0xF5L));
            }
            else
            {
                (*g_444) = (*g_408);
            }
        }
        else
        {
            char *l_459 = &g_74;
            int l_462 = 0x37000E7CL;
            int *l_467 = &g_264;
            char l_497 = 0L;
            int **l_502 = &l_423;
            int *l_504 = &l_379;
            int **l_503 = &l_504;
            if ((*l_423))
            {
                char l_471 = 1L;
                int *l_475 = &g_133;
                (*g_224) = &l_318;

                ;
                (*g_100) &= (*l_423);
                for (p_36 = (-5); (p_36 >= (-8)); p_36--)
                {
                    int *l_465 = &g_264;
                    int **l_466 = &g_263;
                    l_467 = func_49(((*l_466) = l_465));

                    ;
                }

                ;
                ;
                ;
                if (((*g_100) = (*l_423)))
                {
                    short **l_474 = &g_310;
                    for (l_318 = 0; (l_318 != (-17)); --l_318)
                    {
                        int **l_470 = &g_263;
                        (*l_470) = (void*)0;

                        ;
                        if (l_471)
                            continue;
                        (*l_470) = (void*)0;
                    }
                    if (p_39)
                    {
                        int **l_473 = &g_263;
                        (*l_473) = l_472;

                        ;
                        (*g_100) = (((*l_429) = l_474) != &g_310);

                        ;
                    }
                    else
                    {
                        (*g_476) = l_475;

                        ;
                        return p_39;


                    }

                    ;
                    ;
                }
                else
                {
                    unsigned *l_479 = &g_480;
                    int l_494 = (-1L);
                    (*l_423) ^= (*g_85);
                    (*l_423) |= (safe_mod_func_int32_t_s_s((((((((*l_479) |= func_47(p_36)) & (safe_mod_func_uint32_t_u_u(p_39, (safe_sub_func_int16_t_s_s(p_39, (safe_div_func_uint8_t_u_u(((((void*)0 != l_487) < (((*l_311) < g_300) ^ ((*l_306) = (safe_div_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(l_494, p_36)), 0xCD4C0356L)), 0x4922CB8CL))))) | g_261), (*l_472)))))))) | 0x86941107L) & 0xF7L) || 4294967289UL) | 0x5672L), p_39));

                    ;
                }

                ;
            }
            else
            {
                unsigned l_498 = 4294967294UL;
                int l_501 = 7L;
                l_318 = ((*l_423) = (p_36 >= (safe_sub_func_int16_t_s_s(((*l_467) = l_497), ((p_39 != l_498) < l_501)))));
            }

            ;
            ;
            ;
            (*l_502) = (*g_476);

            ;
            (*l_311) = (((**l_293) = &p_39) == ((*l_503) = &g_261));

            ;
            ;
            (*l_467) = 0L;
        }

        ;
        ;
        ;
        ;
    }

    ;
    ;
    ;
    ;
    ;
    return p_36;





}







static char func_47(char p_48)
{
    int *l_51 = (void*)0;
    int **l_285 = &g_263;
    (*l_285) = func_49(l_51);


    (*g_100) = (254UL <= (p_48 | p_48));
    return g_77;
}







static int * func_49(int * p_50)
{
    short l_52 = (-7L);
    int l_70 = 1L;
    char *l_73 = &g_74;
    int *l_118 = (void*)0;
    unsigned *l_134 = &g_94;
    unsigned char **l_249 = (void*)0;
    int *l_258 = &g_86;
    unsigned short l_265 = 0x834DL;
    int *l_269 = (void*)0;
    if ((((~l_52) < (safe_div_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((((void*)0 != g_27) | (g_7 >= 0xBFBCL)), ((*l_134) = func_57((safe_rshift_func_int8_t_s_s(func_65((safe_rshift_func_int8_t_s_u(g_7, ((l_70 |= 0UL) <= ((*l_73) = ((safe_add_func_uint32_t_u_u(g_7, g_7)) & l_52))))), l_52), 0)), l_118, l_118, l_52, l_52)))), 1L))) || 0xA76911F3L))
    {
        int *l_135 = &g_133;
        l_135 = &l_70;

        ;
        for (g_86 = 0; (g_86 == (-25)); g_86 = safe_sub_func_uint16_t_u_u(g_86, 3))
        {
            char l_140 = (-1L);
            (*g_100) = (*g_100);
            (*l_135) = (safe_sub_func_uint16_t_u_u((l_140 != (safe_div_func_uint16_t_u_u(g_133, g_84))), (safe_lshift_func_uint8_t_u_s(l_140, 4))));
            return p_50;


        }
    }
    else
    {
        short l_147 = 1L;
        unsigned char *l_154 = &g_91;
        short l_155 = (-5L);
        char *l_156 = &g_84;
        unsigned char l_168 = 251UL;
        int l_190 = 0x4E9F7E8EL;
        unsigned l_196 = 0xD4C00339L;
        unsigned char l_213 = 6UL;
        (*g_85) = (safe_rshift_func_uint8_t_u_u((((l_147 || (safe_rshift_func_int8_t_s_s(0x5EL, l_147))) == (((safe_rshift_func_int8_t_s_u((((safe_div_func_uint8_t_u_u(((void*)0 != l_154), ((*l_154) = l_155))) && (((*l_73) = l_147) ^ ((*l_156) = 0xB4L))) ^ g_129), 6)) != l_155) != 0UL)) >= 0x23L), 0));
    }
    for (l_70 = (-3); (l_70 <= 9); l_70 = safe_add_func_int8_t_s_s(l_70, 1))
    {
        unsigned char l_259 = 0x48L;
        int *l_260 = &g_261;
        unsigned l_262 = 0x0CD27CE9L;
        int **l_282 = &g_276;
        int ***l_281 = &l_282;
    }
    (*l_258) = (safe_lshift_func_uint8_t_u_s((*l_258), (l_249 == l_249)));
    return (*g_158);


}







static unsigned func_57(unsigned char p_58, int * p_59, int * p_60, int p_61, int p_62)
{
    int *l_119 = &g_86;
    unsigned *l_124 = &g_94;
    unsigned **l_123 = &l_124;
    unsigned char *l_126 = (void*)0;
    unsigned char **l_125 = &l_126;
    unsigned short *l_127 = (void*)0;
    unsigned short *l_128 = &g_129;
    int *l_130 = &g_77;
    unsigned char l_131 = 252UL;
    int *l_132 = &g_133;
    (*g_100) = (*g_100);
    if (g_79)
        goto lbl_120;
lbl_120:
    (*l_119) = func_65((*g_85), g_74);
    (*l_130) = (safe_add_func_int32_t_s_s((((*l_128) = ((l_123 != &l_124) | (&g_91 != ((*l_125) = &g_91)))) <= func_65((*l_119), (((*l_130) &= ((*g_100) &= p_58)) != ((*l_132) = l_131)))), g_7));

    ;
    (*l_130) = (p_61 && (*l_132));
    return p_61;
}







static char func_65(int p_66, unsigned p_67)
{
    char l_75 = 3L;
    int *l_76 = &g_77;
    int *l_78 = &g_79;
    int **l_87 = &l_78;
    unsigned char *l_90 = &g_91;
    unsigned char *l_92 = &g_91;
    unsigned *l_93 = &g_94;
    int *l_107 = &g_86;
    unsigned *l_114 = &g_94;
    (*g_85) = (g_84 &= ((g_7 <= (p_66 >= (g_7 < ((*l_78) = (p_67 && ((*l_76) |= (g_7 && l_75))))))) > (safe_div_func_uint16_t_u_u((safe_div_func_int16_t_s_s((g_74 && g_74), p_67)), p_67))));
    (*l_76) = (((*l_87) = &g_77) != &p_66);

    ;
    if ((safe_add_func_int32_t_s_s((l_90 == l_92), ((*l_93) = ((void*)0 != &l_78)))))
    {
        int *l_97 = &g_79;
        (*l_97) &= (((g_77 & ((p_67 > p_66) && ((void*)0 != &g_94))) && 0xA659L) && (safe_add_func_uint32_t_u_u(((*l_93) &= g_77), (*g_85))));
        (*l_87) = (*l_87);
        if ((*g_85))
        {
lbl_101:
            (**l_87) ^= (0x79L && (*l_97));
        }
        else
        {
            for (p_66 = 8; (p_66 >= (-25)); p_66 = safe_sub_func_uint32_t_u_u(p_66, 2))
            {
                (*g_85) |= ((g_100 = &g_79) != ((*l_87) = &p_66));

                ;
                ;
            }

            ;
            (*l_76) |= ((*g_100) |= p_66);
lbl_112:
            if (g_77)
                goto lbl_101;
        }

        ;
        for (p_67 = 0; (p_67 <= 6); p_67 = safe_add_func_int16_t_s_s(p_67, 4))
        {
            char l_104 = 0xD2L;
            unsigned *l_113 = &g_94;
            if (l_104)
                break;
            for (g_91 = 0; (g_91 > 59); g_91 = safe_add_func_uint32_t_u_u(g_91, 2))
            {
                int l_116 = (-1L);
                (*l_87) = l_107;

                ;
                (*l_76) = p_67;
                if ((((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(g_77, 3)), 1L)) || (-1L)) > p_66))
                {
                    if ((*g_85))
                    {
                        return p_67;
                    }
                    else
                    {
                        return p_67;
                    }
                }
                else
                {
                    unsigned **l_115 = &l_114;
                    (**l_87) &= p_67;
                    if (g_91)
                        goto lbl_112;
                    p_66 ^= p_67;
                    (**l_87) &= (l_113 == ((*l_115) = l_114));
                }
                (*g_100) |= (g_91 != (l_116 ^= p_67));
            }
            (**l_87) &= (*g_100);
            p_66 = p_66;
        }
    }
    else
    {
lbl_117:
        (*l_87) = &p_66;

        ;
    }

    ;
    if (g_74)
        goto lbl_117;
    return p_67;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_300, "g_300", print_hash_value);
    transparent_crc(g_307, "g_307", print_hash_value);
    transparent_crc(g_335, "g_335", print_hash_value);
    transparent_crc(g_375, "g_375", print_hash_value);
    transparent_crc(g_400, "g_400", print_hash_value);
    transparent_crc(g_480, "g_480", print_hash_value);
    transparent_crc(g_512, "g_512", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
