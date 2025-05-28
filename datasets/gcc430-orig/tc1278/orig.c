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



static int g_5 = 0x00252604L;
static int *g_52 = (void*)0;
static int **g_51 = &g_52;
static unsigned short g_57 = 65535UL;
static int g_67 = 0xC71DA89AL;
static unsigned char g_80 = 0x05L;
static unsigned g_93 = 6UL;
static char g_102 = 0x52L;
static char g_104 = (-1L);
static char *g_103 = &g_104;
static volatile short g_133 = 0x926AL;
static unsigned short g_137 = 0x5591L;
static unsigned char *g_142 = &g_80;
static unsigned char **g_141 = &g_142;
static short **g_151 = (void*)0;
static short ***g_150 = &g_151;
static short *g_156 = (void*)0;
static unsigned short g_159 = 1UL;
static short g_181 = (-9L);
static unsigned g_252 = 0x8AB1072BL;
static unsigned *g_256 = &g_252;
static unsigned **g_255 = &g_256;
static const unsigned g_354 = 0x57CD9FBBL;
static const unsigned short *g_356 = &g_57;
static const unsigned short **g_355 = &g_356;
static unsigned short *g_358 = &g_57;
static unsigned short **g_357 = &g_358;
static unsigned char g_364 = 255UL;
static unsigned short g_395 = 0UL;
static volatile unsigned char g_457 = 0x59L;
static unsigned char *g_484 = (void*)0;
static volatile unsigned g_589 = 7UL;
static unsigned char g_611 = 0UL;
static unsigned short g_675 = 65529UL;
static volatile int **g_689 = (void*)0;
static volatile int ***g_688 = &g_689;



static const unsigned short func_1(void);
static short func_7(int * const p_8, int * p_9, int * p_10, int * p_11, int * p_12);
static int * func_13(int * const p_14, unsigned p_15, const int * p_16);
static int * func_17(unsigned p_18, int * p_19);
static const unsigned char func_29(unsigned p_30, const unsigned p_31);
static int func_34(const unsigned p_35);
static char func_36(char p_37, char * const p_38, char * const p_39);
static char * const func_41(char * p_42);
static char * func_43(unsigned p_44);
static unsigned short func_45(int ** p_46, int ** p_47, char * p_48, const unsigned short p_49, int * p_50);
static const unsigned short func_1(void)
{
    unsigned l_4 = 0x432A2768L;
    int *l_6 = &g_5;
    int *l_20 = &g_5;
    int **l_21 = &l_6;
    int l_534 = 0xA90ACF84L;
    int l_616 = 2L;
    char * const l_626 = &g_102;
    char *l_636 = (void*)0;
    const int l_652 = 0x252F9199L;
    int ***l_700 = &l_21;
    int ****l_699 = &l_700;
    int ***l_702 = &l_21;
    int ****l_701 = &l_702;
    (*l_6) = (safe_sub_func_int16_t_s_s((l_4 != g_5), g_5));
    if ((func_7(&g_5, func_13(func_17((&g_5 != l_20), ((*l_21) = l_6)), l_534, l_20), l_20, g_256, l_20) > g_354))
    {
        int *l_610 = &g_67;
        char *l_614 = (void*)0;
        char *l_615 = &g_102;
        int ** const *l_658 = &g_51;
        if ((((*l_615) = (func_29(((**l_21) && (((((*l_610) = ((*l_6) = (*l_6))) | (((*g_103) , g_611) , (g_104 && g_159))) <= ((safe_lshift_func_uint16_t_u_s(65532UL, l_4)) || 0xA0B1CDEBL)) < (*g_356))), g_354) > 0x8DCCDBCEL)) , l_616))
        {
            unsigned char l_625 = 1UL;
            char **l_639 = (void*)0;
            const unsigned char **l_644 = (void*)0;
            (*l_20) = 1L;
            if (((safe_sub_func_uint32_t_u_u(((*l_610) >= ((safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(func_36(l_625, l_615, l_626), (safe_div_func_int16_t_s_s(((!(safe_lshift_func_int8_t_s_u(((+(*l_610)) || l_625), (**g_141)))) || (**g_255)), (*l_6))))), (*l_610))), (*g_103))) > l_625)), (*l_20))) <= (*l_610)))
            {
                int l_635 = 0x400E71A1L;
                (*l_20) = ((safe_mod_func_uint32_t_u_u(((((**g_255) = (safe_rshift_func_int8_t_s_s(((*l_615) = l_635), ((*g_358) > func_36((*g_103), &g_104, func_41(l_636)))))) || ((*l_610) = (((*g_356) != 0x05DAL) || (**g_255)))) > 0xC1A9L), l_625)) >= (-1L));
            }
            else
            {
                char * const l_642 = (void*)0;
                unsigned *l_643 = &l_4;
                (*l_20) = ((((*l_643) = ((+0x8557L) , (l_625 ^ (safe_div_func_int8_t_s_s((*g_103), ((func_36(((&g_103 != l_639) == (safe_mod_func_uint32_t_u_u((**g_255), (*l_6)))), l_642, func_41(l_614)) , 6L) , (**g_141))))))) , l_644) == &g_142);
                (**l_21) = l_625;
            }
        }
        else
        {
            short l_647 = 0L;
            int l_659 = (-2L);
            unsigned short *l_664 = &g_159;
            (*l_20) = (safe_mod_func_int32_t_s_s((*l_6), (**g_255)));
            (**l_21) = (((l_647 , (((*g_256) <= (*g_256)) > (((*g_141) = func_43((**l_21))) == (void*)0))) == ((*l_20) != (*l_6))) <= (safe_lshift_func_int16_t_s_u(l_652, 12)));
            for (g_57 = (-1); (g_57 == 31); g_57 = safe_add_func_int8_t_s_s(g_57, 8))
            {
                char l_657 = 0x8EL;
                short *l_667 = &g_181;
                unsigned *l_668 = &l_4;
                unsigned char l_669 = 8UL;
                unsigned l_670 = 4UL;
                (*g_51) = func_13(func_13((*g_51), ((**g_255) = (l_659 = (safe_add_func_int8_t_s_s((l_657 > (&g_51 == (((*l_6) ^ (*l_6)) , l_658))), l_657)))), (**l_658)), l_657, &g_67);
                (*l_21) = func_13((((*l_668) = ((((safe_rshift_func_uint8_t_u_u(((*g_103) | ((*g_103) > (((l_664 == (void*)0) >= (l_626 != l_636)) > (((safe_sub_func_uint8_t_u_u((((*l_667) = 1L) != (*l_6)), (((*g_358) > 1UL) < (***l_658)))) , l_647) & 0xA893L)))), (***l_658))) > (**g_51)) , l_659) | (**l_21))) , (*g_51)), l_669, (*g_51));
                (*l_6) = l_670;
                if (l_647)
                    continue;
            }
            (**l_21) = ((safe_mod_func_uint32_t_u_u((((((l_659 >= (((((*g_356) ^ (**g_355)) && ((*l_610) = 1L)) , (g_675 == ((((safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(func_45(&g_52, &l_6, l_636, l_659, (*g_51)), (*g_103))), (*l_20))) < 8UL) >= l_659) < 0UL))) < g_181)) , (*l_6)) , g_137) , g_457) > l_647), (*l_6))) , (-1L));
        }
    }
    else
    {
        int *l_680 = (void*)0;
        int l_694 = 0x64B4F9E3L;
        (*g_51) = l_680;
        (*l_21) = func_13(l_680, func_34(((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u(((safe_lshift_func_int8_t_s_s((1L | (safe_rshift_func_uint16_t_u_s((**g_355), (!((*l_20) = ((void*)0 != g_688)))))), (*g_103))) , ((*g_256) = (**g_255))))), (safe_div_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(g_67, l_694)), l_694)))) >= (*g_103))), &l_694);
        (*l_20) = l_694;
    }
    (**l_21) = ((safe_lshift_func_uint16_t_u_u((0x767B1F62L == (((0UL ^ (safe_rshift_func_uint16_t_u_u(((***l_702) >= 0x271EL), 13))) < (***l_702)) >= 0x63936D8AL)), (*l_20))) < 0UL);
    return (***l_700);
}







static short func_7(int * const p_8, int * p_9, int * p_10, int * p_11, int * p_12)
{
    unsigned **l_599 = &g_256;
    int l_600 = 0x4B6D1AA8L;
    char *l_609 = &g_104;
    l_599 = &g_256;
    (*g_51) = (*g_51);
    (*p_9) = (safe_sub_func_uint16_t_u_u((**g_357), (((l_600 , ((func_36(l_600, func_41(((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s(l_600, 1L)), (safe_sub_func_uint32_t_u_u((func_36((*g_103), func_41(l_609), l_609) && l_600), l_600)))) , &g_104)), l_609) | l_600) , (**g_141))) == (*g_103)) || l_600)));
    return l_600;
}







static int * func_13(int * const p_14, unsigned p_15, const int * p_16)
{
    int l_541 = 7L;
    int l_542 = 0L;
    int *l_543 = &g_5;
    char * const l_564 = &g_102;
    unsigned short l_597 = 65534UL;
    (*g_51) = ((p_15 <= (((*l_543) = (safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(l_541, l_541)), ((((l_542 = (((**g_255) <= 1L) , 0xD2158A77L)) , g_364) , ((g_133 < ((l_542 & l_542) <= l_541)) <= l_542)) & l_541))), (*g_358)))) ^ l_541)) , l_543);
    for (g_364 = (-16); (g_364 < 25); g_364 = safe_add_func_int16_t_s_s(g_364, 9))
    {
        if ((**g_51))
            break;
    }
    if (((-2L) && ((*l_543) <= (*l_543))))
    {
        (*g_51) = (void*)0;
    }
    else
    {
        unsigned l_551 = 4294967287UL;
        unsigned short *l_552 = &g_137;
        char * const l_583 = (void*)0;
        int l_598 = 0xA4444F3FL;
        for (g_137 = 26; (g_137 == 16); g_137--)
        {
            int **l_548 = &g_52;
            char * const l_565 = &g_104;
            int *l_586 = &g_5;
            (*l_548) = p_14;
        }
        (*g_51) = (*g_51);
        l_598 = ((((*g_103) = ((safe_rshift_func_int8_t_s_u((g_589 != ((*g_103) > (safe_mod_func_uint8_t_u_u(p_15, (*l_543))))), 3)) && ((*l_543) = ((((p_15 ^ (0xFA70523BL != (((safe_add_func_int32_t_s_s(l_551, (safe_add_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(((p_15 < ((p_15 || (-8L)) | 0x7D92L)) , 1L))), (*g_103))))) , 0xB8A4L) == p_15))) < l_597) & (*l_543)) < (*l_543))))) <= 255UL) , (-8L));
    }
    return l_543;
}







static int * func_17(unsigned p_18, int * p_19)
{
    char l_22 = (-5L);
    char *l_23 = (void*)0;
    int l_24 = 0x753F3AC9L;
    char *l_40 = &l_22;
    int **l_55 = &g_52;
    unsigned short *l_56 = &g_57;
    char **l_171 = (void*)0;
    char **l_172 = &l_23;
    int *l_533 = &l_24;
    (*p_19) = (p_18 >= (l_24 = (l_22 & p_18)));
    (*l_533) = ((((*l_40) = (safe_sub_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s(((*p_19) = ((func_29((safe_mod_func_uint8_t_u_u((((*p_19) = func_34(((g_5 & ((func_36(((*l_40) = 0x9BL), func_41(((*l_172) = func_43((((g_5 < l_24) , ((func_45(g_51, &g_52, l_40, ((*l_56) = (safe_add_func_uint32_t_u_u((((void*)0 == l_55) , p_18), (-8L)))), (*l_55)) , g_5) , l_23)) == l_23)))), &g_102) , (**g_255)) , 0x61L)) < g_104))) , p_18), g_364)), g_252) && p_18) , (*p_19))), p_18)) & p_18), 0xD4C356D2L))) > p_18) > (-1L));
    return (*l_55);
}







static const unsigned char func_29(unsigned p_30, const unsigned p_31)
{
    short **l_365 = &g_156;
    int l_371 = (-1L);
    unsigned short **l_374 = &g_358;
    int *l_375 = (void*)0;
    char *l_382 = &g_102;
    char l_465 = 8L;
    int l_485 = 0L;
    int ***l_498 = &g_51;
    (*g_150) = l_365;
    if (((func_45(&g_52, &g_52, func_43(((0xBA9DA109L | (safe_mod_func_uint32_t_u_u(((safe_div_func_int32_t_s_s((((safe_unary_minus_func_uint8_t_u((((*g_103) = (((+0x97L) ^ p_30) | l_371)) & p_30))) || (((safe_mod_func_uint32_t_u_u((((((((*g_142) = (((0xA164C548L <= 0x82938612L) <= p_30) , 1UL)) != l_371) , l_374) != &g_358) , l_371) , (**g_255)), (**g_255))) ^ p_30) && (*g_103))) , p_31), 0x0C3E0D10L)) | g_364), p_31))) , (**g_255))), p_31, l_375) < (**g_255)) | p_30))
    {
        int *l_376 = &g_5;
        const unsigned short l_392 = 65528UL;
        short *l_399 = &g_181;
        unsigned **l_427 = &g_256;
        char * const l_456 = &g_104;
        char *l_488 = &g_102;
        (*g_51) = l_376;
        (**g_51) = p_31;
        for (g_252 = 0; (g_252 <= 34); g_252 = safe_add_func_uint32_t_u_u(g_252, 7))
        {
            int *l_379 = (void*)0;
            short l_394 = 0x0EE2L;
            (*g_51) = (void*)0;
            l_379 = (*g_51);
            (*l_376) = func_36(((((*g_142) | (safe_lshift_func_uint16_t_u_s((*g_356), 6))) , (g_181 = ((((*g_356) <= (g_137 = 65533UL)) , (-9L)) <= func_36((p_30 < 0x1DL), func_41(l_382), &g_104)))) , (*g_103)), l_382, l_382);
            for (g_104 = 29; (g_104 >= (-30)); g_104 = safe_sub_func_int8_t_s_s(g_104, 8))
            {
                char l_389 = 1L;
                int l_393 = 7L;
                int *l_396 = &g_67;
                (*l_396) = (g_395 = (((p_31 >= (p_31 >= (safe_rshift_func_uint8_t_u_s(((*g_142) = (0L ^ ((safe_rshift_func_int16_t_s_u((((l_389 = p_30) <= (0UL <= ((*l_376) = (((l_375 != (((p_31 ^ (safe_add_func_int16_t_s_s(((void*)0 == &g_104), (**g_357)))) >= p_30) , l_379)) < l_392) , (-2L))))) ^ p_30), l_393)) , l_394))), (*g_103))))) , 255UL) , p_30));
                (*l_396) = g_5;
                (*g_51) = (*g_51);
            }
        }
        if (((((65535UL >= (p_30 >= p_30)) || (*l_376)) & p_30) > ((safe_sub_func_uint16_t_u_u(((void*)0 != l_365), ((*l_399) = p_31))) & (p_31 || p_30))))
        {
            char * const l_413 = &g_102;
            int l_414 = 0x6CDBEE1BL;
            char *l_422 = &g_104;
            unsigned *l_428 = &g_252;
            unsigned short l_444 = 65535UL;
            unsigned l_455 = 0xD763D559L;
            unsigned short l_460 = 65535UL;
            for (g_102 = 0; (g_102 < 22); g_102 = safe_add_func_uint32_t_u_u(g_102, 8))
            {
                unsigned short l_406 = 0UL;
                int *l_411 = &g_5;
                unsigned char l_412 = 251UL;
                l_414 = func_34((p_31 , ((safe_add_func_uint8_t_u_u((p_31 , (safe_div_func_int16_t_s_s((*l_376), (*g_356)))), l_406)) || ((safe_sub_func_int8_t_s_s(((((func_36(((((*g_358) != p_31) == (safe_div_func_int8_t_s_s(((*g_103) = (+(((*g_51) == l_411) <= (*l_411)))), l_412))) >= 255UL), l_382, l_413) <= p_31) | p_30) , p_31) ^ (-2L)), (**g_141))) > p_30))));
                return l_414;
            }
            if (((*l_376) = (((*g_358) = 65527UL) && (((safe_div_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int8_t_s(func_34(((*l_428) = ((((safe_mod_func_uint8_t_u_u(((((*g_358) = p_31) , func_41(l_422)) != l_382), ((*g_103) = l_414))) , (safe_mod_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u(((*l_413) = p_31), 1)) <= p_31), (**g_255)))) , (void*)0) == l_427))))), 6)) , p_30), p_30)) || 0L) <= g_159))))
            {
                short l_440 = 1L;
                char * const l_442 = &g_104;
                g_67 = (*l_376);
                for (g_181 = 0; (g_181 < (-20)); g_181--)
                {
                    unsigned char l_441 = 0x6CL;
                    char l_443 = 0xF4L;
                    for (g_80 = 0; (g_80 < 21); g_80++)
                    {
                        short ***l_435 = (void*)0;
                        short ***l_436 = &l_365;
                        int l_437 = 0x79C5A7B4L;
                        (*l_376) = (((p_30 & ((*g_150) == ((*l_436) = l_365))) ^ ((l_414 | ((l_437 & (safe_add_func_uint16_t_u_u(((+0x5B34L) <= (l_440 | ((func_36(l_441, l_442, l_422) >= 1L) , 2UL))), l_443))) > 0x84DA04BAL)) > l_444)) && 1L);
                        (*l_376) = ((safe_rshift_func_int8_t_s_u(((*g_103) <= (*g_103)), 3)) <= (safe_lshift_func_int16_t_s_u(((((l_443 & (safe_mod_func_uint32_t_u_u(((p_30 , func_36(((*l_382) = (((safe_add_func_uint32_t_u_u(((**g_255) = l_437), (((safe_rshift_func_uint8_t_u_u(0UL, 7)) > l_455) >= (p_31 > (((*l_376) = l_443) <= (-3L)))))) && p_30) & 0UL)), &l_443, l_456)) , l_437), g_457))) < p_31) != (*g_142)) , (*l_376)), 12)));
                    }
                }
                if (l_414)
                {
                    l_375 = ((((((safe_sub_func_uint8_t_u_u(func_36(((*g_103) = ((*l_382) = ((p_30 && 255UL) && ((**g_141) < (*g_103))))), g_142, l_442), 0x25L)) < p_31) || p_30) > l_460) ^ (*l_376)) , &l_371);
                    (*l_375) = (((*l_399) = (safe_add_func_int32_t_s_s(0xFED5E11FL, (safe_sub_func_int16_t_s_s(p_30, (*g_358)))))) > (l_465 || ((*l_428) = p_31)));
                }
                else
                {
                    (*g_51) = (*g_51);
                }
                (*g_51) = (*g_51);
            }
            else
            {
                unsigned short l_468 = 65532UL;
                int l_514 = 1L;
                for (p_30 = 0; (p_30 <= 56); ++p_30)
                {
                    unsigned short l_479 = 0x7E4BL;
                    unsigned char **l_489 = &g_484;
                    l_468 = 0xC7CECDE7L;
                    (*l_376) = (((**g_357) = (safe_add_func_uint16_t_u_u((**g_357), (safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u(p_31, (((*g_256) = (safe_mod_func_uint16_t_u_u(l_479, (safe_lshift_func_uint16_t_u_u((**g_357), 13))))) , (p_30 > ((l_468 != ((*g_142) & func_36(((func_36((safe_sub_func_int8_t_s_s(((g_484 = (p_31 , l_422)) != (void*)0), l_485)), &g_104, l_456) <= 0L) & l_468), &g_104, l_422))) && l_479))))), (*l_376))), 2))))) < p_30);
                    (*l_376) = ((safe_rshift_func_uint8_t_u_u(((*g_142) = (g_457 , p_30)), ((*g_484) = l_468))) & (((func_36((func_36(((void*)0 != (*g_357)), func_41(l_488), &l_465) <= 0xAFL), &g_102, &l_465) , (void*)0) == l_489) , 0L));
                }
                for (g_67 = 5; (g_67 < (-29)); g_67--)
                {
                    char * const l_500 = &l_465;
                    int l_515 = 0xC3BD54E9L;
                    if (p_30)
                    {
                        short l_492 = 0L;
                        (*l_376) = func_36(((*l_376) = (l_492 || ((((1UL && (safe_unary_minus_func_uint16_t_u((safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s(p_30, (**g_141))), ((((l_498 != (void*)0) >= ((safe_unary_minus_func_uint16_t_u((*g_356))) != (p_30 == l_492))) , 4UL) >= 0xB2L)))))) == 3L) == 65530UL) , (*g_256)))), l_500, &g_102);
                        (**l_498) = l_376;
                    }
                    else
                    {
                        unsigned *l_507 = &g_252;
                        const int l_512 = (-1L);
                        char * const l_516 = &g_102;
                        int l_523 = 4L;
                        (*l_376) = p_31;
                        l_515 = ((*l_376) = (func_36((g_364 && ((((func_36((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(((((*l_376) = (safe_mod_func_uint32_t_u_u((func_34(((*l_507) = 8UL)) && (*g_256)), (l_514 = (safe_sub_func_int8_t_s_s((0x5DL | (safe_sub_func_uint16_t_u_u(p_31, (l_512 > (safe_unary_minus_func_uint8_t_u(l_468)))))), l_512)))))) , l_515) , 0x66L), 4)) && l_468), p_30)), &g_104, &g_102) >= p_31) , l_460) | 0x58740637L) && p_30)), &g_104, l_516) == 1L));
                        (*l_376) = (((*l_456) = ((*l_516) = (safe_unary_minus_func_uint8_t_u((safe_add_func_int32_t_s_s(((safe_unary_minus_func_uint16_t_u((safe_sub_func_int32_t_s_s((((void*)0 != &g_103) <= (**g_255)), (l_523 = p_30))))) == ((safe_add_func_uint16_t_u_u(4UL, (l_514 = ((*l_399) = ((((func_34((**g_255)) > (p_31 > (p_31 , l_444))) > 1UL) == l_444) , 1L))))) ^ p_31)), 0x1065875CL)))))) == 246UL);
                        (*g_51) = (*g_51);
                    }
                }
                (**l_498) = (*g_51);
            }
        }
        else
        {
            int l_530 = 0xF9E6BEA7L;
            l_530 = (safe_lshift_func_int16_t_s_s(((*l_376) = p_31), ((*g_358) , p_31)));
            for (g_137 = 0; (g_137 == 24); g_137 = safe_add_func_uint8_t_u_u(g_137, 7))
            {
                if (p_31)
                    break;
            }
            (**l_498) = (*g_51);
        }
    }
    else
    {
        return p_31;
    }
    return p_30;
}







static int func_34(const unsigned p_35)
{
    int *l_309 = &g_67;
    int **l_310 = &l_309;
    unsigned short *l_315 = &g_57;
    unsigned short **l_316 = &l_315;
    int l_318 = 1L;
    int *l_327 = &g_5;
    char * const l_328 = (void*)0;
    int l_347 = 0xF60FE787L;
    int l_363 = 0x561ADE35L;
    l_309 = (*g_51);
    (*l_310) = ((*g_51) = (void*)0);
    if (((g_93 , ((func_36((safe_lshift_func_uint16_t_u_u((((p_35 >= ((safe_mod_func_int8_t_s_s(((*g_103) | (((*l_316) = l_315) == (void*)0)), (safe_unary_minus_func_int32_t_s(l_318)))) <= ((safe_div_func_uint16_t_u_u(((**g_255) > (safe_mod_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((*g_103), (((safe_sub_func_uint32_t_u_u(((((*l_327) = p_35) >= 0x3A026879L) , (*l_327)), p_35)) ^ p_35) && g_93))) < 0UL), p_35))), p_35)) >= (*g_103)))) , (*l_327)) < p_35), g_252)), l_328, l_328) , 0x89F1C9D6L) == 4294967295UL)) | (-1L)))
    {
        int *l_329 = &g_67;
        (*l_310) = l_329;
        (*l_310) = (*g_51);
    }
    else
    {
        unsigned char l_330 = 0xB0L;
        char * const l_339 = &g_104;
        short *l_340 = &g_181;
        const unsigned *l_353 = &g_354;
        const unsigned **l_352 = &l_353;
        unsigned short ***l_359 = &g_357;
        unsigned short ***l_360 = &l_316;
        (*l_327) = (l_330 != (safe_add_func_int16_t_s_s(l_330, ((*l_340) = ((safe_add_func_int16_t_s_s(((((((**l_316) = (p_35 ^ g_104)) < (safe_add_func_uint16_t_u_u(l_330, (safe_mod_func_uint8_t_u_u(((1L > ((*g_142) = ((*g_141) != l_328))) || func_36((*g_103), l_328, l_339)), (*g_103)))))) , 0x47E2E718L) ^ (*g_256)) == g_252), p_35)) | p_35)))));
        (*l_310) = ((p_35 >= ((*l_340) = ((65532UL & (p_35 != ((((((safe_lshift_func_int16_t_s_u(9L, 15)) <= g_57) ^ (~((safe_mod_func_int32_t_s_s(((*l_327) = (p_35 , ((safe_add_func_int8_t_s_s(5L, (p_35 > 0x25A2L))) ^ (*l_327)))), p_35)) || 2L))) , l_347) & 0x4F29AA27L) , p_35))) ^ p_35))) , (*g_51));
        if ((((((*l_327) = (safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(l_330, (((g_252 , ((*l_352) = &p_35)) == &p_35) ^ (g_355 != ((*l_360) = ((*l_359) = g_357)))))), ((((*g_142) = (((safe_add_func_uint16_t_u_u(0xED67L, (~p_35))) && (l_363 = 0L)) & (*g_103))) || p_35) && (-1L))))) || p_35) , l_315) != (void*)0))
        {
            return p_35;
        }
        else
        {
            (*l_327) = ((*l_352) != l_309);
            return p_35;
        }
    }
    return p_35;
}







static char func_36(char p_37, char * const p_38, char * const p_39)
{
    char l_178 = 0x04L;
    int **l_179 = (void*)0;
    int **l_184 = &g_52;
    int *l_185 = &g_5;
    unsigned char **l_188 = &g_142;
    int **l_189 = &g_52;
    int l_190 = (-7L);
    unsigned char l_228 = 0x68L;
    const unsigned l_251 = 1UL;
    int *l_253 = &g_5;
    int l_272 = 1L;
    char l_307 = 4L;
    unsigned short l_308 = 8UL;
    for (p_37 = (-24); (p_37 > (-23)); p_37++)
    {
        short *l_180 = &g_181;
        int l_182 = 0x2970E7AEL;
        int ***l_183 = &l_179;
        unsigned short l_192 = 65535UL;
        int l_194 = 1L;
        unsigned char l_224 = 255UL;
    }
    l_308 = 2L;
    (*l_189) = (p_37 , (*g_51));
    return (*l_253);
}







static char * const func_41(char * p_42)
{
    char * const l_173 = (void*)0;
    (*g_51) = (*g_51);
    return l_173;
}







static char * func_43(unsigned p_44)
{
    unsigned char l_162 = 0xECL;
    int l_163 = 1L;
    int **l_166 = &g_52;
    char *l_167 = &g_104;
    char **l_168 = &g_103;
    unsigned short *l_169 = &g_159;
    int *l_170 = &l_163;
    for (g_159 = 0; (g_159 >= 49); g_159 = safe_add_func_int16_t_s_s(g_159, 5))
    {
        l_163 = l_162;
        (*g_51) = (void*)0;
        for (g_93 = 0; (g_93 >= 45); g_93 = safe_add_func_int32_t_s_s(g_93, 1))
        {
            (*g_51) = &l_163;
        }
    }
    (*l_166) = (func_45(l_166, l_166, l_167, ((*l_169) = func_45(&g_52, &g_52, ((*l_168) = l_167), (+p_44), (*l_166))), l_170) , (void*)0);
    return &g_102;
}







static unsigned short func_45(int ** p_46, int ** p_47, char * p_48, const unsigned short p_49, int * p_50)
{
    int * const l_64 = &g_5;
    short l_65 = 7L;
    int *l_66 = &g_67;
    int * const l_144 = (void*)0;
    if (((*l_66) = (((safe_rshift_func_uint8_t_u_u(((g_5 < (((1UL || g_5) ^ (g_5 , p_49)) , g_57)) < (safe_add_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((l_64 != (*p_47)), ((p_49 <= g_5) , g_57))) , g_57), l_65))), 5)) == 0xA0L) , (*l_64))))
    {
        (*l_66) = ((safe_rshift_func_int16_t_s_s((*l_66), 4)) && (safe_lshift_func_uint16_t_u_s((*l_66), 9)));
    }
    else
    {
        (*l_66) = (*l_66);
        (*g_51) = ((*l_64) , (*g_51));
    }
    if (g_57)
    {
        short l_74 = 0x4382L;
        int l_75 = 0x11D020A5L;
        int l_117 = 0L;
        int l_128 = 0xBB19D543L;
        int l_140 = 0xAF38EC91L;
        int **l_145 = &l_66;
        (*g_51) = (*g_51);
        for (g_57 = 29; (g_57 < 51); g_57++)
        {
            int l_81 = 0xE7D42A80L;
            int *l_106 = &l_75;
            unsigned short *l_136 = &g_137;
            short *l_143 = &l_74;
            l_75 = l_74;
            for (l_74 = (-18); (l_74 < (-24)); --l_74)
            {
                unsigned char *l_78 = (void*)0;
                int l_79 = 0x54D9846CL;
            }
            (*g_51) = (*g_51);
            (*l_106) = (((((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u((g_133 ^ (safe_sub_func_uint8_t_u_u((((*l_66) , (g_5 >= (*l_106))) ^ ((*l_136) = p_49)), ((**g_141) = (((safe_mod_func_int16_t_s_s(((*l_143) = ((((p_49 != ((((((*l_66) , l_140) , g_141) != (void*)0) , (void*)0) == (void*)0)) <= 65535UL) <= l_75) || g_5)), l_140)) < g_93) && 0xE7L))))), p_49)), p_49)) & (*l_66)) <= p_49) <= p_49) <= 1UL);
        }
        (*l_145) = l_144;
    }
    else
    {
        short * const l_147 = (void*)0;
        short * const *l_146 = &l_147;
        short * const **l_148 = (void*)0;
        short * const **l_149 = &l_146;
        short *l_153 = (void*)0;
        short **l_152 = &l_153;
        short *l_155 = &l_65;
        short **l_154 = &l_155;
        short *l_157 = &l_65;
        int l_158 = 0xC33642C4L;
        (*l_149) = ((**g_141) , l_146);
        g_159 = ((*l_66) = ((!(p_49 , (**g_141))) , (((*l_157) = ((g_150 == (void*)0) != ((g_156 = ((*l_154) = ((*l_152) = &l_65))) == (p_49 , &l_65)))) == (l_158 > (p_49 || p_49)))));
    }
    return g_57;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_395, "g_395", print_hash_value);
    transparent_crc(g_457, "g_457", print_hash_value);
    transparent_crc(g_589, "g_589", print_hash_value);
    transparent_crc(g_611, "g_611", print_hash_value);
    transparent_crc(g_675, "g_675", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
