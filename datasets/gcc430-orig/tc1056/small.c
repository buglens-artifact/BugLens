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



static volatile int g_2 = 0xE5596960L;
static int g_16 = (-1L);
static char g_80 = 0xA3L;
static unsigned short g_84 = 0xE6E2L;
static unsigned char g_86 = 0x97L;
static int g_89 = 0xC7B934CEL;
static int *g_88 = &g_89;
static short g_117 = 4L;
static char g_145 = 0x35L;
static int *g_197 = &g_16;
static int **g_196 = &g_197;
static char g_221 = (-1L);
static volatile unsigned short *g_236 = (void*)0;
static volatile unsigned short * volatile *g_235 = &g_236;
static int g_255 = (-1L);
static unsigned g_272 = 0x00192FCFL;
static short g_300 = 1L;
static short *g_339 = &g_300;
static int **g_343 = &g_88;
static int *g_348 = &g_89;
static unsigned g_350 = 4294967295UL;
static unsigned char g_351 = 0x67L;
static int *g_369 = &g_89;
static short g_380 = 0x0D6DL;
static unsigned short g_495 = 1UL;
static unsigned char g_576 = 0x68L;
static volatile unsigned g_586 = 0x4826B729L;
static volatile unsigned *g_585 = &g_586;
static volatile unsigned ** volatile g_584 = &g_585;



static short func_1(void);
static int * func_3(unsigned short p_4, char p_5);
static unsigned char func_6(short p_7);
static short func_8(int p_9, unsigned p_10, int p_11, int * p_12, unsigned p_13);
static int * func_19(int * p_20, int ** p_21);
static int * func_22(int ** p_23, int p_24, int * p_25, unsigned p_26, int p_27);
static unsigned short func_34(int ** p_35, int * p_36, unsigned char p_37, int * p_38, int * p_39);
static unsigned func_41(int ** p_42, unsigned p_43, short p_44, int * p_45);
static int ** func_46(int p_47);
static char func_50(unsigned p_51, short p_52, unsigned char p_53, int * p_54);
static short func_1(void)
{
    int l_14 = 0L;
    int *l_15 = &g_16;
    int **l_17 = &l_15;
    int *l_18 = &g_16;
    (*g_196) = (g_2 , func_3(((func_6(func_8((g_2 > (-8L)), ((l_14 , ((*l_17) = l_15)) == l_18), g_16, func_19(func_22(&l_18, (((*l_18) | 0x1DL) > 249UL), &g_16, g_16, g_16), g_196), (*l_18))) & 255UL) | g_272), g_272));


    ;
    ;
    ;
    (*g_343) = (*l_17);
    return (*l_18);
}







static int * func_3(unsigned short p_4, char p_5)
{
    int *l_579 = &g_16;
    unsigned *l_583 = &g_272;
    unsigned **l_582 = &l_583;
    int l_587 = 1L;
    (*g_196) = l_579;

    ;
    (*l_579) = (func_6((*l_579)) , (safe_rshift_func_int16_t_s_u(((((l_582 == g_584) != (l_587 = g_86)) > (g_300 , g_221)) <= ((*l_579) || ((*g_348) || (*l_579)))), 1)));

    ;
    l_579 = l_579;
    return (*g_196);


}







static unsigned char func_6(short p_7)
{
    int ***l_541 = &g_196;
    int ****l_540 = &l_541;
    int ****l_543 = &l_541;
    int *l_568 = &g_89;
    int *l_574 = &g_255;
    int **l_573 = &l_574;
    int l_575 = 0x51D2ECACL;
    int ***l_577 = &g_343;
    int *l_578 = &g_89;
    for (g_351 = 8; (g_351 > 8); g_351 = safe_add_func_uint8_t_u_u(g_351, 9))
    {
        unsigned short *l_538 = (void*)0;
        unsigned short *l_539 = &g_84;
        unsigned *l_542 = &g_350;
        int l_544 = 1L;
        int **l_551 = &g_369;
        l_544 = ((p_7 , ((*l_539) = p_7)) >= (l_540 == (((*l_542) = g_255) , l_543)));
        if (((p_7 || l_544) > (((safe_add_func_uint16_t_u_u((((*g_339) | (safe_mod_func_uint8_t_u_u(1UL, g_350))) != 0xD1A0L), ((safe_add_func_int16_t_s_s((!l_544), p_7)) != ((((void*)0 == l_551) , p_7) == p_7)))) , g_380) , 9UL)))
        {
            int *l_556 = &g_255;
            int *l_558 = &g_255;
            int **l_557 = &l_558;
            char l_559 = (-1L);
            char *l_562 = (void*)0;
            char *l_563 = &g_80;
            unsigned char *l_564 = (void*)0;
            unsigned char *l_565 = (void*)0;
            int l_566 = 7L;
            (*g_343) = ((***l_540) = (*l_551));

            ;
            if (p_7)
                continue;
        }
        else
        {
            int *l_567 = (void*)0;
            (*g_196) = l_567;

            ;
        }

        ;
    }


    (*g_369) = (0xEE20L < p_7);
    (*g_343) = l_578;
    return g_576;
}







static short func_8(int p_9, unsigned p_10, int p_11, int * p_12, unsigned p_13)
{
    int *l_504 = (void*)0;
    int l_505 = 0x38705546L;
    unsigned short **l_522 = (void*)0;
    unsigned short ***l_521 = &l_522;
    for (p_9 = (-22); (p_9 > (-4)); p_9 = safe_add_func_int16_t_s_s(p_9, 3))
    {
        int **l_503 = (void*)0;
        int *l_510 = (void*)0;
        (*g_196) = (*g_196);
        (**g_196) = (*p_12);
        (*g_196) = ((safe_add_func_uint32_t_u_u((((safe_sub_func_int32_t_s_s((*p_12), (**g_196))) || 4294967295UL) , 0xEADE78D6L), g_495)) , &p_11);

        ;
    }

    ;
    (*g_369) = (&g_86 != (void*)0);
    for (p_10 = (-7); (p_10 < 21); p_10++)
    {
        char l_523 = 0L;
        int l_526 = 5L;
        char *l_529 = &g_80;
        int l_534 = 6L;
        unsigned char *l_535 = &g_351;
        (**g_196) = ((1L <= p_13) >= (0x63E05A45L == 0UL));
        (*g_369) = (safe_sub_func_int32_t_s_s((((*g_339) <= (l_523 = (&g_235 != l_521))) & (0x9A5EL | ((g_2 , ((*l_535) = (safe_mul_func_uint16_t_u_u(l_526, (safe_add_func_uint32_t_u_u(((((*l_529) = p_13) == (((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((g_255 | l_534), 6)), 0xB93FL)) <= p_11) <= p_11)) , p_9), (*p_12))))))) || g_221))), l_526));
        return p_9;


    }
    return l_505;


}







static int * func_19(int * p_20, int ** p_21)
{
    int **l_206 = &g_88;
    unsigned short *l_211 = (void*)0;
    unsigned short *l_212 = &g_84;
    unsigned char *l_229 = &g_86;
    int *l_257 = &g_16;
    unsigned l_269 = 0x8985A425L;
    char l_270 = (-1L);
    int **l_283 = &l_257;
    unsigned l_474 = 0x58C5A75CL;
    (*g_88) = ((safe_sub_func_int8_t_s_s((g_80 < (0x72EEF0EDL > ((g_16 ^ 0UL) <= (safe_add_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_u(g_16, ((*l_212) = (((((((void*)0 == l_206) , ((**l_206) | (safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((**l_206), g_117)), g_80)))) && 0xAE63DA66L) > (*g_197)) , (**l_206)) | (**l_206))))) & (**l_206)) >= 0x92AA995AL), (**l_206)))))), (**l_206))) || (*g_88));
    if ((((*g_196) != ((*l_206) = (void*)0)) > (func_41(&g_197, g_80, (g_86 == ((&g_145 != ((safe_mul_func_int8_t_s_s(0x7FL, ((g_86 > g_86) , 0x35L))) , (void*)0)) & (**g_196))), (*g_196)) == g_84)))
    {
        unsigned l_215 = 0xA95C4C3CL;
        unsigned char *l_216 = (void*)0;
        char *l_219 = &g_80;
        char *l_220 = &g_221;
        int l_222 = 0x2E05E156L;
        unsigned char **l_230 = &l_229;
        unsigned short **l_234 = &l_211;
        unsigned short ***l_233 = &l_234;
        int *l_260 = &l_222;
        unsigned short l_280 = 0x9CF0L;
        g_89 = (255UL != (g_86 = l_215));
        l_222 = (&g_88 == ((safe_mod_func_uint8_t_u_u(g_145, ((*l_220) = ((*l_219) = l_215)))) , &g_88));
        if (((safe_sub_func_uint16_t_u_u((0x3370L > ((~((safe_rshift_func_int16_t_s_s(l_215, 15)) , l_222)) , g_86)), ((*l_212) = (safe_add_func_uint8_t_u_u((((*l_230) = l_229) == ((safe_lshift_func_int8_t_s_u(g_84, 4)) , &g_86)), (((*l_233) = &l_212) != g_235)))))) , (*g_197)))
        {
            int l_246 = 0xD22C2485L;
            int *l_256 = &l_222;
            int l_258 = 0xDA636D35L;
            unsigned *l_271 = &l_215;
            for (g_145 = 0; (g_145 < (-7)); --g_145)
            {
                int l_239 = 0xDB9DDAD4L;
                unsigned *l_247 = &l_215;
                short *l_250 = &g_117;
                int *l_259 = &l_222;
                if (l_239)
                    break;
                if ((safe_mod_func_int8_t_s_s(g_145, (*l_256))))
                {
                    return (*p_21);


                }
                else
                {
                    if ((**p_21))
                        break;
                }
                l_260 = l_259;
            }
            (*l_206) = (((g_145 && (safe_rshift_func_int16_t_s_s(((*l_260) | (((*l_256) >= ((safe_rshift_func_int8_t_s_s((((*l_212) = g_16) < (0L <= g_117)), 7)) >= func_41(&g_88, ((*l_271) = (((g_145 & (safe_add_func_int16_t_s_s((func_34(((safe_rshift_func_uint8_t_u_s((((((8L && 0xC7L) | g_80) , (*l_257)) == l_269) ^ 0x633137A9L), g_89)) , (void*)0), (*g_196), g_16, (*p_21), &l_222) && (*l_256)), l_270))) != 0x5EL) != (*l_257))), g_117, (*p_21)))) , (*l_256))), (*l_260)))) >= g_272) , (void*)0);
            (*l_256) = ((&p_21 == (void*)0) == (safe_mod_func_int8_t_s_s((*l_260), 0xB8L)));
        }
        else
        {
            unsigned l_275 = 0UL;
            int **l_284 = (void*)0;
            int *l_285 = &g_16;
            unsigned l_286 = 4294967293UL;
            (*l_260) = (((+((**l_230) = l_275)) && l_275) , (g_16 , (safe_mod_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((!l_280), ((((func_34(&g_197, func_22(l_283, (**p_21), &l_222, (**l_283), g_221), g_16, (*p_21), l_285) ^ l_286) && g_16) > 0UL) , 0xEAC3L))), (*l_260)))));

            ;
        }

        ;
        ;
    }
    else
    {
        char l_289 = 0xA3L;
        int **l_290 = &l_257;
        short *l_297 = &g_117;
        char *l_298 = &g_145;
        short *l_299 = &g_300;
        unsigned **l_383 = (void*)0;
        if ((((**l_290) <= 0x4590174DL) > g_145))
        {
            return (*g_196);


        }
        else
        {
            unsigned short l_304 = 65530UL;
            int **l_324 = (void*)0;
            for (g_221 = 0; (g_221 == 22); ++g_221)
            {
                int **l_303 = &g_88;
                int ***l_305 = &l_206;
                unsigned *l_319 = &g_272;
                unsigned **l_318 = &l_319;
                int *l_325 = &g_89;
                (*p_21) = ((**l_305) = (*p_21));

                ;
                (*l_325) = (0x092810F8L <= ((((((*l_318) = p_20) != &g_272) < (safe_lshift_func_int8_t_s_u((((g_80 , (safe_sub_func_uint8_t_u_u((***l_305), g_117))) <= (((g_80 , (~(*g_197))) | func_41(l_324, g_300, g_16, (*p_21))) , g_145)) < (**l_290)), 7))) >= (***l_305)) < 1UL));

                ;
            }

            ;
        }

        ;
        if (((void*)0 == l_297))
        {
            short l_336 = 0x3BBDL;
            short **l_340 = &l_299;
            short l_341 = 0x0B62L;
            int *l_342 = &g_89;
            int ***l_344 = &l_206;
            int ***l_345 = (void*)0;
            int ***l_346 = &g_196;
            int **l_347 = &l_257;
            unsigned *l_349 = &g_350;
            (*l_342) = (g_145 >= ((*l_212) = (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(1UL, 7)), (safe_add_func_int32_t_s_s(((safe_add_func_uint16_t_u_u(((1UL != g_80) >= ((*l_297) = ((((safe_add_func_int16_t_s_s(((0x96F8L || ((l_336 ^ (**l_290)) || (safe_lshift_func_int8_t_s_u((l_297 != ((*l_340) = (g_339 = &g_300))), 5)))) ^ (**l_290)), g_272)) , (**l_290)) , &g_86) == &g_86))), l_341)) & (**l_290)), 0x83CE6440L))))));
            (*p_21) = (*l_290);
        }
        else
        {
            int ***l_353 = &l_290;
            int ****l_352 = &l_353;
            int ****l_354 = (void*)0;
            int ****l_355 = (void*)0;
            int ***l_357 = &g_343;
            int ****l_356 = &l_357;
            int l_403 = 0x90758B99L;
            unsigned short **l_414 = &l_211;
            unsigned short ***l_413 = &l_414;
            short l_440 = 1L;
            unsigned char l_468 = 0x0FL;
            int **l_476 = &l_257;
            int *l_484 = &g_16;
            if ((((*l_356) = ((*l_352) = &g_343)) == (void*)0))
            {
                int l_360 = 0x80671164L;
                unsigned short *l_367 = &g_84;
                unsigned short ***l_390 = (void*)0;
                char *l_402 = &g_80;
                int *l_404 = &g_255;
                unsigned short l_415 = 0x47B0L;
                int l_416 = 6L;
                if (((+g_16) ^ (((safe_rshift_func_int8_t_s_s((l_360 <= (safe_add_func_int32_t_s_s((g_84 == (&l_290 != &p_21)), (**l_290)))), (safe_rshift_func_uint8_t_u_u(253UL, 1)))) <= func_34(&p_20, (*p_21), (**l_290), (*l_283), (***l_352))) || l_360)))
                {
                    int l_368 = 0xF4A2D3D3L;
                    unsigned short l_378 = 65534UL;
                    short *l_379 = &g_380;
                    (*g_88) = ((**l_283) , ((*g_339) | ((**l_290) < (l_360 = ((*l_212) = (l_368 = (l_367 != &g_84)))))));
                    g_369 = (*l_206);
                    for (g_84 = 0; (g_84 <= 51); ++g_84)
                    {
                        (*l_283) = ((*g_343) = (*p_21));

                        ;
                        (*g_369) = (safe_mul_func_int8_t_s_s(g_350, 0xE4L));
                        if ((*p_20))
                            continue;
                    }

                    ;
                    (*l_290) = func_22(&g_369, (((((safe_sub_func_int8_t_s_s((l_360 & ((*l_379) = (((((*l_299) = (&g_272 == p_20)) || ((*l_297) = ((*g_196) == (l_368 , ((((safe_mod_func_int8_t_s_s((((**l_290) ^ ((l_360 , (((*l_298) = (g_16 , (**l_290))) || l_360)) < 0xB0A5L)) != g_255), 0x1DL)) , l_378) ^ (**l_290)) , (void*)0))))) , l_378) , (*g_339)))), 0xBDL)) & g_80) , (**g_196)) < 0x6EA95927L) , l_378), (*g_343), (****l_352), (***l_357));

                    ;
                }
                else
                {
                    for (g_145 = 10; (g_145 == 0); g_145 = safe_sub_func_int8_t_s_s(g_145, 1))
                    {
                        (**l_206) = (**l_290);
                        (*p_21) = (*p_21);
                        (****l_356) = ((void*)0 != l_383);
                        (*g_88) = (**g_196);
                    }
                    for (g_380 = 19; (g_380 > 22); g_380 = safe_add_func_int32_t_s_s(g_380, 2))
                    {
                        return (*g_196);


                    }
                    return (*g_196);


                }

                ;
                ;
                for (g_221 = 17; (g_221 >= 17); ++g_221)
                {
                    unsigned char l_391 = 0x46L;
                    int *l_396 = &l_360;
                    for (l_270 = (-13); (l_270 == 4); ++l_270)
                    {
                        int l_397 = 9L;
                        (***l_356) = func_22(&g_369, (l_390 == &g_235), (*g_343), l_391, ((func_41((l_290 = (((g_350 && (((safe_add_func_int8_t_s_s(((void*)0 != l_396), (*l_396))) <= (**l_290)) != 0x01L)) <= (*l_396)) , l_290)), l_289, (*l_257), (*g_196)) > l_289) > g_145));

                        ;
                        (*l_283) = (((l_397 = 0x8217980DL) == (**g_196)) , (*l_290));
                    }
                    for (g_145 = 28; (g_145 >= 1); g_145--)
                    {
                        (*g_369) = l_360;
                    }
                    if ((**p_21))
                        continue;
                }
                l_360 = ((safe_mod_func_int8_t_s_s((((*l_404) = (func_41(func_46(l_403), g_221, (*g_339), (*p_21)) , (**l_290))) , (**l_290)), g_350)) > g_380);


                l_416 = ((**l_283) , (l_360 = (((safe_sub_func_int32_t_s_s(0L, (safe_sub_func_uint8_t_u_u((((l_360 == (0xE1L & (**l_290))) & ((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(((void*)0 == l_413), 0)) > (l_415 && l_415)), g_117)) > 0x15L)) , (*l_257)), g_89)))) > (*l_257)) , (**l_290))));
            }
            else
            {
                char l_431 = 6L;
                int *l_449 = &g_89;
                unsigned char l_462 = 1UL;
                unsigned l_463 = 0xAA61B473L;
                (*g_348) = (safe_rshift_func_int16_t_s_u((**l_290), (~(((*l_299) = ((*g_339) == 6UL)) && (safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((((safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((l_229 == (void*)0), 7)), (g_380 = (((safe_sub_func_int16_t_s_s(((*g_339) = (~(l_431 < (((g_272 & (safe_sub_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_s(((*l_297) = (safe_mul_func_uint16_t_u_u((((void*)0 == &p_20) | (**l_290)), (**l_290)))), 0)) == 2UL), 14)) & 3L), (*g_348)))) > (**l_290)) <= (**l_283))))), l_431)) , (**l_290)) , (**l_290))))), l_431)) & 1UL) && l_440) , 0x38A4656BL), (**l_283))), (-1L)))))));
                if ((safe_mul_func_int16_t_s_s(((safe_add_func_int16_t_s_s((**l_290), 3UL)) < func_34(((~(safe_mul_func_uint16_t_u_u(((*l_257) < (safe_mod_func_int32_t_s_s(((**l_290) <= (*g_339)), (l_431 , (*g_348))))), (*g_339)))) , &l_257), (*p_21), l_431, (*g_196), l_449)), g_86)))
                {
                    short l_459 = 0x309EL;
                    l_463 = (((**l_206) = (**g_196)) > ((((safe_unary_minus_func_int16_t_s((*g_339))) == (((safe_sub_func_uint16_t_u_u((g_84 = (safe_lshift_func_int16_t_s_u(((safe_mul_func_int16_t_s_s(1L, (((safe_lshift_func_uint8_t_u_s((!255UL), (l_459 = ((+(*l_257)) ^ (**l_290))))) , (*g_339)) && (*g_339)))) , ((((safe_rshift_func_int16_t_s_u(0xBDB3L, l_459)) , l_459) != l_462) | g_84)), 11))), 9L)) ^ g_86) > (**l_290))) < (**l_283)) , 0xD286198FL));
                    return (*g_196);


                }
                else
                {
                    (*l_206) = ((*p_21) = func_22(((**l_356) = &g_369), ((*l_449) <= ((safe_lshift_func_uint8_t_u_u(g_351, 1)) | g_84)), (*p_21), g_350, g_89));

                    ;
                    ;
                }

                ;
                ;
                ;
                if ((**g_343))
                {
                    int l_471 = (-1L);
                    int l_475 = (-1L);
                    if (((func_41(func_46(((*p_20) <= ((*g_339) || ((*l_257) , func_34(l_290, (*l_206), g_84, ((l_475 = (safe_sub_func_uint32_t_u_u((l_471 = 3UL), (safe_rshift_func_uint8_t_u_u((***l_353), (((0x86L <= (*l_449)) >= (**l_290)) | l_474)))))) , (*l_290)), (*g_196)))))), g_221, (*g_339), (*g_196)) <= 7L) , (*g_348)))
                    {
                        char l_483 = 0xB7L;
                        (*g_196) = func_22(((**l_356) = (**l_356)), func_34(&g_369, (*p_21), g_255, (*l_283), (*p_21)), l_484, (**l_290), l_483);

                        ;
                        (***l_352) = (*g_343);
                    }
                    else
                    {
                        (*g_343) = ((*l_449) , (*p_21));
                    }


                    return (*p_21);


                }
                else
                {
                    for (l_463 = 0; (l_463 >= 15); ++l_463)
                    {
                        (*g_197) = (**l_290);
                    }
                }
                for (l_270 = 27; (l_270 <= (-20)); l_270--)
                {
                    int l_489 = (-1L);
                    int *l_492 = (void*)0;
                    (*g_88) = l_489;
                    for (l_269 = 0; (l_269 == 1); ++l_269)
                    {
                        (**g_196) = (*g_348);
                        (*g_88) = 0xA3940CC9L;
                        (*l_476) = l_492;

                        ;
                        return (*g_343);


                    }
                    for (l_431 = 0; (l_431 >= 21); l_431 = safe_add_func_uint16_t_u_u(l_431, 3))
                    {
                        int *l_500 = &g_89;
                        g_495 = ((*g_348) = 8L);
                        (**l_206) = (*g_197);
                        l_492 = (g_300 , func_22(&l_449, (**g_196), ((safe_mul_func_uint8_t_u_u(g_86, (safe_sub_func_int8_t_s_s((**l_290), (**l_206))))) , l_500), (**l_290), (*l_449)));

                        ;
                    }

                    ;
                }
            }


            ;
            ;
            ;
            ;
        }


        ;
        ;
        ;
        (*l_290) = ((**l_290) , (*l_290));
    }


    ;
    ;
    ;
    (*g_343) = (*g_196);

    ;
    return (*g_196);


}







static int * func_22(int ** p_23, int p_24, int * p_25, unsigned p_26, int p_27)
{
    unsigned char l_57 = 0x4DL;
    int l_61 = 0x416DA84BL;
    int l_94 = (-6L);
    int **l_194 = &g_88;
    for (p_24 = 0; (p_24 < (-6)); p_24 = safe_sub_func_uint16_t_u_u(p_24, 7))
    {
        unsigned l_62 = 0xE2510A74L;
        unsigned l_174 = 0x7FF6F2D3L;
        int l_190 = 0L;
        for (p_27 = 0; (p_27 <= (-22)); p_27 = safe_sub_func_int8_t_s_s(p_27, 9))
        {
            int **l_40 = (void*)0;
            int *l_60 = &g_16;
            int **l_59 = &l_60;
            int ***l_58 = &l_59;
            short l_63 = 0xC048L;
            int *l_64 = &l_61;
            unsigned l_173 = 1UL;
            l_190 = (((*l_64) = (safe_add_func_int16_t_s_s(((func_34(l_40, (((func_41(func_46((safe_lshift_func_int16_t_s_s(((g_16 && 0x652F093DL) && func_50((+(l_62 = ((l_57 = (-10L)) & ((((*l_58) = l_40) == (void*)0) <= ((p_24 , p_24) <= (l_61 , p_24)))))), g_16, l_63, l_64)), l_94))), l_173, l_174, (*p_23)) , (-1L)) | (-1L)) , (*p_23)), g_16, (*p_23), &l_94) , (*l_60)) <= l_174), g_145))) || l_94);

            ;
            ;
            (*l_64) = (**p_23);
        }
    }
    for (l_61 = 0; (l_61 == (-20)); --l_61)
    {
        int *l_193 = &l_94;
        int *l_195 = &g_89;
        l_193 = (*p_23);

        ;
        (*l_195) = func_34(l_194, (*l_194), g_117, (*p_23), &g_89);

        ;
        (*l_194) = l_195;
    }
    (*l_194) = (*l_194);
    return (*p_23);


}







static unsigned short func_34(int ** p_35, int * p_36, unsigned char p_37, int * p_38, int * p_39)
{
    unsigned short l_179 = 1UL;
    int *l_189 = &g_16;
    int **l_188 = &l_189;
    g_88 = &g_89;

    ;
    (*g_88) = ((*g_88) <= 0x48559906L);
    return (*l_189);
}







static unsigned func_41(int ** p_42, unsigned p_43, short p_44, int * p_45)
{
    int *l_175 = &g_89;
    int l_176 = (-2L);
    l_176 = (~((*l_175) = 1L));
    (*l_175) = (*p_45);
    return (*l_175);
}







static int ** func_46(int p_47)
{
    int **l_95 = &g_88;
    int *l_102 = (void*)0;
    int *l_103 = &g_89;
    int l_110 = 0L;
    char *l_147 = &g_80;
    (*l_95) = &g_89;

    ;
    if (p_47)
    {
        int **l_96 = &g_88;
        (*l_95) = &g_89;
        return l_96;


    }
    else
    {
        int *l_101 = &g_16;
        for (g_86 = (-24); (g_86 < 38); g_86++)
        {
            int *l_99 = &g_16;
            int **l_100 = &l_99;
            (*l_100) = ((*l_95) = l_99);

            ;
            return &g_88;


        }
        (*l_95) = l_101;

        ;
        (*l_95) = (void*)0;

        ;
        (*l_95) = (*l_95);
    }

    ;
    (*l_103) = ((void*)0 == &l_95);
    for (g_80 = 0; (g_80 != (-4)); g_80 = safe_sub_func_uint32_t_u_u(g_80, 7))
    {
        unsigned char l_111 = 0xDBL;
        short *l_116 = &g_117;
        int l_122 = 0xEB33379BL;
        char *l_146 = &g_80;
        if (((safe_lshift_func_int16_t_s_u(((*l_116) = (l_110 & ((p_47 || (((l_111 >= g_86) < 0x32420D6CL) , ((l_111 , (safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(l_111, 7)), p_47))) , (g_89 , 1UL)))) > l_111))), 2)) | g_16))
        {
            int l_129 = 7L;
            if (p_47)
                break;
            for (l_110 = 0; (l_110 > 8); ++l_110)
            {
                for (g_89 = 0; (g_89 != (-6)); g_89 = safe_sub_func_int8_t_s_s(g_89, 9))
                {
                    if (g_117)
                        break;
                }
                l_122 = p_47;
            }
            (*l_95) = &l_122;

            ;
            (*g_88) = (((((&g_88 != (void*)0) ^ (safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u(l_111, 6)), g_89))) | g_84) > p_47) == (safe_add_func_int32_t_s_s((l_129 ^ l_129), (safe_sub_func_uint32_t_u_u(0xFFA30257L, (*l_103))))));
        }
        else
        {
            char *l_152 = &g_80;
            int l_153 = 6L;
            for (g_84 = 0; (g_84 >= 14); g_84 = safe_add_func_int8_t_s_s(g_84, 1))
            {
                char *l_144 = &g_145;
                unsigned char *l_148 = &l_111;
                int l_149 = 0xAEEF4A51L;
                short l_169 = 0L;
                int **l_172 = &l_103;
            }
        }


    }


    return &g_88;


}







static char func_50(unsigned p_51, short p_52, unsigned char p_53, int * p_54)
{
    char *l_79 = &g_80;
    int l_82 = 0xADAB8F5BL;
    unsigned short *l_83 = &g_84;
    unsigned char *l_85 = &g_86;
    unsigned l_87 = 0x9FB14BE5L;
    (*p_54) = ((safe_sub_func_uint8_t_u_u(((*l_85) = (safe_sub_func_int16_t_s_s(g_16, ((p_53 < ((safe_rshift_func_int16_t_s_s((+(safe_mod_func_int32_t_s_s(g_16, ((~((safe_sub_func_int16_t_s_s((-1L), p_51)) | ((*l_83) = ((safe_lshift_func_uint16_t_u_s(((p_53 && (safe_mul_func_int8_t_s_s(((*l_79) = (-7L)), ((g_16 != (((((safe_unary_minus_func_int8_t_s((p_52 != l_82))) == l_82) >= g_16) ^ 0x338D581CL) <= l_82)) <= 249UL)))) , g_16), 4)) ^ l_82)))) & 0x79L)))), 1)) , g_84)) > 5UL)))), g_16)) || l_82);
    l_87 = 0xB12ACF19L;
    g_88 = &l_82;

    ;
    for (g_86 = (-8); (g_86 > 35); g_86 = safe_add_func_int16_t_s_s(g_86, 1))
    {
        int **l_92 = (void*)0;
        int **l_93 = &g_88;
        (*l_93) = &g_16;

        ;
        if ((**l_93))
            break;
    }

    ;
    return l_82;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_300, "g_300", print_hash_value);
    transparent_crc(g_350, "g_350", print_hash_value);
    transparent_crc(g_351, "g_351", print_hash_value);
    transparent_crc(g_380, "g_380", print_hash_value);
    transparent_crc(g_495, "g_495", print_hash_value);
    transparent_crc(g_576, "g_576", print_hash_value);
    transparent_crc(g_586, "g_586", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
