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
   int f1;
   unsigned short f2;
   unsigned f3;
   unsigned short f4;
   short f5;
};

struct S1 {
   unsigned f0;
   unsigned f1;
   struct S0 f2;
   int f3;
   unsigned f4;
   unsigned short f5;
   unsigned f6;
   unsigned char f7;
};


static int g_2 = 0xFBB4EBB0L;
static int g_33 = 0x4A603D2CL;
static int *g_32 = &g_33;
static struct S0 g_60[10][6] = {{{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{0xCAL,0L,0xCAE9L,0xC7D00C9FL,65535UL,0L},{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{0xCAL,0L,0xCAE9L,0xC7D00C9FL,65535UL,0L},{255UL,0L,0x5B00L,4294967295UL,4UL,1L}},{{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{0xCAL,0L,0xCAE9L,0xC7D00C9FL,65535UL,0L},{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{0xCAL,0L,0xCAE9L,0xC7D00C9FL,65535UL,0L},{255UL,0L,0x5B00L,4294967295UL,4UL,1L}},{{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{0xCAL,0L,0xCAE9L,0xC7D00C9FL,65535UL,0L},{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{0xCAL,0L,0xCAE9L,0xC7D00C9FL,65535UL,0L},{255UL,0L,0x5B00L,4294967295UL,4UL,1L}},{{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{0xCAL,0L,0xCAE9L,0xC7D00C9FL,65535UL,0L},{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{0xCAL,0L,0xCAE9L,0xC7D00C9FL,65535UL,0L},{255UL,0L,0x5B00L,4294967295UL,4UL,1L}},{{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{0xCAL,0L,0xCAE9L,0xC7D00C9FL,65535UL,0L},{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{0xCAL,0L,0xCAE9L,0xC7D00C9FL,65535UL,0L},{255UL,0L,0x5B00L,4294967295UL,4UL,1L}},{{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{0xCAL,0L,0xCAE9L,0xC7D00C9FL,65535UL,0L},{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{0xCAL,0L,0xCAE9L,0xC7D00C9FL,65535UL,0L},{255UL,0L,0x5B00L,4294967295UL,4UL,1L}},{{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{0xCAL,0L,0xCAE9L,0xC7D00C9FL,65535UL,0L},{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{0xCAL,0L,0xCAE9L,0xC7D00C9FL,65535UL,0L},{255UL,0L,0x5B00L,4294967295UL,4UL,1L}},{{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{0xCAL,0L,0xCAE9L,0xC7D00C9FL,65535UL,0L},{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{0x96L,0xCF8DE9EFL,0x14FBL,4294967291UL,0x470AL,-10L}},{{0x96L,0xCF8DE9EFL,0x14FBL,4294967291UL,0x470AL,-10L},{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{0x96L,0xCF8DE9EFL,0x14FBL,4294967291UL,0x470AL,-10L},{0x96L,0xCF8DE9EFL,0x14FBL,4294967291UL,0x470AL,-10L},{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{0x96L,0xCF8DE9EFL,0x14FBL,4294967291UL,0x470AL,-10L}},{{0x96L,0xCF8DE9EFL,0x14FBL,4294967291UL,0x470AL,-10L},{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{0x96L,0xCF8DE9EFL,0x14FBL,4294967291UL,0x470AL,-10L},{0x96L,0xCF8DE9EFL,0x14FBL,4294967291UL,0x470AL,-10L},{255UL,0L,0x5B00L,4294967295UL,4UL,1L},{0x96L,0xCF8DE9EFL,0x14FBL,4294967291UL,0x470AL,-10L}}};
static struct S0 g_62 = {0x50L,0x6C34CEF8L,4UL,0x71361DE3L,0x1C4DL,0x7E06L};
static struct S0 *g_137 = &g_60[3][4];
static struct S0 **g_136 = &g_137;
static struct S1 g_139 = {1UL,4294967289UL,{0x5DL,0x436AE91AL,0x7324L,0x9128E193L,65535UL,-1L},-1L,0x733BB65FL,1UL,1UL,0xA9L};
static struct S1 g_149[5][1] = {{{4294967295UL,0x6536C698L,{3UL,-1L,65535UL,4294967289UL,0x5837L,0L},0x01DFA8A0L,4294967290UL,0xB070L,3UL,0xADL}},{{0xC7286EC0L,8UL,{2UL,1L,9UL,0x41F67890L,65535UL,0x6333L},0L,1UL,0xB41CL,0x995FCC59L,9UL}},{{4294967295UL,0x6536C698L,{3UL,-1L,65535UL,4294967289UL,0x5837L,0L},0x01DFA8A0L,4294967290UL,0xB070L,3UL,0xADL}},{{0xC7286EC0L,8UL,{2UL,1L,9UL,0x41F67890L,65535UL,0x6333L},0L,1UL,0xB41CL,0x995FCC59L,9UL}},{{4294967295UL,0x6536C698L,{3UL,-1L,65535UL,4294967289UL,0x5837L,0L},0x01DFA8A0L,4294967290UL,0xB070L,3UL,0xADL}}};
static int *g_162 = &g_149[2][0].f2.f1;
static unsigned char g_346[7] = {0x71L,3UL,3UL,0x71L,3UL,3UL,0x71L};
static struct S1 *g_351 = (void*)0;
static struct S1 **g_350 = &g_351;
static unsigned short g_363 = 1UL;
static int **g_378 = (void*)0;
static int ***g_377 = &g_378;
static char g_565 = 0x08L;
static short g_570 = 0L;
static unsigned short g_642 = 1UL;
static int *g_665 = &g_60[9][5].f1;
static int *g_671 = &g_2;
static int *g_821 = &g_33;
static int *g_1035[5] = {&g_60[9][5].f1,&g_60[9][5].f1,&g_60[9][5].f1,&g_60[9][5].f1,&g_60[9][5].f1};
static char g_1046 = 0x3EL;
static int **g_1168 = &g_32;



static unsigned char func_1(void);
static int * func_7(unsigned short p_8);
static unsigned short func_9(int * p_10);
static int * func_11(int * p_12, char p_13, struct S0 p_14);
static unsigned short func_17(int * p_18);
static int * func_19(unsigned char p_20);
static char func_23(unsigned short p_24, int p_25);
static int * func_28(char p_29);
static unsigned func_36(int * p_37, int * p_38, struct S0 p_39, struct S1 p_40);
static int * func_41(unsigned short p_42, struct S1 p_43, int ** p_44, int ** p_45, int * p_46);
static unsigned char func_1(void)
{
    unsigned l_6 = 0x87A7525DL;
    int *l_1044[6] = {&g_60[9][5].f1,&g_60[9][5].f1,&g_60[9][5].f1,&g_60[9][5].f1,&g_60[9][5].f1,&g_60[9][5].f1};
    int *l_1045 = &g_60[9][5].f1;
    unsigned l_1055 = 4294967286UL;
    struct S1 l_1094 = {4UL,0x76E5D7F1L,{0xF8L,0xE3BFCB57L,0x9F9FL,4294967295UL,0UL,0x43F8L},-1L,0UL,65535UL,0x7E0F3B90L,1UL};
    int l_1118 = (-1L);
    unsigned l_1158 = 0x14E14795L;
    unsigned char l_1164[1][4][3] = {{{0xE1L,0xC2L,0xC2L},{0xE1L,0xC2L,0xC2L},{0xE1L,0xC2L,0xC2L},{0xE1L,0xC2L,0xC2L}}};
    int *l_1166[7][10][3] = {{{&g_62.f1,&g_2,(void*)0},{(void*)0,&g_33,&g_33},{&g_2,&g_62.f1,&g_139.f2.f1},{&g_62.f1,&g_149[2][0].f2.f1,&g_149[2][0].f2.f1},{&g_139.f2.f1,&g_60[9][5].f1,&g_149[2][0].f2.f1},{(void*)0,&g_60[9][5].f1,(void*)0},{(void*)0,&g_149[2][0].f2.f1,&l_1094.f2.f1},{&l_1094.f2.f1,&g_62.f1,&g_62.f1},{(void*)0,&g_33,&g_2},{&g_2,&g_2,&g_2}},{{&g_139.f2.f1,&g_33,(void*)0},{&g_60[9][5].f1,&g_2,&g_149[2][0].f2.f1},{&g_139.f2.f1,&g_139.f2.f1,&g_149[2][0].f2.f1},{&g_60[9][5].f1,&g_60[9][5].f1,&g_149[2][0].f2.f1},{&g_33,&g_139.f2.f1,(void*)0},{&g_33,&g_60[9][5].f1,&g_62.f1},{&g_149[2][0].f2.f1,&g_139.f2.f1,(void*)0},{&g_2,&g_33,&g_2},{(void*)0,&g_2,&g_62.f1},{&g_60[9][5].f1,&g_60[9][5].f1,&g_139.f2.f1}},{{&g_139.f2.f1,&g_60[9][5].f1,(void*)0},{&g_139.f2.f1,&g_62.f1,(void*)0},{&g_60[9][5].f1,&g_33,&l_1094.f2.f1},{(void*)0,(void*)0,(void*)0},{&g_2,&g_2,&g_2},{&g_149[2][0].f2.f1,&g_149[2][0].f2.f1,&g_139.f2.f1},{&g_33,&g_2,&g_60[9][5].f1},{&g_33,(void*)0,&g_139.f2.f1},{&g_139.f2.f1,(void*)0,&g_60[9][5].f1},{&l_1094.f2.f1,(void*)0,&g_33}},{{&g_139.f2.f1,&g_2,&g_33},{&g_149[2][0].f2.f1,&g_149[2][0].f2.f1,&g_149[2][0].f2.f1},{(void*)0,&g_2,&g_139.f2.f1},{&g_149[2][0].f2.f1,(void*)0,&g_149[2][0].f2.f1},{&g_139.f2.f1,&g_33,&g_33},{&g_2,&g_62.f1,(void*)0},{(void*)0,&g_60[9][5].f1,(void*)0},{&g_149[2][0].f2.f1,&g_60[9][5].f1,&g_33},{&g_33,&g_2,&g_149[2][0].f2.f1},{&g_60[9][5].f1,&g_33,&g_139.f2.f1}},{{&g_149[2][0].f2.f1,&g_139.f2.f1,&g_149[2][0].f2.f1},{&g_2,&g_60[9][5].f1,&g_33},{&l_1094.f2.f1,&g_33,&g_33},{(void*)0,&g_139.f2.f1,&g_60[9][5].f1},{(void*)0,&g_60[9][5].f1,&g_139.f2.f1},{(void*)0,&g_60[9][5].f1,&g_60[9][5].f1},{&l_1094.f2.f1,&l_1094.f2.f1,&g_139.f2.f1},{&g_2,&g_33,&g_149[2][0].f2.f1},{(void*)0,&l_1094.f2.f1,&g_139.f2.f1},{&g_62.f1,&g_2,&g_149[2][0].f2.f1}},{{&g_2,&g_149[2][0].f2.f1,&l_1094.f2.f1},{&g_33,&g_60[9][5].f1,(void*)0},{&g_139.f2.f1,&g_60[9][5].f1,&g_149[2][0].f2.f1},{&g_149[2][0].f2.f1,&g_149[2][0].f2.f1,&g_149[2][0].f2.f1},{(void*)0,&g_2,&l_1094.f2.f1},{&g_2,&l_1094.f2.f1,&g_33},{&g_33,&g_33,&g_60[9][5].f1},{&g_139.f2.f1,&g_139.f2.f1,(void*)0},{(void*)0,&g_62.f1,&g_149[2][0].f2.f1},{&g_149[2][0].f2.f1,&g_2,&g_33}},{{&g_149[2][0].f2.f1,(void*)0,&g_149[2][0].f2.f1},{&g_149[2][0].f2.f1,&g_139.f2.f1,(void*)0},{&l_1094.f2.f1,&g_149[2][0].f2.f1,&g_60[9][5].f1},{&g_149[2][0].f2.f1,&g_149[2][0].f2.f1,&g_33},{(void*)0,&g_62.f1,&l_1094.f2.f1},{&l_1094.f2.f1,(void*)0,&g_149[2][0].f2.f1},{&g_2,(void*)0,&g_149[2][0].f2.f1},{&g_33,(void*)0,(void*)0},{&g_33,&g_149[2][0].f2.f1,&l_1094.f2.f1},{&g_2,&g_149[2][0].f2.f1,&g_149[2][0].f2.f1}}};
    struct S0 ***l_1173 = &g_136;
    int *l_1187 = &g_149[2][0].f2.f1;
    int i, j, k;
    for (g_2 = 29; (g_2 > 2); g_2 = safe_sub_func_int16_t_s_s(g_2, 3))
    {
        unsigned char l_5[5][7] = {{1UL,0UL,0x0DL,0xD3L,255UL,0xCAL,0xADL},{1UL,250UL,0x40L,0x0DL,0x40L,250UL,1UL},{0xADL,0xCAL,255UL,0xD3L,0x0DL,0UL,1UL},{0x0DL,1UL,247UL,247UL,1UL,0x0DL,247UL},{0xD3L,0xCAL,0x0DL,247UL,0x23L,0x40L,0x40L}};
        int *l_1077[3][9][9] = {{{&g_139.f2.f1,&g_149[2][0].f2.f1,&g_60[9][5].f1,(void*)0,&g_60[9][5].f1,&g_60[9][5].f1,&g_149[2][0].f2.f1,&g_2,&g_60[9][5].f1},{&g_139.f2.f1,&g_33,&g_60[9][5].f1,&g_33,&g_149[2][0].f2.f1,&g_33,&g_60[9][5].f1,&g_33,&g_139.f2.f1},{&g_2,&g_139.f2.f1,(void*)0,&g_139.f2.f1,(void*)0,&g_139.f2.f1,&g_60[9][5].f1,&g_60[9][5].f1,&g_139.f2.f1},{&g_149[2][0].f2.f1,&g_139.f2.f1,&g_139.f2.f1,(void*)0,&g_139.f2.f1,(void*)0,&g_33,&g_33,(void*)0},{&g_2,(void*)0,&g_60[9][5].f1,(void*)0,&g_2,&g_149[2][0].f2.f1,&g_139.f2.f1,&g_139.f2.f1,&g_149[2][0].f2.f1},{&g_139.f2.f1,&g_62.f1,&g_60[9][5].f1,&g_139.f2.f1,&g_60[9][5].f1,&g_62.f1,&g_139.f2.f1,(void*)0,&g_2},{&g_139.f2.f1,&g_139.f2.f1,&g_60[9][5].f1,&g_139.f2.f1,&g_149[2][0].f2.f1,&g_149[2][0].f2.f1,&g_139.f2.f1,&g_60[9][5].f1,&g_139.f2.f1},{&g_33,&g_62.f1,&g_149[2][0].f2.f1,&g_2,&g_2,(void*)0,&g_33,&g_62.f1,&g_139.f2.f1},{(void*)0,&g_60[9][5].f1,&g_149[2][0].f2.f1,&g_60[9][5].f1,&g_139.f2.f1,&g_139.f2.f1,&g_149[2][0].f2.f1,&g_139.f2.f1,&g_149[2][0].f2.f1}},{{&g_33,&g_62.f1,(void*)0,(void*)0,&g_62.f1,&g_33,&g_62.f1,&g_2,&g_149[2][0].f2.f1},{&g_139.f2.f1,&g_139.f2.f1,&g_149[2][0].f2.f1,&g_2,&g_60[9][5].f1,&g_2,&g_60[9][5].f1,&g_60[9][5].f1,(void*)0},{(void*)0,&g_2,&g_2,&g_149[2][0].f2.f1,&g_62.f1,&g_33,&g_62.f1,&g_149[2][0].f2.f1,&g_2},{&g_60[9][5].f1,&g_60[9][5].f1,&g_139.f2.f1,&g_60[9][5].f1,&g_60[9][5].f1,&g_139.f2.f1,&g_139.f2.f1,(void*)0,(void*)0},{&g_60[9][5].f1,&g_139.f2.f1,&g_60[9][5].f1,&g_139.f2.f1,&g_33,&g_139.f2.f1,&g_62.f1,&g_62.f1,&g_62.f1},{(void*)0,&g_139.f2.f1,&g_139.f2.f1,&g_60[9][5].f1,&g_139.f2.f1,&g_139.f2.f1,(void*)0,&g_149[2][0].f2.f1,&g_62.f1},{(void*)0,&g_62.f1,&g_2,&g_139.f2.f1,&g_149[2][0].f2.f1,&g_2,&g_139.f2.f1,&g_33,&g_139.f2.f1},{&g_149[2][0].f2.f1,&g_60[9][5].f1,&g_149[2][0].f2.f1,&g_149[2][0].f2.f1,&g_149[2][0].f2.f1,&g_139.f2.f1,&g_139.f2.f1,&g_149[2][0].f2.f1,&g_149[2][0].f2.f1},{(void*)0,&g_60[9][5].f1,(void*)0,&g_62.f1,&g_139.f2.f1,&g_149[2][0].f2.f1,&g_33,&g_62.f1,&g_33}},{{&g_2,&g_149[2][0].f2.f1,&g_60[9][5].f1,&g_139.f2.f1,&g_139.f2.f1,&g_149[2][0].f2.f1,&g_149[2][0].f2.f1,(void*)0,&g_149[2][0].f2.f1},{&g_149[2][0].f2.f1,&g_139.f2.f1,&g_139.f2.f1,&g_62.f1,&g_62.f1,&g_139.f2.f1,&g_139.f2.f1,&g_149[2][0].f2.f1,(void*)0},{&g_60[9][5].f1,&g_60[9][5].f1,&g_2,&g_139.f2.f1,&g_139.f2.f1,&g_149[2][0].f2.f1,&g_60[9][5].f1,&g_149[2][0].f2.f1,&g_149[2][0].f2.f1},{(void*)0,&g_33,&g_33,&g_139.f2.f1,&g_2,&g_33,(void*)0,&g_33,&g_2},{&g_139.f2.f1,&g_62.f1,&g_62.f1,&g_139.f2.f1,&g_60[9][5].f1,&g_139.f2.f1,&g_60[9][5].f1,(void*)0,&g_149[2][0].f2.f1},{&g_139.f2.f1,&g_33,&g_33,(void*)0,&g_62.f1,&g_139.f2.f1,&g_62.f1,&g_139.f2.f1,&g_139.f2.f1},{&g_139.f2.f1,&g_149[2][0].f2.f1,&g_2,(void*)0,&g_60[9][5].f1,(void*)0,&g_2,&g_149[2][0].f2.f1,&g_139.f2.f1},{&g_149[2][0].f2.f1,&g_139.f2.f1,(void*)0,&g_60[9][5].f1,&g_2,&g_62.f1,&g_62.f1,&g_139.f2.f1,(void*)0},{&g_60[9][5].f1,&g_60[9][5].f1,&g_139.f2.f1,&g_149[2][0].f2.f1,&g_139.f2.f1,&g_139.f2.f1,&g_139.f2.f1,&g_139.f2.f1,&g_139.f2.f1}}};
        short l_1080 = 4L;
        struct S1 l_1090 = {0UL,0x0F014640L,{0x1FL,-1L,65535UL,0UL,0xA055L,9L},0x1EC109F2L,4294967295UL,65535UL,5UL,253UL};
        unsigned l_1163 = 0UL;
        int i, j, k;
    }
    for (g_565 = 0; (g_565 >= 0); g_565 -= 1)
    {
        int l_1167 = 0L;
        short l_1177 = 0L;
        int i;
        (*l_1045) = l_1167;
        g_1168 = &g_1035[(g_565 + 1)];

        ;
        for (g_62.f0 = 0; (g_62.f0 <= 0); g_62.f0 += 1)
        {
            int *l_1176 = (void*)0;
            struct S0 l_1178 = {0xC5L,-8L,65531UL,0xEEC15BD3L,65527UL,0x1EB0L};
            (*g_32) ^= (safe_sub_func_int32_t_s_s((*g_671), (safe_lshift_func_uint16_t_u_u((&g_136 == l_1173), 1))));
            l_1177 = (safe_rshift_func_int8_t_s_s((l_1176 == l_1176), 6));
            for (g_139.f5 = 0; (g_139.f5 <= 0); g_139.f5 += 1)
            {
                struct S0 l_1185 = {0xA2L,1L,0xA3E1L,4294967295UL,65532UL,0x2C2DL};
                int i, j, k;
                l_1166[5][7][0] = &l_1167;
                (**g_136) = l_1178;
                if (l_1164[g_565][(g_139.f5 + 3)][(g_565 + 2)])
                {
                    int i, j, k;
                    l_1176 = func_19(l_1164[g_139.f5][(g_139.f5 + 2)][g_565]);

                    ;
                    ;
                    (*g_821) = ((l_1177 | ((*l_1176) ^ (l_1164[g_139.f5][(g_139.f5 + 2)][g_565] ^ (safe_mod_func_int32_t_s_s(((((g_149[2][0].f2.f2 & (safe_add_func_uint32_t_u_u((l_1164[g_139.f5][(g_139.f5 + 2)][g_565] == g_139.f6), ((g_149[2][0].f2.f1 ^ (safe_sub_func_uint8_t_u_u(g_60[9][5].f4, g_60[9][5].f0))) | 0L)))) < 0x9BL) | 0xD1L) | 254UL), (*g_665)))))) <= (*l_1176));
                }
                else
                {
                    struct S1 l_1186 = {4UL,0xE33D26AAL,{0xE1L,0L,0UL,5UL,0UL,-6L},0x38FA8672L,0xF20AF07BL,0xB2B8L,0xCE0DCE2DL,0UL};
                    if ((*g_665))
                    {
                        return g_363;
                    }
                    else
                    {
                        return g_60[9][5].f5;
                    }
                }

                ;
                ;
            }

            ;
        }


    }

    ;

    ;
    l_1187 = func_11(l_1044[0], g_149[2][0].f2.f3, (**g_136));

    ;
    ;
    for (g_139.f2.f3 = 18; (g_139.f2.f3 > 55); g_139.f2.f3++)
    {
        unsigned l_1190 = 1UL;
        int l_1193[3][2];
        struct S0 **l_1218[4][9] = {{&g_137,&g_137,&g_137,&g_137,&g_137,&g_137,&g_137,&g_137,&g_137},{&g_137,&g_137,&g_137,&g_137,&g_137,&g_137,&g_137,&g_137,&g_137},{&g_137,&g_137,&g_137,&g_137,&g_137,&g_137,&g_137,&g_137,&g_137},{&g_137,&g_137,&g_137,&g_137,&g_137,&g_137,&g_137,&g_137,&g_137}};
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
                l_1193[i][j] = 0x9D36FFE8L;
        }
        (*g_665) = ((-6L) < (l_1190 | g_149[2][0].f0));
        for (g_139.f2.f2 = 29; (g_139.f2.f2 != 18); g_139.f2.f2 = safe_sub_func_int32_t_s_s(g_139.f2.f2, 8))
        {
            char l_1194 = 0x42L;
            l_1193[2][0] &= ((*g_350) != (void*)0);
            (*g_665) ^= (((0x168BL <= ((~(((g_149[2][0].f2.f1 | l_1194) || (((safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s(0x2CL, (0x8478L && 0x9013L))), ((safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(l_1194, (((g_642 | (safe_lshift_func_uint16_t_u_u(65535UL, 6))) && g_139.f2.f3) >= g_346[6]))), l_1194)) == 0xA3L))), g_149[2][0].f7)) || g_565) <= g_33)) == l_1194)) <= 0x2BL)) >= g_363) < 0x75BFL);
            for (g_62.f4 = 0; (g_62.f4 >= 38); g_62.f4 = safe_add_func_uint8_t_u_u(g_62.f4, 2))
            {
                (*g_821) &= func_9(&l_1193[1][1]);

                ;
                for (l_1094.f2.f3 = 0; (l_1094.f2.f3 == 41); ++l_1094.f2.f3)
                {
                    for (l_1094.f2.f0 = 0; (l_1094.f2.f0 <= 5); l_1094.f2.f0 += 1)
                    {
                        (*g_350) = (*g_350);
                    }
                }
                return (*l_1045);


            }
        }
        for (g_33 = (-26); (g_33 == 20); ++g_33)
        {
            unsigned short l_1213 = 0xA075L;
            (*g_665) = (-1L);
            if (l_1213)
                break;
            (*g_1168) = (*g_1168);
        }
        (*l_1045) &= ((l_1193[2][0] && ((+(safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(g_1046, (l_1190 | g_149[2][0].f2.f0))) >= ((*g_377) != (void*)0)), 14))) >= (0x8A27D797L ^ (l_1218[2][0] != &g_137)))) != g_346[6]);
    }

    ;

    return g_642;
}







static int * func_7(unsigned short p_8)
{
    unsigned l_629[1];
    int l_630 = 0x4F68241AL;
    int **l_631 = &g_32;
    int **l_637[7] = {&g_32,&g_32,&g_32,&g_32,&g_32,&g_32,&g_32};
    struct S0 **l_668 = &g_137;
    char l_688[6];
    struct S0 l_694 = {2UL,0x1168E8E3L,0x9AC0L,0xD367D5A2L,65535UL,-1L};
    struct S1 l_714 = {5UL,0UL,{251UL,0x2DD86BE1L,0xA250L,0x485E9C34L,1UL,1L},0xC1F0AC1DL,4294967295UL,1UL,1UL,0UL};
    unsigned l_868 = 0xEF479454L;
    int *l_872[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    struct S1 ***l_930 = (void*)0;
    struct S1 l_984 = {1UL,4294967295UL,{1UL,-1L,4UL,1UL,0UL,0x559DL},0x24998896L,9UL,0x1469L,0UL,2UL};
    short l_1040 = 0L;
    unsigned char l_1041 = 0x80L;
    int *l_1042 = &g_60[9][5].f1;
    int i;
    for (i = 0; i < 1; i++)
        l_629[i] = 1UL;
    for (i = 0; i < 6; i++)
        l_688[i] = 0x70L;
    l_630 = ((safe_unary_minus_func_int16_t_s(p_8)) >= (safe_sub_func_int16_t_s_s(l_629[0], p_8)));
    if ((func_17(&l_630) != (l_631 == (*g_377))))
    {
        short l_634[8][7] = {{(-1L),(-1L),(-1L),(-1L),(-6L),(-1L),0L},{0x42FCL,0x9E4DL,0x42FCL,(-5L),(-1L),(-5L),0x42FCL},{(-1L),(-1L),0x57DFL,0L,(-1L),0x4AE6L,0L},{0x515AL,(-5L),(-1L),0x9E4DL,(-1L),(-5L),0x515AL},{(-6L),0L,(-1L),(-6L),(-1L),(-1L),(-1L)},{(-1L),0x9E4DL,0x3457L,0x9E4DL,(-1L),0x4765L,(-1L)},{(-1L),(-6L),(-1L),0L,(-6L),(-6L),0L},{(-1L),0x9E4DL,(-1L),(-5L),0x515AL,(-5L),(-1L)}};
        int i, j;
        for (g_139.f6 = 29; (g_139.f6 <= 50); ++g_139.f6)
        {
            l_630 = (*g_162);
        }
        l_634[3][2] = (-1L);
    }
    else
    {
        unsigned short l_635 = 65535UL;
        struct S1 l_636 = {0x02FADF47L,0x7E3387D3L,{0x57L,9L,0xEE08L,0x966B879EL,0x2145L,0x0E10L},0xCED4C0BAL,0xDEFB64C8L,0UL,4294967287UL,9UL};
        int *l_638 = (void*)0;
        int l_641 = 0xAD701E45L;
        unsigned short l_643 = 65533UL;
        struct S1 l_647 = {0UL,0x03B903E7L,{255UL,0xBBE0BA0EL,0x2412L,0x6E026E03L,1UL,-10L},0xAAA17615L,0xB51808B7L,0x0D8FL,4UL,251UL};
        short l_662[5][4][6] = {{{1L,0x9FDDL,0xCB8AL,0x7887L,0L,0x034DL},{4L,0x7887L,0xFC62L,0xFC62L,0x7887L,4L},{0xFC62L,0x7887L,4L,0x16A8L,0L,0xCB8AL},{0xCB8AL,0x9FDDL,1L,0x9FDDL,0xCB8AL,0x7887L}},{{0xCB8AL,0xFC62L,0xBD5DL,4L,1L,1L},{0x9FDDL,1L,1L,0x9FDDL,0L,1L},{0xFC62L,1L,0xBD5DL,0x034DL,4L,0x034DL},{0L,0xCB8AL,0L,0x16A8L,4L,0x7887L}},{{0xBD5DL,1L,0xFC62L,0L,0L,0xFC62L},{1L,1L,0x9FDDL,0L,1L,0x16A8L},{0xBD5DL,0x9FDDL,0x7887L,0x16A8L,0x7887L,0x9FDDL},{0L,0xBD5DL,0x7887L,0x034DL,1L,0x16A8L}},{{0xFC62L,0x034DL,0x9FDDL,0x9FDDL,0x034DL,0xFC62L},{0x9FDDL,0x034DL,0xFC62L,4L,1L,0x7887L},{0x7887L,0xBD5DL,0L,0xBD5DL,0x7887L,0x034DL},{0x7887L,0x9FDDL,0xBD5DL,4L,1L,1L}},{{0x9FDDL,1L,1L,0x9FDDL,0L,1L},{0xFC62L,1L,0xBD5DL,0x034DL,4L,0x034DL},{0L,0xCB8AL,0L,0x16A8L,4L,0x7887L},{0xBD5DL,1L,0xFC62L,0L,0L,0xFC62L}}};
        int i, j, k;
        g_60[9][5].f1 = (p_8 && ((safe_mod_func_int8_t_s_s(((p_8 < l_641) && 65533UL), 7UL)) & g_642));
        g_33 = (((1L | (-1L)) == (g_60[9][5].f4 & p_8)) != ((((p_8 <= func_9(&l_641)) && 0UL) != l_643) >= p_8));

        ;
        if (p_8)
        {
            int *l_651 = &g_62.f1;
            struct S1 l_656 = {0xFC355F52L,0x7A9050F6L,{0x75L,0xAC78071FL,0xD279L,0x8AA0B6DDL,65531UL,-7L},0x186D1E44L,1UL,1UL,0x4CDCD327L,255UL};
            (*l_631) = &l_641;

            ;
            for (l_636.f1 = 29; (l_636.f1 != 10); l_636.f1 = safe_sub_func_int8_t_s_s(l_636.f1, 1))
            {
                struct S1 *l_646[4][2] = {{&g_149[2][0],&g_149[2][0]},{&g_149[2][0],&g_149[2][0]},{&g_149[2][0],&g_149[2][0]},{&g_149[2][0],&g_149[2][0]}};
                int i, j;
                l_647 = l_636;
            }
            if (((safe_mul_func_int32_t_s_s(l_636.f5, 0L)) < p_8))
            {
                int l_650 = 0x7B8D6DE5L;
                l_650 &= 0xBCFC3064L;
                (*l_631) = l_651;

                ;
            }
            else
            {
                int **l_657 = (void*)0;
                l_651 = func_19(((g_642 & (safe_sub_func_uint32_t_u_u(6UL, (safe_lshift_func_uint16_t_u_s(func_17(&g_33), 10))))) ^ p_8));

                ;
            }

            ;
            ;
        }
        else
        {
            int **l_664 = (void*)0;
            for (l_636.f5 = 0; (l_636.f5 <= 58); ++l_636.f5)
            {
                unsigned char l_663 = 0x5FL;
                g_33 = (((safe_mod_func_uint8_t_u_u(255UL, g_149[2][0].f2.f5)) | (~g_149[2][0].f2.f0)) >= l_662[4][3][5]);
                if (l_663)
                    break;
                (*g_377) = l_664;
            }
            return g_665;



        }

        ;
    }



    if (((safe_rshift_func_uint8_t_u_u((g_139.f2.f3 && ((l_668 == (void*)0) && (safe_add_func_uint8_t_u_u((&g_378 == &l_637[0]), (((g_671 == (void*)0) < (*g_665)) >= (((g_346[1] == 1UL) && 8UL) > p_8)))))), g_149[2][0].f4)) == p_8))
    {
        struct S0 l_672[10] = {{0x47L,1L,0x85BEL,0xF8BE1593L,0UL,0x95ADL},{0x47L,1L,0x85BEL,0xF8BE1593L,0UL,0x95ADL},{0x47L,1L,0x85BEL,0xF8BE1593L,0UL,0x95ADL},{0x47L,1L,0x85BEL,0xF8BE1593L,0UL,0x95ADL},{0x47L,1L,0x85BEL,0xF8BE1593L,0UL,0x95ADL},{0x47L,1L,0x85BEL,0xF8BE1593L,0UL,0x95ADL},{0x47L,1L,0x85BEL,0xF8BE1593L,0UL,0x95ADL},{0x47L,1L,0x85BEL,0xF8BE1593L,0UL,0x95ADL},{0x47L,1L,0x85BEL,0xF8BE1593L,0UL,0x95ADL},{0x47L,1L,0x85BEL,0xF8BE1593L,0UL,0x95ADL}};
        int i;
        (**l_668) = l_672[1];
    }
    else
    {
        int *l_673 = &g_2;
        struct S1 l_674 = {0x25872184L,0UL,{8UL,1L,65535UL,0x8669790AL,0x084CL,0x04B0L},0x2E596FA4L,0xD6579CF5L,0UL,1UL,0x96L};
        int *l_681 = (void*)0;
        int ***l_698 = &l_637[1];
        int *l_717 = &g_60[9][5].f1;
        int l_790[4][9] = {{4L,4L,0x9945A99AL,4L,4L,0x9945A99AL,4L,4L,0x9945A99AL},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{4L,4L,0x9945A99AL,4L,4L,0x9945A99AL,4L,4L,0x9945A99AL},{1L,1L,1L,1L,1L,1L,1L,1L,1L}};
        unsigned l_795 = 1UL;
        unsigned l_904[9][8][2] = {{{0x6BCA02C4L,0x6BCA02C4L},{0UL,0xB51AE459L},{4294967295UL,0x1CCFF6CDL},{1UL,0x70A9CCE2L},{6UL,1UL},{0UL,0xFC2397F7L},{0UL,1UL},{6UL,0x70A9CCE2L}},{{1UL,0x1CCFF6CDL},{4294967295UL,0xB51AE459L},{0UL,0x6BCA02C4L},{0x6BCA02C4L,0xA59DB207L},{1UL,4294967295UL},{0x25A7F77EL,0UL},{0x05BD0721L,0x14C2275BL},{0xB51AE459L,0x35879171L}},{{0xA59DB207L,0x8C37892CL},{0x14C2275BL,0x8C37892CL},{0xA59DB207L,0x35879171L},{0xB51AE459L,0x14C2275BL},{0x05BD0721L,0UL},{4294967295UL,0x25A7F77EL},{0xB51AE459L,0UL},{0x70A9CCE2L,0x70A9CCE2L}},{{0x82D6F53BL,0UL},{0x1CCFF6CDL,0xBA7A09EEL},{4294967295UL,0x8C37892CL},{0x6B5F0603L,4294967295UL},{6UL,0x6BCA02C4L},{6UL,4294967295UL},{0x6B5F0603L,0x8C37892CL},{4294967295UL,0xBA7A09EEL}},{{0x1CCFF6CDL,0UL},{0x82D6F53BL,0x70A9CCE2L},{0x70A9CCE2L,0UL},{0xB51AE459L,0x25A7F77EL},{4294967295UL,6UL},{0xFC2397F7L,1UL},{0UL,0xCFEA4946L},{0UL,0x35879171L}},{{1UL,0x35879171L},{0UL,0xCFEA4946L},{0UL,1UL},{0xFC2397F7L,6UL},{4294967295UL,0x25A7F77EL},{0xB51AE459L,0UL},{0x70A9CCE2L,0x70A9CCE2L},{0x82D6F53BL,0UL}},{{0x1CCFF6CDL,0xBA7A09EEL},{4294967295UL,0x8C37892CL},{0x6B5F0603L,4294967295UL},{6UL,0x6BCA02C4L},{6UL,4294967295UL},{0x6B5F0603L,0x8C37892CL},{4294967295UL,0xBA7A09EEL},{0x1CCFF6CDL,0UL}},{{0x82D6F53BL,0x70A9CCE2L},{0x70A9CCE2L,0UL},{0xB51AE459L,0x25A7F77EL},{4294967295UL,6UL},{0xFC2397F7L,1UL},{0UL,0xCFEA4946L},{0UL,0x35879171L},{1UL,0x35879171L}},{{0UL,0xCFEA4946L},{0UL,1UL},{0xFC2397F7L,6UL},{4294967295UL,0x25A7F77EL},{0xB51AE459L,0UL},{0x6B5F0603L,0x6B5F0603L},{0x14C2275BL,0xA59DB207L},{0x70A9CCE2L,0x8C37892CL}}};
        struct S0 *l_993 = &l_984.f2;
        int i, j, k;
        if (p_8)
        {
            int *l_675 = &g_2;
            struct S1 *l_686 = (void*)0;
            struct S1 l_715[2] = {{5UL,0xF12AA1E6L,{0x46L,0xEE2BCD9CL,0xD308L,4294967286UL,0x4620L,0x6C61L},9L,0xB9CE572EL,0xA9F1L,0x8E97E0E1L,0xA9L},{5UL,0xF12AA1E6L,{0x46L,0xEE2BCD9CL,0xD308L,4294967286UL,0x4620L,0x6C61L},9L,0xB9CE572EL,0xA9F1L,0x8E97E0E1L,0xA9L}};
            struct S0 *l_761 = &g_60[9][5];
            char l_799 = 0x1DL;
            int i;
            (*l_631) = l_675;

            ;
            if ((*g_665))
            {
                unsigned short l_676 = 65535UL;
                struct S1 ***l_678 = &g_350;
                int *l_680 = (void*)0;
                (*g_665) &= (*l_675);
                for (g_565 = 0; (g_565 >= 0); g_565 -= 1)
                {
                    struct S1 *l_677 = &g_149[1][0];
                    int i;
                    if (l_676)
                        break;
                    (*l_677) = l_674;
                    for (l_674.f2.f5 = 0; (l_674.f2.f5 >= 0); l_674.f2.f5 -= 1)
                    {
                        short l_679 = 0x1A04L;
                        l_679 = ((*g_671) >= ((void*)0 != l_678));
                        if (p_8)
                            continue;
                    }
                    for (g_139.f2.f4 = 2; (g_139.f2.f4 <= 6); g_139.f2.f4 += 1)
                    {
                        (*l_631) = l_680;

                        ;
                        if ((*l_673))
                            continue;
                        return l_681;


                    }
                }

                ;
                for (l_676 = 0; l_676 < 7; l_676 += 1)
                {
                    g_346[l_676] = 255UL;
                }
            }
            else
            {
                int l_699 = 0x9E2F5225L;
                int l_711 = 4L;
                struct S0 ***l_718 = (void*)0;
                int *l_719[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_719[i] = (void*)0;
                (*g_665) = p_8;
                if ((*l_675))
                {
                    int *l_695[6][3] = {{&l_694.f1,&g_139.f2.f1,&l_694.f1},{&g_60[9][5].f1,&g_2,(void*)0},{&g_60[9][5].f1,&g_60[9][5].f1,&g_2},{&l_694.f1,&g_2,&g_2},{&g_2,&g_139.f2.f1,(void*)0},{&l_694.f1,&g_139.f2.f1,&l_694.f1}};
                    int i, j;
                    for (g_139.f3 = 0; (g_139.f3 >= (-1)); g_139.f3--)
                    {
                        int l_687 = 0x17D8976BL;
                        l_688[3] |= ((safe_lshift_func_uint8_t_u_u(((*g_350) != l_686), ((g_149[2][0].f7 & g_139.f5) >= g_149[2][0].f0))) ^ l_687);
                        if (p_8)
                            continue;
                    }
                    g_665 = l_675;

                    ;
                    for (g_33 = 0; (g_33 >= (-5)); g_33--)
                    {
                        unsigned char l_693 = 0UL;
                        (*g_136) = (void*)0;

                        ;
                        l_695[0][1] = func_11(l_681, (safe_rshift_func_int8_t_s_s(l_693, 3)), l_694);
                    }

                    ;
                    ;
                }
                else
                {
                    return l_673;


                }

                ;
                ;
                ;
                if (((safe_add_func_uint16_t_u_u(p_8, g_60[9][5].f4)) & (p_8 == (&g_351 != &g_351))))
                {
                    (*l_631) = l_675;

                    ;
                    return (*l_631);


                }
                else
                {
                    int *l_710 = &g_139.f2.f1;
                    l_699 &= (p_8 == (l_698 == &g_378));
                    for (l_674.f3 = 2; (l_674.f3 <= 6); l_674.f3 += 1)
                    {
                        l_711 ^= (safe_sub_func_int16_t_s_s(0x6B64L, (safe_sub_func_uint8_t_u_u((g_139.f2.f3 & ((safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((func_17(func_11(l_710, (p_8 > (-6L)), l_674.f2)) >= 0x7CL), 13)), p_8)), 6)) <= 0L)), l_699))));
                        if ((*l_710))
                            break;
                    }
                    if (((*l_675) ^ (safe_mod_func_int8_t_s_s(g_60[9][5].f4, (*l_673)))))
                    {
                        int l_716[8][3] = {{0x8EA4BD10L,2L,0x50DD60C9L},{0x8EA4BD10L,0x8EA4BD10L,2L},{0x9DF9A5AEL,2L,2L},{2L,(-1L),0x50DD60C9L},{0x9DF9A5AEL,(-1L),0x9DF9A5AEL},{0x8EA4BD10L,2L,0x50DD60C9L},{0x8EA4BD10L,0x8EA4BD10L,2L},{0x9DF9A5AEL,2L,2L}};
                        int i, j;
                        l_711 |= 0x5BC3CA35L;
                        l_715[0] = l_714;
                        l_716[2][2] = (g_149[2][0].f3 || g_62.f5);
                        l_717 = l_681;

                        ;
                    }
                    else
                    {
                        unsigned short l_734 = 7UL;
                        (*l_710) = ((void*)0 != l_718);
                        (*l_631) = func_11(&l_711, p_8, l_715[0].f2);

                        ;
                        l_719[1] = (*l_631);


                        (*g_32) = (((0x85L != ((safe_add_func_int8_t_s_s((*l_710), ((safe_add_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(((*l_675) ^ (safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((-5L), ((safe_rshift_func_uint16_t_u_u(p_8, (safe_rshift_func_uint8_t_u_u(g_149[2][0].f3, p_8)))) ^ l_734))), 3))), 1)) != l_734), (-1L))) >= 4294967295UL))) < g_139.f5)) && p_8) || 0x991AF9CAL);
                    }

                    ;
                    ;

                }

                ;
                ;

            }


            ;
            ;
            ;
            if (((p_8 == (*l_673)) != ((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(p_8, 9)), g_60[9][5].f5)) < p_8)))
            {
                struct S1 l_744 = {0xC8364F4FL,0UL,{0x8DL,0x9D9CC205L,8UL,0UL,65535UL,0xFA9CL},0L,4294967288UL,0x1397L,0x07423B4CL,246UL};
                unsigned l_747 = 1UL;
                int *l_755 = (void*)0;
                int *l_756 = &g_60[9][5].f1;
                if ((safe_lshift_func_uint8_t_u_s(g_139.f2.f2, 5)))
                {
                    struct S1 **l_741 = &g_351;
                    int *l_746 = &g_60[9][5].f1;
                    for (g_139.f0 = 1; (g_139.f0 <= 6); g_139.f0 += 1)
                    {
                        int *l_745 = (void*)0;
                        int i;
                        l_715[0].f2.f1 = (0L > (((+(l_741 != (void*)0)) && p_8) > ((((safe_sub_func_int32_t_s_s((*g_671), (((0x86A74737L & (((p_8 || l_747) & p_8) <= g_139.f0)) ^ 0x389E08F2L) >= (*l_675)))) < p_8) <= g_139.f3) == g_62.f0)));
                    }
                    for (g_62.f2 = 18; (g_62.f2 > 45); g_62.f2 = safe_add_func_uint8_t_u_u(g_62.f2, 3))
                    {
                        (*l_631) = l_746;

                        ;
                        return l_675;


                    }
                }
                else
                {
                    struct S0 ***l_750 = &g_136;
                    (*l_750) = l_668;
                    for (l_714.f5 = 0; l_714.f5 < 1; l_714.f5 += 1)
                    {
                        l_629[l_714.f5] = 0xABAD5C72L;
                    }
                    for (l_674.f2.f5 = 0; l_674.f2.f5 < 7; l_674.f2.f5 += 1)
                    {
                        g_346[l_674.f2.f5] = 0xB7L;
                    }
                }
                if ((safe_add_func_int32_t_s_s(p_8, (255UL > (((safe_mod_func_int8_t_s_s(((l_755 == (void*)0) && ((*l_675) & p_8)), 9UL)) && (*l_756)) && p_8)))))
                {
                    for (g_62.f2 = 28; (g_62.f2 <= 24); g_62.f2 = safe_sub_func_int8_t_s_s(g_62.f2, 7))
                    {
                        int *l_759 = &g_139.f2.f1;
                        struct S0 *l_760 = &l_714.f2;
                        (*l_631) = l_759;

                        ;
                        (*l_760) = l_744.f2;
                    }


                }
                else
                {
                    (*g_136) = l_761;

                    ;
                    (*l_756) = p_8;
                }


                ;
            }
            else
            {
                int l_771[1][4][9] = {{{(-1L),0xE7603BD9L,0xE7603BD9L,(-1L),0x4A27B6B5L,0x35FBBB7FL,0x4A27B6B5L,(-1L),0xE7603BD9L},{0L,0L,5L,0L,(-1L),0L,5L,0L,0L},{0xE7603BD9L,(-1L),0x4A27B6B5L,0x35FBBB7FL,0x4A27B6B5L,(-1L),0xE7603BD9L,0xE7603BD9L,(-1L)},{0L,0x0A38EB0AL,5L,0x0A38EB0AL,0L,(-1L),(-1L),0L,0x0A38EB0AL}}};
                unsigned short l_796 = 0x217EL;
                int l_805 = 0xE2F7DE36L;
                int *l_809 = &g_62.f1;
                int i, j, k;
                if (p_8)
                {
                    int *l_775 = &g_149[2][0].f2.f1;
                    for (g_139.f4 = 0; (g_139.f4 <= 0); g_139.f4 += 1)
                    {
                        int l_762 = 0x7A052843L;
                        int *l_772[7][6][6] = {{{&l_715[0].f2.f1,&l_694.f1,&l_694.f1,&g_60[9][5].f1,(void*)0,(void*)0},{&g_139.f2.f1,&g_149[2][0].f2.f1,&g_149[2][0].f2.f1,(void*)0,&g_149[2][0].f2.f1,&g_149[2][0].f2.f1},{&g_149[2][0].f2.f1,(void*)0,&g_60[9][5].f1,&l_771[0][1][3],(void*)0,&g_33},{&g_139.f2.f1,&g_33,(void*)0,&l_714.f2.f1,&l_714.f2.f1,(void*)0},{&g_60[9][5].f1,&g_60[9][5].f1,&l_771[0][1][3],&g_60[9][5].f1,(void*)0,(void*)0},{&g_60[9][5].f1,&l_674.f2.f1,&g_2,&g_33,(void*)0,&l_771[0][1][3]}},{{&g_62.f1,&g_60[9][5].f1,&g_2,&l_694.f1,&g_60[9][5].f1,(void*)0},{&g_149[2][0].f2.f1,&l_694.f1,&l_771[0][1][3],&g_33,&g_62.f1,(void*)0},{&g_33,&g_62.f1,(void*)0,&l_715[0].f2.f1,&g_149[2][0].f2.f1,&g_33},{(void*)0,(void*)0,&g_60[9][5].f1,&l_674.f2.f1,&l_694.f1,&g_149[2][0].f2.f1},{&l_694.f1,&g_2,&l_694.f1,(void*)0,(void*)0,(void*)0},{&g_33,&g_149[2][0].f2.f1,&g_33,(void*)0,&g_139.f2.f1,&g_62.f1}},{{(void*)0,&l_714.f2.f1,(void*)0,&g_60[9][5].f1,(void*)0,&g_33},{(void*)0,&l_694.f1,(void*)0,&g_60[9][5].f1,(void*)0,(void*)0},{(void*)0,(void*)0,&l_694.f1,(void*)0,&l_715[0].f2.f1,&g_139.f2.f1},{&g_33,(void*)0,&g_60[9][5].f1,(void*)0,&l_714.f2.f1,(void*)0},{&l_694.f1,&g_149[2][0].f2.f1,(void*)0,&l_674.f2.f1,(void*)0,&g_2},{(void*)0,&g_62.f1,&l_694.f1,&g_33,(void*)0,(void*)0}},{{&g_139.f2.f1,(void*)0,(void*)0,&g_139.f2.f1,&l_771[0][1][3],&l_714.f2.f1},{&g_33,(void*)0,(void*)0,&g_149[2][0].f2.f1,&g_2,(void*)0},{&g_60[9][5].f1,&g_60[9][5].f1,(void*)0,(void*)0,&g_2,&l_714.f2.f1},{(void*)0,(void*)0,&g_149[2][0].f2.f1,&g_149[2][0].f2.f1,&l_771[0][1][3],&g_62.f1},{(void*)0,(void*)0,(void*)0,&g_149[2][0].f2.f1,(void*)0,&l_715[0].f2.f1},{&l_694.f1,&g_60[9][5].f1,&g_2,&g_33,&g_60[9][5].f1,&g_149[2][0].f2.f1}},{{&g_60[9][5].f1,&l_771[0][1][3],&g_33,(void*)0,&l_694.f1,&g_33},{&g_33,&g_2,&l_714.f2.f1,&g_2,&g_33,&g_60[9][5].f1},{&g_60[9][5].f1,(void*)0,&l_715[0].f2.f1,&l_694.f1,(void*)0,&l_771[0][1][3]},{&g_149[2][0].f2.f1,&g_149[2][0].f2.f1,&g_60[9][5].f1,(void*)0,(void*)0,&l_771[0][1][3]},{&l_714.f2.f1,&l_674.f2.f1,&l_715[0].f2.f1,&l_694.f1,&l_694.f1,&g_60[9][5].f1},{(void*)0,&g_60[9][5].f1,&l_714.f2.f1,(void*)0,&g_60[9][5].f1,&g_33}},{{(void*)0,(void*)0,&g_33,(void*)0,(void*)0,&g_149[2][0].f2.f1},{&g_62.f1,&g_60[9][5].f1,&g_2,&g_33,(void*)0,&l_715[0].f2.f1},{&g_62.f1,(void*)0,(void*)0,(void*)0,(void*)0,&g_62.f1},{&l_771[0][1][3],&g_149[2][0].f2.f1,(void*)0,&l_714.f2.f1,&g_33,&l_771[0][1][3]},{(void*)0,&g_2,&l_771[0][1][3],&g_2,&g_149[2][0].f2.f1,(void*)0},{(void*)0,(void*)0,&g_2,&l_714.f2.f1,(void*)0,&g_62.f1}},{{&l_694.f1,&g_33,&g_149[2][0].f2.f1,&g_60[9][5].f1,(void*)0,&g_60[9][5].f1},{&l_674.f2.f1,&l_714.f2.f1,(void*)0,&g_149[2][0].f2.f1,(void*)0,(void*)0},{&g_149[2][0].f2.f1,(void*)0,&g_149[2][0].f2.f1,(void*)0,(void*)0,(void*)0},{&g_60[9][5].f1,&g_33,&g_2,&l_714.f2.f1,&g_2,&g_33},{&g_149[2][0].f2.f1,(void*)0,&g_149[2][0].f2.f1,(void*)0,&g_33,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_674.f2.f1,&l_715[0].f2.f1}}};
                        int i, j, k;
                        l_762 &= (l_675 != (void*)0);
                        (*l_631) = l_772[4][3][3];

                        ;
                        (*l_775) &= (((*g_350) != (void*)0) || (l_775 == &l_771[0][3][4]));
                    }


                    for (l_714.f2.f0 = (-26); (l_714.f2.f0 > 3); l_714.f2.f0 = safe_add_func_uint32_t_u_u(l_714.f2.f0, 6))
                    {
                        (*l_668) = (*g_136);
                    }
                    (*l_775) = ((safe_rshift_func_uint8_t_u_s(((*g_350) != &l_715[0]), 4)) || (l_637[5] != (*g_377)));
                }
                else
                {
                    int ***l_780[2];
                    struct S1 l_787 = {1UL,4294967295UL,{0x89L,0x04590AB7L,0xA1CEL,1UL,9UL,0x39B1L},0x0E9B7748L,0UL,0xC6D6L,0xBB3EDF07L,0xFBL};
                    int i;
                    for (i = 0; i < 2; i++)
                        l_780[i] = &l_631;
                    g_62.f1 &= (p_8 | (g_139.f2.f5 >= (((void*)0 != l_780[1]) | (g_139.f7 || (safe_rshift_func_int16_t_s_s((g_139.f7 & (safe_sub_func_int8_t_s_s((((g_149[2][0].f7 | 3L) < 255UL) > p_8), 0x65L))), 15))))));
                    for (g_139.f2.f4 = 2; (g_139.f2.f4 >= 36); g_139.f2.f4++)
                    {
                        if (p_8)
                            break;
                        (*l_631) = (void*)0;

                        ;
                        (*l_631) = &l_771[0][2][0];

                        ;
                        (**l_631) &= 0L;
                    }


                    for (l_714.f3 = 0; (l_714.f3 > (-1)); l_714.f3 = safe_sub_func_uint32_t_u_u(l_714.f3, 1))
                    {
                        g_32 = &l_771[0][0][0];

                        ;
                        if ((*g_32))
                            break;
                        if (p_8)
                            break;
                        l_790[1][8] |= (func_17(&l_771[0][1][3]) & (0x4BL && ((0xD2L || (&l_715[0] != (*g_350))) >= (*g_665))));
                    }
                }


                (*g_350) = &l_674;

                ;
                if (((0xE0L <= (p_8 & ((((g_346[0] | g_139.f3) <= p_8) ^ 0xAEF2BD9CL) == (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((l_795 < (p_8 <= (l_796 || g_62.f5))), 3)), 4))))) > 0UL))
                {
                    int *l_801 = &l_771[0][1][8];
                    for (g_139.f2.f2 = 0; (g_139.f2.f2 == 21); g_139.f2.f2 = safe_add_func_int16_t_s_s(g_139.f2.f2, 3))
                    {
                        unsigned short l_800[2][10][5] = {{{0UL,4UL,0UL,0UL,4UL},{2UL,0x4BA7L,0xA18AL,0xA395L,0xA18AL},{4UL,0UL,1UL,4UL,4UL},{0UL,0xA395L,0UL,0x4BA7L,0x93A3L},{4UL,0UL,0UL,0UL,0UL},{2UL,0xA395L,5UL,0xA395L,2UL},{0UL,0UL,0UL,0UL,4UL},{0x93A3L,0x4BA7L,0UL,0xA395L,0UL},{4UL,4UL,1UL,0UL,0UL},{5UL,0x4BA7L,5UL,1UL,0xA18AL}},{{0UL,1UL,1UL,0UL,0xA1C5L},{0UL,0x4BA7L,0x93A3L,0x4BA7L,0UL},{0xA1C5L,0UL,1UL,1UL,0UL},{0xA18AL,1UL,5UL,0x4BA7L,5UL},{0UL,0UL,0UL,0UL,0UL},{0x5624L,0x4BA7L,0x5624L,1UL,0UL},{0UL,0xA1C5L,1UL,0UL,0xA1C5L},{0xA18AL,0x4BA7L,2UL,0x4BA7L,0xA18AL},{0xA1C5L,0UL,1UL,0xA1C5L,0UL},{0UL,1UL,0x5624L,0x4BA7L,0x5624L}}};
                        int i, j, k;
                        (*l_631) = &l_771[0][1][5];

                        ;
                        l_800[1][3][1] |= (+l_799);
                        (*l_631) = l_801;
                        (*g_32) = l_800[1][3][1];
                    }
                    g_139.f2.f1 = l_796;
                }
                else
                {
                    struct S1 l_804 = {0x0C66DE29L,0xBFC7FD45L,{0x69L,0x9761C9E3L,0UL,0x774E02C2L,0UL,4L},1L,0x0C0D8687L,0x56D4L,4294967295UL,9UL};
                    int *l_807 = &l_771[0][2][7];
                    for (g_139.f2.f2 = (-3); (g_139.f2.f2 < 1); g_139.f2.f2++)
                    {
                        (*l_631) = (void*)0;

                        ;
                        if (p_8)
                            continue;
                        l_804 = l_674;
                        l_771[0][0][8] = (*g_671);
                    }
                    if (p_8)
                    {
                        int *l_806 = &l_630;
                        l_805 ^= (l_771[0][2][1] < l_796);
                        return &g_2;




                    }
                    else
                    {
                        int *l_808 = &l_790[1][8];
                        (*l_807) = p_8;
                        return l_809;




                    }
                }
                (*l_631) = l_675;

                ;
            }


            ;
            ;
        }
        else
        {
            struct S1 *l_810[5] = {&g_139,&g_139,&g_139,&g_139,&g_139};
            int l_815 = 0xD835EA45L;
            int i;
            g_149[3][0] = l_714;
            if (((*l_717) <= ((&g_351 != &g_351) >= g_149[2][0].f0)))
            {
                unsigned l_813 = 0xB12F8869L;
                struct S1 l_818 = {0x92871A99L,0x0F490249L,{255UL,1L,65529UL,0UL,0x58E1L,0xAC35L},-6L,0xB0DDC68FL,0x8344L,0x914BE3EEL,255UL};
                int *l_820 = &l_815;
                int *l_824 = &g_139.f2.f1;
                for (l_674.f6 = 0; (l_674.f6 <= 6); l_674.f6 += 1)
                {
                    int **l_816 = (void*)0;
                    struct S1 l_822[1] = {{0UL,0x08E875B0L,{0x9AL,0xA910C735L,0x0ABCL,7UL,65535UL,0x4B21L},0xBF4173BDL,0x164D9706L,0xFE31L,7UL,8UL}};
                    int i;
                    if (l_813)
                    {
                        int l_814 = 0L;
                        int *l_817 = &l_674.f2.f1;
                        (*l_717) &= l_814;
                        (*l_631) = &g_33;

                        ;
                    }
                    else
                    {
                        int **l_819 = &g_162;
                        (*l_717) = (*g_821);
                        if (p_8)
                            break;
                        g_149[2][0] = l_822[0];
                    }
                    for (l_674.f2.f2 = 0; (l_674.f2.f2 <= 5); l_674.f2.f2 += 1)
                    {
                        int **l_823 = &g_162;
                        (*l_823) = l_820;

                        ;
                        return l_824;



                    }
                }


                (**g_136) = l_674.f2;
            }
            else
            {
                char l_839[5] = {0xE2L,0xE2L,0xE2L,0xE2L,0xE2L};
                struct S0 l_843 = {0x33L,0x7DA1E04DL,1UL,4294967286UL,0x7304L,0L};
                int i;
                (*l_717) |= (*g_821);
                (*g_821) = ((-1L) != (safe_mod_func_int32_t_s_s((*l_673), (g_139.f5 && (safe_sub_func_uint16_t_u_u(0x865FL, (((g_139.f2.f3 <= p_8) ^ (safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((p_8 & ((l_839[4] > (((p_8 || 0UL) || 0x4EB3L) >= (*g_671))) != 6L)) != p_8), 0x6592L)), 4))) < 0x498CC1D2L)))))));
                for (g_139.f2.f5 = 0; (g_139.f2.f5 >= (-30)); g_139.f2.f5 = safe_sub_func_int8_t_s_s(g_139.f2.f5, 6))
                {
                    int *l_844 = &l_790[1][8];
                    if ((*g_821))
                    {
                        struct S0 l_842 = {0x8EL,0L,0x1D0EL,4294967295UL,0xD5E9L,0xD7E5L};
                        if (p_8)
                            break;
                        l_842 = (**l_668);
                        (*g_665) |= p_8;
                    }
                    else
                    {
                        int **l_847[4][1];
                        int i, j;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_847[i][j] = &g_821;
                        }
                        l_843 = l_674.f2;
                        l_844 = (void*)0;

                        ;
                        l_815 ^= ((p_8 > (l_847[0][0] != &l_844)) ^ (*g_671));
                    }

                    ;
                }
            }


            for (l_714.f4 = 0; (l_714.f4 <= 6); l_714.f4 += 1)
            {
                struct S1 *l_850 = &g_149[0][0];
                int l_860 = (-5L);
                for (g_565 = 0; (g_565 <= 3); g_565 += 1)
                {
                    int i;
                    if ((safe_lshift_func_int16_t_s_s(g_346[(g_565 + 2)], 13)))
                    {
                        (*g_350) = l_850;

                        ;
                    }
                    else
                    {
                        int i, j;
                        if (g_346[(g_565 + 2)])
                            break;
                        l_790[g_565][(g_565 + 1)] = p_8;
                        if (p_8)
                            continue;
                    }
                }
                for (g_642 = 0; (g_642 <= 3); g_642 += 1)
                {
                    struct S0 l_853[5] = {{3UL,0L,65531UL,0x70E65C5BL,0xB54CL,-1L},{3UL,0L,65531UL,0x70E65C5BL,0xB54CL,-1L},{3UL,0L,65531UL,0x70E65C5BL,0xB54CL,-1L},{3UL,0L,65531UL,0x70E65C5BL,0xB54CL,-1L},{3UL,0L,65531UL,0x70E65C5BL,0xB54CL,-1L}};
                    struct S1 l_854[2][2] = {{{0xF51B50BDL,0x71453135L,{0x11L,0x512A4FE0L,0x91EBL,0xE98B1A1CL,0xA3DCL,0x5497L},0L,0x1AD62710L,0x97FDL,0x4869DA5FL,255UL},{0xF51B50BDL,0x71453135L,{0x11L,0x512A4FE0L,0x91EBL,0xE98B1A1CL,0xA3DCL,0x5497L},0L,0x1AD62710L,0x97FDL,0x4869DA5FL,255UL}},{{0xF51B50BDL,0x71453135L,{0x11L,0x512A4FE0L,0x91EBL,0xE98B1A1CL,0xA3DCL,0x5497L},0L,0x1AD62710L,0x97FDL,0x4869DA5FL,255UL},{0xF51B50BDL,0x71453135L,{0x11L,0x512A4FE0L,0x91EBL,0xE98B1A1CL,0xA3DCL,0x5497L},0L,0x1AD62710L,0x97FDL,0x4869DA5FL,255UL}}};
                    int i, j;
                    l_790[g_642][(l_714.f4 + 2)] |= (*g_821);
                    for (l_674.f4 = 0; (l_674.f4 <= 0); l_674.f4 += 1)
                    {
                        int *l_855 = (void*)0;
                        int i, j;
                        l_790[g_642][(l_674.f4 + 1)] = (safe_lshift_func_uint16_t_u_u(g_149[2][0].f2.f0, 6));
                        l_855 = &l_790[g_642][(l_674.f4 + 1)];

                        ;
                        return &g_33;


                    }
                }
                (*l_717) = (p_8 && (safe_sub_func_int8_t_s_s((p_8 | g_149[2][0].f7), 255UL)));
                if (p_8)
                    continue;
                for (g_139.f2.f2 = 0; (g_139.f2.f2 <= 0); g_139.f2.f2 += 1)
                {
                    int *l_871[5][8][6] = {{{&g_62.f1,&l_860,&l_790[1][8],&l_790[1][8],&l_860,&g_62.f1},{(void*)0,&l_790[1][8],&l_694.f1,&g_62.f1,&l_860,(void*)0},{&g_62.f1,&l_860,(void*)0,(void*)0,&g_62.f1,&g_62.f1},{&g_62.f1,(void*)0,(void*)0,&g_62.f1,(void*)0,&l_694.f1},{(void*)0,&l_860,(void*)0,&l_790[1][8],&g_62.f1,&g_62.f1},{&g_62.f1,&l_790[1][8],(void*)0,&g_62.f1,&g_62.f1,(void*)0},{&l_860,&l_860,&l_694.f1,(void*)0,(void*)0,&g_62.f1},{&l_860,(void*)0,&l_790[1][8],&g_62.f1,&g_62.f1,&l_694.f1}},{{&g_62.f1,&l_860,&l_790[1][8],&l_790[1][8],&l_860,&g_62.f1},{(void*)0,&l_790[1][8],&l_694.f1,&g_62.f1,&l_860,(void*)0},{&g_62.f1,&l_860,(void*)0,(void*)0,&g_62.f1,&g_62.f1},{&g_62.f1,(void*)0,(void*)0,&g_62.f1,(void*)0,&l_694.f1},{(void*)0,&l_860,(void*)0,&l_790[1][8],&g_62.f1,&g_62.f1},{&g_62.f1,&l_790[1][8],(void*)0,&g_62.f1,&g_62.f1,(void*)0},{&l_860,&l_860,&l_694.f1,(void*)0,(void*)0,&g_62.f1},{&l_860,(void*)0,&l_790[1][8],&g_62.f1,&g_62.f1,&l_694.f1}},{{&g_62.f1,&l_860,&l_790[1][8],&l_790[1][8],&l_860,&g_62.f1},{(void*)0,&l_790[1][8],&l_694.f1,&g_62.f1,&l_860,(void*)0},{&g_62.f1,&l_860,(void*)0,(void*)0,&g_62.f1,&g_62.f1},{&g_62.f1,(void*)0,(void*)0,&g_62.f1,(void*)0,&l_694.f1},{(void*)0,&l_860,(void*)0,&l_790[1][8],&g_62.f1,&g_62.f1},{&g_62.f1,&l_790[1][8],(void*)0,&g_62.f1,&g_62.f1,(void*)0},{&l_860,&l_860,&l_694.f1,(void*)0,(void*)0,&g_62.f1},{&l_860,(void*)0,&l_790[1][8],&g_62.f1,&g_62.f1,&l_694.f1}},{{&g_62.f1,&l_860,&l_790[1][8],&l_790[1][8],&l_860,&g_62.f1},{(void*)0,&l_790[1][8],&l_694.f1,&g_62.f1,&l_860,(void*)0},{&g_62.f1,&l_860,(void*)0,(void*)0,&g_62.f1,&g_62.f1},{&g_62.f1,(void*)0,(void*)0,&g_62.f1,(void*)0,&l_694.f1},{(void*)0,&l_860,(void*)0,&l_790[1][8],&g_62.f1,&g_62.f1},{&g_62.f1,&l_790[1][8],(void*)0,&g_62.f1,&g_62.f1,(void*)0},{&l_860,&l_860,&l_694.f1,(void*)0,(void*)0,&g_62.f1},{&l_860,(void*)0,&l_790[1][8],&g_62.f1,&g_62.f1,&l_694.f1}},{{&g_62.f1,&l_860,&l_790[1][8],&l_790[1][8],&l_860,&g_62.f1},{(void*)0,&l_790[1][8],&l_694.f1,&g_62.f1,&l_860,(void*)0},{&g_62.f1,&l_860,(void*)0,(void*)0,&g_62.f1,&g_62.f1},{&g_62.f1,(void*)0,(void*)0,&g_62.f1,(void*)0,&l_694.f1},{(void*)0,&l_860,(void*)0,&l_790[1][8],&g_62.f1,&g_62.f1},{&g_62.f1,&l_790[1][8],(void*)0,&g_62.f1,&g_62.f1,(void*)0},{&l_860,&l_860,&l_694.f1,(void*)0,(void*)0,&g_62.f1},{&l_860,(void*)0,&l_790[1][8],&g_62.f1,&g_62.f1,&l_694.f1}}};
                    int i, j, k;
                    if (l_629[g_139.f2.f2])
                        break;
                    for (l_815 = 0; (l_815 >= 0); l_815 -= 1)
                    {
                        int l_862[4][10] = {{0x2F64FE8DL,0x2F64FE8DL,1L,1L,0x2F64FE8DL,0x2F64FE8DL,1L,1L,0x2F64FE8DL,0x2F64FE8DL},{0x2F64FE8DL,1L,1L,0x2F64FE8DL,0x2F64FE8DL,1L,1L,0x2F64FE8DL,0x2F64FE8DL,1L},{0x2F64FE8DL,0x2F64FE8DL,1L,1L,0x2F64FE8DL,0x2F64FE8DL,1L,1L,0x2F64FE8DL,0x2F64FE8DL},{0x2F64FE8DL,1L,1L,0x2F64FE8DL,0x2F64FE8DL,1L,1L,0x2F64FE8DL,0x2F64FE8DL,1L}};
                        struct S1 ***l_867 = &g_350;
                        int i, j;
                        l_790[l_815][l_815] = ((safe_add_func_int32_t_s_s((0x8CB3L && ((g_149[2][0].f2.f4 < (l_860 <= ((safe_unary_minus_func_int32_t_s(l_862[3][2])) || (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s((((void*)0 != l_867) || (l_868 < (safe_sub_func_uint8_t_u_u(g_139.f4, (g_139.f5 | (*g_665)))))), l_860)), 2))))) ^ g_149[2][0].f2.f5)), 0x5A869891L)) != 1L);
                        (*l_631) = &l_860;

                        ;
                    }


                    return &g_2;



                }
            }

            ;
            if (p_8)
            {
                int *l_873 = &g_62.f1;
                return l_873;


            }
            else
            {
                int *l_874 = (void*)0;
                return l_874;


            }
        }


        ;
        ;
        ;
        ;
        if (p_8)
        {
            struct S1 l_875[8] = {{0x0EE3DBD9L,0x7E51BA1FL,{0x69L,-4L,7UL,1UL,0xB18FL,-6L},0x77B2834FL,4294967290UL,0xBB2DL,1UL,0xEDL},{0x0EE3DBD9L,0x7E51BA1FL,{0x69L,-4L,7UL,1UL,0xB18FL,-6L},0x77B2834FL,4294967290UL,0xBB2DL,1UL,0xEDL},{0x0EE3DBD9L,0x7E51BA1FL,{0x69L,-4L,7UL,1UL,0xB18FL,-6L},0x77B2834FL,4294967290UL,0xBB2DL,1UL,0xEDL},{0x0EE3DBD9L,0x7E51BA1FL,{0x69L,-4L,7UL,1UL,0xB18FL,-6L},0x77B2834FL,4294967290UL,0xBB2DL,1UL,0xEDL},{0x0EE3DBD9L,0x7E51BA1FL,{0x69L,-4L,7UL,1UL,0xB18FL,-6L},0x77B2834FL,4294967290UL,0xBB2DL,1UL,0xEDL},{0x0EE3DBD9L,0x7E51BA1FL,{0x69L,-4L,7UL,1UL,0xB18FL,-6L},0x77B2834FL,4294967290UL,0xBB2DL,1UL,0xEDL},{0x0EE3DBD9L,0x7E51BA1FL,{0x69L,-4L,7UL,1UL,0xB18FL,-6L},0x77B2834FL,4294967290UL,0xBB2DL,1UL,0xEDL},{0x0EE3DBD9L,0x7E51BA1FL,{0x69L,-4L,7UL,1UL,0xB18FL,-6L},0x77B2834FL,4294967290UL,0xBB2DL,1UL,0xEDL}};
            struct S1 *l_876[10][7] = {{&l_875[5],&g_149[0][0],&l_875[5],&l_875[5],&g_149[0][0],&l_875[5],&l_875[5]},{&g_149[0][0],&g_149[0][0],&g_139,&g_149[0][0],&g_149[0][0],&g_139,&g_149[0][0]},{&g_149[0][0],&l_875[5],&g_139,&l_875[5],&g_139,&g_139,&l_875[5]},{&g_139,&l_875[5],&g_139,&g_139,&l_875[5],&g_139,&g_139},{&l_875[5],&l_875[5],&g_149[0][0],&l_875[5],&l_875[5],&g_149[0][0],&l_875[5]},{&l_875[5],&g_139,&g_139,&l_875[5],&g_139,&g_139,&l_875[5]},{&g_139,&l_875[5],&g_139,&g_139,&l_875[5],&g_139,&g_139},{&l_875[5],&l_875[5],&g_149[0][0],&l_875[5],&l_875[5],&g_149[0][0],&l_875[5]},{&l_875[5],&g_139,&g_139,&l_875[5],&g_139,&g_139,&l_875[5]},{&g_139,&l_875[5],&g_139,&g_139,&l_875[5],&g_139,&g_139}};
            struct S0 *l_879 = &g_139.f2;
            int *l_896 = &g_2;
            int i, j;
            l_674 = l_875[2];
            for (l_674.f2.f3 = 0; (l_674.f2.f3 != 60); l_674.f2.f3 = safe_add_func_uint32_t_u_u(l_674.f2.f3, 9))
            {
                int *l_880 = &l_694.f1;
                struct S1 l_901 = {0x6FF84114L,0xD5C6FF03L,{0x70L,0L,0x74A7L,0x04760E77L,0xAB38L,0x5B5CL},-5L,0xCB13E04DL,0xD413L,0xD502A32BL,0x1AL};
                short l_905 = (-10L);
                l_875[2].f2.f1 = (p_8 & (((*l_668) == l_879) ^ (func_17(l_880) != ((safe_rshift_func_uint8_t_u_s(g_139.f4, 0)) || p_8))));
                (*l_880) |= p_8;
                if (((g_2 && 0x9C43E225L) & (safe_sub_func_uint16_t_u_u(0xE0A4L, g_60[9][5].f5))))
                {
                    struct S0 l_889 = {0xBCL,-6L,0x3472L,0x3BD5358EL,0UL,9L};
                    (*g_821) = (safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s(g_2, p_8)), func_17(func_11(l_880, (*l_673), l_889))));
                }
                else
                {
                    unsigned l_897[1];
                    int *l_900 = &l_714.f2.f1;
                    struct S0 l_902 = {1UL,0xD3FB3C48L,65535UL,4294967295UL,65532UL,7L};
                    struct S1 l_903[5] = {{0UL,4294967295UL,{1UL,0L,0UL,0UL,65527UL,0x0535L},-1L,1UL,7UL,4UL,0xD1L},{0UL,4294967295UL,{1UL,0L,0UL,0UL,65527UL,0x0535L},-1L,1UL,7UL,4UL,0xD1L},{0UL,4294967295UL,{1UL,0L,0UL,0UL,65527UL,0x0535L},-1L,1UL,7UL,4UL,0xD1L},{0UL,4294967295UL,{1UL,0L,0UL,0UL,65527UL,0x0535L},-1L,1UL,7UL,4UL,0xD1L},{0UL,4294967295UL,{1UL,0L,0UL,0UL,65527UL,0x0535L},-1L,1UL,7UL,4UL,0xD1L}};
                    int i;
                    for (i = 0; i < 1; i++)
                        l_897[i] = 4294967295UL;
                    l_897[0] ^= (safe_rshift_func_uint16_t_u_s(6UL, ((safe_add_func_uint16_t_u_u((g_149[2][0].f2.f1 ^ (+(((*l_880) | ((safe_lshift_func_int16_t_s_u(p_8, g_346[6])) >= (l_875[2].f7 != p_8))) & 0xA4L))), g_149[2][0].f6)) || p_8)));
                    l_905 = (safe_add_func_uint8_t_u_u((p_8 == p_8), ((-1L) ^ (((g_62.f4 <= l_904[0][0][1]) & (*l_896)) && p_8))));
                }
            }
            (*g_821) |= (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(0x965DL, (p_8 >= p_8))), ((void*)0 != l_698)));
        }
        else
        {
            char l_915 = 0x49L;
            if ((*l_673))
            {
                int l_910 = 0xE90FF75FL;
                l_910 ^= (*g_821);
            }
            else
            {
                int *l_918 = &l_714.f2.f1;
                (*l_918) ^= (safe_sub_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s(p_8, 11)) < (*l_673)) | (l_915 && (safe_add_func_int16_t_s_s(((g_139.f6 >= p_8) ^ p_8), ((void*)0 != &l_674))))), 0x4CL));
            }
        }
        if ((g_62.f1 != p_8))
        {
            int *l_943 = &l_790[2][4];
            unsigned l_944 = 0x5BD84EBCL;
            struct S1 l_946 = {0x2EB09992L,0x470BF42FL,{255UL,-3L,9UL,4294967295UL,1UL,0x01DAL},0L,4294967295UL,0x2C37L,0x412B4339L,0x2EL};
            struct S1 *l_947 = &g_149[1][0];
            for (g_62.f1 = 0; (g_62.f1 != (-7)); g_62.f1 = safe_sub_func_int8_t_s_s(g_62.f1, 1))
            {
                struct S1 l_923 = {0xBAACD2EFL,4294967295UL,{248UL,0x43CFE10AL,0x6881L,4294967286UL,0x5930L,-1L},3L,4294967295UL,0xD254L,4294967295UL,0UL};
                int *l_927[2];
                struct S1 ***l_931[8] = {&g_350,&g_350,&g_350,&g_350,&g_350,&g_350,&g_350,&g_350};
                struct S0 *l_937 = (void*)0;
                int i;
                for (i = 0; i < 2; i++)
                    l_927[i] = &g_2;
                for (g_62.f5 = 0; (g_62.f5 >= 4); g_62.f5 = safe_add_func_uint16_t_u_u(g_62.f5, 7))
                {
                    g_139 = l_923;
                    for (g_139.f6 = 0; (g_139.f6 <= 5); g_139.f6 += 1)
                    {
                        struct S1 *l_924[2][7][6] = {{{&g_149[4][0],&g_139,&g_149[2][0],(void*)0,&l_923,(void*)0},{&l_923,&g_139,&g_149[2][0],&l_674,&l_923,&g_139},{&l_714,&g_139,&l_923,&l_714,&l_923,&g_139},{&g_149[4][0],&g_139,&g_149[2][0],(void*)0,&l_923,(void*)0},{&l_923,&g_139,&g_149[2][0],&l_674,&l_923,(void*)0},{&g_149[4][0],&g_139,&g_149[2][0],(void*)0,&g_149[2][0],&g_139},{&l_923,&g_139,&l_923,&l_674,&g_149[2][0],&g_139}},{{&l_714,&g_139,&g_149[2][0],&l_714,&g_149[2][0],(void*)0},{&g_149[4][0],&g_139,&g_149[2][0],(void*)0,&g_149[2][0],&g_139},{&l_923,&g_139,&l_923,&l_674,&g_149[2][0],&g_139},{&l_714,&g_139,&g_149[2][0],&l_714,&g_149[2][0],(void*)0},{&g_149[4][0],&g_139,&g_149[2][0],(void*)0,&g_149[2][0],&g_139},{&l_923,&g_139,&l_923,&l_674,&g_149[2][0],&g_139},{&l_714,&g_139,&g_149[2][0],&l_714,&g_149[2][0],(void*)0}}};
                        int i, j, k;
                        g_149[2][0] = l_923;
                    }
                }
                if ((safe_rshift_func_int8_t_s_u(p_8, ((safe_rshift_func_uint16_t_u_u((l_930 == l_931[6]), 15)) != p_8))))
                {
                    int *l_932 = &l_694.f1;
                    if ((*g_821))
                        break;
                    (*l_631) = l_932;

                    ;
                    return &g_33;




                }
                else
                {
                    struct S0 *l_938 = &l_694;
                    int l_945 = 2L;
                    (*l_943) = (safe_mod_func_int8_t_s_s((7UL != (p_8 == (65535UL <= ((g_139.f4 < (!(safe_rshift_func_uint16_t_u_u((((l_937 == l_938) && (safe_add_func_uint8_t_u_u((p_8 == ((safe_mod_func_int8_t_s_s((l_944 ^ 4UL), l_945)) >= (*g_821))), 0xF5L))) | 0x7FL), 15)))) > p_8)))), g_62.f5));
                }
                (*l_631) = l_943;

                ;
            }


            (*l_947) = l_946;
            for (l_714.f1 = 0; (l_714.f1 != 33); l_714.f1 = safe_add_func_uint8_t_u_u(l_714.f1, 9))
            {
                int *l_954 = &g_139.f2.f1;
                for (l_946.f2.f5 = 1; (l_946.f2.f5 >= 0); l_946.f2.f5 -= 1)
                {
                    int *l_950 = &g_149[2][0].f2.f1;
                    struct S0 ***l_953[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_953[i] = &l_668;
                    (*l_943) ^= ((p_8 || (g_149[2][0].f1 || 5L)) < g_149[2][0].f1);
                    l_950 = l_950;
                    for (l_674.f2.f3 = 0; (l_674.f2.f3 <= 1); l_674.f2.f3 += 1)
                    {
                        (*l_950) = (*g_671);
                        (*g_821) &= (safe_sub_func_int8_t_s_s((g_62.f2 ^ ((0x0E1BE8EBL || 1UL) == (l_953[1] == &g_136))), (*l_950)));
                        return l_950;




                    }
                }
                (*l_943) &= p_8;
            }
            if (p_8)
            {
                int *l_959 = &g_2;
                struct S1 l_968 = {0x61B185AFL,0x5ADEBF24L,{255UL,-9L,65532UL,4294967286UL,65527UL,5L},0L,0x5689C051L,6UL,0UL,0xFEL};
                struct S0 **l_983 = &g_137;
                if (p_8)
                {
                    int *l_967 = &l_714.f2.f1;
                    (*l_967) &= (safe_add_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((((l_959 != l_959) | (p_8 >= 0x3DFA80F6L)) & (g_139.f2.f2 & ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((p_8 | ((safe_rshift_func_uint8_t_u_s((!(safe_unary_minus_func_uint16_t_u(0x4179L))), p_8)) & (-1L))), 1)), p_8)) ^ 7L))) < 1UL), 0xB866L)) && g_60[9][5].f3), p_8));
                    (*l_943) |= (safe_sub_func_int16_t_s_s((((safe_unary_minus_func_int8_t_s(((safe_unary_minus_func_uint8_t_u((safe_lshift_func_int8_t_s_u(p_8, 2)))) && g_2))) <= (g_60[9][5].f1 & (safe_add_func_uint16_t_u_u(0xDF16L, (safe_unary_minus_func_uint16_t_u((safe_sub_func_int16_t_s_s(g_62.f0, ((*l_967) | (safe_rshift_func_int16_t_s_u(p_8, 11))))))))))) < 5L), 0x8CE3L));
                    (*g_821) = (*g_821);
                    if ((*l_959))
                    {
                        int *l_982 = &l_674.f2.f1;
                        (*l_967) ^= p_8;
                        return &g_2;




                    }
                    else
                    {
                        g_136 = l_983;
                        return l_959;




                    }
                }
                else
                {
                    int *l_986 = &l_984.f2.f1;
                    if (p_8)
                    {
                        int *l_985 = &l_694.f1;
                        (*l_631) = l_986;

                        ;
                        return l_959;




                    }
                    else
                    {
                        int *l_987 = &l_790[1][8];
                        (*g_821) &= p_8;
                        (*g_821) = p_8;
                        l_987 = &g_33;

                        ;
                    }
                }
                (*l_631) = l_959;

                ;
            }
            else
            {
                struct S0 l_994 = {0xCFL,0x7CC2091BL,0x9CA8L,4UL,0UL,0xE4D3L};
                for (g_139.f5 = 11; (g_139.f5 <= 20); ++g_139.f5)
                {
                    struct S0 *l_992 = &g_139.f2;
                    int l_996 = 0xBE457558L;
                    int l_997 = 0xD967525BL;
                    for (g_570 = (-10); (g_570 <= (-14)); g_570 = safe_sub_func_int32_t_s_s(g_570, 1))
                    {
                        int *l_995 = &g_2;
                        (*g_821) |= (l_992 != l_993);
                        (*l_992) = l_994;
                        l_994.f1 |= (*g_665);
                        l_997 ^= l_996;
                    }
                    (*l_943) |= p_8;
                }
            }
        }
        else
        {
            int *l_1000[2];
            int l_1002 = 0xD2B09C3BL;
            struct S1 *l_1003 = &g_149[3][0];
            int i;
            for (i = 0; i < 2; i++)
                l_1000[i] = &g_60[9][5].f1;
            for (l_984.f4 = 0; (l_984.f4 > 32); l_984.f4++)
            {
                struct S0 l_1001 = {255UL,1L,0x88A5L,0x3B6A4A66L,0UL,-1L};
                if ((*g_671))
                    break;
                l_1002 |= (*g_821);
            }
            (*l_1003) = l_674;
            for (l_714.f5 = (-25); (l_714.f5 != 22); l_714.f5 = safe_add_func_uint32_t_u_u(l_714.f5, 1))
            {
                int l_1010 = 0L;
                for (l_674.f1 = (-14); (l_674.f1 != 45); ++l_674.f1)
                {
                    int l_1011 = 0x8C4E7E83L;
                    short l_1019 = 0x9AE6L;
                    struct S1 **l_1028 = (void*)0;
                    if ((((((~l_1010) <= (g_139.f2.f0 >= g_139.f2.f0)) | l_1011) && ((((g_33 ^ ((void*)0 != &l_631)) <= ((p_8 > l_1011) & 0x01E22084L)) ^ p_8) >= p_8)) > g_2))
                    {
                        struct S0 *l_1012[2][5][7] = {{{&l_694,&g_60[7][2],&l_694,&g_60[9][5],&g_149[2][0].f2,&g_62,&l_984.f2},{&g_149[2][0].f2,&g_60[6][2],&g_139.f2,&l_714.f2,&l_984.f2,&l_694,&g_149[2][0].f2},{&l_694,&l_694,&g_62,&g_60[6][2],&g_60[6][2],&g_62,&l_694},{&g_149[2][0].f2,&g_149[2][0].f2,&l_714.f2,&l_694,&g_60[6][2],&g_60[9][5],&l_674.f2},{&g_60[7][2],&g_149[2][0].f2,&g_149[2][0].f2,&l_694,&l_984.f2,&g_139.f2,&l_714.f2}},{{&l_714.f2,&g_149[2][0].f2,&l_694,&l_694,&g_149[2][0].f2,&g_149[2][0].f2,&g_60[9][5]},{&g_139.f2,&l_984.f2,&l_694,&g_149[2][0].f2,&g_149[2][0].f2,&g_60[7][2],&l_714.f2},{&g_60[7][2],(void*)0,&g_139.f2,&g_149[2][0].f2,&g_60[6][2],&l_714.f2,&g_60[6][2]},{&g_149[2][0].f2,&l_984.f2,&l_984.f2,&g_149[2][0].f2,(void*)0,&g_149[2][0].f2,&l_694},{&g_149[2][0].f2,&l_714.f2,&l_694,(void*)0,&l_714.f2,&l_674.f2,&l_694}}};
                        int i, j, k;
                        (*g_136) = l_1012[1][0][6];
                        (*g_821) &= p_8;
                    }
                    else
                    {
                        if ((*g_665))
                            break;
                    }
                    for (l_674.f2.f1 = 5; (l_674.f2.f1 >= 0); l_674.f2.f1 -= 1)
                    {
                        int *l_1029 = &g_139.f2.f1;
                        struct S1 l_1030 = {0xF861CE52L,0xFA276305L,{0xC1L,0xBD8FFC76L,0x0FC5L,0x4D64C758L,0x4EA7L,0x24F8L},0L,4294967295UL,0xC9D3L,0x937EAEF0L,0x33L};
                        int i;
                        if (g_346[l_674.f2.f1])
                            break;
                        (*g_821) |= (safe_lshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(l_1019, 9)), p_8)), 13));
                        (*g_821) = (safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(g_363, p_8)), (safe_add_func_int8_t_s_s((((void*)0 == l_1028) != p_8), p_8)))), g_139.f5));
                    }
                }
            }

            ;
            l_1041 = (safe_add_func_uint8_t_u_u(((((((safe_sub_func_int16_t_s_s(p_8, g_642)) != ((safe_lshift_func_uint8_t_u_u(g_62.f2, (*l_673))) & p_8)) == (0x12L == p_8)) & 8L) <= 255UL) == (*g_671)), 4UL));
        }


        ;
        (*g_821) = (*g_671);
    }




    ;
    (*g_821) |= p_8;
    return l_1042;



}







static unsigned short func_9(int * p_10)
{
    char l_571 = 1L;
    int ***l_572 = &g_378;
    int l_573 = 0xFAE447EDL;
    unsigned short l_574 = 0UL;
    unsigned short l_576 = 0x8795L;
    l_571 = (0x1D9110CFL >= 0UL);
    l_573 = ((void*)0 == l_572);
    if (((+(((g_363 && l_574) || (l_571 <= ((+(*p_10)) == (g_139.f1 && l_573)))) != 0xAACDL)) != l_574))
    {
        int *l_575 = (void*)0;
        l_573 &= (*p_10);
        return l_576;
    }
    else
    {
        unsigned char l_581[1];
        unsigned char l_594 = 0x86L;
        struct S0 l_595 = {0UL,-1L,1UL,0x2A83BE3CL,65530UL,-8L};
        struct S1 l_596 = {1UL,5UL,{0x88L,-1L,0x2798L,0x3C92AB32L,0xB213L,-5L},-10L,0x8FC0BA29L,65535UL,0x19BC74A3L,0x49L};
        int **l_614 = (void*)0;
        int *l_618 = &g_149[2][0].f2.f1;
        int i;
        for (i = 0; i < 1; i++)
            l_581[i] = 0x07L;
        if ((*g_162))
        {
            int **l_597[5][4][7] = {{{&g_32,&g_162,(void*)0,&g_32,(void*)0,&g_32,(void*)0},{&g_162,&g_162,&g_162,&g_162,&g_32,&g_162,&g_162},{&g_32,&g_162,&g_32,&g_32,&g_162,&g_32,&g_32},{&g_162,&g_162,&g_162,&g_162,&g_32,&g_162,&g_162}},{{&g_32,&g_162,(void*)0,&g_32,(void*)0,&g_32,(void*)0},{&g_162,&g_162,&g_162,&g_162,&g_32,&g_162,&g_162},{&g_32,&g_162,&g_32,&g_32,&g_162,&g_32,&g_32},{&g_162,&g_162,&g_162,&g_162,&g_32,&g_162,&g_162}},{{&g_32,&g_162,(void*)0,&g_32,(void*)0,&g_32,(void*)0},{&g_162,&g_162,&g_162,&g_32,&g_162,&g_162,&g_162},{&g_32,&g_162,&g_162,&g_32,&g_32,&g_32,&g_162},{&g_162,&g_162,&g_162,&g_162,&g_162,&g_32,&g_162}},{{(void*)0,&g_162,&g_162,&g_32,&g_32,&g_32,&g_162},{&g_162,&g_162,&g_162,&g_32,&g_162,&g_162,&g_162},{&g_32,&g_162,&g_162,&g_32,&g_32,&g_32,&g_162},{&g_162,&g_162,&g_162,&g_162,&g_162,&g_32,&g_162}},{{(void*)0,&g_162,&g_162,&g_32,&g_32,&g_32,&g_162},{&g_162,&g_162,&g_162,&g_32,&g_162,&g_162,&g_162},{&g_32,&g_162,&g_162,&g_32,&g_32,&g_32,&g_162},{&g_162,&g_162,&g_162,&g_162,&g_162,&g_32,&g_162}}};
            struct S0 ***l_608 = &g_136;
            int i, j, k;
            g_32 = (void*)0;

            ;
            for (l_595.f3 = 0; (l_595.f3 <= 6); l_595.f3 += 1)
            {
                int i;
                l_573 |= (safe_rshift_func_int16_t_s_u((+((safe_add_func_int16_t_s_s(0x9200L, g_346[l_595.f3])) < (*p_10))), 15));
                for (l_594 = 0; (l_594 <= 6); l_594 += 1)
                {
                    int l_613[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_613[i] = 0xA5B66FB9L;
                    if (((l_596.f6 <= 1UL) != (safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s((((l_613[5] | ((*g_377) == l_614)) | g_346[l_595.f3]) | g_149[2][0].f2.f5), (safe_sub_func_int32_t_s_s((*g_162), g_346[l_595.f3])))), g_62.f2))))
                    {
                        unsigned char l_617 = 0x51L;
                        if (g_346[l_595.f3])
                            break;
                        if (l_617)
                            break;
                    }
                    else
                    {
                        l_618 = p_10;


                        l_613[5] = 0x2FE8E083L;
                    }
                }


                return g_346[l_595.f3];
            }
            (*l_618) = ((safe_lshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u((*l_618), g_139.f3)), 3)) | (+(*l_618)));
            (*l_618) ^= 0L;
        }
        else
        {
            return g_139.f2.f1;
        }

        ;
    }

    ;
    if (l_574)
    {
        int **l_623 = &g_162;
        struct S1 ***l_624 = &g_350;
        (*l_623) = p_10;


        (*l_624) = &g_351;
    }
    else
    {
        unsigned short l_625 = 0x9908L;
        l_625 &= (*p_10);
    }


    return g_139.f7;
}







static int * func_11(int * p_12, char p_13, struct S0 p_14)
{
    unsigned short l_474 = 0UL;
    int *l_477 = &g_62.f1;
    struct S0 ***l_502 = &g_136;
    struct S1 l_513 = {0xCB11DD57L,0x49A88CBBL,{0x71L,0xCE1B8FC6L,0x85D2L,0UL,65535UL,0x8006L},0xAAAA78ABL,0UL,0x6782L,0UL,0xA4L};
    int ***l_554[6] = {&g_378,&g_378,&g_378,&g_378,&g_378,&g_378};
    short l_569 = 1L;
    int i;
    p_14.f1 |= (safe_mod_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(l_474, 13)) >= (g_346[0] < (safe_mod_func_int16_t_s_s(l_474, 1L)))), func_17(l_477)));
    for (p_14.f5 = 0; (p_14.f5 >= 21); ++p_14.f5)
    {
        int l_482 = (-1L);
        int **l_483 = &g_32;
        (*l_477) |= (g_62.f5 == ((&g_136 != &g_136) || (p_14.f1 > (safe_sub_func_int8_t_s_s((255UL & g_149[2][0].f0), (l_482 > g_139.f2.f2))))));
        (*l_483) = (void*)0;

        ;
        (*l_483) = (*l_483);
    }
    for (p_14.f1 = 0; (p_14.f1 <= 6); p_14.f1 += 1)
    {
        struct S1 *l_484 = &g_149[4][0];
        int l_496 = (-8L);
        struct S0 ***l_503 = &g_136;
        int *l_544[4];
        int i;
        for (i = 0; i < 4; i++)
            l_544[i] = (void*)0;
    }
    for (l_513.f7 = (-7); (l_513.f7 < 21); l_513.f7 = safe_add_func_uint32_t_u_u(l_513.f7, 1))
    {
        struct S0 ***l_563 = &g_136;
        int l_564[4][3][9] = {{{6L,0x064DE339L,0xE2A13728L,0x725EA030L,1L,0x2F531175L,0x6DB0992FL,0xE3130ECFL,0x59AEAD83L},{0xADD1A9F8L,0L,0xFCA8F520L,0xE3130ECFL,0xBBE4058AL,6L,(-1L),(-1L),0L},{0L,0xE3130ECFL,(-4L),0xE3130ECFL,0L,0xFCA8F520L,0x064DE339L,(-1L),0x340E2AA8L}},{{(-7L),(-1L),0x340E2AA8L,(-4L),0x6759726EL,0x725EA030L,0L,6L,1L},{0x4313C6A7L,0x2F531175L,0x3C96477EL,1L,0xFCA8F520L,0xFCA8F520L,1L,0x3C96477EL,0x2F531175L},{(-1L),0x725EA030L,0x4313C6A7L,1L,0xBBE4058AL,0L,0x3C96477EL,(-1L),0xE2A13728L}},{{0x6DB0992FL,0xE2A13728L,0xFCA8F520L,(-4L),0x064DE339L,1L,0xADD1A9F8L,0xF50325C9L,0xADD1A9F8L},{0xF50325C9L,0x725EA030L,0xE3130ECFL,0xE3130ECFL,0x725EA030L,0xF50325C9L,0x340E2AA8L,0x2F531175L,0xADD1A9F8L},{0x064DE339L,0x2F531175L,(-1L),6L,(-1L),0x3C96477EL,0xF50325C9L,0xE3130ECFL,0xE2A13728L}},{{6L,(-1L),0x2F531175L,0x064DE339L,0x340E2AA8L,0x6759726EL,0x340E2AA8L,0x064DE339L,0x2F531175L},{0xE3130ECFL,0xE3130ECFL,0x725EA030L,0xF50325C9L,0x340E2AA8L,0x2F531175L,0xADD1A9F8L,0xE2A13728L,1L},{(-4L),0xFCA8F520L,0xE2A13728L,0x6DB0992FL,(-1L),0L,0x3C96477EL,0x340E2AA8L,0x340E2AA8L}}};
        unsigned char l_566 = 255UL;
        int i, j, k;
        l_569 = (!((l_563 == &g_136) | ((p_14.f2 ^ (+(l_564[3][2][2] & (g_565 > l_566)))) ^ (p_14.f4 | ((safe_mod_func_int8_t_s_s((*l_477), p_14.f0)) != (-8L))))));
        (*l_477) &= g_570;
        if (l_564[3][2][2])
            break;
    }
    return p_12;


}







static unsigned short func_17(int * p_18)
{
    unsigned short l_461 = 0x9944L;
    int *l_462 = &g_62.f1;
    struct S0 **l_467 = &g_137;
    short l_468 = (-1L);
    (*l_462) &= (safe_add_func_int16_t_s_s(l_461, ((&g_33 == l_462) != 0x40FEL)));
    (*l_462) = (safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s((l_467 == &g_137), (((*l_462) | (((0xD026016CL | (*p_18)) || ((*l_462) == ((-4L) & l_468))) <= (((*l_462) > (*l_462)) <= 0x9AL))) || g_149[2][0].f2.f0))), 0x9CL));
    (*p_18) = (*p_18);
    return (*l_462);
}







static int * func_19(unsigned char p_20)
{
    struct S0 *l_456 = &g_139.f2;
    int l_457 = (-1L);
    int *l_458[9] = {&g_33,&g_33,&g_33,&g_33,&g_33,&g_33,&g_33,&g_33,&g_33};
    int i;
    (*g_136) = l_456;

    ;
    l_457 = (*g_32);
    return l_458[0];


}







static char func_23(unsigned short p_24, int p_25)
{
    int *l_453 = &g_33;
    l_453 = func_28(g_2);

    ;
    ;
    ;
    ;
    return g_149[2][0].f1;
}







static int * func_28(char p_29)
{
    int *l_30 = &g_2;
    int **l_31[10] = {&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30};
    int *l_50[4];
    int l_51[7];
    struct S1 l_52[4][10] = {{{8UL,1UL,{0x1EL,-4L,0x764FL,1UL,0x130EL,0xDD37L},0x37C2AE6BL,4294967295UL,1UL,5UL,1UL},{8UL,1UL,{0x1EL,-4L,0x764FL,1UL,0x130EL,0xDD37L},0x37C2AE6BL,4294967295UL,1UL,5UL,1UL},{0UL,0x13C75F92L,{0x96L,1L,0x2BDAL,0x68E54706L,65535UL,-1L},0xE0CF2F28L,0x4906A58EL,8UL,4294967286UL,254UL},{1UL,1UL,{251UL,0xA6C3C0C8L,65535UL,4294967295UL,0x690CL,0x90A7L},1L,0x718AF62FL,1UL,4294967295UL,0UL},{0x944B0CECL,4294967295UL,{0xC9L,0x981F0B5FL,7UL,4294967295UL,0x31ACL,1L},1L,9UL,0xA336L,0x4C778C53L,5UL},{1UL,1UL,{251UL,0xA6C3C0C8L,65535UL,4294967295UL,0x690CL,0x90A7L},1L,0x718AF62FL,1UL,4294967295UL,0UL},{0UL,0x13C75F92L,{0x96L,1L,0x2BDAL,0x68E54706L,65535UL,-1L},0xE0CF2F28L,0x4906A58EL,8UL,4294967286UL,254UL},{8UL,1UL,{0x1EL,-4L,0x764FL,1UL,0x130EL,0xDD37L},0x37C2AE6BL,4294967295UL,1UL,5UL,1UL},{8UL,1UL,{0x1EL,-4L,0x764FL,1UL,0x130EL,0xDD37L},0x37C2AE6BL,4294967295UL,1UL,5UL,1UL},{0UL,0x13C75F92L,{0x96L,1L,0x2BDAL,0x68E54706L,65535UL,-1L},0xE0CF2F28L,0x4906A58EL,8UL,4294967286UL,254UL}},{{4294967295UL,0x7F5CE947L,{255UL,0x7AEE56C8L,0xD1B3L,0xB75CAB9BL,65535UL,0xEFF5L},5L,7UL,0xAC48L,0x5D34B728L,0x01L},{1UL,1UL,{251UL,0xA6C3C0C8L,65535UL,4294967295UL,0x690CL,0x90A7L},1L,0x718AF62FL,1UL,4294967295UL,0UL},{4294967295UL,4294967291UL,{0UL,0x5F757037L,0x9E21L,4294967295UL,0xD6BFL,5L},0x50B1092FL,0xB161CA2EL,0xD359L,0x2D10A650L,0x97L},{4294967295UL,4294967291UL,{0UL,0x5F757037L,0x9E21L,4294967295UL,0xD6BFL,5L},0x50B1092FL,0xB161CA2EL,0xD359L,0x2D10A650L,0x97L},{1UL,1UL,{251UL,0xA6C3C0C8L,65535UL,4294967295UL,0x690CL,0x90A7L},1L,0x718AF62FL,1UL,4294967295UL,0UL},{4294967295UL,0x7F5CE947L,{255UL,0x7AEE56C8L,0xD1B3L,0xB75CAB9BL,65535UL,0xEFF5L},5L,7UL,0xAC48L,0x5D34B728L,0x01L},{0UL,0x13C75F92L,{0x96L,1L,0x2BDAL,0x68E54706L,65535UL,-1L},0xE0CF2F28L,0x4906A58EL,8UL,4294967286UL,254UL},{4294967295UL,0x7F5CE947L,{255UL,0x7AEE56C8L,0xD1B3L,0xB75CAB9BL,65535UL,0xEFF5L},5L,7UL,0xAC48L,0x5D34B728L,0x01L},{1UL,1UL,{251UL,0xA6C3C0C8L,65535UL,4294967295UL,0x690CL,0x90A7L},1L,0x718AF62FL,1UL,4294967295UL,0UL},{4294967295UL,4294967291UL,{0UL,0x5F757037L,0x9E21L,4294967295UL,0xD6BFL,5L},0x50B1092FL,0xB161CA2EL,0xD359L,0x2D10A650L,0x97L}},{{0x9C45D188L,7UL,{0x70L,-1L,1UL,8UL,0x0AB9L,0L},0x68F5B79CL,0x4114C53FL,65535UL,4294967292UL,246UL},{8UL,1UL,{0x1EL,-4L,0x764FL,1UL,0x130EL,0xDD37L},0x37C2AE6BL,4294967295UL,1UL,5UL,1UL},{0x9C45D188L,7UL,{0x70L,-1L,1UL,8UL,0x0AB9L,0L},0x68F5B79CL,0x4114C53FL,65535UL,4294967292UL,246UL},{4294967295UL,4294967291UL,{0UL,0x5F757037L,0x9E21L,4294967295UL,0xD6BFL,5L},0x50B1092FL,0xB161CA2EL,0xD359L,0x2D10A650L,0x97L},{0UL,0x13C75F92L,{0x96L,1L,0x2BDAL,0x68E54706L,65535UL,-1L},0xE0CF2F28L,0x4906A58EL,8UL,4294967286UL,254UL},{0UL,0x13C75F92L,{0x96L,1L,0x2BDAL,0x68E54706L,65535UL,-1L},0xE0CF2F28L,0x4906A58EL,8UL,4294967286UL,254UL},{4294967295UL,4294967291UL,{0UL,0x5F757037L,0x9E21L,4294967295UL,0xD6BFL,5L},0x50B1092FL,0xB161CA2EL,0xD359L,0x2D10A650L,0x97L},{0x9C45D188L,7UL,{0x70L,-1L,1UL,8UL,0x0AB9L,0L},0x68F5B79CL,0x4114C53FL,65535UL,4294967292UL,246UL},{8UL,1UL,{0x1EL,-4L,0x764FL,1UL,0x130EL,0xDD37L},0x37C2AE6BL,4294967295UL,1UL,5UL,1UL},{0x9C45D188L,7UL,{0x70L,-1L,1UL,8UL,0x0AB9L,0L},0x68F5B79CL,0x4114C53FL,65535UL,4294967292UL,246UL}},{{0x9C45D188L,7UL,{0x70L,-1L,1UL,8UL,0x0AB9L,0L},0x68F5B79CL,0x4114C53FL,65535UL,4294967292UL,246UL},{4294967295UL,0x7F5CE947L,{255UL,0x7AEE56C8L,0xD1B3L,0xB75CAB9BL,65535UL,0xEFF5L},5L,7UL,0xAC48L,0x5D34B728L,0x01L},{8UL,1UL,{0x1EL,-4L,0x764FL,1UL,0x130EL,0xDD37L},0x37C2AE6BL,4294967295UL,1UL,5UL,1UL},{1UL,1UL,{251UL,0xA6C3C0C8L,65535UL,4294967295UL,0x690CL,0x90A7L},1L,0x718AF62FL,1UL,4294967295UL,0UL},{8UL,1UL,{0x1EL,-4L,0x764FL,1UL,0x130EL,0xDD37L},0x37C2AE6BL,4294967295UL,1UL,5UL,1UL},{4294967295UL,0x7F5CE947L,{255UL,0x7AEE56C8L,0xD1B3L,0xB75CAB9BL,65535UL,0xEFF5L},5L,7UL,0xAC48L,0x5D34B728L,0x01L},{0x9C45D188L,7UL,{0x70L,-1L,1UL,8UL,0x0AB9L,0L},0x68F5B79CL,0x4114C53FL,65535UL,4294967292UL,246UL},{0x9C45D188L,7UL,{0x70L,-1L,1UL,8UL,0x0AB9L,0L},0x68F5B79CL,0x4114C53FL,65535UL,4294967292UL,246UL},{4294967295UL,0x7F5CE947L,{255UL,0x7AEE56C8L,0xD1B3L,0xB75CAB9BL,65535UL,0xEFF5L},5L,7UL,0xAC48L,0x5D34B728L,0x01L},{8UL,1UL,{0x1EL,-4L,0x764FL,1UL,0x130EL,0xDD37L},0x37C2AE6BL,4294967295UL,1UL,5UL,1UL}}};
    int **l_53 = &l_50[1];
    int l_312 = 0xD437F228L;
    struct S0 *l_329[5];
    struct S0 l_357 = {0xDFL,0x2E87CD47L,65535UL,4294967295UL,65535UL,0x7AF9L};
    struct S0 l_361 = {254UL,-3L,65528UL,0x8A24DA53L,65530UL,0L};
    struct S1 *l_370 = (void*)0;
    short l_385 = (-3L);
    int i, j;
    for (i = 0; i < 4; i++)
        l_50[i] = &g_2;
    for (i = 0; i < 7; i++)
        l_51[i] = (-1L);
    for (i = 0; i < 5; i++)
        l_329[i] = &g_60[8][1];
    g_32 = l_30;

    ;
    if (((g_2 & (safe_sub_func_uint32_t_u_u(p_29, (func_36(func_41(((safe_unary_minus_func_int32_t_s(((safe_rshift_func_int8_t_s_s(((&g_2 == l_50[2]) && p_29), 7)) & 254UL))) <= (g_33 <= (((p_29 | (-2L)) >= (*g_32)) != l_51[3]))), l_52[0][5], &l_50[2], l_53, &g_2), &g_2, g_62, l_52[0][6]) | 4UL)))) >= l_312))
    {
        g_33 |= (-1L);
        return &g_33;


    }
    else
    {
        int l_313 = 0x86C57A73L;
        struct S0 l_314[10] = {{1UL,0L,65528UL,0x080D91C4L,0x5E17L,1L},{1UL,0L,65528UL,0x080D91C4L,0x5E17L,1L},{1UL,0L,65528UL,0x080D91C4L,0x5E17L,1L},{1UL,0L,65528UL,0x080D91C4L,0x5E17L,1L},{1UL,0L,65528UL,0x080D91C4L,0x5E17L,1L},{1UL,0L,65528UL,0x080D91C4L,0x5E17L,1L},{1UL,0L,65528UL,0x080D91C4L,0x5E17L,1L},{1UL,0L,65528UL,0x080D91C4L,0x5E17L,1L},{1UL,0L,65528UL,0x080D91C4L,0x5E17L,1L},{1UL,0L,65528UL,0x080D91C4L,0x5E17L,1L}};
        struct S0 **l_327[1];
        struct S1 l_330 = {0x972BF56AL,4294967295UL,{0x2AL,1L,1UL,1UL,0x6E26L,0x21F5L},1L,4294967295UL,0UL,0xA070F676L,255UL};
        int **l_331 = &g_32;
        unsigned char l_348 = 0x00L;
        int *l_356 = (void*)0;
        struct S0 l_372 = {0x47L,8L,0x646CL,4294967295UL,0x9202L,0x1E4EL};
        int l_388 = 1L;
        int i;
        for (i = 0; i < 1; i++)
            l_327[i] = (void*)0;
        l_313 = (p_29 | p_29);
        for (g_62.f1 = 1; (g_62.f1 <= 5); g_62.f1 += 1)
        {
            char l_326 = 0xC8L;
            int *l_332 = &g_60[9][5].f1;
            struct S0 l_335 = {255UL,8L,0x1025L,0x750595D7L,0x3916L,0xF594L};
            struct S1 *l_353 = &g_149[4][0];
            l_52[0][5].f2 = l_314[9];
            for (g_139.f6 = 0; (g_139.f6 <= 0); g_139.f6 += 1)
            {
                char l_325 = (-1L);
                int *l_328 = &g_60[9][5].f1;
                l_314[9].f1 = (p_29 >= 0x6B99L);
                for (g_139.f0 = 1; (g_139.f0 <= 5); g_139.f0 += 1)
                {
                    struct S1 *l_316 = (void*)0;
                    struct S1 **l_315 = &l_316;
                    int i, j;
                    (*l_53) = (*l_53);
                    (*l_315) = &g_149[(g_139.f6 + 3)][g_139.f6];

                    ;
                }
                if (((g_62.f1 | 0x21L) < ((safe_rshift_func_int16_t_s_u(l_314[9].f0, 2)) || (safe_add_func_int32_t_s_s(p_29, (~g_139.f2.f2))))))
                {
                    if (p_29)
                    {
                        l_326 = ((safe_lshift_func_int16_t_s_s(p_29, (safe_sub_func_uint16_t_u_u(l_325, g_60[9][5].f5)))) ^ ((void*)0 == (*g_136)));
                    }
                    else
                    {
                        if (p_29)
                            break;
                        g_32 = &g_2;

                        ;
                        (*l_53) = &g_33;
                    }
                    for (g_139.f1 = 0; (g_139.f1 <= 5); g_139.f1 += 1)
                    {
                        l_327[0] = &g_137;
                        (*l_53) = l_328;
                        l_314[9].f1 ^= ((&g_162 == &l_328) || (-6L));
                    }
                    if ((*g_162))
                        break;
                    if ((p_29 && p_29))
                    {
                        struct S0 l_333 = {0x14L,7L,65535UL,0x827537ACL,0xF57FL,0x2BA0L};
                        int i, j;
                        l_332 = func_41((g_149[2][0].f3 < (l_329[0] == (void*)0)), l_330, l_331, &g_32, &g_2);
                        g_60[g_139.f6][g_139.f6] = l_333;
                    }
                    else
                    {
                        unsigned l_334 = 0xE4DE13E2L;
                        (*l_331) = l_328;

                        ;
                        (*l_328) |= l_334;
                    }
                }
                else
                {
                    l_335 = l_335;
                }
                for (l_330.f1 = 0; (l_330.f1 <= 0); l_330.f1 += 1)
                {
                    unsigned l_336 = 0x4F8EDF8CL;
                    int l_347 = 0L;
                    struct S1 **l_352 = (void*)0;
                    if ((*g_32))
                    {
                        l_336 ^= (((*l_328) & g_149[2][0].f2.f3) || p_29);
                    }
                    else
                    {
                        unsigned l_345 = 0x3A792F65L;
                        l_345 ^= (safe_sub_func_int16_t_s_s((g_149[2][0].f2.f1 || (safe_add_func_int16_t_s_s((p_29 & ((((p_29 || (safe_add_func_uint32_t_u_u(4294967291UL, ((**l_331) & p_29)))) | g_149[2][0].f1) == (p_29 < (safe_lshift_func_uint8_t_u_u((g_62.f2 != 0x0C971874L), 2)))) | g_139.f5)), g_149[2][0].f4))), (-1L)));
                        (*l_328) = p_29;
                    }
                    l_347 = g_346[6];
                    if (l_348)
                    {
                        struct S1 l_349 = {0UL,0UL,{8UL,-1L,0x075FL,0xDCE0A31DL,65535UL,1L},-3L,4294967288UL,0xF7E5L,1UL,0xC3L};
                        int i, j;
                        g_149[l_330.f1][l_330.f1] = l_349;
                        if (l_349.f2.f2)
                            continue;
                    }
                    else
                    {
                        return &g_2;


                    }
                    for (g_139.f2.f3 = 0; (g_139.f2.f3 <= 3); g_139.f2.f3 += 1)
                    {
                        int i, j;
                        (*l_328) |= 0x02F5D07CL;
                        l_347 = (g_350 != l_352);
                        l_353 = &l_52[g_139.f2.f3][(g_139.f2.f3 + 1)];

                        ;
                        (*l_331) = l_328;

                        ;
                    }
                }
            }

            ;
            ;
            (*l_353) = l_52[0][5];
            if ((*g_162))
                break;
        }

        ;


        if (((safe_sub_func_int16_t_s_s(p_29, g_149[2][0].f2.f5)) >= (*g_32)))
        {
            int *l_360 = &g_139.f2.f1;
            struct S0 l_362 = {0xDDL,9L,0x2F22L,0xC3CF950DL,1UL,-1L};
            g_363 |= ((g_139.f2.f1 ^ (((*g_32) && (safe_sub_func_int16_t_s_s(g_139.f2.f1, p_29))) <= 0x8ED3L)) && 0x68EF3018L);
            for (l_330.f2.f0 = 0; (l_330.f2.f0 >= 20); l_330.f2.f0++)
            {
                return &g_2;


            }
        }
        else
        {
            short l_373 = (-9L);
            int l_374[9];
            struct S1 *l_379[2];
            int i;
            for (i = 0; i < 9; i++)
                l_374[i] = 0x5C55B304L;
            for (i = 0; i < 2; i++)
                l_379[i] = &g_149[4][0];
            l_314[9].f1 = p_29;
            for (g_363 = (-27); (g_363 != 7); ++g_363)
            {
                unsigned char l_380[8][6] = {{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL}};
                int i, j;
                g_33 ^= (((p_29 ^ 0x83844494L) != 0L) > l_373);
                l_374[1] = p_29;
                g_33 &= (!(*g_32));
                l_380[7][1] = ((0xDCL < ((safe_sub_func_uint16_t_u_u(p_29, ((g_377 == &l_331) < ((0xB0L >= g_363) <= ((p_29 & (l_379[1] == (*g_350))) ^ g_139.f1))))) != 1UL)) == p_29);
            }
            l_374[4] &= p_29;
        }
        l_388 = (safe_lshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((+0x87CB3414L), ((**l_331) > (*g_162)))), (((g_62.f0 == l_385) & (((safe_rshift_func_int8_t_s_u(l_388, 4)) <= g_149[2][0].f3) > g_149[2][0].f6)) > (((safe_lshift_func_int8_t_s_u((**l_331), g_139.f6)) ^ g_149[2][0].f6) ^ p_29))));
    }

    ;

    ;
    ;
    for (g_139.f6 = 0; (g_139.f6 > 26); g_139.f6++)
    {
        unsigned short l_398 = 65535UL;
        struct S0 l_401[1][4] = {{{249UL,0L,0xF5ACL,0xA71CE065L,0x82C0L,4L},{249UL,0L,0xF5ACL,0xA71CE065L,0x82C0L,4L},{249UL,0L,0xF5ACL,0xA71CE065L,0x82C0L,4L},{249UL,0L,0xF5ACL,0xA71CE065L,0x82C0L,4L}}};
        int *l_431[9][9][1] = {{{&g_62.f1},{(void*)0},{&g_2},{&l_357.f1},{&g_2},{&g_2},{&l_357.f1},{&g_2},{(void*)0}},{{&g_62.f1},{&l_52[0][5].f2.f1},{&l_357.f1},{&l_52[0][5].f2.f1},{&g_62.f1},{(void*)0},{&g_2},{&l_357.f1},{&g_2}},{{&g_2},{&l_357.f1},{&g_2},{(void*)0},{&g_62.f1},{&l_52[0][5].f2.f1},{&l_357.f1},{&l_52[0][5].f2.f1},{&g_62.f1}},{{(void*)0},{&g_2},{&l_357.f1},{&g_2},{&g_2},{&l_357.f1},{&g_2},{(void*)0},{&g_62.f1}},{{&l_52[0][5].f2.f1},{&l_357.f1},{&l_52[0][5].f2.f1},{&g_62.f1},{(void*)0},{&g_2},{&l_357.f1},{&g_2},{&g_2}},{{&l_357.f1},{&g_2},{(void*)0},{&g_62.f1},{&l_52[0][5].f2.f1},{&l_357.f1},{&l_52[0][5].f2.f1},{&g_62.f1},{(void*)0}},{{&g_2},{&l_357.f1},{&g_2},{&g_2},{&l_357.f1},{&g_2},{(void*)0},{&g_62.f1},{&l_52[0][5].f2.f1}},{{&l_357.f1},{&l_52[0][5].f2.f1},{&g_62.f1},{(void*)0},{&g_2},{&l_357.f1},{&g_2},{&g_2},{&l_357.f1}},{{(void*)0},{(void*)0},{&g_33},{&g_2},{&l_401[0][0].f1},{&g_2},{&g_33},{(void*)0},{(void*)0}}};
        int i, j, k;
        for (g_62.f0 = 0; (g_62.f0 >= 5); g_62.f0++)
        {
            int l_395 = 0xFDAD28D0L;
            struct S1 l_402 = {4294967289UL,5UL,{249UL,0x718653C9L,0x0FDAL,0xB840FF4AL,0UL,7L},0L,6UL,0xCC53L,4294967291UL,0x98L};
            int *l_412 = &g_60[9][5].f1;
            char l_437 = 0L;
            l_395 = (-1L);
        }
    }
    return &g_2;


}







static unsigned func_36(int * p_37, int * p_38, struct S0 p_39, struct S1 p_40)
{
    int *l_68[8][8][4] = {{{(void*)0,&g_60[9][5].f1,&g_33,(void*)0},{(void*)0,&g_60[9][5].f1,(void*)0,&g_2},{(void*)0,&g_60[9][5].f1,&g_33,&g_62.f1},{(void*)0,&g_2,(void*)0,&g_60[9][5].f1},{(void*)0,&g_60[9][5].f1,&g_2,(void*)0},{&g_62.f1,&g_33,&g_33,(void*)0},{&g_62.f1,&g_60[9][5].f1,&g_62.f1,&g_60[9][5].f1},{(void*)0,&g_2,&g_2,&g_62.f1}},{{&g_62.f1,&g_60[9][5].f1,(void*)0,&g_2},{&g_33,&g_60[9][5].f1,(void*)0,(void*)0},{&g_62.f1,&g_60[9][5].f1,&g_2,(void*)0},{(void*)0,&g_62.f1,&g_62.f1,&g_2},{&g_62.f1,&g_2,&g_33,&g_60[9][5].f1},{&g_62.f1,&g_2,&g_2,&g_2},{(void*)0,&g_62.f1,(void*)0,(void*)0},{(void*)0,&g_60[9][5].f1,&g_33,(void*)0}},{{(void*)0,&g_60[9][5].f1,(void*)0,&g_2},{(void*)0,&g_60[9][5].f1,&g_33,&g_62.f1},{(void*)0,&g_2,(void*)0,&g_60[9][5].f1},{(void*)0,&g_60[9][5].f1,&g_2,(void*)0},{&g_62.f1,&g_33,&g_33,(void*)0},{&g_62.f1,&g_60[9][5].f1,&g_2,&g_62.f1},{&g_33,&g_33,&g_62.f1,&g_60[9][5].f1},{&g_60[9][5].f1,&g_62.f1,(void*)0,&g_33}},{{&g_2,(void*)0,(void*)0,&g_62.f1},{&g_60[9][5].f1,&g_62.f1,&g_62.f1,&g_60[9][5].f1},{&g_33,&g_60[9][5].f1,&g_2,&g_33},{&g_2,&g_33,&g_2,(void*)0},{&g_60[9][5].f1,&g_33,(void*)0,&g_33},{(void*)0,&g_60[9][5].f1,(void*)0,&g_60[9][5].f1},{(void*)0,&g_62.f1,&g_2,&g_62.f1},{&g_33,(void*)0,(void*)0,&g_33}},{{&g_33,&g_62.f1,&g_2,&g_60[9][5].f1},{(void*)0,&g_33,(void*)0,&g_62.f1},{(void*)0,(void*)0,(void*)0,&g_60[9][5].f1},{&g_60[9][5].f1,&g_62.f1,&g_2,&g_60[9][5].f1},{&g_2,(void*)0,&g_2,&g_62.f1},{&g_33,&g_33,&g_62.f1,&g_60[9][5].f1},{&g_60[9][5].f1,&g_62.f1,(void*)0,&g_33},{&g_2,(void*)0,(void*)0,&g_62.f1}},{{&g_60[9][5].f1,&g_62.f1,&g_62.f1,&g_60[9][5].f1},{&g_33,&g_60[9][5].f1,&g_2,&g_33},{&g_2,&g_33,&g_2,(void*)0},{&g_60[9][5].f1,&g_33,(void*)0,&g_33},{(void*)0,&g_60[9][5].f1,(void*)0,&g_60[9][5].f1},{(void*)0,&g_62.f1,(void*)0,&g_62.f1},{(void*)0,&g_33,(void*)0,&g_60[9][5].f1},{(void*)0,&g_62.f1,(void*)0,(void*)0}},{{&g_2,&g_60[9][5].f1,(void*)0,&g_62.f1},{&g_62.f1,&g_33,&g_33,&g_62.f1},{&g_33,(void*)0,(void*)0,&g_62.f1},{&g_2,&g_33,&g_2,&g_62.f1},{(void*)0,&g_60[9][5].f1,(void*)0,(void*)0},{&g_33,&g_62.f1,(void*)0,&g_60[9][5].f1},{(void*)0,&g_33,(void*)0,&g_62.f1},{&g_33,&g_60[9][5].f1,(void*)0,&g_62.f1}},{{(void*)0,&g_62.f1,&g_2,&g_60[9][5].f1},{&g_2,&g_60[9][5].f1,(void*)0,&g_60[9][5].f1},{&g_33,&g_60[9][5].f1,&g_33,&g_60[9][5].f1},{&g_62.f1,&g_62.f1,(void*)0,&g_62.f1},{&g_2,&g_60[9][5].f1,(void*)0,&g_62.f1},{(void*)0,&g_33,(void*)0,&g_60[9][5].f1},{(void*)0,&g_62.f1,(void*)0,(void*)0},{&g_2,&g_60[9][5].f1,(void*)0,&g_62.f1}}};
    int *l_75[5][10][4] = {{{&g_60[9][5].f1,&g_62.f1,&g_2,(void*)0},{&g_60[9][5].f1,&g_33,&g_60[9][5].f1,&g_33},{&g_60[9][5].f1,&g_60[9][5].f1,(void*)0,&g_2},{&g_2,&g_62.f1,&g_60[9][5].f1,&g_60[9][5].f1},{&g_62.f1,&g_62.f1,&g_60[9][5].f1,&g_33},{&g_60[9][5].f1,&g_33,&g_62.f1,&g_60[9][5].f1},{&g_33,&g_2,&g_2,&g_62.f1},{(void*)0,&g_2,&g_62.f1,&g_60[9][5].f1},{&g_2,&g_33,&g_33,(void*)0},{&g_33,&g_33,&g_62.f1,&g_33}},{{&g_33,&g_62.f1,&g_33,&g_60[9][5].f1},{(void*)0,&g_60[9][5].f1,&g_33,&g_2},{&g_60[9][5].f1,&g_60[9][5].f1,&g_33,&g_62.f1},{&g_60[9][5].f1,&g_33,&g_60[9][5].f1,&g_60[9][5].f1},{&g_60[9][5].f1,&g_60[9][5].f1,&g_33,&g_33},{&g_62.f1,(void*)0,&g_60[9][5].f1,&g_60[9][5].f1},{&g_2,(void*)0,&g_60[9][5].f1,(void*)0},{&g_62.f1,&g_33,&g_33,&g_33},{&g_60[9][5].f1,&g_33,&g_60[9][5].f1,&g_33},{&g_60[9][5].f1,&g_33,&g_33,&g_33}},{{&g_60[9][5].f1,&g_2,&g_33,&g_62.f1},{(void*)0,&g_33,&g_33,&g_33},{&g_33,&g_62.f1,&g_62.f1,&g_33},{&g_33,&g_60[9][5].f1,&g_33,&g_33},{&g_2,&g_2,&g_62.f1,&g_60[9][5].f1},{(void*)0,&g_33,&g_2,&g_60[9][5].f1},{&g_33,&g_2,&g_62.f1,&g_33},{&g_60[9][5].f1,&g_60[9][5].f1,&g_2,&g_33},{&g_33,&g_62.f1,&g_33,&g_33},{&g_33,&g_60[9][5].f1,&g_60[9][5].f1,(void*)0}},{{&g_33,&g_60[9][5].f1,&g_33,&g_60[9][5].f1},{&g_60[9][5].f1,&g_33,&g_33,&g_33},{(void*)0,&g_33,&g_60[9][5].f1,(void*)0},{&g_2,&g_60[9][5].f1,(void*)0,&g_33},{&g_33,&g_2,(void*)0,&g_60[9][5].f1},{&g_33,&g_2,(void*)0,&g_33},{&g_2,&g_60[9][5].f1,&g_60[9][5].f1,&g_62.f1},{(void*)0,&g_33,&g_33,&g_33},{&g_60[9][5].f1,&g_60[9][5].f1,&g_33,&g_62.f1},{&g_33,&g_60[9][5].f1,&g_60[9][5].f1,&g_33}},{{&g_33,&g_33,&g_33,&g_33},{&g_2,&g_2,&g_60[9][5].f1,&g_2},{&g_60[9][5].f1,&g_33,&g_33,&g_60[9][5].f1},{&g_60[9][5].f1,&g_62.f1,&g_62.f1,&g_33},{&g_62.f1,&g_62.f1,&g_33,&g_60[9][5].f1},{&g_62.f1,&g_33,&g_60[9][5].f1,&g_2},{(void*)0,&g_2,&g_62.f1,&g_33},{&g_60[9][5].f1,&g_33,&g_2,&g_33},{&g_2,&g_60[9][5].f1,&g_60[9][5].f1,&g_62.f1},{&g_60[9][5].f1,&g_60[9][5].f1,&g_60[9][5].f1,&g_33}}};
    struct S0 ***l_151 = &g_136;
    int **l_163 = &l_68[3][6][2];
    struct S1 *l_293 = &g_149[3][0];
    struct S1 **l_292 = &l_293;
    int i, j, k;
    if ((*g_32))
    {
        char l_80 = 3L;
        char l_94[6][6] = {{(-9L),0xF3L,(-7L),0xF3L,(-9L),0L},{(-9L),0x8CL,0xF3L,0x4FL,(-9L),(-9L)},{(-7L),0L,0L,(-7L),(-9L),(-2L)},{(-9L),(-2L),0x30L,6L,0xF3L,6L},{(-9L),0xDEL,(-9L),0x8CL,0xF3L,0x4FL},{0x30L,(-2L),(-9L),(-9L),(-9L),(-9L)}};
        unsigned l_104 = 0x3AC7BCD1L;
        int *l_105 = &g_33;
        struct S0 *l_107 = &g_60[9][5];
        int i, j;
        for (g_62.f1 = 0; (g_62.f1 >= 6); ++g_62.f1)
        {
            short l_74 = 0xC6A9L;
            int l_108 = 0xDC8AFE7FL;
            for (g_62.f2 = 14; (g_62.f2 >= 45); g_62.f2 = safe_add_func_int8_t_s_s(g_62.f2, 2))
            {
                struct S0 l_67[10] = {{2UL,8L,0xA07DL,0x373D2EF8L,65535UL,-6L},{0UL,0x5A8FD6DDL,0x4B23L,0xA561BD86L,0x4A0BL,0xBF62L},{0xF4L,0xAC61AB63L,0x390BL,1UL,0xE0B4L,0x7F8BL},{0UL,0x5A8FD6DDL,0x4B23L,0xA561BD86L,0x4A0BL,0xBF62L},{2UL,8L,0xA07DL,0x373D2EF8L,65535UL,-6L},{2UL,8L,0xA07DL,0x373D2EF8L,65535UL,-6L},{0UL,0x5A8FD6DDL,0x4B23L,0xA561BD86L,0x4A0BL,0xBF62L},{0xF4L,0xAC61AB63L,0x390BL,1UL,0xE0B4L,0x7F8BL},{0UL,0x5A8FD6DDL,0x4B23L,0xA561BD86L,0x4A0BL,0xBF62L},{2UL,8L,0xA07DL,0x373D2EF8L,65535UL,-6L}};
                int **l_69 = &l_68[1][3][3];
                int i;
                p_40.f2 = l_67[5];
                (*l_69) = l_68[3][6][2];
            }
        }
        (*l_105) &= 0xA975BA9DL;
    }
    else
    {
        int *l_123 = &g_62.f1;
        int **l_124 = &l_68[3][6][2];
        struct S0 *l_134 = &g_60[9][5];
        struct S1 *l_148 = &g_149[2][0];
        (*l_124) = l_123;
        if ((+(*p_38)))
        {
            char l_146 = 0L;
            int l_147[10][4];
            int **l_150 = &g_32;
            struct S0 *l_159[8][9] = {{&g_139.f2,&g_139.f2,&g_139.f2,&g_60[4][2],&g_149[2][0].f2,&g_60[0][2],(void*)0,(void*)0,&g_60[0][2]},{&g_60[9][5],(void*)0,&g_139.f2,(void*)0,&g_60[9][5],&g_149[2][0].f2,&g_60[9][5],(void*)0,(void*)0},{&g_60[4][5],&g_60[9][2],&g_60[0][2],&g_60[4][2],&g_60[0][2],&g_60[9][2],&g_60[4][5],&g_149[2][0].f2,(void*)0},{&g_62,(void*)0,(void*)0,&g_149[2][0].f2,&g_60[9][5],&g_149[2][0].f2,(void*)0,(void*)0,&g_62},{&g_60[9][2],&g_149[2][0].f2,(void*)0,&g_149[2][0].f2,&g_62,&g_60[0][2],&g_62,&g_149[2][0].f2,(void*)0},{&g_60[9][5],&g_60[9][5],&g_149[2][0].f2,&g_139.f2,(void*)0,(void*)0,&g_62,(void*)0,(void*)0},{&g_60[9][2],&g_62,&g_62,&g_60[9][2],&g_139.f2,(void*)0,&g_60[4][2],&g_60[9][2],&g_149[2][0].f2},{&g_149[2][0].f2,(void*)0,(void*)0,(void*)0,(void*)0,&g_149[2][0].f2,&g_62,&g_60[9][5],&g_149[2][0].f2}};
            int i, j;
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 4; j++)
                    l_147[i][j] = 0x57199020L;
            }
            for (p_40.f6 = 0; (p_40.f6 <= 3); p_40.f6 += 1)
            {
                int l_127 = 1L;
                struct S1 l_160 = {0xFA3CC0CAL,1UL,{1UL,-1L,65531UL,0x4FD20CEAL,0UL,0L},-1L,4294967295UL,0x2A4AL,0x237FCBA1L,0x65L};
                (*l_123) &= (safe_rshift_func_uint16_t_u_s(l_127, ((((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(0x56L, p_39.f0)), 4)), 0UL)) || l_127) & p_40.f2.f3) == g_62.f0)));
                if ((255UL != (5UL > ((*g_32) >= ((void*)0 != l_134)))))
                {
                    for (p_40.f5 = 0; (p_40.f5 <= 5); p_40.f5 += 1)
                    {
                        unsigned l_135 = 4294967288UL;
                        struct S0 ***l_138 = &g_136;
                        int i, j;
                        (*l_123) = l_135;
                        (*l_123) &= ((void*)0 != &g_60[(p_40.f5 + 4)][p_40.f6]);
                        (*l_138) = g_136;
                        (*l_124) = p_38;
                    }
                    for (g_33 = 3; (g_33 >= 0); g_33 -= 1)
                    {
                        g_62.f1 = (*p_38);
                        (*l_124) = func_41(g_2, g_139, &g_32, &g_32, p_37);
                    }
                    (*l_123) = ((5L ^ (*g_32)) || (p_40.f2.f3 & g_139.f4));
                }
                else
                {
                    if (l_127)
                        break;
                    return g_139.f1;
                }
                (*l_123) = (safe_sub_func_int16_t_s_s(g_139.f2.f2, p_40.f6));
                for (g_139.f3 = 0; (g_139.f3 <= 3); g_139.f3 += 1)
                {
                    int **l_161 = &l_75[3][2][0];
                }
                for (g_139.f2.f3 = 0; (g_139.f2.f3 <= 3); g_139.f2.f3 += 1)
                {
                    g_60[9][5].f1 = (*g_32);
                    (*l_150) = &g_2;
                    if ((*p_38))
                        continue;
                    for (l_160.f0 = 0; (l_160.f0 <= 3); l_160.f0 += 1)
                    {
                        int i, j, k;
                        (*l_123) = (*p_38);
                        if (l_160.f2.f5)
                            continue;
                        return (**l_150);
                    }
                }
            }
        }
        else
        {
            (*l_123) |= 0L;
        }
        (*l_123) ^= (*g_32);
    }
    (*l_163) = g_162;


    if (((void*)0 != &l_163))
    {
        char l_171 = (-7L);
        struct S1 *l_189 = &g_149[4][0];
        struct S1 **l_188 = &l_189;
        int *l_245 = &g_60[9][5].f1;
        (*g_162) = 0x985D1017L;
        if ((((void*)0 == &p_39) <= ((((*g_32) ^ (safe_sub_func_uint8_t_u_u(p_40.f2.f1, 0x86L))) != (*p_37)) != (safe_add_func_uint32_t_u_u(p_39.f0, (&g_136 == l_151))))))
        {
            int l_190 = 0x0DBF972BL;
            unsigned l_212[9][9] = {{4294967290UL,0xEFAD2F49L,4294967290UL,0xEFAD2F49L,4294967290UL,0xEFAD2F49L,4294967290UL,0xEFAD2F49L,4294967290UL},{0UL,0UL,0xD387A415L,0xD387A415L,0UL,0UL,0xD387A415L,0xD387A415L,0UL},{0x4118BEC9L,0xEFAD2F49L,0x4118BEC9L,0xEFAD2F49L,0x4118BEC9L,0xEFAD2F49L,0x4118BEC9L,0xEFAD2F49L,0x4118BEC9L},{0UL,0xD387A415L,0xD387A415L,0UL,0UL,0xD387A415L,0xD387A415L,0UL,0UL},{4294967290UL,0xEFAD2F49L,4294967290UL,0xEFAD2F49L,4294967290UL,0xEFAD2F49L,4294967290UL,0xEFAD2F49L,4294967290UL},{0UL,0UL,0xD387A415L,0xD387A415L,0UL,0UL,0xD387A415L,0xD387A415L,0UL},{0x4118BEC9L,0xEFAD2F49L,0x4118BEC9L,0xEFAD2F49L,0x4118BEC9L,0xEFAD2F49L,0x4118BEC9L,0xEFAD2F49L,0x4118BEC9L},{0UL,0xD387A415L,0xD387A415L,0UL,0UL,0xD387A415L,0xD387A415L,0UL,0UL},{4294967290UL,0xEFAD2F49L,4294967290UL,0xEFAD2F49L,4294967290UL,0xEFAD2F49L,4294967290UL,0xEFAD2F49L,4294967290UL}};
            unsigned short l_219 = 0x032CL;
            short l_229 = (-9L);
            int l_231 = 0xF71308A2L;
            int i, j;
            (**g_136) = (***l_151);
            if ((*g_162))
            {
                unsigned l_179 = 4294967290UL;
                struct S1 l_214 = {4294967288UL,1UL,{0x42L,0x8210A6BCL,8UL,0x234216DBL,0UL,1L},6L,4UL,0xB557L,0xA6E4B284L,0x28L};
                for (p_40.f5 = 0; (p_40.f5 == 50); p_40.f5 = safe_add_func_uint8_t_u_u(p_40.f5, 1))
                {
                    unsigned char l_170 = 0x18L;
                    struct S1 *l_172 = &g_139;
                    struct S1 **l_173 = &l_172;
                    char l_174 = (-1L);
                    l_171 = l_170;
                    (*l_173) = l_172;
                    if (l_174)
                        continue;
                }
                if ((g_139.f5 && (p_39.f1 > (safe_sub_func_int16_t_s_s(g_62.f1, (l_179 == ((safe_rshift_func_int16_t_s_u(((((safe_add_func_uint16_t_u_u(g_139.f2.f4, g_149[2][0].f2.f3)) & ((safe_sub_func_uint32_t_u_u(g_62.f1, (((safe_sub_func_uint32_t_u_u(0xDF889604L, (((void*)0 == l_188) <= (-1L)))) < 0UL) != g_149[2][0].f3))) || g_60[9][5].f1)) > 0x0989L) != l_190), 3)) == p_40.f5)))))))
                {
                    int l_205[2][8] = {{0x7E48BFFBL,0x7E48BFFBL,2L,2L,0x7E48BFFBL,0x7E48BFFBL,2L,2L},{0x7E48BFFBL,0x7E48BFFBL,2L,2L,0x7E48BFFBL,0x7E48BFFBL,2L,2L}};
                    struct S0 *l_213[10] = {(void*)0,&g_139.f2,&g_139.f2,(void*)0,&g_139.f2,&g_139.f2,(void*)0,&g_139.f2,&g_139.f2,(void*)0};
                    int i, j;
                    l_212[0][1] ^= (safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s(g_62.f4, 0x15L)), (((safe_add_func_uint32_t_u_u((g_60[9][5].f0 && ((l_190 < (p_39.f3 & ((*g_162) & (*p_38)))) != (safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((!(safe_rshift_func_uint16_t_u_s((l_205[0][0] >= (safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(0x0C4DL, 10)) < p_39.f1), 5)), p_39.f2))), 3))) >= g_62.f2), g_60[9][5].f3)), g_149[2][0].f0)), (-5L))))), (*g_32))) < (-10L)) && l_179)));
                    (**l_151) = l_213[2];

                    ;
                }
                else
                {
                    return p_40.f2.f3;
                }

                ;
                (*l_189) = l_214;
            }
            else
            {
                char l_230[10];
                int i;
                for (i = 0; i < 10; i++)
                    l_230[i] = (-5L);
                for (p_40.f2.f3 = 0; (p_40.f2.f3 == 17); p_40.f2.f3 = safe_add_func_int32_t_s_s(p_40.f2.f3, 1))
                {
                    char l_227 = 0L;
                    for (p_40.f2.f2 = 0; (p_40.f2.f2 == 15); p_40.f2.f2 = safe_add_func_int8_t_s_s(p_40.f2.f2, 8))
                    {
                        if (l_171)
                            break;
                    }
                    if ((l_219 ^ ((void*)0 != &g_137)))
                    {
                        (*l_163) = func_41((safe_lshift_func_uint16_t_u_u(5UL, (safe_add_func_int16_t_s_s((l_212[0][1] <= ((0x5CL | p_39.f1) <= p_40.f6)), 65535UL)))), p_40, &g_162, &g_32, &g_33);

                        ;
                        return g_149[2][0].f2.f0;
                    }
                    else
                    {
                        unsigned l_224 = 0UL;
                        int l_228 = 0x8A45DB5CL;
                        (*g_162) ^= (*g_32);
                        (*g_162) |= l_224;
                        l_227 |= (7UL ^ 0UL);
                        l_228 ^= (*g_162);
                    }
                }
                (*g_162) = ((((((g_149[2][0].f2.f3 | 254UL) & 0xFD7FL) & l_229) <= l_230[5]) && l_230[9]) > (g_60[9][5].f1 > g_2));
                l_190 &= (*p_37);
            }

            ;
            l_231 &= (l_190 == (0UL && 0xE337L));
        }
        else
        {
            unsigned char l_236 = 1UL;
            (**l_151) = (void*)0;

            ;
            (*g_162) = (*p_38);
            if ((safe_rshift_func_uint16_t_u_s(((g_2 > (g_62.f3 > (safe_lshift_func_uint8_t_u_u(p_39.f0, (+l_236))))) || ((safe_sub_func_int32_t_s_s((~(safe_rshift_func_int8_t_s_s(g_62.f2, 4))), (safe_rshift_func_uint8_t_u_s(0x26L, l_236)))) >= l_171)), 14)))
            {
                (*g_162) |= ((!0x66C3L) == 0x2C97L);
            }
            else
            {
                for (p_40.f7 = 0; (p_40.f7 == 45); p_40.f7 = safe_add_func_int8_t_s_s(p_40.f7, 9))
                {
                    for (p_40.f0 = 0; (p_40.f0 <= 5); p_40.f0 += 1)
                    {
                        return p_40.f0;
                    }
                    (*l_163) = l_245;
                }
                (*l_245) &= (-1L);
            }
        }

        ;
    }
    else
    {
        short l_246 = 0x4F1CL;
        struct S1 *l_248 = &g_149[2][0];
        struct S1 **l_247 = &l_248;
        struct S1 *l_260 = &g_139;
        int *l_273[10] = {&g_60[9][5].f1,&g_2,&g_60[9][5].f1,&g_60[9][5].f1,&g_2,&g_60[9][5].f1,&g_60[9][5].f1,&g_2,&g_60[9][5].f1,&g_60[9][5].f1};
        char l_276[7][10][3] = {{{1L,0L,1L},{(-5L),7L,0L},{(-10L),0L,1L},{(-10L),1L,1L},{(-5L),(-2L),0x02L},{1L,1L,0x17L},{0x45L,0x49L,(-10L)},{0x49L,0x02L,0x45L},{0xCAL,0x49L,5L},{0x9DL,1L,0x6BL}},{{0x6BL,(-2L),1L},{0xD7L,1L,(-2L)},{1L,0L,(-2L)},{1L,7L,1L},{1L,0L,0x6BL},{0xDFL,0L,5L},{1L,0x9DL,0x45L},{0L,1L,(-10L)},{1L,1L,0x17L},{0xDFL,0xF4L,0x02L}},{{1L,0xD7L,1L},{(-5L),0x49L,1L},{0xDFL,0x49L,1L},{(-10L),(-10L),1L},{1L,7L,0xDFL},{(-2L),1L,1L},{0L,0xDFL,0L},{(-2L),(-2L),1L},{0x49L,5L,0xDFL},{0xD7L,0xF4L,1L}},{{0L,0x17L,1L},{1L,1L,1L},{1L,0xD7L,0xD7L},{0L,0L,0x6BL},{0xD7L,(-5L),0x9DL},{0x49L,(-2L),0xCAL},{(-2L),0x6BL,0x49L},{0L,(-2L),0x45L},{(-2L),(-5L),1L},{1L,0L,(-5L)}},{{(-10L),0xD7L,(-10L)},{0xDFL,1L,(-10L)},{(-5L),0x17L,(-5L)},{1L,0xF4L,1L},{0x02L,5L,0x45L},{1L,(-2L),0x49L},{0L,0xDFL,0xCAL},{1L,1L,0x9DL},{0x02L,7L,0x6BL},{1L,(-10L),0xD7L}},{{(-5L),0x49L,1L},{0xDFL,0x49L,1L},{(-10L),(-10L),1L},{(-10L),0x9DL,0x6BL},{1L,0x02L,1L},{0L,0x6BL,1L},{0L,1L,1L},{0L,0x49L,0x6BL},{0xCAL,0x17L,1L},{7L,(-2L),0L}},{{1L,0L,0x02L},{1L,0xCAL,0xCAL},{7L,1L,0xD7L},{0xCAL,0xF4L,(-10L)},{0L,0L,0xCEL},{0L,0xD7L,0L},{0L,0L,(-2L)},{1L,0xF4L,(-10L)},{(-10L),1L,0xF4L},{0L,0xCAL,1L}}};
        int l_288 = 1L;
        struct S1 l_291[4][2][10] = {{{{0x04D22C09L,0x723A1F39L,{0UL,0xB662DB05L,3UL,1UL,9UL,0xA19DL},-9L,0x34E22B8DL,1UL,0xE2DDB661L,0x33L},{0x9059433BL,0xB152E0C0L,{253UL,-3L,65534UL,0xB6B7D625L,0x1E29L,0x3CA1L},0xC83ADDE6L,0xAB463285L,0x0B79L,4294967295UL,1UL},{1UL,0UL,{0x7EL,0xF0865A28L,0UL,0UL,0x0C3BL,1L},-10L,4294967295UL,0x1373L,0x356E122DL,8UL},{1UL,0xEF74E5CDL,{0x27L,0x2A732179L,0xDDBDL,4UL,0x76F1L,0L},-1L,4294967295UL,0x1E55L,4294967295UL,255UL},{0x7AD736C4L,1UL,{0x99L,0L,65535UL,7UL,0UL,0L},1L,0x771560EAL,0xCC26L,2UL,255UL},{4UL,0UL,{0x01L,-1L,0xD2D4L,4294967295UL,0UL,0x5B8AL},0xF16101ADL,4294967295UL,65530UL,1UL,255UL},{0x58DC6AC7L,0xB26C908BL,{0x9BL,0L,65534UL,1UL,3UL,0x44C4L},0xC5BC7686L,0xED9D69DAL,65530UL,4294967287UL,0x62L},{0x58DC6AC7L,0xB26C908BL,{0x9BL,0L,65534UL,1UL,3UL,0x44C4L},0xC5BC7686L,0xED9D69DAL,65530UL,4294967287UL,0x62L},{4UL,0UL,{0x01L,-1L,0xD2D4L,4294967295UL,0UL,0x5B8AL},0xF16101ADL,4294967295UL,65530UL,1UL,255UL},{0x7AD736C4L,1UL,{0x99L,0L,65535UL,7UL,0UL,0L},1L,0x771560EAL,0xCC26L,2UL,255UL}},{{0x2C58EC2BL,4294967287UL,{1UL,1L,0UL,0x11156568L,0UL,1L},0x36E7E63EL,0UL,0x56A8L,0x4C93DE23L,0xB3L},{0x9059433BL,0xB152E0C0L,{253UL,-3L,65534UL,0xB6B7D625L,0x1E29L,0x3CA1L},0xC83ADDE6L,0xAB463285L,0x0B79L,4294967295UL,1UL},{0x9059433BL,0xB152E0C0L,{253UL,-3L,65534UL,0xB6B7D625L,0x1E29L,0x3CA1L},0xC83ADDE6L,0xAB463285L,0x0B79L,4294967295UL,1UL},{0x2C58EC2BL,4294967287UL,{1UL,1L,0UL,0x11156568L,0UL,1L},0x36E7E63EL,0UL,0x56A8L,0x4C93DE23L,0xB3L},{4UL,0UL,{0x01L,-1L,0xD2D4L,4294967295UL,0UL,0x5B8AL},0xF16101ADL,4294967295UL,65530UL,1UL,255UL},{0x04D22C09L,0x723A1F39L,{0UL,0xB662DB05L,3UL,1UL,9UL,0xA19DL},-9L,0x34E22B8DL,1UL,0xE2DDB661L,0x33L},{0x6F1835DEL,0x6B37F59FL,{0x5FL,-1L,2UL,0x23CABEE2L,1UL,0x1953L},-3L,9UL,65535UL,0xABA84B95L,0x49L},{0xC2EBA130L,4294967287UL,{1UL,1L,1UL,2UL,65535UL,5L},0x2DF8C72EL,1UL,5UL,4294967293UL,255UL},{9UL,4294967295UL,{0xFAL,-5L,0x294EL,1UL,0x9478L,0x0312L},-2L,0x7470D357L,5UL,0x70D9BA3AL,1UL},{0x491E1E1CL,0xC7751177L,{4UL,5L,65529UL,0UL,0x8034L,6L},0xBDAA540FL,0x154D2F9DL,1UL,0x03539932L,0x07L}}},{{{1UL,0UL,{0x7EL,0xF0865A28L,0UL,0UL,0x0C3BL,1L},-10L,4294967295UL,0x1373L,0x356E122DL,8UL},{0xF4BC9DBFL,0x131F9D61L,{0x91L,0x6074E6F3L,1UL,1UL,0xC8DBL,0x9AE2L},0x1B80C791L,0xE181A45EL,0xF8CDL,0x0F1921D2L,0UL},{9UL,4294967295UL,{0xFAL,-5L,0x294EL,1UL,0x9478L,0x0312L},-2L,0x7470D357L,5UL,0x70D9BA3AL,1UL},{0x6F1835DEL,0x6B37F59FL,{0x5FL,-1L,2UL,0x23CABEE2L,1UL,0x1953L},-3L,9UL,65535UL,0xABA84B95L,0x49L},{0x9059433BL,0xB152E0C0L,{253UL,-3L,65534UL,0xB6B7D625L,0x1E29L,0x3CA1L},0xC83ADDE6L,0xAB463285L,0x0B79L,4294967295UL,1UL},{1UL,0xEF74E5CDL,{0x27L,0x2A732179L,0xDDBDL,4UL,0x76F1L,0L},-1L,4294967295UL,0x1E55L,4294967295UL,255UL},{0x9059433BL,0xB152E0C0L,{253UL,-3L,65534UL,0xB6B7D625L,0x1E29L,0x3CA1L},0xC83ADDE6L,0xAB463285L,0x0B79L,4294967295UL,1UL},{0x6F1835DEL,0x6B37F59FL,{0x5FL,-1L,2UL,0x23CABEE2L,1UL,0x1953L},-3L,9UL,65535UL,0xABA84B95L,0x49L},{9UL,4294967295UL,{0xFAL,-5L,0x294EL,1UL,0x9478L,0x0312L},-2L,0x7470D357L,5UL,0x70D9BA3AL,1UL},{0xF4BC9DBFL,0x131F9D61L,{0x91L,0x6074E6F3L,1UL,1UL,0xC8DBL,0x9AE2L},0x1B80C791L,0xE181A45EL,0xF8CDL,0x0F1921D2L,0UL}},{{0x7AD736C4L,1UL,{0x99L,0L,65535UL,7UL,0UL,0L},1L,0x771560EAL,0xCC26L,2UL,255UL},{3UL,0UL,{0x83L,0x25221FF1L,0x0953L,0x21F9BE9EL,0x4BC8L,0xF11FL},0x991B0196L,0x39EDFA68L,7UL,4294967295UL,0UL},{4294967289UL,1UL,{0x4EL,0x61DCFB28L,65529UL,0UL,8UL,0L},0x353A1A1BL,4294967295UL,0xA5EEL,9UL,1UL},{0x2C58EC2BL,4294967287UL,{1UL,1L,0UL,0x11156568L,0UL,1L},0x36E7E63EL,0UL,0x56A8L,0x4C93DE23L,0xB3L},{4294967289UL,0x621463A6L,{255UL,-10L,0UL,8UL,2UL,4L},3L,1UL,1UL,4294967295UL,1UL},{0x444105FEL,0xE2FA31D0L,{0xD4L,0L,0x60C1L,0x2D60493DL,0xA7EFL,0xE9D0L},0x27B496DFL,0xECDCD1B2L,65532UL,0UL,0xC0L},{0x04D22C09L,0x723A1F39L,{0UL,0xB662DB05L,3UL,1UL,9UL,0xA19DL},-9L,0x34E22B8DL,1UL,0xE2DDB661L,0x33L},{9UL,4294967295UL,{0xFAL,-5L,0x294EL,1UL,0x9478L,0x0312L},-2L,0x7470D357L,5UL,0x70D9BA3AL,1UL},{4UL,0UL,{0x01L,-1L,0xD2D4L,4294967295UL,0UL,0x5B8AL},0xF16101ADL,4294967295UL,65530UL,1UL,255UL},{4UL,0UL,{0x01L,-1L,0xD2D4L,4294967295UL,0UL,0x5B8AL},0xF16101ADL,4294967295UL,65530UL,1UL,255UL}}},{{{3UL,0UL,{0x83L,0x25221FF1L,0x0953L,0x21F9BE9EL,0x4BC8L,0xF11FL},0x991B0196L,0x39EDFA68L,7UL,4294967295UL,0UL},{0x491E1E1CL,0xC7751177L,{4UL,5L,65529UL,0UL,0x8034L,6L},0xBDAA540FL,0x154D2F9DL,1UL,0x03539932L,0x07L},{0x444105FEL,0xE2FA31D0L,{0xD4L,0L,0x60C1L,0x2D60493DL,0xA7EFL,0xE9D0L},0x27B496DFL,0xECDCD1B2L,65532UL,0UL,0xC0L},{9UL,4294967295UL,{0xFAL,-5L,0x294EL,1UL,0x9478L,0x0312L},-2L,0x7470D357L,5UL,0x70D9BA3AL,1UL},{9UL,4294967295UL,{0xFAL,-5L,0x294EL,1UL,0x9478L,0x0312L},-2L,0x7470D357L,5UL,0x70D9BA3AL,1UL},{0x7AD736C4L,1UL,{0x99L,0L,65535UL,7UL,0UL,0L},1L,0x771560EAL,0xCC26L,2UL,255UL},{4294967289UL,1UL,{0x4EL,0x61DCFB28L,65529UL,0UL,8UL,0L},0x353A1A1BL,4294967295UL,0xA5EEL,9UL,1UL},{0x6F1835DEL,0x6B37F59FL,{0x5FL,-1L,2UL,0x23CABEE2L,1UL,0x1953L},-3L,9UL,65535UL,0xABA84B95L,0x49L},{3UL,0UL,{0x83L,0x25221FF1L,0x0953L,0x21F9BE9EL,0x4BC8L,0xF11FL},0x991B0196L,0x39EDFA68L,7UL,4294967295UL,0UL},{0x58DC6AC7L,0xB26C908BL,{0x9BL,0L,65534UL,1UL,3UL,0x44C4L},0xC5BC7686L,0xED9D69DAL,65530UL,4294967287UL,0x62L}},{{0x2C58EC2BL,4294967287UL,{1UL,1L,0UL,0x11156568L,0UL,1L},0x36E7E63EL,0UL,0x56A8L,0x4C93DE23L,0xB3L},{4UL,0UL,{0x01L,-1L,0xD2D4L,4294967295UL,0UL,0x5B8AL},0xF16101ADL,4294967295UL,65530UL,1UL,255UL},{0x04D22C09L,0x723A1F39L,{0UL,0xB662DB05L,3UL,1UL,9UL,0xA19DL},-9L,0x34E22B8DL,1UL,0xE2DDB661L,0x33L},{0x6F1835DEL,0x6B37F59FL,{0x5FL,-1L,2UL,0x23CABEE2L,1UL,0x1953L},-3L,9UL,65535UL,0xABA84B95L,0x49L},{0xC2EBA130L,4294967287UL,{1UL,1L,1UL,2UL,65535UL,5L},0x2DF8C72EL,1UL,5UL,4294967293UL,255UL},{9UL,4294967295UL,{0xFAL,-5L,0x294EL,1UL,0x9478L,0x0312L},-2L,0x7470D357L,5UL,0x70D9BA3AL,1UL},{0x491E1E1CL,0xC7751177L,{4UL,5L,65529UL,0UL,0x8034L,6L},0xBDAA540FL,0x154D2F9DL,1UL,0x03539932L,0x07L},{0x58DC6AC7L,0xB26C908BL,{0x9BL,0L,65534UL,1UL,3UL,0x44C4L},0xC5BC7686L,0xED9D69DAL,65530UL,4294967287UL,0x62L},{0x491E1E1CL,0xC7751177L,{4UL,5L,65529UL,0UL,0x8034L,6L},0xBDAA540FL,0x154D2F9DL,1UL,0x03539932L,0x07L},{9UL,4294967295UL,{0xFAL,-5L,0x294EL,1UL,0x9478L,0x0312L},-2L,0x7470D357L,5UL,0x70D9BA3AL,1UL}}},{{{1UL,0xEF74E5CDL,{0x27L,0x2A732179L,0xDDBDL,4UL,0x76F1L,0L},-1L,4294967295UL,0x1E55L,4294967295UL,255UL},{0xC2EBA130L,4294967287UL,{1UL,1L,1UL,2UL,65535UL,5L},0x2DF8C72EL,1UL,5UL,4294967293UL,255UL},{0x04D22C09L,0x723A1F39L,{0UL,0xB662DB05L,3UL,1UL,9UL,0xA19DL},-9L,0x34E22B8DL,1UL,0xE2DDB661L,0x33L},{0xC2EBA130L,4294967287UL,{1UL,1L,1UL,2UL,65535UL,5L},0x2DF8C72EL,1UL,5UL,4294967293UL,255UL},{1UL,0xEF74E5CDL,{0x27L,0x2A732179L,0xDDBDL,4UL,0x76F1L,0L},-1L,4294967295UL,0x1E55L,4294967295UL,255UL},{0x58DC6AC7L,0xB26C908BL,{0x9BL,0L,65534UL,1UL,3UL,0x44C4L},0xC5BC7686L,0xED9D69DAL,65530UL,4294967287UL,0x62L},{3UL,0UL,{0x83L,0x25221FF1L,0x0953L,0x21F9BE9EL,0x4BC8L,0xF11FL},0x991B0196L,0x39EDFA68L,7UL,4294967295UL,0UL},{0x6F1835DEL,0x6B37F59FL,{0x5FL,-1L,2UL,0x23CABEE2L,1UL,0x1953L},-3L,9UL,65535UL,0xABA84B95L,0x49L},{4294967289UL,1UL,{0x4EL,0x61DCFB28L,65529UL,0UL,8UL,0L},0x353A1A1BL,4294967295UL,0xA5EEL,9UL,1UL},{0x7AD736C4L,1UL,{0x99L,0L,65535UL,7UL,0UL,0L},1L,0x771560EAL,0xCC26L,2UL,255UL}},{{3UL,0UL,{0x83L,0x25221FF1L,0x0953L,0x21F9BE9EL,0x4BC8L,0xF11FL},0x991B0196L,0x39EDFA68L,7UL,4294967295UL,0UL},{0x444105FEL,0xE2FA31D0L,{0xD4L,0L,0x60C1L,0x2D60493DL,0xA7EFL,0xE9D0L},0x27B496DFL,0xECDCD1B2L,65532UL,0UL,0xC0L},{0x7AD736C4L,1UL,{0x99L,0L,65535UL,7UL,0UL,0L},1L,0x771560EAL,0xCC26L,2UL,255UL},{0x58DC6AC7L,0xB26C908BL,{0x9BL,0L,65534UL,1UL,3UL,0x44C4L},0xC5BC7686L,0xED9D69DAL,65530UL,4294967287UL,0x62L},{0x9059433BL,0xB152E0C0L,{253UL,-3L,65534UL,0xB6B7D625L,0x1E29L,0x3CA1L},0xC83ADDE6L,0xAB463285L,0x0B79L,4294967295UL,1UL},{0xF4BC9DBFL,0x131F9D61L,{0x91L,0x6074E6F3L,1UL,1UL,0xC8DBL,0x9AE2L},0x1B80C791L,0xE181A45EL,0xF8CDL,0x0F1921D2L,0UL},{0xF4BC9DBFL,0x131F9D61L,{0x91L,0x6074E6F3L,1UL,1UL,0xC8DBL,0x9AE2L},0x1B80C791L,0xE181A45EL,0xF8CDL,0x0F1921D2L,0UL},{0x9059433BL,0xB152E0C0L,{253UL,-3L,65534UL,0xB6B7D625L,0x1E29L,0x3CA1L},0xC83ADDE6L,0xAB463285L,0x0B79L,4294967295UL,1UL},{0x58DC6AC7L,0xB26C908BL,{0x9BL,0L,65534UL,1UL,3UL,0x44C4L},0xC5BC7686L,0xED9D69DAL,65530UL,4294967287UL,0x62L},{0x7AD736C4L,1UL,{0x99L,0L,65535UL,7UL,0UL,0L},1L,0x771560EAL,0xCC26L,2UL,255UL}}}};
        int i, j, k;
        for (p_39.f1 = 0; (p_39.f1 <= 5); p_39.f1 += 1)
        {
            unsigned l_249[7][3][1] = {{{0xE64D8D01L},{4294967295UL},{0xA03AC845L}},{{0UL},{0xEE186793L},{4294967291UL}},{{0xEE186793L},{0UL},{0xA03AC845L}},{{4294967295UL},{0xE64D8D01L},{4294967295UL}},{{0xA03AC845L},{0UL},{0xEE186793L}},{{4294967291UL},{0xEE186793L},{0UL}},{{0xA03AC845L},{4294967295UL},{0xE64D8D01L}}};
            int ***l_250 = &l_163;
            int **l_259 = (void*)0;
            unsigned l_279 = 0x3CD8DEA5L;
            struct S1 l_280 = {0xFEE6C433L,2UL,{1UL,0x4ACA55B8L,0xCACFL,0x8120A1A0L,1UL,0x5544L},0L,0xBEDB9D98L,0xC883L,8UL,0xA8L};
            unsigned short l_302 = 0UL;
            int i, j, k;
            (*l_163) = (void*)0;
            l_246 |= (*g_32);
        }
        (*g_162) = (safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(p_40.f3, (safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(p_40.f5, g_149[2][0].f7)), (*g_32))))), g_139.f3));
    }

    ;
    (*g_162) |= (*g_32);
    return g_149[2][0].f4;
}







static int * func_41(unsigned short p_42, struct S1 p_43, int ** p_44, int ** p_45, int * p_46)
{
    short l_56[5][6] = {{0x03C6L,0x03C6L,0x03C6L,0x03C6L,0x03C6L,0x03C6L},{0x03C6L,0x03C6L,0x03C6L,0x03C6L,0x03C6L,0x03C6L},{0x03C6L,0x03C6L,0x03C6L,0x03C6L,0x03C6L,0x03C6L},{0x03C6L,0x03C6L,0x03C6L,0x03C6L,0x03C6L,0x03C6L},{0x03C6L,0x03C6L,0x03C6L,0x03C6L,0x03C6L,0x03C6L}};
    int i, j;
    if ((safe_sub_func_int16_t_s_s((g_2 != ((l_56[1][0] >= l_56[4][2]) || l_56[3][1])), p_43.f0)))
    {
        struct S0 *l_59 = &g_60[9][5];
        for (p_43.f1 = 17; (p_43.f1 >= 54); p_43.f1 = safe_add_func_uint32_t_u_u(p_43.f1, 4))
        {
            (*p_44) = (*p_45);

            ;
            return (*p_45);


        }
        (*l_59) = p_43.f2;
    }
    else
    {
        struct S0 *l_61 = &g_60[4][3];
        (*l_61) = g_60[9][1];
    }
    return (*p_44);


}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_60[i][j].f0, "g_60[i][j].f0", print_hash_value);
            transparent_crc(g_60[i][j].f1, "g_60[i][j].f1", print_hash_value);
            transparent_crc(g_60[i][j].f2, "g_60[i][j].f2", print_hash_value);
            transparent_crc(g_60[i][j].f3, "g_60[i][j].f3", print_hash_value);
            transparent_crc(g_60[i][j].f4, "g_60[i][j].f4", print_hash_value);
            transparent_crc(g_60[i][j].f5, "g_60[i][j].f5", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_62.f0, "g_62.f0", print_hash_value);
    transparent_crc(g_62.f1, "g_62.f1", print_hash_value);
    transparent_crc(g_62.f2, "g_62.f2", print_hash_value);
    transparent_crc(g_62.f3, "g_62.f3", print_hash_value);
    transparent_crc(g_62.f4, "g_62.f4", print_hash_value);
    transparent_crc(g_62.f5, "g_62.f5", print_hash_value);
    transparent_crc(g_139.f0, "g_139.f0", print_hash_value);
    transparent_crc(g_139.f1, "g_139.f1", print_hash_value);
    transparent_crc(g_139.f2.f0, "g_139.f2.f0", print_hash_value);
    transparent_crc(g_139.f2.f1, "g_139.f2.f1", print_hash_value);
    transparent_crc(g_139.f2.f2, "g_139.f2.f2", print_hash_value);
    transparent_crc(g_139.f2.f3, "g_139.f2.f3", print_hash_value);
    transparent_crc(g_139.f2.f4, "g_139.f2.f4", print_hash_value);
    transparent_crc(g_139.f2.f5, "g_139.f2.f5", print_hash_value);
    transparent_crc(g_139.f3, "g_139.f3", print_hash_value);
    transparent_crc(g_139.f4, "g_139.f4", print_hash_value);
    transparent_crc(g_139.f5, "g_139.f5", print_hash_value);
    transparent_crc(g_139.f6, "g_139.f6", print_hash_value);
    transparent_crc(g_139.f7, "g_139.f7", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_149[i][j].f0, "g_149[i][j].f0", print_hash_value);
            transparent_crc(g_149[i][j].f1, "g_149[i][j].f1", print_hash_value);
            transparent_crc(g_149[i][j].f2.f0, "g_149[i][j].f2.f0", print_hash_value);
            transparent_crc(g_149[i][j].f2.f1, "g_149[i][j].f2.f1", print_hash_value);
            transparent_crc(g_149[i][j].f2.f2, "g_149[i][j].f2.f2", print_hash_value);
            transparent_crc(g_149[i][j].f2.f3, "g_149[i][j].f2.f3", print_hash_value);
            transparent_crc(g_149[i][j].f2.f4, "g_149[i][j].f2.f4", print_hash_value);
            transparent_crc(g_149[i][j].f2.f5, "g_149[i][j].f2.f5", print_hash_value);
            transparent_crc(g_149[i][j].f3, "g_149[i][j].f3", print_hash_value);
            transparent_crc(g_149[i][j].f4, "g_149[i][j].f4", print_hash_value);
            transparent_crc(g_149[i][j].f5, "g_149[i][j].f5", print_hash_value);
            transparent_crc(g_149[i][j].f6, "g_149[i][j].f6", print_hash_value);
            transparent_crc(g_149[i][j].f7, "g_149[i][j].f7", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_346[i], "g_346[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_565, "g_565", print_hash_value);
    transparent_crc(g_570, "g_570", print_hash_value);
    transparent_crc(g_642, "g_642", print_hash_value);
    transparent_crc(g_1046, "g_1046", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
