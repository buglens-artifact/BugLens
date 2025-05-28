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



static int g_4 = 0x04CD4536L;
static int *g_15 = &g_4;
static char g_34 = 0xF7L;
static short g_50 = (-5L);
static char *g_65 = &g_34;
static char **g_64 = &g_65;
static char *** volatile g_63 = &g_64;
static unsigned g_85 = 3UL;
static int g_87 = 0x76C5B50AL;
static unsigned short g_99 = 65535UL;
static volatile int g_115 = 0L;
static unsigned char g_117 = 247UL;
static volatile unsigned g_130 = 0xC9451C11L;
static volatile unsigned short g_139 = 0x6972L;
static int g_186 = (-9L);
static volatile int g_206 = 0xADD045E2L;
static int g_216 = 0xC684B151L;
static volatile int g_230 = 0x3AF78C48L;
static unsigned *g_256 = &g_85;
static short g_276 = 0x5568L;
static int ** volatile g_280 = (void*)0;
static int * volatile g_305 = &g_87;
static short *g_307 = &g_50;
static short ** volatile g_306 = &g_307;
static int g_385 = (-2L);
static unsigned short g_391 = 0x54ACL;
static unsigned g_436 = 0xA000A43AL;
static int *g_441 = &g_186;
static int * volatile *g_440 = &g_441;
static volatile unsigned g_518 = 0xFF04680BL;
static int * volatile g_542 = &g_385;
static int * volatile g_544 = &g_87;
static short g_559 = 5L;
static unsigned g_560 = 2UL;
static short g_570 = 0xEB1FL;
static int * volatile g_573 = &g_87;
static unsigned g_575 = 3UL;
static volatile int g_658 = 0x637A361FL;
static volatile unsigned g_763 = 0x1C687ED9L;
static unsigned **g_770 = (void*)0;
static unsigned ***g_769 = &g_770;
static char *g_771 = &g_34;
static unsigned char *g_784 = &g_117;
static unsigned char ** volatile g_783 = &g_784;
static const int *g_805 = &g_186;
static const int **g_804 = &g_805;
static const int *** volatile g_803 = &g_804;
static char g_908 = 0x9FL;
static unsigned g_1160 = 9UL;
static char g_1249 = 1L;
static volatile unsigned short g_1261 = 65529UL;
static int *g_1320 = &g_4;
static int ** volatile g_1319 = &g_1320;
static volatile unsigned short g_1356 = 1UL;
static volatile int g_1466 = 0x2526E636L;
static unsigned char g_1507 = 0x54L;
static volatile unsigned g_1659 = 0x84BD7C02L;
static unsigned char g_1670 = 0xEBL;
static volatile unsigned g_1859 = 4294967292UL;
static int * volatile g_1874 = &g_87;
static int g_1878 = (-9L);
static unsigned char g_1916 = 0xDBL;
static int *g_2000 = &g_1878;
static int ** volatile g_1999 = &g_2000;
static int ** volatile g_2103 = &g_2000;
static volatile int g_2340 = (-10L);
static volatile short g_2343 = (-10L);
static volatile short *g_2342 = &g_2343;
static const int g_2409 = 0xE1A9104BL;
static const int g_2411 = (-1L);
static volatile unsigned char g_2499 = 0x0EL;
static int ** volatile g_2502 = &g_2000;
static volatile int *g_2571 = &g_230;
static volatile int ** volatile g_2572 = &g_2571;
static int ** volatile g_2617 = &g_1320;
static char g_2631 = 0xDCL;
static int ** volatile *** volatile g_2709 = (void*)0;
static int ** volatile g_2729 = &g_15;
static int g_2770 = 0L;
static short g_2779 = 0x6440L;
static volatile int ** volatile g_2800 = &g_2571;
static volatile short g_2939 = 0x9B3CL;
static unsigned g_3124 = 0x485E252CL;
static volatile int ** const volatile g_3361 = &g_2571;
static volatile int g_3633 = (-8L);
static unsigned g_3635 = 0x46FC73F1L;
static int ** volatile g_3649 = &g_1320;
static unsigned g_3694 = 0xA25CE8B3L;
static int g_3832 = 0x07D26D25L;
static int ** volatile g_3854 = &g_15;
static int ** volatile g_3855 = &g_2000;
static int ** volatile g_3856 = &g_2000;
static unsigned char * volatile * volatile g_3869 = &g_784;
static unsigned char * volatile * volatile *g_3868 = &g_3869;
static int **g_3908 = &g_441;
static int ***g_3907 = &g_3908;
static int ** volatile g_4047 = (void*)0;
static int ** volatile g_4048 = (void*)0;
static int ** volatile g_4166 = &g_1320;



static unsigned char func_1(void);
static int * func_5(unsigned char p_6, unsigned char p_7, unsigned short p_8, int * p_9);
static unsigned char func_10(int * p_11, int * p_12, unsigned short p_13, int p_14);
static unsigned short func_19(unsigned char p_20, int * p_21, int * p_22, int * p_23, short p_24);
static char func_29(int * p_30);
static int * func_31(char p_32);
static int func_35(int * p_36, int * p_37);
static int * func_38(int p_39, const unsigned p_40, const char * p_41);
static char * func_42(unsigned p_43);
static char func_45(char * p_46, unsigned char p_47, char p_48);
static unsigned char func_1(void)
{
    int *l_2 = (void*)0;
    int *l_3 = &g_4;
    char l_3158 = (-1L);
    int l_3241 = 1L;
    unsigned short l_3268 = 65531UL;
    short * const *l_3284 = (void*)0;
    short * const **l_3283 = &l_3284;
    int l_3337 = 0xFB8EF3A4L;
    unsigned short *l_3364 = &g_391;
    char *l_3698 = &l_3158;
    const int **l_3897 = &g_805;
    char l_4139 = 0x04L;
    if (((*l_3) = 4L))
    {
        int l_18 = 0xF0720718L;
        char *l_33 = &g_34;
        int *l_2045 = &l_18;
        int **l_3129 = &g_1320;
        (*l_3129) = func_5(func_10(&g_4, g_15, ((((safe_sub_func_uint16_t_u_u(l_18, func_19((safe_sub_func_int16_t_s_s(g_4, (safe_mul_func_int8_t_s_s((-1L), func_29(((0xAE2FE817L & 0xD7006986L) , (g_4 , func_31(((*l_33) = g_4))))))))), &l_18, &l_18, l_2045, (*l_3)))) >= 0x7F435C5DL) >= (*l_2045)) & (*l_2045)), (*l_2045)), g_2631, g_2411, g_15);

        ;
        ;


        ;
        ;


    }
    else
    {
        unsigned short l_3134 = 5UL;
        int l_3159 = 1L;
        int l_3181 = 0xEFC48E0CL;
        int l_3298 = 0x72F161B4L;
        char *l_3299 = &g_34;
        unsigned short l_3354 = 0x75F2L;
        char l_3383 = 0x63L;
        unsigned ***l_3404 = (void*)0;
        int l_3625 = 0L;
        int l_3627 = 0xFD6CA55AL;
        short l_3801 = 2L;
        short l_3875 = 2L;
        const int ***l_3909 = &g_804;
        int l_3915 = (-6L);
        unsigned char l_4029 = 249UL;
        int *l_4049 = &g_4;
        if (((*g_15) = 0x9A43FA9EL))
        {
            unsigned short l_3137 = 0UL;
            char *l_3155 = &g_1249;
            int l_3160 = (-1L);
            int l_3172 = 0xEA0F1250L;
            int l_3197 = 0x3BA7F4BEL;
            int l_3222 = (-10L);
            int l_3252 = 0x1780DF2DL;
            unsigned char l_3274 = 0x37L;
            (*g_542) &= (*g_15);
            for (g_186 = 28; (g_186 >= 4); g_186 = safe_sub_func_uint16_t_u_u(g_186, 3))
            {
                const unsigned short l_3138 = 0x1300L;
                (*g_15) = (safe_sub_func_uint32_t_u_u(l_3134, ((*g_256) >= (safe_div_func_uint16_t_u_u(func_45((**g_63), l_3137, (**g_64)), l_3138)))));
            }
            if ((l_3134 < (((safe_div_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((*g_784) = func_19(((*g_784) = (**g_783)), func_38((safe_mul_func_int8_t_s_s((*g_771), (safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s(0L, l_3134)), (((safe_mod_func_int32_t_s_s((((*g_307) = (safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s(((*l_3155) = (*g_65)), (g_216 , (safe_lshift_func_int8_t_s_u((**g_64), (((*g_256) <= (*g_1320)) != (*l_3))))))), 0L))) > l_3134), l_3134)) & l_3134) >= (*l_3)))))), (*g_256), (*g_64)), &g_1878, l_2, l_3134)), (*g_771))), l_3137)) | l_3158) , (-7L))))
            {
                int *l_3161 = &g_4;
                int l_3162 = 0x9518DB6EL;
                int *l_3163 = &g_4;
                int *l_3164 = &g_385;
                int *l_3165 = &l_3162;
                int *l_3166 = (void*)0;
                int *l_3167 = &g_2770;
                int *l_3168 = &g_4;
                int *l_3169 = &g_2770;
                int *l_3170 = &g_216;
                int *l_3171 = &l_3162;
                int *l_3173 = &g_4;
                int *l_3174 = &g_385;
                int *l_3175 = &l_3172;
                int *l_3176 = &l_3159;
                int *l_3177 = &l_3160;
                int *l_3178 = (void*)0;
                int *l_3179 = (void*)0;
                int *l_3180 = &g_216;
                int *l_3182 = &g_2770;
                int *l_3183 = &l_3181;
                int *l_3184 = (void*)0;
                int *l_3185 = &l_3181;
                int *l_3186 = &l_3181;
                int *l_3187 = &g_216;
                int *l_3188 = &g_87;
                int *l_3189 = &l_3181;
                int *l_3190 = &g_87;
                int *l_3191 = (void*)0;
                int *l_3192 = &l_3159;
                int *l_3193 = &g_2770;
                int *l_3194 = &g_87;
                int *l_3195 = &g_2770;
                int *l_3196 = (void*)0;
                int *l_3198 = &g_4;
                int *l_3199 = &l_3197;
                int *l_3200 = &g_87;
                int *l_3201 = (void*)0;
                int *l_3202 = &l_3181;
                int *l_3203 = &g_385;
                int *l_3204 = &l_3160;
                int *l_3205 = &l_3160;
                int *l_3206 = &l_3160;
                int *l_3207 = &l_3159;
                int *l_3208 = &l_3162;
                int *l_3209 = (void*)0;
                int *l_3210 = &l_3181;
                int *l_3211 = &l_3172;
                int *l_3212 = &g_385;
                int *l_3213 = &l_3181;
                int *l_3214 = &l_3181;
                int *l_3215 = &g_4;
                int *l_3216 = &l_3197;
                int *l_3217 = &g_216;
                int *l_3218 = (void*)0;
                int *l_3219 = &l_3159;
                int *l_3220 = &g_87;
                int *l_3221 = &g_1878;
                int *l_3223 = &g_216;
                int *l_3224 = &l_3162;
                int *l_3225 = &l_3159;
                int *l_3226 = (void*)0;
                int *l_3227 = &l_3160;
                int *l_3228 = &l_3172;
                int *l_3229 = &l_3172;
                int *l_3230 = &g_385;
                int *l_3231 = &l_3181;
                int *l_3232 = &g_87;
                int *l_3233 = &l_3159;
                int *l_3234 = &l_3162;
                int *l_3235 = &g_385;
                int l_3236 = 1L;
                int *l_3237 = (void*)0;
                int *l_3238 = &l_3222;
                int *l_3239 = (void*)0;
                int *l_3240 = &g_2770;
                int l_3242 = (-2L);
                int *l_3243 = &l_3181;
                int *l_3244 = &g_216;
                int *l_3245 = &l_3159;
                int *l_3246 = &l_3160;
                int *l_3247 = &l_3222;
                int *l_3248 = &g_385;
                int *l_3249 = &g_2770;
                int *l_3250 = &l_3181;
                int *l_3251 = &l_3181;
                int *l_3253 = &l_3172;
                int *l_3254 = (void*)0;
                int *l_3255 = &l_3252;
                int *l_3256 = &l_3252;
                int *l_3257 = (void*)0;
                int *l_3258 = &l_3242;
                int *l_3259 = &l_3172;
                int *l_3260 = &l_3252;
                int l_3261 = (-3L);
                int *l_3262 = &g_385;
                int *l_3263 = &l_3261;
                int *l_3264 = &l_3252;
                int *l_3265 = (void*)0;
                int *l_3266 = &l_3162;
                int l_3267 = (-1L);
                unsigned l_3271 = 0xC968F55AL;
                l_3268++;
                l_3271++;
                --l_3274;
            }
            else
            {
                unsigned short *l_3279 = (void*)0;
                unsigned short *l_3280 = &l_3137;
                unsigned short *l_3287 = &g_391;
                unsigned *l_3290 = &g_1160;
                int *l_3291 = &g_2770;
                (*l_3291) &= func_45(func_42((safe_div_func_uint16_t_u_u((--(*l_3280)), (0xF17EL & ((&g_306 != l_3283) , (safe_sub_func_int16_t_s_s((*g_307), (++(*l_3287))))))))), (l_3181 , ((((*l_3290) &= l_3252) , 0x73L) >= (((g_2631 || 0x199EL) && 0L) && 0UL))), l_3274);

                ;


                ;

                (*l_3291) = ((*g_573) > (safe_sub_func_int16_t_s_s((*g_307), l_3160)));
            }

            ;


            ;
            ;

            ;

            (*g_1320) = (safe_rshift_func_int8_t_s_u((-1L), 6));
        }
        else
        {
            char l_3300 = 0x82L;
            int l_3304 = 0x1D5BF063L;
            int l_3323 = 0x3C5FD136L;
            int l_3324 = (-5L);
            unsigned *** const *l_3382 = &g_769;
            int l_3603 = 0x525F50B2L;
            char l_3861 = (-1L);
            unsigned l_3879 = 4294967286UL;
            int *l_3883 = (void*)0;
            if (((*g_256) != (safe_rshift_func_uint8_t_u_u((((g_2779 ^ g_518) | (((l_3298 > (l_3300 = (!func_45(l_3299, (*g_784), (*g_65))))) > 4294967295UL) >= 9UL)) ^ g_559), 7))))
            {
                int *l_3301 = (void*)0;
                int *l_3302 = &g_4;
                int *l_3303 = &g_87;
                int *l_3305 = &l_3241;
                int *l_3306 = &g_216;
                int *l_3307 = &l_3304;
                int *l_3308 = &g_385;
                int *l_3309 = &g_2770;
                int *l_3310 = &l_3241;
                int *l_3311 = &l_3181;
                int *l_3312 = &g_1878;
                int l_3313 = 0L;
                int *l_3314 = (void*)0;
                int *l_3315 = &g_1878;
                int *l_3316 = &l_3181;
                int *l_3317 = &l_3241;
                int *l_3318 = (void*)0;
                int *l_3319 = &l_3313;
                int *l_3320 = (void*)0;
                int *l_3321 = (void*)0;
                int *l_3322 = &g_4;
                int *l_3325 = (void*)0;
                int *l_3326 = &g_2770;
                int *l_3327 = &l_3323;
                int l_3328 = 0L;
                int *l_3329 = &l_3313;
                int *l_3330 = &l_3298;
                int *l_3331 = &l_3159;
                int *l_3332 = &g_2770;
                int *l_3333 = &l_3304;
                int *l_3334 = &l_3324;
                int *l_3335 = (void*)0;
                int *l_3336 = &l_3323;
                int *l_3338 = &g_2770;
                int *l_3339 = &l_3241;
                int *l_3340 = &g_87;
                int *l_3341 = &g_87;
                int *l_3342 = (void*)0;
                int *l_3343 = (void*)0;
                int *l_3344 = &l_3337;
                int *l_3345 = &g_216;
                int *l_3346 = &g_216;
                int *l_3347 = &g_4;
                int *l_3348 = &l_3181;
                int *l_3349 = &l_3323;
                int *l_3350 = &l_3304;
                int *l_3351 = &l_3304;
                int *l_3352 = &l_3181;
                int *l_3353 = (void*)0;
                --l_3354;
                for (g_570 = 0; (g_570 > (-2)); g_570 = safe_sub_func_uint8_t_u_u(g_570, 3))
                {
                    return (**g_783);
                }
            }
            else
            {
                unsigned l_3403 = 0x06BCD7B1L;
                int l_3408 = (-7L);
                int l_3556 = 0x94E338C6L;
                int l_3580 = 0L;
                const int *l_3640 = (void*)0;
                int *l_3648 = &l_3323;
                unsigned char l_3680 = 0x9BL;
                int l_3687 = 0x769C3356L;
                char *l_3697 = &g_2631;
                int l_3758 = 0x7BD6887FL;
                unsigned char **l_3877 = &g_784;
                unsigned char ***l_3876 = &l_3877;
                if ((**g_2572))
                {
                    unsigned char *l_3369 = (void*)0;
                    unsigned *l_3384 = (void*)0;
                    unsigned *l_3385 = &g_560;
                    for (g_385 = 5; (g_385 <= (-13)); g_385 = safe_sub_func_uint32_t_u_u(g_385, 5))
                    {
                        int l_3362 = 0x5CCDDA46L;
                        volatile int **l_3363 = &g_2571;
                        (*g_3361) = (*g_2800);
                        if (l_3362)
                            break;
                        (*l_3363) = (*g_2800);
                    }
                    l_3 = func_5((((void*)0 == l_3364) , (l_3159 = (((safe_add_func_int8_t_s_s((**g_64), ((*g_784)--))) > ((*g_2000) &= ((void*)0 != (*g_803)))) , l_3181))), l_3324, ((*l_3) , (safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(1L, 4)), (*g_307)))), &g_2770);

                    ;
                    ;


                    (*l_3) = (((*l_3385) = (0x9FL ^ ((--(*g_256)) , (((*g_307) || (safe_lshift_func_uint16_t_u_u(65535UL, ((*l_3364) = 65534UL)))) , (((l_3354 , (safe_div_func_int8_t_s_s(((safe_div_func_int16_t_s_s(l_3298, g_1249)) != l_3181), (-1L)))) , (***g_63)) & 255UL))))) , (*g_573));
                }
                else
                {
                    unsigned char *l_3405 = &g_1670;
                    unsigned char *l_3406 = &g_1916;
                    int l_3407 = 0x9585EAC8L;
                    int l_3487 = 0x3D0810B2L;
                    short l_3524 = (-1L);
                    int l_3529 = 0x1B2D7905L;
                    int l_3573 = 0xCDBB7867L;
                    int l_3604 = 9L;
                    int *l_3641 = &g_87;
                    int l_3811 = 1L;
                    int l_3850 = 1L;
                    if (((safe_rshift_func_int8_t_s_u((***g_63), ((safe_unary_minus_func_int32_t_s(((safe_sub_func_uint16_t_u_u((((safe_mod_func_int32_t_s_s(((*l_3) ^= (safe_div_func_uint8_t_u_u(((((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((((*g_256)++) , (*g_784)), (((*g_784) && ((*l_3406) = (0xE2L | ((*l_3405) = (safe_sub_func_int8_t_s_s(((func_45((*g_64), l_3403, (((void*)0 == l_3404) , func_45((*g_64), l_3324, (*g_65)))) , 65526UL) | 0L), 0xCFL)))))) , l_3407))), 8UL)) < 0x7EL) >= (*g_784)) <= 255UL), 0x46L))), l_3407)) < 1L) | l_3354), l_3407)) != l_3403))) < (*g_65)))) <= 0xFCL))
                    {
                        int *l_3409 = &l_3407;
                        int *l_3410 = &g_87;
                        int *l_3411 = &g_4;
                        int *l_3412 = (void*)0;
                        int *l_3413 = &l_3159;
                        int *l_3414 = &l_3407;
                        int *l_3415 = &g_4;
                        int *l_3416 = &l_3181;
                        int *l_3417 = &g_216;
                        int *l_3418 = &l_3323;
                        int *l_3419 = &l_3337;
                        int *l_3420 = &g_385;
                        int *l_3421 = (void*)0;
                        int *l_3422 = &l_3304;
                        int *l_3423 = &l_3159;
                        int *l_3424 = (void*)0;
                        int *l_3425 = &l_3241;
                        int *l_3426 = &l_3304;
                        int *l_3427 = &l_3181;
                        int *l_3428 = &l_3181;
                        int *l_3429 = &l_3337;
                        int *l_3430 = &l_3304;
                        int *l_3431 = &l_3298;
                        int *l_3432 = (void*)0;
                        int *l_3433 = &l_3324;
                        int *l_3434 = &l_3408;
                        int *l_3435 = &l_3408;
                        int *l_3436 = &g_2770;
                        int *l_3437 = &g_4;
                        int *l_3438 = &l_3181;
                        int *l_3439 = &g_87;
                        int *l_3440 = &g_385;
                        int *l_3441 = &l_3407;
                        int *l_3442 = &g_216;
                        int *l_3443 = &l_3324;
                        int *l_3444 = &l_3407;
                        int *l_3445 = &l_3241;
                        int *l_3446 = &l_3298;
                        int *l_3447 = &g_216;
                        int *l_3448 = &g_385;
                        int *l_3449 = (void*)0;
                        int *l_3450 = &g_385;
                        int *l_3451 = &l_3324;
                        int *l_3452 = &l_3324;
                        int *l_3453 = &l_3337;
                        int *l_3454 = &g_87;
                        int *l_3455 = &g_2770;
                        int *l_3456 = &l_3241;
                        int *l_3457 = &g_216;
                        int *l_3458 = &g_1878;
                        int *l_3459 = &g_2770;
                        int l_3460 = 9L;
                        int *l_3461 = &l_3407;
                        int *l_3462 = &g_87;
                        int *l_3463 = (void*)0;
                        int *l_3464 = &g_2770;
                        int *l_3465 = &l_3298;
                        int *l_3466 = &l_3181;
                        int *l_3467 = &l_3337;
                        int *l_3468 = &l_3181;
                        int *l_3469 = &l_3337;
                        int *l_3470 = &l_3241;
                        int *l_3471 = &g_385;
                        int *l_3472 = &g_1878;
                        int *l_3473 = &l_3460;
                        int *l_3474 = &g_2770;
                        int *l_3475 = (void*)0;
                        int *l_3476 = &l_3159;
                        int *l_3477 = (void*)0;
                        int *l_3478 = &g_385;
                        int *l_3479 = &l_3460;
                        int *l_3480 = &l_3323;
                        int *l_3481 = (void*)0;
                        int *l_3482 = &g_4;
                        int *l_3483 = (void*)0;
                        int *l_3484 = &l_3298;
                        int *l_3485 = (void*)0;
                        int *l_3486 = &l_3460;
                        int *l_3488 = &l_3159;
                        int *l_3489 = &l_3159;
                        int *l_3490 = (void*)0;
                        int *l_3491 = &l_3304;
                        int *l_3492 = &l_3408;
                        int *l_3493 = &g_87;
                        int *l_3494 = &l_3298;
                        int *l_3495 = &g_1878;
                        int *l_3496 = &l_3241;
                        int *l_3497 = &l_3487;
                        int *l_3498 = (void*)0;
                        int *l_3499 = &l_3323;
                        int *l_3500 = (void*)0;
                        int *l_3501 = &l_3324;
                        int *l_3502 = &g_385;
                        int *l_3503 = &l_3304;
                        int *l_3504 = &g_385;
                        int *l_3505 = &g_4;
                        int *l_3506 = &l_3241;
                        int *l_3507 = &l_3159;
                        int *l_3508 = &l_3337;
                        int *l_3509 = (void*)0;
                        int *l_3510 = &l_3181;
                        int *l_3511 = &l_3304;
                        int *l_3512 = &g_1878;
                        int *l_3513 = &l_3407;
                        int *l_3514 = &l_3304;
                        int *l_3515 = &g_216;
                        int *l_3516 = &l_3304;
                        short l_3517 = (-1L);
                        int *l_3518 = (void*)0;
                        int *l_3519 = &l_3487;
                        int *l_3520 = &g_2770;
                        int *l_3521 = &l_3460;
                        int *l_3522 = &g_4;
                        int *l_3523 = &g_385;
                        int *l_3525 = &g_4;
                        int *l_3526 = &l_3159;
                        int *l_3527 = &l_3408;
                        int *l_3528 = &g_87;
                        int *l_3530 = &l_3337;
                        int *l_3531 = &g_216;
                        int *l_3532 = (void*)0;
                        int *l_3533 = (void*)0;
                        int *l_3534 = &l_3324;
                        int *l_3535 = &l_3460;
                        int *l_3536 = &l_3337;
                        int *l_3537 = (void*)0;
                        int *l_3538 = &g_1878;
                        int *l_3539 = &g_1878;
                        int *l_3540 = &l_3337;
                        int *l_3541 = &g_4;
                        int *l_3542 = &l_3304;
                        int *l_3543 = (void*)0;
                        int *l_3544 = &l_3407;
                        int *l_3545 = &l_3407;
                        int *l_3546 = (void*)0;
                        int *l_3547 = (void*)0;
                        int *l_3548 = &l_3304;
                        int *l_3549 = &l_3323;
                        int *l_3550 = &l_3304;
                        int *l_3551 = &g_385;
                        int *l_3552 = &l_3323;
                        int *l_3553 = &l_3408;
                        int *l_3554 = &g_2770;
                        int *l_3555 = &g_216;
                        int *l_3557 = &g_87;
                        int *l_3558 = &l_3460;
                        int *l_3559 = &l_3337;
                        int *l_3560 = &g_2770;
                        int *l_3561 = &g_2770;
                        int *l_3562 = &l_3337;
                        int *l_3563 = (void*)0;
                        int *l_3564 = &l_3323;
                        int *l_3565 = &g_87;
                        int *l_3566 = &l_3324;
                        int *l_3567 = &g_87;
                        int *l_3568 = &l_3529;
                        int *l_3569 = &l_3408;
                        int *l_3570 = &l_3337;
                        int *l_3571 = &l_3460;
                        int *l_3572 = &l_3337;
                        int *l_3574 = (void*)0;
                        int *l_3575 = (void*)0;
                        int *l_3576 = (void*)0;
                        int *l_3577 = &g_1878;
                        int *l_3578 = &l_3487;
                        int *l_3579 = (void*)0;
                        int *l_3581 = (void*)0;
                        int *l_3582 = &l_3298;
                        int *l_3583 = &l_3573;
                        int *l_3584 = &l_3181;
                        int *l_3585 = &l_3408;
                        int *l_3586 = &l_3324;
                        int *l_3587 = &l_3573;
                        int *l_3588 = &g_2770;
                        int *l_3589 = &l_3241;
                        int *l_3590 = &g_4;
                        int *l_3591 = &l_3407;
                        int *l_3592 = (void*)0;
                        int *l_3593 = &g_216;
                        int *l_3594 = (void*)0;
                        int l_3595 = 0x60BCC0CDL;
                        int *l_3596 = &l_3595;
                        int *l_3597 = &g_1878;
                        int l_3598 = 0x4030E797L;
                        int *l_3599 = &l_3407;
                        int *l_3600 = &l_3580;
                        int *l_3601 = &l_3304;
                        int *l_3602 = &l_3595;
                        int *l_3605 = (void*)0;
                        int *l_3606 = &l_3598;
                        int *l_3607 = (void*)0;
                        int *l_3608 = &l_3595;
                        int *l_3609 = &l_3408;
                        int *l_3610 = &l_3580;
                        int *l_3611 = &g_1878;
                        int *l_3612 = &l_3304;
                        int *l_3613 = &l_3181;
                        int *l_3614 = &g_1878;
                        int *l_3615 = &g_216;
                        int *l_3616 = &l_3324;
                        int *l_3617 = &l_3603;
                        int *l_3618 = (void*)0;
                        int *l_3619 = &g_1878;
                        int *l_3620 = &l_3181;
                        int *l_3621 = &l_3337;
                        int *l_3622 = &l_3241;
                        int *l_3623 = &l_3598;
                        int *l_3624 = &l_3573;
                        int *l_3626 = &l_3460;
                        int *l_3628 = &l_3625;
                        int *l_3629 = (void*)0;
                        int *l_3630 = &l_3304;
                        int *l_3631 = &l_3181;
                        int *l_3632 = &l_3241;
                        int *l_3634 = &g_4;
                        g_3635++;
                        (*g_3649) = ((safe_lshift_func_int8_t_s_u((((*g_256) = (func_10(((l_3640 == (l_3641 = &l_3159)) , &l_3324), (*g_2617), (l_3604 & 1L), ((safe_mul_func_int16_t_s_s(0xC5EFL, ((((safe_mul_func_uint8_t_u_u(((*l_3405)--), ((void*)0 != &g_1320))) | (*l_3494)) & (*l_3)) == (-4L)))) & g_559)) , (*l_3))) > l_3354), 3)) , l_3648);

                        ;
                        ;

                        ;
                    }
                    else
                    {
                        int *l_3650 = (void*)0;
                        int *l_3651 = &l_3323;
                        int l_3652 = (-6L);
                        int *l_3653 = &l_3181;
                        int *l_3654 = (void*)0;
                        int *l_3655 = &g_2770;
                        int *l_3656 = &l_3337;
                        int *l_3657 = (void*)0;
                        int *l_3658 = &l_3337;
                        int *l_3659 = &l_3407;
                        int *l_3660 = &g_385;
                        int *l_3661 = &l_3556;
                        int *l_3662 = &l_3603;
                        int *l_3663 = &g_385;
                        int *l_3664 = (void*)0;
                        int *l_3665 = &l_3487;
                        int *l_3666 = &g_2770;
                        int *l_3667 = &l_3324;
                        int *l_3668 = &l_3324;
                        int *l_3669 = &l_3604;
                        int *l_3670 = &l_3580;
                        int *l_3671 = &l_3529;
                        int *l_3672 = &l_3652;
                        int *l_3673 = &l_3324;
                        int *l_3674 = (void*)0;
                        int *l_3675 = &l_3408;
                        int *l_3676 = (void*)0;
                        int *l_3677 = &l_3407;
                        int *l_3678 = &l_3652;
                        int *l_3679 = &l_3407;
                        unsigned short *l_3690 = &l_3354;
                        unsigned short *l_3691 = &l_3134;
                        char **l_3699 = &g_771;
                        --l_3680;
                        (**g_2800) = (safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(l_3687, 7)) < ((*l_3691) = ((*l_3690) = ((*l_3364)++)))), (safe_lshift_func_int16_t_s_u((**g_306), 6))));
                        --g_3694;
                        (*l_3651) = (**g_1999);
                    }

                    ;
                    ;

                    ;
                    for (g_1507 = 20; (g_1507 != 27); g_1507 = safe_add_func_int16_t_s_s(g_1507, 1))
                    {
                        int *l_3702 = &l_3298;
                        int *l_3703 = (void*)0;
                        int *l_3704 = &g_1878;
                        int *l_3705 = &l_3241;
                        int *l_3706 = &l_3487;
                        int *l_3707 = &l_3625;
                        int *l_3708 = &l_3241;
                        int *l_3709 = &l_3181;
                        int *l_3710 = &l_3580;
                        int *l_3711 = &l_3408;
                        int *l_3712 = &g_4;
                        int *l_3713 = &l_3304;
                        int *l_3714 = (void*)0;
                        int *l_3715 = &l_3625;
                        int *l_3716 = (void*)0;
                        int *l_3717 = (void*)0;
                        int *l_3718 = (void*)0;
                        int *l_3719 = &l_3298;
                        int *l_3720 = &g_385;
                        int *l_3721 = &l_3323;
                        int *l_3722 = &l_3556;
                        int *l_3723 = &l_3181;
                        int *l_3724 = &l_3159;
                        int *l_3725 = (void*)0;
                        int *l_3726 = &l_3604;
                        int *l_3727 = &g_385;
                        int *l_3728 = &l_3573;
                        int *l_3729 = &l_3603;
                        int *l_3730 = &l_3580;
                        int *l_3731 = &l_3529;
                        int *l_3732 = &l_3556;
                        int *l_3733 = (void*)0;
                        int *l_3734 = &l_3556;
                        int *l_3735 = &l_3625;
                        int *l_3736 = &g_4;
                        int *l_3737 = &l_3304;
                        int *l_3738 = &l_3604;
                        int *l_3739 = &l_3159;
                        int *l_3740 = (void*)0;
                        int *l_3741 = &l_3181;
                        int *l_3742 = &l_3323;
                        int *l_3743 = (void*)0;
                        int *l_3744 = &l_3625;
                        int *l_3745 = (void*)0;
                        int l_3746 = 0L;
                        int *l_3747 = (void*)0;
                        int *l_3748 = &l_3604;
                        int *l_3749 = &g_87;
                        int *l_3750 = (void*)0;
                        int *l_3751 = (void*)0;
                        int *l_3752 = &l_3556;
                        int *l_3753 = &l_3304;
                        int *l_3754 = (void*)0;
                        int *l_3755 = &l_3337;
                        int *l_3756 = &l_3323;
                        int *l_3757 = &l_3556;
                        int *l_3759 = &l_3556;
                        int *l_3760 = &l_3627;
                        int *l_3761 = &l_3687;
                        int *l_3762 = &l_3687;
                        int *l_3763 = &l_3746;
                        int *l_3764 = &l_3687;
                        int *l_3765 = &l_3159;
                        int *l_3766 = &g_385;
                        int *l_3767 = &l_3487;
                        int *l_3768 = &l_3181;
                        int *l_3769 = &g_385;
                        int *l_3770 = &l_3241;
                        int *l_3771 = (void*)0;
                        int *l_3772 = &l_3241;
                        int *l_3773 = &l_3603;
                        int *l_3774 = (void*)0;
                        int *l_3775 = (void*)0;
                        int *l_3776 = &l_3407;
                        int *l_3777 = &g_385;
                        int *l_3778 = (void*)0;
                        int *l_3779 = &g_2770;
                        int l_3780 = 0x5A96484BL;
                        int *l_3781 = &l_3746;
                        int *l_3782 = &l_3241;
                        int *l_3783 = &l_3556;
                        int *l_3784 = &l_3298;
                        int *l_3785 = (void*)0;
                        int *l_3786 = (void*)0;
                        int *l_3787 = &l_3323;
                        int *l_3788 = &g_87;
                        int *l_3789 = &l_3529;
                        int *l_3790 = (void*)0;
                        int *l_3791 = &l_3529;
                        int *l_3792 = &l_3407;
                        int *l_3793 = (void*)0;
                        int *l_3794 = &g_216;
                        int *l_3795 = (void*)0;
                        int *l_3796 = &l_3573;
                        int *l_3797 = &l_3603;
                        int *l_3798 = (void*)0;
                        int *l_3799 = (void*)0;
                        int *l_3800 = &g_216;
                        int *l_3802 = &l_3604;
                        int *l_3803 = &l_3241;
                        int *l_3804 = &g_385;
                        int l_3805 = 0xCBD9F27DL;
                        int *l_3806 = &l_3573;
                        int *l_3807 = &g_4;
                        int *l_3808 = &l_3529;
                        int *l_3809 = &l_3627;
                        int *l_3810 = &l_3241;
                        int *l_3812 = &l_3241;
                        int *l_3813 = &l_3241;
                        int *l_3814 = &g_216;
                        int *l_3815 = (void*)0;
                        int *l_3816 = (void*)0;
                        int *l_3817 = &g_1878;
                        int *l_3818 = &g_216;
                        int *l_3819 = (void*)0;
                        int *l_3820 = &l_3573;
                        int *l_3821 = &l_3780;
                        int *l_3822 = &l_3573;
                        int *l_3823 = &g_216;
                        int *l_3824 = &l_3604;
                        int *l_3825 = &l_3746;
                        int *l_3826 = &l_3603;
                        int *l_3827 = &l_3159;
                        int *l_3828 = &l_3304;
                        int *l_3829 = &l_3604;
                        int *l_3830 = &l_3181;
                        int *l_3831 = &l_3780;
                        int *l_3833 = &l_3487;
                        int *l_3834 = (void*)0;
                        int *l_3835 = &l_3487;
                        int *l_3836 = &l_3487;
                        int *l_3837 = &l_3811;
                        int *l_3838 = &l_3529;
                        int *l_3839 = &g_1878;
                        int *l_3840 = (void*)0;
                        int *l_3841 = (void*)0;
                        int *l_3842 = (void*)0;
                        int *l_3843 = &l_3780;
                        int *l_3844 = &l_3324;
                        int *l_3845 = (void*)0;
                        int *l_3846 = &g_2770;
                        int *l_3847 = &l_3604;
                        int *l_3848 = (void*)0;
                        int *l_3849 = &l_3556;
                        unsigned l_3851 = 0xC6F2312BL;
                        ++l_3851;
                    }
                    (*g_3856) = &l_3573;

                    ;
                }

                ;
                ;
                ;


                for (l_3298 = 0; (l_3298 != (-8)); l_3298--)
                {
                    short l_3859 = 0xACEBL;
                    volatile int **l_3860 = &g_2571;
                    short l_3874 = 0xFC5DL;
                    unsigned char ****l_3878 = &l_3876;
                    char ***l_3881 = &g_64;
                    char ****l_3880 = &l_3881;
                    l_3159 ^= l_3603;
                    (*g_15) = l_3859;
                    (*l_3860) = (*g_3361);
                    if ((((l_3861 , (safe_sub_func_uint32_t_u_u(((*g_256) ^= (safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((*g_307) = (*l_3)), (((*l_3880) = (((**l_3860) || func_45((*g_64), func_45((**g_63), (*g_784), ((l_3801 , g_3868) == ((*l_3878) = ((l_3875 = (safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((&g_784 != &g_784), 1UL)), l_3874))) , l_3876)))), l_3879)) , (void*)0)) == &g_64))), l_3625))), 0UL))) , 0x2E39FF1FL) , (*g_573)))
                    {
                        int l_3882 = 1L;
                        (*l_3) ^= (l_3159 == ((*g_783) == (void*)0));
                    }
                    else
                    {
                        int **l_3884 = &g_2000;
                        unsigned l_3893 = 7UL;
                        (*l_3884) = (*g_3854);

                        ;
                        (*l_3884) = ((*g_771) , (*g_3854));
                        (*l_3648) |= ((*g_305) = (**g_3855));
                        if ((**g_3855))
                            continue;
                    }

                    ;
                }


                (*l_3648) &= l_3181;
                (*g_2103) = (*g_2729);

                ;
            }

            ;
            ;
            ;

            ;
        }

        ;
        ;
        ;


        ;
        ;



        for (l_3159 = 0; (l_3159 == (-15)); l_3159 = safe_sub_func_uint8_t_u_u(l_3159, 4))
        {
            int l_3896 = 1L;
            int l_3957 = 0xD0E32EA1L;
            int l_3988 = 2L;
            int l_4006 = 4L;
            short l_4032 = (-1L);
            unsigned **l_4037 = &g_256;
            unsigned l_4163 = 4294967286UL;
            if ((**g_2800))
            {
                char l_3914 = (-1L);
                int l_3916 = 0x54BD3C67L;
                int l_3935 = 0x1E62BDB5L;
                int l_3956 = (-9L);
                int l_3977 = (-4L);
                if (l_3896)
                    break;
                if (((void*)0 != l_3897))
                {
                    int **l_3906 = &g_441;
                    int ***l_3905 = &l_3906;
                    int l_3921 = 0xA5482E99L;
                    int l_4043 = 0x8FA05CD9L;
                    int *l_4046 = &l_3977;
                    if ((safe_div_func_int16_t_s_s(l_3896, ((*l_3364) |= l_3625))))
                    {
                        (*g_15) = ((**g_783) , (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s(((g_3907 = l_3905) != l_3909))), ((safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(g_115, (((*g_65) = 0xFCL) ^ 0x29L))), (g_87 != l_3625))) , (*g_784)))), (*l_3))));

                        ;
                        (*g_2571) = (*g_573);
                    }
                    else
                    {
                        int *l_3917 = &l_3337;
                        int *l_3918 = &l_3337;
                        int *l_3919 = (void*)0;
                        int *l_3920 = &l_3337;
                        int *l_3922 = &l_3916;
                        int *l_3923 = &l_3181;
                        int *l_3924 = &l_3921;
                        int *l_3925 = (void*)0;
                        int *l_3926 = &g_87;
                        int *l_3927 = &l_3627;
                        int *l_3928 = (void*)0;
                        int *l_3929 = (void*)0;
                        int *l_3930 = (void*)0;
                        int *l_3931 = &g_385;
                        int *l_3932 = (void*)0;
                        int *l_3933 = &l_3241;
                        int *l_3934 = &l_3896;
                        int *l_3936 = &g_2770;
                        int *l_3937 = &g_87;
                        int *l_3938 = &g_2770;
                        int *l_3939 = &g_1878;
                        int *l_3940 = &l_3298;
                        int *l_3941 = &l_3625;
                        int *l_3942 = &g_4;
                        int *l_3943 = &l_3627;
                        int *l_3944 = &g_87;
                        int *l_3945 = &l_3916;
                        int *l_3946 = &l_3915;
                        int *l_3947 = &l_3625;
                        int *l_3948 = &l_3627;
                        int *l_3949 = &l_3935;
                        int *l_3950 = &l_3298;
                        int *l_3951 = (void*)0;
                        int *l_3952 = (void*)0;
                        int *l_3953 = &l_3337;
                        int *l_3954 = (void*)0;
                        int *l_3955 = (void*)0;
                        int *l_3958 = &l_3181;
                        int *l_3959 = &l_3916;
                        int *l_3960 = (void*)0;
                        int *l_3961 = (void*)0;
                        int *l_3962 = &l_3921;
                        int *l_3963 = &l_3625;
                        int *l_3964 = &l_3916;
                        int *l_3965 = &g_2770;
                        int *l_3966 = (void*)0;
                        int *l_3967 = &l_3896;
                        int *l_3968 = &g_1878;
                        int *l_3969 = &l_3625;
                        int *l_3970 = (void*)0;
                        int *l_3971 = &l_3625;
                        int *l_3972 = &l_3241;
                        int *l_3973 = &l_3916;
                        int *l_3974 = (void*)0;
                        int *l_3975 = (void*)0;
                        int *l_3976 = &l_3298;
                        int *l_3978 = &g_385;
                        int *l_3979 = &l_3241;
                        int *l_3980 = &g_216;
                        int *l_3981 = &l_3916;
                        int *l_3982 = &g_87;
                        int *l_3983 = &g_385;
                        int *l_3984 = &l_3241;
                        int *l_3985 = &l_3181;
                        int *l_3986 = &l_3625;
                        int *l_3987 = &l_3625;
                        int *l_3989 = &l_3957;
                        int *l_3990 = (void*)0;
                        int *l_3991 = &g_4;
                        int *l_3992 = (void*)0;
                        int *l_3993 = (void*)0;
                        int *l_3994 = &l_3957;
                        int *l_3995 = &g_385;
                        int *l_3996 = (void*)0;
                        int *l_3997 = &l_3298;
                        int *l_3998 = &g_216;
                        int *l_3999 = &g_4;
                        int *l_4000 = (void*)0;
                        int *l_4001 = &l_3977;
                        int *l_4002 = &l_3935;
                        int *l_4003 = &l_3921;
                        int *l_4004 = &l_3625;
                        int *l_4005 = &l_3896;
                        int *l_4007 = &l_4006;
                        int *l_4008 = &g_2770;
                        int *l_4009 = (void*)0;
                        int *l_4010 = &l_3181;
                        int *l_4011 = &g_385;
                        int *l_4012 = (void*)0;
                        int *l_4013 = &l_3921;
                        int *l_4014 = &g_4;
                        int *l_4015 = &g_385;
                        int *l_4016 = &g_1878;
                        int *l_4017 = &l_3181;
                        int *l_4018 = &l_3956;
                        int *l_4019 = &g_385;
                        int *l_4020 = (void*)0;
                        int *l_4021 = (void*)0;
                        int *l_4022 = &l_3977;
                        int *l_4023 = &l_3977;
                        int *l_4024 = (void*)0;
                        int *l_4025 = (void*)0;
                        int *l_4026 = &l_3977;
                        int *l_4027 = &g_385;
                        int *l_4028 = &l_4006;
                        int **l_4042 = &l_3989;
                        unsigned ***l_4044 = (void*)0;
                        unsigned ***l_4045 = &g_770;
                        --l_4029;
                        if (l_4032)
                            break;
                        l_3896 = ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((l_4037 == ((*l_4045) = ((safe_mul_func_uint16_t_u_u((l_3988 = ((*l_3364) = ((safe_add_func_uint16_t_u_u(l_3298, l_3625)) || ((*l_3934) & l_4043)))), l_3916)) , l_4037))), (*g_771))), (*g_307))) , (*g_2571));

                        ;
                        if ((*g_1874))
                            break;
                    }


                    (*l_3) = ((*l_3) >= l_3957);
                    if (l_3956)
                        continue;

                    l_4049 = l_4046;

                    ;
                }
                else
                {
                    char *l_4054 = (void*)0;
                    if ((l_3988 = ((*g_771) , ((safe_mod_func_uint8_t_u_u(((l_4006 |= l_3988) , (safe_lshift_func_uint8_t_u_s(((*g_784) > (*l_3)), l_4032))), (***g_3868))) || (**g_3854)))))
                    {
                        unsigned char l_4055 = 1UL;
                        l_4055 ^= (*g_573);
                        if (l_3956)
                            break;
                        (*g_2571) = (safe_lshift_func_int8_t_s_u(l_3896, 6));
                    }
                    else
                    {
                        (*g_2571) &= ((*g_15) = l_3957);
                        return (*l_4049);
                    }
                }

                ;
            }
            else
            {
                char l_4058 = 0xEAL;
                int *l_4059 = &g_4;
                int *l_4060 = &l_3298;
                int *l_4061 = &g_1878;
                int *l_4062 = &l_4006;
                int l_4063 = (-1L);
                int *l_4064 = &l_4006;
                int *l_4065 = &g_4;
                int *l_4066 = &l_3298;
                int *l_4067 = (void*)0;
                int *l_4068 = &l_3337;
                int *l_4069 = &l_3337;
                int *l_4070 = &l_3957;
                int *l_4071 = &l_3298;
                int *l_4072 = &l_3627;
                int *l_4073 = &l_3988;
                int *l_4074 = (void*)0;
                int *l_4075 = &l_3957;
                int *l_4076 = &g_87;
                int *l_4077 = &l_3988;
                int *l_4078 = &l_3337;
                int *l_4079 = &l_3181;
                int *l_4080 = &l_3241;
                int *l_4081 = &g_216;
                int *l_4082 = &g_1878;
                int *l_4083 = &g_385;
                int *l_4084 = &l_3915;
                int *l_4085 = &l_3298;
                int *l_4086 = &g_4;
                int l_4087 = 0x1B728B94L;
                int *l_4088 = &g_385;
                int *l_4089 = &l_3627;
                int *l_4090 = &l_3915;
                int *l_4091 = &g_87;
                int *l_4092 = &l_3896;
                int *l_4093 = &g_2770;
                int *l_4094 = (void*)0;
                int *l_4095 = (void*)0;
                int *l_4096 = (void*)0;
                int *l_4097 = &l_4087;
                int l_4098 = (-1L);
                int *l_4099 = (void*)0;
                int *l_4100 = &g_2770;
                int *l_4101 = &l_4087;
                int *l_4102 = &l_3915;
                int *l_4103 = (void*)0;
                int *l_4104 = &l_3337;
                int *l_4105 = &l_3337;
                int *l_4106 = &l_3988;
                int *l_4107 = &g_216;
                int *l_4108 = &l_3241;
                int *l_4109 = &l_4098;
                int *l_4110 = &g_385;
                int *l_4111 = (void*)0;
                int *l_4112 = (void*)0;
                int l_4113 = (-2L);
                int *l_4114 = (void*)0;
                int *l_4115 = &l_4113;
                int *l_4116 = &l_3625;
                int *l_4117 = &l_4098;
                int *l_4118 = &l_3241;
                int *l_4119 = &g_385;
                int *l_4120 = &g_87;
                int *l_4121 = &l_3241;
                int *l_4122 = &l_3298;
                int *l_4123 = &g_4;
                int *l_4124 = &l_3337;
                int *l_4125 = &g_216;
                int *l_4126 = (void*)0;
                int *l_4127 = &l_3957;
                int *l_4128 = &l_4098;
                int *l_4129 = &g_1878;
                int *l_4130 = &l_3896;
                int l_4131 = 0L;
                int *l_4132 = &l_3915;
                int *l_4133 = &l_3625;
                int *l_4134 = &l_3625;
                int *l_4135 = (void*)0;
                int *l_4136 = &g_216;
                int *l_4137 = &g_216;
                int *l_4138 = &l_3625;
                int *l_4140 = &l_4006;
                int *l_4141 = &g_385;
                int *l_4142 = &g_1878;
                int *l_4143 = &l_3896;
                int *l_4144 = &l_4006;
                int *l_4145 = &g_385;
                int *l_4146 = &l_4098;
                int *l_4147 = &g_4;
                int *l_4148 = &g_216;
                int *l_4149 = (void*)0;
                int *l_4150 = &l_4098;
                int *l_4151 = (void*)0;
                int *l_4152 = &l_3915;
                int *l_4153 = &l_4006;
                int *l_4154 = &g_4;
                int *l_4155 = &l_3337;
                int *l_4156 = (void*)0;
                int *l_4157 = &l_3627;
                int *l_4158 = &l_4063;
                int *l_4159 = &l_3915;
                int *l_4160 = &l_4131;
                int *l_4161 = &l_4131;
                int *l_4162 = &l_3988;
                l_4163++;
                (*l_4141) ^= l_3957;
                return l_4032;
            }


            return (*l_3);
        }


        (*g_4166) = &l_3298;

        ;
    }

    ;
    ;
    ;


    ;
    ;




    return (**g_783);
}







static int * func_5(unsigned char p_6, unsigned char p_7, unsigned short p_8, int * p_9)
{
    int *l_2632 = &g_216;
    unsigned short *l_2637 = &g_99;
    unsigned **l_2638 = (void*)0;
    char *l_2725 = &g_34;
    char l_2740 = 3L;
    unsigned **l_2795 = &g_256;
    const int ***l_2830 = &g_804;
    const int ****l_2829 = &l_2830;
    char *** const l_2840 = &g_64;
    int l_2881 = (-1L);
    int l_2954 = (-5L);
    int l_2955 = 0x85C7D184L;
    int l_2978 = (-1L);
    int l_3046 = (-3L);
    l_2632 = p_9;

    ;
    (*g_2571) = (*g_573);
    (*p_9) = (p_8 , (p_8 , ((((((*l_2632) , (*g_784)) && (!(0xA2D55861L != (((safe_mul_func_int16_t_s_s(0xF00BL, (((safe_rshift_func_uint16_t_u_s(((*l_2637) |= (*l_2632)), 3)) | (g_391 = (p_6 , p_6))) | (**g_783)))) , p_6) > 0x4B811CD2L)))) > 0x32452052L) ^ (*l_2632)) , 0x17D0FC96L)));
    if (func_29(l_2632))
    {
        (*g_15) &= ((((*l_2637) = g_216) , &g_256) != l_2638);
    }
    else
    {
        int l_2645 = 9L;
        int l_2654 = 0xCDADAD9DL;
        unsigned char **l_2655 = &g_784;
        const unsigned short l_2697 = 0xAC84L;
        char **l_2739 = &l_2725;
        const int ***l_2828 = &g_804;
        const int ****l_2827 = &l_2828;
        char *l_2843 = &g_34;
        int l_2853 = 8L;
        int l_2908 = (-1L);
        int l_2918 = 0xE6A8061EL;
        int l_2920 = 0xF7A3721BL;
        int l_2926 = 0L;
        int l_2935 = (-1L);
        int l_2951 = (-1L);
        int l_2977 = 0x8C69BBBAL;
        int l_2979 = 0L;
        int l_2986 = 0x2BAF6FAAL;
        int l_3039 = 0x84C24BC8L;
        int l_3114 = 0xC75E52C6L;
        if ((safe_lshift_func_int16_t_s_s((((func_29(l_2632) , (((*g_771) &= (safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(l_2645, p_7)), (**g_306)))) || (~((*l_2632) < (l_2654 = ((((--(*g_784)) & ((*g_771) = (((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((*l_2632) <= l_2645) & p_8), l_2645)), 6)), (*g_2342))) , p_6) , (*l_2632)))) , 9UL) >= 0UL)))))) || 0xC3E6A052L) , 0x94F7L), 12)))
        {
            unsigned char **l_2657 = &g_784;
            unsigned char ***l_2656 = &l_2657;
            unsigned char **l_2659 = &g_784;
            unsigned char ***l_2658 = &l_2659;
            int *l_2660 = &g_385;
            char *l_2684 = &g_2631;
            char l_2686 = (-1L);
            short **l_2706 = &g_307;
            unsigned *l_2787 = &g_436;
            if (((func_29(&l_2654) , ((l_2655 != ((*l_2658) = ((*l_2656) = l_2655))) > ((*l_2660) , p_7))) && 0x5A42L))
            {
                unsigned l_2669 = 4294967295UL;
                int l_2695 = 2L;
                l_2660 = l_2660;
                (*g_2571) &= (safe_lshift_func_uint8_t_u_s(((*g_65) , (safe_rshift_func_uint16_t_u_u(((*l_2637) = l_2669), l_2669))), 5));
                if (func_29(p_9))
                {
                    unsigned l_2670 = 4294967295UL;
                    char *l_2675 = (void*)0;
                    char **l_2685 = &g_65;
                    (*p_9) ^= l_2670;
                    (*p_9) = ((g_186 != (safe_div_func_uint8_t_u_u(l_2670, 1L))) > 0L);
                }
                else
                {
                    int **l_2696 = &g_15;
                    const char *l_2698 = &g_2631;
                    (*l_2696) = l_2660;

                    ;
                    (*l_2696) = func_38((((void*)0 != (*g_440)) && p_7), l_2697, l_2698);

                    ;
                    for (g_575 = 0; (g_575 >= 26); ++g_575)
                    {
                        char l_2703 = 0x45L;
                        if ((*p_9))
                            break;
                        (*g_15) = ((safe_mod_func_uint16_t_u_u(((((*g_805) , (void*)0) == (void*)0) == l_2703), g_139)) > (safe_rshift_func_uint8_t_u_u(((void*)0 != l_2706), ((***l_2656) |= 0xE7L))));
                    }
                }

                ;
                (*p_9) = (((safe_mul_func_int16_t_s_s((g_2709 != (void*)0), func_45(&l_2686, (*g_784), (l_2654 < 0x49L)))) || p_6) , (*l_2660));
            }
            else
            {
                unsigned l_2720 = 4294967295UL;
                (*l_2632) = ((*l_2660) = ((safe_mul_func_uint8_t_u_u(((safe_div_func_int8_t_s_s(3L, (safe_add_func_uint32_t_u_u((*l_2660), ((*l_2632) , ((((*g_65) , ((safe_rshift_func_uint8_t_u_u(((*g_544) != func_45(((*l_2660) , ((safe_mod_func_uint16_t_u_u((((l_2720 , ((safe_sub_func_int32_t_s_s(((*g_15) = (safe_sub_func_int8_t_s_s(func_45(l_2725, (*g_784), l_2720), (*l_2660)))), l_2720)) > p_8)) | g_560) < (*g_65)), p_6)) , l_2725)), (*l_2660), (*l_2660))), (*l_2660))) , 4L)) , (**g_783)) , l_2720)))))) <= (*g_65)), (*l_2660))) , 3L));
            }

            ;


            for (g_1160 = 0; (g_1160 > 47); g_1160 = safe_add_func_uint8_t_u_u(g_1160, 9))
            {
                int **l_2728 = &l_2632;
                char **l_2738 = (void*)0;
                const short *l_2773 = &g_276;
                const short **l_2772 = &l_2773;
                unsigned *l_2775 = (void*)0;
                unsigned *l_2776 = &g_436;
                unsigned short l_2786 = 0x54B7L;
            }
            for (g_34 = (-20); (g_34 <= (-8)); g_34++)
            {
                unsigned short l_2803 = 0UL;
                int **l_2804 = &g_15;
                (*g_2800) = (*g_2572);
                (*l_2804) = func_38(((safe_div_func_int8_t_s_s(l_2803, l_2645)) == l_2654), (l_2697 , (((*g_784) != (*g_771)) == (*p_9))), &g_2631);

                ;
                (*g_2800) = (*g_2572);
            }
            (*l_2660) ^= ((safe_lshift_func_int8_t_s_u((safe_div_func_int32_t_s_s((*l_2632), (--(*l_2787)))), 0)) != (l_2697 > 9UL));
        }
        else
        {
            char *l_2813 = &g_1249;
            unsigned *l_2818 = &g_560;
            short *l_2819 = &g_50;
            int l_2831 = 1L;
            int l_2871 = 7L;
            int l_2905 = 8L;
            int l_2976 = 0x54AD995DL;
            if (((*g_15) = ((((*l_2818) = ((((65535UL == (safe_lshift_func_uint16_t_u_s(((!g_763) >= ((*l_2637) = p_8)), (p_7 > ((*g_65) = ((p_6 == func_45(l_2813, (safe_mod_func_uint16_t_u_u(65535UL, ((((safe_lshift_func_uint8_t_u_s(((*g_784) ^= 0UL), 5)) , ((*g_784) = func_45(&g_2631, p_6, (*g_65)))) && (*g_771)) , (*l_2632)))), (*g_771))) ^ p_6)))))) >= (*l_2632)) || 0xBBL) ^ l_2697)) , (void*)0) != l_2819)))
            {
                (*g_15) = (*p_9);
            }
            else
            {
                volatile int **l_2820 = &g_2571;
                (*l_2820) = (*g_2572);
            }
            (*g_15) = (safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(p_8, (((l_2645 ^ (func_45(l_2813, p_7, (*l_2632)) | ((g_518 > ((l_2829 = l_2827) == (void*)0)) , (*l_2632)))) , p_6) , (*l_2632)))), l_2831));

            ;
            if (((safe_lshift_func_int16_t_s_u(((((safe_mod_func_int8_t_s_s((((*l_2739) = l_2843) == (l_2831 , l_2813)), ((**g_783) = p_7))) != 0x4307BF62L) > (*l_2632)) == (*l_2632)), g_436)) || g_560))
            {
                return p_9;


            }
            else
            {
                int *l_2844 = &g_87;
                int *l_2845 = &g_385;
                int *l_2846 = &l_2831;
                int *l_2847 = &g_4;
                int *l_2848 = &l_2831;
                int *l_2849 = &g_385;
                int *l_2850 = &g_4;
                int *l_2851 = &l_2831;
                int *l_2852 = &g_385;
                int *l_2854 = &l_2831;
                int *l_2855 = &g_4;
                int *l_2856 = &l_2654;
                int *l_2857 = &l_2831;
                int *l_2858 = &g_2770;
                int *l_2859 = (void*)0;
                int *l_2860 = &l_2853;
                int *l_2861 = &g_87;
                int *l_2862 = &g_4;
                int *l_2863 = (void*)0;
                int *l_2864 = (void*)0;
                int *l_2865 = (void*)0;
                int *l_2866 = (void*)0;
                int *l_2867 = (void*)0;
                int *l_2868 = &g_216;
                int *l_2869 = &g_2770;
                int *l_2870 = &l_2831;
                int *l_2872 = &l_2654;
                int *l_2873 = &g_4;
                int *l_2874 = &g_216;
                int *l_2875 = &l_2853;
                int *l_2876 = &l_2871;
                int l_2877 = (-1L);
                int *l_2878 = &l_2877;
                int *l_2879 = (void*)0;
                int *l_2880 = &l_2871;
                int *l_2882 = &g_87;
                int *l_2883 = (void*)0;
                int *l_2884 = &l_2881;
                int *l_2885 = (void*)0;
                int *l_2886 = (void*)0;
                int *l_2887 = &g_1878;
                int *l_2888 = &l_2654;
                int *l_2889 = (void*)0;
                int *l_2890 = &g_87;
                int *l_2891 = (void*)0;
                int *l_2892 = &l_2877;
                int *l_2893 = &l_2877;
                int *l_2894 = (void*)0;
                int *l_2895 = &l_2654;
                int *l_2896 = (void*)0;
                int *l_2897 = &l_2877;
                int *l_2898 = &l_2654;
                int *l_2899 = (void*)0;
                int *l_2900 = &l_2831;
                int *l_2901 = &l_2831;
                int *l_2902 = (void*)0;
                int *l_2903 = (void*)0;
                int *l_2904 = &g_1878;
                int *l_2906 = &l_2877;
                int *l_2907 = &l_2853;
                int *l_2909 = (void*)0;
                int *l_2910 = &g_1878;
                int *l_2911 = &l_2905;
                int *l_2912 = &l_2905;
                int *l_2913 = (void*)0;
                int *l_2914 = (void*)0;
                int *l_2915 = (void*)0;
                int *l_2916 = (void*)0;
                int *l_2917 = &g_4;
                int *l_2919 = &g_216;
                int *l_2921 = &l_2918;
                int *l_2922 = &g_87;
                int *l_2923 = &l_2908;
                int *l_2924 = &l_2881;
                int *l_2925 = &l_2654;
                int *l_2927 = &g_4;
                int *l_2928 = &l_2871;
                int *l_2929 = &g_87;
                int *l_2930 = &g_87;
                int *l_2931 = &g_216;
                int *l_2932 = &g_1878;
                int *l_2933 = (void*)0;
                int *l_2934 = (void*)0;
                int *l_2936 = (void*)0;
                int *l_2937 = &l_2831;
                int *l_2938 = &l_2920;
                int *l_2940 = &l_2853;
                int *l_2941 = &l_2908;
                int *l_2942 = (void*)0;
                int *l_2943 = &g_216;
                int *l_2944 = &g_385;
                int *l_2945 = &g_2770;
                int *l_2946 = &g_1878;
                int *l_2947 = (void*)0;
                int *l_2948 = &l_2918;
                int *l_2949 = (void*)0;
                int *l_2950 = &l_2918;
                int *l_2952 = &l_2654;
                int *l_2953 = &g_1878;
                int *l_2956 = &g_2770;
                int *l_2957 = &l_2955;
                int *l_2958 = &l_2954;
                int *l_2959 = &l_2926;
                int *l_2960 = &g_216;
                int *l_2961 = &l_2908;
                int *l_2962 = &l_2908;
                int *l_2963 = &g_216;
                int *l_2964 = &l_2935;
                int *l_2965 = &l_2918;
                int *l_2966 = &l_2881;
                int *l_2967 = (void*)0;
                int *l_2968 = &l_2877;
                int *l_2969 = &g_87;
                int *l_2970 = &l_2908;
                int *l_2971 = &g_4;
                int *l_2972 = &l_2871;
                int *l_2973 = &g_216;
                int *l_2974 = &g_2770;
                int *l_2975 = &g_4;
                int l_2980 = 0xDD14AFE4L;
                int *l_2981 = (void*)0;
                int *l_2982 = &l_2853;
                int *l_2983 = &g_385;
                int l_2984 = 0x10802F55L;
                int *l_2985 = &l_2984;
                int *l_2987 = &g_87;
                int *l_2988 = &l_2926;
                int *l_2989 = (void*)0;
                int *l_2990 = &l_2871;
                int *l_2991 = &g_216;
                int *l_2992 = (void*)0;
                int *l_2993 = &g_4;
                int *l_2994 = &g_4;
                int l_2995 = 0xC73E93DBL;
                int *l_2996 = &l_2920;
                int *l_2997 = (void*)0;
                int *l_2998 = &g_2770;
                int *l_2999 = &l_2980;
                int l_3000 = 0xF2F7A244L;
                int *l_3001 = &l_2853;
                int *l_3002 = &l_2908;
                int *l_3003 = &l_2935;
                int *l_3004 = (void*)0;
                int *l_3005 = &g_385;
                int l_3006 = 0L;
                int *l_3007 = &l_2980;
                int *l_3008 = &l_2980;
                int *l_3009 = (void*)0;
                int *l_3010 = &l_2871;
                int *l_3011 = (void*)0;
                int *l_3012 = &l_2853;
                int *l_3013 = &l_3006;
                int *l_3014 = (void*)0;
                int *l_3015 = &g_216;
                int *l_3016 = &g_385;
                int *l_3017 = (void*)0;
                int *l_3018 = &g_87;
                int *l_3019 = &l_2918;
                int *l_3020 = &l_2926;
                int *l_3021 = &g_4;
                int *l_3022 = &g_87;
                int *l_3023 = (void*)0;
                int *l_3024 = &g_216;
                int *l_3025 = &g_216;
                int *l_3026 = &l_2980;
                int *l_3027 = (void*)0;
                int *l_3028 = &l_2955;
                int *l_3029 = &g_216;
                int *l_3030 = &l_2871;
                int *l_3031 = &l_2871;
                int *l_3032 = &l_2881;
                int *l_3033 = &g_1878;
                int *l_3034 = &l_2979;
                int *l_3035 = &l_2980;
                int *l_3036 = &l_2995;
                int *l_3037 = &l_2920;
                int *l_3038 = &l_2853;
                int l_3040 = 0x45BFB134L;
                int *l_3041 = &l_2984;
                int *l_3042 = &l_2951;
                int *l_3043 = (void*)0;
                int *l_3044 = (void*)0;
                int *l_3045 = &l_2951;
                int *l_3047 = (void*)0;
                int *l_3048 = (void*)0;
                int *l_3049 = &l_2978;
                int *l_3050 = (void*)0;
                int *l_3051 = &l_2995;
                int *l_3052 = &g_1878;
                int *l_3053 = (void*)0;
                int *l_3054 = &l_2984;
                int l_3055 = 0L;
                int l_3056 = 0L;
                int *l_3057 = (void*)0;
                int *l_3058 = (void*)0;
                int *l_3059 = &g_4;
                int *l_3060 = (void*)0;
                int *l_3061 = (void*)0;
                int *l_3062 = (void*)0;
                int *l_3063 = &g_4;
                int *l_3064 = &l_2853;
                int *l_3065 = &l_2954;
                int *l_3066 = &g_87;
                int *l_3067 = &l_2926;
                int *l_3068 = &l_2986;
                int *l_3069 = &l_2926;
                int *l_3070 = (void*)0;
                int *l_3071 = (void*)0;
                int *l_3072 = &l_2871;
                int *l_3073 = &l_2905;
                int *l_3074 = &l_2926;
                int *l_3075 = &l_2951;
                int *l_3076 = &l_2977;
                int *l_3077 = (void*)0;
                int *l_3078 = &l_2831;
                int *l_3079 = &l_2908;
                int *l_3080 = &g_1878;
                int *l_3081 = &g_216;
                int *l_3082 = &l_3056;
                int *l_3083 = (void*)0;
                int *l_3084 = (void*)0;
                int *l_3085 = (void*)0;
                int *l_3086 = &g_2770;
                int *l_3087 = &l_3056;
                int *l_3088 = &l_2935;
                int *l_3089 = &l_2871;
                int *l_3090 = &l_2976;
                int *l_3091 = &l_2978;
                int *l_3092 = &g_2770;
                int *l_3093 = &l_3000;
                int *l_3094 = &g_216;
                int *l_3095 = &l_2995;
                int *l_3096 = (void*)0;
                int *l_3097 = &g_1878;
                int *l_3098 = &l_3046;
                int *l_3099 = &l_2978;
                int *l_3100 = &l_2918;
                int *l_3101 = &l_3056;
                int *l_3102 = &l_3046;
                int *l_3103 = &l_2935;
                int *l_3104 = (void*)0;
                int *l_3105 = (void*)0;
                int *l_3106 = (void*)0;
                int *l_3107 = &g_4;
                int *l_3108 = &l_3040;
                int *l_3109 = &g_2770;
                int *l_3110 = &l_2955;
                int *l_3111 = &l_2955;
                int *l_3112 = &l_2920;
                int *l_3113 = &l_2955;
                int *l_3115 = &l_2935;
                int *l_3116 = &l_2853;
                int *l_3117 = &l_2920;
                int *l_3118 = (void*)0;
                int *l_3119 = &l_2654;
                int *l_3120 = &l_2877;
                int *l_3121 = &l_3039;
                int *l_3122 = &l_3000;
                int *l_3123 = &g_4;
                g_3124--;
            }
        }

        ;


        ;
        (*g_15) = (p_6 < (((((((p_8 & l_2645) > l_2908) == 0x44L) > l_2654) & (*g_784)) ^ (*l_2632)) == p_7));
    }

    ;



    return p_9;


}







static unsigned char func_10(int * p_11, int * p_12, unsigned short p_13, int p_14)
{
    int *l_2163 = &g_4;
    int *l_2164 = &g_1878;
    int *l_2165 = &g_385;
    int *l_2166 = &g_216;
    int *l_2167 = &g_216;
    int *l_2168 = (void*)0;
    int *l_2169 = &g_1878;
    int *l_2170 = &g_1878;
    int *l_2171 = (void*)0;
    int *l_2172 = &g_385;
    int *l_2173 = &g_4;
    int *l_2174 = (void*)0;
    int l_2175 = 0x4FBD07E9L;
    int l_2176 = 1L;
    int *l_2177 = &g_4;
    int *l_2178 = (void*)0;
    int *l_2179 = &g_87;
    int *l_2180 = &l_2175;
    int *l_2181 = &g_4;
    int *l_2182 = (void*)0;
    int l_2183 = (-1L);
    int *l_2184 = &g_1878;
    int *l_2185 = &g_216;
    int *l_2186 = (void*)0;
    int l_2187 = 1L;
    int l_2188 = 0xDF5B6BDBL;
    int l_2189 = 0L;
    int *l_2190 = (void*)0;
    int *l_2191 = &l_2189;
    int *l_2192 = (void*)0;
    int *l_2193 = (void*)0;
    int l_2194 = 0xBA5CC5F4L;
    int *l_2195 = &g_4;
    int *l_2196 = &l_2194;
    int *l_2197 = &g_385;
    int *l_2198 = &l_2187;
    int *l_2199 = &l_2176;
    int *l_2200 = &g_1878;
    int *l_2201 = (void*)0;
    int *l_2202 = &l_2188;
    int *l_2203 = &l_2188;
    int *l_2204 = &l_2189;
    int *l_2205 = &l_2194;
    int *l_2206 = &l_2175;
    int *l_2207 = &l_2189;
    int *l_2208 = (void*)0;
    int *l_2209 = &l_2189;
    int *l_2210 = &l_2176;
    int *l_2211 = (void*)0;
    int *l_2212 = &l_2175;
    int l_2213 = (-2L);
    int *l_2214 = (void*)0;
    int *l_2215 = &g_1878;
    int l_2216 = 0x7288DB1CL;
    int *l_2217 = &g_4;
    int *l_2218 = &g_216;
    int *l_2219 = (void*)0;
    int *l_2220 = &l_2176;
    int *l_2221 = &g_385;
    int l_2222 = 0xEFD2978FL;
    int *l_2223 = &g_87;
    int l_2224 = (-9L);
    int *l_2225 = &g_385;
    int *l_2226 = (void*)0;
    int *l_2227 = &g_1878;
    int *l_2228 = &l_2213;
    int *l_2229 = (void*)0;
    int *l_2230 = (void*)0;
    int *l_2231 = &g_87;
    int *l_2232 = &g_1878;
    int *l_2233 = &l_2175;
    int *l_2234 = &l_2213;
    int *l_2235 = (void*)0;
    int *l_2236 = &g_87;
    int *l_2237 = &l_2213;
    int *l_2238 = &g_216;
    int *l_2239 = &l_2222;
    int *l_2240 = &l_2222;
    int *l_2241 = &g_216;
    int *l_2242 = &g_4;
    int *l_2243 = &g_385;
    int l_2244 = 0x4F79B90BL;
    int *l_2245 = (void*)0;
    int *l_2246 = &l_2176;
    int *l_2247 = &l_2222;
    int *l_2248 = &g_4;
    int *l_2249 = &l_2213;
    int *l_2250 = (void*)0;
    int *l_2251 = &g_385;
    int *l_2252 = &g_385;
    int *l_2253 = (void*)0;
    int *l_2254 = &l_2224;
    int l_2255 = 0x5DA18A80L;
    int *l_2256 = &l_2224;
    int *l_2257 = &l_2216;
    int *l_2258 = &g_87;
    int *l_2259 = &l_2222;
    int *l_2260 = &l_2255;
    int *l_2261 = &l_2194;
    int *l_2262 = &l_2189;
    int *l_2263 = &l_2176;
    int *l_2264 = &l_2187;
    int *l_2265 = &l_2175;
    int *l_2266 = &l_2176;
    int *l_2267 = (void*)0;
    int *l_2268 = (void*)0;
    int *l_2269 = (void*)0;
    int *l_2270 = &l_2216;
    int *l_2271 = &g_1878;
    int *l_2272 = (void*)0;
    int *l_2273 = &l_2255;
    int *l_2274 = &l_2183;
    int *l_2275 = &l_2224;
    int *l_2276 = (void*)0;
    int *l_2277 = &l_2224;
    int *l_2278 = (void*)0;
    int *l_2279 = &l_2244;
    int *l_2280 = &l_2183;
    int *l_2281 = &l_2175;
    int l_2282 = (-1L);
    int l_2283 = 0L;
    int *l_2284 = &l_2222;
    int *l_2285 = &g_87;
    int *l_2286 = &l_2222;
    int *l_2287 = &l_2283;
    int *l_2288 = &l_2244;
    int l_2289 = (-9L);
    int *l_2290 = &l_2175;
    int *l_2291 = &l_2175;
    int *l_2292 = &l_2175;
    int *l_2293 = &l_2283;
    int *l_2294 = (void*)0;
    unsigned l_2295 = 0xDB912FC2L;
    char *l_2302 = &g_908;
    unsigned l_2384 = 1UL;
    const unsigned l_2589 = 5UL;
    l_2295++;
    for (l_2175 = (-20); (l_2175 == 25); l_2175++)
    {
        char l_2300 = 0x0DL;
        int l_2306 = (-1L);
        unsigned char l_2341 = 255UL;
        unsigned l_2364 = 4294967288UL;
        short l_2386 = (-5L);
        const int *l_2410 = &g_2411;
        int l_2424 = (-1L);
        int l_2428 = 0xFCECC0CDL;
        int l_2483 = 0xACC8FE48L;
        unsigned l_2557 = 0UL;
        unsigned ***l_2601 = &g_770;
        short **l_2610 = &g_307;
        short ***l_2609 = &l_2610;
        unsigned l_2630 = 0UL;
        if (((*l_2247) ^= (-1L)))
        {
            char *l_2301 = (void*)0;
            int l_2305 = 0x18FDEECAL;
            int **l_2307 = &l_2260;
            l_2300 &= (*g_15);
            (*l_2307) = func_38((*g_305), p_14, &g_1249);

            ;
        }
        else
        {
            unsigned l_2308 = 0UL;
            int l_2321 = 0xFC646926L;
            int l_2382 = 0xE0880899L;
            int l_2385 = 0x40358784L;
            char *l_2405 = &l_2300;
            int l_2453 = 0x4B1E25C4L;
            int l_2484 = 4L;
            int l_2488 = 0x81CA77B8L;
            int l_2578 = 0x9BEA9A3BL;
            unsigned char l_2598 = 246UL;
            short ***l_2611 = &l_2610;
            int * const l_2618 = &g_4;
            (*l_2225) = (l_2308 ^ ((((((*l_2266) ^ (*p_11)) != 0L) == (safe_mod_func_uint32_t_u_u((((*l_2242) != (safe_add_func_int32_t_s_s((+(*p_12)), l_2308))) <= func_45(&l_2300, p_13, (*l_2264))), (*g_573)))) >= 0x55L) == (*l_2218)));
            l_2321 = (safe_div_func_int8_t_s_s(p_14, (safe_rshift_func_int16_t_s_u(func_29(&l_2216), (safe_div_func_int16_t_s_s(0x1CEDL, (((0xCD80L >= 0x1768L) == l_2308) && (l_2306 &= g_4))))))));
            if ((((((safe_mod_func_int8_t_s_s((safe_div_func_uint16_t_u_u((*l_2212), l_2308)), ((safe_mul_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s((safe_mod_func_int32_t_s_s((-1L), (0xB428C479L || (l_2308 & (((*g_307) ^= (safe_add_func_uint32_t_u_u(l_2321, (safe_mul_func_int8_t_s_s(p_13, p_13))))) , (*l_2181)))))), l_2306)) > p_14) , 0UL), p_14)), p_13)) == l_2300), 0UL)) || g_2340))) & (*l_2177)) , (*p_11)) == (*p_12)) , (*p_11)))
            {
                char l_2358 = (-1L);
                unsigned char *l_2359 = &g_1507;
                unsigned short *l_2375 = (void*)0;
                unsigned short *l_2376 = (void*)0;
                unsigned short *l_2377 = &g_391;
                (*l_2261) ^= (((p_14 ^ ((*g_307) = l_2341)) <= (g_2342 != ((safe_add_func_int8_t_s_s((-1L), (safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(p_13, ((*p_11) | 0xCD45B430L))), (g_87 , func_45(&l_2300, (*g_784), p_14)))))) , (void*)0))) == l_2308);
                (*p_12) = ((func_29(p_12) & (safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((g_559 && l_2358), (--(*l_2359)))), 2)), (*g_15))), l_2308))) , ((((safe_rshift_func_int16_t_s_s((0xF2L <= l_2364), 11)) >= (*g_1874)) != 0UL) | (*g_65)));
                (*l_2287) &= ((!(p_14 | (safe_lshift_func_int8_t_s_u((g_4 , p_13), 3)))) && (!((safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((*g_2342) < p_14), (safe_div_func_int32_t_s_s((*g_1320), (*g_15))))), (*g_307))) , 250UL)));
            }
            else
            {
                short l_2383 = 0xBBF0L;
                int l_2406 = 0x468C364EL;
                const int *l_2412 = &l_2183;
                int l_2415 = (-3L);
                int l_2416 = (-10L);
                int l_2417 = 0x31AAFE63L;
                int l_2418 = 5L;
                int l_2419 = 7L;
                int l_2422 = 0xF501461EL;
                int l_2423 = 0xA5B0F8CFL;
                int l_2437 = 0xBF9A7D65L;
                if (l_2383)
                    break;
                if (l_2384)
                {
                    unsigned char l_2387 = 255UL;
                    char *l_2402 = &g_1249;
                    int l_2404 = 1L;
                    --l_2387;
                    for (g_1249 = (-12); (g_1249 == 20); g_1249++)
                    {
                        unsigned char l_2403 = 246UL;
                        l_2404 = (safe_sub_func_uint8_t_u_u(((p_14 & (p_13 & (safe_div_func_int32_t_s_s(((((*g_784) = (((safe_mod_func_int16_t_s_s(p_13, (safe_mul_func_int16_t_s_s((-1L), ((((safe_lshift_func_uint16_t_u_u(func_45(l_2402, (*g_784), l_2385), 11)) >= l_2403) , (*g_307)) == 6UL))))) >= (*l_2240)) != (-1L))) && p_13) | 0x0EL), l_2385)))) , (*g_784)), p_13));
                        l_2406 |= (l_2403 <= (0L >= (((func_45(l_2405, ((*g_784) = p_13), p_14) , (l_2364 ^ (*l_2163))) , (p_14 , p_14)) || (**g_783))));
                    }
                    (*l_2199) = func_29(p_11);



                }
                else
                {
                    const int *l_2408 = &g_2409;
                    const int **l_2407 = &l_2408;
                    int l_2414 = 0xAF3CCEF2L;
                    int l_2420 = 0x42D6CF01L;
                    int l_2421 = 0xBCA60DF1L;
                    int l_2425 = 8L;
                    int *l_2426 = &g_1878;
                    int *l_2427 = &l_2255;
                    int *l_2429 = &g_385;
                    int *l_2430 = &g_87;
                    int *l_2431 = &l_2306;
                    int *l_2432 = &l_2176;
                    int *l_2433 = &g_385;
                    int *l_2434 = &g_385;
                    int *l_2435 = &l_2255;
                    int *l_2436 = &l_2428;
                    int *l_2438 = &l_2213;
                    int *l_2439 = (void*)0;
                    int *l_2440 = &l_2306;
                    int *l_2441 = &l_2282;
                    int *l_2442 = (void*)0;
                    int *l_2443 = &l_2289;
                    int *l_2444 = (void*)0;
                    int *l_2445 = (void*)0;
                    int *l_2446 = &l_2417;
                    int *l_2447 = &l_2194;
                    int *l_2448 = &l_2425;
                    int *l_2449 = &l_2222;
                    int *l_2450 = &l_2282;
                    int *l_2451 = &g_4;
                    int *l_2452 = &l_2289;
                    int *l_2454 = &g_4;
                    int *l_2455 = (void*)0;
                    int *l_2456 = (void*)0;
                    int *l_2457 = &l_2244;
                    int *l_2458 = &l_2419;
                    int *l_2459 = &g_87;
                    int *l_2460 = &g_216;
                    int *l_2461 = (void*)0;
                    int *l_2462 = &l_2224;
                    int *l_2463 = (void*)0;
                    int *l_2464 = &l_2382;
                    int *l_2465 = (void*)0;
                    int *l_2466 = &l_2419;
                    int *l_2467 = (void*)0;
                    int *l_2468 = &l_2213;
                    int *l_2469 = (void*)0;
                    int *l_2470 = &l_2224;
                    int *l_2471 = &l_2382;
                    int *l_2472 = &l_2416;
                    int *l_2473 = &l_2437;
                    int *l_2474 = &g_216;
                    int *l_2475 = (void*)0;
                    int *l_2476 = &l_2222;
                    int *l_2477 = &l_2289;
                    int *l_2478 = &l_2414;
                    int *l_2479 = &l_2414;
                    int *l_2480 = &l_2406;
                    int *l_2481 = &l_2385;
                    int *l_2482 = &l_2424;
                    int *l_2485 = &l_2224;
                    int *l_2486 = &g_1878;
                    int *l_2487 = (void*)0;
                    int l_2489 = (-1L);
                    int *l_2490 = &l_2424;
                    int *l_2491 = &g_1878;
                    int *l_2492 = &g_1878;
                    int *l_2493 = (void*)0;
                    int *l_2494 = &l_2423;
                    int *l_2495 = &l_2414;
                    int *l_2496 = &l_2419;
                    int *l_2497 = (void*)0;
                    int *l_2498 = (void*)0;
                    l_2412 = (l_2410 = ((*l_2407) = p_12));

                    ;
                    ;
                    ;
                    if ((*l_2270))
                    {
                        (*p_12) = 1L;
                        (*g_2103) = &l_2385;

                        ;
                        (*l_2407) = (void*)0;

                        ;
                    }
                    else
                    {
                        char l_2413 = 0x7BL;
                        l_2413 = (-7L);
                    }


                    ;
                    g_2499--;
                }



                ;
                ;
                (*g_2502) = p_11;


                return (*l_2410);


            }
            if ((((*g_307) = (*l_2291)) < (((-3L) <= ((*l_2410) != (*l_2410))) , 0x3263L)))
            {
                const unsigned char l_2565 = 0x34L;
                const char *l_2566 = &g_908;
                int l_2576 = (-8L);
                int l_2577 = 0x7B3B537EL;
                char l_2602 = 0xCDL;
                for (l_2321 = 9; (l_2321 == 11); ++l_2321)
                {
                    int l_2505 = 1L;
                    int l_2506 = 0x8753F47FL;
                    int l_2507 = 0x924EBF4FL;
                    int l_2508 = (-10L);
                    int l_2509 = 1L;
                    int *l_2510 = (void*)0;
                    int *l_2511 = &g_216;
                    int *l_2512 = (void*)0;
                    int *l_2513 = &g_1878;
                    int *l_2514 = (void*)0;
                    int *l_2515 = &l_2483;
                    int *l_2516 = (void*)0;
                    int *l_2517 = &g_216;
                    int *l_2518 = &g_1878;
                    int *l_2519 = (void*)0;
                    int *l_2520 = &l_2506;
                    int *l_2521 = &l_2194;
                    int *l_2522 = &l_2289;
                    int *l_2523 = &l_2289;
                    int *l_2524 = &l_2382;
                    int *l_2525 = (void*)0;
                    int l_2526 = (-1L);
                    int *l_2527 = &l_2216;
                    int *l_2528 = &l_2244;
                    int *l_2529 = &l_2453;
                    int *l_2530 = &l_2189;
                    int *l_2531 = &l_2282;
                    int *l_2532 = &l_2189;
                    int *l_2533 = &l_2508;
                    int *l_2534 = &l_2187;
                    int *l_2535 = &g_216;
                    int *l_2536 = &l_2187;
                    int *l_2537 = &l_2508;
                    int *l_2538 = &l_2282;
                    int *l_2539 = (void*)0;
                    int *l_2540 = &l_2183;
                    int *l_2541 = &l_2506;
                    int *l_2542 = &g_1878;
                    int *l_2543 = &g_1878;
                    int *l_2544 = &l_2289;
                    int *l_2545 = (void*)0;
                    int *l_2546 = &l_2526;
                    int *l_2547 = &l_2509;
                    int *l_2548 = &l_2509;
                    int *l_2549 = (void*)0;
                    int *l_2550 = &l_2183;
                    int *l_2551 = &l_2289;
                    int *l_2552 = &l_2216;
                    int *l_2553 = &g_216;
                    int *l_2554 = (void*)0;
                    int *l_2555 = &g_87;
                    int *l_2556 = (void*)0;
                    ++l_2557;
                }
                if (((safe_lshift_func_uint8_t_u_u(((safe_unary_minus_func_int8_t_s(1L)) , (safe_add_func_int8_t_s_s(0xC2L, (func_35(func_38((*p_12), l_2565, l_2566), p_11) < (safe_unary_minus_func_uint8_t_u(p_14)))))), p_13)) , (*l_2410)))
                {
                    int l_2570 = 0xEB2E4CC1L;
                    for (l_2306 = 6; (l_2306 < (-28)); l_2306--)
                    {
                        unsigned l_2573 = 0xDC514DF2L;
                        if ((*p_12))
                            break;
                        (*g_2572) = g_2571;
                        --l_2573;
                        if ((*g_544))
                            break;
                    }
                }
                else
                {
                    unsigned char l_2579 = 255UL;
                    l_2579++;
                    for (l_2557 = 0; (l_2557 >= 16); l_2557 = safe_add_func_uint8_t_u_u(l_2557, 8))
                    {
                        return (*g_784);



                    }
                }
                for (l_2188 = 0; (l_2188 == (-14)); l_2188--)
                {
                    (*p_11) = (*g_573);
                }
                for (l_2289 = (-20); (l_2289 > (-5)); ++l_2289)
                {
                    int *l_2588 = (void*)0;
                    unsigned *l_2590 = &g_436;
                    int **l_2591 = &l_2270;
                    (*l_2591) = func_38(((*l_2210) = 0x3E79D514L), ((*l_2590) = l_2589), l_2566);

                    ;
                    (*l_2184) &= ((p_14 , (safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((l_2598 | (safe_lshift_func_uint16_t_u_u((((&g_770 == l_2601) < (func_35(&l_2385, p_11) == (g_1507 , 0UL))) <= p_13), g_34))), p_13)) == l_2382), 11)) , (*l_2410)), p_13))) , (*l_2165));
                    (*l_2169) |= (l_2598 | p_13);
                }
            }
            else
            {
                for (l_2244 = (-5); (l_2244 == (-21)); --l_2244)
                {
                    unsigned short l_2616 = 7UL;
                    int **l_2619 = (void*)0;
                    int **l_2620 = &l_2207;
                    l_2385 = (safe_add_func_uint32_t_u_u(l_2616, 0x6193EFD4L));
                    (*g_2617) = (*g_1319);
                    (*l_2620) = l_2618;

                    ;
                    (*l_2620) = p_12;
                }
                for (l_2386 = (-4); (l_2386 < (-5)); l_2386--)
                {
                    int *l_2623 = &l_2282;
                    l_2623 = &l_2306;

                    ;
                }
            }
        }
        (*l_2261) |= (safe_add_func_int8_t_s_s(((*p_11) ^ ((*l_2243) >= ((p_13 ^ (*l_2410)) <= (-8L)))), ((!p_14) , ((l_2630 = ((*l_2274) == (safe_lshift_func_uint8_t_u_u((func_45(l_2302, p_14, (*l_2410)) , p_13), (*l_2260))))) == 4294967295UL))));
    }



    ;
    ;
    ;
    (*l_2280) ^= ((*l_2249) = (*p_11));
    return (**g_783);



}







static unsigned short func_19(unsigned char p_20, int * p_21, int * p_22, int * p_23, short p_24)
{
    short **l_2049 = &g_307;
    short ***l_2048 = &l_2049;
    char *l_2054 = (void*)0;
    int l_2055 = 0x20BB24A0L;
    int ***l_2074 = (void*)0;
    int *** const *l_2073 = &l_2074;
    int l_2075 = 0xF4ADB0A0L;
    int l_2147 = 1L;
    int l_2159 = 1L;
    unsigned short l_2160 = 0x9401L;
    for (g_99 = (-1); (g_99 < 9); g_99 = safe_add_func_int32_t_s_s(g_99, 9))
    {
        (*g_1320) = 1L;
    }
    if (((l_2048 != &l_2049) && (**g_783)))
    {
        int *l_2052 = &g_4;
        unsigned short *l_2053 = &g_99;
        int **l_2056 = (void*)0;
        int **l_2057 = &g_1320;
        (*l_2057) = ((safe_add_func_uint16_t_u_u(((*l_2053) = func_29(l_2052)), g_908)) , p_21);


        (*g_15) = (*g_1874);
    }
    else
    {
        int l_2058 = 0x09604E3EL;
        char *l_2059 = &g_1249;
        int *l_2064 = &g_87;
        unsigned *l_2065 = &g_436;
        const int ****l_2068 = (void*)0;
        const int *****l_2069 = &l_2068;
        const int ***l_2072 = &g_804;
        const int ****l_2071 = &l_2072;
        const int *****l_2070 = &l_2071;
        (*g_15) ^= (*g_573);
        l_2058 ^= 0x2010AFEEL;
        if (func_45((l_2054 = l_2059), p_20, ((((safe_div_func_int8_t_s_s(func_35(&l_2055, l_2064), p_24)) , ((*l_2065)++)) || 0x313C83E0L) <= (l_2075 = ((((*l_2070) = ((*l_2069) = l_2068)) == l_2073) < p_24)))))
        {
            char *l_2076 = (void*)0;
            char **l_2077 = &l_2076;
            int l_2084 = 0xE50A488BL;
            unsigned *l_2089 = &g_560;
            (*g_2000) &= ((*l_2064) = (0UL < ((p_20 <= ((*g_306) == &g_570)) ^ func_45(l_2054, p_24, p_20))));
            (*g_2000) = (safe_sub_func_uint32_t_u_u(((((*l_2089) = (p_20 , (safe_sub_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((func_45(l_2059, p_20, ((((*l_2064) = l_2084) == (l_2075 == (((p_20 && (safe_rshift_func_int8_t_s_s(0x44L, 0))) , ((*l_2065)--)) , ((*g_307) <= g_1916)))) > (*p_21))) || 0UL), 0x035BL)), p_20)))) , 0x61L) == (*g_771)), p_24));
        }
        else
        {
            const unsigned short l_2092 = 0x5315L;
            unsigned short *l_2099 = &g_391;
            (*g_2103) = &l_2075;

            ;
            (*g_15) |= (*p_22);
            return p_20;


        }

        ;
        ;
    }


    ;
    for (g_117 = 0; (g_117 == 37); g_117 = safe_add_func_int8_t_s_s(g_117, 2))
    {
        int *l_2106 = &l_2075;
        int *l_2107 = &l_2055;
        int *l_2108 = &g_216;
        int *l_2109 = &g_4;
        int *l_2110 = &l_2055;
        int *l_2111 = &g_4;
        int *l_2112 = (void*)0;
        int *l_2113 = &g_385;
        int *l_2114 = &g_385;
        int *l_2115 = &g_1878;
        int *l_2116 = (void*)0;
        int *l_2117 = &g_4;
        int l_2118 = 0L;
        int *l_2119 = &l_2118;
        int *l_2120 = &g_87;
        int l_2121 = 1L;
        int *l_2122 = (void*)0;
        int *l_2123 = &g_385;
        int *l_2124 = &g_87;
        int *l_2125 = &l_2075;
        int *l_2126 = (void*)0;
        int *l_2127 = &g_1878;
        int *l_2128 = &l_2055;
        int *l_2129 = &g_1878;
        int *l_2130 = &g_216;
        int l_2131 = 0xDD9DE804L;
        int *l_2132 = &g_385;
        int *l_2133 = (void*)0;
        int *l_2134 = &g_1878;
        int *l_2135 = &g_1878;
        int *l_2136 = &l_2131;
        int *l_2137 = (void*)0;
        int l_2138 = 6L;
        int *l_2139 = &l_2118;
        int *l_2140 = &l_2055;
        int *l_2141 = &l_2121;
        int *l_2142 = &l_2121;
        int *l_2143 = &l_2131;
        int l_2144 = (-4L);
        int *l_2145 = &g_87;
        int *l_2146 = &l_2138;
        int *l_2148 = &l_2147;
        int *l_2149 = (void*)0;
        int *l_2150 = &g_216;
        int *l_2151 = &g_216;
        int *l_2152 = &l_2138;
        int *l_2153 = &g_4;
        int *l_2154 = &g_216;
        int l_2155 = 0xCA9EAD44L;
        int *l_2156 = (void*)0;
        int *l_2157 = &l_2131;
        int l_2158 = 0L;
        (*g_573) = 0xE689F004L;
        ++l_2160;
    }
    return p_24;
}







static char func_29(int * p_30)
{
    char l_1889 = 0x15L;
    int l_1903 = (-1L);
    short l_1919 = 9L;
    int l_1945 = (-1L);
    int l_1953 = (-1L);
    unsigned * const * const l_2011 = &g_256;
    unsigned * const * const *l_2010 = &l_2011;
    unsigned * const * const ** const l_2009 = &l_2010;
    for (g_1249 = 3; (g_1249 <= (-10)); g_1249 = safe_sub_func_int32_t_s_s(g_1249, 5))
    {
        int l_1890 = 0x2D2632FAL;
        char ***l_1893 = &g_64;
        char ***l_1894 = &g_64;
        char ***l_1895 = &g_64;
        char ***l_1896 = (void*)0;
        char ***l_1897 = &g_64;
        char ***l_1898 = (void*)0;
        char ***l_1899 = &g_64;
        char ***l_1900 = &g_64;
        char ***l_1901 = &g_64;
        char **l_1902 = &g_65;
        int *l_1904 = &l_1890;
        int *l_1905 = &g_385;
        int *l_1906 = (void*)0;
        int *l_1907 = &g_87;
        int *l_1908 = &l_1903;
        int *l_1909 = &g_216;
        int *l_1910 = (void*)0;
        int l_1911 = 0x7B13E5C1L;
        int *l_1912 = (void*)0;
        int *l_1913 = (void*)0;
        int *l_1914 = &g_1878;
        int *l_1915 = &l_1903;
        int *l_1920 = &l_1890;
        int *l_1921 = &l_1903;
        int *l_1922 = &l_1890;
        int *l_1923 = &l_1890;
        int *l_1924 = &g_385;
        int *l_1925 = (void*)0;
        int *l_1926 = &l_1890;
        int *l_1927 = &g_216;
        int *l_1928 = &g_87;
        int *l_1929 = &l_1903;
        int *l_1930 = &g_87;
        int *l_1931 = (void*)0;
        int *l_1932 = &g_385;
        int *l_1933 = &l_1890;
        int *l_1934 = &g_87;
        int *l_1935 = &g_385;
        int *l_1936 = &l_1890;
        int *l_1937 = (void*)0;
        int *l_1938 = &g_87;
        int *l_1939 = &l_1890;
        int *l_1940 = &g_216;
        int *l_1941 = &g_385;
        int *l_1942 = &l_1890;
        int *l_1943 = &l_1911;
        int *l_1944 = &g_87;
        int *l_1946 = (void*)0;
        int *l_1947 = &g_87;
        int *l_1948 = &l_1945;
        int *l_1949 = &g_216;
        int *l_1950 = (void*)0;
        int *l_1951 = &g_87;
        int *l_1952 = &g_1878;
        int *l_1954 = (void*)0;
        int *l_1955 = &l_1911;
        int *l_1956 = &l_1953;
        int *l_1957 = &l_1911;
        int *l_1958 = &l_1945;
        int *l_1959 = &l_1903;
        int *l_1960 = &g_216;
        int *l_1961 = &g_87;
        int *l_1962 = &g_87;
        int *l_1963 = &l_1945;
        int *l_1964 = &g_216;
        int *l_1965 = &l_1953;
        int *l_1966 = (void*)0;
        int *l_1967 = &l_1890;
        int *l_1968 = &g_216;
        int *l_1969 = (void*)0;
        int *l_1970 = &l_1945;
        int *l_1971 = (void*)0;
        int *l_1972 = &g_1878;
        int *l_1973 = &g_87;
        int *l_1974 = &l_1945;
        int *l_1975 = &l_1890;
        int *l_1976 = &l_1890;
        int *l_1977 = &g_385;
        unsigned l_1978 = 1UL;
        (*g_1874) ^= (safe_lshift_func_int16_t_s_s((((safe_add_func_int16_t_s_s((+(+(l_1903 ^= ((((((safe_add_func_uint16_t_u_u(7UL, l_1889)) <= l_1890) > (l_1889 & 0L)) , ((l_1902 = &g_771) == &g_771)) < ((*g_307) = ((-10L) == (l_1889 , l_1890)))) ^ l_1890)))), 0xA86CL)) != l_1889) > l_1890), l_1890));

        ;
        --g_1916;
        l_1978++;
        if ((*p_30))
            break;
    }
    for (l_1953 = 0; (l_1953 != 1); l_1953++)
    {
        int l_1983 = 0xB75E13FDL;
        int **l_1984 = &g_1320;
        char l_2008 = 0L;
        int **l_2035 = &g_441;
        int ***l_2034 = &l_2035;
        int *l_2043 = &l_1903;
        int l_2044 = 0xC878BAA7L;
        (*l_1984) = (l_1983 , func_38((*g_573), l_1903, &l_1889));

        ;
        for (g_216 = 0; (g_216 <= (-6)); --g_216)
        {
            int l_1991 = 1L;
            char *l_1992 = &g_908;
            short *l_1993 = (void*)0;
            short *l_1994 = &g_570;
            unsigned *l_2005 = &g_85;
            unsigned ****l_2012 = &g_769;
            if ((*g_1874))
                break;
            if ((safe_div_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u((**l_1984), 7)) , ((**g_306) || ((p_30 != (void*)0) || l_1953))) , l_1991), ((1L & l_1991) , ((*l_1994) = (func_45(l_1992, l_1991, l_1953) , (*g_307)))))))
            {
                return l_1991;
            }
            else
            {
                if (l_1991)
                    break;
                for (g_85 = (-18); (g_85 >= 38); g_85++)
                {
                    for (g_436 = (-6); (g_436 > 30); g_436 = safe_add_func_uint32_t_u_u(g_436, 7))
                    {
                        if ((*p_30))
                            break;
                        (*g_1999) = ((*l_1984) = (*l_1984));


                    }
                }
            }
            for (g_391 = (-7); (g_391 <= 14); g_391 = safe_add_func_int8_t_s_s(g_391, 2))
            {
                const unsigned l_2006 = 0xEA634C01L;
                char *l_2007 = &g_908;
                int l_2013 = 0xDE2678E8L;
                int ** const *l_2036 = &l_2035;
                l_2013 &= (0xFE4D86BEL == (((safe_sub_func_int16_t_s_s((l_2005 != (((((*l_1994) = (l_2006 , (*g_307))) >= ((l_2007 != l_1992) == ((*g_784) = 0xA9L))) , l_2008) , (void*)0)), (**l_1984))) , l_2009) != l_2012));
                if ((g_216 && (*p_30)))
                {
                    char l_2018 = 0x0EL;
                    int *l_2023 = (void*)0;
                    int *l_2024 = &l_2013;
                    (*l_2024) = (0UL > (safe_lshift_func_int8_t_s_u(((((*g_441) ^= ((safe_lshift_func_uint16_t_u_s(func_45(l_2007, (*g_784), l_2018), 12)) > l_1991)) , ((safe_lshift_func_int16_t_s_u((l_1991 > ((*l_2005) = (**l_1984))), (safe_mul_func_uint16_t_u_u(l_1945, l_2006)))) <= 0x12DAL)) , 5L), (*g_784))));
                    for (l_1919 = 9; (l_1919 >= 5); --l_1919)
                    {
                        return l_1903;
                    }
                    (*l_1984) = func_38((*p_30), l_2013, l_1992);

                    ;
                    for (g_1249 = 0; (g_1249 < (-27)); g_1249--)
                    {
                        const char *l_2033 = &g_34;
                        l_1991 = (*p_30);
                        (*l_1984) = p_30;


                        if ((*p_30))
                            break;
                        (*l_1984) = func_38(((0UL == l_2013) , ((((**g_306) > l_1991) & (safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u(func_45(&l_2018, (*l_2024), (func_45(&l_1889, (*g_784), ((((**l_1984) >= 0xEA42L) & (*l_2024)) , 0x82L)) , 0x17L)), (**l_1984))), (*g_307)))) < (-8L))), (*l_2024), l_2033);

                        ;
                    }


                }
                else
                {
                    int ** const **l_2037 = &l_2036;
                    l_2013 &= (l_2034 == ((*l_2037) = l_2036));
                }
                for (g_1878 = 27; (g_1878 > (-20)); --g_1878)
                {
                    int *l_2041 = (void*)0;
                    int *l_2042 = &l_1945;
                    (*l_2042) ^= (safe_unary_minus_func_uint8_t_u(l_1991));
                }
            }
        }


        l_2044 = ((*l_2043) ^= 0x922E9E1BL);
    }



    return l_1903;
}







static int * func_31(char p_32)
{
    unsigned l_44 = 4294967292UL;
    int *l_1875 = (void*)0;
    int *l_1876 = (void*)0;
    int *l_1877 = &g_1878;
    (*l_1877) &= ((*g_305) = func_35(func_38((*g_15), g_4, func_42(l_44)), &g_4));

    ;


    ;

    return (*g_1319);


}







static int func_35(int * p_36, int * p_37)
{
    int *l_884 = &g_87;
    int **l_885 = (void*)0;
    int **l_886 = &l_884;
    int *l_887 = &g_4;
    char *l_909 = &g_34;
    unsigned l_933 = 0UL;
    char *l_950 = (void*)0;
    unsigned char **l_955 = &g_784;
    int l_993 = (-8L);
    int l_1020 = (-2L);
    int l_1038 = 0x524BBC59L;
    int l_1093 = 5L;
    int l_1141 = (-1L);
    int l_1233 = 0xA790E6CEL;
    int l_1246 = 0x79375C1BL;
    int l_1253 = 0xE8DA4400L;
    unsigned **l_1264 = &g_256;
    int l_1276 = 0x34D99E0AL;
    unsigned ****l_1278 = &g_769;
    int l_1301 = (-9L);
    int l_1321 = 0x5FB65A3CL;
    unsigned short *l_1477 = &g_99;
    const unsigned char l_1655 = 0UL;
    unsigned l_1777 = 0xCD5B30CAL;
    int l_1815 = 0xEEC0645CL;
    int l_1816 = 0x0AE6720DL;
    unsigned char l_1873 = 255UL;
    (*l_886) = l_884;
    (*l_886) = l_887;

    ;
    for (g_559 = 0; (g_559 != 7); ++g_559)
    {
        short l_890 = 0x1BDBL;
        char *l_897 = &g_34;
        char *l_907 = &g_908;
        unsigned short *l_916 = (void*)0;
        int l_917 = 1L;
        int ** const l_919 = &g_441;
        int ** const *l_918 = &l_919;
        int l_922 = (-1L);
        int l_925 = 0x2D532479L;
    }
    if ((*p_36))
    {
        int l_960 = 9L;
        char **l_961 = &g_771;
        char **l_962 = &l_950;
        char l_967 = 0x5EL;
        int l_978 = 5L;
        const unsigned char l_1064 = 1UL;
        int l_1133 = 0x64092DFCL;
        int l_1158 = 0xE1FA4B00L;
        int l_1167 = 0x5AEC1136L;
        int l_1170 = 4L;
        int l_1226 = 0x26C5374CL;
        int l_1230 = 0x910724C6L;
        int l_1232 = 1L;
        if (((safe_mul_func_uint8_t_u_u(246UL, ((!l_960) , (**l_886)))) || l_960))
        {
            char l_974 = 5L;
            (*p_36) &= (l_974 || g_50);
        }
        else
        {
            int *l_975 = &g_385;
            int *l_976 = &g_87;
            int l_977 = 0x49D4B934L;
            int l_979 = (-1L);
            int *l_980 = &g_216;
            int *l_981 = &l_978;
            int *l_982 = &g_87;
            int *l_983 = &g_216;
            int *l_984 = &g_385;
            int *l_985 = &l_977;
            int *l_986 = (void*)0;
            int *l_987 = &g_216;
            int *l_988 = &l_979;
            int *l_989 = &g_385;
            int *l_990 = &l_979;
            int *l_991 = &l_978;
            int *l_992 = &l_978;
            int l_994 = 0x6357C498L;
            int *l_995 = (void*)0;
            int *l_996 = &l_993;
            int *l_997 = &l_993;
            int *l_998 = &g_385;
            int *l_999 = &l_978;
            int *l_1000 = &l_977;
            int *l_1001 = &g_216;
            int *l_1002 = &l_993;
            int *l_1003 = &g_385;
            int *l_1004 = (void*)0;
            int *l_1005 = &l_978;
            int *l_1006 = &g_385;
            int *l_1007 = &l_979;
            int *l_1008 = &g_385;
            int *l_1009 = &l_994;
            int *l_1010 = (void*)0;
            int *l_1011 = &l_993;
            int *l_1012 = &l_978;
            int *l_1013 = &g_87;
            int *l_1014 = (void*)0;
            int *l_1015 = &l_977;
            int *l_1016 = (void*)0;
            int *l_1017 = (void*)0;
            int l_1018 = 0x7C5B49FCL;
            int *l_1019 = &g_216;
            int *l_1021 = &g_216;
            int *l_1022 = &l_1018;
            int *l_1023 = &g_216;
            int *l_1024 = &g_385;
            int l_1025 = 0xB0B0BE5EL;
            int *l_1026 = &l_978;
            int *l_1027 = &l_1025;
            int *l_1028 = &l_1020;
            int *l_1029 = &g_216;
            int *l_1030 = &l_977;
            int *l_1031 = &l_994;
            int *l_1032 = &l_994;
            int *l_1033 = &l_993;
            int *l_1034 = &l_993;
            int *l_1035 = &l_1020;
            int *l_1036 = &l_993;
            int *l_1037 = &g_87;
            int *l_1039 = &l_1018;
            int *l_1040 = &l_1038;
            int *l_1041 = &l_979;
            int *l_1042 = &l_994;
            int l_1043 = 0x29D29410L;
            int *l_1044 = &g_385;
            int *l_1045 = &l_977;
            int *l_1046 = &l_1020;
            int *l_1047 = &l_1018;
            int *l_1048 = &l_1018;
            int *l_1049 = &l_1025;
            int *l_1050 = &l_994;
            int *l_1051 = (void*)0;
            int *l_1052 = &l_978;
            int *l_1053 = (void*)0;
            int *l_1054 = &l_1038;
            int *l_1055 = (void*)0;
            int *l_1056 = (void*)0;
            int *l_1057 = &l_1020;
            int *l_1058 = &g_385;
            int l_1059 = (-4L);
            int *l_1060 = (void*)0;
            unsigned l_1061 = 4294967295UL;
            int **l_1163 = &g_441;
            unsigned short *l_1164 = &g_391;
            char l_1168 = 0xF3L;
            short l_1297 = (-1L);
            char ** const l_1300 = &l_909;
            unsigned l_1307 = 0x120712EBL;
            unsigned l_1316 = 4UL;
            unsigned char l_1473 = 252UL;
            ++l_1061;
            (*l_982) |= (-9L);
            if ((((*l_999) &= 1L) && l_1064))
            {
                int *l_1065 = &l_1038;
                (*l_981) &= (*l_884);
                (*l_886) = l_1065;

                ;
            }
            else
            {
                unsigned l_1075 = 0UL;
                int *l_1080 = &l_979;
                int l_1091 = 0x2B7325EEL;
                int l_1149 = 0x340334A3L;
                (*l_1044) ^= (*g_305);
                for (l_994 = 0; (l_994 <= 19); ++l_994)
                {
                    char l_1072 = 3L;
                    int l_1073 = 1L;
                    int l_1074 = 1L;
                    for (g_87 = 0; (g_87 >= 15); g_87 = safe_add_func_uint16_t_u_u(g_87, 7))
                    {
                        (*l_886) = p_37;


                        (*l_989) ^= ((l_1072 , g_186) , l_1072);
                        l_1075++;
                        (*l_886) = p_36;


                    }
                    for (l_1038 = (-5); (l_1038 != (-28)); l_1038--)
                    {
                        (*l_886) = l_1080;

                        ;
                        (*l_884) = (*g_542);
                        if ((*p_36))
                            break;
                    }
                }


                for (g_117 = 0; (g_117 <= 1); g_117 = safe_add_func_uint32_t_u_u(g_117, 7))
                {
                    unsigned short l_1086 = 0x509FL;
                    int l_1089 = 0xE5DD7DB7L;
                    int l_1090 = 3L;
                    int l_1092 = 0x4C11313BL;
                    int *l_1094 = &l_1038;
                    int *l_1095 = &l_1038;
                    int *l_1096 = &l_1020;
                    int *l_1097 = &g_385;
                    int *l_1098 = &g_385;
                    int *l_1099 = &g_216;
                    int *l_1100 = &l_1092;
                    int *l_1101 = &l_1059;
                    int *l_1102 = &l_1020;
                    int *l_1103 = &l_993;
                    int *l_1104 = &l_977;
                    int *l_1105 = &l_1038;
                    int *l_1106 = (void*)0;
                    int *l_1107 = (void*)0;
                    int *l_1108 = &l_1025;
                    int *l_1109 = (void*)0;
                    int *l_1110 = &l_994;
                    int *l_1111 = &l_1020;
                    int *l_1112 = &l_994;
                    int *l_1113 = &g_87;
                    int *l_1114 = &l_1090;
                    int *l_1115 = &l_978;
                    int *l_1116 = &g_87;
                    int *l_1117 = &l_977;
                    int *l_1118 = &l_1059;
                    int *l_1119 = (void*)0;
                    int l_1120 = 5L;
                    int *l_1121 = (void*)0;
                    int *l_1122 = &l_979;
                    int *l_1123 = &l_1089;
                    int *l_1124 = (void*)0;
                    int *l_1125 = &l_1038;
                    int *l_1126 = &l_1038;
                    int *l_1127 = &l_1025;
                    int *l_1128 = &g_385;
                    int *l_1129 = &l_1092;
                    int *l_1130 = &l_979;
                    int *l_1131 = (void*)0;
                    int *l_1132 = &l_979;
                    int *l_1134 = (void*)0;
                    int *l_1135 = &l_1093;
                    int *l_1136 = &l_993;
                    int *l_1137 = &l_1090;
                    int *l_1138 = &l_1120;
                    int *l_1139 = &l_994;
                    int *l_1140 = &l_1059;
                    int *l_1142 = &g_385;
                    int *l_1143 = &l_1120;
                    int *l_1144 = &l_1089;
                    int *l_1145 = &l_1020;
                    int *l_1146 = &l_1091;
                    int *l_1147 = &l_1020;
                    int *l_1148 = &l_1059;
                    int *l_1150 = &l_1141;
                    int *l_1151 = &g_385;
                    int *l_1152 = (void*)0;
                    int *l_1153 = &l_1025;
                    int *l_1154 = &l_978;
                    int *l_1155 = &l_1093;
                    int *l_1156 = &l_1093;
                    int *l_1157 = &g_385;
                    int *l_1159 = &l_1038;
                    for (l_1025 = 0; (l_1025 > (-23)); l_1025 = safe_sub_func_int8_t_s_s(l_1025, 1))
                    {
                        char l_1085 = 0x9AL;
                        if (l_1085)
                            break;
                    }
                    ++l_1086;
                    g_1160--;
                }
            }


            if (((((*l_1164) = (func_45((func_45((*l_961), (**g_783), ((void*)0 == l_1163)) , (*l_961)), (*l_1022), l_1158) <= 1UL)) && 0UL) < 0xEFE1L))
            {
                int l_1165 = 0x52BA17DCL;
                int l_1166 = 0x84BB87E1L;
                int l_1169 = 0xC2A7CC1AL;
                int *l_1171 = &l_1093;
                int *l_1172 = &l_1043;
                int *l_1173 = (void*)0;
                int *l_1174 = &g_87;
                int *l_1175 = &l_1093;
                int *l_1176 = &l_994;
                int *l_1177 = (void*)0;
                int *l_1178 = &l_979;
                int *l_1179 = &l_1170;
                int *l_1180 = &g_385;
                int *l_1181 = &l_1169;
                int *l_1182 = &l_1158;
                int *l_1183 = &l_979;
                int *l_1184 = (void*)0;
                int *l_1185 = &l_1043;
                int *l_1186 = &l_978;
                int *l_1187 = &l_1059;
                int *l_1188 = &g_216;
                int *l_1189 = &l_1018;
                int *l_1190 = &l_993;
                int *l_1191 = (void*)0;
                int *l_1192 = &l_1093;
                int *l_1193 = &l_1167;
                int *l_1194 = &l_993;
                int *l_1195 = &l_1166;
                int *l_1196 = &l_1141;
                int *l_1197 = &l_977;
                int *l_1198 = &l_1018;
                int *l_1199 = &l_994;
                int *l_1200 = &l_1169;
                int *l_1201 = &l_979;
                int *l_1202 = &l_1018;
                int *l_1203 = &l_1133;
                int *l_1204 = (void*)0;
                int *l_1205 = &l_1059;
                int *l_1206 = (void*)0;
                int *l_1207 = &l_1165;
                int *l_1208 = &l_1025;
                int *l_1209 = &l_1038;
                int *l_1210 = &l_1043;
                int *l_1211 = &l_1141;
                int *l_1212 = &l_993;
                int *l_1213 = &l_977;
                int *l_1214 = &l_1158;
                int *l_1215 = &l_1020;
                int *l_1216 = &l_1167;
                int *l_1217 = &l_1093;
                int *l_1218 = &l_1059;
                int *l_1219 = &l_1020;
                int l_1220 = (-5L);
                int *l_1221 = &l_1165;
                int *l_1222 = &l_1165;
                int *l_1223 = &l_977;
                int *l_1224 = &g_87;
                int *l_1225 = &l_978;
                int *l_1227 = (void*)0;
                int *l_1228 = &l_1141;
                int *l_1229 = &l_1170;
                int *l_1231 = &g_385;
                int *l_1234 = &l_977;
                int *l_1235 = &l_1158;
                int *l_1236 = &l_1166;
                int *l_1237 = (void*)0;
                int *l_1238 = (void*)0;
                int *l_1239 = &l_993;
                int *l_1240 = &l_1020;
                int *l_1241 = &l_1170;
                int *l_1242 = &l_1133;
                int *l_1243 = &l_1025;
                int *l_1244 = &l_1038;
                int *l_1245 = (void*)0;
                int *l_1247 = (void*)0;
                int *l_1248 = &l_1246;
                int *l_1250 = &l_1025;
                int *l_1251 = &l_1226;
                int *l_1252 = &l_1025;
                int *l_1254 = &l_1166;
                int *l_1255 = &l_1093;
                int *l_1256 = &l_1020;
                int *l_1257 = &l_1167;
                int *l_1258 = &l_1232;
                int *l_1259 = &l_979;
                int *l_1260 = &l_1253;
                unsigned ***l_1265 = &g_770;
                char *l_1270 = (void*)0;
                char ***l_1275 = &l_962;
                g_1261++;
                (*l_1006) |= 5L;
                (*l_1265) = l_1264;

                ;
                (*l_1244) |= (safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((*l_1002) < (-1L)), l_1276)), (*l_887)));
            }
            else
            {
                int l_1277 = 0xDB1451F8L;
                char *l_1299 = &g_908;
                int l_1325 = (-3L);
                int l_1359 = (-1L);
                int *l_1360 = &l_994;
                int *l_1361 = (void*)0;
                int *l_1362 = &l_1253;
                int *l_1363 = &l_1325;
                int *l_1364 = &l_1025;
                int *l_1365 = &l_977;
                int *l_1366 = &l_1167;
                int *l_1367 = (void*)0;
                int *l_1368 = &l_993;
                int *l_1369 = &l_977;
                int *l_1370 = &l_1043;
                int *l_1371 = &l_1232;
                int *l_1372 = &l_1043;
                int *l_1373 = (void*)0;
                int *l_1374 = (void*)0;
                int *l_1375 = &g_87;
                int *l_1376 = &l_978;
                int *l_1377 = &l_1158;
                int *l_1378 = &l_1059;
                int *l_1379 = &l_978;
                int *l_1380 = &l_1167;
                int *l_1381 = &l_1232;
                int *l_1382 = &l_979;
                int *l_1383 = &l_1170;
                int *l_1384 = (void*)0;
                int *l_1385 = &l_978;
                int *l_1386 = &l_1359;
                int *l_1387 = &l_994;
                int *l_1388 = (void*)0;
                int *l_1389 = &l_1158;
                int *l_1390 = &l_1025;
                int *l_1391 = (void*)0;
                int *l_1392 = &l_1246;
                int *l_1393 = &l_1158;
                int *l_1394 = &l_1232;
                int *l_1395 = &l_1226;
                int *l_1396 = (void*)0;
                int *l_1397 = &l_1018;
                int *l_1398 = &l_1059;
                int *l_1399 = &l_1233;
                int *l_1400 = &l_1025;
                int *l_1401 = (void*)0;
                int *l_1402 = &l_1232;
                int *l_1403 = &l_994;
                int *l_1404 = &l_1246;
                int *l_1405 = (void*)0;
                int *l_1406 = &l_1167;
                int *l_1407 = (void*)0;
                int *l_1408 = (void*)0;
                int *l_1409 = &l_1133;
                int *l_1410 = &l_1232;
                int *l_1411 = &l_1230;
                int *l_1412 = &l_1093;
                int *l_1413 = &l_977;
                int *l_1414 = &l_1020;
                int *l_1415 = &l_1359;
                int *l_1416 = &l_1170;
                int *l_1417 = &l_1141;
                int *l_1418 = (void*)0;
                int *l_1419 = &l_1170;
                int *l_1420 = &l_1230;
                int *l_1421 = &l_994;
                int *l_1422 = &l_1025;
                int *l_1423 = &l_1226;
                int *l_1424 = &l_993;
                int l_1425 = (-1L);
                int *l_1426 = (void*)0;
                int *l_1427 = (void*)0;
                int l_1428 = (-1L);
                int *l_1429 = &l_1246;
                int *l_1430 = &l_1170;
                int *l_1431 = (void*)0;
                int *l_1432 = &l_1141;
                int *l_1433 = &l_1141;
                int *l_1434 = (void*)0;
                int *l_1435 = &l_994;
                int *l_1436 = &l_994;
                int *l_1437 = (void*)0;
                int *l_1438 = &l_1043;
                int *l_1439 = &l_1038;
                int *l_1440 = &l_979;
                int *l_1441 = (void*)0;
                int *l_1442 = &l_1170;
                int *l_1443 = &l_1170;
                int *l_1444 = &l_1170;
                int *l_1445 = (void*)0;
                int l_1446 = 0xCACAEB7FL;
                int *l_1447 = &l_1018;
                int *l_1448 = &l_1232;
                int *l_1449 = &l_1446;
                int *l_1450 = &l_1025;
                int *l_1451 = (void*)0;
                int *l_1452 = &l_1158;
                int *l_1453 = &l_1141;
                int *l_1454 = &l_1428;
                int *l_1455 = &l_1038;
                int *l_1456 = &l_1170;
                int l_1457 = (-4L);
                int *l_1458 = &l_1167;
                int *l_1459 = &l_1428;
                int *l_1460 = &l_1170;
                int *l_1461 = &l_1133;
                int *l_1462 = &l_1425;
                int *l_1463 = &l_1226;
                int *l_1464 = &l_1232;
                int *l_1465 = &l_1359;
                int *l_1467 = &l_978;
                int *l_1468 = &l_979;
                int *l_1469 = &l_1359;
                int *l_1470 = &l_1133;
                int *l_1471 = &l_993;
                int *l_1472 = &l_1170;
                if ((l_1277 = 0x9BA7B60EL))
                {
                    unsigned char l_1281 = 0xCAL;
                    short *l_1285 = &g_559;
                    short *l_1286 = &g_276;
                    (*l_1007) = func_45((*l_961), ((((void*)0 != l_1278) , (((safe_sub_func_int16_t_s_s(((*g_307) &= l_1281), (((safe_unary_minus_func_int16_t_s((+l_1170))) && (safe_sub_func_int16_t_s_s(((*l_1286) &= ((*l_1285) ^= l_1281)), (safe_lshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(l_1133, (l_960 & (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u(0x5CAAL, l_1277)), l_1297)), (*l_976)))))), (*g_771)))))) != l_960))) ^ (**l_886)) != 0L)) , (**g_783)), l_1277);
                }
                else
                {
                    unsigned l_1298 = 0xE316F0D3L;
                    int l_1312 = 0L;
                    int l_1313 = (-5L);
                    int l_1314 = (-2L);
                    int l_1315 = 0xF31A2BD2L;
                    int *l_1322 = &l_1170;
                    int *l_1323 = (void*)0;
                    int *l_1324 = &l_1018;
                    int *l_1326 = &l_1246;
                    int *l_1327 = &l_977;
                    int *l_1328 = &g_87;
                    int *l_1329 = &l_1141;
                    int *l_1330 = &l_1232;
                    int *l_1331 = &l_1093;
                    int *l_1332 = &l_1315;
                    int *l_1333 = &l_1315;
                    int *l_1334 = (void*)0;
                    int *l_1335 = &l_1025;
                    int *l_1336 = &l_978;
                    int *l_1337 = &l_1167;
                    int *l_1338 = &l_1038;
                    int l_1339 = 7L;
                    int *l_1340 = &l_1246;
                    int *l_1341 = &l_1059;
                    int *l_1342 = &l_977;
                    int *l_1343 = &l_1313;
                    int *l_1344 = &l_1170;
                    int *l_1345 = (void*)0;
                    int *l_1346 = &l_1230;
                    int *l_1347 = &l_1038;
                    int *l_1348 = (void*)0;
                    int *l_1349 = &l_993;
                    int *l_1350 = &l_979;
                    int *l_1351 = &l_1325;
                    int *l_1352 = &l_1059;
                    int *l_1353 = &l_1226;
                    int *l_1354 = (void*)0;
                    int *l_1355 = &l_1018;
                    if ((*p_37))
                    {
                        (*l_997) |= ((*p_37) != l_1298);
                        (*l_1048) ^= func_45(l_1299, (l_1300 == (void*)0), (*l_1000));
                    }
                    else
                    {
                        unsigned l_1302 = 0xF21B4E19L;
                        l_1302--;
                        (*l_1009) = (safe_mod_func_int16_t_s_s(((*g_307) = l_1307), l_1277));
                    }
                    (*l_1027) = (safe_lshift_func_uint16_t_u_u(g_391, 13));
                    for (l_1061 = 0; (l_1061 != 36); l_1061 = safe_add_func_uint8_t_u_u(l_1061, 2))
                    {
                        l_1316--;
                        (*g_1319) = ((*l_886) = &g_4);

                        ;
                        ;
                        return (*p_37);
                    }
                    ++g_1356;
                }
                (*l_886) = (void*)0;

                ;
                l_1473++;
            }


        }


        return (*p_37);
    }
    else
    {
        unsigned *l_1476 = &g_1160;
        const int l_1481 = 0L;
        const char *l_1496 = (void*)0;
        int l_1512 = 0xBB5EB50CL;
        int l_1607 = 0L;
        unsigned char **l_1628 = &g_784;
        char *l_1640 = &g_34;
        int l_1681 = (-1L);
        int l_1682 = 0x8664E74BL;
        int l_1773 = 0xD0EBA67FL;
        int l_1810 = (-7L);
        int l_1821 = (-9L);
        if ((((*l_1476) |= 4294967289UL) >= ((void*)0 != l_1477)))
        {
            const int l_1478 = (-1L);
            int **l_1479 = &g_441;
            char *l_1480 = &g_908;
            short l_1482 = 0x1EB8L;
            const char *l_1483 = (void*)0;
            const char **l_1484 = &l_1483;
            unsigned *l_1485 = &g_1160;
            short * const *l_1495 = (void*)0;
            short * const **l_1494 = &l_1495;
            (*p_36) = (l_1478 <= ((&g_441 == l_1479) , func_45(l_1480, (**g_783), (*g_65))));
            (*l_886) = func_38(((l_1485 = (l_1476 = func_38((*l_884), l_1481, ((*l_1484) = l_1483)))) != p_36), (safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((((*l_887) | (safe_sub_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((((*l_1494) = &g_307) == (void*)0), l_1481)), l_1481))) | 0L), 0xC81CL)), l_1478)), l_1496);

            ;
            ;
            ;
            ;
            if ((*g_573))
            {
                for (l_993 = 0; (l_993 >= 29); l_993 = safe_add_func_uint16_t_u_u(l_993, 4))
                {
                    return (*p_36);
                }
            }
            else
            {
                return (*g_542);
            }
        }
        else
        {
            unsigned char l_1503 = 0xA0L;
            unsigned char *l_1506 = &g_1507;
            int l_1513 = 0L;
            unsigned *l_1677 = (void*)0;
            int l_1714 = (-1L);
            int l_1805 = 1L;
            int l_1807 = 0xCC9D3211L;
            int l_1833 = 0x0EFDB5AFL;
            if ((((safe_mod_func_int32_t_s_s((l_1503 |= ((*p_36) = (safe_mul_func_uint8_t_u_u(l_1481, (*l_887))))), (*p_37))) , (*g_771)) != (*g_771)))
            {
                int *l_1514 = &g_216;
                unsigned l_1515 = 0xBA07A633L;
                int l_1522 = 0x6B00CB54L;
                int l_1564 = (-9L);
                short *l_1653 = &g_570;
                const char *l_1654 = &g_1249;
                (*l_886) = l_1514;

                ;
                (*p_36) = l_1515;
                if (func_45(&g_1249, (**g_783), l_1481))
                {
                    unsigned ****l_1521 = &g_769;
                    int l_1532 = (-8L);
                    for (g_575 = 13; (g_575 == 49); g_575++)
                    {
                        (**l_886) = 0x254A3727L;
                    }
                    for (g_570 = 0; (g_570 <= 0); g_570++)
                    {
                        char **l_1520 = &g_65;
                        int l_1533 = 4L;
                        int *l_1534 = (void*)0;
                        g_385 |= func_45(((*l_1520) = &g_34), ((&g_769 != l_1521) != l_1522), (safe_div_func_int16_t_s_s(0x442BL, (((safe_rshift_func_uint8_t_u_s(((-6L) & ((*g_544) , (g_99 , ((safe_unary_minus_func_uint16_t_u(((safe_sub_func_int32_t_s_s((((*g_307) = (safe_add_func_uint32_t_u_u((l_1532 , 0x83A0E67DL), 0x0B2ADB01L))) == l_1481), l_1533)) <= (**l_886)))) , l_1532)))), 7)) ^ 0x046ACD43L) | l_1481))));

                        ;
                    }
                }
                else
                {
                    int l_1614 = 0x88C26873L;
                    unsigned short l_1621 = 0x370BL;
                    char *l_1633 = &g_34;
                    for (l_993 = 0; (l_993 != 24); l_993 = safe_add_func_int16_t_s_s(l_993, 6))
                    {
                        int *l_1537 = (void*)0;
                        int l_1538 = 0xC80B2FF9L;
                        int *l_1539 = &g_385;
                        int *l_1540 = &l_1141;
                        int *l_1541 = &l_1512;
                        int *l_1542 = &l_1538;
                        int *l_1543 = &l_1233;
                        int *l_1544 = &l_1020;
                        int *l_1545 = &g_87;
                        int *l_1546 = &l_1538;
                        int *l_1547 = &l_1246;
                        int *l_1548 = &l_1038;
                        int *l_1549 = &l_1538;
                        int *l_1550 = &g_216;
                        int *l_1551 = &l_1538;
                        int *l_1552 = &g_216;
                        int *l_1553 = &l_1020;
                        int *l_1554 = &l_1513;
                        int *l_1555 = &l_1538;
                        int *l_1556 = &l_1141;
                        int *l_1557 = (void*)0;
                        int *l_1558 = &l_1512;
                        int *l_1559 = &l_1253;
                        int *l_1560 = &l_1246;
                        int *l_1561 = &g_385;
                        int *l_1562 = &g_216;
                        int *l_1563 = &l_1512;
                        int *l_1565 = &l_1038;
                        int *l_1566 = &l_1513;
                        int *l_1567 = &g_87;
                        int *l_1568 = (void*)0;
                        int *l_1569 = &l_1020;
                        int *l_1570 = &l_1512;
                        int *l_1571 = &l_1246;
                        int *l_1572 = &l_1246;
                        int *l_1573 = &l_1038;
                        int *l_1574 = &l_1093;
                        int *l_1575 = &l_1564;
                        int *l_1576 = &g_216;
                        int *l_1577 = &l_1020;
                        int *l_1578 = (void*)0;
                        int *l_1579 = &l_1513;
                        int *l_1580 = &l_1246;
                        int *l_1581 = &l_1038;
                        int *l_1582 = (void*)0;
                        int *l_1583 = &g_216;
                        int *l_1584 = &g_385;
                        int *l_1585 = &l_1512;
                        int *l_1586 = &l_1513;
                        int *l_1587 = &l_1564;
                        int *l_1588 = &l_1253;
                        int *l_1589 = (void*)0;
                        int *l_1590 = &g_385;
                        int *l_1591 = &g_216;
                        int *l_1592 = &g_216;
                        int *l_1593 = (void*)0;
                        int *l_1594 = &l_1233;
                        int *l_1595 = &l_1093;
                        int *l_1596 = &l_1233;
                        int *l_1597 = &l_1246;
                        int *l_1598 = &l_1253;
                        int *l_1599 = &g_216;
                        int *l_1600 = &l_1233;
                        int *l_1601 = (void*)0;
                        int *l_1602 = &l_1512;
                        int *l_1603 = &l_1564;
                        int *l_1604 = &g_87;
                        int *l_1605 = &l_1038;
                        int *l_1606 = (void*)0;
                        int *l_1608 = &l_1246;
                        int *l_1609 = (void*)0;
                        int *l_1610 = &l_1538;
                        int *l_1611 = &l_1253;
                        int *l_1612 = &l_1253;
                        int *l_1613 = (void*)0;
                        int *l_1615 = (void*)0;
                        int *l_1616 = (void*)0;
                        int *l_1617 = &g_216;
                        int *l_1618 = &l_1513;
                        int *l_1619 = &l_1512;
                        int *l_1620 = &l_1093;
                        l_1621--;
                        (*l_1608) ^= ((*l_1545) = (safe_sub_func_int32_t_s_s(((*l_1573) |= (*l_884)), (((safe_add_func_int16_t_s_s((((*g_771) < ((l_1628 == ((((l_1503 & l_1512) , (safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(((func_45(l_1633, ((**l_955)--), (*l_1563)) , (safe_sub_func_int16_t_s_s((**g_306), l_1512))) , l_1513), (*l_1514))), l_1621))) < g_1507) , &l_1506)) && l_1481)) , 1L), 0L)) ^ 1L) | l_1621))));
                        (*l_886) = p_36;
                    }


                }


                (*l_886) = func_38((*g_305), ((safe_rshift_func_int16_t_s_u(0L, l_1512)) >= ((func_45(l_1640, (g_50 <= (((*l_1476) = (*l_884)) != 0xA3C338ECL)), ((((safe_mul_func_uint8_t_u_u(((*g_784) , (safe_lshift_func_uint16_t_u_s((((*l_1653) ^= (safe_add_func_uint8_t_u_u((((*g_784) = ((((safe_mod_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(((&l_1301 != p_36) | l_1513), 1)) != g_216), l_1607)) <= (*g_65)) , (void*)0) == p_37)) < (*l_1514)), 0x62L))) > 65528UL), (*g_307)))), 0xCEL)) >= g_50) && 0L) ^ g_87)) || 1L) < (-7L))), l_1654);

                ;
            }
            else
            {
                short l_1656 = (-5L);
                (*l_886) = func_38((*g_1320), l_1655, l_1640);

                ;
            }

            ;
            l_1513 = func_45((((((safe_mod_func_int8_t_s_s(((**l_886) = ((g_1659 | (safe_rshift_func_int16_t_s_s(0L, (safe_mul_func_uint8_t_u_u(l_1512, (*l_884)))))) || (*g_542))), ((*g_784) |= 247UL))) , (((*l_884) , (*p_37)) <= (((safe_sub_func_uint32_t_u_u(((l_1481 >= (*l_887)) >= (*l_887)), (*p_37))) & 0xE2F9219AL) , 0x31806183L))) >= 0x77L) , (*l_887)) , l_1506), l_1481, (*g_771));
            if (((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(g_391, (g_99 = 65535UL))), (g_1249 <= (++g_1670)))) , ((safe_add_func_int8_t_s_s(1L, 0L)) > (safe_lshift_func_int16_t_s_s((**g_306), (((l_1512 , p_37) != l_1677) != l_1503))))))
            {
                int *l_1678 = &l_1513;
                short l_1788 = 7L;
                char *l_1790 = &g_34;
                int l_1801 = 0L;
                int l_1802 = (-4L);
                int l_1803 = 0xB7A2C39CL;
                int l_1804 = 0xFDCEFECBL;
                int l_1806 = 0x0A1F9BD6L;
                int l_1841 = 0x0394269DL;
                int l_1855 = 0xD562D046L;
                (*l_886) = l_1678;

                ;
                for (g_216 = 0; (g_216 >= 8); g_216 = safe_add_func_int16_t_s_s(g_216, 6))
                {
                    int *l_1683 = (void*)0;
                    int *l_1684 = &l_1038;
                    int *l_1685 = (void*)0;
                    int *l_1686 = &l_1141;
                    int *l_1687 = (void*)0;
                    int *l_1688 = &l_1038;
                    int *l_1689 = &l_1513;
                    int *l_1690 = &l_1513;
                    int *l_1691 = &l_1681;
                    int *l_1692 = &l_1512;
                    int *l_1693 = &l_1020;
                    int *l_1694 = &l_1233;
                    int l_1695 = 1L;
                    int *l_1696 = &l_1093;
                    int *l_1697 = &g_385;
                    int *l_1698 = (void*)0;
                    int *l_1699 = (void*)0;
                    int *l_1700 = &l_1682;
                    int *l_1701 = (void*)0;
                    int *l_1702 = &l_1681;
                    int *l_1703 = &l_1020;
                    int *l_1704 = &l_1093;
                    int *l_1705 = &l_1038;
                    int *l_1706 = &l_1512;
                    int *l_1707 = (void*)0;
                    int *l_1708 = (void*)0;
                    int *l_1709 = &l_1253;
                    int *l_1710 = &l_1233;
                    int *l_1711 = &l_1512;
                    int *l_1712 = &l_1020;
                    int *l_1713 = (void*)0;
                    int *l_1715 = (void*)0;
                    int *l_1716 = &g_385;
                    int *l_1717 = &l_1695;
                    int *l_1718 = &l_1714;
                    int *l_1719 = &l_1141;
                    int *l_1720 = &l_1020;
                    int *l_1721 = &l_1093;
                    int *l_1722 = &l_1038;
                    int *l_1723 = &l_1513;
                    int *l_1724 = (void*)0;
                    int *l_1725 = &l_1141;
                    int *l_1726 = &l_1141;
                    int *l_1727 = &l_1682;
                    int *l_1728 = &l_1512;
                    int *l_1729 = &l_1682;
                    int *l_1730 = (void*)0;
                    int *l_1731 = &l_1233;
                    int *l_1732 = &l_1682;
                    int *l_1733 = (void*)0;
                    int *l_1734 = &l_1020;
                    int *l_1735 = (void*)0;
                    int l_1736 = 2L;
                    int *l_1737 = &g_87;
                    int *l_1738 = &g_87;
                    int *l_1739 = &l_1512;
                    int *l_1740 = (void*)0;
                    int *l_1741 = (void*)0;
                    int *l_1742 = &l_1253;
                    int *l_1743 = &g_385;
                    int *l_1744 = &l_1714;
                    int *l_1745 = &l_1714;
                    int *l_1746 = &g_385;
                    int *l_1747 = &l_1093;
                    int *l_1748 = &l_1020;
                    int *l_1749 = (void*)0;
                    int *l_1750 = (void*)0;
                    int *l_1751 = &g_87;
                    int *l_1752 = &l_1512;
                    int *l_1753 = &l_1038;
                    int *l_1754 = &l_1246;
                    int *l_1755 = &l_1020;
                    int *l_1756 = &l_1513;
                    int *l_1757 = &l_1141;
                    int l_1758 = 0L;
                    int *l_1759 = &l_1513;
                    int *l_1760 = &l_1038;
                    int *l_1761 = &l_1682;
                    int *l_1762 = &g_385;
                    int *l_1763 = &l_1253;
                    int *l_1764 = &l_1253;
                    int *l_1765 = &g_385;
                    int *l_1766 = (void*)0;
                    int *l_1767 = &l_1246;
                    int *l_1768 = &g_385;
                    int *l_1769 = &l_1233;
                    int *l_1770 = (void*)0;
                    int *l_1771 = &l_1758;
                    int *l_1772 = &l_1681;
                    int *l_1774 = &l_1736;
                    int l_1775 = 0x2DCB4940L;
                    int *l_1776 = &l_1512;
                    char **l_1789 = (void*)0;
                    int *l_1808 = &l_1803;
                    int *l_1809 = &l_1513;
                    int *l_1811 = &l_1804;
                    int *l_1812 = (void*)0;
                    int *l_1813 = &l_1682;
                    int *l_1814 = &l_1806;
                    int *l_1817 = &l_1233;
                    int *l_1818 = &l_1681;
                    int *l_1819 = (void*)0;
                    int *l_1820 = &l_1758;
                    int l_1822 = (-1L);
                    int *l_1823 = &l_1758;
                    int *l_1824 = &l_1714;
                    int *l_1825 = &l_1822;
                    int *l_1826 = &l_1810;
                    int *l_1827 = &l_1758;
                    int *l_1828 = (void*)0;
                    int *l_1829 = (void*)0;
                    int *l_1830 = (void*)0;
                    int *l_1831 = &l_1758;
                    int *l_1832 = &l_1038;
                    int *l_1834 = &l_1803;
                    int *l_1835 = &l_1822;
                    int *l_1836 = (void*)0;
                    int *l_1837 = &l_1775;
                    int *l_1838 = (void*)0;
                    int *l_1839 = (void*)0;
                    int *l_1840 = (void*)0;
                    int *l_1842 = &l_1512;
                    int *l_1843 = &l_1736;
                    int *l_1844 = &g_87;
                    int *l_1845 = &l_1681;
                    int *l_1846 = (void*)0;
                    int *l_1847 = &l_1807;
                    int *l_1848 = (void*)0;
                    int *l_1849 = (void*)0;
                    int *l_1850 = (void*)0;
                    int *l_1851 = &l_1804;
                    int *l_1852 = &l_1805;
                    int *l_1853 = &l_1806;
                    int *l_1854 = &l_1020;
                    int *l_1856 = &l_1775;
                    int *l_1857 = &l_1695;
                    int *l_1858 = &l_1141;
                    l_1777++;
                    (*l_1744) &= (((l_1503 ^ ((**l_955) &= ((*l_884) > (*l_1678)))) && 1UL) || (((safe_add_func_uint16_t_u_u((*l_1678), (safe_add_func_int32_t_s_s((*p_37), (+(+((**g_1319) , (safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((l_1788 & 0xD7L), (**g_783))), (*g_307)))))))))) != l_1513) == (*l_884)));
                    if ((*p_36))
                    {
                        char *l_1799 = (void*)0;
                        unsigned l_1800 = 0xFF9FFE1FL;
                        (*l_1705) = (*g_573);
                        if ((*g_1320))
                            break;
                        l_1714 = ((((safe_rshift_func_int16_t_s_s((((func_45(l_1506, l_1773, ((((l_1513 | (((*g_307) = l_1714) , (**g_1319))) || 1L) == (*p_37)) , l_1773)) , 0xF0L) & (*l_1678)) | l_1513), g_1249)) , l_1513) <= (*p_37)) , 1L);
                    }
                    else
                    {
                        if ((**l_886))
                            break;
                    }
                    g_1859++;
                }
            }
            else
            {
                unsigned l_1870 = 4294967295UL;
                p_37 = p_37;
                (*g_1874) &= (safe_lshift_func_uint16_t_u_s((((*g_307) ^= (l_1512 = (l_1512 , l_1607))) && ((~(((safe_add_func_int32_t_s_s((safe_div_func_int16_t_s_s((0x5D23A9F5L <= l_1870), ((*g_307) = (safe_mul_func_uint16_t_u_u((((*l_887) > (-6L)) > (*g_307)), l_1714))))), (*l_884))) >= l_1873) , (-5L))) , (*l_887))), (**l_886)));
                (*p_36) = (*p_37);
                (*p_36) = (g_139 | l_1807);
            }

            ;
        }


        ;
        return (*g_573);
    }
}







static int * func_38(int p_39, const unsigned p_40, const char * p_41)
{
    int *l_832 = &g_385;
    int *l_833 = &g_87;
    int *l_834 = (void*)0;
    int *l_835 = &g_216;
    int *l_836 = &g_216;
    int *l_837 = &g_385;
    int *l_838 = &g_216;
    int *l_839 = &g_87;
    int *l_840 = &g_216;
    int *l_841 = &g_385;
    int *l_842 = (void*)0;
    int *l_843 = &g_216;
    int l_844 = 1L;
    int *l_845 = &g_87;
    int l_846 = 0x351F5493L;
    int *l_847 = &g_87;
    int *l_848 = &l_846;
    int *l_849 = &l_846;
    int *l_850 = &g_385;
    int l_851 = 1L;
    int *l_852 = &g_216;
    int *l_853 = (void*)0;
    int l_854 = 0x81EF6CB8L;
    int *l_855 = &g_216;
    int l_856 = 0x6411244DL;
    int *l_857 = &l_856;
    int *l_858 = &l_856;
    int *l_859 = (void*)0;
    int l_860 = (-9L);
    int *l_861 = &l_851;
    int *l_862 = &l_844;
    int *l_863 = &l_854;
    int *l_864 = &g_385;
    int *l_865 = &l_851;
    int *l_866 = (void*)0;
    int *l_867 = &g_216;
    int *l_868 = &l_851;
    int l_869 = 0x585AC561L;
    int *l_870 = (void*)0;
    int *l_871 = &l_869;
    int *l_872 = &g_87;
    int *l_873 = &g_216;
    int *l_874 = (void*)0;
    int *l_875 = &l_844;
    int *l_876 = &l_860;
    int *l_877 = &l_854;
    int *l_878 = (void*)0;
    int *l_879 = &l_860;
    int *l_880 = (void*)0;
    unsigned char l_881 = 0x01L;
    l_881--;
    return &g_216;


}







static char * func_42(unsigned p_43)
{
    short *l_49 = &g_50;
    int l_57 = 0L;
    short l_58 = (-4L);
    char *l_66 = &g_34;
    int l_181 = (-5L);
    int l_202 = 4L;
    int l_210 = 1L;
    int l_212 = (-5L);
    char l_302 = 0xE2L;
    short ** volatile l_308 = (void*)0;
    int *l_419 = &l_181;
    short l_554 = (-1L);
    int l_754 = 0x437353A0L;
    unsigned l_774 = 4294967295UL;
    char *l_788 = (void*)0;
    unsigned char **l_810 = &g_784;
    int l_828 = 0xF81BAC97L;
    char *l_830 = &l_302;
    char *l_831 = &g_34;
    if ((func_45(((((*l_49) = g_4) , (safe_lshift_func_uint16_t_u_u(p_43, 9))) , &g_34), g_4, ((safe_sub_func_uint32_t_u_u((0UL & (g_4 != 0xDDL)), ((+(safe_add_func_uint16_t_u_u((l_57 || (p_43 ^ 0xFE93L)), l_58))) > 0x4F86FC33L))) , g_4)) | 0xE3L))
    {
        char *l_62 = &g_34;
        char **l_61 = &l_62;
        int l_73 = 0x1355901AL;
        int *l_74 = &l_57;
        int l_98 = (-1L);
        int l_194 = 0x53DE9439L;
        int l_224 = 0x8CEABDB1L;
        short l_226 = 0L;
        char l_263 = 2L;
        l_57 = (0xCCC4L && l_58);
        for (l_57 = 0; (l_57 >= 22); l_57 = safe_add_func_uint8_t_u_u(l_57, 6))
        {
            if (l_57)
                break;
        }
        (*g_63) = l_61;

        ;
        if (((*l_74) ^= ((func_45(l_66, g_50, (***g_63)) <= (&l_57 == ((((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(p_43, ((func_45(l_66, (safe_div_func_uint16_t_u_u(p_43, (g_50 || 0UL))), l_73) != 0x3B9FE29FL) , 0x9BL))) && g_34), g_4)) , p_43) && (*g_15)) , l_74))) & 1L)))
        {
            char ***l_75 = &g_64;
            int l_82 = 0x80C7F43AL;
            unsigned *l_83 = (void*)0;
            unsigned *l_84 = &g_85;
            int *l_86 = &g_87;
            (*l_74) = ((*g_65) & 0L);
            (*l_74) ^= ((func_45(l_66, p_43, p_43) , (void*)0) == ((*l_75) = &l_66));

            ;
            (*l_86) |= (safe_add_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u(g_50, (((safe_mod_func_uint32_t_u_u(((*l_84) = (l_82 || (((*g_15) < func_45((*l_61), (p_43 != (((((0xEB6BL < g_50) & (((!func_45(((*g_64) = l_66), l_57, (*l_74))) == (*l_74)) < g_50)) , 0x43C5EACAL) , &l_61) != &g_64)), (*g_65))) != g_4))), g_34)) == (*l_74)) ^ (*g_15)))) > 0L), (*g_15)));
        }
        else
        {
            char l_119 = 0x22L;
            int l_127 = 0xB678304AL;
            int **l_162 = &l_74;
            int l_184 = 0L;
            int l_218 = (-6L);
            (*l_74) |= (*g_15);
            for (p_43 = 0; (p_43 <= 4); p_43 = safe_add_func_int16_t_s_s(p_43, 2))
            {
                unsigned l_110 = 4294967295UL;
                unsigned short *l_111 = (void*)0;
                int *l_112 = (void*)0;
                int *l_113 = (void*)0;
                int *l_114 = &l_98;
                unsigned char *l_116 = &g_117;
                if ((~(((safe_div_func_uint32_t_u_u(p_43, p_43)) | (((((safe_rshift_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(l_98, 9UL)) , (((--g_99) && (safe_lshift_func_uint8_t_u_s(func_45((*g_64), (p_43 , (p_43 , ((*l_116) |= (safe_add_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(((*l_114) ^= (safe_lshift_func_int16_t_s_u(l_110, (l_57 = ((*l_74) <= 0x448D75FBL))))), (-9L))) , 8UL), g_115))))), l_58), (**g_64)))) & g_85)), 7)) , (void*)0) == (void*)0) < (*g_15)) <= (-4L))) >= p_43)))
                {
                    char l_118 = (-1L);
                    int *l_120 = &l_98;
                    int *l_121 = &l_98;
                    int *l_122 = &l_57;
                    int l_123 = 4L;
                    int *l_124 = &l_123;
                    int *l_125 = &l_123;
                    int *l_126 = (void*)0;
                    int *l_128 = (void*)0;
                    int *l_129 = &l_57;
                    int *l_133 = &l_123;
                    int *l_134 = (void*)0;
                    int *l_135 = &l_57;
                    int *l_136 = &g_87;
                    int *l_137 = &l_123;
                    int *l_138 = &l_57;
                    ++g_130;
                    --g_139;
                    l_74 = (void*)0;

                    ;
                    return l_66;



                }
                else
                {
                    unsigned l_142 = 4294967292UL;
                    int **l_143 = &l_113;
                    l_142 ^= l_58;
                    if (p_43)
                        break;
                    (*l_143) = &g_4;

                    ;
                    (*l_74) |= l_58;
                }

                ;
                if ((*l_74))
                    continue;
            }
            if (l_127)
            {
                char *l_156 = (void*)0;
                int l_161 = 0x100589B8L;
                int *l_164 = &l_161;
                int *l_165 = &l_57;
                int *l_166 = &g_87;
                int *l_167 = (void*)0;
                int *l_168 = &l_57;
                int *l_169 = (void*)0;
                int *l_170 = &l_127;
                int *l_171 = &l_57;
                int *l_172 = &g_87;
                int *l_173 = &l_98;
                int *l_174 = (void*)0;
                int *l_175 = &l_98;
                int *l_176 = &l_161;
                int *l_177 = &l_98;
                int *l_178 = &l_57;
                int *l_179 = &g_87;
                int *l_180 = &l_57;
                int *l_182 = &l_127;
                int *l_183 = (void*)0;
                int *l_185 = &l_184;
                int *l_187 = &l_161;
                int *l_188 = &g_87;
                int *l_189 = &g_87;
                int *l_190 = &l_184;
                int *l_191 = &l_184;
                int *l_192 = (void*)0;
                int *l_193 = &l_181;
                int *l_195 = &l_57;
                int *l_196 = &l_161;
                int *l_197 = &l_184;
                int *l_198 = &l_57;
                int *l_199 = &l_181;
                int *l_200 = (void*)0;
                int *l_201 = &l_127;
                int *l_203 = (void*)0;
                int *l_204 = &l_127;
                int *l_205 = (void*)0;
                int *l_207 = &l_202;
                int *l_208 = (void*)0;
                int *l_209 = &l_161;
                int *l_211 = (void*)0;
                int *l_213 = &l_181;
                int *l_214 = (void*)0;
                int *l_215 = (void*)0;
                int *l_217 = (void*)0;
                int l_219 = 1L;
                int *l_220 = &l_98;
                int *l_221 = &l_202;
                int *l_222 = (void*)0;
                int *l_223 = &l_218;
                int *l_225 = &l_184;
                int *l_227 = &l_161;
                int *l_228 = &l_181;
                int *l_229 = &l_202;
                int *l_231 = &l_161;
                int *l_232 = (void*)0;
                int *l_233 = &l_184;
                int *l_234 = (void*)0;
                int *l_235 = (void*)0;
                int *l_236 = &l_212;
                unsigned char l_237 = 0xC4L;
                unsigned short *l_252 = &g_99;
                unsigned char *l_253 = &l_237;
                for (g_85 = 0; (g_85 > 15); g_85 = safe_add_func_uint32_t_u_u(g_85, 1))
                {
                    unsigned char l_159 = 6UL;
                    int *l_160 = &l_127;
                    for (g_34 = 0; (g_34 == (-23)); --g_34)
                    {
                        unsigned l_163 = 0xBE29DAAEL;
                        g_87 = (+0L);
                        (**l_162) = (g_130 , (safe_add_func_int8_t_s_s(((((((safe_lshift_func_uint16_t_u_u((g_99 = 3UL), 6)) ^ (safe_mod_func_uint8_t_u_u(p_43, (*g_65)))) , ((safe_sub_func_uint8_t_u_u((l_156 != (*l_61)), ((safe_div_func_uint32_t_u_u((l_159 , (l_159 | (((void*)0 != l_160) <= p_43))), l_161)) != g_99))) , l_162)) != &g_15) <= 0x14E5L) < l_163), (**l_162))));
                        (*l_160) = (*g_15);
                    }
                }
                l_237--;
                (*l_207) = (((*l_253) = ((-1L) > (((g_115 , (((l_212 && (safe_rshift_func_int16_t_s_s(((*l_74) < (safe_mod_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((((&g_50 == &g_50) & (safe_mul_func_uint16_t_u_u(((*l_252) = ((safe_mod_func_uint16_t_u_u(((((+(safe_div_func_uint8_t_u_u((p_43 != (**l_162)), g_216))) >= g_130) > (*g_15)) > (**g_64)), g_50)) && (**l_162))), 0x3FA5L))) , g_85), p_43)) & g_50), (-1L)))), g_34))) == (*g_15)) , (void*)0)) != &l_66) > p_43))) , 6L);
            }
            else
            {
                unsigned *l_258 = &g_85;
                unsigned **l_257 = &l_258;
                unsigned char *l_259 = &g_117;
                int l_262 = 0x42E0B307L;
                int *l_277 = (void*)0;
                int *l_278 = (void*)0;
                int *l_279 = &g_216;
                l_263 = (p_43 != (safe_sub_func_int8_t_s_s(((**l_162) = (func_45(((*l_61) = &l_119), ((*l_259) = ((g_256 = &g_85) != ((*l_257) = &p_43))), (*l_74)) >= (l_58 , g_186))), (safe_div_func_uint32_t_u_u((l_262 , g_139), p_43)))));

                ;
                ;
                (*l_279) ^= ((**l_162) = (safe_rshift_func_uint8_t_u_u(((((*l_74) > (((safe_rshift_func_int8_t_s_s((l_181 = (p_43 != (0x98L >= (safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(func_45((p_43 , &l_119), p_43, (safe_add_func_uint32_t_u_u((((**l_162) >= (g_230 ^ 65528UL)) , 0UL), (-2L)))), 0)), g_276))))), (**l_162))) >= g_85) || p_43)) == 0xC54E2A72L) ^ (**l_162)), p_43)));
            }

            ;
            g_87 = ((**l_162) |= p_43);
        }


        ;
    }
    else
    {
        int *l_282 = (void*)0;
        int **l_281 = &l_282;
        char *l_289 = &g_34;
        unsigned char *l_291 = &g_117;
        unsigned char **l_290 = &l_291;
        unsigned char **l_292 = (void*)0;
        unsigned char *l_294 = &g_117;
        unsigned char **l_293 = &l_294;
        int *l_295 = &g_186;
        int l_310 = 1L;
        int l_334 = 0x53A6FFE6L;
        int l_408 = (-1L);
        unsigned char l_523 = 0x6FL;
        int *l_541 = &l_408;
        unsigned char l_545 = 0x8BL;
        unsigned **l_553 = (void*)0;
        int l_687 = 0xA922429EL;
        int l_692 = 3L;
        int l_732 = 0x07527C55L;
        int l_741 = 0L;
        int l_742 = 0x2904C3FDL;
        char **l_773 = &l_66;
        int *l_775 = &l_181;
        int *l_776 = &l_334;
        unsigned *l_777 = (void*)0;
        unsigned *l_778 = &g_85;
        (*l_281) = &g_4;

        ;
        if ((p_43 && ((l_212 ^= (safe_mod_func_int32_t_s_s((safe_div_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((func_45(l_289, (g_216 , func_45((((((*l_293) = ((*l_290) = ((**l_281) , l_66))) != (((*l_295) &= 0xD7E15E09L) , &g_117)) & (safe_add_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((l_181 != (*l_282)) > l_302), 0UL)), g_276)) >= 0xA38BL), l_302))) , l_294), l_57, p_43)), p_43) ^ p_43), (**l_281))) , p_43), 0x85ECL)), p_43))) ^ 1L)))
        {
            int l_303 = 0x69F9908FL;
            int *l_304 = (void*)0;
            int l_399 = 0xEAF2CDD3L;
            short **l_420 = &l_49;
            short **l_423 = (void*)0;
            char **l_435 = (void*)0;
            int * volatile *l_442 = &l_295;
            unsigned short *l_533 = &g_99;
            (*g_305) ^= l_303;
            if (p_43)
            {
                int *l_309 = &l_57;
                int *l_311 = &l_212;
                int *l_312 = &g_216;
                int l_313 = 0x8BFC3082L;
                int *l_314 = &l_181;
                int *l_315 = &l_310;
                int *l_316 = &l_202;
                int *l_317 = &l_310;
                int *l_318 = (void*)0;
                int *l_319 = &l_57;
                int *l_320 = &l_310;
                int *l_321 = &l_181;
                int *l_322 = &l_210;
                int *l_323 = &l_181;
                int *l_324 = &l_210;
                int *l_325 = &g_216;
                int l_326 = 8L;
                int *l_327 = &l_310;
                int *l_328 = &l_212;
                int *l_329 = &l_210;
                int *l_330 = &l_181;
                int *l_331 = (void*)0;
                int *l_332 = &l_313;
                int *l_333 = &l_210;
                int *l_335 = &l_210;
                int *l_336 = &l_212;
                int *l_337 = &l_310;
                int *l_338 = &l_310;
                int l_339 = 0xD416DD70L;
                int *l_340 = &g_216;
                int *l_341 = &l_310;
                int *l_342 = &l_212;
                int *l_343 = &l_181;
                int *l_344 = &l_202;
                int *l_345 = &g_216;
                int *l_346 = &l_202;
                int *l_347 = &l_212;
                int *l_348 = &l_326;
                int *l_349 = &l_334;
                int *l_350 = (void*)0;
                int *l_351 = &l_310;
                int *l_352 = (void*)0;
                int *l_353 = (void*)0;
                int *l_354 = (void*)0;
                int *l_355 = &l_212;
                int *l_356 = &g_87;
                int *l_357 = &l_334;
                int *l_358 = &l_313;
                int *l_359 = &g_216;
                int *l_360 = &l_212;
                int *l_361 = (void*)0;
                int *l_362 = &l_57;
                int *l_363 = &l_339;
                int *l_364 = (void*)0;
                int *l_365 = &l_313;
                int *l_366 = (void*)0;
                int *l_367 = (void*)0;
                int *l_368 = &g_216;
                int *l_369 = (void*)0;
                int *l_370 = &l_326;
                int *l_371 = &l_313;
                int *l_372 = &l_210;
                int *l_373 = &l_326;
                int *l_374 = (void*)0;
                int *l_375 = &l_326;
                int *l_376 = &l_202;
                int *l_377 = &l_334;
                int *l_378 = &g_87;
                int *l_379 = &l_212;
                int *l_380 = &g_216;
                int *l_381 = &l_339;
                int *l_382 = &l_339;
                int *l_383 = &l_326;
                int *l_384 = (void*)0;
                int *l_386 = &l_181;
                int *l_387 = &g_216;
                int *l_388 = &l_212;
                int *l_389 = &g_87;
                int *l_390 = &l_326;
                unsigned short l_407 = 0x3799L;
                int *l_418 = (void*)0;
                l_308 = g_306;

                ;
                g_391++;
                for (p_43 = 14; (p_43 != 5); p_43--)
                {
                    unsigned **l_396 = &g_256;
                    char l_404 = 1L;
                    short **l_411 = &l_49;
                    short ***l_421 = &l_420;
                    short ***l_422 = (void*)0;
                    if (((((((*l_396) = &p_43) != &p_43) || (safe_lshift_func_uint8_t_u_u((l_399 & (safe_lshift_func_int8_t_s_u(func_45(((*g_64) = l_294), ((safe_sub_func_int32_t_s_s((*g_305), ((((*l_66) = (+(((void*)0 != &g_117) , (l_404 != (safe_add_func_uint16_t_u_u(((*l_282) , 0xEDD9L), 0UL)))))) , p_43) > l_407))) == l_408), g_391), 3))), p_43))) ^ (-1L)) || p_43))
                    {
                        l_212 = (p_43 , (g_34 != g_276));
                        (*l_390) = (l_181 = (*g_305));
                    }
                    else
                    {
                        (*l_281) = &l_303;

                        ;
                        (*l_335) = (func_45(&l_404, ((**l_293) &= (*l_319)), p_43) & 0L);
                    }

                    ;
                    l_308 = l_411;

                    ;
                    (*l_360) = ((safe_sub_func_int32_t_s_s(p_43, (safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u(65529UL, (((*g_307) | g_206) , 0x58D5L))), ((l_419 = l_418) != (void*)0))))) == (((*l_421) = l_420) == (l_423 = &l_49)));

                    ;
                    ;
                    for (l_303 = 0; (l_303 != (-6)); l_303 = safe_sub_func_uint32_t_u_u(l_303, 1))
                    {
                        unsigned l_430 = 0xBEAF350AL;
                        (*l_347) = (safe_rshift_func_int16_t_s_s(((p_43 & (((safe_div_func_int8_t_s_s(l_430, 0x0FL)) , (safe_lshift_func_int16_t_s_s(((4L & p_43) & 0x46L), (0L || 4L)))) || ((((*g_307) >= p_43) && 0x58C51676L) > 1L))) != p_43), (*l_377)));
                        l_304 = (void*)0;
                    }
                }

                ;
                ;
                ;
                ;
                ;
                ;
                (*l_322) ^= 0x7ED8B215L;
            }
            else
            {
                const unsigned l_437 = 0xA30C062AL;
                int l_521 = (-10L);
                short *l_527 = &g_276;
                if ((((safe_lshift_func_int8_t_s_s(func_45(l_294, p_43, p_43), (g_436 = ((65528UL != ((void*)0 == l_435)) != 9UL)))) != (*l_419)) , l_437))
                {
                    for (l_399 = (-1); (l_399 != 9); l_399 = safe_add_func_int16_t_s_s(l_399, 1))
                    {
                        return (**g_63);


                    }
                }
                else
                {
                    int l_467 = 0xFF0262F6L;
                    int l_522 = (-1L);
                    short *l_526 = (void*)0;
                    l_442 = g_440;

                    ;
                    if ((safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s((**g_306), l_437)), p_43)))
                    {
                        int *l_447 = &l_181;
                        int *l_448 = (void*)0;
                        int *l_449 = &g_87;
                        int *l_450 = &g_216;
                        int *l_451 = &l_334;
                        int *l_452 = &l_334;
                        int *l_453 = &l_310;
                        int *l_454 = &l_399;
                        int *l_455 = (void*)0;
                        int *l_456 = &l_334;
                        int *l_457 = &l_334;
                        int *l_458 = (void*)0;
                        int *l_459 = &l_303;
                        int *l_460 = &g_385;
                        int *l_461 = &l_399;
                        int *l_462 = (void*)0;
                        int *l_463 = (void*)0;
                        int *l_464 = &l_202;
                        int *l_465 = &l_212;
                        int *l_466 = &l_210;
                        int *l_468 = &l_399;
                        int *l_469 = &l_334;
                        int *l_470 = &l_202;
                        int *l_471 = &g_385;
                        int *l_472 = &g_385;
                        int *l_473 = &l_399;
                        int *l_474 = &l_334;
                        int *l_475 = &g_216;
                        int *l_476 = (void*)0;
                        int *l_477 = &l_334;
                        int *l_478 = &l_210;
                        int *l_479 = &g_87;
                        int *l_480 = &l_181;
                        int *l_481 = &l_57;
                        int *l_482 = &g_216;
                        int *l_483 = (void*)0;
                        int *l_484 = &g_216;
                        int *l_485 = &l_399;
                        int *l_486 = &l_334;
                        int *l_487 = &l_399;
                        int *l_488 = (void*)0;
                        int *l_489 = &l_399;
                        int *l_490 = &g_385;
                        int *l_491 = &l_181;
                        int *l_492 = &l_210;
                        int *l_493 = &l_181;
                        int *l_494 = &g_87;
                        int *l_495 = &l_202;
                        int *l_496 = &l_310;
                        int *l_497 = &l_57;
                        int *l_498 = &l_334;
                        int *l_499 = &l_210;
                        int *l_500 = &l_210;
                        int *l_501 = &l_310;
                        int *l_502 = &g_216;
                        int *l_503 = &l_210;
                        int *l_504 = &l_57;
                        int *l_505 = &l_57;
                        int *l_506 = &l_57;
                        int *l_507 = (void*)0;
                        int *l_508 = &l_57;
                        int *l_509 = (void*)0;
                        int *l_510 = &l_181;
                        int *l_511 = &l_57;
                        int *l_512 = &l_181;
                        int *l_513 = &g_87;
                        int *l_514 = &l_212;
                        int *l_515 = &l_212;
                        int *l_516 = &l_202;
                        int *l_517 = &l_210;
                        g_518++;
                        --l_523;
                        (*l_516) |= ((((((*l_420) = l_526) != l_527) >= (safe_lshift_func_int8_t_s_s(((p_43 >= (((safe_lshift_func_uint8_t_u_u((0x93ADL ^ p_43), (((0L == (g_34 | (*g_307))) == l_522) != (**g_64)))) >= (*g_307)) ^ 8UL)) , (***g_63)), 5))) <= p_43) >= (*g_65));

                        ;
                    }
                    else
                    {
                        unsigned short *l_532 = &g_391;
                        int l_534 = 1L;
                        (*l_419) = (l_532 == l_533);
                        (*l_419) &= (*g_305);
                        (*l_419) = l_534;
                    }

                    ;
                }

                ;
                ;
                (*l_419) ^= (&l_527 == (void*)0);
            }

            ;
            ;
            ;
            ;
            ;
            ;
            ;
            ;
            for (l_202 = 8; (l_202 == (-8)); --l_202)
            {
                int l_543 = 0xEFC569B5L;
                (*g_542) = (safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(p_43, (((*g_440) == l_541) == ((**g_64) &= 1L)))), (*g_307)));
                (*g_544) &= l_543;
                (*g_544) = p_43;
                if (l_545)
                    continue;
            }
        }
        else
        {
            unsigned l_548 = 7UL;
            int l_558 = 1L;
            const unsigned *l_569 = &g_436;
            const unsigned **l_568 = &l_569;
            for (g_117 = (-6); (g_117 == 3); g_117++)
            {
                const unsigned short l_563 = 1UL;
                int *l_577 = &g_87;
                l_548--;
            }
            (*l_419) ^= p_43;
            return (**g_63);


        }

        ;
        ;
        ;

        ;
        ;
        ;
        ;
        for (g_186 = 27; (g_186 != 29); g_186 = safe_add_func_uint16_t_u_u(g_186, 6))
        {
            unsigned short l_584 = 5UL;
            char *l_585 = &g_34;
            unsigned short *l_587 = (void*)0;
            unsigned short *l_588 = &g_391;
            int l_589 = (-4L);
            int *l_596 = (void*)0;
            int *l_597 = &g_87;
            int l_598 = 0L;
            int l_599 = 0L;
            int *l_600 = &l_212;
            int *l_601 = &l_181;
            int *l_602 = &l_598;
            int *l_603 = &l_310;
            int *l_604 = &l_212;
            int *l_605 = &l_310;
            int *l_606 = (void*)0;
            int *l_607 = &g_385;
            int *l_608 = &g_385;
            int *l_609 = &l_212;
            int *l_610 = (void*)0;
            int *l_611 = &g_385;
            int *l_612 = &g_385;
            int *l_613 = &l_57;
            int *l_614 = &l_598;
            int l_615 = 0x463609E7L;
            int *l_616 = (void*)0;
            int *l_617 = &l_334;
            int *l_618 = &l_615;
            int *l_619 = &l_310;
            int *l_620 = (void*)0;
            int *l_621 = &l_212;
            int *l_622 = &l_202;
            int *l_623 = &g_216;
            int *l_624 = &l_181;
            int *l_625 = &l_57;
            int *l_626 = &l_181;
            int *l_627 = &l_334;
            int *l_628 = &g_385;
            int *l_629 = &l_212;
            int *l_630 = &l_598;
            int *l_631 = &l_598;
            int *l_632 = (void*)0;
            int *l_633 = &l_181;
            int *l_634 = (void*)0;
            int *l_635 = (void*)0;
            int *l_636 = (void*)0;
            int *l_637 = &l_212;
            int *l_638 = &l_334;
            int *l_639 = (void*)0;
            int *l_640 = &g_385;
            int *l_641 = (void*)0;
            int *l_642 = &l_615;
            int *l_643 = &l_202;
            int *l_644 = &l_334;
            int *l_645 = &g_87;
            int *l_646 = (void*)0;
            int l_647 = 0x3F509985L;
            int *l_648 = &l_598;
            int *l_649 = &l_615;
            int *l_650 = &g_87;
            int *l_651 = &g_87;
            int *l_652 = (void*)0;
            int *l_653 = &l_615;
            int *l_654 = &g_216;
            int *l_655 = &l_647;
            int *l_656 = &l_210;
            int *l_657 = (void*)0;
            int *l_659 = &l_334;
            int *l_660 = &g_216;
            int *l_661 = (void*)0;
            int *l_662 = &l_57;
            int l_663 = 0xAFE4F73BL;
            int *l_664 = &l_212;
            int *l_665 = &l_181;
            int *l_666 = &l_181;
            int *l_667 = (void*)0;
            int *l_668 = &l_615;
            int *l_669 = &g_385;
            int *l_670 = (void*)0;
            int *l_671 = &g_385;
            int *l_672 = &g_216;
            int *l_673 = &l_210;
            int *l_674 = &l_181;
            int *l_675 = &l_210;
            int *l_676 = (void*)0;
            int *l_677 = &l_598;
            int *l_678 = &l_598;
            int *l_679 = (void*)0;
            int *l_680 = &g_385;
            int *l_681 = (void*)0;
            int *l_682 = &l_212;
            int l_683 = 0xCF21AB68L;
            int *l_684 = &g_216;
            int *l_685 = &l_663;
            int *l_686 = &l_57;
            int *l_688 = &l_310;
            int *l_689 = &l_647;
            int *l_690 = (void*)0;
            int *l_691 = &l_202;
            int *l_693 = &g_87;
            int *l_694 = &l_212;
            int *l_695 = &l_334;
            int *l_696 = &l_615;
            int *l_697 = (void*)0;
            int *l_698 = &l_181;
            int *l_699 = &g_216;
            int l_700 = (-8L);
            int *l_701 = &l_202;
            int *l_702 = &l_700;
            int *l_703 = &g_87;
            int *l_704 = &l_683;
            int *l_705 = &l_615;
            int *l_706 = &l_700;
            int *l_707 = &l_57;
            int *l_708 = &l_210;
            int l_709 = 1L;
            int *l_710 = (void*)0;
            int *l_711 = (void*)0;
            int *l_712 = (void*)0;
            int *l_713 = &l_202;
            int *l_714 = &l_687;
            int *l_715 = &g_87;
            int *l_716 = (void*)0;
            int *l_717 = &l_310;
            int *l_718 = &l_202;
            int *l_719 = &l_334;
            int *l_720 = &l_700;
            int *l_721 = &l_57;
            int *l_722 = &l_615;
            int *l_723 = &g_385;
            int *l_724 = &l_683;
            int *l_725 = &l_615;
            int *l_726 = (void*)0;
            int *l_727 = &g_87;
            int *l_728 = &g_87;
            int *l_729 = &l_647;
            int *l_730 = &l_709;
            int *l_731 = &g_87;
            int *l_733 = &g_216;
            int *l_734 = (void*)0;
            int *l_735 = &l_181;
            int *l_736 = &l_663;
            int *l_737 = &l_687;
            int *l_738 = &l_615;
            int *l_739 = &l_663;
            int *l_740 = &l_210;
            int l_743 = 0x4E7FD7CAL;
            int *l_744 = (void*)0;
            int *l_745 = &l_210;
            int *l_746 = &l_743;
            int *l_747 = (void*)0;
            int *l_748 = &l_663;
            int *l_749 = &l_598;
            int *l_750 = &l_732;
            int *l_751 = &g_87;
            int *l_752 = &l_742;
            int *l_753 = (void*)0;
            int *l_755 = &l_663;
            int *l_756 = &l_709;
            int *l_757 = &l_743;
            int l_758 = (-5L);
            int *l_759 = &l_743;
            int *l_760 = &l_615;
            int *l_761 = &g_87;
            int *l_762 = &l_598;
            unsigned ***l_767 = &l_553;
            unsigned ****l_766 = &l_767;
            unsigned ****l_768 = (void*)0;
            (*l_281) = (void*)0;

            ;
            g_87 ^= (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(l_584, func_45(((*g_64) = l_585), ((safe_unary_minus_func_int16_t_s(((**g_306) = (((*l_588) = g_117) , func_45(l_585, (((l_589 , (**g_306)) && g_518) < (p_43 <= (safe_rshift_func_int8_t_s_s((safe_div_func_int32_t_s_s(0L, (*g_15))), l_589)))), g_4))))) >= g_575), l_589))), 0x74L));

            ;
            g_763++;
            l_202 = ((*l_609) == ((g_769 = ((*l_766) = (void*)0)) != &l_553));

            ;
            ;
        }


        ;
        if ((((void*)0 == &l_289) , ((3UL && ((*l_778) ^= (((((*l_776) = ((*l_775) = func_45(g_771, ((**l_293) = (safe_unary_minus_func_uint16_t_u((&l_289 == (l_773 = (*g_63)))))), l_774))) , (**g_306)) < g_436) | p_43))) , p_43)))
        {
            unsigned *l_785 = &g_575;
            unsigned char **l_789 = (void*)0;
            int l_790 = 0L;
            int *l_791 = (void*)0;
            int *l_792 = (void*)0;
            int *l_793 = &g_385;
            (*l_793) &= ((safe_div_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((g_783 == (((((*l_785)--) , ((void*)0 == &l_294)) && ((*l_776) ^= p_43)) , l_789)), (g_570 , 0L))) , (*g_784)), l_790)) <= (*l_775));
        }
        else
        {
            unsigned l_796 = 0x4891611DL;
            char *l_807 = (void*)0;
            int *l_808 = &l_212;
            unsigned char ** const l_811 = (void*)0;
            for (l_334 = 0; (l_334 < 5); ++l_334)
            {
                const int *l_802 = &g_186;
                const int **l_801 = &l_802;
                int l_806 = 0x6E4302D5L;
                int l_829 = (-1L);
                l_796++;
                for (l_754 = (-8); (l_754 > (-27)); --l_754)
                {
                    int **l_809 = &l_775;
                    (*g_803) = l_801;

                    ;
                    if ((l_806 = l_806))
                    {
                        (*g_573) = p_43;
                        l_806 ^= (*g_305);
                    }
                    else
                    {
                        (*l_775) = p_43;
                    }
                    (*l_808) ^= (((*l_809) = l_808) != &l_742);

                    ;
                    l_829 |= ((l_810 == l_811) , ((((func_45((*l_773), ((**l_809) < ((safe_add_func_int32_t_s_s((p_43 > (safe_div_func_int8_t_s_s((safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(((func_45((*g_64), (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u(((*g_771) = (4UL == (*l_808))), (**g_783))), p_43)), p_43) , 0xA7D5L) | 0x16AEL), (*l_776))) & (**l_809)), l_828)), 2)), 0x4395L)), l_806))), (*g_15))) & 0xE2A8F953L)), (**l_809)) < 2L) ^ 0xD17BL) , g_115) <= 0UL));
                }


                (*l_775) = (*g_573);
            }

            ;

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

    return l_831;




}







static char func_45(char * p_46, unsigned char p_47, char p_48)
{
    return (*p_46);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_276, "g_276", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    transparent_crc(g_391, "g_391", print_hash_value);
    transparent_crc(g_436, "g_436", print_hash_value);
    transparent_crc(g_518, "g_518", print_hash_value);
    transparent_crc(g_559, "g_559", print_hash_value);
    transparent_crc(g_560, "g_560", print_hash_value);
    transparent_crc(g_570, "g_570", print_hash_value);
    transparent_crc(g_575, "g_575", print_hash_value);
    transparent_crc(g_658, "g_658", print_hash_value);
    transparent_crc(g_763, "g_763", print_hash_value);
    transparent_crc(g_908, "g_908", print_hash_value);
    transparent_crc(g_1160, "g_1160", print_hash_value);
    transparent_crc(g_1249, "g_1249", print_hash_value);
    transparent_crc(g_1261, "g_1261", print_hash_value);
    transparent_crc(g_1356, "g_1356", print_hash_value);
    transparent_crc(g_1466, "g_1466", print_hash_value);
    transparent_crc(g_1507, "g_1507", print_hash_value);
    transparent_crc(g_1659, "g_1659", print_hash_value);
    transparent_crc(g_1670, "g_1670", print_hash_value);
    transparent_crc(g_1859, "g_1859", print_hash_value);
    transparent_crc(g_1878, "g_1878", print_hash_value);
    transparent_crc(g_1916, "g_1916", print_hash_value);
    transparent_crc(g_2340, "g_2340", print_hash_value);
    transparent_crc(g_2343, "g_2343", print_hash_value);
    transparent_crc(g_2409, "g_2409", print_hash_value);
    transparent_crc(g_2411, "g_2411", print_hash_value);
    transparent_crc(g_2499, "g_2499", print_hash_value);
    transparent_crc(g_2631, "g_2631", print_hash_value);
    transparent_crc(g_2770, "g_2770", print_hash_value);
    transparent_crc(g_2779, "g_2779", print_hash_value);
    transparent_crc(g_2939, "g_2939", print_hash_value);
    transparent_crc(g_3124, "g_3124", print_hash_value);
    transparent_crc(g_3633, "g_3633", print_hash_value);
    transparent_crc(g_3635, "g_3635", print_hash_value);
    transparent_crc(g_3694, "g_3694", print_hash_value);
    transparent_crc(g_3832, "g_3832", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
