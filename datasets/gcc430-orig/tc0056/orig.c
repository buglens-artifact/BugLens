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



static int g_31 = (-10L);
static int g_47 = 0x8F585950L;
static unsigned short g_69 = 0UL;
static int *g_70 = &g_47;
static short g_77 = 1L;
static char g_94[6] = {0x6AL, 0x7AL, 0x6AL, 0x7AL, 0x6AL, 0x7AL};
static unsigned char g_99 = 0UL;
static int g_115 = 0x5F205D52L;
static const unsigned short g_139[4][3] = {{65535UL, 65526UL, 65535UL}, {65535UL, 65526UL, 65535UL}, {65535UL, 65526UL, 65535UL}, {65535UL, 65526UL, 65535UL}};
static const unsigned short *g_138 = &g_139[2][2];
static const unsigned short **g_137 = &g_138;
static const unsigned short **g_141 = &g_138;
static unsigned short *g_145 = &g_69;
static unsigned short **g_144 = &g_145;
static const int g_229 = 0x1F1CFE95L;
static short *g_295 = &g_77;
static short **g_294 = &g_295;
static unsigned g_299 = 0x94C8D8B3L;
static short **g_314[5] = {&g_295, (void*)0, &g_295, (void*)0, &g_295};
static int g_366[4][8][8] = {{{0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}, {0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}, {0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}, {0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}, {0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}, {0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}, {0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}, {0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}}, {{0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}, {0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}, {0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}, {0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}, {0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}, {0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}, {0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}, {0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}}, {{0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}, {0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}, {0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}, {0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}, {0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}, {0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}, {0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}, {0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}}, {{0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}, {0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}, {0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}, {0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}, {0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}, {0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}, {0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}, {0xDF0ABBEBL, 0L, 0xD97BF032L, 0x31991713L, 0xD97BF032L, 0L, 0xDF0ABBEBL, (-6L)}}};
static const int *g_385 = &g_47;
static const int **g_384 = &g_385;
static const int ***g_383 = &g_384;
static const int ****g_382 = &g_383;
static int g_390 = (-1L);
static short g_455 = 1L;
static int g_522 = 1L;
static unsigned char g_527 = 0x32L;
static short ***g_550 = &g_294;
static short ****g_549[6][5] = {{&g_550, &g_550, &g_550, &g_550, &g_550}, {&g_550, &g_550, &g_550, &g_550, &g_550}, {&g_550, &g_550, &g_550, &g_550, &g_550}, {&g_550, &g_550, &g_550, &g_550, &g_550}, {&g_550, &g_550, &g_550, &g_550, &g_550}, {&g_550, &g_550, &g_550, &g_550, &g_550}};
static unsigned g_574 = 4294967295UL;
static unsigned char g_587[3] = {0xEBL, 0xEBL, 0xEBL};
static unsigned g_635 = 7UL;
static int g_650 = 0x569463E9L;
static unsigned *g_656 = (void*)0;
static unsigned short ***g_670 = &g_144;
static unsigned short ****g_669 = &g_670;
static char *g_710 = (void*)0;
static char **g_709 = &g_710;
static unsigned * const g_738 = &g_299;
static unsigned * const *g_737 = &g_738;
static unsigned g_751 = 4294967295UL;
static const unsigned char g_788 = 255UL;
static unsigned g_833 = 0x490D68EAL;
static const char g_859 = 0xAEL;
static unsigned char g_962 = 0xF5L;
static unsigned char g_1086 = 1UL;
static unsigned g_1103 = 4294967295UL;
static int *g_1144[10] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
static unsigned g_1153 = 0UL;
static unsigned g_1200[3] = {1UL, 1UL, 1UL};
static int **g_1208 = &g_1144[8];
static char g_1254 = 0x8FL;
static unsigned char * const g_1266 = (void*)0;
static unsigned char * const *g_1265 = &g_1266;
static int g_1273 = (-1L);
static unsigned short g_1355 = 1UL;
static unsigned **g_1408 = &g_656;
static unsigned short g_1445 = 0xA85CL;
static unsigned char *g_1509[9][4] = {{&g_527, &g_962, &g_587[2], &g_587[0]}, {&g_527, &g_962, &g_587[2], &g_587[0]}, {&g_527, &g_962, &g_587[2], &g_587[0]}, {&g_527, &g_962, &g_587[2], &g_587[0]}, {&g_527, &g_962, &g_587[2], &g_587[0]}, {&g_527, &g_962, &g_587[2], &g_587[0]}, {&g_527, &g_962, &g_587[2], &g_587[0]}, {&g_527, &g_962, &g_587[2], &g_587[0]}, {&g_527, &g_962, &g_587[2], &g_587[0]}};
static int g_1570 = 0x66D40C79L;
static unsigned short * const ****g_1613 = (void*)0;
static unsigned short * const *****g_1612 = &g_1613;
static int *g_1620 = &g_390;
static unsigned char g_1628 = 0x24L;
static char g_1641 = 0L;
static short g_1654 = 0x1134L;
static int **g_1672 = (void*)0;
static const unsigned char g_1737[6][8] = {{0x87L, 0UL, 1UL, 0UL, 0x87L, 0UL, 0x87L, 0UL}, {0x87L, 0UL, 1UL, 0UL, 0x87L, 0UL, 0x87L, 0UL}, {0x87L, 0UL, 1UL, 0UL, 0x87L, 0UL, 0x87L, 0UL}, {0x87L, 0UL, 1UL, 0UL, 0x87L, 0UL, 0x87L, 0UL}, {0x87L, 0UL, 1UL, 0UL, 0x87L, 0UL, 0x87L, 0UL}, {0x87L, 0UL, 1UL, 0UL, 0x87L, 0UL, 0x87L, 0UL}};
static int * const *g_1756 = (void*)0;
static int * const ** const g_1755 = &g_1756;
static int * const ** const * const g_1754 = &g_1755;
static const char g_1773 = 0x78L;
static int g_1786[4][1] = {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}};
static unsigned *g_1821 = &g_1200[0];
static unsigned short g_1933 = 0xED04L;
static int g_2076[1] = {0x82B0E82EL};
static char ***g_2111 = &g_709;
static char ****g_2110 = &g_2111;
static int g_2141[3] = {0xF3041FC8L, 0xF3041FC8L, 0xF3041FC8L};



static unsigned func_1(void);
static int func_2(char p_3, short p_4, short p_5, unsigned p_6);
static const unsigned char func_11(unsigned p_12, unsigned short p_13);
static int func_16(int p_17, unsigned char p_18, unsigned p_19, unsigned short p_20);
static char func_25(unsigned p_26, unsigned char p_27, unsigned p_28, short p_29);
static short func_32(const unsigned p_33, unsigned p_34, char p_35);
static int * func_38(int p_39, unsigned p_40, int p_41);
static short func_53(int p_54, int p_55);
static int func_56(int * p_57);
static int * func_58(int * p_59, short p_60);
static unsigned func_1(void)
{
    unsigned l_30[1][5];
    unsigned l_1002 = 0UL;
    int l_1094 = 8L;
    short l_1095 = 0x6897L;
    short l_1096 = 9L;
    unsigned short l_1256[1];
    unsigned l_1297 = 0x2E5A4D66L;
    unsigned short l_1386 = 0x948BL;
    unsigned l_1449 = 2UL;
    int l_1460 = 7L;
    char **l_1464 = &g_710;
    int l_1531 = 0xDB846C2BL;
    const int l_1558 = 1L;
    const int *l_1602[2];
    unsigned short l_1607 = 0xD166L;
    int l_1608 = 0xD44C7324L;
    short l_1611 = (-1L);
    char l_1614 = 0xC1L;
    unsigned char l_1615 = 1UL;
    unsigned l_1616 = 0x6D86B106L;
    int *l_1617 = &g_31;
    unsigned short l_1625 = 0x80DDL;
    short ***l_1635[7][7][5] = {{{&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}}, {{&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}}, {{&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}}, {{&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}}, {{&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}}, {{&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}}, {{&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}, {&g_294, (void*)0, &g_314[3], (void*)0, (void*)0}}};
    unsigned short **l_1663 = (void*)0;
    const unsigned l_1710 = 4294967287UL;
    short l_1785 = 7L;
    int l_1792 = (-1L);
    char *l_1797 = (void*)0;
    unsigned short l_1798 = 0x30A8L;
    int *l_1852 = &l_1460;
    unsigned **l_1868 = (void*)0;
    unsigned char l_1869 = 249UL;
    unsigned char l_1891 = 250UL;
    int l_1896 = 0x6A4A224EL;
    const unsigned short l_1915 = 0x29C3L;
    unsigned l_1934 = 0x087F3C05L;
    char l_1951 = 0x83L;
    char l_1962 = (-1L);
    unsigned l_1972 = 4294967295UL;
    int l_2060 = (-1L);
    int **l_2062 = &g_1144[7];
    short l_2122[6][4] = {{(-1L), 0x9165L, 0xBB3AL, 0x9165L}, {(-1L), 0x9165L, 0xBB3AL, 0x9165L}, {(-1L), 0x9165L, 0xBB3AL, 0x9165L}, {(-1L), 0x9165L, 0xBB3AL, 0x9165L}, {(-1L), 0x9165L, 0xBB3AL, 0x9165L}, {(-1L), 0x9165L, 0xBB3AL, 0x9165L}};
    unsigned short *****l_2140 = &g_669;
    unsigned *l_2144 = &g_1200[0];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_30[i][j] = 4294967295UL;
    }
    for (i = 0; i < 1; i++)
        l_1256[i] = 7UL;
    for (i = 0; i < 2; i++)
        l_1602[i] = (void*)0;
    if (func_2((((safe_lshift_func_uint16_t_u_s((~((safe_mul_func_int8_t_s_s((func_11(((0x03D9L != (safe_sub_func_int32_t_s_s(func_16((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((func_25((l_30[0][3] , (g_31 > func_32(l_30[0][0], g_31, g_31))), ((l_30[0][3] <= l_1002) , l_30[0][2]), l_30[0][4], l_30[0][1]) | l_1002), g_139[2][2])), 0x32CD0DE7L)), l_30[0][2], l_30[0][3], l_1002), g_635))) > l_1002), g_1086) , l_1002), l_30[0][3])) & l_1094)), 6)) < (-4L)) != g_635), l_1002, l_1095, l_1096))
    {
        unsigned char l_1255[7][7][5] = {{{0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}}, {{0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}}, {{0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}}, {{0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}}, {{0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}}, {{0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}}, {{0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}, {0UL, 0xDDL, 0xBAL, 0UL, 1UL}}};
        unsigned l_1260 = 0UL;
        unsigned l_1274 = 0x6F7CD947L;
        int l_1286 = (-7L);
        unsigned short l_1304 = 0xC8A9L;
        int l_1323 = 5L;
        unsigned short l_1338 = 0xCAD5L;
        unsigned char l_1373 = 0xBDL;
        short l_1384 = (-1L);
        unsigned l_1385[10];
        unsigned char *l_1395 = &g_1086;
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_1385[i] = 0x395CD36EL;
        (**g_383) = &l_1094;

        ;
        for (g_299 = (-30); (g_299 != 51); ++g_299)
        {
            unsigned l_1249 = 0x69688DDDL;
            int l_1252 = 0x1A1A8199L;
            int *l_1264 = &g_31;
            char l_1295[3][9][8] = {{{0xA4L, 0xADL, 0x97L, (-4L), 0xADL, 0xFAL, 0x59L, 0x8EL}, {0xA4L, 0xADL, 0x97L, (-4L), 0xADL, 0xFAL, 0x59L, 0x8EL}, {0xA4L, 0xADL, 0x97L, (-4L), 0xADL, 0xFAL, 0x59L, 0x8EL}, {0xA4L, 0xADL, 0x97L, (-4L), 0xADL, 0xFAL, 0x59L, 0x8EL}, {0xA4L, 0xADL, 0x97L, (-4L), 0xADL, 0xFAL, 0x59L, 0x8EL}, {0xA4L, 0xADL, 0x97L, (-4L), 0xADL, 0xFAL, 0x59L, 0x8EL}, {0xA4L, 0xADL, 0x97L, (-4L), 0xADL, 0xFAL, 0x59L, 0x8EL}, {0xA4L, 0xADL, 0x97L, (-4L), 0xADL, 0xFAL, 0x59L, 0x8EL}, {0xA4L, 0xADL, 0x97L, (-4L), 0xADL, 0xFAL, 0x59L, 0x8EL}}, {{0xA4L, 0xADL, 0x97L, (-4L), 0xADL, 0xFAL, 0x59L, 0x8EL}, {0xA4L, 0xADL, 0x97L, (-4L), 0xADL, 0xFAL, 0x59L, 0x8EL}, {0xA4L, 0xADL, 0x97L, (-4L), 0xADL, 0xFAL, 0x59L, 0x8EL}, {0xA4L, 0xADL, 0x97L, (-4L), 0xADL, 0xFAL, 0x59L, 0x8EL}, {0xA4L, 0xADL, 0x97L, (-4L), 0xADL, 0xFAL, 0x59L, 0x8EL}, {0xA4L, 0xADL, 0x97L, (-4L), 0xADL, 0xFAL, 0x59L, 0x8EL}, {0xA4L, 0xADL, 0x97L, (-4L), 0xADL, 0xFAL, 0x59L, 0x8EL}, {0xA4L, 0xADL, 0x97L, (-4L), 0xADL, 0xFAL, 0x59L, 0x8EL}, {0xA4L, 0xADL, 0x97L, (-4L), 0xADL, 0xFAL, 0x59L, 0x8EL}}, {{0xA4L, 0xADL, 0x97L, (-4L), 0xADL, 0xFAL, 0x59L, 0x8EL}, {0xA4L, 0xADL, 0x97L, (-4L), 0xADL, 0xFAL, 0x59L, 0x8EL}, {0xA4L, 0xADL, 0x97L, (-4L), 0xADL, 0xFAL, 0x59L, 0x8EL}, {0xA4L, 0xADL, 0x97L, (-4L), 0xADL, 0xFAL, 0x59L, 0x8EL}, {0xA4L, 0xADL, 0x97L, (-4L), 0xADL, 0xFAL, 0x59L, 0x8EL}, {0xA4L, 0xADL, 0x97L, (-4L), 0xADL, 0xFAL, 0x59L, 0x8EL}, {0xA4L, 0xADL, 0x97L, (-4L), 0xADL, 0xFAL, 0x59L, 0x8EL}, {0xA4L, 0xADL, 0x97L, (-4L), 0xADL, 0xFAL, 0x59L, 0x8EL}, {0xA4L, 0xADL, 0x97L, (-4L), 0xADL, 0xFAL, 0x59L, 0x8EL}}};
            short l_1302 = 0xA066L;
            int l_1315 = 1L;
            unsigned l_1340 = 4294967295UL;
            unsigned short **** const *l_1363[8][10] = {{&g_669, (void*)0, &g_669, (void*)0, &g_669, &g_669, &g_669, (void*)0, &g_669, (void*)0}, {&g_669, (void*)0, &g_669, (void*)0, &g_669, &g_669, &g_669, (void*)0, &g_669, (void*)0}, {&g_669, (void*)0, &g_669, (void*)0, &g_669, &g_669, &g_669, (void*)0, &g_669, (void*)0}, {&g_669, (void*)0, &g_669, (void*)0, &g_669, &g_669, &g_669, (void*)0, &g_669, (void*)0}, {&g_669, (void*)0, &g_669, (void*)0, &g_669, &g_669, &g_669, (void*)0, &g_669, (void*)0}, {&g_669, (void*)0, &g_669, (void*)0, &g_669, &g_669, &g_669, (void*)0, &g_669, (void*)0}, {&g_669, (void*)0, &g_669, (void*)0, &g_669, &g_669, &g_669, (void*)0, &g_669, (void*)0}, {&g_669, (void*)0, &g_669, (void*)0, &g_669, &g_669, &g_669, (void*)0, &g_669, (void*)0}};
            int i, j, k;
            for (g_751 = 0; (g_751 <= 3); g_751 += 1)
            {
                int l_1258 = 0xCB74EEF1L;
                int i;
                if (g_94[g_751])
                    break;
                for (g_390 = 3; (g_390 >= 0); g_390 -= 1)
                {
                    unsigned short *l_1236 = &g_69;
                    int **l_1246[3][5] = {{&g_70, &g_70, &g_70, &g_70, &g_70}, {&g_70, &g_70, &g_70, &g_70, &g_70}, {&g_70, &g_70, &g_70, &g_70, &g_70}};
                    int ***l_1245 = &l_1246[0][4];
                    unsigned char *l_1247 = &g_587[1];
                    unsigned char *l_1248[5];
                    char *l_1253 = &g_1254;
                    char l_1257 = (-5L);
                    unsigned l_1259 = 0UL;
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_1248[i] = &g_1086;
                    l_1259 = (l_1258 = ((safe_rshift_func_uint8_t_u_s((g_99 = (func_16((safe_rshift_func_int8_t_s_u(((safe_sub_func_int8_t_s_s(g_366[g_390][(g_751 + 4)][(g_390 + 4)], g_366[g_390][(g_751 + 1)][(g_751 + 1)])) < (l_1236 == (((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_s(g_94[g_751], (((*l_1236) = func_16((g_31 = (safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((l_1245 == (*g_382)), l_30[0][2])), (l_1249 = ((*l_1247) = 1UL))))), (((((*l_1253) = ((safe_add_func_int8_t_s_s(((func_11(l_1252, l_1095) ^ (*g_738)) & l_30[0][3]), g_390)) < l_1252)) , 0x3584L) != l_1255[0][6][4]) ^ g_99), l_1252, (*g_145))) != l_1255[0][3][2]))) , g_94[g_751]), (**g_141))) > g_94[g_751]) , (void*)0))), 6)), g_366[1][2][7], l_1256[0], (**g_137)) >= l_1255[0][1][4])), l_1257)) >= (*g_138)));

                    ;
                }
            }
            if (l_1260)
                break;
            for (g_574 = 0; (g_574 == 10); g_574++)
            {
                if (l_1252)
                    break;
                g_115 = (65535UL | 65535UL);
            }
            if (((*l_1264) = (((safe_unary_minus_func_int8_t_s(l_1260)) == l_1260) || 0xED6D37A2L)))
            {
                unsigned *l_1269[4] = {(void*)0, &l_30[0][4], (void*)0, &l_30[0][4]};
                int l_1272 = (-5L);
                unsigned char l_1283 = 0xEFL;
                char l_1287 = 0x1DL;
                int i;
                (*l_1264) = (g_1265 == (void*)0);
                if ((*l_1264))
                    continue;
                if (((g_751 = (((*l_1264) , (*g_145)) ^ ((*g_669) != (void*)0))) >= (l_1260 <= (func_16((safe_rshift_func_uint16_t_u_s((l_1272 , ((l_1272 == (((****g_669) , (!(****g_669))) & l_1095)) == g_1273)), l_1274)), l_1274, l_1094, l_1256[0]) , 0xD6L))))
                {
                    unsigned char l_1279 = 1UL;
                    short *l_1282 = &g_77;
                    unsigned char *l_1293 = (void*)0;
                    unsigned char *l_1294 = &g_1086;
                    int l_1296 = (-5L);
                    short l_1303[1];
                    int **l_1319 = &l_1264;
                    int ***l_1318[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1303[i] = 0x16F7L;
                    for (i = 0; i < 1; i++)
                        l_1318[i] = &l_1319;
                    (*l_1264) = (safe_lshift_func_int16_t_s_s(func_16(((safe_add_func_int32_t_s_s(l_1274, ((l_1286 = func_11(l_1279, (((safe_sub_func_int32_t_s_s(l_1260, ((l_1282 == (void*)0) , (&l_1252 != (***g_382))))) || l_1283) , (safe_rshift_func_int16_t_s_u(l_1002, (**g_141)))))) >= l_1287))) , l_1283), l_1256[0], g_574, (*l_1264)), 7));
                    (**g_383) = (func_16(l_1255[0][6][4], func_11(func_16((func_16((safe_lshift_func_int8_t_s_u((func_16(((*l_1264) = (safe_unary_minus_func_uint32_t_u((*g_738)))), (l_1296 = (!(safe_add_func_uint32_t_u_u((4294967290UL ^ ((((*l_1294) = l_1096) , (func_16(l_1096, l_1283, (+0x16F1FA95L), (*g_145)) > l_1295[0][7][3])) & l_30[0][2])), l_1279)))), l_1249, (**g_141)) , l_1287), 6)), l_1274, g_751, (**g_144)) & l_1256[0]), l_1297, l_1260, (**g_144)), (***g_670)), g_635, (**g_144)) , (void*)0);
                    if ((safe_sub_func_int8_t_s_s(((~(safe_add_func_int16_t_s_s(((((+(((*l_1264) = l_1302) , ((l_1286 = func_16(((**g_144) <= (****g_669)), l_1303[0], l_1255[0][6][4], (l_1094 = (func_16(((l_1304 , (safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((**g_737), ((l_1304 && ((0xA68B0F41L && 1L) || l_1274)) > 0x88913FC4L))) , 7UL), 8L)), 14)), l_30[0][3])), l_1303[0]))) ^ 0x4000L), l_1303[0], l_1315, (**g_137)) > 1UL)))) || (**g_737)))) , 0xEAL) | l_1256[0]) >= g_229), l_1297))) || l_1096), l_1303[0])))
                    {
                        return l_1303[0];
                    }
                    else
                    {
                        int ****l_1320 = &l_1318[0];
                        (*l_1319) = ((((((255UL > func_16(((safe_mod_func_uint8_t_u_u((&l_1252 == ((((*l_1320) = l_1318[0]) == ((**l_1319) , (void*)0)) , (***g_382))), g_229)) == (((((safe_add_func_uint32_t_u_u(0x7ECB1B3CL, (0x6DC243FAL == l_1283))) != (-3L)) != l_1260) > 0xF615L) <= (*l_1264))), (**l_1319), g_47, l_1287)) , (*g_709)) != (void*)0) < l_1323) | (**g_737)) , (void*)0);

                        ;
                        (***g_382) = (g_70 = &g_31);

                        ;
                        ;
                    }

                    ;
                    ;
                    ;
                }
                else
                {
                    (***g_382) = &l_1286;

                    ;
                }

                ;
                ;
            }
            else
            {
                unsigned short l_1324[10] = {0x2F70L, 65533UL, 0x2F70L, 65533UL, 0x2F70L, 65533UL, 0x2F70L, 65533UL, 0x2F70L, 65533UL};
                unsigned char *l_1325 = &g_1086;
                unsigned char l_1334 = 254UL;
                int *l_1335 = &l_1252;
                int *l_1336 = &g_522;
                unsigned char l_1337 = 0xC4L;
                unsigned l_1377 = 1UL;
                int i;
                (**g_383) = (**g_383);
                (***g_382) = (***g_382);
                if (((((((safe_rshift_func_int8_t_s_s(((void*)0 == (*g_737)), ((safe_lshift_func_int16_t_s_s((((((safe_mod_func_uint8_t_u_u(l_1094, func_11((*l_1264), (**g_141)))) ^ (((*l_1336) = (l_1304 | ((*l_1335) = ((((+(g_1200[0] = (l_1256[0] <= (safe_mul_func_uint8_t_u_u(l_1334, 0xC1L))))) || 0xFFAE919BL) || 4UL) >= 4294967295UL)))) != l_1337)) , l_1338) ^ l_1323) & 1UL), (*l_1264))) && 0x573BF523L))) & l_1256[0]) >= l_30[0][3]) & (*l_1264)) != l_1323) && 0x10D4L))
                {
                    int *l_1339[4][8] = {{&g_390, (void*)0, (void*)0, (void*)0, &g_390, (void*)0, (void*)0, (void*)0}, {&g_390, (void*)0, (void*)0, (void*)0, &g_390, (void*)0, (void*)0, (void*)0}, {&g_390, (void*)0, (void*)0, (void*)0, &g_390, (void*)0, (void*)0, (void*)0}, {&g_390, (void*)0, (void*)0, (void*)0, &g_390, (void*)0, (void*)0, (void*)0}};
                    int i, j;
                    for (l_1095 = 0; (l_1095 <= 9); l_1095 += 1)
                    {
                        int i;
                        (**g_383) = g_1144[l_1095];

                        ;
                        (**g_383) = l_1339[2][2];

                        ;
                        (*l_1335) = ((((**g_737) ^ l_1340) && (*g_738)) & (*g_145));
                    }

                    ;
                }
                else
                {
                    unsigned l_1341 = 1UL;
                    l_1264 = &l_1252;

                    ;
                    (*g_384) = (***g_382);
                    for (g_751 = (-9); (g_751 < 53); g_751 = safe_add_func_int8_t_s_s(g_751, 6))
                    {
                        char l_1351 = 0xB9L;
                        int l_1352 = 0L;
                        unsigned short l_1360 = 9UL;
                        int *l_1372 = (void*)0;
                        unsigned *l_1374 = &g_833;
                        short *l_1375 = &l_1095;
                        const unsigned l_1376 = 1UL;
                        if (l_1341)
                            break;
                        (*l_1335) = func_11((safe_unary_minus_func_uint16_t_u(((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u((((**g_144) > (safe_lshift_func_int16_t_s_s(((l_1351 < (l_1352 = (*g_738))) , (l_1002 , ((safe_rshift_func_int16_t_s_u(g_1355, 11)) , ((safe_mod_func_int16_t_s_s((&g_656 != &g_656), (safe_sub_func_uint16_t_u_u(l_1341, l_1286)))) && 0L)))), l_1341))) == 0x2FL), 3)), 3)) | l_1360))), (**g_137));
                        (***g_382) = &l_1252;

                        ;
                    }

                    ;
                }

                ;
                ;
                (*l_1336) = (((*l_1335) == 0x78L) & ((((*l_1336) != (*l_1336)) , &g_1153) == ((safe_sub_func_uint8_t_u_u(((*l_1325) = (safe_rshift_func_int16_t_s_u(0x2B5CL, 3))), func_16(((((safe_mod_func_uint16_t_u_u((func_11((*l_1335), l_1384) <= (*l_1264)), (*l_1336))) || (*l_1335)) && l_1385[4]) , l_1386), g_366[2][4][7], (*l_1264), (**g_137)))) , l_1336)));

                ;
            }

            ;
            ;
        }


        ;
        (***g_382) = &l_1094;

        ;
    }
    else
    {
        unsigned short l_1402 = 1UL;
        int *l_1403 = (void*)0;
        int *l_1404 = &l_1094;
        unsigned short ** const ***l_1437[4];
        unsigned char l_1450 = 0x31L;
        int l_1459 = 1L;
        unsigned l_1547 = 0x35082130L;
        char *l_1568 = &g_1254;
        int i;
        for (i = 0; i < 4; i++)
            l_1437[i] = (void*)0;
        (*l_1404) = (((safe_rshift_func_int8_t_s_u(0xAEL, 3)) < (safe_rshift_func_uint16_t_u_s(0x1D9EL, 4))) != ((safe_sub_func_uint16_t_u_u(65535UL, l_1402)) < (func_53(l_30[0][3], l_1402) != l_1095)));


        ;
        ;
        for (l_1094 = 0; (l_1094 <= 2); l_1094 += 1)
        {
            int *l_1405[2];
            unsigned * const *l_1415 = &g_656;
            unsigned l_1446[7];
            int i;
            for (i = 0; i < 2; i++)
                l_1405[i] = (void*)0;
            for (i = 0; i < 7; i++)
                l_1446[i] = 5UL;
            (***g_382) = l_1405[1];

            ;
            for (g_69 = 0; (g_69 <= 2); g_69 += 1)
            {
                const unsigned char l_1418 = 0x9AL;
                int l_1422 = 0x44B81A94L;
                unsigned char l_1440 = 0xBBL;
                int l_1463 = 0xA4D1E68EL;
                for (g_299 = 0; (g_299 <= 0); g_299 += 1)
                {
                    unsigned short *l_1406 = &l_1386;
                    unsigned ***l_1407 = (void*)0;
                    unsigned char *l_1414 = &g_962;
                    char *l_1421 = &g_94[3];
                    int l_1439 = 0xCD16FA09L;
                    short *l_1461 = &l_1095;
                    unsigned short l_1462 = 7UL;
                    int i;
                    if (((((*l_1406) = l_1256[g_299]) & ((g_1408 = (void*)0) != (void*)0)) >= (safe_unary_minus_func_int32_t_s((((((~((safe_lshift_func_uint16_t_u_s(((+(((safe_mod_func_int8_t_s_s(g_587[g_69], ((*l_1414) = 0x64L))) > ((void*)0 == l_1415)) <= (safe_mod_func_uint16_t_u_u((l_1418 > ((*l_1421) = (safe_rshift_func_uint16_t_u_u((l_1096 <= l_1094), 13)))), l_1418)))) == (**g_737)), 8)) != (**g_737))) , l_1422) & 65527UL) >= g_69) > (*l_1404))))))
                    {
                        char l_1438 = 0x17L;
                        unsigned *l_1447[8][7][4] = {{{&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}}, {{&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}}, {{&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}}, {{&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}}, {{&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}}, {{&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}}, {{&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}}, {{&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}, {&g_1153, &g_635, &g_635, &g_574}}};
                        int l_1448 = (-3L);
                        int i, j, k;
                        g_115 = (safe_lshift_func_uint8_t_u_s(((9UL == (**g_141)) | ((g_833 & (((*l_1421) = ((safe_sub_func_int16_t_s_s(g_587[g_69], ((*l_1406) = 0UL))) != (safe_mul_func_int8_t_s_s((func_16((safe_sub_func_uint8_t_u_u(((*l_1414) = 0UL), (g_527 = (safe_lshift_func_uint8_t_u_s((~(l_1439 = ((safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s((l_1437[2] == (void*)0), 12)) <= l_1438), l_1438)) >= 0x6CC3L))), l_30[0][3]))))), l_1418, g_587[g_69], l_1440) >= (-6L)), l_1438)))) > l_1418)) , l_1438)), 7));
                        g_390 = (safe_sub_func_int8_t_s_s((l_1438 >= 0x794DCF94L), ((*l_1414) = (safe_add_func_int8_t_s_s(func_16(g_1445, ((*l_1414) = ((l_1422 >= (*l_1404)) == l_1446[2])), (l_1448 = (l_1440 < 0xD7L)), l_1449), l_1418)))));
                    }
                    else
                    {
                        (***g_382) = (**g_383);
                    }

                    ;
                    g_522 = (l_1463 = ((**g_669) != (func_16(l_1096, ((l_1439 = (((-1L) & (!l_1450)) != ((safe_sub_func_int16_t_s_s(l_1002, (l_1256[0] & func_16((g_587[g_69] < ((*l_1461) = (((*l_1421) = ((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((l_1460 = (safe_sub_func_uint16_t_u_u(l_1459, (0xA9L <= l_1439)))) <= 7L), g_390)), (*g_738))) , l_30[0][2])) >= l_1439))), l_1462, l_30[0][0], l_1449)))) < l_1462))) ^ (**g_737)), g_587[g_69], (*g_138)) , (*g_670))));
                }
            }
        }

        ;
        if ((((void*)0 != l_1464) && (**g_137)))
        {
            const int l_1465 = 0x77445988L;
            int **l_1476[10] = {&g_1144[8], &g_1144[8], &g_1144[8], &g_1144[8], &g_1144[8], &g_1144[8], &g_1144[8], &g_1144[8], &g_1144[8], &g_1144[8]};
            int l_1498 = 0x56D75EB1L;
            int i;
            if (l_1465)
            {
                unsigned l_1479 = 0x3C8A3400L;
                int l_1481[5];
                char ***l_1488 = &g_709;
                int i;
                for (i = 0; i < 5; i++)
                    l_1481[i] = 0xCBF39D99L;
                for (g_574 = 0; (g_574 <= 0); g_574 += 1)
                {
                    unsigned *l_1480 = &g_1153;
                    int l_1525 = 4L;
                    int l_1534 = 9L;
                    char *l_1537 = &g_1254;
                    int i;
                    if ((func_11(((*l_1480) = (((safe_mul_func_int16_t_s_s((l_1256[g_574] != (safe_mod_func_int16_t_s_s(((l_1465 | ((safe_mul_func_uint16_t_u_u((**g_141), ((((**g_737) = (l_1386 , (safe_mul_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(0xE1L, 5)) ^ ((l_1386 , l_1476[9]) == ((safe_mod_func_uint32_t_u_u(((*g_145) || 0x23E7L), (*g_738))) , &g_1144[8]))), 0x8FL)))) | 0xC4E39DB8L) , 0x9FE3L))) != 0x22L)) || (*g_738)), (***g_670)))), l_1479)) , (void*)0) != (void*)0)), l_1481[3]) , l_1479))
                    {
                        const unsigned char l_1485 = 255UL;
                        unsigned char *l_1489 = (void*)0;
                        unsigned char *l_1490[8] = {&g_587[2], &g_587[2], &g_587[1], &g_587[2], &g_587[2], &g_587[1], &g_587[2], &g_587[2]};
                        int i;
                        (*l_1404) = (((safe_add_func_uint32_t_u_u((*g_738), (func_11((safe_unary_minus_func_int8_t_s((((l_1095 < l_1485) & (safe_lshift_func_uint8_t_u_u(l_1465, (g_962 = (l_1465 , ((((l_1479 ^ g_650) , l_1488) != (void*)0) || g_390)))))) < (*l_1404)))), l_1481[3]) >= l_1256[g_574]))) >= 0xC216L) || 7L);
                        (**g_383) = &l_1481[1];

                        ;
                    }
                    else
                    {
                        char l_1495 = 0x71L;
                        char l_1497 = 0xA0L;
                        unsigned char *l_1506 = (void*)0;
                        unsigned char **l_1505 = &l_1506;
                        unsigned char *l_1508 = (void*)0;
                        unsigned char **l_1507[9] = {&l_1508, &l_1508, (void*)0, &l_1508, &l_1508, (void*)0, &l_1508, &l_1508, (void*)0};
                        int i;
                        (*l_1404) = (0L >= (safe_mod_func_int8_t_s_s((((safe_add_func_int8_t_s_s(l_1481[1], g_1200[0])) | l_1256[g_574]) ^ 253UL), l_1465)));
                        (***g_382) = l_1480;

                        ;
                    }

                    ;
                    (*l_1404) = ((**g_384) || (*l_1404));
                    (*g_384) = (*g_384);
                    for (g_527 = 0; (g_527 <= 0); g_527 += 1)
                    {
                        unsigned char l_1524 = 255UL;
                        char *l_1526 = &g_94[5];
                        int l_1532 = 1L;
                        unsigned char *l_1533 = &g_962;
                        (**g_383) = (*g_384);
                        l_1094 = (safe_rshift_func_uint16_t_u_u((((*l_1526) = func_16(((((safe_mod_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(l_1479, 4)), (((*g_145) = (*g_138)) && (safe_rshift_func_uint16_t_u_u(l_1256[g_574], ((void*)0 == &g_738)))))) , (((~(safe_lshift_func_uint16_t_u_u((**g_144), (safe_lshift_func_uint8_t_u_s((func_11((l_1481[1] , ((*l_1480) = l_1256[0])), (***g_670)) & (****g_669)), 6))))) , (**g_141)) , l_1524)), (**g_137))) , (*g_738)) & 0x497C0E7CL) == l_1256[g_574]), l_1525, l_1481[2], (**g_137))) && l_1498), 7));

                        ;
                        (***g_382) = &l_1460;

                        ;
                        (*l_1404) = (*g_385);
                    }

                    ;
                }


            }
            else
            {
                int *l_1538 = (void*)0;
                (*g_384) = l_1538;

                ;
                (**g_383) = &l_1531;

                ;
            }


        }
        else
        {
            int **l_1545 = &g_1144[8];
            int ***l_1546 = &g_1208;
            int l_1548 = 0x9E62C905L;
            int *l_1549[4];
            int i;
            for (i = 0; i < 4; i++)
                l_1549[i] = &g_31;
            l_1460 = ((l_1531 = ((*l_1404) = ((**g_737) && (((safe_lshift_func_int16_t_s_s(0xFCC5L, ((~((safe_rshift_func_int8_t_s_s(func_53((l_1545 != ((*l_1546) = &g_1144[8])), (func_53(l_1547, l_1548) || (((void*)0 != &g_670) <= 0xEC29L))), l_1548)) > l_1096)) , l_1531))) != (*l_1404)) | l_1096)))) >= 0xFCE9C4E5L);
        }


        for (l_1450 = 0; (l_1450 <= 2); l_1450 += 1)
        {
            short *l_1559 = (void*)0;
            short *l_1560 = &l_1095;
            int l_1569 = 0xE75401B8L;
            int i;
            l_1569 = ((safe_rshift_func_int8_t_s_s(((*l_1568) = (g_587[l_1450] >= l_1558)), g_366[0][1][0])) || g_587[l_1450]);
            if (g_1570)
                continue;
            if (l_1569)
                continue;
        }
    }




    ;
    ;

    ;
    for (g_1570 = 20; (g_1570 != (-11)); g_1570--)
    {
        unsigned short *****l_1575[1];
        unsigned short ******l_1576 = &l_1575[0];
        int l_1577 = (-2L);
        int i;
        for (i = 0; i < 1; i++)
            l_1575[i] = &g_669;
        if ((safe_sub_func_uint8_t_u_u(l_1558, ((((&g_669 == ((*l_1576) = l_1575[0])) < (l_1577 , func_11(((l_1577 == l_1577) || l_1577), l_1002))) > l_1297) < g_1445))))
        {
            unsigned char l_1580 = 0xDEL;
            int *l_1601[10];
            int i;
            for (i = 0; i < 10; i++)
                l_1601[i] = &g_31;
            for (g_1445 = (-30); (g_1445 == 33); ++g_1445)
            {
                unsigned *l_1595 = &l_30[0][4];
                int *l_1596 = &l_1577;
                unsigned *l_1597[2][3][8];
                char *l_1598[5][4] = {{&g_94[2], &g_94[2], &g_1254, &g_1254}, {&g_94[2], &g_94[2], &g_1254, &g_1254}, {&g_94[2], &g_94[2], &g_1254, &g_1254}, {&g_94[2], &g_94[2], &g_1254, &g_1254}, {&g_94[2], &g_94[2], &g_1254, &g_1254}};
                unsigned *l_1599 = &g_1153;
                int *l_1600[8];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 8; k++)
                            l_1597[i][j][k] = &g_1200[0];
                    }
                }
                for (i = 0; i < 8; i++)
                    l_1600[i] = &l_1460;
                l_1600[2] = l_1596;


                (***g_382) = l_1601[2];

                ;
                return (**g_737);
            }
        }
        else
        {
            return l_1096;


        }
        if (l_1095)
            continue;
    }
    l_1602[0] = &l_1558;


    if (((*l_1617) = (safe_add_func_int32_t_s_s((((safe_mul_func_uint8_t_u_u((l_1607 , func_11(g_527, (func_16(g_522, (l_1608 , (safe_lshift_func_int16_t_s_s((0L & ((**g_737) = (l_1611 , ((*g_138) || ((((void*)0 == g_1612) >= (*g_738)) && 0x8E89E184L))))), 1))), g_139[2][2], l_1614) && 4L))), l_1615)) & l_1616) >= 0L), g_99))))
    {
        int *l_1621 = &g_390;
        short l_1657[1][7] = {{1L, 1L, 0L, 1L, 1L, 0L, 1L}};
        int l_1704 = 0x5A27E641L;
        int l_1744[5][6][6] = {{{0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}, {0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}, {0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}, {0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}, {0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}, {0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}}, {{0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}, {0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}, {0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}, {0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}, {0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}, {0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}}, {{0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}, {0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}, {0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}, {0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}, {0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}, {0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}}, {{0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}, {0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}, {0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}, {0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}, {0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}, {0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}}, {{0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}, {0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}, {0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}, {0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}, {0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}, {0L, 7L, (-10L), 1L, 0x1D63D518L, 0xABF772A0L}}};
        int ***l_1753[3];
        int ****l_1752 = &l_1753[0];
        char l_1775 = 0L;
        unsigned * const *l_1796 = &g_738;
        unsigned ***l_1801 = (void*)0;
        unsigned char l_1832 = 8UL;
        unsigned short *** const * const l_1841[3][1][3] = {{{&g_670, &g_670, &g_670}}, {{&g_670, &g_670, &g_670}}, {{&g_670, &g_670, &g_670}}};
        unsigned short *** const * const *l_1840 = &l_1841[2][0][2];
        int **l_1842 = (void*)0;
        unsigned l_1876 = 0UL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1753[i] = (void*)0;
        for (l_1608 = (-13); (l_1608 != (-3)); l_1608 = safe_add_func_int32_t_s_s(l_1608, 3))
        {
            char l_1624 = 0x9DL;
            short l_1677[3];
            short l_1680[3][5][9] = {{{1L, 0xBFEBL, 0xBFEBL, 1L, 0L, (-1L), 0xCD13L, (-1L), 0xA62BL}, {1L, 0xBFEBL, 0xBFEBL, 1L, 0L, (-1L), 0xCD13L, (-1L), 0xA62BL}, {1L, 0xBFEBL, 0xBFEBL, 1L, 0L, (-1L), 0xCD13L, (-1L), 0xA62BL}, {1L, 0xBFEBL, 0xBFEBL, 1L, 0L, (-1L), 0xCD13L, (-1L), 0xA62BL}, {1L, 0xBFEBL, 0xBFEBL, 1L, 0L, (-1L), 0xCD13L, (-1L), 0xA62BL}}, {{1L, 0xBFEBL, 0xBFEBL, 1L, 0L, (-1L), 0xCD13L, (-1L), 0xA62BL}, {1L, 0xBFEBL, 0xBFEBL, 1L, 0L, (-1L), 0xCD13L, (-1L), 0xA62BL}, {1L, 0xBFEBL, 0xBFEBL, 1L, 0L, (-1L), 0xCD13L, (-1L), 0xA62BL}, {1L, 0xBFEBL, 0xBFEBL, 1L, 0L, (-1L), 0xCD13L, (-1L), 0xA62BL}, {1L, 0xBFEBL, 0xBFEBL, 1L, 0L, (-1L), 0xCD13L, (-1L), 0xA62BL}}, {{1L, 0xBFEBL, 0xBFEBL, 1L, 0L, (-1L), 0xCD13L, (-1L), 0xA62BL}, {1L, 0xBFEBL, 0xBFEBL, 1L, 0L, (-1L), 0xCD13L, (-1L), 0xA62BL}, {1L, 0xBFEBL, 0xBFEBL, 1L, 0L, (-1L), 0xCD13L, (-1L), 0xA62BL}, {1L, 0xBFEBL, 0xBFEBL, 1L, 0L, (-1L), 0xCD13L, (-1L), 0xA62BL}, {1L, 0xBFEBL, 0xBFEBL, 1L, 0L, (-1L), 0xCD13L, (-1L), 0xA62BL}}};
            int l_1684 = (-6L);
            int *l_1697[7] = {&g_522, &g_522, &l_1684, &g_522, &g_522, &l_1684, &g_522};
            unsigned short ***l_1707 = (void*)0;
            unsigned char l_1711 = 255UL;
            char * const l_1722 = (void*)0;
            unsigned l_1726 = 0x19818D0DL;
            short l_1740 = 0xD134L;
            unsigned l_1776[1];
            unsigned short l_1783 = 0x5582L;
            int l_1784 = (-1L);
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1677[i] = 0L;
            for (i = 0; i < 1; i++)
                l_1776[i] = 0x8E4CDCC1L;
            l_1621 = g_1620;

            ;
            if (((safe_lshift_func_int16_t_s_u(l_1624, (*g_138))) > ((((((**g_737) = func_16(l_1624, l_1625, (*l_1621), (l_1624 || (g_1628 == l_1624)))) , l_1624) & l_1624) != 255UL) > (*g_1620))))
            {
                int *l_1631[10][10][2] = {{{(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}}, {{(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}}, {{(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}}, {{(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}}, {{(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}}, {{(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}}, {{(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}}, {{(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}}, {{(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}}, {{(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}, {(void*)0, &g_31}}};
                short ***l_1632 = &g_294;
                short l_1636 = 0x2DC5L;
                int l_1651 = (-5L);
                char ***l_1671[7] = {&l_1464, &l_1464, &g_709, &l_1464, &l_1464, &g_709, &l_1464};
                int i, j, k;
                for (g_99 = 10; (g_99 > 50); ++g_99)
                {
                    short ****l_1633 = &l_1632;
                    short ****l_1634 = &g_550;
                    (***g_382) = l_1631[4][6][0];
                    (*g_384) = (***g_382);
                    l_1636 = (((*l_1634) = ((*l_1633) = l_1632)) != l_1635[1][5][3]);
                    if (l_1624)
                        continue;
                }

                ;
                (*g_384) = (void*)0;

                ;
                for (g_1570 = (-5); (g_1570 == 14); g_1570++)
                {
                    unsigned l_1650 = 4294967295UL;
                    char l_1655[5][4] = {{(-6L), 1L, (-6L), 1L}, {(-6L), 1L, (-6L), 1L}, {(-6L), 1L, (-6L), 1L}, {(-6L), 1L, (-6L), 1L}, {(-6L), 1L, (-6L), 1L}};
                    unsigned short * const *l_1673[4] = {&g_145, (void*)0, &g_145, (void*)0};
                    int i, j;
                }
                if (l_1677[2])
                    break;
            }
            else
            {
                int **l_1681[10][8][3] = {{{&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}}, {{&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}}, {{&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}}, {{&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}}, {{&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}}, {{&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}}, {{&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}}, {{&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}}, {{&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}}, {{&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}, {&l_1621, &g_1620, &l_1617}}};
                char l_1712 = 1L;
                int i, j, k;
                for (l_1386 = 0; (l_1386 < 42); ++l_1386)
                {
                    return l_1680[1][4][7];
                }
                (***g_382) = (*g_384);
                (***g_382) = (l_1621 = &g_522);

                ;
                ;
                for (l_1096 = 4; (l_1096 >= 1); l_1096 -= 1)
                {
                    unsigned char *l_1694[4] = {&g_99, &g_962, &g_99, &g_962};
                    int l_1695 = 0xC20EEA76L;
                    int l_1696 = 0x1D2EEBFCL;
                    int i;
                    if ((func_53(((*g_1620) = ((**g_141) != ((l_1677[2] , (safe_mul_func_int16_t_s_s((l_1684 = 0xF932L), func_11((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s((l_1680[1][4][7] == l_1677[2]), (safe_mul_func_uint16_t_u_u(((*l_1617) < (g_455 || ((*l_1621) = (safe_unary_minus_func_int8_t_s(0L))))), ((l_1695 = l_1677[1]) , l_1695))))), l_1680[0][1][1])), (**g_144))), (**g_137))))) != (****g_669)))), l_1696) < 1UL))
                    {
                        (**g_383) = &l_1460;

                        ;
                        (**g_383) = (l_1697[5] = l_1621);

                        ;
                    }
                    else
                    {
                        unsigned char l_1709[4][7][1] = {{{252UL}, {252UL}, {252UL}, {252UL}, {252UL}, {252UL}, {252UL}}, {{252UL}, {252UL}, {252UL}, {252UL}, {252UL}, {252UL}, {252UL}}, {{252UL}, {252UL}, {252UL}, {252UL}, {252UL}, {252UL}, {252UL}}, {{252UL}, {252UL}, {252UL}, {252UL}, {252UL}, {252UL}, {252UL}}};
                        int i, j, k;
                        l_1712 = ((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((*l_1621) = ((safe_sub_func_int8_t_s_s(l_1704, func_53(l_1695, (safe_mod_func_uint16_t_u_u((func_53((*l_1617), ((l_1707 == (*g_669)) && ((-1L) < (*l_1621)))) != (safe_unary_minus_func_uint16_t_u((*l_1617)))), l_1709[1][5][0]))))) < l_1710)) , 4UL), 1L)), l_1711)) && 0xC8L);
                    }
                    (*g_1620) = (l_1695 = (*g_1620));
                    for (g_522 = 0; (g_522 <= 4); g_522 += 1)
                    {
                        unsigned l_1713 = 0xB03B95BBL;
                        l_1713 = (*l_1621);
                    }
                }


            }

            ;
            for (g_522 = 0; (g_522 >= 19); g_522 = safe_add_func_uint32_t_u_u(g_522, 1))
            {
                char l_1723 = (-8L);
                int l_1724 = 0x07857362L;
                short l_1725 = 1L;
                unsigned l_1761 = 0x7DEA8199L;
                int *l_1790 = &l_1784;
                (*g_384) = &l_1684;

                ;
                (**g_383) = &l_1684;
                if ((*g_385))
                {
                    unsigned short l_1734 = 3UL;
                    unsigned char *l_1738 = (void*)0;
                    short l_1739 = 0x55C6L;
                    unsigned *l_1741[8] = {&l_1297, &g_299, &l_1297, &g_299, &l_1297, &g_299, &l_1297, &g_299};
                    unsigned *l_1742 = (void*)0;
                    unsigned *l_1743[1];
                    unsigned char *l_1745 = &g_1086;
                    int l_1746 = (-9L);
                    int l_1764 = 0x50C6EF1EL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1743[i] = &l_1726;
                    l_1746 = (((safe_mod_func_uint32_t_u_u(((**g_737) = ((****g_382) & (*g_738))), (*l_1621))) , ((l_1725 ^ ((*l_1617) = ((*l_1745) = (safe_add_func_int16_t_s_s(((**g_737) | (*l_1621)), 4L))))) & 0x1FL)) <= l_1723);
                    for (l_1723 = 0; (l_1723 > (-7)); l_1723--)
                    {
                        unsigned short l_1751 = 0x6E3FL;
                    }
                    (*l_1617) = (*g_385);
                    (*g_1620) = (((l_1746 >= ((*l_1745) = l_1723)) & (*g_145)) || 1L);
                }
                else
                {
                    const char * const l_1772 = &g_1773;
                    const char * const *l_1771[7][2][6] = {{{(void*)0, (void*)0, &l_1772, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_1772, (void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, &l_1772, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_1772, (void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, &l_1772, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_1772, (void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, &l_1772, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_1772, (void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, &l_1772, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_1772, (void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, &l_1772, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_1772, (void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, &l_1772, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_1772, (void*)0, (void*)0, (void*)0}}};
                    const char * const **l_1770 = &l_1771[5][1][0];
                    const char * const ***l_1769 = &l_1770;
                    int l_1782 = 0L;
                    int *l_1789 = &l_1684;
                    int i, j, k;
                    if ((((-1L) != ((*g_738) , l_1761)) == (((*l_1769) = (void*)0) == &g_709)))
                    {
                        unsigned l_1774 = 0xB7C44FF8L;
                        (*g_1620) = (*g_1620);
                        (*g_1620) = l_1774;
                        (*g_1620) = g_1786[2][0];
                        (*g_1620) = (safe_add_func_uint32_t_u_u(0x00E90AC1L, l_1782));
                    }
                    else
                    {
                        unsigned char l_1791[10] = {0xD5L, 249UL, 0xD5L, 249UL, 0xD5L, 249UL, 0xD5L, 249UL, 0xD5L, 249UL};
                        int i;
                        (***g_382) = &l_1684;
                        l_1790 = (l_1789 = &g_115);

                        ;
                        ;
                        return l_1791[2];


                    }

                    ;
                }
            }


            if (l_1792)
                break;

        }


        ;
        for (g_1641 = 0; (g_1641 == (-24)); g_1641 = safe_sub_func_uint32_t_u_u(g_1641, 1))
        {
            int l_1795 = 1L;
            (**g_383) = &l_1460;

            ;
            (**g_383) = (**g_383);
            if (l_1798)
                continue;
            (*l_1617) = ((safe_mul_func_int8_t_s_s(l_1795, l_1795)) != (*g_1620));
        }


        if (((g_1408 = (void*)0) != &g_656))
        {
            int *l_1807 = &g_115;
            unsigned short ***l_1878 = &l_1663;
            if ((*l_1617))
            {
                unsigned short l_1804 = 65535UL;
                for (l_1611 = (-12); (l_1611 <= 27); l_1611 = safe_add_func_int32_t_s_s(l_1611, 9))
                {
                    if (l_1804)
                        break;
                    for (g_574 = 0; (g_574 == 40); g_574++)
                    {
                        (*g_1620) = 0L;
                        if (l_1804)
                            break;
                    }
                }
                (**g_383) = (l_1617 = l_1807);

                ;
                ;
            }
            else
            {
                int l_1810 = 0xE77FD1B9L;
                short l_1828 = (-7L);
                unsigned l_1829 = 0xA326DBE9L;
                char *l_1830 = &l_1614;
                char *l_1831[8] = {&g_1641, (void*)0, &g_1641, (void*)0, &g_1641, (void*)0, &g_1641, (void*)0};
                int l_1833 = 3L;
                unsigned short ***l_1877 = (void*)0;
                int i;
                (*l_1621) = ((((l_1833 = ((*l_1807) = ((safe_rshift_func_uint16_t_u_u(((*l_1617) = (((l_1810 , ((safe_mul_func_uint16_t_u_u((((****g_669) = (l_1807 != &l_1460)) != (safe_rshift_func_uint8_t_u_u((!(safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((((g_1821 = l_1621) == ((*l_1807) , (*l_1796))) & (safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(0x51L, (g_94[0] = ((*l_1830) = (safe_add_func_int32_t_s_s(((l_1828 & func_16(l_1828, (*l_1617), (*l_1807), l_1828)) , l_1829), 0xE5E8FAA5L)))))), l_1832))) != 0xD7A00BF4L) , l_1833), (**g_137))), 5)), 0x3D99L))), (*l_1621)))), 0x0A18L)) ^ 65535UL)) >= (*l_1807)) ^ (*l_1621))), 12)) >= 0xAAECF2A8L))) == (-6L)) == l_1810) != g_1254);

                ;
                ;
                if (((*l_1807) = (safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((*l_1621) = (safe_lshift_func_uint16_t_u_s((*l_1617), ((l_1810 , l_1840) == (*g_1612))))), 3)), 6))))
                {
                    int l_1850 = (-5L);
                    g_1208 = l_1842;

                    ;
                    for (g_574 = 0; (g_574 <= 0); g_574 += 1)
                    {
                        int l_1845 = 8L;
                        (*l_1807) = (((safe_sub_func_uint16_t_u_u(65535UL, (l_1845 , (safe_sub_func_uint8_t_u_u(((*l_1807) , (0L && (l_1850 & (***g_670)))), (*l_1807)))))) >= (*l_1617)) <= (*l_1807));
                    }
                }
                else
                {
                    unsigned short l_1851 = 1UL;
                    return l_1851;
                }

                ;
                (**g_383) = l_1852;

                ;
                for (g_455 = (-24); (g_455 <= 29); ++g_455)
                {
                    int l_1857 = 0x1456EC4FL;
                    int l_1882 = 0x53C52838L;
                    for (g_69 = (-30); (g_69 <= 54); g_69++)
                    {
                        unsigned *l_1866 = &l_1616;
                        unsigned **l_1867 = &g_656;
                        const int l_1870 = 0xC28BC6FBL;
                        (***g_382) = &l_1531;

                        ;
                        (*l_1807) = func_16(l_1857, ((((*g_138) && ((*l_1807) , ((safe_rshift_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((((((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s((func_16((**g_384), (((*g_738) = func_11(func_11(g_962, (((((&g_1153 == ((*l_1867) = l_1866)) , l_1868) == (void*)0) ^ 0L) != (*l_1852))), (**g_144))) , l_1869), g_574, l_1857) , l_1857), 12)), 5)) , (*l_1852)) | 0x2AL) , g_859) , l_1870), 0L)) || 0x70C83548L), 8)) != (***g_670)))) , 4294967295UL) , 253UL), l_1833, (**g_144));

                        ;
                    }
                    if (l_1857)
                        break;
                    (**g_383) = (*g_384);
                    for (l_1386 = 0; (l_1386 >= 31); ++l_1386)
                    {
                        int *l_1873 = (void*)0;
                        unsigned char *l_1881 = &l_1832;
                        (**g_383) = l_1807;

                        ;
                    }
                }

                ;
                ;
            }

            ;
            ;
            ;
            ;
            ;
        }
        else
        {
            const unsigned short l_1883 = 65535UL;
            int l_1886 = 0xB57F7355L;
            (*l_1621) = ((l_1883 , (**g_141)) <= ((safe_sub_func_uint8_t_u_u((l_1886 && (*l_1621)), ((safe_mod_func_int32_t_s_s(0xBF87978BL, 0x876F4B71L)) | (*l_1621)))) && (1UL > (safe_sub_func_uint8_t_u_u(l_1891, l_1883)))));
            for (g_522 = (-27); (g_522 >= (-30)); g_522--)
            {
                for (g_99 = 0; (g_99 <= 5); g_99 += 1)
                {
                    int i;
                    return g_94[g_99];


                }
                return (**g_737);


            }
        }


        ;
        ;
        ;
        ;
        ;
        (*l_1621) = ((*l_1617) , ((0x1530C0E0L >= ((void*)0 == &g_737)) >= (safe_lshift_func_int8_t_s_s(((*l_1852) | l_1896), 5))));
    }
    else
    {
        unsigned short l_1897 = 65529UL;
        int l_1906 = 0xF7533C35L;
        unsigned short l_1907 = 0UL;
        unsigned short *l_1932 = &g_1445;
        int **l_1939 = (void*)0;
        char ***l_1947 = &l_1464;
        unsigned l_1963 = 4294967288UL;
        unsigned char l_1994 = 252UL;
        unsigned short l_2005 = 0UL;
        int l_2037 = (-1L);
        unsigned short l_2117 = 65526UL;
        char l_2139[5][7] = {{8L, 8L, 0x57L, 0x65L, 0xA3L, 0x65L, 0x57L}, {8L, 8L, 0x57L, 0x65L, 0xA3L, 0x65L, 0x57L}, {8L, 8L, 0x57L, 0x65L, 0xA3L, 0x65L, 0x57L}, {8L, 8L, 0x57L, 0x65L, 0xA3L, 0x65L, 0x57L}, {8L, 8L, 0x57L, 0x65L, 0xA3L, 0x65L, 0x57L}};
        int i, j;
        (***g_382) = (((*l_1852) = ((!(l_1897 >= (safe_lshift_func_int8_t_s_s((l_1897 < (safe_mod_func_uint32_t_u_u((*g_738), 0x0F29D583L))), 2)))) != (((*l_1617) = (((*g_1620) = func_16((l_1906 = (safe_mod_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u(((func_16(((*l_1852) = l_1897), l_1897, l_1897, (**g_144)) < 6L) < 3UL), 4)) || l_1897) == l_1897), g_77))), l_1897, g_69, (****g_669))) && l_1907)) >= (-9L)))) , (void*)0);
        for (g_751 = 25; (g_751 == 35); g_751 = safe_add_func_uint16_t_u_u(g_751, 3))
        {
            unsigned l_1912[3];
            unsigned char *l_1916 = &g_99;
            int *l_1917 = &g_1786[0][0];
            int i;
            for (i = 0; i < 3; i++)
                l_1912[i] = 4294967288UL;
            if ((l_1906 ^ (&l_1907 != (((*l_1917) = (safe_lshift_func_int16_t_s_s(l_1912[2], (safe_lshift_func_int16_t_s_u((l_1915 >= ((***g_670) = ((((*l_1916) = (9UL < 0x23L)) && ((func_11(l_1897, (**g_144)) | 0xA422L) && 0x8A9DL)) >= (*g_738)))), 13))))) , (*g_137)))))
            {
                unsigned short l_1920 = 65528UL;
                for (g_635 = 0; (g_635 >= 15); ++g_635)
                {
                    return (*g_1821);
                }
                if (l_1920)
                    continue;
            }
            else
            {
                unsigned short l_1921[3][10];
                int l_1925 = 0xC13E069EL;
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 10; j++)
                        l_1921[i][j] = 1UL;
                }
                if ((l_1921[2][3] , (*l_1617)))
                {
                    unsigned char l_1922 = 0x30L;
                    (*l_1617) = 0xC95467B3L;
                    for (g_1086 = 0; (g_1086 <= 2); g_1086 += 1)
                    {
                        (*l_1852) = l_1912[2];
                        (*l_1852) = 0xC55C9245L;
                        (*g_384) = (***g_382);
                        return (**g_737);
                    }
                }
                else
                {
                    if ((*g_1620))
                        break;
                }
                (***g_382) = (l_1907 , l_1917);

                ;
            }
        }

        ;
        (*l_1617) = (l_1907 | l_1934);
        for (l_1792 = (-21); (l_1792 > (-16)); l_1792 = safe_add_func_uint8_t_u_u(l_1792, 1))
        {
            int ***l_1937 = (void*)0;
            int ***l_1938[5];
            const unsigned char *l_1944 = &g_962;
            char ***l_1946[7] = {&l_1464, &l_1464, &l_1464, &l_1464, &l_1464, &l_1464, &l_1464};
            char ****l_1945 = &l_1946[2];
            char ****l_1948 = &l_1947;
            int l_1949 = 7L;
            unsigned char l_1950[8] = {0x89L, 0x89L, 0x30L, 0x89L, 0x89L, 0x30L, 0x89L, 0x89L};
            unsigned char *l_1964 = &g_962;
            unsigned short ****l_1989 = &g_670;
            int l_2097 = 1L;
            int l_2127 = 0L;
            int i;
            for (i = 0; i < 5; i++)
                l_1938[i] = &g_1208;
            l_1939 = &g_1144[8];

            ;
            (**g_383) = &l_1949;

            ;
            if ((safe_rshift_func_uint8_t_u_s(l_1950[3], ((((*l_1964) = (safe_add_func_uint32_t_u_u(9UL, func_53((l_1897 , ((l_1897 ^ (safe_add_func_uint16_t_u_u((l_1950[7] >= 0UL), (safe_mod_func_int8_t_s_s((~l_1950[6]), (safe_rshift_func_uint16_t_u_u(((9L > l_1962) >= l_1950[3]), (**g_144)))))))) && (*l_1852))), l_1963)))) == l_1897) != l_1949))))
            {
                unsigned l_1971 = 4294967288UL;
                char l_1977 = (-10L);
                if ((((**g_141) == 0xCD81L) , 0xC0F08729L))
                {
                    unsigned short ***l_1976[9] = {(void*)0, (void*)0, &g_144, (void*)0, (void*)0, &g_144, (void*)0, (void*)0, &g_144};
                    unsigned short ****l_1975 = &l_1976[1];
                    unsigned short ** const **l_1981 = (void*)0;
                    unsigned short ** const ***l_1980 = &l_1981;
                    unsigned short ** const ****l_1979 = &l_1980;
                    int i;
                    if ((((*g_1620) = ((safe_rshift_func_int16_t_s_s((*l_1852), l_1950[3])) && (((((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((l_1971 != (((l_1972 == ((safe_lshift_func_int8_t_s_u((((*l_1617) , (*g_669)) != ((*l_1975) = (*g_669))), 4)) & (l_1971 >= (l_1950[6] || l_1977)))) , l_1949) , l_1971)), l_1977)), l_1950[3])) < 65535UL) && (**g_141)) >= (*g_138)) , l_1963))) | l_1971))
                    {
                        return (**g_737);



                    }
                    else
                    {
                        int **l_1978 = &l_1617;
                        (**g_383) = &l_1949;

                        ;
                        return (**g_737);



                    }
                }
                else
                {
                    unsigned l_1988[1][9];
                    int l_1995 = (-8L);
                    unsigned char l_1997[5] = {1UL, 0xA2L, 1UL, 0xA2L, 1UL};
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 9; j++)
                            l_1988[i][j] = 1UL;
                    }
                    (*g_1620) = l_1950[3];
                    (***g_382) = &l_1896;

                    ;
                    for (g_455 = 0; (g_455 == 13); g_455++)
                    {
                        int l_1990 = 0x7F80A5B4L;
                        unsigned l_1993[8] = {4294967295UL, 0xDB68A0D6L, 4294967295UL, 0xDB68A0D6L, 4294967295UL, 0xDB68A0D6L, 4294967295UL, 0xDB68A0D6L};
                        int l_1996 = 0xA1C518B3L;
                        unsigned ***l_2000 = &g_1408;
                        int ***l_2002 = &g_1672;
                        int ****l_2001 = &l_2002;
                        int * const **l_2004[4] = {&g_1756, &g_1756, &g_1756, &g_1756};
                        int * const ***l_2003 = &l_2004[3];
                        int i;
                        (***g_382) = &l_1949;

                        ;
                        l_1906 = ((l_1996 = (9UL > (safe_mul_func_int16_t_s_s(l_1971, (safe_mul_func_int16_t_s_s((*l_1617), ((l_1988[0][8] >= (l_1989 != ((((l_1963 , l_1990) && ((*g_738) = 0x5E674DF8L)) ^ ((safe_sub_func_int16_t_s_s(((((!l_1993[5]) < l_1990) < l_1950[0]) < l_1994), 0x982EL)) && l_1995)) , l_1989))) , (****g_669)))))))) == (*l_1852));
                        (*g_1620) = (((l_1994 != l_1997[1]) != (*l_1617)) < ((((*l_2000) = (void*)0) == &g_656) != (((*l_2001) = (void*)0) != ((*l_2003) = &g_1756))));

                        ;
                        ;
                    }

                    ;
                }

                ;
                if (l_1977)
                    break;

                if (((l_1977 == func_16(((0xBB3BEAE1L < 0x31CF2956L) <= 255UL), ((*l_1964) = l_1949), l_2005, (****g_669))) & (safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((((*g_1821) = (safe_mul_func_int16_t_s_s(((0xF1439B9BL | (-9L)) , l_1971), l_1897))) & l_1950[0]), 5)), l_1949))))
                {
                    unsigned short l_2015 = 0xAF8EL;
                    unsigned l_2019 = 0xA92D79F8L;
                    int l_2026 = 0xBFD59320L;
                    for (l_1460 = 0; (l_1460 > 20); ++l_1460)
                    {
                        short l_2014[5][10][5] = {{{(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}}, {{(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}}, {{(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}}, {{(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}}, {{(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}, {(-3L), 1L, (-2L), (-1L), 0xFF1FL}}};
                        int l_2016 = 0x7372B893L;
                        int i, j, k;
                        (*g_1620) = ((l_2016 = ((l_1977 || l_2014[1][4][3]) & (&g_656 != ((func_53((*g_1620), (l_1949 = (l_1906 = func_16(l_1950[5], l_2015, l_1906, l_2015)))) & 6UL) , (void*)0)))) >= l_2015);


                        return l_1977;


                    }
                    (*g_384) = &l_1531;

                    ;
                }
                else
                {
                    (*l_1852) = l_1906;
                    for (g_962 = 13; (g_962 >= 47); g_962 = safe_add_func_uint32_t_u_u(g_962, 8))
                    {
                        return (*g_738);


                    }
                }

                ;
            }
            else
            {
                short l_2048[10][7] = {{0x2EE0L, 0x2EE0L, 0x5262L, 1L, 7L, (-8L), 4L}, {0x2EE0L, 0x2EE0L, 0x5262L, 1L, 7L, (-8L), 4L}, {0x2EE0L, 0x2EE0L, 0x5262L, 1L, 7L, (-8L), 4L}, {0x2EE0L, 0x2EE0L, 0x5262L, 1L, 7L, (-8L), 4L}, {0x2EE0L, 0x2EE0L, 0x5262L, 1L, 7L, (-8L), 4L}, {0x2EE0L, 0x2EE0L, 0x5262L, 1L, 7L, (-8L), 4L}, {0x2EE0L, 0x2EE0L, 0x5262L, 1L, 7L, (-8L), 4L}, {0x2EE0L, 0x2EE0L, 0x5262L, 1L, 7L, (-8L), 4L}, {0x2EE0L, 0x2EE0L, 0x5262L, 1L, 7L, (-8L), 4L}, {0x2EE0L, 0x2EE0L, 0x5262L, 1L, 7L, (-8L), 4L}};
                int *l_2078 = &g_390;
                unsigned l_2086 = 0xFE3D7365L;
                int i, j;
                (**g_383) = &l_1949;

                ;
                for (l_1896 = 0; (l_1896 != 22); l_1896++)
                {
                    unsigned l_2040 = 9UL;
                    unsigned short l_2051 = 1UL;
                    int l_2059 = 1L;
                }
                (*l_2078) = (l_1906 = (safe_mod_func_int16_t_s_s(((void*)0 != &g_1613), ((((((((safe_mod_func_uint16_t_u_u((((+(safe_rshift_func_uint8_t_u_s((65535UL ^ l_1994), l_1950[0]))) == (*l_1852)) != 0x88L), ((((**g_144) = (((*l_1964) = (safe_mod_func_int8_t_s_s(l_1949, (((*l_1617) | 0xC099A98AL) & 0xA69C9949L)))) || l_1949)) & (*l_1852)) , 1L))) , l_1994) , 0x8F85L) == (**g_137)) , 4294967295UL) || (*l_1617)) | (*l_1852)) || 0x53L))));
            }

            ;
            for (l_1907 = 0; (l_1907 <= 3); l_1907 += 1)
            {
                int l_2128 = (-1L);
                short l_2136 = 0x32E5L;
                int l_2142 = 0L;
                int l_2143 = 0xD6EE91F4L;
                int i;
                l_1906 = ((*g_1620) = ((*l_1852) = (safe_rshift_func_uint8_t_u_u(l_1950[(l_1907 + 3)], 6))));
                if (l_2097)
                    break;
                for (g_522 = 0; (g_522 <= 1); g_522 += 1)
                {
                    short l_2116 = 0x0A75L;
                    int ** const l_2118 = &l_1617;
                    char l_2131 = 0L;
                    unsigned l_2137 = 0x2F654ED8L;
                    for (l_1615 = 0; (l_1615 <= 1); l_1615 += 1)
                    {
                        char *****l_2112 = (void*)0;
                        char *****l_2113 = (void*)0;
                        char *****l_2114 = &l_1945;
                        char *****l_2115[2];
                        int ***l_2119 = (void*)0;
                        int ***l_2120 = (void*)0;
                        unsigned l_2121 = 0xCCD8C0FAL;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_2115[i] = &g_2110;
                        (*l_1617) = (safe_lshift_func_uint8_t_u_s(((*l_1964) = (safe_lshift_func_uint16_t_u_s((((safe_lshift_func_uint16_t_u_s((g_366[g_522][(l_1907 + 2)][(l_1615 + 3)] , (safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint32_t_u_u(((*g_738) = ((((l_2005 , ((**g_144) = ((l_1906 || l_2005) , ((g_366[g_522][(l_1907 + 2)][(l_1615 + 3)] | (safe_sub_func_uint8_t_u_u(((g_2110 = ((*l_2114) = g_2110)) != (g_366[g_522][(l_1907 + 2)][(l_1615 + 3)] , &g_2111)), func_11(l_1949, l_1906)))) == l_2116)))) >= l_1950[(l_1907 + 3)]) ^ l_1949) | 0x460DADE6L)), (*g_1620))) != (-1L)), 15))), l_1950[3])) , l_2117) < l_1950[(l_1907 + 3)]), l_2116))), 7));

                        ;
                        (*g_1755) = l_2118;

                        ;
                        (*g_1620) = l_1950[1];
                        l_1602[g_522] = (*g_384);
                    }
                    for (l_1625 = 0; (l_1625 <= 0); l_1625 += 1)
                    {
                        int i, j, k;
                        return g_366[l_1907][l_1625][(l_1907 + 4)];



                    }
                    for (l_1616 = 0; (l_1616 <= 1); l_1616 += 1)
                    {
                        int l_2138 = 0xE9C876F2L;
                        int i, j, k;
                    }
                }
                (**g_383) = &l_1906;

                ;
                for (l_1615 = 0; (l_1615 <= 4); l_1615 += 1)
                {
                    (*l_1852) = 0x4A38C859L;
                    for (l_1962 = 0; (l_1962 <= 4); l_1962 += 1)
                    {
                        int i, j, k;
                        return g_366[l_1907][(l_1615 + 3)][(l_1615 + 3)];



                    }
                }
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
    ;
    ;
    return (*g_1821);




}







static int func_2(char p_3, short p_4, short p_5, unsigned p_6)
{
    unsigned short l_1105 = 65529UL;
    int l_1106 = (-8L);
    int *l_1123 = &g_522;
    unsigned * const *l_1150 = &g_656;
    int l_1166 = 0x8932D968L;
    const int *l_1217 = &g_47;
    unsigned short l_1222 = 0x4DB7L;
    unsigned l_1225 = 0x74AAB75DL;
    unsigned short ***l_1226 = &g_144;
    int l_1227 = (-10L);
    for (p_5 = 1; (p_5 <= 4); p_5 += 1)
    {
        int *l_1101[7];
        const unsigned l_1112 = 0xBE05CB8DL;
        unsigned **l_1154 = &g_656;
        unsigned char l_1155[6] = {1UL, 1UL, 250UL, 1UL, 1UL, 250UL};
        const int *l_1177 = &g_47;
        unsigned l_1184 = 0xC7117657L;
        int l_1199[4] = {(-2L), (-10L), (-2L), (-10L)};
        int i;
        for (i = 0; i < 7; i++)
            l_1101[i] = &g_522;
        if ((safe_lshift_func_uint8_t_u_s(g_94[p_5], (safe_lshift_func_uint16_t_u_u((**g_141), 5)))))
        {
            int **l_1102 = &l_1101[3];
            (*g_384) = l_1101[3];

            ;
        }
        else
        {
            int l_1107 = 0x9C1C032BL;
            short l_1119 = 9L;
            unsigned char *l_1131 = &g_1086;
            if (p_6)
            {
                return g_1103;


            }
            else
            {
                for (g_574 = 0; (g_574 <= 5); g_574 += 1)
                {
                    int *l_1104 = &g_47;
                    (***g_382) = l_1104;

                    ;
                    (*l_1104) = l_1105;
                    l_1106 = p_6;
                }

                ;
                l_1107 = p_4;
                for (g_635 = 0; (g_635 <= 4); g_635 += 1)
                {
                    unsigned char *l_1120 = &g_587[2];
                    int l_1121 = 3L;
                    int i;
                    g_390 = (p_4 && (safe_rshift_func_int8_t_s_s((g_94[(g_635 + 1)] = (safe_mod_func_int8_t_s_s(((l_1112 , (safe_lshift_func_uint16_t_u_u(func_25((safe_add_func_uint8_t_u_u(((*l_1120) = (l_1106 && (safe_lshift_func_uint16_t_u_s((~l_1119), 7)))), (p_4 ^ (((&g_383 == (void*)0) > (**g_141)) || ((func_16(p_3, g_94[2], l_1121, (*g_145)) , (*g_295)) >= l_1121))))), p_4, p_6, (*g_295)), 15))) & 0xA39EL), 1L))), 0)));


                    if (p_6)
                        break;
                    for (g_299 = 0; (g_299 <= 5); g_299 += 1)
                    {
                        int *l_1122 = &g_47;
                        (**g_383) = l_1122;

                        ;
                    }
                    return l_1119;


                }


                l_1123 = &l_1106;

                ;
            }


            ;
            for (p_6 = 0; (p_6 <= 5); p_6 += 1)
            {
                int l_1132[8];
                int i;
                for (i = 0; i < 8; i++)
                    l_1132[i] = 0x8E90C59BL;
                l_1132[3] = ((-1L) == (safe_sub_func_uint32_t_u_u((((*l_1123) = (l_1107 < ((safe_rshift_func_int8_t_s_u(1L, (safe_unary_minus_func_uint32_t_u(((void*)0 != &g_670))))) , (safe_rshift_func_uint16_t_u_u((l_1131 == &g_788), 12))))) >= ((**g_141) ^ ((***g_550) = (p_4 ^ p_6)))), l_1107)));
                (**g_383) = (void*)0;

                ;
            }
        }


        if ((((*l_1123) , ((*l_1123) > (*g_738))) , (safe_add_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(0x4892L, (***g_550))) && (safe_mul_func_int8_t_s_s(0xBFL, (((*g_295) = (-4L)) || (safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(((*l_1123) = (((*l_1123) , &g_383) != (void*)0)), (**g_737))), 4)))))), (**g_137)))))
        {
            unsigned l_1149 = 9UL;
            unsigned * const l_1152 = &g_1153;
            unsigned * const *l_1151 = &l_1152;
            (*l_1123) = p_5;
            (*l_1123) = (((g_229 , (safe_unary_minus_func_int8_t_s((((*g_738) = (*g_738)) == p_3)))) == ((&g_650 != (g_1144[8] = &g_366[3][5][7])) || func_11(p_3, ((((p_6 != func_11((((**g_144) = ((*l_1123) = ((p_4 = (safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s((*l_1123), (**g_294))) , l_1149), (*l_1123)))) < 65528UL))) , p_6), l_1105)) , 0x3FB98D3DL) != p_6) >= p_6)))) , l_1149);
            (***g_382) = &l_1106;

            ;
        }
        else
        {
            char l_1162[2][4][4] = {{{(-1L), (-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L), (-1L)}}, {{(-1L), (-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L), (-1L)}}};
            int l_1163 = 0x5675A198L;
            int l_1164 = 0xC9B2CBBBL;
            unsigned char l_1165[8];
            char *l_1215 = &l_1162[1][2][1];
            unsigned char l_1216[8][10] = {{0xAFL, 1UL, 0x1CL, 1UL, 0x1CL, 1UL, 0xAFL, 0UL, 0xD5L, 0x34L}, {0xAFL, 1UL, 0x1CL, 1UL, 0x1CL, 1UL, 0xAFL, 0UL, 0xD5L, 0x34L}, {0xAFL, 1UL, 0x1CL, 1UL, 0x1CL, 1UL, 0xAFL, 0UL, 0xD5L, 0x34L}, {0xAFL, 1UL, 0x1CL, 1UL, 0x1CL, 1UL, 0xAFL, 0UL, 0xD5L, 0x34L}, {0xAFL, 1UL, 0x1CL, 1UL, 0x1CL, 1UL, 0xAFL, 0UL, 0xD5L, 0x34L}, {0xAFL, 1UL, 0x1CL, 1UL, 0x1CL, 1UL, 0xAFL, 0UL, 0xD5L, 0x34L}, {0xAFL, 1UL, 0x1CL, 1UL, 0x1CL, 1UL, 0xAFL, 0UL, 0xD5L, 0x34L}, {0xAFL, 1UL, 0x1CL, 1UL, 0x1CL, 1UL, 0xAFL, 0UL, 0xD5L, 0x34L}};
            int i, j, k;
            for (i = 0; i < 8; i++)
                l_1165[i] = 0xE2L;
            if ((*l_1123))
            {
                unsigned l_1156 = 0x072A8FDFL;
                unsigned char l_1159 = 255UL;
                int *l_1167[3][10][7] = {{{&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}, {&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}, {&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}, {&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}, {&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}, {&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}, {&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}, {&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}, {&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}, {&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}}, {{&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}, {&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}, {&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}, {&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}, {&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}, {&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}, {&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}, {&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}, {&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}, {&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}}, {{&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}, {&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}, {&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}, {&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}, {&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}, {&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}, {&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}, {&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}, {&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}, {&g_47, &l_1163, &g_31, &l_1106, &g_47, &l_1164, &g_47}}};
                int i, j, k;
                g_31 = ((*l_1123) = ((p_3 <= (l_1156 & p_3)) >= (((((0xD3L == (&g_656 == &g_656)) < (((safe_lshift_func_int16_t_s_u(p_3, (((p_6 , p_4) , &g_1103) == &p_6))) & (**g_144)) && p_4)) , l_1156) & 1L) & 0x971EE26EL)));
                (***g_382) = l_1167[0][9][3];

                ;
            }
            else
            {
                unsigned l_1174[10][10] = {{1UL, 0x5692EDE2L, 0x50E58C18L, 0x64D82E06L, 0x57AE5247L, 0x64D82E06L, 0x50E58C18L, 0x5692EDE2L, 1UL, 0x77A2A637L}, {1UL, 0x5692EDE2L, 0x50E58C18L, 0x64D82E06L, 0x57AE5247L, 0x64D82E06L, 0x50E58C18L, 0x5692EDE2L, 1UL, 0x77A2A637L}, {1UL, 0x5692EDE2L, 0x50E58C18L, 0x64D82E06L, 0x57AE5247L, 0x64D82E06L, 0x50E58C18L, 0x5692EDE2L, 1UL, 0x77A2A637L}, {1UL, 0x5692EDE2L, 0x50E58C18L, 0x64D82E06L, 0x57AE5247L, 0x64D82E06L, 0x50E58C18L, 0x5692EDE2L, 1UL, 0x77A2A637L}, {1UL, 0x5692EDE2L, 0x50E58C18L, 0x64D82E06L, 0x57AE5247L, 0x64D82E06L, 0x50E58C18L, 0x5692EDE2L, 1UL, 0x77A2A637L}, {1UL, 0x5692EDE2L, 0x50E58C18L, 0x64D82E06L, 0x57AE5247L, 0x64D82E06L, 0x50E58C18L, 0x5692EDE2L, 1UL, 0x77A2A637L}, {1UL, 0x5692EDE2L, 0x50E58C18L, 0x64D82E06L, 0x57AE5247L, 0x64D82E06L, 0x50E58C18L, 0x5692EDE2L, 1UL, 0x77A2A637L}, {1UL, 0x5692EDE2L, 0x50E58C18L, 0x64D82E06L, 0x57AE5247L, 0x64D82E06L, 0x50E58C18L, 0x5692EDE2L, 1UL, 0x77A2A637L}, {1UL, 0x5692EDE2L, 0x50E58C18L, 0x64D82E06L, 0x57AE5247L, 0x64D82E06L, 0x50E58C18L, 0x5692EDE2L, 1UL, 0x77A2A637L}, {1UL, 0x5692EDE2L, 0x50E58C18L, 0x64D82E06L, 0x57AE5247L, 0x64D82E06L, 0x50E58C18L, 0x5692EDE2L, 1UL, 0x77A2A637L}};
                int l_1186[10] = {(-1L), 0xB840906CL, (-1L), 0xB840906CL, (-1L), 0xB840906CL, (-1L), 0xB840906CL, (-1L), 0xB840906CL};
                int **l_1207 = &g_1144[0];
                int i, j;
                if (((*l_1123) = (((***g_550) = (***g_550)) == ((safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((func_16(l_1174[1][4], (safe_sub_func_uint8_t_u_u(((**g_737) && (*g_738)), (g_94[(p_5 + 1)] = func_11((*l_1123), ((**g_144) = ((p_4 > l_1162[0][2][1]) , p_3)))))), l_1165[0], p_4) > l_1162[0][2][0]), 248UL)), 1UL)), g_139[2][2])) != 0x2FL))))
                {
                    const unsigned char l_1178 = 0x6CL;
                    l_1177 = (**g_383);

                    ;
                    for (p_4 = 4; (p_4 >= 0); p_4 -= 1)
                    {
                        int l_1181 = (-7L);
                        unsigned *l_1185 = &l_1174[8][3];
                        char *l_1190 = (void*)0;
                        char **l_1189 = &l_1190;
                        (***g_382) = (void*)0;
                        (*l_1123) = p_4;
                        l_1186[2] = ((safe_lshift_func_uint16_t_u_s(((***g_670) = 1UL), l_1181)) , (((*l_1189) = ((*g_709) = (*g_709))) == (void*)0));
                        return p_6;
                    }
                }
                else
                {
                    short l_1193 = 6L;
                    char **l_1194 = (void*)0;
                    short l_1195 = 0x729FL;
                    for (g_1086 = 0; (g_1086 <= 4); g_1086 += 1)
                    {
                        int i, j;
                        return l_1174[(p_5 + 3)][(g_1086 + 1)];
                    }
                    for (l_1184 = 0; (l_1184 <= 4); l_1184 += 1)
                    {
                        unsigned *l_1196 = (void*)0;
                        unsigned *l_1197 = &g_635;
                        short *l_1198 = &g_77;
                        int i;
                        l_1186[p_5] = ((p_3 , g_1200[0]) > 0x138EL);
                        if (p_6)
                            continue;
                    }
                    for (l_1195 = 3; (l_1195 >= 0); l_1195 -= 1)
                    {
                        int **l_1206 = &g_1144[8];
                        int ***l_1205 = &l_1206;
                        (*l_1123) = ((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((((*l_1205) = &g_1144[8]) == (g_1208 = l_1207)), 2)), func_16(p_5, g_99, g_47, (l_1186[0] = p_5)))) < (((*g_738) = ((void*)0 != (*g_669))) || p_6));
                        if (p_6)
                            continue;
                        if (p_3)
                            continue;
                        (*l_1123) = l_1174[2][2];
                    }
                }

                ;
                ;
                l_1186[9] = ((*l_1123) = p_3);
            }

            ;
            ;
            (**g_383) = ((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(0L, (*g_295))), 5)) , (void*)0);

            ;
            for (l_1105 = 1; (l_1105 <= 4); l_1105 += 1)
            {
                if (p_5)
                    break;
            }
            l_1217 = (***g_382);

            ;
        }

        ;
        ;
        (**g_383) = (**g_383);
        (**g_383) = &l_1166;

        ;
    }

    ;
    ;

    ;
    (*l_1123) = (*l_1123);
    (*l_1123) = (safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(p_5, (((**g_144) = func_16(p_6, g_229, func_11((~(l_1222 <= (safe_lshift_func_uint16_t_u_u(((***g_670) = func_56((p_4 , &l_1227))), 8)))), p_6), (**g_141))) , (*l_1123)))), (**g_141)));


    ;
    return p_4;
}







static const unsigned char func_11(unsigned p_12, unsigned short p_13)
{
    int l_1090 = 1L;
    int *l_1091 = &g_115;
    int l_1092 = 9L;
    int l_1093[8] = {0x68E0BDD8L, 0x672A2928L, 0x68E0BDD8L, 0x672A2928L, 0x68E0BDD8L, 0x672A2928L, 0x68E0BDD8L, 0x672A2928L};
    int i;
    for (g_833 = 26; (g_833 != 48); g_833++)
    {
        const unsigned l_1089 = 1UL;
        return l_1089;
    }
    l_1093[5] = (l_1092 = ((*l_1091) = l_1090));
    return p_12;
}







static int func_16(int p_17, unsigned char p_18, unsigned p_19, unsigned short p_20)
{
    int *l_1085 = &g_47;
    (*l_1085) = p_18;
    (*g_384) = (void*)0;

    ;
    return (*l_1085);
}







static char func_25(unsigned p_26, unsigned char p_27, unsigned p_28, short p_29)
{
    char l_1007[8];
    int l_1014[1][9][5] = {{{0x47DD23D4L, 0x47DD23D4L, 0x3972FF6BL, 0x47DD23D4L, 0x47DD23D4L}, {0x47DD23D4L, 0x47DD23D4L, 0x3972FF6BL, 0x47DD23D4L, 0x47DD23D4L}, {0x47DD23D4L, 0x47DD23D4L, 0x3972FF6BL, 0x47DD23D4L, 0x47DD23D4L}, {0x47DD23D4L, 0x47DD23D4L, 0x3972FF6BL, 0x47DD23D4L, 0x47DD23D4L}, {0x47DD23D4L, 0x47DD23D4L, 0x3972FF6BL, 0x47DD23D4L, 0x47DD23D4L}, {0x47DD23D4L, 0x47DD23D4L, 0x3972FF6BL, 0x47DD23D4L, 0x47DD23D4L}, {0x47DD23D4L, 0x47DD23D4L, 0x3972FF6BL, 0x47DD23D4L, 0x47DD23D4L}, {0x47DD23D4L, 0x47DD23D4L, 0x3972FF6BL, 0x47DD23D4L, 0x47DD23D4L}, {0x47DD23D4L, 0x47DD23D4L, 0x3972FF6BL, 0x47DD23D4L, 0x47DD23D4L}}};
    unsigned char *l_1015 = &g_527;
    unsigned char l_1022 = 247UL;
    short **l_1023 = &g_295;
    int **l_1024 = &g_70;
    unsigned short l_1069 = 0xA1B4L;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_1007[i] = 0x6FL;
    l_1022 = (safe_mul_func_int16_t_s_s(((((safe_mul_func_uint8_t_u_u((l_1007[6] >= (safe_mod_func_uint8_t_u_u(((*l_1015) = ((safe_mul_func_uint16_t_u_u(p_29, (l_1014[0][8][3] = ((****g_669) = (safe_rshift_func_int16_t_s_s(l_1007[1], 10)))))) , 4UL)), ((safe_add_func_uint16_t_u_u((255UL < p_26), (((p_29 < (safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((*g_295) = ((void*)0 != &g_669)), 9)), 12))) | g_650) | p_26))) || l_1007[6])))), (-1L))) ^ 0xC1BCBC29L) == l_1007[6]) >= l_1007[6]), 0L));
    (*g_550) = l_1023;

    ;
    (**g_383) = ((*l_1024) = (void*)0);

    ;
    ;
    if (((****g_669) == p_26))
    {
        int l_1025 = 0xC9609AEAL;
        int l_1055[4] = {0x2F0C3597L, 0xDA3709CAL, 0x2F0C3597L, 0xDA3709CAL};
        int l_1059 = 0xF000BDA4L;
        int i;
        (**g_383) = (l_1025 , ((*l_1024) = &l_1025));

        ;
        ;
        if ((safe_add_func_uint8_t_u_u((**l_1024), ((*l_1015) = 0xE8L))))
        {
            return p_29;



        }
        else
        {
            int *l_1028 = &l_1025;
            l_1028 = &l_1025;
            for (g_77 = 0; (g_77 > (-1)); g_77 = safe_sub_func_uint8_t_u_u(g_77, 7))
            {
                int *l_1040 = &g_366[0][7][1];
                int *l_1041 = &g_366[2][3][5];
                int l_1076 = 0x613CC5E7L;
                for (g_751 = 0; (g_751 > 46); ++g_751)
                {
                    char ***l_1035[10] = {&g_709, &g_709, &g_709, &g_709, &g_709, &g_709, &g_709, &g_709, &g_709, &g_709};
                    int *l_1039[7];
                    int **l_1038[8][9] = {{&l_1039[1], &l_1039[5], &l_1039[1], &l_1039[1], &l_1039[5], &l_1039[1], (void*)0, &l_1039[3], &l_1039[5]}, {&l_1039[1], &l_1039[5], &l_1039[1], &l_1039[1], &l_1039[5], &l_1039[1], (void*)0, &l_1039[3], &l_1039[5]}, {&l_1039[1], &l_1039[5], &l_1039[1], &l_1039[1], &l_1039[5], &l_1039[1], (void*)0, &l_1039[3], &l_1039[5]}, {&l_1039[1], &l_1039[5], &l_1039[1], &l_1039[1], &l_1039[5], &l_1039[1], (void*)0, &l_1039[3], &l_1039[5]}, {&l_1039[1], &l_1039[5], &l_1039[1], &l_1039[1], &l_1039[5], &l_1039[1], (void*)0, &l_1039[3], &l_1039[5]}, {&l_1039[1], &l_1039[5], &l_1039[1], &l_1039[1], &l_1039[5], &l_1039[1], (void*)0, &l_1039[3], &l_1039[5]}, {&l_1039[1], &l_1039[5], &l_1039[1], &l_1039[1], &l_1039[5], &l_1039[1], (void*)0, &l_1039[3], &l_1039[5]}, {&l_1039[1], &l_1039[5], &l_1039[1], &l_1039[1], &l_1039[5], &l_1039[1], (void*)0, &l_1039[3], &l_1039[5]}};
                    int l_1048 = 0L;
                    unsigned char *l_1058 = &g_99;
                    unsigned ***l_1063 = (void*)0;
                    unsigned **l_1065[3][5] = {{&g_656, &g_656, &g_656, &g_656, &g_656}, {&g_656, &g_656, &g_656, &g_656, &g_656}, {&g_656, &g_656, &g_656, &g_656, &g_656}};
                    unsigned ***l_1064 = &l_1065[0][4];
                    int l_1066[2];
                    int i, j;
                    for (i = 0; i < 7; i++)
                        l_1039[i] = &g_650;
                    for (i = 0; i < 2; i++)
                        l_1066[i] = 0x5DBD5331L;
                    (*g_70) = ((l_1025 || (safe_add_func_int8_t_s_s(((l_1035[7] = (void*)0) != (void*)0), (safe_sub_func_uint32_t_u_u((((l_1040 = &g_366[2][3][5]) == l_1041) >= (p_28 >= (safe_mul_func_uint8_t_u_u((((**g_737) = (safe_rshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(l_1025, ((p_26 || l_1048) || 0x0FL))), 3))) >= 2UL), p_28)))), (***g_383)))))) || p_28);


                    (*g_70) = (~((((*l_1015) = g_229) , (safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u(l_1025, 3)), (safe_mul_func_int16_t_s_s((-3L), (***g_550)))))) == ((l_1055[3] = (**g_141)) | (((*l_1058) = (safe_mul_func_uint8_t_u_u(p_26, p_29))) & (l_1059 = (p_29 ^ (p_27 & l_1025)))))));
                    for (l_1025 = 22; (l_1025 != (-25)); l_1025 = safe_sub_func_int16_t_s_s(l_1025, 4))
                    {
                        int l_1062 = 0L;
                        return l_1062;



                    }
                    (**g_383) = (p_26 , ((((*l_1064) = &g_656) == ((((l_1066[0] , (**g_737)) , ((**g_737) = ((((safe_sub_func_int16_t_s_s((l_1069 = p_29), 1UL)) != (0x93L >= (safe_mul_func_int16_t_s_s((-9L), ((safe_mul_func_int8_t_s_s((!(l_1055[3] = (safe_mul_func_int16_t_s_s(p_29, l_1076)))), p_26)) >= g_455))))) != (*l_1028)) && g_527))) != 4294967289UL) , (void*)0)) , (***g_382)));
                }
            }
        }
        (***g_382) = (*l_1024);
        (*l_1024) = (*l_1024);
    }
    else
    {
        char *l_1081 = &g_94[2];
        char *l_1082 = &l_1007[6];
        int l_1083 = 0x670138EFL;
        int *l_1084[6][3] = {{&l_1014[0][8][3], &l_1014[0][2][1], (void*)0}, {&l_1014[0][8][3], &l_1014[0][2][1], (void*)0}, {&l_1014[0][8][3], &l_1014[0][2][1], (void*)0}, {&l_1014[0][8][3], &l_1014[0][2][1], (void*)0}, {&l_1014[0][8][3], &l_1014[0][2][1], (void*)0}, {&l_1014[0][8][3], &l_1014[0][2][1], (void*)0}};
        int i, j;
        g_31 = (&g_738 == &g_738);
        l_1084[2][2] = (p_28 , ((((safe_rshift_func_int8_t_s_u(((*l_1082) = ((*l_1081) = ((((*g_738) = l_1007[5]) , g_366[2][3][5]) >= (safe_rshift_func_uint16_t_u_u(p_27, 7))))), 7)) ^ l_1083) & l_1083) , (g_70 = &l_1083)));

        ;
        return p_28;


    }



    return p_26;
}







static short func_32(const unsigned p_33, unsigned p_34, char p_35)
{
    int *l_998 = &g_115;
    for (p_35 = 0; (p_35 != 6); ++p_35)
    {
        short l_42 = (-1L);
        int *l_997 = &g_115;
        (***g_382) = func_38(g_31, g_31, l_42);

        ;
        (***g_382) = (void*)0;

        ;
        (*g_384) = l_998;

        ;
    }


    ;
    for (g_455 = (-9); (g_455 == 20); g_455++)
    {
        short l_1001[2];
        int i;
        for (i = 0; i < 2; i++)
            l_1001[i] = 0x5977L;
        (*g_384) = func_38((*g_70), ((*l_998) , (*l_998)), l_1001[1]);

        ;
    }

    ;
    return (*l_998);
}







static int * func_38(int p_39, unsigned p_40, int p_41)
{
    char l_52[3][5][5] = {{{0xA6L, 0xB5L, 0x7CL, 0xB5L, 0xA6L}, {0xA6L, 0xB5L, 0x7CL, 0xB5L, 0xA6L}, {0xA6L, 0xB5L, 0x7CL, 0xB5L, 0xA6L}, {0xA6L, 0xB5L, 0x7CL, 0xB5L, 0xA6L}, {0xA6L, 0xB5L, 0x7CL, 0xB5L, 0xA6L}}, {{0xA6L, 0xB5L, 0x7CL, 0xB5L, 0xA6L}, {0xA6L, 0xB5L, 0x7CL, 0xB5L, 0xA6L}, {0xA6L, 0xB5L, 0x7CL, 0xB5L, 0xA6L}, {0xA6L, 0xB5L, 0x7CL, 0xB5L, 0xA6L}, {0xA6L, 0xB5L, 0x7CL, 0xB5L, 0xA6L}}, {{0xA6L, 0xB5L, 0x7CL, 0xB5L, 0xA6L}, {0xA6L, 0xB5L, 0x7CL, 0xB5L, 0xA6L}, {0xA6L, 0xB5L, 0x7CL, 0xB5L, 0xA6L}, {0xA6L, 0xB5L, 0x7CL, 0xB5L, 0xA6L}, {0xA6L, 0xB5L, 0x7CL, 0xB5L, 0xA6L}}};
    int l_825 = 0xE13EA883L;
    short *l_857 = &g_455;
    int *l_887[5][4][6] = {{{&l_825, &g_47, &l_825, (void*)0, &g_47, &g_115}, {&l_825, &g_47, &l_825, (void*)0, &g_47, &g_115}, {&l_825, &g_47, &l_825, (void*)0, &g_47, &g_115}, {&l_825, &g_47, &l_825, (void*)0, &g_47, &g_115}}, {{&l_825, &g_47, &l_825, (void*)0, &g_47, &g_115}, {&l_825, &g_47, &l_825, (void*)0, &g_47, &g_115}, {&l_825, &g_47, &l_825, (void*)0, &g_47, &g_115}, {&l_825, &g_47, &l_825, (void*)0, &g_47, &g_115}}, {{&l_825, &g_47, &l_825, (void*)0, &g_47, &g_115}, {&l_825, &g_47, &l_825, (void*)0, &g_47, &g_115}, {&l_825, &g_47, &l_825, (void*)0, &g_47, &g_115}, {&l_825, &g_47, &l_825, (void*)0, &g_47, &g_115}}, {{&l_825, &g_47, &l_825, (void*)0, &g_47, &g_115}, {&l_825, &g_47, &l_825, (void*)0, &g_47, &g_115}, {&l_825, &g_47, &l_825, (void*)0, &g_47, &g_115}, {&l_825, &g_47, &l_825, (void*)0, &g_47, &g_115}}, {{&l_825, &g_47, &l_825, (void*)0, &g_47, &g_115}, {&l_825, &g_47, &l_825, (void*)0, &g_47, &g_115}, {&l_825, &g_47, &l_825, (void*)0, &g_47, &g_115}, {&l_825, &g_47, &l_825, (void*)0, &g_47, &g_115}}};
    char ***l_895 = &g_709;
    int l_924 = (-10L);
    unsigned *l_982 = (void*)0;
    unsigned **l_981 = &l_982;
    unsigned *** const l_980 = &l_981;
    int i, j, k;
    for (p_40 = 0; (p_40 > 21); p_40++)
    {
        int *l_45 = (void*)0;
        int *l_46[4][8][8] = {{{&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}, {&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}, {&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}, {&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}, {&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}, {&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}, {&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}, {&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}}, {{&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}, {&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}, {&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}, {&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}, {&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}, {&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}, {&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}, {&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}}, {{&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}, {&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}, {&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}, {&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}, {&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}, {&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}, {&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}, {&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}}, {{&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}, {&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}, {&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}, {&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}, {&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}, {&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}, {&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}, {&g_31, &g_31, &g_31, (void*)0, &g_31, (void*)0, &g_47, &g_31}}};
        int **l_921 = &l_46[2][3][1];
        int ***l_920 = &l_921;
        short l_922 = 0x21BEL;
        unsigned short **** const l_923 = &g_670;
        short ****l_942 = &g_550;
        int i, j, k;
        p_39 = p_39;
    }
    for (g_751 = 0; (g_751 <= 3); g_751 += 1)
    {
        int l_984 = 4L;
        short *l_985 = &g_455;
        l_984 = (*g_385);
        for (g_650 = 3; (g_650 >= 0); g_650 -= 1)
        {
            int l_991 = (-1L);
            unsigned *l_992 = &g_635;
            for (p_41 = 0; (p_41 <= 5); p_41 += 1)
            {
                (**g_383) = (**g_383);
            }
            for (g_69 = 0; (g_69 <= 3); g_69 += 1)
            {
                unsigned char *l_995 = &g_962;
                short **l_996 = &g_295;
                for (p_41 = 3; (p_41 >= 0); p_41 -= 1)
                {
                    const int l_993 = 0x384FFD73L;
                    for (g_299 = 0; (g_299 <= 3); g_299 += 1)
                    {
                        short *l_986 = &g_455;
                        int **l_994 = &l_887[0][0][4];
                        int i, j, k;
                        (**g_383) = (void*)0;

                        ;
                        (*g_70) = ((((l_985 != l_986) != 0x7576L) && (l_984 = (safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((((g_366[g_751][g_299][(g_299 + 2)] ^ l_991) , &g_833) != l_992), (l_993 , p_39))), l_984)))) , (*g_70));
                        (***g_382) = ((*l_994) = &g_31);

                        ;
                        if ((****g_382))
                            continue;
                    }
                }
                l_996 = (((*l_995) = 0x62L) , ((*g_550) = &l_857));

                ;
                ;
            }
        }
    }


    ;
    return &g_390;



}







static short func_53(int p_54, int p_55)
{
    unsigned char *l_593 = &g_99;
    int *l_594[2][6][6] = {{{&g_115, &g_47, &g_522, &g_522, (void*)0, &g_522}, {&g_115, &g_47, &g_522, &g_522, (void*)0, &g_522}, {&g_115, &g_47, &g_522, &g_522, (void*)0, &g_522}, {&g_115, &g_47, &g_522, &g_522, (void*)0, &g_522}, {&g_115, &g_47, &g_522, &g_522, (void*)0, &g_522}, {&g_115, &g_47, &g_522, &g_522, (void*)0, &g_522}}, {{&g_115, &g_47, &g_522, &g_522, (void*)0, &g_522}, {&g_115, &g_47, &g_522, &g_522, (void*)0, &g_522}, {&g_115, &g_47, &g_522, &g_522, (void*)0, &g_522}, {&g_115, &g_47, &g_522, &g_522, (void*)0, &g_522}, {&g_115, &g_47, &g_522, &g_522, (void*)0, &g_522}, {&g_115, &g_47, &g_522, &g_522, (void*)0, &g_522}}};
    unsigned l_644 = 4294967295UL;
    short **l_658 = (void*)0;
    unsigned short ****l_685 = &g_670;
    char **l_707[5];
    const int l_740 = (-8L);
    unsigned char l_752 = 0xE8L;
    int l_789 = 0L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_707[i] = (void*)0;
    if ((g_522 = ((p_55 , l_593) != (void*)0)))
    {
        unsigned l_595[1][3];
        short l_597 = 0L;
        int l_603 = 0x288D6D0DL;
        const unsigned short l_627[10] = {0x7701L, 65535UL, 0x7701L, 65535UL, 0x7701L, 65535UL, 0x7701L, 65535UL, 0x7701L, 65535UL};
        char *l_631 = &g_94[1];
        int **l_665[7][2][1] = {{{&g_70}, {&g_70}}, {{&g_70}, {&g_70}}, {{&g_70}, {&g_70}}, {{&g_70}, {&g_70}}, {{&g_70}, {&g_70}}, {{&g_70}, {&g_70}}, {{&g_70}, {&g_70}}};
        unsigned l_678 = 4294967289UL;
        int l_717 = 8L;
        char l_732[1];
        unsigned l_765[2];
        unsigned l_774 = 0UL;
        short *l_780 = &g_455;
        short *l_781 = &l_597;
        const unsigned char **l_784 = (void*)0;
        const unsigned char **l_785 = (void*)0;
        const unsigned char *l_787 = &g_788;
        const unsigned char **l_786 = &l_787;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_595[i][j] = 1UL;
        }
        for (i = 0; i < 1; i++)
            l_732[i] = 0x18L;
        for (i = 0; i < 2; i++)
            l_765[i] = 0xD3D03C3EL;
        if ((g_47 = (p_54 != (g_587[1] && (l_595[0][1] = 0x7E3D05C2L)))))
        {
            int *l_596 = &g_522;
            unsigned *l_621 = &g_574;
            int **l_624[1][3];
            int ** const *l_623 = &l_624[0][2];
            int ** const **l_622 = &l_623;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_624[i][j] = &l_594[1][4][0];
            }
            if (l_597)
            {
                for (g_115 = 27; (g_115 <= (-1)); g_115--)
                {
                    unsigned short l_602[7][6][6];
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 6; j++)
                        {
                            for (k = 0; k < 6; k++)
                                l_602[i][j][k] = 5UL;
                        }
                    }
                    for (g_527 = 8; (g_527 != 55); ++g_527)
                    {
                        l_603 = (((**g_137) & p_55) == (g_522 || (((255UL | p_55) & ((p_55 | (g_31 != l_602[2][5][4])) , g_527)) || l_597)));
                    }
                    return p_55;
                }
                return p_55;
            }
            else
            {
                int *l_604 = &g_522;
                (*l_604) = ((+g_115) || (safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((((safe_add_func_uint16_t_u_u((**g_144), (l_603 = (safe_rshift_func_int16_t_s_u(((((void*)0 == (*g_382)) , &g_587[2]) == l_593), 12))))) && ((safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u((0L < p_54), 0x66L)) || (*l_604)) >= (*l_604)), (*l_604))), g_390)) && g_31)) | (*l_596)), l_595[0][1])), 0x7363L)));
                (**g_383) = (void*)0;

                ;
            }

            ;
            (***g_382) = (**g_383);
            (*l_596) = 0x90B29E48L;
            (*l_596) = (((*l_621) = 0UL) , ((g_299 = (g_587[2] == ((((l_595[0][1] , p_55) , (((((void*)0 != l_622) == ((safe_rshift_func_uint16_t_u_s(p_54, 13)) & ((l_603 , 7UL) , l_627[6]))) , 1L) | 0L)) == p_55) < 65528UL))) <= (*l_596)));
        }
        else
        {
            int l_634 = 0x7A9EFE56L;
            int **l_663 = (void*)0;
            const int *l_691[2];
            short *l_739 = &g_455;
            int i;
            for (i = 0; i < 2; i++)
                l_691[i] = &l_634;
            if (p_55)
            {
                short l_636 = 4L;
                int l_659 = 1L;
                for (g_522 = 5; (g_522 != (-1)); g_522 = safe_sub_func_int8_t_s_s(g_522, 2))
                {
                    int **l_630 = &l_594[1][2][0];
                    (*g_384) = ((*l_630) = &p_54);

                    ;
                    p_54 = (((l_631 != &g_94[1]) > g_77) , p_55);
                }



                l_634 = (safe_mul_func_uint8_t_u_u(l_634, (g_635 >= (l_636 = p_55))));
                for (g_99 = 17; (g_99 > 31); g_99 = safe_add_func_int32_t_s_s(g_99, 1))
                {
                    int **l_639 = &l_594[1][4][0];
                    (**g_383) = ((*l_639) = &g_522);

                    ;
                    if ((*g_385))
                        break;
                    (***g_382) = &p_54;

                    ;
                }
                for (g_99 = 0; (g_99 <= 3); ++g_99)
                {
                    unsigned char l_645 = 0x53L;
                    int *l_646 = (void*)0;
                    int *l_647 = (void*)0;
                    int *l_648 = &g_366[2][5][7];
                    int *l_649 = &g_650;
                    unsigned char l_651[3][7][8] = {{{255UL, 1UL, 0x12L, 1UL, 255UL, 253UL, 255UL, 1UL}, {255UL, 1UL, 0x12L, 1UL, 255UL, 253UL, 255UL, 1UL}, {255UL, 1UL, 0x12L, 1UL, 255UL, 253UL, 255UL, 1UL}, {255UL, 1UL, 0x12L, 1UL, 255UL, 253UL, 255UL, 1UL}, {255UL, 1UL, 0x12L, 1UL, 255UL, 253UL, 255UL, 1UL}, {255UL, 1UL, 0x12L, 1UL, 255UL, 253UL, 255UL, 1UL}, {255UL, 1UL, 0x12L, 1UL, 255UL, 253UL, 255UL, 1UL}}, {{255UL, 1UL, 0x12L, 1UL, 255UL, 253UL, 255UL, 1UL}, {255UL, 1UL, 0x12L, 1UL, 255UL, 253UL, 255UL, 1UL}, {255UL, 1UL, 0x12L, 1UL, 255UL, 253UL, 255UL, 1UL}, {255UL, 1UL, 0x12L, 1UL, 255UL, 253UL, 255UL, 1UL}, {255UL, 1UL, 0x12L, 1UL, 255UL, 253UL, 255UL, 1UL}, {255UL, 1UL, 0x12L, 1UL, 255UL, 253UL, 255UL, 1UL}, {255UL, 1UL, 0x12L, 1UL, 255UL, 253UL, 255UL, 1UL}}, {{255UL, 1UL, 0x12L, 1UL, 255UL, 253UL, 255UL, 1UL}, {255UL, 1UL, 0x12L, 1UL, 255UL, 253UL, 255UL, 1UL}, {255UL, 1UL, 0x12L, 1UL, 255UL, 253UL, 255UL, 1UL}, {255UL, 1UL, 0x12L, 1UL, 255UL, 253UL, 255UL, 1UL}, {255UL, 1UL, 0x12L, 1UL, 255UL, 253UL, 255UL, 1UL}, {255UL, 1UL, 0x12L, 1UL, 255UL, 253UL, 255UL, 1UL}, {255UL, 1UL, 0x12L, 1UL, 255UL, 253UL, 255UL, 1UL}}};
                    int i, j, k;
                    l_651[2][5][4] = (safe_mul_func_int16_t_s_s(l_634, ((((g_574 ^ 1UL) , (l_644 != (0x227062D0L || 1L))) != l_636) & (((((*l_649) = ((*l_648) = l_645)) , 1L) && 0xC9L) == (-7L)))));
                    for (p_55 = 1; (p_55 >= 0); p_55 -= 1)
                    {
                        p_54 = 1L;
                        if (p_54)
                            continue;
                    }
                    for (g_522 = 0; (g_522 >= 6); ++g_522)
                    {
                        unsigned *l_655 = &g_635;
                        unsigned **l_654[10][5] = {{&l_655, &l_655, &l_655, &l_655, &l_655}, {&l_655, &l_655, &l_655, &l_655, &l_655}, {&l_655, &l_655, &l_655, &l_655, &l_655}, {&l_655, &l_655, &l_655, &l_655, &l_655}, {&l_655, &l_655, &l_655, &l_655, &l_655}, {&l_655, &l_655, &l_655, &l_655, &l_655}, {&l_655, &l_655, &l_655, &l_655, &l_655}, {&l_655, &l_655, &l_655, &l_655, &l_655}, {&l_655, &l_655, &l_655, &l_655, &l_655}, {&l_655, &l_655, &l_655, &l_655, &l_655}};
                        unsigned char *l_657 = &g_527;
                        int i, j;
                        if (p_54)
                            break;
                        (*g_384) = &p_54;

                        ;
                        l_659 = (((*l_657) = ((g_656 = &g_574) != (void*)0)) & ((&l_645 == (void*)0) <= ((g_574 , l_658) != (*g_550))));

                        ;
                    }
                    if (p_54)
                        break;
                }
            }
            else
            {
                char l_660 = 0L;
                int *l_671 = &g_522;
                unsigned short *****l_686 = &g_669;
                if ((p_54 = l_660))
                {
                    unsigned short l_666 = 0x6786L;
                    g_522 = (p_55 , p_55);
                    for (l_634 = (-18); (l_634 == 20); l_634++)
                    {
                        int ***l_664[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_664[i] = &l_663;
                        l_665[3][1][0] = l_663;
                        p_54 = (p_55 == (l_666 < (safe_add_func_uint16_t_u_u((((void*)0 != g_669) != l_660), (p_54 >= p_55)))));
                        l_671 = &p_54;

                        ;
                    }

                    ;
                }
                else
                {
                    p_54 = (*l_671);
                }

                ;
                (***g_382) = (((*l_671) = p_54) , &p_54);

                ;
                if ((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((l_685 == ((*l_686) = &g_670)) != p_55) < 0x9493F861L), p_55)), 14)), 7)))
                {
                    for (g_522 = 2; (g_522 >= 0); g_522 -= 1)
                    {
                        (***g_382) = (***g_382);
                    }
                    g_115 = (safe_add_func_int16_t_s_s(p_54, (safe_sub_func_uint16_t_u_u(((g_139[2][2] >= ((*l_671) != g_587[1])) , 65535UL), p_54))));
                    l_691[0] = (***g_382);


                }
                else
                {
                    int l_692 = (-6L);
                    if (l_692)
                    {
                        char l_697 = (-1L);
                        int *l_700 = (void*)0;
                        int l_701 = (-9L);
                        unsigned char *l_705 = (void*)0;
                        short *l_706 = &l_597;
                        (***g_382) = l_671;

                        ;
                    }
                    else
                    {
                        char ***l_708[5];
                        int *l_718 = &g_31;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_708[i] = (void*)0;
                        (*l_671) = (~(***g_383));
                        g_709 = (g_31 , l_707[3]);

                        ;
                        (***g_382) = (**g_383);
                        (*l_671) = 0xA4449563L;
                    }

                    ;
                    (**g_383) = &p_54;

                    ;
                    return p_54;


                }


                if ((safe_add_func_uint32_t_u_u(g_229, ((((void*)0 == &g_383) > ((*l_593) = (p_55 , g_139[1][2]))) , ((*l_671) = p_55)))))
                {
                    (*g_384) = (**g_383);
                }
                else
                {
                    int l_729 = 0x5F5903FBL;
                    (*l_671) = p_55;
                    return l_729;


                }
            }




            for (g_69 = 0; (g_69 < 12); g_69 = safe_add_func_int8_t_s_s(g_69, 5))
            {
                return l_732[0];


            }
            if ((safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((((*l_739) = (g_737 != (void*)0)) > (**g_141)), (p_54 , l_740))), ((~(0L & p_55)) != (((2L > p_54) >= 6L) >= p_55)))))
            {
                int *l_743 = &l_634;
                p_54 = 1L;
                for (l_603 = 0; (l_603 <= (-27)); l_603--)
                {
                    (*g_384) = l_743;

                    ;
                    return p_54;


                }
                for (g_77 = 0; (g_77 <= 4); g_77 += 1)
                {
                    char l_746 = 0x10L;
                    short l_753 = 6L;
                    int *l_757 = (void*)0;
                    unsigned char *l_764 = &l_752;
                    int i;
                    if ((safe_sub_func_int32_t_s_s(6L, ((g_635 , (((p_54 != ((void*)0 != g_314[g_77])) | l_746) , (safe_rshift_func_uint8_t_u_u(((((((*l_631) = (p_55 <= (safe_add_func_int32_t_s_s(g_751, l_746)))) & 0x86L) && l_746) , l_752) , g_139[3][1]), p_54)))) , (**g_737)))))
                    {
                        unsigned char l_754 = 0x2CL;
                        (*l_743) = ((0xC4L == g_366[0][5][5]) & ((**g_737) = ((((l_753 | ((0x0AF54E74L == l_754) , 8L)) != (p_54 >= 247UL)) < (safe_mod_func_uint16_t_u_u(p_55, 9L))) > p_55)));
                        (**g_383) = l_757;

                        ;
                        (*l_743) = (*l_743);
                        if (p_55)
                            continue;
                    }
                    else
                    {
                        (**g_383) = (p_55 , &p_54);

                        ;
                    }

                    ;
                    (*g_384) = ((safe_add_func_uint8_t_u_u(g_390, (safe_mod_func_uint8_t_u_u((g_587[2] , (((*l_593) = (0xF3L & (0x08L > (p_54 < (p_54 , (&g_710 != (void*)0)))))) != (((*l_764) = ((**g_737) | 0x291DBE59L)) <= g_299))), p_55)))) , (**g_383));
                    if (p_54)
                        continue;
                    if (p_54)
                        break;
                    for (g_650 = 0; (g_650 <= 0); g_650 += 1)
                    {
                        int l_771 = 6L;
                        int l_772[10] = {0L, (-6L), 1L, 1L, (-6L), 0L, (-6L), 1L, 1L, (-6L)};
                        unsigned char **l_773 = &l_593;
                        int i, j;
                        (*l_743) = (l_765[0] , ((((*l_743) , ((p_55 , (((+((((p_54 != 0xAA2FL) >= ((l_764 != ((*l_773) = (((**g_141) ^ ((p_54 <= (~(l_772[6] = ((safe_unary_minus_func_int8_t_s((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s((((l_595[g_650][g_650] = (l_771 , (*g_738))) || 1UL) , g_299), 6)), 6)))) <= 1UL)))) != 0x23L)) , l_631))) & p_54)) > p_54) , l_774)) , (*l_743)) > p_54)) , l_771)) , (*l_743)) | (*g_138)));

                        ;
                        return p_55;


                    }
                }
            }
            else
            {
                int l_775 = 1L;
                l_775 = p_54;
            }
            return p_55;


        }

        ;
        (**g_383) = (*g_384);
    }
    else
    {
        short *l_792 = &g_455;
        int l_803 = (-1L);
        const int l_810 = (-1L);
        (**g_383) = ((g_587[1] , 0UL) , &p_54);

        ;
        p_54 = 0x1B2CA8D5L;
        return p_54;


    }

    ;
    return p_54;
}







static int func_56(int * p_57)
{
    short l_446 = 0xF09CL;
    int l_453 = 8L;
    short *l_454 = &g_455;
    short *l_456[7] = {&l_446, &l_446, &l_446, &l_446, &l_446, &l_446, &l_446};
    int l_457 = 0L;
    int l_458 = 0x4FC1ACF7L;
    unsigned *l_489 = &g_299;
    unsigned **l_488[1];
    int ** const *l_504[3];
    const int *l_532 = &g_390;
    unsigned char *l_554 = &g_99;
    int *l_571 = &l_457;
    int i;
    for (i = 0; i < 1; i++)
        l_488[i] = &l_489;
    for (i = 0; i < 3; i++)
        l_504[i] = (void*)0;
    if ((safe_mod_func_uint8_t_u_u(g_390, (l_446 && ((safe_add_func_int16_t_s_s(l_446, l_446)) , (((l_458 = (l_457 = (safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((l_453 = l_446), ((l_446 | ((*l_454) = (g_115 , ((**g_294) = l_446)))) , g_77))), l_446)))) > l_446) > l_446))))))
    {
        unsigned l_461[10][6][4] = {{{0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}}, {{0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}}, {{0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}}, {{0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}}, {{0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}}, {{0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}}, {{0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}}, {{0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}}, {{0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}}, {{0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}, {0x6BB1CFBEL, 0xBE73EF34L, 4294967295UL, 0x330DDA57L}}};
        unsigned *l_467[4][1][4] = {{{&l_461[5][2][1], &l_461[3][0][0], (void*)0, (void*)0}}, {{&l_461[5][2][1], &l_461[3][0][0], (void*)0, (void*)0}}, {{&l_461[5][2][1], &l_461[3][0][0], (void*)0, (void*)0}}, {{&l_461[5][2][1], &l_461[3][0][0], (void*)0, (void*)0}}};
        unsigned **l_466 = &l_467[3][0][0];
        char *l_472 = (void*)0;
        char *l_473 = &g_94[2];
        int *l_474 = &l_457;
        int i, j, k;
        (**g_383) = &l_458;

        ;
        (*l_474) = l_461[3][0][0];
        for (l_458 = 0; (l_458 < 17); ++l_458)
        {
            unsigned short l_477 = 0xE365L;
            (**g_383) = (l_477 , (***g_382));
        }
    }
    else
    {
        char l_495 = 0L;
        int *l_521 = (void*)0;
        const short ****l_548 = (void*)0;
        short l_551[4][8] = {{0x09CDL, (-1L), 0x2718L, 1L, 0xB50BL, 0x4EEDL, 0xB50BL, 1L}, {0x09CDL, (-1L), 0x2718L, 1L, 0xB50BL, 0x4EEDL, 0xB50BL, 1L}, {0x09CDL, (-1L), 0x2718L, 1L, 0xB50BL, 0x4EEDL, 0xB50BL, 1L}, {0x09CDL, (-1L), 0x2718L, 1L, 0xB50BL, 0x4EEDL, 0xB50BL, 1L}};
        unsigned char l_552 = 0xEBL;
        int *l_572 = (void*)0;
        short **l_590 = &l_454;
        short **l_591 = (void*)0;
        short **l_592[9] = {&l_456[4], &l_456[4], &l_456[6], &l_456[4], &l_456[4], &l_456[6], &l_456[4], &l_456[4], &l_456[6]};
        int i, j;
        for (g_115 = (-29); (g_115 <= (-23)); g_115 = safe_add_func_int16_t_s_s(g_115, 1))
        {
            short l_494 = (-1L);
            char *l_505[9] = {&g_94[2], &g_94[2], &g_94[2], &g_94[2], &g_94[2], &g_94[2], &g_94[2], &g_94[2], &g_94[2]};
            int l_506 = 0x0F9A3BEBL;
            int i;
            l_506 = (safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((((safe_add_func_uint8_t_u_u(((void*)0 == l_488[0]), (!((**g_137) == (((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s(l_494, (((l_495 & ((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((l_458 , (safe_sub_func_int16_t_s_s((l_504[0] != l_504[2]), (((g_94[4] = 4L) && (-7L)) > l_494)))), l_494)), (**g_144))) != (*g_145)), 3)) <= (*g_295))) , 0x107BL) >= l_494))), 0xB8L)) && 0x09D2L) , l_494))))) ^ (**g_144)) , 0x3B678F5AL) , 1UL), g_366[2][3][5])), 3));
            for (g_390 = 0; (g_390 >= 0); g_390 -= 1)
            {
                char l_519 = 0xB2L;
                for (g_299 = 0; (g_299 <= 0); g_299 += 1)
                {
                    int l_520 = 0L;
                    int i;
                    if (((-8L) || (safe_lshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((l_495 != l_506), (safe_lshift_func_uint16_t_u_u(((-7L) == l_495), ((safe_rshift_func_uint16_t_u_u((((l_495 , (safe_add_func_int16_t_s_s((!(safe_lshift_func_uint8_t_u_s(((**g_137) && 0x26D5L), 1))), l_506))) , l_494) != 5UL), (**g_144))) & 0xFEL))))) >= 0xA5CC6EE2L), l_519))))
                    {
                        if (l_520)
                            break;
                        (*g_384) = l_521;

                        ;
                        if (g_522)
                            break;
                    }
                    else
                    {
                        return g_299;
                    }

                    ;
                    for (g_69 = 1; (g_69 != 39); g_69 = safe_add_func_uint16_t_u_u(g_69, 1))
                    {
                        l_521 = p_57;


                        (***g_382) = (***g_382);
                        return g_31;
                    }
                    g_47 = ((safe_rshift_func_uint16_t_u_u((l_506 < (g_527 = l_519)), 7)) & (g_94[2] > (safe_rshift_func_int8_t_s_u(((safe_add_func_uint16_t_u_u(65531UL, 8L)) , l_519), 6))));
                }
                if (l_494)
                    continue;
            }
            l_532 = l_532;
        }
        if ((*l_532))
        {
            const int l_535 = 0L;
            unsigned short **l_553 = (void*)0;
            unsigned l_557 = 0xF31CF7DCL;
            unsigned short ***l_559 = &g_144;
            unsigned short ****l_558 = &l_559;
            int *l_562 = &g_390;
            for (g_299 = (-6); (g_299 < 49); ++g_299)
            {
                return g_366[0][5][1];
            }
            l_553 = ((l_535 || g_527) , ((((safe_add_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u(((((**g_294) | l_535) || (((-1L) | (*l_532)) & ((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((l_495 ^ (l_548 == g_549[0][3])), l_551[1][3])), 0xB5L)), 65535UL)), (*g_138))) || 0UL))) < g_94[4]), g_366[2][3][5])) , l_535), l_552)) , 0L) && l_535) , (void*)0));
            if (((l_535 != ((l_554 != (g_390 , (void*)0)) , (9L <= ((l_551[1][3] > l_535) <= (safe_lshift_func_uint16_t_u_u(((*l_532) ^ ((((*l_558) = (((l_552 , l_557) || g_115) , &g_144)) == &g_144) != g_299)), (*g_138))))))) && (*g_138)))
            {
                (*g_384) = p_57;


                for (g_522 = 26; (g_522 == (-9)); g_522 = safe_sub_func_int8_t_s_s(g_522, 3))
                {
                    int l_567[6] = {0x58F81571L, 0xF1F8B6ACL, 0x58F81571L, 0xF1F8B6ACL, 0x58F81571L, 0xF1F8B6ACL};
                    int i;
                    (**g_383) = l_562;

                    ;
                }


            }
            else
            {
                int *l_568 = &g_390;
                (*g_384) = l_521;

                ;
                (*g_384) = (void*)0;
                (***g_382) = (void*)0;
            }


            (*g_384) = (**g_383);
        }
        else
        {
            unsigned *l_573 = &g_574;
            const int l_588 = 0xCC187775L;
            const int **l_589 = &l_532;
            (**g_383) = &l_588;

            ;
            (*l_589) = ((***g_382) = (void*)0);

            ;
            ;
        }


        ;
        (*l_571) = (((**g_550) = &l_446) == (l_456[4] = ((*l_590) = &l_551[1][3])));

        ;
        ;

        (*l_571) = 0x7691516DL;
    }

    ;



    ;
    return g_522;



}







static int * func_58(int * p_59, short p_60)
{
    unsigned l_61 = 0xFD1A6840L;
    int *l_64 = &g_47;
    int **l_65 = &l_64;
    int **l_66 = (void*)0;
    int *l_67 = (void*)0;
    unsigned short *l_68 = &g_69;
    unsigned char l_112[1];
    short l_123 = 0x8833L;
    int l_186 = (-1L);
    char *l_217 = &g_94[1];
    unsigned short l_253[8] = {65535UL, 65535UL, 0x6C63L, 65535UL, 65535UL, 0x6C63L, 65535UL, 65535UL};
    int *l_336 = &l_186;
    unsigned short **l_339 = (void*)0;
    int *l_420 = &g_366[3][1][2];
    int **l_419 = &l_420;
    int i;
    for (i = 0; i < 1; i++)
        l_112[i] = 0UL;
    l_61 = 0x149F7FAEL;
    g_70 = (((*l_68) = (safe_sub_func_int8_t_s_s((-1L), ((g_31 < ((((*l_65) = l_64) == (void*)0) & g_47)) > ((p_60 < g_47) < ((l_67 = &g_31) == &g_47)))))) , &g_31);

    ;
    ;
    if ((*g_70))
    {
        unsigned l_71[1];
        unsigned short **l_142 = (void*)0;
        int i;
        for (i = 0; i < 1; i++)
            l_71[i] = 0x8991CD3CL;
        for (p_60 = 0; (p_60 >= 0); p_60 -= 1)
        {
            int l_98 = (-1L);
            short *l_119 = (void*)0;
            short **l_118 = &l_119;
            int i;
            for (g_47 = 0; (g_47 <= 0); g_47 += 1)
            {
                for (g_69 = 0; (g_69 <= 0); g_69 += 1)
                {
                    short *l_76 = &g_77;
                    int i;
                    if (((safe_mul_func_int16_t_s_s(l_71[g_47], g_47)) < ((*l_76) = ((+p_60) ^ (safe_mul_func_int16_t_s_s((g_69 || l_71[g_47]), p_60))))))
                    {
                        unsigned short ** const l_78 = &l_68;
                        unsigned short **l_80[10][1][5] = {{{&l_68, &l_68, (void*)0, (void*)0, &l_68}}, {{&l_68, &l_68, (void*)0, (void*)0, &l_68}}, {{&l_68, &l_68, (void*)0, (void*)0, &l_68}}, {{&l_68, &l_68, (void*)0, (void*)0, &l_68}}, {{&l_68, &l_68, (void*)0, (void*)0, &l_68}}, {{&l_68, &l_68, (void*)0, (void*)0, &l_68}}, {{&l_68, &l_68, (void*)0, (void*)0, &l_68}}, {{&l_68, &l_68, (void*)0, (void*)0, &l_68}}, {{&l_68, &l_68, (void*)0, (void*)0, &l_68}}, {{&l_68, &l_68, (void*)0, (void*)0, &l_68}}};
                        unsigned short ***l_79 = &l_80[1][0][1];
                        int *l_81[5];
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                            l_81[i] = &g_31;
                        (*l_79) = l_78;
                        return l_81[2];


                    }
                    else
                    {
                        return p_59;


                    }
                }
            }
            if (l_71[p_60])
                break;
            if ((*g_70))
                break;
            for (g_47 = 0; (g_47 <= 0); g_47 += 1)
            {
                char l_88 = (-5L);
                int l_95 = (-2L);
                char l_116 = 0x61L;
                char l_124 = 0xF2L;
                const unsigned short *l_136 = &g_69;
                const unsigned short **l_135 = &l_136;
                int l_149 = 0x3B3D75BCL;
            }
        }
        (*l_65) = p_59;


    }
    else
    {
        int l_158[6][10] = {{1L, (-2L), (-3L), (-3L), 1L, (-3L), (-3L), (-2L), 1L, 0x23A2376BL}, {1L, (-2L), (-3L), (-3L), 1L, (-3L), (-3L), (-2L), 1L, 0x23A2376BL}, {1L, (-2L), (-3L), (-3L), 1L, (-3L), (-3L), (-2L), 1L, 0x23A2376BL}, {1L, (-2L), (-3L), (-3L), 1L, (-3L), (-3L), (-2L), 1L, 0x23A2376BL}, {1L, (-2L), (-3L), (-3L), 1L, (-3L), (-3L), (-2L), 1L, 0x23A2376BL}, {1L, (-2L), (-3L), (-3L), 1L, (-3L), (-3L), (-2L), 1L, 0x23A2376BL}};
        short *l_181[1][7][3];
        int l_185 = 0x5932648BL;
        char *l_216 = &g_94[2];
        int l_232 = 0L;
        int *l_309 = &l_158[4][0];
        short **l_310 = &g_295;
        char l_323 = 6L;
        unsigned short l_349 = 0x5BF4L;
        char l_437 = (-1L);
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 7; j++)
            {
                for (k = 0; k < 3; k++)
                    l_181[i][j][k] = &l_123;
            }
        }
        (*l_65) = p_59;


        if ((*g_70))
        {
            short l_157 = 0x6BFCL;
            int l_184 = 0L;
            short **l_190 = &l_181[0][3][0];
            short ** const *l_189 = &l_190;
            int **l_239 = &l_64;
            const unsigned l_289 = 0x65DA1E0EL;
            for (l_61 = 0; (l_61 > 11); l_61 = safe_add_func_int32_t_s_s(l_61, 8))
            {
                short *l_156[10][10][1] = {{{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}};
                short **l_155 = &l_156[9][1][0];
                char *l_159 = &g_94[2];
                unsigned l_168 = 0x3FF94C2EL;
                unsigned char *l_169[6][6] = {{&l_112[0], &l_112[0], &l_112[0], &l_112[0], &l_112[0], &l_112[0]}, {&l_112[0], &l_112[0], &l_112[0], &l_112[0], &l_112[0], &l_112[0]}, {&l_112[0], &l_112[0], &l_112[0], &l_112[0], &l_112[0], &l_112[0]}, {&l_112[0], &l_112[0], &l_112[0], &l_112[0], &l_112[0], &l_112[0]}, {&l_112[0], &l_112[0], &l_112[0], &l_112[0], &l_112[0], &l_112[0]}, {&l_112[0], &l_112[0], &l_112[0], &l_112[0], &l_112[0], &l_112[0]}};
                int i, j, k;
                for (g_115 = 0; (g_115 < 28); g_115 = safe_add_func_uint8_t_u_u(g_115, 8))
                {
                    return p_59;


                }
                l_158[1][9] = ((((*l_155) = &p_60) == &g_77) , (((*l_159) = (l_157 < l_158[1][9])) && (g_99 = ((safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(p_60, (safe_mul_func_int8_t_s_s(0x5FL, 253UL)))), 0xECE7258FL)), l_168)) < g_77))));


            }
            for (l_61 = 1; (l_61 == 59); l_61 = safe_add_func_uint16_t_u_u(l_61, 9))
            {
                unsigned char *l_172 = &l_112[0];
                int *l_182 = &l_158[1][9];
                unsigned char *l_183[3];
                short **l_188 = &l_181[0][3][0];
                short ***l_187[10] = {(void*)0, (void*)0, &l_188, (void*)0, (void*)0, &l_188, (void*)0, (void*)0, &l_188, (void*)0};
                unsigned short l_202[8] = {0xE0AAL, 0xE0AAL, 0x3E52L, 0xE0AAL, 0xE0AAL, 0x3E52L, 0xE0AAL, 0xE0AAL};
                char *l_203 = &g_94[3];
                unsigned l_256 = 0xF1CAD828L;
                int i;
                for (i = 0; i < 3; i++)
                    l_183[i] = &g_99;
                l_186 = (((*l_172) = l_157) < (safe_sub_func_int16_t_s_s(p_60, ((safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((((*l_182) = (((+g_94[2]) | (safe_mul_func_int16_t_s_s((-8L), (0x561CL == (l_181[0][3][0] == &l_123))))) >= g_31)) & ((l_184 = p_60) , (*g_70))) , g_139[2][2]), l_185)), 7UL)) & g_94[5]))));
                for (l_123 = 0; (l_123 <= 0); l_123 += 1)
                {
                    int *l_191 = &l_185;
                    int i;
                    for (l_186 = 5; (l_186 >= 0); l_186 -= 1)
                    {
                        int i;
                        (*l_182) = ((l_187[5] != l_189) & l_112[l_123]);
                        l_191 = (void*)0;

                        ;
                    }

                    ;
                    p_59 = (l_112[l_123] , p_59);
                    (*l_182) = (*p_59);
                    for (g_115 = 5; (g_115 >= 0); g_115 -= 1)
                    {
                        (*l_182) = (*g_70);
                    }
                }
                if ((safe_mul_func_int8_t_s_s(((*l_203) = ((p_60 ^ (g_47 , (((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s((g_115 , g_94[2]), ((g_77 || l_157) == g_69))), l_157)), ((((*l_182) == 0x62D161A4L) || g_139[2][2]) , l_202[5]))), g_77)) <= g_94[2]) & 0x81A1L))) , p_60)), g_115)))
                {
                    unsigned char l_206 = 255UL;
                    int l_218[1][1][8];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 8; k++)
                                l_218[i][j][k] = 0L;
                        }
                    }
                    for (g_47 = 0; (g_47 == 11); g_47++)
                    {
                        g_115 = (p_60 , (*p_59));
                        (*l_182) = l_184;
                        (*l_182) = l_206;
                    }
                    if ((*g_70))
                    {
                        const unsigned short ** const *l_208 = (void*)0;
                        int l_209[7][10][3] = {{{(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}}, {{(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}}, {{(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}}, {{(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}}, {{(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}}, {{(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}}, {{(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}, {(-7L), 5L, 0x00C1A7E2L}}};
                        int i, j, k;
                        (*l_182) = 1L;
                        l_218[0][0][3] = (safe_unary_minus_func_int16_t_s((l_185 >= (l_208 == (((((((l_209[6][8][2] || (safe_add_func_int32_t_s_s((*g_70), l_184))) || ((((safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((l_216 == l_203) , (l_217 == (l_203 = (g_139[2][2] , &g_94[2])))), (*l_64))), (-1L))) < 0x86F4L) , 0x4F11L) != g_94[4])) ^ 1L) || 1L) , g_139[2][2]) ^ p_60) , (void*)0)))));
                        p_59 = p_59;
                    }
                    else
                    {
                        if ((*l_64))
                            break;
                    }
                    for (l_123 = (-7); (l_123 <= (-12)); l_123 = safe_sub_func_uint8_t_u_u(l_123, 6))
                    {
                        const int *l_228 = &g_229;
                        const int **l_227[3][3][9] = {{{&l_228, &l_228, &l_228, &l_228, &l_228, &l_228, &l_228, &l_228, &l_228}, {&l_228, &l_228, &l_228, &l_228, &l_228, &l_228, &l_228, &l_228, &l_228}, {&l_228, &l_228, &l_228, &l_228, &l_228, &l_228, &l_228, &l_228, &l_228}}, {{&l_228, &l_228, &l_228, &l_228, &l_228, &l_228, &l_228, &l_228, &l_228}, {&l_228, &l_228, &l_228, &l_228, &l_228, &l_228, &l_228, &l_228, &l_228}, {&l_228, &l_228, &l_228, &l_228, &l_228, &l_228, &l_228, &l_228, &l_228}}, {{&l_228, &l_228, &l_228, &l_228, &l_228, &l_228, &l_228, &l_228, &l_228}, {&l_228, &l_228, &l_228, &l_228, &l_228, &l_228, &l_228, &l_228, &l_228}, {&l_228, &l_228, &l_228, &l_228, &l_228, &l_228, &l_228, &l_228, &l_228}}};
                        const int ***l_226 = &l_227[1][0][2];
                        const int ****l_225 = &l_226;
                        int i, j, k;
                        (*l_182) = (((safe_add_func_uint32_t_u_u(0x9D389A2BL, ((safe_mod_func_uint16_t_u_u((((*l_225) = (void*)0) != (void*)0), (safe_add_func_uint32_t_u_u((l_218[0][0][7] = l_232), (l_184 = (g_229 | (((safe_mul_func_uint8_t_u_u(l_184, g_229)) & g_77) || (l_158[2][8] <= (*g_70))))))))) | g_77))) || (*g_138)) || p_60);

                        ;
                        (*l_65) = p_59;
                    }
                    for (l_206 = 0; (l_206 <= 5); l_206 += 1)
                    {
                        int ***l_240 = &l_66;
                        int i, j;
                        l_158[l_206][(l_206 + 1)] = (((***l_189) = l_158[l_206][(l_206 + 3)]) | ((**g_144) = ((p_60 = ((((safe_add_func_uint8_t_u_u((g_77 , (((g_99 = (safe_mod_func_int16_t_s_s(((((((l_158[l_206][(l_206 + 3)] != (-6L)) != (((*l_240) = l_239) == &g_70)) || (*l_64)) && g_31) == (safe_mul_func_int16_t_s_s(((2L <= p_60) == p_60), 65535UL))) , g_115), 65526UL))) , g_77) || (*l_182))), 1UL)) & 0xE1L) , 0x88FAL) | 2UL)) == 65535UL)));

                        ;
                        return &g_31;


                    }
                }
                else
                {
                    for (l_186 = (-20); (l_186 <= (-14)); l_186 = safe_add_func_uint8_t_u_u(l_186, 3))
                    {
                        g_115 = ((*l_182) = 0x6784C590L);
                    }
                }
                for (l_185 = 0; (l_185 <= (-23)); l_185 = safe_sub_func_int32_t_s_s(l_185, 6))
                {
                    unsigned l_254 = 4294967295UL;
                    unsigned short ***l_255 = &g_144;
                    l_256 = ((*l_182) = ((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s(((p_60 ^ (*l_182)) || ((((l_232 == (safe_mul_func_uint16_t_u_u(((**g_144) = l_253[0]), ((l_254 ^ (l_254 ^ (**g_137))) == 0x5C14573AL)))) > ((void*)0 != l_255)) >= p_60) == g_139[2][2])), g_115)), (**l_65))) >= 6L));
                    (*l_182) = (*g_70);
                    for (g_69 = 0; (g_69 <= 5); g_69 += 1)
                    {
                        g_70 = p_59;


                        return p_59;


                    }
                }
            }
            if ((safe_mul_func_uint16_t_u_u(l_158[1][8], p_60)))
            {
                return &g_31;


            }
            else
            {
                int l_279[9] = {9L, 9L, 0xE3340633L, 9L, 9L, 0xE3340633L, 9L, 9L, 0xE3340633L};
                int *l_284[4][2] = {{&l_185, &l_232}, {&l_185, &l_232}, {&l_185, &l_232}, {&l_185, &l_232}};
                short **l_296 = &g_295;
                short l_301 = (-1L);
                int i, j;
                for (l_186 = 0; (l_186 == 26); ++l_186)
                {
                    if ((*p_59))
                        break;
                    for (g_47 = (-8); (g_47 == 13); g_47 = safe_add_func_uint32_t_u_u(g_47, 7))
                    {
                        int *l_263 = &g_115;
                        (*l_263) = (*p_59);
                        if ((*g_70))
                            break;
                    }
                    (*l_65) = &g_115;

                    ;
                    p_59 = p_59;
                }


                if ((*p_59))
                {
                    int l_281 = 0x210BA1ACL;
                    (*l_239) = p_59;


                    for (l_184 = 0; (l_184 <= (-2)); l_184 = safe_sub_func_int32_t_s_s(l_184, 1))
                    {
                        unsigned char *l_278 = &l_112[0];
                        unsigned *l_280 = &l_61;
                        l_281 = (g_115 & (((*l_280) = ((-1L) ^ (g_94[2] && (safe_add_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_mul_func_int8_t_s_s(((((*l_216) = (safe_mod_func_uint8_t_u_u((*l_64), 0xF3L))) , g_139[2][2]) | ((*l_278) = 249UL)), p_60)) && p_60), 7)), p_60)), l_279[0])) , p_60), 252UL))))) > (*p_59)));
                    }
                }
                else
                {
                    int * const l_282 = &l_158[1][9];
                    int **l_283 = &l_64;
                    (*l_283) = l_282;

                    ;
                    return p_59;


                }


                if ((l_184 = 1L))
                {
                    l_186 = (g_115 = 0L);
                    return &g_31;


                }
                else
                {
                    const short l_297 = 4L;
                    short **l_298 = &l_181[0][0][2];
                    unsigned char *l_300[3];
                    int *l_302 = &g_115;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_300[i] = &l_112[0];
                    if (((safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(l_289, (((safe_mul_func_uint16_t_u_u(((g_99 = (l_185 = ((safe_sub_func_int8_t_s_s(((((void*)0 != g_294) , l_296) != ((l_297 , (0xFE46L <= (*l_67))) , l_298)), g_31)) , g_299))) <= (**l_239)), p_60)) >= (*l_64)) ^ l_297))), 0x9AL)) < l_301))
                    {
                        return l_302;


                    }
                    else
                    {
                        int **l_307 = (void*)0;
                        int **l_308 = &l_302;
                        g_47 = (((*g_70) == ((**l_65) ^ ((**g_141) && ((**l_296) = ((safe_add_func_int16_t_s_s((**g_294), 0xE1D7L)) & (safe_add_func_uint16_t_u_u(0x1986L, ((**l_298) = (p_60 , (((*l_308) = (void*)0) != ((g_115 = (4L ^ 1UL)) , p_59))))))))))) ^ 0x8EFCL);

                        ;
                        l_309 = ((*l_65) = (*l_239));


                    }

                    ;

                }


                g_47 = (*g_70);
            }


            (*l_239) = p_59;
        }
        else
        {
            short ***l_311 = &g_294;
            short **l_313[4][3][4] = {{{&l_181[0][3][0], &l_181[0][3][0], &g_295, &l_181[0][3][0]}, {&l_181[0][3][0], &l_181[0][3][0], &g_295, &l_181[0][3][0]}, {&l_181[0][3][0], &l_181[0][3][0], &g_295, &l_181[0][3][0]}}, {{&l_181[0][3][0], &l_181[0][3][0], &g_295, &l_181[0][3][0]}, {&l_181[0][3][0], &l_181[0][3][0], &g_295, &l_181[0][3][0]}, {&l_181[0][3][0], &l_181[0][3][0], &g_295, &l_181[0][3][0]}}, {{&l_181[0][3][0], &l_181[0][3][0], &g_295, &l_181[0][3][0]}, {&l_181[0][3][0], &l_181[0][3][0], &g_295, &l_181[0][3][0]}, {&l_181[0][3][0], &l_181[0][3][0], &g_295, &l_181[0][3][0]}}, {{&l_181[0][3][0], &l_181[0][3][0], &g_295, &l_181[0][3][0]}, {&l_181[0][3][0], &l_181[0][3][0], &g_295, &l_181[0][3][0]}, {&l_181[0][3][0], &l_181[0][3][0], &g_295, &l_181[0][3][0]}}};
            short ***l_312[7];
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_312[i] = &l_313[2][1][0];
            g_314[3] = ((*l_311) = (l_310 = &g_295));
        }


        if ((safe_mod_func_int32_t_s_s((*l_309), (safe_mod_func_uint8_t_u_u(((p_60 , (safe_mul_func_int8_t_s_s((((g_115 = (0xFECBL >= 0x646AL)) < (~((g_94[0] || (safe_lshift_func_int8_t_s_s(((**g_137) | l_323), (safe_lshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((&p_60 == &l_123) & g_94[2]), (**g_137))), (**g_141))), 6)) | p_60), 1))))) & p_60))) < (**l_65)), p_60))) > g_299), p_60)))))
        {
            int *l_332 = &l_232;
            const int l_335[4][3] = {{(-3L), 0x21DDADD1L, 0x92C7EFDAL}, {(-3L), 0x21DDADD1L, 0x92C7EFDAL}, {(-3L), 0x21DDADD1L, 0x92C7EFDAL}, {(-3L), 0x21DDADD1L, 0x92C7EFDAL}};
            int i, j;
            (*l_65) = l_332;

            ;
            (*l_332) = (safe_add_func_int32_t_s_s((*g_70), (g_229 , p_60)));
            if (((*l_332) == 0xBE9EF241L))
            {
                (*l_64) = l_335[2][0];
                (**l_65) = (*l_332);
            }
            else
            {
                (*l_65) = l_336;

                ;
            }

            ;
            for (g_115 = 0; (g_115 <= 0); g_115 += 1)
            {
                int *l_340 = (void*)0;
                unsigned l_347 = 1UL;
                short **l_364 = &l_181[0][3][0];
                unsigned short l_374 = 0xBDCFL;
                for (l_323 = 0; (l_323 <= 4); l_323 += 1)
                {
                    unsigned short ***l_337 = (void*)0;
                    unsigned short ***l_338[10] = {&g_144, &g_144, (void*)0, (void*)0, &g_144, &g_144, &g_144, (void*)0, (void*)0, &g_144};
                    int i;
                    l_339 = &g_145;

                    ;
                    if ((*g_70))
                        break;
                    (*l_65) = l_340;

                    ;
                    for (g_77 = 0; (g_77 <= 0); g_77 += 1)
                    {
                        char l_345 = 0x8EL;
                        int i;
                        (*l_336) = ((l_158[2][8] = (p_60 = ((0x5EC24447L ^ p_60) & ((p_60 > ((*g_138) < (safe_mod_func_uint16_t_u_u(((((*l_332) = ((safe_sub_func_uint8_t_u_u(g_115, p_60)) >= ((*g_145) & (0xD2L > g_94[5])))) > l_345) , 0xEE3CL), (*l_309))))) ^ g_69)))) & (*l_336));
                        (*l_65) = (void*)0;

                        ;
                        (*l_65) = p_59;


                        if ((*p_59))
                            break;
                    }


                }


                (*l_65) = (p_59 = p_59);


                for (g_47 = 0; (g_47 >= 0); g_47 -= 1)
                {
                    unsigned l_346 = 0UL;
                    short **l_363[9][2] = {{&g_295, (void*)0}, {&g_295, (void*)0}, {&g_295, (void*)0}, {&g_295, (void*)0}, {&g_295, (void*)0}, {&g_295, (void*)0}, {&g_295, (void*)0}, {&g_295, (void*)0}, {&g_295, (void*)0}};
                    int *l_375 = &l_186;
                    int i, j;
                    (*l_332) = (*g_70);
                    for (p_60 = 0; (p_60 <= 4); p_60 += 1)
                    {
                        l_347 = l_346;
                    }
                    if ((*l_309))
                    {
                        int *l_348 = &g_31;
                        (*l_65) = l_348;

                        ;
                        if ((*p_59))
                            break;
                    }
                    else
                    {
                        (*l_65) = &g_115;

                        ;
                        (*l_65) = p_59;


                        l_349 = (g_115 , (-1L));
                        if ((*g_70))
                            break;
                    }


                    g_70 = l_332;

                    ;
                    for (l_347 = 1; (l_347 <= 4); l_347 += 1)
                    {
                        char *l_356 = &l_323;
                        int *l_365 = &g_366[2][3][5];
                        int l_373 = (-1L);
                        p_59 = ((*l_65) = &g_47);

                        ;
                        ;
                        (*l_336) = ((safe_mod_func_int8_t_s_s(p_60, ((safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((*l_356) = ((*l_216) = p_60)), p_60)), (safe_mod_func_uint8_t_u_u(((*l_332) = ((*g_70) || 0xE11F3F1CL)), (safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((((*l_365) = (l_363[5][1] != l_364)) , (safe_mod_func_int32_t_s_s((((0x97L > (safe_add_func_uint32_t_u_u((~(((((safe_mod_func_uint32_t_u_u(((&l_363[4][0] != (void*)0) || (**g_294)), g_366[2][3][5])) == p_60) ^ (*p_59)) == l_373) < l_373)), g_115))) , 4294967295UL) || g_99), l_374))), (*l_67))), g_99)))))) ^ (*p_59)))) , 2L);
                        g_70 = &g_115;

                        ;
                        (*l_65) = l_375;

                        ;
                    }


                    ;
                }


            }



            ;
            ;
        }
        else
        {
            char l_392[10];
            int l_394[3];
            unsigned short l_413 = 0xE671L;
            int i;
            for (i = 0; i < 10; i++)
                l_392[i] = (-9L);
            for (i = 0; i < 3; i++)
                l_394[i] = 0x7FDC368CL;
            if (((void*)0 == l_336))
            {
                int l_378 = 9L;
                int *l_423[5] = {&l_394[0], &l_158[3][7], &l_394[0], &l_158[3][7], &l_394[0]};
                int i;
                for (l_349 = 0; l_349 < 8; l_349 += 1)
                {
                    l_253[l_349] = 0x1E38L;
                }
                for (p_60 = 0; (p_60 >= 15); p_60 = safe_add_func_uint8_t_u_u(p_60, 6))
                {
                    unsigned l_395[6] = {4294967290UL, 0UL, 4294967290UL, 0UL, 4294967290UL, 0UL};
                    int l_404 = 1L;
                    unsigned char *l_414 = &g_99;
                    unsigned char l_421 = 5UL;
                    int i;
                    (*l_336) = l_378;
                    if ((*p_59))
                    {
                        (*l_65) = p_59;
                        g_47 = (p_60 != 0x1EL);
                        if ((*p_59))
                            continue;
                    }
                    else
                    {
                        int l_381 = 0x2A2360EDL;
                        short ***l_388 = &g_314[3];
                        short ****l_389 = &l_388;
                        unsigned *l_391[5][5][2] = {{{&l_61, &l_61}, {&l_61, &l_61}, {&l_61, &l_61}, {&l_61, &l_61}, {&l_61, &l_61}}, {{&l_61, &l_61}, {&l_61, &l_61}, {&l_61, &l_61}, {&l_61, &l_61}, {&l_61, &l_61}}, {{&l_61, &l_61}, {&l_61, &l_61}, {&l_61, &l_61}, {&l_61, &l_61}, {&l_61, &l_61}}, {{&l_61, &l_61}, {&l_61, &l_61}, {&l_61, &l_61}, {&l_61, &l_61}, {&l_61, &l_61}}, {{&l_61, &l_61}, {&l_61, &l_61}, {&l_61, &l_61}, {&l_61, &l_61}, {&l_61, &l_61}}};
                        int *l_393[1];
                        int *l_399 = &g_366[2][3][5];
                        int **l_398 = &l_399;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_393[i] = &g_47;
                        (*l_336) = (*p_59);
                        l_394[1] = (safe_sub_func_int16_t_s_s(0L, (((+((l_381 , g_382) != (void*)0)) , (((((void*)0 == &g_94[0]) , (((l_392[3] = (((safe_sub_func_int16_t_s_s((((*l_336) = (l_185 = (((*l_389) = l_388) == &g_314[4]))) >= p_60), g_390)) | 1L) & 4294967295UL)) < 0x6337ED4DL) , g_94[1])) , (**g_144)) ^ (-1L))) , l_392[3])));
                        l_395[5] = (&g_366[2][3][5] != &g_366[3][1][5]);
                        (*l_336) = (safe_mod_func_int8_t_s_s(p_60, ((0UL && ((*l_216) = ((((*l_398) = &l_381) != &g_366[2][3][5]) > (((safe_sub_func_int32_t_s_s((((safe_add_func_uint8_t_u_u((l_404 = g_94[0]), g_94[2])) , (l_378 && ((((p_60 , (p_60 & 0x5AL)) & l_394[0]) && p_60) < 0x112BL))) > l_395[5]), (*g_70))) | g_69) & 65532UL)))) , l_394[2])));

                        ;
                    }
                    if (((*l_336) = (safe_mul_func_uint8_t_u_u(p_60, (safe_lshift_func_uint8_t_u_u(((((9UL <= (((((*g_138) < ((safe_mod_func_int32_t_s_s(((safe_sub_func_int8_t_s_s(l_413, ((*l_414) = g_115))) <= ((((p_60 ^ (*l_64)) & g_77) , (((safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(3UL, p_60)), (*l_309))) , l_419) != (void*)0)) , l_395[5])), (*p_59))) != l_413)) , g_299) && 0x57L) | (**g_294))) != 0x6ADCL) , g_99) , g_94[2]), l_421))))))
                    {
                        short l_422 = 0xB474L;
                        (*l_336) = (g_390 = ((((&l_66 == ((0x8A2CL || (*g_295)) , (*g_382))) , ((void*)0 != &g_366[2][3][5])) || g_47) == (1UL ^ (((*l_68) = p_60) >= l_422))));
                        return &g_31;


                    }
                    else
                    {
                        (***g_382) = ((*l_65) = &g_115);

                        ;
                        ;
                        p_59 = (*l_65);

                        ;
                        if ((*p_59))
                            break;
                    }

                    ;
                    ;
                    ;
                }




                (***g_382) = l_423[1];

                ;
            }
            else
            {
                unsigned char *l_432 = &l_112[0];
                if (((((((*l_432) = (((safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(p_60, g_139[0][0])), (safe_rshift_func_uint8_t_u_u(p_60, 6)))) == (safe_sub_func_int32_t_s_s((*p_59), g_366[3][5][6]))) , p_60)) , (**g_384)) ^ (safe_mul_func_uint16_t_u_u((g_31 <= (safe_mod_func_int16_t_s_s(l_394[0], 6L))), 0xD088L))) , l_437) , (***g_383)))
                {
                    unsigned short l_438[8] = {65532UL, 0x81AFL, 65532UL, 0x81AFL, 65532UL, 0x81AFL, 65532UL, 0x81AFL};
                    int *l_440 = &l_185;
                    int i;
                    l_438[6] = (*p_59);
                    for (g_77 = 0; (g_77 <= 7); g_77 += 1)
                    {
                        int l_439 = 0x1BB254E1L;
                        int i;
                        (*l_336) = (l_439 = l_438[g_77]);
                        (***g_382) = (void*)0;

                        ;
                    }


                    p_59 = ((*l_65) = (void*)0);

                    ;
                    ;
                    (*g_384) = l_440;

                    ;
                }
                else
                {
                    return p_59;


                }

                ;
                ;
                ;
                return p_59;



            }



            ;
            for (l_323 = 2; (l_323 >= 0); l_323 -= 1)
            {
                unsigned char l_443 = 3UL;
                int i;
                (*l_336) = l_394[l_323];
                if (l_253[l_323])
                {
                    (*l_336) = (l_443 = (65530UL & (safe_rshift_func_uint8_t_u_u(l_253[l_323], 2))));
                }
                else
                {
                    (*l_65) = p_59;
                    if (((*l_336) = (&l_394[1] != (**g_383))))
                    {
                        g_390 = l_394[1];
                    }
                    else
                    {
                        (*g_384) = (**g_383);
                    }
                    if (l_443)
                        break;
                }
                (*g_384) = (**g_383);
            }
            (***g_382) = (***g_382);
            (*l_336) = (g_390 && (l_394[1] > 252UL));
        }



        ;
        ;

    }




    ;

    (***g_382) = ((*l_65) = ((*l_67) , &g_115));

    ;
    ;
    return p_59;


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_94[i], "g_94[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_139[i][j], "g_139[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_366[i][j][k], "g_366[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_390, "g_390", print_hash_value);
    transparent_crc(g_455, "g_455", print_hash_value);
    transparent_crc(g_522, "g_522", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_574, "g_574", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_587[i], "g_587[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_635, "g_635", print_hash_value);
    transparent_crc(g_650, "g_650", print_hash_value);
    transparent_crc(g_751, "g_751", print_hash_value);
    transparent_crc(g_788, "g_788", print_hash_value);
    transparent_crc(g_833, "g_833", print_hash_value);
    transparent_crc(g_859, "g_859", print_hash_value);
    transparent_crc(g_962, "g_962", print_hash_value);
    transparent_crc(g_1086, "g_1086", print_hash_value);
    transparent_crc(g_1103, "g_1103", print_hash_value);
    transparent_crc(g_1153, "g_1153", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1200[i], "g_1200[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1254, "g_1254", print_hash_value);
    transparent_crc(g_1273, "g_1273", print_hash_value);
    transparent_crc(g_1355, "g_1355", print_hash_value);
    transparent_crc(g_1445, "g_1445", print_hash_value);
    transparent_crc(g_1570, "g_1570", print_hash_value);
    transparent_crc(g_1628, "g_1628", print_hash_value);
    transparent_crc(g_1641, "g_1641", print_hash_value);
    transparent_crc(g_1654, "g_1654", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_1737[i][j], "g_1737[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1773, "g_1773", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1786[i][j], "g_1786[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1933, "g_1933", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_2076[i], "g_2076[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2141[i], "g_2141[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
