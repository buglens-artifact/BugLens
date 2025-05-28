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



static unsigned char g_11 = 0x70L;
static int g_27 = (-1L);
static int *g_26 = &g_27;
static int *g_51 = &g_27;
static unsigned g_128 = 0x30FE8BACL;
static int g_176 = (-8L);
static unsigned g_197 = 1UL;
static const int g_220 = 0x9071E436L;
static int **g_371 = (void*)0;
static int *** const g_370 = &g_371;
static int g_566 = 0x9706343AL;
static int g_608 = 1L;
static int *g_607 = &g_608;
static unsigned short g_612 = 9UL;
static unsigned char g_681 = 0UL;
static const int *g_815 = &g_608;
static const char g_912 = (-1L);



static char func_1(void);
static int * func_2(int * p_3);
static int * func_4(int p_5, short p_6, char p_7, unsigned p_8);
static unsigned func_9(unsigned p_10);
static unsigned func_12(int p_13, short p_14);
static char func_20(const unsigned short p_21, int * p_22, short p_23, int p_24, int * p_25);
static short func_28(int p_29, int p_30, short p_31);
static short func_36(const int p_37, const int * p_38);
static char func_41(int p_42, const int * p_43, int * p_44, unsigned char p_45);
static const int * func_46(unsigned char p_47, int * p_48);
static char func_1(void)
{
    short l_15 = 0x3358L;
    int **l_917 = (void*)0;
    int **l_918 = &g_51;
    (*l_918) = func_2(func_4(((func_9(((!(+g_11)) ^ ((func_12(l_15, l_15) > (!l_15)) & (((g_11 || (safe_mod_func_int8_t_s_s(g_197, l_15))) >= g_176) , l_15)))) , 0L) | g_220), l_15, g_220, l_15));
    (**l_918) = (*g_51);
    return g_27;
}







static int * func_2(int * p_3)
{
    int *l_916 = &g_608;
    (*g_607) = (*g_815);
    return l_916;
}







static int * func_4(int p_5, short p_6, char p_7, unsigned p_8)
{
    int ***l_557 = &g_371;
    short l_615 = 0xCB3DL;
    const int *l_635 = &g_220;
    int l_636 = 5L;
    int *l_668 = &g_27;
    int *l_669 = &g_566;
    unsigned l_688 = 0x8C005219L;
    const unsigned l_700 = 0xC25C0CCEL;
    char l_732 = 0L;
    const unsigned short l_799 = 0x63D3L;
    unsigned l_814 = 0x5E33FEA3L;
    unsigned l_844 = 0x00CB263CL;
    const int *l_851 = &g_220;
    unsigned l_861 = 1UL;
    int *l_884 = &l_636;
    int *l_915 = &g_27;
    for (p_5 = 0; (p_5 <= (-24)); p_5 = safe_sub_func_uint16_t_u_u(p_5, 3))
    {
        int *l_554 = &g_27;
        (*l_554) = ((p_7 , p_7) || 0xCAL);
    }
    for (g_197 = 0; (g_197 >= 29); g_197 = safe_add_func_int32_t_s_s(g_197, 2))
    {
        int *l_565 = &g_566;
        int *l_571 = &g_566;
        int ***l_586 = &g_371;
        for (p_7 = 0; (p_7 >= 23); p_7 = safe_add_func_uint32_t_u_u(p_7, 9))
        {
            unsigned short l_577 = 0x9304L;
            int *l_591 = &g_566;
            const int **l_592 = (void*)0;
            const int *l_594 = &g_566;
            const int **l_593 = &l_594;
            unsigned l_599 = 4294967294UL;
            unsigned l_626 = 4294967295UL;
            char l_634 = 0x64L;
            for (g_27 = 1; (g_27 > 4); g_27++)
            {
                int *l_564 = &g_27;
                l_565 = (p_7 , l_564);
                for (g_176 = 0; (g_176 <= (-13)); g_176 = safe_sub_func_uint16_t_u_u(g_176, 9))
                {
                    int **l_572 = &g_51;
                    (*l_572) = ((safe_rshift_func_uint8_t_u_s(p_5, 2)) , l_571);
                    (**l_572) = (safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s(l_577, p_5)), 9));
                    (**l_572) = ((~(safe_unary_minus_func_int8_t_s(((g_11 || p_7) , (safe_lshift_func_uint16_t_u_u(g_27, ((void*)0 != &l_564))))))) & g_566);
                }
                for (g_566 = 0; (g_566 <= 0); g_566 = safe_add_func_int32_t_s_s(g_566, 8))
                {
                    unsigned l_589 = 0xB92CAF59L;
                    int **l_590 = &l_571;
                    l_589 = (!((*l_565) , ((safe_unary_minus_func_uint32_t_u(p_8)) != (safe_sub_func_uint16_t_u_u((0x8E73L & (p_5 || ((g_197 , (g_566 || (l_557 != l_586))) , (safe_mul_func_uint16_t_u_u((*l_571), p_5))))), 0UL)))));
                    (*l_586) = l_590;
                }
                if (p_5)
                    continue;
            }
            (*l_593) = func_46(l_577, ((*l_565) , l_591));
        }
    }
    for (g_608 = 0; (g_608 >= 7); ++g_608)
    {
        unsigned l_674 = 1UL;
        const int *l_682 = &g_220;
        int *l_683 = &g_608;
        l_669 = ((0x84L == ((safe_div_func_int32_t_s_s(p_6, p_8)) , g_612)) , (void*)0);
        (*l_668) = 0x0B8788B7L;
    }
    if ((safe_sub_func_int32_t_s_s((((l_557 != (((~(0xA8CEA9DDL != 0x70388B12L)) | p_7) , ((g_176 , ((((((safe_sub_func_uint32_t_u_u(p_7, p_5)) , (*l_635)) >= 0x41CAD40FL) , g_128) != g_11) && 0x3DD4F4CFL)) , (void*)0))) > g_128) <= 0x3BL), (*l_635))))
    {
        unsigned l_689 = 0xD83875E0L;
        int *l_690 = &g_27;
        int l_695 = 5L;
        int *l_731 = &g_608;
        if (((l_689 && (l_690 != ((+(safe_mul_func_int8_t_s_s(g_612, ((l_690 != (void*)0) , (0x3BF1L >= (p_6 || (safe_mul_func_uint16_t_u_u((&g_607 == ((g_220 ^ l_695) , &l_690)), g_27)))))))) , &g_27))) ^ 1UL))
        {
            unsigned l_701 = 0xE828D17BL;
            const int *l_709 = &g_608;
            int l_721 = 0x63259015L;
            int ***l_755 = &g_371;
            int l_772 = 6L;
            (*l_668) = (safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(p_5, 0xA3L)), l_700));
            if ((*l_690))
            {
                int l_706 = 0x71E435FCL;
                int *l_722 = &g_566;
                int *l_733 = (void*)0;
                if ((0UL > l_701))
                {
                    for (l_689 = 10; (l_689 > 23); l_689 = safe_add_func_uint32_t_u_u(l_689, 7))
                    {
                        (*g_607) = ((*l_690) > 0xCD45L);
                    }
                }
                else
                {
                    int l_710 = 0x3D6AC72CL;
                    int *l_723 = &g_27;
                    (*l_557) = ((safe_lshift_func_uint16_t_u_u(g_197, p_6)) , (void*)0);
                    (*l_668) = (+p_5);
                    (*l_668) = (l_706 || (((safe_sub_func_uint16_t_u_u(g_566, (p_7 , ((safe_lshift_func_uint16_t_u_u((((+p_7) , (void*)0) != (void*)0), g_681)) < g_27)))) || l_706) != p_6));
                    if (((void*)0 == (*g_370)))
                    {
                        char l_715 = 0L;
                        int ***l_720 = &g_371;
                        short l_728 = 0xD8EFL;
                        l_721 = ((safe_div_func_uint32_t_u_u(0xA2558F56L, l_715)) ^ (safe_sub_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((p_7 , p_6), p_8)), ((*l_690) == (((l_720 == (g_681 , (void*)0)) ^ g_27) <= g_612)))));
                        l_723 = l_722;
                        (*l_723) = (((p_8 < (g_27 , g_566)) , &l_709) == (void*)0);
                    }
                    else
                    {
                        return l_733;
                    }
                }
                for (g_11 = 0; (g_11 > 44); g_11 = safe_add_func_uint16_t_u_u(g_11, 3))
                {
                    short l_740 = (-10L);
                    if (p_6)
                        break;
                    (*l_722) = (g_27 , (*g_607));
                }
            }
            else
            {
                short l_749 = 0xDBDDL;
                int **l_758 = (void*)0;
                short l_773 = 0xB670L;
                for (p_7 = 0; (p_7 == (-6)); --p_7)
                {
                    int **l_743 = (void*)0;
                    int **l_744 = &l_731;
                    (*l_744) = (void*)0;
                }
                if ((*g_607))
                {
                    int ***l_754 = &g_371;
                    (*g_607) = (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(l_749, (~((safe_add_func_uint8_t_u_u((l_754 == l_755), g_681)) <= (0x363AL < (((((p_8 > (l_758 == l_758)) < p_8) != g_27) , 0x73L) != g_681)))))), 5));
                    for (l_636 = 0; (l_636 > (-2)); l_636 = safe_sub_func_uint32_t_u_u(l_636, 6))
                    {
                        const int **l_761 = &l_635;
                        (*l_761) = func_46(g_612, &l_721);
                    }
                    l_668 = l_690;
                }
                else
                {
                    int * const l_764 = &g_608;
                    for (g_566 = 0; (g_566 != (-6)); g_566 = safe_sub_func_int16_t_s_s(g_566, 2))
                    {
                        int **l_765 = &l_668;
                        (*l_765) = l_764;
                    }
                    (*l_668) = (((safe_mod_func_int32_t_s_s((*g_607), (p_6 , g_27))) && ((g_11 || (safe_add_func_uint32_t_u_u((((safe_div_func_int16_t_s_s(g_197, g_612)) == p_5) >= l_772), l_773))) != (-9L))) == p_8);
                }
                l_731 = (void*)0;
            }
        }
        else
        {
            unsigned char l_774 = 0xD0L;
            int l_775 = 0L;
            l_775 = l_774;
            for (g_681 = 0; (g_681 < 51); ++g_681)
            {
                int **l_778 = &g_26;
                if (((g_612 , &g_51) != l_778))
                {
                    int ***l_781 = &l_778;
                    unsigned l_782 = 0x7ACE1FE2L;
                    (*l_668) = ((*g_607) & l_774);
                    for (l_615 = 0; (l_615 <= 19); l_615 = safe_add_func_uint16_t_u_u(l_615, 5))
                    {
                        if (p_7)
                            break;
                        (*l_690) = ((&g_371 == &l_778) , ((((*g_607) >= (l_781 == (p_7 , (l_782 , l_557)))) , 0x7FL) < (((safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(p_6, p_6)), 1)) | 0xC028FA47L) > (*l_635))));
                    }
                }
                else
                {
                    return l_690;
                }
                (*l_778) = l_731;
                (*l_668) = (((((*l_690) ^ ((((safe_mul_func_uint8_t_u_u((~((g_220 , (*l_731)) && g_128)), (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(p_5, (-9L))), ((((safe_mul_func_int8_t_s_s(g_220, p_5)) > 65535UL) & p_5) , 253UL))), l_775)))) | g_681) , (*g_607)) < (*l_635))) ^ p_5) & l_799) == p_8);
            }
        }
        (*g_607) = (*g_607);
    }
    else
    {
        int *l_811 = (void*)0;
        int l_816 = 0xD84C481EL;
        int **l_832 = &l_811;
        const int *l_853 = &g_27;
        l_816 = (0x15FBL != (safe_div_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s((-2L), (safe_unary_minus_func_uint16_t_u((safe_lshift_func_int8_t_s_u(((l_811 == &g_608) <= ((safe_mul_func_uint8_t_u_u(p_8, ((l_814 <= ((void*)0 != g_815)) , (g_608 == (*g_815))))) < g_11)), (*l_668))))))), 0xCBL)), 0x0BL)));
        (*l_668) = (safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_s(g_566, 9)) , g_220) <= p_8), 0UL)), p_8));
        (*l_832) = (void*)0;
        for (l_814 = (-12); (l_814 < 16); l_814 = safe_add_func_uint32_t_u_u(l_814, 1))
        {
            int *l_841 = (void*)0;
            const int * const *l_843 = &g_815;
            const int * const **l_842 = &l_843;
            int *l_852 = &l_636;
            int *l_855 = &l_816;
            int *l_871 = &l_636;
            int * const l_885 = &l_636;
            int l_913 = (-10L);
            (*l_832) = (void*)0;
            if (p_8)
                continue;
            for (g_128 = 0; (g_128 != 9); g_128++)
            {
                int l_845 = 0x254CB22AL;
                int **l_881 = &l_871;
                const int **l_914 = &l_853;
                (*g_607) = (*g_815);
                if ((p_8 >= l_845))
                {
                    int l_850 = 0xBDD2BEBBL;
                    const int *l_860 = &l_845;
                    if ((((safe_add_func_uint8_t_u_u(g_220, 0x85L)) != g_681) , p_5))
                    {
                        l_853 = (*l_843);
                    }
                    else
                    {
                        int *l_854 = &l_845;
                        (*l_854) = ((&g_566 != ((1L != ((void*)0 == &l_845)) , l_854)) >= p_6);
                        return &g_27;
                    }
                    for (l_844 = 0; (l_844 == 45); l_844 = safe_add_func_uint32_t_u_u(l_844, 7))
                    {
                        const int *l_858 = &l_636;
                        const int **l_859 = &l_853;
                        (*l_859) = l_858;
                        l_860 = (**l_842);
                    }
                    (*l_668) = ((*l_855) != (safe_add_func_uint16_t_u_u(0UL, (*l_860))));
                    if (p_6)
                        break;
                }
                else
                {
                    unsigned short l_880 = 0UL;
                    int **l_882 = &l_871;
                    int *l_883 = &g_27;
                    int l_893 = 0L;
                    if (((safe_mul_func_uint16_t_u_u((p_6 != (safe_mul_func_int8_t_s_s((*l_851), 0x9FL))), 5L)) , (safe_div_func_int16_t_s_s(g_176, p_6))))
                    {
                        unsigned l_870 = 0xC7ACE041L;
                        int **l_886 = &l_855;
                        (*l_886) = ((p_7 , p_7) , l_885);
                        (*l_883) = (safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u((&g_371 != &l_882), p_5)) || g_197) == 1L), 2)), 12));
                        (*l_885) = p_8;
                    }
                    else
                    {
                        int *l_894 = &l_816;
                        return &g_608;
                    }
                    for (p_8 = 29; (p_8 <= 57); p_8 = safe_add_func_uint8_t_u_u(p_8, 1))
                    {
                        const int **l_897 = &l_853;
                        (*l_897) = func_46((**l_882), (*l_882));
                    }
                    return &g_566;
                }
                (*l_914) = (*l_843);
            }
            g_26 = (*l_832);
        }
    }
    return l_915;
}







static unsigned func_9(unsigned p_10)
{
    int *l_244 = &g_27;
    int l_245 = (-1L);
    unsigned l_258 = 4294967289UL;
    int l_369 = 0x6ECB8E05L;
    int *l_400 = &g_27;
    unsigned l_406 = 0xEB7D6F02L;
    int l_445 = 0x3A1E4A67L;
    const int * const l_529 = &g_220;
    const int * const *l_528 = &l_529;
    int l_551 = 2L;
    if ((*g_26))
    {
        int *l_262 = (void*)0;
        int *l_290 = (void*)0;
        unsigned short l_372 = 7UL;
        int l_374 = 0x3C18DBF7L;
        int l_398 = 0x516BBA43L;
        l_245 = (~(&g_27 == l_244));
        if (p_10)
        {
            short l_255 = (-4L);
            short l_256 = 0xF74AL;
            int *l_257 = &g_27;
            int **l_272 = &l_244;
            for (g_128 = (-12); (g_128 >= 47); g_128++)
            {
                int *l_259 = &l_245;
                int **l_263 = &l_257;
                for (g_197 = 0; (g_197 == 40); g_197 = safe_add_func_int16_t_s_s(g_197, 3))
                {
                    int *l_250 = &g_27;
                    int **l_251 = &l_244;
                    const char l_252 = (-1L);
                    (*l_251) = l_250;
                    if (((l_252 , (p_10 < (-1L))) || l_258))
                    {
                        const int *l_261 = (void*)0;
                        const int **l_260 = &l_261;
                        (*l_260) = func_46(g_11, l_259);
                        (*l_260) = &g_27;
                        (*l_257) = (*l_261);
                        (*l_251) = l_257;
                    }
                    else
                    {
                        (*l_251) = &g_27;
                    }
                }
                (*l_263) = &g_27;
            }
            l_257 = &l_245;
            for (p_10 = 0; (p_10 == 12); p_10 = safe_add_func_int16_t_s_s(p_10, 8))
            {
                for (g_11 = 0; (g_11 == 5); g_11++)
                {
                    int * const l_270 = (void*)0;
                    int **l_271 = &g_51;
                    (*l_271) = l_270;
                }
            }
            (*l_272) = l_262;
        }
        else
        {
            int l_286 = 0x01F2DFD3L;
            int *l_287 = &g_27;
            unsigned l_397 = 0xC5A6CC17L;
            short l_399 = 0xB6EDL;
            int ***l_414 = &g_371;
            if (p_10)
            {
                unsigned l_275 = 0UL;
                int **l_288 = (void*)0;
                int **l_289 = &l_287;
                (*l_289) = l_287;
                l_287 = l_290;
                return g_27;
            }
            else
            {
                unsigned l_295 = 0x917B7F45L;
                const int *l_297 = &g_27;
                unsigned short l_328 = 0x38CAL;
                int * const *l_344 = &l_262;
                int * const **l_343 = &l_344;
                if ((*g_26))
                {
                    const int *l_292 = &g_27;
                    const int **l_291 = &l_292;
                    (*l_291) = &g_220;
                    (*l_291) = &g_27;
                    if (p_10)
                    {
                        (*l_244) = (((~p_10) && (l_295 || ((void*)0 != &g_51))) , (safe_unary_minus_func_int32_t_s((4294967291UL > ((((void*)0 == l_287) , (&l_287 != &l_244)) | 3L)))));
                    }
                    else
                    {
                        (*l_291) = l_297;
                        (*l_291) = &g_27;
                    }
                }
                else
                {
                    unsigned l_305 = 0xD72F3A6FL;
                    int *l_306 = &g_27;
                    (*l_244) = (0xFC47L | p_10);
                    (*g_26) = 0x5CFCB859L;
                }
                if (p_10)
                {
                    for (l_286 = 0; (l_286 <= (-10)); l_286 = safe_sub_func_int16_t_s_s(l_286, 5))
                    {
                        short l_311 = 0xE217L;
                        l_297 = &g_220;
                        (*l_287) = ((safe_lshift_func_uint8_t_u_u(g_11, 4)) != (*l_287));
                    }
                }
                else
                {
                    int *l_331 = &l_245;
                    int **l_340 = &l_287;
                    int ***l_339 = &l_340;
                    const int l_349 = (-1L);
                    int l_352 = 0L;
                    if ((*l_244))
                    {
                        int **l_332 = &l_287;
                        (*l_244) = (safe_rshift_func_uint8_t_u_u(g_128, 3));
                        (*l_332) = l_331;
                    }
                    else
                    {
                        int **l_333 = (void*)0;
                        int **l_334 = &l_287;
                        (*l_334) = l_331;
                        g_51 = (*l_334);
                        (*g_51) = (safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s(((void*)0 != &g_27), (&l_334 == l_339))), p_10));
                    }
                    g_51 = (**l_343);
                    return (*l_244);
                }
            }
            if (((safe_rshift_func_uint8_t_u_u(g_27, g_128)) & (((((p_10 <= p_10) , (safe_mul_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((((p_10 , ((*l_244) | ((((((safe_mul_func_int8_t_s_s(p_10, (((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(g_128, (((safe_div_func_uint8_t_u_u(1UL, 0xD7L)) != 0x1FL) > (-9L)))), l_369)), (*l_287))) >= (*l_287)) , p_10))) , (*l_287)) , g_370) == (void*)0) > (*l_287)) | 0x44L))) & g_197) > 1L), l_372)) != p_10), (*l_244)))) , p_10) <= (*l_287)) , g_176)))
            {
                (*g_26) = (*l_244);
            }
            else
            {
                int l_373 = 0xEE3F9E5FL;
                const int *l_376 = &l_245;
                const int **l_375 = &l_376;
                l_373 = (g_220 < 0x15CEL);
                (*l_375) = func_46(l_374, &l_373);
            }
            l_262 = l_400;
            for (g_197 = 0; (g_197 == 59); g_197++)
            {
                int **l_403 = &l_287;
                unsigned l_413 = 0UL;
                (*l_403) = l_287;
                if ((**l_403))
                    continue;
                for (p_10 = 0; (p_10 > 60); ++p_10)
                {
                    (**l_403) = (-7L);
                }
                if ((l_406 >= ((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((safe_add_func_int8_t_s_s((l_413 || (**l_403)), ((void*)0 == l_414))) & (**l_403)), g_11)), (*g_26))) != g_176)))
                {
                    for (l_413 = 0; (l_413 < 17); ++l_413)
                    {
                        return g_197;
                    }
                }
                else
                {
                    (*l_403) = (*l_403);
                    (*l_403) = &g_27;
                }
            }
        }
    }
    else
    {
        int *l_417 = (void*)0;
        int **l_418 = &g_26;
        int l_421 = 0xD4BB7499L;
        unsigned short l_424 = 0xE56CL;
        unsigned short l_437 = 0x8DC0L;
        int l_440 = 0x2859D2BFL;
        const unsigned l_526 = 0xBC97AA9BL;
        int * const l_540 = &l_245;
        (*l_418) = l_417;
        l_421 = ((*l_400) & (safe_sub_func_int32_t_s_s(0xC6893462L, p_10)));
        (*l_244) = (*l_244);
        if ((g_11 < p_10))
        {
            short l_443 = 1L;
            int *l_444 = &l_440;
            int ***l_480 = &l_418;
            l_400 = (void*)0;
            (*l_418) = (((((safe_mod_func_uint8_t_u_u(((p_10 <= (safe_add_func_int32_t_s_s(p_10, p_10))) && p_10), p_10)) & p_10) , g_197) > 0xDE70L) , (void*)0);
            (*l_418) = ((safe_lshift_func_uint16_t_u_s(((*l_244) && 0x3293L), 12)) , &l_245);
            for (l_406 = 2; (l_406 == 14); l_406++)
            {
                int l_454 = 0x11FF74C4L;
                int *** const l_479 = (void*)0;
                short l_502 = 0xE4A8L;
            }
        }
        else
        {
            int l_523 = 1L;
            int ***l_527 = &g_371;
            unsigned l_545 = 4294967289UL;
            int *l_546 = &l_523;
            (*l_400) = (safe_mod_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(g_220, (safe_div_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(0UL, (safe_div_func_uint16_t_u_u(0xCDABL, ((safe_lshift_func_uint16_t_u_u(g_220, (safe_add_func_int32_t_s_s((*l_244), ((safe_lshift_func_int8_t_s_u(g_197, 2)) , (((safe_rshift_func_int8_t_s_s(p_10, (p_10 <= p_10))) == 3UL) , l_523)))))) | g_197))))), p_10)))), (*l_400)));
            (*l_400) = (safe_add_func_uint32_t_u_u(p_10, (l_527 != &l_418)));
            (*l_418) = l_546;
        }
    }
    for (l_406 = 0; (l_406 <= 37); ++l_406)
    {
        const int *l_550 = (void*)0;
        const int **l_549 = &l_550;
        (*l_549) = (*l_528);
        if (l_551)
            break;
    }
    return (*l_529);
}







static unsigned func_12(int p_13, short p_14)
{
    short l_218 = 0x1569L;
    const int *l_219 = &g_220;
    unsigned char l_240 = 0x33L;
    unsigned short l_241 = 65530UL;
    l_241 = ((safe_lshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((+func_20(g_11, g_26, (func_28(((safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s(func_36(((((((safe_add_func_int8_t_s_s(0x37L, func_41(p_14, func_46((safe_sub_func_uint32_t_u_u(g_27, (*g_26))), &p_13), (p_14 , g_26), g_128))) , l_218) , 0x2455L) >= g_11) <= 251UL) , p_13), l_219), 65535UL)), (-8L))) <= 0xB1CEL), (*l_219), g_176) || (*l_219)), p_14, g_26)), p_14)), p_14)) ^ l_240);
    return p_14;
}







static char func_20(const unsigned short p_21, int * p_22, short p_23, int p_24, int * p_25)
{
    const int *l_234 = &g_220;
    const int *l_239 = &g_27;
    (*p_25) = func_41(p_24, l_234, &g_27, ((*l_234) , (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((*l_234), 7)), 0))));
    l_239 = l_234;
    return g_27;
}







static short func_28(int p_29, int p_30, short p_31)
{
    (*g_26) = p_30;
    return p_30;
}







static short func_36(const int p_37, const int * p_38)
{
    const int *l_227 = &g_27;
    unsigned short l_228 = 0UL;
    (*g_26) = ((safe_add_func_uint32_t_u_u(0x13875562L, (safe_sub_func_int16_t_s_s(((safe_div_func_int16_t_s_s(((void*)0 == &p_38), (((func_41(g_128, l_227, &g_27, (*l_227)) ^ 1L) != 0x7493L) , (*l_227)))) >= l_228), 0L)))) | g_128);
    for (g_128 = 0; (g_128 >= 57); g_128 = safe_add_func_uint32_t_u_u(g_128, 1))
    {
        unsigned l_233 = 0x93C069BDL;
        (*g_26) = (+(*g_51));
        (*g_26) = (((safe_lshift_func_uint16_t_u_s((!(p_37 <= (*l_227))), 3)) , (0x1FL && (((void*)0 == &g_220) , p_37))) , l_233);
    }
    return (*l_227);
}







static char func_41(int p_42, const int * p_43, int * p_44, unsigned char p_45)
{
    int l_217 = (-1L);
    (*g_51) = 0L;
    return l_217;
}







static const int * func_46(unsigned char p_47, int * p_48)
{
    char l_63 = (-1L);
    int l_64 = 1L;
    int * const *l_120 = (void*)0;
    unsigned l_131 = 0xCAFA2358L;
    int l_154 = 0x241C05FAL;
    int *l_198 = &l_154;
    g_51 = p_48;
    for (g_27 = 0; (g_27 >= 24); g_27 = safe_add_func_uint8_t_u_u(g_27, 9))
    {
        unsigned l_54 = 0UL;
        int l_143 = (-7L);
        unsigned l_171 = 0UL;
        (*p_48) = l_54;
        for (p_47 = (-2); (p_47 >= 29); ++p_47)
        {
            unsigned l_75 = 1UL;
            int **l_102 = &g_51;
        }
        for (l_64 = (-10); (l_64 < (-18)); l_64 = safe_sub_func_int8_t_s_s(l_64, 4))
        {
            unsigned l_107 = 1UL;
            int l_155 = 0xEE60EB54L;
            int *l_178 = (void*)0;
            unsigned l_196 = 0UL;
            int **l_211 = &l_198;
        }
        (*g_51) = (g_176 && 65532UL);
    }
    for (p_47 = (-20); (p_47 <= 60); p_47 = safe_add_func_uint32_t_u_u(p_47, 8))
    {
        int **l_214 = (void*)0;
        int **l_215 = (void*)0;
        int **l_216 = &g_51;
        (*g_51) = (*p_48);
        (*l_216) = &g_27;
    }
    p_48 = &g_27;
    return &g_27;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_566, "g_566", print_hash_value);
    transparent_crc(g_608, "g_608", print_hash_value);
    transparent_crc(g_612, "g_612", print_hash_value);
    transparent_crc(g_681, "g_681", print_hash_value);
    transparent_crc(g_912, "g_912", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
