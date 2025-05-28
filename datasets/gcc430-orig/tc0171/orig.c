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


struct S0 {
   unsigned f0;
   const unsigned f1;
   char f2;
   unsigned short f3;
   volatile int f4;
};


static const char g_8 = (-1L);
static struct S0 g_14 = {0UL,0x9822CB3AL,0L,0xB03EL,-8L};
static struct S0 g_59 = {0xE618B257L,0x953C5357L,0x8AL,1UL,9L};
static struct S0 *g_58 = &g_59;
static int g_62 = 1L;
static struct S0 g_79 = {0xEB874B34L,0xCD0122BFL,8L,65533UL,0x0BBFFD32L};
static int g_88 = (-1L);
static int *g_87 = &g_88;
static struct S0 **g_129 = (void*)0;
static struct S0 *** const g_128 = &g_129;
static unsigned g_142 = 0x3F616C20L;
static struct S0 g_152 = {0x62BBFFE0L,4294967295UL,0L,65535UL,1L};
static volatile struct S0 g_176 = {4294967288UL,0x87BA435BL,0xE9L,0xB575L,-4L};
static const int *g_192 = &g_88;
static volatile struct S0 g_225 = {4294967293UL,1UL,0x4AL,65535UL,-5L};
static struct S0 g_284 = {0x33187DDEL,1UL,0xE5L,1UL,0L};
static struct S0 g_339 = {4294967295UL,1UL,0xBCL,0x3731L,0x3DA37591L};
static unsigned char g_344 = 0xAFL;
static struct S0 * const g_359 = &g_59;
static struct S0 g_363 = {1UL,0x24DD085FL,0xC1L,0xE4FFL,0x9D0B9917L};
static struct S0 g_413 = {0xBE55BCE8L,0x328C6143L,0x1AL,0xB16CL,0xA96945D6L};



static short func_1(void);
static struct S0 * const func_2(int p_3, struct S0 * p_4);
static unsigned func_11(struct S0 * p_12);
static unsigned short func_18(unsigned short p_19, struct S0 * p_20, int p_21);
static struct S0 func_25(unsigned p_26);
static int func_28(struct S0 * p_29, struct S0 * p_30, struct S0 * p_31, const struct S0 * p_32);
static struct S0 * func_34(unsigned char p_35);
static unsigned short func_38(struct S0 * const p_39);
static int func_41(int p_42, struct S0 * p_43, struct S0 * p_44, int p_45);
static char func_49(struct S0 * p_50, int p_51, struct S0 * p_52);
static short func_1(void)
{
    unsigned short l_5 = 65534UL;
    struct S0 *l_13 = &g_14;
    struct S0 *l_22 = &g_14;
    struct S0 *l_24 = (void*)0;
    struct S0 **l_360 = &l_22;
    int *l_361 = &g_88;
    int **l_362 = &g_87;
    int l_391 = 0x5B9A4AEDL;
    const unsigned l_395 = 1UL;
    unsigned short l_411 = 0UL;
    struct S0 *l_434 = &g_284;
    int l_441 = 0xA4BC5AE5L;
    (*l_360) = func_2((l_5 , (safe_sub_func_uint32_t_u_u(g_8, ((safe_sub_func_int32_t_s_s(g_8, func_11(l_13))) > (safe_add_func_uint16_t_u_u(func_18((func_11(l_22) , (((safe_unary_minus_func_uint16_t_u(0x5378L)) , g_14.f1) , g_14.f1)), l_24, g_14.f3), 0x3FD5L)))))), &g_14);

    ;
    ;
    (*l_362) = l_361;

    ;
    if ((**l_362))
    {
        (*l_360) = (void*)0;

        ;
    }
    else
    {
        struct S0 *l_368 = &g_284;
        struct S0 *l_369 = &g_152;
        int l_374 = (-2L);
        int l_381 = 0x3AA53892L;
        struct S0 **l_382 = &l_22;
        g_87 = &g_62;

        ;
        (*l_360) = (g_363 , (func_41(((safe_add_func_uint8_t_u_u((*l_361), ((void*)0 != &g_88))) == (safe_sub_func_int16_t_s_s(6L, (**l_362)))), l_368, l_369, (*l_361)) , l_369));

        ;
        l_374 = (((safe_rshift_func_int16_t_s_s((((void*)0 != &g_88) < ((safe_mul_func_int16_t_s_s(func_18(l_374, func_34((0xEAL | (safe_lshift_func_int16_t_s_s(g_176.f4, (safe_sub_func_int8_t_s_s((((safe_sub_func_int8_t_s_s((((g_339.f2 & l_374) && (**l_362)) <= (((l_374 && (*l_361)) > 3UL) , g_152.f3)), 255UL)) || 8UL) || 0x1E6000DCL), 0UL)))))), (*g_192)), l_381)) > g_79.f1)), 6)) > g_152.f2) >= l_381);

        ;
        (*l_382) = func_2(((*g_192) & l_381), (*l_360));

        ;
    }

    ;
    for (l_5 = 21; (l_5 != 9); l_5 = safe_sub_func_uint8_t_u_u(l_5, 9))
    {
        int l_394 = 0x5A64897BL;
        struct S0 *l_397 = (void*)0;
        (*l_362) = (*l_362);
        if ((((safe_add_func_int16_t_s_s((((((g_176.f3 && (((safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u(0UL, (*g_192))), l_391)) == ((((0xA742DC93L < (g_79.f4 != ((*g_192) != (safe_rshift_func_int16_t_s_s(0x766AL, (((void*)0 == (*l_362)) | g_344)))))) && g_152.f4) <= 3L) | (*g_192))) <= l_394)) ^ (*g_192)) > l_394) != g_8) || (*g_192)), g_14.f1)) , l_395) , l_394))
        {
            struct S0 *l_396 = (void*)0;
            (*l_362) = &g_62;

            ;
            (*l_361) = func_28(&g_152, l_396, l_397, l_396);
        }
        else
        {
            const short l_407 = 0x94A6L;
            unsigned short l_414 = 0xC574L;
            const char l_415 = 0x22L;
            struct S0 *l_416 = &g_413;
            struct S0 *l_439 = &g_363;
            unsigned l_440 = 0x699B600AL;
            for (g_142 = 11; (g_142 > 12); ++g_142)
            {
                char l_404 = 0xCAL;
                for (g_284.f3 = 0; (g_284.f3 <= 48); g_284.f3 = safe_add_func_int16_t_s_s(g_284.f3, 8))
                {
                    (*l_362) = &g_62;

                    ;
                    if ((*g_87))
                        continue;
                }
                (*l_361) = ((*l_361) && g_284.f2);
                for (l_391 = 0; (l_391 <= (-11)); l_391 = safe_sub_func_uint8_t_u_u(l_391, 4))
                {
                    return g_225.f0;
                }
                if (l_404)
                    break;
            }
            if ((safe_rshift_func_uint8_t_u_u(l_407, g_225.f3)))
            {
                short l_410 = 0x9CB4L;
                struct S0 *l_412 = &g_413;
                g_88 = ((~((func_11(l_397) >= ((((func_18((safe_mul_func_uint16_t_u_u(l_410, (func_18((l_394 | ((l_407 , l_411) != l_394)), func_34(g_284.f2), (*g_192)) || 4UL))), l_412, l_414) & 8L) , l_415) <= l_410) , 0xE2386218L)) < 8UL)) > l_394);
                (*l_360) = l_416;

                ;
            }
            else
            {
                short l_429 = 0x8F9EL;
                (*l_361) = 1L;
                for (g_152.f3 = 0; (g_152.f3 == 42); g_152.f3++)
                {
                    unsigned l_421 = 1UL;
                    int * const *l_428 = &l_361;
                    (*l_362) = (*l_362);
                    (*l_361) = (safe_add_func_int16_t_s_s((g_284.f4 && l_421), ((safe_unary_minus_func_uint16_t_u(l_394)) == ((safe_unary_minus_func_uint16_t_u((safe_mod_func_uint8_t_u_u(g_79.f0, ((((safe_lshift_func_uint8_t_u_s(((l_428 == &g_192) , ((l_394 != g_79.f3) , (((l_414 & l_429) , g_363.f0) ^ 1UL))), 0)) == 0x1DL) | 3UL) , g_59.f2))))) && 0UL))));
                    for (g_152.f2 = 0; (g_152.f2 <= (-4)); g_152.f2--)
                    {
                        (**l_428) = (safe_mod_func_uint16_t_u_u(((**l_428) >= l_407), 1L));
                    }
                    (**l_428) = ((((0x17L > 251UL) != (0L || func_28(l_439, &g_152, l_397, (*l_360)))) | l_394) <= g_152.f0);
                }
                (*l_361) = l_440;
            }
            if ((*g_192))
                break;
            (*l_361) = ((l_441 || (g_363.f2 && g_413.f1)) | (safe_lshift_func_uint8_t_u_s(((*l_360) == (void*)0), 4)));
        }
        (*l_361) = (g_152.f3 & g_284.f4);
        (*l_361) = (*g_192);
    }

    ;
    return (*l_361);
}







static struct S0 * const func_2(int p_3, struct S0 * p_4)
{
    char l_27 = 1L;
    struct S0 *l_33 = &g_14;
    int l_327 = 0x3D2D1E40L;
    if ((func_25((l_27 == g_14.f0)) , (((func_28(l_33, p_4, func_34(l_27), p_4) , p_4) != (void*)0) & 0x08C1L)))
    {
        unsigned l_258 = 0x3D9BBB44L;
        struct S0 *l_274 = &g_59;
        struct S0 *l_276 = &g_14;
        struct S0 ***l_328 = &g_129;
        int *l_353 = &g_88;
        int l_356 = 0xCB2BD809L;
        volatile struct S0 *l_357 = (void*)0;
        for (g_59.f0 = (-4); (g_59.f0 == 37); ++g_59.f0)
        {
            int *l_253 = &g_88;
            struct S0 *l_259 = &g_152;
            int l_275 = (-4L);
            struct S0 *l_279 = (void*)0;
            (*l_253) = p_3;
            for (g_62 = 0; (g_62 > (-22)); g_62 = safe_sub_func_uint16_t_u_u(g_62, 8))
            {
                int *l_256 = (void*)0;
                int **l_257 = &l_256;
                short l_299 = (-1L);
                struct S0 *l_311 = (void*)0;
                struct S0 ***l_321 = &g_129;
                (*l_257) = l_256;
                if ((*l_253))
                {
                    unsigned l_291 = 0xCCFE6552L;
                    int *l_313 = &g_88;
                    struct S0 * const l_314 = &g_59;
                    if (l_258)
                    {
                        (*l_257) = (func_18(g_88, l_259, p_3) , &g_88);

                        ;
                    }
                    else
                    {
                        (*l_257) = ((!(safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((*l_253), 4)), (safe_mod_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((((g_152.f3 && func_49(p_4, ((((((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(2L, 9)), p_3)) && (safe_add_func_uint32_t_u_u(7UL, p_3))) , func_18(l_258, l_274, l_275)) && (*l_253)) , 0x091C2582L) , 0xFA6D9B26L), l_276)) ^ 4294967288UL) , g_14.f0), g_62)) ^ 0x2618D2DFL), l_258))))) , l_253);

                        ;
                        (*l_253) = l_258;
                    }

                    ;
                    if ((((l_258 , (func_25((((safe_lshift_func_int16_t_s_u((l_279 == (void*)0), g_14.f2)) == (*l_256)) || func_11(func_34(g_225.f3)))) , p_3)) & g_14.f2) | l_258))
                    {
                        unsigned l_292 = 3UL;
                        (**l_257) = 0x838B50A3L;
                        (*l_257) = &g_62;

                        ;
                        (*l_253) = (p_3 | ((((safe_rshift_func_uint16_t_u_s(l_27, 12)) < ((safe_lshift_func_int8_t_s_u(((g_284 , 0x5CF0B89FL) , ((((safe_rshift_func_int8_t_s_u(0x6AL, (!(safe_mul_func_int16_t_s_s(((*l_253) > ((*l_253) , (safe_mod_func_uint8_t_u_u((l_291 && func_49(p_4, g_225.f2, p_4)), 0x47L)))), (*l_253)))))) ^ g_88) | (*l_256)) >= 0x5AL)), p_3)) && (**l_257))) == l_292) , 255UL));
                        (*l_257) = (void*)0;

                        ;
                    }
                    else
                    {
                        g_87 = (void*)0;

                        ;
                        (*l_253) = 0x04311967L;
                        (*l_257) = l_253;
                    }

                    ;
                    if (func_49(func_34((*l_253)), (+((((g_14.f3 , g_59.f1) != ((safe_mod_func_int32_t_s_s(((g_59.f3 > func_49(l_259, (((*l_253) < p_3) , (((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(l_258, g_142)), 1L)) | p_3) , 0x4E5F2710L)), p_4)) != g_79.f2), p_3)) , g_62)) , p_3) , (-8L))), l_276))
                    {
                        l_299 = (-9L);
                    }
                    else
                    {
                        struct S0 *l_308 = &g_284;
                        int l_312 = (-1L);
                        (*l_253) = (safe_add_func_uint8_t_u_u(l_258, (((0UL > (l_27 ^ func_49(l_33, (safe_sub_func_int32_t_s_s(((-5L) > (safe_rshift_func_uint16_t_u_s(g_14.f2, 15))), (safe_rshift_func_int8_t_s_s(func_49(l_308, ((safe_mod_func_int32_t_s_s(func_49(l_279, p_3, l_311), l_27)) == g_59.f0), p_4), 3)))), p_4))) && l_312) >= 0xC8B54D95L)));
                        (*l_257) = &g_62;

                        ;
                        (*l_257) = l_313;

                        ;
                        return l_314;


                    }
                }
                else
                {
                    int l_340 = 0x0E6D607DL;
                    int l_341 = 0x7768B857L;
                    (*l_257) = &g_62;

                    ;
                    if ((safe_mod_func_uint8_t_u_u(((+1L) , func_18((safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((&g_129 != l_321), (**l_257))), 0)), l_259, (safe_unary_minus_func_uint16_t_u(((safe_lshift_func_uint16_t_u_u(((void*)0 == &g_192), 0)) , (safe_lshift_func_uint8_t_u_s((0x55L > ((g_152.f3 <= 5UL) ^ 6UL)), 5))))))), 0x3BL)))
                    {
                        short l_331 = 0x8858L;
                        struct S0 ** const l_334 = (void*)0;
                        (*l_253) = (*l_253);
                        l_327 = 0x6EB08FFFL;
                        l_341 = (((l_321 == l_328) & g_59.f3) != (((((((safe_mul_func_int16_t_s_s((l_331 <= ((p_3 , (((safe_sub_func_uint16_t_u_u((+((((void*)0 != l_334) & (safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(((g_339 , (~0xBB63L)) < g_152.f0), 1UL)), (**l_257)))) > l_331)), p_3)) , l_340) >= g_339.f2)) != p_3)), (*l_256))) , 255UL) != 0L) > g_79.f0) > l_331) > p_3) < 4L));
                        l_341 = (l_258 < (0x14L || (safe_mul_func_int8_t_s_s(p_3, g_344))));
                    }
                    else
                    {
                        unsigned char l_349 = 9UL;
                        struct S0 **l_352 = &l_259;
                        (*l_253) = (0xFDB9L < (safe_mod_func_uint32_t_u_u(((((safe_rshift_func_int8_t_s_u((func_18(l_349, func_34((*l_253)), (((l_349 , ((g_284.f0 && ((safe_mod_func_int32_t_s_s((1UL < (((((*l_253) & l_349) != 0x15F1L) > 3UL) , 4294967291UL)), 0xBB9B26A0L)) < 0x42D8C5CEL)) && l_340)) & p_3) , (*g_192))) , p_3), 5)) || p_3) | p_3) || p_3), 7UL)));
                        (*l_352) = p_4;
                        l_353 = &g_88;
                    }
                }

                ;
            }

            ;
            g_88 = p_3;
        }
        (*l_353) = ((*p_4) , (safe_add_func_int16_t_s_s(((((l_328 != l_328) & ((g_339.f4 <= (((l_328 == ((+(-6L)) , (void*)0)) != 0xFAFDL) & g_284.f3)) < 0x0C9EC693L)) | l_356) > p_3), l_327)));
        l_274 = func_34(g_339.f3);

        ;
        l_357 = &g_176;

        ;
    }
    else
    {
        struct S0 * const l_358 = (void*)0;
        return l_358;


    }
    return g_359;


}







static unsigned func_11(struct S0 * p_12)
{
    int l_15 = 0x56E348CCL;
    return l_15;
}







static unsigned short func_18(unsigned short p_19, struct S0 * p_20, int p_21)
{
    p_21 = 0x5DEA311CL;
    return g_14.f1;
}







static struct S0 func_25(unsigned p_26)
{
    return g_14;
}







static int func_28(struct S0 * p_29, struct S0 * p_30, struct S0 * p_31, const struct S0 * p_32)
{
    int * const *l_205 = &g_87;
    struct S0 *** const l_208 = &g_129;
    int *l_217 = &g_88;
    int l_232 = 0x52F388FDL;
    struct S0 *l_233 = &g_152;
    unsigned char l_250 = 0x5CL;
    for (g_14.f3 = 23; (g_14.f3 < 39); ++g_14.f3)
    {
        struct S0 *l_209 = (void*)0;
        int l_212 = 0L;
        int *l_213 = &g_88;
        int **l_214 = (void*)0;
        int **l_215 = (void*)0;
        int **l_216 = &l_213;
        (*l_213) = (((safe_sub_func_uint32_t_u_u(0UL, (l_205 == &g_87))) <= ((safe_sub_func_int16_t_s_s((-1L), ((void*)0 == &g_62))) > (l_208 != ((l_209 != (((((g_14.f1 > 4294967286UL) > l_212) & (-5L)) <= 4294967290UL) , &g_79)) , (void*)0)))) >= l_212);
        (*l_216) = &l_212;

        ;
        (*l_216) = &g_62;

        ;
        (*l_213) = 0x4EFD27CBL;
    }
    (*l_217) = 0L;
lbl_236:
    for (g_14.f3 = (-18); (g_14.f3 <= 3); g_14.f3++)
    {
        int *l_220 = &g_62;
        int **l_221 = &l_217;
        struct S0 *** const l_222 = (void*)0;
        (*l_221) = l_220;

        ;
        (**l_221) = ((((((void*)0 != l_222) ^ (safe_mod_func_uint16_t_u_u(((g_225 , (~0x70F1L)) | ((0x2522L ^ ((safe_rshift_func_uint8_t_u_s(g_14.f0, (9L <= (safe_lshift_func_int16_t_s_u((*l_220), 12))))) < ((!((safe_mul_func_int16_t_s_s((-3L), g_79.f1)) > 0xFCL)) , (*l_217)))) && g_79.f0)), (*l_217)))) != 1L) , (*l_217)) != g_14.f2);
    }
    if ((+(*l_217)))
    {
        if (g_79.f0)
            goto lbl_236;
    }
    else
    {
        const short l_241 = 1L;
        struct S0 *l_242 = &g_59;
        int *l_249 = (void*)0;
        (*l_217) = (((safe_sub_func_uint16_t_u_u((0xA971L || g_152.f2), (safe_sub_func_int8_t_s_s(l_241, (8UL && ((~((l_242 != (void*)0) | (*l_217))) , ((safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(l_241, (((safe_add_func_uint32_t_u_u(((void*)0 == l_208), g_176.f4)) == g_8) >= (*g_192)))), l_241)) && l_241))))))) || g_79.f4) <= l_241);
        l_217 = l_249;

        ;
    }

    ;
    return l_250;
}







static struct S0 * func_34(unsigned char p_35)
{
    struct S0 * const l_40 = (void*)0;
    struct S0 *l_151 = &g_152;
    int l_154 = (-10L);
    for (g_14.f0 = 0; (g_14.f0 <= 21); g_14.f0 = safe_add_func_uint8_t_u_u(g_14.f0, 1))
    {
        unsigned l_153 = 0x87DE450CL;
        int l_170 = 0x4F28CA52L;
        struct S0 *l_175 = &g_79;
    }
    for (g_152.f3 = 0; (g_152.f3 > 49); ++g_152.f3)
    {
        int *l_199 = (void*)0;
        int **l_200 = &g_87;
        (*l_200) = l_199;

        ;
        l_154 = ((p_35 , (g_8 > 0x273EL)) || g_176.f0);
        return l_151;


    }
    return l_151;


}







static unsigned short func_38(struct S0 * const p_39)
{
    struct S0 *l_48 = &g_14;
    int l_53 = 0xE0A4D2C6L;
    l_53 = func_41(((safe_rshift_func_int8_t_s_s(1L, ((func_11(l_48) > func_49(l_48, l_53, &g_14)) > (safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(l_53, ((*l_48) , 0xFE49L))), l_53))))) == 0UL), g_58, g_58, g_59.f2);
    return l_53;
}







static int func_41(int p_42, struct S0 * p_43, struct S0 * p_44, int p_45)
{
    int l_60 = 0xD94485E0L;
    int *l_61 = &g_62;
    struct S0 *l_67 = &g_59;
    int *l_86 = &g_62;
    int *l_102 = &g_88;
    unsigned l_124 = 4294967290UL;
    char l_127 = 0xE1L;
    struct S0 ** const *l_132 = &g_129;
    (*l_61) = l_60;
    for (g_62 = 1; (g_62 < 5); g_62 = safe_add_func_uint16_t_u_u(g_62, 5))
    {
        const char l_65 = 0x05L;
        int l_66 = 0xBE3E2CA5L;
        int *l_85 = &l_66;
        struct S0 * const l_101 = &g_59;
    }
    (*l_86) = ((((*l_61) , (safe_mul_func_int8_t_s_s(((((*g_87) < (((8L >= l_124) && (p_45 == ((safe_sub_func_uint8_t_u_u((3L ^ (((p_45 >= g_79.f0) & ((((((func_18((g_88 || (-1L)), p_43, p_42) , (void*)0) == &g_59) >= 0xA2L) & 0xDA113399L) == (*g_87)) ^ (*g_87))) > g_79.f3)), (*l_86))) == 255UL))) && 0xC27877F7L)) , l_127) <= (*g_87)), 1UL))) , p_42) & g_79.f4);
    if (((((((-5L) >= (g_59.f2 == (p_42 >= (g_128 == ((safe_rshift_func_uint8_t_u_s(g_14.f2, 3)) , &g_129))))) && g_59.f2) < (((l_132 == l_132) , g_62) != 0xCDF1L)) || 0x18BDL) != 0x38A31BD4L))
    {
        return (*g_87);
    }
    else
    {
        short l_133 = 0xA203L;
        struct S0 * const l_134 = (void*)0;
        int *l_141 = &g_62;
        int **l_147 = &l_102;
        (*l_102) = ((((((246UL || (p_43 != (void*)0)) , (l_133 , l_134)) != (void*)0) | (safe_lshift_func_uint16_t_u_u((l_133 | ((safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((g_59.f4 == (&p_42 == l_141)), g_142)) , p_45), p_42)) >= 246UL)), 11))) | (*l_141)) >= (*l_61));
        (*l_86) = ((*l_141) | (safe_mod_func_uint16_t_u_u((0x5BL != 1UL), (((safe_lshift_func_uint8_t_u_s(p_42, (*l_61))) , ((*l_141) , func_49(p_44, ((((void*)0 != &p_42) , g_59.f2) || g_79.f2), p_43))) | g_59.f0))));
        (*l_147) = &g_88;
        for (g_79.f3 = 0; (g_79.f3 != 19); ++g_79.f3)
        {
            struct S0 *l_150 = &g_59;
            (**l_147) = func_11(l_150);
        }
    }
    return (*g_87);
}







static char func_49(struct S0 * p_50, int p_51, struct S0 * p_52)
{
    return g_14.f1;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
    transparent_crc(g_14.f1, "g_14.f1", print_hash_value);
    transparent_crc(g_14.f2, "g_14.f2", print_hash_value);
    transparent_crc(g_14.f3, "g_14.f3", print_hash_value);
    transparent_crc(g_14.f4, "g_14.f4", print_hash_value);
    transparent_crc(g_59.f0, "g_59.f0", print_hash_value);
    transparent_crc(g_59.f1, "g_59.f1", print_hash_value);
    transparent_crc(g_59.f2, "g_59.f2", print_hash_value);
    transparent_crc(g_59.f3, "g_59.f3", print_hash_value);
    transparent_crc(g_59.f4, "g_59.f4", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_79.f0, "g_79.f0", print_hash_value);
    transparent_crc(g_79.f1, "g_79.f1", print_hash_value);
    transparent_crc(g_79.f2, "g_79.f2", print_hash_value);
    transparent_crc(g_79.f3, "g_79.f3", print_hash_value);
    transparent_crc(g_79.f4, "g_79.f4", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_152.f0, "g_152.f0", print_hash_value);
    transparent_crc(g_152.f1, "g_152.f1", print_hash_value);
    transparent_crc(g_152.f2, "g_152.f2", print_hash_value);
    transparent_crc(g_152.f3, "g_152.f3", print_hash_value);
    transparent_crc(g_152.f4, "g_152.f4", print_hash_value);
    transparent_crc(g_176.f0, "g_176.f0", print_hash_value);
    transparent_crc(g_176.f1, "g_176.f1", print_hash_value);
    transparent_crc(g_176.f2, "g_176.f2", print_hash_value);
    transparent_crc(g_176.f3, "g_176.f3", print_hash_value);
    transparent_crc(g_176.f4, "g_176.f4", print_hash_value);
    transparent_crc(g_225.f0, "g_225.f0", print_hash_value);
    transparent_crc(g_225.f1, "g_225.f1", print_hash_value);
    transparent_crc(g_225.f2, "g_225.f2", print_hash_value);
    transparent_crc(g_225.f3, "g_225.f3", print_hash_value);
    transparent_crc(g_225.f4, "g_225.f4", print_hash_value);
    transparent_crc(g_284.f0, "g_284.f0", print_hash_value);
    transparent_crc(g_284.f1, "g_284.f1", print_hash_value);
    transparent_crc(g_284.f2, "g_284.f2", print_hash_value);
    transparent_crc(g_284.f3, "g_284.f3", print_hash_value);
    transparent_crc(g_284.f4, "g_284.f4", print_hash_value);
    transparent_crc(g_339.f0, "g_339.f0", print_hash_value);
    transparent_crc(g_339.f1, "g_339.f1", print_hash_value);
    transparent_crc(g_339.f2, "g_339.f2", print_hash_value);
    transparent_crc(g_339.f3, "g_339.f3", print_hash_value);
    transparent_crc(g_339.f4, "g_339.f4", print_hash_value);
    transparent_crc(g_344, "g_344", print_hash_value);
    transparent_crc(g_363.f0, "g_363.f0", print_hash_value);
    transparent_crc(g_363.f1, "g_363.f1", print_hash_value);
    transparent_crc(g_363.f2, "g_363.f2", print_hash_value);
    transparent_crc(g_363.f3, "g_363.f3", print_hash_value);
    transparent_crc(g_363.f4, "g_363.f4", print_hash_value);
    transparent_crc(g_413.f0, "g_413.f0", print_hash_value);
    transparent_crc(g_413.f1, "g_413.f1", print_hash_value);
    transparent_crc(g_413.f2, "g_413.f2", print_hash_value);
    transparent_crc(g_413.f3, "g_413.f3", print_hash_value);
    transparent_crc(g_413.f4, "g_413.f4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
