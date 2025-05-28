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
   int f0;
};


static int g_2 = 0x13ECA4F8L;
static union U0 g_25 = {0x6CC9CA31L};
static int g_78 = (-5L);
static int *g_77 = &g_78;
static unsigned g_116 = 4294967295UL;
static const int *g_121 = &g_2;
static const int **g_120 = &g_121;
static const int *** const g_119 = &g_120;
static int g_131 = (-4L);
static union U0 *g_138 = &g_25;
static union U0 **g_137 = &g_138;
static int **g_146 = &g_77;
static union U0 g_195 = {-7L};
static const int *g_252 = &g_131;
static int g_297 = 1L;
static unsigned g_385 = 4294967295UL;
static int *g_387 = &g_78;
static char g_526 = 0xBAL;
static int **g_537 = (void*)0;
static unsigned short g_549 = 9UL;



static int func_1(void);
static unsigned func_6(unsigned char p_7);
static int * func_9(int * p_10, unsigned char p_11, unsigned short p_12, int * p_13, union U0 p_14);
static int * func_15(union U0 p_16, const int p_17, int p_18);
static union U0 func_19(union U0 p_20, char p_21, int * p_22, int * p_23, int p_24);
static int * func_26(unsigned char p_27, int p_28);
static int * func_31(int p_32, int * p_33, unsigned p_34);
static int func_35(int ** p_36, int ** p_37);
static int ** func_38(int ** p_39, int ** p_40, int p_41, char p_42, int * const p_43);
static int ** func_44(unsigned p_45, short p_46, int p_47, int * p_48);
static int func_1(void)
{
    unsigned short l_8 = 65531UL;
    union U0 *l_555 = (void*)0;
    union U0 **l_554 = &l_555;
    int ***l_570 = &g_537;
    unsigned char l_585 = 0xE6L;
    const unsigned char l_586 = 0xACL;
    int *l_587 = &g_131;
    for (g_2 = (-27); (g_2 < (-27)); g_2 = safe_add_func_int32_t_s_s(g_2, 3))
    {
        unsigned char l_5 = 0xE9L;
        union U0 **l_556 = &l_555;
        int l_557 = 1L;
    }
    (*l_587) = (safe_rshift_func_uint8_t_u_u(g_25.f0, (safe_div_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(func_6((safe_rshift_func_int16_t_s_s(g_25.f0, ((((g_78 > ((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s(((g_116 >= ((safe_div_func_int16_t_s_s(g_297, (((*l_570) == (void*)0) ^ 0x09DDFBE4L))) || ((&g_120 != l_570) && (*g_252)))) <= g_549), 7)), g_116)) || g_195.f0)) & l_585) ^ (*g_77)) >= g_78)))), g_549)), l_586))));


    ;
    ;
    ;

    ;
    (*l_587) = 1L;
    return (*g_387);
}







static unsigned func_6(unsigned char p_7)
{
    int *l_358 = (void*)0;
    int l_359 = 5L;
    union U0 l_368 = {0xD4A61B79L};
    (*g_120) = func_9(func_15(func_19(g_25, g_25.f0, func_26(g_2, g_2), l_358, l_359), g_25.f0, p_7), g_25.f0, p_7, &l_359, l_368);

    ;
    ;
    ;
    ;

    ;
    if ((*g_252))
    {
        unsigned short l_543 = 0x9863L;
        union U0 ***l_548 = &g_137;
        (*g_387) = (safe_lshift_func_uint8_t_u_s((((((l_543 < (safe_rshift_func_int8_t_s_u(p_7, g_195.f0))) <= ((((((l_543 | 0xD54D44ADL) ^ p_7) <= g_116) == (((safe_div_func_int8_t_s_s(((void*)0 != l_548), p_7)) == p_7) || g_385)) < p_7) != 0UL)) >= g_297) < 0xC4L) & p_7), 4));
    }
    else
    {
        const int l_552 = (-1L);
        int *l_553 = &g_78;
        (*l_553) = (((9UL & g_549) || (l_552 | ((void*)0 == l_553))) == (*g_121));
        (*g_387) = 0x34D08003L;
    }
    return g_78;


}







static int * func_9(int * p_10, unsigned char p_11, unsigned short p_12, int * p_13, union U0 p_14)
{
    unsigned char l_369 = 0xBEL;
    int **l_370 = &g_77;
    short l_381 = 0xE073L;
    int *l_489 = &g_78;
    union U0 l_511 = {-3L};
    unsigned short l_518 = 0x906CL;
    int *l_521 = (void*)0;
    union U0 **l_539 = (void*)0;
    (*p_13) = l_369;
    if (func_35(func_38(l_370, &p_13, p_12, (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((((p_14.f0 >= g_195.f0) != ((safe_sub_func_int16_t_s_s(p_12, ((!p_12) > g_195.f0))) <= (safe_sub_func_uint8_t_u_u(p_14.f0, p_14.f0)))) | p_11) | l_381), p_14.f0)), 5)), 7)), p_10), l_370))
    {
        int *l_382 = &g_131;
        union U0 l_386 = {-4L};
        (*p_13) = (*p_13);
        if ((p_12 > 0x3DL))
        {
            l_382 = func_15(p_14, g_116, g_2);

            ;
            ;
            for (l_381 = 22; (l_381 > 14); l_381--)
            {
                (*g_120) = (void*)0;

                ;
            }

            ;
            (*p_10) = g_385;
        }
        else
        {
            unsigned char l_392 = 0UL;
            unsigned l_393 = 4294967295UL;
            p_10 = func_15(func_19(func_19(func_19(l_386, p_14.f0, g_387, p_13, (*g_387)), (safe_div_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(l_392, (*p_13))), l_393)), p_13, l_382, (*p_13)), p_12, (*l_370), (*l_370), (**l_370)), p_11, l_392);

            ;
            (*g_120) = (*l_370);


        }


        ;
    }
    else
    {
        const int *l_424 = &g_131;
        int **l_457 = &g_77;
        int **l_488 = &g_77;
        int l_495 = 6L;
        union U0 l_503 = {0x3FBEE5E2L};
        if ((*p_10))
        {
            union U0 ** const l_403 = &g_138;
            int l_409 = 0xEE6DEFC8L;
            int **l_419 = (void*)0;
            int *l_454 = &g_78;
            const int *l_471 = &g_131;
            if ((((**l_370) > (*g_77)) != func_35(&p_13, &g_77)))
            {
                int **l_404 = &g_387;
                union U0 l_435 = {-1L};
                unsigned short l_450 = 0x4559L;
                int *l_470 = &g_131;
                int *l_486 = &g_297;
                if ((*p_10))
                {
                    unsigned l_402 = 0x853E8925L;
                    (*g_387) = (safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((&g_137 == (void*)0), p_12)), l_402)), p_12));
                }
                else
                {
                    unsigned short l_423 = 0xD8FCL;
                    (*g_120) = (**g_119);
                    (*l_404) = func_31(((((4294967290UL & (l_403 != &g_138)) | func_35(l_404, &g_387)) > g_195.f0) >= l_409), p_13, g_195.f0);

                    ;
                    (*p_10) = (*g_387);
                    for (p_14.f0 = 0; (p_14.f0 <= (-2)); p_14.f0--)
                    {
                        int **l_420 = &g_77;
                        union U0 **l_432 = &g_138;
                        (**l_404) = (safe_unary_minus_func_uint32_t_u(func_35(&p_13, l_420)));
                        (**g_119) = p_13;

                        ;
                        l_424 = (**g_119);

                        ;
                        (*p_10) = ((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_int32_t_s((0xF5A9L ^ g_116))), (0L && (0L < ((((safe_lshift_func_uint8_t_u_u(p_11, ((*p_10) <= (~(**l_404))))) || 1L) <= (safe_rshift_func_uint16_t_u_u((l_432 != &g_138), 9))) | 1L))))) ^ (**l_370));
                    }

                    ;
                }

                ;
                ;
                if ((*p_10))
                {
                    unsigned char l_453 = 1UL;
                    for (p_11 = 0; (p_11 > 34); p_11 = safe_add_func_uint16_t_u_u(p_11, 7))
                    {
                        unsigned short l_440 = 0x919AL;
                        (*g_120) = func_15(l_435, g_78, (safe_sub_func_int32_t_s_s((((safe_add_func_uint8_t_u_u(247UL, l_440)) || (safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(0x87DDL, (safe_mod_func_int32_t_s_s(((**l_404) == ((((safe_lshift_func_uint16_t_u_s(g_195.f0, ((safe_unary_minus_func_int16_t_s((l_450 & (safe_mod_func_uint32_t_u_u(g_25.f0, (**l_370)))))) == 0x19L))) | g_2) | (*p_13)) || l_453)), 4294967293UL)))), 0x53L))) > 0xF82B645FL), l_440)));

                        ;
                    }

                    ;
                }
                else
                {
                    if ((**l_370))
                    {
                        return p_13;


                    }
                    else
                    {
                        (**l_404) = (g_297 <= (&l_403 == (void*)0));
                        (*g_387) = func_35(&g_387, &g_77);
                        return l_454;


                    }
                }

                ;
                if ((safe_div_func_uint8_t_u_u(7UL, (0x1AL | (((246UL | 8UL) && 0xE7F4L) < func_35(l_457, &p_10))))))
                {
                    char l_469 = 0xC3L;
                    int l_483 = 0L;
                    for (p_12 = 24; (p_12 >= 10); p_12 = safe_sub_func_uint32_t_u_u(p_12, 5))
                    {
                        char l_464 = 0x0CL;
                        (*l_370) = p_10;

                        ;
                        (*l_454) = func_35(&g_77, func_44(((((**l_404) > (0x3FBB26B3L & (1UL && ((((safe_rshift_func_int16_t_s_u(((safe_mod_func_uint16_t_u_u(l_464, g_78)) || (safe_lshift_func_int8_t_s_u((safe_div_func_int8_t_s_s(l_464, ((*g_252) ^ (&g_137 != (void*)0)))), l_464))), p_11)) || p_12) > g_385) >= g_297)))) & (*l_424)) != p_14.f0), g_78, l_469, l_470));
                        l_471 = (**g_119);

                        ;
                        (*g_387) = ((safe_rshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(1L, (**l_457))) == g_195.f0), ((((**l_370) > 0xC2BB62DFL) | g_2) & ((0xED2619A1L ^ 0xFAB7493EL) || (-1L))))) > (**l_457));
                    }


                    ;
                    for (g_78 = 4; (g_78 <= (-27)); g_78 = safe_sub_func_int32_t_s_s(g_78, 1))
                    {
                        int *l_482 = &g_131;
                        l_483 = (func_35(func_44((g_116 && func_35(&g_77, func_44(g_25.f0, (p_12 != (((safe_mod_func_int32_t_s_s((safe_div_func_uint16_t_u_u(g_131, 1L)), 0x43E8887CL)) >= ((&l_403 == &g_137) < 0x13B9E157L)) >= 0xADL)), p_14.f0, &g_297))), p_14.f0, g_78, l_482), &g_387) | g_78);
                        (*l_486) = ((!p_14.f0) != ((*l_457) == l_486));
                    }
                }
                else
                {
                    unsigned l_487 = 7UL;
                    (**g_119) = func_15(p_14, (**l_370), p_12);

                    ;
                    (*l_454) = l_487;
                    if ((***g_119))
                    {
                        (*p_13) = (*l_424);
                        (*g_387) = (**g_120);
                        (**g_119) = (**g_119);
                        (*p_10) = func_35(&g_77, func_44(((func_35(l_488, l_370) && (((*l_470) <= g_78) != l_487)) || g_195.f0), (**l_370), g_385, l_489));


                        ;
                    }
                    else
                    {
                        (*p_10) = func_35(&g_387, &g_387);

                        ;
                        (*l_454) = l_487;
                        (**g_119) = (*l_404);

                        ;
                    }


                    ;
                    (*l_457) = p_13;

                    ;
                }


                ;
                ;
            }
            else
            {
                int **l_492 = &l_489;
                (*l_370) = func_15(p_14, (p_11 < (g_131 >= 9L)), p_11);

                ;
                ;
                (*l_489) = func_35(l_492, l_492);

                ;
            }


            ;
            ;
            ;
            ;
        }
        else
        {
            unsigned l_504 = 5UL;
            for (g_195.f0 = 0; (g_195.f0 > 9); g_195.f0 = safe_add_func_uint8_t_u_u(g_195.f0, 8))
            {
                unsigned short l_502 = 65530UL;
            }
        }


        ;
        ;
        ;
        (*g_387) = (safe_lshift_func_int16_t_s_u(p_11, ((safe_lshift_func_int8_t_s_s((**l_370), 4)) == func_35(&g_77, l_488))));

        ;
    }



    ;
    ;
    (*p_10) = ((safe_rshift_func_uint16_t_u_u((l_518 | (0xFCC4AC04L >= (&p_13 == (void*)0))), p_14.f0)) | 0x65L);
    if ((safe_div_func_uint8_t_u_u(((*l_370) == (void*)0), g_195.f0)))
    {
        short l_538 = 0x1522L;
        union U0 ***l_540 = &l_539;
        (*p_10) = ((safe_lshift_func_int8_t_s_u(((p_12 <= g_526) | (safe_lshift_func_int16_t_s_u(((*p_13) < (safe_sub_func_int8_t_s_s(p_12, (((safe_mod_func_uint32_t_u_u(g_526, (safe_sub_func_uint32_t_u_u((2UL >= (safe_div_func_uint32_t_u_u(p_11, 0xCCC83805L))), (*p_10))))) ^ 0x7F1CFA99L) && l_538)))), 13))), 7)) >= (*p_10));
        (*l_540) = l_539;
    }
    else
    {
        (*l_370) = (*l_370);
    }
    return p_13;


}







static int * func_15(union U0 p_16, const int p_17, int p_18)
{
    int *l_364 = &g_297;
    (**g_119) = l_364;

    ;
    for (g_78 = 4; (g_78 < (-7)); --g_78)
    {
        int *l_367 = &g_131;
        return l_367;


    }
    return l_364;


}







static union U0 func_19(union U0 p_20, char p_21, int * p_22, int * p_23, int p_24)
{
    int *l_360 = (void*)0;
    int *l_361 = (void*)0;
    int *l_362 = &g_131;
    union U0 l_363 = {-5L};
    (*l_362) = (0x8AL == g_195.f0);
    return l_363;

    }







static int * func_26(unsigned char p_27, int p_28)
{
    int *l_30 = (void*)0;
    int **l_29 = &l_30;
    int **l_115 = &l_30;
    int *l_126 = &g_2;
    unsigned short l_182 = 0x0512L;
    char l_187 = 0L;
    int *l_229 = &g_78;
    short l_298 = 0xD79EL;
    unsigned l_332 = 0xFAF9D59AL;
    int *l_357 = &g_78;
lbl_210:
    (*l_29) = &p_28;

    ;
    (*l_115) = func_31(func_35(func_38(func_44((**l_29), (*l_30), g_25.f0, (*l_29)), l_115, g_116, g_2, (*l_29)), l_29), l_126, p_27);

    ;
    ;
    ;
    for (g_131 = 0; (g_131 != (-14)); --g_131)
    {
        int l_142 = 0x5A17A538L;
        int **l_144 = &g_77;
        int *l_149 = &g_131;
        int l_150 = 0xFC7B43BFL;
        int *l_176 = (void*)0;
        int *l_184 = &g_78;
        if (p_27)
        {
            int *l_143 = &l_142;
            int **l_145 = &l_30;
            (*l_143) = l_142;
            (*l_143) = func_35(l_144, l_145);
            g_146 = &l_143;

            ;
        }
        else
        {
            int l_173 = (-8L);
            int **l_181 = (void*)0;
            int *l_183 = &l_150;
            for (g_78 = (-26); (g_78 > 19); g_78 = safe_add_func_int16_t_s_s(g_78, 6))
            {
                union U0 * const *l_152 = &g_138;
                int l_174 = 0xBFE3AE0FL;
                int *l_175 = &l_142;
                (*g_146) = l_149;

                ;
                if (((void*)0 == &g_146))
                {
                    (*l_29) = (*l_29);
                    if ((*g_77))
                        continue;
                    (*g_146) = &p_28;

                    ;
                    (**l_144) = l_150;
                }
                else
                {
                    union U0 **l_153 = (void*)0;
                    int **l_161 = (void*)0;
                    if ((safe_unary_minus_func_int16_t_s((((l_152 == l_153) | p_28) || (safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((**l_144), 0)), (*g_77)))))))
                    {
                        int *l_158 = &l_142;
                        (*l_158) = 1L;
                        (**g_119) = &p_28;

                        ;
                        p_28 = func_35(&l_149, &l_158);

                        ;
                        (*g_120) = &p_28;

                        ;
                    }
                    else
                    {
                        if ((*g_77))
                            break;
                        (**g_119) = &p_28;

                        ;
                    }

                    ;
                    (*l_29) = &p_28;

                    ;
                    (**l_115) = 0x798753ECL;
                    p_28 = (1UL > (safe_div_func_int32_t_s_s(func_35(&l_30, &l_30), l_174)));

                    ;
                }

                ;
                ;
                return l_176;



            }

            ;
            (*l_183) = ((safe_rshift_func_int8_t_s_s((0UL == ((safe_mod_func_uint16_t_u_u((0x0CL ^ p_28), 0xA6E0L)) < 0x8726L)), g_2)) & g_78);
        }

        ;

        return l_184;



    }
    if (((g_78 >= func_35(&l_30, &g_77)) | l_187))
    {
        int **l_191 = &g_77;
        unsigned short l_222 = 0x5EB0L;
        char l_274 = (-9L);
        union U0 ***l_296 = &g_137;
        unsigned l_317 = 0x5DCA3CA6L;
        if (p_27)
        {
            int *l_192 = &g_131;
            for (p_28 = (-10); (p_28 == (-18)); --p_28)
            {
                union U0 *l_190 = &g_25;
                (**l_29) = (!((void*)0 != l_190));
            }
            (*l_115) = func_31((g_131 < func_35(l_191, &g_77)), (*l_191), p_28);
            return l_192;



        }
        else
        {
            int **l_193 = &l_126;
            union U0 *l_205 = &g_195;
            const int *l_324 = &g_78;
            if (func_35(l_193, &g_77))
            {
                (**l_29) = (**l_191);
                (*g_120) = func_31((**l_193), (*g_146), g_78);

                ;
            }
            else
            {
                union U0 *l_194 = &g_195;
                int **l_198 = &l_30;
                unsigned char l_203 = 3UL;
                if ((**g_146))
                {
                    (**l_29) = 0x73D79CAFL;
                }
                else
                {
                    (*g_137) = (void*)0;

                    ;
                    (*l_115) = &p_28;

                    ;
                    l_194 = (*g_137);

                    ;
                    (*g_120) = (**g_119);
                }

                ;
                ;
                if ((**l_193))
                {
                    p_28 = (**l_193);
                }
                else
                {
                    unsigned l_204 = 0xC89F62BFL;
                    (*l_193) = &p_28;

                    ;
                    if (((((((p_27 < 0x0CL) < func_35(&g_77, l_198)) & ((p_27 != (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u((**l_193), 7)), (l_203 & (**l_115))))) > 255UL)) > p_28) != (**l_193)) <= 0x52L))
                    {
                        (**l_198) = (**g_146);
                    }
                    else
                    {
                        (**g_119) = &p_28;

                        ;
                        (**l_193) = ((l_204 > (((g_78 == p_27) <= 0xA9L) <= ((0x47C546E7L < ((((((((void*)0 == l_205) < (p_28 <= (p_28 >= g_195.f0))) >= g_131) < 2UL) || 0x2574CFE0L) && p_28) != 252UL)) > g_131))) ^ g_195.f0);
                    }

                    ;
                    if ((safe_add_func_uint32_t_u_u(p_27, ((safe_sub_func_uint16_t_u_u((g_116 != 0UL), g_25.f0)) && g_25.f0))))
                    {
                        (**l_198) = p_27;
                        (**g_119) = (*g_120);
                    }
                    else
                    {
                        (**l_29) = p_27;
                        if (g_78)
                            goto lbl_210;
                    }
                }

                ;
                for (p_28 = 0; (p_28 >= 18); p_28 = safe_add_func_int8_t_s_s(p_28, 4))
                {
                    unsigned short l_219 = 0x01E1L;
                    int **l_226 = (void*)0;
                    for (l_203 = 0; (l_203 == 13); l_203++)
                    {
                        unsigned char l_225 = 0xE7L;
                        (*l_198) = (void*)0;

                        ;
                        l_225 = (safe_rshift_func_uint8_t_u_s((((g_2 > (8L == l_219)) & ((((safe_mod_func_int32_t_s_s((l_222 ^ p_28), (((safe_div_func_int16_t_s_s((!(-8L)), g_116)) & (g_78 != g_116)) ^ p_28))) && p_27) == (**l_191)) > p_27)) || g_195.f0), l_219));
                    }
                    if ((0x904CL || (p_28 <= p_28)))
                    {
                        char l_227 = 0x4BL;
                        if (l_227)
                            break;
                    }
                    else
                    {
                        union U0 **l_228 = &g_138;
                        l_205 = (void*)0;

                        ;
                        g_137 = l_228;
                        if (p_27)
                            continue;
                        (*l_115) = l_229;

                        ;
                    }
                    (*g_137) = (void*)0;

                    ;
                }

                ;
                ;
                for (l_187 = (-29); (l_187 == 16); l_187++)
                {
                    (*g_146) = (*l_29);

                    ;
                }

                ;
            }

            ;
            ;
            ;
            ;
            if ((safe_add_func_int8_t_s_s(g_116, (safe_unary_minus_func_int16_t_s((**l_193))))))
            {
                unsigned l_262 = 4294967288UL;
                (*l_229) = ((((**l_193) ^ g_78) & g_2) | (safe_rshift_func_int8_t_s_s(p_28, (~4L))));
                (*g_120) = (*g_120);
                for (g_116 = 6; (g_116 >= 42); g_116++)
                {
                    int l_239 = 2L;
                    int l_275 = 0x45ED7D17L;
                    if (((p_28 <= (**l_193)) & ((l_239 > p_28) != (l_239 >= g_131))))
                    {
                        (*l_29) = (*l_29);
                        (*g_146) = func_31((safe_lshift_func_int16_t_s_u(0xD755L, (safe_add_func_uint32_t_u_u(g_195.f0, (safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((p_28 > 0x279B5F31L), (safe_rshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(g_2, (1L & ((1UL > p_28) <= ((void*)0 != g_252))))), 2)))), p_28)))))), (*g_146), g_78);

                        ;
                        if (p_27)
                            break;
                    }
                    else
                    {
                        int l_265 = 0xBD95422EL;
                        l_275 = (g_2 > (safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((p_27 || ((safe_unary_minus_func_uint32_t_u(0x2D80CD15L)) ^ (((safe_lshift_func_int8_t_s_u(((safe_div_func_int32_t_s_s(((((l_262 != (((safe_div_func_int32_t_s_s(l_265, (safe_lshift_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((g_131 == ((safe_rshift_func_uint8_t_u_s((&l_193 == (void*)0), (0L & (-2L)))) == 0x83L)), p_28)) <= 0L), (**l_193))))) == 0x31L) <= 0x9DL)) & p_27) < p_27) ^ (**l_193)), l_274)) == 0x1BL), 3)) < p_27) != 0x6245C753L))), 3)), 0x333C25ECL)));
                        p_28 = ((safe_rshift_func_int16_t_s_u(0x5FC6L, 15)) || (0x92C262D5L < p_27));
                    }
                    (*l_193) = func_31((((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(0x8243B38CL, ((safe_lshift_func_uint8_t_u_u(4UL, (p_28 < (**l_193)))) & (safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u((+g_116), 4L)), 0x47D6L))))), (safe_rshift_func_uint8_t_u_s(((((safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((0x3A1AL || ((void*)0 != l_296)) <= l_239), g_78)), p_28)) || l_239) | p_27) == p_28), p_27)))), l_275)) > p_27) ^ g_297), (*g_146), l_262);

                    ;
                    if (l_298)
                        break;
                }

                ;
            }
            else
            {
                (**g_119) = func_31(p_28, (*g_146), ((safe_sub_func_uint8_t_u_u(p_28, g_78)) || (safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(0xA6630A5CL, (p_28 && p_27))), 4))));

                ;
            }

            ;
            (*l_296) = (void*)0;

            ;
            if ((safe_div_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(g_25.f0, (safe_mod_func_uint32_t_u_u(((safe_add_func_int32_t_s_s((-7L), func_35(&l_126, l_193))) != (g_131 == ((void*)0 == &g_146))), p_27)))), p_27)) > (**l_193)), 247UL)))
            {
                (*g_120) = func_31((*g_252), (*l_29), (((-1L) & (safe_mod_func_int8_t_s_s(l_317, (safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u((*l_229), (((safe_div_func_int16_t_s_s((g_195.f0 != (**l_193)), 0xBF0AL)) >= p_28) | g_195.f0))), 0L))))) != p_27));

                ;
            }
            else
            {
                char l_325 = (-10L);
                (**g_119) = l_324;

                ;
                (*l_193) = func_31(p_28, func_31(l_325, &p_28, g_297), (((safe_rshift_func_uint16_t_u_u(((safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((((4294967294UL <= p_27) ^ (g_297 | g_116)) > 0x3FEB27B6L), g_297)), g_25.f0)) <= l_332), g_2)) | p_27) && 0xE25D2D7BL));

                ;
                (**g_119) = (**g_119);
            }

            ;
        }

        ;
        ;
        ;
        ;
        ;
    }
    else
    {
        int * const l_342 = &g_78;
        if ((safe_rshift_func_int8_t_s_u((-2L), 7)))
        {
            int *l_339 = &g_78;
            union U0 * const l_356 = (void*)0;
            for (g_297 = (-14); (g_297 != 3); ++g_297)
            {
                union U0 *l_344 = &g_25;
                int l_353 = 0L;
                if (p_27)
                    break;
                for (p_28 = 24; (p_28 < 21); p_28--)
                {
                    (*g_137) = (*g_137);
                }
                if ((*g_252))
                {
                    (*l_115) = l_339;

                    ;
                    (**l_115) = (-8L);
                    (*l_339) = (-1L);
                    (*l_29) = &p_28;

                    ;
                }
                else
                {
                    int **l_352 = &g_77;
                    if (p_28)
                        break;
                    (**g_119) = (void*)0;

                    ;
                    for (g_131 = 0; (g_131 != 5); g_131 = safe_add_func_int32_t_s_s(g_131, 5))
                    {
                        int **l_343 = &l_30;
                        (*l_343) = l_342;

                        ;
                        (*g_137) = l_344;

                        ;
                    }
                    (*g_120) = func_31(((!(safe_mod_func_int8_t_s_s((&g_137 != (void*)0), g_2))) && ((safe_unary_minus_func_uint16_t_u(((g_297 & (safe_div_func_int32_t_s_s(func_35(&l_339, l_352), p_27))) != 0L))) || g_195.f0)), &l_353, (*l_339));

                    ;
                }
                (*l_342) = (safe_sub_func_int8_t_s_s(g_195.f0, ((*g_137) != l_356)));
            }

            ;
            ;
        }
        else
        {
            (*l_29) = &p_28;

            ;
        }

        ;
        ;
    }

    ;
    ;
    ;
    ;
    ;
    return l_357;



}







static int * func_31(int p_32, int * p_33, unsigned p_34)
{
    int *l_127 = &g_78;
    (*l_127) = 0x52A6FDD6L;
    for (g_78 = 0; (g_78 == 0); ++g_78)
    {
        int *l_130 = &g_131;
        const union U0 *l_135 = &g_25;
        const union U0 **l_134 = &l_135;
        union U0 **l_136 = (void*)0;
        (*l_130) = (-7L);
        (*l_130) = (g_2 | ((safe_add_func_uint32_t_u_u((!(l_134 != l_136)), 4294967295UL)) != 0xE5L));
    }
    (*g_120) = (*g_120);
    if ((*l_127))
    {
        return &g_78;


    }
    else
    {
        union U0 ***l_139 = &g_137;
        (*l_139) = g_137;
    }
    return &g_131;


}







static int func_35(int ** p_36, int ** p_37)
{
    int *l_123 = &g_78;
    (*g_120) = l_123;

    ;
    for (g_116 = 0; (g_116 > 13); ++g_116)
    {
        (*g_120) = (void*)0;

        ;
        return (**p_36);
    }
    return (**p_37);
}







static int ** func_38(int ** p_39, int ** p_40, int p_41, char p_42, int * const p_43)
{
    int *l_122 = &g_78;
    (*p_39) = &g_2;


    for (p_42 = 26; (p_42 != 27); p_42 = safe_add_func_int32_t_s_s(p_42, 9))
    {
        (**p_40) = (g_119 == (void*)0);
        (*p_39) = (*p_40);
        (*p_43) = (**p_40);
    }


    (*p_40) = l_122;


    return &g_77;


}







static int ** func_44(unsigned p_45, short p_46, int p_47, int * p_48)
{
    int *l_57 = (void*)0;
    union U0 *l_71 = &g_25;
    int **l_114 = &l_57;
    if ((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((p_45 <= (p_47 >= p_46)), 2)), (&p_48 != (void*)0))))
    {
        union U0 *l_54 = (void*)0;
        union U0 **l_53 = &l_54;
        char l_67 = (-2L);
        int **l_73 = &l_57;
        (*l_53) = &g_25;

        ;
        for (p_47 = 0; (p_47 < 23); p_47++)
        {
            const int l_62 = 0L;
            l_57 = &g_2;

            ;
            if ((*p_48))
                continue;
            for (p_46 = 22; (p_46 == 15); p_46 = safe_sub_func_uint16_t_u_u(p_46, 7))
            {
                unsigned l_68 = 7UL;
                unsigned l_72 = 4294967295UL;
                l_72 = (safe_lshift_func_uint16_t_u_u(p_47, (!(l_62 | (safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((l_67 >= (l_68 > g_2)), 0)), (safe_sub_func_uint32_t_u_u(0xD1AD702CL, (((void*)0 != l_71) != p_46)))))))));
            }
            if (g_25.f0)
                break;
        }

        ;
        (*p_48) = 0x40190438L;
        (*l_73) = &g_2;

        ;
    }
    else
    {
        unsigned l_74 = 0UL;
        int *l_111 = (void*)0;
        (*p_48) = l_74;
        (*p_48) = (4294967295UL ^ (-1L));
        (*p_48) = g_2;
        for (p_46 = 0; (p_46 != (-6)); --p_46)
        {
            int **l_113 = &g_77;
            g_77 = p_48;


        }
    }

    ;
    (*l_114) = &g_2;

    ;
    return &g_77;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_25.f0, "g_25.f0", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_195.f0, "g_195.f0", print_hash_value);
    transparent_crc(g_297, "g_297", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    transparent_crc(g_526, "g_526", print_hash_value);
    transparent_crc(g_549, "g_549", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
