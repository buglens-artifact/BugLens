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



static short g_10 = 1L;
static unsigned short g_12 = 0x6721L;
static unsigned short g_24 = 0xBC3EL;
static int g_60 = 0xAEDF47F2L;
static unsigned short *g_74 = (void*)0;
static int g_87 = (-7L);
static unsigned g_91 = 6UL;
static unsigned char g_93 = 249UL;
static unsigned char g_108 = 1UL;
static int g_111 = 0xC43CAE23L;
static int *g_110 = &g_111;
static unsigned short g_117 = 65535UL;
static char g_126 = 0L;
static char g_127 = 0L;
static int *g_129 = &g_87;
static unsigned g_135 = 4294967292UL;
static int ** volatile g_146 = (void*)0;
static int ** volatile g_147 = &g_129;
static int * volatile g_174 = &g_87;
static int g_194 = (-1L);
static int * volatile g_193 = &g_194;
static int ** volatile g_197 = (void*)0;
static int ** volatile g_198 = (void*)0;
static int ** volatile g_199 = (void*)0;
static int *g_201 = &g_194;
static int ** volatile g_200 = &g_201;
static int ** volatile g_218 = &g_129;
static int ** volatile g_220 = (void*)0;
static unsigned char *g_224 = &g_108;
static unsigned char * const *g_223 = &g_224;
static int ** volatile g_235 = &g_129;
static short g_237 = 0xF38EL;
static short *g_236 = &g_237;
static int ** const volatile g_252 = &g_129;
static int ** volatile g_253 = &g_201;
static int ** volatile g_264 = &g_201;
static char *g_288 = &g_127;
static char **g_287 = &g_288;
static int ** volatile g_293 = &g_201;
static int * volatile g_308 = &g_87;
static char g_323 = 0xB4L;
static unsigned short *g_327 = &g_117;
static unsigned g_413 = 0x8338B1BCL;
static unsigned short **g_419 = &g_74;
static unsigned short *** volatile g_418 = &g_419;
static unsigned short g_446 = 0x4006L;
static int * volatile g_450 = &g_87;
static int ** volatile g_482 = &g_129;
static const int g_498 = 3L;
static char *** volatile g_507 = &g_287;
static const int *g_559 = &g_111;
static const int **g_558 = &g_559;
static const int *** volatile g_557 = &g_558;
static int g_580 = 0xA662529FL;
static unsigned short *g_589 = (void*)0;
static unsigned short ***g_595 = &g_419;
static int ** volatile g_616 = &g_129;
static int **g_629 = &g_201;
static int *** volatile g_628 = &g_629;
static unsigned short *g_630 = &g_24;
static volatile char g_645 = 0x0BL;
static int * volatile g_660 = &g_194;
static volatile char g_671 = 1L;
static volatile int g_699 = 0x5A856783L;
static volatile int * volatile g_698 = &g_699;
static volatile int * volatile *g_697 = &g_698;
static volatile int * volatile **g_696 = &g_697;
static volatile int * volatile ***g_695 = &g_696;
static const int *g_706 = &g_580;
static unsigned char g_720 = 0x20L;
static int ** volatile g_724 = &g_129;
static volatile char * volatile g_739 = (void*)0;
static int * volatile g_785 = &g_87;
static unsigned short g_792 = 0x3AE9L;
static int ** volatile g_797 = &g_129;
static volatile unsigned g_817 = 0UL;
static volatile unsigned *g_816 = &g_817;
static volatile unsigned **g_815 = &g_816;
static unsigned short g_901 = 0x440BL;
static int ** volatile g_903 = (void*)0;
static int ** volatile g_910 = &g_201;
static char **g_917 = &g_288;
static int ** volatile g_921 = &g_201;
static char g_924 = 0x57L;
static int ** volatile g_1028 = &g_201;
static int g_1070 = 0xABFEE621L;



static unsigned char func_1(void);
static int func_2(int p_3, const unsigned p_4, char p_5, unsigned short p_6, unsigned short p_7);
static short func_13(unsigned p_14, unsigned short * p_15, unsigned short p_16, unsigned short * p_17, unsigned p_18);
static unsigned short * func_20(unsigned short p_21, unsigned short * p_22);
static unsigned short * func_25(unsigned short * p_26, unsigned short * p_27, unsigned short * p_28, int p_29);
static unsigned short * func_30(short p_31, unsigned short * p_32, unsigned short * p_33, const unsigned char p_34, const unsigned short * p_35);
static int func_42(short p_43, unsigned short * p_44, short p_45, unsigned short p_46);
static const unsigned short func_52(int p_53, unsigned short * p_54, short p_55, unsigned short * p_56, unsigned char p_57);
static unsigned short * func_61(int * p_62, short p_63, unsigned p_64, unsigned char p_65);
static int * func_66(int * p_67, unsigned p_68, unsigned p_69, unsigned short * p_70);
static unsigned char func_1(void)
{
    unsigned short *l_11 = &g_12;
    int l_19 = (-10L);
    unsigned short *l_23 = &g_24;
    unsigned short l_47 = 7UL;
    unsigned l_149 = 0x204C5B33L;
    unsigned short **l_431 = &g_327;
    char l_635 = 0xB8L;
    short *l_777 = &g_237;
    int *l_798 = (void*)0;
    int *l_799 = &g_580;
    unsigned short *l_801 = &g_446;
    unsigned l_812 = 0x1256A9D8L;
    unsigned char l_814 = 1UL;
    char l_825 = 0xC3L;
    unsigned l_831 = 0x067F7095L;
    int l_863 = 0L;
    char **l_878 = (void*)0;
    unsigned l_969 = 0UL;
    unsigned l_973 = 0x5C20C31BL;
    char l_990 = 7L;
    unsigned short *l_992 = &g_117;
    int l_993 = (-1L);
    unsigned l_1015 = 0x805C9840L;
    unsigned l_1022 = 5UL;
    int ****l_1056 = (void*)0;
    int l_1064 = 0xFC34F845L;
    if (func_2((safe_sub_func_uint16_t_u_u(((*l_11) = g_10), ((*l_777) = func_13(l_19, func_20((l_23 != ((*l_431) = func_25(l_11, func_30((g_24 ^ (safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(g_24, func_42(((l_47 <= (l_19 == ((safe_add_func_uint16_t_u_u(l_19, l_47)) == 0xFCC013CEL))) < l_19), &g_24, g_10, g_24))), l_149)), (-3L)))), &l_47, &g_24, l_149, &g_24), &l_47, g_24))), &g_24), (*g_630), &g_24, l_635)))), g_323, g_323, l_635, g_24))
    {
        int l_795 = (-1L);
        for (l_635 = 0; (l_635 == 29); ++l_635)
        {
            int *l_796 = &g_194;
            (*l_796) |= l_795;
            (*g_797) = &l_795;

            ;
        }


        l_799 = l_798;

        ;
    }
    else
    {
        unsigned l_800 = 0UL;
        unsigned short *l_806 = (void*)0;
        unsigned short **l_807 = (void*)0;
        unsigned char l_813 = 0xB7L;
        (*l_799) = func_42(l_800, l_801, func_52((*g_559), &l_47, (safe_mod_func_uint8_t_u_u((((*g_224) &= ((**g_287) > (***g_507))) | (safe_sub_func_uint8_t_u_u((l_813 = l_800), (**g_287)))), l_800)), l_806, l_800), l_800);


    }




    ;







    ;
    ;
    ;
    l_814 = (65534UL >= 3UL);
    if ((*g_174))
    {
        int *l_818 = &l_19;
        unsigned short *l_847 = (void*)0;
        unsigned *l_891 = (void*)0;
        unsigned **l_890 = &l_891;
        int l_974 = 1L;
        if (((*l_818) ^= (g_815 == &g_816)))
        {
            unsigned short *l_823 = &g_12;
            int l_826 = 9L;
            unsigned l_842 = 0x125F0955L;
            unsigned char **l_876 = &g_224;
            unsigned short *l_886 = &g_12;
            int *l_887 = &g_60;
            for (g_91 = 17; (g_91 > 27); g_91 = safe_add_func_uint16_t_u_u(g_91, 9))
            {
                unsigned short *l_824 = (void*)0;
                int l_827 = 0x9A32364FL;
                unsigned char *l_828 = &l_814;
                unsigned short l_832 = 0xF76AL;
                (***g_695) = (void*)0;

                ;
                if ((((safe_rshift_func_uint16_t_u_u(((l_826 == ((*l_828) = ((*g_224) |= l_827))) == (safe_lshift_func_uint16_t_u_u(l_827, l_827))), l_832)) >= (***g_507)) || (*l_818)))
                {
                    unsigned short l_839 = 0x5EA3L;
                    char l_865 = 0x3AL;
                    unsigned short *** const *l_868 = &g_595;
                    for (l_832 = 22; (l_832 > 38); l_832 = safe_add_func_int32_t_s_s(l_832, 1))
                    {
                        unsigned short **l_845 = &g_74;
                        unsigned short **l_846 = &l_823;
                        unsigned short **l_848 = &g_327;
                        unsigned short **l_849 = (void*)0;
                        unsigned short **l_850 = (void*)0;
                        unsigned short *l_851 = &g_117;
                        int l_864 = (-1L);
                        l_827 = (0x2BL != (safe_lshift_func_int8_t_s_s((!((safe_mod_func_int32_t_s_s((l_839 <= (safe_sub_func_uint32_t_u_u(((l_842 && ((((*l_846) = l_823) == (l_851 = l_847)) >= ((safe_unary_minus_func_int16_t_s((((**g_815) & (*l_818)) < l_827))) < l_839))) && (*g_193)), g_87))), 0xD3D88085L)) > g_792)), 0)));

                        ;
                        (**g_696) = (*g_697);
                        (*l_818) |= (safe_add_func_int16_t_s_s((*g_236), (safe_mod_func_int16_t_s_s(((((((void*)0 != &g_237) >= ((safe_sub_func_uint8_t_u_u((l_842 < (safe_mod_func_int16_t_s_s((*g_236), ((((g_135 = ((((l_839 <= (((0x87E8395BL ^ (((*l_777) &= (safe_sub_func_int16_t_s_s(0L, ((**g_287) ^ 0x60L)))) ^ (*g_236))) == (*g_236)) > 0xBEL)) <= (***g_507)) <= l_863) | 0x5CL)) & l_864) & l_865) & (**g_287))))), (*g_288))) ^ l_832)) || (*g_224)) == l_832) | g_413), l_865))));
                        (*g_252) = &l_19;

                        ;
                    }
                    (*g_218) = &l_19;

                    ;
                    if ((((0x5C6DL > ((*l_818) = l_826)) | (*g_288)) ^ (safe_mod_func_uint32_t_u_u(4294967295UL, 0x67FE2CCAL))))
                    {
                        unsigned short *** const **l_869 = &l_868;
                        (*g_129) ^= ((!(*g_224)) ^ (&g_418 != ((*l_869) = l_868)));
                        return (*g_224);


                    }
                    else
                    {
                        unsigned char **l_877 = (void*)0;
                        char **l_880 = &g_288;
                        char ***l_879 = &l_880;
                        char **l_882 = (void*)0;
                        char ***l_881 = &l_882;
                        int l_885 = 0xB06B7622L;
                        (*g_129) = (safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s(l_839, 0x2FL)), (*g_236)));
                    }
                }
                else
                {
                    int **l_888 = &g_110;
                    int l_889 = 0x7EF30859L;
                    if (((1L | (l_887 == ((*l_888) = l_887))) || l_889))
                    {
                        unsigned ***l_892 = &l_890;
                        int *l_893 = &l_826;
                        (*l_892) = l_890;
                        (*l_818) |= 0xB0031813L;
                        (*l_893) = ((*l_818) = (*g_450));
                    }
                    else
                    {
                        unsigned short * const *l_896 = &g_327;
                        unsigned short * const **l_897 = &l_896;
                        unsigned short * const l_900 = &g_901;
                        unsigned short * const *l_899 = &l_900;
                        unsigned short * const **l_898 = &l_899;
                        int l_902 = 0x2020B95BL;
                        (*l_818) &= (1L == ((*g_224) == l_827));
                        l_902 ^= (((safe_lshift_func_uint8_t_u_s(0x81L, 7)) | 5L) && (((*l_898) = ((*l_897) = l_896)) != (void*)0));

                        ;
                        (*l_818) |= 0x28B2AD4CL;
                        l_889 &= (*l_818);
                    }

                    ;
                }
                l_826 = l_842;
                (*l_818) |= (*g_193);
            }

            ;

            l_826 |= (*l_818);
            (*g_253) = &l_19;

            ;
        }
        else
        {
            const short l_904 = 1L;
            char *l_905 = &g_323;
            unsigned short *l_906 = &g_24;
            int *l_938 = &g_580;
            unsigned l_948 = 18446744073709551613UL;
            unsigned short *l_956 = (void*)0;
            int ***l_965 = &g_629;
            int **** const l_964 = &l_965;
            char l_966 = (-1L);
            unsigned char l_967 = 0x9DL;
            if ((l_904 && ((*l_905) |= (***g_507))))
            {
                unsigned short *l_907 = &l_47;
                int l_908 = (-1L);
                unsigned short *l_909 = &g_446;
                int *l_939 = &l_908;
                (*g_910) = &l_908;

                ;
                for (g_901 = (-23); (g_901 >= 59); g_901 = safe_add_func_uint32_t_u_u(g_901, 1))
                {
                    unsigned short *l_913 = &g_12;
                    char ***l_916 = &l_878;
                    int l_918 = 0x51120678L;
                    int l_919 = (-4L);
                    short l_920 = 0xF9D1L;
                    if ((func_42((*g_236), l_913, ((((*l_907) &= 0x1F6DL) | ((l_904 != (((safe_sub_func_int16_t_s_s(func_42((l_918 = (((*l_916) = (*g_507)) != (g_917 = &g_288))), l_847, (&g_419 == (void*)0), (*l_818)), l_908)) < (*g_236)) || (*l_818))) < l_919)) <= l_919), (*l_818)) > l_920))
                    {
                        (*g_201) &= 0x2ADA6212L;
                        return (*g_224);


                    }
                    else
                    {
                        (*g_921) = (*g_200);
                        return (**g_223);


                    }
                }
                if (l_904)
                {
                    unsigned short *l_922 = (void*)0;
                    int l_923 = (-10L);
                    (*l_818) = (l_908 &= (-1L));
                    (*l_818) = (4294967287UL | g_924);
                    for (g_323 = 0; (g_323 > 13); g_323++)
                    {
                        unsigned short l_927 = 6UL;
                        l_927 = ((*g_201) = (**g_200));
                    }
                    (*g_201) = ((*l_818) &= l_923);
                }
                else
                {
                    for (g_924 = 18; (g_924 >= (-27)); --g_924)
                    {
                        unsigned char *l_935 = &g_93;
                        unsigned char *l_937 = &g_720;
                        (*g_797) = (l_938 = func_66(&l_863, ((**g_223) == (((*g_201) &= (safe_unary_minus_func_uint16_t_u((+(*l_818))))) < ((*g_236) > ((*l_777) &= (*g_236))))), ((safe_rshift_func_uint8_t_u_s(((*l_935) = (*g_224)), ((*l_905) = (~(*l_818))))) < (+((*l_937) = (safe_unary_minus_func_int32_t_s((*g_193)))))), l_906));

                        ;
                        ;
                        l_939 = (*g_921);
                        if ((*l_818))
                            break;
                    }


                    ;
                    (*l_818) = (safe_mod_func_int16_t_s_s(0x60BFL, 0x4B64L));
                }


                ;
            }
            else
            {
                int l_955 = 0xC7C86226L;
                unsigned *l_968 = &g_413;
                unsigned short *l_970 = &g_24;
                unsigned l_971 = 4294967295UL;
                int *l_972 = &g_194;
                l_19 = (*l_938);
            }


            ;
        }

        ;


    }
    else
    {
        unsigned short * const *l_988 = (void*)0;
        unsigned short * const **l_987 = &l_988;
        const int l_989 = 0xC8710569L;
        unsigned short *l_991 = (void*)0;
        int l_998 = 0xFBF67ED0L;
        int *l_1027 = &l_19;
        int *l_1045 = &l_993;
        unsigned short l_1063 = 0x51E6L;
        g_194 |= ((safe_mod_func_uint16_t_u_u((((*g_785) = ((***g_507) != (safe_mod_func_int16_t_s_s((safe_mod_func_int16_t_s_s(0xD295L, (safe_lshift_func_int8_t_s_s((**g_917), 1)))), (safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s((&g_327 == ((*l_987) = &g_630)), (!(!(l_989 && l_989))))), 0xA4L)))))) || (**g_815)), l_989)) ^ l_993);

        ;
        for (g_10 = (-19); (g_10 == 28); ++g_10)
        {
            int * const l_1001 = &l_993;
            unsigned short *l_1016 = &g_117;
            int l_1023 = 1L;
            int *l_1046 = &l_863;
            unsigned short *l_1052 = &g_901;
            int **l_1059 = &l_1046;
            unsigned *l_1062 = &g_413;
            int *l_1065 = &g_194;
            for (g_901 = 18; (g_901 <= 10); g_901 = safe_sub_func_int8_t_s_s(g_901, 2))
            {
                int l_999 = 3L;
                int l_1021 = (-1L);
                unsigned short l_1031 = 1UL;
                int *l_1044 = &l_19;
                int *** const l_1051 = (void*)0;
                if ((((l_998 &= l_989) && (**g_223)) | l_999))
                {
                    int l_1000 = 0x109E4502L;
                    int l_1012 = 0xCEC5DB8EL;
                    unsigned short *l_1019 = &g_117;
                    const int *l_1032 = &l_998;
                    if (l_1000)
                    {
                        int **l_1002 = &l_799;
                        unsigned short *l_1020 = (void*)0;
                        (*l_1002) = l_1001;

                        ;
                        l_1023 = (safe_mod_func_int16_t_s_s((((((safe_unary_minus_func_int32_t_s(((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((*l_1001) |= (l_1021 &= ((safe_mod_func_uint8_t_u_u(0xC2L, (l_1012 &= ((void*)0 != (*g_815))))) || (safe_rshift_func_uint16_t_u_u(9UL, func_52(l_1015, l_1016, (safe_mod_func_int32_t_s_s(0xEC89A966L, func_52((*g_559), l_1019, l_989, &g_117, (*g_224)))), l_1020, l_999)))))), (*g_236))), l_1000)) != 0UL))) != 0x8B1FL) <= (*g_288)) > 0xCCL) | 0x21L), l_1022));
                    }
                    else
                    {
                        short l_1024 = 0x0F1AL;
                        return l_1024;



                    }

                    ;
                    for (l_1021 = 21; (l_1021 <= 21); l_1021++)
                    {
                        (*g_1028) = (l_1027 = &l_998);

                        ;
                        ;
                    }
                    for (g_12 = (-11); (g_12 > 35); g_12++)
                    {
                        if ((*g_660))
                            break;
                        (*l_799) = l_1031;
                        if ((*l_799))
                            break;
                        l_1032 = &l_989;

                        ;
                    }

                    ;
                }
                else
                {
                    int ***l_1049 = (void*)0;
                    int ****l_1050 = &l_1049;
                    int l_1053 = 0x6E7EC941L;
                    for (g_12 = 0; (g_12 != 27); g_12 = safe_add_func_uint16_t_u_u(g_12, 6))
                    {
                        int **l_1035 = &l_799;
                        (*l_1035) = &l_1021;

                        ;
                        (**l_1035) = func_2((safe_sub_func_uint16_t_u_u((*l_1027), (safe_lshift_func_uint16_t_u_s((**l_1035), (~(((*g_236) = ((*g_236) != l_1031)) || (safe_add_func_uint16_t_u_u(l_999, (0x479C7B07L & ((safe_lshift_func_int16_t_s_u(l_1031, (*l_1001))) || 0x3E702DC3L)))))))))), (*g_816), (**l_1035), (**l_1035), (*l_1001));
                        (*l_799) = (*l_1027);
                        l_1045 = l_1044;

                        ;
                    }


                    (*g_264) = func_66(func_66(func_66(l_1046, (((safe_rshift_func_int8_t_s_s(((**g_917) ^= 0xA2L), 7)) ^ ((*l_1027) || ((void*)0 != (*g_917)))) <= ((*l_1001) = (((*l_1050) = l_1049) == l_1051))), (**g_815), l_1016), g_10, g_194, l_1052), g_720, l_1053, &g_446);

                    ;
                    if ((*l_1045))
                        continue;

                }


            }
            (*l_1027) = (*g_193);
            (*l_1065) |= ((*g_236) <= (((safe_rshift_func_uint8_t_u_u(((*g_224) = (*l_1001)), 3)) <= ((l_1056 != &g_557) & (safe_sub_func_int16_t_s_s(((func_2((*g_559), (((*l_1059) = &g_60) != (void*)0), (***g_507), ((*l_992) = ((((*l_1062) = ((*l_1027) || (*l_1001))) >= 0L) < 65535UL)), l_1063) >= (*l_1027)) ^ (*l_1027)), l_1064)))) != (-1L)));

            ;
        }




        ;
        ;
        for (g_127 = 0; (g_127 > 3); ++g_127)
        {
            if ((*l_1027))
                break;
        }
        (*l_1027) = ((safe_add_func_uint8_t_u_u((+func_2(((**g_223) || (*g_224)), (*g_816), (safe_mod_func_int32_t_s_s(l_831, 0xDB567FB2L)), (*l_1045), (*l_1045))), (**g_223))) <= (**g_223));
    }

    ;



    (*g_697) = (***g_695);
    return (*g_224);



}







static int func_2(int p_3, const unsigned p_4, char p_5, unsigned short p_6, unsigned short p_7)
{
    short l_780 = (-1L);
    unsigned *l_781 = &g_413;
    const unsigned l_782 = 0x17D46919L;
    int l_783 = (-4L);
    int *l_784 = &g_580;
    l_783 &= ((safe_sub_func_uint32_t_u_u(((*l_781) = (p_3 >= l_780)), 0xE16115A8L)) ^ l_782);
    (*g_785) ^= (((*l_784) = p_3) < ((+(-10L)) && ((l_783 = p_3) ^ g_498)));
    for (l_780 = (-11); (l_780 <= (-26)); l_780 = safe_sub_func_int8_t_s_s(l_780, 2))
    {
        int *l_788 = &g_580;
        int **l_789 = (void*)0;
        int **l_790 = (void*)0;
        int **l_791 = &g_201;
        (*l_791) = l_788;

        ;
    }
    return g_792;
}







static short func_13(unsigned p_14, unsigned short * p_15, unsigned short p_16, unsigned short * p_17, unsigned p_18)
{
    unsigned short *l_640 = (void*)0;
    short *l_643 = &g_237;
    int *l_644 = &g_87;
    short l_683 = 0xF3F9L;
    char l_701 = 1L;
    unsigned l_714 = 0x6E66771DL;
    int ***l_719 = &g_629;
    unsigned short *l_769 = &g_117;
    int *l_771 = &g_580;
    unsigned l_772 = 4294967295UL;
    unsigned short **l_773 = &g_589;
    char l_774 = 1L;
    unsigned short *l_775 = &g_117;
    int l_776 = 0x55933D4CL;
    if (((**g_287) < func_52(((safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s((((*p_17) < (*g_236)) | (*g_308)), g_135)), p_18)) ^ p_16), &g_24, (*g_236), l_643, (*l_644))))
    {
        for (p_18 = 17; (p_18 != 29); p_18 = safe_add_func_int16_t_s_s(p_18, 6))
        {
            int **l_648 = (void*)0;
            int *l_649 = &g_87;
            l_649 = (*g_616);

            ;
        }
    }
    else
    {
        const char l_654 = 1L;
        int l_661 = (-1L);
        unsigned short *l_667 = &g_117;
        unsigned short ****l_749 = (void*)0;
        int ****l_762 = &l_719;
        unsigned l_768 = 1UL;
        for (p_14 = 0; (p_14 >= 5); p_14 = safe_add_func_int16_t_s_s(p_14, 6))
        {
            int *l_657 = &g_580;
            (*l_657) = ((*l_644) = (safe_sub_func_uint32_t_u_u((*l_644), (l_654 != (safe_lshift_func_int16_t_s_u((*g_236), 6))))));
        }
        l_644 = (*g_218);

        ;
        if (p_18)
        {
            (*g_660) = (0x30L | ((*g_288) = (g_111 != (safe_rshift_func_uint16_t_u_s((*p_17), 8)))));
            l_661 ^= (!(-6L));
        }
        else
        {
            unsigned short l_664 = 0x2DFCL;
            int *l_668 = &l_661;
            int **l_669 = &g_201;
            int *l_670 = &l_661;
            unsigned short **l_672 = (void*)0;
            unsigned short **l_673 = &g_630;
            int l_707 = 7L;
            char l_742 = 0x55L;
            unsigned short ****l_750 = &g_595;
            unsigned short l_767 = 0x8B4FL;
            l_661 = func_42(((safe_rshift_func_int8_t_s_u(p_14, (!p_14))) && l_664), &p_16, p_14, (*p_17));


            (*l_669) = (l_668 = l_644);

            ;
            ;
            (*l_670) ^= 0x3EEFF37AL;
            if ((+(((*l_670) = ((func_42((+g_671), &p_16, p_14, (func_52((*g_110), (p_17 = &p_16), ((*g_236) != p_18), ((*l_673) = &p_16), (*g_224)) != p_14)) == 0xA2L) && (-1L))) != (-1L))))
            {
                int l_678 = (-2L);
                unsigned short ***l_738 = &g_419;
                char *l_740 = &g_126;
                int **l_743 = &g_110;
                unsigned short *l_746 = &g_24;
                int *l_747 = (void*)0;
                (*l_670) = (((safe_mod_func_int16_t_s_s(((*g_236) = (safe_add_func_int32_t_s_s(p_16, 0xEADE6E5EL))), 0x0F2BL)) || g_446) == (*g_308));
                (*l_670) ^= 1L;
                if ((l_654 >= (safe_unary_minus_func_int16_t_s(l_654))))
                {
                    int l_680 = 0x352F13D6L;
                    if ((l_680 >= (*g_224)))
                    {
                        (*l_669) = (void*)0;
                    }
                    else
                    {
                        char *l_700 = &g_126;
                        int *l_702 = (void*)0;
                        int *l_703 = &g_580;
                        const int *l_705 = &g_498;
                        const int **l_704 = &l_705;
                        (*l_703) ^= (safe_sub_func_uint32_t_u_u(((***g_507) < (*l_670)), (g_135 != (((*p_17) == l_683) > ((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s((safe_rshift_func_int16_t_s_u(((*l_643) = (((((*l_700) = (0x5CEE56FBL && ((safe_mod_func_uint8_t_u_u(((*g_224) || p_14), p_14)) != (*l_670)))) & (**g_223)) <= l_701) <= l_678)), (*p_17))))), 7)) <= p_18)))));
                        g_706 = ((*l_704) = (*l_669));

                        ;
                        ;
                    }

                    ;
                    l_707 = 0xC7C7A1ADL;
                    for (g_87 = 0; (g_87 == 27); g_87 = safe_add_func_uint32_t_u_u(g_87, 9))
                    {
                        unsigned *l_715 = &g_91;
                        int *l_716 = &g_194;
                        (***g_696) = p_16;
                        (****g_695) ^= ((*l_716) ^= ((~(safe_mod_func_uint32_t_u_u(g_87, p_16))) | ((safe_rshift_func_uint16_t_u_s((~(*g_630)), ((*g_236) = (0x2DFA1F45L != ((*l_715) = (l_714 = (((*p_17) == (*l_670)) == (*g_630)))))))) && (*g_630))));
                        return p_14;


                    }
                    g_720 = (((*g_224) == ((*g_695) == l_719)) < 0x00FEL);
                }
                else
                {
                    int l_721 = 0L;
                    (****g_695) &= (-7L);
                    (**g_696) = (void*)0;

                    ;
                    l_661 = p_14;
                    (*l_670) &= l_721;
                }

                ;
                ;
                if (p_16)
                {
                    (*l_670) = p_18;
                    for (g_194 = 0; (g_194 < 14); g_194 = safe_add_func_uint16_t_u_u(g_194, 5))
                    {
                        return (*g_236);


                    }
                    (**g_696) = (void*)0;

                    ;
                    (*g_724) = ((*l_669) = &l_661);

                    ;
                    ;
                }
                else
                {
                    unsigned short ****l_727 = (void*)0;
                    unsigned short ****l_728 = &g_595;
                    unsigned short ****l_729 = &g_595;
                    unsigned short ****l_730 = &g_595;
                    unsigned short ****l_731 = &g_595;
                    unsigned short ****l_732 = &g_595;
                    unsigned short ****l_733 = &g_595;
                    unsigned short ****l_734 = &g_595;
                    unsigned short ****l_735 = &g_595;
                    unsigned short ****l_736 = &g_595;
                    unsigned short ****l_737 = &g_595;
                    unsigned *l_741 = &g_91;
                    int *l_748 = &l_678;
                    unsigned short l_757 = 0xC461L;
                    unsigned **l_758 = (void*)0;
                    unsigned **l_759 = &l_741;
                    if ((((((*l_741) = (func_42(((*g_236) &= (safe_sub_func_uint8_t_u_u(p_18, (l_678 < (*p_17))))), (*l_673), ((l_738 = &g_419) == &g_419), (*p_17)) && (g_739 != l_740))) < 4294967292UL) ^ p_18) <= 0UL))
                    {
                        int ***l_744 = &l_743;
                        int l_745 = 0xB57C8751L;
                        (*l_670) ^= ((g_580 <= (0xDFL || ((**g_223) = l_742))) & (((*g_630) = (~(*p_17))) != (&g_110 != ((*l_744) = l_743))));
                        l_745 = 0L;
                    }
                    else
                    {
                        (*l_670) ^= p_18;
                        l_747 = func_66(func_66(&g_60, p_14, g_126, &g_446), g_60, g_24, l_746);


                        ;
                        l_748 = &l_661;

                        ;
                    }


                    ;
                    ;
                    (*l_670) ^= (l_654 ^ l_654);
                    (*l_748) &= (((*l_759) = &g_135) != &g_91);

                    ;
                    (*l_669) = func_66(l_670, ((safe_sub_func_uint8_t_u_u(((*p_17) ^ ((l_762 = l_762) != &g_628)), ((safe_add_func_uint32_t_u_u((((0x8CL == p_14) | 0x866B1129L) & (p_18 || (safe_rshift_func_int16_t_s_u(l_767, 10)))), (*l_670))) && l_768))) | p_16), g_671, l_769);


                    ;
                }


                ;
                ;
            }
            else
            {
                short l_770 = (-4L);
                return l_770;


            }


            ;
            ;
            ;
            ;
            ;
        }



        ;
        ;
        ;
        ;
        l_771 = &l_661;

        ;
    }



    ;
    ;
    ;
    ;
    ;

    l_776 = func_52(l_772, ((*l_773) = &p_16), l_774, l_775, (**g_223));

    ;
    ;
    return p_18;



}







static unsigned short * func_20(unsigned short p_21, unsigned short * p_22)
{
    char *l_434 = &g_126;
    int l_435 = 2L;
    unsigned short *** const l_440 = &g_419;
    unsigned l_441 = 0x60A872E3L;
    unsigned char *l_444 = &g_93;
    unsigned short *l_445 = &g_446;
    short **l_447 = &g_236;
    unsigned l_448 = 0x698EB2AFL;
    int *l_449 = &g_194;
    int *l_459 = &g_194;
    unsigned short *l_466 = &g_117;
    unsigned short **l_467 = &g_74;
    unsigned short **l_468 = &g_327;
    unsigned short *l_469 = &g_24;
    int *l_470 = (void*)0;
    int *l_471 = (void*)0;
    int *l_472 = &l_435;
    unsigned short *l_480 = &g_24;
    const int *l_553 = &g_60;
    const int **l_552 = &l_553;
    unsigned short l_560 = 0x28B3L;
    unsigned short *l_568 = &l_560;
    unsigned short *l_618 = &g_446;
    l_435 &= (safe_lshift_func_int8_t_s_s(((*l_434) &= (**g_287)), 1));
    (*g_450) = ((*l_449) &= (l_435 = (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((((((void*)0 != l_440) ^ func_42((p_22 != ((*l_447) = l_445)), l_445, l_448, (*p_22))) & 0UL) & l_448) >= (*p_22)), l_448)), l_441))));


    ;
    if ((safe_lshift_func_int16_t_s_s(0x8052L, ((**l_447) = ((safe_sub_func_int8_t_s_s(((**g_287) = ((2L || ((safe_add_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(1UL, (&l_435 != (l_459 = (void*)0)))) == ((((*l_472) &= (0x02L & (safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s(func_42(((**l_447) |= (!func_52(((*g_110) = 1L), ((*l_468) = ((*l_467) = &p_21)), p_21, &g_24, p_21))), l_469, (*l_449), (*p_22)), p_21)), 3UL)), 9)))) <= 8UL) | 0xA78E21C2L)), p_21)) | p_21)) >= p_21)), (*l_449))) == p_21)))))
    {
        unsigned l_473 = 18446744073709551614UL;
        unsigned short *l_476 = &g_117;
        int *l_508 = &l_435;
        int * const l_547 = &g_194;
        unsigned l_585 = 0x3E6F2345L;
        unsigned l_586 = 18446744073709551615UL;
        unsigned l_609 = 18446744073709551611UL;
        unsigned short **l_617 = &l_466;
        l_473 = (4294967293UL & (*l_449));
        for (g_127 = 0; (g_127 >= 14); g_127 = safe_add_func_uint16_t_u_u(g_127, 3))
        {
            int l_479 = 0L;
            int l_483 = 4L;
            unsigned short *l_541 = &g_117;
            unsigned short *l_551 = &g_24;
            if (((*l_472) ^= ((l_473 != func_52((((*l_445) &= (*p_22)) <= (p_21 ^ (func_52((*g_110), l_476, l_473, ((*l_467) = &p_21), (safe_lshift_func_int16_t_s_u(((l_473 ^ g_127) ^ (*p_22)), 13))) && l_473))), &g_24, l_479, l_480, (**g_223))) <= l_473)))
            {
                int **l_481 = (void*)0;
                char ** const l_506 = &g_288;
                unsigned short *l_542 = (void*)0;
                (*g_482) = &l_479;

                ;
                if ((l_483 ^= l_479))
                {
                    unsigned short l_486 = 65530UL;
                    int ***l_491 = &l_481;
                    const int *l_497 = &g_498;
                    const int **l_496 = &l_497;
                    const int ***l_495 = &l_496;
                    unsigned short ***l_504 = &l_468;
                    unsigned short ****l_503 = &l_504;
                    short *l_505 = &g_237;
                    for (g_93 = 0; (g_93 < 51); g_93 = safe_add_func_int32_t_s_s(g_93, 4))
                    {
                        const int *l_494 = &g_194;
                        const int **l_493 = &l_494;
                        const int ***l_492 = &l_493;
                        (*l_472) &= ((((!(*p_22)) && 0UL) || (l_486 & (((safe_add_func_int32_t_s_s(p_21, (**g_147))) | (0x46L & 0x5FL)) > ((safe_add_func_uint32_t_u_u((l_491 == (l_495 = l_492)), p_21)) <= (**g_223))))) <= l_479);


                        (*l_449) = ((void*)0 != &l_444);
                        (*l_449) |= (safe_lshift_func_int16_t_s_u(p_21, 1));
                    }


                    if ((safe_lshift_func_int16_t_s_u(((*l_505) = (((**l_447) &= ((*g_308) >= (*g_129))) < (((*l_503) = (void*)0) != &g_419))), (*p_22))))
                    {
                        (*g_507) = l_506;
                        (*g_129) &= p_21;
                    }
                    else
                    {
                        unsigned short *l_509 = &g_117;
                        l_508 = l_508;
                        (*l_508) = (((*l_505) = (*g_236)) > func_52((*g_110), l_509, (p_21 && p_21), &g_117, p_21));

                        ;
                    }

                    ;
                    ;
                    if (p_21)
                        break;

                }
                else
                {
                    int **l_510 = &g_129;
                    unsigned short *l_539 = (void*)0;
                    char l_540 = 0L;
                    if ((*l_508))
                        break;

                    (*l_510) = &l_483;

                    ;
                    for (l_479 = (-4); (l_479 < (-28)); l_479 = safe_sub_func_uint32_t_u_u(l_479, 7))
                    {
                        unsigned *l_521 = &g_91;
                        (*l_449) = ((((*l_466) = ((safe_add_func_int32_t_s_s((*g_308), g_194)) ^ ((*g_288) && (safe_mod_func_uint32_t_u_u(((*l_521) &= ((p_21 < 1L) != (safe_add_func_uint32_t_u_u(p_21, (safe_sub_func_int8_t_s_s(((void*)0 == &g_91), ((**g_223) = p_21))))))), 0xE3811A58L))))) == p_21) | 1L);
                        (*g_193) ^= l_479;
                        (*g_129) |= p_21;
                    }
                    for (l_435 = 0; (l_435 > 24); l_435 = safe_add_func_int16_t_s_s(l_435, 6))
                    {
                        short l_526 = 0x59C2L;
                        unsigned *l_543 = (void*)0;
                        unsigned *l_544 = &l_448;
                        (*l_449) = ((safe_lshift_func_int16_t_s_u(0x8FB9L, (l_526 <= (safe_sub_func_int32_t_s_s((((safe_sub_func_uint8_t_u_u(((**g_223) = ((*l_508) ^ (safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((((*l_544) = (safe_add_func_uint8_t_u_u((**g_223), func_52((*g_110), &g_24, p_21, l_542, (*g_224))))) != p_21), p_21)), 65535UL)))), 0L)) && (**g_223)) < p_21), (-1L)))))) && (**g_287));

                        ;
                    }

                    ;
                }

                ;
                (*l_449) |= (*l_508);
            }
            else
            {
                char l_548 = 9L;
                for (g_194 = 19; (g_194 >= 8); --g_194)
                {
                    int *l_549 = (void*)0;
                    int **l_550 = &g_201;
                    l_548 = ((*l_472) = (l_508 != l_547));
                    (*l_550) = l_549;

                    ;
                }
            }

            ;
            ;
            return l_551;





        }


        if (p_21)
        {
            const int ***l_554 = (void*)0;
            const int ***l_555 = (void*)0;
            const int **l_556 = &l_553;
            int l_566 = (-2L);
            unsigned short *l_567 = &g_446;
            (*g_557) = (l_556 = l_552);

            ;
            if (func_42((*g_236), l_476, (*g_236), func_42((*l_547), &g_117, l_560, ((*l_508) = 0x0A59L))))
            {
                unsigned l_584 = 18446744073709551615UL;
                for (g_93 = 0; (g_93 < 30); g_93 = safe_add_func_uint8_t_u_u(g_93, 5))
                {
                    unsigned short l_565 = 0x2108L;
                    int **l_582 = (void*)0;
                    int ** const *l_581 = &l_582;
                    (*l_472) = (safe_mod_func_uint8_t_u_u((*l_547), l_565));
                    l_566 |= 0x78258CACL;
                    if ((((*p_22) < (p_21 >= (p_21 & (safe_lshift_func_int16_t_s_s((*g_236), p_21))))) || (*g_224)))
                    {
                        unsigned short l_571 = 0xD3C5L;
                        int ** const **l_583 = &l_581;
                        if (l_571)
                            break;
                        (*l_472) |= (safe_rshift_func_uint16_t_u_s(0UL, p_21));
                        (*l_547) = (((((safe_rshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((g_580 = ((**g_223) |= (((void*)0 == &g_558) == p_21))), ((((((*l_583) = l_581) == &g_147) <= (**g_287)) < p_21) | (((void*)0 == (*g_557)) != l_584)))), p_21)), l_585)) == (*l_547)) != p_21) | l_584) >= g_24);
                    }
                    else
                    {
                        (*l_449) = (l_586 | ((**g_223) = (safe_lshift_func_int16_t_s_u((*g_236), 11))));
                    }
                    return l_476;





                }
            }
            else
            {
                return g_589;





            }


        }
        else
        {
            short l_592 = 0L;
            int l_594 = 1L;
            char ***l_596 = &g_287;
            char **l_598 = &l_434;
            char ***l_597 = &l_598;
            unsigned short *l_606 = &g_24;
            int l_608 = 0x30977BE5L;
            unsigned short *l_613 = &g_446;
            (*l_508) ^= (safe_sub_func_uint16_t_u_u(((l_592 != (safe_unary_minus_func_int8_t_s(l_592))) >= ((**g_223) |= ((((l_594 |= ((*l_547) = p_21)) && 0x6B398815L) | ((g_595 = &l_468) != &g_419)) == 0x7314L))), (((*l_596) = (*g_507)) == ((*l_597) = &l_434))));

            ;
            if ((l_594 != (safe_add_func_int8_t_s_s((-10L), l_592))))
            {
                (*l_508) ^= p_21;
                (*l_472) ^= (*g_193);
                for (l_586 = 0; (l_586 < 14); ++l_586)
                {
                    unsigned short *l_605 = &g_117;
                    const int l_607 = (-6L);
                    (*l_508) = func_42((safe_mod_func_uint8_t_u_u(((***g_507) >= ((p_21 & (func_52(p_21, l_605, (*g_236), l_606, ((((&g_595 == &l_440) < (func_52(p_21, l_476, (*g_236), l_605, (*g_224)) >= l_607)) && p_21) != p_21)) && (**g_223))) != (*l_472))), l_608)), l_605, l_609, (*l_547));


                }
                for (l_441 = 5; (l_441 >= 57); l_441 = safe_add_func_int8_t_s_s(l_441, 3))
                {
                    int *l_612 = &g_111;
                    l_471 = func_66(l_612, g_91, l_594, l_613);

                    ;
                    (*l_508) &= p_21;
                }


                ;
            }
            else
            {
                char l_625 = (-1L);
                for (l_448 = 0; (l_448 != 35); l_448++)
                {
                    (*g_616) = &l_594;

                    ;
                }


                (*l_440) = l_617;

                ;
                (*l_547) |= ((*l_472) = l_592);
                (*l_547) = (safe_rshift_func_int16_t_s_u(((*l_468) == (**g_418)), (*p_22)));
            }



            ;
            (*g_628) = &l_471;

            ;
        }



        ;
        ;
        ;
        ;
        return g_630;
    }
    else
    {
        int *l_633 = &g_580;
        unsigned short *l_634 = (void*)0;
        for (g_126 = 0; (g_126 <= 19); g_126++)
        {
            (*g_629) = l_633;

            ;
            (*g_629) = l_633;
            (*g_629) = &l_435;

            ;
        }


        return l_634;





    }
}







static unsigned short * func_25(unsigned short * p_26, unsigned short * p_27, unsigned short * p_28, int p_29)
{
    unsigned short *l_397 = &g_117;
    int l_398 = 0x55B6996EL;
    int *l_399 = &g_111;
    unsigned char **l_423 = (void*)0;
    int ***l_429 = (void*)0;
    int ****l_428 = &l_429;
    if ((func_52((*g_110), l_397, ((*g_327) & (*p_28)), &g_117, l_398) != ((*g_236) = ((&g_111 == l_399) < l_398))))
    {
        unsigned short *l_421 = (void*)0;
        if ((*g_308))
        {
            int **l_400 = &g_201;
            (*g_201) = l_398;
            (*l_400) = &p_29;

            ;
        }
        else
        {
            unsigned char l_404 = 0x1AL;
            unsigned short *l_406 = &g_24;
            p_29 = 7L;
            for (g_91 = 11; (g_91 < 11); g_91 = safe_add_func_int8_t_s_s(g_91, 1))
            {
                int **l_403 = &g_129;
                (*l_403) = (*g_200);

                ;
                if (l_404)
                {
                    char l_405 = 4L;
                    if ((func_52((*g_110), &g_24, l_405, l_406, l_404) < (safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(l_398, ((l_398 <= ((*p_28) > l_398)) || 0x7DBFFB3CL))), l_398))))
                    {
                        (*g_293) = ((*l_403) = (*l_403));

                        ;
                        return &g_24;


                    }
                    else
                    {
                        g_413 &= func_52((4294967295UL >= (**g_264)), &g_24, p_29, p_26, (safe_lshift_func_int8_t_s_u(((**g_287) |= 0x3EL), 1)));
                    }

                    ;
                    if (((*g_201) ^= (safe_sub_func_int16_t_s_s((l_398 = p_29), ((*g_236) &= 2L)))))
                    {
                        int *l_416 = &l_398;
                        unsigned short **l_417 = &l_397;
                        (*g_201) ^= p_29;
                        (*l_416) |= ((*g_201) = 0x4364D47BL);
                        (*g_418) = l_417;

                        ;
                    }
                    else
                    {
                        p_29 = ((safe_unary_minus_func_uint16_t_u(l_398)) <= l_405);
                    }

                    ;
                    return l_421;



                }
                else
                {
                    if (p_29)
                        break;
                    if (l_398)
                        continue;
                }
            }

            ;
        }

        ;
        ;
    }
    else
    {
        unsigned short ***l_422 = &g_419;
        int *l_424 = &g_111;
        int **l_427 = &g_129;
        int ***l_426 = &l_427;
        int ****l_425 = &l_426;
        unsigned *l_430 = &g_135;
        (*g_201) |= ((1UL > (((*l_422) = (*g_418)) == &g_327)) ^ l_398);
        l_398 &= (l_423 != (void*)0);
        (***l_425) = (***l_425);
        (*g_174) ^= p_29;
    }

    ;
    ;
    return l_397;



}







static unsigned short * func_30(short p_31, unsigned short * p_32, unsigned short * p_33, const unsigned char p_34, const unsigned short * p_35)
{
    unsigned char *l_161 = &g_93;
    unsigned char *l_163 = &g_93;
    int l_181 = 0L;
    char *l_231 = &g_127;
    int l_292 = 0x34AEDA4FL;
    int **l_300 = &g_201;
    const int **l_301 = (void*)0;
    short l_324 = 4L;
    int l_382 = (-1L);
    unsigned short *l_383 = (void*)0;
    for (g_126 = 0; (g_126 >= 10); g_126 = safe_add_func_int32_t_s_s(g_126, 9))
    {
        char *l_154 = (void*)0;
        char *l_155 = &g_127;
        int l_156 = 0x94E1783CL;
        unsigned char **l_172 = &l_163;
        unsigned char l_189 = 0x5FL;
        unsigned short *l_191 = &g_117;
        int l_210 = 0x924B8A10L;
        int ***l_309 = &l_300;
        const unsigned char l_313 = 0x9DL;
        unsigned short *l_369 = &g_117;
        l_156 = (safe_add_func_int8_t_s_s(((*l_155) = g_127), (((l_156 ^ l_156) == g_24) == p_31)));
    }
    for (l_181 = 0; (l_181 <= 27); ++l_181)
    {
        int *l_376 = &g_60;
        int l_381 = 0xB3B5CCB4L;
        int l_384 = 9L;
        (*l_300) = (*l_300);
        (**l_300) ^= (-1L);
        (*g_201) ^= (safe_lshift_func_int16_t_s_s(p_31, ((*g_224) & 0xA2L)));
    }
    for (l_382 = 14; (l_382 <= 26); l_382 = safe_add_func_uint16_t_u_u(l_382, 4))
    {
        const unsigned l_389 = 0xF6116239L;
        unsigned *l_392 = &g_135;
        unsigned char l_395 = 255UL;
        unsigned *l_396 = &g_91;
        (*g_201) &= l_389;
        (**l_300) = (safe_sub_func_int8_t_s_s((((*l_392) |= (**l_300)) ^ (((*l_396) ^= (p_31 > ((safe_mod_func_uint16_t_u_u((*p_35), ((*g_236) &= l_395))) || (**l_300)))) || p_31)), (*g_224)));
    }
    return l_383;


}







static int func_42(short p_43, unsigned short * p_44, short p_45, unsigned short p_46)
{
    short l_58 = 0xEA3DL;
    int *l_59 = &g_60;
    unsigned short *l_73 = &g_24;
    unsigned short **l_72 = &l_73;
    unsigned short *l_141 = &g_24;
    int l_144 = 0x606124FAL;
    int l_145 = 0x030C7048L;
    unsigned l_148 = 4UL;
    l_145 = (l_144 = (safe_sub_func_uint16_t_u_u(func_52(((*l_59) &= l_58), func_61(func_66(l_59, p_43, (safe_unary_minus_func_uint8_t_u(((((l_58 != g_24) || (1UL <= ((((*l_72) = &p_46) != (g_74 = (p_44 = &g_24))) || (((safe_mod_func_int32_t_s_s(g_24, g_10)) >= l_58) != l_58)))) == l_58) | 1L))), &g_24), p_45, l_58, l_58), p_43, l_141, g_24), 0x1D8DL)));

    ;
    ;
    (*g_147) = &l_145;

    ;
    (*g_129) = ((void*)0 == &g_74);
    (*g_129) = (l_145 && l_148);
    return l_144;


}







static const unsigned short func_52(int p_53, unsigned short * p_54, short p_55, unsigned short * p_56, unsigned char p_57)
{
    int **l_142 = &g_129;
    int *l_143 = &g_87;
    (*l_142) = (void*)0;

    ;
    (*l_143) |= 0x6BE8E649L;
    return (*p_54);
}







static unsigned short * func_61(int * p_62, short p_63, unsigned p_64, unsigned char p_65)
{
    short l_130 = 0xFE3DL;
    unsigned *l_131 = &g_91;
    unsigned *l_134 = &g_135;
    unsigned short *l_136 = &g_117;
    int **l_137 = &g_129;
    int *l_140 = &g_87;
    g_87 |= 0x8D19747AL;
    (*l_137) = func_66(p_62, l_130, (((*l_131) &= l_130) <= (safe_add_func_int8_t_s_s((((*l_134) = ((p_63 < 0L) && p_65)) != ((~p_64) != p_65)), p_64))), l_136);

    ;
    (*l_140) = ((**l_137) = (safe_add_func_uint8_t_u_u(g_87, 251UL)));
    return l_136;


}







static int * func_66(int * p_67, unsigned p_68, unsigned p_69, unsigned short * p_70)
{
    unsigned short **l_81 = &g_74;
    int l_82 = 0L;
    int l_85 = 0x0E3A113DL;
    int *l_86 = &g_87;
    unsigned *l_90 = &g_91;
    unsigned char *l_92 = &g_93;
    unsigned l_94 = 18446744073709551613UL;
    char l_114 = 0L;
    unsigned short *l_115 = (void*)0;
    unsigned short *l_116 = &g_117;
    char l_120 = 8L;
    char *l_125 = &g_126;
    int *l_128 = &l_85;
    if (((safe_add_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u(((g_10 || ((void*)0 != l_81)) && (l_82 = p_69)), (safe_add_func_uint8_t_u_u(((*p_70) || l_85), ((*l_92) = (((*l_86) &= l_85) > (!((*l_90) &= (safe_add_func_uint16_t_u_u(l_85, ((p_68 && g_24) || 3L))))))))))) != l_94), g_24)) & 0xA2DDL))
    {
        unsigned l_103 = 0xE8591F28L;
        for (p_68 = 0; (p_68 >= 38); p_68 = safe_add_func_uint32_t_u_u(p_68, 4))
        {
            char l_97 = 0xFEL;
            char *l_100 = &l_97;
            int **l_104 = &l_86;
            unsigned char *l_107 = &g_108;
            int *l_109 = &g_87;
            if (l_97)
                break;
            (*l_109) = (safe_add_func_uint8_t_u_u((+(((*l_100) = g_91) || ((*l_100) = (safe_add_func_uint32_t_u_u(0xD46D8DA5L, (l_103 < ((l_82 = ((*l_92) = ((((*l_104) = &l_82) != &l_82) | (safe_rshift_func_uint16_t_u_s(g_91, g_24))))) && (**l_104)))))))), ((*l_107) = ((0x2FL || 0x6FL) != 0L))));
            if (g_93)
                break;
        }

        ;
    }
    else
    {
        return g_110;


    }

    ;
    g_127 ^= ((safe_sub_func_int16_t_s_s((p_69 && ((*l_116) = ((0xA1AFFF67L < (~((*l_90) ^= (*l_86)))) < l_114))), ((safe_add_func_uint8_t_u_u((l_120 & (safe_lshift_func_int8_t_s_u(g_93, 0))), p_68)) | (safe_lshift_func_int8_t_s_s((~((*l_125) = (g_93 <= g_108))), 2))))) == 9UL);
    (*l_128) ^= ((*l_86) &= 4L);
    g_129 = p_67;


    return &g_111;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_413, "g_413", print_hash_value);
    transparent_crc(g_446, "g_446", print_hash_value);
    transparent_crc(g_498, "g_498", print_hash_value);
    transparent_crc(g_580, "g_580", print_hash_value);
    transparent_crc(g_645, "g_645", print_hash_value);
    transparent_crc(g_671, "g_671", print_hash_value);
    transparent_crc(g_699, "g_699", print_hash_value);
    transparent_crc(g_720, "g_720", print_hash_value);
    transparent_crc(g_792, "g_792", print_hash_value);
    transparent_crc(g_817, "g_817", print_hash_value);
    transparent_crc(g_901, "g_901", print_hash_value);
    transparent_crc(g_924, "g_924", print_hash_value);
    transparent_crc(g_1070, "g_1070", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
