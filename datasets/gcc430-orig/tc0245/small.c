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
   unsigned short f1;
   short f2;
   const char f3;
};


static int g_4 = 1L;
static const int *g_36 = &g_4;
static const int **g_35 = &g_36;
static short g_56[4] = {1L, (-9L), 1L, (-9L)};
static int g_59[2] = {0x45925F8AL, 0x45925F8AL};
static char g_64[6] = {0x3BL, 0x3BL, 0x3BL, 0x3BL, 0x3BL, 0x3BL};
static int g_65 = 4L;
static unsigned g_78 = 0xFC85E2D2L;
static int g_86 = 1L;
static unsigned g_87 = 4294967292UL;
static int g_89 = 0x00A8D5E9L;
static int *g_110[3] = {&g_59[0], &g_59[0], &g_59[0]};
static unsigned char g_129[3][6] = {{0xABL, 248UL, 0x3FL, 0UL, 0UL, 0x3FL}, {0xABL, 248UL, 0x3FL, 0UL, 0UL, 0x3FL}, {0xABL, 248UL, 0x3FL, 0UL, 0UL, 0x3FL}};
static struct S0 g_132 = {0xE4L,1UL,-7L,-4L};
static unsigned short g_224 = 0x8AAFL;
static unsigned *g_226 = &g_87;
static unsigned **g_225[9][8] = {{&g_226, &g_226, &g_226, &g_226, &g_226, &g_226, &g_226, &g_226}, {&g_226, &g_226, &g_226, &g_226, &g_226, &g_226, &g_226, &g_226}, {&g_226, &g_226, &g_226, &g_226, &g_226, &g_226, &g_226, &g_226}, {&g_226, &g_226, &g_226, &g_226, &g_226, &g_226, &g_226, &g_226}, {&g_226, &g_226, &g_226, &g_226, &g_226, &g_226, &g_226, &g_226}, {&g_226, &g_226, &g_226, &g_226, &g_226, &g_226, &g_226, &g_226}, {&g_226, &g_226, &g_226, &g_226, &g_226, &g_226, &g_226, &g_226}, {&g_226, &g_226, &g_226, &g_226, &g_226, &g_226, &g_226, &g_226}, {&g_226, &g_226, &g_226, &g_226, &g_226, &g_226, &g_226, &g_226}};
static short *g_264 = (void*)0;
static unsigned g_268 = 0xE396D189L;
static char g_277 = (-5L);
static struct S0 *g_316 = &g_132;
static struct S0 **g_315 = &g_316;
static unsigned g_374 = 4294967294UL;
static unsigned * const g_373 = &g_374;
static unsigned * const *g_372 = &g_373;
static unsigned *g_434[6] = {&g_268, (void*)0, &g_268, (void*)0, &g_268, (void*)0};
static unsigned **g_524 = &g_226;
static char *g_608 = &g_64[2];
static char **g_607[7] = {&g_608, &g_608, (void*)0, &g_608, &g_608, (void*)0, &g_608};
static int *g_682 = &g_65;



static char func_1(void);
static int func_5(struct S0 p_6, int * p_7, int ** p_8);
static struct S0 func_9(unsigned p_10, struct S0 p_11, short p_12, unsigned char p_13);
static unsigned func_14(int * p_15, int * p_16, int ** p_17, int p_18);
static int * func_19(int ** p_20, int ** p_21, char p_22, int * p_23, char p_24);
static struct S0 func_25(int * p_26, const struct S0 p_27);
static struct S0 func_28(unsigned p_29, int p_30, const int ** p_31, const int ** p_32, int p_33);
static const int ** func_37(int * p_38, short p_39);
static int * func_40(const unsigned p_41, const int * const * p_42, const int ** p_43, int * p_44, int * const p_45);
static const int ** func_46(unsigned char p_47, int ** p_48, int ** p_49);
static char func_1(void)
{
    int *l_3[10] = {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4};
    int **l_2 = &l_3[3];
    int l_34 = 0xDC6D0F06L;
    const int l_761 = 0x2917DC4BL;
    int l_762 = 0xCB3D4BACL;
    int i;
    (*l_2) = (void*)0;


    for (g_4 = 0; (g_4 <= 9); g_4 += 1)
    {
        short *l_54 = (void*)0;
        short *l_55 = &g_56[0];
        const int l_57 = 0x1FDF20BEL;
        int * const l_61 = &g_4;
        int **l_707[3][6] = {{&l_3[1], &g_682, &l_3[3], &g_682, &g_682, &l_3[3]}, {&l_3[1], &g_682, &l_3[3], &g_682, &g_682, &l_3[3]}, {&l_3[1], &g_682, &l_3[3], &g_682, &g_682, &l_3[3]}};
        struct S0 l_728 = {0x6BL,0xB43DL,-6L,0xA3L};
        short l_758 = (-9L);
        int i, j;
        l_758 = ((*g_682) = func_5(func_9(func_14(func_19(&l_3[3], (func_25(l_3[g_4], func_28(l_34, g_4, g_35, func_37(func_40(g_4, func_46(((g_4 & ((((*l_55) = (safe_mod_func_int32_t_s_s((((safe_mod_func_uint16_t_u_u(1UL, g_4)) && g_4) != g_4), 0x56E3F0E2L))) >= l_57) > g_4)) ^ g_4), &l_3[g_4], &l_3[3]), &g_36, &g_4, l_61), g_132.f3), g_224)) , (void*)0), (*l_61), l_3[g_4], g_4), l_3[g_4], l_707[0][0], g_374), l_728, g_374, g_224), &g_4, &g_682));

        ;

        ;
        (*g_682) = ((safe_lshift_func_int8_t_s_u((*g_608), 3)) | l_761);
        return l_762;
    }
    return (*g_608);
}







static int func_5(struct S0 p_6, int * p_7, int ** p_8)
{
    unsigned char l_744 = 250UL;
    int * const l_751 = &g_65;
    unsigned l_757 = 0x9CF8FAD7L;
    for (g_132.f1 = 4; (g_132.f1 != 45); g_132.f1++)
    {
        unsigned l_737 = 4294967295UL;
        int **l_752 = &g_110[0];
        (*g_35) = func_19(&g_110[0], &g_682, l_737, (*p_8), ((safe_rshift_func_int16_t_s_s(g_129[2][0], (safe_add_func_uint8_t_u_u(g_268, ((safe_lshift_func_uint8_t_u_s(((g_132.f0 = l_744) , ((safe_rshift_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((*g_682) , g_277), 4UL)), p_6.f3)) >= l_737) <= (*p_7)), 6)) && 0xE2AB03C0L)), p_6.f3)) < l_744))))) || 0x92DFE5D9L));
        (*l_752) = l_751;
        for (g_277 = 0; (g_277 >= (-21)); --g_277)
        {
            return (*g_682);
        }
        for (l_744 = 0; (l_744 != 20); l_744 = safe_add_func_int16_t_s_s(l_744, 1))
        {
            return (*p_7);
        }
    }
    return l_757;
}







static struct S0 func_9(unsigned p_10, struct S0 p_11, short p_12, unsigned char p_13)
{
    short l_729 = 1L;
    int **l_732 = &g_110[2];
    unsigned short *l_733 = &g_224;
    struct S0 l_734[2][6] = {{{0x20L,1UL,0L,-6L}, {0UL,0x7699L,0xB44BL,0x88L}, {0x20L,1UL,0L,-6L}, {0UL,0x7699L,0xB44BL,0x88L}, {0x20L,1UL,0L,-6L}, {0UL,0x7699L,0xB44BL,0x88L}}, {{0x20L,1UL,0L,-6L}, {0UL,0x7699L,0xB44BL,0x88L}, {0x20L,1UL,0L,-6L}, {0UL,0x7699L,0xB44BL,0x88L}, {0x20L,1UL,0L,-6L}, {0UL,0x7699L,0xB44BL,0x88L}}};
    int i, j;
    (*g_682) |= ((((l_729 , (safe_sub_func_uint32_t_u_u((p_11.f0 <= ((*l_733) &= p_11.f0)), p_12))) || (**g_372)) , 0x3877L) && g_132.f1);
    return l_734[1][3];
}







static unsigned func_14(int * p_15, int * p_16, int ** p_17, int p_18)
{
    int l_710[7][9] = {{0L, 0xA70EB9C4L, 0x0EFD4A7CL, 0x7DC3BFC5L, 1L, 1L, 0x7DC3BFC5L, 0x0EFD4A7CL, 0xA70EB9C4L}, {0L, 0xA70EB9C4L, 0x0EFD4A7CL, 0x7DC3BFC5L, 1L, 1L, 0x7DC3BFC5L, 0x0EFD4A7CL, 0xA70EB9C4L}, {0L, 0xA70EB9C4L, 0x0EFD4A7CL, 0x7DC3BFC5L, 1L, 1L, 0x7DC3BFC5L, 0x0EFD4A7CL, 0xA70EB9C4L}, {0L, 0xA70EB9C4L, 0x0EFD4A7CL, 0x7DC3BFC5L, 1L, 1L, 0x7DC3BFC5L, 0x0EFD4A7CL, 0xA70EB9C4L}, {0L, 0xA70EB9C4L, 0x0EFD4A7CL, 0x7DC3BFC5L, 1L, 1L, 0x7DC3BFC5L, 0x0EFD4A7CL, 0xA70EB9C4L}, {0L, 0xA70EB9C4L, 0x0EFD4A7CL, 0x7DC3BFC5L, 1L, 1L, 0x7DC3BFC5L, 0x0EFD4A7CL, 0xA70EB9C4L}, {0L, 0xA70EB9C4L, 0x0EFD4A7CL, 0x7DC3BFC5L, 1L, 1L, 0x7DC3BFC5L, 0x0EFD4A7CL, 0xA70EB9C4L}};
    short **l_720 = &g_264;
    short **l_722[1];
    int i, j;
    for (i = 0; i < 1; i++)
        l_722[i] = &g_264;
    for (g_132.f1 = 18; (g_132.f1 > 6); g_132.f1 = safe_sub_func_int32_t_s_s(g_132.f1, 1))
    {
        (*g_35) = p_15;

        ;
        return l_710[0][8];
    }
    (*g_35) = &g_59[0];

    ;
    (*p_15) ^= (*g_682);
    for (g_277 = (-9); (g_277 <= 23); g_277 = safe_add_func_uint16_t_u_u(g_277, 1))
    {
        int l_713 = 0xC81CB2C8L;
        short ***l_721 = &l_720;
        unsigned *** const l_723 = &g_225[3][5];
        unsigned *l_724 = (void*)0;
        unsigned *l_725[9][10] = {{&g_268, &g_268, &g_268, &g_268, &g_268, (void*)0, &g_268, (void*)0, &g_268, (void*)0}, {&g_268, &g_268, &g_268, &g_268, &g_268, (void*)0, &g_268, (void*)0, &g_268, (void*)0}, {&g_268, &g_268, &g_268, &g_268, &g_268, (void*)0, &g_268, (void*)0, &g_268, (void*)0}, {&g_268, &g_268, &g_268, &g_268, &g_268, (void*)0, &g_268, (void*)0, &g_268, (void*)0}, {&g_268, &g_268, &g_268, &g_268, &g_268, (void*)0, &g_268, (void*)0, &g_268, (void*)0}, {&g_268, &g_268, &g_268, &g_268, &g_268, (void*)0, &g_268, (void*)0, &g_268, (void*)0}, {&g_268, &g_268, &g_268, &g_268, &g_268, (void*)0, &g_268, (void*)0, &g_268, (void*)0}, {&g_268, &g_268, &g_268, &g_268, &g_268, (void*)0, &g_268, (void*)0, &g_268, (void*)0}, {&g_268, &g_268, &g_268, &g_268, &g_268, (void*)0, &g_268, (void*)0, &g_268, (void*)0}};
        int l_726 = (-1L);
        unsigned l_727[8] = {0xC2288176L, 1UL, 0xC2288176L, 1UL, 0xC2288176L, 1UL, 0xC2288176L, 1UL};
        int i, j;
        (*p_15) &= (l_713 = l_710[0][0]);
        (*p_15) |= (safe_lshift_func_int8_t_s_u((((safe_rshift_func_uint8_t_u_u((246UL == p_18), (((l_713 <= (((safe_sub_func_uint8_t_u_u(0xD0L, (((4294967295UL >= (((*l_721) = l_720) != l_722[0])) && ((((l_726 = (l_713 , ((void*)0 == l_723))) , (void*)0) == (void*)0) || p_18)) <= l_727[0]))) & 0x62C6L) , (*g_373))) == 0L) >= l_710[0][8]))) < 0x5B3EL) , p_18), l_710[0][3]));
    }
    return p_18;
}







static int * func_19(int ** p_20, int ** p_21, char p_22, int * p_23, char p_24)
{
    short l_331 = 8L;
    int *l_332 = &g_59[0];
    int l_421 = (-8L);
    int *l_453 = &g_4;
    const struct S0 l_474 = {0x7BL,65533UL,0x3D05L,2L};
    unsigned l_486 = 0x2952155AL;
    short * const *l_495 = &g_264;
    int l_545 = 0x27DF98F8L;
    unsigned **l_600[2][10] = {{&g_434[1], &g_434[1], &g_434[1], &g_434[1], &g_434[1], &g_434[1], &g_434[1], &g_434[1], &g_434[1], &g_434[1]}, {&g_434[1], &g_434[1], &g_434[1], &g_434[1], &g_434[1], &g_434[1], &g_434[1], &g_434[1], &g_434[1], &g_434[1]}};
    int l_624 = (-1L);
    short *l_625 = &g_56[2];
    int i, j;
    (*l_332) = l_331;
    return &g_59[1];


}







static struct S0 func_25(int * p_26, const struct S0 p_27)
{
    short l_309 = 0xAB84L;
    for (g_65 = 9; (g_65 > (-21)); g_65 = safe_sub_func_uint8_t_u_u(g_65, 3))
    {
        unsigned l_312[1];
        struct S0 *l_314[5] = {&g_132, &g_132, &g_132, &g_132, &g_132};
        struct S0 **l_313 = &l_314[3];
        char *l_319 = &g_277;
        int *l_324 = &g_59[0];
        int i;
        for (i = 0; i < 1; i++)
            l_312[i] = 1UL;
        if (l_309)
            break;
        (*l_324) = (safe_add_func_int32_t_s_s(((((l_312[0] , (l_313 == g_315)) ^ (safe_mod_func_int8_t_s_s(((*l_319) = 1L), (p_27.f2 ^ ((((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(255UL, p_27.f0)) >= l_312[0]), l_312[0])) != 0x2776L) , l_312[0]) >= l_309))))) , p_27.f3) > (-1L)), l_309));
        (*l_324) = (p_27.f0 ^ ((*l_324) >= ((safe_mod_func_uint8_t_u_u(0xD4L, p_27.f3)) > p_27.f1)));
        (*l_324) &= (safe_add_func_int16_t_s_s(p_27.f3, g_87));
    }
    return (**g_315);
}







static struct S0 func_28(unsigned p_29, int p_30, const int ** p_31, const int ** p_32, int p_33)
{
    unsigned l_303 = 4294967289UL;
    int *l_304 = &g_59[0];
    (*l_304) = l_303;
    p_33 ^= (((-5L) < (*l_304)) & ((p_29 & ((safe_mod_func_int8_t_s_s((*l_304), p_29)) ^ (g_132.f1 != (p_29 , ((*l_304) != (*l_304)))))) != g_65));
    return g_132;
}







static const int ** func_37(int * p_38, short p_39)
{
    int l_218 = 0xCD6723ACL;
    int l_232 = 0x0BF3EEE9L;
    int l_233 = 1L;
    const int l_250 = 0x16E1E9FAL;
    struct S0 *l_294 = (void*)0;
    int *l_298 = (void*)0;
    int **l_297 = &l_298;
    short *l_299 = &g_56[1];
    int *l_300 = &g_65;
    int *l_301 = &g_59[0];
    const int **l_302[8] = {&g_36, &g_36, &g_36, &g_36, &g_36, &g_36, &g_36, &g_36};
    int i;
    l_218 = (safe_sub_func_uint16_t_u_u(5UL, g_64[2]));
    for (g_132.f1 = (-10); (g_132.f1 >= 53); g_132.f1 = safe_add_func_int16_t_s_s(g_132.f1, 9))
    {
        short l_221 = 0x4D01L;
        int *l_222[10][3] = {{&g_65, (void*)0, (void*)0}, {&g_65, (void*)0, (void*)0}, {&g_65, (void*)0, (void*)0}, {&g_65, (void*)0, (void*)0}, {&g_65, (void*)0, (void*)0}, {&g_65, (void*)0, (void*)0}, {&g_65, (void*)0, (void*)0}, {&g_65, (void*)0, (void*)0}, {&g_65, (void*)0, (void*)0}, {&g_65, (void*)0, (void*)0}};
        unsigned short *l_223[8][4][3] = {{{&g_132.f1, (void*)0, &g_132.f1}, {&g_132.f1, (void*)0, &g_132.f1}, {&g_132.f1, (void*)0, &g_132.f1}, {&g_132.f1, (void*)0, &g_132.f1}}, {{&g_132.f1, (void*)0, &g_132.f1}, {&g_132.f1, (void*)0, &g_132.f1}, {&g_132.f1, (void*)0, &g_132.f1}, {&g_132.f1, (void*)0, &g_132.f1}}, {{&g_132.f1, (void*)0, &g_132.f1}, {&g_132.f1, (void*)0, &g_132.f1}, {&g_132.f1, (void*)0, &g_132.f1}, {&g_132.f1, (void*)0, &g_132.f1}}, {{&g_132.f1, (void*)0, &g_132.f1}, {&g_132.f1, (void*)0, &g_132.f1}, {&g_132.f1, (void*)0, &g_132.f1}, {&g_132.f1, (void*)0, &g_132.f1}}, {{&g_132.f1, (void*)0, &g_132.f1}, {&g_132.f1, (void*)0, &g_132.f1}, {&g_132.f1, (void*)0, &g_132.f1}, {&g_132.f1, (void*)0, &g_132.f1}}, {{&g_132.f1, (void*)0, &g_132.f1}, {&g_132.f1, (void*)0, &g_132.f1}, {&g_132.f1, (void*)0, &g_132.f1}, {&g_132.f1, (void*)0, &g_132.f1}}, {{&g_132.f1, (void*)0, &g_132.f1}, {&g_132.f1, (void*)0, &g_132.f1}, {&g_132.f1, (void*)0, &g_132.f1}, {&g_132.f1, (void*)0, &g_132.f1}}, {{&g_132.f1, (void*)0, &g_132.f1}, {&g_132.f1, (void*)0, &g_132.f1}, {&g_132.f1, (void*)0, &g_132.f1}, {&g_132.f1, (void*)0, &g_132.f1}}};
        unsigned **l_228 = &g_226;
        unsigned ***l_227 = &l_228;
        int *l_229 = &g_86;
        int ** const l_242 = (void*)0;
        int ** const *l_241 = &l_242;
        int * const l_282 = (void*)0;
        int * const *l_281 = &l_282;
        int i, j, k;
        l_218 = l_221;
        (*g_35) = (((l_218 = 0x9A50L) > ((g_89 > ((!((*l_229) = (g_225[3][4] != ((*l_227) = &g_226)))) , ((safe_rshift_func_int16_t_s_u(g_132.f2, (l_232 = l_232))) & l_233))) , g_56[3])) , &l_218);

        ;
        if ((p_39 || g_64[2]))
        {
            int l_247[2];
            int l_254 = 0x05F164A4L;
            int l_255 = 0L;
            int l_256 = (-1L);
            unsigned char l_259 = 0x30L;
            short *l_262 = &g_56[0];
            short **l_263 = &l_262;
            unsigned *l_267 = &g_268;
            short *l_269[7] = {&g_132.f2, &l_221, &g_132.f2, &l_221, &g_132.f2, &l_221, &g_132.f2};
            unsigned char *l_274 = (void*)0;
            unsigned char *l_275[8];
            int i;
            for (i = 0; i < 2; i++)
                l_247[i] = 0x5E685B2BL;
            for (i = 0; i < 8; i++)
                l_275[i] = &g_132.f0;
            for (g_89 = 0; (g_89 == (-22)); --g_89)
            {
                int **l_236 = &l_229;
                int ***l_237 = &l_236;
                int **l_238[6] = {&l_222[6][2], &l_222[6][2], &l_222[5][2], &l_222[6][2], &l_222[6][2], &l_222[5][2]};
                char *l_251 = &g_64[3];
                short *l_252 = (void*)0;
                short *l_253 = &g_132.f2;
                int i;
                (*g_35) = (*g_35);
                (*l_237) = l_236;
                (*g_35) = (g_110[2] = l_222[2][1]);
                l_256 |= (l_255 = (l_232 , (l_254 = (safe_rshift_func_int16_t_s_s((((void*)0 == l_241) | p_39), (((g_86 > g_59[0]) , (!(p_39 , ((((*l_253) = (((safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s((l_247[0] , ((*l_251) |= ((safe_sub_func_int8_t_s_s(((((l_250 & 0x9538L) > p_39) & 1L) , 0xB1L), 0xB7L)) & g_132.f2))), (-1L))), (*p_38))) != p_39) < 4294967295UL)) != p_39) , l_218)))) , (-9L)))))));
            }

            ;
            l_254 = ((safe_mod_func_uint8_t_u_u((l_250 & l_250), (l_232 && (4294967295UL || l_259)))) <= ((g_132.f1 | (safe_rshift_func_uint8_t_u_u(((((**l_228) = ((g_264 = ((*l_263) = l_262)) == ((((*l_229) ^= 7L) , ((*l_267) = (safe_sub_func_uint16_t_u_u(0UL, p_39)))) , l_269[3]))) && (*p_38)) , g_129[2][1]), l_259))) != p_39));

            ;
            l_233 = (safe_mod_func_uint16_t_u_u((((g_129[0][3] , 0x098EABEDL) > (l_254 |= (safe_rshift_func_int16_t_s_u((*g_264), (l_232 = (p_39 || p_39)))))) <= (l_218 = (l_256 > g_132.f2))), 0xDCE1L));
        }
        else
        {
            unsigned * const l_276 = &g_268;
            int l_278 = 0xE1D0457AL;
            int **l_290 = &l_229;
            int l_291 = 0x7F26593BL;
            int l_292 = (-1L);
            int **l_293 = &g_110[2];
            for (l_221 = 4; (l_221 >= 0); l_221 -= 1)
            {
                int * const *l_279 = &l_229;
                int * const **l_280[5] = {&l_279, &l_279, &l_279, &l_279, &l_279};
                int i;
                l_292 &= ((l_291 |= (l_276 != (((l_218 &= 4294967295UL) && (l_278 = ((((l_233 = ((g_277 = g_64[(l_221 + 1)]) < l_278)) || ((void*)0 != &g_264)) , ((l_281 = l_279) != (((((safe_lshift_func_int16_t_s_s((((safe_unary_minus_func_uint8_t_u(((*g_226) > ((safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((*p_38), 1L)), 0x8B6D9E19L)) <= 0xC667L)))) > p_39) >= p_39), l_232)) < 255UL) || 1UL) , 0x064BL) , l_290))) | p_39))) , (void*)0))) >= (*p_38));
            }

            ;
            (*g_35) = ((*l_293) = &g_59[1]);

            ;
            l_278 ^= (**g_35);
        }

        ;
        ;
    }

    ;

    ;
    l_294 = l_294;
    (*l_301) = ((*l_300) = (safe_sub_func_uint16_t_u_u(((l_250 , (p_39 != p_39)) , ((void*)0 == &g_129[2][1])), (((*l_299) &= ((void*)0 == l_297)) >= g_87))));
    return &g_36;




}







static int * func_40(const unsigned p_41, const int * const * p_42, const int ** p_43, int * p_44, int * const p_45)
{
    int *l_68 = &g_59[0];
    int l_75 = 0L;
    int **l_95[1];
    const int *l_106 = &g_65;
    int l_117 = 0xEF1BB21AL;
    const struct S0 l_125 = {0x75L,0x070AL,0L,-5L};
    unsigned l_152 = 0UL;
    int i;
    for (i = 0; i < 1; i++)
        l_95[i] = (void*)0;
    if ((**p_42))
    {
        int **l_72 = &l_68;
        int l_76[2][10][8] = {{{7L, 1L, 0x5542ED5AL, 1L, 0xBE8BA66FL, 0xE890704AL, 0xA6AFE108L, (-7L)}, {7L, 1L, 0x5542ED5AL, 1L, 0xBE8BA66FL, 0xE890704AL, 0xA6AFE108L, (-7L)}, {7L, 1L, 0x5542ED5AL, 1L, 0xBE8BA66FL, 0xE890704AL, 0xA6AFE108L, (-7L)}, {7L, 1L, 0x5542ED5AL, 1L, 0xBE8BA66FL, 0xE890704AL, 0xA6AFE108L, (-7L)}, {7L, 1L, 0x5542ED5AL, 1L, 0xBE8BA66FL, 0xE890704AL, 0xA6AFE108L, (-7L)}, {7L, 1L, 0x5542ED5AL, 1L, 0xBE8BA66FL, 0xE890704AL, 0xA6AFE108L, (-7L)}, {7L, 1L, 0x5542ED5AL, 1L, 0xBE8BA66FL, 0xE890704AL, 0xA6AFE108L, (-7L)}, {7L, 1L, 0x5542ED5AL, 1L, 0xBE8BA66FL, 0xE890704AL, 0xA6AFE108L, (-7L)}, {7L, 1L, 0x5542ED5AL, 1L, 0xBE8BA66FL, 0xE890704AL, 0xA6AFE108L, (-7L)}, {7L, 1L, 0x5542ED5AL, 1L, 0xBE8BA66FL, 0xE890704AL, 0xA6AFE108L, (-7L)}}, {{7L, 1L, 0x5542ED5AL, 1L, 0xBE8BA66FL, 0xE890704AL, 0xA6AFE108L, (-7L)}, {7L, 1L, 0x5542ED5AL, 1L, 0xBE8BA66FL, 0xE890704AL, 0xA6AFE108L, (-7L)}, {7L, 1L, 0x5542ED5AL, 1L, 0xBE8BA66FL, 0xE890704AL, 0xA6AFE108L, (-7L)}, {7L, 1L, 0x5542ED5AL, 1L, 0xBE8BA66FL, 0xE890704AL, 0xA6AFE108L, (-7L)}, {7L, 1L, 0x5542ED5AL, 1L, 0xBE8BA66FL, 0xE890704AL, 0xA6AFE108L, (-7L)}, {7L, 1L, 0x5542ED5AL, 1L, 0xBE8BA66FL, 0xE890704AL, 0xA6AFE108L, (-7L)}, {7L, 1L, 0x5542ED5AL, 1L, 0xBE8BA66FL, 0xE890704AL, 0xA6AFE108L, (-7L)}, {7L, 1L, 0x5542ED5AL, 1L, 0xBE8BA66FL, 0xE890704AL, 0xA6AFE108L, (-7L)}, {7L, 1L, 0x5542ED5AL, 1L, 0xBE8BA66FL, 0xE890704AL, 0xA6AFE108L, (-7L)}, {7L, 1L, 0x5542ED5AL, 1L, 0xBE8BA66FL, 0xE890704AL, 0xA6AFE108L, (-7L)}}};
        unsigned *l_77 = &g_78;
        struct S0 l_81[9] = {{3UL,0x18D1L,0L,5L}, {0x91L,65535UL,0x32C2L,-8L}, {3UL,0x18D1L,0L,5L}, {0x91L,65535UL,0x32C2L,-8L}, {3UL,0x18D1L,0L,5L}, {0x91L,65535UL,0x32C2L,-8L}, {3UL,0x18D1L,0L,5L}, {0x91L,65535UL,0x32C2L,-8L}, {3UL,0x18D1L,0L,5L}};
        unsigned short *l_88 = &l_81[2].f1;
        int *l_90 = &g_59[1];
        int i, j, k;
        if (((-1L) < ((safe_add_func_uint16_t_u_u(g_59[0], (g_56[0] > (g_64[2] ^= (g_56[3] < g_59[0]))))) && 0UL)))
        {
            for (g_65 = (-25); (g_65 >= 6); ++g_65)
            {
                return p_44;


            }
            return l_68;


        }
        else
        {
            const int **l_71 = &g_36;
            for (g_65 = 14; (g_65 != 19); g_65 = safe_add_func_uint32_t_u_u(g_65, 7))
            {
                return &g_65;


            }
            (*l_71) = (*p_42);
        }
        (*l_90) = (l_76[0][5][7] = (p_41 ^ (((0xF0L >= (((*l_72) = &g_4) != (*p_42))) | (safe_add_func_uint16_t_u_u((g_89 |= ((*l_88) = ((((*l_77) = (l_75 > l_76[0][5][2])) , ((safe_sub_func_uint16_t_u_u((g_87 |= (l_81[2] , ((safe_add_func_int32_t_s_s((g_86 &= ((!l_75) <= ((safe_mod_func_uint32_t_u_u((((g_59[0] == l_75) , g_64[5]) && 0x08C6L), g_65)) < (-8L)))), p_41)) < p_41))), g_56[0])) , 0xD0B9L)) >= g_59[0]))), g_59[1]))) >= g_56[0])));

        ;
        (*l_90) &= ((safe_sub_func_int32_t_s_s(((((0UL == (safe_lshift_func_uint16_t_u_s(((void*)0 != &p_45), g_86))) != ((&g_36 == (l_95[0] = &p_44)) | 0xD2D6L)) <= ((((safe_rshift_func_int16_t_s_s((g_89 , (((**l_72) <= 0x431BEC19L) || 0xC64A1B41L)), 13)) > (**l_72)) != p_41) && g_65)) , (**g_35)), (*p_45))) && 0x5EE0523CL);


    }
    else
    {
        unsigned short l_115 = 0UL;
        int *l_151 = &g_89;
        if ((*l_68))
        {
            char l_116 = 0xF2L;
            int *l_150[4][3][7] = {{{&g_59[0], &g_89, (void*)0, &g_59[0], &g_89, &g_65, &g_89}, {&g_59[0], &g_89, (void*)0, &g_59[0], &g_89, &g_65, &g_89}, {&g_59[0], &g_89, (void*)0, &g_59[0], &g_89, &g_65, &g_89}}, {{&g_59[0], &g_89, (void*)0, &g_59[0], &g_89, &g_65, &g_89}, {&g_59[0], &g_89, (void*)0, &g_59[0], &g_89, &g_65, &g_89}, {&g_59[0], &g_89, (void*)0, &g_59[0], &g_89, &g_65, &g_89}}, {{&g_59[0], &g_89, (void*)0, &g_59[0], &g_89, &g_65, &g_89}, {&g_59[0], &g_89, (void*)0, &g_59[0], &g_89, &g_65, &g_89}, {&g_59[0], &g_89, (void*)0, &g_59[0], &g_89, &g_65, &g_89}}, {{&g_59[0], &g_89, (void*)0, &g_59[0], &g_89, &g_65, &g_89}, {&g_59[0], &g_89, (void*)0, &g_59[0], &g_89, &g_65, &g_89}, {&g_59[0], &g_89, (void*)0, &g_59[0], &g_89, &g_65, &g_89}}};
            int i, j, k;
            for (g_86 = (-3); (g_86 <= (-27)); g_86 = safe_sub_func_int32_t_s_s(g_86, 7))
            {
                int *l_109 = &g_65;
            }
            if (((l_117 = ((((p_41 ^ (~((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((*l_68), 7)) | ((p_41 || l_115) | g_56[1])), 6)) != l_116))) < ((void*)0 != &g_56[0])) < p_41) | g_64[2])) >= p_41))
            {
                int *l_149 = (void*)0;
lbl_156:
                for (g_87 = (-4); (g_87 != 17); ++g_87)
                {
                    (*p_43) = (*g_35);
                }
                for (l_116 = (-9); (l_116 >= 20); l_116 = safe_add_func_int32_t_s_s(l_116, 6))
                {
                    unsigned char *l_128 = &g_129[0][3];
                    int l_133 = (-10L);
                    short *l_134 = &g_132.f2;
                    int l_153 = 1L;
                    (*l_68) = (safe_rshift_func_int8_t_s_u((((safe_unary_minus_func_int16_t_s((p_41 | p_41))) > (l_125 , ((*l_68) == ((((*l_128) = ((safe_rshift_func_uint16_t_u_s(l_115, p_41)) <= g_64[2])) > (safe_mod_func_int16_t_s_s(6L, ((*l_134) = (g_132 , l_133))))) && (*p_44))))) & 9L), 0));
                    (*l_68) &= (((0x0FL == ((safe_lshift_func_uint8_t_u_s(((l_133 = (safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((+0x1BD9B2BBL), ((+g_65) & l_115))), 3))) , p_41), 2)) >= (((safe_rshift_func_uint16_t_u_s((((safe_add_func_int16_t_s_s(((l_125 , &p_44) == ((safe_rshift_func_int16_t_s_u(((p_44 = (l_149 = &g_65)) == (l_151 = l_150[2][0][6])), 10)) , (void*)0)), g_129[0][3])) && l_152) ^ g_87), 9)) <= g_89) , l_153))) > 1L) == 0x9FL);

                    ;
                    ;
                    for (g_132.f1 = 0; (g_132.f1 <= 3); g_132.f1 = safe_add_func_uint16_t_u_u(g_132.f1, 4))
                    {
                        if (l_133)
                            break;
                        if (l_125.f0)
                            goto lbl_156;
                    }
                }
            }
            else
            {
                char l_159 = 0xF1L;
                int *l_178 = &g_65;
                int *l_179[10][3][8] = {{{&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}, {&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}, {&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}}, {{&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}, {&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}, {&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}}, {{&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}, {&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}, {&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}}, {{&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}, {&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}, {&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}}, {{&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}, {&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}, {&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}}, {{&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}, {&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}, {&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}}, {{&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}, {&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}, {&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}}, {{&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}, {&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}, {&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}}, {{&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}, {&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}, {&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}}, {{&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}, {&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}, {&g_65, (void*)0, (void*)0, &g_59[1], &g_59[0], &g_4, &g_4, (void*)0}}};
                const struct S0 * const l_181 = (void*)0;
                int i, j, k;
                for (g_86 = 3; (g_86 <= (-1)); g_86 = safe_sub_func_int8_t_s_s(g_86, 9))
                {
                    l_159 = (p_41 < 4294967295UL);
                    (*p_43) = (void*)0;

                    ;
                    (*p_43) = (*g_35);
                }

                ;
                for (l_75 = 0; (l_75 <= 5); l_75 += 1)
                {
                    unsigned l_180 = 3UL;
                    for (g_65 = 1; (g_65 >= 0); g_65 -= 1)
                    {
                        unsigned *l_168[1][9][3] = {{{&g_87, &g_87, &g_78}, {&g_87, &g_87, &g_78}, {&g_87, &g_87, &g_78}, {&g_87, &g_87, &g_78}, {&g_87, &g_87, &g_78}, {&g_87, &g_87, &g_78}, {&g_87, &g_87, &g_78}, {&g_87, &g_87, &g_78}, {&g_87, &g_87, &g_78}}};
                        unsigned char *l_171 = &g_132.f0;
                        struct S0 *l_175[10] = {&g_132, &g_132, &g_132, &g_132, &g_132, &g_132, &g_132, &g_132, &g_132, &g_132};
                        struct S0 **l_174 = &l_175[2];
                        int i, j, k;
                        (*l_151) |= (safe_lshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((g_64[l_75] || (((*l_68) = g_64[l_75]) < (safe_lshift_func_uint8_t_u_s(((*l_171) = g_64[l_75]), 2)))) , (g_64[l_75] , ((safe_sub_func_uint8_t_u_u(0x03L, (g_129[2][2] , ((((*l_171) = g_129[0][3]) == ((&g_87 != &g_87) <= p_41)) != g_59[0])))) <= p_41))), g_65)), 0UL)), g_132.f2));
                        (*l_174) = &g_132;
                    }
                    for (l_152 = 27; (l_152 != 59); l_152 = safe_add_func_int16_t_s_s(l_152, 8))
                    {
                        const struct S0 *l_183 = &l_125;
                        const struct S0 **l_182 = &l_183;
                        l_179[0][1][2] = (l_178 = &g_65);
                        if (l_180)
                            break;
                        (*l_68) = (*p_45);
                        (*l_182) = l_181;

                        ;
                    }
                }
                for (g_132.f0 = 0; (g_132.f0 < 12); g_132.f0 = safe_add_func_int32_t_s_s(g_132.f0, 9))
                {
                    int l_188 = 0x002C6F77L;
                    unsigned *l_203 = &l_152;
                    unsigned **l_202 = &l_203;
                    unsigned ***l_204 = &l_202;
                    for (g_89 = (-21); (g_89 == (-20)); ++g_89)
                    {
                        (*p_43) = (*g_35);
                    }
                    if (l_188)
                    {
                        unsigned char l_189 = 1UL;
                        (*l_178) ^= (l_189 & (*p_45));
                    }
                    else
                    {
                        char *l_192 = (void*)0;
                        char *l_193 = &l_159;
                        short *l_196 = (void*)0;
                        short *l_197 = &g_132.f2;
                        (*g_35) = l_178;

                        ;
                        (*l_178) ^= (safe_add_func_uint32_t_u_u((((*l_193) ^= (((0xF52FL & (*l_151)) | g_132.f2) <= g_132.f2)) , (((((*l_197) = (-1L)) < (safe_rshift_func_int16_t_s_s(2L, 4))) ^ p_41) <= ((((safe_lshift_func_uint16_t_u_s((g_64[3] , ((void*)0 != &l_125)), g_59[0])) , p_41) | 0xB14EL) <= 0x03BA3660L))), 0x9F4F8DC8L));
                    }
                    (*l_204) = l_202;
                }

                ;
            }

            ;
            ;
            ;
        }
        else
        {
            int l_207 = 0xED3F469EL;
            struct S0 l_208 = {255UL,2UL,0x6FE4L,0xD9L};
            unsigned *l_215[8][1][2] = {{{&g_87, &g_78}}, {{&g_87, &g_78}}, {{&g_87, &g_78}}, {{&g_87, &g_78}}, {{&g_87, &g_78}}, {{&g_87, &g_78}}, {{&g_87, &g_78}}, {{&g_87, &g_78}}};
            int i, j, k;
            (*l_151) = ((p_41 != ((p_41 || (safe_mod_func_int8_t_s_s(l_207, p_41))) == (l_208 , ((*l_68) = ((**g_35) || (safe_rshift_func_uint16_t_u_s(l_207, ((**g_35) & ((safe_lshift_func_uint16_t_u_u(p_41, g_132.f3)) < g_132.f2))))))))) , (*p_45));
        }

        ;
        ;
        ;
    }

    ;
    ;
    ;

    return &g_4;


}







static const int ** func_46(unsigned char p_47, int ** p_48, int ** p_49)
{
    int *l_58 = &g_59[0];
    const int **l_60 = &g_36;
    (*l_58) = (*g_36);
    return l_60;


}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_56[i], "g_56[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_59[i], "g_59[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_64[i], "g_64[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_129[i][j], "g_129[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_132.f0, "g_132.f0", print_hash_value);
    transparent_crc(g_132.f1, "g_132.f1", print_hash_value);
    transparent_crc(g_132.f2, "g_132.f2", print_hash_value);
    transparent_crc(g_132.f3, "g_132.f3", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
