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




static long long
(safe_unary_minus_func_int64_t_s)(long long si )
{
 
  return


    (si==(-(9223372036854775807LL)-1)) ?
    ((si)) :


    -si;
}

static long long
(safe_add_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return


    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807LL)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-(9223372036854775807LL)-1)-si2)))) ?
    ((si1)) :


    (si1 + si2);
}

static long long
(safe_sub_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return


    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807LL))))-si2)^si2)) < 0) ?
    ((si1)) :


    (si1 - si2);
}

static long long
(safe_mul_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return


    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807LL) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-(9223372036854775807LL)-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-(9223372036854775807LL)-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807LL) / si1)))) ?
    ((si1)) :


    si1 * si2;
}

static long long
(safe_mod_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-(9223372036854775807LL)-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static long long
(safe_div_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-(9223372036854775807LL)-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static long long
(safe_lshift_func_int64_t_s_s)(long long left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807LL) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static long long
(safe_lshift_func_int64_t_s_u)(long long left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807LL) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static long long
(safe_rshift_func_int64_t_s_s)(long long left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static long long
(safe_rshift_func_int64_t_s_u)(long long left, unsigned int right )
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




static unsigned long long
(safe_unary_minus_func_uint64_t_u)(unsigned long long ui )
{
 
  return -ui;
}

static unsigned long long
(safe_add_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return ui1 + ui2;
}

static unsigned long long
(safe_sub_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return ui1 - ui2;
}

static unsigned long long
(safe_mul_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return ((unsigned long long int)ui1) * ((unsigned long long int)ui2);
}

static unsigned long long
(safe_mod_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static unsigned long long
(safe_div_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static unsigned long long
(safe_lshift_func_uint64_t_u_s)(unsigned long long left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615ULL) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static unsigned long long
(safe_lshift_func_uint64_t_u_u)(unsigned long long left, unsigned int right )
{
 
  return

    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615ULL) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static unsigned long long
(safe_rshift_func_uint64_t_u_s)(unsigned long long left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static unsigned long long
(safe_rshift_func_uint64_t_u_u)(unsigned long long left, unsigned int right )
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



static unsigned char g_12 = 0xBAL;
static unsigned char g_23 = 0xA1L;
static int g_26 = 1L;
static char g_38 = (-6L);
static int *g_42 = &g_26;
static int **g_41[4] = {&g_42, &g_42, &g_42, &g_42};
static unsigned char *g_45[8] = {&g_12, (void*)0, &g_12, (void*)0, &g_12, (void*)0, &g_12, (void*)0};
static unsigned char *g_47 = &g_12;
static unsigned g_66[3] = {0x326DC75DL, 0x326DC75DL, 0x326DC75DL};
static short g_80[7] = {0x91DEL, 0x91DEL, 4L, 0x91DEL, 0x91DEL, 4L, 0x91DEL};
static unsigned g_100 = 0UL;
static char g_103 = (-3L);
static char **g_127 = (void*)0;
static char g_156 = 7L;
static volatile unsigned g_174 = 0xB68CB1B8L;
static volatile short g_179 = 0xD8E9L;
static volatile short *g_178 = &g_179;
static volatile short **g_177 = &g_178;
static int g_193 = 0L;
static unsigned g_200 = 0xCD80C335L;
static unsigned g_227 = 0x6E795469L;
static short **g_247 = (void*)0;
static short ***g_246 = &g_247;
static short ****g_245[10][2][4] = {{{(void*)0, &g_246, (void*)0, &g_246}, {(void*)0, &g_246, (void*)0, &g_246}}, {{(void*)0, &g_246, (void*)0, &g_246}, {(void*)0, &g_246, (void*)0, &g_246}}, {{(void*)0, &g_246, (void*)0, &g_246}, {(void*)0, &g_246, (void*)0, &g_246}}, {{(void*)0, &g_246, (void*)0, &g_246}, {(void*)0, &g_246, (void*)0, &g_246}}, {{(void*)0, &g_246, (void*)0, &g_246}, {(void*)0, &g_246, (void*)0, &g_246}}, {{(void*)0, &g_246, (void*)0, &g_246}, {(void*)0, &g_246, (void*)0, &g_246}}, {{(void*)0, &g_246, (void*)0, &g_246}, {(void*)0, &g_246, (void*)0, &g_246}}, {{(void*)0, &g_246, (void*)0, &g_246}, {(void*)0, &g_246, (void*)0, &g_246}}, {{(void*)0, &g_246, (void*)0, &g_246}, {(void*)0, &g_246, (void*)0, &g_246}}, {{(void*)0, &g_246, (void*)0, &g_246}, {(void*)0, &g_246, (void*)0, &g_246}}};
static unsigned short g_265[10] = {0xD30FL, 0xD30FL, 0xD30FL, 0xD30FL, 0xD30FL, 0xD30FL, 0xD30FL, 0xD30FL, 0xD30FL, 0xD30FL};
static volatile unsigned short g_281 = 0UL;
static int g_309 = 0xBA816AAFL;
static unsigned char g_356 = 5UL;
static unsigned char **g_370 = &g_45[6];
static const unsigned g_374 = 0UL;
static int g_403 = 0xB084F6E2L;
static const unsigned g_422 = 0xE08426D6L;
static volatile unsigned short *g_475 = &g_281;
static volatile unsigned short **g_474 = &g_475;
static volatile unsigned g_486[3][2] = {{0x60F16CF3L, 0x60F16CF3L}, {0x60F16CF3L, 0x60F16CF3L}, {0x60F16CF3L, 0x60F16CF3L}};
static volatile int g_496[5][6] = {{(-9L), 0x09C243F7L, 0xE117B945L, 0x8D758983L, 0x09C243F7L, 0L}, {(-9L), 0x09C243F7L, 0xE117B945L, 0x8D758983L, 0x09C243F7L, 0L}, {(-9L), 0x09C243F7L, 0xE117B945L, 0x8D758983L, 0x09C243F7L, 0L}, {(-9L), 0x09C243F7L, 0xE117B945L, 0x8D758983L, 0x09C243F7L, 0L}, {(-9L), 0x09C243F7L, 0xE117B945L, 0x8D758983L, 0x09C243F7L, 0L}};
static unsigned g_533 = 0x6B4B1917L;
static int g_540 = 1L;
static int *g_568 = &g_540;
static int **g_567 = &g_568;
static int g_613 = 0x759897D7L;
static unsigned char g_614 = 246UL;
static unsigned short g_697 = 0xFF05L;
static int * const **g_771 = (void*)0;
static int g_780[7][4][7] = {{{1L, (-6L), 0x9846489CL, 0x655A0C59L, 0x8CDCBBE9L, 0x0318C270L, 0x8CDCBBE9L}, {1L, (-6L), 0x9846489CL, 0x655A0C59L, 0x8CDCBBE9L, 0x0318C270L, 0x8CDCBBE9L}, {1L, (-6L), 0x9846489CL, 0x655A0C59L, 0x8CDCBBE9L, 0x0318C270L, 0x8CDCBBE9L}, {1L, (-6L), 0x9846489CL, 0x655A0C59L, 0x8CDCBBE9L, 0x0318C270L, 0x8CDCBBE9L}}, {{1L, (-6L), 0x9846489CL, 0x655A0C59L, 0x8CDCBBE9L, 0x0318C270L, 0x8CDCBBE9L}, {1L, (-6L), 0x9846489CL, 0x655A0C59L, 0x8CDCBBE9L, 0x0318C270L, 0x8CDCBBE9L}, {1L, (-6L), 0x9846489CL, 0x655A0C59L, 0x8CDCBBE9L, 0x0318C270L, 0x8CDCBBE9L}, {1L, (-6L), 0x9846489CL, 0x655A0C59L, 0x8CDCBBE9L, 0x0318C270L, 0x8CDCBBE9L}}, {{1L, (-6L), 0x9846489CL, 0x655A0C59L, 0x8CDCBBE9L, 0x0318C270L, 0x8CDCBBE9L}, {1L, (-6L), 0x9846489CL, 0x655A0C59L, 0x8CDCBBE9L, 0x0318C270L, 0x8CDCBBE9L}, {1L, (-6L), 0x9846489CL, 0x655A0C59L, 0x8CDCBBE9L, 0x0318C270L, 0x8CDCBBE9L}, {1L, (-6L), 0x9846489CL, 0x655A0C59L, 0x8CDCBBE9L, 0x0318C270L, 0x8CDCBBE9L}}, {{1L, (-6L), 0x9846489CL, 0x655A0C59L, 0x8CDCBBE9L, 0x0318C270L, 0x8CDCBBE9L}, {1L, (-6L), 0x9846489CL, 0x655A0C59L, 0x8CDCBBE9L, 0x0318C270L, 0x8CDCBBE9L}, {1L, (-6L), 0x9846489CL, 0x655A0C59L, 0x8CDCBBE9L, 0x0318C270L, 0x8CDCBBE9L}, {1L, (-6L), 0x9846489CL, 0x655A0C59L, 0x8CDCBBE9L, 0x0318C270L, 0x8CDCBBE9L}}, {{1L, (-6L), 0x9846489CL, 0x655A0C59L, 0x8CDCBBE9L, 0x0318C270L, 0x8CDCBBE9L}, {1L, (-6L), 0x9846489CL, 0x655A0C59L, 0x8CDCBBE9L, 0x0318C270L, 0x8CDCBBE9L}, {1L, (-6L), 0x9846489CL, 0x655A0C59L, 0x8CDCBBE9L, 0x0318C270L, 0x8CDCBBE9L}, {1L, (-6L), 0x9846489CL, 0x655A0C59L, 0x8CDCBBE9L, 0x0318C270L, 0x8CDCBBE9L}}, {{1L, (-6L), 0x9846489CL, 0x655A0C59L, 0x8CDCBBE9L, 0x0318C270L, 0x8CDCBBE9L}, {1L, (-6L), 0x9846489CL, 0x655A0C59L, 0x8CDCBBE9L, 0x0318C270L, 0x8CDCBBE9L}, {1L, (-6L), 0x9846489CL, 0x655A0C59L, 0x8CDCBBE9L, 0x0318C270L, 0x8CDCBBE9L}, {1L, (-6L), 0x9846489CL, 0x655A0C59L, 0x8CDCBBE9L, 0x0318C270L, 0x8CDCBBE9L}}, {{1L, (-6L), 0x9846489CL, 0x655A0C59L, 0x8CDCBBE9L, 0x0318C270L, 0x8CDCBBE9L}, {1L, (-6L), 0x9846489CL, 0x655A0C59L, 0x8CDCBBE9L, 0x0318C270L, 0x8CDCBBE9L}, {1L, (-6L), 0x9846489CL, 0x655A0C59L, 0x8CDCBBE9L, 0x0318C270L, 0x8CDCBBE9L}, {1L, (-6L), 0x9846489CL, 0x655A0C59L, 0x8CDCBBE9L, 0x0318C270L, 0x8CDCBBE9L}}};
static int * const g_779 = &g_780[4][3][0];
static int * const *g_778 = &g_779;
static int * const **g_777[9][1] = {{&g_778}, {&g_778}, {&g_778}, {&g_778}, {&g_778}, {&g_778}, {&g_778}, {&g_778}, {&g_778}};
static const unsigned *g_790[5][5][7] = {{{&g_422, &g_422, &g_422, (void*)0, &g_422, &g_422, (void*)0}, {&g_422, &g_422, &g_422, (void*)0, &g_422, &g_422, (void*)0}, {&g_422, &g_422, &g_422, (void*)0, &g_422, &g_422, (void*)0}, {&g_422, &g_422, &g_422, (void*)0, &g_422, &g_422, (void*)0}, {&g_422, &g_422, &g_422, (void*)0, &g_422, &g_422, (void*)0}}, {{&g_422, &g_422, &g_422, (void*)0, &g_422, &g_422, (void*)0}, {&g_422, &g_422, &g_422, (void*)0, &g_422, &g_422, (void*)0}, {&g_422, &g_422, &g_422, (void*)0, &g_422, &g_422, (void*)0}, {&g_422, &g_422, &g_422, (void*)0, &g_422, &g_422, (void*)0}, {&g_422, &g_422, &g_422, (void*)0, &g_422, &g_422, (void*)0}}, {{&g_422, &g_422, &g_422, (void*)0, &g_422, &g_422, (void*)0}, {&g_422, &g_422, &g_422, (void*)0, &g_422, &g_422, (void*)0}, {&g_422, &g_422, &g_422, (void*)0, &g_422, &g_422, (void*)0}, {&g_422, &g_422, &g_422, (void*)0, &g_422, &g_422, (void*)0}, {&g_422, &g_422, &g_422, (void*)0, &g_422, &g_422, (void*)0}}, {{&g_422, &g_422, &g_422, (void*)0, &g_422, &g_422, (void*)0}, {&g_422, &g_422, &g_422, (void*)0, &g_422, &g_422, (void*)0}, {&g_422, &g_422, &g_422, (void*)0, &g_422, &g_422, (void*)0}, {&g_422, &g_422, &g_422, (void*)0, &g_422, &g_422, (void*)0}, {&g_422, &g_422, &g_422, (void*)0, &g_422, &g_422, (void*)0}}, {{&g_422, &g_422, &g_422, (void*)0, &g_422, &g_422, (void*)0}, {&g_422, &g_422, &g_422, (void*)0, &g_422, &g_422, (void*)0}, {&g_422, &g_422, &g_422, (void*)0, &g_422, &g_422, (void*)0}, {&g_422, &g_422, &g_422, (void*)0, &g_422, &g_422, (void*)0}, {&g_422, &g_422, &g_422, (void*)0, &g_422, &g_422, (void*)0}}};
static const unsigned **g_789 = &g_790[0][3][6];
static char g_809 = 0xC6L;
static unsigned short g_887 = 0xEE9AL;
static char *g_894 = &g_809;
static char *g_895 = &g_38;
static unsigned short *g_907 = &g_265[8];
static unsigned short **g_906 = &g_907;
static const unsigned short g_910[2] = {1UL, 1UL};
static const unsigned short *g_909 = &g_910[1];
static const unsigned short **g_908 = &g_909;
static int g_975[4][7][9] = {{{(-9L), 0L, 0xE4DC03BDL, 0xCB10AAEDL, 0x546B6B9EL, (-1L), 0xFF8F355EL, (-4L), 0x70C55F7EL}, {(-9L), 0L, 0xE4DC03BDL, 0xCB10AAEDL, 0x546B6B9EL, (-1L), 0xFF8F355EL, (-4L), 0x70C55F7EL}, {(-9L), 0L, 0xE4DC03BDL, 0xCB10AAEDL, 0x546B6B9EL, (-1L), 0xFF8F355EL, (-4L), 0x70C55F7EL}, {(-9L), 0L, 0xE4DC03BDL, 0xCB10AAEDL, 0x546B6B9EL, (-1L), 0xFF8F355EL, (-4L), 0x70C55F7EL}, {(-9L), 0L, 0xE4DC03BDL, 0xCB10AAEDL, 0x546B6B9EL, (-1L), 0xFF8F355EL, (-4L), 0x70C55F7EL}, {(-9L), 0L, 0xE4DC03BDL, 0xCB10AAEDL, 0x546B6B9EL, (-1L), 0xFF8F355EL, (-4L), 0x70C55F7EL}, {(-9L), 0L, 0xE4DC03BDL, 0xCB10AAEDL, 0x546B6B9EL, (-1L), 0xFF8F355EL, (-4L), 0x70C55F7EL}}, {{(-9L), 0L, 0xE4DC03BDL, 0xCB10AAEDL, 0x546B6B9EL, (-1L), 0xFF8F355EL, (-4L), 0x70C55F7EL}, {(-9L), 0L, 0xE4DC03BDL, 0xCB10AAEDL, 0x546B6B9EL, (-1L), 0xFF8F355EL, (-4L), 0x70C55F7EL}, {(-9L), 0L, 0xE4DC03BDL, 0xCB10AAEDL, 0x546B6B9EL, (-1L), 0xFF8F355EL, (-4L), 0x70C55F7EL}, {(-9L), 0L, 0xE4DC03BDL, 0xCB10AAEDL, 0x546B6B9EL, (-1L), 0xFF8F355EL, (-4L), 0x70C55F7EL}, {(-9L), 0L, 0xE4DC03BDL, 0xCB10AAEDL, 0x546B6B9EL, (-1L), 0xFF8F355EL, (-4L), 0x70C55F7EL}, {(-9L), 0L, 0xE4DC03BDL, 0xCB10AAEDL, 0x546B6B9EL, (-1L), 0xFF8F355EL, (-4L), 0x70C55F7EL}, {(-9L), 0L, 0xE4DC03BDL, 0xCB10AAEDL, 0x546B6B9EL, (-1L), 0xFF8F355EL, (-4L), 0x70C55F7EL}}, {{(-9L), 0L, 0xE4DC03BDL, 0xCB10AAEDL, 0x546B6B9EL, (-1L), 0xFF8F355EL, (-4L), 0x70C55F7EL}, {(-9L), 0L, 0xE4DC03BDL, 0xCB10AAEDL, 0x546B6B9EL, (-1L), 0xFF8F355EL, (-4L), 0x70C55F7EL}, {(-9L), 0L, 0xE4DC03BDL, 0xCB10AAEDL, 0x546B6B9EL, (-1L), 0xFF8F355EL, (-4L), 0x70C55F7EL}, {(-9L), 0L, 0xE4DC03BDL, 0xCB10AAEDL, 0x546B6B9EL, (-1L), 0xFF8F355EL, (-4L), 0x70C55F7EL}, {(-9L), 0L, 0xE4DC03BDL, 0xCB10AAEDL, 0x546B6B9EL, (-1L), 0xFF8F355EL, (-4L), 0x70C55F7EL}, {(-9L), 0L, 0xE4DC03BDL, 0xCB10AAEDL, 0x546B6B9EL, (-1L), 0xFF8F355EL, (-4L), 0x70C55F7EL}, {(-9L), 0L, 0xE4DC03BDL, 0xCB10AAEDL, 0x546B6B9EL, (-1L), 0xFF8F355EL, (-4L), 0x70C55F7EL}}, {{(-9L), 0L, 0xE4DC03BDL, 0xCB10AAEDL, 0x546B6B9EL, (-1L), 0xFF8F355EL, (-4L), 0x70C55F7EL}, {(-9L), 0L, 0xE4DC03BDL, 0xCB10AAEDL, 0x546B6B9EL, (-1L), 0xFF8F355EL, (-4L), 0x70C55F7EL}, {(-9L), 0L, 0xE4DC03BDL, 0xCB10AAEDL, 0x546B6B9EL, (-1L), 0xFF8F355EL, (-4L), 0x70C55F7EL}, {(-9L), 0L, 0xE4DC03BDL, 0xCB10AAEDL, 0x546B6B9EL, (-1L), 0xFF8F355EL, (-4L), 0x70C55F7EL}, {(-9L), 0L, 0xE4DC03BDL, 0xCB10AAEDL, 0x546B6B9EL, (-1L), 0xFF8F355EL, (-4L), 0x70C55F7EL}, {(-9L), 0L, 0xE4DC03BDL, 0xCB10AAEDL, 0x546B6B9EL, (-1L), 0xFF8F355EL, (-4L), 0x70C55F7EL}, {(-9L), 0L, 0xE4DC03BDL, 0xCB10AAEDL, 0x546B6B9EL, (-1L), 0xFF8F355EL, (-4L), 0x70C55F7EL}}};
static const volatile unsigned short g_1030 = 2UL;
static int ***g_1073 = (void*)0;
static int ****g_1072[4] = {&g_1073, (void*)0, &g_1073, (void*)0};



static int func_1(void);
static char func_2(const unsigned p_3, int p_4);
static unsigned func_5(unsigned char p_6, unsigned p_7, unsigned p_8, int p_9, unsigned char p_10);
static unsigned char func_14(int p_15, int p_16);
static int ** func_32(unsigned char p_33, int p_34, const int p_35);
static int ** func_50(int * p_51, unsigned short p_52, unsigned p_53, short p_54);
static unsigned short func_58(unsigned char p_59, unsigned p_60, unsigned char ** p_61);
static unsigned char ** func_67(short p_68, int p_69, unsigned short p_70, const int p_71, unsigned char ** p_72);
static short func_82(unsigned char p_83, int p_84, int p_85, unsigned * p_86);
static short func_92(unsigned p_93, char p_94, short p_95, unsigned char p_96);
static int func_1(void)
{
    unsigned char *l_11[10][1][1] = {{{&g_12}}, {{&g_12}}, {{&g_12}}, {{&g_12}}, {{&g_12}}, {{&g_12}}, {{&g_12}}, {{&g_12}}, {{&g_12}}, {{&g_12}}};
    int l_13[6];
    unsigned char *l_17 = &g_12;
    int *l_764 = (void*)0;
    int *l_765 = (void*)0;
    int *l_766[1][2];
    int * const l_775 = (void*)0;
    int * const *l_774 = &l_775;
    int * const **l_773[10][4][6] = {{{(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}}, {{(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}}, {{(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}}, {{(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}}, {{(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}}, {{(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}}, {{(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}}, {{(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}}, {{(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}}, {{(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}, {(void*)0, &l_774, &l_774, &l_774, &l_774, &l_774}}};
    int *l_823 = &g_309;
    short *l_876 = &g_80[0];
    short ** const * const l_877 = &g_247;
    short ***l_878[7][4] = {{(void*)0, &g_247, (void*)0, &g_247}, {(void*)0, &g_247, (void*)0, &g_247}, {(void*)0, &g_247, (void*)0, &g_247}, {(void*)0, &g_247, (void*)0, &g_247}, {(void*)0, &g_247, (void*)0, &g_247}, {(void*)0, &g_247, (void*)0, &g_247}, {(void*)0, &g_247, (void*)0, &g_247}};
    short l_976 = 0x580BL;
    unsigned char l_1000 = 0xC0L;
    int l_1003 = 0x910F264CL;
    short *** const *l_1033[2][8][2] = {{{&l_878[1][0], (void*)0}, {&l_878[1][0], (void*)0}, {&l_878[1][0], (void*)0}, {&l_878[1][0], (void*)0}, {&l_878[1][0], (void*)0}, {&l_878[1][0], (void*)0}, {&l_878[1][0], (void*)0}, {&l_878[1][0], (void*)0}}, {{&l_878[1][0], (void*)0}, {&l_878[1][0], (void*)0}, {&l_878[1][0], (void*)0}, {&l_878[1][0], (void*)0}, {&l_878[1][0], (void*)0}, {&l_878[1][0], (void*)0}, {&l_878[1][0], (void*)0}, {&l_878[1][0], (void*)0}}};
    unsigned l_1036 = 0UL;
    unsigned l_1061[7];
    unsigned short ***l_1078[7][5] = {{&g_906, &g_906, (void*)0, (void*)0, &g_906}, {&g_906, &g_906, (void*)0, (void*)0, &g_906}, {&g_906, &g_906, (void*)0, (void*)0, &g_906}, {&g_906, &g_906, (void*)0, (void*)0, &g_906}, {&g_906, &g_906, (void*)0, (void*)0, &g_906}, {&g_906, &g_906, (void*)0, (void*)0, &g_906}, {&g_906, &g_906, (void*)0, (void*)0, &g_906}};
    int *l_1080 = &g_193;
    int l_1121 = 0x9C309331L;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_13[i] = (-10L);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_766[i][j] = (void*)0;
    }
    for (i = 0; i < 7; i++)
        l_1061[i] = 0x4375B7AFL;
lbl_828:
    g_309 ^= (func_2(func_5((l_13[1] = (1UL & (-5L))), g_12, (func_14(g_12, (g_12 <= ((l_11[2][0][0] = l_11[2][0][0]) == l_17))) || (0x7520L ^ 5L)), g_12, (*g_47)), g_200) || 0x88L);
    for (g_540 = 0; (g_540 <= 3); g_540 = safe_add_func_uint32_t_u_u(g_540, 6))
    {
        short l_791 = 0xAAB1L;
        const int l_810 = (-1L);
        int *l_815 = &g_26;
        unsigned l_830 = 1UL;
        const unsigned short l_834 = 0UL;
        unsigned *l_847 = &g_100;
        unsigned **l_846 = &l_847;
        unsigned ***l_845 = &l_846;
        unsigned ***l_848[8] = {&l_846, &l_846, &l_846, &l_846, &l_846, &l_846, &l_846, &l_846};
        int l_916 = 1L;
        short l_926 = 0x402CL;
        int **l_932 = &l_815;
        int i;
        if ((2L != g_265[7]))
        {
            unsigned l_792[3][9][8] = {{{0x80261C91L, 4294967289UL, 1UL, 0xB3900934L, 0x1BCE9DA6L, 3UL, 4294967289UL, 4294967295UL}, {0x80261C91L, 4294967289UL, 1UL, 0xB3900934L, 0x1BCE9DA6L, 3UL, 4294967289UL, 4294967295UL}, {0x80261C91L, 4294967289UL, 1UL, 0xB3900934L, 0x1BCE9DA6L, 3UL, 4294967289UL, 4294967295UL}, {0x80261C91L, 4294967289UL, 1UL, 0xB3900934L, 0x1BCE9DA6L, 3UL, 4294967289UL, 4294967295UL}, {0x80261C91L, 4294967289UL, 1UL, 0xB3900934L, 0x1BCE9DA6L, 3UL, 4294967289UL, 4294967295UL}, {0x80261C91L, 4294967289UL, 1UL, 0xB3900934L, 0x1BCE9DA6L, 3UL, 4294967289UL, 4294967295UL}, {0x80261C91L, 4294967289UL, 1UL, 0xB3900934L, 0x1BCE9DA6L, 3UL, 4294967289UL, 4294967295UL}, {0x80261C91L, 4294967289UL, 1UL, 0xB3900934L, 0x1BCE9DA6L, 3UL, 4294967289UL, 4294967295UL}, {0x80261C91L, 4294967289UL, 1UL, 0xB3900934L, 0x1BCE9DA6L, 3UL, 4294967289UL, 4294967295UL}}, {{0x80261C91L, 4294967289UL, 1UL, 0xB3900934L, 0x1BCE9DA6L, 3UL, 4294967289UL, 4294967295UL}, {0x80261C91L, 4294967289UL, 1UL, 0xB3900934L, 0x1BCE9DA6L, 3UL, 4294967289UL, 4294967295UL}, {0x80261C91L, 4294967289UL, 1UL, 0xB3900934L, 0x1BCE9DA6L, 3UL, 4294967289UL, 4294967295UL}, {0x80261C91L, 4294967289UL, 1UL, 0xB3900934L, 0x1BCE9DA6L, 3UL, 4294967289UL, 4294967295UL}, {0x80261C91L, 4294967289UL, 1UL, 0xB3900934L, 0x1BCE9DA6L, 3UL, 4294967289UL, 4294967295UL}, {0x80261C91L, 4294967289UL, 1UL, 0xB3900934L, 0x1BCE9DA6L, 3UL, 4294967289UL, 4294967295UL}, {0x80261C91L, 4294967289UL, 1UL, 0xB3900934L, 0x1BCE9DA6L, 3UL, 4294967289UL, 4294967295UL}, {0x80261C91L, 4294967289UL, 1UL, 0xB3900934L, 0x1BCE9DA6L, 3UL, 4294967289UL, 4294967295UL}, {0x80261C91L, 4294967289UL, 1UL, 0xB3900934L, 0x1BCE9DA6L, 3UL, 4294967289UL, 4294967295UL}}, {{0x80261C91L, 4294967289UL, 1UL, 0xB3900934L, 0x1BCE9DA6L, 3UL, 4294967289UL, 4294967295UL}, {0x80261C91L, 4294967289UL, 1UL, 0xB3900934L, 0x1BCE9DA6L, 3UL, 4294967289UL, 4294967295UL}, {0x80261C91L, 4294967289UL, 1UL, 0xB3900934L, 0x1BCE9DA6L, 3UL, 4294967289UL, 4294967295UL}, {0x80261C91L, 4294967289UL, 1UL, 0xB3900934L, 0x1BCE9DA6L, 3UL, 4294967289UL, 4294967295UL}, {0x80261C91L, 4294967289UL, 1UL, 0xB3900934L, 0x1BCE9DA6L, 3UL, 4294967289UL, 4294967295UL}, {0x80261C91L, 4294967289UL, 1UL, 0xB3900934L, 0x1BCE9DA6L, 3UL, 4294967289UL, 4294967295UL}, {0x80261C91L, 4294967289UL, 1UL, 0xB3900934L, 0x1BCE9DA6L, 3UL, 4294967289UL, 4294967295UL}, {0x80261C91L, 4294967289UL, 1UL, 0xB3900934L, 0x1BCE9DA6L, 3UL, 4294967289UL, 4294967295UL}, {0x80261C91L, 4294967289UL, 1UL, 0xB3900934L, 0x1BCE9DA6L, 3UL, 4294967289UL, 4294967295UL}}};
            char l_811 = (-1L);
            int i, j, k;
            (*g_42) = (*g_42);
            for (g_697 = 0; (g_697 <= 6); g_697 += 1)
            {
                unsigned *l_785 = &g_66[1];
                unsigned **l_784 = &l_785;
                int l_813 = (-1L);
                unsigned char l_814 = 0UL;
                int i;
            }
            for (g_38 = 12; (g_38 >= (-5)); g_38--)
            {
                int **l_821 = (void*)0;
                int **l_822 = &l_764;
                const unsigned short l_826 = 0x809EL;
                l_823 = ((*l_822) = &l_13[5]);
                if ((safe_lshift_func_uint8_t_u_u((*l_815), 4)))
                {
                    int *l_827[5][3] = {{&l_13[0], &l_13[0], &l_13[0]}, {&l_13[0], &l_13[0], &l_13[0]}, {&l_13[0], &l_13[0], &l_13[0]}, {&l_13[0], &l_13[0], &l_13[0]}, {&l_13[0], &l_13[0], &l_13[0]}};
                    int i, j;
                    if (((*g_42) < l_826))
                    {
                        (*l_822) = l_827[0][1];
                    }
                    else
                    {
                        unsigned *l_829 = &l_792[2][0][1];
                        if (g_12)
                            goto lbl_828;
                        (**l_822) &= ((*g_42) < ((*l_829) &= 0xEF271FB4L));
                    }
                    (*l_822) = l_815;
                    if (l_792[2][5][1])
                    {
                        if ((*g_42))
                            break;
                    }
                    else
                    {
                        l_827[4][0] = l_827[2][1];
                        if (l_792[2][0][1])
                            break;
                        (*l_822) = l_827[2][0];
                    }
                }
                else
                {
                    (*l_815) = ((*g_789) != &l_792[2][3][2]);
                }
            }
        }
        else
        {
            short l_831 = 1L;
            int *l_851 = &g_193;
            unsigned char **l_860 = &g_47;
            int l_861[4][7] = {{(-1L), 0x37EDAC7BL, 1L, 0x37EDAC7BL, (-1L), (-10L), (-1L)}, {(-1L), 0x37EDAC7BL, 1L, 0x37EDAC7BL, (-1L), (-10L), (-1L)}, {(-1L), 0x37EDAC7BL, 1L, 0x37EDAC7BL, (-1L), (-10L), (-1L)}, {(-1L), 0x37EDAC7BL, 1L, 0x37EDAC7BL, (-1L), (-10L), (-1L)}};
            int i, j;
            (*l_815) = l_830;
            if (l_831)
            {
                unsigned char l_837 = 0xB8L;
                unsigned short *l_838 = &g_697;
                char *l_859[9][8][3] = {{{&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}}, {{&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}}, {{&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}}, {{&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}}, {{&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}}, {{&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}}, {{&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}}, {{&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}}, {{&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}, {&g_103, &g_809, &g_156}}};
                int i, j, k;
                if (((safe_sub_func_int8_t_s_s((((*l_815) < (*g_42)) >= (l_834 < (safe_sub_func_int16_t_s_s(0x9DB7L, (**g_474))))), (((*l_838) |= l_837) & ((((safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u(func_2((safe_rshift_func_uint8_t_u_s(5UL, 1)), (func_2((((l_848[2] = l_845) == (void*)0) | 1L), (*g_42)) || 0xC7F7L)), (*l_815))), (*g_47))) ^ l_831) > l_837) != l_831)))) >= (*g_47)))
                {
                    unsigned char l_849 = 0xFEL;
                    (*l_815) |= l_849;
                }
                else
                {
                    int *l_850 = &g_193;
                    int l_856 = 0xFC5D4D8FL;
                    for (g_697 = 1; (g_697 <= 7); g_697 += 1)
                    {
                        l_851 = l_850;
                        (*l_851) = func_82((*l_851), (*l_850), (*g_779), l_850);
                    }
                    for (g_193 = (-3); (g_193 == (-26)); g_193--)
                    {
                        int **l_854 = (void*)0;
                        int **l_855[2][5][4] = {{{&l_766[0][1], &l_766[0][0], &l_766[0][1], &l_766[0][0]}, {&l_766[0][1], &l_766[0][0], &l_766[0][1], &l_766[0][0]}, {&l_766[0][1], &l_766[0][0], &l_766[0][1], &l_766[0][0]}, {&l_766[0][1], &l_766[0][0], &l_766[0][1], &l_766[0][0]}, {&l_766[0][1], &l_766[0][0], &l_766[0][1], &l_766[0][0]}}, {{&l_766[0][1], &l_766[0][0], &l_766[0][1], &l_766[0][0]}, {&l_766[0][1], &l_766[0][0], &l_766[0][1], &l_766[0][0]}, {&l_766[0][1], &l_766[0][0], &l_766[0][1], &l_766[0][0]}, {&l_766[0][1], &l_766[0][0], &l_766[0][1], &l_766[0][0]}, {&l_766[0][1], &l_766[0][0], &l_766[0][1], &l_766[0][0]}}};
                        int i, j, k;
                        (*l_815) = (-7L);
                        l_850 = l_851;
                        if (l_856)
                            continue;
                        l_861[2][1] ^= ((0x6EA1L & (*l_851)) && ((safe_add_func_uint32_t_u_u((!(*l_823)), (((l_859[1][3][0] != l_11[9][0][0]) <= (5UL >= 0UL)) != ((((*l_847) |= (l_837 >= l_837)) ^ l_837) & (*l_815))))) | (*l_851)));
                    }
                }
            }
            else
            {
                short l_866 = 0x61A4L;
                short l_885 = (-6L);
                int l_917 = 1L;
                for (l_831 = 29; (l_831 != 21); l_831 = safe_sub_func_uint16_t_u_u(l_831, 5))
                {
                    (*l_815) |= 1L;
                    for (g_613 = (-21); (g_613 <= 9); g_613 = safe_add_func_int32_t_s_s(g_613, 5))
                    {
                        if ((*l_851))
                            break;
                    }
                    for (g_156 = 0; (g_156 >= 0); g_156 -= 1)
                    {
                        int i, j;
                        l_766[g_156][(g_156 + 1)] = l_766[g_156][(g_156 + 1)];
                    }
                    return (*l_851);
                }
                if (l_866)
                    break;
                (*g_42) |= 0x5B2FF77CL;
                for (g_193 = 0; (g_193 < 17); g_193 = safe_add_func_int8_t_s_s(g_193, 1))
                {
                    unsigned char l_871[1];
                    short ****l_879 = &l_878[0][3];
                    unsigned short *l_880 = &g_265[1];
                    unsigned short *l_881 = (void*)0;
                    unsigned short *l_882 = (void*)0;
                    unsigned short *l_883 = (void*)0;
                    unsigned short *l_884 = &g_697;
                    unsigned short *l_886 = &g_887;
                    short l_927 = 0xA5E4L;
                    int *l_931 = (void*)0;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_871[i] = 254UL;
                    (*l_815) = 0x77F58B41L;
                    if ((safe_lshift_func_int16_t_s_s(((((*l_815) = l_871[0]) >= (5L >= (0x1AL & ((*l_17) = (*l_851))))) != (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((((*l_886) = (((((&l_791 != l_876) && (l_877 != ((*l_879) = l_878[5][3]))) <= ((*l_884) = ((*l_880) = (**g_474)))) || 0x3AL) <= l_885)) & 0xD908L), l_885)), g_80[4]))), (*l_823))))
                    {
                        unsigned short **l_905 = &l_883;
                        unsigned short ***l_904 = &l_905;
                        const unsigned short **l_912 = &g_909;
                        const unsigned short ***l_911 = &l_912;
                        const unsigned short **l_914 = &g_909;
                        const unsigned short ***l_913 = &l_914;
                        const int l_915[9][3][9] = {{{0x0382342DL, 0x11B507D6L, 5L, 0xBA9800B1L, 0x44752E51L, 0x06A07F8BL, 0L, 0x30FC933BL, 0xD597791DL}, {0x0382342DL, 0x11B507D6L, 5L, 0xBA9800B1L, 0x44752E51L, 0x06A07F8BL, 0L, 0x30FC933BL, 0xD597791DL}, {0x0382342DL, 0x11B507D6L, 5L, 0xBA9800B1L, 0x44752E51L, 0x06A07F8BL, 0L, 0x30FC933BL, 0xD597791DL}}, {{0x0382342DL, 0x11B507D6L, 5L, 0xBA9800B1L, 0x44752E51L, 0x06A07F8BL, 0L, 0x30FC933BL, 0xD597791DL}, {0x0382342DL, 0x11B507D6L, 5L, 0xBA9800B1L, 0x44752E51L, 0x06A07F8BL, 0L, 0x30FC933BL, 0xD597791DL}, {0x0382342DL, 0x11B507D6L, 5L, 0xBA9800B1L, 0x44752E51L, 0x06A07F8BL, 0L, 0x30FC933BL, 0xD597791DL}}, {{0x0382342DL, 0x11B507D6L, 5L, 0xBA9800B1L, 0x44752E51L, 0x06A07F8BL, 0L, 0x30FC933BL, 0xD597791DL}, {0x0382342DL, 0x11B507D6L, 5L, 0xBA9800B1L, 0x44752E51L, 0x06A07F8BL, 0L, 0x30FC933BL, 0xD597791DL}, {0x0382342DL, 0x11B507D6L, 5L, 0xBA9800B1L, 0x44752E51L, 0x06A07F8BL, 0L, 0x30FC933BL, 0xD597791DL}}, {{0x0382342DL, 0x11B507D6L, 5L, 0xBA9800B1L, 0x44752E51L, 0x06A07F8BL, 0L, 0x30FC933BL, 0xD597791DL}, {0x0382342DL, 0x11B507D6L, 5L, 0xBA9800B1L, 0x44752E51L, 0x06A07F8BL, 0L, 0x30FC933BL, 0xD597791DL}, {0x0382342DL, 0x11B507D6L, 5L, 0xBA9800B1L, 0x44752E51L, 0x06A07F8BL, 0L, 0x30FC933BL, 0xD597791DL}}, {{0x0382342DL, 0x11B507D6L, 5L, 0xBA9800B1L, 0x44752E51L, 0x06A07F8BL, 0L, 0x30FC933BL, 0xD597791DL}, {0x0382342DL, 0x11B507D6L, 5L, 0xBA9800B1L, 0x44752E51L, 0x06A07F8BL, 0L, 0x30FC933BL, 0xD597791DL}, {0x0382342DL, 0x11B507D6L, 5L, 0xBA9800B1L, 0x44752E51L, 0x06A07F8BL, 0L, 0x30FC933BL, 0xD597791DL}}, {{0x0382342DL, 0x11B507D6L, 5L, 0xBA9800B1L, 0x44752E51L, 0x06A07F8BL, 0L, 0x30FC933BL, 0xD597791DL}, {0x0382342DL, 0x11B507D6L, 5L, 0xBA9800B1L, 0x44752E51L, 0x06A07F8BL, 0L, 0x30FC933BL, 0xD597791DL}, {0x0382342DL, 0x11B507D6L, 5L, 0xBA9800B1L, 0x44752E51L, 0x06A07F8BL, 0L, 0x30FC933BL, 0xD597791DL}}, {{0x0382342DL, 0x11B507D6L, 5L, 0xBA9800B1L, 0x44752E51L, 0x06A07F8BL, 0L, 0x30FC933BL, 0xD597791DL}, {0x0382342DL, 0x11B507D6L, 5L, 0xBA9800B1L, 0x44752E51L, 0x06A07F8BL, 0L, 0x30FC933BL, 0xD597791DL}, {0x0382342DL, 0x11B507D6L, 5L, 0xBA9800B1L, 0x44752E51L, 0x06A07F8BL, 0L, 0x30FC933BL, 0xD597791DL}}, {{0x0382342DL, 0x11B507D6L, 5L, 0xBA9800B1L, 0x44752E51L, 0x06A07F8BL, 0L, 0x30FC933BL, 0xD597791DL}, {0x0382342DL, 0x11B507D6L, 5L, 0xBA9800B1L, 0x44752E51L, 0x06A07F8BL, 0L, 0x30FC933BL, 0xD597791DL}, {0x0382342DL, 0x11B507D6L, 5L, 0xBA9800B1L, 0x44752E51L, 0x06A07F8BL, 0L, 0x30FC933BL, 0xD597791DL}}, {{0x0382342DL, 0x11B507D6L, 5L, 0xBA9800B1L, 0x44752E51L, 0x06A07F8BL, 0L, 0x30FC933BL, 0xD597791DL}, {0x0382342DL, 0x11B507D6L, 5L, 0xBA9800B1L, 0x44752E51L, 0x06A07F8BL, 0L, 0x30FC933BL, 0xD597791DL}, {0x0382342DL, 0x11B507D6L, 5L, 0xBA9800B1L, 0x44752E51L, 0x06A07F8BL, 0L, 0x30FC933BL, 0xD597791DL}}};
                        int i, j, k;
                        if ((*l_815))
                            break;
                        l_917 ^= ((*g_475) | ((*l_815) | (safe_rshift_func_int16_t_s_s((((*l_886) = 0x8EE3L) > (safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((((g_894 = &g_156) != g_895) > (0x999CL > (((safe_add_func_uint16_t_u_u(65535UL, ((safe_add_func_int32_t_s_s(((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((((g_906 = ((*l_904) = (void*)0)) != ((*l_913) = ((*l_911) = (g_908 = (void*)0)))) == (*l_815)), 6)), 0L)) && 0xA6L), l_915[0][1][3])) ^ l_885))) || l_885) < l_866))), (*l_815))), l_916))), l_915[0][1][3]))));
                        (*l_823) = (*g_42);
                    }
                    else
                    {
                        int l_920[3];
                        int l_925 = 0x829F763DL;
                        unsigned char ***l_928 = &g_370;
                        int l_929 = (-4L);
                        int **l_930[10] = {&l_766[0][1], &l_765, &l_851, &l_851, &l_765, &l_766[0][1], &l_765, &l_851, &l_851, &l_765};
                        int i;
                        for (i = 0; i < 3; i++)
                            l_920[i] = (-9L);
                        l_929 |= ((safe_mod_func_int8_t_s_s(((l_920[2] >= (**g_474)) | (*l_815)), l_927)) > l_925);
                        l_931 = &l_920[2];
                        (*l_815) = 0xBC8D9783L;
                        l_931 = &l_917;
                    }
                }
            }
            return (*l_851);
        }
        (*l_932) = &l_916;
    }
    for (g_100 = 0; (g_100 <= 6); g_100 += 1)
    {
        int l_934 = 0x726E33B0L;
        int i;
        (*g_42) = g_80[g_100];
        for (g_227 = 0; (g_227 <= 6); g_227 += 1)
        {
            char l_942 = 0x5DL;
            const int *l_996 = &g_975[2][5][8];
            int i;
        }
    }
    if ((*g_42))
    {
        int **l_999 = &l_766[0][1];
        (*l_999) = &l_13[1];
        (*l_823) = l_1000;
        for (g_193 = 12; (g_193 > (-18)); g_193 = safe_sub_func_int8_t_s_s(g_193, 3))
        {
            const int *l_1004 = &l_13[3];
            if (l_1003)
                break;
            l_1004 = l_1004;
            if ((*l_1004))
                continue;
        }
    }
    else
    {
        unsigned char l_1011 = 252UL;
        short *l_1013 = &l_976;
        int l_1016 = (-1L);
        unsigned l_1019[1];
        int *l_1047 = &l_13[1];
        char *l_1060 = &g_809;
        short ***l_1084[5] = {&g_247, (void*)0, &g_247, (void*)0, &g_247};
        int l_1122 = 1L;
        int i;
        for (i = 0; i < 1; i++)
            l_1019[i] = 0xAD111D47L;
        for (g_887 = 0; (g_887 <= 3); g_887 += 1)
        {
            unsigned short l_1007[6];
            int l_1010 = (-8L);
            short *l_1012 = &l_976;
            unsigned l_1024 = 2UL;
            int i;
            for (i = 0; i < 6; i++)
                l_1007[i] = 0x7B9DL;
            l_1016 ^= ((safe_rshift_func_uint8_t_u_u(l_1007[4], ((((safe_sub_func_int8_t_s_s(((l_1010 ^= 0x5736L) && ((*l_876) |= l_1011)), (func_58(((l_1012 != (l_1013 = (void*)0)) <= (l_1007[4] || (safe_rshift_func_uint16_t_u_s(65535UL, (((*g_42) |= l_1011) > l_1007[4]))))), l_1011, &g_47) & l_1007[1]))) <= 0x6C86D860L) < l_1011) == l_1007[4]))) || 65532UL);
            l_1016 |= func_14((!(safe_sub_func_int8_t_s_s((((**g_906) |= ((*l_823) >= (*g_894))) <= l_1019[0]), (safe_lshift_func_int8_t_s_u(((((*l_823) || l_1010) & l_1007[3]) ^ (*g_47)), (*g_47)))))), (*g_568));
            for (g_309 = 0; (g_309 <= 3); g_309 += 1)
            {
                const unsigned l_1028 = 0xF32E5BDBL;
                int l_1029 = 1L;
                for (l_1010 = 1; (l_1010 >= 0); l_1010 -= 1)
                {
                    int l_1025 = (-5L);
                    l_766[0][1] = &l_1016;
                    (*g_42) = ((safe_mod_func_uint16_t_u_u(((l_1024 |= (*g_42)) >= (l_1025 ^ ((safe_rshift_func_int8_t_s_s(((-1L) || func_2((*l_823), (*g_42))), 3)) ^ (((*g_907) = func_2(l_1028, (l_1029 == l_1007[4]))) == g_1030)))), l_1025)) ^ (*g_909));
                    if ((*g_42))
                        break;
                }
                (*g_42) = (safe_rshift_func_uint16_t_u_s((l_1033[0][6][1] != &l_877), (**g_177)));
                for (l_1024 = 0; (l_1024 <= 3); l_1024 += 1)
                {
                    unsigned *l_1041 = (void*)0;
                    unsigned *l_1042[10] = {&g_533, &g_533, &g_200, &g_200, &g_533, &g_533, &g_533, &g_200, &g_200, &g_533};
                    unsigned *l_1044 = &g_66[1];
                    int l_1045[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1045[i] = 0x0A7DA469L;
                }
            }
        }
        for (g_103 = 4; (g_103 >= 0); g_103 -= 1)
        {
            unsigned l_1052[5][3][6] = {{{1UL, 0xDB86CCB8L, 0xAA58AF59L, 0xDB86CCB8L, 1UL, 4294967286UL}, {1UL, 0xDB86CCB8L, 0xAA58AF59L, 0xDB86CCB8L, 1UL, 4294967286UL}, {1UL, 0xDB86CCB8L, 0xAA58AF59L, 0xDB86CCB8L, 1UL, 4294967286UL}}, {{1UL, 0xDB86CCB8L, 0xAA58AF59L, 0xDB86CCB8L, 1UL, 4294967286UL}, {1UL, 0xDB86CCB8L, 0xAA58AF59L, 0xDB86CCB8L, 1UL, 4294967286UL}, {1UL, 0xDB86CCB8L, 0xAA58AF59L, 0xDB86CCB8L, 1UL, 4294967286UL}}, {{1UL, 0xDB86CCB8L, 0xAA58AF59L, 0xDB86CCB8L, 1UL, 4294967286UL}, {1UL, 0xDB86CCB8L, 0xAA58AF59L, 0xDB86CCB8L, 1UL, 4294967286UL}, {1UL, 0xDB86CCB8L, 0xAA58AF59L, 0xDB86CCB8L, 1UL, 4294967286UL}}, {{1UL, 0xDB86CCB8L, 0xAA58AF59L, 0xDB86CCB8L, 1UL, 4294967286UL}, {1UL, 0xDB86CCB8L, 0xAA58AF59L, 0xDB86CCB8L, 1UL, 4294967286UL}, {1UL, 0xDB86CCB8L, 0xAA58AF59L, 0xDB86CCB8L, 1UL, 4294967286UL}}, {{1UL, 0xDB86CCB8L, 0xAA58AF59L, 0xDB86CCB8L, 1UL, 4294967286UL}, {1UL, 0xDB86CCB8L, 0xAA58AF59L, 0xDB86CCB8L, 1UL, 4294967286UL}, {1UL, 0xDB86CCB8L, 0xAA58AF59L, 0xDB86CCB8L, 1UL, 4294967286UL}}};
            short ** const *l_1057[8][10][3] = {{{&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}}, {{&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}}, {{&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}}, {{&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}}, {{&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}}, {{&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}}, {{&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}}, {{&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}, {&g_247, &g_247, &g_247}}};
            short ** const **l_1056 = &l_1057[1][4][0];
            short ** const ***l_1055 = &l_1056;
            unsigned short *l_1062[1][5][8] = {{{&g_697, &g_887, &g_887, (void*)0, (void*)0, &g_887, &g_887, &g_697}, {&g_697, &g_887, &g_887, (void*)0, (void*)0, &g_887, &g_887, &g_697}, {&g_697, &g_887, &g_887, (void*)0, (void*)0, &g_887, &g_887, &g_697}, {&g_697, &g_887, &g_887, (void*)0, (void*)0, &g_887, &g_887, &g_697}, {&g_697, &g_887, &g_887, (void*)0, (void*)0, &g_887, &g_887, &g_697}}};
            int l_1063 = 6L;
            int **l_1064 = &l_766[0][1];
            int **l_1065 = &l_765;
            int ****l_1070 = (void*)0;
            unsigned short ***l_1076 = &g_906;
            int i, j, k;
            (*g_42) = (func_14(l_1052[2][2][3], ((*g_779) ^= ((((safe_sub_func_int16_t_s_s(((*l_823) ^= (l_1055 == &g_245[4][1][3])), (safe_lshift_func_int16_t_s_u((((**g_906) = 65535UL) > l_1052[2][2][3]), (l_1063 = ((l_1060 != l_1060) < ((((5L < func_2(l_1052[0][0][2], l_1061[2])) <= l_1052[2][1][3]) | 0xEDAADADCL) > (*g_47)))))))) != 4294967295UL) >= (*g_178)) | l_1052[2][2][5]))) == l_1052[2][2][3]);
            (*l_1065) = ((*l_1064) = &l_1016);
            for (g_614 = 0; (g_614 <= 4); g_614 += 1)
            {
                int *****l_1071[7];
                int l_1074 = 0L;
                int l_1075 = 0xA9E3DCE5L;
                unsigned short ****l_1077 = (void*)0;
                unsigned short l_1079[6] = {0xD753L, 0xD753L, 0UL, 0xD753L, 0xD753L, 0UL};
                short ***l_1105[7] = {&g_247, &g_247, &g_247, &g_247, &g_247, &g_247, &g_247};
                int l_1106 = 0xCA35B131L;
                unsigned l_1120 = 2UL;
                unsigned l_1135 = 1UL;
                int i, j;
                for (i = 0; i < 7; i++)
                    l_1071[i] = &l_1070;
            }
        }
    }
    return (*g_568);
}







static char func_2(const unsigned p_3, int p_4)
{
    unsigned l_759 = 1UL;
    int *l_761 = &g_309;
    int **l_762[10][4] = {{&l_761, &l_761, &g_42, &l_761}, {&l_761, &l_761, &g_42, &l_761}, {&l_761, &l_761, &g_42, &l_761}, {&l_761, &l_761, &g_42, &l_761}, {&l_761, &l_761, &g_42, &l_761}, {&l_761, &l_761, &g_42, &l_761}, {&l_761, &l_761, &g_42, &l_761}, {&l_761, &l_761, &g_42, &l_761}, {&l_761, &l_761, &g_42, &l_761}, {&l_761, &l_761, &g_42, &l_761}};
    int *l_763 = &g_309;
    int i, j;
    if (l_759)
    {
        return l_759;
    }
    else
    {
        unsigned l_760 = 7UL;
        l_760 &= (*g_42);
    }
    l_763 = l_761;
    return p_4;
}







static unsigned func_5(unsigned char p_6, unsigned p_7, unsigned p_8, int p_9, unsigned char p_10)
{
    int *l_55 = &g_26;
    unsigned *l_64 = (void*)0;
    unsigned *l_65 = &g_66[0];
    short l_73[8][5] = {{2L, 5L, 0xE519L, 0L, 1L}, {2L, 5L, 0xE519L, 0L, 1L}, {2L, 5L, 0xE519L, 0L, 1L}, {2L, 5L, 0xE519L, 0L, 1L}, {2L, 5L, 0xE519L, 0L, 1L}, {2L, 5L, 0xE519L, 0L, 1L}, {2L, 5L, 0xE519L, 0L, 1L}, {2L, 5L, 0xE519L, 0L, 1L}};
    unsigned char **l_74 = &g_47;
    unsigned short *l_617 = &g_265[0];
    char l_618 = 0x39L;
    int ***l_630 = &g_41[2];
    int **l_631[4][5][8] = {{{&l_55, (void*)0, &l_55, (void*)0, &l_55, &g_42, &l_55, (void*)0}, {&l_55, (void*)0, &l_55, (void*)0, &l_55, &g_42, &l_55, (void*)0}, {&l_55, (void*)0, &l_55, (void*)0, &l_55, &g_42, &l_55, (void*)0}, {&l_55, (void*)0, &l_55, (void*)0, &l_55, &g_42, &l_55, (void*)0}, {&l_55, (void*)0, &l_55, (void*)0, &l_55, &g_42, &l_55, (void*)0}}, {{&l_55, (void*)0, &l_55, (void*)0, &l_55, &g_42, &l_55, (void*)0}, {&l_55, (void*)0, &l_55, (void*)0, &l_55, &g_42, &l_55, (void*)0}, {&l_55, (void*)0, &l_55, (void*)0, &l_55, &g_42, &l_55, (void*)0}, {&l_55, (void*)0, &l_55, (void*)0, &l_55, &g_42, &l_55, (void*)0}, {&l_55, (void*)0, &l_55, (void*)0, &l_55, &g_42, &l_55, (void*)0}}, {{&l_55, (void*)0, &l_55, (void*)0, &l_55, &g_42, &l_55, (void*)0}, {&l_55, (void*)0, &l_55, (void*)0, &l_55, &g_42, &l_55, (void*)0}, {&l_55, (void*)0, &l_55, (void*)0, &l_55, &g_42, &l_55, (void*)0}, {&l_55, (void*)0, &l_55, (void*)0, &l_55, &g_42, &l_55, (void*)0}, {&l_55, (void*)0, &l_55, (void*)0, &l_55, &g_42, &l_55, (void*)0}}, {{&l_55, (void*)0, &l_55, (void*)0, &l_55, &g_42, &l_55, (void*)0}, {&l_55, (void*)0, &l_55, (void*)0, &l_55, &g_42, &l_55, (void*)0}, {&l_55, (void*)0, &l_55, (void*)0, &l_55, &g_42, &l_55, (void*)0}, {&l_55, (void*)0, &l_55, (void*)0, &l_55, &g_42, &l_55, (void*)0}, {&l_55, (void*)0, &l_55, (void*)0, &l_55, &g_42, &l_55, (void*)0}}};
    int l_725[4][10] = {{0x96E67615L, 0x7EB1CF75L, 1L, 0xB0122A21L, 0xB0122A21L, 1L, 0x7EB1CF75L, 0x96E67615L, 1L, 0x96E67615L}, {0x96E67615L, 0x7EB1CF75L, 1L, 0xB0122A21L, 0xB0122A21L, 1L, 0x7EB1CF75L, 0x96E67615L, 1L, 0x96E67615L}, {0x96E67615L, 0x7EB1CF75L, 1L, 0xB0122A21L, 0xB0122A21L, 1L, 0x7EB1CF75L, 0x96E67615L, 1L, 0x96E67615L}, {0x96E67615L, 0x7EB1CF75L, 1L, 0xB0122A21L, 0xB0122A21L, 1L, 0x7EB1CF75L, 0x96E67615L, 1L, 0x96E67615L}};
    int i, j, k;
    if ((((*l_630) = func_50(l_55, ((*l_617) = (safe_rshift_func_uint16_t_u_u(0UL, func_58((*l_55), ((*l_65) = (0xA2955E31L <= (safe_sub_func_uint8_t_u_u(p_8, 0L)))), func_67(g_12, (*l_55), l_73[7][0], (*l_55), l_74))))), g_613, l_618)) == l_631[1][0][4]))
    {
        int l_638 = 0x6F004609L;
        int *l_649 = &g_193;
        char ***l_679 = &g_127;
        int l_695[7] = {(-1L), (-1L), 0x24E77596L, (-1L), (-1L), 0x24E77596L, (-1L)};
        unsigned char **l_699 = &g_47;
        unsigned short l_758 = 0x5D45L;
        int i;
    }
    else
    {
        return g_80[0];
    }
    return p_9;
}







static unsigned char func_14(int p_15, int p_16)
{
    unsigned l_18 = 1UL;
    int l_27 = (-1L);
    if (l_18)
    {
        short l_19 = 1L;
        unsigned char *l_22 = &g_23;
        unsigned char * const l_24 = &g_12;
        int *l_25[10][6][4] = {{{&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}}, {{&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}}, {{&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}}, {{&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}}, {{&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}}, {{&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}}, {{&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}}, {{&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}}, {{&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}}, {{&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}, {&g_26, &g_26, &g_26, &g_26}}};
        int **l_28 = &l_25[8][0][2];
        int i, j, k;
        l_27 = (l_19 | (((*l_22) |= g_12) & ((void*)0 == l_24)));
        (*l_28) = (void*)0;
    }
    else
    {
        unsigned l_31 = 0x034E1054L;
        unsigned char *l_43 = &g_23;
        unsigned char **l_44 = (void*)0;
        unsigned char **l_46 = &l_43;
        (*g_42) = (safe_rshift_func_int8_t_s_u(((l_31 < (((g_41[1] = func_32((safe_mod_func_uint16_t_u_u(g_38, 0x095EL)), l_18, l_18)) == (void*)0) || l_27)) != ((((*l_46) = (g_45[6] = l_43)) != g_47) | 0x07B3L)), l_31));
    }
    (*g_42) |= (safe_lshift_func_uint16_t_u_u(p_16, 7));
    return l_18;
}







static int ** func_32(unsigned char p_33, int p_34, const int p_35)
{
    int *l_40 = &g_26;
    int **l_39 = &l_40;
    return g_41[2];
}







static int ** func_50(int * p_51, unsigned short p_52, unsigned p_53, short p_54)
{
    const int *l_624 = &g_403;
    const int **l_623 = &l_624;
    int l_627[5][8][6] = {{{0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}}, {{0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}}, {{0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}}, {{0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}}, {{0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}, {0x10962CCAL, 9L, (-1L), 0x4F3379B8L, 0x4194118AL, 0xD268651FL}}};
    int *l_628 = &g_193;
    int **l_629[10] = {&l_628, &l_628, &l_628, &l_628, &l_628, &l_628, &l_628, &l_628, &l_628, &l_628};
    int i, j, k;
    for (g_12 = 0; g_12 < 10; g_12 += 1)
    {
        for (g_356 = 0; g_356 < 2; g_356 += 1)
        {
            for (g_23 = 0; g_23 < 4; g_23 += 1)
            {
                g_245[g_12][g_356][g_23] = &g_246;
            }
        }
    }
    (*l_628) = ((*g_42) = (safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u(((l_623 != &g_568) <= (0x74L != 255UL)), (-1L))), (safe_add_func_uint32_t_u_u((l_627[2][1][4] != ((*g_47) = ((l_627[2][1][4] == p_53) || p_54))), (*p_51))))));
    return &g_42;
}







static unsigned short func_58(unsigned char p_59, unsigned p_60, unsigned char ** p_61)
{
    int l_401 = (-1L);
    unsigned *l_404 = &g_200;
    short *l_465 = &g_80[3];
    int *l_489 = &l_401;
    unsigned char l_502 = 1UL;
    unsigned l_514 = 0x8D5744F1L;
    short l_563 = 0x64C1L;
    unsigned l_566 = 4294967295UL;
    unsigned char l_615 = 0x6BL;
    for (g_356 = 0; (g_356 >= 16); g_356 = safe_add_func_uint8_t_u_u(g_356, 5))
    {
        unsigned l_398 = 5UL;
        int *l_402 = &g_403;
        unsigned *l_405 = &g_200;
        unsigned *l_418[10][8] = {{&g_227, &g_66[0], &g_227, &g_227, &g_66[0], (void*)0, &g_66[0], &g_66[0]}, {&g_227, &g_66[0], &g_227, &g_227, &g_66[0], (void*)0, &g_66[0], &g_66[0]}, {&g_227, &g_66[0], &g_227, &g_227, &g_66[0], (void*)0, &g_66[0], &g_66[0]}, {&g_227, &g_66[0], &g_227, &g_227, &g_66[0], (void*)0, &g_66[0], &g_66[0]}, {&g_227, &g_66[0], &g_227, &g_227, &g_66[0], (void*)0, &g_66[0], &g_66[0]}, {&g_227, &g_66[0], &g_227, &g_227, &g_66[0], (void*)0, &g_66[0], &g_66[0]}, {&g_227, &g_66[0], &g_227, &g_227, &g_66[0], (void*)0, &g_66[0], &g_66[0]}, {&g_227, &g_66[0], &g_227, &g_227, &g_66[0], (void*)0, &g_66[0], &g_66[0]}, {&g_227, &g_66[0], &g_227, &g_227, &g_66[0], (void*)0, &g_66[0], &g_66[0]}, {&g_227, &g_66[0], &g_227, &g_227, &g_66[0], (void*)0, &g_66[0], &g_66[0]}};
        unsigned **l_417 = &l_418[6][7];
        int l_430 = 0x1165BBE6L;
        unsigned short *l_477 = &g_265[6];
        unsigned short ** const l_476 = &l_477;
        int l_523 = (-1L);
        int l_524[10] = {(-6L), (-6L), 0x3AF96384L, (-6L), (-6L), 0x3AF96384L, (-6L), (-6L), 0x3AF96384L, (-6L)};
        unsigned l_534 = 0xB939A584L;
        int *l_570 = &l_524[0];
        int i, j;
        if (((safe_lshift_func_int16_t_s_s(((p_59 < (((*g_42) |= (((safe_rshift_func_uint16_t_u_s(l_398, (**g_177))) & p_59) || l_398)) | 4294967292UL)) <= l_398), l_398)) >= l_401))
        {
            (*g_42) = (p_60 <= 0xB7C51F61L);
        }
        else
        {
            unsigned l_406 = 18446744073709551615UL;
            unsigned short *l_412[1][9][7] = {{{&g_265[0], &g_265[4], &g_265[0], &g_265[4], &g_265[0], &g_265[4], &g_265[0]}, {&g_265[0], &g_265[4], &g_265[0], &g_265[4], &g_265[0], &g_265[4], &g_265[0]}, {&g_265[0], &g_265[4], &g_265[0], &g_265[4], &g_265[0], &g_265[4], &g_265[0]}, {&g_265[0], &g_265[4], &g_265[0], &g_265[4], &g_265[0], &g_265[4], &g_265[0]}, {&g_265[0], &g_265[4], &g_265[0], &g_265[4], &g_265[0], &g_265[4], &g_265[0]}, {&g_265[0], &g_265[4], &g_265[0], &g_265[4], &g_265[0], &g_265[4], &g_265[0]}, {&g_265[0], &g_265[4], &g_265[0], &g_265[4], &g_265[0], &g_265[4], &g_265[0]}, {&g_265[0], &g_265[4], &g_265[0], &g_265[4], &g_265[0], &g_265[4], &g_265[0]}, {&g_265[0], &g_265[4], &g_265[0], &g_265[4], &g_265[0], &g_265[4], &g_265[0]}}};
            const unsigned *l_421 = &g_422;
            const unsigned **l_420 = &l_421;
            const unsigned ***l_419 = &l_420;
            int i, j, k;
            (*g_42) = (((*g_47) = (l_404 == (l_405 = &g_200))) || (((((0x39B918A1L ^ p_60) != l_406) == l_406) & 0x6BC8L) >= (safe_rshift_func_uint16_t_u_u((g_265[0] = ((safe_unary_minus_func_int16_t_s((!3L))) & (safe_lshift_func_uint16_t_u_s((((*g_47) = ((g_281 && l_406) != p_59)) < 0xEBL), 5)))), l_398))));
            (*g_42) = (safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(l_406, l_398)), (!l_398)));
        }
        for (p_60 = (-3); (p_60 < 18); ++p_60)
        {
            short *l_464[7][5][7] = {{{&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}, {&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}, {&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}, {&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}, {&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}}, {{&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}, {&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}, {&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}, {&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}, {&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}}, {{&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}, {&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}, {&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}, {&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}, {&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}}, {{&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}, {&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}, {&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}, {&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}, {&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}}, {{&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}, {&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}, {&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}, {&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}, {&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}}, {{&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}, {&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}, {&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}, {&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}, {&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}}, {{&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}, {&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}, {&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}, {&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}, {&g_80[5], (void*)0, &g_80[0], (void*)0, &g_80[3], &g_80[2], &g_80[3]}}};
            unsigned l_468 = 0xD08E0EE5L;
            const int l_469 = 0L;
            int l_487 = 0x1790E74FL;
            int **l_488[8][4] = {{&g_42, &g_42, &g_42, &g_42}, {&g_42, &g_42, &g_42, &g_42}, {&g_42, &g_42, &g_42, &g_42}, {&g_42, &g_42, &g_42, &g_42}, {&g_42, &g_42, &g_42, &g_42}, {&g_42, &g_42, &g_42, &g_42}, {&g_42, &g_42, &g_42, &g_42}, {&g_42, &g_42, &g_42, &g_42}};
            const unsigned l_538 = 0xC77891ECL;
            short l_559[4];
            int l_596 = 0x60331DA6L;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_559[i] = 0L;
            for (g_103 = 0; (g_103 <= 7); g_103 += 1)
            {
                unsigned char l_427 = 0xFFL;
                unsigned short *l_451 = &g_265[0];
                unsigned short *l_452 = &g_265[4];
                int l_461[8][9][3] = {{{0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}}, {{0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}}, {{0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}}, {{0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}}, {{0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}}, {{0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}}, {{0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}}, {{0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}, {0x537DCC94L, 2L, (-2L)}}};
                int *l_485[9] = {&l_461[7][8][2], &l_461[6][1][2], &l_461[7][8][2], &l_461[6][1][2], &l_461[7][8][2], &l_461[6][1][2], &l_461[7][8][2], &l_461[6][1][2], &l_461[7][8][2]};
                int i, j, k;
            }
            l_489 = &l_430;
            for (g_100 = 0; (g_100 != 16); ++g_100)
            {
                return p_59;
            }
        }
    }
    return p_59;
}







static unsigned char ** func_67(short p_68, int p_69, unsigned short p_70, const int p_71, unsigned char ** p_72)
{
    short *l_79[1];
    int l_81 = (-10L);
    const int *l_90 = &g_26;
    const int **l_89 = &l_90;
    int l_91 = 0x37E3B525L;
    unsigned *l_189 = &g_100;
    int *l_308 = &g_309;
    const short ****l_310 = (void*)0;
    unsigned char **l_318 = &g_47;
    char l_353 = 0x86L;
    unsigned char l_390 = 0x60L;
    int i;
    for (i = 0; i < 1; i++)
        l_79[i] = &g_80[3];
    return &g_45[4];
}







static short func_82(unsigned char p_83, int p_84, int p_85, unsigned * p_86)
{
    int l_197 = 0L;
    int *l_205[1];
    short *l_226 = (void*)0;
    unsigned l_241 = 1UL;
    unsigned short l_296 = 65533UL;
    int i;
    for (i = 0; i < 1; i++)
        l_205[i] = &l_197;
    if (p_83)
    {
        unsigned short l_190 = 1UL;
        int *l_191 = (void*)0;
        int *l_192 = &g_193;
        (*l_192) = l_190;
    }
    else
    {
        unsigned l_196[6] = {4294967295UL, 0UL, 4294967295UL, 0UL, 4294967295UL, 0UL};
        int l_198 = 0xF7DA1659L;
        unsigned *l_199 = &g_200;
        int *l_211 = &l_197;
        int i;
        if ((safe_sub_func_int32_t_s_s((-9L), func_92(p_83, g_100, func_92(l_196[5], func_92(((*l_199) = (((l_198 |= ((l_197 = p_84) <= (p_83 != l_196[1]))) == 8L) && 0xACDD564CL)), p_83, p_84, l_196[3]), g_100, p_85), l_196[0]))))
        {
            char l_213 = 0L;
            int *l_215 = (void*)0;
            int l_285 = 0x2129FDFFL;
            if ((p_83 || (*p_86)))
            {
                int l_208 = 0xE0F09638L;
                int *l_212[4][2][1] = {{{&l_197}, {&l_197}}, {{&l_197}, {&l_197}}, {{&l_197}, {&l_197}}, {{&l_197}, {&l_197}}};
                int i, j, k;
                for (p_84 = 0; (p_84 != 16); p_84 = safe_add_func_uint32_t_u_u(p_84, 1))
                {
                    short *l_224[9] = {&g_80[3], &g_80[3], &g_80[3], &g_80[3], &g_80[3], &g_80[3], &g_80[3], &g_80[3], &g_80[3]};
                    short **l_223 = &l_224[2];
                    short ***l_222 = &l_223;
                    int l_228[10] = {1L, 5L, 1L, 5L, 1L, 5L, 1L, 5L, 1L, 5L};
                    int **l_229 = &l_205[0];
                    int i;
                    for (g_193 = 19; (g_193 < (-8)); g_193 = safe_sub_func_uint8_t_u_u(g_193, 6))
                    {
                        l_205[0] = p_86;
                        l_205[0] = p_86;
                    }
                    for (p_85 = 0; (p_85 < 26); p_85 = safe_add_func_uint32_t_u_u(p_85, 4))
                    {
                        short l_209 = 0xCD75L;
                        int **l_210[4][8] = {{&g_42, &l_205[0], &l_205[0], &l_205[0], &g_42, &g_42, &g_42, &l_205[0]}, {&g_42, &l_205[0], &l_205[0], &l_205[0], &g_42, &g_42, &g_42, &l_205[0]}, {&g_42, &l_205[0], &l_205[0], &l_205[0], &g_42, &g_42, &g_42, &l_205[0]}, {&g_42, &l_205[0], &l_205[0], &l_205[0], &g_42, &g_42, &g_42, &l_205[0]}};
                        int i, j;
                        l_209 &= l_208;
                        if (p_84)
                            continue;
                        l_212[0][1][0] = (l_211 = (void*)0);
                    }
                    if (l_213)
                    {
                        int **l_214[6] = {&l_211, &l_211, &l_212[2][1][0], &l_211, &l_211, &l_212[2][1][0]};
                        int i;
                        l_215 = p_86;
                    }
                    else
                    {
                        short ****l_225 = &l_222;
                        if (p_85)
                            break;
                        l_228[3] |= (safe_sub_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(((*p_86) || (*p_86)), ((*g_178) & g_156))) & (((*l_225) = l_222) == &g_177)), p_85)) == g_80[6]), ((g_227 ^= ((l_226 != (void*)0) != g_23)) != g_38)));
                    }
                    (*l_229) = &l_197;
                }
                for (g_23 = 0; (g_23 == 59); g_23 = safe_add_func_int8_t_s_s(g_23, 1))
                {
                    short *l_234 = (void*)0;
                    short *l_235[10][3][4] = {{{&g_80[1], &g_80[6], (void*)0, &g_80[4]}, {&g_80[1], &g_80[6], (void*)0, &g_80[4]}, {&g_80[1], &g_80[6], (void*)0, &g_80[4]}}, {{&g_80[1], &g_80[6], (void*)0, &g_80[4]}, {&g_80[1], &g_80[6], (void*)0, &g_80[4]}, {&g_80[1], &g_80[6], (void*)0, &g_80[4]}}, {{&g_80[1], &g_80[6], (void*)0, &g_80[4]}, {&g_80[1], &g_80[6], (void*)0, &g_80[4]}, {&g_80[1], &g_80[6], (void*)0, &g_80[4]}}, {{&g_80[1], &g_80[6], (void*)0, &g_80[4]}, {&g_80[1], &g_80[6], (void*)0, &g_80[4]}, {&g_80[1], &g_80[6], (void*)0, &g_80[4]}}, {{&g_80[1], &g_80[6], (void*)0, &g_80[4]}, {&g_80[1], &g_80[6], (void*)0, &g_80[4]}, {&g_80[1], &g_80[6], (void*)0, &g_80[4]}}, {{&g_80[1], &g_80[6], (void*)0, &g_80[4]}, {&g_80[1], &g_80[6], (void*)0, &g_80[4]}, {&g_80[1], &g_80[6], (void*)0, &g_80[4]}}, {{&g_80[1], &g_80[6], (void*)0, &g_80[4]}, {&g_80[1], &g_80[6], (void*)0, &g_80[4]}, {&g_80[1], &g_80[6], (void*)0, &g_80[4]}}, {{&g_80[1], &g_80[6], (void*)0, &g_80[4]}, {&g_80[1], &g_80[6], (void*)0, &g_80[4]}, {&g_80[1], &g_80[6], (void*)0, &g_80[4]}}, {{&g_80[1], &g_80[6], (void*)0, &g_80[4]}, {&g_80[1], &g_80[6], (void*)0, &g_80[4]}, {&g_80[1], &g_80[6], (void*)0, &g_80[4]}}, {{&g_80[1], &g_80[6], (void*)0, &g_80[4]}, {&g_80[1], &g_80[6], (void*)0, &g_80[4]}, {&g_80[1], &g_80[6], (void*)0, &g_80[4]}}};
                    int l_238[5];
                    int **l_242 = &l_211;
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_238[i] = 1L;
                    l_198 = (safe_sub_func_int32_t_s_s(p_84, (((p_83 == ((g_80[1] = 0xAC25L) <= ((void*)0 != &l_205[0]))) ^ ((safe_lshift_func_int8_t_s_u(0L, l_238[4])) != 0x33A9L)) >= (safe_rshift_func_uint8_t_u_u(l_241, (*g_47))))));
                    (*l_242) = &l_238[1];
                }
            }
            else
            {
                int l_255 = 0xD32A84E0L;
                if (p_83)
                {
                    int *l_243 = &l_197;
                    int **l_244[9] = {(void*)0, &l_205[0], (void*)0, &l_205[0], (void*)0, &l_205[0], (void*)0, &l_205[0], (void*)0};
                    short *****l_248 = &g_245[6][0][3];
                    short ****l_250 = &g_246;
                    short *****l_249 = &l_250;
                    short ****l_252 = &g_246;
                    short *****l_251 = &l_252;
                    short ****l_254 = (void*)0;
                    short *****l_253 = &l_254;
                    int i;
                    (*l_211) ^= p_83;
                    for (l_241 = 0; (l_241 <= 3); l_241 += 1)
                    {
                        l_243 = &l_198;
                    }
                    l_215 = l_243;
                    (*l_211) = (((*l_249) = ((*l_248) = g_245[6][0][3])) == ((*l_253) = ((*l_251) = &g_246)));
                }
                else
                {
                    unsigned short *l_264 = &g_265[0];
                    const int *l_267 = &l_197;
                    const int **l_266 = &l_267;
                    const char *l_270 = &g_103;
                    const char **l_269 = &l_270;
                    const char ***l_268 = &l_269;
                    for (g_103 = 0; (g_103 <= 0); g_103 += 1)
                    {
                        int i;
                        if ((*l_211))
                            break;
                        if (l_255)
                            break;
                    }
                    (*l_211) ^= ((safe_add_func_uint16_t_u_u(g_38, (((!(**g_177)) < (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_u(((*l_264) &= (p_85 >= (safe_rshift_func_uint8_t_u_u(0xF2L, ((*p_86) <= 0xA214F20BL))))), 7)) < (l_266 == &g_42)), ((l_268 != (void*)0) > 0xCD732F0CL)))) || 0xCC234C24L))) && p_83);
                }
                for (g_193 = 3; (g_193 >= 0); g_193 -= 1)
                {
                    int **l_271 = &l_215;
                    int i;
                    (*l_271) = p_86;
                }
            }
            for (p_84 = 19; (p_84 < 29); p_84 = safe_add_func_uint8_t_u_u(p_84, 9))
            {
                char *l_275 = &g_156;
                char **l_274[8][2][2] = {{{(void*)0, &l_275}, {(void*)0, &l_275}}, {{(void*)0, &l_275}, {(void*)0, &l_275}}, {{(void*)0, &l_275}, {(void*)0, &l_275}}, {{(void*)0, &l_275}, {(void*)0, &l_275}}, {{(void*)0, &l_275}, {(void*)0, &l_275}}, {{(void*)0, &l_275}, {(void*)0, &l_275}}, {{(void*)0, &l_275}, {(void*)0, &l_275}}, {{(void*)0, &l_275}, {(void*)0, &l_275}}};
                int l_276 = 0x56802493L;
                int i, j, k;
                l_276 &= (l_274[3][1][0] == (void*)0);
                if (p_85)
                {
                    int l_280 = 4L;
                    for (l_241 = 0; (l_241 <= 1); l_241 += 1)
                    {
                        int **l_277 = &l_211;
                        (*l_277) = p_86;
                        (**l_277) ^= p_85;
                        (*l_277) = (void*)0;
                    }
                    if (p_85)
                        break;
                    if ((g_12 | func_92(g_103, ((safe_rshift_func_int16_t_s_u(((0x54F7L & l_280) & 0x9DL), 9)) & ((g_281 > (p_83 ^ (g_265[0] = g_200))) == (safe_rshift_func_int8_t_s_s(0x18L, 6)))), p_84, l_280)))
                    {
                        return p_83;
                    }
                    else
                    {
                        l_276 &= (-7L);
                        return l_280;
                    }
                }
                else
                {
                    char l_284 = 0x78L;
                    return l_284;
                }
            }
            if ((l_285 = 0L))
            {
                char l_286 = 0xD8L;
                int *l_287 = &g_193;
                l_286 |= (&g_265[3] == l_226);
                l_287 = p_86;
            }
            else
            {
                unsigned short *l_293 = &g_265[0];
                unsigned short **l_292 = &l_293;
                int l_294 = (-3L);
                l_198 = (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((8UL < (&g_265[0] == ((*l_292) = (void*)0))), (l_294 = (*g_47)))), func_92((p_83 | p_83), p_84, p_85, (*g_47))));
            }
        }
        else
        {
            int **l_295 = &l_205[0];
            (*l_295) = p_86;
        }
    }
    l_296 = (g_227 > p_84);
    for (p_83 = 0; (p_83 > 57); p_83++)
    {
        unsigned char *l_305 = &g_23;
        int l_306 = 0x8D9B2E33L;
        int l_307 = 5L;
        l_307 |= (l_306 |= (safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(p_83, 6)), (p_85 ^ (((void*)0 != &g_47) && ((*l_305) = p_85))))), (*p_86))));
        l_306 = p_83;
    }
    return p_84;
}







static short func_92(unsigned p_93, char p_94, short p_95, unsigned char p_96)
{
    unsigned * const l_99[10] = {&g_100, (void*)0, &g_100, (void*)0, &g_100, (void*)0, &g_100, (void*)0, &g_100, (void*)0};
    int l_104 = (-1L);
    int l_105 = 0xD2CC01E3L;
    unsigned char l_158 = 0UL;
    int l_170[4];
    char l_184 = 0x9BL;
    int l_188 = (-1L);
    int i;
    for (i = 0; i < 4; i++)
        l_170[i] = 0xDD1E6761L;
    for (p_94 = 0; (p_94 <= 6); p_94 += 1)
    {
        char *l_101 = (void*)0;
        char *l_102[1];
        int l_122 = 1L;
        int l_125[9][2] = {{0xCB0F1F8AL, (-6L)}, {0xCB0F1F8AL, (-6L)}, {0xCB0F1F8AL, (-6L)}, {0xCB0F1F8AL, (-6L)}, {0xCB0F1F8AL, (-6L)}, {0xCB0F1F8AL, (-6L)}, {0xCB0F1F8AL, (-6L)}, {0xCB0F1F8AL, (-6L)}, {0xCB0F1F8AL, (-6L)}};
        int l_140 = (-1L);
        int *l_171 = &l_170[1];
        int **l_173 = &l_171;
        int *l_183[3];
        unsigned char *l_187 = &g_23;
        int i, j;
        for (i = 0; i < 1; i++)
            l_102[i] = &g_103;
        for (i = 0; i < 3; i++)
            l_183[i] = (void*)0;
        if ((l_105 = (l_104 ^= ((safe_lshift_func_int8_t_s_s((g_103 ^= ((void*)0 == l_99[9])), 0)) >= 1L))))
        {
            char l_107 = 0x3EL;
            int *l_117 = &g_26;
            short *l_130[9] = {&g_80[4], &g_80[3], &g_80[4], &g_80[3], &g_80[4], &g_80[3], &g_80[4], &g_80[3], &g_80[4]};
            unsigned char l_148 = 0x1EL;
            int l_169 = 0x5185D9A0L;
            int **l_172 = &l_171;
            int i;
            for (g_23 = 0; (g_23 <= 6); g_23 += 1)
            {
                int **l_106 = &g_42;
                int i;
                (*l_106) = &l_104;
                (*g_42) = 0xD0311C0DL;
                if (g_80[p_94])
                {
                    char l_116[6][2] = {{0x8CL, 0x8CL}, {0x8CL, 0x8CL}, {0x8CL, 0x8CL}, {0x8CL, 0x8CL}, {0x8CL, 0x8CL}, {0x8CL, 0x8CL}};
                    unsigned *l_121 = (void*)0;
                    int *l_126 = &l_105;
                    int i, j;
                    if (((1L || ((l_107 >= (l_105 ^= (safe_sub_func_uint32_t_u_u(p_96, (safe_sub_func_uint16_t_u_u(0x6624L, (safe_sub_func_int32_t_s_s(l_107, p_93)))))))) <= (0UL > (safe_mod_func_uint16_t_u_u(p_95, g_103))))) > l_116[3][0]))
                    {
                        return p_93;
                    }
                    else
                    {
                        int *l_118 = (void*)0;
                        int i;
                        (*l_106) = l_117;
                        l_118 = &l_104;
                        l_125[5][1] &= (safe_mod_func_uint16_t_u_u(((l_118 != l_121) == l_122), (g_80[p_94] = (safe_rshift_func_int16_t_s_s(p_93, g_103)))));
                    }
                    (*l_126) = (p_96 ^ (g_80[p_94] = g_103));
                }
                else
                {
                    char ***l_128[7][3] = {{&g_127, &g_127, (void*)0}, {&g_127, &g_127, (void*)0}, {&g_127, &g_127, (void*)0}, {&g_127, &g_127, (void*)0}, {&g_127, &g_127, (void*)0}, {&g_127, &g_127, (void*)0}, {&g_127, &g_127, (void*)0}};
                    const short *l_129 = &g_80[3];
                    int ***l_131 = &g_41[2];
                    int i, j;
                    g_127 = g_127;
                    (*l_131) = func_32((l_129 != l_130[0]), g_80[3], l_105);
                    (*l_106) = l_117;
                }
                if (((safe_add_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((l_140 = ((safe_mod_func_uint8_t_u_u(0xB2L, (*g_47))) & (((!p_96) ^ (p_96 > ((*l_117) | (safe_lshift_func_uint16_t_u_s((0x99B0BCF6L >= (((*l_117) <= (**l_106)) <= p_95)), 10))))) ^ 0L))), 3)) == p_96), l_125[5][1])) || 4294967290UL))
                {
                    unsigned short l_145 = 0xD4ACL;
                    if ((l_148 = (safe_sub_func_uint32_t_u_u((**l_106), (safe_sub_func_int16_t_s_s(l_145, (safe_add_func_uint32_t_u_u(4294967295UL, g_23))))))))
                    {
                        int *l_155[5][8][2] = {{{&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}}, {{&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}}, {{&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}}, {{&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}}, {{&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}, {&l_122, &l_122}}};
                        int i, j, k;
                        g_156 = (safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(p_94, ((safe_sub_func_int32_t_s_s((l_125[3][0] = p_94), (((4294967294UL < (l_145 < ((void*)0 != g_127))) && (0x4CD6L || p_93)) > l_105))) < p_94))), 14));
                        l_105 ^= (safe_unary_minus_func_int16_t_s((65534UL > p_96)));
                    }
                    else
                    {
                        unsigned short l_165 = 0UL;
                        l_140 &= ((((+l_158) ^ (p_96 > 1L)) && (l_122 && ((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((g_156 != ((((p_95 & p_96) < l_145) || (safe_add_func_uint8_t_u_u(l_158, (*l_117)))) < 254UL)), p_96)), 0)) || l_145))) || (*g_42));
                        (*l_106) = &l_104;
                        (*l_106) = &l_140;
                        (**l_106) = (p_93 <= ((0xAAFAE579L || l_165) >= l_104));
                    }
                }
                else
                {
                    int *l_166[5] = {(void*)0, &l_122, (void*)0, &l_122, (void*)0};
                    int i;
                    l_122 = (+((p_94 | (*g_42)) ^ l_158));
                    if ((l_140 = (l_169 |= (safe_lshift_func_uint8_t_u_u((1L || (~g_103)), 0)))))
                    {
                        if (p_96)
                            break;
                    }
                    else
                    {
                        return p_94;
                    }
                    return l_170[1];
                }
            }
            l_171 = &l_169;
            (*l_172) = &l_125[3][0];
            if (p_94)
                continue;
        }
        else
        {
            return g_26;
        }
        (*l_173) = (void*)0;
        if ((0xBA64AAA9L || g_174))
        {
            unsigned char l_175 = 0xDCL;
            int *l_176 = &l_125[5][1];
            (*l_176) |= l_175;
        }
        else
        {
            volatile short ***l_180 = &g_177;
            (*l_180) = g_177;
        }
        l_188 ^= (((*l_187) &= (safe_lshift_func_int8_t_s_s((((l_170[3] = l_170[0]) == (l_104 = (p_96 ^ g_26))) < (l_184 != (((safe_sub_func_uint32_t_u_u(p_96, g_26)) != (0UL == l_158)) || (l_105 = (4294967288UL || p_95))))), 4))) & l_184);
    }
    return p_93;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_66[i], "g_66[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_80[i], "g_80[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_265[i], "g_265[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    transparent_crc(g_403, "g_403", print_hash_value);
    transparent_crc(g_422, "g_422", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_486[i][j], "g_486[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_496[i][j], "g_496[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_533, "g_533", print_hash_value);
    transparent_crc(g_540, "g_540", print_hash_value);
    transparent_crc(g_613, "g_613", print_hash_value);
    transparent_crc(g_614, "g_614", print_hash_value);
    transparent_crc(g_697, "g_697", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_780[i][j][k], "g_780[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_809, "g_809", print_hash_value);
    transparent_crc(g_887, "g_887", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_910[i], "g_910[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_975[i][j][k], "g_975[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1030, "g_1030", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
