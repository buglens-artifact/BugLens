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
   const volatile unsigned f1;
   const unsigned f2;
   volatile unsigned f3;
   const volatile int f4;
   volatile unsigned f5;
   const unsigned short f6;
   const volatile unsigned short f7;
   unsigned char f8;
   volatile int f9;
};

struct S1 {
   const int f0;
   unsigned short f1;
   const struct S0 f2;
   volatile int f3;
   unsigned short f4;
   unsigned f5;
   volatile unsigned f6;
   volatile int f7;
};


static int g_9 = 0xED6F1860L;
static int g_13 = (-10L);
static int g_45 = 0x300A9E1AL;
static int *g_44 = &g_45;
static unsigned short g_64 = 0x341FL;
static unsigned short g_66 = 6UL;
static unsigned short g_68 = 1UL;
static unsigned char g_70 = 1UL;
static short g_73 = 0x79E4L;
static unsigned g_74 = 0x2EF5EAD4L;
static int g_91 = (-1L);
static int *g_92 = &g_91;
static unsigned char g_112 = 0UL;
static unsigned g_130 = 4294967295UL;
static unsigned g_139 = 0x32E7287DL;
static volatile int * const **g_158 = (void*)0;
static struct S1 g_189 = {0x1AEE78B5L,0UL,{0x62F8029AL,1UL,4294967294UL,0xF5CE3371L,3L,4UL,9UL,5UL,0x68L,0x1753070AL},0L,0xD90DL,1UL,4294967295UL,0x47C0CCACL};
static struct S1 *g_195 = (void*)0;
static unsigned * const g_252 = &g_189.f5;
static unsigned * const *g_251 = &g_252;
static char g_275 = 0L;
static char * const g_274 = &g_275;
static char * const *g_273 = &g_274;
static unsigned short g_284 = 0UL;
static struct S0 g_290 = {0x11BCF499L,3UL,4294967295UL,1UL,0L,4294967295UL,0xFCC5L,0xF589L,255UL,0x4B14E120L};
static char *g_323 = &g_275;
static char **g_322 = &g_323;
static struct S1 g_370 = {0xA87531F4L,0xCE1DL,{0x7CC35247L,0UL,0xDA72D44CL,0xC1DFA234L,-1L,4294967286UL,0x5CAFL,0x1F3CL,0UL,-1L},-4L,65534UL,0x6F15C1AEL,0xB1E6EC5EL,-1L};
static struct S1 *g_369 = &g_370;
static struct S1 **g_368 = &g_369;
static unsigned short *g_394 = &g_66;
static unsigned short **g_393 = &g_394;
static volatile unsigned char g_402 = 255UL;
static volatile short g_407 = 0x28F4L;
static volatile short *g_406 = &g_407;
static volatile short **g_405 = &g_406;
static short *g_409 = &g_73;
static short **g_408 = &g_409;
static unsigned char *g_430 = (void*)0;
static int * const *g_451 = &g_44;
static int * const **g_450 = &g_451;
static struct S0 *g_477 = &g_290;
static struct S0 **g_476 = &g_477;
static int g_516 = 0xAE48ADE7L;
static short g_542 = 0x49B7L;
static short g_544 = (-7L);
static short g_546 = 0x2E90L;
static const unsigned short g_549 = 0x9098L;
static const unsigned short *g_548 = &g_549;
static unsigned char g_612 = 249UL;
static unsigned *g_614 = &g_74;
static unsigned g_685 = 8UL;
static struct S1 g_716 = {-1L,65535UL,{0xEC3739E1L,0x150FF37BL,0xC370AB0DL,0x6DF3611BL,0xC5614742L,7UL,0xE434L,6UL,0xBBL,0x62A28236L},1L,0x234BL,9UL,0xDAA739D2L,0xB056FFAFL};
static int g_719 = 1L;
static const unsigned short g_786 = 7UL;



static char func_1(void);
static int func_2(short p_3);
static short func_4(int p_5, unsigned short p_6);
static int func_16(unsigned short p_17);
static unsigned char func_26(char p_27, unsigned char p_28, const int * p_29, int * p_30, int p_31);
static unsigned char func_34(unsigned p_35, int * p_36, unsigned p_37, unsigned char p_38);
static int * const ** func_41(int * p_42, unsigned p_43);
static unsigned func_51(unsigned char p_52, short p_53, int * p_54, short p_55);
static short func_79(const int * p_80, unsigned short p_81, unsigned short * p_82);
static int * func_83(unsigned char p_84);
static char func_1(void)
{
    int l_10 = 0x59008CF5L;
    int *l_11 = (void*)0;
    int *l_12 = &g_13;
    int l_22 = 0xEBD004DDL;
    unsigned short l_454 = 65535UL;
    short l_455 = 0xBCFEL;
    const unsigned l_805 = 4294967295UL;
    int l_806 = 0x05C01809L;
    unsigned short *l_811 = &g_189.f1;
    int *l_818 = &g_719;
    unsigned char *l_821 = &g_112;
    char * const *l_822 = &g_323;
    char * const **l_823 = &g_273;
    char * const **l_824 = &l_822;
    if (func_2(func_4((safe_mod_func_uint16_t_u_u(((g_9 == (((*l_12) = l_10) || (func_16((safe_sub_func_int16_t_s_s(((~((void*)0 != l_11)) | (l_22 <= 0L)), g_9))) < (func_26(((safe_rshift_func_uint8_t_u_s(func_34((safe_div_func_int32_t_s_s(((g_450 = func_41(g_44, g_45)) == (void*)0), l_10)), g_44, g_290.f2, g_370.f2.f8), 5)) < l_454), l_455, l_11, g_44, g_9) != 0xABL)))) && 0x9969L), 0x3426L)), l_22)))
    {
        int l_787 = 0x24FCBA54L;
        (*l_12) = (safe_unary_minus_func_uint32_t_u(((safe_mul_func_int16_t_s_s((*g_406), ((safe_lshift_func_uint8_t_u_s((((void*)0 != &g_369) > g_786), (*l_12))) == (((***g_450) = (-8L)) == ((((*g_394) = 0xDF98L) & 0x1272L) == ((*g_252) & (**g_251))))))) < l_787)));
        for (l_454 = 0; (l_454 >= 39); l_454 = safe_add_func_uint32_t_u_u(l_454, 1))
        {
            (*g_44) = (**g_451);
        }
        l_11 = l_11;
        for (g_716.f1 = (-16); (g_716.f1 >= 10); ++g_716.f1)
        {
            struct S0 *l_792 = &g_290;
            struct S0 **l_793 = &l_792;
            (*l_793) = l_792;
        }
    }
    else
    {
        int **l_794 = &l_12;
        unsigned *l_801 = (void*)0;
        unsigned *l_802 = &g_130;
        (*l_794) = func_83(((**g_251) >= (*l_12)));

        ;
        ;
        (**l_794) = (**g_451);
        (*l_794) = func_83((((**g_251) <= ((safe_add_func_uint8_t_u_u((**l_794), func_16(((*g_406) < ((safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s(((*g_252) <= func_16((((*l_802) = (*g_252)) ^ (safe_rshift_func_uint16_t_u_s(l_805, (**l_794)))))), (**l_794))), 0x21B464D7L)) && 252UL))))) && l_806)) < (*g_44)));
    }

    ;

    ;

    ;
    ;
    ;

    ;
    (***g_450) = (-1L);
    (*l_818) = func_34((safe_mul_func_uint16_t_u_u((**g_393), ((safe_mod_func_uint16_t_u_u((*l_12), ((*l_811) = (*l_12)))) >= (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((~(safe_lshift_func_uint16_t_u_s((((*l_818) = (((*g_368) = (*g_368)) != (void*)0)) < (((**g_451) <= (((*g_409) = (safe_add_func_uint8_t_u_u(((*l_821) = 0x3DL), (((*l_824) = ((*l_823) = l_822)) != &g_323)))) != 0x6867L)) <= g_716.f2.f1)), g_130))), 4)), (*l_12)))))), &g_13, (*g_614), g_290.f8);

    ;
    (*l_12) = 0x71378D22L;
    return (*l_818);
}







static int func_2(short p_3)
{
    (**g_451) = (safe_sub_func_int32_t_s_s(p_3, (**g_251)));
    return (**g_451);
}







static short func_4(int p_5, unsigned short p_6)
{
    int **l_466 = &g_92;
    int l_469 = 0x45F63D8AL;
    int l_470 = (-4L);
    unsigned *l_471 = &g_74;
    unsigned l_472 = 0xAD876608L;
    short ***l_547 = (void*)0;
    short *l_563 = &g_546;
    char **l_571 = (void*)0;
    char l_630 = 1L;
    unsigned char **l_653 = (void*)0;
    int * const l_718 = &g_719;
    int * const *l_717 = &l_718;
    int *l_759 = &g_719;
    int l_762 = (-4L);
    for (g_284 = 0; (g_284 != 20); g_284 = safe_add_func_uint8_t_u_u(g_284, 9))
    {
        for (g_275 = 0; (g_275 <= (-15)); g_275--)
        {
            (***g_450) = ((safe_lshift_func_uint8_t_u_u(p_6, 3)) == p_6);
        }
        if ((**g_451))
            continue;
        if ((***g_450))
            continue;
    }
    (*l_466) = func_83(p_5);

    ;
    p_5 = (safe_add_func_int8_t_s_s(((**l_466) = func_34(func_34(l_469, (*l_466), (**l_466), l_470), &g_91, (l_472 = ((*l_471) = p_6)), (((**l_466) && (safe_add_func_uint32_t_u_u(((safe_unary_minus_func_int16_t_s((-1L))) || p_6), (*g_92)))) <= (**l_466)))), (-1L)));
    if (((*g_44) = p_6))
    {
        int *l_478 = &g_13;
        int **l_490 = &l_478;
        g_476 = (void*)0;

        ;
        p_5 = ((*l_478) = ((**l_466) = 0xCD1A0305L));
        for (g_130 = 0; (g_130 >= 20); g_130 = safe_add_func_int32_t_s_s(g_130, 2))
        {
            short l_489 = 0x58D9L;
            (*l_466) = func_83((+func_34((safe_div_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(func_34(((*l_471) = p_6), func_83(l_489), l_489, p_6), (*l_478))) != p_6), 4)) <= (+func_26(((**g_273) = (**g_273)), l_489, &g_45, &g_13, g_370.f2.f0))) < (*l_478)), 0x4EL)), p_5)), &g_13, g_189.f2.f8, g_70)));
        }
        (*l_490) = (**g_450);

        ;
    }
    else
    {
        unsigned char l_493 = 2UL;
        const int *l_497 = &g_45;
        int *l_499 = &l_470;
        unsigned l_517 = 4294967288UL;
        short *l_561 = &g_73;
        const struct S0 *l_599 = &g_189.f2;
        int **l_625 = &l_499;
        unsigned l_635 = 4294967295UL;
        const int *l_660 = (void*)0;
        unsigned l_678 = 0xB18AA35AL;
        unsigned short ***l_707 = (void*)0;
        char *l_748 = &g_275;
        const int **l_776 = &l_660;
        const int ***l_775 = &l_776;
        for (g_9 = (-25); (g_9 == (-18)); g_9++)
        {
            unsigned short l_494 = 0x4945L;
            int *l_498 = &g_45;
            short **l_552 = &g_409;
            char *l_593 = (void*)0;
            int *l_616 = &g_45;
            p_5 = ((func_16(l_493) & ((*l_498) = func_51(p_5, (((p_5 >= 1L) & (+((l_493 == (l_494 < (l_493 <= ((safe_add_func_uint32_t_u_u(func_26((((**g_408) & 0x6DDDL) || p_5), (**l_466), l_497, l_498, g_370.f2.f7), p_6)) <= p_5)))) == p_5))) <= p_6), l_499, (**g_408)))) ^ 5L);
            if (p_6)
            {
                char l_510 = 1L;
                int *l_515 = &g_45;
                (*l_499) = func_51((*l_497), (safe_rshift_func_int8_t_s_u((((*g_409) = (**g_408)) == (((safe_sub_func_uint8_t_u_u(p_5, (safe_mod_func_int32_t_s_s((0x37L ^ ((*l_499) = (9UL ^ ((((**l_466) != p_5) > (~(safe_add_func_int16_t_s_s((g_516 = (l_510 & ((func_34((safe_div_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u(0x30A2C6E8L, (*l_499))) != 1UL) && 0xBFB1D0A0L), (*l_497))), l_515, (*l_498), p_6) && p_5) & 0x42L))), (*l_515))))) != 0x20B105ACL)))), (*l_497))))) == 7UL) >= p_5)), 1)), (*l_466), l_517);
                if ((**l_466))
                    break;
                if ((***g_450))
                    break;
                if ((((*l_498) || (((void*)0 != &g_394) == (**l_466))) != p_6))
                {
                    (*l_499) = (safe_rshift_func_int16_t_s_u((**l_466), (func_16((p_5 < (safe_add_func_uint8_t_u_u((*l_499), func_34(g_290.f3, (*l_466), ((void*)0 == &g_70), p_6))))) ^ (*g_274))));
                    (*l_466) = l_499;

                    ;
                    return (*g_409);



                }
                else
                {
                    unsigned short *l_540 = &g_68;
                    short *l_541 = &g_542;
                    short *l_543 = &g_544;
                    short *l_545 = &g_546;
                    p_5 = (**l_466);
                    (***g_450) = (((((func_51((*l_515), ((*l_545) = ((*l_543) = ((*l_541) = ((*g_409) = (safe_div_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(p_6, (*g_44))), 0)) == (safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((*g_323) != 1L) > (safe_sub_func_uint32_t_u_u(p_6, (p_6 ^ ((*l_540) = ((safe_lshift_func_uint16_t_u_u(((*l_499) = ((*g_394) = (**l_466))), (safe_mod_func_uint8_t_u_u((*l_498), 0x08L)))) && p_5)))))), (**g_408))), p_5))), p_5)))))), l_499, p_6) >= 0x9094DB9DL) <= p_6) ^ (*l_498)) <= 0xC18FL) && (*l_498));
                    (***g_450) = ((l_547 != &g_405) == ((**g_251) = ((*g_393) == (g_548 = &p_6))));

                    ;
                }

                ;
            }
            else
            {
                short ***l_553 = &l_552;
                int l_560 = 0x83704C71L;
                struct S0 *l_598 = &g_290;
                unsigned char **l_604 = &g_430;
                if ((safe_sub_func_int8_t_s_s((-1L), ((&g_409 == ((*l_553) = l_552)) == ((*l_498) = (*l_497))))))
                {
                    short **l_562 = (void*)0;
                    unsigned char *l_570 = &g_112;
                    unsigned char *l_572 = &l_493;
                    int l_573 = 0x4A25614EL;
                    char *l_594 = (void*)0;
                    unsigned *l_595 = &g_130;
                    const struct S0 **l_600 = (void*)0;
                    const struct S0 **l_601 = &l_599;
                    if ((safe_mul_func_int8_t_s_s((**l_466), (safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((l_560 || ((**l_553) == (l_563 = l_561))), (((safe_div_func_int32_t_s_s((safe_add_func_uint8_t_u_u(((*l_572) = ((g_290.f8 = (safe_mod_func_uint8_t_u_u((g_70 = ((*l_570) = g_370.f3)), (**l_466)))) <= (l_571 == &g_274))), ((*g_409) && p_6))), 0xA31BE45CL)) && l_573) == (*l_498)))), (**l_466))))))
                    {
                        unsigned char **l_575 = &l_572;
                        unsigned char ***l_574 = &l_575;
                        const int **l_576 = &l_497;
                        int **l_577 = (void*)0;
                        int **l_578 = &l_498;
                        (*l_574) = &g_430;

                        ;
                        (*l_576) = l_497;
                        (*l_578) = (*g_451);
                    }
                    else
                    {
                        (*l_466) = func_83(((2L || (***g_450)) >= p_5));

                        ;
                        if (p_6)
                            continue;
                    }
                    (*l_499) = (func_16(((*g_394) = (*l_499))) && (((*g_409) == (safe_mod_func_uint32_t_u_u((**g_251), ((*l_595) = func_26((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(((&g_112 != l_572) && (safe_rshift_func_uint16_t_u_u((*g_548), (safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((((l_593 == (l_594 = &g_275)) <= 65531UL) & p_5) ^ 0x33L), 0x3422L)), l_573))))), l_573)) & (**l_466)), (**l_466))), p_6, l_498, &g_45, l_573))))) > (*l_499)));

                    ;
                    for (p_5 = 0; (p_5 <= (-1)); p_5 = safe_sub_func_int32_t_s_s(p_5, 7))
                    {
                        (*g_44) = (**l_466);
                        if ((*l_498))
                            continue;
                        (*g_476) = l_598;
                    }
                    (*l_601) = l_599;
                }
                else
                {
                    if ((*l_499))
                        break;
                }
                for (g_70 = (-18); (g_70 == 4); g_70 = safe_add_func_uint8_t_u_u(g_70, 5))
                {
                    short l_611 = 0x3D3DL;
                    l_604 = (void*)0;

                    ;
                    for (l_470 = 22; (l_470 == 10); l_470 = safe_sub_func_uint32_t_u_u(l_470, 6))
                    {
                        unsigned **l_613 = &l_471;
                        int l_615 = 0x8BD7F8BFL;
                        const struct S0 *l_617 = &g_370.f2;
                        const struct S0 **l_618 = (void*)0;
                        const struct S0 **l_619 = (void*)0;
                        const struct S0 **l_620 = &l_617;
                        (**g_451) = (safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(l_611, ((((((&g_74 != (g_614 = ((*l_613) = func_83((g_290.f8 = g_612))))) <= g_290.f3) < p_6) & (6UL | (func_16((*g_548)) != (*g_252)))) | l_615) == l_560))) <= (***g_450)), 0x33L));

                        ;
                        ;
                        ;
                        (*l_466) = l_498;
                        l_616 = l_616;
                        (*l_620) = l_617;
                    }
                    (***g_450) = (safe_sub_func_uint16_t_u_u((*g_394), ((***l_553) = 0x54A8L)));
                    for (l_611 = 23; (l_611 > 14); l_611--)
                    {
                        (**g_451) = (-1L);
                    }
                }

                ;
            }
        }

        ;
        ;
        ;
        ;
        ;
        (*l_625) = ((*l_466) = func_83((*l_499)));

        ;
        ;
        if ((p_5 < ((*g_274) = (-6L))))
        {
            unsigned char l_636 = 0x2AL;
            unsigned char **l_652 = (void*)0;
            unsigned char l_659 = 1UL;
            int *l_661 = &g_91;
            struct S1 *l_664 = (void*)0;
            int l_701 = 0xFF698FAAL;
            const struct S1 *l_715 = &g_716;
            if (p_6)
            {
                struct S1 *l_626 = (void*)0;
                int *l_629 = &g_13;
                struct S0 *l_645 = &g_290;
                (*g_368) = l_626;

                ;
                for (l_517 = 0; (l_517 != 56); ++l_517)
                {
                    (*l_466) = (void*)0;

                    ;
                    (*l_466) = l_629;

                    ;
                }

                ;
                if ((l_630 | 4294967295UL))
                {
                    unsigned char *l_643 = &g_290.f8;
                    unsigned char *l_644 = &g_612;
                    (*l_629) = ((**l_625) = (**l_466));
                    (*g_476) = l_645;
                    return p_5;


                }
                else
                {
                    unsigned char ***l_654 = &l_653;
                    int l_662 = 0L;
                    if ((safe_lshift_func_int16_t_s_s((p_5 > p_5), (*g_406))))
                    {
                        (*g_476) = (*g_476);
                    }
                    else
                    {
                        (*l_625) = &p_5;

                        ;
                        (***g_450) = ((*g_252) != (*g_44));
                    }

                    ;
                    (*g_368) = (*g_368);
                    (**l_466) = (safe_add_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(((l_652 != ((*l_654) = l_653)) || (*l_629)), p_5)) == (*g_252)), ((!g_70) & (0x05L && ((*g_323) || (*l_629))))));
                    if (((safe_mod_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((*l_497), (l_659 && l_662))) | 0x4AL), (*l_629))) <= 1UL))
                    {
                        int **l_663 = &l_661;
                        (*l_663) = (*g_451);

                        ;
                        (*g_368) = l_664;
                        (***g_450) = p_6;
                        (*l_466) = (void*)0;

                        ;
                    }
                    else
                    {
                        int l_677 = 0x0E37AB31L;
                        short *l_690 = &g_546;
                        short *l_691 = (void*)0;
                        (*g_92) = (safe_lshift_func_uint8_t_u_u((l_677 = (safe_mod_func_int16_t_s_s(((~(safe_add_func_int32_t_s_s((p_5 = (*l_629)), (**g_251)))) & (6L < p_6)), (safe_rshift_func_int16_t_s_u(((((*g_394) = (l_662 != (safe_mul_func_int8_t_s_s((*g_274), (safe_mod_func_int8_t_s_s((0xDC198A26L && ((3UL && ((*l_629) <= (*g_44))) ^ (-1L))), p_6)))))) & (*g_409)) & (*l_629)), p_6))))), p_6));
                        (*l_661) = ((l_678 == ((safe_rshift_func_uint16_t_u_s((p_5 > (safe_sub_func_uint8_t_u_u((p_6 < (safe_sub_func_uint32_t_u_u(l_677, func_16((g_685 = (p_5 < ((**g_408) = (*g_406)))))))), p_6))), 5)) != ((safe_mod_func_int16_t_s_s((g_544 = ((*l_690) = (safe_mul_func_int16_t_s_s((9L || (*g_252)), 0x6F7BL)))), 0x7879L)) != 1L))) != p_5);
                        (*l_629) = (safe_add_func_uint16_t_u_u(p_6, (*g_409)));
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
                int *l_696 = &g_45;
                unsigned short ***l_710 = &g_393;
                unsigned l_756 = 0xD39C165CL;
                struct S1 **l_757 = &g_195;
                short l_765 = (-1L);
                unsigned char *l_766 = &l_659;
                if ((**l_466))
                {
                    int **l_694 = (void*)0;
                    (*l_466) = (*g_451);
                    (*l_466) = func_83(p_5);
                    if (p_6)
                    {
                        int *l_695 = (void*)0;
                        unsigned char *l_698 = &l_636;
                        l_696 = (l_695 = &g_13);

                        ;
                        ;
                        (*l_499) = func_26((**g_273), ((*l_698) = (safe_unary_minus_func_uint8_t_u((*l_497)))), (*l_625), &p_5, g_189.f4);
                        (*l_696) = (safe_div_func_uint16_t_u_u((**g_393), ((*g_409) = l_701)));
                    }
                    else
                    {
                        (*l_625) = &p_5;

                        ;
                        return (*g_406);


                    }

                    ;
                }
                else
                {
                    char l_706 = 0xBAL;
                    unsigned char *l_712 = (void*)0;
                    const struct S1 *l_714 = &g_189;
                    struct S0 * const l_720 = &g_290;
                    int l_723 = 0xE55F8A38L;
                    if ((0xEBL && p_5))
                    {
                        unsigned short ****l_708 = (void*)0;
                        unsigned short ****l_709 = &l_707;
                        unsigned short ****l_711 = &l_710;
                        (*l_466) = func_83((((safe_rshift_func_uint8_t_u_u(g_290.f6, (l_706 ^ p_5))) == ((void*)0 != &l_625)) | 0xA474L));
                        (*l_696) = p_6;
                        (**l_466) = (((*l_709) = l_707) != ((*l_711) = l_710));
                    }
                    else
                    {
                        unsigned char **l_713 = &g_430;
                        (***g_450) = (&g_70 != ((*l_713) = l_712));

                        ;
                        l_715 = l_714;

                        ;
                        (*g_368) = (*g_368);
                        (*l_661) = ((*g_368) == (void*)0);
                    }

                    ;
                    if (((l_717 = l_466) == &l_718))
                    {
                        struct S0 **l_721 = (void*)0;
                        struct S0 **l_722 = (void*)0;
                        int l_724 = 0xCE6B0153L;
                        l_599 = l_720;

                        ;
                        g_476 = &g_477;
                        (*l_499) = (l_723 = (*l_661));
                        return l_724;


                    }
                    else
                    {
                        (*l_466) = &p_5;

                        ;
                        return p_6;



                    }
                }

                ;
                if (((*g_44) = ((safe_rshift_func_uint8_t_u_s(1UL, func_26(((*g_274) = ((safe_add_func_uint32_t_u_u(((p_5 || (0x8563A323L || ((&g_394 != ((*l_710) = (*l_710))) >= ((**l_466) = ((*l_661) = (*l_661)))))) != p_5), func_16(((**g_408) <= (safe_lshift_func_int16_t_s_u((&l_710 != (void*)0), (*g_548))))))) != 0L)), p_6, &g_719, &g_719, g_189.f2.f0))) == 6L)))
                {
                    (**l_466) = (*l_661);
                    return (*g_409);


                }
                else
                {
                    unsigned short l_746 = 3UL;
                    int *l_758 = &g_719;
                    for (g_716.f1 = (-19); (g_716.f1 == 7); g_716.f1 = safe_add_func_int32_t_s_s(g_716.f1, 3))
                    {
                        unsigned char *l_745 = &l_636;
                        const int *l_747 = &l_470;
                        (**l_625) = func_26((((*g_252) = (safe_lshift_func_uint16_t_u_s(((***l_710) = (0UL == ((**g_408) = (*g_409)))), ((*l_696) != (safe_add_func_int8_t_s_s((func_26(((*g_274) = 7L), p_6, func_83((((*l_745) = (safe_mod_func_int16_t_s_s(p_6, (safe_mod_func_uint8_t_u_u(p_6, (((safe_mul_func_uint8_t_u_u(p_5, p_6)) || 0x91F05667L) & 0x9AL)))))) || g_370.f2.f6)), &g_13, p_6) >= l_746), p_6)))))) | p_5), p_5, l_747, &g_719, g_370.f4);
                    }
                    if (((void*)0 != l_748))
                    {
                        unsigned l_749 = 0x571C760AL;
                        (*g_44) = (((((*g_394) = (((**l_717) = ((*g_252) <= l_749)) && (func_26((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((((safe_lshift_func_uint8_t_u_u(l_756, (*l_696))) ^ 0x5712L) ^ (~(&p_6 != &p_6))) != (&g_369 != l_757)), p_6)), (*l_696))), p_5, &g_13, l_758, l_749) & (**l_717)))) > p_5) | 0xE356L) >= p_6);
                        (*l_625) = func_83((**l_625));
                        (*g_44) = (!((!p_6) < (*l_661)));
                    }
                    else
                    {
                        (*l_466) = l_696;

                        ;
                        (*l_625) = l_759;

                        ;
                        (**g_451) = p_5;
                    }

                    ;
                    ;
                }

                ;
                ;
                (**l_717) = (safe_mul_func_int8_t_s_s((l_762 <= 0xD8B3L), 0xFEL));
                (*l_759) = func_26(((safe_lshift_func_uint8_t_u_u(((*g_409) >= (**g_393)), ((***g_450) & (p_5 = l_765)))) < ((**l_625) <= p_6)), ((*l_766) = func_34((*g_614), &g_13, (*g_614), (*l_661))), &g_13, &g_45, g_370.f2.f2);
            }

            ;
            ;
            ;
            ;
            (*l_466) = func_83((*l_499));

            ;
        }
        else
        {
            unsigned l_767 = 0x2DFA87B8L;
            unsigned **l_772 = &g_614;
            const int ****l_777 = (void*)0;
            const int ****l_778 = &l_775;
            (*l_625) = func_83(l_767);
            (**l_717) = (0x58A4L & ((safe_rshift_func_uint8_t_u_u(0x51L, 1)) | (safe_sub_func_uint16_t_u_u((((((void*)0 == l_772) > 0L) & (safe_lshift_func_int8_t_s_s((*g_323), 4))) >= g_370.f0), ((*g_252) < (((*l_778) = l_775) != &g_451))))));
        }

        ;
        ;
    }

    ;
    ;
    ;
    ;
    ;
    ;
    return p_5;


}







static int func_16(unsigned short p_17)
{
    int ***l_23 = (void*)0;
    int *l_25 = (void*)0;
    int **l_24 = &l_25;
    l_24 = (void*)0;

    ;
    g_13 = g_13;
    return p_17;
}







static unsigned char func_26(char p_27, unsigned char p_28, const int * p_29, int * p_30, int p_31)
{
    unsigned short l_459 = 1UL;
    for (g_112 = 16; (g_112 != 39); g_112 = safe_add_func_uint32_t_u_u(g_112, 3))
    {
        unsigned l_458 = 0xD2EE8FABL;
        (***g_450) = l_458;
    }
    return l_459;
}







static unsigned char func_34(unsigned p_35, int * p_36, unsigned p_37, unsigned char p_38)
{
    struct S0 *l_453 = &g_290;
    struct S0 **l_452 = &l_453;
    (*g_368) = (*g_368);
    (*l_452) = &g_290;
    return g_189.f2.f5;
}







static int * const ** func_41(int * p_42, unsigned p_43)
{
    const unsigned short l_48 = 3UL;
    short l_58 = (-9L);
    unsigned short *l_63 = &g_64;
    unsigned short *l_65 = &g_66;
    unsigned short *l_67 = &g_68;
    unsigned char *l_69 = &g_70;
    int l_71 = 0x18CB0B9DL;
    short *l_72 = &g_73;
    int * const *l_449 = &g_92;
    int * const **l_448 = &l_449;
    (*g_44) = (((*l_67) = ((*g_44) ^ (safe_mul_func_int16_t_s_s(l_48, ((safe_add_func_uint32_t_u_u(func_51(p_43, p_43, p_42, (safe_add_func_int16_t_s_s(l_58, ((*l_72) = (((1UL == ((safe_mod_func_uint8_t_u_u(((*l_69) = (safe_div_func_uint16_t_u_u(((*l_63) = 0x198FL), ((*l_67) = ((*l_65) = l_48))))), l_71)) < l_48)) || g_66) >= g_45))))), l_58)) == 1UL))))) >= p_43);

    ;
    ;

    ;
    return g_450;


}







static unsigned func_51(unsigned char p_52, short p_53, int * p_54, short p_55)
{
    unsigned short *l_87 = &g_68;
    int l_311 = (-4L);
    char *l_321 = (void*)0;
    char **l_320 = &l_321;
    unsigned short l_324 = 0x0335L;
    unsigned short *l_327 = &l_324;
    char l_350 = 0xDEL;
    const struct S1 *l_372 = (void*)0;
    const struct S1 **l_371 = &l_372;
    int *l_396 = (void*)0;
    unsigned l_443 = 0x0A63298DL;
    g_74 = 0x34437F0DL;
    if ((safe_div_func_int16_t_s_s((0x47BEL || (safe_lshift_func_int16_t_s_s(g_45, 0))), func_79(func_83((safe_mod_func_uint16_t_u_u(0x060FL, ((*l_87) = 0x35BDL)))), p_52, l_87))))
    {
        int **l_312 = (void*)0;
        int **l_313 = &g_92;
        struct S0 *l_344 = &g_290;
        unsigned short *l_351 = &g_64;
        int l_375 = (-3L);
        l_311 = 0x8459D8AAL;
        (*l_313) = p_54;


        for (g_290.f0 = 0; (g_290.f0 >= (-23)); --g_290.f0)
        {
            const int *l_353 = &g_91;
            struct S1 **l_377 = &g_369;
            unsigned short l_391 = 0x5C7CL;
            int l_438 = (-2L);
            int *l_441 = (void*)0;
            int **l_440 = &l_441;
            int *l_442 = &l_375;
            if ((*p_54))
                break;
            if (((safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((g_322 = l_320) == (void*)0), l_324)), (safe_mul_func_int16_t_s_s((p_53 = g_189.f2.f4), ((*l_87) = (p_52 != 0xC1L)))))) | ((g_9 || (g_130 && p_52)) != (*p_54))))
            {
                unsigned char l_330 = 0x85L;
                unsigned l_363 = 0xB7977424L;
                unsigned short *l_364 = &g_284;
                int *l_380 = (void*)0;
                int *l_381 = &l_375;
                unsigned short l_382 = 0x5A48L;
                short **l_435 = &g_409;
                if (func_79(p_54, g_189.f2.f9, l_327))
                {
                    int l_343 = (-8L);
                    unsigned l_349 = 1UL;
                    const int *l_354 = &l_311;
                    int *l_365 = &g_91;
                    for (g_275 = 0; (g_275 == (-4)); g_275--)
                    {
                        unsigned l_352 = 0x0E664CF5L;
                        l_330 = l_324;
                        l_311 = (safe_mul_func_uint16_t_u_u(((*l_327) = 0xCA5EL), 0x8E3BL));
                        l_352 = (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u(func_79(&g_91, (((*g_44) == 0x64C46BD8L) && ((g_73 = (-1L)) < (safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((l_311 <= l_343), (((void*)0 == l_344) < (safe_sub_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(l_349, p_52)) <= l_343), l_350))))), l_324)))), l_351), g_189.f2.f0)), (*g_323))), 1));
                        g_91 = l_350;
                    }
                    (*l_365) = func_79(l_353, ((*l_87) = (((func_79(l_354, (!((g_189.f5 & (((safe_lshift_func_uint16_t_u_s(((((*l_353) != (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(p_53, g_189.f2.f8)), 0)), p_53))) | ((**g_273) || l_330)) && l_350), 5)) == g_290.f5) && 4294967286UL)) && 7UL)), &l_324) & 0x0AECL) != p_53) == l_363)), l_364);
                    (*l_313) = func_83(((((func_79(func_83(l_324), p_52, &g_284) >= p_52) == (safe_sub_func_int8_t_s_s((g_368 == l_371), l_363))) ^ 0x1549L) < (*g_323)));

                    ;
                }
                else
                {
                    for (g_64 = (-11); (g_64 != 19); g_64++)
                    {
                        short l_376 = 0xE503L;
                        l_376 = (+(0x089725B4L && (l_375 = (-9L))));
                    }
                }
                if ((((void*)0 == l_377) && (p_52 != (((p_52 || (safe_div_func_uint32_t_u_u((*g_252), (((l_382 = ((*l_381) = (l_311 = (*g_44)))) ^ (((*g_323) = (*g_274)) > (p_53 <= g_290.f0))) || p_55)))) == 0x196CL) | (**l_313)))))
                {
                    unsigned char *l_392 = &g_112;
                    unsigned short **l_395 = &g_394;
                    if ((*p_54))
                        break;
                    if (l_324)
                        continue;
                    if ((safe_lshift_func_uint8_t_u_u((*l_353), (safe_add_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((safe_div_func_uint8_t_u_u((*l_381), (~p_52))), p_53)) | 0x0FF1L), ((*l_392) = (((0x45DCL == g_189.f2.f4) > 0xC2A831BCL) > ((*g_252) < l_391))))))))
                    {
                        (*l_313) = func_83((&l_327 != (l_395 = g_393)));

                        ;
                    }
                    else
                    {
                        if ((*p_54))
                            break;
                        (*l_381) = (+(*l_353));
                        (*l_313) = (void*)0;

                        ;
                        l_396 = (void*)0;

                        ;
                    }

                    ;
                }
                else
                {
                    short l_397 = 0x86A1L;
                    short ***l_410 = &g_408;
                    short *l_415 = &l_397;
                    int l_416 = 0x0F102A20L;
                    int l_424 = 0x96C7F075L;
                    int l_425 = 1L;
                    l_311 = l_397;
                    (*l_381) = (safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s((p_52 & ((g_402 | (safe_sub_func_uint32_t_u_u(((*g_252) = (((*l_415) = ((((g_405 != ((*l_410) = g_408)) != (((safe_mul_func_int16_t_s_s(((*g_409) = (&l_312 != g_158)), 0x8975L)) == ((safe_rshift_func_int8_t_s_s(1L, ((*g_323) = (p_53 == 0x61CE2FE3L)))) ^ 0x89A8L)) | (*l_353))) | g_370.f2.f8) < g_370.f2.f6)) && p_55)), p_52))) ^ (**l_313))), l_416)), p_52));
                    g_91 = ((p_52 && ((*l_381) = (safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((l_425 = (p_55 ^ (safe_rshift_func_int16_t_s_u((l_424 = ((*g_409) = (safe_mul_func_int16_t_s_s(p_53, 0x0729L)))), ((*g_394) = (*l_353)))))))), (safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(p_55, (*l_381))), 5)))))) && ((*l_415) = (&l_330 != (g_430 = &g_70))));
                }


                (*l_381) = (l_438 = (safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(((*g_394) <= (((*g_409) = ((void*)0 != l_435)) != ((safe_sub_func_int8_t_s_s(((*l_353) >= 255UL), 0xB0L)) ^ (*g_274)))), (**g_273))), 11)));
            }
            else
            {
                int ***l_439 = &l_312;
                if ((*p_54))
                    break;
                (*l_313) = func_83((p_53 != (**l_313)));

                ;
                (*l_313) = p_54;


                (*l_439) = &p_54;

                ;
            }


            ;
            (*l_440) = (l_396 = ((*l_313) = &g_45));

            ;
            ;
            ;
            (*l_442) = 0x415C698CL;
        }

        ;

        ;
    }
    else
    {
        int *l_444 = &l_311;
        (*l_444) = l_443;
    }



    ;
    for (g_370.f4 = (-26); (g_370.f4 != 22); g_370.f4 = safe_add_func_int8_t_s_s(g_370.f4, 1))
    {
        char l_447 = 0xE3L;
        if (l_447)
            break;
    }
    return p_55;


}







static short func_79(const int * p_80, unsigned short p_81, unsigned short * p_82)
{
    char l_105 = 0xFFL;
    unsigned char *l_109 = &g_70;
    int l_121 = 0x567AB627L;
    int *l_133 = &g_91;
    const short *l_149 = &g_73;
    unsigned short l_225 = 65535UL;
    unsigned *l_250 = &g_139;
    unsigned **l_249 = &l_250;
    const short ** const l_264 = &l_149;
    const short ** const *l_263 = &l_264;
    int **l_309 = (void*)0;
    int l_310 = 0x594B5413L;
    if ((*g_44))
    {
        const int l_106 = 0x39D6F469L;
        unsigned char *l_110 = (void*)0;
        unsigned char *l_111 = &g_112;
        unsigned l_128 = 4294967295UL;
        struct S1 *l_194 = &g_189;
        for (p_81 = 0; (p_81 >= 25); p_81 = safe_add_func_int16_t_s_s(p_81, 9))
        {
            int **l_96 = &g_92;
            (*l_96) = func_83(g_74);

            ;
        }
        if ((safe_sub_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((*p_82) = g_70), (safe_add_func_int32_t_s_s((g_91 = (safe_lshift_func_int8_t_s_s(l_105, l_106))), (((safe_mul_func_int8_t_s_s(((void*)0 == l_109), ((!(!((*l_111) = (1L & 3L)))) <= g_66))) > ((safe_unary_minus_func_int16_t_s((safe_add_func_uint32_t_u_u(1UL, g_66)))) >= 4294967295UL)) ^ (*g_44)))))), l_105)))
        {
            unsigned l_118 = 0UL;
            unsigned *l_129 = &g_130;
            short *l_131 = &g_73;
            int **l_132 = (void*)0;
            unsigned * const l_138 = &g_139;
            unsigned * const *l_137 = &l_138;
            unsigned * const **l_136 = &l_137;
            unsigned * const *l_141 = &l_129;
            unsigned * const **l_140 = &l_141;
            p_80 = func_83((((*l_131) = (safe_div_func_uint8_t_u_u(l_118, (safe_sub_func_uint32_t_u_u(g_66, ((0xDDE25D9DL != (l_121 = (*g_92))) & (safe_mod_func_uint32_t_u_u((((*l_129) = (((!1UL) >= (safe_mul_func_uint8_t_u_u(g_64, ((*l_111) = g_9)))) <= (safe_lshift_func_uint16_t_u_u(l_128, 4)))) ^ (0L == l_106)), g_45)))))))) && l_106));

            ;
            ;
            l_133 = &g_45;

            ;
            p_80 = func_83((safe_mod_func_uint16_t_u_u(1UL, l_128)));
            (*l_140) = ((*l_136) = (void*)0);

            ;
            ;
        }
        else
        {
            int **l_142 = &l_133;
            int l_152 = (-1L);
            int *l_153 = &l_121;
            short l_215 = 0L;
            (*l_142) = &g_45;

            ;
            (*l_153) = ((((*l_111) = (l_106 > ((((safe_add_func_uint8_t_u_u(p_81, g_112)) ^ ((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((l_149 != &g_73), ((safe_add_func_int16_t_s_s(l_128, ((*l_133) < (**l_142)))) >= (((p_81 <= 0xE6L) ^ 0L) ^ (-1L))))), g_9)) >= l_128)) != (**l_142)) && (*l_133)))) & 0x89L) & l_152);
            if ((*p_80))
            {
                (*l_153) = (&g_44 != (void*)0);
            }
            else
            {
                unsigned l_161 = 0x1B9AD149L;
                unsigned **l_164 = (void*)0;
                unsigned *l_166 = (void*)0;
                unsigned **l_165 = &l_166;
                unsigned *l_168 = &g_139;
                unsigned **l_167 = &l_168;
                short *l_169 = &g_73;
                char *l_170 = &l_105;
                struct S1 *l_188 = &g_189;
                if (((safe_div_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(0xB4L, ((*l_153) = ((g_158 == (void*)0) < (*l_133))))) & (safe_add_func_uint16_t_u_u((l_161 && (safe_add_func_uint16_t_u_u(((**l_142) & l_106), p_81))), (((*l_170) = (((*l_169) = (((*l_167) = ((*l_165) = l_153)) != &g_139)) | 0xAE20L)) >= l_161)))), 0xBE96L)) <= g_91))
                {
                    struct S1 **l_190 = &l_188;
                    if ((**l_142))
                    {
                        return (*l_133);
                    }
                    else
                    {
                        int l_183 = 0x0CD08EF1L;
                        char *l_184 = &l_105;
                        char **l_185 = (void*)0;
                        char **l_186 = &l_170;
                        int *l_187 = &g_91;
                        (*l_187) = ((g_91 <= ((safe_mod_func_uint32_t_u_u(((**l_167) = 0x0B75AD71L), p_81)) || (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((*l_169) = (safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((-1L), 11)), 9L))), p_81)), 1)), 7)))) != (l_183 ^ (((*l_186) = l_184) == (void*)0)));
                    }
                    (*l_190) = l_188;
                }
                else
                {
                    if ((p_81 > g_189.f2.f2))
                    {
                        unsigned short *l_193 = &g_68;
                        unsigned short **l_192 = &l_193;
                        unsigned short ***l_191 = &l_192;
                        (*l_142) = func_83(l_161);

                        ;
                        (*l_191) = &p_82;

                        ;
                        (*l_153) = (*p_80);
                        (*l_142) = (void*)0;

                        ;
                    }
                    else
                    {
                        g_195 = l_194;

                        ;
                    }

                    ;
                }

                ;
                ;
                ;
                for (g_189.f5 = 11; (g_189.f5 == 9); g_189.f5 = safe_sub_func_uint8_t_u_u(g_189.f5, 4))
                {
                    int l_204 = 8L;
                    short *l_220 = &g_73;
                    for (g_66 = 28; (g_66 < 47); g_66 = safe_add_func_uint32_t_u_u(g_66, 2))
                    {
                        const short **l_201 = &l_149;
                        const short ***l_200 = &l_201;
                        int l_202 = 0xCBD10C21L;
                        (*l_200) = &l_149;
                        (*l_142) = func_83((g_189.f2.f2 >= ((*l_111) = g_189.f2.f6)));

                        ;
                        ;
                        (*l_153) = l_202;
                        (*l_142) = func_83(g_64);
                    }
                    if ((safe_unary_minus_func_int32_t_s((l_204 ^ (safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(7L, g_189.f6)), (((safe_mod_func_int32_t_s_s(((*l_153) = (*p_80)), p_81)) <= g_189.f1) < ((*p_80) || ((0xA2D939DEL <= g_189.f4) != 1UL)))))))))
                    {
                        const int *l_212 = &g_45;
                        const int **l_211 = &l_212;
                        (*l_211) = p_80;


                        (*l_142) = l_166;

                        ;
                        l_225 = ((+(safe_add_func_uint32_t_u_u(l_161, l_215))) > ((*l_212) & (g_189.f2.f2 ^ (0x7FL >= (safe_mul_func_int16_t_s_s(((l_169 != l_220) > 0xD0L), (safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(g_189.f1, 5UL)), p_81))))))));
                    }
                    else
                    {
                        char l_226 = 0x0CL;
                        l_226 = ((*l_153) = ((p_81 < (*p_82)) | (*g_44)));
                    }
                }

                ;
            }

            ;
            (*l_142) = &l_121;

            ;
        }

        ;
    }
    else
    {
        char *l_231 = &l_105;
        int *l_234 = &g_91;
        int l_305 = 7L;
        if ((safe_rshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(p_81, ((*l_231) = g_139))), 7)))
        {
            unsigned **l_259 = &l_250;
            int l_262 = 0xBDD84C01L;
            for (g_64 = 24; (g_64 > 35); g_64 = safe_add_func_int8_t_s_s(g_64, 1))
            {
                int **l_235 = (void*)0;
                int **l_236 = (void*)0;
                int **l_237 = &g_92;
                (*l_237) = l_234;

                ;
            }
            for (g_130 = 0; (g_130 <= 45); g_130 = safe_add_func_uint8_t_u_u(g_130, 1))
            {
                unsigned l_255 = 4294967294UL;
                for (g_189.f4 = 0; (g_189.f4 <= 31); g_189.f4 = safe_add_func_uint16_t_u_u(g_189.f4, 1))
                {
                    const unsigned short l_247 = 65530UL;
                    int l_248 = 0x4DCE6FA7L;
                    struct S1 *l_253 = &g_189;
                    struct S1 **l_254 = &g_195;
                    for (p_81 = 0; (p_81 < 26); p_81++)
                    {
                        unsigned l_246 = 0x5C662F21L;
                        l_248 = (safe_sub_func_int32_t_s_s((g_189.f2.f8 && l_246), l_247));
                    }
                    (*l_133) = ((l_249 != g_251) ^ ((((*l_254) = l_253) != (void*)0) < l_255));

                    ;
                    (*l_133) = l_255;
                    (*l_133) = 0xFE5F7989L;
                }
            }
            (*l_133) = (safe_rshift_func_int8_t_s_s((+l_262), 6));
        }
        else
        {
            unsigned short l_292 = 0x5EEDL;
            for (g_189.f1 = 26; (g_189.f1 <= 5); g_189.f1 = safe_sub_func_uint8_t_u_u(g_189.f1, 5))
            {
                unsigned short * const l_283 = &g_284;
                unsigned short * const *l_282 = &l_283;
                unsigned short * const **l_281 = &l_282;
                unsigned short * const *l_286 = &l_283;
                unsigned short * const **l_285 = &l_286;
                struct S0 *l_289 = &g_290;
                if ((*p_80))
                    break;
                (*l_285) = ((*l_281) = &p_82);

                ;
                ;
                for (p_81 = 29; (p_81 != 51); p_81 = safe_add_func_int16_t_s_s(p_81, 2))
                {
                    unsigned l_291 = 1UL;
                    l_289 = l_289;
                    if ((*l_234))
                    {
                        l_291 = ((*p_80) > p_81);
                        (*l_133) = ((void*)0 != &g_70);
                        if ((*p_80))
                            break;
                    }
                    else
                    {
                        (*l_234) = l_292;
                        (*l_133) = 0x4D24BA77L;
                    }
                }
            }
            if ((*p_80))
            {
                short l_293 = 4L;
                (*l_133) = l_293;
                return (*l_234);
            }
            else
            {
                int **l_294 = &l_234;
                int *l_306 = &l_121;
                const int *l_308 = (void*)0;
                const int **l_307 = &l_308;
                (*l_294) = func_83((*l_234));

                ;
                ;
                (*l_306) = ((*l_133) = ((l_305 = ((safe_add_func_int16_t_s_s((0x116420D8L ^ ((safe_sub_func_int32_t_s_s((*p_80), ((*l_250) = (safe_mul_func_uint16_t_u_u((p_81 == ((+0xBEL) < 0L)), (g_189.f2.f7 != (safe_div_func_uint8_t_u_u((*l_234), 252UL)))))))) || (safe_sub_func_uint32_t_u_u(0xEB08BFD2L, p_81)))), g_284)) < (*l_234))) == 0x6CF1F867L));
                (*l_307) = p_80;


            }

            ;
            ;
            (*l_133) = (*g_92);
        }

        ;
        return p_81;
    }

    ;
    p_80 = (void*)0;

    ;
    return l_310;
}







static int * func_83(unsigned char p_84)
{
    int *l_90 = &g_91;
    int **l_93 = &l_90;
    (*l_90) = (safe_rshift_func_int8_t_s_u(p_84, 3));
    g_92 = &g_45;

    ;
    (*l_93) = &g_91;
    return &g_45;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_189.f0, "g_189.f0", print_hash_value);
    transparent_crc(g_189.f1, "g_189.f1", print_hash_value);
    transparent_crc(g_189.f2.f0, "g_189.f2.f0", print_hash_value);
    transparent_crc(g_189.f2.f1, "g_189.f2.f1", print_hash_value);
    transparent_crc(g_189.f2.f2, "g_189.f2.f2", print_hash_value);
    transparent_crc(g_189.f2.f3, "g_189.f2.f3", print_hash_value);
    transparent_crc(g_189.f2.f4, "g_189.f2.f4", print_hash_value);
    transparent_crc(g_189.f2.f5, "g_189.f2.f5", print_hash_value);
    transparent_crc(g_189.f2.f6, "g_189.f2.f6", print_hash_value);
    transparent_crc(g_189.f2.f7, "g_189.f2.f7", print_hash_value);
    transparent_crc(g_189.f2.f8, "g_189.f2.f8", print_hash_value);
    transparent_crc(g_189.f2.f9, "g_189.f2.f9", print_hash_value);
    transparent_crc(g_189.f3, "g_189.f3", print_hash_value);
    transparent_crc(g_189.f4, "g_189.f4", print_hash_value);
    transparent_crc(g_189.f5, "g_189.f5", print_hash_value);
    transparent_crc(g_189.f6, "g_189.f6", print_hash_value);
    transparent_crc(g_189.f7, "g_189.f7", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_290.f0, "g_290.f0", print_hash_value);
    transparent_crc(g_290.f1, "g_290.f1", print_hash_value);
    transparent_crc(g_290.f2, "g_290.f2", print_hash_value);
    transparent_crc(g_290.f3, "g_290.f3", print_hash_value);
    transparent_crc(g_290.f4, "g_290.f4", print_hash_value);
    transparent_crc(g_290.f5, "g_290.f5", print_hash_value);
    transparent_crc(g_290.f6, "g_290.f6", print_hash_value);
    transparent_crc(g_290.f7, "g_290.f7", print_hash_value);
    transparent_crc(g_290.f8, "g_290.f8", print_hash_value);
    transparent_crc(g_290.f9, "g_290.f9", print_hash_value);
    transparent_crc(g_370.f0, "g_370.f0", print_hash_value);
    transparent_crc(g_370.f1, "g_370.f1", print_hash_value);
    transparent_crc(g_370.f2.f0, "g_370.f2.f0", print_hash_value);
    transparent_crc(g_370.f2.f1, "g_370.f2.f1", print_hash_value);
    transparent_crc(g_370.f2.f2, "g_370.f2.f2", print_hash_value);
    transparent_crc(g_370.f2.f3, "g_370.f2.f3", print_hash_value);
    transparent_crc(g_370.f2.f4, "g_370.f2.f4", print_hash_value);
    transparent_crc(g_370.f2.f5, "g_370.f2.f5", print_hash_value);
    transparent_crc(g_370.f2.f6, "g_370.f2.f6", print_hash_value);
    transparent_crc(g_370.f2.f7, "g_370.f2.f7", print_hash_value);
    transparent_crc(g_370.f2.f8, "g_370.f2.f8", print_hash_value);
    transparent_crc(g_370.f2.f9, "g_370.f2.f9", print_hash_value);
    transparent_crc(g_370.f3, "g_370.f3", print_hash_value);
    transparent_crc(g_370.f4, "g_370.f4", print_hash_value);
    transparent_crc(g_370.f5, "g_370.f5", print_hash_value);
    transparent_crc(g_370.f6, "g_370.f6", print_hash_value);
    transparent_crc(g_370.f7, "g_370.f7", print_hash_value);
    transparent_crc(g_402, "g_402", print_hash_value);
    transparent_crc(g_407, "g_407", print_hash_value);
    transparent_crc(g_516, "g_516", print_hash_value);
    transparent_crc(g_542, "g_542", print_hash_value);
    transparent_crc(g_544, "g_544", print_hash_value);
    transparent_crc(g_546, "g_546", print_hash_value);
    transparent_crc(g_549, "g_549", print_hash_value);
    transparent_crc(g_612, "g_612", print_hash_value);
    transparent_crc(g_685, "g_685", print_hash_value);
    transparent_crc(g_716.f0, "g_716.f0", print_hash_value);
    transparent_crc(g_716.f1, "g_716.f1", print_hash_value);
    transparent_crc(g_716.f2.f0, "g_716.f2.f0", print_hash_value);
    transparent_crc(g_716.f2.f1, "g_716.f2.f1", print_hash_value);
    transparent_crc(g_716.f2.f2, "g_716.f2.f2", print_hash_value);
    transparent_crc(g_716.f2.f3, "g_716.f2.f3", print_hash_value);
    transparent_crc(g_716.f2.f4, "g_716.f2.f4", print_hash_value);
    transparent_crc(g_716.f2.f5, "g_716.f2.f5", print_hash_value);
    transparent_crc(g_716.f2.f6, "g_716.f2.f6", print_hash_value);
    transparent_crc(g_716.f2.f7, "g_716.f2.f7", print_hash_value);
    transparent_crc(g_716.f2.f8, "g_716.f2.f8", print_hash_value);
    transparent_crc(g_716.f2.f9, "g_716.f2.f9", print_hash_value);
    transparent_crc(g_716.f3, "g_716.f3", print_hash_value);
    transparent_crc(g_716.f4, "g_716.f4", print_hash_value);
    transparent_crc(g_716.f5, "g_716.f5", print_hash_value);
    transparent_crc(g_716.f6, "g_716.f6", print_hash_value);
    transparent_crc(g_716.f7, "g_716.f7", print_hash_value);
    transparent_crc(g_719, "g_719", print_hash_value);
    transparent_crc(g_786, "g_786", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
