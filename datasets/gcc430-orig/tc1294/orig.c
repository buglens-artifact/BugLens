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



static int g_14[8] = {0x11D962EEL, 0x11D962EEL, 0x11D962EEL, 0x11D962EEL, 0x11D962EEL, 0x11D962EEL, 0x11D962EEL, 0x11D962EEL};
static int g_22 = 0x14A9BACDL;
static int *g_21[10][1][3] = {{{&g_22, (void*)0, &g_22}}, {{&g_22, (void*)0, &g_22}}, {{&g_22, (void*)0, &g_22}}, {{&g_22, (void*)0, &g_22}}, {{&g_22, (void*)0, &g_22}}, {{&g_22, (void*)0, &g_22}}, {{&g_22, (void*)0, &g_22}}, {{&g_22, (void*)0, &g_22}}, {{&g_22, (void*)0, &g_22}}, {{&g_22, (void*)0, &g_22}}};
static int g_39 = (-1L);
static int **g_57 = (void*)0;
static const int g_70 = 0x796224A1L;
static const int *g_69[9][6] = {{&g_70, &g_70, &g_70, &g_70, &g_70, &g_70}, {&g_70, &g_70, &g_70, &g_70, &g_70, &g_70}, {&g_70, &g_70, &g_70, &g_70, &g_70, &g_70}, {&g_70, &g_70, &g_70, &g_70, &g_70, &g_70}, {&g_70, &g_70, &g_70, &g_70, &g_70, &g_70}, {&g_70, &g_70, &g_70, &g_70, &g_70, &g_70}, {&g_70, &g_70, &g_70, &g_70, &g_70, &g_70}, {&g_70, &g_70, &g_70, &g_70, &g_70, &g_70}, {&g_70, &g_70, &g_70, &g_70, &g_70, &g_70}};
static unsigned short g_106 = 0x07EFL;
static unsigned short *g_105 = &g_106;
static unsigned short **g_104[7][8] = {{&g_105, (void*)0, (void*)0, &g_105, &g_105, &g_105, &g_105, &g_105}, {&g_105, (void*)0, (void*)0, &g_105, &g_105, &g_105, &g_105, &g_105}, {&g_105, (void*)0, (void*)0, &g_105, &g_105, &g_105, &g_105, &g_105}, {&g_105, (void*)0, (void*)0, &g_105, &g_105, &g_105, &g_105, &g_105}, {&g_105, (void*)0, (void*)0, &g_105, &g_105, &g_105, &g_105, &g_105}, {&g_105, (void*)0, (void*)0, &g_105, &g_105, &g_105, &g_105, &g_105}, {&g_105, (void*)0, (void*)0, &g_105, &g_105, &g_105, &g_105, &g_105}};
static char g_114 = (-4L);
static int g_117[3] = {0xBF9FC003L, 0xBF9FC003L, 0xBF9FC003L};
static unsigned g_166[7][4][9] = {{{0x1B79EC1FL, 4294967287UL, 5UL, 1UL, 5UL, 4294967287UL, 0x1B79EC1FL, 0UL, 1UL}, {0x1B79EC1FL, 4294967287UL, 5UL, 1UL, 5UL, 4294967287UL, 0x1B79EC1FL, 0UL, 1UL}, {0x1B79EC1FL, 4294967287UL, 5UL, 1UL, 5UL, 4294967287UL, 0x1B79EC1FL, 0UL, 1UL}, {0x1B79EC1FL, 4294967287UL, 5UL, 1UL, 5UL, 4294967287UL, 0x1B79EC1FL, 0UL, 1UL}}, {{0x1B79EC1FL, 4294967287UL, 5UL, 1UL, 5UL, 4294967287UL, 0x1B79EC1FL, 0UL, 1UL}, {0x1B79EC1FL, 4294967287UL, 5UL, 1UL, 5UL, 4294967287UL, 0x1B79EC1FL, 0UL, 1UL}, {0x1B79EC1FL, 4294967287UL, 5UL, 1UL, 5UL, 4294967287UL, 0x1B79EC1FL, 0UL, 1UL}, {0x1B79EC1FL, 4294967287UL, 5UL, 1UL, 5UL, 4294967287UL, 0x1B79EC1FL, 0UL, 1UL}}, {{0x1B79EC1FL, 4294967287UL, 5UL, 1UL, 5UL, 4294967287UL, 0x1B79EC1FL, 0UL, 1UL}, {0x1B79EC1FL, 4294967287UL, 5UL, 1UL, 5UL, 4294967287UL, 0x1B79EC1FL, 0UL, 1UL}, {0x1B79EC1FL, 4294967287UL, 5UL, 1UL, 5UL, 4294967287UL, 0x1B79EC1FL, 0UL, 1UL}, {0x1B79EC1FL, 4294967287UL, 5UL, 1UL, 5UL, 4294967287UL, 0x1B79EC1FL, 0UL, 1UL}}, {{0x1B79EC1FL, 4294967287UL, 5UL, 1UL, 5UL, 4294967287UL, 0x1B79EC1FL, 0UL, 1UL}, {0x1B79EC1FL, 4294967287UL, 5UL, 1UL, 5UL, 4294967287UL, 0x1B79EC1FL, 0UL, 1UL}, {0x1B79EC1FL, 4294967287UL, 5UL, 1UL, 5UL, 4294967287UL, 0x1B79EC1FL, 0UL, 1UL}, {0x1B79EC1FL, 4294967287UL, 5UL, 1UL, 5UL, 4294967287UL, 0x1B79EC1FL, 0UL, 1UL}}, {{0x1B79EC1FL, 4294967287UL, 5UL, 1UL, 5UL, 4294967287UL, 0x1B79EC1FL, 0UL, 1UL}, {0x1B79EC1FL, 4294967287UL, 5UL, 1UL, 5UL, 4294967287UL, 0x1B79EC1FL, 0UL, 1UL}, {0x1B79EC1FL, 4294967287UL, 5UL, 1UL, 5UL, 4294967287UL, 0x1B79EC1FL, 0UL, 1UL}, {0x1B79EC1FL, 4294967287UL, 5UL, 1UL, 5UL, 4294967287UL, 0x1B79EC1FL, 0UL, 1UL}}, {{0x1B79EC1FL, 4294967287UL, 5UL, 1UL, 5UL, 4294967287UL, 0x1B79EC1FL, 0UL, 1UL}, {0x1B79EC1FL, 4294967287UL, 5UL, 1UL, 5UL, 4294967287UL, 0x1B79EC1FL, 0UL, 1UL}, {0x1B79EC1FL, 4294967287UL, 5UL, 1UL, 5UL, 4294967287UL, 0x1B79EC1FL, 0UL, 1UL}, {0x1B79EC1FL, 4294967287UL, 5UL, 1UL, 5UL, 4294967287UL, 0x1B79EC1FL, 0UL, 1UL}}, {{0x1B79EC1FL, 4294967287UL, 5UL, 1UL, 5UL, 4294967287UL, 0x1B79EC1FL, 0UL, 1UL}, {0x1B79EC1FL, 4294967287UL, 5UL, 1UL, 5UL, 4294967287UL, 0x1B79EC1FL, 0UL, 1UL}, {0x1B79EC1FL, 4294967287UL, 5UL, 1UL, 5UL, 4294967287UL, 0x1B79EC1FL, 0UL, 1UL}, {0x1B79EC1FL, 4294967287UL, 5UL, 1UL, 5UL, 4294967287UL, 0x1B79EC1FL, 0UL, 1UL}}};
static unsigned *g_165 = &g_166[1][0][3];
static unsigned short g_167 = 0x2D94L;
static unsigned char g_196 = 0xE0L;
static unsigned char g_213 = 0x3BL;
static short g_302[10][6][4] = {{{0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}}, {{0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}}, {{0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}}, {{0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}}, {{0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}}, {{0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}}, {{0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}}, {{0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}}, {{0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}}, {{0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}, {0xD800L, (-9L), (-1L), 0x813AL}}};
static const int *g_333 = &g_39;
static const int **g_332 = &g_333;
static int * const *g_348[3] = {&g_21[9][0][1], &g_21[9][0][1], &g_21[9][0][1]};
static int * const **g_347 = &g_348[2];
static unsigned char g_358 = 1UL;
static char *g_369 = &g_114;
static char **g_368 = &g_369;
static unsigned g_376 = 6UL;
static const int g_396 = 0x8733DA6AL;
static short g_442 = 0x4C25L;
static int *g_446 = &g_39;
static int g_452[3][2] = {{(-1L), (-1L)}, {(-1L), (-1L)}, {(-1L), (-1L)}};
static unsigned g_489 = 0x65D6733DL;
static const int **g_497 = &g_69[5][1];
static const int ***g_496 = &g_497;
static unsigned g_504 = 1UL;
static unsigned *g_546 = &g_376;
static unsigned **g_545 = &g_546;
static unsigned short ***g_648[4] = {&g_104[1][7], &g_104[5][6], &g_104[1][7], &g_104[5][6]};
static unsigned short *** const *g_647 = &g_648[3];
static int g_668 = (-1L);
static const int g_713 = 0xDF3330F3L;
static int **g_716 = &g_21[2][0][1];
static int ***g_715 = &g_716;
static int ****g_714 = &g_715;
static short *g_724 = &g_302[4][4][0];
static short **g_723 = &g_724;
static unsigned * const *g_743 = &g_165;
static unsigned char *g_818 = &g_196;
static short g_925 = 0x5D1BL;
static char g_948 = 0xD3L;
static char g_975 = 1L;
static unsigned char g_996 = 0xB3L;
static unsigned g_1005 = 0x333D59DDL;
static int g_1092[10][8] = {{0xD703B26EL, 0xE4FF816EL, 0xDF7AD348L, (-10L), (-3L), (-10L), 0xDF7AD348L, 0xE4FF816EL}, {0xD703B26EL, 0xE4FF816EL, 0xDF7AD348L, (-10L), (-3L), (-10L), 0xDF7AD348L, 0xE4FF816EL}, {0xD703B26EL, 0xE4FF816EL, 0xDF7AD348L, (-10L), (-3L), (-10L), 0xDF7AD348L, 0xE4FF816EL}, {0xD703B26EL, 0xE4FF816EL, 0xDF7AD348L, (-10L), (-3L), (-10L), 0xDF7AD348L, 0xE4FF816EL}, {0xD703B26EL, 0xE4FF816EL, 0xDF7AD348L, (-10L), (-3L), (-10L), 0xDF7AD348L, 0xE4FF816EL}, {0xD703B26EL, 0xE4FF816EL, 0xDF7AD348L, (-10L), (-3L), (-10L), 0xDF7AD348L, 0xE4FF816EL}, {0xD703B26EL, 0xE4FF816EL, 0xDF7AD348L, (-10L), (-3L), (-10L), 0xDF7AD348L, 0xE4FF816EL}, {0xD703B26EL, 0xE4FF816EL, 0xDF7AD348L, (-10L), (-3L), (-10L), 0xDF7AD348L, 0xE4FF816EL}, {0xD703B26EL, 0xE4FF816EL, 0xDF7AD348L, (-10L), (-3L), (-10L), 0xDF7AD348L, 0xE4FF816EL}, {0xD703B26EL, 0xE4FF816EL, 0xDF7AD348L, (-10L), (-3L), (-10L), 0xDF7AD348L, 0xE4FF816EL}};
static unsigned g_1093 = 4294967295UL;
static unsigned g_1105 = 0xDD7E90C2L;
static char g_1109 = (-3L);
static unsigned g_1132 = 4294967287UL;



static unsigned short func_1(void);
static int * func_2(char p_3, int * p_4, int * p_5, unsigned char p_6, short p_7);
static int * func_9(int p_10, unsigned p_11);
static const int func_15(int * p_16, unsigned char p_17, int p_18);
static int * func_19(int * p_20);
static unsigned func_27(int * const p_28, int p_29, int p_30, int * p_31, unsigned p_32);
static unsigned short func_35(int * p_36, int p_37);
static const int * func_41(int * p_42, int ** p_43, short p_44, unsigned char p_45, short p_46);
static int ** func_47(unsigned p_48, int ** p_49, int * p_50);
static int ** func_52(int ** p_53, short p_54, char p_55, unsigned char p_56);
static unsigned short func_1(void)
{
    unsigned char l_8 = 0UL;
    int l_12 = 0xC8748AFAL;
    int *l_13 = &g_14[5];
    short **l_1001 = &g_724;
    short ***l_1002 = &l_1001;
    unsigned *l_1003 = (void*)0;
    unsigned *l_1004[3];
    short l_1103 = 0xA327L;
    short l_1107 = 0x70BCL;
    short l_1123 = 0xC6E6L;
    int ****l_1124 = &g_715;
    int *****l_1125 = (void*)0;
    int ****l_1126 = &g_715;
    int l_1129 = 0L;
    short l_1130 = 4L;
    unsigned char l_1131 = 255UL;
    int *l_1133 = &g_117[0];
    int i;
    for (i = 0; i < 3; i++)
        l_1004[i] = &g_1005;
    (*g_497) = func_2(l_8, func_9(((*l_13) = l_12), (l_8 > func_15(func_19(g_21[8][0][0]), l_12, (((*l_1002) = l_1001) != ((g_1005 = g_975) , &g_724))))), &g_117[0], g_668, l_12);





    for (g_376 = 0; (g_376 <= 0); g_376 += 1)
    {
        int *l_1104 = &g_117[2];
        int l_1108 = 0xC3D840ACL;
        unsigned l_1114[2];
        int i;
        for (i = 0; i < 2; i++)
            l_1114[i] = 0UL;
        (**g_496) = &l_12;
        l_12 = func_15(l_1003, g_1092[6][7], (((*g_724) = func_35((l_12 , l_1004[0]), (*g_446))) && g_1093));
        for (g_39 = 0; (g_39 <= 0); g_39 += 1)
        {
            int *l_1094 = &g_452[2][1];
            int *l_1097 = &g_1092[6][3];
            char l_1106 = 1L;
            unsigned char *l_1112 = (void*)0;
            unsigned char *l_1113[8][5] = {{&l_8, &l_8, &g_358, &g_996, &l_8}, {&l_8, &l_8, &g_358, &g_996, &l_8}, {&l_8, &l_8, &g_358, &g_996, &l_8}, {&l_8, &l_8, &g_358, &g_996, &l_8}, {&l_8, &l_8, &g_358, &g_996, &l_8}, {&l_8, &l_8, &g_358, &g_996, &l_8}, {&l_8, &l_8, &g_358, &g_996, &l_8}, {&l_8, &l_8, &g_358, &g_996, &l_8}};
            int *l_1115 = &l_1108;
            int i, j;
            l_12 = (*l_1094);
            (*l_1115) = (((((0xD8L & ((safe_lshift_func_uint8_t_u_s((*g_818), 7)) != 0x4EL)) != (*l_1094)) | func_15(func_2(((l_12 = (*g_818)) , (l_1114[1] <= ((g_213 = l_1107) || 5L))), l_1115, l_1097, (*g_818), l_1107), (*g_818), (*g_333))) , &l_1106) != (*g_368));
            for (g_106 = 0; (g_106 <= 0); g_106 += 1)
            {
                for (g_114 = 0; (g_114 <= 0); g_114 += 1)
                {
                    int *l_1116[10][10][2] = {{{&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}}, {{&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}}, {{&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}}, {{&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}}, {{&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}}, {{&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}}, {{&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}}, {{&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}}, {{&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}}, {{&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}, {&g_452[2][0], &l_12}}};
                    int i, j, k;
                    g_21[(g_114 + 1)][g_114][(g_106 + 1)] = l_1116[3][7][1];
                }
            }
        }
    }



    (*l_1133) = ((*g_818) != ((safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((l_1123 , l_1124) != (g_714 = (l_1126 = &g_715))), (func_15(l_1004[2], (((((**g_723) , ((*g_165) = (**g_743))) ^ ((((0L == (safe_div_func_int32_t_s_s((((l_1129 | l_1130) && l_1131) != 1L), g_1132))) , 0x07CF8AFBL) , (*g_647)) == (void*)0)) && l_1103) , (*g_818)), (**g_332)) || (**g_368)))), (**g_368))), g_302[2][0][2])) >= (*g_369)));
    return (*g_105);



}







static int * func_2(char p_3, int * p_4, int * p_5, unsigned char p_6, short p_7)
{
    unsigned short ****l_1087 = &g_648[3];
    unsigned short *****l_1086 = &l_1087;
    const int l_1090 = 0x5F466C72L;
    int *l_1091 = &g_22;
    (*p_5) = (p_7 , (safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((((safe_div_func_uint8_t_u_u((*g_818), (*g_818))) == (((((*l_1086) = &g_648[0]) != (p_7 , &g_648[3])) >= ((*g_165) != (!((p_7 != ((*g_818) == l_1090)) , 0xB33D429DL)))) != p_6)) ^ (*g_818)), l_1090)), l_1090)));
    (*p_5) = l_1090;
    return l_1091;


}







static int * func_9(int p_10, unsigned p_11)
{
    short l_1008[5][8] = {{0xBDD4L, 3L, 3L, 0L, (-2L), 0L, 3L, 3L}, {0xBDD4L, 3L, 3L, 0L, (-2L), 0L, 3L, 3L}, {0xBDD4L, 3L, 3L, 0L, (-2L), 0L, 3L, 3L}, {0xBDD4L, 3L, 3L, 0L, (-2L), 0L, 3L, 3L}, {0xBDD4L, 3L, 3L, 0L, (-2L), 0L, 3L, 3L}};
    int l_1009 = (-1L);
    short ** const *l_1024 = (void*)0;
    int *l_1026[5] = {&g_39, (void*)0, &g_39, (void*)0, &g_39};
    int *l_1037[6];
    unsigned short *** const *l_1064 = &g_648[3];
    int *l_1079[8] = {&g_22, &g_22, &g_117[1], &g_22, &g_22, &g_117[1], &g_22, &g_22};
    int i, j;
    for (i = 0; i < 6; i++)
        l_1037[i] = &g_14[7];
    l_1009 = l_1008[2][1];
    for (g_22 = 0; (g_22 < 6); g_22++)
    {
        char *l_1018 = &g_975;
        int l_1019 = 0x3B991CBBL;
        short ***l_1025 = &g_723;
        int **l_1063 = (void*)0;
    }
    if (func_35((((p_10 & (p_10 != (((&g_648[2] != l_1064) || (safe_add_func_uint32_t_u_u(l_1008[2][1], l_1008[1][4]))) , ((l_1009 , 254UL) & (*g_369))))) , 1UL) , &g_14[5]), p_11))
    {
        int l_1069 = (-1L);
        unsigned char *l_1074 = &g_213;
        int *l_1075 = (void*)0;
        int *l_1076 = &g_22;
        l_1009 = func_15(l_1026[4], l_1008[2][1], (safe_sub_func_int32_t_s_s(l_1069, 0x48F5B834L)));
        (*l_1076) = ((((*l_1074) = func_15(&p_10, (*g_818), (8UL && ((*g_105) = (safe_div_func_int16_t_s_s((safe_sub_func_int8_t_s_s(func_15(&p_10, (*g_818), ((*g_446) = 4L)), ((*l_1074) = ((!(*g_165)) != (p_10 , l_1009))))), p_10)))))) ^ 0xCFL) , l_1069);
    }
    else
    {
        int l_1077 = 0x7A1969E5L;
        int *l_1078 = (void*)0;
        l_1077 = p_11;
        return l_1078;


    }
    return l_1079[3];


}







static const int func_15(int * p_16, unsigned char p_17, int p_18)
{
    int *l_1006 = (void*)0;
    const int l_1007 = 0xC9206C31L;
    (**g_496) = l_1006;
    return l_1007;
}







static int * func_19(int * p_20)
{
    int l_58[2];
    int *l_667[3];
    int l_727[7] = {0x86A1DD33L, 0xA4B66327L, 0x86A1DD33L, 0xA4B66327L, 0x86A1DD33L, 0xA4B66327L, 0x86A1DD33L};
    char l_730[5] = {1L, 0xBEL, 1L, 0xBEL, 1L};
    int *l_731 = &g_452[1][1];
    unsigned ** const l_762 = &g_546;
    unsigned short l_837[7];
    char l_883 = 0x1DL;
    unsigned short ***l_929[3];
    int i;
    for (i = 0; i < 2; i++)
        l_58[i] = (-9L);
    for (i = 0; i < 3; i++)
        l_667[i] = &g_668;
    for (i = 0; i < 7; i++)
        l_837[i] = 65527UL;
    for (i = 0; i < 3; i++)
        l_929[i] = &g_104[5][1];
    for (g_22 = (-5); (g_22 < (-29)); --g_22)
    {
        int *l_38 = &g_39;
        int **l_40 = &l_38;
        int l_51 = (-6L);
        const int **l_383 = &g_69[5][1];
        const int **l_384 = &g_69[6][2];
        const int **l_385 = &g_69[7][5];
        const int **l_386 = &g_69[5][1];
        const int **l_387 = &g_69[5][1];
        const int **l_388 = (void*)0;
        const int **l_389 = &g_69[5][1];
        const int **l_390 = &g_69[5][1];
        const int **l_391 = &g_69[1][4];
        const int **l_392 = (void*)0;
        const int **l_393 = (void*)0;
        const int **l_394 = (void*)0;
        const int *l_395 = &g_396;
        unsigned l_397 = 4294967295UL;
        int **l_665[3];
        int **l_666 = &l_38;
        unsigned char *l_726 = &g_358;
        unsigned char l_734 = 251UL;
        unsigned short **l_767[2];
        short l_798 = 0L;
        unsigned l_807[7][10][3] = {{{4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}}, {{4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}}, {{4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}}, {{4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}}, {{4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}}, {{4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}}, {{4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}, {4294967295UL, 6UL, 9UL}}};
        char l_811 = (-1L);
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_665[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_767[i] = &g_105;
    }
    if (((*l_731) = (*l_731)))
    {
        unsigned l_861 = 0UL;
        short *l_867 = &g_442;
        int l_872 = 0L;
        (*l_731) = (((safe_add_func_uint16_t_u_u(65533UL, (((**g_723) = (safe_mod_func_uint32_t_u_u(((*g_165) = (func_27(l_731, (safe_div_func_int8_t_s_s(((*g_165) < (safe_div_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(l_861, (safe_unary_minus_func_int8_t_s((safe_rshift_func_int16_t_s_s(((*l_731) = ((*g_724) = (*g_724))), 13)))))), ((l_872 = (((((*l_867) = (safe_lshift_func_uint16_t_u_u(l_861, 2))) ^ ((**g_743) > (safe_lshift_func_int16_t_s_u(l_861, 10)))) ^ (safe_mod_func_int8_t_s_s((*g_369), l_861))) != l_861)) && l_837[0])))), l_861)), l_861, l_667[0], (**g_545)) , (*l_731))), 0x6F40804EL))) < 0UL))) , (*l_731)) , 1L);



        (*g_716) = p_20;
    }
    else
    {
        int l_873 = 0xD7B2697BL;
        int *l_875 = &g_39;
        unsigned short l_921[10] = {0x0B14L, 0xB830L, 0xC4A2L, 0xC4A2L, 0xB830L, 0x0B14L, 0xB830L, 0xC4A2L, 0xC4A2L, 0xB830L};
        unsigned l_924 = 4294967286UL;
        unsigned short ***l_928 = (void*)0;
        int i;
        if (l_873)
        {
            int *l_874[2];
            short *l_880 = &g_442;
            unsigned l_886 = 0x768C9C30L;
            unsigned short ***l_927 = &g_104[5][6];
            unsigned ** const l_965 = &g_546;
            int i;
            for (i = 0; i < 2; i++)
                l_874[i] = &g_22;
            p_20 = l_874[0];

            ;
            (*l_731) = (func_35(l_875, ((safe_rshift_func_uint8_t_u_u(((**g_545) , (*g_818)), 0)) ^ (safe_rshift_func_uint8_t_u_s(((0x4A91L & ((!(((*g_724) = (*g_724)) , l_873)) , l_873)) >= ((*l_880) = 0x6AC6L)), 3)))) == l_873);
            (*l_731) = (*p_20);
            if ((safe_rshift_func_int8_t_s_s(l_883, 6)))
            {
                int l_893 = 0xDF03810DL;
                int **l_901 = &l_667[0];
                int l_909[4];
                const unsigned short *l_960 = &l_837[6];
                const unsigned short **l_959 = &l_960;
                const unsigned short ***l_958[6][2] = {{(void*)0, &l_959}, {(void*)0, &l_959}, {(void*)0, &l_959}, {(void*)0, &l_959}, {(void*)0, &l_959}, {(void*)0, &l_959}};
                int i, j;
                for (i = 0; i < 4; i++)
                    l_909[i] = 1L;
                (*l_731) = func_35(l_874[0], (safe_rshift_func_uint8_t_u_u(func_35((g_446 = &g_39), func_35(l_875, (*l_731))), (l_886 < (safe_lshift_func_int8_t_s_s(((~((*g_369) = l_873)) | l_873), 1))))));
                (*p_20) = ((*l_731) = (*p_20));
                if ((((**g_368) >= 248UL) & 1L))
                {
                    for (g_196 = 0; (g_196 == 38); ++g_196)
                    {
                        (*p_20) = (*p_20);
                        (**g_647) = (**g_647);
                        (**g_715) = p_20;
                        (*g_497) = (*g_716);
                    }


                    (**g_715) = &l_727[2];


                }
                else
                {
                    char l_908 = (-6L);
                    int * const l_951 = (void*)0;
                    int l_963[9] = {0x7D6A4B0FL, 0xA526F249L, 0x7D6A4B0FL, 0xA526F249L, 0x7D6A4B0FL, 0xA526F249L, 0x7D6A4B0FL, 0xA526F249L, 0x7D6A4B0FL};
                    int *l_964[6][1][1] = {{{&g_668}}, {{&g_668}}, {{&g_668}}, {{&g_668}}, {{&g_668}}, {{&g_668}}};
                    int i, j, k;
                    (*p_20) = (!(safe_mod_func_uint32_t_u_u(func_35(p_20, l_893), l_873)));
                    for (g_196 = 0; (g_196 < 43); g_196 = safe_add_func_int16_t_s_s(g_196, 9))
                    {
                        unsigned l_900 = 0x36CD5BCAL;
                        int ***l_910 = &g_57;
                        (*p_20) = (safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(l_900, (-2L))), l_900));
                        (**g_496) = func_41(l_667[0], func_52(((*l_910) = func_52(((*l_910) = func_52(l_901, (safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s((((((**g_723) = l_908) > l_908) , ((~((l_893 = 5L) , (*g_165))) , (~(((((*p_20) ^ (-1L)) | (~0x120DL)) > 0x19L) , (*g_818))))) , (**g_723)), 0x6F12L)), 0x84D7L)), (*p_20))), l_909[1], (*g_818))), l_909[1], l_900, (*l_731))), l_908, l_909[0], l_909[2]), l_908, l_900, l_873);

                        ;
                        p_20 = ((safe_lshift_func_uint8_t_u_u((*g_818), (((safe_add_func_uint16_t_u_u((((((safe_lshift_func_uint16_t_u_s(l_908, (safe_sub_func_int8_t_s_s(l_900, ((l_900 , ((*p_20) = (l_908 , 0x6126373AL))) >= ((**g_545) , (safe_add_func_uint8_t_u_u(l_900, (**g_368))))))))) , l_900) ^ (**g_723)) & (*l_731)) > l_908), l_908)) , l_873) , l_873))) , p_20);
                        l_921[6] = l_908;
                    }

                    ;

                    (***g_714) = &l_909[3];


                    if (((safe_mod_func_int8_t_s_s((**g_368), l_924)) , ((g_925 | ((*l_731) , (safe_unary_minus_func_int8_t_s((*g_369))))) ^ (((0xB9L > (*l_731)) , (((l_928 = l_927) != (l_929[1] = &g_104[4][2])) , (void*)0)) == (void*)0))))
                    {
                        int * const l_934 = &g_668;
                        const unsigned short *l_940 = &l_837[2];
                        const unsigned short **l_939 = &l_940;
                        int l_941[5] = {0L, 0L, 0L, 0L, 0L};
                        int i;
                        (*l_731) = func_27(p_20, (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u(((func_27(l_934, ((((*p_20) = (safe_add_func_int8_t_s_s((((((l_908 >= (safe_sub_func_uint8_t_u_u(255UL, ((((void*)0 == &l_875) , (*l_927)) != (l_908 , l_939))))) , l_941[1]) ^ l_921[7]) && (*g_105)) , (*g_369)), l_941[2]))) , (*l_731)) <= 0xA9L), (*l_731), p_20, l_873) , 250UL) , 0xD5L), 6)), 10)), (*g_446), p_20, (**g_545));



                    }
                    else
                    {
                        char * const l_947 = &g_948;
                        char * const *l_946 = &l_947;
                        unsigned char *l_961 = &g_358;
                        int l_962 = 0x3726A1B1L;
                        (*g_716) = (((((*g_818) = (func_27(l_874[0], func_35(p_20, (*l_731)), (**g_332), &g_39, (*g_546)) != g_166[0][0][3])) < 5UL) >= 7UL) , l_874[0]);



                        (*p_20) = ((safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(0x3D03C285L, (*l_731))), ((l_946 = &g_369) == &l_947))) | (*l_731));

                        ;
                        (*p_20) = (safe_sub_func_int16_t_s_s(l_873, l_893));
                    }



                    ;
                }


                ;

                ;
            }
            else
            {
                for (g_106 = 0; (g_106 <= 2); g_106 += 1)
                {
                    short l_967 = 1L;
                    for (g_167 = 0; (g_167 <= 1); g_167 += 1)
                    {
                        unsigned ***l_966 = &g_545;
                        int i;
                        if ((*l_731))
                            break;
                        (*l_966) = l_965;
                        (**g_496) = p_20;
                    }
                    if (l_967)
                        break;
                }


                (**g_714) = &p_20;

                ;
                for (g_489 = 28; (g_489 == 12); --g_489)
                {
                    unsigned l_974 = 0x20D0910EL;
                    for (g_114 = (-16); (g_114 > 20); ++g_114)
                    {
                        short ***l_972 = (void*)0;
                        short ***l_973 = &g_723;
                        (*l_973) = &g_724;
                    }
                    (***g_714) = (void*)0;

                    ;
                    (*l_731) = (l_974 < ((**g_723) | ((void*)0 != (*g_368))));
                }

                ;
                (*g_497) = &l_727[5];


            }


            ;
            ;

            ;
            ;
        }
        else
        {
            int *l_976 = &g_668;
            int l_977 = 4L;
            unsigned l_980 = 4294967288UL;
            (*l_731) = func_27(l_731, (*l_731), (*g_446), (g_975 , l_976), ((-6L) && (l_977 , (((((safe_div_func_int16_t_s_s(func_35(l_976, l_980), l_977)) , (*g_818)) > 2UL) ^ (*l_731)) , (*g_369)))));



            (*g_497) = (*g_497);
        }


        ;

        ;
        ;
    }


    ;

    ;
    for (g_504 = 0; (g_504 <= 4); g_504 += 1)
    {
        int *l_985 = (void*)0;
        int l_994[3];
        int i;
        for (i = 0; i < 3; i++)
            l_994[i] = 0x19524423L;
        for (g_213 = 0; (g_213 <= 4); g_213 += 1)
        {
            int l_992 = 0x6682C7F3L;
            int *l_993 = &l_727[2];
            int l_995 = 0xC57A3419L;
            int i;
            g_996 = (safe_div_func_uint16_t_u_u(((safe_div_func_int8_t_s_s(1L, func_35(l_985, (*l_731)))) , ((safe_mod_func_uint16_t_u_u(((*g_105) = 65534UL), 7UL)) < ((safe_div_func_uint32_t_u_u((((*l_731) == (safe_sub_func_int32_t_s_s(l_992, ((*l_993) = (*l_731))))) , l_994[1]), l_995)) != 0xF8AEL))), 4UL));
            (*l_993) = (safe_mod_func_uint16_t_u_u(((l_730[g_213] = (((((l_994[1] , func_35(&l_995, l_994[1])) ^ (((void*)0 == &l_985) > l_994[2])) == 1L) ^ (safe_div_func_uint16_t_u_u((*g_105), (*l_993)))) & (*l_993))) == (*l_993)), (*g_724)));
        }
    }
    return p_20;






}







static unsigned func_27(int * const p_28, int p_29, int p_30, int * p_31, unsigned p_32)
{
    unsigned char l_671 = 254UL;
    int **l_677[6] = {(void*)0, &g_21[8][0][0], (void*)0, &g_21[8][0][0], (void*)0, &g_21[8][0][0]};
    char l_689[6] = {(-1L), (-1L), 0x4FL, (-1L), (-1L), 0x4FL};
    short **l_725 = &g_724;
    int i;
    for (p_32 = 0; (p_32 <= 6); p_32 += 1)
    {
        int * const l_669 = &g_452[1][1];
        int **l_670 = &g_21[9][0][1];
        int l_674 = 1L;
        unsigned char l_681 = 0xEDL;
        (*l_670) = l_669;
        (*g_497) = ((*l_670) = &g_22);
        for (g_213 = 0; (g_213 <= 2); g_213 += 1)
        {
            int i, j;
            l_681 = (((p_29 > (((l_671 , (safe_sub_func_int16_t_s_s(func_35(&p_30, (l_674 , (((safe_lshift_func_uint16_t_u_u(((((l_677[5] == (((safe_rshift_func_uint16_t_u_u((p_32 >= (safe_unary_minus_func_uint8_t_u(p_29))), 12)) != (0UL >= (func_35(&l_674, (*p_31)) <= p_30))) , (*g_496))) == (-6L)) > (*g_369)) , 0x0E1BL), p_29)) | (*l_669)) > 8UL))), g_114))) >= (*g_369)) <= p_32)) ^ p_29) | p_29);
            for (g_167 = 0; (g_167 <= 0); g_167 += 1)
            {
                unsigned *l_682 = &g_489;
                short *l_686 = &g_302[6][0][0];
                unsigned short l_687 = 5UL;
                int l_688 = (-2L);
                (*l_669) = (((0xA79604E5L & ((*l_682) = 0x33C18CECL)) , 0xD485L) && g_302[7][3][2]);
                for (g_106 = 0; (g_106 <= 0); g_106 += 1)
                {
                    char l_683 = 0x22L;
                    for (p_30 = 0; (p_30 <= 0); p_30 += 1)
                    {
                        int i, j, k;
                        if (p_30)
                            break;
                        if (l_683)
                            continue;
                    }
                    l_688 = (((((*l_682) = (safe_sub_func_uint16_t_u_u(((g_668 , &g_302[6][0][0]) != l_686), l_687))) | p_29) < (p_29 > 0xC6ABL)) >= (*g_369));
                }
            }
        }
    }
    if (l_689[2])
    {
        short l_692 = 0xAAB2L;
        int l_693 = 0x99E2297DL;
        for (g_358 = 0; (g_358 > 12); g_358 = safe_add_func_uint16_t_u_u(g_358, 1))
        {
            unsigned char *l_702 = &g_196;
            int l_707 = 3L;
            if ((l_693 = l_692))
            {
                short l_694 = 0x1028L;
                l_693 = (l_694 , l_692);
                (**g_496) = (void*)0;
                if (l_694)
                    continue;
            }
            else
            {
                short l_695 = 0x4D02L;
                l_695 = (-1L);
                return p_32;
            }
            if (p_29)
                break;
            l_707 = (0x46837CEBL > ((safe_div_func_int32_t_s_s((((safe_lshift_func_int16_t_s_s((((p_32 > (((safe_rshift_func_uint8_t_u_s(((*l_702) = 1UL), 3)) ^ (0x07C3206AL | p_29)) != g_167)) , (l_693 = l_693)) >= (safe_div_func_uint32_t_u_u(p_29, ((safe_rshift_func_uint16_t_u_s(((*g_105) | l_707), 7)) , p_32)))), 15)) , l_693) && l_692), 0x6F6E9DD8L)) , l_692));
        }
    }
    else
    {
        return p_29;
    }
    if (p_29)
    {
        for (g_442 = (-1); (g_442 != (-23)); g_442 = safe_sub_func_int16_t_s_s(g_442, 3))
        {
            int l_710 = 1L;
            return l_710;
        }
    }
    else
    {
        unsigned char l_719 = 1UL;
        int *l_720[4] = {&g_668, &g_668, &g_668, &g_668};
        int l_721[2][2];
        char * const l_722[9][7] = {{(void*)0, &l_689[2], &l_689[2], (void*)0, (void*)0, &l_689[2], (void*)0}, {(void*)0, &l_689[2], &l_689[2], (void*)0, (void*)0, &l_689[2], (void*)0}, {(void*)0, &l_689[2], &l_689[2], (void*)0, (void*)0, &l_689[2], (void*)0}, {(void*)0, &l_689[2], &l_689[2], (void*)0, (void*)0, &l_689[2], (void*)0}, {(void*)0, &l_689[2], &l_689[2], (void*)0, (void*)0, &l_689[2], (void*)0}, {(void*)0, &l_689[2], &l_689[2], (void*)0, (void*)0, &l_689[2], (void*)0}, {(void*)0, &l_689[2], &l_689[2], (void*)0, (void*)0, &l_689[2], (void*)0}, {(void*)0, &l_689[2], &l_689[2], (void*)0, (void*)0, &l_689[2], (void*)0}, {(void*)0, &l_689[2], &l_689[2], (void*)0, (void*)0, &l_689[2], (void*)0}};
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_721[i][j] = 1L;
        }
        l_719 = ((safe_add_func_uint16_t_u_u(g_713, ((&g_347 != g_714) | 0UL))) >= (safe_rshift_func_int16_t_s_u(g_213, 11)));
        l_721[0][1] = (0x5F58L == func_35(l_720[0], (**g_332)));
        l_721[1][1] = (((l_722[2][3] != &l_689[2]) , g_723) != l_725);
        (*g_716) = (void*)0;
    }
    return g_213;
}







static unsigned short func_35(int * p_36, int p_37)
{
    unsigned l_398 = 0x5E39566DL;
    int l_410 = 0xF43DC13BL;
    int *l_423 = &g_117[0];
    char ***l_469 = &g_368;
    char **l_530 = &g_369;
    const int *l_568 = &g_117[0];
    short l_578[4][8][3] = {{{0x7914L, 0x38AFL, 0L}, {0x7914L, 0x38AFL, 0L}, {0x7914L, 0x38AFL, 0L}, {0x7914L, 0x38AFL, 0L}, {0x7914L, 0x38AFL, 0L}, {0x7914L, 0x38AFL, 0L}, {0x7914L, 0x38AFL, 0L}, {0x7914L, 0x38AFL, 0L}}, {{0x7914L, 0x38AFL, 0L}, {0x7914L, 0x38AFL, 0L}, {0x7914L, 0x38AFL, 0L}, {0x7914L, 0x38AFL, 0L}, {0x7914L, 0x38AFL, 0L}, {0x7914L, 0x38AFL, 0L}, {0x7914L, 0x38AFL, 0L}, {0x7914L, 0x38AFL, 0L}}, {{0x7914L, 0x38AFL, 0L}, {0x7914L, 0x38AFL, 0L}, {0x7914L, 0x38AFL, 0L}, {0x7914L, 0x38AFL, 0L}, {0x7914L, 0x38AFL, 0L}, {0x7914L, 0x38AFL, 0L}, {0x7914L, 0x38AFL, 0L}, {0x7914L, 0x38AFL, 0L}}, {{0x7914L, 0x38AFL, 0L}, {0x7914L, 0x38AFL, 0L}, {0x7914L, 0x38AFL, 0L}, {0x7914L, 0x38AFL, 0L}, {0x7914L, 0x38AFL, 0L}, {0x7914L, 0x38AFL, 0L}, {0x7914L, 0x38AFL, 0L}, {0x7914L, 0x38AFL, 0L}}};
    int **l_585 = &l_423;
    int ***l_584 = &l_585;
    int i, j, k;
    for (g_196 = 0; (g_196 <= 0); g_196 += 1)
    {
        unsigned char l_402 = 8UL;
        int l_403 = 7L;
        short l_455[10] = {0x8D58L, 0xF13FL, 0x8D58L, 0xF13FL, 0x8D58L, 0xF13FL, 0x8D58L, 0xF13FL, 0x8D58L, 0xF13FL};
        const unsigned short *l_461 = &g_106;
        const short *l_467 = (void*)0;
        const short **l_466 = &l_467;
        char ***l_468[6][3] = {{&g_368, &g_368, &g_368}, {&g_368, &g_368, &g_368}, {&g_368, &g_368, &g_368}, {&g_368, &g_368, &g_368}, {&g_368, &g_368, &g_368}, {&g_368, &g_368, &g_368}};
        short **l_470 = (void*)0;
        const int **l_494 = &g_69[5][1];
        const int ***l_493[2];
        unsigned **l_509 = (void*)0;
        unsigned short l_617 = 0xDF72L;
        int l_618 = (-1L);
        int i, j;
        for (i = 0; i < 2; i++)
            l_493[i] = &l_494;
    }
    return p_37;
}







static const int * func_41(int * p_42, int ** p_43, short p_44, unsigned char p_45, short p_46)
{
    int l_371 = 0x0EFF966DL;
    unsigned short *l_374 = &g_167;
    unsigned *l_375 = &g_376;
    int l_377 = 0x6F914F2EL;
    int l_380 = 8L;
    const int *l_381 = (void*)0;
    const int **l_382 = &l_381;
    l_377 = ((0x794E8506L < ((((l_371 , ((0L <= (p_46 = (safe_lshift_func_int8_t_s_s((*g_369), 6)))) , ((l_374 == l_374) & l_371))) , l_375) == (void*)0) <= p_45)) , p_45);
    (*l_382) = ((l_377 < (safe_sub_func_uint16_t_u_u((l_380 ^ l_371), (((l_377 , ((*g_369) < g_302[6][0][0])) <= (-5L)) && l_380)))) , l_381);
    return p_42;


}







static int ** func_47(unsigned p_48, int ** p_49, int * p_50)
{
    unsigned l_73 = 4294967295UL;
    unsigned l_84[2][9] = {{9UL, 0xD0B78A11L, 4294967293UL, 0xD0B78A11L, 9UL, 0UL, 9UL, 0xD0B78A11L, 4294967293UL}, {9UL, 0xD0B78A11L, 4294967293UL, 0xD0B78A11L, 9UL, 0UL, 9UL, 0xD0B78A11L, 4294967293UL}};
    char l_86 = (-5L);
    int l_120 = 2L;
    unsigned l_125 = 0xB6558982L;
    int **l_183 = (void*)0;
    int l_222 = (-1L);
    const int *l_236[10][3][4] = {{{&g_70, (void*)0, &g_70, &g_70}, {&g_70, (void*)0, &g_70, &g_70}, {&g_70, (void*)0, &g_70, &g_70}}, {{&g_70, (void*)0, &g_70, &g_70}, {&g_70, (void*)0, &g_70, &g_70}, {&g_70, (void*)0, &g_70, &g_70}}, {{&g_70, (void*)0, &g_70, &g_70}, {&g_70, (void*)0, &g_70, &g_70}, {&g_70, (void*)0, &g_70, &g_70}}, {{&g_70, (void*)0, &g_70, &g_70}, {&g_70, (void*)0, &g_70, &g_70}, {&g_70, (void*)0, &g_70, &g_70}}, {{&g_70, (void*)0, &g_70, &g_70}, {&g_70, (void*)0, &g_70, &g_70}, {&g_70, (void*)0, &g_70, &g_70}}, {{&g_70, (void*)0, &g_70, &g_70}, {&g_70, (void*)0, &g_70, &g_70}, {&g_70, (void*)0, &g_70, &g_70}}, {{&g_70, (void*)0, &g_70, &g_70}, {&g_70, (void*)0, &g_70, &g_70}, {&g_70, (void*)0, &g_70, &g_70}}, {{&g_70, (void*)0, &g_70, &g_70}, {&g_70, (void*)0, &g_70, &g_70}, {&g_70, (void*)0, &g_70, &g_70}}, {{&g_70, (void*)0, &g_70, &g_70}, {&g_70, (void*)0, &g_70, &g_70}, {&g_70, (void*)0, &g_70, &g_70}}, {{&g_70, (void*)0, &g_70, &g_70}, {&g_70, (void*)0, &g_70, &g_70}, {&g_70, (void*)0, &g_70, &g_70}}};
    short *l_309 = &g_302[2][1][1];
    int **l_349 = (void*)0;
    unsigned l_370[8] = {4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL};
    int i, j, k;
    if (p_48)
    {
        int *l_63 = &g_22;
        short l_108 = 0xE999L;
        unsigned char l_181 = 0x85L;
        const int *l_187 = &g_117[0];
        unsigned short l_211 = 0UL;
        for (g_39 = 0; (g_39 >= 0); g_39 -= 1)
        {
            int **l_64 = &l_63;
            int **l_65[9][5] = {{(void*)0, &g_21[9][0][2], (void*)0, (void*)0, &g_21[8][0][0]}, {(void*)0, &g_21[9][0][2], (void*)0, (void*)0, &g_21[8][0][0]}, {(void*)0, &g_21[9][0][2], (void*)0, (void*)0, &g_21[8][0][0]}, {(void*)0, &g_21[9][0][2], (void*)0, (void*)0, &g_21[8][0][0]}, {(void*)0, &g_21[9][0][2], (void*)0, (void*)0, &g_21[8][0][0]}, {(void*)0, &g_21[9][0][2], (void*)0, (void*)0, &g_21[8][0][0]}, {(void*)0, &g_21[9][0][2], (void*)0, (void*)0, &g_21[8][0][0]}, {(void*)0, &g_21[9][0][2], (void*)0, (void*)0, &g_21[8][0][0]}, {(void*)0, &g_21[9][0][2], (void*)0, (void*)0, &g_21[8][0][0]}};
            int i, j;
            g_21[8][0][0] = ((*l_64) = l_63);
            for (p_48 = 0; (p_48 <= 0); p_48 += 1)
            {
                unsigned l_66 = 0x6804519FL;
                if (l_66)
                    break;
                for (l_66 = 0; (l_66 <= 0); l_66 += 1)
                {
                    int i, j, k;
                    g_21[(p_48 + 5)][p_48][l_66] = ((**l_64) , p_50);
                }
                for (l_66 = 0; (l_66 <= 0); l_66 += 1)
                {
                    if ((safe_mod_func_uint32_t_u_u(p_48, (p_48 && 65527UL))))
                    {
                        int i, j, k;
                        g_21[(g_39 + 9)][p_48][(g_39 + 2)] = &g_22;
                        g_21[(p_48 + 3)][p_48][p_48] = g_21[(g_39 + 9)][p_48][(g_39 + 2)];
                        l_63 = &g_22;
                    }
                    else
                    {
                        const int *l_72[8][5][6] = {{{&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}}, {{&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}}, {{&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}}, {{&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}}, {{&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}}, {{&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}}, {{&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}}, {{&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}, {&g_22, &g_70, (void*)0, &g_22, &g_70, &g_70}}};
                        const int **l_71 = &l_72[3][4][5];
                        int l_85 = (-1L);
                        int i, j, k;
                        (*l_71) = (g_69[5][1] = &g_22);
                        l_85 = (((l_73 && (safe_rshift_func_int8_t_s_s(g_70, (safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(p_48, (!(safe_lshift_func_int8_t_s_u(((g_39 >= (g_70 & g_39)) > (*l_63)), (~(0x5BL && (safe_mod_func_int16_t_s_s((g_39 && (**l_64)), l_84[0][5]))))))))), 0xC282E8BCL))))) | p_48) >= p_48);
                        if (l_86)
                            break;
                    }
                }
            }
        }


        if (p_48)
        {
            return g_57;


        }
        else
        {
            unsigned short l_89[10][6] = {{1UL, 0UL, 1UL, 0xBE71L, 0x68C1L, 0UL}, {1UL, 0UL, 1UL, 0xBE71L, 0x68C1L, 0UL}, {1UL, 0UL, 1UL, 0xBE71L, 0x68C1L, 0UL}, {1UL, 0UL, 1UL, 0xBE71L, 0x68C1L, 0UL}, {1UL, 0UL, 1UL, 0xBE71L, 0x68C1L, 0UL}, {1UL, 0UL, 1UL, 0xBE71L, 0x68C1L, 0UL}, {1UL, 0UL, 1UL, 0xBE71L, 0x68C1L, 0UL}, {1UL, 0UL, 1UL, 0xBE71L, 0x68C1L, 0UL}, {1UL, 0UL, 1UL, 0xBE71L, 0x68C1L, 0UL}, {1UL, 0UL, 1UL, 0xBE71L, 0x68C1L, 0UL}};
            int *l_90 = (void*)0;
            int *l_91 = &g_39;
            unsigned short *l_100 = &l_89[0][2];
            int *l_153 = &g_117[2];
            int **l_176 = &l_153;
            int i, j;
            if ((safe_sub_func_uint16_t_u_u((((*l_91) = l_89[0][2]) , ((*l_100) = (p_48 < (g_70 <= (safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s((0x422C1772L == (safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(p_48, g_70)), (l_89[0][5] > p_48)))), g_70)), 4294967295UL)))))), g_70)))
            {
                unsigned short ***l_101 = (void*)0;
                unsigned short **l_103 = &l_100;
                unsigned short ***l_102[9][7] = {{&l_103, (void*)0, (void*)0, &l_103, &l_103, &l_103, &l_103}, {&l_103, (void*)0, (void*)0, &l_103, &l_103, &l_103, &l_103}, {&l_103, (void*)0, (void*)0, &l_103, &l_103, &l_103, &l_103}, {&l_103, (void*)0, (void*)0, &l_103, &l_103, &l_103, &l_103}, {&l_103, (void*)0, (void*)0, &l_103, &l_103, &l_103, &l_103}, {&l_103, (void*)0, (void*)0, &l_103, &l_103, &l_103, &l_103}, {&l_103, (void*)0, (void*)0, &l_103, &l_103, &l_103, &l_103}, {&l_103, (void*)0, (void*)0, &l_103, &l_103, &l_103, &l_103}, {&l_103, (void*)0, (void*)0, &l_103, &l_103, &l_103, &l_103}};
                int l_107 = 0x57D0CF73L;
                int **l_119 = &l_91;
                int l_126 = 0x8EE826CDL;
                int *l_132 = &l_126;
                int i, j;
                g_104[5][6] = &l_100;


                if (l_107)
                {
                    unsigned l_112 = 4294967295UL;
                    unsigned *l_113[6][9] = {{(void*)0, &l_112, (void*)0, &l_112, &l_112, &l_112, (void*)0, (void*)0, &l_112}, {(void*)0, &l_112, (void*)0, &l_112, &l_112, &l_112, (void*)0, (void*)0, &l_112}, {(void*)0, &l_112, (void*)0, &l_112, &l_112, &l_112, (void*)0, (void*)0, &l_112}, {(void*)0, &l_112, (void*)0, &l_112, &l_112, &l_112, (void*)0, (void*)0, &l_112}, {(void*)0, &l_112, (void*)0, &l_112, &l_112, &l_112, (void*)0, (void*)0, &l_112}, {(void*)0, &l_112, (void*)0, &l_112, &l_112, &l_112, (void*)0, (void*)0, &l_112}};
                    short l_118 = 1L;
                    int *l_124 = &l_107;
                    int *l_127 = &l_120;
                    int **l_128 = &g_21[8][0][0];
                    int i, j;
                    if ((((*g_105) = ((!(l_108 && p_48)) && ((*l_100) = (safe_sub_func_int16_t_s_s(((safe_unary_minus_func_uint32_t_u((g_114 = (0x8AL | (g_106 , (l_112 > p_48)))))) & (p_48 || (l_120 = (safe_rshift_func_uint8_t_u_u((((g_117[0] = 2L) , func_52(func_52(g_57, g_22, l_107, l_118), p_48, (*l_63), l_107)) != l_119), 2))))), l_84[0][5]))))) || 65531UL))
                    {
                        int **l_121 = &g_21[9][0][0];
                        (*l_121) = l_90;
                        (*l_121) = p_50;
                    }
                    else
                    {
                        int *l_122 = (void*)0;
                        int *l_123 = &l_120;
                        (*l_123) = p_48;
                        return g_57;



                    }
                    (*l_124) = p_48;
                    (*l_127) = (l_126 = ((*l_124) = l_125));
                    (*l_128) = &g_22;
                }
                else
                {
                    for (g_114 = 0; (g_114 == (-28)); g_114 = safe_sub_func_int32_t_s_s(g_114, 8))
                    {
                        int **l_131 = (void*)0;
                        l_126 = ((*l_63) > p_48);
                        l_132 = (g_22 , &g_117[0]);

                        ;
                        (*l_132) = p_48;
                    }

                    ;
                }

                ;
            }
            else
            {
                unsigned l_139 = 0xACEDF7BAL;
                int *l_140 = &g_117[0];
                int **l_175 = &l_153;
                (*l_140) = ((g_114 , (0xCDL > (safe_lshift_func_int16_t_s_u((p_48 <= p_48), (safe_lshift_func_uint8_t_u_s(((safe_add_func_uint16_t_u_u(p_48, (l_139 || ((l_84[0][5] , 0x78E4L) & p_48)))) , 0xBEL), g_106)))))) , 1L);
                if (l_84[0][5])
                {
                    unsigned l_149[7];
                    const int **l_152[9][1][8] = {{{(void*)0, &g_69[3][5], (void*)0, &g_69[5][1], &g_69[7][1], &g_69[7][1], &g_69[5][1], (void*)0}}, {{(void*)0, &g_69[3][5], (void*)0, &g_69[5][1], &g_69[7][1], &g_69[7][1], &g_69[5][1], (void*)0}}, {{(void*)0, &g_69[3][5], (void*)0, &g_69[5][1], &g_69[7][1], &g_69[7][1], &g_69[5][1], (void*)0}}, {{(void*)0, &g_69[3][5], (void*)0, &g_69[5][1], &g_69[7][1], &g_69[7][1], &g_69[5][1], (void*)0}}, {{(void*)0, &g_69[3][5], (void*)0, &g_69[5][1], &g_69[7][1], &g_69[7][1], &g_69[5][1], (void*)0}}, {{(void*)0, &g_69[3][5], (void*)0, &g_69[5][1], &g_69[7][1], &g_69[7][1], &g_69[5][1], (void*)0}}, {{(void*)0, &g_69[3][5], (void*)0, &g_69[5][1], &g_69[7][1], &g_69[7][1], &g_69[5][1], (void*)0}}, {{(void*)0, &g_69[3][5], (void*)0, &g_69[5][1], &g_69[7][1], &g_69[7][1], &g_69[5][1], (void*)0}}, {{(void*)0, &g_69[3][5], (void*)0, &g_69[5][1], &g_69[7][1], &g_69[7][1], &g_69[5][1], (void*)0}}};
                    short *l_158 = (void*)0;
                    short *l_159 = (void*)0;
                    short *l_160 = &l_108;
                    unsigned *l_164 = &l_139;
                    unsigned **l_163[5][3][9] = {{{&l_164, &l_164, &l_164, &l_164, &l_164, (void*)0, &l_164, &l_164, &l_164}, {&l_164, &l_164, &l_164, &l_164, &l_164, (void*)0, &l_164, &l_164, &l_164}, {&l_164, &l_164, &l_164, &l_164, &l_164, (void*)0, &l_164, &l_164, &l_164}}, {{&l_164, &l_164, &l_164, &l_164, &l_164, (void*)0, &l_164, &l_164, &l_164}, {&l_164, &l_164, &l_164, &l_164, &l_164, (void*)0, &l_164, &l_164, &l_164}, {&l_164, &l_164, &l_164, &l_164, &l_164, (void*)0, &l_164, &l_164, &l_164}}, {{&l_164, &l_164, &l_164, &l_164, &l_164, (void*)0, &l_164, &l_164, &l_164}, {&l_164, &l_164, &l_164, &l_164, &l_164, (void*)0, &l_164, &l_164, &l_164}, {&l_164, &l_164, &l_164, &l_164, &l_164, (void*)0, &l_164, &l_164, &l_164}}, {{&l_164, &l_164, &l_164, &l_164, &l_164, (void*)0, &l_164, &l_164, &l_164}, {&l_164, &l_164, &l_164, &l_164, &l_164, (void*)0, &l_164, &l_164, &l_164}, {&l_164, &l_164, &l_164, &l_164, &l_164, (void*)0, &l_164, &l_164, &l_164}}, {{&l_164, &l_164, &l_164, &l_164, &l_164, (void*)0, &l_164, &l_164, &l_164}, {&l_164, &l_164, &l_164, &l_164, &l_164, (void*)0, &l_164, &l_164, &l_164}, {&l_164, &l_164, &l_164, &l_164, &l_164, (void*)0, &l_164, &l_164, &l_164}}};
                    int l_170[9] = {(-7L), (-7L), 0L, (-7L), (-7L), 0L, (-7L), (-7L), 0L};
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_149[i] = 4294967293UL;
                    for (l_108 = 0; (l_108 < (-19)); --l_108)
                    {
                        (*l_140) = (safe_mod_func_int16_t_s_s((p_48 < (g_106 > ((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(0xAC6FL, 5)), (p_48 | p_48))) < l_149[4]))), (safe_div_func_uint8_t_u_u((&g_117[1] == &g_117[0]), (g_70 , 0x50L)))));
                        (*l_140) = (-9L);
                    }
                    l_153 = (void*)0;

                    ;
                    g_69[0][1] = p_50;
                    if (((p_48 , g_117[0]) >= (((p_48 || (safe_rshift_func_uint16_t_u_s(((*g_105) = (((safe_mul_func_uint32_t_u_u((g_70 != (((*l_160) = l_84[0][5]) , (l_89[4][4] , p_48))), ((+(g_167 = (safe_add_func_uint8_t_u_u(((g_165 = (void*)0) == &g_166[0][0][4]), 0x82L)))) >= p_48))) , 0x95L) == (*l_140))), 6))) , 4294967288UL) && p_48)))
                    {
                        unsigned short ***l_169 = &g_104[5][0];
                        unsigned short ****l_168 = &l_169;
                        (*l_140) = (((*l_168) = &g_104[2][4]) == (((*l_140) < l_170[1]) , &g_104[5][6]));
                        (*l_140) = (0xEBL >= ((void*)0 != &l_108));
                    }
                    else
                    {
                        unsigned short ***l_171 = &g_104[6][0];
                        (*l_171) = &g_105;
                        l_140 = l_90;

                        ;
                    }

                    ;
                    ;
                }
                else
                {
                    int **l_174[8] = {&g_21[1][0][0], &g_21[8][0][0], &g_21[1][0][0], &g_21[8][0][0], &g_21[1][0][0], &g_21[8][0][0], &g_21[1][0][0], &g_21[8][0][0]};
                    int i;
                    (*l_140) = (safe_sub_func_int8_t_s_s(p_48, (g_166[2][2][8] & p_48)));
                    g_21[3][0][0] = (void*)0;
                    for (l_139 = 0; (l_139 <= 2); l_139 += 1)
                    {
                        int i;
                        if (g_117[l_139])
                            break;
                        l_153 = p_50;

                        ;
                        if (p_48)
                            break;
                    }

                    ;
                    for (g_114 = 6; (g_114 >= 0); g_114 -= 1)
                    {
                        g_69[4][5] = p_50;
                    }
                }

                ;
                ;
                ;
                (*l_175) = &g_117[0];

                ;
            }


            ;
            (*l_176) = p_50;

            ;
            for (l_125 = 0; (l_125 <= 0); l_125 += 1)
            {
                unsigned short l_177 = 1UL;
                const int *l_184 = &g_70;
                int l_188 = 0x343C1BBCL;
                unsigned short **l_214 = (void*)0;
                unsigned short l_217[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_217[i] = 65535UL;
                for (l_120 = 0; (l_120 <= 3); l_120 += 1)
                {
                    int l_178[7] = {0x60961C78L, 0x60961C78L, 0x87F12E35L, 0x60961C78L, 0x60961C78L, 0x87F12E35L, 0x60961C78L};
                    unsigned *l_182[8][8][4] = {{{(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}}, {{(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}}, {{(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}}, {{(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}}, {{(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}}, {{(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}}, {{(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}}, {{(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}, {(void*)0, (void*)0, &g_166[5][0][0], &g_166[3][2][4]}}};
                    int *l_198 = (void*)0;
                    int *l_199 = &l_178[2];
                    int *l_200 = &g_117[1];
                    short * const l_212[4][7][5] = {{{&l_108, &l_108, &l_108, &l_108, &l_108}, {&l_108, &l_108, &l_108, &l_108, &l_108}, {&l_108, &l_108, &l_108, &l_108, &l_108}, {&l_108, &l_108, &l_108, &l_108, &l_108}, {&l_108, &l_108, &l_108, &l_108, &l_108}, {&l_108, &l_108, &l_108, &l_108, &l_108}, {&l_108, &l_108, &l_108, &l_108, &l_108}}, {{&l_108, &l_108, &l_108, &l_108, &l_108}, {&l_108, &l_108, &l_108, &l_108, &l_108}, {&l_108, &l_108, &l_108, &l_108, &l_108}, {&l_108, &l_108, &l_108, &l_108, &l_108}, {&l_108, &l_108, &l_108, &l_108, &l_108}, {&l_108, &l_108, &l_108, &l_108, &l_108}, {&l_108, &l_108, &l_108, &l_108, &l_108}}, {{&l_108, &l_108, &l_108, &l_108, &l_108}, {&l_108, &l_108, &l_108, &l_108, &l_108}, {&l_108, &l_108, &l_108, &l_108, &l_108}, {&l_108, &l_108, &l_108, &l_108, &l_108}, {&l_108, &l_108, &l_108, &l_108, &l_108}, {&l_108, &l_108, &l_108, &l_108, &l_108}, {&l_108, &l_108, &l_108, &l_108, &l_108}}, {{&l_108, &l_108, &l_108, &l_108, &l_108}, {&l_108, &l_108, &l_108, &l_108, &l_108}, {&l_108, &l_108, &l_108, &l_108, &l_108}, {&l_108, &l_108, &l_108, &l_108, &l_108}, {&l_108, &l_108, &l_108, &l_108, &l_108}, {&l_108, &l_108, &l_108, &l_108, &l_108}, {&l_108, &l_108, &l_108, &l_108, &l_108}}};
                    int i, j, k;
                    if ((!((l_84[l_125][(l_125 + 1)] >= ((l_84[l_125][l_125] > l_84[l_125][l_125]) , (g_39 <= g_39))) >= ((*l_100) = ((p_48 = (((l_178[2] = l_177) , p_48) & (safe_sub_func_int32_t_s_s(p_48, l_181)))) ^ 0x43E69B7EL)))))
                    {
                        return l_183;




                    }
                    else
                    {
                        const int **l_185 = (void*)0;
                        const int **l_186[2][9] = {{&g_69[5][1], (void*)0, &g_69[5][1], (void*)0, &g_69[5][1], (void*)0, &g_69[5][1], (void*)0, &g_69[5][1]}, {&g_69[5][1], (void*)0, &g_69[5][1], (void*)0, &g_69[5][1], (void*)0, &g_69[5][1], (void*)0, &g_69[5][1]}};
                        int i, j;
                        l_187 = l_184;

                        ;
                        l_188 = (*l_184);
                    }

                    ;
                    for (g_39 = 0; (g_39 <= 0); g_39 += 1)
                    {
                        unsigned short **l_189[1];
                        unsigned short ***l_190 = (void*)0;
                        unsigned short ***l_191 = &g_104[5][6];
                        int l_197[8][3] = {{1L, 1L, (-1L)}, {1L, 1L, (-1L)}, {1L, 1L, (-1L)}, {1L, 1L, (-1L)}, {1L, 1L, (-1L)}, {1L, 1L, (-1L)}, {1L, 1L, (-1L)}, {1L, 1L, (-1L)}};
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_189[i] = (void*)0;
                        l_197[2][0] = (~((!((g_166[(l_120 + 2)][g_39][(g_39 + 5)] & ((p_48 > (&g_105 != ((*l_191) = l_189[0]))) & g_166[2][0][6])) <= g_106)) , (safe_add_func_int32_t_s_s(p_48, (((((-1L) != (((safe_rshift_func_uint8_t_u_s(g_22, p_48)) || p_48) | p_48)) , 0x20F2L) == g_196) && p_48)))));
                        l_188 = p_48;
                        if (l_178[6])
                            continue;
                    }
                    l_188 = (((*l_200) = ((*l_199) = p_48)) , (safe_lshift_func_uint8_t_u_s(g_166[1][2][0], (safe_rshift_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_u(((((((((g_22 | (((void*)0 != l_198) == g_117[0])) <= p_48) && l_86) < ((safe_add_func_int32_t_s_s((((((*l_199) = ((safe_mod_func_uint32_t_u_u(((((!(*g_105)) , p_48) , l_211) > (*l_184)), l_120)) == (*l_200))) != p_48) & l_84[1][3]) == 1L), p_48)) <= l_86)) == 0UL) ^ p_48) , l_212[0][4][0]) == &l_108), 7)) && 255UL) > (*l_63)), 5)))));
                    (*l_199) = (p_48 , ((-1L) >= p_48));
                    for (l_73 = 0; (l_73 <= 0); l_73 += 1)
                    {
                        int i, j, k;
                        g_21[(l_73 + 9)][l_125][(l_73 + 2)] = &l_178[2];


                        if (g_213)
                            break;
                        return g_57;




                    }


                }
                for (l_120 = 0; (l_120 >= 0); l_120 -= 1)
                {
                    unsigned short *l_219 = &g_167;
                    int l_220 = (-10L);
                    (*l_176) = (((((&l_100 != l_214) && (l_84[0][3] , (safe_add_func_int32_t_s_s(l_217[0], (safe_unary_minus_func_uint32_t_u((p_48 = ((*l_184) != ((p_48 < (&l_89[7][2] != (p_48 , l_219))) <= 0x12L))))))))) < l_220) , (*g_105)) , (void*)0);

                    ;
                    (*l_176) = &g_117[1];

                    ;
                    (*l_176) = p_50;

                    ;
                    for (g_167 = 0; (g_167 <= 0); g_167 += 1)
                    {
                        int *l_221 = &g_117[0];
                        int i, j, k;
                        g_21[(l_125 + 2)][l_125][l_125] = &l_120;
                        (*l_176) = &g_22;

                        ;
                        l_222 = ((*l_221) = g_166[l_120][g_167][(g_167 + 7)]);
                        (*l_221) = ((0x2044L < 0xF5F1L) <= g_166[(l_120 + 1)][(g_167 + 2)][(g_167 + 5)]);
                    }
                }
                for (g_106 = 0; (g_106 <= 3); g_106 += 1)
                {
                    unsigned l_223 = 0xB6435A71L;
                    int l_224 = 0xE9BEFF2DL;
                    unsigned *l_227 = &l_84[0][5];
                    char *l_228 = &g_114;
                    int *l_235 = &g_117[0];
                    l_187 = ((*l_176) = l_63);

                    ;
                    ;
                    (*l_176) = p_50;

                    ;
                    l_224 = l_223;
                    (*l_235) = ((((p_48 >= (safe_add_func_uint8_t_u_u((~((((*l_227) = (l_84[0][5] < (0UL <= g_166[1][0][3]))) , ((((((*l_228) = p_48) < (g_117[0] == (safe_add_func_uint16_t_u_u(l_223, (~(safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((p_48 != l_224), p_48)), 5))))))) | (*g_105)) <= 65535UL) , l_222)) , (*l_184))), (*l_187)))) , (void*)0) == l_100) | 0xE7F2809EL);
                    for (g_114 = 0; (g_114 <= 3); g_114 += 1)
                    {
                        const int **l_237[8] = {&l_187, &l_184, &l_187, &l_184, &l_187, &l_184, &l_187, &l_184};
                        int i;
                        g_69[5][1] = (l_236[2][0][0] = &l_224);
                    }



                }
            }



            ;

            if (((*g_105) ^ p_48))
            {
                int *l_238 = &l_222;
                int **l_258 = (void*)0;
                unsigned short ***l_263 = &g_104[2][5];
                int *l_269 = &g_117[0];
                l_238 = p_50;

                ;
                if (p_48)
                {
                    const unsigned char l_246 = 251UL;
                    int *l_248 = &g_117[0];
                    char l_256 = 3L;
                    if (p_48)
                    {
                        unsigned *l_245 = &g_166[2][3][5];
                        int l_247 = 0L;
                        l_247 = (((p_48 , (p_48 & ((g_39 > (safe_lshift_func_uint16_t_u_u(0x156EL, 10))) ^ g_213))) > p_48) | (safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u(g_213, ((((*l_245) = 4294967295UL) ^ l_246) < 0L))), 9)));
                        l_248 = (*l_176);

                        ;
                        (*l_176) = (void*)0;

                        ;
                        g_21[8][0][0] = (g_117[0] , p_50);
                    }
                    else
                    {
                        short *l_251 = (void*)0;
                        short *l_252[4][2] = {{&l_108, (void*)0}, {&l_108, (void*)0}, {&l_108, (void*)0}, {&l_108, (void*)0}};
                        char *l_255 = &g_114;
                        int *l_257 = &l_222;
                        int i, j;
                        (*l_257) = (p_48 || ((((((*l_248) = (0x89L && (((l_63 != p_50) ^ p_48) != (g_196 , (*l_187))))) , (l_256 = ((*l_248) = (safe_lshift_func_int8_t_s_s(((l_120 = (p_48 ^ ((((((*l_255) = ((0L > p_48) < g_117[0])) == 0x7CL) != g_167) || 6UL) == p_48))) , p_48), g_117[1]))))) <= p_48) , p_48) <= 0x459F6F80L));
                        (*l_176) = &l_120;

                        ;
                    }

                    ;
                    ;
                    return l_258;




                }
                else
                {
                    const int **l_260[8] = {&l_187, &l_236[4][0][1], &l_187, &l_236[4][0][1], &l_187, &l_236[4][0][1], &l_187, &l_236[4][0][1]};
                    const int ***l_259 = &l_260[5];
                    int i;
                    (*l_259) = &l_236[2][0][0];
                }
                (*l_269) = ((((((p_48 < (safe_rshift_func_int8_t_s_u(((l_263 != (void*)0) ^ (safe_div_func_uint16_t_u_u(((p_48 ^ (safe_unary_minus_func_uint32_t_u(((p_48 >= g_114) ^ ((*g_105) ^ (*g_105)))))) > ((((safe_mod_func_int32_t_s_s(p_48, g_70)) & (*l_63)) | 0x93E11B61L) , 1L)), 0xD3E0L))), 1))) , 0UL) < 0x63L) < 0L) ^ 0x6030L) <= (-1L));
            }
            else
            {
                unsigned l_270 = 0x45DC0B32L;
                for (l_125 = 0; (l_125 <= 3); l_125 += 1)
                {
                    int *l_271 = &l_222;
                    (*l_271) = l_270;
                    for (l_211 = 0; (l_211 <= 3); l_211 += 1)
                    {
                        const int l_272 = 1L;
                        int i, j;
                        (*l_271) = l_272;
                    }
                    for (p_48 = 0; (p_48 <= 6); p_48 += 1)
                    {
                        (*l_176) = (void*)0;

                        ;
                    }
                }
                for (l_86 = 0; (l_86 <= 3); l_86 += 1)
                {
                    (*l_176) = p_50;
                    for (g_213 = 0; (g_213 <= 3); g_213 += 1)
                    {
                        (*l_176) = (*l_176);
                    }
                }
            }
        }




        ;
        ;

    }
    else
    {
        int l_294 = 0xCF76A16CL;
        const int l_295 = 0x09D21890L;
        int **l_346 = (void*)0;
        unsigned short *l_364 = &g_106;
        char *l_366 = &g_114;
        char **l_365[8][10] = {{(void*)0, &l_366, &l_366, &l_366, (void*)0, (void*)0, (void*)0, &l_366, &l_366, &l_366}, {(void*)0, &l_366, &l_366, &l_366, (void*)0, (void*)0, (void*)0, &l_366, &l_366, &l_366}, {(void*)0, &l_366, &l_366, &l_366, (void*)0, (void*)0, (void*)0, &l_366, &l_366, &l_366}, {(void*)0, &l_366, &l_366, &l_366, (void*)0, (void*)0, (void*)0, &l_366, &l_366, &l_366}, {(void*)0, &l_366, &l_366, &l_366, (void*)0, (void*)0, (void*)0, &l_366, &l_366, &l_366}, {(void*)0, &l_366, &l_366, &l_366, (void*)0, (void*)0, (void*)0, &l_366, &l_366, &l_366}, {(void*)0, &l_366, &l_366, &l_366, (void*)0, (void*)0, (void*)0, &l_366, &l_366, &l_366}, {(void*)0, &l_366, &l_366, &l_366, (void*)0, (void*)0, (void*)0, &l_366, &l_366, &l_366}};
        char ***l_367[7][1] = {{&l_365[7][5]}, {&l_365[7][5]}, {&l_365[7][5]}, {&l_365[7][5]}, {&l_365[7][5]}, {&l_365[7][5]}, {&l_365[7][5]}};
        int i, j;
        for (g_196 = 0; (g_196 <= 5); g_196 += 1)
        {
            int *l_276 = &l_222;
            short *l_308 = &g_302[2][5][2];
            char *l_314 = &g_114;
            unsigned short ***l_318 = &g_104[5][6];
            unsigned short ****l_317 = &l_318;
            const unsigned l_338[6] = {0xAD549B60L, 0xAD549B60L, 3UL, 0xAD549B60L, 0xAD549B60L, 3UL};
            int **l_345[4][5] = {{(void*)0, (void*)0, &l_276, &g_21[8][0][0], &g_21[8][0][0]}, {(void*)0, (void*)0, &l_276, &g_21[8][0][0], &g_21[8][0][0]}, {(void*)0, (void*)0, &l_276, &g_21[8][0][0], &g_21[8][0][0]}, {(void*)0, (void*)0, &l_276, &g_21[8][0][0], &g_21[8][0][0]}};
            int ***l_344 = &l_345[2][0];
            char l_354 = 0xC4L;
            int i, j;
            l_120 = p_48;
            for (g_106 = 0; (g_106 <= 5); g_106 += 1)
            {
                char *l_280 = &g_114;
                int l_281 = (-1L);
                for (g_39 = 4; (g_39 >= 0); g_39 -= 1)
                {
                    int i, j;
                    for (p_48 = 0; (p_48 <= 5); p_48 += 1)
                    {
                        int *l_273 = (void*)0;
                        int *l_274 = (void*)0;
                        int *l_275 = &l_120;
                        int i, j;
                        (*l_275) = (p_48 >= g_39);
                        g_69[(p_48 + 1)][g_39] = p_50;
                        if (p_48)
                            continue;
                    }
                    if (p_48)
                        break;
                    g_69[(g_106 + 2)][g_196] = l_276;
                    for (g_167 = 0; (g_167 <= 2); g_167 += 1)
                    {
                        int *l_279 = &g_117[0];
                        int i;
                        (*l_279) = ((((safe_add_func_uint32_t_u_u((g_117[g_167] >= g_22), ((*l_276) = (p_48 > p_48)))) < ((((+p_48) , p_48) < 0x2CL) | p_48)) >= p_48) & 0xAD3FL);
                        (*l_279) = p_48;
                    }
                }
                if ((0xD4L | ((*l_280) = p_48)))
                {
                    short *l_286 = (void*)0;
                    if (l_281)
                        break;
                    for (g_213 = 0; (g_213 <= 2); g_213 += 1)
                    {
                        short **l_287 = &l_286;
                        int i, j, k;
                        (*l_276) = (!(((p_48 < ((l_236[g_106][g_213][(g_213 + 1)] == ((safe_add_func_uint16_t_u_u((l_294 = ((((safe_add_func_int32_t_s_s((((*l_287) = l_286) == g_105), p_48)) > 0x3A7E0E67L) , (*g_165)) >= (p_48 ^ ((safe_rshift_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s(g_106, p_48)), p_48)) || g_106), g_22)) , 0xDD74L)))), p_48)) , p_50)) , (*g_165))) == l_295) != 0x1228L));
                        (*l_276) = (p_48 || p_48);
                        (*l_276) = p_48;
                    }
                    for (l_120 = 6; (l_120 >= 0); l_120 -= 1)
                    {
                        int **l_296 = &g_21[8][0][0];
                        int i, j;
                        if (l_281)
                            break;
                        g_69[(l_120 + 1)][g_106] = p_50;
                        g_69[(g_196 + 2)][g_106] = &l_120;
                        (*l_296) = &g_22;
                    }
                }
                else
                {
                    short *l_301 = &g_302[6][0][0];
                    for (l_120 = 5; (l_120 >= 0); l_120 -= 1)
                    {
                        int *l_297 = (void*)0;
                        int *l_298 = &g_117[2];
                        (*l_298) = ((*l_276) = p_48);
                    }
                    (*l_276) = ((0x43F1L > ((*l_301) = (safe_sub_func_uint32_t_u_u(p_48, ((p_48 >= p_48) && (p_48 != (p_48 || 1L))))))) <= (safe_add_func_int8_t_s_s(((l_295 >= g_167) , l_281), p_48)));
                }
            }
            for (g_167 = 0; (g_167 <= 5); g_167 += 1)
            {
                short *l_305 = &g_302[6][3][3];
                short **l_306 = (void*)0;
                short **l_307 = &l_305;
                int l_324 = 1L;
                const int **l_334 = (void*)0;
                const int **l_343 = &g_69[5][1];
                const int ** const *l_342 = &l_343;
                unsigned char *l_357 = &g_358;
                unsigned char *l_363[4][4][5] = {{{&g_196, &g_196, &g_196, (void*)0, &g_196}, {&g_196, &g_196, &g_196, (void*)0, &g_196}, {&g_196, &g_196, &g_196, (void*)0, &g_196}, {&g_196, &g_196, &g_196, (void*)0, &g_196}}, {{&g_196, &g_196, &g_196, (void*)0, &g_196}, {&g_196, &g_196, &g_196, (void*)0, &g_196}, {&g_196, &g_196, &g_196, (void*)0, &g_196}, {&g_196, &g_196, &g_196, (void*)0, &g_196}}, {{&g_196, &g_196, &g_196, (void*)0, &g_196}, {&g_196, &g_196, &g_196, (void*)0, &g_196}, {&g_196, &g_196, &g_196, (void*)0, &g_196}, {&g_196, &g_196, &g_196, (void*)0, &g_196}}, {{&g_196, &g_196, &g_196, (void*)0, &g_196}, {&g_196, &g_196, &g_196, (void*)0, &g_196}, {&g_196, &g_196, &g_196, (void*)0, &g_196}, {&g_196, &g_196, &g_196, (void*)0, &g_196}}};
                int i, j, k;
                if ((p_48 == ((((*l_307) = l_305) == (l_309 = l_308)) || (((safe_lshift_func_int16_t_s_s((((g_39 & (!g_213)) == (l_314 == ((~(!g_70)) , (((safe_rshift_func_uint16_t_u_u((((void*)0 == l_317) < g_166[3][3][5]), 7)) != 65534UL) , &l_86)))) || 8L), p_48)) <= 65534UL) || 8L))))
                {
                    int l_321 = 0x0C06625BL;
                    unsigned char *l_329 = &g_213;
                    int ***l_335 = &l_183;
                    char *l_337[5];
                    unsigned l_341 = 4294967295UL;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_337[i] = &l_86;
                    (*l_276) = (((((safe_rshift_func_int8_t_s_u((((0x07C1AA73L ^ l_321) , p_48) , (l_324 & ((*l_329) = ((((-5L) < (0xCBL != 0x00L)) ^ (safe_div_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(l_295, 1UL)), l_324))) >= p_48)))), 6)) || l_321) , p_48) , 0x1AA3L) , p_48);
                    if ((((*l_314) = ((((*g_105) = 65529UL) >= (safe_sub_func_int8_t_s_s(0x7BL, ((l_334 = g_332) != ((*l_335) = (void*)0))))) == p_48)) <= (((l_294 = (safe_unary_minus_func_int16_t_s(p_48))) || ((l_338[4] ^ p_48) & (+(((((safe_rshift_func_uint8_t_u_u((((((l_120 = 250UL) > (*l_276)) == l_341) == g_302[7][1][2]) >= 0UL), 4)) , l_342) != l_344) & l_321) & p_48)))) , 8UL)))
                    {
                        l_222 = l_321;
                    }
                    else
                    {
                        return l_346;



                    }

                    ;
                }
                else
                {
                    for (l_222 = 0; (l_222 <= 3); l_222 += 1)
                    {
                        int i, j, k;
                        if (g_302[(g_167 + 4)][(l_222 + 1)][l_222])
                            break;
                        g_69[g_196][(l_222 + 2)] = ((~(((void*)0 == g_347) , g_302[g_167][g_167][l_222])) , &l_294);
                    }


                    return l_349;



                }

                ;
                g_69[(g_196 + 3)][g_196] = p_50;
                l_324 = (safe_add_func_int8_t_s_s(((((-2L) != (g_117[0] , (safe_lshift_func_uint16_t_u_u(l_354, (l_294 = (safe_lshift_func_uint16_t_u_s(((g_213 = g_39) & ((*l_357) = 255UL)), 1))))))) && ((((*g_165) > (safe_mod_func_int16_t_s_s(((l_222 = (safe_add_func_int32_t_s_s(p_48, (((*l_357) = g_117[0]) && ((p_48 >= 0UL) >= (-2L)))))) , 0xB443L), p_48))) , l_364) == (void*)0)) <= 249UL), 1UL));
                g_69[5][1] = &l_222;
            }
        }


        g_368 = l_365[7][5];

        ;
    }




    ;


    l_370[4] = (p_48 < g_117[0]);
    return g_57;




}







static int ** func_52(int ** p_53, short p_54, char p_55, unsigned char p_56)
{
    int l_59 = 0x6062CF9EL;
    int *l_60[10][10] = {{&g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22}, {&g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22}, {&g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22}, {&g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22}, {&g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22}, {&g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22}, {&g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22}, {&g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22}, {&g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22}, {&g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22, &g_22}};
    unsigned l_61 = 0x3D0097E4L;
    int l_62 = 0x081FB719L;
    int i, j;
    l_62 = (l_61 = (0x06C49A7EL > l_59));
    return p_53;


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
        transparent_crc(g_14[i], "g_14[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_117[i], "g_117[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_166[i][j][k], "g_166[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_302[i][j][k], "g_302[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_376, "g_376", print_hash_value);
    transparent_crc(g_396, "g_396", print_hash_value);
    transparent_crc(g_442, "g_442", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_452[i][j], "g_452[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_489, "g_489", print_hash_value);
    transparent_crc(g_504, "g_504", print_hash_value);
    transparent_crc(g_668, "g_668", print_hash_value);
    transparent_crc(g_713, "g_713", print_hash_value);
    transparent_crc(g_925, "g_925", print_hash_value);
    transparent_crc(g_948, "g_948", print_hash_value);
    transparent_crc(g_975, "g_975", print_hash_value);
    transparent_crc(g_996, "g_996", print_hash_value);
    transparent_crc(g_1005, "g_1005", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_1092[i][j], "g_1092[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1093, "g_1093", print_hash_value);
    transparent_crc(g_1105, "g_1105", print_hash_value);
    transparent_crc(g_1109, "g_1109", print_hash_value);
    transparent_crc(g_1132, "g_1132", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
