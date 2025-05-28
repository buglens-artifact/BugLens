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



static volatile int g_3 = 1L;
static volatile int g_4 = 2L;
static volatile int g_5 = 0xB57E8B72L;
static volatile int g_6 = (-5L);
static int g_7 = 0xEDC7555BL;
static int g_47[4] = {(-1L),(-1L),(-1L),(-1L)};
static int g_56 = 0x127420EAL;
static int g_63 = 0x4227F44FL;
static volatile int g_93 = 0xBB921586L;
static volatile int *g_92 = &g_93;
static volatile int **g_91 = &g_92;
static unsigned g_115 = 4294967295UL;
static unsigned char g_144[5] = {0x9CL,0x9CL,0x9CL,0x9CL,0x9CL};
static int *g_176 = &g_56;
static int **g_224 = &g_176;
static volatile int * volatile *g_277 = &g_92;
static unsigned g_278 = 4294967295UL;
static int *g_305 = &g_47[3];
static int *** volatile g_508 = &g_224;
static int *** volatile g_515 = &g_224;
static int *g_527 = &g_47[3];



static int func_1(void);
static int * func_8(int * p_9, short p_10, int * p_11, int p_12);
static int func_15(int * p_16, char p_17);
static int * func_18(int * p_19, int * p_20, int * p_21, unsigned short p_22);
static int * func_24(int p_25, int * p_26, short p_27, unsigned short p_28, char p_29);
static int * func_30(int * p_31, int p_32, int * p_33);
static int func_34(int * p_35, short p_36, int * p_37, int * p_38);
static int * func_39(char p_40, unsigned short p_41, int p_42, unsigned p_43, int * p_44);
static int * func_48(int * p_49, short p_50, int * p_51);
static unsigned short func_52(int * p_53);
static int func_1(void)
{
    int l_2[2][3][1];
    int *l_290 = &g_7;
    short l_503 = 0L;
    unsigned l_539 = 4294967295UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
                l_2[i][j][k] = (-7L);
        }
    }
    for (g_7 = 0; (g_7 >= 0); g_7 -= 1)
    {
        int *l_23 = (void*)0;
        int l_459 = 0xC5FE0DBDL;
        int **l_538 = &l_290;
        int *l_554 = &g_56;
    }
    (**g_91) = (((*l_290) >= (g_47[3] || (*l_290))) || (safe_lshift_func_int8_t_s_s((*l_290), 4)));
    (*g_527) = (safe_sub_func_uint32_t_u_u(g_5, func_34(l_290, (((void*)0 != &l_290) ^ (*l_290)), l_290, (*g_224))));
    (*g_305) = (safe_mod_func_int8_t_s_s((*l_290), ((g_278 & g_47[3]) && (g_63 > (*l_290)))));
    return g_6;
}







static int * func_8(int * p_9, short p_10, int * p_11, int p_12)
{
    unsigned short l_506 = 0x8113L;
    int *l_507 = &g_7;
    unsigned char l_526 = 246UL;
    int ***l_534[9];
    int i;
    for (i = 0; i < 9; i++)
        l_534[i] = (void*)0;
    if ((*p_11))
    {
        unsigned l_505 = 0x27E56094L;
        l_506 = ((0UL & (!(safe_unary_minus_func_uint8_t_u(3UL)))) <= l_505);
    }
    else
    {
        int *l_509 = &g_56;
        for (g_115 = 0; (g_115 <= 4); g_115 += 1)
        {
            int i;
            (*g_305) = (~g_144[g_115]);
            (*g_224) = l_507;
            (*g_508) = &g_176;
            (*g_305) = 0xD8D2CE39L;
        }
        l_509 = (void*)0;
    }
    if ((p_12 >= (p_10 | 0x5567L)))
    {
        short l_520 = 0L;
        int *l_524 = (void*)0;
        int l_525[1];
        int i;
        for (i = 0; i < 1; i++)
            l_525[i] = (-1L);
        for (g_278 = 5; (g_278 != 49); g_278 = safe_add_func_uint16_t_u_u(g_278, 8))
        {
            int *l_523 = &g_56;
            int *l_537 = (void*)0;
            for (p_10 = (-5); (p_10 != 20); p_10 = safe_add_func_uint32_t_u_u(p_10, 7))
            {
                for (g_63 = 4; (g_63 >= 0); g_63 -= 1)
                {
                    int **l_514 = &g_305;
                    (*g_515) = l_514;
                }
                for (g_63 = 0; (g_63 != 11); ++g_63)
                {
                    for (g_115 = 0; (g_115 > 56); g_115 = safe_add_func_int8_t_s_s(g_115, 6))
                    {
                        (*g_305) = (((*l_507) > g_63) != 0x4627L);
                    }
                    (*g_305) = (l_520 < (safe_rshift_func_uint8_t_u_u((~(~l_520)), g_115)));
                }
                return p_11;
            }
            (**g_515) = &l_525[0];
            if (func_34(l_507, l_526, p_9, (**g_508)))
            {
                l_525[0] = (*g_305);
                if ((*p_11))
                    continue;
            }
            else
            {
                char l_533[8];
                int i;
                for (i = 0; i < 8; i++)
                    l_533[i] = 4L;
                if ((*p_9))
                    break;
                for (g_56 = (-26); (g_56 < (-16)); g_56 = safe_add_func_int8_t_s_s(g_56, 2))
                {
                    short l_532 = 0x8D18L;
                    if (((l_532 >= (p_9 != (void*)0)) | (!(l_533[5] && ((l_534[0] != (void*)0) <= g_93)))))
                    {
                        (*g_527) = (*p_9);
                        (*g_224) = func_39(p_12, g_63, (*p_11), g_47[1], (**g_515));
                    }
                    else
                    {
                        (*g_277) = (*g_277);
                        (*g_305) = ((g_7 >= (*p_9)) & (((g_56 >= ((*g_515) == (void*)0)) ^ p_10) < g_144[1]));
                    }
                    for (l_520 = (-10); (l_520 <= 18); l_520++)
                    {
                        if (l_532)
                            break;
                        return l_537;
                    }
                    return p_11;
                }
            }
            (*g_305) = (*l_507);
        }
        (*g_224) = p_11;
        (*g_527) = (p_10 <= g_144[1]);
    }
    else
    {
        (*g_527) = (-2L);
    }
    return p_9;
}







static int func_15(int * p_16, char p_17)
{
    char l_465[5][6][8] = {{{(-2L),(-1L),0L,0x70L,(-1L),6L,2L,0x77L},{0x59L,0x28L,1L,(-1L),0x15L,0L,5L,0x56L},{(-4L),(-1L),0x75L,1L,0x8FL,0xDEL,(-1L),(-1L)},{2L,0xBFL,0x15L,0x15L,0xBFL,2L,(-2L),0x8FL},{0x8FL,6L,1L,0x42L,0x28L,0xA8L,0L,(-1L)},{(-2L),6L,0x42L,(-4L),0x56L,0x77L,(-2L),(-4L)}},{{1L,0x56L,0x6FL,0xDEL,(-2L),0x3AL,0x1FL,1L},{(-4L),1L,0xA5L,(-2L),0xA8L,0xA5L,0x28L,(-6L)},{0xADL,(-4L),0x77L,1L,0x56L,(-1L),0x53L,2L},{0x95L,0L,0x75L,1L,1L,1L,0x75L,0L},{(-4L),(-6L),0x83L,4L,1L,0xA5L,0x56L,0x75L},{0L,0x28L,(-3L),0x56L,(-4L),0xBFL,0x56L,(-2L)}},{{(-1L),0x56L,0x83L,0xA5L,(-7L),0L,0x75L,(-2L)},{(-7L),0L,0x75L,(-2L),0x6FL,0xA8L,0x53L,0x95L},{6L,2L,0x77L,(-7L),0x70L,(-4L),0x28L,(-2L)},{0L,0xADL,0xA5L,(-1L),0x15L,0x1FL,0x1FL,0x15L},{4L,0x6FL,0x6FL,4L,0L,0x9FL,0x56L,1L},{(-7L),0L,0x2BL,2L,0xADL,0x24L,0x28L,0x70L}},{{0xA8L,0L,(-1L),0L,(-2L),0x9FL,(-6L),(-2L)},{1L,1L,0xA8L,0x15L,0L,0L,0L,0L},{0x28L,(-7L),(-3L),(-2L),(-7L),(-1L),(-4L),4L},{0L,0x70L,(-1L),0x95L,0L,0x75L,1L,1L},{0x56L,0xDEL,0x9FL,(-2L),0x9FL,0xDEL,0x56L,0L},{(-7L),1L,(-6L),(-2L),0x15L,1L,6L,0L}},{{0x95L,2L,0x3AL,0x75L,0x15L,0x3AL,0x83L,(-2L)},{(-7L),0x95L,0xDEL,0L,0x9FL,0x83L,0xADL,0x1FL},{0x56L,0x28L,1L,2L,0L,7L,0x53L,0x28L},{0L,(-2L),0x1FL,(-6L),(-7L),0x3AL,0x9FL,0x53L},{0x28L,0x83L,0x75L,1L,(-1L),(-1L),0x95L,1L},{0x95L,0x95L,0x28L,1L,0L,0x70L,0xA8L,(-6L)}}};
    short l_479 = 0xE024L;
    int *l_491 = (void*)0;
    unsigned char l_498 = 254UL;
    short l_499[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
    int i, j, k;
    for (g_278 = 0; (g_278 <= 3); g_278 += 1)
    {
        int *l_464 = &g_7;
        for (g_115 = 1; (g_115 <= 4); g_115 += 1)
        {
            int i;
            g_47[g_278] = ((g_47[g_278] ^ func_52(p_16)) >= 2L);
            (*g_224) = func_39(((safe_lshift_func_uint8_t_u_u(g_144[g_115], (safe_add_func_uint8_t_u_u((((func_52(l_464) || g_144[g_115]) < ((*l_464) != (((((g_144[1] || (p_17 >= ((*l_464) & (l_465[2][4][4] | 0x79L)))) ^ g_4) ^ p_17) > l_465[2][4][4]) | g_144[g_115]))) >= g_144[g_115]), g_7)))) > g_144[g_115]), l_465[2][4][4], (*g_305), p_17, p_16);
        }
        for (g_115 = 0; (g_115 <= 4); g_115 += 1)
        {
            for (g_63 = 3; (g_63 >= 0); g_63 -= 1)
            {
                int ***l_470 = &g_224;
                int i;
            }
            (*g_224) = p_16;
            for (g_56 = 0; (g_56 <= 4); g_56 += 1)
            {
                (*g_224) = l_464;
                (*g_224) = (void*)0;
            }
            (*g_305) = (*g_305);
        }
    }
    (*p_16) = (((safe_sub_func_uint32_t_u_u((((g_93 == ((g_63 || (safe_sub_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(g_144[2], l_479)), (safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(l_465[2][4][4])), (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u(((safe_sub_func_int8_t_s_s(((+p_17) && (l_491 != (void*)0)), (safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((p_17 <= 0L) != (*p_16)), g_47[3])), p_17)))) >= l_498), 1)), g_47[2])) <= g_144[1]), g_56)))))) & 0xE0L), l_499[8]))) == (*g_305))) < g_47[2]) > 0xB5B2F309L), l_479)) && 0x46277B2AL) && g_63);
    for (g_278 = 27; (g_278 != 33); g_278 = safe_add_func_uint16_t_u_u(g_278, 3))
    {
        char l_502 = 0x01L;
        if (l_502)
            break;
        (*g_305) = l_502;
        if ((*p_16))
            continue;
        for (l_498 = 0; (l_498 <= 4); l_498 += 1)
        {
            return (*p_16);
        }
    }
    return (*p_16);
}







static int * func_18(int * p_19, int * p_20, int * p_21, unsigned short p_22)
{
    unsigned l_431[9] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
    int ***l_432 = (void*)0;
    int i;
    (*g_305) = ((l_431[0] != ((&g_91 != l_432) && l_431[5])) | (safe_lshift_func_uint16_t_u_u(((0x45F7L || 0x9768L) != (l_431[2] != (safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((65535UL && g_6), g_278)), l_431[6])), 0xA2EEADA1L)))), 10)));
    for (g_115 = (-27); (g_115 > 40); g_115 = safe_add_func_uint8_t_u_u(g_115, 1))
    {
        int *l_443 = (void*)0;
        int ***l_458 = &g_224;
        (*p_20) = (*p_21);
        if ((*g_305))
        {
            (*g_224) = l_443;
        }
        else
        {
            volatile int *l_444 = (void*)0;
            int l_453 = 0x8681D0E4L;
            l_444 = (*g_91);
            (*g_305) = (safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((safe_mod_func_int8_t_s_s((2UL < ((safe_mod_func_int16_t_s_s((g_93 >= l_453), p_22)) < (safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(g_278, 247UL)), 1)))), l_453)) | 0xDF48L), (l_432 == l_458))), l_453));
            if ((*p_20))
                break;
        }
    }
    return &g_63;
}







static int * func_24(int p_25, int * p_26, short p_27, unsigned short p_28, char p_29)
{
    int *l_423 = &g_7;
    int *l_430 = &g_56;
    for (g_278 = 0; (g_278 <= 4); g_278 += 1)
    {
        for (p_27 = 0; (p_27 <= 4); p_27 += 1)
        {
            int i;
            (*g_224) = l_423;
            if (g_144[p_27])
                break;
        }
        (*g_305) = (l_423 != l_423);
        for (p_29 = 4; (p_29 >= 1); p_29 -= 1)
        {
            (*g_224) = &p_25;
        }
    }
    (*g_305) = (safe_lshift_func_uint16_t_u_u((((*g_91) != (*g_277)) >= ((safe_rshift_func_uint16_t_u_u(1UL, (*l_423))) || (safe_mul_func_uint16_t_u_u((*l_423), 1L)))), ((l_430 != (*g_91)) >= (*l_423))));
    for (g_115 = 0; (g_115 <= 3); g_115 += 1)
    {
        (*g_224) = &p_25;
    }
    (*g_277) = (*g_277);
    return l_430;
}







static int * func_30(int * p_31, int p_32, int * p_33)
{
    char l_291 = 0x91L;
    int ***l_294 = &g_224;
    int l_295 = 0x3D80906FL;
    unsigned short l_329 = 65535UL;
    char l_347 = 5L;
    unsigned l_349 = 1UL;
    int *l_422 = &g_47[3];
    l_291 = 0L;
    l_295 = (safe_rshift_func_uint16_t_u_u((l_294 == l_294), 15));
    p_32 = (*p_33);
    if ((safe_mul_func_int16_t_s_s(((p_32 || g_144[2]) == 9L), (safe_add_func_int32_t_s_s((*p_31), (safe_mul_func_int8_t_s_s((~g_63), p_32)))))))
    {
        unsigned l_302 = 0x85BE0A6FL;
        int *l_306 = &g_7;
        if (l_302)
        {
            unsigned l_307[2][1][6] = {{{4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL}},{{4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL}}};
            int *l_308[3][10][8] = {{{&g_47[3],&g_63,(void*)0,&g_56,&g_47[3],&l_295,&g_56,&g_47[3]},{(void*)0,(void*)0,&g_47[3],&g_56,&g_47[3],(void*)0,(void*)0,&g_47[3]},{(void*)0,&g_47[3],(void*)0,(void*)0,&l_295,&g_47[3],&g_47[1],&g_47[3]},{&g_56,(void*)0,&g_47[3],&l_295,&l_295,&g_47[3],(void*)0,&g_56},{(void*)0,&g_56,(void*)0,&g_47[3],&g_47[3],(void*)0,(void*)0,&g_63},{(void*)0,&g_56,&g_7,(void*)0,&g_47[3],(void*)0,&g_7,&g_56},{&g_47[3],&g_56,&g_63,&l_295,(void*)0,&g_47[3],&g_47[3],(void*)0},{(void*)0,&g_63,&g_7,&g_47[3],&l_295,&l_295,&g_47[3],&g_7},{&g_47[3],&g_47[3],&g_47[1],&g_47[3],&l_295,(void*)0,(void*)0,&g_47[3]},{&l_295,(void*)0,(void*)0,&g_47[3],(void*)0,&g_7,(void*)0,&g_47[3]}},{{(void*)0,&g_47[1],(void*)0,&g_47[3],(void*)0,(void*)0,&g_63,&g_7},{&g_56,&g_47[3],&g_47[3],&g_47[3],(void*)0,(void*)0,(void*)0,(void*)0},{&g_56,(void*)0,(void*)0,&g_56,(void*)0,&g_47[3],&g_47[3],(void*)0},{(void*)0,&g_56,&g_47[3],&g_63,(void*)0,&g_47[1],(void*)0,&g_47[1]},{&l_295,&g_56,&g_47[3],&g_56,&l_295,&g_47[3],&g_56,(void*)0},{&g_47[3],(void*)0,&l_295,&g_7,&l_295,(void*)0,&g_56,&g_56},{(void*)0,&g_47[3],&l_295,&l_295,&g_47[3],(void*)0,&g_56,&l_295},{&l_295,&g_47[1],&g_47[3],(void*)0,&g_56,&g_7,(void*)0,&g_47[3]},{&g_47[3],(void*)0,&g_47[3],(void*)0,(void*)0,&g_47[1],&g_56,&g_47[3]},{(void*)0,(void*)0,&g_7,(void*)0,(void*)0,&g_47[3],&g_63,&g_47[3]}},{{&l_295,&g_56,(void*)0,(void*)0,(void*)0,(void*)0,&g_56,&l_295},{(void*)0,&l_295,&g_47[1],&g_47[3],(void*)0,&g_56,&g_7,(void*)0},{&g_56,&g_47[3],&l_295,&g_56,&g_47[3],&g_56,&l_295,&g_47[3]},{&g_47[3],&l_295,(void*)0,&g_47[3],(void*)0,(void*)0,(void*)0,&l_295},{&g_47[3],&g_56,(void*)0,(void*)0,&g_47[3],&g_47[3],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_47[1],&l_295,&g_56},{(void*)0,&g_47[1],&l_295,&g_56,&g_7,(void*)0,&g_7,&g_56},{&g_47[1],(void*)0,&g_47[1],(void*)0,&g_63,&g_47[3],&g_56,(void*)0},{&g_47[3],(void*)0,(void*)0,(void*)0,&l_295,&g_63,&g_63,&l_295},{&g_47[3],&g_7,&g_7,&g_47[3],&g_63,(void*)0,&g_56,&g_47[3]}}};
            int i, j, k;
            (**l_294) = func_39(p_32, (g_47[0] || (safe_add_func_uint32_t_u_u(l_307[0][0][4], p_32))), (*l_306), l_307[0][0][4], l_308[1][8][7]);
            (*g_305) = (((~((((!g_47[2]) & (((void*)0 == &g_305) <= 0xFDL)) & (safe_mod_func_uint8_t_u_u(0x0AL, (safe_mul_func_uint8_t_u_u(p_32, p_32))))) > g_47[0])) || 0UL) || g_144[1]);
        }
        else
        {
            unsigned l_321 = 0x02A46C8FL;
            int *l_330 = (void*)0;
            unsigned l_402 = 0x5898BE5BL;
            int *l_412 = &g_56;
            for (l_295 = 0; (l_295 < (-18)); l_295 = safe_sub_func_uint16_t_u_u(l_295, 1))
            {
                (**l_294) = &p_32;
                (*g_91) = (void*)0;
                for (g_278 = 0; (g_278 <= 4); g_278 += 1)
                {
                    int i;
                    for (l_302 = 0; (l_302 <= 4); l_302 += 1)
                    {
                        (*g_305) = 0x9F427DD3L;
                    }
                    (**g_224) = (safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(0x83E223C0L, (g_144[g_278] | (~(((&g_176 != (void*)0) ^ ((***l_294) & func_52(l_306))) <= g_7))))), g_47[3]));
                    if ((***l_294))
                        continue;
                }
                (***l_294) = 0x27362A58L;
            }
            for (g_278 = (-21); (g_278 != 19); ++g_278)
            {
                (*g_305) = (l_321 | 0xB6FF6255L);
            }
            (*g_305) = (*g_305);
            if ((safe_mul_func_int8_t_s_s((*l_306), 0xA0L)))
            {
                unsigned short l_326 = 0x735EL;
                int *l_338 = &l_295;
                for (l_295 = 0; (l_295 <= 3); l_295 += 1)
                {
                    int i;
                    if (g_47[l_295])
                    {
                        short l_327 = 9L;
                        unsigned l_328[6] = {0xD0E820FAL,0xD404AAF1L,0xD0E820FAL,0xD0E820FAL,0xD404AAF1L,0xD0E820FAL};
                        int i;
                        g_47[l_295] = (safe_rshift_func_int16_t_s_u((g_7 <= (!(l_326 || l_321))), l_327));
                        if (l_328[4])
                            break;
                        if ((*p_33))
                            continue;
                        (**l_294) = l_330;
                    }
                    else
                    {
                        unsigned short l_335[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_335[i] = 65526UL;
                        (**l_294) = &p_32;
                    }
                    for (l_321 = 0; (l_321 <= 3); l_321 += 1)
                    {
                        return l_330;
                    }
                    if ((func_52(l_306) < (*p_33)))
                    {
                        if ((*p_33))
                            break;
                        if ((*g_305))
                            continue;
                    }
                    else
                    {
                        if ((*p_31))
                            break;
                        (*g_224) = (*g_224);
                    }
                }
                (*g_91) = (*g_91);
                if ((safe_sub_func_uint8_t_u_u(((*l_306) | p_32), (-5L))))
                {
                    return l_330;
                }
                else
                {
                    unsigned short l_348 = 0UL;
                    int l_365 = (-1L);
                    for (l_291 = 3; (l_291 >= 0); l_291 -= 1)
                    {
                        int i;
                        (*g_305) = (-1L);
                        (*l_338) = ((safe_add_func_int16_t_s_s(g_144[l_291], (safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(((0xBAA1L | ((safe_sub_func_uint32_t_u_u((g_278 || g_47[3]), (*g_305))) & g_278)) | p_32), g_56)), l_349)))) && p_32);
                    }
                    for (g_56 = 0; (g_56 != (-5)); g_56--)
                    {
                        unsigned short l_364[8][5][3] = {{{0x2861L,0UL,65532UL},{0xAE2BL,0UL,1UL},{0x7984L,4UL,1UL},{65529UL,0xBE7AL,0x2861L},{6UL,0x70C4L,65534UL}},{{0x5445L,65532UL,65527UL},{0x0B66L,0UL,0x0B66L},{0x7984L,0x3B6BL,0x3DC4L},{0xBE7AL,0x394DL,0x5445L},{1UL,65534UL,0x5F18L}},{{4UL,65535UL,65527UL},{1UL,0UL,0xAE2BL},{0xBE7AL,3UL,0x0EDCL},{0x7984L,0x9C42L,4UL},{0x0B66L,65534UL,0x2861L}},{{0x5445L,0xA895L,65532UL},{6UL,65532UL,4UL},{65529UL,0x292EL,0xC740L},{0x7984L,0xE01DL,0x5445L},{0xAE2BL,0x70C4L,0x5445L}},{{0x2861L,0x4811L,0xC740L},{0UL,65535UL,4UL},{0xA7E6L,3UL,65532UL},{0xBE7AL,0x7984L,0x2861L},{4UL,4UL,4UL}},{{0x5F18L,0x4811L,0x0EDCL},{6UL,0xA895L,0xAE2BL},{0x5849L,0x3B6BL,65527UL},{65529UL,0x9CCCL,0x5F18L},{4UL,0x3B6BL,0x5445L}},{{65534UL,0xA895L,0x3DC4L},{65534UL,1UL,0x2861L},{65532UL,0xE01DL,0x0B66L},{0UL,7UL,0x9C42L},{4UL,65529UL,4UL}},{{65529UL,0xF27FL,0xBEB6L},{0x2861L,1UL,65534UL},{0xA895L,0x9CCCL,0UL},{0xA895L,1UL,65529UL},{0x2861L,0x067EL,0xA7E6L}}};
                        unsigned short l_378 = 0xC77AL;
                        int i, j, k;
                        l_365 = (safe_sub_func_uint16_t_u_u(65532UL, ((safe_rshift_func_uint16_t_u_s((((safe_sub_func_uint16_t_u_u((0xA4L | (&g_305 != (void*)0)), (safe_mul_func_uint16_t_u_u(0UL, (*l_338))))) ^ ((~0x31L) >= (safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((~(*l_306)), ((*p_31) > 0UL))), (*l_338))))) & p_32), 11)) & l_364[4][4][2])));
                        (*g_305) = (((safe_mul_func_uint8_t_u_u(((~(safe_mul_func_uint16_t_u_u((65535UL && (((p_32 | (safe_add_func_int16_t_s_s((p_32 && p_32), (0xD645L != 0xAD08L)))) ^ g_47[2]) == p_32)), ((safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u(p_32, 7)) ^ p_32), 0x686D26AEL)), l_348)) && l_378)))) ^ 0xA9A1L), p_32)) < 0xB8L) || g_56);
                    }
                }
                (**l_294) = l_330;
            }
            else
            {
                unsigned l_387[9][5][5];
                int *l_411 = (void*)0;
                int i, j, k;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 5; j++)
                    {
                        for (k = 0; k < 5; k++)
                            l_387[i][j][k] = 0xB146E38BL;
                    }
                }
                (*g_305) = (*p_31);
                if ((safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s(l_387[5][2][4], ((+((safe_mul_func_int8_t_s_s(p_32, (safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(l_387[5][2][4], 9)), p_32)))) && (l_387[6][0][0] ^ (p_32 > ((safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u(0x27DCL, (safe_add_func_int32_t_s_s((*p_33), 0x9A0E5906L)))) && 0x83EB4B96L), g_7)), 0x3DL)) && 0x72L))))) < 0UL))), l_402)), 0UL)), (*p_33))))
                {
                    int l_408 = 0x43AD8D63L;
                    for (g_278 = 7; (g_278 > 9); g_278 = safe_add_func_int32_t_s_s(g_278, 1))
                    {
                        int *l_405[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_405[i] = &g_47[0];
                        (**l_294) = l_405[1];
                    }
                    (*g_305) = ((safe_mul_func_int16_t_s_s(l_408, (p_32 == func_52(l_306)))) == 0xCD7436B8L);
                }
                else
                {
                    for (l_302 = 0; (l_302 <= 4); l_302 += 1)
                    {
                        (*g_305) = ((-2L) > g_63);
                        (*g_305) = (*p_31);
                    }
                    for (l_329 = 0; (l_329 == 47); l_329 = safe_add_func_int16_t_s_s(l_329, 2))
                    {
                        return l_411;
                    }
                    (*g_224) = l_412;
                }
                (*l_412) = (l_411 == (*g_224));
                return l_330;
            }
        }
    }
    else
    {
        char l_417 = 0x23L;
        (*g_305) = (~(safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(g_63, l_417)), (safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((p_32 || g_47[3]) != l_417), l_291)), p_32)))));
        l_422 = &p_32;
    }
    return (**l_294);
}







static int func_34(int * p_35, short p_36, int * p_37, int * p_38)
{
    int *l_46 = &g_47[3];
    int *l_266 = (void*)0;
    int l_289 = (-5L);
    (*l_46) = g_7;
    (*g_224) = func_48(func_39(((l_46 != p_37) && (g_47[3] != func_52(l_46))), g_47[1], ((safe_rshift_func_int16_t_s_s((*l_46), (&l_46 == (void*)0))) ^ p_36), p_36, l_46), g_7, l_46);
    for (p_36 = 13; (p_36 <= (-16)); --p_36)
    {
        int l_242 = (-1L);
        int **l_256 = &g_176;
        (*g_224) = (void*)0;
        for (g_63 = 0; (g_63 == (-22)); g_63--)
        {
            unsigned l_253 = 0UL;
            for (g_115 = 0; (g_115 <= 3); g_115 += 1)
            {
                int i;
                g_47[g_115] = ((safe_add_func_int16_t_s_s(g_47[g_115], (((safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(l_242, 1)), (g_144[4] & 0x16L))), (*l_46))) <= (((7UL >= (safe_mul_func_int8_t_s_s(p_36, g_63))) != g_56) ^ g_47[1])) < g_47[3]))) || g_47[0]);
                if ((*p_35))
                    break;
                for (l_242 = 0; (l_242 <= 4); l_242 += 1)
                {
                    int i;
                    return g_144[(g_115 + 1)];
                }
                for (l_242 = 0; (l_242 >= (-1)); l_242 = safe_sub_func_uint8_t_u_u(l_242, 7))
                {
                    int ***l_259 = &l_256;
                    if ((safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(l_253, 13)), (((safe_add_func_uint16_t_u_u(((&g_92 == l_256) < (safe_sub_func_uint8_t_u_u((p_36 || ((l_259 != &g_91) == ((safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((p_36 | 0L), g_56)), (*l_46))), (*l_46))) == 0L))), 0x4CL))), 65528UL)) & 1UL) != l_253))), p_36)))
                    {
                        (**l_259) = (*g_224);
                        (*g_224) = (*g_224);
                    }
                    else
                    {
                        (*g_224) = l_46;
                        (*l_256) = l_266;
                        return l_242;
                    }
                    (*l_46) = (*p_35);
                    if ((safe_add_func_int16_t_s_s((0x9B3DL && ((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(g_63, (l_253 == g_47[3]))), (p_36 | p_36))) & 6L)), 9UL)))
                    {
                        unsigned l_273 = 0UL;
                        int *l_274 = &g_47[3];
                        l_274 = func_39(l_253, (((0x7E6CL < ((g_7 & ((3UL || 0xE4ACL) & 7UL)) | p_36)) ^ 0x3EL) & ((0xA6L & 4L) ^ g_63)), l_273, p_36, p_35);
                    }
                    else
                    {
                        return (*p_38);
                    }
                }
            }
            (*l_46) = (+(((void*)0 == (*g_91)) <= (((p_36 || g_47[3]) != (safe_add_func_uint32_t_u_u(((void*)0 == g_277), (((g_278 & g_63) & g_144[0]) == p_36)))) || 0xB7L)));
            (*l_46) = (g_56 && 255UL);
        }
        for (l_242 = (-1); (l_242 != 9); ++l_242)
        {
            (*g_224) = l_266;
        }
        if ((*l_46))
            continue;
    }
    (*l_46) = (safe_lshift_func_uint16_t_u_s(((&p_35 == &p_35) == (&g_176 == &l_46)), (((g_63 == (*l_46)) & ((safe_rshift_func_int16_t_s_s(((void*)0 == &p_38), 7)) < ((safe_rshift_func_int8_t_s_s(((((*p_38) && (*l_46)) && l_289) <= p_36), g_278)) != (*l_46)))) || g_47[3])));
    return (*l_46);
}







static int * func_39(char p_40, unsigned short p_41, int p_42, unsigned p_43, int * p_44)
{
    int *l_45 = &g_7;
    return l_45;
}







static int * func_48(int * p_49, short p_50, int * p_51)
{
    unsigned l_108[10][9][2] = {{{4294967287UL,4294967287UL},{1UL,4294967288UL},{4294967295UL,0x84F8C038L},{0x475ADB6EL,0xE17DD59EL},{0x721E4501L,4294967287UL},{0xABC748E3L,0xABC748E3L},{1UL,1UL},{0UL,4294967292UL},{0UL,1UL}},{{0x50BF12BFL,0UL},{0x84F8C038L,8UL},{0x84F8C038L,0UL},{0x50BF12BFL,1UL},{0UL,4294967292UL},{0UL,1UL},{1UL,0xABC748E3L},{0xABC748E3L,4294967287UL},{0x721E4501L,0xE17DD59EL}},{{0x475ADB6EL,0x84F8C038L},{4294967295UL,4294967288UL},{1UL,4294967287UL},{4294967287UL,0x7A87E153L},{4294967288UL,0x7A87E153L},{4294967287UL,4294967287UL},{1UL,4294967288UL},{4294967295UL,0x84F8C038L},{0x475ADB6EL,0xE17DD59EL}},{{0x721E4501L,4294967287UL},{0xABC748E3L,0xABC748E3L},{1UL,1UL},{0UL,4294967292UL},{0UL,1UL},{0x50BF12BFL,0UL},{0x84F8C038L,8UL},{0x84F8C038L,0xE17DD59EL},{0x977ACE7FL,0x7A87E153L}},{{0xE17DD59EL,0x921D28FFL},{4294967292UL,0x84F8C038L},{0x97626F05L,1UL},{1UL,1UL},{1UL,0x475ADB6EL},{0UL,0x50BF12BFL},{8UL,0x721E4501L},{0x84F8C038L,0xE36C3AAFL},{1UL,4294967287UL}},{{0x721E4501L,4294967287UL},{1UL,0xE36C3AAFL},{0x84F8C038L,0x721E4501L},{8UL,0x50BF12BFL},{0UL,0x475ADB6EL},{1UL,1UL},{1UL,1UL},{0x97626F05L,0x84F8C038L},{4294967292UL,0x921D28FFL}},{{0xE17DD59EL,0x7A87E153L},{0x977ACE7FL,0xE17DD59EL},{0x50BF12BFL,0xABC748E3L},{0x50BF12BFL,0xE17DD59EL},{0x977ACE7FL,0x7A87E153L},{0xE17DD59EL,0x921D28FFL},{4294967292UL,0x84F8C038L},{0x97626F05L,1UL},{1UL,1UL}},{{1UL,0x475ADB6EL},{0UL,0x50BF12BFL},{8UL,0x721E4501L},{0x84F8C038L,0xE36C3AAFL},{1UL,4294967287UL},{0x721E4501L,4294967287UL},{1UL,0xE36C3AAFL},{0x84F8C038L,0x721E4501L},{8UL,0x50BF12BFL}},{{0UL,0x475ADB6EL},{1UL,1UL},{1UL,1UL},{0x97626F05L,0x84F8C038L},{4294967292UL,0x921D28FFL},{0xE17DD59EL,0x7A87E153L},{0x977ACE7FL,0xE17DD59EL},{0x50BF12BFL,0xABC748E3L},{0x50BF12BFL,0xE17DD59EL}},{{0x977ACE7FL,0x7A87E153L},{4294967295UL,0x7A87E153L},{1UL,4294967287UL},{4294967288UL,0x977ACE7FL},{0x977ACE7FL,0xE36C3AAFL},{0x921D28FFL,8UL},{0xABC748E3L,1UL},{0x84F8C038L,4294967292UL},{4294967287UL,0x475ADB6EL}}};
    unsigned char l_123 = 0UL;
    short l_132 = 0xFE13L;
    int l_172 = 0xAD8C2D90L;
    int *l_173 = &g_63;
    short l_181 = 0x68ACL;
    int *l_229 = &g_47[3];
    int i, j, k;
    if ((((p_50 | ((!g_56) >= ((p_50 & (safe_mod_func_int16_t_s_s(l_108[3][8][0], l_108[4][2][1]))) && g_7))) <= 0x7896L) && ((*p_51) >= p_50)))
    {
        short l_122 = 9L;
        int *l_126 = &g_63;
        unsigned short l_131 = 0xDA10L;
        int *l_184 = &g_47[1];
        unsigned l_222 = 0x0C64B01CL;
        (*p_51) = (safe_mul_func_uint16_t_u_u((p_50 <= (safe_add_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(g_115, l_108[9][7][1])) <= (safe_sub_func_int32_t_s_s(g_63, (*p_49)))), (((safe_rshift_func_int8_t_s_s((~g_63), p_50)) | (safe_add_func_uint16_t_u_u(l_122, (1UL != l_108[3][8][0])))) & l_123)))), l_122));
        p_49 = func_39((((((0xECED6D97L || (func_52(l_126) != (safe_rshift_func_uint8_t_u_s(g_115, 2)))) & l_108[3][8][0]) ^ (4294967295UL >= l_108[3][8][0])) > ((((safe_mod_func_int8_t_s_s(1L, g_7)) != g_7) >= g_7) ^ l_131)) >= l_132), g_7, (*p_51), g_47[3], &g_47[3]);
        (*l_126) = (!(g_115 | p_50));
        for (l_123 = 0; (l_123 <= 1); l_123 += 1)
        {
            unsigned l_136 = 0xD8327704L;
            int *l_153[5];
            int i;
            for (i = 0; i < 5; i++)
                l_153[i] = &g_56;
            for (l_132 = 0; (l_132 <= 1); l_132 += 1)
            {
                int l_141 = (-1L);
                int *l_166 = &g_56;
                int **l_174 = (void*)0;
                int **l_175[5][1];
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_175[i][j] = &l_166;
                }
                if ((p_50 >= ((safe_unary_minus_func_int32_t_s(l_136)) || ((((l_108[5][7][1] >= 4294967295UL) || (safe_mul_func_int8_t_s_s((p_49 != p_49), func_52(&g_56)))) | (safe_mul_func_uint16_t_u_u((((p_50 != g_47[2]) && 1UL) != p_50), l_141))) < 0xAC8F595BL))))
                {
                    for (l_136 = 0; (l_136 <= 1); l_136 += 1)
                    {
                        int i, j, k;
                        if (l_108[(l_123 + 8)][(l_136 + 6)][l_136])
                            break;
                    }
                }
                else
                {
                    short l_146[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_146[i] = (-1L);
                    for (p_50 = 1; (p_50 >= 0); p_50 -= 1)
                    {
                        int **l_145 = &l_126;
                        int i, j, k;
                        (*l_145) = func_39(l_108[(l_123 + 5)][(l_123 + 2)][l_123], (safe_rshift_func_int16_t_s_s((l_108[(l_123 + 8)][(p_50 + 5)][p_50] ^ p_50), 8)), g_144[1], g_56, &g_47[3]);
                        p_51 = func_39(g_115, (((func_52(l_126) && l_146[4]) > (safe_rshift_func_uint16_t_u_u(g_144[1], g_47[3]))) != (safe_add_func_uint16_t_u_u(p_50, ((*p_51) <= (safe_mul_func_uint8_t_u_u(l_108[3][8][0], l_136)))))), g_144[1], l_141, (*l_145));
                        g_56 = g_144[0];
                    }
                    (*g_91) = (*g_91);
                    return l_153[1];
                }
                if ((safe_rshift_func_uint8_t_u_u(0x9DL, 2)))
                {
                    volatile int ***l_156 = (void*)0;
                    volatile int ***l_157 = &g_91;
                    int **l_164 = (void*)0;
                    int **l_165 = &l_153[3];
                    (*l_157) = &g_92;
                    (*l_165) = func_39(((p_50 > (safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(func_52(func_39((safe_lshift_func_uint16_t_u_s(((l_141 ^ g_47[0]) || g_115), l_132)), g_7, (p_50 && (((void*)0 == &p_51) >= p_50)), p_50, &g_56)), l_132)), 12))) != 65528UL), p_50, l_141, g_47[3], &g_47[3]);
                    for (l_131 = 0; (l_131 <= 1); l_131 += 1)
                    {
                        return l_166;
                    }
                }
                else
                {
                    int **l_167 = &l_166;
                    (*l_167) = l_126;
                    (*g_91) = (*g_91);
                    for (l_136 = 0; (l_136 <= 4); l_136 += 1)
                    {
                        int i, j, k;
                        (*g_91) = (*g_91);
                        (*l_167) = func_39(func_52(&g_63), l_108[(l_123 + 6)][(l_123 + 6)][l_132], ((safe_add_func_uint16_t_u_u((g_144[l_136] <= ((safe_sub_func_uint32_t_u_u(g_144[(l_123 + 1)], (l_108[3][8][0] || l_172))) == p_50)), (((l_108[(l_123 + 6)][(l_123 + 6)][l_132] & l_108[(l_123 + 6)][(l_123 + 6)][l_132]) <= p_50) < g_47[3]))) > 65535UL), g_47[3], p_49);
                    }
                }
                g_176 = l_173;
                (*g_176) = (safe_unary_minus_func_uint16_t_u(p_50));
                for (g_56 = 0; (g_56 <= 1); g_56 += 1)
                {
                    int i, j, k;
                    if (l_108[(l_123 + 5)][(l_123 + 1)][g_56])
                        break;
                    if (((void*)0 == p_51))
                    {
                        (*g_91) = (*g_91);
                        (*g_176) = (*g_176);
                        (*g_91) = (void*)0;
                    }
                    else
                    {
                        unsigned l_178 = 4UL;
                        (*g_176) = (l_178 | (safe_add_func_uint32_t_u_u(((g_47[3] | 0xBB4F55ACL) > (*g_176)), (*g_176))));
                        p_51 = func_39(p_50, (~((g_144[3] == (0x6E377ABBL != (l_126 == p_51))) != (l_181 | g_47[0]))), (*g_176), g_56, p_51);
                    }
                    if ((~(!(*p_51))))
                    {
                        (*g_91) = (*g_91);
                    }
                    else
                    {
                        (*g_176) = (((((p_50 | (((safe_mod_func_uint8_t_u_u(((+(*g_176)) | ((-1L) || g_7)), 0x88L)) < p_50) == (g_56 ^ g_63))) || p_50) <= p_50) | g_47[0]) && 0x0AL);
                        p_49 = l_184;
                        l_173 = p_49;
                        return p_51;
                    }
                    for (l_172 = 0; (l_172 <= 1); l_172 += 1)
                    {
                        (*g_91) = (void*)0;
                        (*g_91) = (*g_91);
                        l_153[1] = (void*)0;
                    }
                }
            }
            (*g_91) = (*g_91);
            (*g_176) = ((safe_mod_func_uint32_t_u_u((*l_173), (safe_mul_func_uint16_t_u_u(g_7, (safe_add_func_int8_t_s_s(((*g_91) != l_184), (safe_add_func_int32_t_s_s((*l_173), (safe_lshift_func_int16_t_s_s(p_50, 11)))))))))) <= ((void*)0 == l_153[1]));
            for (l_172 = 1; (l_172 >= 0); l_172 -= 1)
            {
                int *l_195 = &g_56;
                int **l_216[7];
                int ***l_215[1][8] = {{(void*)0,&l_216[5],(void*)0,&l_216[5],(void*)0,&l_216[5],(void*)0,&l_216[5]}};
                int i, j;
                for (i = 0; i < 7; i++)
                    l_216[i] = &l_195;
            }
        }
    }
    else
    {
        (*l_173) = (p_51 == l_173);
        (*g_224) = l_173;
        (*g_224) = p_51;
    }
    return l_229;
}







static unsigned short func_52(int * p_53)
{
    int *l_54 = (void*)0;
    int *l_55 = &g_56;
    int **l_85 = &l_55;
    unsigned l_99[1];
    int i;
    for (i = 0; i < 1; i++)
        l_99[i] = 4294967295UL;
    (*l_55) = g_47[3];
    if ((g_47[3] ^ (safe_mul_func_uint8_t_u_u(((*l_55) && (*l_55)), g_56))))
    {
        unsigned short l_66[1];
        int *l_74 = (void*)0;
        unsigned l_75[9] = {4294967290UL,0x85AA7F79L,4294967290UL,0x85AA7F79L,4294967290UL,0x85AA7F79L,4294967290UL,0x85AA7F79L,4294967290UL};
        int i;
        for (i = 0; i < 1; i++)
            l_66[i] = 0xD63DL;
        for (g_56 = 8; (g_56 != 4); --g_56)
        {
            int *l_61 = (void*)0;
            int *l_62 = &g_63;
            int l_84 = 0L;
            (*l_62) = (*p_53);
            (*l_62) = (safe_mod_func_uint8_t_u_u((g_47[0] && (*l_62)), g_47[0]));
            if ((g_47[3] & (l_66[0] > ((+(safe_sub_func_uint8_t_u_u((+(safe_add_func_int16_t_s_s((*l_55), (safe_mul_func_uint16_t_u_u(g_47[1], g_56))))), ((l_55 == (void*)0) > ((void*)0 != p_53))))) || (*l_55)))))
            {
                short l_73[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_73[i] = 0x799DL;
                if (l_73[1])
                {
                    int l_81 = (-6L);
                    for (g_63 = 0; (g_63 <= 1); g_63 += 1)
                    {
                        char l_78[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_78[i] = 0xE7L;
                        l_75[2] = (&g_7 == l_74);
                        if (g_56)
                            continue;
                        if (g_56)
                            continue;
                        l_84 = ((safe_mod_func_uint16_t_u_u(l_78[1], (((~l_78[1]) | (l_73[1] || 0x68D1L)) && g_56))) == (safe_mul_func_uint16_t_u_u(l_73[1], (g_63 || (l_81 ^ ((+(safe_sub_func_int32_t_s_s(g_7, 3UL))) & 0x7E09L))))));
                    }
                }
                else
                {
                    char l_86[1][6];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_86[i][j] = 0x4DL;
                    }
                    l_85 = &p_53;
                    (*l_85) = func_39((g_63 | ((*l_62) == g_7)), l_86[0][3], (safe_add_func_int32_t_s_s(g_47[3], (safe_lshift_func_uint16_t_u_u(((p_53 != &l_84) > (g_91 == (void*)0)), g_7)))), g_47[0], p_53);
                    g_63 = (safe_add_func_uint32_t_u_u(g_63, (~g_47[1])));
                    (*g_91) = (*g_91);
                }
            }
            else
            {
                int l_96 = 1L;
                (*l_62) = (**l_85);
                (*l_62) = g_63;
                if (l_96)
                    continue;
                (*l_62) = ((((**l_85) | (safe_lshift_func_int8_t_s_s(((void*)0 != (*g_91)), 3))) <= g_56) > (*l_62));
            }
        }
    }
    else
    {
        for (g_56 = 0; (g_56 <= 0); g_56 += 1)
        {
            int i;
            for (g_63 = 0; (g_63 <= 0); g_63 += 1)
            {
                p_53 = p_53;
            }
            g_63 = l_99[g_56];
        }
        (*l_55) = g_7;
        for (g_63 = 0; (g_63 <= 0); g_63 += 1)
        {
            int i;
            (**l_85) = (safe_lshift_func_uint8_t_u_u(l_99[g_63], 6));
        }
    }
    (*l_85) = p_53;
    return g_56;
}





int main (void)
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_47[i], "g_47[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_144[i], "g_144[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_278, "g_278", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
