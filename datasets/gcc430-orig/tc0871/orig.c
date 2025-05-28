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



static short g_27[6] = {(-6L), 0x8A06L, (-6L), 0x8A06L, (-6L), 0x8A06L};
static char g_33 = 0x58L;
static int g_41[3][7][8] = {{{0x2502870BL, 0x826F3938L, 0x97BDE515L, 0xEDB6B7BEL, 0L, 0xFECBE92EL, 0L, 0xEDB6B7BEL}, {0x2502870BL, 0x826F3938L, 0x97BDE515L, 0xEDB6B7BEL, 0L, 0xFECBE92EL, 0L, 0xEDB6B7BEL}, {0x2502870BL, 0x826F3938L, 0x97BDE515L, 0xEDB6B7BEL, 0L, 0xFECBE92EL, 0L, 0xEDB6B7BEL}, {0x2502870BL, 0x826F3938L, 0x97BDE515L, 0xEDB6B7BEL, 0L, 0xFECBE92EL, 0L, 0xEDB6B7BEL}, {0x2502870BL, 0x826F3938L, 0x97BDE515L, 0xEDB6B7BEL, 0L, 0xFECBE92EL, 0L, 0xEDB6B7BEL}, {0x2502870BL, 0x826F3938L, 0x97BDE515L, 0xEDB6B7BEL, 0L, 0xFECBE92EL, 0L, 0xEDB6B7BEL}, {0x2502870BL, 0x826F3938L, 0x97BDE515L, 0xEDB6B7BEL, 0L, 0xFECBE92EL, 0L, 0xEDB6B7BEL}}, {{0x2502870BL, 0x826F3938L, 0x97BDE515L, 0xEDB6B7BEL, 0L, 0xFECBE92EL, 0L, 0xEDB6B7BEL}, {0x2502870BL, 0x826F3938L, 0x97BDE515L, 0xEDB6B7BEL, 0L, 0xFECBE92EL, 0L, 0xEDB6B7BEL}, {0x2502870BL, 0x826F3938L, 0x97BDE515L, 0xEDB6B7BEL, 0L, 0xFECBE92EL, 0L, 0xEDB6B7BEL}, {0x2502870BL, 0x826F3938L, 0x97BDE515L, 0xEDB6B7BEL, 0L, 0xFECBE92EL, 0L, 0xEDB6B7BEL}, {0x2502870BL, 0x826F3938L, 0x97BDE515L, 0xEDB6B7BEL, 0L, 0xFECBE92EL, 0L, 0xEDB6B7BEL}, {0x2502870BL, 0x826F3938L, 0x97BDE515L, 0xEDB6B7BEL, 0L, 0xFECBE92EL, 0L, 0xEDB6B7BEL}, {0x2502870BL, 0x826F3938L, 0x97BDE515L, 0xEDB6B7BEL, 0L, 0xFECBE92EL, 0L, 0xEDB6B7BEL}}, {{0x2502870BL, 0x826F3938L, 0x97BDE515L, 0xEDB6B7BEL, 0L, 0xFECBE92EL, 0L, 0xEDB6B7BEL}, {0x2502870BL, 0x826F3938L, 0x97BDE515L, 0xEDB6B7BEL, 0L, 0xFECBE92EL, 0L, 0xEDB6B7BEL}, {0x2502870BL, 0x826F3938L, 0x97BDE515L, 0xEDB6B7BEL, 0L, 0xFECBE92EL, 0L, 0xEDB6B7BEL}, {0x2502870BL, 0x826F3938L, 0x97BDE515L, 0xEDB6B7BEL, 0L, 0xFECBE92EL, 0L, 0xEDB6B7BEL}, {0x2502870BL, 0x826F3938L, 0x97BDE515L, 0xEDB6B7BEL, 0L, 0xFECBE92EL, 0L, 0xEDB6B7BEL}, {0x2502870BL, 0x826F3938L, 0x97BDE515L, 0xEDB6B7BEL, 0L, 0xFECBE92EL, 0L, 0xEDB6B7BEL}, {0x2502870BL, 0x826F3938L, 0x97BDE515L, 0xEDB6B7BEL, 0L, 0xFECBE92EL, 0L, 0xEDB6B7BEL}}};
static short g_45 = 0x2FDDL;
static unsigned short g_61 = 0x6546L;
static short g_63[8] = {(-1L), (-1L), (-1L), (-1L), (-1L), (-1L), (-1L), (-1L)};
static short g_65 = 0xB9ACL;
static unsigned g_99 = 0x454C9BF6L;
static int *g_107 = &g_41[1][3][3];
static short *g_112 = (void*)0;
static short **g_111 = &g_112;
static unsigned short *g_180 = &g_61;
static unsigned short ** const g_179 = &g_180;
static int ***g_185 = (void*)0;
static short g_188[3][5][7] = {{{0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L}, {0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L}, {0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L}, {0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L}, {0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L}}, {{0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L}, {0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L}, {0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L}, {0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L}, {0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L}}, {{0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L}, {0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L}, {0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L}, {0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L}, {0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L, 0x3B79L, 0x2C83L}}};
static unsigned g_189 = 1UL;
static int g_193 = 0L;
static unsigned g_232[1] = {4294967295UL};
static char g_240 = 1L;
static char *g_239 = &g_240;
static const int *g_260 = &g_41[1][3][3];
static char g_284 = 0x97L;
static unsigned char g_324 = 0x98L;
static unsigned g_326[1][7][1] = {{{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}};
static unsigned char g_351 = 0x39L;
static int g_352 = 0x97160B4EL;
static unsigned char g_385 = 0x05L;
static short ***g_414[4][6][5] = {{{&g_111, (void*)0, &g_111, (void*)0, &g_111}, {&g_111, (void*)0, &g_111, (void*)0, &g_111}, {&g_111, (void*)0, &g_111, (void*)0, &g_111}, {&g_111, (void*)0, &g_111, (void*)0, &g_111}, {&g_111, (void*)0, &g_111, (void*)0, &g_111}, {&g_111, (void*)0, &g_111, (void*)0, &g_111}}, {{&g_111, (void*)0, &g_111, (void*)0, &g_111}, {&g_111, (void*)0, &g_111, (void*)0, &g_111}, {&g_111, (void*)0, &g_111, (void*)0, &g_111}, {&g_111, (void*)0, &g_111, (void*)0, &g_111}, {&g_111, (void*)0, &g_111, (void*)0, &g_111}, {&g_111, (void*)0, &g_111, (void*)0, &g_111}}, {{&g_111, (void*)0, &g_111, (void*)0, &g_111}, {&g_111, (void*)0, &g_111, (void*)0, &g_111}, {&g_111, (void*)0, &g_111, (void*)0, &g_111}, {&g_111, (void*)0, &g_111, (void*)0, &g_111}, {&g_111, (void*)0, &g_111, (void*)0, &g_111}, {&g_111, (void*)0, &g_111, (void*)0, &g_111}}, {{&g_111, (void*)0, &g_111, (void*)0, &g_111}, {&g_111, (void*)0, &g_111, (void*)0, &g_111}, {&g_111, (void*)0, &g_111, (void*)0, &g_111}, {&g_111, (void*)0, &g_111, (void*)0, &g_111}, {&g_111, (void*)0, &g_111, (void*)0, &g_111}, {&g_111, (void*)0, &g_111, (void*)0, &g_111}}};
static short ****g_413 = &g_414[2][1][0];
static unsigned *g_436 = (void*)0;
static unsigned **g_435 = &g_436;
static unsigned short **g_550 = &g_180;
static unsigned short ***g_549 = &g_550;
static unsigned short * const *g_553[10] = {&g_180, &g_180, (void*)0, &g_180, &g_180, (void*)0, &g_180, &g_180, (void*)0, &g_180};
static unsigned short * const **g_552[8] = {(void*)0, (void*)0, &g_553[0], (void*)0, (void*)0, &g_553[0], (void*)0, (void*)0};
static unsigned short g_651[7][10][1] = {{{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}};
static unsigned g_674 = 0xCA812857L;
static char g_686 = 0xA3L;
static char *g_828 = &g_686;
static unsigned ***g_857 = (void*)0;
static int **g_868 = &g_107;
static unsigned char g_913 = 1UL;
static char **g_964 = &g_239;
static char ***g_963 = &g_964;
static unsigned *g_1010 = &g_99;
static int g_1124 = 0x1943DF05L;
static int * const g_1154[10] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
static int *g_1155 = &g_41[1][3][3];
static unsigned g_1179 = 1UL;
static const char g_1246 = 0L;



static unsigned func_1(void);
static const unsigned func_4(unsigned p_5, unsigned short p_6, unsigned short p_7, unsigned p_8, int p_9);
static unsigned func_10(short p_11, int p_12);
static short func_13(char p_14, const int p_15, int p_16);
static int func_19(short p_20, int p_21, char p_22, int p_23);
static int func_28(short * p_29, char p_30);
static int * func_34(char * p_35, short * p_36);
static int * func_42(char p_43);
static int * const func_48(unsigned p_49, unsigned p_50, short p_51, int * p_52);
static unsigned func_53(short p_54, unsigned p_55);
static unsigned func_1(void)
{
    unsigned char l_24 = 0UL;
    short *l_25 = (void*)0;
    short *l_26 = &g_27[5];
    char *l_31 = (void*)0;
    char *l_32 = &g_33;
    short l_491 = 0L;
    short l_1161[2][7][5] = {{{0xE124L, 0xC8A9L, 2L, 0x2C39L, 0x2720L}, {0xE124L, 0xC8A9L, 2L, 0x2C39L, 0x2720L}, {0xE124L, 0xC8A9L, 2L, 0x2C39L, 0x2720L}, {0xE124L, 0xC8A9L, 2L, 0x2C39L, 0x2720L}, {0xE124L, 0xC8A9L, 2L, 0x2C39L, 0x2720L}, {0xE124L, 0xC8A9L, 2L, 0x2C39L, 0x2720L}, {0xE124L, 0xC8A9L, 2L, 0x2C39L, 0x2720L}}, {{0xE124L, 0xC8A9L, 2L, 0x2C39L, 0x2720L}, {0xE124L, 0xC8A9L, 2L, 0x2C39L, 0x2720L}, {0xE124L, 0xC8A9L, 2L, 0x2C39L, 0x2720L}, {0xE124L, 0xC8A9L, 2L, 0x2C39L, 0x2720L}, {0xE124L, 0xC8A9L, 2L, 0x2C39L, 0x2720L}, {0xE124L, 0xC8A9L, 2L, 0x2C39L, 0x2720L}, {0xE124L, 0xC8A9L, 2L, 0x2C39L, 0x2720L}}};
    int *l_1288 = &g_41[2][0][0];
    int *l_1289 = &g_352;
    int i, j, k;
    (*l_1288) = ((safe_sub_func_uint32_t_u_u(func_4(func_10(func_13((safe_add_func_int32_t_s_s(0x93EE3274L, func_19(((*l_26) = l_24), func_28(l_26, ((*l_32) = 0xFCL)), (safe_lshift_func_int16_t_s_u(l_24, (**g_179))), ((safe_sub_func_uint16_t_u_u(l_24, (safe_lshift_func_uint8_t_u_s(l_24, l_491)))) ^ 1UL)))), l_491, l_24), g_232[0]), l_1161[0][2][4], l_491, g_1124, g_232[0]), l_24)) <= l_1161[1][5][2]);
    (*l_1289) = ((*l_1288) = (*l_1288));
    return (*l_1289);
}







static const unsigned func_4(unsigned p_5, unsigned short p_6, unsigned short p_7, unsigned p_8, int p_9)
{
    unsigned short l_1164[10] = {3UL, 3UL, 3UL, 3UL, 3UL, 3UL, 3UL, 3UL, 3UL, 3UL};
    short *l_1165 = &g_188[2][1][3];
    const unsigned *l_1167 = &g_99;
    const unsigned **l_1166 = &l_1167;
    int l_1170 = 0x6B62602EL;
    short ****l_1188 = &g_414[2][1][0];
    char ***l_1222 = &g_964;
    int *l_1237 = &g_41[0][0][1];
    int *l_1268 = &g_352;
    int i;
    if ((safe_sub_func_uint32_t_u_u((p_5 != (l_1165 != l_1165)), 0xCFE23F93L)))
    {
        const unsigned ***l_1168[7] = {&l_1166, &l_1166, &l_1166, &l_1166, &l_1166, &l_1166, &l_1166};
        char *l_1169 = &g_686;
        int l_1178 = 0x1FA27D54L;
        unsigned short ****l_1194 = &g_549;
        const char ***l_1220 = (void*)0;
        int l_1226 = (-10L);
        short *l_1232 = &g_188[2][2][5];
        int l_1272 = 0x06278300L;
        int **l_1278 = &l_1237;
        int i;
        if ((((l_1166 = l_1166) != &g_1010) < 1L))
        {
            l_1170 = p_8;
        }
        else
        {
            unsigned short l_1171 = 1UL;
            int *l_1183 = (void*)0;
            int l_1251[4][7][5] = {{{(-2L), (-9L), 0L, (-1L), 0x64D420D9L}, {(-2L), (-9L), 0L, (-1L), 0x64D420D9L}, {(-2L), (-9L), 0L, (-1L), 0x64D420D9L}, {(-2L), (-9L), 0L, (-1L), 0x64D420D9L}, {(-2L), (-9L), 0L, (-1L), 0x64D420D9L}, {(-2L), (-9L), 0L, (-1L), 0x64D420D9L}, {(-2L), (-9L), 0L, (-1L), 0x64D420D9L}}, {{(-2L), (-9L), 0L, (-1L), 0x64D420D9L}, {(-2L), (-9L), 0L, (-1L), 0x64D420D9L}, {(-2L), (-9L), 0L, (-1L), 0x64D420D9L}, {(-2L), (-9L), 0L, (-1L), 0x64D420D9L}, {(-2L), (-9L), 0L, (-1L), 0x64D420D9L}, {(-2L), (-9L), 0L, (-1L), 0x64D420D9L}, {(-2L), (-9L), 0L, (-1L), 0x64D420D9L}}, {{(-2L), (-9L), 0L, (-1L), 0x64D420D9L}, {(-2L), (-9L), 0L, (-1L), 0x64D420D9L}, {(-2L), (-9L), 0L, (-1L), 0x64D420D9L}, {(-2L), (-9L), 0L, (-1L), 0x64D420D9L}, {(-2L), (-9L), 0L, (-1L), 0x64D420D9L}, {(-2L), (-9L), 0L, (-1L), 0x64D420D9L}, {(-2L), (-9L), 0L, (-1L), 0x64D420D9L}}, {{(-2L), (-9L), 0L, (-1L), 0x64D420D9L}, {(-2L), (-9L), 0L, (-1L), 0x64D420D9L}, {(-2L), (-9L), 0L, (-1L), 0x64D420D9L}, {(-2L), (-9L), 0L, (-1L), 0x64D420D9L}, {(-2L), (-9L), 0L, (-1L), 0x64D420D9L}, {(-2L), (-9L), 0L, (-1L), 0x64D420D9L}, {(-2L), (-9L), 0L, (-1L), 0x64D420D9L}}};
            short **l_1266 = &l_1232;
            short *l_1267 = &g_188[0][4][2];
            int **l_1269 = &g_107;
            int i, j, k;
            if ((!0xE8ADDCE4L))
            {
                int *l_1172 = (void*)0;
                int *l_1173 = &l_1170;
                int **l_1182 = &g_1155;
                (*l_1173) = l_1171;
                (*l_1173) = (safe_rshift_func_uint16_t_u_s(0x05F9L, l_1170));
                (*l_1182) = &l_1178;
                l_1183 = &l_1170;
            }
            else
            {
                int ****l_1198 = &g_185;
                int **l_1199 = &g_107;
                short *l_1209 = &g_65;
                unsigned l_1225 = 0UL;
                unsigned l_1247[9];
                int i;
                for (i = 0; i < 9; i++)
                    l_1247[i] = 0x65CABF14L;
                for (g_324 = 15; (g_324 != 26); ++g_324)
                {
                    unsigned short ****l_1193 = &g_549;
                    int l_1196 = 0x80526D7DL;
                    if ((safe_mod_func_int8_t_s_s((((void*)0 == l_1188) & (0x749FCCEBL ^ (~(safe_rshift_func_int16_t_s_u(l_1178, 9))))), (safe_mod_func_int8_t_s_s((&g_552[2] != (l_1194 = l_1193)), p_6)))))
                    {
                        return l_1170;
                    }
                    else
                    {
                        int *l_1195 = &g_41[1][2][0];
                        (*l_1195) = p_6;
                    }
                    for (g_284 = 7; (g_284 >= 1); g_284 -= 1)
                    {
                        char l_1197 = (-4L);
                        l_1197 = l_1196;
                    }
                }
                (*l_1199) = func_42(((void*)0 == l_1198));
                if ((*g_107))
                {
                    short l_1233 = (-1L);
                    if (((*g_107) = p_9))
                    {
                        return (*g_1010);
                    }
                    else
                    {
                        short **l_1208[8] = {&g_112, &l_1165, &g_112, &l_1165, &g_112, &l_1165, &g_112, &l_1165};
                        const char ****l_1221 = &l_1220;
                        char ****l_1223 = &l_1222;
                        int l_1224 = 0x115294F3L;
                        short *l_1231 = &g_188[2][1][3];
                        int *l_1234 = &g_41[1][3][3];
                        int i;
                        (*g_107) = l_1170;
                        (*l_1199) = &l_1178;
                        (*l_1199) = func_42((*g_239));
                        (*l_1234) = ((safe_mul_func_uint16_t_u_u(((*g_180) = (&p_6 != (*g_179))), ((l_1233 = (safe_sub_func_uint8_t_u_u(((func_28((l_1232 = l_1231), (*g_239)) == ((p_7 || (l_1164[9] | 4294967295UL)) != l_1178)) > p_7), (*g_239)))) && p_7))) >= 2L);
                    }
                    for (g_351 = 0; (g_351 > 32); ++g_351)
                    {
                        (*l_1199) = l_1237;
                        if (p_6)
                            break;
                        if ((*g_107))
                            break;
                    }
                    for (g_189 = 0; (g_189 <= 5); g_189 += 1)
                    {
                        unsigned *l_1244 = (void*)0;
                        unsigned *l_1245 = &g_232[0];
                        int i;
                        l_1226 = ((safe_sub_func_int32_t_s_s(((*l_1237) = (safe_sub_func_int16_t_s_s((((void*)0 != &g_185) != (safe_sub_func_uint8_t_u_u(((l_1164[(g_189 + 2)] & l_1164[(g_189 + 3)]) < (p_6 != g_1246)), 1L))), 1UL))), l_1164[(g_189 + 3)])) != p_6);
                        if (l_1247[2])
                            break;
                        if (p_5)
                            break;
                    }
                    g_260 = &l_1170;
                }
                else
                {
                    short *l_1250[7];
                    int l_1258 = (-1L);
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1250[i] = &g_27[5];
                    for (g_674 = 1; (g_674 <= 7); g_674 += 1)
                    {
                        int i;
                        return g_63[g_674];
                    }
                    l_1251[3][0][3] = ((safe_mul_func_int16_t_s_s(func_28(l_1250[0], (*g_239)), p_9)) || (*g_180));
                    for (p_9 = 8; (p_9 >= 2); p_9 -= 1)
                    {
                        short **l_1252 = (void*)0;
                        int l_1255[6][4][7] = {{{1L, 9L, 1L, 0xAE397CB8L, 0xD14C917AL, 1L, 0x993063CDL}, {1L, 9L, 1L, 0xAE397CB8L, 0xD14C917AL, 1L, 0x993063CDL}, {1L, 9L, 1L, 0xAE397CB8L, 0xD14C917AL, 1L, 0x993063CDL}, {1L, 9L, 1L, 0xAE397CB8L, 0xD14C917AL, 1L, 0x993063CDL}}, {{1L, 9L, 1L, 0xAE397CB8L, 0xD14C917AL, 1L, 0x993063CDL}, {1L, 9L, 1L, 0xAE397CB8L, 0xD14C917AL, 1L, 0x993063CDL}, {1L, 9L, 1L, 0xAE397CB8L, 0xD14C917AL, 1L, 0x993063CDL}, {1L, 9L, 1L, 0xAE397CB8L, 0xD14C917AL, 1L, 0x993063CDL}}, {{1L, 9L, 1L, 0xAE397CB8L, 0xD14C917AL, 1L, 0x993063CDL}, {1L, 9L, 1L, 0xAE397CB8L, 0xD14C917AL, 1L, 0x993063CDL}, {1L, 9L, 1L, 0xAE397CB8L, 0xD14C917AL, 1L, 0x993063CDL}, {1L, 9L, 1L, 0xAE397CB8L, 0xD14C917AL, 1L, 0x993063CDL}}, {{1L, 9L, 1L, 0xAE397CB8L, 0xD14C917AL, 1L, 0x993063CDL}, {1L, 9L, 1L, 0xAE397CB8L, 0xD14C917AL, 1L, 0x993063CDL}, {1L, 9L, 1L, 0xAE397CB8L, 0xD14C917AL, 1L, 0x993063CDL}, {1L, 9L, 1L, 0xAE397CB8L, 0xD14C917AL, 1L, 0x993063CDL}}, {{1L, 9L, 1L, 0xAE397CB8L, 0xD14C917AL, 1L, 0x993063CDL}, {1L, 9L, 1L, 0xAE397CB8L, 0xD14C917AL, 1L, 0x993063CDL}, {1L, 9L, 1L, 0xAE397CB8L, 0xD14C917AL, 1L, 0x993063CDL}, {1L, 9L, 1L, 0xAE397CB8L, 0xD14C917AL, 1L, 0x993063CDL}}, {{1L, 9L, 1L, 0xAE397CB8L, 0xD14C917AL, 1L, 0x993063CDL}, {1L, 9L, 1L, 0xAE397CB8L, 0xD14C917AL, 1L, 0x993063CDL}, {1L, 9L, 1L, 0xAE397CB8L, 0xD14C917AL, 1L, 0x993063CDL}, {1L, 9L, 1L, 0xAE397CB8L, 0xD14C917AL, 1L, 0x993063CDL}}};
                        int i, j, k;
                        l_1251[3][0][3] = ((*l_1237) = (&l_1209 != l_1252));
                        l_1255[4][0][5] = (safe_rshift_func_int8_t_s_s((l_1247[p_9] < ((*l_1188) == (*g_413))), 1));
                    }
                    if ((safe_add_func_uint16_t_u_u(((*g_180) = l_1258), ((void*)0 != &g_435))))
                    {
                        int *l_1259 = (void*)0;
                        (*l_1199) = l_1259;
                        return (*l_1237);
                    }
                    else
                    {
                        char l_1262 = 0xBBL;
                        unsigned short ** const *l_1264 = &g_179;
                        unsigned short ** const **l_1263 = &l_1264;
                        int l_1265 = 0xA934651DL;
                        l_1251[3][0][3] = l_1258;
                        (*l_1237) = ((safe_add_func_uint32_t_u_u(0xF280DB5DL, 4294967286UL)) != l_1262);
                        l_1265 = (((*l_1263) = &g_179) == &g_550);
                    }
                }
            }
            (*l_1269) = func_42((*l_1237));
            (*g_107) = (*l_1237);
        }
        for (g_385 = 0; (g_385 != 22); g_385 = safe_add_func_int16_t_s_s(g_385, 3))
        {
            (*l_1237) = (*l_1237);
        }
        for (g_240 = 0; (g_240 > (-28)); g_240 = safe_sub_func_int16_t_s_s(g_240, 1))
        {
            int *l_1277 = (void*)0;
            l_1277 = l_1277;
            l_1277 = (void*)0;
            if (l_1178)
                break;
        }
        (*l_1278) = &l_1170;
    }
    else
    {
        const int *l_1279 = &g_41[1][4][0];
        const int **l_1280 = &g_260;
        short *l_1282 = &g_27[5];
        (*l_1280) = l_1279;
        if (((*l_1279) || (*l_1237)))
        {
            char *l_1281 = &g_284;
            int l_1285 = 0x11865EF5L;
            for (g_1124 = 7; (g_1124 >= 0); g_1124 -= 1)
            {
                (*l_1280) = func_42(p_6);
            }
            for (p_7 = 1; (p_7 <= 7); p_7 += 1)
            {
                int *l_1286 = &l_1285;
                (*l_1280) = func_34(l_1281, l_1282);
                for (g_189 = 2; (g_189 <= 7); g_189 += 1)
                {
                    int *l_1287[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1287[i] = &l_1285;
                    (*l_1268) = (safe_rshift_func_uint8_t_u_u(((*g_435) != (void*)0), 5));
                    for (p_8 = 0; (p_8 <= 2); p_8 += 1)
                    {
                        int i, j, k;
                        l_1285 = (g_41[p_8][(p_8 + 1)][g_189] = g_63[p_8]);
                        (*l_1237) = p_7;
                        l_1287[2] = l_1286;
                        l_1286 = &g_41[p_8][(p_8 + 1)][g_189];
                    }
                    g_868 = &l_1287[2];
                }
            }
        }
        else
        {
            return p_9;
        }
    }
    g_107 = &l_1170;
    return (*g_1010);
}







static unsigned func_10(short p_11, int p_12)
{
    unsigned * const *l_912 = &g_436;
    unsigned * const ** const l_911 = &l_912;
    short *l_914[2][6] = {{(void*)0, &g_27[5], (void*)0, &g_27[5], (void*)0, &g_27[5]}, {(void*)0, &g_27[5], (void*)0, &g_27[5], (void*)0, &g_27[5]}};
    short **l_915 = &l_914[1][0];
    short *l_916 = &g_63[6];
    short **l_917 = &l_916;
    unsigned char *l_918[8] = {&g_913, (void*)0, &g_913, (void*)0, &g_913, (void*)0, &g_913, (void*)0};
    int *l_919 = &g_41[1][3][3];
    int l_920[8][1][10] = {{{4L, 0L, 0xC69BF18BL, 0xE2F2B7A7L, 0x11DC50D5L, 0xE163F8C1L, 0x7C453615L, 0x75DD0012L, 0xC69BF18BL, 0x75DD0012L}}, {{4L, 0L, 0xC69BF18BL, 0xE2F2B7A7L, 0x11DC50D5L, 0xE163F8C1L, 0x7C453615L, 0x75DD0012L, 0xC69BF18BL, 0x75DD0012L}}, {{4L, 0L, 0xC69BF18BL, 0xE2F2B7A7L, 0x11DC50D5L, 0xE163F8C1L, 0x7C453615L, 0x75DD0012L, 0xC69BF18BL, 0x75DD0012L}}, {{4L, 0L, 0xC69BF18BL, 0xE2F2B7A7L, 0x11DC50D5L, 0xE163F8C1L, 0x7C453615L, 0x75DD0012L, 0xC69BF18BL, 0x75DD0012L}}, {{4L, 0L, 0xC69BF18BL, 0xE2F2B7A7L, 0x11DC50D5L, 0xE163F8C1L, 0x7C453615L, 0x75DD0012L, 0xC69BF18BL, 0x75DD0012L}}, {{4L, 0L, 0xC69BF18BL, 0xE2F2B7A7L, 0x11DC50D5L, 0xE163F8C1L, 0x7C453615L, 0x75DD0012L, 0xC69BF18BL, 0x75DD0012L}}, {{4L, 0L, 0xC69BF18BL, 0xE2F2B7A7L, 0x11DC50D5L, 0xE163F8C1L, 0x7C453615L, 0x75DD0012L, 0xC69BF18BL, 0x75DD0012L}}, {{4L, 0L, 0xC69BF18BL, 0xE2F2B7A7L, 0x11DC50D5L, 0xE163F8C1L, 0x7C453615L, 0x75DD0012L, 0xC69BF18BL, 0x75DD0012L}}};
    int *l_921 = &l_920[2][0][8];
    const char l_922 = (-8L);
    unsigned short l_923[2];
    unsigned l_937 = 1UL;
    int l_978[6] = {3L, 0xBE350273L, 3L, 0xBE350273L, 3L, 0xBE350273L};
    unsigned l_1113 = 0x291EF077L;
    const short *l_1148 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_923[i] = 0xA351L;
    (*l_921) = (safe_rshift_func_uint16_t_u_s(((safe_add_func_int32_t_s_s(((*l_919) = (p_12 >= (g_324 = (((l_911 == &l_912) | ((g_913 | (*g_828)) == 0xC9L)) | (((*l_915) = l_914[1][0]) == ((*l_917) = l_916)))))), 0x287A80A2L)) < l_920[2][0][8]), p_11));
    if ((l_922 ^ (l_923[0] = (p_12 || 0x634475F6L))))
    {
        int *l_926[9];
        char *l_930 = &g_686;
        int **l_931 = &l_926[4];
        int **l_932 = &l_919;
        int i;
        for (i = 0; i < 9; i++)
            l_926[i] = &g_41[1][3][3];
        for (g_45 = 0; (g_45 != (-17)); g_45--)
        {
            int **l_927[6];
            int i;
            for (i = 0; i < 6; i++)
                l_927[i] = &l_926[6];
            g_107 = l_926[4];
        }
        for (g_686 = 0; (g_686 <= 0); g_686 += 1)
        {
            int l_928[2][6] = {{0x2E584235L, 0xB9C93C85L, 0x2E584235L, 0xB9C93C85L, 0x2E584235L, 0xB9C93C85L}, {0x2E584235L, 0xB9C93C85L, 0x2E584235L, 0xB9C93C85L, 0x2E584235L, 0xB9C93C85L}};
            int **l_929 = &l_919;
            int i, j;
            l_928[1][4] = p_11;
            (*l_929) = (void*)0;
        }
        l_926[1] = func_34(l_930, (*l_915));
        (*l_932) = ((*l_931) = &l_920[0][0][1]);
    }
    else
    {
        int *l_943 = &l_920[6][0][6];
        int **l_945[9][5][5] = {{{(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}}, {{(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}}, {{(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}}, {{(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}}, {{(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}}, {{(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}}, {{(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}}, {{(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}}, {{(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}, {(void*)0, &l_919, &l_919, &l_943, &l_919}}};
        int i, j, k;
        for (g_324 = 0; (g_324 < 18); g_324 = safe_add_func_int8_t_s_s(g_324, 8))
        {
            unsigned l_938 = 4294967287UL;
            int *l_939 = &g_352;
            l_939 = func_42((+(safe_mul_func_int16_t_s_s((-2L), (l_938 ^ l_938)))));
        }
        for (p_12 = 0; (p_12 != 9); p_12 = safe_add_func_int32_t_s_s(p_12, 5))
        {
            int **l_942[3];
            char *l_944 = (void*)0;
            int i;
            for (i = 0; i < 3; i++)
                l_942[i] = (void*)0;
            l_943 = func_42(p_12);
            g_260 = l_943;
        }
        g_107 = l_943;
    }
    for (g_686 = 0; (g_686 <= 7); g_686 += 1)
    {
        int *l_961 = (void*)0;
        int l_975 = 0x115CDB48L;
        char *l_1005 = &g_33;
        short *l_1022 = (void*)0;
        unsigned short l_1049 = 0x9EF9L;
        int l_1090 = 1L;
        for (g_240 = 0; (g_240 <= 1); g_240 += 1)
        {
            int *l_967 = (void*)0;
            int i;
            if (l_923[g_240])
            {
                short *l_946 = &g_27[5];
                int l_954[5];
                int *l_960 = &g_41[1][3][3];
                char * const *l_966 = &g_239;
                char * const **l_965 = &l_966;
                int i;
                for (i = 0; i < 5; i++)
                    l_954[i] = (-9L);
                for (g_189 = 2; (g_189 <= 7); g_189 += 1)
                {
                    unsigned *l_949 = &g_326[0][6][0];
                    int *l_959 = (void*)0;
                    int **l_962 = &l_919;
                    int i, j;
                    if (((l_914[g_240][(g_240 + 4)] != &l_923[0]) >= (*g_828)))
                    {
                        unsigned l_955[7][7][5] = {{{0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}}, {{0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}}, {{0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}}, {{0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}}, {{0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}}, {{0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}}, {{0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}, {0x9B22DE81L, 0x1D4C10D6L, 0xF5F61FF7L, 1UL, 0xF5F61FF7L}}};
                        char *l_956 = &g_284;
                        int *l_957[9][5][5] = {{{&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}}, {{&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}}, {{&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}}, {{&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}}, {{&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}}, {{&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}}, {{&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}}, {{&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}}, {{&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}, {&g_41[0][6][1], &l_954[3], &l_954[3], &g_352, &g_41[1][3][3]}}};
                        int i, j, k;
                        g_352 = ((*l_921) = func_28(l_946, ((*l_956) = ((safe_rshift_func_int8_t_s_s(0x7AL, (0x1555L & ((((void*)0 != l_949) && ((safe_mul_func_uint16_t_u_u(((l_954[3] = (safe_sub_func_uint16_t_u_u(0xF3AFL, (*l_921)))) >= (*l_921)), 0xCE46L)) > (*g_828))) <= l_955[1][0][4])))) != 0xB3C1L))));
                    }
                    else
                    {
                        int **l_958[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_958[i] = &l_919;
                        (*l_921) = 0L;
                        if (p_12)
                            break;
                        l_959 = l_949;
                        l_960 = func_34(&g_33, &p_11);
                    }
                    if (p_12)
                        continue;
                    (*l_962) = l_961;
                    (*l_962) = (*l_962);
                }
                (*l_921) = (g_963 == l_965);
            }
            else
            {
                unsigned char l_970 = 9UL;
                int l_977 = 0xC13D7EBEL;
                char *l_979 = &g_33;
                for (g_324 = 0; (g_324 <= 1); g_324 += 1)
                {
                    if (l_923[g_240])
                        break;
                }
                for (g_99 = 0; (g_99 <= 1); g_99 += 1)
                {
                    unsigned l_976 = 4294967295UL;
                    for (g_351 = 0; (g_351 <= 2); g_351 += 1)
                    {
                        int i, j, k;
                        if (g_188[g_99][g_99][g_240])
                            break;
                        l_967 = (void*)0;
                    }
                }
                l_919 = func_34(l_979, (*l_917));
            }
        }
        for (g_33 = 0; (g_33 <= 0); g_33 += 1)
        {
            const unsigned l_997 = 1UL;
            int l_998 = 0xFD21F79FL;
            for (g_193 = 0; (g_193 <= 0); g_193 += 1)
            {
                unsigned short l_982 = 65535UL;
                int **l_999 = &l_919;
                int i, j, k;
                l_998 = (safe_rshift_func_int16_t_s_s(l_982, p_12));
                (*l_999) = &l_920[g_686][g_193][(g_33 + 1)];
                l_961 = &l_975;
            }
            for (g_240 = 0; (g_240 <= 1); g_240 += 1)
            {
                unsigned l_1016 = 0x94052C95L;
                short l_1019 = 0L;
                unsigned *** const *l_1028 = &g_857;
                int l_1042 = 1L;
                int *l_1044 = &l_978[3];
                for (g_324 = 0; (g_324 <= 1); g_324 += 1)
                {
                    unsigned l_1000 = 4294967295UL;
                    int *l_1013 = &l_975;
                    int **l_1014 = (void*)0;
                    int **l_1015 = &g_107;
                    (*l_1015) = &g_41[1][3][3];
                }
                for (g_45 = 0; (g_45 <= 1); g_45 += 1)
                {
                    int l_1027 = 0xAE905844L;
                    char *l_1029 = &g_284;
                    int i;
                    l_1027 = (l_1016 == (safe_lshift_func_uint16_t_u_u(l_1019, (safe_mod_func_uint8_t_u_u((&p_11 != (l_1022 = l_1022)), ((*l_1029) = l_997))))));
                    if (((*l_921) = (safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((p_11 = (p_11 | (**g_179))), (safe_mul_func_int8_t_s_s(l_1027, p_12)))), p_12))))
                    {
                        return p_11;
                    }
                    else
                    {
                        int *l_1036 = &l_975;
                        int *l_1041[6][4][7] = {{{&l_975, (void*)0, &l_1027, (void*)0, &l_975, &l_998, &l_1027}, {&l_975, (void*)0, &l_1027, (void*)0, &l_975, &l_998, &l_1027}, {&l_975, (void*)0, &l_1027, (void*)0, &l_975, &l_998, &l_1027}, {&l_975, (void*)0, &l_1027, (void*)0, &l_975, &l_998, &l_1027}}, {{&l_975, (void*)0, &l_1027, (void*)0, &l_975, &l_998, &l_1027}, {&l_975, (void*)0, &l_1027, (void*)0, &l_975, &l_998, &l_1027}, {&l_975, (void*)0, &l_1027, (void*)0, &l_975, &l_998, &l_1027}, {&l_975, (void*)0, &l_1027, (void*)0, &l_975, &l_998, &l_1027}}, {{&l_975, (void*)0, &l_1027, (void*)0, &l_975, &l_998, &l_1027}, {&l_975, (void*)0, &l_1027, (void*)0, &l_975, &l_998, &l_1027}, {&l_975, (void*)0, &l_1027, (void*)0, &l_975, &l_998, &l_1027}, {&l_975, (void*)0, &l_1027, (void*)0, &l_975, &l_998, &l_1027}}, {{&l_975, (void*)0, &l_1027, (void*)0, &l_975, &l_998, &l_1027}, {&l_975, (void*)0, &l_1027, (void*)0, &l_975, &l_998, &l_1027}, {&l_975, (void*)0, &l_1027, (void*)0, &l_975, &l_998, &l_1027}, {&l_975, (void*)0, &l_1027, (void*)0, &l_975, &l_998, &l_1027}}, {{&l_975, (void*)0, &l_1027, (void*)0, &l_975, &l_998, &l_1027}, {&l_975, (void*)0, &l_1027, (void*)0, &l_975, &l_998, &l_1027}, {&l_975, (void*)0, &l_1027, (void*)0, &l_975, &l_998, &l_1027}, {&l_975, (void*)0, &l_1027, (void*)0, &l_975, &l_998, &l_1027}}, {{&l_975, (void*)0, &l_1027, (void*)0, &l_975, &l_998, &l_1027}, {&l_975, (void*)0, &l_1027, (void*)0, &l_975, &l_998, &l_1027}, {&l_975, (void*)0, &l_1027, (void*)0, &l_975, &l_998, &l_1027}, {&l_975, (void*)0, &l_1027, (void*)0, &l_975, &l_998, &l_1027}}};
                        int **l_1043 = &l_1041[1][3][6];
                        int i, j, k;
                        l_1036 = (void*)0;
                        l_975 = (l_1042 = ((*l_921) = (safe_add_func_int32_t_s_s(3L, (safe_mod_func_uint16_t_u_u((**g_179), p_12))))));
                        l_1044 = ((*l_1043) = &l_998);
                        (*l_1043) = &l_978[2];
                    }
                    (*l_1044) = 1L;
                }
            }
        }
        l_961 = &l_975;
        if ((((*l_961) = (safe_add_func_uint8_t_u_u((((void*)0 == &l_922) != g_232[0]), g_651[3][0][0]))) & p_12))
        {
            short l_1050 = 0x4505L;
            int *l_1059 = &l_920[0][0][0];
            unsigned short **** const l_1079 = &g_549;
            int l_1147[10] = {0L, 1L, 0L, 1L, 0L, 1L, 0L, 1L, 0L, 1L};
            int i;
            (*l_961) = p_12;
            (*l_961) = (safe_rshift_func_uint8_t_u_u((l_1050 = l_1049), 7));
            if (p_11)
            {
                unsigned short l_1051 = 0x086CL;
                char l_1057 = 0L;
                const unsigned *l_1061[6] = {&l_937, &l_937, &l_937, &l_937, &l_937, &l_937};
                int *l_1082 = &g_41[1][3][3];
                unsigned *l_1089[3];
                int *l_1091 = &l_978[4];
                int *l_1092 = (void*)0;
                int *l_1093 = &g_352;
                int *l_1096 = &l_1090;
                int i;
                for (i = 0; i < 3; i++)
                    l_1089[i] = &g_326[0][4][0];
                for (g_33 = 0; (g_33 <= 1); g_33 += 1)
                {
                    char l_1056 = 0xDEL;
                    unsigned *l_1058 = &g_232[0];
                    int **l_1060 = &l_1059;
                    const unsigned short *l_1071 = &l_1051;
                    const unsigned short **l_1070 = &l_1071;
                    (*l_1060) = &l_975;
                    if (((void*)0 != l_1061[4]))
                    {
                        int *l_1062 = &g_352;
                        (*l_961) = ((*l_1059) >= (l_1062 != l_1061[2]));
                        (*l_961) = (safe_mul_func_uint8_t_u_u(0xD8L, (safe_lshift_func_int8_t_s_u(((((*l_921) = (*l_921)) >= ((*l_1062) = (safe_mod_func_int32_t_s_s((((p_11 ^ ((**l_917) = (*l_1059))) >= (*g_1010)) | p_12), (*l_961))))) < p_11), p_11))));
                    }
                    else
                    {
                        const unsigned short ***l_1072 = &l_1070;
                        int l_1080 = (-1L);
                        short **l_1081 = (void*)0;
                        (*l_1072) = l_1070;
                        (*l_1060) = &l_975;
                        l_1082 = (l_1059 = l_1082);
                        (*l_1060) = (*l_1060);
                    }
                }
                (*l_1096) = ((((safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(((((p_11 >= (safe_sub_func_uint32_t_u_u(((*l_1059) = ((*g_1010) = (0x9C3FL <= 0xF00EL))), 0xD075AB00L))) < ((*l_1093) = ((*l_1091) = l_1090))) == 0x9CD1EDCAL) < (safe_lshift_func_int8_t_s_s(p_12, ((*g_239) = ((&g_324 != l_1005) <= p_12))))), 0xDBL)), p_11)) || p_11) <= p_12) ^ (-7L));
            }
            else
            {
                unsigned char l_1103 = 1UL;
                int l_1104 = 1L;
                short *l_1125 = &g_27[5];
                unsigned l_1149 = 0xC80F70FCL;
                if ((safe_add_func_int32_t_s_s(((65529UL > (*l_961)) > 4294967287UL), 0xC282B945L)))
                {
                    short *l_1107 = &g_188[2][1][3];
                    int l_1112 = 0x1F0F9090L;
                    unsigned **l_1117 = (void*)0;
                    if (p_11)
                    {
                        const int **l_1108 = &g_260;
                        const int *l_1110 = &l_920[0][0][7];
                        const int **l_1109 = &l_1110;
                        (*l_1109) = ((*l_1108) = func_34((*g_964), l_1107));
                        (*l_1109) = l_1059;
                    }
                    else
                    {
                        unsigned short l_1111 = 0x920DL;
                        if (p_12)
                            break;
                        (*l_1059) = (*l_921);
                        (*l_921) = p_11;
                        return p_11;
                    }
                    (*l_1059) = 0x4246FD20L;
                    (*l_961) = ((safe_unary_minus_func_uint8_t_u(0x5EL)) > ((safe_add_func_int8_t_s_s(0xA2L, (l_1117 != (void*)0))) ^ (safe_lshift_func_uint16_t_u_s(((**g_179) = ((*l_1059) = ((safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u(3UL, ((p_12 < (-1L)) >= ((***g_963) = 8L)))) >= g_1124), p_12)) == (*l_961)))), 0))));
                    for (l_975 = 0; (l_975 <= 1); l_975 += 1)
                    {
                        unsigned char l_1134 = 8UL;
                        int **l_1150 = &l_921;
                        (*l_1059) = func_28(l_1125, ((*l_1005) = (((((safe_mul_func_int16_t_s_s((((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((l_1103 | l_1112), g_188[0][2][3])), g_385)) ^ (*l_1059)) >= (*g_828)), p_12)) | 0xEB94L) && l_1149) == g_651[1][2][0]) || (*l_1059))));
                        (*l_1150) = &l_978[2];
                        (*l_1059) = (0xA68FL < p_11);
                    }
                }
                else
                {
                    char *l_1152 = &g_240;
                    int *l_1153 = &l_975;
                    int **l_1160 = &l_1059;
                    if ((p_11 > p_12))
                    {
                        int **l_1151 = &l_919;
                        (*l_1151) = &l_1104;
                        l_1153 = func_34(l_1152, l_1022);
                    }
                    else
                    {
                        (*l_921) = (*l_1059);
                    }
                    g_1155 = g_1154[2];
                    l_1104 = p_12;
                    (*l_1160) = &l_1104;
                }
                g_107 = &l_1104;
                (*g_107) = p_11;
            }
        }
        else
        {
            if (p_12)
                break;
        }
    }
    return p_12;
}







static short func_13(char p_14, const int p_15, int p_16)
{
    unsigned l_638 = 0x4A91FB03L;
    short *l_640[6][1];
    int *l_641 = &g_352;
    int **l_642 = &g_107;
    unsigned short **l_647 = &g_180;
    unsigned short * const **l_648 = &g_553[0];
    unsigned short * const l_650 = &g_651[0][3][0];
    unsigned short * const *l_649 = &l_650;
    unsigned *l_656[6] = {&g_99, &g_99, &g_326[0][4][0], &g_99, &g_99, &g_326[0][4][0]};
    int *l_657 = &g_41[1][3][3];
    unsigned l_658 = 0x780917E5L;
    char l_754 = (-3L);
    unsigned char l_777[6] = {0xC4L, 0x55L, 0xC4L, 0x55L, 0xC4L, 0x55L};
    unsigned ***l_845 = &g_435;
    short *l_885 = &g_63[1];
    short * const *l_889 = &g_112;
    short * const **l_888[8] = {&l_889, &l_889, &l_889, &l_889, &l_889, &l_889, &l_889, &l_889};
    char l_894 = (-4L);
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
            l_640[i][j] = (void*)0;
    }
    (*l_642) = l_641;
    if ((((*l_657) = ((safe_mul_func_uint16_t_u_u(((**l_642) && ((*l_641) = (((g_27[3] || ((*g_239) = (*g_239))) >= (+((**g_179) && (((*g_549) = l_647) == (l_649 = ((*l_648) = l_647)))))) | (safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((**g_179), (g_27[5] || (*l_641)))), p_14))))), p_15)) >= 0x7EA0L)) & l_658))
    {
        int l_661 = 3L;
        const int **l_669 = &g_260;
        short *l_706 = &g_65;
        int l_745[2];
        int l_783 = (-7L);
        unsigned char l_787[8] = {8UL, 8UL, 0xACL, 8UL, 8UL, 0xACL, 8UL, 8UL};
        unsigned *l_788[8] = {&g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99};
        unsigned l_791 = 0UL;
        unsigned char l_805 = 0x24L;
        unsigned l_825 = 0x3FEFA4C2L;
        unsigned **l_854 = &l_788[0];
        int i;
        for (i = 0; i < 2; i++)
            l_745[i] = 0L;
        for (l_638 = 0; (l_638 <= 7); l_638 += 1)
        {
            for (g_352 = 6; (g_352 >= 0); g_352 -= 1)
            {
                const int *l_659[9] = {&g_352, &g_41[1][3][3], &g_352, &g_41[1][3][3], &g_352, &g_41[1][3][3], &g_352, &g_41[1][3][3], &g_352};
                int i;
                for (g_189 = 0; (g_189 <= 0); g_189 += 1)
                {
                    for (g_33 = 7; (g_33 >= 0); g_33 -= 1)
                    {
                        int i;
                        l_659[2] = &p_15;
                        if (g_232[g_189])
                            continue;
                    }
                }
                for (g_193 = 0; (g_193 <= 7); g_193 += 1)
                {
                    for (g_324 = 0; (g_324 <= 7); g_324 += 1)
                    {
                        const int **l_660 = &l_659[0];
                        (*l_660) = l_659[6];
                    }
                }
            }
        }
        if (l_661)
        {
            int *l_662 = &g_41[1][3][3];
            short *l_696 = (void*)0;
            l_662 = ((*l_642) = &l_661);
            for (l_658 = (-17); (l_658 > 7); l_658 = safe_add_func_uint8_t_u_u(l_658, 9))
            {
                char l_670 = (-1L);
                unsigned short **l_671 = (void*)0;
                short *l_672 = &g_188[1][2][6];
                int *l_673 = &g_41[0][5][3];
                int l_716 = 1L;
                if ((safe_rshift_func_uint16_t_u_s((0L || ((safe_sub_func_int32_t_s_s(((((void*)0 == (*l_648)) || (l_669 == (void*)0)) <= ((l_670 || (((*g_549) = l_671) != (void*)0)) < (func_28(l_672, (*g_239)) <= p_16))), (-1L))) != (-1L))), 6)))
                {
                    (*l_669) = l_673;
                    return g_674;
                }
                else
                {
                    for (g_351 = 0; (g_351 <= 7); g_351 += 1)
                    {
                        return p_16;
                    }
                    l_662 = (*l_642);
                }
                for (g_61 = 0; (g_61 <= 9); g_61 = safe_add_func_uint32_t_u_u(g_61, 2))
                {
                    char l_683 = 1L;
                    for (p_14 = 0; (p_14 > 0); p_14 = safe_add_func_int32_t_s_s(p_14, 9))
                    {
                        unsigned l_687 = 0x16585498L;
                        int * const *l_688 = &l_673;
                        int * const **l_689 = (void*)0;
                        int * const **l_690 = (void*)0;
                        int * const **l_691 = &l_688;
                        (*l_673) = (safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u((!l_683), (safe_lshift_func_uint8_t_u_u((p_15 != g_686), l_687)))), l_687));
                        (*l_669) = &p_15;
                        l_661 = (((((*l_673) = p_15) && p_14) >= p_14) >= p_16);
                        (*l_691) = l_688;
                    }
                    if ((safe_sub_func_uint32_t_u_u(l_683, (1L < (p_15 || (safe_mul_func_uint16_t_u_u((((func_28(l_696, p_15) & (safe_rshift_func_uint16_t_u_s(p_15, 2))) || p_16) && l_683), 65535UL)))))))
                    {
                        if (p_15)
                            break;
                        (*l_641) = l_683;
                    }
                    else
                    {
                        int l_699 = 4L;
                        l_699 = (p_14 | p_15);
                        (*l_641) = ((*l_657) = p_14);
                        (*l_641) = (-1L);
                        (*l_673) = (((safe_add_func_int32_t_s_s(p_16, p_15)) <= l_699) != (safe_rshift_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(func_28(l_706, ((*g_239) = (safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((*l_641) = p_15), 3)), (safe_unary_minus_func_uint32_t_u((p_15 | 0x7AL))))), func_28(l_706, (((safe_sub_func_int8_t_s_s(func_28(l_640[1][0], (*g_239)), 0xCAL)) ^ 0x2DL) | 0x5CL)))))), g_99)) == l_716), 6)));
                    }
                }
            }
            for (g_193 = (-13); (g_193 < (-19)); g_193--)
            {
                return p_16;
            }
            (*l_641) = 0x3AA464F6L;
        }
        else
        {
            char l_719 = 0xB2L;
            int l_755 = 0xDCE20CDAL;
            int *l_772 = (void*)0;
            int ***l_780 = (void*)0;
            const int l_797 = (-1L);
            short *l_804 = &g_65;
            unsigned short ** const l_823[9] = {&g_180, &g_180, &g_180, &g_180, &g_180, &g_180, &g_180, &g_180, &g_180};
            char **l_841 = &g_239;
            char ***l_840[10];
            unsigned l_869 = 0x78A92364L;
            int i;
            for (i = 0; i < 10; i++)
                l_840[i] = &l_841;
            if ((l_719 || (p_16 && 6UL)))
            {
                short *l_720 = &g_63[5];
                int l_730 = 0L;
                char *l_731 = &g_284;
                char l_753 = 0x1AL;
                for (g_61 = 0; (g_61 <= 9); g_61 += 1)
                {
                    char *l_723[5][8] = {{&g_33, &g_33, (void*)0, &g_33, &g_33, (void*)0, &g_33, &g_33}, {&g_33, &g_33, (void*)0, &g_33, &g_33, (void*)0, &g_33, &g_33}, {&g_33, &g_33, (void*)0, &g_33, &g_33, (void*)0, &g_33, &g_33}, {&g_33, &g_33, (void*)0, &g_33, &g_33, (void*)0, &g_33, &g_33}, {&g_33, &g_33, (void*)0, &g_33, &g_33, (void*)0, &g_33, &g_33}};
                    int i, j;
                    if (func_28(l_720, (g_284 = ((*g_239) = (func_28(l_640[1][0], p_16) ^ (safe_rshift_func_int16_t_s_s((p_16 && g_61), 14)))))))
                    {
                        (*l_657) = ((*g_239) == (safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(6L, (l_719 == 0x64L))), (safe_mul_func_int8_t_s_s(0xAEL, (*g_239))))));
                        return l_730;
                    }
                    else
                    {
                        (*l_669) = &p_15;
                        (*l_669) = func_34(l_731, l_640[0][0]);
                        (*l_641) = (~(+6L));
                    }
                    return (*l_657);
                }
                if ((safe_mod_func_int8_t_s_s(((p_15 != ((***g_549) == ((p_15 && 247UL) && ((*l_657) = (safe_mod_func_int16_t_s_s((func_28(l_720, (*g_239)) == 0xBAF1ADEAL), l_730)))))) ^ p_14), (*g_239))))
                {
                    int *l_736 = &g_41[1][3][3];
                    (*l_669) = l_736;
                    (*l_641) = p_16;
                }
                else
                {
                    const short l_752 = (-1L);
                    l_755 = (safe_lshift_func_int16_t_s_s((*l_657), ((((safe_lshift_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(l_745[0], (p_14 ^ ((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((g_188[2][1][3] >= (&g_185 == &g_185)), ((safe_lshift_func_int16_t_s_u(l_752, 13)) < p_15))), p_16)) >= g_45)))), l_753)) < 4294967295UL), l_754)) & l_719) != l_730) & 0x045835B1L)));
                }
            }
            else
            {
                unsigned short l_758 = 0x5353L;
                int *l_771 = &l_755;
                l_772 = l_771;
                (*l_772) = (((p_16 != (*l_657)) < (safe_mul_func_int16_t_s_s((((*g_239) = (((void*)0 == (**g_549)) != (l_661 = ((((safe_lshift_func_uint16_t_u_s(((1UL && ((**g_179) = l_777[2])) < (safe_lshift_func_int8_t_s_u(p_14, 7))), (*l_771))) != ((void*)0 != l_780)) > p_15) != p_14)))) == (*l_772)), 0x1FEBL))) < p_14);
                (*l_642) = (void*)0;
            }
            for (g_324 = 0; (g_324 <= 1); g_324 += 1)
            {
                unsigned short l_792[6][1] = {{5UL}, {5UL}, {5UL}, {5UL}, {5UL}, {5UL}};
                int l_799[5] = {0x45DD1449L, 0x3AA92B4DL, 0x45DD1449L, 0x3AA92B4DL, 0x45DD1449L};
                unsigned char *l_806[5][8] = {{&g_324, (void*)0, &l_777[2], &l_787[4], &l_787[4], (void*)0, &l_787[4], &l_787[4]}, {&g_324, (void*)0, &l_777[2], &l_787[4], &l_787[4], (void*)0, &l_787[4], &l_787[4]}, {&g_324, (void*)0, &l_777[2], &l_787[4], &l_787[4], (void*)0, &l_787[4], &l_787[4]}, {&g_324, (void*)0, &l_777[2], &l_787[4], &l_787[4], (void*)0, &l_787[4], &l_787[4]}, {&g_324, (void*)0, &l_777[2], &l_787[4], &l_787[4], (void*)0, &l_787[4], &l_787[4]}};
                int l_824[8][6][5] = {{{(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}}, {{(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}}, {{(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}}, {{(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}}, {{(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}}, {{(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}}, {{(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}}, {{(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}, {(-1L), 3L, 0x83E13982L, 0xC1A38198L, 0xAC72CC41L}}};
                unsigned *l_851 = &g_232[0];
                unsigned ** const l_850[9] = {&l_851, &l_851, &l_851, &l_851, &l_851, &l_851, &l_851, &l_851, &l_851};
                int i, j, k;
                if (p_15)
                    break;
                if ((((void*)0 == l_772) < (0x5461L > (l_783 = (safe_lshift_func_uint16_t_u_u(5UL, ((**g_179) = p_16)))))))
                {
                    short *l_784[1][9][2] = {{{(void*)0, &g_63[1]}, {(void*)0, &g_63[1]}, {(void*)0, &g_63[1]}, {(void*)0, &g_63[1]}, {(void*)0, &g_63[1]}, {(void*)0, &g_63[1]}, {(void*)0, &g_63[1]}, {(void*)0, &g_63[1]}, {(void*)0, &g_63[1]}}};
                    int l_798 = 0xACFE029DL;
                    int i, j, k;
                    if (((p_16 > (func_28(l_784[0][3][1], p_15) > (safe_sub_func_uint32_t_u_u(p_14, ((l_787[4] = p_14) || ((void*)0 == &g_435)))))) & (l_788[0] == (void*)0)))
                    {
                        (*l_657) = ((safe_mod_func_int32_t_s_s((*l_641), l_791)) || g_188[2][1][3]);
                    }
                    else
                    {
                        (*l_641) = (l_792[4][0] == p_16);
                        (*l_642) = func_42(((0xE908L == func_28(l_640[3][0], (*g_239))) < (safe_add_func_int32_t_s_s(g_189, (safe_add_func_uint16_t_u_u(l_797, (l_798 <= ((l_799[1] = (p_14 == (-4L))) || (***g_549)))))))));
                    }
                    return l_798;
                }
                else
                {
                    (*l_657) = (-1L);
                    g_260 = &p_15;
                }
                if (((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((func_28(l_804, (((((*l_657) = ((*l_641) = p_16)) ^ l_792[4][0]) ^ p_14) & l_805)) || p_16), (g_385 = ((l_783 = ((((void*)0 != &g_324) & p_14) < p_15)) == g_284)))), p_14)) >= 0L))
                {
                    int * const l_807 = &g_41[1][6][6];
                    int **l_808 = &l_657;
                    (*l_808) = l_807;
                    if (p_14)
                        continue;
                }
                else
                {
                    unsigned char *l_831 = &l_787[4];
                    int i;
                    (*l_657) = ((*l_641) = (safe_sub_func_uint16_t_u_u((p_14 ^ l_792[3][0]), (p_14 > p_15))));
                    for (l_754 = 0; (l_754 < 4); l_754 = safe_add_func_uint16_t_u_u(l_754, 2))
                    {
                        unsigned l_832 = 4294967289UL;
                        (*l_669) = &p_15;
                        (*l_641) = ((((*g_828) = (&p_14 != g_828)) | (l_745[g_324] < (l_832 || ((*l_657) = (-1L))))) > (*g_180));
                        if ((*g_260))
                            continue;
                        if (l_745[g_324])
                            continue;
                    }
                }
                for (g_45 = 0; (g_45 <= 9); g_45 += 1)
                {
                    int l_839 = 4L;
                    int *l_842 = &l_839;
                    short *l_848 = &g_63[1];
                    int i, j;
                    if ((p_16 == (safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((l_839 | (((void*)0 != l_840[8]) < p_14)) == (7UL < (0x7B46L == (*g_180)))), 0)), 6)), 65531UL))))
                    {
                        l_842 = (*l_642);
                        (*l_642) = &g_41[1][2][0];
                    }
                    else
                    {
                        unsigned char l_849 = 0UL;
                        unsigned **l_853 = &l_851;
                        unsigned ***l_852 = &l_853;
                        (*l_842) = l_792[4][0];
                        (*l_669) = (void*)0;
                        (*l_852) = l_850[8];
                    }
                    l_842 = &g_41[1][3][3];
                }
            }
            for (l_783 = 5; (l_783 >= 1); l_783 -= 1)
            {
                int i;
                l_854 = &g_436;
                if (l_777[l_783])
                    continue;
                (*l_669) = &p_15;
                for (p_16 = 0; (p_16 == (-19)); --p_16)
                {
                    unsigned ****l_858 = (void*)0;
                    unsigned ****l_859 = &g_857;
                    short ***l_863 = &g_111;
                    if ((((*l_859) = g_857) != (void*)0))
                    {
                        int *l_860 = (void*)0;
                        (*l_669) = ((*l_642) = l_860);
                    }
                    else
                    {
                        short l_861 = (-1L);
                        int *l_862 = &g_41[0][2][1];
                        (*l_657) = (0xF5L > (*g_828));
                        (*l_657) = l_861;
                        (*l_669) = &g_352;
                        (*l_642) = l_862;
                    }
                    (*l_669) = (*l_642);
                    (*l_863) = &l_640[1][0];
                }
            }
            if (p_14)
            {
                int **l_866 = (void*)0;
                int ***l_867[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_867[i] = &l_866;
                (*l_642) = func_42((*l_657));
                (*l_642) = (*l_642);
                (*l_657) = (safe_mod_func_int32_t_s_s(0x2F415FE7L, p_15));
                g_868 = l_866;
            }
            else
            {
                unsigned char l_875 = 7UL;
                int **l_877 = &l_772;
                const int l_878 = (-1L);
                (*l_657) = l_869;
                for (l_755 = 0; (l_755 == (-23)); l_755 = safe_sub_func_int16_t_s_s(l_755, 9))
                {
                    int l_872 = 0x22EC508FL;
                    int **l_876 = (void*)0;
                    (*l_641) = l_872;
                    if (((safe_rshift_func_uint8_t_u_s(g_385, 5)) != (l_875 < (l_876 == (l_642 = l_877)))))
                    {
                        const int ***l_879 = &l_669;
                        if (l_878)
                            break;
                        (*l_879) = l_669;
                    }
                    else
                    {
                        char l_880 = 1L;
                        (*l_657) = l_880;
                    }
                    (*g_868) = func_42((safe_rshift_func_uint16_t_u_s((**g_179), 12)));
                    (*g_868) = ((*l_642) = func_34(&g_240, l_804));
                }
                (*l_641) = ((0UL < ((p_14 | p_15) & p_16)) == p_14);
            }
        }
        return p_14;
    }
    else
    {
        short **l_883 = &l_640[1][0];
        short **l_884[4];
        short ** const *l_887 = (void*)0;
        short ** const **l_886 = &l_887;
        short * const ***l_890 = &l_888[4];
        int i;
        for (i = 0; i < 4; i++)
            l_884[i] = &g_112;
        (*g_107) = p_14;
        (*g_868) = func_34(&g_240, (l_885 = ((*l_883) = l_640[2][0])));
        (*l_641) = p_15;
        (*l_657) = (((*l_886) = (*g_413)) != ((*l_890) = l_888[3]));
    }
    for (g_45 = 0; (g_45 >= 0); g_45 -= 1)
    {
        int i;
        return l_777[(g_45 + 1)];
    }
    for (g_189 = (-30); (g_189 == 55); ++g_189)
    {
        unsigned char l_893 = 0xD9L;
        int *l_895 = (void*)0;
        int l_896[1];
        short *l_905 = &g_63[1];
        int i;
        for (i = 0; i < 1; i++)
            l_896[i] = 0x9D093518L;
        l_894 = l_893;
        if ((((*l_657) > l_893) != (((*l_642) = l_895) != &p_15)))
        {
            l_896[0] = (*l_657);
        }
        else
        {
            int *l_897 = &l_896[0];
            const int **l_898 = &g_260;
            unsigned char *l_906 = &l_893;
            (*l_642) = l_897;
            (*l_898) = &p_15;
            (*l_641) = (p_16 & (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(((*l_906) = ((**l_898) && (g_326[0][4][0] = ((func_28(l_905, p_15) != ((*l_905) = p_14)) == p_14)))), ((*l_897) >= (6UL >= (*l_641))))), 14)), p_16)));
        }
    }
    return (*l_657);
}







static int func_19(short p_20, int p_21, char p_22, int p_23)
{
    char l_498 = 0x0AL;
    int *l_503 = &g_352;
    int *l_504 = &g_41[0][6][7];
    int **l_505 = (void*)0;
    unsigned l_509 = 0x1C0F79A4L;
    char l_510 = 0x37L;
    unsigned char l_521 = 0x54L;
    short *l_539[10][7] = {{&g_63[3], &g_27[5], &g_63[1], &g_63[1], &g_63[1], &g_63[3], &g_63[1]}, {&g_63[3], &g_27[5], &g_63[1], &g_63[1], &g_63[1], &g_63[3], &g_63[1]}, {&g_63[3], &g_27[5], &g_63[1], &g_63[1], &g_63[1], &g_63[3], &g_63[1]}, {&g_63[3], &g_27[5], &g_63[1], &g_63[1], &g_63[1], &g_63[3], &g_63[1]}, {&g_63[3], &g_27[5], &g_63[1], &g_63[1], &g_63[1], &g_63[3], &g_63[1]}, {&g_63[3], &g_27[5], &g_63[1], &g_63[1], &g_63[1], &g_63[3], &g_63[1]}, {&g_63[3], &g_27[5], &g_63[1], &g_63[1], &g_63[1], &g_63[3], &g_63[1]}, {&g_63[3], &g_27[5], &g_63[1], &g_63[1], &g_63[1], &g_63[3], &g_63[1]}, {&g_63[3], &g_27[5], &g_63[1], &g_63[1], &g_63[1], &g_63[3], &g_63[1]}, {&g_63[3], &g_27[5], &g_63[1], &g_63[1], &g_63[1], &g_63[3], &g_63[1]}};
    int *l_566 = &g_41[2][1][4];
    short **l_572 = &l_539[6][4];
    short *l_584 = &g_27[5];
    unsigned short l_597[10][7] = {{0x0634L, 65535UL, 1UL, 65529UL, 65535UL, 65535UL, 0xEBE7L}, {0x0634L, 65535UL, 1UL, 65529UL, 65535UL, 65535UL, 0xEBE7L}, {0x0634L, 65535UL, 1UL, 65529UL, 65535UL, 65535UL, 0xEBE7L}, {0x0634L, 65535UL, 1UL, 65529UL, 65535UL, 65535UL, 0xEBE7L}, {0x0634L, 65535UL, 1UL, 65529UL, 65535UL, 65535UL, 0xEBE7L}, {0x0634L, 65535UL, 1UL, 65529UL, 65535UL, 65535UL, 0xEBE7L}, {0x0634L, 65535UL, 1UL, 65529UL, 65535UL, 65535UL, 0xEBE7L}, {0x0634L, 65535UL, 1UL, 65529UL, 65535UL, 65535UL, 0xEBE7L}, {0x0634L, 65535UL, 1UL, 65529UL, 65535UL, 65535UL, 0xEBE7L}, {0x0634L, 65535UL, 1UL, 65529UL, 65535UL, 65535UL, 0xEBE7L}};
    unsigned short ** const *l_625 = &g_550;
    unsigned short ** const **l_626 = &l_625;
    unsigned l_631 = 0UL;
    unsigned *l_632 = &g_99;
    short l_633 = 0x466DL;
    int i, j;
    if ((safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((p_20 ^ (l_498 ^ p_22)) < l_498), ((((~l_498) <= func_28(((*g_111) = (*g_111)), ((!(safe_mul_func_uint32_t_u_u(l_510, 0L))) > 0xFB8C91F4L))) >= (*l_503)) | 0x52118186L))), 0x1585EEB9L)), p_22)))
    {
        int l_513 = 0L;
        short **l_538 = (void*)0;
        int *l_548 = &g_41[1][3][3];
        unsigned short * const **l_555[9][10] = {{&g_553[0], &g_553[0], &g_553[0], &g_553[1], (void*)0, &g_553[0], &g_553[0], &g_553[7], &g_553[0], &g_553[0]}, {&g_553[0], &g_553[0], &g_553[0], &g_553[1], (void*)0, &g_553[0], &g_553[0], &g_553[7], &g_553[0], &g_553[0]}, {&g_553[0], &g_553[0], &g_553[0], &g_553[1], (void*)0, &g_553[0], &g_553[0], &g_553[7], &g_553[0], &g_553[0]}, {&g_553[0], &g_553[0], &g_553[0], &g_553[1], (void*)0, &g_553[0], &g_553[0], &g_553[7], &g_553[0], &g_553[0]}, {&g_553[0], &g_553[0], &g_553[0], &g_553[1], (void*)0, &g_553[0], &g_553[0], &g_553[7], &g_553[0], &g_553[0]}, {&g_553[0], &g_553[0], &g_553[0], &g_553[1], (void*)0, &g_553[0], &g_553[0], &g_553[7], &g_553[0], &g_553[0]}, {&g_553[0], &g_553[0], &g_553[0], &g_553[1], (void*)0, &g_553[0], &g_553[0], &g_553[7], &g_553[0], &g_553[0]}, {&g_553[0], &g_553[0], &g_553[0], &g_553[1], (void*)0, &g_553[0], &g_553[0], &g_553[7], &g_553[0], &g_553[0]}, {&g_553[0], &g_553[0], &g_553[0], &g_553[1], (void*)0, &g_553[0], &g_553[0], &g_553[7], &g_553[0], &g_553[0]}};
        int l_564[5] = {0x61B875F6L, 0x3E226CC5L, 0x61B875F6L, 0x3E226CC5L, 0x61B875F6L};
        int **l_567[8][8][4] = {{{&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}}, {{&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}}, {{&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}}, {{&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}}, {{&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}}, {{&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}}, {{&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}}, {{&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}, {&l_548, &l_566, &l_548, &l_548}}};
        int i, j, k;
        for (p_22 = 28; (p_22 > (-20)); p_22--)
        {
            int *l_517 = &g_352;
            int ***l_520 = (void*)0;
            int **l_547[3];
            unsigned short ****l_551 = &g_549;
            unsigned short * const ***l_554[3];
            unsigned short l_560 = 0x2EBBL;
            int i;
            for (i = 0; i < 3; i++)
                l_547[i] = &l_517;
            for (i = 0; i < 3; i++)
                l_554[i] = &g_552[0];
            if (l_513)
            {
                short l_532 = 0L;
                for (g_385 = (-22); (g_385 <= 51); ++g_385)
                {
                    int **l_516[5][1];
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_516[i][j] = &l_503;
                    }
                    l_517 = &p_23;
                    for (g_33 = 0; (g_33 == (-29)); --g_33)
                    {
                        (*l_517) = ((*l_503) = (((**g_179) = (((&l_505 != l_520) != l_513) > ((l_521 >= (safe_mod_func_int8_t_s_s(p_22, (safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(1L, (-6L))), 7)), 0x65L))))) || (safe_rshift_func_uint8_t_u_u((p_22 < 251UL), 7))))) < l_532));
                    }
                }
            }
            else
            {
                short **l_537[2];
                int l_546 = 0x59D4314FL;
                int i;
                for (i = 0; i < 2; i++)
                    l_537[i] = (void*)0;
                for (l_521 = 0; (l_521 < 18); ++l_521)
                {
                    short *l_535 = &g_63[1];
                    int l_536 = 0x2D2DCEEBL;
                    (*l_503) = func_28(((*g_111) = (void*)0), (func_28(l_535, (l_536 ^ ((&l_535 != (l_538 = l_537[1])) && (func_28(l_539[7][3], p_20) != (0x12B23C13L != 0x92339258L))))) == (*l_503)));
                    (*l_504) = (safe_sub_func_int8_t_s_s((p_22 & (safe_add_func_uint16_t_u_u(l_513, 65535UL))), (func_28(l_539[7][5], (l_539[7][3] != (void*)0)) >= l_513)));
                    return (*l_517);
                }
                for (g_189 = (-19); (g_189 >= 6); ++g_189)
                {
                    if (p_21)
                        break;
                    g_107 = &p_23;
                }
                p_23 = l_546;
                g_260 = (void*)0;
            }
            l_548 = &g_352;
            if (((((*l_551) = g_549) != (l_555[7][8] = g_552[0])) || 0xCAA8L))
            {
                unsigned l_563 = 0xEE6F3DB7L;
                l_564[1] = (((*l_503) = (g_33 >= (safe_add_func_int16_t_s_s(p_21, (safe_mod_func_uint8_t_u_u((((((l_555[7][8] == (*l_551)) != (*l_548)) < l_563) >= (*l_504)) ^ p_21), p_20)))))) >= 0x0EF9F41CL);
            }
            else
            {
                int *l_565 = &g_352;
                l_565 = (void*)0;
            }
        }
        l_566 = l_566;
    }
    else
    {
        short l_570[4][5] = {{7L, 0x7B42L, 7L, 0x7B42L, 7L}, {7L, 0x7B42L, 7L, 0x7B42L, 7L}, {7L, 0x7B42L, 7L, 0x7B42L, 7L}, {7L, 0x7B42L, 7L, 0x7B42L, 7L}};
        short ***l_571 = &g_111;
        int **l_573 = &l_566;
        int i, j;
        (*l_566) = ((g_324 <= (safe_sub_func_int32_t_s_s(p_20, (l_570[1][1] || ((((void*)0 == &l_503) || l_570[3][0]) ^ p_20))))) > (-2L));
        if (((((((*l_571) = &l_539[9][5]) != (l_572 = (void*)0)) | (+l_570[3][0])) > (l_573 == &l_566)) != ((func_28(l_539[6][6], ((**l_573) = ((g_351 <= p_21) <= (**g_550)))) & 255UL) != p_22)))
        {
            short *l_576[9] = {&l_570[1][2], &l_570[1][2], &l_570[3][0], &l_570[1][2], &l_570[1][2], &l_570[3][0], &l_570[1][2], &l_570[1][2], &l_570[3][0]};
            int l_585 = 0xD0EB0569L;
            unsigned *l_592 = (void*)0;
            unsigned *l_593 = &g_326[0][4][0];
            unsigned *l_594 = &g_99;
            char *l_618[5][9] = {{&l_510, &g_240, &g_33, &g_33, &g_240, &l_510, &g_240, &g_33, &g_33}, {&l_510, &g_240, &g_33, &g_33, &g_240, &l_510, &g_240, &g_33, &g_33}, {&l_510, &g_240, &g_33, &g_33, &g_240, &l_510, &g_240, &g_33, &g_33}, {&l_510, &g_240, &g_33, &g_33, &g_240, &l_510, &g_240, &g_33, &g_33}, {&l_510, &g_240, &g_33, &g_33, &g_240, &l_510, &g_240, &g_33, &g_33}};
            int i, j;
            for (g_240 = (-1); (g_240 < 25); g_240++)
            {
                short l_577 = 0xDA20L;
                (*l_503) = (func_28(l_576[3], ((**l_573) <= l_577)) >= 3UL);
                (*l_503) = p_20;
                (*l_503) = func_28(l_576[3], (**l_573));
            }
            (*l_566) = (safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((**g_550) = ((safe_rshift_func_int16_t_s_u((func_28(l_584, l_585) && ((*g_239) = (safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s(0x4CL, (safe_lshift_func_int16_t_s_u((((*l_594) = ((l_585 = ((*l_593) = g_41[2][5][5])) < p_20)) != ((*l_503) = (p_21 <= (**l_573)))), 4)))), g_188[2][1][3])))), 14)) && (*g_239))), 1UL)), 0xC4L));
            for (g_193 = 3; (g_193 >= 0); g_193 -= 1)
            {
                (*l_504) = (l_597[4][0] <= ((void*)0 == &l_571));
            }
        }
        else
        {
            (*l_573) = &p_23;
        }
        (*l_573) = &p_23;
    }
    (*l_566) = (safe_sub_func_uint8_t_u_u((0x3CL | ((((((*l_626) = l_625) == &g_553[5]) >= (+(safe_lshift_func_int8_t_s_s(((*l_566) >= (+((*l_503) = (-6L)))), 7)))) < ((*l_632) = (g_284 ^ (safe_lshift_func_uint16_t_u_u((g_385 == ((((*l_566) >= 65535UL) ^ (*l_566)) & l_631)), (*l_504)))))) | l_633)), (*g_239)));
    return p_22;
}







static int func_28(short * p_29, char p_30)
{
    char *l_37 = &g_33;
    int **l_484 = &g_107;
    (*l_484) = func_34(l_37, p_29);
    g_107 = (*l_484);
    return p_30;
}







static int * func_34(char * p_35, short * p_36)
{
    short l_38 = 0x2D34L;
    int *l_39 = (void*)0;
    int *l_40 = &g_41[1][3][3];
    int **l_451 = &l_39;
    int *l_452 = &g_41[1][1][4];
    int *l_483[10][5][1] = {{{&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}}, {{&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}}, {{&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}}, {{&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}}, {{&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}}, {{&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}}, {{&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}}, {{&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}}, {{&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}}, {{&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}, {&g_41[1][3][3]}}};
    int i, j, k;
    (*l_40) = l_38;
    (*l_451) = func_42((*p_35));
    (*l_451) = (*l_451);
    if (((+(!3UL)) != (0UL == (*p_35))))
    {
        return l_452;
    }
    else
    {
        unsigned l_453 = 0x11866612L;
        int **l_480 = &g_107;
        for (l_38 = 2; (l_38 >= 0); l_38 -= 1)
        {
            int ***l_457 = &l_451;
            if (l_453)
                break;
            for (l_453 = 0; (l_453 <= 2); l_453 += 1)
            {
                char ***l_454 = (void*)0;
                char **l_456 = &g_239;
                char ***l_455 = &l_456;
                const int l_469[4][9] = {{5L, 4L, 5L, 4L, 5L, 4L, 5L, 4L, 5L}, {5L, 4L, 5L, 4L, 5L, 4L, 5L, 4L, 5L}, {5L, 4L, 5L, 4L, 5L, 4L, 5L, 4L, 5L}, {5L, 4L, 5L, 4L, 5L, 4L, 5L, 4L, 5L}};
                int l_479 = 0xBD38C1FDL;
                int i, j;
                (*l_455) = &g_239;
                for (g_33 = 0; (g_33 <= 2); g_33 += 1)
                {
                    int ***l_462 = (void*)0;
                    unsigned l_468 = 0x704055A1L;
                    int i, j, k;
                }
            }
        }
        (*l_452) = ((*l_451) == ((*l_480) = &g_41[1][3][3]));
        for (g_351 = (-19); (g_351 > 50); g_351++)
        {
            (*l_451) = (void*)0;
        }
    }
    return l_483[8][4][0];
}







static int * func_42(char p_43)
{
    short *l_46 = &g_45;
    int l_77 = 0x406462EFL;
    int l_449 = (-1L);
    int **l_450[5];
    int i;
    for (i = 0; i < 5; i++)
        l_450[i] = &g_107;
    for (g_33 = 2; (g_33 >= 0); g_33 -= 1)
    {
        short *l_44 = &g_45;
        int l_47[9][3][1] = {{{0x094191B8L}, {0x094191B8L}, {0x094191B8L}}, {{0x094191B8L}, {0x094191B8L}, {0x094191B8L}}, {{0x094191B8L}, {0x094191B8L}, {0x094191B8L}}, {{0x094191B8L}, {0x094191B8L}, {0x094191B8L}}, {{0x094191B8L}, {0x094191B8L}, {0x094191B8L}}, {{0x094191B8L}, {0x094191B8L}, {0x094191B8L}}, {{0x094191B8L}, {0x094191B8L}, {0x094191B8L}}, {{0x094191B8L}, {0x094191B8L}, {0x094191B8L}}, {{0x094191B8L}, {0x094191B8L}, {0x094191B8L}}};
        int l_415 = 0x291AFECFL;
        int i, j, k;
        l_47[7][1][0] = (~(l_44 != l_46));
        for (p_43 = 0; (p_43 <= 2); p_43 += 1)
        {
            unsigned short *l_60 = &g_61;
            short *l_62 = &g_63[1];
            short *l_64 = &g_65;
            int l_76 = 0xA474477DL;
            int **l_397 = &g_107;
            unsigned *l_398 = &g_232[0];
            unsigned char l_411 = 1UL;
            short * const *l_444 = &l_62;
        }
    }
    g_260 = &l_77;
    return &g_41[0][0][6];
}







static int * const func_48(unsigned p_49, unsigned p_50, short p_51, int * p_52)
{
    int **l_145 = &g_107;
    int ***l_144 = &l_145;
    int l_164 = 9L;
    short ***l_171 = &g_111;
    int *l_194[9];
    int l_233[7][3][10] = {{{0x5A8C6FE1L, 0xA9396CDAL, 0x0F596ABBL, 0xD0AB515CL, 0xA6FBB883L, 0x55769E90L, 0x6E565939L, 0x9A793064L, 0L, 1L}, {0x5A8C6FE1L, 0xA9396CDAL, 0x0F596ABBL, 0xD0AB515CL, 0xA6FBB883L, 0x55769E90L, 0x6E565939L, 0x9A793064L, 0L, 1L}, {0x5A8C6FE1L, 0xA9396CDAL, 0x0F596ABBL, 0xD0AB515CL, 0xA6FBB883L, 0x55769E90L, 0x6E565939L, 0x9A793064L, 0L, 1L}}, {{0x5A8C6FE1L, 0xA9396CDAL, 0x0F596ABBL, 0xD0AB515CL, 0xA6FBB883L, 0x55769E90L, 0x6E565939L, 0x9A793064L, 0L, 1L}, {0x5A8C6FE1L, 0xA9396CDAL, 0x0F596ABBL, 0xD0AB515CL, 0xA6FBB883L, 0x55769E90L, 0x6E565939L, 0x9A793064L, 0L, 1L}, {0x5A8C6FE1L, 0xA9396CDAL, 0x0F596ABBL, 0xD0AB515CL, 0xA6FBB883L, 0x55769E90L, 0x6E565939L, 0x9A793064L, 0L, 1L}}, {{0x5A8C6FE1L, 0xA9396CDAL, 0x0F596ABBL, 0xD0AB515CL, 0xA6FBB883L, 0x55769E90L, 0x6E565939L, 0x9A793064L, 0L, 1L}, {0x5A8C6FE1L, 0xA9396CDAL, 0x0F596ABBL, 0xD0AB515CL, 0xA6FBB883L, 0x55769E90L, 0x6E565939L, 0x9A793064L, 0L, 1L}, {0x5A8C6FE1L, 0xA9396CDAL, 0x0F596ABBL, 0xD0AB515CL, 0xA6FBB883L, 0x55769E90L, 0x6E565939L, 0x9A793064L, 0L, 1L}}, {{0x5A8C6FE1L, 0xA9396CDAL, 0x0F596ABBL, 0xD0AB515CL, 0xA6FBB883L, 0x55769E90L, 0x6E565939L, 0x9A793064L, 0L, 1L}, {0x5A8C6FE1L, 0xA9396CDAL, 0x0F596ABBL, 0xD0AB515CL, 0xA6FBB883L, 0x55769E90L, 0x6E565939L, 0x9A793064L, 0L, 1L}, {0x5A8C6FE1L, 0xA9396CDAL, 0x0F596ABBL, 0xD0AB515CL, 0xA6FBB883L, 0x55769E90L, 0x6E565939L, 0x9A793064L, 0L, 1L}}, {{0x5A8C6FE1L, 0xA9396CDAL, 0x0F596ABBL, 0xD0AB515CL, 0xA6FBB883L, 0x55769E90L, 0x6E565939L, 0x9A793064L, 0L, 1L}, {0x5A8C6FE1L, 0xA9396CDAL, 0x0F596ABBL, 0xD0AB515CL, 0xA6FBB883L, 0x55769E90L, 0x6E565939L, 0x9A793064L, 0L, 1L}, {0x5A8C6FE1L, 0xA9396CDAL, 0x0F596ABBL, 0xD0AB515CL, 0xA6FBB883L, 0x55769E90L, 0x6E565939L, 0x9A793064L, 0L, 1L}}, {{0x5A8C6FE1L, 0xA9396CDAL, 0x0F596ABBL, 0xD0AB515CL, 0xA6FBB883L, 0x55769E90L, 0x6E565939L, 0x9A793064L, 0L, 1L}, {0x5A8C6FE1L, 0xA9396CDAL, 0x0F596ABBL, 0xD0AB515CL, 0xA6FBB883L, 0x55769E90L, 0x6E565939L, 0x9A793064L, 0L, 1L}, {0x5A8C6FE1L, 0xA9396CDAL, 0x0F596ABBL, 0xD0AB515CL, 0xA6FBB883L, 0x55769E90L, 0x6E565939L, 0x9A793064L, 0L, 1L}}, {{0x5A8C6FE1L, 0xA9396CDAL, 0x0F596ABBL, 0xD0AB515CL, 0xA6FBB883L, 0x55769E90L, 0x6E565939L, 0x9A793064L, 0L, 1L}, {0x5A8C6FE1L, 0xA9396CDAL, 0x0F596ABBL, 0xD0AB515CL, 0xA6FBB883L, 0x55769E90L, 0x6E565939L, 0x9A793064L, 0L, 1L}, {0x5A8C6FE1L, 0xA9396CDAL, 0x0F596ABBL, 0xD0AB515CL, 0xA6FBB883L, 0x55769E90L, 0x6E565939L, 0x9A793064L, 0L, 1L}}};
    char *l_238 = &g_33;
    int *l_269 = &g_41[0][1][6];
    unsigned short **l_277[1];
    int * const l_396 = (void*)0;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_194[i] = &g_41[0][6][4];
    for (i = 0; i < 1; i++)
        l_277[i] = &g_180;
    if ((*g_107))
    {
        p_52 = (void*)0;
    }
    else
    {
        short l_146 = 0x7C82L;
        short *l_149 = (void*)0;
        unsigned char l_150[1][1];
        unsigned short *l_152 = &g_61;
        unsigned short **l_151 = &l_152;
        short *l_153 = &g_45;
        char l_166 = 0x0EL;
        short ****l_172[5][8][4] = {{{(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}}, {{(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}}, {{(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}}, {{(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}}, {{(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}, {(void*)0, &l_171, &l_171, &l_171}}};
        int l_173 = 4L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_150[i][j] = 0xEDL;
        }
        (*p_52) = (!((**l_145) = ((safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((l_144 != (void*)0), g_99)), 11)) <= (((l_146 & (l_150[0][0] = (safe_rshift_func_int16_t_s_s((g_63[3] = p_51), 12)))) != ((*l_153) = (((*l_151) = l_149) != &g_61))) || 6L))));
        (**l_145) = ((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((*l_153) = (safe_mul_func_uint16_t_u_u(g_41[1][3][3], ((((void*)0 == (*l_144)) == (**l_145)) && (safe_rshift_func_uint8_t_u_u((g_33 & ((+(safe_sub_func_int16_t_s_s(l_164, (g_61 = (safe_unary_minus_func_int16_t_s((-6L))))))) > l_166)), 1)))))), g_65)), 12)) != l_150[0][0]);
        (*p_52) = func_53((safe_rshift_func_int8_t_s_u((p_49 || (**l_145)), 3)), ((safe_rshift_func_int16_t_s_s((l_173 = ((l_171 = l_171) != (void*)0)), 15)) == g_41[1][3][3]));
        for (p_49 = 0; (p_49 <= 0); p_49 += 1)
        {
            unsigned char l_177 = 0xD4L;
            int l_178 = 0xFC326A3CL;
            int *l_190[5][9][3] = {{{(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}}, {{(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}}, {{(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}}, {{(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}}, {{(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}, {(void*)0, (void*)0, &g_41[1][3][3]}}};
            int i, j, k;
            for (g_99 = 0; (g_99 <= 0); g_99 += 1)
            {
                int l_176 = 0x163CAD6CL;
                (**l_144) = p_52;
                (**l_145) = ((g_41[1][3][3] > 0x78E06A8BL) >= ((((((65535UL | (((p_51 >= (safe_mul_func_uint16_t_u_u(g_63[1], l_176))) == l_177) || (0xFAC0L ^ (l_178 = (***l_144))))) != p_49) && 0x18E1L) >= g_45) == g_63[1]) ^ 0L));
                if (l_146)
                    continue;
                return p_52;
            }
            for (l_146 = 0; (l_146 >= 0); l_146 -= 1)
            {
                unsigned short ***l_181 = &l_151;
                int l_184 = 0x7E9A979AL;
                (**l_144) = p_52;
                (*l_181) = g_179;
                l_173 = func_53((**l_145), (safe_sub_func_int8_t_s_s(0x70L, 0x29L)));
                (***l_144) = (l_184 & (*g_180));
            }
            g_189 = (g_188[2][1][3] = ((*g_107) = ((g_185 != &l_145) >= (0xF4L || (safe_mul_func_int16_t_s_s(l_166, (***l_144)))))));
            for (g_65 = 0; (g_65 <= 0); g_65 += 1)
            {
                int **l_192 = &l_190[0][0][1];
                for (l_146 = 0; (l_146 >= 0); l_146 -= 1)
                {
                    unsigned char l_191 = 1UL;
                    l_190[2][3][2] = p_52;
                    l_191 = 0xA35CC15AL;
                    for (l_178 = 0; (l_178 >= 0); l_178 -= 1)
                    {
                        if ((*p_52))
                            break;
                        (*g_107) = (*p_52);
                    }
                }
                (*l_192) = ((**l_144) = p_52);
                (**l_144) = (*l_145);
            }
        }
    }
    g_41[0][5][1] = ((((**l_144) = (**l_144)) == (void*)0) | (g_41[0][0][3] > (g_193 = p_50)));
    for (p_49 = 0; (p_49 <= 2); p_49 += 1)
    {
        unsigned short l_202 = 0x1EB3L;
        int l_208 = 0x0017F839L;
        int l_225 = (-10L);
        int l_228 = 0x9FC67894L;
        int **l_235[1];
        char l_285 = (-1L);
        int *l_395 = &l_233[4][0][0];
        int i;
        for (i = 0; i < 1; i++)
            l_235[i] = &g_107;
        for (g_189 = 0; (g_189 <= 2); g_189 += 1)
        {
            unsigned l_207 = 1UL;
            unsigned short *l_220 = (void*)0;
            for (l_164 = 2; (l_164 >= 0); l_164 -= 1)
            {
                unsigned *l_212 = &g_99;
                unsigned **l_211 = &l_212;
                int l_226 = 8L;
            }
            (**l_144) = (void*)0;
            if (l_225)
                break;
            if (p_50)
                break;
        }
    }
    return l_396;
}







static unsigned func_53(short p_54, unsigned p_55)
{
    unsigned l_80 = 0x8FCD1970L;
    int *l_85 = &g_41[1][4][4];
    short *l_89 = &g_63[4];
    short ** const l_88 = &l_89;
    if ((safe_lshift_func_int8_t_s_u(p_55, (((g_41[1][3][5] == ((p_55 == (((p_55 || g_63[1]) >= ((p_55 && g_33) <= p_54)) ^ l_80)) && p_54)) == p_54) != g_63[6]))))
    {
        int *l_96 = &g_41[1][3][3];
        for (l_80 = 8; (l_80 != 19); ++l_80)
        {
            int **l_87 = &l_85;
            short **l_91 = (void*)0;
            short ***l_90 = &l_91;
            for (g_65 = (-19); (g_65 >= (-4)); ++g_65)
            {
                int *l_86 = (void*)0;
                l_86 = l_85;
            }
            (*l_87) = &g_41[1][3][3];
            (*l_90) = l_88;
        }
        for (p_55 = (-4); (p_55 >= 41); p_55 = safe_add_func_uint16_t_u_u(p_55, 3))
        {
            return (*l_85);
        }
        for (l_80 = 5; (l_80 == 20); ++l_80)
        {
            int l_97 = (-10L);
            unsigned *l_98 = &g_99;
            l_85 = l_96;
            l_85 = &g_41[1][1][2];
            if (g_65)
                break;
            if ((p_54 & ((*l_98) = l_97)))
            {
                int **l_102 = &l_85;
                (*l_85) = (safe_rshift_func_int16_t_s_u((*l_85), 7));
                (*l_102) = &g_41[2][4][5];
                if ((*l_85))
                    break;
            }
            else
            {
                int **l_105 = (void*)0;
                int **l_106 = &l_85;
                unsigned short l_108 = 0x7832L;
                for (p_54 = 0; (p_54 != (-9)); --p_54)
                {
                    return g_99;
                }
                (*l_106) = l_96;
                g_107 = &g_41[1][3][3];
                if (l_108)
                    continue;
            }
        }
    }
    else
    {
        int *l_115[8] = {&g_41[1][3][3], &g_41[1][3][3], (void*)0, &g_41[1][3][3], &g_41[1][3][3], (void*)0, &g_41[1][3][3], &g_41[1][3][3]};
        int ***l_137 = (void*)0;
        int **l_139 = &l_85;
        int ***l_138 = &l_139;
        int i;
        for (p_54 = (-22); (p_54 < 0); ++p_54)
        {
            short **l_113 = &g_112;
            short ***l_114 = &l_113;
            int *l_121[7][4] = {{&g_41[1][3][3], &g_41[1][3][3], &g_41[1][3][3], &g_41[1][3][3]}, {&g_41[1][3][3], &g_41[1][3][3], &g_41[1][3][3], &g_41[1][3][3]}, {&g_41[1][3][3], &g_41[1][3][3], &g_41[1][3][3], &g_41[1][3][3]}, {&g_41[1][3][3], &g_41[1][3][3], &g_41[1][3][3], &g_41[1][3][3]}, {&g_41[1][3][3], &g_41[1][3][3], &g_41[1][3][3], &g_41[1][3][3]}, {&g_41[1][3][3], &g_41[1][3][3], &g_41[1][3][3], &g_41[1][3][3]}, {&g_41[1][3][3], &g_41[1][3][3], &g_41[1][3][3], &g_41[1][3][3]}};
            int l_129[9][10][2] = {{{(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}}, {{(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}}, {{(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}}, {{(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}}, {{(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}}, {{(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}}, {{(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}}, {{(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}}, {{(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}, {(-1L), 0xE84C8BE4L}}};
            int i, j, k;
            if ((p_54 && (g_111 != ((*l_114) = l_113))))
            {
                int **l_116 = (void*)0;
                int **l_117 = &l_115[5];
                (*l_117) = l_115[4];
            }
            else
            {
                unsigned *l_130 = &l_80;
                for (g_61 = 0; (g_61 == 16); g_61++)
                {
                    short **l_122 = &l_89;
                    for (g_65 = 2; (g_65 <= 7); g_65 += 1)
                    {
                        int **l_120 = &l_115[3];
                        int i;
                        (*l_120) = l_115[g_65];
                        (*l_120) = l_115[g_65];
                        l_121[2][1] = ((*l_120) = (void*)0);
                        (*l_114) = l_122;
                    }
                    return g_33;
                }
                (*l_85) = ((*g_107) ^ (((*g_107) >= g_41[2][6][6]) | ((*l_130) = (safe_mul_func_uint8_t_u_u(0x06L, (((*g_107) != p_54) || ((0xF6L <= ((p_55 && ((((safe_sub_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((l_129[5][0][1] = ((g_99 <= 0x1E14FE22L) | (*l_85))), g_33)) >= 0x9E07L), g_33)) || (*l_85)) < p_55) < g_45)) & 65531UL)) > 0xADL)))))));
            }
            (*l_85) = (safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((*l_85), (*l_85))), 0xA3L));
            (*g_107) = (p_54 <= (safe_rshift_func_uint16_t_u_u((*l_85), 4)));
        }
        (*l_138) = &g_107;
        return (*l_85);
    }
    return p_55;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_27[i], "g_27[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_33, "g_33", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_41[i][j][k], "g_41[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_63[i], "g_63[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_188[i][j][k], "g_188[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_232[i], "g_232[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_324, "g_324", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_326[i][j][k], "g_326[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_351, "g_351", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_651[i][j][k], "g_651[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_674, "g_674", print_hash_value);
    transparent_crc(g_686, "g_686", print_hash_value);
    transparent_crc(g_913, "g_913", print_hash_value);
    transparent_crc(g_1124, "g_1124", print_hash_value);
    transparent_crc(g_1179, "g_1179", print_hash_value);
    transparent_crc(g_1246, "g_1246", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
