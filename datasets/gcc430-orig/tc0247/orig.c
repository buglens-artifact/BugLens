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
   unsigned f0 : 16;
   signed f1 : 5;
   unsigned f2 : 19;
};


static const unsigned g_9 = 0UL;
static char g_35 = 0L;
static int g_41 = 5L;
static int * const *g_80 = (void*)0;
static struct S0 g_122 = {200,4,366};
static int g_133 = 0x660493B4L;
static struct S0 *g_198 = &g_122;
static struct S0 **g_197 = &g_198;
static struct S0 ***g_196 = &g_197;
static unsigned g_227 = 0xDC8A146DL;
static struct S0 g_228 = {239,-3,82};
static unsigned char g_242 = 0UL;
static int *g_267 = &g_133;
static short g_324 = (-1L);
static int g_350 = 0xF28E239AL;
static int g_456 = 0xD4268E1FL;
static int * const *g_547 = &g_267;
static int g_594 = (-1L);
static unsigned g_682 = 1UL;



static unsigned func_1(void);
static int * const func_2(int * p_3);
static int * func_4(const unsigned char p_5, struct S0 p_6, int p_7, short p_8);
static struct S0 func_10(unsigned char p_11, int p_12, unsigned short p_13, short p_14);
static unsigned short func_44(int p_45, short p_46, struct S0 p_47, int * p_48, int p_49);
static int func_50(int * p_51, int * const p_52, int * p_53);
static int * func_54(short p_55, int * p_56, char p_57);
static short func_58(int * p_59);
static int * func_60(short p_61, unsigned short p_62, int p_63, const int p_64);
static char func_68(char p_69, unsigned p_70, int p_71, int p_72);
static unsigned func_1(void)
{
    unsigned short l_15 = 65533UL;
    int **l_612 = (void*)0;
    int **l_613 = &g_267;
    unsigned l_618 = 6UL;
    struct S0 l_644 = {225,2,642};
    unsigned short l_650 = 65535UL;
    int *l_652 = &g_41;
    unsigned char l_679 = 0xF9L;
    struct S0 * const *l_681 = &g_198;
    struct S0 * const **l_680 = &l_681;
    struct S0 l_734 = {204,-3,53};
    struct S0 l_748 = {1,-0,381};
    unsigned short l_752 = 1UL;
    int *l_755 = &g_456;
    char l_793 = 0x08L;
    unsigned l_797 = 0x764BBA5FL;
    (*l_613) = func_2(func_4(g_9, func_10(l_15, l_15, l_15, g_9), l_15, g_227));
    if ((((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((((~(*g_267)) >= l_618) & g_456), (g_133 , (safe_sub_func_uint16_t_u_u(g_456, (**l_613)))))) >= ((g_242 == ((**l_613) ^ g_228.f2)) || (**l_613))), 8)) , g_228.f1) && 0x67204177L))
    {
        unsigned l_625 = 0x8EF296DAL;
        unsigned short l_628 = 65530UL;
        short l_636 = 0x2461L;
        struct S0 l_651 = {55,-0,69};
        short l_653 = 0x9FD1L;
        int * const **l_664 = (void*)0;
        int *l_678 = &g_594;
        struct S0 l_689 = {129,-3,705};
        short l_729 = 0x7612L;
        if (((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(l_625, 5)), (l_625 || (&g_80 == ((safe_add_func_int32_t_s_s(l_625, (l_628 | (safe_div_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((**l_613), (safe_mod_func_int16_t_s_s((((g_242 <= g_122.f1) != 1UL) >= (-1L)), g_228.f2)))) , (**l_613)), (**l_613)))))) , &g_80))))) || (**l_613)))
        {
            int *l_635 = &g_594;
            (*l_613) = l_635;
            l_636 ^= (*l_635);
            (**g_547) &= (l_628 != g_9);
        }
        else
        {
            short l_639 = 0L;
            int *l_649 = &g_350;
            struct S0 l_669 = {7,-2,528};
            int **l_673 = (void*)0;
            const struct S0 l_690 = {84,-4,101};
            struct S0 ***l_715 = &g_197;
            (*l_649) = ((g_228.f0 ^ (safe_sub_func_int16_t_s_s((g_242 | (l_639 , 1L)), ((safe_add_func_int32_t_s_s((((safe_lshift_func_int8_t_s_u((func_44(l_639, g_41, l_644, &g_350, (safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(l_653, 7)), g_350))) ^ 0x7F1B5419L), 6)) > 0xBE8BL) | l_653), (*g_267))) <= (*g_267))))) >= g_228.f1);
            if ((l_628 , ((safe_mod_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(((**g_547) != (((g_456 < (safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(g_133, g_228.f0)), l_628))) <= (safe_mul_func_int8_t_s_s((&g_80 != l_664), g_350))) | 0x3F49L)), g_9)), 0xE7433D29L)) | (*l_649))))
            {
                int *l_670 = &g_456;
                (*l_670) ^= (g_227 , (((255UL ^ g_9) == ((&l_649 == (void*)0) , (*g_267))) && ((l_649 == ((safe_mul_func_int16_t_s_s(((func_44((*g_267), l_653, l_669, &g_133, g_324) , (*l_649)) | (*l_649)), 0x8F75L)) , l_670)) >= 0L)));
                for (l_618 = 19; (l_618 > 30); l_618 = safe_add_func_int8_t_s_s(l_618, 8))
                {
                    unsigned short l_674 = 0xB095L;
                    struct S0 l_675 = {215,4,669};
                    struct S0 **l_676 = &g_198;
                    l_673 = &l_670;
                    (*g_196) = ((l_674 , l_675) , l_676);
                    (*l_670) |= 0xA45A9656L;
                }
            }
            else
            {
                int l_677 = (-1L);
                struct S0 *l_691 = &l_669;
                (**g_547) = (-6L);
                (*l_649) = l_677;
                (**l_613) &= ((0x7EL < g_122.f0) >= g_228.f1);
                (*l_691) = l_690;
            }
            (**g_196) = &l_689;
            for (l_636 = 0; (l_636 <= 1); l_636 = safe_add_func_uint16_t_u_u(l_636, 1))
            {
                char l_706 = 4L;
                unsigned l_727 = 0x00970D83L;
                (*l_649) ^= (safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(l_706, (safe_add_func_int8_t_s_s(l_706, ((*l_678) , (0L && 0xD9L)))))), ((safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((safe_div_func_int8_t_s_s(((void*)0 == l_715), (*l_652))) >= (*l_678)), g_122.f2)), g_242)) , l_706))) || (*g_267)), g_228.f2)) < g_122.f0) & g_682), g_324)), g_594)), 7));
                (***g_196) = (***l_715);
                for (l_628 = 5; (l_628 != 13); l_628 = safe_add_func_int8_t_s_s(l_628, 4))
                {
                    int l_728 = 3L;
                    for (l_15 = 0; (l_15 <= 55); ++l_15)
                    {
                        int *l_722 = &g_594;
                        g_267 = (*g_547);
                        (*l_613) = l_722;
                        return g_324;
                    }
                    (*l_613) = func_4((((**g_197) , 0x5250A472L) , 0x8CL), (***g_196), g_456, l_706);
                }
                (*l_678) = (*g_267);
            }
        }
        l_729 = (-2L);
        l_734 = l_651;
        (*l_613) = (*l_613);
    }
    else
    {
        int l_745 = (-1L);
        struct S0 l_751 = {56,4,460};
        g_456 |= (((safe_div_func_int8_t_s_s((((safe_div_func_int32_t_s_s((0x6D79ECB4L < (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u(0xA64AL, func_68(g_9, g_228.f1, (safe_add_func_int8_t_s_s(((l_745 != g_41) < (safe_mod_func_uint8_t_u_u((l_748 , (safe_div_func_int32_t_s_s((**g_547), ((((l_751 , l_751.f1) != g_594) | g_324) , 0x440D906DL)))), (**l_613)))), g_41)), l_752))), g_228.f1))), l_745)) && g_228.f2) < (-1L)), 1L)) && g_594) <= g_133);
    }
    (*l_613) = (void*)0;
    for (g_456 = 0; (g_456 != 18); g_456++)
    {
        unsigned l_758 = 0UL;
        struct S0 l_761 = {177,-1,645};
        unsigned l_772 = 8UL;
        int *l_813 = &g_456;
        (*l_613) = l_755;
        for (g_350 = (-24); (g_350 == (-5)); g_350 = safe_add_func_uint8_t_u_u(g_350, 1))
        {
            unsigned char l_766 = 255UL;
            int *l_767 = &g_133;
            struct S0 l_779 = {254,-2,638};
            struct S0 **l_782 = &g_198;
            int l_812 = 0xC9D46951L;
            if ((**l_613))
                break;
            (*l_613) = l_767;
            l_761.f1 ^= (*g_267);
            for (l_758 = 0; (l_758 < 14); l_758 = safe_add_func_int32_t_s_s(l_758, 4))
            {
                unsigned l_792 = 0x0A15F8A0L;
                struct S0 l_796 = {119,3,452};
                g_122 = g_122;
                if ((**l_613))
                    break;
                (*g_196) = l_782;
                for (g_594 = 0; (g_594 >= 23); ++g_594)
                {
                    struct S0 **l_791 = &g_198;
                    int l_794 = 0x95A07949L;
                    if ((*g_267))
                        break;
                    if ((safe_sub_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u(g_227, 6)) , (65527UL & ((*g_196) != l_791))) || (func_68(l_761.f0, l_792, l_761.f0, l_793) ^ (*l_767))), l_792)) == l_794) < 0xBC5623F2L), l_792)))
                    {
                        struct S0 l_795 = {249,-1,290};
                        l_796 = l_795;
                    }
                    else
                    {
                        int **l_798 = &l_652;
                        struct S0 l_801 = {120,0,30};
                        (*l_798) = (*g_547);
                        (*l_798) = &l_794;
                        (*l_798) = l_813;
                    }
                }
            }
        }
        l_761.f1 |= (g_228.f0 & g_350);
    }
    return (*l_755);
}







static int * const func_2(int * p_3)
{
    (*p_3) ^= 0x702D9FACL;
    return p_3;
}







static int * func_4(const unsigned char p_5, struct S0 p_6, int p_7, short p_8)
{
    int l_476 = (-1L);
    int *l_486 = &g_456;
    const struct S0 l_507 = {23,0,318};
    int * const l_519 = &g_350;
    int **l_554 = &g_267;
    int ***l_553 = &l_554;
    const unsigned l_604 = 8UL;
    (*l_486) |= ((0xFC69L >= ((((safe_lshift_func_int8_t_s_u((l_476 != l_476), func_68((+(g_350 == g_228.f1)), l_476, (*g_267), l_476))) & g_122.f0) | l_476) >= p_8)) || 0L);
    for (g_227 = 0; (g_227 == 58); g_227 = safe_add_func_uint8_t_u_u(g_227, 4))
    {
        int l_501 = 0x908DB7D8L;
        struct S0 l_502 = {165,0,47};
        int **l_508 = &g_267;
        struct S0 ***l_537 = &g_197;
        int l_556 = 0x6A57F8FCL;
        unsigned char l_568 = 0xC0L;
        unsigned l_575 = 0xC43A6841L;
        int *l_584 = &l_501;
        g_350 &= ((((safe_rshift_func_uint16_t_u_s(p_6.f0, 13)) , (safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(func_68((safe_lshift_func_int8_t_s_u(((safe_div_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(l_501, 1)), l_501)) <= ((l_502 , ((((safe_sub_func_uint32_t_u_u((((safe_sub_func_int16_t_s_s(((func_50(&g_41, &g_41, &l_476) , l_507) , p_7), g_242)) | (*l_486)) ^ g_456), (-1L))) ^ g_228.f2) < g_228.f1) , (*g_267))) & p_5)), 6)), p_8, p_6.f1, p_6.f0), g_133)), 0x26D5L))) > p_6.f1) != 0x3BA56D87L);
        (*l_508) = &g_133;
    }
    (**l_554) &= 0L;
    for (g_594 = 0; (g_594 != 16); ++g_594)
    {
        int **l_611 = &l_486;
        (**l_553) = (**l_553);
        (*l_611) = (g_228.f1 , (*g_547));
        return &g_41;
    }
    return (**l_553);
}







static struct S0 func_10(unsigned char p_11, int p_12, unsigned short p_13, short p_14)
{
    unsigned short l_20 = 2UL;
    int *l_40 = &g_41;
    struct S0 l_423 = {167,3,139};
    int *l_455 = &g_456;
    g_35 &= (safe_add_func_int32_t_s_s(((g_9 , l_20) == ((safe_lshift_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((0x2B5FL <= p_12), g_9)) != (!(safe_sub_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u(g_9, (2L & ((safe_sub_func_int8_t_s_s(p_13, ((safe_lshift_func_uint16_t_u_u((g_9 == 0x76L), 1)) & 4294967292UL))) && 0x6E2CL)))), 3)) || l_20), g_9)))), l_20)) == l_20)), 4294967294UL));
    (*l_455) ^= (((g_35 , (safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((l_20 == l_20), ((l_40 != l_40) >= 0x38L))), (safe_mod_func_int16_t_s_s(p_11, func_44(func_50(func_54(func_58(func_60((*l_40), (g_35 , (*l_40)), g_9, (*l_40))), l_40, g_9), &g_350, l_40), g_227, l_423, &g_350, g_9)))))) > 8UL) > p_13);
    for (p_11 = 0; (p_11 > 45); p_11 = safe_add_func_uint16_t_u_u(p_11, 7))
    {
        int l_459 = 0xAB99F26EL;
        struct S0 l_460 = {246,-0,679};
        (*g_267) = ((func_44(l_459, g_350, l_460, (((safe_sub_func_int16_t_s_s((g_35 < 6L), (func_68(g_133, (safe_div_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((safe_add_func_int16_t_s_s(0L, ((safe_lshift_func_int16_t_s_s(g_133, 11)) || 0x00L))))), g_456)) , l_460.f0), 9UL)), (*g_267), p_11) | g_9))) , l_459) , &g_456), l_460.f0) < 4294967295UL) , p_12);
        if ((*g_267))
            break;
        l_460 = g_228;
    }
    return l_423;
}







static unsigned short func_44(int p_45, short p_46, struct S0 p_47, int * p_48, int p_49)
{
    struct S0 *l_424 = &g_122;
    int l_427 = (-1L);
    (*p_48) = (((void*)0 != l_424) && ((safe_mul_func_uint16_t_u_u(g_350, (p_49 && 0x49FEL))) == l_427));
    for (g_35 = (-17); (g_35 > 26); ++g_35)
    {
        int l_432 = (-1L);
        int **l_447 = &g_267;
        int ***l_446 = &l_447;
        struct S0 **l_448 = &l_424;
        const unsigned l_449 = 0UL;
        struct S0 l_454 = {151,4,500};
    }
    return p_47.f2;
}







static int func_50(int * p_51, int * const p_52, int * p_53)
{
    const char l_413 = 1L;
    unsigned short l_416 = 65533UL;
    (*p_51) ^= ((l_413 >= g_227) && (safe_rshift_func_uint16_t_u_s((l_416 != ((safe_lshift_func_int16_t_s_u(l_416, 15)) | (safe_rshift_func_int16_t_s_s(l_416, 14)))), (safe_add_func_uint8_t_u_u(0xE7L, g_122.f2)))));
    return (*g_267);
}







static int * func_54(short p_55, int * p_56, char p_57)
{
    const unsigned l_304 = 0UL;
    int *l_317 = &g_133;
    int l_318 = 0xB1E4FE67L;
    unsigned l_337 = 0x0321B15BL;
    const unsigned l_367 = 4294967290UL;
    struct S0 l_376 = {119,-3,219};
    int **l_393 = &g_267;
    int ***l_392 = &l_393;
    char l_397 = 0x84L;
    short l_404 = 1L;
    for (g_133 = 0; (g_133 == 23); g_133 = safe_add_func_int32_t_s_s(g_133, 9))
    {
        struct S0 l_305 = {124,-2,5};
        int *l_325 = &l_318;
        int *l_339 = &g_133;
        for (p_57 = (-18); (p_57 <= (-30)); p_57 = safe_sub_func_uint16_t_u_u(p_57, 6))
        {
            unsigned short l_303 = 65535UL;
            int *l_388 = &l_318;
            (*p_56) = (safe_add_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(l_303, func_68(g_133, ((void*)0 == (**g_196)), (l_304 <= p_57), ((l_305 , p_57) , (safe_sub_func_int8_t_s_s(g_242, 7UL)))))), l_304)), g_228.f0)) , g_35) != 0xDBD97F58L), 9L));
        }
        if ((l_392 == &g_80))
        {
            struct S0 l_394 = {163,-1,251};
            (*g_198) = l_394;
        }
        else
        {
            int l_398 = 1L;
            (***g_196) = (***g_196);
            if (func_68((safe_sub_func_int16_t_s_s((***l_392), ((g_122.f0 || (l_397 , (l_398 | p_55))) == 0x534FA682L))), g_228.f1, ((g_122.f1 && (safe_mul_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(((+((*l_317) , 0x66L)) && g_35), 5)) > g_41), (***l_392)))) | (-2L)), (*g_267)))
            {
                (*l_393) = p_56;
            }
            else
            {
                short l_403 = (-5L);
                (*l_325) &= l_398;
                l_325 = func_60(((g_133 == 8UL) , 0xA395L), l_403, (*l_339), (1UL < (*g_267)));
            }
            (**l_392) = func_60(l_404, (***l_392), (safe_sub_func_int16_t_s_s(g_41, (g_122.f1 < (safe_add_func_int32_t_s_s((l_398 == ((void*)0 != &g_80)), 6UL))))), (((safe_lshift_func_uint16_t_u_u(((((((safe_mod_func_uint8_t_u_u(p_57, 8L)) , &l_376) == (void*)0) , (*p_56)) & (-1L)) & 4294967295UL), p_57)) || g_122.f0) >= l_398));
        }
        (*g_197) = &l_376;
    }
    (**l_392) = p_56;
    return (*l_393);
}







static short func_58(int * p_59)
{
    unsigned char l_110 = 0UL;
    const int *l_116 = &g_41;
    int l_150 = 1L;
    struct S0 *l_161 = (void*)0;
    unsigned l_174 = 0x2E7E9FB3L;
    int l_177 = (-1L);
    const int **l_201 = &l_116;
    unsigned char l_271 = 0UL;
    int l_289 = 0xB76FD236L;
    unsigned short l_290 = 0xEE29L;
    if (((((func_68(l_110, l_110, l_110, (l_110 < l_110)) , (safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(0x313DL, 13)), g_9))) , ((((g_35 , 1UL) | l_110) , &p_59) != &p_59)) , l_110) > g_35))
    {
        const int *l_115 = &g_41;
        struct S0 l_164 = {9,0,579};
        unsigned l_263 = 0x0282D235L;
        const unsigned l_266 = 4294967295UL;
        l_116 = l_115;
        for (g_35 = (-15); (g_35 != (-20)); g_35 = safe_sub_func_uint32_t_u_u(g_35, 4))
        {
            struct S0 *l_121 = &g_122;
            int l_134 = 0xF6D1638BL;
            int ** const *l_157 = (void*)0;
            int *l_180 = &l_134;
            int l_218 = 1L;
            char l_258 = 0x9AL;
            if (((&g_80 != &g_80) == (safe_mod_func_uint8_t_u_u(g_35, (*l_115)))))
            {
                struct S0 **l_123 = &l_121;
                (*l_123) = l_121;
            }
            else
            {
                int l_135 = 0xFD930511L;
                struct S0 * const *l_138 = &l_121;
                int *l_170 = &g_133;
                if ((8UL >= ((safe_lshift_func_uint16_t_u_s(1UL, (*l_116))) && 0x9BL)))
                {
                    unsigned l_130 = 4294967286UL;
                    int **l_131 = (void*)0;
                    int *l_132 = &g_133;
                    for (l_110 = 0; (l_110 <= 5); ++l_110)
                    {
                        int *l_128 = &g_41;
                        int **l_129 = &l_128;
                        (*l_129) = l_128;
                        (*l_129) = p_59;
                        return l_130;
                    }
                    (*l_132) |= (((*l_116) , l_131) != l_131);
                }
                else
                {
                    if (func_68((*l_116), g_122.f0, ((g_133 ^ (-10L)) || (*l_115)), g_122.f2))
                    {
                        return l_134;
                    }
                    else
                    {
                        return l_135;
                    }
                }
                if (((safe_div_func_int16_t_s_s((l_135 | (((func_68((g_133 || g_41), g_9, (0x9AC8L | (l_138 == (void*)0)), (*p_59)) <= g_122.f2) < 0x34A7E5ECL) >= l_135)), g_133)) || l_135))
                {
                    unsigned short l_141 = 65531UL;
                    struct S0 l_151 = {197,4,530};
                    struct S0 **l_156 = &l_121;
                    if ((safe_mul_func_uint8_t_u_u(g_35, func_68(l_135, g_122.f0, (!func_68(l_141, ((safe_add_func_int16_t_s_s((g_41 , (g_122.f0 >= (*l_115))), ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(g_133, 8)), (1L | g_122.f2))), 0)) != 0x5E08C8ABL))) , 4294967295UL), (*p_59), l_134)), l_150))))
                    {
                        return (*l_116);
                    }
                    else
                    {
                        unsigned short l_158 = 0x1BBFL;
                        int *l_159 = &l_134;
                        int **l_160 = &l_159;
                        (**l_138) = l_151;
                        (*p_59) &= (~(safe_add_func_uint32_t_u_u(0x14B5F725L, 0x53C78930L)));
                        (*l_159) &= (func_68(((g_9 == ((((&l_115 == (void*)0) || ((func_68((~(((safe_lshift_func_uint16_t_u_s(((0x81L == g_9) | ((l_151 , (void*)0) == l_156)), 13)) , l_157) == &g_80)), l_158, l_158, (*p_59)) , g_122) , 0xA6B3F764L)) , p_59) == &g_133)) , (*l_116)), l_151.f2, l_135, l_135) | 1UL);
                        (*l_160) = (void*)0;
                    }
                    if ((l_161 != (void*)0))
                    {
                        if (g_133)
                            break;
                        (*p_59) = (safe_lshift_func_int8_t_s_u(0xB3L, 4));
                        g_122 = (**l_156);
                    }
                    else
                    {
                        unsigned char l_167 = 0xD6L;
                        int *l_169 = &g_133;
                        int **l_168 = &l_169;
                        (**l_156) = l_164;
                        (**l_156) = (**l_156);
                        (*l_168) = func_60(l_141, (safe_lshift_func_uint8_t_u_s(0x27L, 0)), l_167, l_135);
                    }
                    (*p_59) = (*l_116);
                }
                else
                {
                    const unsigned l_173 = 0xFE22FAA9L;
                    l_170 = &g_133;
                    (*l_170) &= (safe_add_func_uint16_t_u_u(65528UL, ((*l_121) , ((*p_59) > l_173))));
                }
            }
            if (((*l_116) , l_174))
            {
                int *l_181 = (void*)0;
                struct S0 l_187 = {116,4,77};
                for (g_133 = 0; (g_133 != 18); g_133++)
                {
                    int l_184 = 0x698F7593L;
                    l_177 = (*p_59);
                    for (g_41 = (-6); (g_41 >= 11); g_41 = safe_add_func_uint32_t_u_u(g_41, 1))
                    {
                        const int **l_185 = (void*)0;
                        const int **l_186 = &l_115;
                        struct S0 * const *l_188 = &l_121;
                        struct S0 * const **l_189 = &l_188;
                        (*l_186) = ((g_35 , ((l_180 == l_181) , (safe_mul_func_uint8_t_u_u(0x7CL, l_184)))) , ((*l_180) , l_115));
                        (*l_186) = (*l_186);
                        (*l_180) ^= (g_41 > (l_187 , 0UL));
                        (*l_189) = l_188;
                    }
                    for (l_150 = 20; (l_150 < (-15)); --l_150)
                    {
                        (*l_180) &= (((safe_mul_func_uint8_t_u_u(func_68(g_9, (*l_116), g_133, (safe_sub_func_uint8_t_u_u(((void*)0 == g_196), ((void*)0 != &l_115)))), (g_9 & l_164.f2))) ^ 0x63L) , (*p_59));
                        (***g_196) = l_164;
                    }
                    if (g_35)
                        continue;
                }
                (*l_180) = (safe_sub_func_uint8_t_u_u((((g_80 == l_201) ^ ((*l_115) && (safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s(g_122.f1, 1L)), (**l_201))))) || (+(safe_mul_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u(((((~(safe_rshift_func_uint16_t_u_s((**l_201), 14))) > (g_133 || (g_35 , 0xA7L))) != g_41) != 4294967295UL), (*l_116))) != g_122.f2) , g_133), (*l_115))))), g_122.f1));
                (*l_201) = func_60((*l_115), (**l_201), (*l_115), ((safe_sub_func_uint16_t_u_u(0UL, (((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u(l_218, g_122.f1)), (1UL == (safe_sub_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((~g_35), (safe_div_func_int32_t_s_s((*p_59), (*p_59))))), (*l_116))) , g_227), 0x24L))))) < (*l_116)) , 0UL))) , g_133));
            }
            else
            {
                short l_237 = 0xCF50L;
                g_228 = (**g_197);
                (*l_201) = func_60((*l_180), (((-8L) || (safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((!((safe_mod_func_uint32_t_u_u((((safe_mul_func_int32_t_s_s((0x6F7CL == g_228.f0), ((!l_237) , (g_9 == (g_41 | g_228.f2))))) , &l_121) == (void*)0), 1UL)) >= (*l_116))), (*l_115))), 65535UL))) , g_228.f1), (*l_116), l_237);
                return l_237;
            }
            if ((*p_59))
                continue;
            (*l_180) = (safe_div_func_int32_t_s_s((safe_sub_func_int32_t_s_s(g_242, (safe_div_func_int32_t_s_s((((safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((*l_115))), (safe_lshift_func_uint16_t_u_u((((**l_201) , g_122.f2) | (safe_sub_func_uint32_t_u_u((safe_div_func_int16_t_s_s((**l_201), g_122.f1)), (safe_mul_func_uint8_t_u_u((*l_115), (safe_sub_func_uint16_t_u_u((*l_116), (g_228.f1 , (*l_116))))))))), (*l_115))))) || (*l_115)) , l_258), (*p_59))))), (*p_59)));
        }
        g_267 = func_60((((*l_115) >= ((safe_add_func_uint16_t_u_u(((l_161 == (((l_263 != (0UL || g_35)) , (safe_rshift_func_int16_t_s_s((*l_115), 1))) , (*g_197))) , (**l_201)), (**l_201))) <= 0L)) && g_122.f1), (*l_115), g_242, l_266);
    }
    else
    {
        const int l_270 = 0x358170A9L;
        short l_288 = 0x95DDL;
        (*p_59) = (((((safe_mul_func_uint16_t_u_u(0x9764L, (+g_122.f0))) && (((l_270 , (0x7C0AL >= ((*g_198) , l_270))) | g_35) >= (*l_116))) != ((g_133 , l_271) < l_270)) <= g_122.f2) > 0xB95996FEL);
        (*l_201) = func_60((+(0x7684L < ((*l_116) , (safe_mul_func_int8_t_s_s(g_227, ((safe_sub_func_uint16_t_u_u((0x44L < (((safe_mod_func_uint16_t_u_u(((**l_201) && (safe_div_func_uint8_t_u_u(((+(safe_mul_func_uint16_t_u_u((**l_201), l_270))) , func_68((safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s((g_242 & func_68((safe_sub_func_uint32_t_u_u((+0x1CF87870L), 0x10FF72CBL)), (**l_201), (*g_267), (*g_267))), l_288)), 0x1FL)), g_35, (*g_267), l_270)), l_270))), 0x616DL)) >= 0x9A248FCCL) , l_288)), 0UL)) >= l_289)))))), g_242, l_288, g_9);
    }
    l_177 |= (*p_59);
    (*l_201) = (void*)0;
    (*l_201) = ((g_133 , func_68(g_122.f0, g_227, (*p_59), (*p_59))) , (*l_201));
    return l_290;
}







static int * func_60(short p_61, unsigned short p_62, int p_63, const int p_64)
{
    unsigned l_67 = 7UL;
    const short l_77 = 0x52F5L;
    short l_78 = 0xE444L;
    int *l_79 = &g_41;
    char l_94 = 3L;
    int l_95 = (-2L);
    (*l_79) = ((p_64 < ((safe_div_func_int32_t_s_s(((l_67 || p_64) && (!func_68((((p_64 , ((0x9AL <= ((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((g_41 < (g_35 , (((-3L) > (((p_63 | 0x44CAL) == (-1L)) ^ p_62)) , g_35))), l_77)), 0xA5L)) != 0x20E6L)) & l_78)) , l_79) != l_79), p_61, (*l_79), p_64))), p_62)) , g_9)) , 0xE54B5300L);
    for (g_41 = (-5); (g_41 >= 11); g_41++)
    {
        int l_107 = 1L;
        int **l_108 = (void*)0;
        int **l_109 = &l_79;
        l_95 |= (p_64 , l_94);
        l_107 |= (safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((*l_79) && (((((safe_unary_minus_func_uint32_t_u(0x44A2B868L)) || ((safe_mod_func_uint32_t_u_u((g_35 , ((safe_div_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u((g_9 , (0xFBL > (((g_35 >= ((void*)0 == &g_80)) && (*l_79)) , g_35))), 4)) | (*l_79)), 1UL)) , g_41)), (*l_79))) ^ g_35)) > 0xCEF6D7B3L) <= g_41) , p_64)), 1UL)), g_9));
        (*l_109) = &l_95;
        (*l_79) = (**l_109);
    }
    return &g_41;
}







static char func_68(char p_69, unsigned p_70, int p_71, int p_72)
{
    int * const **l_81 = &g_80;
    int *l_89 = &g_41;
    (*l_81) = g_80;
    if (p_72)
    {
        int l_87 = 0xE668196EL;
        int **l_90 = &l_89;
        for (p_72 = (-25); (p_72 > (-15)); p_72++)
        {
            int *l_88 = &g_41;
            (*l_88) |= (((safe_unary_minus_func_uint16_t_u(p_69)) != (~g_9)) , (g_35 | (safe_sub_func_uint16_t_u_u(g_9, l_87))));
            p_71 |= g_41;
        }
        (*l_90) = l_89;
    }
    else
    {
        int *l_91 = &g_41;
        l_91 = &g_41;
    }
    return p_71;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_122.f0, "g_122.f0", print_hash_value);
    transparent_crc(g_122.f1, "g_122.f1", print_hash_value);
    transparent_crc(g_122.f2, "g_122.f2", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_228.f0, "g_228.f0", print_hash_value);
    transparent_crc(g_228.f1, "g_228.f1", print_hash_value);
    transparent_crc(g_228.f2, "g_228.f2", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_324, "g_324", print_hash_value);
    transparent_crc(g_350, "g_350", print_hash_value);
    transparent_crc(g_456, "g_456", print_hash_value);
    transparent_crc(g_594, "g_594", print_hash_value);
    transparent_crc(g_682, "g_682", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
