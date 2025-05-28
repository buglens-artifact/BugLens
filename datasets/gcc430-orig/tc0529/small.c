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
   unsigned short f0;
   unsigned char f1;
   unsigned short f2;
   unsigned char f3;
};

union U1 {
   unsigned char f0;
};


static int g_7 = 0xA149CEC7L;
static int *g_6 = &g_7;
static char g_13 = (-4L);
static int * volatile g_16 = (void*)0;
static unsigned short g_38 = 5UL;
static char g_47 = 0xFAL;
static int g_82 = 0xDB28543BL;
static union U1 g_85 = {0x9EL};
static union U0 g_86 = {65535UL};
static short g_99 = 0L;
static unsigned g_105 = 1UL;
static unsigned g_121 = 1UL;
static int * volatile g_131 = (void*)0;
static unsigned short g_151 = 0xE9EFL;
static int * volatile g_178 = &g_82;
static int ** volatile g_180 = &g_6;
static int * volatile g_190 = (void*)0;
static int * volatile g_191 = &g_82;
static int g_205 = 0xB2DE1998L;
static int ** volatile g_210 = &g_6;
static int * volatile g_216 = (void*)0;
static int * volatile g_217 = &g_82;
static int * volatile g_243 = &g_82;
static int * volatile g_267 = &g_82;
static int ** volatile g_270 = (void*)0;
static int ** volatile g_271 = &g_6;
static char g_314 = 0x9AL;
static int ** volatile g_315 = &g_6;
static unsigned char *g_340 = &g_86.f3;
static unsigned *g_357 = &g_121;
static unsigned * volatile * volatile g_356 = &g_357;
static union U0 **g_387 = (void*)0;
static int g_391 = 0x49FA879EL;
static int * volatile g_390 = &g_391;
static union U1 *g_393 = &g_85;
static union U1 ** volatile g_392 = &g_393;
static unsigned char **g_396 = &g_340;
static unsigned char *** volatile g_395 = &g_396;
static int ** volatile g_409 = &g_6;
static int * volatile g_418 = &g_391;
static char g_432 = 0xDBL;
static int * volatile g_439 = &g_205;
static int * volatile * volatile g_438 = &g_439;
static int ** volatile g_443 = &g_6;
static union U0 g_446 = {3UL};
static int * volatile g_457 = (void*)0;
static volatile int *g_459 = (void*)0;
static volatile int ** volatile g_460 = &g_459;
static int * volatile g_478 = (void*)0;
static int * volatile g_479 = &g_82;
static char g_486 = 0L;
static int ** volatile g_489 = &g_6;
static int *g_493 = &g_205;
static int **g_492 = &g_493;
static int *** volatile g_491 = &g_492;
static int ** volatile g_515 = &g_6;



static union U1 func_1(void);
static int func_2(int p_3);
static int * func_9(char p_10, int p_11, char p_12);
static int * func_19(unsigned short p_20, int * p_21, int * p_22);
static unsigned short func_23(unsigned p_24, int p_25, union U0 p_26);
static int func_27(char p_28, int * p_29, unsigned short p_30, int * p_31, int * p_32);
static unsigned short * func_40(int * p_41, unsigned short p_42);
static short func_56(union U0 p_57, unsigned short * p_58, char * p_59);
static int func_68(union U1 p_69, union U1 p_70, union U0 p_71, char * p_72, unsigned p_73);
static union U1 func_75(short p_76, char * p_77, unsigned char p_78);
static union U1 func_1(void)
{
    unsigned l_4 = 0xFBB4EBB0L;
    unsigned char l_8 = 247UL;
    unsigned short *l_36 = (void*)0;
    unsigned short *l_37 = &g_38;
    union U0 l_507 = {0x0FF4L};
    int *l_514 = (void*)0;
    int **l_520 = &g_6;
    union U1 l_521 = {0UL};
    g_7 = (func_2(l_4) >= l_8);

    ;
    g_16 = func_9(g_7, g_13, (safe_lshift_func_uint16_t_u_s(((void*)0 == &g_7), 6)));

    ;
    (*l_520) = func_19(func_23(g_7, func_27(g_7, func_9(l_4, g_13, l_8), ((*l_37) = ((safe_unary_minus_func_uint16_t_u(l_4)) == ((g_7 ^ (safe_sub_func_int8_t_s_s(func_2(((+g_13) < l_4)), l_8))) ^ l_8))), &g_7, &g_7), l_507), l_514, &g_391);

    ;
    ;
    (*l_520) = (void*)0;

    ;
    return l_521;

    }







static int func_2(int p_3)
{
    int *l_5 = (void*)0;
    g_6 = l_5;

    ;
    return p_3;
}







static int * func_9(char p_10, int p_11, char p_12)
{
    unsigned short l_17 = 0xCF59L;
    int *l_18 = &g_7;
    l_17 = p_11;
    return l_18;


}







static int * func_19(unsigned short p_20, int * p_21, int * p_22)
{
    (*g_515) = (*g_271);
    for (g_105 = 0; (g_105 > 1); ++g_105)
    {
        union U1 *l_518 = &g_85;
        union U1 **l_519 = &l_518;
        (*g_6) = ((**g_315) | 0x3EF2E3C6L);
        (*p_22) = (**g_180);
        (*l_519) = l_518;
    }
    return p_22;


}







static unsigned short func_23(unsigned p_24, int p_25, union U0 p_26)
{
    char l_513 = (-8L);
    for (g_86.f0 = (-30); (g_86.f0 <= 19); g_86.f0 = safe_add_func_uint16_t_u_u(g_86.f0, 1))
    {
        for (g_446.f2 = 14; (g_446.f2 < 12); g_446.f2 = safe_sub_func_int16_t_s_s(g_446.f2, 7))
        {
            short l_512 = 0xF13BL;
            (*g_217) = p_25;
            return l_512;
        }

    }

    (*g_6) = ((l_513 < (**g_396)) ^ g_391);
    return p_26.f3;
}







static int func_27(char p_28, int * p_29, unsigned short p_30, int * p_31, int * p_32)
{
    short l_39 = (-1L);
    int *l_43 = &g_7;
    char *l_46 = &g_47;
    union U0 l_60 = {0x802DL};
    unsigned short *l_61 = &g_38;
    char *l_62 = (void*)0;
    unsigned short **l_502 = &l_61;
    (*g_210) = func_9(g_38, l_39, (((*l_502) = func_40(l_43, (((g_13 >= (safe_rshift_func_int8_t_s_u((1L ^ ((*l_46) = 0L)), (safe_mod_func_uint32_t_u_u(g_13, ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((p_28 > (safe_mul_func_int16_t_s_s(func_56(l_60, l_61, l_62), 0xDD75L))), 1)), (*l_43))) && p_28)))))) && g_85.f0) <= 0x2C7286ECL))) == &g_38));

    ;
    ;
        ;
    for (g_13 = 0; (g_13 < 16); g_13 = safe_add_func_uint32_t_u_u(g_13, 6))
    {
        unsigned l_505 = 4294967291UL;
        int *l_506 = &g_82;
        (*l_506) = l_505;
    }
    return p_30;
}







static unsigned short * func_40(int * p_41, unsigned short p_42)
{
    int *l_353 = &g_82;
    unsigned char **l_394 = (void*)0;
    char *l_407 = &g_13;
    char **l_406 = &l_407;
    short l_437 = 1L;
    union U1 *l_462 = &g_85;
    unsigned **l_482 = &g_357;
    union U0 *l_495 = &g_86;
    for (g_85.f0 = 0; (g_85.f0 != 17); ++g_85.f0)
    {
        int *l_360 = (void*)0;
        char l_413 = 0L;
        int l_416 = 0x17D59A27L;
        union U0 *l_444 = &g_86;
        l_353 = p_41;

        ;
        for (g_13 = 27; (g_13 < (-11)); g_13--)
        {
            unsigned short l_381 = 0x2A6CL;
            unsigned char l_429 = 1UL;
            int *l_441 = &g_205;
            int **l_440 = &l_441;
            int l_458 = (-7L);
            short l_477 = 0xD0C4L;
            unsigned l_483 = 0xDA4460E2L;
        }
        for (g_99 = 0; (g_99 != (-8)); g_99 = safe_sub_func_uint32_t_u_u(g_99, 3))
        {
            unsigned short *l_498 = &g_151;
            return l_498;


        }
        for (g_86.f1 = 0; (g_86.f1 < 46); g_86.f1++)
        {
            union U0 **l_501 = &l_444;
            (*l_501) = l_444;
        }

    }

    ;
    return &g_38;


}







static short func_56(union U0 p_57, unsigned short * p_58, char * p_59)
{
    unsigned l_67 = 4294967286UL;
    union U1 l_74 = {4UL};
    int *l_179 = &g_7;
    short l_198 = 0x5A2DL;
    char *l_273 = &g_13;
    union U0 *l_346 = &g_86;
    union U0 **l_345 = &l_346;
    if ((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((func_2(l_67) | func_68(l_74, func_75((l_74.f0 >= 0x1EL), p_59, l_74.f0), g_86, &g_13, g_86.f1)), l_67)), g_38)))
    {
        short l_187 = 0x0FBCL;
        char **l_189 = (void*)0;
        char ***l_188 = &l_189;
        unsigned char *l_194 = &g_85.f0;
        unsigned l_214 = 1UL;
        int l_259 = (-9L);
        int l_262 = 0x3001FCD4L;
        int l_263 = (-9L);
        int *l_269 = &l_263;
        (*g_180) = l_179;

        ;
        (*g_191) = ((func_2(g_105) | (safe_lshift_func_uint16_t_u_u((~g_99), ((safe_add_func_int32_t_s_s(1L, p_57.f0)) > g_13)))) != (safe_rshift_func_uint8_t_u_u(l_187, ((void*)0 == l_188))));

        ;
        if (((safe_mul_func_uint8_t_u_u((~0x88L), (-1L))) || ((*l_194) = p_57.f1)))
        {
            int **l_195 = &g_6;
            (*l_195) = (void*)0;
        }
        else
        {
            int l_230 = 0xB5E54AC5L;
            unsigned l_242 = 6UL;
            int l_247 = 7L;
            if ((*l_179))
            {
                int l_199 = 0xED192008L;
                char ***l_202 = (void*)0;
                union U1 *l_206 = &l_74;
                char l_211 = 1L;
                for (l_74.f0 = 0; (l_74.f0 <= 28); l_74.f0 = safe_add_func_uint8_t_u_u(l_74.f0, 7))
                {
                    char l_200 = 0x5EL;
                    if ((func_2(l_198) < g_121))
                    {
                        if (l_199)
                            break;
                    }
                    else
                    {
                        int l_201 = (-1L);
                        l_201 = (l_200 != 0x0DBAL);
                        return p_57.f1;
                    }
                    if (l_187)
                    {
                        char ****l_203 = &l_188;
                        int *l_204 = &g_205;
                        (*g_180) = l_179;

                        ;
                        l_199 = ((((*l_203) = l_202) == (void*)0) <= func_2(((*l_204) = l_187)));

                        ;
                        ;
                    }
                    else
                    {
                        union U1 **l_207 = &l_206;
                        int *l_208 = &g_82;
                        int *l_209 = &l_199;
                        char *l_215 = &l_200;
                        (*l_207) = l_206;
                        (*l_209) = ((*l_208) = (g_85.f0 < p_57.f2));
                        (*g_210) = (*g_180);
                        (*l_208) = (p_57.f3 == (l_211 != (safe_mod_func_uint32_t_u_u(func_2(l_214), func_68(g_85, func_75((p_57.f3 || l_187), p_59, g_86.f1), p_57, l_215, l_187)))));
                    }
                }

                ;
            }
            else
            {
                int l_228 = 5L;
                unsigned *l_229 = &g_121;
                unsigned short *l_231 = (void*)0;
                unsigned short *l_232 = &g_86.f2;
                (*g_217) = func_2(p_57.f1);
                if (((*p_58) > ((((*l_232) = (safe_add_func_uint32_t_u_u(p_57.f2, (+(((!(safe_mod_func_int8_t_s_s(g_86.f1, p_57.f3))) < (safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(func_2((l_214 != ((0UL < (safe_lshift_func_uint16_t_u_s((((*l_229) = l_228) <= ((*g_210) != &l_228)), l_230))) >= l_230))), g_7)), p_57.f1))) == g_82))))) || (*l_179)) | (*l_179))))
                {
                    for (g_99 = 0; (g_99 > 1); g_99 = safe_add_func_uint32_t_u_u(g_99, 8))
                    {
                        int l_241 = 0x366B1B60L;
                        (*g_243) = ((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(g_38, (safe_rshift_func_int16_t_s_s(p_57.f2, 0)))), (p_57.f0 <= l_241))) ^ (l_242 = func_2(l_228)));
                        l_247 = (safe_add_func_int8_t_s_s(0L, (safe_unary_minus_func_uint32_t_u(g_151))));
                    }
                }
                else
                {
                    unsigned *l_264 = &l_242;
                    unsigned **l_265 = (void*)0;
                    unsigned **l_266 = &l_264;
                    int **l_268 = (void*)0;
                    for (g_105 = 0; (g_105 <= 6); ++g_105)
                    {
                        int *l_250 = &l_247;
                        (*l_250) = p_57.f3;
                    }
                    l_228 = p_57.f0;
                    (*g_267) = (safe_sub_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((l_262 = (safe_rshift_func_int16_t_s_u((((*l_232) = ((safe_mod_func_uint8_t_u_u(l_230, (l_259 = g_38))) & 4294967289UL)) || (safe_rshift_func_int16_t_s_s(g_86.f2, 11))), l_214))), (l_263 = (g_38 | 0UL)))) && (((*l_266) = l_264) == &g_121)), p_57.f1));
                    l_269 = (void*)0;

                    ;
                }

                                ;
            }

            ;
            ;
            return g_99;
        }
        (*g_271) = &l_259;

        ;
    }
    else
    {
        unsigned short l_272 = 1UL;
        char **l_274 = &l_273;
        int l_299 = 0x44334F40L;
        if ((l_272 && (((*l_274) = l_273) == p_59)))
        {
            int l_275 = 0xA4445ADCL;
            int **l_276 = &g_6;
            (*l_276) = func_9((5UL | (l_275 > (*p_58))), p_57.f3, (*l_179));

            ;
            for (p_57.f1 = 22; (p_57.f1 > 43); ++p_57.f1)
            {
                unsigned char l_281 = 0UL;
                (*g_243) = (safe_lshift_func_uint8_t_u_u((**l_276), l_281));
            }

                    }
        else
        {
            int *l_282 = &g_82;
            int *l_296 = (void*)0;
            int **l_295 = &l_296;
            int *l_297 = (void*)0;
            int *l_298 = &g_205;
            unsigned char *l_300 = &g_86.f3;
            unsigned **l_304 = (void*)0;
            int **l_332 = (void*)0;
            int ***l_331 = &l_332;
            int **l_343 = (void*)0;
            int **l_344 = (void*)0;
            (*l_282) = (-7L);
            (*l_282) = ((safe_rshift_func_int8_t_s_u((((-7L) <= ((*l_300) = (((~(safe_add_func_int32_t_s_s((*l_179), func_2((l_299 = ((safe_lshift_func_int16_t_s_s(0L, (safe_add_func_uint8_t_u_u(func_2((+((*l_298) = ((((safe_add_func_int32_t_s_s(0xE95A9EE0L, ((*l_282) = (((*l_295) = func_9(((func_2((*l_282)) || l_272) <= (p_57.f1 <= ((safe_add_func_uint8_t_u_u(g_38, p_57.f3)) || l_272))), p_57.f2, l_272)) != l_179)))) | l_272) | (*l_179)) ^ (*l_179))))), 0x4DL)))) > g_86.f1)))))) > g_121) <= 0UL))) | (-9L)), g_13)) && g_105);

                        ;
            for (g_85.f0 = 0; (g_85.f0 == 48); ++g_85.f0)
            {
                unsigned *l_306 = (void*)0;
                unsigned **l_305 = &l_306;
                int l_309 = 0L;
                int *l_339 = &l_309;
                if ((*l_282))
                {
                    int l_303 = 0xC9F24154L;
                    char *l_312 = (void*)0;
                    char *l_313 = &g_314;
                    (*g_315) = func_9(l_303, ((l_304 != l_305) > (1UL ^ (p_57.f3 >= (func_2((((*l_313) = ((safe_mul_func_uint8_t_u_u(((g_85.f0 && (l_309 != p_57.f1)) != (safe_add_func_int32_t_s_s(l_272, 0xBB9CBAC5L))), p_57.f0)) < l_272)) ^ p_57.f3)) >= 8UL)))), l_299);

                    ;
                    if (p_57.f3)
                        break;
                    if (l_272)
                        continue;
                    if ((*g_178))
                        continue;
                }
                else
                {
                    unsigned char l_316 = 0x0FL;
                    int *l_317 = (void*)0;
                    l_299 = l_316;
                    l_317 = (void*)0;
                }
                for (l_309 = 0; (l_309 != (-19)); l_309 = safe_sub_func_uint8_t_u_u(l_309, 9))
                {
                    if (p_57.f2)
                        break;
                }
            }

            ;
            (*g_315) = (*g_315);
        }

        ;
            }


            ;
    (*l_345) = &g_86;
    l_179 = func_9(g_205, ((((-1L) || g_151) < ((*g_340) = (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(0xEEL, ((void*)0 != &l_67))), 3)))) <= (*l_179)), p_57.f1);

        return (*l_179);
}







static int func_68(union U1 p_69, union U1 p_70, union U0 p_71, char * p_72, unsigned p_73)
{
    int **l_87 = (void*)0;
    int *l_89 = &g_82;
    int **l_88 = &l_89;
    char l_94 = 4L;
    unsigned short *l_95 = (void*)0;
    unsigned short *l_96 = &g_86.f0;
    short *l_97 = (void*)0;
    short *l_98 = &g_99;
    short l_106 = (-6L);
    char *l_146 = &g_13;
    char **l_145 = &l_146;
    char ***l_144 = &l_145;
    union U0 *l_170 = &g_86;
    union U0 **l_169 = &l_170;
    unsigned char *l_175 = (void*)0;
    unsigned char *l_176 = &g_86.f1;
    unsigned char *l_177 = &g_85.f0;
    (*l_88) = (void*)0;

    ;
    if ((((g_38 | ((*l_96) = (safe_rshift_func_uint16_t_u_s(p_71.f1, (p_69.f0 != (safe_rshift_func_uint8_t_u_u(p_71.f3, (l_94 != (*g_16))))))))) > 255UL) && ((*l_98) = g_7)))
    {
        int l_104 = 0xAF40839CL;
        int *l_107 = &l_104;
        (*l_107) = ((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((g_85.f0 == ((g_105 = (!l_104)) == g_13)), 9)), p_71.f0)) || l_106);
        (*l_107) = p_71.f1;
        return (*g_16);
    }
    else
    {
        int *l_108 = &g_7;
        char *l_111 = &l_94;
        char **l_112 = (void*)0;
        char **l_113 = (void*)0;
        char **l_114 = &l_111;
        char *l_116 = (void*)0;
        char **l_115 = &l_116;
        int l_128 = 0L;
        g_16 = l_108;
        (*l_88) = l_108;

        ;
        if ((safe_rshift_func_int16_t_s_u((p_72 == ((*l_115) = ((*l_114) = l_111))), (*l_108))))
        {
            char *l_117 = &l_94;
            unsigned char *l_120 = &g_85.f0;
            (*l_88) = func_9((g_105 < (l_117 == l_117)), (g_99 != p_71.f0), (safe_mod_func_uint8_t_u_u(((*l_120) = (*l_108)), (g_121 = ((*l_116) = g_82)))));
        }
        else
        {
            unsigned char l_149 = 0xDCL;
            int ***l_159 = &l_88;
            unsigned char *l_168 = &g_86.f1;
            for (g_85.f0 = (-8); (g_85.f0 <= 7); g_85.f0++)
            {
                g_82 = (safe_mul_func_uint16_t_u_u(0x550BL, (p_70.f0 == 0xEBD3L)));
                l_128 = (g_121 != ((**l_115) = (safe_rshift_func_int8_t_s_s(((0x718AF62FL == 9L) || 4294967295UL), 4))));
                if (p_71.f1)
                    continue;
            }
            l_128 = (g_105 < 1L);
            if ((safe_rshift_func_int16_t_s_s(p_71.f2, 13)))
            {
                char ***l_136 = &l_114;
                unsigned char *l_141 = &g_85.f0;
                unsigned *l_150 = &g_121;
                int *l_152 = &g_82;
                l_128 = (p_72 != p_72);
                (*l_152) = (safe_mod_func_uint8_t_u_u((((void*)0 != (*l_88)) < (safe_add_func_uint32_t_u_u((&l_111 != ((*l_136) = &p_72)), (safe_lshift_func_int16_t_s_s(((g_151 = ((*l_150) = (safe_lshift_func_uint16_t_u_u((g_38 && (((*l_141) = p_73) || (safe_lshift_func_int16_t_s_u(((void*)0 == l_144), 6)))), (safe_add_func_int16_t_s_s(p_69.f0, l_149)))))) || p_71.f1), 11))))), 0x70L));

                ;
            }
            else
            {
                return (*g_16);
            }

            ;
            g_131 = func_9(((safe_lshift_func_int16_t_s_s((g_151 | (safe_add_func_int8_t_s_s((*p_72), ((p_72 == &g_13) < (0x4D153B42L >= (p_71.f1 != (safe_add_func_int16_t_s_s(((*l_98) = (&l_89 != ((*l_159) = (void*)0))), (safe_mul_func_uint8_t_u_u(((*l_168) = (safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(g_85.f0, (*p_72))), 0x76L)), 2))), (*p_72))))))))))), g_105)) & 0UL), (*l_89), (*p_72));

            ;
            ;
        }

        ;
        ;
        ;
    }

    ;
    ;
    (*l_169) = &g_86;
    (*g_178) = ((1L < (g_151 = (0UL != ((safe_mul_func_uint8_t_u_u(((*l_177) = ((*l_176) = (safe_add_func_uint16_t_u_u(g_7, (g_13 > (p_71.f1 = 0x7DL)))))), (*l_89))) != (p_73 ^ g_7))))) <= g_7);

        return p_71.f1;
}







static union U1 func_75(short p_76, char * p_77, unsigned char p_78)
{
    int **l_79 = (void*)0;
    int **l_80 = (void*)0;
    int *l_81 = &g_82;
    int *l_83 = &g_82;
    int l_84 = (-1L);
    l_81 = &g_7;

    ;
    l_84 = ((*l_83) = 0x93E3674DL);
    return g_85;

    }





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_85.f0, "g_85.f0", print_hash_value);
    transparent_crc(g_86.f0, "g_86.f0", print_hash_value);
    transparent_crc(g_86.f1, "g_86.f1", print_hash_value);
    transparent_crc(g_86.f2, "g_86.f2", print_hash_value);
    transparent_crc(g_86.f3, "g_86.f3", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_314, "g_314", print_hash_value);
    transparent_crc(g_391, "g_391", print_hash_value);
    transparent_crc(g_432, "g_432", print_hash_value);
    transparent_crc(g_446.f0, "g_446.f0", print_hash_value);
    transparent_crc(g_446.f1, "g_446.f1", print_hash_value);
    transparent_crc(g_446.f2, "g_446.f2", print_hash_value);
    transparent_crc(g_446.f3, "g_446.f3", print_hash_value);
    transparent_crc(g_486, "g_486", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
