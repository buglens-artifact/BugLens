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



static int g_2[8] = {0x081C2900L, (-1L), 0x081C2900L, (-1L), 0x081C2900L, (-1L), 0x081C2900L, (-1L)};
static int g_84 = 0xF517126BL;
static int * volatile g_83 = &g_84;
static int g_143[5][6] = {{0x71FA290EL, 0x7AF9F913L, 0x6E965D02L, 0x7AF9F913L, 0x71FA290EL, 0xD0F49ACEL}, {0x71FA290EL, 0x7AF9F913L, 0x6E965D02L, 0x7AF9F913L, 0x71FA290EL, 0xD0F49ACEL}, {0x71FA290EL, 0x7AF9F913L, 0x6E965D02L, 0x7AF9F913L, 0x71FA290EL, 0xD0F49ACEL}, {0x71FA290EL, 0x7AF9F913L, 0x6E965D02L, 0x7AF9F913L, 0x71FA290EL, 0xD0F49ACEL}, {0x71FA290EL, 0x7AF9F913L, 0x6E965D02L, 0x7AF9F913L, 0x71FA290EL, 0xD0F49ACEL}};
static int * volatile g_142 = &g_143[0][2];
static int g_176 = (-1L);
static int * volatile g_175 = &g_176;
static unsigned g_198 = 0x86E61B7FL;
static volatile int g_203[10] = {0xADAAD329L, 1L, 0xADAAD329L, 1L, 0xADAAD329L, 1L, 0xADAAD329L, 1L, 0xADAAD329L, 1L};
static int *g_216 = &g_2[7];
static int * volatile *g_215 = &g_216;
static unsigned short g_277[10][7] = {{0xD19FL, 0xAEA9L, 6UL, 0xE3DFL, 0xD19FL, 0UL, 0x3EE1L}, {0xD19FL, 0xAEA9L, 6UL, 0xE3DFL, 0xD19FL, 0UL, 0x3EE1L}, {0xD19FL, 0xAEA9L, 6UL, 0xE3DFL, 0xD19FL, 0UL, 0x3EE1L}, {0xD19FL, 0xAEA9L, 6UL, 0xE3DFL, 0xD19FL, 0UL, 0x3EE1L}, {0xD19FL, 0xAEA9L, 6UL, 0xE3DFL, 0xD19FL, 0UL, 0x3EE1L}, {0xD19FL, 0xAEA9L, 6UL, 0xE3DFL, 0xD19FL, 0UL, 0x3EE1L}, {0xD19FL, 0xAEA9L, 6UL, 0xE3DFL, 0xD19FL, 0UL, 0x3EE1L}, {0xD19FL, 0xAEA9L, 6UL, 0xE3DFL, 0xD19FL, 0UL, 0x3EE1L}, {0xD19FL, 0xAEA9L, 6UL, 0xE3DFL, 0xD19FL, 0UL, 0x3EE1L}, {0xD19FL, 0xAEA9L, 6UL, 0xE3DFL, 0xD19FL, 0UL, 0x3EE1L}};
static int g_290[2] = {0xB2CE5E1FL, 0xB2CE5E1FL};
static int * volatile g_367 = &g_143[0][2];
static int * volatile g_379 = &g_84;
static int * volatile g_513[6][2][1] = {{{&g_290[0]}, {&g_290[0]}}, {{&g_290[0]}, {&g_290[0]}}, {{&g_290[0]}, {&g_290[0]}}, {{&g_290[0]}, {&g_290[0]}}, {{&g_290[0]}, {&g_290[0]}}, {{&g_290[0]}, {&g_290[0]}}};
static int * volatile g_514 = &g_143[0][2];
static unsigned short g_551 = 7UL;
static int * volatile *g_574 = &g_513[3][0][0];
static int * volatile g_578[6][7][6] = {{{&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}}, {{&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}}, {{&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}}, {{&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}}, {{&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}}, {{&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}, {&g_2[3], &g_84, &g_176, (void*)0, &g_176, &g_143[0][1]}}};
static int * volatile g_623 = &g_143[0][2];
static int * volatile g_639 = &g_84;
static int * volatile g_672[10][10] = {{&g_143[0][2], &g_290[0], &g_143[0][0], &g_2[6], &g_2[6], &g_143[0][0], &g_290[0], &g_143[0][2], &g_143[0][0], &g_143[0][2]}, {&g_143[0][2], &g_290[0], &g_143[0][0], &g_2[6], &g_2[6], &g_143[0][0], &g_290[0], &g_143[0][2], &g_143[0][0], &g_143[0][2]}, {&g_143[0][2], &g_290[0], &g_143[0][0], &g_2[6], &g_2[6], &g_143[0][0], &g_290[0], &g_143[0][2], &g_143[0][0], &g_143[0][2]}, {&g_143[0][2], &g_290[0], &g_143[0][0], &g_2[6], &g_2[6], &g_143[0][0], &g_290[0], &g_143[0][2], &g_143[0][0], &g_143[0][2]}, {&g_143[0][2], &g_290[0], &g_143[0][0], &g_2[6], &g_2[6], &g_143[0][0], &g_290[0], &g_143[0][2], &g_143[0][0], &g_143[0][2]}, {&g_143[0][2], &g_290[0], &g_143[0][0], &g_2[6], &g_2[6], &g_143[0][0], &g_290[0], &g_143[0][2], &g_143[0][0], &g_143[0][2]}, {&g_143[0][2], &g_290[0], &g_143[0][0], &g_2[6], &g_2[6], &g_143[0][0], &g_290[0], &g_143[0][2], &g_143[0][0], &g_143[0][2]}, {&g_143[0][2], &g_290[0], &g_143[0][0], &g_2[6], &g_2[6], &g_143[0][0], &g_290[0], &g_143[0][2], &g_143[0][0], &g_143[0][2]}, {&g_143[0][2], &g_290[0], &g_143[0][0], &g_2[6], &g_2[6], &g_143[0][0], &g_290[0], &g_143[0][2], &g_143[0][0], &g_143[0][2]}, {&g_143[0][2], &g_290[0], &g_143[0][0], &g_2[6], &g_2[6], &g_143[0][0], &g_290[0], &g_143[0][2], &g_143[0][0], &g_143[0][2]}};
static int * volatile g_673 = &g_290[0];
static int * volatile g_691[10][1] = {{&g_84}, {&g_84}, {&g_84}, {&g_84}, {&g_84}, {&g_84}, {&g_84}, {&g_84}, {&g_84}, {&g_84}};
static int * volatile g_692 = &g_143[0][2];
static unsigned short g_721 = 65527UL;
static int * volatile g_742 = &g_290[1];
static int * volatile g_745 = &g_143[0][2];
static int g_749 = (-7L);
static int * volatile g_810 = &g_176;
static int * volatile g_831[8][3][2] = {{{&g_143[0][2], (void*)0}, {&g_143[0][2], (void*)0}, {&g_143[0][2], (void*)0}}, {{&g_143[0][2], (void*)0}, {&g_143[0][2], (void*)0}, {&g_143[0][2], (void*)0}}, {{&g_143[0][2], (void*)0}, {&g_143[0][2], (void*)0}, {&g_143[0][2], (void*)0}}, {{&g_143[0][2], (void*)0}, {&g_143[0][2], (void*)0}, {&g_143[0][2], (void*)0}}, {{&g_143[0][2], (void*)0}, {&g_143[0][2], (void*)0}, {&g_143[0][2], (void*)0}}, {{&g_143[0][2], (void*)0}, {&g_143[0][2], (void*)0}, {&g_143[0][2], (void*)0}}, {{&g_143[0][2], (void*)0}, {&g_143[0][2], (void*)0}, {&g_143[0][2], (void*)0}}, {{&g_143[0][2], (void*)0}, {&g_143[0][2], (void*)0}, {&g_143[0][2], (void*)0}}};
static int * volatile g_834[7] = {&g_2[5], (void*)0, &g_2[5], (void*)0, &g_2[5], (void*)0, &g_2[5]};
static int g_836 = 0xE118641CL;
static short g_852 = 0x72A5L;
static int * volatile g_853[4] = {&g_143[0][2], &g_143[0][2], &g_143[0][2], &g_143[0][2]};
static int * volatile g_854 = &g_836;
static int * volatile ** volatile g_890[2][9] = {{&g_574, &g_574, &g_215, &g_574, &g_574, &g_574, &g_215, &g_574, &g_574}, {&g_574, &g_574, &g_215, &g_574, &g_574, &g_574, &g_215, &g_574, &g_574}};
static volatile int g_961 = 0x6C10DF08L;



static unsigned func_1(void);
static int func_5(unsigned short p_6, unsigned char p_7, unsigned short p_8, unsigned short p_9, int p_10);
static unsigned short func_17(int p_18, char p_19, char p_20, int p_21);
static int func_22(short p_23);
static char func_25(int p_26, char p_27, unsigned short p_28);
static unsigned char func_32(unsigned short p_33);
static int func_36(unsigned p_37, unsigned char p_38, unsigned p_39, unsigned p_40, unsigned short p_41);
static short func_45(unsigned short p_46, char p_47, int p_48);
static int func_49(int p_50, int p_51, unsigned char p_52, unsigned short p_53, int p_54);
static char func_59(unsigned p_60, int p_61, unsigned p_62);
static unsigned func_1(void)
{
    unsigned l_11 = 0xDC2A82A1L;
    int **l_864 = (void*)0;
    int ***l_863 = &l_864;
    int l_865 = 0xF74E2335L;
    short l_902 = (-1L);
    unsigned l_908 = 4294967295UL;
    unsigned l_926 = 0UL;
    short l_946 = (-10L);
    short l_947 = 8L;
    int ***l_951 = &l_864;
    short l_954 = (-6L);
    int *l_955 = &l_865;
    for (g_2[0] = 6; (g_2[0] >= 12); g_2[0]++)
    {
        char l_12 = 0x0EL;
        int l_839[9] = {(-6L), (-10L), (-6L), (-10L), (-6L), (-10L), (-6L), (-10L), (-6L)};
        int l_842 = 7L;
        int **l_862[4][10] = {{&g_216, &g_216, &g_216, &g_216, &g_216, &g_216, &g_216, &g_216, &g_216, &g_216}, {&g_216, &g_216, &g_216, &g_216, &g_216, &g_216, &g_216, &g_216, &g_216, &g_216}, {&g_216, &g_216, &g_216, &g_216, &g_216, &g_216, &g_216, &g_216, &g_216, &g_216}, {&g_216, &g_216, &g_216, &g_216, &g_216, &g_216, &g_216, &g_216, &g_216, &g_216}};
        int ***l_861 = &l_862[3][5];
        unsigned char l_936[10];
        char l_948 = (-10L);
        int i, j;
        for (i = 0; i < 10; i++)
            l_936[i] = 0x18L;
    }
    (*l_955) &= ((func_32(((g_2[0] , &g_215) != l_951)) > ((0UL || (safe_mod_func_uint32_t_u_u(g_852, g_277[3][0]))) | (g_836 ^ l_954))) || 0x900EL);


    for (g_84 = 0; (g_84 >= 0); g_84 -= 1)
    {
        int l_960 = 0L;
        (*l_955) ^= (g_290[0] > (safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u(1UL, ((func_59(g_84, l_960, g_836) & (0x59CAL != ((((void*)0 != (*l_951)) < 0xB8L) == g_961))) <= g_2[6]))), g_143[0][2])));
        return l_960;
    }
    return g_198;
}







static int func_5(unsigned short p_6, unsigned char p_7, unsigned short p_8, unsigned short p_9, int p_10)
{
    int **l_807 = &g_216;
    int l_808 = 0xA2C729EFL;
    int *l_809 = (void*)0;
    unsigned short l_813[1][6] = {{65535UL, 1UL, 65535UL, 1UL, 65535UL, 1UL}};
    int i, j;
    (*g_810) = (safe_mod_func_uint32_t_u_u((+(func_17(g_2[0], p_8, p_7, (~p_6)) || ((*g_673) || (safe_mod_func_int16_t_s_s(g_551, (((safe_add_func_int8_t_s_s((l_807 == l_807), p_8)) == l_808) , g_176)))))), l_808));

    ;




    l_808 ^= (*g_742);
    for (g_84 = 0; (g_84 < (-10)); --g_84)
    {
        unsigned l_818 = 0xA84DCB0EL;
        unsigned short l_821 = 65533UL;
        char l_833 = 0x9DL;
        (*g_742) = (~p_6);
        if (((func_59(g_277[4][0], l_813[0][0], g_2[0]) , (((~((&l_808 != ((safe_mod_func_int8_t_s_s((p_10 || (safe_mod_func_int16_t_s_s(func_36((3UL < 0xCA546A64L), p_6, l_818, g_277[9][3], p_8), 0x950CL))), 0x43L)) , &p_10)) != p_6)) == p_7) != g_198)) & 0x883FL))
        {
            int l_830 = 0xEC68ADDFL;
            int *l_832 = &l_808;
            (*l_832) = (safe_sub_func_int32_t_s_s((l_821 & ((!((((safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((p_8 < (safe_lshift_func_uint16_t_u_s(g_143[0][2], 8))), (safe_lshift_func_int8_t_s_s((func_59(g_551, (((g_277[6][1] , &g_574) == ((g_203[4] < l_830) , (((p_8 ^ p_6) > 249UL) , (void*)0))) , p_6), g_290[1]) > l_821), p_7)))), l_818)) ^ (-1L)) | p_9) <= p_8)) < 0L)), g_2[4]));
        }
        else
        {
            int *l_835[3][10] = {{&g_143[0][2], &g_2[6], &g_749, &g_2[6], &g_143[0][2], &g_143[0][2], &g_143[0][2], &g_2[6], &g_749, &g_2[6]}, {&g_143[0][2], &g_2[6], &g_749, &g_2[6], &g_143[0][2], &g_143[0][2], &g_143[0][2], &g_2[6], &g_749, &g_2[6]}, {&g_143[0][2], &g_2[6], &g_749, &g_2[6], &g_143[0][2], &g_143[0][2], &g_143[0][2], &g_2[6], &g_749, &g_2[6]}};
            int i, j;
            g_836 &= (l_833 < p_6);
            (*g_574) = l_835[2][9];
            (*g_215) = &p_10;

            ;
        }
        for (g_176 = 0; (g_176 <= 17); g_176 = safe_add_func_uint32_t_u_u(g_176, 3))
        {
            (*g_623) = (-2L);
        }
    }



    return p_9;


}







static unsigned short func_17(int p_18, char p_19, char p_20, int p_21)
{
    unsigned l_24 = 0xB6CD04CDL;
    int l_775 = 0L;
    int **l_780[2];
    int ***l_779 = &l_780[1];
    unsigned l_796 = 4294967295UL;
    int i;
    for (i = 0; i < 2; i++)
        l_780[i] = &g_216;
    (*g_514) = func_22(l_24);

    ;


    for (g_176 = 14; (g_176 != 26); g_176++)
    {
        char l_752 = (-1L);
        (*g_379) = (*g_745);
        (*g_692) = l_752;
    }
    for (p_20 = 0; (p_20 <= 0); p_20 += 1)
    {
        char l_753 = (-6L);
        int l_760 = (-1L);
        int **l_777 = &g_216;
        l_760 &= (((l_753 | (g_198 || 0x7B21L)) <= l_753) || l_753);
        for (g_551 = 0; (g_551 <= 9); g_551 += 1)
        {
            int *l_761[8][9] = {{&g_143[0][2], &g_2[7], &g_143[0][2], &g_176, (void*)0, (void*)0, &l_760, &l_760, (void*)0}, {&g_143[0][2], &g_2[7], &g_143[0][2], &g_176, (void*)0, (void*)0, &l_760, &l_760, (void*)0}, {&g_143[0][2], &g_2[7], &g_143[0][2], &g_176, (void*)0, (void*)0, &l_760, &l_760, (void*)0}, {&g_143[0][2], &g_2[7], &g_143[0][2], &g_176, (void*)0, (void*)0, &l_760, &l_760, (void*)0}, {&g_143[0][2], &g_2[7], &g_143[0][2], &g_176, (void*)0, (void*)0, &l_760, &l_760, (void*)0}, {&g_143[0][2], &g_2[7], &g_143[0][2], &g_176, (void*)0, (void*)0, &l_760, &l_760, (void*)0}, {&g_143[0][2], &g_2[7], &g_143[0][2], &g_176, (void*)0, (void*)0, &l_760, &l_760, (void*)0}, {&g_143[0][2], &g_2[7], &g_143[0][2], &g_176, (void*)0, (void*)0, &l_760, &l_760, (void*)0}};
            int i, j;
            g_672[g_551][(p_20 + 5)] = l_761[7][3];
            for (g_721 = 0; (g_721 <= 0); g_721 += 1)
            {
                int **l_764 = &l_761[7][3];
                int l_774[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_774[i] = 0xFA52678DL;
                for (l_760 = 0; (l_760 >= 0); l_760 -= 1)
                {
                    for (p_18 = 0; (p_18 <= 0); p_18 += 1)
                    {
                        unsigned l_767 = 0x1A9305ABL;
                        int i, j;
                        (*g_742) = (((&g_672[g_551][(p_20 + 5)] != (void*)0) || 0x69B3F0EBL) , (safe_sub_func_int32_t_s_s(((((l_764 != &g_623) | 6L) != (g_143[0][2] | ((((g_203[4] == (safe_lshift_func_int8_t_s_u(p_21, g_176))) , l_767) == 0x14L) == 0UL))) | 1L), p_19)));
                        g_691[(p_20 + 3)][l_760] = l_761[7][3];
                    }
                }
                l_760 = (((safe_add_func_int8_t_s_s(p_19, (((safe_mod_func_int8_t_s_s(0x2EL, p_21)) , g_203[2]) & func_59(g_2[2], (((g_277[7][6] , (((~(-6L)) == (safe_lshift_func_int8_t_s_u(0x91L, 2))) , ((p_21 >= 4294967286UL) != p_19))) == 0xE7C3L) < g_290[1]), l_753)))) , g_290[0]) == (-1L));
                l_774[0] |= ((g_277[4][0] < ((((p_21 , p_20) != 8L) , g_143[0][2]) | p_20)) ^ (((((!(p_20 <= g_203[4])) | g_198) , &g_290[0]) != (void*)0) & g_143[0][2]));
            }
            l_775 |= p_20;
            l_760 = (g_277[4][0] || p_21);
        }



        for (g_84 = 0; (g_84 >= 0); g_84 -= 1)
        {
            int *l_776 = &g_143[0][1];
            int ***l_778 = &l_777;
            unsigned short l_785[2][10] = {{0x1FECL, 0xFEEDL, 0x64A0L, 0xFEEDL, 0x1FECL, 0x66FBL, 0x1FECL, 0xFEEDL, 0x64A0L, 0xFEEDL}, {0x1FECL, 0xFEEDL, 0x64A0L, 0xFEEDL, 0x1FECL, 0x66FBL, 0x1FECL, 0xFEEDL, 0x64A0L, 0xFEEDL}};
            int l_799[8][9][3] = {{{0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}}, {{0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}}, {{0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}}, {{0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}}, {{0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}}, {{0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}}, {{0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}}, {{0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}, {0x0769FF12L, 1L, 0x0A0DACEBL}}};
            int i, j, k;
            g_691[(g_84 + 4)][g_84] = l_776;
            (*l_778) = l_777;
            (*l_776) = p_19;
            if (((((l_779 != (void*)0) > g_2[3]) ^ (4UL > ((safe_sub_func_int32_t_s_s((g_176 ^ ((p_18 & ((*l_776) | ((safe_add_func_int8_t_s_s(l_785[1][6], func_59(((safe_mod_func_uint16_t_u_u(g_143[1][4], 0xC11FL)) == p_18), p_19, p_21))) , g_2[0]))) , 1UL)), g_2[0])) >= (*g_742)))) && p_20))
            {
                int *l_790 = &l_775;
                int *l_791[4][9] = {{&g_176, &g_143[0][2], &g_176, &g_749, &g_749, &g_176, &g_143[0][2], &g_176, &g_176}, {&g_176, &g_143[0][2], &g_176, &g_749, &g_749, &g_176, &g_143[0][2], &g_176, &g_176}, {&g_176, &g_143[0][2], &g_176, &g_749, &g_749, &g_176, &g_143[0][2], &g_176, &g_176}, {&g_176, &g_143[0][2], &g_176, &g_749, &g_749, &g_176, &g_143[0][2], &g_176, &g_176}};
                int i, j;
                for (l_760 = 0; (l_760 > (-16)); --l_760)
                {
                    int *l_792 = &g_84;
                    short l_795[6][10][4] = {{{(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}}, {{(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}}, {{(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}}, {{(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}}, {{(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}}, {{(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}, {(-4L), 0x4F27L, 0x2732L, 1L}}};
                    int i, j, k;
                    l_791[3][1] = l_790;
                    (**l_779) = l_792;

                    ;
                    l_799[1][6][2] &= (func_32((safe_div_func_uint8_t_u_u(((**l_778) == (void*)0), ((func_59(g_203[4], p_18, l_795[2][6][3]) || l_796) , func_36((safe_div_func_int8_t_s_s((~((+(**l_777)) <= g_203[4])), 0x9CL)), (*l_792), g_277[9][1], g_749, (*l_792)))))) , (*g_673));


                    for (g_198 = (-13); (g_198 >= 54); g_198 = safe_add_func_uint16_t_u_u(g_198, 6))
                    {
                        (*l_776) ^= (1UL == g_721);
                    }
                }


                (*l_776) = (l_778 != &l_777);
            }
            else
            {
                char l_802 = 1L;
                (*l_776) = p_20;
                l_802 |= 0L;
                (*l_777) = &l_760;

                ;
            }
        }


    }



    (*g_574) = &g_2[0];
    return g_143[0][2];
}







static int func_22(short p_23)
{
    int l_31 = 0x598737A3L;
    int *l_748 = &g_749;
    (*l_748) ^= ((p_23 & func_25(((safe_lshift_func_uint8_t_u_u((l_31 , func_32((((~l_31) ^ ((((safe_lshift_func_int8_t_s_s(((0x821C760FL || p_23) <= p_23), (l_31 | func_36((safe_unary_minus_func_uint8_t_u((safe_lshift_func_int16_t_s_s((func_45(p_23, g_2[4], l_31) , l_31), 0)))), p_23, p_23, g_277[5][1], p_23)))) , 9L) < l_31) == l_31)) == 254UL))), 6)) & l_31), p_23, l_31)) ^ p_23);

    ;


    return (*l_748);
}







static char func_25(int p_26, char p_27, unsigned short p_28)
{
    unsigned l_565 = 1UL;
    unsigned l_570 = 1UL;
    unsigned l_577[3];
    int l_580 = (-5L);
    int l_592 = 0xF579FB55L;
    int **l_608 = &g_216;
    int l_640 = 0x5AFB3C0EL;
    unsigned char l_667 = 0x4BL;
    unsigned char l_693 = 0x47L;
    int l_719 = 0x26AAB49AL;
    unsigned short l_720 = 0x3713L;
    char l_747 = 0xE1L;
    int i;
    for (i = 0; i < 3; i++)
        l_577[i] = 1UL;
    p_26 |= ((safe_lshift_func_uint8_t_u_s(g_2[0], 2)) , (((safe_div_func_uint8_t_u_u((+(safe_sub_func_uint8_t_u_u((((((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(l_565, 2)), ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((((p_27 >= ((((g_2[3] , (((l_565 , p_28) , (((g_551 > g_551) , p_28) , 0x3EL)) < 0x04L)) < 0x3165E80EL) == l_565) , p_27)) > (*g_379)) , g_2[6]) & p_27), l_565)), g_290[0])) ^ (-5L)))) , l_565) < 0x21L) >= l_570) == g_290[0]), 0x99L))), 8UL)) < p_27) | l_570));
    for (p_28 = 0; (p_28 > 40); p_28 = safe_add_func_int8_t_s_s(p_28, 9))
    {
        return l_570;
    }
    if ((safe_unary_minus_func_int32_t_s((&p_26 != (p_28 , &p_26)))))
    {
        int *l_579 = &g_143[1][3];
        (*l_579) |= p_27;
        l_580 = (-8L);
    }
    else
    {
        unsigned char l_591 = 255UL;
        p_26 = (*g_379);
    }
    for (p_26 = (-29); (p_26 <= (-28)); p_26 = safe_add_func_int8_t_s_s(p_26, 3))
    {
        unsigned short l_599 = 65535UL;
        unsigned short l_624 = 0x90C2L;
        int **l_666 = &g_216;
        unsigned l_712 = 4294967287UL;
        int *l_746 = &g_290[0];
        (*g_574) = (g_143[0][2] , &p_26);
        for (l_580 = 1; (l_580 >= 0); l_580 -= 1)
        {
            int **l_680 = (void*)0;
            unsigned char l_681 = 1UL;
            short l_703 = 0x512BL;
            int *l_713 = (void*)0;
            int i;
            if (g_290[l_580])
            {
                char l_604 = 0L;
                int **l_607 = &g_216;
                int *l_643[3];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_643[i] = &g_84;
                if (((safe_mod_func_int32_t_s_s((((((((g_277[(l_580 + 6)][(l_580 + 1)] , (safe_sub_func_uint8_t_u_u(g_2[0], g_290[0]))) ^ 0L) != g_84) != 0x01E4L) != p_26) , l_607) != l_608), g_2[4])) <= 255UL))
                {
                    char l_621[6] = {0xC1L, 0x72L, 0xC1L, 0x72L, 0xC1L, 0x72L};
                    char l_622[4] = {0xB7L, 0x38L, 0xB7L, 0x38L};
                    int i;
                    (*g_379) = p_27;
                    if (p_26)
                        continue;
                    for (p_27 = 0; (p_27 >= 0); p_27 -= 1)
                    {
                        unsigned l_619 = 4294967295UL;
                        int **l_620 = &g_216;
                        l_622[3] &= (safe_add_func_uint16_t_u_u(((g_2[0] != ((safe_rshift_func_int8_t_s_s((p_28 | ((safe_sub_func_int16_t_s_s((p_27 >= (p_26 < l_619)), (&g_514 != l_620))) && 0UL)), (l_621[1] & 6L))) < g_290[l_580])) < 0xC3L), l_599));
                    }
                }
                else
                {
                    unsigned short l_636 = 0xE2C8L;
                    int l_638 = 0xE11B7FE4L;
                    (*g_623) = (*g_514);
                    for (l_604 = 0; (l_604 >= 0); l_604 -= 1)
                    {
                        unsigned short l_637 = 65531UL;
                        l_592 = l_624;
                        l_638 = (g_277[4][0] | (safe_rshift_func_int8_t_s_u((((safe_rshift_func_uint16_t_u_s((func_36((+func_32((((func_59(((safe_lshift_func_uint8_t_u_s(((p_27 | func_59((((safe_add_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((&p_26 != &p_26), (safe_unary_minus_func_uint32_t_u(g_277[4][0])))), (((l_636 < ((p_27 , (g_290[l_580] , ((*g_175) == l_599))) <= l_637)) < 1UL) , 0xAA2CL))) || g_198) , g_551), p_28, p_26)) != 2L), l_637)) != g_2[0]), p_27, l_599) >= p_26) , g_2[7]) > 0x1B0FL))), l_599, g_290[l_580], l_599, p_28) , l_636), l_637)) && 65528UL) , 1L), g_290[l_580])));
                    }
                }
                (*g_639) = g_290[l_580];
                if ((*g_623))
                    continue;
                l_640 = (g_2[0] || func_59((247UL && g_277[4][0]), (((func_32(g_203[4]) != ((((0L == l_640) , (safe_rshift_func_int8_t_s_u(((0xC7C67BB5L | func_59(p_26, g_290[l_580], l_599)) > p_26), g_84))) >= p_26) >= g_2[6])) || g_2[3]) < 65535UL), g_290[0]));
            }
            else
            {
                unsigned char l_668 = 0x9AL;
                int **l_671 = &g_216;
                char l_690 = 0x0BL;
                if ((safe_sub_func_uint32_t_u_u(0x418DD2F8L, ((~((safe_rshift_func_int16_t_s_s(((g_277[4][0] != p_28) , p_27), g_2[0])) , 1UL)) || 65535UL))))
                {
                    unsigned char l_670[7][1][5] = {{{7UL, 0x5BL, 0xE2L, 0xA2L, 0xE2L}}, {{7UL, 0x5BL, 0xE2L, 0xA2L, 0xE2L}}, {{7UL, 0x5BL, 0xE2L, 0xA2L, 0xE2L}}, {{7UL, 0x5BL, 0xE2L, 0xA2L, 0xE2L}}, {{7UL, 0x5BL, 0xE2L, 0xA2L, 0xE2L}}, {{7UL, 0x5BL, 0xE2L, 0xA2L, 0xE2L}}, {{7UL, 0x5BL, 0xE2L, 0xA2L, 0xE2L}}};
                    int i, j, k;
                    if (p_26)
                    {
                        unsigned l_669 = 0x5C159F72L;
                        if (p_26)
                            break;
                        if (p_27)
                            continue;
                        (*g_142) ^= (func_59(l_669, p_26, g_176) < l_670[3][0][4]);
                        (*g_175) = p_28;
                    }
                    else
                    {
                        (*g_673) = (l_608 == l_671);
                    }
                    for (g_551 = 0; (g_551 <= 0); g_551 += 1)
                    {
                        (*g_692) = (safe_div_func_uint32_t_u_u(g_143[4][3], (safe_rshift_func_uint16_t_u_s(g_277[8][2], (safe_sub_func_int16_t_s_s((((+(l_680 == l_666)) || (*g_379)) == p_28), 0L))))));
                    }
                    l_693 |= func_32(p_26);
                }
                else
                {
                    for (g_176 = 1; (g_176 >= 0); g_176 -= 1)
                    {
                        int i, j;
                        g_672[(l_580 + 5)][g_176] = g_672[(l_580 + 6)][(l_580 + 1)];
                    }
                }
            }
            l_640 = (**g_574);
            l_592 |= (safe_rshift_func_uint16_t_u_u((((safe_div_func_uint16_t_u_u((((p_26 , &p_26) == (void*)0) , (g_84 < (safe_add_func_int32_t_s_s((*g_142), ((safe_div_func_int16_t_s_s((func_59(func_59(g_143[3][1], l_624, func_59(g_143[3][2], l_712, g_277[8][3])), g_84, p_27) , p_26), 0xAEFFL)) == p_26))))), g_277[1][1])) != (-10L)) , 65535UL), 2));
            g_290[l_580] = p_27;
            for (l_624 = 0; (l_624 <= 0); l_624 += 1)
            {
                short l_718[7] = {0xA9F6L, 0L, 0xA9F6L, 0L, 0xA9F6L, 0L, 0xA9F6L};
                int l_728 = 1L;
                int l_741 = 0x087118A7L;
                int l_743 = (-6L);
                int **l_744 = &g_216;
                int i;
                g_721 = func_32((p_28 > ((safe_lshift_func_uint16_t_u_u((p_28 >= 0x74494B8FL), 0)) ^ p_27)));
                if ((safe_mod_func_uint16_t_u_u(((safe_div_func_int16_t_s_s((l_728 == g_84), l_718[6])) < (*g_514)), g_551)))
                {
                    unsigned l_739 = 0UL;
                    int l_740 = 0x6618D5D0L;
                    l_740 = (255UL ^ ((g_721 <= (p_26 ^ ((safe_lshift_func_int16_t_s_u(((safe_sub_func_int16_t_s_s((((safe_lshift_func_int16_t_s_u(g_2[4], ((safe_rshift_func_int8_t_s_s((~(safe_rshift_func_int16_t_s_u(p_26, 4))), l_739)) <= (&p_26 == (l_728 , (*g_574)))))) ^ 255UL) < 4294967295UL), g_721)) >= g_84), 11)) ^ p_26))) <= 0x2C999121L));
                }
                else
                {
                    int i, j, k;
                    g_513[(l_624 + 5)][l_580][l_624] = (*g_574);
                }
                (*g_742) = l_741;
                (*g_745) |= ((&g_578[5][0][1] == (l_743 , l_666)) >= ((4L > ((void*)0 != l_744)) <= (p_28 || 255UL)));
            }
        }
        if ((*g_745))
            continue;
        (*l_666) = l_746;

        ;
    }



    return l_747;


}







static unsigned char func_32(unsigned short p_33)
{
    int l_543[1];
    unsigned char l_554 = 0x4CL;
    int i;
    for (i = 0; i < 1; i++)
        l_543[i] = 0x5534CCB9L;
    if (((safe_mod_func_uint8_t_u_u(0x21L, (p_33 ^ ((l_543[0] == g_277[4][0]) != l_543[0])))) <= p_33))
    {
        for (g_176 = 4; (g_176 >= 0); g_176 -= 1)
        {
            (*g_367) ^= p_33;
            return g_143[0][2];
        }
        (*g_215) = &l_543[0];

        ;
        (*g_215) = &l_543[0];
    }
    else
    {
        char l_545 = 0x07L;
        int **l_546[3][5][2] = {{{&g_216, &g_216}, {&g_216, &g_216}, {&g_216, &g_216}, {&g_216, &g_216}, {&g_216, &g_216}}, {{&g_216, &g_216}, {&g_216, &g_216}, {&g_216, &g_216}, {&g_216, &g_216}, {&g_216, &g_216}}, {{&g_216, &g_216}, {&g_216, &g_216}, {&g_216, &g_216}, {&g_216, &g_216}, {&g_216, &g_216}}};
        int i, j, k;
        g_551 = ((safe_unary_minus_func_int8_t_s((!((l_545 , l_546[0][0][1]) != l_546[1][4][0])))) & (safe_sub_func_int8_t_s_s(((safe_add_func_int8_t_s_s(g_277[4][0], (+((func_59((p_33 || p_33), l_543[0], (((p_33 , ((p_33 & p_33) != 0xD4L)) | (*g_367)) >= (-7L))) , 8L) | 0x8372L)))) == p_33), g_290[1])));
        for (g_198 = 9; (g_198 == 29); g_198++)
        {
            (*g_215) = &l_543[0];

            ;
        }


        (*g_175) = l_554;
    }


    return p_33;


}







static int func_36(unsigned p_37, unsigned char p_38, unsigned p_39, unsigned p_40, unsigned short p_41)
{
    short l_536 = 0xCB5AL;
    int *l_537 = &g_2[0];
    int *l_538[7][2] = {{(void*)0, &g_2[0]}, {(void*)0, &g_2[0]}, {(void*)0, &g_2[0]}, {(void*)0, &g_2[0]}, {(void*)0, &g_2[0]}, {(void*)0, &g_2[0]}, {(void*)0, &g_2[0]}};
    int i, j;
    g_143[0][2] &= (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(g_203[8], 10)), ((((((p_37 , ((safe_lshift_func_uint16_t_u_s(func_59((safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((-1L), (safe_div_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((((safe_div_func_uint32_t_u_u(p_37, l_536)) && (&g_143[1][1] == l_537)) && ((*l_537) ^ ((void*)0 != l_537))), g_84)), g_2[6])))), g_277[4][0])), p_38)), g_2[0], p_37), 5)) , p_41)) && 0xECL) , (*l_537)) >= (*l_537)) != g_290[0]) != g_2[0])));
    return (*g_514);
}







static short func_45(unsigned short p_46, char p_47, int p_48)
{
    unsigned short l_63 = 1UL;
    int l_65 = 7L;
    int *l_115 = &g_2[0];
    int **l_114 = &l_115;
    short l_119 = 0xF80BL;
    short l_152 = 0x4EA9L;
    short l_187 = 0x984AL;
    unsigned l_375[4];
    unsigned l_432[1];
    int l_433 = 0xF8DBA267L;
    unsigned l_439 = 6UL;
    unsigned char l_451 = 0UL;
    int l_517 = (-10L);
    int i;
    for (i = 0; i < 4; i++)
        l_375[i] = 0UL;
    for (i = 0; i < 1; i++)
        l_432[i] = 0xB8744D34L;
    if (func_49(((safe_lshift_func_uint16_t_u_s(((safe_div_func_uint8_t_u_u((func_59(g_2[0], (g_2[0] , ((((l_63 && (((safe_unary_minus_func_int16_t_s(g_2[0])) > (l_65 , l_63)) | ((safe_lshift_func_int8_t_s_u(g_2[0], (8UL && (+1L)))) > p_46))) < p_47) , l_63) || p_47)), g_2[0]) == g_2[0]), g_2[1])) , l_65), 7)) & g_2[1]), l_63, g_2[6], p_47, g_2[0]))
    {
        unsigned l_100[3];
        int *l_108 = &g_84;
        int **l_107 = &l_108;
        int l_260[6];
        int i;
        for (i = 0; i < 3; i++)
            l_100[i] = 4294967295UL;
        for (i = 0; i < 6; i++)
            l_260[i] = 0x92B52BFDL;
        (*l_108) = ((safe_mod_func_int16_t_s_s((((((l_100[2] , &g_2[5]) == ((safe_rshift_func_uint16_t_u_u((p_46 != l_65), ((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(0xAAL, (3UL <= p_47))) && (l_100[0] > ((&g_83 == l_107) != 3UL))), 1)) >= p_48))) , (void*)0)) < 0x4BL) | (**l_107)) == 1UL), g_84)) > 0x8C7178F0L);
        if (l_65)
        {
            int *l_109 = &l_65;
            unsigned short l_118 = 0x3854L;
            unsigned short l_247[5][8] = {{0xB66CL, 65535UL, 0xE2BEL, 0xA3C0L, 65535UL, 0xBDC3L, 65535UL, 0xA3C0L}, {0xB66CL, 65535UL, 0xE2BEL, 0xA3C0L, 65535UL, 0xBDC3L, 65535UL, 0xA3C0L}, {0xB66CL, 65535UL, 0xE2BEL, 0xA3C0L, 65535UL, 0xBDC3L, 65535UL, 0xA3C0L}, {0xB66CL, 65535UL, 0xE2BEL, 0xA3C0L, 65535UL, 0xBDC3L, 65535UL, 0xA3C0L}, {0xB66CL, 65535UL, 0xE2BEL, 0xA3C0L, 65535UL, 0xBDC3L, 65535UL, 0xA3C0L}};
            int l_324 = 0xA2F69BEAL;
            int l_356[2][10] = {{(-1L), (-1L), 1L, 0x143F756FL, 0x143F756FL, 1L, (-1L), (-1L), 1L, (-1L)}, {(-1L), (-1L), 1L, 0x143F756FL, 0x143F756FL, 1L, (-1L), (-1L), 1L, (-1L)}};
            int i, j;
            l_109 = (*l_107);

            ;
            (*l_108) = ((p_48 && g_2[0]) >= 0UL);
            if (p_47)
            {
                unsigned l_128 = 8UL;
                int l_133 = 0L;
                unsigned short l_184 = 3UL;
                short l_196 = 0xFC1CL;
                int **l_197 = &l_109;
                char l_248 = 0x69L;
                unsigned char l_291 = 0UL;
                if (p_46)
                {
                    int *l_127 = &l_65;
                    (**l_107) = p_48;
                    (*l_127) &= (safe_div_func_int16_t_s_s(0x152AL, (((((safe_unary_minus_func_int32_t_s((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(g_2[0], g_84)), l_128)))) , l_133) == l_133) && g_2[0]) ^ p_47)));
                    for (g_84 = 0; (g_84 <= (-13)); --g_84)
                    {
                        (*l_127) = (safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(g_2[0], 65526UL)), 65534UL)), 3));
                        if (g_2[7])
                            break;
                    }
                }
                else
                {
                    (*g_142) ^= ((g_2[0] > g_84) , p_47);
                    return g_2[0];
                }
                if ((g_143[0][2] | g_2[0]))
                {
                    unsigned l_153 = 3UL;
                    int l_162 = 0x088D6541L;
                    if (((((l_153 == ((p_46 , (**l_107)) == p_48)) >= (*l_109)) && g_143[4][5]) , (**l_107)))
                    {
                        (*l_108) &= (-4L);
                    }
                    else
                    {
                        int *l_163 = &g_84;
                        unsigned char l_172 = 0xDFL;
                        l_162 = (&l_108 == &l_109);
                        (*l_114) = l_163;

                        ;
                        (**l_107) = (safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((0x1DL >= (safe_rshift_func_uint8_t_u_s(func_59((l_133 || l_128), (safe_rshift_func_uint8_t_u_u(g_2[4], (((&l_163 == &g_142) , ((**l_107) > (*l_108))) > (((0x69C8L || 0x9179L) > 0x3DL) & 0x58L)))), g_84), g_84))), p_47)), l_172));
                        (*l_115) = (*l_108);
                    }

                    ;
                    for (p_47 = 0; (p_47 <= 2); p_47 += 1)
                    {
                        int i;
                        (*l_108) = (l_100[p_47] == 0x48L);
                        (*l_109) |= 8L;
                        (*g_175) &= (safe_mod_func_uint8_t_u_u((l_100[p_47] & g_84), ((**l_114) , (0x6890L && (l_162 | g_143[0][2])))));
                    }
                    for (l_153 = 0; (l_153 <= 4); l_153 += 1)
                    {
                        char l_179 = (-1L);
                        (*l_107) = &g_176;

                        ;
                        l_133 ^= (safe_rshift_func_int8_t_s_u((+(*l_109)), (((l_179 > (g_2[0] > (safe_div_func_int32_t_s_s(p_48, p_48)))) | 8L) < func_59(((l_128 , g_176) , ((((safe_div_func_int8_t_s_s((func_59(func_59(p_47, (**l_114), l_184), p_46, g_176) != (*l_108)), 0x28L)) , 1UL) != 0UL) >= g_2[5])), g_2[4], p_46))));
                    }

                    ;
                }
                else
                {
                    int **l_207 = &l_109;
                    (**l_107) = (((void*)0 == (*l_107)) >= (0x3074L < (safe_mod_func_uint8_t_u_u(((l_187 , p_47) , (safe_div_func_int8_t_s_s(((+((safe_rshift_func_int8_t_s_u((((safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint32_t_u_u(((g_2[0] < ((p_48 , (p_46 < (p_47 == (*l_109)))) <= p_48)) , p_48), (*g_142))) , 0xC1C6L), 5)) , p_48) > g_143[0][2]), l_196)) != (*l_109))) || g_143[0][2]), (*l_115)))), 0xC8L))));
                    (*l_114) = l_109;

                    ;
                    if (((void*)0 == &l_109))
                    {
                        unsigned char l_206 = 7UL;
                        g_198 |= ((void*)0 != l_197);
                        (*l_108) &= (((safe_sub_func_uint16_t_u_u((p_47 || p_46), 0xF4C8L)) , (void*)0) != l_207);
                        return g_2[7];
                    }
                    else
                    {
                        return (*l_115);
                    }
                }

                ;
                ;
                if ((safe_lshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(0x49B77D7FL, (**l_197))), 7)))
                {
                    int l_220 = (-1L);
                    int **l_231[4][2];
                    char l_243 = 0x09L;
                    int l_246[4][7][7] = {{{1L, (-1L), 1L, 0xD2CC1E2DL, 0xCBF27FBFL, (-8L), 0x435555EBL}, {1L, (-1L), 1L, 0xD2CC1E2DL, 0xCBF27FBFL, (-8L), 0x435555EBL}, {1L, (-1L), 1L, 0xD2CC1E2DL, 0xCBF27FBFL, (-8L), 0x435555EBL}, {1L, (-1L), 1L, 0xD2CC1E2DL, 0xCBF27FBFL, (-8L), 0x435555EBL}, {1L, (-1L), 1L, 0xD2CC1E2DL, 0xCBF27FBFL, (-8L), 0x435555EBL}, {1L, (-1L), 1L, 0xD2CC1E2DL, 0xCBF27FBFL, (-8L), 0x435555EBL}, {1L, (-1L), 1L, 0xD2CC1E2DL, 0xCBF27FBFL, (-8L), 0x435555EBL}}, {{1L, (-1L), 1L, 0xD2CC1E2DL, 0xCBF27FBFL, (-8L), 0x435555EBL}, {1L, (-1L), 1L, 0xD2CC1E2DL, 0xCBF27FBFL, (-8L), 0x435555EBL}, {1L, (-1L), 1L, 0xD2CC1E2DL, 0xCBF27FBFL, (-8L), 0x435555EBL}, {1L, (-1L), 1L, 0xD2CC1E2DL, 0xCBF27FBFL, (-8L), 0x435555EBL}, {1L, (-1L), 1L, 0xD2CC1E2DL, 0xCBF27FBFL, (-8L), 0x435555EBL}, {1L, (-1L), 1L, 0xD2CC1E2DL, 0xCBF27FBFL, (-8L), 0x435555EBL}, {1L, (-1L), 1L, 0xD2CC1E2DL, 0xCBF27FBFL, (-8L), 0x435555EBL}}, {{1L, (-1L), 1L, 0xD2CC1E2DL, 0xCBF27FBFL, (-8L), 0x435555EBL}, {1L, (-1L), 1L, 0xD2CC1E2DL, 0xCBF27FBFL, (-8L), 0x435555EBL}, {1L, (-1L), 1L, 0xD2CC1E2DL, 0xCBF27FBFL, (-8L), 0x435555EBL}, {1L, (-1L), 1L, 0xD2CC1E2DL, 0xCBF27FBFL, (-8L), 0x435555EBL}, {1L, (-1L), 1L, 0xD2CC1E2DL, 0xCBF27FBFL, (-8L), 0x435555EBL}, {1L, (-1L), 1L, 0xD2CC1E2DL, 0xCBF27FBFL, (-8L), 0x435555EBL}, {1L, (-1L), 1L, 0xD2CC1E2DL, 0xCBF27FBFL, (-8L), 0x435555EBL}}, {{1L, (-1L), 1L, 0xD2CC1E2DL, 0xCBF27FBFL, (-8L), 0x435555EBL}, {1L, (-1L), 1L, 0xD2CC1E2DL, 0xCBF27FBFL, (-8L), 0x435555EBL}, {1L, (-1L), 1L, 0xD2CC1E2DL, 0xCBF27FBFL, (-8L), 0x435555EBL}, {1L, (-1L), 1L, 0xD2CC1E2DL, 0xCBF27FBFL, (-8L), 0x435555EBL}, {1L, (-1L), 1L, 0xD2CC1E2DL, 0xCBF27FBFL, (-8L), 0x435555EBL}, {1L, (-1L), 1L, 0xD2CC1E2DL, 0xCBF27FBFL, (-8L), 0x435555EBL}, {1L, (-1L), 1L, 0xD2CC1E2DL, 0xCBF27FBFL, (-8L), 0x435555EBL}}};
                    short l_261 = (-1L);
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_231[i][j] = (void*)0;
                    }
                    for (l_118 = 0; (l_118 <= 4); l_118 += 1)
                    {
                        int l_212 = 0xFA001688L;
                        int **l_217[2][7][9] = {{{&l_108, (void*)0, &l_109, &g_216, &l_109, &g_216, &l_109, (void*)0, &l_108}, {&l_108, (void*)0, &l_109, &g_216, &l_109, &g_216, &l_109, (void*)0, &l_108}, {&l_108, (void*)0, &l_109, &g_216, &l_109, &g_216, &l_109, (void*)0, &l_108}, {&l_108, (void*)0, &l_109, &g_216, &l_109, &g_216, &l_109, (void*)0, &l_108}, {&l_108, (void*)0, &l_109, &g_216, &l_109, &g_216, &l_109, (void*)0, &l_108}, {&l_108, (void*)0, &l_109, &g_216, &l_109, &g_216, &l_109, (void*)0, &l_108}, {&l_108, (void*)0, &l_109, &g_216, &l_109, &g_216, &l_109, (void*)0, &l_108}}, {{&l_108, (void*)0, &l_109, &g_216, &l_109, &g_216, &l_109, (void*)0, &l_108}, {&l_108, (void*)0, &l_109, &g_216, &l_109, &g_216, &l_109, (void*)0, &l_108}, {&l_108, (void*)0, &l_109, &g_216, &l_109, &g_216, &l_109, (void*)0, &l_108}, {&l_108, (void*)0, &l_109, &g_216, &l_109, &g_216, &l_109, (void*)0, &l_108}, {&l_108, (void*)0, &l_109, &g_216, &l_109, &g_216, &l_109, (void*)0, &l_108}, {&l_108, (void*)0, &l_109, &g_216, &l_109, &g_216, &l_109, (void*)0, &l_108}, {&l_108, (void*)0, &l_109, &g_216, &l_109, &g_216, &l_109, (void*)0, &l_108}}};
                        int i, j, k;
                    }
                    for (l_184 = (-1); (l_184 != 36); l_184++)
                    {
                        if (p_46)
                            break;
                        (**l_107) ^= ((*g_215) != (*l_197));
                        (*l_108) = (l_231[0][1] != &g_83);
                        return g_2[0];
                    }
                    (**l_197) |= (p_46 , ((safe_div_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(1UL, func_59((safe_div_func_int32_t_s_s(((safe_add_func_int8_t_s_s(0x41L, (l_197 != l_197))) == g_143[0][2]), 0xA6F27C5AL)), g_176, g_2[6]))), 0x13D0L)) == p_48));
                    if (l_247[0][2])
                    {
                        int l_249 = 1L;
                        int l_252[4][4][10] = {{{0L, 0xC6CD30E5L, 0xC67CEFE5L, 0xA2BD4858L, 6L, 1L, 6L, 0xA2BD4858L, 0xC67CEFE5L, 0xC6CD30E5L}, {0L, 0xC6CD30E5L, 0xC67CEFE5L, 0xA2BD4858L, 6L, 1L, 6L, 0xA2BD4858L, 0xC67CEFE5L, 0xC6CD30E5L}, {0L, 0xC6CD30E5L, 0xC67CEFE5L, 0xA2BD4858L, 6L, 1L, 6L, 0xA2BD4858L, 0xC67CEFE5L, 0xC6CD30E5L}, {0L, 0xC6CD30E5L, 0xC67CEFE5L, 0xA2BD4858L, 6L, 1L, 6L, 0xA2BD4858L, 0xC67CEFE5L, 0xC6CD30E5L}}, {{0L, 0xC6CD30E5L, 0xC67CEFE5L, 0xA2BD4858L, 6L, 1L, 6L, 0xA2BD4858L, 0xC67CEFE5L, 0xC6CD30E5L}, {0L, 0xC6CD30E5L, 0xC67CEFE5L, 0xA2BD4858L, 6L, 1L, 6L, 0xA2BD4858L, 0xC67CEFE5L, 0xC6CD30E5L}, {0L, 0xC6CD30E5L, 0xC67CEFE5L, 0xA2BD4858L, 6L, 1L, 6L, 0xA2BD4858L, 0xC67CEFE5L, 0xC6CD30E5L}, {0L, 0xC6CD30E5L, 0xC67CEFE5L, 0xA2BD4858L, 6L, 1L, 6L, 0xA2BD4858L, 0xC67CEFE5L, 0xC6CD30E5L}}, {{0L, 0xC6CD30E5L, 0xC67CEFE5L, 0xA2BD4858L, 6L, 1L, 6L, 0xA2BD4858L, 0xC67CEFE5L, 0xC6CD30E5L}, {0L, 0xC6CD30E5L, 0xC67CEFE5L, 0xA2BD4858L, 6L, 1L, 6L, 0xA2BD4858L, 0xC67CEFE5L, 0xC6CD30E5L}, {0L, 0xC6CD30E5L, 0xC67CEFE5L, 0xA2BD4858L, 6L, 1L, 6L, 0xA2BD4858L, 0xC67CEFE5L, 0xC6CD30E5L}, {0L, 0xC6CD30E5L, 0xC67CEFE5L, 0xA2BD4858L, 6L, 1L, 6L, 0xA2BD4858L, 0xC67CEFE5L, 0xC6CD30E5L}}, {{0L, 0xC6CD30E5L, 0xC67CEFE5L, 0xA2BD4858L, 6L, 1L, 6L, 0xA2BD4858L, 0xC67CEFE5L, 0xC6CD30E5L}, {0L, 0xC6CD30E5L, 0xC67CEFE5L, 0xA2BD4858L, 6L, 1L, 6L, 0xA2BD4858L, 0xC67CEFE5L, 0xC6CD30E5L}, {0L, 0xC6CD30E5L, 0xC67CEFE5L, 0xA2BD4858L, 6L, 1L, 6L, 0xA2BD4858L, 0xC67CEFE5L, 0xC6CD30E5L}, {0L, 0xC6CD30E5L, 0xC67CEFE5L, 0xA2BD4858L, 6L, 1L, 6L, 0xA2BD4858L, 0xC67CEFE5L, 0xC6CD30E5L}}};
                        int i, j, k;
                        (*g_215) = ((((l_248 , g_143[0][2]) , p_48) , g_84) , (void*)0);

                        ;
                        (*g_215) = (void*)0;
                        l_260[4] |= func_59(((void*)0 == (*g_215)), (safe_unary_minus_func_int8_t_s((safe_rshift_func_int8_t_s_s((((4294967292UL >= (g_203[4] > g_84)) , p_46) > 1L), 0)))), p_47);
                        (**l_197) = (!((**l_197) > 0x54450C69L));
                    }
                    else
                    {
                        int *l_264[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_264[i] = &g_143[1][0];
                        (*g_215) = l_264[5];

                        ;
                        l_65 &= func_59((p_48 , (safe_mod_func_int16_t_s_s((g_2[0] && (**l_114)), (safe_rshift_func_uint8_t_u_s((((safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(65535UL, ((g_2[0] | g_2[0]) >= (((safe_lshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s(func_59(g_143[2][1], ((void*)0 == &l_264[5]), g_176), p_47)) ^ p_47), (*l_115))) >= (*l_109)) , (**l_197))))), g_203[4])) == g_2[1]) , g_143[3][5]), (**l_114)))))), g_198, g_277[4][0]);
                        (*l_108) = (*g_216);
                        (*g_215) = (*g_215);
                    }

                    ;
                }
                else
                {
                    (*g_215) = (*g_215);
                    (**l_107) |= (!(p_46 && 65533UL));
                    for (l_128 = 2; (l_128 <= 6); l_128 += 1)
                    {
                        int l_304 = (-6L);
                        (**l_107) |= 0L;
                        l_304 &= (safe_add_func_int16_t_s_s((((g_198 && (*g_175)) , (*g_215)) != (*l_107)), ((((((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(1UL, (safe_div_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((*g_216) == g_198), 0xAD4BL)), 0xE1L)))), 0x89L)), g_143[0][2])) > (-2L)) >= p_47) , 0x2CL) <= 0x25L) != g_143[0][4])));
                        return p_48;
                    }
                }

                ;
            }
            else
            {
                int l_315 = 0xDEEA2B25L;
                if ((((p_48 , (**l_114)) , (*l_107)) == l_109))
                {
                    int *l_307 = &g_176;
                    int l_317 = (-2L);
                    for (l_187 = 0; (l_187 >= (-8)); l_187--)
                    {
                        int *l_316 = &l_65;
                        (*g_215) = l_307;

                        ;
                        (*l_316) |= func_59((safe_mod_func_uint32_t_u_u((((safe_add_func_uint16_t_u_u((g_277[5][6] < ((((*l_109) < 0x22DB01ACL) , func_59(g_203[4], ((safe_lshift_func_int8_t_s_u(0L, 1)) , g_290[0]), g_2[0])) , (safe_unary_minus_func_int8_t_s(((((*g_175) & (*l_108)) != (**l_107)) < p_48))))), (*l_109))) && p_47) ^ g_277[4][0]), g_143[0][2])), l_315, (*l_115));
                    }

                    ;
                    (*l_307) = (l_317 <= (safe_div_func_uint32_t_u_u(((void*)0 == (*g_215)), ((*l_108) ^ (safe_rshift_func_int16_t_s_u(p_46, (safe_lshift_func_int8_t_s_s((p_46 | ((((!0xA541B027L) < func_59(g_203[4], l_324, p_47)) , g_277[8][0]) , 8UL)), 7))))))));
                    for (l_317 = 1; (l_317 >= 0); l_317 -= 1)
                    {
                        return g_203[0];
                    }
                }
                else
                {
                    for (g_176 = 0; (g_176 == (-10)); g_176 = safe_sub_func_int32_t_s_s(g_176, 9))
                    {
                        int *l_329 = &l_65;
                        (*l_109) = (p_48 != ((safe_lshift_func_uint16_t_u_s((p_46 == (((func_59((**l_107), g_203[4], p_48) , (void*)0) != ((p_47 >= (&g_2[2] != &g_84)) , (void*)0)) , (-2L))), g_277[8][1])) & p_46));
                        (*l_114) = l_329;

                        ;
                        (*l_108) |= ((**l_114) <= (safe_add_func_int32_t_s_s(((p_47 <= (&l_329 != &l_108)) == (*l_329)), g_290[0])));
                    }

                    ;
                }

                ;
                ;
                (*l_109) = p_48;
                if ((*l_115))
                {
                    unsigned char l_357 = 0xB5L;
                    if ((g_84 >= (safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(g_143[0][2], 5)), p_46))))
                    {
                        (*l_109) = ((0x9BC65250L | ((((safe_add_func_uint16_t_u_u((((0xD1L > p_47) , 0x1BA04E9CL) < 0x92B39E4FL), 4L)) , (void*)0) == &l_109) < (*l_115))) >= 0x4784L);
                        (**l_107) = (p_47 | ((safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(0x7ED3L, 0xA6ABL)), (safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s(p_47, ((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((g_176 , 0L), ((*l_109) > (safe_lshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(0xD4L, 1)) , (-8L)), l_356[1][8]))))), g_203[4])) , 0xD49BL))), 3)), (*l_109))))) <= p_47));
                    }
                    else
                    {
                        unsigned l_358[8][5] = {{0UL, 0UL, 4294967289UL, 0UL, 0UL}, {0UL, 0UL, 4294967289UL, 0UL, 0UL}, {0UL, 0UL, 4294967289UL, 0UL, 0UL}, {0UL, 0UL, 4294967289UL, 0UL, 0UL}, {0UL, 0UL, 4294967289UL, 0UL, 0UL}, {0UL, 0UL, 4294967289UL, 0UL, 0UL}, {0UL, 0UL, 4294967289UL, 0UL, 0UL}, {0UL, 0UL, 4294967289UL, 0UL, 0UL}};
                        int i, j;
                        (**l_107) &= l_315;
                    }
                    (*l_109) = (&g_175 != (void*)0);
                    l_315 |= ((((**l_107) != (safe_mod_func_uint16_t_u_u(((*g_215) == (void*)0), p_46))) <= ((safe_add_func_uint8_t_u_u((*l_109), g_203[7])) > ((0x59L >= p_47) ^ func_59(g_143[0][2], (**l_114), g_2[0])))) > p_48);
                }
                else
                {
                    (*l_108) &= (safe_div_func_uint8_t_u_u(((((void*)0 == &g_142) | g_198) < p_48), p_47));
                    for (l_152 = 0; (l_152 <= 5); l_152 += 1)
                    {
                        int i;
                        l_315 &= ((0x0C9FL > func_59(((safe_div_func_uint32_t_u_u(l_260[l_152], l_260[l_152])) , p_48), p_46, g_198)) != 0x30L);
                        return g_290[0];
                    }
                    return g_2[2];
                }
            }

            ;
            ;
            ;
            (*l_107) = (*l_114);

            ;
        }
        else
        {
            (**l_107) = p_46;
        }

        ;
        ;
        ;
        (*g_367) = (((*g_215) == (*g_215)) , (0UL ^ (**l_107)));
    }
    else
    {
        int l_370 = (-1L);
        int **l_374 = (void*)0;
        char l_378 = 1L;
        (*l_114) = (*l_114);
        for (l_65 = 0; (l_65 <= 4); l_65 += 1)
        {
            unsigned short l_373 = 1UL;
            short l_389 = (-3L);
            short l_390[5];
            int i;
            for (i = 0; i < 5; i++)
                l_390[i] = (-1L);
            if ((safe_sub_func_int32_t_s_s((l_370 <= (g_277[4][0] & ((((safe_sub_func_uint16_t_u_u((l_373 > ((((g_2[4] , &g_83) != l_374) & g_277[4][0]) == p_47)), 1UL)) > 0x7FF6L) > 0xB6CBL) == 9L))), (*g_367))))
            {
                int **l_388 = &l_115;
                char l_405 = 0x7BL;
                (*g_379) = func_59(p_46, p_46, (g_176 , ((**g_215) | p_47)));
                for (l_187 = 3; (l_187 >= 0); l_187 -= 1)
                {
                    int **l_406[6] = {&l_115, &l_115, &l_115, &l_115, &l_115, &l_115};
                    int i, j;
                    (*l_388) = ((*l_115) , (*l_114));
                    (*g_379) ^= (safe_add_func_uint16_t_u_u((p_48 , (g_143[l_187][(l_187 + 1)] , (safe_rshift_func_uint16_t_u_u((((safe_div_func_int32_t_s_s((p_46 == (65530UL > (((safe_lshift_func_int8_t_s_s((((*l_388) != (*g_215)) > 3UL), ((((((safe_sub_func_uint8_t_u_u((~func_59((safe_add_func_int32_t_s_s(((((((safe_mod_func_int16_t_s_s((l_374 != ((p_46 ^ 4294967288UL) , &g_379)), 0x4F74L)) ^ 0xB8L) | 0x4BDCL) <= g_143[l_187][(l_187 + 1)]) || 65535UL) != g_143[l_187][(l_187 + 1)]), p_46)), (*l_115), l_405)), g_290[0])) , p_46) , l_406[3]) == &g_216) > 0x2612L) ^ p_46))) == p_46) < p_47))), p_46)) || 0xB3L) || 0x27L), l_389)))), 0x38EEL));
                }
            }
            else
            {
                int *l_409 = &g_84;
                (*l_409) = ((**g_215) ^ (safe_rshift_func_int16_t_s_u(0xAF77L, (&g_175 == &g_216))));
                (*g_379) = (p_47 ^ (safe_sub_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint16_t_u_u(((*g_215) == (void*)0), (*l_409))) >= ((g_290[0] , p_47) && g_2[0])), ((void*)0 != (*g_215)))), 0xE3L)) == 0UL), g_2[0])));
                for (l_370 = 0; (l_370 < (-4)); l_370 = safe_sub_func_int16_t_s_s(l_370, 4))
                {
                    if (l_390[0])
                        break;
                    return (*l_115);
                }
            }
        }
    }

    ;
    ;
    ;
    if ((p_46 || g_143[2][4]))
    {
        int l_421 = 0xDC9E6CE6L;
        int l_422 = 0x0253F423L;
        unsigned short l_434 = 0x2B1FL;
        if (p_46)
        {
            l_422 |= l_421;
        }
        else
        {
            unsigned l_429[9][4][3] = {{{4294967292UL, 0x49E12308L, 0x1CAFE624L}, {4294967292UL, 0x49E12308L, 0x1CAFE624L}, {4294967292UL, 0x49E12308L, 0x1CAFE624L}, {4294967292UL, 0x49E12308L, 0x1CAFE624L}}, {{4294967292UL, 0x49E12308L, 0x1CAFE624L}, {4294967292UL, 0x49E12308L, 0x1CAFE624L}, {4294967292UL, 0x49E12308L, 0x1CAFE624L}, {4294967292UL, 0x49E12308L, 0x1CAFE624L}}, {{4294967292UL, 0x49E12308L, 0x1CAFE624L}, {4294967292UL, 0x49E12308L, 0x1CAFE624L}, {4294967292UL, 0x49E12308L, 0x1CAFE624L}, {4294967292UL, 0x49E12308L, 0x1CAFE624L}}, {{4294967292UL, 0x49E12308L, 0x1CAFE624L}, {4294967292UL, 0x49E12308L, 0x1CAFE624L}, {4294967292UL, 0x49E12308L, 0x1CAFE624L}, {4294967292UL, 0x49E12308L, 0x1CAFE624L}}, {{4294967292UL, 0x49E12308L, 0x1CAFE624L}, {4294967292UL, 0x49E12308L, 0x1CAFE624L}, {4294967292UL, 0x49E12308L, 0x1CAFE624L}, {4294967292UL, 0x49E12308L, 0x1CAFE624L}}, {{4294967292UL, 0x49E12308L, 0x1CAFE624L}, {4294967292UL, 0x49E12308L, 0x1CAFE624L}, {4294967292UL, 0x49E12308L, 0x1CAFE624L}, {4294967292UL, 0x49E12308L, 0x1CAFE624L}}, {{4294967292UL, 0x49E12308L, 0x1CAFE624L}, {4294967292UL, 0x49E12308L, 0x1CAFE624L}, {4294967292UL, 0x49E12308L, 0x1CAFE624L}, {4294967292UL, 0x49E12308L, 0x1CAFE624L}}, {{4294967292UL, 0x49E12308L, 0x1CAFE624L}, {4294967292UL, 0x49E12308L, 0x1CAFE624L}, {4294967292UL, 0x49E12308L, 0x1CAFE624L}, {4294967292UL, 0x49E12308L, 0x1CAFE624L}}, {{4294967292UL, 0x49E12308L, 0x1CAFE624L}, {4294967292UL, 0x49E12308L, 0x1CAFE624L}, {4294967292UL, 0x49E12308L, 0x1CAFE624L}, {4294967292UL, 0x49E12308L, 0x1CAFE624L}}};
            int i, j, k;
            l_433 &= ((((((func_59(l_422, g_277[4][0], (((safe_lshift_func_int8_t_s_s((g_203[4] | ((safe_mod_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u(p_47, ((-8L) || (((l_429[0][2][0] == (((((&g_290[1] != (void*)0) , (((safe_rshift_func_int16_t_s_s(l_421, 5)) & (**l_114)) < (-6L))) <= (**l_114)) < 0x9F150C3EL) & 0xE67AF156L)) >= p_46) ^ 0xCDL)))) , (-1L)), 6UL)) , 1L)), 0)) < (**l_114)) , g_203[4])) ^ 0x08L) == 1UL) == l_432[0]) , g_203[6]) , l_429[0][2][0]) > 1UL);
        }
        return l_434;
    }
    else
    {
        int l_440 = 0L;
        short l_441[10] = {6L, 0x37E3L, 0xBE32L, 0xBE32L, 0x37E3L, 6L, 0x37E3L, 0xBE32L, 0xBE32L, 0x37E3L};
        int *l_446 = &g_143[1][3];
        unsigned l_452 = 5UL;
        unsigned l_473 = 0x7977D003L;
        int i;
        if (((safe_rshift_func_uint8_t_u_s((p_47 || ((safe_sub_func_uint8_t_u_u(g_143[0][2], g_84)) != 0x50C8L)), (*l_446))) , (*g_379)))
        {
            (*l_446) = ((safe_add_func_int8_t_s_s(((g_290[0] != 0xC315A7D8L) != (((((*l_446) || g_290[0]) , &g_142) == &l_115) < (safe_rshift_func_int8_t_s_u(p_47, 6)))), g_203[8])) && (*g_142));
        }
        else
        {
            int * volatile l_455 = (void*)0;
            int *l_465 = &g_2[7];
            unsigned char l_482 = 255UL;
            for (g_176 = 0; (g_176 >= 25); g_176++)
            {
                int *l_472[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_472[i] = &g_143[0][2];
                if (p_46)
                {
                    l_455 = (*g_215);
                    if (p_48)
                        break;
                    if (p_48)
                        break;
                }
                else
                {
                    unsigned l_458 = 0xEAFA2BA3L;
                    short l_466[5][5][7] = {{{0x125EL, 0x125EL, 0x5159L, (-1L), (-9L), (-1L), 0x5159L}, {0x125EL, 0x125EL, 0x5159L, (-1L), (-9L), (-1L), 0x5159L}, {0x125EL, 0x125EL, 0x5159L, (-1L), (-9L), (-1L), 0x5159L}, {0x125EL, 0x125EL, 0x5159L, (-1L), (-9L), (-1L), 0x5159L}, {0x125EL, 0x125EL, 0x5159L, (-1L), (-9L), (-1L), 0x5159L}}, {{0x125EL, 0x125EL, 0x5159L, (-1L), (-9L), (-1L), 0x5159L}, {0x125EL, 0x125EL, 0x5159L, (-1L), (-9L), (-1L), 0x5159L}, {0x125EL, 0x125EL, 0x5159L, (-1L), (-9L), (-1L), 0x5159L}, {0x125EL, 0x125EL, 0x5159L, (-1L), (-9L), (-1L), 0x5159L}, {0x125EL, 0x125EL, 0x5159L, (-1L), (-9L), (-1L), 0x5159L}}, {{0x125EL, 0x125EL, 0x5159L, (-1L), (-9L), (-1L), 0x5159L}, {0x125EL, 0x125EL, 0x5159L, (-1L), (-9L), (-1L), 0x5159L}, {0x125EL, 0x125EL, 0x5159L, (-1L), (-9L), (-1L), 0x5159L}, {0x125EL, 0x125EL, 0x5159L, (-1L), (-9L), (-1L), 0x5159L}, {0x125EL, 0x125EL, 0x5159L, (-1L), (-9L), (-1L), 0x5159L}}, {{0x125EL, 0x125EL, 0x5159L, (-1L), (-9L), (-1L), 0x5159L}, {0x125EL, 0x125EL, 0x5159L, (-1L), (-9L), (-1L), 0x5159L}, {0x125EL, 0x125EL, 0x5159L, (-1L), (-9L), (-1L), 0x5159L}, {0x125EL, 0x125EL, 0x5159L, (-1L), (-9L), (-1L), 0x5159L}, {0x125EL, 0x125EL, 0x5159L, (-1L), (-9L), (-1L), 0x5159L}}, {{0x125EL, 0x125EL, 0x5159L, (-1L), (-9L), (-1L), 0x5159L}, {0x125EL, 0x125EL, 0x5159L, (-1L), (-9L), (-1L), 0x5159L}, {0x125EL, 0x125EL, 0x5159L, (-1L), (-9L), (-1L), 0x5159L}, {0x125EL, 0x125EL, 0x5159L, (-1L), (-9L), (-1L), 0x5159L}, {0x125EL, 0x125EL, 0x5159L, (-1L), (-9L), (-1L), 0x5159L}}};
                    int *l_471 = &g_84;
                    int l_495 = 0xEA204644L;
                    int i, j, k;
                    (*l_446) = ((safe_mod_func_int32_t_s_s(p_47, (-1L))) > (g_290[0] < (g_2[0] || g_2[3])));
                    l_473 ^= ((safe_sub_func_uint32_t_u_u((p_47 , ((l_458 && ((*g_215) != l_471)) <= (*l_115))), ((*g_142) < ((p_46 , &g_143[2][5]) == l_472[3])))) , (*l_471));
                    if (((safe_add_func_int32_t_s_s(((g_277[7][6] || 7L) >= ((safe_div_func_int16_t_s_s((func_59((safe_div_func_int8_t_s_s((func_59(g_198, (safe_add_func_uint8_t_u_u(((((~(l_482 == (((&l_472[3] == &l_446) > 0xBF1AL) && (p_47 || (((safe_sub_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u(g_203[4], p_46)) , 0xF16AL) ^ 0xA6B7L), (*l_115))) < 1UL) <= p_47))))) , g_290[0]) || p_48) & g_176), g_143[4][5])), (*l_471)) != 0L), (*l_465))), g_290[0], p_48) != p_46), g_277[6][5])) | p_48)), 0UL)) == 0L))
                    {
                        int *l_496 = &g_143[0][2];
                        (*l_471) = (((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(g_84, 1)), g_203[4])) == (g_2[0] , ((((safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(l_495, p_48)), ((-9L) && g_277[4][0]))) , 246UL) | p_48) == g_176))) ^ p_47);
                        (*g_215) = l_496;

                        ;
                    }
                    else
                    {
                        (*l_114) = (*l_114);
                    }
                    (*l_471) = (&l_472[3] != &l_455);
                }
                for (l_187 = 1; (l_187 >= 0); l_187 -= 1)
                {
                    int *l_497[6][10][4] = {{{&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}}, {{&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}}, {{&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}}, {{&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}}, {{&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}}, {{&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}, {&l_433, &g_176, &l_433, &g_290[0]}}};
                    int i, j, k;
                    for (p_47 = 0; (p_47 <= 6); p_47 += 1)
                    {
                        int i;
                        l_497[4][3][2] = &g_290[l_187];
                        if (l_441[(l_187 + 2)])
                            break;
                        g_290[l_187] &= (safe_mod_func_int16_t_s_s(l_441[(l_187 + 2)], (*l_446)));
                        (*l_446) = (&g_290[l_187] != (((((0x401306C3L ^ ((*l_114) != (((*l_446) || g_2[0]) , l_446))) , (((*g_215) == &g_290[l_187]) ^ ((p_47 , 0x9339L) >= g_84))) <= p_47) == p_47) , l_472[3]));
                    }
                    return g_290[l_187];
                }
                if ((*g_379))
                    break;
            }

            ;
        }
        (*g_215) = (*g_215);
        l_446 = (*l_114);

        ;
        for (p_48 = 0; (p_48 <= (-27)); --p_48)
        {
            unsigned l_504 = 0xFA7C76EAL;
            unsigned l_506[3];
            int **l_512 = &g_216;
            int i;
            for (i = 0; i < 3; i++)
                l_506[i] = 7UL;
            if ((*g_175))
            {
                int l_505[1][1][9] = {{{(-4L), 6L, (-4L), 6L, (-4L), 6L, (-4L), 6L, (-4L)}}};
                int *l_509 = &l_433;
                int i, j, k;
                l_505[0][0][3] |= l_504;
                (*l_509) &= func_59((*l_115), (*l_446), (l_506[2] != func_59(func_59((safe_sub_func_uint32_t_u_u(0xE28DC084L, 0xA7E381A9L)), l_506[2], g_203[4]), g_143[0][2], l_506[2])));
            }
            else
            {
                short l_510 = 0xAA69L;
                if (p_46)
                {
                    int *l_511 = &g_176;
                    (*g_367) = l_510;
                    (*l_511) = 0x11BA5C8DL;
                }
                else
                {
                    (*g_379) = p_47;
                }
                (*g_514) = ((0xFF69008CL || 7UL) , (l_446 == (*g_215)));
                for (l_452 = 0; (l_452 != 34); l_452 = safe_add_func_int32_t_s_s(l_452, 9))
                {
                    (*l_512) = (*l_114);

                    ;
                }

                ;
                (*g_379) ^= (l_510 <= g_176);
            }

            ;
            return p_46;


        }
    }
    l_65 = (**l_114);
    (*g_215) = (l_517 , (*g_215));
    return g_290[1];
}







static int func_49(int p_50, int p_51, unsigned char p_52, unsigned short p_53, int p_54)
{
    unsigned l_82 = 0xC67CE96EL;
    int *l_97 = &g_2[7];
    int **l_96[3][3][5] = {{{(void*)0, &l_97, &l_97, &l_97, (void*)0}, {(void*)0, &l_97, &l_97, &l_97, (void*)0}, {(void*)0, &l_97, &l_97, &l_97, (void*)0}}, {{(void*)0, &l_97, &l_97, &l_97, (void*)0}, {(void*)0, &l_97, &l_97, &l_97, (void*)0}, {(void*)0, &l_97, &l_97, &l_97, (void*)0}}, {{(void*)0, &l_97, &l_97, &l_97, (void*)0}, {(void*)0, &l_97, &l_97, &l_97, (void*)0}, {(void*)0, &l_97, &l_97, &l_97, (void*)0}}};
    int i, j, k;
    (*g_83) = l_82;
    g_83 = (((safe_lshift_func_int16_t_s_s(l_82, 15)) , ((((safe_div_func_uint32_t_u_u((func_59((safe_unary_minus_func_uint8_t_u(l_82)), l_82, p_52) || (safe_add_func_int16_t_s_s(p_53, (safe_add_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u(g_2[0], g_84)) >= (func_59((g_2[0] ^ 0x80C53E4AL), l_82, l_82) && 0L)) , g_2[1]), 0x9DL))))), 1UL)) , l_82) , p_53) | p_50)) , (void*)0);

    ;
    return p_53;
}







static char func_59(unsigned p_60, int p_61, unsigned p_62)
{
    unsigned l_76 = 0xC5262C08L;
    int l_81[8][8] = {{1L, 0xC3AC0F78L, 0L, 0x8F630B13L, 0x5BA80B38L, 0x5BA80B38L, 0x8F630B13L, 0L}, {1L, 0xC3AC0F78L, 0L, 0x8F630B13L, 0x5BA80B38L, 0x5BA80B38L, 0x8F630B13L, 0L}, {1L, 0xC3AC0F78L, 0L, 0x8F630B13L, 0x5BA80B38L, 0x5BA80B38L, 0x8F630B13L, 0L}, {1L, 0xC3AC0F78L, 0L, 0x8F630B13L, 0x5BA80B38L, 0x5BA80B38L, 0x8F630B13L, 0L}, {1L, 0xC3AC0F78L, 0L, 0x8F630B13L, 0x5BA80B38L, 0x5BA80B38L, 0x8F630B13L, 0L}, {1L, 0xC3AC0F78L, 0L, 0x8F630B13L, 0x5BA80B38L, 0x5BA80B38L, 0x8F630B13L, 0L}, {1L, 0xC3AC0F78L, 0L, 0x8F630B13L, 0x5BA80B38L, 0x5BA80B38L, 0x8F630B13L, 0L}, {1L, 0xC3AC0F78L, 0L, 0x8F630B13L, 0x5BA80B38L, 0x5BA80B38L, 0x8F630B13L, 0L}};
    int i, j;
    l_81[0][0] = (safe_add_func_uint8_t_u_u((0x4923552EL | (g_2[0] ^ ((safe_mod_func_int32_t_s_s(((p_61 >= ((safe_add_func_int32_t_s_s((+(safe_div_func_uint32_t_u_u((((0x3FL < (l_76 , ((safe_div_func_uint8_t_u_u(0x43L, p_61)) && (((safe_add_func_uint8_t_u_u(g_2[0], p_60)) > l_76) , 0x9845F054L)))) && p_60) != l_76), g_2[6]))), 0x59A115EAL)) != 0x5042L)) , l_76), p_61)) && l_76))), 0x58L));
    return p_61;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_84, "g_84", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_143[i][j], "g_143[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_203[i], "g_203[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_277[i][j], "g_277[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_290[i], "g_290[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_551, "g_551", print_hash_value);
    transparent_crc(g_721, "g_721", print_hash_value);
    transparent_crc(g_749, "g_749", print_hash_value);
    transparent_crc(g_836, "g_836", print_hash_value);
    transparent_crc(g_852, "g_852", print_hash_value);
    transparent_crc(g_961, "g_961", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
