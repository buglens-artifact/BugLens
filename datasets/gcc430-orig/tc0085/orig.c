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
   unsigned f1;
   unsigned f2 : 7;
   int f3;
   unsigned char f4;
};

union U1 {
   unsigned f0;
   int f1;
   unsigned short f2;
   int f3;
};

union U2 {
   unsigned f0;
};

union U3 {
   char f0;
   signed f1 : 20;
   signed f2 : 17;
};


static unsigned char g_9 = 0x72L;
static int g_13 = (-1L);
static unsigned g_15 = 0UL;
static short g_17 = 0x70F9L;
static union U3 g_64 = {0x75L};
static union U3 *g_63 = &g_64;
static struct S0 g_68 = {0x8CDB5CF6L,4294967286UL,9,0x0585C2C1L,0x2DL};
static unsigned g_83 = 0xFA57A880L;
static unsigned g_86 = 0UL;
static unsigned char g_89 = 2UL;
static int g_92 = 0xF2DB44E9L;
static union U1 g_141 = {0xCD9B7196L};
static union U1 *g_140 = &g_141;
static int g_172 = 0xCFD3AFC3L;
static unsigned *g_187 = &g_86;
static union U2 g_225 = {0x5917A22FL};
static union U2 g_228 = {1UL};
static struct S0 g_229 = {0xE489776AL,4294967289UL,6,0x1F64F3EFL,0x24L};
static unsigned char *g_239 = &g_9;
static unsigned char **g_238 = &g_239;
static union U3 *g_275 = &g_64;
static struct S0 **g_284 = (void*)0;
static unsigned short *g_336 = &g_141.f2;
static unsigned g_445 = 3UL;
static int *g_450 = &g_92;
static unsigned short g_459 = 65535UL;
static union U3 g_477 = {1L};
static short g_480 = 0x78EFL;
static short *g_479 = &g_480;
static char *g_561 = &g_477.f0;
static char **g_560 = &g_561;
static struct S0 *g_621 = &g_68;
static union U1 **g_775 = &g_140;
static union U1 ***g_774 = &g_775;
static unsigned char ***g_811 = &g_238;



static char func_1(void);
static struct S0 func_2(union U1 p_3, char p_4, char p_5, union U3 p_6);
static union U1 func_7(int p_8);
static union U2 func_20(unsigned p_21, unsigned char p_22, short p_23, unsigned * p_24, unsigned p_25);
static unsigned short func_33(union U1 p_34, union U3 p_35, short p_36, union U2 p_37, short * p_38);
static union U3 func_40(short * p_41);
static unsigned short func_42(int p_43, union U2 p_44, struct S0 p_45, short * p_46);
static union U1 func_47(unsigned * p_48);
static char func_54(unsigned * p_55, unsigned p_56, unsigned * p_57, unsigned char p_58, int * p_59);
static unsigned * func_60(unsigned * p_61);
static char func_1(void)
{
    union U3 l_826 = {-8L};
    char ***l_827 = &g_560;
    union U2 l_828 = {0xAD4D5704L};
    (*g_621) = func_2(func_7(g_9), (safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u((*g_479), 7)) < (l_826.f1 = func_33((*g_140), l_826, (l_827 == (void*)0), l_828, &g_480))) > (*g_479)), (*g_479))), (*g_479))), (*g_561), (*g_275));

        ;
        ;
    ;
    ;
        return (*g_561);
}







static struct S0 func_2(union U1 p_3, char p_4, char p_5, union U3 p_6)
{
    int *l_829 = &g_13;
    int **l_830 = (void*)0;
    int **l_831 = &g_450;
    int *l_832 = &g_141.f1;
    union U3 l_837 = {0x96L};
    union U2 l_838 = {0x9CE9BC6FL};
    short *l_839 = &g_17;
    union U1 *l_840 = &g_141;
    char ***l_850 = &g_560;
    char ****l_849 = &l_850;
    (*l_831) = l_829;

    ;
    (*l_832) = ((**l_831) = (*l_829));

        l_840 = ((safe_sub_func_int8_t_s_s((g_15 , p_3.f3), func_42(((*l_829) = (safe_add_func_int16_t_s_s((1UL != p_4), p_3.f1))), l_838, (*g_621), l_839))) , (void*)0);

    ;
        ;
    ;
    ;
    (*g_450) = (((void*)0 != &g_477) , (safe_mod_func_int16_t_s_s(((safe_div_func_int16_t_s_s((*g_479), p_3.f0)) ^ (safe_mod_func_int32_t_s_s((((0xF7L & ((6UL > ((l_849 != &l_850) == (**g_238))) > p_3.f1)) , 65529UL) > (*g_336)), 0x2DCE9277L))), (*l_829))));
    return (*g_621);
}







static union U1 func_7(int p_8)
{
    unsigned *l_481 = &g_15;
    int l_482 = 0xDDBC35ACL;
    char ***l_737 = &g_560;
    char ***l_738 = &g_560;
    union U1 l_741 = {0x832E2A44L};
    short *l_757 = &g_480;
    union U2 l_807 = {0x183CE96CL};
    unsigned char ***l_809 = (void*)0;
    unsigned char ***l_812 = &g_238;
    union U3 **l_819 = &g_63;
    for (g_9 = 0; (g_9 >= 24); g_9 = safe_add_func_int32_t_s_s(g_9, 1))
    {
        int *l_12 = &g_13;
        unsigned *l_14 = &g_15;
        short *l_16 = &g_17;
        union U1 l_39 = {0UL};
        union U2 l_478 = {0x4CB6625CL};
        struct S0 l_739 = {0x0554102AL,0x5524EA8EL,9,1L,248UL};
        union U3 l_742 = {2L};
        char **l_743 = (void*)0;
        int **l_818 = &l_12;
        (*l_12) = 0L;
    }
    (*l_819) = &g_477;

    ;
    return (**g_775);

    }







static union U2 func_20(unsigned p_21, unsigned char p_22, short p_23, unsigned * p_24, unsigned p_25)
{
    unsigned short **l_484 = (void*)0;
    unsigned short ***l_483 = &l_484;
    unsigned *l_506 = &g_68.f1;
    union U2 l_540 = {0x0C0A89FBL};
    int l_542 = 0L;
    union U1 **l_544 = &g_140;
    struct S0 l_549 = {4294967292UL,8UL,6,0xA2D5D520L,1UL};
    unsigned **l_615 = (void*)0;
    short *l_636 = (void*)0;
    struct S0 l_672 = {0x65396BA6L,4294967290UL,0,0xD4506FB5L,0x1FL};
    char l_683 = 8L;
    int **l_687 = (void*)0;
    int **l_688 = &g_450;
    int *l_690 = &g_92;
    int **l_689 = &l_690;
    union U3 *l_692 = &g_477;
    union U3 **l_693 = &g_63;
    union U3 l_710 = {-2L};
    if ((*g_450))
    {
        (*g_450) = (*g_450);
        if (g_92)
            goto lbl_691;
    }
    else
    {
        unsigned short ***l_485 = &l_484;
        union U1 l_486 = {0UL};
        union U3 l_487 = {0xC7L};
        unsigned short l_526 = 8UL;
        int *l_556 = (void*)0;
        struct S0 l_568 = {4294967293UL,0x18722531L,1,1L,0x92L};
        unsigned **l_610 = &l_506;
        short *l_644 = (void*)0;
        unsigned char l_656 = 0x39L;
        struct S0 l_686 = {0x32B0800DL,1UL,5,5L,255UL};
    }
lbl_691:
    (*l_689) = ((*l_688) = &l_542);

    ;
    ;
    if ((((*l_693) = l_692) != (void*)0))
    {
        unsigned char l_696 = 9UL;
        int l_708 = (-3L);
        union U1 l_709 = {4294967295UL};
        union U2 l_711 = {9UL};
        short *l_712 = &g_17;
        int l_714 = 6L;
        for (l_683 = 0; (l_683 <= 29); ++l_683)
        {
            short l_699 = 0x2DDAL;
            int l_713 = 1L;
            (*l_688) = func_60(&g_86);

            ;
            if (g_68.f3)
                goto lbl_721;
            (**l_689) = (g_64.f1 = ((l_696 != (l_713 = (safe_mul_func_int8_t_s_s((l_699 = (**g_560)), ((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((((*g_450) <= (l_708 = (((*l_506) = (safe_mul_func_int8_t_s_s(2L, (safe_add_func_uint16_t_u_u(p_23, p_21))))) <= (*p_24)))) != ((p_25 < p_22) , 254UL)), (*g_239))), 0)) ^ (*p_24)))))) ^ 4L));

                    }

        ;
lbl_721:
        (**l_689) = func_33(l_709, (((l_714 && (**l_689)) || (safe_mul_func_int8_t_s_s((-9L), 5UL))) , (*g_275)), (safe_lshift_func_int16_t_s_s(((*g_479) = (((l_696 > (safe_mod_func_int16_t_s_s((p_21 , ((((*l_688) = (*l_689)) != p_24) != 0x9EL)), (*g_336)))) > p_23) < (**g_238))), l_711.f0)), g_228, l_636);

        ;
        (*g_621) = l_549;
        for (g_228.f0 = 0; (g_228.f0 >= 37); g_228.f0 = safe_add_func_uint16_t_u_u(g_228.f0, 8))
        {
            union U2 l_724 = {4294967293UL};
            return l_724;


                    }
    }
    else
    {
        union U1 l_725 = {4294967293UL};
        short **l_726 = &g_479;
        if (func_33(l_725, (*g_275), p_23, g_225, ((*l_726) = &p_23)))
        {
            struct S0 l_729 = {0x82289A06L,0x169B3252L,4,0xAC08E1C6L,0xE8L};
            (*g_621) = l_672;
            (**l_688) = (safe_rshift_func_int8_t_s_u((**g_560), 7));
            (*g_621) = l_729;
            g_140 = &l_725;

            ;
        }
        else
        {
            union U2 l_734 = {4294967294UL};
            for (g_68.f0 = 0; (g_68.f0 != 59); g_68.f0 = safe_add_func_int8_t_s_s(g_68.f0, 4))
            {
                return g_228;



                            }
            for (g_229.f3 = 0; (g_229.f3 < 4); g_229.f3 = safe_add_func_uint8_t_u_u(g_229.f3, 6))
            {
                return l_734;



                            }
        }

        ;
        ;
    }

    ;

    ;
    return l_540;



    }







static unsigned short func_33(union U1 p_34, union U3 p_35, short p_36, union U2 p_37, short * p_38)
{
    (*g_450) = (*g_450);
    return (*g_336);
}







static union U3 func_40(short * p_41)
{
    unsigned *l_49 = &g_15;
    int l_221 = 0L;
    union U2 l_222 = {4294967295UL};
    union U2 *l_223 = (void*)0;
    union U2 *l_224 = &g_225;
    union U1 **l_385 = &g_140;
    int *l_388 = &l_221;
    union U3 l_389 = {-1L};
    struct S0 l_395 = {0xB8D20E8FL,0xAA2C0140L,6,0x1B7D9585L,247UL};
    int **l_469 = &l_388;
    if ((func_42(((((func_47(l_49) , ((*l_224) = (l_222 = ((l_221 < l_221) , l_222)))) , (safe_lshift_func_int8_t_s_s(((void*)0 != &g_83), func_54(l_49, (l_221 > 248UL), &g_86, l_222.f0, &l_221)))) || 0L) < l_221), g_228, g_229, &g_17) != g_13))
    {
        int *l_376 = (void*)0;
        int **l_375 = &l_376;
        int *l_378 = &g_13;
        int **l_377 = &l_378;
        unsigned char *l_383 = &g_89;
        union U3 l_384 = {9L};
        (*l_377) = ((*l_375) = &l_221);

        ;
        ;
        (**l_375) = (safe_mod_func_int8_t_s_s(g_229.f4, (0xDFBDL & ((**l_377) == ((safe_add_func_uint32_t_u_u(((((*l_383) = 250UL) > (&g_140 == (l_384 , l_385))) , func_54(&g_15, ((safe_lshift_func_uint8_t_u_s(0x87L, 7)) , 4294967289UL), &g_86, (*l_378), l_388)), 4294967294UL)) > 1UL)))));
        if ((**l_375))
        {
            return l_389;

                    }
        else
        {
            struct S0 *l_390 = &g_229;
            (*l_390) = g_229;
            return l_389;

                    }
    }
    else
    {
        union U3 **l_391 = &g_275;
        struct S0 l_392 = {0xCCFDFDA9L,1UL,9,0x306F493AL,0UL};
        struct S0 *l_393 = &g_229;
        struct S0 *l_394 = &l_392;
        (*l_391) = &g_64;
        (*l_394) = ((*l_393) = l_392);
    }

            ;
    ;
    if (g_229.f4)
    {
        struct S0 *l_396 = &g_229;
        (*l_396) = l_395;
    }
    else
    {
        unsigned short l_397 = 6UL;
        union U1 l_405 = {4294967293UL};
        int *l_407 = (void*)0;
        char l_421 = 8L;
        union U3 *l_422 = &l_389;
        struct S0 *l_434 = &g_229;
        struct S0 **l_433 = &l_434;
        unsigned l_442 = 0x02527ED6L;
        unsigned short **l_460 = &g_336;
        struct S0 ***l_468 = &l_433;
        if ((l_395 , l_397))
        {
            int l_398 = 0xB89F0E90L;
            (*l_388) = l_398;
        }
        else
        {
            unsigned *l_401 = &g_229.f1;
            int l_402 = (-1L);
            union U2 *l_408 = &g_225;
            union U3 *l_423 = &l_389;
            int *l_449 = &g_13;
            for (g_141.f0 = (-13); (g_141.f0 <= 29); g_141.f0 = safe_add_func_int32_t_s_s(g_141.f0, 2))
            {
                int l_406 = 0xC1144BB9L;
                unsigned short **l_415 = &g_336;
                int l_419 = 1L;
                unsigned *l_420 = &g_68.f1;
                struct S0 l_424 = {0xC82EAEAAL,0xF01E3291L,10,0xBA6C3AF9L,0x92L};
                union U1 l_432 = {0x88D637EBL};
                struct S0 **l_435 = &l_434;
                int *l_467 = &l_432.f1;
            }

                    }
        (*l_468) = g_284;

        ;
    }
    (*l_469) = (void*)0;

    ;
    (*g_450) = (*g_450);
    return (*g_63);

    }







static unsigned short func_42(int p_43, union U2 p_44, struct S0 p_45, short * p_46)
{
    union U1 **l_233 = &g_140;
    union U1 ***l_232 = &l_233;
    int l_234 = 1L;
    union U1 **l_235 = &g_140;
    unsigned char **l_236 = (void*)0;
    unsigned char ***l_237 = &l_236;
    unsigned char ***l_240 = &g_238;
    char *l_241 = &g_64.f0;
    int l_242 = 0x4EA9950EL;
    int *l_255 = &l_242;
    int l_269 = 3L;
    unsigned short l_312 = 0x6EC9L;
    if ((((*g_187) , (p_45.f2 >= (safe_mod_func_int8_t_s_s(((((*l_232) = &g_140) == (l_234 , l_235)) , (l_234 = (((*l_241) = ((((*l_237) = l_236) == ((*l_240) = g_238)) || (*p_46))) ^ ((*g_187) & (*g_187))))), l_242)))) , 0L))
    {
        int *l_245 = (void*)0;
        unsigned short *l_246 = &g_141.f2;
        int *l_247 = &g_172;
        int *l_248 = (void*)0;
        int *l_249 = (void*)0;
        int *l_250 = (void*)0;
        int *l_251 = &l_242;
        g_64.f2 = (safe_mul_func_int16_t_s_s(g_9, p_45.f3));

        (*l_251) = ((((*l_247) = (g_15 <= ((*l_246) = 0x9F42L))) ^ 0xF4FEEF6EL) , p_45.f0);

            }
    else
    {
        int *l_254 = (void*)0;
        int l_256 = 0x0141F537L;
        struct S0 l_282 = {1UL,0x2479E727L,6,0x46D85FAAL,0UL};
        union U1 l_300 = {4294967295UL};
        unsigned char *l_311 = &g_9;
        unsigned char l_345 = 0x07L;
        int l_367 = 0xF6FE1F7AL;
        if ((safe_add_func_int32_t_s_s(((l_255 = l_254) == l_254), l_256)))
        {
            int *l_259 = &l_234;
            union U1 **l_261 = &g_140;
            unsigned **l_279 = &g_187;
            unsigned ***l_278 = &l_279;
            (*l_259) = ((0x863CB28DL ^ p_45.f0) <= (safe_lshift_func_int8_t_s_u(g_83, 2)));
            if (((safe_unary_minus_func_uint8_t_u(p_43)) & ((void*)0 == l_261)))
            {
                struct S0 *l_262 = &g_229;
                int l_267 = 0x75F73016L;
                unsigned **l_268 = &g_187;
                (*l_262) = g_68;
                if ((safe_mul_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((l_267 & (func_54(func_60(func_60(((*l_268) = func_60(&g_15)))), (p_45.f1 = (g_141.f0 = l_269)), &g_83, ((**g_238) && ((*l_241) = (((l_267 ^ p_45.f0) == g_86) || 0L))), &l_256) , 65529UL)), g_15)) > p_44.f0), (-1L))))
                {
                    unsigned *l_270 = &g_225.f0;
                    int **l_271 = &l_259;
                    (*l_271) = func_60(l_270);

                    ;
                    g_92 = 0L;
                    (*l_262) = p_45;
                }
                else
                {
                    int **l_272 = &l_259;
                    (*l_272) = &l_256;

                    ;
                    for (g_17 = 27; (g_17 != (-12)); g_17--)
                    {
                        if (p_45.f0)
                            break;
                    }
                    (*l_272) = func_60((*l_268));

                    ;
                }

                ;
                ;
            }
            else
            {
                union U3 **l_276 = (void*)0;
                union U3 **l_277 = &g_63;
                (*l_277) = g_275;

                ;
            }

            ;
            g_92 = (-1L);
            if (((((*l_278) = &g_187) == &g_187) ^ ((0x5E92L < 2L) != func_54(func_60(l_254), ((+(safe_mul_func_uint8_t_u_u(0UL, 0x9AL))) == p_45.f4), l_255, (*g_239), l_259))))
            {
                struct S0 *l_283 = &g_68;
                (*l_283) = (l_282 , l_282);
                (*l_283) = g_68;
            }
            else
            {
                struct S0 ***l_285 = (void*)0;
                struct S0 ***l_286 = &g_284;
                int l_290 = 0x648319B6L;
                int *l_291 = &l_256;
                (*l_286) = g_284;
                (*l_291) = (p_45 , (safe_rshift_func_int8_t_s_u((((**g_238) != 0UL) != (safe_unary_minus_func_uint16_t_u(l_290))), 2)));
            }
        }
        else
        {
            unsigned l_303 = 0xC4033B04L;
            unsigned char *l_310 = &g_68.f4;
            int l_313 = 0x5433B60FL;
            int l_315 = 0x58D98CD0L;
            union U2 *l_324 = &g_228;
            int *l_352 = (void*)0;
            struct S0 l_372 = {0xF414069CL,6UL,4,0x59EF8C94L,0x68L};
            struct S0 *l_373 = &l_372;
            struct S0 *l_374 = &g_68;
            if ((l_313 = (((((p_43 , (((2UL >= (safe_rshift_func_uint16_t_u_u(p_45.f0, 8))) > (safe_mod_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u(((*l_310) = (p_44.f0 , (safe_lshift_func_int8_t_s_u(((l_300 , (safe_mod_func_uint16_t_u_u((l_303 == (safe_mul_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((((l_312 = (func_54(&g_83, (((*g_238) = l_310) != l_311), &g_83, g_141.f3, &g_172) , 65534UL)) < l_303) , 0x7973EFB7L), 1UL)), p_45.f2)) , p_45.f0) | g_225.f0), p_45.f4))), p_43))) & 0L), 3)))), 0xAEL)) , p_45.f1), p_43))) , 9UL)) == 0L) | p_44.f0) != (*p_46)) & l_303)))
            {
                int **l_314 = &l_255;
                union U3 *l_321 = &g_64;
                (*l_314) = func_60(&g_83);

                ;
                if (l_315)
                {
                    unsigned short *l_319 = &l_312;
                    unsigned short **l_318 = &l_319;
                    for (g_141.f0 = 0; (g_141.f0 <= 57); g_141.f0 = safe_add_func_uint32_t_u_u(g_141.f0, 6))
                    {
                        unsigned short ***l_320 = &l_318;
                        union U3 **l_322 = (void*)0;
                        union U3 **l_323 = &g_63;
                        union U2 **l_325 = &l_324;
                        int l_326 = 1L;
                        (*l_320) = l_318;
                        (*l_323) = (l_321 = &g_64);

                        ;
                        (*l_325) = l_324;
                        if (l_326)
                            break;
                    }
                    return (**l_314);
                }
                else
                {
                    int l_330 = 0L;
                    unsigned l_331 = 4294967286UL;
                    unsigned short **l_337 = &g_336;
                    unsigned short **l_338 = (void*)0;
                    unsigned short *l_340 = &l_300.f2;
                    unsigned short **l_339 = &l_340;
                    for (g_228.f0 = (-30); (g_228.f0 >= 5); ++g_228.f0)
                    {
                        unsigned **l_329 = &g_187;
                        (*l_314) = func_60(((*l_329) = func_60(&g_83)));

                        ;
                        if (g_83)
                            break;
                        l_330 = (((((-1L) >= l_303) < (g_9 > g_68.f1)) , p_45.f4) ^ p_43);
                    }
                    l_331 = (((4L > g_141.f1) < g_68.f0) == g_141.f1);
                    for (l_242 = (-26); (l_242 > (-11)); ++l_242)
                    {
                        return l_313;
                    }
                    if ((safe_mul_func_uint32_t_u_u((l_331 ^ p_45.f2), (((*p_46) , (((((*l_337) = g_336) != ((*l_339) = p_46)) >= g_229.f3) , &g_83)) == (((**l_233) = (**l_235)) , l_254)))))
                    {
                        int *l_341 = (void*)0;
                        int *l_342 = &l_234;
                        (*l_342) = (&l_255 != (void*)0);
                        return p_45.f3;
                    }
                    else
                    {
                        short l_346 = 0L;
                        int l_347 = 0L;
                        unsigned *l_348 = &g_229.f1;
                        l_347 = (safe_add_func_uint16_t_u_u((func_54(&g_15, (*g_187), l_254, (p_45.f4 = ((*l_310) = l_345)), &l_315) != (l_346 < l_330)), g_141.f2));
                        (*l_314) = func_60(l_348);
                    }

                    ;
                }
            }
            else
            {
                unsigned **l_358 = (void*)0;
                unsigned ***l_357 = &l_358;
                int **l_368 = (void*)0;
                int **l_369 = &l_255;
                struct S0 *l_370 = (void*)0;
                struct S0 *l_371 = &g_68;
                for (g_68.f3 = 17; (g_68.f3 == 25); g_68.f3++)
                {
                    unsigned *l_351 = &g_228.f0;
                    int **l_353 = (void*)0;
                    int **l_354 = (void*)0;
                    int **l_355 = &l_352;
                    int **l_356 = &l_254;
                    l_352 = func_60(l_351);

                    ;
                    l_352 = func_60(&l_303);
                    (*l_356) = ((*l_355) = (void*)0);

                    ;
                    g_64.f2 = (p_45 , ((void*)0 == l_357));

                }
                (*l_369) = func_60((((safe_rshift_func_uint16_t_u_u(2UL, ((g_172 >= (safe_mod_func_int16_t_s_s(g_83, (~65530UL)))) & (!(safe_mul_func_int16_t_s_s(4L, 1L)))))) > ((l_300.f1 = ((**g_238) = l_367)) != p_45.f0)) , func_60(&g_15)));

                ;
                                (*l_371) = p_45;
            }

            ;
            ;
            (*l_374) = ((*l_373) = l_372);
        }

        ;
        ;
    }

        ;
    ;
    return p_45.f4;
}







static union U1 func_47(unsigned * p_48)
{
    unsigned *l_62 = &g_15;
    unsigned **l_75 = &l_62;
    union U3 *l_81 = &g_64;
    union U3 **l_80 = &l_81;
    unsigned *l_82 = &g_83;
    int l_84 = (-1L);
    unsigned *l_85 = &g_86;
    int l_87 = 0xFABE4BCAL;
    unsigned char *l_88 = &g_89;
    int l_136 = 0L;
    unsigned *l_137 = &g_15;
    struct S0 *l_155 = &g_68;
    int *l_158 = &g_92;
    short l_167 = 0x003BL;
    unsigned **l_173 = &l_137;
    unsigned *l_174 = &g_68.f1;
    union U2 l_177 = {4294967286UL};
    int *l_178 = &l_87;
    char *l_179 = (void*)0;
    char *l_180 = &g_64.f0;
    int l_181 = (-4L);
    unsigned short l_185 = 65535UL;
    unsigned short l_186 = 0x85BEL;
    unsigned l_189 = 1UL;
    unsigned l_190 = 0x3B3C507CL;
    unsigned l_201 = 0xDEAE50A2L;
    union U1 l_202 = {4294967286UL};
    unsigned char l_213 = 0x25L;
    if ((0UL & ((g_17 ^ (((safe_sub_func_int8_t_s_s(func_54(((*l_75) = func_60(l_62)), (*p_48), p_48, ((*l_88) = (safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((((void*)0 != l_80) > (l_87 = ((*l_85) = (l_84 = ((*l_82) = (*p_48)))))), g_68.f2)), (-10L)))), p_48), l_136)) < l_136) > l_136)) < l_136)))
    {
        unsigned short l_138 = 65535UL;
        int *l_139 = &g_92;
        union U1 **l_142 = (void*)0;
        union U1 **l_143 = (void*)0;
        union U1 **l_144 = &g_140;
        int **l_145 = &l_139;
        int *l_147 = &g_13;
        int **l_146 = &l_147;
        (*l_139) = func_54(l_137, l_138, (*l_75), ((*l_88) = func_54(func_60(p_48), ((*l_82) = (*p_48)), (((l_138 <= l_138) | g_89) , (void*)0), g_89, l_139)), &g_13);
        (*l_144) = g_140;
        (*l_146) = ((*l_145) = func_60(((l_142 != (void*)0) , func_60(l_139))));

        ;
        ;
    }
    else
    {
        for (l_87 = 0; (l_87 == (-23)); --l_87)
        {
            struct S0 *l_150 = &g_68;
            struct S0 **l_151 = &l_150;
            (*l_151) = l_150;
            if (g_68.f0)
                goto lbl_159;
        }
    }

        for (l_84 = 8; (l_84 < (-13)); l_84 = safe_sub_func_int8_t_s_s(l_84, 1))
    {
        struct S0 *l_154 = &g_68;
        (*l_154) = g_68;
    }
    (*l_155) = g_68;
    if (((safe_mul_func_uint8_t_u_u(l_87, 0L)) <= ((*l_158) = l_84)))
    {
lbl_159:
        (*l_155) = g_68;
        (*l_158) = ((safe_unary_minus_func_int8_t_s((&g_83 != (((((func_54(func_60(p_48), (*p_48), (*l_75), ((safe_div_func_int16_t_s_s(g_141.f2, 3L)) , g_141.f1), &l_84) < 0x9F78L) , 1L) | l_136) != g_83) , p_48)))) ^ 65533UL);
        if (g_13)
            goto lbl_159;
        if ((safe_lshift_func_uint8_t_u_s((1L > ((safe_lshift_func_int16_t_s_u((l_167 == ((*l_178) = (safe_mod_func_uint8_t_u_u(255UL, (safe_add_func_int8_t_s_s(g_172, ((*l_180) = (func_54((l_174 = ((*l_173) = ((*l_75) = p_48))), (safe_rshift_func_int16_t_s_u((*l_158), 11)), p_48, (*l_158), (l_177 , l_178)) & 0L)))))))), 12)) && l_181)), 6)))
        {
            union U3 l_182 = {-1L};
            union U1 l_195 = {0x36387BD1L};
            int **l_196 = &l_158;
            if ((((*g_63) = l_182) , ((safe_add_func_uint8_t_u_u((g_68 , l_185), (*l_178))) ^ (l_182.f1 = (l_177 , l_186)))))
            {
                int **l_188 = &l_178;
                short *l_191 = &l_167;
                struct S0 l_194 = {0xEAF73BA8L,4294967295UL,0,0x40A49417L,0x07L};
                (*l_188) = func_60(func_60(func_60((g_187 = p_48))));

                ;
                ;
                (*l_158) = func_54(&g_83, ((l_189 , (void*)0) != (void*)0), p_48, ((7L <= (((*l_191) = l_190) || l_182.f1)) >= (g_92 <= g_9)), &g_172);

                                for (l_84 = 0; (l_84 > (-24)); l_84 = safe_sub_func_int32_t_s_s(l_84, 5))
                {
                    (*l_158) = 0x8B2B8B24L;
                }
                (*l_155) = l_194;
            }
            else
            {
                return l_195;

                            }

                        ;
                        ;
            (*l_196) = &l_136;

            ;
        }
        else
        {
            unsigned char *l_203 = (void*)0;
            unsigned char **l_204 = &l_88;
            int l_205 = 0x8996BAC3L;
            (*l_158) = (safe_sub_func_int16_t_s_s(g_83, ((safe_sub_func_int8_t_s_s(func_54(p_48, (*p_48), func_60(&g_15), ((+((*l_178) = (l_201 = (*l_178)))) >= (l_179 != (l_202 , ((*l_204) = l_203)))), p_48), l_205)) , g_172)));

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
        int l_210 = 0xC872F47AL;
        union U3 l_211 = {1L};
        union U2 *l_212 = &l_177;
        unsigned *l_214 = &g_68.f1;
        union U1 l_215 = {4294967295UL};
        if ((safe_sub_func_int16_t_s_s((0x491B9720L != 0xF22EBF56L), (safe_mul_func_uint8_t_u_u(l_210, (((*l_212) = (l_211 , l_177)) , ((*p_48) < ((*l_214) = ((*g_187) = (g_141.f0 ^ (4UL | func_54(((*l_75) = &g_15), l_213, l_214, l_210, l_214))))))))))))
        {
            return l_215;

                    }
        else
        {
            for (l_190 = 0; (l_190 <= 33); ++l_190)
            {
                struct S0 **l_218 = &l_155;
                unsigned *l_219 = &g_68.f1;
                int **l_220 = &l_158;
                (*l_218) = &g_68;
                (*l_220) = func_60(l_219);

                ;
            }

            ;
        }

        ;
    }

    ;
    ;
    ;
    ;
    ;
    return (*g_140);

    }







static char func_54(unsigned * p_55, unsigned p_56, unsigned * p_57, unsigned char p_58, int * p_59)
{
    union U3 *l_90 = (void*)0;
    int l_98 = 0x7FB601BAL;
    struct S0 l_116 = {5UL,1UL,1,0L,0xA3L};
    if (g_15)
    {
        int *l_91 = &g_92;
        (*l_91) = (((void*)0 == l_90) ^ 249UL);
    }
    else
    {
        struct S0 *l_93 = &g_68;
        (*l_93) = (g_13 , g_68);
        if (g_13)
            goto lbl_133;
        return g_15;
    }
lbl_133:
    for (p_56 = 0; (p_56 != 37); p_56++)
    {
        unsigned l_101 = 1UL;
        union U1 l_104 = {0x179D740FL};
        unsigned char *l_113 = (void*)0;
        unsigned l_114 = 1UL;
        unsigned char *l_115 = &g_89;
        unsigned **l_117 = (void*)0;
        unsigned *l_119 = &l_116.f1;
        unsigned **l_118 = &l_119;
        int *l_121 = &g_92;
        int **l_120 = &l_121;
        unsigned *l_129 = &l_101;
        unsigned short *l_130 = (void*)0;
        unsigned short *l_131 = (void*)0;
        unsigned short *l_132 = &l_104.f2;
        g_68 = (((safe_lshift_func_int16_t_s_u((g_68.f1 , (l_98 > ((safe_add_func_uint8_t_u_u(l_101, p_56)) , (safe_rshift_func_uint8_t_u_u(((*l_115) = (l_104 , (l_114 = ((((+(*p_59)) & (safe_lshift_func_int8_t_s_u(l_98, 0))) , l_104.f1) , ((safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((p_56 , p_59) == (void*)0), g_68.f1)), 7UL)), g_68.f1)) != g_83))))), 7))))), 5)) || g_15) , l_116);
        (*l_120) = func_60((p_57 = func_60(((*l_118) = &p_56))));

        ;
        ;
        ;
        if ((p_56 && g_89))
        {
            (*l_120) = (p_58 , &l_98);

            ;
        }
        else
        {
            short l_124 = (-1L);
            union U3 *l_125 = &g_64;
            union U3 **l_126 = &l_125;
            (*l_120) = &g_13;

            ;
            l_124 = (safe_mul_func_uint16_t_u_u(p_56, 0UL));
            (*l_126) = l_125;
            (*l_120) = (*l_120);
        }

        ;
        g_64.f1 = (((safe_lshift_func_int8_t_s_s(p_58, 0)) > ((*l_132) = (((((*l_129) = 0x3D54CDCAL) > ((((*l_121) , 1UL) != (*l_121)) == (*l_121))) >= 9UL) || 6L))) & (((g_17 == 0xDC16L) , g_9) <= (**l_120)));

            }
    for (g_68.f1 = 0; (g_68.f1 == 10); ++g_68.f1)
    {
        if (l_98)
            goto lbl_133;
        return g_92;
    }
    return p_58;
}







static unsigned * func_60(unsigned * p_61)
{
    union U3 **l_65 = &g_63;
    int l_69 = 0x28C51F7EL;
    int *l_70 = &l_69;
    int **l_71 = (void*)0;
    int **l_72 = &l_70;
    int *l_74 = &g_13;
    int **l_73 = &l_74;
    (*l_65) = g_63;
    l_70 = ((safe_rshift_func_uint8_t_u_u((g_68 , l_69), 0)) , &l_69);
    (*l_73) = ((*l_72) = p_61);



    return &g_15;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_68.f0, "g_68.f0", print_hash_value);
    transparent_crc(g_68.f1, "g_68.f1", print_hash_value);
    transparent_crc(g_68.f2, "g_68.f2", print_hash_value);
    transparent_crc(g_68.f3, "g_68.f3", print_hash_value);
    transparent_crc(g_68.f4, "g_68.f4", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_141.f2, "g_141.f2", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_225.f0, "g_225.f0", print_hash_value);
    transparent_crc(g_228.f0, "g_228.f0", print_hash_value);
    transparent_crc(g_229.f0, "g_229.f0", print_hash_value);
    transparent_crc(g_229.f1, "g_229.f1", print_hash_value);
    transparent_crc(g_229.f2, "g_229.f2", print_hash_value);
    transparent_crc(g_229.f3, "g_229.f3", print_hash_value);
    transparent_crc(g_229.f4, "g_229.f4", print_hash_value);
    transparent_crc(g_445, "g_445", print_hash_value);
    transparent_crc(g_459, "g_459", print_hash_value);
    transparent_crc(g_477.f0, "g_477.f0", print_hash_value);
    transparent_crc(g_480, "g_480", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
