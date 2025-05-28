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



static const unsigned char g_17 = 0xE1L;
static unsigned short g_30 = 1UL;
static unsigned short g_61 = 0x2F34L;
static unsigned g_67 = 0x008D6DB9L;
static unsigned g_71 = 0x2BAB91EEL;
static unsigned *g_70 = &g_71;
static int g_73 = 0x77F2A5CFL;
static short g_80 = 0xFC43L;
static unsigned short g_95 = 65528UL;
static unsigned short **g_110 = (void*)0;
static int g_113 = 0L;
static int *g_123 = (void*)0;
static int g_163 = 4L;
static const unsigned short g_166 = 65535UL;
static const unsigned short *g_165 = &g_166;
static int g_176 = 0L;
static unsigned g_198 = 0xA76EDF0EL;
static int g_213 = 0L;
static unsigned char g_222 = 0x03L;
static const int g_274 = 5L;
static int g_306 = 0L;
static unsigned g_308 = 0x4EFD3873L;
static char g_426 = (-1L);
static int *g_428 = (void*)0;
static int **g_427 = &g_428;
static short g_488 = (-1L);
static char g_491 = 0x12L;
static unsigned g_502 = 0UL;
static unsigned short g_508 = 9UL;
static unsigned g_576 = 4UL;
static int ***g_588 = &g_427;
static int * const * const g_609 = &g_428;
static int * const * const *g_608 = &g_609;
static int * const * const **g_607 = &g_608;
static unsigned char g_613 = 0xB8L;
static char g_650 = (-1L);
static unsigned g_654 = 4294967295UL;
static unsigned g_766 = 0x76132E12L;
static unsigned char g_767 = 0UL;
static int g_824 = 0x7287B92FL;
static int g_897 = (-1L);
static unsigned g_909 = 0x343A750CL;
static unsigned g_940 = 7UL;
static unsigned short g_1003 = 0x9E53L;
static unsigned short *g_1011 = (void*)0;
static unsigned short ***g_1036 = &g_110;
static unsigned short ****g_1035 = &g_1036;
static unsigned short g_1085 = 0x66E8L;
static int g_1187 = 4L;
static char g_1195 = (-1L);
static unsigned char g_1202 = 0UL;
static int * const *g_1222 = (void*)0;
static int * const **g_1221 = &g_1222;
static const int **g_1224 = (void*)0;
static const int ***g_1223 = &g_1224;



static char func_1(void);
static const short func_2(short p_3, unsigned p_4);
static short func_5(int p_6, unsigned char p_7, unsigned p_8, char p_9, unsigned short p_10);
static unsigned char func_18(unsigned char p_19, const unsigned short p_20);
static unsigned char func_24(short p_25, char p_26);
static char func_31(unsigned p_32, unsigned char p_33, unsigned p_34, short p_35, char p_36);
static int * func_38(int p_39, int * p_40, int p_41);
static int * func_42(unsigned p_43);
static unsigned short func_52(unsigned short * p_53, const unsigned short * p_54);
static unsigned short * func_55(unsigned short * p_56, unsigned p_57, char p_58, unsigned short * p_59);
static char func_1(void)
{
    short l_21 = 2L;
    unsigned short *l_29 = &g_30;
    int l_37 = 1L;
    unsigned l_201 = 0UL;
    unsigned l_202 = 1UL;
    int l_252 = 0x0A6548F5L;
    int *l_673 = &g_73;
    int ****l_687 = &g_588;
    char l_719 = 0L;
    unsigned l_748 = 0x9569CB72L;
    unsigned l_774 = 4294967293UL;
    int l_793 = 0xB69061AFL;
    char l_798 = 0x0BL;
    unsigned short l_848 = 0x7A66L;
    unsigned short ***l_851 = &g_110;
    short l_1054 = 5L;
    unsigned l_1088 = 4294967295UL;
    (*l_673) = (func_2(func_5((((((safe_mod_func_uint8_t_u_u((l_252 = (0x98E64E6DL & (safe_sub_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(g_17, func_18(l_21, (safe_rshift_func_int16_t_s_u((func_24(g_17, ((((g_17 ^ ((safe_add_func_uint32_t_u_u(((0xE86FL < ((*l_29) = 0x85ECL)) && 0xE7L), (func_31(l_21, l_21, l_21, l_37, g_17) == g_17))) | l_201)) >= l_37) | l_202) || l_37)) & 255UL), 14))))) || (*g_70)), g_166)))), l_201)) == l_202) == 8L) >= g_17) && (-1L)), l_201, l_201, l_21, l_21), l_202) > g_166);
    if ((*l_673))
    {
        g_113 = ((*l_673) = (safe_rshift_func_int16_t_s_s((g_488 &= (&g_426 != &g_491)), 4)));
        return g_576;
    }
    else
    {
        unsigned l_703 = 1UL;
        unsigned short l_712 = 65527UL;
        unsigned short l_714 = 65535UL;
        int l_732 = 5L;
        unsigned l_790 = 0x9BDBF5ACL;
        int *l_799 = &l_732;
        unsigned short **l_847 = &l_29;
        int l_871 = 0x4F0E55D3L;
        short *l_1115 = &l_1054;
        unsigned short l_1117 = 8UL;
        for (g_508 = 0; (g_508 > 42); ++g_508)
        {
            short l_689 = 0xAC56L;
            int l_702 = 0x9DD76B79L;
            char *l_713 = &g_426;
            unsigned char *l_720 = &g_613;
            unsigned l_844 = 4294967295UL;
            unsigned short ***l_849 = &l_847;
            int ***l_859 = &g_427;
            for (g_176 = 0; (g_176 < 14); g_176 = safe_add_func_uint16_t_u_u(g_176, 2))
            {
                unsigned l_682 = 0xF97B1DD4L;
                int *** const *l_683 = &g_588;
                int *** const **l_684 = &l_683;
                int ****l_686 = (void*)0;
                int *****l_685 = &l_686;
                int **l_688 = &g_123;
                int *l_690 = &g_73;
                int *l_691 = &g_113;
                int *l_692 = &g_213;
                int *l_693 = &g_113;
                int *l_694 = &g_113;
                int *l_695 = &l_252;
                int *l_696 = &g_73;
                int *l_697 = &g_213;
                int *l_698 = &l_252;
                int *l_699 = &g_113;
                int *l_700 = (void*)0;
                int *l_701 = (void*)0;
                (*l_688) = &l_252;
                l_703++;
            }
            if ((safe_rshift_func_uint8_t_u_s(((*l_720) = (safe_mod_func_uint8_t_u_u((((safe_sub_func_int16_t_s_s(l_702, (&g_613 == &g_222))) && func_5((l_712 = g_222), (*l_673), (((*l_713) = 0L) < l_714), (safe_mod_func_int32_t_s_s(0L, (safe_sub_func_uint16_t_u_u((l_719 & l_714), 0xAD6EL)))), (*l_673))) ^ 0x345972E4L), 0x9EL))), g_80)))
            {
                int **l_721 = &g_123;
                (*l_721) = &g_113;
                for (g_71 = 0; (g_71 == 4); ++g_71)
                {
                    for (g_163 = 0; (g_163 < (-26)); g_163 = safe_sub_func_int8_t_s_s(g_163, 2))
                    {
                        int ***l_726 = &l_721;
                        (*l_726) = &l_673;
                    }
                }
                if ((*l_673))
                    break;
                return g_67;
            }
            else
            {
                int *l_737 = &g_306;
                int l_742 = (-1L);
                int l_745 = 0xE16D2C66L;
                unsigned *l_775 = (void*)0;
                unsigned *l_776 = &g_766;
                int *l_777 = &l_732;
                const unsigned short **l_779 = &g_165;
                const unsigned short ***l_778 = &l_779;
                for (l_702 = 0; (l_702 < (-13)); l_702 = safe_sub_func_uint8_t_u_u(l_702, 6))
                {
                    unsigned char l_729 = 1UL;
                    int **l_757 = &l_673;
                    --l_729;
                    l_673 = func_38((l_732 = (-1L)), &g_73, (*l_673));
                    for (g_71 = (-29); (g_71 == 52); g_71++)
                    {
                        if (l_689)
                            break;
                    }
                    if (((*l_673) ^= (safe_add_func_uint16_t_u_u(((*g_427) == l_737), (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_u((((*g_70) = ((&g_110 == (void*)0) > (((*l_720) = l_742) < ((void*)0 != &g_113)))) > (g_163 ^ (safe_rshift_func_uint16_t_u_s(((++(*l_29)) & (*g_165)), 9)))), 1)) != l_748), g_176))))))
                    {
                        unsigned short *l_760 = (void*)0;
                        unsigned short *l_761 = &g_61;
                        int *l_764 = (void*)0;
                        int *l_765 = &l_252;
                        g_767 ^= ((g_198 > (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(g_166, ((safe_mod_func_int8_t_s_s(func_5(l_689, ((g_213 = ((**l_757) = ((*l_765) &= ((((void*)0 != l_757) != ((*l_761) = (--(*l_29)))) ^ (0UL || ((safe_sub_func_int16_t_s_s((+(**l_757)), ((*l_673) < l_702))) ^ g_95)))))) < l_689), l_702, g_67, l_732), 0x08L)) & g_176))), g_766)), (*g_165)))) & 0x26L);
                    }
                    else
                    {
                        (*l_757) = &g_73;
                        if (g_163)
                            break;
                    }
                }
                (*l_673) |= g_654;
                (*l_777) &= (safe_add_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(((*l_776) ^= ((!func_5(l_703, l_742, ((safe_add_func_uint16_t_u_u(l_774, (-10L))) > g_654), g_274, l_703)) > ((0x97026E02L != g_67) == g_491))), g_426)), 0x6E2E8365L));
                (*l_778) = &g_165;
            }
        }
        if (g_80)
        {
            const int l_869 = 0x2184DB20L;
            unsigned short ** const l_870 = &l_29;
            (*l_799) |= ((*g_70) == (func_18(g_61, l_869) & (&g_165 != l_870)));
            return l_871;
        }
        else
        {
            short *l_872 = &l_21;
            char l_912 = 0L;
            unsigned short l_913 = 1UL;
            int l_917 = 0L;
            unsigned l_1110 = 4294967295UL;
            int l_1238 = 0xEA277023L;
lbl_1216:
            if (((((*l_872) = (*l_799)) <= ((*l_673) = g_654)) && (*l_673)))
            {
                unsigned l_1022 = 0xCEF5A2EEL;
                int l_1066 = 1L;
                for (g_308 = 23; (g_308 < 1); g_308 = safe_sub_func_int32_t_s_s(g_308, 9))
                {
                    unsigned char l_879 = 1UL;
                    char *l_916 = &l_719;
                    int l_936 = 0xF7860A94L;
                    int l_971 = 0xE232E4B2L;
                    int l_974 = 0L;
                    for (g_650 = 15; (g_650 <= (-6)); --g_650)
                    {
                        int *l_880 = &g_113;
                        int *l_881 = &g_824;
                        int *l_882 = &g_73;
                        int *l_883 = (void*)0;
                        int *l_884 = &l_871;
                        int *l_885 = &g_73;
                        int *l_886 = &l_871;
                        int *l_887 = (void*)0;
                        int *l_888 = &l_871;
                        int *l_889 = &l_732;
                        int *l_890 = &g_113;
                        int *l_891 = &g_824;
                        int *l_892 = &l_871;
                        int *l_893 = &g_73;
                        int *l_894 = &g_73;
                        int *l_895 = &l_252;
                        int *l_896 = &g_824;
                        int *l_898 = (void*)0;
                        int *l_899 = &l_871;
                        int *l_900 = &g_73;
                        int *l_901 = (void*)0;
                        int *l_902 = &l_252;
                        int *l_903 = &l_732;
                        int *l_904 = &g_73;
                        int *l_905 = &l_252;
                        int *l_906 = &g_213;
                        int *l_907 = (void*)0;
                        int *l_908 = &g_113;
                        g_113 ^= (safe_sub_func_int16_t_s_s(l_879, l_879));
                        ++g_909;
                        ++l_913;
                    }
                    if ((((*l_916) = g_306) & l_879))
                    {
                        int *l_918 = &g_213;
                        int *l_919 = &g_73;
                        int *l_920 = &l_871;
                        int *l_921 = &g_73;
                        int *l_922 = &g_213;
                        int *l_923 = &g_73;
                        int *l_924 = &g_113;
                        int *l_925 = &l_917;
                        int *l_926 = &l_732;
                        int *l_927 = &l_917;
                        int *l_928 = &l_732;
                        int *l_929 = (void*)0;
                        int *l_930 = (void*)0;
                        int *l_931 = (void*)0;
                        int *l_932 = &g_824;
                        int *l_933 = (void*)0;
                        int *l_934 = (void*)0;
                        int *l_935 = &l_252;
                        int *l_937 = (void*)0;
                        int *l_938 = &l_871;
                        int *l_939 = &g_824;
                        ++g_940;
                        if ((*l_925))
                            continue;
                    }
                    else
                    {
                        int *l_943 = &l_732;
                        int *l_944 = &g_73;
                        int *l_945 = &l_871;
                        int *l_946 = &l_936;
                        int *l_947 = &l_732;
                        int *l_948 = &l_252;
                        int *l_949 = &g_824;
                        int *l_950 = (void*)0;
                        int *l_951 = &g_213;
                        int *l_952 = &l_871;
                        int *l_953 = &g_113;
                        int *l_954 = (void*)0;
                        int *l_955 = (void*)0;
                        int *l_956 = &l_252;
                        int *l_957 = &l_917;
                        int *l_958 = &l_917;
                        int *l_959 = &g_73;
                        int *l_960 = (void*)0;
                        int *l_961 = &l_917;
                        int *l_962 = &g_824;
                        int *l_963 = &g_824;
                        int *l_964 = (void*)0;
                        int *l_965 = (void*)0;
                        int *l_966 = (void*)0;
                        int l_967 = 0x37EA4569L;
                        int *l_968 = &l_936;
                        int *l_969 = &l_936;
                        int *l_970 = &l_871;
                        int *l_972 = &l_732;
                        int *l_973 = &g_113;
                        int *l_975 = &l_871;
                        int *l_976 = &g_73;
                        int *l_977 = &l_936;
                        int *l_978 = &g_213;
                        int *l_979 = (void*)0;
                        int *l_980 = &l_967;
                        int *l_981 = &l_936;
                        int *l_982 = (void*)0;
                        int *l_983 = &l_732;
                        int *l_984 = &l_974;
                        int *l_985 = &l_967;
                        int *l_986 = &l_871;
                        int *l_987 = (void*)0;
                        int *l_988 = (void*)0;
                        int *l_989 = &l_971;
                        int *l_990 = &l_252;
                        int *l_991 = (void*)0;
                        int *l_992 = &l_967;
                        int *l_993 = &g_73;
                        int *l_994 = &l_936;
                        int *l_995 = (void*)0;
                        int *l_996 = &g_73;
                        int *l_997 = &g_73;
                        int *l_998 = (void*)0;
                        int *l_999 = (void*)0;
                        int *l_1000 = &l_252;
                        int *l_1001 = (void*)0;
                        int *l_1002 = &l_252;
                        unsigned short *l_1010 = &l_913;
                        unsigned short **l_1012 = &l_1010;
                        g_1003++;
                        (*l_969) = (safe_sub_func_int32_t_s_s(((+(--(*l_29))) > (&l_913 != ((*l_1012) = (g_1011 = l_1010)))), g_213));
                        if ((*l_949))
                            break;
                    }
                    return g_909;
                }
                if ((*l_799))
                {
                    int l_1013 = 5L;
                    int *l_1027 = (void*)0;
                    if ((!(-1L)))
                    {
                        return l_1013;
                    }
                    else
                    {
                        short l_1014 = 0x5BCAL;
                        int *l_1015 = &l_252;
                        int *l_1016 = &l_871;
                        int *l_1017 = (void*)0;
                        int *l_1018 = &g_113;
                        int *l_1019 = &l_252;
                        int l_1020 = 0x662D413AL;
                        int *l_1021 = &g_213;
                        l_1014 = g_306;
                        --l_1022;
                        g_123 = (void*)0;
                    }
                    for (l_912 = (-16); (l_912 > (-27)); --l_912)
                    {
                        int **l_1028 = &g_123;
                        (*l_1028) = l_1027;
                    }
                }
                else
                {
                    unsigned short l_1046 = 0x2A23L;
                    int l_1055 = 3L;
                    (*l_799) &= (*l_673);
                    if (g_897)
                    {
                        unsigned l_1029 = 0xB223BC8AL;
                        int **l_1032 = (void*)0;
                        int **l_1033 = (void*)0;
                        int **l_1034 = &g_123;
                        l_1029--;
                        (*l_1034) = &g_824;
                        (*g_123) ^= (g_1035 == &g_1036);
                    }
                    else
                    {
                        unsigned char l_1045 = 0x59L;
                        unsigned *l_1047 = &g_576;
                        int *l_1056 = &l_1055;
                        int *l_1057 = &g_213;
                        int *l_1058 = &g_113;
                        int *l_1059 = &g_824;
                        int *l_1060 = (void*)0;
                        int *l_1061 = &l_1055;
                        int *l_1062 = &g_824;
                        int *l_1063 = &l_1055;
                        int *l_1064 = &l_871;
                        int *l_1065 = &l_917;
                        int *l_1067 = &g_73;
                        int *l_1068 = &g_824;
                        int *l_1069 = &g_824;
                        int *l_1070 = (void*)0;
                        int *l_1071 = &l_252;
                        int *l_1072 = &l_1055;
                        int *l_1073 = (void*)0;
                        int *l_1074 = (void*)0;
                        int *l_1075 = &g_113;
                        int *l_1076 = &g_213;
                        int *l_1077 = &g_73;
                        int *l_1078 = &l_732;
                        int *l_1079 = &l_252;
                        int *l_1080 = (void*)0;
                        int *l_1081 = (void*)0;
                        int *l_1082 = &l_1055;
                        int *l_1083 = &g_113;
                        int *l_1084 = (void*)0;
                        (*l_673) &= (0xBED0FBC4L <= (safe_sub_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((l_1046 < (*l_799)) > 0xBAL), (*g_70))), (*g_165))));
                        (*l_673) ^= ((((+((*l_1047) &= (*g_70))) != l_1022) < ((l_1055 = (safe_mod_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((l_913 & 65526UL), func_18(l_913, (((safe_mod_func_uint8_t_u_u(g_426, ((g_766 && ((*l_799) = (func_18(l_1054, l_913) != 0x8CDEL))) && l_1022))) && g_766) > 8UL)))) | l_1045), g_306))) || 0xE6F5E8B3L)) < (*g_70));
                        --g_1085;
                    }
                }
            }
            else
            {
                unsigned short ****l_1091 = &g_1036;
                unsigned short ****l_1092 = &g_1036;
                unsigned short ****l_1093 = &g_1036;
                unsigned l_1094 = 0x07DC0476L;
                short *l_1097 = (void*)0;
                short *l_1098 = &l_1054;
                unsigned char *l_1103 = (void*)0;
                int l_1143 = 0x35BC40AEL;
                int l_1144 = (-2L);
                int l_1174 = 0x138A6323L;
                (*l_673) = ((l_1088 || 0UL) < (safe_add_func_int16_t_s_s(((l_1092 = l_1091) != (l_1093 = (void*)0)), (l_1094 <= ((!g_650) | (safe_lshift_func_int16_t_s_s(((*l_1098) = ((*l_872) = g_61)), func_5((*l_799), g_113, g_176, (*l_673), (*l_673)))))))));
                if ((g_213 = (safe_sub_func_uint32_t_u_u(8UL, (((*l_673) & l_1094) != ((*g_70) <= ((void*)0 != l_1103)))))))
                {
                    unsigned short l_1108 = 0x590BL;
                    unsigned char *l_1109 = &g_613;
                    char *l_1116 = &l_798;
                    int l_1118 = 0x09BFC221L;
                    g_113 |= ((safe_add_func_uint16_t_u_u((8UL || (safe_lshift_func_uint8_t_u_u(l_1108, 7))), ((*l_799) = (*l_673)))) ^ ((*l_673) || func_18(l_912, (((l_1094 | l_912) && (((*l_1109) = (0xB46A419FL == (l_1094 != 0x19D5L))) > (*l_673))) != l_1110))));
                    if ((safe_rshift_func_uint8_t_u_s(g_909, (l_1118 = ((l_1108 > ((safe_lshift_func_int8_t_s_s(((*l_1116) = (((*l_673) = func_5((l_917 ^= (*l_673)), ((*l_673) & (((void*)0 != (*g_588)) == (((void*)0 != l_1115) >= ((*l_673) == (*l_799))))), g_17, g_613, (*g_165))) > 0UL)), l_1117)) <= 0xE381L)) >= (*l_799))))))
                    {
                        int **l_1119 = (void*)0;
                        int **l_1120 = &l_799;
                        (*l_1120) = func_38((*l_799), &l_252, (g_176 = l_1110));
                        (*l_799) = l_1118;
                        (*l_1120) = &g_213;
                        (*l_673) = (((-3L) <= (g_488 = (safe_rshift_func_int8_t_s_s(l_1108, 7)))) && (*l_799));
                    }
                    else
                    {
                        unsigned **l_1123 = &g_70;
                        (*l_799) |= ((((((((*l_1123) = &g_71) == (void*)0) == 0x24997B6CL) != g_113) >= l_1094) && (safe_add_func_uint8_t_u_u(g_650, ((((*l_673) && 0xFDC8L) <= (*g_70)) < 0L)))) >= 0x7DL);
                        if (l_37)
                            goto lbl_1216;
                    }
                    if ((*l_673))
                    {
                        const int *l_1127 = &l_917;
                        const int **l_1126 = &l_1127;
                        (*l_1126) = &g_274;
                    }
                    else
                    {
                        char l_1136 = 1L;
                        (*l_673) &= l_1136;
                        return l_1108;
                    }
                }
                else
                {
                    unsigned l_1137 = 0xA3731C6CL;
                    (*l_673) = ((l_687 == &g_608) || l_1137);
                }
                if ((*l_799))
                {
                    int *l_1142 = &g_73;
                    int l_1170 = 0x3730D04FL;
                    (*l_673) = l_912;
                    for (g_308 = 0; (g_308 >= 48); g_308 = safe_add_func_uint8_t_u_u(g_308, 2))
                    {
                        int **l_1140 = &l_673;
                        int **l_1141 = &g_123;
                        int *l_1145 = &g_73;
                        int *l_1146 = &l_252;
                        int *l_1147 = (void*)0;
                        int *l_1148 = (void*)0;
                        int *l_1149 = &l_1143;
                        int *l_1150 = (void*)0;
                        int *l_1151 = &l_1144;
                        int *l_1152 = &l_1144;
                        int *l_1153 = &l_732;
                        int *l_1154 = &g_824;
                        int *l_1155 = &l_732;
                        int *l_1156 = &g_213;
                        int *l_1157 = &g_213;
                        int *l_1158 = &g_824;
                        int *l_1159 = &l_252;
                        int *l_1160 = &l_1144;
                        int *l_1161 = &l_732;
                        int *l_1162 = (void*)0;
                        int *l_1163 = (void*)0;
                        int *l_1164 = &g_824;
                        int *l_1165 = &g_113;
                        int *l_1166 = &g_113;
                        int *l_1167 = &l_732;
                        int *l_1168 = (void*)0;
                        int *l_1169 = &g_73;
                        int *l_1171 = (void*)0;
                        int *l_1172 = &l_1143;
                        int *l_1173 = &l_1143;
                        int *l_1175 = &l_732;
                        int *l_1176 = &l_1174;
                        int *l_1177 = &g_73;
                        int *l_1178 = &g_113;
                        int *l_1179 = &l_1170;
                        int *l_1180 = &g_824;
                        int *l_1181 = &l_732;
                        int *l_1182 = &l_732;
                        int *l_1183 = &g_213;
                        int *l_1184 = &g_73;
                        int *l_1185 = &l_1143;
                        int *l_1186 = &g_824;
                        int *l_1188 = &l_871;
                        int *l_1189 = &g_213;
                        int *l_1190 = &l_1144;
                        int *l_1191 = &l_732;
                        int *l_1192 = (void*)0;
                        int *l_1193 = &g_73;
                        int *l_1194 = &l_871;
                        int *l_1196 = &l_1143;
                        int *l_1197 = &l_1143;
                        int *l_1198 = (void*)0;
                        int *l_1199 = (void*)0;
                        int *l_1200 = &l_917;
                        int *l_1201 = &l_1174;
                        (*l_1140) = (void*)0;
                        l_1142 = ((*l_1141) = ((*l_1140) = &g_113));
                        g_1202++;
                        if ((*g_123))
                            continue;
                    }
                }
                else
                {
                    int l_1210 = 0xD3ECE312L;
                    unsigned char *l_1213 = &g_767;
                    unsigned short **l_1214 = (void*)0;
                    unsigned short **l_1215 = &g_1011;
                    g_123 = &g_73;
                    for (l_719 = (-9); (l_719 <= 12); ++l_719)
                    {
                        unsigned l_1207 = 0xD5A8D379L;
                        (*g_123) = ((*l_799) = l_1207);
                    }
                    (*l_673) = ((*l_799) = (*g_123));
                }
            }
            for (g_824 = 25; (g_824 <= 26); g_824++)
            {
                int **l_1219 = &l_799;
                int ***l_1220 = &l_1219;
                const int ****l_1225 = &g_1223;
                int *l_1239 = (void*)0;
                int *l_1240 = &l_252;
                int *l_1241 = &l_871;
                int *l_1242 = &g_113;
                int *l_1243 = &l_871;
                int *l_1244 = &g_213;
                int *l_1245 = &l_252;
                int *l_1246 = (void*)0;
                int *l_1247 = &l_871;
                int *l_1248 = (void*)0;
                int *l_1249 = &l_917;
                int *l_1250 = &g_213;
                int *l_1251 = &g_213;
                int *l_1252 = (void*)0;
                int *l_1253 = &l_252;
                int *l_1254 = (void*)0;
                int *l_1255 = &g_113;
                int *l_1256 = &g_213;
                int *l_1257 = (void*)0;
                int l_1258 = (-9L);
                int *l_1259 = &g_73;
                int *l_1260 = &l_917;
                int *l_1261 = &g_113;
                int *l_1262 = (void*)0;
                int *l_1263 = &l_732;
                int *l_1264 = &l_917;
                int *l_1265 = &l_917;
                int *l_1266 = &g_113;
                int *l_1267 = (void*)0;
                int *l_1268 = &l_871;
                int *l_1269 = &g_213;
                int *l_1270 = (void*)0;
                int *l_1271 = &l_252;
                int l_1272 = 3L;
                int *l_1273 = &l_871;
                int *l_1274 = &l_1272;
                int *l_1275 = &g_73;
                int *l_1276 = &l_917;
                int *l_1277 = &g_213;
                int *l_1278 = &g_113;
                int *l_1279 = (void*)0;
                int *l_1280 = (void*)0;
                int *l_1281 = &g_113;
                int *l_1282 = &l_1272;
                int *l_1283 = &g_73;
                int *l_1284 = &g_73;
                int *l_1285 = &g_1187;
                int *l_1286 = (void*)0;
                int *l_1287 = &g_113;
                int *l_1288 = (void*)0;
                int *l_1289 = &l_871;
                int *l_1290 = &l_1238;
                int *l_1291 = &g_1187;
                int *l_1292 = &g_113;
                int *l_1293 = &l_252;
                unsigned l_1294 = 4294967295UL;
                (*l_1220) = l_1219;
                (***l_1220) = (g_1221 == ((*l_1225) = g_1223));
                (***l_1220) = (*l_799);
                ++l_1294;
            }
        }
    }
    (*l_673) = (*l_673);
    return (*l_673);
}







static const short func_2(short p_3, unsigned p_4)
{
    unsigned short *l_378 = &g_61;
    unsigned char *l_384 = &g_222;
    int l_388 = 0x0D8BC595L;
    int *l_417 = &g_113;
    int l_476 = 0xA09E4480L;
    short l_478 = 0xA383L;
    unsigned l_513 = 4294967294UL;
    int l_563 = (-1L);
    int l_666 = 0L;
    for (g_30 = 19; (g_30 <= 27); g_30 = safe_add_func_uint32_t_u_u(g_30, 5))
    {
        unsigned short *l_379 = &g_95;
        unsigned char *l_385 = &g_222;
        unsigned char *l_386 = (void*)0;
        int l_387 = 0xC66B9BC0L;
        int *l_398 = &g_163;
        unsigned char l_399 = 0xF9L;
        int l_411 = 0L;
        if (p_3)
            break;
        l_387 = (7UL >= (safe_lshift_func_uint8_t_u_s(p_4, (safe_sub_func_int8_t_s_s((g_176 & ((*g_165) == l_387)), g_30)))));
        for (g_308 = 8; (g_308 > 29); g_308 = safe_add_func_int32_t_s_s(g_308, 3))
        {
            char l_391 = (-1L);
            int *l_402 = &g_213;
            int **l_407 = &g_123;
            char l_414 = 0x09L;
            g_113 = ((((((l_391 != 0xB268L) || (safe_add_func_uint32_t_u_u(((*g_70) = (*g_70)), func_18((l_388 & func_18(p_3, (l_391 ^ ((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((l_398 != (void*)0), (255UL < g_274))) > l_399), l_388)) & 65530UL)))), (*g_165))))) || p_4) < (-3L)) < p_3) || 0x71BAL);
            (*l_407) = func_38((safe_rshift_func_uint8_t_u_u(g_274, 5)), l_402, (((*g_70) < ((((func_18((++(*l_385)), l_387) != p_3) < (safe_add_func_uint16_t_u_u((((l_399 & p_3) ^ p_4) >= 7L), g_17))) && p_4) | g_71)) <= (*g_70)));
            (**l_407) = (*g_123);
            (*g_123) = (safe_add_func_uint16_t_u_u((((safe_unary_minus_func_uint8_t_u(p_3)) ^ (0L | l_411)) | (0x09FD6BD2L ^ (g_67 > l_387))), ((safe_lshift_func_int16_t_s_u(((((*g_70) == 5L) >= (**l_407)) == (*g_123)), l_414)) | (*g_123))));
        }
        for (g_71 = 0; (g_71 >= 49); g_71 = safe_add_func_uint16_t_u_u(g_71, 1))
        {
            if (p_4)
                break;
            l_417 = &g_113;
        }
    }
    for (g_306 = 9; (g_306 < (-30)); g_306--)
    {
        char *l_424 = (void*)0;
        char *l_425 = &g_426;
        int l_444 = 0xE496B065L;
        int l_456 = (-4L);
        int l_472 = (-10L);
        int l_475 = 0x1F477871L;
        int ***l_586 = (void*)0;
        unsigned short ***l_665 = &g_110;
        int *l_667 = (void*)0;
        int *l_668 = &l_388;
        int **l_669 = (void*)0;
        int **l_670 = &l_668;
    }
    for (l_388 = 0; (l_388 <= 4); ++l_388)
    {
        return p_4;
    }
    return g_306;
}







static short func_5(int p_6, unsigned char p_7, unsigned p_8, char p_9, unsigned short p_10)
{
    unsigned short l_262 = 0xCF7CL;
    short *l_263 = &g_80;
    int l_269 = 0x8E122638L;
    int l_305 = 8L;
    int l_348 = 2L;
    const unsigned l_366 = 1UL;
    int *l_371 = &g_213;
    for (g_222 = 19; (g_222 > 43); g_222++)
    {
        int *l_264 = &g_213;
        unsigned char l_279 = 250UL;
        unsigned short *l_312 = &g_95;
        unsigned short **l_311 = &l_312;
        int l_322 = (-10L);
        int l_328 = (-1L);
        int l_333 = (-1L);
        int l_344 = 0x4A3F93A2L;
        int l_347 = (-1L);
        unsigned l_359 = 0x98823A16L;
        p_6 ^= 0xB500B87CL;
        for (g_30 = 0; (g_30 != 29); g_30++)
        {
            int *l_257 = &g_213;
            int **l_258 = (void*)0;
            int **l_259 = (void*)0;
            const int *l_261 = &g_113;
            const int **l_260 = &l_261;
            g_123 = &g_73;
            (*l_257) |= (p_6 |= (*g_123));
            (*l_260) = (void*)0;
            l_262 ^= (*g_123);
        }
        (*l_264) |= ((void*)0 != l_263);
        for (p_9 = 0; (p_9 <= 6); p_9++)
        {
            unsigned l_278 = 0x5A76CD9FL;
            int *l_321 = &g_113;
            int *l_323 = &l_322;
            int l_324 = 0xADB8ECADL;
            int *l_325 = &g_73;
            int *l_326 = (void*)0;
            int l_327 = 0x2A36E6C8L;
            int *l_329 = (void*)0;
            int *l_330 = &l_305;
            int *l_331 = (void*)0;
            int *l_332 = &g_73;
            int *l_334 = &l_322;
            int *l_335 = (void*)0;
            int *l_336 = &l_269;
            int *l_337 = &l_305;
            int *l_338 = &l_328;
            int *l_339 = &l_269;
            int *l_340 = &l_328;
            int *l_341 = &l_324;
            int *l_342 = &g_113;
            int *l_343 = &l_327;
            int *l_345 = (void*)0;
            int *l_346 = &l_327;
            int *l_349 = &l_322;
            int *l_350 = &l_305;
            int *l_351 = &l_327;
            int *l_352 = &l_333;
            int *l_353 = (void*)0;
            int *l_354 = (void*)0;
            int *l_355 = &g_213;
            int *l_356 = &l_347;
            int *l_357 = &l_347;
            int *l_358 = &l_344;
            for (g_71 = 4; (g_71 <= 32); g_71 = safe_add_func_int8_t_s_s(g_71, 3))
            {
                char l_314 = 1L;
                l_269 &= ((*l_264) || (&g_165 == (void*)0));
                for (g_213 = 0; (g_213 <= 23); g_213++)
                {
                    const int *l_273 = &g_274;
                    const int **l_272 = &l_273;
                    const int **l_275 = (void*)0;
                    const int *l_277 = &g_113;
                    const int **l_276 = &l_277;
                    (*l_276) = ((*l_272) = (void*)0);
                    if ((p_6 = l_278))
                    {
                        if (l_269)
                            break;
                    }
                    else
                    {
                        int *l_282 = &g_73;
                        int *l_283 = &l_269;
                        int *l_284 = (void*)0;
                        int *l_285 = &l_269;
                        int *l_286 = &l_269;
                        int *l_287 = &g_113;
                        int *l_288 = &g_113;
                        int *l_289 = &l_269;
                        int *l_290 = &g_113;
                        int *l_291 = &l_269;
                        int *l_292 = &g_73;
                        int *l_293 = &l_269;
                        int *l_294 = &l_269;
                        int *l_295 = &g_113;
                        int *l_296 = &g_113;
                        int *l_297 = &g_73;
                        int *l_298 = &l_269;
                        int *l_299 = &g_113;
                        int *l_300 = &l_269;
                        int *l_301 = &g_113;
                        int *l_302 = &g_113;
                        int *l_303 = &g_113;
                        int *l_304 = &g_73;
                        int *l_307 = &g_73;
                        unsigned short ***l_313 = &g_110;
                        ++l_279;
                        g_308--;
                        if (l_305)
                            continue;
                        (*l_313) = l_311;
                    }
                    if (func_18(g_17, l_269))
                    {
                        int *l_315 = &g_73;
                        int l_316 = 8L;
                        l_316 = ((*l_315) = func_18(l_314, ((void*)0 != &g_123)));
                        if (l_305)
                            break;
                        if (p_9)
                            break;
                    }
                    else
                    {
                        int l_317 = 3L;
                        int *l_318 = (void*)0;
                        int *l_319 = &g_306;
                        unsigned char *l_320 = &l_279;
                        (*l_272) = &g_73;
                        g_113 = g_176;
                    }
                }
                l_264 = func_38(p_7, &g_213, p_9);
            }
            --l_359;
        }
    }
    (*l_371) ^= ((safe_sub_func_int32_t_s_s(l_262, ((((safe_add_func_uint32_t_u_u((*g_70), (((l_366 <= ((l_348 & func_18(l_366, ((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(g_30, 0xD3L)), 4)) > g_113))) | g_198)) || 0x3BL) && 0xFB84F57BL))) >= p_6) >= (-4L)) | (-10L)))) & g_61);
    return g_95;
}







static unsigned char func_18(unsigned char p_19, const unsigned short p_20)
{
    int *l_231 = (void*)0;
    int *l_232 = &g_113;
    int l_233 = 0x1E067309L;
    int *l_234 = (void*)0;
    int *l_235 = &g_113;
    int *l_236 = &g_213;
    int *l_237 = &g_213;
    int *l_238 = &g_113;
    int l_239 = 0xECDA2E41L;
    int *l_240 = (void*)0;
    int *l_241 = &g_73;
    int *l_242 = &l_233;
    int l_243 = (-1L);
    int *l_244 = &g_213;
    int l_245 = 0x3250C9F9L;
    int *l_246 = (void*)0;
    int *l_247 = &l_245;
    int *l_248 = &l_239;
    unsigned short l_249 = 0xB128L;
    ++l_249;
    return g_95;
}







static unsigned char func_24(short p_25, char p_26)
{
    unsigned l_206 = 0xFE344F03L;
    unsigned short l_214 = 0xDC4BL;
    unsigned *l_215 = &g_198;
    unsigned short *l_216 = &l_214;
    unsigned short l_217 = 1UL;
    short *l_220 = &g_80;
    unsigned char *l_221 = &g_222;
    short l_225 = (-6L);
    unsigned l_226 = 0x59170729L;
    int *l_227 = &g_213;
    l_217 = (func_31((((safe_unary_minus_func_int8_t_s(func_31(((safe_rshift_func_uint8_t_u_u(g_61, ((l_206 <= ((p_25 || (safe_sub_func_uint16_t_u_u(((*l_216) = ((&g_165 != (void*)0) <= ((*l_215) |= ((*g_70) = (((safe_mod_func_int16_t_s_s(((g_213 = (0UL != (p_25 || (safe_sub_func_int8_t_s_s(g_176, g_61))))) & g_30), l_214)) & p_26) >= p_25))))), g_163))) <= l_206)) | l_206))) >= 6L), g_61, g_95, p_26, p_26))) == l_206) >= l_206), g_17, p_26, l_206, l_206) || l_214);
    l_226 = (((*l_220) = (safe_mod_func_int32_t_s_s(l_214, (((*l_215) = l_206) | ((*g_70) = p_26))))) != (0xD8L || (1UL && (((((((*l_221)--) > l_214) <= (((void*)0 != g_165) == p_25)) <= p_25) < g_113) >= l_225))));
    (*l_227) ^= (0x853BL && (func_52(&l_217, &g_30) | p_25));
    for (l_226 = 0; (l_226 > 17); l_226 = safe_add_func_uint8_t_u_u(l_226, 1))
    {
        int l_230 = 6L;
        return l_230;
    }
    return (*l_227);
}







static char func_31(unsigned p_32, unsigned char p_33, unsigned p_34, short p_35, char p_36)
{
    char l_44 = 0x43L;
    int **l_158 = &g_123;
    int l_169 = (-6L);
    int *l_177 = &l_169;
    int *l_178 = &l_169;
    int *l_179 = (void*)0;
    int *l_180 = (void*)0;
    int *l_181 = &g_73;
    int *l_182 = &g_113;
    int *l_183 = &g_113;
    int *l_184 = &g_73;
    int *l_185 = &g_73;
    int *l_186 = (void*)0;
    int *l_187 = (void*)0;
    int *l_188 = &g_113;
    int *l_189 = (void*)0;
    int *l_190 = &g_113;
    int *l_191 = &g_73;
    int *l_192 = (void*)0;
    int *l_193 = &g_113;
    int *l_194 = &l_169;
    int *l_195 = (void*)0;
    int *l_196 = &g_73;
    int l_197 = 0L;
    (*l_158) = func_38(g_17, func_42(l_44), g_61);
    for (p_32 = 0; (p_32 < 52); p_32++)
    {
        int l_161 = 6L;
        int *l_162 = &g_163;
        unsigned short *l_164 = &g_61;
        unsigned short *l_170 = &g_95;
        int l_173 = 0L;
        int l_174 = 0L;
        int *l_175 = &g_176;
        (*l_158) = func_38(((*l_162) |= l_161), &l_161, ((*l_175) |= (((func_52(l_164, (g_165 = &g_95)) > ((((safe_lshift_func_uint16_t_u_s(p_32, (l_169 != ((((*l_170)++) < p_33) == (l_173 != l_173))))) | p_36) >= l_174) < 0x43F1B082L)) >= l_173) == p_33)));
    }
    ++g_198;
    return p_32;
}







static int * func_38(int p_39, int * p_40, int p_41)
{
    int *l_151 = &g_113;
    (*l_151) &= ((*p_40) = 0L);
    for (g_73 = 0; (g_73 <= 12); g_73++)
    {
        unsigned l_154 = 4294967288UL;
        int *l_157 = &g_73;
        l_154--;
        g_123 = l_157;
    }
    return p_40;
}







static int * func_42(unsigned p_43)
{
    char l_51 = (-1L);
    unsigned short *l_60 = &g_61;
    unsigned *l_66 = &g_67;
    unsigned short **l_98 = (void*)0;
    unsigned short **l_99 = &l_60;
    int l_145 = 0xBAE8C6C5L;
    int *l_146 = &g_113;
    int **l_147 = &l_146;
    int *l_150 = &l_145;
    l_145 = (safe_mod_func_int16_t_s_s((((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(l_51, func_52(((*l_99) = func_55(l_60, (safe_sub_func_uint32_t_u_u(((*l_66) = (--p_43)), g_17)), (safe_rshift_func_int8_t_s_s(l_51, (((void*)0 != g_70) || 0x8DL))), l_60)), &g_61))), 0xD85FC26EL)) < l_51) == g_17), 0x50F8L));
    (*l_146) = (-6L);
    (*l_147) = &g_113;
    for (g_73 = (-15); (g_73 == 3); g_73 = safe_add_func_int8_t_s_s(g_73, 8))
    {
        (*l_146) = g_95;
    }
    return &g_73;
}







static unsigned short func_52(unsigned short * p_53, const unsigned short * p_54)
{
    unsigned char l_100 = 0x8BL;
    int *l_101 = (void*)0;
    int *l_102 = &g_73;
    unsigned short **l_105 = (void*)0;
    unsigned short *l_107 = &g_61;
    unsigned short **l_106 = &l_107;
    char l_116 = 0L;
    unsigned *l_135 = (void*)0;
    (*l_102) = (l_100 || 1UL);
    if (((safe_rshift_func_uint8_t_u_s((&g_95 != ((*l_106) = &g_95)), 2)) != (g_17 | g_61)))
    {
        unsigned short **l_111 = &l_107;
        int *l_112 = &g_113;
        (*l_112) ^= (safe_sub_func_uint32_t_u_u((g_110 == (l_111 = &l_107)), (*l_102)));
        (*l_112) &= g_73;
    }
    else
    {
        short l_119 = 0x9B6FL;
        unsigned *l_136 = &g_67;
        int l_137 = 8L;
        for (g_73 = 0; (g_73 >= (-25)); g_73 = safe_sub_func_int8_t_s_s(g_73, 8))
        {
            if (g_113)
                break;
        }
        if (((*l_102) | ((!l_116) != (safe_lshift_func_int16_t_s_u(l_119, (g_113 || (safe_lshift_func_uint16_t_u_u((*p_53), 6))))))))
        {
            int **l_122 = (void*)0;
            l_101 = (g_123 = &g_73);
            for (g_80 = 0; (g_80 != 13); g_80 = safe_add_func_uint16_t_u_u(g_80, 6))
            {
                (*l_102) ^= 0x67819277L;
                (*l_102) |= (&g_67 != l_102);
            }
        }
        else
        {
            char l_126 = (-5L);
            l_137 = (((*p_53) = (l_126 < (safe_mod_func_uint8_t_u_u(l_126, g_113)))) > (safe_sub_func_uint32_t_u_u(0xB34FF331L, ((*l_102) > (~(65535UL >= ((safe_add_func_uint32_t_u_u(((*g_70) = 4294967295UL), (safe_sub_func_uint16_t_u_u((l_135 == l_136), l_126)))) >= l_126)))))));
        }
        for (l_137 = 7; (l_137 == (-30)); l_137 = safe_sub_func_int16_t_s_s(l_137, 1))
        {
            int *l_140 = &g_113;
            l_102 = l_140;
        }
    }
    (*l_102) = (((safe_rshift_func_uint8_t_u_u((*l_102), 3)) != (*l_102)) > (safe_add_func_int16_t_s_s((*l_102), (*l_102))));
    return (*l_102);
}







static unsigned short * func_55(unsigned short * p_56, unsigned p_57, char p_58, unsigned short * p_59)
{
    int *l_72 = &g_73;
    int *l_74 = (void*)0;
    int *l_75 = &g_73;
    int *l_76 = &g_73;
    int *l_77 = &g_73;
    int *l_78 = &g_73;
    int l_79 = (-8L);
    int *l_81 = &g_73;
    int *l_82 = &l_79;
    int *l_83 = (void*)0;
    int *l_84 = &l_79;
    int *l_85 = &l_79;
    int *l_86 = &l_79;
    int *l_87 = &l_79;
    int *l_88 = (void*)0;
    int *l_89 = (void*)0;
    int *l_90 = &g_73;
    int *l_91 = (void*)0;
    int *l_92 = &g_73;
    int *l_93 = &l_79;
    int *l_94 = &l_79;
    ++g_95;
    return &g_95;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_306, "g_306", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_426, "g_426", print_hash_value);
    transparent_crc(g_488, "g_488", print_hash_value);
    transparent_crc(g_491, "g_491", print_hash_value);
    transparent_crc(g_502, "g_502", print_hash_value);
    transparent_crc(g_508, "g_508", print_hash_value);
    transparent_crc(g_576, "g_576", print_hash_value);
    transparent_crc(g_613, "g_613", print_hash_value);
    transparent_crc(g_650, "g_650", print_hash_value);
    transparent_crc(g_654, "g_654", print_hash_value);
    transparent_crc(g_766, "g_766", print_hash_value);
    transparent_crc(g_767, "g_767", print_hash_value);
    transparent_crc(g_824, "g_824", print_hash_value);
    transparent_crc(g_897, "g_897", print_hash_value);
    transparent_crc(g_909, "g_909", print_hash_value);
    transparent_crc(g_940, "g_940", print_hash_value);
    transparent_crc(g_1003, "g_1003", print_hash_value);
    transparent_crc(g_1085, "g_1085", print_hash_value);
    transparent_crc(g_1187, "g_1187", print_hash_value);
    transparent_crc(g_1195, "g_1195", print_hash_value);
    transparent_crc(g_1202, "g_1202", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
