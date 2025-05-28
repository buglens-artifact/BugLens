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



static int g_3 = 0xB3C692BEL;
static char g_12 = 0x83L;
static unsigned g_13 = 4294967295UL;
static unsigned char g_43 = 0xD4L;
static unsigned char g_67 = 0x17L;
static unsigned char *g_66 = &g_67;
static short g_84[7] = {(-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L)};
static short g_88 = (-2L);
static int g_92[8] = {8L, 8L, 1L, 8L, 8L, 1L, 8L, 8L};
static int g_116[3][10][1] = {{{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}}};
static int g_119 = 1L;
static const unsigned char g_178 = 254UL;
static unsigned short g_179[7][6] = {{65533UL, 0xE1C2L, 65533UL, 0xB492L, 1UL, 1UL}, {65533UL, 0xE1C2L, 65533UL, 0xB492L, 1UL, 1UL}, {65533UL, 0xE1C2L, 65533UL, 0xB492L, 1UL, 1UL}, {65533UL, 0xE1C2L, 65533UL, 0xB492L, 1UL, 1UL}, {65533UL, 0xE1C2L, 65533UL, 0xB492L, 1UL, 1UL}, {65533UL, 0xE1C2L, 65533UL, 0xB492L, 1UL, 1UL}, {65533UL, 0xE1C2L, 65533UL, 0xB492L, 1UL, 1UL}};
static int *g_182 = &g_119;
static char g_267 = (-8L);
static int g_271 = 1L;
static unsigned char *g_274 = (void*)0;
static unsigned char *g_277 = (void*)0;
static unsigned char **g_281[1] = {&g_277};
static unsigned **g_343 = (void*)0;
static unsigned short g_405 = 0x1B8AL;
static short *g_428 = (void*)0;
static short **g_427 = &g_428;
static unsigned g_529 = 0x96AFEADEL;
static unsigned g_577 = 0xD4AD36CEL;
static unsigned char *g_591 = &g_67;
static unsigned char g_653 = 0xFEL;
static unsigned char g_684 = 6UL;
static int g_686[7][7] = {{(-4L), 0x4693074EL, 0x00433AF9L, 0x4693074EL, (-4L), 0x9D42EE00L, 0x120495EFL}, {(-4L), 0x4693074EL, 0x00433AF9L, 0x4693074EL, (-4L), 0x9D42EE00L, 0x120495EFL}, {(-4L), 0x4693074EL, 0x00433AF9L, 0x4693074EL, (-4L), 0x9D42EE00L, 0x120495EFL}, {(-4L), 0x4693074EL, 0x00433AF9L, 0x4693074EL, (-4L), 0x9D42EE00L, 0x120495EFL}, {(-4L), 0x4693074EL, 0x00433AF9L, 0x4693074EL, (-4L), 0x9D42EE00L, 0x120495EFL}, {(-4L), 0x4693074EL, 0x00433AF9L, 0x4693074EL, (-4L), 0x9D42EE00L, 0x120495EFL}, {(-4L), 0x4693074EL, 0x00433AF9L, 0x4693074EL, (-4L), 0x9D42EE00L, 0x120495EFL}};
static int **g_758 = &g_182;
static int *g_791[1][9] = {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}};
static int g_802 = 0xA0D17244L;
static int g_805 = 0x6294C396L;
static int g_812 = 0xE123F6BFL;
static const unsigned char ***g_854 = (void*)0;
static unsigned g_961 = 0x7CA67162L;
static unsigned short *g_1018[4] = {(void*)0, (void*)0, (void*)0, (void*)0};
static unsigned short **g_1017 = &g_1018[0];
static unsigned short **g_1022 = &g_1018[0];
static unsigned g_1028 = 4294967295UL;
static unsigned char *g_1049 = (void*)0;
static unsigned g_1077[2][2][9] = {{{4294967295UL, 7UL, 0x30AF9DB2L, 4294967295UL, 0x9C66655BL, 4294967295UL, 0x30AF9DB2L, 7UL, 4294967295UL}, {4294967295UL, 7UL, 0x30AF9DB2L, 4294967295UL, 0x9C66655BL, 4294967295UL, 0x30AF9DB2L, 7UL, 4294967295UL}}, {{4294967295UL, 7UL, 0x30AF9DB2L, 4294967295UL, 0x9C66655BL, 4294967295UL, 0x30AF9DB2L, 7UL, 4294967295UL}, {4294967295UL, 7UL, 0x30AF9DB2L, 4294967295UL, 0x9C66655BL, 4294967295UL, 0x30AF9DB2L, 7UL, 4294967295UL}}};
static unsigned char *g_1098 = &g_684;
static short g_1138 = 0x1E58L;
static short g_1213 = 0x39D9L;
static unsigned char *g_1228 = &g_684;
static unsigned short g_1242 = 0x02B6L;
static char *g_1249 = &g_267;
static char **g_1248 = &g_1249;
static char g_1383 = 0x0CL;
static const int *g_1400[8][7][4] = {{{(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}}, {{(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}}, {{(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}}, {{(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}}, {{(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}}, {{(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}}, {{(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}}, {{(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}, {(void*)0, &g_92[2], &g_119, &g_3}}};
static const int **g_1399[8][8] = {{&g_1400[2][1][3], &g_1400[5][1][1], &g_1400[6][6][3], &g_1400[5][6][3], &g_1400[5][6][3], &g_1400[6][6][3], &g_1400[5][1][1], &g_1400[2][1][3]}, {&g_1400[2][1][3], &g_1400[5][1][1], &g_1400[6][6][3], &g_1400[5][6][3], &g_1400[5][6][3], &g_1400[6][6][3], &g_1400[5][1][1], &g_1400[2][1][3]}, {&g_1400[2][1][3], &g_1400[5][1][1], &g_1400[6][6][3], &g_1400[5][6][3], &g_1400[5][6][3], &g_1400[6][6][3], &g_1400[5][1][1], &g_1400[2][1][3]}, {&g_1400[2][1][3], &g_1400[5][1][1], &g_1400[6][6][3], &g_1400[5][6][3], &g_1400[5][6][3], &g_1400[6][6][3], &g_1400[5][1][1], &g_1400[2][1][3]}, {&g_1400[2][1][3], &g_1400[5][1][1], &g_1400[6][6][3], &g_1400[5][6][3], &g_1400[5][6][3], &g_1400[6][6][3], &g_1400[5][1][1], &g_1400[2][1][3]}, {&g_1400[2][1][3], &g_1400[5][1][1], &g_1400[6][6][3], &g_1400[5][6][3], &g_1400[5][6][3], &g_1400[6][6][3], &g_1400[5][1][1], &g_1400[2][1][3]}, {&g_1400[2][1][3], &g_1400[5][1][1], &g_1400[6][6][3], &g_1400[5][6][3], &g_1400[5][6][3], &g_1400[6][6][3], &g_1400[5][1][1], &g_1400[2][1][3]}, {&g_1400[2][1][3], &g_1400[5][1][1], &g_1400[6][6][3], &g_1400[5][6][3], &g_1400[5][6][3], &g_1400[6][6][3], &g_1400[5][1][1], &g_1400[2][1][3]}};
static unsigned short g_1464[10] = {0UL, 65535UL, 0UL, 65535UL, 0UL, 65535UL, 0UL, 65535UL, 0UL, 65535UL};
static short ***g_1480 = &g_427;
static short ****g_1479 = &g_1480;
static unsigned g_1518[10][5][5] = {{{0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}}, {{0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}}, {{0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}}, {{0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}}, {{0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}}, {{0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}}, {{0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}}, {{0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}}, {{0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}}, {{0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}, {0x45F22323L, 5UL, 4294967288UL, 0x45F22323L, 1UL}}};
static unsigned short g_1585 = 0UL;
static int g_1641 = 1L;
static int *g_1640 = &g_1641;
static int **g_1687 = &g_791[0][7];
static unsigned *g_1844[3][10][6] = {{{(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}, {(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}, {(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}, {(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}, {(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}, {(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}, {(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}, {(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}, {(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}, {(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}}, {{(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}, {(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}, {(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}, {(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}, {(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}, {(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}, {(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}, {(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}, {(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}, {(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}}, {{(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}, {(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}, {(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}, {(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}, {(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}, {(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}, {(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}, {(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}, {(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}, {(void*)0, &g_13, &g_961, &g_13, &g_13, &g_529}}};
static unsigned * const *g_1843 = &g_1844[0][6][1];
static unsigned * const **g_1842 = &g_1843;
static int *g_1910 = &g_686[4][6];
static unsigned char *g_1924 = &g_43;
static unsigned g_1963 = 4294967295UL;
static const unsigned g_1965 = 1UL;
static short *****g_1984 = (void*)0;
static unsigned g_2019 = 0xDEB3A2A9L;
static unsigned char g_2059 = 3UL;



static int func_1(void);
static char func_22(int * p_23);
static int * func_24(const int * p_25, int * p_26, short p_27, int * p_28);
static int * func_29(int * p_30, unsigned char p_31, int * p_32);
static int * func_33(char p_34, int * p_35, short p_36);
static int * func_44(int p_45, unsigned char * p_46);
static unsigned func_47(int * p_48, unsigned p_49, unsigned p_50, unsigned char * const p_51, int * p_52);
static int * func_53(int p_54, int p_55, unsigned char * p_56, char p_57, int * p_58);
static unsigned char * func_60(int p_61, unsigned char p_62, unsigned char * p_63, int * p_64, char p_65);
static unsigned short func_75(const short p_76, unsigned char * p_77, unsigned char * p_78, unsigned char * p_79);
static int func_1(void)
{
    int *l_2 = &g_3;
    int *l_4 = &g_3;
    int l_5 = 0x2D149FEBL;
    int l_6 = (-1L);
    int *l_7 = (void*)0;
    int l_8 = 1L;
    int *l_9 = &l_6;
    int *l_10 = &l_5;
    int *l_11[9][8] = {{&l_6, &l_8, &l_5, &g_3, &l_5, &l_5, &g_3, &l_5}, {&l_6, &l_8, &l_5, &g_3, &l_5, &l_5, &g_3, &l_5}, {&l_6, &l_8, &l_5, &g_3, &l_5, &l_5, &g_3, &l_5}, {&l_6, &l_8, &l_5, &g_3, &l_5, &l_5, &g_3, &l_5}, {&l_6, &l_8, &l_5, &g_3, &l_5, &l_5, &g_3, &l_5}, {&l_6, &l_8, &l_5, &g_3, &l_5, &l_5, &g_3, &l_5}, {&l_6, &l_8, &l_5, &g_3, &l_5, &l_5, &g_3, &l_5}, {&l_6, &l_8, &l_5, &g_3, &l_5, &l_5, &g_3, &l_5}, {&l_6, &l_8, &l_5, &g_3, &l_5, &l_5, &g_3, &l_5}};
    unsigned l_39 = 0xCA4B38B4L;
    unsigned char *l_42 = &g_43;
    int l_59 = 0x3A38C8A2L;
    int l_806[8][2] = {{0x8F899F2CL, 0x7F92CAF9L}, {0x8F899F2CL, 0x7F92CAF9L}, {0x8F899F2CL, 0x7F92CAF9L}, {0x8F899F2CL, 0x7F92CAF9L}, {0x8F899F2CL, 0x7F92CAF9L}, {0x8F899F2CL, 0x7F92CAF9L}, {0x8F899F2CL, 0x7F92CAF9L}, {0x8F899F2CL, 0x7F92CAF9L}};
    int *l_1676 = (void*)0;
    unsigned char * const l_2026 = &g_684;
    int *l_2027[2][6];
    unsigned char * const l_2029 = &g_684;
    short * const *l_2037[1];
    unsigned short **l_2047 = (void*)0;
    int l_2074 = (-10L);
    int **l_2075 = &g_1910;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
            l_2027[i][j] = (void*)0;
    }
    for (i = 0; i < 1; i++)
        l_2037[i] = &g_428;
    g_13++;
    g_2019 |= ((safe_rshift_func_int8_t_s_s((*l_10), (safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((&g_3 == (void*)0), func_22(func_24(func_29(func_33((safe_mod_func_uint8_t_u_u(l_39, ((*l_42) = (safe_rshift_func_int8_t_s_s((*l_2), (*l_4)))))), func_44(((g_805 ^= func_47(func_53(l_59, g_3, func_60(g_12, (*l_10), g_66, &g_3, g_13), g_84[2], &g_92[5]), g_686[1][0], g_802, l_42, &g_3)) | l_806[3][1]), &g_653), g_3), (*l_9), g_1640), l_1676, g_1464[9], g_1640)))), 2)))) & g_1518[8][1][2]);
    for (g_88 = (-1); (g_88 >= 16); g_88++)
    {
        int *l_2022 = &g_686[0][6];
        unsigned char **l_2025[6][3] = {{&g_277, &g_1049, (void*)0}, {&g_277, &g_1049, (void*)0}, {&g_277, &g_1049, (void*)0}, {&g_277, &g_1049, (void*)0}, {&g_277, &g_1049, (void*)0}, {&g_277, &g_1049, (void*)0}};
        unsigned *l_2028 = &l_39;
        int l_2033 = 4L;
        short l_2065[1][5][9] = {{{1L, 0x38FAL, (-1L), 0x38FAL, 1L, 0xD54FL, (-1L), 0xD54FL, 1L}, {1L, 0x38FAL, (-1L), 0x38FAL, 1L, 0xD54FL, (-1L), 0xD54FL, 1L}, {1L, 0x38FAL, (-1L), 0x38FAL, 1L, 0xD54FL, (-1L), 0xD54FL, 1L}, {1L, 0x38FAL, (-1L), 0x38FAL, 1L, 0xD54FL, (-1L), 0xD54FL, 1L}, {1L, 0x38FAL, (-1L), 0x38FAL, 1L, 0xD54FL, (-1L), 0xD54FL, 1L}}};
        int l_2078 = 0xC200975FL;
        int l_2080 = (-6L);
        int l_2084 = 0x1AB36AB5L;
        int l_2087 = 0xA0B52085L;
        int l_2088 = 0x246F27C4L;
        int l_2089 = (-6L);
        int l_2090 = 7L;
        int l_2096 = 0xCF114618L;
        int l_2097 = 7L;
        int l_2098 = 8L;
        int i, j, k;
        (*g_1687) = l_2022;
        (*l_2022) = ((safe_rshift_func_int8_t_s_s(((!(*l_2022)) <= ((1L & (*l_2022)) > (~(((**g_1248) && func_47(l_2022, ((*l_2028) = func_47(&g_686[3][4], (((*g_1640) = (*l_9)) | (((*l_2022) >= ((l_2025[0][0] == (void*)0) & (-5L))) >= (*l_4))), (*l_2), l_2026, l_2027[0][3])), (*l_2), l_2029, &l_5)) && (*l_2022))))), 7)) & (*l_10));
        for (l_6 = (-1); (l_6 < 7); l_6++)
        {
            int l_2032[6];
            const unsigned char l_2036 = 7UL;
            const int l_2039 = 0x1E9D40F0L;
            unsigned short **l_2056[10];
            int l_2060 = 0xCC2EB0F3L;
            short **l_2077[3];
            int l_2081 = (-8L);
            int l_2083 = 0xE0F88816L;
            int l_2093 = 1L;
            int l_2094 = 1L;
            int l_2095 = 1L;
            int i;
            for (i = 0; i < 6; i++)
                l_2032[i] = 0x0A6F2BF7L;
            for (i = 0; i < 10; i++)
                l_2056[i] = &g_1018[1];
            for (i = 0; i < 3; i++)
                l_2077[i] = (void*)0;
            (*g_1640) |= l_2032[2];
            if ((l_2033 = ((*g_1910) | l_2032[5])))
            {
                short * const **l_2038 = &l_2037[0];
                int l_2052 = 0xC17926F3L;
                if ((((0UL ^ (((*g_591) = (safe_add_func_int32_t_s_s(((1UL > ((*l_10) > ((*l_2022) || l_2032[2]))) | (*g_591)), l_2036))) > ((*g_1480) != ((*l_2038) = l_2037[0])))) != l_2039) < 0xCBL))
                {
                    for (g_119 = 25; (g_119 != (-4)); g_119 = safe_sub_func_uint8_t_u_u(g_119, 5))
                    {
                        unsigned * const *l_2042[9][1];
                        int i, j;
                        for (i = 0; i < 9; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_2042[i][j] = &l_2028;
                        }
                        if ((*g_1910))
                            break;
                        l_2042[0][0] = (*g_1842);
                    }
                    (*l_2) ^= 9L;
                }
                else
                {
                    const int * const l_2045 = &l_59;
                    unsigned char ***l_2055 = &l_2025[1][1];
                    int l_2061 = (-1L);
                    unsigned **l_2072[7] = {&g_1844[0][6][1], &g_1844[0][6][1], &g_1844[0][6][1], &g_1844[0][6][1], &g_1844[0][6][1], &g_1844[0][6][1], &g_1844[0][6][1]};
                    int i;
                    for (g_43 = 15; (g_43 <= 46); g_43 = safe_add_func_uint32_t_u_u(g_43, 1))
                    {
                        const int **l_2046 = &g_1400[5][6][3];
                        (*l_2046) = l_2045;
                        (*g_1640) = ((void*)0 == l_2047);
                    }
                    if ((safe_mod_func_uint32_t_u_u((((safe_add_func_uint8_t_u_u(((((*l_10) &= l_2052) > (*l_2022)) < (0x4CFFL ^ (l_2060 = ((safe_sub_func_int32_t_s_s((((*l_2055) = &g_1924) == (void*)0), ((void*)0 == l_2056[5]))) != (g_2059 = (safe_lshift_func_int8_t_s_u((l_2032[2] < (*l_2045)), 3))))))), l_2036)) <= (**g_1248)) && (*l_2022)), 0x2B00F627L)))
                    {
                        if ((*g_1640))
                            break;
                    }
                    else
                    {
                        unsigned l_2062 = 0xA3E72CF8L;
                        ++l_2062;
                        if (l_2052)
                            break;
                        if (l_2032[3])
                            continue;
                        (*g_1640) = (*l_2022);
                    }
                    if (l_2065[0][2][3])
                    {
                        unsigned ***l_2073 = &g_343;
                        if ((*g_1640))
                            break;
                        (*l_2022) = ((((safe_add_func_uint8_t_u_u((0x2603L == 65528UL), (safe_sub_func_uint16_t_u_u((l_2052 <= (*l_2045)), (l_2072[6] == ((*l_2073) = l_2072[6])))))) == 0UL) != func_22(&g_92[1])) != (*l_2045));
                    }
                    else
                    {
                        (*l_10) &= l_2036;
                        (*g_1687) = l_2022;
                    }
                }
                return l_2074;
            }
            else
            {
                int ***l_2076 = &g_758;
                int l_2079 = 0xE355856DL;
                int l_2082 = 0x0ADF0E8BL;
                int l_2085 = 8L;
                char l_2086 = 0L;
                int l_2091 = 0x76B778F3L;
                int l_2092 = 0x249A686AL;
                unsigned short l_2099[3][5] = {{65528UL, 0xEEB7L, 65528UL, 0xEEB7L, 65528UL}, {65528UL, 0xEEB7L, 65528UL, 0xEEB7L, 65528UL}, {65528UL, 0xEEB7L, 65528UL, 0xEEB7L, 65528UL}};
                int i, j;
                (*l_2076) = l_2075;
                (**g_1479) = l_2077[1];
                l_2099[0][1]++;
                return g_1464[9];
            }
        }
    }
    return g_1077[0][0][8];
}







static char func_22(int * p_23)
{
    unsigned short l_1956 = 0xEA71L;
    int *l_1961[7][9][4] = {{{&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}}, {{&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}}, {{&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}}, {{&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}}, {{&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}}, {{&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}}, {{&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}, {&g_686[0][6], &g_3, &g_686[0][6], &g_686[0][6]}}};
    char l_1962 = 0x5DL;
    unsigned char * const l_1964 = &g_684;
    unsigned l_1966 = 0x422391A6L;
    unsigned l_1967 = 4294967286UL;
    unsigned char *l_1992[4][2] = {{&g_43, &g_43}, {&g_43, &g_43}, {&g_43, &g_43}, {&g_43, &g_43}};
    unsigned short l_1997[5] = {1UL, 65532UL, 1UL, 65532UL, 1UL};
    unsigned l_2001[5][4][6] = {{{4294967295UL, 0x9EC177B0L, 4294967292UL, 4294967292UL, 0x9EC177B0L, 4294967295UL}, {4294967295UL, 0x9EC177B0L, 4294967292UL, 4294967292UL, 0x9EC177B0L, 4294967295UL}, {4294967295UL, 0x9EC177B0L, 4294967292UL, 4294967292UL, 0x9EC177B0L, 4294967295UL}, {4294967295UL, 0x9EC177B0L, 4294967292UL, 4294967292UL, 0x9EC177B0L, 4294967295UL}}, {{4294967295UL, 0x9EC177B0L, 4294967292UL, 4294967292UL, 0x9EC177B0L, 4294967295UL}, {4294967295UL, 0x9EC177B0L, 4294967292UL, 4294967292UL, 0x9EC177B0L, 4294967295UL}, {4294967295UL, 0x9EC177B0L, 4294967292UL, 4294967292UL, 0x9EC177B0L, 4294967295UL}, {4294967295UL, 0x9EC177B0L, 4294967292UL, 4294967292UL, 0x9EC177B0L, 4294967295UL}}, {{4294967295UL, 0x9EC177B0L, 4294967292UL, 4294967292UL, 0x9EC177B0L, 4294967295UL}, {4294967295UL, 0x9EC177B0L, 4294967292UL, 4294967292UL, 0x9EC177B0L, 4294967295UL}, {4294967295UL, 0x9EC177B0L, 4294967292UL, 4294967292UL, 0x9EC177B0L, 4294967295UL}, {4294967295UL, 0x9EC177B0L, 4294967292UL, 4294967292UL, 0x9EC177B0L, 4294967295UL}}, {{4294967295UL, 0x9EC177B0L, 4294967292UL, 4294967292UL, 0x9EC177B0L, 4294967295UL}, {4294967295UL, 0x9EC177B0L, 4294967292UL, 4294967292UL, 0x9EC177B0L, 4294967295UL}, {4294967295UL, 0x9EC177B0L, 4294967292UL, 4294967292UL, 0x9EC177B0L, 4294967295UL}, {4294967295UL, 0x9EC177B0L, 4294967292UL, 4294967292UL, 0x9EC177B0L, 4294967295UL}}, {{4294967295UL, 0x9EC177B0L, 4294967292UL, 4294967292UL, 0x9EC177B0L, 4294967295UL}, {4294967295UL, 0x9EC177B0L, 4294967292UL, 4294967292UL, 0x9EC177B0L, 4294967295UL}, {4294967295UL, 0x9EC177B0L, 4294967292UL, 4294967292UL, 0x9EC177B0L, 4294967295UL}, {4294967295UL, 0x9EC177B0L, 4294967292UL, 4294967292UL, 0x9EC177B0L, 4294967295UL}}};
    int l_2018 = 0xD1FD420EL;
    int i, j, k;
    (*g_1910) &= ((safe_sub_func_int8_t_s_s(0x74L, (safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(l_1956, (l_1956 && ((**g_1248) = ((safe_lshift_func_int16_t_s_s(l_1956, (((l_1956 || ((safe_add_func_uint16_t_u_u(l_1956, func_47(l_1961[0][6][3], l_1962, g_1963, l_1964, p_23))) || (*g_1249))) && g_1965) && l_1966))) && l_1967))))), (*g_1228))))) > 1L);
    (*g_1910) &= 0L;
    for (g_653 = 0; (g_653 <= 3); g_653 += 1)
    {
        unsigned l_1968 = 4294967292UL;
        int l_1971 = 0x33B405EFL;
        int l_1975[2];
        unsigned char *l_1993 = &g_67;
        unsigned char *l_2011 = &g_653;
        unsigned l_2015 = 0xDD6392B5L;
        int i;
        for (i = 0; i < 2; i++)
            l_1975[i] = (-7L);
        for (g_1242 = 2; (g_1242 <= 6); g_1242 += 1)
        {
            int i, j;
            (*g_1687) = &g_686[g_653][g_1242];
            return (**g_1248);
        }
        if ((*g_1640))
            continue;
        ++l_1968;
        for (g_529 = 1; (g_529 <= 6); g_529 += 1)
        {
            unsigned l_1979 = 0xFF74F310L;
            short l_1988 = 0xA822L;
            int l_1996 = (-7L);
            int l_2012 = 0x19CBD1A4L;
            int l_2013 = 5L;
            int l_2014[9];
            int i;
            for (i = 0; i < 9; i++)
                l_2014[i] = 0x160CF840L;
            for (g_805 = 0; (g_805 <= 3); g_805 += 1)
            {
                int l_1972 = 0xF3A16C28L;
                int l_1977[10];
                unsigned char *l_2000 = &g_67;
                int i, j, k;
                for (i = 0; i < 10; i++)
                    l_1977[i] = 0xF05C99C1L;
                g_1400[(g_653 + 1)][g_529][g_653] = l_1961[(g_653 + 2)][(g_805 + 2)][g_653];
                for (g_684 = 0; (g_684 <= 3); g_684 += 1)
                {
                    int l_1973[5] = {0L, 0L, 0L, 0L, 0L};
                    const short *** const *l_1986 = (void*)0;
                    const short *** const **l_1985 = &l_1986;
                    unsigned char *l_1991[1][8][10] = {{{&g_67, &g_684, &g_684, &g_43, &g_684, &g_684, &g_43, &g_684, &g_684, &g_67}, {&g_67, &g_684, &g_684, &g_43, &g_684, &g_684, &g_43, &g_684, &g_684, &g_67}, {&g_67, &g_684, &g_684, &g_43, &g_684, &g_684, &g_43, &g_684, &g_684, &g_67}, {&g_67, &g_684, &g_684, &g_43, &g_684, &g_684, &g_43, &g_684, &g_684, &g_67}, {&g_67, &g_684, &g_684, &g_43, &g_684, &g_684, &g_43, &g_684, &g_684, &g_67}, {&g_67, &g_684, &g_684, &g_43, &g_684, &g_684, &g_43, &g_684, &g_684, &g_67}, {&g_67, &g_684, &g_684, &g_43, &g_684, &g_684, &g_43, &g_684, &g_684, &g_67}, {&g_67, &g_684, &g_684, &g_43, &g_684, &g_684, &g_43, &g_684, &g_684, &g_67}}};
                    short *l_1994 = &g_84[4];
                    unsigned short *l_1995[8][7][3] = {{{&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}}, {{&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}}, {{&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}}, {{&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}}, {{&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}}, {{&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}}, {{&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}}, {{&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}, {&g_1464[9], (void*)0, &l_1956}}};
                    int i, j, k;
                    l_1961[g_529][(g_653 + 3)][g_653] = (void*)0;
                    for (g_1963 = 0; (g_1963 <= 6); g_1963 += 1)
                    {
                        int l_1974 = 0x979B29F0L;
                        int l_1976 = 7L;
                        int l_1978 = 0xA61621B3L;
                        short *l_1987 = &g_1213;
                        int i, j;
                        g_686[(g_653 + 2)][(g_805 + 1)] &= l_1968;
                        (*g_1687) = p_23;
                        l_1979--;
                        l_1971 = (((*g_1249) &= ((l_1973[0] != (((*l_1987) = (safe_lshift_func_int16_t_s_s(((g_1984 = &g_1479) == l_1985), 15))) != l_1988)) && l_1979)) < l_1974);
                    }
                    if ((safe_sub_func_int8_t_s_s((0xB5E6L | func_75(l_1975[0], l_1991[0][0][9], l_1992[3][1], l_1993)), (((*l_1994) = l_1979) & (((++l_1997[1]) < (((1UL ^ func_47(func_44(l_1996, l_2000), l_1968, l_2001[3][0][5], l_1993, &l_1972)) && 0xBFF0L) & l_1975[0])) <= (**g_1248))))))
                    {
                        unsigned l_2002 = 0xFEC3A8DEL;
                        short *l_2005[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_2005[i] = &g_1213;
                        if (l_1968)
                            break;
                        l_2002 |= l_1975[0];
                        (*g_1910) &= (safe_add_func_int8_t_s_s(((!(l_2005[0] == (l_1994 = l_1994))) <= (*g_66)), (*g_1249)));
                    }
                    else
                    {
                        unsigned char *l_2008[3];
                        unsigned char **l_2009 = &g_1098;
                        unsigned char **l_2010 = &g_1924;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_2008[i] = &g_653;
                        (*g_1687) = p_23;
                        (*g_1687) = p_23;
                    }
                    for (l_1972 = 0; l_1972 < 7; l_1972 += 1)
                    {
                        g_84[l_1972] = 0x5201L;
                    }
                }
            }
            --l_2015;
            l_1971 = ((*g_1640) = l_2014[5]);
        }
    }
    return l_2018;
}







static int * func_24(const int * p_25, int * p_26, short p_27, int * p_28)
{
    const unsigned short *l_1679 = &g_405;
    const unsigned short **l_1678 = &l_1679;
    const unsigned short ***l_1677[1][5][9] = {{{&l_1678, &l_1678, &l_1678, &l_1678, &l_1678, &l_1678, &l_1678, &l_1678, &l_1678}, {&l_1678, &l_1678, &l_1678, &l_1678, &l_1678, &l_1678, &l_1678, &l_1678, &l_1678}, {&l_1678, &l_1678, &l_1678, &l_1678, &l_1678, &l_1678, &l_1678, &l_1678, &l_1678}, {&l_1678, &l_1678, &l_1678, &l_1678, &l_1678, &l_1678, &l_1678, &l_1678, &l_1678}, {&l_1678, &l_1678, &l_1678, &l_1678, &l_1678, &l_1678, &l_1678, &l_1678, &l_1678}}};
    unsigned char *l_1681 = (void*)0;
    int **l_1683 = (void*)0;
    int **l_1688[3];
    int l_1723 = 1L;
    unsigned char *l_1726 = &g_43;
    const int l_1733 = 0x7671F015L;
    int *l_1739 = &g_686[3][6];
    short l_1776 = 1L;
    unsigned short l_1806 = 0xE106L;
    char l_1809 = 0x66L;
    unsigned char l_1810[7] = {0x7AL, 0x7AL, 2UL, 0x7AL, 0x7AL, 2UL, 0x7AL};
    int *l_1830[8];
    unsigned l_1874 = 1UL;
    unsigned char *l_1884 = &l_1810[2];
    unsigned char l_1893 = 250UL;
    int *l_1918 = &g_92[6];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1688[i] = (void*)0;
    for (i = 0; i < 8; i++)
        l_1830[i] = &g_92[5];
    for (g_1213 = 5; (g_1213 >= 0); g_1213 -= 1)
    {
        const char l_1680 = 0L;
        unsigned char *l_1682[1];
        int ***l_1684 = &g_758;
        int ***l_1685 = &g_758;
        int ***l_1686[8] = {(void*)0, &g_758, (void*)0, &g_758, (void*)0, &g_758, (void*)0, &g_758};
        int i;
        for (i = 0; i < 1; i++)
            l_1682[i] = &g_43;
        (*p_28) &= ((l_1677[0][3][0] == &l_1678) ^ func_75(l_1680, l_1681, l_1681, l_1682[0]));
        (*p_28) = (p_27 == (l_1683 == (l_1688[2] = (g_1687 = &g_791[0][5]))));
        for (g_12 = 0; (g_12 <= 5); g_12 += 1)
        {
            int *l_1689 = &g_119;
            unsigned char *l_1698[2];
            int l_1714 = 0x672DFE67L;
            int i;
            for (i = 0; i < 2; i++)
                l_1698[i] = &g_653;
            for (g_577 = 0; (g_577 <= 5); g_577 += 1)
            {
                int *l_1692[5][8] = {{&g_3, &g_119, &g_3, &g_812, &g_92[4], &g_802, &g_92[4], &g_812}, {&g_3, &g_119, &g_3, &g_812, &g_92[4], &g_802, &g_92[4], &g_812}, {&g_3, &g_119, &g_3, &g_812, &g_92[4], &g_802, &g_92[4], &g_812}, {&g_3, &g_119, &g_3, &g_812, &g_92[4], &g_802, &g_92[4], &g_812}, {&g_3, &g_119, &g_3, &g_812, &g_92[4], &g_802, &g_92[4], &g_812}};
                char l_1694 = (-1L);
                unsigned char * const l_1696 = &g_43;
                int i, j;
                (*g_1687) = l_1689;
                for (g_119 = 0; (g_119 >= 0); g_119 -= 1)
                {
                    unsigned *l_1695 = &g_961;
                    unsigned l_1697[2][9][3] = {{{4294967295UL, 0x0DD8B501L, 0x93768723L}, {4294967295UL, 0x0DD8B501L, 0x93768723L}, {4294967295UL, 0x0DD8B501L, 0x93768723L}, {4294967295UL, 0x0DD8B501L, 0x93768723L}, {4294967295UL, 0x0DD8B501L, 0x93768723L}, {4294967295UL, 0x0DD8B501L, 0x93768723L}, {4294967295UL, 0x0DD8B501L, 0x93768723L}, {4294967295UL, 0x0DD8B501L, 0x93768723L}, {4294967295UL, 0x0DD8B501L, 0x93768723L}}, {{4294967295UL, 0x0DD8B501L, 0x93768723L}, {4294967295UL, 0x0DD8B501L, 0x93768723L}, {4294967295UL, 0x0DD8B501L, 0x93768723L}, {4294967295UL, 0x0DD8B501L, 0x93768723L}, {4294967295UL, 0x0DD8B501L, 0x93768723L}, {4294967295UL, 0x0DD8B501L, 0x93768723L}, {4294967295UL, 0x0DD8B501L, 0x93768723L}, {4294967295UL, 0x0DD8B501L, 0x93768723L}, {4294967295UL, 0x0DD8B501L, 0x93768723L}}};
                    int i, j, k;
                    (*p_28) = (safe_lshift_func_uint16_t_u_s(func_75(g_179[(g_119 + 5)][g_577], func_60((0L | p_27), func_47(l_1692[2][7], (safe_unary_minus_func_int16_t_s(g_179[(g_119 + 5)][g_577])), ((*l_1695) = func_47(p_26, ((*g_1228) > 0x25L), (l_1694 > (*g_591)), l_1681, p_26)), l_1696, p_26), l_1681, l_1692[2][7], l_1697[1][6][2]), l_1698[1], l_1682[0]), p_27));
                }
                p_25 = ((*g_1687) = l_1689);
            }
            for (g_1028 = 0; (g_1028 <= 5); g_1028 += 1)
            {
                unsigned char l_1700 = 0x0AL;
                short *l_1707[6] = {(void*)0, &g_84[1], (void*)0, &g_84[1], (void*)0, &g_84[1]};
                int l_1708 = 0xAAF65421L;
                int l_1709 = 0L;
                int i;
            }
        }
    }
    if ((*g_1640))
    {
        unsigned l_1719[5] = {4294967292UL, 0UL, 4294967292UL, 0UL, 4294967292UL};
        int *l_1720 = &g_92[7];
        unsigned l_1724 = 2UL;
        unsigned char *l_1725 = &g_43;
        int l_1767 = (-1L);
        int l_1768 = 0L;
        int l_1774 = 0x37B86FEDL;
        int l_1775 = 0x9559AA94L;
        int l_1777 = (-1L);
        int l_1778 = (-9L);
        int l_1779[9][4][7] = {{{1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}, {1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}, {1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}, {1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}}, {{1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}, {1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}, {1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}, {1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}}, {{1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}, {1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}, {1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}, {1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}}, {{1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}, {1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}, {1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}, {1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}}, {{1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}, {1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}, {1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}, {1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}}, {{1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}, {1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}, {1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}, {1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}}, {{1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}, {1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}, {1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}, {1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}}, {{1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}, {1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}, {1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}, {1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}}, {{1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}, {1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}, {1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}, {1L, 0L, 0xD1046B41L, 0L, 1L, (-5L), 0x1D730281L}}};
        int l_1780 = 0xFBC58C24L;
        int *l_1794 = &l_1777;
        unsigned char l_1899 = 0x60L;
        int i, j, k;
        if (func_75(((safe_lshift_func_int8_t_s_s(((**g_1248) = (((safe_rshift_func_int8_t_s_u(((+(~p_27)) <= 0xE915AD03L), 6)) | (l_1719[0] |= (*p_28))) >= func_47(l_1720, (safe_mod_func_uint8_t_u_u(l_1723, ((*l_1720) = ((*g_591) &= ((*g_1228) = (*l_1720)))))), l_1724, l_1681, p_26))), p_27)) ^ 1L), l_1725, l_1681, l_1726))
        {
            short *l_1734[10][3] = {{&g_84[4], &g_84[4], &g_84[4]}, {&g_84[4], &g_84[4], &g_84[4]}, {&g_84[4], &g_84[4], &g_84[4]}, {&g_84[4], &g_84[4], &g_84[4]}, {&g_84[4], &g_84[4], &g_84[4]}, {&g_84[4], &g_84[4], &g_84[4]}, {&g_84[4], &g_84[4], &g_84[4]}, {&g_84[4], &g_84[4], &g_84[4]}, {&g_84[4], &g_84[4], &g_84[4]}, {&g_84[4], &g_84[4], &g_84[4]}};
            unsigned char *l_1735 = &g_43;
            int l_1738[10] = {0x33084538L, (-8L), 9L, 9L, (-8L), 0x33084538L, (-8L), 9L, 9L, (-8L)};
            int *l_1757 = &g_92[7];
            short l_1773 = 0x3B53L;
            unsigned char l_1782 = 4UL;
            int *l_1785 = &l_1738[9];
            unsigned short l_1791 = 1UL;
            unsigned *l_1797[6] = {&g_13, &g_13, (void*)0, &g_13, &g_13, (void*)0};
            short l_1800[9][2][10] = {{{0x0C02L, 0xE412L, 0xE0BEL, 0xCE14L, 0x7291L, 1L, 0x09B5L, 0x05E4L, 0x09B5L, 1L}, {0x0C02L, 0xE412L, 0xE0BEL, 0xCE14L, 0x7291L, 1L, 0x09B5L, 0x05E4L, 0x09B5L, 1L}}, {{0x0C02L, 0xE412L, 0xE0BEL, 0xCE14L, 0x7291L, 1L, 0x09B5L, 0x05E4L, 0x09B5L, 1L}, {0x0C02L, 0xE412L, 0xE0BEL, 0xCE14L, 0x7291L, 1L, 0x09B5L, 0x05E4L, 0x09B5L, 1L}}, {{0x0C02L, 0xE412L, 0xE0BEL, 0xCE14L, 0x7291L, 1L, 0x09B5L, 0x05E4L, 0x09B5L, 1L}, {0x0C02L, 0xE412L, 0xE0BEL, 0xCE14L, 0x7291L, 1L, 0x09B5L, 0x05E4L, 0x09B5L, 1L}}, {{0x0C02L, 0xE412L, 0xE0BEL, 0xCE14L, 0x7291L, 1L, 0x09B5L, 0x05E4L, 0x09B5L, 1L}, {0x0C02L, 0xE412L, 0xE0BEL, 0xCE14L, 0x7291L, 1L, 0x09B5L, 0x05E4L, 0x09B5L, 1L}}, {{0x0C02L, 0xE412L, 0xE0BEL, 0xCE14L, 0x7291L, 1L, 0x09B5L, 0x05E4L, 0x09B5L, 1L}, {0x0C02L, 0xE412L, 0xE0BEL, 0xCE14L, 0x7291L, 1L, 0x09B5L, 0x05E4L, 0x09B5L, 1L}}, {{0x0C02L, 0xE412L, 0xE0BEL, 0xCE14L, 0x7291L, 1L, 0x09B5L, 0x05E4L, 0x09B5L, 1L}, {0x0C02L, 0xE412L, 0xE0BEL, 0xCE14L, 0x7291L, 1L, 0x09B5L, 0x05E4L, 0x09B5L, 1L}}, {{0x0C02L, 0xE412L, 0xE0BEL, 0xCE14L, 0x7291L, 1L, 0x09B5L, 0x05E4L, 0x09B5L, 1L}, {0x0C02L, 0xE412L, 0xE0BEL, 0xCE14L, 0x7291L, 1L, 0x09B5L, 0x05E4L, 0x09B5L, 1L}}, {{0x0C02L, 0xE412L, 0xE0BEL, 0xCE14L, 0x7291L, 1L, 0x09B5L, 0x05E4L, 0x09B5L, 1L}, {0x0C02L, 0xE412L, 0xE0BEL, 0xCE14L, 0x7291L, 1L, 0x09B5L, 0x05E4L, 0x09B5L, 1L}}, {{0x0C02L, 0xE412L, 0xE0BEL, 0xCE14L, 0x7291L, 1L, 0x09B5L, 0x05E4L, 0x09B5L, 1L}, {0x0C02L, 0xE412L, 0xE0BEL, 0xCE14L, 0x7291L, 1L, 0x09B5L, 0x05E4L, 0x09B5L, 1L}}};
            unsigned char l_1801 = 255UL;
            int i, j, k;
            (*p_28) = (safe_add_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(((**g_1248) = (func_47(p_26, ((safe_add_func_int16_t_s_s((0xB464AD80L <= (func_75(((*l_1720) &= l_1733), l_1735, l_1726, l_1725) == (((-2L) > (safe_lshift_func_int8_t_s_s(func_47(func_44(l_1738[9], l_1726), g_179[1][1], g_179[3][3], l_1735, l_1739), 0))) != p_27))), 0x5D36L)) ^ p_27), g_529, l_1726, &l_1738[6]) == 0x1F17L)), 0x80L)) & 1L), p_27));
            for (g_1585 = (-30); (g_1585 <= 20); g_1585++)
            {
                short l_1759 = (-1L);
                int *l_1760[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1760[i] = &g_3;
                for (g_43 = 0; (g_43 > 5); ++g_43)
                {
                    unsigned char * const l_1746 = &g_67;
                    if (func_47(p_26, g_84[4], (safe_sub_func_int16_t_s_s((*l_1739), p_27)), l_1746, p_28))
                    {
                        int l_1758[9][3][4] = {{{0x0BE3A649L, (-1L), 5L, 5L}, {0x0BE3A649L, (-1L), 5L, 5L}, {0x0BE3A649L, (-1L), 5L, 5L}}, {{0x0BE3A649L, (-1L), 5L, 5L}, {0x0BE3A649L, (-1L), 5L, 5L}, {0x0BE3A649L, (-1L), 5L, 5L}}, {{0x0BE3A649L, (-1L), 5L, 5L}, {0x0BE3A649L, (-1L), 5L, 5L}, {0x0BE3A649L, (-1L), 5L, 5L}}, {{0x0BE3A649L, (-1L), 5L, 5L}, {0x0BE3A649L, (-1L), 5L, 5L}, {0x0BE3A649L, (-1L), 5L, 5L}}, {{0x0BE3A649L, (-1L), 5L, 5L}, {0x0BE3A649L, (-1L), 5L, 5L}, {0x0BE3A649L, (-1L), 5L, 5L}}, {{0x0BE3A649L, (-1L), 5L, 5L}, {0x0BE3A649L, (-1L), 5L, 5L}, {0x0BE3A649L, (-1L), 5L, 5L}}, {{0x0BE3A649L, (-1L), 5L, 5L}, {0x0BE3A649L, (-1L), 5L, 5L}, {0x0BE3A649L, (-1L), 5L, 5L}}, {{0x0BE3A649L, (-1L), 5L, 5L}, {0x0BE3A649L, (-1L), 5L, 5L}, {0x0BE3A649L, (-1L), 5L, 5L}}, {{0x0BE3A649L, (-1L), 5L, 5L}, {0x0BE3A649L, (-1L), 5L, 5L}, {0x0BE3A649L, (-1L), 5L, 5L}}};
                        int i, j, k;
                        (*l_1720) &= (*p_25);
                        (*g_1640) = ((safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((p_27 | p_27), ((safe_lshift_func_int16_t_s_u(((safe_sub_func_uint32_t_u_u((((safe_sub_func_int16_t_s_s(((func_47(p_28, l_1738[1], p_27, l_1726, l_1757) || func_47(func_29(p_26, l_1758[8][1][1], l_1720), l_1759, p_27, l_1746, l_1760[0])) || l_1758[8][1][1]), p_27)) | p_27) ^ (-1L)), l_1758[4][0][0])) == 0x2E23L), 5)) >= p_27))), p_27)) <= 2UL);
                    }
                    else
                    {
                        (*p_28) ^= ((void*)0 == &g_1022);
                        (*p_28) = (p_27 == p_27);
                    }
                }
                (*l_1739) ^= ((*l_1720) &= (*g_1640));
                for (g_405 = 20; (g_405 > 54); g_405 = safe_add_func_int32_t_s_s(g_405, 6))
                {
                    int *l_1765 = &g_92[1];
                    int l_1769 = 0L;
                    int l_1770[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1770[i] = 1L;
                    for (g_119 = 0; (g_119 == (-3)); g_119 = safe_sub_func_int8_t_s_s(g_119, 2))
                    {
                        const int **l_1766 = &g_1400[5][6][3];
                        int l_1771 = 0L;
                        int l_1772[3];
                        int l_1781 = 0L;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1772[i] = 0xD98552ACL;
                        (*l_1757) = (*l_1720);
                        (*g_1687) = (l_1765 = l_1760[0]);
                        (*l_1766) = p_25;
                        l_1782--;
                    }
                    (*g_1687) = l_1760[0];
                    for (l_1767 = 0; (l_1767 <= 3); l_1767 += 1)
                    {
                        return p_28;
                    }
                    for (l_1778 = 0; (l_1778 != 27); l_1778 = safe_add_func_uint8_t_u_u(l_1778, 3))
                    {
                        short l_1788 = 0x5A43L;
                        int l_1789 = 0xFC63515AL;
                        int l_1790 = 0x5BB95BEBL;
                        ++l_1791;
                        (*l_1739) ^= (p_26 != (void*)0);
                        (*g_1687) = p_28;
                        if ((*l_1720))
                            break;
                    }
                }
            }
            (*g_1687) = p_28;
            p_25 = ((*g_1687) = func_33((*g_1249), func_29(p_26, p_27, l_1794), ((*l_1785) &= (safe_rshift_func_uint16_t_u_s((func_47(p_28, (l_1768 = 0x0E7926F5L), (safe_lshift_func_uint16_t_u_s(p_27, l_1800[3][1][6])), &l_1782, &l_1779[5][0][0]) >= l_1801), p_27)))));
        }
        else
        {
            (*l_1739) |= (*g_1640);
        }
        for (l_1724 = 0; (l_1724 <= 1); l_1724 += 1)
        {
            int l_1807 = (-1L);
            int l_1808[3][7];
            unsigned short * const *l_1814 = &g_1018[0];
            unsigned char *l_1820 = &l_1810[5];
            unsigned ***l_1841[4][7][7] = {{{&g_343, &g_343, &g_343, &g_343, &g_343, &g_343, &g_343}, {&g_343, &g_343, &g_343, &g_343, &g_343, &g_343, &g_343}, {&g_343, &g_343, &g_343, &g_343, &g_343, &g_343, &g_343}, {&g_343, &g_343, &g_343, &g_343, &g_343, &g_343, &g_343}, {&g_343, &g_343, &g_343, &g_343, &g_343, &g_343, &g_343}, {&g_343, &g_343, &g_343, &g_343, &g_343, &g_343, &g_343}, {&g_343, &g_343, &g_343, &g_343, &g_343, &g_343, &g_343}}, {{&g_343, &g_343, &g_343, &g_343, &g_343, &g_343, &g_343}, {&g_343, &g_343, &g_343, &g_343, &g_343, &g_343, &g_343}, {&g_343, &g_343, &g_343, &g_343, &g_343, &g_343, &g_343}, {&g_343, &g_343, &g_343, &g_343, &g_343, &g_343, &g_343}, {&g_343, &g_343, &g_343, &g_343, &g_343, &g_343, &g_343}, {&g_343, &g_343, &g_343, &g_343, &g_343, &g_343, &g_343}, {&g_343, &g_343, &g_343, &g_343, &g_343, &g_343, &g_343}}, {{&g_343, &g_343, &g_343, &g_343, &g_343, &g_343, &g_343}, {&g_343, &g_343, &g_343, &g_343, &g_343, &g_343, &g_343}, {&g_343, &g_343, &g_343, &g_343, &g_343, &g_343, &g_343}, {&g_343, &g_343, &g_343, &g_343, &g_343, &g_343, &g_343}, {&g_343, &g_343, &g_343, &g_343, &g_343, &g_343, &g_343}, {&g_343, &g_343, &g_343, &g_343, &g_343, &g_343, &g_343}, {&g_343, &g_343, &g_343, &g_343, &g_343, &g_343, &g_343}}, {{&g_343, &g_343, &g_343, &g_343, &g_343, &g_343, &g_343}, {&g_343, &g_343, &g_343, &g_343, &g_343, &g_343, &g_343}, {&g_343, &g_343, &g_343, &g_343, &g_343, &g_343, &g_343}, {&g_343, &g_343, &g_343, &g_343, &g_343, &g_343, &g_343}, {&g_343, &g_343, &g_343, &g_343, &g_343, &g_343, &g_343}, {&g_343, &g_343, &g_343, &g_343, &g_343, &g_343, &g_343}, {&g_343, &g_343, &g_343, &g_343, &g_343, &g_343, &g_343}}};
            unsigned l_1867[8];
            unsigned l_1909 = 4294967292UL;
            char l_1920 = 0L;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 7; j++)
                    l_1808[i][j] = (-2L);
            }
            for (i = 0; i < 8; i++)
                l_1867[i] = 0x51C8F1E2L;
            (*l_1794) = (l_1719[l_1724] == (safe_mod_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u(p_27, 8)) | (1UL <= (*l_1720))), l_1806)));
            l_1810[2]++;
        }
        (*l_1794) ^= (*l_1720);
    }
    else
    {
        short **l_1936 = &g_428;
        unsigned char *l_1938 = &g_67;
        for (g_529 = (-19); (g_529 > 26); g_529 = safe_add_func_uint8_t_u_u(g_529, 4))
        {
            short ****l_1930 = (void*)0;
            int l_1939 = (-7L);
            for (g_13 = 0; (g_13 <= 0); g_13 += 1)
            {
                short l_1933 = 7L;
                int *l_1934[4];
                short **l_1937 = &g_428;
                int i;
                for (i = 0; i < 4; i++)
                    l_1934[i] = &g_92[5];
                (*p_28) |= ((safe_sub_func_uint16_t_u_u(0x5736L, ((void*)0 == l_1930))) >= ((*g_1249) = (safe_add_func_uint16_t_u_u(l_1933, p_27))));
                for (l_1723 = 0; (l_1723 <= 0); l_1723 += 1)
                {
                    int *l_1935 = &g_812;
                    int i, j, k;
                    (*g_1640) = 0L;
                    p_25 = func_29(l_1934[1], ((*l_1726) = 0x03L), func_29(func_29((l_1935 = &g_686[5][3]), g_116[(g_13 + 2)][l_1723][g_13], func_44(((l_1936 != l_1937) ^ (0xF7F4L != (&g_1842 == (void*)0))), l_1938)), l_1939, p_28));
                    if ((*p_28))
                        break;
                    for (g_271 = 5; (g_271 >= 0); g_271 -= 1)
                    {
                        int i;
                        if (g_92[(g_13 + 5)])
                            break;
                        (*p_28) = 0x65B15C35L;
                    }
                }
            }
            if ((*p_25))
                break;
        }
    }
    for (l_1809 = 0; (l_1809 < 22); l_1809 = safe_add_func_int16_t_s_s(l_1809, 5))
    {
        int l_1946 = 0x427DAF0EL;
        int l_1949 = 0x947AFAFEL;
        (*g_1687) = p_28;
        for (g_271 = 0; (g_271 > 0); g_271++)
        {
            short ** const ***l_1944 = (void*)0;
            int *l_1945 = &g_812;
            (*l_1739) = (((void*)0 != l_1944) || func_47(l_1945, l_1946, p_27, &l_1810[5], ((*g_1687) = &g_119)));
            if ((*p_28))
                continue;
            return p_28;
        }
        (*g_1910) |= (safe_sub_func_int8_t_s_s((*g_1249), l_1946));
        l_1949 &= (65534UL >= l_1946);
    }
    return p_26;
}







static int * func_29(int * p_30, unsigned char p_31, int * p_32)
{
    int l_1644 = 0L;
    char l_1645 = 6L;
    unsigned *l_1646 = (void*)0;
    unsigned *l_1647[5] = {(void*)0, &g_529, (void*)0, &g_529, (void*)0};
    int l_1648 = 0xCFA0B696L;
    int l_1649 = 0xF8DD201FL;
    const unsigned ***l_1658 = (void*)0;
    const unsigned ****l_1657 = &l_1658;
    unsigned char * const l_1665 = &g_43;
    unsigned char *l_1666 = &g_684;
    int i;
    l_1649 |= (((safe_add_func_uint8_t_u_u(p_31, (l_1644 | (((-1L) && p_31) || p_31)))) < (l_1645 & (l_1645 ^ (l_1648 = l_1645)))) && 0x5AL);
    for (l_1648 = 17; (l_1648 > 11); l_1648 = safe_sub_func_uint16_t_u_u(l_1648, 1))
    {
        unsigned ****l_1656 = (void*)0;
        short *l_1659[8] = {&g_84[5], &g_1213, &g_84[5], &g_1213, &g_84[5], &g_1213, &g_84[5], &g_1213};
        int *l_1662 = &g_92[3];
        int l_1663[7][10] = {{0xC61F3CC8L, 0x85225327L, 0L, 0x90CAC0A2L, 0L, 0x85225327L, 0xC61F3CC8L, 8L, 9L, 0x999341C3L}, {0xC61F3CC8L, 0x85225327L, 0L, 0x90CAC0A2L, 0L, 0x85225327L, 0xC61F3CC8L, 8L, 9L, 0x999341C3L}, {0xC61F3CC8L, 0x85225327L, 0L, 0x90CAC0A2L, 0L, 0x85225327L, 0xC61F3CC8L, 8L, 9L, 0x999341C3L}, {0xC61F3CC8L, 0x85225327L, 0L, 0x90CAC0A2L, 0L, 0x85225327L, 0xC61F3CC8L, 8L, 9L, 0x999341C3L}, {0xC61F3CC8L, 0x85225327L, 0L, 0x90CAC0A2L, 0L, 0x85225327L, 0xC61F3CC8L, 8L, 9L, 0x999341C3L}, {0xC61F3CC8L, 0x85225327L, 0L, 0x90CAC0A2L, 0L, 0x85225327L, 0xC61F3CC8L, 8L, 9L, 0x999341C3L}, {0xC61F3CC8L, 0x85225327L, 0L, 0x90CAC0A2L, 0L, 0x85225327L, 0xC61F3CC8L, 8L, 9L, 0x999341C3L}};
        unsigned char * const l_1664 = &g_43;
        unsigned char *l_1667[6][9] = {{&g_43, &g_43, (void*)0, &g_653, &g_653, (void*)0, &g_653, &g_653, (void*)0}, {&g_43, &g_43, (void*)0, &g_653, &g_653, (void*)0, &g_653, &g_653, (void*)0}, {&g_43, &g_43, (void*)0, &g_653, &g_653, (void*)0, &g_653, &g_653, (void*)0}, {&g_43, &g_43, (void*)0, &g_653, &g_653, (void*)0, &g_653, &g_653, (void*)0}, {&g_43, &g_43, (void*)0, &g_653, &g_653, (void*)0, &g_653, &g_653, (void*)0}, {&g_43, &g_43, (void*)0, &g_653, &g_653, (void*)0, &g_653, &g_653, (void*)0}};
        short l_1668 = 0x4B03L;
        int *l_1669 = &g_116[2][5][0];
        unsigned char *l_1670 = &g_684;
        int i, j;
        if (((safe_add_func_uint16_t_u_u(65527UL, (+func_75((safe_add_func_int16_t_s_s(((l_1649 = (l_1656 != l_1657)) >= p_31), ((l_1667[5][6] = func_60((+((*l_1669) = (safe_mod_func_uint16_t_u_u((((0x5E0D26D7L & ((func_75((func_47(p_32, p_31, func_47((l_1662 = (void*)0), p_31, l_1663[6][1], l_1664, &l_1648), l_1665, &l_1648) > 7L), l_1666, l_1666, l_1667[3][1]) > l_1644) != l_1668)) <= p_31) == l_1648), l_1663[6][1])))), (*g_66), l_1666, p_30, l_1644)) == l_1665))), l_1666, l_1666, l_1670)))) && 0L))
        {
            (*p_32) = ((safe_add_func_int32_t_s_s((*p_32), 3UL)) || p_31);
        }
        else
        {
            for (g_1242 = 0; (g_1242 > 6); g_1242++)
            {
                unsigned l_1675 = 0UL;
                (*g_1640) = l_1675;
                return p_32;
            }
        }
        return &g_119;
    }
    return p_32;
}







static int * func_33(char p_34, int * p_35, short p_36)
{
    unsigned l_829 = 0x216B806FL;
    int l_830 = 9L;
    unsigned char *l_831 = (void*)0;
    int l_835[5];
    const unsigned char *l_853 = &g_178;
    const unsigned char **l_852 = &l_853;
    const unsigned char ***l_851 = &l_852;
    short **l_890 = (void*)0;
    int l_940 = 0xDBC336EAL;
    char l_954 = 0L;
    int *l_964 = &g_92[4];
    unsigned l_979 = 0x0E47C915L;
    const short l_984 = 0x6EB3L;
    unsigned char ***l_992 = (void*)0;
    unsigned short **l_1019 = &g_1018[1];
    unsigned l_1037 = 4294967287UL;
    int *l_1059 = &g_802;
    unsigned l_1065 = 0x7AFB7869L;
    unsigned char **l_1072[2][1];
    char l_1085 = 0x08L;
    int **l_1090[8][4][8] = {{{(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}, {(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}, {(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}, {(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}}, {{(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}, {(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}, {(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}, {(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}}, {{(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}, {(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}, {(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}, {(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}}, {{(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}, {(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}, {(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}, {(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}}, {{(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}, {(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}, {(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}, {(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}}, {{(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}, {(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}, {(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}, {(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}}, {{(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}, {(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}, {(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}, {(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}}, {{(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}, {(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}, {(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}, {(void*)0, &g_182, &g_791[0][5], &l_964, &g_182, &l_1059, &g_791[0][5], &l_1059}}};
    unsigned l_1106 = 1UL;
    int l_1148 = 1L;
    unsigned char *l_1202 = &g_67;
    unsigned char *l_1267[5][2] = {{&g_43, &g_67}, {&g_43, &g_67}, {&g_43, &g_67}, {&g_43, &g_67}, {&g_43, &g_67}};
    unsigned char l_1280[7];
    unsigned l_1281[3][8] = {{0x74439A68L, 0UL, 4UL, 0UL, 0x74439A68L, 0UL, 4UL, 0UL}, {0x74439A68L, 0UL, 4UL, 0UL, 0x74439A68L, 0UL, 4UL, 0UL}, {0x74439A68L, 0UL, 4UL, 0UL, 0x74439A68L, 0UL, 4UL, 0UL}};
    unsigned short l_1303 = 0xF2D5L;
    unsigned *l_1309 = &g_529;
    unsigned **l_1308[4];
    int l_1310 = 0x7591D2A5L;
    const unsigned l_1329 = 1UL;
    unsigned l_1365 = 4294967288UL;
    unsigned short l_1380 = 0UL;
    unsigned char *l_1409 = &g_67;
    int l_1431 = 0xA08F422BL;
    int *l_1458[1][10][3] = {{{&g_119, &l_835[2], &g_686[0][2]}, {&g_119, &l_835[2], &g_686[0][2]}, {&g_119, &l_835[2], &g_686[0][2]}, {&g_119, &l_835[2], &g_686[0][2]}, {&g_119, &l_835[2], &g_686[0][2]}, {&g_119, &l_835[2], &g_686[0][2]}, {&g_119, &l_835[2], &g_686[0][2]}, {&g_119, &l_835[2], &g_686[0][2]}, {&g_119, &l_835[2], &g_686[0][2]}, {&g_119, &l_835[2], &g_686[0][2]}}};
    int l_1462 = 0x833FE0A7L;
    int l_1463 = 1L;
    int *l_1545[3][7][5] = {{{&g_802, (void*)0, (void*)0, &g_802, &g_92[5]}, {&g_802, (void*)0, (void*)0, &g_802, &g_92[5]}, {&g_802, (void*)0, (void*)0, &g_802, &g_92[5]}, {&g_802, (void*)0, (void*)0, &g_802, &g_92[5]}, {&g_802, (void*)0, (void*)0, &g_802, &g_92[5]}, {&g_802, (void*)0, (void*)0, &g_802, &g_92[5]}, {&g_802, (void*)0, (void*)0, &g_802, &g_92[5]}}, {{&g_802, (void*)0, (void*)0, &g_802, &g_92[5]}, {&g_802, (void*)0, (void*)0, &g_802, &g_92[5]}, {&g_802, (void*)0, (void*)0, &g_802, &g_92[5]}, {&g_802, (void*)0, (void*)0, &g_802, &g_92[5]}, {&g_802, (void*)0, (void*)0, &g_802, &g_92[5]}, {&g_802, (void*)0, (void*)0, &g_802, &g_92[5]}, {&g_802, (void*)0, (void*)0, &g_802, &g_92[5]}}, {{&g_802, (void*)0, (void*)0, &g_802, &g_92[5]}, {&g_802, (void*)0, (void*)0, &g_802, &g_92[5]}, {&g_802, (void*)0, (void*)0, &g_802, &g_92[5]}, {&g_802, (void*)0, (void*)0, &g_802, &g_92[5]}, {&g_802, (void*)0, (void*)0, &g_802, &g_92[5]}, {&g_802, (void*)0, (void*)0, &g_802, &g_92[5]}, {&g_802, (void*)0, (void*)0, &g_802, &g_92[5]}}};
    char l_1549 = 0x13L;
    unsigned l_1573[8] = {0x7A11C3EDL, 0x7A11C3EDL, 0xF699E49EL, 0x7A11C3EDL, 0x7A11C3EDL, 0xF699E49EL, 0x7A11C3EDL, 0x7A11C3EDL};
    int l_1581 = (-2L);
    unsigned short l_1582 = 0xA6CCL;
    int l_1614[2];
    int l_1634 = 0L;
    int l_1635[9] = {1L, 0xE6441AE5L, 1L, 0xE6441AE5L, 1L, 0xE6441AE5L, 1L, 0xE6441AE5L, 1L};
    unsigned char l_1636 = 0x25L;
    int *l_1639[8] = {(void*)0, &g_3, (void*)0, &g_3, (void*)0, &g_3, (void*)0, &g_3};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_835[i] = 1L;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_1072[i][j] = &g_277;
    }
    for (i = 0; i < 7; i++)
        l_1280[i] = 0xC9L;
    for (i = 0; i < 4; i++)
        l_1308[i] = &l_1309;
    for (i = 0; i < 2; i++)
        l_1614[i] = 9L;
    for (g_812 = 0; (g_812 > 1); g_812 = safe_add_func_int32_t_s_s(g_812, 5))
    {
        unsigned char l_834[5][2];
        int l_839[2];
        unsigned *l_845[10][6] = {{&g_13, &g_13, &g_13, &g_529, &g_13, &g_529}, {&g_13, &g_13, &g_13, &g_529, &g_13, &g_529}, {&g_13, &g_13, &g_13, &g_529, &g_13, &g_529}, {&g_13, &g_13, &g_13, &g_529, &g_13, &g_529}, {&g_13, &g_13, &g_13, &g_529, &g_13, &g_529}, {&g_13, &g_13, &g_13, &g_529, &g_13, &g_529}, {&g_13, &g_13, &g_13, &g_529, &g_13, &g_529}, {&g_13, &g_13, &g_13, &g_529, &g_13, &g_529}, {&g_13, &g_13, &g_13, &g_529, &g_13, &g_529}, {&g_13, &g_13, &g_13, &g_529, &g_13, &g_529}};
        unsigned char ***l_855 = &g_281[0];
        unsigned short *l_885 = &g_405;
        unsigned l_888 = 0x894BEDE1L;
        int l_909 = (-1L);
        char l_911 = 1L;
        int **l_956 = &g_791[0][5];
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 2; j++)
                l_834[i][j] = 1UL;
        }
        for (i = 0; i < 2; i++)
            l_839[i] = 0x8CF220C0L;
        for (g_577 = 0; (g_577 == 37); g_577++)
        {
            unsigned l_823[6] = {0x50A0B6D8L, 0x50A0B6D8L, 1UL, 0x50A0B6D8L, 0x50A0B6D8L, 1UL};
            unsigned char *l_836 = &g_684;
            char *l_837[3];
            int l_838[4] = {0x19BE3C5BL, 1L, 0x19BE3C5BL, 1L};
            unsigned *l_844 = (void*)0;
            const unsigned char *l_850 = &g_653;
            const unsigned char **l_849 = &l_850;
            const unsigned char ***l_848[6][8][5] = {{{&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}}, {{&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}}, {{&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}}, {{&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}}, {{&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}}, {{&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}, {&l_849, &l_849, &l_849, &l_849, &l_849}}};
            unsigned short *l_882 = &g_179[5][1];
            unsigned char **l_893 = &g_66;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_837[i] = &g_267;
            l_823[2]--;
            if (((l_839[1] ^= (((safe_unary_minus_func_int32_t_s((g_812 || ((l_838[2] &= func_75((l_830 = (l_829 = (safe_add_func_uint16_t_u_u(g_12, (p_34 < 0x6F9BL))))), l_831, func_60(((-4L) || g_116[2][9][0]), (safe_mod_func_int8_t_s_s((p_36 & l_834[2][0]), l_835[2])), l_831, &g_812, l_835[2]), l_836)) & 0x0BL)))) > 1UL) ^ p_34)) >= l_834[2][0]))
            {
                (*p_35) &= ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((-1L), 4)), 2)) || ((l_844 == l_845[1][2]) | ((-1L) == 0UL)));
            }
            else
            {
                unsigned char *l_858 = &l_834[2][0];
                int l_859 = 0x8B027493L;
                unsigned short *l_884 = &g_179[4][4];
                if (func_75((safe_sub_func_uint32_t_u_u(((g_854 = (l_851 = l_848[0][2][0])) != l_855), (0xE976L <= (safe_sub_func_int32_t_s_s(((246UL > (*g_66)) != (l_838[2] = func_47(func_44(l_830, l_858), l_834[4][1], l_859, l_831, &g_802))), l_823[0]))))), l_858, l_837[2], l_837[0]))
                {
                    int l_876 = 0x44739A30L;
                    unsigned char **l_877 = &g_274;
                    (*p_35) = (safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((~(!(0xA8EAED08L == (!func_47(func_44(l_830, ((*l_877) = func_60(l_834[2][0], (0xEA54CEDCL < (safe_lshift_func_uint8_t_u_s(((safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((((((safe_lshift_func_int16_t_s_s((-1L), 1)) & (p_34 <= (safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(p_34, 5UL)), (p_34 <= p_36))))) > 0x07L) || l_859) <= g_179[1][1]), 0xF251L)), 0L)) & l_876), p_34))), l_831, p_35, g_267))), g_92[5], p_34, l_858, &g_3))))), p_34)), l_876));
                    if ((*p_35))
                        continue;
                }
                else
                {
                    int **l_878 = &g_791[0][8];
                    unsigned char *l_886 = &g_653;
                    unsigned l_887 = 4294967295UL;
                    short *l_892 = &g_88;
                    unsigned char *l_896 = &g_684;
                    (*l_878) = &l_839[0];
                    for (g_67 = (-12); (g_67 == 25); g_67 = safe_add_func_uint16_t_u_u(g_67, 9))
                    {
                        int *l_881 = &g_686[0][2];
                        l_838[1] = (!((*p_35) = (*p_35)));
                        l_881 = &g_119;
                        (*l_855) = &g_591;
                    }
                    for (g_3 = 0; (g_3 <= 5); g_3 += 1)
                    {
                        unsigned short **l_883[9][4] = {{&l_882, &l_882, &l_882, &l_882}, {&l_882, &l_882, &l_882, &l_882}, {&l_882, &l_882, &l_882, &l_882}, {&l_882, &l_882, &l_882, &l_882}, {&l_882, &l_882, &l_882, &l_882}, {&l_882, &l_882, &l_882, &l_882}, {&l_882, &l_882, &l_882, &l_882}, {&l_882, &l_882, &l_882, &l_882}, {&l_882, &l_882, &l_882, &l_882}};
                        int i, j;
                        (*p_35) = (l_839[1] ^ ((p_36 || (((*l_836) = ((l_884 = l_882) == l_885)) != (&g_281[0] != (void*)0))) & (((g_84[4] | ((0UL || func_75((p_36 != p_34), l_831, l_858, l_886)) ^ g_805)) <= l_838[3]) < l_887)));
                        if ((*p_35))
                            continue;
                    }
                    if (l_823[2])
                    {
                        short ** const l_889 = &g_428;
                        unsigned char *l_891 = &g_653;
                        unsigned char **l_894 = (void*)0;
                        unsigned char **l_895[1][9][9] = {{{&l_891, &l_891, &l_886, &g_274, (void*)0, &l_858, (void*)0, &l_891, &g_277}, {&l_891, &l_891, &l_886, &g_274, (void*)0, &l_858, (void*)0, &l_891, &g_277}, {&l_891, &l_891, &l_886, &g_274, (void*)0, &l_858, (void*)0, &l_891, &g_277}, {&l_891, &l_891, &l_886, &g_274, (void*)0, &l_858, (void*)0, &l_891, &g_277}, {&l_891, &l_891, &l_886, &g_274, (void*)0, &l_858, (void*)0, &l_891, &g_277}, {&l_891, &l_891, &l_886, &g_274, (void*)0, &l_858, (void*)0, &l_891, &g_277}, {&l_891, &l_891, &l_886, &g_274, (void*)0, &l_858, (void*)0, &l_891, &g_277}, {&l_891, &l_891, &l_886, &g_274, (void*)0, &l_858, (void*)0, &l_891, &g_277}, {&l_891, &l_891, &l_886, &g_274, (void*)0, &l_858, (void*)0, &l_891, &g_277}}};
                        int i, j, k;
                        (*l_878) = &l_838[3];
                        l_830 ^= ((*p_35) = l_888);
                        l_839[0] ^= func_75(((l_889 == l_890) | 0xA90276DBL), l_891, (l_886 = func_60((((void*)0 != l_892) && p_34), ((&l_886 != (l_893 = (*l_855))) < p_36), l_886, &g_686[0][6], l_823[5])), l_896);
                    }
                    else
                    {
                        int *l_897 = &l_839[1];
                        (*l_897) |= (*p_35);
                        g_791[0][4] = &g_812;
                    }
                }
            }
            if ((*p_35))
            {
                for (g_684 = 0; (g_684 <= 51); g_684 = safe_add_func_int16_t_s_s(g_684, 2))
                {
                    int **l_900 = &g_791[0][5];
                    (*l_900) = &l_838[2];
                }
            }
            else
            {
                int l_904 = 0L;
                int l_905 = 0x352F633CL;
                int l_906 = 3L;
                int l_907 = (-1L);
                int l_908 = 0L;
                int l_910 = 0x053B4128L;
                int l_912 = 0x3906B507L;
                int l_913 = 0x82F5A134L;
                unsigned l_914 = 4294967286UL;
                unsigned char *l_941 = (void*)0;
                int **l_942[8][5][6] = {{{&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}}, {{&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}}, {{&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}}, {{&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}}, {{&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}}, {{&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}}, {{&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}}, {{&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}, {&g_791[0][3], &g_791[0][5], &g_791[0][6], &g_791[0][5], &g_182, &g_791[0][5]}}};
                short *l_947 = &g_84[4];
                short l_955 = 8L;
                int i, j, k;
                if ((&g_791[0][5] != (void*)0))
                {
                    int *l_901 = &l_835[1];
                    int *l_902 = &g_92[6];
                    int *l_903[10][7] = {{&g_802, &g_802, &g_3, &g_802, &g_802, &g_3, &g_802}, {&g_802, &g_802, &g_3, &g_802, &g_802, &g_3, &g_802}, {&g_802, &g_802, &g_3, &g_802, &g_802, &g_3, &g_802}, {&g_802, &g_802, &g_3, &g_802, &g_802, &g_3, &g_802}, {&g_802, &g_802, &g_3, &g_802, &g_802, &g_3, &g_802}, {&g_802, &g_802, &g_3, &g_802, &g_802, &g_3, &g_802}, {&g_802, &g_802, &g_3, &g_802, &g_802, &g_3, &g_802}, {&g_802, &g_802, &g_3, &g_802, &g_802, &g_3, &g_802}, {&g_802, &g_802, &g_3, &g_802, &g_802, &g_3, &g_802}, {&g_802, &g_802, &g_3, &g_802, &g_802, &g_3, &g_802}};
                    int i, j;
                    ++l_914;
                }
                else
                {
                    unsigned char *l_919[2];
                    int *l_935 = &l_905;
                    int *l_936[2][3];
                    unsigned l_937 = 0xABCFABB3L;
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_919[i] = &g_67;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_936[i][j] = (void*)0;
                    }
                    l_912 &= (safe_rshift_func_int16_t_s_s(g_802, 10));
                    if (l_823[2])
                        break;
                    for (g_267 = 1; (g_267 >= 0); g_267 -= 1)
                    {
                        int **l_920 = &g_182;
                        int i;
                        (*l_920) = func_44(l_823[(g_267 + 2)], l_919[0]);
                        (**l_920) = (safe_sub_func_int16_t_s_s(p_34, ((l_830 = (safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(p_34, ((*l_885) ^= ((safe_mod_func_uint16_t_u_u(g_802, 0x80E9L)) < func_47(p_35, (0UL == (safe_rshift_func_uint8_t_u_s((l_835[4] | ((*g_182) == (safe_rshift_func_uint8_t_u_s((*g_591), 6)))), l_823[2]))), p_34, l_836, &g_686[0][4]))))), l_838[2])), g_178))) < p_34)));
                        return &g_802;
                    }
                    l_937++;
                }
                p_35 = func_44(l_940, l_941);
                l_838[2] = ((*p_35) = ((safe_add_func_int8_t_s_s(p_34, (safe_lshift_func_int16_t_s_u(((*l_947) = p_34), 10)))) && ((g_267 = ((safe_rshift_func_uint8_t_u_u(((*g_66) = l_823[3]), 1)) > 0xAAFFL)) && ((((safe_rshift_func_int8_t_s_u((((246UL != (safe_sub_func_uint16_t_u_u(((void*)0 == &l_885), ((*l_852) == l_941)))) != l_835[2]) | (*p_35)), p_34)) == (*p_35)) && p_34) && l_954))));
                if (l_955)
                    continue;
            }
            (*p_35) ^= l_838[3];
        }
        (*l_956) = &l_835[2];
    }
    if (l_835[2])
    {
        int *l_962 = &g_3;
        int *l_968 = (void*)0;
        int *l_969 = &l_830;
        unsigned *l_974 = &g_13;
        if (l_830)
        {
            (*p_35) &= 0L;
        }
        else
        {
            int **l_957 = &g_182;
            short **l_958[10][2] = {{&g_428, &g_428}, {&g_428, &g_428}, {&g_428, &g_428}, {&g_428, &g_428}, {&g_428, &g_428}, {&g_428, &g_428}, {&g_428, &g_428}, {&g_428, &g_428}, {&g_428, &g_428}, {&g_428, &g_428}};
            int *l_965 = &l_830;
            int i, j;
            (*l_957) = (void*)0;
            for (g_802 = 0; (g_802 >= 0); g_802 -= 1)
            {
                int *l_963[6] = {&g_802, &g_92[4], &g_802, &g_92[4], &g_802, &g_92[4]};
                int i;
                l_958[8][1] = l_958[2][0];
                for (p_34 = 0; (p_34 <= 0); p_34 += 1)
                {
                    int i, j;
                    for (l_954 = 0; (l_954 >= 0); l_954 -= 1)
                    {
                        int i, j;
                        g_791[p_34][p_34] = (*l_957);
                    }
                    if ((*p_35))
                        continue;
                    (*p_35) = ((safe_sub_func_uint16_t_u_u(g_577, p_34)) & (+(g_961 = 1L)));
                }
                for (p_34 = 0; (p_34 >= 0); p_34 -= 1)
                {
                    int i, j;
                    g_791[g_802][(p_34 + 7)] = l_962;
                    (*p_35) ^= 0x171FE2D5L;
                    l_964 = (l_963[3] = p_35);
                    (*l_962) ^= (!(*p_35));
                }
                if ((*l_962))
                {
                    for (g_653 = 0; (g_653 <= 6); g_653 += 1)
                    {
                        return p_35;
                    }
                }
                else
                {
                    if ((*p_35))
                        break;
                }
            }
            for (g_43 = 0; g_43 < 1; g_43 += 1)
            {
                for (g_67 = 0; g_67 < 9; g_67 += 1)
                {
                    g_791[g_43][g_67] = &g_686[0][6];
                }
            }
            (*l_965) ^= ((g_13 || g_686[0][6]) == (*l_962));
        }
        (*l_964) = ((g_88 ^= ((safe_lshift_func_int8_t_s_u((((*l_962) ^ (((*l_969) |= (*p_35)) > 0xE8BD1E74L)) ^ p_34), 5)) != ((&g_281[0] != &g_281[0]) >= (safe_mod_func_int8_t_s_s(g_686[0][0], ((*l_964) | (!p_36))))))) > 0x4477L);
        (*l_962) = (safe_add_func_int32_t_s_s((&l_835[0] != &l_835[2]), ((*l_974) = 0xCA7B328EL)));
    }
    else
    {
        unsigned char * const l_980 = &g_67;
        const int l_983 = 0xD80C0FBEL;
        int l_1001 = 0x39BA1E28L;
        int l_1003 = (-1L);
        int l_1005[7] = {0x0E152B1EL, 0x0E152B1EL, 1L, 0x0E152B1EL, 0x0E152B1EL, 1L, 0x0E152B1EL};
        char l_1010 = (-1L);
        unsigned char *l_1031 = &g_653;
        short l_1036 = 0xAEE3L;
        int i;
        for (g_3 = (-9); (g_3 == (-25)); --g_3)
        {
            unsigned short l_981 = 0xA2FEL;
            int *l_982 = &g_812;
            (*p_35) = (((safe_sub_func_uint16_t_u_u((&l_852 != &g_281[0]), (*l_964))) >= (func_47(p_35, l_979, p_34, l_980, (l_982 = func_44(((*p_35) = (0x5FB0D618L != (func_47(&l_835[2], l_981, (*l_964), l_831, p_35) > 0L))), l_831))) < l_983)) < p_34);
            if ((*l_982))
                continue;
        }
        if (l_984)
        {
            unsigned char ** const *l_991 = (void*)0;
            int l_994[5][6][6] = {{{1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}, {1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}, {1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}, {1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}, {1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}, {1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}}, {{1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}, {1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}, {1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}, {1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}, {1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}, {1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}}, {{1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}, {1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}, {1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}, {1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}, {1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}, {1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}}, {{1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}, {1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}, {1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}, {1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}, {1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}, {1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}}, {{1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}, {1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}, {1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}, {1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}, {1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}, {1L, 0xDB30F319L, 1L, (-10L), 0x8722B8D5L, 0x2313B0B8L}}};
            short l_1027 = (-1L);
            int **l_1040[2][9] = {{&l_964, &l_964, &g_791[0][5], &l_964, &l_964, (void*)0, &l_964, &l_964, &g_791[0][5]}, {&l_964, &l_964, &g_791[0][5], &l_964, &l_964, (void*)0, &l_964, &l_964, &g_791[0][5]}};
            unsigned char *l_1050 = (void*)0;
            char *l_1051 = &g_12;
            unsigned *l_1056 = &g_529;
            int i, j, k;
            for (g_653 = (-8); (g_653 == 49); g_653 = safe_add_func_uint8_t_u_u(g_653, 2))
            {
                int l_1002 = 4L;
                int l_1004 = (-9L);
                int l_1006 = 3L;
                int l_1008 = 0xD1DFD3D0L;
                int l_1009 = 8L;
                int l_1011 = 3L;
                int l_1012 = 0x8EC92BD9L;
                int l_1013[8] = {1L, 1L, 1L, 1L, 1L, 1L, 1L, 1L};
                unsigned char *l_1032[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1032[i] = &g_684;
                for (l_829 = 0; (l_829 <= 0); l_829 += 1)
                {
                    unsigned char ****l_993 = &l_992;
                    int l_1007[9] = {0x23708B8BL, 0x8CE7523BL, 0x23708B8BL, 0x8CE7523BL, 0x23708B8BL, 0x8CE7523BL, 0x23708B8BL, 0x8CE7523BL, 0x23708B8BL};
                    unsigned char l_1014 = 0x51L;
                    const unsigned *l_1035[2];
                    const unsigned **l_1034 = &l_1035[0];
                    const unsigned ***l_1033 = &l_1034;
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_1035[i] = &g_961;
                    (*l_964) &= (g_686[(l_829 + 3)][l_829] >= (p_34 <= (l_994[4][3][3] |= (safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((l_991 == ((*l_993) = l_992)), p_34)), l_983)))));
                    if (((*p_35) = (safe_sub_func_uint32_t_u_u(((-1L) && p_34), (-4L)))))
                    {
                        int l_997 = 0x1BDEED0CL;
                        int *l_998 = &g_686[(l_829 + 3)][(l_829 + 4)];
                        int *l_999 = &l_830;
                        int *l_1000[10][3][7] = {{{&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}, {&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}, {&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}}, {{&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}, {&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}, {&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}}, {{&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}, {&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}, {&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}}, {{&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}, {&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}, {&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}}, {{&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}, {&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}, {&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}}, {{&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}, {&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}, {&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}}, {{&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}, {&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}, {&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}}, {{&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}, {&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}, {&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}}, {{&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}, {&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}, {&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}}, {{&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}, {&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}, {&l_994[1][3][3], &g_686[(l_829 + 3)][(l_829 + 3)], &g_686[(l_829 + 3)][l_829], (void*)0, &l_994[4][1][5], &g_686[(l_829 + 3)][(l_829 + 4)], &g_686[(l_829 + 3)][l_829]}}};
                        int i, j, k;
                        l_1014++;
                        return &g_92[5];
                    }
                    else
                    {
                        unsigned short ***l_1020 = (void*)0;
                        unsigned short ***l_1021 = &l_1019;
                        int *l_1023 = &l_1001;
                        int *l_1024 = &l_1007[2];
                        int *l_1025[6] = {&l_1003, &l_1007[8], &l_1003, &l_1007[8], &l_1003, &l_1007[8]};
                        int l_1026 = (-1L);
                        int i;
                        (*l_964) |= (g_1017 != (g_1022 = ((*l_1021) = l_1019)));
                        g_1028--;
                        (*p_35) ^= (func_75(p_34, l_1031, l_1032[0], l_1032[2]) ^ (l_1033 != (void*)0));
                        l_1037++;
                    }
                    if ((*p_35))
                        continue;
                }
                if ((*p_35))
                    continue;
            }
            l_964 = &l_994[4][3][3];
            l_1003 |= (l_835[0] &= ((func_75(p_34, func_60(((safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(func_75((((&g_854 != &l_991) | (((-7L) != (safe_lshift_func_int8_t_s_s(0xEDL, (safe_add_func_int16_t_s_s(((*p_35) && p_34), (*l_964)))))) || ((*l_980) = (*l_964)))) && (*l_964)), l_831, g_1049, l_1031), p_36)), (*l_964))) >= (*p_35)), p_34, l_1050, &l_830, g_178), l_831, l_1031) ^ p_36) != p_34));
            l_1005[4] &= (func_47(&l_1005[1], (*l_964), (0L >= ((((((*l_1051) = p_36) == ((*g_66) = (func_47(&l_835[2], p_36, ((*l_1056) |= (safe_sub_func_uint32_t_u_u(func_47((g_791[0][5] = func_44((safe_add_func_int8_t_s_s(((*l_964) != p_36), (*g_591))), l_1031)), (*l_964), l_1036, l_1050, &g_92[5]), (*p_35)))), l_1031, p_35) == 0xACL))) & (*p_35)) & l_1010) < p_36)), l_980, p_35) >= g_961);
        }
        else
        {
            unsigned l_1062[3];
            int **l_1066 = &l_1059;
            int i;
            for (i = 0; i < 3; i++)
                l_1062[i] = 0x667D750DL;
            (*p_35) = (safe_mod_func_int8_t_s_s(func_47(l_1059, (safe_sub_func_int32_t_s_s(l_1062[2], (safe_rshift_func_uint8_t_u_s(0UL, 2)))), (*l_1059), l_831, func_44(l_1062[2], l_1031)), l_1065));
            (*l_1066) = &g_92[5];
        }
        (*p_35) = ((safe_unary_minus_func_uint32_t_u(l_983)) == (safe_sub_func_int8_t_s_s((g_12 = ((g_686[1][2] < 0xC0L) && p_36)), ((*g_591)--))));
    }
    if ((+((*p_35) = (l_1072[1][0] != &l_853))))
    {
        int *l_1084 = &g_686[0][6];
        int l_1092 = 0x6D8ED8E3L;
        unsigned char *l_1100 = &g_653;
        int l_1134 = 0x0FCF2469L;
        unsigned char * const *l_1141[10][10] = {{&g_591, (void*)0, &g_591, &g_1049, &g_1049, &g_591, (void*)0, &g_591, &g_591, &g_591}, {&g_591, (void*)0, &g_591, &g_1049, &g_1049, &g_591, (void*)0, &g_591, &g_591, &g_591}, {&g_591, (void*)0, &g_591, &g_1049, &g_1049, &g_591, (void*)0, &g_591, &g_591, &g_591}, {&g_591, (void*)0, &g_591, &g_1049, &g_1049, &g_591, (void*)0, &g_591, &g_591, &g_591}, {&g_591, (void*)0, &g_591, &g_1049, &g_1049, &g_591, (void*)0, &g_591, &g_591, &g_591}, {&g_591, (void*)0, &g_591, &g_1049, &g_1049, &g_591, (void*)0, &g_591, &g_591, &g_591}, {&g_591, (void*)0, &g_591, &g_1049, &g_1049, &g_591, (void*)0, &g_591, &g_591, &g_591}, {&g_591, (void*)0, &g_591, &g_1049, &g_1049, &g_591, (void*)0, &g_591, &g_591, &g_591}, {&g_591, (void*)0, &g_591, &g_1049, &g_1049, &g_591, (void*)0, &g_591, &g_591, &g_591}, {&g_591, (void*)0, &g_591, &g_1049, &g_1049, &g_591, (void*)0, &g_591, &g_591, &g_591}};
        unsigned char * const **l_1140 = &l_1141[8][1];
        unsigned *l_1156 = &l_1065;
        unsigned **l_1155[9][10][2] = {{{&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}}, {{&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}}, {{&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}}, {{&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}}, {{&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}}, {{&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}}, {{&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}}, {{&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}}, {{&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}, {&l_1156, (void*)0}}};
        unsigned ** const *l_1166 = &g_343;
        unsigned ** const **l_1165 = &l_1166;
        int l_1172 = 1L;
        short **l_1215 = &g_428;
        short **l_1217 = &g_428;
        unsigned short l_1218 = 65535UL;
        int *l_1230 = &g_119;
        int l_1238[2];
        char **l_1247 = (void*)0;
        unsigned char *l_1342 = (void*)0;
        int l_1422 = (-2L);
        unsigned char *l_1440 = &g_684;
        int *l_1456[2][4][5] = {{{&l_1238[0], &g_686[0][6], (void*)0, &g_92[3], &g_92[3]}, {&l_1238[0], &g_686[0][6], (void*)0, &g_92[3], &g_92[3]}, {&l_1238[0], &g_686[0][6], (void*)0, &g_92[3], &g_92[3]}, {&l_1238[0], &g_686[0][6], (void*)0, &g_92[3], &g_92[3]}}, {{&l_1238[0], &g_686[0][6], (void*)0, &g_92[3], &g_92[3]}, {&l_1238[0], &g_686[0][6], (void*)0, &g_92[3], &g_92[3]}, {&l_1238[0], &g_686[0][6], (void*)0, &g_92[3], &g_92[3]}, {&l_1238[0], &g_686[0][6], (void*)0, &g_92[3], &g_92[3]}}};
        short l_1461 = (-9L);
        unsigned char *l_1469 = &l_1280[1];
        unsigned short l_1506[10];
        int l_1517 = 0x45C0899AL;
        short l_1521 = (-1L);
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1238[i] = 0x27949CF5L;
        for (i = 0; i < 10; i++)
            l_1506[i] = 0xE5E6L;
        for (g_267 = 0; (g_267 != (-23)); --g_267)
        {
            unsigned l_1080 = 0xCA9075FBL;
            unsigned char * const l_1082 = &g_653;
            unsigned char *l_1083 = &g_67;
            int l_1104 = 0L;
            int l_1105[8] = {0L, 0L, 0x20BF7EC1L, 0L, 0L, 0x20BF7EC1L, 0L, 0L};
            char l_1109 = 0x9CL;
            unsigned char * const *l_1112 = &g_274;
            unsigned char * const **l_1111[9] = {(void*)0, &l_1112, (void*)0, &l_1112, (void*)0, &l_1112, (void*)0, &l_1112, (void*)0};
            const unsigned char ***l_1114 = &l_852;
            int *l_1139 = &g_119;
            int i;
            (*l_1059) ^= (*p_35);
            if ((*l_1059))
            {
                int l_1081 = 0xE7C23299L;
                int ***l_1089 = &g_758;
                int l_1091 = (-3L);
                int l_1093 = 8L;
                unsigned char * const l_1102 = &g_43;
                unsigned char *l_1116 = (void*)0;
                unsigned l_1137[9][6][4] = {{{9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}}, {{9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}}, {{9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}}, {{9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}}, {{9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}}, {{9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}}, {{9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}}, {{9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}}, {{9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}, {9UL, 1UL, 9UL, 1UL}}};
                int i, j, k;
                for (p_34 = 0; (p_34 <= (-10)); --p_34)
                {
                    int **l_1086 = &l_1084;
                    (*l_1086) = func_44(g_1077[0][1][3], func_60((safe_rshift_func_int16_t_s_s(l_1080, 15)), func_47(p_35, l_1081, l_1081, l_1082, &g_802), func_60(p_36, p_36, l_1083, &g_686[2][1], p_36), l_1084, l_1085));
                    for (g_1028 = 0; (g_1028 <= 0); g_1028 += 1)
                    {
                        return &g_686[0][6];
                    }
                    if ((*p_35))
                        break;
                }
                (*l_1059) |= ((0xF9L | p_36) == ((safe_add_func_uint16_t_u_u(p_36, (&g_791[0][5] == (l_1090[3][1][6] = &p_35)))) <= p_34));
                if ((l_1093 |= ((*l_1084) = (((*l_1059) |= (((+p_34) <= l_1091) >= l_1092)) && p_34))))
                {
                    int l_1099 = 0x717D7487L;
                    short *l_1101 = &g_84[2];
                    int l_1103 = 0x23FC30A7L;
                    (*l_1084) = (safe_sub_func_int16_t_s_s(func_47(func_44(((((*l_1101) = (safe_add_func_int16_t_s_s(func_75((*l_1084), func_60(g_12, p_34, g_1098, p_35, l_1099), l_1100, l_1083), 0xBFF8L))) < 3L) || g_67), l_1100), p_36, p_36, l_1102, p_35), p_34));
                    l_1106++;
                }
                else
                {
                    unsigned l_1110 = 0x400872C5L;
                    const unsigned char ****l_1113[8] = {&g_854, &g_854, &g_854, &g_854, &g_854, &g_854, &g_854, &g_854};
                    unsigned char *l_1115 = &g_684;
                    unsigned char *l_1117[4][4] = {{&g_653, &g_653, &g_67, &g_43}, {&g_653, &g_653, &g_67, &g_43}, {&g_653, &g_653, &g_67, &g_43}, {&g_653, &g_653, &g_67, &g_43}};
                    int i, j;
                    (*p_35) = (l_1109 & l_1110);
                    if ((p_34 > (func_75((l_1111[1] == (l_1114 = (void*)0)), (l_1115 = l_1115), l_1116, l_1117[0][3]) > ((safe_sub_func_uint16_t_u_u(l_1109, (safe_mod_func_int32_t_s_s(((l_1109 >= l_1080) & 6UL), (*l_1084))))) | 252UL))))
                    {
                        int *l_1122 = &g_3;
                        (*l_1059) = 0L;
                        return l_1122;
                    }
                    else
                    {
                        unsigned short *l_1131 = &g_179[1][4];
                        (*p_35) = ((*l_1059) = (0x7C6620F4L <= ((safe_sub_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u((*l_1059), (*p_35))) < (0UL | (safe_add_func_int16_t_s_s(l_1110, (p_34 | ((l_1134 = (safe_mod_func_uint16_t_u_u((--(*l_1131)), 65535UL))) >= 0UL)))))) > (safe_add_func_int8_t_s_s(0x22L, p_36))), l_1137[1][5][0])) & p_34)));
                        (*l_1059) ^= 0xB42A282CL;
                        if (g_1138)
                            break;
                        l_1139 = p_35;
                    }
                    (*p_35) &= (l_1140 != &l_1072[1][0]);
                }
                if ((*p_35))
                    continue;
            }
            else
            {
                int *l_1142 = &l_835[2];
                int l_1151 = 9L;
                unsigned char *l_1152 = &g_684;
                l_1142 = &g_92[5];
                (*p_35) = func_75(((p_36 > ((((*l_1084) = func_47(p_35, ((safe_sub_func_int16_t_s_s(p_34, ((safe_unary_minus_func_uint16_t_u((~(((*l_1059) = (*l_1139)) & l_1148)))) >= (((*l_1084) = (safe_add_func_int16_t_s_s(p_34, 0x31AAL))) == (((g_577 && g_179[3][3]) | g_805) <= p_34))))) ^ 0x33C15800L), l_1151, (*l_1112), &g_119)) == 4294967294UL) >= p_36)) && (*l_1084)), l_1083, l_1083, l_1152);
            }
            p_35 = func_44((*l_1139), l_1083);
        }
        for (g_805 = 1; (g_805 >= (-13)); --g_805)
        {
            unsigned ***l_1157 = &l_1155[2][2][1];
            int l_1162 = 0x143A4BC6L;
            short *l_1167 = &g_84[4];
            int *l_1174 = &l_1134;
            unsigned char * const l_1190[7] = {&g_653, (void*)0, &g_653, (void*)0, &g_653, (void*)0, &g_653};
            unsigned char *l_1197[10] = {&g_43, &g_684, &g_653, &g_653, &g_684, &g_43, &g_684, &g_653, &g_653, &g_684};
            unsigned short ** const l_1245[7] = {&g_1018[0], &g_1018[3], &g_1018[0], &g_1018[3], &g_1018[0], &g_1018[3], &g_1018[0]};
            unsigned char *l_1266 = &g_67;
            int l_1279[9] = {0x5111B1F7L, 0x43BA89C3L, 0x5111B1F7L, 0x43BA89C3L, 0x5111B1F7L, 0x43BA89C3L, 0x5111B1F7L, 0x43BA89C3L, 0x5111B1F7L};
            char l_1331 = 0xECL;
            int l_1334 = 0L;
            int l_1341 = 0x59A3429CL;
            int *l_1346[1][9][3];
            short l_1374 = (-6L);
            int l_1378 = (-10L);
            int l_1379 = (-4L);
            unsigned char ***l_1414 = &g_281[0];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 9; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_1346[i][j][k] = &l_1162;
                }
            }
        }
        for (g_88 = (-5); (g_88 == 7); g_88 = safe_add_func_int8_t_s_s(g_88, 4))
        {
            unsigned char *l_1475[4] = {&g_653, &g_684, &g_653, &g_684};
            int l_1488 = (-7L);
            int l_1490[8] = {1L, 0xEB6C46BCL, 1L, 0xEB6C46BCL, 1L, 0xEB6C46BCL, 1L, 0xEB6C46BCL};
            int *l_1505 = &l_1431;
            unsigned char l_1523[9] = {5UL, 0xE0L, 5UL, 0xE0L, 5UL, 0xE0L, 5UL, 0xE0L, 5UL};
            int i;
        }
    }
    else
    {
        int l_1531[2][6];
        unsigned char *l_1533[3];
        int *l_1534 = &l_835[2];
        int l_1564 = (-1L);
        int *l_1570 = &l_835[2];
        short **l_1587 = &g_428;
        int l_1621 = 0x9C5FB5D7L;
        int l_1622 = 0x6A87FF15L;
        int l_1623 = 0xFBD534ECL;
        int l_1624 = 0L;
        int l_1625 = 0xF4880A5AL;
        char l_1626 = (-1L);
        int l_1627 = 0xDFDF1D60L;
        int l_1628 = 0x1DE65D51L;
        int l_1629 = 0xDFC2FD3BL;
        int l_1630 = 3L;
        short l_1631 = 0x206EL;
        int l_1632 = 0xD1971C95L;
        int l_1633[3][7][1] = {{{0xF4500565L}, {0xF4500565L}, {0xF4500565L}, {0xF4500565L}, {0xF4500565L}, {0xF4500565L}, {0xF4500565L}}, {{0xF4500565L}, {0xF4500565L}, {0xF4500565L}, {0xF4500565L}, {0xF4500565L}, {0xF4500565L}, {0xF4500565L}}, {{0xF4500565L}, {0xF4500565L}, {0xF4500565L}, {0xF4500565L}, {0xF4500565L}, {0xF4500565L}, {0xF4500565L}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 6; j++)
                l_1531[i][j] = 0x767B325EL;
        }
        for (i = 0; i < 3; i++)
            l_1533[i] = &l_1280[1];
        if ((*p_35))
        {
            unsigned char *l_1530 = &g_67;
            unsigned l_1532 = 2UL;
            (*p_35) = (safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(p_36, func_47(&g_119, (l_1530 != (void*)0), l_1531[1][0], l_1530, l_1534))), 4294967295UL));
            (*l_1059) |= ((*p_35) = (*l_1534));
            p_35 = (l_1534 = l_1534);
        }
        else
        {
            unsigned l_1535 = 4UL;
            short * const l_1536[2][4][3] = {{{&g_84[1], &g_84[1], &g_88}, {&g_84[1], &g_84[1], &g_88}, {&g_84[1], &g_84[1], &g_88}, {&g_84[1], &g_84[1], &g_88}}, {{&g_84[1], &g_84[1], &g_88}, {&g_84[1], &g_84[1], &g_88}, {&g_84[1], &g_84[1], &g_88}, {&g_84[1], &g_84[1], &g_88}}};
            int l_1537 = 1L;
            int l_1538 = 1L;
            short *** const **l_1558 = (void*)0;
            const short l_1588 = 0xFD29L;
            unsigned char *l_1619 = &l_1280[0];
            int i, j, k;
            if ((l_1535 ^ ((void*)0 == l_1536[1][1][2])))
            {
                unsigned l_1539 = 9UL;
                ++l_1539;
                for (l_1431 = 0; (l_1431 <= 3); l_1431 += 1)
                {
                    unsigned l_1542 = 4294967295UL;
                    int *l_1546 = &l_835[2];
                    p_35 = p_35;
                    l_1542++;
                    return p_35;
                }
            }
            else
            {
                unsigned short l_1552 = 0x2697L;
                int *l_1559 = (void*)0;
                unsigned char * const l_1561 = (void*)0;
                int l_1562 = 0x5FB20FB0L;
                short ****l_1571[1];
                unsigned char *l_1572[1][5] = {{(void*)0, &g_43, (void*)0, &g_43, (void*)0}};
                int i, j;
                for (i = 0; i < 1; i++)
                    l_1571[i] = (void*)0;
                for (g_3 = 1; (g_3 != 11); g_3 = safe_add_func_int32_t_s_s(g_3, 1))
                {
                    (*p_35) = (*l_1534);
                    if ((*p_35))
                        continue;
                }
                for (g_961 = 0; (g_961 <= 1); g_961 += 1)
                {
                    unsigned l_1553[1];
                    short *** const *l_1557 = &g_1480;
                    short *** const **l_1556 = &l_1557;
                    unsigned short l_1560[10][8][3] = {{{3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}}, {{3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}}, {{3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}}, {{3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}}, {{3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}}, {{3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}}, {{3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}}, {{3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}}, {{3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}}, {{3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}, {3UL, 65535UL, 0x1B6CL}}};
                    int l_1563 = 0x7A152937L;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1553[i] = 4294967295UL;
                    if (((!func_47((l_1559 = l_1534), l_1560[1][1][1], p_36, l_1561, &g_92[5])) == (*p_35)))
                    {
                        unsigned char l_1565 = 248UL;
                        ++l_1565;
                        (*p_35) = 0x2466DCC6L;
                    }
                    else
                    {
                        (*l_1534) = (*p_35);
                    }
                    for (l_1365 = 0; (l_1365 <= 1); l_1365 += 1)
                    {
                        (*l_1059) ^= (-1L);
                        if ((*l_1059))
                            break;
                    }
                }
                (*l_1534) = ((safe_add_func_uint16_t_u_u((l_1533[2] == l_1561), (p_36 && (func_47(&l_1564, ((*l_1309) = func_47(l_1570, (*l_1570), func_75(((4294967286UL == (l_1571[0] == &g_1480)) == 1UL), l_1533[2], l_1533[2], l_1572[0][4]), l_1533[2], &l_1564)), l_1573[4], l_1533[2], &g_3) | (*p_35))))) > 0L);
            }
            l_1537 = (*p_35);
            p_35 = p_35;
            if (((*l_1059) = (((safe_mod_func_int16_t_s_s((g_1213 = func_47(&g_802, l_1538, (((p_36 == (1L & p_36)) ^ 0xCE6CB70DL) < p_34), func_60(((safe_unary_minus_func_int32_t_s((((*g_1248) != (void*)0) < l_1535))) >= 0xE115L), (*g_1228), l_1533[1], p_35, (*l_1534)), &l_1564)), 0x84EDL)) >= 0xF9E3L) > l_1538)))
            {
                int *l_1577 = &g_119;
                short **l_1586 = &g_428;
                int l_1592[9][5][2] = {{{0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}}, {{0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}}, {{0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}}, {{0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}}, {{0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}}, {{0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}}, {{0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}}, {{0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}}, {{0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}, {0x56F8DAEDL, 0x902EA9E3L}}};
                unsigned char *l_1603[8][2][6] = {{{&l_1280[5], &g_67, &g_653, &g_653, &g_653, (void*)0}, {&l_1280[5], &g_67, &g_653, &g_653, &g_653, (void*)0}}, {{&l_1280[5], &g_67, &g_653, &g_653, &g_653, (void*)0}, {&l_1280[5], &g_67, &g_653, &g_653, &g_653, (void*)0}}, {{&l_1280[5], &g_67, &g_653, &g_653, &g_653, (void*)0}, {&l_1280[5], &g_67, &g_653, &g_653, &g_653, (void*)0}}, {{&l_1280[5], &g_67, &g_653, &g_653, &g_653, (void*)0}, {&l_1280[5], &g_67, &g_653, &g_653, &g_653, (void*)0}}, {{&l_1280[5], &g_67, &g_653, &g_653, &g_653, (void*)0}, {&l_1280[5], &g_67, &g_653, &g_653, &g_653, (void*)0}}, {{&l_1280[5], &g_67, &g_653, &g_653, &g_653, (void*)0}, {&l_1280[5], &g_67, &g_653, &g_653, &g_653, (void*)0}}, {{&l_1280[5], &g_67, &g_653, &g_653, &g_653, (void*)0}, {&l_1280[5], &g_67, &g_653, &g_653, &g_653, (void*)0}}, {{&l_1280[5], &g_67, &g_653, &g_653, &g_653, (void*)0}, {&l_1280[5], &g_67, &g_653, &g_653, &g_653, (void*)0}}};
                unsigned char *l_1604[4][7] = {{&g_653, &g_684, (void*)0, &g_684, &g_653, &l_1280[1], &g_653}, {&g_653, &g_684, (void*)0, &g_684, &g_653, &l_1280[1], &g_653}, {&g_653, &g_684, (void*)0, &g_684, &g_653, &l_1280[1], &g_653}, {&g_653, &g_684, (void*)0, &g_684, &g_653, &l_1280[1], &g_653}};
                int i, j, k;
                l_1577 = &l_1564;
                for (g_1028 = 0; (g_1028 <= 7); g_1028 += 1)
                {
                    unsigned short *l_1580[3][4] = {{&g_405, &g_405, &g_179[5][2], &g_405}, {&g_405, &g_405, &g_179[5][2], &g_405}, {&g_405, &g_405, &g_179[5][2], &g_405}};
                    unsigned char *l_1589 = (void*)0;
                    int l_1593 = 1L;
                    int l_1594 = (-1L);
                    unsigned char ****l_1605 = (void*)0;
                    int i, j;
                    (*l_1570) = ((l_1573[g_1028] >= (safe_sub_func_int32_t_s_s(((p_34 < (--l_1582)) != p_36), ((*l_1577) ^= func_47(&g_119, p_34, ((*l_1309) |= g_1585), l_1533[2], func_44((((((*g_1480) = l_1586) == (l_890 = l_1587)) != l_1588) != 0x5E34E695L), l_1589)))))) > 65533UL);
                    for (l_1085 = 22; (l_1085 >= (-5)); l_1085 = safe_sub_func_int8_t_s_s(l_1085, 5))
                    {
                        unsigned l_1595 = 1UL;
                        unsigned char *l_1602 = &l_1280[1];
                        l_1595++;
                        (*l_1059) = ((*l_1577) = ((((((*g_591) = ((safe_add_func_uint8_t_u_u((0x04L != (safe_mod_func_uint16_t_u_u(func_75((0x8CA7DA3CL <= p_36), l_1602, func_60((*l_1577), (*l_1577), (l_1603[1][0][3] = l_1589), p_35, p_34), l_1604[1][1]), l_1538))), (*g_66))) | 1UL)) == 0UL) < l_1573[g_1028]) | 1UL) & l_1595));
                        (*l_1570) = (&g_854 != l_1605);
                        if ((*p_35))
                            break;
                    }
                }
            }
            else
            {
                int *l_1617 = &l_1538;
                unsigned char *l_1620 = &g_43;
                for (g_43 = (-17); (g_43 < 28); g_43 = safe_add_func_int16_t_s_s(g_43, 6))
                {
                    char l_1615[4][7] = {{0xA1L, 0xC2L, (-1L), 0xC2L, 0xA1L, 0xC2L, (-1L)}, {0xA1L, 0xC2L, (-1L), 0xC2L, 0xA1L, 0xC2L, (-1L)}, {0xA1L, 0xC2L, (-1L), 0xC2L, 0xA1L, 0xC2L, (-1L)}, {0xA1L, 0xC2L, (-1L), 0xC2L, 0xA1L, 0xC2L, (-1L)}};
                    int i, j;
                    for (g_653 = 0; (g_653 == 59); g_653++)
                    {
                        unsigned char *l_1616 = &g_67;
                        unsigned char l_1618 = 247UL;
                        (*p_35) ^= func_47(&l_1538, (safe_rshift_func_uint8_t_u_s(((func_75((safe_sub_func_int32_t_s_s(l_1614[0], ((!func_75((+l_1535), func_60(l_1615[1][2], p_34, l_1616, l_1617, l_1618), &l_1618, &l_1618)) && p_36))), l_1619, l_1620, l_1619) && (*l_1059)) >= 4294967290UL), 2)), l_1618, &l_1618, p_35);
                        if (l_1618)
                            continue;
                    }
                    return &g_802;
                }
            }
        }
        l_1636--;
        (*l_1059) ^= (1UL & p_34);
    }
    return l_1639[3];
}







static int * func_44(int p_45, unsigned char * p_46)
{
    int *l_807 = (void*)0;
    int *l_808[10][5][5] = {{{&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}}, {{&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}}, {{&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}}, {{&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}}, {{&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}}, {{&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}}, {{&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}}, {{&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}}, {{&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}}, {{&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}, {&g_686[0][6], &g_92[5], (void*)0, &g_92[5], &g_3}}};
    unsigned char l_809 = 0x04L;
    int l_813 = 0xA34E5E03L;
    int l_814 = 0L;
    int l_815 = (-1L);
    unsigned char l_816 = 0x7BL;
    int i, j, k;
    l_809--;
    l_816--;
    return &g_686[0][6];
}







static unsigned func_47(int * p_48, unsigned p_49, unsigned p_50, unsigned char * const p_51, int * p_52)
{
    unsigned l_803 = 0x0CE612AEL;
    int l_804 = 0L;
    l_804 |= l_803;
    return l_804;
}







static int * func_53(int p_54, int p_55, unsigned char * p_56, char p_57, int * p_58)
{
    unsigned char l_270[10] = {0x10L, 9UL, 0xCFL, 0xCFL, 9UL, 0x10L, 9UL, 0xCFL, 0xCFL, 9UL};
    int l_273 = 0x3C6F8FDEL;
    unsigned char *l_293[1][6] = {{&l_270[2], (void*)0, &l_270[2], (void*)0, &l_270[2], (void*)0}};
    int l_302 = 0x2BDE7F89L;
    int l_303 = 0x1E0087D4L;
    int l_304 = 0x05E78ADEL;
    short l_305[3];
    int l_306 = 0L;
    int l_307 = 0x30FF1B1CL;
    int l_308 = 0x9AC35681L;
    int l_309 = (-1L);
    int l_310 = 0xC3448D23L;
    int l_311 = 0xA55BBC4BL;
    char l_312 = 1L;
    int l_313[4] = {0x3CBDAFBAL, 0x1376CFE3L, 0x3CBDAFBAL, 0x1376CFE3L};
    unsigned short l_314 = 0x92C4L;
    short l_324 = 5L;
    unsigned char *l_379 = &l_270[3];
    unsigned **l_392 = (void*)0;
    short *l_426 = &g_84[4];
    short **l_425 = &l_426;
    unsigned char *l_452 = &l_270[2];
    unsigned char l_655 = 0x94L;
    const unsigned l_672[6] = {0x50FDBE62L, 0x50FDBE62L, 0x50FDBE62L, 0x50FDBE62L, 0x50FDBE62L, 0x50FDBE62L};
    unsigned char *l_700[10][8] = {{&g_684, (void*)0, (void*)0, (void*)0, &g_684, &l_270[2], (void*)0, (void*)0}, {&g_684, (void*)0, (void*)0, (void*)0, &g_684, &l_270[2], (void*)0, (void*)0}, {&g_684, (void*)0, (void*)0, (void*)0, &g_684, &l_270[2], (void*)0, (void*)0}, {&g_684, (void*)0, (void*)0, (void*)0, &g_684, &l_270[2], (void*)0, (void*)0}, {&g_684, (void*)0, (void*)0, (void*)0, &g_684, &l_270[2], (void*)0, (void*)0}, {&g_684, (void*)0, (void*)0, (void*)0, &g_684, &l_270[2], (void*)0, (void*)0}, {&g_684, (void*)0, (void*)0, (void*)0, &g_684, &l_270[2], (void*)0, (void*)0}, {&g_684, (void*)0, (void*)0, (void*)0, &g_684, &l_270[2], (void*)0, (void*)0}, {&g_684, (void*)0, (void*)0, (void*)0, &g_684, &l_270[2], (void*)0, (void*)0}, {&g_684, (void*)0, (void*)0, (void*)0, &g_684, &l_270[2], (void*)0, (void*)0}};
    int *l_721[1][2];
    int *l_800 = &g_92[7];
    int *l_801 = &g_92[5];
    int i, j;
    for (i = 0; i < 3; i++)
        l_305[i] = 0x20B9L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_721[i][j] = &l_304;
    }
    for (p_54 = 7; (p_54 >= 0); p_54 -= 1)
    {
        int i;
        if (g_92[p_54])
            break;
    }
    for (p_54 = 1; (p_54 > 14); p_54 = safe_add_func_int32_t_s_s(p_54, 8))
    {
        int l_256 = 4L;
        unsigned *l_261[6][5][5] = {{{&g_13, &g_13, &g_13, &g_13, &g_13}, {&g_13, &g_13, &g_13, &g_13, &g_13}, {&g_13, &g_13, &g_13, &g_13, &g_13}, {&g_13, &g_13, &g_13, &g_13, &g_13}, {&g_13, &g_13, &g_13, &g_13, &g_13}}, {{&g_13, &g_13, &g_13, &g_13, &g_13}, {&g_13, &g_13, &g_13, &g_13, &g_13}, {&g_13, &g_13, &g_13, &g_13, &g_13}, {&g_13, &g_13, &g_13, &g_13, &g_13}, {&g_13, &g_13, &g_13, &g_13, &g_13}}, {{&g_13, &g_13, &g_13, &g_13, &g_13}, {&g_13, &g_13, &g_13, &g_13, &g_13}, {&g_13, &g_13, &g_13, &g_13, &g_13}, {&g_13, &g_13, &g_13, &g_13, &g_13}, {&g_13, &g_13, &g_13, &g_13, &g_13}}, {{&g_13, &g_13, &g_13, &g_13, &g_13}, {&g_13, &g_13, &g_13, &g_13, &g_13}, {&g_13, &g_13, &g_13, &g_13, &g_13}, {&g_13, &g_13, &g_13, &g_13, &g_13}, {&g_13, &g_13, &g_13, &g_13, &g_13}}, {{&g_13, &g_13, &g_13, &g_13, &g_13}, {&g_13, &g_13, &g_13, &g_13, &g_13}, {&g_13, &g_13, &g_13, &g_13, &g_13}, {&g_13, &g_13, &g_13, &g_13, &g_13}, {&g_13, &g_13, &g_13, &g_13, &g_13}}, {{&g_13, &g_13, &g_13, &g_13, &g_13}, {&g_13, &g_13, &g_13, &g_13, &g_13}, {&g_13, &g_13, &g_13, &g_13, &g_13}, {&g_13, &g_13, &g_13, &g_13, &g_13}, {&g_13, &g_13, &g_13, &g_13, &g_13}}};
        unsigned char *l_278 = &l_270[2];
        int *l_299 = &l_273;
        int *l_300 = &l_256;
        int *l_301[5];
        unsigned **l_345 = &l_261[4][2][1];
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_301[i] = &g_92[5];
    }
    (*g_182) = (*p_58);
    for (g_119 = 0; (g_119 >= 19); g_119 = safe_add_func_int16_t_s_s(g_119, 2))
    {
        const unsigned char *l_513[2];
        int *l_515 = &l_306;
        int l_540 = (-7L);
        int l_545 = 0x5A42CF07L;
        int l_549 = 3L;
        int l_552[4];
        unsigned short l_554 = 0x1024L;
        unsigned **l_562 = (void*)0;
        unsigned char *l_564 = &g_67;
        unsigned char ***l_578 = (void*)0;
        short l_583[5] = {0x380BL, (-10L), 0x380BL, (-10L), 0x380BL};
        unsigned char l_588 = 0x12L;
        int *l_633 = &g_92[7];
        int *l_713[6][10][4] = {{{&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}}, {{&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}}, {{&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}}, {{&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}}, {{&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}}, {{&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}, {&g_92[5], (void*)0, &l_306, &l_540}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_513[i] = &l_270[9];
        for (i = 0; i < 4; i++)
            l_552[i] = 0x7E2409AEL;
        if ((*g_182))
        {
            for (l_306 = (-10); (l_306 <= (-2)); ++l_306)
            {
                for (l_309 = 0; (l_309 != 25); l_309 = safe_add_func_int8_t_s_s(l_309, 1))
                {
                    int *l_504[3];
                    int **l_508 = &l_504[0];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_504[i] = (void*)0;
                    for (g_267 = (-17); (g_267 != 12); g_267++)
                    {
                        int **l_505 = (void*)0;
                        int **l_506 = (void*)0;
                        int **l_507[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_507[i] = (void*)0;
                        g_182 = l_504[0];
                    }
                    (*l_508) = &p_54;
                }
                if (g_271)
                    continue;
            }
            (*p_58) = 0x8C83E62FL;
        }
        else
        {
            unsigned l_511 = 0xAABFB384L;
            const int l_512 = 8L;
            int *l_518 = (void*)0;
            int l_539 = 0xE90575A6L;
            int l_541 = 0xA573DA47L;
            int l_543 = 0xBFE8FEA6L;
            int l_544[1][9][1] = {{{0x4AB0B53AL}, {0x4AB0B53AL}, {0x4AB0B53AL}, {0x4AB0B53AL}, {0x4AB0B53AL}, {0x4AB0B53AL}, {0x4AB0B53AL}, {0x4AB0B53AL}, {0x4AB0B53AL}}};
            unsigned char *l_568[6][6] = {{&g_67, &l_270[1], &g_67, &l_270[9], &l_270[1], &l_270[7]}, {&g_67, &l_270[1], &g_67, &l_270[9], &l_270[1], &l_270[7]}, {&g_67, &l_270[1], &g_67, &l_270[9], &l_270[1], &l_270[7]}, {&g_67, &l_270[1], &g_67, &l_270[9], &l_270[1], &l_270[7]}, {&g_67, &l_270[1], &g_67, &l_270[9], &l_270[1], &l_270[7]}, {&g_67, &l_270[1], &g_67, &l_270[9], &l_270[1], &l_270[7]}};
            unsigned l_571 = 4294967295UL;
            int l_587 = (-3L);
            short l_632 = 0xC291L;
            unsigned char *l_701 = (void*)0;
            int *l_790[4];
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_790[i] = &l_303;
            for (g_13 = 0; (g_13 <= 3); g_13 += 1)
            {
                const unsigned char *l_514[2];
                int **l_516 = &g_182;
                char *l_517[1][4][7] = {{{&l_312, &g_12, (void*)0, &l_312, &l_312, &l_312, (void*)0}, {&l_312, &g_12, (void*)0, &l_312, &l_312, &l_312, (void*)0}, {&l_312, &g_12, (void*)0, &l_312, &l_312, &l_312, (void*)0}, {&l_312, &g_12, (void*)0, &l_312, &l_312, &l_312, (void*)0}}};
                int l_546 = 0x78322549L;
                int l_547 = 0x48A8AFF2L;
                int l_551 = (-1L);
                unsigned char *l_576 = &g_67;
                int l_584 = (-4L);
                int l_585 = 0L;
                int l_586[3][1];
                int l_595 = 0x2A6238A3L;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_514[i] = (void*)0;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_586[i][j] = 0xF0DEB827L;
                }
                if (((g_12 |= (safe_mod_func_uint8_t_u_u((((l_313[g_13] != (l_511 >= (func_75(l_512, func_60((l_513[1] != l_514[0]), (*p_56), p_56, ((*l_516) = l_515), l_273), p_56, p_56) >= 0L))) | 0x4E5DL) >= 251UL), 0x71L))) < 6UL))
                {
                    if ((*p_58))
                        break;
                    return l_518;
                }
                else
                {
                    (*l_515) &= l_270[2];
                    (*l_516) = &g_92[1];
                }
                if ((*g_182))
                {
                    unsigned l_525 = 0UL;
                    unsigned *l_528 = &g_529;
                    int l_538 = 0L;
                    int l_542 = (-1L);
                    int l_550 = 1L;
                    int l_553 = 1L;
                    unsigned l_559 = 4294967292UL;
                    if ((*g_182))
                        break;
                    if ((p_54 >= (((safe_lshift_func_uint8_t_u_u((p_54 || (safe_rshift_func_int8_t_s_s((p_57 = 1L), ((*g_182) >= ((g_88 & p_54) < 0xDEL))))), (((((*p_56) & p_55) > g_13) | (*p_58)) <= 0xBCL))) != g_13) >= (*l_515))))
                    {
                        int *l_523[6][8] = {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}};
                        short l_524[6][4][1];
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                        {
                            for (j = 0; j < 4; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_524[i][j][k] = (-1L);
                            }
                        }
                        (*p_58) = (*l_515);
                        (*l_516) = &p_54;
                        l_525++;
                    }
                    else
                    {
                        return &g_3;
                    }
                    if ((((*l_528)++) < (*p_58)))
                    {
                        int *l_532 = &l_307;
                        int l_533 = 0x1E4890C4L;
                        int *l_534 = &l_311;
                        int *l_535 = &l_307;
                        int *l_536 = &l_302;
                        int *l_537[9][2][3] = {{{&l_302, &l_309, &l_302}, {&l_302, &l_309, &l_302}}, {{&l_302, &l_309, &l_302}, {&l_302, &l_309, &l_302}}, {{&l_302, &l_309, &l_302}, {&l_302, &l_309, &l_302}}, {{&l_302, &l_309, &l_302}, {&l_302, &l_309, &l_302}}, {{&l_302, &l_309, &l_302}, {&l_302, &l_309, &l_302}}, {{&l_302, &l_309, &l_302}, {&l_302, &l_309, &l_302}}, {{&l_302, &l_309, &l_302}, {&l_302, &l_309, &l_302}}, {{&l_302, &l_309, &l_302}, {&l_302, &l_309, &l_302}}, {{&l_302, &l_309, &l_302}, {&l_302, &l_309, &l_302}}};
                        int l_548[9][7] = {{0L, 1L, 1L, 0L, 0x8E8D2FD6L, 0xD0A210C1L, 1L}, {0L, 1L, 1L, 0L, 0x8E8D2FD6L, 0xD0A210C1L, 1L}, {0L, 1L, 1L, 0L, 0x8E8D2FD6L, 0xD0A210C1L, 1L}, {0L, 1L, 1L, 0L, 0x8E8D2FD6L, 0xD0A210C1L, 1L}, {0L, 1L, 1L, 0L, 0x8E8D2FD6L, 0xD0A210C1L, 1L}, {0L, 1L, 1L, 0L, 0x8E8D2FD6L, 0xD0A210C1L, 1L}, {0L, 1L, 1L, 0L, 0x8E8D2FD6L, 0xD0A210C1L, 1L}, {0L, 1L, 1L, 0L, 0x8E8D2FD6L, 0xD0A210C1L, 1L}, {0L, 1L, 1L, 0L, 0x8E8D2FD6L, 0xD0A210C1L, 1L}};
                        unsigned **l_563 = (void*)0;
                        int i, j, k;
                        l_554--;
                        (*l_532) = (func_75((((*l_536) ^ (safe_sub_func_uint32_t_u_u((0UL == (l_559 < (safe_rshift_func_int8_t_s_u(((l_562 == l_563) ^ (~p_55)), ((*g_66) == ((*l_515) != 65527UL)))))), (-1L)))) >= (*g_182)), l_564, l_517[0][3][6], p_56) || 0UL);
                        (*l_516) = &l_542;
                    }
                    else
                    {
                        return &g_3;
                    }
                }
                else
                {
                    const int l_567 = 3L;
                    (**l_516) |= 0L;
                    for (l_539 = 0; (l_539 >= 0); l_539 -= 1)
                    {
                        unsigned char **l_569 = &g_277;
                        unsigned short *l_570 = &l_314;
                        (*g_182) = (safe_mod_func_uint16_t_u_u(func_75(l_567, ((*l_569) = l_568[0][4]), p_56, p_56), ((*l_570) = p_54)));
                    }
                    g_182 = &l_307;
                }
                if ((l_571 != p_57))
                {
                    unsigned char ***l_579 = (void*)0;
                    unsigned *l_580[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_580[i] = &g_529;
                    l_546 |= ((safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((*l_515), (func_75(p_55, l_576, p_56, p_56) <= g_577))), 11)) > (g_529 = (l_578 == l_579)));
                }
                else
                {
                    int *l_581 = &g_92[5];
                    int *l_582[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_582[i] = &l_303;
                    l_588++;
                    for (l_588 = 0; (l_588 <= 0); l_588 += 1)
                    {
                        int **l_594 = &l_582[1];
                        l_310 = (p_56 != g_591);
                        l_595 = (((g_577 || (safe_rshift_func_uint16_t_u_u(0UL, 13))) > (((*l_594) = &g_3) == l_581)) ^ 255UL);
                        (*l_594) = &p_54;
                        (*l_594) = &g_119;
                    }
                }
                for (l_307 = 0; (l_307 <= 0); l_307 += 1)
                {
                    unsigned char l_596 = 254UL;
                    int l_610 = 0xE0707CC5L;
                    (*p_58) = ((p_57 || l_596) > l_596);
                }
            }
            if ((safe_rshift_func_int8_t_s_s(((&g_3 != &g_92[5]) < 0x7BC99651L), 2)))
            {
                int l_621[2];
                unsigned char *l_652 = (void*)0;
                unsigned char *l_654 = (void*)0;
                short *l_689 = &l_305[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_621[i] = 5L;
                if (func_75((((*l_426) = l_621[0]) <= ((safe_lshift_func_int8_t_s_s((0xF86AAA36L >= (safe_rshift_func_int8_t_s_u(((((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((*l_515), (((safe_sub_func_int16_t_s_s(l_621[0], (!(~0xFF98L)))) | 1L) != (*p_56)))), 8)) > ((l_303 = l_621[0]) & p_54)) & 0UL) < 0xD88AL), l_621[0]))), 1)) == l_632)), p_56, p_56, p_56))
                {
                    unsigned char **l_634 = &l_293[0][1];
                    int **l_635 = &g_182;
                    (*l_515) = func_75(l_544[0][5][0], func_60(p_55, l_621[1], l_568[0][4], &p_54, p_57), ((*l_634) = func_60(g_267, (*g_66), p_56, l_633, g_13)), p_56);
                    (*l_635) = &l_273;
                }
                else
                {
                    for (g_577 = 0; (g_577 <= 1); g_577 += 1)
                    {
                        unsigned char ***l_636 = &g_281[0];
                        (*l_636) = (void*)0;
                        return &g_92[5];
                    }
                    if (l_621[1])
                        break;
                }
                for (p_54 = 4; (p_54 != (-5)); p_54 = safe_sub_func_int8_t_s_s(p_54, 6))
                {
                    unsigned l_656 = 3UL;
                    short * const l_659 = &l_305[1];
                    int l_660 = 0x09D7ADB3L;
                    for (l_324 = 0; (l_324 >= (-1)); l_324--)
                    {
                        (*l_515) |= (safe_unary_minus_func_int8_t_s((((func_75((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(((*l_452)++), (((void*)0 != p_56) < (((safe_add_func_uint8_t_u_u(func_75((g_92[5] < 65535UL), (l_652 = func_60(((*l_425) != (void*)0), (*l_633), p_56, &g_92[2], p_55)), p_56, p_56), (*p_56))) >= (*g_591)) && g_653)))), l_311)), (-5L))), p_56, l_654, l_379) >= l_324) || g_12) != l_655)));
                    }
                    l_660 |= ((((*p_58) = (*p_58)) & (l_656 && (((safe_sub_func_uint16_t_u_u(((g_119 ^ g_267) || 1UL), (&l_632 == l_659))) ^ (*p_56)) ^ ((*l_515) <= 5L)))) ^ g_119);
                    if (((void*)0 != &g_343))
                    {
                        unsigned short *l_665 = &l_554;
                        (*l_515) = (((*l_633) = (*p_58)) < (safe_lshift_func_uint8_t_u_s(((&p_54 == &g_3) < (+(safe_rshift_func_uint16_t_u_u((((((*l_665) = l_660) == p_55) ^ (((*g_427) = (*l_425)) != &l_583[1])) ^ (safe_rshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(((((void*)0 == &g_182) > 0xD3L) ^ 0xFEC7L), g_179[0][1])) ^ 0x38L), (-1L))), 6))), 15)))), l_672[0])));
                        return &g_3;
                    }
                    else
                    {
                        (*l_633) |= (l_621[0] <= g_116[2][9][0]);
                        g_92[5] |= 2L;
                    }
                }
                for (g_267 = 25; (g_267 > (-30)); g_267--)
                {
                    char l_681 = (-1L);
                    if ((safe_add_func_int32_t_s_s((*p_58), (safe_sub_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u(l_681, p_55)) && ((void*)0 == &l_545)), (g_405 ^ l_681))))))
                    {
                        short l_685 = 0L;
                        g_684 ^= ((safe_mod_func_int32_t_s_s(((*p_58) || (*p_58)), 8L)) != (*p_58));
                        if ((*p_58))
                            continue;
                        l_633 = &p_54;
                        if (l_685)
                            break;
                    }
                    else
                    {
                        (*l_633) = g_686[0][6];
                        if ((*p_58))
                            continue;
                    }
                }
                (*l_515) |= ((safe_add_func_uint8_t_u_u((((*g_427) = l_689) != (void*)0), (0xB8B51D08L < ((((2UL != ((&p_56 != (void*)0) ^ (safe_sub_func_uint32_t_u_u(p_54, (safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(p_57, p_54)), 4)))))) > (*p_58)) && g_577) | 0UL)))) >= (*p_58));
            }
            else
            {
                unsigned char l_706 = 0x23L;
                int l_709 = 0x9B9FDCE7L;
                int l_725[9] = {0x06221ABFL, 0x5396AF91L, 0x06221ABFL, 0x5396AF91L, 0x06221ABFL, 0x5396AF91L, 0x06221ABFL, 0x5396AF91L, 0x06221ABFL};
                int l_734 = 0x28CB4CD1L;
                int i;
                if ((safe_lshift_func_int8_t_s_s(((0L ^ (safe_rshift_func_int16_t_s_s((func_75(l_305[0], l_700[5][5], l_701, p_56) >= p_57), ((*l_426) = (safe_mod_func_uint32_t_u_u(((((safe_sub_func_uint8_t_u_u((*g_66), p_54)) <= p_54) == (-10L)) >= l_706), p_57)))))) | 0L), 6)))
                {
                    unsigned char **l_707 = &g_277;
                    unsigned *l_708[3][2] = {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}};
                    short l_711 = (-9L);
                    int l_712[7] = {1L, 1L, 1L, 1L, 1L, 1L, 1L};
                    int i, j;
                    if ((1UL ^ ((l_709 &= func_75(p_55, ((*l_707) = p_56), l_701, p_56)) > ((void*)0 != (*g_427)))))
                    {
                        int **l_710 = &l_633;
                        (*l_710) = &p_54;
                    }
                    else
                    {
                        (*p_58) = l_711;
                        if ((*p_58))
                            break;
                        l_712[5] &= (&l_552[1] != &p_54);
                    }
                    l_713[4][3][2] = &p_54;
                    for (l_706 = (-11); (l_706 <= 41); l_706 = safe_add_func_int8_t_s_s(l_706, 1))
                    {
                        (*l_633) = (*p_58);
                    }
                }
                else
                {
                    int *l_720 = &g_686[0][2];
                    int l_722 = 0L;
                    int l_723 = (-9L);
                    int l_724[5] = {0xFF6E870FL, (-1L), 0xFF6E870FL, (-1L), 0xFF6E870FL};
                    unsigned l_735 = 0UL;
                    int i;
                    (*l_515) ^= 0xAC04922EL;
                    for (l_273 = 0; (l_273 != 22); l_273 = safe_add_func_uint8_t_u_u(l_273, 8))
                    {
                        unsigned short *l_718[3][4][6] = {{{&g_179[0][4], &g_179[0][4], &g_179[5][1], &l_554, &g_179[3][3], &l_554}, {&g_179[0][4], &g_179[0][4], &g_179[5][1], &l_554, &g_179[3][3], &l_554}, {&g_179[0][4], &g_179[0][4], &g_179[5][1], &l_554, &g_179[3][3], &l_554}, {&g_179[0][4], &g_179[0][4], &g_179[5][1], &l_554, &g_179[3][3], &l_554}}, {{&g_179[0][4], &g_179[0][4], &g_179[5][1], &l_554, &g_179[3][3], &l_554}, {&g_179[0][4], &g_179[0][4], &g_179[5][1], &l_554, &g_179[3][3], &l_554}, {&g_179[0][4], &g_179[0][4], &g_179[5][1], &l_554, &g_179[3][3], &l_554}, {&g_179[0][4], &g_179[0][4], &g_179[5][1], &l_554, &g_179[3][3], &l_554}}, {{&g_179[0][4], &g_179[0][4], &g_179[5][1], &l_554, &g_179[3][3], &l_554}, {&g_179[0][4], &g_179[0][4], &g_179[5][1], &l_554, &g_179[3][3], &l_554}, {&g_179[0][4], &g_179[0][4], &g_179[5][1], &l_554, &g_179[3][3], &l_554}, {&g_179[0][4], &g_179[0][4], &g_179[5][1], &l_554, &g_179[3][3], &l_554}}};
                        int l_726 = (-1L);
                        int l_727 = 0x59572350L;
                        int l_728 = (-1L);
                        int l_729 = 1L;
                        int l_730 = 0xC77B20F9L;
                        int l_731 = (-3L);
                        int l_732 = 0xC760B7D5L;
                        int l_733[3][10][2] = {{{(-2L), 2L}, {(-2L), 2L}, {(-2L), 2L}, {(-2L), 2L}, {(-2L), 2L}, {(-2L), 2L}, {(-2L), 2L}, {(-2L), 2L}, {(-2L), 2L}, {(-2L), 2L}}, {{(-2L), 2L}, {(-2L), 2L}, {(-2L), 2L}, {(-2L), 2L}, {(-2L), 2L}, {(-2L), 2L}, {(-2L), 2L}, {(-2L), 2L}, {(-2L), 2L}, {(-2L), 2L}}, {{(-2L), 2L}, {(-2L), 2L}, {(-2L), 2L}, {(-2L), 2L}, {(-2L), 2L}, {(-2L), 2L}, {(-2L), 2L}, {(-2L), 2L}, {(-2L), 2L}, {(-2L), 2L}}};
                        int i, j, k;
                        (*l_515) = ((((((g_179[6][1] = g_116[2][9][0]) & ((**l_425) = (safe_unary_minus_func_uint8_t_u((*g_66))))) >= (*p_58)) > (l_720 == (l_721[0][1] = &p_54))) && p_57) < ((*p_58) >= p_55));
                        l_735--;
                        return &g_686[5][2];
                    }
                }
                for (l_308 = 0; (l_308 <= 0); l_308 += 1)
                {
                    p_54 &= ((*p_58) >= 1L);
                    for (l_309 = 0; (l_309 >= 0); l_309 -= 1)
                    {
                        int i, j, k;
                        l_544[l_308][(l_308 + 2)][l_309] = l_544[l_308][(l_308 + 6)][l_309];
                    }
                }
            }
            for (g_271 = 0; (g_271 <= 5); g_271 += 1)
            {
                short l_738[8][9] = {{1L, 0x47C5L, (-1L), 0x54FFL, 8L, 0x54FFL, (-1L), 0x47C5L, 1L}, {1L, 0x47C5L, (-1L), 0x54FFL, 8L, 0x54FFL, (-1L), 0x47C5L, 1L}, {1L, 0x47C5L, (-1L), 0x54FFL, 8L, 0x54FFL, (-1L), 0x47C5L, 1L}, {1L, 0x47C5L, (-1L), 0x54FFL, 8L, 0x54FFL, (-1L), 0x47C5L, 1L}, {1L, 0x47C5L, (-1L), 0x54FFL, 8L, 0x54FFL, (-1L), 0x47C5L, 1L}, {1L, 0x47C5L, (-1L), 0x54FFL, 8L, 0x54FFL, (-1L), 0x47C5L, 1L}, {1L, 0x47C5L, (-1L), 0x54FFL, 8L, 0x54FFL, (-1L), 0x47C5L, 1L}, {1L, 0x47C5L, (-1L), 0x54FFL, 8L, 0x54FFL, (-1L), 0x47C5L, 1L}};
                int l_745 = 0x6D00C2C1L;
                int l_750 = 1L;
                int l_751[8] = {(-1L), 0x9E58EC38L, (-1L), 0x9E58EC38L, (-1L), 0x9E58EC38L, (-1L), 0x9E58EC38L};
                int l_753 = (-5L);
                unsigned short l_754 = 0xD56DL;
                unsigned ***l_782 = &l_562;
                int *l_788[8] = {&g_92[4], &g_92[4], &l_552[0], &g_92[4], &g_92[4], &l_552[0], &g_92[4], &g_92[4]};
                unsigned l_797[6] = {0x4CDF5E1EL, 0x4CDF5E1EL, 0xB5FC6686L, 0x4CDF5E1EL, 0x4CDF5E1EL, 0xB5FC6686L};
                int i, j;
                for (l_549 = 0; (l_549 <= 2); l_549 += 1)
                {
                    short *l_741 = &l_632;
                    unsigned *l_742 = &g_13;
                    int l_743 = 0xABAC05B2L;
                    int l_744[6][8] = {{0xCCCC06C1L, 1L, 1L, 1L, 0xCCCC06C1L, 0x26C85BD0L, 1L, 0x26C85BD0L}, {0xCCCC06C1L, 1L, 1L, 1L, 0xCCCC06C1L, 0x26C85BD0L, 1L, 0x26C85BD0L}, {0xCCCC06C1L, 1L, 1L, 1L, 0xCCCC06C1L, 0x26C85BD0L, 1L, 0x26C85BD0L}, {0xCCCC06C1L, 1L, 1L, 1L, 0xCCCC06C1L, 0x26C85BD0L, 1L, 0x26C85BD0L}, {0xCCCC06C1L, 1L, 1L, 1L, 0xCCCC06C1L, 0x26C85BD0L, 1L, 0x26C85BD0L}, {0xCCCC06C1L, 1L, 1L, 1L, 0xCCCC06C1L, 0x26C85BD0L, 1L, 0x26C85BD0L}};
                    unsigned ***l_770 = &g_343;
                    unsigned char **l_771 = &l_379;
                    unsigned short *l_776 = &l_754;
                    int *l_789 = &l_313[1];
                    int i, j;
                    l_738[4][1] |= (l_305[l_549] & (((&g_281[0] != (void*)0) > ((**l_425) = ((func_75(l_305[l_549], l_568[g_271][g_271], l_568[(l_549 + 3)][l_549], l_568[g_271][(l_549 + 3)]) && l_305[l_549]) != p_54))) > 0xA077L));
                    if (((l_305[l_549] ^ (l_738[4][1] != (safe_mod_func_uint32_t_u_u(((*l_742) = ((func_75(((*l_741) ^= 3L), p_56, &l_655, l_568[1][0]) || (p_54 && (g_88 = p_54))) && 0xD586L)), l_305[l_549])))) > 0x64E91FCFL))
                    {
                        int l_746 = 0x32229FE9L;
                        int l_747 = 0x25A15370L;
                        int l_748 = 0L;
                        int l_749[5];
                        char l_752 = 7L;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_749[i] = 0xB3474B8EL;
                        --l_754;
                    }
                    else
                    {
                        int **l_757 = &l_633;
                        int l_769 = 0x08A47DAEL;
                        g_182 = &p_54;
                        (*l_757) = &g_3;
                        g_758 = l_757;
                        l_769 |= ((*p_58) ^ (((~((safe_sub_func_uint32_t_u_u(4UL, (safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(p_57, 14)), (((*l_741) ^= l_738[6][7]) ^ ((safe_add_func_uint16_t_u_u(65532UL, (((-1L) || g_92[5]) != ((*g_66) = (0xC4AF4DC8L == (~(((safe_mod_func_int8_t_s_s((p_54 != (*p_56)), g_529)) || 4294967292UL) & p_54))))))) ^ g_405)))))) ^ l_754)) <= 0x151F4957L) < p_55));
                    }
                    (*p_58) ^= (g_653 == (l_770 != (void*)0));
                    if ((func_75((func_75(p_54, ((*l_771) = (l_568[g_271][g_271] = p_56)), p_56, p_56) | (safe_rshift_func_uint16_t_u_u(((*l_776) = (safe_mod_func_uint16_t_u_u(((g_116[2][9][0] > l_744[4][2]) == (0xAFADL <= p_57)), p_54))), g_684))), &l_588, p_56, l_701) || l_743))
                    {
                        unsigned ****l_783 = (void*)0;
                        unsigned ****l_784 = (void*)0;
                        unsigned ****l_785 = &l_770;
                        l_751[6] = 0L;
                        (*g_758) = &l_744[5][4];
                        (*l_515) &= 1L;
                        (*l_515) |= ((safe_unary_minus_func_uint32_t_u((safe_sub_func_int32_t_s_s((((*p_58) | (safe_rshift_func_int8_t_s_u((p_54 <= l_305[l_549]), (p_55 < ((void*)0 == (*l_771)))))) < (l_782 != ((*l_785) = &l_392))), (safe_lshift_func_int16_t_s_s(6L, 1)))))) <= 1UL);
                    }
                    else
                    {
                        (*l_515) |= (*p_58);
                        return g_791[0][5];
                    }
                }
                if ((safe_rshift_func_uint16_t_u_u(p_55, 9)))
                {
                    for (p_55 = 9; (p_55 == 6); p_55 = safe_sub_func_int32_t_s_s(p_55, 6))
                    {
                        (*g_758) = &l_552[3];
                    }
                    (*l_515) |= (*p_58);
                }
                else
                {
                    short l_796 = 0x706FL;
                    (*g_758) = &g_92[6];
                    l_797[1]++;
                }
            }
            (*g_758) = &g_92[5];
        }
        return l_800;
    }
    return l_801;
}







static unsigned char * func_60(int p_61, unsigned char p_62, unsigned char * p_63, int * p_64, char p_65)
{
    unsigned char *l_90[6][6][7] = {{{&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}}, {{&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}}, {{&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}}, {{&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}}, {{&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}}, {{&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67, &g_67, &g_67, &g_67, &g_67}}};
    int *l_108 = (void*)0;
    int l_126 = 0xD7005AE1L;
    int l_129 = 0L;
    int l_136 = 0L;
    int l_140 = 0xFFE76D6EL;
    int l_142 = 0L;
    int l_147 = 0x4F7B99C0L;
    int l_152[4];
    unsigned char *l_167 = (void*)0;
    const unsigned char * const l_177 = &g_178;
    const unsigned char * const *l_176 = &l_177;
    short l_193 = 0x888FL;
    unsigned l_245 = 2UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_152[i] = 0L;
    for (p_62 = 0; (p_62 == 20); ++p_62)
    {
        unsigned l_74 = 4294967295UL;
        char l_89 = 0x3DL;
        short *l_112 = &g_84[2];
        unsigned char *l_115 = &g_67;
        int l_131 = 0xA4E2899DL;
        int l_133 = 0x8FF0B4F3L;
        int l_141 = 0x34C76B8CL;
        int l_143 = 0xEA68C7A6L;
        int l_144[2][1][10] = {{{1L, 0x41B38AE1L, 1L, 0x41B38AE1L, 1L, 0x41B38AE1L, 1L, 0x41B38AE1L, 1L, 0x41B38AE1L}}, {{1L, 0x41B38AE1L, 1L, 0x41B38AE1L, 1L, 0x41B38AE1L, 1L, 0x41B38AE1L, 1L, 0x41B38AE1L}}};
        unsigned char l_161 = 0UL;
        int l_194 = 1L;
        unsigned char *l_233[5][5][2] = {{{(void*)0, &l_161}, {(void*)0, &l_161}, {(void*)0, &l_161}, {(void*)0, &l_161}, {(void*)0, &l_161}}, {{(void*)0, &l_161}, {(void*)0, &l_161}, {(void*)0, &l_161}, {(void*)0, &l_161}, {(void*)0, &l_161}}, {{(void*)0, &l_161}, {(void*)0, &l_161}, {(void*)0, &l_161}, {(void*)0, &l_161}, {(void*)0, &l_161}}, {{(void*)0, &l_161}, {(void*)0, &l_161}, {(void*)0, &l_161}, {(void*)0, &l_161}, {(void*)0, &l_161}}, {{(void*)0, &l_161}, {(void*)0, &l_161}, {(void*)0, &l_161}, {(void*)0, &l_161}, {(void*)0, &l_161}}};
        unsigned l_242[6] = {4294967286UL, 4294967286UL, 3UL, 4294967286UL, 4294967286UL, 3UL};
        int i, j, k;
    }
    return &g_67;
}







static unsigned short func_75(const short p_76, unsigned char * p_77, unsigned char * p_78, unsigned char * p_79)
{
    int *l_91 = &g_92[5];
    int *l_93 = &g_92[5];
    int *l_94 = &g_92[2];
    int l_95 = 0x07D3F149L;
    int *l_96 = &g_92[7];
    int l_97 = 0x97CAD959L;
    int *l_98 = &l_97;
    int *l_99[1];
    char l_100 = 1L;
    int l_101 = 1L;
    int l_102 = (-7L);
    unsigned l_103 = 0UL;
    int **l_106 = &l_94;
    int i;
    for (i = 0; i < 1; i++)
        l_99[i] = &l_97;
    (*l_91) = 0x10E27A8DL;
    ++l_103;
    (*l_106) = &l_95;
    return p_76;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_84[i], "g_84[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_88, "g_88", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_92[i], "g_92[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_116[i][j][k], "g_116[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_179[i][j], "g_179[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_405, "g_405", print_hash_value);
    transparent_crc(g_529, "g_529", print_hash_value);
    transparent_crc(g_577, "g_577", print_hash_value);
    transparent_crc(g_653, "g_653", print_hash_value);
    transparent_crc(g_684, "g_684", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_686[i][j], "g_686[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_802, "g_802", print_hash_value);
    transparent_crc(g_805, "g_805", print_hash_value);
    transparent_crc(g_812, "g_812", print_hash_value);
    transparent_crc(g_961, "g_961", print_hash_value);
    transparent_crc(g_1028, "g_1028", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_1077[i][j][k], "g_1077[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1138, "g_1138", print_hash_value);
    transparent_crc(g_1213, "g_1213", print_hash_value);
    transparent_crc(g_1242, "g_1242", print_hash_value);
    transparent_crc(g_1383, "g_1383", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1464[i], "g_1464[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1518[i][j][k], "g_1518[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1585, "g_1585", print_hash_value);
    transparent_crc(g_1641, "g_1641", print_hash_value);
    transparent_crc(g_1963, "g_1963", print_hash_value);
    transparent_crc(g_1965, "g_1965", print_hash_value);
    transparent_crc(g_2019, "g_2019", print_hash_value);
    transparent_crc(g_2059, "g_2059", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
