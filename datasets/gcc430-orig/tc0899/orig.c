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
   unsigned f1;
   char * const f2;
   int f3;
   unsigned f4;
};

union U1 {
   char * f0;
   unsigned char f1;
   short f2;
   int f3;
};

union U2 {
   unsigned f0;
};


static unsigned short g_18 = 65532UL;
static char g_30 = 0xDDL;
static union U1 g_47 = {0};
static int g_71 = 1L;
static int g_75 = (-1L);
static union U0 g_78 = {65526UL};
static unsigned g_82 = 0xBD9B76FCL;
static union U1 g_89 = {0};
static union U1 *g_88 = &g_89;
static union U2 g_118[7][2][1] = {{{{2UL}},{{2UL}}},{{{2UL}},{{2UL}}},{{{2UL}},{{2UL}}},{{{2UL}},{{2UL}}},{{{2UL}},{{2UL}}},{{{2UL}},{{2UL}}},{{{2UL}},{{2UL}}}};
static int *g_120 = &g_89.f3;
static short g_147 = 0xFCD5L;
static unsigned char g_174 = 0x27L;
static const char g_203[1] = {0x15L};
static union U1 g_210 = {0};
static union U0 g_213 = {2UL};
static int g_230 = 0x70583445L;
static int **g_239 = &g_120;
static unsigned char *g_283 = &g_210.f1;
static unsigned char **g_282[6][9][4] = {{{(void*)0,&g_283,&g_283,&g_283},{(void*)0,&g_283,(void*)0,&g_283},{(void*)0,&g_283,&g_283,&g_283},{(void*)0,&g_283,(void*)0,&g_283},{(void*)0,&g_283,&g_283,&g_283},{(void*)0,&g_283,(void*)0,&g_283},{(void*)0,&g_283,&g_283,&g_283},{(void*)0,&g_283,(void*)0,&g_283},{(void*)0,&g_283,&g_283,&g_283}},{{(void*)0,&g_283,(void*)0,&g_283},{(void*)0,&g_283,&g_283,&g_283},{(void*)0,&g_283,(void*)0,&g_283},{(void*)0,&g_283,&g_283,&g_283},{(void*)0,&g_283,(void*)0,&g_283},{(void*)0,&g_283,&g_283,&g_283},{(void*)0,&g_283,(void*)0,&g_283},{(void*)0,&g_283,&g_283,&g_283},{(void*)0,&g_283,(void*)0,&g_283}},{{(void*)0,&g_283,&g_283,&g_283},{(void*)0,&g_283,(void*)0,&g_283},{(void*)0,&g_283,&g_283,&g_283},{(void*)0,&g_283,(void*)0,&g_283},{(void*)0,&g_283,&g_283,&g_283},{(void*)0,&g_283,(void*)0,&g_283},{(void*)0,&g_283,&g_283,&g_283},{(void*)0,&g_283,(void*)0,&g_283},{(void*)0,&g_283,&g_283,&g_283}},{{(void*)0,&g_283,(void*)0,&g_283},{(void*)0,&g_283,&g_283,&g_283},{(void*)0,&g_283,(void*)0,&g_283},{(void*)0,&g_283,&g_283,&g_283},{(void*)0,&g_283,(void*)0,&g_283},{(void*)0,&g_283,&g_283,&g_283},{(void*)0,&g_283,(void*)0,&g_283},{(void*)0,&g_283,&g_283,&g_283},{(void*)0,&g_283,(void*)0,&g_283}},{{(void*)0,&g_283,&g_283,&g_283},{(void*)0,&g_283,(void*)0,&g_283},{(void*)0,&g_283,&g_283,&g_283},{(void*)0,&g_283,(void*)0,&g_283},{(void*)0,&g_283,&g_283,&g_283},{(void*)0,&g_283,(void*)0,&g_283},{(void*)0,&g_283,&g_283,&g_283},{(void*)0,&g_283,(void*)0,&g_283},{(void*)0,&g_283,&g_283,&g_283}},{{(void*)0,&g_283,(void*)0,&g_283},{(void*)0,&g_283,&g_283,&g_283},{(void*)0,&g_283,(void*)0,&g_283},{(void*)0,&g_283,&g_283,&g_283},{(void*)0,&g_283,(void*)0,&g_283},{(void*)0,&g_283,&g_283,&g_283},{(void*)0,&g_283,(void*)0,&g_283},{(void*)0,&g_283,&g_283,&g_283},{(void*)0,&g_283,(void*)0,&g_283}}};
static union U1 g_295 = {0};
static union U1 g_322 = {0};
static union U0 *g_334[7] = {&g_213,&g_213,&g_213,&g_213,&g_213,&g_213,&g_213};
static unsigned short *g_344 = &g_213.f0;
static short *g_371[10][5][2] = {{{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147}},{{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147}},{{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147}},{{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147}},{{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147}},{{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147}},{{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147}},{{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147}},{{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147}},{{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147},{&g_147,&g_147}}};
static short **g_370 = &g_371[5][4][0];
static unsigned char g_377 = 8UL;
static union U0 g_381 = {0xF09DL};
static union U2 **g_390 = (void*)0;
static char g_391 = 0L;
static unsigned *g_509 = &g_118[0][0][0].f0;
static unsigned **g_508 = &g_509;
static union U1 ***g_543 = (void*)0;
static unsigned g_551 = 0x3BBF5011L;
static const union U1 g_564 = {0};
static int g_654 = 0x1011B4D2L;
static union U0 g_700 = {0UL};
static short ***g_771 = &g_370;
static union U0 g_816[2] = {{0x02D6L},{0x02D6L}};
static union U1 g_850[8] = {{0},{0},{0},{0},{0},{0},{0},{0}};
static union U1 g_851[4][4][4] = {{{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}}};
static union U1 g_852 = {0};
static union U1 g_853 = {0};
static union U1 g_854 = {0};
static union U1 g_855[2][8][5] = {{{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}}}};
static union U1 g_856 = {0};
static union U1 g_857 = {0};
static union U1 g_858 = {0};
static union U1 g_859 = {0};
static union U1 g_860 = {0};
static union U1 g_861 = {0};
static union U1 g_862 = {0};
static union U1 g_863 = {0};
static union U1 g_864 = {0};
static union U1 g_865 = {0};
static union U1 g_866 = {0};
static union U1 g_867 = {0};
static union U1 g_868 = {0};
static union U1 g_869 = {0};
static union U1 g_870 = {0};
static union U1 g_871 = {0};
static union U1 * const g_873[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static union U1 * const *g_872 = &g_873[2];
static union U1 g_876[7] = {{0},{0},{0},{0},{0},{0},{0}};
static union U1 g_877[10] = {{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}};
static union U1 * const g_875[7] = {&g_876[1],&g_876[1],&g_876[1],&g_876[1],&g_876[1],&g_876[1],&g_876[1]};
static union U1 * const *g_874 = &g_875[6];
static union U0 g_885[4][9][3] = {{{{0x5F07L},{0UL},{0UL}},{{0x21A3L},{65535UL},{65535UL}},{{0x5F07L},{0UL},{0UL}},{{0x21A3L},{65535UL},{65535UL}},{{0x5F07L},{0UL},{0UL}},{{0x21A3L},{65535UL},{65535UL}},{{0x5F07L},{0UL},{0UL}},{{0x21A3L},{65535UL},{65535UL}},{{0x5F07L},{0UL},{0UL}}},{{{0x21A3L},{65535UL},{65535UL}},{{0x5F07L},{0UL},{0UL}},{{0x21A3L},{65535UL},{65535UL}},{{0x5F07L},{0UL},{0UL}},{{0x21A3L},{65535UL},{65535UL}},{{0x5F07L},{0UL},{0UL}},{{0x21A3L},{65535UL},{65535UL}},{{0x5F07L},{0UL},{0UL}},{{0x21A3L},{65535UL},{65535UL}}},{{{0x5F07L},{0UL},{0UL}},{{0x21A3L},{65535UL},{65535UL}},{{0x5F07L},{0UL},{0UL}},{{0x21A3L},{65535UL},{65535UL}},{{0x5F07L},{0UL},{0UL}},{{0x21A3L},{65535UL},{65535UL}},{{0x5F07L},{0UL},{0UL}},{{0x21A3L},{65535UL},{65535UL}},{{0x5F07L},{0UL},{0UL}}},{{{0x21A3L},{65535UL},{65535UL}},{{0x5F07L},{0UL},{0UL}},{{0x21A3L},{65535UL},{65535UL}},{{0x5F07L},{0UL},{0UL}},{{0x21A3L},{65535UL},{65535UL}},{{0x5F07L},{0xCD55L},{0xCD55L}},{{65535UL},{0x6273L},{0x6273L}},{{0UL},{0xCD55L},{0xCD55L}},{{65535UL},{0x6273L},{0x6273L}}}};
static union U0 *g_884 = &g_885[1][7][0];
static const unsigned *g_946[5] = {&g_551,&g_551,&g_551,&g_551,&g_551};
static const unsigned **g_945[8][8] = {{(void*)0,&g_946[2],&g_946[0],&g_946[1],(void*)0,&g_946[3],(void*)0,&g_946[1]},{(void*)0,(void*)0,(void*)0,&g_946[1],&g_946[1],&g_946[3],&g_946[0],&g_946[0]},{&g_946[0],&g_946[2],(void*)0,(void*)0,&g_946[2],&g_946[0],&g_946[1],(void*)0},{&g_946[0],&g_946[1],&g_946[1],&g_946[2],&g_946[1],&g_946[2],&g_946[1],&g_946[1]},{(void*)0,&g_946[1],&g_946[3],&g_946[2],(void*)0,&g_946[1],&g_946[1],(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_946[1],&g_946[1],&g_946[0]},{&g_946[1],(void*)0,&g_946[3],&g_946[1],&g_946[3],(void*)0,&g_946[1],&g_946[1]},{&g_946[3],(void*)0,&g_946[1],&g_946[1],&g_946[1],&g_946[1],&g_946[1],&g_946[1]}};
static unsigned short **g_1000 = &g_344;
static unsigned short ***g_999 = &g_1000;
static unsigned char g_1084 = 0xDEL;
static unsigned char g_1110 = 8UL;
static short g_1125[6][2][10] = {{{0L,(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L),0L},{(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L)}},{{0L,0L,8L,0L,0L,8L,0L,0L,8L,0L},{0L,(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L),0L}},{{(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L)},{0L,0L,8L,0L,0L,8L,0L,0L,8L,0L}},{{0L,(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L),0L},{(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L)}},{{0L,0L,8L,0L,0L,8L,0L,0L,8L,0L},{0L,(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L),0L}},{{(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L)},{0L,(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L)}}};
static unsigned short g_1209[2] = {6UL,6UL};
static unsigned char g_1335[10][9][2] = {{{0x4BL,0x8CL},{0x8CL,0x4BL},{0xDEL,5UL},{0xDEL,0x4BL},{0x8CL,0x8CL},{0x4BL,0xDEL},{5UL,0xDEL},{0x4BL,0x8CL},{0x8CL,0x4BL}},{{0xDEL,5UL},{0xDEL,0x4BL},{0x8CL,0x8CL},{0x4BL,0xDEL},{5UL,0xDEL},{0x4BL,0x8CL},{0x8CL,0x4BL},{0xDEL,5UL},{0xDEL,0x4BL}},{{0x8CL,0x8CL},{0x4BL,0xDEL},{5UL,0xDEL},{0x4BL,0x8CL},{0x8CL,0x4BL},{0xDEL,5UL},{0xDEL,0x4BL},{0x8CL,0x8CL},{0x4BL,0xDEL}},{{5UL,0xDEL},{0x4BL,0x8CL},{0x8CL,0x4BL},{0xDEL,5UL},{0xDEL,0x4BL},{0x8CL,0x8CL},{0x4BL,0xDEL},{5UL,0xDEL},{0x4BL,0x8CL}},{{0x8CL,0x4BL},{0xDEL,5UL},{0xDEL,0x4BL},{0x8CL,0x8CL},{0x4BL,0xDEL},{5UL,0xDEL},{0xDEL,255UL},{255UL,0xDEL},{255UL,0x4BL}},{{255UL,0xDEL},{255UL,255UL},{0xDEL,255UL},{0x4BL,255UL},{0xDEL,255UL},{255UL,0xDEL},{255UL,0x4BL},{255UL,0xDEL},{255UL,255UL}},{{0xDEL,255UL},{0x4BL,255UL},{0xDEL,255UL},{255UL,0xDEL},{255UL,0x4BL},{255UL,0xDEL},{255UL,255UL},{0xDEL,255UL},{0x4BL,255UL}},{{0xDEL,255UL},{255UL,0xDEL},{255UL,0x4BL},{255UL,0xDEL},{255UL,255UL},{0xDEL,255UL},{0x4BL,255UL},{0xDEL,255UL},{255UL,0xDEL}},{{255UL,0x4BL},{255UL,0xDEL},{255UL,255UL},{0xDEL,255UL},{0x4BL,255UL},{0xDEL,255UL},{255UL,0xDEL},{255UL,0x4BL},{255UL,0xDEL}},{{255UL,255UL},{0xDEL,255UL},{0x4BL,255UL},{0xDEL,255UL},{255UL,0xDEL},{255UL,0x4BL},{255UL,0xDEL},{255UL,255UL},{0xDEL,255UL}}};
static const int g_1338 = 0x0ED10DCCL;
static union U0 g_1395[6] = {{0x1DA9L},{0x1DA9L},{0x1DA9L},{0x1DA9L},{0x1DA9L},{0x1DA9L}};
static const union U0 *g_1394[8] = {&g_1395[4],&g_1395[4],&g_1395[4],&g_1395[4],&g_1395[4],&g_1395[4],&g_1395[4],&g_1395[4]};
static unsigned short g_1494[5] = {65535UL,65535UL,65535UL,65535UL,65535UL};
static short g_1495 = (-1L);
static int *g_1496 = (void*)0;
static int g_1576[3] = {(-1L),(-1L),(-1L)};
static int **g_1706 = &g_1496;
static int g_1725 = 0xC198B1F0L;
static unsigned **g_1748 = (void*)0;
static unsigned g_1754 = 0xF3FFFC4FL;
static union U2 *g_1777 = &g_118[0][0][0];



static unsigned short func_1(void);
static int func_2(const int p_3, short p_4, int p_5, int p_6);
static char func_14(unsigned p_15, union U2 p_16, char * p_17);
static union U0 func_20(const union U0 p_21, char * p_22, char * p_23, char * p_24);
static union U0 func_25(union U1 p_26, char * p_27);
static int func_34(char * p_35, char * p_36, char * p_37, int p_38);
static char * func_39(short p_40, int p_41);
static char func_44(union U1 p_45, int p_46);
static char func_56(unsigned short p_57);
static union U2 func_60(const int p_61, unsigned short p_62, int p_63, int p_64);
static unsigned short func_1(void)
{
    unsigned char l_13[6][2][10] = {{{0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L},{0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L}},{{0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L},{0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L}},{{0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L},{0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L}},{{0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L},{0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L}},{{0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L},{0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L}},{{0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L},{0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L,0xF3L}}};
    union U2 l_19 = {0x52027495L};
    union U1 l_28[7] = {{0},{0},{0},{0},{0},{0},{0}};
    char *l_29 = &g_30;
    int *l_1773 = &g_322.f3;
    int i, j, k;
    (*l_1773) = func_2((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(l_13[2][0][9], func_14(g_18, l_19, (func_20(func_25(l_28[2], l_29), g_283, l_29, l_29) , (void*)0)))), 6)), 4)), l_19.f0, l_13[2][0][9], g_1725);
    (*g_1706) = (void*)0;
    for (g_551 = 0; (g_551 >= 33); g_551 = safe_add_func_int32_t_s_s(g_551, 1))
    {
        union U2 *l_1776 = &g_118[2][0][0];
        g_1777 = l_1776;
    }
    return (**g_1000);
}







static int func_2(const int p_3, short p_4, int p_5, int p_6)
{
    union U1 l_1756[7][10][3] = {{{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}}},{{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}}},{{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}}},{{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}}},{{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}}},{{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}}},{{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}}}};
    int l_1757[2];
    union U0 l_1765 = {0UL};
    union U2 l_1766 = {0x0655940EL};
    unsigned l_1767 = 1UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1757[i] = 0x4115A0E8L;
    if ((0x50L && ((p_5 <= (l_1756[3][9][2] , ((+(l_1757[1] == 0x7D950E5FL)) || (safe_rshift_func_uint16_t_u_s(((**g_1000) = (safe_mod_func_uint8_t_u_u((((safe_unary_minus_func_uint8_t_u(7UL)) || p_4) == (safe_sub_func_int16_t_s_s((l_1765 , (l_1766 , 0x3DCFL)), 0xE9AEL))), l_1767))), 14))))) >= p_6)))
    {
        union U2 *l_1768 = &g_118[2][1][0];
        union U2 **l_1769 = &l_1768;
        (*l_1769) = l_1768;
        l_1765.f3 = 0x8DD7EB8CL;
    }
    else
    {
        int *l_1772 = &l_1765.f3;
        for (g_1084 = (-17); (g_1084 > 55); g_1084 = safe_add_func_uint32_t_u_u(g_1084, 1))
        {
            l_1772 = (void*)0;
        }
    }
    return p_4;
}







static char func_14(unsigned p_15, union U2 p_16, char * p_17)
{
    short *l_1422[6][8][5] = {{{&g_147,&g_1125[2][1][5],&g_1125[4][0][3],&g_147,&g_147},{(void*)0,&g_1125[2][0][9],&g_1125[4][0][1],(void*)0,&g_1125[5][1][0]},{&g_1125[2][0][7],&g_147,&g_147,&g_147,&g_1125[2][0][7]},{&g_1125[0][0][3],&g_1125[1][0][6],&g_1125[4][0][3],&g_1125[0][0][3],(void*)0},{&g_147,&g_147,&g_1125[0][0][3],&g_1125[0][0][3],&g_1125[5][0][2]},{&g_1125[0][0][7],(void*)0,&g_147,&g_1125[2][0][9],&g_147},{(void*)0,&g_1125[0][0][3],&g_1125[0][0][3],&g_1125[2][0][1],(void*)0},{&g_147,(void*)0,&g_1125[0][0][4],&g_147,&g_1125[3][0][1]}},{{&g_1125[0][0][3],&g_1125[0][0][3],&g_1125[0][0][3],&g_1125[0][0][3],&g_1125[5][1][0]},{(void*)0,&g_1125[0][0][3],&g_1125[0][0][3],(void*)0,(void*)0},{&g_1125[0][0][3],&g_147,&g_147,&g_1125[0][0][3],&g_1125[0][0][4]},{&g_147,&g_1125[0][0][7],(void*)0,&g_1125[4][0][3],&g_147},{(void*)0,&g_1125[2][0][9],&g_1125[5][0][2],&g_1125[3][1][6],(void*)0},{&g_147,&g_147,&g_1125[0][0][3],&g_147,&g_1125[3][1][6]},{&g_147,&g_147,&g_1125[1][0][6],&g_147,&g_1125[4][0][1]},{(void*)0,&g_147,&g_147,&g_1125[0][1][8],&g_147}},{{&g_147,&g_1125[0][0][3],&g_147,&g_1125[0][0][3],&g_1125[1][0][1]},{&g_1125[0][0][3],&g_147,&g_147,&g_147,&g_1125[0][0][3]},{(void*)0,&g_1125[4][0][1],(void*)0,&g_147,&g_147},{&g_1125[0][0][3],(void*)0,&g_1125[0][0][3],&g_1125[0][0][3],&g_1125[0][0][3]},{&g_147,&g_147,&g_1125[0][0][3],&g_1125[0][0][3],&g_1125[0][0][3]},{(void*)0,&g_1125[0][0][3],&g_1125[3][0][1],(void*)0,&g_1125[5][1][3]},{&g_1125[0][0][7],&g_1125[0][0][3],&g_147,&g_1125[4][0][1],&g_147},{&g_147,&g_1125[0][0][3],(void*)0,&g_147,&g_1125[0][0][3]}},{{&g_1125[0][0][3],&g_1125[0][0][3],&g_1125[2][0][1],&g_1125[3][1][6],&g_147},{&g_1125[4][0][3],(void*)0,&g_1125[3][1][6],&g_1125[0][0][3],(void*)0},{&g_1125[2][0][9],&g_1125[0][0][3],(void*)0,&g_147,&g_1125[0][0][7]},{&g_1125[0][0][4],(void*)0,&g_1125[5][0][2],&g_1125[1][0][1],&g_1125[0][0][3]},{(void*)0,(void*)0,&g_1125[3][1][6],&g_147,&g_1125[0][0][4]},{&g_1125[4][0][1],&g_1125[5][1][3],&g_1125[0][0][3],&g_147,&g_1125[0][0][3]},{&g_1125[0][1][8],&g_1125[0][0][3],(void*)0,(void*)0,&g_147},{&g_1125[4][0][3],&g_1125[0][0][3],(void*)0,&g_1125[0][0][7],(void*)0}},{{&g_147,&g_1125[0][0][3],&g_1125[0][0][3],&g_1125[5][1][0],&g_1125[0][0][3]},{&g_1125[0][0][3],&g_1125[4][0][1],&g_1125[3][1][6],(void*)0,&g_1125[0][0][3]},{&g_1125[4][0][1],&g_1125[0][0][4],&g_1125[5][0][2],&g_1125[0][0][3],&g_1125[0][0][3]},{&g_147,&g_147,(void*)0,&g_1125[0][0][3],&g_1125[4][0][3]},{&g_1125[0][0][3],&g_147,&g_1125[3][1][6],&g_147,&g_147},{&g_1125[0][0][3],&g_1125[2][0][1],&g_1125[2][0][1],&g_1125[0][0][3],&g_147},{&g_1125[0][0][3],&g_147,(void*)0,&g_147,&g_1125[4][0][1]},{&g_1125[0][0][3],&g_1125[4][0][1],&g_1125[0][0][3],&g_147,&g_1125[0][0][3]}},{{&g_147,&g_147,&g_147,&g_147,&g_1125[0][0][3]},{&g_147,&g_1125[0][0][3],&g_1125[2][0][7],&g_1125[0][0][3],&g_147},{&g_1125[1][0][1],&g_1125[0][0][7],&g_1125[0][0][3],&g_147,&g_147},{(void*)0,&g_1125[0][0][3],&g_147,&g_147,&g_1125[1][0][6]},{&g_1125[3][1][6],(void*)0,&g_1125[0][0][3],&g_147,&g_1125[3][0][1]},{&g_147,(void*)0,&g_1125[1][0][6],&g_1125[5][0][2],(void*)0},{&g_1125[0][0][3],&g_147,&g_147,&g_1125[3][0][1],&g_1125[0][0][3]},{&g_1125[0][0][3],(void*)0,&g_1125[0][0][3],&g_1125[1][0][1],&g_1125[0][0][3]}}};
    int l_1433[1];
    int l_1436 = (-1L);
    const union U0 l_1470 = {7UL};
    union U1 **l_1516 = &g_88;
    unsigned l_1531 = 1UL;
    char l_1567[8] = {0x07L,0xC7L,0x07L,0xC7L,0x07L,0xC7L,0x07L,0xC7L};
    int l_1614 = (-7L);
    unsigned char l_1635[8][7] = {{0xB3L,0x10L,0x10L,0xB3L,7UL,0xB3L,0x10L},{0UL,0UL,0x10L,1UL,0x10L,0UL,0UL},{0UL,0x10L,1UL,0x10L,0UL,0UL,0x10L},{0xB3L,7UL,0xB3L,0x10L,0x10L,0xB3L,7UL},{0x10L,7UL,1UL,1UL,7UL,0x10L,7UL},{0xB3L,0x10L,0x10L,0xB3L,7UL,0xB3L,0x10L},{0UL,0UL,0x10L,1UL,0x10L,0UL,0UL},{0UL,0x10L,1UL,0x10L,0UL,0UL,0x10L}};
    union U0 *l_1639 = (void*)0;
    unsigned short l_1689[6][5] = {{65533UL,0x5A37L,0x4185L,0xA518L,65530UL},{65533UL,65530UL,65533UL,0x4185L,0x0070L},{65535UL,65530UL,0x0070L,0x4185L,65533UL},{0x0070L,0UL,65530UL,65530UL,0UL},{0UL,0xDD43L,0x0070L,65533UL,0x5A37L},{65530UL,0xDD43L,65533UL,1UL,65535UL}};
    int *l_1735 = &g_853.f3;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1433[i] = 1L;
    if ((safe_lshift_func_uint16_t_u_s((***g_999), p_16.f0)))
    {
        union U1 ****l_1425[10][1];
        int l_1432 = 0xD76C0B00L;
        int l_1439 = 9L;
        const union U0 **l_1534 = (void*)0;
        unsigned l_1550[5] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
        unsigned short l_1563 = 0x73D8L;
        unsigned l_1577 = 0x50639589L;
        const union U0 l_1596 = {6UL};
        unsigned short **l_1602 = &g_344;
        char l_1617 = 0x0EL;
        unsigned l_1618 = 0xF2A53A9CL;
        unsigned l_1633 = 0xD7312D3AL;
        unsigned l_1688 = 0UL;
        int i, j;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 1; j++)
                l_1425[i][j] = &g_543;
        }
        for (g_654 = (-1); (g_654 <= 17); g_654 = safe_add_func_uint32_t_u_u(g_654, 9))
        {
            int l_1421[6][2][1] = {{{0x9B076F31L},{1L}},{{1L},{0x9B076F31L}},{{1L},{1L}},{{0x9B076F31L},{1L}},{{1L},{0x9B076F31L}},{{1L},{1L}}};
            short **l_1423 = &l_1422[1][7][3];
            union U1 ****l_1424 = &g_543;
            short *l_1434[3][10] = {{&g_859.f2,&g_1125[0][0][3],(void*)0,(void*)0,&g_1125[3][1][9],&g_1125[3][0][6],&g_147,&g_1125[3][0][6],&g_1125[3][1][9],(void*)0},{(void*)0,(void*)0,(void*)0,&g_1125[0][0][3],&g_1125[3][1][9],&g_1125[0][0][3],(void*)0,&g_147,&g_147,(void*)0},{&g_1125[3][1][9],&g_147,&g_1125[0][0][3],&g_1125[0][0][3],&g_147,&g_1125[3][1][9],&g_859.f2,&g_147,(void*)0,&g_1125[3][0][6]}};
            int l_1435[3][6][1] = {{{0x23445A9AL},{0x2B266B1EL},{0x067BC5B4L},{0xAC66C97AL},{0x067BC5B4L},{0x2B266B1EL}},{{0x23445A9AL},{0x2B266B1EL},{0x067BC5B4L},{0xAC66C97AL},{0x067BC5B4L},{0x2B266B1EL}},{{0x23445A9AL},{0x2B266B1EL},{0x067BC5B4L},{0xAC66C97AL},{0x067BC5B4L},{0x2B266B1EL}}};
            int i, j, k;
            l_1436 = ((**g_239) = ((safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(l_1421[5][0][0], ((p_16 , (((((**g_771) = (*g_370)) != ((*l_1423) = l_1422[1][7][3])) , l_1424) == l_1425[8][0])) <= (l_1433[0] = (safe_sub_func_uint16_t_u_u(l_1421[5][0][0], (((safe_add_func_uint8_t_u_u(((*g_283) = ((safe_sub_func_uint32_t_u_u(p_16.f0, 0x72569F15L)) <= 0x31D88A63L)), l_1432)) || l_1433[0]) == (**g_239)))))))), p_16.f0)) , l_1435[0][2][0]));
        }
        for (g_1084 = 0; (g_1084 <= 1); g_1084 += 1)
        {
            short l_1442[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            int l_1455 = 0x8A9671CEL;
            int l_1458[7][6] = {{0xAEFE8914L,(-9L),0xAEFE8914L,0xAEFE8914L,(-9L),0xAEFE8914L},{0xAEFE8914L,(-9L),0xAEFE8914L,0xAEFE8914L,(-9L),0xAEFE8914L},{0xAEFE8914L,(-9L),0xAEFE8914L,0xAEFE8914L,(-9L),0xAEFE8914L},{0xAEFE8914L,(-9L),0xAEFE8914L,0xAEFE8914L,(-9L),0xAEFE8914L},{0xAEFE8914L,(-9L),0xAEFE8914L,0xAEFE8914L,(-9L),0xAEFE8914L},{0xAEFE8914L,(-9L),0xAEFE8914L,0xAEFE8914L,(-9L),0xAEFE8914L},{0xAEFE8914L,(-9L),0xAEFE8914L,0xAEFE8914L,(-9L),0xAEFE8914L}};
            int i, j;
            for (g_391 = 6; (g_391 >= 1); g_391 -= 1)
            {
                const union U1 *l_1441 = &g_856;
                union U0 l_1454 = {0x8DDDL};
                for (l_1432 = 2; (l_1432 <= 7); l_1432 += 1)
                {
                    union U1 *l_1440[4];
                    int l_1451 = 1L;
                    int i, j;
                    for (i = 0; i < 4; i++)
                        l_1440[i] = &g_852;
                    for (l_1436 = 0; (l_1436 <= 7); l_1436 += 1)
                    {
                        if (l_1433[0])
                            break;
                        if (p_15)
                            continue;
                    }
                    (**g_239) = ((safe_sub_func_int8_t_s_s((((l_1436 = ((((((**g_239) <= 0UL) == l_1439) ^ (l_1440[2] != l_1441)) <= (l_1442[5] = p_15)) > (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(p_15, (**g_1000))) ^ (l_1433[0] = (safe_add_func_int16_t_s_s(p_16.f0, p_15)))), p_16.f0)), l_1451)))) || l_1436) && p_16.f0), l_1451)) | 0x6E15L);
                }
                for (g_230 = 1; (g_230 >= 0); g_230 -= 1)
                {
                    unsigned short l_1459[9] = {7UL,0x64F0L,7UL,7UL,0x64F0L,7UL,7UL,0x64F0L,7UL};
                    int i;
                    (**g_239) = (safe_add_func_int8_t_s_s(((l_1454 , (*g_283)) && (l_1455 = l_1454.f0)), (safe_rshift_func_int8_t_s_u(0x40L, ((l_1442[5] && ((l_1458[5][4] = (l_1454.f0 ^ p_15)) >= l_1459[7])) > l_1442[0])))));
                    if (l_1432)
                        break;
                    if (l_1432)
                        break;
                    (*g_120) = l_1454.f0;
                }
            }
            if (p_16.f0)
                continue;
            for (g_82 = 0; (g_82 <= 1); g_82 += 1)
            {
                int l_1462 = 2L;
                int *l_1463 = &g_851[2][3][3].f3;
                char *l_1471 = (void*)0;
                if ((safe_rshift_func_uint16_t_u_s((l_1462 = ((**g_1000) = p_16.f0)), 8)))
                {
                    unsigned char l_1467 = 0xDCL;
                    char *l_1473 = (void*)0;
                    char **l_1472 = &l_1473;
                    for (g_147 = 0; (g_147 <= 1); g_147 += 1)
                    {
                        l_1463 = (*g_239);
                    }
                    for (g_30 = 5; (g_30 >= 0); g_30 -= 1)
                    {
                        union U0 *l_1465 = &g_816[0];
                        union U0 **l_1466 = &g_884;
                        (*l_1466) = ((safe_unary_minus_func_uint8_t_u(0x50L)) , l_1465);
                        l_1467 = ((((**g_239) = (-1L)) , (**g_239)) > l_1442[4]);
                    }
                    if ((safe_rshift_func_int16_t_s_s((((func_20(l_1470, l_1471, ((*l_1472) = l_1471), &g_391) , ((((p_16.f0 != (safe_add_func_int8_t_s_s(0x36L, p_15))) <= p_15) ^ 0x7D0532F5L) == l_1467)) == l_1442[1]) > p_16.f0), p_15)))
                    {
                        unsigned short l_1476 = 1UL;
                        (*g_239) = &l_1462;
                        return l_1476;
                    }
                    else
                    {
                        return l_1433[0];
                    }
                }
                else
                {
                    (**g_239) = (**g_239);
                    (**g_239) = (**g_239);
                    (*g_120) = (((*l_1463) = (0x7CL ^ (+l_1436))) , (safe_mul_func_uint16_t_u_u((*g_344), (safe_lshift_func_uint8_t_u_u(255UL, 5)))));
                    if (p_15)
                        continue;
                }
                for (g_654 = 0; (g_654 <= 1); g_654 += 1)
                {
                    const int l_1487[1] = {0xA6FE3073L};
                    int i, j, k;
                    (*g_120) = ((safe_add_func_uint32_t_u_u((g_203[0] , 0x476D3F0BL), (l_1455 & ((*g_283) = (safe_add_func_uint8_t_u_u((g_1335[(g_1084 + 8)][(g_82 + 5)][g_82] = 0x4BL), ((safe_mul_func_int16_t_s_s(((*l_1463) = (l_1433[0] = (0x2B0FL < (p_15 && (l_1487[0] > (~((l_1432 & (safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((g_816[0].f4 = ((void*)0 != g_390)))), (*g_344)))) , 0x29L))))))), (*g_344))) != (*g_283)))))))) , l_1436);
                }
                for (g_391 = 0; (g_391 <= 7); g_391 += 1)
                {
                    unsigned char l_1493 = 0xB8L;
                    int l_1502 = (-1L);
                    short *l_1507 = &g_1125[4][0][0];
                }
            }
            for (g_82 = 1; (g_82 <= 7); g_82 += 1)
            {
                int l_1514 = 0xD907B7BDL;
                unsigned short l_1540[4][5] = {{65535UL,65535UL,1UL,65535UL,1UL},{1UL,1UL,0xF3D3L,0xC583L,0xF3D3L},{65535UL,65535UL,1UL,65535UL,1UL},{1UL,1UL,0xF3D3L,0xC583L,0xF3D3L}};
                union U1 *l_1551[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i, j;
            }
        }
        if ((safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((l_1567[6] = ((safe_sub_func_uint16_t_u_u(((*g_344) = ((((l_1563 || ((!p_15) != l_1470.f0)) , &p_15) != (void*)0) == (l_1439 > (safe_rshift_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u((0x451B5879L <= 0xF32B944DL))), p_16.f0))))), (-10L))) > p_15)) < l_1550[3]), l_1550[2])), p_16.f0)))
        {
            unsigned l_1583[9][8][3] = {{{0x31E763C2L,0xFA9AB7BBL,0x4962D159L},{4294967288UL,0xE63B8DFCL,0x278D35ADL},{0UL,0x794BEAB3L,0xE055C214L},{0x9200581FL,1UL,8UL},{0xE055C214L,0xC7415775L,0x278D35ADL},{0xE055C214L,0xE7750A9FL,4294967295UL},{4294967291UL,4294967286UL,1UL},{4294967295UL,0xB9FAEE2DL,0xBFCD2EA6L}},{{0x31E763C2L,0xFF7910CCL,0UL},{1UL,0xD3F4A470L,0x31E763C2L},{0UL,0xFF7910CCL,4294967288UL},{1UL,0xB9FAEE2DL,0UL},{0UL,4294967286UL,0x9200581FL},{7UL,0xE7750A9FL,0x4962D159L},{4294967295UL,0xC7415775L,0x4962D159L},{0x9200581FL,1UL,0x9200581FL}},{{0UL,0x9F9EE1D6L,0UL},{0x0516D6DAL,4294967292UL,4294967288UL},{0x2DA8F08DL,4294967295UL,0x31E763C2L},{4294967295UL,4294967293UL,0UL},{0x2DA8F08DL,0xC2A9EF07L,0xBFCD2EA6L},{0x0516D6DAL,0xECEB5FD6L,1UL},{0UL,0x2779C4E7L,4294967295UL},{0x9200581FL,4294967295UL,0x278D35ADL}},{{4294967295UL,4294967295UL,8UL},{7UL,0x2779C4E7L,0x2DA8F08DL},{0UL,0xECEB5FD6L,4294967295UL},{1UL,0xC2A9EF07L,0xE055C214L},{0UL,4294967293UL,3UL},{1UL,4294967295UL,0xE055C214L},{0x31E763C2L,4294967292UL,4294967295UL},{4294967295UL,0x9F9EE1D6L,0x2DA8F08DL}},{{4294967291UL,1UL,8UL},{0xE055C214L,0xC7415775L,0x278D35ADL},{0xE055C214L,0xE7750A9FL,4294967295UL},{0x149FC66FL,8UL,0xAAF7D491L},{0x831D6386L,0UL,0x86ED3F9BL},{4294967293UL,4294967295UL,0x5AA3A3D5L},{4294967289UL,4294967295UL,4294967293UL},{0x7C7BA67EL,4294967295UL,4294967289UL}},{{0x8A338F7BL,0UL,4294967295UL},{4294967295UL,8UL,0x67FAEFD3L},{0xF8C221FDL,0UL,1UL},{4294967286UL,4294967291UL,1UL},{0x67FAEFD3L,1UL,0x67FAEFD3L},{0xD5159FB8L,0x7D24FD2CL,4294967295UL},{0UL,0x31E763C2L,4294967289UL},{0UL,0xE055C214L,4294967293UL}},{{4294967293UL,1UL,0x5AA3A3D5L},{0UL,0x0516D6DAL,0x86ED3F9BL},{0UL,0xBFCD2EA6L,0xAAF7D491L},{0xD5159FB8L,0UL,0x831D6386L},{0x67FAEFD3L,3UL,4294967287UL},{4294967286UL,3UL,0xCC151DB2L},{0xF8C221FDL,0UL,0UL},{4294967295UL,0xBFCD2EA6L,4294967286UL}},{{0x8A338F7BL,0x0516D6DAL,0xF6979443L},{0x7C7BA67EL,1UL,0x7CDAA171L},{4294967289UL,0xE055C214L,0xF6979443L},{4294967293UL,0x31E763C2L,4294967286UL},{0x831D6386L,0x7D24FD2CL,0UL},{0x149FC66FL,1UL,0xCC151DB2L},{0xF6979443L,4294967291UL,4294967287UL},{0xF6979443L,0UL,0x831D6386L}},{{0x149FC66FL,8UL,0xAAF7D491L},{0x831D6386L,0UL,0x86ED3F9BL},{4294967293UL,4294967295UL,0x7C7BA67EL},{0x7CDAA171L,7UL,4294967289UL},{0x6220D9C9L,8UL,4294967293UL},{1UL,0x78E1A9E2L,0x831D6386L},{0x831D6386L,0x9200581FL,0x149FC66FL},{0x5AA3A3D5L,0UL,0xF6979443L}}};
            union U0 *l_1584[3];
            union U1 *l_1590 = (void*)0;
            int l_1597 = 0x2926BDCCL;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1584[i] = (void*)0;
            for (g_654 = (-3); (g_654 == (-3)); g_654 = safe_add_func_int16_t_s_s(g_654, 1))
            {
                char l_1582 = 0xB3L;
                union U0 **l_1585 = &g_884;
                (*l_1585) = (((p_15 || (safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((!((l_1439 >= p_15) < 1UL)), (((**g_1000) = (((safe_add_func_int8_t_s_s((+(safe_mul_func_uint8_t_u_u(l_1432, l_1582))), p_15)) >= (-1L)) >= 0xA9664949L)) , l_1567[6]))), l_1583[6][5][2])), 6))) > p_15) , l_1584[0]);
            }
            if (l_1470.f0)
            {
                for (l_1439 = 0; (l_1439 <= 2); l_1439 += 1)
                {
                    for (g_147 = 0; (g_147 <= 2); g_147 += 1)
                    {
                        unsigned short l_1588 = 65526UL;
                        int l_1589 = (-2L);
                        l_1589 = (safe_mod_func_int16_t_s_s((l_1588 = l_1439), p_15));
                        g_88 = l_1590;
                    }
                    if (p_16.f0)
                        break;
                    for (g_1495 = 0; (g_1495 <= 2); g_1495 += 1)
                    {
                        (**g_239) = (((**g_1000) ^ 65535UL) == (~(((**g_239) & p_15) > 0xBDL)));
                        (*g_120) = p_15;
                    }
                }
            }
            else
            {
                union U1 l_1591 = {0};
                int l_1598 = 0x7335E06BL;
                union U0 l_1601 = {0x2F8BL};
                (*g_999) = (l_1601 , l_1602);
                for (g_230 = 3; (g_230 >= 0); g_230 -= 1)
                {
                    int *l_1603 = &g_71;
                    for (g_174 = 0; (g_174 <= 0); g_174 += 1)
                    {
                        (**g_239) = p_15;
                        (*g_239) = l_1603;
                        return (*l_1603);
                    }
                    for (l_1439 = 0; (l_1439 <= 4); l_1439 += 1)
                    {
                        return l_1601.f0;
                    }
                }
            }
        }
        else
        {
            union U0 l_1606 = {65535UL};
            int l_1622 = 5L;
            union U1 l_1624 = {0};
            unsigned l_1645 = 0x966AA2BDL;
            union U0 ** const l_1682 = &l_1639;
            for (l_1436 = (-3); (l_1436 != 18); ++l_1436)
            {
                int *l_1611 = &g_858.f3;
                (*g_239) = (l_1606 , (void*)0);
                if ((((safe_mul_func_uint8_t_u_u(((((*g_283) = p_15) == ((safe_add_func_int32_t_s_s(((*l_1611) = l_1606.f0), g_1494[1])) && ((l_1433[0] = p_16.f0) != (safe_sub_func_int32_t_s_s((l_1614 = 9L), (((l_1531 ^ (safe_mul_func_uint8_t_u_u(0x36L, (!(((p_16.f0 , &g_88) == (void*)0) , (-1L)))))) ^ l_1606.f0) < l_1617)))))) && l_1470.f0), p_15)) | 255UL) != l_1470.f0))
                {
                    union U1 *l_1619 = &g_851[2][3][3];
                    int l_1632[8];
                    unsigned l_1634 = 0x4A5ACEC6L;
                    union U0 *l_1638 = &g_213;
                    int i;
                    for (i = 0; i < 8; i++)
                        l_1632[i] = 0xF86EBD21L;
                    if (((*g_509) , l_1618))
                    {
                        int l_1623 = 6L;
                        l_1619 = (*g_874);
                        l_1622 = (!(safe_add_func_uint32_t_u_u(p_15, (+((l_1606.f3 = p_15) > ((*l_1611) = p_15))))));
                        (*l_1611) = (((l_1623 = (*l_1611)) & 255UL) | (((*l_1611) , (l_1624 , &g_283)) != (void*)0));
                        (*l_1611) = ((l_1624.f3 = (safe_unary_minus_func_int8_t_s(0L))) > (safe_lshift_func_uint8_t_u_s(((*g_283) = (+(((((*l_1611) == (safe_mod_func_int32_t_s_s(l_1606.f0, ((-1L) & l_1634)))) >= 3L) > 0x3560L) == l_1634))), l_1635[7][2])));
                    }
                    else
                    {
                        unsigned short l_1636[2];
                        unsigned char l_1637 = 0xD8L;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1636[i] = 0x4954L;
                        l_1624.f3 = (*l_1611);
                        l_1432 = (l_1636[0] | p_15);
                        if (l_1637)
                            continue;
                        l_1639 = l_1638;
                    }
                    for (g_71 = 7; (g_71 < 27); g_71++)
                    {
                        (*l_1611) = 0xAE62C811L;
                        (*g_239) = (*g_239);
                    }
                    for (p_15 = 0; (p_15 > 34); p_15 = safe_add_func_uint32_t_u_u(p_15, 9))
                    {
                        unsigned ***l_1644 = (void*)0;
                        g_508 = &g_509;
                        if (p_16.f0)
                            break;
                        (*g_239) = (*g_239);
                    }
                }
                else
                {
                    (*l_1611) = (2L & l_1645);
                }
            }
            if ((safe_sub_func_uint8_t_u_u((p_16.f0 > l_1563), l_1622)))
            {
                unsigned short l_1684 = 0xDC6AL;
                for (l_1436 = (-9); (l_1436 != 20); l_1436 = safe_add_func_uint16_t_u_u(l_1436, 7))
                {
                    unsigned short l_1683 = 0x3311L;
                    union U2 l_1685 = {0x9B84A7D3L};
                    int *l_1686 = (void*)0;
                    int *l_1687 = &g_47.f3;
                    (*g_239) = (*g_239);
                    (*l_1687) = (((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((**g_1000), 13)), 7)) , (l_1685 , (*g_283))) > p_16.f0);
                    (*g_239) = (void*)0;
                }
                (*g_239) = &l_1432;
            }
            else
            {
                return p_15;
            }
            return l_1433[0];
        }
        for (l_1436 = 6; (l_1436 >= 2); l_1436 -= 1)
        {
            return l_1688;
        }
    }
    else
    {
        union U2 *l_1701 = (void*)0;
        int **l_1707[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        unsigned l_1750[9];
        union U0 l_1755 = {0xD088L};
        int i;
        for (i = 0; i < 9; i++)
            l_1750[i] = 4294967295UL;
        for (g_174 = 0; (g_174 <= 0); g_174 += 1)
        {
            int l_1690[4];
            int l_1734 = 5L;
            unsigned l_1753 = 4294967295UL;
            int i;
            for (i = 0; i < 4; i++)
                l_1690[i] = 0xE0C3F200L;
            l_1690[3] = l_1689[3][0];
            (**g_239) = l_1567[6];
            for (g_377 = 1; (g_377 <= 4); g_377 += 1)
            {
                union U2 *l_1692[10] = {&g_118[0][0][0],&g_118[0][0][0],&g_118[0][0][0],&g_118[0][0][0],&g_118[0][0][0],&g_118[0][0][0],&g_118[0][0][0],&g_118[0][0][0],&g_118[0][0][0],&g_118[0][0][0]};
                union U2 **l_1691 = &l_1692[7];
                const union U0 l_1694 = {7UL};
                union U0 ** const *l_1697 = (void*)0;
                unsigned l_1699 = 4294967295UL;
                union U0 **l_1702 = &g_334[0];
                int ***l_1705[2][3][3] = {{{&g_239,&g_239,&g_239},{&g_239,&g_239,&g_239},{&g_239,&g_239,&g_239}},{{&g_239,&g_239,&g_239},{&g_239,&g_239,&g_239},{&g_239,&g_239,&g_239}}};
                const unsigned char l_1710 = 0x55L;
                int l_1711 = 0x27367B15L;
                int i, j, k;
                (*l_1691) = &p_16;
            }
        }
        (*g_239) = (l_1755 , (*g_239));
    }
    (**g_239) = p_16.f0;
    (*g_239) = &l_1433[0];
    return l_1433[0];
}







static union U0 func_20(const union U0 p_21, char * p_22, char * p_23, char * p_24)
{
    const union U0 *l_1393 = &g_816[0];
    const union U0 **l_1392[9][5][3] = {{{&l_1393,&l_1393,&l_1393},{&l_1393,&l_1393,(void*)0},{&l_1393,(void*)0,&l_1393},{&l_1393,&l_1393,&l_1393},{&l_1393,(void*)0,&l_1393}},{{(void*)0,&l_1393,&l_1393},{&l_1393,&l_1393,&l_1393},{(void*)0,&l_1393,(void*)0},{&l_1393,&l_1393,&l_1393},{&l_1393,&l_1393,(void*)0}},{{&l_1393,(void*)0,&l_1393},{&l_1393,&l_1393,&l_1393},{&l_1393,(void*)0,&l_1393},{(void*)0,&l_1393,&l_1393},{&l_1393,&l_1393,&l_1393}},{{(void*)0,&l_1393,&l_1393},{&l_1393,(void*)0,&l_1393},{&l_1393,&l_1393,&l_1393},{&l_1393,&l_1393,&l_1393},{&l_1393,&l_1393,&l_1393}},{{&l_1393,&l_1393,&l_1393},{(void*)0,&l_1393,&l_1393},{&l_1393,(void*)0,&l_1393},{(void*)0,&l_1393,&l_1393},{&l_1393,(void*)0,&l_1393}},{{&l_1393,&l_1393,&l_1393},{&l_1393,&l_1393,&l_1393},{&l_1393,&l_1393,&l_1393},{&l_1393,&l_1393,&l_1393},{(void*)0,&l_1393,&l_1393}},{{&l_1393,(void*)0,&l_1393},{(void*)0,&l_1393,&l_1393},{&l_1393,(void*)0,&l_1393},{&l_1393,&l_1393,&l_1393},{&l_1393,&l_1393,&l_1393}},{{&l_1393,&l_1393,&l_1393},{&l_1393,&l_1393,&l_1393},{(void*)0,&l_1393,&l_1393},{&l_1393,(void*)0,&l_1393},{(void*)0,&l_1393,&l_1393}},{{&l_1393,(void*)0,&l_1393},{&l_1393,&l_1393,&l_1393},{&l_1393,&l_1393,&l_1393},{&l_1393,&l_1393,&l_1393},{&l_1393,&l_1393,&l_1393}}};
    int *l_1396[8][1] = {{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75}};
    short l_1397 = (-1L);
    union U2 l_1398[9] = {{4UL},{4UL},{4UL},{4UL},{4UL},{4UL},{4UL},{4UL},{4UL}};
    char *l_1399 = &g_30;
    int l_1407 = 0x3F0F0677L;
    int i, j, k;
    g_1394[5] = &p_21;
    (*g_239) = l_1396[2][0];
    if ((0x5EL == (l_1397 > (**g_1000))))
    {
        int * const l_1400[6] = {&g_75,&g_75,&g_75,&g_75,&g_75,&g_75};
        int **l_1401 = &g_120;
        int i;
        (*l_1401) = l_1400[0];
    }
    else
    {
        char l_1406 = 0xB5L;
        union U0 **l_1410 = &g_884;
        union U0 **l_1412 = &g_334[0];
        union U0 ***l_1411 = &l_1412;
        g_855[1][1][1].f3 = ((safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((*g_120) = 0x2CABE8F7L), (l_1406 ^ l_1407))), (safe_mul_func_int8_t_s_s((*p_24), ((l_1406 < ((-5L) >= (l_1410 != ((*l_1411) = (void*)0)))) & 0x8616D18EL))))) == l_1406);
    }
    return p_21;
}







static union U0 func_25(union U1 p_26, char * p_27)
{
    unsigned short l_33 = 65529UL;
    int *l_600 = &g_381.f3;
    char *l_735 = &g_391;
    char **l_734 = &l_735;
    const short *l_1257 = &g_1125[0][0][3];
    const short *l_1259 = &g_1125[0][1][5];
    union U0 *l_1277 = &g_816[0];
    union U1 * const **l_1364[9] = {&g_872,(void*)0,&g_872,(void*)0,&g_872,(void*)0,&g_872,(void*)0,&g_872};
    union U1 **l_1366[2];
    union U1 ***l_1365[5][8][6] = {{{&l_1366[0],&l_1366[0],&l_1366[0],&l_1366[0],&l_1366[0],&l_1366[0]},{&l_1366[1],&l_1366[0],&l_1366[0],&l_1366[0],&l_1366[1],&l_1366[0]},{&l_1366[0],&l_1366[0],&l_1366[0],&l_1366[0],&l_1366[0],&l_1366[0]},{&l_1366[0],&l_1366[0],&l_1366[1],&l_1366[0],&l_1366[0],(void*)0},{(void*)0,&l_1366[0],&l_1366[0],&l_1366[1],&l_1366[0],&l_1366[1]},{&l_1366[0],&l_1366[1],&l_1366[0],(void*)0,&l_1366[0],&l_1366[0]},{&l_1366[0],&l_1366[0],(void*)0,&l_1366[1],&l_1366[0],&l_1366[0]},{&l_1366[0],(void*)0,&l_1366[0],&l_1366[0],&l_1366[0],&l_1366[1]}},{{&l_1366[1],&l_1366[0],&l_1366[0],(void*)0,&l_1366[0],(void*)0},{&l_1366[0],&l_1366[0],&l_1366[0],&l_1366[0],&l_1366[0],&l_1366[0]},{&l_1366[1],&l_1366[0],&l_1366[1],&l_1366[0],&l_1366[0],&l_1366[0]},{&l_1366[1],&l_1366[0],&l_1366[0],(void*)0,&l_1366[1],&l_1366[0]},{&l_1366[1],(void*)0,&l_1366[0],&l_1366[0],&l_1366[1],&l_1366[1]},{&l_1366[0],&l_1366[1],&l_1366[0],&l_1366[0],(void*)0,&l_1366[0]},{&l_1366[0],&l_1366[1],&l_1366[0],&l_1366[1],&l_1366[0],&l_1366[0]},{(void*)0,&l_1366[0],&l_1366[1],&l_1366[0],&l_1366[1],&l_1366[1]}},{{&l_1366[1],(void*)0,(void*)0,&l_1366[1],&l_1366[0],&l_1366[0]},{&l_1366[1],(void*)0,(void*)0,&l_1366[1],&l_1366[0],&l_1366[0]},{&l_1366[0],&l_1366[0],&l_1366[1],&l_1366[0],&l_1366[0],(void*)0},{&l_1366[0],(void*)0,&l_1366[1],&l_1366[0],&l_1366[0],(void*)0},{(void*)0,(void*)0,&l_1366[0],&l_1366[0],&l_1366[1],&l_1366[1]},{&l_1366[0],&l_1366[0],&l_1366[0],(void*)0,&l_1366[0],&l_1366[0]},{&l_1366[0],&l_1366[1],&l_1366[0],&l_1366[0],(void*)0,(void*)0},{&l_1366[0],&l_1366[1],(void*)0,(void*)0,&l_1366[1],&l_1366[0]}},{{&l_1366[0],(void*)0,&l_1366[0],&l_1366[0],&l_1366[1],&l_1366[0]},{(void*)0,&l_1366[0],&l_1366[0],&l_1366[1],&l_1366[0],&l_1366[0]},{(void*)0,&l_1366[0],&l_1366[0],&l_1366[0],&l_1366[0],&l_1366[0]},{&l_1366[0],&l_1366[0],&l_1366[0],&l_1366[0],&l_1366[0],&l_1366[0]},{&l_1366[0],&l_1366[0],&l_1366[0],(void*)0,&l_1366[1],&l_1366[0]},{&l_1366[0],&l_1366[0],&l_1366[1],&l_1366[1],&l_1366[0],(void*)0},{&l_1366[0],(void*)0,&l_1366[0],&l_1366[0],(void*)0,&l_1366[0]},{&l_1366[0],&l_1366[0],&l_1366[0],&l_1366[0],&l_1366[0],(void*)0}},{{(void*)0,&l_1366[0],&l_1366[0],&l_1366[1],(void*)0,&l_1366[0]},{&l_1366[0],(void*)0,&l_1366[0],(void*)0,&l_1366[0],(void*)0},{&l_1366[1],&l_1366[1],&l_1366[1],&l_1366[0],&l_1366[0],(void*)0},{(void*)0,&l_1366[1],(void*)0,&l_1366[0],&l_1366[0],(void*)0},{&l_1366[0],&l_1366[0],&l_1366[0],&l_1366[0],&l_1366[1],&l_1366[0]},{(void*)0,&l_1366[0],(void*)0,&l_1366[0],&l_1366[1],&l_1366[1]},{&l_1366[1],&l_1366[0],&l_1366[0],(void*)0,&l_1366[0],&l_1366[0]},{&l_1366[0],(void*)0,&l_1366[0],&l_1366[1],&l_1366[1],&l_1366[0]}}};
    const int *l_1379 = &g_851[2][3][3].f3;
    union U0 **l_1387[5];
    short l_1389 = 0x6909L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1366[i] = &g_88;
    for (i = 0; i < 5; i++)
        l_1387[i] = &l_1277;
    if ((safe_sub_func_int32_t_s_s(l_33, (func_34(p_27, ((*l_734) = func_39(l_33, (g_30 , (((((*l_600) = (((safe_mul_func_uint16_t_u_u(((*g_344) = (func_44(g_47, ((safe_sub_func_int16_t_s_s(l_33, ((safe_rshift_func_uint16_t_u_s((l_33 < (safe_mod_func_uint32_t_u_u(g_18, (safe_add_func_int8_t_s_s(func_56(l_33), 254UL))))), l_33)) && l_33))) , g_82)) > l_33)), l_33)) != g_18) == 65529UL)) , g_391) ^ l_33) <= g_230)))), g_283, l_33) , l_33))))
    {
        const short **l_1258 = &l_1257;
        int l_1262 = (-1L);
        union U1 l_1274[1][3] = {{{0},{0},{0}}};
        union U0 l_1283 = {65526UL};
        union U1 * const **l_1363[4][3][7] = {{{&g_872,&g_872,&g_874,&g_872,(void*)0,&g_874,&g_872},{&g_874,&g_872,&g_874,&g_872,&g_872,&g_874,&g_872},{&g_872,&g_872,(void*)0,&g_874,&g_872,&g_872,&g_874}},{{&g_874,&g_874,&g_872,&g_874,&g_874,&g_874,&g_872},{&g_872,&g_872,&g_874,&g_874,&g_872,&g_872,&g_874},{&g_872,&g_872,(void*)0,&g_874,(void*)0,&g_872,&g_872}},{{&g_874,&g_872,&g_874,&g_872,&g_872,&g_872,&g_872},{(void*)0,&g_872,&g_872,(void*)0,&g_874,&g_874,&g_874},{&g_872,&g_872,&g_874,&g_872,&g_872,&g_872,&g_874}},{{&g_872,&g_874,&g_874,&g_874,&g_872,&g_874,&g_874},{&g_874,&g_874,&g_874,(void*)0,&g_872,&g_874,&g_872},{&g_872,&g_874,&g_872,&g_872,&g_872,&g_874,&g_872}}};
        union U1 * const ***l_1362[10][9] = {{&l_1363[3][1][2],&l_1363[3][1][2],&l_1363[2][1][3],&l_1363[3][1][2],&l_1363[2][1][3],&l_1363[3][1][2],&l_1363[3][1][2],&l_1363[3][1][6],&l_1363[3][2][4]},{&l_1363[2][2][6],&l_1363[3][1][2],&l_1363[2][1][3],&l_1363[3][1][2],&l_1363[3][1][2],&l_1363[3][1][2],&l_1363[0][2][1],&l_1363[3][1][2],&l_1363[3][1][2]},{&l_1363[3][1][6],&l_1363[2][2][6],&l_1363[3][2][4],&l_1363[3][1][2],&l_1363[3][1][2],&l_1363[3][2][4],&l_1363[2][2][6],&l_1363[3][1][6],(void*)0},{&l_1363[0][0][0],&l_1363[3][1][2],&l_1363[3][1][2],&l_1363[3][1][6],&l_1363[3][2][4],(void*)0,(void*)0,&l_1363[0][2][1],(void*)0},{(void*)0,&l_1363[2][2][6],(void*)0,&l_1363[3][1][2],&l_1363[2][1][3],&l_1363[3][1][2],(void*)0,&l_1363[2][2][6],(void*)0},{&l_1363[3][1][2],&l_1363[3][1][2],&l_1363[3][2][4],&l_1363[3][1][2],&l_1363[2][1][3],(void*)0,&l_1363[3][1][2],(void*)0,&l_1363[0][0][1]},{&l_1363[0][2][1],(void*)0,&l_1363[3][1][2],&l_1363[0][0][0],&l_1363[3][2][4],&l_1363[3][2][4],&l_1363[0][0][0],&l_1363[3][1][2],(void*)0},{&l_1363[3][1][2],&l_1363[2][1][3],&l_1363[3][1][2],&l_1363[3][1][2],&l_1363[3][1][6],&l_1363[3][2][4],(void*)0,(void*)0,&l_1363[0][2][1]},{(void*)0,&l_1363[0][0][0],&l_1363[2][1][3],&l_1363[0][0][1],&l_1363[3][1][2],(void*)0,&l_1363[3][1][2],&l_1363[0][0][1],&l_1363[2][1][3]},{&l_1363[2][1][3],&l_1363[2][1][3],&l_1363[3][1][2],&l_1363[0][2][1],(void*)0,&l_1363[3][1][2],&l_1363[3][1][2],(void*)0,&l_1363[3][1][2]}};
        union U1 ****l_1367 = (void*)0;
        union U1 ****l_1368[6] = {&l_1365[3][1][2],&l_1365[3][1][2],&g_543,&l_1365[3][1][2],&l_1365[3][1][2],&g_543};
        union U2 *l_1369 = &g_118[6][0][0];
        unsigned l_1374 = 0x91E3DFB3L;
        int i, j, k;
        if ((((*l_1258) = l_1257) == l_1259))
        {
            unsigned short l_1273 = 0x1945L;
            int l_1276[3][2][3] = {{{0x194843F3L,(-1L),0x194843F3L},{0L,0L,0L}},{{0x194843F3L,(-1L),0x194843F3L},{0L,0L,0L}},{{0x194843F3L,(-1L),0x194843F3L},{0L,0L,0L}}};
            union U0 l_1284 = {0xA3A9L};
            int i, j, k;
            if ((safe_sub_func_uint32_t_u_u((l_1262 == 1UL), l_1262)))
            {
                int *l_1269 = &g_75;
                for (g_147 = 1; (g_147 <= 9); g_147 += 1)
                {
                    int *l_1270 = &g_75;
                    unsigned *l_1275 = &g_78.f1;
                    const union U0 *l_1278 = &g_816[0];
                    int *l_1279 = (void*)0;
                    int *l_1280 = &g_816[0].f3;
                    (*l_600) = (safe_lshift_func_uint16_t_u_s((*g_344), (l_1276[2][0][1] = ((safe_sub_func_uint8_t_u_u(((***g_999) >= (safe_mod_func_uint16_t_u_u((l_1269 == l_1270), (p_26.f2 = (*l_1270))))), (safe_mod_func_uint32_t_u_u(((*l_1270) < l_1273), ((*l_1269) , ((*l_1275) = (((l_1274[0][2] , (*p_27)) || 0x54L) & (-1L)))))))) && (-8L)))));
                    (*l_1280) = ((!((*l_600) = 2L)) != ((*l_1269) = (((-1L) > (l_1277 == l_1278)) || p_26.f1)));
                    if ((safe_mod_func_uint16_t_u_u((*l_1269), p_26.f2)))
                    {
                        if (p_26.f2)
                            break;
                        (*l_1280) = 0x2FC858D1L;
                        return l_1283;
                    }
                    else
                    {
                        return l_1284;
                    }
                }
                for (g_174 = 0; (g_174 <= 41); g_174++)
                {
                    int *l_1287 = &g_71;
                    (*g_239) = l_1287;
                    (*l_600) = 0x72704AB9L;
                }
            }
            else
            {
                unsigned *l_1296 = (void*)0;
                unsigned **l_1295 = &l_1296;
                int l_1299 = 1L;
                unsigned ***l_1313 = &l_1295;
                unsigned ****l_1312 = &l_1313;
                if ((~(safe_lshift_func_int16_t_s_u(l_1262, l_1283.f0))))
                {
                    for (g_30 = 0; (g_30 <= 6); g_30 += 1)
                    {
                        return (*g_884);
                    }
                }
                else
                {
                    int l_1304 = (-8L);
                    short *l_1316[8] = {&g_1125[0][0][3],&g_1125[0][0][3],&g_1125[0][0][3],&g_1125[0][0][3],&g_1125[0][0][3],&g_1125[0][0][3],&g_1125[0][0][3],&g_1125[0][0][3]};
                    int *l_1317 = &g_866.f3;
                    int i;
                    for (g_551 = 14; (g_551 <= 8); --g_551)
                    {
                        union U1 **l_1292 = &g_88;
                        union U1 *l_1294 = &g_850[2];
                        union U1 **l_1293 = &l_1294;
                        const unsigned short *l_1303 = &g_1209[0];
                        const unsigned short **l_1302 = &l_1303;
                        int *l_1305 = &g_876[1].f3;
                        (*l_1293) = ((*l_1292) = &p_26);
                        (*g_239) = (void*)0;
                        (*l_1305) = ((*l_600) = (!(((((*g_283) = ((void*)0 != l_1295)) ^ (l_600 == (void*)0)) , (((safe_mul_func_int8_t_s_s(l_1299, (safe_sub_func_uint16_t_u_u(l_1273, ((((~(l_1302 == ((**g_1000) , &l_1303))) != 0xB32FAEB6L) < l_1262) ^ (*p_27)))))) && 5L) | l_1304)) == l_1276[1][0][0])));
                    }
                    (*l_1317) = ((safe_rshift_func_int8_t_s_s(((((*l_600) = l_1304) <= (safe_sub_func_int32_t_s_s((((l_1304 != l_1273) > l_1299) ^ ((~(safe_sub_func_uint16_t_u_u(l_1276[1][1][1], (~((((void*)0 != l_1312) | (((l_1262 = ((!(safe_add_func_uint32_t_u_u((&g_946[1] != (*l_1313)), l_1262))) == (***g_999))) || 65528UL) > 0x43230857L)) , (***g_999)))))) | l_33)), 0xBF34209BL))) | 0xF9L), (*p_27))) < (-10L));
                    if ((l_1262 , (*l_600)))
                    {
                        (*l_600) = l_1262;
                    }
                    else
                    {
                        unsigned short ** const l_1318[6] = {&g_344,&g_344,&g_344,&g_344,&g_344,&g_344};
                        unsigned short ***l_1319 = &g_1000;
                        int i;
                        (*l_1319) = l_1318[3];
                    }
                }
                return (*l_1277);
            }
            (*g_239) = &g_75;
        }
        else
        {
            unsigned l_1324 = 4294967286UL;
            int *l_1336 = &g_381.f3;
            for (g_174 = 8; (g_174 != 27); g_174++)
            {
                char l_1329 = 0xDAL;
                short *l_1353 = (void*)0;
                int l_1359 = 0x86F17DFDL;
                for (l_1262 = 0; (l_1262 == (-4)); --l_1262)
                {
                    unsigned l_1332[8] = {0xD66BE21FL,0x35C46CEDL,0xD66BE21FL,0x35C46CEDL,0xD66BE21FL,0x35C46CEDL,0xD66BE21FL,0x35C46CEDL};
                    const int *l_1337 = &g_1338;
                    short *l_1351 = &g_1125[1][0][5];
                    int l_1357[8];
                    union U0 * const l_1358 = &g_885[1][7][0];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_1357[i] = 0x34D37E0AL;
                    if (l_1262)
                        break;
                    if (((*g_283) < ((*p_27) = ((p_26 , l_1324) , 0L))))
                    {
                        short *l_1333 = (void*)0;
                        short *l_1334[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_1334[i] = &g_865.f2;
                        (*l_600) = (safe_rshift_func_int8_t_s_s((*p_27), (safe_mul_func_uint16_t_u_u((l_1283.f0 ^ 255UL), (l_1324 | ((void*)0 == &g_203[0]))))));
                        (*l_600) = 0xDDBF7B54L;
                        (*l_600) = (g_551 < ((g_1335[2][5][0] = (l_1329 >= ((***g_999) = (safe_sub_func_int32_t_s_s(l_1324, (l_1332[4] & l_1283.f0)))))) == l_1332[3]));
                        (*g_239) = l_1336;
                    }
                    else
                    {
                        const int *l_1340 = &l_1262;
                        const int **l_1339 = &l_1340;
                        (*l_1336) = (0L != 0x81L);
                        (*l_1339) = (l_1337 = &g_71);
                        if (l_1283.f0)
                            break;
                        if ((*l_1337))
                            break;
                    }
                    if ((2UL == ((*l_1337) < ((*l_1336) <= 0x5475B0EEL))))
                    {
                        (*g_239) = &l_1262;
                    }
                    else
                    {
                        short **l_1352 = (void*)0;
                        int l_1356 = 8L;
                        l_1359 = ((*l_1336) = (safe_sub_func_uint16_t_u_u((***g_999), (*l_600))));
                    }
                }
                for (l_1329 = 23; (l_1329 >= (-23)); l_1329--)
                {
                    if (l_1262)
                        break;
                }
            }
        }
        l_1369 = ((((l_1364[1] = &g_872) == (l_1365[3][3][4] = l_1365[0][5][1])) && l_1262) , l_1369);
        for (g_551 = 0; (g_551 != 3); g_551 = safe_add_func_uint32_t_u_u(g_551, 1))
        {
            char l_1377 = 3L;
            const int *l_1378[2];
            int i;
            for (i = 0; i < 2; i++)
                l_1378[i] = &g_75;
            for (g_71 = 0; (g_71 <= (-22)); g_71--)
            {
                union U0 l_1384 = {7UL};
                (*g_239) = &l_1262;
                if (l_1374)
                {
                    for (g_147 = 0; (g_147 >= 11); ++g_147)
                    {
                        (**g_239) = l_1377;
                        return l_1283;
                    }
                    l_1379 = l_1378[1];
                }
                else
                {
                    (*g_239) = &l_1262;
                    (*g_239) = (*g_239);
                }
                (*g_239) = (void*)0;
                for (g_1110 = 6; (g_1110 == 25); ++g_1110)
                {
                    for (g_391 = 0; g_391 < 7; g_391 += 1)
                    {
                        g_334[g_391] = &g_78;
                    }
                    for (g_230 = 23; (g_230 != (-24)); g_230--)
                    {
                        return l_1384;
                    }
                    for (g_377 = 19; (g_377 < 45); g_377 = safe_add_func_int16_t_s_s(g_377, 8))
                    {
                        (*g_239) = (*g_239);
                        if (l_1262)
                            break;
                        g_334[0] = &g_381;
                    }
                }
            }
        }
    }
    else
    {
        union U1 ***l_1388 = &l_1366[0];
        (*g_239) = ((&g_872 != (((l_1387[0] = &l_1277) != &l_1277) , l_1388)) , l_600);
    }
    if ((&g_118[4][1][0] != (l_1389 , &g_118[0][0][0])))
    {
        int *l_1390[9][2][8] = {{{(void*)0,&g_71,&g_381.f3,&g_75,&g_75,&g_71,(void*)0,&g_75},{(void*)0,&g_75,&g_381.f3,&g_75,&g_381.f3,(void*)0,&g_381.f3,&g_75}},{{(void*)0,&g_71,(void*)0,&g_71,&g_71,&g_71,&g_71,&g_71},{&g_71,&g_71,&g_71,&g_381.f3,&g_71,&g_75,&g_71,&g_71}},{{&g_71,&g_75,&g_71,&g_71,&g_71,&g_71,&g_75,(void*)0},{(void*)0,&g_75,(void*)0,&g_75,&g_381.f3,&g_381.f3,(void*)0,&g_75}},{{(void*)0,(void*)0,&g_71,&g_75,&g_75,&g_71,&g_71,&g_381.f3},{(void*)0,&g_75,&g_381.f3,(void*)0,&g_75,&g_71,&g_75,(void*)0}},{{&g_381.f3,&g_75,(void*)0,&g_381.f3,(void*)0,&g_75,&g_71,(void*)0},{&g_75,&g_71,(void*)0,(void*)0,&g_71,&g_71,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_71,&g_75,&g_71,&g_75,&g_75,&g_71},{&g_71,(void*)0,&g_75,&g_71,&g_75,&g_75,&g_381.f3,&g_71}},{{(void*)0,&g_71,&g_381.f3,&g_75,&g_71,&g_71,(void*)0,&g_381.f3},{&g_381.f3,&g_71,(void*)0,&g_381.f3,&g_75,(void*)0,(void*)0,(void*)0}},{{&g_75,(void*)0,&g_71,&g_381.f3,&g_71,&g_75,&g_75,&g_71},{(void*)0,&g_381.f3,&g_71,(void*)0,&g_71,(void*)0,&g_71,&g_71}},{{&g_75,&g_71,&g_381.f3,(void*)0,(void*)0,&g_71,&g_75,&g_75},{&g_71,&g_71,&g_75,(void*)0,&g_381.f3,(void*)0,&g_75,&g_71}}};
        int i, j, k;
        (*l_600) = (-2L);
        (*g_239) = l_1390[6][1][1];
        (*g_239) = l_1390[6][1][1];
    }
    else
    {
        union U1 *l_1391 = &g_851[2][3][3];
        l_1391 = (void*)0;
        (*g_239) = l_600;
    }
    (*g_239) = (void*)0;
    return (*g_884);
}







static int func_34(char * p_35, char * p_36, char * p_37, int p_38)
{
    union U1 l_736 = {0};
    union U2 *l_738 = &g_118[0][0][0];
    union U2 **l_737 = &l_738;
    int l_745 = 7L;
    union U0 l_759[5] = {{1UL},{1UL},{1UL},{1UL},{1UL}};
    unsigned char l_769 = 1UL;
    unsigned * const *l_881 = &g_509;
    union U1 **l_882 = &g_88;
    unsigned l_893[9] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
    const union U1 *l_917[4][4][3] = {{{&g_855[1][5][2],&g_850[3],&g_855[1][5][2]},{&g_865,&g_865,&g_867},{&g_869,&g_850[3],&g_869},{&g_865,&g_867,&g_867}},{{&g_855[1][5][2],&g_850[3],&g_855[1][5][2]},{&g_865,&g_865,&g_867},{&g_869,&g_850[3],&g_869},{&g_865,&g_867,&g_867}},{{&g_855[1][5][2],&g_850[3],&g_855[1][5][2]},{&g_865,&g_865,&g_867},{&g_869,&g_850[3],&g_869},{&g_865,&g_867,&g_867}},{{&g_855[1][5][2],&g_850[3],&g_855[1][5][2]},{&g_865,&g_865,&g_867},{&g_869,&g_850[3],&g_869},{&g_865,&g_867,&g_867}}};
    unsigned short **l_921 = &g_344;
    const int *l_1046 = &g_866.f3;
    unsigned l_1145 = 0xF08F04C4L;
    unsigned char l_1193 = 249UL;
    short **l_1235 = &g_371[3][1][0];
    unsigned short l_1247 = 65530UL;
    unsigned short l_1254 = 0x89CFL;
    int i, j, k;
    if (((p_38 ^ (((~(*g_509)) , l_737) != &l_738)) > (safe_sub_func_uint32_t_u_u((g_174 , p_38), (((*g_283) = (safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((l_745 & l_745) | p_38), l_745)), 0xE1BB39B3L))) != l_745)))))
    {
        int *l_746 = &g_381.f3;
        union U1 l_749 = {0};
        union U2 **l_787 = &l_738;
        union U0 *l_815 = &g_816[0];
        int l_840 = 0L;
        unsigned l_841 = 0UL;
        unsigned short ***l_960 = (void*)0;
        const union U0 l_966 = {0xD315L};
        union U1 *l_973 = (void*)0;
        unsigned char l_974 = 0x7BL;
        union U1 l_985 = {0};
        unsigned l_994 = 0xFD46635FL;
        const int l_995[10] = {1L,1L,3L,1L,1L,3L,1L,1L,3L,1L};
        unsigned *l_1134 = &g_82;
        unsigned **l_1133 = &l_1134;
        char l_1152 = 1L;
        union U0 **l_1191 = &g_334[3];
        union U0 ***l_1190 = &l_1191;
        short **l_1253[9] = {&g_371[7][2][1],&g_371[7][2][1],&g_371[7][2][1],&g_371[7][2][1],&g_371[7][2][1],&g_371[7][2][1],&g_371[7][2][1],&g_371[7][2][1],&g_371[7][2][1]};
        int i;
        (*g_239) = l_746;
        if ((safe_rshift_func_int16_t_s_s((p_38 != 0xBCL), p_38)))
        {
            char l_777 = 0x50L;
            int * const l_778[1] = {&g_700.f3};
            char l_781[10];
            union U1 l_799 = {0};
            const union U0 l_811 = {0UL};
            union U0 **l_814[10][7][2] = {{{&g_334[3],(void*)0},{&g_334[0],&g_334[0]},{&g_334[6],&g_334[6]},{&g_334[0],&g_334[3]},{(void*)0,(void*)0},{(void*)0,&g_334[0]},{(void*)0,&g_334[0]}},{{&g_334[0],&g_334[0]},{&g_334[0],(void*)0},{&g_334[5],&g_334[0]},{&g_334[5],&g_334[6]},{&g_334[0],&g_334[0]},{(void*)0,&g_334[0]},{&g_334[0],&g_334[0]}},{{(void*)0,&g_334[0]},{&g_334[0],&g_334[6]},{&g_334[5],&g_334[0]},{&g_334[5],(void*)0},{&g_334[0],&g_334[0]},{&g_334[0],&g_334[0]},{(void*)0,&g_334[0]}},{{(void*)0,(void*)0},{(void*)0,&g_334[3]},{&g_334[0],&g_334[0]},{&g_334[6],&g_334[3]},{&g_334[5],&g_334[0]},{(void*)0,(void*)0},{&g_334[0],&g_334[0]}},{{&g_334[5],&g_334[5]},{&g_334[6],(void*)0},{&g_334[0],&g_334[6]},{&g_334[0],&g_334[5]},{&g_334[0],&g_334[6]},{&g_334[0],(void*)0},{&g_334[6],&g_334[5]}},{{&g_334[5],&g_334[0]},{&g_334[0],(void*)0},{(void*)0,&g_334[0]},{&g_334[5],&g_334[3]},{&g_334[6],&g_334[0]},{&g_334[2],&g_334[5]},{&g_334[6],&g_334[3]}},{{&g_334[3],&g_334[0]},{&g_334[0],&g_334[3]},{(void*)0,&g_334[6]},{(void*)0,&g_334[6]},{&g_334[0],(void*)0},{(void*)0,&g_334[0]},{&g_334[0],&g_334[2]}},{{&g_334[0],&g_334[0]},{(void*)0,&g_334[0]},{&g_334[0],&g_334[2]},{&g_334[0],&g_334[0]},{(void*)0,(void*)0},{&g_334[0],&g_334[6]},{(void*)0,&g_334[6]}},{{(void*)0,&g_334[3]},{&g_334[0],&g_334[0]},{&g_334[3],&g_334[3]},{&g_334[6],&g_334[5]},{&g_334[2],&g_334[0]},{&g_334[6],&g_334[3]},{&g_334[5],&g_334[0]}},{{(void*)0,(void*)0},{&g_334[0],&g_334[0]},{&g_334[5],&g_334[5]},{&g_334[6],(void*)0},{&g_334[0],&g_334[6]},{&g_334[0],&g_334[5]},{&g_334[0],&g_334[6]}}};
            int **l_817 = &l_746;
            int *l_821[2];
            int i, j, k;
            for (i = 0; i < 10; i++)
                l_781[i] = 1L;
            for (i = 0; i < 2; i++)
                l_821[i] = &l_736.f3;
            for (g_654 = 14; (g_654 >= (-30)); --g_654)
            {
                unsigned *l_754 = (void*)0;
                unsigned *l_755 = &g_78.f4;
                const int l_756[6][8] = {{0xE93256D0L,1L,0x8CE91BF1L,0x42A3C594L,0xED688FA8L,(-1L),0xE93256D0L,0x4209A0DFL},{0xD705AFFAL,0xAEA5B71CL,(-1L),0xBB1A6358L,0x8CE91BF1L,0x006BBE13L,0x4209A0DFL,0x006BBE13L},{0xA3530A74L,0xAEA5B71CL,0xE93256D0L,0xAEA5B71CL,0xA3530A74L,(-1L),0x42A3C594L,0L},{(-1L),0x8CE91BF1L,0xA3530A74L,0x76D81C6DL,0x1FBC6D28L,0xED688FA8L,0xAEA5B71CL,0xAEA5B71CL},{0x4209A0DFL,0xF45B2A14L,0xA3530A74L,0xA3530A74L,0xF45B2A14L,0x4209A0DFL,0x42A3C594L,0x1FBC6D28L},{0x1FBC6D28L,0x006BBE13L,0xE93256D0L,0L,0xAEA5B71CL,0x76D81C6DL,0x4209A0DFL,(-1L)}};
                unsigned *l_760 = &g_700.f1;
                short ***l_770 = &g_370;
                union U0 l_775 = {0x273DL};
                union U1 l_805 = {0};
                int i, j;
                for (g_71 = 0; g_71 < 7; g_71 += 1)
                {
                    for (g_551 = 0; g_551 < 2; g_551 += 1)
                    {
                        for (g_230 = 0; g_230 < 1; g_230 += 1)
                        {
                            union U2 tmp = {0UL};
                            g_118[g_71][g_551][g_230] = tmp;
                        }
                    }
                }
            }
            l_815 = (void*)0;
            (*l_817) = l_778[0];
            for (g_654 = 0; (g_654 <= 19); g_654 = safe_add_func_int32_t_s_s(g_654, 9))
            {
                unsigned char *l_820 = &g_174;
                (*g_120) = ((*l_746) = (l_820 != (((void*)0 != l_778[0]) , p_35)));
                (*l_817) = (*l_817);
                l_821[1] = (*g_239);
                for (g_391 = 0; (g_391 <= 9); g_391 += 1)
                {
                    int i;
                }
            }
        }
        else
        {
            union U1 **l_830 = (void*)0;
            int l_833 = 0xB5E0DE6BL;
            g_88 = (p_38 , &l_749);
            for (l_745 = 0; (l_745 > 11); l_745++)
            {
                (*g_239) = (l_746 = (*g_239));
            }
            (*g_239) = (*g_239);
            l_833 = ((**g_239) = p_38);
        }
        if ((((((g_71 & ((p_38 > ((((safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((p_38 == (safe_sub_func_int16_t_s_s(l_759[2].f0, (-1L)))), (((*g_283) = (l_745 | (&g_508 == ((*g_120) , (void*)0)))) && 5L))), p_38)) >= l_840) < (-7L)) ^ l_769)) | p_38)) || 0x7EL) | l_841) , p_38) >= l_745))
        {
            short l_846 = 0xCDE6L;
            unsigned l_918 = 4294967294UL;
            int l_928 = 0xEEEA7008L;
            union U1 l_938 = {0};
            short * const *l_949[2];
            short * const ** const l_948[10] = {&l_949[1],&l_949[1],&l_949[1],&l_949[1],&l_949[1],&l_949[1],&l_949[1],&l_949[1],&l_949[1],&l_949[1]};
            int *l_950 = &g_855[1][1][1].f3;
            union U2 **l_956 = (void*)0;
            union U1 l_959 = {0};
            int i;
            for (i = 0; i < 2; i++)
                l_949[i] = &g_371[7][2][0];
            for (g_654 = 0; (g_654 <= 1); g_654 += 1)
            {
                unsigned **l_880 = &g_509;
                int l_896 = 0xE4422DF0L;
                union U2 *l_932 = (void*)0;
                union U1 l_942 = {0};
                int *l_951 = &g_868.f3;
                union U1 *l_971[7] = {&l_959,&l_959,&l_959,&l_959,&l_959,&l_959,&l_959};
                union U1 **l_972[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
            }
            (*g_120) = p_38;
            for (l_745 = 0; l_745 < 9; l_745 += 1)
            {
                l_893[l_745] = 0x86B41107L;
            }
            for (g_230 = 6; (g_230 >= 0); g_230 -= 1)
            {
                int *l_977 = &l_745;
                for (l_841 = 0; (l_841 <= 6); l_841 += 1)
                {
                    short l_975 = 0xBE76L;
                    union U0 **l_976 = &g_884;
                    int i;
                    (*g_239) = (void*)0;
                    for (l_745 = 1; (l_745 >= 0); l_745 -= 1)
                    {
                        if (l_974)
                            break;
                        if (l_975)
                            continue;
                    }
                    (*l_976) = (g_334[l_841] = g_334[g_230]);
                    (*g_239) = l_977;
                }
            }
        }
        else
        {
            int *l_984 = &l_840;
            unsigned short ***l_998 = (void*)0;
            if ((p_38 >= p_38))
            {
                short l_983[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_983[i] = 0xC1AFL;
                (*l_787) = (void*)0;
                for (g_391 = 0; (g_391 < 27); g_391 = safe_add_func_uint16_t_u_u(g_391, 4))
                {
                    union U1 l_980 = {0};
                    l_983[2] = ((*g_120) = (((~4294967292UL) , (1UL > ((l_980 , 1UL) & ((-7L) || p_38)))) | ((*p_37) = (p_38 ^ (safe_lshift_func_uint8_t_u_u(((*g_344) | p_38), 2))))));
                }
                (*g_239) = l_984;
            }
            else
            {
                int *l_1001 = &g_654;
                int l_1002[8][9] = {{0xEB1528A6L,0xEB1528A6L,0xEB1528A6L,0xEB1528A6L,0xEB1528A6L,0xEB1528A6L,0xEB1528A6L,0xEB1528A6L,0xEB1528A6L},{0xDBE9DA2FL,0xDBE9DA2FL,0xDBE9DA2FL,0xDBE9DA2FL,0xDBE9DA2FL,0xDBE9DA2FL,0xDBE9DA2FL,0xDBE9DA2FL,0xDBE9DA2FL},{0xEB1528A6L,0xEB1528A6L,0xEB1528A6L,0xEB1528A6L,0xEB1528A6L,0xEB1528A6L,0xEB1528A6L,0xEB1528A6L,0xEB1528A6L},{0xDBE9DA2FL,0xDBE9DA2FL,0xDBE9DA2FL,0xDBE9DA2FL,0xDBE9DA2FL,0xDBE9DA2FL,0xDBE9DA2FL,0xDBE9DA2FL,0xDBE9DA2FL},{0xEB1528A6L,0xEB1528A6L,0xEB1528A6L,0xEB1528A6L,0xEB1528A6L,0xEB1528A6L,0xEB1528A6L,0xEB1528A6L,0xEB1528A6L},{0xDBE9DA2FL,0xDBE9DA2FL,0xDBE9DA2FL,0xDBE9DA2FL,0xDBE9DA2FL,0xDBE9DA2FL,0xDBE9DA2FL,0xDBE9DA2FL,0xDBE9DA2FL},{0xEB1528A6L,0xEB1528A6L,0xEB1528A6L,0xEB1528A6L,0xEB1528A6L,0xEB1528A6L,0xEB1528A6L,0xEB1528A6L,0xEB1528A6L},{0xDBE9DA2FL,0xDBE9DA2FL,0xDBE9DA2FL,0xDBE9DA2FL,0xDBE9DA2FL,0xDBE9DA2FL,0xDBE9DA2FL,0xDBE9DA2FL,0xDBE9DA2FL}};
                union U1 l_1021 = {0};
                int l_1028[8] = {(-1L),8L,8L,(-1L),8L,8L,(-1L),8L};
                int **l_1062 = (void*)0;
                unsigned l_1071 = 0x6F161CEDL;
                union U0 *l_1076 = (void*)0;
                int i, j;
                (*l_746) = 0x7BEBCBD1L;
                if (((p_38 == 0xABL) | (*g_283)))
                {
                    int l_1003 = (-1L);
                    int l_1019 = (-1L);
                    union U2 *l_1020 = &g_118[0][0][0];
                    unsigned *l_1037 = &g_885[1][7][0].f1;
                    if (l_1002[2][7])
                    {
                        l_746 = &l_745;
                        (*l_746) = (((*g_120) = (l_1003 , (safe_mod_func_int8_t_s_s((*p_35), ((*g_283) = (safe_mod_func_uint8_t_u_u((~p_38), (((safe_sub_func_int16_t_s_s((-1L), ((**g_1000) = ((*l_984) >= 0x2B74L)))) && p_38) , (safe_mod_func_uint8_t_u_u(p_38, 0x85L)))))))))) <= p_38);
                        (*l_746) = (*l_984);
                    }
                    else
                    {
                        char l_1014 = 0x8EL;
                        (*l_984) = ((((**g_239) = (((((*g_283) = ((((*g_344) || (safe_rshift_func_uint16_t_u_u(l_1014, p_38))) ^ (l_1003 <= (safe_rshift_func_uint16_t_u_u(1UL, 5)))) | (((safe_add_func_int16_t_s_s(((0x0D35L > (p_38 , (l_759[2] , p_38))) || l_1003), 0xA6A0L)) , l_1002[2][0]) && l_1019))) , 0xB10FA54AL) == g_377) && 9L)) ^ 0x8D4E244EL) == p_38);
                        (*g_239) = &l_1003;
                        (*l_737) = (*l_787);
                    }
                    for (g_147 = 1; (g_147 >= 0); g_147 -= 1)
                    {
                        int l_1024 = 0x3A96837AL;
                        short *l_1027[6] = {&g_147,&g_147,&g_147,&g_147,&g_147,&g_147};
                        int i;
                        (*l_737) = l_1020;
                        (*l_737) = &g_118[6][1][0];
                        (*l_746) = (+(p_38 & ((((l_1002[6][2] = (***g_999)) , ((safe_add_func_int16_t_s_s((*l_984), l_1024)) && l_893[1])) != (~(l_1028[3] & (-9L)))) , (**g_1000))));
                    }
                    if (p_38)
                    {
                        return p_38;
                    }
                    else
                    {
                        const int *l_1045[4] = {&l_995[1],&l_995[1],&l_995[1],&l_995[1]};
                        const int **l_1044[9][6] = {{&l_1045[1],&l_1045[0],&l_1045[1],&l_1045[0],&l_1045[3],&l_1045[3]},{&l_1045[0],&l_1045[3],&l_1045[0],&l_1045[0],&l_1045[2],&l_1045[3]},{&l_1045[0],(void*)0,&l_1045[1],&l_1045[2],&l_1045[3],&l_1045[3]},{&l_1045[2],&l_1045[0],&l_1045[0],&l_1045[2],&l_1045[0],&l_1045[0]},{&l_1045[2],&l_1045[1],(void*)0,&l_1045[0],&l_1045[0],&l_1045[0]},{&l_1045[0],&l_1045[0],&l_1045[0],&l_1045[0],&l_1045[0],&l_1045[0]},{&l_1045[0],&l_1045[0],&l_1045[0],&l_1045[0],&l_1045[3],&l_1045[0]},{&l_1045[0],&l_1045[0],&l_1045[0],(void*)0,&l_1045[0],&l_1045[0]},{&l_1045[0],&l_1045[2],&l_1045[1],&l_1045[0],&l_1045[1],&l_1045[0]}};
                        unsigned l_1047 = 1UL;
                        int i, j;
                        l_1046 = &l_995[5];
                        (**g_239) = (*l_1046);
                    }
                }
                else
                {
                    union U2 l_1058 = {0xDC7FA31AL};
                    unsigned char *l_1059 = &g_876[1].f1;
                    int **l_1060 = (void*)0;
                    int ***l_1061[1][7][2] = {{{&l_1060,(void*)0},{&l_1060,(void*)0},{&l_1060,(void*)0},{&l_1060,(void*)0},{&l_1060,(void*)0},{&l_1060,(void*)0},{&l_1060,(void*)0}}};
                    union U0 **l_1077 = (void*)0;
                    union U0 **l_1078 = &g_334[0];
                    int i, j, k;
                    for (g_75 = (-11); (g_75 != 15); g_75++)
                    {
                        (*l_984) = l_1002[2][7];
                        (**g_239) = p_38;
                    }
                    (**g_239) = (safe_sub_func_int8_t_s_s(((((*g_283) = (safe_sub_func_uint16_t_u_u(0xE15BL, (*g_344)))) , (*l_984)) & (safe_add_func_uint8_t_u_u(((*l_1059) = ((safe_mod_func_uint8_t_u_u(l_1028[3], (p_38 || 0x50L))) > (&g_120 != (l_1058 , (void*)0)))), 247UL))), 0xDEL));
                    l_1062 = l_1060;
                    (*l_1078) = ((safe_mod_func_int8_t_s_s(0x43L, (safe_mod_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((*l_984), (safe_mul_func_uint8_t_u_u(0xF3L, (l_1071 > (*l_984)))))) , (0x3CL >= (safe_add_func_uint8_t_u_u(((*g_283) = ((safe_add_func_uint8_t_u_u((((+(*l_984)) | p_38) & p_38), 0x05L)) , p_38)), (*l_984))))), 0xCC45L)))) , l_1076);
                }
                if ((p_38 , ((*l_984) = (*l_984))))
                {
                    unsigned l_1081[2][1];
                    unsigned *l_1082 = &g_381.f4;
                    unsigned **l_1083 = &l_1082;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1081[i][j] = 0x9F3FEEC5L;
                    }
                    (*l_746) = 0xD3D63025L;
                    (*l_746) = (g_1084 = p_38);
                }
                else
                {
                    union U0 *l_1088 = (void*)0;
                    int *l_1092 = (void*)0;
                    if (p_38)
                    {
                        int *l_1085 = &l_1002[0][8];
                        union U0 *l_1086 = (void*)0;
                        union U0 **l_1087[3][1];
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1087[i][j] = &g_884;
                        }
                        (*g_239) = l_1085;
                        l_1088 = (l_1086 = &g_816[0]);
                        (*l_746) = (**g_239);
                    }
                    else
                    {
                        unsigned short l_1089 = 1UL;
                        (*l_984) = 0xC3786DD7L;
                        (*g_239) = (void*)0;
                        return l_1089;
                    }
                    if ((safe_sub_func_uint8_t_u_u((*g_283), (*l_984))))
                    {
                        (*l_984) = (-5L);
                        (*g_239) = (*g_239);
                    }
                    else
                    {
                        (*g_239) = l_1092;
                        (*g_239) = (*g_239);
                    }
                }
                (*l_737) = &g_118[1][1][0];
            }
        }
        for (g_654 = 0; (g_654 <= 3); g_654 += 1)
        {
            short l_1108 = 0x49C9L;
            int **l_1109[1];
            unsigned *l_1131 = &g_551;
            unsigned **l_1130 = &l_1131;
            const union U1 l_1175[10] = {{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}};
            union U1 ***l_1233 = &l_882;
            char l_1248[8] = {(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)};
            int i;
            for (i = 0; i < 1; i++)
                l_1109[i] = &g_120;
            if ((safe_sub_func_uint8_t_u_u(p_38, (((g_1110 = ((*g_344) >= ((safe_unary_minus_func_int16_t_s((-1L))) | (safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((~(*p_35)), 1)), (0x42L || (safe_rshift_func_uint16_t_u_u(((***g_999) >= 0UL), ((((safe_mod_func_uint16_t_u_u((!((*l_746) = (safe_rshift_func_int8_t_s_u((((safe_mod_func_int32_t_s_s(l_1108, (-7L))) <= 0x096FL) & p_38), p_38)))), (***g_999))) , l_1109[0]) != &l_1046) > p_38))))))))) <= 6L) , p_38))))
            {
                union U0 *l_1111 = &g_700;
                int *l_1128[10] = {&l_840,&l_840,&g_75,&l_840,&l_840,&g_75,&l_840,&l_840,&g_75,&l_840};
                int i;
                for (g_30 = 0; (g_30 <= 3); g_30 += 1)
                {
                    union U0 **l_1112 = (void*)0;
                    union U0 **l_1113 = &g_884;
                    union U2 l_1126 = {0UL};
                    (*l_1113) = l_1111;
                    (*l_746) = p_38;
                    for (g_71 = 0; (g_71 <= 2); g_71 += 1)
                    {
                        char *l_1119 = &g_391;
                        char **l_1118 = &l_1119;
                        int l_1122 = 0x24F3928DL;
                        union U2 *l_1127 = &g_118[0][0][0];
                        int i, j, k;
                        g_876[1].f3 = p_38;
                        l_749.f3 = ((safe_add_func_int8_t_s_s((-9L), (safe_rshift_func_int8_t_s_u((-1L), (((*l_1118) = p_36) != (void*)0))))) && ((*l_746) = p_38));
                        l_745 = (safe_lshift_func_int16_t_s_s((!p_38), (p_38 > (l_1122 || ((*l_1111) , p_38)))));
                        (*g_239) = ((safe_add_func_int8_t_s_s(((l_1122 , g_851[g_30][g_654][g_654]) , (g_1125[0][0][3] = (*p_37))), (-1L))) , (((*l_1127) = l_1126) , l_1128[2]));
                    }
                }
                if (p_38)
                    continue;
            }
            else
            {
                unsigned char l_1129 = 0x97L;
                unsigned ***l_1132 = &l_1130;
                unsigned ***l_1135 = &l_1133;
                int l_1136 = 0L;
                int l_1137 = 0xFF9715FCL;
                int l_1144[2][4];
                int *l_1147 = &g_864.f3;
                unsigned **l_1162 = &g_509;
                int *l_1166 = &g_853.f3;
                const union U0 * const l_1176 = &l_759[2];
                const int *l_1180 = (void*)0;
                unsigned short l_1181 = 0xA96BL;
                union U1 ***l_1232[3];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_1144[i][j] = 0x4552DB92L;
                }
                for (i = 0; i < 3; i++)
                    l_1232[i] = (void*)0;
                if ((((l_1129 || ((***g_999) = ((((((*l_1132) = l_1130) == ((*l_1135) = l_1133)) < ((l_1137 = (l_1136 = p_38)) || ((4294967295UL & (p_38 != p_38)) || p_38))) && (safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s(l_1144[1][2], l_1137)), l_1145)), (*g_344)))) || p_38))) < 0x1EA2L) == 0xC5L))
                {
                    int *l_1146 = &l_1137;
                    l_1147 = l_1146;
                    if (p_38)
                        break;
                }
                else
                {
                    union U1 l_1153 = {0};
                    unsigned char l_1167 = 1UL;
                    (*l_746) = ((*l_1147) = p_38);
                    if (p_38)
                        continue;
                    if (((*p_35) & (0L == p_38)))
                    {
                        const union U0 **l_1148 = (void*)0;
                        const union U0 **l_1149 = (void*)0;
                        const union U0 *l_1151 = &g_816[0];
                        const union U0 **l_1150 = &l_1151;
                        int l_1163[6] = {(-1L),0xBE6E436AL,0xBE6E436AL,(-1L),0xBE6E436AL,0xBE6E436AL};
                        const unsigned *l_1169 = (void*)0;
                        const unsigned **l_1168[8] = {&l_1169,(void*)0,(void*)0,&l_1169,(void*)0,(void*)0,&l_1169,(void*)0};
                        int *l_1170 = &g_230;
                        int i;
                        (*l_1150) = &l_966;
                        l_745 = l_1152;
                        (*l_1147) = 0xDFF9745BL;
                        (*l_746) = (((((l_1163[4] | p_38) > (*l_1147)) , 0xBCBA2B13L) == 0x6B0AE752L) < p_38);
                    }
                    else
                    {
                        const union U0 *l_1178 = &g_700;
                        const union U0 **l_1177 = &l_1178;
                        if (p_38)
                            break;
                        (*l_746) = (safe_rshift_func_uint8_t_u_s((p_38 & 0x37B8D750L), 1));
                        (*l_1177) = ((safe_lshift_func_int8_t_s_u((&g_75 == (l_1175[4] , (void*)0)), p_38)) , l_1176);
                    }
                }
                (*l_882) = &l_736;
                for (g_1110 = 0; (g_1110 <= 2); g_1110 += 1)
                {
                    const int **l_1179 = (void*)0;
                    union U2 *l_1192 = &g_118[4][1][0];
                    for (g_30 = 0; (g_30 <= 0); g_30 += 1)
                    {
                        if (g_816[0].f0)
                            break;
                    }
                    l_1180 = &l_995[2];
                    if (p_38)
                    {
                        int *l_1182 = &l_1144[1][2];
                        if (l_1145)
                            break;
                        l_1182 = &l_745;
                    }
                    else
                    {
                        short l_1183 = 0x59A6L;
                        (*g_239) = &l_840;
                        l_746 = (void*)0;
                        return l_1183;
                    }
                    if (p_38)
                        break;
                    for (l_974 = 0; (l_974 <= 3); l_974 += 1)
                    {
                        unsigned short l_1206 = 0x0B5DL;
                        unsigned *l_1207 = (void*)0;
                        unsigned *l_1208[10] = {&l_841,&l_841,&l_841,&l_841,&l_841,&l_841,&l_841,&l_841,&l_841,&l_841};
                        int i, j, k;
                        (*l_746) = (0xC0413D8AL < ((g_851[g_654][g_654][l_974] , p_38) < (safe_mod_func_int16_t_s_s((p_38 , (safe_mul_func_uint16_t_u_u((*g_344), 0x536EL))), p_38))));
                        (*l_737) = ((safe_rshift_func_uint8_t_u_u(((void*)0 == l_1190), 5)) , l_1192);
                        l_1193 = p_38;
                        l_736.f3 = ((safe_rshift_func_int16_t_s_u(((g_885[1][7][0].f4 = ((safe_mod_func_uint8_t_u_u(((((*l_1166) = 0L) & (p_38 == ((*p_37) , ((**l_882) , (+((((***l_1132) = (((*l_1176) , ((safe_lshift_func_int8_t_s_u(0xA8L, ((-10L) || ((*l_746) = (safe_mod_func_uint32_t_u_u(((*l_1134) = (~(safe_rshift_func_uint16_t_u_u((g_851[g_654][g_654][l_974].f3 = (safe_rshift_func_int8_t_s_s((l_1206 <= (&l_738 == (void*)0)), 1))), (***g_999))))), p_38)))))) | p_38)) > (-1L))) && p_38) >= (*g_283))))))) , p_38), (*p_35))) && 0x9887B0A0L)) < p_38), p_38)) , g_1209[0]);
                    }
                }
                if (p_38)
                {
                    unsigned char l_1212 = 0UL;
                    int l_1214 = (-6L);
                    unsigned ***l_1224 = &l_1130;
                    union U1 l_1234 = {0};
                    (*g_239) = (l_1166 = &l_745);
                    l_746 = &l_745;
                    if ((safe_sub_func_uint8_t_u_u((*l_746), l_1212)))
                    {
                        unsigned char l_1213 = 0x3BL;
                        unsigned ****l_1225 = &l_1135;
                        unsigned ****l_1226 = &l_1132;
                        int *l_1227 = (void*)0;
                        int *l_1228[10] = {&g_230,(void*)0,(void*)0,&g_230,(void*)0,(void*)0,&g_230,(void*)0,(void*)0,&g_230};
                        unsigned char *l_1229 = &l_1212;
                        int i;
                        l_1214 = (l_1213 > p_38);
                        (*l_1147) = (safe_lshift_func_uint16_t_u_u((***g_999), (p_38 && (-6L))));
                        (*l_1147) = (**g_239);
                        (*l_1166) = l_1213;
                    }
                    else
                    {
                        short l_1236 = (-8L);
                        l_1234.f3 = ((*g_120) = (safe_rshift_func_uint16_t_u_s(((l_1232[2] != l_1233) != ((((***g_999) != (*l_746)) , (l_1235 = (void*)0)) == (void*)0)), ((!(p_38 ^ l_1212)) ^ 0xD44327CBL))));
                        (*g_239) = &l_840;
                        return l_1236;
                    }
                    return p_38;
                }
                else
                {
                    unsigned short l_1246 = 7UL;
                    char l_1249 = 0x56L;
                    (*l_737) = (*l_737);
                    if (p_38)
                    {
                        return p_38;
                    }
                    else
                    {
                        (*l_1147) = p_38;
                        (*g_239) = &g_71;
                    }
                    for (l_841 = 0; (l_841 <= 2); l_841 += 1)
                    {
                        unsigned short l_1237 = 65526UL;
                        (**g_239) = (((*l_1147) = l_1237) & (-1L));
                        return p_38;
                    }
                    if (((l_736.f3 = ((((safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((*p_35), (p_38 == ((g_1209[1] , (((**g_239) | ((*p_35) , (**g_239))) != ((*g_283) != ((safe_add_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((p_38 >= l_841), l_1246)) < p_38), 1UL)) < 1UL)))) , l_1247)))), p_38)) && 0xF9L) ^ p_38) || (*g_344))) == l_1248[1]))
                    {
                        return (*g_120);
                    }
                    else
                    {
                        return l_1249;
                    }
                }
            }
            (*l_746) = ((void*)0 != &g_283);
            for (g_1110 = 0; (g_1110 <= 0); g_1110 += 1)
            {
                int *l_1250 = &l_745;
                (*l_787) = (*l_737);
                for (l_994 = 0; (l_994 <= 0); l_994 += 1)
                {
                    int *l_1251 = &g_75;
                    for (g_551 = 0; (g_551 <= 3); g_551 += 1)
                    {
                        (*g_239) = l_1250;
                    }
                    for (g_174 = 0; (g_174 <= 2); g_174 += 1)
                    {
                        int *l_1252 = &l_985.f3;
                        l_759[2].f3 = (1L >= p_38);
                        l_1252 = l_1251;
                        (*g_771) = l_1253[4];
                        (*l_1251) = l_1254;
                    }
                    for (g_75 = 0; (g_75 >= 0); g_75 -= 1)
                    {
                        (*l_746) = (safe_mod_func_uint32_t_u_u(l_769, p_38));
                    }
                }
            }
        }
    }
    else
    {
        return p_38;
    }
    (*l_737) = (*l_737);
    return p_38;
}







static char * func_39(short p_40, int p_41)
{
    char l_622 = 8L;
    union U1 *l_633 = (void*)0;
    int l_662 = 0L;
    union U0 *l_668 = &g_78;
    int l_687 = 0xC6727D1BL;
    for (g_230 = 0; (g_230 >= (-14)); --g_230)
    {
        unsigned l_624 = 7UL;
        int l_625 = (-5L);
        int l_659 = 0xA1CB1534L;
        int *l_666[8] = {&l_662,&l_662,&l_662,&l_662,&l_662,&l_662,&l_662,&l_662};
        int l_667 = 0xE829D64EL;
        short *l_676 = &g_147;
        char *l_690 = &l_622;
        union U1 **l_733 = &g_88;
        int i;
        for (g_71 = (-27); (g_71 <= 13); g_71 = safe_add_func_int32_t_s_s(g_71, 3))
        {
            unsigned short l_605[6][4][7] = {{{65527UL,0x8724L,65527UL,0xF8BCL,5UL,0x272BL,65535UL},{0x9636L,5UL,1UL,8UL,0xF691L,0xF9B2L,0xF3CAL},{0x8112L,0x014EL,0x8724L,1UL,6UL,0x272BL,0xF691L},{0x62D6L,5UL,0xD9CDL,65531UL,0x8724L,0xF3CAL,1UL}},{{0x272BL,0UL,0x62D6L,0xDE99L,0x8112L,0xC4D7L,0x9636L},{5UL,0UL,0x6D47L,0xFA16L,0x9819L,0xFA16L,0x6D47L},{5UL,5UL,0xF9B2L,0x272BL,1UL,0xCB4CL,0x016AL},{0x8378L,0x014EL,0xFA16L,8UL,0UL,0UL,5UL}},{{6UL,5UL,65535UL,0UL,1UL,0x9636L,8UL},{0UL,0x8724L,0x9306L,0xC4D7L,0x9819L,1UL,0xF9B2L},{0xF9B2L,0x016AL,65532UL,0UL,0x8112L,0x40D2L,8UL},{0xF9B2L,0UL,0UL,0x8724L,0x8724L,0UL,0UL}},{{0UL,0x9819L,0x4E2EL,65527UL,0x40D2L,1UL,0xF3CAL},{0x40D2L,0x272BL,0x014EL,0x6D47L,1UL,8UL,0xF8BCL},{0xD9CDL,0UL,0x9306L,65527UL,1UL,0xF8BCL,65532UL},{0x9306L,0xF8BCL,0xF3CAL,0x8112L,0x8724L,0xCB4CL,0xDE99L}},{{1UL,5UL,0x8724L,0UL,8UL,0x9306L,0xDE99L},{65532UL,65535UL,0xDE99L,0UL,0xDE99L,65535UL,65532UL},{0x9636L,8UL,5UL,65531UL,0x9306L,0UL,0xF8BCL},{0x014EL,0xFA16L,8UL,0UL,0UL,5UL,0xF3CAL}},{{0x272BL,0xD9CDL,5UL,65532UL,5UL,0x9819L,0x8378L},{0xFBF3L,0x4E2EL,0xDE99L,0xC4D7L,6UL,0x014EL,0UL},{0UL,5UL,0x8724L,0x9819L,65532UL,0x014EL,65535UL},{0x9819L,0xCB4CL,0xF3CAL,0xF3CAL,0xCB4CL,0x9819L,0x016AL}}};
            const int l_626 = (-1L);
            int l_630 = 0x38944EB5L;
            int l_661 = 1L;
            unsigned char l_665 = 0xFCL;
            char *l_691 = &l_622;
            union U0 *l_699 = &g_700;
            union U1 *l_702 = &g_295;
            short **l_712 = &g_371[6][0][1];
            int i, j, k;
            if (l_605[2][0][5])
            {
                int *l_612 = &g_213.f3;
                union U1 * const l_613 = &g_322;
                unsigned short *l_623 = &l_605[2][0][5];
                int l_627 = 1L;
                l_627 = ((safe_mul_func_int16_t_s_s((~(safe_mod_func_uint32_t_u_u((((!1L) > (((*l_612) = (safe_lshift_func_uint16_t_u_s((*g_344), 2))) , (((((l_624 = (((void*)0 == l_613) & ((4294967289UL == (*l_612)) < (((safe_rshift_func_int16_t_s_u(((*l_612) > ((*l_623) = (safe_lshift_func_uint8_t_u_u(((*g_283) = p_40), (safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(l_622, (*l_612))), g_71)))))), 14)) >= p_40) , p_40)))) != l_625) , l_622) >= l_626) & 0L))) & p_41), l_622))), p_40)) < p_40);
                if (l_605[2][0][5])
                    continue;
            }
            else
            {
                int *l_628[2];
                const unsigned char l_629 = 0x26L;
                unsigned char *l_660 = &g_322.f1;
                unsigned short *l_663[10];
                unsigned l_664[8][9][3] = {{{1UL,0UL,0x7698742EL},{0xAE8DCF50L,0x9281F35AL,0UL},{0xAA8B12F5L,0x2856B086L,4294967295UL},{1UL,0x9281F35AL,0UL},{0x0AADEDFAL,5UL,0xEA4F0C5FL},{0xC2C171BFL,5UL,0UL},{4294967295UL,0UL,4294967286UL},{1UL,0x3E85C2D0L,0x774C647EL},{0xC2C171BFL,0UL,4294967290UL}},{{0x7A8E6A7AL,5UL,4294967286UL},{1UL,5UL,0x326FCD62L},{0x0750F30FL,0UL,0x2856B086L},{4294967295UL,0x3E85C2D0L,0UL},{1UL,0UL,0x774C647EL},{0UL,5UL,0x2856B086L},{0xB60D10A5L,5UL,0x0E9382FCL},{1UL,0UL,0xEA4F0C5FL},{0x0750F30FL,0x3E85C2D0L,4294967290UL}},{{0xB60D10A5L,0UL,0UL},{0x0AADEDFAL,5UL,0xEA4F0C5FL},{0xC2C171BFL,5UL,0UL},{4294967295UL,0UL,4294967286UL},{1UL,0x3E85C2D0L,0x774C647EL},{0xC2C171BFL,0UL,4294967290UL},{0x7A8E6A7AL,5UL,4294967286UL},{1UL,5UL,0x326FCD62L},{0x0750F30FL,0UL,0x2856B086L}},{{4294967295UL,0x3E85C2D0L,0UL},{1UL,0UL,0x774C647EL},{0UL,5UL,0x2856B086L},{0xB60D10A5L,5UL,0x0E9382FCL},{1UL,0UL,0xEA4F0C5FL},{0x0750F30FL,0x3E85C2D0L,4294967290UL},{0xB60D10A5L,0UL,0UL},{0x0AADEDFAL,5UL,0xEA4F0C5FL},{0xC2C171BFL,4294967295UL,0x814164EFL}},{{0x9281F35AL,0x0D1C1F7AL,1UL},{4294967295UL,0xDCA6E97EL,0x8E632CFFL},{0UL,0x0D1C1F7AL,4294967295UL},{0x7698742EL,4294967295UL,1UL},{0x774C647EL,4294967295UL,0x21CE23DEL},{5UL,0x0D1C1F7AL,0x3DBC6310L},{0x9281F35AL,0xDCA6E97EL,0x0D1C1F7AL},{0x774C647EL,0x0D1C1F7AL,0x8E632CFFL},{0x3E85C2D0L,4294967295UL,0x3DBC6310L}},{{4294967290UL,4294967295UL,0UL},{4294967295UL,0x0D1C1F7AL,0x7D4CDA09L},{5UL,0xDCA6E97EL,4294967295UL},{4294967290UL,0x0D1C1F7AL,0x0D1C1F7AL},{4UL,4294967295UL,0x7D4CDA09L},{0UL,4294967295UL,0x814164EFL},{0x9281F35AL,0x0D1C1F7AL,1UL},{4294967295UL,0xDCA6E97EL,0x8E632CFFL},{0UL,0x0D1C1F7AL,4294967295UL}},{{0x7698742EL,4294967295UL,1UL},{0x774C647EL,4294967295UL,0x21CE23DEL},{5UL,0x0D1C1F7AL,0x3DBC6310L},{0x9281F35AL,0xDCA6E97EL,0x0D1C1F7AL},{0x774C647EL,0x0D1C1F7AL,0x8E632CFFL},{0x3E85C2D0L,4294967295UL,0x3DBC6310L},{4294967290UL,4294967295UL,0UL},{4294967295UL,0x0D1C1F7AL,0x7D4CDA09L},{5UL,0xDCA6E97EL,4294967295UL}},{{4294967290UL,0x0D1C1F7AL,0x0D1C1F7AL},{4UL,4294967295UL,0x7D4CDA09L},{0UL,4294967295UL,0x814164EFL},{0x9281F35AL,0x0D1C1F7AL,1UL},{4294967295UL,0x21CE23DEL,0x3DBC6310L},{0xEA4F0C5FL,0x7D4CDA09L,1UL},{0x0E9382FCL,0x8E632CFFL,0xFD7190D2L},{0x2856B086L,0x8E632CFFL,0xA0AE2A2EL},{0x774C647EL,0x7D4CDA09L,0xDCA6E97EL}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_628[i] = (void*)0;
                for (i = 0; i < 10; i++)
                    l_663[i] = &g_381.f0;
                (*g_239) = l_628[1];
                l_630 = ((p_41 = p_40) , (l_629 & l_605[5][3][3]));
                (*g_239) = ((safe_sub_func_int16_t_s_s(p_40, (&g_210 == l_633))) , &p_41);
                if ((safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s((((safe_mul_func_int16_t_s_s(((((**g_239) = (safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s(1L, l_624)), (0x3BL < ((safe_add_func_uint8_t_u_u(l_625, ((safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((g_78.f0 = (safe_lshift_func_int8_t_s_s((l_662 = ((l_630 < g_654) < (l_661 = ((*l_660) = (((*g_283) = p_41) != (safe_rshift_func_int8_t_s_s((l_659 = (((*g_344) = ((safe_mul_func_int16_t_s_s(p_41, 1L)) > p_40)) || 0xDA9FL)), 4))))))), p_41))), p_41)), 4294967295UL)) , l_659))) && l_664[3][8][0])))), p_41))) | g_551) ^ 4L), l_622)) , 0x96DEL) < (-5L)), g_147)), l_665)))
                {
                    union U0 *l_669 = &g_78;
                    int l_677 = 0x108931C5L;
                    unsigned *l_678 = &g_381.f1;
                    l_666[5] = (*g_239);
                    (*g_239) = ((p_41 && ((**g_239) > (l_667 | 1UL))) , (((l_668 != l_669) , ((*l_678) = ((safe_sub_func_int32_t_s_s(((*g_344) && (+((0x54L < (safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((*g_370) = (void*)0) == l_676), p_40)), l_677))) >= 0x41L))), l_677)) >= 0x50L))) , (*g_239)));
                }
                else
                {
                    for (l_665 = 17; (l_665 < 12); l_665 = safe_sub_func_int16_t_s_s(l_665, 7))
                    {
                        (*g_120) = (-6L);
                        (*g_120) = ((safe_mod_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_u(p_40, 4)) , (*g_344)) < l_662), (l_687 = p_41))) & (safe_mul_func_uint8_t_u_u((*g_283), 0L)));
                        if (l_687)
                            break;
                        return &g_30;
                    }
                    return &g_30;
                }
            }
            if (p_41)
                continue;
            for (l_667 = (-6); (l_667 >= 26); l_667 = safe_add_func_int16_t_s_s(l_667, 4))
            {
                const short l_696 = (-5L);
                char *l_697 = &g_30;
                for (l_662 = 0; (l_662 >= (-6)); --l_662)
                {
                    g_78.f3 = l_630;
                    p_41 = l_661;
                }
                if (l_696)
                {
                    return l_697;
                }
                else
                {
                    union U0 **l_698 = (void*)0;
                    l_699 = &g_78;
                    for (l_661 = 0; (l_661 <= 7); l_661 += 1)
                    {
                        union U1 **l_701[10][4][6] = {{{(void*)0,&g_88,&l_633,(void*)0,&l_633,&g_88},{&l_633,&l_633,(void*)0,(void*)0,&l_633,&l_633},{(void*)0,&l_633,(void*)0,&l_633,&g_88,&g_88},{(void*)0,&l_633,&l_633,(void*)0,&l_633,(void*)0}},{{(void*)0,&l_633,(void*)0,&l_633,&l_633,(void*)0},{(void*)0,&g_88,&l_633,(void*)0,&l_633,&g_88},{&l_633,&l_633,(void*)0,(void*)0,&l_633,&l_633},{(void*)0,&l_633,(void*)0,&l_633,&g_88,&g_88}},{{(void*)0,&l_633,&l_633,(void*)0,&l_633,(void*)0},{(void*)0,&l_633,(void*)0,&l_633,&l_633,(void*)0},{(void*)0,&g_88,&l_633,(void*)0,&l_633,&g_88},{&l_633,&l_633,(void*)0,(void*)0,&l_633,&l_633}},{{(void*)0,&l_633,(void*)0,&l_633,&g_88,&g_88},{(void*)0,&l_633,&l_633,&l_633,&g_88,&l_633},{&l_633,&g_88,&l_633,&g_88,&g_88,&l_633},{&l_633,&g_88,&g_88,(void*)0,&g_88,&g_88}},{{&g_88,&g_88,&l_633,(void*)0,&g_88,&g_88},{&l_633,&g_88,&l_633,&g_88,&g_88,&g_88},{&l_633,&g_88,&g_88,&l_633,&g_88,&l_633},{&l_633,&g_88,&l_633,&g_88,&g_88,&l_633}},{{&l_633,&g_88,&g_88,(void*)0,&g_88,&g_88},{&g_88,&g_88,&l_633,(void*)0,&g_88,&g_88},{&l_633,&g_88,&l_633,&g_88,&g_88,&g_88},{&l_633,&g_88,&g_88,&l_633,&g_88,&l_633}},{{&l_633,&g_88,&l_633,&g_88,&g_88,&l_633},{&l_633,&g_88,&g_88,(void*)0,&g_88,&g_88},{&g_88,&g_88,&l_633,(void*)0,&g_88,&g_88},{&l_633,&g_88,&l_633,&g_88,&g_88,&g_88}},{{&l_633,&g_88,&g_88,&l_633,&g_88,&l_633},{&l_633,&g_88,&g_88,(void*)0,&l_633,&g_88},{&l_633,&l_633,&l_633,&l_633,&l_633,&l_633},{(void*)0,&g_88,&g_88,&l_633,&g_88,&l_633}},{{&l_633,&l_633,&g_88,(void*)0,&l_633,&l_633},{(void*)0,&l_633,&l_633,(void*)0,&g_88,&g_88},{(void*)0,&g_88,&g_88,(void*)0,&l_633,&g_88},{&l_633,&l_633,&l_633,&l_633,&l_633,&l_633}},{{(void*)0,&g_88,&g_88,&l_633,&g_88,&l_633},{&l_633,&l_633,&g_88,(void*)0,&l_633,&l_633},{(void*)0,&l_633,&l_633,(void*)0,&g_88,&g_88},{(void*)0,&g_88,&g_88,(void*)0,&l_633,&g_88}}};
                        int i, j, k;
                        l_702 = &g_210;
                        l_666[l_661] = l_666[l_661];
                        return &g_391;
                    }
                }
            }
            if ((safe_lshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((-1L), p_40)) , p_40), 1)))
            {
                char l_709 = (-1L);
                for (p_41 = (-13); (p_41 <= (-8)); p_41 = safe_add_func_uint32_t_u_u(p_41, 8))
                {
                    union U2 *l_711 = &g_118[0][0][0];
                    union U2 **l_710 = &l_711;
                    if (l_709)
                        break;
                    (*l_710) = &g_118[0][0][0];
                }
            }
            else
            {
                short ***l_713 = &g_370;
                (*l_713) = l_712;
                l_661 = (l_665 & p_41);
                return &g_391;
            }
        }
        for (l_622 = 1; (l_622 == (-1)); --l_622)
        {
            union U1 l_716 = {0};
            union U2 l_717 = {0UL};
            unsigned *l_718 = &g_82;
            unsigned *l_719 = &g_700.f1;
            l_716.f3 = (l_716 , p_41);
            g_75 = (p_41 = 0x250D6CBCL);
            if (p_40)
            {
                int l_725 = 0L;
                char *l_726 = (void*)0;
                for (l_624 = 0; (l_624 == 21); l_624 = safe_add_func_uint8_t_u_u(l_624, 1))
                {
                    int *l_724 = &l_625;
                    l_724 = l_718;
                    (*l_724) = l_725;
                }
                return l_726;
            }
            else
            {
                for (g_377 = 0; (g_377 >= 59); g_377++)
                {
                    char *l_732 = &l_622;
                    if (p_40)
                        break;
                    for (g_71 = (-15); (g_71 > (-22)); g_71--)
                    {
                        char *l_731 = &l_622;
                        return &g_30;
                    }
                }
            }
        }
        (*l_733) = (void*)0;
    }
    return &g_30;
}







static char func_44(union U1 p_45, int p_46)
{
    unsigned short *l_309 = (void*)0;
    unsigned short *l_310 = &g_78.f0;
    int l_311 = 0x252BB693L;
    union U1 **l_323 = &g_88;
    union U0 *l_327 = &g_78;
    union U0 **l_326 = &l_327;
    union U2 l_343 = {0x55ADB1BDL};
    union U2 *l_387[4][10][2] = {{{&g_118[0][0][0],&g_118[0][0][0]},{&l_343,(void*)0},{&g_118[6][1][0],&l_343},{&g_118[6][1][0],(void*)0},{&l_343,&g_118[0][0][0]},{&g_118[0][0][0],&g_118[0][1][0]},{(void*)0,&g_118[0][1][0]},{&g_118[0][0][0],&g_118[0][0][0]},{&l_343,(void*)0},{&g_118[6][1][0],&l_343}},{{&g_118[6][1][0],(void*)0},{&l_343,&g_118[0][0][0]},{&g_118[0][0][0],&g_118[0][1][0]},{(void*)0,&g_118[0][1][0]},{&g_118[0][0][0],&g_118[0][0][0]},{&l_343,(void*)0},{(void*)0,(void*)0},{(void*)0,&l_343},{&g_118[6][1][0],&g_118[0][1][0]},{&l_343,&l_343}},{{&g_118[0][0][0],&l_343},{&l_343,&g_118[0][1][0]},{&g_118[6][1][0],&l_343},{(void*)0,(void*)0},{(void*)0,&l_343},{&g_118[6][1][0],&g_118[0][1][0]},{&l_343,&l_343},{&g_118[0][0][0],&l_343},{&l_343,&g_118[0][1][0]},{&g_118[6][1][0],&l_343}},{{(void*)0,(void*)0},{(void*)0,&l_343},{&g_118[6][1][0],&g_118[0][1][0]},{&l_343,&l_343},{&g_118[0][0][0],&l_343},{&l_343,&g_118[0][1][0]},{&g_118[6][1][0],&l_343},{(void*)0,(void*)0},{(void*)0,&l_343},{&g_118[6][1][0],&g_118[0][1][0]}}};
    union U2 **l_386 = &l_387[3][7][0];
    unsigned l_426[4][2][2] = {{{0x768BA2E3L,0xD1508784L},{4294967289UL,0xD1508784L}},{{0x768BA2E3L,0xD1508784L},{4294967289UL,0xD1508784L}},{{0x768BA2E3L,0xD1508784L},{4294967289UL,0xD1508784L}},{{0x768BA2E3L,0xD1508784L},{4294967289UL,0xD1508784L}}};
    int *l_459[4][6] = {{&l_311,&l_311,&l_311,&l_311,&l_311,&l_311},{&l_311,&l_311,&l_311,&l_311,&l_311,&l_311},{&l_311,&l_311,&l_311,&l_311,&l_311,&l_311},{&l_311,&l_311,&l_311,&l_311,&l_311,&l_311}};
    union U0 l_526 = {0UL};
    const unsigned char * const l_533 = &g_174;
    char l_579 = 0x49L;
    int i, j, k;
    if (l_311)
    {
        unsigned *l_314 = &g_213.f1;
        int l_315 = 0x23B5687EL;
        short *l_316 = &g_47.f2;
        union U1 * const l_321 = &g_322;
        union U1 * const *l_320[9][3] = {{&l_321,&l_321,&l_321},{(void*)0,&l_321,(void*)0},{&l_321,(void*)0,&l_321},{&l_321,&l_321,&l_321},{&l_321,(void*)0,&l_321},{&l_321,&l_321,&l_321},{&l_321,(void*)0,&l_321},{&l_321,&l_321,&l_321},{&l_321,&l_321,&l_321}};
        union U1 * const **l_319 = &l_320[3][0];
        union U1 ***l_324 = &l_323;
        union U0 **l_325 = (void*)0;
        int l_389 = (-5L);
        union U2 l_438 = {1UL};
        unsigned char **l_458[1];
        int i, j;
        for (i = 0; i < 1; i++)
            l_458[i] = &g_283;
        if ((p_45.f3 = (p_46 == p_46)))
        {
            short l_333 = 0x81A8L;
            union U2 ** const l_335 = (void*)0;
            int l_338 = 1L;
            unsigned short **l_340 = &l_309;
            int l_361 = 0x01C3AF00L;
            union U0 *l_380[10][8] = {{&g_213,&g_381,&g_213,&g_213,(void*)0,(void*)0,&g_213,&g_213},{&g_381,&g_381,(void*)0,&g_213,&g_78,&g_213,(void*)0,&g_381},{&g_381,&g_213,&g_213,(void*)0,(void*)0,&g_213,&g_213,&g_381},{&g_213,&g_213,&g_381,&g_213,&g_381,&g_213,&g_213,&g_213},{&g_213,&g_213,&g_213,&g_213,&g_213,&g_213,(void*)0,&g_213},{&g_213,&g_213,(void*)0,&g_213,&g_213,&g_213,&g_213,&g_213},{&g_213,&g_213,&g_213,&g_213,&g_381,&g_213,&g_381,&g_213},{&g_213,&g_381,&g_213,&g_213,(void*)0,(void*)0,&g_213,&g_213},{&g_381,&g_381,(void*)0,&g_213,&g_78,&g_213,(void*)0,&g_381},{&g_381,&g_213,&g_213,&g_78,&g_78,&g_381,&g_213,&g_213}};
            const unsigned short l_409[4][1][2] = {{{65527UL,65527UL}},{{0x80ECL,65527UL}},{{65527UL,0x80ECL}},{{65527UL,65527UL}}};
            int l_410 = 0x7DA0BDD3L;
            unsigned l_466 = 0x70DD2177L;
            int i, j, k;
            for (g_30 = 9; (g_30 == (-23)); --g_30)
            {
                int *l_330[10] = {&g_75,&g_75,&l_315,&l_311,&l_315,&g_75,&g_75,&l_315,&l_311,&l_315};
                int *l_336[4][1] = {{&g_230},{&g_230},{&g_230},{&g_230}};
                short **l_337 = &l_316;
                int i, j;
                p_45.f3 = l_311;
                l_338 = (&l_316 == ((p_46 = ((((*g_283) = ((l_333 >= (((*l_326) = &g_213) != g_334[0])) && l_311)) ^ (l_335 == (void*)0)) <= p_45.f2)) , l_337));
            }
            if ((safe_unary_minus_func_uint8_t_u(l_315)))
            {
                int *l_345 = &l_311;
                unsigned l_376 = 4294967295UL;
                union U2 **l_388 = (void*)0;
                (*l_345) = (-1L);
                for (l_343.f0 = 0; (l_343.f0 >= 31); l_343.f0 = safe_add_func_uint16_t_u_u(l_343.f0, 9))
                {
                    if ((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(g_71, 4)) ^ l_338), ((safe_sub_func_uint32_t_u_u(g_147, (((g_230 & (((*l_314) = (l_315 != (safe_unary_minus_func_int8_t_s(((void*)0 == &g_334[0]))))) && ((((safe_lshift_func_uint16_t_u_s(((g_78.f1 = g_30) , ((safe_lshift_func_int8_t_s_u(((l_315 = ((l_361 = (safe_rshift_func_uint16_t_u_s(((g_82 < (*l_345)) != 9L), 15))) > 0x713AL)) || 0xCAL), l_338)) > p_45.f1)), 6)) & 0UL) | 4L) <= 0xF60B6875L))) , 1UL) ^ g_203[0]))) | p_45.f2))))
                    {
                        short ***l_372 = &g_370;
                        unsigned short l_373 = 0x078FL;
                        (*l_345) = (safe_sub_func_uint16_t_u_u((g_377 = ((*g_344) = ((*l_310) = (l_343.f0 || (safe_lshift_func_int8_t_s_u(l_376, l_338)))))), g_230));
                        (*g_239) = &l_361;
                    }
                    else
                    {
                        (*l_345) = p_45.f2;
                        (*l_345) = (safe_lshift_func_uint16_t_u_u((*g_344), 11));
                        (*l_326) = &g_213;
                    }
                }
                for (g_377 = 0; (g_377 <= 0); g_377 += 1)
                {
                    for (l_361 = 3; (l_361 >= 0); l_361 -= 1)
                    {
                        l_380[2][7] = &g_213;
                        (*l_345) = p_46;
                    }
                    return p_45.f2;
                }
                p_45.f3 = ((((*l_316) = (((l_315 = 0L) | ((safe_mod_func_uint8_t_u_u(p_45.f2, l_361)) == (*l_345))) & (*g_344))) >= p_45.f1) > 252UL);
            }
            else
            {
                const unsigned l_396 = 0UL;
                int l_397 = 1L;
                unsigned *l_408 = &g_118[0][0][0].f0;
                short **l_423 = &g_371[5][4][0];
                union U0 l_436 = {65534UL};
                unsigned char l_471 = 246UL;
                l_410 = (safe_add_func_uint16_t_u_u((((l_397 = ((safe_rshift_func_uint16_t_u_s(l_396, p_46)) || p_45.f1)) | ((safe_mul_func_uint16_t_u_u((*g_344), ((~(+l_311)) <= (((safe_rshift_func_int8_t_s_u((((p_46 == (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(l_311, (&g_18 == ((safe_sub_func_uint8_t_u_u(((*g_283) = ((((((*l_408) = l_333) , l_396) > 0x23L) , 0UL) >= l_389)), l_409[3][0][0])) , (void*)0)))), 0x253DL))) , l_396) != 3UL), 7)) && p_46) ^ 0xBFL)))) <= p_45.f1)) == p_45.f3), l_338));
                for (l_311 = 0; (l_311 == 1); l_311++)
                {
                    int *l_415 = &l_389;
                    (*l_415) = (safe_lshift_func_uint16_t_u_u((*g_344), (l_361 = p_45.f1)));
                    for (l_338 = (-23); (l_338 < (-30)); l_338 = safe_sub_func_uint32_t_u_u(l_338, 5))
                    {
                        (*l_326) = &g_381;
                        (*l_326) = (*l_326);
                    }
                }
                if (p_45.f1)
                {
                    int *l_418[1][6][8] = {{{&l_361,&l_315,&l_315,&l_361,(void*)0,&l_338,&l_338,(void*)0},{&l_361,&l_315,&l_315,&l_361,(void*)0,&l_338,&l_338,(void*)0},{&l_361,&l_315,&l_315,&l_361,(void*)0,&l_338,&l_338,(void*)0},{&l_361,&l_315,&l_315,&l_361,(void*)0,&l_338,&l_338,(void*)0},{&l_361,&l_315,&l_315,&l_361,(void*)0,&l_338,&l_338,(void*)0},{&l_361,&l_315,&l_315,&l_361,(void*)0,&l_338,&l_338,(void*)0}}};
                    int i, j, k;
                    (*g_239) = l_418[0][5][4];
                    l_311 = ((((safe_lshift_func_uint16_t_u_s(((*l_310) = l_343.f0), 13)) || (((l_361 , l_396) > (1UL <= ((l_409[3][0][0] == (safe_mod_func_uint8_t_u_u(((void*)0 != l_423), p_45.f1))) <= (safe_rshift_func_uint8_t_u_u((((*l_327) , 4294967295UL) , l_426[0][0][1]), 4))))) != l_397)) , (*g_344)) <= l_396);
                    (*g_239) = &l_315;
                    for (l_397 = 0; (l_397 != 0); l_397++)
                    {
                        (*g_239) = (*g_239);
                    }
                }
                else
                {
                    int *l_432 = &g_78.f3;
                    union U0 l_437 = {0UL};
                    union U0 *l_444 = &l_437;
                    if (l_343.f0)
                    {
                        union U0 ***l_429 = &l_325;
                        int *l_430 = &g_322.f3;
                        int *l_431 = &l_338;
                        (*g_239) = &l_397;
                        (*l_429) = &g_334[0];
                        (*l_431) = ((*l_430) = ((**g_239) = (*g_120)));
                    }
                    else
                    {
                        unsigned short l_435[7] = {0x63EBL,0x63EBL,0x63EBL,0x63EBL,0x63EBL,0x63EBL,0x63EBL};
                        union U2 **l_439 = &l_387[3][7][0];
                        int *l_440 = &l_315;
                        int **l_441 = &l_440;
                        int i;
                        l_432 = &l_315;
                        l_397 = ((l_409[3][0][0] >= (((0x9A6A0F35L <= ((l_435[0] | ((-1L) > (-5L))) != (l_311 = ((l_436 , (void*)0) != (void*)0)))) | ((l_437 , &l_323) == (void*)0)) ^ 0x7E34BC5FL)) <= l_436.f0);
                        (*l_432) = ((((l_438 , (void*)0) != l_408) , g_390) != l_439);
                        (*l_441) = ((*g_239) = l_440);
                    }
                    for (g_82 = 1; (g_82 <= 7); g_82 += 1)
                    {
                        (**g_239) = (((*l_314) = (g_381.f1 = p_45.f2)) < ((safe_rshift_func_int16_t_s_s(((*l_326) == l_444), (l_436.f0 != (safe_add_func_int32_t_s_s((-1L), (-1L)))))) && (*g_120)));
                        (*g_239) = &l_315;
                    }
                    if (p_45.f1)
                    {
                        unsigned l_447 = 0x7D277678L;
                        (*g_239) = &l_397;
                        (*l_326) = &g_213;
                        p_45.f3 = (((**g_239) = l_447) <= (safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(l_438.f0, ((((0L ^ (safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((*g_344), 1L)), (l_447 != (*g_344)))) , (l_458[0] != (((*l_432) = p_46) , (void*)0))), 0))) ^ p_45.f2) >= 0UL) < l_389))), (*g_344))));
                    }
                    else
                    {
                        l_459[2][1] = &l_389;
                        (*l_432) = (safe_sub_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(l_410, func_56(l_338))), l_466)) != (((*g_370) == (void*)0) && (safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(((g_381.f0 | g_377) & (&g_381 != (void*)0)), p_45.f3)), l_471)))) , p_46), p_45.f2));
                    }
                }
                return l_438.f0;
            }
            (**l_324) = &p_45;
        }
        else
        {
            char l_472 = 0x56L;
            return l_472;
        }
    }
    else
    {
        short ***l_486[1][5] = {{&g_370,&g_370,&g_370,&g_370,&g_370}};
        int l_499 = 6L;
        unsigned short **l_502 = &l_309;
        unsigned *l_504 = &l_343.f0;
        unsigned **l_503[1][9] = {{&l_504,&l_504,&l_504,&l_504,&l_504,&l_504,&l_504,&l_504,&l_504}};
        short * const *l_510 = &g_371[5][4][0];
        unsigned short l_513 = 0UL;
        unsigned char *l_532 = &g_174;
        unsigned l_588 = 4294967287UL;
        char *l_589 = &g_30;
        unsigned *l_598 = &g_551;
        union U2 l_599 = {0x860CF9C2L};
        int i, j;
        for (l_311 = 0; (l_311 > (-30)); l_311 = safe_sub_func_uint16_t_u_u(l_311, 1))
        {
            short l_479 = (-4L);
            char *l_480 = &g_30;
            char *l_487 = (void*)0;
            char *l_488 = &g_391;
            int l_489 = (-4L);
            unsigned *l_490 = &g_213.f4;
            short l_516 = 5L;
            unsigned short l_523 = 0x9CB0L;
            int l_527 = 0xA3BC4FCEL;
            unsigned short l_561 = 0x0CEDL;
            int *l_565[1];
            union U0 *l_570 = (void*)0;
            int l_580 = 0x393DA23FL;
            int i;
            for (i = 0; i < 1; i++)
                l_565[i] = &l_526.f3;
            if ((safe_add_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(l_479, (((*l_490) = (((*l_480) = 3L) == ((safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u(0xBEL)), ((void*)0 != &l_426[3][0][0]))) < (((*l_488) = (l_479 != (g_391 | (safe_lshift_func_int8_t_s_s(((void*)0 == l_486[0][1]), p_46))))) , l_489)))) > 7L))) <= p_46), p_46)))
            {
                (*l_386) = (*l_386);
            }
            else
            {
                int l_495[7][5] = {{0xEAC91F2DL,7L,0L,0x94C2BE8CL,0L},{1L,1L,(-1L),1L,1L},{0L,0x94C2BE8CL,0L,7L,0xEAC91F2DL},{1L,0x7961D5FEL,0x7961D5FEL,1L,0x7961D5FEL},{0xEAC91F2DL,0x94C2BE8CL,0x1D6DDEB3L,0x94C2BE8CL,0xEAC91F2DL},{0x7961D5FEL,1L,0x7961D5FEL,0x7961D5FEL,1L},{0xEAC91F2DL,7L,0L,0x94C2BE8CL,0L}};
                unsigned **l_506 = &l_504;
                union U0 l_512[3] = {{0x2840L},{0x2840L},{0x2840L}};
                int i, j;
                if (g_82)
                {
                    unsigned l_501[9][1] = {{0xD48029C2L},{0x990EEE9AL},{0xD48029C2L},{0x990EEE9AL},{0xD48029C2L},{0x990EEE9AL},{0xD48029C2L},{0x990EEE9AL},{0xD48029C2L}};
                    int i, j;
                    if (p_46)
                        break;
                    for (l_479 = (-16); (l_479 == (-11)); l_479 = safe_add_func_int32_t_s_s(l_479, 9))
                    {
                        int l_500 = 0x4FB6C1C5L;
                        unsigned ***l_505 = &l_503[0][0];
                        unsigned ***l_507 = (void*)0;
                        short * const **l_511 = &l_510;
                        p_45.f3 = (+((safe_mul_func_int8_t_s_s(((0x60L | ((((p_46 , l_502) != &g_344) & p_46) > l_499)) < l_500), l_495[3][0])) , l_501[7][0]));
                        g_508 = (l_506 = ((*l_505) = l_503[0][0]));
                        g_88 = (void*)0;
                        g_47.f3 = (((*l_511) = l_510) != (l_512[1] , &g_371[5][4][0]));
                    }
                    if (l_501[3][0])
                        break;
                }
                else
                {
                    (*l_326) = (*l_326);
                }
                if (p_46)
                    break;
                return l_513;
            }
            for (g_71 = 0; (g_71 != (-15)); g_71--)
            {
                union U0 *l_517 = (void*)0;
                p_45.f3 = l_516;
                (*g_239) = &l_499;
                if (l_513)
                    break;
                (*l_326) = l_517;
            }
            if ((safe_mul_func_uint16_t_u_u(((*l_310) = ((safe_unary_minus_func_int16_t_s(((p_46 && (safe_mod_func_int8_t_s_s((-1L), l_523))) >= (safe_lshift_func_uint8_t_u_s((l_513 & ((((0x72A5198FL < ((((l_504 != (l_526 , &l_426[2][1][1])) <= ((l_499 ^ p_46) >= 4294967295UL)) > g_230) && p_46)) == p_46) || 0x64B3L) || p_46)), l_499))))) ^ l_499)), 0x94C2L)))
            {
                int l_530 = 0x26B50878L;
                union U1 *l_544 = &g_210;
                int l_545[7];
                union U2 l_548 = {8UL};
                int l_558[6][6][7] = {{{(-1L),(-1L),0L,(-1L),0xC96B699FL,(-1L),0L},{0L,0L,0xEDC58E0FL,0x75016C90L,2L,0x75016C90L,0xEDC58E0FL},{(-1L),(-1L),0L,(-1L),0xC96B699FL,(-1L),0L},{0L,0L,0xEDC58E0FL,0x75016C90L,2L,0x75016C90L,0xEDC58E0FL},{(-1L),(-1L),0L,(-1L),0xC96B699FL,(-1L),0L},{0L,0L,0xEDC58E0FL,0x75016C90L,2L,0x75016C90L,0xEDC58E0FL}},{{(-1L),(-1L),0L,(-1L),0xC96B699FL,(-1L),0xC96B699FL},{0xD0D46C51L,0xD0D46C51L,2L,0xEDC58E0FL,0x5A0A9F65L,0xEDC58E0FL,2L},{0xC8340702L,0xC8340702L,0xC96B699FL,0L,0x10F9C9B8L,0L,0xC96B699FL},{0xD0D46C51L,0xD0D46C51L,2L,0xEDC58E0FL,0x5A0A9F65L,0xEDC58E0FL,2L},{0xC8340702L,0xC8340702L,0xC96B699FL,0L,0x10F9C9B8L,0L,0xC96B699FL},{0xD0D46C51L,0xD0D46C51L,2L,0xEDC58E0FL,0x5A0A9F65L,0xEDC58E0FL,2L}},{{0xC8340702L,0xC8340702L,0xC96B699FL,0L,0x10F9C9B8L,0L,0xC96B699FL},{0xD0D46C51L,0xD0D46C51L,2L,0xEDC58E0FL,0x5A0A9F65L,0xEDC58E0FL,2L},{0xC8340702L,0xC8340702L,0xC96B699FL,0L,0x10F9C9B8L,0L,0xC96B699FL},{0xD0D46C51L,0xD0D46C51L,2L,0xEDC58E0FL,0x5A0A9F65L,0xEDC58E0FL,2L},{0xC8340702L,0xC8340702L,0xC96B699FL,0L,0x10F9C9B8L,0L,0xC96B699FL},{0xD0D46C51L,0xD0D46C51L,2L,0xEDC58E0FL,0x5A0A9F65L,0xEDC58E0FL,2L}},{{0xC8340702L,0xC8340702L,0xC96B699FL,0L,0x10F9C9B8L,0L,0xC96B699FL},{0xD0D46C51L,0xD0D46C51L,2L,0xEDC58E0FL,0x5A0A9F65L,0xEDC58E0FL,2L},{0xC8340702L,0xC8340702L,0xC96B699FL,0x35F5CADDL,0xC8340702L,0x35F5CADDL,(-1L)},{2L,2L,0L,1L,0xD0D46C51L,1L,0L},{0xC96B699FL,0xC96B699FL,(-1L),0x35F5CADDL,0xC8340702L,0x35F5CADDL,(-1L)},{2L,2L,0L,1L,0xD0D46C51L,1L,0L}},{{0xC96B699FL,0xC96B699FL,(-1L),0x35F5CADDL,0xC8340702L,0x35F5CADDL,(-1L)},{2L,2L,0L,1L,0xD0D46C51L,1L,0L},{0xC96B699FL,0xC96B699FL,(-1L),0x35F5CADDL,0xC8340702L,0x35F5CADDL,(-1L)},{2L,2L,0L,1L,0xD0D46C51L,1L,0L},{0xC96B699FL,0xC96B699FL,(-1L),0x35F5CADDL,0xC8340702L,0x35F5CADDL,(-1L)},{2L,2L,0L,1L,0xD0D46C51L,1L,0L}},{{0xC96B699FL,0xC96B699FL,(-1L),0x35F5CADDL,0xC8340702L,0x35F5CADDL,(-1L)},{2L,2L,0L,1L,0xD0D46C51L,1L,0L},{0xC96B699FL,0xC96B699FL,(-1L),0x35F5CADDL,0xC8340702L,0x35F5CADDL,(-1L)},{2L,2L,0L,1L,0xD0D46C51L,1L,0L},{0xC96B699FL,0x10F9C9B8L,0xC8340702L,(-1L),(-1L),(-1L),0xC8340702L},{0x5A0A9F65L,0x5A0A9F65L,0xD0D46C51L,0L,0x75016C90L,0L,0xD0D46C51L}}};
                const union U1 *l_563 = &g_564;
                const union U1 **l_562 = &l_563;
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_545[i] = 0x3078433BL;
                for (l_516 = 3; (l_516 >= 0); l_516 -= 1)
                {
                    int i, j;
                    l_527 = l_516;
                    for (g_391 = 0; (g_391 >= 0); g_391 -= 1)
                    {
                        l_499 = (+l_513);
                    }
                    l_499 = (safe_lshift_func_int16_t_s_u(l_489, 7));
                    if ((p_46 >= l_530))
                    {
                        unsigned short l_531[7][2] = {{0x7C2EL,0x7C2EL},{65535UL,0x7C2EL},{0x7C2EL,65535UL},{0x7C2EL,0x7C2EL},{65535UL,0x7C2EL},{0x7C2EL,65535UL},{0x7C2EL,0x7C2EL}};
                        int i, j;
                        return l_531[3][0];
                    }
                    else
                    {
                        const short l_536 = (-10L);
                        g_381.f3 = p_46;
                        l_527 = ((((((((l_532 != l_533) == (+(l_513 && (!(p_46 && ((safe_mul_func_uint8_t_u_u(l_536, (safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((void*)0 != g_543), 0xF5F3L)), 0xB1C6L)), 4UL)))) > (*g_344))))))) & 1UL) & l_516) <= (-2L)) , 0x50L) >= 0xAAL) ^ 1L);
                        (*l_323) = l_544;
                    }
                }
                l_545[3] = p_46;
                l_565[0] = ((*g_239) = ((safe_sub_func_int16_t_s_s((l_548 , (safe_sub_func_int8_t_s_s((g_551 >= (safe_add_func_uint8_t_u_u(((*l_323) != ((*l_562) = (((safe_lshift_func_uint16_t_u_s(((*l_310) = (!p_46)), (safe_add_func_int8_t_s_s(((p_45 , (l_558[4][1][2] || p_46)) != ((0x31454F37L <= (safe_mod_func_uint8_t_u_u(254UL, l_479))) == l_561)), l_513)))) > 0x94L) , (*l_323)))), l_499))), p_46))), 4L)) , &l_527));
                p_45.f3 = func_56(((void*)0 == &g_213));
            }
            else
            {
                unsigned l_581 = 0xB1AD0E68L;
                unsigned char *l_583 = &g_377;
                int l_585 = 0x960C71DDL;
                for (g_377 = 26; (g_377 < 22); --g_377)
                {
                    for (l_479 = (-27); (l_479 != (-13)); l_479 = safe_add_func_uint8_t_u_u(l_479, 6))
                    {
                        unsigned char *l_582 = &g_174;
                        unsigned char **l_584 = &g_283;
                        (*l_326) = l_570;
                        (*g_239) = &g_75;
                    }
                }
                (*g_239) = &l_527;
                if (p_46)
                    break;
            }
        }
        g_210.f3 = (l_499 , ((l_513 && ((p_46 , p_45) , 0x32C5L)) >= (*g_344)));
        g_295.f3 = (safe_add_func_uint16_t_u_u(((*g_344) = ((((safe_sub_func_int16_t_s_s(((g_118[0][0][0].f0 | (safe_add_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u(((*l_310) = (*g_344)), 65535UL)) & ((*l_598) = (p_46 && (*g_344)))) == (l_599 , p_46)), (p_45.f1 = ((*l_532) = l_513))))) || p_45.f1), p_46)) , g_118[5][1][0]) , l_588) <= p_46)), g_147));
        g_322.f3 = l_588;
    }
    return p_46;
}







static char func_56(unsigned short p_57)
{
    unsigned l_65 = 0xF94AD8A0L;
    short l_66 = (-5L);
    int l_243[5] = {1L,1L,1L,1L,1L};
    int * const l_247 = (void*)0;
    union U0 *l_256[8];
    unsigned l_265 = 1UL;
    short *l_275 = &g_210.f2;
    const union U2 *l_306 = &g_118[0][0][0];
    char l_308 = 0x75L;
    int i;
    for (i = 0; i < 8; i++)
        l_256[i] = &g_78;
    l_243[4] = ((g_18 , ((safe_mod_func_int8_t_s_s((p_57 == (((g_18 || ((func_60((&g_30 == &g_30), l_65, (l_66 , g_30), (safe_rshift_func_int16_t_s_s((l_66 <= l_66), g_30))) , 0x69L) < 249UL)) & 5UL) > l_65)), l_66)) , g_30)) , l_65);
    for (l_65 = 0; (l_65 > 30); l_65 = safe_add_func_uint16_t_u_u(l_65, 3))
    {
        int *l_246[8];
        int i;
        for (i = 0; i < 8; i++)
            l_246[i] = (void*)0;
        (*g_239) = l_246[3];
        return l_243[2];
    }
    (*g_239) = l_247;
    for (g_82 = 0; (g_82 <= 4); g_82 += 1)
    {
        union U0 **l_257 = (void*)0;
        union U0 *l_259 = (void*)0;
        union U0 **l_258 = &l_259;
        unsigned short l_264[3];
        short *l_276[4];
        int i;
        for (i = 0; i < 3; i++)
            l_264[i] = 7UL;
        for (i = 0; i < 4; i++)
            l_276[i] = &l_66;
        l_243[g_82] = ((l_243[g_82] & ((safe_sub_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((0x0E14L > (safe_mul_func_uint16_t_u_u((((l_256[6] != ((*l_258) = l_256[6])) || (safe_mul_func_int8_t_s_s(l_243[g_82], ((safe_add_func_uint32_t_u_u((g_71 && l_65), l_243[g_82])) && (((((((l_243[g_82] >= p_57) == p_57) >= l_264[0]) || p_57) != 0xFF69AB20L) > g_118[0][0][0].f0) >= 0x6572D124L))))) && g_118[0][0][0].f0), (-3L)))), l_265)), 1)) > p_57), l_264[0])) & p_57)) >= p_57);
        if (l_264[2])
        {
            int *l_266 = &g_89.f3;
            short *l_274 = (void*)0;
            short **l_273[7][10][3] = {{{&l_274,&l_274,&l_274},{&l_274,&l_274,&l_274},{(void*)0,&l_274,&l_274},{&l_274,&l_274,&l_274},{(void*)0,&l_274,(void*)0},{&l_274,&l_274,&l_274},{&l_274,&l_274,&l_274},{&l_274,&l_274,&l_274},{(void*)0,&l_274,&l_274},{&l_274,&l_274,&l_274}},{{&l_274,&l_274,&l_274},{(void*)0,&l_274,(void*)0},{&l_274,&l_274,&l_274},{&l_274,&l_274,&l_274},{(void*)0,&l_274,&l_274},{&l_274,&l_274,&l_274},{(void*)0,&l_274,&l_274},{(void*)0,&l_274,&l_274},{&l_274,&l_274,(void*)0},{&l_274,&l_274,&l_274}},{{(void*)0,&l_274,&l_274},{&l_274,&l_274,&l_274},{&l_274,&l_274,&l_274},{&l_274,&l_274,&l_274},{&l_274,&l_274,&l_274},{&l_274,&l_274,&l_274},{&l_274,(void*)0,&l_274},{(void*)0,&l_274,&l_274},{&l_274,&l_274,&l_274},{(void*)0,&l_274,&l_274}},{{&l_274,(void*)0,&l_274},{&l_274,&l_274,&l_274},{(void*)0,&l_274,&l_274},{(void*)0,&l_274,&l_274},{&l_274,&l_274,&l_274},{&l_274,&l_274,&l_274},{&l_274,(void*)0,&l_274},{&l_274,&l_274,&l_274},{(void*)0,&l_274,&l_274},{&l_274,&l_274,&l_274}},{{&l_274,(void*)0,&l_274},{(void*)0,&l_274,&l_274},{(void*)0,&l_274,&l_274},{&l_274,&l_274,&l_274},{&l_274,&l_274,&l_274},{&l_274,&l_274,&l_274},{&l_274,(void*)0,&l_274},{&l_274,&l_274,&l_274},{(void*)0,&l_274,&l_274},{&l_274,&l_274,&l_274}},{{&l_274,(void*)0,&l_274},{&l_274,&l_274,&l_274},{&l_274,&l_274,&l_274},{&l_274,(void*)0,&l_274},{&l_274,&l_274,&l_274},{&l_274,&l_274,&l_274},{&l_274,&l_274,&l_274},{&l_274,&l_274,(void*)0},{(void*)0,&l_274,&l_274},{&l_274,&l_274,&l_274}},{{&l_274,&l_274,&l_274},{&l_274,&l_274,&l_274},{&l_274,&l_274,&l_274},{&l_274,(void*)0,&l_274},{&l_274,&l_274,&l_274},{(void*)0,&l_274,&l_274},{&l_274,&l_274,&l_274},{&l_274,&l_274,&l_274},{&l_274,&l_274,&l_274},{&l_274,&l_274,&l_274}}};
            char *l_277[1][9] = {{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30}};
            int *l_278 = &g_210.f3;
            int i, j, k;
            (*l_266) = g_78.f0;
            (*l_278) = (((*l_266) = (p_57 > g_78.f0)) ^ (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s(((l_275 = &g_147) == l_276[3]), (4L <= (l_243[g_82] = p_57)))) , 255UL), 1)), 6)));
        }
        else
        {
            unsigned short l_281 = 0x8ACBL;
            const union U2 **l_307[4][9][2] = {{{(void*)0,&l_306},{(void*)0,(void*)0},{&l_306,(void*)0},{(void*)0,&l_306},{(void*)0,(void*)0},{&l_306,(void*)0},{(void*)0,&l_306},{(void*)0,(void*)0},{&l_306,(void*)0}},{{(void*)0,&l_306},{(void*)0,(void*)0},{&l_306,(void*)0},{(void*)0,&l_306},{(void*)0,(void*)0},{&l_306,(void*)0},{(void*)0,&l_306},{(void*)0,(void*)0},{&l_306,(void*)0}},{{(void*)0,&l_306},{(void*)0,(void*)0},{&l_306,(void*)0},{(void*)0,&l_306},{(void*)0,(void*)0},{&l_306,(void*)0},{(void*)0,&l_306},{(void*)0,(void*)0},{&l_306,(void*)0}},{{(void*)0,&l_306},{(void*)0,(void*)0},{&l_306,(void*)0},{(void*)0,&l_306},{(void*)0,(void*)0},{&l_306,(void*)0},{(void*)0,&l_306},{(void*)0,(void*)0},{&l_306,(void*)0}}};
            int i, j, k;
            if (p_57)
            {
                unsigned short l_289 = 0x8420L;
                for (p_57 = 0; (p_57 <= 4); p_57 += 1)
                {
                    union U2 *l_286 = &g_118[0][0][0];
                    union U2 **l_298 = &l_286;
                    int i;
                    if ((((-6L) <= (safe_lshift_func_int16_t_s_s((l_243[p_57] == (p_57 < (g_210.f2 = g_71))), p_57))) ^ l_281))
                    {
                        unsigned char **l_284 = (void*)0;
                        union U2 **l_285 = (void*)0;
                        l_284 = g_282[1][2][1];
                        l_286 = &g_118[0][0][0];
                        if (p_57)
                            continue;
                        if (l_243[p_57])
                            break;
                    }
                    else
                    {
                        unsigned char l_292 = 0UL;
                        char *l_296 = &g_30;
                        int l_297 = 0xA3C21802L;
                        int i;
                        l_243[g_82] = ((((safe_mod_func_uint8_t_u_u(((l_289 <= p_57) >= (safe_add_func_uint16_t_u_u((l_281 && l_243[p_57]), p_57))), (l_292 = p_57))) < ((*g_283) = ((safe_mod_func_int16_t_s_s(p_57, p_57)) == ((*l_296) = ((g_295 , p_57) | (*g_283)))))) != l_297) , p_57);
                        (*g_239) = (*g_239);
                    }
                    (*l_298) = l_286;
                }
            }
            else
            {
                int *l_301 = &l_243[3];
                int *l_305 = &g_75;
                g_295.f3 = ((*l_305) = (((safe_add_func_uint32_t_u_u((((*g_239) = &l_243[g_82]) != (void*)0), ((*l_301) = g_18))) > g_147) == (safe_sub_func_uint32_t_u_u(g_213.f0, (safe_unary_minus_func_uint8_t_u(l_281))))));
            }
            l_306 = l_306;
            l_256[5] = l_256[6];
        }
    }
    return l_308;
}







static union U2 func_60(const int p_61, unsigned short p_62, int p_63, int p_64)
{
    char l_69[9][8][3] = {{{0xC7L,0x4EL,(-1L)},{0x8AL,1L,(-1L)},{6L,(-1L),0x45L},{0xEBL,0x95L,1L},{(-6L),(-1L),0x95L},{0x5BL,1L,0xC4L},{0x5BL,0x4EL,0L},{(-6L),0x45L,1L}},{{0xEBL,(-1L),0L},{6L,(-7L),0xC4L},{0x8AL,(-7L),0x95L},{0xC7L,(-1L),1L},{0x51L,0x45L,0x45L},{0xC7L,0x4EL,(-1L)},{0x8AL,1L,(-1L)},{6L,(-1L),0x45L}},{{0xEBL,0x95L,1L},{(-6L),(-1L),0x95L},{0x5BL,1L,0xC4L},{0x5BL,6L,0L},{1L,(-1L),2L},{6L,0xC5L,0L},{1L,0xA3L,0x44L},{(-1L),0xA3L,0L}},{{0x4EL,0xC5L,(-3L)},{0xC4L,(-1L),(-1L)},{0x4EL,6L,(-2L)},{(-1L),2L,(-2L)},{1L,(-2L),(-1L)},{6L,0L,(-3L)},{1L,(-2L),0L},{0L,2L,0x44L}},{{0L,6L,0L},{1L,(-1L),2L},{6L,0xC5L,0L},{1L,0xA3L,0x44L},{(-1L),0xA3L,0L},{0x4EL,0xC5L,(-3L)},{0xC4L,(-1L),(-1L)},{0x4EL,6L,(-2L)}},{{(-1L),2L,(-2L)},{1L,(-2L),(-1L)},{6L,0L,(-3L)},{1L,(-2L),0L},{0L,2L,0x44L},{0L,6L,0L},{1L,(-1L),2L},{6L,0xC5L,0L}},{{1L,0xA3L,0x44L},{(-1L),0xA3L,0L},{0x4EL,0xC5L,(-3L)},{(-1L),6L,6L},{6L,1L,(-3L)},{0L,0xA3L,(-3L)},{(-7L),(-3L),6L},{1L,1L,0L}},{{0x95L,(-3L),1L},{6L,0xA3L,(-2L)},{6L,1L,1L},{0x95L,6L,0xA3L},{1L,0L,1L},{(-7L),(-1L),(-2L)},{0L,(-1L),1L},{6L,0L,0L}},{{(-1L),6L,6L},{6L,1L,(-3L)},{0L,0xA3L,(-3L)},{(-7L),(-3L),6L},{1L,1L,0L},{0x95L,(-3L),1L},{6L,0xA3L,(-2L)},{6L,1L,1L}}};
    int *l_70 = &g_71;
    union U0 *l_93 = &g_78;
    int l_160[1][9] = {{0x3B611467L,0x3B611467L,0x3B611467L,0x3B611467L,0x3B611467L,0x3B611467L,0x3B611467L,0x3B611467L,0x3B611467L}};
    union U1 l_187 = {0};
    int *l_222 = &g_71;
    union U2 l_242[9] = {{4294967293UL},{0x487D1E23L},{0x487D1E23L},{4294967293UL},{0x487D1E23L},{0x487D1E23L},{4294967293UL},{0x487D1E23L},{0x487D1E23L}};
    int i, j, k;
    (*l_70) = l_69[5][5][0];
    (*l_70) = (*l_70);
    for (g_71 = 13; (g_71 > 16); g_71++)
    {
        int *l_74 = &g_75;
        int **l_76 = &l_70;
        unsigned *l_81[2];
        union U2 l_190[3] = {{0xBD449D27L},{0xBD449D27L},{0xBD449D27L}};
        union U0 *l_212 = &g_213;
        int i;
        for (i = 0; i < 2; i++)
            l_81[i] = &g_82;
        (*l_74) = g_71;
        (*l_76) = &g_71;
    }
    if ((safe_mul_func_uint16_t_u_u((!(safe_lshift_func_uint16_t_u_s((p_61 && (*l_70)), 12))), ((*l_70) ^ (*l_70)))))
    {
        unsigned l_221[4][1] = {{0x6A78DC8BL},{0UL},{0x6A78DC8BL},{0UL}};
        int i, j;
        l_221[0][0] = p_64;
        p_64 = l_221[1][0];
        (*g_120) = p_61;
    }
    else
    {
        union U1 *l_233 = &l_187;
        int l_238 = 0xE6F4B5C2L;
        for (p_63 = 0; (p_63 >= 0); p_63 -= 1)
        {
            int **l_223[10] = {&g_120,(void*)0,&g_120,&g_120,(void*)0,&g_120,&g_120,&g_120,&l_70,&l_70};
            int i;
            g_120 = l_222;
            (*l_222) = (*g_120);
            for (g_71 = 0; (g_71 >= 0); g_71 -= 1)
            {
                char *l_224 = &l_69[5][5][0];
                int l_229 = (-8L);
                const int *l_241 = &l_238;
                const int * const *l_240 = &l_241;
                for (p_64 = 0; (p_64 <= 0); p_64 += 1)
                {
                    union U1 *l_231[9][4][5] = {{{&g_210,&l_187,&g_210,(void*)0,&g_210},{(void*)0,&g_210,&g_89,&g_89,&g_210},{&g_47,(void*)0,&g_89,(void*)0,&g_47},{&g_210,&g_89,&g_89,&g_210,(void*)0}},{{&g_210,(void*)0,&g_210,&l_187,&g_210},{&g_210,&g_210,&g_47,&g_89,(void*)0},{&g_47,&l_187,&g_89,&l_187,&g_47},{(void*)0,&g_89,&g_47,&g_210,&g_210}},{{&g_210,&l_187,&g_210,(void*)0,&g_210},{(void*)0,&g_210,&g_89,&g_89,&g_210},{&g_47,(void*)0,&g_89,(void*)0,&g_47},{&g_210,&g_89,&g_89,&g_210,(void*)0}},{{&g_210,(void*)0,&g_210,&l_187,&g_210},{&g_210,&g_210,&g_47,&g_89,(void*)0},{&g_47,&l_187,&g_89,&l_187,&g_47},{(void*)0,&g_89,&g_47,&g_210,&g_210}},{{&g_210,&l_187,&g_210,(void*)0,&g_210},{(void*)0,&g_210,&g_89,&g_89,&g_210},{&g_47,(void*)0,&g_89,(void*)0,&g_47},{&g_210,&g_89,&g_89,&g_210,(void*)0}},{{&g_210,(void*)0,&g_210,&l_187,&g_210},{&g_210,&g_210,&g_47,&g_89,(void*)0},{&g_47,&l_187,&g_89,&l_187,&g_47},{(void*)0,&g_89,&g_47,&g_210,&g_210}},{{&g_210,&l_187,&g_210,(void*)0,&g_210},{(void*)0,&g_210,&g_89,&g_89,&g_210},{&g_47,(void*)0,&g_89,(void*)0,&g_47},{&g_210,&g_89,&g_89,&g_210,(void*)0}},{{&g_210,(void*)0,&g_210,&l_187,&g_210},{&g_210,&g_210,&g_47,&g_89,(void*)0},{&g_47,&l_187,&g_89,&l_187,&g_47},{(void*)0,&g_89,&g_47,&g_210,&g_210}},{{&g_210,&l_187,&g_210,(void*)0,&g_210},{(void*)0,&g_210,&g_89,&g_89,&g_210},{&g_47,(void*)0,&g_89,(void*)0,&g_47},{&g_210,&g_89,&g_89,&g_210,(void*)0}}};
                    union U1 **l_232 = &l_231[0][1][3];
                    char l_234 = 0xCAL;
                    int * const l_235[2][8][9] = {{{(void*)0,&l_229,&g_75,&l_229,(void*)0,&l_229,(void*)0,&l_229,(void*)0},{(void*)0,&l_229,&l_229,&g_71,&l_229,(void*)0,&g_71,&g_71,(void*)0},{&g_75,&g_71,&l_229,&g_71,&g_75,&l_229,&l_229,&g_71,&g_71},{&l_229,&g_71,&l_229,&l_229,(void*)0,(void*)0,&g_71,(void*)0,&g_71},{&g_71,&g_71,(void*)0,&l_229,&g_71,&l_229,&g_71,&l_229,(void*)0},{&l_229,&l_229,(void*)0,&g_71,(void*)0,(void*)0,&g_71,&g_71,&g_71},{&g_75,&l_229,&l_229,&l_229,&g_75,&l_229,&l_229,&l_229,&g_71},{(void*)0,&g_71,(void*)0,&l_229,&l_229,(void*)0,&g_71,(void*)0,(void*)0}},{{&g_71,&l_229,(void*)0,&g_71,&g_71,&l_229,&g_71,&g_71,(void*)0},{(void*)0,&l_229,&l_229,&g_71,&l_229,(void*)0,&g_71,&g_71,(void*)0},{&g_75,&g_71,&l_229,&g_71,&g_75,&l_229,&l_229,&g_71,&g_71},{&l_229,&g_71,&l_229,&l_229,(void*)0,(void*)0,&g_71,(void*)0,&g_71},{&g_71,&g_71,(void*)0,&l_229,&g_71,&l_229,&g_71,&l_229,(void*)0},{&l_229,&l_229,(void*)0,&g_71,(void*)0,(void*)0,&g_71,&g_71,&g_71},{&g_75,&l_229,&l_229,&l_229,&g_75,&l_229,&l_229,&l_229,&g_71},{(void*)0,&g_71,(void*)0,&l_229,&l_229,(void*)0,&g_71,(void*)0,(void*)0}}};
                    int i, j, k;
                }
                p_64 = (*g_120);
            }
        }
    }
    return l_242[7];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_118[i][j][k].f0, "g_118[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_203[i], "g_203[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_210.f1, "g_210.f1", print_hash_value);
    transparent_crc(g_213.f0, "g_213.f0", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_322.f1, "g_322.f1", print_hash_value);
    transparent_crc(g_322.f2, "g_322.f2", print_hash_value);
    transparent_crc(g_322.f3, "g_322.f3", print_hash_value);
    transparent_crc(g_377, "g_377", print_hash_value);
    transparent_crc(g_391, "g_391", print_hash_value);
    transparent_crc(g_551, "g_551", print_hash_value);
    transparent_crc(g_654, "g_654", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_816[i].f0, "g_816[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_885[i][j][k].f0, "g_885[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1084, "g_1084", print_hash_value);
    transparent_crc(g_1110, "g_1110", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_1125[i][j][k], "g_1125[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1209[i], "g_1209[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1335[i][j][k], "g_1335[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1338, "g_1338", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1395[i].f0, "g_1395[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1494[i], "g_1494[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1495, "g_1495", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1576[i], "g_1576[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1725, "g_1725", print_hash_value);
    transparent_crc(g_1754, "g_1754", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
