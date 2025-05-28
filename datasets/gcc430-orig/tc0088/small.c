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



static int g_5 = 0x921DED68L;
static unsigned short g_9 = 0x4B58L;
static unsigned short g_25 = 65526UL;
static unsigned short *g_24 = &g_25;
static int g_35 = 0x6B379904L;
static char g_62 = (-1L);
static int g_65 = 0x32F520A0L;
static short g_88 = 0x7806L;
static unsigned char g_94 = 0x56L;
static int g_106 = (-1L);
static const char *g_113 = (void*)0;
static const char ** const g_112 = &g_113;
static unsigned g_134 = 0UL;
static int *g_138 = &g_65;
static int **g_137 = &g_138;
static int g_149 = 0x33B60433L;
static unsigned **g_209 = (void*)0;
static unsigned char g_224 = 0xD9L;
static int g_242 = 0x89C3933BL;
static unsigned short ***g_285 = (void*)0;
static unsigned char g_302 = 253UL;
static unsigned short g_313 = 0x15CEL;
static char g_319 = 0xE3L;
static unsigned g_348 = 4294967286UL;
static unsigned short *g_409 = &g_25;
static unsigned char *g_426 = &g_224;
static unsigned char **g_425 = &g_426;
static unsigned char g_528 = 251UL;
static char *g_538 = (void*)0;
static char **g_537 = &g_538;
static unsigned short g_540 = 0xAF9DL;
static unsigned short g_547 = 1UL;



static short func_1(void);
static int func_6(unsigned char p_7);
static unsigned func_10(unsigned short * p_11, unsigned p_12);
static unsigned short * func_13(unsigned p_14, int p_15, unsigned p_16, int * p_17);
static int func_19(unsigned short * p_20, unsigned short * p_21, unsigned short p_22, unsigned char p_23);
static unsigned short func_28(int p_29, unsigned char p_30, int * p_31, short p_32, int p_33);
static int * func_36(short p_37, unsigned short * p_38, short p_39, int p_40);
static char func_41(int p_42, unsigned short * p_43, int p_44);
static unsigned short func_45(unsigned p_46, int p_47, int * p_48, int * p_49);
static char * func_76(const unsigned char p_77, unsigned p_78, short p_79);
static short func_1(void)
{
    int *l_4 = &g_5;
    unsigned l_653 = 4294967291UL;
    int **l_654 = &g_138;
    unsigned short * const *l_655 = (void*)0;
    unsigned short * const **l_656 = &l_655;
    (*l_654) = ((0UL | ((((safe_lshift_func_int16_t_s_s((l_4 == (void*)0), (&g_5 == (func_6((*l_4)) , ((*l_4) , l_4))))) | g_242) , (*l_4)) ^ (*l_4))) , l_4);

    ;

    (*l_656) = l_655;
    (**g_137) = (*g_138);
    return g_88;
}







static int func_6(unsigned char p_7)
{
    unsigned short *l_8 = &g_9;
    int l_18 = 0xF3F6085EL;
    int *l_34 = &g_35;
    int *l_155 = &g_65;
    int *l_156 = &g_65;
    unsigned *l_443 = &g_348;
    (*l_34) = ((((*l_8) = g_5) >= 0x7C10L) & func_10(func_13(l_18, func_19(l_8, g_24, ((((*l_443) = (safe_sub_func_uint16_t_u_u(func_28(((*l_34) = (0xAE07L > p_7)), g_25, (l_156 = (l_155 = func_36(g_5, &g_25, g_25, l_18))), p_7, p_7), 0x8557L))) < p_7) , (*l_156)), p_7), g_5, &l_18), p_7));

    ;

    (*g_137) = &l_18;

    ;
    return g_94;


}







static unsigned func_10(unsigned short * p_11, unsigned p_12)
{
    unsigned l_560 = 0x02A4A8CEL;
    unsigned short *l_563 = &g_25;
    char **l_565 = &g_538;
    char l_592 = 1L;
    unsigned short *l_606 = &g_540;
    int ** const *l_625 = &g_137;
    int ** const **l_624 = &l_625;
    int l_648 = 0x1FD019FCL;
    char l_650 = 0xD5L;
    for (g_35 = 0; (g_35 > (-5)); --g_35)
    {
        int **l_557 = &g_138;
        unsigned short *l_564 = (void*)0;
        char ***l_566 = &l_565;
        char ***l_567 = &g_537;
        int ***l_611 = (void*)0;
        const int ***l_623 = (void*)0;
        const int ****l_622 = &l_623;
        int l_647 = 0x1D009611L;
        unsigned ***l_649 = &g_209;
        if ((safe_sub_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(0x7AL, ((((safe_mod_func_int8_t_s_s(((void*)0 != l_557), p_12)) | (safe_lshift_func_int8_t_s_u(l_560, (safe_sub_func_uint8_t_u_u(func_19(l_563, (l_564 = p_11), ((*l_563) = (((((*l_566) = l_565) != ((*l_567) = &g_538)) , p_12) & l_560)), (*g_426)), (-1L)))))) == p_12) , p_12))) , (**l_557)), 0x6CL)))
        {
            unsigned l_591 = 1UL;
            unsigned short *l_595 = &g_25;
            (*g_137) = (*l_557);
            g_65 = (!(**l_557));
            for (g_302 = 23; (g_302 <= 5); g_302--)
            {
                unsigned short *l_584 = &g_547;
                unsigned char *l_600 = &g_94;
                int ***l_615 = &l_557;
                unsigned l_631 = 0UL;
                for (g_348 = 0; (g_348 > 55); ++g_348)
                {
                    int *l_573 = &g_35;
                    int **l_572 = &l_573;
                    unsigned char *l_601 = &g_94;
                    unsigned l_629 = 4294967295UL;
                    (*l_572) = ((*l_557) = (*l_557));
                    if ((**g_137))
                    {
                        unsigned short *l_576 = &g_313;
                        int l_581 = (-7L);
                        short *l_585 = (void*)0;
                        short *l_586 = &g_88;
                        unsigned *l_587 = &g_134;
                        unsigned *l_588 = (void*)0;
                        unsigned *l_589 = &l_560;
                        int *l_590 = &g_106;
                        int *l_593 = (void*)0;
                        int *l_594 = &l_581;
                        (*l_594) = ((((safe_mod_func_int16_t_s_s(func_45((func_19(l_576, p_11, (((*l_590) = (safe_mod_func_uint32_t_u_u(((*l_589) = (((*g_24) = (p_12 , (((*g_24) && (safe_rshift_func_uint8_t_u_u(p_12, (p_12 , (((*l_587) = (l_581 < ((((safe_lshift_func_int16_t_s_s(((*l_586) = (func_41(p_12, l_584, p_12) < (-9L))), g_302)) , p_12) , g_547) , (*l_573)))) ^ (**g_137)))))) , l_560))) == (**l_557))), (*l_573)))) , (*g_24)), (**g_425)) & l_591), p_12, &g_5, &l_581), p_12)) , p_12) , 8UL) && l_592);
                    }
                    else
                    {
                        char *l_604 = &g_62;
                        int l_605 = 0xE0860E16L;
                        int ****l_612 = &l_611;
                        int ***l_614 = &g_137;
                        int ****l_613 = &l_614;
                        unsigned short l_626 = 0xBAD0L;
                        g_149 = (func_19(&g_540, l_595, ((safe_add_func_uint8_t_u_u((*g_426), ((safe_sub_func_uint32_t_u_u((65535UL <= g_65), ((**l_572) >= ((*l_604) = (((l_600 != l_601) < (safe_mod_func_uint32_t_u_u(p_12, 0xA1A56E3FL))) && g_62))))) != 1UL))) , (**l_557)), p_12) && l_605);
                        (**l_615) = func_36(g_528, l_606, p_12, (safe_rshift_func_uint8_t_u_s(p_12, (safe_lshift_func_int16_t_s_u(((p_12 & ((((*l_613) = ((*l_612) = l_611)) != l_615) < (((safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(0L, 2)), 4)) <= ((((safe_mod_func_uint16_t_u_u((l_622 != l_624), (*g_24))) | (***l_615)) != p_12) & p_12)) , l_626))) != (**l_572)), 12)))));

                        ;
                    }
                    for (g_313 = (-24); (g_313 < 3); g_313++)
                    {
                        short l_630 = (-7L);
                        int l_632 = 0x84144D12L;
                        int l_645 = (-1L);
                        int *l_646 = (void*)0;
                        (*l_572) = (*g_137);
                        g_149 = (((l_645 = ((l_629 & (p_12 < ((l_632 = (l_630 <= l_631)) <= (((*l_573) , (*g_24)) | l_591)))) > ((safe_sub_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_s((+(safe_add_func_int16_t_s_s(((func_41(((***l_615) & ((*l_606) = ((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(l_630, p_12)), (***l_615))) | p_12))), &g_25, (**g_137)) , l_601) == (void*)0), (**l_572)))), (***l_615))) && 4UL) <= 0UL), p_12)) & p_12))) , (**l_572)) < 1L);
                    }
                    if (p_12)
                        continue;
                }
            }
        }
        else
        {
            l_648 = (l_647 = (&g_426 != (void*)0));
        }

        ;
        ;
        (*l_649) = g_209;
    }


    return l_650;
}







static unsigned short * func_13(unsigned p_14, int p_15, unsigned p_16, int * p_17)
{
    unsigned short l_452 = 1UL;
    unsigned char **l_469 = &g_426;
    int l_475 = 0x42CE0C44L;
    int **l_477 = &g_138;
    char *l_480 = &g_319;
    unsigned short **l_485 = &g_409;
    unsigned *l_486 = (void*)0;
    unsigned short *l_529 = &g_313;
    unsigned short l_548 = 0xEBADL;
    (*g_138) = 7L;
    (**g_137) = (*p_17);
    for (g_94 = (-10); (g_94 == 4); g_94++)
    {
        int l_451 = 0L;
        unsigned short *l_455 = &l_452;
        unsigned char **l_470 = &g_426;
        unsigned short *l_471 = &g_313;
        int ***l_476 = &g_137;
        int **l_478 = &g_138;
        short *l_479 = &g_88;
        (*g_138) = (*g_138);
    }
    if ((p_15 & (p_14 >= (((*l_480) = p_16) < (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((((**l_477) = func_41(((((**l_477) = 0x84D2C887L) || (**g_137)) , g_25), ((*l_485) = &l_452), func_41(p_16, &g_25, (*p_17)))) , (*g_24)), p_14)), 7))))))
    {
        unsigned char l_489 = 0xEDL;
        int l_494 = 1L;
        int l_504 = 0x76918559L;
        unsigned short *l_530 = (void*)0;
        if ((l_504 = (func_45(((safe_rshift_func_uint8_t_u_s((((**l_469) = (l_489 <= ((**g_137) < func_41(func_41((safe_add_func_uint32_t_u_u(((0xDAL & g_62) <= (safe_lshift_func_uint8_t_u_u(l_494, 4))), ((p_15 && (safe_unary_minus_func_uint32_t_u((g_106 || ((safe_lshift_func_int8_t_s_s((((**l_477) & ((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((((**l_477) , l_489) >= l_494), 7)), (**g_137))) != g_94)) , p_16), 5)) == g_302))))) <= 0x09E3L))), (*l_485), (*g_138)), (*l_485), l_504)))) > p_14), 6)) , (**l_477)), (*p_17), p_17, (*g_137)) , 7L)))
        {
            int l_505 = 0x59E872F0L;
            short *l_527 = &g_88;
            if (l_505)
            {
                unsigned l_510 = 1UL;
                (*g_137) = p_17;


                (**l_477) = (safe_rshift_func_int8_t_s_u(0L, 0));
                if (((p_14 = func_28((**g_137), ((0xA4086E0AL || p_14) , l_494), func_36((safe_sub_func_uint8_t_u_u(((*g_426) = func_41((l_504 = p_14), (*l_485), (**g_137))), ((8UL != (**l_477)) == l_489))), (*l_485), g_35, (*p_17)), p_14, (*g_138))) != l_510))
                {
                    (*p_17) = 0x41C0306EL;
                    (*l_477) = p_17;


                }
                else
                {
                    for (g_302 = 0; (g_302 > 25); g_302 = safe_add_func_int32_t_s_s(g_302, 3))
                    {
                        int * const *l_514 = &g_138;
                        int * const **l_513 = &l_514;
                        (*l_513) = (void*)0;

                        ;
                    }
                }


            }
            else
            {
                int l_519 = 0x5813685BL;
                int l_520 = 0L;
                (**g_137) = (safe_rshift_func_int8_t_s_u((+((*p_17) , (0xE547L | (*g_24)))), (((**l_469) = (**g_425)) , (g_319 == func_45(((g_62 <= (l_494 = (safe_lshift_func_int8_t_s_u((l_519 = (**l_477)), 6)))) | ((**g_137) , func_45((**l_477), l_520, p_17, &l_505))), (**g_137), p_17, &l_520)))));
            }


            (*p_17) = ((g_528 = (safe_sub_func_uint32_t_u_u(((void*)0 != &l_489), (((safe_lshift_func_uint8_t_u_s((2L & ((safe_sub_func_int32_t_s_s(0x05CDAAA2L, (((*l_527) = ((func_45(g_5, l_505, &l_505, p_17) , 0xC7L) == p_15)) || (*g_409)))) != g_348)), p_15)) || 65535UL) < (*p_17))))) | 0UL);
            (*g_137) = p_17;


            return l_529;



        }
        else
        {
            (*l_477) = (p_15 , (void*)0);

            ;
            return l_530;



        }
    }
    else
    {
        int l_531 = 0x4A8554CBL;
        unsigned short *l_532 = (void*)0;
        int * const l_533 = &l_475;
        int **l_534 = &g_138;
        char ***l_539 = &g_537;
        (*l_534) = l_533;

        ;
        (*l_534) = p_17;


        l_548 = (safe_mod_func_int32_t_s_s(((((p_15 , &g_113) == ((*l_539) = g_537)) ^ (*g_138)) ^ ((p_14 | ((**l_469) = (((*l_533) = (((*l_533) & ((**l_477) || (g_540 = (g_88 = (**l_477))))) & (safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((g_547 = (((*l_533) > (*g_138)) != (**l_477))), (*g_409))), 0xA5C3A70CL)), 7)))) & p_15))) ^ 0xF942L)), (*p_17)));
        (*g_137) = (*g_137);
    }


    ;
    return &g_540;



}







static int func_19(unsigned short * p_20, unsigned short * p_21, unsigned short p_22, unsigned char p_23)
{
    int *l_446 = &g_35;
    for (g_106 = 0; (g_106 <= (-9)); --g_106)
    {
        l_446 = l_446;
    }
    (*g_137) = l_446;


    return (*l_446);
}







static unsigned short func_28(int p_29, unsigned char p_30, int * p_31, short p_32, int p_33)
{
    int l_157 = (-6L);
    unsigned short *l_158 = &g_25;
    unsigned *l_180 = (void*)0;
    int *l_187 = (void*)0;
    int l_222 = 0x24B7AEA8L;
    unsigned char * const l_247 = &g_224;
    unsigned char * const *l_246 = &l_247;
    short l_256 = 0x1255L;
    unsigned short *l_299 = &g_25;
    const char *l_327 = (void*)0;
    int l_337 = 0xA677B3C1L;
    int l_346 = 0x9CFDD6B7L;
    unsigned l_364 = 0x625ECAEDL;
    int *l_393 = &g_35;
    short *l_439 = &g_88;
    (*g_137) = func_36(l_157, l_158, ((func_41(((*p_31) | (*p_31)), &g_25, (p_29 = l_157)) & l_157) >= 0x20ABL), l_157);
    (*p_31) = (*p_31);
    if (((*p_31) = (safe_add_func_int32_t_s_s(((-1L) && (!(*g_138))), g_35))))
    {
        short l_163 = 0xB741L;
        unsigned short *l_175 = &g_25;
        unsigned *l_181 = &g_134;
        int l_202 = 0xAE77DE15L;
        int l_225 = 0x1CEF0AC7L;
        unsigned l_252 = 0x8EC8C7DFL;
        int l_279 = 0xA6E1C321L;
        int l_294 = 1L;
        int l_320 = 0x7B0FE012L;
        char l_356 = (-1L);
        unsigned short l_424 = 4UL;
        unsigned char ***l_431 = &g_425;
        unsigned short *l_440 = &l_424;
        for (p_32 = 0; (p_32 <= (-19)); p_32 = safe_sub_func_uint32_t_u_u(p_32, 6))
        {
            unsigned short l_168 = 65527UL;
            (*g_138) = l_163;
            (*g_137) = func_36((safe_add_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(g_134, func_45(l_168, ((((*g_24) , ((safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(l_157, l_168)) || p_33), 10)), l_163)) ^ l_168)) || (**g_137)) && g_25), (*g_137), (*g_137)))), g_5)), l_175, g_62, l_157);
            (**g_137) = l_168;
        }
        if (((safe_rshift_func_uint8_t_u_u((((*l_181) = (safe_lshift_func_int8_t_s_s((((func_45(((l_157 , l_180) != (void*)0), (*p_31), l_180, (*g_137)) >= 65526UL) | ((p_30 , 0x53L) == l_163)) , l_163), l_157))) | l_157), p_29)) <= l_157))
        {
            unsigned short l_188 = 0xFE2EL;
            unsigned short *l_196 = (void*)0;
            int l_198 = 0L;
            unsigned l_296 = 0x072CEC63L;
            unsigned char * const l_301 = &g_302;
            unsigned char * const *l_300 = &l_301;
            const int l_305 = 0L;
            const char **l_312 = &g_113;
            (*g_137) = &p_29;

            ;
            for (g_149 = 0; (g_149 != 20); g_149++)
            {
                (*p_31) = (safe_unary_minus_func_int32_t_s((*g_138)));
                l_187 = ((l_163 , g_65) , ((safe_add_func_int32_t_s_s(0x379E6B5FL, (*p_31))) , (void*)0));
            }
            if ((*p_31))
            {
                unsigned l_195 = 5UL;
                unsigned **l_197 = &l_181;
                unsigned char *l_200 = &g_94;
                unsigned char **l_199 = &l_200;
                int *l_213 = &l_198;
                if (((l_163 > (**g_137)) >= ((p_30 , (-9L)) < ((*p_31) = (l_198 = (((*l_197) = p_31) == &g_134))))))
                {
                    unsigned char ***l_201 = &l_199;
                    (*l_201) = l_199;
                    (*g_137) = (l_202 , (((65530UL == (safe_add_func_uint32_t_u_u((p_30 , ((~func_45(((**l_197) = p_30), (**g_137), &p_29, &p_29)) , (((((p_30 = (safe_lshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u((((((((**l_199) = (l_188 , g_35)) || l_157) ^ g_106) , (void*)0) == g_209) <= 0x0004L), (**g_137))), p_29))) , 0x95804E8CL) ^ (-1L)) ^ (-2L)) < (*p_31)))), 0L))) || p_29) , (void*)0));

                    ;
                    (*p_31) = (*p_31);
                    g_65 = (*p_31);
                }
                else
                {
                    unsigned short *l_210 = &g_25;
                    int l_216 = 0x5B47AC94L;
                    short *l_217 = &g_88;
                    unsigned * const *l_220 = &l_181;
                    (*l_213) = (((*l_197) = func_36((l_163 == p_30), l_210, (func_45((((**l_199) = (((*l_158) = (safe_sub_func_int16_t_s_s(g_62, (func_45(p_32, l_195, (*g_137), l_213) > 0xDE542F5EL)))) ^ p_33)) , l_188), (*l_213), l_181, (*g_137)) & 0x26L), (**g_137))) != p_31);

                    ;
                    (*g_138) = (**g_137);
                    if ((((*l_217) = ((((((safe_rshift_func_uint16_t_u_s(0x9D2BL, 8)) >= p_33) == (0xAAL || (l_216 && p_29))) || 1UL) > (g_106 & (g_25 >= l_163))) & (**g_137))) && (-6L)))
                    {
                        unsigned l_221 = 0x3010FE33L;
                        (*l_213) = (safe_sub_func_uint8_t_u_u(l_198, (((**l_197) = 4294967292UL) ^ (*l_213))));
                        (**g_137) = ((void*)0 == (*g_112));
                        l_222 = ((0xA0A84810L == ((0xB80F26FCL | ((*p_31) | (~((void*)0 != l_220)))) & (((*l_181) = (g_94 , l_221)) < 0x705220B7L))) , (**g_137));
                    }
                    else
                    {
                        return l_188;


                    }
                }

                ;

                if ((*l_213))
                {
                    unsigned char *l_223 = &g_224;
                    l_225 = ((g_94 = p_30) >= ((*l_223) = 0UL));
                }
                else
                {
                    short *l_236 = &g_88;
                    unsigned l_237 = 0x7FA5D5B2L;
                    l_222 = ((*p_31) = (*l_213));
                    (*g_137) = (*g_137);
                    (*l_213) = ((*p_31) = (g_134 && (l_237 = ((*l_236) = ((((-1L) & (safe_lshift_func_uint16_t_u_u(((*g_24) = ((l_225 || (((7L || p_29) , p_29) && p_29)) , 8UL)), (safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(l_163, l_163)) & 255UL), 13)), 0))))) , l_188) <= 0x3D034B4DL)))));
                }
            }
            else
            {
                const unsigned *l_244 = &g_134;
                int l_261 = 1L;
                unsigned char *l_263 = &g_94;
                char *l_318 = &g_62;
                if ((**g_137))
                {
                    int *l_238 = (void*)0;
                    unsigned short *l_240 = &g_25;
                    (*p_31) = (*g_138);
                    if ((**g_137))
                    {
                        short *l_239 = &l_163;
                        unsigned short **l_241 = &l_240;
                        unsigned **l_245 = &l_180;
                        int l_250 = 0xD31FF24DL;
                        int *l_251 = &l_198;
                        (*g_137) = (*g_137);
                        (*g_137) = func_36(((*l_239) = ((void*)0 != l_238)), ((*l_241) = l_240), g_242, (((safe_unary_minus_func_int8_t_s((l_244 != (((**g_137) < l_225) , ((*l_245) = func_36(func_41((((p_30 <= g_25) || 0x5291L) , (-1L)), &g_25, (*g_138)), l_158, g_5, (**g_137))))))) , (void*)0) != l_246));

                        ;
                        (*g_137) = func_36(g_5, ((*l_241) = l_240), (safe_sub_func_uint32_t_u_u((l_250 && ((func_45(((*l_180) = l_225), (*p_31), &p_33, (((*l_251) = (*p_31)) , &l_198)) < l_252) , (*g_24))), p_32)), l_188);
                        (*p_31) = (*g_138);
                    }
                    else
                    {
                        unsigned short l_253 = 7UL;
                        unsigned short *l_257 = &g_25;
                        unsigned short **l_258 = &l_175;
                        (**g_137) = (**g_137);
                        (*g_137) = func_36(((l_253 , &l_225) == ((*g_137) = (void*)0)), &l_188, ((safe_sub_func_uint32_t_u_u(l_256, g_5)) , 0x89D4L), ((l_240 == ((*l_258) = l_257)) != 1UL));

                        ;
                    }

                    ;
                    ;
                }
                else
                {
                    unsigned short *l_270 = &g_25;
                    int l_274 = 1L;
                    char *l_311 = &g_62;
                    char **l_310 = &l_311;
                    if ((safe_lshift_func_uint16_t_u_u((*g_24), 10)))
                    {
                        int ***l_262 = &g_137;
                        char *l_264 = &g_62;
                        unsigned short ***l_267 = (void*)0;
                        unsigned short **l_269 = &l_158;
                        unsigned short ***l_268 = &l_269;
                        short *l_273 = &l_163;
                        char l_278 = (-2L);
                        unsigned char **l_280 = &l_263;
                        (*g_138) = func_45(l_261, (((((void*)0 != &g_25) != ((*l_264) = ((((*l_262) = &g_138) == (((*g_138) = ((l_263 != &g_94) >= 0x67D72278L)) , &p_31)) && 0xEEFDL))) != 5L) , (*p_31)), &g_5, &g_5);
                        (*g_137) = &l_225;

                        ;
                        (***l_262) = ((((*l_280) = func_76((safe_add_func_int16_t_s_s(((func_41((((*l_268) = &g_24) == &l_158), l_270, ((*p_31) = (((safe_add_func_int32_t_s_s(((*g_138) = (p_32 , ((((g_224 >= (((*l_273) = 0xA13AL) , ((*l_263) = (l_274 ^ (safe_unary_minus_func_int8_t_s((safe_sub_func_uint8_t_u_u((l_198 | ((*l_264) = p_32)), p_33)))))))) & p_33) | 0xA6C8DEDFL) != g_106))), p_30)) && 0x53B0L) , (**g_137)))) , 0L) , 0xBAAAL), l_278)), l_279, p_33)) == (void*)0) | 0x60L);

                        ;
                        ;
                        (**l_262) = (*g_137);
                    }
                    else
                    {
                        return l_188;


                    }

                    ;
                    ;
                    for (l_225 = 0; (l_225 >= (-22)); l_225--)
                    {
                        unsigned short **l_287 = &g_24;
                        unsigned short ***l_286 = &l_287;
                        unsigned short **l_295 = &l_158;
                        (*p_31) = ((safe_rshift_func_int16_t_s_s(p_33, 15)) & 0L);
                        (*p_31) = (((g_285 != l_286) , ((safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(l_163, l_274)), 65526UL)), 7)) , (((func_41(l_294, ((*l_295) = (void*)0), (**g_137)) && 0xCB8AL) >= p_33) > 0xBC70L))) == 0xFB2D1797L);

                        ;
                        return l_296;


                    }
                    (*g_137) = &l_198;

                    ;
                    (*g_137) = func_36((safe_mod_func_int32_t_s_s((*g_138), 0xAFFF069DL)), l_299, ((l_300 = (void*)0) != &l_247), ((((*l_181) = (safe_lshift_func_int16_t_s_u((!(l_305 , (safe_add_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(((*g_24) = (*g_24)), ((((l_188 & ((l_310 != l_312) , p_33)) <= l_274) || 0x47C6L) | g_149))) || l_296), g_35)))), g_313))) , 0UL) , l_198));

                    ;
                }

                ;
                ;
                ;
                ;
                (*g_137) = func_36(l_261, l_299, p_33, ((safe_sub_func_int32_t_s_s(((((*l_318) = p_32) && (-2L)) <= ((((g_224 > (((*p_31) && (((l_261 && ((*p_31) == l_261)) | p_29) , g_319)) >= g_224)) >= 0xA9D4L) && 5UL) > l_320)), 0L)) , (*p_31)));
                (*g_137) = (*g_137);
                (*g_137) = (void*)0;

                ;
            }

            ;
            ;

            ;
        }
        else
        {
            const unsigned short l_325 = 0x3B77L;
            short *l_326 = &l_256;
            int *l_328 = &l_294;
            int *l_349 = &g_149;
            unsigned char *** const l_430 = (void*)0;
            (*p_31) = 1L;
            (*p_31) = (p_32 || l_320);
            (*g_137) = &l_279;

            ;
            if (func_41(((0x17CFA881L < ((safe_rshift_func_int8_t_s_u(func_41(((*l_328) = (safe_lshift_func_int16_t_s_s(((void*)0 == (*g_112)), func_45(((*l_181) = (((l_327 = func_76(l_325, p_33, ((*l_326) = l_256))) != (*g_112)) | ((*g_138) = 0x0DDE07FDL))), l_294, (*g_137), (*g_137))))), l_175, p_29), 2)) , 0x390B3FADL)) && 0xCD14600CL), l_158, p_29))
            {
                (*g_137) = l_328;

                ;
            }
            else
            {
                unsigned short *l_338 = &g_313;
                int *l_340 = &g_5;
                unsigned short l_344 = 0x1F19L;
                unsigned l_345 = 0x94ED6FE8L;
                if ((*g_138))
                {
                    int l_339 = 0L;
                    unsigned char *l_341 = &g_302;
                    unsigned *l_347 = &g_348;
                    (*p_31) = (safe_sub_func_uint8_t_u_u(((*l_341) = ((**l_246) = (((p_29 , func_45(p_30, (safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(func_45(((*l_181) = (safe_lshift_func_uint16_t_u_u((l_325 || func_41(l_337, l_338, (*p_31))), 6))), l_339, l_340, &l_222), p_30)), (*g_24))), (*g_137), (*g_137))) , 0x17F8L) , l_325))), (*l_340)));
                    p_31 = ((((((*g_138) || ((*l_347) = ((*l_340) <= ((l_339 <= (p_33 , ((*g_24) != (*g_24)))) , ((((safe_lshift_func_int8_t_s_u((p_32 == ((((*l_181) = p_30) && ((((func_45(((*l_181) = ((p_32 , p_29) > 0x3AL)), (*l_340), (*g_137), (*g_137)) , (*l_340)) , 0x7741L) > p_33) <= l_344)) < p_29)), 7)) > g_242) , l_345) < l_346))))) != p_32) , l_320) == (-1L)) , (void*)0);

                    ;
                    l_222 = p_32;
                    (*g_137) = (*g_137);
                }
                else
                {
                    if ((*g_138))
                    {
                        l_349 = &p_33;

                        ;
                        return p_29;


                    }
                    else
                    {
                        (*g_137) = (*g_137);
                    }
                }


                if ((((((*l_328) = (g_348 , ((((*l_181) = (safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(func_45(p_33, ((p_29 , 0xBF441BDDL) < ((*l_340) != (l_356 >= (*l_340)))), (*g_137), ((*l_340) , l_349)), 1)) >= g_224), 5))) != 0x0BB737AEL) >= 0xD8L))) , p_33) || 0x27323745L) || (**g_137)))
                {
                    short l_361 = (-7L);
                    char *l_362 = (void*)0;
                    char *l_363 = &g_319;
                    const unsigned char *l_369 = &g_224;
                    const unsigned char **l_368 = &l_369;
                    const unsigned char ***l_367 = &l_368;
                    (*g_137) = (((*l_340) && (safe_sub_func_uint16_t_u_u((&l_338 == ((*l_349) , (void*)0)), (((0xDE70FEE4L && (((safe_lshift_func_int16_t_s_s(l_361, ((p_30 , p_33) | (l_364 = (((*l_363) = 0L) & 0x3BL))))) , p_29) & (*l_340))) , 0x2F90A159L) , 0xB583L)))) , &p_33);

                    ;
                    (*g_137) = func_36((((*g_24) = (safe_sub_func_uint16_t_u_u((((void*)0 != &l_325) , (((*g_138) > g_319) == ((**l_246) = ((void*)0 != l_367)))), (((*l_181) = l_225) >= ((p_32 | g_106) , (*g_138)))))) != 0xD3E5L), l_326, l_361, p_32);
                    (*l_349) = (safe_sub_func_int16_t_s_s((p_32 && (func_45(p_30, (&l_337 != &g_106), ((*g_137) = (void*)0), (((((l_361 >= ((*l_349) = (*l_349))) | ((*l_338) = ((safe_mod_func_int32_t_s_s((&p_30 == (void*)0), 0x1075F8E6L)) & p_33))) > (*g_24)) == g_25) , l_349)) ^ (*g_24))), p_30));

                    ;
                }
                else
                {
                    unsigned l_395 = 0UL;
                    unsigned short *l_429 = &g_313;
                    if ((**g_137))
                    {
                        unsigned l_394 = 1UL;
                        unsigned short *l_402 = &g_25;
                        (**g_137) = (*g_138);
                        (*g_138) = ((p_33 , ((((safe_unary_minus_func_uint32_t_u(((g_149 , (safe_rshift_func_uint16_t_u_s((((*l_326) = (((*l_181) = func_45(((*l_181) = (safe_mod_func_int16_t_s_s(g_149, (((*l_247) = ((*l_340) == ((((*l_340) | ((((safe_rshift_func_uint8_t_u_u(((((safe_mod_func_uint16_t_u_u(((l_394 = func_45(func_45(((*l_181) = (safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((0x1819L && ((*l_326) = ((safe_rshift_func_int16_t_s_u(g_94, ((*l_299) = (safe_sub_func_uint8_t_u_u((~((void*)0 == &g_348)), g_302))))) , 0x8147L))), 5)), 0x3531L)), g_35))), (*g_138), (*g_137), (*g_137)), (*g_138), (*g_137), l_393)) ^ 0x6606L), g_106)) || g_242) , 4294967288UL) , p_30), p_30)) ^ g_106) == 9UL) ^ l_395)) , 5UL) && p_32))) && l_395)))), p_29, l_340, l_340)) > p_30)) ^ p_33), 2))) > 0x8AL))) && p_29) || p_30) , p_32)) , (*g_138));
                        (*g_138) = (3UL && ((((safe_add_func_int16_t_s_s((g_25 & (((*l_181) = (0x96L < (((void*)0 != &g_138) | func_45((0xF352L >= (safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(func_41(p_32, ((&p_31 == (l_294 , (void*)0)) , l_402), l_394), 1L)), (**g_137)))), (*l_349), (*g_137), (*g_137))))) , (*l_393))), g_313)) | 0x1FL) | p_29) >= p_30));
                    }
                    else
                    {
                        char *l_410 = &g_62;
                        int l_411 = 0x9C68050AL;
                        unsigned short *l_414 = &l_344;
                        int ***l_421 = &g_137;
                        (*l_393) = (((*g_138) = 0xF8D0A345L) <= ((((*l_410) = (func_41(g_313, l_175, (((*l_349) = (safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s(g_224, ((p_33 == func_41(g_242, g_409, l_395)) != l_225))), (*l_349))), 0xB9D95947L))) , p_29)) == g_313)) , (void*)0) == g_209));
                        (*l_393) = ((*l_349) = (l_411 || (((l_395 , (safe_add_func_int32_t_s_s(func_41((*l_393), l_414, (*g_138)), (*g_138)))) , (((safe_lshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((-10L), (safe_add_func_int32_t_s_s(((l_411 < (*l_393)) | 0UL), p_29)))), l_395)) , &g_137) != l_421)) <= 249UL)));
                    }
                    (**g_137) = (*g_138);
                    (**g_137) = ((**g_137) & func_41((safe_lshift_func_uint8_t_u_s(l_424, 6)), (l_175 = &g_313), func_45((g_425 != (void*)0), (safe_mod_func_int32_t_s_s(2L, l_395)), (*g_137), func_36(((*l_326) = g_94), l_429, p_33, l_395))));

                    ;
                    if ((l_225 = (l_430 != l_431)))
                    {
                        short **l_433 = &l_326;
                        short ***l_432 = &l_433;
                        (*l_432) = &l_326;
                    }
                    else
                    {
                        char l_434 = 0xEFL;
                        return l_434;


                    }
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

        ;
        for (l_364 = 0; (l_364 > 16); ++l_364)
        {
            const int *l_437 = &g_35;
            const int **l_438 = &l_437;
            (*g_137) = (*g_137);
            (*l_438) = l_437;
            (*l_438) = &l_222;

            ;
            if ((*l_393))
                break;
        }
        (*l_393) = ((func_41((*l_393), l_158, (((((g_319 <= p_30) , func_41(((l_439 = &p_32) == (void*)0), l_440, (safe_lshift_func_int8_t_s_u(func_41(p_32, &l_424, l_202), 7)))) != 0xE2FDA724L) ^ l_252) > g_134)) ^ p_33) != p_32);

        ;
    }
    else
    {
        return p_29;
    }



    ;
    ;
    ;
    return (*g_24);


}







static int * func_36(short p_37, unsigned short * p_38, short p_39, int p_40)
{
    short l_56 = 0xD0C6L;
    char *l_61 = &g_62;
    int *l_64 = &g_65;
    unsigned short *l_96 = &g_25;
    int **l_104 = (void*)0;
    int **l_105 = &l_64;
    int *l_107 = &g_65;
    (*l_105) = (func_41(((func_45(p_37, (((g_5 , ((*l_64) = (safe_add_func_uint16_t_u_u((2UL ^ ((safe_sub_func_uint32_t_u_u(0x699FF93FL, l_56)) != ((safe_sub_func_uint8_t_u_u(0x4CL, ((*l_61) = (safe_rshift_func_int16_t_s_s(l_56, 13))))) | ((safe_unary_minus_func_int8_t_s(g_25)) , (p_39 | p_37))))), l_56)))) , &g_65) != (void*)0), &g_5, &g_5) == (*g_24)) >= 0x58L), l_96, g_25) , &g_5);

    ;
    (*l_107) = ((g_106 = p_39) == (((*p_38) <= p_37) >= p_39));
    for (g_62 = 24; (g_62 <= (-26)); g_62 = safe_sub_func_uint8_t_u_u(g_62, 5))
    {
        int *l_116 = (void*)0;
        int l_143 = 1L;
    }
    return (*g_137);


}







static char func_41(int p_42, unsigned short * p_43, int p_44)
{
    unsigned char l_99 = 252UL;
    int *l_100 = (void*)0;
    int *l_101 = &g_65;
    int l_102 = 0x8462C7DCL;
    char *l_103 = &g_62;
    (*l_101) = (p_44 & ((*l_103) = (func_45((((*l_101) = (safe_rshift_func_int8_t_s_s(l_99, 6))) , ((*g_24) , g_65)), l_102, &g_5, &p_44) >= (p_42 && 0x89L))));
    return p_44;
}







static unsigned short func_45(unsigned p_46, int p_47, int * p_48, int * p_49)
{
    unsigned char l_68 = 0x94L;
    int l_69 = 0x9A458230L;
    char *l_90 = &g_62;
    char **l_89 = &l_90;
    char *l_91 = &g_62;
    unsigned char l_92 = 1UL;
    short *l_93 = &g_88;
    int *l_95 = &l_69;
    (*l_95) = (safe_add_func_int32_t_s_s((l_68 = ((*g_24) , (0UL || 0L))), (l_69 != ((safe_sub_func_uint32_t_u_u(((((safe_rshift_func_uint16_t_u_s((*g_24), (g_94 = ((*l_93) = (0xEAL <= ((safe_sub_func_uint32_t_u_u((((*l_89) = func_76(g_25, l_69, (safe_rshift_func_uint16_t_u_s((l_69 | 1L), l_69)))) != l_91), l_92)) & g_5)))))) , 0xC80BL) , g_62) != l_92), g_62)) != (-1L)))));
    return p_46;
}







static char * func_76(const unsigned char p_77, unsigned p_78, short p_79)
{
    const unsigned l_82 = 0x2AA0BDECL;
    int *l_83 = (void*)0;
    int *l_84 = (void*)0;
    int *l_85 = (void*)0;
    int *l_86 = &g_65;
    short *l_87 = &g_88;
    (*l_86) = l_82;
    (*l_86) = (p_79 >= ((g_5 == ((l_85 == l_85) < (*l_86))) , ((*l_87) = 0xDF54L)));
    return &g_62;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    transparent_crc(g_313, "g_313", print_hash_value);
    transparent_crc(g_319, "g_319", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_528, "g_528", print_hash_value);
    transparent_crc(g_540, "g_540", print_hash_value);
    transparent_crc(g_547, "g_547", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
