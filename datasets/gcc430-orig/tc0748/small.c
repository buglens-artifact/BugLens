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
   char f1;
   volatile unsigned f2;
};


static int g_3[8][4] = {{0xB29949DFL, (-1L), (-1L), 0x4D1878ABL}, {0xB29949DFL, (-1L), (-1L), 0x4D1878ABL}, {0xB29949DFL, (-1L), (-1L), 0x4D1878ABL}, {0xB29949DFL, (-1L), (-1L), 0x4D1878ABL}, {0xB29949DFL, (-1L), (-1L), 0x4D1878ABL}, {0xB29949DFL, (-1L), (-1L), 0x4D1878ABL}, {0xB29949DFL, (-1L), (-1L), 0x4D1878ABL}, {0xB29949DFL, (-1L), (-1L), 0x4D1878ABL}};
static int * volatile g_2 = &g_3[4][1];
static int g_31[5][8][2] = {{{1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}}, {{1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}}, {{1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}}, {{1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}}, {{1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}, {1L, 0xD574417FL}}};
static char g_47 = 1L;
static const int *g_67 = &g_31[2][1][1];
static const int ** volatile g_66[3] = {&g_67, &g_67, &g_67};
static const int ** volatile g_68[1][7] = {{(void*)0, (void*)0, &g_67, (void*)0, (void*)0, &g_67, (void*)0}};
static int *g_71 = &g_31[3][2][0];
static int g_81 = (-1L);
static int g_83 = 0xC72380CEL;
static int ** volatile g_86[8] = {&g_71, &g_71, &g_71, &g_71, &g_71, &g_71, &g_71, &g_71};
static struct S0 g_90 = {-9L,0x75L,4294967292UL};
static struct S0 *g_91[1] = {&g_90};
static unsigned g_105 = 1UL;
static unsigned short g_117 = 1UL;
static unsigned short *g_116 = &g_117;
static unsigned short * volatile * const volatile g_115 = &g_116;
static unsigned short * volatile * volatile g_119 = (void*)0;
static unsigned short * volatile * volatile * volatile g_118[3][1] = {{&g_119}, {&g_119}, {&g_119}};
static unsigned short * volatile * volatile * volatile g_120 = (void*)0;
static struct S0 g_122[9] = {{0x78CEL,0x03L,0x13856DD1L}, {0x77E5L,0xFFL,0UL}, {0x78CEL,0x03L,0x13856DD1L}, {0x77E5L,0xFFL,0UL}, {0x78CEL,0x03L,0x13856DD1L}, {0x77E5L,0xFFL,0UL}, {0x78CEL,0x03L,0x13856DD1L}, {0x77E5L,0xFFL,0UL}, {0x78CEL,0x03L,0x13856DD1L}};
static struct S0 ** volatile g_126 = &g_91[0];
static volatile struct S0 g_127 = {1L,0L,0x57869F8AL};
static int ** volatile g_146 = &g_71;
static struct S0 ** volatile g_148 = &g_91[0];
static struct S0 g_149 = {-1L,-8L,0x91EB41D5L};
static int ** volatile g_155 = (void*)0;
static int ** const volatile g_156 = &g_71;
static unsigned char g_162 = 2UL;
static unsigned char *g_161 = &g_162;
static volatile struct S0 g_188 = {0x8935L,-1L,0xBF4135F3L};
static volatile struct S0 * volatile g_189 = &g_188;
static volatile struct S0 g_190 = {0x614CL,0x0DL,4294967295UL};
static volatile struct S0 * volatile g_191 = &g_190;
static int *g_194 = &g_81;
static int ** volatile g_205 = (void*)0;
static int ** volatile g_206 = &g_194;
static volatile struct S0 g_213 = {0x8C59L,0L,0x07D8DE42L};
static volatile struct S0 g_214 = {0xFC32L,0x82L,0x13317710L};
static volatile struct S0 g_215 = {0xC0F7L,0L,4294967287UL};
static int ** volatile g_220 = &g_71;
static struct S0 g_221 = {0L,0xE3L,4294967293UL};
static short g_229 = 0L;
static int ** volatile g_238 = &g_194;
static char *g_255 = &g_221.f1;
static char **g_254 = &g_255;
static char ** volatile * volatile g_253 = &g_254;
static struct S0 g_259 = {-3L,0x57L,0x210C7448L};
static int ** volatile g_267[1][5] = {{&g_194, (void*)0, &g_194, (void*)0, &g_194}};
static int ** const volatile g_268 = &g_194;
static unsigned g_287 = 0xC40B794AL;
static volatile unsigned *g_312 = &g_122[2].f2;
static volatile unsigned **g_311[7][1] = {{&g_312}, {&g_312}, {&g_312}, {&g_312}, {&g_312}, {&g_312}, {&g_312}};
static unsigned g_319[1] = {0x12B10208L};
static int * volatile g_344 = &g_83;
static unsigned short **g_358 = &g_116;
static unsigned short *** volatile g_357 = &g_358;
static int * volatile g_393[10] = {&g_83, &g_83, &g_83, &g_83, &g_83, &g_83, &g_83, &g_83, &g_83, &g_83};
static int * volatile g_394 = &g_83;
static unsigned g_397 = 0x69B2F04DL;
static int ** volatile g_411 = &g_194;
static struct S0 g_434 = {1L,0x3FL,4294967295UL};
static int ** volatile g_435 = &g_71;
static int ** volatile g_436 = &g_71;
static unsigned short g_461 = 0xBA62L;
static const int g_476 = 0xC5D4467DL;
static unsigned **g_497 = (void*)0;
static unsigned ***g_496 = &g_497;
static int ** volatile g_509 = (void*)0;
static int ** volatile g_510 = &g_194;
static int * volatile g_519[3][3] = {{&g_83, &g_83, &g_83}, {&g_83, &g_83, &g_83}, {&g_83, &g_83, &g_83}};
static int ** volatile g_522 = &g_194;
static int ** const volatile g_525 = &g_194;
static int ***g_528 = (void*)0;
static volatile struct S0 g_538 = {0x4AA9L,0x7AL,0UL};
static volatile struct S0 * const volatile g_539 = &g_190;
static volatile struct S0 g_550[10] = {{0x332BL,0L,0xA5DC2651L}, {-5L,-1L,4294967295UL}, {1L,0x84L,0UL}, {1L,0x84L,0UL}, {-5L,-1L,4294967295UL}, {0x332BL,0L,0xA5DC2651L}, {-5L,-1L,4294967295UL}, {1L,0x84L,0UL}, {1L,0x84L,0UL}, {-5L,-1L,4294967295UL}};
static unsigned g_557 = 4294967288UL;
static const unsigned short g_592 = 4UL;
static const unsigned short *g_591[6] = {&g_592, &g_592, &g_592, &g_592, &g_592, &g_592};
static const unsigned short **g_590 = &g_591[1];
static const unsigned short ***g_589 = &g_590;
static int ****g_601 = &g_528;
static volatile struct S0 g_629[7] = {{0xD0CEL,0x7EL,4294967289UL}, {0x20BEL,-9L,0x0C10189CL}, {0xD0CEL,0x7EL,4294967289UL}, {0x20BEL,-9L,0x0C10189CL}, {0xD0CEL,0x7EL,4294967289UL}, {0x20BEL,-9L,0x0C10189CL}, {0xD0CEL,0x7EL,4294967289UL}};
static volatile struct S0 * volatile g_630[9] = {&g_190, (void*)0, &g_190, (void*)0, &g_190, (void*)0, &g_190, (void*)0, &g_190};
static char * const ** volatile g_635 = (void*)0;
static char * const *g_637 = (void*)0;
static char * const ** volatile g_636 = &g_637;
static volatile struct S0 *g_656 = &g_538;
static volatile struct S0 ** volatile g_655 = &g_656;
static int g_670[1][7] = {{0xF291D3D8L, 0xF291D3D8L, 0xF291D3D8L, 0xF291D3D8L, 0xF291D3D8L, 0xF291D3D8L, 0xF291D3D8L}};
static unsigned *g_682 = &g_319[0];
static int **g_687 = (void*)0;
static struct S0 g_698 = {5L,1L,0x884691C8L};
static const unsigned short g_716[10][8] = {{0UL, 0xACD4L, 65531UL, 65535UL, 0xF8FFL, 1UL, 0xE04BL, 65535UL}, {0UL, 0xACD4L, 65531UL, 65535UL, 0xF8FFL, 1UL, 0xE04BL, 65535UL}, {0UL, 0xACD4L, 65531UL, 65535UL, 0xF8FFL, 1UL, 0xE04BL, 65535UL}, {0UL, 0xACD4L, 65531UL, 65535UL, 0xF8FFL, 1UL, 0xE04BL, 65535UL}, {0UL, 0xACD4L, 65531UL, 65535UL, 0xF8FFL, 1UL, 0xE04BL, 65535UL}, {0UL, 0xACD4L, 65531UL, 65535UL, 0xF8FFL, 1UL, 0xE04BL, 65535UL}, {0UL, 0xACD4L, 65531UL, 65535UL, 0xF8FFL, 1UL, 0xE04BL, 65535UL}, {0UL, 0xACD4L, 65531UL, 65535UL, 0xF8FFL, 1UL, 0xE04BL, 65535UL}, {0UL, 0xACD4L, 65531UL, 65535UL, 0xF8FFL, 1UL, 0xE04BL, 65535UL}, {0UL, 0xACD4L, 65531UL, 65535UL, 0xF8FFL, 1UL, 0xE04BL, 65535UL}};
static char ***g_731 = &g_254;
static int * volatile g_745 = &g_81;
static int ** volatile g_751 = &g_194;
static volatile struct S0 g_757[3] = {{0x6956L,1L,4294967295UL}, {0x6956L,1L,4294967295UL}, {0x6956L,1L,4294967295UL}};
static const short g_759 = 0x018FL;
static volatile struct S0 g_770[5][5][10] = {{{{1L,-1L,7UL}, {0L,2L,1UL}, {-4L,0x30L,0xFC44FBA4L}, {0x7CFAL,0L,0x884DF243L}, {0L,2L,1UL}, {0x43F7L,0x2AL,4294967290UL}, {0L,0x5AL,0x8850D773L}, {-8L,0L,4294967289UL}, {-1L,0xCCL,0x2C6E7F7CL}, {0L,-1L,0xACBEBD03L}}, {{1L,-1L,7UL}, {0L,2L,1UL}, {-4L,0x30L,0xFC44FBA4L}, {0x7CFAL,0L,0x884DF243L}, {0L,2L,1UL}, {0x43F7L,0x2AL,4294967290UL}, {0L,0x5AL,0x8850D773L}, {-8L,0L,4294967289UL}, {-1L,0xCCL,0x2C6E7F7CL}, {0L,-1L,0xACBEBD03L}}, {{1L,-1L,7UL}, {0L,2L,1UL}, {-4L,0x30L,0xFC44FBA4L}, {0x7CFAL,0L,0x884DF243L}, {0L,2L,1UL}, {0x43F7L,0x2AL,4294967290UL}, {0L,0x5AL,0x8850D773L}, {-8L,0L,4294967289UL}, {-1L,0xCCL,0x2C6E7F7CL}, {0L,-1L,0xACBEBD03L}}, {{1L,-1L,7UL}, {0L,2L,1UL}, {-4L,0x30L,0xFC44FBA4L}, {0x7CFAL,0L,0x884DF243L}, {0L,2L,1UL}, {0x43F7L,0x2AL,4294967290UL}, {0L,0x5AL,0x8850D773L}, {-8L,0L,4294967289UL}, {-1L,0xCCL,0x2C6E7F7CL}, {0L,-1L,0xACBEBD03L}}, {{1L,-1L,7UL}, {0L,2L,1UL}, {-4L,0x30L,0xFC44FBA4L}, {0x7CFAL,0L,0x884DF243L}, {0L,2L,1UL}, {0x43F7L,0x2AL,4294967290UL}, {0L,0x5AL,0x8850D773L}, {-8L,0L,4294967289UL}, {-1L,0xCCL,0x2C6E7F7CL}, {0L,-1L,0xACBEBD03L}}}, {{{1L,-1L,7UL}, {0L,2L,1UL}, {-4L,0x30L,0xFC44FBA4L}, {0x7CFAL,0L,0x884DF243L}, {0L,2L,1UL}, {0x43F7L,0x2AL,4294967290UL}, {0L,0x5AL,0x8850D773L}, {-8L,0L,4294967289UL}, {-1L,0xCCL,0x2C6E7F7CL}, {0L,-1L,0xACBEBD03L}}, {{1L,-1L,7UL}, {0L,2L,1UL}, {-4L,0x30L,0xFC44FBA4L}, {0x7CFAL,0L,0x884DF243L}, {0L,2L,1UL}, {0x43F7L,0x2AL,4294967290UL}, {0L,0x5AL,0x8850D773L}, {-8L,0L,4294967289UL}, {-1L,0xCCL,0x2C6E7F7CL}, {0L,-1L,0xACBEBD03L}}, {{1L,-1L,7UL}, {0L,2L,1UL}, {-4L,0x30L,0xFC44FBA4L}, {0x7CFAL,0L,0x884DF243L}, {0L,2L,1UL}, {0x43F7L,0x2AL,4294967290UL}, {0L,0x5AL,0x8850D773L}, {-8L,0L,4294967289UL}, {-1L,0xCCL,0x2C6E7F7CL}, {0L,-1L,0xACBEBD03L}}, {{1L,-1L,7UL}, {0L,2L,1UL}, {-4L,0x30L,0xFC44FBA4L}, {0x7CFAL,0L,0x884DF243L}, {0L,2L,1UL}, {0x43F7L,0x2AL,4294967290UL}, {0L,0x5AL,0x8850D773L}, {-8L,0L,4294967289UL}, {-1L,0xCCL,0x2C6E7F7CL}, {0L,-1L,0xACBEBD03L}}, {{1L,-1L,7UL}, {0L,2L,1UL}, {-4L,0x30L,0xFC44FBA4L}, {0x7CFAL,0L,0x884DF243L}, {0L,2L,1UL}, {0x43F7L,0x2AL,4294967290UL}, {0L,0x5AL,0x8850D773L}, {-8L,0L,4294967289UL}, {-1L,0xCCL,0x2C6E7F7CL}, {0L,-1L,0xACBEBD03L}}}, {{{1L,-1L,7UL}, {0L,2L,1UL}, {-4L,0x30L,0xFC44FBA4L}, {0x7CFAL,0L,0x884DF243L}, {0L,2L,1UL}, {0x43F7L,0x2AL,4294967290UL}, {0L,0x5AL,0x8850D773L}, {-8L,0L,4294967289UL}, {-1L,0xCCL,0x2C6E7F7CL}, {0L,-1L,0xACBEBD03L}}, {{1L,-1L,7UL}, {0L,2L,1UL}, {-4L,0x30L,0xFC44FBA4L}, {0x7CFAL,0L,0x884DF243L}, {0L,2L,1UL}, {0x43F7L,0x2AL,4294967290UL}, {0L,0x5AL,0x8850D773L}, {-8L,0L,4294967289UL}, {-1L,0xCCL,0x2C6E7F7CL}, {0L,-1L,0xACBEBD03L}}, {{1L,-1L,7UL}, {0L,2L,1UL}, {-4L,0x30L,0xFC44FBA4L}, {0x7CFAL,0L,0x884DF243L}, {0L,2L,1UL}, {0x43F7L,0x2AL,4294967290UL}, {0L,0x5AL,0x8850D773L}, {-8L,0L,4294967289UL}, {-1L,0xCCL,0x2C6E7F7CL}, {0L,-1L,0xACBEBD03L}}, {{1L,-1L,7UL}, {0L,2L,1UL}, {-4L,0x30L,0xFC44FBA4L}, {0x7CFAL,0L,0x884DF243L}, {0L,2L,1UL}, {0x43F7L,0x2AL,4294967290UL}, {0L,0x5AL,0x8850D773L}, {-8L,0L,4294967289UL}, {-1L,0xCCL,0x2C6E7F7CL}, {0L,-1L,0xACBEBD03L}}, {{1L,-1L,7UL}, {0L,2L,1UL}, {-4L,0x30L,0xFC44FBA4L}, {0x7CFAL,0L,0x884DF243L}, {0L,2L,1UL}, {0x43F7L,0x2AL,4294967290UL}, {0L,0x5AL,0x8850D773L}, {-8L,0L,4294967289UL}, {-1L,0xCCL,0x2C6E7F7CL}, {0L,-1L,0xACBEBD03L}}}, {{{1L,-1L,7UL}, {0L,2L,1UL}, {-4L,0x30L,0xFC44FBA4L}, {0x7CFAL,0L,0x884DF243L}, {0L,2L,1UL}, {0x43F7L,0x2AL,4294967290UL}, {0L,0x5AL,0x8850D773L}, {-8L,0L,4294967289UL}, {-1L,0xCCL,0x2C6E7F7CL}, {0L,-1L,0xACBEBD03L}}, {{1L,-1L,7UL}, {0L,2L,1UL}, {-4L,0x30L,0xFC44FBA4L}, {0x7CFAL,0L,0x884DF243L}, {0L,2L,1UL}, {0x43F7L,0x2AL,4294967290UL}, {0L,0x5AL,0x8850D773L}, {-8L,0L,4294967289UL}, {-1L,0xCCL,0x2C6E7F7CL}, {0L,-1L,0xACBEBD03L}}, {{1L,-1L,7UL}, {0L,2L,1UL}, {-4L,0x30L,0xFC44FBA4L}, {0x7CFAL,0L,0x884DF243L}, {0L,2L,1UL}, {0x43F7L,0x2AL,4294967290UL}, {0L,0x5AL,0x8850D773L}, {-8L,0L,4294967289UL}, {-1L,0xCCL,0x2C6E7F7CL}, {0L,-1L,0xACBEBD03L}}, {{1L,-1L,7UL}, {0L,2L,1UL}, {-4L,0x30L,0xFC44FBA4L}, {0x7CFAL,0L,0x884DF243L}, {0L,2L,1UL}, {0x43F7L,0x2AL,4294967290UL}, {0L,0x5AL,0x8850D773L}, {-8L,0L,4294967289UL}, {-1L,0xCCL,0x2C6E7F7CL}, {0L,-1L,0xACBEBD03L}}, {{1L,-1L,7UL}, {0L,2L,1UL}, {-4L,0x30L,0xFC44FBA4L}, {0x7CFAL,0L,0x884DF243L}, {0L,2L,1UL}, {0x43F7L,0x2AL,4294967290UL}, {0L,0x5AL,0x8850D773L}, {-8L,0L,4294967289UL}, {-1L,0xCCL,0x2C6E7F7CL}, {0L,-1L,0xACBEBD03L}}}, {{{1L,-1L,7UL}, {0L,2L,1UL}, {-4L,0x30L,0xFC44FBA4L}, {0x7CFAL,0L,0x884DF243L}, {0L,2L,1UL}, {0x43F7L,0x2AL,4294967290UL}, {0L,0x5AL,0x8850D773L}, {-8L,0L,4294967289UL}, {-1L,0xCCL,0x2C6E7F7CL}, {0L,-1L,0xACBEBD03L}}, {{1L,-1L,7UL}, {0L,2L,1UL}, {-4L,0x30L,0xFC44FBA4L}, {0x7CFAL,0L,0x884DF243L}, {0L,2L,1UL}, {0x43F7L,0x2AL,4294967290UL}, {0L,0x5AL,0x8850D773L}, {-8L,0L,4294967289UL}, {-1L,0xCCL,0x2C6E7F7CL}, {0L,-1L,0xACBEBD03L}}, {{1L,-1L,7UL}, {0L,2L,1UL}, {-4L,0x30L,0xFC44FBA4L}, {0x7CFAL,0L,0x884DF243L}, {0L,2L,1UL}, {0x43F7L,0x2AL,4294967290UL}, {0L,0x5AL,0x8850D773L}, {-8L,0L,4294967289UL}, {-1L,0xCCL,0x2C6E7F7CL}, {0L,-1L,0xACBEBD03L}}, {{1L,-1L,7UL}, {0L,2L,1UL}, {-4L,0x30L,0xFC44FBA4L}, {0x7CFAL,0L,0x884DF243L}, {0L,2L,1UL}, {0x43F7L,0x2AL,4294967290UL}, {0L,0x5AL,0x8850D773L}, {-8L,0L,4294967289UL}, {-1L,0xCCL,0x2C6E7F7CL}, {0L,-1L,0xACBEBD03L}}, {{1L,-1L,7UL}, {0L,2L,1UL}, {-4L,0x30L,0xFC44FBA4L}, {0x7CFAL,0L,0x884DF243L}, {0L,2L,1UL}, {0x43F7L,0x2AL,4294967290UL}, {0L,0x5AL,0x8850D773L}, {-8L,0L,4294967289UL}, {-1L,0xCCL,0x2C6E7F7CL}, {0L,-1L,0xACBEBD03L}}}};
static struct S0 g_780[8] = {{0xAC40L,-1L,0UL}, {-4L,-7L,4294967287UL}, {0xAC40L,-1L,0UL}, {-4L,-7L,4294967287UL}, {0xAC40L,-1L,0UL}, {-4L,-7L,4294967287UL}, {0xAC40L,-1L,0UL}, {-4L,-7L,4294967287UL}};
static struct S0 g_782 = {1L,1L,4294967295UL};
static int ** volatile g_797 = &g_194;
static struct S0 g_809 = {0x355EL,0xFAL,0x0486117EL};
static int ** volatile g_826[5] = {&g_194, &g_71, &g_194, &g_71, &g_194};
static const volatile short *g_836 = (void*)0;
static const volatile short ** volatile g_835 = &g_836;
static volatile struct S0 g_841 = {-8L,0xAFL,0x61199BFDL};
static volatile struct S0 g_842 = {0x8DD5L,0xC0L,0x39DCF245L};
static const int ** volatile g_882 = &g_67;



static int func_1(void);
static struct S0 func_4(int * p_5, int p_6, short p_7, const int p_8, int * p_9);
static int * func_10(char p_11, int * p_12, unsigned short p_13, int * p_14, unsigned short p_15);
static int * func_16(unsigned p_17);
static int func_18(int p_19);
static unsigned char func_24(short p_25, unsigned char p_26, int * p_27, const int * p_28);
static int func_35(unsigned p_36, int * p_37, int p_38, unsigned p_39, const short p_40);
static unsigned func_41(int * p_42);
static int * func_43(int p_44, char p_45);
static int * func_55(int p_56, int * p_57, int * p_58, int p_59, unsigned p_60);
static int func_1(void)
{
    int *l_29 = &g_3[1][0];
    int *l_30 = &g_31[2][1][1];
    int l_742[4];
    unsigned short l_743[10] = {1UL, 0x013EL, 7UL, 7UL, 0x013EL, 1UL, 0x013EL, 7UL, 7UL, 0x013EL};
    int l_744 = 1L;
    int l_756[5][8][3] = {{{0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}}, {{0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}}, {{0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}}, {{0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}}, {{0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}, {0L, 0L, 0xD09669EDL}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_742[i] = (-1L);
    g_2 = (void*)0;

    ;
    (*g_656) = func_4(func_10(g_3[4][1], func_16((((void*)0 != &g_3[1][3]) ^ func_18((safe_lshift_func_uint8_t_u_u(g_3[1][1], (safe_lshift_func_uint16_t_u_u((l_743[9] |= (((*g_161) = (func_24(g_3[7][3], ((l_29 == &g_3[4][1]) && (((((0xA966L || (((*l_30) = (*l_29)) || g_31[2][1][1])) ^ g_3[4][1]) ^ g_3[2][1]) || (*l_30)) | g_3[4][3])), l_30, l_29) >= (*l_29))) <= l_742[2])), l_744))))))), l_756[4][7][2], &l_756[4][7][2], (**g_590)), g_259.f0, g_698.f0, g_759, &g_670[0][4]);




    ;
    return (*l_29);
}







static struct S0 func_4(int * p_5, int p_6, short p_7, const int p_8, int * p_9)
{
    int *l_760 = &g_670[0][3];
    int l_761[5][7] = {{(-1L), (-4L), (-1L), (-4L), (-1L), (-4L), (-1L)}, {(-1L), (-4L), (-1L), (-4L), (-1L), (-4L), (-1L)}, {(-1L), (-4L), (-1L), (-4L), (-1L), (-4L), (-1L)}, {(-1L), (-4L), (-1L), (-4L), (-1L), (-4L), (-1L)}, {(-1L), (-4L), (-1L), (-4L), (-1L), (-4L), (-1L)}};
    int *l_764 = (void*)0;
    int **** const l_787 = &g_528;
    struct S0 *l_808 = &g_809;
    struct S0 *l_861[8];
    int i, j;
    for (i = 0; i < 8; i++)
        l_861[i] = &g_149;
    l_761[4][5] = ((*p_9) = (l_760 != &p_6));
    for (g_221.f0 = (-7); (g_221.f0 >= 14); g_221.f0 = safe_add_func_uint16_t_u_u(g_221.f0, 5))
    {
        int *l_765 = &g_81;
        int l_802 = 0xDB070D6BL;
        char ** const *l_811 = &g_254;
        char ** const **l_810 = &l_811;
        int * const *l_820 = &g_194;
        int * const * const *l_819 = &l_820;
        int * const * const **l_818 = &l_819;
        unsigned char **l_849 = &g_161;
        (*l_760) = (l_764 == (l_765 = &p_6));

        ;
    }
    return (*g_656);
}







static int * func_10(char p_11, int * p_12, unsigned short p_13, int * p_14, unsigned short p_15)
{
    int *l_758 = (void*)0;
    g_757[0] = (*g_191);
    return l_758;


}







static int * func_16(unsigned p_17)
{
    char **l_754 = &g_255;
    int *l_755 = &g_83;
    (*g_731) = l_754;
    return l_755;


}







static int func_18(int p_19)
{
    const char *l_748 = (void*)0;
    int l_749 = 0xCF4CF6B7L;
    int l_750 = 0x7AB0BE9EL;
    unsigned short l_752 = 0UL;
    int *l_753 = (void*)0;
    (*g_745) |= p_19;
    (*g_751) = &l_749;

    ;
    l_753 = &l_749;

    ;
    (*l_753) |= p_19;
    return p_19;


}







static unsigned char func_24(short p_25, unsigned char p_26, int * p_27, const int * p_28)
{
    unsigned *l_318 = &g_319[0];
    unsigned **l_317[6][6][7] = {{{&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}}, {{&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}}, {{&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}}, {{&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}}, {{&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}}, {{&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}, {&l_318, &l_318, &l_318, &l_318, &l_318, &l_318, &l_318}}};
    int l_322 = 0x1F2BCD1FL;
    int *l_523 = (void*)0;
    unsigned l_536[5];
    short * const l_578[1] = {&g_90.f0};
    int ****l_599 = &g_528;
    unsigned char l_617 = 0UL;
    unsigned short l_626[7] = {0x816CL, 0x816CL, 65535UL, 0x816CL, 0x816CL, 65535UL, 0x816CL};
    unsigned l_683 = 0xD876EA3EL;
    short l_695 = 0L;
    const char *l_725 = (void*)0;
    int l_740 = 0L;
    unsigned short l_741 = 0UL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_536[i] = 4294967295UL;
    for (p_25 = (-9); (p_25 != (-12)); p_25 = safe_sub_func_uint8_t_u_u(p_25, 8))
    {
        unsigned short l_34 = 2UL;
        char *l_46[4] = {&g_47, &g_47, &g_47, &g_47};
        int l_48 = 0xE13251F8L;
        unsigned short *l_517 = (void*)0;
        unsigned short *l_518 = &g_461;
        int *l_520[1];
        int i;
        for (i = 0; i < 1; i++)
            l_520[i] = &g_83;
        if (l_34)
            break;
    }
    for (g_83 = 0; (g_83 <= 0); g_83 += 1)
    {
        int * const l_521 = (void*)0;
        int **l_524 = &g_71;
        (*g_522) = l_521;

        ;
        (*g_525) = ((*l_524) = (l_523 = &l_322));

        ;
        ;
        ;
        for (g_81 = 0; (g_81 <= 0); g_81 += 1)
        {
            unsigned l_533 = 4UL;
            char l_537[4] = {1L, 0xC6L, 1L, 0xC6L};
            int i;
            for (g_190.f2 = 0; g_190.f2 < 3; g_190.f2 += 1)
            {
                for (g_215.f0 = 0; g_215.f0 < 1; g_215.f0 += 1)
                {
                    g_118[g_190.f2][g_215.f0] = &g_119;
                }
            }
            (*l_523) |= 0x6D8889BDL;
            for (g_47 = 0; (g_47 >= 0); g_47 -= 1)
            {
                int l_530[8][4] = {{(-1L), 0x2851D284L, 8L, 8L}, {(-1L), 0x2851D284L, 8L, 8L}, {(-1L), 0x2851D284L, 8L, 8L}, {(-1L), 0x2851D284L, 8L, 8L}, {(-1L), 0x2851D284L, 8L, 8L}, {(-1L), 0x2851D284L, 8L, 8L}, {(-1L), 0x2851D284L, 8L, 8L}, {(-1L), 0x2851D284L, 8L, 8L}};
                int *l_532 = (void*)0;
                int i, j;
            }
        }
    }

    ;
    ;
    ;
    if ((*p_28))
    {
        int l_583 = (-9L);
        const unsigned short ***l_588 = (void*)0;
        int l_593 = 0L;
        int ****l_598 = &g_528;
        int *****l_600 = &l_599;
        (*p_27) = func_41(func_55((p_25 < 0x33DCL), p_27, &l_583, l_593, g_215.f1));

        ;
        (*p_27) = (l_593 || (!((safe_lshift_func_uint8_t_u_s((!func_41(p_27)), 2)) | ((safe_add_func_uint8_t_u_u(2UL, (l_598 != (g_601 = ((*l_600) = l_599))))) < ((***g_253) != p_25)))));
    }
    else
    {
        int *l_605[4];
        char * const *l_634 = &g_255;
        short l_641 = 0x1921L;
        short l_677 = 5L;
        unsigned l_694[3][2] = {{0xD98DBCF2L, 7UL}, {0xD98DBCF2L, 7UL}, {0xD98DBCF2L, 7UL}};
        const unsigned short *l_715 = &g_716[2][7];
        int i, j;
        for (i = 0; i < 4; i++)
            l_605[i] = (void*)0;
        for (g_90.f1 = 0; (g_90.f1 >= 12); ++g_90.f1)
        {
            int l_604 = 0x54799546L;
            if ((*g_71))
                break;
        }
        if (((*g_194) = (*p_28)))
        {
            (*g_194) = ((safe_lshift_func_int8_t_s_u(((void*)0 != p_27), (safe_rshift_func_uint8_t_u_u(((*p_27) > 0x0B3F904EL), 5)))) > (safe_add_func_uint16_t_u_u((**g_115), ((void*)0 != p_28))));
        }
        else
        {
            int l_616[7][5] = {{0x9FAF4270L, 0xE318724CL, 0x92AB7503L, (-5L), (-5L)}, {0x9FAF4270L, 0xE318724CL, 0x92AB7503L, (-5L), (-5L)}, {0x9FAF4270L, 0xE318724CL, 0x92AB7503L, (-5L), (-5L)}, {0x9FAF4270L, 0xE318724CL, 0x92AB7503L, (-5L), (-5L)}, {0x9FAF4270L, 0xE318724CL, 0x92AB7503L, (-5L), (-5L)}, {0x9FAF4270L, 0xE318724CL, 0x92AB7503L, (-5L), (-5L)}, {0x9FAF4270L, 0xE318724CL, 0x92AB7503L, (-5L), (-5L)}};
            int i, j;
            for (g_221.f0 = 0; (g_221.f0 != 27); ++g_221.f0)
            {
                int **l_621[9] = {(void*)0, (void*)0, &l_523, (void*)0, (void*)0, &l_523, (void*)0, (void*)0, &l_523};
                int i;
                for (g_90.f0 = 22; (g_90.f0 == (-23)); g_90.f0 = safe_sub_func_int8_t_s_s(g_90.f0, 3))
                {
                    unsigned short l_618 = 0x4DBAL;
                    (*p_27) ^= 0x575AFB0AL;
                    l_605[3] = func_55(l_616[2][4], (*g_510), func_55((((*l_318) = l_617) && (+l_618)), p_27, func_55((safe_mod_func_int8_t_s_s(((~l_618) < (l_618 || l_616[2][4])), (*g_255))), p_27, l_605[0], (*g_194), g_397), (*p_28), g_149.f1), (*p_28), l_618);
                }
                (*g_411) = p_27;

                ;
                for (g_434.f1 = 0; (g_434.f1 != (-9)); --g_434.f1)
                {
                    unsigned l_627[4] = {4294967289UL, 4294967291UL, 4294967289UL, 4294967291UL};
                    int i;
                    for (g_149.f0 = 4; (g_149.f0 < (-15)); g_149.f0--)
                    {
                        int *l_628 = &l_322;
                        volatile struct S0 *l_631 = &g_215;
                        (*g_411) = func_55((*p_27), (*g_206), p_27, (*g_194), g_90.f0);

                        ;
                        (*g_71) ^= (p_25 <= (p_26 < (l_626[3] | l_627[0])));
                        p_27 = l_628;

                        ;
                        (*l_631) = g_629[2];
                    }
                    for (g_287 = 28; (g_287 >= 12); g_287 = safe_sub_func_int16_t_s_s(g_287, 9))
                    {
                        (*p_27) = 0L;
                        if ((**g_522))
                            continue;
                    }
                    (*g_636) = l_634;

                    ;
                }

                ;
            }

            ;
            ;
            ;

            ;
            (*g_344) ^= ((*p_27) = func_41(p_27));
        }

        ;
        ;
        ;

        ;
        for (g_434.f0 = 0; (g_434.f0 <= 0); g_434.f0 += 1)
        {
            int l_640 = (-9L);
            char **l_650 = &g_255;
            unsigned l_696 = 0x349AEC53L;
        }
    }

    ;
    ;
    ;
    ;
    return l_741;




}







static int func_35(unsigned p_36, int * p_37, int p_38, unsigned p_39, const short p_40)
{
    unsigned char l_338 = 0x71L;
    int *l_347 = &g_81;
    unsigned short **l_354 = &g_116;
    unsigned short ***l_353 = &l_354;
    int *l_409 = &g_3[4][1];
    int l_463[9];
    int *l_464[10] = {&g_3[4][1], &g_3[4][1], (void*)0, &g_3[4][1], &g_3[4][1], (void*)0, &g_3[4][1], &g_3[4][1], (void*)0, &g_3[4][1]};
    int l_471 = 1L;
    int *l_502 = &g_31[4][4][0];
    int *l_504 = &l_463[6];
    const unsigned l_508 = 0x7871CD36L;
    int i;
    for (i = 0; i < 9; i++)
        l_463[i] = 0x5BBC316DL;
    for (g_149.f1 = 0; (g_149.f1 <= 0); g_149.f1 += 1)
    {
        unsigned *l_323 = &g_319[0];
        int l_339[9][5] = {{1L, (-10L), 9L, 0x68633A95L, (-4L)}, {1L, (-10L), 9L, 0x68633A95L, (-4L)}, {1L, (-10L), 9L, 0x68633A95L, (-4L)}, {1L, (-10L), 9L, 0x68633A95L, (-4L)}, {1L, (-10L), 9L, 0x68633A95L, (-4L)}, {1L, (-10L), 9L, 0x68633A95L, (-4L)}, {1L, (-10L), 9L, 0x68633A95L, (-4L)}, {1L, (-10L), 9L, 0x68633A95L, (-4L)}, {1L, (-10L), 9L, 0x68633A95L, (-4L)}};
        short *l_340 = &g_229;
        unsigned l_407 = 0xA3EA6D4CL;
        int i, j;
        if ((((*l_323) = ((void*)0 != (*g_253))) & (func_41(&p_38) <= (safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((*l_340) = (safe_add_func_uint32_t_u_u((p_40 > (safe_add_func_int16_t_s_s(p_39, (safe_lshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((*g_116) |= l_338), l_338)), l_338)) & l_339[0][2]), (*g_255)))))), (*g_67)))), p_36)), 7)))))
        {
            unsigned l_345 = 0UL;
            int **l_348 = &g_194;
            unsigned l_355 = 0xBA69A890L;
            int *l_356 = &g_31[2][1][1];
            for (l_338 = 0; (l_338 <= 7); l_338 += 1)
            {
                int *l_346 = &g_83;
                int i;
                for (g_229 = 0; (g_229 <= 2); g_229 += 1)
                {
                    unsigned l_341 = 7UL;
                    for (p_36 = 0; (p_36 <= 2); p_36 += 1)
                    {
                        return l_341;


                    }
                    (*g_344) ^= (safe_rshift_func_int16_t_s_u(g_149.f1, 9));
                    l_345 ^= (l_339[0][2] & p_40);
                }
                (*l_346) = 0xE41EBB21L;
            }
            (*l_356) |= (func_41(&p_38) <= p_40);
            (*l_348) = &l_339[0][2];

            ;
            (*l_348) = &p_38;

            ;
        }
        else
        {
            int *l_375 = &g_31[2][1][1];
            unsigned short l_396 = 7UL;
            (*g_357) = ((*l_353) = &g_116);
            for (g_259.f1 = 0; (g_259.f1 <= 0); g_259.f1 += 1)
            {
                unsigned short l_364 = 65526UL;
                int *l_377 = &g_83;
                int *l_392 = (void*)0;
                int *l_395[9][8][3] = {{{&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}}, {{&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}}, {{&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}}, {{&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}}, {{&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}}, {{&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}}, {{&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}}, {{&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}}, {{&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}, {&g_3[4][1], &g_81, &l_339[0][2]}}};
                int i, j, k;
                for (g_105 = 3; (g_105 <= 8); g_105 += 1)
                {
                    int *l_369 = &g_3[6][3];
                    int l_378 = (-1L);
                    for (g_229 = 7; (g_229 >= 0); g_229 -= 1)
                    {
                        int *l_361 = &l_339[0][2];
                        int i, j;
                        l_339[g_229][(g_149.f1 + 2)] ^= (safe_lshift_func_int8_t_s_u(func_41(l_361), 5));
                    }
                    for (g_90.f0 = 7; (g_90.f0 >= 0); g_90.f0 -= 1)
                    {
                        int *l_374 = &l_339[0][2];
                        int *l_376[8] = {&g_81, (void*)0, &g_81, (void*)0, &g_81, (void*)0, &g_81, (void*)0};
                        int i;
                        l_377 = l_376[3];
                    }
                    (*l_347) = func_41(&l_339[6][3]);
                    for (g_259.f0 = 0; (g_259.f0 <= 7); g_259.f0 += 1)
                    {
                        int *l_379 = &g_3[5][2];
                        (*l_375) = (*p_37);
                        if ((**g_220))
                            break;
                        l_378 ^= (**g_156);
                        (*g_156) = l_379;

                        ;
                    }
                }

                ;
                (*g_394) ^= (((((safe_mod_func_uint32_t_u_u((254UL <= ((**g_254) |= p_39)), (*l_347))) >= (+(safe_sub_func_uint32_t_u_u((+(((safe_add_func_uint16_t_u_u((*l_347), p_38)) >= (safe_lshift_func_uint8_t_u_u(l_339[2][3], 2))) && p_39)), (safe_sub_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((*l_347), (*l_347))) || (*l_375)), 0xD0L)))))) == 0x324CL) < p_36) < (**g_358));
                (*l_375) &= func_41(l_395[1][3][1]);
                l_396 |= ((*l_347) = ((void*)0 != &p_38));
            }
            for (g_221.f0 = 7; (g_221.f0 >= 0); g_221.f0 -= 1)
            {
                unsigned short l_408[6] = {0UL, 0x08CEL, 0UL, 0x08CEL, 0UL, 0x08CEL};
                int *l_410 = &g_83;
                int **l_412 = &l_375;
                int i;
                for (g_287 = 0; (g_287 <= 8); g_287 += 1)
                {
                    int *l_400 = &g_31[2][4][0];
                    int l_401 = 2L;
                    if (((*l_347) = g_397))
                    {
                        int *l_398[8] = {&g_31[4][6][1], &g_31[1][2][0], &g_31[4][6][1], &g_31[1][2][0], &g_31[4][6][1], &g_31[1][2][0], &g_31[4][6][1], &g_31[1][2][0]};
                        int i;
                        p_38 &= (0x153BD5B5L | func_41(l_347));
                        l_398[7] = (*g_220);


                    }
                    else
                    {
                        short **l_399 = &l_340;
                        int l_404 = 0x98ED2947L;
                        l_408[5] ^= (p_38 >= ((((((*l_399) = &g_229) != &g_229) ^ (func_41(l_400) && l_401)) | p_36) >= (safe_sub_func_int16_t_s_s(((l_404 | (safe_lshift_func_int8_t_s_s(l_407, 5))) ^ (*l_375)), 1L))));
                        l_410 = l_409;

                        ;
                        (*l_347) = (*p_37);
                        (*g_411) = &l_404;

                        ;
                    }
                }

                ;
                (*l_412) = l_375;
                for (g_229 = 0; (g_229 <= 8); g_229 += 1)
                {
                    int *l_413[5][6][3] = {{{&g_3[6][3], &g_3[2][1], (void*)0}, {&g_3[6][3], &g_3[2][1], (void*)0}, {&g_3[6][3], &g_3[2][1], (void*)0}, {&g_3[6][3], &g_3[2][1], (void*)0}, {&g_3[6][3], &g_3[2][1], (void*)0}, {&g_3[6][3], &g_3[2][1], (void*)0}}, {{&g_3[6][3], &g_3[2][1], (void*)0}, {&g_3[6][3], &g_3[2][1], (void*)0}, {&g_3[6][3], &g_3[2][1], (void*)0}, {&g_3[6][3], &g_3[2][1], (void*)0}, {&g_3[6][3], &g_3[2][1], (void*)0}, {&g_3[6][3], &g_3[2][1], (void*)0}}, {{&g_3[6][3], &g_3[2][1], (void*)0}, {&g_3[6][3], &g_3[2][1], (void*)0}, {&g_3[6][3], &g_3[2][1], (void*)0}, {&g_3[6][3], &g_3[2][1], (void*)0}, {&g_3[6][3], &g_3[2][1], (void*)0}, {&g_3[6][3], &g_3[2][1], (void*)0}}, {{&g_3[6][3], &g_3[2][1], (void*)0}, {&g_3[6][3], &g_3[2][1], (void*)0}, {&g_3[6][3], &g_3[2][1], (void*)0}, {&g_3[6][3], &g_3[2][1], (void*)0}, {&g_3[6][3], &g_3[2][1], (void*)0}, {&g_3[6][3], &g_3[2][1], (void*)0}}, {{&g_3[6][3], &g_3[2][1], (void*)0}, {&g_3[6][3], &g_3[2][1], (void*)0}, {&g_3[6][3], &g_3[2][1], (void*)0}, {&g_3[6][3], &g_3[2][1], (void*)0}, {&g_3[6][3], &g_3[2][1], (void*)0}, {&g_3[6][3], &g_3[2][1], (void*)0}}};
                    int **l_414 = (void*)0;
                    int **l_415 = &l_410;
                    int *l_416 = &g_31[2][1][1];
                    int i, j, k;
                    l_339[0][2] = ((*l_347) ^= (g_31[(g_149.f1 + 3)][(g_149.f1 + 6)][(g_149.f1 + 1)] = ((0x8D67L ^ func_41(((*l_412) = (void*)0))) > (*p_37))));

                    ;
                    (*l_347) &= (**g_220);
                    (*l_412) = &p_38;

                    ;
                }
            }

            ;
        }
        for (g_81 = 8; (g_81 >= 0); g_81 -= 1)
        {
            return (*p_37);


        }
        (*l_347) = (*p_37);
    }


    for (g_90.f0 = 0; (g_90.f0 <= (-24)); --g_90.f0)
    {
        struct S0 **l_419 = &g_91[0];
        short *l_422 = (void*)0;
        short *l_423[7] = {&g_90.f0, &g_90.f0, &g_122[2].f0, &g_90.f0, &g_90.f0, &g_122[2].f0, &g_90.f0};
        int l_424 = 0x0DA6313AL;
        unsigned char l_427 = 255UL;
        int *l_449 = &g_3[7][0];
        unsigned short ***l_465 = (void*)0;
        int i;
        (*l_419) = (*g_126);
    }
    (*g_510) = &p_38;

    ;
    return (*p_37);


}







static unsigned func_41(int * p_42)
{
    int l_316 = 6L;
    for (g_47 = 0; (g_47 == (-4)); --g_47)
    {
        int l_315 = 0xB9C9A38DL;
        if (l_315)
            break;
    }
    return l_316;
}







static int * func_43(int p_44, char p_45)
{
    int *l_107[8] = {&g_3[2][2], (void*)0, &g_3[2][2], (void*)0, &g_3[2][2], (void*)0, &g_3[2][2], (void*)0};
    unsigned char l_111[5];
    unsigned **l_203 = (void*)0;
    const int l_285 = 0L;
    int i;
    for (i = 0; i < 5; i++)
        l_111[i] = 9UL;
    for (g_47 = (-29); (g_47 < 18); g_47 = safe_add_func_uint32_t_u_u(g_47, 8))
    {
        struct S0 *l_101 = &g_90;
        unsigned short l_108[5];
        int i;
        for (i = 0; i < 5; i++)
            l_108[i] = 65535UL;
        for (p_44 = 0; (p_44 <= (-15)); p_44 = safe_sub_func_uint32_t_u_u(p_44, 4))
        {
            int *l_61 = &g_3[3][2];
            unsigned short * volatile * volatile l_121 = &g_116;
            int l_151 = 0x78F82581L;
            for (p_45 = 0; (p_45 >= 23); p_45++)
            {
                unsigned char l_62 = 255UL;
                int **l_85 = (void*)0;
                int **l_87 = &l_61;
                struct S0 *l_89 = &g_90;
                const char * const l_94 = &g_90.f1;
                (*l_87) = func_55(p_44, l_61, l_61, l_62, p_44);

                ;
                for (g_83 = 0; (g_83 <= 0); g_83 += 1)
                {
                    int *l_88[2][5][5] = {{{&g_3[1][2], &g_3[4][3], &g_3[4][1], &g_3[4][1], &g_3[4][3]}, {&g_3[1][2], &g_3[4][3], &g_3[4][1], &g_3[4][1], &g_3[4][3]}, {&g_3[1][2], &g_3[4][3], &g_3[4][1], &g_3[4][1], &g_3[4][3]}, {&g_3[1][2], &g_3[4][3], &g_3[4][1], &g_3[4][1], &g_3[4][3]}, {&g_3[1][2], &g_3[4][3], &g_3[4][1], &g_3[4][1], &g_3[4][3]}}, {{&g_3[1][2], &g_3[4][3], &g_3[4][1], &g_3[4][1], &g_3[4][3]}, {&g_3[1][2], &g_3[4][3], &g_3[4][1], &g_3[4][1], &g_3[4][3]}, {&g_3[1][2], &g_3[4][3], &g_3[4][1], &g_3[4][1], &g_3[4][3]}, {&g_3[1][2], &g_3[4][3], &g_3[4][1], &g_3[4][1], &g_3[4][3]}, {&g_3[1][2], &g_3[4][3], &g_3[4][1], &g_3[4][1], &g_3[4][3]}}};
                    int i, j, k;
                    (*l_87) = (l_88[1][3][1] = &p_44);

                    ;

                    g_68[g_83][(g_83 + 2)] = (void*)0;
                }

                ;
                for (l_62 = 0; (l_62 <= 2); l_62 += 1)
                {
                    char **l_95 = (void*)0;
                    char *l_97 = &g_47;
                    char **l_96 = &l_97;
                    struct S0 *l_100 = &g_90;
                    unsigned *l_104[5][8][3] = {{{&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}}, {{&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}}, {{&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}}, {{&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}}, {{&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}, {&g_105, &g_105, &g_105}}};
                    int l_106[2][1][2] = {{{0x5C792442L, (-1L)}}, {{0x5C792442L, (-1L)}}};
                    int i, j, k;
                    g_91[0] = l_89;
                    (*l_87) = &p_44;

                    ;
                    (*l_89) = (*l_89);
                    if ((safe_add_func_int16_t_s_s((l_111[3] >= p_44), (&p_44 != &p_44))))
                    {
                        unsigned short *l_114 = &l_108[2];
                        (*g_71) &= (((*l_114) &= (safe_lshift_func_int16_t_s_s((0x9C32L != g_90.f2), g_3[4][1]))) || l_108[4]);
                        (*l_100) = (*l_101);
                    }
                    else
                    {
                        l_121 = g_115;
                        (*l_100) = g_122[2];
                    }
                }
                for (g_90.f1 = 0; (g_90.f1 > (-4)); --g_90.f1)
                {
                    struct S0 *l_125 = &g_122[2];
                    (*g_126) = l_125;
                }
            }

            ;
            (*l_101) = g_127;
            for (g_90.f0 = 6; (g_90.f0 > 5); g_90.f0--)
            {
                const unsigned l_130 = 0x396DDFF5L;
                int l_140[9][10][2] = {{{0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}}, {{0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}}, {{0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}}, {{0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}}, {{0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}}, {{0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}}, {{0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}}, {{0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}}, {{0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}, {0x1E850778L, 0xF404F4F1L}}};
                int **l_150 = &l_107[7];
                int i, j, k;
            }
        }
    }


    if (p_45)
    {
        unsigned l_178[4][9][2] = {{{4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}}, {{4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}}, {{4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}}, {{4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}, {4294967295UL, 0x32F98C7CL}}};
        int l_187 = (-2L);
        char **l_196 = (void*)0;
        unsigned *l_201 = &l_178[3][5][0];
        unsigned **l_200 = &l_201;
        struct S0 **l_243 = &g_91[0];
        int *l_248 = &g_31[2][1][1];
        char l_265 = 0xE1L;
        int i, j, k;
        for (g_90.f0 = 0; (g_90.f0 <= 0); g_90.f0 += 1)
        {
            unsigned short l_152 = 8UL;
            int **l_153 = &l_107[1];
            int **l_154 = (void*)0;
            unsigned char **l_163 = &g_161;
            int l_164 = 1L;
            char *l_165 = (void*)0;
            char *l_166 = &g_149.f1;
            int l_177[6] = {(-1L), (-1L), 0L, (-1L), (-1L), 0L};
            unsigned ***l_202[1][10][10] = {{{(void*)0, &l_200, &l_200, (void*)0, &l_200, &l_200, &l_200, &l_200, &l_200, &l_200}, {(void*)0, &l_200, &l_200, (void*)0, &l_200, &l_200, &l_200, &l_200, &l_200, &l_200}, {(void*)0, &l_200, &l_200, (void*)0, &l_200, &l_200, &l_200, &l_200, &l_200, &l_200}, {(void*)0, &l_200, &l_200, (void*)0, &l_200, &l_200, &l_200, &l_200, &l_200, &l_200}, {(void*)0, &l_200, &l_200, (void*)0, &l_200, &l_200, &l_200, &l_200, &l_200, &l_200}, {(void*)0, &l_200, &l_200, (void*)0, &l_200, &l_200, &l_200, &l_200, &l_200, &l_200}, {(void*)0, &l_200, &l_200, (void*)0, &l_200, &l_200, &l_200, &l_200, &l_200, &l_200}, {(void*)0, &l_200, &l_200, (void*)0, &l_200, &l_200, &l_200, &l_200, &l_200, &l_200}, {(void*)0, &l_200, &l_200, (void*)0, &l_200, &l_200, &l_200, &l_200, &l_200, &l_200}, {(void*)0, &l_200, &l_200, (void*)0, &l_200, &l_200, &l_200, &l_200, &l_200, &l_200}}};
            int i, j, k;
            (*g_156) = ((*l_153) = (*g_146));
        }
        if (p_45)
        {
            int *l_204 = &g_31[2][1][1];
            (*g_206) = l_204;

            ;
            for (g_105 = 0; (g_105 <= 57); g_105 = safe_add_func_uint16_t_u_u(g_105, 4))
            {
                short l_217[8][5][5] = {{{0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}}, {{0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}}, {{0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}}, {{0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}}, {{0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}}, {{0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}}, {{0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}}, {{0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}, {0x6953L, 0L, 0x6953L, 0xC56BL, 1L}}};
                int i, j, k;
                for (g_90.f1 = 27; (g_90.f1 > 4); g_90.f1 = safe_sub_func_int32_t_s_s(g_90.f1, 8))
                {
                    unsigned l_216 = 0x577700CAL;
                    if (p_44)
                    {
                        int l_211 = 0x36E89E0BL;
                        volatile struct S0 *l_212[8][2] = {{&g_190, &g_188}, {&g_190, &g_188}, {&g_190, &g_188}, {&g_190, &g_188}, {&g_190, &g_188}, {&g_190, &g_188}, {&g_190, &g_188}, {&g_190, &g_188}};
                        int i, j;
                        if (l_211)
                            break;
                        g_213 = (*g_191);
                        g_215 = g_214;
                    }
                    else
                    {
                        int *l_218 = &g_3[2][0];
                        int **l_219 = (void*)0;
                        l_217[6][3][1] &= l_216;
                        (*g_220) = l_218;

                        ;
                    }
                    if (l_217[6][3][1])
                        continue;
                }
            }

            ;
            return (*g_206);


        }
        else
        {
            struct S0 *l_222[3];
            int *l_223 = &g_31[2][1][1];
            int i;
            for (i = 0; i < 3; i++)
                l_222[i] = &g_122[2];
            (*g_194) &= (**g_146);
            (**g_148) = g_221;
            l_223 = l_107[1];

            ;
        }
        if (l_178[3][8][0])
        {
            int *l_237[6] = {&g_31[4][3][0], &g_31[4][3][0], &g_31[2][7][1], &g_31[4][3][0], &g_31[4][3][0], &g_31[2][7][1]};
            unsigned short l_244 = 1UL;
            unsigned short l_257[6];
            unsigned l_269[1][1][9] = {{{0xA07811D1L, 0xBCE1EA2BL, 0xA07811D1L, 0xBCE1EA2BL, 0xA07811D1L, 0xBCE1EA2BL, 0xA07811D1L, 0xBCE1EA2BL, 0xA07811D1L}}};
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_257[i] = 65535UL;
            for (p_45 = (-23); (p_45 < 26); ++p_45)
            {
                char l_236 = 1L;
                for (g_105 = 1; (g_105 <= 8); g_105 += 1)
                {
                    unsigned char l_226 = 0UL;
                    char ** const l_232 = (void*)0;
                    short *l_235 = &g_149.f0;
                    int *l_251[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_251[i] = &g_81;
                    (*g_238) = func_55(l_226, func_55((safe_mod_func_uint32_t_u_u((g_229 = 0xE83DC228L), ((**l_200) = ((safe_sub_func_int16_t_s_s(((*l_235) = (!(l_187 = (((l_232 == (void*)0) ^ (safe_rshift_func_int16_t_s_s((p_45 != (*g_161)), 7))) != ((void*)0 != &g_105))))), (p_45 & l_178[2][6][1]))) && l_236)))), l_237[3], (*g_220), (*g_71), l_236), &g_3[4][1], g_122[2].f0, g_149.f1);

                    ;
                    if (p_45)
                    {
                        int ***l_245 = (void*)0;
                        int * const *l_247 = &l_107[1];
                        int * const **l_246 = &l_247;
                        int **l_249 = &l_107[1];
                        if (l_187)
                            break;
                        (*g_71) ^= (p_44 | ((**l_200) = (safe_add_func_int32_t_s_s((l_178[3][8][0] & ((void*)0 == l_243)), l_244))));
                        (*l_246) = (void*)0;

                        ;
                        (*l_249) = func_55(p_44, (*g_238), (l_248 = l_107[1]), l_226, l_187);
                    }
                    else
                    {
                        int **l_250[10][10][2] = {{{&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}}, {{&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}}, {{&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}}, {{&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}}, {{&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}}, {{&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}}, {{&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}}, {{&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}}, {{&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}}, {{&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}, {&g_194, (void*)0}}};
                        int i, j, k;
                        l_251[0] = &p_44;


                        l_107[1] = (*g_146);
                        if (p_45)
                            continue;
                        p_44 &= (1L >= ((g_190.f2 && (*g_161)) || 8UL));
                    }


                    for (l_244 = 0; (l_244 <= 8); l_244 += 1)
                    {
                        unsigned l_252[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_252[i] = 0x49521B49L;
                        l_252[1] = ((*g_71) = p_45);
                        p_44 ^= (g_253 == (void*)0);
                    }
                    for (g_47 = 8; (g_47 >= 0); g_47 -= 1)
                    {
                        int l_256 = 0xDC0C42D2L;
                        int i;
                        p_44 = ((*g_71) = l_256);
                        (**l_243) = g_122[g_47];
                    }
                }
                (*g_71) = (l_257[2] <= l_236);
            }

            ;
            ;
            if ((p_44 <= (*g_67)))
            {
                int *l_266 = &g_81;
                (*g_71) |= (p_44 != ((p_44 != ((*g_255) = 0x49L)) & p_45));
                for (g_117 = 2; (g_117 <= 7); g_117 += 1)
                {
                    int **l_260[6] = {&g_194, (void*)0, &g_194, (void*)0, &g_194, (void*)0};
                    int i;
                    if (p_45)
                    {
                        p_44 = 1L;
                        (*g_71) = 0xE9DA0C82L;
                        if ((**g_156))
                            break;
                    }
                    else
                    {
                        int **l_258 = &l_237[0];
                        (*l_258) = l_237[3];
                        (**l_243) = g_259;
                        if ((*g_67))
                            continue;
                    }
                    (*g_206) = &p_44;

                    ;
                }

                ;
                for (g_83 = 0; (g_83 >= (-3)); g_83 = safe_sub_func_int16_t_s_s(g_83, 1))
                {
                    for (g_90.f1 = (-7); (g_90.f1 > (-8)); --g_90.f1)
                    {
                        if (l_265)
                            break;
                        (*g_71) ^= (-10L);
                        (*g_71) &= p_44;
                        (*g_71) = (*g_71);
                    }
                    (*g_268) = l_266;

                    ;
                }
                g_83 &= (~(l_269[0][0][6] || (((*g_71) |= (0x41356796L <= (p_44 & ((***g_253) && 0xB6L)))) == ((*l_266) = (0x75F75302L == g_162)))));
            }
            else
            {
                int l_278 = 4L;
                unsigned char *l_286[9][8][3] = {{{&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}}, {{&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}}, {{&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}}, {{&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}}, {{&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}}, {{&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}}, {{&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}}, {{&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}}, {{&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}, {&l_111[3], &l_111[3], &l_111[3]}}};
                int i, j, k;
                (*g_71) |= 5L;
                l_187 ^= (safe_mod_func_uint16_t_u_u(p_45, (safe_mod_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(p_45, ((*g_116) = l_278))), (safe_sub_func_int32_t_s_s((**g_206), ((((*g_161) = (((void*)0 == &g_254) || g_229)) >= ((g_287 = (((p_44 ^ (safe_mod_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((0UL & l_285), p_45)) || 4294967293UL), (*g_255)))) && l_278) < 0UL)) < l_278)) >= g_149.f1))))), g_229))));
            }

            ;
        }
        else
        {
            (*l_248) |= 1L;
            for (l_265 = 0; (l_265 < (-1)); l_265 = safe_sub_func_uint8_t_u_u(l_265, 2))
            {
                return (*g_206);


            }
        }

        ;
        ;
    }
    else
    {
        short l_298 = 2L;
        for (g_162 = (-16); (g_162 > 9); g_162 = safe_add_func_int16_t_s_s(g_162, 2))
        {
            int **l_294 = &g_194;
            int l_310 = 0xB17B122EL;
            for (g_229 = 15; (g_229 == (-15)); --g_229)
            {
                int **l_295 = &g_194;
                unsigned short **l_303 = &g_116;
                l_295 = l_294;
                if ((safe_add_func_uint8_t_u_u((g_127.f0 != ((0UL < l_298) > ((!p_45) == (safe_sub_func_int16_t_s_s(g_3[4][1], (**l_295)))))), (*g_161))))
                {
                    if ((**g_220))
                        break;
                }
                else
                {
                    unsigned char *l_304 = (void*)0;
                    int *l_306[2][9] = {{&g_83, &g_31[2][1][1], &g_31[2][1][1], &g_31[2][1][1], &g_83, &g_3[5][1], &g_83, &g_31[2][1][1], &g_31[2][1][1]}, {&g_83, &g_31[2][1][1], &g_31[2][1][1], &g_31[2][1][1], &g_83, &g_3[5][1], &g_83, &g_31[2][1][1], &g_31[2][1][1]}};
                    short *l_309 = &g_90.f0;
                    int i, j;
                    for (l_298 = 0; (l_298 == 19); ++l_298)
                    {
                        short *l_305 = &g_122[2].f0;
                        (*l_294) = func_55((((void*)0 == l_303) ^ (((void*)0 == l_304) == (((*l_305) = p_44) == p_45))), l_306[1][8], &p_44, (safe_lshift_func_uint8_t_u_u((l_309 != &g_229), 4)), g_47);

                        ;
                        l_310 |= ((p_44 < p_44) > (*g_116));
                        (*g_71) = (g_311[1][0] != l_203);
                    }
                }
            }

            ;
            return l_107[1];


        }
    }

    ;
    return l_107[7];



}







static int * func_55(int p_56, int * p_57, int * p_58, int p_59, unsigned p_60)
{
    unsigned l_80 = 4294967288UL;
    int *l_84 = &g_31[2][6][1];
    if ((!(*p_57)))
    {
        int *l_63 = &g_3[4][1];
        return l_63;


    }
    else
    {
        unsigned l_64 = 0x6B86D567L;
        int *l_73 = &g_31[0][0][1];
        int *l_82 = &g_83;
        if (l_64)
        {
            const int *l_65[4];
            const int **l_69 = (void*)0;
            const int **l_70 = &g_67;
            int **l_72[1][9][6] = {{{&g_71, &g_71, &g_71, &g_71, &g_71, &g_71}, {&g_71, &g_71, &g_71, &g_71, &g_71, &g_71}, {&g_71, &g_71, &g_71, &g_71, &g_71, &g_71}, {&g_71, &g_71, &g_71, &g_71, &g_71, &g_71}, {&g_71, &g_71, &g_71, &g_71, &g_71, &g_71}, {&g_71, &g_71, &g_71, &g_71, &g_71, &g_71}, {&g_71, &g_71, &g_71, &g_71, &g_71, &g_71}, {&g_71, &g_71, &g_71, &g_71, &g_71, &g_71}, {&g_71, &g_71, &g_71, &g_71, &g_71, &g_71}}};
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_65[i] = &g_3[2][0];
            (*l_70) = l_65[1];

            ;
            (*l_70) = (l_73 = g_71);



            (*g_71) = 0x6571F67BL;
        }
        else
        {
            unsigned char l_77 = 0UL;
            for (p_56 = 0; (p_56 <= 20); ++p_56)
            {
                unsigned l_76 = 0xF8612730L;
                l_76 ^= (*p_57);
                (*g_71) |= l_77;
            }
        }


        l_80 &= (safe_add_func_int8_t_s_s(g_47, (g_31[2][1][1] != 0x59084C01L)));
        (*l_82) ^= ((g_81 &= ((0x113E7BE8L <= ((*l_73) = (+((void*)0 != &p_57)))) ^ g_3[0][3])) != p_56);
    }
    (*g_71) = ((g_3[7][3] <= l_80) && g_3[2][0]);
    return l_84;


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_31[i][j][k], "g_31[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_90.f0, "g_90.f0", print_hash_value);
    transparent_crc(g_90.f1, "g_90.f1", print_hash_value);
    transparent_crc(g_90.f2, "g_90.f2", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_122[i].f0, "g_122[i].f0", print_hash_value);
        transparent_crc(g_122[i].f1, "g_122[i].f1", print_hash_value);
        transparent_crc(g_122[i].f2, "g_122[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_127.f0, "g_127.f0", print_hash_value);
    transparent_crc(g_127.f1, "g_127.f1", print_hash_value);
    transparent_crc(g_127.f2, "g_127.f2", print_hash_value);
    transparent_crc(g_149.f0, "g_149.f0", print_hash_value);
    transparent_crc(g_149.f1, "g_149.f1", print_hash_value);
    transparent_crc(g_149.f2, "g_149.f2", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_188.f0, "g_188.f0", print_hash_value);
    transparent_crc(g_188.f1, "g_188.f1", print_hash_value);
    transparent_crc(g_188.f2, "g_188.f2", print_hash_value);
    transparent_crc(g_190.f0, "g_190.f0", print_hash_value);
    transparent_crc(g_190.f1, "g_190.f1", print_hash_value);
    transparent_crc(g_190.f2, "g_190.f2", print_hash_value);
    transparent_crc(g_213.f0, "g_213.f0", print_hash_value);
    transparent_crc(g_213.f1, "g_213.f1", print_hash_value);
    transparent_crc(g_213.f2, "g_213.f2", print_hash_value);
    transparent_crc(g_214.f0, "g_214.f0", print_hash_value);
    transparent_crc(g_214.f1, "g_214.f1", print_hash_value);
    transparent_crc(g_214.f2, "g_214.f2", print_hash_value);
    transparent_crc(g_215.f0, "g_215.f0", print_hash_value);
    transparent_crc(g_215.f1, "g_215.f1", print_hash_value);
    transparent_crc(g_215.f2, "g_215.f2", print_hash_value);
    transparent_crc(g_221.f0, "g_221.f0", print_hash_value);
    transparent_crc(g_221.f1, "g_221.f1", print_hash_value);
    transparent_crc(g_221.f2, "g_221.f2", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_259.f0, "g_259.f0", print_hash_value);
    transparent_crc(g_259.f1, "g_259.f1", print_hash_value);
    transparent_crc(g_259.f2, "g_259.f2", print_hash_value);
    transparent_crc(g_287, "g_287", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_319[i], "g_319[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_397, "g_397", print_hash_value);
    transparent_crc(g_434.f0, "g_434.f0", print_hash_value);
    transparent_crc(g_434.f1, "g_434.f1", print_hash_value);
    transparent_crc(g_434.f2, "g_434.f2", print_hash_value);
    transparent_crc(g_461, "g_461", print_hash_value);
    transparent_crc(g_476, "g_476", print_hash_value);
    transparent_crc(g_538.f0, "g_538.f0", print_hash_value);
    transparent_crc(g_538.f1, "g_538.f1", print_hash_value);
    transparent_crc(g_538.f2, "g_538.f2", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_550[i].f0, "g_550[i].f0", print_hash_value);
        transparent_crc(g_550[i].f1, "g_550[i].f1", print_hash_value);
        transparent_crc(g_550[i].f2, "g_550[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_557, "g_557", print_hash_value);
    transparent_crc(g_592, "g_592", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_629[i].f0, "g_629[i].f0", print_hash_value);
        transparent_crc(g_629[i].f1, "g_629[i].f1", print_hash_value);
        transparent_crc(g_629[i].f2, "g_629[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_670[i][j], "g_670[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_698.f0, "g_698.f0", print_hash_value);
    transparent_crc(g_698.f1, "g_698.f1", print_hash_value);
    transparent_crc(g_698.f2, "g_698.f2", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_716[i][j], "g_716[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_757[i].f0, "g_757[i].f0", print_hash_value);
        transparent_crc(g_757[i].f1, "g_757[i].f1", print_hash_value);
        transparent_crc(g_757[i].f2, "g_757[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_759, "g_759", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_770[i][j][k].f0, "g_770[i][j][k].f0", print_hash_value);
                transparent_crc(g_770[i][j][k].f1, "g_770[i][j][k].f1", print_hash_value);
                transparent_crc(g_770[i][j][k].f2, "g_770[i][j][k].f2", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_780[i].f0, "g_780[i].f0", print_hash_value);
        transparent_crc(g_780[i].f1, "g_780[i].f1", print_hash_value);
        transparent_crc(g_780[i].f2, "g_780[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_782.f0, "g_782.f0", print_hash_value);
    transparent_crc(g_782.f1, "g_782.f1", print_hash_value);
    transparent_crc(g_782.f2, "g_782.f2", print_hash_value);
    transparent_crc(g_809.f0, "g_809.f0", print_hash_value);
    transparent_crc(g_809.f1, "g_809.f1", print_hash_value);
    transparent_crc(g_809.f2, "g_809.f2", print_hash_value);
    transparent_crc(g_841.f0, "g_841.f0", print_hash_value);
    transparent_crc(g_841.f1, "g_841.f1", print_hash_value);
    transparent_crc(g_841.f2, "g_841.f2", print_hash_value);
    transparent_crc(g_842.f0, "g_842.f0", print_hash_value);
    transparent_crc(g_842.f1, "g_842.f1", print_hash_value);
    transparent_crc(g_842.f2, "g_842.f2", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
