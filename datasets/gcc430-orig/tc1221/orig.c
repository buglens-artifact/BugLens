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
   signed f0 : 3;
};

union U1 {
   unsigned f0;
};


static short g_9 = 0x5416L;
static unsigned char g_19 = 0xDAL;
static int g_21 = (-1L);
static int g_26 = 0L;
static int **g_60 = (void*)0;
static union U1 g_79[3] = {{4294967291UL}, {4294967291UL}, {4294967291UL}};
static union U0 g_80 = {0x8E8B88BBL};
static unsigned short g_107[2][3][5] = {{{0UL, 0x1AFCL, 0x3696L, 5UL, 65528UL}, {0UL, 0x1AFCL, 0x3696L, 5UL, 65528UL}, {0UL, 0x1AFCL, 0x3696L, 5UL, 65528UL}}, {{0UL, 0x1AFCL, 0x3696L, 5UL, 65528UL}, {0UL, 0x1AFCL, 0x3696L, 5UL, 65528UL}, {0UL, 0x1AFCL, 0x3696L, 5UL, 65528UL}}};
static unsigned g_128[10] = {0x61B5B55CL, 0x61B5B55CL, 4294967295UL, 0x61B5B55CL, 0x61B5B55CL, 4294967295UL, 0x61B5B55CL, 0x61B5B55CL, 4294967295UL, 0x61B5B55CL};
static char g_142 = 9L;
static char *g_145 = &g_142;
static char **g_144 = &g_145;
static union U0 *g_149 = (void*)0;
static unsigned short g_171 = 1UL;
static int g_180[4] = {9L, 9L, 9L, 9L};
static unsigned g_197[5][1][3] = {{{0x93EC2190L, 0x93EC2190L, 0x93EC2190L}}, {{0x93EC2190L, 0x93EC2190L, 0x93EC2190L}}, {{0x93EC2190L, 0x93EC2190L, 0x93EC2190L}}, {{0x93EC2190L, 0x93EC2190L, 0x93EC2190L}}, {{0x93EC2190L, 0x93EC2190L, 0x93EC2190L}}};
static int **g_213 = (void*)0;
static unsigned g_227 = 0UL;
static union U1 g_228 = {0xBC1734ECL};
static char **g_249[6][4] = {{&g_145, &g_145, &g_145, &g_145}, {&g_145, &g_145, &g_145, &g_145}, {&g_145, &g_145, &g_145, &g_145}, {&g_145, &g_145, &g_145, &g_145}, {&g_145, &g_145, &g_145, &g_145}, {&g_145, &g_145, &g_145, &g_145}};
static union U0 *g_311 = (void*)0;
static short g_326[3] = {(-3L), (-3L), (-3L)};
static char g_378 = 0L;
static short **g_380 = (void*)0;
static union U0 **g_391 = &g_311;
static union U0 ***g_390 = &g_391;
static unsigned g_397 = 4294967292UL;
static unsigned short g_402 = 0xB61CL;
static unsigned *g_445[1] = {&g_397};
static unsigned **g_444 = &g_445[0];
static char g_448 = 0xE2L;
static union U1 *g_482 = (void*)0;
static union U1 **g_481 = &g_482;
static unsigned char *g_502[9] = {&g_19, (void*)0, &g_19, (void*)0, &g_19, (void*)0, &g_19, (void*)0, &g_19};
static unsigned char **g_501 = &g_502[3];
static unsigned char g_572 = 254UL;
static unsigned ***g_589 = &g_444;
static int ***g_675 = (void*)0;
static int ****g_674 = &g_675;
static int ****g_679 = &g_675;
static short ***g_735[10][7][3] = {{{&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}}, {{&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}}, {{&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}}, {{&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}}, {{&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}}, {{&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}}, {{&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}}, {{&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}}, {{&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}}, {{&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}, {&g_380, &g_380, &g_380}}};
static unsigned g_782 = 0x03F84910L;
static int g_795[9][10][2] = {{{0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}}, {{0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}}, {{0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}}, {{0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}}, {{0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}}, {{0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}}, {{0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}}, {{0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}}, {{0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}}};
static unsigned short *g_799 = &g_402;
static unsigned short **g_798 = &g_799;
static int *g_800 = &g_21;
static int g_845 = 6L;
static int g_851 = (-7L);



static unsigned func_1(void);
static int func_2(union U0 p_3, unsigned p_4, short p_5, unsigned char p_6, unsigned char p_7);
static unsigned short func_17(int p_18);
static int func_27(union U1 p_28, union U0 p_29, unsigned p_30);
static union U1 func_31(short p_32, int p_33, union U0 p_34, int * p_35);
static union U0 func_36(int ** p_37, int ** p_38, int * p_39, int p_40);
static int func_41(int * p_42, int * p_43, int * p_44, int * p_45, int * p_46);
static int * func_47(union U0 p_48, int ** p_49);
static union U0 func_51(int ** p_52, int ** p_53);
static union U0 func_54(unsigned char p_55, int ** p_56, int p_57);
static unsigned func_1(void)
{
    union U0 l_8 = {0x7A00F47AL};
    int *l_850 = &g_851;
    (*l_850) ^= func_2(l_8, g_9, (safe_rshift_func_uint8_t_u_s(g_9, 2)), ((safe_add_func_int32_t_s_s(((safe_unary_minus_func_int32_t_s((246UL < ((safe_sub_func_uint8_t_u_u((0x76L | l_8.f0), 0x06L)) > (func_17(g_19) | g_21))))) >= g_21), 0x1320F2D6L)) != 1UL), g_9);



    ;

    ;
    (*g_800) = ((func_17((*l_850)) | (~0x8F56L)) > (*l_850));
    return (*l_850);
}







static int func_2(union U0 p_3, unsigned p_4, short p_5, unsigned char p_6, unsigned char p_7)
{
    int **l_22 = (void*)0;
    int *l_24 = &g_21;
    int **l_23 = &l_24;
    int *l_25 = &g_26;
    (*l_23) = &g_21;
    (*l_25) |= (**l_23);
    p_3.f0 = func_27(func_31(g_9, (255UL & (*l_25)), func_36(&l_24, &l_24, &g_21, func_41((*l_23), func_47(p_3, &l_25), &g_26, (*l_23), &g_26)), &g_26), p_3, (*l_25));



    ;

    ;
    for (g_402 = 0; (g_402 <= 50); g_402 = safe_add_func_uint8_t_u_u(g_402, 5))
    {
        int *l_849 = &g_21;
        (*l_23) = l_849;
    }
    return p_3.f0;
}







static unsigned short func_17(int p_18)
{
    int *l_20[6][10][4] = {{{&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}}, {{&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}}, {{&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}}, {{&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}}, {{&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}}, {{&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}, {&g_21, (void*)0, &g_21, &g_21}}};
    int i, j, k;
    p_18 ^= g_19;
    return p_18;
}







static int func_27(union U1 p_28, union U0 p_29, unsigned p_30)
{
    unsigned short l_164 = 0x5B31L;
    union U1 *l_168 = &g_79[0];
    union U1 **l_167 = &l_168;
    unsigned short *l_169 = &g_107[0][0][0];
    unsigned short *l_170[7] = {(void*)0, &g_171, (void*)0, &g_171, (void*)0, &g_171, (void*)0};
    int *l_173 = &g_26;
    int **l_172 = &l_173;
    short *l_174 = &g_9;
    unsigned char *l_175 = &g_19;
    int l_176[1][8];
    int *l_177 = (void*)0;
    int *l_178 = &g_21;
    int *l_179 = &g_180[1];
    unsigned char l_194 = 0x5AL;
    int l_195[10] = {(-3L), 0L, (-3L), 0L, (-3L), 0L, (-3L), 0L, (-3L), 0L};
    unsigned *l_196 = &g_197[1][0][1];
    union U0 l_199 = {0x87891B7CL};
    int **l_220 = &l_178;
    int l_245 = 0x4E66764AL;
    int l_266 = 0x9FDFB362L;
    short l_338 = 0x3383L;
    int l_355 = 0x593C77F4L;
    union U0 **l_376[7] = {&g_311, &g_311, &g_149, &g_311, &g_311, &g_149, &g_311};
    union U0 ***l_375[9] = {&l_376[6], &l_376[6], &l_376[6], &l_376[6], &l_376[6], &l_376[6], &l_376[6], &l_376[6], &l_376[6]};
    unsigned char l_379 = 5UL;
    short **l_383 = &l_174;
    unsigned l_405 = 8UL;
    unsigned l_410 = 0UL;
    unsigned short l_485[3];
    short l_526 = (-2L);
    unsigned l_585 = 0UL;
    unsigned l_591 = 0xF86BCD26L;
    short l_594[7] = {(-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L)};
    int *l_604 = &l_266;
    int *l_610 = &g_26;
    int *l_611 = &l_176[0][3];
    int **l_638 = (void*)0;
    unsigned char l_657[4][2][2] = {{{0xCEL, 0xCEL}, {0xCEL, 0xCEL}}, {{0xCEL, 0xCEL}, {0xCEL, 0xCEL}}, {{0xCEL, 0xCEL}, {0xCEL, 0xCEL}}, {{0xCEL, 0xCEL}, {0xCEL, 0xCEL}}};
    int ****l_677 = &g_675;
    int ****l_678 = &g_675;
    unsigned char l_718 = 249UL;
    int *l_728 = &g_180[1];
    char l_745 = 6L;
    unsigned l_846 = 0xD2A7D1E4L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
            l_176[i][j] = (-5L);
    }
    for (i = 0; i < 3; i++)
        l_485[i] = 65529UL;
    (*l_179) &= ((*l_178) = (l_176[0][3] ^= (p_29.f0 & (((*l_175) |= (safe_mul_func_int16_t_s_s(l_164, (l_164 , (((safe_mul_func_int16_t_s_s(((*l_174) = ((*l_173) = (**l_172))), g_128[0])) < g_79[0].f0) == 0x940AL))))) > (**g_144)))));
    if ((0x547D1AE7L == (((*l_196) &= (((safe_unary_minus_func_int16_t_s((((void*)0 == (*l_172)) || (safe_mul_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((*l_179), (((*l_178) == (safe_mod_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(3L, (safe_lshift_func_int8_t_s_u(((((l_194 ^ g_107[1][2][4]) <= p_29.f0) , p_28) , 0L), 3)))) || (**l_172)), 1L))) , l_195[9]))) & g_80.f0), (*l_173)))))) , g_79[0].f0) <= g_171)) > p_30)))
    {
        int *l_198 = &g_180[3];
        char **l_248 = &g_145;
        union U0 l_288[6] = {{0L}, {0L}, {0x9EF1DD19L}, {0L}, {0L}, {0x9EF1DD19L}};
        int l_289[6][1][7];
        unsigned char *l_324 = (void*)0;
        union U0 **l_374 = &g_149;
        union U0 ***l_373 = &l_374;
        unsigned l_411 = 4294967288UL;
        unsigned l_460[1][1];
        int i, j, k;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 7; k++)
                    l_289[i][j][k] = (-1L);
            }
        }
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_460[i][j] = 0xA8330122L;
        }
        for (p_30 = 0; (p_30 <= 0); p_30 += 1)
        {
            int *l_200 = &g_180[1];
            unsigned l_201[5][6] = {{0xBD047303L, 0x7776E9E2L, 1UL, 0x4D0F4EB8L, 1UL, 0x4D0F4EB8L}, {0xBD047303L, 0x7776E9E2L, 1UL, 0x4D0F4EB8L, 1UL, 0x4D0F4EB8L}, {0xBD047303L, 0x7776E9E2L, 1UL, 0x4D0F4EB8L, 1UL, 0x4D0F4EB8L}, {0xBD047303L, 0x7776E9E2L, 1UL, 0x4D0F4EB8L, 1UL, 0x4D0F4EB8L}, {0xBD047303L, 0x7776E9E2L, 1UL, 0x4D0F4EB8L, 1UL, 0x4D0F4EB8L}};
            char *l_207 = &g_142;
            int *l_221[4][3][2] = {{{&g_26, &g_26}, {&g_26, &g_26}, {&g_26, &g_26}}, {{&g_26, &g_26}, {&g_26, &g_26}, {&g_26, &g_26}}, {{&g_26, &g_26}, {&g_26, &g_26}, {&g_26, &g_26}}, {{&g_26, &g_26}, {&g_26, &g_26}, {&g_26, &g_26}}};
            int l_247 = 0x6C19CA71L;
            int i, j, k;
            (*l_172) = l_198;

            ;
            (**l_172) ^= 0xCC7D868FL;
        }

        ;
        (*l_178) = p_29.f0;
        if ((((safe_add_func_int16_t_s_s((l_338 == p_28.f0), ((*l_174) = ((safe_lshift_func_uint16_t_u_u((*l_198), 13)) | (p_28.f0 , p_28.f0))))) >= (((safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u(g_197[0][0][2], (safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((((**l_248) = (safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((g_19 < (*l_198)), p_30)), p_30))) > p_29.f0), 3)), (*l_179))))) > p_29.f0) >= p_30), 255UL)), (*l_198))) && g_326[2]) & 1L)) <= l_355))
        {
            int *l_356 = (void*)0;
            union U0 **l_363 = &g_311;
            union U0 ***l_364 = (void*)0;
            union U0 **l_366 = (void*)0;
            union U0 ***l_365 = &l_366;
            char *l_377 = &g_378;
            short ***l_381 = (void*)0;
            short ***l_382[1];
            int i;
            for (i = 0; i < 1; i++)
                l_382[i] = &g_380;
            (*l_172) = l_356;

            ;
            l_383 = ((safe_rshift_func_int8_t_s_u(((0xDBL <= p_29.f0) == 0xF65D306CL), (safe_mod_func_int8_t_s_s(((**l_248) = (safe_lshift_func_int16_t_s_s((l_363 != ((*l_365) = (void*)0)), 1))), ((*l_198) && (p_28.f0 == ((safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(func_17((safe_rshift_func_int16_t_s_s((((*l_377) = (~((g_326[2] , l_373) == l_375[0]))) , 0x34BDL), p_28.f0))), p_29.f0)), l_379)) == 0x6AL))))))) , g_380);

            ;
        }
        else
        {
            union U0 ****l_392 = (void*)0;
            union U0 ****l_393 = &l_375[0];
            unsigned char *l_396 = (void*)0;
            int l_406[6] = {(-5L), 0L, (-5L), 0L, (-5L), 0L};
            int l_407[2];
            int *l_422[8] = {&l_266, &l_406[5], &l_266, &l_406[5], &l_266, &l_406[5], &l_266, &l_406[5]};
            short *l_423 = &g_326[2];
            union U1 *l_450 = &g_79[1];
            unsigned short l_461 = 1UL;
            int i;
            for (i = 0; i < 2; i++)
                l_407[i] = 0L;
            (*l_167) = &g_79[0];
            (*l_179) = (safe_mod_func_uint16_t_u_u((0x2CDCEB6BL <= ((0xA446L & (((safe_rshift_func_int8_t_s_u((g_378 > (safe_lshift_func_uint8_t_u_u(((*l_175) ^= g_326[0]), (&l_374 == ((*l_393) = g_390))))), 6)) , (safe_sub_func_int32_t_s_s(p_30, (l_324 == (l_396 = &g_19))))) & g_378)) , 4294967293UL)), g_21));


            ;
            l_407[0] &= (((g_197[2][0][1] && (((*g_145) , ((*l_168) , ((*l_174) = g_397))) , ((*g_145) &= (safe_mul_func_uint8_t_u_u(((g_21 & (safe_add_func_uint32_t_u_u(g_402, (safe_rshift_func_uint16_t_u_s(g_171, (func_54(((((((p_29 = p_29) , (0x4D7EL == p_29.f0)) , (-4L)) , (*l_198)) ^ (-7L)) & g_180[3]), &l_198, l_405) , l_406[0])))))) == (**l_172)), p_28.f0))))) || 0xEDDFL) || p_30);
            if ((1L < ((((func_17((safe_sub_func_int32_t_s_s((((**l_383) = l_410) != ((*l_179) = ((*l_423) &= (((0L || (l_411 || ((((g_128[2] , ((safe_add_func_uint8_t_u_u(250UL, (*l_198))) || 0x96L)) != 0x46790FA3L) <= 0x6AF7L) > g_26))) && 0xA8L) <= p_29.f0)))), g_142))) ^ g_128[9]) , p_28.f0) != 0x6FL) & (**g_144))))
            {
                unsigned l_436[3];
                union U1 *l_451 = (void*)0;
                int i;
                for (i = 0; i < 3; i++)
                    l_436[i] = 4294967294UL;
                if ((g_128[0] >= p_28.f0))
                {
                    unsigned char l_426 = 0x42L;
                    l_198 = &l_407[0];

                    ;
                    (*l_173) = ((**l_220) <= (safe_rshift_func_int16_t_s_u(g_79[0].f0, 14)));
                    (*l_179) = p_29.f0;
                    l_426 ^= ((**l_220) &= ((**l_172) = (&p_28 != &g_228)));
                }
                else
                {
                    int l_437 = (-1L);
                    for (g_21 = 0; (g_21 == 6); g_21++)
                    {
                        return p_29.f0;
                    }
                    if ((safe_unary_minus_func_uint8_t_u((l_437 = ((((*l_179) = 7L) >= (safe_mod_func_int8_t_s_s(p_29.f0, (p_29.f0 & (!(p_30 < func_17(p_28.f0))))))) & ((safe_lshift_func_int16_t_s_u((-6L), g_397)) != (safe_sub_func_int32_t_s_s(((((*l_178) = l_436[2]) ^ g_197[1][0][1]) && 0x9EE9L), 0x4FCAD409L))))))))
                    {
                        l_198 = &l_289[0][0][3];

                        ;
                    }
                    else
                    {
                        unsigned char *l_446[9][9][3] = {{{&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}}, {{&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}}, {{&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}}, {{&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}}, {{&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}}, {{&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}}, {{&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}}, {{&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}}, {{&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}, {&g_19, (void*)0, &l_379}}};
                        int *l_447[7][6][6] = {{{(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}}, {{(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}}, {{(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}}, {{(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}}, {{(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}}, {{(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}}, {{(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}, {(void*)0, &g_26, (void*)0, &l_245, (void*)0, &l_437}}};
                        union U0 l_449[2] = {{7L}, {7L}};
                        int i, j, k;
                        l_289[0][0][2] ^= ((l_437 |= (safe_mul_func_int8_t_s_s((p_29 , (safe_mod_func_int8_t_s_s(func_17((**l_220)), ((*l_198) = 0x0BL)))), ((*g_145) = (safe_rshift_func_int8_t_s_u(((void*)0 == g_444), 0)))))) && ((((*l_174) = (p_29.f0 | g_448)) & p_30) , 3L));
                        l_198 = func_47(l_449[0], &l_447[2][2][5]);

                        ;
                    }

                    ;
                    l_451 = l_450;

                    ;
                }

                ;
                ;
                l_461 &= (p_29.f0 == (safe_add_func_int16_t_s_s((*l_173), ((*l_198) & ((safe_lshift_func_uint8_t_u_u(((p_28.f0 ^ (((((((safe_rshift_func_uint8_t_u_u((((p_30 , (-1L)) , func_17(p_28.f0)) == ((!((((safe_mul_func_int16_t_s_s((((g_378 | 0xC99ED336L) ^ l_460[0][0]) > (-6L)), p_28.f0)) >= 254UL) , 6L) | p_29.f0)) > p_30)), p_30)) && l_436[2]) , p_28.f0) , 4294967295UL) | (*l_173)) == p_28.f0) ^ 0xD1L)) < g_107[1][2][4]), p_30)) & (*l_198))))));
                (*l_172) = ((*l_220) = &g_26);

                ;
                ;
                (*l_220) = &l_406[0];

                ;
            }
            else
            {
                short l_469 = 0x95B9L;
                int l_476 = 0xE60865BAL;
                l_476 ^= (safe_sub_func_uint32_t_u_u(((((**l_383) = ((((p_29.f0 , (((safe_unary_minus_func_uint32_t_u(((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(p_28.f0, 14)), l_469)) > (p_30 != (safe_sub_func_uint16_t_u_u(((*l_169) = (safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s(func_17(((*l_179) = (l_396 != (void*)0))), (*l_178))), g_171))), 0x4CFBL)))))) || p_30) <= g_21)) > 3UL) , 4294967292UL) & 0xA50B3598L)) , 0xAFCFC72CL) , 0x383386B8L), p_30));
            }

            ;
            ;
        }

        ;



        ;
    }
    else
    {
        unsigned short l_487 = 0x299AL;
        int *l_509 = &l_176[0][2];
        union U0 l_542[10][5] = {{{-1L}, {0xDB90DF77L}, {0x3EBDD39CL}, {0xF7BCDF78L}, {0L}}, {{-1L}, {0xDB90DF77L}, {0x3EBDD39CL}, {0xF7BCDF78L}, {0L}}, {{-1L}, {0xDB90DF77L}, {0x3EBDD39CL}, {0xF7BCDF78L}, {0L}}, {{-1L}, {0xDB90DF77L}, {0x3EBDD39CL}, {0xF7BCDF78L}, {0L}}, {{-1L}, {0xDB90DF77L}, {0x3EBDD39CL}, {0xF7BCDF78L}, {0L}}, {{-1L}, {0xDB90DF77L}, {0x3EBDD39CL}, {0xF7BCDF78L}, {0L}}, {{-1L}, {0xDB90DF77L}, {0x3EBDD39CL}, {0xF7BCDF78L}, {0L}}, {{-1L}, {0xDB90DF77L}, {0x3EBDD39CL}, {0xF7BCDF78L}, {0L}}, {{-1L}, {0xDB90DF77L}, {0x3EBDD39CL}, {0xF7BCDF78L}, {0L}}, {{-1L}, {0xDB90DF77L}, {0x3EBDD39CL}, {0xF7BCDF78L}, {0L}}};
        int ***l_543 = &g_213;
        int i, j;
        for (p_30 = 0; (p_30 < 12); p_30 = safe_add_func_uint16_t_u_u(p_30, 6))
        {
            union U1 ***l_483 = (void*)0;
            union U1 ***l_484 = &g_481;
            unsigned **l_486 = (void*)0;
            short *l_488 = &g_326[0];
            unsigned l_489 = 0x28D810C8L;
            int *l_499[5][1][1] = {{{&l_176[0][3]}}, {{&l_176[0][3]}}, {{&l_176[0][3]}}, {{&l_176[0][3]}}, {{&l_176[0][3]}}};
            int *l_500 = (void*)0;
            int i, j, k;
            (*l_220) = ((((((safe_lshift_func_uint16_t_u_s(((void*)0 != g_380), 4)) , (void*)0) == ((*l_484) = g_481)) , 0xF811DCE7L) , (l_485[0] , func_17(((void*)0 == l_486)))) , (*l_172));

            ;
            (*l_173) = ((g_197[1][0][1] & (p_29 , l_487)) <= (((((*l_179) , (((void*)0 == l_488) || g_142)) || g_107[1][2][4]) == (g_448 && (*l_179))) ^ l_489));
            for (l_410 = 0; (l_410 == 43); ++l_410)
            {
                int l_498 = 0L;
                union U0 l_506 = {0x457F0CCCL};
                union U1 l_514 = {4294967295UL};
                if (((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(0UL, l_489)), (((**g_144) | (*g_145)) & g_142))) > p_28.f0))
                {
                    (**l_172) ^= p_29.f0;
                }
                else
                {
                    int *l_508[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_508[i] = &l_266;
                    if ((p_29.f0 = (+(func_17(l_498) , p_29.f0))))
                    {
                        unsigned char ***l_503 = &g_501;
                        (*l_503) = g_501;
                    }
                    else
                    {
                        int ***l_507[9] = {&l_172, &g_60, &l_172, &g_60, &l_172, &g_60, &l_172, &g_60, &l_172};
                        int i;
                        if (l_487)
                            break;
                        (**l_172) = (p_30 == (safe_mul_func_uint8_t_u_u((((p_28.f0 != 0x89CCAD6DL) > g_180[1]) , 0x63L), 0UL)));
                    }
                    for (l_164 = 0; (l_164 == 18); ++l_164)
                    {
                        (*l_509) &= (safe_add_func_uint8_t_u_u(p_28.f0, (p_28.f0 , ((l_514 , g_26) , p_29.f0))));
                        return p_30;
                    }
                    for (g_21 = 29; (g_21 == 25); g_21 = safe_sub_func_uint32_t_u_u(g_21, 9))
                    {
                        unsigned short l_517 = 0x87F9L;
                        (*l_172) = (((l_517 , func_54(p_29.f0, &l_509, ((safe_mod_func_uint16_t_u_u(((*l_169) &= 65531UL), p_28.f0)) != (safe_mul_func_uint8_t_u_u((p_29 , ((safe_mul_func_int8_t_s_s(((**g_144) = (l_517 ^ (safe_rshift_func_int16_t_s_s(l_526, 12)))), (((*l_509) , p_29.f0) >= g_80.f0))) || 0x03B1EBAEL)), 1L))))) , 1L) , (*l_172));
                        if ((**l_172))
                            break;
                        return l_514.f0;
                    }
                    for (l_487 = (-20); (l_487 > 37); ++l_487)
                    {
                        int l_529 = 0xD218CCECL;
                        int *l_538 = &l_266;
                        (**l_172) ^= (*l_509);
                        if (g_21)
                            continue;
                    }
                }
            }
        }

        ;
        for (l_266 = 0; (l_266 < (-12)); l_266 = safe_sub_func_uint16_t_u_u(l_266, 5))
        {
            union U0 *l_541 = &l_199;
            if (p_30)
                break;
            if ((**l_220))
                continue;
            l_541 = l_541;
            if (p_30)
                continue;
        }
        (*l_172) = func_47(l_542[4][3], ((*l_543) = &l_179));

        ;
        ;
    }

    ;

    ;

    ;
    for (g_171 = 0; (g_171 >= 17); g_171 = safe_add_func_int8_t_s_s(g_171, 1))
    {
        int **l_546 = &l_173;
        int l_563[10][7] = {{0x7F081A31L, 0xF98608C3L, 0xB603D8F4L, 0x49AA7848L, 0x6307F35DL, 1L, (-4L)}, {0x7F081A31L, 0xF98608C3L, 0xB603D8F4L, 0x49AA7848L, 0x6307F35DL, 1L, (-4L)}, {0x7F081A31L, 0xF98608C3L, 0xB603D8F4L, 0x49AA7848L, 0x6307F35DL, 1L, (-4L)}, {0x7F081A31L, 0xF98608C3L, 0xB603D8F4L, 0x49AA7848L, 0x6307F35DL, 1L, (-4L)}, {0x7F081A31L, 0xF98608C3L, 0xB603D8F4L, 0x49AA7848L, 0x6307F35DL, 1L, (-4L)}, {0x7F081A31L, 0xF98608C3L, 0xB603D8F4L, 0x49AA7848L, 0x6307F35DL, 1L, (-4L)}, {0x7F081A31L, 0xF98608C3L, 0xB603D8F4L, 0x49AA7848L, 0x6307F35DL, 1L, (-4L)}, {0x7F081A31L, 0xF98608C3L, 0xB603D8F4L, 0x49AA7848L, 0x6307F35DL, 1L, (-4L)}, {0x7F081A31L, 0xF98608C3L, 0xB603D8F4L, 0x49AA7848L, 0x6307F35DL, 1L, (-4L)}, {0x7F081A31L, 0xF98608C3L, 0xB603D8F4L, 0x49AA7848L, 0x6307F35DL, 1L, (-4L)}};
        int *l_605 = &g_21;
        union U0 l_609 = {1L};
        int i, j;
        for (g_9 = 0; (g_9 >= 0); g_9 -= 1)
        {
            int i;
            (*l_220) = g_445[g_9];

            ;
            (*l_220) = func_47(p_29, l_546);

            ;
        }
        for (g_9 = (-2); (g_9 <= (-24)); g_9 = safe_sub_func_uint32_t_u_u(g_9, 3))
        {
            int *l_549 = (void*)0;
            int *l_569 = &l_563[3][0];
            int **l_602 = &l_179;
            int *l_614 = &l_176[0][3];
        }
        (*l_611) |= (safe_add_func_uint16_t_u_u(g_572, p_29.f0));
    }
    if ((((*l_179) , p_30) , p_30))
    {
        int *l_630 = &l_266;
        int l_632 = 8L;
        union U0 l_708 = {0L};
        char l_731 = 0xE5L;
        int ****l_747 = &g_675;
        int **l_791 = (void*)0;
        int *l_802 = &g_795[0][0][0];
        union U1 ***l_804[1];
        char *l_819 = &l_745;
        int i;
        for (i = 0; i < 1; i++)
            l_804[i] = &g_481;
        for (g_448 = 0; (g_448 <= 8); g_448 += 1)
        {
            int i;
            if (l_195[g_448])
                break;
        }
        for (g_397 = (-13); (g_397 == 23); g_397 = safe_add_func_uint8_t_u_u(g_397, 1))
        {
            int *l_631[4];
            int ***l_635 = (void*)0;
            int ***l_636 = &g_60;
            int ***l_637 = &l_172;
            union U0 **l_651 = &g_149;
            unsigned char **l_673 = &l_175;
            int **l_712 = (void*)0;
            union U0 l_723[9][2] = {{{4L}, {1L}}, {{4L}, {1L}}, {{4L}, {1L}}, {{4L}, {1L}}, {{4L}, {1L}}, {{4L}, {1L}}, {{4L}, {1L}}, {{4L}, {1L}}, {{4L}, {1L}}};
            int i, j;
            for (i = 0; i < 4; i++)
                l_631[i] = &l_266;
            l_632 |= (safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((safe_add_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(func_17(func_17(p_28.f0)), (safe_mod_func_uint16_t_u_u((((p_29.f0 > ((0x4AF2L <= p_28.f0) <= p_28.f0)) && 0x3ECDB3C7L) && 0x8191L), (*l_630))))) , 0x7BL), (-1L))))), (*l_630)));
            for (l_632 = 0; (l_632 >= (-11)); l_632--)
            {
                (*l_604) = (p_29.f0 , (*l_630));
            }
            if ((((*l_637) = g_213) == (p_29 , g_213)))
            {
                unsigned l_643 = 0xE9862A53L;
                int *l_648 = &l_176[0][0];
                int l_656 = 0x1C327994L;
                unsigned char l_658 = 0xD6L;
                int *l_663[10] = {&l_656, &l_656, &l_632, &l_632, &l_656, &l_656, &l_656, &l_632, &l_632, &l_656};
                union U0 l_668 = {0L};
                int *****l_676[1][8][6] = {{{&g_674, &g_674, &g_674, (void*)0, &g_674, &g_674}, {&g_674, &g_674, &g_674, (void*)0, &g_674, &g_674}, {&g_674, &g_674, &g_674, (void*)0, &g_674, &g_674}, {&g_674, &g_674, &g_674, (void*)0, &g_674, &g_674}, {&g_674, &g_674, &g_674, (void*)0, &g_674, &g_674}, {&g_674, &g_674, &g_674, (void*)0, &g_674, &g_674}, {&g_674, &g_674, &g_674, (void*)0, &g_674, &g_674}, {&g_674, &g_674, &g_674, (void*)0, &g_674, &g_674}}};
                char *l_714 = &g_142;
                int i, j, k;
                if (((func_31(l_643, p_30, p_29, func_47(p_29, ((p_28.f0 , (*l_610)) , &l_178))) , (*l_610)) , p_29.f0))
                {
                    union U0 l_646 = {0x733B659FL};
                    int *l_647[3][5][8] = {{{&l_176[0][3], &l_245, &l_245, &g_26, &l_632, &l_176[0][3], &g_26, &g_180[1]}, {&l_176[0][3], &l_245, &l_245, &g_26, &l_632, &l_176[0][3], &g_26, &g_180[1]}, {&l_176[0][3], &l_245, &l_245, &g_26, &l_632, &l_176[0][3], &g_26, &g_180[1]}, {&l_176[0][3], &l_245, &l_245, &g_26, &l_632, &l_176[0][3], &g_26, &g_180[1]}, {&l_176[0][3], &l_245, &l_245, &g_26, &l_632, &l_176[0][3], &g_26, &g_180[1]}}, {{&l_176[0][3], &l_245, &l_245, &g_26, &l_632, &l_176[0][3], &g_26, &g_180[1]}, {&l_176[0][3], &l_245, &l_245, &g_26, &l_632, &l_176[0][3], &g_26, &g_180[1]}, {&l_176[0][3], &l_245, &l_245, &g_26, &l_632, &l_176[0][3], &g_26, &g_180[1]}, {&l_176[0][3], &l_245, &l_245, &g_26, &l_632, &l_176[0][3], &g_26, &g_180[1]}, {&l_176[0][3], &l_245, &l_245, &g_26, &l_632, &l_176[0][3], &g_26, &g_180[1]}}, {{&l_176[0][3], &l_245, &l_245, &g_26, &l_632, &l_176[0][3], &g_26, &g_180[1]}, {&l_176[0][3], &l_245, &l_245, &g_26, &l_632, &l_176[0][3], &g_26, &g_180[1]}, {&l_176[0][3], &l_245, &l_245, &g_26, &l_632, &l_176[0][3], &g_26, &g_180[1]}, {&l_176[0][3], &l_245, &l_245, &g_26, &l_632, &l_176[0][3], &g_26, &g_180[1]}, {&l_176[0][3], &l_245, &l_245, &g_26, &l_632, &l_176[0][3], &g_26, &g_180[1]}}};
                    int i, j, k;
                    if ((safe_sub_func_int16_t_s_s(p_28.f0, p_29.f0)))
                    {
                        int l_653 = 0xBD0DE1BCL;
                        l_658 = ((*l_179) |= (!(safe_sub_func_uint16_t_u_u((((((void*)0 == l_651) || 0UL) & p_30) != ((0xEDL <= (safe_unary_minus_func_uint8_t_u(l_653))) | (safe_add_func_int32_t_s_s(((*l_630) && (((((**l_167) , (l_653 < l_653)) >= g_21) , p_28.f0) == l_656)), 0x823E39D7L)))), l_657[1][1][0]))));
                        (*l_611) &= ((0x4DL | ((*l_175) = func_17(g_9))) < p_28.f0);
                        (*l_604) = (func_17((safe_sub_func_int8_t_s_s((*g_145), (+((*l_648) >= (0x352BL <= (safe_mul_func_uint16_t_u_u((func_17((1UL != ((*l_630) || 255UL))) ^ (((*g_145) & p_29.f0) || 9L)), p_29.f0)))))))) <= (-10L));
                        if (p_28.f0)
                            continue;
                    }
                    else
                    {
                        return p_30;


                    }
                    (*l_610) = p_30;
                    if ((*l_630))
                        continue;
                    p_29.f0 = ((*l_648) & (safe_sub_func_int32_t_s_s((p_29.f0 , (*l_630)), p_30)));
                }
                else
                {
                    unsigned l_669 = 4294967295UL;
                    unsigned *l_671[6][3][4] = {{{&g_397, &g_397, &l_410, &l_585}, {&g_397, &g_397, &l_410, &l_585}, {&g_397, &g_397, &l_410, &l_585}}, {{&g_397, &g_397, &l_410, &l_585}, {&g_397, &g_397, &l_410, &l_585}, {&g_397, &g_397, &l_410, &l_585}}, {{&g_397, &g_397, &l_410, &l_585}, {&g_397, &g_397, &l_410, &l_585}, {&g_397, &g_397, &l_410, &l_585}}, {{&g_397, &g_397, &l_410, &l_585}, {&g_397, &g_397, &l_410, &l_585}, {&g_397, &g_397, &l_410, &l_585}}, {{&g_397, &g_397, &l_410, &l_585}, {&g_397, &g_397, &l_410, &l_585}, {&g_397, &g_397, &l_410, &l_585}}, {{&g_397, &g_397, &l_410, &l_585}, {&g_397, &g_397, &l_410, &l_585}, {&g_397, &g_397, &l_410, &l_585}}};
                    unsigned **l_670 = &l_671[0][2][3];
                    int ****l_672 = &l_635;
                    int i, j, k;
                    (*l_220) = &l_632;

                    ;
                    (*l_610) |= ((p_28.f0 , ((((safe_mul_func_uint8_t_u_u((((**g_589) = ((**l_167) , func_47(l_668, &l_630))) != ((4294967295UL | ((*l_196) = l_669)) , ((*l_670) = &l_591))), (((*l_672) = l_636) == (void*)0))) , (void*)0) == l_673) , p_28.f0)) <= p_28.f0);

                    ;
                }

                ;
                for (l_164 = 0; (l_164 <= 2); l_164 += 1)
                {
                    int i;
                    return l_485[l_164];


                }
                if (((l_677 = g_674) == (g_679 = (l_678 = &g_675))))
                {
                    unsigned char l_682 = 0xC1L;
                    int ***l_700 = &g_213;
                    int *l_710 = &g_180[1];
                    for (g_227 = 16; (g_227 < 52); g_227 = safe_add_func_uint16_t_u_u(g_227, 9))
                    {
                        (*l_179) &= (-1L);
                    }
                    if (l_682)
                    {
                        p_29.f0 = (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u(l_682, 7)), (safe_sub_func_int8_t_s_s((-1L), (0xCEL ^ ((**g_144) = (+((*g_674) == (*g_674)))))))));
                    }
                    else
                    {
                        union U1 l_691[4][3][8] = {{{{1UL}, {0x7CE0B703L}, {0xE68FA3A1L}, {0x7CE0B703L}, {1UL}, {4294967289UL}, {3UL}, {0x7CE0B703L}}, {{1UL}, {0x7CE0B703L}, {0xE68FA3A1L}, {0x7CE0B703L}, {1UL}, {4294967289UL}, {3UL}, {0x7CE0B703L}}, {{1UL}, {0x7CE0B703L}, {0xE68FA3A1L}, {0x7CE0B703L}, {1UL}, {4294967289UL}, {3UL}, {0x7CE0B703L}}}, {{{1UL}, {0x7CE0B703L}, {0xE68FA3A1L}, {0x7CE0B703L}, {1UL}, {4294967289UL}, {3UL}, {0x7CE0B703L}}, {{1UL}, {0x7CE0B703L}, {0xE68FA3A1L}, {0x7CE0B703L}, {1UL}, {4294967289UL}, {3UL}, {0x7CE0B703L}}, {{1UL}, {0x7CE0B703L}, {0xE68FA3A1L}, {0x7CE0B703L}, {1UL}, {4294967289UL}, {3UL}, {0x7CE0B703L}}}, {{{1UL}, {0x7CE0B703L}, {0xE68FA3A1L}, {0x7CE0B703L}, {1UL}, {4294967289UL}, {3UL}, {0x7CE0B703L}}, {{1UL}, {0x7CE0B703L}, {0xE68FA3A1L}, {0x7CE0B703L}, {1UL}, {4294967289UL}, {3UL}, {0x7CE0B703L}}, {{1UL}, {0x7CE0B703L}, {0xE68FA3A1L}, {0x7CE0B703L}, {1UL}, {4294967289UL}, {3UL}, {0x7CE0B703L}}}, {{{1UL}, {0x7CE0B703L}, {0xE68FA3A1L}, {0x7CE0B703L}, {1UL}, {4294967289UL}, {3UL}, {0x7CE0B703L}}, {{1UL}, {0x7CE0B703L}, {0xE68FA3A1L}, {0x7CE0B703L}, {1UL}, {4294967289UL}, {3UL}, {0x7CE0B703L}}, {{1UL}, {0x7CE0B703L}, {0xE68FA3A1L}, {0x7CE0B703L}, {1UL}, {4294967289UL}, {3UL}, {0x7CE0B703L}}}};
                        int l_701 = 0x4A255A9CL;
                        short l_702[2];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_702[i] = 0xBC14L;
                        l_702[0] ^= (safe_lshift_func_uint8_t_u_u((func_17((l_691[3][1][1] , ((void*)0 != &g_390))) == (g_21 == (((safe_mod_func_uint32_t_u_u((((safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(func_17((safe_sub_func_uint16_t_u_u((((*g_679) != l_700) | (l_701 ^= ((~0UL) | (*l_630)))), 0xCF92L))), g_171)), p_30)) < 0x1604L) <= 0xA9C889B3L), g_26)) <= g_197[1][0][1]) > (-4L)))), (*l_648)));
                    }
                    for (l_682 = 0; (l_682 >= 43); l_682++)
                    {
                        unsigned short l_707 = 0x2629L;
                        int *l_709 = &l_176[0][0];
                        int *l_711 = &l_355;
                        p_29.f0 ^= (safe_add_func_int32_t_s_s(l_707, l_707));
                        (*l_604) |= (l_708 , (p_30 > ((**g_144) && (func_17(p_29.f0) < (-1L)))));
                        p_29.f0 &= ((*l_611) |= (((*l_711) = (p_30 > (*l_710))) , p_28.f0));
                        (*l_610) ^= ((*l_179) = (*l_709));
                    }
                }
                else
                {
                    (*l_610) = p_28.f0;
                    (*l_179) = (l_712 != (void*)0);
                    p_29.f0 = p_28.f0;
                    for (g_402 = 0; (g_402 <= 9); g_402 += 1)
                    {
                        (*l_630) = (*l_648);
                    }
                }
                for (l_266 = 3; (l_266 >= 0); l_266 -= 1)
                {
                    int *l_715 = &g_180[1];
                    int i;
                    if (l_594[l_266])
                    {
                        union U1 l_713 = {0xA6C33BEBL};
                        int **l_716 = &l_179;
                        union U0 l_717 = {0x16086E17L};
                        int i;
                        g_180[l_266] = ((((l_713 , g_180[l_266]) , l_714) != (void*)0) ^ (*l_630));
                    }
                    else
                    {
                        return l_718;


                    }
                    (*l_611) &= (safe_mul_func_uint8_t_u_u(p_30, ((*g_145) = 0x38L)));
                }
            }
            else
            {
                int *l_724[4][7][7] = {{{&l_632, &g_180[1], (void*)0, &g_180[1], &l_176[0][3], &l_176[0][3], &l_176[0][3]}, {&l_632, &g_180[1], (void*)0, &g_180[1], &l_176[0][3], &l_176[0][3], &l_176[0][3]}, {&l_632, &g_180[1], (void*)0, &g_180[1], &l_176[0][3], &l_176[0][3], &l_176[0][3]}, {&l_632, &g_180[1], (void*)0, &g_180[1], &l_176[0][3], &l_176[0][3], &l_176[0][3]}, {&l_632, &g_180[1], (void*)0, &g_180[1], &l_176[0][3], &l_176[0][3], &l_176[0][3]}, {&l_632, &g_180[1], (void*)0, &g_180[1], &l_176[0][3], &l_176[0][3], &l_176[0][3]}, {&l_632, &g_180[1], (void*)0, &g_180[1], &l_176[0][3], &l_176[0][3], &l_176[0][3]}}, {{&l_632, &g_180[1], (void*)0, &g_180[1], &l_176[0][3], &l_176[0][3], &l_176[0][3]}, {&l_632, &g_180[1], (void*)0, &g_180[1], &l_176[0][3], &l_176[0][3], &l_176[0][3]}, {&l_632, &g_180[1], (void*)0, &g_180[1], &l_176[0][3], &l_176[0][3], &l_176[0][3]}, {&l_632, &g_180[1], (void*)0, &g_180[1], &l_176[0][3], &l_176[0][3], &l_176[0][3]}, {&l_632, &g_180[1], (void*)0, &g_180[1], &l_176[0][3], &l_176[0][3], &l_176[0][3]}, {&l_632, &g_180[1], (void*)0, &g_180[1], &l_176[0][3], &l_176[0][3], &l_176[0][3]}, {&l_632, &g_180[1], (void*)0, &g_180[1], &l_176[0][3], &l_176[0][3], &l_176[0][3]}}, {{&l_632, &g_180[1], (void*)0, &g_180[1], &l_176[0][3], &l_176[0][3], &l_176[0][3]}, {&l_632, &g_180[1], (void*)0, &g_180[1], &l_176[0][3], &l_176[0][3], &l_176[0][3]}, {&l_632, &g_180[1], (void*)0, &g_180[1], &l_176[0][3], &l_176[0][3], &l_176[0][3]}, {&l_632, &g_180[1], (void*)0, &g_180[1], &l_176[0][3], &l_176[0][3], &l_176[0][3]}, {&l_632, &g_180[1], (void*)0, &g_180[1], &l_176[0][3], &l_176[0][3], &l_176[0][3]}, {&l_632, &g_180[1], (void*)0, &g_180[1], &l_176[0][3], &l_176[0][3], &l_176[0][3]}, {&l_632, &g_180[1], (void*)0, &g_180[1], &l_176[0][3], &l_176[0][3], &l_176[0][3]}}, {{&l_632, &g_180[1], (void*)0, &g_180[1], &l_176[0][3], &l_176[0][3], &l_176[0][3]}, {&l_632, &g_180[1], (void*)0, &g_180[1], &l_176[0][3], &l_176[0][3], &l_176[0][3]}, {&l_632, &g_180[1], (void*)0, &g_180[1], &l_176[0][3], &l_176[0][3], &l_176[0][3]}, {&l_632, &g_180[1], (void*)0, &g_180[1], &l_176[0][3], &l_176[0][3], &l_176[0][3]}, {&l_632, &g_180[1], (void*)0, &g_180[1], &l_176[0][3], &l_176[0][3], &l_176[0][3]}, {&l_632, &g_180[1], (void*)0, &g_180[1], &l_176[0][3], &l_176[0][3], &l_176[0][3]}, {&l_632, &g_180[1], (void*)0, &g_180[1], &l_176[0][3], &l_176[0][3], &l_176[0][3]}}};
                union U1 l_732 = {0UL};
                int i, j, k;
                for (g_171 = 0; (g_171 == 9); g_171 = safe_add_func_uint8_t_u_u(g_171, 1))
                {
                    int *l_727[6][5] = {{&l_245, &l_176[0][0], &l_245, &l_176[0][0], &l_245}, {&l_245, &l_176[0][0], &l_245, &l_176[0][0], &l_245}, {&l_245, &l_176[0][0], &l_245, &l_176[0][0], &l_245}, {&l_245, &l_176[0][0], &l_245, &l_176[0][0], &l_245}, {&l_245, &l_176[0][0], &l_245, &l_176[0][0], &l_245}, {&l_245, &l_176[0][0], &l_245, &l_176[0][0], &l_245}};
                    int i, j;
                    l_724[0][4][3] = func_47(l_723[8][0], ((**g_444) , &l_630));
                    (*l_610) &= (func_17((safe_sub_func_int32_t_s_s((0xB65F48F1L >= (*l_630)), ((p_29.f0 ^= p_30) | p_30)))) > l_731);
                }
                (*l_220) = (l_732 , func_47(p_29, &l_630));

                ;
                if ((safe_rshift_func_uint16_t_u_s((p_28.f0 <= p_29.f0), 2)))
                {
                    return p_30;


                }
                else
                {
                    p_29.f0 = ((!(p_30 == (~(**g_144)))) == ((g_735[9][2][2] = &g_380) == (void*)0));
                }
            }

            ;
            ;
        }

        ;


        for (g_21 = 0; (g_21 != 16); g_21 = safe_add_func_uint32_t_u_u(g_21, 1))
        {
            unsigned l_742[10][7][3] = {{{0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}}, {{0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}}, {{0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}}, {{0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}}, {{0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}}, {{0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}}, {{0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}}, {{0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}}, {{0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}}, {{0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}, {0UL, 0UL, 0x9FE21A6DL}}};
            int i, j, k;
            (*l_611) &= (safe_sub_func_int32_t_s_s(((*l_179) ^= 0x3C70896BL), func_17((((*l_630) = ((safe_sub_func_int32_t_s_s((p_29.f0 & func_17(((func_17(l_742[6][2][1]) , func_17(p_30)) >= 0x21L))), ((func_17(p_30) && 65535UL) != p_29.f0))) <= (*l_630))) == p_30))));
        }
        for (g_397 = 0; (g_397 < 22); ++g_397)
        {
            unsigned short l_752 = 65526UL;
            int **l_755 = &l_611;
            int *l_756[6][7];
            short *l_757 = &l_338;
            char *l_818 = (void*)0;
            int l_831 = 0xBCE5E1E1L;
            short ***l_832 = (void*)0;
            int l_835 = 0x965B5C37L;
            int *l_841 = &l_176[0][3];
            union U0 l_844[9][6][4] = {{{{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}}, {{{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}}, {{{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}}, {{{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}}, {{{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}}, {{{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}}, {{{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}}, {{{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}}, {{{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}, {{8L}, {0xCECE1E22L}, {-10L}, {-1L}}}};
            int i, j, k;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 7; j++)
                    l_756[i][j] = &l_176[0][0];
            }
            p_29.f0 = (l_745 > (safe_unary_minus_func_uint32_t_u((l_747 == l_678))));
            (*l_630) &= (safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s(l_752, (safe_add_func_uint16_t_u_u(0x72FFL, ((*l_757) = ((*l_174) = (p_28.f0 , (*l_179)))))))), 0xDFL));
            if (((safe_sub_func_int8_t_s_s((**g_144), (func_17((safe_rshift_func_uint8_t_u_u(0x69L, 5))) , (safe_mul_func_uint8_t_u_u((0xB7A52FBEL || p_29.f0), p_29.f0))))) | p_28.f0))
            {
                int l_765 = 0xB7236AA4L;
                int **l_775 = (void*)0;
                union U0 l_777 = {0xDE51EFFFL};
                int l_783 = (-4L);
                int *l_792 = &l_176[0][6];
                for (l_266 = 0; (l_266 <= 6); l_266 += 1)
                {
                    int i;
                    if (g_128[(l_266 + 2)])
                        break;
                }
                (*l_220) = (void*)0;

                ;
                if (p_29.f0)
                {
                    int ****l_764 = &g_675;
                    l_765 = ((*l_604) = ((void*)0 != l_764));
                    return p_30;


                }
                else
                {
                    union U0 l_774 = {-5L};
                    int *l_776 = &g_26;
                    int l_784 = (-1L);
                    int ***l_790 = &g_213;
                    unsigned short l_793[9][6][4] = {{{6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}}, {{6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}}, {{6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}}, {{6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}}, {{6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}}, {{6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}}, {{6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}}, {{6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}}, {{6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}, {6UL, 0xA313L, 65535UL, 0xB256L}}};
                    unsigned short l_794 = 0x4110L;
                    unsigned short **l_797 = &l_170[4];
                    unsigned short ***l_796[8][2] = {{&l_797, &l_797}, {&l_797, &l_797}, {&l_797, &l_797}, {&l_797, &l_797}, {&l_797, &l_797}, {&l_797, &l_797}, {&l_797, &l_797}, {&l_797, &l_797}};
                    int i, j, k;
                    if ((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((func_17(p_30) <= (l_765 || (*l_610))), 0x377404C6L)), ((safe_mod_func_int32_t_s_s(((*l_179) |= ((p_28.f0 == ((l_774 , ((*l_174) = 0xBDABL)) <= ((*l_757) = (p_30 , 0L)))) | p_29.f0)), l_765)) || 0xC650DE2FL))), l_774.f0)))
                    {
                        int l_785 = 0x9E7323E8L;
                        l_776 = func_47(p_29, l_775);

                        ;
                        (*l_220) = func_47(l_777, l_775);

                        ;
                        (*l_611) ^= ((((-10L) | (((g_107[1][2][4] != 0x2778L) || (safe_mod_func_uint8_t_u_u((((((**g_144) &= func_17((p_28.f0 >= func_17(((safe_add_func_int16_t_s_s(((((8UL ^ (+g_782)) , (4294967295UL >= l_783)) , (void*)0) != (void*)0), p_29.f0)) ^ l_784))))) | p_30) || p_30) <= p_28.f0), l_785))) >= g_326[1])) > (*l_776)) , (*l_630));
                    }
                    else
                    {
                        (**l_755) |= (safe_sub_func_uint16_t_u_u(0x9518L, (safe_lshift_func_uint16_t_u_u(0x5BBCL, 10))));
                        (*g_390) = (void*)0;

                        ;
                    }

                    ;
                    ;
                    if ((((**g_144) = p_29.f0) | l_794))
                    {
                        (*l_792) ^= g_795[0][0][0];
                        if ((*l_630))
                            continue;
                    }
                    else
                    {
                        (*l_755) = &l_783;

                        ;
                        return p_29.f0;


                    }
                    g_798 = (void*)0;

                    ;
                    if (p_29.f0)
                        continue;
                }

                ;
                ;
            }
            else
            {
                int *l_801 = &g_180[1];
                int *l_803[6][10] = {{&l_176[0][4], (void*)0, (void*)0, &l_176[0][6], &l_176[0][7], &l_266, &l_266, &l_266, (void*)0, &l_266}, {&l_176[0][4], (void*)0, (void*)0, &l_176[0][6], &l_176[0][7], &l_266, &l_266, &l_266, (void*)0, &l_266}, {&l_176[0][4], (void*)0, (void*)0, &l_176[0][6], &l_176[0][7], &l_266, &l_266, &l_266, (void*)0, &l_266}, {&l_176[0][4], (void*)0, (void*)0, &l_176[0][6], &l_176[0][7], &l_266, &l_266, &l_266, (void*)0, &l_266}, {&l_176[0][4], (void*)0, (void*)0, &l_176[0][6], &l_176[0][7], &l_266, &l_266, &l_266, (void*)0, &l_266}, {&l_176[0][4], (void*)0, (void*)0, &l_176[0][6], &l_176[0][7], &l_266, &l_266, &l_266, (void*)0, &l_266}};
                union U0 **l_813 = &g_311;
                int i, j;
                (*l_802) ^= (p_28.f0 != ((*l_196) = 0x39C57F2FL));
                for (g_142 = 4; (g_142 >= 0); g_142 -= 1)
                {
                    unsigned l_817 = 1UL;
                    unsigned char *l_838 = (void*)0;
                    unsigned char *l_839[6] = {&g_572, &g_572, &l_657[1][1][0], &g_572, &g_572, &l_657[1][1][0]};
                    unsigned *l_840 = &l_585;
                    int i;
                }
                for (l_718 = 0; (l_718 >= 42); l_718++)
                {
                    g_800 = func_47(l_844[6][3][0], &l_756[4][4]);
                    if (g_845)
                        continue;
                }
            }
            (*l_220) = (void*)0;

            ;
        }


        ;
        ;
    }
    else
    {
        (*l_167) = (*g_481);

        ;
        return (*g_800);


    }

    ;

    ;

    ;
    return l_846;


}







static union U1 func_31(short p_32, int p_33, union U0 p_34, int * p_35)
{
    int *l_160[3][1];
    int **l_159 = &l_160[2][0];
    union U1 l_161 = {4294967293UL};
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_160[i][j] = &g_21;
    }
    for (g_9 = 0; (g_9 > 0); g_9 = safe_add_func_uint8_t_u_u(g_9, 1))
    {
        for (g_21 = 0; g_21 < 10; g_21 += 1)
        {
            g_128[g_21] = 1UL;
        }
    }
    (*l_159) = func_47(func_54(p_33, l_159, (*p_35)), &l_160[2][0]);
    g_80.f0 = 0x757E7574L;
    return l_161;

    }







static union U0 func_36(int ** p_37, int ** p_38, int * p_39, int p_40)
{
    short l_66 = (-1L);
    short *l_67 = &l_66;
    int l_74 = (-2L);
    unsigned l_81 = 1UL;
    int l_82 = (-9L);
    int *l_108[1];
    int l_124[1][2];
    union U0 l_156 = {0xEBE47ABFL};
    int i, j;
    for (i = 0; i < 1; i++)
        l_108[i] = &g_21;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_124[i][j] = 0x62AD52EBL;
    }
    if ((l_82 ^= (safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(((*l_67) = func_17(l_66)), (safe_sub_func_int8_t_s_s(0x78L, func_17(((**p_37) ^= (safe_add_func_int16_t_s_s((l_81 |= ((~(safe_mod_func_int16_t_s_s(l_74, ((safe_add_func_uint8_t_u_u(p_40, 0x52L)) & g_19)))) <= p_40)), l_74)))))))), l_74))))
    {
        unsigned l_101[8] = {0x47297097L, 4294967295UL, 0x47297097L, 4294967295UL, 0x47297097L, 4294967295UL, 0x47297097L, 4294967295UL};
        int l_105[4] = {0x966D8DA3L, 0L, 0x966D8DA3L, 0L};
        union U1 *l_152 = &g_79[0];
        union U1 **l_153[6] = {&l_152, &l_152, &l_152, &l_152, &l_152, &l_152};
        union U1 *l_154[7];
        int i;
        for (i = 0; i < 7; i++)
            l_154[i] = &g_79[2];
        for (p_40 = 19; (p_40 != (-17)); p_40 = safe_sub_func_uint32_t_u_u(p_40, 3))
        {
            union U0 l_91[7][1][10] = {{{{0L}, {-9L}, {7L}, {1L}, {1L}, {7L}, {-9L}, {0L}, {7L}, {3L}}}, {{{0L}, {-9L}, {7L}, {1L}, {1L}, {7L}, {-9L}, {0L}, {7L}, {3L}}}, {{{0L}, {-9L}, {7L}, {1L}, {1L}, {7L}, {-9L}, {0L}, {7L}, {3L}}}, {{{0L}, {-9L}, {7L}, {1L}, {1L}, {7L}, {-9L}, {0L}, {7L}, {3L}}}, {{{0L}, {-9L}, {7L}, {1L}, {1L}, {7L}, {-9L}, {0L}, {7L}, {3L}}}, {{{0L}, {-9L}, {7L}, {1L}, {1L}, {7L}, {-9L}, {0L}, {7L}, {3L}}}, {{{0L}, {-9L}, {7L}, {1L}, {1L}, {7L}, {-9L}, {0L}, {7L}, {3L}}}};
            unsigned short *l_137 = &g_107[1][2][4];
            int l_138 = 1L;
            unsigned short l_139[7][8][4] = {{{65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}}, {{65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}}, {{65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}}, {{65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}}, {{65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}}, {{65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}}, {{65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}, {65535UL, 8UL, 0x9CCCL, 65535UL}}};
            char *l_141 = &g_142;
            char **l_140 = &l_141;
            int i, j, k;
            for (l_81 = 0; (l_81 <= 2); l_81 += 1)
            {
                int *l_86 = (void*)0;
                int **l_85 = &l_86;
                unsigned char *l_100[9] = {&g_19, &g_19, &g_19, &g_19, &g_19, &g_19, &g_19, &g_19, &g_19};
                unsigned short *l_106[4] = {&g_107[0][1][1], &g_107[1][2][4], &g_107[0][1][1], &g_107[1][2][4]};
                int i;
                (**p_37) = (l_85 == g_60);
                g_80.f0 = (safe_lshift_func_uint8_t_u_u(((l_91[4][0][3].f0 = (safe_sub_func_int8_t_s_s((((*p_38) = (p_40 , func_47(l_91[4][0][3], (g_60 = &p_39)))) != (((safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((g_26 , (g_19 = (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((l_101[4] = g_26), 1)), ((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_uint8_t_u(g_80.f0)), 12)) < (g_79[l_81] , g_79[0].f0)))))), l_105[1])), 4294967293UL)) , p_40) , &g_26)), 255UL))) | g_107[1][0][1]), 3));

                ;
                (*l_85) = l_108[0];

                ;
                for (g_21 = 0; (g_21 <= 2); g_21 += 1)
                {
                    char l_125 = 0x7EL;
                    int l_129 = 7L;
                    char ***l_143[6][3] = {{&l_140, (void*)0, (void*)0}, {&l_140, (void*)0, (void*)0}, {&l_140, (void*)0, (void*)0}, {&l_140, (void*)0, (void*)0}, {&l_140, (void*)0, (void*)0}, {&l_140, (void*)0, (void*)0}};
                    union U0 *l_147 = &g_80;
                    int i, j;
                }
            }
        }

        ;
        l_154[2] = l_152;
    }
    else
    {
        union U0 l_155 = {1L};
        return l_155;

            }

    ;
    return l_156;


    }







static int func_41(int * p_42, int * p_43, int * p_44, int * p_45, int * p_46)
{
    char l_58 = 3L;
    (*p_45) = ((func_51((func_54(l_58, &p_46, l_58) , (l_58 , &p_42)), g_60) , g_60) != (void*)0);
    return (*p_44);
}







static int * func_47(union U0 p_48, int ** p_49)
{
    int *l_50 = &g_21;
    (*l_50) = 0x27EED050L;
    return &g_21;


}







static union U0 func_51(int ** p_52, int ** p_53)
{
    union U0 l_61[2][2][7] = {{{{1L}, {4L}, {0xBA832A49L}, {4L}, {1L}, {4L}, {0xBA832A49L}}, {{1L}, {4L}, {0xBA832A49L}, {4L}, {1L}, {4L}, {0xBA832A49L}}}, {{{1L}, {4L}, {0xBA832A49L}, {4L}, {1L}, {4L}, {0xBA832A49L}}, {{1L}, {4L}, {0xBA832A49L}, {4L}, {1L}, {4L}, {0xBA832A49L}}}};
    int i, j, k;
    (**p_52) = g_19;
    return l_61[0][1][1];

    }







static union U0 func_54(unsigned char p_55, int ** p_56, int p_57)
{
    union U0 l_59 = {6L};
    return l_59;

    }





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_79[i].f0, "g_79[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_80.f0, "g_80.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_107[i][j][k], "g_107[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_128[i], "g_128[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_180[i], "g_180[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_197[i][j][k], "g_197[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_228.f0, "g_228.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_326[i], "g_326[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_397, "g_397", print_hash_value);
    transparent_crc(g_402, "g_402", print_hash_value);
    transparent_crc(g_448, "g_448", print_hash_value);
    transparent_crc(g_572, "g_572", print_hash_value);
    transparent_crc(g_782, "g_782", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_795[i][j][k], "g_795[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_845, "g_845", print_hash_value);
    transparent_crc(g_851, "g_851", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
