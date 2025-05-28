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



static unsigned char g_4 = 0x8FL;
static int g_7 = 5L;
static long long g_9 = 0x88E17B844A754320LL;
static long long g_11 = (-4L);
static int g_14 = 0xC6FE23A2L;
static volatile int g_16 = 0L;
static volatile int * volatile g_15 = &g_16;
static unsigned short g_65 = 0xA9BEL;
static int g_66 = 0xBA10F40BL;
static unsigned short g_70 = 0x4DBBL;
static int ** volatile g_73 = (void*)0;
static int *g_75 = &g_14;
static int ** volatile g_74 = &g_75;
static int ** volatile g_76 = (void*)0;
static unsigned long long *g_84 = (void*)0;
static long long g_95 = 2L;
static int * volatile g_97 = &g_14;
static unsigned long long g_102 = 0xBFDB9CE086565EA9LL;
static long long * volatile g_114 = &g_11;
static long long * volatile * volatile g_113 = &g_114;
static int * volatile g_134 = &g_14;
static int g_140 = 2L;
static int * volatile g_156 = &g_14;
static volatile unsigned short **g_169 = (void*)0;
static unsigned g_180 = 4294967295UL;
static char g_182 = (-1L);
static int ** volatile g_226 = &g_75;
static unsigned char * volatile g_246 = &g_4;
static unsigned char * volatile * volatile g_245 = &g_246;
static unsigned char * volatile * volatile * volatile g_247 = &g_245;
static int g_262 = 0xC2623A6DL;
static int ** volatile g_270 = &g_75;
static int ** volatile g_291 = (void*)0;
static int g_295 = 0x023FBB9BL;
static int ** volatile g_301 = (void*)0;
static int ** volatile g_302 = &g_75;
static int ** volatile g_303 = &g_75;
static int ** volatile g_304 = &g_75;
static int ** volatile g_317 = &g_75;
static int ** volatile g_318 = (void*)0;
static int ** volatile g_319 = &g_75;
static unsigned *g_345 = &g_180;
static unsigned **g_344 = &g_345;
static unsigned *** volatile g_343 = &g_344;
static int * volatile g_352 = &g_262;
static int * volatile g_358 = &g_7;
static int ** volatile g_361 = &g_75;
static int *** volatile g_366 = (void*)0;
static int *g_369 = &g_295;
static int **g_368 = &g_369;
static int *** volatile g_367 = &g_368;
static int * volatile g_371 = (void*)0;
static int * volatile g_372 = &g_7;
static unsigned long long **g_400 = (void*)0;
static unsigned long long *** volatile g_399 = &g_400;
static unsigned g_402 = 1UL;
static int ** volatile g_404 = &g_75;
static int ** volatile g_429 = (void*)0;
static int ** volatile g_430 = &g_75;
static volatile short g_475 = 1L;
static volatile short *g_474 = &g_475;
static int ** volatile g_497 = &g_75;
static short g_514 = 0x1D80L;
static short g_517 = 2L;
static int * volatile g_525 = &g_7;
static int ** volatile g_547 = &g_75;
static char g_618 = (-8L);
static unsigned char g_621 = 0x26L;
static unsigned char *g_620 = &g_621;
static volatile int * volatile ** volatile g_622 = (void*)0;
static volatile int * volatile *g_623 = &g_15;
static int *g_626 = &g_66;
static int ** volatile g_625 = &g_626;
static int **g_644 = &g_626;
static int ***g_643 = &g_644;
static unsigned long long ***g_745 = &g_400;
static int *g_762 = &g_262;
static unsigned long long **g_776 = (void*)0;
static volatile int ***g_785 = (void*)0;
static volatile int ****g_784 = &g_785;
static volatile int *****g_783 = &g_784;
static char g_786 = 1L;
static char *g_807 = &g_786;



static short func_1(void);
static int * func_17(int p_18, unsigned long long p_19, int * p_20, unsigned long long * p_21, unsigned p_22);
static long long func_23(unsigned long long * p_24, char p_25, int p_26, unsigned char * p_27, unsigned p_28);
static unsigned long long * func_29(unsigned p_30);
static int func_31(unsigned p_32, unsigned long long * p_33, unsigned p_34, unsigned char p_35, char p_36);
static unsigned func_37(unsigned char * p_38);
static unsigned char * func_39(int p_40, unsigned long long p_41, unsigned long long * p_42);
static short func_48(unsigned p_49, char p_50);
static int func_52(unsigned char * p_53);
static long long func_57(unsigned long long * p_58, unsigned char * p_59, int p_60, unsigned short p_61);
static short func_1(void)
{
    unsigned char l_2 = 0x8EL;
    unsigned char *l_3 = &g_4;
    unsigned long long *l_5 = (void*)0;
    long long l_6 = 1L;
    long long *l_8 = &g_9;
    long long *l_10 = &g_11;
    int *l_12 = &g_7;
    int *l_13 = &g_14;
    long long **l_830 = &l_8;
    long long ***l_829 = &l_830;
    if (((*l_13) = ((*l_12) = ((l_2 == ((l_6 = (l_2 & ((*l_3) = (l_2 != 0L)))) >= ((*l_8) = g_7))) <= ((*l_10) = (l_2 ^ g_7))))))
    {
        unsigned long long **l_616 = &l_5;
        unsigned long long ***l_615 = &l_616;
        char *l_617 = &g_618;
        int l_619 = 0x31E116E1L;
        g_15 = g_15;
        (*g_644) = func_17(((9UL == func_23(func_29(((&g_9 == (void*)0) ^ ((*l_3) = (*l_12)))), ((*l_617) = (safe_sub_func_int32_t_s_s((l_615 != &l_616), (-8L)))), l_619, g_620, l_619)) | g_621), g_514, l_13, l_10, l_619);


        ;
        ;
        ;
        ;
        for (g_9 = 0; (g_9 == 15); ++g_9)
        {
            short l_792 = 0xA3E5L;
            unsigned long long *l_804 = &g_102;
            int l_822 = 0L;
        }
    }
    else
    {
        long long l_824 = (-1L);
        unsigned long long *l_825 = &g_102;
        long long ***l_828 = (void*)0;
        int l_831 = 0x21A739BDL;
        l_831 = ((((l_824 <= ((((*l_3) = ((*g_474) & g_66)) >= (func_31(g_11, l_825, (*l_12), ((*g_620) = (((-1L) && ((*l_13) || (safe_sub_func_int8_t_s_s((l_828 == l_829), 0xADL)))) & (*g_345))), l_824) && g_11)) | 0x9CE9L)) < (**g_644)) <= g_182) | (*l_13));
    }


    ;
    ;
    ;
    ;
    return (*l_12);
}







static int * func_17(int p_18, unsigned long long p_19, int * p_20, unsigned long long * p_21, unsigned p_22)
{
    unsigned char l_637 = 0x25L;
    short *l_638 = &g_514;
    unsigned ***l_639 = &g_344;
    int l_640 = (-1L);
    int **l_642 = &g_626;
    int ***l_641 = &l_642;
    long long *l_657 = &g_11;
    long long **l_656 = &l_657;
    unsigned short *l_717 = &g_65;
    unsigned short **l_716 = &l_717;
    unsigned long long ***l_746 = &g_400;
    if ((p_22 || (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(0x8532L, 8)), ((l_640 = (safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((p_22 = (safe_mod_func_uint32_t_u_u(((**g_344) = ((l_637 | ((*l_638) = p_18)) >= (l_639 == &g_344))), (l_637 & l_637)))), 0xD2287D8BL)), p_18))) >= 0xFA9EDEA3L)))))
    {
        int ****l_645 = &g_643;
        unsigned long long *l_658 = &g_102;
        short *l_728 = (void*)0;
        int *l_742 = &g_66;
        int *l_765 = &g_7;
        (*p_20) = 0x3F19C15CL;
        if ((l_641 != ((*l_645) = g_643)))
        {
            int *l_646 = &g_66;
            unsigned l_653 = 1UL;
            unsigned long long *l_707 = &g_102;
            int ****l_714 = &g_643;
            (***l_645) = l_646;

            ;
            (*g_644) = &p_18;

            ;
            for (g_70 = (-28); (g_70 == 35); g_70++)
            {
                int *l_655 = (void*)0;
                unsigned long long l_723 = 0xCE968B864C37C7AFLL;
                short *l_729 = &g_514;
                short *l_730 = &g_514;
            }
        }
        else
        {
            unsigned short l_743 = 0x6018L;
            long long *l_751 = (void*)0;
            unsigned char l_760 = 0UL;
            int *l_761 = (void*)0;
            if (((void*)0 == &g_368))
            {
                unsigned long long ***l_744 = (void*)0;
                unsigned long long ****l_747 = (void*)0;
                unsigned long long ****l_748 = &l_746;
                (*l_642) = &l_640;

                ;
                (*g_626) = l_743;
                (**l_642) = (((*g_525) | ((***l_639) = ((g_745 = l_744) != ((*l_748) = l_746)))) != ((*l_717) = 65535UL));

                ;
                if ((safe_rshift_func_int16_t_s_s(((**g_113) <= p_18), func_31((~((((l_658 == l_751) != ((****l_645) != (safe_lshift_func_int16_t_s_u((*l_742), 10)))) <= (safe_rshift_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s(g_621, ((g_14 = 0xCC3E8ECBL) & (safe_mod_func_uint32_t_u_u(p_22, 0xA2896639L))))) && p_18) && 1L), g_262))) == g_140)), (*g_400), p_18, (*g_620), l_760))))
                {
                    (*l_642) = l_761;

                    ;
                }
                else
                {
                    return g_762;



                }

                ;
            }
            else
            {
                (*g_644) = &p_18;

                ;
            }

            ;
            for (g_66 = 0; (g_66 > 5); g_66++)
            {
                p_20 = ((*l_642) = &p_18);

                ;
                ;
            }

            ;
        }

        ;
        ;
        return l_765;



    }
    else
    {
        int *l_766 = &g_66;
        short *l_787 = &g_517;
        (**l_641) = l_766;

        ;
        (***l_641) = (safe_rshift_func_uint8_t_u_u(((*g_620) = (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int16_t_s(p_18)), (***g_343))), (safe_mod_func_uint32_t_u_u((g_776 == (void*)0), (safe_mod_func_uint16_t_u_u(((0xF1CAL == ((safe_sub_func_int16_t_s_s(((*l_787) = ((*l_638) = (safe_mod_func_uint8_t_u_u(((+(((((*g_620) == (g_783 != &g_784)) ^ (**l_642)) > (*l_766)) && 0x8918BA63783053C7LL)) >= g_786), g_786)))), g_70)) == (-8L))) | (**l_642)), (-3L)))))))), 3));
        (**g_644) = 0x78CB225FL;
    }

    ;
    return (*l_642);


}







static long long func_23(unsigned long long * p_24, char p_25, int p_26, unsigned char * p_27, unsigned p_28)
{
    int **l_624 = &g_75;
    g_623 = &g_15;
    (*g_625) = ((*l_624) = &p_26);

    ;
    ;
    return p_25;



}







static unsigned long long * func_29(unsigned p_30)
{
    short l_43 = 1L;
    unsigned *l_401 = &g_402;
    unsigned char *l_417 = &g_4;
    unsigned l_423 = 4294967295UL;
    int *l_427 = &g_262;
    int l_453 = 0xCCC4721FL;
    unsigned long long *l_470 = (void*)0;
    unsigned l_493 = 0x41BE1674L;
    unsigned char l_520 = 4UL;
    int *l_523 = &g_14;
    char l_537 = 7L;
    unsigned l_577 = 2UL;
    if (func_31(((*l_401) = func_37(func_39((l_43 >= ((safe_rshift_func_uint16_t_u_s(l_43, 8)) > (safe_mod_func_int16_t_s_s(g_7, func_48((safe_unary_minus_func_int8_t_s(p_30)), g_9))))), (g_182 ^ (p_30 == p_30)), &g_102))), &g_102, p_30, p_30, p_30))
    {
        long long *l_403 = &g_95;
        int l_407 = 0x7486EB96L;
        (*g_75) = (((*l_403) = p_30) | l_43);
        (*g_404) = l_401;

        ;
        l_407 = (safe_rshift_func_uint16_t_u_s(p_30, 4));
    }
    else
    {
        char l_412 = 0xFEL;
        unsigned short *l_418 = &g_70;
        unsigned long long *l_419 = &g_102;
        char *l_420 = (void*)0;
        char *l_421 = (void*)0;
        char *l_422 = &g_182;
        long long *l_424 = &g_11;
        int *l_425 = &g_66;
        int l_479 = 3L;
        int *l_496 = (void*)0;
        unsigned l_519 = 0x0D217EABL;
        if ((safe_rshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((l_412 < (safe_sub_func_int64_t_s_s(((*l_424) = (((*l_418) = (0x895629A1DBC6D311LL ^ (safe_lshift_func_uint8_t_u_s(func_57((**g_399), l_417, (**g_368), l_412), 5)))) <= (((l_423 = (0x06L | func_31(((*l_401) = ((((*l_422) = (func_31((g_180 < 0xE73EL), l_419, p_30, g_295, l_43) > g_180)) | 255UL) | p_30)), l_419, p_30, p_30, l_43))) != p_30) == g_140))), l_43))), p_30)), 5)))
        {
            int *l_426 = &g_66;
            int l_441 = 7L;
            l_426 = l_425;
            if (p_30)
            {
                int *l_428 = &g_14;
                int l_437 = 0x3BB0C62EL;
                l_427 = (void*)0;

                ;
                (*g_430) = l_428;

                ;
                (*l_428) = ((*l_426) = (func_31((p_30 < ((*l_422) = func_48((***g_343), p_30))), l_419, p_30, p_30, ((safe_mod_func_uint32_t_u_u(4294967295UL, (safe_lshift_func_int16_t_s_s(g_102, 6)))) < p_30)) & 0x0A35L));


                for (g_295 = (-25); (g_295 > (-22)); ++g_295)
                {
                    unsigned long long *l_438 = &g_102;
                    int l_443 = 0xB2B1DB1BL;
                    if (l_437)
                    {
                        (*l_428) = 0x45276D52L;
                        return l_438;


                    }
                    else
                    {
                        int **l_442 = &l_426;
                        (*l_428) = (safe_add_func_int16_t_s_s(((0L >= l_441) < 0x48L), 0L));
                        (*l_425) = 0x30767012L;
                        if ((*g_352))
                            break;
                        (*l_442) = (void*)0;

                        ;
                    }

                    ;
                    if (l_443)
                        break;
                    if (p_30)
                        continue;
                    for (g_140 = 0; (g_140 >= 16); g_140 = safe_add_func_int32_t_s_s(g_140, 1))
                    {
                        int l_446 = 9L;
                        (*l_425) = ((p_30 <= p_30) != 0xD80EL);
                        if (l_446)
                            continue;
                        (*l_425) = l_446;
                    }
                }

                ;
            }
            else
            {
                for (g_262 = (-11); (g_262 <= 16); g_262 = safe_add_func_int32_t_s_s(g_262, 9))
                {
                    unsigned char **l_449 = &l_417;
                    unsigned char **l_450 = (void*)0;
                    unsigned char *l_452 = &g_4;
                    unsigned char **l_451 = &l_452;
                    l_453 = (((*l_424) = p_30) == ((***g_343) > (((*l_449) = l_420) != ((*l_451) = &g_4))));

                    ;
                }

                ;
            }


            ;
            ;
            ;
        }
        else
        {
            int *l_464 = &g_262;
            if ((**g_317))
            {
                for (l_423 = 0; (l_423 <= 18); l_423++)
                {
                    if (p_30)
                        break;
                    if (p_30)
                        continue;
                    if ((*g_15))
                    {
                        int **l_456 = &l_425;
                        (*l_456) = (*g_303);

                        ;
                    }
                    else
                    {
                        if ((*g_352))
                            break;
                        (*g_75) = 2L;
                        (*g_75) = p_30;
                    }
                }

                ;
            }
            else
            {
                short l_459 = 0x31A3L;
                unsigned char *l_473 = &g_4;
                for (g_95 = (-11); (g_95 <= 17); g_95++)
                {
                    short l_467 = 0x9DECL;
                    (*l_425) = ((*l_464) = (((*l_418) = (l_459 && func_31(p_30, l_424, ((**g_344) = ((safe_sub_func_uint8_t_u_u(((*l_417) = (((*l_424) = (((((safe_lshift_func_int8_t_s_s((func_37(&g_4) ^ g_70), ((void*)0 != l_464))) <= ((safe_mod_func_int16_t_s_s(0x6539L, g_11)) || (*l_425))) != p_30) <= l_459) > p_30)) == p_30)), l_467)) ^ (*l_464))), g_182, l_467))) || 65530UL));
                }
                for (p_30 = 0; (p_30 < 26); p_30 = safe_add_func_uint32_t_u_u(p_30, 9))
                {
                    (*l_427) = ((*g_372) > ((void*)0 != l_470));
                }
                for (l_459 = 0; (l_459 > (-24)); l_459 = safe_sub_func_int32_t_s_s(l_459, 6))
                {
                    int l_476 = 0xD818300DL;
                    int **l_480 = (void*)0;
                    int **l_481 = &l_464;
                    (*g_75) = func_57((**g_399), l_473, (~0x498844D5L), ((*l_418) = (((*g_345) = (((((*l_425) = (!(((g_474 == (void*)0) == (-8L)) && 0xC9L))) | l_476) >= (safe_rshift_func_int16_t_s_u((-5L), l_479))) != p_30)) ^ p_30)));
                    (*l_481) = (void*)0;

                    ;
                    for (l_423 = (-15); (l_423 >= 34); l_423 = safe_add_func_uint32_t_u_u(l_423, 1))
                    {
                        int *l_484 = &l_453;
                        (*l_481) = (*l_481);
                        l_425 = l_484;

                        ;
                    }
                }

                ;
                ;
            }

            ;
            ;
        }


        ;
        ;
        ;
        if ((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(g_65, 7)), 14)))
        {
            unsigned long long *l_491 = &g_102;
            int l_492 = 0x9033E01CL;
            (*l_425) = ((safe_lshift_func_uint8_t_u_u((**g_245), func_31((&g_4 == (void*)0), l_424, (~func_31(p_30, (*g_400), (((*l_424) = func_31((65535UL >= (func_31(p_30, l_491, l_492, p_30, p_30) <= (*l_425))), l_470, p_30, g_295, g_9)) || 18446744073709551615UL), l_493, p_30)), l_492, g_402))) | 0x993EL);
            (*l_425) = 0xB6545873L;
        }
        else
        {
            unsigned l_502 = 0xABB2D718L;
            int l_503 = 1L;
            for (p_30 = 8; (p_30 != 30); p_30 = safe_add_func_uint8_t_u_u(p_30, 6))
            {
                (*l_425) = 0x5F6FEA2FL;
                (*g_497) = l_496;

                ;
            }


            for (l_493 = (-23); (l_493 > 60); l_493++)
            {
                short *l_512 = &l_43;
                short *l_513 = &g_514;
                int l_515 = 0xAE68CE1AL;
                short *l_516 = &g_517;
                char l_518 = 0x35L;
                int *l_521 = &l_503;
                int **l_522 = &l_425;
            }
        }


    }


    ;
    ;
    ;
    ;
    (*l_523) = (l_453 = l_43);
    (*g_317) = &l_453;

    ;
    if ((g_70 == (*l_523)))
    {
        long long l_524 = 1L;
        unsigned long long *l_526 = &g_102;
        int **l_536 = &l_427;
        int ***l_535 = &l_536;
        unsigned short l_557 = 0x49F0L;
        long long l_581 = 4L;
        (*g_525) = ((*g_75) = ((*l_523) = l_524));
        (*g_75) = (((*l_526) = p_30) > ((((safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((*g_97), p_30)), ((safe_lshift_func_int16_t_s_u((((*l_535) = &l_427) == (void*)0), (((-5L) > l_537) || ((*g_75) <= (*l_523))))) >= g_14))), p_30)) <= p_30) | 0xD9L) != 8L));
        for (g_295 = 0; (g_295 < 27); ++g_295)
        {
            unsigned short *l_543 = &g_65;
            int l_556 = 0x49FB5295L;
            unsigned long long ***l_582 = &g_400;
            int **l_598 = &g_369;
            int *l_600 = &l_556;
            int l_601 = 0x11B2B3D2L;
            unsigned char l_604 = 8UL;
            (*l_523) = (safe_unary_minus_func_uint64_t_u((safe_rshift_func_uint16_t_u_u(g_9, ((*l_543) = (!0x9236L))))));
        }
    }
    else
    {
        int *l_607 = &g_7;
        int **l_608 = &l_523;
        long long *l_611 = &g_95;
        unsigned char *l_612 = &g_4;
        (*g_372) = (safe_add_func_int8_t_s_s(p_30, 0xA1L));
        (*l_608) = l_607;

        ;
        (*l_608) = (*l_608);
        (**l_608) = ((safe_add_func_uint32_t_u_u((*g_345), ((((!((*l_611) = func_57((**g_399), &g_4, p_30, g_66))) < g_262) <= ((*l_612) = (+(g_140 | g_295)))) <= (*l_607)))) < (*l_607));
    }

    ;
    return l_470;



}







static int func_31(unsigned p_32, unsigned long long * p_33, unsigned p_34, unsigned char p_35, char p_36)
{
    return p_32;
}







static unsigned func_37(unsigned char * p_38)
{
    short l_386 = 0x0134L;
    int *l_389 = &g_7;
    unsigned long long **l_397 = &g_84;
    unsigned long long ***l_398 = &l_397;
    if (l_386)
    {
        int *l_387 = &g_14;
        int **l_388 = &l_387;
        (*l_388) = l_387;
        (*g_304) = l_389;

        ;
    }
    else
    {
        unsigned l_394 = 0x38D7EE5EL;
        int *l_395 = &g_14;
        int **l_396 = &g_75;
        (*g_75) = ((safe_mod_func_int16_t_s_s((*l_389), (*l_389))) != (safe_sub_func_uint32_t_u_u((l_394 == (((*g_345) = ((*g_345) && (*l_389))) < l_394)), (*l_389))));
        (*l_396) = l_395;

        ;
        (*g_134) = (**g_74);
        (**l_396) = (!0xC1642C3FL);
    }

    ;
    (*g_399) = ((*l_398) = l_397);

    ;
    return (*l_389);
}







static unsigned char * func_39(int p_40, unsigned long long p_41, unsigned long long * p_42)
{
    int *l_268 = &g_262;
    unsigned short l_271 = 65535UL;
    unsigned char *l_283 = &g_4;
    unsigned long long *l_381 = &g_102;
    unsigned long long **l_382 = &g_84;
    long long **l_385 = (void*)0;
    if ((g_14 != (**g_113)))
    {
        int **l_269 = &g_75;
        (*l_269) = l_268;

        ;
    }
    else
    {
        unsigned long long *l_282 = &g_102;
        int l_290 = 0xCC24070BL;
        unsigned char *l_309 = &g_4;
        unsigned long long **l_323 = &l_282;
        unsigned long long ***l_322 = &l_323;
        int *l_353 = &g_66;
        int *l_365 = &g_295;
        int **l_364 = &l_365;
        (*g_270) = &g_262;

        ;
    }

    ;
    (*g_75) = (((p_40 > (safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(0xC7D3L, ((safe_lshift_func_int16_t_s_s(g_182, ((*l_268) || ((l_381 == ((*l_382) = &g_102)) > ((safe_add_func_uint32_t_u_u(((void*)0 != l_385), (0xFEAB3DE261AEE968LL < (*p_42)))) || 0xFCB1L))))) || (-10L)))), 2)), 0))) | 0x76L) > (*l_268));
    return l_283;


}







static short func_48(unsigned p_49, char p_50)
{
    int *l_80 = &g_66;
    unsigned char *l_85 = &g_4;
    int l_110 = 9L;
    unsigned long long *l_144 = &g_102;
    long long *l_175 = &g_95;
    long long **l_174 = &l_175;
    long long l_196 = 0xCA8444AC55104165LL;
    int l_197 = 0L;
    short l_205 = 7L;
    unsigned l_243 = 0xE2AD39FBL;
    if (((*l_80) = func_52(&g_4)))
    {
        char l_81 = 0x88L;
        unsigned char *l_100 = &g_4;
        unsigned long long *l_101 = &g_102;
        int l_107 = 0x6EFE450DL;
        unsigned char **l_135 = (void*)0;
        unsigned char **l_136 = &l_100;
        int *l_137 = &l_107;
        int l_138 = 0x71DF8105L;
        int *l_139 = &g_140;
        char l_147 = (-9L);
        int **l_148 = &g_75;
        if (p_49)
        {
lbl_111:
            (*l_80) = l_81;
        }
        else
        {
            long long *l_94 = &g_95;
            int l_96 = 0x075F97E6L;
            unsigned char *l_119 = &g_4;
            unsigned short *l_124 = (void*)0;
lbl_112:
            (*g_97) = ((*l_80) = (safe_mod_func_int16_t_s_s(((p_50 && func_57(g_84, l_85, func_52(l_85), (safe_add_func_uint32_t_u_u((safe_mod_func_int64_t_s_s((safe_sub_func_int32_t_s_s(((p_49 < g_9) & (((*l_94) = (safe_rshift_func_uint8_t_u_s(((*l_85) = p_49), l_81))) & p_50)), l_96)), p_49)), 1L)))) || l_81), l_96)));
            for (g_66 = 0; (g_66 == 29); g_66++)
            {
                int *l_108 = &l_107;
                int l_123 = 0L;
                unsigned long long *l_128 = &g_102;
                if (func_57(g_84, l_100, ((*l_108) = (func_57(l_101, &g_4, ((&l_96 != (*g_74)) | (safe_lshift_func_int16_t_s_u((l_96 | l_96), ((safe_sub_func_uint16_t_u_u(l_107, g_70)) | g_14)))), g_95) >= p_50)), p_50))
                {
                    int *l_109 = &l_96;
                    l_110 = ((*l_109) = p_49);
                    if (g_66)
                        goto lbl_111;
                    if (p_50)
                        goto lbl_112;
                    (*l_109) = ((void*)0 != g_113);
                }
                else
                {
                    char l_120 = 5L;
                    unsigned short **l_125 = &l_124;
                    unsigned long long l_129 = 0x2223AA5B3E5B6057LL;
                    if (((safe_add_func_int64_t_s_s((g_9 <= (safe_mod_func_int8_t_s_s(((&g_4 != l_119) != (((l_120 && (safe_lshift_func_int8_t_s_s(l_123, l_120))) | (&g_70 == ((*l_125) = l_124))) >= (safe_mod_func_uint8_t_u_u(((func_57(l_128, &g_4, g_7, l_129) < 1UL) < l_107), 255UL)))), 0x07L))), g_9)) & g_11))
                    {
                        unsigned long long **l_131 = &g_84;
                        unsigned long long ***l_130 = &l_131;
                        (*l_130) = &l_128;

                        ;
                    }
                    else
                    {
                        int *l_132 = &l_96;
                        (*l_132) = 0x594A5162L;
                    }
                }
                (*g_134) = (((safe_unary_minus_func_uint32_t_u(g_16)) < l_96) <= g_9);
            }
        }
        (*l_80) = (((p_50 | func_57(l_101, ((*l_136) = l_85), ((*l_139) = (l_138 = ((*l_137) = p_49))), p_50)) && (safe_lshift_func_int8_t_s_u((safe_unary_minus_func_int16_t_s(((func_57(l_144, &g_4, (safe_lshift_func_uint16_t_u_s((*l_80), 11)), l_147) | p_50) == p_50))), 1))) >= 0x16L);
        (*l_148) = &l_138;

        ;
    }
    else
    {
        int *l_149 = &g_66;
        l_149 = (void*)0;

        ;
        for (l_110 = 12; (l_110 == 28); l_110 = safe_add_func_uint16_t_u_u(l_110, 7))
        {
            return p_50;
        }
        return p_50;
    }


    (*l_80) = 0xA3610563L;
    for (l_110 = (-30); (l_110 >= 2); l_110 = safe_add_func_uint64_t_u_u(l_110, 2))
    {
        int *l_154 = &g_66;
        int **l_155 = &g_75;
        (*l_155) = l_154;

        ;
        (*g_156) = ((*g_75) = (**l_155));
    }


    for (l_110 = 0; (l_110 > (-1)); --l_110)
    {
        int *l_159 = &g_14;
        unsigned long long *l_186 = &g_102;
        int *l_259 = &l_197;
        int *l_260 = &g_14;
        int *l_261 = &g_262;
    }
    return g_182;
}







static int func_52(unsigned char * p_53)
{
    int *l_54 = &g_14;
    unsigned long long *l_62 = (void*)0;
    unsigned char *l_63 = &g_4;
    unsigned short *l_64 = &g_65;
    long long *l_68 = &g_9;
    long long **l_67 = &l_68;
    unsigned short *l_69 = &g_70;
    (*l_54) = (&g_7 == (void*)0);
    if ((safe_rshift_func_uint8_t_u_s(((((*l_54) & func_57(l_62, l_63, (*l_54), (g_66 = ((*l_64) = g_14)))) < ((*l_69) = ((((*l_67) = l_62) != (void*)0) == (*l_54)))) && g_65), g_11)))
    {
        int *l_71 = &g_66;
        l_71 = (void*)0;

        ;
    }
    else
    {
        int *l_72 = &g_66;
        int **l_77 = (void*)0;
        int **l_78 = &l_72;
        int **l_79 = &g_75;
        (*g_74) = l_72;

        ;
        l_54 = l_72;

        ;
        (*l_72) = (*g_15);
        (*l_79) = ((*l_78) = l_54);
    }

    ;
    ;
    return (*l_54);
}







static long long func_57(unsigned long long * p_58, unsigned char * p_59, int p_60, unsigned short p_61)
{
    return g_16;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    transparent_crc(g_402, "g_402", print_hash_value);
    transparent_crc(g_475, "g_475", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    transparent_crc(g_517, "g_517", print_hash_value);
    transparent_crc(g_618, "g_618", print_hash_value);
    transparent_crc(g_621, "g_621", print_hash_value);
    transparent_crc(g_786, "g_786", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
