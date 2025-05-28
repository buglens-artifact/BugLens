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



static int g_11[7][5] = {{0x72CA3C0BL,0xBB0CB8CEL,0xBB0CB8CEL,0x72CA3C0BL,0x72CA3C0BL},{0L,0x31551DA6L,0L,0x31551DA6L,0L},{0x72CA3C0BL,0x72CA3C0BL,0xBB0CB8CEL,0xBB0CB8CEL,0x72CA3C0BL},{0x71247ADFL,0x31551DA6L,0x71247ADFL,0x31551DA6L,0x71247ADFL},{0x72CA3C0BL,0xBB0CB8CEL,0xBB0CB8CEL,0x72CA3C0BL,0x72CA3C0BL},{0L,0x31551DA6L,0L,0x31551DA6L,0L},{0x72CA3C0BL,0x72CA3C0BL,0xBB0CB8CEL,0xBB0CB8CEL,0x72CA3C0BL}};
static int *g_72 = &g_11[1][2];
static int g_82 = 0x14C53FB5L;
static unsigned char g_133 = 1UL;
static int *g_138 = &g_11[5][1];
static int g_156 = 0x538C8CD2L;
static int **g_189[5][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
static int g_202 = 0xF5B41CB9L;
static int *** const g_433[6][3][5] = {{{&g_189[1][4],&g_189[2][2],&g_189[2][2],&g_189[2][2],(void*)0},{&g_189[2][7],&g_189[1][4],&g_189[0][5],&g_189[2][2],&g_189[2][2]},{&g_189[2][2],&g_189[2][2],(void*)0,&g_189[1][5],&g_189[3][7]}},{{&g_189[2][7],&g_189[1][5],&g_189[3][3],&g_189[3][7],&g_189[3][3]},{&g_189[1][4],&g_189[1][4],&g_189[2][2],&g_189[3][7],&g_189[4][7]},{&g_189[1][5],&g_189[2][7],&g_189[2][2],&g_189[1][5],&g_189[1][4]}},{{&g_189[2][2],&g_189[2][2],&g_189[2][2],&g_189[2][2],&g_189[2][2]},{&g_189[1][4],&g_189[2][7],&g_189[3][1],&g_189[2][2],&g_189[2][2]},{&g_189[2][2],&g_189[1][4],&g_189[2][2],&g_189[2][2],&g_189[2][2]}},{{&g_189[3][7],&g_189[1][5],(void*)0,&g_189[2][2],&g_189[2][2]},{&g_189[2][7],&g_189[2][2],&g_189[3][3],&g_189[3][7],&g_189[1][4]},{&g_189[3][3],&g_189[1][4],(void*)0,&g_189[2][2],&g_189[4][7]}},{{&g_189[2][2],&g_189[1][5],&g_189[1][5],&g_189[4][7],(void*)0},{&g_189[4][7],&g_189[2][7],&g_189[2][2],&g_189[3][7],&g_189[2][7]},{(void*)0,&g_189[2][2],&g_189[2][2],&g_189[2][2],&g_189[2][2]}},{{&g_189[2][2],(void*)0,&g_189[1][5],&g_189[3][7],&g_189[2][2]},{&g_189[2][7],&g_189[4][7],&g_189[3][1],&g_189[4][7],&g_189[2][7]},{&g_189[1][5],&g_189[4][7],(void*)0,&g_189[2][2],&g_189[2][2]}}};
static const int g_516 = 0xC1112C31L;
static int g_535 = (-1L);



static unsigned char func_1(void);
static int * func_2(const int * p_3, int * const p_4, int * p_5, int * p_6);
static int * func_7(const int * p_8, int * p_9);
static int * func_12(int * p_13, int * p_14);
static int * func_15(const int * const p_16, int * p_17, int * p_18, char p_19, int p_20);
static char func_22(unsigned p_23);
static unsigned func_38(int * p_39, int * p_40, int * p_41, int p_42, unsigned short p_43);
static unsigned func_44(int * p_45, short p_46, unsigned p_47);
static unsigned func_49(int * p_50, short p_51);
static int * func_52(unsigned p_53, int * p_54, char p_55, int p_56);
static unsigned char func_1(void)
{
    const int *l_10[4][7] = {{&g_11[5][2],&g_11[5][2],&g_11[5][2],&g_11[5][2],&g_11[0][3],&g_11[5][2],&g_11[5][2]},{&g_11[6][1],&g_11[6][1],&g_11[1][4],&g_11[5][2],(void*)0,&g_11[5][2],&g_11[1][4]},{&g_11[5][2],&g_11[5][2],&g_11[5][2],&g_11[5][2],&g_11[0][3],&g_11[5][2],&g_11[5][2]},{&g_11[6][1],&g_11[6][1],&g_11[1][4],&g_11[5][2],(void*)0,&g_11[5][2],&g_11[1][4]}};
    int *l_21 = &g_11[5][2];
    unsigned l_190 = 1UL;
    char l_191 = 7L;
    int *l_201 = &g_202;
    int **l_526 = &l_201;
    int *l_531 = (void*)0;
    int *l_534[5] = {&g_535,&g_535,&g_535,&g_535,&g_535};
    char l_536 = 0x11L;
    int i, j;
    (*l_526) = func_2(func_7(l_10[1][1], func_12(func_15(l_10[1][1], l_21, l_21, func_22((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((((safe_mul_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u(((((((((safe_div_func_int8_t_s_s((*l_21), (*l_21))) , ((0x5BL ^ ((((safe_mod_func_uint32_t_u_u((1UL != (safe_add_func_uint32_t_u_u(func_38(l_21, &g_11[6][2], &g_11[5][2], g_11[3][2], g_11[0][2]), 4294967295UL))), (-1L))) & (-4L)) , (*g_138)) || (*l_21))) , (void*)0)) == g_138) , g_133) , l_10[1][1]) == l_10[2][5]) , (*l_21)) & g_133), l_190)) ^ g_133) || (*l_21)), 0xFE2EL)) & g_133) != g_156) < 4294967292UL), g_133)), l_191))), g_156), l_201)), g_138, l_21, l_21);
    for (g_156 = 0; (g_156 != (-27)); g_156 = safe_sub_func_uint16_t_u_u(g_156, 1))
    {
        return g_133;
    }
    (**l_526) = ((safe_rshift_func_int8_t_s_s(((((*l_201) , (**l_526)) >= g_202) == g_133), 3)) , (**l_526));
    return g_156;
}







static int * func_2(const int * p_3, int * const p_4, int * p_5, int * p_6)
{
    const char l_432 = 3L;
    for (g_156 = 3; (g_156 >= 0); g_156 -= 1)
    {
        int *l_412 = &g_11[0][0];
        short l_459 = (-7L);
        int ***l_486 = &g_189[0][0];
        for (g_202 = 4; (g_202 >= 1); g_202 -= 1)
        {
            int i, j;
            if (g_11[(g_202 + 1)][g_156])
                break;
            if ((*p_5))
                break;
        }
        for (g_82 = 0; (g_82 <= 4); g_82 += 1)
        {
            int **l_411[9][2][2];
            unsigned short l_487[5][1][4] = {{{0xFAF1L,9UL,9UL,0xFAF1L}},{{9UL,0xFAF1L,9UL,9UL}},{{0xFAF1L,0xFAF1L,1UL,0xFAF1L}},{{0xFAF1L,9UL,9UL,0xFAF1L}},{{9UL,0xFAF1L,9UL,9UL}}};
            char l_517 = 0x11L;
            int i, j, k;
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_411[i][j][k] = &g_72;
                }
            }
            p_5 = &g_11[(g_82 + 2)][g_156];
            for (g_202 = 0; (g_202 <= 4); g_202 += 1)
            {
                int *l_438 = &g_202;
                unsigned l_448[3];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_448[i] = 2UL;
                if (g_11[(g_156 + 3)][g_202])
                {
                    l_412 = &g_11[(g_156 + 3)][g_202];
                }
                else
                {
                    int l_417 = (-1L);
                    int *l_434 = &g_11[5][2];
                    int l_435 = 0x817E7BB5L;
                    int i, j;
                    g_11[g_82][g_202] = (((safe_div_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(l_417, (safe_mod_func_int32_t_s_s((p_3 == p_4), (safe_lshift_func_uint16_t_u_u((((safe_div_func_uint32_t_u_u(g_202, func_49(func_52(((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(((safe_mod_func_int32_t_s_s(l_432, ((~((g_433[5][1][0] == (void*)0) , g_11[(g_156 + 3)][g_202])) , (0UL || 0L)))) , g_11[0][2]), g_11[(g_156 + 3)][g_202])), 13)), 12)) > 0x0AB4L), l_434, g_11[5][2], (*l_412)), (*l_412)))) >= 0x5AA17D50L) ^ 0x8FL), 3)))))) == 1UL), 0x80F5L)) & g_156) & l_435);
                    for (l_435 = 0; (l_435 < (-21)); --l_435)
                    {
                        unsigned l_441 = 1UL;
                        (*p_5) = func_22(((l_438 != (void*)0) , (((safe_rshift_func_uint8_t_u_s((((l_441 , (l_441 < ((((g_202 <= (*l_412)) == (*l_438)) | (*l_438)) , (safe_lshift_func_uint8_t_u_u(func_22(((safe_rshift_func_uint8_t_u_s(((safe_mul_func_int8_t_s_s(0x99L, l_441)) >= l_441), l_432)) && (*l_434))), l_448[1]))))) == 0xCEF0EC3FL) > 0xD3L), l_432)) ^ l_441) , (*l_434))));
                        (*g_138) = 0x14465E9DL;
                    }
                }
            }
        }
    }
    return p_5;
}







static int * func_7(const int * p_8, int * p_9)
{
    int *l_209 = &g_82;
    int *l_220 = &g_202;
    int l_291 = 0x496A8B98L;
    unsigned l_317 = 0UL;
    const unsigned l_321 = 6UL;
    int *l_410[4];
    int i;
    for (i = 0; i < 4; i++)
        l_410[i] = (void*)0;
    if ((*p_9))
    {
        int l_219 = 0x0DF3C2A6L;
        int *l_251 = &g_202;
        int *l_264 = &g_11[5][2];
        int *l_265 = &g_82;
        char l_333 = 0x6FL;
        for (g_82 = 0; (g_82 >= 17); g_82 = safe_add_func_uint32_t_u_u(g_82, 1))
        {
            int **l_210[1][8][10] = {{{(void*)0,&g_72,(void*)0,&g_72,(void*)0,&g_72,(void*)0,&g_72,(void*)0,&g_72},{&g_72,&g_72,(void*)0,&l_209,(void*)0,&g_72,&g_72,&l_209,&g_72,&g_72},{(void*)0,&l_209,&g_72,&l_209,(void*)0,&g_138,&g_72,&g_138,(void*)0,&l_209},{(void*)0,&l_209,(void*)0,&g_72,&g_72,&l_209,&g_72,&g_72,(void*)0,&l_209},{(void*)0,&g_72,(void*)0,&g_72,(void*)0,&g_72,(void*)0,&g_72,(void*)0,&g_72},{&g_72,&g_72,(void*)0,&g_138,(void*)0,&g_72,&g_72,&g_138,&g_72,&g_72},{(void*)0,&g_138,&g_72,&g_138,(void*)0,&l_209,&g_72,&l_209,(void*)0,&g_138},{(void*)0,&g_138,(void*)0,&g_72,&g_72,&g_138,&g_72,&g_72,(void*)0,&g_138}}};
            int i, j, k;
            p_9 = l_209;
            for (g_156 = 0; (g_156 > (-18)); g_156 = safe_sub_func_int32_t_s_s(g_156, 2))
            {
                unsigned char l_221 = 0xA4L;
                (*g_138) = (safe_mod_func_uint16_t_u_u((safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((g_133 , l_221), 12)), l_219)), 0x79EBL));
                if ((*g_138))
                    break;
            }
        }
        for (g_82 = 1; (g_82 <= 4); g_82 += 1)
        {
            int *l_224 = &g_82;
            char l_246 = 0xC6L;
            for (g_133 = 0; (g_133 <= 4); g_133 += 1)
            {
                int l_245[9] = {(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)};
                char l_288 = 0x8AL;
                int *l_314 = (void*)0;
                int i;
            }
            for (g_156 = 0; (g_156 <= 4); g_156 += 1)
            {
                short l_326 = 0xD266L;
                int *l_327[7] = {(void*)0,&g_11[4][2],(void*)0,(void*)0,&g_11[4][2],(void*)0,(void*)0};
                int **l_328 = &l_220;
                int i, j;
                p_8 = func_52(g_156, p_9, l_326, (func_49(&l_291, (&l_264 != &g_72)) < 65527UL));
                (*l_328) = func_12(l_327[3], &l_219);
                g_11[(g_82 + 1)][g_156] = (*p_8);
                (*l_328) = (void*)0;
            }
            for (l_317 = 0; (l_317 <= 4); l_317 += 1)
            {
                int i, j;
                g_11[(g_82 + 2)][g_82] = (*l_224);
                p_9 = func_52((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((&g_72 == &l_224) != g_11[(g_82 + 2)][g_82]), (g_11[(g_82 + 2)][g_82] , ((func_22((*l_251)) && ((0x3EL != l_333) >= ((*l_224) <= 0x42C02545L))) > g_202)))), 3)), l_224, g_202, (*l_224));
                for (g_202 = 0; g_202 < 7; g_202 += 1)
                {
                    for (l_333 = 0; l_333 < 5; l_333 += 1)
                    {
                        g_11[g_202][l_333] = 0x8D01C44CL;
                    }
                }
            }
        }
    }
    else
    {
        unsigned short l_334[10];
        int *l_339 = &g_11[5][2];
        int l_346[8] = {0x54A044D0L,0xFF06FB2CL,0x54A044D0L,0xFF06FB2CL,0x54A044D0L,0xFF06FB2CL,0x54A044D0L,0xFF06FB2CL};
        int *l_387 = &g_11[3][3];
        int i;
        for (i = 0; i < 10; i++)
            l_334[i] = 65535UL;
        (*l_209) = (((~0x186793AEL) , (func_44(p_9, (g_11[0][3] < g_11[5][2]), (*l_220)) , (*g_138))) | (*l_220));
        if ((((l_334[8] || (safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((p_9 == l_339) < (func_44(((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((*l_339), ((safe_mod_func_int8_t_s_s((((65531UL | ((g_82 , &l_209) != &l_339)) > (2UL > 0x248291D3L)) , l_346[1]), (*l_209))) < 0UL))), 7UL)) , &l_346[2]), (*l_209), g_82) ^ g_202)), g_133)), (*l_220)))) == l_334[8]) <= g_156))
        {
            const int * const l_347 = &g_202;
            int *l_356[3];
            int *l_373 = &l_346[1];
            int **l_376[3];
            int i;
            for (i = 0; i < 3; i++)
                l_356[i] = &g_202;
            for (i = 0; i < 3; i++)
                l_376[i] = &l_373;
            p_9 = func_15(l_347, p_9, &l_346[0], (*l_339), ((safe_lshift_func_int8_t_s_u((*l_339), ((0x83L ^ (*l_220)) , 0xB5L))) ^ (safe_rshift_func_uint8_t_u_s((((-2L) ^ (*l_347)) > 0xAD4AL), g_11[0][2]))));
            if ((((*l_347) > func_49(p_9, g_11[3][4])) & 0x1C45L))
            {
                int *l_352 = &l_291;
                if (func_44(l_352, ((void*)0 != l_352), (*l_339)))
                {
                    int **l_353 = &l_209;
                    (*l_353) = func_52((*l_347), ((*l_339) , p_9), g_82, (*l_347));
                }
                else
                {
                    int *l_354 = &g_11[5][2];
                    return l_354;
                }
                for (l_291 = 0; (l_291 <= 9); l_291 += 1)
                {
                    int *l_355 = &l_346[6];
                    (*l_209) = (&p_9 != &l_220);
                    for (g_82 = 1; (g_82 <= 4); g_82 += 1)
                    {
                        return l_356[0];
                    }
                }
                for (l_291 = 0; (l_291 > 26); l_291++)
                {
                    int ***l_359 = &g_189[0][4];
                    (*l_359) = &p_9;
                }
                for (g_133 = 0; (g_133 <= 17); ++g_133)
                {
                    char l_362[9][7] = {{(-2L),0xBEL,1L,1L,0x99L,(-7L),0xA7L},{2L,(-2L),2L,1L,0xA7L,1L,0xBEL},{0x99L,1L,1L,1L,1L,1L,0x99L},{1L,(-9L),0xBEL,0xA7L,0L,1L,0L},{1L,0L,0L,1L,2L,(-7L),1L},{0x99L,(-7L),0xBEL,2L,2L,0xBEL,(-7L)},{2L,0x99L,1L,(-9L),0L,1L,1L},{1L,0x99L,2L,0x99L,1L,(-9L),0L},{0xBEL,(-7L),0x99L,(-9L),0xA7L,(-9L),0x99L}};
                    int **l_363 = &g_72;
                    int i, j;
                    (*l_220) = ((*l_347) & (2L ^ l_362[7][0]));
                    if ((*l_220))
                        continue;
                    (*l_363) = &l_346[1];
                }
            }
            else
            {
                unsigned l_364 = 5UL;
                l_364 = (*l_347);
                (*l_209) = (((safe_rshift_func_uint8_t_u_u((+((*l_209) == ((*l_220) , func_49(p_9, ((+(safe_mul_func_int8_t_s_s((safe_div_func_int16_t_s_s(0L, (safe_mod_func_uint8_t_u_u(func_49(l_373, (g_156 , (+(l_364 > ((*l_209) >= (safe_rshift_func_uint16_t_u_u(65535UL, 3))))))), g_133)))), g_11[3][3]))) , g_133))))), 2)) || l_364) || g_202);
                return p_9;
            }
            p_9 = l_373;
        }
        else
        {
            unsigned l_379[9][7][2] = {{{4294967294UL,4294967293UL},{0xE3237F59L,4294967294UL},{0x3F1AD50CL,0x3F1AD50CL},{0x3F1AD50CL,4294967294UL},{0xE3237F59L,4294967293UL},{4294967294UL,4294967293UL},{0xE3237F59L,4294967294UL}},{{0x3F1AD50CL,0x3F1AD50CL},{0x3F1AD50CL,4294967294UL},{0xE3237F59L,4294967293UL},{4294967294UL,4294967293UL},{0xE3237F59L,4294967294UL},{0x3F1AD50CL,0x3F1AD50CL},{0x3F1AD50CL,4294967294UL}},{{0xE3237F59L,4294967293UL},{4294967294UL,4294967293UL},{0xE3237F59L,4294967294UL},{0x3F1AD50CL,0x3F1AD50CL},{0x3F1AD50CL,0x3F1AD50CL},{4294967294UL,0xB1E90C7EL},{0x3F1AD50CL,0xB1E90C7EL}},{{4294967294UL,0x3F1AD50CL},{4294967293UL,4294967293UL},{4294967293UL,0x3F1AD50CL},{4294967294UL,0xB1E90C7EL},{0x3F1AD50CL,0xB1E90C7EL},{4294967294UL,0x3F1AD50CL},{4294967293UL,4294967293UL}},{{4294967293UL,0x3F1AD50CL},{4294967294UL,0xB1E90C7EL},{0x3F1AD50CL,0xB1E90C7EL},{4294967294UL,0x3F1AD50CL},{4294967293UL,4294967293UL},{4294967293UL,0x3F1AD50CL},{4294967294UL,0xB1E90C7EL}},{{0x3F1AD50CL,0xB1E90C7EL},{4294967294UL,0x3F1AD50CL},{4294967293UL,4294967293UL},{4294967293UL,0x3F1AD50CL},{4294967294UL,0xB1E90C7EL},{0x3F1AD50CL,0xB1E90C7EL},{4294967294UL,0x3F1AD50CL}},{{4294967293UL,4294967293UL},{4294967293UL,0x3F1AD50CL},{4294967294UL,0xB1E90C7EL},{0x3F1AD50CL,0xB1E90C7EL},{4294967294UL,0x3F1AD50CL},{4294967293UL,4294967293UL},{4294967293UL,0x3F1AD50CL}},{{4294967294UL,0xB1E90C7EL},{0x3F1AD50CL,0xB1E90C7EL},{4294967294UL,0x3F1AD50CL},{4294967293UL,4294967293UL},{4294967293UL,0x3F1AD50CL},{4294967294UL,0xB1E90C7EL},{0x3F1AD50CL,0xB1E90C7EL}},{{4294967294UL,0x3F1AD50CL},{4294967293UL,4294967293UL},{4294967293UL,0x3F1AD50CL},{4294967294UL,0xB1E90C7EL},{0x3F1AD50CL,0xB1E90C7EL},{4294967294UL,0x3F1AD50CL},{4294967293UL,4294967293UL}}};
            int *l_394 = (void*)0;
            int i, j, k;
            (*l_209) = (safe_add_func_uint8_t_u_u(0x87L, (l_379[3][4][1] , ((*l_339) , ((safe_unary_minus_func_int8_t_s(((0xAAC7A9D4L & (safe_div_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(g_82, (safe_div_func_int32_t_s_s((*l_209), (*l_339))))) <= g_202), (*l_387)))) & 0x98ACL))) || 0xCAL)))));
            if (((safe_add_func_uint16_t_u_u(g_202, (safe_unary_minus_func_int32_t_s((*l_339))))) || (*p_9)))
            {
                unsigned short l_393[9] = {0x5C87L,0x5C87L,0x5C87L,0x5C87L,0x5C87L,0x5C87L,0x5C87L,0x5C87L,0x5C87L};
                int *l_395 = &g_202;
                int i;
                for (g_156 = 0; (g_156 >= (-7)); g_156 = safe_sub_func_uint8_t_u_u(g_156, 1))
                {
                    (*l_387) = l_393[0];
                }
                l_395 = ((l_393[0] >= (&l_346[1] == l_394)) , func_15(p_9, p_9, l_395, (*l_339), (!(*l_387))));
            }
            else
            {
                int l_398 = 0x8AA49B41L;
                for (g_82 = 17; (g_82 == (-1)); g_82--)
                {
                    int **l_401 = &l_387;
                    (*l_401) = func_52((g_82 , func_22(g_156)), p_9, l_398, ((4294967295UL < 4294967293UL) , (safe_mul_func_uint16_t_u_u(0x397BL, 65535UL))));
                    return p_9;
                }
            }
        }
        (*l_209) = ((((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(0x93L, 2)), (g_202 && g_202))) >= (((g_11[5][2] > g_11[0][2]) , g_82) , (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(g_133, 15)), g_11[5][1])))) , 0xEBL) <= g_11[2][4]);
        (*g_138) = (-8L);
    }
    return l_410[1];
}







static int * func_12(int * p_13, int * p_14)
{
    unsigned short l_205 = 65535UL;
    int **l_206[8][6][4] = {{{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72}},{{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72}},{{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72}},{{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72}},{{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72}},{{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72}},{{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72}},{{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,&g_72}}};
    int i, j, k;
    for (g_202 = 0; (g_202 <= (-30)); g_202 = safe_sub_func_uint32_t_u_u(g_202, 3))
    {
        return p_14;
    }
    p_13 = func_52((l_205 >= l_205), p_13, ((void*)0 == &p_13), l_205);
    return p_14;
}







static int * func_15(const int * const p_16, int * p_17, int * p_18, char p_19, int p_20)
{
    int l_195 = 0L;
    int *l_200 = &g_11[3][3];
    (*p_17) = ((safe_sub_func_int8_t_s_s((6UL > (l_195 | (((safe_div_func_uint32_t_u_u(l_195, l_195)) == func_44(p_17, (g_11[2][2] == (safe_mul_func_uint16_t_u_u(l_195, 0x20BDL))), g_156)) , g_11[0][3]))), p_19)) & 0x86EC0BB6L);
    return l_200;
}







static char func_22(unsigned p_23)
{
    unsigned char l_192 = 1UL;
    return l_192;
}







static unsigned func_38(int * p_39, int * p_40, int * p_41, int p_42, unsigned short p_43)
{
    int *l_48 = (void*)0;
    int *l_108[5][8][3] = {{{&g_11[1][0],&g_11[5][2],&g_82},{(void*)0,&g_82,&g_11[0][1]},{(void*)0,&g_11[3][3],&g_82},{&g_11[5][2],&g_82,&g_11[4][0]},{&g_82,&g_11[5][2],&g_11[6][0]},{&g_11[5][4],&g_11[5][2],&g_11[5][2]},{&g_82,&g_11[1][1],&g_11[2][0]},{&g_11[1][1],&g_11[4][0],&g_11[3][3]}},{{&g_11[1][1],&g_11[5][2],&g_11[5][4]},{&g_82,&g_82,(void*)0},{&g_11[5][4],&g_11[5][2],&g_11[1][0]},{&g_82,&g_11[5][2],&g_11[5][2]},{&g_11[5][2],&g_11[5][2],&g_11[5][2]},{(void*)0,&g_82,&g_11[5][2]},{(void*)0,&g_11[5][2],&g_11[1][0]},{&g_11[1][0],(void*)0,(void*)0}},{{&g_82,&g_11[1][0],&g_11[5][4]},{&g_82,&g_11[6][0],&g_11[3][3]},{&g_11[5][2],&g_11[6][0],&g_11[2][0]},{&g_11[5][2],&g_11[1][0],&g_11[5][2]},{(void*)0,(void*)0,&g_11[6][0]},{&g_11[5][2],&g_11[5][2],&g_11[4][0]},{&g_11[5][2],&g_82,&g_82},{&g_11[6][0],&g_11[5][2],&g_11[0][1]}},{{&g_11[5][2],&g_11[5][2],&g_82},{&g_11[5][2],&g_11[5][2],&g_11[5][2]},{(void*)0,&g_82,&g_11[1][1]},{&g_11[5][2],&g_11[5][2],(void*)0},{&g_11[5][2],&g_11[4][0],(void*)0},{&g_82,&g_11[1][1],&g_11[1][1]},{&g_82,&g_11[5][2],(void*)0},{&g_11[5][2],&g_11[5][2],&g_11[5][2]}},{{&g_11[5][4],(void*)0,&g_82},{&g_11[1][0],&g_82,&g_11[6][0]},{&g_11[3][3],(void*)0,&g_11[5][2]},{&g_82,&g_11[5][2],&g_11[0][1]},{(void*)0,&g_11[5][2],&g_11[5][2]},{&g_82,&g_11[2][0],&g_11[5][2]},{&g_11[2][0],&g_11[5][2],&g_82},{&g_11[2][0],&g_11[3][3],(void*)0}}};
    unsigned l_120 = 0UL;
    int l_121 = 1L;
    char l_131[5][9] = {{0xE2L,0x97L,0x52L,0x52L,0x97L,0xE2L,0xFEL,(-5L),0x8BL},{(-1L),1L,(-10L),1L,1L,(-10L),1L,(-1L),1L},{0x8BL,0x52L,0x2DL,0xFEL,0x6AL,0x6AL,0xFEL,0x2DL,0x52L},{1L,(-1L),0xC6L,1L,0xE6L,1L,1L,0xE6L,1L},{0x87L,0x5DL,0x87L,0xB0L,0xFEL,0x8BL,0xE2L,0xE2L,0x8BL}};
    int i, j, k;
    l_108[0][6][2] = (func_44(l_48, p_42, func_49(func_52(p_42, &g_11[5][2], p_42, p_42), g_11[5][2])) , &g_82);
    (*p_39) = 0x2B59225FL;
    l_108[0][6][2] = func_52(g_11[5][2], &g_82, (((safe_unary_minus_func_int8_t_s((0x94L != (safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(0UL, (safe_sub_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((*g_72) , g_11[3][3]), l_120)), (g_11[0][4] != (*g_72)))))), 0)), (*g_72)))))) == l_121) && g_11[2][4]), p_43);
    for (p_43 = 0; (p_43 != 24); p_43 = safe_add_func_uint32_t_u_u(p_43, 2))
    {
        int **l_130 = &g_72;
        int l_132 = 0x7DAE833BL;
        unsigned short l_136 = 0xECF3L;
        (*p_39) = (((((safe_div_func_int8_t_s_s(func_49(&g_11[6][3], (g_11[0][0] < (safe_div_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((((g_82 , l_130) == &g_72) & p_43), (**l_130))) , ((**l_130) & p_43)), 1L)))), l_131[0][6])) , 0x565CL) <= l_132) != p_42) >= g_133);
        for (l_132 = 0; (l_132 <= 2); l_132 += 1)
        {
            int l_187 = 0xE91A3732L;
            int i, j;
        }
        g_189[2][2] = &p_41;
    }
    return g_133;
}







static unsigned func_44(int * p_45, short p_46, unsigned p_47)
{
    int **l_77[1][9] = {{(void*)0,&g_72,(void*)0,(void*)0,&g_72,(void*)0,(void*)0,&g_72,(void*)0}};
    int i, j;
lbl_97:
    for (p_46 = 0; (p_46 == (-20)); --p_46)
    {
        for (p_47 = 0; (p_47 != 40); p_47++)
        {
            return g_11[0][2];
        }
    }
    g_72 = &g_11[0][1];
    for (p_46 = 0; (p_46 == (-24)); --p_46)
    {
        int *l_86 = &g_11[5][2];
        int **l_93[6] = {&l_86,&l_86,&l_86,&l_86,&l_86,&l_86};
        int i;
        for (p_47 = 0; (p_47 <= 43); ++p_47)
        {
            int *l_85 = &g_11[5][2];
            int *l_98[3];
            int i;
            for (i = 0; i < 3; i++)
                l_98[i] = &g_11[5][2];
            for (g_82 = (-16); (g_82 > 12); g_82 = safe_add_func_int8_t_s_s(g_82, 5))
            {
                g_72 = l_85;
            }
            l_86 = l_86;
            if ((*g_72))
            {
                return p_47;
            }
            else
            {
                int l_89 = 2L;
                unsigned char l_94 = 3UL;
                int l_95 = 0x35339FE2L;
                if ((safe_lshift_func_int8_t_s_u((((((g_11[5][2] || p_47) , 3UL) >= ((((g_82 , (void*)0) != &g_72) & ((void*)0 == &p_45)) & ((((void*)0 != l_77[0][8]) == g_11[5][1]) >= 0xBB1EL))) | p_47) , (*l_86)), l_89)))
                {
                    l_95 = (0UL || func_49(func_52(((0xE0CFL | (((void*)0 == l_85) == ((*l_85) && (((g_11[6][3] <= ((((((safe_unary_minus_func_int32_t_s((safe_add_func_uint8_t_u_u((l_93[0] != &g_72), (p_46 , 0x0FL))))) , p_46) , &g_11[5][2]) != p_45) && (-9L)) ^ g_11[5][2])) & (*l_85)) ^ l_94)))) , p_46), p_45, p_46, g_82), g_11[2][2]));
                    (*l_86) = (+(*g_72));
                }
                else
                {
                    unsigned short l_96 = 0x10B9L;
                    if (l_96)
                    {
                        if (l_96)
                            break;
                        if (g_82)
                            goto lbl_97;
                        g_72 = l_98[0];
                        if ((*g_72))
                            continue;
                    }
                    else
                    {
                        unsigned l_103[8][10][2] = {{{9UL,0xD4091144L},{0x2EF88E35L,4294967295UL},{0x2EF88E35L,0xD4091144L},{9UL,0xBF6EB6F9L},{0x2EF88E35L,0x50BCEF86L},{0x2E3E2A50L,4294967295UL},{4294967286UL,0xB6F065A9L},{4294967295UL,0x9A98420AL},{4294967294UL,0x9A98420AL},{4294967295UL,0xB6F065A9L}},{{4294967286UL,4294967295UL},{0x2E3E2A50L,0x50BCEF86L},{0x2EF88E35L,0xBF6EB6F9L},{0x6700432FL,0xAF600D47L},{0xB1260E86L,1UL},{0xB1260E86L,0xAF600D47L},{0x6700432FL,0xBF6EB6F9L},{0x2EF88E35L,0x50BCEF86L},{0x2E3E2A50L,4294967295UL},{4294967286UL,0xB6F065A9L}},{{4294967295UL,0x9A98420AL},{4294967294UL,0x9A98420AL},{4294967295UL,0xB6F065A9L},{4294967286UL,4294967295UL},{0x2E3E2A50L,0x50BCEF86L},{0x2EF88E35L,0xBF6EB6F9L},{0x6700432FL,0xAF600D47L},{0xB1260E86L,1UL},{0xB1260E86L,0xAF600D47L},{0x6700432FL,0xBF6EB6F9L}},{{0x2EF88E35L,0x50BCEF86L},{0x2E3E2A50L,4294967295UL},{4294967286UL,0xB6F065A9L},{4294967295UL,0x9A98420AL},{4294967294UL,0x9A98420AL},{4294967295UL,0xB6F065A9L},{4294967286UL,4294967295UL},{0x2E3E2A50L,0x50BCEF86L},{0x2EF88E35L,0xBF6EB6F9L},{0x6700432FL,0xAF600D47L}},{{0xB1260E86L,1UL},{0xB1260E86L,0xAF600D47L},{0x6700432FL,0xBF6EB6F9L},{0x2EF88E35L,0x50BCEF86L},{0x2E3E2A50L,4294967295UL},{4294967286UL,0xB6F065A9L},{4294967295UL,0x9A98420AL},{4294967294UL,0x9A98420AL},{4294967295UL,0xB6F065A9L},{4294967286UL,4294967295UL}},{{0x2E3E2A50L,0x50BCEF86L},{0x2EF88E35L,0x0AB71361L},{0UL,0x42EBA385L},{4294967286UL,0xD4091144L},{4294967286UL,0x42EBA385L},{0UL,0x0AB71361L},{0xB1260E86L,4294967295UL},{0x2EF88E35L,0x9A98420AL},{0xE4380B9CL,4294967295UL},{0UL,0xBF6EB6F9L}},{{0xC4E49CAFL,0xBF6EB6F9L},{0UL,4294967295UL},{0xE4380B9CL,0x9A98420AL},{0x2EF88E35L,4294967295UL},{0xB1260E86L,0x0AB71361L},{0UL,0x42EBA385L},{4294967286UL,0xD4091144L},{4294967286UL,0x42EBA385L},{0UL,0x0AB71361L},{0xB1260E86L,4294967295UL}},{{0x2EF88E35L,0x9A98420AL},{0xE4380B9CL,4294967295UL},{0UL,0xBF6EB6F9L},{0xC4E49CAFL,0xBF6EB6F9L},{0UL,4294967295UL},{0xE4380B9CL,0x9A98420AL},{0x2EF88E35L,4294967295UL},{0xB1260E86L,0x0AB71361L},{0UL,0x42EBA385L},{4294967286UL,0xD4091144L}}};
                        int i, j, k;
                        l_85 = ((((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(5UL, g_11[5][2])), 7)) <= (p_46 < 1UL)) <= l_103[5][6][0]) , p_45);
                        (*l_86) = (*g_72);
                        if (p_46)
                            goto lbl_97;
                        (*l_86) = (safe_sub_func_int16_t_s_s(g_11[5][2], (l_96 == ((((void*)0 == &g_72) && g_11[0][2]) <= (((safe_mod_func_uint32_t_u_u(g_11[2][0], p_46)) ^ p_47) | 0xB0L)))));
                    }
                }
            }
            l_98[0] = &g_11[6][4];
        }
    }
    g_72 = &g_11[5][2];
    return g_11[1][1];
}







static unsigned func_49(int * p_50, short p_51)
{
    unsigned short l_70 = 7UL;
    if (g_11[5][2])
    {
        (*p_50) = (((void*)0 != &g_11[4][1]) & p_51);
    }
    else
    {
        int *l_57[6] = {&g_11[5][2],&g_11[5][2],&g_11[5][2],&g_11[5][2],&g_11[5][2],&g_11[5][2]};
        int **l_71[1][3];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_71[i][j] = &l_57[2];
        }
        (*p_50) = ((void*)0 != l_57[2]);
        g_72 = func_52(g_11[5][2], p_50, (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((((((safe_add_func_uint8_t_u_u(((g_11[2][4] || p_51) == (((void*)0 != p_50) | (safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((g_11[5][2] <= 7L), (safe_lshift_func_uint8_t_u_u(1UL, 5)))), 2)))), l_70)) > 1L) && g_11[5][0]) != g_11[5][2]) , p_51), p_51)), 7)), l_70);
    }
    return p_51;
}







static int * func_52(unsigned p_53, int * p_54, char p_55, int p_56)
{
    return &g_11[5][0];
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
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_11[i][j], "g_11[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_516, "g_516", print_hash_value);
    transparent_crc(g_535, "g_535", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
