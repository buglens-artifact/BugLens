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
   char * f0;
   unsigned f1;
   int f2;
   const int f3;
};


static int g_2 = 9L;
static char g_11 = (-1L);
static int g_65 = (-7L);
static char g_68 = (-9L);
static volatile char **g_71 = (void*)0;
static short g_77 = 2L;
static unsigned char g_82 = 251UL;
static unsigned char g_100 = 0x70L;
static unsigned g_103 = 0xFC42E2EEL;
static int *g_124 = (void*)0;
static int ** volatile g_123 = &g_124;
static int ** volatile g_130 = &g_124;
static const char **g_145 = (void*)0;
static unsigned short g_163 = 65528UL;
static int * volatile g_166 = &g_65;
static int g_169 = 7L;
static int ** volatile g_180 = (void*)0;
static unsigned g_211 = 1UL;
static int ** const volatile g_213 = &g_124;
static const int ** volatile g_229 = (void*)0;
static int * volatile g_232 = &g_2;
static const int ***g_240 = (void*)0;
static const int g_244 = (-1L);
static union U0 g_257 = {0};
static union U0 g_259 = {0};
static union U0 *g_261 = &g_257;
static union U0 ** volatile g_260 = &g_261;
static int * volatile g_287 = &g_65;
static unsigned *** volatile g_313 = (void*)0;
static unsigned **g_317 = (void*)0;
static unsigned *** volatile g_316 = &g_317;
static const int ** volatile g_346 = (void*)0;
static int ** volatile g_353 = (void*)0;
static unsigned g_401 = 0xE8A82FDAL;
static int ** volatile g_413 = &g_124;
static char g_417 = (-3L);
static unsigned char *g_449 = &g_100;
static char **g_458 = (void*)0;
static volatile unsigned g_462 = 18446744073709551615UL;
static volatile unsigned *g_461 = &g_462;
static volatile unsigned **g_460 = &g_461;
static int ** volatile g_489 = &g_124;
static unsigned short g_530 = 0xEC5EL;
static unsigned g_531 = 1UL;
static int *g_549 = &g_2;
static int ** volatile g_548 = &g_549;
static volatile unsigned g_571 = 18446744073709551615UL;
static int ** volatile g_583 = &g_124;
static char * const *g_597 = (void*)0;
static char * const **g_596 = &g_597;
static int ** volatile g_631 = &g_124;
static unsigned **g_637 = (void*)0;
static int ** volatile g_650 = &g_124;
static unsigned g_655 = 0UL;
static unsigned *g_656 = &g_655;
static int * volatile g_659 = &g_65;
static volatile int g_660 = 1L;
static int g_665 = 0xC03AC7ADL;
static int ** volatile g_682 = &g_124;
static char ***g_696 = &g_458;
static char ****g_695 = &g_696;
static int * volatile g_705 = &g_2;
static int ** volatile g_714 = &g_124;
static int g_725 = 0x2C754253L;
static int * const g_724 = &g_725;
static int * const *g_723 = &g_724;
static int * const **g_722 = &g_723;
static int **g_728 = &g_549;
static int ***g_727 = &g_728;
static unsigned *g_738 = &g_257.f1;
static int g_749 = 1L;
static const char *** volatile g_775 = &g_145;
static union U0 *g_790 = &g_259;
static union U0 ** volatile g_789 = &g_790;
static int * volatile g_797 = &g_65;



static int func_1(void);
static char func_5(unsigned short p_6, int p_7);
static unsigned func_20(union U0 p_21, const int p_22);
static union U0 func_23(char * p_24, char * p_25);
static char ** func_26(char ** p_27, int p_28, const int p_29, int p_30, unsigned char p_31);
static char ** func_32(char * p_33, unsigned p_34, char p_35, char ** p_36, int p_37);
static char * func_38(int p_39);
static int func_40(unsigned p_41, unsigned p_42);
static int func_43(unsigned char p_44, const char ** p_45, char * p_46, char * p_47);
static const char ** func_48(char p_49, unsigned p_50, char * p_51, char * p_52);
static int func_1(void)
{
    char *l_10 = &g_11;
    char *l_12 = &g_11;
    unsigned short l_13 = 0x3FF1L;
    int l_14 = 0x38DC5336L;
    unsigned short *l_801 = (void*)0;
    int *l_802 = &g_2;
    short l_803 = 0xD9B3L;
    for (g_2 = (-23); (g_2 > (-22)); g_2 = safe_add_func_uint16_t_u_u(g_2, 3))
    {
        return g_2;
    }
    l_14 = (func_5((l_13 = (safe_add_func_uint32_t_u_u((l_10 == l_12), 0xAE649F6DL))), (l_14 != l_14)) < ((safe_mul_func_int16_t_s_s((l_14 ^ (l_14 > (+(((l_801 == l_801) || 65535UL) && 4294967286UL)))), l_14)) >= g_169));
    l_802 = &l_14;
    return l_803;
}







static char func_5(unsigned short p_6, int p_7)
{
    unsigned l_15 = 1UL;
    unsigned *l_654 = &g_655;
    unsigned l_717 = 0x3050B240L;
    char *l_730 = &g_68;
    int l_732 = 0xA0543076L;
    unsigned *l_739 = (void*)0;
    union U0 l_768 = {0};
    if ((l_15 || (safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(func_20(func_23(&g_11, &g_11), ((safe_add_func_int16_t_s_s(((g_656 = l_654) == &g_655), p_7)) || l_15)), l_15)), 0))))
    {
        unsigned l_700 = 18446744073709551608UL;
        unsigned short l_703 = 65535UL;
        int *l_741 = &l_732;
        char *l_783 = &g_11;
        unsigned ** const l_786 = &g_656;
        union U0 **l_788 = &g_261;
        for (g_655 = 0; (g_655 != 31); ++g_655)
        {
            int *l_674 = &g_665;
            int *l_675 = &g_65;
            (*l_675) = ((*l_674) = p_6);
            return p_7;
        }
        for (p_6 = (-29); (p_6 >= 2); p_6 = safe_add_func_uint32_t_u_u(p_6, 7))
        {
            int l_680 = 0L;
            const unsigned char l_683 = 0x00L;
            short l_698 = 0xCFE6L;
            int *l_712 = &g_2;
            union U0 l_778 = {0};
            const char *l_782 = &g_417;
            const char **l_781 = &l_782;
            for (g_530 = (-22); (g_530 >= 60); g_530++)
            {
                short l_692 = 0x49A9L;
                int l_699 = 0L;
                unsigned *l_737 = &l_717;
                unsigned char *l_753 = (void*)0;
                int *l_765 = &g_665;
                union U0 *l_766 = &g_257;
                unsigned **l_787 = &l_654;
            }
            (*l_741) = p_6;
        }
        (*g_789) = ((*l_788) = (*g_260));
    }
    else
    {
        short l_798 = 0xCE95L;
        (*g_797) = ((safe_add_func_int32_t_s_s(((***g_722) = 0x6449BA6DL), (7L < (l_732 && (l_717 | (p_7 > g_401)))))) > ((safe_mod_func_int8_t_s_s(p_6, (safe_lshift_func_int8_t_s_u((!p_7), 3)))) & 1L));
        (***g_722) = (l_798 = p_6);
    }
    (***g_722) = func_20((*g_790), l_732);
    return p_7;
}







static unsigned func_20(union U0 p_21, const int p_22)
{
    int l_657 = 0x8AEBA5A6L;
    int l_666 = (-1L);
    int *l_670 = &g_65;
    if ((l_657 = p_22))
    {
        unsigned l_658 = 0UL;
        volatile int l_661 = 0x4A2C6023L;
        int *l_662 = &g_2;
        (*g_659) = l_658;
        l_661 = g_660;
        (*l_662) = l_657;
        if (func_40((*l_662), p_22))
        {
            int *l_663 = (void*)0;
            int *l_664 = &g_665;
            (*l_662) = ((p_22 < func_40(p_22, p_22)) | (l_666 = (~((*l_664) = p_22))));
            l_666 = 0x54D93E94L;
            (*l_662) = (safe_lshift_func_uint16_t_u_u(p_22, 11));
        }
        else
        {
            (*l_662) = (-4L);
        }
    }
    else
    {
        int *l_669 = &g_2;
        int **l_671 = &g_124;
        (*l_669) = 0xFE551804L;
        (*l_671) = l_670;
    }
    return (*l_670);
}







static union U0 func_23(char * p_24, char * p_25)
{
    const char l_53 = 8L;
    char **l_54 = (void*)0;
    char **l_55 = (void*)0;
    char *l_57 = &g_11;
    char **l_56 = &l_57;
    char *l_133 = &g_68;
    char **l_132 = &l_133;
    char ***l_651 = &l_56;
    (*l_651) = func_26(func_32(func_38(func_40(((-3L) >= func_43(g_2, func_48((l_53 || l_53), g_11, p_25, ((*l_56) = p_24)), ((*l_132) = p_25), p_25)), l_53)), l_53, l_53, l_55, l_53), l_53, l_53, l_53, g_211);
    return (**g_260);
}







static char ** func_26(char ** p_27, int p_28, const int p_29, int p_30, unsigned char p_31)
{
    unsigned *l_492 = &g_401;
    int l_493 = 0x5D9B5BCDL;
    const union U0 *l_495 = &g_259;
    const union U0 **l_494 = &l_495;
    int l_496 = 0x94548FFBL;
    const char **l_510 = (void*)0;
    char *l_515 = (void*)0;
    char **l_568 = &l_515;
    unsigned char *l_570 = &g_82;
    int *l_582 = &l_496;
    unsigned *l_601 = &g_211;
    unsigned ** const l_600 = &l_601;
lbl_625:
    if (((safe_rshift_func_int16_t_s_s((l_493 = (((*l_492) = p_29) == p_31)), p_30)) ^ (l_496 = ((void*)0 != l_494))))
    {
        return g_458;
    }
    else
    {
        const unsigned l_512 = 18446744073709551615UL;
        int l_518 = 0L;
        char *l_542 = (void*)0;
        for (l_496 = 0; (l_496 != 2); l_496 = safe_add_func_uint32_t_u_u(l_496, 5))
        {
            int l_509 = 0xE56490D0L;
            char *l_511 = &g_68;
            short *l_513 = (void*)0;
            short *l_514 = &g_77;
            unsigned short l_567 = 1UL;
            char *l_569 = &g_68;
            if (((p_31 ^ l_493) > func_43(((0xD0EAL <= (safe_rshift_func_uint16_t_u_s((g_100 && (safe_lshift_func_int16_t_s_s(((*l_514) = (safe_rshift_func_uint8_t_u_s((((*l_492) = (safe_sub_func_uint32_t_u_u(func_43(((safe_sub_func_uint32_t_u_u(p_31, l_509)) || (l_509 | 0xF782E1A8L)), l_510, l_511, &g_68), l_509))) <= l_493), l_512))), p_30))), 15))) || 0L), g_145, &g_417, l_515)))
            {
                const int *l_516 = &g_65;
                const int **l_517 = &l_516;
                (*l_517) = l_516;
                l_518 = ((g_2 >= p_30) > p_30);
                if ((*g_124))
                    continue;
            }
            else
            {
                return p_27;
            }
            if (p_31)
            {
                int l_525 = 6L;
                unsigned short *l_526 = &g_163;
                unsigned short *l_527 = (void*)0;
                unsigned short *l_528 = (void*)0;
                unsigned short *l_529 = &g_530;
                int l_536 = 0x9ED0CE8BL;
                unsigned l_552 = 8UL;
                unsigned l_560 = 0UL;
                int *l_561 = &l_518;
                (*g_124) = l_518;
                if ((safe_sub_func_uint16_t_u_u((g_531 = (0L <= ((((safe_mul_func_uint16_t_u_u((l_493 ^ ((*l_514) = (0x74C5L ^ ((l_518 == (safe_sub_func_uint16_t_u_u(((*l_526) = l_525), l_496))) && 0xD76BL)))), ((*l_529) = g_103))) > p_31) <= 0xB021L) <= p_28))), g_103)))
                {
                    for (l_509 = (-23); (l_509 > (-29)); --l_509)
                    {
                        char *l_534 = &g_417;
                        char **l_535 = &l_511;
                        l_493 = func_43(((void*)0 == &g_82), g_145, l_534, ((*l_535) = l_511));
                        return p_27;
                    }
                }
                else
                {
                    unsigned l_541 = 0UL;
                    (*g_124) = l_536;
                    for (g_531 = 0; (g_531 == 58); g_531++)
                    {
                        unsigned l_539 = 1UL;
                        int l_540 = 6L;
                        char *l_543 = (void*)0;
                        int *l_544 = &g_65;
                        (*l_544) = func_43(l_539, func_48(((-1L) == l_540), l_541, l_542, func_38((p_30 <= 0x04A5D0BCL))), l_543, &g_417);
                        return p_27;
                    }
                    l_509 = (*g_124);
                    for (l_536 = (-7); (l_536 <= 22); ++l_536)
                    {
                        int **l_547 = &g_124;
                        (*g_548) = ((*l_547) = (void*)0);
                        return g_458;
                    }
                }
                (*l_561) = ((*g_549) = ((+(safe_rshift_func_int8_t_s_u((-5L), func_40(((l_552 & ((p_31 <= 0xF302B244L) >= (safe_unary_minus_func_int16_t_s(((!(g_145 == &l_515)) || (safe_lshift_func_uint16_t_u_u(((*l_526) = p_28), ((safe_add_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((l_496 <= (((l_512 && l_493) <= 0xDAL) != 0x5303L)), l_560)) >= 0x6E28B10FL), l_496)) < 1UL)))))))) <= p_29), p_31)))) | 0UL));
            }
            else
            {
                int l_564 = 0x6559237EL;
                (*g_232) = ((((safe_mod_func_int16_t_s_s(func_40(p_31, (p_29 & ((*l_492) = p_28))), l_564)) != (l_567 = (safe_mod_func_uint8_t_u_u(l_493, l_509)))) != (**g_548)) != p_29);
                return p_27;
            }
            (*g_549) = func_43(p_29, l_510, l_569, ((*l_568) = l_569));
        }
    }
    (*g_549) = func_43(((*l_570) = (func_40((*g_461), p_29) <= p_29)), l_510, ((*l_568) = (*l_568)), &g_11);
    if (((g_571 <= l_496) <= (safe_sub_func_int8_t_s_s(func_43(g_2, g_145, &g_417, (*l_568)), ((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((l_496 || (safe_lshift_func_int16_t_s_u((p_27 == (void*)0), 8))), 0xE5L)), p_30)), l_493)) && l_496)))))
    {
        int *l_584 = (void*)0;
        int **l_585 = &g_549;
        (*g_583) = l_582;
        (*l_585) = l_584;
    }
    else
    {
        int l_605 = 0L;
        char * const *l_633 = &l_515;
        unsigned **l_636 = &l_601;
        unsigned ***l_635 = &l_636;
        unsigned ***l_638 = &g_637;
        char *l_645 = &g_11;
        const unsigned char l_646 = 4UL;
        char *l_647 = &g_68;
        const char ***l_648 = &l_510;
        int **l_649 = &l_582;
        if ((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u(6UL, (*l_582))), 0)))
        {
            char * const ***l_598 = &g_596;
            unsigned **l_602 = &l_601;
            int l_606 = 0L;
            char *l_607 = (void*)0;
            (*g_124) = (((safe_add_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint16_t_u_u((((*l_598) = g_596) != (void*)0), g_82)) >= (((safe_unary_minus_func_uint32_t_u(p_31)) || (l_600 != l_602)) >= g_100)), (*l_582))) <= (g_68 = (safe_lshift_func_int16_t_s_u((-9L), 1)))), l_605)) == (*g_124)) < l_606);
            (*g_124) = ((void*)0 != l_607);
            return g_458;
        }
        else
        {
            int *l_630 = (void*)0;
            for (l_493 = 6; (l_493 != (-25)); l_493 = safe_sub_func_uint8_t_u_u(l_493, 1))
            {
                char l_624 = 0x0DL;
                for (g_401 = (-26); (g_401 < 53); g_401 = safe_add_func_uint32_t_u_u(g_401, 8))
                {
                    unsigned short l_617 = 65535UL;
                    short *l_618 = (void*)0;
                    short *l_619 = &g_77;
                    unsigned char l_627 = 0x7EL;
                    if ((safe_mod_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(((((safe_unary_minus_func_int32_t_s(((*g_549) = p_29))) >= g_11) < 1UL) != l_617), ((*l_619) = (p_30 != (~0x90B5L))))) & g_571), (safe_sub_func_int8_t_s_s((~l_605), ((safe_sub_func_uint8_t_u_u(0x09L, l_624)) || 1UL))))))
                    {
                        unsigned char l_626 = 0x2AL;
                        if (p_29)
                            goto lbl_625;
                        (*l_582) = ((*g_549) = p_30);
                        (*g_124) = 0L;
                        if (l_626)
                            continue;
                    }
                    else
                    {
                        (**g_489) = (((*l_582) = l_627) != g_571);
                    }
                }
                if (g_2)
                    goto lbl_632;
            }
lbl_632:
            for (g_100 = (-26); (g_100 <= 17); g_100 = safe_add_func_int8_t_s_s(g_100, 6))
            {
                (*g_631) = l_630;
                return g_458;
            }
            l_633 = (*g_596);
        }
        (*l_582) = (safe_unary_minus_func_uint32_t_u((func_40((((((*l_635) = (void*)0) != ((*l_638) = g_637)) >= l_605) == (func_43(p_31, ((*l_648) = func_48(p_30, (safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((((*l_570) = 0UL) | (safe_add_func_int8_t_s_s((func_43(p_28, g_145, l_645, l_645) ^ p_31), p_28))), l_646)), l_605)), l_645, l_647)), (*l_568), (*l_568)) > g_530)), g_169) ^ 0x866EL)));
        (*g_650) = ((*l_649) = &p_30);
    }
    return g_458;
}







static char ** func_32(char * p_33, unsigned p_34, char p_35, char ** p_36, int p_37)
{
    int *l_323 = &g_65;
    int l_336 = 0xFB9F2B80L;
    union U0 *l_337 = &g_259;
    union U0 **l_338 = &l_337;
    int *l_341 = &g_2;
    int *l_342 = &l_336;
    unsigned short *l_343 = &g_163;
    const char *l_393 = (void*)0;
    const char **l_392 = &l_393;
    char *l_427 = &g_417;
    char *l_453 = &g_11;
lbl_344:
    l_323 = l_323;
    (*l_323) = (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u(p_34, 1)), 5));
    if ((safe_unary_minus_func_int16_t_s(((safe_rshift_func_uint16_t_u_u((!g_82), (safe_mod_func_int8_t_s_s(((safe_unary_minus_func_int8_t_s((*l_323))) > (((*l_343) = (((*l_323) ^ (((((safe_mul_func_uint8_t_u_u(l_336, ((((*l_338) = l_337) == (void*)0) | p_37))) || ((*l_342) = (p_37 = ((*l_341) = ((safe_mod_func_int32_t_s_s(((*l_323) > ((g_11 < g_163) & 0xA7BFL)), p_34)) == 0L))))) ^ g_65) & (*l_323)) || p_35)) || (*l_342))) >= 0x5C0EL)), g_103)))) | (*l_323)))))
    {
        (*l_338) = (*g_260);
    }
    else
    {
        const int l_379 = 0xA0AF4E1EL;
        const char **l_402 = (void*)0;
        unsigned char *l_409 = &g_82;
        if (((65535UL <= 0L) < 5L))
        {
            const int *l_345 = &g_2;
            const int **l_347 = &l_345;
            if (g_163)
                goto lbl_344;
            (*l_347) = l_345;
        }
        else
        {
            const int *l_350 = &g_65;
            char *l_374 = &g_11;
            unsigned *l_400 = &g_401;
            l_342 = &l_336;
            for (g_82 = 0; (g_82 != 34); g_82 = safe_add_func_uint16_t_u_u(g_82, 9))
            {
                int l_355 = 1L;
                const char *l_377 = &g_68;
                const char **l_376 = &l_377;
                char *l_378 = &g_68;
                int **l_395 = &l_342;
            }
            (*l_342) = func_40((safe_add_func_uint16_t_u_u(g_103, func_43(func_40(g_2, ((*l_400) = ((safe_rshift_func_uint16_t_u_s(g_11, 10)) || 5L))), l_402, &g_11, &g_11))), l_379);
            (*l_323) = ((safe_add_func_uint32_t_u_u(p_35, p_34)) >= (((g_2 ^ (*l_350)) != (*l_350)) == (p_35 < (safe_lshift_func_uint16_t_u_s((&g_82 != l_409), func_43((p_35 && (*l_323)), g_145, &g_68, &g_68))))));
        }
    }
    if ((safe_rshift_func_uint8_t_u_u(p_34, 0)))
    {
        int **l_412 = (void*)0;
        int **l_414 = &g_124;
        (*g_413) = &p_37;
        (*l_414) = &l_336;
    }
    else
    {
        int l_426 = (-10L);
        unsigned char *l_428 = &g_100;
        char * const *l_451 = &l_427;
        char * const **l_450 = &l_451;
        const char **l_485 = (void*)0;
        if (((safe_add_func_uint8_t_u_u(((*l_428) = (g_417 & (safe_add_func_int16_t_s_s((!g_82), (safe_mod_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((p_37 > (*l_342)), (safe_lshift_func_int16_t_s_u(((*l_341) && (((*p_33) = (~(l_426 && func_43(l_426, g_145, l_427, &g_417)))) <= g_2)), 8)))) <= (*l_342)), g_169)))))), l_426)) | 1L))
        {
            int *l_429 = (void*)0;
            char **l_438 = &l_427;
            char ***l_437 = &l_438;
            char ****l_436 = &l_437;
            const char ***l_452 = &g_145;
            (*g_123) = l_429;
            p_37 = func_40((safe_add_func_uint16_t_u_u(p_37, (0xD56CCA4DL & (p_37 >= (safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s((*p_33), (*l_342))), (((*l_436) = &p_36) == &g_71))))))), (safe_mul_func_uint8_t_u_u(0x38L, func_43(((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((g_77 = l_426) < p_37), l_426)), p_37)) >= 0UL), g_145, &g_417, &g_417))));
            (*l_341) = (((safe_lshift_func_int8_t_s_s(l_426, (*p_33))) == (safe_mod_func_int32_t_s_s(func_43(((l_393 == (g_449 = (void*)0)) & (&g_145 != l_450)), ((*l_452) = func_48((*l_342), p_35, ((*l_438) = &g_417), &g_68)), &g_417, &g_68), (*l_342)))) | p_35);
        }
        else
        {
            char **l_457 = &l_427;
            int l_467 = (-1L);
            int *l_488 = &l_467;
            (*g_123) = &p_37;
            (*l_341) = func_43((*g_449), &l_393, l_428, l_453);
            if ((safe_mul_func_uint8_t_u_u(2UL, l_426)))
            {
                char **l_456 = &l_427;
                return g_458;
            }
            else
            {
                unsigned **l_459 = (void*)0;
                int l_484 = 7L;
                if (g_100)
                    goto lbl_344;
                if (((~(l_459 == g_460)) & (((safe_add_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u(l_467, (safe_mod_func_int32_t_s_s(((((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(0x01L, (safe_sub_func_int8_t_s_s(((*l_427) = func_43(((safe_add_func_int16_t_s_s((((func_40((func_40((safe_sub_func_int32_t_s_s(l_426, ((safe_lshift_func_int16_t_s_s(p_34, 14)) == ((65535UL == g_68) > p_37)))), l_426) && 65535UL), p_35) <= p_37) >= l_484) == l_467), 2L)) >= p_34), l_485, (*l_457), l_428)), l_484)))), 0)), l_484)) != 65533UL) < 255UL) == (-10L)), l_426)))) > p_37), 4294967290UL)) || (*l_342)) <= (-1L))))
                {
                    int *l_486 = (void*)0;
                    int **l_487 = &l_486;
                    (*l_487) = l_486;
                    (*l_323) = p_35;
                }
                else
                {
                    l_488 = &p_37;
                }
            }
            (*g_489) = &p_37;
        }
        (*l_338) = (*g_260);
    }
    return g_458;
}







static char * func_38(int p_39)
{
    char *l_170 = &g_11;
    unsigned *l_197 = &g_103;
    unsigned **l_196 = &l_197;
    unsigned **l_198 = &l_197;
    int l_199 = (-1L);
    int *l_215 = &g_65;
    int *l_226 = &g_65;
    int l_253 = 0xE3FE1AB3L;
    const char *l_283 = (void*)0;
    const char **l_282 = &l_283;
    char *l_286 = &g_68;
    unsigned char *l_320 = &g_100;
    const char **l_321 = &l_283;
    const char ***l_322 = &l_282;
    for (p_39 = 3; (p_39 >= 27); ++p_39)
    {
        char *l_158 = (void*)0;
        char *l_159 = (void*)0;
        char *l_160 = &g_68;
        unsigned short *l_161 = (void*)0;
        unsigned short *l_162 = &g_163;
        unsigned *l_164 = &g_103;
        int l_165 = 0xB37417BDL;
        int **l_220 = &l_215;
        int **l_221 = &l_215;
        int **l_222 = &g_124;
        int **l_223 = &l_215;
        int **l_224 = &l_215;
        int **l_225 = &g_124;
        const int *l_243 = &g_244;
        const int **l_242 = &l_243;
        const int ***l_241 = &l_242;
        unsigned char *l_281 = &g_100;
        char *l_284 = &g_68;
        unsigned char l_305 = 0x6AL;
        l_165 = ((7UL < (safe_lshift_func_uint16_t_u_u(((*l_162) = ((1UL == g_100) && ((*l_160) = func_40(((safe_sub_func_int16_t_s_s(p_39, 0x85BCL)) != p_39), g_11)))), 12))) <= ((*l_164) = 4294967295UL));
    }
    l_215 = (l_226 = (*g_213));
    (*l_226) = (0xFF9CF070L < p_39);
    (*l_322) = func_48((*l_226), func_40(((safe_rshift_func_int16_t_s_u(func_43(func_43(((*l_320) = ((-1L) | p_39)), l_321, l_286, l_170), ((*l_322) = &l_283), l_320, l_170), (*l_226))) || 65535UL), p_39), &g_11, l_320);
    return &g_68;
}







static int func_40(unsigned p_41, unsigned p_42)
{
    int **l_139 = (void*)0;
    int **l_140 = &g_124;
    char *l_146 = &g_11;
    unsigned char *l_149 = &g_100;
    int l_150 = 0x631B5FDDL;
    int *l_151 = &g_65;
    for (g_68 = 0; (g_68 <= (-19)); g_68--)
    {
        unsigned l_138 = 3UL;
        return l_138;
    }
    (*l_140) = (void*)0;
    (*l_151) = (safe_rshift_func_uint8_t_u_u(((*l_149) = ((safe_mod_func_uint32_t_u_u(func_43(g_65, g_145, l_146, &g_11), (safe_mod_func_uint8_t_u_u((g_82 = g_68), 0x4FL)))) > g_65)), (l_150 <= l_150)));
    return p_41;
}







static int func_43(unsigned char p_44, const char ** p_45, char * p_46, char * p_47)
{
    int *l_134 = &g_2;
    int **l_135 = &g_124;
    (*l_135) = l_134;
    return (*l_134);
}







static const char ** func_48(char p_49, unsigned p_50, char * p_51, char * p_52)
{
    char *l_59 = (void*)0;
    char **l_58 = &l_59;
    int *l_62 = &g_2;
    int l_125 = 0xB082E280L;
    const char **l_131 = (void*)0;
    l_58 = &p_51;
    for (g_11 = 6; (g_11 <= 24); g_11 = safe_add_func_uint16_t_u_u(g_11, 8))
    {
        int **l_63 = &l_62;
        int *l_64 = &g_65;
        unsigned char *l_88 = &g_82;
        const char **l_118 = (void*)0;
        (*l_63) = l_62;
        (*l_64) = 0L;
        if (p_50)
            break;
    }
    for (p_50 = (-4); (p_50 == 4); ++p_50)
    {
        int *l_128 = &l_125;
        int **l_129 = (void*)0;
        (*g_130) = l_128;
        if ((**g_130))
            continue;
    }
    return l_131;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_401, "g_401", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_462, "g_462", print_hash_value);
    transparent_crc(g_530, "g_530", print_hash_value);
    transparent_crc(g_531, "g_531", print_hash_value);
    transparent_crc(g_571, "g_571", print_hash_value);
    transparent_crc(g_655, "g_655", print_hash_value);
    transparent_crc(g_660, "g_660", print_hash_value);
    transparent_crc(g_665, "g_665", print_hash_value);
    transparent_crc(g_725, "g_725", print_hash_value);
    transparent_crc(g_749, "g_749", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
