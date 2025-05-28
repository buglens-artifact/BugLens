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
   const unsigned f0;
   short f1;
   unsigned short f2;
   int f3;
   char * f4;
};


static char g_27 = (-1L);
static char *g_26 = &g_27;
static unsigned short g_29 = 0xD94EL;
static int g_46[7][6][2] = {{{1L, (-3L)}, {1L, (-3L)}, {1L, (-3L)}, {1L, (-3L)}, {1L, (-3L)}, {1L, (-3L)}}, {{1L, (-3L)}, {1L, (-3L)}, {1L, (-3L)}, {1L, (-3L)}, {1L, (-3L)}, {1L, (-3L)}}, {{1L, (-3L)}, {1L, (-3L)}, {1L, (-3L)}, {1L, (-3L)}, {1L, (-3L)}, {1L, (-3L)}}, {{1L, (-3L)}, {1L, (-3L)}, {1L, (-3L)}, {1L, (-3L)}, {1L, (-3L)}, {1L, (-3L)}}, {{1L, (-3L)}, {1L, (-3L)}, {1L, (-3L)}, {1L, (-3L)}, {1L, (-3L)}, {1L, (-3L)}}, {{1L, (-3L)}, {1L, (-3L)}, {1L, (-3L)}, {1L, (-3L)}, {1L, (-3L)}, {1L, (-3L)}}, {{1L, (-3L)}, {1L, (-3L)}, {1L, (-3L)}, {1L, (-3L)}, {1L, (-3L)}, {1L, (-3L)}}};
static int g_49 = (-2L);
static union U0 g_65 = {0x67E99E85L};
static unsigned g_78 = 0x1F286560L;
static unsigned g_82 = 0xA90D2634L;
static unsigned g_84[10][2][1] = {{{4294967295UL}, {4294967295UL}}, {{4294967295UL}, {4294967295UL}}, {{4294967295UL}, {4294967295UL}}, {{4294967295UL}, {4294967295UL}}, {{4294967295UL}, {4294967295UL}}, {{4294967295UL}, {4294967295UL}}, {{4294967295UL}, {4294967295UL}}, {{4294967295UL}, {4294967295UL}}, {{4294967295UL}, {4294967295UL}}, {{4294967295UL}, {4294967295UL}}};
static unsigned char g_89 = 1UL;
static int g_98 = 0xC16B7C5EL;
static unsigned char g_100 = 0UL;
static int g_126[1] = {(-10L)};
static int *g_130 = (void*)0;
static int **g_129 = &g_130;
static unsigned char *g_149 = &g_89;
static unsigned short g_159 = 65530UL;
static unsigned g_164 = 0xC57159EDL;
static unsigned g_167 = 0x8C49B0C1L;
static unsigned g_215 = 4294967295UL;
static int g_268 = 0xEC759BF6L;
static unsigned g_269 = 0xD1AB5465L;
static char g_275 = 1L;
static int g_301 = (-10L);
static short g_304 = 0xEF15L;
static int g_314 = 0x1CBF5D3BL;
static char g_315 = 0L;
static int g_316 = 1L;
static int g_318[9][7][2] = {{{0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}}, {{0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}}, {{0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}}, {{0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}}, {{0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}}, {{0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}}, {{0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}}, {{0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}}, {{0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}, {0x72BA4112L, (-4L)}}};
static char g_354 = 0xEFL;
static short g_382[3] = {0xD47BL, 0xD47BL, 0xD47BL};
static char *g_419 = &g_354;
static unsigned **g_427 = (void*)0;
static char **g_441 = &g_419;
static char ***g_440 = &g_441;
static char ****g_439 = &g_440;
static short g_491 = 1L;
static int g_509 = 0x5B9D43B3L;
static short *g_519 = &g_382[1];
static short **g_518 = &g_519;
static short ***g_517 = &g_518;
static union U0 g_576 = {0x1D57EF8BL};
static int g_588 = (-1L);
static int g_633[2] = {0x08375073L, 0x08375073L};
static union U0 *g_685 = (void*)0;
static union U0 **g_684[6][5][6] = {{{&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}, {&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}, {&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}, {&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}, {&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}}, {{&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}, {&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}, {&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}, {&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}, {&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}}, {{&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}, {&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}, {&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}, {&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}, {&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}}, {{&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}, {&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}, {&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}, {&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}, {&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}}, {{&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}, {&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}, {&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}, {&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}, {&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}}, {{&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}, {&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}, {&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}, {&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}, {&g_685, (void*)0, &g_685, &g_685, &g_685, &g_685}}};
static unsigned short *g_692[8] = {&g_576.f2, &g_576.f2, &g_576.f2, &g_576.f2, &g_576.f2, &g_576.f2, &g_576.f2, &g_576.f2};
static unsigned char g_709 = 0x34L;
static char *g_724 = &g_354;
static union U0 g_830 = {4294967295UL};
static const int g_933 = 3L;



static unsigned func_1(void);
static int func_2(union U0 p_3, const char * p_4, char p_5);
static union U0 func_6(unsigned short p_7, union U0 p_8, char * p_9);
static unsigned short func_10(char p_11, int p_12, int p_13, short p_14, unsigned p_15);
static int func_17(union U0 p_18, int p_19, unsigned char p_20, unsigned char p_21, union U0 p_22);
static const unsigned short func_23(char * p_24, unsigned short p_25);
static unsigned char func_34(int p_35, unsigned short * p_36, short p_37, unsigned short p_38, char * p_39);
static char * func_42(char * p_43);
static int func_52(char * p_53, const int p_54, unsigned p_55);
static char * func_56(unsigned short * p_57, unsigned short p_58, unsigned short * p_59, unsigned short p_60, union U0 p_61);
static unsigned func_1(void)
{
    unsigned l_16 = 0x23FE5E81L;
    unsigned short *l_28 = &g_29;
    int *l_706[4][2] = {{&g_49, &g_314}, {&g_49, &g_314}, {&g_49, &g_314}, {&g_49, &g_314}};
    union U0 l_707[3] = {{1UL}, {1UL}, {1UL}};
    unsigned char *l_708 = &g_709;
    char l_712 = 0xE5L;
    int l_715 = 0xCFA31887L;
    unsigned short l_821 = 0x7F31L;
    int i, j;
    g_318[5][1][0] = (g_49 |= func_2(func_6(func_10(l_16, func_17(((func_23(g_26, (l_16 , ((*l_28)--))) | ((g_314 = l_16) == g_509)) , l_707[0]), g_84[2][0][0], ((*l_708)++), l_712, l_707[0]), l_715, (***g_517), g_215), l_707[0], (*g_441)), &l_712, l_821));
    return g_98;
}







static int func_2(union U0 p_3, const char * p_4, char p_5)
{
    int l_841[9][3] = {{(-7L), 0L, 0x6B63913DL}, {(-7L), 0L, 0x6B63913DL}, {(-7L), 0L, 0x6B63913DL}, {(-7L), 0L, 0x6B63913DL}, {(-7L), 0L, 0x6B63913DL}, {(-7L), 0L, 0x6B63913DL}, {(-7L), 0L, 0x6B63913DL}, {(-7L), 0L, 0x6B63913DL}, {(-7L), 0L, 0x6B63913DL}};
    unsigned short *l_866 = &g_29;
    unsigned short l_920 = 0x1723L;
    unsigned l_928[10][10] = {{0x3985776BL, 0x602415B9L, 0x42992306L, 0UL, 0x62D63690L, 0xB4B36140L, 0x62D63690L, 0UL, 0x42992306L, 0x602415B9L}, {0x3985776BL, 0x602415B9L, 0x42992306L, 0UL, 0x62D63690L, 0xB4B36140L, 0x62D63690L, 0UL, 0x42992306L, 0x602415B9L}, {0x3985776BL, 0x602415B9L, 0x42992306L, 0UL, 0x62D63690L, 0xB4B36140L, 0x62D63690L, 0UL, 0x42992306L, 0x602415B9L}, {0x3985776BL, 0x602415B9L, 0x42992306L, 0UL, 0x62D63690L, 0xB4B36140L, 0x62D63690L, 0UL, 0x42992306L, 0x602415B9L}, {0x3985776BL, 0x602415B9L, 0x42992306L, 0UL, 0x62D63690L, 0xB4B36140L, 0x62D63690L, 0UL, 0x42992306L, 0x602415B9L}, {0x3985776BL, 0x602415B9L, 0x42992306L, 0UL, 0x62D63690L, 0xB4B36140L, 0x62D63690L, 0UL, 0x42992306L, 0x602415B9L}, {0x3985776BL, 0x602415B9L, 0x42992306L, 0UL, 0x62D63690L, 0xB4B36140L, 0x62D63690L, 0UL, 0x42992306L, 0x602415B9L}, {0x3985776BL, 0x602415B9L, 0x42992306L, 0UL, 0x62D63690L, 0xB4B36140L, 0x62D63690L, 0UL, 0x42992306L, 0x602415B9L}, {0x3985776BL, 0x602415B9L, 0x42992306L, 0UL, 0x62D63690L, 0xB4B36140L, 0x62D63690L, 0UL, 0x42992306L, 0x602415B9L}, {0x3985776BL, 0x602415B9L, 0x42992306L, 0UL, 0x62D63690L, 0xB4B36140L, 0x62D63690L, 0UL, 0x42992306L, 0x602415B9L}};
    int i, j;
lbl_831:
    for (g_78 = 8; (g_78 >= 13); g_78 = safe_add_func_int8_t_s_s(g_78, 6))
    {
        union U0 **l_824 = &g_685;
        int l_825[9][2] = {{0x71171FA0L, 0x311EF61BL}, {0x71171FA0L, 0x311EF61BL}, {0x71171FA0L, 0x311EF61BL}, {0x71171FA0L, 0x311EF61BL}, {0x71171FA0L, 0x311EF61BL}, {0x71171FA0L, 0x311EF61BL}, {0x71171FA0L, 0x311EF61BL}, {0x71171FA0L, 0x311EF61BL}, {0x71171FA0L, 0x311EF61BL}};
        int i, j;
        if ((**g_129))
            break;
        if (p_5)
            continue;
        (*l_824) = (void*)0;
        (*g_130) &= l_825[4][0];
    }
    (*g_130) = (**g_129);
    for (g_100 = 0; (g_100 == 25); g_100++)
    {
        union U0 *l_829 = &g_830;
        int l_839[9] = {0x8C1B02D9L, 0x53C67163L, 0x8C1B02D9L, 0x53C67163L, 0x8C1B02D9L, 0x53C67163L, 0x8C1B02D9L, 0x53C67163L, 0x8C1B02D9L};
        int i;
        for (g_315 = 0; (g_315 >= 0); g_315 -= 1)
        {
            int *l_832 = &g_314;
            int *l_853 = &g_318[6][1][0];
            int i;
            for (g_89 = 0; (g_89 <= 2); g_89 += 1)
            {
                union U0 **l_828[8] = {&g_685, &g_685, &g_685, &g_685, &g_685, &g_685, &g_685, &g_685};
                int l_840 = (-4L);
                int l_842 = 1L;
                int i;
                l_829 = &p_3;
                if (g_382[g_89])
                    continue;
                if (g_78)
                    goto lbl_831;
                for (g_354 = 2; (g_354 <= 7); g_354 += 1)
                {
                    int *l_833 = &g_46[2][3][0];
                    int *l_834 = &g_49;
                    int *l_835 = &g_49;
                    int *l_836 = &g_49;
                    int *l_837 = &g_46[3][1][1];
                    int *l_838[6] = {&g_46[3][1][1], (void*)0, &g_46[3][1][1], (void*)0, &g_46[3][1][1], (void*)0};
                    unsigned l_843 = 1UL;
                    int i;
                    (*g_129) = l_832;
                    --l_843;
                }
            }
            (*l_853) &= (safe_add_func_int32_t_s_s(p_5, (((((*p_4) == ((safe_div_func_uint32_t_u_u(((((*l_832) = 0x21L) >= (l_841[1][2] = ((*g_149) |= 1UL))) | 5UL), (+((safe_unary_minus_func_uint8_t_u(((void*)0 == g_692[(g_315 + 6)]))) & (l_839[8] & (safe_lshift_func_uint8_t_u_s(g_65.f1, 3))))))) >= g_588)) ^ g_830.f3) , 1UL) | p_3.f1)));
        }
        (**g_129) ^= 0xBE92538FL;
    }
    if (l_841[5][1])
    {
        int *l_854 = &l_841[3][1];
        short *** const l_904 = &g_518;
        int l_906 = 0x6C85F8ABL;
        union U0 l_930 = {0x36AECCA1L};
        int l_963 = 0L;
        int l_968 = 1L;
        int l_969 = 0x29ACA075L;
        int l_970 = 0x1F313A19L;
        int l_971 = 0L;
        for (g_98 = 0; (g_98 <= 2); g_98 += 1)
        {
            int * const l_860 = &g_318[6][1][0];
            char *l_872 = &g_27;
            unsigned l_873 = 2UL;
            unsigned char l_878 = 0x16L;
            int l_912[7] = {0x28369DE7L, (-1L), 0x28369DE7L, (-1L), 0x28369DE7L, (-1L), 0x28369DE7L};
            unsigned l_914 = 0x86F9C9C8L;
            int i;
            for (g_491 = 1; (g_491 >= 0); g_491 -= 1)
            {
                int l_859[7] = {(-1L), 0x1FB5ACB0L, (-1L), 0x1FB5ACB0L, (-1L), 0x1FB5ACB0L, (-1L)};
                char *l_874 = (void*)0;
                int i;
            }
        }
        return p_3.f2;
    }
    else
    {
        int * const l_978 = &g_588;
        int **l_979 = &g_130;
        for (g_509 = (-16); (g_509 <= 26); g_509 = safe_add_func_int16_t_s_s(g_509, 4))
        {
            (*g_129) = (*g_129);
        }
        (*l_979) = l_978;
        (*l_978) = (**g_129);
    }
    return p_3.f0;
}







static union U0 func_6(unsigned short p_7, union U0 p_8, char * p_9)
{
    union U0 l_737 = {0UL};
    unsigned *l_744[2];
    unsigned * const *l_743 = &l_744[0];
    int l_747[6][9] = {{1L, 0xCC83B33FL, 0L, 0xCC83B33FL, 1L, 0xCC83B33FL, 0L, 0xCC83B33FL, 1L}, {1L, 0xCC83B33FL, 0L, 0xCC83B33FL, 1L, 0xCC83B33FL, 0L, 0xCC83B33FL, 1L}, {1L, 0xCC83B33FL, 0L, 0xCC83B33FL, 1L, 0xCC83B33FL, 0L, 0xCC83B33FL, 1L}, {1L, 0xCC83B33FL, 0L, 0xCC83B33FL, 1L, 0xCC83B33FL, 0L, 0xCC83B33FL, 1L}, {1L, 0xCC83B33FL, 0L, 0xCC83B33FL, 1L, 0xCC83B33FL, 0L, 0xCC83B33FL, 1L}, {1L, 0xCC83B33FL, 0L, 0xCC83B33FL, 1L, 0xCC83B33FL, 0L, 0xCC83B33FL, 1L}};
    unsigned short *l_748 = &l_737.f2;
    char *l_749[4] = {&g_27, &g_275, &g_27, &g_275};
    unsigned char l_750[9] = {0UL, 1UL, 0UL, 1UL, 0UL, 1UL, 0UL, 1UL, 0UL};
    char l_752 = 0xECL;
    unsigned char l_760 = 255UL;
    int *l_798[4] = {&g_318[6][1][0], &g_318[6][1][0], &g_318[6][1][0], &g_318[6][1][0]};
    int l_799 = (-9L);
    int l_800[4][4] = {{0x85D90303L, 0x85D90303L, 0xC8B78F5AL, 0x85D90303L}, {0x85D90303L, 0x85D90303L, 0xC8B78F5AL, 0x85D90303L}, {0x85D90303L, 0x85D90303L, 0xC8B78F5AL, 0x85D90303L}, {0x85D90303L, 0x85D90303L, 0xC8B78F5AL, 0x85D90303L}};
    short l_801 = 8L;
    unsigned char l_802[10] = {253UL, 2UL, 250UL, 250UL, 2UL, 253UL, 2UL, 250UL, 250UL, 2UL};
    union U0 **l_809 = &g_685;
    union U0 ***l_810 = &g_684[5][4][0];
    const unsigned l_817 = 0x143C8777L;
    short *l_818 = &g_491;
    short *l_819 = &l_801;
    char **l_820 = &g_724;
    int i, j;
    for (i = 0; i < 2; i++)
        l_744[i] = &g_78;
    if ((((((l_737 , ((safe_mod_func_uint8_t_u_u(((l_737.f0 != func_34((safe_unary_minus_func_uint32_t_u((l_737.f1 ^ ((((***g_439) == (void*)0) != ((void*)0 == l_743)) ^ (safe_rshift_func_uint16_t_u_s((l_747[5][5] &= (p_8.f1 == 0x2BL)), l_737.f0)))))), l_748, p_8.f3, l_737.f3, l_749[3])) , p_8.f3), (**g_441))) == l_737.f0)) < l_737.f3) < 8UL) <= l_737.f2) != l_750[8]))
    {
        int *l_751 = &l_747[5][5];
        int *l_753 = (void*)0;
        int l_754 = 1L;
        int *l_755 = &g_46[3][1][1];
        int *l_756 = (void*)0;
        int *l_757 = &g_46[2][2][1];
        int *l_758 = &g_49;
        int *l_759[8][7][3] = {{{&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}}, {{&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}}, {{&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}}, {{&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}}, {{&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}}, {{&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}}, {{&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}}, {{&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}, {&l_747[1][8], &g_301, (void*)0}}};
        int i, j, k;
        l_760--;
        l_747[5][5] = l_747[5][5];
    }
    else
    {
        union U0 l_774 = {0x8573E915L};
        char *l_786 = (void*)0;
        for (l_752 = 0; (l_752 < 27); l_752 = safe_add_func_uint32_t_u_u(l_752, 6))
        {
            union U0 l_778[3][3][2] = {{{{0UL}, {0UL}}, {{0UL}, {0UL}}, {{0UL}, {0UL}}}, {{{0UL}, {0UL}}, {{0UL}, {0UL}}, {{0UL}, {0UL}}}, {{{0UL}, {0UL}}, {{0UL}, {0UL}}, {{0UL}, {0UL}}}};
            char *l_785[3][4][10] = {{{&g_315, &l_752, &l_752, &g_275, &g_315, &g_315, &g_315, &g_275, &l_752, &l_752}, {&g_315, &l_752, &l_752, &g_275, &g_315, &g_315, &g_315, &g_275, &l_752, &l_752}, {&g_315, &l_752, &l_752, &g_275, &g_315, &g_315, &g_315, &g_275, &l_752, &l_752}, {&g_315, &l_752, &l_752, &g_275, &g_315, &g_315, &g_315, &g_275, &l_752, &l_752}}, {{&g_315, &l_752, &l_752, &g_275, &g_315, &g_315, &g_315, &g_275, &l_752, &l_752}, {&g_315, &l_752, &l_752, &g_275, &g_315, &g_315, &g_315, &g_275, &l_752, &l_752}, {&g_315, &l_752, &l_752, &g_275, &g_315, &g_315, &g_315, &g_275, &l_752, &l_752}, {&g_315, &l_752, &l_752, &g_275, &g_315, &g_315, &g_315, &g_275, &l_752, &l_752}}, {{&g_315, &l_752, &l_752, &g_275, &g_315, &g_315, &g_315, &g_275, &l_752, &l_752}, {&g_315, &l_752, &l_752, &g_275, &g_315, &g_315, &g_315, &g_275, &l_752, &l_752}, {&g_315, &l_752, &l_752, &g_275, &g_315, &g_315, &g_315, &g_275, &l_752, &l_752}, {&g_315, &l_752, &l_752, &g_275, &g_315, &g_315, &g_315, &g_275, &l_752, &l_752}}};
            int *l_797 = &l_747[5][5];
            int i, j, k;
            for (g_78 = 0; (g_78 <= 7); g_78 += 1)
            {
                union U0 **l_765 = &g_685;
                short *l_773[4][7] = {{&g_576.f1, &g_576.f1, &g_304, (void*)0, (void*)0, (void*)0, &g_304}, {&g_576.f1, &g_576.f1, &g_304, (void*)0, (void*)0, (void*)0, &g_304}, {&g_576.f1, &g_576.f1, &g_304, (void*)0, (void*)0, (void*)0, &g_304}, {&g_576.f1, &g_576.f1, &g_304, (void*)0, (void*)0, (void*)0, &g_304}};
                int l_784 = 1L;
                int i, j;
                (*g_130) = (((**g_518) = p_7) > p_8.f1);
                (*l_765) = &l_737;
                for (g_29 = 0; (g_29 <= 1); g_29 += 1)
                {
                    unsigned char *l_772 = &l_750[8];
                    int l_787 = 0L;
                    int i, j, k;
                }
            }
            for (g_301 = 0; g_301 < 10; g_301 += 1)
            {
                for (g_167 = 0; g_167 < 2; g_167 += 1)
                {
                    for (g_89 = 0; g_89 < 1; g_89 += 1)
                    {
                        g_84[g_301][g_167][g_89] = 0x9335D504L;
                    }
                }
            }
            (*l_797) |= ((safe_lshift_func_uint8_t_u_u(0UL, 1)) || ((**g_129) & (((+((***g_517) |= ((safe_unary_minus_func_uint8_t_u(l_778[2][2][1].f1)) <= (safe_div_func_int8_t_s_s(((***g_440) <= ((void*)0 == (*g_129))), ((((*g_149) = ((p_7 &= ((safe_div_func_uint8_t_u_u(((++g_164) , (4L && (-1L))), 0xA4L)) , p_8.f2)) & p_8.f1)) == l_778[2][2][1].f3) , 0x54L)))))) > l_737.f2) & p_8.f1)));
        }
    }
    ++l_802[5];
    l_820 = ((safe_add_func_uint16_t_u_u((((*l_819) ^= (p_8.f1 & ((*l_818) ^= func_23(&l_752, ((((safe_unary_minus_func_uint16_t_u(p_8.f2)) && p_7) , (safe_unary_minus_func_uint16_t_u(0xB2A8L))) , ((!((l_737 , (&g_685 == ((*l_810) = l_809))) < (safe_lshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(g_576.f0, l_817)) || p_8.f2), p_7)), (**g_441))))) == p_8.f2)))))) != p_8.f1), p_8.f2)) , &p_9);
    return p_8;
}







static unsigned short func_10(char p_11, int p_12, int p_13, short p_14, unsigned p_15)
{
    union U0 l_718 = {0x5A8CE6D2L};
    unsigned short *l_725 = &g_65.f2;
    char *l_727 = &g_275;
    int l_729[5][1][10] = {{{0x89FD2C9AL, 0xF053531AL, 0xF9C1C413L, 0xF053531AL, 0x89FD2C9AL, 0xD81C2FFEL, (-5L), 0xF053531AL, 0x3FA7AFCEL, 0xF053531AL}}, {{0x89FD2C9AL, 0xF053531AL, 0xF9C1C413L, 0xF053531AL, 0x89FD2C9AL, 0xD81C2FFEL, (-5L), 0xF053531AL, 0x3FA7AFCEL, 0xF053531AL}}, {{0x89FD2C9AL, 0xF053531AL, 0xF9C1C413L, 0xF053531AL, 0x89FD2C9AL, 0xD81C2FFEL, (-5L), 0xF053531AL, 0x3FA7AFCEL, 0xF053531AL}}, {{0x89FD2C9AL, 0xF053531AL, 0xF9C1C413L, 0xF053531AL, 0x89FD2C9AL, 0xD81C2FFEL, (-5L), 0xF053531AL, 0x3FA7AFCEL, 0xF053531AL}}, {{0x89FD2C9AL, 0xF053531AL, 0xF9C1C413L, 0xF053531AL, 0x89FD2C9AL, 0xD81C2FFEL, (-5L), 0xF053531AL, 0x3FA7AFCEL, 0xF053531AL}}};
    int *l_730 = &g_318[1][6][0];
    int *l_731[3];
    short l_732 = 0xFEEEL;
    char l_733 = 1L;
    unsigned l_734 = 4294967295UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_731[i] = &l_729[1][0][3];
    for (g_89 = (-26); (g_89 > 17); g_89 = safe_add_func_int32_t_s_s(g_89, 5))
    {
        unsigned short *l_719 = &g_159;
        int l_722 = 0L;
        unsigned *l_723 = &g_269;
        unsigned l_726 = 0x338FD16FL;
        union U0 l_728[1] = {{4294967293UL}};
        int i;
        g_318[2][1][0] &= func_17(l_718, func_34((l_718.f3 > (((-9L) == func_34(p_15, l_719, (safe_rshift_func_uint8_t_u_s(p_15, (((*g_26) |= l_722) || ((((*l_723) = 4294967286UL) , &g_130) != (void*)0)))), l_718.f2, g_724)) == l_718.f0)), l_725, l_726, l_722, l_727), p_15, (*g_149), l_728[0]);
    }
    l_734++;
    return p_14;
}







static int func_17(union U0 p_18, int p_19, unsigned char p_20, unsigned char p_21, union U0 p_22)
{
    int *l_714 = &g_46[3][1][1];
    int **l_713 = &l_714;
    (*l_713) = ((*g_129) = &p_19);
    (*g_129) = (*g_129);
    return g_576.f0;
}







static const unsigned short func_23(char * p_24, unsigned short p_25)
{
    unsigned l_555 = 0x0712B0E8L;
    int l_558 = 0x2EFA92DEL;
    int l_559 = 1L;
    int l_560 = 0xF581BA05L;
    char *l_564 = &g_354;
    unsigned char l_569[5];
    char l_590 = 3L;
    int l_592 = 7L;
    int *l_601 = &l_559;
    unsigned l_640 = 4294967295UL;
    short l_690 = (-1L);
    const int *l_705 = &l_560;
    int i;
    for (i = 0; i < 5; i++)
        l_569[i] = 2UL;
    for (g_29 = 17; (g_29 < 57); g_29++)
    {
        unsigned short *l_40 = &g_29;
        int l_41 = (-2L);
        const int *l_547 = &g_318[6][1][0];
        const int **l_546[9] = {&l_547, &l_547, &l_547, &l_547, &l_547, &l_547, &l_547, &l_547, &l_547};
        const int ***l_545[3];
        int l_637 = 1L;
        int l_639 = (-2L);
        char ** const l_650[10] = {&g_26, &g_26, &g_26, &g_26, &g_26, &g_26, &g_26, &g_26, &g_26, &g_26};
        int l_700 = 0xF9F1A183L;
        int l_701 = 0xECFB3DEFL;
        unsigned l_702 = 1UL;
        int i;
        for (i = 0; i < 3; i++)
            l_545[i] = &l_546[4];
        if ((func_34(g_29, l_40, g_29, l_41, func_42(&g_27)) , ((*g_130) = (&g_129 == ((0xEB273EFBL && p_25) , l_545[2])))))
        {
            int l_553 = 0x2F0E05AEL;
            int l_554 = 0xC937C166L;
            unsigned l_561[9][5][5] = {{{1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}}, {{1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}}, {{1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}}, {{1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}}, {{1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}}, {{1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}}, {{1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}}, {{1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}}, {{1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}, {1UL, 0xA2A5C126L, 0x6A9C5CEAL, 0xDDFBF222L, 1UL}}};
            unsigned short *l_586 = (void*)0;
            unsigned short *l_587 = &g_65.f2;
            unsigned short *l_589 = &g_159;
            unsigned char l_598 = 0x78L;
            int i, j, k;
            for (g_316 = 19; (g_316 < (-16)); g_316--)
            {
                int *l_550 = &g_314;
                int *l_551 = &g_318[6][0][0];
                int *l_552[7];
                char l_570[2];
                int i;
                for (i = 0; i < 7; i++)
                    l_552[i] = &g_301;
                for (i = 0; i < 2; i++)
                    l_570[i] = 1L;
                ++l_555;
                l_561[0][2][4]++;
            }
            (*g_129) = &l_553;
            (**g_129) = 0xE9411C95L;
            if (((-1L) < (~((((**g_441) &= (safe_sub_func_int16_t_s_s(p_25, g_100))) != (((safe_lshift_func_int8_t_s_u((((*l_589) ^= (~func_34((&g_65 != (void*)0), &p_25, (((*p_24) = (((((((((*l_587) = (0UL > (**g_518))) > (**g_518)) , p_25) , 0xF1L) | 1L) ^ l_558) <= 0x0AD223C7L) | g_588)) != (*g_149)), l_553, (*g_441)))) ^ l_590), p_25)) != 255UL) == (**g_518))) | l_554))))
            {
                char l_593[3][6] = {{0L, 1L, 0x46L, 1L, 0L, 1L}, {0L, 1L, 0x46L, 1L, 0L, 1L}, {0L, 1L, 0x46L, 1L, 0L, 1L}};
                int l_595 = 1L;
                int l_596 = (-3L);
                int i, j;
                for (g_354 = 4; (g_354 >= 0); g_354 -= 1)
                {
                    short l_594[7][9][4] = {{{(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}}, {{(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}}, {{(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}}, {{(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}}, {{(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}}, {{(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}}, {{(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}, {(-9L), (-1L), 0xB97AL, 0L}}};
                    int l_597 = 0x2A204AFEL;
                    int i, j, k;
                    for (g_167 = 0; (g_167 <= 1); g_167 += 1)
                    {
                        int *l_591[6][10][4] = {{{&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}}, {{&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}}, {{&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}}, {{&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}}, {{&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}}, {{&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}, {&g_49, &g_301, &g_314, &g_46[g_354][(g_167 + 2)][g_167]}}};
                        int i, j, k;
                        l_598--;
                        return g_46[g_354][(g_167 + 1)][g_167];
                    }
                    for (l_559 = 1; (l_559 >= 0); l_559 -= 1)
                    {
                        int i, j, k;
                        (**g_129) = 3L;
                        if (g_46[(g_354 + 1)][(g_354 + 1)][l_559])
                            break;
                    }
                }
                if (l_593[0][4])
                    continue;
                if ((*l_547))
                    break;
            }
            else
            {
                (*g_130) &= ((g_82 , p_24) == &g_89);
                return l_561[1][0][3];
            }
        }
        else
        {
            unsigned char l_602[1];
            char * const **l_608 = (void*)0;
            char * const ***l_607 = &l_608;
            int l_612 = 0xC8B845BCL;
            int l_615 = 0xDAFA15E5L;
            unsigned char l_616 = 0xB7L;
            int l_626 = 0xF84383AAL;
            int l_638 = 0xF327C47EL;
            unsigned short *l_653 = &g_65.f2;
            char *l_691 = &g_315;
            int i;
            for (i = 0; i < 1; i++)
                l_602[i] = 0x15L;
            l_601 = (*g_129);
            for (g_98 = 0; (g_98 <= 1); g_98 += 1)
            {
                unsigned l_627[4][2];
                int l_636[9] = {9L, 9L, 0x9735EACBL, 9L, 9L, 0x9735EACBL, 9L, 9L, 0x9735EACBL};
                char *l_652[6];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_627[i][j] = 4294967295UL;
                }
                for (i = 0; i < 6; i++)
                    l_652[i] = (void*)0;
            }
            for (g_316 = 0; (g_316 <= 1); g_316 += 1)
            {
                unsigned short l_665 = 65534UL;
                l_665--;
                for (g_269 = 3; (g_269 <= 8); g_269 += 1)
                {
                    unsigned short *l_670[5] = {&g_159, &g_29, &g_159, &g_29, &g_159};
                    int i, j, k;
                    for (l_616 = 3; (l_616 <= 8); l_616 += 1)
                    {
                        int i, j, k;
                        (*g_129) = &g_318[g_269][(g_316 + 3)][g_316];
                        (*g_129) = &g_318[(g_316 + 6)][(g_316 + 2)][g_316];
                    }
                    (*l_601) = ((safe_lshift_func_int16_t_s_s(g_318[g_269][(g_316 + 5)][g_316], 3)) , func_34(g_318[g_269][(g_316 + 2)][g_316], l_670[4], g_318[(g_316 + 6)][(g_316 + 4)][g_316], p_25, p_24));
                }
                for (l_638 = 1; (l_638 >= 0); l_638 -= 1)
                {
                    int i, j, k;
                    (*g_129) = &g_318[(l_638 + 7)][(l_638 + 5)][l_638];
                }
                for (g_354 = 1; (g_354 >= 0); g_354 -= 1)
                {
                    int *l_693 = &g_588;
                    int i, j, k;
                    (*l_693) |= (safe_unary_minus_func_uint32_t_u((safe_mod_func_uint16_t_u_u(func_34((safe_add_func_int8_t_s_s(0xAAL, ((safe_add_func_uint8_t_u_u((!(((safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((g_684[2][1][2] == (void*)0), (l_639 = (((*g_149) = (safe_add_func_uint32_t_u_u((g_318[g_316][g_354][g_316] & ((safe_sub_func_uint16_t_u_u(((*l_653) = (p_24 == (func_52(&l_590, (func_34(l_690, &g_159, (***g_517), l_616, l_691) , p_25), g_354) , p_24))), p_25)) && g_318[g_316][g_354][g_316])), 0x9E5E2DC9L))) | 254UL)))), g_29)), p_25)) , l_615) && (**g_518))), g_576.f3)) ^ (-8L)))), g_692[6], (**g_518), l_665, p_24), p_25))));
                    if (p_25)
                        break;
                }
                for (l_560 = 7; (l_560 >= 0); l_560 -= 1)
                {
                    int i, j, k;
                    return g_318[(g_316 + 7)][(g_316 + 5)][g_316];
                }
            }
        }
        if ((*l_601))
        {
            int *l_694 = (void*)0;
            int *l_695 = (void*)0;
            int *l_696 = &g_49;
            int *l_697 = &g_588;
            int *l_698[5] = {&g_318[6][1][0], &l_637, &g_318[6][1][0], &l_637, &g_318[6][1][0]};
            char l_699 = 0xEDL;
            int i;
            --l_702;
        }
        else
        {
            for (g_269 = 0; g_269 < 9; g_269 += 1)
            {
                l_546[g_269] = &l_705;
            }
            if ((**g_129))
                break;
        }
        (**g_129) = 0xE94B2DF5L;
    }
    return p_25;
}







static unsigned char func_34(int p_35, unsigned short * p_36, short p_37, unsigned short p_38, char * p_39)
{
    int *l_544 = &g_301;
    (*g_129) = (g_301 , l_544);
    return (*l_544);
}







static char * func_42(char * p_43)
{
    unsigned short *l_62 = &g_29;
    const int l_308 = 0xF460535FL;
    int l_343 = 0x16A934ACL;
    int l_369[8] = {0L, 0L, 0x61BDAC14L, 0L, 0L, 0x61BDAC14L, 0L, 0L};
    int *l_388 = (void*)0;
    char *l_415 = &g_275;
    unsigned *l_426 = &g_269;
    unsigned **l_425 = &l_426;
    char ***l_438 = (void*)0;
    char **** const l_437 = &l_438;
    unsigned l_449 = 0xE9E56D89L;
    int i;
    for (g_27 = 0; (g_27 == (-5)); g_27--)
    {
        short l_64 = 0xC518L;
        int l_339 = 0xFB5B3B9CL;
        int l_340 = 0x6A2A6BD1L;
        int l_341 = 7L;
        int l_342[3][9] = {{(-1L), (-1L), (-2L), 0x77DF0D53L, 0x7E4C8D6FL, 0x56C4C738L, 0x7E4C8D6FL, 0x77DF0D53L, (-2L)}, {(-1L), (-1L), (-2L), 0x77DF0D53L, 0x7E4C8D6FL, 0x56C4C738L, 0x7E4C8D6FL, 0x77DF0D53L, (-2L)}, {(-1L), (-1L), (-2L), 0x77DF0D53L, 0x7E4C8D6FL, 0x56C4C738L, 0x7E4C8D6FL, 0x77DF0D53L, (-2L)}};
        char * const l_356 = (void*)0;
        char * const *l_355 = &l_356;
        char **l_392 = &g_26;
        union U0 l_396 = {4294967293UL};
        const unsigned l_406 = 4294967295UL;
        char l_487[9];
        int l_493[7];
        unsigned l_543 = 7UL;
        int i, j;
        for (i = 0; i < 9; i++)
            l_487[i] = 8L;
        for (i = 0; i < 7; i++)
            l_493[i] = 1L;
    }
    return (**g_440);
}







static int func_52(char * p_53, const int p_54, unsigned p_55)
{
    const int *l_309 = &g_301;
    int *l_311 = &g_301;
    int *l_312 = &g_301;
    int *l_313[3][10] = {{&g_46[3][1][1], (void*)0, &g_46[4][5][1], &g_301, &g_46[4][5][1], (void*)0, &g_46[3][1][1], (void*)0, &g_301, &g_46[3][1][1]}, {&g_46[3][1][1], (void*)0, &g_46[4][5][1], &g_301, &g_46[4][5][1], (void*)0, &g_46[3][1][1], (void*)0, &g_301, &g_46[3][1][1]}, {&g_46[3][1][1], (void*)0, &g_46[4][5][1], &g_301, &g_46[4][5][1], (void*)0, &g_46[3][1][1], (void*)0, &g_301, &g_46[3][1][1]}};
    short l_317 = 0x957DL;
    short l_319 = 1L;
    unsigned short l_320 = 0x2256L;
    int i, j;
    for (g_82 = 0; (g_82 <= 0); g_82 += 1)
    {
        for (g_269 = 0; (g_269 <= 0); g_269 += 1)
        {
            const int **l_310 = &l_309;
            (*l_310) = l_309;
        }
        if (p_55)
            break;
    }
    l_320++;
    return (*l_312);
}







static char * func_56(unsigned short * p_57, unsigned short p_58, unsigned short * p_59, unsigned short p_60, union U0 p_61)
{
    char l_66 = 2L;
    unsigned *l_77 = &g_78;
    unsigned *l_81 = &g_82;
    unsigned *l_83 = &g_84[2][0][0];
    int **l_94 = (void*)0;
    int l_102[7][8][4] = {{{(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}}, {{(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}}, {{(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}}, {{(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}}, {{(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}}, {{(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}}, {{(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}, {(-4L), 0x605A4DEAL, (-1L), 0xA3753CE4L}}};
    int l_116 = 0x9D5435D5L;
    int l_127 = 3L;
    unsigned short l_163[5][7][7] = {{{0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}}, {{0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}}, {{0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}}, {{0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}}, {{0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}, {0xE9B2L, 0xF6B6L, 0xE9B2L, 0x950BL, 1UL, 65530UL, 0xDB31L}}};
    unsigned l_214 = 0x36340522L;
    char l_233 = 1L;
    unsigned l_235[6][5][8] = {{{0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}, {0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}, {0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}, {0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}, {0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}}, {{0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}, {0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}, {0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}, {0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}, {0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}}, {{0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}, {0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}, {0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}, {0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}, {0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}}, {{0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}, {0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}, {0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}, {0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}, {0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}}, {{0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}, {0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}, {0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}, {0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}, {0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}}, {{0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}, {0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}, {0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}, {0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}, {0x0FE1E5F7L, 0x1561CB25L, 4294967290UL, 4294967295UL, 4294967292UL, 0x2F2A67BAL, 1UL, 0x1516D38BL}}};
    int l_245 = (-5L);
    int * const **l_297 = (void*)0;
    int * const l_300 = &g_301;
    int * const *l_299[5] = {&l_300, &l_300, &l_300, &l_300, &l_300};
    int * const **l_298 = &l_299[3];
    short *l_302 = &g_65.f1;
    short *l_303[6][3][10] = {{{&g_304, (void*)0, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, (void*)0}, {&g_304, (void*)0, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, (void*)0}, {&g_304, (void*)0, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, (void*)0}}, {{&g_304, (void*)0, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, (void*)0}, {&g_304, (void*)0, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, (void*)0}, {&g_304, (void*)0, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, (void*)0}}, {{&g_304, (void*)0, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, (void*)0}, {&g_304, (void*)0, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, (void*)0}, {&g_304, (void*)0, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, (void*)0}}, {{&g_304, (void*)0, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, (void*)0}, {&g_304, (void*)0, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, (void*)0}, {&g_304, (void*)0, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, (void*)0}}, {{&g_304, (void*)0, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, (void*)0}, {&g_304, (void*)0, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, (void*)0}, {&g_304, (void*)0, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, (void*)0}}, {{&g_304, (void*)0, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, (void*)0}, {&g_304, (void*)0, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, (void*)0}, {&g_304, (void*)0, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, &g_304, (void*)0}}};
    char *l_305 = &l_66;
    int i, j, k;
    if ((0x3F0DL || ((g_46[5][3][1] ^ (g_65 , (l_66 , (safe_lshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((g_65.f2 > p_61.f2) <= (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((((*l_83) = ((safe_lshift_func_int16_t_s_s(g_65.f1, 6)) , ((*l_81) = (l_66 , (--(*l_77)))))) , (*g_26)), (*g_26))), 3))), p_61.f1)), 4))))) > l_66)))
    {
        return &g_27;
    }
    else
    {
        int *l_86 = &g_49;
        int **l_85 = &l_86;
        unsigned char *l_87 = (void*)0;
        unsigned char *l_88 = &g_89;
        short l_97 = 2L;
        unsigned char *l_99 = &g_100;
        char *l_101 = &l_66;
        int l_162[3];
        int i;
        for (i = 0; i < 3; i++)
            l_162[i] = 0x46BC4935L;
        (*l_85) = l_77;
        if ((((++(*l_88)) | g_65.f2) == (safe_mod_func_int8_t_s_s(((((**l_85) = 0x62B766AAL) , l_94) == ((safe_mod_func_uint32_t_u_u((((g_65.f0 | (g_84[2][0][0] , (((l_97 < ((*l_101) = ((g_98 & ((*l_99) = p_61.f0)) , 0xFDL))) < g_27) >= 0xDEL))) < l_102[1][2][2]) == p_61.f0), 1L)) , &l_86)), (*g_26)))))
        {
            short *l_103 = &g_65.f1;
            unsigned l_123[5][5] = {{0x19B6E0F7L, 0x9AE47ACEL, 0x44B5E4FDL, 0x9AE47ACEL, 0x19B6E0F7L}, {0x19B6E0F7L, 0x9AE47ACEL, 0x44B5E4FDL, 0x9AE47ACEL, 0x19B6E0F7L}, {0x19B6E0F7L, 0x9AE47ACEL, 0x44B5E4FDL, 0x9AE47ACEL, 0x19B6E0F7L}, {0x19B6E0F7L, 0x9AE47ACEL, 0x44B5E4FDL, 0x9AE47ACEL, 0x19B6E0F7L}, {0x19B6E0F7L, 0x9AE47ACEL, 0x44B5E4FDL, 0x9AE47ACEL, 0x19B6E0F7L}};
            const int l_124[9][2][9] = {{{0L, 5L, 0x272C110BL, (-4L), 0xA25E917AL, 0xE3ED1035L, (-6L), 0xE3ED1035L, 0xA25E917AL}, {0L, 5L, 0x272C110BL, (-4L), 0xA25E917AL, 0xE3ED1035L, (-6L), 0xE3ED1035L, 0xA25E917AL}}, {{0L, 5L, 0x272C110BL, (-4L), 0xA25E917AL, 0xE3ED1035L, (-6L), 0xE3ED1035L, 0xA25E917AL}, {0L, 5L, 0x272C110BL, (-4L), 0xA25E917AL, 0xE3ED1035L, (-6L), 0xE3ED1035L, 0xA25E917AL}}, {{0L, 5L, 0x272C110BL, (-4L), 0xA25E917AL, 0xE3ED1035L, (-6L), 0xE3ED1035L, 0xA25E917AL}, {0L, 5L, 0x272C110BL, (-4L), 0xA25E917AL, 0xE3ED1035L, (-6L), 0xE3ED1035L, 0xA25E917AL}}, {{0L, 5L, 0x272C110BL, (-4L), 0xA25E917AL, 0xE3ED1035L, (-6L), 0xE3ED1035L, 0xA25E917AL}, {0L, 5L, 0x272C110BL, (-4L), 0xA25E917AL, 0xE3ED1035L, (-6L), 0xE3ED1035L, 0xA25E917AL}}, {{0L, 5L, 0x272C110BL, (-4L), 0xA25E917AL, 0xE3ED1035L, (-6L), 0xE3ED1035L, 0xA25E917AL}, {0L, 5L, 0x272C110BL, (-4L), 0xA25E917AL, 0xE3ED1035L, (-6L), 0xE3ED1035L, 0xA25E917AL}}, {{0L, 5L, 0x272C110BL, (-4L), 0xA25E917AL, 0xE3ED1035L, (-6L), 0xE3ED1035L, 0xA25E917AL}, {0L, 5L, 0x272C110BL, (-4L), 0xA25E917AL, 0xE3ED1035L, (-6L), 0xE3ED1035L, 0xA25E917AL}}, {{0L, 5L, 0x272C110BL, (-4L), 0xA25E917AL, 0xE3ED1035L, (-6L), 0xE3ED1035L, 0xA25E917AL}, {0L, 5L, 0x272C110BL, (-4L), 0xA25E917AL, 0xE3ED1035L, (-6L), 0xE3ED1035L, 0xA25E917AL}}, {{0L, 5L, 0x272C110BL, (-4L), 0xA25E917AL, 0xE3ED1035L, (-6L), 0xE3ED1035L, 0xA25E917AL}, {0L, 5L, 0x272C110BL, (-4L), 0xA25E917AL, 0xE3ED1035L, (-6L), 0xE3ED1035L, 0xA25E917AL}}, {{0L, 5L, 0x272C110BL, (-4L), 0xA25E917AL, 0xE3ED1035L, (-6L), 0xE3ED1035L, 0xA25E917AL}, {0L, 5L, 0x272C110BL, (-4L), 0xA25E917AL, 0xE3ED1035L, (-6L), 0xE3ED1035L, 0xA25E917AL}}};
            unsigned l_155 = 4294967295UL;
            int l_156 = 0x50588320L;
            int i, j, k;
            (**l_85) &= ((l_83 != l_81) == (g_49 , ((*l_103) &= p_60)));
            for (g_100 = 0; (g_100 <= 0); g_100 += 1)
            {
                int *l_125[6][6][7] = {{{&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}}, {{&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}}, {{&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}}, {{&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}}, {{&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}}, {{&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}, {&l_102[6][1][0], (void*)0, &l_116, (void*)0, &l_102[6][1][0], &l_102[1][2][2], &l_102[6][1][0]}}};
                union U0 l_152 = {0UL};
                int i, j, k;
                l_127 &= (safe_rshift_func_int8_t_s_u((p_58 , (safe_add_func_uint32_t_u_u(((*l_81) = ((safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((g_126[0] ^= ((((*l_88) |= g_49) | ((safe_lshift_func_int16_t_s_u(((((*l_83) = ((((safe_add_func_uint16_t_u_u(g_84[2][0][0], g_98)) <= ((l_116 != ((void*)0 != &g_27)) , (0x2EL == (l_123[4][3] = (safe_add_func_int32_t_s_s(((**l_85) = (safe_rshift_func_uint16_t_u_s(((safe_div_func_int16_t_s_s((((*l_86) == p_61.f1) , g_84[2][0][0]), p_61.f3)) && (*l_86)), 0))), 1L)))))) ^ l_124[5][0][1]) , g_78)) & g_46[3][1][1]) & l_124[5][0][1]), 0)) , (*g_26))) || p_61.f3)), g_27)), l_102[4][3][3])) , g_98)), 5UL))), 5));
                for (l_116 = 0; (l_116 <= 3); l_116 += 1)
                {
                    unsigned char *l_148 = &g_100;
                    unsigned short *l_153[4][2][3] = {{{&l_152.f2, (void*)0, &l_152.f2}, {&l_152.f2, (void*)0, &l_152.f2}}, {{&l_152.f2, (void*)0, &l_152.f2}, {&l_152.f2, (void*)0, &l_152.f2}}, {{&l_152.f2, (void*)0, &l_152.f2}, {&l_152.f2, (void*)0, &l_152.f2}}, {{&l_152.f2, (void*)0, &l_152.f2}, {&l_152.f2, (void*)0, &l_152.f2}}};
                    int l_154 = 0xD57F617DL;
                    int i, j, k;
                }
            }
            for (g_100 = (-14); (g_100 < 12); ++g_100)
            {
                int l_171 = 1L;
                if (l_171)
                    break;
            }
        }
        else
        {
            unsigned short l_188 = 0UL;
            int **l_201[9][8] = {{&g_130, &l_86, &g_130, &g_130, (void*)0, &l_86, &g_130, &l_86}, {&g_130, &l_86, &g_130, &g_130, (void*)0, &l_86, &g_130, &l_86}, {&g_130, &l_86, &g_130, &g_130, (void*)0, &l_86, &g_130, &l_86}, {&g_130, &l_86, &g_130, &g_130, (void*)0, &l_86, &g_130, &l_86}, {&g_130, &l_86, &g_130, &g_130, (void*)0, &l_86, &g_130, &l_86}, {&g_130, &l_86, &g_130, &g_130, (void*)0, &l_86, &g_130, &l_86}, {&g_130, &l_86, &g_130, &g_130, (void*)0, &l_86, &g_130, &l_86}, {&g_130, &l_86, &g_130, &g_130, (void*)0, &l_86, &g_130, &l_86}, {&g_130, &l_86, &g_130, &g_130, (void*)0, &l_86, &g_130, &l_86}};
            char l_240 = 0xF7L;
            int i, j;
            for (g_78 = 22; (g_78 < 15); g_78 = safe_sub_func_int8_t_s_s(g_78, 3))
            {
                int l_187[1][5][6];
                int l_234 = (-1L);
                int l_246 = 0x3D419CB7L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 5; j++)
                    {
                        for (k = 0; k < 6; k++)
                            l_187[i][j][k] = 0x2E94AF86L;
                    }
                }
            }
        }
    }
    for (l_214 = 0; (l_214 >= 13); l_214++)
    {
        unsigned l_262 = 0x08624562L;
        char *l_289 = &l_66;
        int l_291[6] = {0L, 6L, 0L, 6L, 0L, 6L};
        int i;
        for (g_82 = 0; (g_82 <= 4); g_82 += 1)
        {
            int l_264[9][4][6] = {{{0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}, {0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}, {0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}, {0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}}, {{0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}, {0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}, {0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}, {0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}}, {{0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}, {0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}, {0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}, {0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}}, {{0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}, {0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}, {0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}, {0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}}, {{0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}, {0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}, {0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}, {0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}}, {{0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}, {0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}, {0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}, {0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}}, {{0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}, {0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}, {0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}, {0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}}, {{0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}, {0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}, {0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}, {0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}}, {{0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}, {0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}, {0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}, {0x7E32B0C3L, (-2L), (-6L), 5L, 3L, 0xAEC93D44L}}};
            int *l_266 = (void*)0;
            int *l_267[2][9] = {{&g_49, &g_46[1][0][1], &l_102[0][3][1], &l_102[0][3][1], &g_46[1][0][1], &g_49, &g_46[1][0][1], &l_102[0][3][1], &l_102[0][3][1]}, {&g_49, &g_46[1][0][1], &l_102[0][3][1], &l_102[0][3][1], &g_46[1][0][1], &g_49, &g_46[1][0][1], &l_102[0][3][1], &l_102[0][3][1]}};
            char *l_290 = &g_27;
            int i, j, k;
            if ((g_65.f2 < (!(safe_add_func_uint32_t_u_u(g_126[0], p_60)))))
            {
                short l_253 = 0x1C3CL;
                int l_263 = 0x71741A30L;
                l_264[6][3][3] &= (((*p_57) , (safe_mod_func_uint8_t_u_u((((l_253 >= ((safe_div_func_uint16_t_u_u((l_263 ^= (((safe_lshift_func_int8_t_s_u(0x7EL, 6)) != (safe_rshift_func_uint16_t_u_s(g_126[0], 11))) < ((g_164 >= l_262) < 0xD995C905L))), g_167)) > (0L ^ p_60))) <= 0x2AL) > p_61.f1), (-1L)))) , p_61.f0);
            }
            else
            {
                char *l_265 = &g_27;
                (*g_129) = &l_264[6][3][3];
                for (g_159 = 0; (g_159 <= 0); g_159 += 1)
                {
                    int i, j, k;
                    if (g_126[g_159])
                        break;
                    if (l_264[(g_82 + 4)][(g_159 + 2)][g_82])
                        break;
                }
                return l_265;
            }
            g_269++;
            if (p_61.f3)
            {
                unsigned short l_272 = 0x2C7CL;
                (*g_129) = (*g_129);
                l_267[0][6] = (*g_129);
                for (g_215 = 0; (g_215 <= 1); g_215 += 1)
                {
                    int i, j;
                    l_267[g_215][(g_215 + 6)] = l_267[g_215][(g_82 + 4)];
                }
                --l_272;
            }
            else
            {
                unsigned l_282 = 0x3B8E7465L;
                int l_287 = 0x1B832FB8L;
                (*g_129) = (*g_129);
                l_287 = ((g_275 = p_61.f1) , ((*g_26) > ((*p_57) == (((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_u((((~2UL) && l_282) >= g_78), (safe_div_func_uint8_t_u_u((g_164 | 0xE5BBL), ((+(safe_lshift_func_uint8_t_u_s((p_61.f3 , 7UL), (*g_26)))) | g_167))))) , 1UL), (*g_26))) , 0x5C08L) != g_159))));
            }
            for (l_233 = 1; (l_233 <= 4); l_233 += 1)
            {
                char *l_288 = &l_66;
                return l_290;
            }
        }
        if (p_61.f2)
        {
            int *l_292 = &l_102[5][4][0];
            l_116 ^= 1L;
            l_291[0] = p_61.f3;
            (*l_292) |= (l_291[1] != (*g_149));
        }
        else
        {
            for (g_78 = (-17); (g_78 < 27); g_78++)
            {
                (*g_129) = (*g_129);
                return &g_275;
            }
        }
    }
    (*l_300) = (safe_div_func_uint16_t_u_u((((*l_298) = l_94) == &g_130), (p_61.f1 = ((*l_302) |= ((*l_300) , g_27)))));
    return &g_27;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_46[i][j][k], "g_46[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_65.f1, "g_65.f1", print_hash_value);
    transparent_crc(g_65.f2, "g_65.f2", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_84[i][j][k], "g_84[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_126[i], "g_126[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_314, "g_314", print_hash_value);
    transparent_crc(g_315, "g_315", print_hash_value);
    transparent_crc(g_316, "g_316", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_318[i][j][k], "g_318[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_354, "g_354", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_382[i], "g_382[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_491, "g_491", print_hash_value);
    transparent_crc(g_509, "g_509", print_hash_value);
    transparent_crc(g_576.f0, "g_576.f0", print_hash_value);
    transparent_crc(g_576.f1, "g_576.f1", print_hash_value);
    transparent_crc(g_576.f2, "g_576.f2", print_hash_value);
    transparent_crc(g_576.f3, "g_576.f3", print_hash_value);
    transparent_crc(g_588, "g_588", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_633[i], "g_633[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_709, "g_709", print_hash_value);
    transparent_crc(g_830.f0, "g_830.f0", print_hash_value);
    transparent_crc(g_830.f1, "g_830.f1", print_hash_value);
    transparent_crc(g_830.f2, "g_830.f2", print_hash_value);
    transparent_crc(g_830.f3, "g_830.f3", print_hash_value);
    transparent_crc(g_933, "g_933", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
