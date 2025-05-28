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
   unsigned char f0;
   short f1;
   unsigned f2;
   int f3;
   unsigned short f4;
};

union U1 {
   unsigned f0;
   char * const f1;
   const unsigned short f2;
   char * f3;
   unsigned f4;
};


static unsigned short g_2[10] = {65527UL, 65527UL, 0x3AFCL, 65527UL, 65527UL, 0x3AFCL, 65527UL, 65527UL, 0x3AFCL, 65527UL};
static int g_4 = 1L;
static char g_28 = 0x89L;
static char *g_27 = &g_28;
static union U1 g_29 = {0UL};
static const union U0 g_91 = {0x33L};
static int g_102 = (-1L);
static int g_123 = 0x71955992L;
static int *g_134 = &g_123;
static union U1 *g_198 = &g_29;
static union U1 **g_197[7] = {&g_198, &g_198, &g_198, &g_198, &g_198, &g_198, &g_198};
static char ** const *g_360 = (void*)0;
static unsigned char g_364 = 0x82L;
static const union U0 g_378 = {253UL};
static const union U0 *g_377 = &g_378;
static const int *g_459 = &g_102;
static union U0 **g_469 = (void*)0;
static union U0 ***g_468 = &g_469;
static unsigned g_510[7][2][10] = {{{0x67CD38FBL, 0x6E543D71L, 0UL, 6UL, 0x6E543D71L, 0xEEC1BB38L, 0x6E543D71L, 6UL, 0UL, 0x6E543D71L}, {0x67CD38FBL, 0x6E543D71L, 0UL, 6UL, 0x6E543D71L, 0xEEC1BB38L, 0x6E543D71L, 6UL, 0UL, 0x6E543D71L}}, {{0x67CD38FBL, 0x6E543D71L, 0UL, 6UL, 0x6E543D71L, 0xEEC1BB38L, 0x6E543D71L, 6UL, 0UL, 0x6E543D71L}, {0x67CD38FBL, 0x6E543D71L, 0UL, 6UL, 0x6E543D71L, 0xEEC1BB38L, 0x6E543D71L, 6UL, 0UL, 0x6E543D71L}}, {{0x67CD38FBL, 0x6E543D71L, 0UL, 6UL, 0x6E543D71L, 0xEEC1BB38L, 0x6E543D71L, 6UL, 0UL, 0x6E543D71L}, {0x67CD38FBL, 0x6E543D71L, 0UL, 6UL, 0x6E543D71L, 0xEEC1BB38L, 0x6E543D71L, 6UL, 0UL, 0x6E543D71L}}, {{0x67CD38FBL, 0x6E543D71L, 0UL, 6UL, 0x6E543D71L, 0xEEC1BB38L, 0x6E543D71L, 6UL, 0UL, 0x6E543D71L}, {0x67CD38FBL, 0x6E543D71L, 0UL, 6UL, 0x6E543D71L, 0xEEC1BB38L, 0x6E543D71L, 6UL, 0UL, 0x6E543D71L}}, {{0x67CD38FBL, 0x6E543D71L, 0UL, 6UL, 0x6E543D71L, 0xEEC1BB38L, 0x6E543D71L, 6UL, 0UL, 0x6E543D71L}, {0x67CD38FBL, 0x6E543D71L, 0UL, 6UL, 0x6E543D71L, 0xEEC1BB38L, 0x6E543D71L, 6UL, 0UL, 0x6E543D71L}}, {{0x67CD38FBL, 0x6E543D71L, 0UL, 6UL, 0x6E543D71L, 0xEEC1BB38L, 0x6E543D71L, 6UL, 0UL, 0x6E543D71L}, {0x67CD38FBL, 0x6E543D71L, 0UL, 6UL, 0x6E543D71L, 0xEEC1BB38L, 0x6E543D71L, 6UL, 0UL, 0x6E543D71L}}, {{0x67CD38FBL, 0x6E543D71L, 0UL, 6UL, 0x6E543D71L, 0xEEC1BB38L, 0x6E543D71L, 6UL, 0UL, 0x6E543D71L}, {0x67CD38FBL, 0x6E543D71L, 0UL, 6UL, 0x6E543D71L, 0xEEC1BB38L, 0x6E543D71L, 6UL, 0UL, 0x6E543D71L}}};
static union U1 g_526 = {0x1CBBC906L};
static union U1 g_581 = {4294967295UL};
static unsigned g_603 = 4294967286UL;
static int **g_679 = &g_134;
static int ***g_678[7][9][2] = {{{(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}}, {{(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}}, {{(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}}, {{(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}}, {{(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}}, {{(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}}, {{(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}, {(void*)0, &g_679}}};
static union U0 g_729 = {0x2EL};
static unsigned char g_792 = 253UL;
static union U1 g_843 = {0x715F5398L};
static unsigned short g_868 = 0x7D3FL;
static char *g_898 = (void*)0;
static char **g_1070 = &g_27;
static short g_1132 = 6L;
static unsigned g_1133 = 0UL;
static char g_1229 = 1L;
static union U0 *g_1556 = (void*)0;
static union U1 g_1585 = {0x3FFDA10CL};
static short g_1601 = 0x6809L;
static char **g_1648 = &g_898;
static int *g_1666[3] = {&g_123, &g_123, &g_123};
static char g_1690 = 0L;
static int * const g_1703 = &g_4;
static union U1 g_1705 = {0x71AEC234L};
static unsigned g_1710 = 4294967295UL;
static const unsigned g_1753 = 0x0BF54390L;
static int * const g_1793 = &g_123;
static unsigned g_1805 = 0x3AB57BBDL;
static unsigned g_1884 = 3UL;
static const int *g_1897[9][9][3] = {{{&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}}, {{&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}}, {{&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}}, {{&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}}, {{&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}}, {{&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}}, {{&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}}, {{&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}}, {{&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}, {&g_4, &g_102, &g_4}}};
static char g_1917[6][8][3] = {{{0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}}, {{0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}}, {{0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}}, {{0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}}, {{0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}}, {{0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}, {0x87L, 0xE9L, 0x10L}}};



static unsigned char func_1(void);
static unsigned short func_21(const unsigned p_22, unsigned p_23, char * p_24, union U1 p_25, int * p_26);
static unsigned func_37(int p_38, unsigned char p_39);
static unsigned char func_43(int * p_44);
static int * func_45(unsigned short p_46, char p_47, char * p_48, int p_49, short p_50);
static unsigned short func_51(unsigned short p_52, int * const p_53, int p_54, int p_55);
static unsigned short func_56(unsigned short p_57, short p_58, char * p_59);
static int func_61(unsigned p_62, unsigned char p_63);
static unsigned func_64(union U0 p_65, const int p_66, short p_67, int * const p_68, int p_69);
static union U0 func_70(const int p_71, const char * p_72, char p_73, const union U0 p_74, const int * p_75);
static unsigned char func_1(void)
{
    int *l_3[10] = {(void*)0, &g_4, (void*)0, &g_4, (void*)0, &g_4, (void*)0, &g_4, (void*)0, &g_4};
    unsigned short l_1819 = 0UL;
    unsigned short l_1820 = 0xEC4AL;
    int l_1832 = 0x3C02AFB3L;
    union U1 l_1837 = {0UL};
    short l_1855 = 0xAADDL;
    union U0 ***l_1857 = &g_469;
    unsigned short l_1871 = 0x83C6L;
    int l_1877 = 0xE555DD24L;
    char l_1893[9][4][5] = {{{0L, 0L, (-1L), 0x0EL, 0x72L}, {0L, 0L, (-1L), 0x0EL, 0x72L}, {0L, 0L, (-1L), 0x0EL, 0x72L}, {0L, 0L, (-1L), 0x0EL, 0x72L}}, {{0L, 0L, (-1L), 0x0EL, 0x72L}, {0L, 0L, (-1L), 0x0EL, 0x72L}, {0L, 0L, (-1L), 0x0EL, 0x72L}, {0L, 0L, (-1L), 0x0EL, 0x72L}}, {{0L, 0L, (-1L), 0x0EL, 0x72L}, {0L, 0L, (-1L), 0x0EL, 0x72L}, {0L, 0L, (-1L), 0x0EL, 0x72L}, {0L, 0L, (-1L), 0x0EL, 0x72L}}, {{0L, 0L, (-1L), 0x0EL, 0x72L}, {0L, 0L, (-1L), 0x0EL, 0x72L}, {0L, 0L, (-1L), 0x0EL, 0x72L}, {0L, 0L, (-1L), 0x0EL, 0x72L}}, {{0L, 0L, (-1L), 0x0EL, 0x72L}, {0L, 0L, (-1L), 0x0EL, 0x72L}, {0L, 0L, (-1L), 0x0EL, 0x72L}, {0L, 0L, (-1L), 0x0EL, 0x72L}}, {{0L, 0L, (-1L), 0x0EL, 0x72L}, {0L, 0L, (-1L), 0x0EL, 0x72L}, {0L, 0L, (-1L), 0x0EL, 0x72L}, {0L, 0L, (-1L), 0x0EL, 0x72L}}, {{0L, 0L, (-1L), 0x0EL, 0x72L}, {0L, 0L, (-1L), 0x0EL, 0x72L}, {0L, 0L, (-1L), 0x0EL, 0x72L}, {0L, 0L, (-1L), 0x0EL, 0x72L}}, {{0L, 0L, (-1L), 0x0EL, 0x72L}, {0L, 0L, (-1L), 0x0EL, 0x72L}, {0L, 0L, (-1L), 0x0EL, 0x72L}, {0L, 0L, (-1L), 0x0EL, 0x72L}}, {{0L, 0L, (-1L), 0x0EL, 0x72L}, {0L, 0L, (-1L), 0x0EL, 0x72L}, {0L, 0L, (-1L), 0x0EL, 0x72L}, {0L, 0L, (-1L), 0x0EL, 0x72L}}};
    short l_1894 = 0x6796L;
    const int *l_1896 = &g_123;
    char **l_1905[7][7] = {{(void*)0, &g_27, (void*)0, (void*)0, &g_27, (void*)0, &g_27}, {(void*)0, &g_27, (void*)0, (void*)0, &g_27, (void*)0, &g_27}, {(void*)0, &g_27, (void*)0, (void*)0, &g_27, (void*)0, &g_27}, {(void*)0, &g_27, (void*)0, (void*)0, &g_27, (void*)0, &g_27}, {(void*)0, &g_27, (void*)0, (void*)0, &g_27, (void*)0, &g_27}, {(void*)0, &g_27, (void*)0, (void*)0, &g_27, (void*)0, &g_27}, {(void*)0, &g_27, (void*)0, (void*)0, &g_27, (void*)0, &g_27}};
    unsigned l_1911 = 1UL;
    int *l_1927 = &g_4;
    char l_1929 = (-1L);
    union U1 *l_1973 = &g_581;
    int i, j, k;
    g_4 = g_2[4];
    (*g_1703) = ((l_3[7] == &g_4) >= (((g_2[4] <= g_2[1]) | ((safe_add_func_int32_t_s_s(((void*)0 != &g_4), ((+(safe_div_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(g_4, (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_add_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u((g_4 , func_21((((4294967295UL & g_4) == 1L) , 1UL), g_2[4], g_27, g_29, l_3[5])), 11)) < g_1585.f0) < (*g_1703)), l_1819)), g_1705.f0)), 0)))) || 0x14L), g_526.f2))) == g_2[9]))) >= l_1820)) , g_526.f4));



    ;


    ;

    for (g_1133 = 0; (g_1133 == 44); g_1133 = safe_add_func_int32_t_s_s(g_1133, 6))
    {
        const unsigned char l_1823[10][9][2] = {{{255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}}, {{255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}}, {{255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}}, {{255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}}, {{255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}}, {{255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}}, {{255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}}, {{255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}}, {{255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}}, {{255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}, {255UL, 0x6FL}}};
        int * const l_1825 = &g_102;
        char *l_1875 = (void*)0;
        int *l_1876 = (void*)0;
        const char *l_1880 = (void*)0;
        char *l_1892 = (void*)0;
        union U0 l_1898 = {255UL};
        union U1 l_1906 = {4294967292UL};
        unsigned l_1909 = 0x44AC6249L;
        union U1 *l_1924 = (void*)0;
        char *l_1928[5][10] = {{&g_28, &g_28, &g_1690, &g_28, &g_28, &g_1690, &g_28, &g_28, &g_1690, &g_28}, {&g_28, &g_28, &g_1690, &g_28, &g_28, &g_1690, &g_28, &g_28, &g_1690, &g_28}, {&g_28, &g_28, &g_1690, &g_28, &g_28, &g_1690, &g_28, &g_28, &g_1690, &g_28}, {&g_28, &g_28, &g_1690, &g_28, &g_28, &g_1690, &g_28, &g_28, &g_1690, &g_28}, {&g_28, &g_28, &g_1690, &g_28, &g_28, &g_1690, &g_28, &g_28, &g_1690, &g_28}};
        short l_1936 = (-1L);
        unsigned short l_1951 = 65535UL;
        int i, j, k;
        for (g_729.f3 = 0; (g_729.f3 <= 1); g_729.f3 += 1)
        {
            char l_1830 = 0x9AL;
            int l_1831 = 0xB7C7D661L;
            int *l_1834 = (void*)0;
            int * const l_1852 = &g_123;
            for (l_1819 = 0; (l_1819 <= 1); l_1819 += 1)
            {
                int *l_1833 = (void*)0;
                int * const l_1853[1][5][5] = {{{&g_4, &g_4, &g_4, (void*)0, &g_4}, {&g_4, &g_4, &g_4, (void*)0, &g_4}, {&g_4, &g_4, &g_4, (void*)0, &g_4}, {&g_4, &g_4, &g_4, (void*)0, &g_4}, {&g_4, &g_4, &g_4, (void*)0, &g_4}}};
                unsigned short l_1860 = 0xE458L;
                char *l_1866 = &l_1830;
                union U1 ***l_1872 = &g_197[6];
                int i, j, k;
                if (g_2[(l_1819 + 6)])
                {
                    const unsigned short l_1824 = 0x9467L;
                    if (l_1823[1][8][1])
                        break;
                    (*g_1793) = (((func_61((~g_1705.f0), (((l_1824 < g_2[(l_1819 + 6)]) == func_51(g_29.f2, l_1825, ((((((safe_add_func_uint8_t_u_u(0x3BL, (g_2[(l_1819 + 6)] == ((*g_1793) != 0xB31D33F5L)))) && g_1585.f2) || g_29.f2) , l_1830) > l_1831) == g_603), g_843.f2)) < l_1832)) && 0xF6B9L) > (*l_1825)) | (-1L));

                    ;
                    l_1834 = l_1833;
                }
                else
                {
                    int *l_1846 = &g_123;
                    for (l_1832 = 1; (l_1832 >= 0); l_1832 -= 1)
                    {
                        unsigned char l_1849[9];
                        int **l_1854 = &l_3[5];
                        int **l_1856 = &g_1666[1];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_1849[i] = 255UL;
                        (*l_1854) = (((*l_1825) <= ((((safe_sub_func_int32_t_s_s((l_1837 , ((((+g_1585.f2) , (*g_1648)) != (((safe_lshift_func_int16_t_s_u(func_51((((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(3UL, 0)), (((safe_sub_func_uint8_t_u_u(((((l_1846 == (((safe_lshift_func_uint8_t_u_u(g_581.f0, l_1849[8])) || (safe_add_func_uint32_t_u_u(func_51(g_1710, l_1834, g_1585.f2, g_1705.f4), l_1849[7]))) , (void*)0)) ^ 0xDE5657E4L) , g_364) , 255UL), (*l_1846))) , (*g_1703)) , 65532UL))) && (*l_1825)) != 65535UL), l_1852, l_1849[8], (*l_1825)), g_1601)) == 7UL) , (*g_1648))) ^ 0xFE32L)), 0UL)) > (-1L)) | g_1705.f4) <= (*l_1825))) , l_1853[0][0][4]);
                        if (l_1855)
                            continue;
                        (*l_1856) = l_1853[0][0][4];
                        (*l_1856) = ((l_1857 != &g_469) , l_1846);
                    }
                    for (g_868 = 0; (g_868 <= 1); g_868 += 1)
                    {
                        const int * const l_1865 = (void*)0;
                        int i, j, k;
                        (*g_1793) = (*g_1703);
                        (*g_1703) = func_61((safe_sub_func_uint16_t_u_u(0UL, g_868)), g_29.f2);

                        ;
                        l_1833 = (void*)0;
                    }
                    for (g_102 = 1; (g_102 >= 0); g_102 -= 1)
                    {
                        return (*l_1846);
                    }
                    (*g_1703) = (safe_div_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(l_1871, g_102)) >= (((&g_1070 == (void*)0) , ((void*)0 == l_1872)) || (~g_526.f4))), 2L));
                }
            }
            for (g_4 = 6; (g_4 >= 2); g_4 -= 1)
            {
                int **l_1873 = &g_134;
                int **l_1874 = &g_134;
                (*l_1873) = l_1834;

                ;
                (*l_1874) = l_1825;

                ;
                (**l_1874) = (*l_1825);
            }
        }

                if (func_51((((*l_1825) , l_1877) <= (safe_div_func_int16_t_s_s(g_29.f4, 0xFFD0L))), l_1876, g_1705.f0, g_729.f2))
        {
            const union U1 l_1881 = {0x307E94CCL};
            union U1 * const **l_1891 = (void*)0;
            const union U0 l_1895 = {0UL};
            int * const l_1899 = (void*)0;
            char *l_1910[1][7][6] = {{{&g_1690, &l_1893[7][0][2], &g_28, &g_28, &l_1893[7][0][2], &g_1690}, {&g_1690, &l_1893[7][0][2], &g_28, &g_28, &l_1893[7][0][2], &g_1690}, {&g_1690, &l_1893[7][0][2], &g_28, &g_28, &l_1893[7][0][2], &g_1690}, {&g_1690, &l_1893[7][0][2], &g_28, &g_28, &l_1893[7][0][2], &g_1690}, {&g_1690, &l_1893[7][0][2], &g_28, &g_28, &l_1893[7][0][2], &g_1690}, {&g_1690, &l_1893[7][0][2], &g_28, &g_28, &l_1893[7][0][2], &g_1690}, {&g_1690, &l_1893[7][0][2], &g_28, &g_28, &l_1893[7][0][2], &g_1690}}};
            unsigned short l_1914 = 65535UL;
            int *l_1930 = &g_123;
            unsigned char l_1937 = 0xC5L;
            int i, j, k;
            l_3[2] = (g_729.f4 , (void*)0);
            for (g_1884 = 0; (g_1884 == 19); ++g_1884)
            {
                int l_1902 = 0L;
                int *l_1903 = &g_4;
                int **l_1904 = &l_1876;
                (*l_1904) = l_1903;

                ;
                (*l_1904) = l_3[1];

                ;
            }

            ;
            if (((l_1905[4][6] == (l_1906 , ((((*l_1825) || l_1911) | ((*l_1896) && l_1895.f0)) , &l_1875))) , 0xF392CDC3L))
            {
                int *l_1912 = &g_4;
                int **l_1913 = &l_1876;
                (*l_1913) = l_1912;

                ;
                (*l_1913) = l_1930;

                ;
            }
            else
            {
                for (l_1898.f1 = 0; (l_1898.f1 != 23); l_1898.f1 = safe_add_func_int16_t_s_s(l_1898.f1, 6))
                {
                    for (g_729.f4 = 0; (g_729.f4 != 29); g_729.f4 = safe_add_func_int8_t_s_s(g_729.f4, 4))
                    {
                        int **l_1935 = &l_3[9];
                        (*l_1935) = (void*)0;
                    }

                                        return g_29.f2;
                }

                                if (l_1936)
                    continue;
                (*l_1927) = l_1937;
                (*g_468) = (*g_468);
            }
        }
        else
        {
            union U1 l_1943[2][4] = {{{0x493D9D34L}, {4294967288UL}, {0x493D9D34L}, {4294967288UL}}, {{0x493D9D34L}, {4294967288UL}, {0x493D9D34L}, {4294967288UL}}};
            int * const l_1955 = &g_123;
            int *l_1967[8];
            int i, j;
            for (i = 0; i < 8; i++)
                l_1967[i] = (void*)0;
            (*g_1703) = 0x6A89CA8DL;
            for (g_28 = (-5); (g_28 < 15); ++g_28)
            {
                union U1 l_1948 = {0UL};
                char *l_1950 = &g_1917[5][2][0];
                unsigned char l_1962 = 5UL;
                int * const l_1964 = &g_123;
                int *l_1974 = &g_102;
                int **l_1975 = &l_1967[2];
                for (g_868 = (-16); (g_868 == 9); g_868 = safe_add_func_uint32_t_u_u(g_868, 9))
                {
                    int * const l_1942 = &g_102;
                    union U0 * const l_1949[3][9][6] = {{{&l_1898, &l_1898, &g_729, &l_1898, &l_1898, &l_1898}, {&l_1898, &l_1898, &g_729, &l_1898, &l_1898, &l_1898}, {&l_1898, &l_1898, &g_729, &l_1898, &l_1898, &l_1898}, {&l_1898, &l_1898, &g_729, &l_1898, &l_1898, &l_1898}, {&l_1898, &l_1898, &g_729, &l_1898, &l_1898, &l_1898}, {&l_1898, &l_1898, &g_729, &l_1898, &l_1898, &l_1898}, {&l_1898, &l_1898, &g_729, &l_1898, &l_1898, &l_1898}, {&l_1898, &l_1898, &g_729, &l_1898, &l_1898, &l_1898}, {&l_1898, &l_1898, &g_729, &l_1898, &l_1898, &l_1898}}, {{&l_1898, &l_1898, &g_729, &l_1898, &l_1898, &l_1898}, {&l_1898, &l_1898, &g_729, &l_1898, &l_1898, &l_1898}, {&l_1898, &l_1898, &g_729, &l_1898, &l_1898, &l_1898}, {&l_1898, &l_1898, &g_729, &l_1898, &l_1898, &l_1898}, {&l_1898, &l_1898, &g_729, &l_1898, &l_1898, &l_1898}, {&l_1898, &l_1898, &g_729, &l_1898, &l_1898, &l_1898}, {&l_1898, &l_1898, &g_729, &l_1898, &l_1898, &l_1898}, {&l_1898, &l_1898, &g_729, &l_1898, &l_1898, &l_1898}, {&l_1898, &l_1898, &g_729, &l_1898, &l_1898, &l_1898}}, {{&l_1898, &l_1898, &g_729, &l_1898, &l_1898, &l_1898}, {&l_1898, &l_1898, &g_729, &l_1898, &l_1898, &l_1898}, {&l_1898, &l_1898, &g_729, &l_1898, &l_1898, &l_1898}, {&l_1898, &l_1898, &g_729, &l_1898, &l_1898, &l_1898}, {&l_1898, &l_1898, &g_729, &l_1898, &l_1898, &l_1898}, {&l_1898, &l_1898, &g_729, &l_1898, &l_1898, &l_1898}, {&l_1898, &l_1898, &g_729, &l_1898, &l_1898, &l_1898}, {&l_1898, &l_1898, &g_729, &l_1898, &l_1898, &l_1898}, {&l_1898, &l_1898, &g_729, &l_1898, &l_1898, &l_1898}}};
                    unsigned char l_1972[4][5] = {{0x45L, 1UL, 0x45L, 1UL, 0x45L}, {0x45L, 1UL, 0x45L, 1UL, 0x45L}, {0x45L, 1UL, 0x45L, 1UL, 0x45L}, {0x45L, 1UL, 0x45L, 1UL, 0x45L}};
                    int i, j, k;
                    if ((func_51(g_510[5][0][0], l_1942, ((l_1943[0][0] , l_1906) , ((safe_add_func_int8_t_s_s(0x65L, (safe_div_func_int32_t_s_s(func_51(g_792, l_1825, g_510[0][1][3], l_1951), l_1948.f2)))) , (*l_1825))), g_378.f0) < 0x1A3CL))
                    {
                        const union U0 *l_1953[2];
                        char * const l_1954 = &g_1917[2][2][0];
                        int l_1956[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1953[i] = &g_378;
                        for (i = 0; i < 2; i++)
                            l_1956[i] = 6L;
                        if ((*l_1942))
                            break;
                        (*g_1793) = (safe_unary_minus_func_uint16_t_u((l_1948.f4 <= ((g_2[6] , (((l_1943[0][0].f2 <= (*g_1793)) ^ (*l_1825)) , g_29.f0)) <= (+func_51((*l_1942), l_1955, g_581.f0, l_1956[0]))))));
                        return g_1705.f0;
                    }
                    else
                    {
                        int **l_1957 = &g_134;
                        (*l_1957) = (void*)0;

                        ;
                        l_1876 = ((safe_add_func_uint16_t_u_u((!(func_51((safe_add_func_int8_t_s_s(l_1962, (safe_unary_minus_func_int8_t_s((*l_1927))))), l_1964, ((((*g_468) == (void*)0) > ((safe_rshift_func_uint8_t_u_s(g_1585.f0, func_51((&g_197[2] != &g_197[2]), l_1964, (*l_1942), g_729.f1))) , (*g_27))) , (-3L)), g_843.f0) && (-3L))), g_29.f0)) , l_1967[2]);
                        l_1927 = l_1974;

                        ;
                    }

                    ;
                    ;
                }
                (*l_1975) = l_3[9];
            }

            ;

        }

        ;
    }


    ;
    return (*l_1927);
}







static unsigned short func_21(const unsigned p_22, unsigned p_23, char * p_24, union U1 p_25, int * p_26)
{
    unsigned char l_32 = 2UL;
    unsigned short l_42 = 1UL;
    int l_60 = 0x9E69C17FL;
    int * const l_702 = &g_4;
    int *l_1416 = &l_60;
    int l_1417 = 0L;
    union U1 l_1426 = {0xDD2280B9L};
    const char * const l_1427 = &g_28;
    union U0 l_1496 = {6UL};
    int l_1514 = (-2L);
    const int *l_1538 = &g_102;
    int l_1573 = 0x04DDBDB9L;
    int * const l_1575[6][5] = {{&g_102, &l_60, (void*)0, (void*)0, (void*)0}, {&g_102, &l_60, (void*)0, (void*)0, (void*)0}, {&g_102, &l_60, (void*)0, (void*)0, (void*)0}, {&g_102, &l_60, (void*)0, (void*)0, (void*)0}, {&g_102, &l_60, (void*)0, (void*)0, (void*)0}, {&g_102, &l_60, (void*)0, (void*)0, (void*)0}};
    union U1 *l_1584 = &g_1585;
    union U0 *l_1640 = (void*)0;
    const unsigned l_1740 = 0xCED38617L;
    short l_1744 = 0x4315L;
    unsigned char l_1774 = 0x23L;
    int i, j;
    (*l_1416) = (safe_add_func_int32_t_s_s(l_32, (+((0x65DDL <= (safe_sub_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(((func_37(g_2[7], (safe_rshift_func_uint16_t_u_u((l_42 == ((func_43(func_45(g_2[0], l_32, &g_28, (func_51(func_56(l_60, l_32, p_24), l_702, g_581.f2, (*l_702)) < p_22), p_25.f2)) | 0x81L) != (*l_702))), 14))) == (*l_702)) == p_25.f2), 0x85L)) , p_23), g_510[1][0][1]))) == 0x7FL))));



    ;


    ;
    if (l_1417)
    {
        unsigned l_1425 = 4294967295UL;
        int ** const l_1430[2] = {&g_134, &g_134};
        union U1 l_1469 = {0x17C8142AL};
        union U0 l_1473 = {0xC5L};
        int l_1525 = 1L;
        char *l_1526 = &g_28;
        unsigned char l_1527 = 0UL;
        unsigned l_1537 = 4294967295UL;
        int i;
        (*l_1416) = (safe_lshift_func_uint16_t_u_u(p_23, g_29.f0));
        for (g_729.f1 = 12; (g_729.f1 == (-8)); g_729.f1 = safe_sub_func_uint8_t_u_u(g_729.f1, 6))
        {
            const unsigned short l_1422 = 65527UL;
            int *l_1458 = &g_123;
            (*l_1416) = (0x51L || 0x5BL);
            if (l_1422)
                break;
            if ((safe_sub_func_int32_t_s_s(((*p_24) , ((g_28 ^ ((g_843.f0 , ((((((l_1425 , l_1426) , l_1427) == (((p_22 | (+(safe_lshift_func_uint8_t_u_u(l_1425, func_51(g_1132, &l_60, l_1425, l_1422))))) | p_25.f0) , p_24)) , &p_26) == l_1430[0]) && (*l_702))) == p_23)) | 8UL)), g_91.f0)))
            {
                short l_1443 = (-10L);
                for (g_868 = 15; (g_868 < 8); --g_868)
                {
                    unsigned l_1439[1][9][3] = {{{8UL, 0x6A0BA732L, 7UL}, {8UL, 0x6A0BA732L, 7UL}, {8UL, 0x6A0BA732L, 7UL}, {8UL, 0x6A0BA732L, 7UL}, {8UL, 0x6A0BA732L, 7UL}, {8UL, 0x6A0BA732L, 7UL}, {8UL, 0x6A0BA732L, 7UL}, {8UL, 0x6A0BA732L, 7UL}, {8UL, 0x6A0BA732L, 7UL}}};
                    union U0 l_1440 = {0xD2L};
                    int i, j, k;
                    (*l_1416) = (safe_sub_func_int32_t_s_s(((safe_div_func_uint16_t_u_u(((((0UL == (*l_1416)) , (((safe_mod_func_int8_t_s_s(1L, (l_1439[0][6][1] | p_25.f2))) & func_61((l_1440 , ((safe_rshift_func_uint8_t_u_s((l_1439[0][6][1] & g_2[2]), l_1439[0][4][0])) || l_1422)), g_2[7])) , 0UL)) >= 0xB2B4EF6DL) ^ 0x94L), p_23)) | 0x1DAA6D2CL), l_1443));

                    ;
                    return l_1422;
                }
            }
            else
            {
                short l_1445[5][1][5] = {{{0L, 0xF607L, 0L, (-3L), 8L}}, {{0L, 0xF607L, 0L, (-3L), 8L}}, {{0L, 0xF607L, 0L, (-3L), 8L}}, {{0L, 0xF607L, 0L, (-3L), 8L}}, {{0L, 0xF607L, 0L, (-3L), 8L}}};
                int *l_1449[8][1] = {{&l_60}, {&l_60}, {&l_60}, {&l_60}, {&l_60}, {&l_60}, {&l_60}, {&l_60}};
                int i, j, k;
                for (g_28 = 1; (g_28 >= 0); g_28 -= 1)
                {
                    char l_1444 = 2L;
                    l_1444 = l_1422;
                    for (l_1444 = 0; (l_1444 <= 1); l_1444 += 1)
                    {
                        return p_25.f2;
                    }
                }
                if (l_1445[0][0][0])
                {
                    const int l_1446 = (-1L);
                    if (l_1446)
                        break;
                }
                else
                {
                    (*l_1416) = 1L;
                }
                for (l_1417 = 0; (l_1417 < (-14)); l_1417 = safe_sub_func_uint8_t_u_u(l_1417, 6))
                {
                    int l_1456 = 0x448AE1D1L;
                    p_26 = (p_25 , l_1449[3][0]);

                    ;
                    if (((*l_1416) || ((((p_25 , (&g_198 != (void*)0)) <= (safe_sub_func_uint8_t_u_u(g_526.f0, ((l_1422 || ((g_843.f2 != (*g_27)) | (safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(((g_1133 | (*l_1416)) > 0xD4FF9456L), 4)), 0x0E92A382L)))) == 0x3FL)))) , g_123) , 0x1ADBF8E8L)))
                    {
                        if (l_1456)
                            break;
                    }
                    else
                    {
                        int *l_1457 = &g_4;
                        p_26 = &l_60;

                        ;
                        l_1458 = l_1457;

                        ;
                    }
                    p_26 = p_26;
                }

                ;
            }

            ;
            if ((*l_1458))
                break;
        }

        ;
                if ((safe_lshift_func_uint8_t_u_s(((p_25.f2 == 9UL) && (l_1426 , p_25.f4)), ((safe_lshift_func_uint16_t_u_s((*l_1416), 8)) > (p_22 | (safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((((*p_24) | (((l_1469 , (*l_702)) <= g_1229) | (*l_702))) && g_581.f2), 7)), p_25.f2)), (*l_1416))))))))
        {
            return (*l_702);
        }
        else
        {
            int *l_1482 = &g_123;
            unsigned char l_1483 = 0x3FL;
            unsigned char l_1506[2][7] = {{0x79L, 0UL, 0x79L, 0UL, 0x79L, 0UL, 0x79L}, {0x79L, 0UL, 0x79L, 0UL, 0x79L, 0UL, 0x79L}};
            union U1 *l_1550 = &g_843;
            int i, j;
            if ((*l_702))
            {
                int l_1476[2][10][4] = {{{0xFF8BF331L, 0L, 0xE1F46F69L, (-3L)}, {0xFF8BF331L, 0L, 0xE1F46F69L, (-3L)}, {0xFF8BF331L, 0L, 0xE1F46F69L, (-3L)}, {0xFF8BF331L, 0L, 0xE1F46F69L, (-3L)}, {0xFF8BF331L, 0L, 0xE1F46F69L, (-3L)}, {0xFF8BF331L, 0L, 0xE1F46F69L, (-3L)}, {0xFF8BF331L, 0L, 0xE1F46F69L, (-3L)}, {0xFF8BF331L, 0L, 0xE1F46F69L, (-3L)}, {0xFF8BF331L, 0L, 0xE1F46F69L, (-3L)}, {0xFF8BF331L, 0L, 0xE1F46F69L, (-3L)}}, {{0xFF8BF331L, 0L, 0xE1F46F69L, (-3L)}, {0xFF8BF331L, 0L, 0xE1F46F69L, (-3L)}, {0xFF8BF331L, 0L, 0xE1F46F69L, (-3L)}, {0xFF8BF331L, 0L, 0xE1F46F69L, (-3L)}, {0xFF8BF331L, 0L, 0xE1F46F69L, (-3L)}, {0xFF8BF331L, 0L, 0xE1F46F69L, (-3L)}, {0xFF8BF331L, 0L, 0xE1F46F69L, (-3L)}, {0xFF8BF331L, 0L, 0xE1F46F69L, (-3L)}, {0xFF8BF331L, 0L, 0xE1F46F69L, (-3L)}, {0xFF8BF331L, 0L, 0xE1F46F69L, (-3L)}}};
                union U1 *l_1479 = &g_581;
                int *l_1481[4];
                union U0 l_1501 = {0UL};
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_1481[i] = &g_4;
                for (g_1229 = 0; (g_1229 < (-17)); g_1229 = safe_sub_func_uint32_t_u_u(g_1229, 3))
                {
                    unsigned char l_1472 = 1UL;
                }
                for (g_1133 = (-16); (g_1133 > 36); g_1133 = safe_add_func_uint8_t_u_u(g_1133, 1))
                {
                    int l_1493 = 1L;
                    int *l_1497 = &g_123;
                    short l_1505[6][7] = {{0xB727L, (-7L), 0x3C02L, (-7L), 0xB727L, (-7L), 0x3C02L}, {0xB727L, (-7L), 0x3C02L, (-7L), 0xB727L, (-7L), 0x3C02L}, {0xB727L, (-7L), 0x3C02L, (-7L), 0xB727L, (-7L), 0x3C02L}, {0xB727L, (-7L), 0x3C02L, (-7L), 0xB727L, (-7L), 0x3C02L}, {0xB727L, (-7L), 0x3C02L, (-7L), 0xB727L, (-7L), 0x3C02L}, {0xB727L, (-7L), 0x3C02L, (-7L), 0xB727L, (-7L), 0x3C02L}};
                    int i, j;
                    (*l_1482) = l_1493;
                    for (g_729.f2 = 9; (g_729.f2 < 33); g_729.f2 = safe_add_func_uint8_t_u_u(g_729.f2, 9))
                    {
                        unsigned char l_1500 = 253UL;
                        int l_1504 = 0L;
                        (*l_1482) = (g_843.f0 & g_581.f2);
                        l_1497 = (l_1496 , l_1481[1]);

                        ;
                        (*l_1482) = (p_25.f0 ^ ((!0x0508L) & (((((safe_lshift_func_int8_t_s_u(l_1500, 1)) > ((l_1501 , l_1469) , g_378.f0)) | ((safe_lshift_func_uint16_t_u_s(l_1504, (0xF3L < (((((!(*l_1497)) , p_25.f4) , l_1505[5][3]) == 0UL) == l_1506[1][4])))) <= (*l_1497))) && (-3L)) < 0x98701797L)));
                    }

                                        ;
                    if ((*l_1497))
                        continue;
                }
                return g_29.f0;
            }
            else
            {
                unsigned short l_1511 = 0x0E1FL;
                l_1416 = l_1482;

                ;
                (*l_1416) = (-1L);
            }

            ;
            for (g_729.f0 = 0; (g_729.f0 == 2); g_729.f0++)
            {
                unsigned char l_1536[7][6] = {{0x22L, 0x22L, 255UL, 7UL, 0x8CL, 246UL}, {0x22L, 0x22L, 255UL, 7UL, 0x8CL, 246UL}, {0x22L, 0x22L, 255UL, 7UL, 0x8CL, 246UL}, {0x22L, 0x22L, 255UL, 7UL, 0x8CL, 246UL}, {0x22L, 0x22L, 255UL, 7UL, 0x8CL, 246UL}, {0x22L, 0x22L, 255UL, 7UL, 0x8CL, 246UL}, {0x22L, 0x22L, 255UL, 7UL, 0x8CL, 246UL}};
                int i, j;
                (*l_1482) = (safe_add_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(((&p_26 != ((safe_lshift_func_uint8_t_u_s(g_843.f4, (g_2[0] > (*l_1482)))) , &p_26)) ^ g_510[3][0][3]), 7)) ^ l_1537), g_2[9]));
                l_1538 = (void*)0;

                ;
                for (g_28 = 16; (g_28 <= (-12)); --g_28)
                {
                    return g_29.f2;
                }
            }

                        ;
            if ((safe_mod_func_int32_t_s_s((p_23 > p_22), 1L)))
            {
                int l_1549 = 0x10B03669L;
                union U0 *l_1553[3][6][4] = {{{&l_1496, &l_1473, &l_1496, &l_1496}, {&l_1496, &l_1473, &l_1496, &l_1496}, {&l_1496, &l_1473, &l_1496, &l_1496}, {&l_1496, &l_1473, &l_1496, &l_1496}, {&l_1496, &l_1473, &l_1496, &l_1496}, {&l_1496, &l_1473, &l_1496, &l_1496}}, {{&l_1496, &l_1473, &l_1496, &l_1496}, {&l_1496, &l_1473, &l_1496, &l_1496}, {&l_1496, &l_1473, &l_1496, &l_1496}, {&l_1496, &l_1473, &l_1496, &l_1496}, {&l_1496, &l_1473, &l_1496, &l_1496}, {&l_1496, &l_1473, &l_1496, &l_1496}}, {{&l_1496, &l_1473, &l_1496, &l_1496}, {&l_1496, &l_1473, &l_1496, &l_1496}, {&l_1496, &l_1473, &l_1496, &l_1496}, {&l_1496, &l_1473, &l_1496, &l_1496}, {&l_1496, &l_1473, &l_1496, &l_1496}, {&l_1496, &l_1473, &l_1496, &l_1496}}};
                char **l_1569 = (void*)0;
                int *l_1572[8] = {&l_60, &l_60, &g_4, &l_60, &l_60, &g_4, &l_60, &l_60};
                int i, j, k;
                for (l_1483 = 0; (l_1483 >= 4); l_1483 = safe_add_func_uint32_t_u_u(l_1483, 3))
                {
                    unsigned char l_1552 = 3UL;
                    if ((g_2[8] != (safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(p_25.f4, (*l_1482))), func_51(g_29.f0, p_26, g_28, p_25.f2)))))
                    {
                        union U1 **l_1551 = &g_198;
                        (*l_1551) = (g_29.f4 , l_1550);

                        ;
                        l_1552 = p_25.f4;
                    }
                    else
                    {
                        union U0 **l_1554 = (void*)0;
                        union U0 **l_1555 = &l_1553[1][5][1];
                        (*l_1482) = (l_1552 == (-8L));
                        p_26 = p_26;
                        (*l_1555) = l_1553[1][5][1];
                    }
                    (*l_1482) = (0x92L ^ (((void*)0 == g_1556) >= ((((safe_add_func_int16_t_s_s(((*l_1482) <= 9L), (safe_add_func_int8_t_s_s((-1L), ((safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((((safe_lshift_func_int16_t_s_s(p_25.f2, (l_1569 != &l_1427))) | 0x2C38L) , 0x638C137BL) ^ 4294967295UL), p_25.f0)), (-1L))), 0x27L)) , l_1552))))) , &g_378) != &l_1496) ^ 0xF312L)));
                }


                if ((safe_mod_func_uint8_t_u_u((g_29.f4 == (&l_60 != l_1572[6])), l_1573)))
                {
                    union U0 l_1574 = {254UL};
                    (*l_1416) = (((*l_1482) == ((p_25 , l_1569) != &p_24)) >= func_51((func_51((g_1133 == (func_51((0x17L | (l_1574 , g_526.f4)), p_26, p_25.f0, l_1574.f0) <= (*l_1482))), l_1575[0][4], p_23, g_603) ^ (*p_24)), l_1572[6], g_526.f2, l_1574.f0));
                    l_1572[6] = p_26;


                    for (g_28 = (-5); (g_28 != 9); g_28 = safe_add_func_uint8_t_u_u(g_28, 1))
                    {
                        unsigned char l_1578[10][4][2] = {{{0x96L, 0UL}, {0x96L, 0UL}, {0x96L, 0UL}, {0x96L, 0UL}}, {{0x96L, 0UL}, {0x96L, 0UL}, {0x96L, 0UL}, {0x96L, 0UL}}, {{0x96L, 0UL}, {0x96L, 0UL}, {0x96L, 0UL}, {0x96L, 0UL}}, {{0x96L, 0UL}, {0x96L, 0UL}, {0x96L, 0UL}, {0x96L, 0UL}}, {{0x96L, 0UL}, {0x96L, 0UL}, {0x96L, 0UL}, {0x96L, 0UL}}, {{0x96L, 0UL}, {0x96L, 0UL}, {0x96L, 0UL}, {0x96L, 0UL}}, {{0x96L, 0UL}, {0x96L, 0UL}, {0x96L, 0UL}, {0x96L, 0UL}}, {{0x96L, 0UL}, {0x96L, 0UL}, {0x96L, 0UL}, {0x96L, 0UL}}, {{0x96L, 0UL}, {0x96L, 0UL}, {0x96L, 0UL}, {0x96L, 0UL}}, {{0x96L, 0UL}, {0x96L, 0UL}, {0x96L, 0UL}, {0x96L, 0UL}}};
                        int *l_1579 = &g_102;
                        int i, j, k;
                        p_26 = p_26;
                        (*l_1416) = 2L;
                        p_26 = l_1579;

                        ;
                        p_26 = p_26;
                    }

                    ;
                }
                else
                {
                    l_1416 = l_1572[6];

                    ;
                    for (g_729.f3 = (-25); (g_729.f3 == (-4)); g_729.f3 = safe_add_func_uint16_t_u_u(g_729.f3, 5))
                    {
                        union U1 *l_1582 = &g_29;
                        union U1 **l_1583[9][10] = {{&l_1550, &l_1550, &l_1550, (void*)0, &l_1550, &g_198, (void*)0, (void*)0, &l_1550, (void*)0}, {&l_1550, &l_1550, &l_1550, (void*)0, &l_1550, &g_198, (void*)0, (void*)0, &l_1550, (void*)0}, {&l_1550, &l_1550, &l_1550, (void*)0, &l_1550, &g_198, (void*)0, (void*)0, &l_1550, (void*)0}, {&l_1550, &l_1550, &l_1550, (void*)0, &l_1550, &g_198, (void*)0, (void*)0, &l_1550, (void*)0}, {&l_1550, &l_1550, &l_1550, (void*)0, &l_1550, &g_198, (void*)0, (void*)0, &l_1550, (void*)0}, {&l_1550, &l_1550, &l_1550, (void*)0, &l_1550, &g_198, (void*)0, (void*)0, &l_1550, (void*)0}, {&l_1550, &l_1550, &l_1550, (void*)0, &l_1550, &g_198, (void*)0, (void*)0, &l_1550, (void*)0}, {&l_1550, &l_1550, &l_1550, (void*)0, &l_1550, &g_198, (void*)0, (void*)0, &l_1550, (void*)0}, {&l_1550, &l_1550, &l_1550, (void*)0, &l_1550, &g_198, (void*)0, (void*)0, &l_1550, (void*)0}};
                        int i, j;
                        l_1584 = l_1582;

                        ;
                        (*l_1482) = p_22;
                    }

                                        ;
                    l_1572[1] = p_26;


                }

                ;
                ;

                ;
                for (l_1473.f0 = (-2); (l_1473.f0 == 16); ++l_1473.f0)
                {
                    union U0 *l_1592 = &l_1496;
                    int l_1593[8] = {(-5L), (-5L), (-1L), (-5L), (-5L), (-1L), (-5L), (-5L)};
                    int i;
                    (*l_1482) = ((3UL <= (*l_1482)) , (p_25.f2 | ((safe_rshift_func_int16_t_s_s((p_25.f4 && (safe_add_func_int32_t_s_s(p_25.f0, (((void*)0 != l_1592) < (p_25.f2 , (p_25.f2 , l_1593[2])))))), p_25.f4)) , 0xD25DL)));
                    (*l_1482) = (0x5203CA61L ^ ((!((void*)0 != &l_1584)) < (((((safe_add_func_uint8_t_u_u((&g_27 == &l_1526), (*p_24))) | g_510[2][1][0]) >= ((safe_lshift_func_uint8_t_u_u(g_1585.f0, p_23)) < g_526.f4)) , 0xE7L) | (*p_24))));
                }
                p_26 = p_26;
            }
            else
            {
                p_26 = &l_60;

                ;
            }

            ;

            ;
            ;
        }

        ;

                ;
        ;
        ;
    }
    else
    {
        const int l_1600 = 5L;
        int l_1607[6] = {0xD8295E3AL, 8L, 0xD8295E3AL, 8L, 0xD8295E3AL, 8L};
        union U0 l_1617 = {0xD5L};
        union U1 *l_1704 = &g_1705;
        char *l_1725 = &g_1690;
        char l_1761 = 0x86L;
        int *l_1767 = &l_1607[5];
        union U1 ***l_1791 = &g_197[3];
        union U0 *l_1818 = &g_729;
        int i;
        for (g_28 = 1; (g_28 >= 0); g_28 -= 1)
        {
            char *l_1598 = (void*)0;
            int l_1602 = 0xCF54B69DL;
            char l_1631 = 0x10L;
            const int *l_1644[2];
            unsigned char l_1645 = 0UL;
            int l_1650[5];
            union U0 l_1706[5][2] = {{{255UL}, {0xCDL}}, {{255UL}, {0xCDL}}, {{255UL}, {0xCDL}}, {{255UL}, {0xCDL}}, {{255UL}, {0xCDL}}};
            const union U0 **l_1713 = &g_377;
            int i, j;
            for (i = 0; i < 2; i++)
                l_1644[i] = &l_1607[4];
            for (i = 0; i < 5; i++)
                l_1650[i] = 0L;
        }
        for (g_364 = 0; (g_364 <= 55); g_364 = safe_add_func_int16_t_s_s(g_364, 2))
        {
            char l_1772 = 0L;
            int l_1784 = 0xB3063DAEL;
            unsigned l_1796 = 4UL;
            for (g_28 = (-21); (g_28 == (-26)); g_28--)
            {
                char *l_1773 = &l_1761;
                int *l_1775 = (void*)0;
                l_1775 = p_26;

                ;
                p_26 = (void*)0;

                ;
            }
            if (l_1772)
            {
                int * const l_1779 = &l_1607[3];
                (*l_1779) = ((safe_div_func_int16_t_s_s(((((p_25.f2 <= func_51((safe_unary_minus_func_uint8_t_u((*l_1767))), l_1779, g_868, (*l_1767))) < (safe_sub_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((*p_24), ((((((*l_702) <= func_51(g_526.f2, &l_60, l_1772, p_25.f2)) <= g_843.f2) != g_378.f0) | g_526.f2) && (-10L)))), (*l_1767)))) || p_22) | 0xC9L), g_843.f0)) && (*l_1767));
                (*l_1767) = (*l_702);
                l_1784 = (*g_1703);
                if (l_1772)
                    break;
            }
            else
            {
                int l_1792 = 0x14909383L;
                union U0 ***l_1812 = &g_469;
                int * const l_1813[3] = {&l_1784, &l_1784, &l_1784};
                int **l_1814 = &g_1666[1];
                int i;
                (*l_1767) = (((*l_1767) < ((safe_div_func_int16_t_s_s(0xAFDFL, func_51(g_1585.f4, g_1793, g_1133, g_1705.f2))) , g_792)) && p_25.f0);
                (*l_1814) = p_26;
            }
            for (g_729.f1 = 0; (g_729.f1 <= (-27)); g_729.f1--)
            {
                int **l_1817 = &l_1416;
                (*l_1817) = p_26;

                ;
                (*l_1817) = p_26;
                (*g_1793) = p_22;
                for (l_1496.f4 = 0; (l_1496.f4 <= 5); l_1496.f4 += 1)
                {
                    for (l_32 = 0; (l_32 <= 5); l_32 += 1)
                    {
                        (*l_1817) = p_26;
                        if ((*l_1767))
                            break;
                    }
                }

                            }

                    }

        ;

        (*l_1767) = (*l_1767);
        l_1818 = &l_1617;

        ;
    }

    ;

    ;
    ;
    ;

    return p_25.f4;
}







static unsigned func_37(int p_38, unsigned char p_39)
{
    int l_1159 = 0L;
    const union U0 **l_1161[3];
    const union U0 *** const l_1160 = &l_1161[2];
    union U1 l_1182 = {1UL};
    int l_1233[1][1][8] = {{{0xD858C8A4L, 0xD858C8A4L, 1L, 0xD858C8A4L, 0xD858C8A4L, 1L, 0xD858C8A4L, 0xD858C8A4L}}};
    const char *l_1258 = (void*)0;
    const char **l_1257 = &l_1258;
    int *l_1395[10] = {&g_102, &g_102, (void*)0, &g_102, &g_102, (void*)0, &g_102, &g_102, (void*)0, &g_102};
    unsigned l_1410 = 7UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1161[i] = &g_377;
    for (g_729.f3 = 0; g_729.f3 < 7; g_729.f3 += 1)
    {
        for (g_1133 = 0; g_1133 < 9; g_1133 += 1)
        {
            for (g_603 = 0; g_603 < 2; g_603 += 1)
            {
                g_678[g_729.f3][g_1133][g_603] = (void*)0;
            }
        }
    }
    if ((l_1159 && ((l_1160 == (void*)0) > (1L ^ l_1159))))
    {
        const unsigned l_1164 = 0UL;
        const int *l_1168 = &g_123;
        int *l_1173 = (void*)0;
        int *l_1174 = &g_102;
        union U1 l_1210 = {0xA1F7B1D2L};
        int l_1238 = 0xD9FBF135L;
        for (l_1159 = (-28); (l_1159 != (-1)); l_1159++)
        {
            if (l_1164)
                break;
        }
        for (g_729.f4 = 0; (g_729.f4 > 57); g_729.f4 = safe_add_func_uint8_t_u_u(g_729.f4, 9))
        {
            unsigned short l_1167 = 0xD7C5L;
            const int **l_1169 = (void*)0;
            const int **l_1170 = &l_1168;
            l_1167 = p_38;
            (*l_1170) = l_1168;
        }

                (*l_1174) = ((p_39 || (p_38 > (p_39 , p_38))) || p_38);
        for (p_39 = 0; (p_39 > 48); p_39 = safe_add_func_int32_t_s_s(p_39, 2))
        {
            int **l_1177 = &l_1173;
            union U1 *l_1253 = &l_1210;
            union U1 ***l_1259 = &g_197[2];
            int l_1285[1][1][9] = {{{0x61A66B8FL, (-9L), 0x61A66B8FL, (-9L), 0x61A66B8FL, (-9L), 0x61A66B8FL, (-9L), 0x61A66B8FL}}};
            union U0 ***l_1290 = &g_469;
            char *l_1327 = &g_28;
            int i, j, k;
            (*l_1177) = &p_38;

            ;
            if (((g_729.f4 | ((*l_1173) == 0xD406D657L)) | p_38))
            {
                union U0 *l_1193[9][2][10] = {{{&g_729, (void*)0, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729}, {&g_729, (void*)0, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729}}, {{&g_729, (void*)0, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729}, {&g_729, (void*)0, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729}}, {{&g_729, (void*)0, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729}, {&g_729, (void*)0, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729}}, {{&g_729, (void*)0, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729}, {&g_729, (void*)0, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729}}, {{&g_729, (void*)0, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729}, {&g_729, (void*)0, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729}}, {{&g_729, (void*)0, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729}, {&g_729, (void*)0, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729}}, {{&g_729, (void*)0, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729}, {&g_729, (void*)0, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729}}, {{&g_729, (void*)0, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729}, {&g_729, (void*)0, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729}}, {{&g_729, (void*)0, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729}, {&g_729, (void*)0, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729, &g_729}}};
                int l_1215 = (-2L);
                char *l_1228 = &g_1229;
                char l_1231 = 0x6BL;
                unsigned l_1232 = 8UL;
                int *l_1234 = &g_123;
                const union U1 l_1235 = {0x3A36A839L};
                union U1 ***l_1256 = &g_197[2];
                union U1 l_1276 = {0xA1F966AEL};
                int i, j, k;
                for (g_729.f1 = 4; (g_729.f1 <= (-17)); g_729.f1--)
                {
                    char l_1191 = 1L;
                    for (g_102 = 0; (g_102 < 19); g_102 = safe_add_func_int8_t_s_s(g_102, 7))
                    {
                        union U0 *l_1192 = &g_729;
                        int l_1203 = 6L;
                        union U1 **l_1206 = (void*)0;
                        union U1 **l_1207 = &g_198;
                        (*l_1173) = ((l_1182 , ((safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((-1L), (l_1191 & ((((l_1192 == l_1193[4][0][9]) || (safe_mod_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(1UL, ((safe_sub_func_uint32_t_u_u(0xF8204F4EL, (safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint32_t_u((l_1203 == (safe_rshift_func_uint8_t_u_s((g_91.f0 , g_510[5][0][6]), l_1182.f0))))), 7)))) , p_38))), p_38))) , g_843.f0) != p_39)))), 3)), p_39)) ^ l_1182.f0)) , 1L);
                        if (l_1191)
                            continue;
                        (*l_1207) = (void*)0;

                        ;
                        if (p_39)
                            continue;
                    }
                    (*l_1174) = func_61((safe_mod_func_uint32_t_u_u(g_2[4], (**l_1177))), (p_39 && ((((g_792 & l_1191) && 0x43E3L) == (p_38 || ((p_39 > p_39) ^ p_39))) && p_38)));

                    ;
                    if ((p_38 | p_39))
                    {
                        int l_1230 = 6L;
                        (*l_1177) = (l_1210 , ((safe_lshift_func_uint8_t_u_s(((safe_mod_func_int8_t_s_s(l_1215, ((((safe_mul_func_int16_t_s_s(0x7C5FL, ((func_51((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(func_61(p_38, (!((safe_lshift_func_int8_t_s_s(((l_1159 | p_38) != p_39), (l_1215 == p_39))) == p_39))), l_1230)) , l_1182.f2), g_4)), l_1231)), (*l_1177), p_38, l_1232) , g_510[5][1][8]) == 65535UL))) & l_1230) && l_1159) & 1UL))) != p_38), 2)) , &l_1230));

                        ;
                        (**l_1177) = l_1230;
                    }
                    else
                    {
                        (*l_1174) = 0xA48E760AL;
                        (**l_1177) = p_38;
                        l_1233[0][0][7] = 0x65374C3EL;
                    }


                    (*l_1177) = l_1234;

                    ;
                }

                                ;
                if ((g_526.f4 == ((p_39 , l_1235) , (safe_rshift_func_int8_t_s_u((l_1238 != (safe_rshift_func_int8_t_s_u((safe_div_func_int32_t_s_s(((((1UL != (**l_1177)) < g_792) , p_39) , 9L), p_39)), l_1182.f4))), 6)))))
                {
                    short l_1250 = (-5L);
                    if (l_1250)
                        break;
                    (*l_1234) = l_1250;
                    if ((**l_1177))
                        continue;
                    return (*l_1168);


                }
                else
                {
                    short l_1255 = 0x35CBL;
                    union U1 *l_1262 = &l_1182;
                    int *l_1263 = &l_1233[0][0][0];
                    for (g_792 = (-25); (g_792 == 55); ++g_792)
                    {
                        union U1 **l_1254 = &l_1253;
                        (*l_1254) = l_1253;
                        return l_1255;


                    }
                    (*l_1177) = l_1263;

                    ;
                }

                ;
                for (g_1229 = 0; (g_1229 >= 0); g_1229 -= 1)
                {
                    const union U0 l_1279 = {1UL};
                    int * const l_1291 = &l_1238;
                    unsigned l_1292[4] = {4294967295UL, 0x656C1998L, 4294967295UL, 0x656C1998L};
                    int i;
                    (*l_1173) = (safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_s(g_29.f2, 7)) | 4294967288UL), 1)), 0));
                    if (((*g_377) , l_1233[0][0][7]))
                    {
                        char **l_1280 = (void*)0;
                        char ***l_1281 = (void*)0;
                        char ***l_1282[3][2][8] = {{{&g_1070, &g_1070, (void*)0, &g_1070, &l_1280, &l_1280, &l_1280, &g_1070}, {&g_1070, &g_1070, (void*)0, &g_1070, &l_1280, &l_1280, &l_1280, &g_1070}}, {{&g_1070, &g_1070, (void*)0, &g_1070, &l_1280, &l_1280, &l_1280, &g_1070}, {&g_1070, &g_1070, (void*)0, &g_1070, &l_1280, &l_1280, &l_1280, &g_1070}}, {{&g_1070, &g_1070, (void*)0, &g_1070, &l_1280, &l_1280, &l_1280, &g_1070}, {&g_1070, &g_1070, (void*)0, &g_1070, &l_1280, &l_1280, &l_1280, &g_1070}}};
                        int i, j, k;
                        g_1070 = l_1280;

                        ;
                    }
                    else
                    {
                        return l_1182.f4;


                    }

                    ;
                    (*l_1173) = (safe_lshift_func_int16_t_s_u((l_1285[0][0][3] , g_581.f2), p_38));
                    for (g_729.f2 = 0; (g_729.f2 <= 0); g_729.f2 += 1)
                    {
                        (*l_1177) = &l_1233[0][0][7];
                    }

                                    }
            }
            else
            {
                int l_1296 = 4L;
                char *l_1305 = (void*)0;
                char l_1310 = 0L;
                int *l_1343 = &l_1233[0][0][7];
                int l_1348 = 8L;
                for (g_1133 = 0; (g_1133 != 3); ++g_1133)
                {
                    union U0 l_1295 = {0UL};
                    int *l_1329 = &l_1285[0][0][3];
                    char l_1338 = 0xA6L;
                    (**l_1177) = (g_29.f2 , (-1L));
                    (*l_1177) = &p_38;
                    if (((g_29.f0 < (l_1233[0][0][6] & (0x8AL | l_1296))) || (-6L)))
                    {
                        (*l_1174) = p_38;
                        if (l_1233[0][0][0])
                            continue;
                        (*l_1173) = (safe_lshift_func_int8_t_s_s((l_1310 > ((0x30C0L <= ((safe_lshift_func_uint16_t_u_u(g_2[5], (*l_1168))) , (safe_add_func_int8_t_s_s(p_38, g_526.f2)))) , ((*l_1168) >= g_843.f2))), (p_38 <= p_39)));
                    }
                    else
                    {
                        union U0 l_1317[4][1] = {{{0x3DL}}, {{0x3DL}}, {{0x3DL}}, {{0x3DL}}};
                        char l_1326 = (-1L);
                        int *l_1328 = (void*)0;
                        union U0 *l_1337[4][4] = {{&l_1317[0][0], &l_1295, &l_1317[0][0], &l_1295}, {&l_1317[0][0], &l_1295, &l_1317[0][0], &l_1295}, {&l_1317[0][0], &l_1295, &l_1317[0][0], &l_1295}, {&l_1317[0][0], &l_1295, &l_1317[0][0], &l_1295}};
                        union U0 **l_1336 = &l_1337[0][3];
                        int i, j;
                        l_1329 = l_1328;

                        ;
                        (*l_1174) = (g_1133 | (*l_1174));
                        (*l_1173) = (((safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((((void*)0 != l_1336) , ((((g_581.f0 && ((-1L) & ((~p_38) < (((((p_38 >= (l_1338 <= (safe_add_func_int16_t_s_s(p_39, (p_39 || l_1317[0][0].f0))))) < p_39) || p_39) != p_38) ^ g_29.f4)))) < g_1133) == l_1296) < (**l_1177))), p_38)), p_39)) <= p_39), 2)) != p_39) ^ 4UL);
                    }

                    ;
                }
                for (g_729.f4 = 0; (g_729.f4 <= 6); g_729.f4 += 1)
                {
                    for (l_1310 = 1; (l_1310 <= 6); l_1310 += 1)
                    {
                        int l_1341[8] = {0x3F731DC4L, 0xDBC1C39FL, 0x3F731DC4L, 0xDBC1C39FL, 0x3F731DC4L, 0xDBC1C39FL, 0x3F731DC4L, 0xDBC1C39FL};
                        int i;
                        return l_1341[5];


                    }
                    for (g_364 = 0; (g_364 <= 0); g_364 += 1)
                    {
                        union U1 *l_1342 = &l_1210;
                        int i, j, k;
                        (*l_1177) = &l_1285[g_364][g_364][(g_729.f4 + 2)];

                        ;
                        (**l_1259) = l_1342;

                        ;
                        (*l_1177) = &l_1285[g_364][g_364][(g_729.f4 + 1)];
                        (**l_1259) = (**l_1259);
                    }
                }

                ;
                (*l_1177) = l_1343;

                ;
                (*l_1174) = ((p_38 , (p_39 == (((*l_1343) <= (*l_1343)) < (func_61(g_2[0], ((safe_div_func_int32_t_s_s((((9UL && (*l_1174)) & l_1348) >= ((safe_rshift_func_uint8_t_u_s(((l_1182 , g_29.f2) | p_38), 2)) | p_39)), p_38)) , g_581.f0)) > p_38)))) , p_38);

                ;
            }

                        ;
        }


        ;
        ;
    }
    else
    {
        char **l_1355 = &g_898;
        int * const l_1360 = &l_1233[0][0][7];
        union U1 **l_1380 = &g_198;
        union U0 *l_1397 = &g_729;
        union U0 **l_1396 = &l_1397;
        int l_1404 = 0L;
        char l_1411[5] = {(-1L), 5L, (-1L), 5L, (-1L)};
        int **l_1412 = (void*)0;
        int **l_1413 = &l_1395[2];
        int i;
        for (g_28 = 0; (g_28 < (-16)); g_28 = safe_sub_func_int16_t_s_s(g_28, 2))
        {
            short l_1353 = 0x1B80L;
            union U0 l_1354 = {0xAAL};
            int * const l_1370 = &l_1233[0][0][7];
            unsigned short l_1371 = 0x2165L;
            char *l_1388 = (void*)0;
            if (func_51(g_1229, &l_1233[0][0][7], g_29.f4, l_1353))
            {
                (*l_1360) = (1L == ((p_39 == (((l_1354 , l_1355) != ((safe_div_func_int32_t_s_s((func_51((safe_rshift_func_int16_t_s_s(l_1233[0][0][7], p_38)), l_1360, p_39, l_1354.f0) ^ 1UL), l_1353)) , (void*)0)) || p_38)) == 0xADL));
                for (g_1229 = 0; g_1229 < 7; g_1229 += 1)
                {
                    g_197[g_1229] = &g_198;
                }
            }
            else
            {
                unsigned l_1369 = 4294967295UL;
                if (func_51((p_39 , ((safe_sub_func_uint32_t_u_u(g_2[4], l_1159)) || (safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(0UL, ((safe_div_func_uint32_t_u_u(((l_1354 , p_38) && ((func_51(l_1369, l_1370, (*l_1370), l_1371) <= p_39) > g_581.f0)), p_39)) || 1UL))), g_526.f0)))), l_1360, g_4, p_39))
                {
                    p_38 = (safe_add_func_int32_t_s_s(p_38, ((safe_sub_func_int8_t_s_s(((*g_27) <= (0UL > ((void*)0 != &g_1070))), 0x1CL)) ^ p_38)));
                    (*l_1370) = ((*l_1370) | p_39);
                }
                else
                {
                    char *l_1384 = &g_28;
                    int **l_1385 = &g_134;
                    for (g_1132 = (-14); (g_1132 != 6); g_1132++)
                    {
                        union U1 ***l_1381 = &g_197[2];
                        (*l_1381) = l_1380;
                    }
                    (*l_1385) = l_1370;

                    ;
                    if ((*l_1360))
                        continue;
                    l_1395[7] = l_1360;
                }
            }
            if (p_39)
                break;
            l_1404 = ((g_581.f4 < g_1229) || (((l_1396 != &l_1397) | 0x6F172A00L) && (((((safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u((g_2[2] | ((*l_1360) == (~((((((p_39 && (7L != p_38)) | 4294967289UL) | 0xC3920787L) && (*l_1370)) > 1L) > g_843.f2)))), 0UL)) <= p_39) , g_102), g_581.f4)), p_39)) || 0xD27BCDCFL) && p_39) , g_4) < p_38)));
        }



        (*l_1413) = ((safe_lshift_func_int16_t_s_s(p_39, 3)) , &p_38);


        p_38 = (safe_lshift_func_uint8_t_u_u(g_123, 3));
        (*l_1413) = &p_38;
    }



    ;

    for (g_729.f0 = 0; g_729.f0 < 3; g_729.f0 += 1)
    {
        l_1161[g_729.f0] = &g_377;
    }
    return g_581.f4;


}







static unsigned char func_43(int * p_44)
{
    union U1 * const l_873 = (void*)0;
    short l_874 = (-7L);
    const unsigned char l_879 = 0UL;
    union U1 l_886 = {4294967295UL};
    union U1 l_887 = {8UL};
    int *l_899 = &g_123;
    char *l_906 = &g_28;
    union U0 l_923 = {0x94L};
    int l_954[2][7][3] = {{{0x1EB0AB7AL, 0xEE3D5622L, (-1L)}, {0x1EB0AB7AL, 0xEE3D5622L, (-1L)}, {0x1EB0AB7AL, 0xEE3D5622L, (-1L)}, {0x1EB0AB7AL, 0xEE3D5622L, (-1L)}, {0x1EB0AB7AL, 0xEE3D5622L, (-1L)}, {0x1EB0AB7AL, 0xEE3D5622L, (-1L)}, {0x1EB0AB7AL, 0xEE3D5622L, (-1L)}}, {{0x1EB0AB7AL, 0xEE3D5622L, (-1L)}, {0x1EB0AB7AL, 0xEE3D5622L, (-1L)}, {0x1EB0AB7AL, 0xEE3D5622L, (-1L)}, {0x1EB0AB7AL, 0xEE3D5622L, (-1L)}, {0x1EB0AB7AL, 0xEE3D5622L, (-1L)}, {0x1EB0AB7AL, 0xEE3D5622L, (-1L)}, {0x1EB0AB7AL, 0xEE3D5622L, (-1L)}}};
    union U0 ***l_962 = &g_469;
    const unsigned char l_984[3] = {248UL, 248UL, 248UL};
    union U0 l_993 = {0UL};
    int l_1022 = 0x49F2131DL;
    unsigned l_1124 = 4294967295UL;
    char *l_1131 = (void*)0;
    int i, j, k;
    if (((safe_sub_func_int32_t_s_s(((l_873 == ((l_874 , ((((safe_div_func_int16_t_s_s((safe_add_func_uint32_t_u_u(g_868, l_874)), l_874)) , (((g_868 == g_868) || 0x3ED4L) >= 1UL)) <= (-10L)) , l_886)) , &l_886)) > l_886.f4), 0x19C9D87CL)) > 255UL))
    {
        unsigned l_894 = 0xD40AD694L;
        const union U0 l_922[2][10] = {{{255UL}, {255UL}, {0UL}, {4UL}, {0x2AL}, {4UL}, {0UL}, {255UL}, {255UL}, {0UL}}, {{255UL}, {255UL}, {0UL}, {4UL}, {0x2AL}, {4UL}, {0UL}, {255UL}, {255UL}, {0UL}}};
        int *l_927 = &g_102;
        char * const l_948[1][9][1] = {{{&g_28}, {&g_28}, {&g_28}, {&g_28}, {&g_28}, {&g_28}, {&g_28}, {&g_28}, {&g_28}}};
        const unsigned l_961 = 5UL;
        union U1 l_1003 = {0x40825094L};
        int i, j, k;
        p_44 = (*g_679);

        ;
        if (l_886.f4)
        {
            char *l_895[5];
            int l_896[5][2][5] = {{{1L, 0xF4885BA3L, 7L, 7L, 0xF4885BA3L}, {1L, 0xF4885BA3L, 7L, 7L, 0xF4885BA3L}}, {{1L, 0xF4885BA3L, 7L, 7L, 0xF4885BA3L}, {1L, 0xF4885BA3L, 7L, 7L, 0xF4885BA3L}}, {{1L, 0xF4885BA3L, 7L, 7L, 0xF4885BA3L}, {1L, 0xF4885BA3L, 7L, 7L, 0xF4885BA3L}}, {{1L, 0xF4885BA3L, 7L, 7L, 0xF4885BA3L}, {1L, 0xF4885BA3L, 7L, 7L, 0xF4885BA3L}}, {{1L, 0xF4885BA3L, 7L, 7L, 0xF4885BA3L}, {1L, 0xF4885BA3L, 7L, 7L, 0xF4885BA3L}}};
            int l_897 = (-10L);
            const char *l_921 = &g_28;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_895[i] = (void*)0;
            l_899 = (l_887 , l_899);
            (*l_899) = ((func_61(l_896[3][0][0], (safe_sub_func_uint32_t_u_u((0L < 0x28L), func_51((*l_899), func_45((((safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((g_526.f4 == l_894), (g_29.f2 , g_4))), 7)) ^ (g_29.f4 | g_510[4][0][6])) && (*l_899)), l_894, l_906, g_843.f4, g_510[5][0][0]), (*l_899), (*l_899))))) <= l_896[3][0][0]) , (*g_134));

            ;
            if ((((void*)0 == &l_895[3]) != 0xE5228B8FL))
            {
                (*g_679) = (func_51(l_896[2][0][4], (*g_679), (0xB4L <= g_526.f4), (*l_899)) , p_44);

                ;
            }
            else
            {
                int l_915 = (-2L);
                union U1 ***l_920[8][5][3] = {{{(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}}, {{(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}}, {{(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}}, {{(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}}, {{(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}}, {{(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}}, {{(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}}, {{(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}, {(void*)0, &g_197[2], &g_197[6]}}};
                const char *l_924 = (void*)0;
                union U0 *l_925[5] = {&l_923, (void*)0, &l_923, (void*)0, &l_923};
                int i, j, k;
                l_896[3][0][0] = (safe_mod_func_int32_t_s_s((~(safe_lshift_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(l_897, func_64((((*g_377) , g_843.f4) , l_923), (*l_899), g_123, l_899, g_843.f4))) < (-10L)), 2))), l_915));


                for (l_897 = 0; (l_897 <= 1); l_897 += 1)
                {
                    l_925[4] = &l_923;
                    for (l_915 = 1; (l_915 >= 0); l_915 -= 1)
                    {
                        return (*l_899);
                    }
                }
            }


        }
        else
        {
            int *l_935[6] = {&g_102, &g_123, &g_102, &g_123, &g_102, &g_123};
            int ***l_939 = &g_679;
            char *l_951 = &g_28;
            int i;
            if ((+(0x1DE40D06L | (l_922[1][7].f0 , l_894))))
            {
                (*g_679) = p_44;
                for (g_729.f4 = 0; (g_729.f4 <= 1); g_729.f4 += 1)
                {
                    (*l_899) = 1L;
                    for (l_923.f1 = 1; (l_923.f1 >= 0); l_923.f1 -= 1)
                    {
                        int l_926 = 5L;
                        (*l_899) = 1L;
                        return l_926;
                    }

                                    }

            }
            else
            {
                unsigned char l_929[1][9] = {{0x69L, 0xF7L, 0x69L, 0xF7L, 0x69L, 0xF7L, 0x69L, 0xF7L, 0x69L}};
                int l_936 = 0xAC0AF611L;
                int i, j;
                for (l_923.f3 = 2; (l_923.f3 <= 6); l_923.f3 += 1)
                {
                    short l_933 = 0x76F0L;
                    (*g_679) = l_927;

                    ;
                    for (g_364 = 1; (g_364 <= 6); g_364 += 1)
                    {
                        unsigned l_928 = 1UL;
                        char *l_930[4][9] = {{&g_28, (void*)0, &g_28, (void*)0, &g_28, (void*)0, &g_28, &g_28, &g_28}, {&g_28, (void*)0, &g_28, (void*)0, &g_28, (void*)0, &g_28, &g_28, &g_28}, {&g_28, (void*)0, &g_28, (void*)0, &g_28, (void*)0, &g_28, &g_28, &g_28}, {&g_28, (void*)0, &g_28, (void*)0, &g_28, (void*)0, &g_28, &g_28, &g_28}};
                        char *l_934[8][1][6] = {{{&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}}, {{&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}}, {{&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}}, {{&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}}, {{&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}}, {{&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}}, {{&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}}, {{&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}}};
                        int i, j, k;
                        (*g_679) = l_935[5];
                        (*g_134) = (0x451CD65DL ^ (l_936 | (g_2[8] || (safe_div_func_uint16_t_u_u(g_378.f0, l_929[0][5])))));
                    }

                    ;
                }

                ;
                            }

            ;
            (*l_939) = &l_899;

            ;
            (***l_939) = (safe_div_func_int16_t_s_s(((-3L) | (*l_927)), ((g_868 ^ 65535UL) & func_61(g_2[4], g_526.f4))));

            ;
            (*g_679) = func_45(((((*g_198) , ((safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(((4294967295UL <= 1UL) | (l_948[0][7][0] == ((*l_927) , l_948[0][0][0]))), (safe_sub_func_uint8_t_u_u(g_792, (((**g_679) >= (~((*l_899) < g_843.f4))) != 0xD6L))))) < 8L), 8UL)), (*l_899))) , l_906)) != l_951) <= (*l_927)), (*g_27), l_906, (*l_927), (*l_927));

            ;
        }


        ;
        ;
        for (l_894 = (-5); (l_894 >= 2); l_894 = safe_add_func_int8_t_s_s(l_894, 7))
        {
            return g_378.f0;


        }
        if (l_954[0][4][1])
        {
            unsigned l_955 = 1UL;
            union U1 l_958 = {0x01AA4044L};
            char *l_963[9][3][9] = {{{&g_28, &g_28, &g_28, &g_28, (void*)0, (void*)0, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, (void*)0, (void*)0, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, (void*)0, (void*)0, &g_28, &g_28, &g_28}}, {{&g_28, &g_28, &g_28, &g_28, (void*)0, (void*)0, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, (void*)0, (void*)0, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, (void*)0, (void*)0, &g_28, &g_28, &g_28}}, {{&g_28, &g_28, &g_28, &g_28, (void*)0, (void*)0, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, (void*)0, (void*)0, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, (void*)0, (void*)0, &g_28, &g_28, &g_28}}, {{&g_28, &g_28, &g_28, &g_28, (void*)0, (void*)0, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, (void*)0, (void*)0, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, (void*)0, (void*)0, &g_28, &g_28, &g_28}}, {{&g_28, &g_28, &g_28, &g_28, (void*)0, (void*)0, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, (void*)0, (void*)0, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, (void*)0, (void*)0, &g_28, &g_28, &g_28}}, {{&g_28, &g_28, &g_28, &g_28, (void*)0, (void*)0, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, (void*)0, (void*)0, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, (void*)0, (void*)0, &g_28, &g_28, &g_28}}, {{&g_28, &g_28, &g_28, &g_28, (void*)0, (void*)0, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, (void*)0, (void*)0, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, (void*)0, (void*)0, &g_28, &g_28, &g_28}}, {{&g_28, &g_28, &g_28, &g_28, (void*)0, (void*)0, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, (void*)0, (void*)0, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, (void*)0, (void*)0, &g_28, &g_28, &g_28}}, {{&g_28, &g_28, &g_28, &g_28, (void*)0, (void*)0, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, (void*)0, (void*)0, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, (void*)0, (void*)0, &g_28, &g_28, &g_28}}};
            int * const l_985 = (void*)0;
            int i, j, k;
            (*g_679) = p_44;
            (*g_679) = l_927;


            (*l_927) = (safe_sub_func_int8_t_s_s(l_958.f0, (safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((g_603 > (safe_div_func_int32_t_s_s(func_51((safe_add_func_int8_t_s_s((safe_div_func_int16_t_s_s(l_958.f2, (safe_rshift_func_int8_t_s_u(((safe_sub_func_int8_t_s_s(func_61((safe_sub_func_uint16_t_u_u(l_958.f2, (g_102 >= (g_792 | ((((((void*)0 != l_963[2][1][7]) > (safe_sub_func_uint32_t_u_u((2UL & (*l_927)), l_958.f2))) > l_984[0]) == 0x2CL) < 0x12L))))), g_792), 0x0CL)) > 9UL), 0)))), g_2[4])), l_985, (*l_927), g_510[5][0][0]), (*l_927)))) , g_729.f0), l_923.f0)), g_843.f2))));

            ;
        }
        else
        {
            unsigned l_988 = 0UL;
            char *l_998 = &g_28;
            union U1 l_1006 = {0UL};
            unsigned short l_1021 = 0xC470L;
            (*l_927) = func_61((((l_962 == &g_469) & ((safe_add_func_int8_t_s_s(l_988, ((((((!(l_988 && (g_526.f2 > (5L < (safe_add_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((g_843.f2 <= g_29.f4), l_988)) || l_988), (-1L))))))) , p_44) != (void*)0) < 0L) < (*l_927)) != l_988))) , g_29.f2)) & g_2[1]), (*l_927));

            ;
            l_1022 = (((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s((!(((l_988 | (*l_927)) >= (l_1003 , (safe_sub_func_int16_t_s_s((l_1006 , (l_1003 , (safe_div_func_int32_t_s_s((safe_div_func_int32_t_s_s((func_61(((*l_927) ^ ((safe_lshift_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u((l_1006.f4 < (safe_lshift_func_uint8_t_u_u(func_51((func_51((safe_lshift_func_uint8_t_u_s((*l_927), (g_581.f4 == (*g_134)))), p_44, l_1006.f0, g_526.f0) >= 0x202D9887L), (*g_679), (*l_927), g_843.f0), 2))), l_988)) & l_1021) >= l_1006.f0), g_526.f4)) >= l_988)), g_843.f4) < g_526.f0), 1UL)), (*l_927))))), (-7L))))) || (*l_927))), l_874)), l_1006.f4)) > 248UL) ^ 1L);
            if (l_1006.f2)
            {
                (*l_927) = l_993.f0;
            }
            else
            {
                const union U1 *l_1023 = &g_29;
                (*l_927) = (l_1023 != l_1023);
                (*l_927) = 0x29B96D1CL;
            }
        }

        ;
    }
    else
    {
        unsigned l_1051 = 0UL;
        int **l_1063 = (void*)0;
        const union U0 *l_1067 = &g_729;
        char **l_1069 = &g_898;
        char l_1112 = 0xDCL;
        for (l_993.f4 = 0; (l_993.f4 < 46); l_993.f4 = safe_add_func_int8_t_s_s(l_993.f4, 5))
        {
            int l_1028 = 0xADA6C235L;
            int *l_1035 = &g_4;
            const union U0 *l_1064 = &g_378;
            char *l_1076 = (void*)0;
            if (((g_510[5][0][0] >= (l_1028 & 0L)) , ((safe_sub_func_int16_t_s_s((l_1028 > 0x0D22L), l_1028)) , (safe_add_func_int32_t_s_s((*l_899), 4294967286UL)))))
            {
                unsigned l_1050 = 0xAC3F8A2AL;
                int l_1060 = (-3L);
                union U1 *l_1061 = &g_29;
                const union U0 l_1081 = {255UL};
                for (l_874 = 0; (l_874 > (-21)); l_874 = safe_sub_func_uint16_t_u_u(l_874, 8))
                {
                    unsigned l_1041[2][3] = {{4294967295UL, 4294967295UL, 0x636E7E0BL}, {4294967295UL, 4294967295UL, 0x636E7E0BL}};
                    union U0 l_1059 = {0x49L};
                    int i, j;
                    if ((&l_899 == (void*)0))
                    {
                        (*g_679) = l_1035;

                        ;
                        (*g_679) = p_44;

                        ;
                    }
                    else
                    {
                        unsigned l_1036 = 0x07EE6975L;
                        return l_1036;


                    }

                    ;
                    (*l_899) = ((safe_lshift_func_int16_t_s_u(0x5154L, 1)) , (safe_sub_func_uint8_t_u_u(5UL, (((((((l_1041[0][2] , ((safe_rshift_func_uint16_t_u_s((0x7C71L & g_729.f0), 15)) , (((safe_mod_func_int8_t_s_s(((*l_899) , (safe_div_func_int16_t_s_s(l_1041[0][2], (*l_1035)))), (-4L))) != g_91.f0) , g_2[4]))) > l_1050) , l_1051) || 0xBFC91E29L) , &g_197[2]) != (void*)0) < l_1041[1][2]))));
                    for (g_102 = 4; (g_102 != 18); g_102++)
                    {
                        unsigned l_1054 = 0UL;
                        (*l_899) = (l_1041[0][2] < l_1054);
                        if ((*l_1035))
                            break;
                        (*g_679) = p_44;

                        ;
                        l_1060 = func_61(func_61(func_61((*l_1035), (*l_1035)), (l_1050 ^ (safe_lshift_func_int8_t_s_s((*l_1035), (safe_rshift_func_uint16_t_u_s((((void*)0 == (*g_468)) & (l_1059 , 1L)), 6)))))), l_1041[1][2]);

                        ;
                    }

                    ;
                }

                ;
                if (((void*)0 == l_1061))
                {
                    int ***l_1062[9];
                    const union U0 **l_1065[7];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_1062[i] = &g_679;
                    for (i = 0; i < 7; i++)
                        l_1065[i] = &l_1064;
                    for (g_102 = 0; (g_102 <= 1); g_102 += 1)
                    {
                        (*l_899) = l_1051;
                        return g_29.f2;


                    }
                    l_1063 = &l_1035;

                    ;
                    g_377 = l_1064;

                    ;
                }
                else
                {
                    unsigned l_1066 = 0x66A5B1D8L;
                    for (g_729.f1 = 0; (g_729.f1 <= 1); g_729.f1 += 1)
                    {
                        const union U0 **l_1068[4] = {(void*)0, &l_1067, (void*)0, &l_1067};
                        int i;
                        (*l_899) = (g_581.f4 , l_1066);
                        g_377 = l_1067;

                        ;
                        g_1070 = l_1069;

                        ;
                    }

                    ;
                    ;
                    for (l_1066 = 0; (l_1066 <= 27); l_1066 = safe_add_func_uint16_t_u_u(l_1066, 1))
                    {
                        int ***l_1075[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1075[i] = &g_679;
                        (*g_679) = (*g_679);
                        (*g_679) = &l_1060;

                        ;
                    }

                    ;
                }

                ;
                ;
                ;
                ;
                return g_526.f0;



            }
            else
            {
                char l_1082 = 0L;
                int l_1093 = 1L;
                const union U0 l_1094 = {0x6BL};
                int l_1106 = 0xBC5F842AL;
                (*l_899) = ((func_51(l_1082, p_44, (l_1051 <= l_1082), (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(l_1082, g_29.f2)), 13))) , &l_873) != ((*l_899) , (void*)0));
                if ((*l_1035))
                {
                    union U1 **l_1095 = &g_198;
                    int l_1097 = 0xEC49CD51L;
                    int l_1113 = (-6L);
                    (*l_1095) = &l_886;

                    ;
                    if (l_1093)
                    {
                        char l_1096 = 0L;
                        l_1097 = l_1096;
                    }
                    else
                    {
                        if (l_1082)
                            break;
                    }
                    if (((safe_sub_func_uint16_t_u_u((*l_899), ((*l_1035) , (safe_div_func_int8_t_s_s(0xE6L, (-5L)))))) , 0xFE8F0E4FL))
                    {
                        return g_102;


                    }
                    else
                    {
                        int * const l_1111 = &g_102;
                        (*l_1111) = ((*l_899) < (l_1094.f0 && (l_1097 == ((*l_899) > (safe_unary_minus_func_int8_t_s((!(safe_unary_minus_func_uint8_t_u(func_51(((safe_add_func_uint8_t_u_u((*l_1035), (((func_51(l_1106, l_1111, l_1051, l_1097) , l_1112) >= l_1097) , g_581.f0))) , l_1113), (*g_679), l_1093, g_28))))))))));
                        if ((*l_1111))
                            continue;
                        return l_1094.f0;


                    }
                }
                else
                {
                    unsigned short l_1114 = 65535UL;
                    if ((*l_899))
                        break;
                    (*l_899) = (l_1114 <= (((*l_962) == (*l_962)) , 0xBEL));
                }
                return l_1093;


            }
        }

        ;
                if (l_1051)
        {
            union U0 l_1115 = {9UL};
            int l_1125 = 0L;
            unsigned short l_1126 = 0x216FL;
            int l_1127 = 0xCD9D8F60L;
            unsigned l_1128 = 1UL;
            l_1127 = func_51(((l_1115 , (*g_377)) , ((((*l_899) & (((g_29.f4 | 0x2CE8L) ^ (((l_1115.f0 , (safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((((safe_rshift_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s((1UL != func_51(g_729.f0, (((+(((*l_899) > l_1051) > 0x7CFCL)) < (*l_899)) , p_44), (*l_899), l_1115.f0)), 14)) ^ l_1115.f0) != (*l_899)), (*l_899))) | g_581.f0) >= 0xCBL), l_1115.f0)), l_1124))) , l_1125) <= l_1115.f0)) && (-1L))) , g_581.f0) || 9L)), &l_1022, g_526.f0, l_1126);
            (*l_899) = 0x3297E084L;
            p_44 = p_44;
            (*g_679) = &l_1022;

            ;
        }
        else
        {
            (*g_679) = p_44;

            ;
            (*g_679) = p_44;
        }

        ;
        for (g_1132 = 0; (g_1132 <= 1); g_1132 += 1)
        {
            unsigned l_1152 = 8UL;
            union U1 *l_1153 = (void*)0;
            p_44 = p_44;
            (*g_679) = (*g_679);
            for (g_28 = 0; (g_28 <= 1); g_28 += 1)
            {
                int l_1138 = 0x08C62B8BL;
                const union U0 **l_1147[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1147[i] = &l_1067;
                (*g_679) = ((((((safe_sub_func_uint32_t_u_u(g_581.f4, (~(&p_44 == ((safe_lshift_func_uint16_t_u_u((l_1138 != 65533UL), g_29.f4)) , &p_44))))) > l_1138) <= (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(0x91A2L, (safe_lshift_func_uint16_t_u_s(((*g_377) , 0x7F8DL), l_1138)))), 6L))) == 0x92L) , 7UL) , p_44);

                ;
                (*l_899) = ((((safe_add_func_int8_t_s_s(0x60L, ((void*)0 == l_1147[0]))) ^ l_1138) && (safe_rshift_func_int16_t_s_s(((*l_899) ^ ((((safe_sub_func_uint8_t_u_u(l_1112, 0xB4L)) | func_51(g_1132, (*g_679), l_1152, l_1152)) , (void*)0) != l_1131)), 3))) , l_1051);
                for (l_1051 = 0; (l_1051 <= 1); l_1051 += 1)
                {
                    for (g_364 = 0; (g_364 <= 1); g_364 += 1)
                    {
                        int i, j, k;
                        (*l_899) = (g_510[(g_28 + 3)][g_364][(g_28 + 7)] ^ l_1152);
                    }
                    for (g_729.f1 = 1; (g_729.f1 >= 0); g_729.f1 -= 1)
                    {
                        union U1 **l_1154 = &l_1153;
                        (*l_1154) = l_1153;
                    }

                }
            }
        }
    }

    ;
    ;
    ;
    ;
    (*g_679) = (void*)0;
    l_899 = (void*)0;

    ;
    for (g_868 = 0; (g_868 >= 60); g_868++)
    {
        const int l_1158[4][1] = {{0x4AFA96D1L}, {0x4AFA96D1L}, {0x4AFA96D1L}, {0x4AFA96D1L}};
        int i, j;
        for (l_923.f2 = 0; (l_923.f2 <= 6); l_923.f2 += 1)
        {
            unsigned l_1157[2][1][6] = {{{0xDFA3FE8DL, 4294967294UL, 4294967287UL, 4294967294UL, 0xDFA3FE8DL, 0x4D3BA295L}}, {{0xDFA3FE8DL, 4294967294UL, 4294967287UL, 4294967294UL, 0xDFA3FE8DL, 0x4D3BA295L}}};
            int i, j, k;
            return l_1157[0][0][1];




        }

                if (l_1158[3][0])
            break;
    }
    return g_581.f0;




}







static int * func_45(unsigned short p_46, char p_47, char * p_48, int p_49, short p_50)
{
    unsigned short l_742 = 1UL;
    union U0 l_747 = {247UL};
    short l_748[8] = {0xEB16L, 3L, 0xEB16L, 3L, 0xEB16L, 3L, 0xEB16L, 3L};
    int *l_749[1];
    short l_759 = 1L;
    char *l_785 = &g_28;
    short l_859[2];
    union U1 l_860 = {0xCC498FE4L};
    union U1 **l_863 = (void*)0;
    const int l_864 = 0L;
    int l_865 = 0xD0E524B6L;
    const union U0 l_866[9][6][3] = {{{{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}}, {{{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}}, {{{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}}, {{{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}}, {{{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}}, {{{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}}, {{{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}}, {{{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}}, {{{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}, {{255UL}, {0xF9L}, {0UL}}}};
    unsigned char l_867[10][4] = {{0x51L, 253UL, 5UL, 253UL}, {0x51L, 253UL, 5UL, 253UL}, {0x51L, 253UL, 5UL, 253UL}, {0x51L, 253UL, 5UL, 253UL}, {0x51L, 253UL, 5UL, 253UL}, {0x51L, 253UL, 5UL, 253UL}, {0x51L, 253UL, 5UL, 253UL}, {0x51L, 253UL, 5UL, 253UL}, {0x51L, 253UL, 5UL, 253UL}, {0x51L, 253UL, 5UL, 253UL}};
    unsigned char l_869 = 0x1FL;
    unsigned char l_870[4][7] = {{0xFAL, 0UL, 0UL, 0x39L, 0x39L, 0UL, 0UL}, {0xFAL, 0UL, 0UL, 0x39L, 0x39L, 0UL, 0UL}, {0xFAL, 0UL, 0UL, 0x39L, 0x39L, 0UL, 0UL}, {0xFAL, 0UL, 0UL, 0x39L, 0x39L, 0UL, 0UL}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_749[i] = &g_102;
    for (i = 0; i < 2; i++)
        l_859[i] = (-10L);
    (*g_679) = (void*)0;

    ;
    if (((safe_rshift_func_int16_t_s_s((p_49 >= (!g_123)), 10)) ^ (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(g_123, (*p_48))), (p_47 , ((p_47 != (((l_742 ^ (safe_div_func_int16_t_s_s(((safe_div_func_int8_t_s_s(((l_747 , p_50) , l_742), (*p_48))) > l_747.f0), 0x675AL))) > l_742) | g_729.f0)) || l_748[1])))), p_50))))
    {
        return l_749[0];


    }
    else
    {
        int **l_756 = &g_134;
        union U0 l_761 = {255UL};
        union U1 *l_768 = (void*)0;
        int l_787 = 9L;
        int l_855 = 0x747C326CL;
        unsigned char l_856 = 249UL;
        for (g_729.f0 = 2; (g_729.f0 <= 7); g_729.f0 += 1)
        {
            return (*g_679);


        }
        for (l_747.f2 = 6; (l_747.f2 <= 26); l_747.f2 = safe_add_func_int32_t_s_s(l_747.f2, 3))
        {
            char l_760 = 0L;
            int * const l_791[10][10][2] = {{{&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}}, {{&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}}, {{&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}}, {{&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}}, {{&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}}, {{&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}}, {{&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}}, {{&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}}, {{&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}}, {{&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}, {&l_787, &g_4}}};
            union U1 l_800[6] = {{0x5DBC05FAL}, {0x5DBC05FAL}, {4294967291UL}, {0x5DBC05FAL}, {0x5DBC05FAL}, {4294967291UL}};
            unsigned short l_801[10] = {65534UL, 65534UL, 65532UL, 65534UL, 65534UL, 65532UL, 65534UL, 65534UL, 65532UL, 65534UL};
            unsigned l_838 = 0UL;
            int i, j, k;
        }

            }

        l_869 = ((((((((((0xAEL > (safe_add_func_int8_t_s_s((*p_48), (*p_48)))) ^ l_867[8][3]) | g_2[4]) == 0x3CL) & (-3L)) ^ g_868) > g_510[5][0][0]) , 0x01C7ECE7L) || g_581.f2) != g_102);
    l_870[0][6] = p_50;
    return l_749[0];


}







static unsigned short func_51(unsigned short p_52, int * const p_53, int p_54, int p_55)
{
    union U1 **l_705 = &g_198;
    int l_710[1][5];
    int *l_731 = &g_102;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_710[i][j] = 0xAD216777L;
    }
    for (p_52 = 0; (p_52 <= 6); p_52 += 1)
    {
        union U1 **l_706 = &g_198;
        int l_707 = 0xA3A8B89EL;
        int *l_733 = (void*)0;
    }
    return (*l_731);
}







static unsigned short func_56(unsigned short p_57, short p_58, char * p_59)
{
    int l_82[6] = {(-8L), (-8L), 5L, (-8L), (-8L), 5L};
    union U0 l_87 = {0UL};
    char *l_88[5] = {&g_28, &g_28, &g_28, &g_28, &g_28};
    unsigned l_464 = 0x51B73821L;
    int * const l_485[9][5] = {{&g_4, &g_4, (void*)0, (void*)0, &g_4}, {&g_4, &g_4, (void*)0, (void*)0, &g_4}, {&g_4, &g_4, (void*)0, (void*)0, &g_4}, {&g_4, &g_4, (void*)0, (void*)0, &g_4}, {&g_4, &g_4, (void*)0, (void*)0, &g_4}, {&g_4, &g_4, (void*)0, (void*)0, &g_4}, {&g_4, &g_4, (void*)0, (void*)0, &g_4}, {&g_4, &g_4, (void*)0, (void*)0, &g_4}, {&g_4, &g_4, (void*)0, (void*)0, &g_4}};
    union U1 l_503 = {0xCCDCFFA7L};
    int *l_546 = &l_82[5];
    unsigned l_622 = 0x829DD797L;
    int **l_636 = &g_134;
    union U0 *l_677[2][4] = {{(void*)0, (void*)0, &l_87, (void*)0}, {(void*)0, (void*)0, &l_87, (void*)0}};
    union U0 **l_676 = &l_677[1][0];
    int i, j;
    if (func_61(func_64(func_70(((0xD8D7CD14L != ((safe_add_func_int32_t_s_s(g_2[1], (safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((p_57 == (-5L)) , l_82[5]), (safe_sub_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(((l_87 , ((l_88[4] != l_88[4]) , ((safe_sub_func_uint32_t_u_u((!p_57), l_82[1])) ^ (-2L)))) && 0x237EEBDCL), l_82[3])) | l_82[5]), (-1L))))), g_29.f4)))) , p_58)) == 1UL), l_88[0], (*g_27), g_91, &l_82[5]), p_57, l_87.f0, &g_102, p_58), g_29.f4))
    {
        unsigned char l_460 = 0x49L;
        int *l_461 = &l_82[2];
        (*l_461) = l_460;
    }
    else
    {
        const char l_466[6] = {0xFBL, 0xFBL, 0xFBL, 0xFBL, 0xFBL, 0xFBL};
        int l_467 = 0x786F5E07L;
        union U0 l_480 = {0x1FL};
        const unsigned char l_481 = 0x7DL;
        unsigned char l_509 = 1UL;
        int l_523[10] = {1L, 0L, 1L, 0L, 1L, 0L, 1L, 0L, 1L, 0L};
        int * const l_557 = (void*)0;
        unsigned char l_558 = 0xC7L;
        unsigned l_592 = 0x9F4348DAL;
        int l_602 = 0xD2B29663L;
        int ***l_680[8][5] = {{&g_679, &l_636, (void*)0, &l_636, &g_679}, {&g_679, &l_636, (void*)0, &l_636, &g_679}, {&g_679, &l_636, (void*)0, &l_636, &g_679}, {&g_679, &l_636, (void*)0, &l_636, &g_679}, {&g_679, &l_636, (void*)0, &l_636, &g_679}, {&g_679, &l_636, (void*)0, &l_636, &g_679}, {&g_679, &l_636, (void*)0, &l_636, &g_679}, {&g_679, &l_636, (void*)0, &l_636, &g_679}};
        int i, j;
        if (p_58)
        {
            unsigned char l_465 = 251UL;
            const union U1 l_474[6][1][5] = {{{{0xDDF7CE69L}, {0xDDF7CE69L}, {4294967289UL}, {4294967295UL}, {0x6DB44029L}}}, {{{0xDDF7CE69L}, {0xDDF7CE69L}, {4294967289UL}, {4294967295UL}, {0x6DB44029L}}}, {{{0xDDF7CE69L}, {0xDDF7CE69L}, {4294967289UL}, {4294967295UL}, {0x6DB44029L}}}, {{{0xDDF7CE69L}, {0xDDF7CE69L}, {4294967289UL}, {4294967295UL}, {0x6DB44029L}}}, {{{0xDDF7CE69L}, {0xDDF7CE69L}, {4294967289UL}, {4294967295UL}, {0x6DB44029L}}}, {{{0xDDF7CE69L}, {0xDDF7CE69L}, {4294967289UL}, {4294967295UL}, {0x6DB44029L}}}};
            short l_479 = 5L;
            unsigned char l_482[1];
            union U0 l_483 = {0x5AL};
            const unsigned char l_488 = 0x2FL;
            int * const l_489[7] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_482[i] = 0x1CL;
            l_467 = ((~func_61((g_123 , ((safe_lshift_func_int8_t_s_u(l_464, (0x7DC168F0L != 4294967290UL))) | (l_465 <= 0xF0DCL))), p_58)) && l_466[3]);
            if ((g_468 != &g_469))
            {
                union U0 *l_471 = &l_87;
                union U0 **l_470 = &l_471;
                int **l_472 = (void*)0;
                int **l_473 = &g_134;
                char l_484 = 0x12L;
                union U1 l_504 = {0UL};
                union U1 *l_525[1][6][6] = {{{&g_29, &l_503, &g_526, &g_29, &g_526, &g_29}, {&g_29, &l_503, &g_526, &g_29, &g_526, &g_29}, {&g_29, &l_503, &g_526, &g_29, &g_526, &g_29}, {&g_29, &l_503, &g_526, &g_29, &g_526, &g_29}, {&g_29, &l_503, &g_526, &g_29, &g_526, &g_29}, {&g_29, &l_503, &g_526, &g_29, &g_526, &g_29}}};
                int i, j, k;
                (*l_470) = &l_87;
                (*l_473) = &g_4;

                ;
                if ((l_474[1][0][1] , (safe_mod_func_int16_t_s_s(0L, ((safe_sub_func_uint16_t_u_u(1UL, (p_57 < 1L))) , g_364)))))
                {
                    int *l_486 = &g_102;
                    char *l_487 = (void*)0;
                    (*l_470) = &l_480;

                    ;
                    (*l_473) = &g_123;

                    ;
                    for (p_57 = 0; (p_57 <= 0); p_57 += 1)
                    {
                        int i;
                        (*l_473) = (l_482[p_57] , l_486);

                        ;
                        (*l_486) = func_61(g_29.f2, (func_70(((void*)0 == l_487), &l_484, (*p_59), l_480, &l_82[5]) , g_29.f2));

                        ;
                    }

                    ;
                }
                else
                {
                    (*l_473) = ((*g_134) , &l_467);

                    ;
                    return g_91.f0;


                }

                ;
                ;
                for (l_467 = 0; (l_467 != (-25)); l_467--)
                {
                    int l_519 = 0x1CDD7ABAL;
                    union U1 **l_524[1][4][3] = {{{&g_198, &g_198, &g_198}, {&g_198, &g_198, &g_198}, {&g_198, &g_198, &g_198}, {&g_198, &g_198, &g_198}}};
                    int i, j, k;
                    (*l_473) = &g_4;

                    ;
                    if ((*g_134))
                        continue;
                    for (l_87.f2 = 0; (l_87.f2 < 59); ++l_87.f2)
                    {
                        int l_522 = 0xBB6C9B94L;
                    }

                                        l_525[0][2][1] = &l_504;
                }
            }
            else
            {
                int l_531 = (-9L);
                short l_532[6] = {0x031FL, 0x031FL, 7L, 0x031FL, 0x031FL, 7L};
                int * const l_533 = &g_102;
                int **l_534 = &g_134;
                int i;
                l_532[3] = (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(p_57, l_531)), p_57));
                (*l_534) = l_533;

                ;
            }

            ;
        }
        else
        {
            unsigned l_539 = 0x50F6E574L;
            char **l_542 = &l_88[3];
            int *l_547[3][1][3] = {{{&l_82[5], (void*)0, &l_82[5]}}, {{&l_82[5], (void*)0, &l_82[5]}}, {{&l_82[5], (void*)0, &l_82[5]}}};
            union U0 l_550 = {0x58L};
            union U1 l_553 = {0xA44A84ABL};
            const unsigned short l_556 = 0xA3D1L;
            int *l_576 = &l_82[5];
            short l_611[7] = {(-1L), (-1L), (-1L), (-1L), (-1L), (-1L), (-1L)};
            union U0 l_629 = {255UL};
            int * const l_681 = &l_467;
            int i, j, k;
            if ((((((safe_add_func_int32_t_s_s(p_58, (((safe_rshift_func_int16_t_s_u(l_539, 3)) & ((l_503 , (&p_59 != l_542)) > (((*g_198) , (*g_468)) != (*g_468)))) != ((*g_134) == (*g_134))))) , (void*)0) == &g_4) | 1UL) , l_539))
            {
                int * const l_545 = &g_123;
                int **l_548 = &l_547[1][0][0];
                union U1 l_549 = {0x11B7E894L};
                for (g_28 = 0; (g_28 > 6); g_28 = safe_add_func_int8_t_s_s(g_28, 8))
                {
                    l_546 = l_545;

                    ;
                }

                ;
                (*l_548) = l_547[1][0][0];
                (*l_548) = &g_123;


                (*l_545) = (l_549 , (*g_134));
            }
            else
            {
                unsigned char l_562 = 0x94L;
                int l_566[3];
                int **l_577 = &l_547[1][0][1];
                union U1 *l_580 = &g_581;
                int i;
                for (i = 0; i < 3; i++)
                    l_566[i] = 0L;
                for (l_480.f4 = (-17); (l_480.f4 > 6); l_480.f4 = safe_add_func_uint16_t_u_u(l_480.f4, 1))
                {
                    const int **l_561 = &g_459;
                    union U1 l_565 = {4294967291UL};
                    (*l_561) = (void*)0;

                    ;
                    l_566[1] = (((+(g_526.f4 , (l_562 <= (safe_add_func_int32_t_s_s((*g_134), (l_565 , (p_58 == ((-10L) >= p_57)))))))) <= p_58) , (*g_134));
                }


                                for (g_123 = 0; (g_123 >= 7); g_123 = safe_add_func_int8_t_s_s(g_123, 5))
                {
                    int **l_569 = &l_547[2][0][1];
                    int l_575 = 0x064C34F0L;
                    (*l_569) = l_547[1][0][0];
                    for (g_28 = 4; (g_28 >= 0); g_28 -= 1)
                    {
                        int l_572 = 0x156B1581L;
                        (*l_546) = p_58;
                        if ((*l_546))
                            continue;
                        (*l_569) = &l_566[0];
                        (*l_546) = (safe_sub_func_uint32_t_u_u(l_572, (((safe_mod_func_int8_t_s_s((*p_59), l_575)) && 0x24A5D3EAL) , p_58)));
                    }
                    (*l_546) = p_58;
                }


                (*l_577) = l_576;
                for (p_58 = 0; (p_58 < 2); p_58++)
                {
                    if ((*g_134))
                    {
                        l_580 = &l_553;

                        ;
                        (*l_546) = p_58;
                        g_134 = &l_467;

                        ;
                        return g_29.f2;


                    }
                    else
                    {
                        return p_58;
                    }
                }
            }


            ;

            if (((((safe_unary_minus_func_int16_t_s(func_61((g_378.f0 , (((&l_547[1][0][0] == &l_576) == (func_64(((0xD05E27F7L ^ (g_581.f0 == (l_87 , p_58))) , l_550), p_58, p_58, &g_123, g_510[5][0][0]) <= p_58)) && 1L)), g_2[4]))) && 0xE688L) & p_58) , p_57))
            {
                const union U0 l_593 = {255UL};
                int *l_594 = &g_4;
                char **l_608 = &l_88[3];
                int **l_644 = &l_546;
                if (func_64(l_550, (((p_58 , ((safe_unary_minus_func_int32_t_s((((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(l_592, 12)), p_58)) ^ ((func_64((l_593 , l_87), g_123, g_29.f0, &l_523[3], p_57) ^ 0x05F36030L) && p_57)) ^ 0L))) && p_57)) , p_58) < p_58), p_58, &l_82[5], g_510[5][1][9]))
                {
                    int **l_595 = &l_547[1][0][0];
                    union U0 l_606 = {0xB0L};
                    const union U0 **l_620[5][3][8] = {{{&g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377}, {&g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377}, {&g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377}}, {{&g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377}, {&g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377}, {&g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377}}, {{&g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377}, {&g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377}, {&g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377}}, {{&g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377}, {&g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377}, {&g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377}}, {{&g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377}, {&g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377}, {&g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377, &g_377}}};
                    const union U0 *** const l_619 = &l_620[1][1][3];
                    char ***l_624 = &l_542;
                    int i, j, k;
                    (*l_595) = l_594;


                    (*l_576) = (safe_mod_func_uint32_t_u_u(p_57, g_378.f0));
                    for (l_480.f1 = 10; (l_480.f1 == (-6)); l_480.f1--)
                    {
                        char **l_607 = (void*)0;
                        (*l_546) = (p_58 | (((safe_sub_func_int32_t_s_s((((l_602 >= g_603) != (-5L)) , (safe_add_func_uint8_t_u_u(((void*)0 == &l_593), ((*p_59) <= (0L >= (((l_606 , g_603) < g_29.f4) < l_606.f0)))))), 0xFCA51F46L)) , l_607) != l_608));
                        l_611[4] = (safe_sub_func_uint16_t_u_u(1UL, 1L));
                    }

                                        if (((*l_594) != (*p_59)))
                    {
                        char l_618 = (-7L);
                        union U0 ***l_621 = &g_469;
                        int * const l_623[7][6] = {{(void*)0, &g_102, &l_467, &g_123, &l_523[3], (void*)0}, {(void*)0, &g_102, &l_467, &g_123, &l_523[3], (void*)0}, {(void*)0, &g_102, &l_467, &g_123, &l_523[3], (void*)0}, {(void*)0, &g_102, &l_467, &g_123, &l_523[3], (void*)0}, {(void*)0, &g_102, &l_467, &g_123, &l_523[3], (void*)0}, {(void*)0, &g_102, &l_467, &g_123, &l_523[3], (void*)0}, {(void*)0, &g_102, &l_467, &g_123, &l_523[3], (void*)0}};
                        int i, j;
                        (*l_546) = (((safe_lshift_func_uint8_t_u_s(p_57, 4)) , l_624) != &l_608);
                    }
                    else
                    {
                        int l_633[7][8] = {{(-1L), 1L, 0x621FB47DL, 1L, (-1L), (-5L), 0x621FB47DL, (-5L)}, {(-1L), 1L, 0x621FB47DL, 1L, (-1L), (-5L), 0x621FB47DL, (-5L)}, {(-1L), 1L, 0x621FB47DL, 1L, (-1L), (-5L), 0x621FB47DL, (-5L)}, {(-1L), 1L, 0x621FB47DL, 1L, (-1L), (-5L), 0x621FB47DL, (-5L)}, {(-1L), 1L, 0x621FB47DL, 1L, (-1L), (-5L), 0x621FB47DL, (-5L)}, {(-1L), 1L, 0x621FB47DL, 1L, (-1L), (-5L), 0x621FB47DL, (-5L)}, {(-1L), 1L, 0x621FB47DL, 1L, (-1L), (-5L), 0x621FB47DL, (-5L)}};
                        int **l_634 = &l_547[0][0][1];
                        int ***l_635[4][1][7] = {{{&l_595, &l_595, &l_595, &l_595, &l_595, &l_595, &l_595}}, {{&l_595, &l_595, &l_595, &l_595, &l_595, &l_595, &l_595}}, {{&l_595, &l_595, &l_595, &l_595, &l_595, &l_595, &l_595}}, {{&l_595, &l_595, &l_595, &l_595, &l_595, &l_595, &l_595}}};
                        int i, j, k;
                        (*l_546) = (safe_div_func_uint32_t_u_u((g_526.f0 , (safe_mod_func_uint8_t_u_u(func_64(l_629, (safe_unary_minus_func_uint16_t_u((&l_467 == &g_102))), g_2[8], &g_123, (safe_mod_func_int32_t_s_s((g_123 == 0x0611L), l_633[0][3]))), 0xC1L))), g_526.f0));
                        l_636 = l_634;

                        ;
                        (*l_546) = (((g_29.f2 , (func_61((p_57 >= (*l_594)), (l_480 , g_102)) | g_378.f0)) >= g_510[2][1][3]) , 9L);

                        ;
                        (*l_634) = &g_123;
                    }

                    ;
                }
                else
                {
                    int **l_643 = &l_547[0][0][2];
                    char *** const l_650[9][1][4] = {{{&l_542, &l_542, &l_608, &l_608}}, {{&l_542, &l_542, &l_608, &l_608}}, {{&l_542, &l_542, &l_608, &l_608}}, {{&l_542, &l_542, &l_608, &l_608}}, {{&l_542, &l_542, &l_608, &l_608}}, {{&l_542, &l_542, &l_608, &l_608}}, {{&l_542, &l_542, &l_608, &l_608}}, {{&l_542, &l_542, &l_608, &l_608}}, {{&l_542, &l_542, &l_608, &l_608}}};
                    int i, j, k;
                    (*l_636) = &g_102;

                    ;
                    for (l_550.f3 = 26; (l_550.f3 <= (-11)); --l_550.f3)
                    {
                        const char l_645 = 0x66L;
                        l_644 = l_643;

                        ;
                        if (p_57)
                            break;
                        if ((*g_134))
                            break;
                        if (l_645)
                            break;
                    }

                                        ;
                    (*g_134) = ((**l_636) == ((safe_add_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(p_57, ((p_57 && (((void*)0 == l_650[0][0][3]) | ((safe_div_func_int8_t_s_s((*p_59), (safe_sub_func_int8_t_s_s((((((safe_lshift_func_int8_t_s_s((*p_59), (*p_59))) & (p_57 <= 0x6264A476L)) , g_123) == 0UL) <= g_28), 0x75L)))) != 0L))) < p_57))) , g_510[2][1][5]), (**l_636))) , 0x8AE9B643L));
                    (**l_636) = (~((*g_134) && p_57));
                }



                ;
                ;
                (*l_546) = (safe_sub_func_int16_t_s_s(((g_4 < (+(*l_594))) & (safe_lshift_func_uint8_t_u_s(0UL, (*p_59)))), (0UL ^ p_58)));
            }
            else
            {
                int *l_673 = &l_467;
                unsigned short l_701 = 1UL;
                (*l_546) = (((*l_542) != l_88[4]) , (p_58 >= (safe_lshift_func_int8_t_s_s((g_364 == ((((*g_134) != ((safe_unary_minus_func_int32_t_s((p_58 || p_58))) >= ((4294967288UL ^ ((p_57 , (void*)0) == g_360)) > 0L))) && p_58) & g_102)), (*g_27)))));
                for (l_480.f1 = 0; (l_480.f1 <= (-19)); l_480.f1 = safe_sub_func_int32_t_s_s(l_480.f1, 3))
                {
                    int l_672 = 0x31DE41A3L;
                    for (l_550.f0 = 0; (l_550.f0 >= 47); l_550.f0 = safe_add_func_uint16_t_u_u(l_550.f0, 2))
                    {
                        l_672 = (p_58 <= (p_58 && g_581.f0));
                        (*l_636) = &g_4;

                        ;
                        (*l_546) = (&g_27 != &p_59);
                        l_547[1][0][0] = l_673;
                    }
                    l_673 = ((*g_198) , ((safe_add_func_uint32_t_u_u(((void*)0 != l_676), (func_64(l_480, p_57, (g_678[6][6][1] != (l_672 , l_680[0][2])), l_681, p_57) != g_526.f2))) , (void*)0));

                    ;
                    for (l_464 = 20; (l_464 >= 23); ++l_464)
                    {
                        (*l_546) = (safe_lshift_func_int8_t_s_s((((safe_add_func_uint8_t_u_u(func_61((safe_unary_minus_func_uint8_t_u((((safe_mod_func_int16_t_s_s(p_58, (safe_add_func_uint32_t_u_u((safe_div_func_int32_t_s_s((safe_div_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_s(func_61(p_58, (*l_681)), g_91.f0)) , 0L) , (p_57 || (*l_681))), (p_57 , g_510[4][0][0]))), p_57)), p_58)), 0xCF4C8027L)))) && g_378.f0) , g_581.f0))), g_378.f0), 1UL)) >= p_58) & 0xED11L), 2));

                        ;
                        (*l_681) = (((&l_547[0][0][0] == &l_576) & g_29.f4) , (*l_681));
                    }
                }



                ;
                (*l_576) = ((*g_377) , p_57);
            }



            ;
            return g_102;


        }

        ;
        return p_57;
    }

    ;
    ;

    return g_526.f2;
}







static int func_61(unsigned p_62, unsigned char p_63)
{
    int *l_443 = &g_4;
    int **l_444[9] = {&g_134, &g_134, &g_134, &g_134, &g_134, &g_134, &g_134, &g_134, &g_134};
    int i;
    g_134 = l_443;

    ;
    for (g_364 = 0; (g_364 < 9); g_364++)
    {
        int l_456 = (-7L);
        for (g_28 = 0; (g_28 <= (-4)); g_28--)
        {
            const int *l_457[6] = {&l_456, &g_102, &l_456, &g_102, &l_456, &g_102};
            int i;
            for (p_63 = 0; (p_63 > 51); p_63 = safe_add_func_uint16_t_u_u(p_63, 1))
            {
                const int **l_458[4][2][8] = {{{&l_457[5], &l_457[4], &l_457[5], &l_457[5], &l_457[4], &l_457[5], &l_457[3], &l_457[5]}, {&l_457[5], &l_457[4], &l_457[5], &l_457[5], &l_457[4], &l_457[5], &l_457[3], &l_457[5]}}, {{&l_457[5], &l_457[4], &l_457[5], &l_457[5], &l_457[4], &l_457[5], &l_457[3], &l_457[5]}, {&l_457[5], &l_457[4], &l_457[5], &l_457[5], &l_457[4], &l_457[5], &l_457[3], &l_457[5]}}, {{&l_457[5], &l_457[4], &l_457[5], &l_457[5], &l_457[4], &l_457[5], &l_457[3], &l_457[5]}, {&l_457[5], &l_457[4], &l_457[5], &l_457[5], &l_457[4], &l_457[5], &l_457[3], &l_457[5]}}, {{&l_457[5], &l_457[4], &l_457[5], &l_457[5], &l_457[4], &l_457[5], &l_457[3], &l_457[5]}, {&l_457[5], &l_457[4], &l_457[5], &l_457[5], &l_457[4], &l_457[5], &l_457[3], &l_457[5]}}};
                int i, j, k;
                for (g_123 = 0; (g_123 == (-29)); g_123--)
                {
                    short l_455 = 1L;
                    for (p_62 = (-27); (p_62 >= 39); p_62++)
                    {
                        l_455 = (*g_134);
                    }
                }
                g_134 = &g_123;

                ;
                if (l_456)
                    continue;
                g_459 = l_457[5];

                ;
            }
        }


        l_456 = (p_62 ^ p_62);
    }

    ;
    return (*g_134);
}







static unsigned func_64(union U0 p_65, const int p_66, short p_67, int * const p_68, int p_69)
{
    union U0 *l_334 = (void*)0;
    int l_338 = (-4L);
    union U1 *l_345 = &g_29;
    int l_351 = 0x5E5396FEL;
    char **l_373[4];
    int *l_434 = &g_123;
    int i;
    for (i = 0; i < 4; i++)
        l_373[i] = &g_27;
    for (p_65.f4 = 0; (p_65.f4 <= 6); p_65.f4 += 1)
    {
        int **l_330 = &g_134;
        for (p_67 = 4; (p_67 >= 0); p_67 -= 1)
        {
            unsigned l_329 = 0x71473C66L;
            return l_329;
        }
        (*l_330) = (void*)0;

        ;
    }

        if (g_91.f0)
    {
        int l_333 = 0xB593405EL;
        char l_348 = (-9L);
        if ((safe_sub_func_uint8_t_u_u(l_333, (l_333 == l_333))))
        {
            union U0 **l_335 = &l_334;
            union U1 ***l_341 = &g_197[6];
            char **l_362[6][7] = {{&g_27, &g_27, &g_27, &g_27, &g_27, &g_27, &g_27}, {&g_27, &g_27, &g_27, &g_27, &g_27, &g_27, &g_27}, {&g_27, &g_27, &g_27, &g_27, &g_27, &g_27, &g_27}, {&g_27, &g_27, &g_27, &g_27, &g_27, &g_27, &g_27}, {&g_27, &g_27, &g_27, &g_27, &g_27, &g_27, &g_27}, {&g_27, &g_27, &g_27, &g_27, &g_27, &g_27, &g_27}};
            char ***l_361 = &l_362[1][0];
            int l_363 = 1L;
            int i, j;
            (*l_335) = l_334;
            for (p_65.f4 = 0; (p_65.f4 >= 57); p_65.f4 = safe_add_func_int8_t_s_s(p_65.f4, 1))
            {
                if (l_338)
                    break;
                for (g_123 = 0; (g_123 > (-17)); g_123--)
                {
                    return g_123;
                }
            }
            if (((void*)0 != l_341))
            {
                char l_352 = 3L;
                int **l_354 = &g_134;
                for (l_333 = 0; (l_333 <= 6); l_333 += 1)
                {
                    short l_344 = 8L;
                    union U1 *l_353[8] = {&g_29, &g_29, &g_29, &g_29, &g_29, &g_29, &g_29, &g_29};
                    int i;
                    (*p_68) = (((safe_sub_func_uint32_t_u_u(((l_344 , (**l_341)) != l_345), (g_28 , (((((safe_lshift_func_uint8_t_u_s(p_67, 0)) && l_348) | (*p_68)) && (safe_sub_func_uint32_t_u_u((((void*)0 != g_197[l_333]) >= g_2[4]), l_351))) == l_352)))) , l_353[2]) != (void*)0);
                }
                (*p_68) = 0x42A59A29L;
                (*l_354) = p_68;


            }
            else
            {
                l_338 = (*p_68);
                for (p_65.f3 = 3; (p_65.f3 >= (-28)); p_65.f3--)
                {
                    int l_357 = 0x4016B288L;
                    if (l_348)
                    {
                        (*p_68) = l_357;
                    }
                    else
                    {
                        return g_123;
                    }
                }

                            }
            l_333 = ((((safe_rshift_func_int16_t_s_s(((*p_68) <= p_65.f1), ((((g_360 != l_361) >= l_363) & g_364) , (safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((safe_div_func_int16_t_s_s(((((p_65.f0 , l_338) , (void*)0) != (void*)0) | g_28), 6L)) > l_363), l_333)), 0xCFL)), 4294967295UL))))) >= (*g_27)) == l_348) , 0x15F752F7L);
        }
        else
        {
            int l_375 = (-8L);
            if ((*p_68))
            {
                unsigned short l_374 = 1UL;
                const union U0 **l_376 = (void*)0;
                l_373[1] = l_373[1];
                g_377 = (((p_65.f1 || (l_374 , l_375)) >= 0x4564BAA4L) , &g_91);

                ;
                return g_29.f4;
            }
            else
            {
                char l_382 = 1L;
                int **l_383 = &g_134;
                for (l_375 = (-24); (l_375 <= (-24)); l_375 = safe_add_func_uint8_t_u_u(l_375, 7))
                {
                    for (g_28 = 6; (g_28 >= 0); g_28 -= 1)
                    {
                        int **l_381 = (void*)0;
                        g_134 = (void*)0;

                        ;
                        return l_382;
                    }
                    return p_65.f0;
                }
                (*p_68) = (*p_68);
                g_134 = &l_333;

                ;
                (*l_383) = &g_123;

                ;
            }

            ;
            return g_2[4];
        }
    }
    else
    {
        int **l_385 = &g_134;
        for (g_364 = 0; (g_364 <= 3); g_364 += 1)
        {
            int **l_384 = &g_134;
            (*l_384) = &l_338;

            ;
            (*l_384) = &g_123;

            ;
            (*l_384) = &g_4;

            ;
            (*l_384) = &g_102;

            ;
            for (p_65.f2 = 0; (p_65.f2 <= 6); p_65.f2 += 1)
            {
                (*p_68) = (*g_134);
            }

                    }
        (*l_385) = &l_338;

        ;
    }


    for (p_65.f4 = 11; (p_65.f4 <= 35); p_65.f4++)
    {
        int l_393 = 0xE9ED53E5L;
        const int *l_403[5];
        union U1 *l_428[1];
        int i;
        for (i = 0; i < 5; i++)
            l_403[i] = &g_123;
        for (i = 0; i < 1; i++)
            l_428[i] = &g_29;
        for (g_28 = 0; (g_28 <= (-27)); --g_28)
        {
            const unsigned l_390[9][1][6] = {{{0UL, 4294967295UL, 0xB8BC7CD5L, 4294967295UL, 0UL, 0x0AD21AF2L}}, {{0UL, 4294967295UL, 0xB8BC7CD5L, 4294967295UL, 0UL, 0x0AD21AF2L}}, {{0UL, 4294967295UL, 0xB8BC7CD5L, 4294967295UL, 0UL, 0x0AD21AF2L}}, {{0UL, 4294967295UL, 0xB8BC7CD5L, 4294967295UL, 0UL, 0x0AD21AF2L}}, {{0UL, 4294967295UL, 0xB8BC7CD5L, 4294967295UL, 0UL, 0x0AD21AF2L}}, {{0UL, 4294967295UL, 0xB8BC7CD5L, 4294967295UL, 0UL, 0x0AD21AF2L}}, {{0UL, 4294967295UL, 0xB8BC7CD5L, 4294967295UL, 0UL, 0x0AD21AF2L}}, {{0UL, 4294967295UL, 0xB8BC7CD5L, 4294967295UL, 0UL, 0x0AD21AF2L}}, {{0UL, 4294967295UL, 0xB8BC7CD5L, 4294967295UL, 0UL, 0x0AD21AF2L}}};
            char **l_391 = &g_27;
            union U1 l_392 = {0xCFB5C664L};
            int i, j, k;
            (*p_68) = (((p_66 < 7UL) < (l_390[2][0][2] , ((0xDDE4L && 0x2166L) != (7L | (((l_391 != ((l_392 , p_65) , l_373[3])) || 0x90L) , 0xDDL))))) , l_393);
        }
        for (l_338 = 0; (l_338 < (-3)); l_338--)
        {
            const char *l_402[8][10] = {{&g_28, &g_28, &g_28, &g_28, &g_28, (void*)0, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, (void*)0, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, (void*)0, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, (void*)0, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, (void*)0, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, (void*)0, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, (void*)0, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, (void*)0, &g_28, &g_28, &g_28, &g_28}};
            int l_411 = 5L;
            int i, j;
            if ((safe_lshift_func_uint16_t_u_u((l_393 ^ (p_66 , ((*g_377) , g_91.f0))), 7)))
            {
                char l_433 = (-1L);
                for (l_393 = (-4); (l_393 > 26); ++l_393)
                {
                    int l_410 = 0x7F52D78BL;
                    union U1 *l_427[1][8][3] = {{{&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}}};
                    int **l_429 = &g_134;
                    int i, j, k;
                    for (l_351 = (-29); (l_351 > 24); l_351 = safe_add_func_int16_t_s_s(l_351, 8))
                    {
                        int **l_414 = &g_134;
                        (*p_68) = ((safe_rshift_func_uint8_t_u_u(l_410, ((4294967295UL > l_411) & p_65.f1))) || (l_410 != (safe_sub_func_int16_t_s_s((-1L), ((((p_65 , (*g_198)) , ((((0xB1L < p_65.f0) > (*p_68)) > p_65.f1) | 4UL)) > 0x87FC7DBDL) | p_65.f1)))));
                        (*l_414) = p_68;


                        (*g_134) = (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((p_65.f0 < (safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u((**l_414), 6)), 4))), (safe_mod_func_uint16_t_u_u(g_378.f0, ((l_427[0][3][0] != l_428[0]) || (&g_91 != (void*)0)))))), g_29.f0)), l_411));
                    }
                    (*l_429) = &g_123;

                    ;
                }
                for (g_28 = 3; (g_28 >= 0); g_28 -= 1)
                {
                    unsigned char l_431 = 6UL;
                    int l_432 = (-1L);
                    if ((*p_68))
                    {
                        int l_430 = (-5L);
                        (*p_68) = ((((((l_430 == p_65.f0) , 1UL) , l_431) > l_432) > ((0UL | ((l_411 != g_4) == ((((65535UL > p_65.f0) >= 0L) | g_29.f2) >= l_430))) , p_69)) < g_123);
                    }
                    else
                    {
                        if (l_433)
                            break;
                    }
                }
                l_434 = &l_338;

                ;
            }
            else
            {
                short l_435 = 0x254CL;
                (*p_68) = l_435;
            }

            ;
            return l_411;


        }
        if ((*p_68))
        {
            int l_436 = (-1L);
            if (l_436)
            {
                return p_65.f1;


            }
            else
            {
                return p_69;


            }
        }
        else
        {
            if ((*p_68))
                break;
            if ((safe_add_func_uint8_t_u_u(247UL, p_66)))
            {
                return g_91.f0;


            }
            else
            {
                for (g_102 = (-3); (g_102 > (-29)); g_102 = safe_sub_func_uint8_t_u_u(g_102, 2))
                {
                    for (p_67 = (-30); (p_67 >= 10); p_67 = safe_add_func_int16_t_s_s(p_67, 5))
                    {
                        return p_67;


                    }
                }
                if ((*p_68))
                    continue;
            }
        }
    }
    return g_29.f2;


}







static union U0 func_70(const int p_71, const char * p_72, char p_73, const union U0 p_74, const int * p_75)
{
    int *l_96 = &g_4;
    char *l_112[6];
    unsigned l_141 = 4294967295UL;
    union U1 *l_163 = &g_29;
    union U1 **l_162 = &l_163;
    short l_181 = 0xBDADL;
    union U0 l_205 = {3UL};
    char l_258 = 0L;
    union U0 *l_277 = (void*)0;
    union U0 **l_276 = &l_277;
    const union U0 *l_328 = &l_205;
    int i;
    for (i = 0; i < 6; i++)
        l_112[i] = &g_28;
    for (g_28 = 7; (g_28 >= 19); g_28 = safe_add_func_uint16_t_u_u(g_28, 3))
    {
        int l_111 = (-1L);
        int * const l_133 = &g_4;
        union U1 l_139 = {1UL};
        const int *l_190 = &g_123;
        union U1 **l_226 = &l_163;
        char *l_245[7] = {&g_28, &g_28, (void*)0, &g_28, &g_28, (void*)0, &g_28};
        unsigned short l_254 = 0x1B10L;
        int l_269[1][2];
        int l_323 = 0x300B8868L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_269[i][j] = 0x32BB1F41L;
        }
    }
    l_328 = (((safe_add_func_uint16_t_u_u(g_28, p_73)) <= (*l_96)) , &p_74);

    ;
    (*g_134) = (((*l_96) != p_71) | (*l_96));
    return p_74;

    }





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_29.f0, "g_29.f0", print_hash_value);
    transparent_crc(g_29.f2, "g_29.f2", print_hash_value);
    transparent_crc(g_29.f4, "g_29.f4", print_hash_value);
    transparent_crc(g_91.f0, "g_91.f0", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_378.f0, "g_378.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_510[i][j][k], "g_510[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_526.f0, "g_526.f0", print_hash_value);
    transparent_crc(g_526.f2, "g_526.f2", print_hash_value);
    transparent_crc(g_526.f4, "g_526.f4", print_hash_value);
    transparent_crc(g_581.f0, "g_581.f0", print_hash_value);
    transparent_crc(g_581.f2, "g_581.f2", print_hash_value);
    transparent_crc(g_581.f4, "g_581.f4", print_hash_value);
    transparent_crc(g_603, "g_603", print_hash_value);
    transparent_crc(g_729.f0, "g_729.f0", print_hash_value);
    transparent_crc(g_792, "g_792", print_hash_value);
    transparent_crc(g_843.f0, "g_843.f0", print_hash_value);
    transparent_crc(g_843.f2, "g_843.f2", print_hash_value);
    transparent_crc(g_843.f4, "g_843.f4", print_hash_value);
    transparent_crc(g_868, "g_868", print_hash_value);
    transparent_crc(g_1132, "g_1132", print_hash_value);
    transparent_crc(g_1133, "g_1133", print_hash_value);
    transparent_crc(g_1229, "g_1229", print_hash_value);
    transparent_crc(g_1585.f0, "g_1585.f0", print_hash_value);
    transparent_crc(g_1585.f2, "g_1585.f2", print_hash_value);
    transparent_crc(g_1585.f4, "g_1585.f4", print_hash_value);
    transparent_crc(g_1601, "g_1601", print_hash_value);
    transparent_crc(g_1690, "g_1690", print_hash_value);
    transparent_crc(g_1705.f0, "g_1705.f0", print_hash_value);
    transparent_crc(g_1705.f2, "g_1705.f2", print_hash_value);
    transparent_crc(g_1705.f4, "g_1705.f4", print_hash_value);
    transparent_crc(g_1710, "g_1710", print_hash_value);
    transparent_crc(g_1753, "g_1753", print_hash_value);
    transparent_crc(g_1805, "g_1805", print_hash_value);
    transparent_crc(g_1884, "g_1884", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1917[i][j][k], "g_1917[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
