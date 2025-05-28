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


struct S0 {
   unsigned f0 : 19;
   const signed f1 : 28;
};


static const short g_11 = 0x22A1L;
static unsigned short g_33 = 65533UL;
static unsigned short g_44 = 9UL;
static int g_47 = 0x3CB8E004L;
static unsigned char g_76 = 0UL;
static int g_78 = (-1L);
static int * const volatile g_77 = &g_78;
static volatile int g_93 = 0x634C778CL;
static volatile int *g_92 = &g_93;
static volatile int **g_91 = &g_92;
static long long g_95 = 0L;
static char g_103 = (-1L);
static unsigned g_105 = 0x0BD78952L;
static int *g_117 = &g_47;
static int **g_116 = &g_117;
static unsigned *g_134 = &g_105;
static unsigned **g_133 = &g_134;
static unsigned *** const volatile g_132 = &g_133;
static struct S0 g_140 = {571,-16272};
static struct S0 *g_142 = &g_140;
static struct S0 ** volatile g_141 = &g_142;
static const int *g_185 = &g_47;
static unsigned *** volatile g_187 = (void*)0;
static unsigned *** volatile g_188 = &g_133;
static volatile char g_234 = (-2L);
static short g_241 = (-1L);
static volatile char * volatile g_254 = &g_234;
static volatile char * volatile *g_253 = &g_254;
static unsigned long long g_272 = 18446744073709551615UL;
static unsigned char g_294 = 1UL;
static short g_303 = 0xA22FL;
static const int ** volatile g_327 = (void*)0;
static int *g_331 = &g_47;
static int g_354 = 0x57E85835L;
static unsigned g_355 = 0x7ECE4462L;
static unsigned g_385 = 0x4B1F9F82L;
static unsigned short g_390 = 0UL;
static char ** const g_393 = (void*)0;
static char ** const *g_392 = &g_393;
static char * const **g_420 = (void*)0;
static char * const ***g_419 = &g_420;
static int *g_422 = &g_78;
static const int ** volatile g_441 = &g_185;
static short g_450 = 0L;
static const int ** volatile g_452 = &g_185;
static const unsigned *g_457 = &g_105;
static const unsigned **g_456 = &g_457;
static const unsigned ***g_455 = &g_456;
static const unsigned ****g_454 = &g_455;
static unsigned long long g_480 = 18446744073709551606UL;
static unsigned char g_510 = 254UL;
static volatile unsigned char g_552 = 0x30L;
static const int ** volatile g_562 = (void*)0;
static const int ** const volatile g_563 = &g_185;
static unsigned g_574 = 18446744073709551615UL;
static const int ** volatile g_620 = &g_185;
static const int ** volatile g_621 = (void*)0;
static int ** volatile g_622 = &g_422;
static const volatile long long g_658 = 0xA28ACE09499CAD8ELL;
static const volatile long long *g_657 = &g_658;
static const volatile long long ** volatile g_656 = &g_657;
static volatile long long ** const g_660 = (void*)0;
static const int ** volatile g_704 = &g_185;
static char g_714 = 0L;
static char g_717 = 1L;
static long long *g_726 = (void*)0;
static long long **g_725 = &g_726;
static long long *** volatile g_724 = &g_725;
static const int ** volatile g_781 = &g_185;
static const int ** volatile g_800 = &g_185;
static volatile int g_815 = (-1L);
static volatile unsigned short **g_835 = (void*)0;
static unsigned char g_912 = 3UL;
static unsigned short *g_932 = (void*)0;
static int g_950 = 0x278A24DAL;
static volatile short **g_958 = (void*)0;
static short *g_963 = &g_303;
static short **g_962 = &g_963;
static int g_968 = (-8L);



static int func_1(void);
static int * func_2(int * p_3, int * p_4, int * p_5);
static int * func_6(unsigned long long p_7, long long p_8, int * p_9, int * p_10);
static unsigned char func_19(unsigned char p_20, const int * p_21, const int p_22);
static int * func_24(unsigned long long p_25, unsigned p_26, int * p_27, short p_28, unsigned p_29);
static short func_34(int p_35, unsigned short * p_36, unsigned short * p_37);
static unsigned short * func_38(int * p_39);
static int * func_40(unsigned short * p_41, unsigned long long p_42);
static const int * func_50(int ** p_51, unsigned char p_52, unsigned p_53, const struct S0 p_54);
static int ** func_55(unsigned short * p_56, unsigned p_57, long long p_58);
static int func_1(void)
{
    unsigned long long l_12 = 0xCA3C0BF90A233712LL;
    long long l_23 = 0x6CBCB1A7A81A82E7LL;
    unsigned short *l_32 = &g_33;
    unsigned short *l_43 = &g_44;
    char *l_541 = &g_103;
    const int l_554 = 1L;
    unsigned char l_947 = 0xB3L;
    unsigned char *l_948 = &g_510;
    int *l_949 = &g_950;
    int *l_967 = &g_968;
    (*g_116) = func_2(func_6((g_11 >= l_12), (2UL == (safe_lshift_func_int16_t_s_s((((((safe_sub_func_uint16_t_u_u((~((((*l_948) = ((safe_add_func_uint8_t_u_u((((!func_19(l_23, func_24(l_12, (((*l_541) = ((g_11 , (safe_add_func_uint16_t_u_u(((*l_32) = g_11), func_34(l_12, func_38(func_40(l_43, g_44)), &g_390)))) && 18446744073709551611UL)) , g_11), &g_78, g_95, l_12), l_554)) != l_12) , l_947), 0x81L)) <= l_23)) < g_385) & l_947)), l_23)) , (-8L)) , l_23) > l_554) || 0x233674AA4E4E4B63LL), 6))), g_134, l_949), g_134, l_967);
    (*g_116) = l_967;
    (*g_116) = l_967;
    return (*l_949);
}







static int * func_2(int * p_3, int * p_4, int * p_5)
{
    int *l_969 = &g_78;
    int l_974 = 0x9DC84AC7L;
    char **l_978 = (void*)0;
    char ***l_977 = &l_978;
    char ****l_976 = &l_977;
    char **** const *l_975 = &l_976;
    short *l_981 = &g_450;
    (*g_116) = l_969;
    (*p_5) = ((*p_4) = ((safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((l_974 | ((l_975 = l_975) != &l_976)), (((*l_969) , 1L) && (~((safe_rshift_func_uint8_t_u_u((((*l_969) , l_981) != (((*l_969) || (safe_lshift_func_int8_t_s_s(((safe_add_func_int32_t_s_s((**g_116), (*g_422))) , (*l_969)), (*l_969)))) , (void*)0)), g_355)) == (*l_969)))))), (**g_253))) ^ (**g_962)));
    return l_969;
}







static int * func_6(unsigned long long p_7, long long p_8, int * p_9, int * p_10)
{
    unsigned l_959 = 4294967295UL;
    int *l_966 = (void*)0;
    (*p_10) = (-1L);
    for (p_7 = 0; (p_7 >= 60); p_7 = safe_add_func_uint32_t_u_u(p_7, 1))
    {
        char l_955 = 0x3CL;
        struct S0 l_960 = {33,16109};
        short ***l_964 = &g_962;
        long long *l_965 = &g_95;
        (*g_422) = (safe_mod_func_int32_t_s_s((l_955 || (safe_sub_func_uint32_t_u_u((****g_454), ((p_7 , ((*l_965) = (g_958 == (((p_7 == l_959) , l_955) , ((*l_964) = ((l_960 , (safe_unary_minus_func_int64_t_s(l_959))) , g_962)))))) || (-8L))))), (**g_133)));
    }
    return l_966;
}







static unsigned char func_19(unsigned char p_20, const int * p_21, const int p_22)
{
    const struct S0 l_561 = {173,12731};
    int *l_595 = &g_78;
    unsigned short *l_636 = (void*)0;
    unsigned short **l_635 = &l_636;
    unsigned short *l_637 = &g_44;
    long long *l_638 = &g_95;
    int l_695 = (-8L);
    unsigned short l_836 = 3UL;
    (*g_91) = (*g_91);
    for (g_44 = 0; (g_44 != 23); ++g_44)
    {
        unsigned long long l_557 = 8UL;
        int * const l_558 = &g_47;
        unsigned short *l_569 = &g_390;
        short l_596 = 0x3EB4L;
        long long *l_601 = &g_95;
        (*g_91) = (void*)0;
        if ((g_103 < ((l_557 == (p_20 = p_20)) > p_22)))
        {
            int **l_559 = &g_331;
            (*l_559) = l_558;
        }
        else
        {
            int **l_560 = &g_331;
            unsigned l_566 = 0x97BDFBD8L;
            unsigned l_600 = 0x52B3F937L;
            (*g_563) = func_50(l_560, p_20, ((**l_560) = (**g_456)), l_561);
            (*g_331) = (safe_mod_func_uint32_t_u_u((**l_560), l_566));
            (*g_331) = (safe_add_func_int16_t_s_s(((void*)0 != l_569), (safe_mod_func_int8_t_s_s((l_561.f0 ^ p_22), (safe_rshift_func_int8_t_s_s(g_574, 5))))));
            for (g_450 = (-6); (g_450 > (-24)); --g_450)
            {
                long long l_590 = 4L;
                int *l_594 = (void*)0;
                char ** const **l_607 = &g_392;
                char ** const ***l_606 = &l_607;
            }
        }
        (*g_622) = l_558;
        (*g_422) = ((((l_561 , (1L && ((((safe_sub_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(6UL, 7)), 0xC3F2DD33L)) || p_22), ((safe_mod_func_int32_t_s_s((((*l_595) ^ p_22) ^ p_22), p_22)) < (*l_558)))) , (void*)0) == &p_21) == (*p_21)))) <= 0L) | (*l_558)) , 1L);
    }
    (*g_91) = ((0xF1B79A27L <= (p_20 & ((safe_sub_func_uint64_t_u_u((safe_sub_func_int64_t_s_s(((*l_638) = func_34((*p_21), ((*l_635) = (void*)0), l_637)), ((safe_add_func_uint32_t_u_u((0x57L || (*l_595)), (p_22 & (*l_595)))) > p_20))), 1L)) == 1L))) , (void*)0);
    if ((*p_21))
    {
        return g_78;
    }
    else
    {
        unsigned l_642 = 0xEE130C3EL;
        unsigned short *l_643 = &g_33;
        int *l_646 = &g_354;
        unsigned short *l_654 = (void*)0;
        int *l_667 = &g_354;
        short **l_703 = (void*)0;
        struct S0 l_745 = {548,-5805};
        long long **l_771 = &g_726;
        unsigned long long *l_826 = &g_272;
        short l_832 = 0x4935L;
        int ***l_875 = &g_116;
        long long *l_876 = &g_95;
        short l_913 = 0L;
        (*l_595) = (p_20 > func_34((safe_unary_minus_func_uint8_t_u(l_642)), &g_33, l_643));
        if ((*l_595))
        {
            unsigned short *l_653 = &g_33;
            const int l_659 = 1L;
            unsigned short *l_665 = &g_390;
            short **l_702 = (void*)0;
            short l_715 = (-5L);
            int l_720 = (-1L);
            int l_722 = 0L;
            unsigned l_773 = 0UL;
            if (((safe_add_func_uint16_t_u_u(func_34((*p_21), &g_390, (*l_635)), ((((*l_646) = (*l_595)) > p_22) > 0x6FF01BA29303491FLL))) | (g_78 == 1L)))
            {
                short l_649 = 1L;
                unsigned long long *l_650 = &g_480;
                short *l_651 = (void*)0;
                short *l_652 = &l_649;
                char *l_713 = &g_714;
                char *l_716 = &g_717;
                int l_721 = 0x7EBF0865L;
                if (((((*g_422) = ((*l_646) = (safe_rshift_func_int8_t_s_u((l_649 , (((((*l_650) = g_93) && ((*p_21) || func_34((p_20 || func_34((((*p_21) , ((*l_652) = func_34((*p_21), l_643, ((*l_635) = (*l_635))))) & p_22), l_653, l_651)), &g_390, l_654))) , 1L) , 0xB1L)), 4)))) ^ 0x0419544FL) != 0x5BF17FA8L))
                {
                    const int *l_655 = (void*)0;
                    unsigned char *l_663 = &g_76;
                    unsigned short *l_664 = &g_33;
                    const int **l_666 = &l_655;
                    l_655 = p_21;
                    (*l_595) = ((g_656 == (l_659 , g_660)) > ((*l_663) = (safe_sub_func_uint16_t_u_u(((*l_643) = ((((*l_638) = ((**g_455) == p_21)) , (254UL || l_659)) < p_20)), l_659))));
                    (*l_666) = func_50(&g_331, (((*l_646) = (func_34(((*l_646) = (-1L)), l_664, ((((*l_637) = ((*l_664) = (0x02F0CA72L ^ (l_650 == (g_103 , &g_480))))) || (-3L)) , (void*)0)) ^ p_22)) && 0L), p_22, (*g_142));
                }
                else
                {
                    short l_686 = 0x723AL;
                    unsigned char *l_700 = &g_76;
                    short **l_701 = &l_652;
                    (*g_116) = l_667;
                    for (g_47 = 0; (g_47 > (-22)); g_47--)
                    {
                        unsigned char *l_693 = &g_76;
                        unsigned char *l_694 = &g_510;
                        (*l_667) = (safe_sub_func_int32_t_s_s((safe_add_func_int64_t_s_s((**g_656), ((safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(g_11, (safe_rshift_func_int16_t_s_u(((*l_652) = 0x7715L), ((safe_rshift_func_uint8_t_u_s(((*l_694) = ((*l_693) = ((((p_20 == p_22) > (safe_sub_func_uint8_t_u_u((l_686 & p_22), (((*l_595) = (safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((l_686 , (safe_sub_func_uint64_t_u_u(((((p_20 | p_20) || g_272) < 0L) == p_20), p_22))), 0xF401L)), l_686))) | (**g_116))))) >= (*g_117)) | (-1L)))), 5)) > 0UL))))), p_20)) > 0L))), 0x973F48CCL));
                        if (l_695)
                            break;
                    }
                    (*g_422) = ((*l_646) = ((safe_mod_func_int8_t_s_s((18446744073709551615UL < func_34(l_659, (func_34((*l_595), &g_33, func_38((*g_116))) , l_653), &g_33)), 0xDAL)) || l_659));
                    l_703 = (l_702 = l_701);
                }
                (*g_704) = p_21;
                (*g_422) = (safe_add_func_int32_t_s_s((((*l_652) = g_103) > ((*l_646) & 0x5231L)), (safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(((**g_253) || (l_722 = (safe_rshift_func_uint8_t_u_u((((*l_713) = (*l_646)) <= (p_22 , ((*l_716) = l_715))), (safe_lshift_func_int8_t_s_s(0xFCL, (((((((**g_441) && (*g_422)) , (*l_595)) <= l_720) && l_721) , (*l_595)) || p_22))))))), 14)), (*p_21)))));
            }
            else
            {
                long long **l_723 = &l_638;
                int l_737 = 1L;
                short *l_738 = &g_241;
                (*g_724) = l_723;
                p_21 = func_24(((*l_595) = (safe_rshift_func_int16_t_s_s(l_720, l_715))), ((((safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s(p_22, ((*l_738) = (safe_lshift_func_int8_t_s_u((((*g_454) != (void*)0) == (safe_mod_func_int32_t_s_s(l_561.f1, (((4294967292UL && (l_715 == p_22)) , l_737) , (*l_667))))), p_22))))), p_20)) >= p_22) != 0xDEA3CB6E05511764LL) <= 0x589FBCC5L), l_646, g_574, l_561.f0);
                for (g_78 = (-22); (g_78 == (-25)); --g_78)
                {
                    short l_746 = 0xCABAL;
                    unsigned char *l_747 = &g_510;
                    char **l_751 = (void*)0;
                    char ***l_750 = &l_751;
                    const struct S0 l_752 = {647,-9050};
                    const int **l_753 = &g_185;
                    for (g_76 = 0; (g_76 < 15); g_76++)
                    {
                        (*g_704) = p_21;
                        if ((**g_620))
                            continue;
                    }
                    (*l_753) = func_50(&g_331, ((*l_747) = (safe_add_func_int8_t_s_s((+(l_746 = (l_745 , p_20))), (p_22 ^ l_737)))), ((safe_sub_func_uint8_t_u_u((g_294 = (0x01B80C79L == ((*g_419) != ((g_574 , p_20) , l_750)))), (-8L))) > (***g_724)), l_752);
                }
                p_21 = &l_695;
            }
            for (g_354 = 0; (g_354 < (-30)); g_354--)
            {
                unsigned l_766 = 18446744073709551608UL;
                int l_769 = 0L;
                int l_770 = 0x8E91E370L;
                unsigned long long *l_772 = &g_480;
                (*g_116) = (func_34((((safe_rshift_func_int16_t_s_u((((safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(l_659, (safe_lshift_func_uint8_t_u_u(g_714, 6)))), 4294967293UL)) || ((*l_772) = (safe_rshift_func_uint16_t_u_u(0UL, ((l_766 | ((void*)0 != &g_390)) && (safe_sub_func_int8_t_s_s((l_770 = (l_769 = l_766)), (((void*)0 == l_771) | (*l_667))))))))) , g_11), l_766)) >= 0x2F71L) , 0xE5388A6FL), l_654, l_665) , &l_769);
                (*l_595) = l_773;
            }
        }
        else
        {
            int *l_775 = &l_695;
            unsigned short *l_801 = (void*)0;
            int l_816 = 2L;
            const int **l_817 = &g_185;
            if (((!(p_20 , 0x3434B948L)) < p_20))
            {
                unsigned short *l_774 = &g_390;
                unsigned char *l_780 = &g_76;
                (*g_116) = func_24(p_22, (((*l_635) = l_774) != l_774), l_775, g_241, (safe_sub_func_int64_t_s_s(((p_22 <= ((safe_add_func_uint16_t_u_u((*l_667), (((*l_780) = ((1L >= (*p_21)) & p_22)) > g_78))) && 0xA858L)) > g_11), (*l_667))));
                (*g_781) = (*g_441);
            }
            else
            {
                int l_790 = 0xA56944E9L;
                struct S0 l_792 = {362,7467};
                unsigned short *l_794 = &g_390;
                const short l_807 = 1L;
                if ((0L > ((*l_667) < (safe_rshift_func_int8_t_s_s((*l_667), 1)))))
                {
                    (*g_116) = &l_695;
                    return g_76;
                }
                else
                {
                    char *l_788 = &g_103;
                    const int *l_791 = &g_354;
                    int *l_793 = (void*)0;
                    unsigned short *l_799 = (void*)0;
                    const struct S0 l_802 = {578,-1888};
                    unsigned ***l_808 = &g_133;
                    short *l_810 = &g_450;
                    short **l_809 = &l_810;
                    int **l_811 = (void*)0;
                    int **l_812 = (void*)0;
                    int **l_813 = &l_646;
                    const int **l_814 = &g_185;
                    for (g_450 = 0; (g_450 == 8); ++g_450)
                    {
                        const int **l_786 = (void*)0;
                        const int **l_787 = &g_185;
                        unsigned short *l_789 = (void*)0;
                        (*l_787) = p_21;
                        (*g_331) = ((void*)0 != l_788);
                        (*l_787) = l_791;
                    }
                    (*g_800) = p_21;
                    (*l_814) = p_21;
                    (*l_814) = ((g_815 > g_574) , ((*l_813) = l_775));
                }
                return l_816;
            }
            (*g_116) = (void*)0;
            (*l_817) = p_21;
        }
        for (l_642 = 7; (l_642 >= 56); l_642++)
        {
            long long l_855 = (-2L);
            int l_857 = 0xB3972BF5L;
            const int **l_865 = &g_185;
            const int *** const l_864 = &l_865;
            int * const **l_866 = (void*)0;
            struct S0 *l_888 = &g_140;
            unsigned short *l_914 = (void*)0;
            char *l_920 = &g_717;
            char **l_919 = &l_920;
            char ***l_918 = &l_919;
            char ****l_917 = &l_918;
            for (g_241 = 0; (g_241 < 9); g_241 = safe_add_func_int64_t_s_s(g_241, 6))
            {
                unsigned ****l_827 = (void*)0;
                int l_831 = 0L;
                long long *l_874 = &g_95;
                int l_877 = (-6L);
                for (g_78 = 0; (g_78 <= 23); g_78++)
                {
                    long long l_856 = 0x39099BE1D5033C14LL;
                    int *l_858 = (void*)0;
                    int * const ***l_867 = &l_866;
                }
            }
            if ((safe_rshift_func_uint8_t_u_s(g_450, (((*l_667) = p_22) , (*l_667)))))
            {
                int ** const *l_904 = &g_116;
                unsigned char *l_911 = &g_912;
                unsigned short *l_931 = (void*)0;
                if ((safe_add_func_int16_t_s_s(g_303, p_22)))
                {
                    struct S0 **l_889 = &l_888;
                    (*g_77) = (((*p_21) , (*g_141)) == ((*l_889) = l_888));
                }
                else
                {
                    unsigned char *l_895 = &g_76;
                    unsigned char **l_894 = &l_895;
                    char *l_905 = &g_714;
                    char *l_906 = (void*)0;
                    char *l_907 = &g_717;
                    int l_908 = (-10L);
                    (**l_864) = (((**g_141) , ((safe_rshift_func_int16_t_s_s(0x961AL, 14)) ^ 1L)) , func_24((safe_add_func_int32_t_s_s(((&g_552 == ((*l_894) = &g_294)) , ((*l_646) = ((safe_rshift_func_int16_t_s_u(p_20, 10)) ^ ((l_908 = (safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(p_20, (((*l_595) = ((*l_907) = ((*l_905) = (safe_sub_func_int8_t_s_s(((void*)0 == l_904), (*g_254)))))) , p_20))), p_20))) < p_20)))), 0x6EED34C4L)), g_241, &l_695, g_95, (**g_456)));
                }
                (**l_864) = p_21;
                for (g_717 = 11; (g_717 > (-23)); --g_717)
                {
                    char *l_921 = &g_714;
                    int l_922 = 7L;
                    unsigned long long *l_923 = &g_272;
                    unsigned short *l_930 = &g_390;
                    if (((!249UL) == (l_922 = ((*l_921) = (((*g_657) , l_917) != &g_392)))))
                    {
                        (**l_864) = (*g_704);
                    }
                    else
                    {
                        struct S0 **l_927 = &g_142;
                        (*l_927) = ((p_22 != ((l_923 == (void*)0) <= ((safe_unary_minus_func_uint64_t_u((safe_sub_func_uint64_t_u_u(g_390, (*l_595))))) || (***g_455)))) , l_888);
                        (*g_422) = (safe_mod_func_uint64_t_u_u(18446744073709551614UL, func_34(func_34(((((void*)0 == (*g_132)) > p_20) , ((void*)0 != &g_419)), l_930, l_931), &g_390, g_932)));
                        (*l_865) = (*g_563);
                    }
                    if ((**g_441))
                        continue;
                }
                return g_714;
            }
            else
            {
                unsigned short *l_937 = &g_390;
                (*g_422) = ((safe_mod_func_int64_t_s_s((safe_sub_func_uint8_t_u_u((+(p_20 >= (p_22 != g_390))), (p_22 <= ((*l_595) != func_34((*p_21), l_914, l_937))))), p_20)) == (-6L));
                if ((*p_21))
                    continue;
            }
            for (p_20 = 21; (p_20 == 42); p_20 = safe_add_func_int16_t_s_s(p_20, 1))
            {
                int **l_942 = &g_331;
                (**l_864) = ((*g_622) = l_667);
                for (g_717 = 3; (g_717 >= 8); g_717 = safe_add_func_int8_t_s_s(g_717, 6))
                {
                    (*l_865) = func_50(l_942, g_714, ((*g_134) = (*g_457)), (**g_141));
                }
                if ((*l_595))
                {
                    (**l_864) = (*l_942);
                    for (g_480 = 9; (g_480 >= 18); ++g_480)
                    {
                        return p_20;
                    }
                }
                else
                {
                    return g_78;
                }
            }
            for (g_294 = 0; (g_294 == 54); ++g_294)
            {
                (*l_865) = p_21;
            }
        }
    }
    return p_22;
}







static int * func_24(unsigned long long p_25, unsigned p_26, int * p_27, short p_28, unsigned p_29)
{
    char l_542 = 1L;
    unsigned short *l_551 = &g_33;
    int l_553 = 0L;
    l_542 = (-10L);
    l_553 = (l_542 != (((safe_mod_func_int64_t_s_s(0xF0FA86CC8516D391LL, 18446744073709551611UL)) > (((p_25 , (void*)0) != &l_542) >= 1L)) , 0xA7L));
    return p_27;
}







static short func_34(int p_35, unsigned short * p_36, unsigned short * p_37)
{
    unsigned l_496 = 18446744073709551607UL;
    int l_497 = 0x30BFF102L;
    unsigned char *l_504 = &g_76;
    unsigned char *l_505 = &g_294;
    long long *l_506 = (void*)0;
    long long **l_507 = &l_506;
    long long *l_508 = &g_95;
    unsigned char *l_509 = &g_510;
    const unsigned char l_524 = 254UL;
    int **l_529 = &g_117;
    const struct S0 l_534 = {243,4945};
    (*g_116) = &p_35;
    if ((safe_add_func_uint8_t_u_u((g_303 > ((0x39L > (((l_496 = (p_35 >= p_35)) ^ (g_355 == (l_497 < (((((safe_add_func_uint8_t_u_u(((*l_509) = (((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((((**g_133) = l_497) , ((((*l_505) = ((*l_504) = p_35)) >= (((*l_507) = l_506) == l_508)) | l_497)), g_78)), 0x65L)) | 7UL) & l_497)), p_35)) <= g_241) ^ 0L) <= l_497) > 0x899AL)))) < p_35)) == g_103)), (-1L))))
    {
        int *l_511 = &g_78;
        (*g_116) = l_511;
        for (g_47 = 2; (g_47 < (-1)); g_47--)
        {
            int **l_514 = (void*)0;
            long long l_521 = 0x69A611628A28F2F3LL;
            const struct S0 l_525 = {510,-6505};
            const int **l_526 = &g_185;
            (*l_526) = func_50(l_514, (~(safe_rshift_func_uint16_t_u_u(g_294, 11))), ((safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(p_35, l_496)), l_521)) , ((((*l_511) , (safe_add_func_int8_t_s_s(l_497, 0xDFL))) && l_524) >= g_234)), l_525);
        }
        (*g_91) = (void*)0;
        (*g_91) = (void*)0;
    }
    else
    {
        int l_533 = 0x38A191D6L;
        const int **l_535 = &g_185;
        unsigned char *l_538 = &g_294;
        (*g_91) = (void*)0;
        for (g_450 = (-18); (g_450 < 12); ++g_450)
        {
            (*g_116) = &l_497;
        }
        (*l_535) = func_50(l_529, g_44, (((safe_rshift_func_int8_t_s_u((g_390 == (**l_529)), 1)) == (safe_unary_minus_func_int16_t_s(((**l_529) & p_35)))) & l_533), l_534);
        for (g_44 = 0; (g_44 == 52); ++g_44)
        {
            short *l_539 = &g_303;
            const int ***l_540 = &l_535;
            (*g_331) = (((*l_539) = (((void*)0 != l_538) , ((-4L) <= (**g_441)))) , (l_540 != l_540));
        }
    }
    return g_385;
}







static unsigned short * func_38(int * p_39)
{
    short l_468 = 0x799AL;
    int l_469 = 0x1F53EBCDL;
    unsigned short l_493 = 0xD21DL;
    for (g_450 = 10; (g_450 >= (-21)); g_450--)
    {
        unsigned long long l_471 = 0xC3623F3E8B011B8DLL;
        int l_478 = 0x4FA4B5F9L;
        for (g_76 = 0; (g_76 < 60); g_76 = safe_add_func_uint32_t_u_u(g_76, 3))
        {
            unsigned short l_474 = 0x79FEL;
            unsigned long long *l_475 = &g_272;
            unsigned long long *l_476 = (void*)0;
            unsigned long long *l_477 = &l_471;
            unsigned long long *l_479 = &g_480;
        }
    }
    (*g_117) = (-9L);
    (*g_441) = ((((safe_add_func_int64_t_s_s((l_469 , ((safe_sub_func_uint64_t_u_u(g_140.f0, l_468)) < ((*g_117) < ((*g_254) , (g_105 , (((***g_132) > l_469) < (safe_unary_minus_func_uint32_t_u(((safe_sub_func_int16_t_s_s(((((safe_rshift_func_int8_t_s_u(((g_294 , g_294) != l_468), l_468)) < l_493) ^ l_469) ^ 0L), 0x44BAL)) || l_469))))))))), 0x51CC538B955BD646LL)) | 0xE186ED34L) == l_468) , (void*)0);
    return &g_44;
}







static int * func_40(unsigned short * p_41, unsigned long long p_42)
{
    int *l_46 = &g_47;
    int **l_45 = &l_46;
    unsigned short *l_64 = &g_44;
    const struct S0 l_200 = {475,-4212};
    long long *l_208 = &g_95;
    const int l_273 = 5L;
    struct S0 **l_321 = &g_142;
    int l_357 = 4L;
    short l_382 = (-10L);
    unsigned char l_401 = 1UL;
    l_45 = l_45;
    for (p_42 = 13; (p_42 > 41); p_42++)
    {
        unsigned short *l_59 = &g_44;
        unsigned short l_168 = 0xB140L;
        const int *l_172 = &g_78;
        const int **l_171 = &l_172;
        long long *l_183 = (void*)0;
        long long *l_184 = &g_95;
        unsigned char *l_189 = &g_76;
        int **l_209 = (void*)0;
        unsigned **l_217 = &g_134;
        unsigned l_225 = 0x040C694BL;
    }
    for (g_44 = 0; (g_44 != 39); ++g_44)
    {
        long long l_296 = (-4L);
        const struct S0 l_309 = {478,-6136};
        int *l_332 = &g_47;
        struct S0 **l_408 = &g_142;
        char ** const **l_416 = &g_392;
        unsigned ****l_453 = (void*)0;
        int l_459 = 0x3E1EDEC5L;
    }
    return (*g_116);
}







static const int * func_50(int ** p_51, unsigned char p_52, unsigned p_53, const struct S0 p_54)
{
    const int *l_169 = &g_47;
    const int **l_170 = &l_169;
    (*l_170) = l_169;
    return &g_78;
}







static int ** func_55(unsigned short * p_56, unsigned p_57, long long p_58)
{
    long long l_67 = 0x293C34F97039802ELL;
    short l_96 = 0x4EB7L;
    int l_118 = 0x36DA3523L;
    unsigned *l_136 = &g_105;
    unsigned l_166 = 0xC6A4C7F9L;
    int **l_167 = &g_117;
    if ((g_44 == l_67))
    {
        unsigned l_72 = 1UL;
        int *l_81 = &g_47;
        unsigned long long l_87 = 0x056EFF5237AE93ACLL;
        unsigned char *l_106 = &g_76;
        struct S0 l_109 = {692,1923};
        if (((safe_lshift_func_int8_t_s_s((0x175D1B3002E9D3B0LL & (!p_58)), (p_58 || ((safe_lshift_func_int8_t_s_u(p_58, 4)) ^ (((void*)0 == p_56) >= g_47))))) == ((p_58 | g_47) | l_67)))
        {
            int *l_73 = &g_47;
            (*g_77) = (l_72 , (((*l_73) = l_67) , ((((g_76 = (((void*)0 == p_56) , (((((safe_rshift_func_uint8_t_u_s(g_11, (l_72 >= p_58))) == (p_57 < ((p_57 & 4294967286UL) < p_57))) | l_67) , 1L) && p_57))) > p_57) >= p_58) , p_57)));
            for (g_76 = 0; (g_76 != 22); g_76 = safe_add_func_uint8_t_u_u(g_76, 6))
            {
                l_81 = l_73;
                if ((*g_77))
                    break;
            }
        }
        else
        {
            unsigned char l_84 = 0x7CL;
            unsigned char *l_90 = &g_76;
            long long *l_94 = &g_95;
            unsigned char *l_97 = (void*)0;
            unsigned char *l_98 = &l_84;
            char *l_101 = (void*)0;
            char *l_102 = &g_103;
            unsigned *l_104 = &g_105;
            (*l_81) = 0L;
            (*g_92) = ((safe_lshift_func_uint8_t_u_s((((*l_98) = (l_84 <= (((*l_81) & ((*g_77) | (l_87 >= (((*l_81) , (safe_add_func_uint8_t_u_u(((*l_90) = l_67), (((*l_94) = ((void*)0 == g_91)) != l_96)))) && g_95)))) , 0x30E9DD37L))) , g_47), g_47)) < g_44);
            (*g_77) = (-1L);
            (**g_91) = (safe_add_func_uint32_t_u_u(((*l_104) = (((*l_102) = 1L) ^ (g_76 = l_96))), g_78));
        }
        (*g_92) = ((((*l_106) = p_58) || g_78) , (*l_81));
        (*l_81) = (((safe_rshift_func_uint16_t_u_s(((l_109 , l_96) != ((*p_56) = l_96)), 1)) , (safe_add_func_uint32_t_u_u(p_57, l_67))) & ((safe_sub_func_uint64_t_u_u((p_57 != p_58), g_103)) >= g_47));
    }
    else
    {
        int *l_115 = &g_78;
        int **l_114 = &l_115;
        (*g_92) = p_58;
        return g_116;
    }
    if (l_67)
    {
        short l_121 = 0x2006L;
        int l_122 = 0L;
        unsigned *l_135 = &g_105;
        int l_137 = 0x1F773013L;
        l_118 = (-1L);
        l_122 = (safe_rshift_func_int16_t_s_s((0x320B35339FE21AC5LL < l_121), 0));
        for (l_122 = 0; (l_122 == 27); l_122 = safe_add_func_uint64_t_u_u(l_122, 1))
        {
            unsigned *l_128 = &g_105;
            unsigned **l_127 = &l_128;
            int l_138 = 0x2F251B45L;
            for (g_78 = 28; (g_78 <= 14); g_78 = safe_sub_func_uint8_t_u_u(g_78, 2))
            {
                unsigned ***l_129 = (void*)0;
                unsigned ***l_130 = (void*)0;
                unsigned ***l_131 = (void*)0;
                (*g_132) = l_127;
                l_137 = (l_122 , (((g_78 && (g_78 , (((*g_133) = (*g_133)) != l_135))) >= 18446744073709551615UL) != (&g_105 == l_136)));
                if (l_138)
                    continue;
            }
            l_118 = l_137;
            (*g_116) = &l_137;
        }
    }
    else
    {
        struct S0 *l_139 = &g_140;
        const unsigned char l_159 = 0xB7L;
        short *l_160 = (void*)0;
        short *l_161 = (void*)0;
        short *l_162 = &l_96;
        long long *l_163 = (void*)0;
        long long *l_164 = (void*)0;
        long long *l_165 = &l_67;
        (*g_141) = l_139;
        (**g_116) = ((p_58 <= ((safe_mod_func_int64_t_s_s((g_95 = 0xCEF870AB71361DE3LL), (safe_lshift_func_int8_t_s_u((p_58 || (safe_rshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u((((+(safe_add_func_int16_t_s_s(6L, (safe_mod_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_u(p_57, 3)) , p_57), ((*l_165) = (l_159 && ((((*l_162) = g_93) , (p_57 && 0x61L)) , 0x08L))))) , l_118), l_166))))) , g_140.f1) != 65535UL), g_78)), (*p_56)))), g_44)))) < 4294967287UL)) || 7L);
        return &g_117;
    }
    return l_167;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_140.f0, "g_140.f0", print_hash_value);
    transparent_crc(g_140.f1, "g_140.f1", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_303, "g_303", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_355, "g_355", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    transparent_crc(g_390, "g_390", print_hash_value);
    transparent_crc(g_450, "g_450", print_hash_value);
    transparent_crc(g_480, "g_480", print_hash_value);
    transparent_crc(g_510, "g_510", print_hash_value);
    transparent_crc(g_552, "g_552", print_hash_value);
    transparent_crc(g_574, "g_574", print_hash_value);
    transparent_crc(g_658, "g_658", print_hash_value);
    transparent_crc(g_714, "g_714", print_hash_value);
    transparent_crc(g_717, "g_717", print_hash_value);
    transparent_crc(g_815, "g_815", print_hash_value);
    transparent_crc(g_912, "g_912", print_hash_value);
    transparent_crc(g_950, "g_950", print_hash_value);
    transparent_crc(g_968, "g_968", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
