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



static unsigned short g_11 = 0xE58DL;
static char g_15 = 0x21L;
static int g_52 = 1L;
static int *g_51 = &g_52;
static int g_58[1][6] = {{7L, 0x46221EB1L, 7L, 0x46221EB1L, 7L, 0x46221EB1L}};
static unsigned short g_100 = 1UL;
static unsigned char g_155 = 7UL;
static unsigned g_169[1][4][2] = {{{0x8F52E723L, 0x8F52E723L}, {0x8F52E723L, 0x8F52E723L}, {0x8F52E723L, 0x8F52E723L}, {0x8F52E723L, 0x8F52E723L}}};
static unsigned short g_184 = 65529UL;
static unsigned short g_186 = 1UL;
static int g_247 = 6L;
static int g_252 = 0xDE6C3C61L;
static short g_271 = (-4L);
static unsigned g_317[6] = {0x8DC470D1L, 0x8DC470D1L, 1UL, 0x8DC470D1L, 0x8DC470D1L, 1UL};
static unsigned *g_335 = &g_169[0][0][0];
static char g_388 = (-7L);
static short g_399 = 0x503DL;
static char *g_416[10] = {&g_388, &g_388, &g_388, &g_388, &g_388, &g_388, &g_388, &g_388, &g_388, &g_388};
static unsigned g_492 = 1UL;
static unsigned g_511[9] = {0x7514818AL, 0xB5547BBAL, 0x7514818AL, 0xB5547BBAL, 0x7514818AL, 0xB5547BBAL, 0x7514818AL, 0xB5547BBAL, 0x7514818AL};
static char g_620 = (-1L);
static unsigned ** const g_625 = &g_335;
static unsigned ** const *g_624 = &g_625;
static unsigned **g_683 = &g_335;
static unsigned short g_695[5] = {0x11AEL, 0x11AEL, 0x11AEL, 0x11AEL, 0x11AEL};
static unsigned short *g_861 = &g_695[3];
static unsigned short **g_860 = &g_861;
static unsigned short g_943 = 1UL;
static int g_1039 = 0x669129BEL;
static short g_1046 = 0x40F9L;
static short g_1048[5] = {0L, 0xA8B8L, 0L, 0xA8B8L, 0L};
static unsigned char g_1082 = 0x34L;
static const char g_1111 = 0x09L;
static unsigned g_1117 = 4294967291UL;
static char **g_1131[2] = {(void*)0, (void*)0};
static char ***g_1130[5][6] = {{&g_1131[0], &g_1131[1], &g_1131[1], (void*)0, &g_1131[0], (void*)0}, {&g_1131[0], &g_1131[1], &g_1131[1], (void*)0, &g_1131[0], (void*)0}, {&g_1131[0], &g_1131[1], &g_1131[1], (void*)0, &g_1131[0], (void*)0}, {&g_1131[0], &g_1131[1], &g_1131[1], (void*)0, &g_1131[0], (void*)0}, {&g_1131[0], &g_1131[1], &g_1131[1], (void*)0, &g_1131[0], (void*)0}};
static short g_1161[3] = {(-1L), (-1L), (-1L)};
static int g_1184 = 0xF9A65CE3L;
static unsigned short *g_1223 = &g_11;
static const char g_1241 = 0x5FL;
static unsigned g_1260 = 4294967295UL;
static unsigned ** const g_1274 = &g_335;
static unsigned char ***g_1307 = (void*)0;
static int g_1326[2][9][10] = {{{0L, 0xA0CADA7CL, 0xE3C02743L, 1L, 1L, 5L, 0x97FFF44BL, 0x5249DE4BL, 0L, 0xCA27F4FCL}, {0L, 0xA0CADA7CL, 0xE3C02743L, 1L, 1L, 5L, 0x97FFF44BL, 0x5249DE4BL, 0L, 0xCA27F4FCL}, {0L, 0xA0CADA7CL, 0xE3C02743L, 1L, 1L, 5L, 0x97FFF44BL, 0x5249DE4BL, 0L, 0xCA27F4FCL}, {0L, 0xA0CADA7CL, 0xE3C02743L, 1L, 1L, 5L, 0x97FFF44BL, 0x5249DE4BL, 0L, 0xCA27F4FCL}, {0L, 0xA0CADA7CL, 0xE3C02743L, 1L, 1L, 5L, 0x97FFF44BL, 0x5249DE4BL, 0L, 0xCA27F4FCL}, {0L, 0xA0CADA7CL, 0xE3C02743L, 1L, 1L, 5L, 0x97FFF44BL, 0x5249DE4BL, 0L, 0xCA27F4FCL}, {0L, 0xA0CADA7CL, 0xE3C02743L, 1L, 1L, 5L, 0x97FFF44BL, 0x5249DE4BL, 0L, 0xCA27F4FCL}, {0L, 0xA0CADA7CL, 0xE3C02743L, 1L, 1L, 5L, 0x97FFF44BL, 0x5249DE4BL, 0L, 0xCA27F4FCL}, {0L, 0xA0CADA7CL, 0xE3C02743L, 1L, 1L, 5L, 0x97FFF44BL, 0x5249DE4BL, 0L, 0xCA27F4FCL}}, {{0L, 0xA0CADA7CL, 0xE3C02743L, 1L, 1L, 5L, 0x97FFF44BL, 0x5249DE4BL, 0L, 0xCA27F4FCL}, {0L, 0xA0CADA7CL, 0xE3C02743L, 1L, 1L, 5L, 0x97FFF44BL, 0x5249DE4BL, 0L, 0xCA27F4FCL}, {0L, 0xA0CADA7CL, 0xE3C02743L, 1L, 1L, 5L, 0x97FFF44BL, 0x5249DE4BL, 0L, 0xCA27F4FCL}, {0L, 0xA0CADA7CL, 0xE3C02743L, 1L, 1L, 5L, 0x97FFF44BL, 0x5249DE4BL, 0L, 0xCA27F4FCL}, {0L, 0xA0CADA7CL, 0xE3C02743L, 1L, 1L, 5L, 0x97FFF44BL, 0x5249DE4BL, 0L, 0xCA27F4FCL}, {0L, 0xA0CADA7CL, 0xE3C02743L, 1L, 1L, 5L, 0x97FFF44BL, 0x5249DE4BL, 0L, 0xCA27F4FCL}, {0L, 0xA0CADA7CL, 0xE3C02743L, 1L, 1L, 5L, 0x97FFF44BL, 0x5249DE4BL, 0L, 0xCA27F4FCL}, {0L, 0xA0CADA7CL, 0xE3C02743L, 1L, 1L, 5L, 0x97FFF44BL, 0x5249DE4BL, 0L, 0xCA27F4FCL}, {0L, 0xA0CADA7CL, 0xE3C02743L, 1L, 1L, 5L, 0x97FFF44BL, 0x5249DE4BL, 0L, 0xCA27F4FCL}}};
static short g_1392 = (-1L);
static short g_1395 = 0xD145L;
static const char g_1437 = 1L;



static const unsigned short func_1(void);
static char func_6(unsigned short p_7, unsigned char p_8);
static unsigned short func_9(char p_10);
static unsigned short func_19(int p_20, char * p_21);
static char * func_22(const char * p_23);
static const char * func_24(unsigned p_25, unsigned p_26, char * p_27, unsigned char p_28, const unsigned p_29);
static unsigned short func_32(char * p_33, char * p_34, char * p_35, char * p_36);
static char * func_37(const char * p_38, char * p_39);
static const char * func_40(char * p_41);
static char * func_42(char * p_43, unsigned char p_44, const char * p_45);
static const unsigned short func_1(void)
{
    char l_12 = 0x60L;
    short *l_1045 = &g_1046;
    short *l_1047 = &g_1048[0];
    int l_1124 = 0xFED00CA7L;
    int l_1144[9];
    short l_1160 = 0x4409L;
    int l_1174 = 0L;
    const char *l_1182[7][6][6] = {{{&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}}, {{&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}}, {{&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}}, {{&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}}, {{&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}}, {{&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}}, {{&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}, {&g_15, &g_620, (void*)0, &g_15, &g_620, &g_388}}};
    unsigned ***l_1188 = &g_683;
    unsigned short * const *l_1197 = &g_861;
    char ***l_1202 = (void*)0;
    unsigned l_1225 = 0xC63CBB53L;
    short l_1325 = (-4L);
    unsigned l_1328[9][4] = {{0x335B74FBL, 0x30AE8B6CL, 1UL, 0x30AE8B6CL}, {0x335B74FBL, 0x30AE8B6CL, 1UL, 0x30AE8B6CL}, {0x335B74FBL, 0x30AE8B6CL, 1UL, 0x30AE8B6CL}, {0x335B74FBL, 0x30AE8B6CL, 1UL, 0x30AE8B6CL}, {0x335B74FBL, 0x30AE8B6CL, 1UL, 0x30AE8B6CL}, {0x335B74FBL, 0x30AE8B6CL, 1UL, 0x30AE8B6CL}, {0x335B74FBL, 0x30AE8B6CL, 1UL, 0x30AE8B6CL}, {0x335B74FBL, 0x30AE8B6CL, 1UL, 0x30AE8B6CL}, {0x335B74FBL, 0x30AE8B6CL, 1UL, 0x30AE8B6CL}};
    int l_1407[8][8][2] = {{{0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}}, {{0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}}, {{0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}}, {{0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}}, {{0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}}, {{0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}}, {{0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}}, {{0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}, {0x5E318A73L, 0x2C000FE2L}}};
    unsigned l_1424[7] = {9UL, 9UL, 0xB6003329L, 9UL, 9UL, 0xB6003329L, 9UL};
    unsigned char l_1431 = 255UL;
    unsigned l_1439 = 1UL;
    char *l_1445 = &l_12;
    char *l_1447 = &g_15;
    unsigned l_1448 = 0x6034B6DFL;
    char *l_1454 = &l_12;
    int l_1462 = (-10L);
    char l_1463 = 0x6DL;
    unsigned l_1464 = 18446744073709551610UL;
    int *l_1471 = &g_1039;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_1144[i] = 0L;
    if ((safe_mod_func_int8_t_s_s((4294967295UL || ((safe_lshift_func_int8_t_s_s(func_6(func_9((g_11 != l_12)), ((((*l_1047) = ((*l_1045) = (l_12 > l_12))) | ((safe_rshift_func_uint16_t_u_s((0xAC223964L != g_511[8]), (l_12 < g_317[5]))) >= l_12)) <= g_317[3])), 5)) > g_317[3])), l_12)))
    {
        const unsigned *l_1120 = &g_511[8];
        unsigned l_1137 = 0x27B3EB09L;
        int l_1138[3];
        int l_1143 = 0xD77222FDL;
        char **l_1152 = &g_416[2];
        char **l_1153 = &g_416[2];
        char *l_1154 = &g_388;
        int *l_1157 = (void*)0;
        char l_1158 = (-1L);
        int *l_1159[4];
        short l_1162 = 1L;
        unsigned l_1163 = 0x369F5128L;
        unsigned short *l_1177 = &g_186;
        char *l_1178 = &l_1158;
        unsigned char l_1181 = 0x7EL;
        unsigned short l_1183 = 2UL;
        int i;
        for (i = 0; i < 3; i++)
            l_1138[i] = 0xFD24A307L;
        for (i = 0; i < 4; i++)
            l_1159[i] = &l_1124;
        if ((l_1120 != &g_511[8]))
        {
            char *l_1123 = &l_12;
            unsigned short l_1125[7] = {65526UL, 65526UL, 0x250BL, 65526UL, 65526UL, 0x250BL, 65526UL};
            int i;
            l_1125[5] = (((-1L) ^ 255UL) <= ((g_169[0][3][1] > (safe_rshift_func_uint8_t_u_u(func_32(&g_15, func_37(&g_388, l_1123), &g_15, l_1123), g_695[3]))) || l_1124));
            return (**g_860);
        }
        else
        {
            char ***l_1132 = &g_1131[0];
            int *l_1139 = &l_1124;
            int *l_1140 = (void*)0;
            int *l_1141 = &g_58[0][1];
            int *l_1142[4][6][1] = {{{&g_1039}, {&g_1039}, {&g_1039}, {&g_1039}, {&g_1039}, {&g_1039}}, {{&g_1039}, {&g_1039}, {&g_1039}, {&g_1039}, {&g_1039}, {&g_1039}}, {{&g_1039}, {&g_1039}, {&g_1039}, {&g_1039}, {&g_1039}, {&g_1039}}, {{&g_1039}, {&g_1039}, {&g_1039}, {&g_1039}, {&g_1039}, {&g_1039}}};
            unsigned short l_1145[5][1][1] = {{{0x8246L}}, {{0x8246L}}, {{0x8246L}}, {{0x8246L}}, {{0x8246L}}};
            unsigned char *l_1150 = (void*)0;
            unsigned char *l_1151[10];
            char **l_1155 = &l_1154;
            char *l_1156 = (void*)0;
            int i, j, k;
            for (i = 0; i < 10; i++)
                l_1151[i] = &g_155;
            g_58[0][5] = (safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s((g_1130[3][3] == l_1132), ((void*)0 == (*g_625)))), ((safe_rshift_func_uint16_t_u_s((*g_861), 2)) <= (safe_mod_func_uint8_t_u_u((l_1137 | (l_12 | l_1124)), 0x12L)))));
            --l_1145[3][0][0];
            (*l_1139) = (safe_rshift_func_uint8_t_u_s((l_1138[1] | (g_155 = g_943)), (((l_1152 = l_1152) != l_1153) ^ func_32(((*l_1155) = ((*l_1153) = l_1154)), &l_12, l_1156, l_1150))));
            l_1157 = &l_1124;
        }
        l_1163--;
        (*l_1157) = (safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((((**g_860) ^= l_1144[5]) ^ ((l_1174 || ((safe_add_func_uint32_t_u_u(((((*l_1177) = (*l_1157)) == (+(func_32(&l_12, &l_12, &l_12, &l_12) < (*g_335)))) | g_155), l_1183)) || g_620)) > 0xAB1E5248L)), 9)), l_1144[1])), l_12)), g_1184));
    }
    else
    {
        short l_1185 = 0xFBB7L;
        int l_1208[4];
        char *l_1218 = &l_12;
        char l_1292 = 1L;
        unsigned l_1297 = 1UL;
        int l_1327 = (-1L);
        unsigned char l_1348 = 252UL;
        unsigned char l_1360 = 255UL;
        unsigned short **l_1365[6][1][4] = {{{&g_1223, &g_861, &g_1223, &g_861}}, {{&g_1223, &g_861, &g_1223, &g_861}}, {{&g_1223, &g_861, &g_1223, &g_861}}, {{&g_1223, &g_861, &g_1223, &g_861}}, {{&g_1223, &g_861, &g_1223, &g_861}}, {{&g_1223, &g_861, &g_1223, &g_861}}};
        short l_1408 = 0x15D1L;
        int *l_1434[9][7] = {{&l_1144[6], (void*)0, &g_1326[0][4][8], (void*)0, &l_1144[6], &l_1208[0], (void*)0}, {&l_1144[6], (void*)0, &g_1326[0][4][8], (void*)0, &l_1144[6], &l_1208[0], (void*)0}, {&l_1144[6], (void*)0, &g_1326[0][4][8], (void*)0, &l_1144[6], &l_1208[0], (void*)0}, {&l_1144[6], (void*)0, &g_1326[0][4][8], (void*)0, &l_1144[6], &l_1208[0], (void*)0}, {&l_1144[6], (void*)0, &g_1326[0][4][8], (void*)0, &l_1144[6], &l_1208[0], (void*)0}, {&l_1144[6], (void*)0, &g_1326[0][4][8], (void*)0, &l_1144[6], &l_1208[0], (void*)0}, {&l_1144[6], (void*)0, &g_1326[0][4][8], (void*)0, &l_1144[6], &l_1208[0], (void*)0}, {&l_1144[6], (void*)0, &g_1326[0][4][8], (void*)0, &l_1144[6], &l_1208[0], (void*)0}, {&l_1144[6], (void*)0, &g_1326[0][4][8], (void*)0, &l_1144[6], &l_1208[0], (void*)0}};
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1208[i] = (-4L);
        l_1185 = l_1174;
        if ((safe_rshift_func_int16_t_s_s(l_1174, 2)))
        {
            int l_1191[9][6] = {{(-1L), (-8L), (-1L), (-8L), (-1L), (-1L)}, {(-1L), (-8L), (-1L), (-8L), (-1L), (-1L)}, {(-1L), (-8L), (-1L), (-8L), (-1L), (-1L)}, {(-1L), (-8L), (-1L), (-8L), (-1L), (-1L)}, {(-1L), (-8L), (-1L), (-8L), (-1L), (-1L)}, {(-1L), (-8L), (-1L), (-8L), (-1L), (-1L)}, {(-1L), (-8L), (-1L), (-8L), (-1L), (-1L)}, {(-1L), (-8L), (-1L), (-8L), (-1L), (-1L)}, {(-1L), (-8L), (-1L), (-8L), (-1L), (-1L)}};
            unsigned char *l_1194 = &g_1082;
            int *l_1195 = (void*)0;
            int *l_1196 = &l_1144[5];
            char ***l_1205 = &g_1131[0];
            int **l_1222 = &l_1196;
            int i, j;
            (*l_1196) |= (~(func_6((((**g_625) = ((void*)0 == l_1188)) == ((l_1124 = (safe_sub_func_int16_t_s_s(((*l_1047) = g_1184), 0x21D9L))) && l_1191[2][3])), ((*l_1194) = ((safe_sub_func_uint16_t_u_u(l_1185, 0xBD6AL)) > l_12))) & l_1185));
            (*l_1196) &= ((void*)0 != l_1197);
            for (g_52 = (-14); (g_52 > 15); g_52++)
            {
                int *l_1200 = &l_1191[8][0];
                int **l_1201 = &g_51;
                char ****l_1203 = (void*)0;
                char ****l_1204 = &g_1130[2][5];
                char ****l_1206 = (void*)0;
                char ****l_1207 = &l_1205;
                int l_1209 = 0xF83EB8AFL;
                int l_1213 = 7L;
                (*l_1201) = l_1200;
                (*l_1200) &= 0x9A553956L;
                if ((((*g_51) >= (((*l_1204) = l_1202) == ((*l_1207) = l_1205))) >= ((*l_1047) = l_1185)))
                {
                    int *l_1210 = &g_58[0][5];
                    int *l_1211 = &l_1191[1][2];
                    int *l_1212[7] = {&l_1208[0], &g_58[0][2], &l_1208[0], &g_58[0][2], &l_1208[0], &g_58[0][2], &l_1208[0]};
                    unsigned short l_1214 = 0xA0F6L;
                    int i;
                    ++l_1214;
                }
                else
                {
                    char *l_1217[8][8] = {{&g_388, &g_620, &l_12, &g_388, &l_12, &g_620, &g_388, (void*)0}, {&g_388, &g_620, &l_12, &g_388, &l_12, &g_620, &g_388, (void*)0}, {&g_388, &g_620, &l_12, &g_388, &l_12, &g_620, &g_388, (void*)0}, {&g_388, &g_620, &l_12, &g_388, &l_12, &g_620, &g_388, (void*)0}, {&g_388, &g_620, &l_12, &g_388, &l_12, &g_620, &g_388, (void*)0}, {&g_388, &g_620, &l_12, &g_388, &l_12, &g_620, &g_388, (void*)0}, {&g_388, &g_620, &l_12, &g_388, &l_12, &g_620, &g_388, (void*)0}, {&g_388, &g_620, &l_12, &g_388, &l_12, &g_620, &g_388, (void*)0}};
                    int *l_1219[5] = {(void*)0, &l_1213, (void*)0, &l_1213, (void*)0};
                    int i, j;
                    for (g_943 = 0; (g_943 <= 5); g_943 += 1)
                    {
                        int i, j;
                        l_1191[(g_943 + 1)][g_943] = func_32(l_1217[1][6], l_1218, l_1218, l_1218);
                        (*l_1196) ^= l_1191[(g_943 + 2)][g_943];
                        (*l_1201) = l_1219[1];
                    }
                    (*l_1200) &= (safe_lshift_func_int8_t_s_s((*l_1196), 4));
                    (*l_1201) = &g_1184;
                    for (g_11 = 0; (g_11 <= 7); g_11 += 1)
                    {
                        (*l_1201) = &l_1191[2][0];
                        if ((*g_51))
                            break;
                    }
                }
            }
            (*l_1222) = &g_1184;
        }
        else
        {
            unsigned char l_1228 = 0x2CL;
            int l_1232 = 0xB974C675L;
            char *l_1237 = (void*)0;
            char *l_1242 = (void*)0;
            char l_1291 = (-1L);
            int l_1293 = (-1L);
            int l_1294 = 0x768D377EL;
            int l_1295 = (-2L);
            int l_1296[7] = {0x5936E802L, 0L, 0x5936E802L, 0L, 0x5936E802L, 0L, 0x5936E802L};
            unsigned l_1309[2][10] = {{0UL, 0xD891CAD1L, 0x440DEF17L, 0xD891CAD1L, 0UL, 0x706263D3L, 0UL, 0xD891CAD1L, 0x440DEF17L, 0xD891CAD1L}, {0UL, 0xD891CAD1L, 0x440DEF17L, 0xD891CAD1L, 0UL, 0x706263D3L, 0UL, 0xD891CAD1L, 0x440DEF17L, 0xD891CAD1L}};
            unsigned l_1310 = 2UL;
            int l_1359 = 0xB9273C8AL;
            unsigned l_1396 = 0xFFA0A4D9L;
            unsigned l_1401 = 18446744073709551613UL;
            short l_1409 = 8L;
            unsigned l_1411 = 4294967295UL;
            unsigned l_1414 = 4294967295UL;
            int i, j;
            if (((((*g_860) != (g_1223 = (*g_860))) & l_1144[5]) == 2UL))
            {
                int *l_1224[3][6][2] = {{{&l_1124, &l_1208[3]}, {&l_1124, &l_1208[3]}, {&l_1124, &l_1208[3]}, {&l_1124, &l_1208[3]}, {&l_1124, &l_1208[3]}, {&l_1124, &l_1208[3]}}, {{&l_1124, &l_1208[3]}, {&l_1124, &l_1208[3]}, {&l_1124, &l_1208[3]}, {&l_1124, &l_1208[3]}, {&l_1124, &l_1208[3]}, {&l_1124, &l_1208[3]}}, {{&l_1124, &l_1208[3]}, {&l_1124, &l_1208[3]}, {&l_1124, &l_1208[3]}, {&l_1124, &l_1208[3]}, {&l_1124, &l_1208[3]}, {&l_1124, &l_1208[3]}}};
                const char *l_1256 = &g_15;
                char *l_1258 = &g_620;
                unsigned char *l_1262 = &g_1082;
                unsigned char **l_1261 = &l_1262;
                int i, j, k;
                --l_1225;
                if ((l_1174 != g_1048[0]))
                {
                    g_58[0][3] = l_1228;
                }
                else
                {
                    unsigned char l_1234 = 0UL;
                    for (g_15 = (-5); (g_15 < (-4)); g_15++)
                    {
                        unsigned char *l_1231[4][10] = {{&l_1228, &l_1228, &g_155, &g_155, &l_1228, &l_1228, &l_1228, &g_155, &g_155, &l_1228}, {&l_1228, &l_1228, &g_155, &g_155, &l_1228, &l_1228, &l_1228, &g_155, &g_155, &l_1228}, {&l_1228, &l_1228, &g_155, &g_155, &l_1228, &l_1228, &l_1228, &g_155, &g_155, &l_1228}, {&l_1228, &l_1228, &g_155, &g_155, &l_1228, &l_1228, &l_1228, &g_155, &g_155, &l_1228}};
                        int **l_1233[9][10] = {{&l_1224[2][5][0], &l_1224[2][5][0], &l_1224[2][5][0], &g_51, &l_1224[2][5][0], &l_1224[2][5][0], &l_1224[2][5][0], &g_51, &g_51, &l_1224[2][5][0]}, {&l_1224[2][5][0], &l_1224[2][5][0], &l_1224[2][5][0], &g_51, &l_1224[2][5][0], &l_1224[2][5][0], &l_1224[2][5][0], &g_51, &g_51, &l_1224[2][5][0]}, {&l_1224[2][5][0], &l_1224[2][5][0], &l_1224[2][5][0], &g_51, &l_1224[2][5][0], &l_1224[2][5][0], &l_1224[2][5][0], &g_51, &g_51, &l_1224[2][5][0]}, {&l_1224[2][5][0], &l_1224[2][5][0], &l_1224[2][5][0], &g_51, &l_1224[2][5][0], &l_1224[2][5][0], &l_1224[2][5][0], &g_51, &g_51, &l_1224[2][5][0]}, {&l_1224[2][5][0], &l_1224[2][5][0], &l_1224[2][5][0], &g_51, &l_1224[2][5][0], &l_1224[2][5][0], &l_1224[2][5][0], &g_51, &g_51, &l_1224[2][5][0]}, {&l_1224[2][5][0], &l_1224[2][5][0], &l_1224[2][5][0], &g_51, &l_1224[2][5][0], &l_1224[2][5][0], &l_1224[2][5][0], &g_51, &g_51, &l_1224[2][5][0]}, {&l_1224[2][5][0], &l_1224[2][5][0], &l_1224[2][5][0], &g_51, &l_1224[2][5][0], &l_1224[2][5][0], &l_1224[2][5][0], &g_51, &g_51, &l_1224[2][5][0]}, {&l_1224[2][5][0], &l_1224[2][5][0], &l_1224[2][5][0], &g_51, &l_1224[2][5][0], &l_1224[2][5][0], &l_1224[2][5][0], &g_51, &g_51, &l_1224[2][5][0]}, {&l_1224[2][5][0], &l_1224[2][5][0], &l_1224[2][5][0], &g_51, &l_1224[2][5][0], &l_1224[2][5][0], &l_1224[2][5][0], &g_51, &g_51, &l_1224[2][5][0]}};
                        int i, j;
                        l_1232 ^= (g_1039 = (0xDFL >= (l_1208[0] ^= 0xC4L)));
                        g_51 = &g_1184;
                        l_1234 |= (l_1232 |= l_1208[2]);
                    }
                }
                for (g_155 = (-25); (g_155 >= 32); g_155 = safe_add_func_uint16_t_u_u(g_155, 5))
                {
                    char *l_1238 = &l_12;
                    const char *l_1240[10] = {&g_1111, &g_1241, &g_1111, &g_1241, &g_1111, &g_1241, &g_1111, &g_1241, &g_1111, &g_1241};
                    int l_1252 = 1L;
                    char *l_1257 = &g_15;
                    int i;
                    for (g_52 = 0; (g_52 <= 1); g_52 += 1)
                    {
                        const char **l_1239[4];
                        char *l_1243[1];
                        char **l_1244 = &l_1242;
                        const int l_1247 = 0L;
                        unsigned char *l_1259 = &g_1082;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_1239[i] = (void*)0;
                        for (i = 0; i < 1; i++)
                            l_1243[i] = &g_15;
                        g_1039 = (func_32(l_1237, l_1238, l_1243[0], ((*l_1244) = l_1242)) > (safe_mod_func_int8_t_s_s(l_1247, 0x52L)));
                        g_1039 = g_247;
                        if (l_1208[3])
                            continue;
                        l_1232 = ((safe_mod_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((l_1208[1] |= l_1252), (safe_mod_func_int8_t_s_s(0xE7L, g_511[4])))) && (((l_1228 <= (g_1260 = ((*l_1259) = (safe_unary_minus_func_uint16_t_u(func_32(func_22(l_1256), l_1218, l_1257, l_1258)))))) != 6L) > g_169[0][1][0])), g_155)) <= l_1185);
                    }
                    if (((void*)0 == l_1261))
                    {
                        unsigned l_1265 = 3UL;
                        l_1144[0] ^= (g_58[0][5] = ((++(**l_1261)) < l_1265));
                        if (g_1048[2])
                            continue;
                    }
                    else
                    {
                        l_1252 = (-9L);
                    }
                    for (g_492 = 0; (g_492 > 37); ++g_492)
                    {
                        unsigned *l_1268 = &g_1117;
                        int l_1273 = 0xBA94767CL;
                        g_58[0][5] |= l_1232;
                        if (g_1161[0])
                            break;
                        l_1273 = ((((*l_1268) |= (***g_624)) > (safe_lshift_func_uint16_t_u_u(0xB1E8L, (l_1124 & ((**l_1261)++))))) && g_52);
                        g_683 = g_1274;
                    }
                    if (l_1232)
                        break;
                }
            }
            else
            {
                char **l_1278 = &g_416[5];
                char *** const l_1277 = &l_1278;
                char *** const *l_1276[4][3] = {{&l_1277, &l_1277, &l_1277}, {&l_1277, &l_1277, &l_1277}, {&l_1277, &l_1277, &l_1277}, {&l_1277, &l_1277, &l_1277}};
                char *** const **l_1275 = &l_1276[2][1];
                unsigned char *l_1279[4][9][4] = {{{&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}}, {{&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}}, {{&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}}, {{&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}, {&g_155, &g_155, &g_1082, &g_155}}};
                unsigned short *l_1282[4] = {&g_943, (void*)0, &g_943, (void*)0};
                int l_1283 = 0x1627A2F1L;
                int l_1284 = 0x8B068AEEL;
                int *l_1285 = &l_1144[5];
                int *l_1286 = &g_1184;
                int *l_1287 = (void*)0;
                int *l_1288 = &g_1039;
                int *l_1289 = &l_1284;
                int *l_1290[3][9] = {{(void*)0, &l_1208[0], &g_58[0][2], &g_58[0][2], &l_1208[0], (void*)0, &l_1208[0], &g_58[0][2], &g_58[0][2]}, {(void*)0, &l_1208[0], &g_58[0][2], &g_58[0][2], &l_1208[0], (void*)0, &l_1208[0], &g_58[0][2], &g_58[0][2]}, {(void*)0, &l_1208[0], &g_58[0][2], &g_58[0][2], &l_1208[0], (void*)0, &l_1208[0], &g_58[0][2], &g_58[0][2]}};
                int i, j, k;
                g_58[0][2] = ((*l_1285) |= (!(((*g_861) != (l_1283 = ((((*l_1275) = &g_1130[0][5]) == &g_1130[3][4]) > (g_1082++)))) != (!l_1284))));
                l_1297--;
                (*l_1286) = ((void*)0 != (*l_1197));
                return l_1294;
            }
            for (l_1185 = 1; (l_1185 <= 4); l_1185 += 1)
            {
                int **l_1300 = &g_51;
                char * const * const l_1311 = &g_416[2];
                int l_1318 = 3L;
                unsigned l_1320 = 0x39FBA6B5L;
                int l_1322 = 0L;
                int l_1323 = 3L;
                int l_1324[3];
                const unsigned l_1334 = 18446744073709551615UL;
                unsigned l_1336 = 2UL;
                char *l_1339 = &l_12;
                int i;
                for (i = 0; i < 3; i++)
                    l_1324[i] = 0x09EA260EL;
                (*l_1300) = &g_52;
                if (l_1295)
                {
                    int l_1308 = 6L;
                    unsigned *l_1313 = &l_1309[0][0];
                    unsigned **l_1312 = &l_1313;
                    int *l_1319[5][4] = {{&g_58[0][4], &l_1124, &g_58[0][4], &l_1124}, {&g_58[0][4], &l_1124, &g_58[0][4], &l_1124}, {&g_58[0][4], &l_1124, &g_58[0][4], &l_1124}, {&g_58[0][4], &l_1124, &g_58[0][4], &l_1124}, {&g_58[0][4], &l_1124, &g_58[0][4], &l_1124}};
                    int i, j;
                    l_1310 = (func_6((safe_add_func_int32_t_s_s((*g_51), (((safe_sub_func_uint32_t_u_u(((*g_335) = (safe_lshift_func_uint16_t_u_u(((((((*l_1218) = ((**l_1300) == (((l_1225 || (((*g_51) != 0x6991E1B0L) != ((**l_1300) >= (g_1307 != g_1307)))) && (l_1308 >= 254UL)) && (*g_861)))) >= l_1144[5]) > (-1L)) ^ 0x56BAL) >= 0x814E7FC9L), (**g_860)))), l_1296[0])) & l_1174) == l_1124))), g_100) || l_1309[0][5]);
                    g_58[0][0] = ((((void*)0 == l_1311) < (&g_511[8] == ((*l_1312) = &g_492))) <= (safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(func_6(((*g_1223) = l_12), l_1292), 9)), l_1318)));
                    (*l_1300) = &g_1184;
                    (*g_51) = ((**l_1300) && (g_184 <= (((**g_1274) ^= 7UL) < l_1320)));
                }
                else
                {
                    int *l_1321[5][7] = {{&l_1295, &l_1144[1], &l_1232, &l_1232, &l_1144[1], &l_1295, &l_1144[1]}, {&l_1295, &l_1144[1], &l_1232, &l_1232, &l_1144[1], &l_1295, &l_1144[1]}, {&l_1295, &l_1144[1], &l_1232, &l_1232, &l_1144[1], &l_1295, &l_1144[1]}, {&l_1295, &l_1144[1], &l_1232, &l_1232, &l_1144[1], &l_1295, &l_1144[1]}, {&l_1295, &l_1144[1], &l_1232, &l_1232, &l_1144[1], &l_1295, &l_1144[1]}};
                    int i, j;
                    l_1328[6][1]--;
                    for (g_15 = 0; (g_15 <= 4); g_15 += 1)
                    {
                        unsigned l_1331 = 18446744073709551611UL;
                        ++l_1331;
                        return l_1334;
                    }
                    if ((safe_unary_minus_func_uint32_t_u((**g_683))))
                    {
                        (*g_51) = l_1336;
                    }
                    else
                    {
                        unsigned l_1342 = 0x27A47C79L;
                        unsigned char *l_1343 = &g_1082;
                        l_1296[2] |= (safe_sub_func_uint8_t_u_u(((*l_1343) ^= (((func_32(l_1339, l_1339, func_22(&l_1292), l_1339) != ((0x22B2L < (safe_lshift_func_int16_t_s_s(g_1048[0], l_1310))) >= l_1342)) != g_1260) || (**g_683))), 1L));
                        (*l_1300) = &g_1326[1][3][8];
                    }
                    return l_1328[4][2];
                }
                if ((*g_51))
                    continue;
                for (l_12 = 9; (l_12 >= 2); l_12 -= 1)
                {
                    unsigned short l_1355 = 0x7B8CL;
                    int l_1358[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1358[i] = (-7L);
                    for (g_388 = 0; (g_388 <= 9); g_388 += 1)
                    {
                        char *l_1344 = &g_388;
                        int *l_1347 = &l_1322;
                        const char **l_1349 = (void*)0;
                        const char *l_1351[9];
                        const char **l_1350 = &l_1351[3];
                        int i, j, k;
                        for (i = 0; i < 9; i++)
                            l_1351[i] = &g_1111;
                        if (g_1048[l_1185])
                            break;
                        g_1184 ^= func_32(l_1344, l_1339, l_1339, l_1344);
                    }
                    for (l_1292 = 3; (l_1292 >= 0); l_1292 -= 1)
                    {
                        short l_1352 = 0x330BL;
                        int *l_1353 = (void*)0;
                        int *l_1354[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1354[i] = (void*)0;
                        (*l_1300) = &g_58[0][4];
                        l_1355++;
                        --l_1360;
                        (*l_1300) = &l_1327;
                    }
                }
            }
            for (l_1297 = 1; (l_1297 <= 5); l_1297 += 1)
            {
                int *l_1363 = &g_52;
                unsigned short ***l_1364[7] = {&g_860, &g_860, &g_860, &g_860, &g_860, &g_860, &g_860};
                int l_1369 = (-1L);
                int l_1370 = 1L;
                char l_1371 = 0xF5L;
                int l_1372 = 0xBF6B091AL;
                int l_1373 = 0x82823045L;
                int l_1374 = 1L;
                int l_1375[9];
                unsigned char l_1391 = 0xF7L;
                short l_1406 = (-1L);
                int l_1410[1];
                int *l_1423 = &l_1374;
                int i;
                for (i = 0; i < 9; i++)
                    l_1375[i] = (-7L);
                for (i = 0; i < 1; i++)
                    l_1410[i] = 0x2057C151L;
            }
            for (l_1396 = 13; (l_1396 < 4); l_1396 = safe_sub_func_uint16_t_u_u(l_1396, 7))
            {
                for (l_1408 = 0; (l_1408 != (-8)); l_1408 = safe_sub_func_int16_t_s_s(l_1408, 2))
                {
                    int *l_1429 = &g_1184;
                    int *l_1430[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1430[i] = &g_1326[0][4][8];
                    (*l_1429) = 0x29920A75L;
                    --l_1431;
                }
            }
        }
        g_1326[0][4][8] &= ((((l_1124 = (l_1360 < l_1185)) | (0x97D8L && g_317[3])) < l_1407[0][4][0]) & (&l_1328[6][1] != (void*)0));
        l_1144[6] = 1L;
    }
    for (g_399 = 0; (g_399 == (-9)); g_399 = safe_sub_func_uint16_t_u_u(g_399, 2))
    {
        int *l_1438[10][2] = {{&l_1407[0][4][0], &g_52}, {&l_1407[0][4][0], &g_52}, {&l_1407[0][4][0], &g_52}, {&l_1407[0][4][0], &g_52}, {&l_1407[0][4][0], &g_52}, {&l_1407[0][4][0], &g_52}, {&l_1407[0][4][0], &g_52}, {&l_1407[0][4][0], &g_52}, {&l_1407[0][4][0], &g_52}, {&l_1407[0][4][0], &g_52}};
        char *l_1444 = &g_620;
        char **l_1446[6][5][7] = {{{&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}, {&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}, {&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}, {&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}, {&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}}, {{&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}, {&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}, {&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}, {&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}, {&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}}, {{&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}, {&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}, {&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}, {&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}, {&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}}, {{&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}, {&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}, {&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}, {&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}, {&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}}, {{&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}, {&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}, {&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}, {&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}, {&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}}, {{&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}, {&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}, {&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}, {&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}, {&g_416[9], &g_416[8], &l_1445, &l_1445, &g_416[2], &l_1445, (void*)0}}};
        int i, j, k;
        g_58[0][5] &= (+((1L != ((0xD6D29ABFL | (-1L)) || 0x1CL)) != (l_1325 < g_1437)));
        --l_1439;
        l_1407[3][4][1] = ((safe_lshift_func_uint16_t_u_u((*g_1223), (&l_12 != &l_12))) && ((g_1046 & (func_32(l_1444, (l_1447 = (l_1445 = l_1445)), &l_12, func_22(&l_12)) | l_1448)) < (**g_625)));
        for (g_1039 = 1; (g_1039 != 28); g_1039 = safe_add_func_uint16_t_u_u(g_1039, 9))
        {
            const char *l_1451 = &g_1437;
            const char *l_1452 = (void*)0;
            char *l_1453 = &l_12;
            int l_1459 = 0xE1E835BBL;
            int **l_1460[10] = {&l_1438[0][1], &l_1438[0][1], &l_1438[0][1], &l_1438[0][1], &l_1438[0][1], &l_1438[0][1], &l_1438[0][1], &l_1438[0][1], &l_1438[0][1], &l_1438[0][1]};
            int l_1461 = 0xDC5B3448L;
            int i;
            l_1144[5] &= (g_52 ^= (func_32(&l_12, func_37(l_1451, l_1453), l_1453, l_1454) & ((g_155 = (safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s(l_1459, 0UL)), g_15))) != l_1431)));
            g_51 = (void*)0;
            l_1464--;
            for (g_11 = 0; (g_11 > 29); g_11 = safe_add_func_uint8_t_u_u(g_11, 7))
            {
                int *l_1469 = &g_1184;
                int *l_1470 = &l_1459;
                g_51 = (l_1470 = l_1469);
            }
        }
    }
    (*l_1471) = g_1260;
    return (*l_1471);
}







static char func_6(unsigned short p_7, unsigned char p_8)
{
    int *l_1051 = &g_52;
    int l_1052 = 0xDC4DEEC2L;
    int *l_1053 = &g_58[0][5];
    int *l_1054 = &g_1039;
    int *l_1055[7] = {&g_58[0][1], &g_52, &g_58[0][1], &g_52, &g_58[0][1], &g_52, &g_58[0][1]};
    int l_1056 = 0x46D13DE9L;
    unsigned l_1057 = 4294967288UL;
    const char *l_1068[3];
    char *l_1069[2];
    char **l_1070 = &g_416[2];
    int l_1114 = (-1L);
    int i;
    for (i = 0; i < 3; i++)
        l_1068[i] = &g_15;
    for (i = 0; i < 2; i++)
        l_1069[i] = &g_388;
    l_1057++;
    (*l_1054) = (safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((((safe_rshift_func_uint16_t_u_u((*g_861), 9)) < (p_7 ^ (g_155 < g_695[0]))) > func_32(((*l_1070) = func_37(func_24((**g_683), (safe_add_func_int16_t_s_s(g_186, 0xC894L)), func_22(l_1068[2]), g_169[0][3][1], g_695[0]), l_1069[0])), &g_15, &g_15, &g_15)), (*l_1051))), g_169[0][3][1]));
    (*l_1053) = (~((safe_lshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(g_620, func_19(p_8, &g_620))), 0)) < g_1046));
    if ((*l_1054))
    {
        int *l_1075 = &g_52;
        int **l_1076 = &l_1055[6];
        int **l_1077 = &l_1054;
        const char *l_1110 = &g_1111;
        (*l_1077) = ((*l_1076) = l_1075);
        if ((*l_1075))
        {
            int l_1090 = (-9L);
            const char *l_1108 = &g_620;
            for (l_1056 = 6; (l_1056 >= 2); l_1056 -= 1)
            {
                (*l_1053) = (safe_add_func_int16_t_s_s(((p_8--) != (g_1082 |= p_7)), g_169[0][3][1]));
            }
            for (p_7 = 0; (p_7 == 42); ++p_7)
            {
                unsigned l_1087 = 0x58E5D45EL;
                unsigned *l_1095 = (void*)0;
                int l_1096 = 0xA947167FL;
                char * const l_1107 = &g_15;
            }
            (**l_1077) = 1L;
            (*l_1053) = 0x7679633BL;
        }
        else
        {
            (*l_1077) = &l_1052;
            (*l_1054) = (-6L);
        }
        (*l_1075) = ((g_1046 != 1UL) && p_8);
    }
    else
    {
        int l_1112 = (-9L);
        int l_1113 = 2L;
        int l_1115 = (-9L);
        int l_1116[8][9] = {{5L, 0x47F1DD4EL, (-3L), 0x47F1DD4EL, 5L, 0x47F1DD4EL, (-3L), 0x47F1DD4EL, 5L}, {5L, 0x47F1DD4EL, (-3L), 0x47F1DD4EL, 5L, 0x47F1DD4EL, (-3L), 0x47F1DD4EL, 5L}, {5L, 0x47F1DD4EL, (-3L), 0x47F1DD4EL, 5L, 0x47F1DD4EL, (-3L), 0x47F1DD4EL, 5L}, {5L, 0x47F1DD4EL, (-3L), 0x47F1DD4EL, 5L, 0x47F1DD4EL, (-3L), 0x47F1DD4EL, 5L}, {5L, 0x47F1DD4EL, (-3L), 0x47F1DD4EL, 5L, 0x47F1DD4EL, (-3L), 0x47F1DD4EL, 5L}, {5L, 0x47F1DD4EL, (-3L), 0x47F1DD4EL, 5L, 0x47F1DD4EL, (-3L), 0x47F1DD4EL, 5L}, {5L, 0x47F1DD4EL, (-3L), 0x47F1DD4EL, 5L, 0x47F1DD4EL, (-3L), 0x47F1DD4EL, 5L}, {5L, 0x47F1DD4EL, (-3L), 0x47F1DD4EL, 5L, 0x47F1DD4EL, (-3L), 0x47F1DD4EL, 5L}};
        int i, j;
        g_1117--;
    }
    return (*l_1053);
}







static unsigned short func_9(char p_10)
{
    char *l_14[1][3];
    int l_16[10][10][2] = {{{0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}}, {{0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}}, {{0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}}, {{0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}}, {{0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}}, {{0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}}, {{0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}}, {{0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}}, {{0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}}, {{0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}, {0xCEA445A8L, 0x8039D6B9L}}};
    char **l_46 = &l_14[0][2];
    int l_47 = 0x0AACC702L;
    const char *l_48 = &g_15;
    const char **l_258 = &l_48;
    char *l_291 = &g_15;
    int *l_1038 = &g_1039;
    int **l_1040 = &g_51;
    int **l_1041[8][4][8] = {{{&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}, {&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}, {&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}, {&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}}, {{&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}, {&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}, {&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}, {&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}}, {{&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}, {&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}, {&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}, {&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}}, {{&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}, {&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}, {&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}, {&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}}, {{&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}, {&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}, {&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}, {&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}}, {{&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}, {&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}, {&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}, {&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}}, {{&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}, {&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}, {&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}, {&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}}, {{&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}, {&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}, {&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}, {&l_1038, &l_1038, &l_1038, &l_1038, (void*)0, &l_1038, (void*)0, &l_1038}}};
    int *l_1042 = &g_58[0][5];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_14[i][j] = &g_15;
    }
    (*l_1038) ^= (safe_unary_minus_func_int32_t_s(((g_11 == (l_16[2][4][1] = 0x91L)) | (safe_rshift_func_uint16_t_u_u(func_19(g_15, ((*l_46) = func_22(func_24((((g_11 == (safe_lshift_func_int8_t_s_s(1L, (65535UL & ((+9UL) == func_32(func_37(((*l_258) = func_40(func_42(((*l_46) = l_14[0][0]), l_47, l_48))), &g_15), &g_15, l_291, &g_15)))))) < 0x92L) <= 0x37978E15L), l_47, &g_15, g_15, g_317[3])))), 2)))));
    (*l_1038) = (&p_10 != (void*)0);
    l_1042 = ((*l_1040) = &g_52);
    return (*g_861);
}







static unsigned short func_19(int p_20, char * p_21)
{
    unsigned char l_776 = 1UL;
    int *l_777 = &g_52;
    char *l_803 = &g_388;
    char *l_806[8][6] = {{(void*)0, (void*)0, (void*)0, &g_15, &g_388, &g_388}, {(void*)0, (void*)0, (void*)0, &g_15, &g_388, &g_388}, {(void*)0, (void*)0, (void*)0, &g_15, &g_388, &g_388}, {(void*)0, (void*)0, (void*)0, &g_15, &g_388, &g_388}, {(void*)0, (void*)0, (void*)0, &g_15, &g_388, &g_388}, {(void*)0, (void*)0, (void*)0, &g_15, &g_388, &g_388}, {(void*)0, (void*)0, (void*)0, &g_15, &g_388, &g_388}, {(void*)0, (void*)0, (void*)0, &g_15, &g_388, &g_388}};
    int l_810 = (-10L);
    int l_817 = (-4L);
    int l_820[7];
    unsigned * const *l_829 = &g_335;
    char l_836 = 6L;
    unsigned l_848[10];
    int l_942 = (-9L);
    unsigned l_1022 = 0UL;
    unsigned char l_1034[2];
    int i, j;
    for (i = 0; i < 7; i++)
        l_820[i] = (-6L);
    for (i = 0; i < 10; i++)
        l_848[i] = 0x9C90AD60L;
    for (i = 0; i < 2; i++)
        l_1034[i] = 1UL;
    if (((*l_777) = (safe_rshift_func_int8_t_s_s(((void*)0 != &g_695[0]), l_776))))
    {
        char l_778 = 0xEDL;
        char *l_792 = &g_620;
        char *l_802 = &g_15;
        const char *l_807 = (void*)0;
        int l_814 = 0x2DEC051AL;
        unsigned short *l_857 = &g_695[0];
        int l_868 = 0x0AA69BC9L;
        const char *l_915 = (void*)0;
        int l_930 = 0xA33BDF9DL;
        int l_935 = (-1L);
        int l_937 = 0x6F5BB49EL;
        int l_938 = (-1L);
        int l_939 = (-1L);
        int l_940 = 9L;
        int l_941 = 0x8162D522L;
        unsigned char l_985 = 250UL;
        int *l_1023 = &l_930;
        if (l_778)
        {
            char *l_785 = &g_15;
            short l_799 = 0x2017L;
            int l_818 = 9L;
            int l_821 = 0x46B89EDBL;
            unsigned l_822 = 1UL;
            char *l_839 = &g_620;
            if ((safe_rshift_func_int16_t_s_s((p_20 >= (g_155 = 0x77L)), p_20)))
            {
                (*l_777) = p_20;
            }
            else
            {
                char **l_781 = &g_416[2];
                const int l_784 = 0x52901869L;
                int l_793 = (-2L);
                unsigned *l_797 = &g_169[0][3][1];
                unsigned short **l_859 = (void*)0;
                int **l_878 = &l_777;
                if ((p_20 > func_32(((*l_781) = &g_388), p_21, p_21, func_37(&g_15, l_785))))
                {
                    int l_786 = 0xF77287CAL;
                    return l_786;
                }
                else
                {
                    const char *l_800[10];
                    int l_819 = 0xC67380CBL;
                    unsigned * const **l_830[1];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_800[i] = &g_15;
                    for (i = 0; i < 1; i++)
                        l_830[i] = &l_829;
                    if (((&g_58[0][4] == l_777) == (safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint32_t_u(l_778)), (l_793 = (safe_mul_func_uint32_t_u_u(l_778, (((((**g_683) &= (4294967295UL != l_784)) == func_32(p_21, l_792, &g_620, &g_15)) & (*l_777)) != 1UL))))))))
                    {
                        int *l_794 = &l_793;
                        int **l_798 = (void*)0;
                        (*l_794) |= (*l_777);
                        (*l_794) ^= (safe_rshift_func_uint16_t_u_s(((void*)0 != l_797), g_169[0][3][1]));
                        l_794 = &g_58[0][5];
                        return l_799;
                    }
                    else
                    {
                        char *l_801 = &l_778;
                        (*l_777) = ((l_799 | func_32(p_21, (l_792 = (void*)0), ((*l_781) = l_803), p_21)) || 0xF7A1L);
                    }
                    (*l_777) = g_317[3];
                    if (((safe_lshift_func_uint16_t_u_u(p_20, 15)) < (((**g_625) > func_32(l_806[7][2], &g_388, ((*l_781) = (*l_781)), &g_388)) <= (safe_lshift_func_int16_t_s_u(((~(g_11 && (*l_777))) > l_810), 10)))))
                    {
                        char l_811 = 1L;
                        int *l_812 = &l_793;
                        int *l_813 = &g_52;
                        int *l_815 = &g_58[0][5];
                        int *l_816[5][5] = {{(void*)0, &l_793, &l_793, &l_793, &l_793}, {(void*)0, &l_793, &l_793, &l_793, &l_793}, {(void*)0, &l_793, &l_793, &l_793, &l_793}, {(void*)0, &l_793, &l_793, &l_793, &l_793}, {(void*)0, &l_793, &l_793, &l_793, &l_793}};
                        int **l_825 = &l_813;
                        int i, j;
                        (*l_777) = (-3L);
                        --l_822;
                        (*l_825) = l_816[0][4];
                    }
                    else
                    {
                        char *l_826 = (void*)0;
                        const char **l_827 = &l_800[7];
                        int **l_828 = &l_777;
                        (*l_777) = ((0xB7L > (0xD243L < 9UL)) & func_32(l_826, &g_620, func_22(((*l_827) = l_803)), &g_388));
                        (*l_828) = (void*)0;
                    }
                    l_829 = l_829;
                }
                for (g_252 = 0; (g_252 >= 0); g_252 -= 1)
                {
                    int **l_831 = &g_51;
                    char *l_870 = &g_388;
                    int i;
                    (*l_831) = &l_820[g_252];
                    for (g_399 = 6; (g_399 >= 1); g_399 -= 1)
                    {
                        short *l_837 = &g_271;
                        char **l_838 = &l_806[7][2];
                        short *l_840 = &l_799;
                        int *l_841 = &l_818;
                        int *l_842 = (void*)0;
                        int *l_843 = &l_793;
                        int *l_844 = &l_817;
                        int *l_845 = &g_58[g_252][(g_252 + 4)];
                        int *l_846 = &l_820[0];
                        int *l_847[5][6] = {{&l_818, &l_821, &l_820[g_252], &l_820[0], (void*)0, &l_820[0]}, {&l_818, &l_821, &l_820[g_252], &l_820[0], (void*)0, &l_820[0]}, {&l_818, &l_821, &l_820[g_252], &l_820[0], (void*)0, &l_820[0]}, {&l_818, &l_821, &l_820[g_252], &l_820[0], (void*)0, &l_820[0]}, {&l_818, &l_821, &l_820[g_252], &l_820[0], (void*)0, &l_820[0]}};
                        int i, j;
                        g_58[g_252][(g_252 + 2)] = (safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((g_58[g_252][(g_252 + 4)] ^ (((g_58[g_252][(g_252 + 4)] | l_836) > ((*l_840) = (p_20 == (((*l_837) ^= l_818) <= (l_821 ^= func_32(&l_778, &g_620, ((*l_838) = ((*l_781) = p_21)), l_839)))))) || p_20)), (***g_624))), l_793));
                        l_848[3]--;
                    }
                    for (p_20 = 5; (p_20 == 24); p_20++)
                    {
                        unsigned short **l_858 = &l_857;
                        int l_864 = 0xA7ACABEBL;
                        short *l_867[8][8] = {{&g_399, &g_399, &g_399, &g_399, &g_399, &g_399, &g_399, &g_399}, {&g_399, &g_399, &g_399, &g_399, &g_399, &g_399, &g_399, &g_399}, {&g_399, &g_399, &g_399, &g_399, &g_399, &g_399, &g_399, &g_399}, {&g_399, &g_399, &g_399, &g_399, &g_399, &g_399, &g_399, &g_399}, {&g_399, &g_399, &g_399, &g_399, &g_399, &g_399, &g_399, &g_399}, {&g_399, &g_399, &g_399, &g_399, &g_399, &g_399, &g_399, &g_399}, {&g_399, &g_399, &g_399, &g_399, &g_399, &g_399, &g_399, &g_399}, {&g_399, &g_399, &g_399, &g_399, &g_399, &g_399, &g_399, &g_399}};
                        unsigned *l_869 = &g_492;
                        int *l_871 = &l_817;
                        int i, j;
                        l_864 = ((safe_add_func_uint32_t_u_u(((**l_829) = (safe_sub_func_uint8_t_u_u((((**g_860) = ((((*l_858) = l_857) != (void*)0) && (l_859 != g_860))) == 0x4B25L), p_20))), 0x8530F2E2L)) < (p_20 && (safe_mod_func_uint8_t_u_u(7UL, l_784))));
                        (*l_871) = func_32(func_37(func_24(p_20, ((*l_869) ^= (l_814 | (~(((func_32(func_22(l_839), &g_388, p_21, l_785) & (l_868 = (((safe_lshift_func_int16_t_s_u(p_20, 4)) && (*g_861)) != 0xA3ACL))) ^ g_511[3]) > (-3L))))), &g_388, g_620, g_695[3]), l_839), l_870, &g_15, l_839);
                        (*l_831) = &l_864;
                        l_821 |= (*g_51);
                    }
                }
                for (g_186 = 2; (g_186 <= 9); g_186 += 1)
                {
                    int *l_872 = (void*)0;
                    int *l_873 = &l_793;
                    int *l_874[5];
                    unsigned char l_875 = 0x12L;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_874[i] = &g_58[0][5];
                    ++l_875;
                }
                (*l_878) = &g_58[0][5];
            }
        }
        else
        {
            int **l_879 = &l_777;
            char *l_890 = &l_836;
            unsigned short l_912 = 7UL;
            int l_924 = 0xA06C304FL;
            int l_931 = 0x084129ABL;
            int l_932 = 0xFE597224L;
            int l_933 = 0L;
            int l_934 = 0x2A7DBEF1L;
            int l_936[2];
            unsigned short l_971[2];
            unsigned char **l_1004 = (void*)0;
            int i;
            for (i = 0; i < 2; i++)
                l_936[i] = 1L;
            for (i = 0; i < 2; i++)
                l_971[i] = 0x56D2L;
            (*l_879) = &l_820[2];
            for (p_20 = (-4); (p_20 < 13); p_20 = safe_add_func_int32_t_s_s(p_20, 5))
            {
                int *l_916 = &l_814;
                int l_921 = 0xFD3849CBL;
                int l_922 = (-1L);
                int l_925 = 0x46A4CC45L;
                int l_926[3][10][2] = {{{0x2FD77983L, 0x84E07378L}, {0x2FD77983L, 0x84E07378L}, {0x2FD77983L, 0x84E07378L}, {0x2FD77983L, 0x84E07378L}, {0x2FD77983L, 0x84E07378L}, {0x2FD77983L, 0x84E07378L}, {0x2FD77983L, 0x84E07378L}, {0x2FD77983L, 0x84E07378L}, {0x2FD77983L, 0x84E07378L}, {0x2FD77983L, 0x84E07378L}}, {{0x2FD77983L, 0x84E07378L}, {0x2FD77983L, 0x84E07378L}, {0x2FD77983L, 0x84E07378L}, {0x2FD77983L, 0x84E07378L}, {0x2FD77983L, 0x84E07378L}, {0x2FD77983L, 0x84E07378L}, {0x2FD77983L, 0x84E07378L}, {0x2FD77983L, 0x84E07378L}, {0x2FD77983L, 0x84E07378L}, {0x2FD77983L, 0x84E07378L}}, {{0x2FD77983L, 0x84E07378L}, {0x2FD77983L, 0x84E07378L}, {0x2FD77983L, 0x84E07378L}, {0x2FD77983L, 0x84E07378L}, {0x2FD77983L, 0x84E07378L}, {0x2FD77983L, 0x84E07378L}, {0x2FD77983L, 0x84E07378L}, {0x2FD77983L, 0x84E07378L}, {0x2FD77983L, 0x84E07378L}, {0x2FD77983L, 0x84E07378L}}};
                unsigned char *l_948 = &g_155;
                unsigned short l_979[4] = {65530UL, 0xBF7CL, 65530UL, 0xBF7CL};
                unsigned char l_1001 = 0x95L;
                int i, j, k;
                for (l_778 = 24; (l_778 != (-4)); --l_778)
                {
                    char *l_891 = (void*)0;
                    int l_923 = 0xB449751DL;
                    int l_927 = 0x186774D5L;
                    int l_928 = 0x3AD641A8L;
                    int l_929[1][8] = {{1L, 0x31ADED02L, 1L, 0x31ADED02L, 1L, 0x31ADED02L, 1L, 0x31ADED02L}};
                    unsigned char **l_949 = &l_948;
                    short *l_954 = (void*)0;
                    char **l_961 = &g_416[2];
                    int i, j;
                    if (func_32(p_21, func_37(func_24(((0x8BL && 0x7FL) == ((**g_860) = (safe_rshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((p_20 == ((*l_802) = func_32(p_21, l_890, p_21, &l_778))), g_169[0][3][1])), 0x6ED5L)), 2)))), p_20, &l_836, g_511[6], p_20), p_21), l_891, l_891))
                    {
                        int *l_902 = &l_817;
                        (*l_902) ^= (safe_rshift_func_uint16_t_u_u(((*l_857)--), (((l_814 && (safe_sub_func_int16_t_s_s((p_20 != (*l_777)), (**l_879)))) & (((**l_879) || (safe_lshift_func_int16_t_s_s((!func_32(func_37(l_890, &g_388), p_21, &g_620, &g_388)), 0))) >= 8L)) == 0UL)));
                    }
                    else
                    {
                        unsigned short l_903 = 0x9AA8L;
                        (*l_879) = &g_58[0][5];
                        l_903 &= (&l_820[3] != (void*)0);
                    }
                    if ((safe_add_func_uint8_t_u_u(0xECL, ((((safe_add_func_uint8_t_u_u(l_868, (safe_sub_func_int32_t_s_s(0xA84BDF7BL, (p_20 >= (0xC7DFCBD9L & (0x0A31L == (safe_mod_func_uint8_t_u_u(l_912, 250UL))))))))) < ((safe_sub_func_int8_t_s_s(((**g_624) != (*g_625)), (*l_777))) && 255UL)) || 255UL) == (**l_879)))))
                    {
                        (*l_879) = &g_52;
                    }
                    else
                    {
                        int *l_917 = &l_820[3];
                        int *l_918 = &l_820[4];
                        int *l_919 = (void*)0;
                        int *l_920[8] = {&g_52, &g_52, &l_820[0], &g_52, &g_52, &l_820[0], &g_52, &g_52};
                        int i;
                        (*l_777) |= func_32(&g_388, &g_620, p_21, &g_388);
                        (*l_879) = l_916;
                        ++g_943;
                    }
                    (*l_879) = &l_939;
                    (*l_916) ^= (safe_rshift_func_uint8_t_u_u((l_941 & ((*l_803) = (((&g_155 == ((*l_949) = l_948)) && (safe_sub_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s((g_271 = p_20), ((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((void*)0 == l_879), func_32(((*l_961) = p_21), &g_15, p_21, &g_620))), p_20)), 0xB4C034E7L)) && g_943))) < p_20), p_20))) && l_940))), l_929[0][3]));
                }
                if (p_20)
                {
                    unsigned l_969 = 1UL;
                    int l_976 = 0x055773C3L;
                    int *l_982 = &l_868;
                    int *l_983 = &l_932;
                    int *l_984[8] = {&l_936[0], &l_936[0], &l_921, &l_936[0], &l_936[0], &l_921, &l_936[0], &l_936[0]};
                    int i;
                    if (p_20)
                    {
                        return p_20;
                    }
                    else
                    {
                        char **l_966 = &l_803;
                        char ***l_970 = &l_966;
                        int *l_974 = (void*)0;
                        int *l_975 = &l_820[2];
                        int *l_977 = &l_941;
                        int *l_978[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_978[i] = &l_940;
                        (*l_916) |= (((safe_add_func_uint8_t_u_u(((*l_948) = 0xFEL), (((safe_mod_func_uint16_t_u_u(func_32(func_22(&g_15), &l_778, &g_620, ((*l_966) = &g_388)), (**g_860))) ^ (safe_rshift_func_int8_t_s_s(l_969, p_20))) == g_492))) <= l_938) >= (**l_879));
                        (*l_970) = &p_21;
                        l_971[1]++;
                        l_979[2]--;
                    }
                    --l_985;
                }
                else
                {
                    int *l_988 = &l_926[1][6][1];
                    int l_989[2][5] = {{5L, (-8L), 5L, (-8L), 5L}, {5L, (-8L), 5L, (-8L), 5L}};
                    int *l_990 = &l_989[1][4];
                    int *l_991 = &l_925;
                    int *l_992 = &l_941;
                    int *l_993 = (void*)0;
                    int *l_994 = &l_817;
                    int *l_995 = &l_925;
                    int *l_996 = &l_931;
                    int *l_997 = &l_930;
                    int *l_998[1][4];
                    short l_999 = 0xE026L;
                    char l_1000 = (-5L);
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_998[i][j] = &l_989[1][4];
                    }
                    ++l_1001;
                    (*l_997) = ((void*)0 == l_1004);
                    for (l_924 = 25; (l_924 <= 7); --l_924)
                    {
                        (*l_997) = (safe_unary_minus_func_uint32_t_u(((**g_683) = 0xCC9D1DDAL)));
                        (*l_991) |= 0x6C9D9DA2L;
                    }
                }
            }
            for (g_252 = 0; (g_252 == 25); g_252++)
            {
                return p_20;
            }
            return p_20;
        }
        for (l_868 = 0; (l_868 <= 6); l_868 += 1)
        {
            unsigned char *l_1010[6][3][7] = {{{&l_776, &l_985, (void*)0, &g_155, &g_155, &l_985, &l_985}, {&l_776, &l_985, (void*)0, &g_155, &g_155, &l_985, &l_985}, {&l_776, &l_985, (void*)0, &g_155, &g_155, &l_985, &l_985}}, {{&l_776, &l_985, (void*)0, &g_155, &g_155, &l_985, &l_985}, {&l_776, &l_985, (void*)0, &g_155, &g_155, &l_985, &l_985}, {&l_776, &l_985, (void*)0, &g_155, &g_155, &l_985, &l_985}}, {{&l_776, &l_985, (void*)0, &g_155, &g_155, &l_985, &l_985}, {&l_776, &l_985, (void*)0, &g_155, &g_155, &l_985, &l_985}, {&l_776, &l_985, (void*)0, &g_155, &g_155, &l_985, &l_985}}, {{&l_776, &l_985, (void*)0, &g_155, &g_155, &l_985, &l_985}, {&l_776, &l_985, (void*)0, &g_155, &g_155, &l_985, &l_985}, {&l_776, &l_985, (void*)0, &g_155, &g_155, &l_985, &l_985}}, {{&l_776, &l_985, (void*)0, &g_155, &g_155, &l_985, &l_985}, {&l_776, &l_985, (void*)0, &g_155, &g_155, &l_985, &l_985}, {&l_776, &l_985, (void*)0, &g_155, &g_155, &l_985, &l_985}}, {{&l_776, &l_985, (void*)0, &g_155, &g_155, &l_985, &l_985}, {&l_776, &l_985, (void*)0, &g_155, &g_155, &l_985, &l_985}, {&l_776, &l_985, (void*)0, &g_155, &g_155, &l_985, &l_985}}};
            char **l_1019 = &g_416[2];
            char ***l_1020 = &l_1019;
            int i, j, k;
            for (g_247 = 2; (g_247 <= 6); g_247 += 1)
            {
                int i;
                return l_848[g_247];
            }
            l_820[l_868] = ((((g_155 = 0x7FL) & ((l_820[l_868] > (safe_lshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((p_20 != 0x156A5122L) & (safe_lshift_func_int16_t_s_s((((*l_1020) = l_1019) == &g_416[5]), 4))), 0x29A6L)), (safe_unary_minus_func_int16_t_s((l_937 < 0xD4L))))), 10))) < 0L)) && l_820[l_868]) || g_252);
            return l_1022;
        }
        l_777 = (l_1023 = &l_930);
    }
    else
    {
        char l_1027 = 0x69L;
        int l_1037 = 0L;
        for (g_15 = 9; (g_15 <= 7); --g_15)
        {
            int *l_1026 = &g_58[0][5];
            (*l_1026) &= (*l_777);
            return l_1027;
        }
        for (g_15 = (-23); (g_15 < 18); g_15 = safe_add_func_int16_t_s_s(g_15, 9))
        {
            return p_20;
        }
        for (g_155 = 23; (g_155 != 34); g_155 = safe_add_func_uint8_t_u_u(g_155, 7))
        {
            const int l_1035 = (-1L);
            int *l_1036[4][4] = {{&g_58[0][5], (void*)0, &g_58[0][3], (void*)0}, {&g_58[0][5], (void*)0, &g_58[0][3], (void*)0}, {&g_58[0][5], (void*)0, &g_58[0][3], (void*)0}, {&g_58[0][5], (void*)0, &g_58[0][3], (void*)0}};
            int i, j;
            g_58[0][1] &= ((*l_777) > (safe_lshift_func_uint8_t_u_u((p_20 != p_20), 0)));
            l_1037 |= (l_1034[1] || (l_1035 <= (*l_777)));
            (*l_777) &= (l_1037 = l_1037);
        }
    }
    return (**g_860);
}







static char * func_22(const char * p_23)
{
    char *l_765[6][9] = {{(void*)0, &g_620, &g_388, &g_388, &g_620, &g_15, &g_620, &g_388, &g_388}, {(void*)0, &g_620, &g_388, &g_388, &g_620, &g_15, &g_620, &g_388, &g_388}, {(void*)0, &g_620, &g_388, &g_388, &g_620, &g_15, &g_620, &g_388, &g_388}, {(void*)0, &g_620, &g_388, &g_388, &g_620, &g_15, &g_620, &g_388, &g_388}, {(void*)0, &g_620, &g_388, &g_388, &g_620, &g_15, &g_620, &g_388, &g_388}, {(void*)0, &g_620, &g_388, &g_388, &g_620, &g_15, &g_620, &g_388, &g_388}};
    int l_766[2];
    int *l_767 = &g_58[0][5];
    int *l_768 = (void*)0;
    int *l_769 = &g_52;
    int *l_770[9][7] = {{&g_58[0][2], &g_58[0][2], &l_766[0], &g_58[0][5], &g_58[0][1], &g_58[0][5], &l_766[0]}, {&g_58[0][2], &g_58[0][2], &l_766[0], &g_58[0][5], &g_58[0][1], &g_58[0][5], &l_766[0]}, {&g_58[0][2], &g_58[0][2], &l_766[0], &g_58[0][5], &g_58[0][1], &g_58[0][5], &l_766[0]}, {&g_58[0][2], &g_58[0][2], &l_766[0], &g_58[0][5], &g_58[0][1], &g_58[0][5], &l_766[0]}, {&g_58[0][2], &g_58[0][2], &l_766[0], &g_58[0][5], &g_58[0][1], &g_58[0][5], &l_766[0]}, {&g_58[0][2], &g_58[0][2], &l_766[0], &g_58[0][5], &g_58[0][1], &g_58[0][5], &l_766[0]}, {&g_58[0][2], &g_58[0][2], &l_766[0], &g_58[0][5], &g_58[0][1], &g_58[0][5], &l_766[0]}, {&g_58[0][2], &g_58[0][2], &l_766[0], &g_58[0][5], &g_58[0][1], &g_58[0][5], &l_766[0]}, {&g_58[0][2], &g_58[0][2], &l_766[0], &g_58[0][5], &g_58[0][1], &g_58[0][5], &l_766[0]}};
    unsigned short l_771 = 65535UL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_766[i] = 0x42DFED0DL;
    (*l_767) = ((((65527UL ^ 0x0562L) >= ((safe_add_func_uint32_t_u_u(0x94E2653AL, (safe_lshift_func_uint16_t_u_u((func_32(l_765[0][7], func_37(p_23, l_765[0][7]), l_765[2][1], l_765[3][6]) < l_766[0]), g_184)))) && l_766[0])) <= (*g_335)) < (*p_23));
    l_771--;
    return l_765[0][7];
}







static const char * func_24(unsigned p_25, unsigned p_26, char * p_27, unsigned char p_28, const unsigned p_29)
{
    unsigned short l_757 = 0x8ADBL;
    int *l_758[4] = {&g_58[0][1], &g_52, &g_58[0][1], &g_52};
    short l_759 = (-6L);
    int **l_760[1][9] = {{&l_758[1], &l_758[1], &l_758[1], &l_758[1], &l_758[1], &l_758[1], &l_758[1], &l_758[1], &l_758[1]}};
    int i, j;
    l_759 = l_757;
    g_51 = l_758[1];
    return &g_388;
}







static unsigned short func_32(char * p_33, char * p_34, char * p_35, char * p_36)
{
    char *l_294 = (void*)0;
    int l_305[8] = {0x76B11A29L, (-8L), 0x76B11A29L, (-8L), 0x76B11A29L, (-8L), 0x76B11A29L, (-8L)};
    unsigned *l_313 = (void*)0;
    int l_323 = 0x5DAECA4EL;
    unsigned short *l_554[10] = {&g_184, &g_184, &g_186, &g_184, &g_184, &g_186, &g_184, &g_184, &g_186, &g_184};
    int l_586[4];
    unsigned char *l_734 = &g_155;
    unsigned char ** const l_733[3] = {&l_734, &l_734, &l_734};
    unsigned char l_753 = 0xB7L;
    int **l_756[10][9][2] = {{{&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}}, {{&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}}, {{&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}}, {{&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}}, {{&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}}, {{&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}}, {{&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}}, {{&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}}, {{&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}}, {{&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}, {&g_51, &g_51}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_586[i] = 0xD29837E1L;
    for (g_100 = (-20); (g_100 != 23); g_100 = safe_add_func_uint8_t_u_u(g_100, 9))
    {
        unsigned short l_300 = 0xA861L;
        int l_354[1][7] = {{0x875F6C4FL, 0xB9B0AA2AL, 0x875F6C4FL, 0xB9B0AA2AL, 0x875F6C4FL, 0xB9B0AA2AL, 0x875F6C4FL}};
        int l_362 = 0x6AF8636EL;
        unsigned l_363 = 0UL;
        char *l_411[3];
        int l_428 = 0x6730379DL;
        int l_430 = 0xF9A72F8EL;
        int l_432[3][10] = {{0x5AFDD2CEL, 0x5AFDD2CEL, 0x5181354AL, 7L, 0xC522FA9AL, 7L, 0x5181354AL, 0x5AFDD2CEL, 0x5AFDD2CEL, 0x5181354AL}, {0x5AFDD2CEL, 0x5AFDD2CEL, 0x5181354AL, 7L, 0xC522FA9AL, 7L, 0x5181354AL, 0x5AFDD2CEL, 0x5AFDD2CEL, 0x5181354AL}, {0x5AFDD2CEL, 0x5AFDD2CEL, 0x5181354AL, 7L, 0xC522FA9AL, 7L, 0x5181354AL, 0x5AFDD2CEL, 0x5AFDD2CEL, 0x5181354AL}};
        unsigned l_445 = 1UL;
        unsigned **l_501 = (void*)0;
        int i, j;
        for (i = 0; i < 3; i++)
            l_411[i] = &g_388;
    }
    for (g_247 = 0; (g_247 >= (-11)); g_247 = safe_sub_func_int32_t_s_s(g_247, 9))
    {
        unsigned l_524 = 0UL;
        int *l_538 = (void*)0;
        int l_583[8][6] = {{0x7F29489EL, 0x0580031BL, 0x0F293AE3L, 0x0580031BL, 0x7F29489EL, 3L}, {0x7F29489EL, 0x0580031BL, 0x0F293AE3L, 0x0580031BL, 0x7F29489EL, 3L}, {0x7F29489EL, 0x0580031BL, 0x0F293AE3L, 0x0580031BL, 0x7F29489EL, 3L}, {0x7F29489EL, 0x0580031BL, 0x0F293AE3L, 0x0580031BL, 0x7F29489EL, 3L}, {0x7F29489EL, 0x0580031BL, 0x0F293AE3L, 0x0580031BL, 0x7F29489EL, 3L}, {0x7F29489EL, 0x0580031BL, 0x0F293AE3L, 0x0580031BL, 0x7F29489EL, 3L}, {0x7F29489EL, 0x0580031BL, 0x0F293AE3L, 0x0580031BL, 0x7F29489EL, 3L}, {0x7F29489EL, 0x0580031BL, 0x0F293AE3L, 0x0580031BL, 0x7F29489EL, 3L}};
        int l_588 = 0x69DCD2E4L;
        char ** const l_604 = &g_416[2];
        short l_605 = (-7L);
        short l_704 = (-10L);
        unsigned char **l_736 = &l_734;
        unsigned char ***l_735 = &l_736;
        int **l_737 = &g_51;
        unsigned char l_748[5] = {0x69L, 0x62L, 0x69L, 0x62L, 0x69L};
        int i, j;
    }
    l_753++;
    g_51 = &l_323;
    return g_184;
}







static char * func_37(const char * p_38, char * p_39)
{
    unsigned short l_261 = 0x1279L;
    short *l_270 = &g_271;
    int *l_283 = &g_58[0][5];
    int **l_290 = &g_51;
    if ((safe_sub_func_int8_t_s_s(l_261, (safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s(((*l_270) ^= g_15), ((*p_38) | g_252))) ^ (safe_mod_func_int8_t_s_s(0x7EL, ((0x98E7L ^ (g_11 || 0x7FC2DDF0L)) ^ g_169[0][3][1])))), l_261)), 0x382C1A4AL)), l_261)))))
    {
        int *l_274 = (void*)0;
        int *l_275 = (void*)0;
        int *l_276 = &g_58[0][1];
        int *l_277 = &g_52;
        int *l_278 = &g_52;
        int l_279 = 4L;
        unsigned l_280 = 0x96208DF7L;
        int **l_284 = &l_283;
        ++l_280;
        (*l_284) = (l_275 = l_283);
        (*l_284) = (*l_284);
    }
    else
    {
        int l_285[6];
        int i;
        for (i = 0; i < 6; i++)
            l_285[i] = 0x20971DEBL;
        l_285[1] = 0xC7A0417FL;
    }
    for (g_247 = 0; (g_247 == 5); ++g_247)
    {
        unsigned char l_288 = 2UL;
        int l_289[6] = {0x47BBFC8BL, 0x47BBFC8BL, 8L, 0x47BBFC8BL, 0x47BBFC8BL, 8L};
        int i;
        (*l_283) = 0x9E3A60C0L;
        l_289[3] = l_288;
    }
    (*l_290) = l_283;
    return p_39;
}







static const char * func_40(char * p_41)
{
    unsigned short l_190 = 0xE7E6L;
    int l_191[4] = {0x143DF592L, 5L, 0x143DF592L, 5L};
    char l_209 = (-4L);
    unsigned char l_239 = 0x29L;
    unsigned char *l_244[4] = {&l_239, &g_155, &l_239, &g_155};
    int *l_255[9] = {&l_191[1], &g_58[0][3], &l_191[1], &g_58[0][3], &l_191[1], &g_58[0][3], &l_191[1], &g_58[0][3], &l_191[1]};
    int *l_256 = (void*)0;
    int **l_257 = &g_51;
    int i;
    for (g_155 = 15; (g_155 >= 15); g_155 = safe_add_func_uint32_t_u_u(g_155, 1))
    {
        int l_177 = (-10L);
        int l_203 = 0x9CA1E323L;
        int l_204 = (-1L);
        int l_205 = 0L;
        int l_210 = 0x50FDD930L;
        int l_231 = 6L;
        int l_232 = 0L;
        int l_233 = (-10L);
        int l_234 = 1L;
        int l_235 = 0x112D99C4L;
        int l_236 = 4L;
        int l_237 = 0L;
        int l_238 = (-5L);
        if (l_177)
        {
            unsigned *l_180 = &g_169[0][0][0];
            int l_187 = 0L;
            short l_197 = 0xD5E7L;
            int l_202 = 0x62B3BEA0L;
            int l_206[2];
            unsigned l_213 = 0xB818E0E8L;
            int i;
            for (i = 0; i < 2; i++)
                l_206[i] = (-5L);
            for (g_100 = 0; (g_100 > 48); g_100++)
            {
                unsigned short *l_183 = &g_184;
                unsigned short *l_185[5][5][3] = {{{&g_186, &g_186, &g_186}, {&g_186, &g_186, &g_186}, {&g_186, &g_186, &g_186}, {&g_186, &g_186, &g_186}, {&g_186, &g_186, &g_186}}, {{&g_186, &g_186, &g_186}, {&g_186, &g_186, &g_186}, {&g_186, &g_186, &g_186}, {&g_186, &g_186, &g_186}, {&g_186, &g_186, &g_186}}, {{&g_186, &g_186, &g_186}, {&g_186, &g_186, &g_186}, {&g_186, &g_186, &g_186}, {&g_186, &g_186, &g_186}, {&g_186, &g_186, &g_186}}, {{&g_186, &g_186, &g_186}, {&g_186, &g_186, &g_186}, {&g_186, &g_186, &g_186}, {&g_186, &g_186, &g_186}, {&g_186, &g_186, &g_186}}, {{&g_186, &g_186, &g_186}, {&g_186, &g_186, &g_186}, {&g_186, &g_186, &g_186}, {&g_186, &g_186, &g_186}, {&g_186, &g_186, &g_186}}};
                int l_194 = 0x7DEF9FA0L;
                int *l_198 = &l_177;
                unsigned char l_199 = 0UL;
                int l_207 = 0xDF4C687CL;
                int l_208[3];
                int l_211[8] = {0x6F84D04EL, (-8L), 0x6F84D04EL, (-8L), 0x6F84D04EL, (-8L), 0x6F84D04EL, (-8L)};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_208[i] = 0L;
                (*l_198) = ((l_180 == &g_169[0][3][1]) >= ((safe_add_func_uint8_t_u_u((((l_187 ^= ((*l_183) = 65535UL)) != (l_191[0] = (safe_rshift_func_uint8_t_u_s(l_190, 3)))) || (l_187 < ((*l_180) = (safe_add_func_int16_t_s_s(l_190, (l_191[0] ^ l_194)))))), (safe_lshift_func_uint8_t_u_u(g_186, l_197)))) || 3UL));
                for (l_194 = 0; l_194 < 1; l_194 += 1)
                {
                    for (g_186 = 0; g_186 < 6; g_186 += 1)
                    {
                        g_58[l_194][g_186] = 0xFB77FFA9L;
                    }
                }
                if (l_199)
                {
                    int l_200 = 6L;
                    int *l_201[3];
                    char l_212[3][2];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_201[i] = &g_58[0][5];
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_212[i][j] = 2L;
                    }
                    l_213++;
                }
                else
                {
                    for (l_202 = 15; (l_202 >= (-8)); l_202 = safe_sub_func_int16_t_s_s(l_202, 9))
                    {
                        int **l_218 = &g_51;
                        (*l_218) = &l_204;
                        (*g_51) ^= (safe_lshift_func_uint16_t_u_u(65535UL, 14));
                    }
                }
            }
            return p_41;
        }
        else
        {
            int *l_221 = &l_204;
            int l_222 = 0x9FAC3A7EL;
            int *l_223 = &l_210;
            int *l_224 = &l_191[0];
            int *l_225 = (void*)0;
            int *l_226 = &l_191[0];
            int *l_227 = &g_52;
            int *l_228 = &l_177;
            int *l_229 = &l_177;
            int *l_230[8][3][8] = {{{&g_58[0][5], (void*)0, &l_177, &g_52, &l_222, &g_58[0][4], &g_58[0][5], (void*)0}, {&g_58[0][5], (void*)0, &l_177, &g_52, &l_222, &g_58[0][4], &g_58[0][5], (void*)0}, {&g_58[0][5], (void*)0, &l_177, &g_52, &l_222, &g_58[0][4], &g_58[0][5], (void*)0}}, {{&g_58[0][5], (void*)0, &l_177, &g_52, &l_222, &g_58[0][4], &g_58[0][5], (void*)0}, {&g_58[0][5], (void*)0, &l_177, &g_52, &l_222, &g_58[0][4], &g_58[0][5], (void*)0}, {&g_58[0][5], (void*)0, &l_177, &g_52, &l_222, &g_58[0][4], &g_58[0][5], (void*)0}}, {{&g_58[0][5], (void*)0, &l_177, &g_52, &l_222, &g_58[0][4], &g_58[0][5], (void*)0}, {&g_58[0][5], (void*)0, &l_177, &g_52, &l_222, &g_58[0][4], &g_58[0][5], (void*)0}, {&g_58[0][5], (void*)0, &l_177, &g_52, &l_222, &g_58[0][4], &g_58[0][5], (void*)0}}, {{&g_58[0][5], (void*)0, &l_177, &g_52, &l_222, &g_58[0][4], &g_58[0][5], (void*)0}, {&g_58[0][5], (void*)0, &l_177, &g_52, &l_222, &g_58[0][4], &g_58[0][5], (void*)0}, {&g_58[0][5], (void*)0, &l_177, &g_52, &l_222, &g_58[0][4], &g_58[0][5], (void*)0}}, {{&g_58[0][5], (void*)0, &l_177, &g_52, &l_222, &g_58[0][4], &g_58[0][5], (void*)0}, {&g_58[0][5], (void*)0, &l_177, &g_52, &l_222, &g_58[0][4], &g_58[0][5], (void*)0}, {&g_58[0][5], (void*)0, &l_177, &g_52, &l_222, &g_58[0][4], &g_58[0][5], (void*)0}}, {{&g_58[0][5], (void*)0, &l_177, &g_52, &l_222, &g_58[0][4], &g_58[0][5], (void*)0}, {&g_58[0][5], (void*)0, &l_177, &g_52, &l_222, &g_58[0][4], &g_58[0][5], (void*)0}, {&g_58[0][5], (void*)0, &l_177, &g_52, &l_222, &g_58[0][4], &g_58[0][5], (void*)0}}, {{&g_58[0][5], (void*)0, &l_177, &g_52, &l_222, &g_58[0][4], &g_58[0][5], (void*)0}, {&g_58[0][5], (void*)0, &l_177, &g_52, &l_222, &g_58[0][4], &g_58[0][5], (void*)0}, {&g_58[0][5], (void*)0, &l_177, &g_52, &l_222, &g_58[0][4], &g_58[0][5], (void*)0}}, {{&g_58[0][5], (void*)0, &l_177, &g_52, &l_222, &g_58[0][4], &g_58[0][5], (void*)0}, {&g_58[0][5], (void*)0, &l_177, &g_52, &l_222, &g_58[0][4], &g_58[0][5], (void*)0}, {&g_58[0][5], (void*)0, &l_177, &g_52, &l_222, &g_58[0][4], &g_58[0][5], (void*)0}}};
            int i, j, k;
            l_191[2] ^= (g_155 < (&p_41 != &p_41));
            (*l_221) |= l_191[3];
            --l_239;
        }
    }
    g_58[0][5] ^= ((safe_lshift_func_uint16_t_u_s(((0UL != (((++g_155) >= g_184) & (g_247 |= g_186))) || (g_252 = ((((6L < (safe_rshift_func_int8_t_s_u((*p_41), 2))) ^ ((((safe_sub_func_int8_t_s_s((l_191[0] = g_155), l_190)) && 4L) >= l_209) <= l_190)) ^ 0L) & l_209))), l_209)) | (*p_41));
    g_58[0][5] ^= (safe_rshift_func_int16_t_s_s(l_191[0], 5));
    (*l_257) = l_256;
    return p_41;
}







static char * func_42(char * p_43, unsigned char p_44, const char * p_45)
{
    int l_67 = 0x4A13735CL;
    int l_68 = 0x309CE07BL;
    int l_70[9];
    unsigned short *l_99 = &g_100;
    unsigned l_109 = 0x8DF31DCFL;
    int **l_170[4][10] = {{(void*)0, (void*)0, &g_51, &g_51, (void*)0, &g_51, (void*)0, &g_51, &g_51, (void*)0}, {(void*)0, (void*)0, &g_51, &g_51, (void*)0, &g_51, (void*)0, &g_51, &g_51, (void*)0}, {(void*)0, (void*)0, &g_51, &g_51, (void*)0, &g_51, (void*)0, &g_51, &g_51, (void*)0}, {(void*)0, (void*)0, &g_51, &g_51, (void*)0, &g_51, (void*)0, &g_51, &g_51, (void*)0}};
    char *l_171 = &g_15;
    int i, j;
    for (i = 0; i < 9; i++)
        l_70[i] = 0xBBCEC63FL;
    for (p_44 = 0; (p_44 == 56); ++p_44)
    {
        int **l_53 = (void*)0;
        int l_65 = 0L;
        int l_66 = 0xF9BD85DDL;
        int l_69 = 1L;
        int l_71 = 1L;
        int l_72 = 0xE75FCAA6L;
        int l_73 = 0xBBE7F632L;
        int l_74 = 1L;
        int l_75 = (-1L);
        int l_76 = 1L;
        int l_77 = (-7L);
        int l_78[2];
        short l_79 = 0L;
        char l_81 = 0x86L;
        unsigned short l_89 = 3UL;
        int **l_92 = (void*)0;
        int **l_93 = &g_51;
        int i;
        for (i = 0; i < 2; i++)
            l_78[i] = 1L;
        g_51 = g_51;
        for (g_52 = 0; (g_52 >= 12); g_52 = safe_add_func_uint32_t_u_u(g_52, 2))
        {
            int *l_56 = (void*)0;
            int *l_57 = &g_58[0][5];
            int *l_59 = &g_58[0][0];
            int *l_60 = &g_58[0][5];
            int *l_61 = &g_58[0][5];
            int *l_62 = &g_58[0][5];
            int *l_63 = &g_58[0][5];
            int *l_64[3][8] = {{&g_58[0][5], &g_58[0][1], &g_58[0][5], &g_58[0][1], &g_58[0][5], &g_58[0][1], &g_58[0][5], &g_58[0][1]}, {&g_58[0][5], &g_58[0][1], &g_58[0][5], &g_58[0][1], &g_58[0][5], &g_58[0][1], &g_58[0][5], &g_58[0][1]}, {&g_58[0][5], &g_58[0][1], &g_58[0][5], &g_58[0][1], &g_58[0][5], &g_58[0][1], &g_58[0][5], &g_58[0][1]}};
            int l_80 = 0x845225C7L;
            unsigned l_82 = 7UL;
            int l_87 = 0L;
            int i, j;
            --l_82;
            if ((*l_62))
            {
                unsigned short l_85 = 0x31C8L;
                if (l_85)
                    break;
                return p_43;
            }
            else
            {
                int **l_86 = &l_60;
                int l_88 = 0xAEDB7B90L;
                (*l_86) = &l_78[0];
                if ((*g_51))
                    break;
                ++l_89;
            }
        }
        (*l_93) = &l_70[0];
    }
    if (((safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s((*g_51), ((((safe_unary_minus_func_uint32_t_u((1UL == g_11))) < ((--(*l_99)) ^ (safe_mod_func_int16_t_s_s(0x4294L, (-1L))))) & 0x3BL) == (safe_lshift_func_int16_t_s_s((l_70[2] && (safe_add_func_uint8_t_u_u(((l_109 ^ (l_67 || p_44)) < g_58[0][2]), g_15))), l_70[2]))))), (*p_45))) | g_58[0][5]))
    {
        unsigned l_110 = 1UL;
        int l_135 = 0x829C22D0L;
        unsigned short l_144[7];
        unsigned l_160 = 18446744073709551609UL;
        unsigned *l_168[10][5] = {{&g_169[0][3][1], (void*)0, (void*)0, (void*)0, (void*)0}, {&g_169[0][3][1], (void*)0, (void*)0, (void*)0, (void*)0}, {&g_169[0][3][1], (void*)0, (void*)0, (void*)0, (void*)0}, {&g_169[0][3][1], (void*)0, (void*)0, (void*)0, (void*)0}, {&g_169[0][3][1], (void*)0, (void*)0, (void*)0, (void*)0}, {&g_169[0][3][1], (void*)0, (void*)0, (void*)0, (void*)0}, {&g_169[0][3][1], (void*)0, (void*)0, (void*)0, (void*)0}, {&g_169[0][3][1], (void*)0, (void*)0, (void*)0, (void*)0}, {&g_169[0][3][1], (void*)0, (void*)0, (void*)0, (void*)0}, {&g_169[0][3][1], (void*)0, (void*)0, (void*)0, (void*)0}};
        int i, j;
        for (i = 0; i < 7; i++)
            l_144[i] = 0UL;
        for (l_67 = 0; (l_67 <= 0); l_67 += 1)
        {
            unsigned l_118 = 1UL;
            for (l_68 = 0; (l_68 <= 0); l_68 += 1)
            {
                int **l_147 = &g_51;
                int i, j;
                ++l_110;
                if ((g_58[l_67][l_68] != (~p_44)))
                {
                    int *l_113 = &l_70[2];
                    int *l_114 = &g_58[l_67][(l_67 + 5)];
                    int *l_115 = (void*)0;
                    int l_116 = (-1L);
                    int *l_117[5] = {&g_58[0][5], &g_58[l_67][l_68], &g_58[0][5], &g_58[l_67][l_68], &g_58[0][5]};
                    int i;
                    l_118++;
                    (*g_51) = (safe_mul_func_int8_t_s_s(g_58[l_67][(l_67 + 5)], ((l_67 & (*g_51)) >= (*g_51))));
                }
                else
                {
                    int *l_123 = &g_58[0][0];
                    int *l_126 = (void*)0;
                    int *l_127 = &g_58[l_68][(l_68 + 1)];
                    int *l_128 = &l_70[2];
                    int *l_129 = &g_58[0][5];
                    int l_130[8][9][1] = {{{4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}}, {{4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}}, {{4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}}, {{4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}}, {{4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}}, {{4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}}, {{4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}}, {{4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}}};
                    int *l_131 = &g_52;
                    int *l_132 = &g_58[l_67][l_68];
                    int *l_133 = &l_70[4];
                    int *l_134 = &g_52;
                    int *l_136 = (void*)0;
                    int *l_137 = &g_58[l_67][l_68];
                    int *l_138 = &g_58[0][5];
                    int *l_139 = (void*)0;
                    int *l_140 = (void*)0;
                    int *l_141 = (void*)0;
                    int *l_142 = &g_52;
                    int *l_143[9][3] = {{&g_58[0][3], &l_70[2], &g_58[0][3]}, {&g_58[0][3], &l_70[2], &g_58[0][3]}, {&g_58[0][3], &l_70[2], &g_58[0][3]}, {&g_58[0][3], &l_70[2], &g_58[0][3]}, {&g_58[0][3], &l_70[2], &g_58[0][3]}, {&g_58[0][3], &l_70[2], &g_58[0][3]}, {&g_58[0][3], &l_70[2], &g_58[0][3]}, {&g_58[0][3], &l_70[2], &g_58[0][3]}, {&g_58[0][3], &l_70[2], &g_58[0][3]}};
                    int i, j, k;
                    (*l_123) = ((*g_51) = l_118);
                    for (g_100 = (-10); (g_100 > 19); g_100 = safe_add_func_int16_t_s_s(g_100, 4))
                    {
                        return &g_15;
                    }
                    l_144[1]--;
                    (*g_51) = g_58[l_68][(l_68 + 1)];
                }
                (*l_147) = &l_135;
                return &g_15;
            }
            for (g_100 = 0; (g_100 <= 6); g_100 += 1)
            {
                unsigned char *l_154 = &g_155;
                int *l_156 = &l_135;
                int i, j;
                (*l_156) ^= (safe_add_func_int8_t_s_s((((void*)0 != &g_58[l_67][(l_67 + 5)]) == g_58[l_67][(l_67 + 5)]), ((*l_154) = (safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s((+((*g_51) > (p_44 != g_58[0][4]))), p_44)), g_11)))));
                for (l_135 = 6; (l_135 >= 0); l_135 -= 1)
                {
                    for (l_68 = 0; (l_68 <= 6); l_68 += 1)
                    {
                        int *l_157 = &g_58[l_67][(l_67 + 5)];
                        (*l_157) |= (*g_51);
                        return &g_15;
                    }
                }
                l_68 &= ((g_100 || (safe_add_func_uint8_t_u_u(p_44, l_160))) & l_118);
            }
            for (g_52 = 0; (g_52 >= 0); g_52 -= 1)
            {
                int i, j;
                g_58[l_67][(l_67 + 4)] = g_58[g_52][(g_52 + 2)];
            }
        }
        l_135 &= (safe_sub_func_int16_t_s_s((g_11 < p_44), (0x94B6L || (safe_unary_minus_func_uint16_t_u((safe_sub_func_uint16_t_u_u(((((&g_58[0][5] == (void*)0) || l_144[4]) || (4294967291UL < (g_169[0][3][1] ^= 4294967292UL))) & (&g_51 != l_170[3][1])), p_44)))))));
        return l_171;
    }
    else
    {
        int *l_174 = (void*)0;
        for (l_109 = (-28); (l_109 >= 57); l_109 = safe_add_func_uint32_t_u_u(l_109, 7))
        {
            (*g_51) ^= p_44;
        }
        l_174 = &g_52;
    }
    return p_43;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_58[i][j], "g_58[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_169[i][j][k], "g_169[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_317[i], "g_317[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_388, "g_388", print_hash_value);
    transparent_crc(g_399, "g_399", print_hash_value);
    transparent_crc(g_492, "g_492", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_511[i], "g_511[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_620, "g_620", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_695[i], "g_695[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_943, "g_943", print_hash_value);
    transparent_crc(g_1039, "g_1039", print_hash_value);
    transparent_crc(g_1046, "g_1046", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1048[i], "g_1048[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1082, "g_1082", print_hash_value);
    transparent_crc(g_1111, "g_1111", print_hash_value);
    transparent_crc(g_1117, "g_1117", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1161[i], "g_1161[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1184, "g_1184", print_hash_value);
    transparent_crc(g_1241, "g_1241", print_hash_value);
    transparent_crc(g_1260, "g_1260", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_1326[i][j][k], "g_1326[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1392, "g_1392", print_hash_value);
    transparent_crc(g_1395, "g_1395", print_hash_value);
    transparent_crc(g_1437, "g_1437", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
