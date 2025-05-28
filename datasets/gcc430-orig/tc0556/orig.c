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
   unsigned short f0;
};

union U1 {
   short f0;
   volatile char f1;
};

union U2 {
   volatile unsigned f0;
   unsigned char f1;
};

union U3 {
   unsigned f0;
   const unsigned short f1;
   char f2;
   char f3;
};

union U4 {
   volatile char f0;
};


static int g_8 = 0xE135E1F6L;
static volatile unsigned g_61 = 4294967295UL;
static int g_91 = 0x933DF47BL;
static volatile union U4 g_100 = {0x80L};
static volatile union U4 *g_99 = &g_100;
static union U4 g_103 = {0xD5L};
static int g_107 = 2L;
static union U3 g_108 = {9UL};
static unsigned g_200 = 0x1440D3F7L;
static union U0 g_206 = {4UL};
static short g_251 = 5L;
static short g_271 = 0x4C50L;
static unsigned g_282 = 0xE572E8C5L;
static unsigned g_294 = 0x59CF5E37L;
static unsigned g_396 = 0UL;
static union U2 g_402 = {0xC48F9F20L};
static union U2 *g_401 = &g_402;
static union U4 g_406 = {-6L};
static int *g_413 = &g_107;
static int **g_412 = &g_413;
static volatile int g_497 = 0x3A530DF6L;
static volatile char g_506 = 0x12L;
static volatile unsigned short g_527 = 0x007DL;
static char g_584 = 0x58L;
static unsigned g_589 = 9UL;
static volatile union U2 g_615 = {1UL};
static int * const g_618 = &g_107;
static volatile union U2 g_621 = {0x6EF0C7D8L};
static char g_627 = 0x17L;
static unsigned short g_674 = 0UL;
static union U4 g_681 = {-1L};
static volatile char g_712 = 0x6EL;
static char g_713 = 0x38L;
static volatile int g_733 = 0x018EF9AAL;
static char g_746 = 0x44L;
static volatile unsigned g_747 = 1UL;
static volatile union U2 g_751 = {0xB68CC463L};
static union U2 g_780 = {4294967289UL};
static union U1 g_786 = {-8L};



static unsigned func_1(void);
static int * func_2(union U3 p_3, short p_4, int * p_5, int p_6);
static union U4 func_15(int * p_16, int * p_17, int * const p_18);
static int * func_19(int * p_20, unsigned p_21, char p_22, unsigned char p_23, unsigned short p_24);
static char func_34(unsigned char p_35, int * p_36, const int * p_37, const short p_38, int * p_39);
static char func_66(const union U0 p_67, int * p_68, int * const p_69, int * p_70, unsigned p_71);
static union U0 func_72(unsigned p_73, char p_74, int * p_75, int * p_76, int * p_77);
static union U0 func_78(int * p_79, char p_80);
static int * func_81(short p_82, unsigned p_83, int p_84, int p_85);
static short func_86(const char p_87, short p_88);
static unsigned func_1(void)
{
    union U3 l_7 = {0x4F3D4E67L};
    int *l_9 = &g_8;
    unsigned char l_12 = 0x91L;
    unsigned short l_13 = 0x0357L;
    const char l_758 = 0x44L;
    unsigned char l_759 = 1UL;
    int * const l_771 = &g_91;
    const int *l_773 = (void*)0;
    (*g_412) = func_2(l_7, g_8, l_9, ((safe_rshift_func_int16_t_s_s(0x1324L, l_12)) , l_13));

    ;
    if (l_7.f0)
        goto lbl_760;
lbl_760:
    (*l_9) = ((*g_618) , ((g_751 , (*l_9)) <= ((((func_78((*g_412), (*l_9)) , ((safe_rshift_func_int8_t_s_u((~(((safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((*l_9), g_200)), (((func_86(g_713, (*l_9)) > l_758) , l_759) & 0x4278L))) , &l_9) != &g_413)), 4)) , g_8)) | g_589) , (*l_9)) != g_282)));
    (*g_412) = l_9;
    if ((*l_9))
    {
        union U0 * const l_761 = &g_206;
        union U0 *l_763 = &g_206;
        union U0 **l_762 = &l_763;
        (*l_762) = l_761;
    }
    else
    {
        unsigned l_767 = 0x4A25CA21L;
        const int *l_772 = (void*)0;
        union U2 *l_814 = (void*)0;
        (*g_412) = l_9;
        if ((g_251 , (safe_sub_func_uint32_t_u_u(((+((*g_412) != (*g_412))) , l_767), 0xFB9EDC90L))))
        {
            int *l_770 = &g_107;
            for (g_589 = 0; (g_589 == 2); g_589 = safe_add_func_int32_t_s_s(g_589, 8))
            {
                (*g_618) ^= (func_15(l_770, l_9, l_771) , l_767);

                ;
            }

            ;
            l_773 = l_772;
            for (g_396 = 0; (g_396 <= 33); g_396 = safe_add_func_int16_t_s_s(g_396, 3))
            {
                char l_796 = 0L;
                if ((**g_412))
                    break;
                if ((safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s((g_780 , 1L), (safe_rshift_func_int16_t_s_s(g_8, 1)))), 5)))
                {
                    union U3 *l_785 = (void*)0;
                    int l_795 = 0xA737E91FL;
                    l_796 |= (safe_rshift_func_int8_t_s_s(func_86(((((((void*)0 != l_785) | (**g_412)) & (g_786 , ((((safe_mul_func_uint16_t_u_u((g_282 || ((g_396 > (func_78((*g_412), (safe_mul_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((((*g_618) || l_795) != g_497) && (*g_413)), 4L)), (*g_618))) , g_406.f0) , l_795), (*l_770)))) , 0xF931L)) <= (*l_770))), g_107)) == (*l_770)) >= (-10L)) != (*l_9)))) | 0x78L) | (*l_770)), g_786.f0), 2));
                }
                else
                {
                    int l_797 = 0x69C1217CL;
                    return l_797;
                }
            }
        }
        else
        {
            const unsigned l_800 = 4294967288UL;
            (**g_412) = (safe_sub_func_int32_t_s_s(((l_800 != (safe_add_func_uint32_t_u_u(((g_527 , ((*g_413) > (((safe_unary_minus_func_int16_t_s((((safe_add_func_uint16_t_u_u(((*l_9) <= (*l_9)), (((((-1L) && (safe_sub_func_uint32_t_u_u((((g_786 , (safe_mod_func_uint32_t_u_u((func_86(((safe_sub_func_int16_t_s_s(0L, ((g_621.f0 & l_800) >= 5UL))) , 0xDCL), g_294) , 4294967295UL), 0xDE403528L))) , g_108.f3) & g_108.f0), (-1L)))) || 65528UL) & (*g_413)) < g_746))) , 0xAF10A225L) | 1L))) ^ g_108.f0) < g_402.f1))) >= g_108.f1), 0xA9A762BCL))) , (*g_618)), g_108.f0));
            (*g_618) ^= ((safe_lshift_func_int8_t_s_s(((void*)0 != l_814), 7)) >= 4L);
        }

        ;
        (*l_9) ^= (*g_618);
        (*l_9) &= ((g_527 >= (safe_unary_minus_func_uint16_t_u(((((void*)0 != g_401) , (*l_771)) && g_786.f0)))) == (safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((((((safe_lshift_func_uint16_t_u_s((g_589 == 0xE0L), (safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(((g_589 ^ (g_99 != g_99)) | g_713))), 6L)))) == g_786.f0) <= g_282) , g_206) , (void*)0) != (void*)0), g_786.f0)), 9UL)));
    }

    ;
    return g_780.f0;
}







static int * func_2(union U3 p_3, short p_4, int * p_5, int p_6)
{
    int *l_14 = &g_8;
    union U0 l_27 = {65535UL};
    short l_645 = 0x87F2L;
    int *l_685 = &g_8;
    int *l_686 = &g_107;
    int *l_687 = &g_107;
    int *l_688 = &g_91;
    int *l_689 = (void*)0;
    int *l_690 = &g_107;
    int *l_691 = &g_107;
    int *l_692 = &g_107;
    short l_693 = 0xE1A9L;
    int *l_694 = &g_8;
    int *l_695 = &g_107;
    int *l_696 = &g_91;
    int *l_697 = &g_8;
    int *l_698 = &g_8;
    int *l_699 = (void*)0;
    int *l_700 = &g_91;
    int *l_701 = &g_8;
    int *l_702 = &g_91;
    int *l_703 = (void*)0;
    int *l_704 = (void*)0;
    int *l_705 = &g_107;
    int *l_706 = &g_8;
    int *l_707 = (void*)0;
    int *l_708 = &g_8;
    int *l_709 = &g_91;
    int *l_710 = &g_8;
    int *l_711 = &g_107;
    int *l_714 = &g_91;
    int *l_715 = &g_107;
    int *l_716 = &g_91;
    int l_717 = 0x60532F45L;
    int *l_718 = (void*)0;
    int l_719 = 0L;
    int *l_720 = &g_8;
    int *l_721 = (void*)0;
    int *l_722 = &g_107;
    int *l_723 = &l_719;
    int l_724 = (-5L);
    int *l_725 = &l_717;
    int *l_726 = &l_717;
    int l_727 = 1L;
    int *l_728 = &g_91;
    int *l_729 = (void*)0;
    int *l_730 = &g_107;
    int *l_731 = &g_107;
    int *l_732 = &l_719;
    int *l_734 = &l_727;
    int *l_735 = &l_724;
    int *l_736 = &l_724;
    int *l_737 = &g_8;
    int *l_738 = (void*)0;
    int *l_739 = &l_717;
    int l_740 = (-9L);
    int *l_741 = &l_727;
    int *l_742 = (void*)0;
    int *l_743 = &l_717;
    int *l_744 = &g_8;
    int *l_745 = &l_717;
    return p_5;


}







static union U4 func_15(int * p_16, int * p_17, int * const p_18)
{
    const unsigned l_677 = 4294967295UL;
    const unsigned char l_678 = 0x39L;
    int **l_679 = (void*)0;
    int **l_680 = &g_413;
    (**g_412) ^= (!0x07E7B2CCL);
    (*l_680) = p_18;

    ;
    return g_681;

    }







static int * func_19(int * p_20, unsigned p_21, char p_22, unsigned char p_23, unsigned short p_24)
{
    int *l_646 = (void*)0;
    int *l_647 = &g_8;
    int *l_648 = &g_107;
    int *l_649 = &g_8;
    int *l_650 = &g_91;
    int *l_651 = &g_107;
    int *l_652 = &g_107;
    int *l_653 = (void*)0;
    int *l_654 = (void*)0;
    int *l_655 = &g_91;
    int *l_656 = &g_8;
    int *l_657 = &g_8;
    int *l_658 = &g_91;
    int *l_659 = &g_8;
    int *l_660 = &g_107;
    int *l_661 = &g_91;
    int *l_662 = &g_91;
    int *l_663 = &g_8;
    int *l_664 = (void*)0;
    int l_665 = 0x8E8B94E4L;
    int *l_666 = &g_91;
    int *l_667 = &g_107;
    int *l_668 = (void*)0;
    int *l_669 = &g_91;
    int *l_670 = (void*)0;
    int l_671 = 0x7DD53A87L;
    int *l_672 = (void*)0;
    int *l_673 = &l_671;
    g_674++;
    return (*g_412);


}







static char func_34(unsigned char p_35, int * p_36, const int * p_37, const short p_38, int * p_39)
{
    int *l_40 = &g_8;
    int *l_41 = &g_8;
    int *l_42 = (void*)0;
    int *l_43 = &g_8;
    int *l_44 = &g_8;
    int *l_45 = &g_8;
    int *l_46 = &g_8;
    int l_47 = 0L;
    int *l_48 = (void*)0;
    int *l_49 = &l_47;
    int *l_50 = &l_47;
    int *l_51 = (void*)0;
    int *l_52 = (void*)0;
    int *l_53 = &g_8;
    int *l_54 = (void*)0;
    int l_55 = 0x8EA47160L;
    int *l_56 = &g_8;
    int *l_57 = &g_8;
    int *l_58 = &l_55;
    int *l_59 = &l_55;
    int *l_60 = &l_47;
    int l_458 = (-2L);
    int l_494 = 0L;
    int l_514 = 0x9AF815AFL;
    int l_520 = 0x91ECBDF2L;
    int l_524 = 1L;
    unsigned char l_530 = 6UL;
    int *l_617 = &g_107;
    int ***l_624 = &g_412;
    const union U0 l_634 = {65527UL};
    --g_61;
    if ((g_61 <= (~(safe_rshift_func_int8_t_s_u(func_66(func_72(((func_78(func_81((*l_40), g_8, (func_86(g_8, p_35) != 0xDCAEL), ((g_8 != (*l_49)) , p_38)), (*l_59)) , (void*)0) == p_37), (*l_41), p_39, p_36, &l_47), &l_47, &g_8, p_39, p_35), p_38)))))
    {
        union U3 l_428 = {0UL};
        int l_429 = 0L;
        int *l_430 = &g_107;
        int *l_431 = (void*)0;
        int *l_432 = &g_91;
        int *l_433 = &l_55;
        int *l_434 = &g_8;
        int *l_435 = (void*)0;
        int *l_436 = &l_47;
        int *l_437 = &l_429;
        int *l_438 = &g_107;
        int *l_439 = &l_47;
        int *l_440 = &g_107;
        int *l_441 = &g_8;
        int *l_442 = (void*)0;
        int l_443 = 1L;
        int *l_444 = &g_91;
        int *l_445 = (void*)0;
        int *l_446 = &l_443;
        int *l_447 = &l_47;
        int *l_448 = &l_429;
        int *l_449 = &l_443;
        int l_450 = 0x7E5CDF20L;
        int *l_451 = (void*)0;
        int *l_452 = &l_55;
        int *l_453 = &l_450;
        int *l_454 = &l_450;
        int *l_455 = &l_47;
        int *l_456 = &l_450;
        int *l_457 = &l_429;
        int *l_459 = &l_55;
        int *l_460 = &g_8;
        int *l_461 = &l_443;
        int *l_462 = &l_55;
        int *l_463 = &l_429;
        int *l_464 = &g_91;
        int *l_465 = &g_8;
        int *l_466 = &l_443;
        int *l_467 = &g_8;
        int *l_468 = &g_107;
        int *l_469 = &l_47;
        int *l_470 = &l_458;
        int *l_471 = &g_107;
        int *l_472 = &l_443;
        int *l_473 = &l_55;
        int *l_474 = &l_47;
        int *l_475 = &l_458;
        int *l_476 = &g_91;
        int *l_477 = &g_107;
        int *l_478 = &l_55;
        int *l_479 = &l_55;
        int *l_480 = &l_443;
        int *l_481 = &g_107;
        int *l_482 = (void*)0;
        int *l_483 = &g_91;
        int *l_484 = &l_429;
        int *l_485 = &l_443;
        int *l_486 = &l_47;
        int *l_487 = &g_107;
        int *l_488 = (void*)0;
        int *l_489 = (void*)0;
        int *l_490 = (void*)0;
        int *l_491 = &l_429;
        int *l_492 = &l_458;
        int *l_493 = &l_443;
        int *l_495 = &l_55;
        int *l_496 = &l_450;
        int *l_498 = &l_443;
        int *l_499 = (void*)0;
        int *l_500 = &l_494;
        int l_501 = 0x3D356C0FL;
        int *l_502 = &l_458;
        int *l_503 = &l_494;
        int *l_504 = (void*)0;
        int *l_505 = &l_501;
        int *l_507 = &l_47;
        int *l_508 = &l_443;
        int *l_509 = (void*)0;
        int *l_510 = &l_501;
        int *l_511 = &g_8;
        int *l_512 = &g_91;
        int *l_513 = &l_47;
        int *l_515 = &l_443;
        int *l_516 = (void*)0;
        int *l_517 = (void*)0;
        int *l_518 = &l_47;
        int *l_519 = &l_450;
        int *l_521 = &l_450;
        int *l_522 = &l_501;
        int *l_523 = (void*)0;
        int *l_525 = &g_91;
        int *l_526 = &l_458;
        (**g_412) &= (safe_mod_func_uint16_t_u_u((l_428 , (l_428.f0 , 65535UL)), g_91));
        ++g_527;
        l_530--;
    }
    else
    {
        int l_533 = (-1L);
        int l_534 = 0xBE413706L;
        int l_535 = (-9L);
        int l_536 = 5L;
        int l_537 = 1L;
        int *l_538 = &l_537;
        int *l_539 = &g_107;
        int *l_540 = &l_494;
        int *l_541 = (void*)0;
        int *l_542 = &g_91;
        int *l_543 = &l_535;
        int *l_544 = &l_524;
        int *l_545 = &l_47;
        int *l_546 = (void*)0;
        int *l_547 = &l_537;
        int *l_548 = (void*)0;
        int *l_549 = &l_55;
        int *l_550 = &l_47;
        int l_551 = 0x4BBA9FF0L;
        int *l_552 = (void*)0;
        int *l_553 = &g_107;
        int *l_554 = &l_55;
        int l_555 = 0x7A516FDDL;
        int *l_556 = (void*)0;
        int *l_557 = &l_536;
        int *l_558 = &l_555;
        int *l_559 = &l_537;
        int l_560 = 4L;
        int *l_561 = &l_55;
        int *l_562 = &l_520;
        int *l_563 = (void*)0;
        int *l_564 = &l_520;
        int *l_565 = &l_524;
        int *l_566 = &l_560;
        int *l_567 = (void*)0;
        int *l_568 = (void*)0;
        int *l_569 = &l_514;
        int *l_570 = &l_55;
        int l_571 = 0xF3D91A40L;
        int *l_572 = &l_571;
        int *l_573 = &l_514;
        int *l_574 = &l_520;
        int *l_575 = &g_107;
        int *l_576 = &l_536;
        int *l_577 = &l_536;
        int *l_578 = &l_55;
        int *l_579 = (void*)0;
        int *l_580 = &l_524;
        int *l_581 = &l_571;
        int *l_582 = &l_458;
        int *l_583 = &g_107;
        int *l_585 = (void*)0;
        int *l_586 = &l_458;
        int *l_587 = (void*)0;
        int *l_588 = &g_8;
        const union U0 l_604 = {65535UL};
        unsigned l_605 = 0xD272699EL;
        int ***l_616 = &g_412;
        ++g_589;
        for (l_536 = 0; (l_536 != 4); l_536 = safe_add_func_int8_t_s_s(l_536, 8))
        {
            unsigned l_606 = 1UL;
            unsigned char l_612 = 255UL;
            if ((safe_add_func_uint32_t_u_u((p_38 && 4L), (safe_mod_func_int8_t_s_s(p_38, (safe_rshift_func_int8_t_s_u(((safe_sub_func_int8_t_s_s(0x57L, (((safe_lshift_func_int8_t_s_u(0xA2L, (func_66(l_604, p_36, (*g_412), (*g_412), (*l_545)) , 0xE1L))) < l_605) >= (-10L)))) & l_606), 6)))))))
            {
                unsigned l_607 = 0xEF28FBD8L;
                l_607 &= (0x2E822537L || l_606);
            }
            else
            {
                return p_38;
            }
            (*l_582) |= (safe_mod_func_int32_t_s_s(((~(((((func_66(func_78((*g_412), l_606), p_36, (*g_412), p_36, (safe_mod_func_uint8_t_u_u(l_612, (((safe_add_func_uint16_t_u_u(func_66((g_615 , func_72((((((g_108 , 0xCAA444BCL) , l_616) == (void*)0) && g_506) || g_615.f0), l_606, &l_47, l_617, (*g_412))), p_39, g_618, (**l_616), (*l_575)), g_251)) & p_38) | g_294)))) ^ p_35) <= (*l_553)) , (-1L)) | 2L) <= g_402.f1)) , (*l_554)), g_294));
        }
        (*l_580) |= (g_100.f0 , (0x29B2AEEAL | ((p_35 || g_251) ^ (safe_mod_func_uint8_t_u_u((g_621 , (p_35 ^ (safe_lshift_func_int8_t_s_u((l_624 == l_616), 1)))), (safe_rshift_func_int8_t_s_u(g_251, g_627)))))));
    }

        if ((p_35 , ((safe_lshift_func_int16_t_s_s(g_396, 12)) , ((func_86((*l_43), (0x7C800197L && (*g_413))) <= (safe_rshift_func_uint8_t_u_s(g_294, 6))) > ((safe_mul_func_uint16_t_u_u(((func_66(l_634, (*g_412), p_36, (**l_624), p_35) , g_103.f0) ^ 0xE3L), g_108.f2)) , 0x1F5A1C23L)))))
    {
        unsigned char l_635 = 0UL;
        (*l_53) = (l_635 > ((p_35 >= g_91) == (((safe_sub_func_uint8_t_u_u(g_621.f1, g_402.f1)) , 1L) <= (g_402.f1 == (safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((+(***l_624)) >= 0x74L), (*l_49))), g_251))))));
        (*l_49) &= (g_396 != (*l_46));
        (*l_59) = (*p_37);
    }
    else
    {
        unsigned short l_642 = 0x7CD6L;
        ++l_642;
    }
    return (*l_41);
}







static char func_66(const union U0 p_67, int * p_68, int * const p_69, int * p_70, unsigned p_71)
{
    unsigned l_425 = 0xE2DF591AL;
    l_425 |= 6L;
    return l_425;
}







static union U0 func_72(unsigned p_73, char p_74, int * p_75, int * p_76, int * p_77)
{
    union U0 l_424 = {5UL};
    return l_424;

    }







static union U0 func_78(int * p_79, char p_80)
{
    union U0 l_423 = {0UL};
    return l_423;

    }







static int * func_81(short p_82, unsigned p_83, int p_84, int p_85)
{
    const int l_109 = 0x973F91A6L;
    const union U0 l_114 = {0x328DL};
    int l_116 = 0x0D70F0D5L;
    int l_122 = 0xC0977F3DL;
    int l_172 = 1L;
    int l_182 = 3L;
    union U3 l_292 = {0x279336F8L};
    short l_301 = 0x527AL;
    int **l_414 = &g_413;
    if (((p_84 < (g_108 , (((p_85 & func_86(l_109, (((safe_mod_func_uint8_t_u_u((g_108 , ((safe_mul_func_uint8_t_u_u(l_109, 8UL)) & func_86((((g_108 , l_114) , 1L) , 0x05L), g_108.f1))), l_109)) , l_109) , 9L))) , l_114.f0) , p_84))) , l_109))
    {
        int *l_115 = &g_91;
        int l_117 = (-1L);
        int *l_118 = &g_8;
        int *l_119 = &g_107;
        int *l_120 = (void*)0;
        int *l_121 = &g_8;
        int *l_123 = &g_91;
        int *l_124 = &l_117;
        int *l_125 = (void*)0;
        int *l_126 = &g_8;
        int *l_127 = &l_122;
        int *l_128 = &l_116;
        int *l_129 = (void*)0;
        int *l_130 = &l_116;
        int *l_131 = (void*)0;
        int *l_132 = &l_117;
        int *l_133 = &g_91;
        int *l_134 = (void*)0;
        int *l_135 = &l_122;
        int *l_136 = &g_91;
        int *l_137 = (void*)0;
        int *l_138 = &g_8;
        short l_139 = (-1L);
        int *l_140 = &l_116;
        int *l_141 = &l_117;
        int *l_142 = (void*)0;
        int *l_143 = &l_117;
        int *l_144 = &g_107;
        int *l_145 = &g_107;
        int *l_146 = &l_116;
        int *l_147 = &g_91;
        int *l_148 = &g_91;
        int *l_149 = &l_116;
        int l_150 = 0L;
        int *l_151 = &l_117;
        int *l_152 = &l_150;
        int *l_153 = (void*)0;
        int *l_154 = (void*)0;
        int *l_155 = &g_107;
        int *l_156 = &l_150;
        int *l_157 = (void*)0;
        int *l_158 = &g_91;
        int *l_159 = &g_91;
        int *l_160 = (void*)0;
        int *l_161 = (void*)0;
        int *l_162 = &g_8;
        int *l_163 = &l_116;
        int *l_164 = &l_116;
        int *l_165 = &l_122;
        int *l_166 = &l_117;
        int *l_167 = &l_150;
        int *l_168 = &g_8;
        int *l_169 = &l_150;
        int *l_170 = &l_122;
        int *l_171 = &g_107;
        int *l_173 = (void*)0;
        int *l_174 = &l_122;
        int *l_175 = &g_91;
        int *l_176 = &l_122;
        int *l_177 = &l_150;
        int *l_178 = &l_117;
        int *l_179 = &g_91;
        int *l_180 = (void*)0;
        int *l_181 = (void*)0;
        int *l_183 = &l_122;
        int *l_184 = &g_8;
        int *l_185 = &g_8;
        int *l_186 = &l_116;
        int l_187 = 0xBEB33E2DL;
        int *l_188 = &l_150;
        int l_189 = 0x616ADEA6L;
        int *l_190 = &l_117;
        int *l_191 = (void*)0;
        int *l_192 = &l_117;
        int *l_193 = (void*)0;
        int *l_194 = &l_187;
        int *l_195 = (void*)0;
        int *l_196 = &l_150;
        int *l_197 = &g_8;
        int *l_198 = &l_189;
        int *l_199 = &g_107;
        (*l_115) |= 0x8CD9178FL;
        --g_200;
        (*l_165) = (safe_add_func_int32_t_s_s((p_82 & p_82), g_8));
    }
    else
    {
        unsigned l_205 = 0x237583F0L;
        int *l_230 = &l_182;
        int **l_229 = &l_230;
        int ***l_228 = &l_229;
        int l_266 = (-1L);
        int l_386 = 4L;
        int l_392 = 1L;
        if (l_205)
        {
            int l_209 = 0L;
            int *l_210 = &l_116;
            int l_293 = 1L;
            int *** const l_299 = (void*)0;
            int l_335 = 0L;
            int l_377 = 0x12A6EB98L;
            int l_384 = (-1L);
lbl_403:
            (*l_210) &= (p_83 <= (p_83 & (g_206 , ((0x8FL && ((safe_add_func_uint32_t_u_u(0x09EFF974L, l_209)) , (g_108.f3 | (g_108.f0 , g_108.f2)))) & g_108.f3))));
            for (p_82 = 24; (p_82 == (-27)); p_82--)
            {
                (*l_210) ^= g_206.f0;
            }
            if ((((safe_sub_func_uint8_t_u_u((+(~((*l_210) >= 0xB24AB748L))), ((*l_210) != 9UL))) != (safe_rshift_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((p_85 == ((~l_205) , (safe_unary_minus_func_uint32_t_u(((!(safe_mul_func_uint8_t_u_u(p_84, ((func_86(g_200, (safe_sub_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(p_82, p_82)) , g_108.f0), 252UL)) , (void*)0) != l_228), g_206.f0))) ^ 1UL) <= p_83)))) , g_108.f0))))), g_206.f0)) & 0x89EC31A1L), 2))) , p_84))
            {
                char l_238 = 1L;
                int l_243 = 1L;
                int l_261 = 1L;
                const int l_289 = (-4L);
                (*l_210) = p_85;
                (*l_229) = &p_84;

                ;
                (***l_228) ^= (*l_210);
                for (g_108.f2 = (-7); (g_108.f2 == 10); ++g_108.f2)
                {
                    int *l_233 = &g_107;
                    int *l_234 = &g_107;
                    int *l_235 = &g_8;
                    int *l_236 = &g_8;
                    int *l_237 = &g_91;
                    int *l_239 = (void*)0;
                    int *l_240 = &l_116;
                    int *l_241 = &g_91;
                    int *l_242 = (void*)0;
                    int *l_244 = &l_182;
                    int *l_245 = &l_116;
                    int *l_246 = &l_243;
                    int *l_247 = &l_243;
                    int *l_248 = &l_122;
                    int *l_249 = &g_8;
                    int *l_250 = (void*)0;
                    int *l_252 = (void*)0;
                    int *l_253 = &l_116;
                    int *l_254 = &g_107;
                    int *l_255 = &l_116;
                    int *l_256 = &l_116;
                    int *l_257 = (void*)0;
                    int *l_258 = (void*)0;
                    int *l_259 = &l_172;
                    int *l_260 = (void*)0;
                    int *l_262 = &l_116;
                    int *l_263 = (void*)0;
                    int *l_264 = (void*)0;
                    int *l_265 = &g_107;
                    int *l_267 = &l_243;
                    int l_268 = 0xA9E613B0L;
                    int *l_269 = &l_172;
                    int *l_270 = (void*)0;
                    int *l_272 = &g_91;
                    int *l_273 = &l_116;
                    int *l_274 = &l_182;
                    int *l_275 = (void*)0;
                    int *l_276 = &g_8;
                    int *l_277 = (void*)0;
                    int *l_278 = &g_91;
                    int *l_279 = &l_122;
                    int *l_280 = (void*)0;
                    int *l_281 = (void*)0;
                    g_282++;
                }

                            }
            else
            {
                short l_306 = 1L;
                if (p_82)
                {
                    int l_300 = (-4L);
                    int l_348 = 0L;
                    int l_375 = 0x0779CC83L;
                    (*l_210) = ((safe_rshift_func_uint16_t_u_u((l_299 != (void*)0), ((((g_107 < l_300) > (((p_84 == l_301) >= g_108.f0) >= (((4294967294UL != (safe_mul_func_int8_t_s_s((((safe_mul_func_int8_t_s_s((1L <= l_306), g_108.f2)) , p_85) && p_83), p_85))) , (-6L)) > l_122))) > g_251) == (***l_228)))) , g_271);
                    for (g_282 = 15; (g_282 <= 4); g_282 = safe_sub_func_int8_t_s_s(g_282, 1))
                    {
                        int *l_309 = &l_172;
                        int *l_310 = &l_172;
                        int *l_311 = &g_107;
                        int *l_312 = &l_172;
                        int *l_313 = &l_122;
                        int *l_314 = &l_172;
                        int *l_315 = &l_266;
                        int *l_316 = &g_107;
                        int *l_317 = &l_116;
                        int *l_318 = &g_91;
                        int *l_319 = (void*)0;
                        int *l_320 = &g_91;
                        int *l_321 = (void*)0;
                        int *l_322 = &l_182;
                        int *l_323 = &g_107;
                        int *l_324 = (void*)0;
                        int *l_325 = &g_107;
                        int *l_326 = &g_8;
                        int *l_327 = (void*)0;
                        int *l_328 = &l_182;
                        int *l_329 = &l_266;
                        int *l_330 = &l_116;
                        int *l_331 = &l_182;
                        int *l_332 = (void*)0;
                        int *l_333 = &l_266;
                        int *l_334 = &l_122;
                        int *l_336 = (void*)0;
                        int *l_337 = (void*)0;
                        int *l_338 = &l_266;
                        int *l_339 = &l_122;
                        int *l_340 = &l_116;
                        int *l_341 = &l_116;
                        int *l_342 = &l_266;
                        int *l_343 = &l_116;
                        int *l_344 = &l_182;
                        int *l_345 = &g_107;
                        int *l_346 = &g_107;
                        int *l_347 = (void*)0;
                        int *l_349 = &g_8;
                        int *l_350 = &l_122;
                        int *l_351 = &l_182;
                        int *l_352 = &l_116;
                        int *l_353 = (void*)0;
                        int *l_354 = &l_172;
                        int *l_355 = &l_335;
                        int *l_356 = (void*)0;
                        int *l_357 = &g_91;
                        int *l_358 = &l_335;
                        int *l_359 = &g_91;
                        int *l_360 = (void*)0;
                        int *l_361 = (void*)0;
                        int *l_362 = (void*)0;
                        int *l_363 = &g_91;
                        int *l_364 = &l_116;
                        int *l_365 = &l_182;
                        int *l_366 = &g_91;
                        int *l_367 = (void*)0;
                        int *l_368 = &l_266;
                        int *l_369 = &g_8;
                        int *l_370 = &l_116;
                        int *l_371 = &g_107;
                        int *l_372 = &l_116;
                        int *l_373 = &g_8;
                        int *l_374 = &l_172;
                        int *l_376 = &l_335;
                        int *l_378 = &l_377;
                        int *l_379 = &l_375;
                        int *l_380 = (void*)0;
                        int *l_381 = (void*)0;
                        int *l_382 = &l_335;
                        int *l_383 = &l_375;
                        int *l_385 = &g_107;
                        int *l_387 = &g_8;
                        int *l_388 = &l_335;
                        int *l_389 = &l_377;
                        int *l_390 = &l_384;
                        int *l_391 = &l_122;
                        int *l_393 = &l_377;
                        int *l_394 = &l_348;
                        int *l_395 = &l_266;
                        if ((*l_230))
                            break;
                        g_396++;
                    }
                }
                else
                {
                    int *l_399 = &l_377;
                    union U4 *l_405 = &g_406;
                    union U4 **l_404 = &l_405;
                    (**l_228) = &g_8;

                    ;
                    if ((l_399 != &p_84))
                    {
                        int l_400 = (-1L);
                        l_400 &= (*l_399);
                    }
                    else
                    {
                        g_401 = g_401;
                        if (g_8)
                            goto lbl_403;
                    }
                    (*l_404) = (void*)0;

                    ;
                }
            }

                        ;
        }
        else
        {
            int *l_407 = &g_91;
            return l_407;


        }

                ;
        return &g_107;


    }
    (**l_414) = (((safe_mul_func_uint16_t_u_u((l_172 == ((((((l_172 | ((l_292 , ((((safe_mul_func_int16_t_s_s((-3L), (p_83 || (((void*)0 == &p_84) >= p_83)))) , g_412) != (void*)0) , l_414)) == l_414)) , (**l_414)) ^ 0xCC985E15L) ^ p_84) < (-4L)) >= p_82)), 0L)) && p_84) < g_108.f0);
    for (g_200 = 0; (g_200 != 29); g_200 = safe_add_func_uint16_t_u_u(g_200, 2))
    {
        (*g_412) = (*g_412);
        if (p_82)
            break;
        l_116 |= ((func_86(func_86(g_271, p_83), g_271) && p_85) || (safe_mod_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u((~(((g_271 >= (safe_mul_func_int16_t_s_s(p_83, 65533UL))) && 0x02C9L) <= (**l_414))), 14)) , 0xCB2FL) != 0x143DL), p_82)));
    }
    return (*l_414);


}







static short func_86(const char p_87, short p_88)
{
    int *l_89 = &g_8;
    int *l_90 = &g_91;
    int ***l_92 = (void*)0;
    int **l_94 = &l_90;
    int ***l_93 = &l_94;
    union U4 *l_102 = &g_103;
    (*l_90) = (l_89 == &g_8);
    (*l_93) = &l_90;
    if ((p_88 , (safe_add_func_uint32_t_u_u(0UL, g_91))))
    {
        (***l_93) ^= 0x7AD251A6L;
    }
    else
    {
        union U4 **l_105 = (void*)0;
        for (g_91 = 0; (g_91 >= (-15)); g_91 = safe_sub_func_int32_t_s_s(g_91, 7))
        {
            volatile union U4 **l_101 = &g_99;
            union U4 **l_104 = &l_102;
            int *l_106 = &g_107;
            (*l_101) = g_99;
            if (p_88)
                break;
            (*l_104) = l_102;
            (*l_106) = ((void*)0 != l_105);
        }
        (*l_90) = g_107;
    }
    return g_91;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_100.f0, "g_100.f0", print_hash_value);
    transparent_crc(g_103.f0, "g_103.f0", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_108.f0, "g_108.f0", print_hash_value);
    transparent_crc(g_108.f1, "g_108.f1", print_hash_value);
    transparent_crc(g_108.f2, "g_108.f2", print_hash_value);
    transparent_crc(g_108.f3, "g_108.f3", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_206.f0, "g_206.f0", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_396, "g_396", print_hash_value);
    transparent_crc(g_402.f0, "g_402.f0", print_hash_value);
    transparent_crc(g_402.f1, "g_402.f1", print_hash_value);
    transparent_crc(g_406.f0, "g_406.f0", print_hash_value);
    transparent_crc(g_497, "g_497", print_hash_value);
    transparent_crc(g_506, "g_506", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_584, "g_584", print_hash_value);
    transparent_crc(g_589, "g_589", print_hash_value);
    transparent_crc(g_615.f0, "g_615.f0", print_hash_value);
    transparent_crc(g_615.f1, "g_615.f1", print_hash_value);
    transparent_crc(g_621.f0, "g_621.f0", print_hash_value);
    transparent_crc(g_621.f1, "g_621.f1", print_hash_value);
    transparent_crc(g_627, "g_627", print_hash_value);
    transparent_crc(g_674, "g_674", print_hash_value);
    transparent_crc(g_681.f0, "g_681.f0", print_hash_value);
    transparent_crc(g_712, "g_712", print_hash_value);
    transparent_crc(g_713, "g_713", print_hash_value);
    transparent_crc(g_733, "g_733", print_hash_value);
    transparent_crc(g_746, "g_746", print_hash_value);
    transparent_crc(g_747, "g_747", print_hash_value);
    transparent_crc(g_751.f0, "g_751.f0", print_hash_value);
    transparent_crc(g_751.f1, "g_751.f1", print_hash_value);
    transparent_crc(g_780.f0, "g_780.f0", print_hash_value);
    transparent_crc(g_780.f1, "g_780.f1", print_hash_value);
    transparent_crc(g_786.f0, "g_786.f0", print_hash_value);
    transparent_crc(g_786.f1, "g_786.f1", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
