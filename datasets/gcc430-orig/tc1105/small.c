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
   const unsigned short f0;
};

union U1 {
   char f0;
   char f1;
   unsigned char f2;
};


static union U0 g_13 = {0UL};
static int g_33[9] = {0x40552487L,0x40552487L,0x40552487L,0x40552487L,0x40552487L,0x40552487L,0x40552487L,0x40552487L,0x40552487L};
static int *g_57 = &g_33[8];
static int **g_56 = &g_57;
static char g_63 = 0x74L;
static unsigned char g_104 = 0x8CL;
static unsigned char g_108 = 0x72L;
static int g_109[5] = {0L,0L,0L,0L,0L};
static union U1 g_122[9][1][5] = {{{{0xA7L},{0xA7L},{0xA7L},{0xA7L},{0xA7L}}},{{{-9L},{-9L},{-9L},{-9L},{-9L}}},{{{0xA7L},{0xA7L},{0xA7L},{0xA7L},{0xA7L}}},{{{-9L},{-9L},{-9L},{-9L},{-9L}}},{{{0xA7L},{0xA7L},{0xA7L},{0xA7L},{0xA7L}}},{{{-9L},{-9L},{-9L},{-9L},{-9L}}},{{{0xA7L},{0xA7L},{0xA7L},{0xA7L},{0xA7L}}},{{{-9L},{-9L},{-9L},{-9L},{-9L}}},{{{0xA7L},{0xA7L},{0xA7L},{0xA7L},{0xA7L}}}};
static unsigned g_140[3] = {3UL,3UL,3UL};
static short g_179 = 0xCDE2L;
static unsigned char **g_184 = (void*)0;
static unsigned char *g_186 = (void*)0;
static unsigned char **g_185 = &g_186;
static unsigned g_207 = 8UL;
static unsigned short g_222 = 0x040AL;
static char *g_240 = &g_122[7][0][1].f0;
static char **g_239 = &g_240;
static char ***g_238 = &g_239;
static unsigned char ***g_292 = &g_185;
static unsigned g_295 = 0x0CC0C323L;
static union U0 **g_333 = (void*)0;
static char g_344[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static unsigned char g_376 = 0x2FL;
static union U0 g_390 = {9UL};
static const unsigned *g_422[1] = {&g_140[1]};
static const unsigned **g_421 = &g_422[0];
static int g_424 = 0x41A2C39BL;
static int * const g_423 = &g_424;
static short *g_467 = (void*)0;
static short **g_466 = &g_467;
static short **g_470 = &g_467;
static unsigned g_477 = 0xBBF65C50L;
static const int *g_492 = &g_109[4];
static union U0 g_532 = {0x0F6EL};
static int *g_575 = (void*)0;
static unsigned g_642 = 4294967295UL;
static unsigned short g_669 = 0xF0D9L;
static const union U1 g_681[7][4][8] = {{{{0x3AL},{-8L},{0x28L},{0L},{-1L},{0x96L},{0xADL},{-8L}},{{0x3AL},{0L},{-1L},{-7L},{0x3AL},{0xEAL},{0xADL},{0L}},{{-1L},{-7L},{0x28L},{0x96L},{0x3AL},{0x96L},{0x28L},{-7L}},{{0x3AL},{0x96L},{0x28L},{-7L},{-1L},{-8L},{0xADL},{0x96L}}},{{{0x3AL},{-7L},{-1L},{0L},{0x3AL},{6L},{0xADL},{-7L}},{{-1L},{0L},{0x28L},{-8L},{0x3AL},{-8L},{0x28L},{0L}},{{0x3AL},{-8L},{0x28L},{0L},{-1L},{0x96L},{0xADL},{-8L}},{{0x3AL},{0L},{-1L},{-7L},{0x3AL},{0xEAL},{0xADL},{0L}}},{{{-1L},{-7L},{0x28L},{0x96L},{0x3AL},{0x96L},{0x28L},{-7L}},{{0x3AL},{0x96L},{0x28L},{-7L},{-1L},{-8L},{0xADL},{0x96L}},{{0x3AL},{-7L},{-1L},{0L},{0x3AL},{6L},{0xADL},{-7L}},{{-1L},{0L},{0x28L},{-8L},{0x3AL},{-8L},{0x28L},{0L}}},{{{0x3AL},{-8L},{0x28L},{0L},{-1L},{0x96L},{0xADL},{-8L}},{{0x3AL},{0L},{-1L},{-7L},{0x3AL},{0xEAL},{0xADL},{0L}},{{-1L},{-7L},{0x28L},{0x96L},{0x3AL},{0x96L},{0x28L},{-7L}},{{0x3AL},{0x96L},{0x28L},{-7L},{-1L},{-8L},{0xADL},{0x96L}}},{{{0x3AL},{-7L},{-1L},{0L},{0x3AL},{6L},{0xADL},{-7L}},{{-1L},{0L},{0x28L},{-8L},{0x3AL},{-8L},{0x28L},{0L}},{{0x3AL},{-8L},{0x28L},{0L},{-1L},{0x96L},{0xADL},{-8L}},{{0x3AL},{0L},{-1L},{-7L},{0x3AL},{0xEAL},{0xADL},{0L}}},{{{-1L},{-7L},{0x28L},{0x96L},{0x3AL},{0x96L},{-1L},{-8L}},{{-1L},{6L},{-1L},{-8L},{0x95L},{0xEAL},{0x28L},{6L}},{{-1L},{-8L},{0xADL},{0x96L},{-1L},{0L},{0x28L},{-8L}},{{0x95L},{0x96L},{-1L},{0xEAL},{-1L},{0xEAL},{-1L},{0x96L}}},{{{-1L},{0xEAL},{-1L},{0x96L},{0x95L},{6L},{0x28L},{0xEAL}},{{-1L},{0x96L},{0xADL},{-8L},{-1L},{-7L},{0x28L},{0x96L}},{{0x95L},{-8L},{-1L},{6L},{-1L},{6L},{-1L},{-8L}},{{-1L},{6L},{-1L},{-8L},{0x95L},{0xEAL},{0x28L},{6L}}}};
static union U0 g_691 = {0UL};
static union U0 *g_760[7] = {&g_691,&g_691,&g_691,&g_691,&g_691,&g_691,&g_691};
static union U0 **g_759 = &g_760[6];
static unsigned g_845 = 0x31EEC65FL;
static char ****g_879[1][4] = {{(void*)0,(void*)0,(void*)0,(void*)0}};
static char *****g_878 = &g_879[0][1];
static unsigned char *****g_893 = (void*)0;
static unsigned char g_934[4] = {247UL,247UL,247UL,247UL};
static char g_1014 = 0x86L;
static const union U1 *g_1020 = &g_122[7][0][1];
static const union U1 **g_1019[7][2] = {{&g_1020,(void*)0},{&g_1020,&g_1020},{(void*)0,(void*)0},{(void*)0,&g_1020},{&g_1020,(void*)0},{&g_1020,(void*)0},{&g_1020,&g_1020}};
static int g_1055[10] = {0x81EBAEFCL,0L,0x81EBAEFCL,0x81EBAEFCL,0L,0x81EBAEFCL,0x81EBAEFCL,0L,0x81EBAEFCL,0x81EBAEFCL};
static int ****g_1065 = (void*)0;
static unsigned g_1093[5] = {0x699CD340L,0x699CD340L,0x699CD340L,0x699CD340L,0x699CD340L};
static union U0 g_1101 = {0x8D9DL};
static union U1 *g_1120 = &g_122[0][0][0];
static const union U0 g_1145 = {1UL};
static const union U0 *g_1144[3] = {&g_1145,&g_1145,&g_1145};
static union U0 g_1173 = {0xC868L};
static int *g_1180 = (void*)0;
static short g_1202 = 0xDB9BL;



static unsigned func_1(void);
static char func_4(union U1 p_5);
static union U1 func_6(short p_7, const unsigned p_8, char p_9, int p_10);
static unsigned func_11(union U0 p_12);
static short func_16(union U0 p_17, unsigned short p_18, unsigned p_19, unsigned char p_20);
static unsigned char func_24(int p_25, unsigned short p_26);
static const int * const func_27(int * p_28, unsigned p_29, int * p_30, int * p_31);
static union U0 func_41(int * p_42, int * p_43, unsigned short p_44, int * const p_45);
static int * func_47(int * const * p_48, char p_49);
static int ** func_50(short p_51);
static unsigned func_1(void)
{
    int l_843 = (-3L);
    unsigned *l_844[6] = {&g_845,&g_845,&g_845,&g_845,&g_845,&g_845};
    unsigned *l_846 = (void*)0;
    unsigned *l_847[10][3][2] = {{{(void*)0,&g_845},{&g_477,(void*)0},{&g_477,&g_845}},{{(void*)0,&g_477},{&g_477,&g_845},{&g_477,&g_477}},{{(void*)0,&g_845},{&g_477,(void*)0},{&g_477,&g_845}},{{(void*)0,&g_477},{&g_477,&g_845},{&g_477,&g_477}},{{(void*)0,&g_845},{&g_477,(void*)0},{&g_477,&g_845}},{{(void*)0,&g_477},{&g_477,&g_845},{&g_477,&g_477}},{{(void*)0,&g_845},{&g_477,(void*)0},{&g_477,&g_845}},{{(void*)0,&g_477},{&g_477,&g_845},{&g_477,&g_477}},{{(void*)0,&g_845},{&g_477,(void*)0},{&g_477,&g_845}},{{(void*)0,&g_477},{&g_477,&g_845},{&g_477,&g_477}}};
    int l_858 = 0xE54E6747L;
    int * const *l_962 = &g_423;
    unsigned l_985[9] = {0x487C592CL,0x487C592CL,0x487C592CL,0x487C592CL,0x487C592CL,0x487C592CL,0x487C592CL,0x487C592CL,0x487C592CL};
    unsigned short l_1007[3];
    const union U1 **l_1022[1][9][4] = {{{(void*)0,&g_1020,&g_1020,&g_1020},{(void*)0,&g_1020,(void*)0,&g_1020},{&g_1020,&g_1020,&g_1020,&g_1020},{&g_1020,&g_1020,(void*)0,&g_1020},{&g_1020,&g_1020,(void*)0,&g_1020},{&g_1020,&g_1020,&g_1020,(void*)0},{&g_1020,&g_1020,&g_1020,&g_1020},{&g_1020,&g_1020,&g_1020,&g_1020},{&g_1020,&g_1020,&g_1020,&g_1020}}};
    union U0 l_1036 = {65535UL};
    int l_1041 = 0L;
    unsigned short l_1114 = 0x636EL;
    unsigned char * const *l_1155 = &g_186;
    unsigned char * const **l_1154 = &l_1155;
    unsigned char * const ***l_1153 = &l_1154;
    unsigned char * const **** const l_1152 = &l_1153;
    unsigned short *l_1166 = (void*)0;
    int l_1170 = 3L;
    short l_1179[7] = {1L,(-1L),1L,1L,(-1L),1L,1L};
    char l_1203 = 0x04L;
    unsigned l_1212 = 0x8F0DBEE8L;
    int *l_1218[7][9][4] = {{{&g_33[3],&g_33[3],&g_424,&g_33[8]},{&g_33[8],(void*)0,&g_424,&g_33[8]},{&g_33[8],&g_1055[9],&g_1055[5],&g_424},{(void*)0,&g_1055[9],&g_109[4],&g_33[8]},{&g_1055[9],(void*)0,(void*)0,&g_33[8]},{&g_1055[9],&g_33[3],&g_33[4],&g_109[0]},{&g_109[4],&g_109[1],(void*)0,&g_33[4]},{&l_858,&g_1055[9],&g_1055[9],(void*)0},{(void*)0,&g_33[0],&g_1055[8],&g_33[4]}},{{(void*)0,(void*)0,&g_424,(void*)0},{&l_858,&g_424,&g_424,(void*)0},{&g_424,&g_1055[9],(void*)0,(void*)0},{&l_858,&l_843,&g_1055[9],&g_109[3]},{(void*)0,&l_858,(void*)0,&g_33[8]},{&g_424,&g_109[3],&l_858,&g_33[8]},{&l_843,&g_33[8],&g_424,&g_1055[9]},{&g_33[8],&g_33[1],&g_33[3],&l_843},{&g_1055[8],&g_1055[9],&l_858,(void*)0}},{{&g_1055[4],(void*)0,&g_1055[9],&g_33[8]},{(void*)0,&g_1055[9],&g_424,(void*)0},{&g_109[0],&l_858,&g_424,&l_843},{&g_33[8],(void*)0,(void*)0,&l_843},{&g_33[8],&g_424,(void*)0,&g_33[8]},{&g_1055[0],&g_33[4],&g_1055[5],&l_843},{&g_33[5],&l_843,(void*)0,&g_109[4]},{&g_1055[9],&g_1055[9],&g_33[8],&g_1055[9]},{&g_33[8],&g_1055[9],&g_33[8],(void*)0}},{{&g_33[8],(void*)0,&l_858,&l_858},{&g_33[0],&g_33[1],(void*)0,(void*)0},{&g_33[3],(void*)0,&g_33[3],&g_33[4]},{&g_33[8],&g_33[8],&l_843,&g_1055[4]},{&g_109[3],&g_1055[5],&g_1055[9],&g_33[8]},{(void*)0,&g_33[0],&g_1055[9],(void*)0},{&g_109[3],&l_843,&l_843,&g_33[8]},{&g_33[8],(void*)0,&g_33[3],&g_1055[4]},{&g_33[3],&g_1055[4],(void*)0,&g_33[8]}},{{&g_33[0],&g_33[4],&l_858,&g_33[8]},{&g_33[8],&g_33[8],&g_33[8],(void*)0},{&g_33[8],&g_33[3],&g_33[8],&g_1055[9]},{&g_1055[9],&g_33[8],&g_33[5],&l_858},{&g_424,(void*)0,&g_424,&g_424},{&g_33[0],&g_1055[9],&l_843,&g_1055[9]},{(void*)0,&g_33[3],&g_109[3],&g_1055[0]},{&g_33[3],(void*)0,&l_858,&g_33[8]},{&l_843,&g_33[4],(void*)0,&g_1055[9]}},{{&l_843,(void*)0,(void*)0,&l_858},{&l_858,(void*)0,&g_33[0],(void*)0},{(void*)0,(void*)0,&g_1055[7],(void*)0},{&g_109[0],(void*)0,&g_33[8],(void*)0},{&g_424,(void*)0,&g_424,(void*)0},{&g_109[0],&g_1055[9],&g_33[3],&g_33[0]},{(void*)0,(void*)0,&l_858,&l_858},{&g_33[4],&g_424,&l_858,&g_33[8]},{&g_109[0],&l_858,&g_1055[9],&l_843}},{{(void*)0,&g_1055[9],&g_33[8],(void*)0},{(void*)0,&g_109[0],(void*)0,&g_1055[9]},{(void*)0,&g_33[4],&l_858,&g_33[8]},{&g_33[8],(void*)0,(void*)0,&g_33[8]},{&l_858,&g_33[8],&g_33[8],&l_858},{&l_843,&g_1055[9],&g_424,(void*)0},{&l_843,(void*)0,&g_109[3],&g_33[1]},{&g_109[0],&g_33[3],(void*)0,&g_33[1]},{&g_33[0],(void*)0,&g_1055[9],(void*)0}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1007[i] = 0x1A26L;
    if ((safe_add_func_int8_t_s_s(func_4(func_6((func_11(g_13) , l_843), (g_845 = l_843), l_843, ((l_858 = (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s((((((safe_sub_func_uint32_t_u_u(l_843, l_843)) >= 0x90L) , (safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(((l_843 || 0x76D648D9L) , l_843), 3)), 4294967295UL))) || 0xCE9985A8L) < l_843), l_843)), 0))) , l_843))), l_843)))
    {
        union U0 l_973[1] = {{0xADB2L}};
        int *l_987[6] = {&g_424,&g_424,&g_424,&g_424,&g_424,&g_424};
        int l_997 = 1L;
        int **l_1068 = (void*)0;
        int **l_1069 = &g_57;
        unsigned l_1094 = 0x6049F213L;
        unsigned l_1097 = 0xFEB7337FL;
        char l_1137 = 1L;
        short l_1139 = (-1L);
        union U0 l_1156 = {0xE66FL};
        int l_1214 = 1L;
        int i;
        for (g_295 = (-30); (g_295 <= 20); ++g_295)
        {
            int **l_963 = (void*)0;
            int **l_964 = &g_575;
            unsigned short l_1010 = 0x7C31L;
            union U1 l_1025 = {0L};
            unsigned char ****l_1043 = (void*)0;
            unsigned l_1051 = 0UL;
            int ***l_1067 = &l_963;
            int ****l_1066 = &l_1067;
            (*l_964) = &g_109[0];
            for (g_845 = 0; (g_845 == 42); g_845++)
            {
                unsigned char l_970 = 0xEAL;
                int l_988 = 0xE25325D0L;
                int l_991[2];
                int * const *l_994 = &l_987[1];
                union U0 l_996 = {0xDF2EL};
                int *l_1001 = &l_843;
                int i;
                for (i = 0; i < 2; i++)
                    l_991[i] = 0x5F855CE4L;
                (*l_964) = (void*)0;
                for (l_858 = 0; (l_858 >= 0); l_858 -= 1)
                {
                    unsigned char l_986[5][8] = {{7UL,0x4CL,247UL,247UL,0x4CL,7UL,4UL,7UL},{0x4CL,7UL,4UL,7UL,0x4CL,247UL,247UL,0x4CL},{7UL,0x94L,0x94L,7UL,5UL,0x4CL,5UL,7UL},{0x94L,5UL,0x94L,247UL,4UL,4UL,247UL,0x94L},{5UL,5UL,4UL,0x4CL,253UL,0x4CL,4UL,5UL}};
                    int * const l_995 = &l_843;
                    int i, j;
                    if ((0UL & (**l_962)))
                    {
                        short l_967 = 0xE52BL;
                        (**l_962) = (l_967 && (safe_rshift_func_uint8_t_u_u(l_970, 7)));
                    }
                    else
                    {
                        unsigned char l_974 = 253UL;
                        unsigned *l_979 = (void*)0;
                        unsigned *l_980 = (void*)0;
                        unsigned *l_981 = &g_207;
                        unsigned short *l_984 = &g_669;
                        (*g_423) = ((safe_lshift_func_int16_t_s_u((func_16(l_973[0], (l_970 == l_974), (safe_mod_func_uint32_t_u_u(((*l_981) = (safe_mul_func_uint8_t_u_u(0xB5L, (***g_238)))), (safe_lshift_func_int16_t_s_u(g_104, (((*l_984) = (~(l_973[0].f0 & l_970))) ^ l_985[7]))))), (**l_962)) != l_986[1][4]), 0)) != 9UL);
                        (*l_964) = ((**g_239) , l_987[2]);
                    }
                    for (l_843 = 0; (l_843 <= 0); l_843 += 1)
                    {
                        short l_998 = (-1L);
                        unsigned char *l_999 = &g_934[0];
                        const int l_1000 = 7L;
                        const int **l_1002 = &g_492;
                        (*l_1002) = func_27(l_987[2], (((l_988 <= (((((*l_999) = (safe_lshift_func_uint8_t_u_u((l_991[0] == ((l_998 = (safe_sub_func_uint32_t_u_u(func_16(l_996, g_934[0], l_997, (**l_994)), 0x6EFA51F1L))) , 0x4EL)), 7))) , 65529UL) == (**l_962)) , 0L)) && (*g_57)) | l_1000), l_1001, l_987[1]);
                        (*l_1002) = l_987[0];
                        (**l_994) = (**l_994);
                    }
                    for (g_642 = 0; (g_642 <= 0); g_642 += 1)
                    {
                        unsigned short *l_1009 = &g_222;
                        unsigned short **l_1008 = &l_1009;
                        const int **l_1013 = &g_492;
                        (*l_1013) = func_27(l_987[3], (safe_sub_func_uint8_t_u_u((3L >= (safe_mul_func_int8_t_s_s(((l_1007[1] > ((((((*l_1008) = &g_669) != ((**l_962) , (l_1010 , &g_669))) & (safe_lshift_func_int16_t_s_u(((**l_962) || 0x127FL), 10))) & (*g_492)) || (*l_995))) , (*l_995)), (**l_962)))), (**l_962))), l_1001, &g_109[3]);
                        return g_1014;
                    }
                    return g_108;
                }
                for (l_970 = 0; (l_970 >= 38); ++l_970)
                {
                    short l_1026 = 1L;
                    int l_1027 = 0xFF4D31F6L;
                    for (g_1014 = 0; (g_1014 <= 5); g_1014 += 1)
                    {
                        const union U1 ***l_1021[8][6] = {{(void*)0,(void*)0,&g_1019[2][0],(void*)0,(void*)0,(void*)0},{(void*)0,&g_1019[1][1],(void*)0,(void*)0,&g_1019[1][1],&g_1019[2][0]},{(void*)0,&g_1019[1][1],(void*)0,(void*)0,&g_1019[1][1],(void*)0},{(void*)0,(void*)0,&g_1019[2][0],(void*)0,(void*)0,(void*)0},{(void*)0,&g_1019[1][1],(void*)0,(void*)0,&g_1019[1][1],&g_1019[2][0]},{(void*)0,&g_1019[1][1],(void*)0,(void*)0,&g_1019[1][1],(void*)0},{(void*)0,(void*)0,&g_1019[2][0],(void*)0,(void*)0,(void*)0},{(void*)0,&g_1019[1][1],(void*)0,(void*)0,&g_1019[1][1],&g_1019[2][0]}};
                        int i, j;
                        (*l_1001) = (0xC1A4C46EL & (safe_add_func_uint8_t_u_u((**l_962), ((l_1022[0][7][2] = g_1019[1][1]) != &g_1020))));
                        return g_681[3][2][7].f0;
                    }
                    for (l_1010 = 0; (l_1010 < 26); l_1010++)
                    {
                        (*l_1001) = ((**l_962) != (func_4(l_1025) <= (((l_1027 = l_1026) , 1UL) || g_934[2])));
                        if ((*g_423))
                            continue;
                    }
                    g_57 = ((*l_964) = &l_843);
                    if ((**l_962))
                        continue;
                }
                return g_13.f0;
            }
            if (((safe_sub_func_uint8_t_u_u(0x5FL, ((**l_962) > ((safe_sub_func_uint16_t_u_u((**l_962), ((safe_mul_func_int8_t_s_s(((*g_240) = 0xD3L), ((((safe_mul_func_uint8_t_u_u(((**l_962) , (**l_964)), ((l_1036 , (safe_sub_func_uint8_t_u_u((**l_964), (safe_add_func_uint8_t_u_u(0x84L, (**l_962)))))) || (*g_57)))) > (**l_962)) & l_1041) > 0x66B1L))) && (**l_964)))) != 0xECD7B39AL)))) & (**l_962)))
            {
                int *l_1042 = (void*)0;
                if ((*g_492))
                    break;
                g_492 = func_27(l_1042, ((void*)0 != l_1043), ((func_4((*g_1020)) , ((((**l_962) || ((safe_rshift_func_uint8_t_u_s(g_33[8], 1)) == (**g_239))) > 0xB2FAA808L) & 0xC940L)) , (*l_964)), &g_109[4]);
                if ((*g_423))
                    continue;
                for (g_642 = 0; (g_642 <= 7); g_642 += 1)
                {
                    union U0 **l_1048 = &g_760[2];
                    int i;
                    (*l_1048) = &l_1036;
                    if (g_344[g_642])
                        continue;
                }
            }
            else
            {
                short l_1054 = 0xEBD4L;
                int **l_1056[10] = {(void*)0,&l_987[1],(void*)0,&l_987[1],(void*)0,&l_987[1],(void*)0,&l_987[1],(void*)0,&l_987[1]};
                int i;
                (**l_962) = (func_6(((safe_mod_func_uint8_t_u_u(l_1051, 0xDAL)) , ((safe_lshift_func_int8_t_s_s(((**l_962) , (+3L)), (**l_964))) > ((0x67L || (*g_240)) , (**l_962)))), g_681[3][2][7].f1, l_1054, g_207) , g_1055[9]);
                g_492 = (g_57 = ((*l_964) = &g_1055[4]));
                (**l_964) = ((safe_sub_func_uint32_t_u_u((((void*)0 != &g_56) , ((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((**l_962), ((safe_sub_func_int16_t_s_s((**l_964), 0xF367L)) >= (0xDCL >= (((**l_962) , g_1065) != l_1066))))), 0x02L)) , 4294967295UL)), 0xD6B8B5F5L)) == 0xB6127962L);
            }
        }
        (*l_1069) = l_987[3];
        for (g_424 = 0; (g_424 == 14); g_424 = safe_add_func_uint32_t_u_u(g_424, 2))
        {
            union U1 l_1076 = {0x45L};
            union U1 *l_1077 = &g_122[7][0][1];
            int * const l_1090 = &l_843;
            int **l_1091[7] = {&l_987[4],&l_987[4],(void*)0,&l_987[4],&l_987[4],(void*)0,&l_987[4]};
            int **l_1092 = &l_987[2];
            unsigned l_1126 = 0x5F2C9D3BL;
            union U0 l_1197 = {0x238AL};
            char l_1204 = 1L;
            unsigned short *l_1209[4][10][6] = {{{&l_1114,&l_1007[2],(void*)0,&l_1114,(void*)0,&g_222},{&l_1007[1],&l_1007[1],&g_669,&l_1007[0],&l_1007[0],&l_1007[1]},{&l_1007[2],&l_1007[1],&g_669,&l_1007[1],&l_1007[2],(void*)0},{&l_1114,(void*)0,(void*)0,(void*)0,&g_222,&g_222},{(void*)0,&g_222,(void*)0,(void*)0,&l_1007[1],&g_222},{&g_222,&l_1007[2],(void*)0,&g_669,&l_1007[1],(void*)0},{&l_1007[1],&l_1007[1],&g_669,&g_669,&l_1007[1],&l_1007[1]},{(void*)0,&l_1007[1],&g_669,(void*)0,&l_1007[2],&g_222},{&g_222,&l_1007[1],(void*)0,(void*)0,&g_222,(void*)0},{&g_222,&g_222,(void*)0,(void*)0,(void*)0,&l_1114}},{{(void*)0,&l_1007[2],&l_1007[1],&g_669,&l_1007[1],&l_1007[2]},{&l_1007[1],&l_1007[0],&l_1007[0],&g_669,&l_1007[1],&l_1007[1]},{&g_222,(void*)0,&l_1114,(void*)0,&l_1007[2],&l_1114},{(void*)0,(void*)0,&g_669,&g_222,&l_1007[1],&l_1007[1]},{&l_1007[1],(void*)0,&g_222,&l_1007[0],&l_1007[0],&g_222},{&l_1114,&l_1114,&g_669,&l_1114,&g_669,(void*)0},{&g_669,(void*)0,&l_1007[2],&g_222,&l_1007[1],&g_669},{(void*)0,&g_669,&l_1007[2],&g_669,&l_1114,(void*)0},{&l_1007[1],&g_669,&g_669,&g_222,&l_1007[1],&g_222},{&g_222,&l_1007[1],&g_222,&g_669,&g_669,&l_1007[1]}},{{(void*)0,&l_1114,&g_669,&l_1007[2],&g_669,(void*)0},{&g_669,&l_1007[1],&g_222,&l_1007[2],(void*)0,&g_669},{(void*)0,&g_669,&l_1114,&g_669,&l_1114,&l_1114},{&g_222,&l_1007[0],&l_1007[0],&g_222,(void*)0,&l_1007[1]},{&l_1007[1],&l_1007[1],&g_222,&g_669,&l_1114,&g_222},{(void*)0,&l_1114,&g_669,&g_222,&l_1114,&g_222},{&g_669,&l_1007[1],(void*)0,&l_1114,(void*)0,&g_669},{&l_1114,&l_1007[0],(void*)0,&l_1007[0],&l_1114,&g_669},{&l_1007[1],&g_669,&l_1114,&g_222,(void*)0,&l_1007[0]},{&g_222,&l_1007[1],&l_1114,&g_669,(void*)0,&g_669}},{{(void*)0,&l_1007[1],&g_222,&g_222,&l_1114,&l_1007[1]},{(void*)0,&l_1007[2],&l_1007[1],&l_1007[1],&l_1007[2],(void*)0},{&l_1007[1],&l_1114,&g_222,&g_222,&l_1007[1],(void*)0},{&g_669,(void*)0,&g_669,&l_1114,&l_1114,&l_1007[0]},{&g_669,&g_222,&l_1114,&g_222,&g_669,&g_669},{&l_1007[1],&l_1007[1],(void*)0,&l_1007[1],(void*)0,&l_1007[1]},{(void*)0,(void*)0,&g_222,&g_222,(void*)0,(void*)0},{(void*)0,&g_222,&l_1007[0],&g_669,&l_1007[1],(void*)0},{&l_1007[0],&g_222,&l_1114,&l_1114,(void*)0,&g_669},{&g_669,(void*)0,&l_1114,(void*)0,(void*)0,&l_1114}}};
            unsigned char *l_1213 = &l_1076.f2;
            int i, j, k;
        }
    }
    else
    {
        unsigned l_1215 = 0x987607EFL;
        int *l_1216 = &g_109[4];
        int **l_1217[2];
        const int **l_1219 = &g_492;
        int **l_1220 = &g_575;
        int i;
        for (i = 0; i < 2; i++)
            l_1217[i] = &g_575;
lbl_1221:
        (*g_57) = l_1215;
        (*l_1219) = func_27(l_1216, ((*l_1216) , 0UL), (l_1218[6][5][1] = l_1216), (g_575 = (void*)0));
        (*l_1220) = (*l_962);
        if (g_104)
            goto lbl_1221;
    }
    return g_390.f0;
}







static char func_4(union U1 p_5)
{
    char **l_954 = &g_240;
    int *l_955 = &g_33[3];
    int **l_956 = (void*)0;
    int **l_957 = &g_57;
    union U1 *l_959 = &g_122[7][0][1];
    union U1 **l_958 = &l_959;
    (*g_238) = l_954;
    (*l_957) = l_955;
    (*l_958) = &p_5;
    return p_5.f2;
}







static union U1 func_6(short p_7, const unsigned p_8, char p_9, int p_10)
{
    short **l_863 = &g_467;
    int l_871 = 0xDF01B955L;
    int * const *l_899 = &g_57;
    union U1 *l_917 = &g_122[7][0][1];
    union U0 l_921 = {4UL};
    char ***l_932 = &g_239;
    char l_952 = 0x19L;
    char l_953 = 0L;
    for (g_222 = 0; (g_222 <= 6); g_222 += 1)
    {
        short *l_864 = (void*)0;
        short *l_865 = &g_179;
        unsigned short *l_870 = &g_669;
        int l_872 = 0x14263AEEL;
        int l_873 = (-1L);
        int l_875 = 1L;
        union U1 l_876 = {0x34L};
        int **l_877 = &g_575;
        union U0 l_912[10] = {{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL}};
        int i;
        l_875 = ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((***g_238) = ((l_872 = (((*l_865) = ((void*)0 == l_863)) | (safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((*l_870) = g_424), p_7)), l_871)))) != 0xDC2FL)), ((0x817C739EL >= (((l_873 = (-2L)) < ((((safe_unary_minus_func_uint8_t_u((((l_875 >= p_8) , l_876) , l_875))) <= p_10) >= g_140[0]) <= 1L)) > g_477)) != 0xBBEC7CCCL))), l_876.f0)) != 0x1F2DL);
        (*l_877) = &l_875;
    }
    return g_122[6][0][4];
}







static unsigned func_11(union U0 p_12)
{
    short l_23 = (-7L);
    int *l_535 = &g_33[8];
    unsigned short *l_557 = &g_222;
    union U1 l_568 = {0x3EL};
    union U0 l_644[8] = {{0x54BAL},{0x4674L},{0x54BAL},{0x54BAL},{0x4674L},{0x54BAL},{0x54BAL},{0x4674L}};
    const char **l_732 = (void*)0;
    const char ***l_731 = &l_732;
    const char ****l_730 = &l_731;
    union U1 *l_740[9] = {&l_568,&l_568,&l_568,&l_568,&l_568,&l_568,&l_568,&l_568,&l_568};
    union U1 **l_739 = &l_740[7];
    int l_741 = 0x30625195L;
    unsigned l_744 = 0UL;
    int l_746 = 0x7D37B31CL;
    union U0 *l_754 = &g_13;
    union U0 **l_753 = &l_754;
    int l_756[5];
    unsigned l_765 = 3UL;
    int *l_779 = &g_109[2];
    short l_819 = (-1L);
    int **l_842 = &g_575;
    int i;
    for (i = 0; i < 5; i++)
        l_756[i] = 1L;
    if ((p_12.f0 & (safe_sub_func_int16_t_s_s(func_16(p_12, (!g_13.f0), (safe_lshift_func_int16_t_s_s(l_23, ((p_12.f0 >= p_12.f0) > l_23))), func_24(l_23, (0x8D9AL <= p_12.f0))), g_390.f0))))
    {
        int *l_536 = &g_109[0];
        const int *l_537 = &g_33[0];
        unsigned char *l_552 = &g_104;
        const short l_564 = 0x674BL;
        union U0 l_576 = {4UL};
        const int l_609[9][3][4] = {{{(-1L),0xCB7B4B49L,0x25131B36L,0xCB7B4B49L},{0x25131B36L,0xCB7B4B49L,(-1L),0L},{0xA5368762L,0xCB7B4B49L,0xCB7B4B49L,0xA5368762L}},{{0xCB7B4B49L,0xA5368762L,0x25131B36L,0xBFA571F9L},{0xCB7B4B49L,0x25131B36L,0xCB7B4B49L,(-1L)},{0xA5368762L,0xBFA571F9L,(-1L),(-1L)}},{{0x25131B36L,0x25131B36L,0L,0xBFA571F9L},{0xBFA571F9L,0xA5368762L,0L,0xA5368762L},{0x25131B36L,0xCB7B4B49L,(-1L),0L}},{{0xA5368762L,0xCB7B4B49L,0xCB7B4B49L,0xA5368762L},{0xCB7B4B49L,0xA5368762L,0x25131B36L,0xBFA571F9L},{0xCB7B4B49L,0x25131B36L,0xCB7B4B49L,(-1L)}},{{0xA5368762L,0xBFA571F9L,(-1L),(-1L)},{0x25131B36L,0x25131B36L,0L,0xBFA571F9L},{0xBFA571F9L,0xA5368762L,0L,0xA5368762L}},{{0x25131B36L,0xCB7B4B49L,(-1L),0L},{0xA5368762L,0xCB7B4B49L,0xCB7B4B49L,0xA5368762L},{0xCB7B4B49L,0xA5368762L,0x25131B36L,0xBFA571F9L}},{{0xCB7B4B49L,0x25131B36L,0xCB7B4B49L,(-1L)},{0xA5368762L,0xBFA571F9L,(-1L),(-1L)},{0x25131B36L,0x25131B36L,0L,0xBFA571F9L}},{{0xBFA571F9L,0xA5368762L,0L,0xA5368762L},{0x25131B36L,0xCB7B4B49L,(-1L),0L},{0xA5368762L,0xCB7B4B49L,0xCB7B4B49L,0xA5368762L}},{{0xCB7B4B49L,0xA5368762L,0x25131B36L,0L},{(-1L),0xA5368762L,(-1L),0x25131B36L},{0xBFA571F9L,0L,0x25131B36L,0x25131B36L}}};
        union U0 l_616[3][9][1] = {{{{1UL}},{{1UL}},{{1UL}},{{7UL}},{{7UL}},{{1UL}},{{1UL}},{{1UL}},{{7UL}}},{{{7UL}},{{1UL}},{{1UL}},{{1UL}},{{7UL}},{{7UL}},{{1UL}},{{1UL}},{{1UL}}},{{{7UL}},{{7UL}},{{1UL}},{{1UL}},{{1UL}},{{7UL}},{{7UL}},{{1UL}},{{1UL}}}};
        union U1 *l_626 = &g_122[6][0][1];
        char *l_633 = (void*)0;
        char l_675 = 0L;
        unsigned char *l_704 = (void*)0;
        int l_705[7] = {0x9EB3451FL,0x9EB3451FL,0x9EB3451FL,0x9EB3451FL,0x9EB3451FL,0x9EB3451FL,0x9EB3451FL};
        int *l_708 = &l_705[2];
        union U1 ***l_736 = (void*)0;
        union U1 **l_738[1][3][3] = {{{&l_626,(void*)0,&l_626},{&l_626,(void*)0,&l_626},{&l_626,(void*)0,&l_626}}};
        union U1 ***l_737[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i, j, k;
        l_537 = func_27(l_535, g_344[6], l_536, l_535);
        for (g_104 = 0; (g_104 > 13); g_104 = safe_add_func_uint16_t_u_u(g_104, 1))
        {
            int * const *l_544 = (void*)0;
            int * const l_553[5] = {&g_109[4],&g_109[4],&g_109[4],&g_109[4],&g_109[4]};
            int *l_565[2][4] = {{&g_109[3],&g_109[3],&g_109[3],&g_109[3]},{&g_109[3],&g_109[3],&g_109[3],&g_109[3]}};
            union U0 l_577 = {0x5E1DL};
            short *l_610 = &l_23;
            short *l_611 = &g_179;
            unsigned l_622 = 0x5B6F6951L;
            union U0 l_641 = {65535UL};
            unsigned l_660 = 0xC40E6732L;
            const union U1 *l_679 = &g_122[6][0][4];
            int i, j;
        }
        if ((((*l_536) = p_12.f0) < (p_12.f0 , (safe_sub_func_int32_t_s_s((((((*l_535) = (p_12.f0 >= ((*l_557) = p_12.f0))) >= (&l_568 != ((l_705[2] = ((*l_552) = (~(safe_mod_func_int8_t_s_s((g_681[6][3][0] , (((func_16(p_12, (safe_lshift_func_uint8_t_u_s(func_16(((((p_12.f0 >= (p_12.f0 | 1L)) & 0x2395L) , p_12.f0) , p_12), g_532.f0, p_12.f0, p_12.f0), 7)), p_12.f0, p_12.f0) != g_477) & g_122[7][0][1].f2) <= 0UL)), (*g_240)))))) , &g_122[6][0][0]))) ^ p_12.f0) > (*g_423)), 0xDCC732A9L)))))
        {
            for (g_108 = 1; (g_108 <= 6); g_108 += 1)
            {
                int i;
                if (l_705[g_108])
                {
                    int i;
                    l_705[g_108] = (safe_sub_func_uint16_t_u_u((&l_633 != (void*)0), ((*g_238) == (void*)0)));
                    return p_12.f0;
                }
                else
                {
                    int **l_709 = (void*)0;
                    int **l_710 = &l_535;
                    int **l_711 = &l_536;
                    (*l_711) = ((*l_710) = l_708);
                }
            }
        }
        else
        {
            short l_723 = 1L;
            char *l_735 = &l_568.f1;
            for (g_376 = 0; (g_376 == 24); g_376++)
            {
                int l_716 = 1L;
                int **l_719 = &l_536;
                short *l_720 = &g_179;
                unsigned short *l_721 = (void*)0;
                unsigned short *l_722 = &g_669;
                (*l_708) = (((safe_add_func_uint8_t_u_u((*l_708), (g_122[7][0][1] , (0x19L && (((*l_722) = (l_716 ^ ((*g_57) = ((safe_sub_func_uint16_t_u_u(((*l_557) = ((*g_57) != (p_12.f0 , (&l_537 != l_719)))), ((*l_720) = 0x8E09L))) >= (*l_535))))) == l_723))))) , l_723) || 0xAC65L);
            }
            for (g_63 = 5; (g_63 >= 0); g_63 -= 1)
            {
                for (l_23 = 0; (l_23 <= 4); l_23 += 1)
                {
                    int **l_724 = &g_57;
                    int i;
                    (*l_724) = &g_109[l_23];
                }
                if (p_12.f0)
                    continue;
            }
            for (l_675 = 23; (l_675 <= 19); l_675 = safe_sub_func_int8_t_s_s(l_675, 1))
            {
                int **l_727 = &l_535;
                const union U1 *l_734 = &g_681[3][2][7];
                const union U1 **l_733 = &l_734;
                (*l_727) = &g_109[4];
                (*l_733) = ((safe_mul_func_uint16_t_u_u(((p_12.f0 , l_730) == &g_238), g_691.f0)) , &g_681[1][2][3]);
                (**l_727) = ((l_735 == (void*)0) & p_12.f0);
            }
        }
        l_741 = (p_12.f0 && ((((((*l_708) && (((*g_240) = 3L) >= ((*l_535) = ((p_12.f0 != (65531UL & (((*l_537) == ((l_739 = (void*)0) == (void*)0)) , (*l_537)))) | (*l_535))))) > p_12.f0) , (*g_57)) , &l_708) != (void*)0));
    }
    else
    {
        unsigned short l_745 = 1UL;
        const union U0 *l_751 = &g_13;
        const union U0 **l_750 = &l_751;
        short l_755 = 0L;
        union U0 **l_761[5] = {&g_760[0],&g_760[0],&g_760[0],&g_760[0],&g_760[0]};
        union U1 l_762 = {6L};
        int *l_770 = (void*)0;
        unsigned char *****l_784 = (void*)0;
        unsigned *l_817 = &g_207;
        unsigned short *l_818 = &l_745;
        char l_822 = 0x33L;
        int i;
        if ((((p_12.f0 == (safe_rshift_func_uint16_t_u_s(func_24(g_140[0], p_12.f0), ((9L == l_744) < 65535UL)))) != ((g_681[3][2][7] , (p_12.f0 <= l_745)) < (*g_423))) , l_746))
        {
            union U0 ***l_749 = &g_333;
            const union U0 ***l_752 = &l_750;
            union U0 **l_758 = &l_754;
            union U0 ***l_757[8];
            unsigned *l_768[9] = {&g_642,&g_642,&g_140[1],&g_642,&g_642,&g_140[1],&g_642,&g_642,&g_140[1]};
            unsigned ** const l_767[10][2][6] = {{{&l_768[2],&l_768[7],&l_768[2],(void*)0,(void*)0,&l_768[2]},{&l_768[2],&l_768[2],&l_768[6],&l_768[5],(void*)0,&l_768[2]}},{{(void*)0,(void*)0,&l_768[2],&l_768[3],&l_768[5],&l_768[2]},{&l_768[3],(void*)0,&l_768[2],&l_768[2],&l_768[2],&l_768[2]}},{{(void*)0,&l_768[2],&l_768[2],&l_768[6],&l_768[4],&l_768[5]},{&l_768[6],&l_768[4],&l_768[5],&l_768[0],&l_768[0],(void*)0}},{{&l_768[4],&l_768[2],&l_768[2],(void*)0,(void*)0,(void*)0},{(void*)0,&l_768[0],&l_768[2],&l_768[3],&l_768[2],&l_768[3]}},{{&l_768[2],(void*)0,&l_768[2],(void*)0,&l_768[2],&l_768[4]},{&l_768[3],&l_768[6],&l_768[4],&l_768[2],(void*)0,&l_768[6]}},{{&l_768[0],(void*)0,&l_768[7],&l_768[2],&l_768[7],(void*)0},{&l_768[3],&l_768[4],(void*)0,(void*)0,&l_768[0],&l_768[2]}},{{&l_768[2],&l_768[2],(void*)0,&l_768[3],&l_768[4],&l_768[4]},{(void*)0,&l_768[2],(void*)0,(void*)0,(void*)0,&l_768[0]}},{{&l_768[4],&l_768[3],&l_768[2],&l_768[0],&l_768[2],&l_768[2]},{&l_768[6],&l_768[3],&l_768[3],&l_768[6],&l_768[7],&l_768[4]}},{{(void*)0,(void*)0,&l_768[7],&l_768[2],(void*)0,&l_768[0]},{&l_768[3],(void*)0,&l_768[4],(void*)0,&l_768[2],&l_768[6]}},{{(void*)0,&l_768[7],&l_768[0],&l_768[2],&l_768[2],&l_768[3]},{&l_768[7],&l_768[4],&l_768[2],&l_768[0],&l_768[5],&l_768[1]}}};
            int l_769 = 3L;
            unsigned l_800 = 0UL;
            int i, j, k;
            for (i = 0; i < 8; i++)
                l_757[i] = &l_758;
            if (((safe_mul_func_uint16_t_u_u(func_24((((*l_749) = g_333) != ((*l_752) = l_750)), g_222), (l_753 != (l_761[1] = (g_759 = (((0xB4L | (l_755 <= p_12.f0)) , l_756[3]) , (void*)0)))))) , l_755))
            {
                (*g_423) = (l_762 , p_12.f0);
            }
            else
            {
                unsigned short l_766 = 65529UL;
                const int *l_771 = &g_109[4];
                const union U1 *l_778[4][1][4];
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 4; k++)
                            l_778[i][j][k] = &g_122[2][0][1];
                    }
                }
lbl_781:
                l_771 = func_27(&g_33[4], (func_24((g_104 >= func_16((((((((l_767[4][1][3] == &l_768[2]) > 0xD3A7C7B4L) ^ (*g_57)) , &g_760[0]) != (void*)0) < (-1L)) , p_12), p_12.f0, p_12.f0, l_769)), g_477) || (-10L)), l_770, &g_424);
                for (l_745 = 0; (l_745 == 48); l_745 = safe_add_func_int8_t_s_s(l_745, 4))
                {
                    union U0 ** const l_782 = &g_760[2];
                    int l_791 = 0x77FA5084L;
                    char *l_792[7] = {&l_568.f0,&l_568.f0,&l_568.f0,&l_568.f0,&l_568.f0,&l_568.f0,&l_568.f0};
                    short ***l_799 = &g_466;
                    int i;
                    if ((safe_sub_func_uint32_t_u_u(l_766, p_12.f0)))
                    {
                        const union U1 *l_777 = &g_122[7][0][1];
                        const union U1 **l_776[10][6] = {{&l_777,&l_777,(void*)0,&l_777,&l_777,&l_777},{&l_777,&l_777,&l_777,&l_777,&l_777,&l_777},{&l_777,&l_777,&l_777,&l_777,&l_777,&l_777},{&l_777,&l_777,&l_777,&l_777,&l_777,(void*)0},{&l_777,&l_777,&l_777,(void*)0,&l_777,&l_777},{&l_777,&l_777,(void*)0,&l_777,&l_777,(void*)0},{&l_777,&l_777,&l_777,&l_777,&l_777,&l_777},{&l_777,&l_777,&l_777,&l_777,&l_777,&l_777},{(void*)0,&l_777,&l_777,&l_777,&l_777,&l_777},{&l_777,&l_777,&l_777,(void*)0,&l_777,(void*)0}};
                        int *l_780 = &g_33[2];
                        int i, j;
                        l_778[0][0][0] = &g_681[1][2][7];
                        l_780 = (l_779 = &g_109[1]);
                        if (l_766)
                            goto lbl_781;
                    }
                    else
                    {
                        union U0 ***l_783 = &g_333;
                        unsigned char ** const ***l_786 = (void*)0;
                        unsigned char ** const ****l_785 = &l_786;
                        (*l_783) = l_782;
                        (*l_535) = (func_16((**g_333), (l_784 != ((*l_785) = (void*)0)), p_12.f0, p_12.f0) , ((safe_lshift_func_uint8_t_u_s(p_12.f0, p_12.f0)) ^ (g_122[7][0][1].f1 == g_390.f0)));
                        (*l_739) = &g_122[6][0][0];
                    }
                    (*g_423) = func_16((**l_758), (*l_779), p_12.f0, (((safe_add_func_int8_t_s_s((p_12.f0 < ((*l_557) = ((g_344[1] = ((***g_238) = l_791)) || (safe_sub_func_uint8_t_u_u(((p_12 , ((safe_sub_func_uint16_t_u_u(g_669, (1L & (g_681[3][2][7].f2 , 0UL)))) && p_12.f0)) & g_477), l_769))))), p_12.f0)) <= 0xA73A2246L) | l_769));
                    (*l_535) = (safe_rshift_func_uint8_t_u_u(0xC0L, 1));
                    (*l_799) = (void*)0;
                }
            }
            return l_800;
        }
        else
        {
            int **l_801 = &l_535;
            (*l_801) = &l_741;
            for (l_568.f0 = 12; (l_568.f0 >= 12); ++l_568.f0)
            {
                (*g_423) = (255UL <= 255UL);
                (*g_57) = ((**l_801) = (safe_mod_func_int32_t_s_s(p_12.f0, ((*l_535) , 1UL))));
            }
        }
        (*l_779) = (safe_mod_func_uint32_t_u_u(func_24(((((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s(p_12.f0, 5)) <= (g_681[3][2][7].f0 >= (*l_535))), (safe_sub_func_int8_t_s_s((*g_240), p_12.f0)))) & (safe_mul_func_uint16_t_u_u(g_642, ((*l_818) = (safe_unary_minus_func_uint8_t_u((((g_222 = func_16(p_12, l_762.f0, ((*l_817) = (*l_535)), l_762.f0)) <= p_12.f0) & p_12.f0))))))) >= (*l_779)) & (*l_779)), p_12.f0), l_819));
        for (g_669 = 0; (g_669 >= 50); g_669++)
        {
            unsigned short l_823 = 65533UL;
            int **l_824 = &l_779;
            int * const *l_831[7];
            int *l_834 = &g_109[2];
            unsigned **l_835 = &l_817;
            int i;
            for (i = 0; i < 7; i++)
                l_831[i] = (void*)0;
            (*l_824) = &l_741;
            (*l_535) = (g_681[3][2][7] , (((*l_779) , ((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u(p_12.f0, ((p_12.f0 > (safe_add_func_int16_t_s_s(0x0001L, (func_24(g_109[4], (**l_824)) || 2L)))) | p_12.f0))), g_532.f0)) , 9UL)) && p_12.f0));
            (*g_57) = (&g_57 != &g_492);
            (*l_824) = &g_33[3];
        }
        (*g_423) = ((*l_779) = ((safe_lshift_func_uint16_t_u_u((65532UL <= (safe_mul_func_uint16_t_u_u(((p_12.f0 && func_16(p_12, (*l_779), ((*l_753) == (void*)0), p_12.f0)) >= (safe_rshift_func_int8_t_s_s(((**g_239) = (p_12.f0 < 1UL)), l_762.f0))), 9L))), g_63)) , p_12.f0));
    }
    (*l_842) = &l_741;
    (*g_423) = (*g_575);
    (*l_779) = p_12.f0;
    return p_12.f0;
}







static short func_16(union U0 p_17, unsigned short p_18, unsigned p_19, unsigned char p_20)
{
    int l_528 = (-6L);
    union U0 *l_531 = &g_532;
    l_528 = (safe_mul_func_uint8_t_u_u(l_528, p_19));
    for (g_376 = 0; (g_376 <= 2); g_376 += 1)
    {
        union U0 *l_530 = &g_13;
        union U0 **l_529[9] = {&l_530,&l_530,&l_530,&l_530,&l_530,&l_530,&l_530,&l_530,&l_530};
        int *l_533[6] = {&l_528,&g_109[1],&g_109[1],&l_528,&g_109[1],&g_109[1]};
        int **l_534 = &l_533[1];
        int i;
        l_531 = &p_17;
        (*l_534) = l_533[5];
        for (g_207 = 0; (g_207 <= 0); g_207 += 1)
        {
            (*l_534) = &l_528;
            return p_18;
        }
    }
    return p_20;
}







static unsigned char func_24(int p_25, unsigned short p_26)
{
    int *l_32 = &g_33[8];
    int **l_34 = &l_32;
    int *l_46 = &g_33[8];
    int *l_55 = (void*)0;
    int **l_54 = &l_55;
    int ***l_58 = (void*)0;
    int ***l_59 = (void*)0;
    short *l_426 = &g_179;
    int *l_427 = &g_424;
    g_492 = func_27(((*l_34) = l_32), (safe_rshift_func_uint8_t_u_u(0x25L, (safe_lshift_func_int8_t_s_u((((safe_lshift_func_int16_t_s_u(((*l_426) = (func_41(l_46, func_47(func_50((safe_mul_func_uint8_t_u_u((&l_46 == (l_54 = ((&g_33[4] != ((*l_54) = l_46)) , (g_56 = &l_46)))), 0xAFL))), p_26), g_390.f0, g_423) , g_122[7][0][1].f2)), 8)) > 65526UL) & p_26), p_25)))), &g_424, l_427);
    return p_25;
}







static const int * const func_27(int * p_28, unsigned p_29, int * p_30, int * p_31)
{
    char ** const *l_437 = &g_239;
    unsigned char ****l_440 = (void*)0;
    unsigned char ****l_442 = &g_292;
    const unsigned char l_450 = 0x15L;
    int ** const *l_453 = &g_56;
    const unsigned **l_484 = &g_422[0];
    return p_30;
}







static union U0 func_41(int * p_42, int * p_43, unsigned short p_44, int * const p_45)
{
    union U0 l_425 = {1UL};
    (*g_56) = (*g_56);
    return l_425;
}







static int * func_47(int * const * p_48, char p_49)
{
    if ((p_49 && g_140[1]))
    {
        int **l_407[2];
        int i;
        for (i = 0; i < 2; i++)
            l_407[i] = &g_57;
        g_57 = (*g_56);
    }
    else
    {
        int *l_419 = &g_33[8];
        for (p_49 = (-11); (p_49 <= (-13)); p_49 = safe_sub_func_int8_t_s_s(p_49, 9))
        {
            int *l_413 = &g_109[4];
            const union U0 *l_414[6] = {&g_390,&g_390,&g_390,&g_390,&g_390,&g_390};
            const union U0 **l_415 = &l_414[5];
            int i;
            for (g_207 = 0; (g_207 > 45); g_207 = safe_add_func_int8_t_s_s(g_207, 7))
            {
                int **l_412[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_412[i] = &g_57;
                l_413 = (*g_56);
            }
            (*l_415) = l_414[2];
        }
        for (g_376 = (-4); (g_376 == 4); g_376 = safe_add_func_int16_t_s_s(g_376, 9))
        {
            int **l_418[7][10] = {{&g_57,(void*)0,(void*)0,&g_57,&g_57,(void*)0,(void*)0,&g_57,&g_57,&g_57},{(void*)0,(void*)0,&g_57,&g_57,&g_57,&g_57,&g_57,(void*)0,(void*)0,&g_57},{&g_57,&g_57,&g_57,&g_57,(void*)0,&g_57,&g_57,&g_57,(void*)0,&g_57},{&g_57,&g_57,(void*)0,&g_57,&g_57,(void*)0,&g_57,&g_57,(void*)0,&g_57},{&g_57,&g_57,(void*)0,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,(void*)0},{&g_57,&g_57,(void*)0,&g_57,(void*)0,&g_57,(void*)0,&g_57,&g_57,&g_57},{&g_57,&g_57,&g_57,&g_57,&g_57,(void*)0,(void*)0,(void*)0,(void*)0,&g_57}};
            const unsigned ***l_420 = (void*)0;
            int i, j;
            l_419 = (p_49 , (*g_56));
            (*g_57) = (g_104 & (*l_419));
            g_57 = (*g_56);
            g_421 = (void*)0;
        }
    }
    return (*g_56);
}







static int ** func_50(short p_51)
{
    char *l_62 = &g_63;
    int l_68 = 0x4FDAF0DBL;
    const int *l_75 = &g_33[2];
    const int **l_74 = &l_75;
    const int ***l_73[5];
    const int ****l_76 = &l_73[2];
    union U1 l_96 = {5L};
    short *l_178 = &g_179;
    int l_215[2][3][5] = {{{(-1L),(-7L),(-7L),(-1L),5L},{(-1L),0xE8390A2EL,0xC799408CL,0xC799408CL,0xE8390A2EL},{5L,(-7L),0xC799408CL,(-3L),(-3L)}},{{(-7L),5L,(-7L),5L,0x1E839CC6L},{(-3L),0xE8390A2EL,0x1E839CC6L,0xE8390A2EL,(-3L)},{0xC799408CL,0xE8390A2EL,(-1L),(-3L),(-1L)}}};
    union U0 *l_299[3][7][3] = {{{(void*)0,&g_13,(void*)0},{(void*)0,&g_13,&g_13},{(void*)0,&g_13,(void*)0},{(void*)0,&g_13,(void*)0},{(void*)0,&g_13,&g_13},{(void*)0,&g_13,(void*)0},{(void*)0,&g_13,(void*)0}},{{(void*)0,&g_13,&g_13},{(void*)0,&g_13,(void*)0},{(void*)0,&g_13,(void*)0},{(void*)0,&g_13,&g_13},{(void*)0,&g_13,(void*)0},{(void*)0,&g_13,(void*)0},{(void*)0,&g_13,&g_13}},{{(void*)0,&g_13,(void*)0},{(void*)0,&g_13,(void*)0},{(void*)0,&g_13,&g_13},{(void*)0,&g_13,(void*)0},{(void*)0,&g_13,(void*)0},{(void*)0,&g_13,&g_13},{(void*)0,&g_13,(void*)0}}};
    union U0 **l_298[4] = {&l_299[0][0][2],&l_299[0][0][2],&l_299[0][0][2],&l_299[0][0][2]};
    union U1 *l_351 = (void*)0;
    unsigned char l_373 = 0UL;
    unsigned short l_383 = 0x5C4CL;
    unsigned l_385[2];
    int **l_406[10][3] = {{&g_57,&g_57,&g_57},{&g_57,&g_57,&g_57},{&g_57,&g_57,&g_57},{(void*)0,&g_57,(void*)0},{(void*)0,&g_57,&g_57},{&g_57,&g_57,&g_57},{&g_57,&g_57,&g_57},{(void*)0,&g_57,&g_57},{&g_57,&g_57,&g_57},{&g_57,(void*)0,&g_57}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_73[i] = &l_74;
    for (i = 0; i < 2; i++)
        l_385[i] = 0x94DDF829L;
    if (((**g_56) = (p_51 ^ (safe_mod_func_int32_t_s_s((g_13.f0 <= (((*l_62) = g_33[8]) == ((+(safe_sub_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((&g_56 == ((*l_76) = ((l_68 , (((safe_lshift_func_uint8_t_u_s(l_68, 4)) <= ((safe_rshift_func_uint16_t_u_s(g_33[8], 7)) , g_13.f0)) >= ((p_51 > p_51) < 0xF00F3BC9L))) , l_73[2]))), g_33[8])) , (****l_76)), p_51))) , g_33[2]))), g_33[3])))))
    {
        char l_77 = 0x7EL;
        l_77 = (**g_56);
    }
    else
    {
        unsigned l_82 = 1UL;
        union U1 l_87 = {0xC2L};
        int *l_88 = &l_68;
        (*l_88) = (((!(safe_mod_func_uint32_t_u_u((p_51 == (safe_sub_func_int32_t_s_s(l_82, g_13.f0))), ((*g_57) = (safe_sub_func_int8_t_s_s(((****l_76) | (****l_76)), (safe_add_func_int16_t_s_s(g_33[8], ((l_87 , (p_51 || (((*l_75) >= l_87.f0) < p_51))) , g_33[8]))))))))) > 0L) > 0x6BL);
    }
    (***l_76) = (*g_56);
    for (l_68 = 8; (l_68 >= 3); l_68 -= 1)
    {
        unsigned l_107 = 5UL;
        unsigned short l_126[9][2][5] = {{{0UL,0xDD0FL,0UL,0UL,0x4E5BL},{65535UL,3UL,0x4E5BL,3UL,65535UL}},{{0UL,3UL,0xDD0FL,65535UL,0xDD0FL},{0xDD0FL,0xDD0FL,0x4E5BL,65535UL,0xB101L}},{{3UL,0UL,0UL,3UL,0xDD0FL},{3UL,65535UL,0UL,0UL,65535UL}},{{0xDD0FL,0UL,0UL,0x4E5BL,0x4E5BL},{0UL,0xDD0FL,0UL,0UL,0x4E5BL}},{{65535UL,3UL,0x4E5BL,3UL,65535UL},{0UL,3UL,0xDD0FL,65535UL,0xDD0FL}},{{0xDD0FL,0xDD0FL,0x4E5BL,65535UL,0xB101L},{3UL,0UL,0UL,3UL,0xDD0FL}},{{3UL,65535UL,0UL,0UL,65535UL},{0xDD0FL,0UL,0UL,0x4E5BL,0x4E5BL}},{{0UL,0xDD0FL,0UL,0UL,0x4E5BL},{65535UL,3UL,0x4E5BL,3UL,65535UL}},{{0UL,65535UL,3UL,0x4E5BL,3UL},{3UL,3UL,0xB101L,0x4E5BL,0UL}}};
        unsigned short l_139 = 0x8FADL;
        int **l_169 = &g_57;
        char **l_174 = &l_62;
        unsigned char *l_182 = (void*)0;
        unsigned char **l_181 = &l_182;
        unsigned l_208 = 0xCB20B976L;
        int l_237 = 0x92F6A5E5L;
        unsigned short l_249 = 0x3A4FL;
        int i, j, k;
        if ((~g_33[l_68]))
        {
            union U0 l_89 = {65529UL};
            unsigned char *l_103 = &g_104;
            int ***l_157[2];
            int ****l_156 = &l_157[0];
            int i;
            for (i = 0; i < 2; i++)
                l_157[i] = (void*)0;
            g_109[4] = (l_89 , (g_108 = (g_33[l_68] = ((((safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((l_96 , (safe_sub_func_uint8_t_u_u(246UL, g_13.f0))), 13)), g_63)), ((*l_103) = (safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(0x16L, 3)), p_51))))) > 0xCC256780L) , (safe_rshift_func_int16_t_s_s(l_107, 6))) ^ g_33[8]))));
            for (l_96.f1 = 1; (l_96.f1 <= 4); l_96.f1 += 1)
            {
                int **l_125 = &g_57;
                char *l_137 = &l_96.f0;
                int i;
                (**g_56) = (safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((((((safe_mul_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((*l_103) = p_51), ((g_122[7][0][1] , (safe_sub_func_int8_t_s_s((((*g_56) != ((*l_125) = (*g_56))) ^ l_126[2][0][0]), g_33[0]))) || ((safe_sub_func_uint32_t_u_u(0xE439E4EAL, (p_51 | (safe_sub_func_uint32_t_u_u((p_51 >= g_109[1]), 1UL))))) != p_51)))), p_51)), 0x2778L)), p_51)) <= 1UL) , l_125) == (void*)0) , (**g_56)), (**g_56))), (****l_76)));
                for (g_104 = 0; (g_104 <= 4); g_104 += 1)
                {
                    unsigned l_136[10];
                    char *l_138[6];
                    unsigned char *l_141[4][1];
                    int i, j;
                    for (i = 0; i < 10; i++)
                        l_136[i] = 0x693CE431L;
                    for (i = 0; i < 6; i++)
                        l_138[i] = &l_96.f0;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_141[i][j] = (void*)0;
                    }
                    for (g_63 = 1; (g_63 <= 4); g_63 += 1)
                    {
                        int * const *l_131 = &g_57;
                        int i;
                        if ((**g_56))
                            break;
                    }
                    if ((*g_57))
                        continue;
                    if ((p_51 >= (g_108 = g_140[1])))
                    {
                        (*l_125) = &g_33[l_68];
                        if ((*g_57))
                            continue;
                        (***l_76) = &g_33[l_68];
                    }
                    else
                    {
                        (***l_76) = (*g_56);
                    }
                }
            }
            if ((g_33[l_68] <= (safe_sub_func_uint32_t_u_u((****l_76), (((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(p_51, g_33[3])) > (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u(((((*l_103) = 0x65L) , (l_156 != &l_157[1])) , 0x4BL), g_108)), p_51)), p_51))), l_139)), 2L)) && l_107) & g_33[l_68])))))
            {
                (***l_76) = (*g_56);
            }
            else
            {
                short l_159 = (-1L);
                short *l_160 = &l_159;
                union U1 *l_162[1][7][4] = {{{&g_122[7][0][1],&g_122[7][0][1],&l_96,&g_122[7][0][1]},{&g_122[7][0][1],&l_96,&l_96,&g_122[7][0][1]},{&l_96,&g_122[7][0][1],&l_96,&l_96},{&g_122[7][0][1],&g_122[7][0][1],&l_96,&g_122[7][0][1]},{&g_122[7][0][1],&l_96,&l_96,&g_122[7][0][1]},{&l_96,&g_122[7][0][1],&l_96,&l_96},{&g_122[7][0][1],&g_122[7][0][1],&l_96,&g_122[7][0][1]}}};
                union U1 **l_161 = &l_162[0][5][2];
                int i, j, k;
                (*l_161) = (((*l_160) = (safe_unary_minus_func_int8_t_s(l_159))) , (void*)0);
            }
            for (g_63 = 4; (g_63 >= 0); g_63 -= 1)
            {
                unsigned l_163 = 4294967291UL;
                int *l_168 = (void*)0;
                unsigned char ***l_183[2];
                short l_187 = 0x1288L;
                int i;
                for (i = 0; i < 2; i++)
                    l_183[i] = &l_181;
                for (l_96.f1 = 0; (l_96.f1 <= 4); l_96.f1 += 1)
                {
                    int *l_167 = (void*)0;
                    char l_180 = 0x90L;
                    for (l_139 = 0; (l_139 <= 4); l_139 += 1)
                    {
                        (*g_57) = 0x1E249038L;
                        if (l_163)
                            continue;
                    }
                    for (g_108 = 0; (g_108 <= 4); g_108 += 1)
                    {
                        int *l_164 = &g_109[1];
                        char **l_166 = &l_62;
                        char ***l_165 = &l_166;
                        l_164 = l_164;
                        (*l_165) = &l_62;
                        l_168 = l_167;
                        return l_169;
                    }
                    (**l_169) = (6L > (g_33[7] < (safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((~(((+((void*)0 != l_174)) == (p_51 , (safe_sub_func_uint32_t_u_u(4294967293UL, (*g_57))))) && p_51)), (l_180 = (+(safe_unary_minus_func_int32_t_s(((void*)0 != l_178))))))), (**g_56)))));
                    (*l_74) = (*l_74);
                }
                g_185 = (g_184 = l_181);
                for (g_179 = 1; (g_179 >= 0); g_179 -= 1)
                {
                    int i;
                    g_109[g_63] = l_187;
                }
                (**l_169) = (safe_sub_func_uint16_t_u_u(g_140[1], (p_51 >= (**l_169))));
            }
        }
        else
        {
            int *l_191 = &g_33[l_68];
            if (p_51)
            {
                if (p_51)
                {
                    int **l_192 = &l_191;
                    (**g_56) = (*g_57);
                    for (g_108 = 0; (g_108 <= 4); g_108 += 1)
                    {
                        int *l_190 = &l_68;
                        (*l_169) = (g_13 , l_190);
                        (*l_169) = l_191;
                        (***l_76) = (*g_56);
                    }
                    for (g_179 = 1; (g_179 <= 4); g_179 += 1)
                    {
                        int i;
                        g_109[g_179] = 0x1C7936A6L;
                        (*g_57) = g_109[g_179];
                        (***l_76) = l_191;
                    }
                    (***l_76) = ((*l_192) = ((*l_169) = (*g_56)));
                }
                else
                {
                    unsigned *l_193 = &g_140[0];
                    int l_204 = 0x10200D09L;
                    unsigned *l_205 = (void*)0;
                    unsigned *l_206 = &g_207;
                    (*g_57) = ((((!(((void*)0 == &g_186) > ((*l_193) = p_51))) & (safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u((~(p_51 != (**l_169))), g_109[2])), 3))) != (((safe_rshift_func_int16_t_s_u(((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(l_204, 1)), ((**g_56) > ((*l_206) = (~g_108))))) && g_33[8]), g_109[4])) < l_208) , 0x5FD2L)) != p_51);
                }
                if ((*g_57))
                    continue;
                (***l_76) = l_191;
                (*g_57) = (((&l_208 != (void*)0) , ((0x784DF7A9L | (safe_sub_func_int32_t_s_s(0x3D32DC01L, ((safe_sub_func_int8_t_s_s(p_51, (**l_169))) , ((p_51 , (*l_191)) | p_51))))) <= 1UL)) & g_207);
            }
            else
            {
                unsigned l_213 = 4294967291UL;
                const int *l_217 = &l_215[0][0][3];
                (*g_57) = (**l_169);
                for (g_108 = 1; (g_108 <= 4); g_108 += 1)
                {
                    int *l_214[7][7][2] = {{{&g_109[4],&g_109[4]},{&g_109[4],&l_68},{&l_68,&l_68},{&l_68,&l_68},{&l_68,&l_68},{&g_109[4],&g_109[4]},{&g_109[4],&l_68}},{{&l_68,&l_68},{&l_68,&l_68},{&l_68,&l_68},{&g_109[4],&g_109[4]},{&g_109[4],&l_68},{&l_68,&l_68},{&l_68,&l_68}},{{&l_68,&l_68},{&g_109[4],&g_109[4]},{&g_109[4],&l_68},{&l_68,&l_68},{&l_68,&l_68},{&l_68,&l_68},{&g_109[4],&g_109[4]}},{{&g_109[4],&l_68},{&l_68,&l_68},{&l_68,&l_68},{&l_68,&l_68},{&g_109[4],&g_109[4]},{&g_109[4],&l_68},{&l_68,&l_68}},{{&l_68,&l_68},{&l_68,&l_68},{&l_68,&l_68},{&l_68,&l_68},{&l_68,&l_68},{&l_68,&l_68},{&l_68,&l_68}},{{&l_68,&l_68},{&l_68,&l_68},{&l_68,&l_68},{&l_68,&l_68},{&l_68,&l_68},{&l_68,&l_68},{&l_68,&l_68}},{{&l_68,&l_68},{&l_68,&l_68},{&l_68,&l_68},{&l_68,&l_68},{&l_68,&l_68},{&l_68,&l_68},{&l_68,&l_68}}};
                    int i, j, k;
                    for (l_139 = 0; (l_139 <= 4); l_139 += 1)
                    {
                        (*l_191) = 5L;
                        (**l_169) = l_213;
                    }
                    l_215[0][0][3] = ((*l_191) = (**g_56));
                    if ((*g_57))
                        break;
                    for (p_51 = 0; (p_51 >= 0); p_51 -= 1)
                    {
                        int *l_216 = &g_33[l_68];
                        int i;
                        l_216 = (void*)0;
                        if ((**g_56))
                            break;
                    }
                }
                l_217 = (***l_76);
            }
        }
        for (g_104 = 0; (g_104 <= 1); g_104 += 1)
        {
            union U1 *l_224 = &g_122[0][0][2];
            union U1 **l_223 = &l_224;
            union U0 *l_228 = &g_13;
            int l_233 = 0x135CD98EL;
            int l_267 = 0x820035BCL;
            char *l_275 = &g_63;
            (**l_169) = (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u((((void*)0 != (***l_76)) == p_51), 0)), 1));
            for (l_96.f2 = 0; (l_96.f2 <= 0); l_96.f2 += 1)
            {
                unsigned short *l_227[1][6][7] = {{{&g_222,&g_222,&g_222,&g_222,(void*)0,&g_222,(void*)0},{&g_222,&g_222,&g_222,&g_222,(void*)0,&g_222,(void*)0},{&g_222,&g_222,&g_222,&g_222,(void*)0,&g_222,(void*)0},{&g_222,&g_222,&g_222,&g_222,(void*)0,&g_222,(void*)0},{&g_222,&g_222,&g_222,&g_222,(void*)0,&g_222,(void*)0},{&g_222,&g_222,&g_222,&g_222,(void*)0,&g_222,(void*)0}}};
                union U0 **l_229 = &l_228;
                int i, j, k;
                l_215[l_96.f2][(l_96.f2 + 1)][(g_104 + 1)] = (l_215[g_104][(l_96.f2 + 2)][l_96.f2] ^ g_222);
                (*l_229) = ((**g_56) , ((l_215[l_96.f2][(l_96.f2 + 1)][(g_104 + 1)] = ((l_223 != &l_224) && (safe_sub_func_uint32_t_u_u(g_122[7][0][1].f2, (p_51 ^ 0xF2L))))) , l_228));
                for (g_179 = 0; (g_179 <= 0); g_179 += 1)
                {
                    union U0 l_230 = {0xECF7L};
                    int i, j, k;
                    l_215[l_96.f2][(l_96.f2 + 1)][(g_104 + 1)] = (+(**g_56));
                    l_215[g_104][g_104][(l_96.f2 + 4)] = (l_230 , (safe_mod_func_int16_t_s_s(1L, g_222)));
                }
            }
            for (l_96.f1 = 4; (l_96.f1 >= 0); l_96.f1 -= 1)
            {
                int l_236 = 6L;
            }
        }
    }
    for (g_63 = 0; (g_63 == 18); g_63 = safe_add_func_int8_t_s_s(g_63, 6))
    {
        unsigned char l_288 = 255UL;
        int *l_302[3];
        int * const **l_387 = (void*)0;
        union U0 ** const *l_391 = &l_298[2];
        int i;
        for (i = 0; i < 3; i++)
            l_302[i] = (void*)0;
        if (((*g_57) = p_51))
        {
            union U0 l_293[7] = {{0x006AL},{0x006AL},{0x006AL},{0x006AL},{0x006AL},{0x006AL},{0x006AL}};
            unsigned char ***l_294 = (void*)0;
            int l_343 = (-5L);
            char ***l_355 = &g_239;
            char l_378 = 0xAEL;
            union U0 *l_389[4][6][4] = {{{(void*)0,&g_390,&l_293[3],(void*)0},{&l_293[3],(void*)0,&l_293[3],&l_293[0]},{&g_390,&g_390,&l_293[2],&l_293[3]},{&g_390,(void*)0,&l_293[0],&g_390},{&g_390,&l_293[3],&g_390,&l_293[0]},{&l_293[3],&l_293[3],&l_293[2],&g_390}},{{&l_293[3],(void*)0,(void*)0,&l_293[3]},{&g_390,&g_390,(void*)0,&l_293[0]},{&l_293[3],&l_293[3],&l_293[2],&l_293[3]},{&l_293[3],(void*)0,&g_390,&l_293[3]},{&g_390,&l_293[3],&l_293[0],&l_293[0]},{&g_390,&g_390,&l_293[2],&l_293[3]}},{{&g_390,(void*)0,&l_293[0],&g_390},{&g_390,&l_293[3],&g_390,&l_293[0]},{&l_293[3],&l_293[3],&l_293[2],&g_390},{&l_293[3],(void*)0,(void*)0,&l_293[3]},{&g_390,&g_390,(void*)0,&l_293[0]},{&l_293[3],&l_293[3],&l_293[2],&l_293[3]}},{{&l_293[3],(void*)0,&g_390,&l_293[3]},{&g_390,&l_293[3],&l_293[0],&l_293[0]},{&g_390,&g_390,&l_293[2],&l_293[3]},{&g_390,(void*)0,&l_293[0],&g_390},{&g_390,&l_293[3],&g_390,&l_293[0]},{&l_293[3],&l_293[3],&l_293[2],&g_390}}};
            union U1 **l_394 = &l_351;
            short **l_395 = &l_178;
            int i, j, k;
            for (g_179 = (-14); (g_179 >= 15); g_179 = safe_add_func_uint32_t_u_u(g_179, 3))
            {
                int *l_287 = &g_109[0];
                int *l_289 = &l_215[1][2][2];
                unsigned char ***l_291 = &g_185;
                unsigned char ****l_290[1][10][1] = {{{&l_291},{&l_291},{&l_291},{&l_291},{&l_291},{&l_291},{&l_291},{&l_291},{&l_291},{&l_291}}};
                union U1 l_326[5][10] = {{{1L},{0L},{0L},{1L},{0xCCL},{1L},{0L},{0L},{1L},{0xCCL}},{{1L},{0L},{0L},{1L},{0xCCL},{1L},{0L},{0L},{1L},{0xCCL}},{{1L},{0L},{0L},{1L},{0xCCL},{1L},{0L},{0L},{1L},{0xCCL}},{{1L},{0L},{0L},{1L},{0xCCL},{1L},{0L},{0L},{1L},{0xCCL}},{{1L},{0L},{0L},{1L},{0xCCL},{1L},{0L},{0L},{1L},{0xCCL}}};
                union U0 ***l_334 = &g_333;
                unsigned *l_342[6][8][5];
                int i, j, k;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 8; j++)
                    {
                        for (k = 0; k < 5; k++)
                            l_342[i][j][k] = &g_140[0];
                    }
                }
                (***l_76) = (void*)0;
                if ((safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(((*g_57) || p_51), (((*l_287) = (safe_rshift_func_uint16_t_u_s(p_51, 13))) | ((((*l_289) = l_288) != ((g_292 = (p_51 , &g_184)) == (l_293[3] , l_294))) ^ g_295)))), 0L)))
                {
                    if (p_51)
                        break;
                    for (l_288 = 0; (l_288 == 20); l_288 = safe_add_func_int8_t_s_s(l_288, 4))
                    {
                        union U0 ***l_300 = &l_298[3];
                        (*l_300) = l_298[0];
                        if ((**g_56))
                            continue;
                    }
                }
                else
                {
                    int *l_301 = &g_33[8];
                    l_302[1] = (p_51 , l_301);
                    (**g_56) = ((g_13 , p_51) , (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint32_t_u(4294967290UL)), (((safe_lshift_func_int8_t_s_u(((***g_238) = p_51), (safe_unary_minus_func_uint32_t_u((safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(p_51, p_51)), 10)))))) < (0x99L == p_51)) , (safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((p_51 < 0x11L), (*l_289))), (*l_301)))))), 0L)));
                    l_302[1] = (*g_56);
                }
                for (g_108 = 0; (g_108 <= 2); g_108 += 1)
                {
                    for (g_295 = 0; (g_295 <= 8); g_295 += 1)
                    {
                        int i;
                        g_33[g_295] = 0xC08D49CDL;
                        if (g_33[g_295])
                            break;
                    }
                    for (l_96.f1 = 5; (l_96.f1 >= 0); l_96.f1 -= 1)
                    {
                        unsigned *l_325 = &g_140[1];
                        int i;
                        g_33[(l_96.f1 + 2)] = (p_51 && ((safe_lshift_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((*l_325) = 0x9680E614L), (0x94250A06L <= p_51))), 2)) ^ ((*g_240) = ((*l_289) < (l_326[0][3] , g_295)))) < p_51), ((g_109[4] >= p_51) , 4L))) ^ g_63));
                    }
                }
                g_344[1] = ((p_51 || (safe_add_func_uint16_t_u_u((&l_299[1][4][0] == ((*l_334) = (((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(0L, 3)), 6)) & p_51) , (l_293[3] , g_333)))), (safe_unary_minus_func_uint32_t_u((safe_mul_func_uint8_t_u_u(((l_293[3].f0 & (l_343 = ((safe_lshift_func_uint16_t_u_s(((safe_mul_func_int8_t_s_s((-1L), (!p_51))) , 0xAB6AL), 6)) ^ 0x7B183819L))) , p_51), p_51))))))) <= 8UL);
            }
            if (p_51)
            {
                unsigned short *l_377 = &g_222;
                int l_384 = 0x3C999DDEL;
                int **l_386 = &l_302[2];
                int * const **l_388 = (void*)0;
                for (g_104 = 0; (g_104 != 42); g_104 = safe_add_func_int32_t_s_s(g_104, 4))
                {
                    union U1 **l_347 = (void*)0;
                    union U1 **l_348 = (void*)0;
                    union U1 *l_350 = (void*)0;
                    union U1 **l_349[4] = {&l_350,&l_350,&l_350,&l_350};
                    char *** const l_352 = (void*)0;
                    char ***l_353 = &g_239;
                    char ****l_354[8][5] = {{&g_238,&l_353,&g_238,&g_238,&l_353},{(void*)0,&g_238,(void*)0,&g_238,(void*)0},{&l_353,&g_238,&g_238,&l_353,&g_238},{&g_238,&g_238,&g_238,&g_238,&g_238},{&l_353,&l_353,&g_238,&g_238,&g_238},{(void*)0,&g_238,(void*)0,&g_238,(void*)0},{&g_238,&g_238,&g_238,&l_353,&l_353},{&g_238,&g_238,&g_238,&g_238,&g_238}};
                    unsigned short l_362 = 1UL;
                    unsigned *l_374 = (void*)0;
                    unsigned *l_375[5] = {&g_207,&g_207,&g_207,&g_207,&g_207};
                    int i, j;
                    l_351 = &g_122[5][0][0];
                    (*g_57) = (l_343 = ((l_352 != (l_355 = (g_238 = l_353))) , ((g_376 = (safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((g_140[1] = (safe_mul_func_int16_t_s_s(l_343, ((((**g_239) >= l_362) || (safe_add_func_int32_t_s_s((((((safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((***g_238), (l_373 = (((safe_add_func_uint32_t_u_u((0x40503BB7L && (1UL != p_51)), 0xECAF31ECL)) ^ 0xB8F4179AL) && (*g_57))))), (*g_240))), l_293[3].f0)) , p_51) & p_51) , 0x4EBEL) < g_109[4]), (*g_57)))) && (**g_239))))), (**g_56))), (***g_238)))) , p_51)));
                }
                (*l_74) = ((*l_386) = (((((*l_377) = g_376) >= ((p_51 || l_378) != (safe_mod_func_int32_t_s_s(((p_51 != (p_51 <= (safe_add_func_int16_t_s_s(((*l_178) = p_51), ((g_122[7][0][1] , (l_383 = ((+(-2L)) <= 0L))) , l_384))))) == 1UL), l_385[1])))) , 0x37L) , (*g_56)));
                (**g_56) = ((l_388 = l_387) != &l_386);
            }
            else
            {
                l_389[2][0][2] = &l_293[6];
                (**g_56) = ((((+p_51) ^ 252UL) > (-10L)) | 4294967294UL);
                (*g_57) = 0L;
            }
            (*g_57) = (p_51 != ((p_51 , (l_391 == (void*)0)) == l_293[3].f0));
            (*g_57) = ((((((safe_lshift_func_uint16_t_u_u((((void*)0 == l_394) || (l_378 <= (((*l_395) = &g_179) == (void*)0))), 10)) , p_51) != (safe_mod_func_int32_t_s_s((((*g_57) < p_51) & ((safe_sub_func_uint8_t_u_u(0xA4L, p_51)) || 0UL)), g_344[5]))) || g_109[4]) <= p_51) != g_109[4]);
        }
        else
        {
            for (g_179 = 0; (g_179 >= 9); g_179 = safe_add_func_int16_t_s_s(g_179, 1))
            {
                return &g_57;
            }
        }
        for (l_373 = (-2); (l_373 != 38); ++l_373)
        {
            return &g_57;
        }
    }
    return l_406[9][0];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13.f0, "g_13.f0", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_33[i], "g_33[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_109[i], "g_109[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_122[i][j][k].f0, "g_122[i][j][k].f0", print_hash_value);
                transparent_crc(g_122[i][j][k].f1, "g_122[i][j][k].f1", print_hash_value);
                transparent_crc(g_122[i][j][k].f2, "g_122[i][j][k].f2", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_140[i], "g_140[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_344[i], "g_344[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_376, "g_376", print_hash_value);
    transparent_crc(g_390.f0, "g_390.f0", print_hash_value);
    transparent_crc(g_424, "g_424", print_hash_value);
    transparent_crc(g_477, "g_477", print_hash_value);
    transparent_crc(g_532.f0, "g_532.f0", print_hash_value);
    transparent_crc(g_642, "g_642", print_hash_value);
    transparent_crc(g_669, "g_669", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_681[i][j][k].f0, "g_681[i][j][k].f0", print_hash_value);
                transparent_crc(g_681[i][j][k].f1, "g_681[i][j][k].f1", print_hash_value);
                transparent_crc(g_681[i][j][k].f2, "g_681[i][j][k].f2", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_691.f0, "g_691.f0", print_hash_value);
    transparent_crc(g_845, "g_845", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_934[i], "g_934[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1014, "g_1014", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1055[i], "g_1055[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1093[i], "g_1093[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1101.f0, "g_1101.f0", print_hash_value);
    transparent_crc(g_1145.f0, "g_1145.f0", print_hash_value);
    transparent_crc(g_1173.f0, "g_1173.f0", print_hash_value);
    transparent_crc(g_1202, "g_1202", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
