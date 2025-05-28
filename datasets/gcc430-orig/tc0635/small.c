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
   unsigned char f1;
   char * f2;
   unsigned f3 : 10;
   unsigned f4;
};


static char g_11 = 0x67L;
static char *g_10 = &g_11;
static unsigned char g_27 = 0x16L;
static unsigned g_42 = 0xFC167656L;
static unsigned *g_41 = &g_42;
static int g_49 = 2L;
static char g_57 = 0x2AL;
static union U0 g_58 = {0x2AD9236FL};
static char **g_89 = &g_10;
static char ***g_88 = &g_89;
static int g_107 = 0x8E54706CL;
static unsigned short g_127 = 4UL;
static int g_130 = 0L;
static int *g_129 = &g_130;
static int **g_128 = &g_129;
static unsigned short g_132 = 0xBEAEL;
static int g_133 = (-4L);
static unsigned *g_137 = &g_42;
static int g_189 = (-3L);
static unsigned short *g_226 = (void*)0;
static unsigned short **g_225 = &g_226;
static unsigned char *g_277 = &g_58.f1;
static unsigned char **g_276 = &g_277;
static unsigned g_332 = 0UL;
static union U0 g_364 = {0xBB2051E2L};
static int *g_440 = &g_107;
static int **g_439 = &g_440;
static int ***g_438 = &g_439;
static short g_464 = 0xE873L;
static short *g_523 = &g_464;
static short **g_522 = &g_523;
static union U0 *g_583 = &g_58;
static unsigned *g_603 = &g_42;



static unsigned char func_1(void);
static int func_2(unsigned short p_3);
static int func_4(unsigned p_5, short p_6, char * p_7, unsigned p_8, char * p_9);
static union U0 func_15(unsigned p_16);
static int * func_19(char * p_20);
static char * func_21(char * p_22, int p_23);
static char * func_24(unsigned char p_25);
static char func_28(char * p_29, unsigned short p_30, unsigned char p_31, unsigned * p_32, union U0 p_33);
static union U0 func_35(int p_36, unsigned * p_37, char * p_38, union U0 p_39, union U0 p_40);
static char * func_43(unsigned char p_44, union U0 p_45, char * p_46, int p_47);
static unsigned char func_1(void)
{
    short l_14 = (-6L);
    unsigned l_17 = 4294967293UL;
    unsigned *l_18 = &l_17;
    char *l_571 = &g_11;
    int l_616 = 0xF01BA293L;
    if (func_2((func_4(((void*)0 == g_10), g_11, ((safe_sub_func_uint32_t_u_u(((((*g_10) , (((((&g_11 == (void*)0) , (l_14 , func_15(((*l_18) = ((((!(l_14 , l_14)) && 0x16L) , l_17) || (-3L)))))) , l_17) , g_364.f3) && (-7L))) , l_571) != l_571), l_14)) , l_571), g_364.f0, l_571) , 0x937DL)))
    {
        int *l_611 = &g_130;
        int *l_612 = &g_189;
        (*g_128) = l_611;

        ;
        (*l_612) = ((*l_611) = 0xADDA3BFDL);
    }
    else
    {
        int *l_615 = &g_49;
        for (g_42 = 6; (g_42 > 4); g_42 = safe_sub_func_int8_t_s_s(g_42, 6))
        {
            (*g_128) = l_615;

            ;
            (*g_128) = (void*)0;

            ;
        }
        (*g_128) = l_615;

        ;
    }

        ;
        ;
    l_616 = ((*g_129) = (-2L));
    return l_14;
}







static int func_2(unsigned short p_3)
{
    char l_577 = 0x80L;
    union U0 l_584 = {1L};
    short ***l_593 = &g_522;
    int *l_597 = (void*)0;
    union U0 l_602 = {-2L};
    for (g_49 = 0; (g_49 < 9); g_49 = safe_add_func_int8_t_s_s(g_49, 2))
    {
        union U0 *l_576 = &g_58;
        union U0 **l_575 = &l_576;
        int *l_578 = &g_130;
        (*l_575) = &g_58;
        (*g_128) = (*g_128);
        (*l_578) = l_577;
    }
    for (g_132 = 0; (g_132 < 41); g_132++)
    {
        union U0 *l_581 = &g_364;
        union U0 **l_582 = &l_581;
        int *l_585 = &g_49;
        unsigned l_588 = 0UL;
        unsigned char **l_596 = &g_277;
        g_583 = ((*l_582) = l_581);

        ;
        (*l_585) = (((8UL || l_577) || g_189) == ((**g_522) , (l_584 , l_584.f3)));
        (*l_585) = (safe_mul_func_int8_t_s_s(func_28(&l_577, (l_588 = (*l_585)), ((safe_lshift_func_int8_t_s_u(((safe_sub_func_int8_t_s_s((***g_88), ((**g_276) = 1UL))) , ((*l_585) != 0x19L)), 6)) | 0x8DL), &g_42, (*g_583)), p_3));

                g_130 = ((p_3 , ((((&g_522 != ((*l_585) , l_593)) | p_3) ^ (safe_mod_func_int8_t_s_s((l_596 == ((l_577 , (l_584.f0 , p_3)) , (void*)0)), l_584.f0))) | (*l_585))) | (*g_523));
    }

    ;
    (*g_128) = l_597;
    if (((((*g_583) = (*g_583)) , p_3) > g_332))
    {
        union U0 l_604 = {0x2CA31A04L};
        char *l_605 = &g_57;
        int *l_606 = (void*)0;
        int *l_607 = (void*)0;
        int *l_608 = &g_189;
        int *l_609 = &g_49;
        (*l_609) = ((*l_608) = l_604.f1);
    }
    else
    {
        int *l_610 = &g_49;
        (*l_610) = p_3;
        g_49 = (*l_610);
    }

        return g_464;
}







static int func_4(unsigned p_5, short p_6, char * p_7, unsigned p_8, char * p_9)
{
    char *l_572 = &g_57;
    (*g_128) = func_19(l_572);
    (*g_128) = (void*)0;

    ;
    (*g_128) = (void*)0;
    return (*g_440);
}







static union U0 func_15(unsigned p_16)
{
    unsigned char *l_26 = &g_27;
    int *l_104 = (void*)0;
    int *l_105 = (void*)0;
    int *l_106 = &g_107;
    int *l_569 = &g_49;
    int **l_568 = &l_569;
    union U0 l_570 = {9L};
    (*l_568) = ((*g_128) = func_19(func_21(func_24(((*l_26) = p_16)), ((*l_106) = p_16))));

        ;
    ;
    return l_570;


    }







static int * func_19(char * p_20)
{
    short **l_547 = (void*)0;
    unsigned *l_552 = &g_42;
    unsigned l_559 = 0xAA673335L;
    for (g_57 = (-13); (g_57 != (-21)); --g_57)
    {
        unsigned *l_535 = (void*)0;
        unsigned **l_534 = &l_535;
        unsigned ***l_536 = &l_534;
        short *l_550 = &g_464;
        short **l_549 = &l_550;
        char *l_551 = &g_11;
        int l_556 = 0x2AC3BA0AL;
        (*l_536) = l_534;
        for (g_27 = 0; (g_27 != 30); g_27 = safe_add_func_uint16_t_u_u(g_27, 9))
        {
            int l_558 = 0L;
            for (g_332 = 26; (g_332 >= 60); g_332 = safe_add_func_uint32_t_u_u(g_332, 1))
            {
                short l_543 = 1L;
                int l_546 = (-7L);
                short **l_548 = (void*)0;
                union U0 l_553 = {0x00A08193L};
                unsigned short *l_554 = &g_132;
                unsigned *l_555 = &g_42;
                int *l_557 = (void*)0;
                int *l_564 = (void*)0;
                int *l_565 = &l_556;
                l_558 = (l_556 = func_28((*g_89), func_28((**g_88), (safe_rshift_func_uint8_t_u_u(l_543, 2)), (((safe_sub_func_uint16_t_u_u(1UL, ((*g_523) <= l_546))) ^ ((l_547 == (l_549 = l_548)) | ((*l_554) = func_28(l_551, l_546, l_543, l_552, l_553)))) && 0xEBL), l_552, g_364), l_543, l_555, l_553));

                ;
                if (l_559)
                    break;
                (*l_565) = (safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(func_28(func_43(l_558, g_58, (**g_88), (l_558 > (l_558 , (l_556 = (((*g_41) = (*g_137)) , 0x729B185FL))))), g_364.f4, l_559, g_440, g_58), l_558)), l_553.f1));
                (*g_128) = &g_130;

                ;
            }
        }

        ;
        (*g_128) = &l_556;

        ;
        (*g_128) = &l_556;
    }
    for (g_464 = 0; (g_464 == (-11)); g_464--)
    {
        (*g_128) = (void*)0;

        ;
        (*g_128) = ((***g_438) , (void*)0);
        (*g_128) = l_552;

        ;
    }
    return l_552;


}







static char * func_21(char * p_22, int p_23)
{
    int **l_108 = (void*)0;
    int **l_109 = (void*)0;
    int *l_111 = &g_49;
    int **l_110 = &l_111;
    char *l_123 = (void*)0;
    int l_124 = (-1L);
    unsigned char l_125 = 0x02L;
    unsigned short *l_126 = &g_127;
    unsigned short *l_131 = &g_132;
    union U0 **l_140 = (void*)0;
    unsigned char *l_206 = &g_58.f1;
    unsigned char **l_205 = &l_206;
    unsigned short l_315 = 0x0FD1L;
    short l_320 = (-8L);
    union U0 l_337 = {-7L};
    unsigned l_496 = 4294967295UL;
    (*l_110) = &g_49;
    if ((+(((((safe_rshift_func_int16_t_s_s((((***g_88) & (((*l_131) = ((safe_mul_func_uint16_t_u_u(65526UL, ((safe_unary_minus_func_int32_t_s((((g_11 , (safe_sub_func_int16_t_s_s(p_23, ((*l_126) = (g_58.f4 & (safe_mod_func_int16_t_s_s((-1L), (g_58 , ((safe_lshift_func_int8_t_s_s(((g_58.f1 != (func_28(l_123, g_58.f3, l_124, &g_42, g_58) >= l_125)) & 0x6303C50BL), (*p_22))) ^ p_23))))))))) , &l_111) != g_128))) != 0L))) || p_23)) < p_23)) < 0xF4A3L), g_130)) | p_23) || g_133) >= g_58.f3) >= g_107)))
    {
        unsigned short *l_134 = &g_132;
        unsigned short **l_135 = &l_131;
        int l_136 = 0xE9EF314FL;
        union U0 *l_142 = &g_58;
        union U0 **l_141 = &l_142;
        char l_156 = 0x62L;
        int *l_160 = &g_49;
        char *l_161 = &g_57;
        union U0 *l_165 = (void*)0;
        unsigned char **l_209 = &l_206;
        int *l_214 = &g_133;
        int **l_213 = &l_214;
        unsigned *l_218 = &g_42;
        unsigned l_274 = 0x2DA87B3AL;
        union U0 l_278 = {0x6563EE52L};
        unsigned l_345 = 0UL;
        int l_363 = 1L;
        if ((l_134 != ((*l_135) = &g_127)))
        {
            unsigned l_155 = 1UL;
            if (l_136)
            {
                unsigned **l_138 = (void*)0;
                unsigned **l_139 = &g_137;
                int l_157 = 0x4BBF6EB6L;
                union U0 l_158 = {8L};
                unsigned l_159 = 0x14404B11L;
                (**l_110) = func_28(func_24(p_23), ((**l_135) = g_107), g_130, ((*l_139) = g_137), g_58);
                l_141 = l_140;

                ;
                for (g_42 = 0; (g_42 == 60); ++g_42)
                {
                    unsigned *l_148 = (void*)0;
                    unsigned *l_149 = &g_58.f4;
                    unsigned **l_150 = &l_148;
                    for (g_130 = (-19); (g_130 <= 17); g_130 = safe_add_func_int8_t_s_s(g_130, 2))
                    {
                        return p_22;



                    }
                    (*l_110) = (*l_110);
                    if (((~((*l_149) = ((**g_89) == (safe_unary_minus_func_uint8_t_u(0x2EL))))) && (((*l_150) = l_111) != (((safe_sub_func_uint8_t_u_u(func_28(p_22, p_23, g_49, ((safe_add_func_uint16_t_u_u((l_155 < (l_156 < l_157)), g_49)) , l_111), l_158), l_159)) , p_23) , g_129))))
                    {
                        (*g_129) = 1L;
                    }
                    else
                    {
                        (*g_128) = &l_157;

                        ;
                        l_160 = l_149;

                        ;
                    }

                                        ;
                }

                ;
                ;
                (*g_129) = ((*l_111) = 0x88E352C4L);
            }
            else
            {
                int *l_164 = &l_136;
                (*l_141) = &g_58;
                if (((**l_110) || (*p_22)))
                {
                    return l_161;


                }
                else
                {
                    for (g_57 = 0; (g_57 > (-18)); --g_57)
                    {
                        l_160 = (void*)0;

                        ;
                        (*g_128) = l_164;

                        ;
                        (*l_110) = (*g_128);

                        ;
                    }

                    ;
                    ;
                    ;
                    (*l_110) = (*g_128);

                    ;
                    return l_123;



                }
            }


            ;
            ;
        }
        else
        {
            unsigned short l_186 = 8UL;
            unsigned char **l_208 = &l_206;
            int l_210 = (-1L);
            int *l_220 = &l_210;
            char *l_231 = (void*)0;
            union U0 l_250 = {0x030A4445L};
            if ((((*l_141) = l_165) != &g_58))
            {
                (*l_110) = (*g_128);

                ;
                for (g_130 = 20; (g_130 >= (-14)); g_130 = safe_sub_func_uint8_t_u_u(g_130, 6))
                {
                    unsigned *l_170 = &g_58.f4;
                    int l_183 = 0x97375CE8L;
                    (*l_160) = (safe_rshift_func_uint8_t_u_s(g_27, (((void*)0 == l_170) , (safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(p_23, (safe_sub_func_uint32_t_u_u(((*l_170) = ((safe_mod_func_uint32_t_u_u(p_23, (safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(p_23, (0x40A379BBL & ((p_23 <= ((+(g_58 , 0x265AL)) | 0L)) , 1L)))), 1L)))) , 4294967295UL)), l_183)))), p_23)))));

                                        (*l_110) = &l_183;

                    ;
                }


            }
            else
            {
                unsigned *l_200 = &g_42;
                int l_202 = 1L;
                unsigned char ***l_207 = &l_205;
                for (g_42 = 0; (g_42 >= 49); g_42 = safe_add_func_int8_t_s_s(g_42, 1))
                {
                    unsigned l_198 = 6UL;
                    union U0 l_199 = {0x0376A86DL};
                    int *l_201 = &g_58.f0;
                    l_202 = (l_186 , ((((safe_mod_func_int16_t_s_s(((*l_160) < g_127), g_189)) || (safe_sub_func_uint32_t_u_u(((((*l_201) = ((p_23 == p_23) <= (((safe_sub_func_int32_t_s_s(func_28(func_43((safe_rshift_func_uint8_t_u_s(0xA4L, ((safe_mul_func_int16_t_s_s(l_198, 0x47B0L)) <= g_58.f0))), l_199, p_22, (*g_129)), l_199.f3, g_58.f4, l_200, g_58), 1L)) || 0xB3L) == 0x2CL))) , 0x3E3C3B74L) >= g_107), 0x349BFD98L))) & p_23) | l_202));
                    for (l_124 = (-2); (l_124 == 9); ++l_124)
                    {
                        (*g_129) = (p_23 | p_23);
                        (*g_128) = (*g_128);
                        if (p_23)
                            continue;
                        (*g_128) = &l_136;

                        ;
                    }
                }

                ;
                (*l_207) = l_205;
                l_209 = l_208;
            }


            ;
            ;
            l_210 = l_186;
            for (g_127 = 4; (g_127 < 27); ++g_127)
            {
                int ***l_215 = &l_213;
                (*l_215) = l_213;
            }
            for (g_130 = 0; (g_130 <= 0); g_130++)
            {
                unsigned **l_219 = &g_41;
                unsigned short ***l_227 = &l_135;
                unsigned *l_228 = &g_58.f4;
                int l_249 = (-5L);
                int l_258 = (-2L);
                char *l_264 = &g_11;
            }
        }



        ;
        ;
        ;
        ;
        if ((func_28(&l_156, ((g_58 , (g_58.f0 || (g_276 == ((func_28(l_206, p_23, (*l_160), l_218, l_278) && (***g_88)) , (void*)0)))) != (-7L)), (**g_276), &g_42, g_58) , g_133))
        {
            unsigned short l_281 = 0x32CCL;
            int *l_303 = &g_130;
            char *l_336 = (void*)0;
            for (g_57 = (-3); (g_57 != (-27)); g_57 = safe_sub_func_int8_t_s_s(g_57, 1))
            {
            }
            for (g_133 = 0; (g_133 == (-26)); g_133--)
            {
                char *l_304 = (void*)0;
                int *l_306 = &g_189;
            }
            for (l_274 = 0; (l_274 <= 37); l_274 = safe_add_func_uint16_t_u_u(l_274, 1))
            {
                unsigned char l_321 = 0x8DL;
                unsigned *l_322 = (void*)0;
                unsigned *l_323 = &l_278.f4;
                unsigned char *l_333 = &l_125;
                (*l_303) = ((safe_lshift_func_int16_t_s_s(((*l_160) , l_320), 9)) >= (l_321 | ((*l_161) = ((((*l_333) = (((((*l_323) = g_189) , (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((*l_131) = ((safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u((*l_303), l_321)) , (&g_58 != &g_58)), (g_332 = g_11))) < 0UL)), 9)), p_23))) ^ 0xB4L) <= l_321)) , g_133) || (*l_160)))));

                                if (p_23)
                    break;
                l_160 = l_303;

                ;
                (*g_128) = l_303;

                ;
            }

            ;
            (*g_128) = ((safe_add_func_int16_t_s_s((func_28(l_336, p_23, p_23, (l_337 , l_214), g_58) & ((((l_278.f1 == (safe_mod_func_int16_t_s_s(((*p_22) && (*l_303)), p_23))) && (*g_277)) & (-6L)) , (*p_22))), p_23)) , (void*)0);

            ;
        }
        else
        {
            int *l_342 = &l_136;
            unsigned l_343 = 0x16A64882L;
            unsigned char **l_349 = &l_206;
            unsigned char ***l_350 = (void*)0;
            unsigned char ***l_351 = &l_349;
            union U0 l_354 = {-1L};
            for (g_42 = (-17); (g_42 >= 59); g_42 = safe_add_func_uint32_t_u_u(g_42, 1))
            {
                unsigned short l_344 = 65535UL;
                union U0 l_346 = {6L};
                (*g_128) = l_342;

                ;
                (*g_129) = (p_23 , func_28((*g_89), l_343, (((*l_161) = l_344) , l_345), &g_42, l_346));
            }
            (*l_160) = ((*l_342) = ((((*g_276) != (*g_276)) ^ ((*l_342) < (0xF233L == func_28(p_22, ((l_209 = ((*l_351) = l_349)) != (void*)0), ((safe_sub_func_uint32_t_u_u(((((l_354 , (*g_277)) && 0x8BL) , (void*)0) != &g_277), g_11)) != (*l_342)), &l_343, g_58)))) , p_23));

                        (*l_110) = l_342;

            ;
            (*l_160) = (safe_rshift_func_uint16_t_u_u(p_23, (func_28(&l_156, p_23, ((safe_mod_func_uint8_t_u_u(0x4AL, (*g_10))) , ((*l_342) = ((((*l_160) = ((((*l_342) || 0x49F018ECL) == p_23) != ((safe_mod_func_uint16_t_u_u(((**l_135) = ((safe_add_func_int32_t_s_s((g_189 = p_23), p_23)) , l_363)), g_57)) == 0x4AL))) > g_133) < 0x6FL))), l_111, g_364) >= p_23)));
        }



        ;
    }
    else
    {
        unsigned l_374 = 0x98B304DBL;
        int l_375 = (-1L);
        unsigned *l_376 = &l_337.f4;
        unsigned *l_377 = &g_332;
        union U0 l_403 = {0x1CA1425DL};
        char *l_499 = &g_57;
        l_375 = ((*g_129) = ((safe_add_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s(g_58.f1, 0)) , (safe_unary_minus_func_int32_t_s(p_23))) , ((safe_lshift_func_uint8_t_u_u((p_23 <= ((*p_22) && 0x4BL)), p_23)) | ((-1L) > (safe_lshift_func_int8_t_s_u(((*p_22) < (*p_22)), l_374))))), 0xEACDL)) <= 0xECL));
        if ((((*l_126) = ((*l_131) = 0x8A62L)) == (((!((*l_377) = ((*l_376) = g_364.f0))) || (*g_129)) <= func_28((**g_88), (*l_111), ((**l_205) = p_23), &g_42, g_364))))
        {
            unsigned l_396 = 4294967295UL;
            int **l_419 = (void*)0;
            int ***l_418 = &l_419;
            union U0 l_427 = {0xC744DAF3L};
            int *l_436 = &g_130;
            char *l_481 = &g_11;
            int l_513 = 0xB57BD984L;
            if ((+(((safe_rshift_func_uint16_t_u_s((((**g_128) = p_23) == (safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((0L != p_23), (((*g_277) | (*p_22)) | p_23))), p_23)), 0L))), (g_364.f1 ^ g_364.f1))) >= p_23) != (**g_276))))
            {
                int l_402 = 1L;
                char *l_412 = &g_57;
                union U0 l_422 = {0x9C444118L};
                int l_423 = 0x619E40E7L;
                unsigned *l_426 = (void*)0;
                int *l_435 = &g_130;
                for (l_315 = 0; (l_315 != 55); l_315++)
                {
                    int l_397 = 0x5D35E8ADL;
                    unsigned *l_399 = (void*)0;
                    (*g_128) = (*g_128);
                }
                (**l_110) = ((*g_129) = p_23);
                for (g_42 = 0; (g_42 >= 46); ++g_42)
                {
                    unsigned l_413 = 0UL;
                    unsigned char *l_416 = &l_125;
                    short l_417 = 1L;
                    union U0 l_425 = {-10L};
                    for (g_133 = 0; (g_133 >= (-21)); g_133 = safe_sub_func_uint16_t_u_u(g_133, 2))
                    {
                        (*l_111) = (**g_128);
                    }
                    if ((safe_sub_func_uint32_t_u_u((((((((safe_rshift_func_int8_t_s_s((~(l_375 = ((*l_412) = func_28(l_412, l_413, ((**l_205) = (safe_sub_func_uint16_t_u_u(func_28(func_43(((((((*l_416) = (*g_277)) ^ (*l_111)) ^ l_417) && ((1L >= ((**g_128) = (((void*)0 != l_418) ^ (safe_rshift_func_uint16_t_u_s(((~65535UL) , l_396), g_364.f3))))) && 0x96A8L)) < l_413), l_422, p_22, l_396), l_423, (*g_277), l_111, g_364), 0x1425L))), &g_42, g_364)))), l_423)) & 1UL) ^ 0xF0D0L) , &l_205) != (void*)0) > g_189) & l_396), p_23)))
                    {
                        int ***l_424 = (void*)0;
                        (*l_111) = (-5L);
                        (**l_110) = ((~(l_424 != (void*)0)) ^ (*g_129));
                        (*g_128) = &l_375;

                        ;
                    }
                    else
                    {
                        (*g_129) = (0xDE35EEEFL != func_28(p_22, ((-1L) | 0x1AEA479DL), (*g_277), &g_42, l_425));
                        (*g_129) = (func_28((*g_89), ((-10L) > 65531UL), (**g_276), l_426, l_427) < ((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u(((***g_88) || 0x36L))), 4)), p_23)) <= 0x1737AA7CL));
                    }
                    for (g_57 = 3; (g_57 >= 11); g_57 = safe_add_func_uint8_t_u_u(g_57, 4))
                    {
                        l_435 = &l_402;

                        ;
                        (*l_111) = (-1L);
                        (*l_110) = (*g_128);

                        ;
                    }
                    (*g_129) = (~p_23);
                }

                ;
                ;
                ;
            }
            else
            {
                int ***l_437 = &l_419;
                unsigned *l_441 = (void*)0;
                int l_446 = (-1L);
                int l_447 = (-9L);
                union U0 l_475 = {0L};
                int l_495 = 0L;
                char *l_502 = &g_57;
                unsigned char ***l_504 = &l_205;
                union U0 *l_507 = &g_58;
                (*l_110) = l_436;

                ;
                (*l_436) = (l_437 != g_438);
                if (((l_436 == l_441) < (safe_mod_func_int16_t_s_s((l_446 = ((safe_sub_func_int8_t_s_s((l_375 = (0x42AB39A4L && 2UL)), (l_403.f3 >= (**g_276)))) && func_28(l_206, p_23, p_23, &l_374, g_364))), l_447))))
                {
                    short l_456 = 0xAEB7L;
                    unsigned *l_474 = &g_42;
                    char *l_476 = &g_11;
                    unsigned char l_477 = 0x4BL;
                    int l_480 = (-3L);
                    for (l_374 = 0; (l_374 <= 50); l_374++)
                    {
                        short *l_454 = (void*)0;
                        short *l_455 = &l_320;
                        short *l_463 = &g_464;
                        int l_473 = 0xCBC03E09L;
                        (**l_110) = (((p_23 , p_23) == (safe_mul_func_int16_t_s_s(g_364.f0, (safe_rshift_func_uint16_t_u_s((((*l_455) = g_364.f4) | (((*g_137) , ((l_456 < (safe_rshift_func_uint8_t_u_s(((g_58 , ((g_11 <= ((*l_131) = ((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((((*l_463) = func_28(p_22, p_23, p_23, l_436, g_58)) < 0x7D3AL), 14)), (*p_22))) > 0x35L))) == 1UL)) == 0UL), 6))) != 1L)) == p_23)), p_23))))) , 0x6842C025L);
                        (*g_129) = func_28(p_22, l_456, (!(p_23 == (safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(g_11, 7)) , l_446), ((*l_206) = ((((**g_276) || (l_447 = 0UL)) , ((**g_128) = ((*l_436) != (((safe_lshift_func_uint8_t_u_u(l_456, (*g_277))) == p_23) , l_473)))) & p_23)))), l_473)))), l_474, l_475);
                        l_480 = ((((*l_131) = p_23) >= func_28(l_476, p_23, l_477, l_474, ((safe_mod_func_uint16_t_u_u(0x9196L, 1L)) , l_475))) > (-10L));
                    }
                    return l_481;


                }
                else
                {
                    char **l_486 = &l_481;
                    int l_493 = 0x9B90E493L;
                    short *l_494 = &g_464;
                    unsigned *l_497 = &l_374;
                    short *l_498 = &l_320;
                    union U0 l_503 = {-1L};
                    union U0 l_521 = {1L};
                    (**g_128) = (safe_rshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((1UL ^ ((*l_498) = ((*l_494) = func_28(((*l_486) = l_206), (safe_sub_func_uint8_t_u_u((*l_436), ((0x4D0107DBL != 0xD6430BFFL) | (safe_add_func_uint16_t_u_u(65535UL, (((*l_494) = (((**g_89) <= ((*g_129) , ((*g_277) = (safe_add_func_uint32_t_u_u(((((*l_436) != l_493) && p_23) | p_23), p_23))))) && 0x4752A3EAL)) || l_495)))))), l_496, l_497, l_475)))) != (**l_110)), 0x1A005467L)), 3));

                    ;
                    (**g_128) = (((((*g_277) = p_23) && ((*g_277) = ((func_28(l_499, ((*l_131) = p_23), l_403.f3, ((((*p_22) , (~(+((**l_205) = 255UL)))) , ((safe_lshift_func_int16_t_s_s((((void*)0 == l_502) , (g_364.f3 <= p_23)), 3)) && p_23)) , l_441), l_503) , l_504) == (void*)0))) | 5UL) ^ p_23);
                    for (g_127 = 0; (g_127 != 24); g_127 = safe_add_func_int16_t_s_s(g_127, 5))
                    {
                        union U0 **l_508 = &l_507;
                        int l_520 = 1L;
                        (*l_111) = ((-5L) >= (((&g_58 != ((*l_508) = l_507)) == (0x05BC7D39L & ((*l_376) = ((**g_128) || ((safe_add_func_int16_t_s_s(((*l_498) = p_23), 0x7183L)) >= 0x191D6976L))))) > (**g_276)));
                        (**l_110) = p_23;
                        (*g_128) = (*g_128);
                        l_446 = ((*g_129) = (safe_mul_func_uint8_t_u_u(l_513, (safe_mul_func_uint16_t_u_u(func_28(func_43(((**g_128) , (((((((((void*)0 != (*g_128)) ^ (safe_sub_func_uint8_t_u_u((g_364 , func_28(((**l_508) , (l_374 , (*g_89))), (safe_lshift_func_uint16_t_u_s(l_520, l_446)), (*g_277), l_111, (**l_508))), (*g_277)))) , p_23) & (*l_436)) , (*l_436)) && 0x1995FF3EL) != g_42) ^ 0xD8L)), g_58, (**g_88), p_23), l_403.f4, (**g_276), l_497, g_364), 9UL)))));
                    }
                    l_375 = ((((*l_436) = ((func_28(((*l_486) = (void*)0), l_503.f1, (**g_276), l_441, l_521) && 0L) < ((*g_128) == l_436))) && p_23) <= (*p_22));

                    ;
                }

                ;
                (*l_110) = &l_375;

                ;
            }

            ;
            ;
            ;
        }
        else
        {
            short ***l_524 = &g_522;
            int *l_525 = &g_49;
            (*l_524) = g_522;
            (*l_110) = l_525;
            (*g_128) = (*g_128);
        }

                ;
        ;
                for (g_57 = 0; (g_57 == (-19)); g_57 = safe_sub_func_int32_t_s_s(g_57, 2))
        {
            int *l_528 = &l_375;
            char ****l_529 = (void*)0;
            char ****l_530 = &g_88;
            char *****l_531 = &l_530;
            (*l_110) = (*g_128);

            ;
            (*g_128) = l_528;

            ;
            (**g_128) = (l_529 != ((*l_531) = l_530));
        }
    }



    ;
    return p_22;


}







static char * func_24(unsigned char p_25)
{
    char *l_34 = &g_11;
    int *l_48 = &g_49;
    union U0 l_50 = {-1L};
    char *l_53 = &g_11;
    char **l_52 = &l_53;
    char *l_55 = &g_11;
    char **l_54 = &l_55;
    char *l_56 = &g_57;
    union U0 *l_97 = (void*)0;
    union U0 *l_98 = &l_50;
    (*l_48) = ((func_28(l_34, (((*l_98) = func_35(g_27, g_41, (l_56 = ((*l_54) = ((*l_52) = func_43(((*l_48) = ((*g_10) , (((g_27 , g_41) == l_48) >= 1UL))), l_50, l_34, p_25)))), l_50, g_58)) , 65535UL), g_11, l_48, g_58) >= 0x33L) >= p_25);

    ;
    return (**g_88);


}







static char func_28(char * p_29, unsigned short p_30, unsigned char p_31, unsigned * p_32, union U0 p_33)
{
    union U0 *l_100 = &g_58;
    union U0 **l_99 = &l_100;
    union U0 *l_102 = &g_58;
    union U0 **l_101 = &l_102;
    int *l_103 = &g_49;
    (*l_103) = (((*l_99) = &g_58) == ((*l_101) = &p_33));

    ;
    (*l_103) = 0xC2AE6BA1L;
    return (*l_103);
}







static union U0 func_35(int p_36, unsigned * p_37, char * p_38, union U0 p_39, union U0 p_40)
{
    unsigned l_59 = 4294967293UL;
    int l_65 = 0L;
    char ***l_87 = (void*)0;
    int *l_95 = (void*)0;
    int *l_96 = &g_49;
    if ((((l_59 ^ g_49) <= l_59) || (+g_49)))
    {
        unsigned l_64 = 0x93C34F97L;
        union U0 l_73 = {0x3674DCCEL};
        int l_77 = 0x58AC3744L;
        int *l_78 = &l_65;
        char **l_86 = &g_10;
        char ***l_85 = &l_86;
        char ****l_90 = &g_88;
        unsigned *l_91 = &l_73.f4;
        for (g_27 = 0; (g_27 > 18); ++g_27)
        {
            unsigned l_72 = 6UL;
            union U0 *l_74 = &l_73;
            int *l_75 = &g_49;
            int l_76 = 1L;
            l_77 = (g_58.f3 >= ((safe_lshift_func_uint16_t_u_s(((l_65 = l_64) == l_64), (safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(p_40.f1, ((*l_75) = (((safe_rshift_func_uint16_t_u_s((((g_58 , l_59) , ((*l_74) = ((l_72 <= 65533UL) , l_73))) , 0xB879L), 6)) >= g_42) > g_49)))), l_76)))) & p_40.f4));
            l_78 = l_75;

            ;
        }

        ;
        l_65 = (safe_mod_func_int32_t_s_s((p_40.f1 & p_40.f3), (safe_mul_func_int16_t_s_s((p_39.f3 <= ((*l_91) = (((*g_41) , (safe_rshift_func_int8_t_s_u((0x6E0DAEE2L || (((*l_85) = &g_10) == ((((((p_39.f3 <= ((l_87 != ((*l_90) = g_88)) <= 0x77E1L)) ^ g_58.f0) || p_40.f1) || (-1L)) , 0xB2FEL) , &p_38))), g_58.f0))) , (*l_78)))), p_39.f3))));

            }
    else
    {
        int *l_92 = (void*)0;
        int *l_93 = (void*)0;
        int *l_94 = &g_49;
        (*l_94) = g_27;
    }
    (*l_96) = 0xC4895D34L;
    return p_39;


    }







static char * func_43(unsigned char p_44, union U0 p_45, char * p_46, int p_47)
{
    int *l_51 = &g_49;
    (*l_51) = (&g_49 != l_51);
    l_51 = &g_49;
    return &g_11;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_332, "g_332", print_hash_value);
    transparent_crc(g_464, "g_464", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
