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



static unsigned g_8 = 0x748F69F7L;
static char g_38 = (-1L);
static int g_43 = (-1L);
static char *g_83 = &g_38;
static char **g_82 = &g_83;
static short g_96[3] = {(-8L), (-8L), (-8L)};
static unsigned char g_98 = 255UL;
static unsigned g_101 = 4294967295UL;
static short g_113[8] = {0L, 0L, 0L, 0L, 0L, 0L, 0L, 0L};
static unsigned g_117 = 0xE52BDABFL;
static short g_121 = 1L;
static int g_123 = 0x1BC37421L;
static int *g_126 = &g_123;
static unsigned g_152 = 1UL;
static int g_170 = 4L;
static char g_183 = 8L;
static unsigned short g_217 = 65535UL;
static int **g_223[9][1][10] = {{{&g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126}}, {{&g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126}}, {{&g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126}}, {{&g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126}}, {{&g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126}}, {{&g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126}}, {{&g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126}}, {{&g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126}}, {{&g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126}}};
static int * const g_229[9][9] = {{&g_43, &g_170, (void*)0, &g_123, &g_123, &g_170, &g_123, &g_123, (void*)0}, {&g_43, &g_170, (void*)0, &g_123, &g_123, &g_170, &g_123, &g_123, (void*)0}, {&g_43, &g_170, (void*)0, &g_123, &g_123, &g_170, &g_123, &g_123, (void*)0}, {&g_43, &g_170, (void*)0, &g_123, &g_123, &g_170, &g_123, &g_123, (void*)0}, {&g_43, &g_170, (void*)0, &g_123, &g_123, &g_170, &g_123, &g_123, (void*)0}, {&g_43, &g_170, (void*)0, &g_123, &g_123, &g_170, &g_123, &g_123, (void*)0}, {&g_43, &g_170, (void*)0, &g_123, &g_123, &g_170, &g_123, &g_123, (void*)0}, {&g_43, &g_170, (void*)0, &g_123, &g_123, &g_170, &g_123, &g_123, (void*)0}, {&g_43, &g_170, (void*)0, &g_123, &g_123, &g_170, &g_123, &g_123, (void*)0}};
static int * const *g_241 = &g_126;
static unsigned *g_398 = &g_117;
static unsigned short g_415 = 0xD0D9L;
static unsigned char *g_445 = &g_98;
static int g_461 = 0xD20D2992L;
static int g_487 = (-8L);
static unsigned **g_596 = (void*)0;
static const int *g_609[7] = {&g_43, &g_43, &g_43, &g_43, &g_43, &g_43, &g_43};
static const int **g_608 = &g_609[1];
static const int ***g_607 = &g_608;
static int ***g_618 = &g_223[4][0][8];
static const unsigned char g_621[2] = {8UL, 8UL};
static const short *g_631 = &g_121;
static const short **g_630 = &g_631;
static unsigned g_657[4][7][4] = {{{0x61392C0FL, 0UL, 0x3F2EA6DFL, 0x49CCB45FL}, {0x61392C0FL, 0UL, 0x3F2EA6DFL, 0x49CCB45FL}, {0x61392C0FL, 0UL, 0x3F2EA6DFL, 0x49CCB45FL}, {0x61392C0FL, 0UL, 0x3F2EA6DFL, 0x49CCB45FL}, {0x61392C0FL, 0UL, 0x3F2EA6DFL, 0x49CCB45FL}, {0x61392C0FL, 0UL, 0x3F2EA6DFL, 0x49CCB45FL}, {0x61392C0FL, 0UL, 0x3F2EA6DFL, 0x49CCB45FL}}, {{0x61392C0FL, 0UL, 0x3F2EA6DFL, 0x49CCB45FL}, {0x61392C0FL, 0UL, 0x3F2EA6DFL, 0x49CCB45FL}, {0x61392C0FL, 0UL, 0x3F2EA6DFL, 0x49CCB45FL}, {0x61392C0FL, 0UL, 0x3F2EA6DFL, 0x49CCB45FL}, {0x61392C0FL, 0UL, 0x3F2EA6DFL, 0x49CCB45FL}, {0x61392C0FL, 0UL, 0x3F2EA6DFL, 0x49CCB45FL}, {0x61392C0FL, 0UL, 0x3F2EA6DFL, 0x49CCB45FL}}, {{0x61392C0FL, 0UL, 0x3F2EA6DFL, 0x49CCB45FL}, {0x61392C0FL, 0UL, 0x3F2EA6DFL, 0x49CCB45FL}, {0x61392C0FL, 0UL, 0x3F2EA6DFL, 0x49CCB45FL}, {0x61392C0FL, 0UL, 0x3F2EA6DFL, 0x49CCB45FL}, {0x61392C0FL, 0UL, 0x3F2EA6DFL, 0x49CCB45FL}, {0x61392C0FL, 0UL, 0x3F2EA6DFL, 0x49CCB45FL}, {0x61392C0FL, 0UL, 0x3F2EA6DFL, 0x49CCB45FL}}, {{0x61392C0FL, 0UL, 0x3F2EA6DFL, 0x49CCB45FL}, {0x61392C0FL, 0UL, 0x3F2EA6DFL, 0x49CCB45FL}, {0x61392C0FL, 0UL, 0x3F2EA6DFL, 0x49CCB45FL}, {0x61392C0FL, 0UL, 0x3F2EA6DFL, 0x49CCB45FL}, {0x61392C0FL, 0UL, 0x3F2EA6DFL, 0x49CCB45FL}, {0x61392C0FL, 0UL, 0x3F2EA6DFL, 0x49CCB45FL}, {0x61392C0FL, 0UL, 0x3F2EA6DFL, 0x49CCB45FL}}};
static int *g_672[8] = {(void*)0, (void*)0, &g_170, (void*)0, (void*)0, &g_170, (void*)0, (void*)0};
static short *g_728 = (void*)0;
static short * const *g_727 = &g_728;
static short * const **g_726 = &g_727;
static int g_776[8] = {(-10L), 0x27DDEF97L, (-10L), 0x27DDEF97L, (-10L), 0x27DDEF97L, (-10L), 0x27DDEF97L};
static unsigned ***g_795 = &g_596;
static unsigned ****g_794 = &g_795;
static char *g_842 = &g_38;
static short g_855 = 0x6F35L;
static unsigned short **g_865 = (void*)0;
static char g_924 = 0x65L;
static int *g_938[8][6][5] = {{{&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}}, {{&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}}, {{&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}}, {{&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}}, {{&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}}, {{&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}}, {{&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}}, {{&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}, {&g_487, &g_487, &g_487, &g_487, &g_43}}};
static short g_994[5] = {0xB4A7L, 0xB4A7L, 0xB4A7L, 0xB4A7L, 0xB4A7L};
static int g_1101 = (-2L);
static char g_1144 = (-8L);
static unsigned g_1149 = 7UL;
static unsigned char g_1158 = 0x10L;
static unsigned short ***g_1197 = &g_865;
static unsigned short ****g_1196 = &g_1197;
static int g_1253 = (-10L);
static const unsigned short *g_1283 = (void*)0;
static const unsigned short **g_1282 = &g_1283;
static const unsigned short ***g_1281 = &g_1282;
static const unsigned short ****g_1280 = &g_1281;
static int *g_1306 = &g_43;
static unsigned g_1340[10][4] = {{0x9535246CL, 0xCA2325D4L, 0UL, 0x8F2EA422L}, {0x9535246CL, 0xCA2325D4L, 0UL, 0x8F2EA422L}, {0x9535246CL, 0xCA2325D4L, 0UL, 0x8F2EA422L}, {0x9535246CL, 0xCA2325D4L, 0UL, 0x8F2EA422L}, {0x9535246CL, 0xCA2325D4L, 0UL, 0x8F2EA422L}, {0x9535246CL, 0xCA2325D4L, 0UL, 0x8F2EA422L}, {0x9535246CL, 0xCA2325D4L, 0UL, 0x8F2EA422L}, {0x9535246CL, 0xCA2325D4L, 0UL, 0x8F2EA422L}, {0x9535246CL, 0xCA2325D4L, 0UL, 0x8F2EA422L}, {0x9535246CL, 0xCA2325D4L, 0UL, 0x8F2EA422L}};
static int g_1341 = (-1L);
static char g_1360[3][2][8] = {{{0L, 0L, (-1L), 0L, 0L, (-1L), 0L, 0L}, {0L, 0L, (-1L), 0L, 0L, (-1L), 0L, 0L}}, {{0L, 0L, (-1L), 0L, 0L, (-1L), 0L, 0L}, {0L, 0L, (-1L), 0L, 0L, (-1L), 0L, 0L}}, {{0L, 0L, (-1L), 0L, 0L, (-1L), 0L, 0L}, {0L, 0L, (-1L), 0L, 0L, (-1L), 0L, 0L}}};
static unsigned *g_1386 = &g_1340[4][3];
static char ***g_1414 = &g_82;
static char ****g_1413 = &g_1414;
static int * const ***g_1430 = (void*)0;
static int g_1439 = 1L;
static unsigned short g_1585 = 65535UL;



static unsigned short func_1(void);
static int func_2(unsigned char p_3, unsigned p_4, unsigned p_5, short p_6, unsigned p_7);
static short func_13(int p_14, unsigned char p_15);
static short func_20(int p_21, char p_22, unsigned char p_23, unsigned short p_24, int p_25);
static unsigned char func_26(unsigned short p_27, int p_28, short p_29, unsigned p_30, unsigned p_31);
static char func_34(char p_35, const short p_36);
static int * const func_46(int p_47);
static unsigned func_52(char * p_53, const int p_54, char p_55, int p_56, const char * p_57);
static const unsigned short func_63(short p_64, int * p_65);
static int func_66(int ** p_67);
static unsigned short func_1(void)
{
    int l_9[4];
    int l_10 = 0xC1464F16L;
    short *l_1120 = &g_113[2];
    const unsigned l_1187 = 0x6984465CL;
    const char *l_1189[6];
    char ***l_1221[5][3][8] = {{{&g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82}, {&g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82}, {&g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82}}, {{&g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82}, {&g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82}, {&g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82}}, {{&g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82}, {&g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82}, {&g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82}}, {{&g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82}, {&g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82}, {&g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82}}, {{&g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82}, {&g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82}, {&g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82}}};
    unsigned short l_1255[2];
    unsigned char l_1302 = 0UL;
    unsigned short l_1303[7];
    const int l_1316[4][2][4] = {{{0xD57339B2L, 0xAB47F520L, 0xD57339B2L, 0x62CAC130L}, {0xD57339B2L, 0xAB47F520L, 0xD57339B2L, 0x62CAC130L}}, {{0xD57339B2L, 0xAB47F520L, 0xD57339B2L, 0x62CAC130L}, {0xD57339B2L, 0xAB47F520L, 0xD57339B2L, 0x62CAC130L}}, {{0xD57339B2L, 0xAB47F520L, 0xD57339B2L, 0x62CAC130L}, {0xD57339B2L, 0xAB47F520L, 0xD57339B2L, 0x62CAC130L}}, {{0xD57339B2L, 0xAB47F520L, 0xD57339B2L, 0x62CAC130L}, {0xD57339B2L, 0xAB47F520L, 0xD57339B2L, 0x62CAC130L}}};
    short l_1352[2];
    int l_1357 = 0x57FD3330L;
    unsigned l_1367 = 4294967294UL;
    int l_1511 = 2L;
    const char *l_1520 = &g_38;
    const int l_1549 = 0xE3556D50L;
    unsigned short ***l_1552 = (void*)0;
    unsigned char l_1562[1][7][6] = {{{247UL, 0xFDL, 247UL, 0xFDL, 247UL, 0xFDL}, {247UL, 0xFDL, 247UL, 0xFDL, 247UL, 0xFDL}, {247UL, 0xFDL, 247UL, 0xFDL, 247UL, 0xFDL}, {247UL, 0xFDL, 247UL, 0xFDL, 247UL, 0xFDL}, {247UL, 0xFDL, 247UL, 0xFDL, 247UL, 0xFDL}, {247UL, 0xFDL, 247UL, 0xFDL, 247UL, 0xFDL}, {247UL, 0xFDL, 247UL, 0xFDL, 247UL, 0xFDL}}};
    unsigned *l_1581 = (void*)0;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_9[i] = 0x733C6338L;
    for (i = 0; i < 6; i++)
        l_1189[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_1255[i] = 0x58FEL;
    for (i = 0; i < 7; i++)
        l_1303[i] = 0x0FEAL;
    for (i = 0; i < 2; i++)
        l_1352[i] = 0L;
    if (func_2((g_8 || l_9[0]), (l_10 &= 0xB6B9DD95L), l_9[2], ((*l_1120) = ((safe_lshift_func_int16_t_s_u(func_13((safe_rshift_func_uint16_t_u_s(l_9[0], l_9[1])), ((safe_mul_func_int16_t_s_s(func_20(g_8, l_9[1], func_26(g_8, g_8, l_9[0], l_9[3], g_8), l_9[0], l_9[1]), l_9[0])) > 0x0B01L)), 1)) & g_1101)), l_9[0]))
    {
        unsigned short l_1156 = 0x2107L;
        int l_1198 = 3L;
        int l_1214 = 0x4F58487DL;
        int l_1220 = (-1L);
        char ***l_1224[9];
        char l_1309[1][5];
        char l_1366 = 0L;
        unsigned *l_1387[10] = {&g_8, &g_1340[0][1], &g_8, &g_1340[0][1], &g_8, &g_1340[0][1], &g_8, &g_1340[0][1], &g_8, &g_1340[0][1]};
        int ** const **l_1423 = (void*)0;
        const int *l_1441 = &l_10;
        int i, j;
        for (i = 0; i < 9; i++)
            l_1224[i] = (void*)0;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_1309[i][j] = 0L;
        }
lbl_1395:
        for (g_38 = 0; (g_38 < (-22)); --g_38)
        {
            int *l_1155[7][2] = {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}};
            char **l_1169[10][3] = {{&g_842, &g_83, &g_842}, {&g_842, &g_83, &g_842}, {&g_842, &g_83, &g_842}, {&g_842, &g_83, &g_842}, {&g_842, &g_83, &g_842}, {&g_842, &g_83, &g_842}, {&g_842, &g_83, &g_842}, {&g_842, &g_83, &g_842}, {&g_842, &g_83, &g_842}, {&g_842, &g_83, &g_842}};
            unsigned short ***l_1195 = (void*)0;
            unsigned short ****l_1194[10] = {&l_1195, &l_1195, &l_1195, &l_1195, &l_1195, &l_1195, &l_1195, &l_1195, &l_1195, &l_1195};
            unsigned l_1205 = 0x7138E33FL;
            short * const *l_1212 = &l_1120;
            const int l_1215 = 0x32863AC9L;
            short l_1277[8] = {1L, 0xE30AL, 1L, 0xE30AL, 1L, 0xE30AL, 1L, 0xE30AL};
            unsigned l_1301 = 0x99DA6F2FL;
            char l_1325[5];
            int i, j;
            for (i = 0; i < 5; i++)
                l_1325[i] = 0xE1L;
            for (g_1144 = 0; (g_1144 <= 3); g_1144 += 1)
            {
                int *l_1148 = &g_123;
                int l_1159 = 0xDD71769CL;
                (*l_1148) ^= (-3L);
                for (g_8 = 0; (g_8 <= 3); g_8 += 1)
                {
                    short l_1154 = 1L;
                    unsigned char *l_1157 = &g_1158;
                    l_1159 |= (g_1149 || ((((*l_1157) = (safe_mul_func_uint16_t_u_u((+(((safe_mul_func_int8_t_s_s(((0x10L != (((*g_445) = (*g_445)) >= (0x75116FA7L && func_63(l_1154, l_1155[5][1])))) | ((*l_1120) = 0x4CD1L)), (**g_82))) != 0x52165558L) || l_1156)), (*g_631)))) | 0xF9L) >= l_1154));
                }
            }
        }
        for (g_170 = 5; (g_170 >= (-6)); g_170--)
        {
            int l_1371[6] = {0xD1967304L, (-2L), 0xD1967304L, (-2L), 0xD1967304L, (-2L)};
            const char *l_1403 = &g_924;
            unsigned char l_1404 = 0xE8L;
            unsigned short l_1436 = 1UL;
            int l_1437 = 0xA378D1A0L;
            unsigned *l_1440 = &g_657[2][6][1];
            int i;
            l_9[0] &= (l_1371[0] < 0x6F56L);
            if (((safe_sub_func_int16_t_s_s((((-1L) || 3UL) == ((-2L) & 0xCDL)), l_1352[1])) < ((*g_445) = ((safe_mul_func_uint8_t_u_u((*g_445), l_1371[2])) != l_1371[0]))))
            {
                int * const l_1381 = &l_9[2];
                (*g_1306) |= (safe_mod_func_uint32_t_u_u(4294967290UL, 0x8EE6D3B1L));
                if (l_1255[1])
                {
                    int l_1378 = 1L;
                    if (l_1378)
                        break;
                    for (l_10 = 0; (l_10 <= 18); ++l_10)
                    {
                        int **l_1382 = &g_938[6][1][4];
                        short l_1383[5][8] = {{0x1BAEL, 0x91AAL, 0L, 0x91AAL, 0x1BAEL, 0x0EB1L, 0x1BAEL, 0x91AAL}, {0x1BAEL, 0x91AAL, 0L, 0x91AAL, 0x1BAEL, 0x0EB1L, 0x1BAEL, 0x91AAL}, {0x1BAEL, 0x91AAL, 0L, 0x91AAL, 0x1BAEL, 0x0EB1L, 0x1BAEL, 0x91AAL}, {0x1BAEL, 0x91AAL, 0L, 0x91AAL, 0x1BAEL, 0x0EB1L, 0x1BAEL, 0x91AAL}, {0x1BAEL, 0x91AAL, 0L, 0x91AAL, 0x1BAEL, 0x0EB1L, 0x1BAEL, 0x91AAL}};
                        unsigned *l_1384 = &g_1340[0][1];
                        unsigned **l_1385 = (void*)0;
                        int i, j;
                        (*l_1382) = l_1381;
                        (*l_1381) = ((((((*l_1120) &= l_1383[4][5]) <= (*g_631)) < (l_1378 || ((g_1386 = l_1384) != l_1387[9]))) || (**g_608)) != l_1309[0][4]);
                        (*l_1381) &= l_1220;
                        (*g_608) = &l_1214;
                    }
                }
                else
                {
                    short l_1400 = 1L;
                    for (g_415 = (-3); (g_415 != 39); ++g_415)
                    {
                        unsigned char l_1394[2][10] = {{0UL, 255UL, 0UL, 255UL, 0UL, 255UL, 0UL, 255UL, 0UL, 255UL}, {0UL, 255UL, 0UL, 255UL, 0UL, 255UL, 0UL, 255UL, 0UL, 255UL}};
                        int i, j;
                        (*g_1306) = ((safe_mod_func_int8_t_s_s(((*l_1381) &= (*g_83)), (safe_div_func_int16_t_s_s(7L, l_1394[1][0])))) && 0xDE2BL);
                        if (g_217)
                            goto lbl_1395;
                    }
                    if ((**g_608))
                        continue;
                    for (l_1367 = (-8); (l_1367 >= 13); l_1367 = safe_add_func_uint16_t_u_u(l_1367, 5))
                    {
                        char *l_1401[4][5][7] = {{{&g_1360[1][0][0], (void*)0, &g_1360[1][1][6], &g_1144, &g_1360[1][1][6], &l_1366, &g_1144}, {&g_1360[1][0][0], (void*)0, &g_1360[1][1][6], &g_1144, &g_1360[1][1][6], &l_1366, &g_1144}, {&g_1360[1][0][0], (void*)0, &g_1360[1][1][6], &g_1144, &g_1360[1][1][6], &l_1366, &g_1144}, {&g_1360[1][0][0], (void*)0, &g_1360[1][1][6], &g_1144, &g_1360[1][1][6], &l_1366, &g_1144}, {&g_1360[1][0][0], (void*)0, &g_1360[1][1][6], &g_1144, &g_1360[1][1][6], &l_1366, &g_1144}}, {{&g_1360[1][0][0], (void*)0, &g_1360[1][1][6], &g_1144, &g_1360[1][1][6], &l_1366, &g_1144}, {&g_1360[1][0][0], (void*)0, &g_1360[1][1][6], &g_1144, &g_1360[1][1][6], &l_1366, &g_1144}, {&g_1360[1][0][0], (void*)0, &g_1360[1][1][6], &g_1144, &g_1360[1][1][6], &l_1366, &g_1144}, {&g_1360[1][0][0], (void*)0, &g_1360[1][1][6], &g_1144, &g_1360[1][1][6], &l_1366, &g_1144}, {&g_1360[1][0][0], (void*)0, &g_1360[1][1][6], &g_1144, &g_1360[1][1][6], &l_1366, &g_1144}}, {{&g_1360[1][0][0], (void*)0, &g_1360[1][1][6], &g_1144, &g_1360[1][1][6], &l_1366, &g_1144}, {&g_1360[1][0][0], (void*)0, &g_1360[1][1][6], &g_1144, &g_1360[1][1][6], &l_1366, &g_1144}, {&g_1360[1][0][0], (void*)0, &g_1360[1][1][6], &g_1144, &g_1360[1][1][6], &l_1366, &g_1144}, {&g_1360[1][0][0], (void*)0, &g_1360[1][1][6], &g_1144, &g_1360[1][1][6], &l_1366, &g_1144}, {&g_1360[1][0][0], (void*)0, &g_1360[1][1][6], &g_1144, &g_1360[1][1][6], &l_1366, &g_1144}}, {{&g_1360[1][0][0], (void*)0, &g_1360[1][1][6], &g_1144, &g_1360[1][1][6], &l_1366, &g_1144}, {&g_1360[1][0][0], (void*)0, &g_1360[1][1][6], &g_1144, &g_1360[1][1][6], &l_1366, &g_1144}, {&g_1360[1][0][0], (void*)0, &g_1360[1][1][6], &g_1144, &g_1360[1][1][6], &l_1366, &g_1144}, {&g_1360[1][0][0], (void*)0, &g_1360[1][1][6], &g_1144, &g_1360[1][1][6], &l_1366, &g_1144}, {&g_1360[1][0][0], (void*)0, &g_1360[1][1][6], &g_1144, &g_1360[1][1][6], &l_1366, &g_1144}}};
                        int *l_1402[3];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_1402[i] = &g_776[5];
                        l_1404 = ((1UL < (safe_lshift_func_uint16_t_u_s((l_1400 = 0x96E5L), 3))) > (+((*l_1120) = func_52(l_1401[0][1][2], g_8, (**g_82), (g_461 = g_183), l_1403))));
                        return l_1366;
                    }
                    if ((***g_607))
                        break;
                }
                (*l_1381) |= (***g_607);
                for (g_924 = 0; (g_924 <= 4); g_924 += 1)
                {
                    int *l_1427 = &l_1220;
                    int ** const l_1426 = &l_1427;
                    int ** const *l_1425 = &l_1426;
                    int ** const **l_1424 = &l_1425;
                    int ** const ***l_1428 = (void*)0;
                    int ** const ***l_1429 = &l_1423;
                    int * const ****l_1431 = &g_1430;
                    int i;
                    if (g_994[g_924])
                        break;
                    for (g_101 = 0; (g_101 <= 4); g_101 += 1)
                    {
                        return l_1220;
                    }
                    (*l_1381) = ((l_10 &= (safe_rshift_func_uint16_t_u_u((g_994[g_924] == (((safe_div_func_uint16_t_u_u(l_1371[3], g_994[g_924])) && (g_1413 != (void*)0)) | (l_1309[0][2] != l_1366))), 4))) == 0UL);
                    if (((((*g_842) = l_1309[0][2]) > (safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_u(((((*l_1429) = (l_1424 = l_1423)) == ((*l_1431) = g_1430)) < (*l_1381)), 7)) ^ (l_1404 > (***l_1425))), 1)), (**g_630))), (g_994[g_924] = (1UL != (safe_div_func_int32_t_s_s(((((safe_lshift_func_int8_t_s_u((-8L), (*g_445))) != (*l_1381)) <= 0L) <= l_1156), 0xD4354752L))))))) < 255UL))
                    {
                        (*l_1381) = l_1436;
                        (**l_1426) = ((l_1437 | 1L) <= (safe_unary_minus_func_uint16_t_u(g_1439)));
                        (**l_1426) = ((void*)0 == l_1440);
                    }
                    else
                    {
                        int **l_1442 = (void*)0;
                        int **l_1443 = &g_672[3];
                        (*g_1306) |= func_63((**g_630), &l_1437);
                        (**g_607) = l_1441;
                        (*l_1443) = l_1381;
                    }
                }
            }
            else
            {
                if (g_1144)
                    goto lbl_1395;
            }
        }
        for (g_415 = 2; (g_415 <= 6); g_415 += 1)
        {
            short l_1444[8][9][2] = {{{(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}}, {{(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}}, {{(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}}, {{(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}}, {{(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}}, {{(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}}, {{(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}}, {{(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}, {(-10L), 9L}}};
            int l_1451[8] = {8L, 2L, 8L, 2L, 8L, 2L, 8L, 2L};
            unsigned l_1460 = 0x54CEDC16L;
            int i, j, k;
            for (g_152 = 0; (g_152 <= 9); g_152 += 1)
            {
                char l_1452 = 0x5CL;
                for (g_855 = 0; (g_855 <= 9); g_855 += 1)
                {
                    int i;
                }
            }
        }
    }
    else
    {
        int l_1463 = (-2L);
        for (g_117 = 0; (g_117 <= 58); ++g_117)
        {
            (*g_1306) &= (l_1463 &= ((void*)0 != (***g_1280)));
        }
        for (g_415 = 0; (g_415 == 46); ++g_415)
        {
            short l_1472 = 0L;
            int **l_1519 = &g_126;
            for (g_1341 = 10; (g_1341 != 7); g_1341 = safe_sub_func_int8_t_s_s(g_1341, 6))
            {
                unsigned *l_1473 = (void*)0;
                unsigned *l_1474 = &g_1149;
                int l_1479 = 0xAF199EF8L;
                unsigned l_1498 = 0xC44312A4L;
                int l_1502[6] = {0x2CD67167L, 0L, 0x2CD67167L, 0L, 0x2CD67167L, 0L};
                int **l_1512 = &g_938[4][0][0];
                int i;
                if ((safe_mul_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(l_1472, ((*l_1474) = ((*g_398) = (*g_398))))) < (((*g_842) || ((*g_842) ^= (safe_div_func_int8_t_s_s(9L, (safe_rshift_func_int8_t_s_s(l_1479, 3)))))) | ((*g_1306) &= 0x260835D0L))), l_1479)))
                {
                    unsigned char l_1499 = 0UL;
                    unsigned short *l_1500 = (void*)0;
                    unsigned short *l_1501 = &l_1255[0];
                    int *l_1503 = &l_9[0];
                    char *l_1518 = &g_1360[0][1][1];
                    l_9[0] = 0xB751660EL;
                    (*l_1503) = ((*g_1306) = ((safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((safe_add_func_int16_t_s_s(0x006CL, ((*l_1501) = ((*g_631) > ((***g_607) & (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(l_1472, (safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((((-5L) | (*g_445)) >= 0x12L), (safe_mul_func_int16_t_s_s((((safe_sub_func_int16_t_s_s((func_26(l_1498, (((*g_83) ^= (((&g_1430 == (void*)0) <= l_1463) == l_1352[1])) != l_1463), (**g_630), (*g_1386), (*g_1386)) ^ l_1499), l_1357)) >= l_1472) || l_1463), 9L)))), l_9[1])))), 0L))))))) <= l_1498), l_1502[2])), l_1352[1])) ^ l_1498));
                    if (((l_1303[5] ^ ((*g_607) != (*g_618))) < (((*l_1120) = (-3L)) == (**g_630))))
                    {
                        short l_1506 = 0x4DD7L;
                        (*g_1306) = ((safe_sub_func_int32_t_s_s(l_1479, l_1479)) < (!l_1506));
                    }
                    else
                    {
                        int l_1510 = 0x09B5C01DL;
                        int l_1517 = 0xDAF8B435L;
                        (*g_1306) ^= (((safe_mul_func_uint16_t_u_u((((l_10 = l_1479) ^ (safe_unary_minus_func_int32_t_s((*l_1503)))) || 65532UL), l_1510)) | l_1511) & l_1510);
                        (*g_1306) ^= ((l_1187 ^ ((void*)0 != (*g_1196))) >= ((safe_mod_func_uint8_t_u_u((l_1517 = (0xC4L & 8L)), (func_52(l_1518, g_657[2][0][1], (**g_82), g_123, l_1520) & 0x9BDEL))) == 0xD9L));
                    }
                }
                else
                {
                    int l_1521 = (-1L);
                    (*g_1306) = l_1521;
                    (*g_1306) = l_1521;
                    for (g_1144 = (-20); (g_1144 <= (-2)); g_1144 = safe_add_func_uint16_t_u_u(g_1144, 7))
                    {
                        return l_1463;
                    }
                }
            }
            if (l_1463)
                break;
            (*g_1306) = (***g_607);
        }
        for (g_121 = 0; (g_121 == (-12)); g_121 = safe_sub_func_uint32_t_u_u(g_121, 3))
        {
            int *l_1526[9][3] = {{&g_43, (void*)0, (void*)0}, {&g_43, (void*)0, (void*)0}, {&g_43, (void*)0, (void*)0}, {&g_43, (void*)0, (void*)0}, {&g_43, (void*)0, (void*)0}, {&g_43, (void*)0, (void*)0}, {&g_43, (void*)0, (void*)0}, {&g_43, (void*)0, (void*)0}, {&g_43, (void*)0, (void*)0}};
            char *l_1534 = &g_38;
            int l_1543 = 2L;
            int l_1544 = (-3L);
            int i, j;
            (**g_607) = &l_1463;
        }
        l_1357 |= (-2L);
    }
    for (g_461 = 0; (g_461 < 18); g_461 = safe_add_func_uint32_t_u_u(g_461, 7))
    {
        unsigned short l_1548 = 0x1992L;
        unsigned short ***l_1553 = &g_865;
        int *l_1559[3][4][5] = {{{&l_10, (void*)0, &g_1341, &g_123, &g_123}, {&l_10, (void*)0, &g_1341, &g_123, &g_123}, {&l_10, (void*)0, &g_1341, &g_123, &g_123}, {&l_10, (void*)0, &g_1341, &g_123, &g_123}}, {{&l_10, (void*)0, &g_1341, &g_123, &g_123}, {&l_10, (void*)0, &g_1341, &g_123, &g_123}, {&l_10, (void*)0, &g_1341, &g_123, &g_123}, {&l_10, (void*)0, &g_1341, &g_123, &g_123}}, {{&l_10, (void*)0, &g_1341, &g_123, &g_123}, {&l_10, (void*)0, &g_1341, &g_123, &g_123}, {&l_10, (void*)0, &g_1341, &g_123, &g_123}, {&l_10, (void*)0, &g_1341, &g_123, &g_123}}};
        int i, j, k;
        l_1548 ^= (safe_unary_minus_func_uint32_t_u(l_1302));
        if (((void*)0 == l_1221[4][1][3]))
        {
            const unsigned char l_1554 = 0xEAL;
            int *l_1563 = &l_9[2];
            if (l_1549)
                break;
            (*g_1306) ^= ((safe_lshift_func_uint16_t_u_u((l_1552 == ((*g_1196) = l_1553)), 8)) && l_1554);
            for (g_487 = (-15); (g_487 >= (-14)); g_487 = safe_add_func_int32_t_s_s(g_487, 7))
            {
                char l_1572 = 1L;
                for (g_1253 = 26; (g_1253 <= 0); g_1253 = safe_sub_func_uint8_t_u_u(g_1253, 7))
                {
                    unsigned short ** const *l_1561 = &g_865;
                    unsigned short ** const **l_1560 = &l_1561;
                    int l_1564 = 6L;
                    unsigned **l_1582[8][9] = {{&g_1386, &l_1581, &g_1386, &g_1386, &l_1581, &g_1386, (void*)0, &g_1386, &l_1581}, {&g_1386, &l_1581, &g_1386, &g_1386, &l_1581, &g_1386, (void*)0, &g_1386, &l_1581}, {&g_1386, &l_1581, &g_1386, &g_1386, &l_1581, &g_1386, (void*)0, &g_1386, &l_1581}, {&g_1386, &l_1581, &g_1386, &g_1386, &l_1581, &g_1386, (void*)0, &g_1386, &l_1581}, {&g_1386, &l_1581, &g_1386, &g_1386, &l_1581, &g_1386, (void*)0, &g_1386, &l_1581}, {&g_1386, &l_1581, &g_1386, &g_1386, &l_1581, &g_1386, (void*)0, &g_1386, &l_1581}, {&g_1386, &l_1581, &g_1386, &g_1386, &l_1581, &g_1386, (void*)0, &g_1386, &l_1581}, {&g_1386, &l_1581, &g_1386, &g_1386, &l_1581, &g_1386, (void*)0, &g_1386, &l_1581}};
                    int l_1583 = 0x44F6AE29L;
                    int i, j;
                    for (g_1158 = 1; (g_1158 <= 4); g_1158 += 1)
                    {
                        int i, j, k;
                        l_1559[2][3][1] = g_938[g_1158][(g_1158 + 1)][g_1158];
                        (*g_608) = l_1559[1][2][1];
                        (*g_608) = l_1563;
                        (*l_1563) = l_1564;
                    }
                    for (g_1144 = 0; (g_1144 <= (-17)); g_1144 = safe_sub_func_uint32_t_u_u(g_1144, 1))
                    {
                        unsigned short l_1567 = 0x1AFDL;
                        (*g_608) = l_1563;
                        if (l_1567)
                            continue;
                    }
                    (*g_1306) = (safe_sub_func_uint32_t_u_u((&g_1196 != (void*)0), ((*l_1563) = ((l_1572 != 0x52L) || ((**g_630) != (safe_add_func_int32_t_s_s(func_26((((safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((**g_82) = l_1564), (l_1187 != (&g_1340[0][1] != (g_1386 = l_1581))))), (*g_445))) || 4L) >= 0L), (*l_1563), (*g_631), l_1572, l_1583), 0L)))))));
                }
            }
        }
        else
        {
            unsigned l_1584[3];
            int i;
            for (i = 0; i < 3; i++)
                l_1584[i] = 2UL;
            (*g_1306) &= l_1584[1];
        }
        return l_1562[0][0][4];
    }
    l_10 ^= g_1585;
    return l_1562[0][2][1];
}







static int func_2(unsigned char p_3, unsigned p_4, unsigned p_5, short p_6, unsigned p_7)
{
    char l_1138 = 0xE1L;
    short *l_1139 = &g_121;
    const unsigned l_1140 = 4294967289UL;
    unsigned char l_1141 = 255UL;
    unsigned short *l_1142[8][5][4] = {{{&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}}, {{&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}}, {{&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}}, {{&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}}, {{&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}}, {{&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}}, {{&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}}, {{&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}, {&g_217, &g_415, &g_217, &g_415}}};
    int l_1143 = 0xF771D882L;
    int l_1145 = (-1L);
    int i, j, k;
    l_1145 = (((*g_445) = p_6) <= (((*g_398) |= (safe_lshift_func_int16_t_s_u(func_20((p_5 != (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(p_5, 6)), (l_1143 = ((safe_mod_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_u(p_5, 5)) | (0xE8L != ((safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(((((((safe_unary_minus_func_int32_t_s(p_3)) <= (l_1138 == ((*l_1139) = (0x0AL <= 7L)))) || l_1138) > 9L) >= l_1140) <= p_7), 3)), (***g_607))) >= 5L))) <= p_5), 0xF9159908L)) != l_1141))))), l_1141, g_1144, l_1140, l_1138), 1))) | p_4));
    return l_1141;
}







static short func_13(int p_14, unsigned char p_15)
{
    short l_1078 = 0x9D76L;
    int l_1083 = 0L;
    const char *l_1102[7] = {(void*)0, (void*)0, &g_183, (void*)0, (void*)0, &g_183, (void*)0};
    int i;
    (*g_608) = (*g_608);
    for (g_38 = 0; (g_38 <= 0); g_38 += 1)
    {
        unsigned char l_1070 = 0x2CL;
        int l_1079 = (-6L);
        int *l_1080[3];
        char *l_1105 = &g_183;
        int i;
        for (i = 0; i < 3; i++)
            l_1080[i] = &g_43;
        for (p_14 = 4; (p_14 >= 0); p_14 -= 1)
        {
            int i;
            if (g_113[g_38])
                break;
            l_1070 |= 0x2B03DC01L;
            for (g_117 = 1; (g_117 <= 4); g_117 += 1)
            {
                unsigned l_1077 = 0xD431EE31L;
                int l_1100 = 0x413E6AD3L;
                for (g_217 = 0; (g_217 <= 6); g_217 += 1)
                {
                    int i, j, k;
                    l_1083 ^= (safe_add_func_uint16_t_u_u(g_113[g_38], ((((l_1079 = (safe_div_func_int8_t_s_s(l_1077, l_1078))) > l_1078) | (g_113[g_38] == (func_63(l_1078, l_1080[0]) & (safe_lshift_func_int16_t_s_s((((**g_82) ^ p_15) > 0x6C8D024EL), 13))))) < 0xE6L)));
                    for (g_101 = 0; (g_101 <= 6); g_101 += 1)
                    {
                        unsigned short l_1091[9] = {2UL, 2UL, 0x07CBL, 2UL, 2UL, 0x07CBL, 2UL, 2UL, 0x07CBL};
                        short *l_1096 = &l_1078;
                        short *l_1097 = (void*)0;
                        short *l_1098[10] = {&g_96[0], (void*)0, &g_96[0], (void*)0, &g_96[0], (void*)0, &g_96[0], (void*)0, &g_96[0], (void*)0};
                        int l_1099 = 0x6B034CC2L;
                        int i;
                        (**g_241) ^= ((-9L) < (safe_div_func_uint16_t_u_u(p_14, 0xCFF6L)));
                        l_1100 |= (safe_unary_minus_func_uint32_t_u(((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(p_14, 3)), (p_14 >= p_14))) ^ func_20(l_1091[6], (**g_82), (*g_445), ((safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((p_15 == func_63((l_1099 = (+(g_96[1] = ((*l_1096) = p_14)))), &p_14)), (*g_445))), 65535UL)) > 0xE072L), (***g_607)))));
                        return p_14;
                    }
                    (**g_241) = p_14;
                    for (g_487 = 4; (g_487 >= 0); g_487 -= 1)
                    {
                        int i, j, k;
                        l_1083 = func_52((*g_82), l_1100, p_15, g_1101, l_1102[2]);
                        l_1083 = (-2L);
                        return l_1078;
                    }
                }
                l_1083 = (safe_lshift_func_int16_t_s_u(func_52(l_1105, (safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(p_14, 4)), (*g_842))), 5)), (*g_842), g_38, (*g_82)), 11));
            }
        }
        for (g_415 = 0; (g_415 <= 0); g_415 += 1)
        {
            return p_15;
        }
    }
    l_1083 = (safe_lshift_func_int8_t_s_u(((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(p_15, l_1083)), ((safe_div_func_uint8_t_u_u(0x73L, (((*g_398) &= 0UL) ^ p_15))) <= (*g_83)))) <= ((*g_795) == (*g_795))), ((*g_445) = l_1078)));
    return (*g_631);
}







static short func_20(int p_21, char p_22, unsigned char p_23, unsigned short p_24, int p_25)
{
    int l_845 = 0x068CB68DL;
    unsigned short *l_862 = (void*)0;
    int l_896 = 0xE6739ED8L;
    char l_913 = 0xC8L;
    int *l_917 = &g_170;
    int *l_1013 = &g_123;
    short l_1038 = 0x5A48L;
    unsigned short l_1063 = 0x02D3L;
    for (g_121 = 0; (g_121 <= 6); g_121 += 1)
    {
        int l_830 = 0x6DF96B79L;
        unsigned l_833[8][1][7] = {{{0x1262C82BL, 0xF40A0EABL, 0x50238E10L, 4294967295UL, 1UL, 8UL, 1UL}}, {{0x1262C82BL, 0xF40A0EABL, 0x50238E10L, 4294967295UL, 1UL, 8UL, 1UL}}, {{0x1262C82BL, 0xF40A0EABL, 0x50238E10L, 4294967295UL, 1UL, 8UL, 1UL}}, {{0x1262C82BL, 0xF40A0EABL, 0x50238E10L, 4294967295UL, 1UL, 8UL, 1UL}}, {{0x1262C82BL, 0xF40A0EABL, 0x50238E10L, 4294967295UL, 1UL, 8UL, 1UL}}, {{0x1262C82BL, 0xF40A0EABL, 0x50238E10L, 4294967295UL, 1UL, 8UL, 1UL}}, {{0x1262C82BL, 0xF40A0EABL, 0x50238E10L, 4294967295UL, 1UL, 8UL, 1UL}}, {{0x1262C82BL, 0xF40A0EABL, 0x50238E10L, 4294967295UL, 1UL, 8UL, 1UL}}};
        const char *l_844[10][7] = {{(void*)0, &g_38, &g_183, (void*)0, &g_38, &g_183, &g_38}, {(void*)0, &g_38, &g_183, (void*)0, &g_38, &g_183, &g_38}, {(void*)0, &g_38, &g_183, (void*)0, &g_38, &g_183, &g_38}, {(void*)0, &g_38, &g_183, (void*)0, &g_38, &g_183, &g_38}, {(void*)0, &g_38, &g_183, (void*)0, &g_38, &g_183, &g_38}, {(void*)0, &g_38, &g_183, (void*)0, &g_38, &g_183, &g_38}, {(void*)0, &g_38, &g_183, (void*)0, &g_38, &g_183, &g_38}, {(void*)0, &g_38, &g_183, (void*)0, &g_38, &g_183, &g_38}, {(void*)0, &g_38, &g_183, (void*)0, &g_38, &g_183, &g_38}, {(void*)0, &g_38, &g_183, (void*)0, &g_38, &g_183, &g_38}};
        int l_846 = 1L;
        char *l_850 = &g_183;
        unsigned short **l_863[6][10] = {{&l_862, &l_862, (void*)0, (void*)0, (void*)0, &l_862, &l_862, &l_862, &l_862, &l_862}, {&l_862, &l_862, (void*)0, (void*)0, (void*)0, &l_862, &l_862, &l_862, &l_862, &l_862}, {&l_862, &l_862, (void*)0, (void*)0, (void*)0, &l_862, &l_862, &l_862, &l_862, &l_862}, {&l_862, &l_862, (void*)0, (void*)0, (void*)0, &l_862, &l_862, &l_862, &l_862, &l_862}, {&l_862, &l_862, (void*)0, (void*)0, (void*)0, &l_862, &l_862, &l_862, &l_862, &l_862}, {&l_862, &l_862, (void*)0, (void*)0, (void*)0, &l_862, &l_862, &l_862, &l_862, &l_862}};
        int **l_901 = &g_672[5];
        unsigned short **l_937[8][4][1] = {{{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}};
        int l_1066[2][4] = {{0xB84AC81CL, 0xB84AC81CL, (-6L), 0xB84AC81CL}, {0xB84AC81CL, 0xB84AC81CL, (-6L), 0xB84AC81CL}};
        int i, j, k;
    }
    return p_22;
}







static unsigned char func_26(unsigned short p_27, int p_28, short p_29, unsigned p_30, unsigned p_31)
{
    char *l_37 = &g_38;
    int ** const *l_485 = (void*)0;
    int *l_486 = &g_487;
    char l_498 = 0x07L;
    char l_582 = 1L;
    unsigned char l_647 = 255UL;
    const int l_666 = 0x0A2D795BL;
    unsigned ** const *l_733 = (void*)0;
    const unsigned char l_742 = 0x37L;
    return (*l_486);
}







static char func_34(char p_35, const short p_36)
{
    char l_39 = 1L;
    int *l_69 = &g_43;
    int **l_68[6];
    short *l_253 = &g_121;
    int *l_254 = (void*)0;
    char l_257[8][10] = {{2L, 2L, 3L, 2L, 2L, 3L, 2L, 2L, 3L, 2L}, {2L, 2L, 3L, 2L, 2L, 3L, 2L, 2L, 3L, 2L}, {2L, 2L, 3L, 2L, 2L, 3L, 2L, 2L, 3L, 2L}, {2L, 2L, 3L, 2L, 2L, 3L, 2L, 2L, 3L, 2L}, {2L, 2L, 3L, 2L, 2L, 3L, 2L, 2L, 3L, 2L}, {2L, 2L, 3L, 2L, 2L, 3L, 2L, 2L, 3L, 2L}, {2L, 2L, 3L, 2L, 2L, 3L, 2L, 2L, 3L, 2L}, {2L, 2L, 3L, 2L, 2L, 3L, 2L, 2L, 3L, 2L}};
    char ** const l_309 = &g_83;
    unsigned char *l_324 = &g_98;
    int *l_334 = &g_170;
    int i, j;
    for (i = 0; i < 6; i++)
        l_68[i] = &l_69;
    if (l_39)
    {
        int **l_40 = (void*)0;
        int *l_42 = &g_43;
        int **l_41 = &l_42;
        (*l_41) = (void*)0;
    }
    else
    {
        int *l_122 = &g_123;
        int l_127 = 1L;
        for (g_43 = 0; (g_43 == 8); g_43 = safe_add_func_int8_t_s_s(g_43, 3))
        {
            int l_60 = 0xB72B416CL;
            unsigned *l_149 = (void*)0;
            unsigned *l_150 = (void*)0;
            unsigned *l_151 = &g_152;
            int **l_230 = &l_122;
            int l_231 = (-1L);
            int l_244 = 0xBB3D9D41L;
        }
        return p_35;
    }
    if (l_39)
        goto lbl_248;
lbl_248:
    (*l_69) |= (*g_126);
    if ((safe_mul_func_uint16_t_u_u((g_217 &= (~((void*)0 == &p_35))), ((safe_div_func_uint8_t_u_u((p_36 < (g_38 | (func_63(((*l_253) = 0x44DBL), l_254) <= p_35))), (safe_lshift_func_uint16_t_u_s(l_257[6][1], g_113[3])))) == p_35))))
    {
        unsigned char l_258[6] = {0x34L, 0x34L, 0x3BL, 0x34L, 0x34L, 0x3BL};
        unsigned *l_261[9];
        int l_272[7] = {(-1L), (-1L), 0x8A073416L, (-1L), (-1L), 0x8A073416L, (-1L)};
        int *l_274 = &l_272[0];
        unsigned short l_280 = 1UL;
        int l_312 = 0x382C0D10L;
        int i;
        for (i = 0; i < 9; i++)
            l_261[i] = &g_117;
        (*l_69) = ((p_35 ^ ((((9L ^ (l_258[3] < (safe_add_func_uint32_t_u_u((g_117 = g_113[6]), (*l_69))))) | (!g_183)) || (l_261[6] == (void*)0)) >= ((g_113[2] ^ 1UL) <= 65534UL))) < g_96[0]);
        for (g_170 = 5; (g_170 >= 2); g_170 -= 1)
        {
            int *l_263[3][9][3] = {{{&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}}, {{&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}}, {{&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}}};
            int *l_266 = &g_43;
            char **l_287[10] = {&g_83, &g_83, &g_83, &g_83, &g_83, &g_83, &g_83, &g_83, &g_83, &g_83};
            int i, j, k;
            for (g_152 = 1; (g_152 <= 7); g_152 += 1)
            {
                int *l_262 = &g_123;
                unsigned *l_271 = (void*)0;
                int i, j;
                if (l_257[(g_170 + 2)][(g_152 + 1)])
                    break;
                l_262 = l_261[6];
                l_262 = l_263[0][4][2];
                if (((safe_mul_func_uint8_t_u_u(0x06L, g_96[0])) ^ (((func_63(g_43, l_266) & (p_35 & l_258[3])) >= (((safe_div_func_uint16_t_u_u(((((**g_82) && (safe_add_func_int32_t_s_s((((((l_271 != l_262) & l_258[3]) != (*g_83)) <= 4294967295UL) <= p_36), 0x01C63E1AL))) >= 0x9DD2A3B7L) || (*g_83)), p_35)) >= 0x1482DDD6L) && 1L)) >= 1UL)))
                {
                    int *l_273 = &g_43;
                    l_272[4] ^= l_258[2];
                    l_274 = l_273;
                    return (**g_82);
                }
                else
                {
                    unsigned char *l_279 = &l_258[3];
                    unsigned char *l_285 = &g_98;
                    unsigned short l_291 = 0x3274L;
                    for (g_43 = 2; (g_43 >= 0); g_43 -= 1)
                    {
                        int i;
                        return g_96[g_43];
                    }
                    if ((safe_rshift_func_int8_t_s_s(((((*l_274) = ((safe_rshift_func_int8_t_s_u(0x3EL, 3)) >= ((*l_279) = (p_36 || 4294967295UL)))) <= ((g_217 && (l_280 == p_36)) <= (~(safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((((*l_285) = (*l_69)) != ((safe_unary_minus_func_uint16_t_u(p_35)) < (**g_82))), (**g_82))), p_35))))) || 0xC0E6L), (**g_82))))
                    {
                        char ***l_288 = &l_287[8];
                        (*l_288) = l_287[8];
                        if (p_36)
                            continue;
                        l_291 &= (safe_add_func_uint32_t_u_u(g_113[0], 1L));
                    }
                    else
                    {
                        const char l_302 = 0x84L;
                        (*l_274) = (safe_sub_func_int8_t_s_s((p_36 == (((((+(safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(0xA8L, p_36)), 0))) > (safe_rshift_func_uint8_t_u_u(g_43, (0L < (((g_96[0] |= l_291) < g_121) >= (safe_lshift_func_int16_t_s_s((((**g_82) = p_35) ^ l_302), 13))))))) <= l_291) & g_8) || p_35)), p_35));
                    }
                }
            }
        }
        if (((*l_69) ^= 1L))
        {
            for (g_117 = 0; (g_117 <= 2); g_117 += 1)
            {
                int i;
                (*l_274) &= g_96[g_117];
                return p_35;
            }
        }
        else
        {
            unsigned short *l_310 = &g_217;
            int *l_311 = &g_170;
            if ((l_312 ^= (safe_div_func_int32_t_s_s((((((*l_311) = (((safe_rshift_func_int8_t_s_s((g_43 && func_52((*g_82), (safe_rshift_func_uint16_t_u_u(((*l_310) |= ((l_309 == (void*)0) < p_35)), (0x1C57L ^ ((((*l_274) > 0xFFD95556L) >= func_63(p_36, l_311)) < g_38)))), (*l_311), g_113[7], (*l_309))), p_35)) <= 65535UL) < p_35)) && p_36) && (*l_69)) ^ p_36), (*l_274)))))
            {
                for (g_183 = 0; (g_183 == 19); g_183 = safe_add_func_uint32_t_u_u(g_183, 8))
                {
                    (*l_274) |= 0L;
                }
            }
            else
            {
                int *l_319 = &g_123;
                unsigned char *l_323 = &l_258[1];
                unsigned char **l_322 = &l_323;
                for (g_183 = 0; (g_183 <= (-24)); g_183--)
                {
                    for (l_312 = 0; (l_312 != 16); l_312 = safe_add_func_int32_t_s_s(l_312, 4))
                    {
                        l_311 = l_319;
                        return p_36;
                    }
                    return (*l_319);
                }
                (*l_274) |= (safe_mod_func_int16_t_s_s((4294967294UL >= func_52(&p_35, (p_35 <= ((**g_82) | (((*l_322) = (void*)0) == l_324))), (**g_82), g_170, (*g_82))), p_36));
            }
        }
        return (*g_83);
    }
    else
    {
        unsigned l_325 = 8UL;
        const int *l_338 = &g_43;
        int l_339[7][7] = {{0x6C6893DEL, 0xF697AC61L, (-1L), 0xF697AC61L, 0x6C6893DEL, (-1L), 0x9E506761L}, {0x6C6893DEL, 0xF697AC61L, (-1L), 0xF697AC61L, 0x6C6893DEL, (-1L), 0x9E506761L}, {0x6C6893DEL, 0xF697AC61L, (-1L), 0xF697AC61L, 0x6C6893DEL, (-1L), 0x9E506761L}, {0x6C6893DEL, 0xF697AC61L, (-1L), 0xF697AC61L, 0x6C6893DEL, (-1L), 0x9E506761L}, {0x6C6893DEL, 0xF697AC61L, (-1L), 0xF697AC61L, 0x6C6893DEL, (-1L), 0x9E506761L}, {0x6C6893DEL, 0xF697AC61L, (-1L), 0xF697AC61L, 0x6C6893DEL, (-1L), 0x9E506761L}, {0x6C6893DEL, 0xF697AC61L, (-1L), 0xF697AC61L, 0x6C6893DEL, (-1L), 0x9E506761L}};
        const char *l_416 = &g_183;
        int *l_426 = &l_339[3][1];
        int i, j;
        if ((l_325 = (p_35 == p_35)))
        {
            for (g_183 = 0; (g_183 != 28); g_183 = safe_add_func_uint8_t_u_u(g_183, 1))
            {
                unsigned l_335 = 0UL;
                if (((*l_69) = 7L))
                {
                    (*l_69) |= l_325;
                }
                else
                {
                    unsigned *l_332 = (void*)0;
                    unsigned *l_333 = &g_152;
                    l_335 |= (safe_lshift_func_int8_t_s_s((**g_82), func_63(((*l_253) = (safe_rshift_func_int16_t_s_s((((void*)0 == &g_83) < (g_96[2] == ((*l_333) = g_101))), (!(-1L))))), l_334)));
                    for (g_117 = 1; (g_117 <= 5); g_117 += 1)
                    {
                        const int *l_336 = (void*)0;
                        const int **l_337 = &l_336;
                        int i;
                        l_339[6][0] |= (((*l_337) = l_336) == l_338);
                        (*l_69) |= func_63(g_123, &l_339[6][0]);
                    }
                }
            }
        }
        else
        {
            short l_340 = (-8L);
            int l_341 = 0x48D2584CL;
            int *l_406 = (void*)0;
            const int **l_413 = &l_338;
            const int ***l_412 = &l_413;
            unsigned short *l_414 = &g_415;
            char **l_420 = &g_83;
            const char *l_422 = &g_183;
            int **l_440 = &l_254;
            if ((&g_83 != (void*)0))
            {
                int *l_357[6] = {(void*)0, &g_170, (void*)0, &g_170, (void*)0, &g_170};
                int i;
                l_341 = l_340;
                for (g_123 = 28; (g_123 >= 29); g_123 = safe_add_func_int8_t_s_s(g_123, 1))
                {
                    unsigned l_353 = 0x198C7FE5L;
                    int *l_356 = &g_123;
                    for (g_101 = (-19); (g_101 <= 23); g_101++)
                    {
                        int l_350 = 1L;
                        (*l_334) = 0xACA592DEL;
                        (*l_69) |= ((safe_lshift_func_int8_t_s_s((safe_div_func_int16_t_s_s(0xB0F2L, g_170)), 4)) != l_340);
                        (*l_69) ^= l_350;
                        (*l_334) |= ((safe_sub_func_int32_t_s_s((*l_338), l_353)) == (&g_223[7][0][6] != (void*)0));
                    }
                    (*l_69) &= func_63((safe_rshift_func_uint8_t_u_s(l_353, 2)), l_356);
                }
                l_357[5] = (void*)0;
                if ((safe_sub_func_int16_t_s_s(0x197EL, (safe_mul_func_int8_t_s_s((l_340 | (safe_add_func_int8_t_s_s((**g_82), (g_98 & ((*l_69) = (safe_lshift_func_int8_t_s_s((~(**g_82)), 7))))))), p_35)))))
                {
                    unsigned *l_374 = &g_101;
                    for (g_43 = 0; (g_43 < 27); g_43 = safe_add_func_int16_t_s_s(g_43, 6))
                    {
                        short l_368 = 0x34D8L;
                        int l_369 = 0L;
                        l_339[1][5] &= (l_369 = (l_368 = (0x67CCL && 0xC017L)));
                    }
                    (*l_334) = (l_339[6][0] = (g_113[7] <= ((safe_add_func_uint32_t_u_u(((*l_374) |= (safe_lshift_func_uint8_t_u_u(253UL, 5))), (l_341 &= p_36))) | (safe_div_func_int16_t_s_s((p_35 > (safe_lshift_func_uint8_t_u_u(0x8EL, (safe_mod_func_int16_t_s_s(((void*)0 != &g_229[6][0]), (((g_117 > p_36) || g_113[2]) & 0xA36FL)))))), p_35)))));
                }
                else
                {
                    int **l_381 = (void*)0;
                    int **l_382[3][7][2] = {{{&l_357[5], (void*)0}, {&l_357[5], (void*)0}, {&l_357[5], (void*)0}, {&l_357[5], (void*)0}, {&l_357[5], (void*)0}, {&l_357[5], (void*)0}, {&l_357[5], (void*)0}}, {{&l_357[5], (void*)0}, {&l_357[5], (void*)0}, {&l_357[5], (void*)0}, {&l_357[5], (void*)0}, {&l_357[5], (void*)0}, {&l_357[5], (void*)0}, {&l_357[5], (void*)0}}, {{&l_357[5], (void*)0}, {&l_357[5], (void*)0}, {&l_357[5], (void*)0}, {&l_357[5], (void*)0}, {&l_357[5], (void*)0}, {&l_357[5], (void*)0}, {&l_357[5], (void*)0}}};
                    int **l_383[9] = {&l_334, &l_254, &l_334, &l_254, &l_334, &l_254, &l_334, &l_254, &l_334};
                    int **l_384 = (void*)0;
                    int **l_385 = &l_357[5];
                    unsigned l_388[1][8];
                    unsigned **l_393 = (void*)0;
                    unsigned *l_395 = &g_117;
                    unsigned **l_394 = &l_395;
                    unsigned *l_397 = &g_152;
                    unsigned **l_396[6][2] = {{&l_397, &l_397}, {&l_397, &l_397}, {&l_397, &l_397}, {&l_397, &l_397}, {&l_397, &l_397}, {&l_397, &l_397}};
                    char *l_399 = &l_39;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 8; j++)
                            l_388[i][j] = 1UL;
                    }
                }
            }
            else
            {
                int *l_409 = &l_339[1][1];
                l_406 = &l_339[6][0];
                for (g_38 = 0; (g_38 != 6); ++g_38)
                {
                    for (g_98 = 0; (g_98 <= 7); g_98 += 1)
                    {
                        int i, j;
                        if (l_257[g_98][(g_98 + 2)])
                            break;
                        l_338 = l_409;
                    }
                }
            }
            if ((func_52(&p_35, p_35, (**g_82), (((l_339[3][1] = (g_101 & ((*l_414) = (g_217 &= (l_412 == &l_413))))) && 8UL) < ((((*l_69) = ((*g_82) == (void*)0)) == p_36) > g_101)), l_416) > (*g_398)))
            {
                int *l_425 = &l_339[2][5];
                int l_431 = (-8L);
                short *l_435 = &g_113[2];
                for (g_98 = 6; (g_98 != 58); g_98 = safe_add_func_int32_t_s_s(g_98, 6))
                {
                    for (g_43 = 0; (g_43 >= 0); g_43 -= 1)
                    {
                        unsigned char l_419 = 0x23L;
                        char ***l_421 = &l_420;
                        int i, j;
                        l_339[(g_43 + 1)][(g_43 + 4)] |= ((func_63(((*g_398) || func_52(&p_35, ((p_36 ^ g_43) && l_419), (**g_82), (&g_83 != ((*l_421) = l_420)), l_422)), &l_339[2][0]) | p_36) ^ p_36);
                        l_341 &= ((safe_lshift_func_uint8_t_u_s((g_121 <= (func_52((*g_82), p_35, p_35, p_35, (*l_309)) || 0x42L)), (**g_82))) | l_339[(g_43 + 1)][(g_43 + 4)]);
                    }
                }
                (*l_413) = (l_426 = l_425);
                for (g_101 = 13; (g_101 != 36); g_101 = safe_add_func_int16_t_s_s(g_101, 6))
                {
                    for (g_170 = 0; (g_170 == (-8)); g_170 = safe_sub_func_uint32_t_u_u(g_170, 1))
                    {
                        (*l_426) = (func_63(p_36, (l_425 = &l_341)) ^ l_431);
                        (*l_426) |= ((*g_126) = p_36);
                        (*l_413) = &l_339[1][0];
                        (**l_412) = &l_339[6][0];
                    }
                }
                if (p_35)
                {
                    char **l_432[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_432[i] = &g_83;
                    l_432[1] = &g_83;
                    (*l_413) = &l_431;
                }
                else
                {
                    short **l_436 = &l_435;
                    (*l_334) &= (safe_mul_func_uint16_t_u_u((((*l_436) = l_435) != &g_96[2]), ((*l_414) = 0UL)));
                }
            }
            else
            {
                for (g_121 = 0; (g_121 <= 13); g_121++)
                {
                    int *l_439 = &l_341;
                    (*l_413) = l_439;
                    (*l_426) = p_35;
                }
            }
            (*l_440) = func_46(p_35);
        }
        for (g_183 = 0; (g_183 <= (-29)); g_183 = safe_sub_func_int16_t_s_s(g_183, 3))
        {
            int *l_446 = &g_43;
            unsigned short l_447[9] = {1UL, 0x9F45L, 1UL, 0x9F45L, 1UL, 0x9F45L, 1UL, 0x9F45L, 1UL};
            int i;
            (*l_69) = 7L;
            if ((safe_mul_func_uint8_t_u_u(func_52(&p_35, (((void*)0 != &g_98) && (l_416 == (g_445 = &g_98))), (p_36 != (-3L)), func_63((g_183 | 0x1659L), l_446), (*l_309)), g_183)))
            {
                char *l_457 = &l_257[6][1];
                char **l_456 = &l_457;
                int l_458 = (-1L);
                unsigned short *l_459 = &g_415;
                unsigned char *l_460 = (void*)0;
                (*l_69) &= (l_447[8] > (safe_mod_func_uint16_t_u_u(1UL, ((*l_253) = ((g_461 &= (safe_sub_func_uint16_t_u_u(((*l_459) = ((((((*l_324) = p_36) | (safe_div_func_uint32_t_u_u(((((*g_82) == ((*l_456) = (*g_82))) && (**g_82)) <= ((p_35 <= (func_63(((*l_253) = g_113[0]), &l_339[6][0]) < (*g_398))) <= (**g_82))), 0x93F7766EL))) ^ (*l_426)) < l_458) | 0x8FDDDCC9L)), g_101))) | l_458)))));
            }
            else
            {
                char l_462 = 0xA6L;
                if ((*l_69))
                {
                    char l_465 = 4L;
                    if (l_462)
                        break;
                    for (g_123 = 0; (g_123 >= (-18)); g_123--)
                    {
                        if ((*l_69))
                            break;
                        l_465 = (0xD40F7638L && 4UL);
                        (*l_446) = (*l_334);
                    }
                }
                else
                {
                    int **l_466[4][6][1] = {{{&l_69}, {&l_69}, {&l_69}, {&l_69}, {&l_69}, {&l_69}}, {{&l_69}, {&l_69}, {&l_69}, {&l_69}, {&l_69}, {&l_69}}, {{&l_69}, {&l_69}, {&l_69}, {&l_69}, {&l_69}, {&l_69}}, {{&l_69}, {&l_69}, {&l_69}, {&l_69}, {&l_69}, {&l_69}}};
                    int **l_467 = &l_334;
                    int i, j, k;
                    (*l_467) = (*g_241);
                    return p_35;
                }
                (*l_426) = (((*l_334) ^= 0xEFL) >= (((~p_36) == (((*l_69) = (*l_446)) ^ ((safe_rshift_func_int8_t_s_s(((0x4791L && ((*l_253) = (safe_add_func_int8_t_s_s(((p_35 | (safe_div_func_int8_t_s_s((**g_82), (safe_mod_func_uint16_t_u_u((*l_426), p_35))))) && (safe_unary_minus_func_int32_t_s((((safe_sub_func_uint8_t_u_u(6UL, (*g_445))) & p_35) < l_462)))), 0x67L)))) && 0x9763L), (**g_82))) >= p_36))) > 0UL));
                for (g_98 = 0; (g_98 == 24); g_98++)
                {
                    short l_483 = 0xBBBDL;
                    unsigned short *l_484[6] = {&l_447[8], &l_447[8], &g_415, &l_447[8], &l_447[8], &g_415};
                    int i;
                    if ((safe_rshift_func_uint8_t_u_s(((l_483 == (p_35 | (p_36 && ((*l_426) |= (*l_446))))) & p_35), l_483)))
                    {
                        if (p_36)
                            break;
                    }
                    else
                    {
                        return (*l_69);
                    }
                }
            }
        }
    }
    return p_36;
}







static int * const func_46(int p_47)
{
    int **l_161 = &g_126;
    int l_162[7] = {0x683C3F70L, 0x3EB6B183L, 0x683C3F70L, 0x3EB6B183L, 0x683C3F70L, 0x3EB6B183L, 0x683C3F70L};
    int *l_167 = &l_162[6];
    short *l_168 = &g_113[2];
    unsigned char *l_169 = &g_98;
    unsigned l_185 = 0x17211454L;
    char ***l_220 = &g_82;
    int l_227 = 6L;
    int i;
    g_170 |= (safe_add_func_uint16_t_u_u(g_123, ((((*l_169) = (((*l_168) |= (safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((func_63((safe_rshift_func_uint16_t_u_s(g_121, l_162[5])), (*l_161)) && ((safe_lshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u(0x78DB7E04L, ((*l_167) &= g_96[0]))), ((*g_83) = p_47))) | p_47)), g_152)), p_47))) != 0x7AD4L)) >= p_47) ^ (-7L))));
    (*l_161) = (*l_161);
    for (g_101 = 1; (g_101 <= 7); g_101 += 1)
    {
        char *l_172[2];
        char **l_173 = (void*)0;
        char **l_174[3][2] = {{&l_172[0], &l_172[0]}, {&l_172[0], &l_172[0]}, {&l_172[0], &l_172[0]}};
        unsigned *l_184 = &g_117;
        int l_225 = 0x67DCBB3CL;
        int * const l_228 = &g_43;
        int i, j;
        for (i = 0; i < 2; i++)
            l_172[i] = &g_38;
        (*l_167) = 0xD34E5B83L;
        for (g_121 = 0; (g_121 <= 2); g_121 += 1)
        {
            int *l_171 = &l_162[5];
            (*l_161) = l_171;
        }
        if (func_52((g_83 = l_172[0]), g_113[g_101], (safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(func_63(g_152, &g_170), (g_123 & (safe_add_func_int32_t_s_s(g_113[g_101], ((safe_sub_func_int8_t_s_s((l_185 = ((g_183 = g_113[g_101]) <= ((*l_184) &= p_47))), 0x4EL)) | 0x99L)))))), g_96[0])), g_113[6], l_169))
        {
            if (((g_101 | p_47) > (l_172[1] != (void*)0)))
            {
                unsigned l_186 = 4294967295UL;
                if (l_186)
                    break;
            }
            else
            {
                unsigned l_193 = 4294967295UL;
                int *l_202 = &g_170;
                (*l_202) &= ((safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s(((((((safe_mod_func_int16_t_s_s(l_193, l_193)) & 0xF6L) < (l_193 ^ p_47)) & (0L || p_47)) == (safe_rshift_func_uint8_t_u_u(func_63((safe_rshift_func_int16_t_s_u(((safe_add_func_uint16_t_u_u(p_47, (safe_rshift_func_uint16_t_u_s(p_47, g_113[2])))) | g_96[0]), 2)), l_202), 0))) >= p_47), 0x9DL)), 0x927BL)) >= 0x4385FFE7L);
                return l_184;
            }
            return &g_170;
        }
        else
        {
            unsigned l_213[2];
            unsigned short *l_216 = &g_217;
            int ** const l_224 = &l_167;
            int i;
            for (i = 0; i < 2; i++)
                l_213[i] = 0x2019615FL;
            if ((safe_rshift_func_int16_t_s_s((*l_167), (safe_mul_func_uint16_t_u_u(func_63(((safe_mul_func_int8_t_s_s((*l_167), g_96[1])) ^ (safe_mod_func_uint32_t_u_u((*l_167), (safe_sub_func_uint16_t_u_u(((*l_216) &= (l_213[1] > (safe_sub_func_int32_t_s_s(p_47, (-6L))))), (safe_mul_func_uint16_t_u_u((&g_82 != (l_220 = &g_82)), 65526UL))))))), (*l_161)), 65535UL)))))
            {
                int *l_226[10][3] = {{&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}, {&g_43, &g_123, &g_123}};
                int i, j;
                l_227 ^= func_63(((**l_224) &= (p_47 | (safe_lshift_func_int16_t_s_u((g_121 = (((((g_223[7][0][6] = &g_126) != l_224) == p_47) == (l_225 = (0UL >= p_47))) == g_113[g_101])), 11)))), (*l_224));
            }
            else
            {
                (*l_161) = &l_225;
                if (p_47)
                    break;
            }
            (*g_126) = p_47;
        }
        return l_228;
    }
    return g_229[5][1];
}







static unsigned func_52(char * p_53, const int p_54, char p_55, int p_56, const char * p_57)
{
    unsigned short l_132 = 0x49D7L;
    int *l_133 = &g_123;
    int l_134 = (-1L);
    short *l_145 = (void*)0;
    short *l_146[2];
    int *l_147 = &l_134;
    int *l_148 = (void*)0;
    int i;
    for (i = 0; i < 2; i++)
        l_146[i] = &g_96[1];
    (*l_133) = (l_134 |= (safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((*g_83), func_63(func_63((func_63(p_56, (g_126 = &g_123)) && l_132), l_133), l_133))), p_55)));
    (*l_147) &= (((1UL <= 4L) & g_121) || (safe_rshift_func_int8_t_s_s(((*l_133) & (safe_lshift_func_uint16_t_u_s(((*l_133) ^ ((!(safe_mod_func_uint32_t_u_u(0xDB3D8346L, (safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(p_55, 7)), 0x3EA3L))))) != (g_113[2] = func_63(p_55, &g_43)))), g_98))), (*g_83))));
    g_126 = l_148;
    return g_38;
}







static const unsigned short func_63(short p_64, int * p_65)
{
    int *l_125 = &g_123;
    int **l_124[5];
    int i;
    for (i = 0; i < 5; i++)
        l_124[i] = &l_125;
    g_126 = &g_123;
    g_126 = p_65;
    return (*l_125);
}







static int func_66(int ** p_67)
{
    char *l_70 = &g_38;
    int l_71 = 0x863E8712L;
    int l_73 = 0xF2BBA2D3L;
    unsigned short l_109[9][10][1] = {{{0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}}, {{0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}}, {{0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}}, {{0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}}, {{0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}}, {{0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}}, {{0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}}, {{0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}}, {{0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}, {0x8E2DL}}};
    int i, j, k;
    if (((&g_38 != l_70) || l_71))
    {
        int l_72 = 1L;
        int l_86 = 0x0CA2CDF2L;
lbl_87:
        l_73 |= (l_72 && l_71);
        for (l_72 = 0; (l_72 <= 21); l_72 = safe_add_func_int16_t_s_s(l_72, 2))
        {
            int *l_76 = (void*)0;
            int *l_77[9] = {&g_43, &l_71, &g_43, &l_71, &g_43, &l_71, &g_43, &l_71, &g_43};
            char **l_79[1];
            char ***l_78 = &l_79[0];
            int i;
            for (i = 0; i < 1; i++)
                l_79[i] = &l_70;
            l_71 = (**p_67);
            (*l_78) = &l_70;
            (*p_67) = &l_73;
            for (l_71 = 11; (l_71 < (-23)); l_71--)
            {
                char l_84[4][1] = {{(-3L)}, {(-3L)}, {(-3L)}, {(-3L)}};
                char l_85[7];
                int i, j;
                for (i = 0; i < 7; i++)
                    l_85[i] = 1L;
                for (l_73 = 8; (l_73 >= 0); l_73 -= 1)
                {
                    int i;
                    (*l_78) = (g_82 = &l_70);
                    l_84[0][0] = 8L;
                    return l_85[0];
                }
                if (g_38)
                    continue;
                l_86 = g_38;
            }
        }
        if (l_72)
            goto lbl_87;
    }
    else
    {
        int l_91 = 0xD7A89A43L;
        short *l_94 = (void*)0;
        short *l_95 = &g_96[0];
        unsigned char *l_97[5][1][7] = {{{(void*)0, &g_98, &g_98, (void*)0, &g_98, &g_98, &g_98}}, {{(void*)0, &g_98, &g_98, (void*)0, &g_98, &g_98, &g_98}}, {{(void*)0, &g_98, &g_98, (void*)0, &g_98, &g_98, &g_98}}, {{(void*)0, &g_98, &g_98, (void*)0, &g_98, &g_98, &g_98}}, {{(void*)0, &g_98, &g_98, (void*)0, &g_98, &g_98, &g_98}}};
        int l_99[6] = {0L, (-1L), 0L, (-1L), 0L, (-1L)};
        unsigned *l_100[5][3] = {{(void*)0, (void*)0, &g_101}, {(void*)0, (void*)0, &g_101}, {(void*)0, (void*)0, &g_101}, {(void*)0, (void*)0, &g_101}, {(void*)0, (void*)0, &g_101}};
        int i, j, k;
        if ((safe_unary_minus_func_uint32_t_u((g_101 = (0x790EL && ((safe_div_func_int8_t_s_s((((*l_70) |= l_91) == ((safe_mul_func_int32_t_s_s((**p_67), (l_91 != l_71))) >= l_91)), (l_99[4] = (l_71 | ((((*l_95) = l_73) | g_8) && g_8))))) & g_98))))))
        {
            (*p_67) = (void*)0;
        }
        else
        {
            for (l_91 = 0; (l_91 <= 5); l_91 += 1)
            {
                short l_103 = 0x3846L;
                for (g_98 = 0; (g_98 <= 2); g_98 += 1)
                {
                    int *l_102 = &l_73;
                    int i;
                    (*l_102) = (l_99[l_91] &= (-9L));
                    return l_99[(g_98 + 2)];
                }
                for (l_71 = 5; (l_71 >= 0); l_71 -= 1)
                {
                    for (l_73 = 0; (l_73 <= 2); l_73 += 1)
                    {
                        (*p_67) = &l_73;
                        return l_103;
                    }
                }
            }
        }
        for (l_73 = (-21); (l_73 != (-5)); l_73 = safe_add_func_int16_t_s_s(l_73, 3))
        {
            for (l_91 = 0; (l_91 <= 2); l_91 += 1)
            {
                int *l_106[8][6] = {{(void*)0, &l_71, &g_43, &l_71, (void*)0, (void*)0}, {(void*)0, &l_71, &g_43, &l_71, (void*)0, (void*)0}, {(void*)0, &l_71, &g_43, &l_71, (void*)0, (void*)0}, {(void*)0, &l_71, &g_43, &l_71, (void*)0, (void*)0}, {(void*)0, &l_71, &g_43, &l_71, (void*)0, (void*)0}, {(void*)0, &l_71, &g_43, &l_71, (void*)0, (void*)0}, {(void*)0, &l_71, &g_43, &l_71, (void*)0, (void*)0}, {(void*)0, &l_71, &g_43, &l_71, (void*)0, (void*)0}};
                unsigned char *l_112 = &g_98;
                int i, j;
                l_106[1][3] = l_100[(l_91 + 2)][l_91];
                for (g_98 = (-23); (g_98 < 9); g_98 = safe_add_func_int32_t_s_s(g_98, 4))
                {
                    unsigned char *l_110 = &g_98;
                    unsigned char **l_111 = &l_97[0][0][4];
                    int *l_116[6][8] = {{&l_99[4], (void*)0, &l_99[4], (void*)0, &l_99[4], (void*)0, &l_99[4], (void*)0}, {&l_99[4], (void*)0, &l_99[4], (void*)0, &l_99[4], (void*)0, &l_99[4], (void*)0}, {&l_99[4], (void*)0, &l_99[4], (void*)0, &l_99[4], (void*)0, &l_99[4], (void*)0}, {&l_99[4], (void*)0, &l_99[4], (void*)0, &l_99[4], (void*)0, &l_99[4], (void*)0}, {&l_99[4], (void*)0, &l_99[4], (void*)0, &l_99[4], (void*)0, &l_99[4], (void*)0}, {&l_99[4], (void*)0, &l_99[4], (void*)0, &l_99[4], (void*)0, &l_99[4], (void*)0}};
                    int i, j;
                    l_99[4] &= (g_113[2] |= ((l_109[4][5][0] && (((*l_111) = l_110) != l_112)) == g_98));
                    for (g_101 = (-26); (g_101 == 30); g_101 = safe_add_func_int32_t_s_s(g_101, 8))
                    {
                        (*p_67) = l_116[4][0];
                        g_117 = g_101;
                        if (g_43)
                            continue;
                    }
                    for (l_71 = (-2); (l_71 >= (-2)); ++l_71)
                    {
                        const int l_120 = 0L;
                        (*p_67) = (void*)0;
                        if (g_8)
                            continue;
                        if (l_120)
                            break;
                        (*p_67) = &l_99[5];
                    }
                }
                g_121 &= l_99[0];
            }
            (*p_67) = (*p_67);
        }
        (*p_67) = &g_43;
        return g_121;
    }
    return g_101;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_96[i], "g_96[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_113[i], "g_113[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    transparent_crc(g_415, "g_415", print_hash_value);
    transparent_crc(g_461, "g_461", print_hash_value);
    transparent_crc(g_487, "g_487", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_621[i], "g_621[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_657[i][j][k], "g_657[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_776[i], "g_776[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_855, "g_855", print_hash_value);
    transparent_crc(g_924, "g_924", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_994[i], "g_994[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1101, "g_1101", print_hash_value);
    transparent_crc(g_1144, "g_1144", print_hash_value);
    transparent_crc(g_1149, "g_1149", print_hash_value);
    transparent_crc(g_1158, "g_1158", print_hash_value);
    transparent_crc(g_1253, "g_1253", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1340[i][j], "g_1340[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1341, "g_1341", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_1360[i][j][k], "g_1360[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1439, "g_1439", print_hash_value);
    transparent_crc(g_1585, "g_1585", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
