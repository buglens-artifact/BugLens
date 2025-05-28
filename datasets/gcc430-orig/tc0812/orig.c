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
   unsigned f0;
   char * f1;
   char * f2;
   unsigned short f3;
};


static char g_20 = 0xB7L;
static char *g_19 = &g_20;
static char **g_18 = &g_19;
static char g_53 = 1L;
static unsigned g_55 = 0x51AD5B48L;
static char g_62 = 1L;
static unsigned short g_64 = 0x682CL;
static int g_68 = (-4L);
static int *g_75 = (void*)0;
static char g_104 = 1L;
static int **g_112 = &g_75;
static union U0 g_125 = {4294967286UL};
static short g_138 = 8L;
static short *g_148 = &g_138;
static short **g_147 = &g_148;
static short g_183 = 0x7B95L;
static const union U0 *g_188 = (void*)0;
static const union U0 **g_187 = &g_188;
static unsigned char g_195 = 255UL;
static union U0 g_222 = {1UL};
static unsigned short *g_253 = &g_222.f3;
static unsigned short **g_252 = &g_253;
static unsigned short **g_254 = (void*)0;
static int g_372 = 0xC7DB9B2CL;
static int g_375 = (-2L);
static unsigned char g_377 = 5UL;
static unsigned g_378 = 5UL;
static int g_399 = 0x2D250F80L;
static const char g_445 = 0x5EL;
static unsigned char *g_487 = &g_195;
static unsigned char **g_486 = &g_487;
static unsigned char ** const *g_485 = &g_486;
static int g_578 = 3L;
static char g_620 = 7L;
static short g_634 = (-2L);
static short g_650 = (-1L);



static unsigned func_1(void);
static char ** func_2(char * p_3, unsigned short p_4, unsigned short p_5, unsigned p_6, int p_7);
static char * func_8(int p_9, unsigned short p_10, char * p_11);
static int func_12(char ** p_13, const char * p_14, union U0 p_15, int p_16, unsigned char p_17);
static union U0 func_21(int p_22);
static short func_26(short p_27, char * p_28, int p_29, int p_30);
static short func_35(short p_36, int p_37, unsigned char p_38, unsigned short p_39);
static unsigned short func_40(char p_41, char p_42);
static char ** func_43(char * const * p_44, char p_45, char * const p_46, const union U0 p_47);
static char ** func_48(union U0 p_49, char p_50);
static unsigned func_1(void)
{
    unsigned char l_25 = 255UL;
    union U0 l_51 = {0x6A218F0EL};
    char *l_52 = &g_53;
    char * const *l_152 = (void*)0;
    char * const **l_151 = &l_152;
    char l_153 = (-10L);
    char **l_161 = &l_52;
    char ***l_160 = &l_161;
    char **l_629 = &g_19;
    short l_630 = 0xD8A9L;
    (*l_160) = func_2(((*l_629) = func_8(func_12(g_18, (*g_18), func_21((g_378 |= (g_377 &= ((safe_add_func_int16_t_s_s(l_25, func_26((safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((g_20 || ((func_35(g_20, (((func_40((((((*l_160) = func_43(((*l_151) = func_48(l_51, ((*l_52) = l_51.f3))), ((248UL >= l_153) && 0UL), (*g_18), l_51)) != &g_19) ^ l_51.f3) || (**g_112)), l_153) == g_20) == g_20) <= 0xCBF27FBFL), l_153, l_51.f3) > g_20) >= 2UL)), l_51.f0)), 0xA3L)), (*g_18), l_51.f0, g_20))) | 0x0DL)))), g_20, l_51.f0), l_153, &g_20)), l_630, l_51.f3, l_153, g_445);
    return g_378;
}







static char ** func_2(char * p_3, unsigned short p_4, unsigned short p_5, unsigned p_6, int p_7)
{
    int l_631 = 0xB1920FBEL;
    char *l_632 = &g_104;
    union U0 l_633 = {0x446A3DD3L};
    int *l_635 = (void*)0;
    int l_636 = 0x1ACBECCBL;
    short *l_639 = &g_183;
    int ***l_646 = &g_112;
    char **l_690 = &l_632;
    unsigned l_697 = 4294967291UL;
    l_636 |= (func_12(&g_19, func_8(l_631, p_7, l_632), l_633, (g_634 &= 0x72BA0092L), l_631) && l_631);
    if (((((safe_lshift_func_int8_t_s_u((l_639 != (void*)0), 3)) > (safe_add_func_int8_t_s_s((*p_3), (*p_3)))) && (p_4 & 4294967295UL)) != 0xA453L))
    {
        int l_647 = 5L;
        short *l_648 = (void*)0;
        int l_649 = 3L;
        int *l_668 = &l_649;
        g_650 &= ((safe_mod_func_int8_t_s_s(((((void*)0 == l_646) != p_5) ^ (func_35(((l_639 == l_648) <= (l_647 = (*g_19))), l_649, p_4, l_649) != 0x01EEL)), (*g_487))) && (-2L));
        if (l_649)
        {
            int **l_656 = &l_635;
            for (g_62 = 0; (g_62 >= (-19)); --g_62)
            {
                int *l_653 = &l_647;
                int *l_654 = &g_578;
                int **l_655 = &l_635;
                (*l_654) |= ((*l_653) = (p_4 < ((***g_485) <= 0x15L)));
                (*l_655) = &l_647;
            }
            (*l_656) = (void*)0;
        }
        else
        {
            char l_666 = 0x64L;
            int l_667 = (-1L);
            l_667 &= (safe_unary_minus_func_uint8_t_u(((safe_add_func_uint32_t_u_u(((((0xC7L != ((**g_486) = (safe_sub_func_int8_t_s_s((*p_3), (safe_sub_func_uint16_t_u_u(((((8UL || (**g_252)) >= p_7) | 0x7DL) >= (safe_mod_func_uint8_t_u_u(p_6, l_666))), l_647)))))) | (*p_3)) & (**g_147)) <= l_649), 0x97191F85L)) == l_647)));
            l_668 = &l_667;
        }
    }
    else
    {
        int *l_669 = (void*)0;
        int *l_670 = &g_68;
        int l_691 = 0L;
        (*l_670) = p_6;
        for (g_634 = 0; (g_634 < (-13)); --g_634)
        {
            int l_679 = 0xDEFA6E40L;
            const union U0 l_689 = {0x519E0212L};
            for (g_399 = 17; (g_399 != (-13)); --g_399)
            {
                unsigned l_678 = 0UL;
                int l_680 = 0x5475A192L;
                unsigned short ** const *l_686 = &g_254;
                l_680 &= ((safe_unary_minus_func_int32_t_s((safe_mod_func_uint16_t_u_u((*l_670), l_678)))) != (l_679 && (*p_3)));
                if (p_5)
                {
                    int l_683 = 0xEAE14A05L;
                    char * const *l_688 = &g_19;
                    int *l_694 = (void*)0;
                    if ((safe_mod_func_int8_t_s_s((((l_683 ^ g_20) || (safe_lshift_func_int8_t_s_u(((void*)0 == l_686), (l_691 = (((*p_3) == (safe_unary_minus_func_int32_t_s(0xA006CE61L))) ^ ((*g_148) && p_5)))))) > p_7), 0xF0L)))
                    {
                        int * const l_692 = (void*)0;
                        int **l_693 = &l_669;
                        (*l_693) = l_692;
                        (*l_670) = p_7;
                    }
                    else
                    {
                        l_694 = &g_375;
                    }
                    g_75 = &l_683;
                    (*g_75) ^= ((((((*g_148) = ((((&p_5 != &p_4) || (p_5 > (safe_mod_func_uint16_t_u_u(p_5, l_697)))) || (**g_252)) > (**g_486))) <= p_5) > ((**g_486) & (-8L))) < 252UL) <= p_5);
                }
                else
                {
                    int *l_698 = &g_68;
                    l_698 = &l_680;
                    for (l_680 = 0; (l_680 <= 20); l_680 = safe_add_func_int8_t_s_s(l_680, 7))
                    {
                        if ((*l_670))
                            break;
                        g_75 = &l_680;
                    }
                }
                (*l_670) ^= 0xE6CF95B4L;
            }
        }
    }
    return &g_19;
}







static char * func_8(int p_9, unsigned short p_10, char * p_11)
{
    unsigned short l_398 = 0xDB67L;
    unsigned short ***l_400 = &g_254;
    int ***l_401 = &g_112;
    int ***l_402 = &g_112;
    int ***l_403 = &g_112;
    int ***l_404 = (void*)0;
    int ***l_405 = &g_112;
    int ***l_406 = &g_112;
    int ***l_407 = (void*)0;
    int ***l_408 = (void*)0;
    int ***l_409 = &g_112;
    int ***l_410 = &g_112;
    int ***l_411 = &g_112;
    int ***l_412 = &g_112;
    int **l_413 = &g_75;
    unsigned short l_425 = 0xBB60L;
    union U0 *l_460 = &g_222;
    unsigned char *l_465 = &g_377;
    unsigned char **l_464 = &l_465;
    unsigned l_500 = 6UL;
    short l_508 = 1L;
    char *l_513 = &g_53;
    const union U0 **l_534 = &g_188;
    unsigned short l_589 = 1UL;
    unsigned char l_621 = 0UL;
    int l_626 = 8L;
    int *l_627 = (void*)0;
    int *l_628 = &g_68;
    if ((((((**g_147) = l_398) || 65534UL) <= func_35(g_399, p_9, (l_400 != &g_254), ((*g_253) = ((&g_75 == (l_413 = &g_75)) >= p_10)))) <= p_10))
    {
        unsigned short l_424 = 0x78CDL;
        int *l_426 = &g_68;
        unsigned l_427 = 0xB39F1051L;
        char ***l_430 = &g_18;
        int *l_440 = (void*)0;
        const char *l_444 = &g_445;
        union U0 l_452 = {0UL};
        short l_453 = 0x5580L;
        unsigned short l_479 = 0x92A0L;
        unsigned l_506 = 4294967294UL;
        (*l_426) = (safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((func_35((safe_add_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u(((**g_147) > (*g_148)))), 0x89A4C346L)), (safe_unary_minus_func_uint16_t_u(l_424)), (0xB4L < func_26((*g_148), (*g_18), p_10, l_424)), p_9) ^ l_425), l_424)), (*g_148))), l_424));
        if (l_427)
        {
            unsigned char *l_437 = (void*)0;
            unsigned char *l_438 = &g_377;
            int **l_439 = &l_426;
            int l_441 = 0x77F6988AL;
            char **l_451 = &g_19;
            short **l_454 = &g_148;
            int l_461 = 7L;
            l_441 ^= (safe_add_func_int8_t_s_s(0xA0L, (((((l_430 == (void*)0) | p_10) && (((g_195 = (0L ^ ((p_10 | ((safe_lshift_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_u(((*l_438) = (safe_rshift_func_int8_t_s_s((**g_18), 1))), 6)) < ((l_440 = ((*l_439) = l_426)) != &g_68)) <= 0x2054FA1BL), 12)) & (*p_11))) < l_424))) & g_53) == 4294967295UL)) ^ 0x08L) || 0x3B49L)));
            if ((((**l_439) = (safe_lshift_func_uint8_t_u_u(0x6BL, (+g_138)))) & 0x21BBBA73L))
            {
                unsigned short l_450 = 0x9EC2L;
                (*l_426) = func_35(p_10, (((l_453 &= (g_125.f3 < func_12(&g_19, (l_444 = (void*)0), func_21(g_104), (0L ^ 0x3935E4DAL), func_12(l_451, p_11, l_452, g_377, p_9)))) | (*p_11)) || g_64), p_10, p_10);
            }
            else
            {
                int *l_455 = &l_441;
                l_454 = l_454;
                l_455 = &g_372;
                for (g_64 = 0; (g_64 <= 34); g_64 = safe_add_func_int8_t_s_s(g_64, 2))
                {
                    if (p_9)
                        break;
                    (*l_455) ^= 0x24457819L;
                    (*l_439) = (*l_439);
                    for (g_377 = 0; (g_377 < 55); g_377 = safe_add_func_uint16_t_u_u(g_377, 4))
                    {
                        return (*l_451);
                    }
                }
                (*g_187) = l_460;
            }
            l_461 = (*l_426);
        }
        else
        {
            int l_472 = 0x9B0FFDB3L;
            int l_478 = 0xFDFAB442L;
            unsigned l_505 = 0xED4D990BL;
            char *l_514 = &g_20;
            int *l_517 = &g_372;
            (*l_413) = l_440;
            l_426 = &g_68;
            for (g_375 = 23; (g_375 == 29); g_375++)
            {
                unsigned char ***l_466 = &l_464;
                int l_467 = (-1L);
                short *l_477 = &g_183;
                (*l_466) = l_464;
                if ((p_9 && ((p_10 < ((((l_467 &= p_10) || ((safe_add_func_uint16_t_u_u(((((((safe_lshift_func_int8_t_s_s(l_472, (safe_rshift_func_uint8_t_u_s(g_138, 2)))) ^ ((safe_lshift_func_int16_t_s_u(((*l_477) = l_472), 6)) || (l_478 = p_10))) | l_467) ^ l_479) | 255UL) || (*l_426)), (**g_147))) ^ 65529UL)) <= 0x12L) ^ (-1L))) || l_472)))
                {
                    const unsigned char **l_483 = (void*)0;
                    const unsigned char ***l_482 = &l_483;
                    int *l_484 = &g_372;
                    unsigned *l_501 = (void*)0;
                    unsigned *l_502 = (void*)0;
                    unsigned *l_503 = &g_55;
                    union U0 *l_507 = (void*)0;
                    (*l_484) ^= (((~(safe_add_func_int32_t_s_s(((*l_426) = p_9), (l_482 == (void*)0)))) || 65529UL) == (&l_413 != &g_112));
                    (*l_426) ^= ((p_9 >= 4294967294UL) || ((g_485 == &l_483) < ((void*)0 == &l_467)));
                    if ((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(p_9, 6)), ((*l_503) = (safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((func_26((p_9 & (*l_426)), p_11, ((*g_253) <= (safe_lshift_func_int16_t_s_u((((*g_253) <= l_467) && p_9), l_478))), g_183) < (*l_426)), 7)) | (-10L)), l_500))))))
                    {
                        int *l_504 = &g_68;
                        l_504 = &l_478;
                        (*g_187) = l_460;
                        return p_11;
                    }
                    else
                    {
                        if (l_505)
                            break;
                        if (l_506)
                            continue;
                        l_507 = &l_452;
                    }
                }
                else
                {
                    l_508 = ((*l_426) = 0x2B39E4F2L);
                    for (g_377 = 0; (g_377 >= 26); g_377 = safe_add_func_uint8_t_u_u(g_377, 3))
                    {
                        l_467 = (safe_add_func_uint16_t_u_u((((**l_430) != (l_513 = p_11)) && (func_26(p_9, l_514, ((safe_sub_func_int8_t_s_s(((*p_11) != (0x984BL | 0x8367L)), (*g_19))) || g_125.f3), p_10) || (-8L))), 1UL));
                        l_467 ^= l_478;
                        if (g_375)
                            continue;
                        l_467 ^= p_10;
                    }
                    l_517 = &l_467;
                }
                for (g_64 = 12; (g_64 != 20); g_64++)
                {
                    int l_520 = (-10L);
                    int *l_521 = &l_467;
                    l_520 = (l_467 &= p_9);
                    l_521 = l_426;
                }
            }
            (*l_426) ^= (safe_mod_func_uint8_t_u_u(250UL, (+(**g_18))));
        }
    }
    else
    {
        char l_538 = 0xA6L;
        unsigned char *l_556 = &g_377;
        int l_574 = 0xD33D4563L;
        int l_575 = 0L;
        int *l_586 = &g_375;
        unsigned short ***l_592 = &g_252;
        int *l_598 = &g_372;
        union U0 *l_608 = &g_222;
        short *l_615 = &g_183;
        for (g_62 = (-16); (g_62 < 23); g_62 = safe_add_func_int8_t_s_s(g_62, 1))
        {
            int *l_528 = &g_68;
            unsigned short **l_529 = &g_253;
            union U0 **l_564 = (void*)0;
            char **l_569 = &l_513;
            int l_576 = (-6L);
            for (g_375 = 0; (g_375 == (-5)); g_375--)
            {
                union U0 **l_532 = &l_460;
                const union U0 **l_533 = &g_188;
                int l_535 = (-1L);
                unsigned l_549 = 0x6BB16A59L;
                char *l_550 = &g_62;
                short l_555 = 1L;
                const int l_559 = 8L;
                l_528 = &g_68;
                g_372 |= ((*l_528) = ((l_529 == (g_254 = &g_253)) && 0L));
                l_535 &= (safe_rshift_func_uint16_t_u_u(((p_11 == (*g_18)) & (*l_528)), (l_532 == (l_534 = l_533))));
                for (g_55 = 22; (g_55 >= 21); g_55--)
                {
                    char *l_548 = (void*)0;
                    int l_551 = 0x3C73DD60L;
                    unsigned l_554 = 0x2EE8C7C8L;
                    unsigned char *l_558 = &g_377;
                    unsigned char **l_557 = &l_558;
                }
            }
            if (p_9)
            {
                unsigned char *l_563 = &g_377;
                union U0 l_570 = {4294967286UL};
                short *l_573 = &l_508;
                int *l_577 = &g_578;
                (*l_528) ^= p_9;
                (*l_577) |= func_35(l_538, ((safe_rshift_func_uint16_t_u_s((((**g_485) = l_563) != ((*l_464) = (*l_464))), 4)) & (((l_564 == (void*)0) || func_26((((safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((l_574 = (((*l_573) ^= func_12(l_569, (*g_18), l_570, ((safe_add_func_uint16_t_u_u(0x9770L, p_10)) != 0UL), p_10)) <= (*g_148))), g_55)), l_575)) | 4294967290UL) > 4294967291UL), (*l_569), g_138, l_576)) & p_10)), l_575, p_10);
                (*l_577) = (p_9 | (safe_rshift_func_uint8_t_u_s(0UL, 5)));
                (*l_577) = (safe_rshift_func_int16_t_s_u((p_10 & (*g_253)), (((*l_577) | (*l_528)) ^ ((*l_577) > 0xF742FC1BL))));
            }
            else
            {
                int *l_585 = &l_574;
                for (l_500 = 15; (l_500 >= 25); l_500 = safe_add_func_uint16_t_u_u(l_500, 1))
                {
                    (*l_413) = l_585;
                    (*l_413) = &l_576;
                    return p_11;
                }
                (*l_534) = (void*)0;
                l_586 = &l_576;
            }
            (*l_413) = &l_576;
        }
        if ((safe_sub_func_int16_t_s_s(l_589, ((*g_148) = (**g_147)))))
        {
            l_586 = &l_574;
            if (((*l_586) = ((***g_485) != 0xEDL)))
            {
                int *l_605 = (void*)0;
                for (g_195 = 0; (g_195 >= 32); g_195++)
                {
                    union U0 **l_601 = &l_460;
                    int l_604 = 0L;
                    (*l_598) ^= ((((*l_601) = &g_222) == (void*)0) && ((*p_11) = (*p_11)));
                    l_604 ^= (safe_sub_func_int32_t_s_s(((*l_586) &= p_10), g_222.f3));
                }
                (*l_413) = l_605;
            }
            else
            {
                return p_11;
            }
        }
        else
        {
            for (l_575 = 0; (l_575 > (-20)); --l_575)
            {
                (*l_413) = &g_578;
                (*g_187) = l_608;
            }
            (*l_598) = (*l_598);
        }
        l_621 ^= (safe_add_func_int32_t_s_s(0xB23AEB33L, (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((g_620 &= func_26(((**g_147) = (&l_574 == &g_578)), (*g_18), ((~(((*l_598) = ((*l_615) &= ((-10L) | ((-5L) >= (*p_11))))) & (**g_252))) != (safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((p_9 > 0xE05F31D6L), 0x56L)), p_9))), p_9)) != 65535UL), 3)), 11))));
        (*l_598) = (+(safe_mod_func_int32_t_s_s(p_10, ((*g_19) | (safe_rshift_func_uint8_t_u_u(0xA4L, l_626))))));
    }
    (*l_628) = (~6L);
    return (*g_18);
}







static int func_12(char ** p_13, const char * p_14, union U0 p_15, int p_16, unsigned char p_17)
{
    char **l_381 = (void*)0;
    char ***l_380 = &l_381;
    int l_382 = (-9L);
    int **l_396 = (void*)0;
    int **l_397 = &g_75;
    l_382 |= (&p_14 != ((*l_380) = (g_18 = &g_19)));
    for (p_17 = 29; (p_17 <= 5); p_17 = safe_sub_func_int16_t_s_s(p_17, 3))
    {
        unsigned char *l_385 = &g_377;
        int l_394 = 0xB5A596C8L;
        int *l_395 = &l_382;
        l_394 = (((*l_385) = g_20) | (safe_sub_func_int8_t_s_s((**g_18), ((-1L) ^ (((*g_253) = ((0x82160DFFL >= ((func_35(func_26(p_17, (*g_18), (p_15.f3 <= (((!(4L > (safe_mod_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u(((safe_sub_func_uint8_t_u_u((((p_15.f0 & p_16) && g_68) || l_382), 1UL)) != l_382), p_16)) == l_382) <= 8UL), l_382)))) && l_382) >= p_16)), p_17), p_16, g_183, p_17) | 0UL) < (**p_13))) > l_382)) | g_55)))));
        (*l_395) = l_382;
        return l_382;
    }
    (*l_397) = &l_382;
    return p_15.f0;
}







static union U0 func_21(int p_22)
{
    union U0 l_379 = {4UL};
    return l_379;
}







static short func_26(short p_27, char * p_28, int p_29, int p_30)
{
    int *l_376 = &g_375;
    l_376 = l_376;
    return (**g_147);
}







static short func_35(short p_36, int p_37, unsigned char p_38, unsigned short p_39)
{
    unsigned short l_363 = 0xC57BL;
    short *l_366 = &g_138;
    unsigned *l_367 = &g_55;
    unsigned char *l_368 = &g_195;
    unsigned short l_369 = 0x6998L;
    int *l_370 = &g_68;
    int *l_371 = &g_372;
    int *l_373 = (void*)0;
    int *l_374 = &g_375;
    (*l_374) &= (p_37 |= ((*l_371) = (p_36 & ((*l_370) = l_369))));
    return p_36;
}







static unsigned short func_40(char p_41, char p_42)
{
    unsigned l_164 = 0x870CA50AL;
    int l_181 = 1L;
    unsigned l_206 = 4294967288UL;
    union U0 * const l_221 = &g_222;
    union U0 * const *l_220 = &l_221;
    short **l_288 = &g_148;
    int *l_356 = &g_68;
    int **l_357 = &l_356;
    const int *l_362 = (void*)0;
    if ((safe_rshift_func_int16_t_s_s(l_164, 11)))
    {
        char **l_171 = &g_19;
        int l_177 = 0x10099628L;
        (*g_112) = (*g_112);
        for (g_62 = 0; (g_62 >= (-9)); --g_62)
        {
            short l_180 = 0xA903L;
            for (g_53 = 0; (g_53 != (-16)); g_53 = safe_sub_func_uint16_t_u_u(g_53, 4))
            {
                short l_174 = 0xDE96L;
                unsigned short *l_178 = &g_64;
                unsigned short **l_179 = &l_178;
                (**g_112) ^= (((((l_177 = (safe_mod_func_int16_t_s_s(((252UL >= ((-1L) | (&g_19 != l_171))) >= (safe_sub_func_int16_t_s_s((0xDD51B90AL | l_174), 0xC7AFL))), (safe_sub_func_int8_t_s_s(l_174, (l_177 && 0xAA81L)))))) == g_20) == l_174) | p_42) | 65528UL);
                (**g_112) &= (0x50L || (((*l_179) = l_178) == (void*)0));
                l_181 &= l_180;
            }
        }
    }
    else
    {
        unsigned l_182 = 4294967295UL;
        const union U0 *l_186 = &g_125;
        const union U0 **l_185 = &l_186;
        char l_190 = (-1L);
        int *l_197 = (void*)0;
        char * const *l_277 = &g_19;
        char * const ** const l_276 = &l_277;
        short **l_301 = &g_148;
        if (p_41)
        {
            (**g_112) ^= (g_53 ^ (g_183 = l_182));
        }
        else
        {
            short *l_202 = &g_183;
            unsigned short *l_210 = (void*)0;
            unsigned short **l_209 = &l_210;
            int l_231 = 0x495B1B18L;
            unsigned short l_291 = 0x93AFL;
            short * const *l_329 = &l_202;
            if (l_182)
            {
                const short l_184 = 0xE2A0L;
                unsigned short *l_287 = &g_125.f3;
                int *l_319 = &l_181;
                if (l_184)
                {
                    unsigned short l_189 = 1UL;
                    short *l_191 = &g_183;
                    unsigned char *l_194 = &g_195;
                    int l_196 = 0x905539D5L;
                    (*g_75) &= ((l_185 == g_187) | (l_189 & (((*l_191) |= (~((*g_148) & (l_190 & (l_184 != (p_41 ^ p_41)))))) | (safe_lshift_func_uint8_t_u_s((l_196 ^= ((*l_194) = 255UL)), 4)))));
                }
                else
                {
                    short *l_204 = &g_138;
                    int l_208 = 3L;
                    (*g_187) = (*l_185);
                    if (p_42)
                    {
                        (*g_112) = (*g_112);
                        (*g_112) = l_197;
                        (*g_112) = (void*)0;
                        (*g_112) = (*g_112);
                    }
                    else
                    {
                        short *l_203 = &g_138;
                        int l_205 = 0x8821C0A7L;
                        unsigned short *l_207 = &g_125.f3;
                        int *l_211 = &l_205;
                        union U0 *l_219 = &g_125;
                        union U0 * const *l_218 = &l_219;
                        (**g_112) &= (((*l_207) = ((safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((void*)0 == l_202), (~((p_42 = ((l_203 == ((*g_147) = l_204)) | g_195)) < (l_205 > 0x4CL))))), (l_206 >= (-3L)))) != p_41)) | l_208);
                        (*l_211) ^= ((*g_75) = (0x7F314E3BL | (l_209 == (void*)0)));
                        (*g_75) ^= (safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((*l_211) = (((safe_sub_func_int16_t_s_s(((l_220 = l_218) != (void*)0), (*g_148))) >= (**g_147)) <= ((((*l_202) = p_42) < 4L) & (safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(p_41, (&p_41 != &p_42))), (**g_147))), l_208))))), g_125.f3)), g_62));
                    }
                }
                if ((0xB5547533L || p_41))
                {
                    int *l_233 = &l_181;
                    int *l_235 = &l_231;
                    char l_237 = 0xF5L;
                    for (g_68 = 0; (g_68 <= 6); g_68 = safe_add_func_uint16_t_u_u(g_68, 4))
                    {
                        int *l_232 = &l_181;
                        (*l_232) |= l_231;
                    }
                    (*l_233) |= 1L;
                    (*l_235) &= (safe_unary_minus_func_int32_t_s((l_181 = (&g_55 != l_233))));
                    if ((((*g_147) = (*g_147)) != l_202))
                    {
                        int l_236 = 0L;
                        int l_238 = 0x5CED9F99L;
                        (*l_235) ^= l_236;
                        l_238 = (l_237 || 0x17B3L);
                    }
                    else
                    {
                        char l_239 = (-1L);
                        int ***l_240 = &g_112;
                        (*g_187) = (*g_187);
                        (*g_112) = (*g_112);
                        l_239 = 0x32CBD3E6L;
                        (*l_240) = &l_235;
                    }
                }
                else
                {
                    char l_245 = 1L;
                    int *l_246 = &l_231;
                    int *l_247 = &g_68;
                    char *l_248 = (void*)0;
                    unsigned l_249 = 1UL;
                    unsigned short ***l_255 = &l_209;
                    char *l_258 = (void*)0;
                    char *l_259 = (void*)0;
                    char *l_260 = &g_62;
                    if ((((safe_add_func_int32_t_s_s(((l_181 = (g_104 = (safe_lshift_func_uint8_t_u_s(p_42, (p_41 &= (((*l_247) ^= ((*l_246) = l_245)) > 0x6AD61A95L)))))) != l_249), (safe_mod_func_int8_t_s_s(((0xDF25L && ((*l_202) &= (g_252 == ((*l_255) = (g_254 = &g_253))))) && p_42), ((*l_260) = (safe_rshift_func_int16_t_s_s((((*g_148) ^= p_42) && (**g_147)), 11))))))) ^ 0xCF96F6E7L) > 0xCF63L))
                    {
                        (*l_246) &= l_184;
                        (*l_246) |= (l_184 == ((g_20 == (*l_247)) > 0L));
                        (*l_246) ^= ((safe_lshift_func_int8_t_s_u(0L, 5)) < (*l_247));
                        (*l_247) ^= l_184;
                    }
                    else
                    {
                        int *l_269 = (void*)0;
                        (*l_247) = (((safe_mod_func_uint32_t_u_u(0xFC98024EL, (l_184 || (safe_lshift_func_uint8_t_u_u(g_55, (l_164 > ((0x2C22L > p_42) >= (*g_253)))))))) | p_41) > p_42);
                        (*g_112) = l_269;
                    }
                    return l_231;
                }
                if ((((**g_147) <= (safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(p_42, ((g_104 ^ (~((void*)0 == l_276))) <= p_42))), 1L))) && (p_42 != g_64)))
                {
                    for (g_138 = (-24); (g_138 > 7); ++g_138)
                    {
                        int **l_280 = &l_197;
                        int **l_281 = &g_75;
                        int *l_282 = (void*)0;
                        int *l_283 = &l_181;
                        (*l_283) ^= (((*l_280) = &g_68) == ((*l_281) = (void*)0));
                        (*l_281) = (void*)0;
                    }
                }
                else
                {
                    int *l_284 = &g_68;
                    int l_315 = (-2L);
                    union U0 *l_316 = (void*)0;
                    (*l_284) |= p_41;
                    if ((safe_lshift_func_int16_t_s_s((~(((*l_209) = l_287) != (*g_252))), l_184)))
                    {
                        short ***l_289 = &g_147;
                        int **l_290 = &l_284;
                        (*l_289) = l_288;
                        (*l_290) = l_284;
                        (**l_290) = p_42;
                        l_291 = ((**l_290) ^= l_231);
                    }
                    else
                    {
                        int l_304 = 0L;
                        int **l_305 = &l_284;
                        int *l_312 = &g_68;
                        l_304 |= (safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(((((*l_284) <= p_42) ^ (safe_lshift_func_uint8_t_u_s(p_42, ((safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(((((*g_148) > (*g_253)) && ((l_301 == l_301) <= (**g_252))) ^ (safe_lshift_func_uint8_t_u_u(p_42, g_195))))), (**g_147))) <= 0x5B2CL)))) & 5L), g_104)), 4));
                        (*l_305) = l_197;
                        l_181 &= ((*l_312) ^= (safe_add_func_uint16_t_u_u(l_164, ((((void*)0 != &p_41) != ((*l_287) |= p_42)) < ((safe_add_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(p_42, p_41)), 0x9AEDL)) != 0xE813L)))));
                    }
                    (*l_185) = (void*)0;
                    for (l_206 = 0; (l_206 > 14); l_206 = safe_add_func_uint16_t_u_u(l_206, 9))
                    {
                        l_315 &= ((**g_147) || (-1L));
                        if (l_184)
                            break;
                        (*l_185) = l_316;
                        return l_206;
                    }
                }
                (*l_319) &= (safe_lshift_func_int16_t_s_s(((**g_147) = l_184), 10));
            }
            else
            {
                (*g_75) = (**g_112);
            }
            for (g_138 = 0; (g_138 >= 5); g_138++)
            {
                int **l_322 = &l_197;
                const int *l_331 = &l_231;
                (*l_322) = l_197;
                for (g_104 = 0; (g_104 == 8); g_104++)
                {
                    unsigned char l_325 = 250UL;
                    int *l_326 = &l_231;
                    const char l_344 = 0x46L;
                    unsigned char l_349 = 0UL;
                    (*l_326) = (l_291 != (p_42 && l_325));
                    if ((0xE1L <= ((l_291 || (((**g_252) >= (**g_147)) && (safe_mod_func_uint8_t_u_u((l_329 != &g_148), p_42)))) < p_41)))
                    {
                        unsigned l_330 = 4294967290UL;
                        const int **l_332 = &l_331;
                        const int *l_334 = &g_68;
                        const int **l_333 = &l_334;
                        char *l_343 = &l_190;
                        int ***l_345 = &l_322;
                        int ****l_346 = (void*)0;
                        int ****l_347 = &l_345;
                        if (l_330)
                            break;
                        (*l_333) = ((*l_332) = l_331);
                        if (p_41)
                            continue;
                        (*l_326) = (safe_add_func_uint16_t_u_u(((**g_252) = (((*l_331) < (p_42 <= ((*l_202) = (safe_add_func_int8_t_s_s(((*l_343) = (safe_rshift_func_uint16_t_u_u((p_42 >= (**g_252)), (safe_add_func_int32_t_s_s(0x2E554704L, l_231))))), l_344))))) & ((((*l_347) = l_345) == &g_112) | (*l_326)))), 0L));
                    }
                    else
                    {
                        int *l_348 = &l_231;
                        (*l_322) = l_348;
                        if ((*l_197))
                            break;
                        l_349 |= (*l_197);
                    }
                    g_68 = l_231;
                }
                (*l_322) = &g_68;
                l_231 = (**l_322);
            }
        }
        for (g_62 = 14; (g_62 == (-10)); g_62--)
        {
            int **l_352 = &g_75;
            short **l_353 = &g_148;
            short ***l_354 = &l_301;
            short ***l_355 = &l_288;
            (*l_352) = l_197;
            if (p_42)
                break;
            l_181 ^= (((*l_354) = l_353) == ((*l_355) = l_353));
        }
        g_68 ^= (-1L);
    }
    (*l_356) |= l_206;
    (*l_357) = &l_181;
    for (l_206 = 0; (l_206 >= 38); l_206++)
    {
        const int *l_360 = (void*)0;
        const int **l_361 = (void*)0;
        l_362 = l_360;
        (**l_357) = p_42;
    }
    return p_41;
}







static char ** func_43(char * const * p_44, char p_45, char * const p_46, const union U0 p_47)
{
    int *l_154 = &g_68;
    union U0 *l_155 = &g_125;
    union U0 **l_156 = &l_155;
    union U0 *l_158 = &g_125;
    union U0 **l_157 = &l_158;
    char **l_159 = &g_19;
    (*g_112) = l_154;
    (*l_157) = ((*l_156) = l_155);
    return l_159;
}







static char ** func_48(union U0 p_49, char p_50)
{
    unsigned *l_54 = &g_55;
    const unsigned l_60 = 1UL;
    char *l_61 = &g_62;
    unsigned short *l_63 = &g_64;
    char **l_69 = &l_61;
    int l_82 = 0x0F9CF50EL;
    int **l_111 = &g_75;
    if ((((*l_54) = p_50) || (g_53 >= (safe_mod_func_uint32_t_u_u(((*l_54) ^= (((2UL > ((*l_63) = ((safe_mod_func_int32_t_s_s(g_20, g_53)) || (l_60 == ((*l_61) = l_60))))) != (p_49.f0 || g_20)) && 0x4AL)), l_60)))))
    {
        int **l_65 = (void*)0;
        int *l_67 = &g_68;
        int **l_66 = &l_67;
        (*l_66) = (void*)0;
        l_69 = &g_19;
    }
    else
    {
        int *l_81 = &g_68;
        for (g_53 = 0; (g_53 >= 10); ++g_53)
        {
            int *l_74 = (void*)0;
            g_68 = (((*l_54) = (safe_rshift_func_uint16_t_u_u(p_49.f0, 3))) > 0x5E3087C3L);
            g_75 = l_74;
            for (p_50 = (-4); (p_50 <= 18); p_50 = safe_add_func_int32_t_s_s(p_50, 3))
            {
                short l_78 = 0x4522L;
                g_68 ^= (l_60 <= ((-1L) || l_78));
                if (p_49.f0)
                    break;
            }
            if (p_50)
                break;
        }
        (*l_81) = (p_49.f0 == (safe_lshift_func_uint16_t_u_s(g_55, 3)));
        l_82 |= l_60;
        l_82 = ((*l_81) = (0xB8L > (*l_81)));
    }
    if (g_53)
    {
        int *l_87 = &l_82;
        int l_118 = 6L;
        union U0 *l_124 = &g_125;
        if ((safe_sub_func_int32_t_s_s(p_50, ((safe_lshift_func_int16_t_s_s(((-1L) > (**g_18)), 10)) & ((*l_87) &= g_68)))))
        {
            unsigned short *l_98 = &g_64;
            unsigned short **l_99 = &l_63;
            char **l_108 = &l_61;
            int **l_109 = &g_75;
            if (((((9UL != ((((safe_add_func_uint8_t_u_u((p_50 != (safe_mod_func_uint8_t_u_u((*l_87), (safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((p_49.f3 && 0x4FL), l_60)), (+(l_98 == ((*l_99) = l_98)))))))), (safe_rshift_func_uint8_t_u_s(((((safe_sub_func_int16_t_s_s((*l_87), g_68)) & 1UL) >= p_49.f3) ^ 0x18D362EAL), p_49.f0)))) < p_50) >= g_104) < p_49.f0)) | 0x1EL) ^ p_49.f0) != g_53))
            {
                char **l_105 = &g_19;
                char ***l_106 = &l_69;
                (*l_106) = l_105;
            }
            else
            {
                char **l_107 = &l_61;
                return &g_19;
            }
            (*l_109) = &g_68;
            (*l_109) = &g_68;
        }
        else
        {
            unsigned short l_110 = 65528UL;
            int ***l_113 = (void*)0;
            int ***l_114 = (void*)0;
            int **l_116 = &g_75;
            int ***l_115 = &l_116;
            int l_117 = 0x506138F5L;
            char *l_121 = &g_62;
            int *l_122 = (void*)0;
            l_110 |= 0x0F3EF28BL;
            l_118 ^= (l_117 = ((*l_87) |= (l_110 != ((g_112 = l_111) != ((*l_115) = (void*)0)))));
            (*l_87) = (p_50 < (safe_lshift_func_int16_t_s_u(((((l_121 = (void*)0) == (*g_18)) >= (&l_110 != &g_64)) > 4294967295UL), 9)));
            (*l_111) = l_122;
        }
        (*g_112) = (void*)0;
        if ((safe_unary_minus_func_uint16_t_u(0xA4FAL)))
        {
            l_124 = l_124;
        }
        else
        {
            int *l_126 = &g_68;
            (*l_126) = ((*l_87) = 0xB3148BB4L);
            for (l_82 = (-30); (l_82 != 18); ++l_82)
            {
                for (g_68 = (-3); (g_68 > 7); ++g_68)
                {
                    int *l_131 = &l_118;
                    (*l_131) &= p_49.f0;
                }
            }
            for (g_55 = 17; (g_55 <= 23); g_55 = safe_add_func_uint8_t_u_u(g_55, 7))
            {
                union U0 **l_134 = (void*)0;
                union U0 **l_135 = &l_124;
                (*l_111) = (*g_112);
                (*l_135) = l_124;
                if ((*l_87))
                    continue;
            }
        }
        (*l_111) = &l_118;
    }
    else
    {
        unsigned l_136 = 0x25AE4031L;
        short *l_137 = &g_138;
        int *l_143 = &g_68;
        short **l_150 = &g_148;
        short ***l_149 = &l_150;
        (*l_143) = ((4L && ((*l_137) = ((**g_18) & ((g_53 <= p_50) ^ l_136)))) | ((safe_lshift_func_int16_t_s_u(((safe_mod_func_uint32_t_u_u(p_49.f0, g_104)) || g_104), 1)) & 0UL));
        for (g_62 = (-17); (g_62 > (-13)); g_62 = safe_add_func_int32_t_s_s(g_62, 5))
        {
            char **l_146 = &g_19;
            return l_146;
        }
        (*l_149) = (g_147 = g_147);
    }
    return &g_19;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_125.f3, "g_125.f3", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_222.f3, "g_222.f3", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_375, "g_375", print_hash_value);
    transparent_crc(g_377, "g_377", print_hash_value);
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_399, "g_399", print_hash_value);
    transparent_crc(g_445, "g_445", print_hash_value);
    transparent_crc(g_578, "g_578", print_hash_value);
    transparent_crc(g_620, "g_620", print_hash_value);
    transparent_crc(g_634, "g_634", print_hash_value);
    transparent_crc(g_650, "g_650", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
