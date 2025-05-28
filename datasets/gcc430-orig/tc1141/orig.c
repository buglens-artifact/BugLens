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
   unsigned char f1;
   int f2;
   char f3;
   const int f4;
   char f5;
};


static unsigned char g_2 = 0x3FL;
static int g_65 = 0x1D90BCC9L;
static int g_71[6] = {0x82859701L, 0x82859701L, 0xF470B9C4L, 0x82859701L, 0x82859701L, 0xF470B9C4L};
static int g_74 = 0xC6149AF4L;
static int **g_75 = (void*)0;
static int g_85 = 0x0E7A3683L;
static struct S0 g_86 = {0x4BL,246UL,-1L,0xFBL,0L,-7L};
static struct S0 g_151[2] = {{0x0EL,0x59L,0xF55FBD20L,-1L,0x5193B0A3L,-1L}, {0x0EL,0x59L,0xF55FBD20L,-1L,0x5193B0A3L,-1L}};
static struct S0 *g_150 = &g_151[1];
static short g_208 = 0xDA87L;
static struct S0 g_221[5][3] = {{{250UL,1UL,0x298BA18FL,-1L,0L,0x0EL}, {255UL,0UL,1L,0x18L,0xCB46D81FL,1L}, {1UL,0UL,0x6BF2B0ECL,-1L,0L,0x04L}}, {{250UL,1UL,0x298BA18FL,-1L,0L,0x0EL}, {255UL,0UL,1L,0x18L,0xCB46D81FL,1L}, {1UL,0UL,0x6BF2B0ECL,-1L,0L,0x04L}}, {{250UL,1UL,0x298BA18FL,-1L,0L,0x0EL}, {255UL,0UL,1L,0x18L,0xCB46D81FL,1L}, {1UL,0UL,0x6BF2B0ECL,-1L,0L,0x04L}}, {{250UL,1UL,0x298BA18FL,-1L,0L,0x0EL}, {255UL,0UL,1L,0x18L,0xCB46D81FL,1L}, {1UL,0UL,0x6BF2B0ECL,-1L,0L,0x04L}}, {{250UL,1UL,0x298BA18FL,-1L,0L,0x0EL}, {255UL,0UL,1L,0x18L,0xCB46D81FL,1L}, {1UL,0UL,0x6BF2B0ECL,-1L,0L,0x04L}}};
static struct S0 ** const g_289 = &g_150;
static struct S0 ** const *g_288 = &g_289;
static unsigned g_386[9][6] = {{0x1B7B4BF7L, 4294967295UL, 0x4D6FB67AL, 4294967288UL, 0x4D6FB67AL, 4294967295UL}, {0x1B7B4BF7L, 4294967295UL, 0x4D6FB67AL, 4294967288UL, 0x4D6FB67AL, 4294967295UL}, {0x1B7B4BF7L, 4294967295UL, 0x4D6FB67AL, 4294967288UL, 0x4D6FB67AL, 4294967295UL}, {0x1B7B4BF7L, 4294967295UL, 0x4D6FB67AL, 4294967288UL, 0x4D6FB67AL, 4294967295UL}, {0x1B7B4BF7L, 4294967295UL, 0x4D6FB67AL, 4294967288UL, 0x4D6FB67AL, 4294967295UL}, {0x1B7B4BF7L, 4294967295UL, 0x4D6FB67AL, 4294967288UL, 0x4D6FB67AL, 4294967295UL}, {0x1B7B4BF7L, 4294967295UL, 0x4D6FB67AL, 4294967288UL, 0x4D6FB67AL, 4294967295UL}, {0x1B7B4BF7L, 4294967295UL, 0x4D6FB67AL, 4294967288UL, 0x4D6FB67AL, 4294967295UL}, {0x1B7B4BF7L, 4294967295UL, 0x4D6FB67AL, 4294967288UL, 0x4D6FB67AL, 4294967295UL}};
static unsigned short g_389[9] = {0x5F02L, 0x5F02L, 5UL, 0x5F02L, 0x5F02L, 5UL, 0x5F02L, 0x5F02L, 5UL};
static int *g_461 = &g_71[4];
static int g_584 = (-1L);
static int *g_646 = &g_584;



static int func_1(void);
static short func_4(char p_5, unsigned short p_6, unsigned char p_7, int p_8, unsigned short p_9);
static int func_13(const unsigned p_14, unsigned p_15, unsigned p_16, struct S0 p_17, char p_18);
static short func_22(char p_23, unsigned p_24);
static char func_25(unsigned p_26, int p_27, int p_28);
static unsigned char func_32(char p_33);
static int func_40(const char p_41, unsigned p_42, short p_43);
static int func_46(char p_47, const unsigned p_48);
static const int func_55(unsigned char p_56, unsigned p_57, char p_58, unsigned char p_59);
static int * func_62(int * const p_63);
static int func_1(void)
{
    char l_3[3][2] = {{1L, 0x3EL}, {1L, 0x3EL}, {1L, 0x3EL}};
    int l_10 = (-10L);
    struct S0 l_19 = {8UL,5UL,1L,0x5DL,1L,-1L};
    int l_594[2][1][4] = {{{(-9L), 1L, (-9L), 1L}}, {{(-9L), 1L, (-9L), 1L}}};
    int *l_610[6][9][4] = {{{&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}}, {{&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}}, {{&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}}, {{&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}}, {{&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}}, {{&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}, {&g_74, &g_71[4], &l_594[0][0][3], &g_74}}};
    struct S0 *l_621 = (void*)0;
    unsigned l_645 = 0UL;
    int i, j, k;
    if ((((g_2 || l_3[1][1]) || 0x1DA622A1L) == func_4(l_10, (l_3[2][0] < l_10), (safe_add_func_int32_t_s_s(0x1509CF13L, func_13((((((((g_2 >= 0x42L) , 0xEBDA1846L) && 0L) <= l_10) , 3L) <= l_3[1][1]) && l_10), g_2, l_10, l_19, g_2))), g_86.f4, l_594[0][0][3])))
    {
        int **l_597 = &g_461;
        (*l_597) = (void*)0;

        ;
        (*l_597) = &g_65;

        ;
    }
    else
    {
        int **l_600 = &g_461;
        unsigned short l_626 = 65535UL;
        int **l_635 = &g_461;
        char l_636 = 0xE5L;
        struct S0 l_641 = {0xB6L,251UL,0xC3E595D0L,0x67L,9L,-3L};
        const unsigned char l_644 = 1UL;
        for (l_19.f1 = 0; (l_19.f1 <= 8); l_19.f1 += 1)
        {
            int *l_609 = &g_584;
            int *l_612 = &g_85;
            int i;
            if (g_389[l_19.f1])
            {
                for (l_19.f3 = 0; (l_19.f3 <= 8); l_19.f3 += 1)
                {
                    int l_606 = 0xBED2BF59L;
                    for (g_86.f1 = 0; (g_86.f1 <= 8); g_86.f1 += 1)
                    {
                        unsigned short l_605 = 0x9611L;
                        g_65 = ((safe_sub_func_int32_t_s_s((l_10 <= (l_600 != (((g_584 < (((safe_div_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((l_605 >= ((l_606 != (g_85 , (((safe_sub_func_int16_t_s_s(g_74, g_389[l_19.f1])) || 1UL) < 1UL))) , 65534UL)), g_221[0][2].f2)), g_85)) , g_221[0][2].f1) != 8L)) > g_86.f4) , &g_461))), 0xA854A081L)) ^ l_19.f2);
                        (*l_600) = (l_19 , l_609);

                        ;
                        l_610[5][2][3] = &g_74;
                        (*l_600) = &g_74;

                        ;
                    }
                    for (g_86.f5 = 8; (g_86.f5 >= 0); g_86.f5 -= 1)
                    {
                        char l_611 = 0x1BL;
                        (*l_609) = l_606;
                        if (l_611)
                            break;
                    }
                    (*l_600) = &g_71[4];

                    ;
                    for (l_19.f5 = 0; (l_19.f5 <= 0); l_19.f5 += 1)
                    {
                        int i, j, k;
                        (*l_600) = &l_594[(l_19.f5 + 1)][l_19.f5][(l_19.f5 + 2)];

                        ;
                    }

                    ;
                }


                (*l_600) = l_612;

                ;
            }
            else
            {
                int *l_617 = (void*)0;
                int l_625 = 0x4E481184L;
                (*l_600) = l_609;

                ;
                for (l_10 = 0; (l_10 <= 0); l_10 += 1)
                {
                    char l_618[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_618[i] = 0L;
                    (**l_600) = ((safe_sub_func_uint32_t_u_u(((0x62L ^ (safe_mod_func_int16_t_s_s(((void*)0 != l_617), (**l_600)))) == l_618[1]), ((3L & (*g_461)) ^ (safe_sub_func_int8_t_s_s((g_221[0][2].f1 , (((**l_600) | (**l_600)) ^ (*l_612))), g_386[1][4]))))) >= g_74);
                    for (g_584 = 0; (g_584 >= 0); g_584 -= 1)
                    {
                        int i, j, k;
                        l_594[l_10][l_10][(g_584 + 1)] = g_389[(l_10 + 7)];
                        return g_151[1].f2;
                    }
                    (*l_600) = &g_71[4];

                    ;
                    for (l_19.f0 = 0; (l_19.f0 <= 0); l_19.f0 += 1)
                    {
                        int l_624 = 0x4C7D4441L;
                        int i, j, k;
                        (*g_289) = (**g_288);
                        l_594[l_10][l_19.f0][(l_19.f0 + 1)] = (((**g_288) != (g_221[0][2].f0 , l_621)) , (*g_461));
                        (*l_600) = &l_594[l_10][l_19.f0][(l_19.f0 + 1)];

                        ;
                        return l_626;


                    }
                }

                ;
                if ((*g_461))
                    break;
                (*g_461) = (*l_609);
            }

            ;
            (*g_461) = (*g_461);
            (*l_612) = (**l_600);
        }


        for (g_584 = 3; (g_584 < 19); g_584 = safe_add_func_int8_t_s_s(g_584, 8))
        {
            unsigned l_629 = 6UL;
            if (l_629)
                break;
            for (g_65 = 0; (g_65 != 10); ++g_65)
            {
                int *l_632 = &l_594[1][0][2];
                l_632 = &g_74;

                ;
            }
        }
        l_645 = ((safe_sub_func_int8_t_s_s((+(0xDEC9L != ((g_86.f4 , g_151[1].f1) , ((void*)0 != l_635)))), l_636)) <= ((safe_div_func_uint8_t_u_u(g_389[2], (safe_add_func_uint32_t_u_u((l_641 , (safe_lshift_func_int8_t_s_s(l_644, g_221[0][2].f2))), g_86.f1)))) || g_208));
        (*l_635) = g_646;

        ;
    }


    ;
    ;
    for (g_86.f0 = 21; (g_86.f0 >= 12); --g_86.f0)
    {
        if ((*g_646))
            break;
    }
    (*g_461) = 0x4A51E087L;
    return g_221[0][2].f0;
}







static short func_4(char p_5, unsigned short p_6, unsigned char p_7, int p_8, unsigned short p_9)
{
    const int *l_596 = &g_151[1].f4;
    const int **l_595 = &l_596;
    (*l_595) = (void*)0;

    ;
    return g_584;
}







static int func_13(const unsigned p_14, unsigned p_15, unsigned p_16, struct S0 p_17, char p_18)
{
    unsigned l_29 = 0x5CECCE00L;
    int *l_459[7];
    struct S0 * const * const l_476 = &g_150;
    char l_489 = 9L;
    int l_534 = 0x9F3CA17CL;
    int l_553 = 0x41A2144CL;
    int i;
    for (i = 0; i < 7; i++)
        l_459[i] = &g_74;
    if (((safe_lshift_func_uint16_t_u_u((func_22(func_25((((l_29 <= 0L) | l_29) , (l_29 && (safe_rshift_func_int8_t_s_s((l_29 <= func_32(((safe_div_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s(p_17.f5, (safe_sub_func_int32_t_s_s(func_40(p_17.f5, g_2, (p_17.f5 < p_16)), 0x8DFCE249L)))) != 0x18L), g_2)) != (-6L)))), 2)))), l_29, p_18), g_386[2][3]) ^ g_221[0][2].f3), p_15)) & g_151[1].f1))
    {
        int **l_460[5] = {&l_459[1], &l_459[4], &l_459[1], &l_459[4], &l_459[1]};
        int i;
        g_461 = l_459[6];

        ;
        l_459[3] = l_459[6];
    }
    else
    {
        short l_462 = 0L;
        int * const l_470[1][5] = {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}};
        int ***l_485 = &g_75;
        int l_487 = 0x375311FAL;
        char l_490[6][1] = {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}};
        struct S0 *l_566[3];
        unsigned l_574 = 2UL;
        int i, j;
        for (i = 0; i < 3; i++)
            l_566[i] = &g_221[3][0];
        if (((((void*)0 == (*g_288)) , l_462) >= (safe_sub_func_uint16_t_u_u(((((l_462 , p_17.f3) , l_462) > l_462) & 0x0FL), p_15))))
        {
            char l_469 = 0x94L;
            int ***l_486 = &g_75;
            short l_488 = 0L;
            int l_491 = 0xE3B0A91AL;
            if ((safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(l_469, g_151[1].f1)), 0)))
            {
                return p_17.f3;
            }
            else
            {
                int **l_471 = &l_459[6];
                (*l_471) = l_470[0][0];


                (*g_461) = (((safe_sub_func_uint16_t_u_u((7UL != (safe_rshift_func_int16_t_s_u((+g_221[0][2].f5), 6))), (l_476 == (p_17.f1 , (*g_288))))) ^ (((safe_sub_func_uint16_t_u_u(g_151[1].f5, (((&g_289 == (void*)0) != g_389[1]) , 0x2C3DL))) > g_221[0][2].f2) && p_14)) != g_71[2]);
            }


            (*g_461) = (p_15 , l_490[5][0]);
            l_491 = p_17.f0;
        }
        else
        {
            unsigned short l_494[7] = {0xBD07L, 0xBD07L, 0xD53AL, 0xBD07L, 0xBD07L, 0xD53AL, 0xBD07L};
            int l_497 = 1L;
            unsigned char l_569 = 0x65L;
            int i;
            for (p_17.f1 = 0; (p_17.f1 <= 3); p_17.f1 = safe_add_func_uint16_t_u_u(p_17.f1, 1))
            {
                return (*g_461);
            }
            l_497 = (g_221[0][2].f2 <= (l_494[4] ^ (safe_lshift_func_int8_t_s_u((-1L), 2))));
            for (l_497 = 10; (l_497 < (-30)); l_497--)
            {
                unsigned l_500 = 3UL;
                int *l_550 = &g_71[5];
                (*g_461) = l_500;
                (*g_461) = l_500;
                if ((*g_461))
                {
                    int l_505 = 0x8CA61284L;
                    for (p_17.f5 = 0; (p_17.f5 >= 11); p_17.f5 = safe_add_func_int32_t_s_s(p_17.f5, 3))
                    {
                        return l_497;


                    }
                    for (p_17.f5 = 0; (p_17.f5 == (-14)); p_17.f5 = safe_sub_func_int32_t_s_s(p_17.f5, 5))
                    {
                        int l_506 = 0xE6488AB8L;
                        l_505 = p_14;
                        l_506 = p_17.f1;
                    }
                    for (p_17.f1 = 22; (p_17.f1 <= 43); p_17.f1 = safe_add_func_int8_t_s_s(p_17.f1, 2))
                    {
                        unsigned char l_509 = 251UL;
                        return l_509;


                    }
                }
                else
                {
                    const unsigned char l_524[10] = {0xCDL, 1UL, 9UL, 9UL, 1UL, 0xCDL, 1UL, 9UL, 9UL, 1UL};
                    int ** const l_529 = &g_461;
                    int * const l_535 = &l_534;
                    int i;
                    (*g_461) = ((-1L) & (g_71[4] & (((safe_add_func_uint16_t_u_u(p_15, (safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_s(func_40((((g_208 | (safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s((g_151[1].f5 || (*g_461)), ((safe_div_func_uint8_t_u_u(func_40(l_524[4], (safe_div_func_uint32_t_u_u(0x93FD238DL, p_17.f1)), l_524[0]), l_497)) & p_14))), l_500))) & p_15) , 1L), g_389[2], g_221[0][2].f1), 9)) | p_17.f2), p_14)))) >= p_15) != 4294967295UL)));
                    if (func_25((safe_rshift_func_uint16_t_u_s(g_86.f1, ((&g_461 == l_529) ^ ((+(safe_add_func_uint8_t_u_u(0xA6L, 250UL))) == 65535UL)))), p_18, ((safe_sub_func_uint8_t_u_u(g_221[0][2].f4, 9L)) , l_534)))
                    {
                        int **l_536[9][8] = {{&g_461, (void*)0, &l_459[6], &l_459[6], &g_461, &l_459[4], &l_459[6], &l_459[4]}, {&g_461, (void*)0, &l_459[6], &l_459[6], &g_461, &l_459[4], &l_459[6], &l_459[4]}, {&g_461, (void*)0, &l_459[6], &l_459[6], &g_461, &l_459[4], &l_459[6], &l_459[4]}, {&g_461, (void*)0, &l_459[6], &l_459[6], &g_461, &l_459[4], &l_459[6], &l_459[4]}, {&g_461, (void*)0, &l_459[6], &l_459[6], &g_461, &l_459[4], &l_459[6], &l_459[4]}, {&g_461, (void*)0, &l_459[6], &l_459[6], &g_461, &l_459[4], &l_459[6], &l_459[4]}, {&g_461, (void*)0, &l_459[6], &l_459[6], &g_461, &l_459[4], &l_459[6], &l_459[4]}, {&g_461, (void*)0, &l_459[6], &l_459[6], &g_461, &l_459[4], &l_459[6], &l_459[4]}, {&g_461, (void*)0, &l_459[6], &l_459[6], &g_461, &l_459[4], &l_459[6], &l_459[4]}};
                        int **l_537 = &g_461;
                        int i, j;
                        (*l_537) = l_535;

                        ;
                    }
                    else
                    {
                        (**l_529) = 0x7D4FD74DL;
                        (*l_535) = (safe_rshift_func_int8_t_s_u(((((void*)0 != &p_17) , (safe_add_func_int32_t_s_s(p_15, ((safe_lshift_func_uint16_t_u_u(((p_17 , (*g_150)) , (((safe_div_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(g_151[1].f2, 65529UL)), g_221[0][2].f0)) , &l_535) != (void*)0)), g_71[4])) ^ 0x434BL)))) | p_17.f2), p_17.f4));
                        if (p_15)
                            continue;
                    }

                    ;
                    (**l_529) = ((safe_add_func_uint32_t_u_u((l_550 != ((p_17.f4 , (p_17.f0 >= l_497)) , l_550)), g_221[0][2].f4)) > (safe_mod_func_uint16_t_u_u(((**l_476) , l_553), (safe_div_func_int32_t_s_s((*l_550), (*l_550))))));
                    for (p_16 = 0; p_16 < 6; p_16 += 1)
                    {
                        for (g_86.f3 = 0; g_86.f3 < 1; g_86.f3 += 1)
                        {
                            l_490[p_16][g_86.f3] = 0x22L;
                        }
                    }
                }
                if ((safe_lshift_func_int16_t_s_u((safe_div_func_int32_t_s_s(((**g_288) == ((safe_div_func_int8_t_s_s((*l_550), (func_40((p_17.f4 == ((g_221[0][2].f2 && (l_497 == ((**g_288) == (p_16 , (void*)0)))) & (safe_sub_func_int32_t_s_s(0x893BE504L, 0x944E9261L)))), g_221[0][2].f3, p_17.f0) , p_17.f5))) , l_566[1])), g_389[2])), p_14)))
                {
                    int *l_570 = &l_487;
                    if ((safe_add_func_int16_t_s_s(g_151[1].f1, ((l_569 , l_566[0]) == &p_17))))
                    {
                        (*g_289) = (*g_289);
                    }
                    else
                    {
                        int **l_571 = &l_459[4];
                        (*l_571) = l_570;
                        (*l_550) = (safe_lshift_func_int16_t_s_u((-1L), 0));
                    }
                }
                else
                {
                    return p_16;


                }
            }


            ;
            (*g_461) = l_497;
        }


        ;
        l_459[5] = ((g_86.f1 | (func_32(p_17.f3) == l_574)) , &g_65);


        (*g_461) = func_40((&l_553 == &l_534), g_151[1].f0, g_71[4]);
    }


    ;

    ;
    for (p_17.f2 = (-24); (p_17.f2 <= 16); p_17.f2 = safe_add_func_uint32_t_u_u(p_17.f2, 5))
    {
        int **l_583 = &g_461;
        for (g_86.f0 = 1; (g_86.f0 <= 6); g_86.f0 += 1)
        {
            int **l_585[6][9] = {{&l_459[6], (void*)0, (void*)0, (void*)0, &l_459[6], (void*)0, &g_461, (void*)0, &l_459[6]}, {&l_459[6], (void*)0, (void*)0, (void*)0, &l_459[6], (void*)0, &g_461, (void*)0, &l_459[6]}, {&l_459[6], (void*)0, (void*)0, (void*)0, &l_459[6], (void*)0, &g_461, (void*)0, &l_459[6]}, {&l_459[6], (void*)0, (void*)0, (void*)0, &l_459[6], (void*)0, &g_461, (void*)0, &l_459[6]}, {&l_459[6], (void*)0, (void*)0, (void*)0, &l_459[6], (void*)0, &g_461, (void*)0, &l_459[6]}, {&l_459[6], (void*)0, (void*)0, (void*)0, &l_459[6], (void*)0, &g_461, (void*)0, &l_459[6]}};
            int i, j;
            (**l_583) = (((safe_rshift_func_int8_t_s_u(((((!(safe_add_func_uint16_t_u_u((l_476 != ((*g_150) , (*g_288))), (safe_lshift_func_int16_t_s_u((g_151[1].f4 == (l_583 != (((func_32(g_584) <= (((g_584 != p_17.f5) , g_151[1].f5) < 65535UL)) == p_15) , l_585[0][5]))), g_86.f3))))) , (*l_583)) == &l_553) != p_17.f0), g_151[1].f0)) , 0L) || (-1L));
        }
        (**l_583) = (+(safe_rshift_func_int8_t_s_s(p_16, ((**l_583) >= (safe_add_func_int32_t_s_s((safe_div_func_int32_t_s_s(0xA167F2A1L, (safe_div_func_int8_t_s_s(func_40(g_389[6], (func_40(g_151[1].f1, g_389[2], (((*g_150) , &l_476) == (void*)0)) , g_386[4][4]), g_151[1].f2), g_86.f1)))), 4294967292UL))))));
    }
    return p_17.f3;


}







static short func_22(char p_23, unsigned p_24)
{
    char l_395 = (-1L);
    int l_434 = (-1L);
    struct S0 l_452 = {255UL,1UL,0L,8L,0x9EC9FB2CL,1L};
    int *l_454 = &l_434;
    struct S0 l_456 = {1UL,1UL,1L,0xB3L,0xBE755F01L,0x9CL};
    unsigned l_457 = 0x34ABB14DL;
    int **l_458 = &l_454;
    for (g_86.f5 = 12; (g_86.f5 > (-11)); g_86.f5 = safe_sub_func_uint16_t_u_u(g_86.f5, 1))
    {
        const unsigned l_411[10] = {0UL, 0UL, 9UL, 0UL, 0UL, 9UL, 0UL, 0UL, 9UL, 0UL};
        int l_431 = (-1L);
        int i;
        for (p_24 = 0; (p_24 != 2); p_24++)
        {
            unsigned short l_410 = 65535UL;
            const int *l_432 = &g_65;
            int *l_447 = &l_434;
            l_395 = (0xDB2FL && (g_221[0][2].f4 & g_2));
            for (g_86.f2 = 0; (g_86.f2 <= 5); g_86.f2 += 1)
            {
                struct S0 l_409 = {0xB4L,255UL,1L,0x9AL,0x1CA356F7L,0L};
                unsigned l_437 = 0x1020F4F2L;
                int *l_438 = &l_434;
                int i;
                if (((((safe_div_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((1UL || g_71[g_86.f2]), (((safe_rshift_func_int8_t_s_u(p_23, 6)) >= (g_86.f5 >= p_23)) ^ (safe_unary_minus_func_int8_t_s(func_46((l_409 , (p_23 < p_23)), p_24)))))) < l_395), l_409.f0)), 247UL)), g_386[6][5])), l_409.f3)) == p_23) == p_24) , l_410))
                {
                    int l_418 = (-1L);
                    struct S0 **l_425 = (void*)0;
                    struct S0 ***l_424[10][1][6] = {{{&l_425, &l_425, &l_425, (void*)0, &l_425, &l_425}}, {{&l_425, &l_425, &l_425, (void*)0, &l_425, &l_425}}, {{&l_425, &l_425, &l_425, (void*)0, &l_425, &l_425}}, {{&l_425, &l_425, &l_425, (void*)0, &l_425, &l_425}}, {{&l_425, &l_425, &l_425, (void*)0, &l_425, &l_425}}, {{&l_425, &l_425, &l_425, (void*)0, &l_425, &l_425}}, {{&l_425, &l_425, &l_425, (void*)0, &l_425, &l_425}}, {{&l_425, &l_425, &l_425, (void*)0, &l_425, &l_425}}, {{&l_425, &l_425, &l_425, (void*)0, &l_425, &l_425}}, {{&l_425, &l_425, &l_425, (void*)0, &l_425, &l_425}}};
                    const unsigned char l_430[4][4] = {{255UL, 255UL, 255UL, 255UL}, {255UL, 255UL, 255UL, 255UL}, {255UL, 255UL, 255UL, 255UL}, {255UL, 255UL, 255UL, 255UL}};
                    const int **l_433 = &l_432;
                    int i, j, k;
                    if (g_221[0][2].f5)
                    {
                        int *l_421 = (void*)0;
                        int *l_422 = (void*)0;
                        int *l_423 = &g_74;
                        int i;
                        g_71[g_86.f2] = (+(((void*)0 == &l_409) && (l_411[9] ^ (p_24 & g_151[1].f5))));
                        (*l_423) = ((func_46(l_411[9], p_23) , ((g_151[1].f0 & (safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(0x969AL, 11)), 6)), 4))) || l_418)) , ((l_409.f1 <= g_389[2]) , (safe_mod_func_uint8_t_u_u(l_410, 1UL))));
                        l_431 = ((((((void*)0 == l_424[3][0][0]) , ((void*)0 == (*g_289))) | (((safe_rshift_func_uint8_t_u_s(((func_32(p_24) >= (safe_rshift_func_int16_t_s_s((func_40(g_151[1].f4, p_24, ((((g_2 , p_23) , l_409.f1) == 4294967293UL) , g_389[2])) , (-1L)), 12))) > l_409.f4), 2)) | 0x29L) <= g_86.f3)) , 0UL) <= l_430[3][1]);
                    }
                    else
                    {
                        if (p_24)
                            break;
                    }
                    (*l_433) = l_432;
                }
                else
                {
                    l_434 = l_409.f0;
                    for (g_86.f1 = (-17); (g_86.f1 > 17); g_86.f1++)
                    {
                        if (l_437)
                            break;
                    }
                }

                ;
                (*l_438) = 0x1AC3184AL;
                return g_65;
            }
            (*l_447) = ((((-9L) && (safe_div_func_int8_t_s_s(p_24, 1L))) > g_86.f2) || ((safe_add_func_uint16_t_u_u((1UL < (*l_432)), func_32((safe_lshift_func_int8_t_s_u((((l_434 , (safe_sub_func_uint32_t_u_u(p_24, (((0x56A814C9L == (*l_432)) > l_434) == p_24)))) , 0UL) == p_23), p_24))))) >= g_389[4]));
        }
    }

    ;
    if (l_395)
    {
        int *l_453 = &l_434;
        for (g_86.f3 = 0; (g_86.f3 == 17); g_86.f3 = safe_add_func_int16_t_s_s(g_86.f3, 2))
        {
            int *l_450 = (void*)0;
            int **l_451 = &l_450;
            l_450 = &g_71[4];

            ;
            (*l_451) = l_450;
        }
        l_454 = (l_452 , ((***g_288) , l_453));
        (*l_453) = (*l_454);
    }
    else
    {
        unsigned char l_455 = 0x16L;
        return l_455;
    }
    (*l_454) = ((((((*l_454) , ((void*)0 != (*g_288))) > func_55((((g_86.f2 , l_456) , (&l_456 == (void*)0)) || p_24), g_221[0][2].f0, p_23, g_151[1].f2)) , (-3L)) < g_389[0]) < (*l_454));


    (*l_458) = &l_434;
    return g_151[1].f0;
}







static char func_25(unsigned p_26, int p_27, int p_28)
{
    struct S0 *l_388[10] = {&g_86, &g_221[0][2], &g_86, &g_221[0][2], &g_86, &g_221[0][2], &g_86, &g_221[0][2], &g_86, &g_221[0][2]};
    int *l_390[2][9][7] = {{{&g_71[5], &g_74, (void*)0, &g_65, &g_71[1], &g_65, &g_65}, {&g_71[5], &g_74, (void*)0, &g_65, &g_71[1], &g_65, &g_65}, {&g_71[5], &g_74, (void*)0, &g_65, &g_71[1], &g_65, &g_65}, {&g_71[5], &g_74, (void*)0, &g_65, &g_71[1], &g_65, &g_65}, {&g_71[5], &g_74, (void*)0, &g_65, &g_71[1], &g_65, &g_65}, {&g_71[5], &g_74, (void*)0, &g_65, &g_71[1], &g_65, &g_65}, {&g_71[5], &g_74, (void*)0, &g_65, &g_71[1], &g_65, &g_65}, {&g_71[5], &g_74, (void*)0, &g_65, &g_71[1], &g_65, &g_65}, {&g_71[5], &g_74, (void*)0, &g_65, &g_71[1], &g_65, &g_65}}, {{&g_71[5], &g_74, (void*)0, &g_65, &g_71[1], &g_65, &g_65}, {&g_71[5], &g_74, (void*)0, &g_65, &g_71[1], &g_65, &g_65}, {&g_71[5], &g_74, (void*)0, &g_65, &g_71[1], &g_65, &g_65}, {&g_71[5], &g_74, (void*)0, &g_65, &g_71[1], &g_65, &g_65}, {&g_71[5], &g_74, (void*)0, &g_65, &g_71[1], &g_65, &g_65}, {&g_71[5], &g_74, (void*)0, &g_65, &g_71[1], &g_65, &g_65}, {&g_71[5], &g_74, (void*)0, &g_65, &g_71[1], &g_65, &g_65}, {&g_71[5], &g_74, (void*)0, &g_65, &g_71[1], &g_65, &g_65}, {&g_71[5], &g_74, (void*)0, &g_65, &g_71[1], &g_65, &g_65}}};
    int i, j, k;
    (**g_288) = l_388[1];

    ;
    g_71[4] = g_389[2];
    g_85 = ((void*)0 == (*g_288));
    return g_2;
}







static unsigned char func_32(char p_33)
{
    unsigned char l_54 = 0x9BL;
    int *l_385[2][2][2] = {{{&g_71[4], &g_71[2]}, {&g_71[4], &g_71[2]}}, {{&g_71[4], &g_71[2]}, {&g_71[4], &g_71[2]}}};
    int **l_387 = &l_385[1][1][0];
    int i, j, k;
    for (p_33 = 0; (p_33 < (-8)); p_33--)
    {
        int l_51 = 0L;
        int *l_383 = &g_85;
        int **l_384 = &l_383;
    }
    g_71[5] = g_386[6][5];
    (*l_387) = l_385[1][1][0];
    return p_33;
}







static int func_40(const char p_41, unsigned p_42, short p_43)
{
    return g_2;
}







static int func_46(char p_47, const unsigned p_48)
{
    int * const l_373 = &g_74;
    int *l_375 = &g_71[1];
    int **l_374 = &l_375;
    struct S0 *l_376 = &g_151[1];
    (*l_374) = l_373;

    ;
    (**g_288) = l_376;

    ;
    for (g_65 = 0; (g_65 > 23); g_65 = safe_add_func_int16_t_s_s(g_65, 9))
    {
        for (p_47 = 0; (p_47 <= 5); p_47 += 1)
        {
            int **l_379 = (void*)0;
            int ***l_380 = &l_379;
            int i;
            (*l_380) = l_379;
            return g_71[p_47];
        }
    }
    (*l_375) = (254UL | (safe_sub_func_int8_t_s_s((**l_374), g_221[0][2].f5)));
    return p_48;
}







static const int func_55(unsigned char p_56, unsigned p_57, char p_58, unsigned char p_59)
{
    int * const l_64 = &g_65;
    int *l_372 = &g_71[4];
    int **l_371 = &l_372;
    (*l_371) = func_62(l_64);


    ;
    (*l_371) = (*l_371);
    return (*l_64);
}







static int * func_62(int * const p_63)
{
    unsigned short l_70[2];
    int l_89 = 1L;
    int l_97 = 0xF065A975L;
    unsigned l_123 = 0UL;
    struct S0 *l_149 = (void*)0;
    unsigned char l_166 = 255UL;
    int *l_186 = &g_85;
    int **l_185[2][1][3] = {{{&l_186, (void*)0, &l_186}}, {{&l_186, (void*)0, &l_186}}};
    int *l_251 = &g_65;
    struct S0 ***l_335 = (void*)0;
    const unsigned l_357 = 4294967295UL;
    int *l_370 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_70[i] = 1UL;
    for (g_65 = (-18); (g_65 > 4); g_65++)
    {
        int *l_69 = (void*)0;
        int **l_68 = &l_69;
        char l_122 = 0x56L;
        struct S0 l_154 = {0x05L,249UL,0xBCE8A264L,0x33L,-1L,1L};
        int *l_155[5];
        int i;
        for (i = 0; i < 5; i++)
            l_155[i] = &g_71[0];
        (*l_68) = &g_65;

        ;
        for (g_71[4] = 1; (g_71[4] >= 0); g_71[4] -= 1)
        {
            int l_72 = (-1L);
            int *l_128 = &g_74;
        }
        l_89 = ((safe_div_func_uint16_t_u_u((*l_69), l_89)) <= (+func_40(l_89, (l_154 , l_97), (**l_68))));
    }
    for (l_123 = (-10); (l_123 == 49); ++l_123)
    {
        int *l_159 = &g_85;
        int **l_158 = &l_159;
        struct S0 l_164 = {0xA9L,0xE0L,0x9EF32C18L,0x88L,-7L,8L};
        struct S0 **l_223[7] = {&g_150, &g_150, (void*)0, &g_150, &g_150, (void*)0, &g_150};
        int i;
        (*l_158) = &g_85;
        for (l_97 = 0; (l_97 < (-2)); --l_97)
        {
            unsigned short l_162[3];
            int l_165[2];
            struct S0 l_182 = {0x7DL,0x82L,0x875A03A1L,0x9BL,-1L,0x54L};
            int ** const *l_183 = (void*)0;
            int i;
            for (i = 0; i < 3; i++)
                l_162[i] = 0x70C6L;
            for (i = 0; i < 2; i++)
                l_165[i] = 1L;
            (*l_159) = l_162[0];
            if (func_40(g_86.f1, g_151[1].f0, g_86.f3))
            {
                int **l_163 = &l_159;
                if ((*p_63))
                    break;
                (*l_163) = p_63;

                ;
            }
            else
            {
                (*l_159) = (*p_63);
            }

            ;
            if ((l_97 | ((l_164 , l_162[0]) & ((*g_150) , ((g_71[2] , (~g_86.f2)) ^ (((l_165[0] >= 2L) < (((l_166 || g_85) , 0x045D4433L) == (*p_63))) ^ (**l_158)))))))
            {
                int *l_167 = &g_85;
                (**l_158) = (*p_63);
                (*l_158) = l_167;

                ;
            }
            else
            {
                unsigned char l_170 = 255UL;
                unsigned char l_173[9][5][5] = {{{255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}}, {{255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}}, {{255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}}, {{255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}}, {{255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}}, {{255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}}, {{255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}}, {{255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}}, {{255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}, {255UL, 0xA0L, 1UL, 255UL, 0x85L}}};
                int **l_184 = &l_159;
                struct S0 *l_203 = &g_151[1];
                struct S0 *l_220 = &g_221[0][2];
                int i, j, k;
                if (((safe_mod_func_int32_t_s_s(g_151[1].f4, ((l_170 , 0UL) , l_162[0]))) | g_151[1].f4))
                {
                    for (g_85 = 0; (g_85 <= 2); g_85 += 1)
                    {
                        int i;
                        if (l_162[g_85])
                            break;
                        (*p_63) = ((safe_div_func_int16_t_s_s(l_162[g_85], ((func_40(((0xEE52L || l_162[g_85]) >= (g_86.f5 < l_173[3][2][4])), (~(**l_158)), l_123) == ((safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(0x58L, 0x85L)), (**l_158))) <= g_151[1].f0)) || g_151[1].f4))) == 0x964BL);
                    }
                }
                else
                {
                    const unsigned short l_180 = 1UL;
                    (*l_158) = (*l_158);
                    (*l_158) = &l_89;

                    ;
                    (*p_63) = l_162[1];
                    for (l_164.f2 = 25; (l_164.f2 != (-12)); l_164.f2--)
                    {
                        int l_181 = (-2L);
                        (*l_159) = (l_180 & ((+((*g_150) , (l_181 >= (**l_158)))) >= (l_162[0] && (((l_182 , l_183) == &g_75) & (-4L)))));
                        return &g_71[1];


                    }
                }

                ;
                (*l_184) = p_63;

                ;
                for (g_86.f1 = 0; (g_86.f1 <= 1); g_86.f1 += 1)
                {
                    int ***l_187[5][3][9] = {{{(void*)0, &l_185[1][0][2], (void*)0, &g_75, (void*)0, &g_75, &l_184, &l_184, &g_75}, {(void*)0, &l_185[1][0][2], (void*)0, &g_75, (void*)0, &g_75, &l_184, &l_184, &g_75}, {(void*)0, &l_185[1][0][2], (void*)0, &g_75, (void*)0, &g_75, &l_184, &l_184, &g_75}}, {{(void*)0, &l_185[1][0][2], (void*)0, &g_75, (void*)0, &g_75, &l_184, &l_184, &g_75}, {(void*)0, &l_185[1][0][2], (void*)0, &g_75, (void*)0, &g_75, &l_184, &l_184, &g_75}, {(void*)0, &l_185[1][0][2], (void*)0, &g_75, (void*)0, &g_75, &l_184, &l_184, &g_75}}, {{(void*)0, &l_185[1][0][2], (void*)0, &g_75, (void*)0, &g_75, &l_184, &l_184, &g_75}, {(void*)0, &l_185[1][0][2], (void*)0, &g_75, (void*)0, &g_75, &l_184, &l_184, &g_75}, {(void*)0, &l_185[1][0][2], (void*)0, &g_75, (void*)0, &g_75, &l_184, &l_184, &g_75}}, {{(void*)0, &l_185[1][0][2], (void*)0, &g_75, (void*)0, &g_75, &l_184, &l_184, &g_75}, {(void*)0, &l_185[1][0][2], (void*)0, &g_75, (void*)0, &g_75, &l_184, &l_184, &g_75}, {(void*)0, &l_185[1][0][2], (void*)0, &g_75, (void*)0, &g_75, &l_184, &l_184, &g_75}}, {{(void*)0, &l_185[1][0][2], (void*)0, &g_75, (void*)0, &g_75, &l_184, &l_184, &g_75}, {(void*)0, &l_185[1][0][2], (void*)0, &g_75, (void*)0, &g_75, &l_184, &l_184, &g_75}, {(void*)0, &l_185[1][0][2], (void*)0, &g_75, (void*)0, &g_75, &l_184, &l_184, &g_75}}};
                    int i, j, k;
                    (*l_184) = &g_65;
                    (*l_159) = 0x37000C01L;
                    g_75 = l_185[0][0][2];
                }

                ;
                if (((l_182 , p_63) == &g_85))
                {
                    unsigned short l_209 = 0UL;
                    for (l_164.f0 = 0; (l_164.f0 != 57); ++l_164.f0)
                    {
                        int *l_190 = &g_65;
                        l_190 = p_63;
                    }
                    for (g_74 = (-1); (g_74 <= 20); g_74 = safe_add_func_int8_t_s_s(g_74, 9))
                    {
                        int **l_210[6][6] = {{&l_159, &l_159, &l_159, &l_186, &l_186, (void*)0}, {&l_159, &l_159, &l_159, &l_186, &l_186, (void*)0}, {&l_159, &l_159, &l_159, &l_186, &l_186, (void*)0}, {&l_159, &l_159, &l_159, &l_186, &l_186, (void*)0}, {&l_159, &l_159, &l_159, &l_186, &l_186, (void*)0}, {&l_159, &l_159, &l_159, &l_186, &l_186, (void*)0}};
                        int **l_211 = &l_186;
                        int i, j;
                        (*l_211) = ((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_s(((**l_184) <= (g_2 == (safe_sub_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_s((l_203 == ((((g_75 != &l_186) , (safe_rshift_func_int16_t_s_s(g_151[1].f2, 11))) < ((safe_mod_func_uint16_t_u_u((g_208 == (p_63 == (g_151[1].f2 , p_63))), g_86.f0)) != g_151[1].f3)) , &l_182)), 4)) > 0UL), l_209)) <= g_151[1].f1) && 0x73L), (-1L))))), 0)) , (**l_184)), 5)) , p_63);

                        ;
                        (*p_63) = (safe_mod_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u((p_63 == (void*)0), g_208)) == ((g_71[4] > ((func_40(l_209, func_40((**l_184), func_40((**l_184), l_209, (safe_rshift_func_uint8_t_u_s(g_151[1].f3, 5))), g_74), (**l_211)) != g_86.f4) , (*l_186))) < l_209)) <= g_86.f1), 0xDBAFL));
                    }
                    for (g_85 = 26; (g_85 >= (-17)); g_85--)
                    {
                        struct S0 ***l_222 = (void*)0;
                        const int l_226 = 0x22A849F0L;
                        l_220 = &g_151[1];

                        ;
                        l_223[5] = &g_150;
                        (**l_158) = ((safe_sub_func_int8_t_s_s(((l_209 , func_40(l_226, (((((*l_159) == ((safe_rshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(l_226, 0)), func_40((**l_158), (!(g_151[1].f1 != ((0x2775L > func_40((safe_rshift_func_int16_t_s_s(func_40((**l_184), ((!(**l_158)) , l_226), (**l_184)), g_208)), l_226, (**l_184))) || 0x9A27EF06L))), g_65))), 0)) <= 2L)) <= 0xEE1FL) & g_86.f0) , 8UL), l_182.f0)) , l_226), 0xFEL)) < (**l_184));
                    }

                    ;
                }
                else
                {
                    unsigned short l_244[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_244[i] = 0xF32EL;
                    (*l_159) = g_151[1].f5;
                    for (g_208 = 19; (g_208 >= 14); g_208 = safe_sub_func_uint8_t_u_u(g_208, 1))
                    {
                        int **l_239 = &l_186;
                        (*l_239) = p_63;

                        ;
                        (*l_159) = (safe_mod_func_uint32_t_u_u(0xB52B42D1L, g_151[1].f1));
                    }
                    g_71[5] = func_40(((**l_184) , ((safe_add_func_uint8_t_u_u(l_244[0], (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(l_244[0], l_244[0])), (((*p_63) | (safe_div_func_uint16_t_u_u(((void*)0 == l_220), g_71[5]))) ^ l_244[0]))))) < 0x9EC5L)), g_2, (**l_158));
                }

                ;
            }

            ;
            return l_251;



        }
        (*l_251) = (((g_86.f4 , (g_86.f0 <= (safe_rshift_func_uint16_t_u_u(0x898FL, 5)))) , ((-6L) <= 0x36D0L)) && (safe_rshift_func_uint8_t_u_u(((void*)0 != &l_185[0][0][0]), 3)));
        for (l_164.f2 = 0; (l_164.f2 <= 0); l_164.f2 += 1)
        {
            struct S0 l_258 = {0x1DL,0x71L,0x2866832CL,0x4FL,-1L,0L};
            int *l_261[5][8] = {{(void*)0, &l_89, &l_89, &g_65, &g_65, &l_89, &g_85, &g_71[1]}, {(void*)0, &l_89, &l_89, &g_65, &g_65, &l_89, &g_85, &g_71[1]}, {(void*)0, &l_89, &l_89, &g_65, &g_65, &l_89, &g_85, &g_71[1]}, {(void*)0, &l_89, &l_89, &g_65, &g_65, &l_89, &g_85, &g_71[1]}, {(void*)0, &l_89, &l_89, &g_65, &g_65, &l_89, &g_85, &g_71[1]}};
            int *l_281 = (void*)0;
            int **l_293 = &l_251;
            struct S0 ***l_336 = &l_223[4];
            int i, j;
            if (((0L && g_151[1].f0) || ((&l_159 != &p_63) , (safe_rshift_func_int8_t_s_s((g_75 != &p_63), (l_258 , (((safe_sub_func_uint16_t_u_u((255UL && g_2), g_86.f1)) >= 3UL) < g_208)))))))
            {
                short l_268 = 0x4472L;
                (*l_158) = &g_65;

                ;
                for (l_258.f5 = 0; (l_258.f5 >= 0); l_258.f5 -= 1)
                {
                    (*l_158) = &g_71[0];

                    ;
                    if ((g_151[1].f2 >= (*l_159)))
                    {
                        l_261[3][6] = l_261[3][1];
                        (*p_63) = (*p_63);
                    }
                    else
                    {
                        (**l_158) = (((g_221[0][2].f3 , (*l_159)) , (*l_186)) == g_151[1].f0);
                        (*l_251) = (0x6C97L >= 0xCC1EL);
                        (*p_63) = (*p_63);
                        (*l_159) = (safe_sub_func_int16_t_s_s(0L, ((-1L) >= g_221[0][2].f0)));
                    }
                }

                ;
                if ((((safe_lshift_func_int16_t_s_u(func_40(g_71[4], ((safe_lshift_func_uint8_t_u_u((l_268 == 0xAD2FL), 1)) > (*l_251)), (safe_mod_func_int8_t_s_s(((safe_unary_minus_func_uint8_t_u(g_221[0][2].f0)) || (*l_186)), func_40((l_258 , (((7L || ((g_221[0][2].f1 != 4294967293UL) != 0x56E9A28FL)) | g_221[0][2].f2) || 0x4BL)), l_268, (*l_251))))), 0)) ^ (-1L)) , (*p_63)))
                {
                    for (g_65 = 0; (g_65 <= 0); g_65 += 1)
                    {
                        int *l_272 = &g_74;
                        return l_272;


                    }
                }
                else
                {
                    unsigned short l_286 = 65534UL;
                    for (l_164.f1 = 0; (l_164.f1 <= 0); l_164.f1 += 1)
                    {
                        char l_287 = 0x53L;
                        (*l_251) = (safe_mod_func_int8_t_s_s((**l_158), (0xC2728AC2L & 0x0D19E221L)));
                        (*p_63) = (((safe_mul_func_uint16_t_u_u(0x3B73L, (g_75 != (void*)0))) != (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(g_2, 0)), (g_221[0][2].f2 , (((void*)0 != l_281) , (safe_rshift_func_uint16_t_u_u(((((l_286 < (((func_40((*l_251), l_287, l_286) <= 1UL) >= 0x8D60L) <= 0L)) > l_268) , (void*)0) != g_288), 8))))))) , (*p_63));
                    }
                }
            }
            else
            {
                int **l_290 = (void*)0;
                int **l_291[4][1][8] = {{{&l_261[3][1], &l_261[3][1], &l_261[1][5], &l_261[3][1], &l_261[3][1], &l_261[1][5], &l_261[3][1], &l_261[3][1]}}, {{&l_261[3][1], &l_261[3][1], &l_261[1][5], &l_261[3][1], &l_261[3][1], &l_261[1][5], &l_261[3][1], &l_261[3][1]}}, {{&l_261[3][1], &l_261[3][1], &l_261[1][5], &l_261[3][1], &l_261[3][1], &l_261[1][5], &l_261[3][1], &l_261[3][1]}}, {{&l_261[3][1], &l_261[3][1], &l_261[1][5], &l_261[3][1], &l_261[3][1], &l_261[1][5], &l_261[3][1], &l_261[3][1]}}};
                int **l_292 = &l_261[3][1];
                int i, j, k;
                (*l_292) = p_63;
            }

            ;
            (*l_293) = p_63;
            (**l_158) = (*l_159);
            (*l_158) = &g_74;

            ;
            for (l_258.f5 = 0; (l_258.f5 >= 0); l_258.f5 -= 1)
            {
                short l_294[2][10] = {{1L, 9L, 0x6732L, 9L, 1L, 9L, 0x6732L, 9L, 1L, 9L}, {1L, 9L, 0x6732L, 9L, 1L, 9L, 0x6732L, 9L, 1L, 9L}};
                struct S0 l_303 = {6UL,255UL,-1L,6L,0xC973D22CL,0x79L};
                int i, j;
                if ((g_86.f4 , (func_40((*l_186), (*l_159), l_294[1][5]) & g_221[0][2].f3)))
                {
                    int *l_295 = &g_85;
                    for (g_85 = 0; (g_85 >= 0); g_85 -= 1)
                    {
                        (*p_63) = (*p_63);
                        (*l_158) = l_295;

                        ;
                        if (g_86.f0)
                            break;
                    }
                    for (g_86.f2 = 0; (g_86.f2 <= 1); g_86.f2 += 1)
                    {
                        struct S0 **l_296[6][4] = {{&l_149, &l_149, &l_149, &g_150}, {&l_149, &l_149, &l_149, &g_150}, {&l_149, &l_149, &l_149, &g_150}, {&l_149, &l_149, &l_149, &g_150}, {&l_149, &l_149, &l_149, &g_150}, {&l_149, &l_149, &l_149, &g_150}};
                        int l_308 = 0x8BA12C1CL;
                        int *l_309[4];
                        int i, j;
                        for (i = 0; i < 4; i++)
                            l_309[i] = &g_71[4];
                        (*l_251) = (((void*)0 == l_296[3][3]) , (safe_mod_func_uint32_t_u_u((g_75 == (void*)0), ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((l_303 , func_40((*l_159), l_303.f2, ((*l_159) <= (safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(g_208, 0x60L)), g_151[1].f5))))), 8)), 11)) , l_308))));
                        (*l_158) = p_63;

                        ;
                        l_309[1] = &l_308;


                    }
                }
                else
                {
                    int ***l_312[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_312[i] = (void*)0;
                    for (l_258.f1 = 0; (l_258.f1 <= 0); l_258.f1 += 1)
                    {
                        int l_317 = 0L;
                        int ***l_318 = &l_185[0][0][0];
                        int **l_319[1][6][1] = {{{&l_261[3][1]}, {&l_261[3][1]}, {&l_261[3][1]}, {&l_261[3][1]}, {&l_261[3][1]}, {&l_261[3][1]}}};
                        int **l_320[7] = {&l_186, &l_159, &l_186, &l_159, &l_186, &l_159, &l_186};
                        int **l_321 = (void*)0;
                        int **l_322[8];
                        int **l_323 = (void*)0;
                        int **l_324 = &l_159;
                        int i, j, k;
                        for (i = 0; i < 8; i++)
                            l_322[i] = (void*)0;
                        g_85 = ((((safe_rshift_func_int8_t_s_s((2UL >= (&l_149 != (void*)0)), 6)) , (((l_312[2] == ((func_40(((safe_sub_func_int8_t_s_s(((*l_251) , (g_86.f0 <= ((safe_lshift_func_uint16_t_u_s((*l_251), ((*l_251) != g_221[0][2].f0))) , (**l_293)))), g_86.f2)) , 0L), g_2, l_317) | (*p_63)) , l_318)) != g_86.f4) , g_75)) == (void*)0) >= g_2);
                        if (g_2)
                            break;
                        (*l_324) = p_63;

                        ;
                        if ((*p_63))
                            continue;
                    }
                    for (g_86.f0 = 0; (g_86.f0 <= 0); g_86.f0 += 1)
                    {
                        int l_334 = 1L;
                        int i, j, k;
                    }
                    if (((safe_lshift_func_uint8_t_u_s((&p_63 == &l_281), 1)) && (*l_251)))
                    {
                        unsigned char l_341 = 0x63L;
                        int **l_356 = &l_186;
                        if (l_341)
                            break;
                        (*p_63) = 0L;
                        (**l_293) = (safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s(func_40(((~l_341) , (safe_add_func_uint16_t_u_u(0xEB81L, g_221[0][2].f3))), (**l_158), g_86.f5), ((safe_lshift_func_int16_t_s_s(((((safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((**l_158), 2)), (5UL && (l_341 & (*l_251))))) <= (*p_63)) != (*l_251)) < 0xE5L), 6)) || g_71[4]))), 0xF6L));
                        (*p_63) = (((0xBEB1L >= (safe_div_func_int32_t_s_s((func_40((func_40(g_86.f3, l_341, (*l_159)) || g_151[1].f5), g_221[0][2].f0, func_40(((((l_356 != (void*)0) , g_221[0][2].f2) && g_221[0][2].f4) == 0x9201CDC0L), (**l_158), g_71[0])) ^ l_303.f4), 0x3156D318L))) < g_86.f4) , l_357);
                    }
                    else
                    {
                        unsigned l_358 = 0xD5B57BD9L;
                        int **l_359 = &l_261[0][3];
                        (*l_159) = l_358;
                        (*p_63) = 0L;
                        (*l_359) = p_63;
                        if ((*p_63))
                            continue;
                    }
                    (*p_63) = (*p_63);
                }
                if ((*p_63))
                    break;
                if (((func_40((~((((g_151[1].f4 < func_40(((l_294[0][3] | (g_151[1].f4 > (safe_rshift_func_uint16_t_u_s(g_86.f1, 5)))) && (safe_div_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((**l_158) ^ (l_303.f1 , func_40(g_221[0][2].f1, (*l_251), ((((0xE06BL != g_208) > g_221[0][2].f5) , 0x10L) != (*l_159))))), g_151[1].f3)), l_303.f5))), (**l_293), l_294[0][5])) | 0UL) != g_71[4]) >= l_294[0][0])), l_294[1][8], g_74) != 0x07L) != g_221[0][2].f0))
                {
                    int * const l_368 = &g_85;
                    (*p_63) = (((**l_158) , l_368) != (void*)0);
                    if ((*l_159))
                        break;
                }
                else
                {
                    int **l_369 = &l_186;
                    (*l_251) = (*p_63);
                    (*l_369) = p_63;

                    ;
                    (**l_293) = g_221[0][2].f4;
                    (*l_159) = (*p_63);
                }
            }

            ;
        }

        ;
    }

    ;
    return l_370;


}





int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_71[i], "g_71[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_86.f0, "g_86.f0", print_hash_value);
    transparent_crc(g_86.f1, "g_86.f1", print_hash_value);
    transparent_crc(g_86.f2, "g_86.f2", print_hash_value);
    transparent_crc(g_86.f3, "g_86.f3", print_hash_value);
    transparent_crc(g_86.f4, "g_86.f4", print_hash_value);
    transparent_crc(g_86.f5, "g_86.f5", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_151[i].f0, "g_151[i].f0", print_hash_value);
        transparent_crc(g_151[i].f1, "g_151[i].f1", print_hash_value);
        transparent_crc(g_151[i].f2, "g_151[i].f2", print_hash_value);
        transparent_crc(g_151[i].f3, "g_151[i].f3", print_hash_value);
        transparent_crc(g_151[i].f4, "g_151[i].f4", print_hash_value);
        transparent_crc(g_151[i].f5, "g_151[i].f5", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_208, "g_208", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_221[i][j].f0, "g_221[i][j].f0", print_hash_value);
            transparent_crc(g_221[i][j].f1, "g_221[i][j].f1", print_hash_value);
            transparent_crc(g_221[i][j].f2, "g_221[i][j].f2", print_hash_value);
            transparent_crc(g_221[i][j].f3, "g_221[i][j].f3", print_hash_value);
            transparent_crc(g_221[i][j].f4, "g_221[i][j].f4", print_hash_value);
            transparent_crc(g_221[i][j].f5, "g_221[i][j].f5", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_386[i][j], "g_386[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_389[i], "g_389[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_584, "g_584", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
