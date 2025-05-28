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
   short f1;
};


static unsigned g_6 = 0x74DD0324L;
static int g_14 = (-1L);
static int *g_13 = &g_14;
static unsigned g_23[9][8][1] = {{{0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}}, {{0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}}, {{0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}}, {{0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}}, {{0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}}, {{0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}}, {{0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}}, {{0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}}, {{0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}, {0x598AAF0AL}}};
static union U0 g_50 = {65527UL};
static int g_52 = 0xC1E0F758L;
static char g_57[4][4] = {{1L, 0x3AL, 0x14L, 0x3AL}, {1L, 0x3AL, 0x14L, 0x3AL}, {1L, 0x3AL, 0x14L, 0x3AL}, {1L, 0x3AL, 0x14L, 0x3AL}};
static short g_73 = 0x520FL;
static unsigned char g_83 = 0UL;
static unsigned char *g_120 = &g_83;
static int ** const g_176 = (void*)0;
static int ** const *g_175 = &g_176;
static union U0 *g_193[2] = {&g_50, &g_50};
static const int *g_218[8][5][1] = {{{&g_14}, {&g_14}, {&g_14}, {&g_14}, {&g_14}}, {{&g_14}, {&g_14}, {&g_14}, {&g_14}, {&g_14}}, {{&g_14}, {&g_14}, {&g_14}, {&g_14}, {&g_14}}, {{&g_14}, {&g_14}, {&g_14}, {&g_14}, {&g_14}}, {{&g_14}, {&g_14}, {&g_14}, {&g_14}, {&g_14}}, {{&g_14}, {&g_14}, {&g_14}, {&g_14}, {&g_14}}, {{&g_14}, {&g_14}, {&g_14}, {&g_14}, {&g_14}}, {{&g_14}, {&g_14}, {&g_14}, {&g_14}, {&g_14}}};
static const int **g_217 = &g_218[6][0][0];
static const union U0 g_233 = {65528UL};
static unsigned g_235[10][4] = {{0x34DABC89L, 0x34DABC89L, 0x34DABC89L, 0x34DABC89L}, {0x34DABC89L, 0x34DABC89L, 0x34DABC89L, 0x34DABC89L}, {0x34DABC89L, 0x34DABC89L, 0x34DABC89L, 0x34DABC89L}, {0x34DABC89L, 0x34DABC89L, 0x34DABC89L, 0x34DABC89L}, {0x34DABC89L, 0x34DABC89L, 0x34DABC89L, 0x34DABC89L}, {0x34DABC89L, 0x34DABC89L, 0x34DABC89L, 0x34DABC89L}, {0x34DABC89L, 0x34DABC89L, 0x34DABC89L, 0x34DABC89L}, {0x34DABC89L, 0x34DABC89L, 0x34DABC89L, 0x34DABC89L}, {0x34DABC89L, 0x34DABC89L, 0x34DABC89L, 0x34DABC89L}, {0x34DABC89L, 0x34DABC89L, 0x34DABC89L, 0x34DABC89L}};
static unsigned short g_249 = 65535UL;
static int *g_321 = &g_52;
static int *g_326 = &g_52;
static union U0 **g_341[7][8] = {{&g_193[0], &g_193[0], &g_193[0], &g_193[0], &g_193[1], &g_193[0], &g_193[1], &g_193[0]}, {&g_193[0], &g_193[0], &g_193[0], &g_193[0], &g_193[1], &g_193[0], &g_193[1], &g_193[0]}, {&g_193[0], &g_193[0], &g_193[0], &g_193[0], &g_193[1], &g_193[0], &g_193[1], &g_193[0]}, {&g_193[0], &g_193[0], &g_193[0], &g_193[0], &g_193[1], &g_193[0], &g_193[1], &g_193[0]}, {&g_193[0], &g_193[0], &g_193[0], &g_193[0], &g_193[1], &g_193[0], &g_193[1], &g_193[0]}, {&g_193[0], &g_193[0], &g_193[0], &g_193[0], &g_193[1], &g_193[0], &g_193[1], &g_193[0]}, {&g_193[0], &g_193[0], &g_193[0], &g_193[0], &g_193[1], &g_193[0], &g_193[1], &g_193[0]}};
static union U0 ***g_340[6][1][4] = {{{&g_341[2][3], &g_341[2][3], &g_341[2][3], &g_341[2][3]}}, {{&g_341[2][3], &g_341[2][3], &g_341[2][3], &g_341[2][3]}}, {{&g_341[2][3], &g_341[2][3], &g_341[2][3], &g_341[2][3]}}, {{&g_341[2][3], &g_341[2][3], &g_341[2][3], &g_341[2][3]}}, {{&g_341[2][3], &g_341[2][3], &g_341[2][3], &g_341[2][3]}}, {{&g_341[2][3], &g_341[2][3], &g_341[2][3], &g_341[2][3]}}};
static char g_378 = (-1L);
static char g_382 = 1L;
static short g_397 = 8L;
static unsigned g_425 = 4294967287UL;
static short *g_441 = &g_50.f1;
static short **g_440 = &g_441;
static char g_506 = 0xA0L;
static unsigned char ***g_528[4] = {(void*)0, (void*)0, (void*)0, (void*)0};
static unsigned g_573 = 0x7A38B43DL;
static int *g_591 = &g_14;
static unsigned short g_600 = 0x2294L;
static int g_613 = 6L;
static int **g_650 = &g_13;
static int ***g_649 = &g_650;
static unsigned g_661 = 4294967291UL;
static int *g_743 = &g_52;
static int *g_760 = &g_52;
static const unsigned short **g_788 = (void*)0;
static int g_837 = 0x0874CB95L;
static unsigned *g_925 = &g_6;
static unsigned **g_924 = &g_925;
static unsigned g_986 = 4294967291UL;
static char g_1008 = 0x40L;
static char *g_1033 = &g_57[3][3];
static char **g_1032[3] = {&g_1033, &g_1033, &g_1033};
static const union U0 *g_1038 = &g_50;
static unsigned g_1147 = 4294967294UL;
static unsigned char g_1161 = 0xDAL;



static const unsigned char func_1(void);
static int * func_2(short p_3, unsigned p_4, unsigned char p_5);
static short func_7(int * p_8, unsigned p_9, unsigned p_10, char p_11, short p_12);
static unsigned func_16(unsigned p_17, int * const p_18, int * p_19, int p_20);
static int * const func_24(short p_25, const int * p_26, unsigned * p_27, unsigned * p_28, int p_29);
static const int * func_30(int * p_31, unsigned * p_32);
static unsigned * func_33(union U0 p_34, unsigned p_35, const unsigned char p_36, unsigned * p_37);
static union U0 func_38(unsigned * p_39);
static unsigned * func_40(unsigned * p_41, char p_42, unsigned char p_43, int * p_44);
static unsigned * func_45(int * p_46, int * p_47, union U0 p_48, char p_49);
static const unsigned char func_1(void)
{
    char l_15 = 0xD7L;
    unsigned *l_21 = (void*)0;
    unsigned *l_22[1][2][5] = {{{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}};
    union U0 *l_508 = &g_50;
    int *l_1217 = &g_14;
    int i, j, k;
    l_1217 = func_2(g_6, (func_7(g_13, l_15, func_16((g_23[2][5][0] = g_14), func_24(g_14, func_30(&g_14, func_33(((*l_508) = func_38(func_40(func_45(&g_14, &g_14, g_50, l_15), g_235[5][2], (*g_120), l_21))), l_15, l_15, &g_6)), l_22[0][1][3], &g_6, l_15), (*g_650), l_15), l_15, l_15) > 7UL), l_15);
    return (*l_1217);
}







static int * func_2(short p_3, unsigned p_4, unsigned char p_5)
{
    int *l_1216 = &g_14;
    l_1216 = l_1216;
    return l_1216;
}







static short func_7(int * p_8, unsigned p_9, unsigned p_10, char p_11, short p_12)
{
    int l_1140 = 0L;
    char ***l_1144 = &g_1032[1];
    int *l_1154[6];
    unsigned *l_1157[9] = {&g_986, &g_986, &g_1147, &g_986, &g_986, &g_1147, &g_986, &g_986, &g_1147};
    int *l_1172[1];
    int i;
    for (i = 0; i < 6; i++)
        l_1154[i] = &g_14;
    for (i = 0; i < 1; i++)
        l_1172[i] = &g_837;
    (**g_650) = (*p_8);
    if ((safe_rshift_func_int16_t_s_s((-8L), 14)))
    {
        int *l_1136 = (void*)0;
        for (g_837 = 10; (g_837 >= (-8)); --g_837)
        {
            short l_1139 = (-5L);
            int l_1143 = 5L;
            unsigned *l_1145 = &g_986;
            unsigned *l_1146[1];
            int **l_1148[3][2][8] = {{{&g_326, &l_1136, &g_326, &g_13, &l_1136, (void*)0, &g_321, (void*)0}, {&g_326, &l_1136, &g_326, &g_13, &l_1136, (void*)0, &g_321, (void*)0}}, {{&g_326, &l_1136, &g_326, &g_13, &l_1136, (void*)0, &g_321, (void*)0}, {&g_326, &l_1136, &g_326, &g_13, &l_1136, (void*)0, &g_321, (void*)0}}, {{&g_326, &l_1136, &g_326, &g_13, &l_1136, (void*)0, &g_321, (void*)0}, {&g_326, &l_1136, &g_326, &g_13, &l_1136, (void*)0, &g_321, (void*)0}}};
            union U0 l_1149 = {0xFA55L};
            unsigned short *l_1150 = (void*)0;
            unsigned short *l_1151 = &g_600;
            unsigned short *l_1152[9] = {&l_1149.f0, &l_1149.f0, &g_249, &l_1149.f0, &l_1149.f0, &g_249, &l_1149.f0, &l_1149.f0, &g_249};
            char l_1153 = 0xA4L;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1146[i] = &g_1147;
            (*g_743) = ((*p_8) = 0x401DA064L);
            (*g_650) = l_1136;
            p_8 = p_8;
            (*g_217) = ((**g_649) = (*g_650));
        }
    }
    else
    {
        union U0 *l_1155 = &g_50;
        union U0 **l_1156 = &g_193[0];
        (*g_650) = l_1154[2];
        (*l_1156) = l_1155;
    }
    (*g_217) = p_8;
    for (g_573 = 0; (g_573 > 46); g_573 = safe_add_func_uint16_t_u_u(g_573, 5))
    {
        char l_1160 = (-1L);
        int *l_1162 = &g_837;
        char l_1166[4][1];
        union U0 l_1167[8] = {{3UL}, {0UL}, {3UL}, {0UL}, {3UL}, {0UL}, {3UL}, {0UL}};
        unsigned **l_1196[1];
        char **l_1205[1][3];
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_1166[i][j] = (-10L);
        }
        for (i = 0; i < 1; i++)
            l_1196[i] = &l_1157[3];
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_1205[i][j] = &g_1033;
        }
        l_1162 = p_8;
        for (g_661 = (-11); (g_661 >= 8); g_661 = safe_add_func_uint16_t_u_u(g_661, 1))
        {
            short l_1165 = (-1L);
            int * const l_1168 = &g_14;
            union U0 *l_1191[8][2] = {{&l_1167[1], &l_1167[1]}, {&l_1167[1], &l_1167[1]}, {&l_1167[1], &l_1167[1]}, {&l_1167[1], &l_1167[1]}, {&l_1167[1], &l_1167[1]}, {&l_1167[1], &l_1167[1]}, {&l_1167[1], &l_1167[1]}, {&l_1167[1], &l_1167[1]}};
            char **l_1208 = (void*)0;
            int i, j;
        }
        if ((*p_8))
            continue;
    }
    return (**g_440);
}







static unsigned func_16(unsigned p_17, int * const p_18, int * p_19, int p_20)
{
    return (**g_924);
}







static int * const func_24(short p_25, const int * p_26, unsigned * p_27, unsigned * p_28, int p_29)
{
    union U0 **l_777 = &g_193[0];
    union U0 **l_779 = &g_193[0];
    int l_796 = 0xF7E6944DL;
    int l_811 = 0x28E490A9L;
    union U0 *l_814[1][1][7];
    unsigned short l_829 = 0x496DL;
    unsigned char *l_843[4] = {&g_83, &g_83, &g_83, &g_83};
    const char l_846 = (-1L);
    int *l_864 = &l_796;
    int *l_916 = &l_811;
    const short *l_929 = &g_397;
    const short **l_928 = &l_929;
    const char *l_960 = &l_846;
    const char **l_959 = &l_960;
    int l_1058 = 0x1DDC9475L;
    int *l_1062 = (void*)0;
    const int * const *l_1100[7][1] = {{&g_218[2][0][0]}, {&g_218[2][0][0]}, {&g_218[2][0][0]}, {&g_218[2][0][0]}, {&g_218[2][0][0]}, {&g_218[2][0][0]}, {&g_218[2][0][0]}};
    const int * const **l_1099 = &l_1100[3][0];
    const int * const ***l_1098 = &l_1099;
    unsigned short *l_1117 = &g_600;
    unsigned short **l_1116[2][6] = {{&l_1117, &l_1117, &l_1117, &l_1117, &l_1117, &l_1117}, {&l_1117, &l_1117, &l_1117, &l_1117, &l_1117, &l_1117}};
    unsigned short ***l_1115[5][3] = {{(void*)0, &l_1116[1][5], (void*)0}, {(void*)0, &l_1116[1][5], (void*)0}, {(void*)0, &l_1116[1][5], (void*)0}, {(void*)0, &l_1116[1][5], (void*)0}, {(void*)0, &l_1116[1][5], (void*)0}};
    int * const l_1120 = &g_52;
    union U0 l_1123 = {0xC5F4L};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 7; k++)
                l_814[i][j][k] = &g_50;
        }
    }
    if ((safe_rshift_func_uint16_t_u_u(p_29, 6)))
    {
        union U0 ***l_778 = &l_777;
        int l_794 = 1L;
        int * const *l_838[10] = {&g_321, (void*)0, &g_321, (void*)0, &g_321, (void*)0, &g_321, (void*)0, &g_321, (void*)0};
        union U0 **l_856 = &g_193[1];
        int *l_875[2];
        unsigned char *l_902 = (void*)0;
        short l_997 = 0x641EL;
        const int ***l_1005[7][2] = {{&g_217, &g_217}, {&g_217, &g_217}, {&g_217, &g_217}, {&g_217, &g_217}, {&g_217, &g_217}, {&g_217, &g_217}, {&g_217, &g_217}};
        const int ****l_1004[5];
        unsigned * const *l_1034[2][8][2] = {{{(void*)0, &g_925}, {(void*)0, &g_925}, {(void*)0, &g_925}, {(void*)0, &g_925}, {(void*)0, &g_925}, {(void*)0, &g_925}, {(void*)0, &g_925}, {(void*)0, &g_925}}, {{(void*)0, &g_925}, {(void*)0, &g_925}, {(void*)0, &g_925}, {(void*)0, &g_925}, {(void*)0, &g_925}, {(void*)0, &g_925}, {(void*)0, &g_925}, {(void*)0, &g_925}}};
        const union U0 *l_1036 = &g_233;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_875[i] = &l_794;
        for (i = 0; i < 5; i++)
            l_1004[i] = &l_1005[4][1];
        if ((((*l_778) = l_777) != l_779))
        {
            int l_795 = 7L;
            unsigned l_805[8][8] = {{1UL, 1UL, 0UL, 1UL, 1UL, 0UL, 1UL, 1UL}, {1UL, 1UL, 0UL, 1UL, 1UL, 0UL, 1UL, 1UL}, {1UL, 1UL, 0UL, 1UL, 1UL, 0UL, 1UL, 1UL}, {1UL, 1UL, 0UL, 1UL, 1UL, 0UL, 1UL, 1UL}, {1UL, 1UL, 0UL, 1UL, 1UL, 0UL, 1UL, 1UL}, {1UL, 1UL, 0UL, 1UL, 1UL, 0UL, 1UL, 1UL}, {1UL, 1UL, 0UL, 1UL, 1UL, 0UL, 1UL, 1UL}, {1UL, 1UL, 0UL, 1UL, 1UL, 0UL, 1UL, 1UL}};
            union U0 *l_806[2];
            union U0 *l_809 = &g_50;
            int *l_822[5][3] = {{(void*)0, &g_14, (void*)0}, {(void*)0, &g_14, (void*)0}, {(void*)0, &g_14, (void*)0}, {(void*)0, &g_14, (void*)0}, {(void*)0, &g_14, (void*)0}};
            unsigned l_892[10][4][1] = {{{0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}}};
            unsigned l_913 = 0x367C5503L;
            int ***l_933 = (void*)0;
            int *l_935[4] = {&g_837, &l_796, &g_837, &l_796};
            char *l_962 = (void*)0;
            char **l_961 = &l_962;
            union U0 l_967[10] = {{0x87C7L}, {1UL}, {0x87C7L}, {1UL}, {0x87C7L}, {1UL}, {0x87C7L}, {1UL}, {0x87C7L}, {1UL}};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_806[i] = &g_50;
            for (g_661 = 24; (g_661 >= 52); g_661++)
            {
                short l_787 = 1L;
                int l_789[2][6] = {{0x4C684CE8L, 0x47ED2956L, 0L, 0x47ED2956L, 0x4C684CE8L, 0L}, {0x4C684CE8L, 0x47ED2956L, 0L, 0x47ED2956L, 0x4C684CE8L, 0L}};
                union U0 **l_807 = &g_193[0];
                union U0 **l_808 = &l_806[1];
                union U0 **l_810 = &l_809;
                int i, j;
                l_796 = ((safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u((*p_28))), ((!((safe_add_func_int16_t_s_s((~(!(0xAABD7EC5L | (l_787 = 0x997A3783L)))), (((*g_743) = 0x95F74907L) < (!(g_788 == g_788))))) ^ l_789[0][0])) != (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((l_794 <= (l_795 = (-8L))), p_29)), 10))))) < 0x36L);
                (*g_217) = &l_789[0][1];
                (*g_743) = (safe_lshift_func_uint16_t_u_s(g_382, ((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(l_805[7][2], (*p_28))), 1UL)), g_600)) == (((*l_808) = l_806[0]) != ((*l_810) = l_809)))));
            }
            if ((0x99L < (((-1L) < ((l_796 = 0x6217L) | ((l_811 < p_25) < l_805[3][6]))) ^ (safe_rshift_func_uint8_t_u_u(l_811, 6)))))
            {
                union U0 **l_815 = &l_814[0][0][1];
                (*l_815) = ((**l_778) = l_814[0][0][1]);
            }
            else
            {
                int *l_823 = (void*)0;
                for (p_29 = 0; (p_29 <= (-20)); p_29 = safe_sub_func_uint32_t_u_u(p_29, 3))
                {
                    union U0 l_820 = {0UL};
                    if ((safe_rshift_func_uint8_t_u_s(p_29, 7)))
                    {
                        int **l_821 = &g_326;
                        l_822[4][2] = ((*l_821) = p_27);
                        (*g_217) = (**g_649);
                    }
                    else
                    {
                        unsigned l_828 = 0xEA75338DL;
                        (*g_743) = (l_828 = (((l_823 = (*g_650)) != (void*)0) >= ((((p_25 ^ (safe_mod_func_uint16_t_u_u((l_794 & p_29), (safe_lshift_func_uint16_t_u_s(p_29, (**g_440)))))) <= 3UL) & (*g_13)) ^ 0x3ADC788FL)));
                        (*g_217) = (void*)0;
                    }
                    (*g_743) = 1L;
                    (*g_217) = p_28;
                }
            }
            (*l_778) = &l_814[0][0][1];
            if ((*p_26))
            {
                short l_830 = 0xEA1DL;
                int * const l_836 = &g_837;
                int * const *l_835 = &l_836;
                const int l_847 = 0x8E504D0EL;
                union U0 l_851[8] = {{65535UL}, {0x31B2L}, {65535UL}, {0x31B2L}, {65535UL}, {0x31B2L}, {65535UL}, {0x31B2L}};
                int *l_859 = (void*)0;
                unsigned short l_863 = 0xC08EL;
                short *l_897 = (void*)0;
                int i;
                if (l_829)
                {
                    (*g_217) = p_27;
                    for (l_811 = 0; (l_811 <= 1); l_811 += 1)
                    {
                        int * const l_831 = &l_794;
                        int *l_832 = &g_52;
                        int * const *l_834[3][1][5] = {{{&l_831, &l_831, &l_831, &l_831, &l_831}}, {{&l_831, &l_831, &l_831, &l_831, &l_831}}, {{&l_831, &l_831, &l_831, &l_831, &l_831}}};
                        int * const **l_833[7][8] = {{&l_834[0][0][2], &l_834[2][0][2], &l_834[0][0][2], &l_834[2][0][2], &l_834[0][0][2], &l_834[2][0][2], &l_834[0][0][2], &l_834[2][0][2]}, {&l_834[0][0][2], &l_834[2][0][2], &l_834[0][0][2], &l_834[2][0][2], &l_834[0][0][2], &l_834[2][0][2], &l_834[0][0][2], &l_834[2][0][2]}, {&l_834[0][0][2], &l_834[2][0][2], &l_834[0][0][2], &l_834[2][0][2], &l_834[0][0][2], &l_834[2][0][2], &l_834[0][0][2], &l_834[2][0][2]}, {&l_834[0][0][2], &l_834[2][0][2], &l_834[0][0][2], &l_834[2][0][2], &l_834[0][0][2], &l_834[2][0][2], &l_834[0][0][2], &l_834[2][0][2]}, {&l_834[0][0][2], &l_834[2][0][2], &l_834[0][0][2], &l_834[2][0][2], &l_834[0][0][2], &l_834[2][0][2], &l_834[0][0][2], &l_834[2][0][2]}, {&l_834[0][0][2], &l_834[2][0][2], &l_834[0][0][2], &l_834[2][0][2], &l_834[0][0][2], &l_834[2][0][2], &l_834[0][0][2], &l_834[2][0][2]}, {&l_834[0][0][2], &l_834[2][0][2], &l_834[0][0][2], &l_834[2][0][2], &l_834[0][0][2], &l_834[2][0][2], &l_834[0][0][2], &l_834[2][0][2]}};
                        int i, j, k;
                        l_832 = l_831;
                        (*l_831) = l_794;
                        l_838[1] = (l_835 = &l_822[4][2]);
                    }
                    return p_27;
                }
                else
                {
                    char *l_844 = &g_57[3][1];
                    unsigned short *l_845 = &l_829;
                    int *l_848 = &l_796;
                    union U0 *l_862 = &g_50;
                    p_26 = l_848;
                    for (p_25 = 7; (p_25 >= 0); p_25 -= 1)
                    {
                        union U0 **l_854 = (void*)0;
                        union U0 ***l_855[8][1] = {{&l_779}, {&l_779}, {&l_779}, {&l_779}, {&l_779}, {&l_779}, {&l_779}, {&l_779}};
                        int **l_857[2][8] = {{&l_848, &g_591, &l_848, &g_591, &l_848, &g_591, &l_848, &g_591}, {&l_848, &g_591, &l_848, &g_591, &l_848, &g_591, &l_848, &g_591}};
                        int **l_858 = (void*)0;
                        int i, j;
                        l_859 = (*l_835);
                        (**l_835) = 3L;
                        return p_28;
                    }
                    for (g_50.f0 = 0; (g_50.f0 <= 30); g_50.f0 = safe_add_func_int8_t_s_s(g_50.f0, 1))
                    {
                        (*l_848) = (l_846 != 0xC5FEL);
                    }
                    for (g_613 = 2; (g_613 >= 0); g_613 -= 1)
                    {
                        (*l_779) = l_862;
                    }
                }
                if (((l_811 | g_397) & (l_796 = l_846)))
                {
                    unsigned l_866 = 2UL;
                    int *l_872 = (void*)0;
                    unsigned *l_874 = &g_6;
                    char l_882 = 1L;
                    short l_891 = 0xB81AL;
                    unsigned *l_898 = (void*)0;
                    unsigned *l_899 = &l_805[7][2];
                    short *l_900 = &g_73;
                    unsigned char *l_901 = &g_83;
                    char *l_914 = &l_882;
                    char *l_915[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_915[i] = &g_57[0][0];
                    if (((*l_836) = ((0xB6L & ((*g_120) = (*g_120))) || l_863)))
                    {
                        union U0 * const * const l_865 = &g_193[0];
                        unsigned **l_869 = (void*)0;
                        unsigned *l_871 = (void*)0;
                        unsigned **l_870 = &l_871;
                        int *l_873 = &l_794;
                        p_26 = func_30(l_864, p_28);
                        (*l_864) = ((((l_865 == l_865) < p_29) <= (*g_441)) > (*p_26));
                        l_875[1] = p_27;
                    }
                    else
                    {
                        int l_887 = 0xC6E17C24L;
                        char *l_890 = &g_57[2][2];
                        l_887 = (safe_add_func_uint32_t_u_u((254UL ^ ((safe_add_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u(((*p_26) ^ ((*g_321) = (p_29 > (l_882 >= (~((*l_836) = (*p_26))))))), 6)) ^ ((g_506 != (((((*l_890) = (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s(l_887, (safe_add_func_uint8_t_u_u((*l_864), 0x00L)))), (*g_120)))) != 0xD1L) && 65535UL) | (**g_440))) > 0x431FA979L)), (**g_650))) & 0x876CL)), (*p_28)));
                        l_891 = l_866;
                    }
                    (*g_321) = ((((*l_900) = (((((l_892[3][1][0] & (((*l_899) = (((*l_864) <= ((*g_441) = 0x1FC0L)) != (safe_sub_func_uint8_t_u_u(p_29, ((*l_864) < (p_29 > ((l_897 = (*g_440)) != (void*)0))))))) != (2L >= p_25))) ^ 0L) < 0UL) ^ 0UL) > (*l_864))) | 0x8F3EL) & (-4L));
                    (**l_835) = ((*p_28) == ((l_901 != (l_902 = l_901)) <= (g_506 = (safe_rshift_func_uint16_t_u_s(((((((*l_864) ^ (~(safe_rshift_func_uint8_t_u_u(((((*l_900) = ((safe_mod_func_uint16_t_u_u((p_25 < ((*l_914) = ((*p_26) <= (safe_rshift_func_uint8_t_u_u(((((**g_440) = ((p_25 > 0x1EL) ^ ((safe_sub_func_uint8_t_u_u((*g_120), p_29)) ^ p_29))) < l_913) && p_25), 1))))), 1L)) | p_25)) & 0x0C64L) == (*l_836)), p_25)))) > 0xCD77L) ^ 0L) == (*g_321)) > 0x7220L), 15)))));
                }
                else
                {
                    int *l_917 = &l_794;
                    (*g_217) = (g_326 = func_45(l_916, l_917, (***l_778), (p_29 != (safe_sub_func_uint8_t_u_u(p_29, (safe_mod_func_uint8_t_u_u(0x16L, 0x2CL)))))));
                }
                (*l_916) = ((safe_add_func_uint8_t_u_u((g_924 != (void*)0), (safe_lshift_func_uint8_t_u_s((*g_120), (**l_835))))) || (*l_864));
            }
            else
            {
                union U0 *l_932 = &g_50;
                int *l_934 = &l_795;
                char l_946 = 0x36L;
                int l_963 = 6L;
                if (((void*)0 == l_928))
                {
                    for (g_52 = 0; (g_52 <= 3); g_52 += 1)
                    {
                        (*g_217) = &l_811;
                        (*g_217) = p_26;
                    }
                    (*l_864) = ((*g_743) = (*g_321));
                    for (g_661 = (-22); (g_661 != 49); g_661 = safe_add_func_int32_t_s_s(g_661, 9))
                    {
                        (**l_778) = l_932;
                    }
                }
                else
                {
                    int l_947 = 0x11C6F633L;
                    char *l_950 = &g_506;
                    int l_951 = 0x7573005AL;
                    int l_952 = 0L;
                    (*g_760) = (l_933 != (void*)0);
                    if (((l_934 = (void*)0) == l_935[1]))
                    {
                        (*g_217) = p_26;
                    }
                    else
                    {
                        (*g_760) = ((*l_864) = (**g_650));
                    }
                    if ((safe_lshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_u((((safe_lshift_func_int8_t_s_u((l_952 = (g_378 = (safe_sub_func_int32_t_s_s((*p_26), (l_951 = ((*g_120) > (safe_rshift_func_uint8_t_u_s((!(((**g_924) | (l_947 = l_946)) < (((*l_950) = ((((*l_864) ^ 0x90D2L) & p_29) != (g_397 >= (*l_916)))) <= 255UL))), 4)))))))), 7)) | (*g_441)) >= (*l_916)), 1)) | (*l_864)), 8)))
                    {
                        int l_965 = 0x11090E35L;
                        (*g_760) = (*p_26);
                        (*l_916) = (safe_rshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_u(((safe_add_func_uint16_t_u_u((l_959 != l_961), (g_600 = l_951))) == p_25), ((*g_120) = (l_963 = p_29)))) == p_25), (safe_unary_minus_func_uint16_t_u(((l_965 = ((*p_26) ^ (p_29 > (((*g_441) = ((0UL && p_29) > (**g_924))) >= p_25)))) > p_25)))));
                    }
                    else
                    {
                        (*g_217) = &l_963;
                        return p_28;
                    }
                    if ((*p_26))
                    {
                        int *l_966[9] = {(void*)0, &l_963, (void*)0, &l_963, (void*)0, &l_963, (void*)0, &l_963, (void*)0};
                        int i;
                        (*g_217) = &l_811;
                        (*g_217) = (l_875[1] = func_45(l_966[0], &l_811, l_967[3], (*l_864)));
                    }
                    else
                    {
                        (*g_743) = 0xD8B69A96L;
                        (*l_916) = (*g_760);
                    }
                }
                (*g_321) = ((*p_28) > (*l_864));
            }
        }
        else
        {
            unsigned l_968 = 4294967295UL;
            int l_990 = 0x5E710CF0L;
            int l_992 = (-3L);
            const int ****l_1006 = &l_1005[2][1];
            union U0 *l_1009 = &g_50;
            unsigned char *l_1027 = &g_83;
            for (g_52 = 0; (g_52 >= 0); g_52 -= 1)
            {
                unsigned short *l_971 = &g_600;
                unsigned *l_985 = &g_986;
                int l_987 = 0L;
                int l_988 = 0xA7782093L;
                int l_989 = 0x4DE1B516L;
                char l_991 = 0xB1L;
                const int ***l_1003 = (void*)0;
                const int ****l_1002 = &l_1003;
                if ((**g_650))
                    break;
                l_992 = ((((*l_916) = l_968) ^ (safe_sub_func_uint16_t_u_u(((*l_971) = 0UL), (p_25 != (l_990 = (((*l_864) = (safe_unary_minus_func_uint8_t_u((safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((**g_924) < l_968), ((*g_120) = (l_989 = (4294967295UL & (safe_unary_minus_func_uint8_t_u((safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u((l_987 = (safe_unary_minus_func_uint32_t_u(((*l_985) = 0xF52181B5L)))), l_968)) | (((l_988 = (*l_864)) > 0x90CBL) || 247UL)), 1L)), 0x9FF8AE72L))))))))), (**g_440)))))) & (*g_925))))))) == l_991);
                (*l_916) = ((*l_916) != p_25);
                for (g_600 = 0; (g_600 <= 3); g_600 += 1)
                {
                    const int *****l_998 = (void*)0;
                    const int ***l_1001 = &g_217;
                    const int ****l_1000 = &l_1001;
                    const int *****l_999[3];
                    unsigned *l_1007 = (void*)0;
                    int l_1017 = 0L;
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_999[i] = &l_1000;
                    (*l_864) = g_235[(g_52 + 4)][g_600];
                    if ((safe_sub_func_uint32_t_u_u(((*l_985) = l_992), (g_1008 = ((!((6UL & ((65535UL & l_992) & (safe_mod_func_int16_t_s_s((~l_997), ((**g_440) = (~(**g_440))))))) > (&g_649 == (l_1006 = (l_1004[1] = (l_1002 = (void*)0)))))) || p_29)))))
                    {
                        (*l_779) = l_1009;
                        if ((*p_26))
                            continue;
                        (*l_864) = (safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(p_25, p_29)), (~(((*l_916) = (*p_26)) & (*p_26)))));
                        if ((*p_26))
                            continue;
                    }
                    else
                    {
                        unsigned l_1014 = 4294967295UL;
                        l_1014 = 0x26CDEA71L;
                        (**l_1001) = &l_796;
                        (*l_916) = (safe_rshift_func_uint16_t_u_s(l_1014, 0));
                        return l_1007;
                    }
                    if ((*p_26))
                        break;
                    l_1017 = ((*p_28) <= (*p_28));
                    for (l_968 = 0; (l_968 <= 3); l_968 += 1)
                    {
                        (*l_916) = 0L;
                    }
                }
            }
            if ((*p_26))
            {
                union U0 *l_1018 = &g_50;
                (*l_777) = l_1018;
                (*l_916) = (*g_321);
                l_990 = (safe_rshift_func_uint16_t_u_u(p_29, 0));
            }
            else
            {
                union U0 l_1023 = {1UL};
                int l_1024 = (-10L);
                l_1024 = ((((*l_864) = ((safe_add_func_int16_t_s_s(0xB8F7L, 0x48AEL)) > ((l_875[1] = (l_916 = &l_796)) == (void*)0))) || 0x569215F9L) != g_986);
                (**l_778) = l_1009;
            }
            (*g_217) = p_27;
            if ((*p_26))
            {
                return p_28;
            }
            else
            {
                (*g_760) = (p_25 & (safe_rshift_func_uint16_t_u_u(g_52, 10)));
                p_26 = func_30(&l_990, p_28);
            }
        }
        if ((safe_sub_func_int8_t_s_s((g_1032[1] != (void*)0), ((*l_864) | (*g_1033)))))
        {
            int l_1035 = 0xE6F0D7D5L;
            l_1035 = ((-1L) && (0x29L != (&g_925 == l_1034[0][6][0])));
        }
        else
        {
            const union U0 **l_1037 = &l_1036;
            g_1038 = ((*l_1037) = l_1036);
        }
        for (g_573 = 19; (g_573 <= 42); ++g_573)
        {
            const unsigned char l_1047 = 0x88L;
            if ((*l_864))
                break;
            if ((*l_864))
                break;
            (*g_760) = (((*g_1033) = (p_29 & (((safe_lshift_func_int16_t_s_u((**g_440), (safe_add_func_int16_t_s_s(p_25, p_29)))) && 0L) >= (safe_sub_func_uint32_t_u_u(l_1047, (+(*p_28))))))) | ((((((0UL >= (*l_864)) || 0UL) == 0x4B03L) & (-10L)) > 1L) && l_1047));
        }
        for (g_600 = 0; (g_600 <= 42); g_600 = safe_add_func_uint32_t_u_u(g_600, 3))
        {
            const union U0 *l_1052[6];
            const union U0 **l_1053 = (void*)0;
            const union U0 **l_1054 = &l_1052[0];
            int i;
            for (i = 0; i < 6; i++)
                l_1052[i] = &g_233;
            (*l_1054) = l_1052[0];
        }
    }
    else
    {
        int *l_1065 = (void*)0;
        union U0 l_1067 = {65534UL};
        int l_1070[5] = {(-10L), 2L, (-10L), 2L, (-10L)};
        int i;
        for (g_506 = 6; (g_506 >= 1); g_506 -= 1)
        {
            unsigned l_1055 = 0xD3C7DFD1L;
            unsigned short *l_1073 = &g_50.f0;
            int *l_1074 = &l_1070[0];
            int *l_1077 = &g_52;
            unsigned char *l_1090 = &g_83;
            unsigned char **l_1093[1][9][9] = {{{&l_843[2], &l_843[2], &l_843[2], (void*)0, &l_843[3], &g_120, &l_843[3], &l_843[3], &g_120}, {&l_843[2], &l_843[2], &l_843[2], (void*)0, &l_843[3], &g_120, &l_843[3], &l_843[3], &g_120}, {&l_843[2], &l_843[2], &l_843[2], (void*)0, &l_843[3], &g_120, &l_843[3], &l_843[3], &g_120}, {&l_843[2], &l_843[2], &l_843[2], (void*)0, &l_843[3], &g_120, &l_843[3], &l_843[3], &g_120}, {&l_843[2], &l_843[2], &l_843[2], (void*)0, &l_843[3], &g_120, &l_843[3], &l_843[3], &g_120}, {&l_843[2], &l_843[2], &l_843[2], (void*)0, &l_843[3], &g_120, &l_843[3], &l_843[3], &g_120}, {&l_843[2], &l_843[2], &l_843[2], (void*)0, &l_843[3], &g_120, &l_843[3], &l_843[3], &g_120}, {&l_843[2], &l_843[2], &l_843[2], (void*)0, &l_843[3], &g_120, &l_843[3], &l_843[3], &g_120}, {&l_843[2], &l_843[2], &l_843[2], (void*)0, &l_843[3], &g_120, &l_843[3], &l_843[3], &g_120}}};
            unsigned **l_1106 = (void*)0;
            union U0 *l_1118[6][1][10];
            int i, j, k;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 10; k++)
                        l_1118[i][j][k] = &g_50;
                }
            }
            if ((*g_743))
                break;
            if (l_1055)
            {
                if ((safe_rshift_func_int8_t_s_s(1L, (l_1058 == (safe_add_func_int16_t_s_s(p_29, (*l_916)))))))
                {
                    if ((*p_26))
                        break;
                }
                else
                {
                    int *l_1061 = &l_796;
                    l_1062 = l_1061;
                    return p_27;
                }
            }
            else
            {
                int l_1063 = 0x37C6DD28L;
                int *l_1064 = &l_796;
                union U0 *l_1068 = &l_1067;
                for (l_1058 = 3; (l_1058 >= 0); l_1058 -= 1)
                {
                    union U0 l_1066 = {0xA322L};
                    int *l_1069 = (void*)0;
                    int i, j;
                    if (g_57[l_1058][l_1058])
                    {
                        int i, j;
                        if (g_57[l_1058][l_1058])
                            break;
                        if (l_1063)
                            break;
                        l_1064 = func_45(&l_796, func_45(l_1064, l_1065, (l_1066 = l_1066), (*g_1033)), l_1067, ((*l_959) == &g_57[l_1058][l_1058]));
                        l_1068 = &l_1067;
                    }
                    else
                    {
                        (*g_217) = l_1069;
                        (*g_321) = (p_26 == p_26);
                    }
                    (*l_864) = (l_1070[2] < (+(((*g_1033) = (p_25 & (safe_rshift_func_uint16_t_u_s(0x5200L, 15)))) > ((-4L) <= (*g_120)))));
                }
            }
            if ((((*l_1073) = p_29) == 0L))
            {
                int **l_1075 = &l_1074;
                int **l_1076 = &l_864;
                char l_1084 = 0xE7L;
                int l_1089 = 9L;
                l_1077 = ((*l_1076) = ((*l_1075) = l_1074));
                l_1089 = ((*p_28) || (safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_add_func_int8_t_s_s(l_1084, ((void*)0 != &g_340[0][0][1]))), p_29)), (0x59L ^ (safe_sub_func_int8_t_s_s(((**l_1076) <= (safe_mod_func_int16_t_s_s(((!(p_29 >= (((*l_1074) ^ 0xE51F4F9EL) >= 0x72D81B70L))) == (*p_26)), (**g_440)))), (*l_916)))))));
                (*g_217) = &l_1070[3];
            }
            else
            {
                if ((*p_26))
                    break;
                if ((**g_650))
                    break;
                if ((*g_743))
                    continue;
            }
            for (g_397 = 6; (g_397 >= 0); g_397 -= 1)
            {
                unsigned char ***l_1091 = (void*)0;
                unsigned char ***l_1092 = (void*)0;
                int l_1096[4][4] = {{(-1L), 0xEB54A617L, (-1L), 0xEB54A617L}, {(-1L), 0xEB54A617L, (-1L), 0xEB54A617L}, {(-1L), 0xEB54A617L, (-1L), 0xEB54A617L}, {(-1L), 0xEB54A617L, (-1L), 0xEB54A617L}};
                short *l_1097 = &g_73;
                unsigned *l_1101 = &g_986;
                unsigned *l_1102 = &l_1055;
                char *l_1105[7][7][1] = {{{&g_506}, {&g_506}, {&g_506}, {&g_506}, {&g_506}, {&g_506}, {&g_506}}, {{&g_506}, {&g_506}, {&g_506}, {&g_506}, {&g_506}, {&g_506}, {&g_506}}, {{&g_506}, {&g_506}, {&g_506}, {&g_506}, {&g_506}, {&g_506}, {&g_506}}, {{&g_506}, {&g_506}, {&g_506}, {&g_506}, {&g_506}, {&g_506}, {&g_506}}, {{&g_506}, {&g_506}, {&g_506}, {&g_506}, {&g_506}, {&g_506}, {&g_506}}, {{&g_506}, {&g_506}, {&g_506}, {&g_506}, {&g_506}, {&g_506}, {&g_506}}, {{&g_506}, {&g_506}, {&g_506}, {&g_506}, {&g_506}, {&g_506}, {&g_506}}};
                char l_1124 = 0L;
                int *l_1126 = &g_837;
                int i, j, k;
                if ((*g_13))
                    break;
                (*l_864) = ((void*)0 != l_1090);
                (*g_217) = (*g_650);
                if ((safe_lshift_func_uint8_t_u_u(((l_1096[2][1] && (*g_321)) || ((*l_1102) = ((0L == ((!l_1096[0][1]) && ((**g_440) = ((*l_1097) = (*g_441))))) <= (l_1096[2][1] < ((*g_925) & ((*l_1101) = ((p_29 <= ((*l_1090) = (l_1098 == &g_649))) > g_378))))))), p_29)))
                {
                    return p_28;
                }
                else
                {
                    char l_1107 = 0x3AL;
                    int *l_1125[7];
                    union U0 *l_1129 = &l_1123;
                    char ***l_1131 = &g_1032[1];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1125[i] = &l_1070[4];
                    if ((((void*)0 != l_1105[0][3][0]) != ((*l_1073) = ((void*)0 == l_1106))))
                    {
                        short l_1114 = 0x1483L;
                        (*l_1077) = l_1107;
                        (*l_1077) = (safe_sub_func_int8_t_s_s(((*l_916) = ((((*l_1097) = ((*g_441) || ((safe_sub_func_uint16_t_u_u((p_25 & (safe_mod_func_uint32_t_u_u(l_1114, (*g_743)))), (l_1115[1][2] != &g_788))) > (l_1096[2][1] >= (((((**g_650) == ((**g_440) && (-4L))) >= (*p_26)) & 4294967290UL) != (*g_925)))))) <= 9UL) > (**g_924))), l_1070[4]));
                    }
                    else
                    {
                        unsigned l_1119 = 0xEFD59E9DL;
                        int *l_1121[4][6] = {{&l_1096[2][1], &l_1070[3], &g_52, &l_1070[3], &l_1096[2][1], &l_1070[0]}, {&l_1096[2][1], &l_1070[3], &g_52, &l_1070[3], &l_1096[2][1], &l_1070[0]}, {&l_1096[2][1], &l_1070[3], &g_52, &l_1070[3], &l_1096[2][1], &l_1070[0]}, {&l_1096[2][1], &l_1070[3], &g_52, &l_1070[3], &l_1096[2][1], &l_1070[0]}};
                        int *l_1122[5];
                        int i, j;
                        for (i = 0; i < 5; i++)
                            l_1122[i] = &l_796;
                        (*l_777) = l_1118[5][0][2];
                        l_1121[3][2] = l_1120;
                        l_1062 = func_45(l_1122[3], &l_811, l_1123, ((*g_1033) = l_1124));
                    }
                    for (g_600 = 2; (g_600 <= 6); g_600 += 1)
                    {
                        union U0 **l_1127 = (void*)0;
                        union U0 **l_1128 = &l_814[0][0][1];
                        char ***l_1130 = &g_1032[1];
                        l_1062 = (l_1126 = l_1125[6]);
                        l_1129 = ((*l_1128) = ((*l_779) = (void*)0));
                        if ((*g_326))
                            break;
                        (*l_1130) = (void*)0;
                    }
                    for (l_1124 = 6; (l_1124 >= 2); l_1124 -= 1)
                    {
                        (*g_217) = (**g_649);
                        (*g_217) = p_26;
                    }
                    (*l_1131) = &l_1105[5][2][0];
                }
            }
        }
    }
    (*g_217) = (**g_649);
    return p_27;
}







static const int * func_30(int * p_31, unsigned * p_32)
{
    int l_677 = 0xCEFB9CF0L;
    const int l_718 = (-6L);
    int *l_744 = &l_677;
    short l_770[7] = {(-1L), 0x4E7FL, (-1L), 0x4E7FL, (-1L), 0x4E7FL, (-1L)};
    union U0 *l_771[10][8][3] = {{{&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}}, {{&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}}, {{&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}}, {{&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}}, {{&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}}, {{&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}}, {{&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}}, {{&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}}, {{&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}}, {{&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50}}};
    union U0 **l_773[2][3][2] = {{{&l_771[5][1][2], &l_771[7][6][1]}, {&l_771[5][1][2], &l_771[7][6][1]}, {&l_771[5][1][2], &l_771[7][6][1]}}, {{&l_771[5][1][2], &l_771[7][6][1]}, {&l_771[5][1][2], &l_771[7][6][1]}, {&l_771[5][1][2], &l_771[7][6][1]}}};
    union U0 *l_774 = &g_50;
    int i, j, k;
    for (g_52 = (-29); (g_52 == (-7)); g_52++)
    {
        int l_685 = (-4L);
        union U0 **l_724[3][2] = {{&g_193[0], &g_193[0]}, {&g_193[0], &g_193[0]}, {&g_193[0], &g_193[0]}};
        int l_734 = 0L;
        int i, j;
        for (g_661 = 0; (g_661 > 8); ++g_661)
        {
            int l_678 = 0x62E310EDL;
            int l_720 = 0x0AF56AEAL;
            union U0 l_747 = {0x5702L};
            union U0 *l_772[8] = {&g_50, &l_747, &g_50, &l_747, &g_50, &l_747, &g_50, &l_747};
            int i;
            l_678 = (l_677 = (***g_649));
            for (g_249 = 0; (g_249 <= 3); g_249 += 1)
            {
                char *l_686 = &g_378;
                int l_719 = 0L;
                int i, j;
                if (g_57[g_249][g_249])
                    break;
                if ((safe_rshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s(l_677, (safe_sub_func_uint16_t_u_u(1UL, g_57[g_249][g_249])))), ((*l_686) = l_685))))
                {
                    unsigned char l_689 = 255UL;
                    int l_696 = 5L;
                    for (g_382 = 8; (g_382 != 21); g_382 = safe_add_func_uint16_t_u_u(g_382, 7))
                    {
                        l_696 = (l_689 ^ (safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(g_52, l_678)), (l_685 && ((safe_mod_func_uint16_t_u_u(((((l_685 = (*g_441)) >= (l_689 && (l_677 ^ g_57[g_249][g_249]))) <= 0x9D114A0DL) != (**g_650)), 1L)) == 0xAEC9L)))));
                        return p_32;
                    }
                    for (g_378 = (-23); (g_378 > 8); ++g_378)
                    {
                        union U0 ****l_699 = &g_340[0][0][1];
                        int l_700 = 0x3D5A7DFCL;
                        unsigned short *l_711 = &g_50.f0;
                        l_700 = (+(((((*l_699) = &g_341[4][5]) != (void*)0) ^ 1UL) < 0L));
                        l_719 = (safe_mod_func_uint8_t_u_u(((((g_573 < (l_677 = ((safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(g_233.f0, ((*l_711) = 0xA5E5L))) & 1UL), (l_700 > (safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((-1L), l_696)), l_696))))), (safe_sub_func_int8_t_s_s(1L, l_696)))), 9)) > g_249))) >= l_718) <= g_57[g_249][g_249]) < 0x516CL), (*g_120)));
                        l_677 = (((~(l_720 && (*p_32))) >= l_685) | (safe_lshift_func_int16_t_s_s(l_700, 14)));
                    }
                    for (g_378 = 1; (g_378 >= 0); g_378 -= 1)
                    {
                        union U0 ***l_723[4] = {&g_341[2][5], &g_341[2][3], &g_341[2][5], &g_341[2][3]};
                        int i;
                        l_724[1][0] = &g_193[g_378];
                    }
                }
                else
                {
                    short l_729 = 0L;
                    int *l_735 = &l_678;
                    union U0 l_740 = {0xA949L};
                    if (((*l_735) = (0x9E78L & (((l_734 = (0xEAL <= (safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(l_678, l_729)), (safe_sub_func_uint32_t_u_u(l_677, (safe_lshift_func_uint8_t_u_u(l_720, (l_718 && (l_685 = l_729)))))))))) ^ (l_678 || l_718)) && l_734))))
                    {
                        int l_738 = 0L;
                        int l_739[2][5] = {{0xB502952FL, 0xF33B6255L, 0xB502952FL, 0xF33B6255L, 0xB502952FL}, {0xB502952FL, 0xF33B6255L, 0xB502952FL, 0xF33B6255L, 0xB502952FL}};
                        int i, j;
                        l_685 = ((((l_738 = (l_720 > (safe_add_func_uint8_t_u_u(l_677, 247UL)))) > g_425) || l_734) != ((*l_735) != l_739[1][1]));
                        return p_32;
                    }
                    else
                    {
                        if ((*p_31))
                            break;
                        (*g_217) = func_45((**g_649), p_32, l_740, g_57[g_249][g_249]);
                    }
                    (*g_217) = &l_719;
                    if ((*p_31))
                        break;
                    for (l_740.f1 = 0; (l_740.f1 == 27); l_740.f1 = safe_add_func_int8_t_s_s(l_740.f1, 5))
                    {
                        (*l_735) = (*p_31);
                        if (g_57[g_249][g_249])
                            break;
                        l_744 = g_743;
                    }
                }
                l_719 = 8L;
                for (g_50.f0 = 16; (g_50.f0 <= 43); g_50.f0++)
                {
                    int *l_758 = &g_613;
                    unsigned *l_759 = (void*)0;
                    union U0 l_761 = {0x84B1L};
                    short l_769 = 0x5EBEL;
                    p_31 = func_45(func_45((*g_650), p_31, l_747, (((*l_744) | l_685) != (l_719 = (safe_rshift_func_int8_t_s_u((-1L), (safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(0xA28598C5L, ((*l_758) = ((safe_add_func_uint8_t_u_u(l_685, (safe_mod_func_int32_t_s_s((*p_31), (*g_321))))) || 1UL)))), g_14))))))), g_760, l_761, (*l_744));
                    for (g_506 = 0; (g_506 >= (-4)); --g_506)
                    {
                        int l_766 = 0x2C2DA52FL;
                        (*l_758) = ((safe_mod_func_int16_t_s_s(l_766, 0x90BAL)) ^ (safe_rshift_func_uint16_t_u_u(g_57[g_249][g_249], l_769)));
                        (*g_217) = l_758;
                        (*g_217) = l_758;
                        if ((*p_31))
                            break;
                    }
                    if ((l_719 = (l_734 & ((*l_758) >= ((-9L) <= (*l_758))))))
                    {
                        if (l_770[1])
                            break;
                    }
                    else
                    {
                        (*l_758) = ((*l_758) ^ 0xD1L);
                        l_772[2] = l_771[5][1][2];
                    }
                }
            }
        }
        l_685 = (l_677 = (*l_744));
    }
    l_774 = l_771[5][1][2];
    return p_32;
}







static unsigned * func_33(union U0 p_34, unsigned p_35, const unsigned char p_36, unsigned * p_37)
{
    int *l_511 = (void*)0;
    unsigned short *l_516 = (void*)0;
    unsigned short * const *l_515[3][7] = {{(void*)0, &l_516, &l_516, &l_516, &l_516, &l_516, &l_516}, {(void*)0, &l_516, &l_516, &l_516, &l_516, &l_516, &l_516}, {(void*)0, &l_516, &l_516, &l_516, &l_516, &l_516, &l_516}};
    union U0 l_521[10] = {{65529UL}, {65529UL}, {65533UL}, {65529UL}, {65529UL}, {65533UL}, {65529UL}, {65529UL}, {65533UL}, {65529UL}};
    unsigned char **l_530 = &g_120;
    unsigned char *** const l_529[10] = {&l_530, &l_530, (void*)0, (void*)0, &l_530, &l_530, &l_530, (void*)0, (void*)0, &l_530};
    union U0 l_538 = {0x6880L};
    unsigned l_556 = 0UL;
    union U0 * const l_575 = &g_50;
    int l_577 = 0xD658399FL;
    int l_645 = 9L;
    int i, j;
    for (g_73 = 1; (g_73 == (-30)); g_73 = safe_sub_func_int8_t_s_s(g_73, 4))
    {
        unsigned short * const l_513 = &g_50.f0;
        unsigned short * const *l_512 = &l_513;
        unsigned short * const **l_514 = &l_512;
        int *l_517 = &g_14;
        int **l_518 = (void*)0;
        int **l_519 = &g_326;
        union U0 *l_520[4][7] = {{&g_50, &g_50, &g_50, &g_50, &g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50, &g_50, &g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50, &g_50, &g_50, &g_50, &g_50}, {&g_50, &g_50, &g_50, &g_50, &g_50, &g_50, &g_50}};
        union U0 l_522 = {0x2AE5L};
        int i, j;
        for (g_52 = 0; g_52 < 10; g_52 += 1)
        {
            for (g_425 = 0; g_425 < 4; g_425 += 1)
            {
                g_235[g_52][g_425] = 3UL;
            }
        }
        l_511 = (void*)0;
        l_515[2][5] = ((*l_514) = l_512);
        (*l_519) = func_45(func_45(l_517, func_45(((*l_519) = l_511), p_37, p_34, g_397), (l_521[9] = p_34), p_36), p_37, l_522, p_34.f1);
    }
    (*g_217) = l_511;
    for (p_34.f1 = 0; (p_34.f1 > 5); p_34.f1 = safe_add_func_uint16_t_u_u(p_34.f1, 4))
    {
        int *l_525 = &g_14;
        int l_553 = 0x0411F8DBL;
        union U0 l_572 = {0x6483L};
        int l_588 = 0xD8073008L;
        unsigned l_594 = 4294967295UL;
        unsigned char l_611 = 8UL;
        unsigned char ***l_626 = &l_530;
        int ** const *l_652 = &g_176;
        short **l_671 = &g_441;
        (*g_217) = l_525;
        (*g_217) = l_511;
        for (g_506 = 0; g_506 < 10; g_506 += 1)
        {
            union U0 tmp = {0x3BEFL};
            l_521[g_506] = tmp;
        }
        if (((*g_321) = (*g_326)))
        {
            unsigned l_533 = 2UL;
            l_525 = func_45(func_45(l_511, l_511, l_538, p_36), p_37, p_34, p_36);
            if (l_533)
                continue;
        }
        else
        {
            unsigned char l_566 = 4UL;
            char l_569[6][1][6] = {{{0xA4L, (-6L), 0xA4L, 0L, 1L, 0x44L}}, {{0xA4L, (-6L), 0xA4L, 0L, 1L, 0x44L}}, {{0xA4L, (-6L), 0xA4L, 0L, 1L, 0x44L}}, {{0xA4L, (-6L), 0xA4L, 0L, 1L, 0x44L}}, {{0xA4L, (-6L), 0xA4L, 0L, 1L, 0x44L}}, {{0xA4L, (-6L), 0xA4L, 0L, 1L, 0x44L}}};
            unsigned l_570 = 4294967291UL;
            int *l_571 = &g_14;
            short l_574 = (-7L);
            unsigned l_580 = 4294967288UL;
            union U0 **l_584 = (void*)0;
            union U0 *l_612 = &l_521[9];
            int *l_672[8] = {&g_14, &g_613, &g_14, &g_613, &g_14, &g_613, &g_14, &g_613};
            int i, j, k;
            for (g_50.f1 = 2; (g_50.f1 >= 0); g_50.f1 -= 1)
            {
                int l_555 = 7L;
                union U0 *l_562 = &l_521[1];
                int *l_598 = &g_52;
                int **l_610 = &g_591;
                char *l_641 = (void*)0;
                char **l_640 = &l_641;
                char ***l_639[9];
                const short *l_643 = &l_572.f1;
                const short **l_642 = &l_643;
                int i;
                for (i = 0; i < 9; i++)
                    l_639[i] = &l_640;
                if (p_35)
                {
                    (*g_217) = l_525;
                    for (p_35 = 0; (p_35 <= 6); p_35 += 1)
                    {
                        union U0 **l_539 = &g_193[1];
                        union U0 *l_541 = &l_521[7];
                        union U0 **l_540 = &l_541;
                        int l_548 = (-1L);
                        int l_554 = 1L;
                        (*l_540) = ((*l_539) = &p_34);
                        l_554 = (safe_rshift_func_uint8_t_u_u(p_35, (safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((250UL || ((g_425 == ((l_548 = p_35) & 3L)) > ((*g_120) = (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(5UL, p_34.f1)), (*g_120)))))), p_34.f0)), l_553))));
                    }
                    if (l_555)
                        continue;
                }
                else
                {
                    union U0 *l_557[3];
                    int l_565 = 0x11EB96C8L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_557[i] = &l_521[9];
                    for (p_35 = 0; (p_35 <= 0); p_35 += 1)
                    {
                        union U0 **l_558 = &g_193[1];
                        union U0 **l_559 = (void*)0;
                        union U0 **l_560 = (void*)0;
                        union U0 **l_561[8];
                        int *l_563 = (void*)0;
                        int *l_564[9][3] = {{&l_555, &l_555, &g_14}, {&l_555, &l_555, &g_14}, {&l_555, &l_555, &g_14}, {&l_555, &l_555, &g_14}, {&l_555, &l_555, &g_14}, {&l_555, &l_555, &g_14}, {&l_555, &l_555, &g_14}, {&l_555, &l_555, &g_14}, {&l_555, &l_555, &g_14}};
                        int i, j;
                        for (i = 0; i < 8; i++)
                            l_561[i] = &g_193[0];
                        (*g_217) = func_45(l_511, &g_14, p_34, l_556);
                        l_565 = ((*g_321) = ((l_562 = (l_557[0] = &p_34)) == &p_34));
                        (*g_217) = func_45(l_525, p_37, p_34, l_566);
                    }
                }
                if (((*g_321) = (((*g_441) & (0x1FL > ((g_249 = (((safe_sub_func_uint32_t_u_u(g_83, (l_570 = l_569[4][0][4]))) ^ 0xA4L) >= 248UL)) && ((*g_120) == p_35)))) > (p_37 != l_525))))
                {
                    if (p_34.f1)
                        break;
                }
                else
                {
                    union U0 ** const l_583 = &g_193[0];
                    char *l_585 = &g_382;
                    int *l_590 = (void*)0;
                    (*g_217) = l_571;
                    for (l_555 = 0; (l_555 <= 6); l_555 += 1)
                    {
                        union U0 **l_576 = &g_193[0];
                        int i, j;
                        (*g_217) = (void*)0;
                        (*g_217) = &l_555;
                        (*g_217) = func_45(func_45(func_45(func_45(l_525, l_525, p_34, g_378), l_571, l_572, (((((*g_321) = (*g_326)) ^ (g_6 < g_573)) || (*g_120)) ^ 2UL)), p_37, p_34, g_425), p_37, (*l_562), l_574);
                        (*l_576) = l_575;
                    }
                    (*g_321) = (*g_13);
                    if (((l_577 >= ((g_249 = (safe_sub_func_int8_t_s_s((l_580 > ((!g_50.f0) == ((*l_585) = ((safe_lshift_func_uint16_t_u_s((0x3B4AL ^ p_36), 8)) < (l_583 != l_584))))), (p_34.f0 ^ (safe_add_func_int8_t_s_s(l_588, g_397)))))) | 5UL)) > p_34.f1))
                    {
                        unsigned char l_589[5][1] = {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}};
                        int **l_595 = (void*)0;
                        int **l_596 = (void*)0;
                        int **l_597[1];
                        short *l_599[5][1] = {{&l_574}, {&l_574}, {&l_574}, {&l_574}, {&l_574}};
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_597[i] = &l_511;
                        g_600 = ((*g_321) = (((l_589[3][0] || (*p_37)) || (0xC95DABFFL || ((g_73 = ((l_598 = func_45(l_525, func_45(l_590, func_45(func_45(l_511, g_591, p_34, ((safe_add_func_int32_t_s_s(((*g_120) >= 0x21L), g_73)) > l_594)), l_511, p_34, g_249), p_34, p_34.f1), p_34, g_73)) == l_511)) != l_555))) >= g_506));
                        (*g_217) = p_37;
                    }
                    else
                    {
                        unsigned char l_603 = 0xA8L;
                        (*g_321) = (!(l_603 = (((*g_321) < (0xAFDDL == p_34.f1)) || g_573)));
                    }
                }
                if (((safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((*l_598) && (*l_598)), g_506)), (*l_571))) ^ (((safe_lshift_func_int16_t_s_u((*g_441), g_249)) <= ((l_525 != ((*l_610) = l_571)) & (**g_440))) > l_611)))
                {
                    for (l_538.f0 = 0; (l_538.f0 <= 6); l_538.f0 += 1)
                    {
                        l_612 = &p_34;
                    }
                }
                else
                {
                    int l_614 = 0L;
                    if ((*l_571))
                    {
                        int *l_615 = &l_555;
                        (*g_217) = p_37;
                        (*g_321) = (p_34.f0 ^ (l_614 = (g_613 = (((p_36 ^ p_35) && (g_249 = (g_600 = 8UL))) && g_52))));
                        l_562 = &l_521[5];
                        (*g_217) = func_45(l_525, l_615, l_572, g_235[5][2]);
                    }
                    else
                    {
                        return p_37;
                    }
                    (*g_217) = p_37;
                    (*l_610) = (void*)0;
                    return &g_6;
                }
                for (l_574 = 0; (l_574 <= 0); l_574 += 1)
                {
                    int l_644 = 0L;
                    int i, j, k;
                }
            }
            for (l_580 = 0; (l_580 >= 22); l_580 = safe_add_func_int8_t_s_s(l_580, 5))
            {
                short l_648 = 0xA320L;
                int ****l_651 = &g_649;
                unsigned *l_662 = &l_570;
                int l_668 = 0xFCB840ABL;
                (*g_321) = (*l_571);
                if ((l_648 <= (((*l_651) = g_649) != l_652)))
                {
                    (*g_217) = (***l_651);
                    (*g_217) = (**g_649);
                }
                else
                {
                    for (l_574 = 0; (l_574 < (-28)); l_574--)
                    {
                        int *l_663 = &g_52;
                        l_663 = p_37;
                        (*g_217) = l_571;
                    }
                    for (g_613 = 0; (g_613 <= 3); g_613 += 1)
                    {
                        union U0 **l_666 = (void*)0;
                        union U0 **l_667 = &g_193[0];
                        (*l_667) = &p_34;
                        return p_37;
                    }
                    (*g_321) = (l_668 = ((*l_571) || (g_249 = 3UL)));
                    if ((*g_591))
                        continue;
                }
            }
            l_645 = ((((((*g_321) = 0x0B01EBDBL) == (g_425 && p_35)) & (((void*)0 == l_671) == (*p_37))) != (g_50.f0 = 1UL)) <= (((p_34.f0 <= p_34.f0) ^ 0xDC469825L) && (*l_571)));
        }
    }
    for (g_425 = 0; g_425 < 8; g_425 += 1)
    {
        for (g_73 = 0; g_73 < 5; g_73 += 1)
        {
            for (p_35 = 0; p_35 < 1; p_35 += 1)
            {
                g_218[g_425][g_73][p_35] = &l_645;
            }
        }
    }
    return &g_6;
}







static union U0 func_38(unsigned * p_39)
{
    int l_328[2][10][9] = {{{(-1L), (-1L), 0x95ED2380L, 1L, 0L, 0xC9B00F3DL, 0L, 1L, 0x95ED2380L}, {(-1L), (-1L), 0x95ED2380L, 1L, 0L, 0xC9B00F3DL, 0L, 1L, 0x95ED2380L}, {(-1L), (-1L), 0x95ED2380L, 1L, 0L, 0xC9B00F3DL, 0L, 1L, 0x95ED2380L}, {(-1L), (-1L), 0x95ED2380L, 1L, 0L, 0xC9B00F3DL, 0L, 1L, 0x95ED2380L}, {(-1L), (-1L), 0x95ED2380L, 1L, 0L, 0xC9B00F3DL, 0L, 1L, 0x95ED2380L}, {(-1L), (-1L), 0x95ED2380L, 1L, 0L, 0xC9B00F3DL, 0L, 1L, 0x95ED2380L}, {(-1L), (-1L), 0x95ED2380L, 1L, 0L, 0xC9B00F3DL, 0L, 1L, 0x95ED2380L}, {(-1L), (-1L), 0x95ED2380L, 1L, 0L, 0xC9B00F3DL, 0L, 1L, 0x95ED2380L}, {(-1L), (-1L), 0x95ED2380L, 1L, 0L, 0xC9B00F3DL, 0L, 1L, 0x95ED2380L}, {(-1L), (-1L), 0x95ED2380L, 1L, 0L, 0xC9B00F3DL, 0L, 1L, 0x95ED2380L}}, {{(-1L), (-1L), 0x95ED2380L, 1L, 0L, 0xC9B00F3DL, 0L, 1L, 0x95ED2380L}, {(-1L), (-1L), 0x95ED2380L, 1L, 0L, 0xC9B00F3DL, 0L, 1L, 0x95ED2380L}, {(-1L), (-1L), 0x95ED2380L, 1L, 0L, 0xC9B00F3DL, 0L, 1L, 0x95ED2380L}, {(-1L), (-1L), 0x95ED2380L, 1L, 0L, 0xC9B00F3DL, 0L, 1L, 0x95ED2380L}, {(-1L), (-1L), 0x95ED2380L, 1L, 0L, 0xC9B00F3DL, 0L, 1L, 0x95ED2380L}, {(-1L), (-1L), 0x95ED2380L, 1L, 0L, 0xC9B00F3DL, 0L, 1L, 0x95ED2380L}, {(-1L), (-1L), 0x95ED2380L, 1L, 0L, 0xC9B00F3DL, 0L, 1L, 0x95ED2380L}, {(-1L), (-1L), 0x95ED2380L, 1L, 0L, 0xC9B00F3DL, 0L, 1L, 0x95ED2380L}, {(-1L), (-1L), 0x95ED2380L, 1L, 0L, 0xC9B00F3DL, 0L, 1L, 0x95ED2380L}, {(-1L), (-1L), 0x95ED2380L, 1L, 0L, 0xC9B00F3DL, 0L, 1L, 0x95ED2380L}}};
    union U0 *** const l_343 = &g_341[3][0];
    unsigned **l_346 = (void*)0;
    unsigned l_348[6];
    int l_380 = 0x5083AC8DL;
    int *l_433 = (void*)0;
    short *l_439 = &g_397;
    short **l_438 = &l_439;
    union U0 l_452 = {0xF845L};
    unsigned short l_472 = 0x8381L;
    union U0 l_484[4][1][5] = {{{{1UL}, {1UL}, {0x4936L}, {1UL}, {1UL}}}, {{{1UL}, {1UL}, {0x4936L}, {1UL}, {1UL}}}, {{{1UL}, {1UL}, {0x4936L}, {1UL}, {1UL}}}, {{{1UL}, {1UL}, {0x4936L}, {1UL}, {1UL}}}};
    union U0 l_499 = {0x118AL};
    int *l_503 = &l_380;
    union U0 **l_507 = &g_193[1];
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_348[i] = 4294967286UL;
    for (g_73 = 0; (g_73 != 10); g_73 = safe_add_func_uint8_t_u_u(g_73, 3))
    {
        int **l_318[4][8] = {{&g_13, &g_13, &g_13, &g_13, &g_13, &g_13, &g_13, &g_13}, {&g_13, &g_13, &g_13, &g_13, &g_13, &g_13, &g_13, &g_13}, {&g_13, &g_13, &g_13, &g_13, &g_13, &g_13, &g_13, &g_13}, {&g_13, &g_13, &g_13, &g_13, &g_13, &g_13, &g_13, &g_13}};
        union U0 l_322 = {0x5141L};
        union U0 l_418[2][9] = {{{0xA30CL}, {65527UL}, {0xA30CL}, {65527UL}, {0xA30CL}, {65527UL}, {0xA30CL}, {65527UL}, {0xA30CL}}, {{0xA30CL}, {65527UL}, {0xA30CL}, {65527UL}, {0xA30CL}, {65527UL}, {0xA30CL}, {65527UL}, {0xA30CL}}};
        union U0 *l_481 = &l_452;
        int *l_500 = &g_14;
        int i, j;
        if (((*g_175) != l_318[1][1]))
        {
            int *l_319[1][8] = {{&g_14, &g_14, &g_52, &g_14, &g_14, &g_52, &g_14, &g_14}};
            int *l_320 = &g_52;
            unsigned char **l_324 = &g_120;
            unsigned char ***l_323 = &l_324;
            char *l_325 = &g_57[2][3];
            union U0 l_327 = {0xB6A4L};
            int i, j;
            (*g_217) = func_45(func_45(l_319[0][7], (g_326 = func_45((g_321 = l_320), l_320, l_322, ((*l_325) = (g_57[3][3] > (((*l_323) = &g_120) == &g_120))))), l_327, g_50.f0), l_319[0][7], l_327, (*l_320));
        }
        else
        {
            short l_350 = 0xF8ACL;
            int *l_366 = (void*)0;
            if ((*g_321))
                break;
            for (g_52 = 0; (g_52 >= 0); g_52 -= 1)
            {
                union U0 ****l_342 = &g_340[0][0][1];
                int l_347 = (-1L);
                short *l_349[4] = {&l_322.f1, (void*)0, &l_322.f1, (void*)0};
                int l_381[5][4][10] = {{{(-1L), (-1L), 0x9D26CC64L, 0xC3CD8B2DL, 8L, 1L, 0L, (-1L), 0xDF07A8ADL, 0x12F437F5L}, {(-1L), (-1L), 0x9D26CC64L, 0xC3CD8B2DL, 8L, 1L, 0L, (-1L), 0xDF07A8ADL, 0x12F437F5L}, {(-1L), (-1L), 0x9D26CC64L, 0xC3CD8B2DL, 8L, 1L, 0L, (-1L), 0xDF07A8ADL, 0x12F437F5L}, {(-1L), (-1L), 0x9D26CC64L, 0xC3CD8B2DL, 8L, 1L, 0L, (-1L), 0xDF07A8ADL, 0x12F437F5L}}, {{(-1L), (-1L), 0x9D26CC64L, 0xC3CD8B2DL, 8L, 1L, 0L, (-1L), 0xDF07A8ADL, 0x12F437F5L}, {(-1L), (-1L), 0x9D26CC64L, 0xC3CD8B2DL, 8L, 1L, 0L, (-1L), 0xDF07A8ADL, 0x12F437F5L}, {(-1L), (-1L), 0x9D26CC64L, 0xC3CD8B2DL, 8L, 1L, 0L, (-1L), 0xDF07A8ADL, 0x12F437F5L}, {(-1L), (-1L), 0x9D26CC64L, 0xC3CD8B2DL, 8L, 1L, 0L, (-1L), 0xDF07A8ADL, 0x12F437F5L}}, {{(-1L), (-1L), 0x9D26CC64L, 0xC3CD8B2DL, 8L, 1L, 0L, (-1L), 0xDF07A8ADL, 0x12F437F5L}, {(-1L), (-1L), 0x9D26CC64L, 0xC3CD8B2DL, 8L, 1L, 0L, (-1L), 0xDF07A8ADL, 0x12F437F5L}, {(-1L), (-1L), 0x9D26CC64L, 0xC3CD8B2DL, 8L, 1L, 0L, (-1L), 0xDF07A8ADL, 0x12F437F5L}, {(-1L), (-1L), 0x9D26CC64L, 0xC3CD8B2DL, 8L, 1L, 0L, (-1L), 0xDF07A8ADL, 0x12F437F5L}}, {{(-1L), (-1L), 0x9D26CC64L, 0xC3CD8B2DL, 8L, 1L, 0L, (-1L), 0xDF07A8ADL, 0x12F437F5L}, {(-1L), (-1L), 0x9D26CC64L, 0xC3CD8B2DL, 8L, 1L, 0L, (-1L), 0xDF07A8ADL, 0x12F437F5L}, {(-1L), (-1L), 0x9D26CC64L, 0xC3CD8B2DL, 8L, 1L, 0L, (-1L), 0xDF07A8ADL, 0x12F437F5L}, {(-1L), (-1L), 0x9D26CC64L, 0xC3CD8B2DL, 8L, 1L, 0L, (-1L), 0xDF07A8ADL, 0x12F437F5L}}, {{(-1L), (-1L), 0x9D26CC64L, 0xC3CD8B2DL, 8L, 1L, 0L, (-1L), 0xDF07A8ADL, 0x12F437F5L}, {(-1L), (-1L), 0x9D26CC64L, 0xC3CD8B2DL, 8L, 1L, 0L, (-1L), 0xDF07A8ADL, 0x12F437F5L}, {(-1L), (-1L), 0x9D26CC64L, 0xC3CD8B2DL, 8L, 1L, 0L, (-1L), 0xDF07A8ADL, 0x12F437F5L}, {(-1L), (-1L), 0x9D26CC64L, 0xC3CD8B2DL, 8L, 1L, 0L, (-1L), 0xDF07A8ADL, 0x12F437F5L}}};
                char *l_406 = (void*)0;
                char **l_405 = &l_406;
                unsigned l_411 = 4294967293UL;
                int *l_417 = &l_347;
                int i, j, k;
                l_350 = (g_57[g_52][(g_52 + 1)] && (l_328[0][2][4] && (((l_347 = ((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u(((-3L) ^ (((0xA4L > (safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u(g_57[g_52][(g_52 + 1)])), ((((*l_342) = g_340[0][0][1]) != l_343) ^ (safe_mod_func_int8_t_s_s((0x0F14L || ((l_346 == &p_39) > g_50.f1)), 7UL))))), l_347)), l_347))) || 0x4493L) | 0xB33212FAL)), 13)), l_348[0])) <= 1L)) < g_57[0][1]) || 248UL)));
                for (g_249 = 0; (g_249 <= 3); g_249 += 1)
                {
                    int l_362 = 0x2238DBBCL;
                    int i, j, k;
                    l_362 = (safe_rshift_func_int16_t_s_s(0x05E3L, (l_350 == ((safe_mod_func_uint16_t_u_u(((0x36EE461BL >= (safe_lshift_func_int16_t_s_u((safe_unary_minus_func_uint16_t_u(((safe_add_func_uint8_t_u_u((l_350 & (safe_sub_func_uint16_t_u_u((g_50.f1 > g_235[5][2]), g_14))), g_235[5][2])) & (*p_39)))), l_350))) != 4294967293UL), l_328[0][2][4])) > g_14))));
                }
                if ((((l_350 < g_235[9][1]) | (*p_39)) != ((g_50.f1 = (l_328[0][2][4] | (safe_unary_minus_func_uint16_t_u((safe_rshift_func_int8_t_s_u(((*g_120) < g_57[g_52][(g_52 + 1)]), (l_348[0] == l_350))))))) | (g_52 >= g_57[g_52][(g_52 + 1)]))))
                {
                    unsigned short *l_367[4][7] = {{&l_322.f0, &l_322.f0, &l_322.f0, &l_322.f0, &l_322.f0, &l_322.f0, &l_322.f0}, {&l_322.f0, &l_322.f0, &l_322.f0, &l_322.f0, &l_322.f0, &l_322.f0, &l_322.f0}, {&l_322.f0, &l_322.f0, &l_322.f0, &l_322.f0, &l_322.f0, &l_322.f0, &l_322.f0}, {&l_322.f0, &l_322.f0, &l_322.f0, &l_322.f0, &l_322.f0, &l_322.f0, &l_322.f0}};
                    int l_368 = 1L;
                    int l_376 = 0xF95C6FD6L;
                    char *l_377[6][5] = {{&g_57[0][2], &g_378, &g_57[3][3], &g_57[g_52][g_52], &g_57[g_52][g_52]}, {&g_57[0][2], &g_378, &g_57[3][3], &g_57[g_52][g_52], &g_57[g_52][g_52]}, {&g_57[0][2], &g_378, &g_57[3][3], &g_57[g_52][g_52], &g_57[g_52][g_52]}, {&g_57[0][2], &g_378, &g_57[3][3], &g_57[g_52][g_52], &g_57[g_52][g_52]}, {&g_57[0][2], &g_378, &g_57[3][3], &g_57[g_52][g_52], &g_57[g_52][g_52]}, {&g_57[0][2], &g_378, &g_57[3][3], &g_57[g_52][g_52], &g_57[g_52][g_52]}};
                    int l_379[7][5] = {{0xC849F49CL, 0xC15D9367L, 0x302B15B3L, 0x302B15B3L, 0xC15D9367L}, {0xC849F49CL, 0xC15D9367L, 0x302B15B3L, 0x302B15B3L, 0xC15D9367L}, {0xC849F49CL, 0xC15D9367L, 0x302B15B3L, 0x302B15B3L, 0xC15D9367L}, {0xC849F49CL, 0xC15D9367L, 0x302B15B3L, 0x302B15B3L, 0xC15D9367L}, {0xC849F49CL, 0xC15D9367L, 0x302B15B3L, 0x302B15B3L, 0xC15D9367L}, {0xC849F49CL, 0xC15D9367L, 0x302B15B3L, 0x302B15B3L, 0xC15D9367L}, {0xC849F49CL, 0xC15D9367L, 0x302B15B3L, 0x302B15B3L, 0xC15D9367L}};
                    int i, j;
                    (*g_217) = l_366;
                    l_381[4][0][1] = ((l_368 = l_350) < (safe_unary_minus_func_int8_t_s((safe_rshift_func_int16_t_s_u((l_380 = (l_376 = (safe_lshift_func_int16_t_s_s((g_249 < ((-8L) | (g_57[2][2] & (safe_sub_func_int32_t_s_s(((l_347 = (*g_321)) || l_376), (~0x3CC4FAD9L)))))), ((l_379[1][1] = l_348[0]) ^ 0x60L))))), 5)))));
                    if (l_328[0][2][4])
                        continue;
                }
                else
                {
                    int *l_383 = &l_381[1][2][6];
                    union U0 l_410 = {0xCD71L};
                    if ((g_382 = ((void*)0 == l_342)))
                    {
                        int *l_384 = &g_14;
                        (*g_217) = (void*)0;
                        (*g_217) = func_45(l_383, l_384, l_322, ((*l_383) = 5L));
                        if ((*g_13))
                            break;
                    }
                    else
                    {
                        unsigned char l_398 = 0xD9L;
                        (*l_383) = 0x24FE2DF7L;
                        if ((*g_326))
                            break;
                        (*g_217) = p_39;
                        (*l_383) = ((safe_lshift_func_uint8_t_u_u(((l_328[0][2][4] && (((safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(0xD1L, g_233.f1)), (safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u(0x4BL, 1UL)), (!g_14))), (*l_383))))) && g_50.f1) > 1L)) != g_397), 4)) > l_398);
                    }
                    if (l_328[0][2][4])
                    {
                        union U0 **l_403 = &g_193[0];
                        l_366 = func_45(p_39, l_366, l_322, (safe_add_func_uint8_t_u_u(((*g_120) = ((*g_120) ^ (safe_mod_func_int8_t_s_s(l_350, g_57[g_52][(g_52 + 1)])))), (l_328[0][2][4] >= l_328[0][2][4]))));
                        (*l_403) = &l_322;
                    }
                    else
                    {
                        int ** const *l_404 = &g_176;
                        char ***l_407 = &l_405;
                        (*l_383) = (l_404 == (void*)0);
                        (*g_217) = p_39;
                        (*l_407) = l_405;
                    }
                    for (g_249 = 0; (g_249 <= 0); g_249 += 1)
                    {
                        short l_408[4][2][4] = {{{1L, 0xE5A2L, 0L, 0xE5A2L}, {1L, 0xE5A2L, 0L, 0xE5A2L}}, {{1L, 0xE5A2L, 0L, 0xE5A2L}, {1L, 0xE5A2L, 0L, 0xE5A2L}}, {{1L, 0xE5A2L, 0L, 0xE5A2L}, {1L, 0xE5A2L, 0L, 0xE5A2L}}, {{1L, 0xE5A2L, 0L, 0xE5A2L}, {1L, 0xE5A2L, 0L, 0xE5A2L}}};
                        int *l_409[9] = {&g_14, &g_14, &l_381[4][0][1], &g_14, &g_14, &l_381[4][0][1], &g_14, &g_14, &l_381[4][0][1]};
                        int *l_416 = &g_14;
                        char *l_419 = (void*)0;
                        char *l_420[7] = {&g_57[0][1], &g_57[0][1], &g_57[1][3], &g_57[0][1], &g_57[0][1], &g_57[1][3], &g_57[0][1]};
                        int i, j, k;
                        (*l_383) = l_408[1][0][0];
                        g_218[g_249][(g_249 + 1)][g_52] = func_45((l_409[0] = (void*)0), (l_366 = p_39), l_410, (l_411 & (+((safe_sub_func_uint8_t_u_u(((*g_120) = l_350), (safe_lshift_func_int16_t_s_u(g_14, 10)))) > g_57[2][2]))));
                        (*g_217) = func_45((l_409[0] = l_416), func_45(l_366, (l_417 = p_39), (l_322 = l_410), g_233.f0), l_418[0][6], (g_382 = (l_348[0] < (*p_39))));
                    }
                }
            }
            if (l_328[0][1][0])
                break;
        }
    }
    (*l_507) = (void*)0;
    return l_484[3][0][4];
}







static unsigned * func_40(unsigned * p_41, char p_42, unsigned char p_43, int * p_44)
{
    int *l_284 = &g_14;
    union U0 l_285[8] = {{1UL}, {0xCBB9L}, {1UL}, {0xCBB9L}, {1UL}, {0xCBB9L}, {1UL}, {0xCBB9L}};
    union U0 l_286[2] = {{0x1703L}, {0x1703L}};
    const short l_287 = 0x75C5L;
    int l_289[3][7][8] = {{{2L, 0x0767012BL, 0L, 0x48C4EDC7L, 0x4E809F10L, 3L, 1L, 0xA2B6602EL}, {2L, 0x0767012BL, 0L, 0x48C4EDC7L, 0x4E809F10L, 3L, 1L, 0xA2B6602EL}, {2L, 0x0767012BL, 0L, 0x48C4EDC7L, 0x4E809F10L, 3L, 1L, 0xA2B6602EL}, {2L, 0x0767012BL, 0L, 0x48C4EDC7L, 0x4E809F10L, 3L, 1L, 0xA2B6602EL}, {2L, 0x0767012BL, 0L, 0x48C4EDC7L, 0x4E809F10L, 3L, 1L, 0xA2B6602EL}, {2L, 0x0767012BL, 0L, 0x48C4EDC7L, 0x4E809F10L, 3L, 1L, 0xA2B6602EL}, {2L, 0x0767012BL, 0L, 0x48C4EDC7L, 0x4E809F10L, 3L, 1L, 0xA2B6602EL}}, {{2L, 0x0767012BL, 0L, 0x48C4EDC7L, 0x4E809F10L, 3L, 1L, 0xA2B6602EL}, {2L, 0x0767012BL, 0L, 0x48C4EDC7L, 0x4E809F10L, 3L, 1L, 0xA2B6602EL}, {2L, 0x0767012BL, 0L, 0x48C4EDC7L, 0x4E809F10L, 3L, 1L, 0xA2B6602EL}, {2L, 0x0767012BL, 0L, 0x48C4EDC7L, 0x4E809F10L, 3L, 1L, 0xA2B6602EL}, {2L, 0x0767012BL, 0L, 0x48C4EDC7L, 0x4E809F10L, 3L, 1L, 0xA2B6602EL}, {2L, 0x0767012BL, 0L, 0x48C4EDC7L, 0x4E809F10L, 3L, 1L, 0xA2B6602EL}, {2L, 0x0767012BL, 0L, 0x48C4EDC7L, 0x4E809F10L, 3L, 1L, 0xA2B6602EL}}, {{2L, 0x0767012BL, 0L, 0x48C4EDC7L, 0x4E809F10L, 3L, 1L, 0xA2B6602EL}, {2L, 0x0767012BL, 0L, 0x48C4EDC7L, 0x4E809F10L, 3L, 1L, 0xA2B6602EL}, {2L, 0x0767012BL, 0L, 0x48C4EDC7L, 0x4E809F10L, 3L, 1L, 0xA2B6602EL}, {2L, 0x0767012BL, 0L, 0x48C4EDC7L, 0x4E809F10L, 3L, 1L, 0xA2B6602EL}, {2L, 0x0767012BL, 0L, 0x48C4EDC7L, 0x4E809F10L, 3L, 1L, 0xA2B6602EL}, {2L, 0x0767012BL, 0L, 0x48C4EDC7L, 0x4E809F10L, 3L, 1L, 0xA2B6602EL}, {2L, 0x0767012BL, 0L, 0x48C4EDC7L, 0x4E809F10L, 3L, 1L, 0xA2B6602EL}}};
    unsigned short l_300[4] = {0x6008L, 5UL, 0x6008L, 5UL};
    union U0 **l_315 = &g_193[0];
    int i, j, k;
    (*g_217) = func_45(p_41, func_45(func_45(l_284, func_45(p_41, func_45(p_41, p_41, l_285[4], (*l_284)), l_285[0], p_43), l_286[1], g_249), l_284, l_286[1], g_233.f0), l_285[4], g_235[5][2]);
    if ((l_287 <= (*l_284)))
    {
        const unsigned l_288 = 5UL;
        const short *l_293 = &l_287;
        const short **l_292 = &l_293;
        const short **l_294 = &l_293;
        int *l_297 = &l_289[1][1][6];
        l_289[1][0][3] = l_288;
        for (g_249 = 0; (g_249 <= 7); g_249 += 1)
        {
            unsigned char l_290 = 0UL;
            unsigned *l_291 = &g_6;
            if (l_290)
                break;
            for (p_43 = 1; (p_43 <= 7); p_43 += 1)
            {
                return l_291;
            }
        }
        l_294 = l_292;
        (*l_297) = (safe_rshift_func_uint16_t_u_s((l_288 == l_288), 7));
    }
    else
    {
        int l_306 = 0x0743BC17L;
        short *l_309 = &g_73;
        unsigned short *l_312 = &l_285[4].f0;
        for (g_73 = 0; (g_73 <= (-6)); g_73--)
        {
            short l_301 = 5L;
            l_301 = (p_42 && l_300[1]);
            (*g_217) = (*g_217);
        }
        l_289[1][0][3] = (g_52 = (safe_rshift_func_int16_t_s_s((g_50.f1 = (((safe_mod_func_uint32_t_u_u(l_306, (safe_sub_func_int32_t_s_s((((*l_309) = g_50.f0) <= (0xEDDC00BDL & (*g_13))), l_306)))) == ((*l_312) = (!(safe_rshift_func_int8_t_s_u(l_306, 2))))) && ((((safe_add_func_uint16_t_u_u(l_306, ((g_233.f1 | (*p_41)) < (-10L)))) != 250UL) >= 0xFD7BL) == p_43))), l_306)));
    }
    (*l_315) = (void*)0;
    (*g_217) = &l_289[0][1][0];
    return p_41;
}







static unsigned * func_45(int * p_46, int * p_47, union U0 p_48, char p_49)
{
    int *l_51 = &g_52;
    int *l_54 = &g_14;
    int **l_53 = &l_54;
    int *l_56 = &g_52;
    int **l_55 = &l_56;
    short *l_141 = &g_73;
    short **l_140 = &l_141;
    int l_145 = 0L;
    unsigned l_153 = 0x3A88FD38L;
    union U0 *l_205[5] = {&g_50, &g_50, &g_50, &g_50, &g_50};
    unsigned l_215 = 4294967287UL;
    int i;
    (*l_55) = ((*l_53) = (l_51 = &g_14));
    for (p_48.f1 = 0; (p_48.f1 <= 3); p_48.f1 += 1)
    {
        int *l_66 = &g_52;
        int l_121 = (-3L);
        int **l_132[2];
        unsigned char l_139 = 0xCBL;
        unsigned short *l_158 = &g_50.f0;
        char l_159 = 1L;
        int ** const l_178 = (void*)0;
        int ** const *l_177 = &l_178;
        short l_191 = 1L;
        const union U0 *l_232 = &g_233;
        unsigned *l_251 = &g_6;
        int i;
        for (i = 0; i < 2; i++)
            l_132[i] = &l_56;
    }
    return p_46;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_23[i][j][k], "g_23[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_50.f0, "g_50.f0", print_hash_value);
    transparent_crc(g_50.f1, "g_50.f1", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_57[i][j], "g_57[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_233.f0, "g_233.f0", print_hash_value);
    transparent_crc(g_233.f1, "g_233.f1", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_235[i][j], "g_235[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_382, "g_382", print_hash_value);
    transparent_crc(g_397, "g_397", print_hash_value);
    transparent_crc(g_425, "g_425", print_hash_value);
    transparent_crc(g_506, "g_506", print_hash_value);
    transparent_crc(g_573, "g_573", print_hash_value);
    transparent_crc(g_600, "g_600", print_hash_value);
    transparent_crc(g_613, "g_613", print_hash_value);
    transparent_crc(g_661, "g_661", print_hash_value);
    transparent_crc(g_837, "g_837", print_hash_value);
    transparent_crc(g_986, "g_986", print_hash_value);
    transparent_crc(g_1008, "g_1008", print_hash_value);
    transparent_crc(g_1147, "g_1147", print_hash_value);
    transparent_crc(g_1161, "g_1161", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
