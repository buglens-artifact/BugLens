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
   int f0;
   int f1;
   unsigned f2;
   char f3;
   unsigned char f4;
   int f5;
};

union U1 {
   int f0;
   int f1;
};

union U2 {
   const struct S0 f0;
   unsigned char f1;
};

union U3 {
   struct S0 f0;
   char * f1;
   unsigned f2;
};

union U4 {
   const struct S0 f0;
};


static int g_5 = (-1L);
static char g_22 = 1L;
static int g_74 = 0xC09C4F4FL;
static char g_92 = 1L;
static char *g_91 = &g_92;
static char **g_90 = &g_91;
static const char *g_94 = &g_92;
static const char **g_93 = &g_94;
static union U1 g_104 = {8L};
static struct S0 g_112 = {0x04BE07DEL,-7L,0xB58F18CAL,0xA6L,248UL,8L};
static char **g_130 = &g_91;
static char ***g_129 = &g_130;
static char g_135 = 1L;
static const union U2 g_238 = {{0xEEB3F824L,0xA347C53AL,0x99AC2BE0L,0x99L,255UL,0x49E2CEABL}};
static const union U2 *g_237 = &g_238;
static const union U2 **g_236 = &g_237;
static struct S0 g_258 = {4L,0x73C7F1B2L,0x924D1F9FL,-1L,0x61L,-1L};
static union U4 g_265 = {{3L,0xAA5DBEDBL,4UL,-10L,7UL,-2L}};
static int *g_266 = &g_112.f5;
static struct S0 *g_272 = &g_258;
static union U4 g_274 = {{0x98AB7A19L,0L,0UL,0x33L,0xA1L,0x252623D0L}};
static union U2 g_326 = {{0xD831AC02L,-2L,2UL,0L,4UL,0x802F3114L}};
static union U4 g_435 = {{1L,0xF40617E7L,4294967286UL,0x28L,0x23L,0x9722A27FL}};
static union U4 *g_434 = &g_435;
static union U3 g_448 = {{1L,0L,1UL,-3L,0x65L,-6L}};
static union U3 *g_587 = (void*)0;
static union U3 **g_586 = &g_587;



static unsigned func_1(void);
static short func_6(char p_7);
static int * func_23(union U1 p_24, int * p_25, short p_26, const union U4 p_27, char ** const p_28);
static int * func_30(char *** p_31, char * p_32, unsigned char p_33, const union U4 p_34);
static char *** func_35(const union U1 p_36, unsigned p_37, struct S0 p_38, char * p_39, char *** p_40);
static union U1 func_41(const char p_42, char ** p_43, char p_44, int p_45, const char ** p_46);
static char ** func_47(union U3 p_48, char * p_49, char ** p_50);
static union U3 func_51(const char ** p_52, int * p_53, struct S0 p_54, const char p_55);
static int * func_58(char *** p_59, char p_60, const char *** const p_61, int * p_62);
static int * func_67(char * p_68);
static unsigned func_1(void)
{
    unsigned l_4 = 7UL;
    int *l_602 = (void*)0;
    int *l_603 = &g_74;
    (*l_603) = (((safe_div_func_uint16_t_u_u((l_4 & (g_5 && g_5)), func_6(g_5))) == (g_112.f4 <= (((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((l_4 == g_112.f2), (((l_4 & 0x3BL) == l_4) <= 65535UL))) <= 0x193DCADFL), g_5)) < (*g_91)) == g_265.f0.f5))) && 0x98621B4DL);
    return (*l_603);
}







static short func_6(char p_7)
{
    int l_8 = (-1L);
    int l_14 = (-10L);
    const char *l_57 = (void*)0;
    const char **l_56 = &l_57;
    char *l_65 = &g_22;
    char **l_64 = &l_65;
    char ***l_63 = &l_64;
    const union U4 l_161 = {{-4L,0L,0x970CE46CL,-3L,0x9CL,0x64B8F5B5L}};
    char ** const l_393 = &g_91;
    const char **l_428 = &g_94;
    union U1 *l_527 = &g_104;
    union U2 *l_551 = &g_326;
    union U3 *l_585 = &g_448;
    union U3 **l_584 = &l_585;
    if ((p_7 || l_8))
    {
        int *l_9 = (void*)0;
        int *l_10 = &l_8;
        union U1 l_29 = {0x7312B948L};
        const char *** const l_66 = &l_56;
        struct S0 l_82 = {-1L,0x1BF39352L,0x55CCBD95L,-10L,0x8DL,0x1A6C9C6CL};
        char *l_89 = &l_82.f3;
        (*l_10) = p_7;
        for (l_8 = 1; (l_8 != (-12)); --l_8)
        {
            unsigned l_13 = 0x678E045DL;
            char *l_69 = &g_22;
            char *l_128 = &g_92;
            int *l_413 = &g_258.f0;
            union U1 *l_416 = &l_29;
            struct S0 *l_427 = &g_112;
            l_14 = (p_7 >= l_13);
        }
        l_14 = (*l_10);
        (*g_272) = l_161.f0;
    }
    else
    {
        return l_14;
    }
    (*g_272) = l_161.f0;
    (*g_272) = (*g_272);
    if ((l_428 == (void*)0))
    {
        unsigned l_443 = 0x1F77DC29L;
        int *l_456 = (void*)0;
        unsigned char l_458 = 0UL;
        struct S0 l_473 = {-8L,0x31185791L,0xF4B4AB13L,0x05L,0x1BL,-6L};
        for (g_112.f0 = 0; (g_112.f0 != (-15)); g_112.f0--)
        {
            union U4 *l_432 = &g_265;
            union U4 **l_431 = &l_432;
            int *l_455 = &g_104.f1;
            int **l_457 = &l_456;
            unsigned l_467 = 0UL;
            (*l_431) = (void*)0;
            if ((*g_266))
            {
                short l_442 = 0xF86FL;
                if ((((void*)0 != &l_432) || (safe_unary_minus_func_int8_t_s(((*g_266) < 0UL)))))
                {
                    short l_441 = 0x08CCL;
                    g_434 = (void*)0;
                    for (g_74 = 6; (g_74 > 16); ++g_74)
                    {
                        int **l_438 = &g_266;
                        int *l_444 = &l_14;
                    }
                    for (l_8 = 0; (l_8 < (-6)); --l_8)
                    {
                        return l_442;
                    }
                }
                else
                {
                    union U3 *l_447 = &g_448;
                    union U3 **l_449 = (void*)0;
                    union U3 **l_450 = &l_447;
                    (*l_450) = l_447;
                }
                for (p_7 = (-3); (p_7 <= (-8)); --p_7)
                {
                    for (g_258.f2 = 0; (g_258.f2 == 4); g_258.f2 = safe_add_func_uint8_t_u_u(g_258.f2, 8))
                    {
                        l_456 = l_455;
                    }
                    if (p_7)
                        break;
                }
                (*l_455) = (-1L);
                (*l_455) = 1L;
            }
            else
            {
                (*l_455) = 3L;
            }
            (*l_457) = &g_74;
            if ((*l_455))
            {
                union U3 *l_464 = &g_448;
                union U3 **l_463 = &l_464;
                int l_470 = 6L;
                (**l_457) = l_458;
                if ((*g_266))
                    break;
                (*l_456) = (!(safe_mul_func_uint8_t_u_u(g_274.f0.f1, ((safe_mod_func_uint8_t_u_u((((void*)0 == (*g_236)) <= (l_463 == (void*)0)), (safe_div_func_int32_t_s_s((l_467 != (safe_mod_func_uint32_t_u_u(l_470, ((safe_mul_func_int8_t_s_s(7L, (*l_456))) ^ g_274.f0.f3)))), 4294967295UL)))) || l_470))));
            }
            else
            {
                (*g_272) = l_473;
            }
        }
    }
    else
    {
        short l_490 = 0xF50DL;
        char ***l_491 = &g_90;
        int *l_492 = (void*)0;
        const union U1 l_523 = {-8L};
        union U4 * const l_554 = &g_265;
        struct S0 l_595 = {0x97D93D1BL,0xD2D776C4L,0x93FA2EEAL,0xA1L,6UL,1L};
        struct S0 **l_597 = &g_272;
        if ((0x516A57F7L && (safe_sub_func_uint32_t_u_u(g_238.f1, (safe_rshift_func_int8_t_s_s((&g_272 == (void*)0), (safe_sub_func_int16_t_s_s((0x622A05F7L | ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u(p_7, ((safe_add_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((0x06A9L != ((p_7 ^ (0L == g_258.f2)) != l_161.f0.f4)) < p_7), 0x6CBFL)), p_7)) && g_112.f0), g_238.f0.f5)) || l_8))), 1)) > 0x849DL)), l_490))))))))
        {
            union U4 *l_493 = &g_435;
            int l_502 = 0L;
            union U1 *l_552 = (void*)0;
            int *l_568 = &g_448.f0.f0;
            g_266 = func_58(l_491, (p_7 <= ((p_7 & (-1L)) && l_490)), &g_93, l_492);
            if (p_7)
            {
                union U4 **l_494 = &g_434;
                (*l_494) = l_493;
            }
            else
            {
                struct S0 l_495 = {0x34354BBBL,0x11BB9CFEL,0x8925F25EL,0x32L,0UL,0x3397EC06L};
                l_495 = l_161.f0;
                for (l_495.f0 = 9; (l_495.f0 > 11); l_495.f0++)
                {
                    (*g_272) = (*g_272);
                }
                for (g_258.f1 = 2; (g_258.f1 > (-2)); g_258.f1 = safe_sub_func_int32_t_s_s(g_258.f1, 1))
                {
                    return g_92;
                }
                for (l_495.f4 = (-19); (l_495.f4 < 42); l_495.f4 = safe_add_func_uint32_t_u_u(l_495.f4, 1))
                {
                    if (l_502)
                        break;
                }
            }
            for (g_326.f1 = 17; (g_326.f1 >= 40); ++g_326.f1)
            {
                unsigned l_515 = 8UL;
                int l_526 = (-4L);
                unsigned short l_538 = 0x5103L;
                struct S0 l_550 = {0x52450ACBL,0x1D4D259AL,0xCE5BE37EL,0x31L,0xD9L,0x7E26A3DCL};
                if (((safe_div_func_uint8_t_u_u((safe_div_func_int32_t_s_s(0x27394DDCL, p_7)), 0x0FL)) & (safe_mod_func_uint16_t_u_u(p_7, ((***g_129) & (safe_add_func_uint16_t_u_u(l_161.f0.f2, ((((((p_7 && 0x34A4L) >= (safe_lshift_func_int8_t_s_s(((((void*)0 != &g_74) | 1UL) ^ l_515), 6))) & 0x5F0AL) >= 0x90EDL) & g_112.f1) & p_7))))))))
                {
                    union U1 **l_516 = (void*)0;
                    union U1 *l_518 = &g_104;
                    union U1 **l_517 = &l_518;
                    int l_524 = 0x686D26AEL;
                    union U3 *l_532 = (void*)0;
                    union U3 **l_531 = &l_532;
                    (*l_517) = &g_104;
                    if ((1L | (safe_lshift_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(0x0EA23E7EL, p_7)) | p_7), p_7))))
                    {
                        int **l_525 = &l_492;
                        (*l_525) = &g_74;
                        if (g_258.f4)
                            break;
                        (*l_525) = &l_14;
                    }
                    else
                    {
                        l_526 = (g_238.f1 <= l_8);
                        l_527 = &g_104;
                    }
                    for (g_112.f3 = 0; (g_112.f3 > (-29)); g_112.f3--)
                    {
                        int *l_530 = &l_8;
                        (*l_530) = (p_7 < (**g_130));
                    }
                    (*l_531) = &g_448;
                }
                else
                {
                    unsigned short l_535 = 0UL;
                    union U2 *l_543 = &g_326;
                    struct S0 *l_545 = &g_112;
                    union U1 **l_553 = &l_527;
                    union U4 **l_555 = &g_434;
                    if ((safe_mod_func_int32_t_s_s((g_5 >= l_535), (safe_lshift_func_int8_t_s_u(l_538, (l_161.f0.f5 == (p_7 <= (((7UL > g_74) < ((safe_div_func_uint32_t_u_u((l_535 == ((safe_lshift_func_int8_t_s_u(((l_543 == (void*)0) == g_435.f0.f1), p_7)) <= g_135)), 4294967286UL)) > g_238.f0.f5)) > 0xA804L))))))))
                    {
                        union U2 *l_544 = &g_326;
                        int *l_546 = &g_74;
                        char ***l_549 = &g_90;
                        g_74 = (l_544 != (void*)0);
                        (*l_546) = ((void*)0 != l_545);
                        (*l_546) = (0UL && (p_7 <= (+((safe_mul_func_uint16_t_u_u((l_549 == &g_90), (g_265.f0.f3 <= (*l_546)))) && 0xD45CL))));
                        if (l_515)
                            continue;
                    }
                    else
                    {
                        l_550 = (*l_545);
                        (*g_236) = l_551;
                    }
                    (*l_553) = l_552;
                    (*l_555) = l_554;
                    if (p_7)
                        continue;
                }
            }
            (*l_568) = (0UL > (p_7 ^ (safe_mul_func_uint8_t_u_u(255UL, (safe_sub_func_uint8_t_u_u(l_502, ((safe_mul_func_uint8_t_u_u(g_435.f0.f0, (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_u((l_161.f0.f2 > (0UL && ((void*)0 != &l_492))), 7)) ^ 8L), p_7)))) | 0x1C0B2F29L)))))));
        }
        else
        {
            union U1 *l_569 = (void*)0;
            union U1 **l_570 = (void*)0;
            union U1 **l_571 = &l_569;
            union U2 **l_590 = &l_551;
            int l_592 = 0L;
            (*l_571) = l_569;
lbl_596:
            if ((safe_mul_func_uint8_t_u_u(((l_161.f0.f3 && (safe_mod_func_uint32_t_u_u(p_7, (safe_mul_func_int8_t_s_s(p_7, (**g_93)))))) ^ ((safe_add_func_uint32_t_u_u(p_7, (g_448.f0.f4 != (safe_rshift_func_uint8_t_u_u(((((+(-1L)) & ((safe_div_func_int8_t_s_s(l_161.f0.f4, p_7)) == 0x616CL)) != (-2L)) ^ (**g_90)), 1))))) ^ 1UL)), p_7)))
            {
                g_586 = l_584;
            }
            else
            {
                int l_591 = 0x58345F79L;
                if ((safe_rshift_func_int16_t_s_s(g_265.f0.f2, 13)))
                {
                    (*g_266) = 9L;
                    if (g_274.f0.f1)
                        goto lbl_596;
                }
                else
                {
                    (*g_266) = (*g_266);
                }
                if ((p_7 || (((void*)0 == l_590) && l_591)))
                {
                    (*g_266) = l_592;
                }
                else
                {
                    for (l_8 = 0; (l_8 < 27); l_8 = safe_add_func_int8_t_s_s(l_8, 6))
                    {
                        (*g_272) = (*g_272);
                    }
                }
                (*g_272) = l_595;
                (*g_266) = l_161.f0.f3;
            }
            return p_7;
        }
        (*l_597) = &l_595;
    }
    return g_112.f3;
}







static int * func_23(union U1 p_24, int * p_25, short p_26, const union U4 p_27, char ** const p_28)
{
    struct S0 *l_400 = &g_112;
    union U4 *l_402 = &g_274;
    union U4 **l_401 = &l_402;
    int l_403 = 0L;
    union U1 *l_411 = &g_104;
    union U1 * const *l_410 = &l_411;
    int *l_412 = &g_258.f0;
    p_24.f1 = (safe_add_func_int16_t_s_s((((safe_add_func_int8_t_s_s(((**p_28) & (safe_lshift_func_int16_t_s_s(p_27.f0.f3, (g_112.f3 || (g_112.f3 != ((((void*)0 == l_400) >= (**p_28)) && 7UL)))))), ((void*)0 == l_401))) | p_24.f0) <= 0xE7L), l_403));
    (*g_236) = (*g_236);
    (*g_266) = (+((safe_add_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(g_326.f1, g_238.f0.f0)) == (p_27.f0.f0 < ((safe_rshift_func_uint16_t_u_s(g_238.f0.f5, g_274.f0.f4)) & (*g_266)))), (p_24.f1 & ((void*)0 == l_410)))) > g_112.f0));
    return l_412;
}







static int * func_30(char *** p_31, char * p_32, unsigned char p_33, const union U4 p_34)
{
    int *l_162 = &g_112.f5;
    int **l_166 = &l_162;
    char * const *l_169 = &g_91;
    const union U1 *l_216 = &g_104;
    char *l_218 = &g_135;
    int *l_278 = &g_112.f0;
    union U2 *l_325 = &g_326;
    union U3 l_392 = {{-1L,-8L,0x2E3F6297L,6L,252UL,0x510A82B6L}};
    (*l_162) = p_34.f0.f3;
    if ((*l_162))
    {
        int **l_165 = &l_162;
        char * const *l_170 = &g_91;
        int l_173 = 0xDE484D60L;
        union U2 *l_220 = (void*)0;
        union U2 **l_219 = &l_220;
        if ((safe_mul_func_int8_t_s_s((**g_93), (l_165 == l_166))))
        {
            int l_180 = 0xA4E59253L;
            int l_193 = 0x7460F080L;
            (*l_162) = p_34.f0.f0;
            for (g_112.f5 = 19; (g_112.f5 == 22); g_112.f5 = safe_add_func_int16_t_s_s(g_112.f5, 6))
            {
                l_170 = l_169;
                for (p_33 = (-25); (p_33 < 40); p_33++)
                {
                    (*l_166) = (void*)0;
                }
            }
            if (((((p_34.f0.f4 || l_173) <= (safe_sub_func_uint8_t_u_u((&g_74 == &g_74), (safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((l_180 || ((g_104.f0 >= (&g_93 == &g_90)) >= (((g_112.f3 < 0L) <= l_180) == g_112.f1))), p_34.f0.f3)), l_180))))) < p_33) == g_112.f5))
            {
                int *l_181 = &g_74;
                struct S0 *l_182 = &g_112;
                (*l_166) = l_181;
                (*l_182) = p_34.f0;
            }
            else
            {
                int l_192 = 2L;
                char *l_194 = &g_135;
                int *l_201 = &g_74;
                if ((safe_add_func_int8_t_s_s(((void*)0 != &g_74), (-5L))))
                {
                    short l_185 = 1L;
                    if (l_185)
                    {
                        l_193 = ((safe_sub_func_int32_t_s_s(g_112.f5, p_33)) ^ (safe_div_func_int8_t_s_s(((((((*g_94) && (***p_31)) ^ (safe_div_func_uint32_t_u_u(0xC08C7137L, l_180))) && (l_192 != l_192)) && g_112.f1) || 65526UL), l_192)));
                        (*l_166) = func_67(l_194);
                        (**l_165) = (safe_mul_func_int16_t_s_s((l_169 != (void*)0), (safe_add_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((p_34.f0.f4 > (**l_165)), (p_34.f0.f1 == ((+p_34.f0.f4) < p_34.f0.f2)))) >= g_112.f0), p_33))));
                        return &g_74;
                    }
                    else
                    {
                        return l_201;
                    }
                }
                else
                {
                    struct S0 *l_202 = (void*)0;
                    struct S0 *l_203 = &g_112;
                    union U2 *l_205 = (void*)0;
                    union U2 **l_204 = &l_205;
                    (*l_165) = &g_74;
                    if (p_34.f0.f0)
                        goto lbl_206;
                    (*l_203) = p_34.f0;
lbl_206:
                    (*l_204) = (void*)0;
                    return l_201;
                }
            }
        }
        else
        {
            for (g_112.f3 = 0; (g_112.f3 < 22); g_112.f3 = safe_add_func_uint16_t_u_u(g_112.f3, 5))
            {
                char l_215 = 0x93L;
                (*l_165) = &g_74;
                (*l_165) = (*l_166);
                for (g_112.f4 = 26; (g_112.f4 == 17); --g_112.f4)
                {
                    const union U1 **l_217 = &l_216;
                    if ((p_34.f0.f5 ^ ((g_112.f1 < ((*g_129) == (*g_129))) > 4294967295UL)))
                    {
                        (**l_165) = (safe_mod_func_int16_t_s_s(1L, g_112.f1));
                        return &g_74;
                    }
                    else
                    {
                        struct S0 l_213 = {1L,1L,1UL,-1L,0x8BL,-1L};
                        struct S0 *l_214 = &l_213;
                        (*l_214) = l_213;
                    }
                    if (l_215)
                        break;
                    (*l_217) = l_216;
                }
            }
        }
        (*l_165) = func_67(l_218);
        (*l_219) = (void*)0;
        (*l_165) = func_67((*g_130));
    }
    else
    {
        unsigned l_224 = 0x718EDF5EL;
        int *l_243 = (void*)0;
        struct S0 l_269 = {0x518A76D6L,0xEA9B94AAL,0x2D828728L,0xCCL,255UL,9L};
        const int *l_284 = &g_238.f0.f0;
        int l_291 = (-8L);
        unsigned l_373 = 0x67D4B8A6L;
        if (((*l_162) & ((safe_lshift_func_int16_t_s_u(g_92, (safe_unary_minus_func_int8_t_s(l_224)))) && (safe_sub_func_uint8_t_u_u((safe_div_func_int32_t_s_s(p_34.f0.f0, g_112.f5)), g_135)))))
        {
            union U1 **l_229 = (void*)0;
            union U1 *l_231 = &g_104;
            union U1 **l_230 = &l_231;
            (*l_230) = (void*)0;
        }
        else
        {
            const union U4 *l_275 = (void*)0;
            int l_324 = 0xF6457C80L;
            if ((safe_add_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((*g_94), (g_236 == (void*)0))) != (safe_mod_func_uint16_t_u_u(g_238.f0.f4, p_34.f0.f3))), (safe_add_func_int16_t_s_s(g_238.f1, 0xE828L)))))
            {
                return l_243;
            }
            else
            {
                struct S0 *l_244 = &g_112;
                int l_257 = (-10L);
                union U4 *l_263 = (void*)0;
                (*l_244) = g_112;
                if ((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((g_238.f0.f1 || g_5), (safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((!(safe_lshift_func_int8_t_s_s((((p_34.f0.f3 | 0xC3F753BDL) == 4L) || p_34.f0.f2), 3))), 0x11L)), (safe_mod_func_int32_t_s_s(p_34.f0.f2, (g_22 | 9L))))))), l_257)))
                {
                    (*l_244) = g_258;
                    if (((p_34.f0.f2 & (safe_sub_func_int8_t_s_s((**g_130), (g_112.f5 != (0xAF39L | (((safe_div_func_int8_t_s_s((&g_74 == (void*)0), l_257)) & l_224) > g_238.f0.f2)))))) <= g_135))
                    {
                        union U4 *l_264 = &g_265;
                        l_264 = l_263;
                        g_266 = (*l_166);
                        (*l_162) = 4L;
                        (*l_166) = func_67(l_218);
                    }
                    else
                    {
                        union U1 *l_268 = (void*)0;
                        union U1 **l_267 = &l_268;
                        (*l_267) = &g_104;
                    }
                }
                else
                {
                    struct S0 *l_270 = &l_269;
                    struct S0 **l_271 = (void*)0;
                    l_269 = g_112;
                    (*l_166) = (*l_166);
                    g_272 = l_270;
                    if (l_257)
                    {
                        union U4 *l_273 = &g_274;
                        const union U4 **l_276 = &l_275;
                        struct S0 *l_277 = (void*)0;
                        (*g_266) = ((void*)0 != &g_272);
                        l_273 = l_263;
                        (*l_276) = l_275;
                        l_277 = &l_269;
                    }
                    else
                    {
                        return l_278;
                    }
                }
                for (g_112.f1 = 0; (g_112.f1 > (-11)); --g_112.f1)
                {
                    const union U4 **l_281 = &l_275;
                    char l_282 = (-8L);
                    if (p_34.f0.f4)
                        break;
                    (*l_281) = &p_34;
                    if (l_282)
                    {
                        int *l_283 = &g_112.f0;
                        return l_283;
                    }
                    else
                    {
                        if ((*l_278))
                            break;
                        l_284 = l_284;
                        if ((*g_266))
                            break;
                    }
                }
                (*l_166) = l_243;
            }
lbl_330:
            (*l_278) = 0x0F5AFD32L;
            for (g_258.f0 = 0; (g_258.f0 != (-2)); g_258.f0--)
            {
                unsigned l_317 = 4UL;
                int *l_327 = &g_104.f1;
                l_284 = &g_74;
                if ((safe_div_func_int32_t_s_s(((safe_sub_func_int8_t_s_s(l_291, (safe_rshift_func_int8_t_s_s(((void*)0 != &g_258), 0)))) | (safe_add_func_uint8_t_u_u((*l_284), 6UL))), (*g_266))))
                {
                    unsigned l_300 = 0xDF9734E2L;
                    if ((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((0x27L > (0x01008DDBL > (*g_266))), 11)), l_300)))
                    {
                        return &g_74;
                    }
                    else
                    {
                        struct S0 l_301 = {0x1319C18CL,0xA6210C82L,4294967295UL,0x19L,0x09L,1L};
                        struct S0 *l_302 = &l_269;
                        (*l_166) = (*l_166);
                        (*l_302) = l_301;
                        (*g_266) = ((((safe_rshift_func_uint16_t_u_s(g_274.f0.f0, 9)) != (safe_mod_func_uint32_t_u_u(g_22, (safe_div_func_uint8_t_u_u((*l_284), ((0x8F86E450L | g_104.f0) & p_34.f0.f0)))))) == (safe_add_func_int16_t_s_s((-1L), (255UL ^ (***p_31))))) <= (**g_130));
                    }
                    if ((((l_300 == 0xF445BDC1L) <= (safe_lshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_u(g_238.f0.f0, 7)) < ((safe_sub_func_uint8_t_u_u((l_317 < g_5), (safe_mod_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((***p_31) && (safe_add_func_uint32_t_u_u(((+(g_265.f0.f3 || g_265.f0.f5)) < (l_300 > (*l_278))), 0x76065F32L))), g_265.f0.f5)) < l_324), (*l_284))))) | g_274.f0.f5)), g_112.f1))) <= p_34.f0.f5))
                    {
                        (*g_236) = l_325;
                        (*g_266) = (*g_266);
                        return l_327;
                    }
                    else
                    {
                        struct S0 l_328 = {5L,0x3E1014FFL,0UL,0x8EL,0xB7L,0xF6B2B499L};
                        struct S0 *l_329 = &l_328;
                        (*l_329) = l_328;
                    }
                }
                else
                {
                    short l_339 = 9L;
                    if (g_112.f4)
                        goto lbl_330;
                    (*l_166) = (void*)0;
                    if (((safe_lshift_func_uint16_t_u_s(((*l_327) | (safe_mul_func_uint8_t_u_u(g_112.f2, (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((l_339 == (((safe_mod_func_uint16_t_u_u(p_33, ((g_74 ^ p_34.f0.f0) | 4L))) < ((-3L) & (g_112.f4 < (*l_327)))) < (-3L))), g_112.f0)), p_33))))), 10)) && p_33))
                    {
                        (*l_166) = &g_74;
                    }
                    else
                    {
                        (*l_278) = (safe_mul_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(p_34.f0.f0, 65526UL)) > (((**p_31) != (**g_129)) & p_34.f0.f0)), (&g_237 == &g_237)));
                    }
                }
                (*l_278) = p_34.f0.f3;
            }
        }
        for (g_258.f5 = 21; (g_258.f5 != 6); g_258.f5 = safe_sub_func_uint16_t_u_u(g_258.f5, 4))
        {
            unsigned l_365 = 1UL;
            int *l_366 = &g_258.f5;
            for (g_258.f3 = 3; (g_258.f3 <= 14); g_258.f3 = safe_add_func_int32_t_s_s(g_258.f3, 1))
            {
                unsigned short l_352 = 0xE27CL;
                const char *** const l_374 = &g_93;
                if (((safe_div_func_int8_t_s_s((*p_32), 0x0DL)) & g_74))
                {
                    unsigned short l_353 = 0x1F1BL;
                    if (l_352)
                        break;
                    (*g_266) = 0x4EDC10B8L;
                    if ((*g_266))
                    {
                        return &g_74;
                    }
                    else
                    {
                        (*g_266) = l_352;
                        (*g_266) = (((void*)0 != p_31) < l_353);
                        (*g_266) = (((g_265.f0.f0 > 2UL) >= (&l_291 != &g_74)) & (safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(g_274.f0.f0, ((void*)0 != &g_74))), (safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s(((&g_258 == &g_112) && l_365))), 0xB40D20FEL)) != p_34.f0.f5), 9)))));
                    }
                    (*l_166) = l_366;
                }
                else
                {
                    if (p_34.f0.f5)
                    {
                        const union U4 *l_368 = &g_274;
                        const union U4 **l_367 = &l_368;
                        (*l_367) = &p_34;
                    }
                    else
                    {
                        if (p_34.f0.f2)
                            break;
                        (*l_166) = func_58(&g_130, (safe_mod_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(0xD059BEA6L, p_34.f0.f4)) != (*l_366)), l_373)), l_374, &g_74);
                        (*l_166) = &g_74;
                    }
                }
            }
        }
        for (g_92 = (-26); (g_92 >= (-16)); ++g_92)
        {
            int *l_377 = &l_269.f5;
            (*l_166) = l_377;
            (*l_278) = (*g_266);
            if (((safe_mul_func_uint8_t_u_u(g_238.f0.f3, ((p_34.f0.f4 && (safe_sub_func_int32_t_s_s(p_34.f0.f3, (**l_166)))) <= (-10L)))) < ((((safe_sub_func_int32_t_s_s((&l_325 != &g_237), p_34.f0.f2)) == p_34.f0.f2) >= g_112.f2) < 65528UL)))
            {
                int *l_384 = (void*)0;
                (*l_166) = l_384;
                for (g_104.f1 = 0; (g_104.f1 != (-25)); g_104.f1 = safe_sub_func_uint8_t_u_u(g_104.f1, 7))
                {
                    (*l_166) = (void*)0;
                }
                (*g_236) = (*g_236);
            }
            else
            {
                (*l_278) = (*l_284);
                for (l_224 = 0; (l_224 > 28); ++l_224)
                {
                    int *l_389 = &g_258.f5;
                    (*l_166) = (void*)0;
                    l_389 = (void*)0;
                    (*l_377) = (safe_mod_func_uint16_t_u_u(0xEC36L, g_265.f0.f4));
                    (*l_377) = (*l_278);
                }
            }
            (*l_166) = func_67((**p_31));
        }
        l_169 = func_47(func_51(&g_94, (*l_166), (*g_272), (**g_130)), (**g_129), func_47(l_392, (*g_130), &l_218));
    }
    (*l_166) = (*l_166);
    (*l_166) = (*l_166);
    return &g_74;
}







static char *** func_35(const union U1 p_36, unsigned p_37, struct S0 p_38, char * p_39, char *** p_40)
{
    unsigned short l_131 = 0x1C0CL;
    const char *** const l_153 = &g_93;
    int *l_154 = &g_112.f0;
    char *l_155 = &g_92;
    char ***l_160 = &g_130;
    if ((g_112.f3 == l_131))
    {
        int l_152 = 0x1128C189L;
        int **l_156 = &l_154;
        l_154 = func_58(&g_130, (((0xB6E2L < (safe_unary_minus_func_uint32_t_u((safe_mod_func_uint8_t_u_u((1L > g_135), (safe_lshift_func_int16_t_s_s((((safe_add_func_int32_t_s_s(0x38B96EC4L, (-2L))) && (safe_lshift_func_int16_t_s_s(((0xF0D6L && ((***p_40) < (safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(p_38.f0, l_152)), 0L)), l_131)), 1UL)))) & p_36.f1), 1))) <= p_38.f4), l_152))))))) >= 0x9DL) <= g_135), l_153, &g_74);
        (*l_156) = func_67(l_155);
        for (p_38.f4 = 0; (p_38.f4 == 38); p_38.f4 = safe_add_func_int8_t_s_s(p_38.f4, 5))
        {
            (**l_156) = g_92;
        }
    }
    else
    {
        int **l_159 = &l_154;
        (*l_159) = l_154;
    }
    return l_160;
}







static union U1 func_41(const char p_42, char ** p_43, char p_44, int p_45, const char ** p_46)
{
    int *l_115 = &g_112.f0;
    int l_125 = 1L;
    union U1 l_126 = {0x97E171BAL};
lbl_127:
    for (g_22 = 0; (g_22 == (-6)); g_22 = safe_sub_func_uint16_t_u_u(g_22, 9))
    {
        int *l_97 = &g_74;
        (*l_97) = g_74;
        if (g_5)
            break;
        for (p_44 = 0; (p_44 < (-22)); p_44 = safe_sub_func_uint32_t_u_u(p_44, 9))
        {
            struct S0 *l_111 = &g_112;
            int **l_116 = &l_97;
            if (((*p_43) == (void*)0))
            {
                char **l_102 = (void*)0;
                struct S0 l_107 = {5L,0x1B91F40AL,4294967295UL,7L,250UL,0xF9E473B9L};
                if ((safe_lshift_func_uint8_t_u_s(p_44, 2)))
                {
                    char ***l_103 = &g_90;
                    (*l_103) = l_102;
                    return g_104;
                }
                else
                {
                    struct S0 l_109 = {4L,0x8D86F2FEL,0x8B64E3C6L,0xA5L,0xA6L,0x35E7B049L};
                    struct S0 *l_110 = &l_107;
                    struct S0 **l_113 = &l_111;
                    (*l_97) = g_22;
                    for (g_104.f0 = 0; (g_104.f0 != (-26)); g_104.f0 = safe_sub_func_int32_t_s_s(g_104.f0, 3))
                    {
                        struct S0 *l_108 = &l_107;
                        (*l_97) = p_42;
                        (*l_108) = l_107;
                        if (g_22)
                            break;
                    }
                    (*l_110) = l_109;
                    (*l_113) = l_111;
                }
            }
            else
            {
                char ***l_114 = &g_90;
                (*l_114) = &g_91;
            }
            (*l_116) = l_115;
            return g_104;
        }
    }
    if ((safe_sub_func_uint32_t_u_u((safe_div_func_int16_t_s_s((*l_115), ((safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((4L <= g_92) < p_45), (*l_115))), g_112.f5)) ^ l_125))), p_42)))
    {
        return l_126;
    }
    else
    {
        if (l_125)
            goto lbl_127;
    }
    return g_104;
}







static char ** func_47(union U3 p_48, char * p_49, char ** p_50)
{
    return &g_91;
}







static union U3 func_51(const char ** p_52, int * p_53, struct S0 p_54, const char p_55)
{
    unsigned char l_85 = 0x82L;
    int *l_86 = (void*)0;
    int *l_87 = &g_74;
    union U3 l_88 = {{0xD1334807L,0xA0BF3FD2L,5UL,-2L,0UL,0xCFA70DAEL}};
    for (g_22 = 6; (g_22 != (-26)); g_22--)
    {
        if (l_85)
            break;
    }
    (*l_87) = (&g_22 == (*p_52));
    g_74 = (g_5 & (*l_87));
    return l_88;
}







static int * func_58(char *** p_59, char p_60, const char *** const p_61, int * p_62)
{
    int l_78 = 0x2D45AB60L;
    int *l_80 = &l_78;
    int **l_79 = &l_80;
    int *l_81 = (void*)0;
    l_78 = (safe_sub_func_int8_t_s_s(l_78, (***p_59)));
    (*l_79) = func_67(&g_22);
    return l_81;
}







static int * func_67(char * p_68)
{
    unsigned l_72 = 0xE816884AL;
    int *l_73 = &g_74;
    struct S0 l_75 = {0x7FD326D3L,-3L,0UL,4L,0x39L,0x6B299B5FL};
    (*l_73) = (safe_div_func_int16_t_s_s((0x7EE8L == (l_72 > (~l_72))), 0xE8CFL));
    l_75 = l_75;
    return l_73;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_104.f0, "g_104.f0", print_hash_value);
    transparent_crc(g_104.f1, "g_104.f1", print_hash_value);
    transparent_crc(g_112.f0, "g_112.f0", print_hash_value);
    transparent_crc(g_112.f1, "g_112.f1", print_hash_value);
    transparent_crc(g_112.f2, "g_112.f2", print_hash_value);
    transparent_crc(g_112.f3, "g_112.f3", print_hash_value);
    transparent_crc(g_112.f4, "g_112.f4", print_hash_value);
    transparent_crc(g_112.f5, "g_112.f5", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_238.f0.f0, "g_238.f0.f0", print_hash_value);
    transparent_crc(g_238.f0.f1, "g_238.f0.f1", print_hash_value);
    transparent_crc(g_238.f0.f2, "g_238.f0.f2", print_hash_value);
    transparent_crc(g_238.f0.f3, "g_238.f0.f3", print_hash_value);
    transparent_crc(g_238.f0.f4, "g_238.f0.f4", print_hash_value);
    transparent_crc(g_238.f0.f5, "g_238.f0.f5", print_hash_value);
    transparent_crc(g_238.f1, "g_238.f1", print_hash_value);
    transparent_crc(g_258.f0, "g_258.f0", print_hash_value);
    transparent_crc(g_258.f1, "g_258.f1", print_hash_value);
    transparent_crc(g_258.f2, "g_258.f2", print_hash_value);
    transparent_crc(g_258.f3, "g_258.f3", print_hash_value);
    transparent_crc(g_258.f4, "g_258.f4", print_hash_value);
    transparent_crc(g_258.f5, "g_258.f5", print_hash_value);
    transparent_crc(g_265.f0.f0, "g_265.f0.f0", print_hash_value);
    transparent_crc(g_265.f0.f1, "g_265.f0.f1", print_hash_value);
    transparent_crc(g_265.f0.f2, "g_265.f0.f2", print_hash_value);
    transparent_crc(g_265.f0.f3, "g_265.f0.f3", print_hash_value);
    transparent_crc(g_265.f0.f4, "g_265.f0.f4", print_hash_value);
    transparent_crc(g_265.f0.f5, "g_265.f0.f5", print_hash_value);
    transparent_crc(g_274.f0.f0, "g_274.f0.f0", print_hash_value);
    transparent_crc(g_274.f0.f1, "g_274.f0.f1", print_hash_value);
    transparent_crc(g_274.f0.f2, "g_274.f0.f2", print_hash_value);
    transparent_crc(g_274.f0.f3, "g_274.f0.f3", print_hash_value);
    transparent_crc(g_274.f0.f4, "g_274.f0.f4", print_hash_value);
    transparent_crc(g_274.f0.f5, "g_274.f0.f5", print_hash_value);
    transparent_crc(g_326.f1, "g_326.f1", print_hash_value);
    transparent_crc(g_435.f0.f0, "g_435.f0.f0", print_hash_value);
    transparent_crc(g_435.f0.f1, "g_435.f0.f1", print_hash_value);
    transparent_crc(g_435.f0.f2, "g_435.f0.f2", print_hash_value);
    transparent_crc(g_435.f0.f3, "g_435.f0.f3", print_hash_value);
    transparent_crc(g_435.f0.f4, "g_435.f0.f4", print_hash_value);
    transparent_crc(g_435.f0.f5, "g_435.f0.f5", print_hash_value);
    transparent_crc(g_448.f0.f0, "g_448.f0.f0", print_hash_value);
    transparent_crc(g_448.f0.f1, "g_448.f0.f1", print_hash_value);
    transparent_crc(g_448.f0.f2, "g_448.f0.f2", print_hash_value);
    transparent_crc(g_448.f0.f3, "g_448.f0.f3", print_hash_value);
    transparent_crc(g_448.f0.f4, "g_448.f0.f4", print_hash_value);
    transparent_crc(g_448.f0.f5, "g_448.f0.f5", print_hash_value);
    transparent_crc(g_448.f2, "g_448.f2", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
