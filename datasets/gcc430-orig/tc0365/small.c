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



static const volatile int g_7 = (-1L);
static short g_58 = 0x56A4L;
static unsigned g_60[1] = {4294967290UL};
static short *g_72 = &g_58;
static unsigned g_75 = 1UL;
static int g_77 = 0xAD537E8FL;
static int * volatile g_76[3] = {&g_77, &g_77, &g_77};
static int * volatile g_82[5] = {&g_77, &g_77, &g_77, &g_77, &g_77};
static unsigned g_116 = 1UL;
static short *g_124 = &g_58;
static short **g_123 = &g_124;
static unsigned short g_127 = 7UL;
static short g_128 = 0L;
static int g_143 = 0L;
static unsigned *g_148 = &g_75;
static unsigned **g_147 = &g_148;
static unsigned *** volatile g_146 = &g_147;
static int * volatile g_150 = &g_77;
static unsigned char g_172 = 251UL;
static char g_173 = 0x24L;
static unsigned char g_176 = 0xD9L;
static int g_180[6][6][1] = {{{1L}, {1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}}};
static int g_190 = 1L;
static volatile unsigned g_231 = 0x1012672EL;
static unsigned short g_259 = 0x0800L;
static unsigned char g_263[2] = {249UL, 249UL};
static unsigned char g_265[6][3] = {{0xB8L, 0xB8L, 0x3BL}, {0xB8L, 0xB8L, 0x3BL}, {0xB8L, 0xB8L, 0x3BL}, {0xB8L, 0xB8L, 0x3BL}, {0xB8L, 0xB8L, 0x3BL}, {0xB8L, 0xB8L, 0x3BL}};
static const short *g_270 = (void*)0;
static const short **g_269 = &g_270;
static const short *** volatile g_268 = &g_269;
static unsigned char *g_271 = &g_172;
static int g_322 = 0xD67946D1L;
static int * volatile g_321 = &g_322;
static volatile short g_353 = 0x28D8L;
static unsigned char *** volatile g_357 = (void*)0;
static unsigned char **g_359[1][8] = {{&g_271, &g_271, &g_271, &g_271, &g_271, &g_271, &g_271, &g_271}};
static unsigned char *** volatile g_358 = &g_359[0][0];
static int ** volatile g_360 = (void*)0;
static int *g_362 = &g_77;
static int ** volatile g_361 = &g_362;
static int ** volatile g_396 = &g_362;
static unsigned g_412[7][10][2] = {{{0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}}, {{0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}}, {{0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}}, {{0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}}, {{0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}}, {{0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}}, {{0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}, {0x628E17E2L, 4294967295UL}}};
static int * const volatile g_419[2] = {&g_143, &g_143};
static int * const volatile g_420[4] = {&g_77, &g_143, &g_77, &g_143};
static int ** volatile g_466 = &g_362;
static int ** volatile g_475 = &g_362;
static int ** volatile g_476 = (void*)0;
static int ** volatile g_477 = (void*)0;
static int ** volatile g_478 = &g_362;
static int ** const volatile g_481 = &g_362;
static char g_515[4][3] = {{0x38L, (-1L), (-3L)}, {0x38L, (-1L), (-3L)}, {0x38L, (-1L), (-3L)}, {0x38L, (-1L), (-3L)}};
static int ** volatile g_546 = &g_362;
static unsigned *g_596 = &g_116;
static unsigned **g_595[8][5] = {{&g_596, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_596, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_596, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_596, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_596, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_596, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_596, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_596, (void*)0, (void*)0, (void*)0, (void*)0}};
static unsigned **g_598[3][10] = {{(void*)0, &g_596, &g_596, &g_596, &g_596, &g_596, &g_596, &g_596, &g_596, &g_596}, {(void*)0, &g_596, &g_596, &g_596, &g_596, &g_596, &g_596, &g_596, &g_596, &g_596}, {(void*)0, &g_596, &g_596, &g_596, &g_596, &g_596, &g_596, &g_596, &g_596, &g_596}};
static unsigned *** volatile g_597 = &g_598[0][7];
static const short * const * const g_628 = &g_270;
static const short * const * const *g_627 = &g_628;
static short * const *g_631 = &g_124;
static short * const **g_630 = &g_631;
static int g_645 = (-5L);
static short g_690 = 0xA2C0L;
static unsigned * const *g_722 = &g_148;
static unsigned * const **g_721[7][8] = {{&g_722, &g_722, &g_722, (void*)0, (void*)0, &g_722, &g_722, &g_722}, {&g_722, &g_722, &g_722, (void*)0, (void*)0, &g_722, &g_722, &g_722}, {&g_722, &g_722, &g_722, (void*)0, (void*)0, &g_722, &g_722, &g_722}, {&g_722, &g_722, &g_722, (void*)0, (void*)0, &g_722, &g_722, &g_722}, {&g_722, &g_722, &g_722, (void*)0, (void*)0, &g_722, &g_722, &g_722}, {&g_722, &g_722, &g_722, (void*)0, (void*)0, &g_722, &g_722, &g_722}, {&g_722, &g_722, &g_722, (void*)0, (void*)0, &g_722, &g_722, &g_722}};
static unsigned char *g_748 = (void*)0;
static volatile int *g_761 = (void*)0;
static volatile int **g_760 = &g_761;
static int ** volatile g_764 = &g_362;
static const unsigned char *g_781[7] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
static const unsigned char **g_780[10] = {&g_781[6], &g_781[6], &g_781[6], &g_781[6], &g_781[6], &g_781[6], &g_781[6], &g_781[6], &g_781[6], &g_781[6]};
static const unsigned char ***g_779 = &g_780[1];
static const unsigned char ****g_778 = &g_779;
static unsigned short *** volatile g_790[6] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
static int g_804[7][4][5] = {{{(-6L), 0xB52F98FAL, 0x10A1887BL, 0x6A807AAFL, 0x32634E8AL}, {(-6L), 0xB52F98FAL, 0x10A1887BL, 0x6A807AAFL, 0x32634E8AL}, {(-6L), 0xB52F98FAL, 0x10A1887BL, 0x6A807AAFL, 0x32634E8AL}, {(-6L), 0xB52F98FAL, 0x10A1887BL, 0x6A807AAFL, 0x32634E8AL}}, {{(-6L), 0xB52F98FAL, 0x10A1887BL, 0x6A807AAFL, 0x32634E8AL}, {(-6L), 0xB52F98FAL, 0x10A1887BL, 0x6A807AAFL, 0x32634E8AL}, {(-6L), 0xB52F98FAL, 0x10A1887BL, 0x6A807AAFL, 0x32634E8AL}, {(-6L), 0xB52F98FAL, 0x10A1887BL, 0x6A807AAFL, 0x32634E8AL}}, {{(-6L), 0xB52F98FAL, 0x10A1887BL, 0x6A807AAFL, 0x32634E8AL}, {(-6L), 0xB52F98FAL, 0x10A1887BL, 0x6A807AAFL, 0x32634E8AL}, {(-6L), 0xB52F98FAL, 0x10A1887BL, 0x6A807AAFL, 0x32634E8AL}, {(-6L), 0xB52F98FAL, 0x10A1887BL, 0x6A807AAFL, 0x32634E8AL}}, {{(-6L), 0xB52F98FAL, 0x10A1887BL, 0x6A807AAFL, 0x32634E8AL}, {(-6L), 0xB52F98FAL, 0x10A1887BL, 0x6A807AAFL, 0x32634E8AL}, {(-6L), 0xB52F98FAL, 0x10A1887BL, 0x6A807AAFL, 0x32634E8AL}, {(-6L), 0xB52F98FAL, 0x10A1887BL, 0x6A807AAFL, 0x32634E8AL}}, {{(-6L), 0xB52F98FAL, 0x10A1887BL, 0x6A807AAFL, 0x32634E8AL}, {(-6L), 0xB52F98FAL, 0x10A1887BL, 0x6A807AAFL, 0x32634E8AL}, {(-6L), 0xB52F98FAL, 0x10A1887BL, 0x6A807AAFL, 0x32634E8AL}, {(-6L), 0xB52F98FAL, 0x10A1887BL, 0x6A807AAFL, 0x32634E8AL}}, {{(-6L), 0xB52F98FAL, 0x10A1887BL, 0x6A807AAFL, 0x32634E8AL}, {(-6L), 0xB52F98FAL, 0x10A1887BL, 0x6A807AAFL, 0x32634E8AL}, {(-6L), 0xB52F98FAL, 0x10A1887BL, 0x6A807AAFL, 0x32634E8AL}, {(-6L), 0xB52F98FAL, 0x10A1887BL, 0x6A807AAFL, 0x32634E8AL}}, {{(-6L), 0xB52F98FAL, 0x10A1887BL, 0x6A807AAFL, 0x32634E8AL}, {(-6L), 0xB52F98FAL, 0x10A1887BL, 0x6A807AAFL, 0x32634E8AL}, {(-6L), 0xB52F98FAL, 0x10A1887BL, 0x6A807AAFL, 0x32634E8AL}, {(-6L), 0xB52F98FAL, 0x10A1887BL, 0x6A807AAFL, 0x32634E8AL}}};
static short ***g_819 = (void*)0;
static int ** volatile g_822 = (void*)0;
static const int *g_827 = &g_180[1][1][0];
static const int **g_826 = &g_827;
static int * volatile g_829 = &g_77;
static int * volatile g_830 = (void*)0;
static int * volatile g_831 = &g_322;
static int g_834[3][6][3] = {{{0x3658A8D3L, 0x3121D58AL, 0x3658A8D3L}, {0x3658A8D3L, 0x3121D58AL, 0x3658A8D3L}, {0x3658A8D3L, 0x3121D58AL, 0x3658A8D3L}, {0x3658A8D3L, 0x3121D58AL, 0x3658A8D3L}, {0x3658A8D3L, 0x3121D58AL, 0x3658A8D3L}, {0x3658A8D3L, 0x3121D58AL, 0x3658A8D3L}}, {{0x3658A8D3L, 0x3121D58AL, 0x3658A8D3L}, {0x3658A8D3L, 0x3121D58AL, 0x3658A8D3L}, {0x3658A8D3L, 0x3121D58AL, 0x3658A8D3L}, {0x3658A8D3L, 0x3121D58AL, 0x3658A8D3L}, {0x3658A8D3L, 0x3121D58AL, 0x3658A8D3L}, {0x3658A8D3L, 0x3121D58AL, 0x3658A8D3L}}, {{0x3658A8D3L, 0x3121D58AL, 0x3658A8D3L}, {0x3658A8D3L, 0x3121D58AL, 0x3658A8D3L}, {0x3658A8D3L, 0x3121D58AL, 0x3658A8D3L}, {0x3658A8D3L, 0x3121D58AL, 0x3658A8D3L}, {0x3658A8D3L, 0x3121D58AL, 0x3658A8D3L}, {0x3658A8D3L, 0x3121D58AL, 0x3658A8D3L}}};
static unsigned g_909 = 4294967286UL;



static int func_1(void);
static int func_2(int p_3, unsigned p_4, unsigned short p_5, unsigned short p_6);
static const unsigned short func_10(unsigned p_11, unsigned p_12, int p_13);
static int func_25(unsigned short p_26);
static unsigned char func_33(char p_34, unsigned p_35, unsigned p_36);
static char func_37(unsigned char p_38, unsigned p_39, char p_40, unsigned char p_41, int p_42);
static char func_43(unsigned short p_44, short p_45);
static const unsigned char func_51(short p_52, int p_53, short p_54, int p_55);
static int func_62(short p_63, int p_64);
static int func_65(char p_66, short * p_67, short * p_68, char p_69);
static int func_1(void)
{
    unsigned short l_14[5] = {65528UL, 1UL, 65528UL, 1UL, 65528UL};
    int *l_803 = &g_804[0][2][2];
    int *l_832 = (void*)0;
    int *l_833 = &g_834[1][1][0];
    unsigned ***l_851 = &g_147;
    unsigned *l_873 = &g_60[0];
    short *l_876 = &g_128;
    unsigned short l_883 = 65535UL;
    int l_887 = 1L;
    unsigned **l_889[6][1];
    int l_900 = 7L;
    unsigned *l_903 = (void*)0;
    unsigned *l_904 = (void*)0;
    unsigned *l_905 = &g_60[0];
    unsigned short **l_906 = (void*)0;
    char *l_907 = &g_515[2][0];
    int *l_908[1];
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
            l_889[i][j] = (void*)0;
    }
    for (i = 0; i < 1; i++)
        l_908[i] = &l_887;
    (*l_833) &= (~func_2(((*l_803) |= (g_7 , (safe_mod_func_int16_t_s_s((func_10(l_14[4], (safe_mul_func_uint8_t_u_u((((~(safe_div_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u(((safe_div_func_int32_t_s_s(func_25(l_14[4]), g_690)) , (l_14[1] , (safe_rshift_func_int8_t_s_s(g_180[0][0][0], 5)))), l_14[3])) < (((((g_60[0] ^ 255UL) , (-1L)) ^ g_412[2][3][1]) , l_14[0]) >= g_412[1][1][0])), l_14[4])), l_14[1]))) >= 0x3CA7L) == l_14[4]), 1L)), l_14[4]) <= l_14[4]), l_14[0])))), g_690, g_412[0][5][0], l_14[4]));
    if ((&g_146 != &g_146))
    {
        const int l_837 = (-1L);
        const int l_838[4][2] = {{0x814FE72BL, 0x814FE72BL}, {0x814FE72BL, 0x814FE72BL}, {0x814FE72BL, 0x814FE72BL}, {0x814FE72BL, 0x814FE72BL}};
        int i, j;
        (*l_803) = (safe_sub_func_uint32_t_u_u(((*l_803) , l_837), l_838[1][1]));
        for (g_259 = 0; (g_259 <= 2); g_259 += 1)
        {
            unsigned char l_839 = 246UL;
            unsigned short *l_846 = (void*)0;
            unsigned short *l_847 = &l_14[3];
            unsigned short *l_848 = &g_127;
            unsigned ***l_850 = &g_147;
            unsigned ****l_849[8][9] = {{(void*)0, &l_850, (void*)0, &l_850, (void*)0, &l_850, (void*)0, &l_850, (void*)0}, {(void*)0, &l_850, (void*)0, &l_850, (void*)0, &l_850, (void*)0, &l_850, (void*)0}, {(void*)0, &l_850, (void*)0, &l_850, (void*)0, &l_850, (void*)0, &l_850, (void*)0}, {(void*)0, &l_850, (void*)0, &l_850, (void*)0, &l_850, (void*)0, &l_850, (void*)0}, {(void*)0, &l_850, (void*)0, &l_850, (void*)0, &l_850, (void*)0, &l_850, (void*)0}, {(void*)0, &l_850, (void*)0, &l_850, (void*)0, &l_850, (void*)0, &l_850, (void*)0}, {(void*)0, &l_850, (void*)0, &l_850, (void*)0, &l_850, (void*)0, &l_850, (void*)0}, {(void*)0, &l_850, (void*)0, &l_850, (void*)0, &l_850, (void*)0, &l_850, (void*)0}};
            int *l_852 = &g_322;
            char l_855 = 8L;
            int i, j;
            (*l_852) ^= (((0x52C5L > (l_839 == (*g_271))) , &g_722) != (l_851 = ((safe_rshift_func_int16_t_s_s(l_839, (safe_rshift_func_uint16_t_u_u(((*l_848) ^= ((*l_847) = ((((*l_803) = func_37(func_10((*g_148), (safe_sub_func_int16_t_s_s(((void*)0 != &l_14[0]), 1L)), (*l_803)), l_839, g_172, (*l_833), (*l_833))) || 1L) , l_839))), l_838[1][1])))) , &g_147)));
            for (g_127 = 0; (g_127 <= 2); g_127 += 1)
            {
                const int *l_853 = (void*)0;
                (*g_826) = l_853;
                for (g_143 = 0; (g_143 <= 6); g_143 += 1)
                {
                    int *l_854 = &g_180[1][1][0];
                    int i, j, k;
                    g_834[g_127][(g_259 + 3)][g_127] = (*g_831);
                    (*g_826) = &g_834[g_127][(g_259 + 3)][g_127];
                    (*g_826) = ((**g_826) , (*g_826));
                    (*g_826) = l_854;
                }
            }
            for (g_322 = 0; (g_322 <= 6); g_322 += 1)
            {
                return l_855;
            }
        }
        (*g_826) = &l_837;
    }
    else
    {
        unsigned short l_856 = 65535UL;
        return l_856;
    }
    for (g_128 = (-15); (g_128 >= (-16)); --g_128)
    {
        unsigned *l_869 = &g_116;
        unsigned **l_870 = &g_596;
        unsigned **l_871 = (void*)0;
        unsigned **l_872[6][3][5] = {{{&g_596, (void*)0, &g_596, (void*)0, &g_596}, {&g_596, (void*)0, &g_596, (void*)0, &g_596}, {&g_596, (void*)0, &g_596, (void*)0, &g_596}}, {{&g_596, (void*)0, &g_596, (void*)0, &g_596}, {&g_596, (void*)0, &g_596, (void*)0, &g_596}, {&g_596, (void*)0, &g_596, (void*)0, &g_596}}, {{&g_596, (void*)0, &g_596, (void*)0, &g_596}, {&g_596, (void*)0, &g_596, (void*)0, &g_596}, {&g_596, (void*)0, &g_596, (void*)0, &g_596}}, {{&g_596, (void*)0, &g_596, (void*)0, &g_596}, {&g_596, (void*)0, &g_596, (void*)0, &g_596}, {&g_596, (void*)0, &g_596, (void*)0, &g_596}}, {{&g_596, (void*)0, &g_596, (void*)0, &g_596}, {&g_596, (void*)0, &g_596, (void*)0, &g_596}, {&g_596, (void*)0, &g_596, (void*)0, &g_596}}, {{&g_596, (void*)0, &g_596, (void*)0, &g_596}, {&g_596, (void*)0, &g_596, (void*)0, &g_596}, {&g_596, (void*)0, &g_596, (void*)0, &g_596}}};
        unsigned l_874 = 0UL;
        short *l_875[2];
        short **l_877 = &g_124;
        char l_882 = 0x2BL;
        unsigned char ***l_886 = &g_359[0][0];
        unsigned char ****l_885[7] = {(void*)0, (void*)0, &l_886, (void*)0, (void*)0, &l_886, (void*)0};
        unsigned char *****l_884[7][4][8] = {{{&l_885[4], (void*)0, (void*)0, (void*)0, &l_885[2], &l_885[4], (void*)0, &l_885[5]}, {&l_885[4], (void*)0, (void*)0, (void*)0, &l_885[2], &l_885[4], (void*)0, &l_885[5]}, {&l_885[4], (void*)0, (void*)0, (void*)0, &l_885[2], &l_885[4], (void*)0, &l_885[5]}, {&l_885[4], (void*)0, (void*)0, (void*)0, &l_885[2], &l_885[4], (void*)0, &l_885[5]}}, {{&l_885[4], (void*)0, (void*)0, (void*)0, &l_885[2], &l_885[4], (void*)0, &l_885[5]}, {&l_885[4], (void*)0, (void*)0, (void*)0, &l_885[2], &l_885[4], (void*)0, &l_885[5]}, {&l_885[4], (void*)0, (void*)0, (void*)0, &l_885[2], &l_885[4], (void*)0, &l_885[5]}, {&l_885[4], (void*)0, (void*)0, (void*)0, &l_885[2], &l_885[4], (void*)0, &l_885[5]}}, {{&l_885[4], (void*)0, (void*)0, (void*)0, &l_885[2], &l_885[4], (void*)0, &l_885[5]}, {&l_885[4], (void*)0, (void*)0, (void*)0, &l_885[2], &l_885[4], (void*)0, &l_885[5]}, {&l_885[4], (void*)0, (void*)0, (void*)0, &l_885[2], &l_885[4], (void*)0, &l_885[5]}, {&l_885[4], (void*)0, (void*)0, (void*)0, &l_885[2], &l_885[4], (void*)0, &l_885[5]}}, {{&l_885[4], (void*)0, (void*)0, (void*)0, &l_885[2], &l_885[4], (void*)0, &l_885[5]}, {&l_885[4], (void*)0, (void*)0, (void*)0, &l_885[2], &l_885[4], (void*)0, &l_885[5]}, {&l_885[4], (void*)0, (void*)0, (void*)0, &l_885[2], &l_885[4], (void*)0, &l_885[5]}, {&l_885[4], (void*)0, (void*)0, (void*)0, &l_885[2], &l_885[4], (void*)0, &l_885[5]}}, {{&l_885[4], (void*)0, (void*)0, (void*)0, &l_885[2], &l_885[4], (void*)0, &l_885[5]}, {&l_885[4], (void*)0, (void*)0, (void*)0, &l_885[2], &l_885[4], (void*)0, &l_885[5]}, {&l_885[4], (void*)0, (void*)0, (void*)0, &l_885[2], &l_885[4], (void*)0, &l_885[5]}, {&l_885[4], (void*)0, (void*)0, (void*)0, &l_885[2], &l_885[4], (void*)0, &l_885[5]}}, {{&l_885[4], (void*)0, (void*)0, (void*)0, &l_885[2], &l_885[4], (void*)0, &l_885[5]}, {&l_885[4], (void*)0, (void*)0, (void*)0, &l_885[2], &l_885[4], (void*)0, &l_885[5]}, {&l_885[4], (void*)0, (void*)0, (void*)0, &l_885[2], &l_885[4], (void*)0, &l_885[5]}, {&l_885[4], (void*)0, (void*)0, (void*)0, &l_885[2], &l_885[4], (void*)0, &l_885[5]}}, {{&l_885[4], (void*)0, (void*)0, (void*)0, &l_885[2], &l_885[4], (void*)0, &l_885[5]}, {&l_885[4], (void*)0, (void*)0, (void*)0, &l_885[2], &l_885[4], (void*)0, &l_885[5]}, {&l_885[4], (void*)0, (void*)0, (void*)0, &l_885[2], &l_885[4], (void*)0, &l_885[5]}, {&l_885[4], (void*)0, (void*)0, (void*)0, &l_885[2], &l_885[4], (void*)0, &l_885[5]}}};
        int l_888[1][4][10] = {{{0x593C1816L, 0xF432BA0BL, 1L, (-1L), 1L, 0xF432BA0BL, 0x593C1816L, (-1L), 0L, 0xD00DBC94L}, {0x593C1816L, 0xF432BA0BL, 1L, (-1L), 1L, 0xF432BA0BL, 0x593C1816L, (-1L), 0L, 0xD00DBC94L}, {0x593C1816L, 0xF432BA0BL, 1L, (-1L), 1L, 0xF432BA0BL, 0x593C1816L, (-1L), 0L, 0xD00DBC94L}, {0x593C1816L, 0xF432BA0BL, 1L, (-1L), 1L, 0xF432BA0BL, 0x593C1816L, (-1L), 0L, 0xD00DBC94L}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_875[i] = &g_58;
        l_888[0][3][3] ^= (((safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((l_869 = l_869) == (l_873 = l_833)), ((((*l_833) == func_65(l_874, l_875[0], ((*l_877) = l_876), func_10((safe_div_func_int8_t_s_s((safe_div_func_uint32_t_u_u(func_37(((void*)0 != &g_822), l_882, l_874, l_874, (*l_803)), 0xC43EE6B8L)), 252UL)), l_874, l_883))) , &g_778) != l_884[6][2][0]))), (*g_72))), l_874)) > l_887), (*l_833))), l_874)) && l_882) || 1UL);
        if (l_888[0][3][3])
            continue;
    }
    g_909 |= func_10(((l_889[0][0] == (void*)0) != (*l_803)), (safe_add_func_int8_t_s_s((((safe_lshift_func_int8_t_s_u((*l_833), 5)) & (*l_803)) | ((*l_907) = (safe_mod_func_int32_t_s_s((((safe_add_func_uint16_t_u_u((*l_803), (((safe_rshift_func_int16_t_s_s(func_37(l_900, ((*l_905) = (((!(safe_sub_func_uint16_t_u_u((*l_803), (*l_803)))) ^ 0x4D34A4B9L) <= (*g_831))), g_515[2][0], (*l_833), (*l_833)), (*l_803))) >= (*l_833)) == (*l_833)))) , l_906) == l_906), (*l_803))))), (-1L))), g_412[2][3][1]);
    return (*g_321);
}







static int func_2(int p_3, unsigned p_4, unsigned short p_5, unsigned short p_6)
{
    unsigned l_805[5] = {4294967286UL, 4294967287UL, 4294967286UL, 4294967287UL, 4294967286UL};
    char *l_808[9][8][3] = {{{&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}}, {{&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}}, {{&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}}, {{&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}}, {{&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}}, {{&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}}, {{&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}}, {{&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}}, {{&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}, {&g_173, (void*)0, &g_515[2][0]}}};
    int l_811 = 1L;
    int *l_812 = &g_322;
    int l_813 = 0x99FFD0FBL;
    int i, j, k;
    (*l_812) &= (l_805[4] <= (safe_lshift_func_int8_t_s_u((l_808[4][3][1] == ((0x3266L > 1L) , l_808[4][3][1])), (l_805[1] != (l_805[3] || (p_6 , (safe_mul_func_int16_t_s_s(l_811, l_805[4]))))))));
    (*l_812) = ((&l_805[0] != (p_4 , &l_805[4])) >= l_813);
    if (p_5)
    {
        short ***l_818[10][6] = {{(void*)0, &g_123, &g_123, &g_123, &g_123, &g_123}, {(void*)0, &g_123, &g_123, &g_123, &g_123, &g_123}, {(void*)0, &g_123, &g_123, &g_123, &g_123, &g_123}, {(void*)0, &g_123, &g_123, &g_123, &g_123, &g_123}, {(void*)0, &g_123, &g_123, &g_123, &g_123, &g_123}, {(void*)0, &g_123, &g_123, &g_123, &g_123, &g_123}, {(void*)0, &g_123, &g_123, &g_123, &g_123, &g_123}, {(void*)0, &g_123, &g_123, &g_123, &g_123, &g_123}, {(void*)0, &g_123, &g_123, &g_123, &g_123, &g_123}, {(void*)0, &g_123, &g_123, &g_123, &g_123, &g_123}};
        int *l_824 = &g_180[1][1][0];
        int i, j;
        for (g_645 = (-3); (g_645 == 6); g_645 = safe_add_func_uint32_t_u_u(g_645, 4))
        {
            short ***l_820 = &g_123;
            int *l_821 = &g_77;
            int l_823 = 0x4194FE9FL;
            for (g_143 = 0; (g_143 <= (-20)); --g_143)
            {
                p_3 &= ((g_819 = l_818[7][2]) != l_820);
            }
            l_812 = l_821;
            return l_823;
        }
        l_824 = &p_3;
    }
    else
    {
        int **l_825 = &l_812;
        const int ***l_828 = &g_826;
        (*l_825) = (void*)0;
        (*g_829) = (((*l_828) = g_826) == &l_812);
        (*g_831) |= (***l_828);
    }
    return l_805[4];
}







static const unsigned short func_10(unsigned p_11, unsigned p_12, int p_13)
{
    unsigned l_795 = 4294967295UL;
    int l_802 = 0x5BE0B592L;
    l_802 = (l_795 || p_12);
    return p_11;
}







static int func_25(unsigned short p_26)
{
    char l_46[8] = {0x71L, 0xF5L, 0x71L, 0xF5L, 0x71L, 0xF5L, 0x71L, 0xF5L};
    char *l_189[5][4][4] = {{{(void*)0, (void*)0, &l_46[2], &l_46[2]}, {(void*)0, (void*)0, &l_46[2], &l_46[2]}, {(void*)0, (void*)0, &l_46[2], &l_46[2]}, {(void*)0, (void*)0, &l_46[2], &l_46[2]}}, {{(void*)0, (void*)0, &l_46[2], &l_46[2]}, {(void*)0, (void*)0, &l_46[2], &l_46[2]}, {(void*)0, (void*)0, &l_46[2], &l_46[2]}, {(void*)0, (void*)0, &l_46[2], &l_46[2]}}, {{(void*)0, (void*)0, &l_46[2], &l_46[2]}, {(void*)0, (void*)0, &l_46[2], &l_46[2]}, {(void*)0, (void*)0, &l_46[2], &l_46[2]}, {(void*)0, (void*)0, &l_46[2], &l_46[2]}}, {{(void*)0, (void*)0, &l_46[2], &l_46[2]}, {(void*)0, (void*)0, &l_46[2], &l_46[2]}, {(void*)0, (void*)0, &l_46[2], &l_46[2]}, {(void*)0, (void*)0, &l_46[2], &l_46[2]}}, {{(void*)0, (void*)0, &l_46[2], &l_46[2]}, {(void*)0, (void*)0, &l_46[2], &l_46[2]}, {(void*)0, (void*)0, &l_46[2], &l_46[2]}, {(void*)0, (void*)0, &l_46[2], &l_46[2]}}};
    unsigned short l_199[3][5][4] = {{{8UL, 0x319CL, 0x2FC5L, 0x2B65L}, {8UL, 0x319CL, 0x2FC5L, 0x2B65L}, {8UL, 0x319CL, 0x2FC5L, 0x2B65L}, {8UL, 0x319CL, 0x2FC5L, 0x2B65L}, {8UL, 0x319CL, 0x2FC5L, 0x2B65L}}, {{8UL, 0x319CL, 0x2FC5L, 0x2B65L}, {8UL, 0x319CL, 0x2FC5L, 0x2B65L}, {8UL, 0x319CL, 0x2FC5L, 0x2B65L}, {8UL, 0x319CL, 0x2FC5L, 0x2B65L}, {8UL, 0x319CL, 0x2FC5L, 0x2B65L}}, {{8UL, 0x319CL, 0x2FC5L, 0x2B65L}, {8UL, 0x319CL, 0x2FC5L, 0x2B65L}, {8UL, 0x319CL, 0x2FC5L, 0x2B65L}, {8UL, 0x319CL, 0x2FC5L, 0x2B65L}, {8UL, 0x319CL, 0x2FC5L, 0x2B65L}}};
    int * const l_480 = &g_180[1][1][0];
    unsigned **l_499 = &g_148;
    int l_508 = 0L;
    short *l_545[10][8][3] = {{{(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}}, {{(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}}, {{(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}}, {{(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}}, {{(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}}, {{(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}}, {{(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}}, {{(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}}, {{(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}}, {{(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}, {(void*)0, &g_58, &g_58}}};
    short ***l_647 = &g_123;
    short ****l_646[10];
    int l_716 = 7L;
    int *l_756 = &g_77;
    unsigned l_792 = 7UL;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_646[i] = &l_647;
    if (((safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((func_33(func_37(((g_190 = func_43(l_46[2], p_26)) < ((safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((p_26 || l_46[2]), ((p_26 , ((safe_lshift_func_int8_t_s_u(((p_26 >= (safe_rshift_func_uint8_t_u_s(l_46[2], 7))) , ((g_176 || 7L) && p_26)), l_46[6])) < l_46[2])) , g_60[0]))), g_60[0])) >= g_60[0])), p_26, g_60[0], l_199[1][1][2], l_199[1][1][2]), p_26, p_26) && p_26), p_26)), p_26)), 0x9BL)) || l_46[2]))
    {
        short l_483 = 0xADD8L;
        unsigned **l_488[10] = {&g_148, &g_148, (void*)0, (void*)0, &g_148, &g_148, &g_148, (void*)0, (void*)0, &g_148};
        unsigned ***l_489 = (void*)0;
        unsigned ***l_490 = &l_488[3];
        int l_497 = 0x97909ACCL;
        const char l_498 = (-5L);
        int l_524 = (-9L);
        unsigned l_533 = 4294967295UL;
        unsigned l_551 = 4294967295UL;
        unsigned char **l_570[10][8][3] = {{{&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}}, {{&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}}, {{&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}}, {{&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}}, {{&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}}, {{&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}}, {{&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}}, {{&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}}, {{&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}}, {{&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}, {&g_271, &g_271, &g_271}}};
        unsigned l_580 = 0x7C5CF5D5L;
        int *l_605 = &l_497;
        unsigned ***l_665 = &g_595[3][4];
        unsigned l_698 = 1UL;
        unsigned short *l_728 = &g_259;
        int i, j, k;
        (*g_481) = l_480;
        if ((!(p_26 != ((safe_unary_minus_func_int32_t_s((l_483 != (safe_lshift_func_uint16_t_u_s(((func_62((safe_add_func_uint32_t_u_u((((((-1L) && ((p_26 , ((((*l_490) = l_488[2]) == (((safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(func_37(((*g_271) = l_483), (p_26 , (((safe_rshift_func_uint16_t_u_s((l_497 = g_7), 15)) & (*l_480)) <= l_498)), p_26, p_26, p_26), g_190)), 0x43L)) || 65529UL) , l_499)) , (*l_480))) == 0xDEL)) , (*l_490)) == &g_148) && g_322), l_483)), p_26) , 0x04L) >= g_412[2][3][1]), 6))))) < 0xF8L))))
        {
            unsigned l_504 = 5UL;
            unsigned short *l_505 = &l_199[1][1][2];
            int l_506 = 0x7027E7A8L;
            int *l_507[4][4];
            unsigned short *l_509 = (void*)0;
            unsigned short *l_510 = &g_127;
            char l_525 = 0xCFL;
            const int *l_607 = (void*)0;
            unsigned char ***l_617[1];
            char l_642 = 0x6DL;
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                    l_507[i][j] = &g_77;
            }
            for (i = 0; i < 1; i++)
                l_617[i] = &g_359[0][2];
            if ((safe_rshift_func_uint8_t_u_s((((safe_sub_func_int32_t_s_s((l_504 || (((p_26 & ((*l_505) |= g_176)) == 0xB4L) , ((*g_72) |= p_26))), 9UL)) | (((*l_480) > (l_508 |= (l_506 ^= l_504))) <= ((((*l_510) |= (*l_480)) , g_263[1]) > l_498))) > p_26), g_77)))
            {
                char l_518 = 0xDBL;
                short **l_532[3];
                int l_560[6][9] = {{(-7L), 1L, 0x9506EB00L, 3L, 0x57A8B261L, (-5L), 0xB5C79E48L, 0x56551176L, (-1L)}, {(-7L), 1L, 0x9506EB00L, 3L, 0x57A8B261L, (-5L), 0xB5C79E48L, 0x56551176L, (-1L)}, {(-7L), 1L, 0x9506EB00L, 3L, 0x57A8B261L, (-5L), 0xB5C79E48L, 0x56551176L, (-1L)}, {(-7L), 1L, 0x9506EB00L, 3L, 0x57A8B261L, (-5L), 0xB5C79E48L, 0x56551176L, (-1L)}, {(-7L), 1L, 0x9506EB00L, 3L, 0x57A8B261L, (-5L), 0xB5C79E48L, 0x56551176L, (-1L)}, {(-7L), 1L, 0x9506EB00L, 3L, 0x57A8B261L, (-5L), 0xB5C79E48L, 0x56551176L, (-1L)}};
                unsigned char ***l_619 = &g_359[0][0];
                unsigned char ***l_620 = &g_359[0][2];
                int ** const l_639 = &g_362;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_532[i] = (void*)0;
                for (g_172 = 0; (g_172 <= 3); g_172 += 1)
                {
                    int l_521 = (-6L);
                    unsigned l_522 = 0x0E8C3949L;
                    unsigned *l_523 = &l_504;
                    unsigned char *l_526 = &g_263[0];
                    if (((safe_lshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s(((((g_515[2][0] = (g_173 = l_498)) && (safe_mul_func_int8_t_s_s((l_497 <= l_518), (safe_rshift_func_int8_t_s_u(func_37((((*g_72) = l_521) != ((*l_510) |= p_26)), ((*l_523) ^= l_522), (l_524 = l_518), ((*l_526) = l_525), g_7), l_522))))) , p_26) & 0x5090L), (*g_271))), 2)) , 8L))
                    {
                        int **l_527 = &l_507[2][3];
                        (*l_527) = &l_521;
                        (*l_527) = &l_497;
                        if (p_26)
                            continue;
                        if ((**g_478))
                            break;
                    }
                    else
                    {
                        (*g_362) &= l_518;
                    }
                    l_533 ^= (safe_lshift_func_int16_t_s_s(func_37(l_522, (*l_480), l_522, ((!(p_26 ^ 1L)) , (safe_rshift_func_uint8_t_u_s(((*l_526) = ((void*)0 == &l_497)), 6))), ((void*)0 != l_532[2])), p_26));
                    for (l_508 = 3; (l_508 >= 0); l_508 -= 1)
                    {
                        int **l_536 = &l_507[1][3];
                        (*l_480) = (safe_rshift_func_int16_t_s_u(p_26, l_518));
                        (*l_536) = (void*)0;
                        l_521 ^= func_65(g_143, &g_128, ((safe_div_func_uint32_t_u_u(((g_353 && ((l_524 = func_65((((*g_148) = (safe_sub_func_uint8_t_u_u(p_26, g_180[1][1][0]))) || (g_265[3][2] , (safe_rshift_func_uint16_t_u_u(p_26, ((((safe_sub_func_uint32_t_u_u(p_26, (l_524 == p_26))) > (-1L)) == 0x137EL) > (*g_150)))))), &g_58, l_545[9][1][0], g_176)) ^ p_26)) & p_26), (-1L))) , &g_128), g_116);
                    }
                }
                (*l_480) = l_497;
                (*g_546) = &l_524;
                if ((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((*g_124), (func_37(l_551, p_26, ((((safe_rshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((p_26 , (safe_mul_func_int8_t_s_s((g_173 = g_515[2][0]), 0x5FL))), 4L)) || ((((func_37(func_51((*l_480), (**g_481), p_26, p_26), l_560[1][1], (*l_480), (*g_271), p_26) , 0x589032B6L) <= l_560[1][1]) ^ p_26) && 0L)), 3)) , 0x713AL) <= l_560[1][1]) || g_322), (*l_480), p_26) | p_26))), l_483)))
                {
                    unsigned short l_563 = 0x492EL;
                    unsigned char **l_568 = &g_271;
                    for (l_518 = 8; (l_518 < 29); ++l_518)
                    {
                        unsigned char ***l_569[7][3] = {{&l_568, &g_359[0][0], (void*)0}, {&l_568, &g_359[0][0], (void*)0}, {&l_568, &g_359[0][0], (void*)0}, {&l_568, &g_359[0][0], (void*)0}, {&l_568, &g_359[0][0], (void*)0}, {&l_568, &g_359[0][0], (void*)0}, {&l_568, &g_359[0][0], (void*)0}};
                        int l_579 = (-1L);
                        unsigned *l_592 = &g_116;
                        int l_593[4];
                        short l_594[1][4][10] = {{{(-1L), 0x355EL, 0xBEF4L, 0x4953L, 0L, 0xF8B0L, 0L, 0x4953L, 0xBEF4L, 0x355EL}, {(-1L), 0x355EL, 0xBEF4L, 0x4953L, 0L, 0xF8B0L, 0L, 0x4953L, 0xBEF4L, 0x355EL}, {(-1L), 0x355EL, 0xBEF4L, 0x4953L, 0L, 0xF8B0L, 0L, 0x4953L, 0xBEF4L, 0x355EL}, {(-1L), 0x355EL, 0xBEF4L, 0x4953L, 0L, 0xF8B0L, 0L, 0x4953L, 0xBEF4L, 0x355EL}}};
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                            l_593[i] = 0x70581EECL;
                        (*l_480) = ((p_26 , l_563) , (safe_mod_func_int8_t_s_s(((void*)0 == &g_127), ((safe_lshift_func_int8_t_s_s(((((*g_362) = (*g_150)) , l_560[0][3]) | ((g_359[0][0] = l_568) != l_570[4][5][0])), 2)) ^ (func_37(((safe_mod_func_int32_t_s_s(((((safe_rshift_func_uint16_t_u_s(((l_579 = (safe_mod_func_int32_t_s_s((safe_div_func_int8_t_s_s(l_560[1][1], (*g_271))), p_26))) , g_173), 11)) >= p_26) > (*g_271)) != p_26), l_580)) || 6L), l_563, g_515[2][0], (*g_271), g_58) , (*l_480))))));
                        (*l_480) ^= l_560[2][4];
                        (*l_480) = ((((**l_568) = (safe_mul_func_int8_t_s_s((((g_77 && 0x3FA2L) , g_322) ^ (((*g_362) = func_37(((safe_div_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s(l_579, (5UL & p_26))) & (l_593[2] |= (((func_37(p_26, ((*l_592) &= (safe_unary_minus_func_int8_t_s((p_26 < (p_26 >= p_26))))), g_172, p_26, g_412[4][1][0]) | l_518) , &l_568) != &l_568))) >= l_563), p_26)), g_259)) , (***g_358)), l_579, l_594[0][2][0], p_26, g_259)) <= p_26)), l_594[0][1][7]))) | l_560[2][2]) , (**g_481));
                    }
                    for (l_508 = 0; (l_508 >= 0); l_508 -= 1)
                    {
                        int i;
                        (*g_597) = (g_595[1][1] = g_595[3][4]);
                        (*g_362) |= g_60[l_508];
                    }
                    if (p_26)
                    {
                        unsigned *l_603 = &l_533;
                        int **l_604[9] = {&l_507[2][0], &l_507[2][0], &l_507[2][0], &l_507[2][0], &l_507[2][0], &l_507[2][0], &l_507[2][0], &l_507[2][0], &l_507[2][0]};
                        int i;
                        l_524 &= ((*l_480) &= 0L);
                        (*g_362) = ((((*l_505) = g_60[0]) && g_412[6][3][0]) || (253UL >= ((((safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u((p_26 & 0x96C0E35DL), p_26)), (l_563 || (l_603 == (l_533 , l_603))))) & p_26) != p_26) , (***g_358))));
                        l_605 = (*g_478);
                        (*g_362) &= 0x37B16FBCL;
                    }
                    else
                    {
                        int *l_606 = &l_506;
                        const int **l_608 = &l_607;
                        unsigned char ****l_618[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_618[i] = &l_617[0];
                        l_606 = &l_506;
                        (*l_608) = l_607;
                        (*g_362) = (!l_518);
                        (*l_605) = ((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(func_62(((*g_72) = ((*g_148) >= (5L ^ 1UL))), (safe_div_func_uint32_t_u_u((g_176 & (safe_div_func_int8_t_s_s(((l_619 = l_617[0]) == l_620), (g_515[0][0] &= (+((***g_358) | 0L)))))), (safe_mul_func_int8_t_s_s(func_37((safe_lshift_func_uint16_t_u_u((((((l_518 >= 0x00E3L) >= p_26) , p_26) ^ 0x010FL) , g_180[1][1][0]), (*l_605))), p_26, (*l_605), p_26, p_26), l_560[1][1]))))), g_265[4][0])), 0L)) ^ 9UL);
                    }
                    (*l_480) &= ((*l_605) ^= p_26);
                }
                else
                {
                    int *l_626 = &g_77;
                    short l_643 = 0x4EE5L;
                    int l_644 = 6L;
                    if (p_26)
                    {
                        int **l_625[7] = {&l_605, &l_605, &g_362, &l_605, &l_605, &g_362, &l_605};
                        int i;
                        l_626 = &l_506;
                        l_607 = &l_508;
                        (*g_396) = (*g_361);
                    }
                    else
                    {
                        const short * const * const **l_629 = &g_627;
                        short * const ***l_632 = &g_630;
                        int **l_641[8];
                        int ***l_640 = &l_641[6];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_641[i] = &l_507[2][0];
                        (*l_480) = ((((*l_629) = g_627) == ((*l_632) = g_630)) == (func_37(((func_51(p_26, p_26, (l_643 &= (func_51(func_51((safe_mod_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((((*l_480) == 65528UL) < (safe_rshift_func_int16_t_s_s(((((*l_480) , l_639) == ((*l_640) = &l_626)) >= 0xB2L), (**l_639)))), (*g_72))) > 7UL), 0x7DL)), p_26, p_26, p_26), p_26, l_642, p_26) != (**l_639))), p_26) & p_26) , p_26), l_644, p_26, (***g_358), p_26) || g_645));
                        (*g_362) ^= p_26;
                        (*l_480) = p_26;
                    }
                    (*g_362) &= (((***g_358) , l_646[2]) == (void*)0);
                }
            }
            else
            {
                int l_654 = 0x49A2AEC9L;
                (*l_605) &= (((safe_div_func_int8_t_s_s(2L, g_263[0])) != (p_26 , (safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(((((0x4BL || l_654) , ((p_26 < ((p_26 <= (l_654 ^= (((**g_631) ^= 5L) < g_176))) <= p_26)) , 0x5B64L)) , p_26) , g_263[1]), 0xDB53L)), 7)))) | 1L);
            }
        }
        else
        {
            int **l_662[7][3][5] = {{{(void*)0, &g_362, &g_362, &l_605, &l_605}, {(void*)0, &g_362, &g_362, &l_605, &l_605}, {(void*)0, &g_362, &g_362, &l_605, &l_605}}, {{(void*)0, &g_362, &g_362, &l_605, &l_605}, {(void*)0, &g_362, &g_362, &l_605, &l_605}, {(void*)0, &g_362, &g_362, &l_605, &l_605}}, {{(void*)0, &g_362, &g_362, &l_605, &l_605}, {(void*)0, &g_362, &g_362, &l_605, &l_605}, {(void*)0, &g_362, &g_362, &l_605, &l_605}}, {{(void*)0, &g_362, &g_362, &l_605, &l_605}, {(void*)0, &g_362, &g_362, &l_605, &l_605}, {(void*)0, &g_362, &g_362, &l_605, &l_605}}, {{(void*)0, &g_362, &g_362, &l_605, &l_605}, {(void*)0, &g_362, &g_362, &l_605, &l_605}, {(void*)0, &g_362, &g_362, &l_605, &l_605}}, {{(void*)0, &g_362, &g_362, &l_605, &l_605}, {(void*)0, &g_362, &g_362, &l_605, &l_605}, {(void*)0, &g_362, &g_362, &l_605, &l_605}}, {{(void*)0, &g_362, &g_362, &l_605, &l_605}, {(void*)0, &g_362, &g_362, &l_605, &l_605}, {(void*)0, &g_362, &g_362, &l_605, &l_605}}};
            int ***l_661[4];
            short *l_687 = &g_58;
            int l_702 = 0x8A1EE8BDL;
            short *l_703 = &g_690;
            unsigned l_704[3][9] = {{0x76A3A933L, 0x0EAAE731L, 8UL, 8UL, 0x0EAAE731L, 0x76A3A933L, 0x0EAAE731L, 8UL, 8UL}, {0x76A3A933L, 0x0EAAE731L, 8UL, 8UL, 0x0EAAE731L, 0x76A3A933L, 0x0EAAE731L, 8UL, 8UL}, {0x76A3A933L, 0x0EAAE731L, 8UL, 8UL, 0x0EAAE731L, 0x76A3A933L, 0x0EAAE731L, 8UL, 8UL}};
            const unsigned *l_727 = &g_75;
            const unsigned **l_726 = &l_727;
            const unsigned ***l_725 = &l_726;
            unsigned char *l_747[10] = {&g_172, &g_172, &g_172, &g_172, &g_172, &g_172, &g_172, &g_172, &g_172, &g_172};
            int **l_758 = (void*)0;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_661[i] = &l_662[3][0][4];
            for (g_127 = 4; (g_127 != 8); ++g_127)
            {
                int *l_657 = &l_524;
                unsigned *** const l_682 = &g_147;
                unsigned char l_697 = 0UL;
                int *l_755 = &l_524;
                l_657 = &l_497;
                if (((!((*l_605) < (**g_361))) ^ ((*l_480) >= p_26)))
                {
                    unsigned short l_658 = 0x1052L;
                    int **l_660 = &l_605;
                    int ***l_659 = &l_660;
                    if (l_658)
                    {
                        unsigned *l_666 = &g_60[0];
                        unsigned **l_667 = &g_596;
                        if ((*l_605))
                            break;
                        (*g_362) = (((l_661[1] = l_659) != (((((safe_div_func_int32_t_s_s((((void*)0 != l_665) == 0x8C03L), p_26)) , l_666) != ((*l_667) = l_657)) , ((safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((*l_480), (safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(p_26, 8UL)), (*l_657))))), 8)) | p_26)) , &l_660)) && 0x54L);
                    }
                    else
                    {
                        (***l_659) = (+(func_37((*g_271), (((p_26 , (*l_657)) & (safe_div_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(2UL, (!p_26))) >= ((void*)0 != &g_358)), (***l_659)))) , (((g_143 , (**l_660)) , l_682) != (void*)0)), (*l_605), p_26, g_412[2][3][1]) , p_26));
                        return p_26;
                    }
                }
                else
                {
                    unsigned short l_699 = 65535UL;
                    short *l_709 = &l_483;
                    (*g_362) |= (0x80508721L | ((*g_148) |= (safe_sub_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_s(func_65(p_26, l_687, l_687, g_77), ((*l_657) = (g_515[2][0] ^= g_259)))) <= p_26) != (safe_add_func_uint16_t_u_u(g_690, 0UL))), (-4L)))));
                    (*l_657) = (((safe_rshift_func_uint16_t_u_u((*l_605), g_645)) , p_26) > ((safe_mul_func_int8_t_s_s(((*g_148) < ((l_699 |= (safe_lshift_func_int16_t_s_u(((l_697 |= 0L) != (l_698 = (*g_271))), 8))) <= g_690)), (safe_rshift_func_int16_t_s_u((*g_72), 15)))) , (func_65(l_702, l_703, l_687, l_704[1][1]) , 0xF3850A1CL)));
                    l_508 &= ((safe_add_func_int16_t_s_s(0L, func_37(func_65((safe_rshift_func_int16_t_s_s(((**g_631) = 0x67F2L), 11)), l_703, (l_709 = &l_483), l_699), p_26, ((safe_div_func_int32_t_s_s(0x9B12FC46L, (safe_lshift_func_uint16_t_u_s((g_127 || 0L), 9)))) > g_143), p_26, g_690))) || (*l_657));
                }
                for (g_116 = 0; (g_116 < 52); g_116 = safe_add_func_int32_t_s_s(g_116, 9))
                {
                    unsigned **l_717 = &g_148;
                    unsigned short *l_720 = &g_259;
                    unsigned * const ***l_723 = (void*)0;
                    unsigned * const **l_724 = &g_722;
                    int l_749 = 0L;
                    unsigned l_754[9][7][3] = {{{0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}}, {{0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}}, {{0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}}, {{0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}}, {{0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}}, {{0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}}, {{0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}}, {{0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}}, {{0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}, {0x8E15A49AL, 0xBD5CA3B4L, 0xC41B0D7FL}}};
                    int *l_762 = &g_180[1][1][0];
                    int i, j, k;
                    (*g_362) = (((((p_26 & (l_716 , ((((*g_72) = p_26) >= ((((*l_605) , l_717) != l_717) ^ (safe_lshift_func_uint16_t_u_s(((*l_720) = 0x521EL), 11)))) != func_65(((((l_724 = g_721[3][1]) != l_725) != (*l_480)) , p_26), &l_483, l_687, p_26)))) , l_728) != l_687) != 0L) == p_26);
                    for (l_483 = 3; (l_483 != (-26)); l_483--)
                    {
                        unsigned l_735 = 0xF98DE159L;
                        int *l_740 = &g_645;
                        (*g_361) = &l_497;
                        (*l_480) ^= (~(p_26 , (safe_sub_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u(l_735, 255UL)) >= (safe_add_func_int8_t_s_s(((***g_630) < (~(p_26 , p_26))), (((((*l_740) = (safe_add_func_uint16_t_u_u(0xDE24L, (-7L)))) , (safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((p_26 , 0L), 0x9F650C7EL)), p_26))) >= p_26) >= 0x72E1L)))) <= p_26), (*l_605)))));
                        return p_26;
                    }
                    if ((g_231 ^ ((((safe_mod_func_uint8_t_u_u(((((g_748 = l_747[6]) != &l_697) || (p_26 >= p_26)) <= ((*l_720) |= (l_749 , 65535UL))), (safe_lshift_func_int16_t_s_u((*g_124), 9)))) | (safe_mod_func_uint16_t_u_u(g_645, 0x4EB4L))) != l_754[5][0][0]) ^ p_26)))
                    {
                        int *l_757[7][9] = {{(void*)0, &g_180[1][1][0], &l_749, &g_180[1][1][0], (void*)0, &g_322, (void*)0, &g_180[1][1][0], &g_180[1][1][0]}, {(void*)0, &g_180[1][1][0], &l_749, &g_180[1][1][0], (void*)0, &g_322, (void*)0, &g_180[1][1][0], &g_180[1][1][0]}, {(void*)0, &g_180[1][1][0], &l_749, &g_180[1][1][0], (void*)0, &g_322, (void*)0, &g_180[1][1][0], &g_180[1][1][0]}, {(void*)0, &g_180[1][1][0], &l_749, &g_180[1][1][0], (void*)0, &g_322, (void*)0, &g_180[1][1][0], &g_180[1][1][0]}, {(void*)0, &g_180[1][1][0], &l_749, &g_180[1][1][0], (void*)0, &g_322, (void*)0, &g_180[1][1][0], &g_180[1][1][0]}, {(void*)0, &g_180[1][1][0], &l_749, &g_180[1][1][0], (void*)0, &g_322, (void*)0, &g_180[1][1][0], &g_180[1][1][0]}, {(void*)0, &g_180[1][1][0], &l_749, &g_180[1][1][0], (void*)0, &g_322, (void*)0, &g_180[1][1][0], &g_180[1][1][0]}};
                        int ***l_759 = &l_758;
                        int i, j;
                        l_757[0][5] = (l_605 = (l_756 = (l_755 = &l_497)));
                        (*g_362) = (((*l_759) = l_758) == g_760);
                    }
                    else
                    {
                        l_762 = &l_524;
                        return p_26;
                    }
                }
                for (l_716 = 9; (l_716 >= 0); l_716 -= 1)
                {
                    int l_763 = 0x9313179FL;
                    return l_763;
                }
            }
        }
        for (l_551 = 0; (l_551 <= 0); l_551 += 1)
        {
            int l_765[4];
            int i;
            for (i = 0; i < 4; i++)
                l_765[i] = 1L;
            (*g_764) = (*g_546);
            return l_765[1];
        }
    }
    else
    {
        unsigned char ***l_771[5] = {&g_359[0][0], &g_359[0][0], &g_359[0][0], &g_359[0][0], &g_359[0][0]};
        unsigned char ****l_770 = &l_771[1];
        unsigned char ****l_772 = (void*)0;
        const unsigned char *l_776 = (void*)0;
        const unsigned char **l_775 = &l_776;
        const unsigned char ***l_774[3];
        const unsigned char ****l_773 = &l_774[0];
        const unsigned char *****l_777[2][6] = {{&l_773, &l_773, &l_773, &l_773, &l_773, &l_773}, {&l_773, &l_773, &l_773, &l_773, &l_773, &l_773}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_774[i] = &l_775;
        (*g_362) ^= (safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((*l_480) = (g_515[3][0] |= (g_173 |= (((((l_772 = l_770) != (g_778 = l_773)) | (-1L)) | (safe_rshift_func_int16_t_s_u(p_26, 2))) != (safe_lshift_func_uint16_t_u_u(g_128, 2)))))), p_26)), g_60[0]));
    }
    if (func_65(g_412[2][9][1], &g_690, &g_58, (*l_480)))
    {
        unsigned l_786 = 4294967295UL;
        if (l_786)
        {
            return p_26;
        }
        else
        {
            unsigned l_787 = 4294967294UL;
            return l_787;
        }
    }
    else
    {
        unsigned short *l_789 = &g_127;
        unsigned short **l_788 = &l_789;
        unsigned short ***l_791 = &l_788;
        (*l_791) = l_788;
    }
    return l_792;
}







static unsigned char func_33(char p_34, unsigned p_35, unsigned p_36)
{
    unsigned ** const *l_202 = &g_147;
    int l_215 = 0L;
    int *l_218 = &g_180[1][5][0];
    int *l_219 = &g_190;
    const int l_220 = 0x4947CCC2L;
    unsigned short *l_221 = &g_127;
    unsigned char *l_236 = &g_176;
    unsigned **l_292 = &g_148;
    int *l_313[1];
    int l_409[4];
    unsigned l_410 = 4294967295UL;
    unsigned char l_429[7];
    char l_435 = 0x14L;
    int i;
    for (i = 0; i < 1; i++)
        l_313[i] = (void*)0;
    for (i = 0; i < 4; i++)
        l_409[i] = 0L;
    for (i = 0; i < 7; i++)
        l_429[i] = 250UL;
    if (func_62(((void*)0 != l_202), (((safe_rshift_func_uint8_t_u_s(p_34, 0)) || ((*g_148) ^= (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((*l_221) = (safe_mul_func_uint16_t_u_u(g_58, (((((*l_219) = (safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(l_215, (1UL < (((*l_218) ^= (0x05L >= (safe_div_func_uint16_t_u_u((p_34 >= (l_215 , l_215)), p_36)))) ^ p_35)))), g_116))) , (*l_218)) == 0x71L) > l_220)))), 9)), g_60[0])))) >= g_128)))
    {
        return p_36;
    }
    else
    {
        unsigned char *l_228[2][6][2];
        int l_229 = 0xDB9AF29FL;
        int l_230 = 1L;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 6; j++)
            {
                for (k = 0; k < 2; k++)
                    l_228[i][j][k] = (void*)0;
            }
        }
        (*l_218) = (((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((+(*l_218)), (g_176 & func_37((g_172 = p_35), ((l_229 ^= (g_58 != func_65(g_128, l_221, l_221, g_60[0]))) , 0xAB77A995L), (*l_218), l_230, (*l_218))))), g_7)), l_230)) < 65535UL) , g_231);
    }
    for (g_77 = 0; (g_77 <= 2); g_77 += 1)
    {
        char *l_234 = &g_173;
        int l_235[7] = {0L, 0L, (-3L), 0L, 0L, (-3L), 0L};
        unsigned char **l_237 = &l_236;
        int l_238 = 0x042DFD0DL;
        unsigned ***l_247 = &g_147;
        unsigned **l_293[1];
        unsigned short l_295 = 65529UL;
        char l_300 = 0xA7L;
        int l_303 = (-1L);
        int *l_312 = &l_303;
        char l_352 = (-1L);
        unsigned short l_394 = 0xD93DL;
        short l_395 = (-10L);
        int i;
        for (i = 0; i < 1; i++)
            l_293[i] = (void*)0;
        (*l_218) = (safe_rshift_func_int8_t_s_u(((((((*l_237) = ((((((p_36 , (~(l_234 != &p_34))) , (func_37(((l_235[3] = p_36) > (!g_116)), ((*g_124) & 0L), p_36, ((void*)0 == &l_220), g_77) != 8L)) , p_36) ^ 0xCEA2D98CL) != 0xFE27L) , l_236)) != (void*)0) >= 65526UL) | 0xE0L) | l_238), 5));
        for (g_176 = 0; (g_176 <= 0); g_176 += 1)
        {
            unsigned ***l_248 = &g_147;
            short l_260 = 0x2468L;
            unsigned char **l_276[8];
            short l_294[5][7] = {{(-8L), (-4L), 0x5270L, (-4L), (-8L), 0x520FL, 0x5270L}, {(-8L), (-4L), 0x5270L, (-4L), (-8L), 0x520FL, 0x5270L}, {(-8L), (-4L), 0x5270L, (-4L), (-8L), 0x520FL, 0x5270L}, {(-8L), (-4L), 0x5270L, (-4L), (-8L), 0x520FL, 0x5270L}, {(-8L), (-4L), 0x5270L, (-4L), (-8L), 0x520FL, 0x5270L}};
            int i, j;
            for (i = 0; i < 8; i++)
                l_276[i] = &l_236;
            if (g_60[g_176])
                break;
            for (l_238 = 0; (l_238 >= 0); l_238 -= 1)
            {
                unsigned short l_257 = 0UL;
                unsigned short *l_258 = &g_259;
                unsigned char *l_261 = &g_172;
                unsigned char *l_262 = &g_263[0];
                unsigned char *l_264 = &g_265[4][2];
                if ((safe_sub_func_uint8_t_u_u((0xEEL <= ((*l_264) &= (((*l_218) & func_37(((*l_262) = ((*l_261) = (((safe_add_func_int32_t_s_s(p_35, func_37((p_36 | ((*l_258) |= func_37(((((safe_mod_func_int8_t_s_s((func_37((func_37((!func_37(((safe_lshift_func_int8_t_s_u((l_247 != l_248), p_34)) != 4294967295UL), (safe_mul_func_int8_t_s_s((+((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(0UL, (-4L))), l_257)), 0xC8L)) , 0x48L)), 0x73L)), g_60[g_176], g_7, (*l_218))), g_180[1][1][0], g_127, p_36, g_173) == p_35), g_60[g_176], (*l_218), p_34, g_180[1][1][0]) || (*g_148)), g_58)) , p_35) && g_60[g_176]) , g_128), l_235[3], g_75, l_235[6], p_35))), l_235[0], g_60[g_176], p_35, l_260))) > l_260) < p_36))), g_173, (*l_218), (*l_218), p_34)) == l_235[4]))), 0xF9L)))
                {
                    const short *l_267 = &g_58;
                    const short ** const l_266[3] = {&l_267, &l_267, &l_267};
                    int i;
                    (*g_268) = l_266[1];
                    (*l_218) = ((void*)0 == &g_259);
                }
                else
                {
                    for (g_172 = 0; (g_172 <= 2); g_172 += 1)
                    {
                        (*l_218) = p_35;
                    }
                }
            }
            g_76[g_77] = (void*)0;
            for (g_127 = 0; (g_127 <= 0); g_127 += 1)
            {
                unsigned l_277[5][4][7] = {{{0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L}, {0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L}, {0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L}, {0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L}}, {{0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L}, {0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L}, {0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L}, {0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L}}, {{0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L}, {0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L}, {0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L}, {0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L}}, {{0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L}, {0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L}, {0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L}, {0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L}}, {{0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L}, {0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L}, {0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L}, {0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L, 0x91CA6C46L, 4294967287UL, 0x91CA6C46L}}};
                int l_284[7] = {1L, 0x3CCF8865L, 1L, 0x3CCF8865L, 1L, 0x3CCF8865L, 1L};
                int **l_285 = &l_218;
                int * volatile *l_286 = &g_76[0];
                unsigned **l_291 = &g_148;
                int i, j, k;
                if ((((g_271 = &g_265[0][0]) == &g_265[4][2]) >= (func_37((((safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((void*)0 != l_276[1]), ((*g_72) = (0xF760L >= 0x124EL)))), ((*g_148) = ((&g_77 != &g_77) , (g_128 , l_235[1]))))) != 0x92E37C56L) && g_127), l_277[2][2][1], l_235[5], g_263[0], p_35) <= g_77)))
                {
                    unsigned char l_282[8][10][3] = {{{0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}}, {{0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}}, {{0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}}, {{0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}}, {{0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}}, {{0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}}, {{0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}}, {{0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}, {0xE0L, 0x27L, 250UL}}};
                    int *l_283[6][7][6] = {{{&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}}, {{&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}}, {{&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}}, {{&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}}, {{&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}}, {{&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}, {&g_77, &l_238, &l_215, &g_143, (void*)0, (void*)0}}};
                    int i, j, k;
                    l_284[2] ^= (safe_div_func_int32_t_s_s(((*g_124) >= (p_34 | (safe_sub_func_int16_t_s_s(((((void*)0 != &g_269) <= (((((*g_271) = (*g_271)) , p_36) ^ func_37(p_35, g_127, p_34, p_35, g_77)) < (-3L))) || l_282[2][7][2]), 0UL)))), p_34));
                }
                else
                {
                    for (p_34 = 0; (p_34 <= 0); p_34 += 1)
                    {
                        return (*g_271);
                    }
                }
                (*l_285) = &l_215;
                (*l_286) = g_76[g_77];
                l_235[0] = ((l_295 = (((&l_218 == (void*)0) <= ((l_237 != (void*)0) != (safe_rshift_func_int8_t_s_s(((0L < ((*g_72) = (func_37((*g_271), (l_291 == (l_293[0] = l_292)), (**l_285), l_294[3][4], p_34) & 0UL))) && l_235[3]), 1)))) ^ p_35)) , p_35);
            }
        }
    }
    return p_34;
}







static char func_37(unsigned char p_38, unsigned p_39, char p_40, unsigned char p_41, int p_42)
{
    const int * const l_200[9] = {&g_180[1][1][0], &g_180[1][1][0], &g_143, &g_180[1][1][0], &g_180[1][1][0], &g_143, &g_180[1][1][0], &g_180[1][1][0], &g_143};
    const int *l_201 = &g_180[1][1][0];
    int i;
    l_201 = l_200[0];
    return (*l_201);
}







static char func_43(unsigned short p_44, short p_45)
{
    short l_59 = 0x3097L;
    int *l_153 = &g_143;
    int l_182[8][7][4] = {{{9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}}, {{9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}}, {{9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}}, {{9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}}, {{9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}}, {{9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}}, {{9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}}, {{9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}, {9L, 0x2905C28BL, 1L, 0x2905C28BL}}};
    unsigned short *l_187 = &g_127;
    int l_188 = (-9L);
    int i, j, k;
    for (p_45 = (-7); (p_45 > (-20)); p_45 = safe_sub_func_int32_t_s_s(p_45, 3))
    {
        unsigned short l_61 = 0x5119L;
        int *l_181[5][10] = {{&g_143, &g_77, (void*)0, (void*)0, (void*)0, (void*)0, &g_77, &g_143, (void*)0, &g_143}, {&g_143, &g_77, (void*)0, (void*)0, (void*)0, (void*)0, &g_77, &g_143, (void*)0, &g_143}, {&g_143, &g_77, (void*)0, (void*)0, (void*)0, (void*)0, &g_77, &g_143, (void*)0, &g_143}, {&g_143, &g_77, (void*)0, (void*)0, (void*)0, (void*)0, &g_77, &g_143, (void*)0, &g_143}, {&g_143, &g_77, (void*)0, (void*)0, (void*)0, (void*)0, &g_77, &g_143, (void*)0, &g_143}};
        int i, j;
        for (p_44 = 0; (p_44 != 12); p_44++)
        {
            char l_56 = 0xCAL;
            short *l_57[7];
            short **l_70 = (void*)0;
            short **l_71[9];
            unsigned *l_73 = (void*)0;
            unsigned *l_74 = &g_75;
            int *l_141 = (void*)0;
            int *l_142 = &g_143;
            int i;
            for (i = 0; i < 7; i++)
                l_57[i] = &g_58;
            for (i = 0; i < 9; i++)
                l_71[i] = (void*)0;
            if (((*l_142) ^= (((((0x9731L > (func_51((l_61 = ((p_45 <= ((l_59 = l_56) > 1L)) != g_60[0])), func_62(p_45, func_65((l_56 || (((*l_74) &= (&p_45 == (g_72 = l_57[4]))) >= 2UL)), &g_58, &g_58, p_44)), l_56, l_56) < l_56)) && p_45) , l_61) , g_75) >= 0x94EDL)))
            {
                unsigned **l_144 = &l_74;
                unsigned ***l_145 = (void*)0;
                int l_149[7][6][6] = {{{(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}}, {{(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}}, {{(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}}, {{(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}}, {{(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}}, {{(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}}, {{(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}, {(-1L), 0L, 0x4FF7E3BCL, 0x5BE2A38AL, 0L, 0x95F91D9BL}}};
                int i, j, k;
                (*g_146) = l_144;
                (*g_150) &= ((*l_142) = l_149[1][0][2]);
            }
            else
            {
                int *l_151 = (void*)0;
                int **l_152[8] = {(void*)0, &l_141, (void*)0, &l_141, (void*)0, &l_141, (void*)0, &l_141};
                int i;
                l_153 = l_151;
            }
            if (p_44)
                continue;
            g_82[4] = &g_77;
        }
        for (g_128 = 0; (g_128 <= 2); g_128 += 1)
        {
            unsigned l_154[10][2][9] = {{{0xB0CE1991L, 0UL, 0xA27DD60BL, 4294967287UL, 4294967295UL, 0UL, 0x306FF473L, 4294967295UL, 0x306FF473L}, {0xB0CE1991L, 0UL, 0xA27DD60BL, 4294967287UL, 4294967295UL, 0UL, 0x306FF473L, 4294967295UL, 0x306FF473L}}, {{0xB0CE1991L, 0UL, 0xA27DD60BL, 4294967287UL, 4294967295UL, 0UL, 0x306FF473L, 4294967295UL, 0x306FF473L}, {0xB0CE1991L, 0UL, 0xA27DD60BL, 4294967287UL, 4294967295UL, 0UL, 0x306FF473L, 4294967295UL, 0x306FF473L}}, {{0xB0CE1991L, 0UL, 0xA27DD60BL, 4294967287UL, 4294967295UL, 0UL, 0x306FF473L, 4294967295UL, 0x306FF473L}, {0xB0CE1991L, 0UL, 0xA27DD60BL, 4294967287UL, 4294967295UL, 0UL, 0x306FF473L, 4294967295UL, 0x306FF473L}}, {{0xB0CE1991L, 0UL, 0xA27DD60BL, 4294967287UL, 4294967295UL, 0UL, 0x306FF473L, 4294967295UL, 0x306FF473L}, {0xB0CE1991L, 0UL, 0xA27DD60BL, 4294967287UL, 4294967295UL, 0UL, 0x306FF473L, 4294967295UL, 0x306FF473L}}, {{0xB0CE1991L, 0UL, 0xA27DD60BL, 4294967287UL, 4294967295UL, 0UL, 0x306FF473L, 4294967295UL, 0x306FF473L}, {0xB0CE1991L, 0UL, 0xA27DD60BL, 4294967287UL, 4294967295UL, 0UL, 0x306FF473L, 4294967295UL, 0x306FF473L}}, {{0xB0CE1991L, 0UL, 0xA27DD60BL, 4294967287UL, 4294967295UL, 0UL, 0x306FF473L, 4294967295UL, 0x306FF473L}, {0xB0CE1991L, 0UL, 0xA27DD60BL, 4294967287UL, 4294967295UL, 0UL, 0x306FF473L, 4294967295UL, 0x306FF473L}}, {{0xB0CE1991L, 0UL, 0xA27DD60BL, 4294967287UL, 4294967295UL, 0UL, 0x306FF473L, 4294967295UL, 0x306FF473L}, {0xB0CE1991L, 0UL, 0xA27DD60BL, 4294967287UL, 4294967295UL, 0UL, 0x306FF473L, 4294967295UL, 0x306FF473L}}, {{0xB0CE1991L, 0UL, 0xA27DD60BL, 4294967287UL, 4294967295UL, 0UL, 0x306FF473L, 4294967295UL, 0x306FF473L}, {0xB0CE1991L, 0UL, 0xA27DD60BL, 4294967287UL, 4294967295UL, 0UL, 0x306FF473L, 4294967295UL, 0x306FF473L}}, {{0xB0CE1991L, 0UL, 0xA27DD60BL, 4294967287UL, 4294967295UL, 0UL, 0x306FF473L, 4294967295UL, 0x306FF473L}, {0xB0CE1991L, 0UL, 0xA27DD60BL, 4294967287UL, 4294967295UL, 0UL, 0x306FF473L, 4294967295UL, 0x306FF473L}}, {{0xB0CE1991L, 0UL, 0xA27DD60BL, 4294967287UL, 4294967295UL, 0UL, 0x306FF473L, 4294967295UL, 0x306FF473L}, {0xB0CE1991L, 0UL, 0xA27DD60BL, 4294967287UL, 4294967295UL, 0UL, 0x306FF473L, 4294967295UL, 0x306FF473L}}};
            short *l_174 = &l_59;
            int l_177 = (-8L);
            int i, j, k;
            for (p_44 = 0; (p_44 <= 4); p_44 += 1)
            {
                short **l_164 = &g_124;
                unsigned char *l_171 = &g_172;
                unsigned char *l_175[2];
                int *l_178 = &g_77;
                int *l_179 = &g_180[1][1][0];
                int i;
                for (i = 0; i < 2; i++)
                    l_175[i] = &g_176;
                (*l_179) ^= ((*l_178) = (((*l_174) = (l_154[1][1][6] & ((l_177 ^= ((!(((safe_sub_func_int32_t_s_s((((*g_150) , func_65((safe_rshift_func_int16_t_s_s(((((*g_148) = (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((safe_mod_func_int16_t_s_s(p_44, func_65(g_143, ((*l_164) = &g_128), &g_58, (((safe_lshift_func_uint8_t_u_u((g_173 = ((*l_171) |= (safe_rshift_func_uint16_t_u_s((255UL > ((safe_mod_func_int16_t_s_s(p_44, (-6L))) != l_61)), p_44)))), g_116)) != 0x99ACL) , l_154[2][1][4])))))), g_128))) < p_45) | 0xEA09826EL), l_61)), l_174, &g_58, g_127)) , 0xFE16E7D2L), 4294967293UL)) != 0xCBL) >= p_44)) != 0xF25517FAL)) != g_176))) && p_45));
                (*l_179) |= l_154[1][1][6];
            }
        }
        g_180[1][1][0] ^= (func_62(l_61, (l_182[5][4][0] = func_51((((l_188 |= ((-7L) <= ((func_51(l_59, (l_182[5][4][0] |= 6L), (safe_mul_func_int16_t_s_s(0x4AA3L, (safe_add_func_uint8_t_u_u(p_44, (&l_61 != (g_116 , l_187)))))), p_45) , p_45) != p_44))) , p_45) != (*g_124)), p_45, p_44, p_44))) < p_44);
    }
    return g_7;
}







static const unsigned char func_51(short p_52, int p_53, short p_54, int p_55)
{
    const unsigned l_134 = 9UL;
    int *l_137[6][4][7] = {{{&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}}, {{&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}}, {{&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}}, {{&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}}, {{&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}}, {{&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77}}};
    unsigned short l_138 = 0x0E35L;
    short *l_139 = &g_128;
    unsigned char l_140 = 1UL;
    int i, j, k;
    p_55 = (safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(l_134, (safe_mul_func_int16_t_s_s((l_137[3][2][5] != l_137[3][2][5]), (*g_124))))), func_65(l_138, l_139, l_139, l_140)));
    return p_52;
}







static int func_62(short p_63, int p_64)
{
    unsigned l_84 = 0xF6F8F643L;
    int l_93 = 0xDB9D72FAL;
    short *l_112 = &g_58;
    for (p_63 = (-12); (p_63 > 18); p_63 = safe_add_func_uint16_t_u_u(p_63, 1))
    {
        short **l_81 = &g_72;
        int *l_83[6][4][6] = {{{&g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77}}, {{&g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77}}, {{&g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77}}, {{&g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77}}, {{&g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77}}, {{&g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77}, {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77}}};
        int i, j, k;
        l_84 |= (((*l_81) = &g_58) == &p_63);
        for (p_64 = 0; (p_64 == 25); p_64++)
        {
            int l_87 = 0L;
            short *l_88 = &g_58;
            int l_94[2];
            int i;
            for (i = 0; i < 2; i++)
                l_94[i] = (-6L);
            l_94[0] = func_65(((func_65(l_87, ((*l_81) = l_88), (g_60[0] , &g_58), g_60[0]) && l_84) , ((safe_sub_func_int32_t_s_s((l_93 &= (((0UL < (((safe_rshift_func_uint8_t_u_u(p_63, g_58)) , l_87) == 65535UL)) ^ p_63) > l_84)), p_63)) | l_87)), &g_58, &g_58, p_64);
        }
        for (g_58 = 0; (g_58 < (-27)); g_58 = safe_sub_func_int8_t_s_s(g_58, 5))
        {
            short l_107[7] = {(-8L), (-8L), 0xA5F0L, (-8L), (-8L), 0xA5F0L, (-8L)};
            short ** const l_125[6][8][5] = {{{&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}}, {{&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}}, {{&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}}, {{&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}}, {{&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}}, {{&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}, {&g_124, (void*)0, (void*)0, &g_124, &g_124}}};
            int l_129 = 0x46E32D40L;
            int i, j, k;
            if (p_63)
                break;
            if (((p_63 & (l_84 , g_7)) & (safe_div_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((((safe_add_func_int8_t_s_s((g_60[0] >= ((l_93 >= g_77) <= (safe_lshift_func_int16_t_s_u(((g_77 || 1L) < (((safe_mul_func_int8_t_s_s(0x66L, g_60[0])) < g_75) > l_107[2])), 8)))), p_63)) >= p_64) , p_64), g_58)), g_60[0]))))
            {
                short **l_115[1][10] = {{&g_72, &g_72, (void*)0, (void*)0, &g_72, &g_72, &g_72, (void*)0, (void*)0, &g_72}};
                int i, j;
                g_116 &= ((safe_mul_func_uint8_t_u_u(g_75, p_63)) ^ ((safe_lshift_func_int8_t_s_s(func_65(p_64, l_112, &g_58, l_107[0]), (safe_sub_func_uint16_t_u_u(g_7, (l_115[0][2] != l_115[0][1]))))) | 0L));
                if (p_64)
                    break;
                if (p_64)
                    break;
            }
            else
            {
                unsigned l_121 = 0UL;
                short ***l_122[10][5][4] = {{{&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}}, {{&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}}, {{&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}}, {{&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}}, {{&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}}, {{&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}}, {{&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}}, {{&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}}, {{&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}}, {{&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}, {&l_81, &l_81, (void*)0, &l_81}}};
                unsigned short *l_126 = &g_127;
                int i, j, k;
                l_129 &= ((*g_72) & (g_128 &= ((*l_126) = (((p_63 , ((l_121 &= (4294967295UL & (safe_mul_func_uint8_t_u_u((safe_div_func_int32_t_s_s((0x592CL == (-5L)), p_63)), p_63)))) ^ ((g_123 = (void*)0) != l_125[1][4][2]))) , p_64) > 0x62ABC6E4L))));
                if (p_64)
                    break;
            }
        }
    }
    return l_84;
}







static int func_65(char p_66, short * p_67, short * p_68, char p_69)
{
    int *l_78 = &g_77;
    (*l_78) = p_66;
    return p_69;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_60[i], "g_60[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_180[i][j][k], "g_180[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_263[i], "g_263[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_265[i][j], "g_265[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_322, "g_322", print_hash_value);
    transparent_crc(g_353, "g_353", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_412[i][j][k], "g_412[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_515[i][j], "g_515[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_645, "g_645", print_hash_value);
    transparent_crc(g_690, "g_690", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_804[i][j][k], "g_804[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_834[i][j][k], "g_834[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_909, "g_909", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
