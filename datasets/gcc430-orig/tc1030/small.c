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
   int f0;
   char f1;
   short f2;
};


static union U0 g_8 = {0x3629AA81L};
static int g_19 = 0L;
static unsigned short g_53 = 0xE6BAL;
static char g_73 = 0L;
static char * const g_76 = (void*)0;
static int g_80[2] = {(-1L), (-1L)};
static char g_84[5] = {0x26L, 0L, 0x26L, 0L, 0x26L};
static char g_87 = 0x1EL;
static int g_89 = 0x2131AC69L;
static int *g_94 = &g_80[1];
static int *g_99 = &g_80[0];
static int g_111[10] = {0x742485FCL, (-1L), 0x742485FCL, (-1L), 0x742485FCL, (-1L), 0x742485FCL, (-1L), 0x742485FCL, (-1L)};
static int **g_119[10][8] = {{&g_99, &g_94, &g_94, &g_94, &g_94, &g_99, &g_94, &g_94}, {&g_99, &g_94, &g_94, &g_94, &g_94, &g_99, &g_94, &g_94}, {&g_99, &g_94, &g_94, &g_94, &g_94, &g_99, &g_94, &g_94}, {&g_99, &g_94, &g_94, &g_94, &g_94, &g_99, &g_94, &g_94}, {&g_99, &g_94, &g_94, &g_94, &g_94, &g_99, &g_94, &g_94}, {&g_99, &g_94, &g_94, &g_94, &g_94, &g_99, &g_94, &g_94}, {&g_99, &g_94, &g_94, &g_94, &g_94, &g_99, &g_94, &g_94}, {&g_99, &g_94, &g_94, &g_94, &g_94, &g_99, &g_94, &g_94}, {&g_99, &g_94, &g_94, &g_94, &g_94, &g_99, &g_94, &g_94}, {&g_99, &g_94, &g_94, &g_94, &g_94, &g_99, &g_94, &g_94}};
static unsigned char g_149[8][1][3] = {{{8UL, 8UL, 255UL}}, {{8UL, 8UL, 255UL}}, {{8UL, 8UL, 255UL}}, {{8UL, 8UL, 255UL}}, {{8UL, 8UL, 255UL}}, {{8UL, 8UL, 255UL}}, {{8UL, 8UL, 255UL}}, {{8UL, 8UL, 255UL}}};
static unsigned short *g_176 = &g_53;
static unsigned short **g_175 = &g_176;
static short g_204 = (-1L);
static int g_208[5][4] = {{0x784709BDL, 0x784709BDL, 0x765A9252L, 0x784709BDL}, {0x784709BDL, 0x784709BDL, 0x765A9252L, 0x784709BDL}, {0x784709BDL, 0x784709BDL, 0x765A9252L, 0x784709BDL}, {0x784709BDL, 0x784709BDL, 0x765A9252L, 0x784709BDL}, {0x784709BDL, 0x784709BDL, 0x765A9252L, 0x784709BDL}};
static unsigned g_211 = 0x979A3CF2L;
static int g_267 = 0xDBB5A92DL;
static union U0 g_344 = {7L};
static union U0 *g_343 = &g_344;
static unsigned char g_354 = 0x22L;
static char *g_465 = &g_344.f1;
static short g_489 = 0L;
static char g_501 = 0x36L;
static int g_533[9] = {1L, 1L, 1L, 1L, 1L, 1L, 1L, 1L, 1L};
static const int g_587[10] = {(-4L), 0x4DE05211L, (-4L), 0x4DE05211L, (-4L), 0x4DE05211L, (-4L), 0x4DE05211L, (-4L), 0x4DE05211L};
static const int *g_588 = &g_89;
static char g_603 = 0L;
static char g_627 = 0xBFL;
static char **g_637 = &g_465;
static char ***g_636 = &g_637;
static unsigned g_647[10] = {4294967291UL, 4294967291UL, 4UL, 4294967291UL, 4294967291UL, 4UL, 4294967291UL, 4294967291UL, 4UL, 4294967291UL};
static short g_666 = 0x3570L;
static unsigned short * const *g_698 = &g_176;
static short g_811[9] = {0x5C6BL, 0x5C6BL, 0x5C6BL, 0x5C6BL, 0x5C6BL, 0x5C6BL, 0x5C6BL, 0x5C6BL, 0x5C6BL};
static unsigned *g_881 = &g_211;
static unsigned **g_880 = &g_881;
static unsigned *** const g_879 = &g_880;
static short **g_883 = (void*)0;
static unsigned g_899 = 1UL;
static int *g_1002 = (void*)0;
static unsigned short g_1011 = 65528UL;
static int ***g_1295 = &g_119[6][3];
static int ****g_1294 = &g_1295;
static int *g_1346[5] = {&g_208[4][0], &g_89, &g_208[4][0], &g_89, &g_208[4][0]};
static unsigned **g_1442 = (void*)0;
static unsigned ***g_1441[10] = {&g_1442, &g_1442, &g_1442, &g_1442, &g_1442, &g_1442, &g_1442, &g_1442, &g_1442, &g_1442};
static int *g_1530[4][7] = {{&g_208[3][2], &g_208[3][2], &g_89, &g_208[3][2], &g_208[3][2], &g_208[3][2], &g_89}, {&g_208[3][2], &g_208[3][2], &g_89, &g_208[3][2], &g_208[3][2], &g_208[3][2], &g_89}, {&g_208[3][2], &g_208[3][2], &g_89, &g_208[3][2], &g_208[3][2], &g_208[3][2], &g_89}, {&g_208[3][2], &g_208[3][2], &g_89, &g_208[3][2], &g_208[3][2], &g_208[3][2], &g_89}};
static short g_1660 = 1L;



static char func_1(void);
static int * func_2(union U0 p_3, unsigned short p_4, union U0 p_5, unsigned p_6, int * p_7);
static union U0 func_9(const union U0 p_10, int * p_11, unsigned char p_12);
static int * func_14(unsigned p_15);
static int * func_20(unsigned short p_21, int * p_22);
static char func_23(int p_24);
static unsigned short func_31(char p_32, int * p_33, int * p_34, unsigned p_35, int * p_36);
static int * func_39(int * p_40, int p_41);
static int * func_42(int * p_43);
static unsigned char func_63(const int p_64, char * p_65, const char p_66, unsigned p_67, char * const p_68);
static char func_1(void)
{
    const union U0 l_13 = {-1L};
    int *l_18 = &g_19;
    int **l_998 = &g_94;
    int **l_999 = &g_94;
    int **l_1000 = &g_94;
    int **l_1001[3];
    short *l_1003 = &g_204;
    unsigned l_1004 = 9UL;
    int *l_1501 = (void*)0;
    int i;
    for (i = 0; i < 3; i++)
        l_1001[i] = (void*)0;
    (*l_999) = func_2(g_8, g_8.f1, func_9(l_13, func_14((((0UL | 255UL) & (0x4057L != ((*l_1003) = (l_18 != (g_1002 = func_20((func_23((*l_18)) != 1UL), l_18)))))) > l_1004)), g_587[4]), g_8.f0, l_1501);
    for (g_501 = 14; (g_501 >= 22); g_501 = safe_add_func_int16_t_s_s(g_501, 7))
    {
        const union U0 *l_1658 = &g_8;
        const union U0 **l_1657 = &l_1658;
        int l_1659 = (-3L);
        (*l_1657) = &l_13;
        return l_1659;
    }
    (*l_18) = (0x67L >= (*l_18));
    return g_1660;
}







static int * func_2(union U0 p_3, unsigned short p_4, union U0 p_5, unsigned p_6, int * p_7)
{
    char l_1507 = 0L;
    const int l_1520 = 9L;
    const unsigned l_1528[7] = {4294967295UL, 0UL, 4294967295UL, 0UL, 4294967295UL, 0UL, 4294967295UL};
    int *l_1529[3][7] = {{&g_80[0], &g_80[0], &g_208[1][3], &g_80[0], (void*)0, &g_80[0], &g_208[1][3]}, {&g_80[0], &g_80[0], &g_208[1][3], &g_80[0], (void*)0, &g_80[0], &g_208[1][3]}, {&g_80[0], &g_80[0], &g_208[1][3], &g_80[0], (void*)0, &g_80[0], &g_208[1][3]}};
    int ****l_1549 = &g_1295;
    char *l_1555 = (void*)0;
    int l_1624 = 4L;
    unsigned short **l_1653 = &g_176;
    int i, j;
    for (p_4 = 0; (p_4 != 50); p_4++)
    {
        short l_1504 = 0xF72DL;
        int *l_1508 = &g_111[4];
        unsigned char l_1533 = 0x5CL;
        int *l_1551 = &g_19;
        int *l_1587 = &g_80[0];
        short l_1621[7] = {0x7409L, 0L, 0x7409L, 0L, 0x7409L, 0L, 0x7409L};
        char l_1627 = 0x22L;
        int i;
    }
    return p_7;
}







static union U0 func_9(const union U0 p_10, int * p_11, unsigned char p_12)
{
    unsigned l_1407 = 4294967288UL;
    char *l_1408 = (void*)0;
    int *l_1409 = &g_111[6];
    unsigned l_1410 = 4294967289UL;
    unsigned **l_1417 = &g_881;
    unsigned short l_1457 = 0x6DFFL;
    unsigned *l_1483 = &l_1410;
    int *l_1498[3][2][9] = {{{(void*)0, (void*)0, (void*)0, &g_208[3][2], &g_208[4][1], &g_208[3][2], (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, &g_208[3][2], &g_208[4][1], &g_208[3][2], (void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0, &g_208[3][2], &g_208[4][1], &g_208[3][2], (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, &g_208[3][2], &g_208[4][1], &g_208[3][2], (void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0, &g_208[3][2], &g_208[4][1], &g_208[3][2], (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, &g_208[3][2], &g_208[4][1], &g_208[3][2], (void*)0, (void*)0, (void*)0}}};
    int *l_1499 = (void*)0;
    int i, j, k;
lbl_1446:
    (*l_1409) = (l_1407 < func_63(p_10.f1, l_1408, (*l_1409), g_489, (**g_636)));
    for (g_501 = 0; (g_501 <= (-29)); g_501 = safe_sub_func_int32_t_s_s(g_501, 6))
    {
        int l_1423 = (-4L);
        char * const l_1436 = &g_627;
        const int l_1437[9] = {(-1L), (-1L), (-1L), (-1L), (-1L), (-1L), (-1L), (-1L), (-1L)};
        int l_1438 = 0L;
        unsigned ***l_1445 = &g_1442;
        short *l_1458[8][6][2];
        char l_1469[1][6] = {{(-10L), (-10L), 0xDDL, (-10L), (-10L), 0xDDL}};
        unsigned *l_1474[6] = {&g_899, &g_899, &g_899, &g_899, &g_899, &g_899};
        unsigned *l_1481 = &g_899;
        unsigned *l_1482 = &g_899;
        int **l_1497 = (void*)0;
        int **l_1500 = &g_94;
        int i, j, k;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 6; j++)
            {
                for (k = 0; k < 2; k++)
                    l_1458[i][j][k] = &g_811[6];
            }
        }
        for (g_89 = 0; (g_89 == (-11)); g_89--)
        {
            short *l_1418 = &g_489;
            unsigned *l_1434 = &g_647[3];
            int l_1435 = (-6L);
            (*l_1409) = (((*l_1418) = (l_1417 != (void*)0)) < (safe_mul_func_uint16_t_u_u(0UL, (l_1423 &= ((p_11 == (**g_879)) ^ 0L)))));
            l_1438 = (((*l_1409) ^= 7L) < ((***g_879) != ((safe_div_func_int32_t_s_s(((safe_mul_func_int16_t_s_s((l_1423 = p_12), 1UL)) < (safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u(((((!((*l_1434) = 0x38FE7B99L)) & ((l_1435 ^ p_10.f1) != ((void*)0 == l_1436))) > 0x5F91L) >= l_1437[3]), p_10.f2)), l_1437[3])), g_89))), p_10.f0)) & 0xF1710567L)));
            for (l_1410 = 7; (l_1410 != 34); l_1410 = safe_add_func_int8_t_s_s(l_1410, 1))
            {
                unsigned ****l_1443 = (void*)0;
                unsigned ****l_1444 = (void*)0;
                (*g_99) ^= ((l_1445 = g_1441[3]) != &g_1442);
            }
            if (l_1407)
                goto lbl_1446;
        }
        if ((safe_sub_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_add_func_int16_t_s_s((p_12 ^ l_1437[3]), ((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(l_1457, (4L & (**g_880)))), g_8.f1)) ^ (((((*l_1409) = 0L) ^ (safe_sub_func_int16_t_s_s(l_1437[5], l_1438))) || p_10.f2) ^ l_1437[3])))), p_10.f0)), g_208[3][2])))
        {
            unsigned short l_1464 = 65535UL;
            unsigned * const l_1465 = &g_899;
            int *l_1468 = (void*)0;
            int **l_1470 = (void*)0;
            int **l_1471 = &g_1346[1];
            unsigned *l_1473 = &l_1410;
            unsigned **l_1472[3];
            union U0 *l_1475 = &g_344;
            int i;
            for (i = 0; i < 3; i++)
                l_1472[i] = &l_1473;
            (*l_1409) = ((*g_99) |= l_1423);
            if ((((l_1438 ^= (((safe_unary_minus_func_int16_t_s(0xEB2CL)) || (safe_sub_func_uint16_t_u_u(l_1464, (l_1465 != (l_1474[5] = func_20((safe_sub_func_uint16_t_u_u(p_10.f1, (l_1423 & p_10.f1))), ((*l_1471) = p_11))))))) != 0x6BL)) < 0x20L) < (***g_879)))
            {
                (*g_99) |= l_1437[4];
                return (*g_343);
            }
            else
            {
                union U0 **l_1476 = &l_1475;
                int *l_1479 = &l_1423;
                unsigned *l_1484 = &g_899;
                (*l_1476) = l_1475;
                for (g_666 = 0; (g_666 > (-21)); g_666 = safe_sub_func_int32_t_s_s(g_666, 1))
                {
                    unsigned *l_1480 = &g_899;
                    for (g_603 = 0; g_603 < 5; g_603 += 1)
                    {
                        g_1346[g_603] = (void*)0;
                    }
                    if (((((l_1480 = func_20((*l_1409), l_1479)) != (l_1484 = (l_1483 = (l_1482 = l_1481)))) != (***g_879)) | p_12))
                    {
                        (*l_1479) ^= (*l_1409);
                    }
                    else
                    {
                        (*l_1476) = &g_8;
                    }
                    for (g_899 = 0; (g_899 >= 46); g_899 = safe_add_func_int32_t_s_s(g_899, 2))
                    {
                        (*l_1479) = (*l_1409);
                    }
                    (*l_1409) &= p_10.f1;
                }
                if ((*g_99))
                    break;
                l_1471 = &l_1479;
            }
        }
        else
        {
            if ((*l_1409))
                break;
            for (g_489 = 0; (g_489 > 25); g_489 = safe_add_func_int16_t_s_s(g_489, 5))
            {
                if (g_8.f1)
                    goto lbl_1446;
                if ((*g_99))
                    break;
            }
        }
        (*l_1500) = func_20((safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s((*l_1409), l_1437[3])), 0x8DL)), l_1498[0][1][7]);
        (*l_1409) ^= ((*g_99) = ((void*)0 == &l_1408));
    }
    return (*g_343);
}







static int * func_14(unsigned p_15)
{
    int *l_1013 = &g_208[3][2];
    union U0 *l_1045 = &g_8;
    short ***l_1054 = &g_883;
    char *l_1076 = &g_84[0];
    unsigned ***l_1095 = &g_880;
    int l_1107[1];
    int **l_1113 = &l_1013;
    unsigned char *l_1114[2];
    int **l_1117 = &g_1002;
    int *l_1118 = (void*)0;
    unsigned short **l_1173 = &g_176;
    unsigned l_1248 = 4294967287UL;
    char *l_1349 = &g_603;
    unsigned short l_1355 = 0xD13EL;
    const int *l_1377 = &l_1107[0];
    int l_1406 = (-1L);
    int i;
    for (i = 0; i < 1; i++)
        l_1107[i] = 0L;
    for (i = 0; i < 2; i++)
        l_1114[i] = &g_149[4][0][0];
    for (g_89 = 9; (g_89 >= 2); g_89 -= 1)
    {
        const unsigned l_1009 = 0xCDABFE59L;
        unsigned l_1012 = 5UL;
        int *l_1028 = &g_111[5];
        short ***l_1053 = &g_883;
        char * const l_1066[6][3] = {{&g_603, &g_501, &g_87}, {&g_603, &g_501, &g_87}, {&g_603, &g_501, &g_87}, {&g_603, &g_501, &g_87}, {&g_603, &g_501, &g_87}, {&g_603, &g_501, &g_87}};
        unsigned ***l_1096[1];
        short l_1097 = 0xB726L;
        int i, j;
        for (i = 0; i < 1; i++)
            l_1096[i] = &g_880;
        for (g_899 = 0; (g_899 <= 9); g_899 += 1)
        {
            char *l_1006 = &g_84[0];
            unsigned short *l_1010 = &g_1011;
            int l_1026[9] = {(-1L), 0x893101B0L, (-1L), 0x893101B0L, (-1L), 0x893101B0L, (-1L), 0x893101B0L, (-1L)};
            int i;
            for (g_666 = 8; (g_666 >= 0); g_666 -= 1)
            {
                int *l_1005 = (void*)0;
                return l_1005;
            }
            (*g_1002) = (((~g_647[g_89]) && g_647[g_89]) | ((~((*l_1010) = ((*g_176) = ((+(func_63(p_15, l_1006, (**g_637), (safe_mul_func_int8_t_s_s(l_1009, l_1009)), (*g_637)) < l_1009)) <= l_1009)))) & p_15));
            (*g_99) = l_1012;
            for (g_53 = 0; (g_53 <= 4); g_53 += 1)
            {
                int *l_1014 = &g_111[4];
                unsigned char *l_1025[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1025[i] = &g_149[4][0][0];
                l_1014 = l_1013;
                (*g_1002) ^= (safe_sub_func_uint16_t_u_u((0xB7E06037L >= ((g_647[(g_53 + 3)] <= (safe_div_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(g_84[g_53], 7)) | (safe_div_func_int8_t_s_s((*l_1014), (l_1026[0] = g_647[g_89])))), p_15)), p_15))) ^ func_63((*l_1014), &g_84[g_53], p_15, (*l_1014), &g_84[g_53]))), 65535UL));
            }
        }
        for (g_53 = 0; (g_53 <= 4); g_53 += 1)
        {
            char *l_1062 = &g_84[3];
            int l_1067 = 0xC141B5E7L;
            int l_1098 = 0x1845580EL;
            char ***l_1099 = &g_637;
            int l_1102[10] = {2L, 0x2D57E491L, 0x4941C46DL, 0x4941C46DL, 0x2D57E491L, 2L, 0x2D57E491L, 0x4941C46DL, 0x4941C46DL, 0x2D57E491L};
            int i;
            if (g_811[(g_53 + 2)])
            {
                int i;
                if (g_84[g_53])
                    break;
                for (g_211 = 2; (g_211 <= 8); g_211 += 1)
                {
                    unsigned short ***l_1027 = &g_175;
                    (*l_1027) = &g_176;
                    for (g_354 = 0; (g_354 <= 8); g_354 += 1)
                    {
                        int i, j;
                        if (p_15)
                            break;
                        return l_1013;
                    }
                }
                for (g_344.f0 = 0; (g_344.f0 <= 7); g_344.f0 += 1)
                {
                    return l_1028;
                }
                for (l_1012 = 0; (l_1012 <= 9); l_1012 += 1)
                {
                    int *l_1029 = &g_208[3][2];
                    for (g_344.f2 = 9; (g_344.f2 >= 0); g_344.f2 -= 1)
                    {
                        return l_1029;
                    }
                }
            }
            else
            {
                char *l_1037 = (void*)0;
                char **l_1036 = &l_1037;
                int l_1042[10][7][3] = {{{0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}}, {{0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}}, {{0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}}, {{0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}}, {{0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}}, {{0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}}, {{0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}}, {{0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}}, {{0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}}, {{0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}, {0x5EB8AD9DL, (-1L), 8L}}};
                union U0 **l_1046 = &l_1045;
                int i, j, k;
                (*l_1028) ^= (safe_lshift_func_int8_t_s_s((safe_div_func_int32_t_s_s(func_63((6L < (safe_unary_minus_func_int32_t_s(p_15))), (*g_637), (!(safe_unary_minus_func_int16_t_s(p_15))), g_8.f1, ((*l_1036) = (*g_637))), (safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((g_647[g_89] ^= l_1042[7][1][0]), p_15)), 4)))), 5));
                (*g_1002) = (safe_rshift_func_int8_t_s_s((((*l_1046) = l_1045) == (void*)0), (g_84[g_53] = 0x37L)));
            }
        }
        for (l_1097 = 0; l_1097 < 2; l_1097 += 1)
        {
            g_80[l_1097] = 0x687C5AFFL;
        }
        (*g_1002) = (safe_mod_func_uint8_t_u_u((g_149[4][0][0] |= (p_15 == (safe_div_func_int32_t_s_s((*l_1028), p_15)))), p_15));
    }
    (*l_1113) = func_42(&l_1107[0]);
    if ((**l_1117))
    {
        for (g_489 = 0; (g_489 < 17); g_489 = safe_add_func_uint16_t_u_u(g_489, 1))
        {
            (*g_99) &= (0xDA2CL != g_8.f2);
        }
        return (*l_1117);
    }
    else
    {
        int *l_1136 = &g_208[1][0];
        char * const l_1175[6] = {(void*)0, (void*)0, &g_84[3], (void*)0, (void*)0, &g_84[3]};
        unsigned l_1183 = 4294967295UL;
        char *l_1227 = (void*)0;
        int ***l_1239 = &l_1117;
        int *l_1334 = (void*)0;
        int i;
        if ((*g_99))
        {
            short l_1135 = 0xA669L;
            int *l_1137 = &g_89;
            char * const l_1150 = (void*)0;
            for (g_344.f0 = 10; (g_344.f0 != (-13)); g_344.f0--)
            {
                char * const l_1130 = &g_8.f1;
                unsigned l_1138 = 0x4AF3D559L;
                char *l_1148 = &g_84[0];
                int l_1153[8];
                int *l_1155[1][7];
                int i, j;
                for (i = 0; i < 8; i++)
                    l_1153[i] = 0xBF0947D2L;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_1155[i][j] = &g_208[3][2];
                }
                for (g_489 = 0; (g_489 == (-18)); --g_489)
                {
                    char *l_1129 = &g_84[3];
                    int l_1133 = 1L;
                    short l_1139 = 0xCBE2L;
                }
                for (p_15 = 0; (p_15 <= 4); p_15 += 1)
                {
                    int *l_1159 = &l_1107[0];
                    int i;
                }
                for (g_627 = 0; (g_627 >= 11); g_627 = safe_add_func_int8_t_s_s(g_627, 7))
                {
                    for (g_1011 = 0; (g_1011 <= 7); g_1011 += 1)
                    {
                        unsigned l_1184[9] = {0xD3DEF4F1L, 0UL, 0xD3DEF4F1L, 0UL, 0xD3DEF4F1L, 0UL, 0xD3DEF4F1L, 0UL, 0xD3DEF4F1L};
                        unsigned *l_1195[6][4][2] = {{{&g_647[0], (void*)0}, {&g_647[0], (void*)0}, {&g_647[0], (void*)0}, {&g_647[0], (void*)0}}, {{&g_647[0], (void*)0}, {&g_647[0], (void*)0}, {&g_647[0], (void*)0}, {&g_647[0], (void*)0}}, {{&g_647[0], (void*)0}, {&g_647[0], (void*)0}, {&g_647[0], (void*)0}, {&g_647[0], (void*)0}}, {{&g_647[0], (void*)0}, {&g_647[0], (void*)0}, {&g_647[0], (void*)0}, {&g_647[0], (void*)0}}, {{&g_647[0], (void*)0}, {&g_647[0], (void*)0}, {&g_647[0], (void*)0}, {&g_647[0], (void*)0}}, {{&g_647[0], (void*)0}, {&g_647[0], (void*)0}, {&g_647[0], (void*)0}, {&g_647[0], (void*)0}}};
                        int *l_1198 = &l_1107[0];
                        char * const l_1199 = &g_73;
                        int i, j, k;
                        (*g_99) = (l_1183 && l_1184[6]);
                        (*l_1198) = (safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((*l_1136) = (safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((***l_1095) &= 0x9A234535L), 0xB9900F3EL)), (*g_176)))), ((safe_mul_func_int8_t_s_s(((*l_1148) ^= (*l_1137)), (g_501 &= (-2L)))) >= (**g_698)))), func_63(((*l_1198) ^= p_15), (*g_637), (0x4DL ^ g_73), p_15, l_1199))), 0L));
                        if ((*g_1002))
                            continue;
                    }
                }
            }
            for (g_19 = (-19); (g_19 == 23); g_19++)
            {
                (*l_1113) = l_1137;
            }
            if ((p_15 == p_15))
            {
                const short *l_1203 = &g_811[2];
                const short **l_1202 = &l_1203;
                for (g_627 = 0; (g_627 <= 0); g_627 += 1)
                {
                    int i;
                    (*l_1113) = (*l_1117);
                    for (g_603 = 0; (g_603 <= 8); g_603 += 1)
                    {
                        const short ***l_1204 = (void*)0;
                        const short ***l_1205 = &l_1202;
                        int i;
                        l_1107[g_627] = g_533[g_603];
                        (*l_1013) = (((*g_99) = ((g_811[(g_627 + 6)] != (+(((*l_1205) = l_1202) != g_883))) <= g_84[(g_627 + 1)])) < g_647[(g_627 + 4)]);
                        return (*l_1117);
                    }
                    l_1107[g_627] = func_63(g_533[(g_627 + 7)], (*g_637), g_811[(g_627 + 2)], (&l_1150 != (void*)0), l_1175[5]);
                }
            }
            else
            {
                int *l_1206[7][8][4] = {{{&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}}, {{&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}}, {{&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}}, {{&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}}, {{&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}}, {{&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}}, {{&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}, {&g_208[3][2], &g_80[0], &g_111[6], &g_89}}};
                int i, j, k;
                for (g_19 = 0; (g_19 <= 4); g_19 += 1)
                {
                    int *l_1207 = &g_208[3][2];
                    int i;
                    for (l_1135 = 0; (l_1135 <= 9); l_1135 += 1)
                    {
                        int i;
                        (*l_1117) = l_1206[0][7][3];
                        (*l_1117) = l_1207;
                        if (g_84[g_19])
                            continue;
                    }
                    (*l_1013) ^= g_647[(g_19 + 2)];
                }
            }
            (*l_1113) = l_1137;
        }
        else
        {
            unsigned short l_1208 = 0x1267L;
            char ***l_1209 = &g_637;
            int *l_1244 = &g_89;
            if ((p_15 >= l_1208))
            {
                (*l_1117) = func_42(l_1136);
            }
            else
            {
                (*l_1136) &= (&g_637 != l_1209);
            }
            (*l_1113) = l_1136;
            if (((safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(func_63((safe_rshift_func_int16_t_s_s(((*g_176) > ((l_1209 != &g_637) > (((safe_unary_minus_func_int8_t_s((safe_add_func_uint32_t_u_u((((safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(l_1208, (*g_1002))), (p_15 ^ (safe_sub_func_int16_t_s_s(g_533[7], ((safe_lshift_func_uint8_t_u_u((*l_1136), 6)) > l_1208)))))) | 1UL) >= p_15), (*g_881))))) <= 0x1EL) || (***g_636)))), (*l_1136))), l_1227, (***g_636), g_533[4], l_1076), p_15)), p_15)) == 0x112281EDL))
            {
                int ***l_1238 = (void*)0;
                int l_1245 = 0L;
                if ((*l_1136))
                {
                    int *l_1232 = (void*)0;
                    int ****l_1240 = (void*)0;
                    int ****l_1241 = &l_1239;
                    for (g_501 = 0; (g_501 != (-22)); g_501 = safe_sub_func_uint16_t_u_u(g_501, 2))
                    {
                        if (l_1208)
                            break;
                        if (g_501)
                            goto lbl_1233;
                    }
                    (*l_1117) = (*l_1117);
lbl_1233:
                    for (g_1011 = (-2); (g_1011 < 20); g_1011 = safe_add_func_int16_t_s_s(g_1011, 7))
                    {
                        return l_1232;
                    }
                    l_1245 |= ((safe_sub_func_uint8_t_u_u(func_63(((safe_mod_func_uint32_t_u_u(p_15, l_1208)) >= l_1208), (**g_636), ((l_1238 == ((*l_1241) = l_1239)) > (*l_1136)), (safe_sub_func_uint32_t_u_u(((**g_880) = ((*l_1244) == (**l_1117))), p_15)), (*g_637)), (**g_637))) != 1L);
                }
                else
                {
                    return (*l_1117);
                }
            }
            else
            {
                short *l_1249 = &g_666;
                int l_1250 = 0L;
                l_1250 |= (((***l_1239) <= (*l_1136)) != ((*l_1249) = ((*l_1244) = (safe_mul_func_uint8_t_u_u((((l_1248 |= 0xFDL) < 255UL) | 3L), 3UL)))));
                (**l_1117) = ((safe_sub_func_int8_t_s_s((**g_637), ((safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_s(0x1FL, 2)) && (l_1249 != ((*l_1173) = (void*)0))), 5)) >= l_1250))) <= (***g_879));
            }
        }
        for (g_603 = 0; (g_603 < (-30)); g_603 = safe_sub_func_uint16_t_u_u(g_603, 9))
        {
            short *l_1267 = &g_489;
            union U0 **l_1270 = (void*)0;
            int *l_1271 = &l_1107[0];
            char * const l_1316 = &g_84[0];
            if (((*l_1271) = ((**l_1117) = ((safe_sub_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((*l_1267) &= 9L), 13)), (**g_880))) > (((***g_879) ^ p_15) == p_15)), (safe_mod_func_uint8_t_u_u(((&l_1045 == l_1270) == (+g_344.f1)), (*l_1136))))) & 0xA1L))))
            {
                int *l_1276 = (void*)0;
                const unsigned char l_1284 = 0xFBL;
                int *l_1302 = &g_208[2][1];
                for (g_899 = 8; (g_899 >= 40); g_899 = safe_add_func_int16_t_s_s(g_899, 2))
                {
                    int *l_1279 = (void*)0;
                    unsigned short l_1285 = 0x0DDAL;
                }
                (**l_1239) = func_20((***l_1239), (**l_1239));
            }
            else
            {
                int l_1319 = 0x53108E18L;
                char *l_1324 = (void*)0;
                char * const l_1333 = &g_73;
                for (g_344.f2 = 0; (g_344.f2 > (-12)); g_344.f2 = safe_sub_func_int8_t_s_s(g_344.f2, 5))
                {
                    char l_1314 = 0xEDL;
                }
            }
            (*g_99) = ((*l_1136) |= ((*g_879) == (*l_1095)));
            (*l_1136) |= (safe_add_func_uint32_t_u_u((**g_880), 0UL));
        }
        (*l_1013) = 0L;
        (*l_1113) = (**l_1239);
    }
    if ((safe_lshift_func_int16_t_s_u(p_15, (safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((*l_1013), ((g_1011 &= 0xCAE1L) >= (safe_lshift_func_int16_t_s_s(p_15, 3))))), 0x1BL)))))
    {
        unsigned *l_1347 = (void*)0;
        unsigned short *l_1348 = &g_53;
        char * const l_1354 = (void*)0;
        (*l_1113) = g_1346[1];
        (*l_1013) &= (l_1347 == (void*)0);
        (*g_1002) = l_1355;
    }
    else
    {
        unsigned l_1365 = 0UL;
        char * const l_1366 = &g_73;
        int l_1367 = (-1L);
        const unsigned short l_1387 = 0xB5DEL;
        unsigned short l_1388 = 1UL;
        (**l_1117) = p_15;
        for (g_603 = 0; (g_603 == 13); g_603++)
        {
            char *l_1363 = (void*)0;
            int *l_1376 = &l_1367;
            const int **l_1378 = &g_588;
            for (g_501 = 0; (g_501 < (-17)); g_501--)
            {
                unsigned short *l_1362 = &g_53;
                char *l_1364 = &g_344.f1;
                int *l_1370[9][9] = {{&g_19, &g_111[6], &g_19, &l_1107[0], &g_89, &l_1107[0], &g_89, &l_1107[0], &g_19}, {&g_19, &g_111[6], &g_19, &l_1107[0], &g_89, &l_1107[0], &g_89, &l_1107[0], &g_19}, {&g_19, &g_111[6], &g_19, &l_1107[0], &g_89, &l_1107[0], &g_89, &l_1107[0], &g_19}, {&g_19, &g_111[6], &g_19, &l_1107[0], &g_89, &l_1107[0], &g_89, &l_1107[0], &g_19}, {&g_19, &g_111[6], &g_19, &l_1107[0], &g_89, &l_1107[0], &g_89, &l_1107[0], &g_19}, {&g_19, &g_111[6], &g_19, &l_1107[0], &g_89, &l_1107[0], &g_89, &l_1107[0], &g_19}, {&g_19, &g_111[6], &g_19, &l_1107[0], &g_89, &l_1107[0], &g_89, &l_1107[0], &g_19}, {&g_19, &g_111[6], &g_19, &l_1107[0], &g_89, &l_1107[0], &g_89, &l_1107[0], &g_19}, {&g_19, &g_111[6], &g_19, &l_1107[0], &g_89, &l_1107[0], &g_89, &l_1107[0], &g_19}};
                int i, j;
                l_1367 |= func_63((safe_mul_func_uint16_t_u_u(((*l_1362) |= 65535UL), 0x7B11L)), ((**g_636) = l_1363), ((*l_1364) = 0x14L), l_1365, l_1366);
                for (g_267 = (-21); (g_267 != 10); g_267 = safe_add_func_int8_t_s_s(g_267, 9))
                {
                    int *l_1371 = (void*)0;
                    return l_1371;
                }
            }
            (*g_99) &= (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(0x1CL, 3)), g_489));
            (*l_1376) |= (*l_1013);
            (*l_1378) = l_1377;
        }
        if ((*g_99))
        {
            return (*l_1117);
        }
        else
        {
            unsigned l_1386 = 0x31E2BE26L;
            const unsigned *l_1399 = &g_211;
            const unsigned **l_1398 = &l_1399;
            if (((*g_1002) = ((p_15 >= (func_63(p_15, (**g_636), ((*l_1013) == 1UL), g_603, (*g_637)) >= l_1386)) || l_1388)))
            {
                for (g_899 = 25; (g_899 <= 11); g_899 = safe_sub_func_int16_t_s_s(g_899, 6))
                {
                    (**l_1113) = (p_15 != (**g_880));
                    if ((*g_99))
                        break;
                }
                for (g_899 = 1; (g_899 <= 9); g_899 += 1)
                {
                    int *l_1391 = (void*)0;
                    int i;
                    l_1391 = &g_111[g_899];
                    for (g_666 = 3; (g_666 <= 9); g_666 += 1)
                    {
                        short l_1393 = (-1L);
                        int i;
                        (*l_1117) = &g_111[g_899];
                        g_111[g_666] |= (safe_unary_minus_func_uint16_t_u(l_1393));
                    }
                }
            }
            else
            {
                char l_1402 = 0x95L;
                const unsigned l_1405 = 6UL;
                for (g_204 = 3; (g_204 >= 0); g_204 -= 1)
                {
                    unsigned short *l_1396 = (void*)0;
                    unsigned short *l_1397 = &l_1388;
                    char *l_1400 = (void*)0;
                    int l_1401[8][9][3] = {{{1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}}, {{1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}}, {{1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}}, {{1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}}, {{1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}}, {{1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}}, {{1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}}, {{1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}, {1L, 1L, (-8L)}}};
                    int i, j, k;
                    (*g_99) ^= p_15;
                    l_1401[2][7][0] &= (((**l_1113) = (l_1386 <= (safe_div_func_int32_t_s_s((((*l_1397) = 0x5460L) | p_15), func_63(((void*)0 == l_1398), l_1400, l_1386, p_15, (**g_636)))))) || 0x69809C4FL);
                    for (g_501 = 3; (g_501 >= 0); g_501 -= 1)
                    {
                        int i, j;
                        if (g_208[g_204][g_501])
                            break;
                    }
                }
                (*l_1113) = (void*)0;
                l_1406 ^= func_63((l_1402 == (p_15 < (safe_add_func_int8_t_s_s(0x0CL, 0L)))), (**g_636), l_1405, l_1388, l_1366);
            }
            (*l_1117) = (void*)0;
        }
    }
    return (*l_1117);
}







static int * func_20(unsigned short p_21, int * p_22)
{
    unsigned l_858[9][6][3] = {{{0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}}, {{0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}}, {{0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}}, {{0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}}, {{0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}}, {{0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}}, {{0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}}, {{0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}}, {{0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}, {0x1779716FL, 0xDA208CC0L, 6UL}}};
    const unsigned char l_868 = 0x9AL;
    char *l_889 = &g_84[2];
    union U0 **l_936 = &g_343;
    int *l_937 = &g_111[6];
    char *l_951 = &g_627;
    int i, j, k;
    for (g_73 = 0; (g_73 <= (-24)); g_73 = safe_sub_func_uint8_t_u_u(g_73, 9))
    {
        int l_861 = 1L;
        char *l_873[3][3][6] = {{{&g_73, &g_344.f1, (void*)0, &g_344.f1, &g_344.f1, (void*)0}, {&g_73, &g_344.f1, (void*)0, &g_344.f1, &g_344.f1, (void*)0}, {&g_73, &g_344.f1, (void*)0, &g_344.f1, &g_344.f1, (void*)0}}, {{&g_73, &g_344.f1, (void*)0, &g_344.f1, &g_344.f1, (void*)0}, {&g_73, &g_344.f1, (void*)0, &g_344.f1, &g_344.f1, (void*)0}, {&g_73, &g_344.f1, (void*)0, &g_344.f1, &g_344.f1, (void*)0}}, {{&g_73, &g_344.f1, (void*)0, &g_344.f1, &g_344.f1, (void*)0}, {&g_73, &g_344.f1, (void*)0, &g_344.f1, &g_344.f1, (void*)0}, {&g_73, &g_344.f1, (void*)0, &g_344.f1, &g_344.f1, (void*)0}}};
        int l_875 = (-1L);
        char *l_878 = &g_501;
        unsigned ***l_896 = (void*)0;
        union U0 *l_926 = &g_8;
        int l_978 = 0x6012CDE3L;
        short l_979 = 7L;
        int **l_997 = &g_99;
        int i, j, k;
    }
    (*l_937) = (*l_937);
    return p_22;
}







static char func_23(int p_24)
{
    short l_37 = 0xBB00L;
    int l_542 = 1L;
    int l_543 = 0x418A2515L;
    int l_544 = 0L;
    int *l_557 = (void*)0;
    unsigned *l_562 = &g_211;
    unsigned **l_561 = &l_562;
    short l_570 = 1L;
    unsigned short l_581 = 1UL;
    union U0 *l_590 = &g_344;
    char *l_626 = &g_501;
    const short l_679 = 0x4B6FL;
    int *l_689[8] = {&g_208[2][3], &g_19, &g_208[2][3], &g_19, &g_208[2][3], &g_19, &g_208[2][3], &g_19};
    int *l_707 = &g_89;
    unsigned short l_717 = 65531UL;
    int ***l_742 = &g_119[6][3];
    unsigned l_780 = 0xB20C419EL;
    unsigned short ***l_791 = (void*)0;
    short l_815[2];
    char * const l_849[1][6] = {{&g_603, &g_603, &g_603, &g_603, &g_603, &g_603}};
    int i, j;
    for (i = 0; i < 2; i++)
        l_815[i] = 4L;
lbl_589:
    for (g_19 = (-11); (g_19 == 2); g_19 = safe_add_func_int8_t_s_s(g_19, 8))
    {
        int *l_38 = &g_19;
        int **l_98[4][5] = {{&l_38, &l_38, (void*)0, &l_38, &l_38}, {&l_38, &l_38, (void*)0, &l_38, &l_38}, {&l_38, &l_38, (void*)0, &l_38, &l_38}, {&l_38, &l_38, (void*)0, &l_38, &l_38}};
        int l_558 = 0xD38C1FD1L;
        int i, j;
        g_533[7] |= (safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(func_31((l_37 == g_8.f1), l_38, func_39((g_99 = func_42(&g_19)), (*l_38)), (safe_lshift_func_int8_t_s_s((&g_176 == (void*)0), 5)), &g_19), g_344.f2)), 2));
        if (((safe_sub_func_uint8_t_u_u(250UL, (((*g_99) &= p_24) >= (l_544 = ((-1L) != (l_37 == (l_543 = (safe_div_func_uint8_t_u_u(p_24, (((safe_mul_func_uint16_t_u_u(0xD0B9L, ((l_542 ^= p_24) & ((l_37 <= 0x3EL) & (-2L))))) > 0xAD6FL) ^ 0UL)))))))))) >= 0x8887L))
        {
            unsigned char l_545 = 1UL;
            for (g_344.f0 = 0; (g_344.f0 <= 3); g_344.f0 += 1)
            {
                int i, j;
                (*g_99) = l_545;
                for (g_489 = 0; (g_489 <= 0); g_489 += 1)
                {
                    int i, j, k;
                    return g_149[(g_344.f0 + 1)][g_489][g_489];
                }
            }
            if (g_87)
                goto lbl_589;
        }
        else
        {
            int l_556 = 0x72BFDE44L;
            char *l_582[10] = {&g_84[4], &g_84[4], &g_84[0], &g_84[4], &g_84[4], &g_84[0], &g_84[4], &g_84[4], &g_84[0], &g_84[4]};
            int i;
            p_24 = (l_558 = (safe_sub_func_int32_t_s_s(1L, ((*g_99) = (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(0x93L, g_149[4][0][0])) <= (func_31(((safe_div_func_int32_t_s_s((!l_556), l_544)) ^ p_24), func_42(func_42(func_42((l_557 = &p_24)))), &l_544, l_556, &l_544) <= l_542)), p_24)), 5L))))));
            for (g_267 = 12; (g_267 == (-8)); g_267--)
            {
                int *l_563[4][3][2] = {{{&g_208[3][3], &l_544}, {&g_208[3][3], &l_544}, {&g_208[3][3], &l_544}}, {{&g_208[3][3], &l_544}, {&g_208[3][3], &l_544}, {&g_208[3][3], &l_544}}, {{&g_208[3][3], &l_544}, {&g_208[3][3], &l_544}, {&g_208[3][3], &l_544}}, {{&g_208[3][3], &l_544}, {&g_208[3][3], &l_544}, {&g_208[3][3], &l_544}}};
                int i, j, k;
                if (((void*)0 != l_561))
                {
                    int *l_564[1][9] = {{&l_556, &g_208[3][2], &l_556, &g_208[3][2], &l_556, &g_208[3][2], &l_556, &g_208[3][2], &l_556}};
                    int i, j;
                    l_564[0][6] = &p_24;
                }
                else
                {
                    union U0 *l_565[5][5] = {{&g_344, &g_344, &g_8, &g_344, &g_344}, {&g_344, &g_344, &g_8, &g_344, &g_344}, {&g_344, &g_344, &g_8, &g_344, &g_344}, {&g_344, &g_344, &g_8, &g_344, &g_344}, {&g_344, &g_344, &g_8, &g_344, &g_344}};
                    int l_583 = (-1L);
                    int l_584 = (-1L);
                    const int **l_585[9];
                    const int *l_586 = &g_587[1];
                    int i, j;
                    for (i = 0; i < 9; i++)
                        l_585[i] = (void*)0;
                    for (l_558 = 0; (l_558 <= 7); l_558 += 1)
                    {
                        unsigned l_579 = 4294967291UL;
                        int l_580 = 1L;
                        g_343 = l_565[1][2];
                        l_584 ^= (l_583 |= (safe_lshift_func_int16_t_s_s(p_24, (((safe_div_func_uint16_t_u_u(l_570, (safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(p_24, (safe_lshift_func_uint16_t_u_s((*g_176), l_556)))), (safe_mod_func_uint16_t_u_u((l_579 = 0x7781L), l_580)))))) == ((+((2L && func_63((l_581 = (-3L)), l_582[5], p_24, p_24, &g_84[4])) & 2L)) != g_211)) != 0x4DL))));
                    }
                    g_588 = (l_586 = &l_543);
                }
                (*l_557) = 0x0510EBAFL;
            }
            (*g_99) ^= p_24;
        }
    }
lbl_634:
    if ((&g_344 != l_590))
    {
        const unsigned l_604 = 1UL;
        if (p_24)
        {
lbl_606:
            (*g_99) &= (*g_588);
        }
        else
        {
            unsigned l_592[7] = {1UL, 1UL, 0xE4D9B41EL, 1UL, 1UL, 0xE4D9B41EL, 1UL};
            char *l_599 = &g_501;
            int l_601 = 8L;
            int i;
            if (((*g_99) = (safe_unary_minus_func_uint32_t_u(4294967295UL))))
            {
                int ***l_595 = &g_119[6][3];
                short *l_596 = &g_344.f2;
                unsigned *l_600 = (void*)0;
                unsigned *l_602[3][5] = {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}};
                int *l_605 = &g_89;
                int i, j;
                l_592[1] = (-6L);
                (*l_605) &= (safe_rshift_func_int16_t_s_u((((((*l_596) = (l_595 != l_595)) | p_24) < (safe_mul_func_int8_t_s_s(((func_63(p_24, l_599, p_24, (g_603 &= (l_601 = g_111[6])), l_599) != g_267) >= l_604), 0x3DL))) != p_24), 13));
            }
            else
            {
                if (g_489)
                    goto lbl_606;
            }
        }
    }
    else
    {
        int **l_607 = (void*)0;
        int **l_608 = &l_557;
        (*l_608) = func_39(((*l_608) = &p_24), (*g_588));
    }
    if ((9L >= (g_211 ^= g_501)))
    {
        unsigned l_617 = 1UL;
        char * const l_628 = &g_73;
        int l_630 = 0x9F398304L;
        unsigned char l_648 = 0x50L;
        short l_661 = 0xAB0CL;
        unsigned short *l_665 = &g_53;
        int l_673 = 0x3C2BE4A1L;
        for (l_543 = 0; (l_543 <= 7); l_543 += 1)
        {
            int l_623 = 0L;
            char l_624 = 3L;
            short *l_625 = &g_204;
            unsigned short *l_629 = &l_581;
            unsigned short **l_633 = &l_629;
            int *l_656 = &l_630;
            int *l_674 = (void*)0;
            (*g_99) = (l_630 ^= (safe_rshift_func_int8_t_s_s((!((safe_mul_func_uint8_t_u_u((~(safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(l_617, 0)), ((*l_629) = ((safe_unary_minus_func_int8_t_s(p_24)) || (((*g_176) = 65535UL) <= (p_24 != (safe_lshift_func_uint16_t_u_s((func_63((safe_mul_func_int8_t_s_s(((p_24 && (l_623 = p_24)) <= g_73), (((*l_625) = (l_624 | l_617)) < l_617))), l_626, l_617, g_627, l_628) == l_617), g_603))))))))), p_24)) > 0x7DL)), 1)));
            if ((safe_lshift_func_uint8_t_u_u(p_24, (&l_581 != ((*l_633) = l_625)))))
            {
                int ***l_635 = &g_119[6][3];
                if (g_489)
                    goto lbl_634;
                (*l_635) = &g_94;
                (*g_99) = l_617;
                for (l_570 = 7; (l_570 >= 0); l_570 -= 1)
                {
                    for (g_19 = 2; (g_19 <= 7); g_19 += 1)
                    {
                        int i, j;
                        if (p_24)
                            break;
                        if (l_542)
                            break;
                    }
                }
            }
            else
            {
                int l_638[8][9][3] = {{{0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}}, {{0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}}, {{0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}}, {{0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}}, {{0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}}, {{0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}}, {{0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}}, {{0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}, {0x227C0C20L, 1L, 0x227C0C20L}}};
                char * const l_641 = &g_627;
                union U0 *l_642 = &g_344;
                int *** const l_651[10] = {&g_119[0][3], &g_119[5][6], &g_119[2][4], &g_119[2][4], &g_119[5][6], &g_119[0][3], &g_119[5][6], &g_119[2][4], &g_119[2][4], &g_119[5][6]};
                int i, j, k;
                (*g_99) = (g_636 == &g_637);
                if (l_638[3][7][0])
                    continue;
                if (p_24)
                {
                    if (p_24)
                        break;
                    return l_623;
                }
                else
                {
                    char *l_644 = &g_603;
                    int *l_655 = &g_19;
                    int l_662 = 0xE78EF979L;
                    for (g_53 = 0; (g_53 < 37); ++g_53)
                    {
                        const unsigned short l_643 = 0xEC84L;
                        int *l_645 = (void*)0;
                        int *l_646[10][2][10] = {{{&l_543, &l_623, &l_543, &g_89, &g_208[3][1], &l_543, &g_89, &l_544, &g_208[4][1], &g_111[6]}, {&l_543, &l_623, &l_543, &g_89, &g_208[3][1], &l_543, &g_89, &l_544, &g_208[4][1], &g_111[6]}}, {{&l_543, &l_623, &l_543, &g_89, &g_208[3][1], &l_543, &g_89, &l_544, &g_208[4][1], &g_111[6]}, {&l_543, &l_623, &l_543, &g_89, &g_208[3][1], &l_543, &g_89, &l_544, &g_208[4][1], &g_111[6]}}, {{&l_543, &l_623, &l_543, &g_89, &g_208[3][1], &l_543, &g_89, &l_544, &g_208[4][1], &g_111[6]}, {&l_543, &l_623, &l_543, &g_89, &g_208[3][1], &l_543, &g_89, &l_544, &g_208[4][1], &g_111[6]}}, {{&l_543, &l_623, &l_543, &g_89, &g_208[3][1], &l_543, &g_89, &l_544, &g_208[4][1], &g_111[6]}, {&l_543, &l_623, &l_543, &g_89, &g_208[3][1], &l_543, &g_89, &l_544, &g_208[4][1], &g_111[6]}}, {{&l_543, &l_623, &l_543, &g_89, &g_208[3][1], &l_543, &g_89, &l_544, &g_208[4][1], &g_111[6]}, {&l_543, &l_623, &l_543, &g_89, &g_208[3][1], &l_543, &g_89, &l_544, &g_208[4][1], &g_111[6]}}, {{&l_543, &l_623, &l_543, &g_89, &g_208[3][1], &l_543, &g_89, &l_544, &g_208[4][1], &g_111[6]}, {&l_543, &l_623, &l_543, &g_89, &g_208[3][1], &l_543, &g_89, &l_544, &g_208[4][1], &g_111[6]}}, {{&l_543, &l_623, &l_543, &g_89, &g_208[3][1], &l_543, &g_89, &l_544, &g_208[4][1], &g_111[6]}, {&l_543, &l_623, &l_543, &g_89, &g_208[3][1], &l_543, &g_89, &l_544, &g_208[4][1], &g_111[6]}}, {{&l_543, &l_623, &l_543, &g_89, &g_208[3][1], &l_543, &g_89, &l_544, &g_208[4][1], &g_111[6]}, {&l_543, &l_623, &l_543, &g_89, &g_208[3][1], &l_543, &g_89, &l_544, &g_208[4][1], &g_111[6]}}, {{&l_543, &l_623, &l_543, &g_89, &g_208[3][1], &l_543, &g_89, &l_544, &g_208[4][1], &g_111[6]}, {&l_543, &l_623, &l_543, &g_89, &g_208[3][1], &l_543, &g_89, &l_544, &g_208[4][1], &g_111[6]}}, {{&l_543, &l_623, &l_543, &g_89, &g_208[3][1], &l_543, &g_89, &l_544, &g_208[4][1], &g_111[6]}, {&l_543, &l_623, &l_543, &g_89, &g_208[3][1], &l_543, &g_89, &l_544, &g_208[4][1], &g_111[6]}}};
                        int i, j, k;
                        (*g_99) ^= (l_641 == &l_624);
                        g_647[0] ^= ((((l_590 != (l_642 = l_590)) & l_643) <= func_63(p_24, l_644, p_24, g_84[0], l_644)) == 255UL);
                        if (l_648)
                            continue;
                        if (p_24)
                            break;
                    }
                    for (l_617 = 0; (l_617 <= 1); l_617 += 1)
                    {
                        int l_654 = 0x6C0F36C0L;
                        int i;
                        l_654 &= (((g_80[l_617] = (safe_sub_func_int16_t_s_s(2L, (l_651[4] == (void*)0)))) >= g_533[7]) || (safe_lshift_func_int8_t_s_s(p_24, 3)));
                        l_656 = l_655;
                        (*g_99) = (safe_mod_func_int16_t_s_s(g_53, ((0x1BL > (safe_rshift_func_uint16_t_u_u(p_24, (((*l_656) &= l_661) < l_662)))) && func_63(((*g_99) == l_654), l_644, (safe_mul_func_uint16_t_u_u(((g_84[l_617] = (l_665 != l_665)) >= p_24), g_666)), p_24, l_641))));
                        (*l_655) = p_24;
                    }
                    p_24 |= ((((-8L) & (*l_656)) > (safe_add_func_uint16_t_u_u((*g_176), l_630))) || (*g_99));
                }
                l_674 = &l_543;
            }
        }
    }
    else
    {
        int *l_680[5][7][1] = {{{&g_80[0]}, {&g_80[0]}, {&g_80[0]}, {&g_80[0]}, {&g_80[0]}, {&g_80[0]}, {&g_80[0]}}, {{&g_80[0]}, {&g_80[0]}, {&g_80[0]}, {&g_80[0]}, {&g_80[0]}, {&g_80[0]}, {&g_80[0]}}, {{&g_80[0]}, {&g_80[0]}, {&g_80[0]}, {&g_80[0]}, {&g_80[0]}, {&g_80[0]}, {&g_80[0]}}, {{&g_80[0]}, {&g_80[0]}, {&g_80[0]}, {&g_80[0]}, {&g_80[0]}, {&g_80[0]}, {&g_80[0]}}, {{&g_80[0]}, {&g_80[0]}, {&g_80[0]}, {&g_80[0]}, {&g_80[0]}, {&g_80[0]}, {&g_80[0]}}};
        int *l_681 = &g_111[7];
        int **l_688[4];
        unsigned l_692 = 0xB2AD188FL;
        unsigned short * const *l_695 = &g_176;
        short l_743 = 0x13A9L;
        char *l_746[7] = {&g_84[3], &g_84[3], &g_73, &g_84[3], &g_84[3], &g_73, &g_84[3]};
        int ** const *l_755 = &l_688[3];
        int ** const **l_754 = &l_755;
        unsigned short l_853[9][3] = {{65535UL, 65535UL, 9UL}, {65535UL, 65535UL, 9UL}, {65535UL, 65535UL, 9UL}, {65535UL, 65535UL, 9UL}, {65535UL, 65535UL, 9UL}, {65535UL, 65535UL, 9UL}, {65535UL, 65535UL, 9UL}, {65535UL, 65535UL, 9UL}, {65535UL, 65535UL, 9UL}};
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_688[i] = &g_99;
    }
    return (*g_465);
}







static unsigned short func_31(char p_32, int * p_33, int * p_34, unsigned p_35, int * p_36)
{
    int l_221 = 0x662B4697L;
    int **l_234 = &g_94;
    unsigned *l_270 = (void*)0;
    unsigned **l_269[9] = {&l_270, &l_270, &l_270, &l_270, &l_270, &l_270, &l_270, &l_270, &l_270};
    const char l_303 = (-1L);
    char *l_304 = (void*)0;
    unsigned l_321[8] = {0x7E6397B1L, 4294967295UL, 0x7E6397B1L, 4294967295UL, 0x7E6397B1L, 4294967295UL, 0x7E6397B1L, 4294967295UL};
    int l_333 = 9L;
    unsigned l_338 = 0x4023D74CL;
    unsigned l_366 = 0x034FD7B6L;
    int l_418 = 0x8240C372L;
    int *l_419 = &l_333;
    int l_460 = 0x598FF701L;
    int *l_466 = &l_460;
    unsigned l_478[8] = {0xDE392BD6L, 0x612E287BL, 0xDE392BD6L, 0x612E287BL, 0xDE392BD6L, 0x612E287BL, 0xDE392BD6L, 0x612E287BL};
    const unsigned short l_532 = 1UL;
    int i;
    (*g_99) ^= l_221;
    for (p_32 = 13; (p_32 < (-28)); p_32--)
    {
        char l_230 = 0x01L;
        unsigned l_266 = 0xABAE861BL;
        int ***l_308 = (void*)0;
        int ***l_309 = &g_119[6][3];
        char * const l_318 = &l_230;
        char l_364 = (-5L);
    }
    if ((safe_div_func_int8_t_s_s(func_63(((safe_div_func_uint8_t_u_u(func_63(((((*p_36) && g_208[3][2]) || (safe_div_func_int16_t_s_s((+((*p_36) == func_63((~((*l_419) |= (func_63(func_63((1L & (safe_lshift_func_int8_t_s_u(0L, (safe_add_func_uint16_t_u_u((p_32 != p_35), (safe_mod_func_int16_t_s_s((g_344.f0 & (*g_99)), (*g_176)))))))), l_304, g_208[4][1], l_418, l_304), &g_73, p_35, p_32, l_304) | g_211))), &g_84[4], p_35, l_321[3], l_304))), p_32))) || 1L), &g_73, p_32, p_32, &g_84[0]), g_87)) != 0xC633L), l_304, p_35, g_89, &g_73), p_35)))
    {
        int *l_431 = &g_208[3][2];
        char * const l_451[8] = {&g_8.f1, &g_84[2], &g_8.f1, &g_84[2], &g_8.f1, &g_84[2], &g_8.f1, &g_84[2]};
        char *l_457 = &g_84[0];
        char *l_467 = &g_87;
        int **l_473 = (void*)0;
        unsigned ***l_484[3];
        int i;
        for (i = 0; i < 3; i++)
            l_484[i] = (void*)0;
        (*l_234) = func_42(p_33);
        for (g_354 = 0; (g_354 != 36); g_354 = safe_add_func_int32_t_s_s(g_354, 2))
        {
            unsigned short l_424 = 0x98A7L;
            unsigned l_430[6][4] = {{0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL}};
            char *l_442 = &g_344.f1;
            int l_444[9][8][3] = {{{0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}}, {{0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}}, {{0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}}, {{0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}}, {{0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}}, {{0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}}, {{0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}}, {{0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}}, {{0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}, {0x90926E70L, 0x4033CB16L, 0xAE821053L}}};
            unsigned short l_446 = 0x2533L;
            int ***l_472 = (void*)0;
            union U0 *l_490 = (void*)0;
            short *l_512[5][6] = {{&g_344.f2, &g_489, (void*)0, &g_489, &g_344.f2, &g_8.f2}, {&g_344.f2, &g_489, (void*)0, &g_489, &g_344.f2, &g_8.f2}, {&g_344.f2, &g_489, (void*)0, &g_489, &g_344.f2, &g_8.f2}, {&g_344.f2, &g_489, (void*)0, &g_489, &g_344.f2, &g_8.f2}, {&g_344.f2, &g_489, (void*)0, &g_489, &g_344.f2, &g_8.f2}};
            int i, j, k;
        }
    }
    else
    {
        int l_518[8];
        const char *l_521 = &g_8.f1;
        const char **l_520[1][6] = {{&l_521, &l_521, (void*)0, &l_521, &l_521, (void*)0}};
        const char ***l_519 = &l_520[0][2];
        unsigned ***l_529 = &l_269[3];
        char * const l_530 = &g_84[0];
        int i, j;
        for (i = 0; i < 8; i++)
            l_518[i] = 0L;
        for (g_267 = (-19); (g_267 == (-22)); g_267 = safe_sub_func_uint8_t_u_u(g_267, 1))
        {
            char **l_523[5];
            char ***l_522 = &l_523[3];
            unsigned ***l_528 = &l_269[3];
            const int l_531 = (-1L);
            int i;
            for (i = 0; i < 5; i++)
                l_523[i] = &g_465;
            (*l_466) &= ((((safe_add_func_uint32_t_u_u(l_518[4], ((void*)0 == l_519))) < 1UL) || ((l_522 != &l_520[0][2]) && func_63(func_63(((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((l_528 == l_529) ^ (p_35 >= g_8.f1)), p_35)), 7)) > g_501), l_304, (*g_465), p_32, l_530), &g_501, l_531, p_32, (**l_522)))) || l_532);
        }
    }
    return p_32;
}







static int * func_39(int * p_40, int p_41)
{
    unsigned short *l_120 = &g_53;
    int l_134 = (-1L);
    int *l_151 = &g_111[6];
    char * const l_165 = (void*)0;
    int *l_218 = &g_111[6];
    for (g_53 = 27; (g_53 > 17); g_53 = safe_sub_func_uint32_t_u_u(g_53, 1))
    {
        unsigned short l_104 = 0x108DL;
        unsigned char l_105 = 0xC9L;
        int *l_110 = &g_111[6];
        int l_112 = 0x5229496FL;
        char *l_164 = &g_73;
        int l_206 = (-1L);
        l_112 |= ((*p_40) = (safe_mod_func_int32_t_s_s(((0L <= (((g_80[0] != (((*l_110) &= (((&g_94 != (void*)0) || l_104) | ((g_8.f0 & l_105) == (((safe_add_func_int8_t_s_s(0xA5L, (safe_div_func_int32_t_s_s((*g_99), 0x87B7884FL)))) <= g_89) || p_41)))) && (*p_40))) == p_41) >= 0L)) && p_41), l_105)));
        if ((*p_40))
        {
            unsigned short *l_121 = &g_53;
            int l_124[3][5][3] = {{{0x87F353C2L, 0xF607F386L, 0xCFDE0D86L}, {0x87F353C2L, 0xF607F386L, 0xCFDE0D86L}, {0x87F353C2L, 0xF607F386L, 0xCFDE0D86L}, {0x87F353C2L, 0xF607F386L, 0xCFDE0D86L}, {0x87F353C2L, 0xF607F386L, 0xCFDE0D86L}}, {{0x87F353C2L, 0xF607F386L, 0xCFDE0D86L}, {0x87F353C2L, 0xF607F386L, 0xCFDE0D86L}, {0x87F353C2L, 0xF607F386L, 0xCFDE0D86L}, {0x87F353C2L, 0xF607F386L, 0xCFDE0D86L}, {0x87F353C2L, 0xF607F386L, 0xCFDE0D86L}}, {{0x87F353C2L, 0xF607F386L, 0xCFDE0D86L}, {0x87F353C2L, 0xF607F386L, 0xCFDE0D86L}, {0x87F353C2L, 0xF607F386L, 0xCFDE0D86L}, {0x87F353C2L, 0xF607F386L, 0xCFDE0D86L}, {0x87F353C2L, 0xF607F386L, 0xCFDE0D86L}}};
            char *l_141 = &g_84[0];
            char * const l_142 = &g_8.f1;
            unsigned char *l_161 = &g_149[4][0][0];
            int *l_166 = (void*)0;
            int i, j, k;
            for (l_112 = 5; (l_112 <= 23); l_112 = safe_add_func_uint16_t_u_u(l_112, 9))
            {
                unsigned short l_122 = 0x625CL;
                for (g_73 = 22; (g_73 >= 6); g_73 = safe_sub_func_int8_t_s_s(g_73, 9))
                {
                    int *l_123 = &g_111[6];
                    for (g_89 = (-27); (g_89 >= 27); ++g_89)
                    {
                        (*p_40) = (((g_119[6][3] = &g_94) != &g_94) == g_87);
                    }
                    (*p_40) = ((l_120 == l_121) >= (l_122 = (g_87 ^= g_53)));
                    l_123 = &l_112;
                }
            }
            if ((p_41 < g_111[6]))
            {
                char * const l_131 = &g_73;
                short l_150 = 0x5DDDL;
                if ((*p_40))
                    break;
                if (l_124[0][1][0])
                    break;
                for (p_41 = 1; (p_41 >= 19); p_41 = safe_add_func_uint32_t_u_u(p_41, 8))
                {
                    const char l_129 = 0x3AL;
                    char *l_130 = &g_87;
                    int **l_152 = (void*)0;
                    int **l_153 = &l_110;
                    int **l_154 = &l_151;
                    for (l_105 = 0; (l_105 > 33); ++l_105)
                    {
                        (*g_99) = (((*l_110) = func_63(l_129, l_130, p_41, p_41, l_131)) != (&g_53 == l_121));
                    }
                    for (l_105 = 0; (l_105 < 27); l_105 = safe_add_func_uint16_t_u_u(l_105, 3))
                    {
                        l_134 = 0L;
                        (*l_110) &= ((*g_99) = (65533UL <= (safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((g_149[4][0][0] = (func_63(l_134, l_141, g_89, l_134, l_142) > (safe_div_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(0xA8L, ((safe_lshift_func_uint16_t_u_u(0xF410L, 8)) ^ p_41))), g_53)))) | 0UL), l_150)), g_84[0])), g_19))));
                    }
                    (*l_154) = ((*l_153) = l_151);
                }
            }
            else
            {
                if ((*p_40))
                    break;
            }
            l_124[1][3][1] |= (0L & (safe_lshift_func_int16_t_s_u((0UL & ((void*)0 == &g_73)), ((((*l_161) = ((safe_add_func_uint32_t_u_u(4294967295UL, 0x8A545981L)) ^ (safe_lshift_func_int8_t_s_s(0x11L, 3)))) && (safe_mul_func_uint8_t_u_u(((252UL ^ (func_63((*p_40), l_164, g_89, p_41, l_165) < 0xB4L)) & p_41), (*l_110)))) >= p_41))));
            (*l_151) = 6L;
        }
        else
        {
            const short l_193[1] = {0L};
            char l_207[6];
            unsigned char l_209 = 6UL;
            int i;
            for (i = 0; i < 6; i++)
                l_207[i] = 1L;
            for (g_73 = (-15); (g_73 != 13); g_73 = safe_add_func_uint32_t_u_u(g_73, 6))
            {
                for (g_89 = 0; (g_89 >= 6); ++g_89)
                {
                    if ((*p_40))
                        break;
                }
            }
            (*p_40) = ((*l_110) |= (*g_99));
            for (p_41 = 0; (p_41 < 21); ++p_41)
            {
                unsigned short **l_173 = &l_120;
                unsigned short ***l_174[4] = {&l_173, &l_173, &l_173, &l_173};
                int **l_177 = &l_110;
                int i;
                g_175 = l_173;
                (*l_177) = &l_112;
                for (g_89 = 0; (g_89 <= 3); g_89 += 1)
                {
                    int l_189[5][3] = {{4L, 0xFD216E5EL, 4L}, {4L, 0xFD216E5EL, 4L}, {4L, 0xFD216E5EL, 4L}, {4L, 0xFD216E5EL, 4L}, {4L, 0xFD216E5EL, 4L}};
                    int l_190 = 6L;
                    int *l_205 = (void*)0;
                    unsigned *l_210 = &g_211;
                    int *l_212 = &l_134;
                    int *l_213 = &g_111[7];
                    int i, j;
                    (*l_212) |= (safe_sub_func_uint32_t_u_u(((*l_210) = (safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((safe_unary_minus_func_uint8_t_u(0xDEL)) > (l_190 &= l_189[1][0])), 5)), (safe_add_func_int8_t_s_s(((!l_193[0]) <= 5UL), (safe_sub_func_int32_t_s_s((*l_151), ((-5L) < (((g_208[3][2] = ((**l_177) != (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_div_func_int32_t_s_s((l_206 &= ((*p_40) = (safe_lshift_func_uint8_t_u_u((((p_41 ^ (g_204 = ((*g_176) & g_8.f2))) < (*p_40)) != p_41), 0)))), l_207[3])), 0)), 6)))) == 65535UL) && l_209)))))))), 1UL)), (**l_177)))), l_207[1]));
                    (*l_177) = &p_41;
                    for (l_104 = 0; (l_104 <= 3); l_104 += 1)
                    {
                        l_213 = &p_41;
                    }
                }
            }
        }
    }
    for (l_134 = 0; (l_134 != 24); l_134 = safe_add_func_int16_t_s_s(l_134, 3))
    {
        int *l_216[8][5] = {{&g_80[0], &g_208[3][2], &g_208[4][3], &g_208[3][2], &g_80[0]}, {&g_80[0], &g_208[3][2], &g_208[4][3], &g_208[3][2], &g_80[0]}, {&g_80[0], &g_208[3][2], &g_208[4][3], &g_208[3][2], &g_80[0]}, {&g_80[0], &g_208[3][2], &g_208[4][3], &g_208[3][2], &g_80[0]}, {&g_80[0], &g_208[3][2], &g_208[4][3], &g_208[3][2], &g_80[0]}, {&g_80[0], &g_208[3][2], &g_208[4][3], &g_208[3][2], &g_80[0]}, {&g_80[0], &g_208[3][2], &g_208[4][3], &g_208[3][2], &g_80[0]}, {&g_80[0], &g_208[3][2], &g_208[4][3], &g_208[3][2], &g_80[0]}};
        int *l_217 = (void*)0;
        int i, j;
        return l_217;
    }
    return l_218;
}







static int * func_42(int * p_43)
{
    unsigned l_50[8];
    int *l_51 = &g_19;
    unsigned short *l_52 = &g_53;
    char *l_54 = (void*)0;
    char *l_55 = (void*)0;
    int l_56 = 0L;
    char *l_71 = (void*)0;
    char *l_72 = &g_73;
    int *l_81 = (void*)0;
    int l_82 = 2L;
    char *l_83 = &g_84[0];
    char *l_85 = (void*)0;
    char *l_86 = &g_87;
    int *l_88 = &g_89;
    int i;
    for (i = 0; i < 8; i++)
        l_50[i] = 0xB6FB96F3L;
    (*l_88) |= (safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s((l_56 &= (safe_sub_func_int16_t_s_s(l_50[3], ((*l_52) = (l_51 == &g_19))))), ((*l_86) = ((*l_83) |= (safe_mul_func_int8_t_s_s(((*l_72) = (safe_lshift_func_int8_t_s_s(((~((*l_51) ^ ((safe_sub_func_int32_t_s_s((l_82 = ((*l_51) <= func_63((*p_43), l_55, ((*l_72) = (safe_rshift_func_uint8_t_u_u((*l_51), 3))), (((safe_sub_func_int8_t_s_s((*l_51), (*l_51))) || 0x87B25476L) != 4UL), g_76))), 1L)) < (*l_51)))) < g_8.f0), 3))), (*l_51))))))), g_8.f1));
    for (l_56 = (-30); (l_56 <= (-21)); l_56 = safe_add_func_uint16_t_u_u(l_56, 5))
    {
        if ((*l_88))
            break;
        for (l_82 = 0; l_82 < 5; l_82 += 1)
        {
            g_84[l_82] = 0x77L;
        }
        g_80[0] = (*p_43);
    }
    for (g_73 = 5; (g_73 != (-23)); g_73--)
    {
        g_94 = &l_82;
        for (g_89 = (-28); (g_89 < 14); ++g_89)
        {
            int **l_97[2];
            int i;
            for (i = 0; i < 2; i++)
                l_97[i] = &l_51;
            if ((*p_43))
                break;
            if ((*p_43))
                continue;
            l_51 = (p_43 = p_43);
            if ((*p_43))
                break;
        }
        (*l_88) ^= (*g_94);
    }
    return &g_80[1];
}







static unsigned char func_63(const int p_64, char * p_65, const char p_66, unsigned p_67, char * const p_68)
{
    const int *l_78 = &g_19;
    const int **l_77 = &l_78;
    int *l_79 = &g_80[0];
    (*l_77) = &p_64;
    (*l_79) ^= (0UL == (**l_77));
    return p_64;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8.f0, "g_8.f0", print_hash_value);
    transparent_crc(g_8.f1, "g_8.f1", print_hash_value);
    transparent_crc(g_8.f2, "g_8.f2", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_80[i], "g_80[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_84[i], "g_84[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_111[i], "g_111[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_149[i][j][k], "g_149[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_204, "g_204", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_208[i][j], "g_208[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_344.f1, "g_344.f1", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_489, "g_489", print_hash_value);
    transparent_crc(g_501, "g_501", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_533[i], "g_533[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_587[i], "g_587[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_603, "g_603", print_hash_value);
    transparent_crc(g_627, "g_627", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_647[i], "g_647[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_666, "g_666", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_811[i], "g_811[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_899, "g_899", print_hash_value);
    transparent_crc(g_1011, "g_1011", print_hash_value);
    transparent_crc(g_1660, "g_1660", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
