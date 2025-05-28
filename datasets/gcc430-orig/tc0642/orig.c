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



static volatile unsigned g_2 = 0UL;
static int g_7 = 0xB0CEAFD9L;
static int * volatile g_6 = &g_7;
static unsigned short g_27 = 65535UL;
static int g_66 = 0x718DA91EL;
static int g_92 = 0x572BF2C4L;
static int g_101 = 0x905BEA62L;
static int g_104 = 0xD4DBF7CDL;
static int g_105 = 0xAA969AAEL;
static char g_112 = 0xFCL;
static short g_135 = 0xAE3AL;
static unsigned g_138 = 0x679F7867L;
static int *g_142 = &g_66;
static volatile int g_176 = 9L;
static short g_182 = 0x5044L;
static unsigned char g_184 = 0x9CL;
static int *g_196 = &g_7;
static int * volatile *g_195 = &g_196;
static unsigned g_205 = 0x55D93182L;
static volatile int g_263 = 0x8FEC5983L;
static unsigned char g_264 = 0UL;
static volatile unsigned short g_295 = 0xF8BBL;
static int g_366 = 1L;
static unsigned g_370 = 0xC81B91DDL;
static int * volatile g_412 = &g_92;
static unsigned char g_415 = 0x13L;
static int * volatile g_417 = &g_366;
static int * volatile g_431 = (void*)0;
static int * volatile g_432 = &g_66;
static int g_520 = (-1L);
static short g_531 = 0x6EF6L;
static unsigned g_537 = 0x59DCB3F3L;
static int * volatile g_545 = &g_92;
static int * volatile g_559 = &g_366;
static unsigned g_568 = 0x7266BBD7L;
static short g_671 = (-8L);
static char g_691 = 8L;
static unsigned char g_733 = 0x3FL;
static volatile int g_780 = 0xDA6935B7L;
static unsigned short g_907 = 0xBA3CL;
static volatile unsigned char g_928 = 8UL;
static volatile int * volatile ** volatile g_986 = (void*)0;
static volatile short g_1108 = 0x826EL;
static volatile int g_1136 = (-1L);
static int g_1161 = 0xBC212574L;
static unsigned g_1162 = 0UL;
static int g_1641 = 1L;
static volatile unsigned g_1642 = 0x950A620CL;
static unsigned char g_1776 = 0x32L;
static unsigned short g_1799 = 0x931BL;
static unsigned g_1821 = 1UL;
static int g_1826 = 0xF5648A8AL;
static int *g_1951 = &g_1161;
static unsigned g_1954 = 4294967290UL;



static short func_1(void);
static int * func_8(char p_9, unsigned p_10);
static unsigned func_11(int p_12, int * p_13, int * p_14);
static unsigned short func_19(int * p_20, unsigned short p_21);
static int * func_22(int p_23, char p_24, int * p_25, int * p_26);
static int * func_28(unsigned p_29, int p_30, char p_31);
static short func_32(int * p_33, int * p_34, int * p_35, unsigned p_36, unsigned char p_37);
static int * func_38(unsigned short p_39, int * p_40, int * p_41, unsigned p_42);
static unsigned short func_48(unsigned char p_49, unsigned short p_50, int p_51);
static unsigned char func_52(int * p_53, char p_54, unsigned char p_55, int * p_56);
static short func_1(void)
{
    char l_5 = 0xC6L;
    int *l_143 = &g_7;
    int l_402 = (-6L);
    unsigned short l_615 = 65535UL;
    int l_633 = 0L;
    int l_667 = 3L;
    int l_741 = 0x53D3FBEFL;
    int l_749 = 0L;
    int *l_804 = &l_667;
    char l_910 = 0xEAL;
    unsigned char l_932 = 0x01L;
    char l_941 = (-3L);
    int **l_967 = &g_142;
    int ***l_966 = &l_967;
    int l_1134 = 0xFA54B886L;
    unsigned short l_1511 = 0x31FBL;
    char l_1513 = 0x99L;
    int l_1607 = 0xAA770CF1L;
    int l_1626 = (-1L);
    unsigned char l_1824 = 0xD9L;
    int *l_1851 = &l_749;
    unsigned l_1943 = 0x7D43387BL;
    if (g_2)
    {
        unsigned l_45 = 1UL;
        int *l_57 = &g_7;
        unsigned l_413 = 4294967293UL;
        int l_700 = 5L;
        int l_721 = 0xC8F9E45DL;
        int l_739 = 0x2D6B6B86L;
        int l_768 = 1L;
        (*g_6) ^= (safe_lshift_func_uint8_t_u_s(l_5, 1));
        l_57 = func_8(g_7, func_11(((((safe_add_func_uint16_t_u_u((1UL >= (safe_rshift_func_uint16_t_u_s(func_19(func_22(g_27, ((void*)0 != &g_7), func_28((func_32(func_38((safe_mod_func_uint32_t_u_u((l_45 >= (safe_rshift_func_uint16_t_u_u(g_2, func_48(func_52(l_57, g_7, g_7, &g_7), (*l_57), l_5)))), g_27)), l_57, l_143, (*l_57)), &g_7, &g_7, (*l_57), l_402) == 4L), (*l_57), l_413), &g_7), g_7), 4))), 65535UL)) > 0x6CL) & 0x3AL) != (*l_57)), &g_7, &g_7));

        ;
        ;

        if ((*g_412))
        {
            return (*l_143);
        }
        else
        {
            int *l_574 = &g_66;
            int l_625 = 0xFC4DE4B1L;
            int l_630 = 0x8B460C7BL;
            int l_702 = 0xF595BD59L;
            short l_716 = 0x111FL;
            int l_729 = (-10L);
            int l_742 = (-1L);
            for (g_182 = 4; (g_182 != (-3)); --g_182)
            {
                int l_573 = 0x9CDAACCDL;
                (*l_57) = ((((*l_57) ^ (g_295 <= ((&g_66 == (void*)0) >= 0x5AFEL))) <= g_568) == ((*l_57) || (safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(l_573, (*l_57))), 1L))));
                l_574 = l_574;
                (*l_143) ^= (*l_57);
            }
            for (g_27 = 0; (g_27 <= 18); g_27 = safe_add_func_int16_t_s_s(g_27, 6))
            {
                char l_602 = (-1L);
                int l_672 = 0xCE89328CL;
                int l_736 = (-9L);
                int l_737 = 1L;
                int l_738 = 0x1EBCEAE7L;
                int l_740 = 0xA9017054L;
                int l_775 = 1L;
                int *l_799 = &l_625;
                unsigned short l_801 = 0x1FF8L;
                char l_911 = 0x20L;
                for (g_366 = 0; (g_366 == 21); g_366 = safe_add_func_int32_t_s_s(g_366, 1))
                {
                    unsigned l_585 = 1UL;
                    int *l_586 = &g_66;
                    int **l_600 = &l_574;
                    int ***l_599 = &l_600;
                    (*l_586) = (((safe_add_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((*l_574), 0)), l_585)), func_11((*l_143), l_574, l_586))) == (((void*)0 == &g_195) && 0UL)) > (*l_586));
                    if (((safe_lshift_func_uint16_t_u_s(g_104, (g_295 == (safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(0x31L, ((safe_rshift_func_int16_t_s_s((*l_143), g_105)) >= 65535UL))) < ((safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((&g_195 != l_599), func_11((*l_57), l_143, &g_7))), (-10L))) < g_66)), 0x06L))))) & 4294967287UL))
                    {
                        (*g_195) = l_574;

                        ;
                    }
                    else
                    {
                        unsigned l_601 = 0UL;
                        (***l_599) = l_601;
                        (**l_600) = (*g_417);
                        return g_520;
                    }

                    ;
                    (*g_196) = (*g_417);
                }
                if (l_602)
                    continue;
                if (func_19(l_143, (safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s(0xFAL, (safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(func_19(l_57, g_370), (safe_add_func_int32_t_s_s((g_7 != l_615), g_184)))), (func_11((safe_mod_func_int8_t_s_s((((*l_143) | 0UL) == l_602), g_112)), &g_7, l_574) != g_104))))) > g_205), 1)), l_602))))
                {
                    int *l_618 = (void*)0;
                    int *l_619 = &g_366;
                    int *l_620 = &g_7;
                    int *l_621 = &g_7;
                    int *l_622 = &g_366;
                    int *l_623 = &g_92;
                    int *l_624 = &g_92;
                    int *l_626 = &g_366;
                    int *l_627 = &l_625;
                    int *l_628 = &g_92;
                    int *l_629 = &g_66;
                    int *l_631 = &g_7;
                    int *l_632 = &g_366;
                    int *l_634 = (void*)0;
                    int *l_635 = &g_366;
                    int *l_636 = &g_92;
                    int *l_637 = &l_625;
                    int *l_638 = &g_66;
                    int *l_639 = (void*)0;
                    int *l_640 = &g_92;
                    int l_641 = 0xEC45E47BL;
                    int *l_642 = &g_66;
                    int *l_643 = &g_66;
                    int *l_644 = &l_641;
                    int *l_645 = &g_7;
                    int *l_646 = (void*)0;
                    int *l_647 = &g_7;
                    int *l_648 = (void*)0;
                    int *l_649 = &g_92;
                    int *l_650 = &l_641;
                    int *l_651 = &l_641;
                    int *l_652 = &l_641;
                    int *l_653 = (void*)0;
                    int *l_654 = &l_630;
                    int *l_655 = &l_625;
                    int *l_656 = &g_66;
                    int *l_657 = &l_633;
                    int *l_658 = &l_625;
                    int *l_659 = &g_66;
                    int *l_660 = &l_630;
                    int *l_661 = &l_633;
                    int *l_662 = &g_366;
                    int *l_663 = &l_641;
                    int *l_664 = &g_366;
                    int l_665 = 0xC7959007L;
                    int *l_666 = (void*)0;
                    int *l_668 = (void*)0;
                    int *l_669 = &g_366;
                    int *l_670 = &l_625;
                    int *l_673 = &g_366;
                    int *l_674 = &g_7;
                    int *l_675 = &g_92;
                    int *l_676 = &l_672;
                    int *l_677 = &g_7;
                    int *l_678 = &l_625;
                    int *l_679 = &g_7;
                    int *l_680 = &g_66;
                    int *l_681 = &g_7;
                    int *l_682 = (void*)0;
                    int *l_683 = &l_665;
                    int *l_684 = &l_641;
                    int *l_685 = &l_625;
                    int *l_686 = &g_366;
                    int *l_687 = (void*)0;
                    int *l_688 = &l_672;
                    int *l_689 = &l_633;
                    int *l_690 = &l_633;
                    int *l_692 = &l_665;
                    int *l_693 = &l_667;
                    int *l_694 = &g_66;
                    int *l_695 = &l_667;
                    int *l_696 = (void*)0;
                    int *l_697 = &l_625;
                    int *l_698 = &g_366;
                    int *l_699 = &l_625;
                    int *l_701 = &l_641;
                    int *l_703 = &l_630;
                    int *l_704 = (void*)0;
                    int *l_705 = &g_66;
                    int l_706 = (-1L);
                    int *l_707 = (void*)0;
                    int *l_708 = &l_672;
                    int *l_709 = &l_706;
                    int *l_710 = (void*)0;
                    int *l_711 = &g_366;
                    int *l_712 = &l_630;
                    int *l_713 = (void*)0;
                    int *l_714 = &g_7;
                    int *l_715 = &l_625;
                    int *l_717 = &l_667;
                    int *l_718 = &g_92;
                    int *l_719 = (void*)0;
                    int *l_720 = &l_706;
                    int *l_722 = &g_7;
                    int *l_723 = &l_667;
                    int *l_724 = &l_700;
                    char l_725 = 0x9FL;
                    int *l_726 = &l_633;
                    int *l_727 = &l_702;
                    int *l_728 = &l_672;
                    int *l_730 = (void*)0;
                    int *l_731 = &g_66;
                    int *l_732 = &l_667;
                    int *l_743 = (void*)0;
                    int *l_744 = &l_665;
                    int *l_745 = (void*)0;
                    int *l_746 = &g_92;
                    int *l_747 = &l_721;
                    int *l_748 = &l_702;
                    int *l_750 = &l_740;
                    int *l_751 = &g_92;
                    int *l_752 = &l_667;
                    int *l_753 = &g_66;
                    int *l_754 = &l_672;
                    int *l_755 = &g_366;
                    int *l_756 = (void*)0;
                    int *l_757 = &l_641;
                    int *l_758 = &l_749;
                    int *l_759 = &l_736;
                    int *l_760 = &l_672;
                    int *l_761 = &l_706;
                    int *l_762 = (void*)0;
                    int *l_763 = &g_366;
                    int *l_764 = &l_665;
                    int *l_765 = &l_739;
                    int *l_766 = &g_366;
                    int *l_767 = &l_630;
                    int *l_769 = &l_667;
                    int *l_770 = &l_702;
                    int *l_771 = &l_667;
                    int *l_772 = &l_741;
                    int *l_773 = &l_736;
                    int *l_774 = &l_729;
                    int *l_776 = &g_7;
                    int *l_777 = (void*)0;
                    int *l_778 = &l_736;
                    int *l_779 = &l_749;
                    int *l_781 = &l_775;
                    int *l_782 = &l_739;
                    int *l_783 = &l_641;
                    int *l_784 = &l_665;
                    int *l_785 = &l_741;
                    int *l_786 = (void*)0;
                    int *l_787 = &l_749;
                    int *l_788 = &l_672;
                    int *l_789 = &l_665;
                    unsigned l_790 = 0xEB326A87L;
                    --g_733;
                    l_790++;
                    for (g_182 = 0; (g_182 >= (-5)); g_182--)
                    {
                        unsigned char l_800 = 3UL;
                        (*l_782) = l_672;
                        g_7 |= (0xAFL >= func_48(((safe_rshift_func_uint16_t_u_u(l_602, 11)) || g_92), (func_48(g_671, ((((((safe_add_func_uint16_t_u_u((func_11(g_537, &l_775, l_799) | l_800), g_531)) >= g_295) == (*l_664)) & (*l_574)) >= g_370) & g_520), (*l_799)) & 0xA4C5L), l_801));
                    }
                }
                else
                {
                    int l_809 = 0x5E447354L;
                    int *l_810 = (void*)0;
                    int *l_811 = &l_739;
                    int *l_812 = &l_700;
                    int *l_813 = &g_366;
                    int *l_814 = &l_630;
                    int *l_815 = &g_66;
                    int *l_816 = &l_625;
                    int *l_817 = &l_667;
                    int *l_818 = &l_667;
                    int *l_819 = &l_721;
                    int *l_820 = (void*)0;
                    int *l_821 = &l_740;
                    int *l_822 = &l_630;
                    int *l_823 = (void*)0;
                    int *l_824 = (void*)0;
                    int *l_825 = &l_630;
                    int *l_826 = &l_740;
                    int *l_827 = &l_749;
                    int *l_828 = (void*)0;
                    int *l_829 = &l_736;
                    int *l_830 = &l_736;
                    int *l_831 = &g_92;
                    int *l_832 = &l_625;
                    int *l_833 = &g_92;
                    int *l_834 = &l_740;
                    int *l_835 = (void*)0;
                    int *l_836 = &l_809;
                    int *l_837 = &l_741;
                    int *l_838 = &l_809;
                    int *l_839 = &l_630;
                    int *l_840 = &l_667;
                    int *l_841 = &l_740;
                    int *l_842 = &l_630;
                    int *l_843 = &l_672;
                    int *l_844 = &g_7;
                    int *l_845 = (void*)0;
                    int *l_846 = &g_7;
                    int *l_847 = &l_729;
                    int *l_848 = &l_739;
                    int *l_849 = &l_775;
                    int *l_850 = &l_739;
                    int *l_851 = &g_366;
                    int *l_852 = &l_775;
                    int *l_853 = &l_625;
                    int *l_854 = (void*)0;
                    int *l_855 = (void*)0;
                    int *l_856 = &l_768;
                    int *l_857 = &l_749;
                    int *l_858 = &l_625;
                    int *l_859 = &g_366;
                    int *l_860 = &g_7;
                    int *l_861 = &l_729;
                    int *l_862 = (void*)0;
                    int *l_863 = &l_672;
                    int *l_864 = &l_721;
                    int *l_865 = &l_672;
                    int *l_866 = (void*)0;
                    int *l_867 = &l_721;
                    int *l_868 = &l_702;
                    int *l_869 = &l_768;
                    int *l_870 = (void*)0;
                    int *l_871 = &l_739;
                    int *l_872 = &l_775;
                    int *l_873 = (void*)0;
                    int *l_874 = &l_736;
                    int *l_875 = &g_366;
                    int *l_876 = &l_729;
                    int *l_877 = &l_633;
                    int *l_878 = &l_625;
                    int *l_879 = &l_702;
                    int *l_880 = &g_92;
                    int *l_881 = &l_775;
                    int *l_882 = &l_630;
                    int *l_883 = &g_7;
                    int *l_884 = &l_739;
                    int *l_885 = &l_736;
                    int *l_886 = &l_775;
                    int *l_887 = &l_672;
                    int *l_888 = &l_702;
                    int *l_889 = &l_729;
                    int *l_890 = &l_739;
                    int *l_891 = (void*)0;
                    int *l_892 = &l_749;
                    int *l_893 = &l_729;
                    int *l_894 = &g_92;
                    int *l_895 = &l_633;
                    int *l_896 = &g_92;
                    int *l_897 = &l_768;
                    int *l_898 = &l_741;
                    int *l_899 = &l_633;
                    int *l_900 = &l_740;
                    int *l_901 = &l_721;
                    int *l_902 = &l_775;
                    int *l_903 = &g_366;
                    int *l_904 = &l_809;
                    int *l_905 = &g_92;
                    int *l_906 = &l_768;
                    int *l_912 = &g_366;
                    int *l_913 = &l_809;
                    int *l_914 = &l_737;
                    int *l_915 = &l_775;
                    int *l_916 = &l_729;
                    int *l_917 = &l_809;
                    int *l_918 = &l_721;
                    int *l_919 = &l_738;
                    int *l_920 = (void*)0;
                    int *l_921 = &l_738;
                    int *l_922 = &l_633;
                    int *l_923 = &l_768;
                    int *l_924 = &g_92;
                    int l_925 = 0x5D6E179DL;
                    int *l_926 = &l_775;
                    int *l_927 = (void*)0;
                    (*l_799) ^= (safe_mul_func_int16_t_s_s(((&l_700 == l_804) | func_48(g_138, (1UL == (safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(0x1931L, 4)), (*l_574)))), (g_184 > (~(*l_143))))), l_809));
                    g_907--;
                    --g_928;
                }
                if ((*g_545))
                    continue;
            }


            (*g_195) = func_8(g_101, g_66);

            ;
        }

        ;
    }
    else
    {
        unsigned l_931 = 0x68FE203EL;
        int *l_952 = (void*)0;
        int ***l_987 = &l_967;
        int l_1021 = 0xB5009F19L;
        int l_1139 = 0x4129FEC2L;
        (*g_195) = func_28((~0UL), l_931, l_932);
        (*g_195) = func_28(g_264, (safe_sub_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(0UL, g_366)) > (safe_sub_func_int16_t_s_s(l_931, g_264))), l_941)) >= (((safe_rshift_func_int16_t_s_u((g_907 | (~(0x47L ^ ((safe_mod_func_int32_t_s_s((*g_417), (-9L))) <= (*l_143))))), l_931)) >= 1L) ^ g_101)), l_931)), g_66);
        if (((-9L) < ((safe_mul_func_uint32_t_u_u(((((g_205 >= (safe_add_func_int8_t_s_s((*l_143), ((void*)0 != l_952)))) && (*l_143)) | g_531) > g_537), (l_931 != (*l_143)))) && 0L)))
        {
            unsigned l_957 = 9UL;
            (*l_143) = (safe_lshift_func_int8_t_s_u(g_104, ((+((0xBBE2E6B0L <= 0x72A32B87L) < (safe_sub_func_int8_t_s_s(g_27, (func_48((*l_804), ((g_780 ^ 0x8EAEL) < (+((-7L) & 0x46FBL))), l_957) || (*l_143)))))) > (*g_196))));
        }
        else
        {
            short l_993 = 1L;
            int l_994 = 0xD8D2A5D6L;
            int l_1123 = (-1L);
            int l_1146 = 0L;
            int l_1240 = 0x8627489FL;
            int l_1243 = 0xEB46838DL;
            unsigned short l_1244 = 0x132AL;
            (*g_196) = (((safe_add_func_int8_t_s_s((g_182 | (safe_mul_func_uint16_t_u_u(g_7, g_370))), g_105)) > g_184) != (safe_lshift_func_int8_t_s_s(((safe_add_func_int8_t_s_s((l_966 != (void*)0), ((safe_rshift_func_uint16_t_u_u((+(safe_unary_minus_func_int8_t_s((safe_unary_minus_func_int16_t_s(g_176))))), 14)) == g_66))) & (**g_195)), (*l_804))));
            for (g_205 = 26; (g_205 != 40); ++g_205)
            {
                int *l_976 = &g_366;
                int l_1018 = 0xE8DC3311L;
                int l_1054 = 0L;
                int l_1157 = (-1L);
                int ***l_1176 = &l_967;
                int *l_1177 = &l_1021;
                int *l_1178 = &g_66;
                int *l_1179 = &l_633;
                int *l_1180 = (void*)0;
                int *l_1181 = (void*)0;
                int *l_1182 = &l_1157;
                int *l_1183 = (void*)0;
                int *l_1184 = &l_1018;
                int *l_1185 = &l_994;
                int *l_1186 = &l_1021;
                int *l_1187 = &l_1146;
                int *l_1188 = &g_1161;
                int *l_1189 = &l_994;
                int *l_1190 = &g_92;
                int *l_1191 = &l_1157;
                int *l_1192 = (void*)0;
                int *l_1193 = &l_1146;
                int *l_1194 = &l_667;
                int *l_1195 = &l_1021;
                int *l_1196 = &l_749;
                int *l_1197 = (void*)0;
                int *l_1198 = &l_1146;
                int *l_1199 = &g_366;
                int *l_1200 = &l_1134;
                int *l_1201 = &l_1054;
                int *l_1202 = (void*)0;
                int *l_1203 = &l_1021;
                int *l_1204 = &l_749;
                int *l_1205 = &l_1139;
                int *l_1206 = (void*)0;
                int *l_1207 = &g_1161;
                int *l_1208 = &l_1021;
                int *l_1209 = &g_66;
                int *l_1210 = (void*)0;
                int *l_1211 = (void*)0;
                int *l_1212 = &l_1146;
                int *l_1213 = (void*)0;
                int *l_1214 = &g_66;
                int *l_1215 = &l_1123;
                int *l_1216 = &l_1018;
                int *l_1217 = (void*)0;
                int *l_1218 = &l_1021;
                int *l_1219 = &l_1134;
                int *l_1220 = &l_994;
                int *l_1221 = &l_1018;
                int *l_1222 = (void*)0;
                int *l_1223 = (void*)0;
                int *l_1224 = (void*)0;
                int *l_1225 = &g_366;
                int *l_1226 = &l_667;
                int *l_1227 = (void*)0;
                int *l_1228 = (void*)0;
                unsigned char l_1229 = 6UL;
                (*l_143) = (&g_195 == (void*)0);
            }
            (*g_142) = (0x294BL && ((safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((254UL ^ ((safe_add_func_int16_t_s_s(((*l_987) == (void*)0), g_1108)) < ((safe_mul_func_uint8_t_u_u(l_1240, (safe_mul_func_uint8_t_u_u(((void*)0 != &g_195), (l_1243 <= g_66))))) >= l_1244))) == (*g_142)), (***l_987))), 0x23L)) < 1UL));
        }
    }

    ;
    ;
    if (((g_7 > (-1L)) == (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((0x59L | (((**l_966) != (*g_195)) > ((((void*)0 != (*l_966)) ^ ((**l_966) == (void*)0)) < 0x7EABF47AL))) > g_2), 5)), 0))))
    {
        unsigned short l_1257 = 65533UL;
        int **l_1270 = (void*)0;
        unsigned char l_1274 = 0x05L;
        int l_1318 = (-7L);
        unsigned char l_1386 = 0xDCL;
        unsigned char l_1395 = 2UL;
        int l_1396 = 1L;
        char l_1397 = 1L;
        int l_1495 = 0xFC15B15FL;
        int *l_1512 = &g_1161;
        int *l_1514 = (void*)0;
        int *l_1515 = &l_667;
        int *l_1516 = &g_66;
        int *l_1517 = &g_66;
        int *l_1518 = &l_1495;
        int *l_1519 = (void*)0;
        int *l_1520 = &l_1134;
        int *l_1521 = &g_92;
        int *l_1522 = &l_749;
        int *l_1523 = (void*)0;
        short l_1524 = 0L;
        int *l_1525 = &g_66;
        int *l_1526 = (void*)0;
        int *l_1527 = &l_633;
        int *l_1528 = (void*)0;
        int *l_1529 = &l_1495;
        int *l_1530 = &g_66;
        int *l_1531 = &l_1495;
        int *l_1532 = &g_92;
        int l_1533 = 0xD27EEB37L;
        int *l_1534 = &g_1161;
        int *l_1535 = &g_66;
        int *l_1536 = &l_749;
        int *l_1537 = (void*)0;
        int *l_1538 = &g_66;
        int *l_1539 = &l_1318;
        int l_1540 = (-1L);
        int *l_1541 = &l_749;
        int *l_1542 = &l_1495;
        int *l_1543 = &l_1134;
        int *l_1544 = &g_366;
        int *l_1545 = &l_667;
        int *l_1546 = &g_92;
        int *l_1547 = &l_749;
        int *l_1548 = &g_66;
        int *l_1549 = &g_366;
        int *l_1550 = (void*)0;
        int *l_1551 = (void*)0;
        int *l_1552 = &g_1161;
        int *l_1553 = &l_1318;
        int *l_1554 = &g_92;
        int *l_1555 = &l_741;
        int *l_1556 = &l_633;
        int *l_1557 = &l_1495;
        int *l_1558 = &l_1318;
        int *l_1559 = &g_66;
        int l_1560 = 1L;
        int *l_1561 = (void*)0;
        int *l_1562 = &g_7;
        int *l_1563 = &l_1540;
        int *l_1564 = &l_1560;
        int *l_1565 = &g_1161;
        int *l_1566 = &g_7;
        int *l_1567 = &g_7;
        int *l_1568 = &g_92;
        int *l_1569 = (void*)0;
        int *l_1570 = (void*)0;
        int *l_1571 = &g_366;
        int *l_1572 = &l_1560;
        int *l_1573 = (void*)0;
        int *l_1574 = &g_7;
        int *l_1575 = &l_1318;
        int *l_1576 = &l_1318;
        int *l_1577 = &l_633;
        int *l_1578 = &g_1161;
        int *l_1579 = &l_1540;
        int *l_1580 = &g_7;
        int *l_1581 = (void*)0;
        int *l_1582 = &l_1495;
        int *l_1583 = &l_1533;
        int *l_1584 = &l_1533;
        int *l_1585 = &l_741;
        int *l_1586 = &g_66;
        int *l_1587 = &g_7;
        int *l_1588 = &g_92;
        int *l_1589 = (void*)0;
        int *l_1590 = &g_7;
        int *l_1591 = &l_633;
        int *l_1592 = &l_741;
        int *l_1593 = &l_749;
        int *l_1594 = &l_749;
        int *l_1595 = &l_1533;
        int *l_1596 = (void*)0;
        int *l_1597 = &l_1134;
        int *l_1598 = &g_92;
        int *l_1599 = &g_66;
        int *l_1600 = &l_1560;
        int *l_1601 = &l_667;
        int *l_1602 = &l_1560;
        int *l_1603 = &l_1134;
        int *l_1604 = &l_1495;
        int *l_1605 = &g_366;
        int *l_1606 = &g_7;
        int *l_1608 = &g_66;
        int *l_1609 = &l_749;
        int *l_1610 = &l_1134;
        int *l_1611 = (void*)0;
        int *l_1612 = &l_1607;
        int *l_1613 = &l_1533;
        int *l_1614 = &l_667;
        int *l_1615 = &l_1533;
        int *l_1616 = &g_1161;
        int *l_1617 = (void*)0;
        int *l_1618 = &l_749;
        int *l_1619 = &g_92;
        int *l_1620 = &g_7;
        int *l_1621 = &g_66;
        int *l_1622 = &g_1161;
        int *l_1623 = (void*)0;
        int *l_1624 = &l_749;
        int *l_1625 = &l_741;
        int *l_1627 = &l_1134;
        int *l_1628 = &g_366;
        int *l_1629 = &g_366;
        int *l_1630 = (void*)0;
        int *l_1631 = &g_7;
        int *l_1632 = &l_1533;
        int *l_1633 = &l_1533;
        int *l_1634 = (void*)0;
        int *l_1635 = (void*)0;
        int *l_1636 = &l_633;
        int l_1637 = 0x9E45C332L;
        int *l_1638 = &l_633;
        int *l_1639 = &l_1134;
        int *l_1640 = &l_1495;
        (*g_195) = (*g_195);
        if ((((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((void*)0 != &g_195), 4)), g_780)) != (((safe_add_func_int16_t_s_s((0xC231FB0CL >= 0x14022B24L), (*l_143))) != l_1257) >= (safe_mul_func_uint8_t_u_u((0x6CCBL == 1L), l_1257)))) > 0L))
        {
            unsigned short l_1266 = 0x92A6L;
            short l_1275 = (-1L);
            int *l_1282 = &g_66;
            int ***l_1286 = &l_967;
            unsigned char l_1373 = 0x91L;
            if ((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((1UL > (((g_264 < ((safe_rshift_func_int8_t_s_s(l_1257, (l_1266 || func_48(l_1257, g_176, (*g_196))))) ^ 0xEF8AL)) != l_1257) & g_537)), 9)), 0xA04EL)))
            {
                int *l_1269 = &l_633;
                int * volatile l_1285 = &g_1161;
                if ((safe_sub_func_uint8_t_u_u(((*g_195) == l_1269), ((void*)0 == l_1270))))
                {
                    for (l_1134 = 13; (l_1134 >= 24); l_1134 = safe_add_func_uint32_t_u_u(l_1134, 3))
                    {
                        unsigned short l_1273 = 0x20B3L;
                        return l_1273;
                    }
                    (*g_195) = func_28(l_1274, l_1275, l_1266);

                    ;
                    if ((+(*g_196)))
                    {
                        (*g_195) = (*g_195);
                    }
                    else
                    {
                        short l_1276 = 0L;
                        int *l_1281 = &l_1134;
                        (**g_195) = (((l_1276 <= g_415) > (l_1276 ^ (safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((*l_143), 5)), (func_32(&g_92, l_1281, l_1282, ((*l_1281) >= (((safe_rshift_func_int16_t_s_u(0x82DDL, 5)) <= 0x8475L) & (*l_1282))), (*l_1269)) & g_366))))) || 0x23L);
                    }
                    l_1285 = (*g_195);

                    ;
                }
                else
                {
                    int **l_1290 = &l_1282;
                    int l_1291 = 0x21A746E7L;
                    if (((void*)0 == l_1286))
                    {
                        short l_1289 = (-6L);
                        (*l_804) = ((safe_sub_func_int16_t_s_s((l_1286 != (void*)0), (((l_1289 <= (*l_1282)) == ((void*)0 != l_1290)) == (l_1291 == ((l_1289 >= 0xEAL) | 1L))))) <= l_1289);
                    }
                    else
                    {
                        (*l_143) |= (*g_432);
                    }
                    (*g_196) = (safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(0x2C99L, g_537)), (((safe_lshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u(g_691, (*l_1269))), (safe_sub_func_uint8_t_u_u(((func_11((*l_1285), &g_92, &g_92) != (l_1290 == (void*)0)) < (**l_1290)), g_104)))) <= 0xCCL) >= (**l_1290))));
                }

                ;
                (*l_1282) &= ((*g_6) <= g_27);
            }
            else
            {
                int *l_1302 = &g_92;
                int *l_1303 = &g_66;
                int *l_1304 = &g_66;
                int *l_1305 = &g_1161;
                int *l_1306 = &g_92;
                int *l_1307 = &g_66;
                int *l_1308 = &l_1134;
                int *l_1309 = &g_66;
                int *l_1310 = &l_667;
                int *l_1311 = (void*)0;
                int *l_1312 = &l_749;
                int *l_1313 = &g_7;
                int *l_1314 = &g_66;
                int *l_1315 = &l_633;
                int *l_1316 = (void*)0;
                int *l_1317 = (void*)0;
                int *l_1319 = &g_7;
                int *l_1320 = &g_66;
                int *l_1321 = (void*)0;
                int *l_1322 = (void*)0;
                int *l_1323 = &l_1318;
                int *l_1324 = &l_1134;
                int *l_1325 = &g_366;
                int *l_1326 = &l_1318;
                int *l_1327 = &g_66;
                int *l_1328 = &l_741;
                int *l_1329 = &l_633;
                int *l_1330 = &l_667;
                int *l_1331 = &l_741;
                int *l_1332 = &l_741;
                int *l_1333 = &l_1318;
                int *l_1334 = &l_1318;
                int *l_1335 = (void*)0;
                int *l_1336 = &g_1161;
                int *l_1337 = (void*)0;
                int *l_1338 = &g_7;
                int *l_1339 = &g_366;
                int *l_1340 = &g_92;
                int *l_1341 = &g_92;
                int *l_1342 = &l_741;
                int *l_1343 = &l_633;
                int *l_1344 = &g_66;
                int *l_1345 = &l_1134;
                int *l_1346 = &l_1134;
                int *l_1347 = &l_749;
                int *l_1348 = &l_749;
                int *l_1349 = &g_7;
                int *l_1350 = (void*)0;
                int *l_1351 = (void*)0;
                int *l_1352 = &g_366;
                int *l_1353 = &g_366;
                int *l_1354 = &l_1318;
                int *l_1355 = &g_366;
                int *l_1356 = (void*)0;
                int *l_1357 = &g_366;
                int *l_1358 = &g_92;
                int *l_1359 = &l_741;
                int *l_1360 = &l_667;
                int *l_1361 = &g_366;
                int *l_1362 = &g_1161;
                int *l_1363 = &l_667;
                int *l_1364 = (void*)0;
                int *l_1365 = &l_741;
                int *l_1366 = &l_749;
                int *l_1367 = &l_741;
                int *l_1368 = &l_667;
                int *l_1369 = &l_1318;
                int *l_1370 = (void*)0;
                int *l_1371 = &l_749;
                int *l_1372 = &l_1318;
                --l_1373;
            }
            l_749 ^= (safe_add_func_int8_t_s_s((*l_804), (safe_mod_func_int16_t_s_s((func_52(&g_366, (g_135 & g_264), (safe_lshift_func_uint16_t_u_s(65533UL, 11)), &g_366) <= ((safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(g_928, g_366)), l_1386)) >= g_7)), 0xEA83L))));
        }
        else
        {
            int *l_1389 = (void*)0;
            int l_1398 = 0L;
            int l_1443 = (-2L);
            for (g_138 = 0; (g_138 >= 14); g_138++)
            {
                unsigned short l_1392 = 0UL;
                (*l_967) = l_1389;

                ;
                (*g_432) = (safe_rshift_func_int8_t_s_s((l_1392 > 0L), (g_182 >= (*l_804))));
            }
            l_1398 = func_52(func_28((*l_143), g_370, ((+(*l_143)) & ((((safe_rshift_func_int8_t_s_s(g_2, 3)) == ((4294967291UL & (((void*)0 == &g_366) | ((l_1395 && l_1396) == g_907))) & 0x635BL)) < g_733) || g_537))), g_182, l_1397, &g_1161);

            ;
            if (l_1318)
            {
                int *l_1399 = &g_366;
                (*l_967) = l_1399;

                ;
                (**l_967) = (***l_966);
                (*l_804) ^= ((safe_mod_func_int32_t_s_s(((((0x7D27L & (l_1270 == l_1270)) > (safe_unary_minus_func_int32_t_s(((*l_1399) || (((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(1UL, (((0x93L >= g_104) >= (safe_mul_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((*g_559), (safe_mod_func_int16_t_s_s(((g_104 != 0xB6C4DE53L) < (-1L)), g_105)))) & 0xB7A47AF7L), g_112))) | 253UL))), (**g_195))) <= g_1161) >= 0x52FBL))))) == g_733) > g_182), 0x13CD2364L)) <= (*l_1399));
                (*g_417) = func_32(&g_7, &l_1318, func_38(func_19(&g_66, (*l_804)), &g_7, &g_66, g_184), g_531, g_112);

                ;

            }
            else
            {
                unsigned l_1499 = 4294967287UL;
                (*g_195) = (**l_966);

                ;
                for (g_907 = 0; (g_907 == 28); g_907 = safe_add_func_uint32_t_u_u(g_907, 1))
                {
                    int *l_1415 = &g_92;
                    int *l_1416 = &l_1134;
                    int *l_1417 = &l_1318;
                    int *l_1418 = &g_92;
                    int *l_1419 = &g_92;
                    int *l_1420 = &g_366;
                    int *l_1421 = (void*)0;
                    int *l_1422 = &g_66;
                    int *l_1423 = (void*)0;
                    int *l_1424 = (void*)0;
                    int *l_1425 = &l_741;
                    int *l_1426 = (void*)0;
                    int *l_1427 = &l_633;
                    int *l_1428 = &l_1398;
                    int *l_1429 = &g_366;
                    int *l_1430 = &g_92;
                    int *l_1431 = &g_1161;
                    int *l_1432 = (void*)0;
                    int *l_1433 = &g_66;
                    int *l_1434 = &l_1318;
                    int *l_1435 = &g_1161;
                    int *l_1436 = &g_366;
                    int *l_1437 = &l_667;
                    int *l_1438 = &l_749;
                    int *l_1439 = (void*)0;
                    int *l_1440 = &l_1318;
                    int *l_1441 = &g_7;
                    int *l_1442 = (void*)0;
                    int *l_1444 = &l_1398;
                    int *l_1445 = &l_667;
                    int *l_1446 = &l_1318;
                    int *l_1447 = &l_633;
                    int *l_1448 = &l_1398;
                    int *l_1449 = &g_366;
                    int *l_1450 = &g_66;
                    int *l_1451 = &l_1318;
                    int *l_1452 = &l_667;
                    int *l_1453 = &l_741;
                    int *l_1454 = &g_66;
                    int *l_1455 = &g_1161;
                    int *l_1456 = &g_7;
                    int *l_1457 = &g_1161;
                    int l_1458 = 0xB67132C0L;
                    int *l_1459 = &l_1134;
                    int *l_1460 = &l_633;
                    int *l_1461 = &l_1134;
                    int *l_1462 = &g_366;
                    int *l_1463 = &l_749;
                    int *l_1464 = (void*)0;
                    int *l_1465 = &l_741;
                    int *l_1466 = &l_1398;
                    int *l_1467 = &l_741;
                    int *l_1468 = &l_1458;
                    int *l_1469 = &g_1161;
                    int *l_1470 = &g_92;
                    int *l_1471 = &l_667;
                    int *l_1472 = (void*)0;
                    int *l_1473 = &l_1318;
                    int *l_1474 = &l_1443;
                    int *l_1475 = &l_1398;
                    int *l_1476 = (void*)0;
                    int *l_1477 = &g_1161;
                    int *l_1478 = &l_1398;
                    int *l_1479 = &g_66;
                    int *l_1480 = &l_749;
                    int *l_1481 = &g_7;
                    int *l_1482 = &g_92;
                    int *l_1483 = &l_667;
                    int *l_1484 = &l_1318;
                    int *l_1485 = &l_667;
                    int *l_1486 = &g_92;
                    int *l_1487 = &l_741;
                    int *l_1488 = (void*)0;
                    int *l_1489 = &g_92;
                    int *l_1490 = &l_1134;
                    int *l_1491 = &l_1318;
                    int *l_1492 = &l_633;
                    int *l_1493 = &g_66;
                    int *l_1494 = &g_7;
                    int *l_1496 = &l_749;
                    int *l_1497 = &l_1134;
                    int *l_1498 = &l_749;
                    if ((*g_545))
                    {
                        (*l_804) |= (*g_6);
                        (*g_195) = (*g_195);
                    }
                    else
                    {
                        return g_415;
                    }
                    ++l_1499;
                }
            }

            ;

            for (l_749 = 2; (l_749 > (-20)); l_749 = safe_sub_func_uint32_t_u_u(l_749, 4))
            {
                unsigned short l_1504 = 0xF42AL;
                int l_1507 = 1L;
                char l_1508 = 0x89L;
                l_1504--;
                if ((*l_804))
                    break;
                l_1507 = (*g_559);
                (*l_967) = func_28(func_52(&l_1443, l_1508, g_104, &g_1161), g_27, g_2);

                ;
                ;
            }

            ;
        }

        ;

        g_1642++;
    }
    else
    {
        int l_1645 = 1L;
        int **l_1652 = (void*)0;
        int l_1692 = (-1L);
        int l_1703 = 9L;
        int l_1713 = 0xF62C9AFEL;
        int l_1762 = 0x5472D686L;
        unsigned l_1837 = 0UL;
        int ***l_1856 = &l_1652;
        int *l_1857 = &g_1161;
        unsigned short l_1936 = 0xC8BAL;
        if ((l_1645 & (((safe_mod_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((((func_19(&g_92, ((*l_804) & (&g_432 == l_1652))) || (*l_804)) && (((g_520 & ((l_1652 == (*l_966)) <= (*g_412))) ^ 4294967293UL) != (*l_804))) == g_264), (*l_143))), (*l_804))) >= 6UL) < (*l_143))))
        {
            int l_1722 = 8L;
            int *l_1806 = &g_66;
            unsigned l_1850 = 4294967289UL;
            unsigned l_1880 = 9UL;
            int *l_1883 = &l_741;
            int *l_1884 = &l_1607;
            int *l_1885 = (void*)0;
            int *l_1886 = &l_1626;
            int *l_1887 = &g_1161;
            int *l_1888 = &g_1161;
            int *l_1889 = (void*)0;
            int *l_1890 = &l_749;
            int *l_1891 = (void*)0;
            int *l_1892 = &l_667;
            int *l_1893 = &g_366;
            int *l_1894 = &g_7;
            int *l_1895 = &l_1607;
            int *l_1896 = &g_92;
            int *l_1897 = &l_1713;
            int *l_1898 = &g_92;
            int *l_1899 = &l_749;
            int *l_1900 = &l_1607;
            int *l_1901 = (void*)0;
            int *l_1902 = (void*)0;
            int *l_1903 = &l_1626;
            int *l_1904 = &l_1703;
            int *l_1905 = &l_667;
            int *l_1906 = (void*)0;
            int *l_1907 = &l_749;
            int *l_1908 = &l_1713;
            int *l_1909 = &l_1703;
            int *l_1910 = &l_1626;
            int *l_1911 = &l_749;
            int *l_1912 = &l_1626;
            int *l_1913 = &g_366;
            int *l_1914 = &l_1626;
            int *l_1915 = &l_1134;
            int *l_1916 = (void*)0;
            int *l_1917 = (void*)0;
            int *l_1918 = &g_1161;
            unsigned l_1919 = 1UL;
            (*l_143) ^= (*g_412);
            if ((*l_804))
            {
                int *l_1655 = (void*)0;
                int *l_1656 = &g_66;
                int *l_1657 = &l_749;
                int *l_1658 = &l_667;
                int *l_1659 = &l_741;
                int *l_1660 = &g_1161;
                int *l_1661 = &g_7;
                int *l_1662 = &g_66;
                int *l_1663 = &l_741;
                int *l_1664 = (void*)0;
                int *l_1665 = &l_1607;
                int *l_1666 = &l_1134;
                int *l_1667 = &l_741;
                int *l_1668 = &l_1134;
                int *l_1669 = &l_1607;
                int *l_1670 = &l_749;
                int *l_1671 = &l_1626;
                int *l_1672 = &g_1161;
                int *l_1673 = &l_1607;
                int *l_1674 = &g_7;
                int *l_1675 = &g_66;
                int *l_1676 = &l_667;
                int *l_1677 = (void*)0;
                int *l_1678 = (void*)0;
                int *l_1679 = &g_1161;
                int *l_1680 = (void*)0;
                int *l_1681 = (void*)0;
                int *l_1682 = &l_741;
                int *l_1683 = &g_366;
                int *l_1684 = &g_7;
                int *l_1685 = &g_7;
                int *l_1686 = (void*)0;
                int *l_1687 = &l_1607;
                int *l_1688 = &g_366;
                int *l_1689 = &g_366;
                int *l_1690 = &l_749;
                int *l_1691 = &g_366;
                int *l_1693 = &g_1161;
                int *l_1694 = &g_92;
                int *l_1695 = &l_633;
                int *l_1696 = &l_1134;
                int *l_1697 = &l_633;
                int *l_1698 = &l_749;
                int *l_1699 = &g_92;
                int *l_1700 = &l_1626;
                int *l_1701 = &l_1626;
                int *l_1702 = &l_1134;
                int *l_1704 = &l_1692;
                int *l_1705 = &g_366;
                int *l_1706 = &l_1703;
                int *l_1707 = &l_749;
                int *l_1708 = &g_92;
                int *l_1709 = (void*)0;
                int *l_1710 = &l_749;
                int *l_1711 = &l_1626;
                int *l_1712 = &l_749;
                int *l_1714 = &l_749;
                int *l_1715 = &l_1134;
                int *l_1716 = (void*)0;
                int *l_1717 = (void*)0;
                int *l_1718 = &g_1161;
                int *l_1719 = (void*)0;
                int *l_1720 = &l_1607;
                int *l_1721 = &l_667;
                int *l_1723 = (void*)0;
                int *l_1724 = (void*)0;
                int *l_1725 = &l_749;
                int *l_1726 = &l_1703;
                int *l_1727 = (void*)0;
                int *l_1728 = &l_667;
                int *l_1729 = (void*)0;
                int *l_1730 = &l_1713;
                int *l_1731 = &l_749;
                int *l_1732 = &l_741;
                int *l_1733 = &l_1607;
                int *l_1734 = &l_1692;
                int *l_1735 = &l_741;
                int *l_1736 = &g_1161;
                int *l_1737 = &g_66;
                int *l_1738 = &l_1703;
                int *l_1739 = &l_1692;
                int *l_1740 = &l_741;
                int *l_1741 = &l_1134;
                int *l_1742 = &l_741;
                int *l_1743 = &g_7;
                int *l_1744 = (void*)0;
                int *l_1745 = &l_667;
                int *l_1746 = &l_1134;
                int *l_1747 = (void*)0;
                int *l_1748 = &l_1703;
                int *l_1749 = (void*)0;
                int *l_1750 = &l_633;
                int *l_1751 = &l_1134;
                int *l_1752 = &l_1134;
                int *l_1753 = &l_667;
                int *l_1754 = &g_66;
                int *l_1755 = &g_366;
                int *l_1756 = (void*)0;
                int *l_1757 = &l_633;
                int *l_1758 = &g_66;
                int *l_1759 = &l_667;
                int *l_1760 = &g_366;
                int *l_1761 = (void*)0;
                int *l_1763 = &l_1762;
                int *l_1764 = &g_1161;
                int *l_1765 = (void*)0;
                int *l_1766 = &l_749;
                int *l_1767 = &l_1713;
                int *l_1768 = (void*)0;
                int *l_1769 = &l_667;
                int *l_1770 = (void*)0;
                int *l_1771 = &g_92;
                int *l_1772 = &l_1134;
                int *l_1773 = &l_1626;
                int *l_1774 = &g_66;
                int *l_1775 = &l_1713;
                unsigned char l_1798 = 0UL;
                g_1776--;
                if ((*g_545))
                {
                    int *l_1787 = (void*)0;
                    for (g_66 = (-12); (g_66 < 27); g_66++)
                    {
                        return g_184;
                    }
                    if ((*g_412))
                    {
                        (*l_1764) ^= (safe_sub_func_uint8_t_u_u((&l_1652 != &g_195), g_92));
                    }
                    else
                    {
                        int *l_1783 = (void*)0;
                        l_1783 = l_1783;
                    }
                    for (l_1713 = 0; (l_1713 == (-4)); l_1713 = safe_sub_func_int16_t_s_s(l_1713, 9))
                    {
                        unsigned l_1786 = 0x021BB5F9L;
                        (*l_1745) &= ((func_11(l_1786, &g_7, l_1787) | ((g_2 < (safe_add_func_int32_t_s_s(l_1786, func_52(l_1712, ((((**g_195) ^ ((safe_lshift_func_int16_t_s_u((*l_1657), l_1722)) & 0x1178B2E4L)) <= g_182) & (*g_196)), l_1722, (**l_966))))) < 0x26FBL)) || (-1L));
                    }
                }
                else
                {
                    return (*l_143);
                }
                if ((~0x541768A4L))
                {
                    for (g_182 = 16; (g_182 != 3); g_182--)
                    {
                        int l_1794 = 1L;
                        return l_1794;
                    }
                }
                else
                {
                    unsigned char l_1807 = 255UL;
                    for (l_615 = 0; (l_615 != 31); l_615 = safe_add_func_int32_t_s_s(l_615, 3))
                    {
                        unsigned char l_1797 = 0x06L;
                        (*l_1740) ^= l_1797;
                        if (l_1798)
                            continue;
                        --g_1799;
                        (*l_1728) = ((*l_804) != func_11(g_1161, l_1806, &g_66));
                    }
                    l_1807--;
                }
            }
            else
            {
                int *l_1810 = &l_633;
                int *l_1811 = &l_1626;
                int *l_1812 = &g_1161;
                int l_1813 = 1L;
                int *l_1814 = &l_1703;
                int *l_1815 = &l_1607;
                int *l_1816 = &l_1607;
                int *l_1817 = &l_1762;
                int *l_1818 = (void*)0;
                int *l_1819 = (void*)0;
                int *l_1820 = &l_1703;
                int l_1849 = 2L;
                g_1821++;
                if (l_1824)
                {
                    unsigned char l_1825 = 0xF2L;
                    g_195 = &g_545;

                    ;
                    l_1825 &= (func_11((*l_1806), &g_366, &l_1813) | g_205);
                    (*l_967) = func_8(g_537, g_1826);

                    ;
                }
                else
                {
                    char l_1846 = 0xACL;
                    int ***l_1855 = &l_1652;
                    if (((*g_195) != (*g_195)))
                    {
                        int *l_1827 = &l_1703;
                        (*g_195) = l_1827;

                        ;
                    }
                    else
                    {
                        char l_1828 = 0x1CL;
                        return l_1828;
                    }

                    ;
                    if ((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((+(safe_mod_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(l_1837, (*g_417))) != ((safe_sub_func_int32_t_s_s((*g_196), g_1776)) || (safe_rshift_func_int8_t_s_u((&g_66 != &l_1813), 7)))), (safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u(l_1846, (((l_1846 <= (safe_add_func_int8_t_s_s((*l_1806), g_691))) || 65526UL) <= 1UL))), g_537))))) < l_1849), 6)), l_1850)))
                    {
                        (*g_195) = l_1851;

                        ;
                        (*l_966) = &l_1816;

                        ;
                        return l_1846;


                    }
                    else
                    {
                        unsigned short l_1852 = 0x1A19L;
                        short l_1858 = 0xF31CL;
                        int *l_1859 = &l_1134;
                        int *l_1860 = &g_66;
                        int *l_1861 = (void*)0;
                        int *l_1862 = &l_1813;
                        int *l_1863 = (void*)0;
                        int *l_1864 = (void*)0;
                        int *l_1865 = &l_741;
                        int *l_1866 = (void*)0;
                        int *l_1867 = &g_366;
                        int *l_1868 = (void*)0;
                        int *l_1869 = &l_741;
                        int *l_1870 = &l_1703;
                        int *l_1871 = &l_1134;
                        int *l_1872 = &l_1626;
                        int *l_1873 = &g_66;
                        int *l_1874 = &l_1703;
                        int *l_1875 = &l_1607;
                        int *l_1876 = &g_1161;
                        int *l_1877 = &l_1692;
                        int *l_1878 = &l_1849;
                        int *l_1879 = &g_66;
                        (*l_1814) ^= (-8L);
                        (*g_195) = func_22(func_32(l_1806, &g_366, &g_66, func_48((*l_1806), g_1799, l_1852), (((safe_mod_func_uint16_t_u_u(func_11(func_11((l_1855 == l_1856), &g_366, &g_7), l_1857, &g_66), 6UL)) >= 0UL) ^ g_27)), l_1852, &g_1161, &g_1161);

                        ;
                        --l_1880;
                        return g_135;
                    }
                }

                ;
                ;
            }

            ;
            ;
            (*l_967) = (*l_967);
            --l_1919;
        }
        else
        {
            short l_1928 = 0x86A9L;
            int l_1935 = 0x06C367F4L;
            int **l_1937 = &g_142;
            (*l_804) |= ((safe_mul_func_int16_t_s_s(func_11(g_27, &g_66, &g_66), (safe_add_func_int16_t_s_s(((*g_195) != (*g_195)), func_48((safe_sub_func_int16_t_s_s(((l_1928 >= ((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(func_52(&g_66, (safe_mod_func_int8_t_s_s(g_1821, g_537)), g_105, &g_66), l_1935)), 0xBFL)) > g_1136)) || g_101), g_104)), l_1936, (*l_1857)))))) | l_1928);
            (*l_804) &= ((((*g_196) ^ (l_1937 == (*l_966))) ^ ((*g_559) | 0x8E27E5BEL)) > (*g_196));
        }

        ;
        ;
    }

    ;

    ;
    for (g_1821 = 0; (g_1821 < 21); g_1821++)
    {
        int *l_1942 = &l_749;
        int l_1948 = 2L;
        l_1948 ^= (safe_sub_func_int16_t_s_s(((func_32((*l_967), func_28(g_1641, g_104, (func_52(l_1942, l_1943, (safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((g_780 >= (func_11((0x6FD5L && (*l_1942)), &g_92, &g_7) ^ (*l_1942))), (*l_1942))) >= (*l_1942)), g_907)), (*l_967)) != (*l_1942))), &g_1161, (*l_804), (*l_1942)) | (*l_1942)) == 1UL), (*l_143)));
        (**l_966) = &g_66;

        ;
        (*g_432) = (safe_add_func_uint8_t_u_u(255UL, ((**l_966) != (*l_967))));
    }

    ;
    return g_1954;
}







static int * func_8(char p_9, unsigned p_10)
{
    int l_549 = 0x92F46DA8L;
    int **l_556 = &g_196;
    int *l_563 = &g_92;
    if ((((safe_lshift_func_uint16_t_u_u(l_549, 12)) | (safe_mul_func_uint16_t_u_u(l_549, ((l_549 ^ p_10) <= (safe_sub_func_int16_t_s_s(g_176, ((safe_mul_func_int8_t_s_s(l_549, (((l_556 != (void*)0) & (safe_add_func_uint32_t_u_u(g_415, 0xFDF876F5L))) > p_9))) && p_10))))))) <= g_66))
    {
        (*g_559) ^= (p_10 && 1L);
    }
    else
    {
        int ***l_560 = (void*)0;
        int ***l_561 = &l_556;
        int **l_562 = &g_142;
        (*l_561) = (void*)0;

        ;
        (*l_561) = l_562;

        ;
    }

    ;
    return l_563;


}







static unsigned func_11(int p_12, int * p_13, int * p_14)
{
    short l_546 = 1L;
    return l_546;
}







static unsigned short func_19(int * p_20, unsigned short p_21)
{
    for (g_138 = (-10); (g_138 >= 34); g_138 = safe_add_func_uint8_t_u_u(g_138, 7))
    {
        (*g_545) ^= (0xCFL < (g_182 <= 0x34912621L));
    }
    return p_21;
}







static int * func_22(int p_23, char p_24, int * p_25, int * p_26)
{
    unsigned l_422 = 0xBB6A36FDL;
    unsigned l_423 = 4294967295UL;
    int l_444 = 0x0B885B43L;
    int l_448 = (-7L);
    int l_470 = (-4L);
    int l_530 = 3L;
    if ((!(p_23 >= (func_48(((safe_lshift_func_uint8_t_u_u(g_2, 0)) | (p_24 != func_48(l_422, l_423, (*p_25)))), (safe_rshift_func_uint16_t_u_u(1UL, (p_24 && l_422))), (*p_26)) <= g_105))))
    {
        short l_428 = 0x8702L;
        p_23 = (+(g_295 == (safe_mul_func_uint8_t_u_u(p_23, l_428))));
    }
    else
    {
        int *l_433 = &g_66;
        int *l_434 = (void*)0;
        int l_435 = 0x5F00A3DEL;
        int *l_436 = &g_66;
        int *l_437 = &g_366;
        int *l_438 = &g_66;
        int *l_439 = &g_92;
        int *l_440 = &g_366;
        int *l_441 = &g_366;
        int *l_442 = (void*)0;
        int *l_443 = &g_66;
        int *l_445 = (void*)0;
        int *l_446 = &l_444;
        int *l_447 = (void*)0;
        int *l_449 = &g_66;
        int *l_450 = &g_66;
        int *l_451 = &l_444;
        int *l_452 = &g_66;
        int *l_453 = (void*)0;
        int *l_454 = &l_444;
        int l_455 = (-1L);
        int *l_456 = (void*)0;
        int *l_457 = &l_435;
        int *l_458 = &g_366;
        int *l_459 = &l_448;
        int *l_460 = &g_92;
        int *l_461 = &l_448;
        int *l_462 = &g_66;
        int *l_463 = &l_455;
        int *l_464 = (void*)0;
        int *l_465 = &g_366;
        int *l_466 = &g_92;
        int *l_467 = &l_448;
        int *l_468 = (void*)0;
        int *l_469 = &g_66;
        int *l_471 = &l_470;
        int *l_472 = &l_435;
        int *l_473 = &g_66;
        int *l_474 = (void*)0;
        int *l_475 = &l_448;
        int *l_476 = &l_444;
        int *l_477 = &g_92;
        int *l_478 = &l_448;
        int *l_479 = &l_448;
        int *l_480 = &l_455;
        int *l_481 = &g_366;
        int *l_482 = &g_366;
        int *l_483 = &l_444;
        int *l_484 = &l_448;
        int *l_485 = &g_92;
        int *l_486 = &l_470;
        int *l_487 = &l_435;
        int *l_488 = (void*)0;
        int *l_489 = &g_92;
        int *l_490 = (void*)0;
        int *l_491 = &l_444;
        int *l_492 = &l_470;
        int *l_493 = &g_92;
        int *l_494 = (void*)0;
        int *l_495 = &l_470;
        int *l_496 = &l_470;
        int l_497 = 7L;
        int *l_498 = &l_444;
        int *l_499 = &l_444;
        int *l_500 = (void*)0;
        int l_501 = (-4L);
        int *l_502 = &l_444;
        int *l_503 = (void*)0;
        int *l_504 = &l_470;
        int *l_505 = &l_435;
        int *l_506 = &l_470;
        int *l_507 = (void*)0;
        int *l_508 = &l_470;
        int *l_509 = &l_444;
        int l_510 = 0x70E6D607L;
        int *l_511 = (void*)0;
        int *l_512 = &g_66;
        int *l_513 = (void*)0;
        int *l_514 = &l_455;
        int *l_515 = &l_470;
        int *l_516 = &l_510;
        int *l_517 = &l_510;
        int *l_518 = &l_510;
        int *l_519 = (void*)0;
        int *l_521 = &l_497;
        int *l_522 = &g_366;
        int *l_523 = &l_501;
        int *l_524 = (void*)0;
        int *l_525 = &l_448;
        int *l_526 = &g_92;
        int l_527 = (-1L);
        int *l_528 = &l_527;
        int *l_529 = &g_366;
        int *l_532 = &l_527;
        int *l_533 = &g_92;
        int *l_534 = (void*)0;
        int *l_535 = &l_530;
        int *l_536 = &l_444;
        unsigned char l_540 = 0xE3L;
        for (g_415 = 0; (g_415 < 10); ++g_415)
        {
            (*g_432) = (**g_195);
        }
        ++g_537;
        (*l_476) = (l_470 >= (*l_536));
        l_540--;
    }
    (*g_195) = &p_23;

    ;
    return &g_7;



}







static int * func_28(unsigned p_29, int p_30, char p_31)
{
    int *l_414 = &g_7;
    int *l_416 = &g_92;
    (*g_195) = l_414;
    g_415 = (*l_414);
    (*l_416) = (*g_6);
    (*g_417) ^= (*l_416);
    return l_414;


}







static short func_32(int * p_33, int * p_34, int * p_35, unsigned p_36, unsigned char p_37)
{
    int **l_403 = &g_142;
    int ***l_404 = &l_403;
    (*l_404) = l_403;
    for (g_205 = 28; (g_205 == 37); g_205 = safe_add_func_int8_t_s_s(g_205, 4))
    {
        for (g_66 = 0; (g_66 < (-28)); g_66 = safe_sub_func_int16_t_s_s(g_66, 5))
        {
            unsigned short l_411 = 0x0C31L;
            (*l_403) = (void*)0;

            ;
            (*g_412) = ((g_263 < (safe_mul_func_uint16_t_u_u((4294967294UL > (g_138 && (((*p_35) ^ (func_48(p_37, (&p_33 != (void*)0), (*p_34)) && g_105)) > 0x78L))), p_36))) > l_411);

            ;
        }
    }
    return g_138;
}







static int * func_38(unsigned short p_39, int * p_40, int * p_41, unsigned p_42)
{
    int *l_144 = &g_92;
    int *l_145 = &g_66;
    int *l_146 = (void*)0;
    int *l_147 = &g_92;
    int *l_148 = &g_92;
    int *l_149 = &g_66;
    int *l_150 = &g_66;
    int *l_151 = &g_66;
    int *l_152 = &g_92;
    int *l_153 = &g_92;
    int *l_154 = &g_66;
    int *l_155 = &g_92;
    int l_156 = (-8L);
    int *l_157 = (void*)0;
    int l_158 = 0xB047B2A2L;
    int *l_159 = &g_66;
    int *l_160 = &l_158;
    int *l_161 = (void*)0;
    int l_162 = 0x9F9BE492L;
    int *l_163 = &l_162;
    int *l_164 = (void*)0;
    int *l_165 = &l_162;
    int *l_166 = &l_156;
    int *l_167 = (void*)0;
    int *l_168 = (void*)0;
    int *l_169 = (void*)0;
    int *l_170 = &g_92;
    int *l_171 = &g_92;
    int *l_172 = &l_158;
    int *l_173 = &l_162;
    int *l_174 = &g_92;
    int *l_175 = &g_92;
    int l_177 = 0x6DC0DC4BL;
    int *l_178 = &l_158;
    int l_179 = 0xDAF57E05L;
    int *l_180 = &l_177;
    int *l_181 = &g_66;
    int *l_183 = &l_177;
    char l_187 = 2L;
    int l_227 = 0xF009EE3FL;
    int *l_310 = &l_162;
    int **l_383 = &l_149;
    unsigned l_399 = 2UL;
    ++g_184;
    if (l_187)
    {
        int **l_188 = &l_150;
        int *l_189 = &l_177;
        int l_197 = 0L;
        int l_198 = 0xAB760D96L;
        int l_204 = 0L;
        int *l_215 = &g_92;
        unsigned l_218 = 0x1D30752CL;
        short l_236 = (-10L);
        unsigned char l_254 = 0x2FL;
        char l_292 = (-8L);
        int *l_312 = &g_66;
        (*l_188) = &l_156;

        ;
        if (((l_189 == &l_177) >= (p_42 > (safe_lshift_func_int16_t_s_s((p_39 && (g_27 && 0x1696E83DL)), 0)))))
        {
            char l_194 = 0x3EL;
            int l_199 = 0L;
            int l_200 = 4L;
            int *l_201 = &l_158;
            int *l_202 = &l_199;
            int *l_203 = &g_92;
            if (((((safe_rshift_func_int16_t_s_u((func_48(g_176, l_194, (*g_142)) <= (p_42 == g_66)), 4)) ^ g_27) && 0x65DCB784L) | (((void*)0 == g_195) <= p_39)))
            {
                (*l_145) = 0xA941DAE9L;
            }
            else
            {
                (*g_195) = p_41;

                ;
            }

            ;
            g_205--;
            (*g_195) = (*l_188);

            ;
        }
        else
        {
            char l_208 = 1L;
            int *l_260 = &l_162;
            int l_261 = 0x7677C38BL;
            unsigned l_304 = 0x01544EF6L;
lbl_300:
            l_208 &= 0xC2C81858L;
lbl_226:
            (*l_145) = (safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((p_40 != (*g_195)) >= p_39), func_52(l_215, (0x807BL && (g_135 >= func_52(p_40, g_104, (safe_mul_func_uint8_t_u_u((*l_215), p_42)), p_40))), g_104, p_41))), (-1L))), 4));
            if (l_218)
            {
                unsigned l_223 = 4294967291UL;
                int l_262 = 0xB4ADEE2FL;
lbl_255:
                for (l_208 = 0; (l_208 >= 26); l_208 = safe_add_func_int32_t_s_s(l_208, 9))
                {
                    for (g_184 = 0; (g_184 > 34); g_184++)
                    {
                        --l_223;
                        if (g_135)
                            goto lbl_226;
                        (*l_188) = &l_156;

                        ;
                    }
                }
                if (func_48(((*p_40) || ((l_227 == (((1UL & (3UL != ((!(safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(g_2, (l_223 ^ func_48((p_39 == (safe_rshift_func_int8_t_s_s((((((safe_rshift_func_uint8_t_u_u(l_208, p_42)) || p_42) > (-7L)) > 0x6CBB3E61L) || 0xA6L), 2))), l_236, (*g_196))))), p_39))) >= 0x35L))) ^ g_7) & (*p_40))) != p_42)), g_101, (*p_40)))
                {
                    unsigned char l_253 = 250UL;
                    if ((p_39 < (((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((*g_6) & (*l_149)), (((((safe_mul_func_uint8_t_u_u((p_39 != (safe_sub_func_int32_t_s_s((*g_142), (*g_142)))), p_39)) || ((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(0UL, 14)), 0xF5L)) > l_253)) >= g_101) | 4294967295UL) && g_205))), l_223)), p_42)), l_254)) > 254UL) && 0UL)))
                    {
                        (*g_195) = (*g_195);
                    }
                    else
                    {
                        if (l_236)
                            goto lbl_255;
                        return &g_92;


                    }
                    for (l_197 = 20; (l_197 <= (-9)); l_197 = safe_sub_func_int8_t_s_s(l_197, 3))
                    {
                        (*l_183) ^= (p_42 == ((safe_add_func_uint8_t_u_u((**l_188), 0UL)) ^ (**g_195)));
                        (*g_195) = l_260;

                        ;
                    }

                    ;
                    g_264--;
                }
                else
                {
                    int l_269 = 0x3C54BD25L;
                    (*l_165) = ((safe_rshift_func_uint8_t_u_u(l_269, (l_269 && (safe_rshift_func_uint16_t_u_s(0xDA7DL, 6))))) > (((safe_sub_func_uint16_t_u_u((((*p_41) != g_112) ^ (safe_mul_func_uint16_t_u_u((*l_163), ((safe_unary_minus_func_int16_t_s(((p_39 == p_42) > (l_269 != 0xC662L)))) <= (*l_155))))), (*l_174))) ^ p_39) && (-10L)));
                }

                ;
            }
            else
            {
                int *l_283 = (void*)0;
                int l_324 = 0L;
                if ((0UL ^ (safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s(func_52(p_41, ((g_105 || 1L) >= ((*l_260) < 0x14L)), g_176, l_283), 6)) < (**g_195)), 13)), 2))))
                {
                    char l_288 = (-9L);
                    int l_293 = (-1L);
                    int l_303 = 0xE832F596L;
                    for (g_101 = 0; (g_101 > (-27)); g_101 = safe_sub_func_int16_t_s_s(g_101, 5))
                    {
                        int l_291 = 8L;
                        int *l_294 = &g_66;
                        l_291 = (safe_mul_func_uint8_t_u_u(((func_52(&g_66, (!func_52(p_40, l_288, (*l_260), &l_162)), (safe_rshift_func_int16_t_s_s(p_39, ((248UL & ((void*)0 != &g_196)) != (-1L)))), &g_7) != (*p_40)) ^ p_42), g_135));
                        g_295++;
                    }
                    for (l_158 = (-8); (l_158 <= 29); l_158++)
                    {
                        if ((*g_142))
                            break;
                        if (l_162)
                            goto lbl_300;
                        (*l_188) = &l_261;

                        ;
                        (*l_149) |= (safe_lshift_func_int16_t_s_u((&l_179 == &l_261), 7));
                    }
                    --l_304;
                }
                else
                {
                    return &g_66;


                }
                if ((((*l_260) >= (*l_181)) || ((&g_142 == &p_40) || 0L)))
                {
                    unsigned short l_307 = 1UL;
                    l_307--;
                }
                else
                {
                    unsigned char l_317 = 0x85L;
                    int l_322 = 0L;
                    int l_358 = (-5L);
                    (*g_195) = (*g_195);
                    l_310 = p_41;

                    ;
                    if ((*g_6))
                    {
                        int *l_311 = &g_66;
                        l_312 = l_311;
                        (*l_180) |= func_48((safe_mod_func_int32_t_s_s(func_52(&l_162, ((p_42 | (safe_mul_func_uint8_t_u_u((*l_260), ((-8L) < 0UL)))) & (&l_168 != &g_6)), func_52(p_40, p_42, l_317, l_311), p_40), g_295)), p_42, (*l_260));
                    }
                    else
                    {
                        int l_323 = 0x4F6E6616L;
                        int *l_325 = &l_158;
                        int *l_326 = &l_177;
                        int *l_327 = &l_324;
                        int *l_328 = &g_66;
                        int *l_329 = &l_261;
                        int *l_330 = &l_227;
                        int *l_331 = &g_92;
                        int *l_332 = (void*)0;
                        int *l_333 = &l_156;
                        int l_334 = 8L;
                        int *l_335 = (void*)0;
                        int *l_336 = (void*)0;
                        int *l_337 = (void*)0;
                        int *l_338 = &l_204;
                        int *l_339 = &l_162;
                        int *l_340 = &l_158;
                        int *l_341 = &l_179;
                        int *l_342 = (void*)0;
                        int *l_343 = &l_156;
                        int *l_344 = &l_261;
                        int *l_345 = &l_204;
                        int *l_346 = (void*)0;
                        int *l_347 = &l_204;
                        int *l_348 = (void*)0;
                        int *l_349 = &g_66;
                        int *l_350 = &l_197;
                        int *l_351 = &l_177;
                        int *l_352 = &l_158;
                        int *l_353 = (void*)0;
                        int *l_354 = &l_334;
                        int *l_355 = &l_158;
                        int *l_356 = &l_334;
                        int *l_357 = &l_197;
                        int *l_359 = &l_162;
                        int *l_360 = &l_334;
                        int l_361 = 0xC09D9FA9L;
                        int *l_362 = (void*)0;
                        int *l_363 = &l_162;
                        int *l_364 = &l_227;
                        int *l_365 = &l_324;
                        int *l_367 = &l_322;
                        int *l_368 = &l_204;
                        int *l_369 = &l_158;
                        int * volatile l_373 = (void*)0;
                        (*l_165) ^= (safe_lshift_func_uint8_t_u_u(func_52(&g_92, ((*l_215) && p_42), g_176, p_41), g_27));
                        (**l_188) = (safe_lshift_func_int8_t_s_s(0x95L, 5));
                        --g_370;
                        l_373 = (*g_195);

                        ;
                    }
                    (*g_142) = 1L;
                }

                ;
            }

            ;
            ;
        }


        ;
        ;
        if ((safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((&g_196 != (void*)0), (*p_41))), g_138)))
        {
            (*l_188) = p_41;

            ;
        }
        else
        {
            unsigned l_378 = 0x6BB902BFL;
            l_378--;
            (*l_173) &= (((*l_215) > ((*l_189) || g_135)) == ((safe_rshift_func_uint16_t_u_u((((*p_40) <= (l_383 != (void*)0)) & (safe_sub_func_uint32_t_u_u((((safe_sub_func_int32_t_s_s((g_205 || g_264), (*p_40))) | p_42) < g_184), 1L))), 1)) > g_27));
        }


    }
    else
    {
        (*g_195) = p_41;

        ;
    }


    ;
    ;
    for (l_158 = 10; (l_158 == 25); l_158++)
    {
        short l_390 = 0xA273L;
        int l_391 = (-3L);
        int l_392 = 1L;
        char l_393 = 0x71L;
        int *l_394 = &l_162;
        int *l_395 = (void*)0;
        int *l_396 = &l_156;
        int *l_397 = &l_227;
        int *l_398 = (void*)0;
        l_399++;
    }
    return &g_366;



}







static unsigned short func_48(unsigned char p_49, unsigned short p_50, int p_51)
{
    unsigned l_93 = 0xD8CACF64L;
    int l_107 = 0xB34BCD01L;
    int l_109 = 0x0BBFFD32L;
    int l_125 = 3L;
    if (l_93)
    {
        return g_92;
    }
    else
    {
        int l_94 = 0x53AAA0C7L;
        int *l_95 = (void*)0;
        int *l_96 = &g_66;
        int *l_97 = &g_66;
        unsigned char l_98 = 0x23L;
        int *l_102 = &l_94;
        int *l_103 = &g_66;
        int *l_106 = &g_92;
        int *l_108 = &l_107;
        int *l_110 = &l_107;
        int *l_111 = (void*)0;
        int *l_113 = &l_109;
        int *l_114 = &g_92;
        int *l_115 = &l_109;
        int l_116 = 0xE0AFCEDFL;
        int *l_117 = (void*)0;
        int *l_118 = &l_94;
        int *l_119 = &g_92;
        int *l_120 = &l_94;
        int *l_121 = &l_116;
        int *l_122 = (void*)0;
        int *l_123 = &g_66;
        int *l_124 = &g_66;
        int *l_126 = (void*)0;
        int *l_127 = &l_109;
        int *l_128 = (void*)0;
        int *l_129 = &l_107;
        int *l_130 = (void*)0;
        int *l_131 = &l_107;
        int *l_132 = &g_92;
        int *l_133 = &l_109;
        int *l_134 = &l_116;
        int *l_136 = &l_94;
        int *l_137 = &l_116;
        int **l_141 = &l_111;
        l_98--;
        g_138++;
        (*l_141) = &l_116;

        ;
    }
    g_142 = &g_66;

    ;
    return l_93;
}







static unsigned char func_52(int * p_53, char p_54, unsigned char p_55, int * p_56)
{
    unsigned short l_62 = 1UL;
    int *l_65 = &g_66;
    (*l_65) = ((((((safe_add_func_int32_t_s_s((g_7 != (safe_sub_func_int16_t_s_s(l_62, 2UL))), ((safe_mul_func_uint8_t_u_u(p_54, g_7)) < (0UL <= 1L)))) >= p_55) && ((p_54 >= l_62) == g_7)) && g_7) || g_7) <= 0L);
    (*l_65) = (((*l_65) != ((p_54 | ((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s((0xD4EEL > (p_54 && (g_66 || (safe_sub_func_int8_t_s_s(p_54, p_55))))), 4)), ((void*)0 != l_65))) <= 0xFEL)) || 0L)) & 0xBF0B62E5L);
    for (p_55 = 0; (p_55 != 14); p_55 = safe_add_func_uint16_t_u_u(p_55, 4))
    {
        short l_77 = 0x8BE3L;
        if ((safe_add_func_int32_t_s_s((&g_66 == &g_7), ((((((*l_65) | 0x1E05L) <= g_27) || l_77) | ((safe_mul_func_uint16_t_u_u(p_55, 0x6DC9L)) ^ (safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u(l_77, l_77)) | 4294967295UL), (*l_65))), g_66)))) & p_54))))
        {
            return g_7;
        }
        else
        {
            int *l_90 = (void*)0;
            int *l_91 = &g_92;
            (*l_91) &= ((safe_add_func_uint8_t_u_u((*l_65), (safe_sub_func_uint8_t_u_u(p_54, (0xE92ECD44L == 4294967290UL))))) != (*l_65));
            return p_54;
        }
    }
    return (*l_65);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_370, "g_370", print_hash_value);
    transparent_crc(g_415, "g_415", print_hash_value);
    transparent_crc(g_520, "g_520", print_hash_value);
    transparent_crc(g_531, "g_531", print_hash_value);
    transparent_crc(g_537, "g_537", print_hash_value);
    transparent_crc(g_568, "g_568", print_hash_value);
    transparent_crc(g_671, "g_671", print_hash_value);
    transparent_crc(g_691, "g_691", print_hash_value);
    transparent_crc(g_733, "g_733", print_hash_value);
    transparent_crc(g_780, "g_780", print_hash_value);
    transparent_crc(g_907, "g_907", print_hash_value);
    transparent_crc(g_928, "g_928", print_hash_value);
    transparent_crc(g_1108, "g_1108", print_hash_value);
    transparent_crc(g_1136, "g_1136", print_hash_value);
    transparent_crc(g_1161, "g_1161", print_hash_value);
    transparent_crc(g_1162, "g_1162", print_hash_value);
    transparent_crc(g_1641, "g_1641", print_hash_value);
    transparent_crc(g_1642, "g_1642", print_hash_value);
    transparent_crc(g_1776, "g_1776", print_hash_value);
    transparent_crc(g_1799, "g_1799", print_hash_value);
    transparent_crc(g_1821, "g_1821", print_hash_value);
    transparent_crc(g_1826, "g_1826", print_hash_value);
    transparent_crc(g_1954, "g_1954", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
