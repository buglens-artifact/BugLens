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



static int *g_12 = (void*)0;
static int g_15 = 0xDE0369BDL;
static short g_32 = 0L;
static unsigned g_33 = 0x796D402DL;
static int g_40[7][9] = {{0xB4028481L,0xB4028481L,0xB4028481L,0xB4028481L,0xB4028481L,0xB4028481L,0xB4028481L,0xB4028481L,0xB4028481L},{0xCC167DF2L,0xCC167DF2L,0xCC167DF2L,0xCC167DF2L,0xCC167DF2L,0xCC167DF2L,0xCC167DF2L,0xCC167DF2L,0xCC167DF2L},{0xB4028481L,0xB4028481L,0xB4028481L,0xB4028481L,0xB4028481L,0xB4028481L,0xB4028481L,0xB4028481L,0xB4028481L},{0xCC167DF2L,0xCC167DF2L,0xCC167DF2L,0xCC167DF2L,0xCC167DF2L,0xCC167DF2L,0xCC167DF2L,0xCC167DF2L,0xCC167DF2L},{0xB4028481L,0xB4028481L,0xB4028481L,0xB4028481L,0xB4028481L,0xB4028481L,0xB4028481L,0xB4028481L,0xB4028481L},{0xCC167DF2L,0xCC167DF2L,0xCC167DF2L,0xCC167DF2L,0xCC167DF2L,0xCC167DF2L,0xCC167DF2L,0xCC167DF2L,0xCC167DF2L},{0xB4028481L,0xB4028481L,0xB4028481L,0xB4028481L,0xB4028481L,0xB4028481L,0xB4028481L,0xB4028481L,0xB4028481L}};
static unsigned g_75 = 0xB32A1BF3L;
static char g_99 = (-2L);
static char *g_98 = &g_99;
static unsigned char g_103 = 247UL;
static int *g_112 = &g_40[5][7];
static unsigned char *g_127 = &g_103;
static unsigned char **g_126 = &g_127;
static unsigned long long g_135 = 5UL;
static unsigned char g_147 = 0x77L;
static long long g_149 = 0xD843F4C8ED20401CLL;
static unsigned char g_150 = 0UL;
static char g_166[1][8] = {{0xCAL,0xE7L,0xCAL,0xCAL,0xE7L,0xCAL,0xCAL,0xE7L}};
static int *g_191 = &g_40[4][7];
static short *g_204[4][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_32,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
static short **g_203 = &g_204[2][1];
static short **g_205 = &g_204[1][1];
static short **g_206 = &g_204[0][3];
static short g_209 = 0x4435L;
static long long g_261[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static unsigned g_283 = 0x345C93C7L;
static unsigned g_285 = 1UL;
static unsigned char *g_292 = &g_147;
static unsigned g_296 = 0xDC3F2032L;
static unsigned short g_328 = 65535UL;
static unsigned g_336 = 4294967295UL;
static unsigned char ***g_372 = &g_126;
static unsigned *g_383[8][5][2] = {{{&g_296,(void*)0},{&g_296,(void*)0},{(void*)0,(void*)0},{&g_296,(void*)0},{&g_296,&g_296}},{{&g_296,&g_296},{&g_296,&g_296},{&g_296,&g_296},{(void*)0,(void*)0},{&g_296,(void*)0}},{{&g_296,&g_296},{(void*)0,&g_296},{(void*)0,&g_296},{&g_296,(void*)0},{&g_296,(void*)0}},{{(void*)0,&g_296},{&g_296,&g_296},{&g_296,&g_296},{&g_296,&g_296},{&g_296,(void*)0}},{{&g_296,(void*)0},{(void*)0,(void*)0},{&g_296,&g_296},{&g_296,&g_296},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{&g_296,&g_296},{&g_296,&g_296},{(void*)0,&g_296},{&g_296,(void*)0}},{{&g_296,&g_296},{&g_296,(void*)0},{&g_296,&g_296},{(void*)0,&g_296},{&g_296,&g_296}},{{&g_296,(void*)0},{(void*)0,(void*)0},{(void*)0,&g_296},{&g_296,&g_296},{&g_296,&g_296}}};
static unsigned **g_382 = &g_383[6][2][0];
static int *g_388 = &g_40[4][2];
static long long *g_447 = &g_149;



static int func_1(void);
static int * func_2(int * p_3, int * p_4, int * p_5, unsigned long long p_6);
static int * func_7(char p_8, unsigned char p_9, unsigned long long p_10, int * p_11);
static unsigned short func_21(int p_22, int * p_23, int p_24, unsigned p_25, int * p_26);
static unsigned func_43(short * p_44, char p_45);
static short * func_46(int * p_47);
static int * func_77(int * p_78, unsigned p_79, long long p_80, unsigned p_81, unsigned char p_82);
static int * func_83(unsigned p_84);
static int * func_104(int * p_105, short * p_106, unsigned p_107);
static short * func_108(char * p_109);
static int func_1(void)
{
    char *l_13 = (void*)0;
    int l_14 = 0x6F8C7B5CL;
    int l_18 = 0xC9214A9BL;
    short *l_31 = &g_32;
    unsigned l_34[8][6];
    int *l_35 = (void*)0;
    int **l_442 = &l_35;
    char l_443 = 1L;
    int i, j;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
            l_34[i][j] = 4294967295UL;
    }
    (*l_442) = func_2(((*l_442) = func_7((l_14 = (g_12 != g_12)), g_15, (safe_sub_func_int8_t_s_s(l_18, (safe_div_func_uint8_t_u_u(l_18, (func_21((g_15 >= (((1UL | (safe_div_func_uint64_t_u_u((safe_sub_func_int64_t_s_s(((g_33 = ((*l_31) = g_15)) | (0xCCL >= l_18)), 0x3FFD03B15A8DF044LL)), 0x4CC5C6A3F1540EE1LL))) | l_34[6][4]) ^ 0xC0998433L)), l_35, g_15, l_34[2][5], &l_18) && g_75))))), g_383[4][2][0])), g_388, g_383[6][2][0], l_443);
    (*l_442) = (*l_442);
    return g_99;
}







static int * func_2(int * p_3, int * p_4, int * p_5, unsigned long long p_6)
{
    short l_444 = 0xC92CL;
    long long *l_445 = &g_261[3];
    long long **l_446[9][5] = {{&l_445,&l_445,&l_445,&l_445,&l_445},{(void*)0,(void*)0,(void*)0,(void*)0,&l_445},{(void*)0,&l_445,&l_445,&l_445,&l_445},{&l_445,&l_445,(void*)0,&l_445,&l_445},{&l_445,&l_445,(void*)0,&l_445,&l_445},{&l_445,(void*)0,(void*)0,(void*)0,&l_445},{(void*)0,(void*)0,&l_445,&l_445,&l_445},{&l_445,&l_445,&l_445,&l_445,&l_445},{(void*)0,&l_445,&l_445,(void*)0,&l_445}};
    int i, j;
    (*g_191) = (l_444 | ((g_447 = l_445) == &g_261[4]));
    for (g_336 = 0; (g_336 != 27); ++g_336)
    {
        unsigned char l_450 = 255UL;
        if (l_450)
            break;
        for (g_32 = 11; (g_32 >= 12); g_32 = safe_add_func_int64_t_s_s(g_32, 2))
        {
            return &g_40[1][1];
        }
    }
    return p_5;
}







static int * func_7(char p_8, unsigned char p_9, unsigned long long p_10, int * p_11)
{
    int *l_441 = &g_40[2][4];
    for (g_285 = 22; (g_285 == 51); g_285 = safe_add_func_int8_t_s_s(g_285, 9))
    {
        int *l_440[9][1][8] = {{{&g_40[6][8],&g_40[4][2],&g_40[4][2],&g_40[6][8],&g_40[0][0],&g_40[6][8],&g_40[4][2],&g_40[4][2]}},{{&g_40[4][2],&g_40[0][0],&g_40[4][2],&g_40[4][2],&g_40[0][0],&g_40[4][2],&g_40[0][0],&g_40[6][8]}},{{&g_40[4][2],&g_40[4][2],&g_40[4][2],&g_40[4][2],&g_40[4][2],&g_40[4][2],&g_40[4][2],&g_40[4][2]}},{{&g_40[0][0],&g_40[4][2],&g_40[6][8],&g_40[4][2],&g_40[0][0],&g_40[0][0],&g_40[4][2],&g_40[6][8]}},{{&g_40[0][0],&g_40[0][0],&g_40[4][2],&g_40[6][8],&g_40[4][2],&g_40[0][0],&g_40[0][0],&g_40[4][2]}},{{&g_40[4][2],&g_40[4][2],&g_40[4][2],&g_40[4][2],&g_40[4][2],&g_40[4][2],&g_40[4][2],&g_40[4][2]}},{{&g_40[4][2],&g_40[4][2],&g_40[6][8],&g_40[6][8],&g_40[4][2],&g_40[4][2],&g_40[4][2],&g_40[6][8]}},{{&g_40[4][2],&g_40[4][2],&g_40[4][2],&g_40[4][2],&g_40[4][2],&g_40[4][2],&g_40[4][2],&g_40[4][2]}},{{&g_40[0][0],&g_40[4][2],&g_40[6][8],&g_40[4][2],&g_40[0][0],&g_40[0][0],&g_40[4][2],&g_40[6][8]}}};
        int i, j, k;
        return l_440[4][0][4];
    }
    return l_441;
}







static unsigned short func_21(int p_22, int * p_23, int p_24, unsigned p_25, int * p_26)
{
    unsigned l_36[9][1];
    int l_330 = (-1L);
    int l_333 = 0xD9377EC1L;
    int *l_341[7][10] = {{&g_40[4][2],&l_330,(void*)0,&g_40[4][2],&g_40[1][6],&g_40[1][6],&g_40[4][2],(void*)0,&l_330,&g_40[4][2]},{&l_330,&g_40[6][7],(void*)0,&g_40[4][2],&g_40[0][2],&g_40[4][2],&g_40[0][2],&g_40[4][2],(void*)0,&g_40[6][7]},{&l_330,(void*)0,&g_40[4][2],&g_40[6][7],&g_40[0][2],&l_330,&l_330,&g_40[0][2],&g_40[6][7],&g_40[4][2]},{&g_40[0][2],&g_40[0][2],&l_330,&l_330,&g_40[1][6],&l_330,(void*)0,&l_330,&l_330,&g_40[0][2]},{&g_40[0][2],&g_40[4][2],&g_40[0][2],&g_40[4][2],(void*)0,&g_40[6][7],&l_330,&l_330,&g_40[6][7],(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_40[0][2],&l_330,&g_40[4][2],&l_330,&g_40[4][2],&l_330},{&g_40[6][7],&g_40[1][6],&g_40[0][2],&g_40[1][6],&g_40[6][7],&l_330,(void*)0,&g_40[4][2],&g_40[4][2],(void*)0}};
    short *l_344 = (void*)0;
    short *l_345 = &g_209;
    short l_346 = 1L;
    unsigned long long *l_347 = &g_135;
    int l_368[6] = {0x0D0B1758L,0x0D0B1758L,0x0D0B1758L,0x0D0B1758L,0x0D0B1758L,0x0D0B1758L};
    unsigned char ***l_370[9][5][2] = {{{&g_126,&g_126},{&g_126,&g_126},{&g_126,&g_126},{&g_126,&g_126},{&g_126,&g_126}},{{&g_126,&g_126},{&g_126,&g_126},{&g_126,&g_126},{&g_126,&g_126},{&g_126,&g_126}},{{&g_126,&g_126},{&g_126,&g_126},{&g_126,&g_126},{&g_126,&g_126},{&g_126,&g_126}},{{&g_126,&g_126},{&g_126,&g_126},{&g_126,&g_126},{&g_126,&g_126},{&g_126,&g_126}},{{&g_126,&g_126},{&g_126,&g_126},{&g_126,&g_126},{&g_126,&g_126},{&g_126,&g_126}},{{&g_126,&g_126},{&g_126,&g_126},{&g_126,&g_126},{&g_126,&g_126},{&g_126,(void*)0}},{{&g_126,&g_126},{(void*)0,&g_126},{&g_126,(void*)0},{&g_126,&g_126},{(void*)0,&g_126}},{{&g_126,(void*)0},{&g_126,&g_126},{(void*)0,&g_126},{&g_126,(void*)0},{&g_126,&g_126}},{{(void*)0,&g_126},{&g_126,(void*)0},{&g_126,&g_126},{(void*)0,&g_126},{&g_126,(void*)0}}};
    unsigned **l_422 = &g_383[6][2][0];
    unsigned long long *l_425 = &g_135;
    int i, j, k;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
            l_36[i][j] = 5UL;
    }
    for (g_33 = 0; (g_33 <= 0); g_33 += 1)
    {
        int *l_39 = &g_40[4][2];
        (*l_39) = (safe_sub_func_uint8_t_u_u(p_22, 0x5AL));
        for (p_22 = 0; (p_22 >= 0); p_22 -= 1)
        {
            short **l_229 = &g_204[2][1];
            unsigned *l_326 = &g_75;
            unsigned short *l_327[3][5] = {{&g_328,&g_328,&g_328,&g_328,&g_328},{&g_328,&g_328,&g_328,&g_328,&g_328},{&g_328,&g_328,&g_328,&g_328,&g_328}};
            int l_329 = 0x31B1CA57L;
            unsigned *l_331 = (void*)0;
            unsigned *l_332[9] = {&g_283,&g_283,&g_283,&g_283,&g_283,&g_283,&g_283,&g_283,&g_283};
            int i, j;
        }
        if (l_333)
            continue;
        for (l_330 = 0; (l_330 >= 0); l_330 -= 1)
        {
            for (p_24 = 0; p_24 < 9; p_24 += 1)
            {
                for (g_103 = 0; g_103 < 1; g_103 += 1)
                {
                    l_36[p_24][g_103] = 0x6E3ABC23L;
                }
            }
            if ((*g_191))
                break;
        }
    }
    for (p_22 = 7; (p_22 != (-26)); p_22 = safe_sub_func_int32_t_s_s(p_22, 1))
    {
        int *l_339 = &g_40[0][3];
        int **l_340[5];
        int i;
        for (i = 0; i < 5; i++)
            l_340[i] = &l_339;
        g_112 = l_339;
        l_341[3][1] = &g_40[5][6];
    }
    if ((safe_div_func_uint64_t_u_u((p_24 | ((*l_345) = ((((*g_112) = 1L) < p_24) | g_261[6]))), ((*l_347) = l_346))))
    {
        unsigned long long l_350[4][10] = {{0xAAFA67C6BDC7D750LL,6UL,18446744073709551615UL,0xF5680D5315019F29LL,18446744073709551615UL,0UL,0UL,0UL,0UL,18446744073709551615UL},{8UL,6UL,6UL,8UL,0UL,0xAAFA67C6BDC7D750LL,8UL,0x0380F5ECD5AB3512LL,0x140EC37F9CC139BELL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,0x140EC37F9CC139BELL,8UL,6UL,0xF5680D5315019F29LL,6UL,8UL,0x140EC37F9CC139BELL,18446744073709551615UL},{18446744073709551615UL,0xA13B9C7F448DE321LL,18446744073709551610UL,8UL,8UL,0xAA924F2385E1EA13LL,0xAAFA67C6BDC7D750LL,0x140EC37F9CC139BELL,0UL,18446744073709551615UL}};
        short *l_351 = (void*)0;
        long long l_361 = 0x1F53D3AF3EE60F88LL;
        int *l_363 = &l_333;
        int **l_364 = &l_341[0][8];
        short *l_367 = &g_32;
        unsigned *l_369[8][7][4] = {{{&g_33,&g_285,&g_75,&g_285},{&g_33,&g_33,&g_75,&g_336},{&g_283,&g_33,&g_75,&g_75},{&g_283,&g_33,&g_336,&g_33},{(void*)0,&g_336,&g_283,&g_336},{&g_336,&g_336,&g_336,&g_285},{(void*)0,&g_33,&g_283,&g_285}},{{&g_283,&g_75,&g_336,(void*)0},{&g_75,&g_285,(void*)0,&g_75},{(void*)0,&g_285,&g_33,&g_283},{&g_336,&g_336,&g_283,&g_336},{&g_283,&g_336,&g_283,&g_285},{&g_75,&g_336,&g_285,&g_336},{&g_75,&g_336,&g_33,&g_75}},{{&g_33,&g_75,&g_75,&g_283},{&g_285,&g_285,&g_283,&g_33},{&g_336,&g_33,&g_285,&g_336},{(void*)0,&g_285,&g_33,&g_33},{&g_285,&g_285,&g_336,&g_285},{&g_336,&g_336,&g_285,&g_33},{&g_283,(void*)0,&g_33,&g_336}},{{&g_336,&g_283,&g_75,&g_285},{&g_336,&g_75,&g_33,&g_336},{&g_283,&g_285,(void*)0,&g_33},{&g_285,&g_285,&g_75,&g_336},{&g_75,&g_75,&g_33,&g_285},{&g_283,&g_283,(void*)0,&g_336},{&g_33,&g_285,&g_33,&g_283}},{{&g_336,&g_336,(void*)0,&g_75},{&g_336,(void*)0,&g_336,&g_283},{&g_285,&g_336,&g_283,(void*)0},{&g_285,&g_283,&g_336,&g_336},{&g_283,&g_336,&g_336,&g_33},{&g_285,(void*)0,&g_285,&g_285},{&g_33,&g_285,&g_283,&g_336}},{{&g_283,&g_33,&g_33,&g_75},{&g_285,&g_33,(void*)0,&g_285},{&g_283,&g_285,&g_285,&g_336},{&g_283,(void*)0,(void*)0,&g_336},{&g_336,&g_283,&g_75,&g_285},{(void*)0,(void*)0,(void*)0,&g_336},{(void*)0,&g_75,&g_283,&g_283}},{{&g_336,&g_336,&g_285,(void*)0},{&g_336,&g_336,&g_283,&g_283},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_33,(void*)0,&g_283,&g_283},{&g_285,&g_285,&g_285,&g_283},{&g_75,&g_285,&g_336,&g_33},{&g_33,&g_285,&g_33,&g_283}},{{&g_336,&g_285,&g_285,&g_75},{(void*)0,&g_336,&g_336,&g_283},{&g_33,&g_285,(void*)0,&g_33},{&g_285,&g_75,(void*)0,&g_336},{(void*)0,&g_33,&g_285,&g_336},{(void*)0,&g_75,&g_283,&g_285},{&g_33,&g_285,&g_285,&g_285}}};
        unsigned char ****l_371 = &l_370[6][2][1];
        int l_373 = 0x41D62628L;
        unsigned short l_374[1];
        char l_375[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_374[i] = 0xB38EL;
        for (i = 0; i < 1; i++)
            l_375[i] = 2L;
        if ((+(safe_mod_func_int64_t_s_s((l_350[2][4] = g_15), func_43(l_351, (((*g_205) = &l_346) != (void*)0))))))
        {
            int **l_352 = &l_341[3][1];
            unsigned *l_356 = &l_36[6][0];
            unsigned **l_355 = &l_356;
            (*l_352) = &p_24;
            for (g_283 = (-10); (g_283 == 25); g_283++)
            {
                unsigned ***l_357[9] = {&l_355,&l_355,&l_355,&l_355,&l_355,&l_355,&l_355,&l_355,&l_355};
                int i;
                l_355 = l_355;
                if ((*p_26))
                    continue;
            }
            (*l_352) = (void*)0;
        }
        else
        {
            int **l_358[1];
            short *l_362 = &g_209;
            int i;
            for (i = 0; i < 1; i++)
                l_358[i] = &l_341[3][1];
            g_112 = &l_333;
            g_191 = &l_333;
            l_361 = ((g_149 < g_166[0][2]) & (safe_rshift_func_uint8_t_u_u(p_25, 7)));
            l_363 = &l_330;
        }
        p_24 = ((*l_363) = (*p_26));
        (*l_364) = func_77(((*l_364) = &g_40[2][8]), ((l_373 = ((((*l_367) = (safe_rshift_func_int16_t_s_u(((*l_345) = ((*l_363) = 0x7BB7L)), 0))) && ((l_368[5] = ((*l_363) = (-6L))) <= (g_283 = 0x633B5AC0L))) && ((((*l_371) = l_370[6][2][1]) == (g_372 = &g_126)) && ((l_368[5] < (*p_26)) < g_103)))) >= 3UL), l_374[0], p_25, l_375[0]);
    }
    else
    {
        int *l_376 = &l_368[2];
        int **l_377 = &l_341[5][1];
        long long l_379 = 0x5A8E034107D51EA8LL;
        unsigned long long *l_405 = &g_135;
        short **l_435 = &g_204[2][1];
        (*l_377) = l_376;
        if ((*l_376))
        {
            unsigned char l_378 = 0UL;
            (*l_376) = 0x4EC8DBFBL;
            l_379 = (((*p_26) && l_378) > (*g_98));
        }
        else
        {
            int *l_398 = (void*)0;
            unsigned short l_430 = 65534UL;
            unsigned char **l_431 = &g_292;
            for (l_330 = 0; (l_330 != (-12)); l_330 = safe_sub_func_uint64_t_u_u(l_330, 6))
            {
                unsigned ***l_384 = (void*)0;
                unsigned ***l_385 = (void*)0;
                unsigned ***l_386[5] = {&g_382,&g_382,&g_382,&g_382,&g_382};
                int l_387 = 4L;
                int *l_389 = &g_40[4][2];
                long long *l_401 = &g_149;
                char *l_402 = &g_166[0][1];
                int i;
                g_382 = g_382;
            }
        }
        (*l_376) = (p_24 = (*p_26));
    }
    return g_33;
}







static unsigned func_43(short * p_44, char p_45)
{
    unsigned long long l_234 = 0xD185BE0D10B84991LL;
    int l_250 = (-1L);
    int *l_299 = &g_40[4][1];
    int **l_323 = (void*)0;
    int **l_324 = &l_299;
    int **l_325 = &g_191;
    for (p_45 = (-22); (p_45 == (-1)); ++p_45)
    {
        unsigned short l_235 = 0xD67DL;
        int l_248 = (-10L);
        unsigned *l_249 = &g_75;
        int l_262 = 0xABB2B166L;
        unsigned long long *l_307 = (void*)0;
        unsigned short l_308 = 0xA719L;
        if ((safe_div_func_uint8_t_u_u((l_250 = (l_234 > (l_235 == (l_234 == ((*g_98) = (safe_rshift_func_uint8_t_u_u(250UL, (safe_div_func_uint32_t_u_u(((*l_249) = ((*g_98) < (safe_sub_func_int16_t_s_s(l_234, (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint64_t_u_u((safe_div_func_int16_t_s_s(l_248, ((*g_112) & p_45))), p_45)), p_45)))))), 0xD568A418L))))))))), l_234)))
        {
            int *l_259 = &g_40[4][2];
            int **l_260 = &l_259;
            unsigned short l_271 = 65530UL;
            (*g_112) = ((safe_sub_func_uint16_t_u_u((l_248 == (l_250 >= (safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((~(safe_lshift_func_int16_t_s_s((g_33 > ((+(((*l_260) = l_259) == l_249)) < g_103)), 0))), 5)), (p_45 ^ (0x21BB3FC7F9658A0CLL ^ g_40[3][2])))))), l_235)) | p_45);
            for (l_235 = 0; (l_235 <= 3); l_235 += 1)
            {
                int l_280 = 0xC77241C6L;
                int l_286 = 0x86CD116EL;
                l_262 = (g_261[2] = ((*g_112) = p_45));
                for (l_250 = 0; (l_250 <= 3); l_250 += 1)
                {
                    unsigned *l_281 = (void*)0;
                    unsigned *l_282 = &g_283;
                    unsigned *l_284[9];
                    int l_291 = (-1L);
                    int i, j;
                    for (i = 0; i < 9; i++)
                        l_284[i] = &g_285;
                }
            }
            (*l_260) = func_77((l_299 = &l_262), p_45, g_33, p_45, l_234);
            return p_45;
        }
        else
        {
            int *l_300 = &l_262;
            int **l_309 = &l_299;
            (*l_309) = func_77(l_300, (*l_299), g_296, (safe_sub_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(((*g_98) < (*l_299)), (*l_299))), ((safe_mod_func_uint64_t_u_u((l_307 == &l_234), l_308)) == (*l_300)))), p_45);
            (*l_309) = func_104((*l_309), p_44, (g_296 = (0L == 0L)));
        }
        for (g_99 = 0; (g_99 == 8); g_99 = safe_add_func_int16_t_s_s(g_99, 3))
        {
            unsigned long long l_318[8];
            int l_319 = 1L;
            int **l_320 = &g_112;
            int i;
            for (i = 0; i < 8; i++)
                l_318[i] = 0x7B5192C8C10A26E9LL;
            for (g_103 = (-20); (g_103 == 47); g_103 = safe_add_func_int32_t_s_s(g_103, 4))
            {
                (*l_299) = (255UL <= (**g_126));
                l_319 = (safe_add_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s(p_45, (*g_98))) != l_318[2]), ((0xA82C3EB7L & (*l_299)) | 0x7EL)));
            }
            (*l_320) = &l_250;
        }
        (*g_112) = (*l_299);
        for (g_135 = 0; (g_135 == 51); ++g_135)
        {
            return l_248;
        }
    }
    (*l_324) = (void*)0;
    (*l_325) = ((*l_324) = (*l_324));
    return g_99;
}







static short * func_46(int * p_47)
{
    int l_48 = 0xE695EF2BL;
    short *l_55 = (void*)0;
    int l_56 = (-5L);
    short **l_73 = &l_55;
    unsigned *l_74 = &g_75;
    unsigned short l_76 = 65535UL;
    int *l_223 = (void*)0;
    long long *l_224 = &g_149;
    int **l_227 = &g_191;
    short *l_228[4][8][3] = {{{&g_209,(void*)0,(void*)0},{&g_32,&g_32,&g_32},{&g_209,&g_209,&g_209},{&g_32,&g_32,&g_209},{&g_209,(void*)0,&g_209},{&g_32,&g_209,&g_32},{&g_209,&g_209,(void*)0},{&g_32,&g_209,&g_209}},{{&g_209,(void*)0,(void*)0},{&g_32,&g_32,&g_32},{&g_209,&g_209,&g_209},{&g_32,&g_32,&g_209},{&g_209,(void*)0,&g_209},{&g_32,&g_209,&g_32},{&g_209,&g_209,(void*)0},{&g_32,&g_209,&g_209}},{{&g_209,&g_209,&g_32},{&g_209,&g_32,&g_209},{&g_209,(void*)0,(void*)0},{(void*)0,&g_32,&g_209},{(void*)0,&g_209,(void*)0},{&g_209,&g_209,&g_209},{(void*)0,(void*)0,&g_32},{(void*)0,&g_209,&g_209}},{{&g_209,&g_209,&g_32},{&g_209,&g_32,&g_209},{&g_209,(void*)0,(void*)0},{(void*)0,&g_32,&g_209},{(void*)0,&g_209,(void*)0},{&g_209,&g_209,&g_209},{(void*)0,(void*)0,&g_32},{(void*)0,&g_209,&g_209}}};
    int i, j, k;
    (*p_47) = (l_48 != ((((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(l_48, ((l_56 = g_32) <= l_48))) && ((safe_sub_func_int64_t_s_s(((g_40[4][2] == 0L) | ((*l_74) = (safe_div_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((((safe_lshift_func_uint16_t_u_s(g_40[4][2], 10)) > ((safe_sub_func_uint16_t_u_u(((safe_add_func_int64_t_s_s((safe_div_func_int64_t_s_s((safe_div_func_uint64_t_u_u((((*l_73) = l_55) == (void*)0), l_48)), g_15)), l_48)) >= g_40[4][8]), g_40[4][2])) >= l_48)) | l_48) <= l_56), 13)), l_56)))), l_48)) >= g_15)), l_76)), 6)) > 0xAE11E546L) & l_76) == 0x6680L));
    for (l_56 = 6; (l_56 >= 0); l_56 -= 1)
    {
        unsigned *l_85 = &g_75;
        int l_213 = 0L;
        int **l_220[7] = {&g_191,&g_12,&g_191,&g_191,&g_12,&g_191,&g_191};
        unsigned char ***l_221 = &g_126;
        int i;
        p_47 = func_77(func_83((l_85 != (void*)0)), l_213, g_33, (safe_rshift_func_uint16_t_u_s((safe_sub_func_int64_t_s_s((&g_149 == &g_149), 0xFC6000169846BA3BLL)), l_76)), g_149);
        p_47 = func_83((l_221 != &g_126));
        for (g_75 = 0; (g_75 <= 6); g_75 += 1)
        {
            int *l_222 = &l_213;
            int i, j;
            if (g_40[g_75][(g_75 + 1)])
                break;
            g_191 = &g_40[g_75][g_75];
            l_222 = &g_40[g_75][(g_75 + 1)];
        }
    }
    (*l_227) = func_77(l_223, ((*g_98) != ((&g_149 == l_224) >= (((*g_191) < g_40[4][2]) > (l_76 > l_48)))), ((safe_sub_func_int8_t_s_s((*g_98), (*g_127))) & g_149), g_15, (*g_127));
    (*g_112) = (*p_47);
    return l_228[3][1][0];
}







static int * func_77(int * p_78, unsigned p_79, long long p_80, unsigned p_81, unsigned char p_82)
{
    int l_218 = (-7L);
    int **l_219 = &g_191;
    (*l_219) = func_83(l_218);
    return p_78;
}







static int * func_83(unsigned p_84)
{
    unsigned short l_90 = 0xD7FFL;
    short *l_95 = &g_32;
    short **l_94 = &l_95;
    int l_97[9];
    char *l_100 = &g_99;
    int **l_212 = &g_191;
    int i;
    for (i = 0; i < 9; i++)
        l_97[i] = 0L;
    for (p_84 = 0; (p_84 <= 6); p_84 += 1)
    {
        int *l_91[2];
        short **l_96 = &l_95;
        unsigned char *l_101 = (void*)0;
        unsigned char *l_102 = &g_103;
        int i;
        for (i = 0; i < 2; i++)
            l_91[i] = &g_40[4][2];
        if ((((((g_40[5][0] || ((*l_102) = (safe_add_func_int16_t_s_s((-1L), (safe_sub_func_int32_t_s_s((g_40[4][7] = l_90), ((((((0x4657E6FF2F083348LL & ((l_97[6] = ((safe_rshift_func_int16_t_s_u((l_94 == l_96), 8)) != p_84)) > (g_98 == l_100))) >= 0L) == 0xED0E34927B92311CLL) == 0x77L) & g_32) > p_84))))))) | 0x28F8C844L) <= 0xCA5725C8L) ^ g_75) & g_99))
        {
            int **l_199 = &g_112;
            short ***l_202[6][9] = {{&l_96,&l_96,&l_94,&l_96,&l_94,&l_94,&l_94,&l_96,&l_94},{&l_96,&l_96,&l_94,&l_96,&l_94,&l_94,&l_94,&l_96,&l_94},{&l_96,&l_96,&l_94,&l_96,&l_94,&l_94,&l_94,&l_96,&l_94},{&l_96,&l_96,&l_94,&l_96,&l_94,&l_94,&l_94,&l_96,&l_94},{&l_96,&l_96,&l_94,&l_96,&l_96,&l_96,&l_96,&l_96,&l_96},{&l_94,&l_94,&l_96,&l_96,&l_96,&l_96,&l_96,&l_96,&l_96}};
            int i, j;
            (*l_199) = func_104(&l_97[0], ((*l_94) = func_108(l_100)), p_84);
            (*g_112) = (safe_lshift_func_int8_t_s_s(((g_203 = (l_94 = l_96)) == (g_206 = (g_205 = &g_204[2][1]))), 6));
            (*l_199) = &g_40[4][2];
        }
        else
        {
            for (g_103 = 0; (g_103 <= 6); g_103 += 1)
            {
                int i, j;
                g_40[g_103][(p_84 + 2)] = g_40[p_84][(p_84 + 1)];
            }
        }
        for (g_99 = 0; (g_99 <= 6); g_99 += 1)
        {
            int *l_207 = &l_97[8];
            short *l_210[5] = {&g_209,&g_209,&g_209,&g_209,&g_209};
            int i;
            for (g_147 = 0; (g_147 <= 6); g_147 += 1)
            {
                short *l_208[3][4] = {{&g_209,&g_209,&g_209,&g_209},{&g_209,&g_209,&g_209,&g_209},{&g_209,&g_209,&g_209,&g_209}};
                int **l_211 = &l_207;
                int i, j;
                (*l_211) = &g_40[4][2];
            }
        }
    }
    (*l_212) = &g_40[4][2];
    (*l_212) = (*l_212);
    return &g_40[1][3];
}







static int * func_104(int * p_105, short * p_106, unsigned p_107)
{
    int *l_114 = &g_40[4][2];
    int **l_115 = &g_112;
    short *l_117 = &g_32;
    short **l_116 = &l_117;
    long long l_158 = 0L;
    unsigned long long *l_186 = (void*)0;
    (*l_115) = l_114;
    (*p_105) = (l_116 != &p_106);
    if ((*g_112))
    {
        (*p_105) = (0xFB1927A6L == 8L);
        (**l_115) = (*p_105);
    }
    else
    {
        unsigned char ***l_128 = &g_126;
        unsigned char **l_130 = &g_127;
        unsigned char ***l_129 = &l_130;
        int l_133 = 0L;
        unsigned long long *l_134 = &g_135;
        short l_144 = 1L;
        unsigned l_146 = 0x78AB42ECL;
        (*p_105) = (safe_sub_func_uint32_t_u_u(4294967289UL, (safe_sub_func_int16_t_s_s(((**l_116) = (safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s((*p_105), ((**l_115) = (((*p_105) & ((((*l_114) >= p_107) && p_107) && (*l_114))) | (g_103 = 1UL))))), 255UL))), g_99))));
        (*l_129) = ((*l_128) = g_126);
        l_133 = ((safe_mod_func_int16_t_s_s(0xCE46L, l_133)) < ((*l_134) = 0xD1F70EA76F415013LL));
        for (g_135 = 0; (g_135 < 6); ++g_135)
        {
            unsigned short *l_145 = (void*)0;
            long long *l_148[5];
            int l_151 = (-8L);
            char *l_165 = &g_166[0][2];
            unsigned l_170 = 0x570EA9D5L;
            unsigned long long l_174[1];
            unsigned l_190[3];
            int i;
            for (i = 0; i < 5; i++)
                l_148[i] = &g_149;
            for (i = 0; i < 1; i++)
                l_174[i] = 0x1BD5518D9D7C2203LL;
            for (i = 0; i < 3; i++)
                l_190[i] = 4294967294UL;
        }
    }
    return &g_40[0][4];
}







static short * func_108(char * p_109)
{
    int *l_111 = (void*)0;
    int **l_110[8][4] = {{&l_111,&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111,&l_111}};
    short *l_113 = &g_32;
    int i, j;
    g_112 = &g_40[3][6];
    return l_113;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_40[i][j], "g_40[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_166[i][j], "g_166[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_209, "g_209", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_261[i], "g_261[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_328, "g_328", print_hash_value);
    transparent_crc(g_336, "g_336", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
