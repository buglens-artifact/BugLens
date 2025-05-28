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
   unsigned char f0;
   unsigned f1;
   short f2;
   unsigned f3;
   unsigned f4;
   unsigned char f5;
};


static unsigned short g_16 = 65534UL;
static struct S0 g_38 = {1UL,0x660B2563L,0xCD1AL,0UL,0xDCFF2FD6L,0UL};
static struct S0 g_49 = {0xD3L,0x04E266BCL,0x9458L,0x81C91930L,1UL,0xEFL};
static unsigned *g_57 = &g_49.f3;
static int g_69 = (-1L);
static int *g_109 = &g_69;
static struct S0 g_111 = {0x12L,4294967294UL,0L,4294967289UL,0xF7431CF5L,0xF5L};
static short *g_121 = &g_38.f2;
static short **g_157 = &g_121;
static short ***g_156 = &g_157;
static char g_195 = 0xE4L;
static char *g_194 = &g_195;
static char g_221 = 0x3FL;
static struct S0 *g_231 = &g_49;
static struct S0 **g_230 = &g_231;
static char **g_239 = &g_194;
static unsigned *g_262 = &g_111.f3;
static unsigned **g_261 = &g_262;
static unsigned *g_323 = &g_49.f3;
static short g_339 = 0x4450L;
static char g_357 = 0x36L;
static unsigned g_358 = 1UL;
static unsigned short *g_366 = &g_16;
static unsigned short **g_365 = &g_366;
static unsigned short g_385 = 65535UL;
static short g_395 = 0x4232L;
static unsigned ***g_464 = &g_261;
static unsigned ****g_463 = &g_464;
static unsigned char g_490 = 5UL;
static unsigned g_502 = 0x413929D0L;
static short g_507 = 0L;
static short g_516 = 0xDE44L;
static unsigned short g_560 = 0xED67L;
static unsigned g_562 = 3UL;
static short g_573 = 2L;
static unsigned char g_628 = 0xBCL;
static struct S0 ***g_640 = &g_230;



static int func_1(void);
static unsigned short func_2(unsigned p_3, short p_4);
static unsigned short func_11(unsigned short p_12, short p_13, unsigned p_14, unsigned char p_15);
static unsigned short func_19(short p_20, short p_21, short p_22, unsigned short p_23);
static short func_24(struct S0 p_25);
static struct S0 * func_31(unsigned char p_32);
static unsigned char func_33(struct S0 p_34);
static struct S0 func_35(struct S0 * p_36);
static struct S0 func_41(short p_42, char p_43);
static int * func_71(short p_72, char p_73, unsigned short p_74, unsigned * p_75);
static int func_1(void)
{
    struct S0 l_26 = {0x26L,0xB0A6D081L,0xFC80L,0xE7B1B0CAL,9UL,249UL};
    int l_392 = (-1L);
    int *l_393 = &l_392;
    short *l_394 = &g_395;
    int l_396 = (-1L);
    unsigned short *l_597 = &g_560;
    unsigned char l_604 = 0xE4L;
    char *l_627 = (void*)0;
    unsigned short **l_651 = &g_366;
    unsigned **l_658 = (void*)0;
    if ((((*l_393) = (func_2((safe_div_func_uint32_t_u_u((((((safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u(func_11(g_16, (safe_lshift_func_int16_t_s_u(((func_19((0x6E3EL == ((func_24((l_26 = l_26)) & ((((*l_393) = l_392) <= 0x761D3EE7L) < 0xDC5BL)) ^ g_16)), ((*l_394) = g_16), l_396, l_396) != 0x8574L) <= g_16), 8)), g_221, g_221), (*g_366))), g_221)) || 255UL) != g_221) < l_396) & (*g_366)), 7L)), g_516) < l_396)) && (*l_393)))
    {
        int **l_578 = &l_393;
        (*l_578) = &g_69;

        ;
    }
    else
    {
        unsigned *l_590 = &g_38.f4;
        for (g_357 = 23; (g_357 > 2); g_357 = safe_sub_func_uint32_t_u_u(g_357, 1))
        {
            int l_587 = 0xB623F715L;
            unsigned short *l_588 = (void*)0;
            unsigned short **l_589 = &l_588;
            int **l_591 = (void*)0;
            int **l_592 = &l_393;
            (*g_230) = &l_26;

            ;
        }

        ;
    }


    ;


    ;
    ;
    if ((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u(0UL, ((((**g_365) = 0xC693L) | ((*l_393) = (((((**g_157) & ((*l_597) = (*l_393))) != (safe_div_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(1UL, (*l_393))), ((*g_194) = (*g_194)))) || (0L & ((((*l_394) = (*l_393)) | 5L) >= (*g_262)))) & 5L), (*l_393)))) & 0UL) || (*l_393)))) >= 0x2851C55BL))) || 248UL), l_604)))
    {
        unsigned l_611 = 0x0D317625L;
        int **l_631 = &g_109;
        for (l_26.f0 = 14; (l_26.f0 != 4); l_26.f0 = safe_sub_func_int16_t_s_s(l_26.f0, 6))
        {
            int l_626 = 1L;
            unsigned *l_629 = (void*)0;
            int **l_630 = &g_109;
            (*l_630) = &l_396;

            ;
        }


        (*l_631) = &g_69;

        ;
    }
    else
    {
        int l_634 = 0xDD7BCB3DL;
        char l_645 = 0x02L;
        struct S0 l_662 = {0xF8L,0xEAAC1684L,0xCFB3L,0UL,4294967288UL,3UL};
        (*l_393) = (safe_add_func_int16_t_s_s(((*g_121) = l_634), (safe_sub_func_int32_t_s_s(g_357, ((l_393 == (void*)0) | (l_634 && g_49.f2))))));
        for (l_634 = (-3); (l_634 <= (-26)); l_634 = safe_sub_func_int16_t_s_s(l_634, 6))
        {
            struct S0 ***l_639 = &g_230;
            short l_653 = 0x9556L;
            unsigned *l_655 = &g_49.f3;
        }
        return g_560;


    }

    ;
    (*l_393) = (*l_393);
    return (*g_109);


}







static unsigned short func_2(unsigned p_3, short p_4)
{
    unsigned l_517 = 0UL;
    int l_528 = (-2L);
    struct S0 l_531 = {0xDCL,4294967288UL,0L,0x48234757L,0UL,249UL};
    unsigned short l_535 = 1UL;
    struct S0 **l_571 = &g_231;
    if (l_517)
    {
        int *l_520 = (void*)0;
        unsigned ***l_534 = (void*)0;
        int *l_536 = &l_528;
        int *l_538 = &g_69;
        short **l_543 = (void*)0;
        for (g_38.f3 = (-20); (g_38.f3 <= 5); ++g_38.f3)
        {
            unsigned l_529 = 0x8F585ABBL;
            if (g_69)
            {
                int **l_521 = &g_109;
                int **l_522 = (void*)0;
                int **l_523 = (void*)0;
                int **l_524 = &l_520;
                (*l_524) = ((*l_521) = l_520);

                ;
                for (p_3 = 3; (p_3 != 46); p_3 = safe_add_func_uint32_t_u_u(p_3, 9))
                {
                    return (*g_366);
                }
            }
            else
            {
                unsigned l_527 = 0x2D725249L;
                unsigned short *l_530 = (void*)0;
                l_528 = l_527;
                l_531 = func_41(l_529, ((*g_365) == l_530));
            }
        }
        (*l_538) = ((safe_add_func_uint32_t_u_u((((*g_463) = l_534) != (void*)0), ((*l_536) = ((**g_365) <= ((***g_156) <= l_535))))) && func_11(p_3, p_4, g_49.f2, ((safe_unary_minus_func_uint8_t_u(g_111.f5)) == (*l_536))));

        ;
        l_528 = (((*l_536) ^ ((*g_323) = (p_3 > 0xFD71C465L))) || g_502);
        for (g_69 = (-9); (g_69 < (-30)); --g_69)
        {
            short l_546 = 1L;
            unsigned *****l_572 = &g_463;
            if ((*l_538))
            {
                return (*g_366);
            }
            else
            {
                unsigned ****l_554 = &l_534;
                int l_555 = 0x76470DD2L;
                if (l_546)
                {
                    char l_561 = (-3L);
                    int *l_566 = (void*)0;
                    int **l_567 = &l_566;
                    if ((safe_lshift_func_uint8_t_u_s(248UL, (safe_lshift_func_uint8_t_u_u((l_546 != 0xF662D2B7L), l_531.f3)))))
                    {
                        unsigned ****l_553 = &g_464;
                        (*l_536) = (+(safe_lshift_func_int8_t_s_u((l_553 != l_554), 2)));
                        if (l_555)
                            break;
                        g_560 = (safe_lshift_func_int16_t_s_u(((safe_add_func_uint32_t_u_u((!(*g_57)), 4294967286UL)) | p_3), 6));
                        l_528 = l_546;
                    }
                    else
                    {
                        g_562 = ((*l_536) = l_561);
                    }
                    for (g_49.f2 = 19; (g_49.f2 == (-14)); g_49.f2 = safe_sub_func_int32_t_s_s(g_49.f2, 3))
                    {
                        int **l_565 = &l_538;
                        (*l_565) = l_536;

                        ;
                        if (g_507)
                            continue;
                        (*l_538) = (**l_565);
                    }
                    (*l_567) = l_566;
                }
                else
                {
                    int l_568 = 0x0EA69CA5L;
                    if (g_562)
                        break;
                    return l_568;
                }
            }
            g_573 = ((g_395 | (((safe_lshift_func_int16_t_s_u((**g_157), (**g_365))) != ((l_571 == (void*)0) && (p_3 != 0xBC34L))) == (((void*)0 == l_572) ^ 0xE854L))) == l_546);
        }

        ;
    }
    else
    {
        int *l_576 = (void*)0;
        int *l_577 = &g_69;
        (*l_577) = (safe_add_func_uint8_t_u_u(p_3, 0x8CL));
    }

    ;
    return p_3;
}







static unsigned short func_11(unsigned short p_12, short p_13, unsigned p_14, unsigned char p_15)
{
    int l_444 = 0L;
    unsigned *l_453 = (void*)0;
    int *l_454 = (void*)0;
    int **l_455 = &g_109;
    unsigned char l_456 = 4UL;
    unsigned ***l_462 = &g_261;
    unsigned ****l_461 = &l_462;
    unsigned ****l_466 = &g_464;
    int l_470 = 0x3439A260L;
    unsigned char l_480 = 0x84L;
    int *l_505 = &l_470;
    struct S0 *l_510 = &g_111;
    unsigned short ***l_515 = &g_365;
    (*l_455) = (l_454 = &g_69);

    ;
    ;
    if (l_456)
    {
        unsigned *****l_465 = &g_463;
        struct S0 l_469 = {0x20L,1UL,8L,4294967292UL,0x2D59CFF9L,255UL};
        unsigned l_471 = 0UL;
        (*l_454) = (g_358 >= ((safe_mod_func_int8_t_s_s((safe_div_func_uint8_t_u_u((l_461 != (l_466 = ((*l_465) = g_463))), ((safe_add_func_uint8_t_u_u((func_33(l_469) ^ (((*g_194) != ((&p_12 != (*g_365)) | g_111.f3)) <= l_470)), l_469.f2)) || l_469.f5))), (*g_194))) > l_471));

        ;
        for (g_38.f2 = (-21); (g_38.f2 > (-1)); g_38.f2 = safe_add_func_uint8_t_u_u(g_38.f2, 3))
        {
            unsigned l_476 = 0x60A98DB1L;
            char l_479 = 0x38L;
            int *l_494 = &g_69;
            struct S0 l_500 = {0xA2L,1UL,-1L,0UL,0UL,0UL};
            struct S0 *l_511 = &l_500;
            if ((safe_mod_func_uint8_t_u_u((l_476 >= 1UL), (safe_sub_func_int32_t_s_s(l_476, (l_476 && ((l_479 >= ((*g_262) = ((0xF8FEA2FEL ^ l_479) || (func_19(l_469.f0, l_476, l_469.f5, p_14) || l_469.f3)))) && (**g_365))))))))
            {
                unsigned short l_484 = 0x4BABL;
                int *l_495 = &g_69;
                (*l_454) = 0x793383DDL;
                if ((p_13 >= ((*g_323) ^ l_480)))
                {
                    short l_491 = 0xBAB2L;
                    struct S0 *l_492 = (void*)0;
                    struct S0 *l_493 = &g_49;
                    for (l_479 = (-11); (l_479 > (-1)); ++l_479)
                    {
                        unsigned l_483 = 0x4434D2C6L;
                        short *l_489 = &g_49.f2;
                        l_483 = 0x30F2211BL;
                        (*l_454) = 0x2DC54080L;
                        (*l_454) = (!((l_484 == func_19((*l_454), (*g_121), p_15, (safe_add_func_uint16_t_u_u(65535UL, ((-7L) <= (safe_add_func_int16_t_s_s(((*l_489) = p_13), (***g_156)))))))) && (*g_194)));
                        g_490 = ((*l_454) = 0xCA1C97F0L);
                    }
                    (*l_493) = func_41(l_491, p_14);
                    l_495 = l_494;
                    if ((safe_sub_func_uint32_t_u_u(((*g_262) = p_15), (l_469.f0 == (safe_lshift_func_int8_t_s_s((*l_494), 4))))))
                    {
                        (*l_493) = l_500;
                        (*l_455) = &g_69;

                        ;
                    }
                    else
                    {
                        int **l_501 = &l_494;
                        l_495 = (*l_455);

                        ;
                        g_502 = ((*l_454) = ((4294967286UL | (l_501 != &g_109)) & p_12));
                        (*l_501) = &g_69;
                        (*l_501) = (*l_501);
                    }

                    ;
                }
                else
                {
                    for (g_111.f5 = 0; (g_111.f5 > 13); g_111.f5 = safe_add_func_uint16_t_u_u(g_111.f5, 1))
                    {
                        int **l_506 = &l_505;
                        (*l_495) = (((*l_461) = (*g_463)) == (void*)0);
                        (*l_506) = ((*l_455) = l_505);

                        ;
                    }

                    ;
                    ;
                }

                ;
                ;
                ;
            }
            else
            {
                (*l_505) = (+(g_507 = ((*l_494) = g_111.f4)));
                for (g_49.f4 = 0; (g_49.f4 <= 6); g_49.f4++)
                {
                    l_511 = l_510;

                    ;
                    if (p_13)
                        continue;
                    (*l_455) = (*l_455);
                    for (l_469.f4 = 0; (l_469.f4 < 17); l_469.f4 = safe_add_func_uint32_t_u_u(l_469.f4, 5))
                    {
                        (*l_454) = p_13;
                        if (p_14)
                            continue;
                    }
                }

                ;
                return (*l_454);
            }

            ;
            ;
            return p_12;


        }
    }
    else
    {
        int *l_514 = &l_444;
        (*l_455) = l_514;

        ;
    }

    ;
    (*l_515) = &g_366;
    return (*l_454);


}







static unsigned short func_19(short p_20, short p_21, short p_22, unsigned short p_23)
{
    unsigned l_410 = 4294967288UL;
    int *l_416 = &g_69;
    short ***l_429 = &g_157;
    short ****l_430 = &l_429;
    short ***l_431 = &g_157;
    short ***l_432 = (void*)0;
    struct S0 l_433 = {1UL,1UL,-1L,1UL,0UL,0x15L};
    for (g_38.f1 = (-6); (g_38.f1 != 12); ++g_38.f1)
    {
        struct S0 l_406 = {255UL,1UL,5L,0x16B6F3BFL,4294967294UL,253UL};
        int **l_417 = (void*)0;
        for (g_49.f3 = 9; (g_49.f3 <= 19); ++g_49.f3)
        {
            int *l_401 = &g_69;
            int **l_402 = &g_109;
            int **l_403 = &l_401;
            struct S0 **l_404 = &g_231;
            struct S0 ***l_405 = &l_404;
            struct S0 *l_407 = &l_406;
            (*l_403) = ((*l_402) = l_401);

            ;
            (*l_405) = l_404;
            (*l_407) = l_406;
            for (g_111.f0 = 0; (g_111.f0 != 57); ++g_111.f0)
            {
                (**l_405) = (*g_230);
            }
        }
        if (l_410)
        {
            for (g_111.f1 = (-12); (g_111.f1 >= 59); g_111.f1++)
            {
                int l_413 = (-3L);
                int **l_414 = &g_109;
                if (l_413)
                    break;
                (*l_414) = &g_69;

                ;
            }
        }
        else
        {
            struct S0 *l_415 = &g_111;
            (*l_415) = l_406;
        }
        g_109 = l_416;

        ;
    }
    if (g_38.f0)
    {
        int **l_418 = &l_416;
        int **l_419 = &g_109;
        struct S0 l_422 = {255UL,0x0E35A3C0L,0x5C2AL,4294967290UL,4UL,0x90L};
        struct S0 *l_423 = &g_111;
        (*l_419) = ((*l_418) = &g_69);

        ;
        for (g_111.f1 = (-18); (g_111.f1 < 26); g_111.f1 = safe_add_func_int16_t_s_s(g_111.f1, 1))
        {
            (*l_419) = (void*)0;

            ;
            (*l_416) = p_23;
        }

        ;
        (*l_423) = l_422;
    }
    else
    {
        struct S0 *l_426 = &g_111;
        for (g_38.f3 = 0; (g_38.f3 <= 55); ++g_38.f3)
        {
            int *l_427 = &g_69;
            int *l_428 = (void*)0;
            l_426 = (void*)0;

            ;
            (*l_416) = g_16;
            l_428 = l_427;

            ;
        }

        ;
    }
    if (((*l_416) = ((p_23 || (*l_416)) > ((*g_57) = (((*l_430) = l_429) != (l_432 = l_431))))))
    {
        struct S0 *l_434 = &g_49;
        int **l_435 = (void*)0;
        int **l_436 = &g_109;
        (*l_434) = l_433;
        (*l_436) = &g_69;

        ;
    }
    else
    {
        int *l_439 = &g_69;
        for (l_433.f5 = 0; (l_433.f5 < 59); l_433.f5 = safe_add_func_int8_t_s_s(l_433.f5, 6))
        {
            int **l_440 = (void*)0;
            int **l_441 = &l_439;
            (*l_441) = l_439;
            if ((*l_416))
                break;
            (*l_441) = (void*)0;

            ;
        }

        ;
    }

    ;
    return (**g_365);
}







static short func_24(struct S0 p_25)
{
    struct S0 *l_37 = &g_38;
    unsigned *l_184 = &g_111.f1;
    int l_185 = 0L;
    unsigned l_198 = 0UL;
    unsigned *l_203 = &g_38.f3;
    unsigned l_212 = 0x8919A246L;
    char *l_216 = &g_195;
    unsigned char l_245 = 1UL;
    unsigned ***l_280 = (void*)0;
    int **l_373 = &g_109;
    short l_377 = 0x9607L;
    short ***l_386 = &g_157;
    for (p_25.f4 = 0; (p_25.f4 <= 33); ++p_25.f4)
    {
        int l_193 = 8L;
        char *l_197 = &g_195;
        for (p_25.f5 = 20; (p_25.f5 != 52); p_25.f5 = safe_add_func_int8_t_s_s(p_25.f5, 2))
        {
            struct S0 **l_183 = &l_37;
            int *l_186 = &g_69;
            char **l_196 = &g_194;
        }
        if ((*g_109))
            break;
    }
    if ((4294967295UL != (((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((((g_109 != l_203) != (g_111.f3 > ((safe_sub_func_int16_t_s_s(2L, ((safe_mod_func_uint8_t_u_u((((safe_mod_func_int16_t_s_s(l_198, ((l_198 ^ (l_185 > l_212)) | p_25.f1))) > (*g_121)) == 0x20F8F325L), p_25.f4)) > 0xC7L))) < (*g_121)))) || g_111.f5), 0)), 9)) >= l_212) < p_25.f1)))
    {
        int **l_213 = &g_109;
        int *l_215 = &g_69;
        int **l_214 = &l_215;
        unsigned short l_248 = 0x9B4EL;
        struct S0 l_251 = {0x04L,4294967295UL,0x3C54L,0x2A351025L,0x35F0CBF2L,0x26L};
        unsigned **l_259 = (void*)0;
        unsigned short l_316 = 0x182EL;
        short **l_320 = &g_121;
        (*l_214) = ((*l_213) = &g_69);
        if (((p_25.f5 || ((*l_215) > ((**l_214) != l_212))) <= (((void*)0 != l_216) <= p_25.f4)))
        {
            int l_226 = 1L;
            short *l_229 = &g_111.f2;
            char **l_237 = &g_194;
            struct S0 *l_250 = &g_38;
            if ((((**l_213) > ((p_25.f0 | ((safe_add_func_int32_t_s_s(((safe_add_func_uint16_t_u_u(g_49.f1, (~(((*l_229) = ((*g_121) = (!(((*g_194) = 3L) <= (g_221 >= ((safe_lshift_func_int16_t_s_u((~(safe_add_func_int32_t_s_s(l_226, (*g_109)))), 8)) & (safe_lshift_func_uint16_t_u_s(g_49.f1, 3)))))))) && (g_230 == &l_37))))) != l_226), p_25.f0)) == p_25.f5)) != 0x76L)) <= 0x4FL))
            {
                char **l_236 = &l_216;
                for (g_111.f1 = 12; (g_111.f1 != 7); g_111.f1 = safe_sub_func_uint8_t_u_u(g_111.f1, 1))
                {
                    char **l_238 = &l_216;
                    if (((safe_lshift_func_int16_t_s_s((l_236 == l_236), 7)) && 8UL))
                    {
                        (*l_213) = &l_226;

                        ;
                        (**l_214) = (*g_109);
                        (*g_230) = (*g_230);
                        if ((*g_109))
                            break;
                    }
                    else
                    {
                        (*l_214) = &l_226;

                        ;
                        (*g_109) = ((l_237 != (g_239 = l_238)) == p_25.f3);

                        ;
                        (**l_214) = (*g_109);
                    }
                }

                ;
                ;
                ;
            }
            else
            {
                short **l_242 = (void*)0;
                unsigned *l_249 = (void*)0;
                (*l_214) = l_249;

                ;
                (*g_230) = l_250;

                ;
                return p_25.f0;
            }

            ;
            ;
            ;
            (*l_214) = &g_69;

            ;
        }
        else
        {
            unsigned short l_254 = 0xB509L;
            int *l_263 = &l_185;
            struct S0 l_273 = {3UL,4294967287UL,0L,4294967294UL,0x1FB96F88L,0x58L};
            if (func_33((**g_230)))
            {
                unsigned l_258 = 1UL;
                unsigned ***l_260 = (void*)0;
                (**l_214) = ((g_38.f0 != p_25.f2) && 0x2D9FL);
                (**g_230) = l_251;
                (*g_231) = func_41((safe_mod_func_uint16_t_u_u(l_254, (safe_unary_minus_func_uint8_t_u((((*g_262) = ((safe_mul_func_uint32_t_u_u(((*l_215) = ((*g_57) = l_258)), ((g_261 = l_259) != &l_203))) & (*g_262))) | ((((*g_194) ^ l_254) < 1L) != l_254)))))), p_25.f5);

                ;
                (*l_214) = l_263;

                ;
            }
            else
            {
                for (g_111.f0 = 0; (g_111.f0 != 17); ++g_111.f0)
                {
                    (*l_213) = (void*)0;

                    ;
                    (*l_213) = &g_69;

                    ;
                    (*l_215) = (*g_109);
                }

                ;
                (**g_230) = l_251;
                (*l_214) = ((*l_213) = &g_69);

                ;
                (*l_263) = (safe_div_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((*g_262), func_33(l_251))), p_25.f5)), p_25.f4));

                ;
            }

            ;
            ;
            ;
            (*g_231) = (*g_231);
            if (((-1L) & (*l_263)))
            {
                return p_25.f4;
            }
            else
            {
                int *l_272 = (void*)0;
                unsigned ***l_279 = &g_261;
                unsigned ****l_278 = &l_279;
                (*l_215) = ((&g_69 != l_272) & (*l_215));
                (*l_214) = &l_185;

                ;
                l_263 = func_71(p_25.f1, p_25.f5, p_25.f2, l_263);

                ;
                ;
            }

            ;
            ;
            ;
            (**l_214) = (*l_263);
        }


        ;
        ;
        ;
        if ((g_16 == g_111.f5))
        {
            unsigned short l_281 = 0x300BL;
            int l_294 = 1L;
            int l_302 = 0xB76A276CL;
            unsigned short *l_338 = &l_248;
            if ((!(**l_214)))
            {
                unsigned short *l_282 = (void*)0;
                unsigned short *l_283 = (void*)0;
                unsigned short *l_284 = &l_248;
                unsigned *l_285 = (void*)0;
                int l_299 = (-1L);
                (*l_213) = l_285;

                ;
                for (l_251.f1 = 8; (l_251.f1 != 19); l_251.f1 = safe_add_func_int8_t_s_s(l_251.f1, 3))
                {
                    int l_293 = 1L;
                    l_294 = (l_212 == ((**g_239) > ((p_25.f1 ^ l_212) < (((safe_unary_minus_func_uint16_t_u(0x19FEL)) < (safe_mod_func_int16_t_s_s(((l_293 != (((-2L) <= 65534UL) < 0x2388C2A8L)) ^ g_69), l_293))) >= 1UL))));
                    (**l_214) = g_49.f1;
                    if (g_38.f0)
                        continue;
                }
                if (p_25.f0)
                {
                    unsigned short l_305 = 65528UL;
                    short ***l_308 = &g_157;
                    int l_313 = 0xC7011D92L;
                    unsigned ****l_317 = &l_280;
                    l_294 = (safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((l_299 | ((safe_mod_func_int32_t_s_s(l_302, (safe_lshift_func_uint16_t_u_u(l_305, (safe_add_func_int8_t_s_s(((void*)0 != l_308), (p_25.f3 && (safe_add_func_uint32_t_u_u(p_25.f0, ((safe_mod_func_int16_t_s_s(0x16A1L, ((l_313 = 0x7DF4CC50L) || 1L))) >= l_305)))))))))) > l_305)), (*g_57))), (-3L)));
                    (*l_214) = &g_69;

                    ;
                    if ((safe_rshift_func_int8_t_s_u(l_316, (!(0x1F390613L | (**l_214))))))
                    {
                        (**l_214) = (-1L);
                    }
                    else
                    {
                        (*l_215) = (l_317 != (void*)0);
                        (*l_213) = func_71(p_25.f3, ((safe_mod_func_int32_t_s_s(((l_313 = p_25.f0) > (l_320 == ((*l_308) = l_320))), p_25.f3)) == (g_16 ^ ((safe_mod_func_uint8_t_u_u(g_111.f2, l_299)) || 0x55L))), g_221, g_323);

                        ;
                    }

                    ;
                    return (*l_215);


                }
                else
                {
                    for (l_302 = 8; (l_302 != 13); l_302 = safe_add_func_int32_t_s_s(l_302, 8))
                    {
                        if (p_25.f4)
                            break;
                    }
                }
            }
            else
            {
                (*g_231) = func_35((*g_230));
            }
            (*l_215) = ((((((*l_338) = (safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((p_25.f1 = (safe_div_func_int32_t_s_s((l_212 || l_245), (safe_rshift_func_uint8_t_u_s(g_69, 0))))) & ((((l_259 == &g_262) >= ((((safe_sub_func_uint8_t_u_u(l_245, p_25.f2)) || 0xBC91L) <= p_25.f3) | g_49.f4)) >= (**g_239)) & l_294)), p_25.f2)), p_25.f0)), 8))) | l_245) <= (**g_239)) & g_38.f1) >= g_339);
        }
        else
        {
            unsigned l_346 = 0xD61A9F09L;
            int *l_347 = &g_69;
            unsigned **l_350 = &l_184;
            short **l_369 = &g_121;
            (*l_213) = (void*)0;

            ;
            l_347 = func_71(((safe_sub_func_uint32_t_u_u((p_25.f5 & 0xF5D36CBCL), (*g_57))) <= (safe_mod_func_uint8_t_u_u(246UL, (((void*)0 != &l_280) || p_25.f4)))), (safe_rshift_func_uint16_t_u_u((!l_346), l_346)), g_49.f4, &l_346);

            ;
            ;
            (*g_230) = (void*)0;

            ;
            if ((safe_lshift_func_uint8_t_u_s(p_25.f5, 5)))
            {
                unsigned ***l_351 = &g_261;
                unsigned ***l_352 = (void*)0;
                unsigned ***l_353 = &l_350;
                (*l_214) = (void*)0;

                ;
                (*l_353) = ((*l_351) = l_350);

                ;
            }
            else
            {
                unsigned *l_360 = &g_38.f3;
                (*l_213) = (*l_213);
                (*l_37) = p_25;
                if (((*l_215) = 0xE8490D8DL))
                {
                    unsigned short ***l_367 = (void*)0;
                    unsigned short ***l_368 = &g_365;
                    if (p_25.f1)
                    {
                        return (***g_156);



                    }
                    else
                    {
                        char *l_356 = &g_357;
                        int l_359 = 3L;
                        (*l_214) = func_71((*g_121), (((p_25.f3 == (safe_mod_func_uint32_t_u_u(0UL, ((*l_215) = 9L)))) ^ (g_221 | (p_25.f3 <= (g_358 = ((*l_356) = ((**g_239) = p_25.f3)))))) & 0x0156L), l_359, l_360);

                        ;
                        ;
                        if (g_111.f5)
                            goto lbl_364;
                    }

                    ;
                    ;
lbl_364:
                    for (g_38.f2 = (-25); (g_38.f2 >= (-6)); ++g_38.f2)
                    {
                        unsigned short l_363 = 0xEFC2L;
                        if (p_25.f0)
                            break;
                        (**l_214) = l_363;
                        if (p_25.f5)
                            break;
                    }
                    (*l_368) = g_365;
                    (*l_347) = l_198;
                }
                else
                {
                    (*l_215) = (0x6212C045L && ((*g_156) != l_369));
                }

                ;
                ;
            }

            ;
            ;
            ;
        }


        ;
        ;
        ;
    }
    else
    {
        int *l_370 = &g_69;
        int **l_371 = (void*)0;
        int **l_372 = &l_370;
        int ***l_374 = &l_373;
        l_370 = &g_69;
        (*l_372) = &l_185;

        ;
        (*l_374) = l_373;
    }


    ;
    ;
    ;
    if (((safe_rshift_func_int16_t_s_u((l_377 < (+p_25.f2)), 10)) > ((safe_lshift_func_uint16_t_u_u(0UL, 3)) | ((safe_rshift_func_int8_t_s_u(0L, 6)) > l_377))))
    {
        unsigned l_382 = 0x11E9C1D8L;
        (*l_37) = func_41((**g_157), (((l_382 ^ ((g_49.f2 ^ ((g_358 < p_25.f3) & 1UL)) & 4294967293UL)) == (l_382 <= p_25.f2)) || p_25.f5));
        (*g_230) = func_31(g_38.f5);


        ;
    }
    else
    {
        unsigned short *l_383 = (void*)0;
        unsigned short *l_384 = &g_385;
        short ***l_389 = (void*)0;
        unsigned l_390 = 0xDDB035E9L;
        int *l_391 = (void*)0;
        g_69 = (((-1L) >= ((((*l_384) = (*g_366)) != (((((void*)0 != l_386) && (*g_194)) <= p_25.f1) < ((safe_mod_func_int32_t_s_s(((l_389 == &g_157) && (~(**g_365))), p_25.f5)) | g_38.f1))) | 0x2DE6L)) != l_390);
    }

    ;
    (*l_373) = &g_69;

    ;
    return (**g_157);



}







static struct S0 * func_31(unsigned char p_32)
{
    short **l_147 = &g_121;
    short ***l_148 = &l_147;
    int l_149 = 0L;
    int **l_181 = &g_109;
    struct S0 *l_182 = &g_38;
    (*l_148) = l_147;
    if (l_149)
    {
        char l_154 = 8L;
        short *l_166 = &g_38.f2;
        unsigned **l_170 = (void*)0;
        unsigned ***l_169 = &l_170;
        struct S0 *l_175 = (void*)0;
        struct S0 *l_177 = &g_49;
        if (p_32)
        {
            for (l_149 = 0; (l_149 == (-13)); l_149--)
            {
                int *l_152 = (void*)0;
                int **l_153 = &l_152;
                (*l_153) = (g_109 = l_152);

                ;
                (*l_153) = (void*)0;
                if (l_154)
                    continue;
                if (g_111.f5)
                    continue;
            }
        }
        else
        {
            char *l_155 = &l_154;
            int *l_158 = &l_149;
            int *l_159 = &g_69;
            (*l_159) = ((*l_158) = (((*l_155) = 0x7DL) != (g_156 == &l_147)));
            (*l_158) = p_32;
        }
        for (g_111.f5 = 0; (g_111.f5 != 42); ++g_111.f5)
        {
            short *l_165 = (void*)0;
            short **l_164 = &l_165;
            unsigned **l_168 = &g_57;
            unsigned ***l_167 = &l_168;
            int **l_176 = &g_109;
            (*l_176) = func_71((*g_121), (0x545DL > (safe_rshift_func_int16_t_s_s(p_32, ((((*l_164) = (*g_157)) != (l_166 = l_166)) | (l_167 != l_169))))), (safe_mod_func_int8_t_s_s((p_32 <= (l_175 == &g_111)), p_32)), g_57);

            ;
            ;
        }


        (*l_177) = g_49;
    }
    else
    {
        short l_178 = (-8L);
        int *l_179 = &l_149;
        int **l_180 = &g_109;
        (*l_180) = l_179;

        ;
        return &g_49;



    }


    (*l_181) = (void*)0;

    ;
    return l_182;


}







static unsigned char func_33(struct S0 p_34)
{
    struct S0 *l_143 = (void*)0;
    struct S0 *l_144 = &g_49;
    int **l_146 = &g_109;
    (*l_144) = func_35(&p_34);
    if (g_38.f1)
        goto lbl_145;
lbl_145:
    (*g_109) = (*g_109);
    (*l_146) = (void*)0;

    ;
    return g_111.f3;
}







static struct S0 func_35(struct S0 * p_36)
{
    int l_47 = 0xC76E8D2CL;
    int l_53 = 1L;
    unsigned *l_83 = &g_49.f4;
    short *l_122 = &g_38.f2;
    if (g_38.f2)
    {
        struct S0 *l_48 = &g_49;
        int l_52 = 0xBCDCEC45L;
        int l_62 = 1L;
        for (g_38.f3 = 0; (g_38.f3 == 57); g_38.f3 = safe_add_func_int32_t_s_s(g_38.f3, 8))
        {
            unsigned l_46 = 4294967295UL;
            unsigned *l_54 = &g_38.f4;
            unsigned **l_58 = (void*)0;
            unsigned *l_60 = (void*)0;
            unsigned **l_59 = &l_60;
            int l_61 = 0xC39B9878L;
            struct S0 *l_70 = &g_49;
            short *l_82 = &g_38.f2;
            int **l_117 = &g_109;
            (*l_70) = func_41((((l_47 = (safe_rshift_func_uint16_t_u_u(l_46, 12))) & (p_36 != (l_48 = p_36))) & ((l_61 = (((safe_sub_func_int16_t_s_s(l_52, (0x24B34D7AL <= ((*l_54) = (l_53 >= g_38.f1))))) <= (safe_lshift_func_uint8_t_u_u((g_57 == ((*l_59) = g_57)), 1))) == (*g_57))) <= g_49.f4)), l_62);

            ;
            (*l_117) = func_71((safe_sub_func_int32_t_s_s(g_38.f3, (l_47 ^ g_38.f1))), l_53, (((*g_57) = (safe_lshift_func_uint16_t_u_s((l_46 < 0x902BA9A6L), ((*l_82) = (((l_62 != (safe_lshift_func_int8_t_s_u(g_69, 0))) || (((-10L) || 4UL) == l_46)) == g_38.f5))))) < l_52), l_83);

            ;
            (*l_117) = &g_69;

            ;
            if (l_62)
                continue;
        }


    }
    else
    {
        int **l_118 = &g_109;
        unsigned *l_127 = &g_38.f3;
        unsigned short l_128 = 8UL;
        (*l_118) = &l_53;

        ;
        if (((**l_118) ^ (((*l_122) = ((((safe_div_func_uint8_t_u_u(l_47, (((((g_121 == l_122) != (*g_57)) >= g_38.f2) ^ (safe_sub_func_int8_t_s_s(((((*l_127) = ((*l_83) = (g_111.f2 == (!(safe_add_func_int16_t_s_s((-1L), 0x5E97L)))))) ^ (*g_57)) != l_53), 0x62L))) && (*g_121)))) != g_16) < g_111.f5) != (**l_118))) | (**l_118))))
        {
            (*l_118) = (void*)0;

            ;
        }
        else
        {
            int l_141 = 0xB49D4ABAL;
            unsigned *l_142 = &g_111.f4;
            (*g_109) = l_128;
            (*l_118) = func_71((*g_121), (safe_rshift_func_uint8_t_u_u(255UL, (g_49.f0 > (((((**l_118) ^ (safe_mod_func_uint32_t_u_u((**l_118), (*g_57)))) > (((safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((l_53 & (safe_lshift_func_uint8_t_u_s((**l_118), 6))), 2UL)), (*g_109))) != l_141) != 0x0D51L)) <= l_53) != 7UL)))), l_141, l_142);

            ;
        }

        ;
        (*l_118) = &g_69;

        ;
        (*l_118) = &g_69;
    }
    return g_38;
}







static struct S0 func_41(short p_42, char p_43)
{
    unsigned l_67 = 0x2CFCCFF5L;
    int *l_68 = &g_69;
    (*l_68) = (safe_add_func_int16_t_s_s(g_38.f5, (safe_div_func_int32_t_s_s(l_67, l_67))));
    return g_38;
}







static int * func_71(short p_72, char p_73, unsigned short p_74, unsigned * p_75)
{
    int l_86 = 0L;
    unsigned char l_87 = 0x55L;
    int *l_89 = &l_86;
    unsigned char l_95 = 249UL;
    int *l_108 = &g_69;
    int l_110 = 0xED16D00EL;
    int *l_116 = &l_86;
    for (g_38.f2 = (-10); (g_38.f2 == 17); g_38.f2++)
    {
        g_69 = l_86;
    }
    if (g_38.f0)
    {
        struct S0 l_88 = {0x04L,4294967295UL,4L,4294967295UL,4294967290UL,0xDDL};
        l_88 = func_41(g_16, l_87);
        l_89 = (void*)0;

        ;
    }
    else
    {
        (*l_89) = (safe_lshift_func_uint16_t_u_s(p_73, 1));
    }

    ;
    if (g_49.f5)
    {
        int **l_92 = &l_89;
        int **l_98 = (void*)0;
        int *l_100 = &l_86;
        int **l_99 = &l_100;
        int *l_101 = &g_69;
        (*l_92) = &g_69;

        ;
        if (((*l_101) = ((0xA124L != ((safe_add_func_uint8_t_u_u(l_95, (~(~(&p_75 == &g_57))))) & (safe_sub_func_uint8_t_u_u((((*l_92) = p_75) == ((*l_99) = &g_69)), ((&g_69 != &g_69) < 0xB0L))))) ^ 0x09A6D6C5L)))
        {
            (**l_92) = ((*l_101) = g_38.f5);
        }
        else
        {
            unsigned ***l_103 = (void*)0;
            unsigned **l_105 = &g_57;
            unsigned ***l_104 = &l_105;
            (**l_92) = (safe_unary_minus_func_int16_t_s(p_74));
            (*l_104) = (void*)0;

            ;
        }


        ;
        for (l_87 = 4; (l_87 == 41); l_87 = safe_add_func_int8_t_s_s(l_87, 1))
        {
            return &g_69;


        }
        (**l_92) = ((*l_100) = p_73);
    }
    else
    {
        g_109 = l_108;

        ;
        (*g_109) = (*g_109);
        if (l_110)
        {
            int **l_112 = &g_109;
            g_49 = g_111;
            (*l_112) = p_75;


        }
        else
        {
            int **l_113 = &g_109;
            (*l_113) = (void*)0;

            ;
            for (g_111.f1 = 13; (g_111.f1 == 3); g_111.f1--)
            {
                return p_75;


            }
        }


    }



    return &g_69;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_38.f0, "g_38.f0", print_hash_value);
    transparent_crc(g_38.f1, "g_38.f1", print_hash_value);
    transparent_crc(g_38.f2, "g_38.f2", print_hash_value);
    transparent_crc(g_38.f3, "g_38.f3", print_hash_value);
    transparent_crc(g_38.f4, "g_38.f4", print_hash_value);
    transparent_crc(g_38.f5, "g_38.f5", print_hash_value);
    transparent_crc(g_49.f0, "g_49.f0", print_hash_value);
    transparent_crc(g_49.f1, "g_49.f1", print_hash_value);
    transparent_crc(g_49.f2, "g_49.f2", print_hash_value);
    transparent_crc(g_49.f3, "g_49.f3", print_hash_value);
    transparent_crc(g_49.f4, "g_49.f4", print_hash_value);
    transparent_crc(g_49.f5, "g_49.f5", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_111.f0, "g_111.f0", print_hash_value);
    transparent_crc(g_111.f1, "g_111.f1", print_hash_value);
    transparent_crc(g_111.f2, "g_111.f2", print_hash_value);
    transparent_crc(g_111.f3, "g_111.f3", print_hash_value);
    transparent_crc(g_111.f4, "g_111.f4", print_hash_value);
    transparent_crc(g_111.f5, "g_111.f5", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    transparent_crc(g_395, "g_395", print_hash_value);
    transparent_crc(g_490, "g_490", print_hash_value);
    transparent_crc(g_502, "g_502", print_hash_value);
    transparent_crc(g_507, "g_507", print_hash_value);
    transparent_crc(g_516, "g_516", print_hash_value);
    transparent_crc(g_560, "g_560", print_hash_value);
    transparent_crc(g_562, "g_562", print_hash_value);
    transparent_crc(g_573, "g_573", print_hash_value);
    transparent_crc(g_628, "g_628", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
