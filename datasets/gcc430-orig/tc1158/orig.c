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


struct S0 {
   unsigned char f0;
   volatile unsigned short f1;
   int f2;
   unsigned f3;
   volatile unsigned short f4;
   unsigned short f5;
};


static unsigned short g_5 = 0x9CC1L;
static char g_13 = 1L;
static char g_18 = 1L;
static struct S0 g_21 = {255UL,65533UL,0x5C3C3AE5L,7UL,0xBA09L,0x164EL};
static struct S0 *g_23[10] = {&g_21, &g_21, &g_21, &g_21, &g_21, &g_21, &g_21, &g_21, &g_21, &g_21};
static struct S0 ** volatile g_22 = &g_23[6];
static struct S0 g_25 = {1UL,0xC076L,-1L,0xC9AD537EL,65535UL,0x485BL};
static int *g_26[4] = {&g_25.f2, &g_25.f2, &g_25.f2, &g_25.f2};
static int ** const volatile g_27[7] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
static short g_76 = 0xA931L;
static int * volatile g_79 = &g_21.f2;
static struct S0 **g_82 = &g_23[6];
static struct S0 *** volatile g_81 = &g_82;
static const int g_86[3] = {0x6C46319CL, 0x6C46319CL, 0x6C46319CL};
static struct S0 g_105 = {0xEFL,0xF56CL,0xA719620DL,0x40056FDFL,3UL,0x598BL};
static volatile int g_122 = 0x3118DE82L;
static volatile int *g_121 = &g_122;
static volatile struct S0 g_126[10][1] = {{{255UL,0xE6A3L,0x768AC489L,0xB747BEB8L,65531UL,0UL}}, {{255UL,0xE6A3L,0x768AC489L,0xB747BEB8L,65531UL,0UL}}, {{255UL,0xE6A3L,0x768AC489L,0xB747BEB8L,65531UL,0UL}}, {{255UL,0xE6A3L,0x768AC489L,0xB747BEB8L,65531UL,0UL}}, {{255UL,0xE6A3L,0x768AC489L,0xB747BEB8L,65531UL,0UL}}, {{255UL,0xE6A3L,0x768AC489L,0xB747BEB8L,65531UL,0UL}}, {{255UL,0xE6A3L,0x768AC489L,0xB747BEB8L,65531UL,0UL}}, {{255UL,0xE6A3L,0x768AC489L,0xB747BEB8L,65531UL,0UL}}, {{255UL,0xE6A3L,0x768AC489L,0xB747BEB8L,65531UL,0UL}}, {{255UL,0xE6A3L,0x768AC489L,0xB747BEB8L,65531UL,0UL}}};
static const int *g_129 = &g_21.f2;
static const int ** volatile g_128[7][8] = {{(void*)0, &g_129, (void*)0, &g_129, &g_129, &g_129, (void*)0, &g_129}, {(void*)0, &g_129, (void*)0, &g_129, &g_129, &g_129, (void*)0, &g_129}, {(void*)0, &g_129, (void*)0, &g_129, &g_129, &g_129, (void*)0, &g_129}, {(void*)0, &g_129, (void*)0, &g_129, &g_129, &g_129, (void*)0, &g_129}, {(void*)0, &g_129, (void*)0, &g_129, &g_129, &g_129, (void*)0, &g_129}, {(void*)0, &g_129, (void*)0, &g_129, &g_129, &g_129, (void*)0, &g_129}, {(void*)0, &g_129, (void*)0, &g_129, &g_129, &g_129, (void*)0, &g_129}};
static const int ** volatile g_131 = &g_129;
static int **g_133[3] = {(void*)0, (void*)0, (void*)0};
static int *** volatile g_132[2][4] = {{&g_133[1], &g_133[1], &g_133[1], &g_133[1]}, {&g_133[1], &g_133[1], &g_133[1], &g_133[1]}};
static int *** volatile g_134 = &g_133[2];
static volatile struct S0 g_138 = {0x3FL,0UL,0L,4294967287UL,0x09FFL,0x4D38L};
static int g_149 = 0L;
static struct S0 * volatile g_167[1] = {&g_105};
static struct S0 * volatile g_168 = &g_105;
static volatile struct S0 g_171 = {6UL,0x4049L,0xAE6DAE2CL,0x23DFF760L,5UL,65528UL};
static volatile struct S0 * volatile g_172 = &g_126[0][0];
static int *** volatile g_176[3] = {(void*)0, (void*)0, (void*)0};
static int ** volatile g_186 = &g_26[2];
static volatile int * volatile g_189 = &g_126[8][0].f2;
static int *g_195 = &g_21.f2;
static int *** volatile g_196 = (void*)0;
static char *g_214[8][6] = {{&g_13, &g_18, &g_18, &g_13, &g_13, &g_13}, {&g_13, &g_18, &g_18, &g_13, &g_13, &g_13}, {&g_13, &g_18, &g_18, &g_13, &g_13, &g_13}, {&g_13, &g_18, &g_18, &g_13, &g_13, &g_13}, {&g_13, &g_18, &g_18, &g_13, &g_13, &g_13}, {&g_13, &g_18, &g_18, &g_13, &g_13, &g_13}, {&g_13, &g_18, &g_18, &g_13, &g_13, &g_13}, {&g_13, &g_18, &g_18, &g_13, &g_13, &g_13}};
static int ** volatile g_218 = &g_26[2];
static struct S0 g_219 = {255UL,0UL,0x03B26C8AL,0x918AC7DDL,65535UL,1UL};
static int ** volatile g_245 = &g_26[0];
static volatile struct S0 g_291[5][1] = {{{0x15L,0x42F6L,1L,0UL,0UL,0x960BL}}, {{0x15L,0x42F6L,1L,0UL,0UL,0x960BL}}, {{0x15L,0x42F6L,1L,0UL,0UL,0x960BL}}, {{0x15L,0x42F6L,1L,0UL,0UL,0x960BL}}, {{0x15L,0x42F6L,1L,0UL,0UL,0x960BL}}};
static struct S0 g_305 = {4UL,0x8E7FL,0x176E453CL,4294967286UL,0xC151L,0x3395L};



static char func_1(void);
static struct S0 func_2(unsigned p_3, short p_4);
static struct S0 func_10(int p_11);
static int * func_29(int ** p_30, int p_31);
static int ** func_32(unsigned char p_33, struct S0 ** p_34, const short p_35, short p_36);
static unsigned short func_40(char * p_41);
static char * func_42(int ** p_43);
static int ** func_44(struct S0 ** p_45);
static struct S0 ** func_46(int * p_47, struct S0 ** p_48, struct S0 * p_49, unsigned char p_50);
static int func_53(unsigned short p_54, int * p_55, struct S0 ** p_56, unsigned short p_57, const short p_58);
static char func_1(void)
{
    int l_6 = (-2L);
    struct S0 *l_306 = &g_21;
    (*l_306) = func_2(g_5, l_6);
    (*l_306) = (*l_306);
    return l_6;
}







static struct S0 func_2(unsigned p_3, short p_4)
{
    char *l_19 = &g_18;
    int l_222 = 0xA0428138L;
    int l_223 = 0x24E71501L;
    int *l_295 = &g_105.f2;
    char **l_298[10] = {&g_214[6][0], &g_214[6][0], (void*)0, &g_214[6][0], &g_214[6][0], (void*)0, &g_214[6][0], &g_214[6][0], (void*)0, &g_214[6][0]};
    int i;
    for (g_5 = 0; (g_5 <= 27); g_5 = safe_add_func_int8_t_s_s(g_5, 6))
    {
        unsigned char l_9[6][8][5] = {{{0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}}, {{0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}}, {{0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}}, {{0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}}, {{0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}}, {{0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}, {0x64L, 0x8BL, 0x4BL, 0x59L, 0x2BL}}};
        struct S0 **l_37 = (void*)0;
        int l_221[10][5] = {{0L, 1L, 0xA619F6E6L, 0x36759220L, 0x5F2520D2L}, {0L, 1L, 0xA619F6E6L, 0x36759220L, 0x5F2520D2L}, {0L, 1L, 0xA619F6E6L, 0x36759220L, 0x5F2520D2L}, {0L, 1L, 0xA619F6E6L, 0x36759220L, 0x5F2520D2L}, {0L, 1L, 0xA619F6E6L, 0x36759220L, 0x5F2520D2L}, {0L, 1L, 0xA619F6E6L, 0x36759220L, 0x5F2520D2L}, {0L, 1L, 0xA619F6E6L, 0x36759220L, 0x5F2520D2L}, {0L, 1L, 0xA619F6E6L, 0x36759220L, 0x5F2520D2L}, {0L, 1L, 0xA619F6E6L, 0x36759220L, 0x5F2520D2L}, {0L, 1L, 0xA619F6E6L, 0x36759220L, 0x5F2520D2L}};
        int i, j, k;
        for (p_4 = 4; (p_4 >= 0); p_4 -= 1)
        {
            char *l_12 = &g_13;
            int l_14 = 9L;
            char **l_15 = (void*)0;
            char *l_17 = &g_18;
            char **l_16 = &l_17;
            struct S0 *l_24[6][8] = {{&g_21, &g_21, &g_21, &g_21, &g_21, &g_21, &g_21, &g_21}, {&g_21, &g_21, &g_21, &g_21, &g_21, &g_21, &g_21, &g_21}, {&g_21, &g_21, &g_21, &g_21, &g_21, &g_21, &g_21, &g_21}, {&g_21, &g_21, &g_21, &g_21, &g_21, &g_21, &g_21, &g_21}, {&g_21, &g_21, &g_21, &g_21, &g_21, &g_21, &g_21, &g_21}, {&g_21, &g_21, &g_21, &g_21, &g_21, &g_21, &g_21, &g_21}};
            int **l_28 = &g_26[2];
            int i, j;
            g_25 = func_10((((*l_12) = (-9L)) != (l_14 , (g_5 & (((*l_16) = l_12) != (p_4 , l_19))))));

            ;
            (*l_28) = g_26[2];
            for (g_25.f3 = 0; (g_25.f3 <= 4); g_25.f3 += 1)
            {
                int *l_51 = (void*)0;
                struct S0 **l_52[9][1][5] = {{{&l_24[1][2], &g_23[6], &l_24[3][1], &g_23[6], &g_23[6]}}, {{&l_24[1][2], &g_23[6], &l_24[3][1], &g_23[6], &g_23[6]}}, {{&l_24[1][2], &g_23[6], &l_24[3][1], &g_23[6], &g_23[6]}}, {{&l_24[1][2], &g_23[6], &l_24[3][1], &g_23[6], &g_23[6]}}, {{&l_24[1][2], &g_23[6], &l_24[3][1], &g_23[6], &g_23[6]}}, {{&l_24[1][2], &g_23[6], &l_24[3][1], &g_23[6], &g_23[6]}}, {{&l_24[1][2], &g_23[6], &l_24[3][1], &g_23[6], &g_23[6]}}, {{&l_24[1][2], &g_23[6], &l_24[3][1], &g_23[6], &g_23[6]}}, {{&l_24[1][2], &g_23[6], &l_24[3][1], &g_23[6], &g_23[6]}}};
                int i, j, k;
                for (g_13 = 4; (g_13 >= 0); g_13 -= 1)
                {
                    unsigned short *l_220[9][4][2] = {{{&g_25.f5, &g_105.f5}, {&g_25.f5, &g_105.f5}, {&g_25.f5, &g_105.f5}, {&g_25.f5, &g_105.f5}}, {{&g_25.f5, &g_105.f5}, {&g_25.f5, &g_105.f5}, {&g_25.f5, &g_105.f5}, {&g_25.f5, &g_105.f5}}, {{&g_25.f5, &g_105.f5}, {&g_25.f5, &g_105.f5}, {&g_25.f5, &g_105.f5}, {&g_25.f5, &g_105.f5}}, {{&g_25.f5, &g_105.f5}, {&g_25.f5, &g_105.f5}, {&g_25.f5, &g_105.f5}, {&g_25.f5, &g_105.f5}}, {{&g_25.f5, &g_105.f5}, {&g_25.f5, &g_105.f5}, {&g_25.f5, &g_105.f5}, {&g_25.f5, &g_105.f5}}, {{&g_25.f5, &g_105.f5}, {&g_25.f5, &g_105.f5}, {&g_25.f5, &g_105.f5}, {&g_25.f5, &g_105.f5}}, {{&g_25.f5, &g_105.f5}, {&g_25.f5, &g_105.f5}, {&g_25.f5, &g_105.f5}, {&g_25.f5, &g_105.f5}}, {{&g_25.f5, &g_105.f5}, {&g_25.f5, &g_105.f5}, {&g_25.f5, &g_105.f5}, {&g_25.f5, &g_105.f5}}, {{&g_25.f5, &g_105.f5}, {&g_25.f5, &g_105.f5}, {&g_25.f5, &g_105.f5}, {&g_25.f5, &g_105.f5}}};
                    int **l_290 = &g_26[2];
                    int i, j, k;
                }
            }
        }
        l_295 = &l_223;

        ;
        (*g_121) = (l_221[7][2] = (safe_rshift_func_uint8_t_u_s((((*l_295) , (func_10((l_298[6] == &l_19)) , p_3)) <= ((((safe_sub_func_uint16_t_u_u(((l_222 = (((p_3 , l_221[4][0]) <= (safe_mul_func_uint8_t_u_u(((!((safe_mul_func_uint8_t_u_u((~((g_76 ^ (+g_21.f5)) && 7UL)), (*l_295))) <= (*l_295))) , (*l_295)), p_4))) >= 0x89C085A2L)) , 0x135FL), g_5)) || 0x38B36EF0L) < l_221[2][2]) >= g_25.f5)), (*l_295))));
    }

    ;
    return g_305;
}







static struct S0 func_10(int p_11)
{
    struct S0 *l_20 = &g_21;
    (*g_22) = l_20;
    return (*l_20);
}







static int * func_29(int ** p_30, int p_31)
{
    int l_230 = (-9L);
    struct S0 *l_231 = &g_21;
    (*l_231) = func_10(l_230);
    for (g_219.f2 = 3; (g_219.f2 >= 0); g_219.f2 -= 1)
    {
        struct S0 *l_234 = &g_21;
        int l_241 = 0x101C0A63L;
        int *l_255 = &g_21.f2;
        int i;
        (*l_231) = (**g_82);
        if (((*g_189) && (safe_rshift_func_int8_t_s_u(0x43L, 4))))
        {
            l_234 = ((*g_82) = (**g_81));
        }
        else
        {
            int i;
            g_26[g_219.f2] = g_26[g_219.f2];
            g_26[g_219.f2] = g_26[g_219.f2];
        }
        for (g_105.f0 = 0; (g_105.f0 <= 5); g_105.f0 += 1)
        {
            unsigned l_235 = 1UL;
            int l_243 = 0xAFADB9FAL;
            int *l_261 = (void*)0;
            for (p_31 = 5; (p_31 >= 0); p_31 -= 1)
            {
                char l_238 = 0L;
                int *l_239 = &l_230;
                struct S0 ***l_240 = &g_82;
                unsigned char *l_279[10] = {&g_25.f0, &g_25.f0, &g_105.f0, &g_25.f0, &g_25.f0, &g_105.f0, &g_25.f0, &g_25.f0, &g_105.f0, &g_25.f0};
                int i;
                if (l_235)
                    break;
            }
        }
    }
    return (*g_218);


}







static int ** func_32(unsigned char p_33, struct S0 ** p_34, const short p_35, short p_36)
{
    int l_226 = 0xE65E6F25L;
    int l_227 = 1L;
    int l_228[4];
    int **l_229 = (void*)0;
    int i;
    for (i = 0; i < 4; i++)
        l_228[i] = 0xD99B6EB5L;
    l_228[0] = (l_227 = ((g_122 < (-1L)) ^ (safe_sub_func_int16_t_s_s(l_226, l_226))));
    return l_229;


}







static unsigned short func_40(char * p_41)
{
    int *l_215 = &g_25.f2;
    int **l_216 = (void*)0;
    int **l_217 = (void*)0;
    (*g_218) = l_215;
    g_219 = (*g_168);
    return (*l_215);
}







static char * func_42(int ** p_43)
{
    short l_212 = 0L;
    char *l_213[7][5][7] = {{{&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}, {&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}, {&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}, {&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}, {&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}}, {{&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}, {&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}, {&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}, {&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}, {&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}}, {{&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}, {&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}, {&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}, {&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}, {&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}}, {{&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}, {&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}, {&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}, {&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}, {&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}}, {{&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}, {&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}, {&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}, {&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}, {&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}}, {{&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}, {&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}, {&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}, {&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}, {&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}}, {{&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}, {&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}, {&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}, {&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}, {&g_18, &g_13, &g_13, &g_13, &g_18, &g_13, &g_13}}};
    int i, j, k;
    (*g_121) = l_212;
    return l_213[5][2][1];


}







static int ** func_44(struct S0 ** p_45)
{
    int **l_198 = &g_195;
    const int l_209 = 0x20E0C4DDL;
    int l_211[5];
    int i;
    for (i = 0; i < 5; i++)
        l_211[i] = 2L;
    for (g_25.f5 = 0; (g_25.f5 <= 1); g_25.f5 += 1)
    {
        return l_198;


    }
    for (g_149 = (-29); (g_149 >= 25); g_149 = safe_add_func_uint16_t_u_u(g_149, 2))
    {
        int *l_201 = (void*)0;
        unsigned char *l_206 = (void*)0;
        unsigned char *l_207 = (void*)0;
        unsigned char *l_208 = &g_25.f0;
        int l_210 = 0L;
        (*l_198) = l_201;

        ;
        l_211[0] = ((((safe_rshift_func_int16_t_s_u(1L, 0)) <= (g_76 = 0x5D6DL)) | ((*l_208) = (safe_rshift_func_int8_t_s_s(g_138.f0, g_18)))) && (l_209 , g_105.f0));
    }
    for (g_25.f5 = 0; (g_25.f5 <= 0); g_25.f5 += 1)
    {
        return l_198;


    }
    return l_198;


}







static struct S0 ** func_46(int * p_47, struct S0 ** p_48, struct S0 * p_49, unsigned char p_50)
{
    unsigned char l_59 = 9UL;
    struct S0 **l_66 = &g_23[7];
    int l_108 = 1L;
    unsigned char *l_115 = (void*)0;
    unsigned short l_145 = 0UL;
    int *l_151 = &g_25.f2;
    char *l_160[5][7] = {{&g_18, &g_18, &g_13, &g_18, &g_13, &g_18, &g_18}, {&g_18, &g_18, &g_13, &g_18, &g_13, &g_18, &g_18}, {&g_18, &g_18, &g_13, &g_18, &g_13, &g_18, &g_18}, {&g_18, &g_18, &g_13, &g_18, &g_13, &g_18, &g_18}, {&g_18, &g_18, &g_13, &g_18, &g_13, &g_18, &g_18}};
    char **l_159 = &l_160[0][0];
    const int *l_170 = &g_21.f2;
    int *l_183[6][7][4] = {{{(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}}, {{(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}}, {{(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}}, {{(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}}, {{(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}}, {{(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}, {(void*)0, &g_149, &g_149, &g_149}}};
    int **l_182 = &l_183[3][3][2];
    volatile int * volatile l_190 = &g_138.f2;
    int **l_197 = &g_26[1];
    int i, j, k;
    l_108 = func_53((p_50 && (l_59 , g_18)), p_47, ((g_13 != (((safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u(l_59, (g_25.f1 > (l_59 | (g_13 & g_25.f3))))) , (**g_22)) , l_59), l_59)), p_50)) || p_50) > l_59)) , l_66), l_59, g_13);
    if ((l_59 > ((safe_mod_func_uint32_t_u_u((l_108 = (safe_mul_func_int8_t_s_s((((l_59 != g_25.f0) <= (((l_108 ^ (safe_sub_func_uint32_t_u_u((&p_50 != l_115), (safe_lshift_func_int8_t_s_u(l_108, 0))))) , p_47) == (void*)0)) , g_21.f4), p_50))), l_59)) == 1L)))
    {
        char l_135 = 2L;
        char *l_156 = &g_13;
        char **l_155[8];
        char **l_158 = &l_156;
        char ***l_157 = &l_158;
        int i;
        for (i = 0; i < 8; i++)
            l_155[i] = &l_156;
        for (g_76 = 0; (g_76 > 14); g_76 = safe_add_func_uint32_t_u_u(g_76, 6))
        {
            int **l_120[6][3] = {{&g_26[3], &g_26[2], &g_26[1]}, {&g_26[3], &g_26[2], &g_26[1]}, {&g_26[3], &g_26[2], &g_26[1]}, {&g_26[3], &g_26[2], &g_26[1]}, {&g_26[3], &g_26[2], &g_26[1]}, {&g_26[3], &g_26[2], &g_26[1]}};
            volatile int **l_123[10][6][4] = {{{&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}}, {{&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}}, {{&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}}, {{&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}}, {{&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}}, {{&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}}, {{&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}}, {{&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}}, {{&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}}, {{&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}, {&g_121, &g_121, &g_121, (void*)0}}};
            const int *l_127[10][6] = {{&g_105.f2, &g_105.f2, &l_108, &g_21.f2, &g_86[0], &g_86[0]}, {&g_105.f2, &g_105.f2, &l_108, &g_21.f2, &g_86[0], &g_86[0]}, {&g_105.f2, &g_105.f2, &l_108, &g_21.f2, &g_86[0], &g_86[0]}, {&g_105.f2, &g_105.f2, &l_108, &g_21.f2, &g_86[0], &g_86[0]}, {&g_105.f2, &g_105.f2, &l_108, &g_21.f2, &g_86[0], &g_86[0]}, {&g_105.f2, &g_105.f2, &l_108, &g_21.f2, &g_86[0], &g_86[0]}, {&g_105.f2, &g_105.f2, &l_108, &g_21.f2, &g_86[0], &g_86[0]}, {&g_105.f2, &g_105.f2, &l_108, &g_21.f2, &g_86[0], &g_86[0]}, {&g_105.f2, &g_105.f2, &l_108, &g_21.f2, &g_86[0], &g_86[0]}, {&g_105.f2, &g_105.f2, &l_108, &g_21.f2, &g_86[0], &g_86[0]}};
            char l_150 = 9L;
            int i, j, k;
            p_47 = p_47;
            g_121 = g_121;
            for (g_105.f3 = 0; (g_105.f3 >= 40); g_105.f3++)
            {
                const int **l_130 = (void*)0;
                (**l_66) = g_126[8][0];
                (*g_131) = l_127[6][0];
            }
            for (g_18 = 3; (g_18 >= 0); g_18 -= 1)
            {
                int i;
                (*g_134) = &g_26[g_18];
                if (p_50)
                {
                    if (l_135)
                        break;
                }
                else
                {
                    int i;
                    g_26[g_18] = p_47;
                    for (g_25.f0 = (-15); (g_25.f0 <= 1); g_25.f0++)
                    {
                        (*g_121) = l_135;
                        (**g_22) = (**p_48);
                    }
                }
                if ((0x8FB7BDAAL & l_59))
                {
                    (*g_121) = p_50;
                }
                else
                {
                    short l_146 = 0x38B2L;
                    struct S0 **l_152[1][7][5] = {{{&g_23[6], &g_23[9], &g_23[6], &g_23[9], &g_23[6]}, {&g_23[6], &g_23[9], &g_23[6], &g_23[9], &g_23[6]}, {&g_23[6], &g_23[9], &g_23[6], &g_23[9], &g_23[6]}, {&g_23[6], &g_23[9], &g_23[6], &g_23[9], &g_23[6]}, {&g_23[6], &g_23[9], &g_23[6], &g_23[9], &g_23[6]}, {&g_23[6], &g_23[9], &g_23[6], &g_23[9], &g_23[6]}, {&g_23[6], &g_23[9], &g_23[6], &g_23[9], &g_23[6]}}};
                    int i, j, k;
                    for (g_105.f5 = 0; (g_105.f5 <= 0); g_105.f5 += 1)
                    {
                        int l_147 = 0xCE327E5AL;
                        int *l_148[9] = {&g_149, (void*)0, &g_149, (void*)0, &g_149, (void*)0, &g_149, (void*)0, &g_149};
                        int i, j;
                        g_138 = g_126[(g_18 + 1)][g_105.f5];
                        if (l_135)
                            break;
                        (*g_79) = ((0xFB25L > ((p_50 && p_50) == l_59)) , ((l_108 = (p_50 > (((safe_add_func_uint8_t_u_u(0x6BL, (safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(0xB078L, ((((l_145 ^ ((void*)0 == &g_23[(g_18 + 5)])) && g_105.f0) , g_21.f4) || l_146))), 9)))) && g_86[0]) < l_147))) , l_150));
                    }
                    l_151 = (void*)0;

                    ;
                    p_47 = (void*)0;
                    return l_152[0][4][1];



                }
            }
        }


        ;

        (*g_121) = (0x70EC7795L == (((l_135 ^ 0x699BL) , (safe_mod_func_uint16_t_u_u((0x64L && (g_86[0] ^ (func_10(l_135) , (l_155[4] != ((*l_157) = &l_156))))), 0x298DL))) , 0x64B6CB0DL));
        (*l_157) = l_159;

        ;
    }
    else
    {
        int *l_181[3];
        int **l_180[4][1];
        int i, j;
        for (i = 0; i < 3; i++)
            l_181[i] = (void*)0;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_180[i][j] = &l_181[1];
        }
        for (g_25.f2 = (-11); (g_25.f2 >= 6); ++g_25.f2)
        {
            int *l_173 = &g_21.f2;
            int **l_174[2][4];
            int ***l_175 = &l_174[1][2];
            int *l_179 = (void*)0;
            int **l_178[6][7] = {{&l_179, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}, {&l_179, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}, {&l_179, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}, {&l_179, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}, {&l_179, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}, {&l_179, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}};
            int ***l_177[8][5][6] = {{{&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}}, {{&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}}, {{&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}}, {{&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}}, {{&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}}, {{&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}}, {{&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}}, {{&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}, {&l_178[5][1], &l_178[2][4], (void*)0, &l_178[1][2], (void*)0, &l_178[0][4]}}};
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 4; j++)
                    l_174[i][j] = (void*)0;
            }
            for (g_21.f3 = 0; (g_21.f3 != 14); g_21.f3 = safe_add_func_int32_t_s_s(g_21.f3, 4))
            {
                for (g_18 = (-2); (g_18 >= 29); ++g_18)
                {
                    const int **l_169[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_169[i] = &g_129;
                    (*g_168) = (***g_81);
                    l_170 = (*g_131);
                    (*g_172) = g_171;
                    l_173 = (((!g_171.f5) || ((p_50 | (*l_151)) , p_50)) , &l_108);

                    ;
                }
                if (p_50)
                    break;
                (*g_121) = (*l_170);
            }

            ;
            l_180[0][0] = ((*l_175) = l_174[1][2]);
            (*g_121) = (((*l_175) = l_182) != (void*)0);


            for (l_59 = 0; (l_59 >= 32); ++l_59)
            {
                (*g_121) = 9L;
                for (g_105.f5 = 0; (g_105.f5 <= 5); g_105.f5 += 1)
                {
                    return (*g_81);


                }
                (*g_186) = l_181[1];
                for (g_149 = (-9); (g_149 > (-17)); g_149 = safe_sub_func_int8_t_s_s(g_149, 1))
                {
                    unsigned char l_194 = 0xE2L;
                    for (g_105.f0 = 0; (g_105.f0 <= 2); g_105.f0 += 1)
                    {
                        l_190 = g_189;

                        ;
                    }
                    for (g_21.f5 = 6; (g_21.f5 <= 50); g_21.f5++)
                    {
                        int **l_193 = &g_26[1];
                        (*l_193) = p_47;
                        if (l_194)
                            break;
                        (*g_121) = l_194;
                        g_195 = p_47;

                        ;
                    }
                }
            }
        }



        ;
        ;
    }


    ;

    ;
    ;
    l_197 = &p_47;

    ;
    (**l_66) = (**g_82);
    return (*g_81);



}







static int func_53(unsigned short p_54, int * p_55, struct S0 ** p_56, unsigned short p_57, const short p_58)
{
    short l_71[8][4][7] = {{{9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}, {9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}, {9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}, {9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}}, {{9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}, {9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}, {9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}, {9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}}, {{9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}, {9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}, {9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}, {9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}}, {{9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}, {9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}, {9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}, {9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}}, {{9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}, {9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}, {9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}, {9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}}, {{9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}, {9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}, {9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}, {9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}}, {{9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}, {9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}, {9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}, {9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}}, {{9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}, {9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}, {9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}, {9L, 0x7311L, 1L, 0xE8E9L, 0xE36CL, (-1L), 0x2345L}}};
    short *l_75 = &g_76;
    unsigned char *l_77 = &g_25.f0;
    char l_78[2];
    int *l_80[8][3] = {{&g_21.f2, (void*)0, &g_21.f2}, {&g_21.f2, (void*)0, &g_21.f2}, {&g_21.f2, (void*)0, &g_21.f2}, {&g_21.f2, (void*)0, &g_21.f2}, {&g_21.f2, (void*)0, &g_21.f2}, {&g_21.f2, (void*)0, &g_21.f2}, {&g_21.f2, (void*)0, &g_21.f2}, {&g_21.f2, (void*)0, &g_21.f2}};
    unsigned short l_102 = 0x2A9CL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_78[i] = (-1L);
    (*g_79) = ((((safe_rshift_func_uint16_t_u_s(2UL, 2)) & (safe_rshift_func_uint8_t_u_u(g_25.f5, ((l_71[3][1][3] , p_54) != ((safe_sub_func_int16_t_s_s((0xBFL > (l_71[3][1][3] || (l_71[3][1][3] && ((safe_unary_minus_func_int16_t_s(((*l_75) = (-10L)))) == ((*l_77) = p_54))))), l_78[1])) || g_25.f4))))) , 0x9151F0AFL) == g_21.f5);
    l_80[6][0] = p_55;


    (*g_81) = p_56;
    for (g_18 = 7; (g_18 >= 2); g_18 -= 1)
    {
        unsigned short l_83 = 65531UL;
        char *l_99 = &g_18;
        if (l_83)
            break;
        for (g_25.f5 = 0; (g_25.f5 <= 9); g_25.f5 += 1)
        {
            const int *l_85 = &g_86[1];
            const int **l_84 = &l_85;
            const int *l_88[8];
            const int **l_87 = &l_88[2];
            const int *l_90[6][8][5] = {{{&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}}, {{&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}}, {{&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}}, {{&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}}, {{&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}}, {{&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}, {&g_21.f2, &g_86[1], &g_21.f2, &g_25.f2, &g_25.f2}}};
            const int **l_89 = &l_90[5][2][4];
            char *l_100[9][4][3] = {{{&l_78[1], &l_78[0], &g_18}, {&l_78[1], &l_78[0], &g_18}, {&l_78[1], &l_78[0], &g_18}, {&l_78[1], &l_78[0], &g_18}}, {{&l_78[1], &l_78[0], &g_18}, {&l_78[1], &l_78[0], &g_18}, {&l_78[1], &l_78[0], &g_18}, {&l_78[1], &l_78[0], &g_18}}, {{&l_78[1], &l_78[0], &g_18}, {&l_78[1], &l_78[0], &g_18}, {&l_78[1], &l_78[0], &g_18}, {&l_78[1], &l_78[0], &g_18}}, {{&l_78[1], &l_78[0], &g_18}, {&l_78[1], &l_78[0], &g_18}, {&l_78[1], &l_78[0], &g_18}, {&l_78[1], &l_78[0], &g_18}}, {{&l_78[1], &l_78[0], &g_18}, {&l_78[1], &l_78[0], &g_18}, {&l_78[1], &l_78[0], &g_18}, {&l_78[1], &l_78[0], &g_18}}, {{&l_78[1], &l_78[0], &g_18}, {&l_78[1], &l_78[0], &g_18}, {&l_78[1], &l_78[0], &g_18}, {&l_78[1], &l_78[0], &g_18}}, {{&l_78[1], &l_78[0], &g_18}, {&l_78[1], &l_78[0], &g_18}, {&l_78[1], &l_78[0], &g_18}, {&l_78[1], &l_78[0], &g_18}}, {{&l_78[1], &l_78[0], &g_18}, {&l_78[1], &l_78[0], &g_18}, {&l_78[1], &l_78[0], &g_18}, {&l_78[1], &l_78[0], &g_18}}, {{&l_78[1], &l_78[0], &g_18}, {&l_78[1], &l_78[0], &g_18}, {&l_78[1], &l_78[0], &g_18}, {&l_78[1], &l_78[0], &g_18}}};
            char **l_101 = &l_100[0][2][0];
            int i, j, k;
            for (i = 0; i < 8; i++)
                l_88[i] = &g_86[1];
            (*l_89) = ((*l_87) = ((*l_84) = p_55));




            l_102 = ((safe_add_func_uint32_t_u_u(0UL, p_57)) , (safe_mod_func_int32_t_s_s((g_86[1] == 0xF1BEL), (safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((l_83 , ((l_99 == ((*l_101) = l_100[7][3][1])) < p_58)), l_83)), p_57)))));
            for (p_57 = 0; (p_57 <= 9); p_57 += 1)
            {
                const int *l_103[8] = {(void*)0, &g_21.f2, (void*)0, &g_21.f2, (void*)0, &g_21.f2, (void*)0, &g_21.f2};
                int i;
                (*l_87) = p_55;
                for (l_83 = 0; (l_83 <= 9); l_83 += 1)
                {
                    int l_106[7][3][6] = {{{0xE5A13A27L, 2L, 7L, 2L, 1L, (-1L)}, {0xE5A13A27L, 2L, 7L, 2L, 1L, (-1L)}, {0xE5A13A27L, 2L, 7L, 2L, 1L, (-1L)}}, {{0xE5A13A27L, 2L, 7L, 2L, 1L, (-1L)}, {0xE5A13A27L, 2L, 7L, 2L, 1L, (-1L)}, {0xE5A13A27L, 2L, 7L, 2L, 1L, (-1L)}}, {{0xE5A13A27L, 2L, 7L, 2L, 1L, (-1L)}, {0xE5A13A27L, 2L, 7L, 2L, 1L, (-1L)}, {0xE5A13A27L, 2L, 7L, 2L, 1L, (-1L)}}, {{0xE5A13A27L, 2L, 7L, 2L, 1L, (-1L)}, {0xE5A13A27L, 2L, 7L, 2L, 1L, (-1L)}, {0xE5A13A27L, 2L, 7L, 2L, 1L, (-1L)}}, {{0xE5A13A27L, 2L, 7L, 2L, 1L, (-1L)}, {0xE5A13A27L, 2L, 7L, 2L, 1L, (-1L)}, {0xE5A13A27L, 2L, 7L, 2L, 1L, (-1L)}}, {{0xE5A13A27L, 2L, 7L, 2L, 1L, (-1L)}, {0xE5A13A27L, 2L, 7L, 2L, 1L, (-1L)}, {0xE5A13A27L, 2L, 7L, 2L, 1L, (-1L)}}, {{0xE5A13A27L, 2L, 7L, 2L, 1L, (-1L)}, {0xE5A13A27L, 2L, 7L, 2L, 1L, (-1L)}, {0xE5A13A27L, 2L, 7L, 2L, 1L, (-1L)}}};
                    int i, j, k;
                    for (l_102 = 0; (l_102 <= 3); l_102 += 1)
                    {
                        int l_104 = 1L;
                        int i, j, k;
                        (*l_89) = ((*l_84) = l_103[7]);

                        ;
                        (*l_87) = l_80[6][0];
                        l_104 = l_71[g_18][l_102][(l_102 + 2)];
                    }
                    (**p_56) = g_105;
                    if (l_83)
                        break;
                    for (l_102 = 0; (l_102 <= 9); l_102 += 1)
                    {
                        int * const l_107 = &g_21.f2;
                        if (l_106[5][2][1])
                            break;
                        p_55 = l_107;

                        ;
                        return l_83;
                    }
                }
            }



        }
    }
    return p_54;
}





int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_21.f0, "g_21.f0", print_hash_value);
    transparent_crc(g_21.f1, "g_21.f1", print_hash_value);
    transparent_crc(g_21.f2, "g_21.f2", print_hash_value);
    transparent_crc(g_21.f3, "g_21.f3", print_hash_value);
    transparent_crc(g_21.f4, "g_21.f4", print_hash_value);
    transparent_crc(g_21.f5, "g_21.f5", print_hash_value);
    transparent_crc(g_25.f0, "g_25.f0", print_hash_value);
    transparent_crc(g_25.f1, "g_25.f1", print_hash_value);
    transparent_crc(g_25.f2, "g_25.f2", print_hash_value);
    transparent_crc(g_25.f3, "g_25.f3", print_hash_value);
    transparent_crc(g_25.f4, "g_25.f4", print_hash_value);
    transparent_crc(g_25.f5, "g_25.f5", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_86[i], "g_86[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_105.f0, "g_105.f0", print_hash_value);
    transparent_crc(g_105.f1, "g_105.f1", print_hash_value);
    transparent_crc(g_105.f2, "g_105.f2", print_hash_value);
    transparent_crc(g_105.f3, "g_105.f3", print_hash_value);
    transparent_crc(g_105.f4, "g_105.f4", print_hash_value);
    transparent_crc(g_105.f5, "g_105.f5", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_126[i][j].f0, "g_126[i][j].f0", print_hash_value);
            transparent_crc(g_126[i][j].f1, "g_126[i][j].f1", print_hash_value);
            transparent_crc(g_126[i][j].f2, "g_126[i][j].f2", print_hash_value);
            transparent_crc(g_126[i][j].f3, "g_126[i][j].f3", print_hash_value);
            transparent_crc(g_126[i][j].f4, "g_126[i][j].f4", print_hash_value);
            transparent_crc(g_126[i][j].f5, "g_126[i][j].f5", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_138.f0, "g_138.f0", print_hash_value);
    transparent_crc(g_138.f1, "g_138.f1", print_hash_value);
    transparent_crc(g_138.f2, "g_138.f2", print_hash_value);
    transparent_crc(g_138.f3, "g_138.f3", print_hash_value);
    transparent_crc(g_138.f4, "g_138.f4", print_hash_value);
    transparent_crc(g_138.f5, "g_138.f5", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_171.f0, "g_171.f0", print_hash_value);
    transparent_crc(g_171.f1, "g_171.f1", print_hash_value);
    transparent_crc(g_171.f2, "g_171.f2", print_hash_value);
    transparent_crc(g_171.f3, "g_171.f3", print_hash_value);
    transparent_crc(g_171.f4, "g_171.f4", print_hash_value);
    transparent_crc(g_171.f5, "g_171.f5", print_hash_value);
    transparent_crc(g_219.f0, "g_219.f0", print_hash_value);
    transparent_crc(g_219.f1, "g_219.f1", print_hash_value);
    transparent_crc(g_219.f2, "g_219.f2", print_hash_value);
    transparent_crc(g_219.f3, "g_219.f3", print_hash_value);
    transparent_crc(g_219.f4, "g_219.f4", print_hash_value);
    transparent_crc(g_219.f5, "g_219.f5", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_291[i][j].f0, "g_291[i][j].f0", print_hash_value);
            transparent_crc(g_291[i][j].f1, "g_291[i][j].f1", print_hash_value);
            transparent_crc(g_291[i][j].f2, "g_291[i][j].f2", print_hash_value);
            transparent_crc(g_291[i][j].f3, "g_291[i][j].f3", print_hash_value);
            transparent_crc(g_291[i][j].f4, "g_291[i][j].f4", print_hash_value);
            transparent_crc(g_291[i][j].f5, "g_291[i][j].f5", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_305.f0, "g_305.f0", print_hash_value);
    transparent_crc(g_305.f1, "g_305.f1", print_hash_value);
    transparent_crc(g_305.f2, "g_305.f2", print_hash_value);
    transparent_crc(g_305.f3, "g_305.f3", print_hash_value);
    transparent_crc(g_305.f4, "g_305.f4", print_hash_value);
    transparent_crc(g_305.f5, "g_305.f5", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
