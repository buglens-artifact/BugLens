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



static int g_17 = (-9L);
static char g_39 = 0x05L;
static int g_43 = 1L;
static unsigned g_55[5][8][6] = {{{4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}}, {{4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}}, {{4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}}, {{4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}}, {{4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}, {4294967295UL, 1UL, 1UL, 4294967295UL, 1UL, 0x9F81A770L}}};
static char **g_65 = (void*)0;
static char ***g_64 = &g_65;
static unsigned short g_68 = 65533UL;
static int g_79 = (-1L);
static unsigned char g_88 = 0UL;
static char g_100[3] = {2L, 2L, 2L};
static unsigned g_138 = 0x5127A508L;
static unsigned g_140 = 0xB74881ACL;
static short g_150 = 3L;
static char *g_153[7][6][6] = {{{&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}}, {{&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}}, {{&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}}, {{&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}}, {{&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}}, {{&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}}, {{&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}, {&g_39, (void*)0, &g_100[2], &g_100[1], &g_39, &g_39}}};
static short ***g_228 = (void*)0;
static unsigned short g_240 = 1UL;
static int g_241 = 0x8E322425L;
static int *g_267 = &g_79;
static unsigned *g_285 = &g_138;
static unsigned **g_284 = &g_285;
static short g_328 = (-5L);
static short g_333[4] = {1L, 1L, 1L, 1L};
static unsigned g_351 = 0xA7C73B28L;
static unsigned char *g_366 = (void*)0;
static unsigned char **g_365[9] = {&g_366, &g_366, &g_366, &g_366, &g_366, &g_366, &g_366, &g_366, &g_366};
static char ****g_391 = (void*)0;
static int g_416 = (-9L);
static unsigned short g_418[10][2][1] = {{{0UL}, {0UL}}, {{0UL}, {0UL}}, {{0UL}, {0UL}}, {{0UL}, {0UL}}, {{0UL}, {0UL}}, {{0UL}, {0UL}}, {{0UL}, {0UL}}, {{0UL}, {0UL}}, {{0UL}, {0UL}}, {{0UL}, {0UL}}};
static int ***g_446 = (void*)0;
static unsigned char g_450 = 0UL;
static int *g_566 = &g_79;
static unsigned char g_630 = 0x2CL;
static int ****g_656 = (void*)0;
static short g_663 = 8L;
static char g_713[5] = {6L, 6L, 6L, 6L, 6L};
static int g_763 = 0x66444203L;
static short ***g_837 = (void*)0;
static unsigned g_862 = 0x5C43F793L;
static char g_863 = 0x83L;
static unsigned g_890 = 4294967288UL;
static int *g_1045 = (void*)0;
static int g_1095 = 1L;
static unsigned short **g_1108 = (void*)0;
static unsigned short g_1262 = 1UL;
static unsigned g_1364 = 0xB40B99C7L;
static int **g_1518 = &g_267;
static int ***g_1517 = &g_1518;
static unsigned **g_1519 = (void*)0;
static char ******g_1553 = (void*)0;
static unsigned g_1560[8][4] = {{1UL, 6UL, 0x01D705A0L, 9UL}, {1UL, 6UL, 0x01D705A0L, 9UL}, {1UL, 6UL, 0x01D705A0L, 9UL}, {1UL, 6UL, 0x01D705A0L, 9UL}, {1UL, 6UL, 0x01D705A0L, 9UL}, {1UL, 6UL, 0x01D705A0L, 9UL}, {1UL, 6UL, 0x01D705A0L, 9UL}, {1UL, 6UL, 0x01D705A0L, 9UL}};
static int g_1582 = 5L;
static unsigned g_1592 = 0x440DEF17L;
static unsigned short g_1604[7][9][4] = {{{0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}}, {{0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}}, {{0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}}, {{0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}}, {{0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}}, {{0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}}, {{0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}, {0xCF1FL, 0xAE54L, 65529UL, 0xC8B7L}}};
static unsigned char ***g_1618 = &g_365[2];
static unsigned char g_1628 = 0UL;
static char *****g_1635 = &g_391;
static char g_1770[2] = {0L, 0L};
static unsigned ***g_1781 = &g_284;
static unsigned ****g_1780 = &g_1781;
static int g_1845[9][2] = {{0x0558ADDEL, 0x0558ADDEL}, {0x0558ADDEL, 0x0558ADDEL}, {0x0558ADDEL, 0x0558ADDEL}, {0x0558ADDEL, 0x0558ADDEL}, {0x0558ADDEL, 0x0558ADDEL}, {0x0558ADDEL, 0x0558ADDEL}, {0x0558ADDEL, 0x0558ADDEL}, {0x0558ADDEL, 0x0558ADDEL}, {0x0558ADDEL, 0x0558ADDEL}};
static char g_1861[1][9] = {{0xBEL, 0xBEL, (-1L), 0xBEL, 0xBEL, (-1L), 0xBEL, 0xBEL, (-1L)}};
static unsigned short g_1880 = 0x2359L;
static int *g_1987 = &g_17;
static unsigned char ****g_2046 = (void*)0;
static unsigned char *****g_2045[10] = {&g_2046, &g_2046, &g_2046, &g_2046, &g_2046, &g_2046, &g_2046, &g_2046, &g_2046, &g_2046};
static short g_2116 = (-1L);
static int g_2159 = 0xB574D68CL;
static int g_2218 = 1L;



static unsigned func_1(void);
static int func_2(unsigned p_3, short p_4, unsigned short p_5);
static unsigned char func_6(int p_7);
static int func_8(int p_9, short p_10);
static int * func_12(short p_13, unsigned char p_14, unsigned char p_15);
static int * func_18(int * p_19, int * p_20, int p_21, unsigned char p_22, unsigned p_23);
static int * func_27(char p_28, unsigned char p_29, int * p_30, int * p_31, unsigned p_32);
static unsigned char func_33(char p_34);
static unsigned short func_44(char * p_45);
static short func_56(int p_57, char *** p_58, unsigned char p_59, char p_60, char * p_61);
static unsigned func_1(void)
{
    int l_11 = 0x272A7275L;
    int l_1180 = 0xC2D244D3L;
    char ***l_1181 = (void*)0;
    char ****l_1182 = &l_1181;
    char *l_1187 = &g_100[1];
    short *l_1188 = &g_663;
    int *l_1771 = &g_17;
    int l_1818 = 0L;
    short l_1833 = (-1L);
    unsigned char **l_1837 = &g_366;
    int l_1842[6] = {1L, 1L, 1L, 1L, 1L, 1L};
    unsigned l_1879 = 0xAEAB0A08L;
    unsigned **l_1966 = &g_285;
    unsigned l_1968 = 4294967290UL;
    int l_2008 = 0xB143344DL;
    unsigned char l_2085 = 255UL;
    short l_2105[3][7] = {{0x4781L, 0xFACCL, 0x4781L, 0xFACCL, 0x4781L, 0xFACCL, 0x4781L}, {0x4781L, 0xFACCL, 0x4781L, 0xFACCL, 0x4781L, 0xFACCL, 0x4781L}, {0x4781L, 0xFACCL, 0x4781L, 0xFACCL, 0x4781L, 0xFACCL, 0x4781L}};
    unsigned l_2106 = 0xF4821A12L;
    char l_2107[8][5][1] = {{{1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}}};
    unsigned l_2117 = 0xB85EEF6AL;
    unsigned char ****l_2153[6][1] = {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}};
    unsigned *l_2171 = &l_1879;
    unsigned **l_2170 = &l_2171;
    int i, j, k;
    (*l_1771) = func_2((func_6((((*l_1188) ^= ((l_1180 = func_8(l_11, l_11)) , (l_1180 , g_55[4][7][2]))) , l_1180)) > l_11), l_11, g_863);




    ;

    ;
    for (g_79 = 15; (g_79 != (-25)); g_79--)
    {
        unsigned char l_1774[1];
        unsigned char l_1779 = 250UL;
        int *l_1802 = &l_1180;
        unsigned l_1812[9][7] = {{0UL, 0UL, 0xA9E54024L, 4294967291UL, 0UL, 0x1A4517F6L, 0UL}, {0UL, 0UL, 0xA9E54024L, 4294967291UL, 0UL, 0x1A4517F6L, 0UL}, {0UL, 0UL, 0xA9E54024L, 4294967291UL, 0UL, 0x1A4517F6L, 0UL}, {0UL, 0UL, 0xA9E54024L, 4294967291UL, 0UL, 0x1A4517F6L, 0UL}, {0UL, 0UL, 0xA9E54024L, 4294967291UL, 0UL, 0x1A4517F6L, 0UL}, {0UL, 0UL, 0xA9E54024L, 4294967291UL, 0UL, 0x1A4517F6L, 0UL}, {0UL, 0UL, 0xA9E54024L, 4294967291UL, 0UL, 0x1A4517F6L, 0UL}, {0UL, 0UL, 0xA9E54024L, 4294967291UL, 0UL, 0x1A4517F6L, 0UL}, {0UL, 0UL, 0xA9E54024L, 4294967291UL, 0UL, 0x1A4517F6L, 0UL}};
        int l_1829[2];
        unsigned char l_1836 = 0x5CL;
        unsigned char **l_1843 = &g_366;
        char ******l_1844 = (void*)0;
        int *l_1877 = (void*)0;
        unsigned short l_1882 = 0xC507L;
        short l_1885[10][4][6] = {{{0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}}, {{0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}}, {{0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}}, {{0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}}, {{0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}}, {{0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}}, {{0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}}, {{0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}}, {{0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}}, {{0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}, {0x3392L, 4L, 0x01D8L, 0x06C8L, 0x3A09L, 0xB9D8L}}};
        int l_1902 = 0x6E9BA6B1L;
        unsigned l_1945 = 0xDD504AE6L;
        unsigned l_1948 = 0x1B0C9F66L;
        int l_1965 = 1L;
        int *l_1971 = (void*)0;
        char l_1986 = (-1L);
        unsigned l_2072 = 4294967295UL;
        unsigned short l_2114 = 65535UL;
        char *****l_2115 = &l_1182;
        unsigned char ****l_2154 = &g_1618;
        char **l_2168 = &l_1187;
        int *l_2187 = (void*)0;
        char l_2189 = (-1L);
        unsigned short l_2221 = 0xA7D9L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1774[i] = 255UL;
        for (i = 0; i < 2; i++)
            l_1829[i] = 0x6AC1EDF5L;
    }
    (*g_566) = (safe_lshift_func_int8_t_s_u((func_6((*g_566)) ^ 9L), 3));

    ;
    return (**g_284);
}







static int func_2(unsigned p_3, short p_4, unsigned short p_5)
{
    unsigned l_1204 = 0x05D02386L;
    short ***l_1205 = (void*)0;
    int l_1206 = 0xEA0D44A8L;
    int l_1226 = 0xB44F0F0FL;
    int l_1236 = 0x10A31D5CL;
    int l_1238[1];
    char ***l_1246 = &g_65;
    unsigned char ***l_1267[5] = {&g_365[0], &g_365[2], &g_365[0], &g_365[2], &g_365[0]};
    short l_1343 = 1L;
    unsigned short l_1366 = 9UL;
    unsigned short *l_1405 = &g_68;
    unsigned short **l_1404 = &l_1405;
    int *l_1451[1][5];
    char *****l_1464[8][6][5] = {{{&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}}, {{&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}}, {{&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}}, {{&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}}, {{&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}}, {{&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}}, {{&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}}, {{&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}, {&g_391, &g_391, &g_391, &g_391, &g_391}}};
    char ******l_1463 = &l_1464[4][1][4];
    short **l_1467 = (void*)0;
    short l_1479 = 5L;
    int l_1493 = (-1L);
    unsigned *l_1522 = &g_55[4][2][2];
    unsigned **l_1521 = &l_1522;
    unsigned short l_1527 = 0xAE24L;
    short l_1528 = 0xE2E5L;
    int ***l_1532 = &g_1518;
    unsigned l_1533 = 0xE6ACE40BL;
    unsigned short *l_1538 = &g_68;
    unsigned char l_1583[7][1][9] = {{{0x71L, 0x3FL, 0xCDL, 0xADL, 0UL, 255UL, 0x28L, 247UL, 255UL}}, {{0x71L, 0x3FL, 0xCDL, 0xADL, 0UL, 255UL, 0x28L, 247UL, 255UL}}, {{0x71L, 0x3FL, 0xCDL, 0xADL, 0UL, 255UL, 0x28L, 247UL, 255UL}}, {{0x71L, 0x3FL, 0xCDL, 0xADL, 0UL, 255UL, 0x28L, 247UL, 255UL}}, {{0x71L, 0x3FL, 0xCDL, 0xADL, 0UL, 255UL, 0x28L, 247UL, 255UL}}, {{0x71L, 0x3FL, 0xCDL, 0xADL, 0UL, 255UL, 0x28L, 247UL, 255UL}}, {{0x71L, 0x3FL, 0xCDL, 0xADL, 0UL, 255UL, 0x28L, 247UL, 255UL}}};
    unsigned l_1593[9] = {0xAEC815A8L, 4294967295UL, 0xAEC815A8L, 4294967295UL, 0xAEC815A8L, 4294967295UL, 0xAEC815A8L, 4294967295UL, 0xAEC815A8L};
    short l_1599 = (-1L);
    unsigned l_1655 = 0UL;
    char l_1678 = 0xBFL;
    short l_1727[5];
    unsigned short l_1736 = 65530UL;
    short ****l_1769 = (void*)0;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1238[i] = 0x31D94E6AL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_1451[i][j] = &l_1238[0];
    }
    for (i = 0; i < 5; i++)
        l_1727[i] = (-5L);
    l_1206 ^= ((safe_rshift_func_int16_t_s_u(l_1204, 11)) | (p_4 ^ (1L != ((((((g_328 | 0x5616L) == ((l_1204 , l_1205) != l_1205)) || 0x67L) && l_1204) , p_3) != l_1204))));
    for (p_4 = 0; (p_4 < 11); ++p_4)
    {
        int l_1210 = 0x9E8E626FL;
        char *l_1234[9] = {&g_713[4], &g_713[4], &g_863, &g_713[4], &g_713[4], &g_863, &g_713[4], &g_713[4], &g_863};
        int *l_1258[3][2][3];
        short *l_1274 = (void*)0;
        unsigned char l_1379 = 251UL;
        char ****l_1382[6][7][3] = {{{&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}}, {{&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}}, {{&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}}, {{&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}}, {{&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}}, {{&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}, {&l_1246, &l_1246, &g_64}}};
        int l_1403 = 0xB93B494FL;
        short l_1443[8][5][2] = {{{(-8L), 0x81CDL}, {(-8L), 0x81CDL}, {(-8L), 0x81CDL}, {(-8L), 0x81CDL}, {(-8L), 0x81CDL}}, {{(-8L), 0x81CDL}, {(-8L), 0x81CDL}, {(-8L), 0x81CDL}, {(-8L), 0x81CDL}, {(-8L), 0x81CDL}}, {{(-8L), 0x81CDL}, {(-8L), 0x81CDL}, {(-8L), 0x81CDL}, {(-8L), 0x81CDL}, {(-8L), 0x81CDL}}, {{(-8L), 0x81CDL}, {(-8L), 0x81CDL}, {(-8L), 0x81CDL}, {(-8L), 0x81CDL}, {(-8L), 0x81CDL}}, {{(-8L), 0x81CDL}, {(-8L), 0x81CDL}, {(-8L), 0x81CDL}, {(-8L), 0x81CDL}, {(-8L), 0x81CDL}}, {{(-8L), 0x81CDL}, {(-8L), 0x81CDL}, {(-8L), 0x81CDL}, {(-8L), 0x81CDL}, {(-8L), 0x81CDL}}, {{(-8L), 0x81CDL}, {(-8L), 0x81CDL}, {(-8L), 0x81CDL}, {(-8L), 0x81CDL}, {(-8L), 0x81CDL}}, {{(-8L), 0x81CDL}, {(-8L), 0x81CDL}, {(-8L), 0x81CDL}, {(-8L), 0x81CDL}, {(-8L), 0x81CDL}}};
        char ******l_1462 = (void*)0;
        int ****l_1466 = &g_446;
        unsigned l_1475 = 4294967295UL;
        unsigned l_1476 = 4294967295UL;
        int ****l_1531 = &g_1517;
        short *l_1534[5][9][4] = {{{&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}}, {{&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}}, {{&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}}, {{&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}}, {{&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}, {&g_333[2], &g_333[2], &g_333[1], (void*)0}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 3; k++)
                    l_1258[i][j][k] = &l_1226;
            }
        }
        if ((l_1210 &= (safe_unary_minus_func_int32_t_s(l_1206))))
        {
            unsigned short l_1254[9];
            short *l_1276[3][2][3] = {{{&g_663, &g_663, &g_328}, {&g_663, &g_663, &g_328}}, {{&g_663, &g_663, &g_328}, {&g_663, &g_663, &g_328}}, {{&g_663, &g_663, &g_328}, {&g_663, &g_663, &g_328}}};
            int l_1281 = 0xAA0A9DB8L;
            int i, j, k;
            for (i = 0; i < 9; i++)
                l_1254[i] = 0x8440L;
            for (l_1206 = (-24); (l_1206 <= (-23)); l_1206 = safe_add_func_int16_t_s_s(l_1206, 5))
            {
                unsigned l_1227 = 0xC69DADCDL;
                char ***l_1245[8] = {&g_65, &g_65, &g_65, &g_65, &g_65, &g_65, &g_65, &g_65};
                unsigned char **l_1249 = &g_366;
                int *l_1259 = &g_763;
                int l_1266 = (-2L);
                short **l_1275 = (void*)0;
                int **l_1282 = &g_566;
                int i;
                for (g_763 = 18; (g_763 != (-26)); g_763--)
                {
                    unsigned l_1219 = 2UL;
                    unsigned short *l_1235[9][10] = {{&g_418[1][0][0], &g_418[5][0][0], &g_418[5][0][0], &g_418[0][1][0], &g_68, &g_240, (void*)0, (void*)0, &g_418[5][0][0], (void*)0}, {&g_418[1][0][0], &g_418[5][0][0], &g_418[5][0][0], &g_418[0][1][0], &g_68, &g_240, (void*)0, (void*)0, &g_418[5][0][0], (void*)0}, {&g_418[1][0][0], &g_418[5][0][0], &g_418[5][0][0], &g_418[0][1][0], &g_68, &g_240, (void*)0, (void*)0, &g_418[5][0][0], (void*)0}, {&g_418[1][0][0], &g_418[5][0][0], &g_418[5][0][0], &g_418[0][1][0], &g_68, &g_240, (void*)0, (void*)0, &g_418[5][0][0], (void*)0}, {&g_418[1][0][0], &g_418[5][0][0], &g_418[5][0][0], &g_418[0][1][0], &g_68, &g_240, (void*)0, (void*)0, &g_418[5][0][0], (void*)0}, {&g_418[1][0][0], &g_418[5][0][0], &g_418[5][0][0], &g_418[0][1][0], &g_68, &g_240, (void*)0, (void*)0, &g_418[5][0][0], (void*)0}, {&g_418[1][0][0], &g_418[5][0][0], &g_418[5][0][0], &g_418[0][1][0], &g_68, &g_240, (void*)0, (void*)0, &g_418[5][0][0], (void*)0}, {&g_418[1][0][0], &g_418[5][0][0], &g_418[5][0][0], &g_418[0][1][0], &g_68, &g_240, (void*)0, (void*)0, &g_418[5][0][0], (void*)0}, {&g_418[1][0][0], &g_418[5][0][0], &g_418[5][0][0], &g_418[0][1][0], &g_68, &g_240, (void*)0, (void*)0, &g_418[5][0][0], (void*)0}};
                    int *l_1237[1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_1237[i] = (void*)0;
                    l_1238[0] &= ((safe_sub_func_uint16_t_u_u((l_1236 = (safe_mul_func_int8_t_s_s(l_1219, (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((l_1226 = p_5), l_1227)), (safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(g_1095, p_3)), (((safe_mul_func_int8_t_s_s(l_1219, p_5)) , 0x88L) > l_1219))))), 2))))), l_1219)) ^ 3UL);
                }
            }
            if (p_4)
                continue;
        }
        else
        {
            unsigned l_1296 = 0xE39E42BCL;
            int l_1306 = 0x06AD8A1CL;
            int *l_1377 = &g_43;
            char l_1394[8];
            int i;
            for (i = 0; i < 8; i++)
                l_1394[i] = 0L;
            for (g_140 = 0; (g_140 == 41); g_140 = safe_add_func_uint16_t_u_u(g_140, 3))
            {
                unsigned *l_1288 = &g_140;
                int l_1295[5];
                int *l_1327[7][4][4] = {{{&g_763, (void*)0, &g_763, &g_43}, {&g_763, (void*)0, &g_763, &g_43}, {&g_763, (void*)0, &g_763, &g_43}, {&g_763, (void*)0, &g_763, &g_43}}, {{&g_763, (void*)0, &g_763, &g_43}, {&g_763, (void*)0, &g_763, &g_43}, {&g_763, (void*)0, &g_763, &g_43}, {&g_763, (void*)0, &g_763, &g_43}}, {{&g_763, (void*)0, &g_763, &g_43}, {&g_763, (void*)0, &g_763, &g_43}, {&g_763, (void*)0, &g_763, &g_43}, {&g_763, (void*)0, &g_763, &g_43}}, {{&g_763, (void*)0, &g_763, &g_43}, {&g_763, (void*)0, &g_763, &g_43}, {&g_763, (void*)0, &g_763, &g_43}, {&g_763, (void*)0, &g_763, &g_43}}, {{&g_763, (void*)0, &g_763, &g_43}, {&g_763, (void*)0, &g_763, &g_43}, {&g_763, (void*)0, &g_763, &g_43}, {&g_763, (void*)0, &g_763, &g_43}}, {{&g_763, (void*)0, &g_763, &g_43}, {&g_763, (void*)0, &g_763, &g_43}, {&g_763, (void*)0, &g_763, &g_43}, {&g_763, (void*)0, &g_763, &g_43}}, {{&g_763, (void*)0, &g_763, &g_43}, {&g_763, (void*)0, &g_763, &g_43}, {&g_763, (void*)0, &g_763, &g_43}, {&g_763, (void*)0, &g_763, &g_43}}};
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_1295[i] = 9L;
                if ((0UL | (((p_4 >= ((safe_unary_minus_func_int8_t_s(p_3)) , ((+p_5) ^ ((l_1288 != (void*)0) | (~(safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((!((l_1236 , ((*g_267) = (1UL ^ p_4))) == p_3)), p_5)), l_1295[3])), p_3))))))) , l_1238[0]) < l_1296)))
                {
                    unsigned char l_1317 = 249UL;
                    unsigned short *l_1342[3][7][2] = {{{&g_68, &g_240}, {&g_68, &g_240}, {&g_68, &g_240}, {&g_68, &g_240}, {&g_68, &g_240}, {&g_68, &g_240}, {&g_68, &g_240}}, {{&g_68, &g_240}, {&g_68, &g_240}, {&g_68, &g_240}, {&g_68, &g_240}, {&g_68, &g_240}, {&g_68, &g_240}, {&g_68, &g_240}}, {{&g_68, &g_240}, {&g_68, &g_240}, {&g_68, &g_240}, {&g_68, &g_240}, {&g_68, &g_240}, {&g_68, &g_240}, {&g_68, &g_240}}};
                    unsigned short **l_1341 = &l_1342[1][5][0];
                    int i, j, k;
                    if (p_3)
                    {
                        int l_1299 = 0x2A1D14BEL;
                        unsigned short *l_1314 = (void*)0;
                        unsigned short *l_1315 = &g_418[5][1][0];
                        l_1295[3] = ((*g_566) = ((safe_lshift_func_uint16_t_u_s(((*l_1315) = ((l_1299 , ((safe_rshift_func_uint16_t_u_u(0xD90EL, 7)) > (**g_284))) == (l_1238[0] & ((safe_sub_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(l_1306, (safe_unary_minus_func_uint8_t_u(0xB8L)))) | (((safe_sub_func_int32_t_s_s((((safe_mul_func_uint16_t_u_u(1UL, (safe_add_func_int8_t_s_s(((p_5 , p_3) , p_3), 0x14L)))) >= p_5) , (*g_566)), 0x58E5D45EL)) < (*g_285)) & l_1299)), l_1206)) && 0x0DL)))), l_1295[3])) & p_4));
                    }
                    else
                    {
                        int **l_1316 = &l_1258[0][1][1];
                        unsigned *l_1326 = &g_55[2][0][3];
                        unsigned short *l_1331[4];
                        unsigned short **l_1330 = &l_1331[1];
                        short *l_1340 = &g_333[3];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_1331[i] = (void*)0;
                        (*l_1316) = &g_17;
                        l_1327[5][1][1] = ((*l_1316) = func_27(p_3, (l_1317 == l_1295[3]), &l_1295[4], &l_1226, ((*l_1326) = ((p_5 | l_1317) != ((safe_mul_func_uint8_t_u_u(p_4, (safe_mul_func_int8_t_s_s((l_1306 = ((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_s(p_4, p_3)) >= l_1296), p_3)) | p_5)), p_3)))) < 8UL)))));


                        (**l_1316) = 0x09BB2ED7L;
                        l_1206 = ((safe_lshift_func_int8_t_s_s((p_4 && ((l_1317 && (((**l_1316) | (((((l_1330 = l_1330) != ((**l_1316) , (((*l_1340) = (safe_lshift_func_int8_t_s_u((((0x4138E6BFL & ((safe_mod_func_int32_t_s_s(((*g_566) = (((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((((*l_1326) ^= p_4) , (*g_285)) | (*g_267)) , p_5), g_43)), 0xE1DBL)) | 0x30L) , (**l_1316))), 0x9201CB55L)) >= l_1306)) , p_5) | p_4), 5))) , l_1341))) <= l_1238[0]) != p_5) , p_5)) != 0x27FC424CL)) == (**l_1316))), l_1343)) | (-1L));
                    }


                }
                else
                {
                    int l_1351 = 0x4D996C02L;
                    if (p_3)
                    {
                        unsigned l_1344[7] = {0x3F7E7C7CL, 4294967295UL, 0x3F7E7C7CL, 4294967295UL, 0x3F7E7C7CL, 4294967295UL, 0x3F7E7C7CL};
                        int i;
                        l_1344[3] &= ((**g_284) && (*g_267));
                        return p_5;
                    }
                    else
                    {
                        unsigned l_1347[7][6] = {{1UL, 4294967288UL, 0xFF490D2DL, 4294967294UL, 4294967294UL, 0xFF490D2DL}, {1UL, 4294967288UL, 0xFF490D2DL, 4294967294UL, 4294967294UL, 0xFF490D2DL}, {1UL, 4294967288UL, 0xFF490D2DL, 4294967294UL, 4294967294UL, 0xFF490D2DL}, {1UL, 4294967288UL, 0xFF490D2DL, 4294967294UL, 4294967294UL, 0xFF490D2DL}, {1UL, 4294967288UL, 0xFF490D2DL, 4294967294UL, 4294967294UL, 0xFF490D2DL}, {1UL, 4294967288UL, 0xFF490D2DL, 4294967294UL, 4294967294UL, 0xFF490D2DL}, {1UL, 4294967288UL, 0xFF490D2DL, 4294967294UL, 4294967294UL, 0xFF490D2DL}};
                        unsigned short *l_1348 = (void*)0;
                        unsigned short *l_1349 = &g_418[5][1][0];
                        unsigned short *l_1350[7][6] = {{&g_68, (void*)0, &g_68, &g_1262, (void*)0, &g_1262}, {&g_68, (void*)0, &g_68, &g_1262, (void*)0, &g_1262}, {&g_68, (void*)0, &g_68, &g_1262, (void*)0, &g_1262}, {&g_68, (void*)0, &g_68, &g_1262, (void*)0, &g_1262}, {&g_68, (void*)0, &g_68, &g_1262, (void*)0, &g_1262}, {&g_68, (void*)0, &g_68, &g_1262, (void*)0, &g_1262}, {&g_68, (void*)0, &g_68, &g_1262, (void*)0, &g_1262}};
                        int i, j;
                        (*g_267) ^= (((g_1262 = ((*l_1349) = ((!(safe_lshift_func_uint8_t_u_u(l_1347[2][5], 0))) , 0x1923L))) ^ l_1351) <= p_5);
                        return (*g_267);
                    }
                }


            }


            for (l_1210 = 0; (l_1210 > (-12)); l_1210 = safe_sub_func_int8_t_s_s(l_1210, 8))
            {
                int l_1365 = 0xCA7D8D76L;
                short *l_1373[9][2] = {{&g_328, &l_1343}, {&g_328, &l_1343}, {&g_328, &l_1343}, {&g_328, &l_1343}, {&g_328, &l_1343}, {&g_328, &l_1343}, {&g_328, &l_1343}, {&g_328, &l_1343}, {&g_328, &l_1343}};
                unsigned short *l_1378 = &g_68;
                char *****l_1383[3][6] = {{&g_391, &l_1382[0][3][0], &g_391, &l_1382[0][3][0], &g_391, &l_1382[0][3][0]}, {&g_391, &l_1382[0][3][0], &g_391, &l_1382[0][3][0], &g_391, &l_1382[0][3][0]}, {&g_391, &l_1382[0][3][0], &g_391, &l_1382[0][3][0], &g_391, &l_1382[0][3][0]}};
                int l_1388 = 0x5A405336L;
                int **l_1389 = &l_1258[1][1][2];
                int i, j;
            }
            if (((((l_1206 = (((g_150 >= (func_33(p_5) , (safe_sub_func_uint8_t_u_u(((*l_1377) || (l_1238[0] & p_5)), 0x06L)))) , (+l_1238[0])) , (l_1306 = (safe_mul_func_uint8_t_u_u((((*l_1377) = l_1343) | 0xB1L), p_3))))) || (**g_284)) | l_1394[7]) & 65535UL))
            {
                short l_1410 = 8L;
                int l_1411 = 5L;
                for (g_138 = 0; (g_138 <= 1); g_138 += 1)
                {
                    int **l_1395 = &l_1258[1][0][2];
                    (*l_1395) = &l_1306;
                    for (g_79 = 3; (g_79 >= 0); g_79 -= 1)
                    {
                        unsigned l_1396 = 4294967291UL;
                        int i, j, k;
                        l_1396 = ((*g_267) = (-2L));
                        if (g_333[g_79])
                            continue;
                        (*l_1377) &= 0L;
                    }
                }


                (*g_566) ^= p_3;
                if (((((((((*g_566) = (safe_rshift_func_uint8_t_u_u((l_1410 = ((safe_lshift_func_uint16_t_u_u(func_33(((((((*l_1377) = (safe_add_func_uint16_t_u_u(p_4, l_1403))) <= 0x4DCEEC66L) , l_1404) == (l_1238[0] , g_1108)) , (p_4 & (safe_add_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u(p_3, 0)) <= (-1L)), p_4))))), 10)) != p_5)), l_1411))) >= l_1411) >= p_4) && p_3) , (-9L)) || p_3) , 0x05E8105DL))
                {
                    short l_1413 = 0L;
                    int *l_1414 = &g_17;
                    char *****l_1421 = &l_1382[3][0][1];
                    char ******l_1420 = &l_1421;
                    l_1238[0] &= 0xDD0438D4L;
                    if ((safe_unary_minus_func_int16_t_s(p_5)))
                    {
                        l_1236 = ((*g_566) |= 0x1E0BF411L);
                        (*l_1377) = 0x0D54F632L;
                    }
                    else
                    {
                        int **l_1415 = &g_1045;
                        if (l_1413)
                            break;
                        (*l_1415) = l_1414;

                        ;
                        if ((*l_1377))
                            break;
                    }
                    (*l_1414) &= (safe_mod_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(l_1226, l_1411)) || l_1226), (**g_284)));
                }
                else
                {
                    int *l_1422[5] = {&l_1226, &l_1236, &l_1226, &l_1236, &l_1226};
                    int i;
                    l_1422[1] = &g_763;


                }
                for (l_1236 = (-26); (l_1236 < (-27)); l_1236 = safe_sub_func_int8_t_s_s(l_1236, 9))
                {
                    for (g_241 = 0; (g_241 != (-25)); --g_241)
                    {
                        return p_4;
                    }
                }
            }
            else
            {
                unsigned short l_1442[6] = {0x6FC8L, 0x6FC8L, 65530UL, 0x6FC8L, 0x6FC8L, 65530UL};
                int i;
                for (g_88 = 0; (g_88 <= 2); g_88 += 1)
                {
                    unsigned l_1433[6] = {0xCE53A23EL, 7UL, 0xCE53A23EL, 7UL, 0xCE53A23EL, 7UL};
                    int i;
                    for (g_1262 = 0; (g_1262 <= 4); g_1262 += 1)
                    {
                        unsigned short *l_1436 = (void*)0;
                        unsigned short *l_1437 = &g_418[4][0][0];
                        int i;
                        l_1236 = (((safe_rshift_func_int8_t_s_u((g_100[g_88] = ((safe_add_func_int32_t_s_s(g_100[g_88], ((*l_1377) = ((safe_add_func_int16_t_s_s(g_713[g_1262], l_1433[2])) > (((((*l_1437) ^= ((**l_1404) = ((safe_mod_func_uint8_t_u_u(p_3, l_1433[2])) ^ (-1L)))) <= (+(safe_lshift_func_int16_t_s_u(func_6(((*g_566) |= ((p_4 || l_1433[2]) == (safe_rshift_func_int16_t_s_s(1L, l_1442[1]))))), 15)))) || p_5) < l_1443[5][1][0]))))) & 0xE2L)), 7)) <= l_1366) > p_3);
                        return p_5;
                    }
                    return l_1433[1];
                }
            }


        }


        for (g_68 = 0; (g_68 >= 51); g_68 = safe_add_func_int8_t_s_s(g_68, 3))
        {
            int *l_1452 = &g_763;
        }
        (*g_566) = (safe_sub_func_uint8_t_u_u((0L | ((g_333[0] = ((safe_lshift_func_uint8_t_u_u((((func_33(p_3) & l_1527) != l_1528) > 0xE2DD1BCDL), 1)) || func_6((p_5 & ((**g_284) = ((*g_285) && (safe_add_func_int32_t_s_s(((*g_267) = (((*l_1531) = &g_1518) == l_1532)), l_1533)))))))) , (**g_1518))), p_4));
    }


    for (l_1204 = 0; (l_1204 <= 3); l_1204 += 1)
    {
        int *l_1535 = (void*)0;
        int l_1539 = 0x94767C97L;
        char **l_1542 = &g_153[6][3][3];
        unsigned char l_1547 = 0xE6L;
        unsigned short l_1557 = 9UL;
        unsigned short l_1595 = 0UL;
        unsigned char ***l_1617 = &g_365[2];
        int l_1690[3];
        unsigned l_1723[6];
        short *l_1729 = &l_1727[3];
        short **l_1728 = &l_1729;
        int l_1749 = 1L;
        int i;
        for (i = 0; i < 3; i++)
            l_1690[i] = 0x160F5E6EL;
        for (i = 0; i < 6; i++)
            l_1723[i] = 0x71FBF6B0L;
        (**g_1517) = l_1535;

        ;
        (**g_1517) = (**l_1532);
        if (((*g_566) = l_1547))
        {
            int **l_1548 = (void*)0;
            int **l_1549 = &l_1451[0][4];
            int l_1551 = (-1L);
            char ***l_1552 = &g_65;
            char ******l_1554[7][10];
            char l_1555 = 0x71L;
            int l_1556[10][4][1];
            unsigned l_1594 = 4294967295UL;
            int l_1615 = 0xF04E2248L;
            short l_1654[9];
            unsigned *l_1673[6] = {&g_351, &g_351, &g_351, &g_351, &g_351, &g_351};
            unsigned char ****l_1681 = &g_1618;
            unsigned ***l_1702 = &g_284;
            int i, j, k;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 10; j++)
                    l_1554[i][j] = &l_1464[6][5][2];
            }
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_1556[i][j][k] = 5L;
                }
            }
            for (i = 0; i < 9; i++)
                l_1654[i] = 0xF2B0L;
            (*l_1549) = ((**g_1517) = (**l_1532));
            l_1556[7][2][0] = (g_763 , (safe_unary_minus_func_int32_t_s(((*g_566) = ((((l_1551 &= p_3) == (!(((p_5 && 0xB286L) == p_3) >= l_1539))) < 0xB7L) <= 0xA15869BEL)))));
            for (g_863 = 3; (g_863 >= 0); g_863 -= 1)
            {
                int l_1561 = 0x0CFB8379L;
                int l_1564 = (-4L);
                int l_1565 = 0xB4EC4858L;
                unsigned ***l_1573 = &l_1521;
                char *l_1576 = &g_100[1];
                char ***l_1579[3];
                short *l_1591 = &l_1479;
                unsigned short l_1596 = 0x1C82L;
                int i;
                for (i = 0; i < 3; i++)
                    l_1579[i] = &l_1542;
                for (l_1206 = 3; (l_1206 >= 0); l_1206 -= 1)
                {
                    int l_1572 = 0x365936E8L;
                    char *l_1590 = &g_713[3];
                    int i;
                    (*g_566) = func_6(l_1557);

                    ;
                    if ((safe_rshift_func_int8_t_s_s((((((l_1561 = (p_5 , g_1560[4][3])) < 0xDCL) | (p_4 = (safe_rshift_func_uint8_t_u_s(l_1564, (((*g_267) = ((l_1565 = p_4) != p_3)) || (*g_566)))))) != l_1564) , 0L), 4)))
                    {
                        int l_1574 = 0x77F6670AL;
                        l_1574 ^= (((*g_566) , l_1573) == (g_55[4][5][5] , &g_1519));
                        if ((*g_267))
                            break;
                        l_1565 = ((***l_1532) = (***g_1517));
                    }
                    else
                    {
                        int l_1575 = 5L;
                        short *l_1588[4][10][6] = {{{&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}}, {{&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}}, {{&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}}, {{&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}, {&g_333[l_1206], &g_333[3], (void*)0, (void*)0, &l_1528, &g_333[l_1206]}}};
                        unsigned char l_1589 = 255UL;
                        int i, j, k;
                        (*l_1549) = (**l_1532);
                        (*g_1518) = (void*)0;

                        ;
                        (*l_1549) = ((**l_1532) = (**g_1517));
                        (*g_566) &= (l_1591 != &p_4);
                    }

                    ;
                }
                (*l_1549) = &l_1564;


                (**g_1517) = (**l_1532);
            }

            ;
            if (p_3)
            {
                int *l_1603 = &g_416;
                int **l_1602 = &l_1603;
                int l_1614 = 2L;
                int l_1619 = 1L;
                char *****l_1634 = &g_391;
                char l_1639 = 0L;
                int ****l_1645[7] = {&g_446, &g_446, (void*)0, &g_446, &g_446, (void*)0, &g_446};
                int *****l_1646 = (void*)0;
                int *****l_1647 = &l_1645[2];
                int i;
                if ((safe_mul_func_int16_t_s_s((g_333[l_1204] &= (((l_1599 | (!((safe_mod_func_int32_t_s_s(p_5, (*g_285))) != ((**g_284) > ((((*l_1602) = (void*)0) != (void*)0) > g_1604[1][7][0]))))) , p_4) & g_55[4][2][2])), p_3)))
                {
                    l_1614 = (((*g_285) = (g_333[l_1204] || p_5)) , ((safe_mul_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u((g_1560[3][0] < (4L >= p_5)), 6)) != (safe_unary_minus_func_uint8_t_u((p_3 < p_4)))) , ((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((g_79 | g_55[4][2][2]) && p_3), g_39)), g_333[l_1204])) == p_5)), 248UL)) | p_4));
                }
                else
                {
                    unsigned char ****l_1616[10][5] = {{(void*)0, &l_1267[3], &l_1267[4], (void*)0, &l_1267[3]}, {(void*)0, &l_1267[3], &l_1267[4], (void*)0, &l_1267[3]}, {(void*)0, &l_1267[3], &l_1267[4], (void*)0, &l_1267[3]}, {(void*)0, &l_1267[3], &l_1267[4], (void*)0, &l_1267[3]}, {(void*)0, &l_1267[3], &l_1267[4], (void*)0, &l_1267[3]}, {(void*)0, &l_1267[3], &l_1267[4], (void*)0, &l_1267[3]}, {(void*)0, &l_1267[3], &l_1267[4], (void*)0, &l_1267[3]}, {(void*)0, &l_1267[3], &l_1267[4], (void*)0, &l_1267[3]}, {(void*)0, &l_1267[3], &l_1267[4], (void*)0, &l_1267[3]}, {(void*)0, &l_1267[3], &l_1267[4], (void*)0, &l_1267[3]}};
                    int l_1622 = 4L;
                    int l_1627[9][9] = {{0x8DDCCDA0L, 8L, 0xAB90F133L, 8L, 0x8DDCCDA0L, 0xDE7FB1F1L, 0x8DDCCDA0L, 8L, 0xAB90F133L}, {0x8DDCCDA0L, 8L, 0xAB90F133L, 8L, 0x8DDCCDA0L, 0xDE7FB1F1L, 0x8DDCCDA0L, 8L, 0xAB90F133L}, {0x8DDCCDA0L, 8L, 0xAB90F133L, 8L, 0x8DDCCDA0L, 0xDE7FB1F1L, 0x8DDCCDA0L, 8L, 0xAB90F133L}, {0x8DDCCDA0L, 8L, 0xAB90F133L, 8L, 0x8DDCCDA0L, 0xDE7FB1F1L, 0x8DDCCDA0L, 8L, 0xAB90F133L}, {0x8DDCCDA0L, 8L, 0xAB90F133L, 8L, 0x8DDCCDA0L, 0xDE7FB1F1L, 0x8DDCCDA0L, 8L, 0xAB90F133L}, {0x8DDCCDA0L, 8L, 0xAB90F133L, 8L, 0x8DDCCDA0L, 0xDE7FB1F1L, 0x8DDCCDA0L, 8L, 0xAB90F133L}, {0x8DDCCDA0L, 8L, 0xAB90F133L, 8L, 0x8DDCCDA0L, 0xDE7FB1F1L, 0x8DDCCDA0L, 8L, 0xAB90F133L}, {0x8DDCCDA0L, 8L, 0xAB90F133L, 8L, 0x8DDCCDA0L, 0xDE7FB1F1L, 0x8DDCCDA0L, 8L, 0xAB90F133L}, {0x8DDCCDA0L, 8L, 0xAB90F133L, 8L, 0x8DDCCDA0L, 0xDE7FB1F1L, 0x8DDCCDA0L, 8L, 0xAB90F133L}};
                    char *****l_1638 = (void*)0;
                    int *l_1640 = &l_1226;
                    int i, j;
                    l_1614 = ((*g_566) & l_1615);
                    l_1619 = (((l_1617 = &g_365[5]) != (g_1618 = (void*)0)) == (l_1614 = 0xFDL));

                    ;
                    if ((((l_1614 , g_1560[4][3]) , ((((safe_sub_func_int8_t_s_s(l_1622, (l_1627[7][4] |= (safe_mod_func_int16_t_s_s(p_4, (safe_lshift_func_uint8_t_u_s(0x40L, 4))))))) && 0x87L) & ((((((**l_1404) = 65528UL) && (p_5 , (~(~(l_1622 , g_1604[1][7][0]))))) && (-1L)) , 0xB5L) , g_1628)) == l_1622)) != l_1622))
                    {
                        int l_1629[9] = {1L, 0x18710C41L, 1L, 0x18710C41L, 1L, 0x18710C41L, 1L, 0x18710C41L, 1L};
                        int i;
                        l_1640 = func_27((l_1539 |= ((-1L) || l_1629[1])), (safe_lshift_func_int8_t_s_u(p_4, l_1639)), (*g_1518), &l_1629[7], p_3);

                        ;
                    }
                    else
                    {
                        (**l_1532) = &l_1619;

                        ;
                        return l_1619;


                    }

                    ;
                }

                ;
                if ((safe_mul_func_uint16_t_u_u(0UL, (((*l_1647) = ((safe_add_func_int32_t_s_s(p_5, (l_1619 = ((g_333[l_1204] = ((p_5 , l_1639) ^ 0x57L)) , (l_1539 , ((((*l_1521) = &p_3) == (p_5 , l_1603)) , p_5)))))) , l_1645[0])) != (void*)0))))
                {
                    unsigned **l_1656[3][7][9] = {{{&g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285}, {&g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285}, {&g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285}, {&g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285}, {&g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285}, {&g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285}, {&g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285}}, {{&g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285}, {&g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285}, {&g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285}, {&g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285}, {&g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285}, {&g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285}, {&g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285}}, {{&g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285}, {&g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285}, {&g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285}, {&g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285}, {&g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285}, {&g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285}, {&g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285, &g_285}}};
                    int l_1657 = 4L;
                    int i, j, k;
                    (*g_566) &= p_4;
                    for (g_1262 = 0; (g_1262 <= 8); g_1262 += 1)
                    {
                        short **l_1653 = (void*)0;
                        int i;
                        l_1556[7][2][0] &= ((*g_566) = ((safe_mod_func_uint8_t_u_u(l_1593[(l_1204 + 5)], l_1593[(l_1204 + 1)])) , (((safe_unary_minus_func_uint16_t_u((((*g_566) <= (((p_5 < (safe_rshift_func_int8_t_s_u((l_1653 != l_1653), l_1654[2]))) < ((*g_285) ^ l_1593[(l_1204 + 1)])) & 0xDCL)) , p_5))) < l_1655) & p_5)));
                        l_1657 = ((void*)0 != l_1656[1][5][4]);
                        return l_1657;
                    }
                    (*g_1518) = (**g_1517);
                }
                else
                {
                    for (l_1539 = 0; (l_1539 == (-26)); l_1539 = safe_sub_func_uint32_t_u_u(l_1539, 1))
                    {
                        int *l_1660[7][5] = {{&g_17, (void*)0, &l_1551, &g_763, (void*)0}, {&g_17, (void*)0, &l_1551, &g_763, (void*)0}, {&g_17, (void*)0, &l_1551, &g_763, (void*)0}, {&g_17, (void*)0, &l_1551, &g_763, (void*)0}, {&g_17, (void*)0, &l_1551, &g_763, (void*)0}, {&g_17, (void*)0, &l_1551, &g_763, (void*)0}, {&g_17, (void*)0, &l_1551, &g_763, (void*)0}};
                        int i, j;
                        (**l_1532) = l_1660[2][3];

                        ;
                        return p_5;


                    }
                }

                ;
            }
            else
            {
                unsigned l_1684 = 0x5AE46838L;
                int ***l_1695 = &g_1518;
                unsigned ***l_1700 = &g_284;
                unsigned char l_1707[4];
                unsigned short l_1709[8];
                int *l_1716 = (void*)0;
                int l_1718[7][1] = {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}};
                int i, j;
                for (i = 0; i < 4; i++)
                    l_1707[i] = 0x8AL;
                for (i = 0; i < 8; i++)
                    l_1709[i] = 65532UL;
                for (l_1555 = 0; (l_1555 <= (-7)); --l_1555)
                {
                    unsigned char l_1689 = 8UL;
                    int ***l_1696 = &g_1518;
                    int l_1697 = 0xFA7AF7C0L;
                    for (g_79 = 0; (g_79 < 19); g_79 = safe_add_func_int16_t_s_s(g_79, 6))
                    {
                        l_1678 |= ((safe_mul_func_uint16_t_u_u(1UL, (p_5 >= (safe_add_func_int16_t_s_s(g_351, (safe_mul_func_uint8_t_u_u((~((safe_mul_func_uint16_t_u_u(((void*)0 == l_1673[5]), (((safe_mul_func_uint16_t_u_u(p_3, (safe_rshift_func_uint8_t_u_u(251UL, p_4)))) , g_79) > p_5))) || p_3)), 0x56L))))))) < p_4);
                    }
                    if (p_4)
                    {
                        unsigned char *****l_1682 = &l_1681;
                        short *l_1683[9][5] = {{(void*)0, &g_328, &l_1479, &l_1599, &l_1599}, {(void*)0, &g_328, &l_1479, &l_1599, &l_1599}, {(void*)0, &g_328, &l_1479, &l_1599, &l_1599}, {(void*)0, &g_328, &l_1479, &l_1599, &l_1599}, {(void*)0, &g_328, &l_1479, &l_1599, &l_1599}, {(void*)0, &g_328, &l_1479, &l_1599, &l_1599}, {(void*)0, &g_328, &l_1479, &l_1599, &l_1599}, {(void*)0, &g_328, &l_1479, &l_1599, &l_1599}, {(void*)0, &g_328, &l_1479, &l_1599, &l_1599}};
                        int l_1691 = 0xDB469C93L;
                        int ***l_1694 = &g_1518;
                        int i, j;
                        (*g_1518) = ((l_1691 = ((((((safe_rshift_func_int16_t_s_u((l_1689 = ((((*g_285) = ((p_4 = ((&g_1618 != ((*l_1682) = l_1681)) | (+p_4))) <= (l_1684 & (safe_add_func_int16_t_s_s(((safe_add_func_int16_t_s_s(1L, ((((**l_1404) = g_17) , &l_1467) == (void*)0))) >= (p_3 >= 0L)), 3UL))))) , &p_4) != (void*)0)), 15)) , 0x54L) | p_5) & l_1690[2]) >= p_3) , l_1691)) , (**g_1517));
                        l_1691 |= (safe_rshift_func_uint16_t_u_s(0xF868L, 7));
                        (*g_566) = 1L;
                        l_1697 &= ((0xF56A2B60L >= ((((l_1689 , l_1694) == (l_1696 = l_1695)) , p_4) , 0xD6C1094CL)) , 1L);
                    }
                    else
                    {
                        if (p_4)
                            break;
                    }
                    if (p_4)
                        continue;
                    for (g_79 = 0; (g_79 <= (-28)); g_79 = safe_sub_func_uint32_t_u_u(g_79, 2))
                    {
                        unsigned ****l_1701[4][7];
                        int *l_1717 = &g_1582;
                        int i, j;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 7; j++)
                                l_1701[i][j] = &l_1700;
                        }
                        (*g_566) = (((l_1702 = l_1700) == (void*)0) , (safe_sub_func_int8_t_s_s(((p_3 , &g_1618) != (void*)0), (p_4 && (safe_add_func_int8_t_s_s(p_5, (((l_1697 = (l_1707[1] , (-2L))) , (*g_566)) < 0x82EF456EL)))))));
                        (*g_566) |= (((safe_unary_minus_func_int32_t_s(p_3)) & (l_1709[3] , 0x0AB633ACL)) < (0L <= (p_5 >= (safe_sub_func_int32_t_s_s(1L, (safe_sub_func_uint32_t_u_u((((safe_mul_func_int16_t_s_s(p_4, p_3)) , l_1673[5]) != l_1716), (-1L))))))));
                        (**l_1696) = l_1717;

                        ;
                    }
                }

                ;
                l_1615 ^= (l_1718[5][0] ^= ((*g_566) &= p_5));
                if (p_5)
                    break;
            }

            ;
        }
        else
        {
            short *l_1726 = &l_1599;
            unsigned *l_1730 = (void*)0;
            unsigned *l_1731 = &g_1364;
            int l_1750[8] = {0x993A9166L, 0x993A9166L, 0x92BD28B0L, 0x993A9166L, 0x993A9166L, 0x92BD28B0L, 0x993A9166L, 0x993A9166L};
            int l_1752[3];
            int *l_1753[1][2];
            short ****l_1766 = &l_1205;
            short ****l_1768[6] = {&g_837, (void*)0, &g_837, (void*)0, &g_837, (void*)0};
            short *****l_1767[6] = {&l_1766, &l_1768[2], &l_1766, &l_1768[2], &l_1766, &l_1768[2]};
            int i, j;
            for (i = 0; i < 3; i++)
                l_1752[i] = 0x706A65B1L;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1753[i][j] = &l_1226;
            }
            if (((((g_79 , (safe_sub_func_int32_t_s_s(((((*l_1726) ^= (safe_lshift_func_uint16_t_u_u(((*l_1405) = (func_33(l_1723[5]) , (safe_rshift_func_uint8_t_u_u(p_4, 6)))), 5))) | (p_4 , g_55[3][2][3])) ^ 0x3DD16811L), ((*l_1731) &= (p_5 , ((((l_1727[1] , l_1728) != (void*)0) , p_5) >= p_5)))))) , 65535UL) & p_3) , (***g_1517)))
            {
                char *l_1732 = &g_713[1];
                unsigned l_1733 = 4UL;
                (**g_1518) = ((l_1690[2] &= (g_890 || ((*l_1729) = (l_1733 , (safe_sub_func_uint16_t_u_u((p_5 && ((~((*l_1538) = p_5)) , l_1736)), ((safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((p_3 >= ((*l_1732) = l_1547)), (0x3977EA96L | p_4))), 7)) || (***l_1532)))))))) , 0x58222117L);
            }
            else
            {
                int l_1743 = 4L;
                int l_1744 = 0x51A7E937L;
                int l_1747 = 0x9A738850L;
                int *l_1748 = &g_1095;
                unsigned char ****l_1751 = &l_1617;
                l_1753[0][0] = (**g_1517);


            }

            ;

            l_1539 = ((*g_267) = (safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(0x58L, 0)), (0xFE11L > (safe_lshift_func_uint16_t_u_u((((*l_1726) = ((**l_1728) = ((*g_285) ^ (p_4 | (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(0x6FL, p_3)), ((*g_566) | ((l_1766 == (l_1769 = &l_1205)) , (*g_285))))))))) | p_4), g_79))))), 0xF6L)));

            ;
            (*g_267) &= g_1770[1];
        }

        ;
        if (p_3)
            continue;
    }

    ;

    ;
    ;
    ;
    return p_3;
}







static unsigned char func_6(int p_7)
{
    char l_1189 = 0x7FL;
    unsigned char ***l_1196 = &g_365[2];
    short *l_1197 = &g_150;
    int **l_1199[10];
    int ***l_1198 = &l_1199[9];
    unsigned char *l_1200 = &g_88;
    unsigned char l_1201 = 8UL;
    int i;
    for (i = 0; i < 10; i++)
        l_1199[i] = (void*)0;
    l_1189 = ((*g_566) = func_33(p_7));


    (*g_566) = (l_1201 && p_7);
    return p_7;
}







static int func_8(int p_9, short p_10)
{
    unsigned l_16 = 0x1F6F0842L;
    int *l_24 = (void*)0;
    char *l_37 = (void*)0;
    char *l_38 = &g_39;
    int **l_762 = &g_566;
    int *l_1087 = (void*)0;
    int **l_1178[4][7] = {{&g_267, &l_1087, (void*)0, (void*)0, (void*)0, (void*)0, &l_1087}, {&g_267, &l_1087, (void*)0, (void*)0, (void*)0, (void*)0, &l_1087}, {&g_267, &l_1087, (void*)0, (void*)0, (void*)0, (void*)0, &l_1087}, {&g_267, &l_1087, (void*)0, (void*)0, (void*)0, (void*)0, &l_1087}};
    int *l_1179 = &g_79;
    int i, j;
    l_1179 = ((*l_762) = func_12(((l_16 , (-1L)) , 7L), ((g_17 , func_18(&g_17, l_24, g_17, (safe_add_func_uint32_t_u_u((((*l_762) = func_27(p_9, func_33(((*l_38) |= (safe_sub_func_uint16_t_u_u((l_24 != &g_17), (-3L))))), l_24, l_24, g_241)) == &p_9), g_88)), g_100[0])) == l_1087), p_10));




    ;

    ;
    (*g_566) = (p_9 > p_10);
    return p_10;
}







static int * func_12(short p_13, unsigned char p_14, unsigned char p_15)
{
    char l_1088 = 0x42L;
    unsigned short l_1089 = 0x903BL;
    int *l_1090 = &g_763;
    short ****l_1112 = &g_228;
    int l_1133[6] = {0x888C28D7L, 0x47B9DC13L, 0x888C28D7L, 0x47B9DC13L, 0x888C28D7L, 0x47B9DC13L};
    char ***l_1149 = (void*)0;
    int i;
    l_1089 = (p_13 , (l_1088 && ((l_1088 == l_1088) | func_33(l_1088))));
    l_1090 = l_1090;
    for (g_450 = 0; (g_450 != 31); g_450 = safe_add_func_uint8_t_u_u(g_450, 3))
    {
        short l_1104 = 1L;
        int l_1105[3];
        unsigned char l_1117 = 0x41L;
        int **l_1125 = (void*)0;
        int ***l_1124[5][8][2] = {{{&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}}, {{&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}}, {{&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}}, {{&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}}, {{&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}, {&l_1125, &l_1125}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1105[i] = 2L;
        for (g_138 = 0; (g_138 > 27); g_138++)
        {
            unsigned l_1113 = 0x80C520A5L;
            int **l_1123[3];
            int ***l_1122 = &l_1123[0];
            char l_1157 = (-3L);
            short l_1175[4][6] = {{6L, (-3L), 0x1913L, (-3L), 6L, (-3L)}, {6L, (-3L), 0x1913L, (-3L), 6L, (-3L)}, {6L, (-3L), 0x1913L, (-3L), 6L, (-3L)}, {6L, (-3L), 0x1913L, (-3L), 6L, (-3L)}};
            int i, j;
            for (i = 0; i < 3; i++)
                l_1123[i] = &g_566;
            (*g_566) |= (g_1095 | (safe_sub_func_uint8_t_u_u((0x4277BFC7L <= (safe_mul_func_int16_t_s_s(((0L & 5L) ^ ((4294967295UL < (safe_rshift_func_uint16_t_u_u(((l_1105[1] ^= (p_15 ^ (safe_add_func_uint8_t_u_u(l_1104, (p_14 == (~(*l_1090))))))) & 246UL), 9))) <= 1UL)), (*l_1090)))), l_1104)));
            for (g_630 = 0; (g_630 == 9); g_630 = safe_add_func_int32_t_s_s(g_630, 1))
            {
                int *l_1115 = &g_43;
                int ****l_1126 = (void*)0;
                int ****l_1127 = &g_446;
                int ****l_1128 = &l_1124[4][6][0];
                short l_1131 = (-1L);
                unsigned char *l_1132 = &g_88;
                if (p_13)
                {
                    (*l_1090) = (g_1108 != (void*)0);
                    (*g_566) |= (l_1105[1] = 0x46E77E49L);
                }
                else
                {
                    unsigned short *l_1109 = (void*)0;
                    unsigned short *l_1110 = (void*)0;
                    unsigned short *l_1111 = &g_240;
                    int *l_1114 = &l_1105[1];
                    if (((((*l_1111) = 0x7047L) , l_1112) != (void*)0))
                    {
                        (*l_1090) |= (*g_566);
                        if (l_1113)
                            continue;
                        (*g_566) &= 0xCD964645L;
                    }
                    else
                    {
                        return l_1090;




                    }
                    l_1115 = l_1090;

                    ;
                }

                ;
                for (g_328 = 0; (g_328 >= 0); g_328 -= 1)
                {
                    int **l_1116 = &g_1045;
                    (*l_1116) = &l_1105[1];

                    ;
                }
                l_1133[3] ^= (((l_1117 > (safe_add_func_int32_t_s_s(((*g_566) = 0x18162D52L), (0xF37F2547L & (*l_1090))))) > ((*l_1132) = ((p_14 || ((safe_lshift_func_uint8_t_u_s(l_1117, 3)) , (((l_1122 == ((*l_1128) = ((*l_1127) = l_1124[3][1][0]))) > (safe_sub_func_int32_t_s_s(0L, 0x363F2610L))) , l_1131))) <= p_13))) , p_13);
            }
            for (g_68 = (-16); (g_68 < 28); g_68 = safe_add_func_uint32_t_u_u(g_68, 9))
            {
                char l_1147 = (-2L);
                unsigned short *l_1148 = &g_240;
                int l_1158 = 1L;
                int *l_1172 = (void*)0;
                int *****l_1176 = &g_656;
                unsigned char *l_1177 = &l_1117;
            }
        }



    }



    return &g_43;


}







static int * func_18(int * p_19, int * p_20, int p_21, unsigned char p_22, unsigned p_23)
{
    unsigned char **l_772 = &g_366;
    int l_774 = 0xDE8B219DL;
    int l_775 = (-9L);
    char ***l_784 = &g_65;
    short *l_807 = &g_150;
    char l_816 = 9L;
    int l_850 = 0x8EB9971BL;
    char l_880 = 0L;
    int l_897 = 0L;
    unsigned char l_906 = 0x8EL;
    char *l_911 = &g_39;
    unsigned **l_920 = &g_285;
    unsigned l_935 = 0xDECC0FF6L;
    unsigned short l_942 = 0UL;
    short **l_955 = &l_807;
    int l_1042 = 0x128A68B4L;
    int *l_1085[10] = {&g_43, &l_897, &g_43, &l_897, &g_43, &l_897, &g_43, &l_897, &g_43, &l_897};
    int *l_1086 = &l_850;
    int i;
    if ((*p_19))
    {
        return p_20;


    }
    else
    {
        int l_766 = (-2L);
        char ***l_781 = &g_65;
        short *l_794 = &g_333[1];
        short **l_793 = &l_794;
        int *l_795 = &g_43;
        char l_927 = 0x11L;
        unsigned short l_943 = 0xB37BL;
        unsigned char l_952 = 1UL;
        int l_957 = 0x8975DD11L;
        unsigned **l_1036 = &g_285;
        if ((*g_566))
        {
            unsigned l_767 = 0x21A320B2L;
            unsigned char ***l_780 = &l_772;
            int **l_783 = &g_566;
            short *l_819 = (void*)0;
            unsigned **l_838 = &g_285;
            unsigned short l_843 = 0x4C08L;
            char *l_844 = (void*)0;
            if ((g_763 > p_21))
            {
                unsigned short *l_768 = &g_68;
                int l_771 = 0x2D7251EDL;
                unsigned char ***l_773 = &g_365[2];
                (*p_19) = (func_33((!p_22)) != ((safe_mul_func_uint16_t_u_u((l_766 , ((*l_768) = l_767)), g_100[1])) , (((l_774 = (safe_rshift_func_uint8_t_u_s(l_771, (((*l_773) = l_772) == (void*)0)))) != (l_766 = (l_775 ^ 0x27L))) && 0x8F57L)));
            }
            else
            {
                return p_20;


            }
            for (g_763 = 0; (g_763 != (-15)); g_763--)
            {
                unsigned char *l_782[10][3] = {{&g_630, &g_630, &g_88}, {&g_630, &g_630, &g_88}, {&g_630, &g_630, &g_88}, {&g_630, &g_630, &g_88}, {&g_630, &g_630, &g_88}, {&g_630, &g_630, &g_88}, {&g_630, &g_630, &g_88}, {&g_630, &g_630, &g_88}, {&g_630, &g_630, &g_88}, {&g_630, &g_630, &g_88}};
                int l_829 = 0x1EEACEC1L;
                short ****l_836 = &g_228;
                unsigned ***l_839[2];
                char *l_840 = &g_713[4];
                char **l_845 = (void*)0;
                char **l_846 = &g_153[6][3][3];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_839[i] = &g_284;
            }
        }
        else
        {
            int l_861 = 0x566552EAL;
            int *l_864 = &g_79;
            unsigned short *l_900 = &g_68;
            int l_925 = (-3L);
            char *l_956[4];
            int i;
            for (i = 0; i < 4; i++)
                l_956[i] = &g_100[2];
            if ((safe_sub_func_int32_t_s_s(((void*)0 != (*g_64)), (safe_lshift_func_int8_t_s_u(((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((safe_unary_minus_func_uint16_t_u((func_33(((0x38L & (l_774 < ((*g_285) , (((*l_795) |= (*g_566)) , func_33(l_775))))) , ((((func_33((l_861 , (*l_795))) , (void*)0) != (void*)0) != p_21) , p_23))) <= 0x9BL))) , p_23), 1)), 2L)) <= g_862), g_863)))))
            {
                p_19 = l_864;

                ;
                for (g_240 = 0; (g_240 != 49); g_240 = safe_add_func_int8_t_s_s(g_240, 5))
                {
                    short l_881 = (-7L);
                    for (l_861 = 0; (l_861 != 4); l_861 = safe_add_func_uint32_t_u_u(l_861, 8))
                    {
                        unsigned **l_875 = &g_285;
                        unsigned char *l_876 = &g_88;
                        unsigned char *l_877 = &g_630;
                        l_795 = p_19;

                        ;
                        if (l_774)
                            continue;
                        if ((*p_19))
                            break;
                        (*g_267) = (safe_mod_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((0xABL == (*l_795)) < p_21), (safe_add_func_int16_t_s_s(((*l_794) &= ((p_21 && (l_875 != (void*)0)) != ((*l_877) = ((*l_876) = 0x80L)))), 0x54F7L)))) >= ((safe_sub_func_int32_t_s_s(((l_880 && p_23) <= 1UL), (*l_795))) , p_23)), l_881));
                    }
                }

                ;
            }
            else
            {
                short l_882 = 5L;
                unsigned short l_885 = 0UL;
                if (l_882)
                {
                    for (p_22 = 0; (p_22 <= 8); p_22 += 1)
                    {
                        return &g_763;


                    }
                    return p_20;


                }
                else
                {
                    short l_888 = 0x0620L;
                    for (g_43 = (-16); (g_43 <= 17); g_43 = safe_add_func_uint16_t_u_u(g_43, 2))
                    {
                        l_885 ^= (*p_19);
                    }
                    (*g_566) = (safe_mul_func_uint8_t_u_u(l_888, p_23));
                }
            }

            ;
            ;
            for (g_140 = 0; (g_140 <= 8); g_140 += 1)
            {
                unsigned short *l_889 = &g_68;
                int **l_891 = (void*)0;
                int **l_892 = &g_267;
                (*p_19) = (&p_20 == &p_19);
                (*l_864) = ((**g_284) , (((*l_889) = l_775) && ((*l_889) = ((g_890 = 9UL) ^ g_416))));
                (*l_892) = p_20;

                ;
            }

            ;
            if ((safe_add_func_uint16_t_u_u(((p_22 == (((safe_sub_func_uint32_t_u_u(0xDCA408B0L, 5L)) == (l_897 >= (safe_lshift_func_int8_t_s_s((((*l_900) = p_21) || 65531UL), 7)))) , ((l_775 ^= 0x3DL) , (((!4294967295UL) ^ ((*g_566) &= (((void*)0 == (*l_781)) > 0x24L))) ^ p_22)))) , (*l_795)), 0x5813L)))
            {
                unsigned l_903 = 1UL;
                unsigned char *l_904 = (void*)0;
                unsigned char *l_905 = &g_88;
                (*l_864) |= (l_903 == ((*l_905) = (p_22 = (((*g_284) = (*g_284)) == &l_903))));
                return p_20;


            }
            else
            {
                int l_907 = (-1L);
                char *l_908 = &g_100[1];
                char *l_910 = &l_816;
                int l_947 = 0x7E279953L;
                g_365[0] = (void*)0;


                (*p_19) = (&p_22 != &p_22);
                if (l_906)
                {
                    char **l_909[10][7][3] = {{{&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}}, {{&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}}, {{&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}}, {{&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}}, {{&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}}, {{&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}}, {{&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}}, {{&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}}, {{&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}}, {{&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}, {&l_908, &g_153[6][3][3], &l_908}}};
                    unsigned char *l_940[4][2] = {{&l_906, (void*)0}, {&l_906, (void*)0}, {&l_906, (void*)0}, {&l_906, (void*)0}};
                    int l_941[10][3] = {{(-1L), 8L, (-1L)}, {(-1L), 8L, (-1L)}, {(-1L), 8L, (-1L)}, {(-1L), 8L, (-1L)}, {(-1L), 8L, (-1L)}, {(-1L), 8L, (-1L)}, {(-1L), 8L, (-1L)}, {(-1L), 8L, (-1L)}, {(-1L), 8L, (-1L)}, {(-1L), 8L, (-1L)}};
                    unsigned l_944 = 0x6B93E927L;
                    int *l_945 = &g_763;
                    int *l_946 = &g_43;
                    int i, j, k;
                    if (((*l_795) , ((*g_566) = ((l_907 != ((l_910 = l_908) != l_911)) , func_33(l_907)))))
                    {
                        (*g_267) = (*g_267);
                        (*p_19) &= (-1L);
                    }
                    else
                    {
                        int l_926 = 0xF9FED8E2L;
                        int **l_928[2][2];
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_928[i][j] = &g_267;
                        }
                        l_926 ^= (l_925 &= (safe_mod_func_int8_t_s_s((((((safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((&g_285 == l_920), p_21)), (-1L))) | (((*l_795) && ((safe_rshift_func_int16_t_s_u((0x56E12069L <= (safe_sub_func_int16_t_s_s(((*l_807) = p_22), g_630))), g_43)) != l_880)) != 0x8F79L)) , (*l_864)) , 0x73L) != p_21), p_23)));
                        g_267 = &l_766;

                        ;
                        p_19 = p_19;
                    }

                    ;
                    ;
                    l_947 = (safe_add_func_int32_t_s_s(((*l_864) = (*g_566)), (!((safe_lshift_func_int16_t_s_s(p_21, p_22)) < (l_774 |= (((*l_946) = (l_850 = ((*l_945) = ((safe_add_func_int16_t_s_s(((+(((l_925 = l_935) && (safe_rshift_func_uint8_t_u_u((((!((((((l_941[7][2] = (l_907 != (safe_mul_func_int8_t_s_s(p_23, ((*l_910) &= p_21))))) > p_21) <= p_22) == l_942) <= l_943) & 0x2C9AL)) , p_21) | 0L), p_23))) , 0x28333F6AL)) | l_766), l_944)) | p_21)))) <= p_21))))));
                    l_850 |= (((*l_795) = (safe_rshift_func_int16_t_s_s(((*l_807) &= ((**l_793) = ((safe_mod_func_int8_t_s_s(l_952, (l_957 & (*l_864)))) || p_23))), 7))) , 0x75B98A3BL);
                }
                else
                {
                    return &g_43;


                }

                ;
                ;
            }

            ;

        }

        ;

        ;
        ;
        if ((*l_795))
        {
            int l_967 = 0xD218D816L;
            char ***l_968 = &g_65;
            unsigned short *l_975 = &l_943;
            if ((safe_lshift_func_uint8_t_u_s(((((~(safe_unary_minus_func_int8_t_s((l_906 == ((safe_sub_func_int32_t_s_s((p_21 < g_351), ((*l_795) = (p_21 < (1UL < (safe_sub_func_uint16_t_u_u((((~(safe_add_func_uint32_t_u_u((p_21 < ((g_43 > p_23) > p_23)), l_935))) <= (*p_19)) && (*l_795)), l_967))))))) , p_21))))) , p_21) , (*g_267)) <= p_21), 3)))
            {
                return &g_79;



            }
            else
            {
                char *l_982 = &g_100[2];
                int l_983 = (-1L);
                short l_1035 = 0x8BFAL;
                (*g_267) = (((**l_793) = (p_22 ^ 2UL)) , (*g_267));
                if (l_942)
                {
                    short *l_993 = &g_150;
                    int l_995 = 0x4AF4171FL;
                    int *l_996 = &l_957;
                    for (g_630 = 1; (g_630 <= 4); g_630 += 1)
                    {
                        unsigned char *l_990[6][5][2];
                        short *l_994 = &g_333[2];
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                        {
                            for (j = 0; j < 5; j++)
                            {
                                for (k = 0; k < 2; k++)
                                    l_990[i][j][k] = &g_88;
                            }
                        }
                        (*g_566) = (g_713[g_630] == (safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((p_22 = (func_33(((*l_982) = ((safe_sub_func_uint32_t_u_u(1UL, (p_23 < (*g_285)))) ^ p_21))) != 255UL)), (safe_rshift_func_int8_t_s_s((((l_993 != l_994) || 0x4953L) ^ g_713[g_630]), l_995)))), p_21)));

                        ;
                        (*g_566) ^= l_983;
                    }
                    l_996 = (void*)0;

                    ;
                    for (g_68 = (-4); (g_68 < 41); ++g_68)
                    {
                        unsigned *l_1001 = &g_55[4][4][2];
                        int l_1002 = 0x14035EAEL;
                        (*g_267) |= (+(((*l_1001) = (safe_add_func_uint32_t_u_u((**g_284), 0UL))) , (l_1002 | l_967)));
                        if (l_775)
                            continue;
                        if ((*p_19))
                            continue;
                    }
                }
                else
                {
                    unsigned short l_1007 = 0UL;
                    for (g_862 = 0; (g_862 > 40); g_862++)
                    {
                        unsigned l_1010 = 4294967290UL;
                        p_20 = ((((safe_lshift_func_int16_t_s_s(0x513EL, 1)) , ((1L == ((p_21 == l_1007) , (safe_lshift_func_uint16_t_u_s(l_1010, func_33((g_79 , ((l_775 ^= (safe_mul_func_int16_t_s_s((*l_795), g_43))) , (safe_add_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(1UL, l_906)), 1)) , l_1007), p_22))))))))) <= l_967)) || (*l_795)) , (void*)0);

                        ;
                    }
                    (*g_267) |= (l_967 , (safe_mod_func_int8_t_s_s((~l_775), p_23)));
                    (*l_795) = (+((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((+((safe_rshift_func_int16_t_s_u(0x0348L, ((*g_566) != ((+((**l_955) ^= (safe_mod_func_uint32_t_u_u(l_775, (safe_rshift_func_int16_t_s_u(0x6CD4L, 6)))))) | (l_983 ^ (safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(p_23, ((+((p_23 >= ((**g_284) = (((p_23 , &l_968) != &l_968) | l_983))) , l_983)) < p_22))), p_23))))))) == l_1035)), (*l_795))), 8L)) && l_983));
                }
            }
            g_284 = l_1036;
            for (l_957 = (-13); (l_957 > 4); l_957 = safe_add_func_uint8_t_u_u(l_957, 7))
            {
                int *l_1039 = &l_775;
                (*l_1039) |= (*p_19);
                for (l_816 = 12; (l_816 <= (-30)); l_816 = safe_sub_func_int8_t_s_s(l_816, 8))
                {
                    l_1039 = &l_967;

                    ;
                    l_1042 = (*g_566);
                    if ((*g_566))
                        break;
                    l_967 ^= ((*p_19) > ((0x117E2FF5L <= (**g_284)) | (*g_285)));
                }

                ;
                for (g_140 = 0; (g_140 <= 4); g_140 += 1)
                {
                    for (l_880 = 0; (l_880 >= 0); l_880 -= 1)
                    {
                        int i, j, k;
                        (*l_795) = g_418[(g_140 + 2)][l_880][l_880];
                    }
                    if ((*p_19))
                        break;
                    return p_20;



                }
            }
        }
        else
        {
            unsigned char l_1062 = 255UL;
            char ***l_1065 = &g_65;
            unsigned char **l_1068 = (void*)0;
            int l_1072 = 0xCC761AFBL;
            int *l_1073 = &l_850;
            short ****l_1084 = &g_837;
            for (g_630 = 11; (g_630 > 59); g_630++)
            {
                char l_1053 = 0x84L;
                int l_1070[7][1][1] = {{{(-1L)}}, {{(-1L)}}, {{(-1L)}}, {{(-1L)}}, {{(-1L)}}, {{(-1L)}}, {{(-1L)}}};
                int i, j, k;
                if (((*p_19) = (*p_19)))
                {
                    return g_1045;



                }
                else
                {
                    unsigned *l_1052 = &g_55[0][2][2];
                    int l_1054 = 1L;
                    int l_1061 = 0x1F8CEE0AL;
                    unsigned char **l_1069[4][1][7] = {{{&g_366, &g_366, &g_366, &g_366, &g_366, &g_366, &g_366}}, {{&g_366, &g_366, &g_366, &g_366, &g_366, &g_366, &g_366}}, {{&g_366, &g_366, &g_366, &g_366, &g_366, &g_366, &g_366}}, {{&g_366, &g_366, &g_366, &g_366, &g_366, &g_366, &g_366}}};
                    int *l_1071 = &l_1061;
                    int i, j, k;
                    (*l_795) = ((((safe_add_func_int32_t_s_s(1L, (*g_566))) ^ (safe_add_func_int8_t_s_s(((*g_267) < (safe_sub_func_int8_t_s_s(((((0xFA79L | (((*l_1052) |= g_763) , l_1053)) >= (&g_656 != (((l_1053 | (-8L)) < (*l_795)) , (void*)0))) != l_1054) && g_39), p_21))), 0UL))) , (void*)0) != (*l_793));
                    g_763 |= (((((*l_795) == (0L && (safe_add_func_int8_t_s_s(((l_1054 && (1UL != (safe_mod_func_int8_t_s_s(p_23, l_1054)))) && l_1061), (l_1062 , (safe_rshift_func_uint16_t_u_u((g_418[5][0][0] <= p_22), 3))))))) , l_1062) , (*p_19)) > (*g_285));
                    l_1073 = p_20;

                    ;
                }

                ;
                (*l_795) = (safe_mul_func_int8_t_s_s((g_416 , (safe_mul_func_int8_t_s_s(l_942, (safe_mul_func_uint16_t_u_u((((*l_911) |= (safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((!2L), 3)), ((l_1084 == (void*)0) , (((p_23 , ((g_630 , ((p_22 = l_942) & ((void*)0 != (*l_955)))) || 0xB4DD5F00L)) > (*l_795)) || 0x44L))))) | (*l_795)), l_942))))), 0x34L));
                return p_19;



            }
            return p_19;



        }
    }



    ;
    l_775 = (*g_566);
    return p_19;


}







static int * func_27(char p_28, unsigned char p_29, int * p_30, int * p_31, unsigned p_32)
{
    unsigned l_746 = 4294967295UL;
    int *l_747[10] = {&g_17, &g_79, &g_17, &g_79, &g_17, &g_79, &g_17, &g_79, &g_17, &g_79};
    int i;
    (*g_566) = 0xC3CC0D75L;
    for (p_28 = 0; (p_28 <= (-27)); p_28 = safe_sub_func_int16_t_s_s(p_28, 6))
    {
        unsigned **l_742 = &g_285;
        int *l_744 = &g_79;
        unsigned l_757 = 0x42CC26F8L;
        int **l_761 = &l_747[9];
    }
    return l_747[9];


}







static unsigned char func_33(char p_34)
{
    unsigned l_430[10][8][3] = {{{0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}}, {{0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}}, {{0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}}, {{0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}}, {{0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}}, {{0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}}, {{0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}}, {{0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}}, {{0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}}, {{0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}, {0UL, 0UL, 4294967288UL}}};
    unsigned char *l_467[8] = {(void*)0, (void*)0, &g_450, (void*)0, (void*)0, &g_450, (void*)0, (void*)0};
    char **l_480 = &g_153[3][2][2];
    int *l_481 = &g_43;
    int **l_482 = (void*)0;
    int **l_483 = (void*)0;
    int **l_484 = &l_481;
    int **l_495 = &g_267;
    unsigned *l_496 = &g_140;
    unsigned **l_543 = &l_496;
    int *l_564 = &g_17;
    int l_581 = 1L;
    char l_586 = 5L;
    char l_641 = 0xE0L;
    int l_645 = (-1L);
    int l_704 = (-2L);
    int i, j, k;
    for (g_39 = (-24); (g_39 != (-20)); g_39++)
    {
        int *l_42 = &g_43;
        char *l_46 = &g_39;
        unsigned char *l_469 = &g_450;
        (*l_42) ^= (g_17 ^ g_39);
    }
    (*l_484) = ((safe_sub_func_uint32_t_u_u((l_480 != (void*)0), 4294967295UL)) , l_481);
    (**l_484) = (safe_rshift_func_uint16_t_u_s(65533UL, p_34));
    if (((safe_add_func_uint8_t_u_u((((*l_481) > (*g_285)) >= (safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u(((9L & p_34) , ((0x7EL ^ ((safe_sub_func_uint8_t_u_u((((*l_481) , (((*l_495) = &g_17) != (void*)0)) <= ((*l_496) = ((**l_484) || (*l_481)))), (**l_484))) <= p_34)) & 0x3CEF214CL)), p_34)) ^ (**l_484)), 1))), 0x61L)) || 0x46L))
    {
        int *l_499 = (void*)0;
        for (g_138 = 0; (g_138 <= 7); g_138 += 1)
        {
            int *l_497 = &g_17;
        }
        (**l_484) ^= (0x63E3L && g_140);
        return p_34;
    }
    else
    {
        int *l_500 = &g_79;
        char *l_506 = &g_100[2];
        char l_507 = 0x84L;
        unsigned char *l_552 = &g_450;
        int ****l_563[1];
        unsigned l_593 = 0UL;
        int l_617 = 7L;
        char l_644[1][4] = {{0xD2L, 0x7DL, 0xD2L, 0x7DL}};
        int l_673 = 3L;
        short *l_702 = &g_150;
        unsigned short l_712[6] = {65535UL, 65535UL, 0UL, 65535UL, 65535UL, 0UL};
        int i, j;
        for (i = 0; i < 1; i++)
            l_563[i] = &g_446;
        (*l_495) = l_500;

        ;
        for (g_39 = 6; (g_39 == 19); g_39 = safe_add_func_uint16_t_u_u(g_39, 2))
        {
            unsigned l_503[7][4][4] = {{{0xFB1FB586L, 0xA8DD80B6L, 1UL, 0xA4854F9FL}, {0xFB1FB586L, 0xA8DD80B6L, 1UL, 0xA4854F9FL}, {0xFB1FB586L, 0xA8DD80B6L, 1UL, 0xA4854F9FL}, {0xFB1FB586L, 0xA8DD80B6L, 1UL, 0xA4854F9FL}}, {{0xFB1FB586L, 0xA8DD80B6L, 1UL, 0xA4854F9FL}, {0xFB1FB586L, 0xA8DD80B6L, 1UL, 0xA4854F9FL}, {0xFB1FB586L, 0xA8DD80B6L, 1UL, 0xA4854F9FL}, {0xFB1FB586L, 0xA8DD80B6L, 1UL, 0xA4854F9FL}}, {{0xFB1FB586L, 0xA8DD80B6L, 1UL, 0xA4854F9FL}, {0xFB1FB586L, 0xA8DD80B6L, 1UL, 0xA4854F9FL}, {0xFB1FB586L, 0xA8DD80B6L, 1UL, 0xA4854F9FL}, {0xFB1FB586L, 0xA8DD80B6L, 1UL, 0xA4854F9FL}}, {{0xFB1FB586L, 0xA8DD80B6L, 1UL, 0xA4854F9FL}, {0xFB1FB586L, 0xA8DD80B6L, 1UL, 0xA4854F9FL}, {0xFB1FB586L, 0xA8DD80B6L, 1UL, 0xA4854F9FL}, {0xFB1FB586L, 0xA8DD80B6L, 1UL, 0xA4854F9FL}}, {{0xFB1FB586L, 0xA8DD80B6L, 1UL, 0xA4854F9FL}, {0xFB1FB586L, 0xA8DD80B6L, 1UL, 0xA4854F9FL}, {0xFB1FB586L, 0xA8DD80B6L, 1UL, 0xA4854F9FL}, {0xFB1FB586L, 0xA8DD80B6L, 1UL, 0xA4854F9FL}}, {{0xFB1FB586L, 0xA8DD80B6L, 1UL, 0xA4854F9FL}, {0xFB1FB586L, 0xA8DD80B6L, 1UL, 0xA4854F9FL}, {0xFB1FB586L, 0xA8DD80B6L, 1UL, 0xA4854F9FL}, {0xFB1FB586L, 0xA8DD80B6L, 1UL, 0xA4854F9FL}}, {{0xFB1FB586L, 0xA8DD80B6L, 1UL, 0xA4854F9FL}, {0xFB1FB586L, 0xA8DD80B6L, 1UL, 0xA4854F9FL}, {0xFB1FB586L, 0xA8DD80B6L, 1UL, 0xA4854F9FL}, {0xFB1FB586L, 0xA8DD80B6L, 1UL, 0xA4854F9FL}}};
            short *l_508 = &g_328;
            int *l_523[1][3][6] = {{{&g_43, (void*)0, &g_43, (void*)0, &g_43, (void*)0}, {&g_43, (void*)0, &g_43, (void*)0, &g_43, (void*)0}, {&g_43, (void*)0, &g_43, (void*)0, &g_43, (void*)0}}};
            unsigned **l_546 = &l_496;
            unsigned char *l_555 = &g_88;
            int *l_565[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_565[i] = &g_79;
        }
        (*l_495) = ((*l_484) = g_566);



        for (g_79 = 0; (g_79 >= (-18)); g_79 = safe_sub_func_int32_t_s_s(g_79, 2))
        {
            unsigned l_578 = 0UL;
            int *l_592 = &g_43;
            int l_609[5][4] = {{1L, 0xD956DCB6L, 0xDBD07DC2L, (-7L)}, {1L, 0xD956DCB6L, 0xDBD07DC2L, (-7L)}, {1L, 0xD956DCB6L, 0xDBD07DC2L, (-7L)}, {1L, 0xD956DCB6L, 0xDBD07DC2L, (-7L)}, {1L, 0xD956DCB6L, 0xDBD07DC2L, (-7L)}};
            unsigned char *l_648 = &g_630;
            int ****l_655 = &g_446;
            short *l_674 = &g_333[0];
            unsigned l_696 = 0x22BB784CL;
            int *l_725 = &g_43;
            int *l_730 = (void*)0;
            int i, j;
        }
    }



    return (**l_495);
}







static unsigned short func_44(char * p_45)
{
    char *l_49 = (void*)0;
    char **l_48 = &l_49;
    char ***l_47 = &l_48;
    int *l_52 = (void*)0;
    short *l_53[4][1];
    int l_54 = (-1L);
    char ****l_62 = (void*)0;
    char ****l_63 = (void*)0;
    int l_66 = 0L;
    unsigned short *l_67 = &g_68;
    int l_69 = 0xA74B80CDL;
    char *l_70 = &g_39;
    int l_417 = 0x5E991380L;
    unsigned ***l_423[6] = {&g_284, &g_284, (void*)0, &g_284, &g_284, (void*)0};
    char ***l_424 = &g_65;
    short l_425 = (-6L);
    int *l_426 = &l_69;
    unsigned short *l_428[1][6][3] = {{{&g_240, &g_240, &g_240}, {&g_240, &g_240, &g_240}, {&g_240, &g_240, &g_240}, {&g_240, &g_240, &g_240}, {&g_240, &g_240, &g_240}, {&g_240, &g_240, &g_240}}};
    unsigned short **l_427 = &l_428[0][2][2];
    unsigned char l_429[7] = {0UL, 0UL, 0xB7L, 0UL, 0UL, 0xB7L, 0UL};
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_53[i][j] = (void*)0;
    }
    (*l_47) = (void*)0;

    ;
    g_418[5][0][0] |= (safe_add_func_uint8_t_u_u(((&g_43 == l_52) != g_39), ((g_55[4][2][2] = (l_54 = (+0L))) != (l_417 = func_56(g_43, (g_64 = &l_48), g_39, ((((*l_67) = (g_39 != (g_17 > l_66))) < l_69) , (*p_45)), l_70)))));

    ;


    (*l_426) |= (safe_add_func_int32_t_s_s((((safe_mod_func_int8_t_s_s(((void*)0 != l_423[5]), (*p_45))) , g_17) == g_333[0]), 0xAB751103L));
    g_79 ^= ((l_67 != ((*l_427) = l_53[0][0])) & (*l_426));
    return l_429[1];


}







static short func_56(int p_57, char *** p_58, unsigned char p_59, char p_60, char * p_61)
{
    int l_71 = 9L;
    char ***l_78 = &g_65;
    int l_82 = 0L;
    int l_83 = (-10L);
    char *l_97 = &g_39;
    char *l_98 = (void*)0;
    char *l_99 = &g_100[1];
    char l_101 = (-1L);
    unsigned short l_179 = 0x1D12L;
    short *l_188 = &g_150;
    short **l_187 = &l_188;
    char l_194 = 0x39L;
    int *l_209[1][6][8] = {{{&l_83, &g_79, &l_83, &g_79, &l_83, &g_79, &l_83, &g_79}, {&l_83, &g_79, &l_83, &g_79, &l_83, &g_79, &l_83, &g_79}, {&l_83, &g_79, &l_83, &g_79, &l_83, &g_79, &l_83, &g_79}, {&l_83, &g_79, &l_83, &g_79, &l_83, &g_79, &l_83, &g_79}, {&l_83, &g_79, &l_83, &g_79, &l_83, &g_79, &l_83, &g_79}, {&l_83, &g_79, &l_83, &g_79, &l_83, &g_79, &l_83, &g_79}}};
    unsigned *l_278 = &g_140;
    unsigned **l_277 = &l_278;
    unsigned l_386 = 0UL;
    int l_396 = 9L;
    int **l_403 = &l_209[0][2][7];
    int ***l_402 = &l_403;
    int ***l_407 = &l_403;
    int i, j, k;
    l_83 ^= (l_71 || (0x00D1L < (safe_mod_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_s((((0xFDL || p_57) || ((g_79 = (safe_rshift_func_uint16_t_u_s((l_78 != (void*)0), 9))) , l_71)) & (safe_mul_func_uint8_t_u_u(l_71, (*p_61)))), 3)) , p_57) , l_82), 252UL))));
    for (l_83 = 0; (l_83 > 25); l_83 = safe_add_func_int8_t_s_s(l_83, 5))
    {
        unsigned l_86 = 4294967290UL;
        unsigned char *l_87 = &g_88;
        int *l_89 = &g_79;
        (*l_89) &= (g_43 | ((*l_87) ^= l_86));
        for (g_88 = 1; (g_88 != 48); ++g_88)
        {
            int **l_92 = &l_89;
            (*l_92) = &p_57;

            ;
        }

        ;
    }
    if ((safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s(l_82, (l_101 = ((*l_99) = (((!g_79) || (l_83 >= ((void*)0 != l_97))) && 1UL))))), g_79)))
    {
        unsigned char *l_104[10][1];
        int l_105 = 0x4EA94EDBL;
        int *l_120 = (void*)0;
        int *l_121[4] = {&g_43, (void*)0, &g_43, (void*)0};
        int l_169 = (-5L);
        char **l_210 = &g_153[6][3][3];
        short l_245 = 5L;
        int i, j;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 1; j++)
                l_104[i][j] = (void*)0;
        }
        if (((((((((l_83 = (safe_sub_func_int8_t_s_s((*p_61), (((g_88 &= 0xABL) & l_105) & ((safe_mod_func_int8_t_s_s(((safe_add_func_int8_t_s_s((p_57 == (safe_add_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(g_43, (safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(l_83, 5UL)), (*p_61))))) || (p_59 > l_71)), p_60))), l_105)) || 0xE796L), g_43)) & 0x9764F797L))))) , p_57) < 0xBE7BEB33L) >= 0x4647L) | g_79) <= l_82) , 0L) , g_88))
        {
            int l_134 = 1L;
            unsigned *l_137 = &g_138;
            unsigned *l_139 = &g_140;
            char l_141[7] = {(-7L), 0xD8L, (-7L), 0xD8L, (-7L), 0xD8L, (-7L)};
            int i;
            g_79 &= ((g_17 != (safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_s((*p_61), ((safe_add_func_uint16_t_u_u(p_60, (l_83 |= ((((safe_mul_func_uint8_t_u_u((((*p_61) || (safe_lshift_func_int8_t_s_u((g_100[2] = (0xF895E344L >= l_134)), 6))) < (p_57 < ((((safe_add_func_int32_t_s_s((((*l_139) = ((*l_137) = g_17)) || ((-1L) || g_43)), p_60)) <= 0UL) >= 65535UL) && p_57))), l_141[2])) > 0xD7L) | (*p_61)) != 0x34L)))) < (*p_61)))) ^ l_134), l_71)), p_57))) && g_138);
            g_79 = g_79;
        }
        else
        {
            unsigned char l_147 = 1UL;
            int l_151 = 0L;
            char *l_152 = &g_100[0];
            int l_170 = 1L;
            short l_172 = 0x093FL;
            unsigned *l_260[5][5][5] = {{{&g_138, &g_140, &g_138, &g_140, &g_138}, {&g_138, &g_140, &g_138, &g_140, &g_138}, {&g_138, &g_140, &g_138, &g_140, &g_138}, {&g_138, &g_140, &g_138, &g_140, &g_138}, {&g_138, &g_140, &g_138, &g_140, &g_138}}, {{&g_138, &g_140, &g_138, &g_140, &g_138}, {&g_138, &g_140, &g_138, &g_140, &g_138}, {&g_138, &g_140, &g_138, &g_140, &g_138}, {&g_138, &g_140, &g_138, &g_140, &g_138}, {&g_138, &g_140, &g_138, &g_140, &g_138}}, {{&g_138, &g_140, &g_138, &g_140, &g_138}, {&g_138, &g_140, &g_138, &g_140, &g_138}, {&g_138, &g_140, &g_138, &g_140, &g_138}, {&g_138, &g_140, &g_138, &g_140, &g_138}, {&g_138, &g_140, &g_138, &g_140, &g_138}}, {{&g_138, &g_140, &g_138, &g_140, &g_138}, {&g_138, &g_140, &g_138, &g_140, &g_138}, {&g_138, &g_140, &g_138, &g_140, &g_138}, {&g_138, &g_140, &g_138, &g_140, &g_138}, {&g_138, &g_140, &g_138, &g_140, &g_138}}, {{&g_138, &g_140, &g_138, &g_140, &g_138}, {&g_138, &g_140, &g_138, &g_140, &g_138}, {&g_138, &g_140, &g_138, &g_140, &g_138}, {&g_138, &g_140, &g_138, &g_140, &g_138}, {&g_138, &g_140, &g_138, &g_140, &g_138}}};
            int i, j, k;
            if (p_57)
            {
                char *l_154[7][8] = {{&g_39, (void*)0, &g_100[1], &g_100[1], &g_100[2], &g_39, &g_100[1], (void*)0}, {&g_39, (void*)0, &g_100[1], &g_100[1], &g_100[2], &g_39, &g_100[1], (void*)0}, {&g_39, (void*)0, &g_100[1], &g_100[1], &g_100[2], &g_39, &g_100[1], (void*)0}, {&g_39, (void*)0, &g_100[1], &g_100[1], &g_100[2], &g_39, &g_100[1], (void*)0}, {&g_39, (void*)0, &g_100[1], &g_100[1], &g_100[2], &g_39, &g_100[1], (void*)0}, {&g_39, (void*)0, &g_100[1], &g_100[1], &g_100[2], &g_39, &g_100[1], (void*)0}, {&g_39, (void*)0, &g_100[1], &g_100[1], &g_100[2], &g_39, &g_100[1], (void*)0}};
                int *l_155 = &l_83;
                int l_229 = 1L;
                short *l_238 = &g_150;
                int i, j;
                for (g_140 = 0; (g_140 <= 3); g_140 += 1)
                {
                    unsigned short *l_142 = &g_68;
                    int l_148[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_148[i] = 0xF45D9FCAL;
                    if ((((*l_142) = g_39) | p_57))
                    {
                        int i;
                        l_121[g_140] = l_121[g_140];
                    }
                    else
                    {
                        short *l_149 = &g_150;
                        l_151 ^= (((*l_149) = (safe_lshift_func_uint8_t_u_s((l_83 = (safe_rshift_func_int16_t_s_u(l_147, 4))), l_148[2]))) , g_140);
                        p_57 = (g_43 = 0x90D562EDL);
                    }
                    g_43 &= 0L;
                    p_57 = (g_100[1] , ((g_153[6][3][3] = l_152) != l_154[2][5]));
                    for (l_147 = 0; (l_147 <= 0); l_147 += 1)
                    {
                        int **l_156 = &l_155;
                        (*l_156) = l_155;
                        (*l_156) = &p_57;

                        ;
                        (*l_155) = p_57;
                    }
                }

                ;
                for (g_150 = (-21); (g_150 <= 17); g_150++)
                {
                    int *l_161 = &l_151;
                    short l_171 = 1L;
                    for (g_68 = 0; (g_68 >= 48); g_68 = safe_add_func_int16_t_s_s(g_68, 2))
                    {
                        int **l_162 = &l_121[1];
                        l_161 = &g_17;

                        ;
                        (*l_162) = &g_79;
                        l_172 ^= ((safe_sub_func_uint16_t_u_u(0x7270L, p_60)) > ((((safe_mul_func_uint16_t_u_u((((&g_140 != &g_138) | (l_170 ^= (((*l_161) >= (*p_61)) >= ((safe_add_func_int16_t_s_s((~(l_151 |= g_79)), l_169)) < p_59)))) < 9UL), p_57)) > (*l_155)) <= (*l_161)) ^ l_171));
                    }

                    ;
                    if ((*l_161))
                        break;
                }


                for (g_79 = (-16); (g_79 == (-23)); g_79 = safe_sub_func_int32_t_s_s(g_79, 6))
                {
                    unsigned *l_180[6][9] = {{&g_140, &g_138, &g_138, (void*)0, &g_140, (void*)0, &g_140, (void*)0, &g_138}, {&g_140, &g_138, &g_138, (void*)0, &g_140, (void*)0, &g_140, (void*)0, &g_138}, {&g_140, &g_138, &g_138, (void*)0, &g_140, (void*)0, &g_140, (void*)0, &g_138}, {&g_140, &g_138, &g_138, (void*)0, &g_140, (void*)0, &g_140, (void*)0, &g_138}, {&g_140, &g_138, &g_138, (void*)0, &g_140, (void*)0, &g_140, (void*)0, &g_138}, {&g_140, &g_138, &g_138, (void*)0, &g_140, (void*)0, &g_140, (void*)0, &g_138}};
                    int l_181 = 0x7AAF5FA4L;
                    int i, j;
                    if ((safe_lshift_func_uint16_t_u_u((p_60 <= (l_181 ^= (g_43 || (safe_lshift_func_int8_t_s_u(l_179, 0))))), (*l_155))))
                    {
                        short l_182 = 1L;
                        l_151 = (p_57 = l_182);
                    }
                    else
                    {
                        l_83 = (0xD46132A9L == (((l_170 = (l_155 != l_120)) , ((safe_add_func_uint16_t_u_u((*l_155), l_151)) , g_138)) > l_82));
                    }
                    (*l_155) = g_79;
                }
                if (((l_172 ^ l_172) , 0x7402C094L))
                {
                    unsigned l_192 = 5UL;
                    int l_198[5][3] = {{0x3F0AB7DFL, 0x3F0AB7DFL, 0xF59ADD79L}, {0x3F0AB7DFL, 0x3F0AB7DFL, 0xF59ADD79L}, {0x3F0AB7DFL, 0x3F0AB7DFL, 0xF59ADD79L}, {0x3F0AB7DFL, 0x3F0AB7DFL, 0xF59ADD79L}, {0x3F0AB7DFL, 0x3F0AB7DFL, 0xF59ADD79L}};
                    unsigned l_207 = 0x0FE60D97L;
                    int l_208 = 0x2239B40AL;
                    int i, j;
                    if (((*l_155) = ((*p_61) || (p_59 != g_150))))
                    {
                        short ***l_189 = &l_187;
                        (*l_189) = l_187;
                    }
                    else
                    {
                        int l_193 = 0xCC95D819L;
                        (*l_155) ^= ((safe_sub_func_uint32_t_u_u(l_172, (l_194 = ((l_192 <= g_100[1]) ^ l_193)))) & p_60);
                        l_208 &= ((safe_sub_func_int32_t_s_s((!p_57), (safe_unary_minus_func_uint32_t_u((((l_198[2][1] = 0xF656L) ^ ((*l_155) , (safe_mod_func_int8_t_s_s(((*l_99) = (safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(p_60, (((safe_rshift_func_uint8_t_u_u(3UL, (0UL <= (l_192 , (l_207 ^ 0xDA527C6CL))))) , 0xE86AL) , l_151))), l_192))), 0xB4L)))) , 0UL))))) , l_101);
                    }
                    l_209[0][0][7] = &l_208;


                    if ((*l_155))
                    {
                        int **l_211 = &l_121[2];
                        (*l_211) = ((((*g_64) = (void*)0) == l_210) , &p_57);


                    }
                    else
                    {
                        return g_138;
                    }


                }
                else
                {
                    char l_212 = 1L;
                    unsigned short *l_213[9][8] = {{&g_68, &g_68, &g_68, &g_68, &l_179, (void*)0, &g_68, &g_68}, {&g_68, &g_68, &g_68, &g_68, &l_179, (void*)0, &g_68, &g_68}, {&g_68, &g_68, &g_68, &g_68, &l_179, (void*)0, &g_68, &g_68}, {&g_68, &g_68, &g_68, &g_68, &l_179, (void*)0, &g_68, &g_68}, {&g_68, &g_68, &g_68, &g_68, &l_179, (void*)0, &g_68, &g_68}, {&g_68, &g_68, &g_68, &g_68, &l_179, (void*)0, &g_68, &g_68}, {&g_68, &g_68, &g_68, &g_68, &l_179, (void*)0, &g_68, &g_68}, {&g_68, &g_68, &g_68, &g_68, &l_179, (void*)0, &g_68, &g_68}, {&g_68, &g_68, &g_68, &g_68, &l_179, (void*)0, &g_68, &g_68}};
                    unsigned *l_226 = (void*)0;
                    unsigned *l_227 = &g_138;
                    unsigned char l_235 = 0xAAL;
                    short *l_239[1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_239[i] = &l_172;
                    if (((g_68 = l_212) == (safe_sub_func_uint16_t_u_u((((void*)0 != l_209[0][1][2]) && (p_59 , (g_140 <= (safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((l_151 = ((g_88 = 251UL) , (safe_lshift_func_uint16_t_u_u(p_57, (l_170 = l_147))))), (safe_lshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s(((((((*l_227) = l_172) , p_60) , g_228) == (void*)0) > 4294967295UL), l_212)) > l_229), p_57)))), 0x7A4CL))))), p_60))))
                    {
                        (*l_155) &= g_43;
                    }
                    else
                    {
                        unsigned l_230[5][7] = {{4294967295UL, 0x3A9D77DEL, 0x05ABF9FFL, 0x0A2640D8L, 4294967294UL, 0x7FE0C210L, 4294967294UL}, {4294967295UL, 0x3A9D77DEL, 0x05ABF9FFL, 0x0A2640D8L, 4294967294UL, 0x7FE0C210L, 4294967294UL}, {4294967295UL, 0x3A9D77DEL, 0x05ABF9FFL, 0x0A2640D8L, 4294967294UL, 0x7FE0C210L, 4294967294UL}, {4294967295UL, 0x3A9D77DEL, 0x05ABF9FFL, 0x0A2640D8L, 4294967294UL, 0x7FE0C210L, 4294967294UL}, {4294967295UL, 0x3A9D77DEL, 0x05ABF9FFL, 0x0A2640D8L, 4294967294UL, 0x7FE0C210L, 4294967294UL}};
                        int i, j;
                        p_57 = p_57;
                        (*l_155) = l_230[4][1];
                    }
                    l_229 = (g_43 |= (p_57 = ((g_140 , &g_140) == &g_140)));
                    if (((g_88 ^ ((safe_mul_func_int8_t_s_s((!(*p_61)), l_212)) || g_39)) , (g_43 &= (((((((safe_sub_func_uint16_t_u_u((((l_235 && (safe_rshift_func_int16_t_s_s(l_212, (+(g_241 |= (g_240 = ((*l_238) = ((4294967295UL || g_100[0]) ^ (((&g_150 != l_238) & 0x43A7AF2FL) , 0x747AEA97L))))))))) || g_79) > (-1L)), p_59)) || (*l_155)) ^ p_57) ^ 0x95L) & p_57) || (*p_61)) >= 0x4F6FAD5AL))))
                    {
                        int **l_242 = &l_155;
                        (*l_242) = (void*)0;

                        ;
                    }
                    else
                    {
                        short *l_243 = &l_172;
                        int **l_244 = &l_120;
                        p_57 = 0xFFAC94E5L;
                        g_79 = ((*l_155) = ((p_60 , l_243) != (void*)0));
                        l_151 ^= l_212;
                        (*l_244) = &l_169;

                        ;
                    }

                    ;
                    ;
                }

                ;

                ;

            }
            else
            {
                int l_264 = 0x5C70F8A1L;
                int *l_265 = &g_79;
                p_57 = 1L;
                g_43 ^= g_150;
                if (l_151)
                {
                    l_245 = g_17;
                }
                else
                {
                    unsigned *l_246[2][4][8] = {{{&g_140, &g_140, &g_138, (void*)0, (void*)0, &g_138, &g_138, &g_140}, {&g_140, &g_140, &g_138, (void*)0, (void*)0, &g_138, &g_138, &g_140}, {&g_140, &g_140, &g_138, (void*)0, (void*)0, &g_138, &g_138, &g_140}, {&g_140, &g_140, &g_138, (void*)0, (void*)0, &g_138, &g_138, &g_140}}, {{&g_140, &g_140, &g_138, (void*)0, (void*)0, &g_138, &g_138, &g_140}, {&g_140, &g_140, &g_138, (void*)0, (void*)0, &g_138, &g_138, &g_140}, {&g_140, &g_140, &g_138, (void*)0, (void*)0, &g_138, &g_138, &g_140}, {&g_140, &g_140, &g_138, (void*)0, (void*)0, &g_138, &g_138, &g_140}}};
                    int i, j, k;
                    l_170 |= (g_240 , (p_57 & p_60));
                    g_43 &= (3L < (g_100[1] >= (((g_138 = 4294967295UL) , (((l_170 ^= 0x07D9L) < p_59) > (!(&l_210 == &g_65)))) & l_172)));
                    for (l_71 = 0; (l_71 != (-20)); l_71 = safe_sub_func_int16_t_s_s(l_71, 1))
                    {
                        unsigned l_253 = 0x9FE304BBL;
                        unsigned **l_261 = &l_246[1][3][0];
                        unsigned *l_263 = &l_253;
                        unsigned **l_262 = &l_263;
                        int **l_266[5] = {&l_209[0][0][7], &l_120, &l_209[0][0][7], &l_120, &l_209[0][0][7]};
                        int i;
                        l_170 |= ((((safe_rshift_func_uint8_t_u_u(g_140, (p_59 = 0xFAL))) , (p_57 && p_57)) <= ((p_60 | ((((safe_mod_func_int8_t_s_s((l_253 , ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u((((*l_261) = l_260[2][4][3]) == ((*l_262) = l_209[0][0][7])), ((g_241 > p_60) > p_57))), 3)), (*p_61))) < 0L)), g_138)) & g_240) <= l_253) && g_241)) , g_100[0])) | l_264);

                        ;
                        g_267 = (p_57 , l_265);
                        if (l_170)
                            continue;
                        (*g_267) ^= p_57;
                    }
                    (*g_267) = ((l_170 > (safe_rshift_func_int16_t_s_s(l_170, 9))) , 8L);
                }
            }

            ;


        }

        ;


    }
    else
    {
        unsigned char *l_276 = &g_88;
        unsigned ***l_279 = &l_277;
        unsigned **l_286 = &g_285;
        int l_287 = (-1L);
        int *l_289 = &g_43;
        short l_304 = (-3L);
        unsigned short l_329 = 0x9022L;
        int l_384 = (-10L);
        if ((p_59 & ((safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u(((-5L) > ((((*l_276) = (g_68 >= g_100[2])) , ((*l_279) = l_277)) != (void*)0)), (safe_rshift_func_uint8_t_u_s(((((*l_78) = (((**l_286) = ((safe_mul_func_uint8_t_u_u(g_39, (g_284 == l_286))) < 0xDC0F58D2L)) , (*p_58))) != (void*)0) ^ p_59), l_287)))) ^ 0x70ACL), p_59)), 65530UL)) < g_43)))
        {
            l_287 = 0x4C6BFACBL;
        }
        else
        {
            int **l_288[7][4][7] = {{{&l_209[0][1][2], &l_209[0][5][4], &l_209[0][0][6], &l_209[0][0][7], &l_209[0][0][1], &g_267, &l_209[0][0][7]}, {&l_209[0][1][2], &l_209[0][5][4], &l_209[0][0][6], &l_209[0][0][7], &l_209[0][0][1], &g_267, &l_209[0][0][7]}, {&l_209[0][1][2], &l_209[0][5][4], &l_209[0][0][6], &l_209[0][0][7], &l_209[0][0][1], &g_267, &l_209[0][0][7]}, {&l_209[0][1][2], &l_209[0][5][4], &l_209[0][0][6], &l_209[0][0][7], &l_209[0][0][1], &g_267, &l_209[0][0][7]}}, {{&l_209[0][1][2], &l_209[0][5][4], &l_209[0][0][6], &l_209[0][0][7], &l_209[0][0][1], &g_267, &l_209[0][0][7]}, {&l_209[0][1][2], &l_209[0][5][4], &l_209[0][0][6], &l_209[0][0][7], &l_209[0][0][1], &g_267, &l_209[0][0][7]}, {&l_209[0][1][2], &l_209[0][5][4], &l_209[0][0][6], &l_209[0][0][7], &l_209[0][0][1], &g_267, &l_209[0][0][7]}, {&l_209[0][1][2], &l_209[0][5][4], &l_209[0][0][6], &l_209[0][0][7], &l_209[0][0][1], &g_267, &l_209[0][0][7]}}, {{&l_209[0][1][2], &l_209[0][5][4], &l_209[0][0][6], &l_209[0][0][7], &l_209[0][0][1], &g_267, &l_209[0][0][7]}, {&l_209[0][1][2], &l_209[0][5][4], &l_209[0][0][6], &l_209[0][0][7], &l_209[0][0][1], &g_267, &l_209[0][0][7]}, {&l_209[0][1][2], &l_209[0][5][4], &l_209[0][0][6], &l_209[0][0][7], &l_209[0][0][1], &g_267, &l_209[0][0][7]}, {&l_209[0][1][2], &l_209[0][5][4], &l_209[0][0][6], &l_209[0][0][7], &l_209[0][0][1], &g_267, &l_209[0][0][7]}}, {{&l_209[0][1][2], &l_209[0][5][4], &l_209[0][0][6], &l_209[0][0][7], &l_209[0][0][1], &g_267, &l_209[0][0][7]}, {&l_209[0][1][2], &l_209[0][5][4], &l_209[0][0][6], &l_209[0][0][7], &l_209[0][0][1], &g_267, &l_209[0][0][7]}, {&l_209[0][1][2], &l_209[0][5][4], &l_209[0][0][6], &l_209[0][0][7], &l_209[0][0][1], &g_267, &l_209[0][0][7]}, {&l_209[0][1][2], &l_209[0][5][4], &l_209[0][0][6], &l_209[0][0][7], &l_209[0][0][1], &g_267, &l_209[0][0][7]}}, {{&l_209[0][1][2], &l_209[0][5][4], &l_209[0][0][6], &l_209[0][0][7], &l_209[0][0][1], &g_267, &l_209[0][0][7]}, {&l_209[0][1][2], &l_209[0][5][4], &l_209[0][0][6], &l_209[0][0][7], &l_209[0][0][1], &g_267, &l_209[0][0][7]}, {&l_209[0][1][2], &l_209[0][5][4], &l_209[0][0][6], &l_209[0][0][7], &l_209[0][0][1], &g_267, &l_209[0][0][7]}, {&l_209[0][1][2], &l_209[0][5][4], &l_209[0][0][6], &l_209[0][0][7], &l_209[0][0][1], &g_267, &l_209[0][0][7]}}, {{&l_209[0][1][2], &l_209[0][5][4], &l_209[0][0][6], &l_209[0][0][7], &l_209[0][0][1], &g_267, &l_209[0][0][7]}, {&l_209[0][1][2], &l_209[0][5][4], &l_209[0][0][6], &l_209[0][0][7], &l_209[0][0][1], &g_267, &l_209[0][0][7]}, {&l_209[0][1][2], &l_209[0][5][4], &l_209[0][0][6], &l_209[0][0][7], &l_209[0][0][1], &g_267, &l_209[0][0][7]}, {&l_209[0][1][2], &l_209[0][5][4], &l_209[0][0][6], &l_209[0][0][7], &l_209[0][0][1], &g_267, &l_209[0][0][7]}}, {{&l_209[0][1][2], &l_209[0][5][4], &l_209[0][0][6], &l_209[0][0][7], &l_209[0][0][1], &g_267, &l_209[0][0][7]}, {&l_209[0][1][2], &l_209[0][5][4], &l_209[0][0][6], &l_209[0][0][7], &l_209[0][0][1], &g_267, &l_209[0][0][7]}, {&l_209[0][1][2], &l_209[0][5][4], &l_209[0][0][6], &l_209[0][0][7], &l_209[0][0][1], &g_267, &l_209[0][0][7]}, {&l_209[0][1][2], &l_209[0][5][4], &l_209[0][0][6], &l_209[0][0][7], &l_209[0][0][1], &g_267, &l_209[0][0][7]}}};
            short *l_291 = &g_150;
            unsigned *l_322 = &g_140;
            unsigned l_359[6][2][2] = {{{0xAEB2D60CL, 1UL}, {0xAEB2D60CL, 1UL}}, {{0xAEB2D60CL, 1UL}, {0xAEB2D60CL, 1UL}}, {{0xAEB2D60CL, 1UL}, {0xAEB2D60CL, 1UL}}, {{0xAEB2D60CL, 1UL}, {0xAEB2D60CL, 1UL}}, {{0xAEB2D60CL, 1UL}, {0xAEB2D60CL, 1UL}}, {{0xAEB2D60CL, 1UL}, {0xAEB2D60CL, 1UL}}};
            int i, j, k;
            l_289 = &l_83;

            ;
            if ((*g_267))
            {
                short *l_290 = &g_150;
                (*l_289) ^= (l_290 != ((*l_187) = l_291));
            }
            else
            {
                int l_294 = 0x3D05E369L;
                int **l_302[10][7][1] = {{{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}};
                unsigned char **l_364 = &l_276;
                unsigned char l_397 = 0xA7L;
                int i, j, k;
                if ((~(*g_267)))
                {
                    unsigned short *l_303[2][5][1] = {{{&l_179}, {&l_179}, {&l_179}, {&l_179}, {&l_179}}, {{&l_179}, {&l_179}, {&l_179}, {&l_179}, {&l_179}}};
                    unsigned *l_321[10][8][2] = {{{&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}}, {{&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}}, {{&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}}, {{&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}}, {{&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}}, {{&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}}, {{&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}}, {{&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}}, {{&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}}, {{&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}, {&g_138, &g_140}}};
                    int l_327 = 1L;
                    int l_331 = 0xC2831B36L;
                    int *l_334 = (void*)0;
                    int i, j, k;
                    if ((safe_mod_func_uint16_t_u_u(l_294, 1L)))
                    {
                        int ***l_301 = &l_288[5][0][3];
                        short l_330 = 0x8DF7L;
                        short l_332 = 1L;
                        (*g_267) = (g_43 <= (safe_mod_func_uint16_t_u_u(g_240, (safe_rshift_func_int8_t_s_u(8L, (safe_sub_func_uint32_t_u_u((((*l_291) = (p_60 , (((p_57 = p_57) ^ (((l_302[5][6][0] = ((*l_301) = &g_267)) != (((-9L) != ((void*)0 == l_303[1][1][0])) , &g_267)) || g_68)) , l_304))) || g_150), 0xF5573769L)))))));
                        (*g_267) = (~(safe_rshift_func_uint8_t_u_s((g_240 | (safe_sub_func_uint16_t_u_u(((((p_60 , ((**l_187) = p_60)) <= (safe_unary_minus_func_int16_t_s((l_291 != l_291)))) | (safe_add_func_uint16_t_u_u((((void*)0 != l_303[0][3][0]) , (safe_mod_func_int32_t_s_s(((~(safe_sub_func_uint16_t_u_u(p_59, 0UL))) , (-4L)), (*g_267)))), (-1L)))) >= g_138), g_241))), (*l_289))));
                        g_333[0] = (((+((((*l_99) = (*p_61)) <= ((p_59 && (((((((((safe_add_func_uint8_t_u_u((((p_57 || (((safe_lshift_func_int16_t_s_s((p_60 == (safe_unary_minus_func_uint32_t_u((l_331 ^= ((((*g_285) = (((**l_279) = l_321[5][1][0]) == l_322)) == ((safe_sub_func_uint8_t_u_u(p_57, (((((safe_rshift_func_uint8_t_u_u(((l_327 != (l_327 , p_59)) ^ 253UL), g_241)) , g_328) < p_57) == p_59) , g_88))) , l_329)) < l_330))))), 13)) == p_59) | g_43)) < g_241) != g_88), (*l_289))) , p_59) , (void*)0) == (*p_58)) , (-8L)) , (**g_284)) , l_330) & (*p_61)) || (**g_284))) , l_332)) , l_331)) != p_60) > p_60);

                        ;
                        p_57 ^= (*g_267);
                    }
                    else
                    {
                        l_334 = &p_57;

                        ;
                    }

                    ;
                    ;
                }
                else
                {
                    char l_335[9][2][1] = {{{5L}, {5L}}, {{5L}, {5L}}, {{5L}, {5L}}, {{5L}, {5L}}, {{5L}, {5L}}, {{5L}, {5L}}, {{5L}, {5L}}, {{5L}, {5L}}, {{5L}, {5L}}};
                    unsigned char *l_352 = (void*)0;
                    int i, j, k;
                    if ((*g_267))
                    {
                        (*g_267) = l_335[4][0][0];
                    }
                    else
                    {
                        (*g_267) ^= (*l_289);
                        (*l_289) = (p_57 = (safe_mod_func_uint8_t_u_u(((*l_286) == (void*)0), (0x9018L & p_57))));
                    }
                    for (g_241 = 0; (g_241 <= 5); g_241 += 1)
                    {
                        int l_347 = 1L;
                        unsigned short *l_350 = &l_179;
                        (*g_267) = ((*l_289) < (*p_61));
                        p_57 = (safe_mul_func_int8_t_s_s((*p_61), (safe_unary_minus_func_int32_t_s((g_100[2] <= ((safe_mod_func_int8_t_s_s((((g_351 = (safe_mod_func_uint8_t_u_u((((*l_350) = ((safe_mul_func_uint16_t_u_u(l_347, ((*l_289) >= (l_335[5][0][0] , ((*p_61) || (((safe_rshift_func_uint8_t_u_u(0x69L, ((p_59 ^= g_39) & ((0x9BL != 0xCAL) | 0xD0L)))) | (*g_285)) || p_57)))))) ^ (*g_267))) | g_68), g_17))) , l_352) != &g_88), g_43)) & (*g_267)))))));
                    }
                    for (l_83 = 0; (l_83 >= 17); ++l_83)
                    {
                        int *l_355 = &g_79;
                        (*g_267) = p_57;
                        l_355 = (g_267 = &p_57);

                        ;
                        ;
                    }

                    ;
                    if (((*p_61) || (safe_mul_func_uint16_t_u_u((0x79334A3FL >= (*g_285)), p_57))))
                    {
                        return p_60;


                    }
                    else
                    {
                        unsigned l_358 = 3UL;
                        l_358 |= (-5L);
                        return l_359[5][0][0];


                    }
                }

                ;
                for (p_59 = 0; (p_59 > 41); ++p_59)
                {
                    unsigned char l_379[9][1] = {{0x4FL}, {0x4FL}, {0x4FL}, {0x4FL}, {0x4FL}, {0x4FL}, {0x4FL}, {0x4FL}, {0x4FL}};
                    int l_385 = (-6L);
                    int i, j;
                    for (l_101 = (-26); (l_101 <= 12); l_101 = safe_add_func_int8_t_s_s(l_101, 1))
                    {
                        g_267 = (l_209[0][0][7] = &p_57);

                        ;
                        g_365[2] = l_364;
                    }
                    l_385 |= (safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((9UL | (safe_sub_func_int16_t_s_s(((0xFC5A8F50L == ((+(*g_267)) <= (0UL ^ p_59))) , (safe_mod_func_int32_t_s_s(((safe_add_func_int8_t_s_s(0L, (safe_mod_func_uint8_t_u_u(((**l_364) = ((((((**l_187) |= l_379[1][0]) , ((((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(p_59, 6)), (*g_285))) >= l_379[1][0]) && p_59) , 0x32EED176L)) , (-1L)) , p_57) , p_59)), (*l_289))))) && l_384), p_57))), p_60))), 0xD294L)), l_379[1][0]));
                }


                ;

                g_43 |= ((~(l_386 > (*g_285))) & (safe_add_func_uint32_t_u_u(((*l_289) && ((safe_rshift_func_int8_t_s_u((*l_289), 1)) == (g_100[1] , ((((((g_391 = (void*)0) == (void*)0) , (-1L)) , (safe_rshift_func_uint8_t_u_u(((((safe_rshift_func_uint8_t_u_s(((((p_57 == l_396) || p_59) , (*g_267)) == (*g_285)), 4)) , (-1L)) , 0x37L) , l_397), 1))) == p_57) >= (*l_289))))), p_57)));
            }


            ;
            ;

            (*p_58) = (*p_58);
            l_209[0][0][1] = &g_43;


        }


        ;
        ;
        ;

    }


    ;
    ;

    for (l_71 = 0; (l_71 != (-6)); --l_71)
    {
        int ****l_404 = &l_402;
        int ***l_405 = (void*)0;
        int ****l_406[7][1][4] = {{{&l_405, &l_405, &l_405, &l_405}}, {{&l_405, &l_405, &l_405, &l_405}}, {{&l_405, &l_405, &l_405, &l_405}}, {{&l_405, &l_405, &l_405, &l_405}}, {{&l_405, &l_405, &l_405, &l_405}}, {{&l_405, &l_405, &l_405, &l_405}}, {{&l_405, &l_405, &l_405, &l_405}}};
        int i, j, k;
        p_57 = ((safe_mul_func_int8_t_s_s(((p_60 = (!0xC5L)) ^ (((*l_404) = l_402) != (l_407 = l_405))), (((safe_lshift_func_int8_t_s_u(((*l_99) = ((g_351 = (safe_rshift_func_uint8_t_u_u(((*p_58) != (void*)0), ((&g_267 == ((((**l_187) = ((((p_59 && 0x37DB4C88L) ^ (((safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(p_59, 255UL)), 0xE1A3L)) > 0x2F5CL) > (*p_61))) > g_416) && 0x7EL)) != g_333[0]) , &l_209[0][3][0])) , 1UL)))) , (*p_61))), 3)) < 0x7E986DF1L) == 0UL))) >= 0UL);

        ;
        (*l_403) = &g_43;
    }

    ;
    return p_60;


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_55[i][j][k], "g_55[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_100[i], "g_100[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_328, "g_328", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_333[i], "g_333[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_351, "g_351", print_hash_value);
    transparent_crc(g_416, "g_416", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_418[i][j][k], "g_418[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_450, "g_450", print_hash_value);
    transparent_crc(g_630, "g_630", print_hash_value);
    transparent_crc(g_663, "g_663", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_713[i], "g_713[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_763, "g_763", print_hash_value);
    transparent_crc(g_862, "g_862", print_hash_value);
    transparent_crc(g_863, "g_863", print_hash_value);
    transparent_crc(g_890, "g_890", print_hash_value);
    transparent_crc(g_1095, "g_1095", print_hash_value);
    transparent_crc(g_1262, "g_1262", print_hash_value);
    transparent_crc(g_1364, "g_1364", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1560[i][j], "g_1560[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1582, "g_1582", print_hash_value);
    transparent_crc(g_1592, "g_1592", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1604[i][j][k], "g_1604[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1628, "g_1628", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1770[i], "g_1770[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_1845[i][j], "g_1845[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_1861[i][j], "g_1861[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1880, "g_1880", print_hash_value);
    transparent_crc(g_2116, "g_2116", print_hash_value);
    transparent_crc(g_2159, "g_2159", print_hash_value);
    transparent_crc(g_2218, "g_2218", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
