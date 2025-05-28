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
   unsigned short f0;
   unsigned char f1;
   unsigned short f2;
   unsigned short f3;
};

union U1 {
   char * f0;
   unsigned f1;
   int f2;
   int f3;
};

union U2 {
   unsigned char f0;
   unsigned char f1;
   unsigned char f2;
};


static char g_10 = 0x8BL;
static const char *g_9[10] = {&g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10, &g_10};
static const char g_13 = (-1L);
static const char *g_12 = &g_13;
static char **g_55[1] = {(void*)0};
static int g_59 = 0L;
static int g_61 = 0x7DE97EE8L;
static unsigned g_62[1] = {0x40E81688L};
static short g_73 = 0x6F60L;
static char g_74 = 0x72L;
static unsigned g_78 = 4UL;
static unsigned short g_98[3][6][9] = {{{0x582EL, 0x582EL, 65535UL, 1UL, 65528UL, 1UL, 65535UL, 0x582EL, 0x582EL}, {0x582EL, 0x582EL, 65535UL, 1UL, 65528UL, 1UL, 65535UL, 0x582EL, 0x582EL}, {0x582EL, 0x582EL, 65535UL, 1UL, 65528UL, 1UL, 65535UL, 0x582EL, 0x582EL}, {0x582EL, 0x582EL, 65535UL, 1UL, 65528UL, 1UL, 65535UL, 0x582EL, 0x582EL}, {0x582EL, 0x582EL, 65535UL, 1UL, 65528UL, 1UL, 65535UL, 0x582EL, 0x582EL}, {0x582EL, 0x582EL, 65535UL, 1UL, 65528UL, 1UL, 65535UL, 0x582EL, 0x582EL}}, {{0x582EL, 0x582EL, 65535UL, 1UL, 65528UL, 1UL, 65535UL, 0x582EL, 0x582EL}, {0x582EL, 0x582EL, 65535UL, 1UL, 65528UL, 1UL, 65535UL, 0x582EL, 0x582EL}, {0x582EL, 0x582EL, 65535UL, 1UL, 65528UL, 1UL, 65535UL, 0x582EL, 0x582EL}, {0x582EL, 0x582EL, 65535UL, 1UL, 65528UL, 1UL, 65535UL, 0x582EL, 0x582EL}, {0x582EL, 0x582EL, 65535UL, 1UL, 65528UL, 1UL, 65535UL, 0x582EL, 0x582EL}, {0x582EL, 0x582EL, 65535UL, 1UL, 65528UL, 1UL, 65535UL, 0x582EL, 0x582EL}}, {{0x582EL, 0x582EL, 65535UL, 1UL, 65528UL, 1UL, 65535UL, 0x582EL, 0x582EL}, {0x582EL, 0x582EL, 65535UL, 1UL, 65528UL, 1UL, 65535UL, 0x582EL, 0x582EL}, {0x582EL, 0x582EL, 65535UL, 1UL, 65528UL, 1UL, 65535UL, 0x582EL, 0x582EL}, {0x582EL, 0x582EL, 65535UL, 1UL, 65528UL, 1UL, 65535UL, 0x582EL, 0x582EL}, {0x582EL, 0x582EL, 65535UL, 1UL, 65528UL, 1UL, 65535UL, 0x582EL, 0x582EL}, {0x582EL, 0x582EL, 65535UL, 1UL, 65528UL, 1UL, 65535UL, 0x582EL, 0x582EL}}};
static char *g_101 = &g_74;
static union U2 g_112 = {0UL};
static union U1 g_113 = {0};
static struct S0 g_114 = {65533UL,0x43L,0x0E1BL,0xDC04L};
static int g_142 = 0L;
static char *g_147[6] = {&g_74, &g_74, &g_74, &g_74, &g_74, &g_74};
static char **g_146 = &g_147[1];
static char ***g_179 = &g_55[0];
static int *g_183 = &g_113.f2;
static short g_226 = 8L;
static unsigned g_227 = 0x6B2B4994L;
static int g_267 = (-1L);
static union U2 g_307 = {0x2BL};
static union U2 *g_320[10] = {&g_307, (void*)0, &g_112, &g_112, (void*)0, &g_307, (void*)0, &g_112, &g_112, (void*)0};
static unsigned g_326 = 5UL;
static struct S0 g_362 = {0UL,255UL,65529UL,4UL};
static struct S0 *g_361 = &g_362;
static int g_408 = (-1L);
static char g_411[5] = {0x88L, 0x88L, 0x88L, 0x88L, 0x88L};
static unsigned g_416 = 0x91A45455L;
static unsigned short *g_421 = &g_98[0][0][6];
static unsigned short **g_420[6][8] = {{&g_421, &g_421, &g_421, &g_421, (void*)0, &g_421, &g_421, &g_421}, {&g_421, &g_421, &g_421, &g_421, (void*)0, &g_421, &g_421, &g_421}, {&g_421, &g_421, &g_421, &g_421, (void*)0, &g_421, &g_421, &g_421}, {&g_421, &g_421, &g_421, &g_421, (void*)0, &g_421, &g_421, &g_421}, {&g_421, &g_421, &g_421, &g_421, (void*)0, &g_421, &g_421, &g_421}, {&g_421, &g_421, &g_421, &g_421, (void*)0, &g_421, &g_421, &g_421}};
static short g_443 = 0x8058L;
static int g_445 = 0L;
static unsigned g_446[7][8][4] = {{{4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}}, {{4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}}, {{4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}}, {{4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}}, {{4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}}, {{4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}}, {{4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}, {4294967289UL, 1UL, 0xDF13AAC6L, 2UL}}};
static char g_455[7] = {0x9DL, 0x34L, 0x9DL, 0x34L, 0x9DL, 0x34L, 0x9DL};
static int g_471 = (-1L);
static unsigned g_472 = 6UL;
static char g_484 = 0xFDL;
static short g_485 = (-4L);
static unsigned char g_486 = 0UL;
static short g_498 = 0xA572L;
static int g_499 = 1L;
static int g_500 = 0x401BF38BL;
static int g_501 = (-1L);
static int g_503 = 0xDE8D8C13L;
static char g_504 = 0x08L;
static char g_505 = 0xFFL;
static unsigned g_506[3][1][10] = {{{6UL, 0xB7027E7AL, 0x71603BD8L, 0x9F880AFEL, 0xB7027E7AL, 4294967295UL, 0xB7027E7AL, 0x9F880AFEL, 0x71603BD8L, 0xB7027E7AL}}, {{6UL, 0xB7027E7AL, 0x71603BD8L, 0x9F880AFEL, 0xB7027E7AL, 4294967295UL, 0xB7027E7AL, 0x9F880AFEL, 0x71603BD8L, 0xB7027E7AL}}, {{6UL, 0xB7027E7AL, 0x71603BD8L, 0x9F880AFEL, 0xB7027E7AL, 4294967295UL, 0xB7027E7AL, 0x9F880AFEL, 0x71603BD8L, 0xB7027E7AL}}};
static int g_509 = (-1L);
static unsigned g_510 = 0x09A490E3L;
static int g_554 = (-9L);
static unsigned g_555 = 1UL;
static char g_609 = 0x6AL;
static int g_610 = 0x758725E3L;
static short g_611 = 0x6880L;
static unsigned char g_612 = 250UL;
static int *g_686[8][10] = {{(void*)0, &g_554, &g_554, &g_610, (void*)0, &g_554, &g_610, &g_142, &g_445, &g_503}, {(void*)0, &g_554, &g_554, &g_610, (void*)0, &g_554, &g_610, &g_142, &g_445, &g_503}, {(void*)0, &g_554, &g_554, &g_610, (void*)0, &g_554, &g_610, &g_142, &g_445, &g_503}, {(void*)0, &g_554, &g_554, &g_610, (void*)0, &g_554, &g_610, &g_142, &g_445, &g_503}, {(void*)0, &g_554, &g_554, &g_610, (void*)0, &g_554, &g_610, &g_142, &g_445, &g_503}, {(void*)0, &g_554, &g_554, &g_610, (void*)0, &g_554, &g_610, &g_142, &g_445, &g_503}, {(void*)0, &g_554, &g_554, &g_610, (void*)0, &g_554, &g_610, &g_142, &g_445, &g_503}, {(void*)0, &g_554, &g_554, &g_610, (void*)0, &g_554, &g_610, &g_142, &g_445, &g_503}};
static unsigned short g_721 = 0UL;
static struct S0 g_755 = {1UL,255UL,0x9E4FL,0x7695L};
static union U1 *g_771[5][8] = {{&g_113, (void*)0, &g_113, &g_113, &g_113, &g_113, &g_113, &g_113}, {&g_113, (void*)0, &g_113, &g_113, &g_113, &g_113, &g_113, &g_113}, {&g_113, (void*)0, &g_113, &g_113, &g_113, &g_113, &g_113, &g_113}, {&g_113, (void*)0, &g_113, &g_113, &g_113, &g_113, &g_113, &g_113}, {&g_113, (void*)0, &g_113, &g_113, &g_113, &g_113, &g_113, &g_113}};
static unsigned *g_799[1][8] = {{&g_326, &g_326, &g_326, &g_326, &g_326, &g_326, &g_326, &g_326}};
static unsigned **g_798 = &g_799[0][2];
static unsigned short g_815 = 65535UL;
static int ** const g_846 = &g_183;
static int ** const *g_845 = &g_846;
static unsigned g_854 = 0UL;
static unsigned char *g_870[8] = {&g_612, &g_755.f1, &g_612, &g_755.f1, &g_612, &g_755.f1, &g_612, &g_755.f1};
static unsigned char **g_869 = &g_870[6];
static int g_884[7][1][1] = {{{0x2659C7EAL}}, {{0x2659C7EAL}}, {{0x2659C7EAL}}, {{0x2659C7EAL}}, {{0x2659C7EAL}}, {{0x2659C7EAL}}, {{0x2659C7EAL}}};



static union U2 func_1(void);
static unsigned func_2(const char * p_3, char * p_4, char * p_5, char * p_6, unsigned char p_7);
static char * func_14(struct S0 p_15, const int p_16, const char * p_17, char * p_18, struct S0 p_19);
static struct S0 func_20(unsigned short p_21, short p_22, int p_23);
static short func_26(char ** p_27);
static char ** func_28(char ** p_29, char ** p_30, union U1 p_31, char ** p_32, unsigned char p_33);
static char ** func_36(char * p_37);
static char * func_38(int p_39, short p_40, union U1 p_41, char p_42);
static int func_45(union U2 p_46, unsigned p_47, int p_48, int p_49);
static unsigned func_51(unsigned p_52, unsigned short p_53);
static union U2 func_1(void)
{
    unsigned l_8[8];
    const char **l_11[2][6][9] = {{{(void*)0, &g_9[9], (void*)0, &g_9[4], (void*)0, (void*)0, &g_9[9], &g_9[9], (void*)0}, {(void*)0, &g_9[9], (void*)0, &g_9[4], (void*)0, (void*)0, &g_9[9], &g_9[9], (void*)0}, {(void*)0, &g_9[9], (void*)0, &g_9[4], (void*)0, (void*)0, &g_9[9], &g_9[9], (void*)0}, {(void*)0, &g_9[9], (void*)0, &g_9[4], (void*)0, (void*)0, &g_9[9], &g_9[9], (void*)0}, {(void*)0, &g_9[9], (void*)0, &g_9[4], (void*)0, (void*)0, &g_9[9], &g_9[9], (void*)0}, {(void*)0, &g_9[9], (void*)0, &g_9[4], (void*)0, (void*)0, &g_9[9], &g_9[9], (void*)0}}, {{(void*)0, &g_9[9], (void*)0, &g_9[4], (void*)0, (void*)0, &g_9[9], &g_9[9], (void*)0}, {(void*)0, &g_9[9], (void*)0, &g_9[4], (void*)0, (void*)0, &g_9[9], &g_9[9], (void*)0}, {(void*)0, &g_9[9], (void*)0, &g_9[4], (void*)0, (void*)0, &g_9[9], &g_9[9], (void*)0}, {(void*)0, &g_9[9], (void*)0, &g_9[4], (void*)0, (void*)0, &g_9[9], &g_9[9], (void*)0}, {(void*)0, &g_9[9], (void*)0, &g_9[4], (void*)0, (void*)0, &g_9[9], &g_9[9], (void*)0}, {(void*)0, &g_9[9], (void*)0, &g_9[4], (void*)0, (void*)0, &g_9[9], &g_9[9], (void*)0}}};
    char *l_35[7][9][4] = {{{&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}}, {{&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}}, {{&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}}, {{&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}}, {{&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}}, {{&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}}, {{&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}}};
    char **l_34 = &l_35[6][5][3];
    union U2 l_50[9] = {{0xFBL}, {0xFBL}, {0xFBL}, {0xFBL}, {0xFBL}, {0xFBL}, {0xFBL}, {0xFBL}, {0xFBL}};
    char * const *l_54 = &l_35[6][5][3];
    int *l_130 = &g_59;
    union U1 l_131 = {0};
    int l_733 = 0x5ED10588L;
    char *l_816 = (void*)0;
    int l_894[2];
    struct S0 l_895 = {0x71ECL,0UL,65533UL,0UL};
    struct S0 *l_896 = &l_895;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_8[i] = 0xB64B5C6FL;
    for (i = 0; i < 2; i++)
        l_894[i] = 1L;
    l_894[1] ^= (((func_2((g_12 = (l_8[2] , (g_9[3] = g_9[9]))), func_14(func_20((safe_lshift_func_int16_t_s_u(func_26(func_28(l_34, func_36(func_38(((safe_mod_func_int32_t_s_s(((*l_130) = (!func_45(l_50[6], func_51((l_54 == (g_10 , g_55[0])), g_13), g_74, l_8[2]))), l_50[6].f0)) == l_8[4]), g_61, l_131, l_8[2])), g_113, g_146, g_112.f2)), l_8[2])), l_733, g_455[2]), g_509, (*l_34), (*l_34), g_755), (*g_146), l_816, g_755.f0) && 0xD6AC8ADCL) != l_50[6].f1) && (*l_130));

    ;

    ;

        ;

    ;

    (*l_896) = l_895;
    return l_50[8];

    }







static unsigned func_2(const char * p_3, char * p_4, char * p_5, char * p_6, unsigned char p_7)
{
    unsigned l_825 = 4294967290UL;
    int l_830 = (-1L);
    union U2 l_831 = {0UL};
    int *l_832 = &g_499;
    struct S0 l_857 = {65535UL,0x3EL,0x4E6CL,65534UL};
    union U1 l_860 = {0};
    int l_878 = 0x1533F000L;
    int l_886 = 2L;
    int l_888[8];
    int i;
    for (i = 0; i < 8; i++)
        l_888[i] = (-8L);
    (*l_832) ^= (safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s(((l_830 = ((-10L) ^ (0x74AE3365L && (((p_7 || (g_62[0] || (safe_lshift_func_int16_t_s_s(g_74, 9)))) < (safe_add_func_int8_t_s_s((l_825 = 0L), (safe_add_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u(g_73, l_830)) ^ ((l_831 , l_830) && g_416)), p_7))))) , p_7)))) && l_831.f1), 1)), 12));
    if ((0x187AL >= ((*g_421) ^= (g_485 ^ (*p_3)))))
    {
        int **l_833 = (void*)0;
        union U2 l_849 = {0xE2L};
        int l_852[8][7][4] = {{{2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}}, {{2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}}, {{2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}}, {{2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}}, {{2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}}, {{2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}}, {{2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}}, {{2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}, {2L, (-8L), 0L, 0x6F119757L}}};
        int i, j, k;
        g_686[5][7] = (void*)0;
        for (g_755.f1 = 0; (g_755.f1 <= 7); g_755.f1 += 1)
        {
            unsigned char *l_844[9][10][2] = {{{(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}}, {{(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}}, {{(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}}, {{(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}}, {{(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}}, {{(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}}, {{(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}}, {{(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}}, {{(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}, {(void*)0, &g_612}}};
            int ** const **l_847 = (void*)0;
            int ** const **l_848 = &g_845;
            int l_850 = 0x84F38DDAL;
            char *l_851[10] = {&g_504, &g_504, &g_411[0], &g_504, &g_504, &g_411[0], &g_504, &g_504, &g_411[0], &g_504};
            unsigned *l_853[7][7][5] = {{{&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}}, {{&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}}, {{&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}}, {{&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}}, {{&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}}, {{&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}}, {{&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}, {&g_472, &g_446[2][2][2], &g_472, &g_78, &g_62[0]}}};
            int i, j, k;
            (*l_832) |= p_7;
            (*l_832) = (0xDFC86B35L < (safe_add_func_int8_t_s_s(func_51((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((!((*g_421) = (0x5AD2L || (safe_rshift_func_int8_t_s_u((((g_446[2][2][2] = ((0xEEL | (l_852[4][2][1] ^= func_51((safe_sub_func_int32_t_s_s(((((*l_832) = (*l_832)) & (((*l_848) = g_845) != &g_846)) == g_98[0][0][6]), (g_510 && func_45(l_849, (**g_798), p_7, l_850)))), (*g_421)))) , g_471)) ^ g_307.f2) >= 0x9784L), 5))))) & g_501), 7)), p_7)), p_7), g_854)));
            return p_7;
        }
        (*g_846) = &l_852[5][6][2];

        ;
        for (g_504 = 0; (g_504 >= 14); g_504 = safe_add_func_uint8_t_u_u(g_504, 9))
        {
            struct S0 *l_858[2][2] = {{&l_857, &g_114}, {&l_857, &g_114}};
            int i, j;
            g_114 = l_857;
        }
    }
    else
    {
        char l_859[3][6][5] = {{{0x13L, (-10L), 4L, 0xEAL, 4L}, {0x13L, (-10L), 4L, 0xEAL, 4L}, {0x13L, (-10L), 4L, 0xEAL, 4L}, {0x13L, (-10L), 4L, 0xEAL, 4L}, {0x13L, (-10L), 4L, 0xEAL, 4L}, {0x13L, (-10L), 4L, 0xEAL, 4L}}, {{0x13L, (-10L), 4L, 0xEAL, 4L}, {0x13L, (-10L), 4L, 0xEAL, 4L}, {0x13L, (-10L), 4L, 0xEAL, 4L}, {0x13L, (-10L), 4L, 0xEAL, 4L}, {0x13L, (-10L), 4L, 0xEAL, 4L}, {0x13L, (-10L), 4L, 0xEAL, 4L}}, {{0x13L, (-10L), 4L, 0xEAL, 4L}, {0x13L, (-10L), 4L, 0xEAL, 4L}, {0x13L, (-10L), 4L, 0xEAL, 4L}, {0x13L, (-10L), 4L, 0xEAL, 4L}, {0x13L, (-10L), 4L, 0xEAL, 4L}, {0x13L, (-10L), 4L, 0xEAL, 4L}}};
        unsigned *l_865 = &l_860.f1;
        int l_866 = 0xC3465D36L;
        unsigned char * const l_868[10] = {&g_112.f2, &g_112.f0, &g_112.f2, &g_112.f0, &g_112.f2, &g_112.f0, &g_112.f2, &g_112.f0, &g_112.f2, &g_112.f0};
        unsigned char * const *l_867[2];
        int l_875 = (-3L);
        int l_876 = 4L;
        int l_877 = 0xD7FE6370L;
        int l_879 = 0x9FAF1FEDL;
        int l_880 = (-7L);
        int l_881 = (-1L);
        int l_882 = 3L;
        int l_883 = 0x8029276AL;
        int l_885 = 0x464EE10AL;
        int l_887[4][9][7] = {{{2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}}, {{2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}}, {{2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}}, {{2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}, {2L, 0x80B0CF72L, 5L, (-1L), (-1L), 5L, 0xD2340017L}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_867[i] = &l_868[2];
        for (l_857.f2 = 0; (l_857.f2 <= 5); l_857.f2 += 1)
        {
            int i;
            return g_455[l_857.f2];
        }
        l_866 ^= (l_859[2][3][1] || (((((4294967295UL || (l_860 , 0L)) <= p_7) ^ 251UL) | (*l_832)) , (safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((*l_865) = ((0xCF42L < (((*l_832) ^ g_112.f0) != l_859[2][5][2])) & l_859[2][3][1])), (*l_832))), (*l_832)))));
        if ((l_867[1] == g_869))
        {
            int *l_871 = &g_267;
            int *l_872 = &g_59;
            int *l_873 = &g_509;
            int *l_874[1][10][3] = {{{&l_830, &l_830, &l_830}, {&l_830, &l_830, &l_830}, {&l_830, &l_830, &l_830}, {&l_830, &l_830, &l_830}, {&l_830, &l_830, &l_830}, {&l_830, &l_830, &l_830}, {&l_830, &l_830, &l_830}, {&l_830, &l_830, &l_830}, {&l_830, &l_830, &l_830}, {&l_830, &l_830, &l_830}}};
            unsigned l_889[10] = {0xBCB93321L, 0x907E39B3L, 0x1CCF790DL, 0x1CCF790DL, 0x907E39B3L, 0xBCB93321L, 0x907E39B3L, 0x1CCF790DL, 0x1CCF790DL, 0x907E39B3L};
            int i, j, k;
            --l_889[0];
            (**g_845) = l_872;

            ;
        }
        else
        {
            for (g_472 = (-21); (g_472 <= 10); g_472 = safe_add_func_uint32_t_u_u(g_472, 4))
            {
                if (p_7)
                    break;
            }
        }


    }



    return g_362.f2;
}







static char * func_14(struct S0 p_15, const int p_16, const char * p_17, char * p_18, struct S0 p_19)
{
    unsigned l_756 = 0xFB5AF61FL;
    int l_775[4][8][8] = {{{0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}, {0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}, {0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}, {0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}, {0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}, {0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}, {0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}, {0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}}, {{0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}, {0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}, {0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}, {0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}, {0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}, {0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}, {0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}, {0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}}, {{0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}, {0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}, {0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}, {0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}, {0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}, {0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}, {0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}, {0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}}, {{0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}, {0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}, {0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}, {0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}, {0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}, {0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}, {0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}, {0xD428CDD7L, 0xA312050AL, 0x7EEECA02L, (-1L), 0xF883C20BL, 0x4FFEFC05L, (-1L), 0xF883C20BL}}};
    unsigned l_784 = 0UL;
    int **l_786 = &g_686[3][3];
    int i, j, k;
    if (l_756)
    {
        unsigned l_767 = 7UL;
        union U1 **l_770 = (void*)0;
        union U1 *l_773 = &g_113;
        union U1 **l_772 = &l_773;
        int *l_774[4];
        unsigned l_776 = 0x529679ACL;
        int i;
        for (i = 0; i < 4; i++)
            l_774[i] = &g_503;
        l_775[3][0][2] = (safe_lshift_func_int16_t_s_s((((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((l_756 & l_756) & (safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((~(l_767 , 1UL)), (safe_add_func_uint16_t_u_u(1UL, ((&g_113 == ((*l_772) = (g_771[1][0] = ((l_756 , ((-1L) || (((g_362.f1 , 7UL) & (-3L)) == 8L))) , &g_113)))) ^ g_455[6]))))), 0xD8399B20L))), 6)), l_767)) , p_16) || l_767), 8));
        l_776--;
    }
    else
    {
        unsigned l_779 = 0x59E2AC1CL;
        unsigned *l_780 = (void*)0;
        unsigned *l_781 = &g_78;
        unsigned *l_785 = &l_779;
        int ***l_787 = (void*)0;
        int ***l_788 = &l_786;
        int *l_789 = &l_775[0][5][6];
        int *l_790 = &g_503;
        (*l_788) = ((~((l_779 <= p_15.f2) , ((++(*l_781)) == ((*l_785) = l_784)))) , l_786);
        (*l_790) = ((*l_789) = 2L);
    }
    for (g_362.f1 = (-15); (g_362.f1 >= 8); g_362.f1 = safe_add_func_int16_t_s_s(g_362.f1, 7))
    {
        int *l_793 = &g_267;
        (*l_793) = p_19.f3;
        for (g_362.f3 = 0; (g_362.f3 == 55); g_362.f3 = safe_add_func_uint16_t_u_u(g_362.f3, 1))
        {
            unsigned char **l_804 = (void*)0;
            unsigned char *l_806 = &g_112.f2;
            unsigned char **l_805 = &l_806;
            unsigned char **l_807 = (void*)0;
            unsigned char **l_808 = (void*)0;
            unsigned char *l_810 = &g_112.f1;
            unsigned char **l_809 = &l_810;
            unsigned char *l_812 = (void*)0;
            unsigned char **l_811 = &l_812;
            int l_813 = 0x6375C653L;
            char *l_814[2][8][3] = {{{&g_74, &g_455[2], &g_484}, {&g_74, &g_455[2], &g_484}, {&g_74, &g_455[2], &g_484}, {&g_74, &g_455[2], &g_484}, {&g_74, &g_455[2], &g_484}, {&g_74, &g_455[2], &g_484}, {&g_74, &g_455[2], &g_484}, {&g_74, &g_455[2], &g_484}}, {{&g_74, &g_455[2], &g_484}, {&g_74, &g_455[2], &g_484}, {&g_74, &g_455[2], &g_484}, {&g_74, &g_455[2], &g_484}, {&g_74, &g_455[2], &g_484}, {&g_74, &g_455[2], &g_484}, {&g_74, &g_455[2], &g_484}, {&g_74, &g_455[2], &g_484}}};
            int i, j, k;
            (*l_793) = ((((*l_793) || (!((g_798 != (void*)0) || (g_815 = ((safe_lshift_func_int16_t_s_u(((p_19.f3 | ((+(0xCA39FF73L && (-1L))) || ((+((~(safe_rshift_func_uint16_t_u_u((func_20((*g_421), (((((*l_809) = ((*l_805) = (void*)0)) != ((*l_811) = p_18)) , l_813) | p_19.f0), l_813) , (*l_793)), (*g_421)))) <= 0x550E775EL)) | l_813))) , 0x34C9L), p_19.f0)) >= 0xAFL))))) && 0xE43AL) , p_15.f1);

            ;
            ;
            ;
        }
    }
    return (*g_146);


}







static struct S0 func_20(unsigned short p_21, short p_22, int p_23)
{
    unsigned char l_739 = 9UL;
    unsigned *l_749[9][5] = {{&g_506[0][0][9], (void*)0, &g_506[0][0][9], &g_227, &g_506[2][0][3]}, {&g_506[0][0][9], (void*)0, &g_506[0][0][9], &g_227, &g_506[2][0][3]}, {&g_506[0][0][9], (void*)0, &g_506[0][0][9], &g_227, &g_506[2][0][3]}, {&g_506[0][0][9], (void*)0, &g_506[0][0][9], &g_227, &g_506[2][0][3]}, {&g_506[0][0][9], (void*)0, &g_506[0][0][9], &g_227, &g_506[2][0][3]}, {&g_506[0][0][9], (void*)0, &g_506[0][0][9], &g_227, &g_506[2][0][3]}, {&g_506[0][0][9], (void*)0, &g_506[0][0][9], &g_227, &g_506[2][0][3]}, {&g_506[0][0][9], (void*)0, &g_506[0][0][9], &g_227, &g_506[2][0][3]}, {&g_506[0][0][9], (void*)0, &g_506[0][0][9], &g_227, &g_506[2][0][3]}};
    unsigned ** const l_748 = &l_749[3][1];
    struct S0 l_754 = {1UL,0UL,65533UL,65535UL};
    int i, j;
    for (g_267 = 3; (g_267 >= 11); g_267++)
    {
        int **l_736 = &g_686[5][7];
        (*l_736) = &g_503;
    }
    if (((safe_add_func_uint32_t_u_u(g_114.f3, (0x57FEC03FL >= l_739))) <= l_739))
    {
        int l_742 = 1L;
        unsigned *l_745 = &g_446[5][0][1];
        int l_750 = 0xF408D152L;
        int **l_751[3];
        int i;
        for (i = 0; i < 3; i++)
            l_751[i] = &g_183;
        l_750 |= ((safe_rshift_func_uint16_t_u_s(l_742, (safe_add_func_uint16_t_u_u(((((*l_745)++) != ((void*)0 == l_748)) && 0x37L), (l_739 <= ((p_23 >= ((0x3186E500L && (l_739 , 0x45D7A64FL)) , l_739)) == 8UL)))))) , 5L);
        g_183 = &l_750;

        ;
    }
    else
    {
        int *l_752 = (void*)0;
        int *l_753 = &g_267;
        (*l_753) = p_23;
    }
    return l_754;
}







static short func_26(char ** p_27)
{
    union U2 **l_322 = &g_320[6];
    union U2 ***l_321 = &l_322;
    unsigned *l_325 = &g_326;
    union U2 * const *l_327 = &g_320[6];
    int *l_328 = &g_113.f3;
    int l_329 = 0xA0099702L;
    int *l_330 = &g_59;
    char l_354 = (-4L);
    int l_401 = 0xACDFE1E8L;
    int l_414 = 0x9802F6E7L;
    int l_415 = 0L;
    int l_469 = 0x9071348BL;
    int l_470 = 0xB925C6C3L;
    union U1 l_478 = {0};
    unsigned l_480 = 0x987D9713L;
    struct S0 l_560 = {65535UL,0UL,65527UL,6UL};
    unsigned short l_594 = 65530UL;
    unsigned short l_615 = 0xE2F4L;
    unsigned char *l_625 = (void*)0;
    unsigned char **l_624 = &l_625;
    union U1 *l_634 = &g_113;
    int l_700 = 9L;
    int l_701 = 0x3A394C9FL;
    l_329 |= (((*l_321) = &g_320[0]) != (((*l_325) = (g_227 &= (safe_lshift_func_uint16_t_u_u(0UL, 6)))) , l_327));
    (*l_330) ^= l_329;
    for (g_142 = 24; (g_142 == (-12)); g_142--)
    {
        unsigned char l_333 = 0x9BL;
        unsigned *l_336[7][1] = {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}};
        unsigned *l_339 = &g_227;
        unsigned **l_340 = &l_325;
        union U2 l_363 = {0x92L};
        char * const ** const *l_379 = (void*)0;
        struct S0 l_387 = {0xEA80L,1UL,0x0475L,0xE080L};
        int l_409 = 0x428AD8CDL;
        int l_410 = 0xF7BD5143L;
        int l_412 = 0L;
        int l_413[9][1][4] = {{{3L, 0xB2AFB7D9L, (-1L), 0x37E826E1L}}, {{3L, 0xB2AFB7D9L, (-1L), 0x37E826E1L}}, {{3L, 0xB2AFB7D9L, (-1L), 0x37E826E1L}}, {{3L, 0xB2AFB7D9L, (-1L), 0x37E826E1L}}, {{3L, 0xB2AFB7D9L, (-1L), 0x37E826E1L}}, {{3L, 0xB2AFB7D9L, (-1L), 0x37E826E1L}}, {{3L, 0xB2AFB7D9L, (-1L), 0x37E826E1L}}, {{3L, 0xB2AFB7D9L, (-1L), 0x37E826E1L}}, {{3L, 0xB2AFB7D9L, (-1L), 0x37E826E1L}}};
        short l_449 = 0x9221L;
        short l_454 = 0x6B5AL;
        union U2 ***l_513 = &l_322;
        union U1 l_619 = {0};
        int l_622 = 0x8A1EE8BDL;
        unsigned char **l_626 = &l_625;
        int i, j, k;
        if ((l_333 , (((safe_add_func_uint8_t_u_u(255UL, ((((g_78--) , l_339) == ((*l_340) = (void*)0)) & (safe_rshift_func_int8_t_s_s(l_333, (((((l_333 && g_326) >= g_112.f1) == g_307.f2) & 0xFC92BCA2L) >= l_333)))))) != 1L) <= g_227)))
        {
            union U2 l_350 = {0x08L};
            unsigned *l_353 = &g_227;
            struct S0 *l_359 = &g_114;
            int l_372 = 9L;
            unsigned short l_377 = 1UL;
            int l_406 = 0L;
            int l_407 = 4L;
            int **l_419 = &g_183;
            unsigned short **l_422 = &g_421;
            if ((g_227 || (safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(((*l_330) ^ (safe_mod_func_int32_t_s_s((*l_330), ((((l_333 , ((safe_unary_minus_func_int32_t_s((((func_45(l_350, (((safe_mod_func_uint8_t_u_u(0x01L, l_350.f1)) || ((void*)0 == l_353)) , l_350.f0), g_226, l_350.f0) || l_333) > (-8L)) | 0x7286L))) , l_333)) >= l_350.f0) | l_333) , l_350.f1)))), (*l_330))), l_354))))
            {
                for (l_329 = 26; (l_329 != 28); l_329 = safe_add_func_int32_t_s_s(l_329, 3))
                {
                    for (g_114.f1 = 0; (g_114.f1 < 21); ++g_114.f1)
                    {
                        struct S0 **l_360[7][7] = {{(void*)0, &l_359, &l_359, &l_359, &l_359, &l_359, &l_359}, {(void*)0, &l_359, &l_359, &l_359, &l_359, &l_359, &l_359}, {(void*)0, &l_359, &l_359, &l_359, &l_359, &l_359, &l_359}, {(void*)0, &l_359, &l_359, &l_359, &l_359, &l_359, &l_359}, {(void*)0, &l_359, &l_359, &l_359, &l_359, &l_359, &l_359}, {(void*)0, &l_359, &l_359, &l_359, &l_359, &l_359, &l_359}, {(void*)0, &l_359, &l_359, &l_359, &l_359, &l_359, &l_359}};
                        int i, j;
                        g_361 = l_359;

                        ;
                        (*l_330) = l_333;
                    }
                    if (l_350.f2)
                        continue;
                }
            }
            else
            {
                unsigned **l_366 = &l_325;
                unsigned short *l_371[5] = {(void*)0, &g_114.f0, (void*)0, &g_114.f0, (void*)0};
                unsigned *l_378 = &g_326;
                int **l_383 = &l_328;
                int *l_388 = (void*)0;
                int *l_389 = &g_59;
                int *l_390 = &l_329;
                int *l_391 = (void*)0;
                int *l_392 = &l_329;
                int *l_393 = &g_267;
                int *l_394 = &g_113.f3;
                int *l_395 = &g_59;
                int *l_396 = (void*)0;
                int *l_397 = &g_113.f2;
                int *l_398 = &g_113.f3;
                int l_399 = 2L;
                int l_400 = 9L;
                int *l_402 = (void*)0;
                int *l_403 = &l_372;
                int *l_404 = &l_372;
                int *l_405[7][9][1] = {{{&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}}, {{&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}}, {{&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}}, {{&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}}, {{&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}}, {{&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}}, {{&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}, {&l_329}}};
                int i, j, k;
                if (func_51(func_45(l_363, l_333, (safe_sub_func_uint8_t_u_u(func_51(((*l_353) = (l_366 == (void*)0)), (safe_lshift_func_uint8_t_u_u(((func_51(((safe_add_func_uint16_t_u_u((--g_98[0][0][6]), (safe_mod_func_uint16_t_u_u(((l_377 , (((((*l_378) = g_267) , g_74) , l_379) == (void*)0)) && 255UL), g_226)))) & l_363.f1), g_362.f2) ^ g_362.f0) , l_363.f1), g_112.f0))), 255UL)), l_363.f2), g_362.f0))
                {
                    (*l_330) = (safe_lshift_func_int8_t_s_u(l_363.f2, 6));
                }
                else
                {
                    if (l_372)
                    {
                        int l_382 = 1L;
                        int *l_386 = &l_372;
                        (*l_386) |= func_51((l_382 ^ ((&g_361 == (void*)0) | (l_383 != (void*)0))), (((*g_361) , ((*l_330) ^ (g_147[1] == ((l_350 , 0xD9A0E590L) , (void*)0)))) && g_307.f1));
                        if ((*l_386))
                            continue;
                    }
                    else
                    {
                        (*l_359) = l_387;
                        (*l_383) = (void*)0;

                        ;
                    }

                    ;
                    return g_112.f0;


                }
                g_416++;
                return g_62[0];


            }
            if ((func_45(l_363, l_372, (((*l_419) = &g_142) != &l_401), g_307.f2) > g_78))
            {
                unsigned l_430 = 4294967288UL;
                int l_441 = 6L;
                int l_442[10][10] = {{(-9L), 8L, (-4L), 4L, 1L, 0xB9CD5202L, 0xC67C49C3L, (-1L), (-8L), (-8L)}, {(-9L), 8L, (-4L), 4L, 1L, 0xB9CD5202L, 0xC67C49C3L, (-1L), (-8L), (-8L)}, {(-9L), 8L, (-4L), 4L, 1L, 0xB9CD5202L, 0xC67C49C3L, (-1L), (-8L), (-8L)}, {(-9L), 8L, (-4L), 4L, 1L, 0xB9CD5202L, 0xC67C49C3L, (-1L), (-8L), (-8L)}, {(-9L), 8L, (-4L), 4L, 1L, 0xB9CD5202L, 0xC67C49C3L, (-1L), (-8L), (-8L)}, {(-9L), 8L, (-4L), 4L, 1L, 0xB9CD5202L, 0xC67C49C3L, (-1L), (-8L), (-8L)}, {(-9L), 8L, (-4L), 4L, 1L, 0xB9CD5202L, 0xC67C49C3L, (-1L), (-8L), (-8L)}, {(-9L), 8L, (-4L), 4L, 1L, 0xB9CD5202L, 0xC67C49C3L, (-1L), (-8L), (-8L)}, {(-9L), 8L, (-4L), 4L, 1L, 0xB9CD5202L, 0xC67C49C3L, (-1L), (-8L), (-8L)}, {(-9L), 8L, (-4L), 4L, 1L, 0xB9CD5202L, 0xC67C49C3L, (-1L), (-8L), (-8L)}};
                unsigned char l_461 = 0xF8L;
                struct S0 *l_464[6][3] = {{&g_362, &g_362, &l_387}, {&g_362, &g_362, &l_387}, {&g_362, &g_362, &l_387}, {&g_362, &g_362, &l_387}, {&g_362, &g_362, &l_387}, {&g_362, &g_362, &l_387}};
                union U2 ***l_479 = (void*)0;
                unsigned char l_489 = 0x13L;
                int i, j;
                l_422 = g_420[5][1];

                ;
                if ((safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s((**l_419), (safe_lshift_func_uint16_t_u_s(l_363.f1, (safe_unary_minus_func_uint32_t_u((++l_430))))))), ((!func_51(g_142, (**l_419))) && g_326))))
                {
                    short *l_434 = &g_226;
                    int l_435 = 0L;
                    union U2 l_436 = {0xCBL};
                    int l_444[1][6][7] = {{{0L, 0x6FEABFEDL, 0x0D7941CDL, 0x6FEABFEDL, 0L, 0x81FF36D5L, 0L}, {0L, 0x6FEABFEDL, 0x0D7941CDL, 0x6FEABFEDL, 0L, 0x81FF36D5L, 0L}, {0L, 0x6FEABFEDL, 0x0D7941CDL, 0x6FEABFEDL, 0L, 0x81FF36D5L, 0L}, {0L, 0x6FEABFEDL, 0x0D7941CDL, 0x6FEABFEDL, 0L, 0x81FF36D5L, 0L}, {0L, 0x6FEABFEDL, 0x0D7941CDL, 0x6FEABFEDL, 0L, 0x81FF36D5L, 0L}, {0L, 0x6FEABFEDL, 0x0D7941CDL, 0x6FEABFEDL, 0L, 0x81FF36D5L, 0L}}};
                    int i, j, k;
                    if (((((safe_unary_minus_func_int16_t_s(((*l_434) = ((void*)0 == &p_27)))) & l_435) & func_45(l_436, ((~(g_62[0] = 7UL)) , l_333), l_436.f1, (*g_183))) >= (*g_183)))
                    {
                        int *l_437 = &l_435;
                        int *l_438 = &l_406;
                        int *l_439 = (void*)0;
                        int *l_440[1][8][1] = {{{&l_413[2][0][0]}, {&l_413[2][0][0]}, {&l_413[2][0][0]}, {&l_413[2][0][0]}, {&l_413[2][0][0]}, {&l_413[2][0][0]}, {&l_413[2][0][0]}, {&l_413[2][0][0]}}};
                        int i, j, k;
                        g_446[2][2][2]--;
                    }
                    else
                    {
                        if ((*g_183))
                            break;
                        return l_449;
                    }
                    (*l_419) = (*l_419);
                    if ((safe_lshift_func_uint16_t_u_u((+l_442[7][7]), 3)))
                    {
                        (*l_419) = (void*)0;

                        ;
                    }
                    else
                    {
                        (*l_419) = &l_414;

                        ;
                        (**l_419) |= (safe_add_func_uint16_t_u_u(l_333, l_454));
                    }

                    ;
                }
                else
                {
                    union U2 l_458 = {0x84L};
                    int l_459 = 0xB24C716AL;
                    int l_467 = (-1L);
                    int l_468 = 0x2ADA288BL;
                    int l_502 = 1L;
                    if ((g_455[6] , (g_411[2] , (((g_326 | (g_411[0] >= (l_459 ^= (safe_sub_func_uint16_t_u_u((*g_421), ((l_458 , l_441) <= ((l_458.f2 >= ((0xF35FL ^ (*g_421)) && (-1L))) , (*l_330)))))))) < (*l_330)) , (*g_183)))))
                    {
                        int *l_465 = (void*)0;
                        int *l_466[5][2] = {{&l_329, &l_441}, {&l_329, &l_441}, {&l_329, &l_441}, {&l_329, &l_441}, {&l_329, &l_441}};
                        int i, j;
                        l_459 |= func_45(l_350, (**l_419), (0x06FAL <= (*g_421)), (g_113 , (safe_unary_minus_func_uint32_t_u((((*l_330) = (l_458.f1 > l_461)) | func_45(l_458, (((safe_lshift_func_int16_t_s_u((l_464[1][1] != (void*)0), 2)) , 0L) , 0x00F1CCE0L), g_13, (*g_183)))))));
                        --g_472;
                        if ((**l_419))
                            break;
                        (*l_419) = (void*)0;

                        ;
                    }
                    else
                    {
                        unsigned short l_475 = 65534UL;
                        l_475 |= (*l_330);
                        if ((*l_330))
                            continue;
                        (*l_330) ^= 0x3594A9BFL;
                        (*l_328) = (safe_lshift_func_uint8_t_u_s((((((l_478 , (g_472 ^ ((((l_475 , ((((((((7UL <= l_441) , func_51((g_326 >= l_461), l_442[7][7])) ^ (*g_183)) >= l_469) < l_475) >= 4294967289UL) == 4294967295UL) == (**l_419))) == l_475) , (void*)0) == l_479))) ^ l_480) | 255UL) , 255UL) > 1UL), l_459));


                                            }

                    ;
                    if ((l_458.f1 < 1L))
                    {
                        int *l_481 = &l_413[8][0][2];
                        int *l_482 = &l_409;
                        int *l_483[2][10] = {{&l_469, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &l_469, (void*)0, &l_469}, {&l_469, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &l_469, (void*)0, &l_469}};
                        struct S0 *l_492 = &g_362;
                        struct S0 **l_493[2];
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_493[i] = (void*)0;
                        ++g_486;
                        ++l_489;
                        g_361 = l_492;

                        ;
                        if (l_442[0][3])
                            continue;
                    }
                    else
                    {
                        return l_458.f2;
                    }

                    ;
                    for (l_461 = 0; (l_461 != 39); ++l_461)
                    {
                        struct S0 *l_496 = &l_387;
                        int *l_497[9] = {&l_401, &l_414, &l_401, &l_414, &l_401, &l_414, &l_401, &l_414, &l_401};
                        int i;
                        l_496 = (void*)0;

                        ;
                        g_506[2][0][3]--;
                        --g_510;
                        return g_506[2][0][3];
                    }
                    l_459 ^= ((l_410 < g_501) , (((*l_330) >= ((void*)0 != l_513)) | func_45(l_350, g_112.f0, g_78, ((*l_328) = l_468))));


                                    }

                ;
            }
            else
            {
                char l_514[5][7];
                int l_528[7];
                union U2 l_533 = {0xC0L};
                unsigned char l_542 = 1UL;
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_514[i][j] = (-3L);
                }
                for (i = 0; i < 7; i++)
                    l_528[i] = 0xBA640A0FL;
                (*l_419) = (*l_419);
                if ((*g_183))
                {
                    unsigned l_517[8][6][5] = {{{0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}}, {{0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}}, {{0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}}, {{0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}}, {{0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}}, {{0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}}, {{0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}}, {{0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}, {0x55757F54L, 4294967286UL, 4294967286UL, 4294967295UL, 0xF02502A1L}}};
                    unsigned char *l_518 = &g_307.f2;
                    union U2 l_519 = {0x37L};
                    unsigned char *l_534 = &l_363.f0;
                    short *l_535 = &l_454;
                    int *l_536[9][9][3] = {{{&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}}, {{&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}}, {{&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}}, {{&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}}, {{&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}}, {{&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}}, {{&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}}, {{&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}}, {{&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}, {&l_528[6], &g_509, &l_528[6]}}};
                    unsigned l_537 = 8UL;
                    int i, j, k;
                    l_514[2][3] |= (-10L);
                    (*l_330) &= (((safe_add_func_int16_t_s_s(l_517[5][1][4], ((((l_518 != &g_486) , (func_45(l_519, (safe_lshift_func_int16_t_s_u((((((*l_535) = (((safe_sub_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((++(*l_518)), ((*l_534) = (((((void*)0 == l_359) >= l_519.f0) == (safe_add_func_int32_t_s_s(func_45(l_533, ((*l_339) = 0xE3C8FFCBL), (**l_419), (**l_419)), l_363.f1))) && l_514[2][3])))), l_387.f1)) > l_449), 0x73L)) | (**l_419)) > 7L)) & l_519.f2) == (**l_419)) | l_514[2][3]), 6)), l_387.f2, (*g_183)) >= l_519.f1)) || (**l_419)) & l_528[2]))) , l_454) , l_519.f2);

                    l_537++;
                }
                else
                {
                    unsigned l_543 = 4294967295UL;
                    int l_547 = 0L;
                    int l_553[8][5][6] = {{{0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}}, {{0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}}, {{0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}}, {{0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}}, {{0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}}, {{0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}}, {{0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}}, {{0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}, {0x5D890EECL, 0x8467F0B2L, (-2L), 0xA392DD15L, (-7L), 0x5EF8C339L}}};
                    unsigned char *l_561 = &g_112.f1;
                    int i, j, k;
                    if ((0x9D8D5275L == ((*l_330) < ((((65534UL > l_333) > (safe_sub_func_uint8_t_u_u((l_543 = l_542), l_454))) && (0L || (-3L))) , ((((*g_421) && 5L) , g_443) < (**l_419))))))
                    {
                        int *l_544 = (void*)0;
                        int *l_545 = (void*)0;
                        int *l_546 = &l_469;
                        int *l_548 = &l_329;
                        int *l_549 = &g_113.f3;
                        int *l_550 = &g_503;
                        int *l_551 = &g_59;
                        int *l_552[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_552[i] = &l_414;
                        ++g_555;
                    }
                    else
                    {
                        (*l_419) = &g_445;

                        ;
                    }

                    ;
                    (*l_330) ^= (((+l_363.f1) , (safe_add_func_uint8_t_u_u((((*l_359) = l_560) , ((*l_561)++)), 4UL))) , (**l_419));

                                        for (l_363.f0 = 0; (l_363.f0 != 2); l_363.f0 = safe_add_func_int8_t_s_s(l_363.f0, 1))
                    {
                        return g_500;
                    }
                    for (l_407 = 0; l_407 < 7; l_407 += 1)
                    {
                        l_528[l_407] = 0L;
                    }
                }

                ;
                if ((**l_419))
                    break;
            }

            ;
            ;
            (*l_419) = &l_414;

            ;
        }
        else
        {
            const int *l_568 = &l_413[1][0][2];
            int l_571[6][2] = {{1L, 4L}, {1L, 4L}, {1L, 4L}, {1L, 4L}, {1L, 4L}, {1L, 4L}};
            union U1 l_577 = {0};
            union U2 l_602 = {0UL};
            struct S0 l_623 = {0x4649L,9UL,8UL,65530UL};
            unsigned char *l_627 = &g_112.f2;
            int i, j;
            for (l_454 = (-29); (l_454 > (-12)); l_454 = safe_add_func_int8_t_s_s(l_454, 5))
            {
                const int **l_569 = &l_568;
                (*l_569) = l_568;
                for (l_363.f0 = 0; (l_363.f0 <= 5); l_363.f0 += 1)
                {
                    if ((g_445 &= (l_387.f1 >= l_413[1][0][1])))
                    {
                        struct S0 **l_570 = &g_361;
                        (*l_570) = (void*)0;

                        ;
                    }
                    else
                    {
                        int l_574 = 0x0B9254E2L;
                        int i;
                        l_571[4][1] &= g_510;
                        if ((*l_568))
                            break;
                        (*l_330) ^= ((safe_sub_func_int8_t_s_s((**l_569), l_574)) ^ (*l_568));
                    }
                }

                ;
                return g_500;


            }
            for (g_112.f1 = 0; (g_112.f1 <= 0); g_112.f1 += 1)
            {
                char l_575 = 0xB9L;
                int l_591 = 0L;
                int l_592 = 0x7BDC359FL;
                int l_607 = 0xE7FFCE0BL;
                int l_608 = 7L;
                struct S0 l_616 = {0x00D8L,255UL,0UL,65535UL};
                int *l_618 = &l_470;
                for (g_73 = 1; (g_73 <= 5); g_73 += 1)
                {
                    int l_576 = (-8L);
                    int l_593[2];
                    union U2 l_601 = {0xACL};
                    unsigned l_605 = 0x8C0377ADL;
                    int **l_617[2][7][1] = {{{&l_328}, {&l_328}, {&l_328}, {&l_328}, {&l_328}, {&l_328}, {&l_328}}, {{&l_328}, {&l_328}, {&l_328}, {&l_328}, {&l_328}, {&l_328}, {&l_328}}};
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_593[i] = 0xDBB85908L;
                    if (g_62[g_112.f1])
                    {
                        union U1 * const l_580 = (void*)0;
                        int l_585 = 0x7A03A25CL;
                        unsigned char *l_587 = &l_363.f1;
                        unsigned char **l_586 = &l_587;
                        int *l_588 = (void*)0;
                        int *l_589 = (void*)0;
                        int *l_590[6] = {&l_410, &l_409, &l_410, &l_409, &l_410, &l_409};
                        int i, j;
                        l_412 |= (((l_571[4][1] ^= l_575) ^ (g_113 , l_387.f3)) < (~(((*l_586) = func_38((l_576 , ((*l_330) = (l_577 , (safe_lshift_func_int8_t_s_u((l_580 != &l_478), ((((safe_mod_func_int8_t_s_s(((~0xA0L) == (safe_lshift_func_int8_t_s_s(l_363.f0, 2))), g_62[g_112.f1])) , &g_486) != &l_333) <= l_585)))))), l_575, g_113, (*l_568))) != &g_486)));

                        ;
                        ++l_594;
                        l_576 |= (safe_add_func_int32_t_s_s((l_577 , ((((!((*l_328) = ((*l_330) = (safe_lshift_func_uint16_t_u_s(((*l_568) ^ (*l_568)), 1))))) == func_45(l_601, (g_62[0] && (g_362.f3 >= func_45(l_602, (g_506[2][0][3] &= ((*l_339) &= (safe_sub_func_int8_t_s_s(l_592, l_387.f0)))), g_455[6], l_601.f2))), g_13, l_605)) != 255UL) , l_575)), 0x712F7B04L));


                                            }
                    else
                    {
                        int *l_606[9][8] = {{&l_410, &l_469, &g_509, &g_499, &g_509, &l_469, &l_410, &l_329}, {&l_410, &l_469, &g_509, &g_499, &g_509, &l_469, &l_410, &l_329}, {&l_410, &l_469, &g_509, &g_499, &g_509, &l_469, &l_410, &l_329}, {&l_410, &l_469, &g_509, &g_499, &g_509, &l_469, &l_410, &l_329}, {&l_410, &l_469, &g_509, &g_499, &g_509, &l_469, &l_410, &l_329}, {&l_410, &l_469, &g_509, &g_499, &g_509, &l_469, &l_410, &l_329}, {&l_410, &l_469, &g_509, &g_499, &g_509, &l_469, &l_410, &l_329}, {&l_410, &l_469, &g_509, &g_499, &g_509, &l_469, &l_410, &l_329}, {&l_410, &l_469, &g_509, &g_499, &g_509, &l_469, &l_410, &l_329}};
                        int i, j;
                        g_612--;
                        return l_615;


                    }


                                        (*g_361) = l_616;
                    l_618 = &g_554;

                    ;
                }

                ;
                (*l_330) ^= (*l_568);
            }

                        (*l_330) ^= (((((*g_421) = (l_619 , l_387.f1)) <= (safe_sub_func_int8_t_s_s(l_622, (g_307.f2 = (g_113 , ((*l_627) |= ((l_623 , l_624) != l_626))))))) && l_387.f0) < (safe_sub_func_int8_t_s_s((*l_568), 0xFAL)));

                        (*g_361) = l_623;
        }

        ;
    }


    ;
    ;
    ;
    ;
    for (g_227 = 0; (g_227 >= 36); g_227 = safe_add_func_int8_t_s_s(g_227, 6))
    {
        short l_635[9] = {6L, 0xA193L, 6L, 0xA193L, 6L, 0xA193L, 6L, 0xA193L, 6L};
        union U2 l_644 = {0x4AL};
        int *l_649 = &g_501;
        int l_680 = 0x848AE018L;
        char l_689 = (-6L);
        int l_690 = 3L;
        int l_691[8] = {(-1L), 0xAC5786ECL, (-1L), 0xAC5786ECL, (-1L), 0xAC5786ECL, (-1L), 0xAC5786ECL};
        short l_699[6][8] = {{(-2L), 0x7DBCL, 7L, 0x3A63L, 1L, 0x642CL, (-10L), 0xED70L}, {(-2L), 0x7DBCL, 7L, 0x3A63L, 1L, 0x642CL, (-10L), 0xED70L}, {(-2L), 0x7DBCL, 7L, 0x3A63L, 1L, 0x642CL, (-10L), 0xED70L}, {(-2L), 0x7DBCL, 7L, 0x3A63L, 1L, 0x642CL, (-10L), 0xED70L}, {(-2L), 0x7DBCL, 7L, 0x3A63L, 1L, 0x642CL, (-10L), 0xED70L}, {(-2L), 0x7DBCL, 7L, 0x3A63L, 1L, 0x642CL, (-10L), 0xED70L}};
        unsigned l_702[4];
        unsigned short l_707[8][10][1] = {{{0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}}, {{0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}}, {{0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}}, {{0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}}, {{0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}}, {{0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}}, {{0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}}, {{0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}, {0xC3D2L}}};
        int * const *l_708 = &g_686[5][7];
        unsigned short ***l_729[9] = {&g_420[5][1], &g_420[5][1], &g_420[5][1], &g_420[5][1], &g_420[5][1], &g_420[5][1], &g_420[5][1], &g_420[5][1], &g_420[5][1]};
        unsigned *l_730 = &g_78;
        char l_731[4];
        short *l_732 = &g_73;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_702[i] = 4294967286UL;
        for (i = 0; i < 4; i++)
            l_731[i] = 0x8EL;
        for (l_469 = 23; (l_469 >= 15); l_469 = safe_sub_func_int16_t_s_s(l_469, 6))
        {
            union U1 l_636 = {0};
            unsigned *l_637 = &g_62[0];
            unsigned *l_640 = &g_78;
            unsigned *l_641 = &g_113.f1;
            int l_650 = 0x8ABB3359L;
            int **l_651 = &l_328;
            l_634 = &g_113;
            (*l_330) = ((((l_635[7] || (((*l_641) = ((*l_640) = (l_636 , ((*l_637)++)))) | (safe_sub_func_int8_t_s_s(((g_554 > (l_644 , (*l_330))) ^ 1L), ((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((g_73 & g_506[2][0][3]), ((l_649 = &g_61) != l_328))), l_644.f0)) < g_416))))) == l_644.f2) != g_408) > l_650);
            (*l_651) = l_649;

            ;
        }

        ;
        for (g_112.f2 = 0; (g_112.f2 == 57); g_112.f2 = safe_add_func_uint32_t_u_u(g_112.f2, 1))
        {
            struct S0 *l_654 = &g_362;
            unsigned *l_659 = &l_478.f1;
            unsigned *l_660[2];
            int l_661 = (-1L);
            short *l_669 = &g_485;
            short **l_670 = &l_669;
            short *l_675 = (void*)0;
            short *l_676 = &g_443;
            int l_677 = 1L;
            int l_696 = 0x30111AB9L;
            int l_697[5] = {0xA6AFC03CL, 6L, 0xA6AFC03CL, 6L, 0xA6AFC03CL};
            struct S0 **l_726 = &g_361;
            int i;
            for (i = 0; i < 2; i++)
                l_660[i] = &g_510;
            l_654 = &g_362;
            if (((l_661 &= (((*l_634) = g_113) , (safe_rshift_func_uint8_t_u_s(l_635[2], ((void*)0 == &g_326))))) == ((safe_rshift_func_uint16_t_u_u(((*g_361) , func_45((((*l_676) |= (0x98E7B6BFL > (safe_unary_minus_func_int16_t_s((safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((((((*l_670) = l_669) == (void*)0) < (safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s(l_644.f2, (*l_330))), l_644.f0))) & 7L) && (*l_330)), 0x1FA876A2L)), 0xDB39L)))))) , l_644), l_677, l_644.f0, g_503)), 12)) != 0x76C39AF6L)))
            {
                unsigned * const l_678 = &g_446[2][2][2];
                char *l_679 = (void*)0;
                unsigned char *l_683 = (void*)0;
                int l_684 = 4L;
                int **l_685[3][8] = {{&g_183, &l_330, &g_183, &l_330, &g_183, &l_330, &g_183, &l_330}, {&g_183, &l_330, &g_183, &l_330, &g_183, &l_330, &g_183, &l_330}, {&g_183, &l_330, &g_183, &l_330, &g_183, &l_330, &g_183, &l_330}};
                int l_698 = (-1L);
                union U2 l_710[6] = {{0x77L}, {0x77L}, {0x77L}, {0x77L}, {0x77L}, {0x77L}};
                int i, j;
                (*l_330) = ((((l_680 &= (l_678 == &g_446[2][2][2])) >= (l_661 = (safe_sub_func_int32_t_s_s(6L, l_661)))) || 0x29AEB46BL) || (l_635[8] <= (((g_509 != 0xC4F633D6L) >= ((8L & l_677) , l_684)) < g_112.f1)));
                if (l_684)
                    continue;
                g_686[5][7] = &l_469;
                if ((((void*)0 != (*g_179)) & g_10))
                {
                    short l_687 = 0x879DL;
                    int l_688 = 0x25EC8461L;
                    short l_692 = 7L;
                    int l_693 = 0x02EBF238L;
                    int l_694 = (-5L);
                    int l_695[4][8][3] = {{{0x9FF7D37BL, 0x178BDCE4L, 0L}, {0x9FF7D37BL, 0x178BDCE4L, 0L}, {0x9FF7D37BL, 0x178BDCE4L, 0L}, {0x9FF7D37BL, 0x178BDCE4L, 0L}, {0x9FF7D37BL, 0x178BDCE4L, 0L}, {0x9FF7D37BL, 0x178BDCE4L, 0L}, {0x9FF7D37BL, 0x178BDCE4L, 0L}, {0x9FF7D37BL, 0x178BDCE4L, 0L}}, {{0x9FF7D37BL, 0x178BDCE4L, 0L}, {0x9FF7D37BL, 0x178BDCE4L, 0L}, {0x9FF7D37BL, 0x178BDCE4L, 0L}, {0x9FF7D37BL, 0x178BDCE4L, 0L}, {0x9FF7D37BL, 0x178BDCE4L, 0L}, {0x9FF7D37BL, 0x178BDCE4L, 0L}, {0x9FF7D37BL, 0x178BDCE4L, 0L}, {0x9FF7D37BL, 0x178BDCE4L, 0L}}, {{0x9FF7D37BL, 0x178BDCE4L, 0L}, {0x9FF7D37BL, 0x178BDCE4L, 0L}, {0x9FF7D37BL, 0x178BDCE4L, 0L}, {0x9FF7D37BL, 0x178BDCE4L, 0L}, {0x9FF7D37BL, 0x178BDCE4L, 0L}, {0x9FF7D37BL, 0x178BDCE4L, 0L}, {0x9FF7D37BL, 0x178BDCE4L, 0L}, {0x9FF7D37BL, 0x178BDCE4L, 0L}}, {{0x9FF7D37BL, 0x178BDCE4L, 0L}, {0x9FF7D37BL, 0x178BDCE4L, 0L}, {0x9FF7D37BL, 0x178BDCE4L, 0L}, {0x9FF7D37BL, 0x178BDCE4L, 0L}, {0x9FF7D37BL, 0x178BDCE4L, 0L}, {0x9FF7D37BL, 0x178BDCE4L, 0L}, {0x9FF7D37BL, 0x178BDCE4L, 0L}, {0x9FF7D37BL, 0x178BDCE4L, 0L}}};
                    int i, j, k;
                    --l_702[3];
                }
                else
                {
                    int **l_709 = (void*)0;
                    l_330 = (((**l_670) = ((safe_sub_func_int32_t_s_s((((g_62[0] | l_707[7][4][0]) >= (l_708 == l_709)) && (l_710[1] , ((*l_678)++))), g_62[0])) & (+l_661))) , &g_500);

                    ;
                }
            }
            else
            {
                int *l_719 = &l_701;
                for (g_501 = (-30); (g_501 <= 16); g_501 = safe_add_func_uint32_t_u_u(g_501, 6))
                {
                    (*l_330) = l_696;
                }
                for (g_611 = 0; (g_611 <= 5); g_611 += 1)
                {
                    int **l_720 = &g_686[0][3];
                    int i;
                    (*l_720) = ((((safe_lshift_func_uint16_t_u_u(((*g_421) ^= (safe_add_func_uint16_t_u_u(1UL, l_661))), 6)) >= l_697[0]) == ((**l_670) = (g_73 = (*l_330)))) , l_719);


                    return g_446[2][2][2];



                }
                if (l_644.f2)
                {
                    return l_661;



                }
                else
                {
                    unsigned short l_722 = 0UL;
                    struct S0 **l_725[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_725[i] = (void*)0;
                    l_696 ^= ((g_446[1][0][2] , func_51((g_721 & g_326), ((l_722 & ((g_485 != (safe_mul_func_uint32_t_u_u((*l_719), ((g_554 , &l_654) == l_725[0])))) , l_677)) ^ 0x22F70A40L))) > (*l_719));
                }
                (*g_361) = (*g_361);
            }
            (*l_726) = &g_114;

            ;
        }
        (*g_361) = ((g_114.f1 ^ (((((*l_330) <= ((((*l_730) &= (safe_rshift_func_uint16_t_u_s(((g_420[2][7] = &g_421) == &g_421), 2))) < ((*l_328) = 4294967288UL)) > ((*l_732) = (~func_45(l_644, (+(l_731[1] = (*l_330))), ((*g_421) >= (g_446[2][2][2] <= l_702[0])), (*l_330)))))) & 4294967295UL) > (*l_330)) > g_503)) , (*g_361));


        if (l_731[2])
            continue;
    }

        ;
    ;

    return (*l_330);



}







static char ** func_28(char ** p_29, char ** p_30, union U1 p_31, char ** p_32, unsigned char p_33)
{
    unsigned char l_161 = 0x99L;
    char l_174 = 0x7BL;
    union U1 l_198 = {0};
    char **l_200 = &g_147[1];
    union U2 l_206 = {7UL};
    int **l_252[1][6];
    struct S0 l_270 = {1UL,253UL,0UL,0xD079L};
    const unsigned * const l_317[4] = {(void*)0, (void*)0, (void*)0, (void*)0};
    union U2 *l_319 = &g_307;
    union U2 **l_318[5][10] = {{&l_319, &l_319, &l_319, &l_319, &l_319, &l_319, &l_319, &l_319, &l_319, &l_319}, {&l_319, &l_319, &l_319, &l_319, &l_319, &l_319, &l_319, &l_319, &l_319, &l_319}, {&l_319, &l_319, &l_319, &l_319, &l_319, &l_319, &l_319, &l_319, &l_319, &l_319}, {&l_319, &l_319, &l_319, &l_319, &l_319, &l_319, &l_319, &l_319, &l_319, &l_319}, {&l_319, &l_319, &l_319, &l_319, &l_319, &l_319, &l_319, &l_319, &l_319, &l_319}};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
            l_252[i][j] = &g_183;
    }
    for (g_112.f2 = 0; (g_112.f2 == 35); g_112.f2++)
    {
        int *l_166 = &g_59;
        union U2 l_193[5] = {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}};
        unsigned l_215 = 0UL;
        struct S0 l_247[8] = {{65528UL,0xC9L,0UL,1UL}, {0xA3FBL,0xE2L,0x97B3L,65527UL}, {65528UL,0xC9L,0UL,1UL}, {0xA3FBL,0xE2L,0x97B3L,65527UL}, {65528UL,0xC9L,0UL,1UL}, {0xA3FBL,0xE2L,0x97B3L,65527UL}, {65528UL,0xC9L,0UL,1UL}, {0xA3FBL,0xE2L,0x97B3L,65527UL}};
        struct S0 l_249 = {0x0D2EL,250UL,0x1929L,0x6A0AL};
        unsigned short l_312 = 5UL;
        int i;
        for (g_78 = 0; (g_78 == 37); ++g_78)
        {
            int l_160 = 0L;
            char ***l_167 = (void*)0;
            char ***l_168 = &g_146;
            int l_199 = 0x8F384123L;
            union U2 l_250 = {0x01L};
            union U2 l_275 = {0xA3L};
            union U2 l_282 = {1UL};
            struct S0 **l_295 = (void*)0;
            for (g_114.f0 = 0; (g_114.f0 <= 2); g_114.f0 += 1)
            {
                int *l_152 = &g_142;
                int *l_153 = &g_113.f2;
                int *l_154 = (void*)0;
                int *l_155 = &g_142;
                int *l_156 = &g_142;
                int *l_157 = &g_59;
                int *l_158 = &g_113.f2;
                int *l_159[10];
                int i;
                for (i = 0; i < 10; i++)
                    l_159[i] = (void*)0;
                l_161--;
            }
        }

        ;
    }

    ;
    g_320[6] = &g_112;
    return (*g_179);


}







static char ** func_36(char * p_37)
{
    short l_135 = 0x0B7EL;
    union U2 l_139 = {0xDBL};
    int l_143 = 0x7A384862L;
    struct S0 l_144 = {0x373CL,255UL,0xAD41L,65528UL};
    char **l_145[1];
    int i;
    for (i = 0; i < 1; i++)
        l_145[i] = &g_101;
    l_143 |= func_51((g_112.f0 | (func_51((g_142 = (safe_add_func_int16_t_s_s((l_135 == func_51((safe_unary_minus_func_int32_t_s(((((&g_114 != (void*)0) < ((safe_sub_func_uint8_t_u_u(g_98[1][5][7], func_45(l_139, (safe_lshift_func_uint16_t_u_s(l_139.f1, l_135)), l_139.f0, l_139.f0))) || 0UL)) == l_139.f0) != 0x5C9A5513L))), g_62[0])), l_139.f0))), g_74) ^ l_139.f0)), g_74);
    l_144 = l_144;
    return l_145[0];


}







static char * func_38(int p_39, short p_40, union U1 p_41, char p_42)
{
    char *l_132[3][10] = {{&g_74, (void*)0, &g_74, (void*)0, &g_74, &g_74, &g_74, (void*)0, &g_74, (void*)0}, {&g_74, (void*)0, &g_74, (void*)0, &g_74, &g_74, &g_74, (void*)0, &g_74, (void*)0}, {&g_74, (void*)0, &g_74, (void*)0, &g_74, &g_74, &g_74, (void*)0, &g_74, (void*)0}};
    int i, j;
    return l_132[0][8];


}







static int func_45(union U2 p_46, unsigned p_47, int p_48, int p_49)
{
    int *l_125 = &g_113.f2;
    int *l_126 = &g_113.f2;
    int *l_127 = &g_113.f3;
    int *l_128 = &g_113.f3;
    int *l_129[7][9][4] = {{{&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}}, {{&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}}, {{&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}}, {{&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}}, {{&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}}, {{&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}}, {{&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}, {&g_59, (void*)0, &g_59, &g_59}}};
    int i, j, k;
    p_49 |= 2L;
    p_49 ^= g_98[0][0][6];
    return g_62[0];
}







static unsigned func_51(unsigned p_52, unsigned short p_53)
{
    unsigned char l_67 = 255UL;
    int l_75 = 0x0BF3FD26L;
    int l_96 = (-3L);
    struct S0 *l_115 = &g_114;
    union U1 l_116 = {0};
    char *l_117[3][5][1] = {{{&g_74}, {&g_74}, {&g_74}, {&g_74}, {&g_74}}, {{&g_74}, {&g_74}, {&g_74}, {&g_74}, {&g_74}}, {{&g_74}, {&g_74}, {&g_74}, {&g_74}, {&g_74}}};
    char **l_118 = &g_101;
    char **l_119 = (void*)0;
    char *l_121 = (void*)0;
    char **l_120 = &l_121;
    int *l_122 = (void*)0;
    int *l_123 = &g_113.f3;
    int *l_124[4];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_124[i] = (void*)0;
    for (g_10 = 0; (g_10 < (-5)); --g_10)
    {
        int *l_58 = &g_59;
        int *l_60[10] = {&g_59, (void*)0, (void*)0, (void*)0, (void*)0, &g_59, (void*)0, (void*)0, (void*)0, (void*)0};
        struct S0 l_85 = {0xEE73L,0x19L,9UL,3UL};
        char *l_88 = &g_10;
        int i;
        ++g_62[0];
        if (p_53)
            break;
        for (p_53 = 0; (p_53 <= 0); p_53 += 1)
        {
            const struct S0 l_68[2] = {{65527UL,0xB2L,0x44BFL,0xE16DL}, {65527UL,0xB2L,0x44BFL,0xE16DL}};
            char **l_69 = (void*)0;
            int l_76 = 0x1FA0179EL;
            int l_77[10][9] = {{(-10L), 0L, 0xD501105CL, 0x737360B9L, 0x911DF381L, (-1L), 0x0A6C5FA6L, 7L, 0x0A6C5FA6L}, {(-10L), 0L, 0xD501105CL, 0x737360B9L, 0x911DF381L, (-1L), 0x0A6C5FA6L, 7L, 0x0A6C5FA6L}, {(-10L), 0L, 0xD501105CL, 0x737360B9L, 0x911DF381L, (-1L), 0x0A6C5FA6L, 7L, 0x0A6C5FA6L}, {(-10L), 0L, 0xD501105CL, 0x737360B9L, 0x911DF381L, (-1L), 0x0A6C5FA6L, 7L, 0x0A6C5FA6L}, {(-10L), 0L, 0xD501105CL, 0x737360B9L, 0x911DF381L, (-1L), 0x0A6C5FA6L, 7L, 0x0A6C5FA6L}, {(-10L), 0L, 0xD501105CL, 0x737360B9L, 0x911DF381L, (-1L), 0x0A6C5FA6L, 7L, 0x0A6C5FA6L}, {(-10L), 0L, 0xD501105CL, 0x737360B9L, 0x911DF381L, (-1L), 0x0A6C5FA6L, 7L, 0x0A6C5FA6L}, {(-10L), 0L, 0xD501105CL, 0x737360B9L, 0x911DF381L, (-1L), 0x0A6C5FA6L, 7L, 0x0A6C5FA6L}, {(-10L), 0L, 0xD501105CL, 0x737360B9L, 0x911DF381L, (-1L), 0x0A6C5FA6L, 7L, 0x0A6C5FA6L}, {(-10L), 0L, 0xD501105CL, 0x737360B9L, 0x911DF381L, (-1L), 0x0A6C5FA6L, 7L, 0x0A6C5FA6L}};
            int i, j;
            if (((safe_add_func_int16_t_s_s(l_67, p_52)) , (((*l_58) = ((l_68[1] , l_69) == g_55[0])) ^ 0UL)))
            {
                struct S0 l_91 = {0x0579L,0x79L,0x1D28L,0xF552L};
                int l_95 = 0x01C69F0BL;
                int l_97[10] = {0x1400369CL, 6L, 0x128C1896L, 0x128C1896L, 6L, 0x1400369CL, 6L, 0x128C1896L, 0x128C1896L, 6L};
                int i;
                if (g_62[0])
                {
                    unsigned l_70 = 4294967293UL;
                    (*l_58) = l_70;
                }
                else
                {
                    int l_71 = 0x92AFB55EL;
                    int l_72[10] = {4L, 4L, 0x020822C3L, 4L, 4L, 0x020822C3L, 4L, 4L, 0x020822C3L, 4L};
                    unsigned l_81 = 0xD8D86F2FL;
                    char *l_83 = &g_74;
                    char **l_82 = &l_83;
                    struct S0 *l_86 = &l_85;
                    int i;
                    --g_78;
                    if (l_81)
                    {
                        return p_52;
                    }
                    else
                    {
                        char ***l_84[9][10][2] = {{{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}, {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}, {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}, {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}, {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}, {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}, {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}, {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}, {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}};
                        int i, j, k;
                        l_69 = l_82;

                        ;
                    }

                    ;
                    (*l_86) = l_85;
                    return l_75;
                }
                if (g_73)
                    continue;
                for (g_73 = 0; (g_73 >= 0); g_73 -= 1)
                {
                    char *l_87 = &g_74;
                    char **l_89 = (void*)0;
                    char **l_90 = &l_88;
                    struct S0 l_93 = {0xAAFFL,0x3AL,9UL,0xFC51L};
                    int l_94 = 0xD59E7100L;
                    (*l_58) &= (65529UL <= (((p_52 , l_87) == ((*l_90) = l_88)) & g_74));
                    for (l_76 = 0; (l_76 <= 0); l_76 += 1)
                    {
                        struct S0 *l_92[3];
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_92[i] = &l_85;
                        l_93 = l_91;
                        return l_77[(p_53 + 6)][(l_76 + 6)];
                    }
                    g_98[0][0][6]++;
                }
            }
            else
            {
                l_77[5][1] &= 0L;
            }
        }
    }
    for (l_67 = 0; l_67 < 1; l_67 += 1)
    {
        g_55[l_67] = &g_101;
    }
    (*l_115) = (((safe_lshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(((safe_add_func_int16_t_s_s(g_13, ((safe_mod_func_int32_t_s_s(p_53, p_53)) <= (g_112 , 0UL)))) | ((((0xE030EDB6L > g_73) , g_113) , ((p_53 , 0L) | p_53)) > (-2L))), 0xB8L)), g_10)) | 0UL) , g_114);
    g_59 |= (((g_114.f3 || l_96) != (!g_112.f2)) , ((l_116 , g_98[0][0][6]) >= (((*l_118) = (p_52 , l_117[1][2][0])) != ((*l_120) = (((((!(l_117[1][2][0] != (void*)0)) , p_52) | l_67) && p_52) , (void*)0)))));

    ;
    return p_52;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_62[i], "g_62[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_98[i][j][k], "g_98[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_112.f0, "g_112.f0", print_hash_value);
    transparent_crc(g_112.f1, "g_112.f1", print_hash_value);
    transparent_crc(g_112.f2, "g_112.f2", print_hash_value);
    transparent_crc(g_114.f0, "g_114.f0", print_hash_value);
    transparent_crc(g_114.f1, "g_114.f1", print_hash_value);
    transparent_crc(g_114.f2, "g_114.f2", print_hash_value);
    transparent_crc(g_114.f3, "g_114.f3", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_307.f0, "g_307.f0", print_hash_value);
    transparent_crc(g_307.f1, "g_307.f1", print_hash_value);
    transparent_crc(g_307.f2, "g_307.f2", print_hash_value);
    transparent_crc(g_326, "g_326", print_hash_value);
    transparent_crc(g_362.f0, "g_362.f0", print_hash_value);
    transparent_crc(g_362.f1, "g_362.f1", print_hash_value);
    transparent_crc(g_362.f2, "g_362.f2", print_hash_value);
    transparent_crc(g_362.f3, "g_362.f3", print_hash_value);
    transparent_crc(g_408, "g_408", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_411[i], "g_411[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_416, "g_416", print_hash_value);
    transparent_crc(g_443, "g_443", print_hash_value);
    transparent_crc(g_445, "g_445", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_446[i][j][k], "g_446[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_455[i], "g_455[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_471, "g_471", print_hash_value);
    transparent_crc(g_472, "g_472", print_hash_value);
    transparent_crc(g_484, "g_484", print_hash_value);
    transparent_crc(g_485, "g_485", print_hash_value);
    transparent_crc(g_486, "g_486", print_hash_value);
    transparent_crc(g_498, "g_498", print_hash_value);
    transparent_crc(g_499, "g_499", print_hash_value);
    transparent_crc(g_500, "g_500", print_hash_value);
    transparent_crc(g_501, "g_501", print_hash_value);
    transparent_crc(g_503, "g_503", print_hash_value);
    transparent_crc(g_504, "g_504", print_hash_value);
    transparent_crc(g_505, "g_505", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_506[i][j][k], "g_506[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_509, "g_509", print_hash_value);
    transparent_crc(g_510, "g_510", print_hash_value);
    transparent_crc(g_554, "g_554", print_hash_value);
    transparent_crc(g_555, "g_555", print_hash_value);
    transparent_crc(g_609, "g_609", print_hash_value);
    transparent_crc(g_610, "g_610", print_hash_value);
    transparent_crc(g_611, "g_611", print_hash_value);
    transparent_crc(g_612, "g_612", print_hash_value);
    transparent_crc(g_721, "g_721", print_hash_value);
    transparent_crc(g_755.f0, "g_755.f0", print_hash_value);
    transparent_crc(g_755.f1, "g_755.f1", print_hash_value);
    transparent_crc(g_755.f2, "g_755.f2", print_hash_value);
    transparent_crc(g_755.f3, "g_755.f3", print_hash_value);
    transparent_crc(g_815, "g_815", print_hash_value);
    transparent_crc(g_854, "g_854", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_884[i][j][k], "g_884[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
