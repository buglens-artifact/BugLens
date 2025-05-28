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



static unsigned g_12 = 1UL;
static unsigned char g_23 = 0UL;
static unsigned char *g_26 = (void*)0;
static short g_28 = (-1L);
static int g_33 = (-5L);
static int *g_32 = &g_33;
static int ** volatile g_31 = &g_32;
static unsigned char g_42 = 255UL;
static short g_49 = 0xD814L;
static unsigned short g_67 = 0x40C8L;
static int ** volatile g_68 = &g_32;
static int g_85 = 0x4DBC0BA8L;
static char g_99 = (-3L);
static unsigned g_168 = 4294967295UL;
static int g_176 = 0x92745916L;
static volatile int g_213 = 3L;
static volatile int g_216 = 1L;
static volatile char g_217 = 0x13L;
static char g_221 = 0x6DL;
static volatile char g_246 = 1L;
static volatile int g_247 = (-1L);
static unsigned g_248 = 0xAC1F9650L;
static short *g_258 = &g_49;
static unsigned char g_271 = 248UL;
static volatile char g_278 = 0L;
static unsigned g_279 = 0x4DCC5185L;
static int * volatile g_285 = &g_176;
static unsigned g_287 = 0x97F434ACL;
static int **g_299 = &g_32;
static int * volatile g_304 = &g_33;
static unsigned short *g_309 = &g_67;
static short g_368 = (-7L);
static volatile int g_410 = 0xB4783B38L;
static int g_552 = 0x9BB0E50EL;
static unsigned g_578 = 0xD6676D7EL;
static volatile unsigned g_607 = 0x53305DE4L;
static volatile short g_693 = 0x0B24L;
static unsigned char g_699 = 254UL;
static unsigned g_775 = 0xC15D4301L;
static int *g_822 = &g_176;
static short **g_827 = (void*)0;
static int g_861 = (-1L);
static int * volatile g_862 = &g_85;
static int g_958 = 2L;
static unsigned char g_1009 = 0x8AL;
static volatile unsigned g_1025 = 0UL;
static int * volatile * volatile g_1387 = &g_285;
static int * volatile * volatile *g_1386 = &g_1387;
static int * volatile * volatile **g_1385 = &g_1386;
static unsigned short g_1758 = 6UL;
static unsigned char g_1919 = 253UL;
static int ***g_1968 = (void*)0;
static int ****g_1967 = &g_1968;
static int g_1974 = (-1L);
static unsigned short g_2022 = 0UL;
static int g_2260 = 0xF74DFE50L;
static volatile char g_2265 = (-1L);
static char g_2271 = 9L;
static volatile short g_2274 = 0x4628L;
static volatile int g_2275 = 0xFC1B946DL;
static volatile unsigned char g_2285 = 0x20L;
static int g_2406 = 0x4C950660L;
static short ** volatile *g_2431 = &g_827;
static short ** volatile ** volatile g_2430 = &g_2431;
static volatile int g_2644 = (-2L);
static unsigned g_2648 = 0x65E059D0L;
static volatile int g_2671 = (-6L);
static unsigned char g_2672 = 0x34L;
static char g_2680 = 0xCDL;
static volatile char * volatile g_2718 = &g_2265;
static volatile char * volatile * volatile g_2717 = &g_2718;
static unsigned short g_3102 = 1UL;
static unsigned *** volatile g_3137 = (void*)0;



static unsigned func_1(void);
static int * func_2(int p_3, int * p_4, unsigned short p_5);
static int * func_7(int p_8, unsigned p_9, int * p_10, int * p_11);
static int * func_13(int * p_14, short p_15, short p_16, int * p_17, int p_18);
static int * func_19(int p_20, unsigned short p_21);
static short * func_29(int p_30);
static unsigned char func_36(unsigned char * p_37, int ** p_38, char p_39, int p_40);
static int ** func_43(short * p_44, unsigned char p_45, int p_46, unsigned short p_47);
static int func_51(unsigned p_52, char p_53, short p_54);
static short func_55(short * p_56, int p_57, char p_58, unsigned p_59);
static unsigned func_1(void)
{
    unsigned l_6 = 0x5B0E446DL;
    unsigned char *l_22 = &g_23;
    short *l_27 = &g_28;
    short **l_1752 = &g_258;
    short **l_1753 = (void*)0;
    short *l_1754 = &g_368;
    int *l_1755 = &g_33;
    short l_1756 = 0x02E9L;
    unsigned short *l_1757 = &g_1758;
    int l_1766 = (-5L);
    int l_3096 = 0x7DEA4174L;
    unsigned short **l_3111 = &l_1757;
    unsigned short ***l_3110 = &l_3111;
    int ***l_3117 = &g_299;
    int ***l_3118 = &g_299;
    char l_3128 = 9L;
    (***g_1385) = func_2(l_6, func_7(g_12, g_12, func_13(func_19((255UL != l_6), ((*l_1757) &= (((*l_22) = l_6) < (((*l_1755) = (safe_sub_func_int16_t_s_s(((*l_27) |= ((void*)0 != g_26)), ((l_1754 = func_29(l_6)) == l_27)))) || l_1756)))), l_6, l_1766, l_1755, l_6), l_1755), g_552);



    ;



    ;
    if ((*l_1755))
    {
        short *l_3058 = &g_49;
        int l_3059 = (-4L);
        unsigned l_3060 = 4294967295UL;
        int l_3081 = 0xBC02D773L;
        int l_3084 = 0x2C42BBCBL;
        int ****l_3107 = &g_1968;
        unsigned *l_3136 = &g_12;
        unsigned **l_3135 = &l_3136;
        if ((*l_1755))
        {
            int l_3061 = 0L;
            unsigned char l_3062 = 9UL;
            char *l_3122 = &g_2680;
            short *l_3125 = &g_28;
            int *l_3129 = &g_552;
            int **l_3130 = &l_1755;
            if ((safe_add_func_uint8_t_u_u(func_55(l_3058, l_3059, func_55(l_3058, func_51(l_3060, l_3061, l_3062), (**g_2717), g_248), l_3060), l_3060)))
            {
                short l_3067 = (-1L);
                int ****l_3106 = &g_1968;
                (*l_1755) = l_3060;
                for (g_2022 = 26; (g_2022 > 6); g_2022--)
                {
                    int l_3068 = (-5L);
                    int l_3085 = (-8L);
                    short *l_3116 = (void*)0;
                    for (g_271 = (-21); (g_271 > 19); g_271 = safe_add_func_uint8_t_u_u(g_271, 5))
                    {
                        int *l_3069 = &l_3061;
                        int *l_3070 = &l_3059;
                        int *l_3071 = &g_33;
                        int *l_3072 = &g_176;
                        int *l_3073 = &g_861;
                        int *l_3074 = &l_3061;
                        int *l_3075 = &l_3059;
                        int *l_3076 = (void*)0;
                        int *l_3077 = &g_958;
                        int *l_3078 = &g_2260;
                        int *l_3079 = &g_2260;
                        int l_3080 = 1L;
                        int *l_3082 = &g_33;
                        int *l_3083 = &l_3061;
                        int *l_3086 = &l_3084;
                        int *l_3087 = &g_2260;
                        int *l_3088 = &l_3081;
                        int *l_3089 = &l_3085;
                        int *l_3090 = (void*)0;
                        int *l_3091 = (void*)0;
                        int *l_3092 = &l_3081;
                        int *l_3093 = (void*)0;
                        int *l_3094 = &g_85;
                        int *l_3095 = &l_3080;
                        int *l_3097 = &g_176;
                        int *l_3098 = (void*)0;
                        int *l_3099 = &l_3096;
                        int *l_3100 = &g_85;
                        int l_3101 = (-1L);
                        short *l_3105 = &g_368;
                        unsigned *l_3119 = &g_775;
                        g_3102--;
                        (*l_3072) |= func_55(l_3105, (*g_304), (g_271 <= ((*l_3058) = ((l_3106 != l_3107) || (((*l_1755) >= g_1919) > (safe_lshift_func_int16_t_s_u(((g_33 || (l_3110 != (void*)0)) ^ g_1009), 2)))))), g_1009);
                        (***g_1385) = &l_3096;

                        ;
                        (*l_3088) &= ((safe_add_func_uint32_t_u_u(((*l_3119) |= ((safe_lshift_func_int16_t_s_s(func_55(((*l_1752) = l_3116), l_3068, ((**g_2717) && (-10L)), g_12), 5)) || (((l_3117 == l_3118) > 0x44AC4A42L) & g_607))), 1L)) == 4294967295UL);

                        ;
                    }
                    if (l_3068)
                        break;
                    (*l_1755) = (!l_3085);
                }

                ;
            }
            else
            {
                return g_287;
            }

            ;
            (*l_1755) = func_55(l_3058, (*g_304), (safe_add_func_int8_t_s_s((+0x1EL), (*l_1755))), func_51((func_51(g_99, ((*l_3122) = g_578), l_3062) != g_23), g_99, l_3062));
            (*l_1755) = l_3061;
            l_3081 &= ((safe_mod_func_uint32_t_u_u(((g_278 & 0x2F4CL) < g_2406), (**l_3130))) | (*l_1755));
        }
        else
        {
            unsigned **l_3138 = &l_3136;
            int *l_3139 = &g_176;
            for (g_552 = 0; (g_552 != 19); g_552 = safe_add_func_int8_t_s_s(g_552, 1))
            {
                for (g_2680 = 0; (g_2680 >= 16); ++g_2680)
                {
                    l_3084 ^= ((*g_304) = func_51(g_168, (*g_2718), ((*l_1754) = ((void*)0 != &g_2406))));
                }
                l_3138 = l_3135;
            }
            (*l_3139) = ((*l_1755) = 0x829362DBL);
            (*l_3139) = 0L;
        }

        ;
    }
    else
    {
        int *l_3140 = &g_2260;
        (**g_1386) = l_3140;

        ;
    }

    ;
    return g_217;


}







static int * func_2(int p_3, int * p_4, unsigned short p_5)
{
    int l_3053 = (-1L);
    int l_3054 = (-1L);
    unsigned l_3055 = 0xCCCA3336L;
    l_3054 |= l_3053;
    (**g_1386) = (void*)0;

    ;
    l_3054 &= l_3053;
    l_3054 = func_51(l_3055, l_3055, p_5);
    return p_4;


}







static int * func_7(int p_8, unsigned p_9, int * p_10, int * p_11)
{
    unsigned char *l_2026 = (void*)0;
    int l_2029 = 0x4DDD908DL;
    int l_2046 = 0x8DCC146DL;
    int *****l_2072 = (void*)0;
    short *l_2408 = (void*)0;
    short ***l_2433 = (void*)0;
    short ****l_2432 = &l_2433;
    short l_2434 = 0x15CBL;
    char l_2568 = (-1L);
    int *l_2668 = (void*)0;
    int l_2669 = (-1L);
    int l_2670 = 1L;
    unsigned l_2803 = 0x96CD3261L;
    char l_2804 = 4L;
    int l_2869 = (-7L);
    short **l_3051 = &g_258;
    short **l_3052 = &l_2408;
    (**g_1386) = (***g_1385);
    p_11 = &p_8;

    ;
    if (((l_2026 == (void*)0) ^ (func_51((safe_rshift_func_int8_t_s_s((p_8 > 1UL), l_2029)), (((safe_mod_func_uint8_t_u_u((p_11 != &g_12), (l_2029 & 0x910B3E75L))) > 0x9B42L) != g_42), l_2029) || l_2029)))
    {
        short **l_2032 = (void*)0;
        short ***l_2033 = &g_827;
        int l_2043 = 0L;
        int l_2045 = (-4L);
        int l_2049 = 1L;
        (*p_11) |= (l_2032 != ((*l_2033) = l_2032));
        for (g_28 = 0; (g_28 == (-8)); g_28 = safe_sub_func_int16_t_s_s(g_28, 8))
        {
            int l_2040 = 9L;
            unsigned *l_2044 = &g_775;
            unsigned char *l_2047 = (void*)0;
            unsigned char *l_2048 = &g_271;
            short *l_2057 = &g_368;
            short *l_2060 = &g_49;
            l_2049 ^= (safe_sub_func_uint16_t_u_u((func_51(((g_248 || l_2029) | p_9), ((safe_div_func_uint8_t_u_u((g_1919 < (252UL && l_2040)), p_8)) & ((safe_add_func_uint8_t_u_u(((*l_2048) = (((*l_2044) = (l_2043 &= g_410)) ^ (l_2046 |= l_2045))), p_8)) && p_9)), l_2029) && l_2040), 0xC788L));
            if (l_2040)
                break;
            for (g_861 = 0; (g_861 > (-15)); g_861--)
            {
                short **l_2058 = &l_2057;
                int l_2059 = 0x37F1E138L;
                char l_2069 = (-1L);
                (*p_11) = l_2046;
                for (p_9 = 0; (p_9 != 36); p_9 = safe_add_func_uint16_t_u_u(p_9, 6))
                {
                    unsigned l_2054 = 0x7322099DL;
                    l_2054--;
                }
                (*p_11) = (func_55(((*l_2058) = l_2057), ((l_2059 > 0UL) <= func_55(l_2060, ((*p_11) |= (safe_sub_func_uint16_t_u_u(l_2040, l_2045))), l_2040, (safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(p_9, (safe_sub_func_int16_t_s_s(((*l_2060) = 0x4019L), l_2059)))) ^ 0x3CL), 0)))), l_2069, g_42) <= p_9);
            }
            (*p_11) &= (safe_add_func_uint8_t_u_u(((*l_2048) = l_2043), l_2049));
        }
    }
    else
    {
        char l_2073 = (-10L);
        int l_2088 = 0x84C09EDFL;
        int **l_2095 = &g_822;
        int l_2171 = 0x9AFC99CEL;
        int l_2176 = 0xD6B62C11L;
        int l_2209 = 0L;
        int l_2214 = (-1L);
        unsigned l_2379 = 0xF2A395C1L;
        short *l_2397 = (void*)0;
        char l_2402 = 1L;
        unsigned char l_2407 = 0x6CL;
        char l_2606 = 0xA9L;
        char *l_2690 = (void*)0;
        char **l_2689 = &l_2690;
        unsigned char l_2694 = 255UL;
        unsigned char l_3048 = 0xD4L;
        l_2073 = (l_2072 != (void*)0);
        if ((*g_862))
        {
            int *l_2074 = &g_861;
            short **l_2081 = (void*)0;
            int l_2114 = 0xF8817889L;
            int l_2142 = 0x1E85151CL;
            int l_2146 = 0x6D3C833DL;
            int l_2202 = 6L;
            int l_2241 = 0x428C0265L;
            int l_2258 = (-1L);
            unsigned l_2403 = 1UL;
            short l_2415 = (-2L);
            unsigned short *l_2435 = &g_1758;
            unsigned short *l_2436 = &g_67;
            short l_2458 = 0x7658L;
            (**g_1386) = l_2074;

            ;
            if ((+l_2073))
            {
                unsigned *l_2076 = &g_775;
                unsigned **l_2075 = &l_2076;
                short **l_2082 = &g_258;
                char *l_2085 = (void*)0;
                char *l_2086 = (void*)0;
                char *l_2087 = &l_2073;
                unsigned short *l_2089 = &g_1758;
                unsigned char *l_2090 = &g_1009;
                int l_2091 = (-1L);
                char l_2121 = 0xDDL;
                int l_2281 = 0xC46736EBL;
                int *l_2288 = (void*)0;
                if (((((*l_2075) = &p_9) != &p_9) & ((((-5L) | (safe_mod_func_uint8_t_u_u(((*l_2090) ^= (safe_add_func_uint8_t_u_u((((*l_2089) ^= ((!(((void*)0 == l_2081) & (func_55(((*l_2082) = (void*)0), (safe_sub_func_int8_t_s_s(p_9, ((*l_2087) = (0x8D0D71A3L | l_2073)))), g_693, p_8) > l_2088))) >= g_2022)) >= p_9), 0UL))), l_2091))) | (*l_2074)) == (*l_2074))))
                {
                    unsigned short l_2094 = 0UL;
                    int *l_2102 = &g_958;
                    int l_2135 = 0x07C12CB1L;
                    int l_2187 = 0x8F003B4AL;
                    int l_2188 = 0x4B063D19L;
                    int l_2279 = 0L;
                    if (((safe_lshift_func_uint16_t_u_u((l_2094 < ((*l_2074) <= (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((0x7FL || 0x1DL), 15)), 0)))), 8)) ^ (safe_div_func_int8_t_s_s((((*l_2074) == 0x08L) && (*p_11)), g_221))))
                    {
                        return l_2102;


                    }
                    else
                    {
                        (***g_1385) = l_2102;

                        ;
                        (**g_1386) = l_2102;
                        (***g_1385) = (***g_1385);
                        (*p_11) &= ((****g_1385) = (4L & (*l_2074)));
                    }

                    ;
                    for (l_2088 = (-29); (l_2088 != 23); l_2088 = safe_add_func_uint32_t_u_u(l_2088, 4))
                    {
                        int *l_2105 = &g_85;
                        int *l_2106 = (void*)0;
                        int *l_2107 = &l_2091;
                        int *l_2108 = &l_2046;
                        int *l_2109 = (void*)0;
                        int *l_2110 = &l_2046;
                        int *l_2111 = &g_33;
                        int *l_2112 = (void*)0;
                        int *l_2113 = &g_176;
                        int *l_2115 = &l_2091;
                        int *l_2116 = &l_2046;
                        int *l_2117 = (void*)0;
                        int *l_2118 = &l_2091;
                        int *l_2119 = &g_958;
                        int *l_2120 = &l_2029;
                        int *l_2122 = &l_2091;
                        int *l_2123 = (void*)0;
                        int *l_2124 = &g_33;
                        int *l_2125 = &l_2046;
                        int *l_2126 = &g_33;
                        int *l_2127 = &l_2046;
                        int *l_2128 = &g_958;
                        int *l_2129 = &l_2029;
                        int l_2130 = 1L;
                        int *l_2131 = &g_861;
                        int *l_2132 = &g_958;
                        int *l_2133 = &l_2114;
                        int *l_2134 = &l_2091;
                        int *l_2136 = &l_2046;
                        int *l_2137 = &l_2130;
                        int *l_2138 = &g_176;
                        int *l_2139 = &l_2130;
                        int *l_2140 = (void*)0;
                        int *l_2141 = &g_958;
                        int *l_2143 = &l_2029;
                        int *l_2144 = &g_85;
                        int *l_2145 = &l_2130;
                        int *l_2147 = &g_958;
                        int *l_2148 = &l_2142;
                        int *l_2149 = &l_2130;
                        int *l_2150 = (void*)0;
                        int *l_2151 = &l_2046;
                        int *l_2152 = (void*)0;
                        int *l_2153 = &g_176;
                        int *l_2154 = &l_2130;
                        int *l_2155 = (void*)0;
                        int *l_2156 = &l_2135;
                        int *l_2157 = &l_2135;
                        int *l_2158 = (void*)0;
                        int *l_2159 = &l_2114;
                        int *l_2160 = (void*)0;
                        int *l_2161 = &l_2091;
                        int *l_2162 = &l_2146;
                        int *l_2163 = &l_2146;
                        int *l_2164 = &g_861;
                        int *l_2165 = &l_2135;
                        int *l_2166 = (void*)0;
                        int *l_2167 = &l_2029;
                        int *l_2168 = &l_2130;
                        int *l_2169 = &l_2046;
                        int *l_2170 = &g_861;
                        int *l_2172 = &l_2171;
                        int *l_2173 = &g_176;
                        int *l_2174 = &g_958;
                        int *l_2175 = &l_2046;
                        int *l_2177 = &l_2142;
                        int *l_2178 = &g_958;
                        int *l_2179 = &l_2029;
                        int *l_2180 = &l_2142;
                        int *l_2181 = (void*)0;
                        int *l_2182 = &g_33;
                        int *l_2183 = (void*)0;
                        int *l_2184 = (void*)0;
                        int *l_2185 = &g_958;
                        int *l_2186 = &l_2114;
                        int l_2189 = 0xCD302D51L;
                        int *l_2190 = &g_176;
                        int *l_2191 = &l_2189;
                        int *l_2192 = (void*)0;
                        int *l_2193 = &l_2188;
                        int *l_2194 = &g_861;
                        int *l_2195 = &l_2176;
                        int *l_2196 = &l_2171;
                        int *l_2197 = &l_2114;
                        int *l_2198 = &g_958;
                        int *l_2199 = &l_2114;
                        int *l_2200 = &g_33;
                        int *l_2201 = (void*)0;
                        int *l_2203 = &l_2046;
                        int *l_2204 = &l_2029;
                        int *l_2205 = &g_958;
                        int *l_2206 = &l_2114;
                        int *l_2207 = &l_2029;
                        int *l_2208 = (void*)0;
                        int *l_2210 = &l_2202;
                        int *l_2211 = &g_176;
                        int *l_2212 = &l_2176;
                        int *l_2213 = &l_2142;
                        int *l_2215 = &l_2187;
                        int *l_2216 = &l_2189;
                        int *l_2217 = &l_2209;
                        int *l_2218 = &l_2209;
                        int *l_2219 = &l_2209;
                        int *l_2220 = &g_85;
                        int *l_2221 = (void*)0;
                        int *l_2222 = &l_2188;
                        int *l_2223 = &l_2135;
                        int *l_2224 = &l_2146;
                        int *l_2225 = &g_33;
                        int l_2226 = (-1L);
                        int *l_2227 = &g_176;
                        int *l_2228 = (void*)0;
                        int *l_2229 = &l_2187;
                        int *l_2230 = &l_2189;
                        int *l_2231 = (void*)0;
                        int *l_2232 = (void*)0;
                        int *l_2233 = &l_2176;
                        int *l_2234 = &l_2226;
                        int *l_2235 = &l_2202;
                        int *l_2236 = &l_2176;
                        int *l_2237 = &l_2029;
                        int *l_2238 = &g_85;
                        int *l_2239 = (void*)0;
                        int *l_2240 = &g_85;
                        int *l_2242 = &l_2146;
                        int *l_2243 = &g_861;
                        int *l_2244 = (void*)0;
                        int *l_2245 = (void*)0;
                        int *l_2246 = &g_33;
                        int *l_2247 = &l_2142;
                        int *l_2248 = &g_176;
                        int *l_2249 = &l_2130;
                        int l_2250 = (-1L);
                        int *l_2251 = &l_2171;
                        int *l_2252 = &g_85;
                        int *l_2253 = (void*)0;
                        int *l_2254 = (void*)0;
                        int *l_2255 = &l_2226;
                        int *l_2256 = &l_2176;
                        int *l_2257 = (void*)0;
                        int *l_2259 = &l_2146;
                        int *l_2261 = &g_861;
                        int *l_2262 = &l_2135;
                        int *l_2263 = &l_2250;
                        int *l_2264 = (void*)0;
                        int *l_2266 = (void*)0;
                        int *l_2267 = &l_2258;
                        int *l_2268 = &l_2187;
                        int *l_2269 = &l_2214;
                        int *l_2270 = &l_2250;
                        int *l_2272 = &l_2214;
                        int *l_2273 = &l_2130;
                        int *l_2276 = (void*)0;
                        int *l_2277 = &l_2130;
                        int *l_2278 = &l_2135;
                        int *l_2280 = &l_2142;
                        int *l_2282 = &l_2258;
                        int *l_2283 = &l_2202;
                        int *l_2284 = &l_2046;
                        short *l_2291 = &g_368;
                        (*p_11) = (***g_1386);
                        g_2285++;
                        l_2288 = &l_2130;

                        ;
                        (*l_2270) = ((safe_lshift_func_int16_t_s_s(p_8, ((*l_2291) = 0x9B1CL))) & (g_607 | g_287));
                    }


                }
                else
                {
                    int l_2315 = 0xFA6B79ACL;
                    int l_2335 = 0xD2DCA19DL;
                    int l_2374 = 0L;
                    for (l_2121 = 0; (l_2121 <= (-4)); l_2121 = safe_sub_func_int32_t_s_s(l_2121, 7))
                    {
                        int *l_2294 = &l_2214;
                        int *l_2295 = &g_33;
                        int *l_2296 = &l_2209;
                        int *l_2297 = &l_2046;
                        int *l_2298 = &l_2214;
                        int *l_2299 = &l_2209;
                        int *l_2300 = &g_33;
                        int *l_2301 = (void*)0;
                        int *l_2302 = &l_2258;
                        int *l_2303 = &g_33;
                        int *l_2304 = &l_2209;
                        int *l_2305 = &l_2114;
                        int *l_2306 = &l_2046;
                        int *l_2307 = &g_958;
                        int *l_2308 = &l_2146;
                        int *l_2309 = &g_861;
                        int *l_2310 = (void*)0;
                        int *l_2311 = &l_2214;
                        int *l_2312 = (void*)0;
                        int *l_2313 = &l_2091;
                        int *l_2314 = &l_2029;
                        int *l_2316 = (void*)0;
                        int *l_2317 = &l_2209;
                        int *l_2318 = &l_2046;
                        int *l_2319 = &l_2046;
                        int *l_2320 = &g_2260;
                        int *l_2321 = &l_2171;
                        int *l_2322 = (void*)0;
                        int *l_2323 = (void*)0;
                        int *l_2324 = &l_2029;
                        int *l_2325 = (void*)0;
                        int *l_2326 = (void*)0;
                        int *l_2327 = (void*)0;
                        int *l_2328 = (void*)0;
                        int *l_2329 = (void*)0;
                        int *l_2330 = &l_2142;
                        int *l_2331 = &g_861;
                        int *l_2332 = &g_85;
                        int *l_2333 = &g_958;
                        int *l_2334 = &l_2046;
                        int *l_2336 = (void*)0;
                        int *l_2337 = &g_2260;
                        int *l_2338 = (void*)0;
                        int *l_2339 = &g_958;
                        int *l_2340 = &g_176;
                        int *l_2341 = &l_2176;
                        int *l_2342 = &l_2029;
                        int *l_2343 = &g_861;
                        int *l_2344 = &l_2214;
                        int *l_2345 = (void*)0;
                        int *l_2346 = &l_2241;
                        int *l_2347 = &g_958;
                        int *l_2348 = (void*)0;
                        int *l_2349 = &l_2209;
                        int *l_2350 = &g_85;
                        int l_2351 = 0xFBEBB95CL;
                        int *l_2352 = &g_958;
                        int *l_2353 = &l_2209;
                        int *l_2354 = &l_2351;
                        int *l_2355 = (void*)0;
                        int *l_2356 = &l_2241;
                        int *l_2357 = &l_2241;
                        int *l_2358 = &l_2335;
                        int *l_2359 = &l_2029;
                        int *l_2360 = &l_2171;
                        int *l_2361 = &l_2046;
                        int *l_2362 = &l_2171;
                        int *l_2363 = &l_2209;
                        int *l_2364 = &l_2091;
                        int *l_2365 = &l_2171;
                        int *l_2366 = &g_861;
                        int *l_2367 = (void*)0;
                        int *l_2368 = &g_2260;
                        int *l_2369 = &l_2029;
                        int *l_2370 = (void*)0;
                        int *l_2371 = &l_2088;
                        int *l_2372 = &g_33;
                        int *l_2373 = &g_85;
                        int *l_2375 = &g_176;
                        int *l_2376 = (void*)0;
                        int *l_2377 = (void*)0;
                        int *l_2378 = (void*)0;
                        unsigned char l_2382 = 0xD0L;
                        ++l_2379;
                        l_2382++;
                    }
                }

                ;
                ;
                ;

                (*l_2074) &= (*p_11);
            }
            else
            {
                unsigned *l_2385 = &g_168;
                int l_2390 = 0x8104EB28L;
                int l_2398 = 0x4FE750E3L;
                char *l_2399 = &l_2073;
                int **l_2400 = (void*)0;
                int **l_2401 = &l_2074;
                (*l_2095) = &l_2258;

                ;
                p_11 = (*l_2095);

                ;
                (*p_11) = (safe_mod_func_int16_t_s_s(p_9, (((func_51(((*l_2385) = (((*l_2095) = &p_8) == ((*l_2401) = &p_8))), p_9, l_2402) > (***g_1386)) == l_2403) || 1UL)));

                ;
                ;
            }


            ;

            ;
            ;
            (****g_1385) = ((*p_11) < (safe_mod_func_int8_t_s_s(g_2406, func_55(l_2408, (*p_11), (safe_div_func_uint8_t_u_u((0UL ^ ((safe_rshift_func_int8_t_s_u(1L, 5)) < (safe_rshift_func_uint8_t_u_u(l_2415, 2)))), 0x12L)), p_9))));
            if ((5L != (safe_mod_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u(g_42, 4L)) | 1UL), (((*l_2436) = ((*l_2435) = ((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(p_9, 6)), (safe_lshift_func_int16_t_s_u((((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(0xCF69L, 7)), 4294967295UL)) && p_9) | (g_2430 == l_2432)), l_2434)))) ^ (*l_2074)))) & g_1919)))))
            {
                short l_2443 = (-1L);
                int l_2457 = 6L;
                int l_2491 = 1L;
                int l_2517 = 0L;
                int l_2526 = 0x1BF1550AL;
                int l_2532 = 0x3CB9B9F6L;
                int l_2595 = (-1L);
                int l_2647 = (-3L);
                unsigned short l_2653 = 9UL;
                short l_2686 = 0xBCB4L;
                if ((*g_304))
                {
                    unsigned short l_2441 = 0xF591L;
                    short l_2442 = 0x2E5BL;
                    unsigned *l_2446 = (void*)0;
                    unsigned *l_2447 = (void*)0;
                    unsigned *l_2448 = (void*)0;
                    unsigned *l_2449 = &g_775;
                    int *l_2459 = &l_2209;
                    int *l_2460 = &l_2171;
                    int *l_2461 = (void*)0;
                    int *l_2462 = &l_2146;
                    int *l_2463 = &l_2176;
                    int *l_2464 = (void*)0;
                    int *l_2465 = &l_2029;
                    int *l_2466 = &l_2457;
                    int *l_2467 = &g_176;
                    int *l_2468 = (void*)0;
                    int *l_2469 = &l_2088;
                    int *l_2470 = &l_2214;
                    int *l_2471 = &l_2029;
                    int *l_2472 = &l_2114;
                    int *l_2473 = &g_2260;
                    int *l_2474 = &g_861;
                    int *l_2475 = (void*)0;
                    int *l_2476 = &l_2214;
                    int *l_2477 = &l_2114;
                    int *l_2478 = &l_2146;
                    int *l_2479 = (void*)0;
                    int *l_2480 = &l_2202;
                    int *l_2481 = &l_2114;
                    int *l_2482 = &g_176;
                    int *l_2483 = &l_2209;
                    int *l_2484 = &g_2260;
                    int *l_2485 = &l_2029;
                    int *l_2486 = (void*)0;
                    int *l_2487 = &l_2146;
                    int *l_2488 = (void*)0;
                    int *l_2489 = &l_2114;
                    int *l_2490 = &g_958;
                    int *l_2492 = &l_2241;
                    int *l_2493 = &g_958;
                    int *l_2494 = &l_2088;
                    int *l_2495 = (void*)0;
                    int *l_2496 = &l_2209;
                    int *l_2497 = &g_2260;
                    int *l_2498 = &l_2241;
                    int *l_2499 = (void*)0;
                    int l_2500 = 1L;
                    int *l_2501 = &l_2088;
                    int *l_2502 = &l_2176;
                    int *l_2503 = &l_2088;
                    int *l_2504 = (void*)0;
                    int *l_2505 = &l_2202;
                    int *l_2506 = &g_958;
                    int *l_2507 = &g_33;
                    int *l_2508 = (void*)0;
                    int *l_2509 = &g_176;
                    int *l_2510 = &l_2171;
                    int *l_2511 = &l_2457;
                    int *l_2512 = (void*)0;
                    int *l_2513 = &g_33;
                    int *l_2514 = &l_2457;
                    int *l_2515 = &l_2171;
                    int *l_2516 = &l_2258;
                    int *l_2518 = &l_2214;
                    int *l_2519 = &l_2146;
                    int *l_2520 = (void*)0;
                    int *l_2521 = (void*)0;
                    int *l_2522 = (void*)0;
                    int *l_2523 = &l_2046;
                    int *l_2524 = &l_2088;
                    int *l_2525 = &g_176;
                    int *l_2527 = &l_2517;
                    int *l_2528 = &l_2142;
                    int *l_2529 = (void*)0;
                    int *l_2530 = &l_2142;
                    int *l_2531 = &l_2029;
                    int *l_2533 = &l_2209;
                    int *l_2534 = &l_2457;
                    int *l_2535 = &l_2209;
                    int *l_2536 = (void*)0;
                    int *l_2537 = &l_2241;
                    int *l_2538 = &l_2241;
                    int l_2539 = 0x7050CDACL;
                    int *l_2540 = &g_861;
                    int *l_2541 = &l_2258;
                    int *l_2542 = &g_33;
                    int *l_2543 = &g_33;
                    int *l_2544 = &g_176;
                    int *l_2545 = (void*)0;
                    int *l_2546 = &g_861;
                    int *l_2547 = &l_2029;
                    int *l_2548 = &g_33;
                    int l_2549 = 0x629416B2L;
                    int l_2550 = 0x0EB73749L;
                    int l_2551 = 0xE0BD160CL;
                    int *l_2552 = (void*)0;
                    int *l_2553 = &l_2551;
                    int *l_2554 = (void*)0;
                    int *l_2555 = (void*)0;
                    int *l_2556 = &l_2214;
                    int *l_2557 = &g_2260;
                    int *l_2558 = (void*)0;
                    int l_2559 = 3L;
                    int *l_2560 = &g_958;
                    int *l_2561 = (void*)0;
                    int *l_2562 = &l_2214;
                    int *l_2563 = (void*)0;
                    int *l_2564 = &l_2559;
                    int *l_2565 = &g_176;
                    int *l_2566 = &l_2142;
                    int *l_2567 = &g_85;
                    int *l_2569 = &g_33;
                    int *l_2570 = &g_958;
                    int *l_2571 = &l_2549;
                    int *l_2572 = &l_2171;
                    int *l_2573 = (void*)0;
                    int *l_2574 = (void*)0;
                    int *l_2575 = (void*)0;
                    int *l_2576 = &l_2526;
                    int *l_2577 = &l_2457;
                    int *l_2578 = &l_2046;
                    int *l_2579 = &l_2500;
                    int *l_2580 = (void*)0;
                    int *l_2581 = &g_2260;
                    int *l_2582 = &l_2539;
                    int *l_2583 = &l_2241;
                    int *l_2584 = &l_2088;
                    int *l_2585 = &g_958;
                    int *l_2586 = (void*)0;
                    int *l_2587 = (void*)0;
                    int *l_2588 = &l_2457;
                    int *l_2589 = &l_2457;
                    int *l_2590 = &l_2559;
                    int *l_2591 = &l_2146;
                    int *l_2592 = &l_2551;
                    int *l_2593 = &l_2214;
                    int *l_2594 = (void*)0;
                    int *l_2596 = &l_2539;
                    int *l_2597 = (void*)0;
                    int *l_2598 = (void*)0;
                    int *l_2599 = (void*)0;
                    int *l_2600 = &l_2491;
                    int *l_2601 = &g_33;
                    int *l_2602 = &l_2209;
                    int *l_2603 = &g_861;
                    int *l_2604 = &l_2517;
                    int *l_2605 = (void*)0;
                    int *l_2607 = &l_2551;
                    int l_2608 = (-4L);
                    int *l_2609 = &l_2517;
                    int *l_2610 = &g_85;
                    int *l_2611 = &l_2517;
                    int *l_2612 = &g_33;
                    int *l_2613 = &g_176;
                    int *l_2614 = &l_2551;
                    int *l_2615 = &l_2549;
                    int *l_2616 = &l_2551;
                    int *l_2617 = &g_861;
                    int *l_2618 = &l_2559;
                    int *l_2619 = &l_2608;
                    int *l_2620 = &l_2608;
                    int *l_2621 = (void*)0;
                    int *l_2622 = (void*)0;
                    int *l_2623 = &g_33;
                    int *l_2624 = &l_2146;
                    int *l_2625 = &l_2146;
                    int *l_2626 = (void*)0;
                    int *l_2627 = &l_2595;
                    int *l_2628 = &g_85;
                    int *l_2629 = &l_2551;
                    int *l_2630 = &l_2088;
                    int *l_2631 = &l_2046;
                    int *l_2632 = &l_2209;
                    int *l_2633 = &l_2202;
                    int *l_2634 = &l_2214;
                    int *l_2635 = &l_2088;
                    int *l_2636 = (void*)0;
                    int *l_2637 = &l_2176;
                    int *l_2638 = &g_85;
                    int *l_2639 = (void*)0;
                    int *l_2640 = &l_2171;
                    int *l_2641 = &l_2029;
                    int *l_2642 = &l_2202;
                    int *l_2643 = &l_2171;
                    int *l_2645 = &l_2539;
                    int *l_2646 = &l_2532;
                    if ((safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(l_2441, ((*l_2449) = (func_51(p_8, (p_8 & ((0x6FD2DAC1L || (0x1DL | l_2442)) ^ l_2443)), (safe_sub_func_uint16_t_u_u(((*g_304) || g_578), p_9))) | 1L)))), p_8)))
                    {
                        char *l_2455 = (void*)0;
                        char *l_2456 = &l_2402;
                        (*p_11) &= 4L;
                        l_2458 ^= (safe_unary_minus_func_int8_t_s((safe_mod_func_uint32_t_u_u(((*l_2449) |= p_8), ((l_2441 <= ((safe_mod_func_uint32_t_u_u(((****g_1385) == (p_8 && (p_8 > (l_2457 &= (((*l_2456) = g_958) <= ((((((g_368 ^= ((void*)0 != &g_99)) == p_9) >= p_9) & (-4L)) <= 4294967295UL) == 0xADL)))))), (*p_11))) & 0xF05FAA95L)) || p_8)))));
                    }
                    else
                    {
                        (***g_1385) = (void*)0;

                        ;
                    }

                    ;
                    g_2648--;
                    for (l_2608 = 0; (l_2608 >= (-14)); l_2608--)
                    {
                        char *l_2662 = &g_221;
                        unsigned char *l_2663 = (void*)0;
                        unsigned char *l_2664 = &g_1919;
                        (*l_2459) = ((0x15L | (p_8 & (l_2526 ^ ((*l_2629) >= (l_2653 &= l_2647))))) ^ ((*l_2593) &= 0x322067ACL));
                        (*l_2527) ^= (safe_rshift_func_int16_t_s_s((*l_2074), (safe_div_func_int16_t_s_s(l_2046, (safe_rshift_func_int8_t_s_s(p_8, (g_552 <= 1UL)))))));
                        if ((*l_2074))
                            continue;
                        (***g_1385) = func_13(&l_2457, ((*l_2519) && (!(g_958 ^ (safe_add_func_uint32_t_u_u(((*p_11) == ((void*)0 == l_2662)), (((void*)0 == &l_2474) == ((*l_2664) = ((*p_11) && (*g_862))))))))), p_8, &l_2258, (*l_2074));

                        ;
                    }

                    ;
                    for (l_2595 = 0; (l_2595 == (-14)); l_2595--)
                    {
                        int *l_2667 = &l_2146;
                        l_2668 = l_2667;

                        ;
                        if ((*l_2667))
                            continue;
                        g_2672--;
                    }

                    ;
                }
                else
                {
                    unsigned short l_2684 = 65535UL;
                    char l_2685 = (-1L);
                    char *l_2688 = &l_2606;
                    char **l_2687 = &l_2688;
                    for (l_2568 = 0; (l_2568 != 15); l_2568++)
                    {
                        unsigned l_2677 = 0x86049CF3L;
                        if (l_2532)
                            break;
                        (*p_11) ^= l_2677;
                    }
                }

                ;
                ;
                p_11 = &p_8;

                ;
                l_2517 &= (*p_11);
            }
            else
            {
                int *l_2691 = &g_85;
                return l_2691;



            }

            ;
            ;
            ;
        }
        else
        {
            unsigned char l_2719 = 255UL;
            int l_2720 = 1L;
            unsigned l_2783 = 0x3473434AL;
            int l_2858 = 0L;
            int l_2912 = (-1L);
            int l_2940 = 0L;
            int l_3021 = (-7L);
            int *l_3037 = &l_2720;
            int *l_3038 = &l_2940;
            int *l_3039 = (void*)0;
            int *l_3040 = &l_2209;
            int *l_3041 = &l_2869;
            int *l_3042 = &g_861;
            int *l_3043 = &l_2940;
            int *l_3044 = &l_2046;
            int *l_3045 = &l_2858;
            int *l_3046 = &l_2940;
            int *l_3047 = (void*)0;
            for (g_85 = 0; (g_85 < 2); g_85 = safe_add_func_int8_t_s_s(g_85, 3))
            {
                int l_2714 = 0x86C27E3FL;
                int l_2725 = 5L;
                int l_2751 = (-2L);
                int l_2773 = (-1L);
                int l_2775 = 0x9D858382L;
                int *l_2797 = (void*)0;
                unsigned char l_2809 = 4UL;
                int l_2969 = 0L;
                unsigned short l_3014 = 0UL;
                int l_3030 = 0xE25E0924L;
                int *l_3034 = &g_958;
                if (l_2694)
                {
                    int *l_2695 = &g_861;
                    int *l_2696 = &l_2670;
                    int *l_2697 = &l_2670;
                    int *l_2698 = &l_2029;
                    int *l_2699 = &l_2669;
                    int *l_2700 = &l_2209;
                    int *l_2701 = &g_33;
                    int *l_2702 = &l_2171;
                    int *l_2703 = &g_176;
                    unsigned l_2704 = 0x4C9719AFL;
                    int l_2742 = 1L;
                    int l_2749 = 3L;
                    int l_2778 = 0x160EF2C3L;
                    (**g_1386) = &p_8;

                    ;
                    (***g_1385) = (***g_1385);
                    ++l_2704;
                    if ((****g_1385))
                    {
                        unsigned *l_2710 = &g_775;
                        unsigned **l_2709 = &l_2710;
                        char *l_2711 = &l_2606;
                        int *l_2721 = &l_2088;
                        int *l_2722 = (void*)0;
                        int *l_2723 = &g_2260;
                        int *l_2724 = &l_2046;
                        int *l_2726 = &l_2714;
                        int *l_2727 = &l_2046;
                        int *l_2728 = (void*)0;
                        int *l_2729 = &l_2209;
                        int *l_2730 = (void*)0;
                        int *l_2731 = (void*)0;
                        int *l_2732 = &l_2029;
                        int *l_2733 = &g_958;
                        int *l_2734 = &l_2209;
                        int *l_2735 = &l_2176;
                        int *l_2736 = &g_33;
                        int *l_2737 = &l_2088;
                        int *l_2738 = &l_2214;
                        int *l_2739 = (void*)0;
                        int *l_2740 = &l_2088;
                        int *l_2741 = (void*)0;
                        int *l_2743 = &l_2714;
                        int *l_2744 = &l_2669;
                        int *l_2745 = (void*)0;
                        int *l_2746 = &l_2214;
                        int *l_2747 = &l_2214;
                        int *l_2748 = &l_2209;
                        int l_2750 = (-1L);
                        int *l_2752 = (void*)0;
                        int *l_2753 = &l_2029;
                        int *l_2754 = &g_2260;
                        int *l_2755 = &l_2720;
                        int *l_2756 = &g_2260;
                        int *l_2757 = (void*)0;
                        int *l_2758 = (void*)0;
                        int *l_2759 = &l_2176;
                        int *l_2760 = &l_2725;
                        int *l_2761 = (void*)0;
                        int *l_2762 = &l_2176;
                        int *l_2763 = (void*)0;
                        int *l_2764 = &l_2029;
                        int *l_2765 = (void*)0;
                        int *l_2766 = &l_2670;
                        int *l_2767 = (void*)0;
                        int *l_2768 = &l_2720;
                        int *l_2769 = &l_2171;
                        int *l_2770 = &l_2029;
                        int *l_2771 = &l_2725;
                        int *l_2772 = (void*)0;
                        int *l_2774 = &l_2670;
                        int *l_2776 = &g_176;
                        int *l_2777 = &l_2742;
                        int *l_2779 = &g_861;
                        int *l_2780 = &l_2742;
                        int *l_2781 = &l_2214;
                        int *l_2782 = &l_2176;
                        (*l_2700) = (~(((safe_lshift_func_int8_t_s_s(((*l_2711) |= (&p_9 != ((*l_2709) = (void*)0))), 3)) || (safe_rshift_func_int16_t_s_u(func_51((p_8 > ((l_2714 > ((0xD73CL == p_8) && (g_28 >= (g_2717 == (void*)0)))) ^ l_2714)), g_1758, p_9), 1))) && l_2719));

                        ;
                        l_2783--;
                        (*l_2744) = l_2720;
                        (***g_1385) = &l_2778;

                        ;
                    }
                    else
                    {
                        unsigned short *l_2788 = &g_67;
                        (*l_2697) ^= (((safe_div_func_uint32_t_u_u((((*g_2718) & 0UL) > ((*l_2788)++)), (l_2775 && 0xC342L))) & (safe_div_func_uint8_t_u_u((l_2751 = (safe_sub_func_uint32_t_u_u(((!(func_51(g_368, (0UL | (safe_div_func_uint32_t_u_u(g_99, g_958))), ((*p_11) == (*p_11))) && 4294967295UL)) & 0x6BL), 4294967295UL))), 0x29L))) <= g_2260);
                        return l_2797;



                    }

                    ;
                }
                else
                {
                    unsigned char l_2798 = 0x96L;
                    unsigned short *l_2805 = (void*)0;
                    unsigned short *l_2806 = &g_1758;
                    unsigned char *l_2807 = (void*)0;
                    unsigned char *l_2808 = &g_23;
                    unsigned short *l_2810 = &g_67;
                    l_2798 = (*g_862);
                    if ((*p_11))
                        continue;
                    (*p_11) = (*g_304);
                    l_2751 ^= (safe_sub_func_uint16_t_u_u(((*l_2806) = (safe_rshift_func_uint16_t_u_u(l_2803, l_2804))), (!((*l_2810) ^= (p_9 >= (((*l_2808) = (&g_42 == &g_271)) < ((-9L) >= (((func_51(func_51(g_410, g_2406, func_51(p_8, p_8, p_8)), l_2798, l_2719) >= l_2809) && 0x1B0EA300L) == 0xA0L))))))));
                }
                for (g_2406 = 0; (g_2406 >= (-17)); --g_2406)
                {
                    unsigned short l_2813 = 65535UL;
                    int l_2814 = 0x2BA1BA67L;
                    int *l_2815 = &l_2088;
                    int *l_2816 = &l_2669;
                    int *l_2817 = &l_2209;
                    int *l_2818 = &l_2751;
                    int *l_2819 = &l_2176;
                    int *l_2820 = (void*)0;
                    int *l_2821 = (void*)0;
                    int *l_2822 = (void*)0;
                    int *l_2823 = &l_2720;
                    int *l_2824 = &l_2088;
                    int *l_2825 = &l_2751;
                    int *l_2826 = &l_2176;
                    int *l_2827 = (void*)0;
                    int *l_2828 = &l_2814;
                    int *l_2829 = (void*)0;
                    int *l_2830 = &l_2214;
                    int *l_2831 = &l_2029;
                    int *l_2832 = (void*)0;
                    int l_2833 = 0x68767889L;
                    int *l_2834 = &l_2171;
                    int *l_2835 = &l_2171;
                    int *l_2836 = &g_33;
                    int *l_2837 = &l_2814;
                    int *l_2838 = &g_176;
                    int *l_2839 = &l_2833;
                    int *l_2840 = &l_2669;
                    int *l_2841 = &g_2260;
                    int *l_2842 = (void*)0;
                    int *l_2843 = &l_2046;
                    int *l_2844 = &l_2669;
                    int *l_2845 = (void*)0;
                    int *l_2846 = (void*)0;
                    int *l_2847 = &l_2720;
                    int *l_2848 = (void*)0;
                    int *l_2849 = &l_2088;
                    int *l_2850 = &l_2670;
                    int *l_2851 = &l_2046;
                    int *l_2852 = &l_2669;
                    int *l_2853 = &l_2046;
                    int *l_2854 = &g_33;
                    int *l_2855 = &g_958;
                    int *l_2856 = &l_2720;
                    int *l_2857 = &g_958;
                    int *l_2859 = &g_958;
                    int *l_2860 = &l_2858;
                    int *l_2861 = &l_2775;
                    int *l_2862 = &l_2209;
                    int *l_2863 = &l_2209;
                    int *l_2864 = &l_2029;
                    int *l_2865 = &l_2858;
                    int *l_2866 = (void*)0;
                    int *l_2867 = &l_2046;
                    int *l_2868 = &g_2260;
                    int *l_2870 = &l_2029;
                    int *l_2871 = (void*)0;
                    int *l_2872 = &l_2720;
                    int *l_2873 = (void*)0;
                    int *l_2874 = &l_2171;
                    int *l_2875 = &l_2725;
                    int *l_2876 = &l_2814;
                    int *l_2877 = (void*)0;
                    int *l_2878 = &g_2260;
                    int *l_2879 = &l_2714;
                    int *l_2880 = &l_2858;
                    int *l_2881 = &l_2720;
                    int *l_2882 = &l_2720;
                    int *l_2883 = &l_2869;
                    int *l_2884 = &l_2670;
                    int *l_2885 = &l_2751;
                    int *l_2886 = &g_33;
                    int *l_2887 = &l_2046;
                    int *l_2888 = &g_2260;
                    int *l_2889 = &l_2814;
                    int *l_2890 = &l_2720;
                    int *l_2891 = (void*)0;
                    int *l_2892 = (void*)0;
                    int *l_2893 = &l_2046;
                    int *l_2894 = &l_2209;
                    int *l_2895 = &l_2775;
                    int *l_2896 = &l_2773;
                    int *l_2897 = (void*)0;
                    int *l_2898 = &l_2814;
                    int *l_2899 = &l_2814;
                    int *l_2900 = &l_2720;
                    int *l_2901 = &g_958;
                    int l_2902 = 0L;
                    int *l_2903 = (void*)0;
                    int *l_2904 = &l_2214;
                    int *l_2905 = &l_2751;
                    int *l_2906 = &g_176;
                    int *l_2907 = &l_2088;
                    int *l_2908 = &l_2775;
                    int *l_2909 = &l_2814;
                    int *l_2910 = &g_861;
                    int *l_2911 = (void*)0;
                    int *l_2913 = &l_2775;
                    int *l_2914 = (void*)0;
                    int *l_2915 = &l_2751;
                    int *l_2916 = &l_2773;
                    int *l_2917 = &l_2669;
                    int *l_2918 = &l_2869;
                    int *l_2919 = (void*)0;
                    int *l_2920 = &g_958;
                    int *l_2921 = &l_2858;
                    int *l_2922 = &l_2669;
                    int *l_2923 = &g_2260;
                    int *l_2924 = &l_2670;
                    int *l_2925 = &l_2858;
                    int *l_2926 = &l_2029;
                    int *l_2927 = &l_2773;
                    int *l_2928 = &l_2046;
                    int *l_2929 = &l_2214;
                    int *l_2930 = &l_2088;
                    int *l_2931 = &l_2171;
                    int *l_2932 = &g_2260;
                    int *l_2933 = &l_2046;
                    int l_2934 = 0x08425C15L;
                    int *l_2935 = &l_2934;
                    int *l_2936 = &l_2670;
                    int *l_2937 = &l_2902;
                    int *l_2938 = &l_2029;
                    int *l_2939 = &l_2902;
                    int *l_2941 = (void*)0;
                    int *l_2942 = &l_2214;
                    int *l_2943 = &g_2260;
                    int *l_2944 = &g_861;
                    int *l_2945 = &l_2869;
                    int *l_2946 = &l_2214;
                    int *l_2947 = &l_2775;
                    int *l_2948 = &l_2088;
                    int *l_2949 = &l_2714;
                    int *l_2950 = &g_861;
                    int *l_2951 = (void*)0;
                    int *l_2952 = &l_2751;
                    int *l_2953 = &l_2773;
                    int *l_2954 = &l_2046;
                    int *l_2955 = &l_2751;
                    int *l_2956 = &l_2176;
                    int *l_2957 = &l_2720;
                    int *l_2958 = (void*)0;
                    int *l_2959 = &l_2670;
                    int *l_2960 = &g_958;
                    int *l_2961 = &l_2773;
                    int *l_2962 = &l_2858;
                    int *l_2963 = &l_2869;
                    int *l_2964 = &l_2714;
                    int *l_2965 = &l_2725;
                    int *l_2966 = (void*)0;
                    int *l_2967 = &l_2912;
                    int *l_2968 = (void*)0;
                    int *l_2970 = &l_2869;
                    int *l_2971 = &l_2669;
                    int *l_2972 = &l_2714;
                    int *l_2973 = &l_2773;
                    int *l_2974 = &l_2176;
                    int *l_2975 = &l_2720;
                    int *l_2976 = &l_2833;
                    int *l_2977 = &l_2670;
                    int *l_2978 = &g_861;
                    int *l_2979 = &l_2773;
                    int *l_2980 = &l_2088;
                    int *l_2981 = &l_2869;
                    int *l_2982 = &l_2171;
                    int *l_2983 = &l_2088;
                    int *l_2984 = &g_176;
                    int *l_2985 = &l_2714;
                    int *l_2986 = &l_2720;
                    int *l_2987 = &l_2209;
                    int *l_2988 = &l_2869;
                    int *l_2989 = &g_861;
                    int *l_2990 = &l_2869;
                    int *l_2991 = (void*)0;
                    int *l_2992 = &g_33;
                    int *l_2993 = &g_958;
                    int *l_2994 = &l_2725;
                    int *l_2995 = &l_2046;
                    int *l_2996 = &l_2969;
                    int *l_2997 = &l_2725;
                    int *l_2998 = &l_2773;
                    int *l_2999 = &l_2714;
                    int *l_3000 = (void*)0;
                    int *l_3001 = &l_2209;
                    int *l_3002 = &l_2029;
                    int *l_3003 = &l_2902;
                    int *l_3004 = &l_2934;
                    int *l_3005 = &l_2214;
                    int *l_3006 = &l_2176;
                    int *l_3007 = &g_33;
                    int *l_3008 = (void*)0;
                    int *l_3009 = &l_2209;
                    int *l_3010 = &l_2869;
                    int *l_3011 = &l_2669;
                    int *l_3012 = &l_2714;
                    int *l_3013 = (void*)0;
                    unsigned *l_3022 = &l_2379;
                    unsigned short *l_3029 = &l_2813;
                    unsigned short *l_3031 = &g_67;
                    l_2813 &= (*p_11);
                    l_3014++;
                    (*l_2823) = (((safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s((~8L), l_3021)), ((*l_3022) = (&g_1967 != &g_1967)))) == (((safe_lshift_func_int16_t_s_u(1L, ((*l_3031) &= (!(0xD033E4B5L <= (((safe_mod_func_uint16_t_u_u(0x6FBAL, g_607)) < (~(((*l_3029) |= (safe_sub_func_int8_t_s_s(g_1009, g_42))) <= p_9))) & l_3030)))))) | 0xC83DL) <= l_2912)) & g_2672);
                }
                (*l_3034) &= (safe_rshift_func_uint8_t_u_u(0x00L, (p_8 || (~(-1L)))));
            }


            for (g_1919 = (-11); (g_1919 > 58); g_1919++)
            {
                (*p_11) &= (-8L);
            }
            l_3048++;
        }





        l_2209 ^= (l_2171 = (*p_11));
    }





    (*p_11) ^= (&l_2434 == ((*l_3052) = &g_368));

    ;
    return &g_958;



}







static int * func_13(int * p_14, short p_15, short p_16, int * p_17, int p_18)
{
    int *l_1767 = &g_861;
    int *l_1768 = &g_176;
    int *l_1769 = &g_861;
    int *l_1770 = &g_33;
    int *l_1771 = &g_85;
    int *l_1772 = &g_33;
    int *l_1773 = &g_33;
    int *l_1774 = &g_33;
    int *l_1775 = &g_176;
    int *l_1776 = &g_958;
    int *l_1777 = &g_33;
    int *l_1778 = (void*)0;
    int *l_1779 = (void*)0;
    int *l_1780 = &g_33;
    int *l_1781 = &g_33;
    int *l_1782 = (void*)0;
    int *l_1783 = &g_176;
    int *l_1784 = &g_861;
    int *l_1785 = &g_958;
    int *l_1786 = &g_861;
    int *l_1787 = &g_958;
    int *l_1788 = &g_958;
    int *l_1789 = &g_176;
    int *l_1790 = &g_958;
    int *l_1791 = &g_861;
    int *l_1792 = &g_861;
    int *l_1793 = (void*)0;
    int *l_1794 = &g_85;
    int *l_1795 = &g_958;
    int *l_1796 = (void*)0;
    int *l_1797 = &g_861;
    int *l_1798 = &g_958;
    int *l_1799 = &g_861;
    int *l_1800 = (void*)0;
    int *l_1801 = &g_85;
    int *l_1802 = &g_958;
    int l_1803 = 6L;
    int *l_1804 = &g_33;
    int *l_1805 = &g_176;
    int l_1806 = 6L;
    int *l_1807 = &g_85;
    int *l_1808 = &g_958;
    int l_1809 = 0x601DE88BL;
    int *l_1810 = &g_176;
    int *l_1811 = &g_958;
    int l_1812 = 0x1C0419A1L;
    int *l_1813 = &g_861;
    int *l_1814 = &g_958;
    int *l_1815 = &l_1812;
    int *l_1816 = &g_958;
    int l_1817 = 0x44CD3844L;
    int *l_1818 = &g_85;
    int l_1819 = 0L;
    int *l_1820 = &l_1817;
    int *l_1821 = &l_1819;
    int *l_1822 = &g_33;
    int *l_1823 = &l_1812;
    int *l_1824 = &g_958;
    int *l_1825 = &g_33;
    int *l_1826 = (void*)0;
    int *l_1827 = &g_958;
    int *l_1828 = &l_1817;
    int l_1829 = 1L;
    int *l_1830 = &g_958;
    int *l_1831 = &l_1809;
    int *l_1832 = &g_85;
    int *l_1833 = &l_1812;
    int *l_1834 = &l_1812;
    int *l_1835 = (void*)0;
    int *l_1836 = (void*)0;
    int *l_1837 = &g_85;
    int *l_1838 = &g_958;
    int l_1839 = 1L;
    int *l_1840 = &l_1809;
    int *l_1841 = (void*)0;
    int *l_1842 = &g_861;
    int *l_1843 = &l_1806;
    int *l_1844 = &g_958;
    int l_1845 = 0L;
    int *l_1846 = &g_861;
    int *l_1847 = &g_958;
    int *l_1848 = (void*)0;
    int *l_1849 = &l_1817;
    int *l_1850 = &g_958;
    int *l_1851 = (void*)0;
    int l_1852 = (-1L);
    int *l_1853 = &g_33;
    int l_1854 = 0x95272812L;
    int *l_1855 = &l_1806;
    int *l_1856 = &l_1839;
    int *l_1857 = &g_33;
    int *l_1858 = &l_1839;
    int l_1859 = 0x12274B3DL;
    int l_1860 = (-10L);
    int *l_1861 = &l_1817;
    int *l_1862 = (void*)0;
    int *l_1863 = &l_1819;
    int *l_1864 = &g_176;
    int *l_1865 = &l_1819;
    int l_1866 = 0xB14DF7A7L;
    int *l_1867 = &g_958;
    int l_1868 = 1L;
    int l_1869 = 0L;
    int *l_1870 = &l_1812;
    int *l_1871 = &l_1817;
    int *l_1872 = &g_33;
    int *l_1873 = (void*)0;
    int *l_1874 = (void*)0;
    int *l_1875 = &g_85;
    int *l_1876 = &l_1809;
    int *l_1877 = &g_861;
    int l_1878 = (-1L);
    int *l_1879 = (void*)0;
    int *l_1880 = &l_1852;
    int *l_1881 = &l_1852;
    int *l_1882 = &g_861;
    int *l_1883 = (void*)0;
    int *l_1884 = &l_1806;
    int *l_1885 = &g_85;
    int *l_1886 = &l_1812;
    int *l_1887 = &l_1845;
    int *l_1888 = &l_1829;
    int *l_1889 = &l_1809;
    int *l_1890 = &l_1809;
    int *l_1891 = &l_1866;
    int l_1892 = 0xBAB90215L;
    int l_1893 = (-1L);
    int l_1894 = 0xF760E834L;
    int *l_1895 = &l_1809;
    int *l_1896 = &l_1866;
    int *l_1897 = &l_1892;
    int *l_1898 = &l_1817;
    int *l_1899 = &l_1829;
    int *l_1900 = &l_1860;
    int *l_1901 = &l_1868;
    int *l_1902 = &l_1893;
    int *l_1903 = (void*)0;
    int l_1904 = 0xEBD8EA3AL;
    int *l_1905 = &l_1869;
    int *l_1906 = &l_1892;
    int *l_1907 = &l_1892;
    int l_1908 = 0x8C617591L;
    int *l_1909 = &l_1839;
    int l_1910 = 0xDF2FABD5L;
    int *l_1911 = &l_1894;
    int *l_1912 = &l_1894;
    int l_1913 = 0x7C1DC75EL;
    int *l_1914 = &l_1806;
    int l_1915 = 0x94408F6FL;
    int *l_1916 = &l_1908;
    int *l_1917 = &l_1893;
    int l_1918 = 0xF0847590L;
    char *l_1924 = &g_99;
    int ***l_1966 = (void*)0;
    int ****l_1965 = &l_1966;
    --g_1919;
    (**g_1386) = func_19((*p_17), func_51(p_16, ((*l_1924) |= ((func_51((func_51((safe_sub_func_uint16_t_u_u(0UL, (0L & (((p_15 >= p_16) != g_775) && (&g_1009 != (void*)0))))), p_16, (*l_1811)) >= (*l_1808)), g_693, p_18) > p_15) && 5L)), (*l_1830)));

    ;
    if ((*g_862))
    {
        unsigned short l_1935 = 7UL;
        unsigned char *l_1936 = (void*)0;
        unsigned char **l_1937 = &l_1936;
        unsigned char *l_1938 = &g_1009;
        short l_1941 = 0x4203L;
        short ***l_1962 = &g_827;
        int l_1973 = 0x5DC14C22L;
        int l_1975 = 0x4C7F8C8EL;
        int l_1978 = (-10L);
        int l_1979 = 0x05FE9C6EL;
        int l_1982 = 0xEE483976L;
        int l_1988 = 0x809B3950L;
        int l_2015 = 1L;
        (*l_1813) |= ((***g_1386) = (safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((((*l_1833) >= ((safe_add_func_uint8_t_u_u((0x3DF1483FL == ((*l_1789) = (safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((+(func_51((g_23 && (func_51(l_1935, ((((*l_1937) = l_1936) == l_1938) && func_51(l_1935, (safe_add_func_uint32_t_u_u(l_1935, (**g_1387))), (*l_1864))), p_16) <= g_958)), g_176, (*l_1865)) & g_33)), l_1941)), p_16)))), l_1935)) && l_1941)) >= p_18), g_578)), (*l_1821))));
        (***g_1385) = (void*)0;

        ;
        for (g_271 = 0; (g_271 == 41); g_271 = safe_add_func_uint16_t_u_u(g_271, 1))
        {
            char l_1952 = 0xB6L;
            short ***l_1964 = (void*)0;
            int *****l_1970 = &l_1965;
            int l_1977 = (-4L);
            int l_1980 = 0xC71CE238L;
            int l_1981 = 5L;
            int l_1985 = 0xDAD36655L;
            int l_1989 = 0xFACE9EF6L;
            int l_1990 = 0x2038989DL;
            int l_2020 = (-1L);
            for (l_1913 = 0; (l_1913 == 14); l_1913++)
            {
                unsigned l_1950 = 0UL;
                int l_1976 = 1L;
                int l_1983 = 0xDEE4F046L;
                int l_1984 = 0L;
                int l_1986 = (-1L);
                int l_1987 = 0xB2CB0DCBL;
                int *l_1991 = (void*)0;
                int *l_1992 = &l_1990;
                int *l_1993 = &g_85;
                int *l_1994 = &l_1812;
                int *l_1995 = (void*)0;
                int *l_1996 = &l_1812;
                int *l_1997 = (void*)0;
                int *l_1998 = &g_33;
                int *l_1999 = (void*)0;
                int *l_2000 = &l_1893;
                int *l_2001 = &l_1904;
                int *l_2002 = &l_1986;
                int *l_2003 = &l_1980;
                int *l_2004 = &l_1806;
                int *l_2005 = &l_1809;
                int *l_2006 = &l_1979;
                int *l_2007 = &g_958;
                int *l_2008 = &g_33;
                int *l_2009 = &l_1918;
                int l_2010 = 0x7393DD3BL;
                int *l_2011 = &l_1985;
                int *l_2012 = (void*)0;
                int *l_2013 = &l_1819;
                int *l_2014 = &g_958;
                int *l_2016 = &l_1806;
                int *l_2017 = &l_1819;
                int l_2018 = 0xFCB56AD1L;
                int *l_2019 = &g_861;
                int *l_2021 = (void*)0;
                for (g_775 = 0; (g_775 < 53); g_775 = safe_add_func_uint32_t_u_u(g_775, 8))
                {
                    int l_1951 = 0L;
                    int l_1953 = 0x3DB0AAEBL;
                    short ****l_1963 = &l_1962;
                    int *****l_1969 = &g_1967;
                    l_1953 = (p_15 && ((*l_1924) &= (safe_sub_func_int32_t_s_s((*l_1889), func_51(g_775, l_1935, l_1952)))));
                    (*g_862) = ((*p_14) >= p_16);
                    (*l_1916) = ((*l_1917) = ((*l_1824) = (p_15 != ((safe_sub_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(((((*l_1963) = l_1962) == l_1964) == (((l_1965 != ((*l_1969) = g_1967)) != (((l_1970 = l_1970) != (void*)0) != (safe_mod_func_uint8_t_u_u((((*l_1924) = (l_1950 < p_15)) & 0L), 1L)))) || l_1950)), 0x23F6L)) || (*l_1872)), p_16)), l_1950)) > l_1952))));
                }
                (*l_1784) = (*g_304);
                --g_2022;
                (*l_1842) ^= 1L;
            }
        }
    }
    else
    {
        int *l_2025 = (void*)0;
        return l_2025;


    }

    ;
    return &g_176;


}







static int * func_19(int p_20, unsigned short p_21)
{
    int *l_1759 = (void*)0;
    int l_1762 = 1L;
    short *l_1763 = &g_49;
    int *l_1764 = &g_958;
    int *l_1765 = &g_176;
    (***g_1385) = l_1759;

    ;
    (*l_1764) |= (l_1762 = (safe_rshift_func_uint8_t_u_s((((p_20 & 0x5D1AL) | func_55(l_1763, p_20, g_1025, g_33)) != (g_279 | 0UL)), p_21)));


    p_20 = ((*l_1765) ^= (*l_1764));
    return &g_85;


}







static short * func_29(int p_30)
{
    unsigned char *l_41 = &g_42;
    short *l_48 = &g_49;
    int l_50 = 0xA6EBBFADL;
    unsigned short *l_66 = &g_67;
    char *l_98 = &g_99;
    int **l_1058 = &g_822;
    char l_1060 = 0L;
    unsigned short l_1061 = 0UL;
    unsigned l_1086 = 0x799DB570L;
    unsigned short l_1100 = 2UL;
    unsigned l_1107 = 4294967290UL;
    int l_1132 = 0xD74A63E5L;
    int l_1160 = 0xC7E30A1FL;
    char l_1196 = 2L;
    short l_1217 = (-1L);
    unsigned l_1306 = 4294967288UL;
    int l_1438 = (-10L);
    int l_1448 = 0x471A5776L;
    unsigned char *l_1493 = (void*)0;
    int **l_1494 = &g_32;
    int l_1591 = (-3L);
    (*g_31) = &p_30;

    ;
    if ((safe_sub_func_uint16_t_u_u(0UL, (((((*l_41) = func_36(l_41, func_43(l_48, l_50, func_51(p_30, ((*l_98) |= ((((*l_48) = (-2L)) == func_55(l_48, (g_12 ^ (((*l_66) = (safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u(g_12, l_50)), 0UL)), 0x67C8FA1BL))) >= g_12)), p_30, l_50)) | g_42)), l_50), l_50), g_12, g_12)) >= g_552) == p_30) <= (-1L)))))
    {
        p_30 = p_30;
    }
    else
    {
        char l_1050 = 0x85L;
        unsigned char *l_1057 = (void*)0;
        unsigned *l_1059 = &g_287;
        short *l_1062 = &g_368;
        int l_1083 = 0xBC6DF56DL;
        unsigned short l_1174 = 65528UL;
        if ((safe_rshift_func_uint16_t_u_u(func_51(l_1050, (safe_rshift_func_int16_t_s_s(((*l_1062) &= ((*l_48) = func_55(l_66, (1UL == l_50), ((void*)0 == &p_30), ((p_30 & (safe_rshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(((*l_1059) = l_1050), 0xC2B02108L)) < p_30), l_1060))) < l_1061)))), l_1050)), p_30), l_1050)))
        {
            int *l_1077 = &g_85;
            short **l_1078 = &g_258;
            (*l_1077) &= (l_1050 && (safe_sub_func_uint8_t_u_u((((safe_div_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(p_30, func_51((safe_sub_func_int32_t_s_s((-7L), p_30)), l_1050, p_30))) | ((safe_sub_func_uint32_t_u_u(g_67, p_30)) && l_1050)), p_30)), g_552)), l_1050)) > g_247) && l_1050), 0xB9L)));
            (*g_304) = (l_66 != (l_1062 = l_1062));
        }
        else
        {
            int *l_1087 = &l_50;
            short l_1096 = 0xB866L;
            unsigned char *l_1099 = &g_271;
            int *l_1109 = &g_176;
            int *l_1110 = (void*)0;
            int *l_1111 = &g_958;
            int *l_1112 = (void*)0;
            int *l_1113 = &l_50;
            int *l_1114 = (void*)0;
            int *l_1115 = &g_176;
            int *l_1116 = &g_33;
            int *l_1117 = &g_176;
            int *l_1118 = &g_958;
            int *l_1119 = &l_50;
            int *l_1120 = &g_958;
            int *l_1121 = &g_33;
            int *l_1122 = &g_176;
            int *l_1123 = &g_33;
            int *l_1124 = &g_33;
            int *l_1125 = &g_85;
            int *l_1126 = &g_85;
            int *l_1127 = (void*)0;
            int *l_1128 = &g_33;
            int *l_1129 = &g_861;
            int *l_1130 = &g_861;
            int *l_1131 = &g_176;
            int *l_1133 = &g_176;
            int *l_1134 = &g_861;
            int *l_1135 = (void*)0;
            int *l_1136 = &g_176;
            int *l_1137 = &g_85;
            int *l_1138 = &l_1083;
            int *l_1139 = &g_176;
            int *l_1140 = &g_85;
            int *l_1141 = &l_50;
            int *l_1142 = &g_958;
            int *l_1143 = &g_33;
            int *l_1144 = (void*)0;
            int *l_1145 = &g_861;
            int *l_1146 = &l_50;
            int l_1147 = 0xD0A282B2L;
            int *l_1148 = &g_176;
            int *l_1149 = &l_50;
            int *l_1150 = &g_958;
            int *l_1151 = &l_50;
            int l_1152 = 0x1D11B0D2L;
            int l_1153 = 0xE0D34FA5L;
            int *l_1154 = &l_50;
            int *l_1155 = &g_176;
            int *l_1156 = &g_33;
            int *l_1157 = (void*)0;
            int *l_1158 = &l_50;
            int *l_1159 = (void*)0;
            int l_1161 = 7L;
            int *l_1162 = (void*)0;
            int *l_1163 = &g_861;
            int *l_1164 = &g_861;
            int *l_1165 = &l_1083;
            unsigned short l_1166 = 4UL;
            int l_1170 = 0x133E64C1L;
            int l_1173 = (-3L);
            p_30 ^= (safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(((--(*l_1059)) > 0x0D7C8685L), 0xDA40B511L)), 5));
            if (l_1086)
            {
                unsigned char l_1094 = 1UL;
                int *l_1095 = &g_861;
                short l_1097 = 0xAE4CL;
                int l_1098 = 0x774526EEL;
                (*l_1058) = l_1087;

                ;
                l_1098 |= (safe_rshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u(p_30, ((((*g_822) ^= p_30) | p_30) < (func_51(g_693, ((((*l_1062) &= (g_49 = p_30)) < func_51(((void*)0 != l_1062), (func_51(func_51(g_271, (((*l_1095) = ((safe_add_func_uint32_t_u_u(g_168, l_1094)) < 0L)) ^ 0UL), p_30), l_1050, l_1096) != p_30), p_30)) != p_30), l_1097) && g_168)))) && p_30), 4));
                (*l_1058) = (void*)0;

                ;
            }
            else
            {
                int l_1108 = (-2L);
                (*l_1087) = ((p_30 ^ (g_578 != p_30)) & 0x3609L);
            }
            l_1166--;
            if (((safe_unary_minus_func_uint8_t_u(l_1170)) & (p_30 & ((safe_rshift_func_uint8_t_u_u((l_1060 || p_30), 3)) | (func_55(l_66, (*g_285), p_30, g_49) & g_176)))))
            {
                (*l_1165) = (((*l_98) ^= l_1174) == (*l_1138));
            }
            else
            {
                unsigned l_1177 = 0xF2C107C7L;
                if (((((safe_sub_func_int8_t_s_s(l_1177, func_55(&g_49, ((*l_1134) = ((*l_1155) |= ((l_1174 < 0x7CD8L) && func_51((*l_1146), l_1177, l_1083)))), p_30, p_30))) <= g_368) & 0UL) & p_30))
                {
                    unsigned short l_1178 = 0x6738L;
                    ++l_1178;
                }
                else
                {
                    short **l_1181 = &g_258;
                    short **l_1182 = &g_258;
                    short **l_1183 = &g_258;
                    short **l_1184 = &l_48;
                    (*l_1133) = (l_1062 == ((*l_1184) = &g_49));
                    return l_1062;


                }
                for (l_1170 = 0; (l_1170 <= 6); l_1170 = safe_add_func_int8_t_s_s(l_1170, 4))
                {
                    short *l_1187 = &g_368;
                    return l_1187;


                }
            }
        }


    }





    ;
    if (((*l_1058) != &p_30))
    {
        char l_1190 = (-1L);
        unsigned short *l_1195 = &l_1100;
        int l_1241 = 0xA9991BDBL;
        int l_1261 = 0x15615EA3L;
        int l_1300 = (-6L);
        int *l_1382 = &g_85;
        unsigned *l_1383 = &g_578;
        int *l_1388 = &g_33;
        unsigned char *l_1476 = &g_271;
        if ((safe_sub_func_int32_t_s_s((p_30 | (l_1190 >= (safe_add_func_int32_t_s_s(((((*l_1195) &= ((*l_66) = (safe_sub_func_int8_t_s_s(l_1190, 0x06L)))) | l_1196) || p_30), p_30)))), p_30)))
        {
            int l_1202 = 0x10AD6CB8L;
            unsigned char l_1209 = 1UL;
            int *l_1210 = &l_1160;
            int *l_1211 = (void*)0;
            int *l_1212 = &g_176;
            int *l_1213 = &g_861;
            int *l_1214 = &g_176;
            int *l_1215 = &l_50;
            int *l_1216 = &l_1160;
            int *l_1218 = &l_1132;
            int l_1219 = (-4L);
            int *l_1220 = &g_33;
            int *l_1221 = &g_176;
            int *l_1222 = &g_85;
            int *l_1223 = (void*)0;
            int *l_1224 = (void*)0;
            int *l_1225 = &l_1132;
            int *l_1226 = (void*)0;
            int *l_1227 = &l_1132;
            int *l_1228 = &g_176;
            int *l_1229 = &l_50;
            int *l_1230 = &g_861;
            int *l_1231 = (void*)0;
            int *l_1232 = (void*)0;
            int *l_1233 = &l_1219;
            int *l_1234 = &l_50;
            int *l_1235 = &l_50;
            int *l_1236 = &g_176;
            int *l_1237 = &l_50;
            int *l_1238 = &g_176;
            int *l_1239 = &l_1219;
            int *l_1240 = &l_1132;
            int *l_1242 = &g_33;
            int *l_1243 = &g_861;
            int *l_1244 = &l_50;
            int *l_1245 = &l_1160;
            int *l_1246 = &g_861;
            int l_1247 = (-1L);
            int *l_1248 = &l_1219;
            int *l_1249 = &g_861;
            int l_1250 = 0x61AB7996L;
            int *l_1251 = &g_33;
            int *l_1252 = &l_1219;
            int *l_1253 = &l_1219;
            int *l_1254 = (void*)0;
            int *l_1255 = &g_85;
            int *l_1256 = (void*)0;
            int *l_1257 = &g_176;
            int *l_1258 = (void*)0;
            int *l_1259 = &g_33;
            int *l_1260 = &l_50;
            int *l_1262 = (void*)0;
            int *l_1263 = &g_861;
            int *l_1264 = &g_85;
            int *l_1265 = &l_1241;
            int *l_1266 = &l_1261;
            int l_1267 = 1L;
            int *l_1268 = (void*)0;
            int *l_1269 = &l_1219;
            int *l_1270 = &l_1219;
            int *l_1271 = &l_1250;
            int *l_1272 = &l_1160;
            int *l_1273 = &g_958;
            int l_1274 = 0xCAC0A5C7L;
            int l_1275 = 1L;
            int *l_1276 = &l_1247;
            int *l_1277 = &l_1160;
            int *l_1278 = &l_1274;
            int l_1279 = 6L;
            int *l_1280 = &l_1275;
            int *l_1281 = &g_85;
            int *l_1282 = &g_33;
            int *l_1283 = &l_1279;
            int *l_1284 = &g_33;
            int *l_1285 = &g_85;
            int *l_1286 = &l_1267;
            int *l_1287 = &l_1261;
            int *l_1288 = &l_1219;
            int *l_1289 = &l_1274;
            int *l_1290 = &l_1274;
            int *l_1291 = &l_1250;
            int *l_1292 = &l_50;
            int *l_1293 = (void*)0;
            int *l_1294 = &l_1274;
            int *l_1295 = &l_1247;
            int *l_1296 = &g_33;
            int *l_1297 = &l_1160;
            int *l_1298 = &l_1132;
            int *l_1299 = &l_1275;
            int *l_1301 = &g_176;
            int *l_1302 = &l_1219;
            int *l_1303 = &l_1219;
            int *l_1304 = (void*)0;
            int l_1305 = 0x4F66DEBFL;
            for (l_1196 = (-20); (l_1196 < 17); l_1196 = safe_add_func_int32_t_s_s(l_1196, 4))
            {
                int *l_1199 = &g_85;
                unsigned short **l_1201 = &l_1195;
                unsigned short ***l_1200 = &l_1201;
                (*l_1199) = 0xF5978500L;
                (*l_1200) = (void*)0;

                ;
            }
            l_1202 = 0x081A9902L;
            (*l_1210) = func_51(g_221, (safe_add_func_uint8_t_u_u(((0L < (safe_sub_func_uint32_t_u_u(p_30, (safe_lshift_func_int16_t_s_u(g_67, func_55(l_1195, l_1190, p_30, l_1190)))))) ^ l_1209), g_49)), p_30);


            --l_1306;
        }
        else
        {
            unsigned char l_1370 = 0x9EL;
            for (g_287 = 0; (g_287 > 31); g_287 = safe_add_func_int8_t_s_s(g_287, 2))
            {
                int *l_1311 = (void*)0;
                int *l_1312 = &g_861;
                int *l_1313 = &g_176;
                int *l_1314 = &g_33;
                int *l_1315 = &l_50;
                int *l_1316 = &g_958;
                int *l_1317 = &l_1132;
                int *l_1318 = &l_1160;
                int *l_1319 = &l_1160;
                int *l_1320 = &g_958;
                int *l_1321 = (void*)0;
                int *l_1322 = &g_958;
                int *l_1323 = &g_176;
                int *l_1324 = (void*)0;
                int *l_1325 = (void*)0;
                int *l_1326 = &g_33;
                int *l_1327 = &l_1261;
                int *l_1328 = &l_1132;
                int *l_1329 = &l_1132;
                int *l_1330 = &g_33;
                int *l_1331 = &l_1241;
                int *l_1332 = &l_1160;
                int *l_1333 = &l_1160;
                int *l_1334 = &l_1261;
                int *l_1335 = &g_958;
                int *l_1336 = &l_1241;
                int *l_1337 = &g_33;
                int *l_1338 = (void*)0;
                int *l_1339 = &g_85;
                int *l_1340 = &l_1261;
                int *l_1341 = &l_1160;
                int *l_1342 = &g_861;
                int *l_1343 = &g_33;
                int *l_1344 = &l_1132;
                int *l_1345 = &g_85;
                int *l_1346 = &l_1160;
                int *l_1347 = &l_1241;
                int *l_1348 = &l_1261;
                int *l_1349 = &l_1241;
                int *l_1350 = &g_958;
                int *l_1351 = &g_85;
                int *l_1352 = &l_1300;
                int *l_1353 = &l_50;
                int *l_1354 = &g_958;
                int *l_1355 = &l_50;
                int *l_1356 = &l_1241;
                int *l_1357 = (void*)0;
                int *l_1358 = (void*)0;
                int *l_1359 = &l_1261;
                int *l_1360 = &l_1132;
                int *l_1361 = &l_1300;
                int *l_1362 = &g_861;
                int *l_1363 = &l_50;
                int *l_1364 = &l_1300;
                int *l_1365 = &g_33;
                int *l_1366 = &g_958;
                int *l_1367 = &l_1132;
                int *l_1368 = &g_33;
                int *l_1369 = (void*)0;
                short ****l_1373 = (void*)0;
                short ***l_1375 = &g_827;
                short ****l_1374 = &l_1375;
                (*l_1058) = l_1311;

                ;
                --l_1370;
                (*l_1332) &= (p_30 | ((((*l_1374) = &g_827) != &g_827) | (safe_add_func_uint32_t_u_u((safe_div_func_int8_t_s_s(p_30, (safe_mod_func_int32_t_s_s(l_1190, g_67)))), l_1300))));
                l_1382 = l_1317;

                ;
            }

            ;
            p_30 = (*g_862);
        }

        ;
        if (func_51(((*l_1383) = g_699), g_213, (*l_1382)))
        {
            short l_1384 = 0x81CEL;
            l_1384 ^= p_30;
            (*l_1058) = &p_30;

            ;
            (**l_1058) = (((**l_1058) >= ((*l_1195) = (((void*)0 == g_1385) <= ((void*)0 != &g_775)))) > (((*l_1382) = func_51((g_607 != g_279), l_1384, ((*l_48) = (0x11L != g_248)))) || l_1384));
        }
        else
        {
            int l_1391 = 0L;
            int l_1418 = 0L;
            int l_1419 = 8L;
            unsigned l_1462 = 0UL;
            (*l_1058) = l_1388;

            ;
            for (l_1190 = 0; (l_1190 >= 24); l_1190 = safe_add_func_int32_t_s_s(l_1190, 8))
            {
                int *l_1392 = &g_861;
                int *l_1393 = &l_1160;
                int *l_1394 = &l_1241;
                int *l_1395 = (void*)0;
                int *l_1396 = &l_1300;
                int *l_1397 = &l_1132;
                int *l_1398 = &l_1300;
                int *l_1399 = &g_958;
                int *l_1400 = (void*)0;
                int *l_1401 = &g_176;
                int *l_1402 = &g_33;
                int *l_1403 = &l_1160;
                int *l_1404 = &g_176;
                int *l_1405 = &g_861;
                int *l_1406 = &g_85;
                int *l_1407 = &l_1300;
                int *l_1408 = &l_50;
                int *l_1409 = &g_85;
                int *l_1410 = &g_33;
                int *l_1411 = (void*)0;
                int *l_1412 = &g_85;
                int *l_1413 = &l_1261;
                int *l_1414 = &l_50;
                int *l_1415 = (void*)0;
                int *l_1416 = (void*)0;
                int *l_1417 = (void*)0;
                int l_1420 = (-1L);
                int *l_1421 = (void*)0;
                int *l_1422 = &l_1160;
                int *l_1423 = &g_958;
                int *l_1424 = &g_33;
                int *l_1425 = &l_1418;
                int *l_1426 = &g_861;
                int *l_1427 = &g_85;
                int *l_1428 = &l_1419;
                int *l_1429 = &l_50;
                int *l_1430 = &l_1241;
                int *l_1431 = &l_50;
                int *l_1432 = &l_1132;
                int *l_1433 = &g_176;
                int *l_1434 = &l_1261;
                int *l_1435 = (void*)0;
                int *l_1436 = &g_176;
                int *l_1437 = &l_1261;
                int *l_1439 = (void*)0;
                int *l_1440 = &g_861;
                int *l_1441 = (void*)0;
                int *l_1442 = &l_1132;
                int *l_1443 = (void*)0;
                int *l_1444 = &g_33;
                int *l_1445 = &g_176;
                int *l_1446 = (void*)0;
                int *l_1447 = &l_1419;
                int *l_1449 = &g_958;
                int *l_1450 = &l_1241;
                int *l_1451 = &g_958;
                int *l_1452 = (void*)0;
                int *l_1453 = &g_861;
                int *l_1454 = (void*)0;
                int *l_1455 = (void*)0;
                int *l_1456 = &l_1132;
                int *l_1457 = (void*)0;
                int *l_1458 = (void*)0;
                int *l_1459 = &g_958;
                int *l_1460 = &l_1160;
                int *l_1461 = &g_176;
                int ***l_1477 = &l_1058;
                if (p_30)
                    break;
                l_1462++;
                (*l_1404) ^= func_51((safe_unary_minus_func_int32_t_s((safe_rshift_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((**l_1058), p_30)) && (*l_1427)), p_30)), g_271)), (*l_1388))) || (*l_1431)), p_30)))), p_30, p_30);
            }
        }

        ;
    }
    else
    {
        int *l_1484 = &g_176;
        short ***l_1529 = (void*)0;
        int l_1610 = (-6L);
        int l_1640 = 4L;
        int l_1710 = 0x12B5953EL;
        int l_1714 = (-1L);
        int l_1716 = 0L;
        int l_1718 = 0L;
        unsigned short l_1740 = 0xD84AL;
        l_1484 = &p_30;

        ;
        p_30 = ((*l_1484) & 0x4365L);
        if (p_30)
        {
            short l_1499 = 1L;
            unsigned short *l_1527 = &l_1100;
            short ***l_1528 = &g_827;
            int *l_1530 = &g_958;
            for (g_958 = 11; (g_958 <= 6); g_958 = safe_sub_func_int8_t_s_s(g_958, 2))
            {
                short *l_1487 = (void*)0;
                int l_1497 = (-8L);
                unsigned char l_1498 = 0UL;
                (***g_1386) = func_55(l_1487, (*l_1484), g_1025, (g_271 != ((*l_1484) & (safe_mod_func_uint32_t_u_u(p_30, p_30)))));


                (***g_1385) = &p_30;

                ;
                for (g_1009 = 0; (g_1009 <= 22); g_1009++)
                {
                    unsigned char *l_1492 = &g_42;
                    int *l_1500 = (void*)0;
                    char *l_1515 = &l_1060;
                    unsigned *l_1523 = &g_775;
                    int *l_1524 = (void*)0;
                    p_30 = (g_368 <= l_1499);
                    l_1500 = ((*l_1058) = ((*l_1494) = &p_30));

                    ;
                    ;
                    ;
                    if (l_1499)
                        continue;
                    l_1132 |= (safe_sub_func_uint32_t_u_u(((*l_1523) &= (+((*g_32) > ((p_30 >= (p_30 != ((((safe_rshift_func_int8_t_s_s(g_42, ((*l_98) = 0x8BL))) & (safe_add_func_uint16_t_u_u((!(safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((((((*l_1515) = g_278) ^ ((--g_699) < (**l_1058))) && (safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(0xFC7AL, (((safe_unary_minus_func_int16_t_s(0L)) < g_607) ^ (*l_1484)))), (*l_1484)))) & l_1498), 0x6FL)), 4)), 1UL))), l_1498))) <= l_1499) != p_30))) || (-5L))))), p_30));
                }


            }


            ;
            ;
            if (((func_55(&l_1499, l_1499, (*l_1484), (((*l_66) |= (!(*l_1484))) < ((safe_lshift_func_uint16_t_u_s((l_1527 == l_1527), 9)) == p_30))) < (l_1528 == l_1529)) && p_30))
            {
                l_1484 = l_1530;

                ;
                (****g_1385) &= (safe_rshift_func_int16_t_s_u((*l_1530), 14));
            }
            else
            {
                (*l_1494) = &p_30;

                ;
                (*l_1530) &= p_30;
            }


            ;
        }
        else
        {
            char l_1534 = 0x94L;
            int l_1544 = 0xE1B4F801L;
            short l_1553 = 0x75F2L;
            int l_1613 = (-7L);
            int l_1633 = 1L;
            int l_1661 = 0x6B9D3326L;
            int l_1735 = 4L;
            int *l_1748 = &l_1633;
            char l_1751 = (-1L);
            if (p_30)
            {
                short *l_1533 = &g_49;
                (**g_1386) = &p_30;

                ;
                return l_1533;



            }
            else
            {
                int l_1573 = (-1L);
                int l_1612 = (-4L);
                int l_1647 = (-1L);
                int l_1682 = 4L;
                (***g_1385) = (*g_1387);
                if (p_30)
                {
                    short **l_1542 = &l_48;
                    int l_1543 = 0x37212251L;
                    (*l_1058) = &p_30;

                    ;
                    l_1544 ^= (func_51(p_30, func_51(l_1534, ((safe_rshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(p_30, (3UL ^ (safe_rshift_func_int8_t_s_s((-8L), 3))))), (safe_unary_minus_func_int32_t_s((func_55(((*l_1542) = &l_1217), l_1534, p_30, g_42) && l_1543))))) > p_30), p_30), l_1543) ^ g_248);


                    ;
                    (*g_822) = (safe_sub_func_int8_t_s_s(((+(safe_rshift_func_uint8_t_u_u(g_552, 1))) ^ (safe_add_func_int32_t_s_s(((p_30 != p_30) && (!(0x03C96847L & (safe_sub_func_uint8_t_u_u(250UL, p_30))))), (*g_862)))), 1L));
                }
                else
                {
                    short l_1593 = (-1L);
                    int l_1681 = (-3L);
                    int l_1693 = 5L;
                    int l_1709 = (-4L);
                    int l_1727 = 0x764D9A14L;
                    if (l_1553)
                    {
                        int *l_1554 = &l_1448;
                        int *l_1555 = (void*)0;
                        int *l_1556 = (void*)0;
                        int *l_1557 = &g_33;
                        int *l_1558 = &g_958;
                        int *l_1559 = &g_861;
                        int *l_1560 = &g_176;
                        int *l_1561 = (void*)0;
                        int *l_1562 = (void*)0;
                        int *l_1563 = &g_33;
                        int *l_1564 = &g_85;
                        int *l_1565 = &l_1544;
                        int *l_1566 = &l_50;
                        int *l_1567 = &l_50;
                        int *l_1568 = &l_50;
                        int *l_1569 = &l_50;
                        int *l_1570 = &l_1544;
                        int *l_1571 = (void*)0;
                        int *l_1572 = &g_176;
                        int *l_1574 = &l_1132;
                        int *l_1575 = (void*)0;
                        int *l_1576 = (void*)0;
                        int *l_1577 = &g_176;
                        int *l_1578 = &g_33;
                        int *l_1579 = &g_861;
                        int *l_1580 = &g_958;
                        int *l_1581 = &l_50;
                        int *l_1582 = &l_50;
                        int *l_1583 = &l_50;
                        int *l_1584 = (void*)0;
                        int *l_1585 = &g_958;
                        int *l_1586 = (void*)0;
                        int *l_1587 = &l_1438;
                        int *l_1588 = &g_176;
                        int *l_1589 = (void*)0;
                        int *l_1590 = &g_33;
                        int *l_1592 = &g_85;
                        int *l_1594 = &l_1132;
                        int l_1595 = (-2L);
                        int *l_1596 = &g_176;
                        int *l_1597 = &g_176;
                        int *l_1598 = &l_1591;
                        int *l_1599 = &g_33;
                        int *l_1600 = &g_85;
                        int *l_1601 = (void*)0;
                        int *l_1602 = &l_1438;
                        int *l_1603 = &l_1544;
                        int *l_1604 = &l_1595;
                        int *l_1605 = &l_1448;
                        int *l_1606 = &l_1544;
                        int *l_1607 = &l_1448;
                        int *l_1608 = &g_85;
                        int *l_1609 = (void*)0;
                        int *l_1611 = (void*)0;
                        int *l_1614 = &l_1448;
                        int *l_1615 = &g_85;
                        int *l_1616 = &l_1610;
                        int *l_1617 = &l_1595;
                        int *l_1618 = &g_176;
                        int *l_1619 = &g_85;
                        int *l_1620 = &g_861;
                        int *l_1621 = &l_1591;
                        int *l_1622 = &l_1160;
                        int *l_1623 = &g_958;
                        int *l_1624 = &l_1438;
                        int *l_1625 = &l_1595;
                        int *l_1626 = &l_1438;
                        int *l_1627 = &l_1160;
                        int *l_1628 = &l_1448;
                        int *l_1629 = &g_176;
                        int *l_1630 = &l_1613;
                        int *l_1631 = (void*)0;
                        int *l_1632 = (void*)0;
                        int *l_1634 = (void*)0;
                        int *l_1635 = &l_1544;
                        int *l_1636 = (void*)0;
                        int *l_1637 = (void*)0;
                        int *l_1638 = &l_1612;
                        int *l_1639 = &l_1544;
                        int *l_1641 = &l_1595;
                        int *l_1642 = &l_1595;
                        int *l_1643 = &l_1160;
                        int *l_1644 = &l_1595;
                        int *l_1645 = (void*)0;
                        int *l_1646 = &l_1438;
                        int *l_1648 = &g_176;
                        int *l_1649 = &l_1591;
                        int *l_1650 = &l_1591;
                        int *l_1651 = (void*)0;
                        int *l_1652 = &l_1647;
                        int *l_1653 = (void*)0;
                        int *l_1654 = &l_50;
                        int *l_1655 = &l_1613;
                        int *l_1656 = &l_1610;
                        int *l_1657 = &g_85;
                        int *l_1658 = &g_861;
                        int *l_1659 = &l_1160;
                        int *l_1660 = &g_958;
                        int *l_1662 = &g_33;
                        int *l_1663 = &l_1612;
                        int *l_1664 = &l_1613;
                        int *l_1665 = &l_1610;
                        int *l_1666 = (void*)0;
                        int *l_1667 = &l_1160;
                        int *l_1668 = &l_1613;
                        int *l_1669 = &l_1647;
                        int *l_1670 = (void*)0;
                        int *l_1671 = &l_1613;
                        int *l_1672 = &g_176;
                        int *l_1673 = (void*)0;
                        int *l_1674 = &l_1640;
                        int *l_1675 = &g_85;
                        int *l_1676 = &g_176;
                        int *l_1677 = &g_85;
                        int l_1678 = 1L;
                        int *l_1679 = &g_861;
                        int *l_1680 = &g_861;
                        int *l_1683 = (void*)0;
                        int *l_1684 = &g_85;
                        int *l_1685 = &l_1682;
                        int *l_1686 = &l_1591;
                        int l_1687 = 0x9027F29CL;
                        int *l_1688 = &l_1595;
                        int *l_1689 = &l_1448;
                        int *l_1690 = &l_50;
                        int *l_1691 = &l_1640;
                        int *l_1692 = &l_50;
                        int *l_1694 = &l_1681;
                        int *l_1695 = &l_1687;
                        int *l_1696 = &l_1448;
                        int *l_1697 = &l_1132;
                        int *l_1698 = &l_1591;
                        int *l_1699 = &l_1544;
                        int *l_1700 = &l_1647;
                        int *l_1701 = (void*)0;
                        int l_1702 = 1L;
                        int *l_1703 = (void*)0;
                        int *l_1704 = &l_1160;
                        int *l_1705 = (void*)0;
                        int *l_1706 = &l_1448;
                        int *l_1707 = &l_1544;
                        int *l_1708 = &l_1640;
                        int *l_1711 = (void*)0;
                        int *l_1712 = &l_1710;
                        int *l_1713 = &l_1438;
                        int *l_1715 = (void*)0;
                        int *l_1717 = &g_958;
                        int *l_1719 = (void*)0;
                        int *l_1720 = &l_1591;
                        int *l_1721 = &l_1610;
                        int *l_1722 = &l_1612;
                        int *l_1723 = &g_861;
                        int *l_1724 = (void*)0;
                        int *l_1725 = &l_1710;
                        int *l_1726 = (void*)0;
                        int *l_1728 = &l_1727;
                        int *l_1729 = &l_1661;
                        int *l_1730 = &g_958;
                        int *l_1731 = &l_50;
                        int *l_1732 = &l_1681;
                        int *l_1733 = &l_1727;
                        int *l_1734 = (void*)0;
                        int *l_1736 = &l_1448;
                        int *l_1737 = &l_1682;
                        int *l_1738 = (void*)0;
                        int *l_1739 = (void*)0;
                        ++l_1740;
                        (*l_1599) = (0x86L > (((*l_66)--) < (safe_div_func_int32_t_s_s((-2L), (p_30 || g_287)))));
                    }
                    else
                    {
                        int *l_1747 = (void*)0;
                        l_1748 = l_1747;

                        ;
                        (****g_1385) &= p_30;
                        (***g_1385) = &p_30;

                        ;
                        return &g_368;



                    }
                    (*l_1748) = (-5L);
                    for (l_1693 = 0; (l_1693 != 19); l_1693++)
                    {
                        (**g_1386) = (void*)0;

                        ;
                    }

                    ;
                    (*l_1748) = ((&p_30 == &p_30) == l_1681);
                }

                ;
                ;
                ;
            }

            ;
            ;
            ;
            (*l_1748) = (p_30 = l_1751);
            (*l_1748) ^= 4L;
        }


        ;
        ;
        ;
        ;
    }


    ;
    ;
    ;
    return &g_49;





}







static unsigned char func_36(unsigned char * p_37, int ** p_38, char p_39, int p_40)
{
    short l_376 = 0x5999L;
    int *l_386 = &g_33;
    int l_398 = 0L;
    int l_437 = 0x7CCC234CL;
    int l_495 = 0x158078B8L;
    int l_531 = (-7L);
    int l_590 = 0x5D44C6B0L;
    int l_599 = 0x638D7BE3L;
    short l_617 = 0x4686L;
    short l_627 = (-1L);
    unsigned l_737 = 1UL;
    short l_739 = (-5L);
    int *l_782 = &g_33;
    short *l_807 = &l_627;
    short **l_806 = &l_807;
    if (l_376)
    {
        int l_381 = 0x443E91BFL;
        int l_390 = 1L;
        int l_535 = 0x2902C647L;
        int l_592 = 0xD2039C2AL;
        int l_639 = 0xCFFF1791L;
        for (g_85 = 6; (g_85 != 21); ++g_85)
        {
            int *l_385 = (void*)0;
            short *l_393 = &g_49;
            int l_430 = (-1L);
            int l_433 = (-6L);
            int l_460 = 0x7D4A5735L;
            int l_503 = (-1L);
            char l_511 = 0xE4L;
            int l_520 = 0x2E2B8542L;
            int l_554 = (-9L);
            int l_568 = 0L;
        }
    }
    else
    {
        int l_702 = 0xF8759180L;
        unsigned l_705 = 0xE7EE659FL;
        short *l_708 = &l_376;
        unsigned *l_713 = &g_578;
        char *l_756 = &g_221;
        short *l_786 = (void*)0;
        int l_787 = 0L;
        (*l_386) = l_702;
        if (((*g_285) | (((l_705 || g_248) ^ (safe_sub_func_int8_t_s_s(((&g_49 == l_708) < g_49), (safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(((l_708 == (void*)0) & ((*p_37) = (((func_51(((*l_713)++), (*l_386), l_705) >= l_705) ^ l_705) < l_702))), 5)), l_702))))) > 1UL)))
        {
            unsigned short l_716 = 8UL;
            int *l_717 = &l_437;
            (*l_717) &= ((l_705 != func_55(l_708, (*g_304), g_33, func_51((*l_386), (*l_386), (p_39 < (*p_37))))) || l_716);
        }
        else
        {
            int *l_718 = &l_495;
            unsigned short **l_744 = &g_309;
            int *l_757 = &g_176;
            if (l_705)
            {
                (*p_38) = l_718;

                ;
                for (l_702 = 28; (l_702 != (-26)); --l_702)
                {
                    (*p_38) = (*g_68);
                }
            }
            else
            {
                unsigned short l_745 = 65531UL;
                if ((*g_304))
                {
                    unsigned l_727 = 7UL;
                    char *l_734 = &g_221;
                    int l_738 = 1L;
                    for (l_398 = 0; (l_398 == (-8)); l_398 = safe_sub_func_uint16_t_u_u(l_398, 5))
                    {
                        (*l_718) = (safe_sub_func_uint8_t_u_u((*p_37), 0x0CL));
                    }
                    l_702 = l_705;
                    for (g_168 = 29; (g_168 != 22); g_168--)
                    {
                        (*l_718) &= ((*l_386) = l_727);
                        if (l_727)
                            continue;
                    }
                    if ((((((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((1UL < g_217) & (safe_rshift_func_int16_t_s_u(p_39, func_51(g_271, ((*l_734) = (-1L)), (*l_718))))), 10)), ((safe_sub_func_int32_t_s_s((((0xFB0D7EB0L == (((((*g_258) |= (((*l_708) = ((*l_718) < l_737)) >= p_40)) < p_39) <= 255UL) && p_40)) == l_727) == p_40), l_727)) > (*l_718)))) | l_738) >= (*l_718)) ^ l_739) <= g_578))
                    {
                        (*l_386) = ((safe_lshift_func_int8_t_s_s(g_578, 3)) == (l_718 == &l_599));
                        l_744 = l_744;
                    }
                    else
                    {
                        return (*p_37);
                    }
                }
                else
                {
                    return l_745;
                }
                (*l_386) ^= p_40;
            }


            (*l_757) ^= (safe_lshift_func_int8_t_s_s((*l_718), (((safe_div_func_uint16_t_u_u(p_40, (*g_258))) >= ((safe_lshift_func_int16_t_s_u(((*l_708) |= p_40), 0)) >= (safe_div_func_uint8_t_u_u(func_55(l_708, (*g_304), (safe_add_func_uint32_t_u_u(func_51(func_51(g_248, (0x5F0420D3L | (&g_99 != l_756)), (*g_258)), g_578, l_702), l_705)), p_40), g_42)))) & l_702)));


        }
        for (l_398 = (-25); (l_398 == (-13)); ++l_398)
        {
            unsigned l_774 = 4UL;
            int **l_792 = &l_386;
            if ((!(safe_lshift_func_uint16_t_u_u((5L || (safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((*g_258), 11)), p_39))), 7))))
            {
                short l_783 = (-1L);
                if (((-2L) <= ((safe_lshift_func_int16_t_s_s((+(g_49 != func_51(p_39, (safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(func_55(&g_49, func_51(g_217, (*l_386), (*g_258)), ((*l_756) = (safe_add_func_uint8_t_u_u((p_40 == (*g_258)), l_774))), l_774), 0x43L)), 2)), g_775))), p_39)) | l_705)))
                {
                    unsigned short **l_777 = &g_309;
                    unsigned short ***l_776 = &l_777;
                    int **l_778 = (void*)0;
                    int **l_779 = &l_386;
                    int *l_780 = &g_85;
                    int **l_781 = &l_780;
                    (*l_776) = &g_309;
                    (*g_304) = ((((*l_779) = &l_702) == ((*l_781) = l_780)) & (*p_37));

                    ;
                }
                else
                {
                    (*p_38) = l_782;

                    ;
                    return l_783;
                }

                ;
                (*p_38) = &g_176;

                ;
                if ((func_55(l_786, (**p_38), l_787, p_40) <= (((+(p_40 & ((*p_37) < func_51(((func_51(g_12, (~(safe_lshift_func_int8_t_s_u(((p_40 == l_783) < p_40), l_702))), p_40) ^ (*p_37)) && p_39), l_705, (*l_386))))) || 0x1AAE140DL) <= 0x4CL)))
                {
                    return g_213;
                }
                else
                {
                    return (*p_37);
                }
            }
            else
            {
                int ***l_793 = &l_792;
                (*l_782) |= 0x853BB084L;
                (*l_386) |= (safe_add_func_int16_t_s_s(p_40, (&g_32 != ((*l_793) = l_792))));
                return l_787;
            }
        }
    }
    for (g_168 = 5; (g_168 != 6); g_168 = safe_add_func_int32_t_s_s(g_168, 6))
    {
        short *l_804 = &l_627;
        short **l_805 = &g_258;
        short ***l_808 = (void*)0;
        short ***l_809 = &l_806;
        short **l_811 = &l_804;
        short ***l_810 = &l_811;
        char l_812 = 0x52L;
        int *l_817 = &l_590;
        if ((*g_304))
            break;
        (*l_817) &= ((safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((((func_55(((*l_805) = l_804), (((*l_810) = ((*l_809) = l_806)) == &l_807), (*l_782), g_248) >= (l_812 < ((safe_sub_func_uint32_t_u_u(p_40, (((safe_rshift_func_int8_t_s_s(g_67, 5)) < 2L) < (*p_37)))) > 0xF8A94D58L))) ^ l_812) != 0xBC74L) & l_812), p_39)), p_40)), (-2L))), g_552)) < p_39);

        ;
        ;
        if (p_40)
        {
            return (*p_37);


        }
        else
        {
            int *l_820 = &l_531;
            (*l_782) = func_55(((*l_806) = (*l_806)), (*l_817), g_217, p_39);
            for (g_368 = 0; (g_368 != 1); g_368++)
            {
                unsigned l_821 = 0x90CB61BDL;
                (*p_38) = l_820;

                ;
                if ((**g_31))
                    break;
                return l_821;



            }


            return (*p_37);



        }
    }
    g_822 = ((*p_38) = (void*)0);

    ;
    ;
    for (l_599 = 14; (l_599 == (-24)); l_599 = safe_sub_func_uint32_t_u_u(l_599, 8))
    {
        short *l_853 = &l_739;
        int l_903 = 1L;
        int l_933 = 0x647758CCL;
        int l_953 = 0x30C53E9BL;
        unsigned *l_1037 = &g_248;
        (*l_386) = (-9L);
        for (g_49 = 0; (g_49 < 8); g_49 = safe_add_func_int8_t_s_s(g_49, 2))
        {
            unsigned l_843 = 0x2530089AL;
            int l_845 = 9L;
            int l_927 = 0xDB723AACL;
            int l_952 = 0x94080AEBL;
        }
        for (l_739 = 0; (l_739 != (-21)); --l_739)
        {
            char *l_1038 = &g_99;
            int l_1047 = 0x5DB08BDCL;
            l_933 &= ((((0L < (safe_mod_func_uint16_t_u_u((func_51(g_578, ((*l_1038) = ((void*)0 != l_1037)), p_40) < ((safe_div_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((*p_37) = (*l_782)), g_607)), (*l_386))), p_40)) <= (-9L)), 0xCCL)) != l_1047)), l_1047))) < (*l_386)) | 1L) == p_39);
        }
    }
    return (*p_37);
}







static int ** func_43(short * p_44, unsigned char p_45, int p_46, unsigned short p_47)
{
    int l_222 = (-9L);
    int l_237 = 0xA1EDCFEEL;
    int l_276 = 0x8D07ABCEL;
    int l_277 = 0x71A48C8DL;
    unsigned short *l_371 = &g_67;
    for (g_85 = 0; (g_85 > 0); g_85++)
    {
        int l_178 = (-7L);
        int l_186 = 0x14429F1CL;
        int l_188 = (-10L);
        int l_201 = 0xAC200E08L;
        int l_210 = 0x8EE3BABBL;
        int l_234 = 0xC96BA6EEL;
        int **l_282 = &g_32;
        for (g_33 = (-29); (g_33 > 5); g_33 = safe_add_func_uint16_t_u_u(g_33, 1))
        {
            int *l_175 = &g_176;
            int *l_177 = &g_176;
            int *l_179 = (void*)0;
            int *l_180 = &g_176;
            int *l_181 = &g_176;
            int *l_182 = &g_176;
            int *l_183 = &l_178;
            int *l_184 = (void*)0;
            int *l_185 = &g_176;
            int *l_187 = &g_176;
            int *l_189 = (void*)0;
            int *l_190 = &l_186;
            int *l_191 = (void*)0;
            int *l_192 = &l_188;
            int *l_193 = &l_188;
            int *l_194 = &g_176;
            int *l_195 = (void*)0;
            int *l_196 = (void*)0;
            int *l_197 = &l_178;
            int *l_198 = &l_186;
            int *l_199 = &l_186;
            int *l_200 = &l_186;
            int *l_202 = &l_186;
            int *l_203 = (void*)0;
            int *l_204 = &l_201;
            int l_205 = 0L;
            int *l_206 = &l_178;
            int *l_207 = &l_178;
            int *l_208 = &l_186;
            int *l_209 = &l_178;
            int *l_211 = &l_178;
            short l_212 = 0L;
            int *l_214 = &l_201;
            int *l_215 = (void*)0;
            int *l_218 = (void*)0;
            int l_219 = 0xC3DAD0BAL;
            int *l_220 = &l_219;
            int *l_223 = &l_219;
            int *l_224 = &l_178;
            int *l_225 = (void*)0;
            int *l_226 = &l_201;
            int *l_227 = &l_178;
            int *l_228 = &l_186;
            int *l_229 = (void*)0;
            int *l_230 = &l_222;
            int *l_231 = &l_222;
            int *l_232 = &l_219;
            int *l_233 = &l_219;
            int *l_235 = &l_222;
            int *l_236 = &g_176;
            int *l_238 = &l_178;
            int *l_239 = &g_176;
            int *l_240 = &l_219;
            int *l_241 = &l_219;
            int *l_242 = &l_188;
            int *l_243 = &l_178;
            int *l_244 = &l_237;
            int *l_245 = &l_222;
            int **l_265 = &l_208;
            unsigned l_270 = 0x6F037352L;
            g_248++;
            if (l_237)
            {
                unsigned short *l_253 = &g_67;
                (*l_224) = ((*l_202) = ((safe_rshift_func_uint16_t_u_u(g_33, ((*l_253)--))) | (!((p_47 > (p_46 <= 0x1999CB80L)) == (*l_226)))));
            }
            else
            {
                int ***l_264 = (void*)0;
                if ((((((g_258 = &g_49) == (void*)0) < func_51((safe_sub_func_int8_t_s_s((((((safe_unary_minus_func_uint16_t_u((safe_mod_func_uint32_t_u_u((((l_265 = (void*)0) != (void*)0) != (g_271 = (((safe_sub_func_uint8_t_u_u(l_201, (safe_lshift_func_int8_t_s_s((*l_238), (l_270 |= (l_222 || (-7L))))))) <= (0x7B453828L <= 1UL)) < (-5L)))), p_45)))) | g_248) == l_237) | p_47) > p_46), p_47)), p_46, g_168)) & g_85) ^ 0x39L))
                {
                    int *l_272 = &l_178;
                    int **l_273 = &l_209;
                    if (p_47)
                        break;
                    (*l_273) = l_272;
                    if (p_45)
                        break;
                }
                else
                {
                    for (l_188 = 10; (l_188 < 10); l_188++)
                    {
                        (*l_245) &= ((*l_197) = p_45);
                    }
                }

                ;
            }

            ;
            if (l_222)
                continue;
            ++g_279;
        }
        return l_282;


    }
    for (p_46 = 0; (p_46 <= (-13)); p_46--)
    {
        int *l_286 = &l_237;
        int l_313 = 0x994BCA52L;
        int l_332 = 1L;
        (*g_285) |= ((-9L) >= p_47);
        if (((*l_286) = l_222))
        {
            int **l_298 = &l_286;
            char *l_302 = &g_221;
            int *l_303 = (void*)0;
            int l_318 = 1L;
            short *l_352 = &g_49;
            int **l_354 = &g_32;
            ++g_287;
            (**l_298) = (safe_rshift_func_int16_t_s_s((*g_258), (((safe_div_func_uint32_t_u_u((l_276 & (+((safe_sub_func_int32_t_s_s((*l_286), (safe_sub_func_uint32_t_u_u((((g_299 = l_298) == &l_286) || (safe_sub_func_uint8_t_u_u(((l_237 >= ((*l_302) ^= l_237)) | 8L), 0xF8L))), 0x2808CFBFL)))) || 253UL))), 4294967287UL)) & 65535UL) != 0L)));

            ;
            (*g_304) |= ((*l_286) = (**l_298));
            if (l_276)
            {
                unsigned short *l_310 = &g_67;
                unsigned short **l_311 = &l_310;
                int l_312 = 8L;
                (**g_299) = (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(func_55(p_44, p_47, func_55(p_44, ((*l_286) ^= ((g_309 = &p_47) == ((*l_311) = l_310))), ((void*)0 == &g_304), l_312), g_67), 12)), l_313));

                ;
                l_318 ^= ((0xEA54L >= (safe_mod_func_uint8_t_u_u(func_51(g_42, l_312, (*g_258)), (safe_mod_func_int32_t_s_s((*g_304), g_49))))) | (**l_298));
            }
            else
            {
                unsigned l_329 = 0x0AB15693L;
                int ***l_333 = (void*)0;
                if (p_46)
                {
                    int ****l_334 = &l_333;
                    unsigned char l_339 = 0x48L;
                    int *l_340 = &g_176;
                    (*l_340) = ((*l_286) |= ((safe_div_func_int16_t_s_s((((*l_302) ^= ((l_276 != 1UL) & p_46)) & p_45), ((*g_258) &= (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(l_329, (safe_rshift_func_uint16_t_u_u(l_332, (((*l_334) = l_333) == &g_299))))), (safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(g_287, l_339)), p_46)))), p_45)), l_222))))) && 0xACDD564CL));
                    if (p_45)
                        continue;

                }
                else
                {
                    int l_347 = 0x2BC22F18L;
                    for (g_168 = 16; (g_168 == 14); g_168 = safe_sub_func_int8_t_s_s(g_168, 5))
                    {
                        unsigned *l_353 = &g_287;
                        (**l_298) |= l_277;
                        (**l_298) = (8L < (((*l_353) = (safe_add_func_int32_t_s_s(p_47, (l_347 != (((safe_sub_func_int32_t_s_s(p_45, 4294967292UL)) > l_276) < func_55(&g_49, (safe_sub_func_uint8_t_u_u(p_46, ((*l_302) = func_55(l_352, (*g_285), p_46, g_42)))), p_46, g_248)))))) < p_45));
                        if (p_46)
                            break;
                    }
                    (*g_299) = (*l_298);
                    if (p_45)
                        continue;

                    (*l_298) = (*l_298);
                }
                (**g_299) = (-4L);
                return l_354;




            }

            ;
        }
        else
        {
            short *l_367 = &g_368;
            (*l_286) = ((safe_sub_func_int16_t_s_s(((*l_367) &= ((safe_rshift_func_uint8_t_u_u(((-5L) && l_277), (func_51(p_45, p_46, (safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(p_46, p_46)) >= (l_222 ^= (*l_286))), (*l_286))) != ((*p_44) < (*p_44))), g_85)), 4))) >= (-8L)))) < l_237)), (*g_258))) <= (*g_258));
        }


        if (p_45)
            break;

    }


    ;
    l_276 ^= (func_51(func_51(((safe_lshift_func_int8_t_s_s(((&g_299 != &g_31) && ((void*)0 == &g_246)), ((void*)0 == l_371))) == (((*p_44) || (safe_add_func_uint8_t_u_u(l_237, ((((*g_309) = (safe_sub_func_uint32_t_u_u(((g_246 || l_222) <= (*g_258)), 0x165E9A02L))) > l_237) < 0xC788934BL)))) > l_222)), g_12, (*p_44)), g_12, l_277) <= l_277);
    return &g_32;



}







static int func_51(unsigned p_52, char p_53, short p_54)
{
    unsigned l_100 = 4294967295UL;
    int *l_101 = &g_85;
    int *l_102 = &g_33;
    int *l_103 = &g_85;
    int *l_104 = (void*)0;
    int *l_105 = &g_85;
    int *l_106 = (void*)0;
    int l_107 = 0xC6CE91E4L;
    int *l_108 = (void*)0;
    int *l_109 = (void*)0;
    int l_110 = 0x128C85C7L;
    int l_111 = 0xF72A6DD7L;
    int l_112 = 0L;
    int *l_113 = &g_33;
    int l_114 = (-1L);
    int *l_115 = (void*)0;
    int *l_116 = &g_33;
    int *l_117 = &l_107;
    int *l_118 = &g_33;
    int *l_119 = &l_114;
    int *l_120 = (void*)0;
    int *l_121 = &l_112;
    int l_122 = 0xF7F7A374L;
    int *l_123 = &g_85;
    int *l_124 = &l_112;
    int *l_125 = (void*)0;
    int *l_126 = &l_111;
    int *l_127 = &l_122;
    int *l_128 = &l_114;
    int *l_129 = &g_33;
    int *l_130 = &l_110;
    int *l_131 = &g_85;
    int *l_132 = (void*)0;
    int *l_133 = &g_33;
    int l_134 = (-9L);
    int *l_135 = &l_110;
    int *l_136 = &g_33;
    int *l_137 = &l_110;
    int *l_138 = &l_114;
    int *l_139 = (void*)0;
    int *l_140 = &l_107;
    int *l_141 = &l_111;
    int *l_142 = &l_110;
    int *l_143 = &l_110;
    int l_144 = (-6L);
    int *l_145 = &l_122;
    int *l_146 = &l_112;
    int *l_147 = &l_114;
    int *l_148 = &l_144;
    int *l_149 = (void*)0;
    int *l_150 = &l_111;
    int *l_151 = &l_144;
    int *l_152 = &l_134;
    int *l_153 = &l_134;
    int *l_154 = &l_134;
    int *l_155 = &l_112;
    int *l_156 = &g_33;
    int *l_157 = &l_122;
    int *l_158 = &g_85;
    int *l_159 = &l_111;
    int *l_160 = &l_110;
    int *l_161 = &l_111;
    int l_162 = 0x045B34FEL;
    int *l_163 = (void*)0;
    int *l_164 = (void*)0;
    int *l_165 = &l_111;
    int *l_166 = (void*)0;
    int *l_167 = &l_144;
    l_100 = (-9L);
    g_168++;
    return g_12;
}







static short func_55(short * p_56, int p_57, char p_58, unsigned p_59)
{
    int *l_96 = &g_85;
    (*g_68) = &p_57;

    ;
    (*g_32) = (**g_31);
    for (p_57 = 0; (p_57 <= 4); ++p_57)
    {
        char l_79 = 0xEAL;
        for (g_33 = 25; (g_33 <= 7); g_33 = safe_sub_func_int32_t_s_s(g_33, 1))
        {
            int *l_84 = &g_85;
            int **l_97 = &g_32;
            (*l_84) = ((safe_lshift_func_uint16_t_u_u(p_58, (g_67 & 0x43L))) && (p_58 > ((safe_rshift_func_uint16_t_u_s(l_79, 14)) <= (+(safe_rshift_func_uint16_t_u_s(p_59, (safe_sub_func_uint32_t_u_u(l_79, 0x1A2955E3L))))))));
            (*l_84) = (safe_sub_func_uint32_t_u_u(((*l_84) && (safe_rshift_func_int16_t_s_s(l_79, ((((((((*g_31) = (*g_31)) != (void*)0) <= (0UL & p_57)) | (safe_div_func_int8_t_s_s((-7L), 255UL))) & (!(safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(((void*)0 != p_56), g_42)), 3)))) == g_12) || p_57)))), g_85));
            (*l_97) = l_96;

            ;
        }

        ;
        return l_79;


    }
    return g_12;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_287, "g_287", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_410, "g_410", print_hash_value);
    transparent_crc(g_552, "g_552", print_hash_value);
    transparent_crc(g_578, "g_578", print_hash_value);
    transparent_crc(g_607, "g_607", print_hash_value);
    transparent_crc(g_693, "g_693", print_hash_value);
    transparent_crc(g_699, "g_699", print_hash_value);
    transparent_crc(g_775, "g_775", print_hash_value);
    transparent_crc(g_861, "g_861", print_hash_value);
    transparent_crc(g_958, "g_958", print_hash_value);
    transparent_crc(g_1009, "g_1009", print_hash_value);
    transparent_crc(g_1025, "g_1025", print_hash_value);
    transparent_crc(g_1758, "g_1758", print_hash_value);
    transparent_crc(g_1919, "g_1919", print_hash_value);
    transparent_crc(g_1974, "g_1974", print_hash_value);
    transparent_crc(g_2022, "g_2022", print_hash_value);
    transparent_crc(g_2260, "g_2260", print_hash_value);
    transparent_crc(g_2265, "g_2265", print_hash_value);
    transparent_crc(g_2271, "g_2271", print_hash_value);
    transparent_crc(g_2274, "g_2274", print_hash_value);
    transparent_crc(g_2275, "g_2275", print_hash_value);
    transparent_crc(g_2285, "g_2285", print_hash_value);
    transparent_crc(g_2406, "g_2406", print_hash_value);
    transparent_crc(g_2644, "g_2644", print_hash_value);
    transparent_crc(g_2648, "g_2648", print_hash_value);
    transparent_crc(g_2671, "g_2671", print_hash_value);
    transparent_crc(g_2672, "g_2672", print_hash_value);
    transparent_crc(g_2680, "g_2680", print_hash_value);
    transparent_crc(g_3102, "g_3102", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
