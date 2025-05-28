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


union U0 {
   int f0;
   unsigned long long f1;
   unsigned f2;
};

union U1 {
   const short f0;
   unsigned f1;
   unsigned char f2;
   unsigned short f3;
};

union U2 {
   long long f0;
   unsigned f1;
   int f2;
};


static short g_7[9][3] = {{0x82ABL,0xF16EL,1L},{0L,0x5792L,0L},{(-1L),0x82ABL,1L},{0x4837L,0x4837L,2L},{1L,0x82ABL,0x82ABL},{2L,0x5792L,0x49D5L},{1L,0xF16EL,1L},{0x4837L,2L,0x49D5L},{(-1L),(-1L),0x82ABL}};
static int g_9 = 0x40F2FDADL;
static int *g_8[5] = {&g_9,&g_9,&g_9,&g_9,&g_9};
static union U0 g_19[2] = {{0xC520EA0CL},{0xC520EA0CL}};
static union U2 g_47[5][10] = {{{0x416C28CBD6CD5387LL},{0x416C28CBD6CD5387LL},{0x0CE404D4644688D2LL},{0x99B96BC712BAD479LL},{-10L},{-1L},{0x416C28CBD6CD5387LL},{-10L},{2L},{-10L}},{{0x416C28CBD6CD5387LL},{0x3ADE45A9172C2E8BLL},{-1L},{-3L},{-1L},{0xA4087B332E0C2805LL},{-8L},{-1L},{0L},{0x3ADE45A9172C2E8BLL}},{{0xA4087B332E0C2805LL},{-8L},{-1L},{0L},{0x3ADE45A9172C2E8BLL},{0xA4087B332E0C2805LL},{0xA4087B332E0C2805LL},{0x3ADE45A9172C2E8BLL},{0L},{-1L}},{{-8L},{-8L},{0x416C28CBD6CD5387LL},{-3L},{0x3ADE45A9172C2E8BLL},{0xEFEDEDC87A9B65CALL},{-8L},{0x3ADE45A9172C2E8BLL},{0xAB2BC8F9611CA4B3LL},{0x3ADE45A9172C2E8BLL}},{{-8L},{0xA4087B332E0C2805LL},{-1L},{-3L},{-1L},{0xA4087B332E0C2805LL},{-8L},{-1L},{0L},{0x3ADE45A9172C2E8BLL}}};
static union U2 *g_46 = &g_47[1][0];
static short g_62[1][5][6] = {{{0x98A9L,1L,0x98A9L,0x98A9L,1L,0x98A9L},{0x98A9L,1L,0x98A9L,0x98A9L,1L,0x98A9L},{0x98A9L,1L,0x98A9L,0x98A9L,1L,0x98A9L},{0x98A9L,1L,0x98A9L,0x98A9L,1L,0x98A9L},{0x98A9L,1L,0x98A9L,0x98A9L,1L,0x98A9L}}};
static char g_69 = (-1L);
static unsigned long long g_99 = 18446744073709551615UL;
static unsigned short g_108[5][3][1] = {{{0UL},{0xD500L},{0UL}},{{0xD500L},{0UL},{0xD500L}},{{0UL},{0xD500L},{0UL}},{{0xD500L},{0UL},{0xD500L}},{{0UL},{0xD500L},{0UL}}};
static unsigned long long g_111 = 0UL;
static unsigned char g_130 = 9UL;
static union U1 g_174 = {0xC077L};
static int g_185 = 0x28DDFECAL;
static int *g_184 = &g_185;
static int *g_189 = (void*)0;
static union U1 g_199 = {7L};
static unsigned char *g_215 = (void*)0;
static unsigned char **g_214[2] = {&g_215,&g_215};
static long long *g_266 = (void*)0;
static const long long g_298[7] = {0x7DCB865D62C6697BLL,0x7DCB865D62C6697BLL,0x7DCB865D62C6697BLL,0x7DCB865D62C6697BLL,0x7DCB865D62C6697BLL,0x7DCB865D62C6697BLL,0x7DCB865D62C6697BLL};
static union U0 *g_315 = &g_19[0];
static union U0 **g_314 = &g_315;
static union U0 ***g_363 = (void*)0;
static union U0 ****g_362 = &g_363;
static const int g_426 = 0x50D985D3L;
static unsigned char g_498 = 1UL;
static unsigned long long g_514 = 18446744073709551615UL;
static const int g_642 = 0x45C5069FL;
static union U2 **g_671 = &g_46;
static const int *g_691 = &g_185;
static char g_699[10][4][6] = {{{9L,5L,0xDDL,(-9L),0L,1L},{0x5BL,(-1L),0x49L,(-5L),0x33L,1L},{0x0EL,0xD9L,0x34L,0x99L,0xB3L,0L},{6L,0x9DL,5L,0x14L,(-9L),0xC4L}},{{(-8L),0xAFL,6L,0x0EL,0x32L,1L},{0x7EL,0xAFL,0L,(-1L),(-9L),0x5BL},{1L,0x9DL,0x28L,0x7EL,0xB3L,5L},{0x49L,0xD9L,0x99L,6L,0x33L,0x99L}},{{0xDDL,(-1L),(-1L),(-1L),0L,0xF5L},{0x14L,0x2BL,(-1L),1L,(-7L),(-1L)},{(-1L),(-1L),(-1L),0x34L,(-1L),0xF5L},{(-8L),0xB3L,(-1L),0x6DL,(-6L),0x99L}},{{0x6DL,(-6L),0x99L,5L,0L,5L},{0x28L,0L,0x28L,0xC4L,0xD9L,0x5BL},{0x7FL,(-1L),0L,(-8L),0x6AL,1L},{0x23L,0x89L,6L,(-8L),0x1BL,0xC4L}},{{0x7FL,(-9L),5L,1L,(-5L),0x83L},{0xB2L,0x99L,9L,2L,0xDDL,(-1L)},{1L,(-5L),0x4EL,1L,0x0EL,0x4EL},{0x85L,(-9L),0xC1L,9L,0L,0x23L}},{{0x85L,6L,1L,(-1L),0L,1L},{0xD5L,(-9L),3L,(-2L),0x0EL,0L},{(-1L),(-5L),0x2FL,1L,0xDDL,(-2L)},{0x4EL,0x99L,(-3L),0L,(-5L),0xB2L}},{{(-3L),0x14L,0x85L,0x85L,0x7FL,0x4EL},{0L,0x0EL,0L,0L,2L,0x4EL},{0xEDL,(-1L),0x85L,0xD5L,(-1L),0xB2L},{0xC1L,0x7EL,(-3L),0x45L,9L,(-2L)}},{{0L,6L,0x2FL,0x2FL,6L,0L},{0xE1L,(-1L),3L,(-1L),0x6DL,1L},{(-2L),1L,1L,0xC1L,0x99L,0x23L},{(-2L),0x34L,0xC1L,(-1L),6L,0x4EL}},{{0xE1L,0x6DL,0xB2L,(-1L),0x20L,0x45L},{0x85L,0x14L,(-3L),3L,0x5BL,0L},{1L,0x7FL,0xD5L,0L,0x7EL,0x23L},{1L,0xC4L,0x2FL,0x85L,9L,(-1L)}},{{1L,0xC4L,0L,(-1L),0x7EL,0x83L},{(-1L),0x7FL,(-1L),1L,0x5BL,0xD5L},{0xB2L,0x14L,3L,0x2FL,0x20L,3L},{0xC1L,2L,(-1L),0xE1L,6L,0xEDL}}};
static union U1 g_704 = {-8L};
static int **g_778[10] = {&g_8[2],&g_8[2],&g_8[2],&g_8[2],&g_8[2],&g_8[2],&g_8[2],&g_8[2],&g_8[2],&g_8[2]};
static int *** const g_777 = &g_778[9];
static const unsigned g_826 = 0xD3D31B91L;
static unsigned char g_914 = 1UL;
static long long **g_939 = &g_266;
static long long ***g_938[3] = {&g_939,&g_939,&g_939};



static unsigned short func_1(void);
static int * func_3(int p_4, int * p_5, union U0 p_6);
static unsigned long long func_13(int * p_14, unsigned p_15, int * p_16, union U0 p_17);
static union U2 * func_24(short p_25, union U0 p_26, char p_27);
static union U0 func_28(union U2 * p_29, union U2 * p_30, int * const p_31, union U2 * p_32, unsigned p_33);
static union U2 * func_34(unsigned long long p_35, union U2 p_36, union U2 * p_37);
static union U2 func_38(unsigned char p_39, union U2 * p_40);
static union U2 * func_41(char p_42, union U2 * p_43, union U2 * p_44, const union U0 p_45);
static union U0 func_48(const unsigned p_49, unsigned char p_50, int * p_51, int * p_52);
static long long func_55(int * p_56, long long p_57, union U2 p_58, unsigned p_59, int p_60);
static unsigned short func_1(void)
{
    short l_2 = 0x4B73L;
    union U0 l_10 = {4L};
    union U0 *l_1021 = &l_10;
    int * const l_1024 = &g_185;
    int *l_1026 = (void*)0;
    long long **l_1029[3];
    long long ***l_1030 = &l_1029[2];
    long long ** const l_1031[6] = {&g_266,&g_266,&g_266,&g_266,&g_266,&g_266};
    union U0 *** const *l_1038 = &g_363;
    int **l_1041 = &g_8[2];
    int *l_1042[9] = {&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9};
    char l_1043 = 0x64L;
    int i;
    for (i = 0; i < 3; i++)
        l_1029[i] = (void*)0;
    if (l_2)
    {
        int *l_1020 = &g_9;
        (**g_777) = func_3(g_7[1][1], g_8[2], l_10);


        ;

        (*g_184) = l_10.f0;
        (**g_777) = l_1020;
        (*g_314) = l_1021;

        ;
    }
    else
    {
        int *l_1022 = &g_9;
        union U0 l_1023[3][9] = {{{6L},{1L},{0x9331F4B8L},{0xFE8E17DFL},{0xFE8E17DFL},{0x9331F4B8L},{1L},{6L},{7L}},{{-4L},{0x8584792EL},{6L},{7L},{1L},{1L},{7L},{6L},{0x8584792EL}},{{0xFE8E17DFL},{6L},{-4L},{0x9331F4B8L},{7L},{0x8584792EL},{0x8584792EL},{7L},{0x9331F4B8L}}};
        int **l_1025 = &g_189;
        long long **l_1027 = (void*)0;
        long long ***l_1028 = &g_939;
        int i, j;
        (**g_777) = func_3(l_10.f2, l_1022, l_1023[0][3]);


        ;

        (*l_1025) = l_1024;

        ;
        l_1026 = (*l_1025);

        ;
        (*l_1028) = l_1027;

        ;
    }


    ;
    ;

    ;
    ;
    (*l_1041) = l_1024;
    l_1043 = ((*l_1024) = (*g_691));
    return g_47[1][0].f0;


}







static int * func_3(int p_4, int * p_5, union U0 p_6)
{
    int *l_18 = &g_9;
    union U1 *l_927[8][5][6] = {{{&g_704,&g_199,&g_174,&g_704,&g_174,&g_199},{(void*)0,&g_704,(void*)0,&g_704,&g_704,(void*)0},{&g_704,&g_704,(void*)0,(void*)0,&g_174,&g_174},{&g_174,&g_704,&g_704,&g_704,&g_199,(void*)0},{&g_174,&g_174,&g_704,(void*)0,&g_704,&g_174}},{{&g_174,(void*)0,(void*)0,&g_174,&g_199,(void*)0},{&g_174,&g_199,(void*)0,&g_704,&g_199,&g_199},{&g_199,&g_199,&g_174,&g_174,&g_199,&g_199},{&g_199,(void*)0,&g_174,&g_704,&g_704,&g_704},{&g_174,&g_174,&g_199,&g_174,&g_199,&g_704}},{{&g_174,&g_704,&g_174,&g_704,&g_174,&g_704},{&g_199,&g_704,&g_199,&g_174,&g_704,&g_174},{&g_199,&g_704,&g_704,&g_704,&g_174,&g_174},{&g_174,&g_199,&g_199,&g_174,&g_199,&g_704},{&g_174,(void*)0,&g_174,(void*)0,&g_704,&g_704}},{{&g_704,&g_704,&g_199,(void*)0,&g_199,(void*)0},{&g_174,&g_199,&g_174,&g_174,&g_174,&g_704},{&g_704,&g_199,&g_704,&g_199,&g_174,&g_174},{&g_174,(void*)0,&g_174,&g_199,&g_199,&g_174},{&g_704,&g_704,&g_199,&g_174,&g_704,&g_174}},{{&g_174,&g_199,&g_704,(void*)0,&g_199,&g_199},{&g_704,&g_174,&g_704,&g_174,&g_704,&g_174},{&g_174,&g_174,&g_199,(void*)0,(void*)0,&g_174},{(void*)0,(void*)0,&g_174,&g_704,&g_199,&g_174},{&g_704,(void*)0,&g_704,&g_704,(void*)0,&g_704}},{{(void*)0,&g_174,&g_174,&g_199,&g_704,(void*)0},{&g_704,&g_174,&g_199,&g_704,&g_199,&g_199},{&g_704,&g_199,&g_704,&g_199,&g_704,&g_704},{(void*)0,&g_704,&g_199,&g_704,&g_199,&g_174},{&g_704,(void*)0,&g_199,&g_704,&g_174,&g_174}},{{(void*)0,&g_199,&g_199,(void*)0,&g_174,&g_174},{(void*)0,&g_704,(void*)0,&g_174,&g_704,&g_174},{(void*)0,&g_704,&g_704,&g_199,&g_704,&g_199},{&g_199,&g_704,&g_199,&g_199,(void*)0,&g_704},{&g_174,&g_199,&g_174,&g_174,(void*)0,(void*)0}},{{&g_174,&g_199,&g_199,&g_174,&g_174,&g_199},{&g_174,&g_174,&g_704,&g_199,&g_174,&g_199},{&g_199,&g_704,&g_174,&g_199,&g_199,&g_704},{(void*)0,&g_199,&g_174,&g_174,&g_174,&g_199},{(void*)0,&g_174,&g_704,&g_174,&g_199,&g_199}}};
    int **l_932[8][10][3] = {{{(void*)0,&g_189,&l_18},{&g_189,&g_8[4],&g_184},{(void*)0,&g_8[2],&g_8[4]},{(void*)0,&g_8[3],&g_8[2]},{&g_8[3],&g_8[0],&g_189},{&g_8[2],&g_8[2],&g_189},{&g_184,&l_18,&g_189},{&g_184,&g_184,&g_8[2]},{&g_8[4],&g_184,&g_8[4]},{&g_8[1],(void*)0,&g_184}},{{(void*)0,&g_8[1],&l_18},{(void*)0,&g_189,(void*)0},{&g_8[3],&g_8[2],&g_8[2]},{(void*)0,&g_189,&g_184},{&l_18,&g_8[0],&g_184},{&l_18,&l_18,&g_189},{(void*)0,(void*)0,(void*)0},{&g_184,&g_184,&l_18},{&g_8[3],&g_8[2],&g_8[4]},{(void*)0,&g_184,&g_184}},{{&g_8[4],(void*)0,&l_18},{&l_18,&l_18,&g_184},{&g_8[4],&g_8[0],&l_18},{&g_8[2],&g_8[2],&g_189},{&l_18,&g_8[1],&g_8[4]},{&g_189,&g_8[2],&g_189},{(void*)0,&g_8[2],&l_18},{&g_184,&g_8[2],&g_184},{&g_8[2],&g_8[2],&l_18},{&g_8[2],&g_8[3],&g_184}},{{&g_184,&g_189,&g_8[4]},{&g_8[1],&g_184,&l_18},{&g_184,&g_184,(void*)0},{&g_8[2],&g_189,&g_189},{&g_8[2],&l_18,&g_184},{&g_184,&g_8[1],&g_184},{(void*)0,&g_8[2],&g_189},{&g_189,(void*)0,&l_18},{&l_18,&g_8[2],&g_189},{&g_8[2],&g_8[1],&g_8[2]}},{{&g_8[4],&l_18,(void*)0},{&l_18,&g_189,(void*)0},{&g_8[4],&g_184,&g_184},{(void*)0,&g_184,&g_8[2]},{&g_8[3],&g_189,&g_184},{&g_184,&g_184,&g_184},{&l_18,&g_8[2],&l_18},{&g_189,&g_8[2],&g_8[2]},{&g_8[4],&g_8[4],(void*)0},{&g_8[2],&g_8[4],&g_189}},{{&g_189,&g_8[2],(void*)0},{&g_8[2],&l_18,&g_189},{&g_8[4],&g_8[2],(void*)0},{&g_189,&g_189,(void*)0},{&l_18,&g_8[2],&g_8[3]},{&l_18,&g_8[1],&g_8[2]},{&g_184,&g_184,&g_184},{&g_184,&g_8[1],&g_184},{&g_8[3],&g_8[2],&g_8[4]},{&g_189,&g_189,&g_8[1]}},{{&g_184,&g_8[2],(void*)0},{&g_8[4],&l_18,(void*)0},{(void*)0,&g_8[2],&g_8[3]},{&g_8[2],&g_8[4],(void*)0},{&g_8[2],&g_8[4],(void*)0},{&g_8[1],&g_8[2],&g_8[1]},{&g_184,&g_8[2],&g_8[4]},{&g_8[2],&g_184,&g_184},{&l_18,&g_189,&g_184},{&g_8[3],&g_184,&g_8[2]}},{{&l_18,&l_18,&g_8[3]},{&g_8[2],(void*)0,(void*)0},{&g_184,&g_184,(void*)0},{&g_8[1],&g_8[3],&g_189},{&g_8[2],(void*)0,(void*)0},{&g_8[2],&l_18,&g_189},{(void*)0,(void*)0,(void*)0},{&g_8[1],&g_189,&g_184},{&g_8[3],&l_18,&g_8[2]},{&g_189,&l_18,&g_8[2]}}};
    union U0 l_933[4] = {{0xE7BD9D46L},{0xE7BD9D46L},{0xE7BD9D46L},{0xE7BD9D46L}};
    short *l_935[2][4][9] = {{{&g_7[1][1],(void*)0,(void*)0,&g_7[1][1],&g_7[3][2],(void*)0,&g_7[3][2],&g_7[1][1],(void*)0},{&g_62[0][3][3],&g_62[0][3][3],(void*)0,&g_7[1][1],&g_62[0][3][3],&g_7[1][1],(void*)0,&g_62[0][3][3],&g_62[0][3][3]},{(void*)0,&g_7[1][1],&g_7[3][2],(void*)0,&g_7[3][2],&g_7[1][1],(void*)0,(void*)0,&g_7[1][1]},{&g_7[1][1],(void*)0,(void*)0,(void*)0,&g_7[1][1],&g_7[1][1],&g_7[1][1],&g_7[1][1],(void*)0}},{{(void*)0,&g_7[3][2],(void*)0,&g_7[1][1],&g_7[1][1],&g_7[1][1],&g_7[1][1],(void*)0,&g_7[3][2]},{&g_62[0][3][3],&g_7[6][1],&g_7[1][1],(void*)0,(void*)0,&g_7[1][1],&g_7[6][1],&g_62[0][3][3],&g_7[6][1]},{&g_7[1][1],(void*)0,&g_7[1][1],&g_7[1][1],(void*)0,&g_7[1][1],&g_7[1][1],&g_7[1][1],(void*)0},{(void*)0,&g_7[6][1],&g_7[6][1],(void*)0,&g_62[0][3][3],&g_7[1][1],&g_62[0][3][3],(void*)0,&g_7[6][1]}}};
    char l_992 = 0x89L;
    unsigned short *l_1001[8] = {(void*)0,&g_704.f3,(void*)0,&g_704.f3,(void*)0,&g_704.f3,(void*)0,&g_704.f3};
    unsigned short **l_1000[6] = {&l_1001[4],&l_1001[4],&l_1001[4],&l_1001[4],&l_1001[4],&l_1001[4]};
    union U2 l_1002 = {0xC5A756001B73CA47LL};
    int *l_1016[4] = {&l_1002.f2,&l_1002.f2,&l_1002.f2,&l_1002.f2};
    int **l_1015 = &l_1016[3];
    int *** const l_1014 = &l_1015;
    int ***l_1018 = &l_1015;
    int *l_1019 = (void*)0;
    int i, j, k;
lbl_957:
    (***g_777) = (safe_sub_func_uint64_t_u_u(func_13(l_18, p_4, &g_9, g_19[0]), (((safe_div_func_uint64_t_u_u((((void*)0 == l_927[5][1][0]) >= 255UL), (*l_18))) | p_6.f2) <= (*l_18))));
    if ((safe_mod_func_uint8_t_u_u(func_13((**g_777), (safe_div_func_int32_t_s_s(func_13(l_18, p_6.f2, &p_4, (**g_314)), p_6.f0)), (p_5 = &p_4), l_933[0]), 0x5BL)))
    {
        int *l_934 = &g_9;
        for (g_199.f2 = 0; (g_199.f2 <= 4); g_199.f2 += 1)
        {
            unsigned long long l_942 = 0x00AE32A323BB6CB0LL;
            union U0 *l_950 = &l_933[0];
            union U2 *l_951 = &g_47[0][2];
            int *l_961[4] = {&g_185,&g_185,&g_185,&g_185};
            union U0 *l_967 = &l_933[1];
            int i;
            for (g_704.f2 = 0; (g_704.f2 <= 4); g_704.f2 += 1)
            {
                union U2 *l_937[1][4] = {{&g_47[g_704.f2][g_704.f2],&g_47[g_704.f2][g_704.f2],&g_47[g_704.f2][g_704.f2],&g_47[g_704.f2][g_704.f2]}};
                int *l_948 = &g_185;
                int *l_949[10];
                int i, j;
                for (i = 0; i < 10; i++)
                    l_949[i] = (void*)0;
                if ((func_55(l_934, p_6.f2, g_47[g_704.f2][g_704.f2], p_4, g_47[1][0].f0) && ((g_185 | g_108[4][1][0]) == (l_935[0][1][8] != &g_7[1][1]))))
                {
                    union U2 *l_936 = (void*)0;
                    long long ***l_940 = &g_939;
                    long long ****l_941 = &l_940;
                    unsigned *l_943 = &g_19[0].f2;
                    unsigned char ***l_946 = &g_214[1];
                    l_937[0][3] = ((*g_671) = l_936);

                    ;

                    if ((((*l_934) = (((*l_943) = ((~(g_938[0] == ((*l_941) = l_940))) < l_942)) && p_6.f0)) <= ((p_6.f2 > 65535UL) == (safe_lshift_func_uint16_t_u_s(p_6.f0, ((void*)0 == l_946))))))
                    {
                        int *l_947 = &g_185;
                        return l_947;



                    }
                    else
                    {
                        return l_948;



                    }
                }
                else
                {
                    return l_949[7];



                }
            }

            for (g_130 = 0; (g_130 <= 3); g_130 += 1)
            {
                if ((*p_5))
                    break;
                (*l_18) = (*p_5);
                for (g_69 = 3; (g_69 >= 0); g_69 -= 1)
                {
                    int * const l_953 = &g_185;
                    int i, j, k;
                    (*g_314) = (l_950 = &p_6);

                    ;
                    ;
                    (*g_671) = l_951;
                    (***g_777) = g_699[(g_69 + 6)][g_69][(g_199.f2 + 1)];
                    for (g_704.f2 = 1; (g_704.f2 <= 4); g_704.f2 += 1)
                    {
                        int l_952 = 0L;
                        int **l_954 = (void*)0;
                        int **l_955 = (void*)0;
                        int **l_956 = &g_8[4];
                        (*l_934) = l_952;
                        (*l_956) = l_953;
                    }
                }
            }

            ;
            for (g_704.f1 = 1; (g_704.f1 <= 4); g_704.f1 += 1)
            {
                int l_962[7] = {0xC755A617L,0xC755A617L,0x0B597CD5L,0xC755A617L,0xC755A617L,0x0B597CD5L,0xC755A617L};
                unsigned char l_963 = 0x65L;
                int *l_964[8][5] = {{(void*)0,(void*)0,&g_47[1][0].f2,&l_933[0].f0,&l_933[0].f0},{&g_19[0].f0,&g_47[1][0].f2,&g_47[1][0].f2,&g_47[1][0].f2,&g_19[0].f0},{&l_933[0].f0,&l_933[0].f0,&g_47[1][0].f2,(void*)0,(void*)0},{&g_47[1][0].f2,&g_47[1][0].f2,&g_47[1][0].f2,&l_933[0].f0,&g_47[1][0].f2},{&l_933[0].f0,(void*)0,&l_933[0].f0,&l_933[0].f0,(void*)0},{&g_19[0].f0,&l_933[0].f0,&g_47[1][0].f2,&l_933[0].f0,&g_19[0].f0},{(void*)0,&l_933[0].f0,&l_933[0].f0,(void*)0,&l_933[0].f0},{&g_47[1][0].f2,&l_933[0].f0,&g_47[1][0].f2,&g_47[1][0].f2,&g_47[1][0].f2}};
                int i, j;
            }

        }


        ;
    }
    else
    {
        int *l_969 = &g_185;
        union U2 *l_977 = &g_47[3][0];
        long long l_978 = 1L;
        const long long *l_986 = (void*)0;
        const long long **l_985[6];
        unsigned short *l_998[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        unsigned short **l_997 = &l_998[7];
        unsigned short ***l_999 = &l_997;
        int *l_1011 = &g_9;
        int ****l_1017 = (void*)0;
        int i;
        for (i = 0; i < 6; i++)
            l_985[i] = &l_986;
        for (g_185 = 0; (g_185 >= 0); g_185 -= 1)
        {
            unsigned l_968 = 1UL;
            int l_972 = 1L;
            union U0 l_991[5] = {{0x8AFCD21FL},{0x8AFCD21FL},{0x8AFCD21FL},{0x8AFCD21FL},{0x8AFCD21FL}};
            int i;
            (*l_18) = ((*p_5) = ((&g_939 != &g_939) != g_108[4][1][0]));
        }
        if (p_6.f0)
            goto lbl_957;
        (*l_18) = (l_992 || (((void*)0 == &l_985[4]) < (safe_rshift_func_uint8_t_u_s(0xC8L, (safe_lshift_func_int16_t_s_s(func_55(l_969, ((p_4 | (((*l_999) = l_997) != l_1000[4])) < ((*l_969) = (0x3C93L && g_704.f0))), l_1002, p_4, l_978), 11))))));


        (*p_5) = (safe_lshift_func_uint16_t_u_s((g_108[4][0][0] = ((safe_lshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u((safe_mul_func_uint64_t_u_u((g_99 = ((l_969 = &p_4) == l_1011)), (((0x5EL != func_13(l_1011, ((safe_lshift_func_int8_t_s_s(((p_6.f2 ^ (l_1014 != (l_1018 = (void*)0))) && (*l_1011)), (*l_1011))) > (-8L)), l_1011, p_6)) < (*p_5)) <= (-3L)))), (*l_18))), 5)) <= p_6.f2)), 0));

        ;
        ;
    }


    ;
    ;
    ;
    return l_1019;



}







static unsigned long long func_13(int * p_14, unsigned p_15, int * p_16, union U0 p_17)
{
    int *l_61 = (void*)0;
    union U2 l_63[7][8][1] = {{{{5L}},{{-8L}},{{5L}},{{0x69E96C9F93B76F05LL}},{{5L}},{{-8L}},{{5L}},{{-8L}}},{{{5L}},{{0x69E96C9F93B76F05LL}},{{5L}},{{-8L}},{{5L}},{{-8L}},{{5L}},{{0x69E96C9F93B76F05LL}}},{{{5L}},{{-8L}},{{5L}},{{-8L}},{{5L}},{{0x69E96C9F93B76F05LL}},{{5L}},{{-8L}}},{{{5L}},{{-8L}},{{5L}},{{0x69E96C9F93B76F05LL}},{{5L}},{{-8L}},{{5L}},{{-8L}}},{{{5L}},{{0x69E96C9F93B76F05LL}},{{5L}},{{-8L}},{{5L}},{{-8L}},{{5L}},{{0x69E96C9F93B76F05LL}}},{{{5L}},{{-8L}},{{5L}},{{-8L}},{{5L}},{{0x69E96C9F93B76F05LL}},{{5L}},{{-8L}}},{{{5L}},{{-8L}},{{5L}},{{0x69E96C9F93B76F05LL}},{{5L}},{{-8L}},{{5L}},{{-8L}}}};
    int l_540[8][10] = {{0x92A5E8C1L,0L,1L,0L,0x92A5E8C1L,2L,2L,0x92A5E8C1L,0L,1L},{(-6L),(-6L),1L,0x92A5E8C1L,0x6A72B958L,0x92A5E8C1L,1L,(-6L),(-6L),1L},{0L,0x92A5E8C1L,2L,2L,0x92A5E8C1L,0L,1L,0L,0x92A5E8C1L,2L},{0L,(-6L),0L,2L,1L,1L,2L,0L,(-6L),0L},{0L,0L,(-6L),0x92A5E8C1L,(-6L),0L,0L,0L,0L,(-6L)},{0L,0L,0L,0L,(-6L),0x92A5E8C1L,(-6L),0x92A5E8C1L,2L,2L},{0L,2L,(-6L),0x6A72B958L,0x6A72B958L,(-6L),2L,0L,2L,(-6L)},{1L,0x92A5E8C1L,0x6A72B958L,0x92A5E8C1L,1L,(-6L),(-6L),1L,0x92A5E8C1L,0x6A72B958L}};
    union U0 **l_549 = &g_315;
    short l_554 = 0x434FL;
    unsigned l_566[2];
    int **l_569 = (void*)0;
    union U2 **l_577 = &g_46;
    int l_659 = 6L;
    union U1 *l_702 = (void*)0;
    unsigned short *l_732 = &g_108[4][1][0];
    int *l_847 = &g_9;
    int ** const l_846 = &l_847;
    int ** const *l_845 = &l_846;
    long long **l_900 = &g_266;
    long long ***l_899 = &l_900;
    int l_924 = 0xF86AAA36L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_566[i] = 6UL;
    for (p_17.f2 = (-11); (p_17.f2 == 34); p_17.f2 = safe_add_func_int16_t_s_s(p_17.f2, 6))
    {
        int l_524 = 0x15D213BCL;
        unsigned short *l_526[2][5][4];
        unsigned short **l_525 = &l_526[1][3][0];
        int ***l_570 = (void*)0;
        int ***l_571 = &l_569;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 5; j++)
            {
                for (k = 0; k < 4; k++)
                    l_526[i][j][k] = &g_174.f3;
            }
        }
    }

        return p_15;
}







static union U2 * func_24(short p_25, union U0 p_26, char p_27)
{
    union U2 *l_516 = &g_47[2][8];
    return l_516;


}







static union U0 func_28(union U2 * p_29, union U2 * p_30, int * const p_31, union U2 * p_32, unsigned p_33)
{
    short l_397[7] = {0x23C6L,0x23C6L,0x23C6L,0x23C6L,0x23C6L,0x23C6L,0x23C6L};
    int l_398 = 0x2CE61AF8L;
    union U0 *** const l_401 = &g_314;
    union U0 ***l_402[6] = {&g_314,(void*)0,(void*)0,&g_314,(void*)0,(void*)0};
    short *l_403 = &g_7[7][1];
    int *l_440 = (void*)0;
    unsigned char l_456 = 251UL;
    const unsigned char l_504 = 6UL;
    int **l_505[5][8];
    union U2 l_506[9][7] = {{{-1L},{-10L},{-1L},{-1L},{0x81C1142506CC21D0LL},{0x81C1142506CC21D0LL},{-1L}},{{-1L},{-6L},{-1L},{0x81C1142506CC21D0LL},{-6L},{-10L},{-10L}},{{-6L},{-1L},{-9L},{-1L},{-6L},{-9L},{0x41803213D62D1CF9LL}},{{0x41803213D62D1CF9LL},{-10L},{0x81C1142506CC21D0LL},{0x41803213D62D1CF9LL},{0x81C1142506CC21D0LL},{-10L},{0x41803213D62D1CF9LL}},{{-1L},{0x41803213D62D1CF9LL},{-10L},{0x81C1142506CC21D0LL},{0x41803213D62D1CF9LL},{0x81C1142506CC21D0LL},{-10L}},{{0x41803213D62D1CF9LL},{0x41803213D62D1CF9LL},{-9L},{-6L},{-1L},{-9L},{-1L}},{{-6L},{-10L},{-10L},{-6L},{0x81C1142506CC21D0LL},{-1L},{-6L}},{{-1L},{-1L},{0x81C1142506CC21D0LL},{0x81C1142506CC21D0LL},{-1L},{-1L},{-10L}},{{-1L},{-6L},{-9L},{0x41803213D62D1CF9LL},{-1L},{-7L},{0x41803213D62D1CF9LL}}};
    unsigned short *l_513 = &g_174.f3;
    union U0 l_515 = {0xD851083FL};
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
            l_505[i][j] = &l_440;
    }
    if ((safe_div_func_int64_t_s_s((((l_397[3] || ((p_33 | 0x475AL) == ((g_199.f2 >= (l_398 = p_33)) | (safe_rshift_func_int8_t_s_s(0L, 2))))) ^ l_397[2]) == ((*l_403) = (l_401 == ((*g_362) = l_402[5])))), 0xC23AB08609201123LL)))
    {
        int **l_404[2][8] = {{&g_189,&g_189,&g_189,&g_189,&g_189,&g_189,&g_189,&g_189},{&g_189,&g_189,&g_189,&g_189,&g_189,&g_189,&g_189,&g_189}};
        int **l_405 = (void*)0;
        unsigned long long l_422 = 0UL;
        unsigned l_462[10][2][10] = {{{0xB5D0BEA2L,0x99E31160L,0xB5D0BEA2L,0xB5D0BEA2L,0x99E31160L,0xB5D0BEA2L,0xB5D0BEA2L,0x99E31160L,0xB5D0BEA2L,0xB5D0BEA2L},{0x99E31160L,0x99E31160L,1UL,0x99E31160L,0x99E31160L,1UL,0x99E31160L,0x99E31160L,1UL,0x99E31160L}},{{0x99E31160L,0xB5D0BEA2L,0xB5D0BEA2L,0x99E31160L,0xB5D0BEA2L,0xB5D0BEA2L,0x99E31160L,0xB5D0BEA2L,0xB5D0BEA2L,0x99E31160L},{0xB5D0BEA2L,0x99E31160L,0xB5D0BEA2L,0xB5D0BEA2L,0x99E31160L,0xB5D0BEA2L,0xB5D0BEA2L,0x99E31160L,0xB5D0BEA2L,0xB5D0BEA2L}},{{0x99E31160L,0x99E31160L,1UL,0x99E31160L,0x99E31160L,1UL,0x99E31160L,0x99E31160L,1UL,0x99E31160L},{0x99E31160L,0xB5D0BEA2L,0xB5D0BEA2L,0x99E31160L,0xB5D0BEA2L,0xB5D0BEA2L,0x99E31160L,0xB5D0BEA2L,0xB5D0BEA2L,0x99E31160L}},{{0xB5D0BEA2L,0x99E31160L,0xB5D0BEA2L,0xB5D0BEA2L,0x99E31160L,0xB5D0BEA2L,0xB5D0BEA2L,0x99E31160L,0xB5D0BEA2L,0xB5D0BEA2L},{0x99E31160L,0x99E31160L,1UL,0x99E31160L,0x99E31160L,1UL,0xB5D0BEA2L,0xB5D0BEA2L,0x99E31160L,0xB5D0BEA2L}},{{0xB5D0BEA2L,1UL,1UL,0xB5D0BEA2L,1UL,1UL,0xB5D0BEA2L,1UL,1UL,0xB5D0BEA2L},{1UL,0xB5D0BEA2L,1UL,1UL,0xB5D0BEA2L,1UL,1UL,0xB5D0BEA2L,1UL,1UL}},{{0xB5D0BEA2L,0xB5D0BEA2L,0x99E31160L,0xB5D0BEA2L,0xB5D0BEA2L,0x99E31160L,0xB5D0BEA2L,0xB5D0BEA2L,0x99E31160L,0xB5D0BEA2L},{0xB5D0BEA2L,1UL,1UL,0xB5D0BEA2L,1UL,1UL,0xB5D0BEA2L,1UL,1UL,0xB5D0BEA2L}},{{1UL,0xB5D0BEA2L,1UL,1UL,0xB5D0BEA2L,1UL,1UL,0xB5D0BEA2L,1UL,1UL},{0xB5D0BEA2L,0xB5D0BEA2L,0x99E31160L,0xB5D0BEA2L,0xB5D0BEA2L,0x99E31160L,0xB5D0BEA2L,0xB5D0BEA2L,0x99E31160L,0xB5D0BEA2L}},{{0xB5D0BEA2L,1UL,1UL,0xB5D0BEA2L,1UL,1UL,0xB5D0BEA2L,1UL,1UL,0xB5D0BEA2L},{1UL,0xB5D0BEA2L,1UL,1UL,0xB5D0BEA2L,1UL,1UL,0xB5D0BEA2L,1UL,1UL}},{{0xB5D0BEA2L,0xB5D0BEA2L,0x99E31160L,0xB5D0BEA2L,0xB5D0BEA2L,0x99E31160L,0xB5D0BEA2L,0xB5D0BEA2L,0x99E31160L,0xB5D0BEA2L},{0xB5D0BEA2L,1UL,1UL,0xB5D0BEA2L,1UL,1UL,0xB5D0BEA2L,1UL,1UL,0xB5D0BEA2L}},{{1UL,0xB5D0BEA2L,1UL,1UL,0xB5D0BEA2L,1UL,1UL,0xB5D0BEA2L,1UL,1UL},{0xB5D0BEA2L,0xB5D0BEA2L,0x99E31160L,0xB5D0BEA2L,0xB5D0BEA2L,0x99E31160L,0xB5D0BEA2L,0xB5D0BEA2L,0x99E31160L,0xB5D0BEA2L}}};
        int i, j, k;
        g_8[3] = p_31;
        for (g_174.f3 = 0; (g_174.f3 <= 6); g_174.f3 += 1)
        {
            unsigned short *l_412 = &g_199.f3;
            char *l_420[1];
            int l_421 = (-2L);
            unsigned *l_423 = &g_19[0].f2;
            int *l_424 = &l_398;
            const int *l_427 = &g_185;
            unsigned short l_484 = 0xDB20L;
            union U0 l_485 = {0x64B7A55BL};
            int *l_501 = &l_421;
            int i;
            for (i = 0; i < 1; i++)
                l_420[i] = (void*)0;
        }

    }
    else
    {
        return (***l_401);

            }

    g_8[2] = &g_9;
    g_514 = ((*g_189) = func_55(&g_185, p_33, l_506[4][3], (safe_mod_func_int16_t_s_s(p_33, 7UL)), (safe_rshift_func_uint16_t_u_s(((*l_513) = (safe_rshift_func_uint8_t_u_u(1UL, 2))), 6))));
    (*g_184) = p_33;
    return l_515;

    }







static union U2 * func_34(unsigned long long p_35, union U2 p_36, union U2 * p_37)
{
    unsigned long long l_387 = 18446744073709551615UL;
    union U2 *l_394 = &g_47[1][0];
    (*g_189) = l_387;
    if ((+((*g_184) = (*g_189))))
    {
        union U2 *l_388 = &g_47[4][9];
        return l_388;


    }
    else
    {
        union U0 *l_389 = &g_19[0];
        union U0 **l_390 = (void*)0;
        union U0 **l_391 = &l_389;
        union U0 *l_393 = &g_19[0];
        union U0 **l_392 = &l_393;
        (*l_392) = ((*l_391) = ((*g_314) = l_389));
    }
    return l_394;


}







static union U2 func_38(unsigned char p_39, union U2 * p_40)
{
    unsigned l_255 = 0UL;
    int l_256 = 0L;
    const long long *l_295 = &g_47[1][0].f0;
    union U0 **l_317[4][2] = {{&g_315,&g_315},{&g_315,&g_315},{&g_315,&g_315},{&g_315,&g_315}};
    unsigned l_361 = 4294967292UL;
    union U2 l_386 = {1L};
    int i, j;
    for (p_39 = (-28); (p_39 == 60); p_39 = safe_add_func_int8_t_s_s(p_39, 7))
    {
        unsigned short l_252 = 0x826DL;
        long long *l_267 = &g_47[1][0].f0;
        int l_274 = 0xCEA18A9DL;
        int *l_281 = &g_9;
        const long long *l_297 = &g_298[4];
        union U0 **l_316 = &g_315;
        union U0 ***l_343 = &l_317[1][0];
        union U2 l_374 = {0L};
    }
    return (*g_46);

    }







static union U2 * func_41(char p_42, union U2 * p_43, union U2 * p_44, const union U0 p_45)
{
    int *l_238 = &g_185;
    int **l_239 = (void*)0;
    int **l_240 = (void*)0;
    int **l_241 = &g_189;
    int ***l_244 = &l_241;
    int **l_247 = (void*)0;
    int *l_248[6] = {&g_9,&g_9,&g_9,&g_9,&g_9,&g_9};
    union U2 *l_249 = &g_47[1][9];
    int i;
    (*l_241) = l_238;

    ;
    for (g_174.f1 = 2; (g_174.f1 > 31); g_174.f1 = safe_add_func_int64_t_s_s(g_174.f1, 5))
    {
        return &g_47[1][8];


    }

    (*l_238) = (((*l_238) != (g_111 && (&l_238 == ((*l_244) = &l_238)))) > (safe_rshift_func_int16_t_s_u((*l_238), 12)));

    ;
    l_248[5] = ((*l_241) = (**l_244));
    return l_249;


}







static union U0 func_48(const unsigned p_49, unsigned char p_50, int * p_51, int * p_52)
{
    union U2 *l_187 = &g_47[1][0];
    union U2 **l_186 = &l_187;
    int *l_188 = &g_9;
    int **l_190[3];
    const union U1 *l_193[2][8][5] = {{{(void*)0,&g_174,&g_174,&g_174,(void*)0},{&g_174,(void*)0,&g_174,&g_174,(void*)0},{(void*)0,&g_174,&g_174,(void*)0,&g_174},{&g_174,(void*)0,&g_174,(void*)0,(void*)0},{&g_174,(void*)0,&g_174,&g_174,(void*)0},{(void*)0,&g_174,&g_174,(void*)0,&g_174},{(void*)0,(void*)0,&g_174,(void*)0,&g_174},{&g_174,&g_174,&g_174,&g_174,&g_174}},{{&g_174,&g_174,&g_174,&g_174,&g_174},{(void*)0,&g_174,&g_174,&g_174,(void*)0},{&g_174,(void*)0,&g_174,&g_174,&g_174},{&g_174,&g_174,&g_174,&g_174,&g_174},{&g_174,&g_174,(void*)0,&g_174,&g_174},{&g_174,&g_174,&g_174,&g_174,&g_174},{&g_174,&g_174,&g_174,&g_174,&g_174},{&g_174,&g_174,(void*)0,&g_174,&g_174}}};
    char l_234 = 0L;
    union U0 l_237 = {0x0B53C1BFL};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_190[i] = &g_189;
    (*l_186) = &g_47[1][0];
lbl_194:
    l_188 = &g_185;

    ;
    g_8[1] = g_189;
    for (g_111 = (-2); (g_111 < 45); g_111++)
    {
        union U1 *l_198 = &g_199;
        unsigned short * const l_202 = (void*)0;
        int l_210[10][8][3] = {{{1L,0x68EDA36AL,0xE12B9D12L},{0x247ED1BBL,0L,6L},{(-1L),0xB2AA7F5FL,0L},{0x8C352A3DL,3L,0x5B22A6ECL},{0L,0x2E4BE7F6L,(-1L)},{5L,(-1L),(-2L)},{1L,0xD2C52D83L,(-5L)},{0xAC4CAD26L,(-1L),0x587139D6L}},{{0x32406541L,0x75C3E23CL,(-1L)},{0x4DB4BE80L,1L,0x3FF6A6F7L},{0x239324AFL,0x239324AFL,1L},{0x5B5DD2DDL,(-4L),8L},{0xFD6407CEL,1L,0xD2C52D83L},{7L,3L,0x9A3F908AL},{0xBDEAF15AL,0xFD6407CEL,0xD2C52D83L},{0xB33ED77FL,0x2C594338L,8L}},{{0x283455AAL,0xF0F0B529L,1L},{8L,0x587139D6L,0x3FF6A6F7L},{0x10FCCD61L,1L,(-1L)},{0x9696E75FL,0x00E7A821L,0x587139D6L},{3L,(-1L),(-5L)},{0L,(-7L),(-2L)},{0xC8200FA2L,0xD1D17AEBL,1L},{0x83B52146L,(-5L),0L}},{{0xD1D17AEBL,0xEDEDEB66L,3L},{0x9526B4DCL,3L,0x7ED48E4BL},{0x247ED1BBL,0xAB6AB912L,0x36B333FFL},{0xD8A3B9CDL,(-1L),0x3FF6A6F7L},{0L,5L,0xF8D77800L},{0x9A3F908AL,8L,0L},{0xEDEDEB66L,0xF8D77800L,0x239324AFL},{0xAF039434L,8L,6L}},{{0x283455AAL,0x83B52146L,2L},{0x283455AAL,0xDA543B9BL,0xEDEDEB66L},{0xAF039434L,(-7L),0L},{0xEDEDEB66L,0x23D3E4E6L,0x83B52146L},{0x9A3F908AL,0xD417AC9DL,0x19E22B5BL},{0L,7L,0x04B277A0L},{0xD8A3B9CDL,0x314CBB3DL,0x0A9E4985L},{0x247ED1BBL,(-8L),0x9526B4DCL}},{{0x9526B4DCL,(-2L),0x44DB36F9L},{0xD1D17AEBL,0xCEE44133L,0x10FCCD61L},{0x83B52146L,0L,7L},{3L,0x36A520F3L,0x4DB4BE80L},{0x36A520F3L,0xF0F0B529L,0xAF039434L},{6L,(-1L),0x9259771EL},{0x04B277A0L,(-1L),0x5CCBBC7CL},{9L,0x2E4BE7F6L,0x2E4BE7F6L}},{{0x5A2B3274L,0x5B5DD2DDL,(-4L)},{(-9L),0xD1D17AEBL,(-3L)},{2L,0x04B277A0L,(-5L)},{1L,0xE12B9D12L,0x8C352A3DL},{0L,0x04B277A0L,3L},{8L,0xD1D17AEBL,(-2L)},{0L,(-9L),(-1L)},{0x04B277A0L,(-8L),0x00E7A821L}},{{0xAF039434L,7L,0x36B333FFL},{0xB2AA7F5FL,0xEDEDEB66L,0L},{8L,0x36A520F3L,0xC8200FA2L},{0xAC4CAD26L,0xB33ED77FL,0x247ED1BBL},{(-1L),0x10FCCD61L,0x19E22B5BL},{0L,0xBDEAF15AL,0xF0F0B529L},{1L,1L,7L},{0L,0x36B333FFL,0L}},{{0x628736EEL,1L,0x2C594338L},{0x4DB4BE80L,0xDA543B9BL,0x9259771EL},{0x73A22974L,1L,0xF8D77800L},{0x2C594338L,0x283455AAL,0x10FCCD61L},{5L,0x8C352A3DL,0L},{(-1L),0xE12B9D12L,0L},{0x9259771EL,5L,0L},{0x3FF6A6F7L,1L,0L}},{{1L,0xD1D17AEBL,0x10FCCD61L},{(-1L),0xAF039434L,0xF8D77800L},{0x247ED1BBL,0L,0x9259771EL},{0xD2C52D83L,1L,0x2C594338L},{(-8L),0xD8A3B9CDL,0L},{1L,8L,7L},{0x10FCCD61L,1L,0xF0F0B529L},{0xD8A3B9CDL,(-2L),0x19E22B5BL}}};
        unsigned *l_233 = (void*)0;
        int *l_235[4];
        int l_236 = 0x04312436L;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_235[i] = &g_19[0].f0;
        for (g_174.f2 = 0; (g_174.f2 <= 0); g_174.f2 += 1)
        {
            union U2 l_209[2] = {{0L},{0L}};
            int i;
            (*l_188) = ((((void*)0 != l_193[0][7][2]) ^ 0xC2L) == p_49);
            if (g_174.f2)
                goto lbl_194;
            for (g_99 = 0; (g_99 <= 0); g_99 += 1)
            {
                union U1 **l_195 = (void*)0;
                union U1 *l_197 = (void*)0;
                union U1 **l_196[1][6];
                unsigned short *l_204 = &g_199.f3;
                unsigned short **l_203 = &l_204;
                int l_211 = 1L;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_196[i][j] = &l_197;
                }
                l_198 = &g_174;

                ;
                (*p_52) = (safe_mod_func_int32_t_s_s(((l_202 == ((*l_203) = &g_108[3][2][0])) | (safe_add_func_int16_t_s_s(0xBA49L, (((safe_add_func_uint32_t_u_u(0x3D05821FL, 0x21574C0DL)) == func_55(p_52, g_185, l_209[0], func_55(p_51, g_108[3][1][0], (*g_46), p_49, g_99), l_210[2][3][0])) <= l_211)))), l_211));

                ;
            }
        }

        ;
        for (g_99 = (-17); (g_99 != 44); ++g_99)
        {
            unsigned char ***l_216 = &g_214[1];
            int l_217 = (-1L);
            char *l_224 = (void*)0;
            char *l_225 = &g_69;
            unsigned l_228 = 4294967292UL;
            (*l_216) = g_214[1];
            if (l_217)
                break;
            l_228 = (l_217 = ((*l_188) = (safe_sub_func_uint32_t_u_u(0xFD28B290L, ((*p_52) = ((g_47[1][0].f1 != ((p_50 != (0x76A63E40L <= (*p_51))) | ((safe_rshift_func_int8_t_s_u(((*l_225) = g_199.f0), (safe_lshift_func_uint16_t_u_u((0x67CD0BF8L <= l_217), 0)))) >= (g_62[0][3][5] & p_50)))) | 1UL))))));
        }
        (*l_188) = (safe_mod_func_int64_t_s_s((safe_mod_func_int16_t_s_s(func_55((g_8[4] = &g_9), g_69, (*l_187), (g_174.f1 = (l_210[5][2][0] > (g_47[1][0].f1 > p_50))), (l_236 = l_234)), g_185)), 0x7DB8A07341646E61LL));

    }
    return l_237;

    }







static long long func_55(int * p_56, long long p_57, union U2 p_58, unsigned p_59, int p_60)
{
    int l_64 = 0x11B6BEFCL;
    int l_71 = 0L;
    union U2 *l_73 = &g_47[2][0];
    union U2 **l_72 = &l_73;
    int *l_85 = &g_9;
    unsigned short * const l_107[8] = {&g_108[4][1][0],&g_108[4][1][0],&g_108[4][1][0],&g_108[4][1][0],&g_108[4][1][0],&g_108[4][1][0],&g_108[4][1][0],&g_108[4][1][0]};
    int l_123 = 0xFDD6AA84L;
    union U0 *l_137[4] = {&g_19[0],&g_19[0],&g_19[0],&g_19[0]};
    union U0 **l_136 = &l_137[0];
    int l_155[1];
    int **l_172 = &g_8[2];
    union U1 *l_173 = &g_174;
    union U1 **l_175[1];
    union U1 *l_176[3][1][5] = {{{&g_174,(void*)0,&g_174,&g_174,(void*)0}},{{&g_174,&g_174,(void*)0,&g_174,&g_174}},{{&g_174,&g_174,&g_174,(void*)0,&g_174}}};
    long long *l_177 = &g_47[1][0].f0;
    int *l_178 = &l_64;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_155[i] = 0xDE51AEE0L;
    for (i = 0; i < 1; i++)
        l_175[i] = &l_173;
    if (l_64)
    {
        int **l_65 = &g_8[1];
        union U0 *l_87[3];
        int l_150 = 0x579967C0L;
        int i;
        for (i = 0; i < 3; i++)
            l_87[i] = &g_19[0];
        (*l_65) = &g_9;
        for (p_59 = 0; (p_59 <= 41); p_59++)
        {
            unsigned short *l_68[6];
            int *l_76 = &l_64;
            const int *l_84 = (void*)0;
            const int **l_83 = &l_84;
            int l_135 = 0x862678A4L;
            int i;
            for (i = 0; i < 6; i++)
                l_68[i] = (void*)0;
        }
    }
    else
    {
        unsigned long long l_151 = 0xFD98BFE20E5FF1E6LL;
        int l_152 = 0xC80EF899L;
        int *l_153 = &l_64;
        int *l_154[3][10][4] = {{{&l_71,(void*)0,&l_71,(void*)0},{&l_71,(void*)0,&l_71,&l_71},{&l_71,&l_71,(void*)0,&l_71},{(void*)0,&l_71,&l_71,&l_71},{&l_71,&l_71,&l_71,&l_71},{&l_71,&l_71,(void*)0,&l_71},{&l_71,&l_71,&l_71,&l_71},{&l_71,&l_71,&l_71,&l_71},{&l_71,(void*)0,(void*)0,(void*)0},{&l_71,(void*)0,&l_71,&l_71}},{{&l_71,(void*)0,(void*)0,&l_71},{&l_71,&l_71,&l_71,&l_71},{&l_71,&l_71,&l_71,&l_71},{&l_71,&l_71,(void*)0,&l_71},{&l_71,(void*)0,&l_71,&l_71},{&l_71,&l_71,&l_71,&l_71},{(void*)0,&l_71,(void*)0,&l_71},{&l_71,&l_71,&l_71,&l_71},{&l_71,(void*)0,&l_71,&l_71},{&l_71,(void*)0,&l_71,(void*)0}},{{&l_71,(void*)0,&l_71,&l_71},{&l_71,(void*)0,&l_71,(void*)0},{&l_71,(void*)0,&l_71,&l_71},{&l_71,&l_71,(void*)0,&l_71},{&l_71,&l_71,&l_71,&l_71},{&l_71,(void*)0,&l_71,(void*)0},{&l_71,(void*)0,(void*)0,&l_71},{&l_71,&l_71,(void*)0,&l_71},{&l_71,(void*)0,&l_71,(void*)0},{&l_71,&l_71,(void*)0,&l_71}}};
        int i, j, k;
        l_155[0] = (l_71 = ((*l_153) = (l_152 = (~((*l_85) = l_151)))));
        g_8[0] = &l_152;


        (*l_85) = (safe_mod_func_uint16_t_u_u(p_60, ((safe_rshift_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_u((((void*)0 != &l_151) || ((safe_rshift_func_int16_t_s_s(g_62[0][2][3], (((((g_62[0][4][0] == ((-4L) <= 1UL)) == p_58.f2) && ((-9L) < g_62[0][3][3])) | 1L) | 0x3C384FE049F0CEA6LL))) || p_58.f1)), p_60)) >= 4294967295UL), 10)) != (*l_85)) == 0UL), 0)) && (*l_153))));
        (*l_153) = ((*l_85) = ((4294967295UL > (p_59 = p_58.f0)) & ((safe_lshift_func_int8_t_s_u(0xAAL, ((l_107[1] != l_107[4]) < (g_7[1][1] | (p_57 < p_60))))) == g_99)));
    }
    (*l_172) = &g_9;
    l_176[0][0][1] = l_173;
    (*l_178) = ((*l_85) = (((*l_177) = (*l_85)) & 1L));
    return p_58.f1;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_7[i][j], "g_7[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_9, "g_9", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_19[i].f0, "g_19[i].f0", print_hash_value);
        transparent_crc(g_19[i].f2, "g_19[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_47[i][j].f0, "g_47[i][j].f0", print_hash_value);
            transparent_crc(g_47[i][j].f1, "g_47[i][j].f1", print_hash_value);
            transparent_crc(g_47[i][j].f2, "g_47[i][j].f2", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_62[i][j][k], "g_62[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_108[i][j][k], "g_108[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_174.f0, "g_174.f0", print_hash_value);
    transparent_crc(g_174.f2, "g_174.f2", print_hash_value);
    transparent_crc(g_174.f3, "g_174.f3", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_199.f2, "g_199.f2", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_298[i], "g_298[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_426, "g_426", print_hash_value);
    transparent_crc(g_498, "g_498", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    transparent_crc(g_642, "g_642", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_699[i][j][k], "g_699[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_704.f2, "g_704.f2", print_hash_value);
    transparent_crc(g_826, "g_826", print_hash_value);
    transparent_crc(g_914, "g_914", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
