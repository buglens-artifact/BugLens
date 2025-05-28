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



static short g_30 = 0L;
static short g_37 = 0x617AL;
static short g_44 = 0L;
static int g_64 = 0L;
static unsigned short g_73 = 65530UL;
static char g_75 = (-10L);
static char g_77 = 0L;
static unsigned short g_79 = 65528UL;
static unsigned char g_84 = 0x86L;
static int g_86 = 0L;
static int g_99 = 0x74473CA5L;
static int g_101 = (-1L);
static unsigned g_126 = 4294967290UL;
static volatile char g_137 = (-1L);
static volatile char *g_136 = &g_137;
static volatile char **g_135 = &g_136;
static int *g_147 = &g_86;
static unsigned *g_184 = &g_126;
static unsigned **g_183 = &g_184;
static int *g_205 = &g_64;
static unsigned char **g_226 = (void*)0;
static unsigned short g_240 = 0UL;
static char *g_315 = (void*)0;
static char **g_314 = &g_315;
static char ***g_313 = &g_314;
static unsigned short g_389 = 0x28D2L;
static unsigned short g_397 = 0xBA76L;
static short g_400 = (-2L);
static unsigned char g_455 = 8UL;
static unsigned char *g_472 = &g_84;
static unsigned g_477 = 4294967295UL;
static unsigned g_480 = 4294967295UL;
static int ***g_488 = (void*)0;
static int ****g_487 = &g_488;
static char ****g_540 = &g_313;
static char *****g_539 = &g_540;



static short func_1(void);
static int func_2(unsigned short p_3, unsigned p_4, int p_5, unsigned p_6);
static unsigned char func_9(unsigned char p_10, short p_11, int p_12, unsigned short p_13, short p_14);
static unsigned char func_15(unsigned p_16, unsigned short p_17, unsigned p_18, short p_19);
static int func_24(unsigned char p_25, unsigned char p_26, int p_27, unsigned short p_28, int p_29);
static int func_31(unsigned p_32, unsigned short p_33);
static int func_38(char p_39);
static int * func_40(unsigned short p_41, int * p_42, short p_43);
static short func_51(int p_52, int p_53, int * p_54);
static int * func_59(int * p_60, char p_61, int * p_62);
static short func_1(void)
{
    char l_34 = (-1L);
    unsigned *l_478 = (void*)0;
    unsigned *l_479 = &g_480;
    int l_558 = (-1L);
    unsigned short *l_559 = &g_389;
    short *l_560 = &g_30;
    int l_561 = (-4L);
    char *****l_567 = &g_540;
    unsigned *l_570 = &g_477;
    short *l_572 = &g_400;
    short **l_571 = &l_572;
    int l_575 = 0x700B228CL;
    short l_576 = 0x47B8L;
    int *l_577 = &g_64;
    l_558 = func_2(((((((*l_560) = (((*l_559) = ((((-5L) >= 0x15CBCEF0L) >= (safe_mod_func_uint8_t_u_u(func_9(func_15(((*l_479) = ((safe_add_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((func_24(g_30, g_30, func_31(((-1L) <= 4294967286UL), l_34), (l_34 <= 0x5193FB3AL), g_30) <= g_477), l_34)) != g_477), g_455)) != l_34)), l_34, l_34, l_34), g_477, l_34, l_34, g_477), l_34))) || l_558)) > g_477)) || g_64) ^ l_558) ^ 0L) != l_558), g_477, l_34, l_561);

    ;
    ;
    (*g_147) = (((*l_560) = (l_567 != l_567)) < func_9(((*g_472) = func_2((((((*g_183) != (l_570 = l_479)) != (l_560 != ((*l_571) = &g_44))) == func_9(l_561, (safe_add_func_int32_t_s_s(0xFAD16AADL, (((*l_559) = func_9(l_561, l_558, l_561, l_34, l_34)) ^ l_575))), l_575, l_575, g_400)) > (-1L)), g_37, l_561, l_576)), g_37, g_480, g_73, g_480));

    ;
    ;
    l_577 = &l_558;

    ;
    return g_400;
}







static int func_2(unsigned short p_3, unsigned p_4, int p_5, unsigned p_6)
{
    int *l_562 = &g_86;
    int **l_563 = &g_205;
    (*l_563) = func_59(&g_101, p_6, l_562);

    ;
    for (g_455 = (-7); (g_455 > 39); g_455++)
    {
        int *l_566 = &g_99;
        (*l_563) = l_566;

        ;
    }

    ;
    return (*g_147);
}







static unsigned char func_9(unsigned char p_10, short p_11, int p_12, unsigned short p_13, short p_14)
{
    unsigned l_545 = 0x996D7370L;
    int **l_548 = (void*)0;
    unsigned char *l_557 = &g_84;
    (*g_147) = ((((((~(!(safe_rshift_func_uint8_t_u_u(l_545, (safe_sub_func_int8_t_s_s(((void*)0 != l_548), 0x55L)))))) > 5L) & (safe_add_func_int16_t_s_s((safe_div_func_uint8_t_u_u(0x16L, ((*g_472) = (safe_lshift_func_int8_t_s_s((g_400 & (safe_add_func_uint8_t_u_u((2L | ((l_557 == &g_84) | p_12)), p_11))), 5))))), 0x3496L))) != p_12) | 0x0C0AL) < (*g_136));
    return (*g_472);
}







static unsigned char func_15(unsigned p_16, unsigned short p_17, unsigned p_18, short p_19)
{
    int **l_481 = &g_205;
    char ****l_484 = &g_313;
    unsigned *l_503 = &g_480;
    char ****l_542 = &g_313;
    (*l_481) = &g_101;

    ;
    (*l_481) = func_59(((*l_481) = (void*)0), (*g_136), &g_101);

    ;
    if ((safe_add_func_int8_t_s_s((l_484 != l_484), p_16)))
    {
        int *****l_489 = &g_487;
        int ****l_490 = &g_488;
        int ****l_492 = &g_488;
        int *****l_491 = &l_492;
        short l_493 = 1L;
        unsigned short l_496 = 0x6CD0L;
        (*l_481) = (void*)0;

        ;
        (*g_147) = ((safe_sub_func_int32_t_s_s(((void*)0 != &g_84), ((*g_184) = (((*l_489) = g_487) != ((*l_491) = (l_490 = &g_488)))))) > (!((p_18 > (safe_div_func_int16_t_s_s(p_16, g_44))) < l_496)));
        (*g_147) = ((((safe_sub_func_int32_t_s_s(func_38(p_16), 0x3A5D2AD8L)) == 0x4EC45E47L) > (safe_div_func_int16_t_s_s(p_17, g_480))) == g_477);
    }
    else
    {
        unsigned short l_504 = 0UL;
        int l_527 = 0L;
        int *l_529 = &g_101;
        char *l_536 = &g_77;
        for (g_64 = (-10); (g_64 <= (-2)); g_64 = safe_add_func_uint8_t_u_u(g_64, 2))
        {
            char **l_514 = &g_315;
            int l_515 = 0x94A1633EL;
            if ((+p_19))
            {
                if (p_17)
                    break;
                l_504 = ((((void*)0 == l_503) < (*g_136)) ^ 0xEFL);
            }
            else
            {
                short l_509 = 0x28C6L;
                short *l_516 = &g_44;
                unsigned char *l_517 = &g_455;
                int l_524 = 0xF6C8F9E4L;
                if ((((*l_517) = (((safe_mod_func_uint16_t_u_u((((p_17 || p_18) ^ ((*g_472) = (p_18 <= (((safe_sub_func_uint16_t_u_u(l_509, (((*l_516) = ((((safe_div_func_int8_t_s_s(p_18, 0xCEL)) && (safe_div_func_int8_t_s_s(((*g_313) == l_514), 0xFFL))) <= l_515) == g_37)) && 0UL))) ^ 0xD28EL) > p_19)))) != 0xEDE2D176L), p_19)) == l_509) < 0xB8D9L)) | p_18))
                {
                    for (g_126 = 0; (g_126 != 26); g_126 = safe_add_func_uint8_t_u_u(g_126, 2))
                    {
                        int *l_520 = &l_515;
                        (*l_520) = ((void*)0 != &p_17);
                    }
                }
                else
                {
                    int l_521 = 0x0099B8A5L;
                    char *l_522 = &g_75;
                    unsigned l_523 = 0UL;
                    (*l_481) = func_59(&g_101, l_521, func_59(((*l_481) = &l_515), (l_523 = ((*l_522) = (l_521 == 0x432DFEADL))), &l_521));

                    ;
                    if (l_523)
                        break;
                    l_524 = p_18;
                    for (g_397 = 0; (g_397 < 20); g_397++)
                    {
                        int *l_528 = &g_86;
                        unsigned short *l_530 = &g_79;
                        l_527 = (*g_205);
                        (*l_528) = l_515;
                        (*l_481) = func_40(l_509, l_529, g_77);

                        ;
                        (*g_205) = ((8UL < ((*l_530) = p_18)) | (**g_183));
                    }

                    ;
                }

                ;
            }

            ;
            (*l_481) = (void*)0;

            ;
            if (((*g_472) <= (*g_472)))
            {
                for (g_75 = 6; (g_75 > (-15)); g_75--)
                {
                    char l_533 = 0x88L;
                    int *l_537 = &g_86;
                    l_533 = p_18;
                    (*l_481) = func_59(&l_515, (0x7538L > (safe_add_func_int8_t_s_s((p_17 != ((&g_135 != ((*l_484) = &g_314)) && (((*g_487) != (*g_487)) & (*g_147)))), (l_536 == l_536)))), l_537);

                    ;
                }

                ;
            }
            else
            {
                char *****l_538 = &l_484;
                unsigned char l_541 = 9UL;
                l_529 = &l_527;

                ;
                l_515 = (p_16 | ((*g_184) = (l_538 == g_539)));
                (*l_529) = (p_17 != l_541);
                (*l_529) = (l_542 != l_542);
            }

            ;
        }

        ;
        ;
    }

    ;
    (*l_481) = func_59((*l_481), p_18, (*l_481));

    ;
    return (*g_472);
}







static int func_24(unsigned char p_25, unsigned char p_26, int p_27, unsigned short p_28, int p_29)
{
    int l_206 = 0x3F41E009L;
    int *l_232 = &g_64;
    unsigned l_249 = 0xD61E018DL;
    unsigned **l_309 = &g_184;
    char ***l_317 = &g_314;
    unsigned char ***l_355 = &g_226;
    unsigned l_363 = 1UL;
    if (((-10L) <= l_206))
    {
        unsigned short l_209 = 0xDD62L;
        unsigned short *l_210 = (void*)0;
        int *l_211 = &g_101;
        int **l_212 = &l_211;
        int l_217 = 0x1335F78AL;
        unsigned ***l_218 = &g_183;
        unsigned char *l_228 = (void*)0;
        unsigned char **l_227 = &l_228;
        unsigned short *l_239 = &g_79;
        unsigned l_241 = 0x404719F1L;
        int *l_242 = &g_99;
        (*l_212) = func_40((g_73 = (safe_div_func_int8_t_s_s(l_206, (l_209 || 6L)))), l_211, g_75);

        ;
        if ((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((*l_211), (((**l_212) != 0x5E8B2C41L) && l_217))), p_26)))
        {
            unsigned char *l_224 = &g_84;
            unsigned char **l_223 = &l_224;
            unsigned char ***l_225 = &l_223;
            unsigned short *l_231 = &g_73;
            (**l_212) = (((void*)0 != l_218) < ((l_206 ^ (**g_135)) == 0x6228L));
            (*l_211) = ((safe_mod_func_int32_t_s_s(((**l_212) ^ g_30), ((**g_135) && (0x6699BEB6L < p_28)))) && (safe_add_func_uint32_t_u_u((((*l_225) = l_223) != (l_227 = g_226)), ((safe_rshift_func_uint16_t_u_s((p_28 = ((*l_231) = (**l_212))), 6)) ^ l_206))));

            ;
            (*l_212) = func_59(l_232, (g_30 && 0xDDL), &g_86);

            ;
        }
        else
        {
            short l_233 = (-2L);
            int *l_234 = &l_217;
            p_29 = (*l_232);
            (*l_212) = func_40(p_27, func_59(func_59(func_59(func_40(g_30, &g_86, g_73), p_29, &g_99), (**g_135), &g_86), p_28, &g_86), l_233);
            (*l_212) = l_234;

            ;
        }

        ;
        ;
        (*l_232) = (((safe_add_func_uint16_t_u_u(((*l_239) = (((&p_26 == (void*)0) >= ((**g_183) != (-1L))) | (safe_rshift_func_int16_t_s_u(0x08E2L, 14)))), ((**l_212) != p_28))) != (g_240 == ((*l_242) = l_241))) < (*l_232));
    }
    else
    {
        unsigned short *l_260 = &g_73;
        int l_266 = (-10L);
        unsigned l_297 = 3UL;
        int **l_323 = &g_147;
        int ***l_322 = &l_323;
        char l_339 = 0L;
        for (g_126 = 12; (g_126 != 24); g_126 = safe_add_func_uint16_t_u_u(g_126, 7))
        {
            int *l_245 = &g_99;
            int **l_248 = &g_147;
            (*l_248) = func_59(l_245, (((+(safe_mod_func_uint16_t_u_u(((*g_184) ^ 2L), (*l_245)))) & 0x25E5L) && g_86), &g_99);

            ;
            l_249 = ((*g_205) = 0x96F66AD0L);
        }
        l_232 = l_232;
        for (p_29 = (-17); (p_29 > 27); p_29++)
        {
            int *l_252 = &g_86;
            unsigned char *l_258 = &g_84;
            unsigned char **l_257 = &l_258;
            unsigned short *l_261 = &g_240;
            int l_277 = 1L;
            int **l_305 = &g_147;
            int ***l_304 = &l_305;
            int *l_352 = &l_277;
            g_205 = l_252;

            ;
        }
        (*g_147) = (safe_lshift_func_uint8_t_u_s(((1UL < (*g_184)) ^ p_26), (**l_323)));
    }
    (*g_205) = (l_355 == (void*)0);
    (*l_232) = ((safe_mod_func_int32_t_s_s((0UL & p_25), 4294967295UL)) >= (safe_div_func_uint32_t_u_u((*l_232), (*l_232))));
    if (p_28)
    {
        unsigned ***l_360 = (void*)0;
        unsigned ***l_361 = &l_309;
        int **l_362 = &l_232;
        (*l_361) = (void*)0;

        ;
        g_147 = func_59(((*l_362) = &p_29), l_363, &g_101);

        ;
        ;
        (*l_362) = &g_86;

        ;
        (*l_232) = ((*g_147) = (p_25 <= p_29));
    }
    else
    {
        char l_370 = 8L;
        int ***l_373 = (void*)0;
        int l_420 = 0x2BDCCD84L;
        unsigned **l_423 = (void*)0;
        char l_424 = 0L;
        int l_468 = 0x9AE85249L;
        unsigned char *l_469 = (void*)0;
        unsigned char *l_471 = (void*)0;
        int *l_474 = &g_86;
        if ((*g_205))
        {
            short l_384 = 0L;
            int l_419 = 5L;
            int *l_446 = (void*)0;
            int **l_461 = &l_446;
            for (l_363 = 13; (l_363 >= 55); l_363 = safe_add_func_int32_t_s_s(l_363, 1))
            {
                int **l_375 = &g_205;
                int ***l_374 = &l_375;
                int ****l_376 = (void*)0;
                int ****l_377 = &l_374;
                if ((safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(((((l_370 >= (((l_373 == ((*l_377) = l_374)) != p_29) >= (p_25 >= (*l_232)))) <= ((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(p_26, l_384)), g_79)), 0x9544L)) ^ l_370)) == g_30) <= p_25), 11)) | 7UL), 255UL)))
                {
                    (***l_377) = (void*)0;

                    ;
                    p_29 = p_29;
                }
                else
                {
                    (*l_375) = (void*)0;

                    ;
                    (*g_147) = ((**g_183) != 0xA438E609L);
                }

                ;
                if (l_384)
                    continue;
                (*g_147) = (p_28 > (safe_unary_minus_func_uint32_t_u((safe_unary_minus_func_uint16_t_u(0xA35CL)))));
                if ((safe_mod_func_uint8_t_u_u(g_389, p_27)))
                {
                    int l_396 = 0xA369B165L;
                    short *l_398 = (void*)0;
                    short *l_399 = &g_400;
                    (***l_377) = (void*)0;
                    (***l_377) = func_59((**l_374), (safe_sub_func_int32_t_s_s((safe_div_func_int8_t_s_s(((-1L) | l_384), func_38(p_27))), ((*g_184) = 1UL))), func_40(g_37, &g_101, (safe_lshift_func_int16_t_s_s((((*l_399) = (g_397 = (l_396 != p_28))) != 6L), 3))));

                    ;
                    if (((**l_375) = (safe_mod_func_int32_t_s_s(p_26, p_26))))
                    {
                        if (l_384)
                            break;
                        (*l_375) = &p_29;

                        ;
                    }
                    else
                    {
                        (*l_375) = &g_101;

                        ;
                        (****l_377) = p_25;
                    }

                    ;
                }
                else
                {
                    short *l_413 = &g_30;
                    short **l_414 = &l_413;
                    short *l_415 = (void*)0;
                    char *l_418 = &g_77;
                    int l_445 = 9L;
                    if (func_38(((*l_418) = (safe_sub_func_uint32_t_u_u((safe_div_func_uint32_t_u_u(((safe_unary_minus_func_int32_t_s((safe_unary_minus_func_int32_t_s(((g_86 | (0xB7L > ((safe_lshift_func_int16_t_s_u(p_25, g_79)) || (&g_400 == ((*l_414) = l_413))))) >= 4294967295UL))))) ^ (g_400 = (-1L))), (safe_lshift_func_uint8_t_u_u(g_126, 4)))), (**g_183))))))
                    {
                        int *l_421 = &l_420;
                        int *l_422 = &g_64;
                        unsigned short *l_432 = (void*)0;
                        unsigned short *l_433 = &g_240;
                        char *****l_442 = (void*)0;
                        char ****l_444 = &l_317;
                        char *****l_443 = &l_444;
                        (*l_422) = func_51(l_419, ((*l_421) = (p_27 && l_420)), l_422);
                        (*g_147) = ((l_423 == &g_184) & (!l_424));
                        (*g_147) = (safe_add_func_uint8_t_u_u(p_27, ((void*)0 != g_147)));
                        l_446 = func_40((p_28 = (safe_div_func_int16_t_s_s(((**l_414) = (safe_sub_func_int16_t_s_s(((0x0A3BL | 0x62BAL) | (((((p_28 == (safe_unary_minus_func_uint16_t_u(((*l_433) = g_86)))) < (safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s((g_37 = ((func_51(p_27, (l_384 != (safe_lshift_func_uint16_t_u_u((((*l_443) = &g_313) != (void*)0), 9))), l_421) == p_25) || 2L)), l_384)), p_25)), (*l_422)))) > 0UL) && l_419) < l_445)), 0UL))), (*l_232)))), &g_99, p_26);

                        ;
                        ;
                    }
                    else
                    {
                        (*l_232) = ((*g_147) != (safe_sub_func_int8_t_s_s(p_25, (~l_445))));
                        return l_445;
                    }

                    ;
                    p_29 = func_38((safe_rshift_func_int16_t_s_s(p_29, (((safe_add_func_uint16_t_u_u((safe_div_func_int32_t_s_s((*g_147), (+(**g_183)))), (g_455 != ((*l_418) = (*l_446))))) < 254UL) <= (-1L)))));
                    if ((&g_313 == &l_317))
                    {
                        int l_456 = 0xFE649DB0L;
                        (**l_374) = func_59(func_59(func_59(&g_99, p_26, func_59(&g_86, p_26, (***l_377))), (**g_135), &l_445), p_26, &g_99);

                        ;
                        if (l_456)
                            continue;
                    }
                    else
                    {
                        if (p_27)
                            break;
                        g_147 = &g_99;

                        ;
                        (***l_377) = &p_29;

                        ;
                    }

                    ;
                    for (g_389 = 8; (g_389 != 6); --g_389)
                    {
                        int **l_459 = &g_147;
                        int *l_460 = &g_99;
                        g_205 = &p_29;

                        ;
                        (**l_374) = func_59((*l_375), p_27, l_446);

                        ;
                        (*l_459) = ((**l_374) = &g_99);

                        ;
                        ;
                        l_460 = (g_147 = &g_86);

                        ;
                        ;
                    }

                    ;
                }

                ;
            }

            ;
            ;
            ;
            (*l_461) = (void*)0;

            ;
        }
        else
        {
            int **l_462 = &g_147;
            (*l_462) = func_59(((*l_462) = &p_29), (*l_232), &g_86);

            ;
            for (g_75 = 0; (g_75 < 18); g_75 = safe_add_func_uint8_t_u_u(g_75, 9))
            {
                char *l_467 = &g_77;
            }
            return (*g_205);
        }

        ;
        ;
        g_147 = l_474;

        ;
        (*g_147) = ((*l_232) > ((safe_rshift_func_int16_t_s_u(0x7A9CL, 11)) || p_26));
    }

    ;
    ;
    ;
    return p_29;


}







static int func_31(unsigned p_32, unsigned short p_33)
{
    unsigned l_35 = 0x0D1C1D68L;
    int l_100 = (-3L);
    int l_115 = 0L;
    int *l_168 = &g_99;
    unsigned short *l_188 = &g_79;
    if (l_35)
    {
        int *l_36 = (void*)0;
        int *l_104 = (void*)0;
        int l_105 = 0xF2C4EE0CL;
        g_37 = 0L;
        l_100 = func_38(g_30);
        l_105 = ((g_101 >= func_38((safe_mod_func_uint8_t_u_u(p_32, l_100)))) <= l_35);
    }
    else
    {
        int *l_108 = &l_100;
        unsigned char *l_117 = &g_84;
        int **l_179 = (void*)0;
        int **l_180 = &l_108;
        for (g_64 = 0; (g_64 <= 1); g_64++)
        {
            int **l_109 = &l_108;
            int l_116 = (-3L);
            unsigned short *l_150 = &g_73;
            char *l_155 = &g_77;
            char **l_154 = &l_155;
            char l_157 = 0x42L;
            (*l_109) = func_59(l_108, g_73, l_108);

            ;
            if (p_32)
            {
                unsigned short l_132 = 0x41B8L;
                int l_134 = 0xE6A876A4L;
                for (l_100 = (-23); (l_100 >= 12); l_100 = safe_add_func_int32_t_s_s(l_100, 1))
                {
                    unsigned char **l_118 = (void*)0;
                    unsigned char **l_119 = &l_117;
                    int *l_120 = &l_116;
                    int l_124 = 1L;
                    if (g_101)
                    {
                        if (g_44)
                            break;
                        (*l_109) = &g_86;

                        ;
                    }
                    else
                    {
                        int *l_112 = &g_101;
                        (*l_112) = 6L;
                        l_115 = (g_79 > (251UL >= 0xBFL));
                        l_116 = ((*l_112) = p_32);
                        if (l_100)
                            break;
                    }
                    (*l_120) = (((*l_119) = l_117) != &g_84);
                    if (g_64)
                    {
                        (*l_109) = (*l_109);
                        (*l_120) = g_44;
                    }
                    else
                    {
                        int **l_121 = &l_120;
                        unsigned *l_125 = &g_126;
                        unsigned short *l_131 = &g_73;
                        char *l_133 = &g_75;
                        volatile char ***l_138 = &g_135;
                        (*l_121) = ((*l_109) = func_40(g_37, (*l_109), g_73));

                        ;
                        ;
                        l_134 = ((**l_121) = (safe_mod_func_int16_t_s_s((l_124 >= (((p_33 ^ 0x24EFL) <= ((*l_125) = 4UL)) <= ((safe_mod_func_uint8_t_u_u(0x83L, ((*l_133) = (((**l_119) = (safe_div_func_uint16_t_u_u(((*l_131) = 0xC627L), g_75))) && l_132)))) >= g_86))), g_77)));
                        (*l_138) = g_135;
                    }

                    ;
                }

                ;
            }
            else
            {
                short l_141 = 0x241AL;
                int *l_142 = &l_116;
                int *l_163 = &g_86;
                (*l_142) = (l_141 > ((**l_109) == ((l_100 <= l_35) == (!g_37))));
                for (l_116 = (-27); (l_116 > (-12)); ++l_116)
                {
                    int **l_145 = (void*)0;
                    int **l_146 = &l_142;
                    g_101 = g_75;
                    (*l_146) = ((*l_109) = func_40((*l_108), l_108, p_32));

                    ;
                    ;
                    if ((*l_142))
                        continue;
                    if (((*l_108) = p_32))
                    {
                        g_147 = ((*l_109) = func_59((*l_109), (**g_135), &l_115));

                        ;
                        ;
                        (*l_109) = &g_64;
                        return p_33;
                    }
                    else
                    {
                        unsigned l_151 = 1UL;
                        int ***l_156 = &l_145;
                        g_101 = ((*g_147) = (safe_lshift_func_int8_t_s_s((+((((l_115 | ((((void*)0 != l_150) != 0x29ECL) || p_32)) ^ l_151) ^ (p_32 | 0x2AL)) | 4294967295UL)), 3)));
                        l_157 = (((0UL & ((((((~((safe_add_func_int32_t_s_s(((**l_146) = (0xB9L || g_73)), ((void*)0 != l_154))) == l_151)) != (((*l_156) = &g_147) == &g_147)) > ((g_79 = (p_33 > p_32)) ^ g_77)) != 0x3B77CE63L) > (-10L)) > 0x3CL)) && g_30) != p_33);

                        ;
                        return p_32;
                    }
                }

                ;
                ;
                for (g_84 = 20; (g_84 == 27); g_84 = safe_add_func_int8_t_s_s(g_84, 3))
                {
                    int l_167 = 0x65D561E8L;
                    (*l_142) = 1L;
                    (*g_147) = (*g_147);
                    if ((*g_147))
                        break;
                    if ((safe_add_func_int32_t_s_s(p_32, 1UL)))
                    {
                        int *l_162 = &l_116;
                        (*l_109) = l_162;

                        ;
                        if ((*g_147))
                            continue;
                        (*l_109) = l_163;

                        ;
                    }
                    else
                    {
                        int *l_164 = &g_86;
                        l_168 = func_59(l_164, ((safe_sub_func_int32_t_s_s(p_32, (255UL >= l_167))) < p_33), &g_86);

                        ;
                    }
                }

                ;
            }

            ;
            (*l_109) = &g_101;

            ;
        }

        ;
        ;
        (*l_108) = (*l_168);
        (*l_180) = func_59(&l_100, ((safe_add_func_int16_t_s_s(((*l_168) || func_51((*g_147), ((g_75 & p_33) && (g_75 = ((safe_sub_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(p_33, (+(safe_mod_func_int16_t_s_s(g_84, p_33))))) <= (((safe_mod_func_int32_t_s_s(((p_33 | (*l_108)) == 65535UL), 1L)) || p_32) && g_126)), 0xF1D4L)) > 65535UL))), l_108)), g_99)) | p_32), &g_99);

        ;
    }

    ;
    for (p_33 = (-27); (p_33 != 31); ++p_33)
    {
        unsigned ***l_185 = &g_183;
        (*l_185) = g_183;
    }
    (*l_168) = func_38((**g_135));
    if (func_51((*g_147), g_126, func_59(func_59(&l_100, (safe_mod_func_uint32_t_u_u(0x40DE0EBDL, (((*l_188) = g_30) | (p_33 > (((g_84 = (((*l_168) ^ g_126) > 0xB883L)) >= p_33) <= p_32))))), &g_64), (*l_168), &g_86)))
    {
        int l_194 = 0xA6F27171L;
        for (l_100 = 3; (l_100 >= (-14)); --l_100)
        {
            unsigned short l_191 = 0UL;
            char *l_195 = (void*)0;
            char *l_196 = (void*)0;
            char *l_197 = &g_77;
            if (l_191)
                break;
            (*g_147) = (((*l_197) = (safe_lshift_func_uint16_t_u_u(l_194, 11))) == (*g_136));
        }
    }
    else
    {
        int **l_199 = (void*)0;
        int **l_200 = &g_147;
        (*l_200) = func_40((*l_168), func_59(&l_115, (((safe_unary_minus_func_uint16_t_u(g_79)) || (*l_168)) > (*g_184)), &l_100), p_33);
        for (g_84 = 0; (g_84 != 9); g_84++)
        {
            for (g_86 = 0; (g_86 < 3); g_86++)
            {
                g_205 = ((*l_200) = &g_86);

                ;
            }
        }

        ;
    }

    ;
    return g_137;
}







static int func_38(char p_39)
{
    int *l_63 = &g_64;
    unsigned l_81 = 9UL;
    unsigned char *l_82 = (void*)0;
    unsigned char *l_83 = &g_84;
    int *l_85 = &g_86;
    int **l_90 = (void*)0;
    int **l_91 = &l_63;
    int *l_98 = &g_99;
    (*l_91) = func_40(((g_44 = (-1L)) & ((*l_83) = (safe_mod_func_int8_t_s_s((safe_div_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(func_51(p_39, (safe_lshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(0xC4177FD8L, 0x6DE0D615L)), 15)), func_59(l_63, (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((void*)0 == l_63), 9)), (0x4D2C643DL & 1UL))), l_63)), g_37)) ^ 255UL), l_81)), g_30)))), l_85, g_30);

    ;
    (*l_63) = (safe_mul_func_uint32_t_u_u(func_51(g_75, (safe_sub_func_int8_t_s_s((p_39 & 0L), (safe_add_func_uint8_t_u_u(((*l_63) = g_84), p_39)))), &g_64), ((((*l_98) = p_39) || p_39) < 1L)));
    return g_79;
}







static int * func_40(unsigned short p_41, int * p_42, short p_43)
{
    int **l_87 = (void*)0;
    int *l_89 = &g_86;
    int **l_88 = &l_89;
    (*l_88) = &g_64;

    ;
    return &g_86;


}







static short func_51(int p_52, int p_53, int * p_54)
{
    int *l_71 = &g_64;
    int **l_70 = &l_71;
    unsigned short *l_72 = &g_73;
    char *l_74 = &g_75;
    char *l_76 = &g_77;
    int l_78 = 0xF746B325L;
    unsigned l_80 = 0xAA9320AFL;
    (*l_70) = (void*)0;

    ;
    g_79 = (l_78 = ((*p_54) = ((((*l_72) = (((*p_54) != g_37) <= g_30)) | g_64) | (((*l_76) = ((*l_74) = (-9L))) & g_37))));
    (*p_54) = (*p_54);
    (*p_54) = (*p_54);
    return l_80;
}







static int * func_59(int * p_60, char p_61, int * p_62)
{
    int *l_69 = &g_64;
    return l_69;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_389, "g_389", print_hash_value);
    transparent_crc(g_397, "g_397", print_hash_value);
    transparent_crc(g_400, "g_400", print_hash_value);
    transparent_crc(g_455, "g_455", print_hash_value);
    transparent_crc(g_477, "g_477", print_hash_value);
    transparent_crc(g_480, "g_480", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
