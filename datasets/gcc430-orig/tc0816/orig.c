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



static int g_2[7] = {(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)};
static unsigned g_32[2] = {0x11F3813BL,0x11F3813BL};
static int * const *g_63 = (void*)0;
static int g_65 = (-9L);
static int *g_64[2] = {&g_65,&g_65};
static int g_210 = 0xB6CD964BL;
static unsigned char g_213 = 0xDAL;
static int g_290 = (-1L);
static int **g_298 = &g_64[1];
static int *g_328 = &g_210;
static unsigned g_444 = 3UL;
static char g_559 = 0x67L;
static int *g_637[1][9][10] = {{{&g_2[4],&g_210,(void*)0,&g_210,&g_2[4],&g_65,(void*)0,&g_65,&g_2[4],&g_210},{&g_2[4],&g_210,&g_2[4],&g_2[4],&g_65,&g_210,&g_65,&g_2[4],&g_2[4],&g_210},{&g_2[4],&g_2[4],&g_2[3],&g_2[4],&g_2[4],&g_2[4],&g_2[3],&g_2[4],&g_2[4],&g_2[4]},{&g_65,&g_2[4],&g_2[4],&g_65,&g_2[4],&g_2[4],&g_65,&g_65,&g_65,&g_2[4]},{&g_2[4],&g_65,(void*)0,&g_65,&g_2[4],&g_210,(void*)0,&g_210,&g_2[4],&g_65},{&g_2[4],&g_65,&g_2[4],&g_2[4],&g_65,&g_65,&g_65,&g_2[4],&g_2[4],&g_65},{&g_2[4],&g_2[4],&g_2[3],&g_2[4],&g_2[4],&g_2[4],&g_2[3],&g_2[4],&g_2[4],&g_2[4]},{&g_65,&g_2[4],&g_2[4],&g_210,&g_2[4],&g_2[4],&g_65,&g_210,&g_65,&g_2[4]},{&g_2[4],&g_210,(void*)0,&g_210,&g_2[4],&g_65,(void*)0,&g_65,&g_2[4],&g_210}}};
static int g_874[10][10] = {{0L,7L,0x8642FE07L,0x6F231208L,0x8642FE07L,7L,0L,7L,0x8642FE07L,0x6F231208L},{0x8642FE07L,0x6F231208L,0x8642FE07L,7L,0L,7L,0x8642FE07L,0x6F231208L,0x8642FE07L,7L},{0L,0x6F231208L,0x7551116FL,0x6F231208L,0L,0xEA89DF61L,0L,0x6F231208L,0x7551116FL,0x6F231208L},{0L,7L,0x8642FE07L,0x6F231208L,0x8642FE07L,7L,0L,7L,0x8642FE07L,0x6F231208L},{0x8642FE07L,0x6F231208L,0x8642FE07L,7L,0L,7L,0x8642FE07L,0x6F231208L,0x8642FE07L,7L},{0L,0x6F231208L,0x7551116FL,0x6F231208L,0L,0xEA89DF61L,0L,0x6F231208L,0x7551116FL,0x6F231208L},{0L,7L,0x8642FE07L,0x6F231208L,0x8642FE07L,7L,0L,7L,0x8642FE07L,0x6F231208L},{0x8642FE07L,0x6F231208L,0x8642FE07L,7L,0L,7L,0x8642FE07L,0x6F231208L,0x8642FE07L,7L},{0L,0x6F231208L,0x7551116FL,0x6F231208L,0L,0xEA89DF61L,0L,0x6F231208L,0x7551116FL,0x6F231208L},{0L,7L,0x8642FE07L,0x6F231208L,0x8642FE07L,7L,0L,7L,0x8642FE07L,0x6F231208L}};
static const int *g_933 = &g_65;
static int *g_1069[4] = {&g_2[4],&g_2[4],&g_2[4],&g_2[4]};
static const unsigned short g_1074 = 65535UL;



static char func_1(void);
static int * const func_5(int * p_6, unsigned p_7);
static unsigned func_9(int p_10, int * const p_11);
static char func_14(int * p_15, int * p_16, int * p_17, int * const p_18, int * p_19);
static int * func_21(int p_22, int * p_23, unsigned p_24);
static int * func_25(unsigned short p_26, char p_27, int * p_28, unsigned p_29);
static unsigned char func_33(int * p_34, int * const p_35, int * p_36, int * p_37);
static int * func_38(char p_39, unsigned short p_40, int * p_41);
static int * func_42(int * p_43, int * p_44);
static int * func_45(int * p_46, int p_47, unsigned p_48, int * p_49, int p_50);
static char func_1(void)
{
    int *l_20 = &g_2[4];
    unsigned char l_1043 = 255UL;
    for (g_2[4] = (-24); (g_2[4] != (-17)); g_2[4]++)
    {
        int *l_8 = &g_2[4];
        int **l_1024 = &g_637[0][6][2];
        int *l_1027 = (void*)0;
        int *l_1028 = &g_65;
        unsigned l_1053[2];
        unsigned l_1061 = 0xA2983AD9L;
        int i;
        for (i = 0; i < 2; i++)
            l_1053[i] = 0xB5FAC1BAL;
        (*l_1024) = func_5(l_8, func_9((safe_div_func_int8_t_s_s(func_14(l_20, func_21(g_2[4], func_25((*l_20), ((((*l_20) ^ ((((void*)0 != &g_2[5]) <= (g_2[0] <= (&g_2[4] == l_20))) | 65534UL)) == g_32[0]) >= g_2[0]), l_20, (*l_8)), (*l_8)), &g_2[2], l_8, &g_2[2]), 0x1FL)), l_8));


        ;
        (*l_1028) = (safe_mod_func_uint32_t_u_u(0xF4927791L, 6L));
        for (g_213 = (-5); (g_213 >= 50); g_213 = safe_add_func_int32_t_s_s(g_213, 5))
        {
            int *l_1033 = &g_65;
            int *** const l_1048 = &l_1024;
            for (g_290 = 0; (g_290 < 10); ++g_290)
            {
                int l_1035 = 0L;
                int l_1054 = 0x6C28C7B4L;
                int ** const l_1060 = (void*)0;
                unsigned short l_1067 = 5UL;
                unsigned char l_1092 = 0x85L;
                for (g_559 = 0; (g_559 >= 0); g_559 -= 1)
                {
                    int i, j, k;
                    for (g_210 = 0; (g_210 >= 0); g_210 -= 1)
                    {
                        int i, j, k;
                        (*l_1028) = 0x5825997EL;
                        if (g_874[(g_210 + 4)][(g_210 + 1)])
                            continue;
                        (*g_298) = l_1033;
                    }
                    (*l_1028) = (-1L);
                    if (g_874[(g_559 + 6)][(g_559 + 3)])
                        break;
                }
                for (g_65 = 3; (g_65 <= 9); g_65 += 1)
                {
                    int *l_1034 = &g_210;
                    int ***l_1040 = &l_1024;
                    (*l_1034) = 0xEC472636L;
                    for (g_444 = 3; (g_444 <= 9); g_444 += 1)
                    {
                        if (l_1035)
                            break;
                        (*l_1034) = l_1035;
                    }
                    for (g_559 = 0; (g_559 <= 9); g_559 += 1)
                    {
                        l_20 = &g_65;

                        ;
                        (*l_1024) = (void*)0;
                        if ((*l_20))
                            break;
                        return g_210;
                    }
                    for (l_1035 = 0; (l_1035 <= 9); l_1035 += 1)
                    {
                        int *l_1041[5][2][4] = {{{&g_2[4],&g_2[4],&g_65,&g_2[3]},{&g_2[3],(void*)0,&g_65,(void*)0}},{{&g_2[4],(void*)0,&g_210,&g_65},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_2[4],&g_2[3]},{(void*)0,&g_2[4],(void*)0,&g_210}},{{(void*)0,&g_2[3],&g_210,&g_210},{&g_2[4],&g_2[4],&g_65,&g_2[3]}},{{&g_65,&g_2[3],&g_2[1],&g_2[3]},{(void*)0,&g_210,&g_2[4],&g_2[1]}}};
                        const short l_1042 = (-1L);
                        unsigned l_1044 = 0x0E3A2E66L;
                        int i, j, k;
                        (*l_1034) = ((*l_20) ^ (safe_lshift_func_int8_t_s_u(((void*)0 == &g_637[0][6][2]), (((safe_div_func_uint16_t_u_u((g_2[6] == g_874[5][6]), g_65)) && (*l_1033)) ^ 0xEFE2L))));
                        (*l_1034) = (*l_1033);
                        (**l_1040) = func_45(l_20, l_1044, l_1035, &l_1035, (*l_20));
                    }
                }
                if ((*l_1033))
                {
                    l_1035 = ((&l_1024 != (void*)0) || g_2[4]);
                    (*l_1028) = (-3L);
                    (*l_1028) = (*g_933);
                }
                else
                {
                    int *l_1047 = &g_2[4];
                    if (((safe_sub_func_int32_t_s_s(l_1035, l_1053[1])) == 6UL))
                    {
                        short l_1059 = 0x024BL;
                        if (l_1054)
                            break;
                        l_1061 = ((safe_sub_func_uint16_t_u_u(l_1054, (safe_add_func_int8_t_s_s((*l_1033), l_1059)))) >= (&g_64[1] != l_1060));
                    }
                    else
                    {
                        int l_1068 = 0x07956029L;
                        unsigned l_1091[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1091[i] = 0x44B0180EL;
                        (*g_298) = func_45(func_38((*l_20), ((safe_unary_minus_func_int8_t_s((safe_sub_func_int16_t_s_s(g_2[4], (safe_lshift_func_uint8_t_u_s(1UL, g_210)))))) == (*l_1047)), (**l_1048)), (*g_328), (*l_1047), g_1069[2], (*l_20));
                        (*l_1033) = (safe_mod_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((l_1068 == g_874[9][8]), ((*l_8) ^ g_1074))), g_874[6][8]));
                        (*l_1028) = (safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((0UL || (safe_mod_func_uint32_t_u_u(((*l_1028) & (+(safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(g_32[0], (((safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(g_65, g_210)), 6)) & (&g_637[0][6][2] != (void*)0)) && (l_1068 >= l_1091[1])))), (-7L))))), l_1092))), g_559)), 0x8007L));
                    }
                    for (l_1067 = 0; (l_1067 <= 1); l_1067 += 1)
                    {
                        int i;
                        g_64[l_1067] = g_1069[l_1067];
                        (*l_1033) = (safe_rshift_func_uint16_t_u_s((*l_8), 7));
                    }
                }
                (*l_1048) = &g_1069[2];

                ;
            }
        }

        ;
        ;

        return g_1074;
    }
    return (*l_20);
}







static int * const func_5(int * p_6, unsigned p_7)
{
    int * const l_1018[6][8][1] = {{{&g_2[4]},{&g_2[0]},{&g_2[4]},{&g_2[4]},{&g_2[0]},{&g_2[4]},{&g_210},{&g_2[4]}},{{(void*)0},{&g_2[4]},{&g_210},{(void*)0},{&g_2[4]},{&g_2[4]},{&g_2[4]},{(void*)0}},{{&g_210},{&g_2[4]},{(void*)0},{&g_2[4]},{&g_210},{&g_2[4]},{&g_2[0]},{&g_2[4]}},{{&g_2[4]},{&g_2[0]},{&g_2[4]},{&g_210},{&g_2[4]},{(void*)0},{&g_2[4]},{&g_210}},{{(void*)0},{&g_2[4]},{&g_2[4]},{&g_2[4]},{(void*)0},{&g_210},{&g_2[4]},{(void*)0}},{{&g_2[4]},{&g_210},{&g_2[4]},{&g_2[0]},{&g_2[4]},{&g_2[4]},{&g_2[0]},{&g_2[4]}}};
    int **l_1019 = &g_637[0][4][1];
    int * const l_1023 = &g_2[4];
    int i, j, k;
    (*l_1019) = l_1018[2][7][0];
    for (g_213 = 0; (g_213 != 44); g_213 = safe_add_func_uint16_t_u_u(g_213, 5))
    {
        short l_1022 = 0L;
        l_1022 = (8L || p_7);
    }
    return l_1023;


}







static unsigned func_9(int p_10, int * const p_11)
{
    int *l_912 = &g_210;
    int ***l_916 = &g_298;
    unsigned l_920 = 0x6D7766CDL;
    unsigned short l_954 = 65533UL;
    int **l_1017 = &g_328;
lbl_987:
    for (g_213 = 0; (g_213 <= 0); g_213 += 1)
    {
        const int *l_915[4] = {&g_210,&g_210,&g_210,&g_210};
        const int **l_914[9] = {&l_915[3],&l_915[3],&l_915[3],&l_915[3],&l_915[3],&l_915[3],&l_915[3],&l_915[3],&l_915[3]};
        const int ***l_913 = &l_914[1];
        int i;
    }
    for (g_210 = 0; (g_210 <= 0); g_210 += 1)
    {
        int *l_951 = &g_65;
        int ** const *l_1012 = (void*)0;
        int l_1013[3];
        int i;
        for (i = 0; i < 3; i++)
            l_1013[i] = 0x202CD5ECL;
        (*l_951) = (*g_933);
        if ((l_954 || (l_916 != l_916)))
        {
            unsigned l_955 = 0x1C523BE9L;
            if (l_955)
                break;
        }
        else
        {
            int l_968 = 0x705C27E7L;
            unsigned char l_975 = 0x77L;
            int l_1003 = (-1L);
            (*l_951) = (safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(p_10, (((((void*)0 == &g_637[0][6][0]) || 0x04L) < (g_444 <= (safe_sub_func_int16_t_s_s(((p_10 || (safe_div_func_int16_t_s_s(((((safe_add_func_int32_t_s_s(0x51BD4E2AL, (l_968 >= (safe_rshift_func_uint8_t_u_s((((safe_div_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(g_213, 0x72L)), g_290)) >= g_874[1][5]) != 0x62L), 0))))) | g_874[5][6]) <= p_10) <= p_10), g_32[0]))) == g_290), l_975)))) > 0xBCL))), 7));
            if ((p_11 == (void*)0))
            {
                return g_213;
            }
            else
            {
                short l_988 = (-1L);
                for (g_213 = 0; (g_213 <= 0); g_213 += 1)
                {
                    int *l_986 = (void*)0;
                    (*l_951) = (safe_add_func_uint16_t_u_u((((safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((g_874[8][0] && (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(p_10, (l_975 && (l_986 != l_951)))), p_10))), g_874[5][6])), (4294967286UL && (*g_328)))) != (-1L)) < g_444), 0x3E2FL));
                    for (g_444 = 0; (g_444 <= 0); g_444 += 1)
                    {
                        if (g_290)
                            goto lbl_987;
                        if (l_988)
                            continue;
                    }
                    (*l_951) = (safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((*p_11), ((*l_912) ^ p_10))), 0));
                    if ((*p_11))
                        break;
                    for (l_920 = 0; (l_920 <= 1); l_920 += 1)
                    {
                        (*l_951) = ((safe_mod_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(p_10, p_10)), 2)) && g_32[1]), (safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(g_2[4], 8)), g_290)))) >= p_10);
                    }
                }
                if ((*p_11))
                    continue;
                if (l_1003)
                    continue;
            }
        }
        (*l_951) = (safe_mod_func_uint8_t_u_u(p_10, (p_10 ^ (*l_912))));
        g_64[(g_210 + 1)] = func_45(func_45(l_912, (4294967295UL && (((p_10 == (safe_rshift_func_int8_t_s_u((-8L), 1))) == (safe_mod_func_int8_t_s_s(p_10, (safe_sub_func_uint16_t_u_u(((((void*)0 == l_1012) && g_444) || g_213), p_10))))) | g_2[6])), g_444, &g_2[4], (*l_951)), (*p_11), l_1013[2], &g_2[4], (*l_912));
        for (p_10 = 0; (p_10 >= 0); p_10 -= 1)
        {
            int l_1014 = 0xB4760137L;
            l_1014 = (*l_912);
            for (g_290 = 0; (g_290 >= 0); g_290 -= 1)
            {
                char l_1015 = 0x07L;
                (*l_951) = (l_1015 | (*p_11));
                (*l_951) = (*p_11);
                if (l_1014)
                    break;
                (*l_951) = (*p_11);
            }
            for (g_444 = 0; (g_444 <= 0); g_444 += 1)
            {
                int *l_1016[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1016[i] = &g_2[5];
                for (l_954 = 0; (l_954 <= 0); l_954 += 1)
                {
                    int i, j, k;
                    g_637[g_210][(p_10 + 4)][(l_954 + 1)] = l_1016[2];
                    g_637[l_954][g_210][(p_10 + 8)] = g_637[g_210][(p_10 + 4)][(l_954 + 1)];
                    (*l_916) = (*l_916);
                }
                (*l_951) = (*g_933);
            }
        }
    }
    (*l_1017) = p_11;

    ;
    return g_874[7][2];
}







static char func_14(int * p_15, int * p_16, int * p_17, int * const p_18, int * p_19)
{
    short l_908[8][4] = {{0x72A6L,(-1L),0xD8F3L,0xD8F3L},{(-1L),(-1L),(-3L),0xD8F3L},{0x72A6L,(-1L),0xD8F3L,0xD8F3L},{(-1L),(-1L),(-3L),0xD8F3L},{0x72A6L,(-1L),0xD8F3L,0xD8F3L},{(-1L),(-1L),(-3L),0xD8F3L},{0x72A6L,(-1L),0xD8F3L,0xD8F3L},{(-1L),(-1L),(-3L),0xD8F3L}};
    int *l_909 = &g_2[6];
    int i, j;
    (*g_328) = (safe_lshift_func_int16_t_s_s(l_908[2][0], 13));
    (*g_328) = (&g_328 != &g_637[0][4][7]);
    (*g_328) = ((l_909 != l_909) || (safe_add_func_int16_t_s_s(g_444, (*l_909))));
    (*g_328) = func_33(l_909, &g_65, p_17, func_45(p_16, (*l_909), ((&g_637[0][6][2] != &g_64[0]) <= 1L), l_909, (*l_909)));
    return (*l_909);
}







static int * func_21(int p_22, int * p_23, unsigned p_24)
{
    int *l_848 = &g_65;
    int *l_903 = &g_210;
lbl_859:
    (*g_328) = (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(g_65, 6)), 3));
lbl_875:
    for (g_290 = 1; (g_290 >= 0); g_290 -= 1)
    {
        int l_851 = 0x9DD39B41L;
        int i;
        (*g_328) = g_32[g_290];
        for (p_22 = 0; (p_22 <= 1); p_22 += 1)
        {
            const int *l_852 = &g_2[1];
            for (g_559 = 1; (g_559 >= 0); g_559 -= 1)
            {
                int *l_849[10][6][4] = {{{&g_65,&g_210,&g_2[4],&g_2[3]},{&g_2[4],&g_2[5],&g_2[4],(void*)0},{&g_210,&g_2[4],(void*)0,&g_210},{&g_2[3],(void*)0,&g_2[0],&g_2[4]},{&g_2[0],&g_210,&g_2[0],&g_2[4]},{&g_2[3],&g_65,(void*)0,&g_210}},{{&g_210,(void*)0,&g_2[4],&g_210},{&g_2[4],&g_210,&g_2[4],&g_65},{&g_65,&g_210,&g_65,&g_2[4]},{(void*)0,&g_2[4],&g_2[3],(void*)0},{&g_210,&g_2[0],&g_2[0],&g_210},{&g_210,&g_2[0],&g_65,&g_2[5]}},{{&g_210,&g_2[0],&g_2[3],&g_2[4]},{&g_2[6],&g_210,&g_65,&g_2[4]},{&g_65,&g_2[0],(void*)0,&g_2[5]},{&g_2[4],&g_2[0],&g_210,&g_210},{&g_2[3],&g_2[0],(void*)0,(void*)0},{&g_210,&g_2[4],&g_2[0],&g_2[4]}},{{(void*)0,&g_210,&g_2[4],&g_65},{&g_2[0],&g_210,&g_210,&g_210},{&g_2[1],(void*)0,&g_65,&g_210},{&g_2[4],&g_65,&g_2[4],&g_2[4]},{&g_2[4],&g_2[0],&g_210,&g_2[0]},{&g_65,&g_65,&g_2[6],&g_65}},{{&g_210,&g_2[0],&g_2[4],&g_2[0]},{&g_2[4],&g_65,&g_2[4],&g_2[5]},{&g_2[1],(void*)0,&g_65,&g_210},{(void*)0,&g_210,(void*)0,&g_210},{&g_2[4],&g_2[3],(void*)0,(void*)0},{&g_210,&g_210,&g_210,&g_2[0]}},{{&g_210,&g_65,&g_2[3],&g_2[1]},{&g_210,&g_210,&g_2[4],&g_2[3]},{&g_2[3],&g_210,&g_2[5],&g_2[1]},{&g_210,&g_65,&g_65,&g_2[0]},{&g_210,&g_210,(void*)0,(void*)0},{&g_2[4],&g_2[3],&g_210,&g_210}},{{&g_65,&g_210,&g_210,&g_210},{&g_2[4],(void*)0,&g_2[4],&g_2[5]},{&g_2[0],&g_65,&g_2[0],&g_2[0]},{&g_210,&g_2[0],&g_210,&g_65},{&g_2[5],&g_65,&g_2[1],&g_2[0]},{(void*)0,&g_2[0],&g_2[1],&g_65}},{{&g_2[5],&g_210,&g_210,&g_210},{&g_210,(void*)0,&g_2[0],&g_210},{&g_2[0],&g_210,&g_2[4],&g_210},{&g_2[4],&g_210,&g_210,&g_2[6]},{&g_65,&g_2[0],&g_210,&g_2[4]},{&g_210,&g_2[3],&g_2[3],&g_210}},{{&g_2[0],&g_2[4],&g_2[4],&g_210},{&g_2[4],(void*)0,&g_65,&g_210},{&g_2[5],&g_210,&g_2[6],&g_210},{(void*)0,(void*)0,&g_210,&g_210},{&g_210,&g_2[4],&g_210,&g_210},{&g_210,&g_2[3],&g_210,&g_2[4]}},{{&g_2[4],&g_2[0],(void*)0,&g_2[3]},{&g_210,&g_210,&g_65,(void*)0},{&g_2[4],&g_65,&g_2[4],&g_65},{&g_65,&g_210,&g_210,&g_2[0]},{&g_210,(void*)0,&g_2[3],&g_65},{&g_65,(void*)0,&g_2[0],&g_2[1]}}};
                const int *l_853 = &g_210;
                int i, j, k;
                for (g_65 = 0; (g_65 <= 1); g_65 += 1)
                {
                    int * const l_850[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    for (g_210 = 0; (g_210 >= 0); g_210 -= 1)
                    {
                        int i;
                        return l_848;



                    }
                    l_851 = func_33(l_849[2][2][2], l_850[0], &g_210, func_45(func_38(p_24, g_444, l_849[2][2][2]), (l_848 != l_849[2][2][2]), g_32[g_290], &g_210, g_32[g_290]));
                    if ((*p_23))
                    {
                        int *l_854 = &g_210;
                        l_853 = l_852;

                        ;
                        return l_854;



                    }
                    else
                    {
                        (*g_328) = (*l_852);
                    }
                }
                g_64[g_290] = &p_22;
                for (g_444 = 0; (g_444 <= 1); g_444 += 1)
                {
                    int l_857 = 0x44F355A7L;
                    int *l_858[10][2] = {{&g_2[2],&g_2[2]},{&g_2[2],&g_2[2]},{&g_2[2],&g_2[2]},{&g_2[2],&g_2[2]},{&g_2[2],&g_2[2]},{&g_2[2],&g_2[2]},{&g_2[2],&g_2[2]},{&g_2[2],&g_2[2]},{&g_2[2],&g_2[2]},{&g_2[2],&g_2[2]}};
                    int i, j;
                    if ((((p_24 | (safe_add_func_int16_t_s_s(l_857, (p_22 >= (((-1L) > ((void*)0 == &l_848)) ^ func_33(l_858[6][0], &p_22, l_858[6][0], l_858[7][0])))))) && g_290) <= p_24))
                    {
                        if (l_857)
                            goto lbl_859;
                        if ((*p_23))
                            break;
                    }
                    else
                    {
                        int i;
                        (*g_328) = (*p_23);
                        g_64[g_444] = &p_22;
                    }
                }
                if (g_32[g_290])
                    break;
            }
            return l_848;



        }
    }
    for (g_444 = 0; (g_444 > 49); ++g_444)
    {
        int *l_868 = &g_2[6];
        if ((1UL < 65535UL))
        {
            for (p_22 = 16; (p_22 >= 17); p_22 = safe_add_func_uint16_t_u_u(p_22, 3))
            {
                (*l_848) = (*l_848);
            }
        }
        else
        {
            const unsigned l_864 = 0x4A95E28EL;
            int *l_873[9] = {&g_210,&g_210,&g_2[0],&g_210,&g_210,&g_2[0],&g_210,&g_210,&g_2[0]};
            int *l_894 = &g_210;
            int i;
            if (l_864)
            {
                int *l_867 = &g_2[0];
                (*g_298) = func_38((!g_559), (safe_lshift_func_uint8_t_u_s(func_33(l_867, func_45(l_868, ((*l_868) ^ (safe_add_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((&p_22 == (void*)0) | g_2[4]), g_2[1])), (~(0x5C9BL || 65533UL))))), l_864, l_873[8], (*p_23)), &g_210, l_867), g_874[5][6])), &g_2[3]);
                return l_867;



            }
            else
            {
                (*g_298) = &g_210;
                if (g_559)
                    goto lbl_875;
            }
            (*g_298) = l_848;
            for (g_290 = (-12); (g_290 < (-22)); --g_290)
            {
                unsigned l_878 = 1UL;
                int l_889 = 0x2AEDE2EFL;
                (*g_328) = (((l_878 < ((safe_mod_func_int8_t_s_s(((g_210 || 1L) > g_874[9][2]), (safe_mod_func_int8_t_s_s(p_24, (safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((*l_868), (safe_div_func_uint16_t_u_u((l_889 && ((safe_lshift_func_int8_t_s_s(((((*p_23) > ((safe_lshift_func_int8_t_s_s(g_65, 0)) | l_889)) >= p_22) ^ 0x3EB6F303L), g_65)) ^ (-1L))), l_878)))), 6)))))) & l_889)) == 0xFBL) <= (*p_23));
                (*g_298) = l_894;
            }
            return l_868;



        }
        (*g_328) = (0x48L ^ (((!((+p_22) != (!p_24))) == (l_848 == &p_22)) >= 0x60L));
    }
    (*g_328) = (safe_mod_func_int16_t_s_s(1L, ((safe_add_func_uint8_t_u_u(g_2[0], (safe_div_func_int16_t_s_s(0xAF5BL, func_33(l_903, l_903, &g_65, &g_2[3]))))) && 0x4BL)));
    return l_848;



}







static int * func_25(unsigned short p_26, char p_27, int * p_28, unsigned p_29)
{
    int *l_53 = &g_2[4];
    (*g_328) = (func_33(func_38(g_32[0], g_32[0], func_42(&g_2[4], func_45(&g_2[6], (safe_lshift_func_int16_t_s_s((((l_53 != l_53) < (((safe_unary_minus_func_uint16_t_u(g_2[4])) >= (p_28 == p_28)) ^ g_2[4])) && (*l_53)), 0)), p_26, p_28, g_2[4]))), l_53, p_28, l_53) || (*l_53));


    return p_28;


}







static unsigned char func_33(int * p_34, int * const p_35, int * p_36, int * p_37)
{
    unsigned l_834 = 4294967295UL;
    int ***l_841 = (void*)0;
    unsigned l_842 = 1UL;
    char l_843 = 7L;
    (*g_328) = (*p_36);
    (*g_328) = (g_290 >= (0x6E0AL < (safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s(248UL, l_834)), 11)) || (0x52C0L <= (safe_rshift_func_uint16_t_u_u(g_210, 10)))) && (safe_sub_func_uint8_t_u_u(((*p_36) | (safe_lshift_func_uint16_t_u_s(l_834, 14))), (((l_841 != l_841) <= 0xA629L) && l_842)))), 255UL)), 13))));
    (*g_328) = l_843;
    return l_834;
}







static int * func_38(char p_39, unsigned short p_40, int * p_41)
{
    int *l_825[7] = {&g_65,&g_65,&g_65,&g_65,&g_65,&g_65,&g_2[4]};
    int i;
    (*g_298) = p_41;
    (*g_298) = l_825[4];
    return p_41;


}







static int * func_42(int * p_43, int * p_44)
{
    const int l_552 = 2L;
    unsigned short l_553[7][7];
    int l_554[8] = {(-9L),0L,0L,(-9L),0L,0L,(-9L),0L};
    int ***l_564 = (void*)0;
    int *l_581 = &l_554[2];
    int l_705 = 0xDF2B2CC2L;
    char l_719 = 0x2CL;
    int *l_720 = (void*)0;
    unsigned l_785 = 0xBB193036L;
    int *l_786[8] = {&l_554[2],&l_554[2],&l_554[2],&l_554[2],&l_554[2],&l_554[2],&l_554[2],&l_554[2]};
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
            l_553[i][j] = 0UL;
    }
    if ((((l_552 <= l_553[0][5]) != l_554[2]) > (**g_298)))
    {
        int *l_555 = &l_554[2];
        unsigned l_612 = 0x513A5D1DL;
        int * const **l_631 = (void*)0;
        char l_652[4][10] = {{1L,(-5L),0L,0xB2L,0L,1L,0xB2L,(-1L),0xB2L,1L},{0L,(-5L),0x3FL,(-5L),0L,(-1L),(-5L),(-1L),0xA8L,0L},{0L,0xB2L,0L,(-5L),1L,1L,(-5L),0L,0xB2L,0L},{1L,(-5L),0L,0xB2L,0L,1L,0xB2L,(-1L),0xB2L,1L}};
        int i, j;
        for (g_444 = 1; (g_444 <= 7); g_444 += 1)
        {
            int i;
            l_554[g_444] = (0x0FL > 1UL);
            (*g_298) = (void*)0;
            if (l_554[g_444])
                break;
        }


        for (g_444 = 0; (g_444 <= 6); g_444 += 1)
        {
            int *l_558 = &l_554[1];
            int *l_579 = &l_554[6];
            if ((0L & 0x763667A1L))
            {
                int ***l_567 = &g_298;
                int i;
                (*g_298) = &l_554[(g_444 + 1)];
                if ((&g_63 != (void*)0))
                {
                    const unsigned l_562 = 4294967293UL;
                    const int *l_563 = &l_554[(g_444 + 1)];
                    for (g_290 = 0; (g_290 <= 7); g_290 += 1)
                    {
                        int i, j;
                        (*g_298) = func_45(l_555, l_553[g_444][g_444], (safe_rshift_func_int8_t_s_s(l_553[g_444][g_444], 6)), func_45(l_558, g_559, l_553[0][5], (*g_298), (*p_44)), (*l_555));
                    }
                    p_44 = &l_554[(g_444 + 1)];

                    ;
                    if ((*p_44))
                    {
                        const int ***l_561 = (void*)0;
                        int i;
                        l_554[g_444] = ((&p_43 == (void*)0) <= ((safe_unary_minus_func_uint8_t_u(((l_561 != (void*)0) > (l_562 ^ (*g_328))))) <= ((p_44 != l_563) != g_444)));
                        if ((*p_43))
                            continue;
                        if ((*p_44))
                            break;
                    }
                    else
                    {
                        (*g_328) = ((l_564 != (void*)0) == 0x34FF5BB2L);
                    }
                }
                else
                {
                    for (g_290 = 0; (g_290 <= 1); g_290 += 1)
                    {
                        int i, j;
                        (*g_298) = g_64[g_290];
                        if (l_553[(g_290 + 5)][g_444])
                            break;
                    }
                }
                (*g_298) = func_45((*g_298), (safe_rshift_func_int16_t_s_u((g_290 | ((l_567 == l_564) != g_65)), (0x9E18L > (250UL >= (safe_add_func_int8_t_s_s((safe_div_func_uint16_t_u_u(((*p_43) | (*l_555)), (*l_558))), (*l_555))))))), (*l_555), (*g_298), (*p_43));
            }
            else
            {
                (*g_298) = l_555;
            }
            for (g_213 = 0; (g_213 <= 6); g_213 += 1)
            {
                unsigned char l_574 = 0x5AL;
                int *l_582 = &l_554[2];
                (*l_558) = ((safe_mod_func_int32_t_s_s((*p_43), g_213)) < l_574);
                for (l_574 = 2; (l_574 <= 6); l_574 += 1)
                {
                    int *l_580[1][9] = {{&g_2[4],&g_2[4],&g_2[4],&g_2[4],&g_2[4],&g_2[4],&g_2[4],&g_2[4],&g_2[4]}};
                    int i, j;
                    (*l_555) = ((safe_add_func_int16_t_s_s((0xE1L & (g_2[0] ^ ((safe_lshift_func_uint16_t_u_u(6UL, (~((-9L) > g_444)))) && g_213))), g_65)) <= (g_213 | (*l_555)));
                    return p_43;



                }
                return p_43;



            }
        }


        ;
        if (((*l_555) || (*l_581)))
        {
            unsigned l_596 = 4294967294UL;
            if (((g_210 && (*l_581)) == g_32[1]))
            {
                (*l_581) = (*p_43);
            }
            else
            {
                int l_589 = 0L;
                for (g_213 = 0; (g_213 > 2); ++g_213)
                {
                    (*l_581) = ((*l_581) > (safe_add_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(g_2[6], l_589)) == g_32[0]), (&g_64[1] == &g_64[1]))));
                    (*g_328) = ((-9L) < (((*l_581) == (*l_555)) != g_32[0]));
                    if ((*g_328))
                        break;
                }
            }
            (*l_555) = 6L;
            (*g_298) = func_45((*g_298), (1L & g_32[1]), (g_213 == (safe_add_func_int16_t_s_s((((!(safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s((((p_44 != (void*)0) ^ (!g_32[0])) > (*l_581)), (*l_581))), g_2[4]))) || g_2[4]) > (*l_555)), l_596))), (*g_298), (*p_43));
        }
        else
        {
            int *l_611 = &l_554[2];
            int ***l_617 = &g_298;
            unsigned l_670 = 0x2C2E2969L;
            if ((*l_555))
            {
                int * const l_610 = &l_554[2];
                int *l_618 = &l_554[2];
                for (g_65 = 0; (g_65 != (-14)); g_65 = safe_sub_func_uint8_t_u_u(g_65, 3))
                {
                    const unsigned char l_601 = 0xB9L;
                    (*g_328) = ((~g_2[4]) <= (safe_sub_func_int32_t_s_s(l_601, (safe_mod_func_uint32_t_u_u((*l_555), (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(g_210, (safe_add_func_int16_t_s_s(g_444, (((void*)0 == l_610) || g_210))))), (((void*)0 != l_611) >= 4294967295UL))))))));
                    (*l_581) = l_612;
                    (*l_581) = (*p_44);
                }
                (*l_611) = (+((safe_lshift_func_uint8_t_u_u(g_2[1], 4)) || (l_617 == (void*)0)));
                for (l_612 = 1; (l_612 <= 7); l_612 += 1)
                {
                    return p_43;



                }
                return p_43;



            }
            else
            {
                (*g_328) = (*l_611);
                for (g_65 = 0; g_65 < 7; g_65 += 1)
                {
                    for (g_213 = 0; g_213 < 7; g_213 += 1)
                    {
                        l_553[g_65][g_213] = 0xD87DL;
                    }
                }
                for (g_65 = 0; (g_65 <= 7); g_65 += 1)
                {
                    int i;
                    if (l_554[g_65])
                    {
                        int *l_619 = &l_554[2];
                        int i;
                        l_554[g_65] = l_554[g_65];
                        l_619 = &l_554[g_65];
                    }
                    else
                    {
                        int i;
                        (**l_617) = &l_554[g_65];
                    }
                }
            }
            for (g_290 = 0; (g_290 <= 1); g_290 += 1)
            {
                int i;
                (*g_328) = (*p_44);
                (*l_555) = (*l_611);
                for (g_65 = 0; (g_65 <= 6); g_65 += 1)
                {
                    int *** const l_630[8] = {&g_298,&g_298,&g_298,&g_298,&g_298,&g_298,&g_298,&g_298};
                    int i;
                    for (g_444 = 0; (g_444 <= 6); g_444 += 1)
                    {
                        int *l_636 = &l_554[2];
                        int i, j;
                        g_637[0][6][2] = func_45((*g_298), l_553[(g_290 + 2)][(g_290 + 5)], (safe_lshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((void*)0 == l_630[0]), (((((!(+(l_564 != l_631))) ^ l_553[g_65][g_444]) | (l_553[g_444][(g_290 + 2)] < ((safe_add_func_int32_t_s_s((g_2[6] & (-1L)), 0xF585C68CL)) == 6UL))) & (*p_44)) >= 5L))), g_2[4])), g_2[4])), (-7L))), 7)), l_636, (*g_328));
                        return p_43;



                    }
                    (*g_298) = p_44;
                    (*g_298) = p_43;
                }
            }
            for (g_213 = 0; (g_213 != 33); ++g_213)
            {
                int l_644 = 0x09ECA877L;
                for (g_210 = 6; (g_210 < 8); g_210 = safe_add_func_uint8_t_u_u(g_210, 2))
                {
                    for (g_559 = 2; (g_559 >= (-8)); g_559 = safe_sub_func_int8_t_s_s(g_559, 6))
                    {
                        l_644 = l_644;
                        (*l_581) = ((*g_298) != p_44);
                        (*g_298) = p_43;
                    }
                }
            }
            (*l_555) = (*l_555);
        }
    }
    else
    {
        const short l_681 = 0xC273L;
        int *l_687 = (void*)0;
        unsigned l_688 = 3UL;
        unsigned short l_724 = 0x31E3L;
        unsigned short l_745[6][8][3] = {{{65535UL,0xD640L,0xFA53L},{0xD640L,0xF60FL,0x019FL},{65535UL,0UL,65535UL},{0xF60FL,7UL,65535UL},{5UL,65531UL,0x019FL},{0x019FL,65535UL,0xFA53L},{7UL,0UL,1UL},{0x1681L,0xD640L,5UL}},{{0UL,0UL,1UL},{1UL,0UL,0xF60FL},{0x019FL,0xD640L,0UL},{0UL,0UL,0xFA53L},{5UL,0x019FL,0UL},{7UL,0xF60FL,0xF60FL},{0UL,65535UL,1UL},{0UL,1UL,5UL}},{{7UL,1UL,65535UL},{5UL,0UL,65531UL},{0UL,1UL,0x1681L},{0x019FL,1UL,0x019FL},{1UL,65535UL,0x019FL},{0UL,0xF60FL,0x1681L},{0x1681L,0x019FL,65531UL},{65535UL,0UL,65535UL}},{{0x1681L,0xD640L,5UL},{0UL,0UL,1UL},{1UL,0UL,0xF60FL},{0x019FL,0xD640L,0UL},{0UL,0UL,0xFA53L},{5UL,0x019FL,0UL},{7UL,0xF60FL,0xF60FL},{0UL,65535UL,1UL}},{{0UL,1UL,5UL},{7UL,1UL,65535UL},{5UL,0UL,65531UL},{0UL,1UL,0x1681L},{0x019FL,1UL,0x019FL},{1UL,65535UL,0x019FL},{0UL,0xF60FL,65535UL},{65535UL,1UL,0x1681L}},{{0UL,0xD640L,0xF60FL},{65535UL,5UL,7UL},{65535UL,65535UL,0UL},{65531UL,65535UL,0xFA53L},{1UL,5UL,65535UL},{0UL,0xD640L,0x019FL},{7UL,1UL,65535UL},{65535UL,0xFA53L,0xFA53L}}};
        int i, j, k;
        for (g_213 = 0; (g_213 <= 0); g_213 += 1)
        {
            const int l_686 = 0L;
            int *l_697 = &l_554[2];
            unsigned short l_704 = 0x9030L;
            for (g_290 = 0; (g_290 <= 0); g_290 += 1)
            {
                const unsigned l_672 = 0x13C57ED4L;
                for (g_444 = 0; (g_444 <= 1); g_444 += 1)
                {
                    int i, j, k;
                    g_637[g_290][(g_444 + 5)][(g_213 + 9)] = g_637[g_290][(g_444 + 2)][(g_213 + 5)];
                }
                for (g_210 = 0; (g_210 >= 0); g_210 -= 1)
                {
                    int i, j, k;
                    g_637[g_213][(g_210 + 1)][(g_213 + 7)] = func_45(g_637[g_213][g_213][(g_290 + 5)], (*p_44), g_559, g_637[g_210][(g_210 + 6)][(g_213 + 4)], (*p_43));
                    g_64[(g_213 + 1)] = g_64[g_213];
                    (*l_581) = l_672;
                    if (((4294967295UL > (safe_rshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u((g_32[0] || ((safe_lshift_func_uint8_t_u_u(l_681, 4)) != ((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(0x1DL, 4)) ^ (*p_43)), 2)) && l_686))), g_32[0])), (l_681 ^ l_681)))) > l_672))
                    {
                        int i;
                        g_64[(g_290 + 1)] = l_687;
                        if (l_672)
                            break;
                        if (l_688)
                            break;
                    }
                    else
                    {
                        (*l_581) = (*p_44);
                        if ((*g_328))
                            break;
                    }
                }
                for (g_210 = 0; (g_210 > (-13)); g_210--)
                {
                    for (g_444 = 0; (g_444 == 35); ++g_444)
                    {
                        return (*g_298);


                    }
                    if ((*p_44))
                        break;
                    (*l_581) = l_686;
                }
            }
            (*g_328) = ((g_2[5] & (-1L)) & (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(0x55AFL, 3)), (*l_581))));
            (*g_298) = func_45(func_45(l_697, (*p_44), ((safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((*l_697), g_2[4])), (((6L <= (safe_add_func_uint16_t_u_u((!(&g_298 != (void*)0)), (l_704 ^ (*l_697))))) && l_688) != l_705))) >= 8L), p_43, (*p_43)), (*p_43), g_213, (*g_298), (*l_697));
            for (g_559 = 1; (g_559 <= 7); g_559 += 1)
            {
                unsigned l_711[7] = {4294967295UL,0x163B8CDBL,4294967295UL,4294967295UL,0x163B8CDBL,4294967295UL,4294967295UL};
                int i;
                if (((*l_581) && (safe_add_func_int16_t_s_s(((((*p_43) | (g_290 >= (g_210 >= (safe_unary_minus_func_uint8_t_u((g_444 <= 0L)))))) ^ (l_711[0] && l_681)) && g_65), l_711[1]))))
                {
                    const int *l_713[7][5] = {{&l_554[1],&g_210,(void*)0,&g_210,&l_554[1]},{&l_554[7],&l_686,&l_686,&l_554[2],&l_686},{&l_554[1],&l_686,&l_686,&l_554[1],&l_554[2]},{&g_210,&l_554[1],(void*)0,&l_686,&l_686},{&l_554[7],&l_554[1],&l_554[7],&l_554[2],&l_554[1]},{&l_686,&l_686,&l_554[2],&l_686,&l_554[2]},{&l_686,&l_686,(void*)0,&l_554[1],&g_210}};
                    const int **l_712 = &l_713[2][0];
                    int i, j;
                    (*l_712) = &l_686;
                }
                else
                {
                    if ((*p_44))
                        break;
                    for (g_65 = 0; (g_65 <= 0); g_65 += 1)
                    {
                        int i, j, k;
                        l_554[g_559] = ((g_213 > (g_637[g_213][(g_65 + 3)][(g_559 + 2)] != &l_686)) || g_290);
                        g_637[g_65][(g_65 + 6)][(g_65 + 9)] = func_45((*g_298), (g_2[4] ^ ((*l_697) == (safe_mod_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((safe_mod_func_uint8_t_u_u((g_444 > g_559), l_719)))), 0xAAL)))), (*l_697), p_43, (*p_44));
                        (*g_298) = l_720;
                    }
                }
            }
            for (l_705 = 0; (l_705 <= 0); l_705 += 1)
            {
                unsigned l_721 = 0x7AC6C685L;
                int l_729 = 0xEA7130D2L;
                unsigned char l_730[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_730[i] = 255UL;
                if (l_721)
                    break;
                l_697 = func_45((*g_298), ((safe_add_func_uint8_t_u_u((0x14L || l_724), 0xC3L)) && (safe_add_func_int32_t_s_s((g_32[1] | (l_721 | ((safe_add_func_uint16_t_u_u((g_2[1] | ((&l_686 != (*g_298)) ^ g_213)), (*l_697))) >= l_721))), (*l_697)))), (*l_697), l_697, (*p_44));

                ;
                if ((*p_44))
                    continue;
                l_729 = 0x8CCDD66BL;
                for (l_704 = 0; (l_704 <= 0); l_704 += 1)
                {
                    int i, j, k;
                    l_730[0] = l_721;
                    (*g_328) = ((&l_729 == p_43) || (g_210 && (+(*l_697))));
                }
            }

            ;
        }


        for (g_559 = 0; (g_559 <= 7); g_559 += 1)
        {
            int i;
            (*g_298) = &l_554[g_559];
        }


        if ((*p_43))
        {
            const unsigned l_738 = 0xBF5561B9L;
            unsigned l_746 = 0x13931D86L;
            if ((*p_44))
            {
                (*g_298) = (void*)0;
            }
            else
            {
                unsigned short l_733 = 1UL;
                short l_784 = 0L;
                if (((*l_581) > 0xC9ABL))
                {
                    unsigned l_747 = 0xD069136DL;
                    for (g_213 = 4; (g_213 != 37); ++g_213)
                    {
                        unsigned l_743 = 6UL;
                        int l_744 = 9L;
                        (*l_581) = (*p_43);
                        (*g_328) = ((l_733 > (-1L)) && ((*p_43) && ((safe_div_func_uint8_t_u_u(g_65, l_733)) & ((safe_add_func_int32_t_s_s((*p_44), (l_738 >= ((safe_lshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(0L, (l_733 ^ 0xB6AFBCE9L))), l_738)) ^ (*p_43))))) > l_743))));
                        (*g_298) = func_45(p_44, l_744, l_745[1][0][2], p_43, l_746);
                        (*l_581) = ((-1L) ^ (l_744 && l_747));
                    }
                }
                else
                {
                    short l_752 = 0x6233L;
                    int l_753 = 0L;
                    if (((safe_div_func_uint16_t_u_u((((((*p_44) != (safe_add_func_uint16_t_u_u(l_733, l_733))) & 0UL) && 0L) >= l_746), l_752)) <= (l_753 && l_753)))
                    {
                        int *l_762 = &l_554[3];
                        int *l_763 = &g_65;
                        (*g_298) = func_45(p_43, ((*l_581) == ((&p_44 != (void*)0) != ((safe_sub_func_uint32_t_u_u(3UL, ((safe_div_func_uint8_t_u_u(l_733, ((*p_44) ^ ((safe_mod_func_int16_t_s_s(0x8626L, g_444)) ^ 0x88L)))) & 0x6463L))) < g_65))), g_32[0], l_762, l_733);
                        return l_763;



                    }
                    else
                    {
                        const char l_770 = (-5L);
                        (*l_581) = ((4UL && l_738) >= (!(safe_sub_func_int32_t_s_s(0xF9AA5D33L, (safe_add_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(g_290, ((l_753 <= ((void*)0 == p_44)) || (((void*)0 != p_44) & l_752)))), l_770))))));
                        (*g_328) = ((safe_mod_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((*p_43), l_770)), 0xD3B7L)), (safe_add_func_int32_t_s_s(((l_738 | l_753) >= l_752), (safe_rshift_func_int16_t_s_u(((!(safe_unary_minus_func_int16_t_s((((l_784 == (l_746 || g_2[4])) <= 1UL) < g_65)))) ^ l_746), 1)))))) != l_784), (*p_43))) && l_785);
                        return p_44;



                    }
                }
                for (g_65 = 0; g_65 < 7; g_65 += 1)
                {
                    for (l_785 = 0; l_785 < 7; l_785 += 1)
                    {
                        l_553[g_65][l_785] = 0x4A26L;
                    }
                }
            }
        }
        else
        {
            int ** const *l_789[6][10][4] = {{{&g_298,&g_298,&g_298,&g_298},{&g_298,&g_298,&g_298,&g_298},{&g_298,&g_298,&g_298,&g_298},{(void*)0,(void*)0,&g_298,&g_298},{(void*)0,&g_298,&g_298,&g_298},{&g_298,&g_298,&g_298,&g_298},{&g_298,&g_298,&g_298,&g_298},{&g_298,&g_298,&g_298,(void*)0},{&g_298,&g_298,&g_298,&g_298},{&g_298,&g_298,&g_298,(void*)0}},{{(void*)0,&g_298,&g_298,&g_298},{&g_298,&g_298,&g_298,&g_298},{(void*)0,&g_298,&g_298,(void*)0},{&g_298,&g_298,(void*)0,&g_298},{&g_298,&g_298,&g_298,&g_298},{(void*)0,&g_298,&g_298,(void*)0},{(void*)0,&g_298,&g_298,&g_298},{&g_298,&g_298,&g_298,&g_298},{&g_298,&g_298,(void*)0,&g_298},{(void*)0,&g_298,&g_298,&g_298}},{{(void*)0,&g_298,&g_298,(void*)0},{&g_298,&g_298,&g_298,&g_298},{&g_298,&g_298,&g_298,&g_298},{&g_298,&g_298,&g_298,(void*)0},{&g_298,&g_298,&g_298,&g_298},{&g_298,&g_298,&g_298,&g_298},{(void*)0,&g_298,&g_298,(void*)0},{(void*)0,&g_298,&g_298,&g_298},{&g_298,&g_298,&g_298,(void*)0},{&g_298,&g_298,(void*)0,&g_298}},{{&g_298,&g_298,&g_298,(void*)0},{&g_298,&g_298,&g_298,&g_298},{&g_298,&g_298,&g_298,&g_298},{&g_298,&g_298,&g_298,&g_298},{&g_298,&g_298,&g_298,&g_298},{&g_298,&g_298,&g_298,&g_298},{&g_298,&g_298,(void*)0,&g_298},{(void*)0,&g_298,(void*)0,&g_298},{&g_298,&g_298,&g_298,&g_298},{(void*)0,&g_298,&g_298,&g_298}},{{&g_298,&g_298,&g_298,&g_298},{&g_298,&g_298,(void*)0,(void*)0},{&g_298,&g_298,&g_298,&g_298},{&g_298,(void*)0,&g_298,&g_298},{&g_298,&g_298,&g_298,&g_298},{&g_298,&g_298,&g_298,&g_298},{&g_298,&g_298,&g_298,&g_298},{&g_298,&g_298,(void*)0,&g_298},{&g_298,&g_298,&g_298,&g_298},{&g_298,&g_298,&g_298,&g_298}},{{&g_298,&g_298,&g_298,&g_298},{&g_298,&g_298,&g_298,&g_298},{&g_298,(void*)0,&g_298,&g_298},{&g_298,&g_298,&g_298,(void*)0},{&g_298,&g_298,&g_298,(void*)0},{&g_298,&g_298,&g_298,&g_298},{(void*)0,&g_298,&g_298,&g_298},{&g_298,&g_298,&g_298,&g_298},{&g_298,&g_298,&g_298,&g_298},{(void*)0,&g_298,&g_298,&g_298}}};
            int i, j, k;
            for (g_444 = 26; (g_444 > 3); g_444 = safe_sub_func_uint32_t_u_u(g_444, 1))
            {
                return p_43;



            }
            (*l_581) = (*p_44);
            (*l_581) = (l_789[0][4][0] == (void*)0);
        }
    }


    ;
    (*g_328) = (g_213 > 8UL);
    if ((*p_44))
    {
        unsigned short l_795 = 0x88B8L;
        const int ***l_800 = (void*)0;
        int *l_814 = &g_210;
        (*g_328) = (*p_43);
        for (g_444 = (-1); (g_444 < 20); g_444 = safe_add_func_uint16_t_u_u(g_444, 7))
        {
            unsigned l_792 = 7UL;
            int ***l_801 = &g_298;
            int l_816 = 0x068C49FEL;
        }
        (*g_298) = p_43;
    }
    else
    {
        (*l_581) = 1L;
        (*g_298) = p_43;
    }
    return p_43;



}







static int * func_45(int * p_46, int p_47, unsigned p_48, int * p_49, int p_50)
{
    int *l_56 = (void*)0;
    int **l_55 = &l_56;
    int *l_60 = (void*)0;
    int *l_114 = &g_65;
    int *** const l_119 = &l_55;
    int *l_185 = &g_2[4];
    unsigned char l_220 = 0x8EL;
    unsigned char l_255 = 0x2AL;
    short l_386[6];
    unsigned short l_421 = 0xBEA3L;
    int *l_551 = &g_2[3];
    int i;
    for (i = 0; i < 6; i++)
        l_386[i] = (-1L);
    l_55 = l_55;
    return l_551;


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_32[i], "g_32[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    transparent_crc(g_559, "g_559", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_874[i][j], "g_874[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1074, "g_1074", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
