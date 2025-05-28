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



static char g_6 = 0x69L;
static int g_31 = 0xD6273D59L;
static char g_48 = 0xA3L;
static short g_56 = (-5L);
static int g_76 = 0L;
static unsigned g_79 = 6UL;
static unsigned char g_120 = 254UL;
static short g_124 = 1L;
static int * volatile g_127[9] = {&g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76};
static int * const volatile g_128[10] = {&g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76};
static int g_131[1] = {1L};
static int * volatile g_130 = &g_131[0];
static unsigned char g_137 = 255UL;
static unsigned char * volatile g_136 = &g_137;
static const unsigned char g_140 = 0UL;
static int *g_147 = &g_131[0];
static int ** volatile g_146 = &g_147;
static int g_171[4][2][5] = {{{0x4E575B16L, (-1L), 0x76B532C9L, 0x68BFC037L, 0L}, {0x4E575B16L, (-1L), 0x76B532C9L, 0x68BFC037L, 0L}}, {{0x4E575B16L, (-1L), 0x76B532C9L, 0x68BFC037L, 0L}, {0x4E575B16L, (-1L), 0x76B532C9L, 0x68BFC037L, 0L}}, {{0x4E575B16L, (-1L), 0x76B532C9L, 0x68BFC037L, 0L}, {0x4E575B16L, (-1L), 0x76B532C9L, 0x68BFC037L, 0L}}, {{0x4E575B16L, (-1L), 0x76B532C9L, 0x68BFC037L, 0L}, {0x4E575B16L, (-1L), 0x76B532C9L, 0x68BFC037L, 0L}}};
static unsigned short g_180 = 65532UL;
static short *g_185 = &g_124;
static short **g_184 = &g_185;
static short *** volatile g_183 = &g_184;
static unsigned g_187 = 0xE5841A9CL;
static int ** volatile g_216 = &g_147;
static int ** volatile g_219 = (void*)0;
static int ** volatile g_220 = &g_147;
static int ** volatile g_236 = (void*)0;
static unsigned g_254 = 8UL;
static int ** volatile g_264 = (void*)0;
static int ** volatile g_266[9][2] = {{&g_147, &g_147}, {&g_147, &g_147}, {&g_147, &g_147}, {&g_147, &g_147}, {&g_147, &g_147}, {&g_147, &g_147}, {&g_147, &g_147}, {&g_147, &g_147}, {&g_147, &g_147}};
static const int g_268 = 4L;
static unsigned g_273[1] = {0xA14F9FC2L};
static int * volatile g_282 = &g_76;
static unsigned *** volatile g_308[1] = {(void*)0};
static unsigned *g_311 = &g_187;
static unsigned **g_310 = &g_311;
static unsigned *** const volatile g_309 = &g_310;
static unsigned short g_323 = 1UL;
static int g_347 = 0x92164BC5L;
static volatile unsigned g_359 = 6UL;
static int ** volatile g_372[9][6] = {{&g_147, &g_147, (void*)0, &g_147, (void*)0, &g_147}, {&g_147, &g_147, (void*)0, &g_147, (void*)0, &g_147}, {&g_147, &g_147, (void*)0, &g_147, (void*)0, &g_147}, {&g_147, &g_147, (void*)0, &g_147, (void*)0, &g_147}, {&g_147, &g_147, (void*)0, &g_147, (void*)0, &g_147}, {&g_147, &g_147, (void*)0, &g_147, (void*)0, &g_147}, {&g_147, &g_147, (void*)0, &g_147, (void*)0, &g_147}, {&g_147, &g_147, (void*)0, &g_147, (void*)0, &g_147}, {&g_147, &g_147, (void*)0, &g_147, (void*)0, &g_147}};
static int ** volatile g_373 = &g_147;
static int ** volatile g_382 = &g_147;
static int ** volatile g_417 = (void*)0;
static unsigned short g_427 = 65534UL;
static const volatile int g_455 = 8L;
static volatile int g_556 = 1L;
static volatile int *g_555 = &g_556;
static volatile int ** const volatile g_554 = &g_555;
static const int g_563 = 0x0BFFC7F1L;
static const int *g_566 = (void*)0;
static const int ** volatile g_565 = &g_566;
static char g_570 = 9L;
static int g_575 = 3L;



static char func_1(void);
static int func_2(unsigned p_3, const unsigned char p_4, short p_5);
static short func_19(int p_20, short p_21, short p_22);
static char func_32(int * const p_33, int * p_34, unsigned p_35, int * p_36);
static int * func_37(short p_38, short p_39);
static char func_42(unsigned p_43, unsigned char p_44);
static char func_65(short p_66, const short p_67, const unsigned p_68, int * p_69, short * p_70);
static unsigned short func_83(short * p_84, unsigned char p_85, const int * p_86, char p_87, unsigned p_88);
static int func_96(unsigned p_97);
static int * func_102(char * p_103, short * p_104, int p_105, char p_106, unsigned p_107);
static char func_1(void)
{
    unsigned l_23 = 0xD4431FADL;
    unsigned char *l_567 = &g_137;
    char *l_568 = &g_48;
    char *l_569 = &g_570;
    unsigned l_571 = 1UL;
    short *l_572 = (void*)0;
    short *l_573[6][4][10] = {{{(void*)0, &g_56, &g_56, &g_56, &g_124, &g_56, (void*)0, &g_124, &g_124, &g_124}, {(void*)0, &g_56, &g_56, &g_56, &g_124, &g_56, (void*)0, &g_124, &g_124, &g_124}, {(void*)0, &g_56, &g_56, &g_56, &g_124, &g_56, (void*)0, &g_124, &g_124, &g_124}, {(void*)0, &g_56, &g_56, &g_56, &g_124, &g_56, (void*)0, &g_124, &g_124, &g_124}}, {{(void*)0, &g_56, &g_56, &g_56, &g_124, &g_56, (void*)0, &g_124, &g_124, &g_124}, {(void*)0, &g_56, &g_56, &g_56, &g_124, &g_56, (void*)0, &g_124, &g_124, &g_124}, {(void*)0, &g_56, &g_56, &g_56, &g_124, &g_56, (void*)0, &g_124, &g_124, &g_124}, {(void*)0, &g_56, &g_56, &g_56, &g_124, &g_56, (void*)0, &g_124, &g_124, &g_124}}, {{(void*)0, &g_56, &g_56, &g_56, &g_124, &g_56, (void*)0, &g_124, &g_124, &g_124}, {(void*)0, &g_56, &g_56, &g_56, &g_124, &g_56, (void*)0, &g_124, &g_124, &g_124}, {(void*)0, &g_56, &g_56, &g_56, &g_124, &g_56, (void*)0, &g_124, &g_124, &g_124}, {(void*)0, &g_56, &g_56, &g_56, &g_124, &g_56, (void*)0, &g_124, &g_124, &g_124}}, {{(void*)0, &g_56, &g_56, &g_56, &g_124, &g_56, (void*)0, &g_124, &g_124, &g_124}, {(void*)0, &g_56, &g_56, &g_56, &g_124, &g_56, (void*)0, &g_124, &g_124, &g_124}, {(void*)0, &g_56, &g_56, &g_56, &g_124, &g_56, (void*)0, &g_124, &g_124, &g_124}, {(void*)0, &g_56, &g_56, &g_56, &g_124, &g_56, (void*)0, &g_124, &g_124, &g_124}}, {{(void*)0, &g_56, &g_56, &g_56, &g_124, &g_56, (void*)0, &g_124, &g_124, &g_124}, {(void*)0, &g_56, &g_56, &g_56, &g_124, &g_56, (void*)0, &g_124, &g_124, &g_124}, {(void*)0, &g_56, &g_56, &g_56, &g_124, &g_56, (void*)0, &g_124, &g_124, &g_124}, {(void*)0, &g_56, &g_56, &g_56, &g_124, &g_56, (void*)0, &g_124, &g_124, &g_124}}, {{(void*)0, &g_56, &g_56, &g_56, &g_124, &g_56, (void*)0, &g_124, &g_124, &g_124}, {(void*)0, &g_56, &g_56, &g_56, &g_124, &g_56, (void*)0, &g_124, &g_124, &g_124}, {(void*)0, &g_56, &g_56, &g_56, &g_124, &g_56, (void*)0, &g_124, &g_124, &g_124}, {(void*)0, &g_56, &g_56, &g_56, &g_124, &g_56, (void*)0, &g_124, &g_124, &g_124}}};
    int l_574 = 9L;
    unsigned short l_576 = 65535UL;
    int *l_583 = &g_347;
    char l_584 = 0x36L;
    int *l_585 = &l_574;
    int i, j, k;
    (*l_583) &= func_2(g_6, g_6, (safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((((+((*g_147) = (((safe_mul_func_int8_t_s_s((g_575 = (safe_add_func_int8_t_s_s((~((safe_mod_func_int8_t_s_s(((*l_569) |= ((*l_568) = (safe_rshift_func_uint8_t_u_s(((*l_567) = (func_19(l_23, l_23, g_6) > l_23)), 7)))), g_273[0])) & (l_574 ^= ((((((*g_147) ^ l_571) == l_23) < (*g_147)) ^ l_571) != g_131[0])))), g_180))), g_273[0])) , (**g_382)) , l_576))) || l_571) != 3UL) ^ l_23), g_31)), g_76)));


    (*l_585) ^= ((0xA441L >= g_131[0]) >= ((*g_147) > ((((((void*)0 != &g_323) & func_19((**g_382), ((**g_310) || ((**g_310) &= (*l_583))), ((**g_184) = 4L))) && (*l_583)) , (*l_583)) , l_584)));
    return g_131[0];
}







static int func_2(unsigned p_3, const unsigned char p_4, short p_5)
{
    unsigned short *l_577 = &g_180;
    unsigned short **l_578 = &l_577;
    unsigned short **l_579 = (void*)0;
    unsigned short *l_581 = &g_323;
    unsigned short **l_580 = &l_581;
    int l_582 = 0x38381C63L;
    (*g_147) |= (l_582 |= (((*l_578) = l_577) == ((*l_580) = &g_180)));

    ;
    return p_3;
}







static short func_19(int p_20, short p_21, short p_22)
{
    int *l_45 = (void*)0;
    short **l_395 = &g_185;
    int *l_398 = &g_31;
    int l_399 = 0xB049284DL;
    int *l_418[9] = {&g_76, &g_131[0], &g_76, &g_131[0], &g_76, &g_131[0], &g_76, &g_131[0], &g_76};
    int i;
    for (p_21 = 0; (p_21 > (-17)); p_21--)
    {
        int *l_30 = &g_31;
        char *l_47 = &g_48;
        int l_49[7] = {0xAA50887CL, 0x35F19716L, 0xAA50887CL, 0x35F19716L, 0xAA50887CL, 0x35F19716L, 0xAA50887CL};
        int l_386 = 1L;
        short *l_400[5][3] = {{(void*)0, &g_124, (void*)0}, {(void*)0, &g_124, (void*)0}, {(void*)0, &g_124, (void*)0}, {(void*)0, &g_124, (void*)0}, {(void*)0, &g_124, (void*)0}};
        short ** const l_421 = &l_400[1][0];
        unsigned short l_454[10][2][5] = {{{7UL, 0x8978L, 7UL, 0x8978L, 7UL}, {7UL, 0x8978L, 7UL, 0x8978L, 7UL}}, {{7UL, 0x8978L, 7UL, 0x8978L, 7UL}, {7UL, 0x8978L, 7UL, 0x8978L, 7UL}}, {{7UL, 0x8978L, 7UL, 0x8978L, 7UL}, {7UL, 0x8978L, 7UL, 0x8978L, 7UL}}, {{7UL, 0x8978L, 7UL, 0x8978L, 7UL}, {7UL, 0x8978L, 7UL, 0x8978L, 7UL}}, {{7UL, 0x8978L, 7UL, 0x8978L, 7UL}, {7UL, 0x8978L, 7UL, 0x8978L, 7UL}}, {{7UL, 0x8978L, 7UL, 0x8978L, 7UL}, {7UL, 0x8978L, 7UL, 0x8978L, 7UL}}, {{7UL, 0x8978L, 7UL, 0x8978L, 7UL}, {7UL, 0x8978L, 7UL, 0x8978L, 7UL}}, {{7UL, 0x8978L, 7UL, 0x8978L, 7UL}, {7UL, 0x8978L, 7UL, 0x8978L, 7UL}}, {{7UL, 0x8978L, 7UL, 0x8978L, 7UL}, {7UL, 0x8978L, 7UL, 0x8978L, 7UL}}, {{7UL, 0x8978L, 7UL, 0x8978L, 7UL}, {7UL, 0x8978L, 7UL, 0x8978L, 7UL}}};
        char l_489[6][9] = {{0x94L, (-9L), (-6L), (-6L), (-9L), 0x94L, 0xA5L, 0xB6L, 1L}, {0x94L, (-9L), (-6L), (-6L), (-9L), 0x94L, 0xA5L, 0xB6L, 1L}, {0x94L, (-9L), (-6L), (-6L), (-9L), 0x94L, 0xA5L, 0xB6L, 1L}, {0x94L, (-9L), (-6L), (-6L), (-9L), 0x94L, 0xA5L, 0xB6L, 1L}, {0x94L, (-9L), (-6L), (-6L), (-9L), 0x94L, 0xA5L, 0xB6L, 1L}, {0x94L, (-9L), (-6L), (-6L), (-9L), 0x94L, 0xA5L, 0xB6L, 1L}};
        int * const *l_510[8][7][4] = {{{&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}}, {{&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}}, {{&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}}, {{&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}}, {{&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}}, {{&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}}, {{&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}}, {{&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}, {&l_418[7], &g_147, &l_418[5], &l_418[8]}}};
        unsigned l_538[4];
        unsigned *** const l_539 = &g_310;
        int **l_558 = &g_147;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_538[i] = 1UL;
    }
    for (l_399 = (-25); (l_399 < (-26)); l_399 = safe_sub_func_int32_t_s_s(l_399, 3))
    {
        const int *l_562[4][6] = {{(void*)0, (void*)0, &g_563, (void*)0, (void*)0, &g_563}, {(void*)0, (void*)0, &g_563, (void*)0, (void*)0, &g_563}, {(void*)0, (void*)0, &g_563, (void*)0, (void*)0, &g_563}, {(void*)0, (void*)0, &g_563, (void*)0, (void*)0, &g_563}};
        const int **l_561 = &l_562[2][4];
        const int **l_564 = (void*)0;
        int i, j;
        (*g_565) = ((*l_561) = &p_20);

        ;

    }


    return (*g_185);


}







static char func_32(int * const p_33, int * p_34, unsigned p_35, int * p_36)
{
    unsigned char l_348 = 0x64L;
    int l_356 = 0x62F7CBCDL;
    int l_358 = 2L;
    int *l_380 = &g_76;
    (*g_147) &= l_348;
    for (g_120 = (-6); (g_120 < 27); g_120++)
    {
        unsigned char *l_353 = &g_137;
        unsigned char *l_357 = &l_348;
        int l_360[1][2][10] = {{{0x4D09E0FEL, 0x4D09E0FEL, 0x8614077CL, 0x4D09E0FEL, 0x4D09E0FEL, 0x8614077CL, 0x4D09E0FEL, 0x4D09E0FEL, 0x8614077CL, 0x4D09E0FEL}, {0x4D09E0FEL, 0x4D09E0FEL, 0x8614077CL, 0x4D09E0FEL, 0x4D09E0FEL, 0x8614077CL, 0x4D09E0FEL, 0x4D09E0FEL, 0x8614077CL, 0x4D09E0FEL}}};
        short l_376 = 0xC47FL;
        int *l_381 = &l_356;
        int i, j, k;
        l_360[0][0][2] |= ((((p_35 ^ ((*l_357) = ((safe_rshift_func_uint8_t_u_u(((*l_353) &= (g_254 , 246UL)), (func_42(p_35, p_35) > g_171[3][1][1]))) != (+(l_356 = ((safe_rshift_func_uint8_t_u_s((((g_31 , p_35) && 0UL) >= g_171[0][0][1]), 6)) == p_35)))))) != l_358) && g_359) != (**g_184));
    }
    for (l_358 = 24; (l_358 > (-5)); l_358 = safe_sub_func_int16_t_s_s(l_358, 7))
    {
        int **l_385 = &g_147;
    }
    return (*l_380);
}







static int * func_37(short p_38, short p_39)
{
    short l_54 = 0x050BL;
    short *l_55 = &g_56;
    int *l_75 = &g_76;
    unsigned *l_77 = (void*)0;
    unsigned *l_78 = &g_79;
    int l_80 = 0x7A796FB6L;
    unsigned short l_344 = 3UL;
    int l_345[7][1] = {{0xB6498450L}, {0xB6498450L}, {0xB6498450L}, {0xB6498450L}, {0xB6498450L}, {0xB6498450L}, {0xB6498450L}};
    int *l_346 = &g_347;
    int i, j;
    (*l_346) &= ((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((0L && 0xC7E12FD8L), (((*l_55) ^= l_54) || ((func_42(func_42((((safe_mul_func_int8_t_s_s(((safe_div_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u(func_42((func_42(g_56, (safe_sub_func_int8_t_s_s(func_65(g_48, (p_38 = g_56), (((safe_rshift_func_int16_t_s_s((((!(func_42(((*l_78) = (safe_rshift_func_uint16_t_u_u((((*l_75) = func_42(l_54, g_48)) , (*l_75)), 9))), p_39) | l_54)) || p_39) > l_80), g_6)) != g_6) & g_6), &g_31, &g_56), p_39))) , g_180), l_344), 1)) | l_344), 0x745169D7L)) != g_56), p_39)) ^ l_345[6][0]) >= 0xF6L), p_39), g_323) , g_31) , (-1L))))), 1)) || (*l_75));


    return &g_171[2][0][4];


}







static char func_42(unsigned p_43, unsigned char p_44)
{
    int l_46 = 1L;
    l_46 = (p_44 , p_43);
    return g_6;
}







static char func_65(short p_66, const short p_67, const unsigned p_68, int * p_69, short * p_70)
{
    short *l_89[5];
    char *l_108 = &g_48;
    int l_111 = 8L;
    const int *l_267 = &g_268;
    char l_269 = (-1L);
    unsigned *l_270 = (void*)0;
    unsigned *l_271 = &g_187;
    unsigned *l_272 = &g_273[0];
    unsigned ***l_341 = &g_310;
    int i;
    for (i = 0; i < 5; i++)
        l_89[i] = (void*)0;
    if ((safe_rshift_func_uint8_t_u_u((0x1F9CL & (0x98A1L ^ func_83(l_89[3], g_31, (((safe_div_func_int32_t_s_s(p_67, (safe_div_func_int16_t_s_s((safe_div_func_int32_t_s_s((func_96((l_111 = (safe_div_func_uint32_t_u_u(((*l_272) = (((*l_271) = ((safe_lshift_func_int16_t_s_u((((p_69 == (l_267 = func_102(l_108, (((safe_div_func_int16_t_s_s(g_76, p_66)) >= l_111) , l_89[4]), g_79, p_67, l_111))) | l_269) , (**g_184)), g_268)) , 0UL)) || g_180)), l_111)))) , (-1L)), 3L)), 8UL)))) || (-8L)) , &g_31), l_269, p_68))), 5)))
    {
        char l_291[7][6] = {{(-3L), 0x3CL, 0x35L, 0x3CL, (-3L), 0xEFL}, {(-3L), 0x3CL, 0x35L, 0x3CL, (-3L), 0xEFL}, {(-3L), 0x3CL, 0x35L, 0x3CL, (-3L), 0xEFL}, {(-3L), 0x3CL, 0x35L, 0x3CL, (-3L), 0xEFL}, {(-3L), 0x3CL, 0x35L, 0x3CL, (-3L), 0xEFL}, {(-3L), 0x3CL, 0x35L, 0x3CL, (-3L), 0xEFL}, {(-3L), 0x3CL, 0x35L, 0x3CL, (-3L), 0xEFL}};
        int l_302 = 1L;
        const short *l_304 = &g_124;
        const short **l_303 = &l_304;
        unsigned *l_305 = &g_187;
        int i, j;
        for (g_79 = 3; (g_79 <= 34); g_79 = safe_add_func_uint8_t_u_u(g_79, 6))
        {
            unsigned char l_292 = 6UL;
            unsigned char *l_301[5][6] = {{&l_292, &g_120, &g_137, &g_137, &g_120, &l_292}, {&l_292, &g_120, &g_137, &g_137, &g_120, &l_292}, {&l_292, &g_120, &g_137, &g_137, &g_120, &l_292}, {&l_292, &g_120, &g_137, &g_137, &g_120, &l_292}, {&l_292, &g_120, &g_137, &g_137, &g_120, &l_292}};
            unsigned **l_306 = &l_271;
            unsigned **l_307 = &l_270;
            int i, j;
            (*g_147) |= ((((((void*)0 == &g_79) , (void*)0) == (void*)0) > (safe_rshift_func_uint8_t_u_u((g_6 , (safe_add_func_int8_t_s_s(0x32L, (g_187 | (safe_mod_func_int32_t_s_s((((*g_185) |= (&p_68 == &g_187)) & l_269), 2L)))))), 6))) || l_291[2][4]);
            (*g_147) = (l_292 < (((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((l_302 = (*g_136)), g_180)) ^ ((void*)0 != l_303)), 3)), (l_305 != ((*l_307) = ((*l_306) = (void*)0))))), (p_67 , (~((*p_70) <= (*p_70)))))) & l_291[2][4]) < g_124));

            ;
            for (g_31 = 0; (g_31 >= 0); g_31 -= 1)
            {
                int i;
                return g_273[g_31];
            }
        }

        ;
        (*g_147) |= 0x84A527C8L;
        return l_291[4][2];
    }
    else
    {
        unsigned l_312 = 4294967292UL;
        const short *l_332[8];
        const short **l_331 = &l_332[3];
        const short ***l_330 = &l_331;
        int i;
        for (i = 0; i < 8; i++)
            l_332[i] = &g_56;
        (*g_309) = &l_271;

        ;
        (*g_147) &= (0xF0EF448EL == l_312);
        for (g_79 = 0; (g_79 <= 1); g_79 += 1)
        {
            int l_340 = 0x8DCBE901L;
            int i;
            (*g_147) = p_67;
            for (g_254 = 0; (g_254 <= 1); g_254 += 1)
            {
                int l_313 = 0x87094CEFL;
                unsigned short *l_320 = &g_180;
                unsigned short *l_321 = (void*)0;
                unsigned short *l_322[2][9];
                const short ****l_333 = &l_330;
                const short ***l_335 = &l_331;
                const short ****l_334 = &l_335;
                unsigned char *l_336 = (void*)0;
                unsigned char *l_337 = (void*)0;
                unsigned char *l_338 = (void*)0;
                unsigned char *l_339 = &g_137;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 9; j++)
                        l_322[i][j] = &g_323;
                }
                if (l_313)
                    break;
                if ((p_68 && func_42((((((safe_mod_func_int32_t_s_s((((safe_mod_func_int32_t_s_s((p_67 , ((safe_rshift_func_int8_t_s_s((!(((l_111 = ((0x362DL < ((*l_320) = 4UL)) < p_66)) == (((safe_div_func_int8_t_s_s(g_273[0], ((((*l_339) = (safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((0x763E7154L && (((*l_334) = ((*l_333) = l_330)) == (void*)0)), p_66)), (*g_136)))) & l_340) ^ g_79))) , 0x16A7L) , p_66)) && (**g_220))), 1)) < g_171[0][1][2])), 1UL)) > l_312) ^ l_340), p_66)) , l_341) != (void*)0) > 1L) , p_67), g_131[0])))
                {
                    int i;
                    g_127[(g_254 + 1)] = (g_140 , (*g_216));
                }
                else
                {
                    return l_111;


                }
            }
        }


        for (g_180 = 0; (g_180 <= 0); g_180 += 1)
        {
            int *l_342[10];
            int **l_343 = &l_342[4];
            int i;
            for (i = 0; i < 10; i++)
                l_342[i] = &g_131[0];
            for (g_254 = 0; g_254 < 8; g_254 += 1)
            {
                l_332[g_254] = &g_56;
            }
            (*l_343) = l_342[6];
        }
    }


    ;
    ;
    return g_140;


}







static unsigned short func_83(short * p_84, unsigned char p_85, const int * p_86, char p_87, unsigned p_88)
{
    (*g_282) ^= ((*g_147) = 0x25632B76L);
    return g_79;
}







static int func_96(unsigned p_97)
{
    char *l_276 = &g_48;
    int l_277 = 0x20E44750L;
    int l_278 = (-1L);
    unsigned l_281 = 0xF22F541DL;
    (*g_147) = ((safe_mul_func_int8_t_s_s((l_277 = ((*l_276) = (-6L))), (!(l_278 , l_278)))) , l_278);
    for (g_48 = 13; (g_48 < (-23)); --g_48)
    {
        return l_281;
    }
    return p_97;
}







static int * func_102(char * p_103, short * p_104, int p_105, char p_106, unsigned p_107)
{
    unsigned l_116 = 0x922B85AEL;
    unsigned *l_117[1][1][3];
    int l_118 = 0xBFCFF147L;
    unsigned char *l_119 = &g_120;
    int l_122 = 2L;
    short *l_182[5] = {&g_56, &g_56, &g_56, &g_56, &g_56};
    short **l_181 = &l_182[1];
    int *l_256 = &g_131[0];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
                l_117[i][j][k] = &g_79;
        }
    }
    if ((safe_lshift_func_int16_t_s_s(((func_42((l_118 = ((safe_rshift_func_int16_t_s_u(g_56, 12)) <= (l_116 = p_105))), ((*l_119) = (((void*)0 != &p_106) != (g_79 == g_56)))) , (safe_unary_minus_func_uint16_t_u(g_6))) > ((l_122 ^ g_79) , 0xC372B4D3L)), g_48)))
    {
        short *l_123[3][3] = {{&g_124, &g_56, &g_124}, {&g_124, &g_56, &g_124}, {&g_124, &g_56, &g_124}};
        int *l_126 = (void*)0;
        int *l_129 = &g_76;
        short **l_134 = (void*)0;
        short **l_135 = &l_123[0][1];
        const unsigned char *l_139 = &g_140;
        const unsigned char **l_138 = &l_139;
        int i, j;
        (*l_129) &= (((g_120 ^ (g_124 = l_122)) , (safe_unary_minus_func_int8_t_s((*p_103)))) , g_79);
        for (l_118 = 8; (l_118 >= 0); l_118 -= 1)
        {
            int i;
            (*g_130) ^= (*l_129);
            for (l_122 = 0; (l_122 <= 0); l_122 += 1)
            {
                return &g_31;


            }
        }
        (*l_129) &= (safe_add_func_uint8_t_u_u(((*l_119) = (((*l_135) = &g_124) != ((p_106 != l_118) , p_104))), ((g_136 != ((*l_138) = (void*)0)) > g_131[0])));

        ;
        for (g_48 = 17; (g_48 != 18); g_48 = safe_add_func_int32_t_s_s(g_48, 2))
        {
            unsigned *l_145[1][9][9] = {{{&l_116, &g_79, &l_116, &l_116, &g_79, &l_116, &g_79, &l_116, &l_116}, {&l_116, &g_79, &l_116, &l_116, &g_79, &l_116, &g_79, &l_116, &l_116}, {&l_116, &g_79, &l_116, &l_116, &g_79, &l_116, &g_79, &l_116, &l_116}, {&l_116, &g_79, &l_116, &l_116, &g_79, &l_116, &g_79, &l_116, &l_116}, {&l_116, &g_79, &l_116, &l_116, &g_79, &l_116, &g_79, &l_116, &l_116}, {&l_116, &g_79, &l_116, &l_116, &g_79, &l_116, &g_79, &l_116, &l_116}, {&l_116, &g_79, &l_116, &l_116, &g_79, &l_116, &g_79, &l_116, &l_116}, {&l_116, &g_79, &l_116, &l_116, &g_79, &l_116, &g_79, &l_116, &l_116}, {&l_116, &g_79, &l_116, &l_116, &g_79, &l_116, &g_79, &l_116, &l_116}}};
            int l_168 = 0x96547669L;
            unsigned *l_186 = &g_187;
            char l_188 = 1L;
            int l_190 = 0x680CA0C9L;
            int i, j, k;
        }
    }
    else
    {
        l_256 = &p_105;

        ;
    }

    ;
    return l_117[0][0][1];


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_131[i], "g_131[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_171[i][j][k], "g_171[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_273[i], "g_273[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_359, "g_359", print_hash_value);
    transparent_crc(g_427, "g_427", print_hash_value);
    transparent_crc(g_455, "g_455", print_hash_value);
    transparent_crc(g_556, "g_556", print_hash_value);
    transparent_crc(g_563, "g_563", print_hash_value);
    transparent_crc(g_570, "g_570", print_hash_value);
    transparent_crc(g_575, "g_575", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
