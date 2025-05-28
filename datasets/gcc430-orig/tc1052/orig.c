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
   short f0;
   unsigned f1;
   unsigned short f2;
   unsigned f3;
   unsigned char f4;
};


static char g_7 = 0xD9L;
static unsigned g_34 = 0x1F3813BFL;
static short g_50 = 0x3933L;
static unsigned g_77 = 4294967291UL;
static unsigned *g_78[10] = {&g_77,&g_77,&g_77,&g_77,&g_77,&g_77,&g_77,&g_77,&g_77,&g_77};
static int g_80 = (-1L);
static int *g_79[2] = {&g_80,&g_80};
static unsigned char g_124 = 0xC6L;
static unsigned short g_125 = 0xFE02L;
static struct S0 g_129 = {-10L,1UL,0x5F53L,4UL,0x4CL};
static int *g_176 = &g_80;
static unsigned char g_186 = 2UL;
static char g_190 = 0x1CL;
static unsigned char *g_196[9] = {&g_124,&g_124,&g_124,&g_124,&g_124,&g_124,&g_124,&g_124,&g_124};
static unsigned char **g_195[2] = {&g_196[1],&g_196[1]};
static struct S0 g_223[8] = {{0xEAD3L,0xD034B4D2L,65528UL,0x56994F7FL,1UL},{-6L,0x041E959AL,0x0E03L,0UL,0x12L},{0xEAD3L,0xD034B4D2L,65528UL,0x56994F7FL,1UL},{-6L,0x041E959AL,0x0E03L,0UL,0x12L},{0xEAD3L,0xD034B4D2L,65528UL,0x56994F7FL,1UL},{-6L,0x041E959AL,0x0E03L,0UL,0x12L},{0xEAD3L,0xD034B4D2L,65528UL,0x56994F7FL,1UL},{-6L,0x041E959AL,0x0E03L,0UL,0x12L}};
static int **g_268 = &g_176;
static int ***g_267 = &g_268;
static int g_287 = 0xE6909606L;
static int g_289 = 0x22872917L;
static short g_330 = 0x02CFL;
static int *g_378[5][7] = {{&g_80,&g_80,&g_80,&g_80,&g_80,&g_80,&g_80},{&g_80,&g_80,&g_80,&g_80,&g_80,&g_80,&g_80},{&g_80,&g_80,&g_80,&g_80,&g_80,&g_80,&g_80},{&g_80,&g_80,&g_80,&g_80,&g_80,&g_80,&g_80},{&g_80,&g_80,&g_80,&g_80,&g_80,&g_80,&g_80}};
static unsigned *g_451[5] = {&g_129.f3,&g_129.f3,&g_129.f3,&g_129.f3,&g_129.f3};
static unsigned **g_450 = &g_451[1];
static int *g_455[8] = {&g_289,&g_289,&g_289,&g_289,&g_289,&g_289,&g_289,&g_289};
static int **g_454 = &g_455[5];
static int ***g_453[1][9][8] = {{{&g_454,&g_454,&g_454,&g_454,&g_454,&g_454,&g_454,&g_454},{&g_454,&g_454,&g_454,&g_454,&g_454,&g_454,&g_454,&g_454},{&g_454,&g_454,&g_454,&g_454,&g_454,&g_454,&g_454,&g_454},{&g_454,&g_454,&g_454,&g_454,&g_454,&g_454,&g_454,&g_454},{&g_454,&g_454,&g_454,&g_454,&g_454,&g_454,&g_454,&g_454},{&g_454,&g_454,&g_454,&g_454,&g_454,&g_454,&g_454,&g_454},{&g_454,&g_454,&g_454,&g_454,&g_454,&g_454,&g_454,&g_454},{&g_454,&g_454,&g_454,&g_454,&g_454,&g_454,&g_454,&g_454},{&g_454,&g_454,&g_454,&g_454,&g_454,&g_454,&g_454,&g_454}}};
static char g_526 = 0x57L;
static struct S0 g_598[3][4][4] = {{{{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L}},{{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L}},{{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L}},{{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L}}},{{{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L}},{{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L}},{{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L}},{{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L}}},{{{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L}},{{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L}},{{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L}},{{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L},{5L,4UL,65532UL,0x42029724L,0xC7L}}}};
static unsigned short *g_630 = (void*)0;
static unsigned short **g_629 = &g_630;
static unsigned **g_640 = &g_78[7];
static short g_674 = (-1L);
static unsigned g_701 = 7UL;
static short g_714 = (-6L);
static unsigned ***g_725 = &g_640;
static unsigned char **g_729 = &g_196[1];
static struct S0 *g_736 = (void*)0;
static unsigned char *g_773 = &g_129.f4;
static unsigned *g_835 = &g_77;
static short g_869[1][5][6] = {{{0xE491L,0xA6E7L,1L,0x8098L,0x8098L,1L},{0xE491L,0xE491L,0x8098L,0x0E47L,0x1952L,0x0E47L},{0xA6E7L,0xE491L,0xA6E7L,1L,0x8098L,0x8098L},{1L,0xA6E7L,0xA6E7L,1L,0xE491L,0x0E47L},{0x0E47L,1L,0x8098L,1L,0x0E47L,1L}}};
static unsigned g_872 = 0x6EF2C209L;
static struct S0 g_923 = {0xFEF1L,7UL,0xBDB2L,0xB8619F51L,0xD0L};



static char func_1(void);
static short func_8(unsigned p_9, int p_10, short p_11, unsigned char p_12, struct S0 p_13);
static char func_16(unsigned p_17, unsigned short p_18, unsigned p_19, short p_20);
static unsigned func_21(unsigned p_22, int p_23, unsigned p_24);
static unsigned * func_35(unsigned * p_36, unsigned * p_37, int p_38, int p_39);
static unsigned func_40(unsigned char p_41, unsigned * p_42);
static int * func_55(unsigned p_56, unsigned char p_57);
static unsigned func_58(unsigned * p_59, unsigned p_60, int p_61, int * p_62);
static short func_65(struct S0 p_66, unsigned char p_67);
static unsigned char func_69(short p_70, unsigned * p_71, int * p_72, int p_73, int * p_74);
static char func_1(void)
{
    unsigned l_6 = 4294967288UL;
    unsigned l_915[9][5] = {{0xED214C57L,0xAB4BFA79L,0xB65D7B2DL,4294967295UL,0x7F275FB3L},{0x23BA5515L,0x30F41797L,0x30F41797L,0x190A5DBAL,0x98A35129L},{0x7F275FB3L,0x190A5DBAL,0x30F41797L,0xB65D7B2DL,1UL},{0x7F275FB3L,0x30F41797L,0x98A35129L,0x30F41797L,0x7F275FB3L},{0x190A5DBAL,0xED214C57L,0xAB4BFA79L,0xB65D7B2DL,4294967295UL},{0xAB4BFA79L,0xED214C57L,0x190A5DBAL,0x190A5DBAL,0xED214C57L},{0x98A35129L,0x30F41797L,0x7F275FB3L,0xED214C57L,4294967295UL},{0x30F41797L,0x190A5DBAL,0x7F275FB3L,0x23BA5515L,0x7F275FB3L},{4294967295UL,4294967295UL,0x190A5DBAL,0x98A35129L,1UL}};
    unsigned short l_916 = 0UL;
    int l_921 = 1L;
    unsigned l_922 = 7UL;
    unsigned short l_947 = 65535UL;
    int i, j;
    l_947 = ((safe_add_func_uint32_t_u_u((l_6 < (((g_7 == func_8((l_921 = (safe_lshift_func_int8_t_s_u(func_16((((g_7 <= (func_21(l_6, l_6, l_6) , ((safe_sub_func_int8_t_s_s(l_915[7][4], g_598[2][2][3].f4)) >= l_916))) > l_915[7][4]) < 1L), l_915[0][0], l_915[0][4], l_6), l_915[7][4]))), l_922, g_714, l_922, g_923)) == g_7) >= 1UL)), l_915[0][0])) <= l_6);





    ;


    ;
    ;
    for (g_330 = 0; (g_330 <= 1); g_330 += 1)
    {
        int l_948[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
        int i;
        (*g_268) = g_455[(g_330 + 3)];
        (**g_267) = &l_948[1];



    }



    return l_947;
}







static short func_8(unsigned p_9, int p_10, short p_11, unsigned char p_12, struct S0 p_13)
{
    unsigned l_924 = 0xBDC0758AL;
    short *l_931 = (void*)0;
    short *l_932 = &g_598[2][2][3].f0;
    struct S0 l_941 = {1L,4294967295UL,1UL,0x47AA7851L,251UL};
    struct S0 *l_942[1][1];
    int l_943 = 0xA15B05E5L;
    int ****l_944 = &g_267;
    unsigned **l_945[10] = {&g_78[2],&g_78[2],&g_78[2],&g_78[2],&g_78[2],&g_78[2],&g_78[2],&g_78[2],&g_78[2],&g_78[2]};
    int *l_946 = &g_80;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_942[i][j] = &g_923;
    }
    (*l_946) = (l_924 & func_69(p_10, (g_78[2] = &p_9), &l_943, p_12, &l_943));


    (***l_944) = func_35(&p_9, &g_701, p_9, (g_330 < (*l_946)));



    return g_598[2][2][3].f4;


}







static char func_16(unsigned p_17, unsigned short p_18, unsigned p_19, short p_20)
{
    int *l_917 = &g_80;
    struct S0 l_918 = {0xD563L,1UL,2UL,1UL,0UL};
    struct S0 *l_919 = (void*)0;
    struct S0 *l_920 = &g_598[2][2][3];
    (*g_268) = l_917;
    (*l_920) = l_918;
    (*l_920) = (*l_920);
    return (*l_917);
}







static unsigned func_21(unsigned p_22, int p_23, unsigned p_24)
{
    unsigned char l_32 = 0xFAL;
    unsigned *l_33 = &g_34;
    char l_47 = 0xCBL;
    unsigned char l_48 = 0xC9L;
    short *l_49[9][4][2] = {{{(void*)0,&g_50},{(void*)0,&g_50},{(void*)0,&g_50},{&g_50,&g_50}},{{(void*)0,&g_50},{(void*)0,&g_50},{(void*)0,&g_50},{(void*)0,&g_50}},{{&g_50,&g_50},{(void*)0,&g_50},{(void*)0,&g_50},{(void*)0,&g_50}},{{(void*)0,&g_50},{&g_50,&g_50},{(void*)0,&g_50},{(void*)0,&g_50}},{{(void*)0,&g_50},{(void*)0,&g_50},{&g_50,&g_50},{(void*)0,&g_50}},{{(void*)0,&g_50},{(void*)0,(void*)0},{&g_50,&g_50},{&g_50,&g_50}},{{&g_50,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{&g_50,&g_50}},{{&g_50,&g_50},{&g_50,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{&g_50,&g_50},{&g_50,&g_50},{&g_50,(void*)0},{(void*)0,(void*)0}}};
    int l_51[7] = {0x699FF93FL,0x699FF93FL,0xDE905F4DL,0x699FF93FL,0x699FF93FL,0xDE905F4DL,0x699FF93FL};
    unsigned short l_52 = 0xD4C3L;
    struct S0 l_819 = {0xF843L,0x0ADFAE26L,65530UL,0xE9EF012AL,251UL};
    unsigned **l_836[8] = {(void*)0,&g_835,&g_835,(void*)0,&g_835,&g_835,(void*)0,&g_835};
    unsigned short l_837[7][4] = {{0x7645L,0x7645L,65535UL,0x7645L},{0x7645L,0xA65AL,0xA65AL,0x7645L},{0xA65AL,0x7645L,0xA65AL,0xA65AL},{0x7645L,0x7645L,65535UL,0x7645L},{0x7645L,0xA65AL,0xA65AL,0x7645L},{0xA65AL,0x7645L,0xA65AL,0xA65AL},{0x7645L,0x7645L,65535UL,0x7645L}};
    unsigned char l_912 = 0UL;
    int i, j, k;
    if ((safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((*l_33) = (safe_unary_minus_func_int8_t_s(l_32))), ((l_51[3] = (((g_835 = func_35(((p_23 = (((func_40(l_32, ((safe_add_func_int16_t_s_s((l_51[3] = (((safe_sub_func_uint16_t_u_u(l_47, (g_7 >= l_48))) , (void*)0) != (void*)0)), ((l_52 | 0x21F2L) , p_22))) , (void*)0)) , l_819) , p_23) == p_24)) , &g_77), l_33, l_819.f3, l_819.f0)) != &p_24) < p_24)) != l_52))), p_24)), l_837[3][0])))
    {
        return p_23;
    }
    else
    {
        struct S0 *l_848 = &g_598[2][2][3];
        int l_855 = 0xCB14362AL;
        int l_867 = (-3L);
        int l_868[5][6] = {{0x6ED5FFCAL,0x6ED5FFCAL,0xA26BE49BL,0x77843EBAL,0xA26BE49BL,0x6ED5FFCAL},{0xA26BE49BL,0x64409C09L,0x77843EBAL,0x77843EBAL,0x64409C09L,0xA26BE49BL},{0x6ED5FFCAL,0xA26BE49BL,0x77843EBAL,0xA26BE49BL,0x6ED5FFCAL,0x6ED5FFCAL},{(-10L),0xA26BE49BL,0xA26BE49BL,(-10L),0x64409C09L,0xA26BE49BL},{0xA26BE49BL,0x77843EBAL,0xA26BE49BL,0x6ED5FFCAL,0x6ED5FFCAL,0xA26BE49BL}};
        int l_870 = 1L;
        char l_871 = 0xCCL;
        unsigned short *l_895 = &g_125;
        int i, j;
        for (p_23 = 9; (p_23 > 28); p_23 = safe_add_func_int8_t_s_s(p_23, 4))
        {
            short l_840 = 6L;
            int l_847 = 7L;
            unsigned *l_856 = &g_77;
            unsigned ***l_888[5][6][5] = {{{&g_450,&g_450,(void*)0,(void*)0,&g_450},{&g_450,(void*)0,&g_450,&g_450,&g_450},{&g_450,&g_450,&g_450,&g_450,&g_450},{&g_450,&g_450,&g_450,&g_450,&g_450},{&g_450,&g_450,&g_450,&g_450,&g_450},{&g_450,&g_450,(void*)0,&g_450,&g_450}},{{&g_450,(void*)0,&g_450,&g_450,&g_450},{&g_450,(void*)0,&g_450,&g_450,&g_450},{&g_450,&g_450,&g_450,&g_450,&g_450},{(void*)0,&g_450,&g_450,&g_450,&g_450},{&g_450,&g_450,&g_450,&g_450,&g_450},{(void*)0,&g_450,&g_450,&g_450,&g_450}},{{&g_450,&g_450,(void*)0,&g_450,&g_450},{&g_450,&g_450,(void*)0,&g_450,(void*)0},{(void*)0,(void*)0,&g_450,&g_450,&g_450},{(void*)0,&g_450,&g_450,&g_450,&g_450},{&g_450,&g_450,&g_450,&g_450,(void*)0},{&g_450,&g_450,(void*)0,(void*)0,&g_450}},{{&g_450,&g_450,&g_450,&g_450,(void*)0},{&g_450,&g_450,&g_450,&g_450,&g_450},{&g_450,&g_450,&g_450,&g_450,&g_450},{&g_450,(void*)0,&g_450,&g_450,&g_450},{(void*)0,&g_450,(void*)0,&g_450,(void*)0},{(void*)0,(void*)0,&g_450,&g_450,(void*)0}},{{&g_450,&g_450,&g_450,&g_450,&g_450},{&g_450,&g_450,&g_450,&g_450,&g_450},{&g_450,(void*)0,&g_450,&g_450,&g_450},{&g_450,&g_450,&g_450,(void*)0,(void*)0},{&g_450,&g_450,&g_450,&g_450,&g_450},{(void*)0,&g_450,&g_450,&g_450,&g_450}}};
            struct S0 l_907 = {0x4634L,0x7E2D6241L,7UL,4294967295UL,0UL};
            int i, j, k;
            if ((l_51[3] = (p_24 | l_840)))
            {
                for (g_129.f1 = 0; (g_129.f1 >= 26); ++g_129.f1)
                {
                    unsigned char ***l_846 = &g_195[0];
                    for (l_819.f1 = (-22); (l_819.f1 < 48); ++l_819.f1)
                    {
                        struct S0 **l_845 = &g_736;
                        (*l_845) = (void*)0;

                        ;
                        l_847 = ((void*)0 == l_846);
                        return p_24;



                    }
                    return p_24;



                }
                return p_23;



            }
            else
            {
                struct S0 **l_849 = &l_848;
                (*l_849) = l_848;
            }
            if (p_24)
            {
                unsigned *l_854[7];
                int l_879 = 0x63308B15L;
                struct S0 *l_886[5][1][8] = {{{&g_223[5],&g_223[5],(void*)0,(void*)0,(void*)0,&g_223[5],&g_223[5],(void*)0}},{{&g_129,(void*)0,(void*)0,&g_129,(void*)0,&g_129,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_129,(void*)0,&g_129,(void*)0,(void*)0,&g_129,(void*)0,&g_129}},{{&g_223[5],(void*)0,&g_129,&g_223[5],(void*)0,(void*)0,&g_223[5],&g_129}}};
                struct S0 **l_887 = &g_736;
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_854[i] = &g_129.f1;
                if (((((l_51[5] = (safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(g_186, l_51[3])), l_840))) >= p_23) , p_22) <= 1UL))
                {
                    int l_881 = (-3L);
                    (*g_268) = &l_870;
                    if (g_872)
                    {
                        if (p_24)
                            break;
                        (*g_268) = &l_870;
                    }
                    else
                    {
                        short l_880[5] = {2L,2L,2L,2L,2L};
                        struct S0 l_882 = {0L,4294967295UL,0x94D8L,9UL,0x5BL};
                        int *l_883 = &l_868[4][3];
                        int i;
                        if (p_24)
                            break;
                        (*g_268) = &l_855;
                        (*l_883) = (safe_lshift_func_uint16_t_u_s((l_840 && (p_24 , (((safe_add_func_int16_t_s_s((g_129.f0 = (((((~((-5L) > (+(p_23 & (safe_div_func_int16_t_s_s(l_879, (-2L))))))) || l_840) , ((l_881 = l_880[0]) , (l_882 , 6UL))) ^ 6UL) > 0xDC4FL)), 0xB1E3L)) , p_22) ^ 0xB577EFF9L))), 15));
                    }
                }
                else
                {
                    for (l_32 = 0; (l_32 >= 29); l_32++)
                    {
                        return p_22;



                    }
                }
                (*l_887) = l_886[0][0][6];

                ;
            }
            else
            {
                int ***l_906 = (void*)0;
                int *l_908 = &l_870;
                if (((void*)0 != l_888[3][0][2]))
                {
                    unsigned short l_889 = 0xC80EL;
                    int *l_905 = &l_847;
                    l_889 = 0xFB5C8B9BL;
                    for (g_289 = 0; (g_289 == 23); g_289 = safe_add_func_uint16_t_u_u(g_289, 3))
                    {
                        unsigned *l_892 = (void*)0;
                        int l_902 = 6L;
                        int l_903[4] = {(-10L),(-10L),(-10L),(-10L)};
                        int *l_904 = &l_903[1];
                        int i;
                        (*l_904) = p_24;
                        (*g_268) = l_905;
                        (*l_904) = (((void*)0 != l_906) , (+(0xBFL & 0x63L)));
                        if (p_23)
                            break;
                    }



                    l_907 = ((*l_848) = l_819);
                    (*g_268) = l_908;
                }
                else
                {
                    int *l_909 = &l_51[3];
                    (*g_268) = l_909;
                }



                if (l_47)
                    continue;


                return p_22;



            }

            ;
        }



        ;
    }




    ;


    ;
    ;
    for (g_80 = 0; (g_80 <= (-15)); g_80 = safe_sub_func_uint16_t_u_u(g_80, 1))
    {
        (**g_267) = func_35(&g_872, &p_24, l_47, p_23);
        (**g_267) = &g_80;
    }



    return p_23;



}







static unsigned * func_35(unsigned * p_36, unsigned * p_37, int p_38, int p_39)
{
    char l_820 = (-1L);
    int l_821 = 7L;
    int ****l_822 = (void*)0;
    int ***l_823[5];
    int ****l_824 = &g_267;
    unsigned char l_827 = 246UL;
    int l_828 = 0xA218F248L;
    unsigned l_829 = 0x6E67C978L;
    int i;
    for (i = 0; i < 5; i++)
        l_823[i] = &g_268;
    (**g_267) = ((l_821 = l_820) , &g_80);
    for (g_129.f3 = 0; (g_129.f3 != 27); ++g_129.f3)
    {
        struct S0 l_832 = {0xFD68L,0x541AEA78L,0x8455L,0xD33D2075L,0xC0L};
        struct S0 *l_833 = (void*)0;
        struct S0 *l_834 = &g_223[6];
        (*g_268) = p_37;
        (*l_834) = l_832;
    }



    return g_835;


}







static unsigned func_40(unsigned char p_41, unsigned * p_42)
{
    int l_83 = 0xEC8E4446L;
    int *l_84 = &g_80;
    struct S0 l_408 = {-1L,0x216D8CAAL,1UL,1UL,0xF0L};
    char l_416 = 0x92L;
    unsigned *l_417 = (void*)0;
    unsigned *l_418 = &g_77;
    unsigned short *l_419 = &l_408.f2;
    unsigned *l_424 = &l_408.f3;
    short *l_425 = &g_223[5].f0;
    char *l_426 = &g_190;
    int l_427 = (-8L);
    unsigned *l_428 = &g_129.f1;
    char l_429[8] = {0x4CL,0L,0x4CL,0L,0x4CL,0L,0x4CL,0L};
    unsigned **l_481 = &l_418;
    unsigned ***l_480 = &l_481;
    struct S0 l_560[6][8][5] = {{{{0x4D47L,0xF3FABB4CL,0x98A9L,4294967291UL,0UL},{-1L,0xD3E25E15L,0UL,0xE0D470B3L,0x5BL},{0x7C68L,1UL,0x08A3L,0x368A586DL,0x91L},{0xFF5FL,0x4A0A2328L,0x64A8L,1UL,1UL},{0xFE26L,1UL,7UL,0xFF523533L,0xB9L}},{{-1L,6UL,65527UL,0xC7686749L,0x67L},{-1L,0xCD6EBC74L,1UL,4294967295UL,0x89L},{0xC685L,0UL,0x74A1L,0x256D455FL,0x4FL},{0xFF5FL,0x4A0A2328L,0x64A8L,1UL,1UL},{0x4D47L,0xF3FABB4CL,0x98A9L,4294967291UL,0UL}},{{0xFE26L,1UL,7UL,0xFF523533L,0xB9L},{5L,0x62F2942DL,0xEF3CL,0xF3ACA325L,0UL},{0x5BD8L,4294967295UL,65529UL,0x7CA1713CL,0UL},{-1L,0xCD6EBC74L,1UL,4294967295UL,0x89L},{-6L,0xAD0B91B8L,0x0D48L,0UL,0xCCL}},{{-6L,0xAD0B91B8L,0x0D48L,0UL,0xCCL},{1L,4294967295UL,0xECCEL,1UL,1UL},{0xC685L,0UL,0x74A1L,0x256D455FL,0x4FL},{-3L,0xDD9E407CL,5UL,1UL,0xBFL},{0xD19DL,4294967295UL,0xF760L,0xD01DCAB1L,0UL}},{{0xBE8EL,0xBD60AD73L,8UL,4294967291UL,0xB2L},{1L,4294967295UL,0xECCEL,1UL,1UL},{0x7C68L,1UL,0x08A3L,0x368A586DL,0x91L},{0L,1UL,0x54F0L,0x9D106A38L,1UL},{0x936FL,1UL,0x88EDL,0xDC7C33E5L,5UL}},{{0x8E1DL,0UL,0UL,4294967290UL,0x80L},{5L,0x62F2942DL,0xEF3CL,0xF3ACA325L,0UL},{0x3AF2L,4294967286UL,0xBFB2L,0x94C3E1F6L,0UL},{-5L,4294967286UL,1UL,0xBDD607CBL,0UL},{1L,0x8C86DA9EL,1UL,1UL,2UL}},{{0xBE8EL,0xBD60AD73L,8UL,4294967291UL,0xB2L},{-1L,0xCD6EBC74L,1UL,4294967295UL,0x89L},{-1L,0UL,0UL,0x69B5EE45L,0x57L},{0xF50EL,4294967293UL,0UL,4294967292UL,0x4EL},{1L,0x8C86DA9EL,1UL,1UL,2UL}},{{-6L,0xAD0B91B8L,0x0D48L,0UL,0xCCL},{-1L,0xD3E25E15L,0UL,0xE0D470B3L,0x5BL},{1L,4294967295UL,0x632FL,0xAA1111C2L,254UL},{0L,0xC2D84C48L,0xE23CL,9UL,255UL},{0x936FL,1UL,0x88EDL,0xDC7C33E5L,5UL}}},{{{0xFE26L,1UL,7UL,0xFF523533L,0xB9L},{0L,0xC2D84C48L,0xE23CL,9UL,255UL},{0L,4294967295UL,0xCF82L,4294967295UL,1UL},{0xF50EL,4294967293UL,0UL,4294967292UL,0x4EL},{0xD19DL,4294967295UL,0xF760L,0xD01DCAB1L,0UL}},{{-1L,6UL,65527UL,0xC7686749L,0x67L},{0xFF5FL,0x4A0A2328L,0x64A8L,1UL,1UL},{0L,4294967295UL,0xCF82L,4294967295UL,1UL},{-5L,4294967286UL,1UL,0xBDD607CBL,0UL},{-6L,0xAD0B91B8L,0x0D48L,0UL,0xCCL}},{{0x4D47L,0xF3FABB4CL,0x98A9L,4294967291UL,0UL},{0L,1UL,0x54F0L,0x9D106A38L,1UL},{1L,4294967295UL,0x632FL,0xAA1111C2L,254UL},{0L,1UL,0x54F0L,0x9D106A38L,1UL},{0x4D47L,0xF3FABB4CL,0x98A9L,4294967291UL,0UL}},{{-4L,0xD1DAF316L,0xF2FEL,0x0F53E7AAL,254UL},{0xFF5FL,0x4A0A2328L,0x64A8L,1UL,1UL},{-1L,0UL,0UL,0x69B5EE45L,0x57L},{-3L,0xDD9E407CL,5UL,1UL,0xBFL},{0xFE26L,1UL,7UL,0xFF523533L,0xB9L}},{{-4L,0xD1DAF316L,0xF2FEL,0x0F53E7AAL,254UL},{0L,0xC2D84C48L,0xE23CL,9UL,255UL},{0x3AF2L,4294967286UL,0xBFB2L,0x94C3E1F6L,0UL},{-1L,0xCD6EBC74L,1UL,4294967295UL,0x89L},{0x32A3L,0xD229907CL,0x3491L,0x09476E90L,9UL}},{{0x4D47L,0xF3FABB4CL,0x98A9L,4294967291UL,0UL},{-1L,0xD3E25E15L,0UL,0xE0D470B3L,0x5BL},{0x7C68L,1UL,0x08A3L,0x368A586DL,0x91L},{0xFF5FL,0x4A0A2328L,0x64A8L,1UL,1UL},{0xFE26L,1UL,7UL,0xFF523533L,0xB9L}},{{-1L,6UL,65527UL,0xC7686749L,0x67L},{-1L,0xCD6EBC74L,1UL,4294967295UL,0x89L},{0xC685L,0UL,0x74A1L,0x256D455FL,0x4FL},{0x3AF2L,4294967286UL,0xBFB2L,0x94C3E1F6L,0UL},{0xA888L,0xDC37A554L,65535UL,4294967295UL,1UL}},{{0L,9UL,0x007CL,0UL,249UL},{1L,1UL,0x097CL,0x9C2AF867L,252UL},{0x2DE3L,0xA68891D9L,65528UL,0x36A3E8B5L,255UL},{0xD6BAL,4294967286UL,0UL,0xD2882CCDL,0xEAL},{-6L,0xAE5E33FEL,1UL,0xCECCD96AL,0xA2L}}},{{{-6L,0xAE5E33FEL,1UL,0xCECCD96AL,0xA2L},{0L,0x038F67D7L,0x52D2L,0xA4169E30L,0xACL},{0x936FL,1UL,0x88EDL,0xDC7C33E5L,5UL},{1L,0x67883879L,0x0458L,0x6C72A137L,0x1DL},{0x6294L,0xB098D437L,65527UL,4294967294UL,0x38L}},{{0xF4C5L,0x29EC5695L,0UL,0x0D5DF9C8L,0xE5L},{0L,0x038F67D7L,0x52D2L,0xA4169E30L,0xACL},{-4L,0xD1DAF316L,0xF2FEL,0x0F53E7AAL,254UL},{0xFC80L,1UL,1UL,0x7B95AE8BL,0x1FL},{0x4FEFL,0x9A643DCFL,4UL,0x088D5B3AL,255UL}},{{7L,0x25EC14DCL,0xC147L,7UL,0x31L},{1L,1UL,0x097CL,0x9C2AF867L,252UL},{-9L,0xACD502BFL,1UL,0x81D00961L,0x85L},{-1L,0UL,0UL,0x69B5EE45L,0x57L},{0L,0x1F7A13F4L,0xD85EL,0x835393A4L,247UL}},{{0xF4C5L,0x29EC5695L,0UL,0x0D5DF9C8L,0xE5L},{0xD6BAL,4294967286UL,0UL,0xD2882CCDL,0xEAL},{0xFE26L,1UL,7UL,0xFF523533L,0xB9L},{0x5BD8L,4294967295UL,65529UL,0x7CA1713CL,0UL},{0L,0x1F7A13F4L,0xD85EL,0x835393A4L,247UL}},{{-6L,0xAE5E33FEL,1UL,0xCECCD96AL,0xA2L},{0x7C68L,1UL,0x08A3L,0x368A586DL,0x91L},{1L,0x8C86DA9EL,1UL,1UL,2UL},{1L,4294967295UL,0x632FL,0xAA1111C2L,254UL},{0x4FEFL,0x9A643DCFL,4UL,0x088D5B3AL,255UL}},{{0L,9UL,0x007CL,0UL,249UL},{1L,4294967295UL,0x632FL,0xAA1111C2L,254UL},{-1L,6UL,65527UL,0xC7686749L,0x67L},{0x5BD8L,4294967295UL,65529UL,0x7CA1713CL,0UL},{0x6294L,0xB098D437L,65527UL,4294967294UL,0x38L}},{{-1L,0xE90495E1L,0x39ADL,0x8DBAA022L,248UL},{0x3AF2L,4294967286UL,0xBFB2L,0x94C3E1F6L,0UL},{-1L,6UL,65527UL,0xC7686749L,0x67L},{-1L,0UL,0UL,0x69B5EE45L,0x57L},{-6L,0xAE5E33FEL,1UL,0xCECCD96AL,0xA2L}},{{0xA888L,0xDC37A554L,65535UL,4294967295UL,1UL},{0xFC80L,1UL,1UL,0x7B95AE8BL,0x1FL},{1L,0x8C86DA9EL,1UL,1UL,2UL},{0xFC80L,1UL,1UL,0x7B95AE8BL,0x1FL},{0xA888L,0xDC37A554L,65535UL,4294967295UL,1UL}}},{{{1L,8UL,65535UL,0xD52E36B8L,0x4DL},{0x3AF2L,4294967286UL,0xBFB2L,0x94C3E1F6L,0UL},{0xFE26L,1UL,7UL,0xFF523533L,0xB9L},{1L,0x67883879L,0x0458L,0x6C72A137L,0x1DL},{0L,9UL,0x007CL,0UL,249UL}},{{1L,8UL,65535UL,0xD52E36B8L,0x4DL},{1L,4294967295UL,0x632FL,0xAA1111C2L,254UL},{-9L,0xACD502BFL,1UL,0x81D00961L,0x85L},{0xD6BAL,4294967286UL,0UL,0xD2882CCDL,0xEAL},{0x87D7L,4294967295UL,0x5199L,0xC028FA47L,0UL}},{{0xA888L,0xDC37A554L,65535UL,4294967295UL,1UL},{0x7C68L,1UL,0x08A3L,0x368A586DL,0x91L},{-4L,0xD1DAF316L,0xF2FEL,0x0F53E7AAL,254UL},{0x3AF2L,4294967286UL,0xBFB2L,0x94C3E1F6L,0UL},{0L,9UL,0x007CL,0UL,249UL}},{{-1L,0xE90495E1L,0x39ADL,0x8DBAA022L,248UL},{0xD6BAL,4294967286UL,0UL,0xD2882CCDL,0xEAL},{0x936FL,1UL,0x88EDL,0xDC7C33E5L,5UL},{0x3AF2L,4294967286UL,0xBFB2L,0x94C3E1F6L,0UL},{0xA888L,0xDC37A554L,65535UL,4294967295UL,1UL}},{{0L,9UL,0x007CL,0UL,249UL},{1L,1UL,0x097CL,0x9C2AF867L,252UL},{0x2DE3L,0xA68891D9L,65528UL,0x36A3E8B5L,255UL},{0xD6BAL,4294967286UL,0UL,0xD2882CCDL,0xEAL},{-6L,0xAE5E33FEL,1UL,0xCECCD96AL,0xA2L}},{{-6L,0xAE5E33FEL,1UL,0xCECCD96AL,0xA2L},{0L,0x038F67D7L,0x52D2L,0xA4169E30L,0xACL},{0x936FL,1UL,0x88EDL,0xDC7C33E5L,5UL},{1L,0x67883879L,0x0458L,0x6C72A137L,0x1DL},{0x6294L,0xB098D437L,65527UL,4294967294UL,0x38L}},{{0xF4C5L,0x29EC5695L,0UL,0x0D5DF9C8L,0xE5L},{0L,0x038F67D7L,0x52D2L,0xA4169E30L,0xACL},{-4L,0xD1DAF316L,0xF2FEL,0x0F53E7AAL,254UL},{0xFC80L,1UL,1UL,0x7B95AE8BL,0x1FL},{0x4FEFL,0x9A643DCFL,4UL,0x088D5B3AL,255UL}},{{7L,0x25EC14DCL,0xC147L,7UL,0x31L},{1L,1UL,0x097CL,0x9C2AF867L,252UL},{-9L,0xACD502BFL,1UL,0x81D00961L,0x85L},{-1L,0UL,0UL,0x69B5EE45L,0x57L},{0L,0x1F7A13F4L,0xD85EL,0x835393A4L,247UL}}},{{{0xF4C5L,0x29EC5695L,0UL,0x0D5DF9C8L,0xE5L},{0xD6BAL,4294967286UL,0UL,0xD2882CCDL,0xEAL},{0xFE26L,1UL,7UL,0xFF523533L,0xB9L},{0x5BD8L,4294967295UL,65529UL,0x7CA1713CL,0UL},{0L,0x1F7A13F4L,0xD85EL,0x835393A4L,247UL}},{{-6L,0xAE5E33FEL,1UL,0xCECCD96AL,0xA2L},{0x7C68L,1UL,0x08A3L,0x368A586DL,0x91L},{1L,0x8C86DA9EL,1UL,1UL,2UL},{0x4FEFL,0x9A643DCFL,4UL,0x088D5B3AL,255UL},{0x748EL,4294967295UL,0x0D07L,2UL,248UL}},{{0L,1UL,0x54F0L,0x9D106A38L,1UL},{0x4FEFL,0x9A643DCFL,4UL,0x088D5B3AL,255UL},{0x4D13L,0x804A82FBL,0x978FL,0x63D3A7DFL,0x22L},{0x87D7L,4294967295UL,0x5199L,0xC028FA47L,0UL},{9L,0x3AD8E361L,65527UL,2UL,249UL}},{{-3L,0xDD9E407CL,5UL,1UL,0xBFL},{-6L,0xAE5E33FEL,1UL,0xCECCD96AL,0xA2L},{0x4D13L,0x804A82FBL,0x978FL,0x63D3A7DFL,0x22L},{0x6294L,0xB098D437L,65527UL,4294967294UL,0x38L},{-5L,4294967286UL,1UL,0xBDD607CBL,0UL}},{{-1L,0xCD6EBC74L,1UL,4294967295UL,0x89L},{-1L,0xE90495E1L,0x39ADL,0x8DBAA022L,248UL},{-6L,0x05971BF2L,2UL,0UL,0UL},{-1L,0xE90495E1L,0x39ADL,0x8DBAA022L,248UL},{-1L,0xCD6EBC74L,1UL,4294967295UL,0x89L}},{{0xFF5FL,0x4A0A2328L,0x64A8L,1UL,1UL},{-6L,0xAE5E33FEL,1UL,0xCECCD96AL,0xA2L},{0xC8EFL,0x2696175EL,0xF6B0L,0x7D644719L,0UL},{1L,8UL,65535UL,0xD52E36B8L,0x4DL},{0L,1UL,0x54F0L,0x9D106A38L,1UL}},{{0xFF5FL,0x4A0A2328L,0x64A8L,1UL,1UL},{0x4FEFL,0x9A643DCFL,4UL,0x088D5B3AL,255UL},{-1L,0UL,1UL,0x1065C35FL,0x39L},{0L,1UL,65535UL,4294967295UL,0xBCL},{5L,0x62F2942DL,0xEF3CL,0xF3ACA325L,0UL}},{{-1L,0xCD6EBC74L,1UL,4294967295UL,0x89L},{0xA888L,0xDC37A554L,65535UL,4294967295UL,1UL},{0x537AL,0xF50A8034L,0xD07BL,0UL,0xAAL},{-6L,0xAE5E33FEL,1UL,0xCECCD96AL,0xA2L},{0L,1UL,0x54F0L,0x9D106A38L,1UL}}},{{{-3L,0xDD9E407CL,5UL,1UL,0xBFL},{0L,1UL,65535UL,4294967295UL,0xBCL},{0x1B63L,4294967287UL,65526UL,0x2EE4069DL,247UL},{-6L,0xAE5E33FEL,1UL,0xCECCD96AL,0xA2L},{-1L,0xCD6EBC74L,1UL,4294967295UL,0x89L}},{{0L,1UL,0x54F0L,0x9D106A38L,1UL},{2L,4294967295UL,65535UL,0x17B11351L,255UL},{-7L,1UL,1UL,0xAA9C2377L,0UL},{0L,1UL,65535UL,4294967295UL,0xBCL},{-5L,4294967286UL,1UL,0xBDD607CBL,0UL}},{{-5L,4294967286UL,1UL,0xBDD607CBL,0UL},{7L,0x25EC14DCL,0xC147L,7UL,0x31L},{0x1B63L,4294967287UL,65526UL,0x2EE4069DL,247UL},{1L,8UL,65535UL,0xD52E36B8L,0x4DL},{9L,0x3AD8E361L,65527UL,2UL,249UL}},{{0xF50EL,4294967293UL,0UL,4294967292UL,0x4EL},{7L,0x25EC14DCL,0xC147L,7UL,0x31L},{0x537AL,0xF50A8034L,0xD07BL,0UL,0xAAL},{-1L,0xE90495E1L,0x39ADL,0x8DBAA022L,248UL},{0x748EL,4294967295UL,0x0D07L,2UL,248UL}},{{0L,0xC2D84C48L,0xE23CL,9UL,255UL},{2L,4294967295UL,65535UL,0x17B11351L,255UL},{-1L,0UL,1UL,0x1065C35FL,0x39L},{0x6294L,0xB098D437L,65527UL,4294967294UL,0x38L},{-1L,0xD3E25E15L,0UL,0xE0D470B3L,0x5BL}},{{0xF50EL,4294967293UL,0UL,4294967292UL,0x4EL},{0L,1UL,65535UL,4294967295UL,0xBCL},{0xC8EFL,0x2696175EL,0xF6B0L,0x7D644719L,0UL},{0x87D7L,4294967295UL,0x5199L,0xC028FA47L,0UL},{-1L,0xD3E25E15L,0UL,0xE0D470B3L,0x5BL}},{{-5L,4294967286UL,1UL,0xBDD607CBL,0UL},{0xA888L,0xDC37A554L,65535UL,4294967295UL,1UL},{-6L,0x05971BF2L,2UL,0UL,0UL},{0x4FEFL,0x9A643DCFL,4UL,0x088D5B3AL,255UL},{0x748EL,4294967295UL,0x0D07L,2UL,248UL}},{{0L,1UL,0x54F0L,0x9D106A38L,1UL},{0x4FEFL,0x9A643DCFL,4UL,0x088D5B3AL,255UL},{0x4D13L,0x804A82FBL,0x978FL,0x63D3A7DFL,0x22L},{0x87D7L,4294967295UL,0x5199L,0xC028FA47L,0UL},{9L,0x3AD8E361L,65527UL,2UL,249UL}}}};
    int **l_583 = &l_84;
    char *l_587 = (void*)0;
    unsigned short l_594 = 0x134BL;
    int *l_613 = (void*)0;
    int l_681 = 0L;
    short l_684 = 0L;
    int l_705 = 0x516609CBL;
    int *l_717 = &g_80;
    int ****l_816 = &g_267;
    int i, j, k;
    for (p_41 = 0; (p_41 < 21); p_41 = safe_add_func_int16_t_s_s(p_41, 4))
    {
        struct S0 l_68 = {0xFAFEL,4294967289UL,1UL,0x11589A45L,0x23L};
        unsigned *l_76 = &g_77;
        unsigned **l_75[9][6][3] = {{{&l_76,&l_76,&l_76},{(void*)0,&l_76,&l_76},{(void*)0,&l_76,&l_76},{(void*)0,&l_76,&l_76},{&l_76,&l_76,(void*)0},{&l_76,&l_76,&l_76}},{{(void*)0,&l_76,&l_76},{&l_76,(void*)0,&l_76},{&l_76,&l_76,&l_76},{&l_76,&l_76,(void*)0},{&l_76,&l_76,(void*)0},{&l_76,&l_76,&l_76}},{{(void*)0,&l_76,&l_76},{&l_76,&l_76,(void*)0},{&l_76,(void*)0,&l_76},{&l_76,&l_76,&l_76},{&l_76,&l_76,&l_76},{(void*)0,&l_76,&l_76}},{{&l_76,&l_76,&l_76},{&l_76,&l_76,&l_76},{&l_76,&l_76,&l_76},{&l_76,&l_76,&l_76},{(void*)0,&l_76,&l_76},{&l_76,&l_76,(void*)0}},{{&l_76,&l_76,&l_76},{(void*)0,&l_76,&l_76},{&l_76,&l_76,&l_76},{(void*)0,&l_76,(void*)0},{&l_76,&l_76,&l_76},{&l_76,&l_76,&l_76}},{{&l_76,(void*)0,(void*)0},{&l_76,&l_76,&l_76},{&l_76,&l_76,(void*)0},{&l_76,&l_76,&l_76},{&l_76,&l_76,&l_76},{&l_76,&l_76,&l_76}},{{&l_76,&l_76,&l_76},{&l_76,&l_76,&l_76},{&l_76,&l_76,&l_76},{&l_76,&l_76,&l_76},{&l_76,&l_76,&l_76},{&l_76,&l_76,&l_76}},{{&l_76,&l_76,&l_76},{(void*)0,(void*)0,&l_76},{&l_76,&l_76,&l_76},{&l_76,(void*)0,&l_76},{&l_76,&l_76,&l_76},{&l_76,&l_76,&l_76}},{{&l_76,&l_76,&l_76},{&l_76,&l_76,&l_76},{&l_76,(void*)0,&l_76},{&l_76,&l_76,&l_76},{(void*)0,&l_76,&l_76},{(void*)0,&l_76,&l_76}}};
        int **l_85 = &l_84;
        struct S0 *l_409 = &g_129;
        int i, j, k;
    }
    (*l_84) = (*l_84);
    if (((((((*l_428) = ((safe_lshift_func_int16_t_s_u(g_129.f2, (((*l_84) > g_223[5].f1) >= (((*l_419) = (safe_add_func_int32_t_s_s(l_416, ((*l_418) = p_41)))) < (p_41 || (safe_mod_func_int8_t_s_s(((*l_426) = (safe_rshift_func_uint16_t_u_s(((*l_84) && (*l_84)), ((*l_425) = (((*l_424) = ((&g_78[8] != &g_78[8]) , 4294967295UL)) , 0L))))), l_427))))))) == p_41)) , g_129.f1) ^ g_129.f2) >= l_429[1]) , p_41))
    {
        for (g_77 = (-29); (g_77 > 45); g_77 = safe_add_func_int16_t_s_s(g_77, 1))
        {
            int l_434 = 0x7D53E825L;
            (*g_268) = (*g_268);
            for (l_408.f3 = 0; (l_408.f3 < 5); l_408.f3++)
            {
                (**g_267) = p_42;

                ;
            }
            l_434 = p_41;
        }

        ;
    }
    else
    {
        unsigned l_446 = 0xB372F9E3L;
        int l_464 = 0xFF039BE7L;
        for (l_83 = (-1); (l_83 <= (-16)); l_83--)
        {
            unsigned short l_441 = 0x5E02L;
            struct S0 l_447[1] = {{-1L,0UL,0UL,0x20E0C538L,1UL}};
            int i;
        }
    }

    ;
    if (((((p_41 < (p_42 == l_418)) && (safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((+(*l_84)), ((*l_84) != (safe_div_func_uint16_t_u_u(g_125, (~(((*l_480) = &p_42) != &p_42))))))), (((**g_450) , (-8L)) ^ (*l_84))))) || 0x8B91L) , p_41))
    {
        int *l_482 = &g_80;
        int l_500 = 0x56037582L;
        int l_511 = 0xA8CEA9DDL;
        int l_555 = 1L;
        struct S0 l_558 = {1L,1UL,1UL,0UL,0x07L};
        unsigned char l_572 = 255UL;
        unsigned short l_624 = 65535UL;
        int ***l_625 = &g_268;
        int *l_628[4];
        struct S0 l_635 = {0x2F71L,8UL,0UL,0xFDC03B2EL,0x1AL};
        int **l_667 = (void*)0;
        unsigned l_685[9] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
        int i;
        for (i = 0; i < 4; i++)
            l_628[i] = (void*)0;
        (*g_268) = l_482;

        ;
        if (p_41)
        {
            struct S0 *l_483 = &g_129;
            struct S0 *l_484 = &g_223[5];
            (*l_84) = (*l_84);
            (*l_484) = ((*l_483) = (p_41 , g_223[5]));
        }
        else
        {
            int *l_493 = &g_80;
            unsigned short l_501 = 0x65FFL;
            unsigned l_545 = 0x9C57D891L;
            int ***l_576[8] = {(void*)0,&g_268,(void*)0,&g_268,(void*)0,&g_268,(void*)0,&g_268};
            char *l_592 = &l_429[1];
            short l_603 = 0x4885L;
            unsigned char l_611 = 0x0AL;
            int l_614 = (-1L);
            unsigned short **l_646 = &g_630;
            unsigned l_686 = 4294967292UL;
            struct S0 *l_687 = &l_558;
            char l_695 = 1L;
            short l_696[3];
            int *l_698[7];
            int l_712[7];
            unsigned ***l_727 = (void*)0;
            int i;
            for (i = 0; i < 3; i++)
                l_696[i] = 6L;
            for (i = 0; i < 7; i++)
                l_698[i] = (void*)0;
            for (i = 0; i < 7; i++)
                l_712[i] = 0xB9066BF2L;
            if (((safe_add_func_uint32_t_u_u((0x7FL != (safe_sub_func_int16_t_s_s((*l_482), (*l_84)))), (**g_268))) >= ((*l_419) = (((*l_426) = g_80) != (safe_sub_func_uint8_t_u_u(((((safe_rshift_func_int8_t_s_s(((*g_268) != (l_493 = l_493)), 2)) == (p_41 != (*l_84))) , p_41) == (*l_84)), p_41))))))
            {
                unsigned short l_510 = 1UL;
                int *l_527 = &g_80;
                int ***l_556[8] = {&g_454,&g_454,&g_454,&g_454,&g_454,&g_454,&g_454,&g_454};
                unsigned char *l_557 = &g_124;
                struct S0 l_561 = {5L,4294967295UL,0xBDC2L,1UL,0xA8L};
                unsigned l_627 = 0x598130A9L;
                struct S0 *l_633 = &l_561;
                int i;
                if ((((safe_div_func_int16_t_s_s((safe_add_func_int8_t_s_s(((***g_267) > (((l_501 = (safe_div_func_int16_t_s_s(l_500, 0x8EBAL))) , p_42) != (void*)0)), ((safe_lshift_func_uint16_t_u_u((((l_408 , (safe_div_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((*l_418) = l_510), (((*l_84) ^ g_129.f3) | p_41))), 0x47L)), g_129.f1))) , (**g_268)) && l_511), 14)) && g_80))), p_41)) <= 0x80L) < 1UL))
                {
                    struct S0 *l_513 = &g_223[5];
                    struct S0 **l_512 = &l_513;
                    int l_524 = 0x853ECB5DL;
                    (*g_268) = p_42;

                    ;
                    l_512 = l_512;
                    for (l_408.f4 = 0; (l_408.f4 <= 55); l_408.f4++)
                    {
                        unsigned char *l_525[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_525[i] = &g_124;
                        (*l_84) = (safe_div_func_int32_t_s_s((g_77 || p_41), p_41));
                        l_482 = (l_527 = l_493);
                    }
                    for (g_129.f2 = (-11); (g_129.f2 > 59); g_129.f2 = safe_add_func_int16_t_s_s(g_129.f2, 6))
                    {
                        unsigned char *l_536[4];
                        int l_537 = (-9L);
                        int i;
                        for (i = 0; i < 4; i++)
                            l_536[i] = (void*)0;
                        (*l_84) = (safe_sub_func_uint32_t_u_u(((safe_div_func_int16_t_s_s(7L, (+(p_41 || (*l_493))))) & l_537), 1L));
                        return p_41;
                    }
                }
                else
                {
                    struct S0 *l_540[3][2];
                    int l_552 = 0x21464A10L;
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_540[i][j] = &l_408;
                    }
                    g_223[5] = l_408;
                    (**g_267) = ((((*l_493) = ((*l_426) = ((safe_rshift_func_int16_t_s_s(((*l_425) = (safe_add_func_int16_t_s_s(((g_129.f4 || g_223[5].f4) != ((((*l_493) | (safe_add_func_uint32_t_u_u(((((safe_div_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((*l_84) >= p_41), (*l_493))), (*l_527))) && p_41) , 0x32L) , (*l_482)), l_552))) , p_41) <= 0x264842B0L)), g_526))), 3)) , (-5L)))) & 1UL) , p_42);

                    ;
                }

                ;
                if ((safe_add_func_uint32_t_u_u((~l_555), ((*l_527) = func_65(g_129, ((*l_557) = (&g_454 == (g_124 , l_556[1]))))))))
                {
                    struct S0 *l_559[5][3][6] = {{{&g_129,(void*)0,&l_408,(void*)0,&g_129,(void*)0},{&g_129,(void*)0,&l_408,(void*)0,&g_129,(void*)0},{&g_129,(void*)0,&l_408,(void*)0,&g_129,(void*)0}},{{&g_129,(void*)0,&l_408,(void*)0,&g_129,(void*)0},{&g_129,(void*)0,&l_408,(void*)0,&g_129,(void*)0},{&g_129,(void*)0,&l_408,(void*)0,&g_129,(void*)0}},{{&g_129,(void*)0,&l_408,(void*)0,&g_129,(void*)0},{&g_129,(void*)0,&l_408,(void*)0,&g_129,(void*)0},{&g_129,(void*)0,&l_408,(void*)0,&g_129,(void*)0}},{{&g_129,(void*)0,&l_408,(void*)0,&g_129,(void*)0},{&g_129,(void*)0,&l_408,(void*)0,&g_129,(void*)0},{&g_129,(void*)0,&l_408,(void*)0,&g_129,(void*)0}},{{&g_129,(void*)0,&l_408,(void*)0,&g_129,(void*)0},{&g_129,(void*)0,&l_408,(void*)0,&g_129,(void*)0},{&g_129,(void*)0,&l_408,(void*)0,&g_129,(void*)0}}};
                    short l_567 = 1L;
                    int l_573[1][5];
                    struct S0 l_574 = {-1L,4294967295UL,1UL,0xA6021E60L,2UL};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_573[i][j] = 0L;
                    }
                    l_560[0][0][3] = (l_408 = l_558);
                    l_561 = l_561;
                    for (g_124 = 0; (g_124 > 31); g_124 = safe_add_func_uint16_t_u_u(g_124, 7))
                    {
                        int **l_564[4][7] = {{&l_493,&l_84,&g_79[0],&l_84,&l_493,&l_84,&l_482},{&l_527,&l_527,&l_493,(void*)0,&l_493,&l_482,&l_493},{&g_79[1],&l_493,&l_493,&g_79[1],&l_84,(void*)0,&l_527},{&l_527,(void*)0,&l_84,&g_79[1],&l_493,&l_493,&g_79[1]}};
                        int i, j;
                        (*g_268) = l_527;

                        ;
                        (**g_267) = l_428;

                        ;
                        l_573[0][0] = ((((*g_268) = (**g_267)) == (((p_41 , 0x4A543AB1L) & (*l_493)) , &g_80)) <= p_41);
                        l_408 = l_574;
                    }

                    ;
                }
                else
                {
                    int *l_575 = &g_80;
                    int ***l_577 = &g_268;
                    int ****l_578 = &l_577;
                    (**g_267) = func_55(((*l_493) , (((l_575 = (*g_268)) == l_527) <= (l_576[7] == ((*l_578) = l_577)))), p_41);

                    ;
                    (*g_268) = (**g_267);
                }


                ;
                for (l_572 = 18; (l_572 >= 41); l_572 = safe_add_func_int8_t_s_s(l_572, 8))
                {
                    unsigned l_581[4];
                    int *l_593 = &g_80;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_581[i] = 0xAFC11402L;
                    if (p_41)
                    {
                        int l_582 = 0x81065E63L;
                        unsigned char l_586 = 1UL;
                        (*l_527) = ((((p_41 , (l_581[1] | (((((4294967294UL >= ((void*)0 == l_527)) == l_582) , (*g_267)) == (l_583 = &l_84)) < (safe_mod_func_uint16_t_u_u((p_41 , g_129.f2), p_41))))) , (**g_454)) , p_41) <= l_586);
                    }
                    else
                    {
                        (*g_268) = func_55(((*l_527) <= (*l_482)), (*l_493));
                    }
                    l_593 = func_55(((+(l_493 == l_493)) > (*l_493)), (p_41 & (l_587 != (((+0UL) , (0xF2L && (0x7FFEL && ((safe_rshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(0x1FBCL, g_129.f3)), g_80)) != (**l_583))))) , l_592))));

                    ;
                    if ((*l_482))
                    {
                        if (p_41)
                            break;
                        (**l_583) = p_41;
                        return l_594;
                    }
                    else
                    {
                        struct S0 *l_595[8][8] = {{&l_561,&l_558,&l_558,&l_558,&l_558,&l_558,&l_558,&l_558},{&l_558,&l_558,&l_561,&l_558,&l_558,&l_561,&l_558,&l_558},{&l_558,&l_558,&l_558,&l_558,&l_558,&l_558,&l_558,&l_558},{&l_558,&l_558,&l_558,&l_558,&l_558,&l_558,&l_558,&l_558},{&l_558,&l_558,&l_561,&l_558,&l_558,&l_561,&l_558,&l_558},{&l_558,&l_558,&l_558,&l_558,&l_558,&l_558,&l_558,&l_558},{&l_558,&l_558,&l_558,&l_558,&l_558,&l_558,&l_558,&l_558},{&l_558,&l_558,&l_561,&l_558,&l_558,&l_561,&l_558,&l_558}};
                        int i, j;
                        l_408 = g_129;
                    }
                }
                for (g_287 = 0; (g_287 <= 1); g_287 += 1)
                {
                    char l_599 = 0x1CL;
                    int l_602 = 0L;
                    struct S0 l_604 = {0L,7UL,0x676DL,7UL,9UL};
                    unsigned *l_622[9] = {&l_545,&l_545,&l_545,&l_545,&l_545,&l_545,&l_545,&l_545,&l_545};
                    int i;
                    if ((((((safe_sub_func_uint32_t_u_u((l_599 = (g_598[2][2][3] , ((*l_418) = (**l_583)))), ((safe_rshift_func_uint8_t_u_u((p_41 & p_41), l_602)) == (l_603 <= p_41)))) , 0xB9L) , (func_65(l_604, (*l_482)) || (*l_84))) | 8UL) && p_41))
                    {
                        int i;
                        (*g_267) = &g_79[g_287];

                        ;
                    }
                    else
                    {
                        int **l_612 = &g_455[5];
                        struct S0 l_617 = {0L,1UL,0x7B23L,4294967295UL,0x55L};
                        struct S0 *l_618 = &g_223[5];
                        int *l_623[9][3][5] = {{{&g_80,&g_80,(void*)0,(void*)0,&g_80},{&g_80,&g_80,(void*)0,(void*)0,&g_80},{&g_80,&g_80,(void*)0,(void*)0,&g_80}},{{&g_80,&g_80,(void*)0,(void*)0,&g_80},{&g_80,&g_80,(void*)0,(void*)0,&g_80},{&g_80,&g_80,&l_602,&l_602,&g_80}},{{(void*)0,&g_80,&l_602,&l_602,&g_80},{(void*)0,&g_80,&l_602,&l_602,&g_80},{(void*)0,&g_80,&l_602,&l_602,&g_80}},{{(void*)0,&g_80,&l_602,&l_602,&g_80},{(void*)0,&g_80,&l_602,&l_602,&g_80},{(void*)0,&g_80,&l_602,&l_602,&g_80}},{{(void*)0,&g_80,&l_602,&l_602,&g_80},{(void*)0,&g_80,&l_602,&l_602,&g_80},{(void*)0,&g_80,&l_602,&l_602,&g_80}},{{(void*)0,&g_80,&l_602,&l_602,&g_80},{(void*)0,&g_80,&l_602,&l_602,&g_80},{(void*)0,&g_80,&l_602,&l_602,&g_80}},{{(void*)0,&g_80,&l_602,&l_602,&g_80},{(void*)0,&g_80,&l_602,&l_602,&g_80},{(void*)0,&g_80,&l_602,&l_602,&g_80}},{{(void*)0,&g_80,&l_602,&l_602,&g_80},{(void*)0,&g_80,&l_602,&l_602,&g_80},{(void*)0,&g_80,&l_602,&l_602,&g_80}},{{(void*)0,&l_602,&g_80,&g_80,&l_602},{&g_80,&l_602,&g_80,&g_80,&l_602},{&g_80,&l_602,&g_80,&g_80,&l_602}}};
                        int ***l_626 = &l_583;
                        unsigned short ***l_631 = (void*)0;
                        unsigned short ***l_632 = &g_629;
                        int i, j, k;
                        (*l_527) = ((safe_lshift_func_uint16_t_u_s(p_41, (l_614 & 0x1896L))) >= (*l_527));
                        l_602 = ((*l_482) = p_41);
                        (*l_632) = g_629;
                    }
                    l_633 = &l_561;
                }

                ;
            }
            else
            {
                struct S0 l_634 = {0xCA4DL,0x84EEF922L,0UL,0xECE59000L,0xBBL};
                struct S0 *l_636[5] = {&g_598[0][1][1],&g_598[0][1][1],&g_598[0][1][1],&g_598[0][1][1],&g_598[0][1][1]};
                unsigned char *l_639 = &l_408.f4;
                unsigned *l_641 = &l_545;
                int l_648 = 0L;
                short l_670 = (-6L);
                unsigned l_671[9];
                int i;
                for (i = 0; i < 9; i++)
                    l_671[i] = 0xBBE6E4EDL;
                l_558 = (l_635 = l_634);
                (***g_267) = (safe_sub_func_uint8_t_u_u(p_41, ((*l_639) = 0xD6L)));
                if (((((*l_480) = &g_78[8]) != (g_640 = &p_42)) > (func_58(l_641, (g_223[0] , ((safe_sub_func_int8_t_s_s(g_129.f3, (***l_625))) && (l_634.f2 ^ l_634.f1))), (safe_lshift_func_uint8_t_u_u(((&g_630 == l_646) & p_41), 2)), p_42) , 0UL)))
                {
                    for (g_50 = 7; (g_50 >= 0); g_50 -= 1)
                    {
                        l_648 = (!((***g_267) = (safe_unary_minus_func_int16_t_s((-7L)))));
                    }
                }
                else
                {
                    struct S0 *l_652[8][8][2] = {{{&g_223[5],&l_560[0][0][3]},{(void*)0,&l_558},{&g_223[6],&l_560[3][7][2]},{&g_129,&g_598[2][2][3]},{&l_635,&g_598[2][2][3]},{(void*)0,&l_408},{&g_598[1][1][3],&l_408},{&g_598[2][2][3],&l_635}},{{&l_560[0][0][3],&l_408},{&l_408,&l_408},{&g_598[2][2][3],&l_634},{&g_598[2][2][3],&g_598[1][3][1]},{&l_408,&l_560[2][6][1]},{&g_223[5],&l_408},{&g_223[2],&g_223[2]},{&g_223[2],&l_408}},{{&g_223[5],&l_560[2][6][1]},{&l_408,&g_598[1][3][1]},{&g_598[2][2][3],&l_634},{&g_598[2][2][3],&l_408},{&l_408,&l_408},{&l_560[0][0][3],&l_635},{&g_598[2][2][3],&l_408},{&g_598[1][1][3],&l_408}},{{(void*)0,&g_598[2][2][3]},{&l_635,&g_598[2][2][3]},{&g_129,&l_560[3][7][2]},{&g_223[6],&l_558},{(void*)0,&l_560[0][0][3]},{&g_223[5],&l_635},{&g_223[5],&g_223[0]},{&g_598[1][3][2],&g_129}},{{&l_408,(void*)0},{&l_408,&g_598[2][3][0]},{&l_560[2][6][1],&l_558},{&g_223[0],&l_408},{&l_635,&g_598[2][2][3]},{&g_129,&l_635},{&g_598[2][2][3],&g_223[5]},{&l_635,&l_408}},{{&g_129,&l_408},{&l_560[3][7][2],&l_408},{&g_129,&l_408},{&l_635,&g_223[5]},{&g_598[2][2][3],&l_558},{&l_408,&l_560[0][0][3]},{&l_558,&g_598[2][2][3]},{&g_129,(void*)0}},{{(void*)0,&g_598[0][2][1]},{&l_635,&l_408},{&l_635,&l_408},{(void*)0,&g_129},{&g_223[2],&g_598[2][3][0]},{&g_223[5],&g_598[1][1][3]},{&g_223[2],&g_598[0][3][1]},{&l_558,&g_598[2][2][3]}},{{&g_598[2][2][3],&g_223[6]},{&l_558,&g_129},{&g_598[1][3][1],&l_558},{&g_223[0],(void*)0},{&l_408,&l_635},{&g_598[1][1][3],&l_635},{&g_598[1][3][2],&g_598[1][3][2]},{&g_223[6],&g_223[5]}}};
                    int l_669 = 0L;
                    int i, j, k;
                    for (l_634.f4 = 0; (l_634.f4 != 59); l_634.f4 = safe_add_func_int32_t_s_s(l_634.f4, 8))
                    {
                        struct S0 **l_651 = (void*)0;
                        (*l_583) = (*g_268);
                        l_652[2][2][1] = &g_223[5];
                    }
                    if ((safe_rshift_func_int8_t_s_s(func_58(func_55(((***l_480) = ((safe_sub_func_int32_t_s_s((**g_268), ((void*)0 != (*g_640)))) < l_634.f1)), ((safe_lshift_func_int16_t_s_s(((g_598[2][2][3].f4 , ((*l_592) = (safe_rshift_func_uint8_t_u_u(l_634.f3, (safe_add_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((p_41 > (l_648 = (safe_add_func_int32_t_s_s(((*l_493) < (((g_223[5].f2 > l_634.f1) , l_641) != (void*)0)), p_41)))), 65535UL)) >= (*l_84)), p_41)))))) , (-1L)), 3)) & p_41)), p_41, p_41, (*g_268)), 6)))
                    {
                        int **l_668 = &g_79[0];
                        g_223[5] = l_558;
                        l_668 = l_667;

                        ;
                    }
                    else
                    {
                        (**l_583) = l_669;
                        (*l_583) = func_55(l_670, func_65((g_129 = l_635), ((*l_639) = ((((**l_583) = (l_671[0] && (safe_rshift_func_int8_t_s_s(((g_526 = g_674) , g_526), 4)))) && (***g_267)) ^ (-1L)))));


                        (**l_625) = (*g_268);
                    }


                }


                ;
                ;
            }


            ;
            ;
            ;
            ;
            if (((p_41 || ((safe_add_func_uint8_t_u_u((p_41 == (*l_493)), l_685[0])) | p_41)) & l_686))
            {
                struct S0 **l_688 = &l_687;
                struct S0 *l_690 = &l_408;
                struct S0 **l_689 = &l_690;
                (*l_689) = ((*l_688) = l_687);

                ;
                (*l_583) = ((**g_267) = (*l_583));
            }
            else
            {
                int l_693 = (-1L);
                unsigned char *l_694 = &l_572;
                int *l_697 = &g_80;
                l_697 = p_42;

                ;
            }
            if (p_41)
            {
                for (l_416 = (-10); (l_416 < 22); ++l_416)
                {
                    unsigned l_702 = 0UL;
                    l_702 = (g_223[5].f3 < (g_701 & ((void*)0 == &l_84)));
                }
            }
            else
            {
                for (l_684 = 0; (l_684 <= 2); l_684 += 1)
                {
                    int i;
                    (*l_583) = g_451[(l_684 + 1)];

                    ;
                }

                ;
                (*l_687) = g_223[5];
                for (p_41 = 26; (p_41 == 35); ++p_41)
                {
                    (*l_687) = l_558;
                    if (p_41)
                        break;
                }
            }

            ;
            for (l_635.f2 = 0; (l_635.f2 <= 2); l_635.f2 += 1)
            {
                unsigned short l_713 = 0x60F4L;
                int l_719[8] = {0xCE59244FL,0xCE59244FL,0xCE59244FL,0xCE59244FL,0xCE59244FL,0xCE59244FL,0xCE59244FL,0xCE59244FL};
                unsigned l_745 = 4294967295UL;
                unsigned char l_746 = 1UL;
                unsigned *l_747 = &l_545;
                struct S0 l_748 = {0x03EBL,0x76952F2AL,0x83ADL,1UL,0UL};
                int i;
                if (p_41)
                {
                    int *l_718 = &l_712[3];
                    (*l_493) = p_41;
                    if ((l_719[3] = (*l_718)))
                    {
                        (*g_268) = l_718;



                        return p_41;




                    }
                    else
                    {
                        (**l_625) = (void*)0;
                        (*l_687) = l_558;
                        (*l_687) = g_129;
                    }
                    if (p_41)
                        break;
                }
                else
                {
                    int *l_726 = (void*)0;
                    unsigned char **l_728 = (void*)0;
                    int l_731 = 0x0528C7D8L;
                    struct S0 *l_732 = &g_129;
                    if (p_41)
                    {
                        unsigned ****l_724[1][9] = {{&l_480,&l_480,&l_480,&l_480,&l_480,&l_480,&l_480,&l_480,&l_480}};
                        int l_730 = (-4L);
                        int i, j;
                        (**g_267) = p_42;
                        l_731 = ((*l_482) = p_41);
                    }
                    else
                    {
                        l_732 = (void*)0;

                        ;
                    }

                    ;
                    for (l_558.f2 = 0; (l_558.f2 <= 2); l_558.f2 += 1)
                    {
                        unsigned ****l_733 = &l_727;
                        struct S0 **l_734 = (void*)0;
                        struct S0 **l_735 = &l_732;
                        (**g_267) = ((l_731 | ((void*)0 != l_733)) , &g_80);
                        g_736 = ((*l_735) = &g_598[2][2][3]);

                        ;
                        ;
                    }

                    ;
                    ;
                    if (((*l_717) = (p_41 & (safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(p_41, g_190)), 1UL)), p_41)))))
                    {
                        l_748 = l_558;
                        (*l_687) = l_748;
                    }
                    else
                    {
                        (*l_482) = 0xCE4EB348L;
                        (**l_625) = p_42;
                        return p_41;


                    }
                    return p_41;


                }
                (*g_268) = (*l_583);
                (*l_687) = l_558;
                for (l_745 = 0; (l_745 <= 2); l_745 += 1)
                {
                    unsigned char l_769[9] = {0x65L,6UL,0x65L,6UL,0x65L,6UL,0x65L,6UL,0x65L};
                    int l_772 = 1L;
                    int l_774[7] = {0xCAF3399FL,0xE37C4A47L,0xCAF3399FL,0xCAF3399FL,0xE37C4A47L,0xCAF3399FL,0xCAF3399FL};
                    int i;
                    (*l_687) = l_748;
                    (*l_583) = p_42;

                    ;
                    if (l_774[3])
                        break;
                    for (l_594 = 0; (l_594 <= 2); l_594 += 1)
                    {
                        unsigned ****l_778 = &l_480;
                        unsigned *****l_777 = &l_778;
                        int l_785 = 0x6FF16A91L;
                        (*l_482) = (safe_div_func_uint8_t_u_u((*g_773), (((&g_725 != ((*l_777) = &l_727)) == (safe_rshift_func_uint8_t_u_s(((65535UL ^ l_748.f2) >= l_719[3]), ((&l_747 == (void*)0) > l_785)))) , (**g_729))));

                        ;
                        (*g_268) = &l_774[5];
                        if ((*l_493))
                            continue;
                        if (p_41)
                            break;
                    }



                }
            }


            ;

        }


        ;

        ;
        ;
        ;
        (*l_482) = p_41;
    }
    else
    {
        struct S0 *l_786 = &l_408;
        int l_815 = (-1L);
        if ((**l_583))
        {
            l_786 = &l_560[0][0][3];

            ;
            (**l_583) = (safe_lshift_func_uint8_t_u_u(((void*)0 != p_42), 7));
        }
        else
        {
            struct S0 l_791 = {0xE6A5L,0x14A78F61L,6UL,0UL,255UL};
            unsigned ***l_798[4];
            unsigned char **l_799 = &g_773;
            int l_800 = 0x485894DFL;
            int i;
            for (i = 0; i < 4; i++)
                l_798[i] = (void*)0;
            (*l_583) = func_55((g_223[5].f3 , ((safe_add_func_uint8_t_u_u(func_65(l_791, p_41), (safe_add_func_int16_t_s_s(((((*l_480) = (void*)0) == ((l_791.f0 ^ (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(p_41, 3)), p_41))) , (void*)0)) < 0xD909BFD5L), 8L)))) , 1UL)), p_41);


            ;
            ;
            g_450 = &g_451[1];
            l_800 = ((p_41 , l_799) != (void*)0);
            for (l_791.f2 = (-19); (l_791.f2 > 13); ++l_791.f2)
            {
                unsigned char *l_808 = (void*)0;
                int l_809 = (-3L);
                unsigned *l_810[1];
                int ****l_818 = &g_267;
                int *****l_817 = &l_818;
                int i;
                for (i = 0; i < 1; i++)
                    l_810[i] = &l_408.f3;
                for (l_594 = 0; (l_594 <= 2); l_594++)
                {
                    int l_805 = 0x7F178C2CL;
                    if (l_805)
                        break;
                    (*l_786) = (*l_786);
                }
                l_809 = func_65(l_791, ((safe_mod_func_int16_t_s_s(((((*g_450) = ((((*l_799) = l_808) == ((*g_729) = &p_41)) , func_55(((***g_725) = l_791.f3), l_809))) != l_810[0]) == l_791.f2), (safe_rshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u((p_41 | g_330), l_809)), l_815)))) , 0x75L));

                ;
                (*l_717) = ((l_816 == ((*l_817) = &g_267)) == (g_129.f2 && (-7L)));
            }



            ;
        }


        ;


        ;
        ;
        ;
    }


    ;


    ;

    ;
    ;
    ;
    return p_41;



}







static int * func_55(unsigned p_56, unsigned char p_57)
{
    unsigned *l_260 = &g_77;
    int l_273 = 0x699FB92AL;
    int l_283 = 0x135EEA61L;
    unsigned l_284 = 0UL;
    for (g_129.f3 = 2; (g_129.f3 > 55); g_129.f3 = safe_add_func_int32_t_s_s(g_129.f3, 6))
    {
        struct S0 l_259[5] = {{4L,4294967290UL,0x3955L,0UL,4UL},{4L,4294967290UL,0x3955L,0UL,4UL},{4L,4294967290UL,0x3955L,0UL,4UL},{4L,4294967290UL,0x3955L,0UL,4UL},{4L,4294967290UL,0x3955L,0UL,4UL}};
        int *l_261 = &g_80;
        unsigned char ***l_274 = &g_195[0];
        int *l_393 = &g_289;
        int **l_392[9] = {&l_393,&l_393,&l_393,&l_393,&l_393,&l_393,&l_393,&l_393,&l_393};
        unsigned *l_395 = &l_284;
        int i;
    }
    return (*g_268);


}







static unsigned func_58(unsigned * p_59, unsigned p_60, int p_61, int * p_62)
{
    char l_154 = 1L;
    int l_159[3];
    unsigned l_170[6][3][10] = {{{4294967295UL,0x22342146L,0x22342146L,4294967295UL,0UL,0xC47ABECFL,4294967295UL,0x1CF9FCAAL,8UL,1UL},{4294967295UL,0x0F15932AL,0x6EEDD9E1L,0xDBB92B38L,0x7743CD8DL,4294967295UL,0x22342146L,4294967295UL,8UL,0x6A5DCCCDL},{1UL,0x6A5DCCCDL,0x61C1CC91L,4294967295UL,4294967295UL,0x67735A7CL,1UL,0x86A01D58L,0x0F15932AL,6UL}},{{0x296350F6L,4294967293UL,1UL,0x6EEDD9E1L,1UL,4294967295UL,1UL,4294967295UL,0xE891FE2EL,4294967295UL},{6UL,4294967295UL,8UL,9UL,0x694C051FL,4294967295UL,4294967295UL,0UL,0UL,0UL},{0x7743CD8DL,1UL,0xB6B4A244L,4294967295UL,0xB6B4A244L,1UL,0x7743CD8DL,4294967295UL,4294967295UL,0x6EEDD9E1L}},{{4294967295UL,4294967295UL,1UL,0x0F15932AL,0UL,0UL,0x694C051FL,0xBCAE1E1CL,0xDBB92B38L,4294967295UL},{0xDBB92B38L,4294967295UL,4294967293UL,1UL,0xE891FE2EL,0UL,0x7743CD8DL,0x6EEDD9E1L,0x694C051FL,0x22342146L},{8UL,1UL,4294967295UL,6UL,1UL,4294967295UL,4294967295UL,0UL,0x61C1CC91L,4294967292UL}},{{4294967295UL,4294967295UL,0x6EEDD9E1L,3UL,4294967295UL,4294967295UL,4294967295UL,0xB1D915A1L,0xE9C12CE4L,4294967295UL},{0x67735A7CL,0x7D408D08L,0x03E92686L,0xD0454759L,3UL,3UL,0xD0454759L,0x03E92686L,0x7D408D08L,0x67735A7CL},{4294967295UL,4294967295UL,0xE891FE2EL,0x1CF9FCAAL,0x03E92686L,1UL,0UL,4294967292UL,4294967293UL,4294967295UL}},{{9UL,4294967295UL,0x86A01D58L,4294967295UL,0x03E92686L,0xDBB92B38L,1UL,0x06ED31E0L,0xE891FE2EL,0x67735A7CL},{0x03E92686L,0UL,9UL,0x86A01D58L,3UL,0x296350F6L,4294967295UL,0x694C051FL,0xDBB92B38L,4294967295UL},{0xBCAE1E1CL,4294967295UL,0x67735A7CL,4294967295UL,4294967295UL,0UL,0xB1D915A1L,1UL,0x61C1CC91L,4294967295UL}},{{0xD0454759L,0x6E8A3BFFL,1UL,0UL,4294967295UL,0x67735A7CL,0x06ED31E0L,0x67735A7CL,4294967295UL,0UL},{0x6E8A3BFFL,0x694C051FL,0x6E8A3BFFL,4294967295UL,9UL,0x03E92686L,0UL,0xDBB92B38L,4294967295UL,0x61C1CC91L},{0UL,4294967295UL,4294967295UL,0xBCAE1E1CL,0x79E6B5F6L,4294967295UL,4294967293UL,0xDBB92B38L,4294967295UL,0x22342146L}}};
    unsigned char **l_199 = &g_196[1];
    int l_206[2];
    unsigned l_245 = 0x6C543C7BL;
    char *l_250 = &l_154;
    unsigned char l_251 = 0xE0L;
    short *l_252 = &g_50;
    char l_253 = 0xE3L;
    short l_254 = (-1L);
    unsigned l_255 = 0UL;
    struct S0 *l_256[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_159[i] = 0x59B2D93AL;
    for (i = 0; i < 2; i++)
        l_206[i] = 0xBFB3EC6DL;
    for (i = 0; i < 3; i++)
        l_256[i] = &g_129;
    for (p_61 = 14; (p_61 > 4); p_61 = safe_sub_func_uint16_t_u_u(p_61, 1))
    {
        struct S0 *l_145 = &g_129;
        unsigned l_157 = 1UL;
        unsigned char *l_171 = &g_124;
        int l_173 = 0x31CC493FL;
        unsigned **l_218 = &g_78[4];
        unsigned l_219 = 1UL;
        if (p_61)
            break;
        (*l_145) = g_129;
        for (g_80 = (-8); (g_80 != 25); ++g_80)
        {
            int l_153[5];
            unsigned char *l_162 = &g_124;
            struct S0 *l_203 = &g_129;
            unsigned char ***l_207 = &g_195[0];
            char l_230 = 0x35L;
            int i;
            for (i = 0; i < 5; i++)
                l_153[i] = 0L;
            for (g_129.f3 = 0; (g_129.f3 <= 1); g_129.f3 += 1)
            {
                int l_148 = 7L;
                unsigned *l_158[2];
                unsigned l_168 = 8UL;
                int i;
                for (i = 0; i < 2; i++)
                    l_158[i] = &g_77;
            }
        }
        (*g_176) = l_159[2];
    }
    (*g_176) = (safe_rshift_func_int16_t_s_u((&g_223[5] == ((safe_lshift_func_int16_t_s_s(((l_170[0][1][3] ^ (((*l_252) = (safe_lshift_func_uint16_t_u_s((((1UL >= (p_61 || l_253)) , l_254) || p_61), l_255))) , g_50)) != l_255), l_253)) , l_256[2])), g_223[5].f0));
    return l_254;
}







static short func_65(struct S0 p_66, unsigned char p_67)
{
    unsigned l_110 = 4294967295UL;
    int l_111 = 0x9E501E45L;
    int l_112 = 0L;
    int l_114[1][6] = {{0x8BAC2835L,0x55787DF3L,0x8BAC2835L,0x8BAC2835L,0x55787DF3L,0x8BAC2835L}};
    unsigned char *l_123 = &g_124;
    unsigned char **l_122 = &l_123;
    unsigned **l_140 = &g_78[7];
    int i, j;
    for (g_77 = 0; (g_77 <= 1); g_77 += 1)
    {
        for (p_66.f4 = 0; (p_66.f4 <= 1); p_66.f4 += 1)
        {
            int l_113 = 1L;
            int *l_119 = &l_114[0][1];
            int i;
            g_79[p_66.f4] = &g_80;
            (*l_119) = (safe_div_func_int32_t_s_s((l_113 = (l_112 = (l_111 = (l_110 = (g_7 || p_66.f2))))), (l_114[0][5] || (!((safe_div_func_uint16_t_u_u(p_66.f2, (safe_mod_func_int32_t_s_s(p_67, l_114[0][4])))) < p_66.f2)))));
            for (l_113 = 1; (l_113 >= 0); l_113 -= 1)
            {
                return p_66.f4;
            }
            if (p_66.f1)
            {
                if (p_66.f1)
                    break;
            }
            else
            {
                if (p_66.f3)
                    break;
            }
        }
    }
    for (p_66.f4 = 0; (p_66.f4 > 7); p_66.f4++)
    {
        struct S0 l_130 = {-9L,6UL,0xFC1EL,0xF9EEF7B8L,0xBFL};
        char l_142 = 0x2BL;
        if (((((void*)0 != l_122) , g_125) >= l_110))
        {
            char l_126 = 0xE5L;
            int *l_127 = &l_112;
            struct S0 *l_128 = &g_129;
            (*l_127) = (p_66 , (~l_126));
            (*l_128) = p_66;
        }
        else
        {
            int *l_133 = &l_114[0][5];
            short *l_141 = &l_130.f0;
            (*l_133) = (((g_129.f3 ^ ((l_130 , ((**l_122) = (safe_lshift_func_uint8_t_u_u((func_69(g_129.f4, &l_110, l_133, ((safe_rshift_func_int16_t_s_s(((((*l_141) = (((+(safe_sub_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_u(((l_130.f0 | p_66.f1) >= ((void*)0 != &l_114[0][2])), p_66.f4)) ^ g_129.f2) ^ (*l_133)), p_66.f0))) , l_140) == (void*)0)) != p_66.f3) >= 3L), 14)) != g_129.f1), &g_80) <= l_112), p_66.f0)))) , l_142)) == p_66.f1) | l_130.f4);
        }
    }
    return p_67;
}







static unsigned char func_69(short p_70, unsigned * p_71, int * p_72, int p_73, int * p_74)
{
    int l_91 = (-3L);
    int **l_105 = &g_79[0];
    struct S0 l_106 = {0x834AL,1UL,65533UL,0xF777BDFFL,1UL};
    struct S0 *l_107 = &l_106;
    for (g_77 = 0; (g_77 != 52); g_77 = safe_add_func_uint8_t_u_u(g_77, 7))
    {
        struct S0 l_88[2][7] = {{{0x47D6L,0UL,0x58B9L,0x0795B172L,8UL},{0x47D6L,0UL,0x58B9L,0x0795B172L,8UL},{0x47D6L,0UL,0x58B9L,0x0795B172L,8UL},{0x47D6L,0UL,0x58B9L,0x0795B172L,8UL},{0x47D6L,0UL,0x58B9L,0x0795B172L,8UL},{0x47D6L,0UL,0x58B9L,0x0795B172L,8UL},{0x47D6L,0UL,0x58B9L,0x0795B172L,8UL}},{{0x01CFL,0UL,65527UL,0x6DF81F9DL,0xF5L},{0x01CFL,0UL,65527UL,0x6DF81F9DL,0xF5L},{0x01CFL,0UL,65527UL,0x6DF81F9DL,0xF5L},{0x01CFL,0UL,65527UL,0x6DF81F9DL,0xF5L},{0x01CFL,0UL,65527UL,0x6DF81F9DL,0xF5L},{0x01CFL,0UL,65527UL,0x6DF81F9DL,0xF5L},{0x01CFL,0UL,65527UL,0x6DF81F9DL,0xF5L}}};
        unsigned char *l_96 = &l_88[0][6].f4;
        int **l_102 = &g_79[1];
        int ***l_101 = &l_102;
        unsigned char *l_104 = &l_88[0][6].f4;
        unsigned char **l_103 = &l_104;
        int i, j;
        (*p_72) = ((l_88[0][6] , (safe_mod_func_int16_t_s_s((((p_73 == l_88[0][6].f1) >= (l_91 && (((safe_lshift_func_int16_t_s_s(0xE6D5L, g_80)) != (safe_mod_func_uint8_t_u_u(l_91, ((*l_96) = 0x49L)))) || ((0x21BDB030L <= l_88[0][6].f3) == p_70)))) > g_7), 0xF16CL))) >= g_50);
        (*p_72) = (((l_91 > l_88[0][6].f3) >= (l_91 , (*p_74))) >= (safe_lshift_func_uint8_t_u_s(g_80, 1)));
        (*l_101) = ((l_88[0][6].f0 , (safe_mod_func_uint16_t_u_u(p_73, (g_77 , l_88[0][6].f1)))) , &p_74);

        ;
        (***l_101) = (((l_96 != ((*l_103) = l_96)) != l_91) || (*p_72));
    }
    (*l_105) = &l_91;


    (*l_107) = l_106;
    return g_77;


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_129.f0, "g_129.f0", print_hash_value);
    transparent_crc(g_129.f1, "g_129.f1", print_hash_value);
    transparent_crc(g_129.f2, "g_129.f2", print_hash_value);
    transparent_crc(g_129.f3, "g_129.f3", print_hash_value);
    transparent_crc(g_129.f4, "g_129.f4", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_223[i].f0, "g_223[i].f0", print_hash_value);
        transparent_crc(g_223[i].f1, "g_223[i].f1", print_hash_value);
        transparent_crc(g_223[i].f2, "g_223[i].f2", print_hash_value);
        transparent_crc(g_223[i].f3, "g_223[i].f3", print_hash_value);
        transparent_crc(g_223[i].f4, "g_223[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_287, "g_287", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_330, "g_330", print_hash_value);
    transparent_crc(g_526, "g_526", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_598[i][j][k].f0, "g_598[i][j][k].f0", print_hash_value);
                transparent_crc(g_598[i][j][k].f1, "g_598[i][j][k].f1", print_hash_value);
                transparent_crc(g_598[i][j][k].f2, "g_598[i][j][k].f2", print_hash_value);
                transparent_crc(g_598[i][j][k].f3, "g_598[i][j][k].f3", print_hash_value);
                transparent_crc(g_598[i][j][k].f4, "g_598[i][j][k].f4", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_674, "g_674", print_hash_value);
    transparent_crc(g_701, "g_701", print_hash_value);
    transparent_crc(g_714, "g_714", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_869[i][j][k], "g_869[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_872, "g_872", print_hash_value);
    transparent_crc(g_923.f0, "g_923.f0", print_hash_value);
    transparent_crc(g_923.f1, "g_923.f1", print_hash_value);
    transparent_crc(g_923.f2, "g_923.f2", print_hash_value);
    transparent_crc(g_923.f3, "g_923.f3", print_hash_value);
    transparent_crc(g_923.f4, "g_923.f4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
