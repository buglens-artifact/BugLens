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



static int g_19 = 0xDF82D83DL;
static int *g_18 = &g_19;
static int g_40 = 0xF3392002L;
static int *g_60 = &g_40;
static int ** volatile g_59[8][8][4] = {{{&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}}, {{&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}}, {{&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}}, {{&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}}, {{&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}}, {{&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}}, {{&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}}, {{&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}, {&g_18, &g_60, &g_60, &g_60}}};
static unsigned short g_69 = 65533UL;
static short g_81 = 0x289FL;
static unsigned char g_87 = 1UL;
static unsigned g_89 = 4294967295UL;
static unsigned char *g_98 = &g_87;
static unsigned char *g_100[7][3] = {{&g_87, (void*)0, &g_87}, {&g_87, (void*)0, &g_87}, {&g_87, (void*)0, &g_87}, {&g_87, (void*)0, &g_87}, {&g_87, (void*)0, &g_87}, {&g_87, (void*)0, &g_87}, {&g_87, (void*)0, &g_87}};
static int g_106 = 0x4212E26EL;
static int * volatile g_120 = (void*)0;
static int * volatile g_121 = &g_106;
static int **g_162 = &g_60;
static int *** volatile g_161 = &g_162;
static unsigned g_180 = 4294967293UL;
static char g_181 = 0x5DL;
static int g_203 = 1L;
static unsigned char * volatile * volatile g_225 = &g_100[4][1];
static unsigned char * volatile * volatile * volatile g_224 = &g_225;
static char g_278 = 0x32L;
static unsigned *g_338[4] = {&g_89, &g_89, &g_89, &g_89};
static unsigned **g_337 = &g_338[1];
static int g_368 = 5L;
static volatile char g_371 = 0x68L;
static volatile char *g_370[1][1][9] = {{{&g_371, &g_371, &g_371, &g_371, &g_371, &g_371, &g_371, &g_371, &g_371}}};
static volatile char **g_369[7][6][6] = {{{(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}}, {{(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}}, {{(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}}, {{(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}}, {{(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}}, {{(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}}, {{(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}, {(void*)0, &g_370[0][0][8], &g_370[0][0][7], &g_370[0][0][4], &g_370[0][0][2], (void*)0}}};
static char g_372[6] = {0x97L, 0x97L, 0x97L, 0x97L, 0x97L, 0x97L};
static unsigned short *g_398 = (void*)0;
static unsigned char g_402 = 0x88L;
static int *g_405[1] = {&g_40};
static int ** volatile g_404 = &g_405[0];
static int * volatile g_421[3][8][10] = {{{(void*)0, &g_203, (void*)0, &g_368, &g_19, &g_40, &g_19, &g_203, &g_40, &g_19}, {(void*)0, &g_203, (void*)0, &g_368, &g_19, &g_40, &g_19, &g_203, &g_40, &g_19}, {(void*)0, &g_203, (void*)0, &g_368, &g_19, &g_40, &g_19, &g_203, &g_40, &g_19}, {(void*)0, &g_203, (void*)0, &g_368, &g_19, &g_40, &g_19, &g_203, &g_40, &g_19}, {(void*)0, &g_203, (void*)0, &g_368, &g_19, &g_40, &g_19, &g_203, &g_40, &g_19}, {(void*)0, &g_203, (void*)0, &g_368, &g_19, &g_40, &g_19, &g_203, &g_40, &g_19}, {(void*)0, &g_203, (void*)0, &g_368, &g_19, &g_40, &g_19, &g_203, &g_40, &g_19}, {(void*)0, &g_203, (void*)0, &g_368, &g_19, &g_40, &g_19, &g_203, &g_40, &g_19}}, {{(void*)0, &g_203, (void*)0, &g_368, &g_19, &g_40, &g_19, &g_203, &g_40, &g_19}, {(void*)0, &g_203, (void*)0, &g_368, &g_19, &g_40, &g_19, &g_203, &g_40, &g_19}, {(void*)0, &g_203, (void*)0, &g_368, &g_19, &g_40, &g_19, &g_203, &g_40, &g_19}, {(void*)0, &g_203, (void*)0, &g_368, &g_19, &g_40, &g_19, &g_203, &g_40, &g_19}, {(void*)0, &g_203, (void*)0, &g_368, &g_19, &g_40, &g_19, &g_203, &g_40, &g_19}, {(void*)0, &g_203, (void*)0, &g_368, &g_19, &g_40, &g_19, &g_203, &g_40, &g_19}, {(void*)0, &g_203, (void*)0, &g_368, &g_19, &g_40, &g_19, &g_203, &g_40, &g_19}, {(void*)0, &g_203, (void*)0, &g_368, &g_19, &g_40, &g_19, &g_203, &g_40, &g_19}}, {{(void*)0, &g_203, (void*)0, &g_368, &g_19, &g_40, &g_19, &g_203, &g_40, &g_19}, {(void*)0, &g_203, (void*)0, &g_368, &g_19, &g_40, &g_19, &g_203, &g_40, &g_19}, {(void*)0, &g_203, (void*)0, &g_368, &g_19, &g_40, &g_19, &g_203, &g_40, &g_19}, {(void*)0, &g_203, (void*)0, &g_368, &g_19, &g_40, &g_19, &g_203, &g_40, &g_19}, {(void*)0, &g_203, (void*)0, &g_368, &g_19, &g_40, &g_19, &g_203, &g_40, &g_19}, {(void*)0, &g_203, (void*)0, &g_368, &g_19, &g_40, &g_19, &g_203, &g_40, &g_19}, {(void*)0, &g_203, (void*)0, &g_368, &g_19, &g_40, &g_19, &g_203, &g_40, &g_19}, {(void*)0, &g_203, (void*)0, &g_368, &g_19, &g_40, &g_19, &g_203, &g_40, &g_19}}};
static int * volatile g_422 = &g_368;
static unsigned char **g_435 = &g_100[0][2];
static short g_447 = (-6L);
static char g_478[1] = {0x78L};
static int ***g_495 = &g_162;
static unsigned g_496 = 0x8D9E1C2AL;
static int ** volatile g_511[2] = {&g_18, &g_18};
static volatile unsigned char g_587 = 0x59L;
static volatile unsigned char *g_586 = &g_587;
static volatile unsigned char ** volatile g_585[2] = {&g_586, &g_586};
static volatile unsigned char ** volatile * volatile g_584 = &g_585[0];
static volatile short g_608 = 1L;
static unsigned g_631 = 0xE2F481ADL;
static unsigned g_694 = 0xAF4A5DC9L;
static volatile char g_697 = 0L;
static int g_742[5] = {0x83A70412L, 1L, 0x83A70412L, 1L, 0x83A70412L};



static unsigned short func_1(void);
static int * func_2(char p_3, int * p_4, unsigned p_5, unsigned char p_6);
static unsigned char func_9(unsigned p_10);
static int * func_15(int * p_16, char p_17);
static unsigned short func_24(int * p_25, short p_26, int * p_27);
static int * func_28(char p_29, unsigned p_30, int p_31, int p_32, int p_33);
static int * func_37(int * p_38);
static int * func_42(int * p_43);
static int * func_44(int * p_45, unsigned char p_46, short p_47, int * p_48);
static int * func_49(unsigned p_50, short p_51, unsigned char p_52);
static unsigned short func_1(void)
{
    unsigned l_34 = 1UL;
    int l_35 = 1L;
    char l_448 = 1L;
    int *l_449 = (void*)0;
    char *l_477 = &g_478[0];
    int **l_612 = &l_449;
    int *l_613[6] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
    unsigned *l_614 = (void*)0;
    unsigned *l_615 = &l_34;
    char l_616 = 0xA2L;
    unsigned short l_617 = 0x3B78L;
    unsigned char **l_753 = &g_100[0][2];
    int i;
    (*g_162) = func_2(((safe_rshift_func_uint8_t_u_u(func_9(((*l_615) = (safe_lshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((((*l_612) = ((**g_495) = func_15(g_18, (safe_rshift_func_int8_t_s_s(g_19, ((*l_477) |= (((safe_lshift_func_uint16_t_u_u(0UL, func_24(func_28(g_19, l_34, l_34, (l_35 = ((*g_18) ^ 0x978D8EF0L)), l_34), l_448, l_449))) > l_34) < g_87))))))) == l_613[0]), g_402)), g_372[0])))), 3)) <= g_372[4]), l_613[0], l_616, l_617);
    for (g_694 = 0; (g_694 == 23); ++g_694)
    {
        unsigned char **l_752 = &g_100[5][0];
        int l_754 = 0x5CEC6698L;
        (*l_449) = (safe_mod_func_uint16_t_u_u((255UL != 6UL), ((safe_add_func_int16_t_s_s(0xEF77L, func_9(g_372[4]))) & (l_752 != l_753))));
        return l_754;
    }
    return (*l_449);
}







static int * func_2(char p_3, int * p_4, unsigned p_5, unsigned char p_6)
{
    unsigned l_621[5];
    unsigned l_641 = 0x7AEC10AEL;
    int l_642 = 1L;
    int l_664 = 0x654FDE3EL;
    int l_665[6];
    unsigned l_666 = 1UL;
    unsigned l_732 = 0UL;
    unsigned short l_743 = 0xC459L;
    int i;
    for (i = 0; i < 5; i++)
        l_621[i] = 0UL;
    for (i = 0; i < 6; i++)
        l_665[i] = 0xF539AC5CL;
    for (g_106 = 2; (g_106 >= 0); g_106 -= 1)
    {
        char l_618 = 1L;
        short *l_624 = &g_81;
        unsigned *l_629 = &g_180;
        unsigned *l_630 = &g_631;
        int l_632 = 0L;
        unsigned short **l_638[4] = {&g_398, (void*)0, &g_398, (void*)0};
        int l_662 = 0x5AD7864AL;
        int i;
    }
    for (g_81 = 1; (g_81 <= (-14)); g_81 = safe_sub_func_int32_t_s_s(g_81, 1))
    {
        short l_729 = 0xA90EL;
        short *l_730[1][1][3];
        int l_731 = 0x1FF925A8L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 3; k++)
                    l_730[i][j][k] = &g_447;
            }
        }
        (*g_18) = (safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((l_731 = (l_642 = (((safe_rshift_func_int16_t_s_s(((+(65535UL & ((safe_rshift_func_uint16_t_u_u(((l_621[4] | (safe_sub_func_int32_t_s_s((-9L), (safe_rshift_func_uint8_t_u_s((***g_584), g_89))))) < l_665[0]), 12)) | (~(0UL != (safe_sub_func_uint8_t_u_u((((p_5 ^ 65526UL) >= l_729) || p_3), g_87))))))) && l_729), 6)) & 0xEA47L) && p_3))) <= 0xAFDBL), 0UL)), p_6));
    }
    if ((l_665[0] >= (p_5 == func_9((l_642 < (1UL ^ ((-5L) | (p_3 < l_621[2]))))))))
    {
        int *l_735 = &g_368;
        int *l_736 = &g_106;
        int *l_737 = &l_665[0];
        int *l_738 = &l_664;
        int *l_739 = (void*)0;
        int *l_740 = (void*)0;
        int *l_741[10][1] = {{&g_40}, {&g_40}, {&g_40}, {&g_40}, {&g_40}, {&g_40}, {&g_40}, {&g_40}, {&g_40}, {&g_40}};
        int i, j;
        for (l_641 = 0; (l_641 <= 1); l_641 += 1)
        {
            int i;
            for (g_19 = 2; (g_19 >= 0); g_19 -= 1)
            {
                int i;
            }
            ++l_732;
        }
        (**g_162) = (*g_121);
        --l_743;
    }
    else
    {
        return (**g_495);
    }
    (*g_162) = p_4;
    return p_4;
}







static unsigned char func_9(unsigned p_10)
{
    return p_10;
}







static int * func_15(int * p_16, char p_17)
{
    unsigned l_479 = 0x80ABCBDDL;
    int *l_482 = &g_368;
    unsigned short *l_483 = (void*)0;
    unsigned short *l_484 = &g_69;
    short l_497 = 1L;
    int l_547 = (-9L);
    char l_552 = 0xF6L;
    int l_555 = 6L;
    int l_556[4] = {(-6L), (-1L), (-6L), (-1L)};
    unsigned char l_564[2][10];
    int l_599 = 0xB7AD8FC2L;
    short l_600[4];
    int l_601 = 0x51CD5F2EL;
    int l_602 = 0xCE720E7BL;
    char l_606 = 5L;
    char l_607 = 0x42L;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
            l_564[i][j] = 0xEDL;
    }
    for (i = 0; i < 4; i++)
        l_600[i] = (-1L);
    (*l_482) = ((((*g_98) = p_17) < l_479) || ((safe_mod_func_int8_t_s_s(0x98L, func_24(p_16, p_17, l_482))) && ((*g_98) = (g_368 | 0x8C7F302BL))));
    (*g_162) = func_44(p_16, (*l_482), (((*l_484) = p_17) < (((*l_482) > (*l_482)) ^ (safe_lshift_func_int16_t_s_s(0x7144L, (safe_add_func_uint8_t_u_u(p_17, (*l_482))))))), ((*g_162) = (void*)0));
    for (g_447 = 18; (g_447 >= 24); g_447 = safe_add_func_uint16_t_u_u(g_447, 4))
    {
        unsigned char l_501 = 1UL;
        int *l_510 = &g_40;
        int l_515 = 0x12067819L;
        int l_554 = 9L;
        int l_557 = (-4L);
        int l_558 = (-1L);
        int l_559 = 0L;
        int l_560 = 0xFC978E04L;
        int l_561 = 0x6E4A5829L;
        int l_562 = 6L;
        int l_563[3][1];
        int *l_592 = &l_557;
        int *l_593 = &l_560;
        int *l_594 = &l_561;
        int *l_595 = &l_556[1];
        int *l_596 = &l_563[1][0];
        int *l_597 = &l_556[1];
        int *l_598[3];
        short l_603 = 0x16C7L;
        int l_604[9] = {0x592D1F81L, 0x3885C919L, 0x592D1F81L, 0x3885C919L, 0x592D1F81L, 0x3885C919L, 0x592D1F81L, 0x3885C919L, 0x592D1F81L};
        char l_605 = 4L;
        unsigned l_609 = 0x64BCC372L;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_563[i][j] = (-1L);
        }
        for (i = 0; i < 3; i++)
            l_598[i] = &l_563[2][0];
    }
    return (*g_404);
}







static unsigned short func_24(int * p_25, short p_26, int * p_27)
{
    char l_452 = 0L;
    int l_453 = 0x7DF9A323L;
    int l_454 = (-3L);
    int l_455 = 1L;
    int l_456 = (-1L);
    int l_457[1][4][6] = {{{2L, 1L, 0x67F94F33L, 0x7BB5CFBEL, 0xC6B8888CL, 1L}, {2L, 1L, 0x67F94F33L, 0x7BB5CFBEL, 0xC6B8888CL, 1L}, {2L, 1L, 0x67F94F33L, 0x7BB5CFBEL, 0xC6B8888CL, 1L}, {2L, 1L, 0x67F94F33L, 0x7BB5CFBEL, 0xC6B8888CL, 1L}}};
    int l_458 = 0xEE8B2E4DL;
    unsigned l_459 = 0xFD2BC9FAL;
    int l_462 = 0x512DFE60L;
    int *l_463 = (void*)0;
    int *l_464 = &g_106;
    int *l_471 = (void*)0;
    int *l_472 = &l_453;
    int *l_473[9];
    unsigned short l_474 = 65535UL;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_473[i] = &l_455;
    for (g_106 = 5; (g_106 >= 0); g_106 -= 1)
    {
        int *l_450 = &g_368;
        int *l_451[10][6] = {{&g_106, &g_203, &g_203, &g_203, &g_106, (void*)0}, {&g_106, &g_203, &g_203, &g_203, &g_106, (void*)0}, {&g_106, &g_203, &g_203, &g_203, &g_106, (void*)0}, {&g_106, &g_203, &g_203, &g_203, &g_106, (void*)0}, {&g_106, &g_203, &g_203, &g_203, &g_106, (void*)0}, {&g_106, &g_203, &g_203, &g_203, &g_106, (void*)0}, {&g_106, &g_203, &g_203, &g_203, &g_106, (void*)0}, {&g_106, &g_203, &g_203, &g_203, &g_106, (void*)0}, {&g_106, &g_203, &g_203, &g_203, &g_106, (void*)0}, {&g_106, &g_203, &g_203, &g_203, &g_106, (void*)0}};
        int i, j;
        ++l_459;
        for (g_278 = 0; (g_278 <= 3); g_278 += 1)
        {
            int i;
            (*g_162) = g_338[g_278];
            return g_372[(g_278 + 2)];
        }
    }
    (*l_464) = l_462;
    if ((*l_464))
    {
        (*g_162) = (void*)0;
    }
    else
    {
        unsigned l_467 = 0x4553C5E0L;
        int l_470 = (-1L);
        (*l_464) = (g_89 >= (safe_lshift_func_int8_t_s_u(p_26, l_467)));
        if (l_467)
        {
            return l_467;
        }
        else
        {
            (*g_422) = (safe_mod_func_int32_t_s_s(((*l_464) = ((l_467 >= 4UL) | g_402)), l_467));
        }
        l_470 ^= l_467;
    }
    ++l_474;
    return p_26;
}







static int * func_28(char p_29, unsigned p_30, int p_31, int p_32, int p_33)
{
    unsigned short l_36[1];
    int **l_385 = &g_60;
    int l_412 = 0x6529DDF3L;
    unsigned char **l_437 = (void*)0;
    unsigned char ***l_438 = &g_435;
    short *l_441 = (void*)0;
    short *l_442 = (void*)0;
    short *l_443 = &g_81;
    short *l_444 = (void*)0;
    short *l_445 = (void*)0;
    short *l_446 = &g_447;
    int i;
    for (i = 0; i < 1; i++)
        l_36[i] = 0x76A4L;
    for (p_29 = 0; (p_29 <= 0); p_29 += 1)
    {
        int *l_384 = (void*)0;
        int l_388 = (-1L);
        for (p_32 = 0; (p_32 <= 0); p_32 += 1)
        {
            short *l_391 = &g_81;
            int i;
            l_384 = func_37(&g_19);
            (**l_385) = ((((l_36[p_32] == l_36[0]) == ((void*)0 != l_385)) >= (safe_lshift_func_uint8_t_u_u(l_388, l_36[p_32]))) < (safe_sub_func_int16_t_s_s(((*g_98) && (((((*l_391) |= 0x1FD4L) && (p_29 & 0xC0L)) != 0xAAD81876L) <= 0xD35AL)), (**l_385))));
            for (g_181 = 0; (g_181 >= 0); g_181 -= 1)
            {
                (**g_162) = p_29;
            }
        }
        for (g_203 = 0; (g_203 >= 0); g_203 -= 1)
        {
            unsigned short *l_397 = &g_69;
            int *l_403 = (void*)0;
            if ((~p_29))
            {
                char *l_393 = &g_372[1];
                char **l_392 = &l_393;
                char *l_395 = &g_372[4];
                char **l_394 = &l_395;
                int l_396 = 0x44550634L;
                for (g_368 = 0; (g_368 >= 0); g_368 -= 1)
                {
                    (**l_385) |= (-1L);
                }
                (**l_385) = (l_396 ^= (((*l_392) = &g_372[4]) == ((*l_394) = &g_372[4])));
            }
            else
            {
                int l_399 = 0L;
                for (g_181 = 0; (g_181 >= 0); g_181 -= 1)
                {
                }
                for (g_181 = 0; (g_181 <= 0); g_181 += 1)
                {
                    for (g_81 = 0; (g_81 >= 0); g_81 -= 1)
                    {
                        (**g_162) = ((0xEAL >= p_29) | (**l_385));
                        (*l_385) = &p_31;
                    }
                    return l_403;
                }
                (**l_385) &= ((*g_98) & 0L);
            }
            return (**g_161);
        }
        return (*l_385);
    }
    if ((***g_161))
    {
        unsigned *l_419 = &g_180;
        short l_420 = 0x3850L;
        p_31 ^= ((**l_385) && (g_278 | (-10L)));
        (*g_422) |= (safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((~(((((!((safe_sub_func_int16_t_s_s((-3L), (p_30 & 7UL))) == (p_32 || (l_412 = p_31)))) <= p_30) <= (safe_sub_func_int16_t_s_s(((((*l_419) = ((g_40 < (((safe_sub_func_int16_t_s_s((-1L), ((safe_mod_func_int32_t_s_s(((**l_385) | (**l_385)), g_372[4])) > p_31))) == 0UL) || 0x040FL)) || p_31)) && l_420) != 0xE3C4642AL), (**l_385)))) || (**l_385)) > p_31)), (**l_385))), p_32));
        (**l_385) = p_29;
        for (l_420 = (-1); (l_420 < 29); l_420 = safe_add_func_int32_t_s_s(l_420, 1))
        {
            int l_429 = (-1L);
            unsigned short l_432 = 0x7887L;
            unsigned char **l_433[1];
            unsigned char ***l_434 = (void*)0;
            unsigned char ***l_436 = &l_433[0];
            int i;
            for (i = 0; i < 1; i++)
                l_433[i] = &g_100[3][0];
            for (g_203 = 0; (g_203 <= 10); g_203 = safe_add_func_int32_t_s_s(g_203, 3))
            {
                for (g_368 = (-13); (g_368 < 3); g_368 = safe_add_func_int32_t_s_s(g_368, 2))
                {
                    (*g_60) = p_31;
                    if ((**g_404))
                        break;
                    (**l_385) = (*g_18);
                    (*l_385) = &p_32;
                }
            }
            (*g_60) = l_429;
            (*g_60) = ((safe_sub_func_uint8_t_u_u(0xCFL, l_432)) & ((g_278 < (((*l_436) = (g_435 = l_433[0])) != (*g_224))) != 0x874DD887L));
        }
    }
    else
    {
        for (g_40 = 0; g_40 < 8; g_40 += 1)
        {
            for (g_181 = 0; g_181 < 8; g_181 += 1)
            {
                for (p_31 = 0; p_31 < 4; p_31 += 1)
                {
                    g_59[g_40][g_181][p_31] = &g_405[0];
                }
            }
        }
    }
    p_31 |= ((**l_385) && ((((*l_446) = ((*l_443) = ((((((*l_438) = l_437) == (void*)0) <= (safe_mod_func_int32_t_s_s(p_32, (**l_385)))) <= (**l_385)) > (p_30 > (((**l_385) && (p_30 | g_402)) > 5UL))))) == (**l_385)) <= (**l_385)));
    return (*g_404);
}







static int * func_37(int * p_38)
{
    int *l_39 = &g_40;
    unsigned l_41[9][3] = {{0x9EC6EA3DL, 4UL, 4294967287UL}, {0x9EC6EA3DL, 4UL, 4294967287UL}, {0x9EC6EA3DL, 4UL, 4294967287UL}, {0x9EC6EA3DL, 4UL, 4294967287UL}, {0x9EC6EA3DL, 4UL, 4294967287UL}, {0x9EC6EA3DL, 4UL, 4294967287UL}, {0x9EC6EA3DL, 4UL, 4294967287UL}, {0x9EC6EA3DL, 4UL, 4294967287UL}, {0x9EC6EA3DL, 4UL, 4294967287UL}};
    int l_63[9] = {0L, (-10L), 0L, (-10L), 0L, (-10L), 0L, (-10L), 0L};
    int l_208 = 0x12F0BC0FL;
    unsigned l_211 = 0x1AA28781L;
    unsigned char **l_221[3][2][1];
    unsigned short l_241 = 5UL;
    unsigned l_266 = 0xB8E30F78L;
    unsigned short l_291 = 1UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_221[i][j][k] = &g_100[5][2];
        }
    }
    (*l_39) |= 1L;
    for (g_40 = 0; (g_40 <= 2); g_40 += 1)
    {
        int **l_53 = &l_39;
        int l_56[4][7] = {{0x12349124L, 0xFD7F7FFFL, 1L, 0xFD7F7FFFL, 0x12349124L, 0x7A501900L, 0x12349124L}, {0x12349124L, 0xFD7F7FFFL, 1L, 0xFD7F7FFFL, 0x12349124L, 0x7A501900L, 0x12349124L}, {0x12349124L, 0xFD7F7FFFL, 1L, 0xFD7F7FFFL, 0x12349124L, 0x7A501900L, 0x12349124L}, {0x12349124L, 0xFD7F7FFFL, 1L, 0xFD7F7FFFL, 0x12349124L, 0x7A501900L, 0x12349124L}};
        int *l_254 = (void*)0;
        int *l_255 = &l_208;
        int *l_256 = &g_203;
        int *l_257 = &l_208;
        int *l_258 = &l_63[5];
        int *l_259 = &l_208;
        int *l_260 = &l_56[3][6];
        int *l_261 = &l_63[7];
        int *l_262 = (void*)0;
        int *l_263 = &g_106;
        int *l_264[4][7][9] = {{{&g_40, &g_106, &g_40, &l_56[1][2], &g_106, &l_208, &l_208, (void*)0, &l_56[2][5]}, {&g_40, &g_106, &g_40, &l_56[1][2], &g_106, &l_208, &l_208, (void*)0, &l_56[2][5]}, {&g_40, &g_106, &g_40, &l_56[1][2], &g_106, &l_208, &l_208, (void*)0, &l_56[2][5]}, {&g_40, &g_106, &g_40, &l_56[1][2], &g_106, &l_208, &l_208, (void*)0, &l_56[2][5]}, {&g_40, &g_106, &g_40, &l_56[1][2], &g_106, &l_208, &l_208, (void*)0, &l_56[2][5]}, {&g_40, &g_106, &g_40, &l_56[1][2], &g_106, &l_208, &l_208, (void*)0, &l_56[2][5]}, {&g_40, &g_106, &g_40, &l_56[1][2], &g_106, &l_208, &l_208, (void*)0, &l_56[2][5]}}, {{&g_40, &g_106, &g_40, &l_56[1][2], &g_106, &l_208, &l_208, (void*)0, &l_56[2][5]}, {&g_40, &g_106, &g_40, &l_56[1][2], &g_106, &l_208, &l_208, (void*)0, &l_56[2][5]}, {&g_40, &g_106, &g_40, &l_56[1][2], &g_106, &l_208, &l_208, (void*)0, &l_56[2][5]}, {&g_40, &g_106, &g_40, &l_56[1][2], &g_106, &l_208, &l_208, (void*)0, &l_56[2][5]}, {&g_40, &g_106, &g_40, &l_56[1][2], &g_106, &l_208, &l_208, (void*)0, &l_56[2][5]}, {&g_40, &g_106, &g_40, &l_56[1][2], &g_106, &l_208, &l_208, (void*)0, &l_56[2][5]}, {&g_40, &g_106, &g_40, &l_56[1][2], &g_106, &l_208, &l_208, (void*)0, &l_56[2][5]}}, {{&g_40, &g_106, &g_40, &l_56[1][2], &g_106, &l_208, &l_208, (void*)0, &l_56[2][5]}, {&g_40, &g_106, &g_40, &l_56[1][2], &g_106, &l_208, &l_208, (void*)0, &l_56[2][5]}, {&g_40, &g_106, &g_40, &l_56[1][2], &g_106, &l_208, &l_208, (void*)0, &l_56[2][5]}, {&g_40, &g_106, &g_40, &l_56[1][2], &g_106, &l_208, &l_208, (void*)0, &l_56[2][5]}, {&g_40, &g_106, &g_40, &l_56[1][2], &g_106, &l_208, &l_208, (void*)0, &l_56[2][5]}, {&g_40, &g_106, &g_40, &l_56[1][2], &g_106, &l_208, &l_208, (void*)0, &l_56[2][5]}, {&g_40, &g_106, &g_40, &l_56[1][2], &g_106, &l_208, &l_208, (void*)0, &l_56[2][5]}}, {{&g_40, &g_106, &g_40, &l_56[1][2], &g_106, &l_208, &l_208, (void*)0, &l_56[2][5]}, {&g_40, &g_106, &g_40, &l_56[1][2], &g_106, &l_208, &l_208, (void*)0, &l_56[2][5]}, {&g_40, &g_106, &g_40, &l_56[1][2], &g_106, &l_208, &l_208, (void*)0, &l_56[2][5]}, {&g_40, &g_106, &g_40, &l_56[1][2], &g_106, &l_208, &l_208, (void*)0, &l_56[2][5]}, {&g_40, &g_106, &g_40, &l_56[1][2], &g_106, &l_208, &l_208, (void*)0, &l_56[2][5]}, {&g_40, &g_106, &g_40, &l_56[1][2], &g_106, &l_208, &l_208, (void*)0, &l_56[2][5]}, {&g_40, &g_106, &g_40, &l_56[1][2], &g_106, &l_208, &l_208, (void*)0, &l_56[2][5]}}};
        int l_265[6][4] = {{0x48B14181L, 0x48B14181L, 0x4E5C12BEL, 0x48B14181L}, {0x48B14181L, 0x48B14181L, 0x4E5C12BEL, 0x48B14181L}, {0x48B14181L, 0x48B14181L, 0x4E5C12BEL, 0x48B14181L}, {0x48B14181L, 0x48B14181L, 0x4E5C12BEL, 0x48B14181L}, {0x48B14181L, 0x48B14181L, 0x4E5C12BEL, 0x48B14181L}, {0x48B14181L, 0x48B14181L, 0x4E5C12BEL, 0x48B14181L}};
        int i, j, k;
    }
    (*g_162) = (*g_162);
    if (((void*)0 == &p_38))
    {
        int l_282 = 0x0BCD7F1CL;
        int *l_283 = &g_203;
        int *l_284 = &l_282;
        int *l_285 = &l_282;
        int *l_286 = (void*)0;
        int *l_287 = &l_282;
        int *l_288 = &g_40;
        int *l_289 = &g_40;
        int *l_290[5][3][9] = {{{&l_63[8], &g_203, (void*)0, (void*)0, (void*)0, &g_106, &g_106, &l_63[7], &l_63[7]}, {&l_63[8], &g_203, (void*)0, (void*)0, (void*)0, &g_106, &g_106, &l_63[7], &l_63[7]}, {&l_63[8], &g_203, (void*)0, (void*)0, (void*)0, &g_106, &g_106, &l_63[7], &l_63[7]}}, {{&l_63[8], &g_203, (void*)0, (void*)0, (void*)0, &g_106, &g_106, &l_63[7], &l_63[7]}, {&l_63[8], &g_203, (void*)0, (void*)0, (void*)0, &g_106, &g_106, &l_63[7], &l_63[7]}, {&l_63[8], &g_203, (void*)0, (void*)0, (void*)0, &g_106, &g_106, &l_63[7], &l_63[7]}}, {{&l_63[8], &g_203, (void*)0, (void*)0, (void*)0, &g_106, &g_106, &l_63[7], &l_63[7]}, {&l_63[8], &g_203, (void*)0, (void*)0, (void*)0, &g_106, &g_106, &l_63[7], &l_63[7]}, {&l_63[8], &g_203, (void*)0, (void*)0, (void*)0, &g_106, &g_106, &l_63[7], &l_63[7]}}, {{&l_63[8], &g_203, (void*)0, (void*)0, (void*)0, &g_106, &g_106, &l_63[7], &l_63[7]}, {&l_63[8], &g_203, (void*)0, (void*)0, (void*)0, &g_106, &g_106, &l_63[7], &l_63[7]}, {&l_63[8], &g_203, (void*)0, (void*)0, (void*)0, &g_106, &g_106, &l_63[7], &l_63[7]}}, {{&l_63[8], &g_203, (void*)0, (void*)0, (void*)0, &g_106, &g_106, &l_63[7], &l_63[7]}, {&l_63[8], &g_203, (void*)0, (void*)0, (void*)0, &g_106, &g_106, &l_63[7], &l_63[7]}, {&l_63[8], &g_203, (void*)0, (void*)0, (void*)0, &g_106, &g_106, &l_63[7], &l_63[7]}}};
        unsigned l_294 = 0x908BC97EL;
        int *l_299 = &g_106;
        unsigned l_317[2];
        unsigned l_329 = 4294967287UL;
        unsigned **l_351 = &g_338[1];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_317[i] = 4294967292UL;
        l_291--;
        --l_294;
        for (g_278 = (-12); (g_278 >= (-21)); g_278 = safe_sub_func_uint8_t_u_u(g_278, 2))
        {
            unsigned short l_303 = 0xCFA3L;
            char *l_310 = &g_181;
            short *l_323 = &g_81;
            int l_328 = 0x05E28D0CL;
            (*g_162) = l_299;
            for (l_208 = 0; (l_208 <= 2); l_208 += 1)
            {
                unsigned char l_300 = 252UL;
                ++l_300;
                l_303++;
            }
            (*g_162) = (*g_162);
        }
    }
    else
    {
        short l_377 = 1L;
        unsigned *l_382 = (void*)0;
        unsigned *l_383 = &l_41[1][2];
        (*g_60) ^= ((g_372[4] != g_181) <= (safe_rshift_func_int8_t_s_s(((*p_38) <= ((**g_224) != &g_87)), (((*g_98) ^ (((l_377 | g_81) >= (safe_add_func_uint32_t_u_u(((*l_383) = (safe_rshift_func_int16_t_s_s(g_372[1], 15))), g_81))) != 65533UL)) <= g_19))));
    }
    return p_38;
}







static int * func_42(int * p_43)
{
    short l_91 = 0xFBE8L;
    unsigned char *l_96 = &g_87;
    unsigned char *l_99 = &g_87;
    int l_108 = 7L;
    int l_109[6] = {0L, 0L, 0x904BE6A8L, 0L, 0L, 0x904BE6A8L};
    unsigned *l_182 = &g_89;
    int *l_195[10][7][3] = {{{&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}}, {{&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}}, {{&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}}, {{&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}}, {{&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}}, {{&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}}, {{&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}}, {{&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}}, {{&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}}, {{&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}, {&l_108, (void*)0, &l_109[5]}}};
    unsigned l_196 = 0x4F514575L;
    int i, j, k;
    if (l_91)
    {
        unsigned char l_102 = 0x74L;
        int *l_110 = &l_109[3];
        int *l_111 = &l_109[0];
        int l_112[8][1][1] = {{{0xB1DA9CEEL}}, {{0xB1DA9CEEL}}, {{0xB1DA9CEEL}}, {{0xB1DA9CEEL}}, {{0xB1DA9CEEL}}, {{0xB1DA9CEEL}}, {{0xB1DA9CEEL}}, {{0xB1DA9CEEL}}};
        int *l_113 = &l_109[1];
        int *l_114[4][9][2] = {{{&g_19, &g_40}, {&g_19, &g_40}, {&g_19, &g_40}, {&g_19, &g_40}, {&g_19, &g_40}, {&g_19, &g_40}, {&g_19, &g_40}, {&g_19, &g_40}, {&g_19, &g_40}}, {{&g_19, &g_40}, {&g_19, &g_40}, {&g_19, &g_40}, {&g_19, &g_40}, {&g_19, &g_40}, {&g_19, &g_40}, {&g_19, &g_40}, {&g_19, &g_40}, {&g_19, &g_40}}, {{&g_19, &g_40}, {&g_19, &g_40}, {&g_19, &g_40}, {&g_19, &g_40}, {&g_19, &g_40}, {&g_19, &g_40}, {&g_19, &g_40}, {&g_19, &g_40}, {&g_19, &g_40}}, {{&g_19, &g_40}, {&g_19, &g_40}, {&g_19, &g_40}, {&g_19, &g_40}, {&g_19, &g_40}, {&g_19, &g_40}, {&g_19, &g_40}, {&g_19, &g_40}, {&g_19, &g_40}}};
        unsigned short l_115 = 0UL;
        int i, j, k;
        for (l_91 = 0; (l_91 >= (-30)); l_91 = safe_sub_func_int16_t_s_s(l_91, 4))
        {
            unsigned char **l_97[5][9] = {{&l_96, &l_96, &l_96, (void*)0, &l_96, &l_96, &l_96, &l_96, &l_96}, {&l_96, &l_96, &l_96, (void*)0, &l_96, &l_96, &l_96, &l_96, &l_96}, {&l_96, &l_96, &l_96, (void*)0, &l_96, &l_96, &l_96, &l_96, &l_96}, {&l_96, &l_96, &l_96, (void*)0, &l_96, &l_96, &l_96, &l_96, &l_96}, {&l_96, &l_96, &l_96, (void*)0, &l_96, &l_96, &l_96, &l_96, &l_96}};
            int l_101 = 0x34D3BE1FL;
            int *l_103 = &l_101;
            int *l_104 = (void*)0;
            int *l_105 = &g_106;
            int i, j;
            if (((*l_105) &= ((*l_103) = ((safe_sub_func_uint32_t_u_u(((g_98 = l_96) != (g_100[5][0] = l_99)), (1L > g_69))) >= ((*l_96) = (l_102 &= (0xC8FAL >= l_101)))))))
            {
                return p_43;
            }
            else
            {
                int **l_107 = &l_105;
                (*l_107) = p_43;
            }
            (*l_103) = (*g_60);
        }
        l_115--;
        (*l_113) &= 0x1F9A50F5L;
        return p_43;
    }
    else
    {
        int l_136[3][2][7] = {{{0x3F7002FBL, 0x6C60711DL, 0L, 0x10D5BDE6L, 0xC9A99D27L, 0xC3978F7DL, 0xC9A99D27L}, {0x3F7002FBL, 0x6C60711DL, 0L, 0x10D5BDE6L, 0xC9A99D27L, 0xC3978F7DL, 0xC9A99D27L}}, {{0x3F7002FBL, 0x6C60711DL, 0L, 0x10D5BDE6L, 0xC9A99D27L, 0xC3978F7DL, 0xC9A99D27L}, {0x3F7002FBL, 0x6C60711DL, 0L, 0x10D5BDE6L, 0xC9A99D27L, 0xC3978F7DL, 0xC9A99D27L}}, {{0x3F7002FBL, 0x6C60711DL, 0L, 0x10D5BDE6L, 0xC9A99D27L, 0xC3978F7DL, 0xC9A99D27L}, {0x3F7002FBL, 0x6C60711DL, 0L, 0x10D5BDE6L, 0xC9A99D27L, 0xC3978F7DL, 0xC9A99D27L}}};
        int i, j, k;
        for (l_91 = 0; (l_91 < 27); l_91 = safe_add_func_int8_t_s_s(l_91, 7))
        {
            int l_134 = (-1L);
            int l_141[4];
            int l_142 = 2L;
            int l_143 = 7L;
            int *l_155[2];
            unsigned l_173[5][10] = {{5UL, 1UL, 4294967295UL, 1UL, 5UL, 4294967293UL, 4294967295UL, 4294967293UL, 5UL, 1UL}, {5UL, 1UL, 4294967295UL, 1UL, 5UL, 4294967293UL, 4294967295UL, 4294967293UL, 5UL, 1UL}, {5UL, 1UL, 4294967295UL, 1UL, 5UL, 4294967293UL, 4294967295UL, 4294967293UL, 5UL, 1UL}, {5UL, 1UL, 4294967295UL, 1UL, 5UL, 4294967293UL, 4294967295UL, 4294967293UL, 5UL, 1UL}, {5UL, 1UL, 4294967295UL, 1UL, 5UL, 4294967293UL, 4294967295UL, 4294967293UL, 5UL, 1UL}};
            int i, j;
            for (i = 0; i < 4; i++)
                l_141[i] = (-1L);
            for (i = 0; i < 2; i++)
                l_155[i] = &l_108;
            if ((*p_43))
            {
                (*g_121) = (*p_43);
                if (l_109[4])
                    continue;
            }
            else
            {
                unsigned short l_144 = 5UL;
                short *l_154 = &g_81;
                unsigned short l_174 = 0xB36CL;
                for (g_81 = 20; (g_81 <= 17); g_81 = safe_sub_func_int16_t_s_s(g_81, 3))
                {
                    short l_137[3][3][7] = {{{0xBF0CL, (-1L), 5L, 0x0D97L, 0xA990L, 0x6BD5L, 0x6BD5L}, {0xBF0CL, (-1L), 5L, 0x0D97L, 0xA990L, 0x6BD5L, 0x6BD5L}, {0xBF0CL, (-1L), 5L, 0x0D97L, 0xA990L, 0x6BD5L, 0x6BD5L}}, {{0xBF0CL, (-1L), 5L, 0x0D97L, 0xA990L, 0x6BD5L, 0x6BD5L}, {0xBF0CL, (-1L), 5L, 0x0D97L, 0xA990L, 0x6BD5L, 0x6BD5L}, {0xBF0CL, (-1L), 5L, 0x0D97L, 0xA990L, 0x6BD5L, 0x6BD5L}}, {{0xBF0CL, (-1L), 5L, 0x0D97L, 0xA990L, 0x6BD5L, 0x6BD5L}, {0xBF0CL, (-1L), 5L, 0x0D97L, 0xA990L, 0x6BD5L, 0x6BD5L}, {0xBF0CL, (-1L), 5L, 0x0D97L, 0xA990L, 0x6BD5L, 0x6BD5L}}};
                    int l_138 = 0x90D9D044L;
                    int l_139 = (-1L);
                    int l_140 = 0x0C0EAC7FL;
                    int i, j, k;
                    for (g_106 = 16; (g_106 <= 6); g_106--)
                    {
                        unsigned l_126 = 0x988980C3L;
                        int *l_127 = &l_109[0];
                        int *l_128 = &l_109[0];
                        int *l_129 = &l_108;
                        int *l_130 = &l_109[0];
                        int *l_131 = &l_109[0];
                        int *l_132 = &l_108;
                        int *l_133[10] = {&l_108, &l_108, &l_108, &l_108, &l_108, &l_108, &l_108, &l_108, &l_108, &l_108};
                        int l_135 = 0x6B924B8AL;
                        int i;
                        if (l_126)
                            break;
                        ++l_144;
                        return p_43;
                    }
                }
                l_155[1] = func_44(&l_108, (safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(1UL, (safe_unary_minus_func_uint8_t_u(1UL)))), 0)), ((*l_154) = (safe_rshift_func_uint8_t_u_s(0x92L, 4))), p_43);
                for (l_143 = 8; (l_143 > (-16)); l_143 = safe_sub_func_int8_t_s_s(l_143, 2))
                {
                    unsigned short l_158 = 0x8251L;
                    int *l_159 = &l_136[0][0][5];
                    unsigned char **l_166 = &g_98;
                    int l_167 = 0x395427B4L;
                    if ((0L < (l_158 || l_144)))
                    {
                        int **l_160 = &l_155[0];
                        (*l_160) = func_44(l_159, l_136[0][0][5], g_81, p_43);
                        (*g_161) = &p_43;
                        if ((**l_160))
                            break;
                    }
                    else
                    {
                        unsigned char l_163 = 0x06L;
                        (**g_161) = (**g_161);
                        l_163++;
                        if (l_136[0][0][5])
                            break;
                    }
                    if (((*l_159) = (((*l_159) <= (0L ^ (l_166 == l_166))) & g_81)))
                    {
                        unsigned l_168 = 4294967286UL;
                        ++l_168;
                        if ((*p_43))
                            continue;
                    }
                    else
                    {
                        (*l_159) = (*p_43);
                        if ((*p_43))
                            break;
                        if ((*p_43))
                            break;
                    }
                    l_173[0][9] ^= (0x56030E86L || ((((0x53653626L >= (!((*g_161) == (void*)0))) <= l_136[0][0][5]) && (*l_159)) < (*l_159)));
                    l_174 ^= ((*l_159) = (*l_159));
                }
            }
            for (l_142 = 0; (l_142 <= 5); l_142 += 1)
            {
                unsigned l_177 = 0x38BE1AEAL;
                unsigned *l_178 = (void*)0;
                unsigned *l_179 = &g_180;
                int l_185 = 1L;
                int i;
                l_109[l_142] = (!(safe_add_func_uint32_t_u_u((g_181 = (((l_91 | l_177) | g_81) & (((*l_179) = l_177) > (l_177 | (*p_43))))), ((0x883D1008L <= (*g_121)) | 0x9CL))));
                if ((&g_87 == (void*)0))
                {
                    int i;
                    l_109[l_142] &= (&l_173[0][9] == l_182);
                    if (l_109[0])
                        break;
                    for (l_143 = 3; (l_143 >= 0); l_143 -= 1)
                    {
                        unsigned char **l_184[8][9][3] = {{{&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}}, {{&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}}, {{&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}}, {{&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}}, {{&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}}, {{&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}}, {{&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}}, {{&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0}}};
                        unsigned char ***l_183 = &l_184[6][3][0];
                        int i, j, k;
                        l_109[l_142] = (&g_100[1][0] != ((*l_183) = &g_100[1][2]));
                        l_109[0] = (l_185 &= l_109[l_142]);
                        l_109[1] = (*p_43);
                    }
                }
                else
                {
                    l_136[2][0][5] = (safe_rshift_func_uint8_t_u_u((*g_98), 0));
                    for (l_108 = 4; (l_108 >= 0); l_108 -= 1)
                    {
                        l_136[0][0][5] = (-4L);
                    }
                    l_185 = (+(l_136[1][1][3] |= (*p_43)));
                }
            }
            for (g_69 = 0; (g_69 == 40); g_69 = safe_add_func_int32_t_s_s(g_69, 1))
            {
                unsigned short l_192 = 0x6A48L;
                for (g_106 = 13; (g_106 == (-27)); g_106 = safe_sub_func_int32_t_s_s(g_106, 8))
                {
                    l_192++;
                }
            }
        }
    }
    l_196++;
    return p_43;
}







static int * func_44(int * p_45, unsigned char p_46, short p_47, int * p_48)
{
    unsigned short *l_68[6] = {&g_69, &g_69, &g_69, &g_69, &g_69, &g_69};
    int l_70 = (-5L);
    int **l_71 = &g_60;
    int *l_90 = &l_70;
    int i;
    (*l_71) = func_49(((~(safe_rshift_func_uint8_t_u_u(247UL, 5))) < (l_70 = (safe_rshift_func_uint16_t_u_u(g_19, 11)))), p_46, g_69);
    for (p_47 = 0; (p_47 <= 2); p_47 = safe_add_func_int16_t_s_s(p_47, 1))
    {
        int *l_74 = &l_70;
        unsigned l_75 = 0UL;
        short *l_80 = &g_81;
        unsigned char *l_86 = &g_87;
        unsigned *l_88 = &g_89;
        (*l_74) = (*p_45);
        l_74 = func_49((g_19 ^ l_75), (safe_sub_func_int16_t_s_s(((*l_80) ^= (safe_lshift_func_int8_t_s_s((*l_74), 5))), g_40)), ((*l_86) ^= ((*l_74) || (safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(g_40, (((7L > g_40) & 0xAE23L) > p_47))), 1L)))));
        (*l_71) = func_49(((*l_88) ^= (*l_74)), p_47, p_47);
    }
    return p_45;
}







static int * func_49(unsigned p_50, short p_51, unsigned char p_52)
{
    int *l_58 = &g_19;
    int **l_57 = &l_58;
    int **l_61 = &g_60;
    int *l_62 = &g_19;
    (*l_61) = ((*l_57) = (void*)0);
    return l_62;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_372[i], "g_372[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_402, "g_402", print_hash_value);
    transparent_crc(g_447, "g_447", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_478[i], "g_478[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_496, "g_496", print_hash_value);
    transparent_crc(g_587, "g_587", print_hash_value);
    transparent_crc(g_608, "g_608", print_hash_value);
    transparent_crc(g_631, "g_631", print_hash_value);
    transparent_crc(g_694, "g_694", print_hash_value);
    transparent_crc(g_697, "g_697", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_742[i], "g_742[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
