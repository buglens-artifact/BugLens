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
   unsigned short f0;
   char * f1;
   short f2;
   char f3;
};

union U1 {
   const unsigned short f0;
};


static int g_10 = 0xB16B471DL;
static union U1 g_38[1][10][3] = {{{{0x2D68L}, {0x2D68L}, {0UL}}, {{0x2D68L}, {0x2D68L}, {0UL}}, {{0x2D68L}, {0x2D68L}, {0UL}}, {{0x2D68L}, {0x2D68L}, {0UL}}, {{0x2D68L}, {0x2D68L}, {0UL}}, {{0x2D68L}, {0x2D68L}, {0UL}}, {{0x2D68L}, {0x2D68L}, {0UL}}, {{0x2D68L}, {0x2D68L}, {0UL}}, {{0x2D68L}, {0x2D68L}, {0UL}}, {{0x2D68L}, {0x2D68L}, {0UL}}}};
static char g_48 = 0L;
static char g_66 = 7L;
static int *g_77 = &g_10;
static int **g_76[5][1][9] = {{{&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}}, {{&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}}, {{&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}}, {{&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}}, {{&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}}};
static short g_85 = 1L;
static unsigned g_87 = 4294967295UL;
static int g_91 = 0xF045C746L;
static unsigned short g_106[8] = {65535UL, 0x95DFL, 65535UL, 0x95DFL, 65535UL, 0x95DFL, 65535UL, 0x95DFL};
static char **g_136 = (void*)0;
static unsigned short g_142[2] = {9UL, 9UL};
static unsigned char g_150 = 0xF9L;
static unsigned char g_152[3] = {249UL, 249UL, 249UL};
static int *g_164 = &g_91;
static int *g_172 = &g_10;
static int ** const g_171 = &g_172;
static int ** const *g_170 = &g_171;
static unsigned g_183 = 0x495E14DDL;
static union U0 g_184 = {0x9D5CL};
static const char g_198 = 0x92L;
static const char *g_197 = &g_198;
static unsigned char * const g_205[10] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
static unsigned * const *g_213 = (void*)0;
static unsigned *g_281[8][1] = {{&g_183}, {&g_183}, {&g_183}, {&g_183}, {&g_183}, {&g_183}, {&g_183}, {&g_183}};
static unsigned *g_290 = (void*)0;
static unsigned g_298 = 0x512EF95AL;
static union U1 *g_302 = (void*)0;
static short g_328 = 0x385BL;
static short * const g_327 = &g_328;
static short * const *g_326 = &g_327;
static int * const * const *g_397[5] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
static unsigned **g_409 = &g_290;
static unsigned g_422[7][3][1] = {{{0x0B0B84D4L}, {0x0B0B84D4L}, {0x0B0B84D4L}}, {{0x0B0B84D4L}, {0x0B0B84D4L}, {0x0B0B84D4L}}, {{0x0B0B84D4L}, {0x0B0B84D4L}, {0x0B0B84D4L}}, {{0x0B0B84D4L}, {0x0B0B84D4L}, {0x0B0B84D4L}}, {{0x0B0B84D4L}, {0x0B0B84D4L}, {0x0B0B84D4L}}, {{0x0B0B84D4L}, {0x0B0B84D4L}, {0x0B0B84D4L}}, {{0x0B0B84D4L}, {0x0B0B84D4L}, {0x0B0B84D4L}}};
static int g_435 = 0x0FB5F215L;
static union U1 g_451 = {1UL};
static union U0 *g_505[5] = {&g_184, &g_184, &g_184, &g_184, &g_184};
static const int *g_508 = &g_91;
static const union U0 *g_537 = &g_184;
static const union U0 **g_536 = &g_537;
static int g_613 = 1L;
static char g_623 = 0x08L;
static unsigned ***g_638[1] = {&g_409};
static unsigned ****g_637 = &g_638[0];
static const unsigned **g_648 = (void*)0;
static unsigned g_674 = 0xB835E603L;
static union U1 ***g_713 = (void*)0;
static union U1 ****g_712 = &g_713;
static int g_831 = 5L;



static const int func_1(void);
static int * func_2(unsigned char p_3, unsigned p_4, char * p_5, char p_6, char * p_7);
static const unsigned short func_14(int ** p_15);
static int * func_20(int ** const p_21, const int * p_22, short p_23, char * p_24, int ** const p_25);
static char * func_29(int p_30, int p_31, int ** p_32, unsigned p_33);
static int ** func_34(union U1 p_35, char * p_36, unsigned char p_37);
static char * func_39(unsigned char p_40, union U0 p_41, int * const * p_42, unsigned short p_43, int p_44);
static unsigned short func_52(char p_53, union U0 p_54, int * p_55);
static int * func_57(unsigned char p_58, unsigned short p_59, const int p_60);
static unsigned func_71(int ** p_72, unsigned p_73, char * p_74, short p_75);
static const int func_1(void)
{
    int *l_9 = &g_10;
    int **l_8 = &l_9;
    int *l_11 = (void*)0;
    int **l_16 = (void*)0;
    const int l_908 = 0xEE76585EL;
    unsigned char *l_909 = &g_152[1];
    unsigned char *l_910 = &g_150;
    short l_913 = (-5L);
    (*g_171) = ((*l_8) = func_2(((*l_910) = ((*l_909) |= ((((*l_8) = (void*)0) != l_11) < (safe_add_func_uint16_t_u_u(g_10, ((func_14(l_16) == g_198) <= (l_908 & (!(*g_197))))))))), (safe_sub_func_int16_t_s_s(l_913, g_674)), l_909, (*g_197), l_909));
    return g_152[0];
}







static int * func_2(unsigned char p_3, unsigned p_4, char * p_5, char p_6, char * p_7)
{
    int *l_917 = (void*)0;
    for (g_183 = (-2); (g_183 == 41); g_183++)
    {
        int l_916 = 0xA1D418BEL;
        l_916 &= p_4;
    }
    return l_917;
}







static const unsigned short func_14(int ** p_15)
{
    int *l_19[10] = {&g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10};
    const int *l_26 = &g_10;
    unsigned l_45 = 0x2B4CF22AL;
    union U0 l_46 = {0x82ECL};
    int l_903[8];
    int ***l_904 = (void*)0;
    int ***l_905 = &g_76[2][0][4];
    int i;
    for (i = 0; i < 8; i++)
        l_903[i] = 0L;
    l_903[7] = ((*g_164) = ((safe_add_func_int16_t_s_s(0x89FEL, (l_19[5] == ((**g_170) = func_20(&l_19[5], l_26, (safe_rshift_func_int16_t_s_s((*l_26), 3)), func_29(g_10, (*l_26), func_34(g_38[0][8][2], func_39(l_45, l_46, &l_19[5], g_10, g_10), (*l_26)), (*l_26)), &l_19[9]))))) >= g_451.f0));
    (*l_905) = p_15;
    (*l_905) = (void*)0;
    (*g_164) = (*g_164);
    return g_328;
}







static int * func_20(int ** const p_21, const int * p_22, short p_23, char * p_24, int ** const p_25)
{
    const unsigned char l_901[6][7][6] = {{{0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}}, {{0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}}, {{0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}}, {{0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}}, {{0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}}, {{0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}, {0x25L, 0x40L, 0UL, 0x13L, 0xE1L, 7UL}}};
    int l_902 = 0L;
    int i, j, k;
    (*g_171) = (*p_25);
    l_902 = (l_901[0][2][1] || p_23);
    l_902 |= (*p_22);
    return (*p_21);
}







static char * func_29(int p_30, int p_31, int ** p_32, unsigned p_33)
{
    unsigned **l_891[9] = {&g_281[1][0], &g_281[1][0], &g_281[1][0], &g_281[1][0], &g_281[1][0], &g_281[1][0], &g_281[1][0], &g_281[1][0], &g_281[1][0]};
    char l_900 = 1L;
    int i;
    (*g_164) &= (safe_rshift_func_uint8_t_u_u((((l_891[7] == &g_281[5][0]) & ((((((void*)0 == &g_136) >= p_31) > 0x7D03L) > (safe_lshift_func_int16_t_s_u(((*g_327) = (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(p_33, (((safe_lshift_func_int8_t_s_s((l_900 | (**g_171)), (*g_197))) ^ 0x0839L) <= g_831))), 0L))), 0))) < 0x5DL)) != p_30), l_900));
    return &g_66;
}







static int ** func_34(union U1 p_35, char * p_36, unsigned char p_37)
{
    char l_49[3];
    union U1 **l_561 = &g_302;
    union U1 ***l_560 = &l_561;
    int l_579 = 0xA60B38A1L;
    unsigned short *l_586 = &g_106[3];
    union U0 l_611 = {0UL};
    int l_619 = 0L;
    int **l_641 = (void*)0;
    int *l_662 = &g_435;
    unsigned l_696 = 0xBAF2D054L;
    unsigned short l_707 = 65534UL;
    union U1 ****l_730 = &g_713;
    int *l_753 = &l_579;
    union U0 **l_787 = &g_505[0];
    union U0 *** const l_786 = &l_787;
    union U0 *** const *l_785[10] = {&l_786, (void*)0, &l_786, (void*)0, &l_786, (void*)0, &l_786, (void*)0, &l_786, (void*)0};
    int *l_809 = &g_435;
    int i;
    for (i = 0; i < 3; i++)
        l_49[i] = 0x2DL;
    for (p_37 = 0; (p_37 <= 2); p_37 += 1)
    {
        union U0 l_56 = {0x4373L};
        char *l_65 = &g_66;
        const unsigned char l_103 = 0x90L;
        int *l_581 = (void*)0;
        int l_625 = 1L;
        int i;
    }
    for (g_623 = (-28); (g_623 >= (-12)); ++g_623)
    {
        char l_628 = 0x4EL;
        const unsigned **l_647 = (void*)0;
        int *l_649 = &g_91;
        union U1 *l_652 = &g_38[0][0][0];
        const union U0 * const * const l_676[3][10][8] = {{{&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}, {&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}, {&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}, {&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}, {&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}, {&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}, {&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}, {&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}, {&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}, {&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}}, {{&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}, {&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}, {&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}, {&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}, {&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}, {&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}, {&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}, {&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}, {&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}, {&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}}, {{&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}, {&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}, {&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}, {&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}, {&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}, {&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}, {&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}, {&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}, {&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}, {&g_537, &g_537, &g_537, &g_537, (void*)0, &g_537, (void*)0, &g_537}}};
        const union U0 * const *l_679[7];
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_679[i] = &g_537;
        l_579 = (l_628 & (p_37 ^ p_37));
    }
    for (g_85 = 0; (g_85 <= 0); g_85 += 1)
    {
        int *l_683[7][9] = {{&g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10}};
        union U0 ***l_716 = (void*)0;
        char ***l_739 = &g_136;
        char ****l_738 = &l_739;
        short l_746 = 0xA5A8L;
        unsigned short l_777 = 65527UL;
        union U0 l_800 = {7UL};
        int **l_803 = &l_662;
        int *****l_823 = (void*)0;
        union U0 l_828 = {0x9C14L};
        int *l_830 = &g_10;
        int *l_870[9] = {&g_435, &g_91, &g_435, &g_91, &g_435, &g_91, &g_435, &g_91, &g_435};
        int i, j;
    }
    (*g_164) &= ((g_150 > 0xF322L) ^ ((*l_662) &= (*l_753)));
    return &g_172;
}







static char * func_39(unsigned char p_40, union U0 p_41, int * const * p_42, unsigned short p_43, int p_44)
{
    char *l_47[8];
    int i;
    for (i = 0; i < 8; i++)
        l_47[i] = &g_48;
    return l_47[4];
}







static unsigned short func_52(char p_53, union U0 p_54, int * p_55)
{
    char l_551 = 0xD6L;
    int l_552 = (-1L);
    int l_553 = 3L;
    int l_554[8][1];
    int i, j;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
            l_554[i][j] = 0x7A25FA16L;
    }
    l_554[7][0] = ((p_54.f2 >= (safe_rshift_func_uint16_t_u_u((l_551 > (-10L)), 7))) < (9UL != (l_553 &= (l_552 = (l_551 || ((*g_164) = l_551))))));
    for (p_53 = 9; (p_53 <= (-7)); p_53--)
    {
        (**g_170) = &l_553;
    }
    return p_54.f3;
}







static int * func_57(unsigned char p_58, unsigned short p_59, const int p_60)
{
    const unsigned l_104 = 0x043423D5L;
    int *l_111[5][1][2];
    char ***l_159 = &g_136;
    int l_190 = 0x715F7E57L;
    const char *l_199[1];
    int l_258 = 8L;
    int l_361[9][2] = {{9L, 9L}, {9L, 9L}, {9L, 9L}, {9L, 9L}, {9L, 9L}, {9L, 9L}, {9L, 9L}, {9L, 9L}, {9L, 9L}};
    char *l_389 = (void*)0;
    const int *l_393[2];
    unsigned l_401 = 0x640675F7L;
    short ** const *l_404 = (void*)0;
    short *l_442 = (void*)0;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
                l_111[i][j][k] = (void*)0;
        }
    }
    for (i = 0; i < 1; i++)
        l_199[i] = &g_66;
    for (i = 0; i < 2; i++)
        l_393[i] = &g_91;
    if (l_104)
    {
        unsigned short *l_105[2];
        int *l_117 = (void*)0;
        unsigned * const l_120[9][5][5] = {{{&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}}, {{&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}}, {{&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}}, {{&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}}, {{&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}}, {{&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}}, {{&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}}, {{&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}}, {{&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, &g_87}}};
        int l_125 = 0xEFA0E0CCL;
        char *l_135 = &g_48;
        char **l_134[10] = {&l_135, &l_135, &l_135, &l_135, &l_135, &l_135, &l_135, &l_135, &l_135, &l_135};
        unsigned l_162 = 0x8818BC76L;
        int ** const *l_167[8] = {&g_76[2][0][4], &g_76[4][0][4], &g_76[2][0][4], &g_76[4][0][4], &g_76[2][0][4], &g_76[4][0][4], &g_76[2][0][4], &g_76[4][0][4]};
        short l_185 = 0x4E1DL;
        union U0 l_191 = {0x001BL};
        int * const l_194 = (void*)0;
        int * const *l_193 = &l_194;
        int * const **l_192 = &l_193;
        const char *l_196 = (void*)0;
        const char **l_195[1][2][9] = {{{&l_196, &l_196, &l_196, &l_196, &l_196, &l_196, &l_196, &l_196, &l_196}, {&l_196, &l_196, &l_196, &l_196, &l_196, &l_196, &l_196, &l_196, &l_196}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_105[i] = &g_106[3];
        if ((l_105[0] == &p_59))
        {
            int l_112 = 0xA93EFF9DL;
            char *l_113[5][2] = {{(void*)0, &g_48}, {(void*)0, &g_48}, {(void*)0, &g_48}, {(void*)0, &g_48}, {(void*)0, &g_48}};
            int l_116 = 0L;
            unsigned *l_124 = (void*)0;
            int i, j;
            l_116 &= ((g_66 ^= ((g_106[1] = (safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((((void*)0 != l_111[0][0][1]) <= (l_111[4][0][1] != (void*)0)), 1)), 14))) != (l_112 = g_91))) | (safe_mod_func_uint32_t_u_u(p_59, p_59)));
            for (p_59 = 0; (p_59 <= 0); p_59 += 1)
            {
                return l_117;
            }
            for (l_112 = (-19); (l_112 == 25); l_112 = safe_add_func_uint8_t_u_u(l_112, 7))
            {
                unsigned *l_121 = &g_87;
                unsigned **l_122 = (void*)0;
                unsigned **l_123[9] = {&l_121, (void*)0, &l_121, (void*)0, &l_121, (void*)0, &l_121, (void*)0, &l_121};
                int **l_126 = &g_77;
                int i;
                l_125 = (l_120[6][0][4] == (l_124 = l_121));
                (*l_126) = &l_116;
            }
        }
        else
        {
            char *l_132 = &g_66;
            char **l_131 = &l_132;
            int **l_156 = &l_111[4][0][1];
            int l_163[3][10] = {{0x012F00CAL, (-1L), 0x5127764FL, (-1L), 0x012F00CAL, 0L, 0x012F00CAL, (-1L), 0x5127764FL, (-1L)}, {0x012F00CAL, (-1L), 0x5127764FL, (-1L), 0x012F00CAL, 0L, 0x012F00CAL, (-1L), 0x5127764FL, (-1L)}, {0x012F00CAL, (-1L), 0x5127764FL, (-1L), 0x012F00CAL, 0L, 0x012F00CAL, (-1L), 0x5127764FL, (-1L)}};
            unsigned *l_182 = &g_183;
            union U0 l_189 = {1UL};
            int i, j;
            for (g_48 = (-17); (g_48 != 26); g_48++)
            {
                for (g_87 = 26; (g_87 <= 55); g_87 = safe_add_func_uint16_t_u_u(g_87, 2))
                {
                    char ***l_133[3][9][9] = {{{(void*)0, &l_131, &l_131, (void*)0, &l_131, &l_131, &l_131, &l_131, (void*)0}, {(void*)0, &l_131, &l_131, (void*)0, &l_131, &l_131, &l_131, &l_131, (void*)0}, {(void*)0, &l_131, &l_131, (void*)0, &l_131, &l_131, &l_131, &l_131, (void*)0}, {(void*)0, &l_131, &l_131, (void*)0, &l_131, &l_131, &l_131, &l_131, (void*)0}, {(void*)0, &l_131, &l_131, (void*)0, &l_131, &l_131, &l_131, &l_131, (void*)0}, {(void*)0, &l_131, &l_131, (void*)0, &l_131, &l_131, &l_131, &l_131, (void*)0}, {(void*)0, &l_131, &l_131, (void*)0, &l_131, &l_131, &l_131, &l_131, (void*)0}, {(void*)0, &l_131, &l_131, (void*)0, &l_131, &l_131, &l_131, &l_131, (void*)0}, {(void*)0, &l_131, &l_131, (void*)0, &l_131, &l_131, &l_131, &l_131, (void*)0}}, {{(void*)0, &l_131, &l_131, (void*)0, &l_131, &l_131, &l_131, &l_131, (void*)0}, {(void*)0, &l_131, &l_131, (void*)0, &l_131, &l_131, &l_131, &l_131, (void*)0}, {(void*)0, &l_131, &l_131, (void*)0, &l_131, &l_131, &l_131, &l_131, (void*)0}, {(void*)0, &l_131, &l_131, (void*)0, &l_131, &l_131, &l_131, &l_131, (void*)0}, {(void*)0, &l_131, &l_131, (void*)0, &l_131, &l_131, &l_131, &l_131, (void*)0}, {(void*)0, &l_131, &l_131, (void*)0, &l_131, &l_131, &l_131, &l_131, (void*)0}, {(void*)0, &l_131, &l_131, (void*)0, &l_131, &l_131, &l_131, &l_131, (void*)0}, {(void*)0, &l_131, &l_131, (void*)0, &l_131, &l_131, &l_131, &l_131, (void*)0}, {(void*)0, &l_131, &l_131, (void*)0, &l_131, &l_131, &l_131, &l_131, (void*)0}}, {{(void*)0, &l_131, &l_131, (void*)0, &l_131, &l_131, &l_131, &l_131, (void*)0}, {(void*)0, &l_131, &l_131, (void*)0, &l_131, &l_131, &l_131, &l_131, (void*)0}, {(void*)0, &l_131, &l_131, (void*)0, &l_131, &l_131, &l_131, &l_131, (void*)0}, {(void*)0, &l_131, &l_131, (void*)0, &l_131, &l_131, &l_131, &l_131, (void*)0}, {(void*)0, &l_131, &l_131, (void*)0, &l_131, &l_131, &l_131, &l_131, (void*)0}, {(void*)0, &l_131, &l_131, (void*)0, &l_131, &l_131, &l_131, &l_131, (void*)0}, {(void*)0, &l_131, &l_131, (void*)0, &l_131, &l_131, &l_131, &l_131, (void*)0}, {(void*)0, &l_131, &l_131, (void*)0, &l_131, &l_131, &l_131, &l_131, (void*)0}, {(void*)0, &l_131, &l_131, (void*)0, &l_131, &l_131, &l_131, &l_131, (void*)0}}};
                    int i, j, k;
                    g_136 = (l_134[1] = l_131);
                }
                l_125 ^= p_60;
            }
            for (g_66 = 8; (g_66 < 27); g_66++)
            {
                int ***l_143 = (void*)0;
                int ***l_144 = &g_76[3][0][2];
                unsigned char *l_149 = &g_150;
                unsigned char *l_151 = &g_152[0];
                int l_153 = 0xBB980416L;
                unsigned short l_177[10][6] = {{65535UL, 0xD160L, 0x1A33L, 0xD068L, 0xF3C9L, 0xF072L}, {65535UL, 0xD160L, 0x1A33L, 0xD068L, 0xF3C9L, 0xF072L}, {65535UL, 0xD160L, 0x1A33L, 0xD068L, 0xF3C9L, 0xF072L}, {65535UL, 0xD160L, 0x1A33L, 0xD068L, 0xF3C9L, 0xF072L}, {65535UL, 0xD160L, 0x1A33L, 0xD068L, 0xF3C9L, 0xF072L}, {65535UL, 0xD160L, 0x1A33L, 0xD068L, 0xF3C9L, 0xF072L}, {65535UL, 0xD160L, 0x1A33L, 0xD068L, 0xF3C9L, 0xF072L}, {65535UL, 0xD160L, 0x1A33L, 0xD068L, 0xF3C9L, 0xF072L}, {65535UL, 0xD160L, 0x1A33L, 0xD068L, 0xF3C9L, 0xF072L}, {65535UL, 0xD160L, 0x1A33L, 0xD068L, 0xF3C9L, 0xF072L}};
                int i, j;
                l_153 = (((*l_151) ^= (p_60 ^ (p_59 < ((safe_unary_minus_func_uint32_t_u((g_142[1] &= (safe_rshift_func_int16_t_s_s(g_87, 15))))) || ((*l_149) = ((((*l_144) = (void*)0) == (void*)0) ^ (safe_sub_func_uint32_t_u_u(g_142[1], (g_106[6] & (0x3EL && (safe_sub_func_int8_t_s_s((l_143 != l_143), 0x5CL)))))))))))) & g_48);
            }
            (*g_164) = ((func_71(&l_117, ((*l_182) |= (&g_76[2][0][3] == (void*)0)), func_39(p_59, g_184, l_156, (l_185 = g_106[3]), p_59), g_106[6]) ^ p_59) > (*g_172));
            (*g_164) = (+(safe_unary_minus_func_uint8_t_u(((((void*)0 == (*g_170)) && (safe_mod_func_int8_t_s_s(p_60, ((g_106[3] != p_58) && func_71(&l_117, g_66, func_39(g_184.f3, l_189, l_156, p_60, p_59), l_190))))) | 0x5596D7DCL))));
        }
        (*g_164) &= ((((void*)0 == l_159) && ((g_197 = func_39(g_184.f3, l_191, ((*l_192) = (void*)0), g_150, p_58)) == l_199[0])) > (*g_172));
    }
    else
    {
        unsigned char *l_200[6][1] = {{&g_152[1]}, {&g_152[1]}, {&g_152[1]}, {&g_152[1]}, {&g_152[1]}, {&g_152[1]}};
        int l_203[4];
        int l_204 = 0xB89BC2A9L;
        short *l_227[1];
        unsigned char l_230 = 0x79L;
        unsigned short l_257 = 0x7823L;
        char l_292[9] = {0xF4L, 0xF4L, 4L, 0xF4L, 0xF4L, 4L, 0xF4L, 0xF4L, 4L};
        int **l_303 = (void*)0;
        int l_403 = 1L;
        unsigned l_405 = 4294967295UL;
        unsigned short *l_427 = (void*)0;
        unsigned short *l_428 = &g_106[3];
        int l_431 = 0xF32B6E4FL;
        int i, j;
        for (i = 0; i < 4; i++)
            l_203[i] = 9L;
        for (i = 0; i < 1; i++)
            l_227[i] = &g_184.f2;
        if ((((~g_66) <= (~(((g_152[1] = (!g_106[3])) & p_60) | (safe_add_func_int32_t_s_s((*g_172), (l_203[0] = (*g_77))))))) != l_204))
        {
            int **l_206[3][2];
            char *l_207 = &g_184.f3;
            unsigned *l_212 = &g_87;
            unsigned **l_211 = &l_212;
            short *l_228[5][9][2] = {{{&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}}, {{&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}}, {{&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}}, {{&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}}, {{&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}, {&g_85, &g_85}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                    l_206[i][j] = &g_164;
            }
            l_204 |= ((0x05CD1825L || (&p_58 == g_205[0])) && (!func_71(l_206[2][0], g_87, l_207, p_60)));
            for (g_87 = 0; (g_87 <= 1); g_87 += 1)
            {
                int *l_217 = &g_10;
                int l_224[8][2] = {{(-5L), 0L}, {(-5L), 0L}, {(-5L), 0L}, {(-5L), 0L}, {(-5L), 0L}, {(-5L), 0L}, {(-5L), 0L}, {(-5L), 0L}};
                unsigned * const l_278 = &g_183;
                int i, j;
            }
            for (l_258 = 1; (l_258 >= 0); l_258 -= 1)
            {
                unsigned l_284 = 0x4E104320L;
                char *l_289 = &g_48;
                int *l_299 = &g_91;
                for (p_58 = 0; (p_58 <= 1); p_58 += 1)
                {
                    char *l_287[7][5] = {{&g_66, &g_66, (void*)0, &g_48, &g_48}, {&g_66, &g_66, (void*)0, &g_48, &g_48}, {&g_66, &g_66, (void*)0, &g_48, &g_48}, {&g_66, &g_66, (void*)0, &g_48, &g_48}, {&g_66, &g_66, (void*)0, &g_48, &g_48}, {&g_66, &g_66, (void*)0, &g_48, &g_48}, {&g_66, &g_66, (void*)0, &g_48, &g_48}};
                    unsigned *l_288 = &g_183;
                    int l_291 = (-1L);
                    int **l_296 = &l_111[1][0][1];
                    int i, j;
                    if (((g_142[l_258] & g_142[l_258]) || func_71(&g_164, ((*l_288) |= (safe_sub_func_int8_t_s_s((0x5BL && (g_142[l_258] & ((4294967295UL >= l_284) > (p_58 <= (-1L))))), p_59))), l_289, g_152[2])))
                    {
                        l_204 &= ((g_290 = l_111[0][0][1]) == &g_87);
                        (*g_171) = (void*)0;
                        l_291 &= (-9L);
                    }
                    else
                    {
                        unsigned char **l_295 = &l_200[3][0];
                        unsigned *l_297 = &g_298;
                        int i;
                        (*g_164) = ((1L == ((*g_197) < l_203[0])) ^ (l_292[1] | ((safe_add_func_uint16_t_u_u((&g_152[0] != ((*l_295) = &p_58)), (g_142[l_258] = g_106[3]))) || ((*l_297) ^= (0x43B83979L | func_71(l_296, p_59, &l_292[1], g_198))))));
                        (*l_296) = ((**g_170) = l_299);
                        (*l_299) = 0xF8696A82L;
                    }
                    (*l_299) &= (p_58 | (safe_rshift_func_uint16_t_u_s((g_150 || g_150), g_184.f0)));
                    return l_299;
                }
            }
        }
        else
        {
            short l_311[6][10][4];
            union U1 *l_314[5][1] = {{&g_38[0][8][2]}, {&g_38[0][8][2]}, {&g_38[0][8][2]}, {&g_38[0][8][2]}, {&g_38[0][8][2]}};
            char *l_315 = &g_66;
            int *l_320 = &l_258;
            const int *l_354 = &l_258;
            int l_369[7];
            unsigned char l_390 = 1UL;
            unsigned **l_407 = &g_290;
            int i, j, k;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 10; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_311[i][j][k] = 1L;
                }
            }
            for (i = 0; i < 7; i++)
                l_369[i] = 0x1ECEA668L;
            g_302 = &g_38[0][5][1];
        }
        (*g_164) = ((func_71(l_303, p_59, &l_292[7], g_422[6][2][0]) & (((safe_mod_func_int16_t_s_s((*g_327), (safe_sub_func_int16_t_s_s((((-1L) != ((*l_428) &= g_152[0])) == (((safe_sub_func_int32_t_s_s(0L, l_431)) < p_58) && 0x05ABL)), p_59)))) == p_58) > p_58)) | 0x1737B02EL);
        l_393[0] = ((*g_171) = (**g_170));
    }
    for (g_328 = 0; (g_328 <= 0); g_328 += 1)
    {
        unsigned l_444 = 0x69A8D45FL;
        char *l_485 = &g_48;
        int l_501 = 0x5369AE72L;
        union U1 **l_524 = (void*)0;
        union U0 *l_541 = &g_184;
    }
    return (**g_170);
}







static unsigned func_71(int ** p_72, unsigned p_73, char * p_74, short p_75)
{
    unsigned short l_80 = 0xEB13L;
    for (p_75 = 0; (p_75 <= 0); p_75 += 1)
    {
        const unsigned short l_82[10][9][2] = {{{65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}}, {{65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}}, {{65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}}, {{65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}}, {{65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}}, {{65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}}, {{65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}}, {{65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}}, {{65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}}, {{65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}, {65526UL, 0xA65DL}}};
        char *l_83[8] = {&g_48, &g_48, &g_48, &g_48, &g_48, &g_48, &g_48, &g_48};
        int l_89 = (-9L);
        int i, j, k;
        for (p_73 = 0; (p_73 <= 0); p_73 += 1)
        {
            short l_81 = 0xD677L;
            short *l_84 = &g_85;
            unsigned *l_86 = &g_87;
            unsigned short *l_88 = (void*)0;
            int *l_90 = &g_91;
            int *l_102 = &l_89;
            (*l_90) = ((3UL || ((*l_84) |= (safe_sub_func_uint32_t_u_u(l_80, ((l_81 == (l_82[8][4][1] != (l_83[2] == p_74))) ^ (*g_77)))))) == (~(l_82[8][4][1] || (l_89 = (((*l_86) = l_81) <= l_82[8][4][1])))));
            (*l_102) &= (((*l_90) || (safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s(p_73, ((l_80 ^ ((*l_86) = ((+g_10) != ((safe_lshift_func_uint16_t_u_u(0x71DFL, 6)) || l_80)))) & (safe_lshift_func_uint16_t_u_s(((*p_74) ^ g_48), 1))))), (safe_mod_func_int32_t_s_s(p_75, (*l_90)))))) < (*l_90));
            (*l_102) = (-1L);
            for (l_80 = 0; (l_80 <= 0); l_80 += 1)
            {
                int i, j, k;
                if ((*l_90))
                    break;
            }
        }
        return p_75;
    }
    return g_91;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_38[i][j][k].f0, "g_38[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_106[i], "g_106[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_142[i], "g_142[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_150, "g_150", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_152[i], "g_152[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_184.f0, "g_184.f0", print_hash_value);
    transparent_crc(g_184.f2, "g_184.f2", print_hash_value);
    transparent_crc(g_184.f3, "g_184.f3", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_328, "g_328", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_422[i][j][k], "g_422[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_435, "g_435", print_hash_value);
    transparent_crc(g_451.f0, "g_451.f0", print_hash_value);
    transparent_crc(g_613, "g_613", print_hash_value);
    transparent_crc(g_623, "g_623", print_hash_value);
    transparent_crc(g_674, "g_674", print_hash_value);
    transparent_crc(g_831, "g_831", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
