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



static unsigned char g_4 = 0x63L;
static int g_6 = (-1L);
static unsigned short g_40 = 65535UL;
static unsigned short g_42 = 0x3FA3L;
static int g_43 = 0xE45DB0FFL;
static unsigned g_76 = 0x86E0DAEEL;
static int g_88 = (-1L);
static int ** volatile g_112 = (void*)0;
static int ** const volatile g_113 = (void*)0;
static unsigned g_124 = 4294967295UL;
static short g_126 = 0x91C6L;
static short g_128 = 0x755DL;
static int *g_132 = &g_6;
static int ** volatile g_131 = &g_132;
static volatile int g_151 = 0L;
static unsigned char g_158 = 0x1FL;
static int g_161 = (-6L);
static int * const volatile g_160 = &g_161;
static int ** volatile g_198 = &g_132;
static int * volatile * volatile *g_206 = (void*)0;
static int * volatile g_221 = &g_161;
static int ** volatile g_222 = &g_132;
static volatile unsigned g_238 = 0xA9EE059EL;
static const volatile unsigned * volatile g_237 = &g_238;
static const volatile unsigned * volatile * volatile g_236 = &g_237;
static volatile char g_261 = 0x2DL;
static volatile char *g_260 = &g_261;
static unsigned short *g_265 = &g_42;
static unsigned short **g_264 = &g_265;
static unsigned short **g_268 = (void*)0;
static unsigned g_289 = 3UL;
static int ** volatile g_342 = &g_132;
static int ** volatile g_343 = &g_132;
static int * volatile g_350 = &g_43;
static int * const volatile g_356 = &g_43;
static int ** volatile g_357 = &g_132;
static volatile unsigned char g_361 = 0xE2L;
static volatile unsigned char *g_360 = &g_361;
static int * volatile g_362 = &g_43;
static char g_371 = 0x8AL;
static int * volatile g_372 = &g_43;
static int ** volatile g_375 = &g_132;
static int g_386 = 0xD0909EEDL;
static int ** volatile g_437 = &g_132;
static int ** volatile g_454 = &g_132;
static int ** volatile g_458 = &g_132;
static int * volatile g_477 = &g_43;
static int ** volatile g_478 = &g_132;
static int ** const volatile g_496 = &g_132;
static int ** const volatile g_523 = &g_132;
static int ** volatile g_545 = &g_132;
static int ** volatile g_546 = &g_132;
static unsigned g_562 = 0x100141EDL;
static unsigned char g_575 = 0xBDL;
static int ** volatile g_577 = &g_132;
static int ***g_589 = (void*)0;
static const int g_608 = 0xB72EF4DCL;
static const int *g_607 = &g_608;
static char g_613 = 0x6BL;
static char g_615 = (-9L);
static int ** volatile g_639 = &g_132;
static int ** volatile g_653 = &g_132;
static volatile char **g_690 = &g_260;
static volatile char *** volatile g_689 = &g_690;
static volatile char *** volatile * volatile g_688 = &g_689;
static int ** const volatile g_732 = &g_132;
static const int ** volatile g_741 = &g_607;
static int ** volatile g_745 = &g_132;



static int func_1(void);
static unsigned func_2(int p_3);
static int func_13(int * p_14);
static unsigned short func_18(unsigned p_19, const int * p_20, int * p_21);
static const int * func_22(int * const p_23, unsigned p_24);
static unsigned func_25(unsigned short p_26, int * p_27, unsigned p_28);
static unsigned char func_29(const unsigned p_30, short p_31, unsigned short p_32);
static int * func_46(int p_47);
static char func_54(int p_55, unsigned short p_56, int p_57, const int p_58);
static int func_83(unsigned * p_84, unsigned short * p_85);
static int func_1(void)
{
    unsigned *l_751 = (void*)0;
    unsigned **l_750 = &l_751;
    const unsigned *l_753 = (void*)0;
    const unsigned **l_752 = &l_753;
    int l_754 = (-3L);
    int **l_755 = &g_132;
    int l_756 = 0x7A65FFEFL;
    l_754 = ((func_2(g_4) & ((g_608 > g_608) ^ ((g_608 , l_750) == l_752))) < g_386);


    ;

    (*l_755) = &l_754;

    ;
    return l_756;


}







static unsigned func_2(int p_3)
{
    int *l_5 = &g_6;
    int l_528 = 0x93BE3A05L;
    unsigned short l_559 = 65535UL;
    unsigned l_580 = 0x4D6FB67AL;
    char *l_582 = &g_371;
    char **l_581 = &l_582;
    char ***l_583 = &l_581;
    int *l_611 = &g_43;
    short l_628 = 0x5722L;
    int *l_678 = (void*)0;
    unsigned char l_730 = 255UL;
    int *l_746 = (void*)0;
    int **l_747 = (void*)0;
    int **l_748 = &l_746;
    unsigned short l_749 = 0UL;
    (*l_5) = 0x7E17F759L;
    for (g_4 = 0; (g_4 <= 13); g_4 = safe_add_func_int16_t_s_s(g_4, 4))
    {
        unsigned char l_529 = 0x99L;
        int l_530 = 0x5C9201CDL;
        int *l_531 = &l_530;
        unsigned *l_532 = &g_124;
        if ((((((*l_532) = (~(safe_mod_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(func_13(&g_6), (l_529 = ((safe_rshift_func_uint16_t_u_u(g_386, p_3)) | l_528)))) | (((l_530 , (void*)0) == l_5) , ((*l_531) = (l_528 != g_4)))), g_4)))) && (*l_5)) <= 1L) , (*l_531)))
        {
            return p_3;
        }
        else
        {
            int l_543 = (-1L);
            for (g_40 = 0; (g_40 < 30); g_40 = safe_add_func_uint8_t_u_u(g_40, 3))
            {
                int *l_544 = (void*)0;
                int l_571 = 1L;
                unsigned short l_574 = 1UL;
                for (g_124 = 0; (g_124 == 16); g_124++)
                {
                    unsigned *l_560 = (void*)0;
                    unsigned *l_561 = &g_562;
                    int **l_569 = &l_544;
                    short *l_570 = &g_126;
                    unsigned short *l_572 = &l_559;
                    int l_573 = (-2L);
                    unsigned l_576 = 0x36195DDCL;
                }
            }
        }

        ;
        (*g_577) = &l_528;

        ;
    }

    ;
    ;
    if ((+(p_3 && ((*g_260) ^ ((safe_add_func_int16_t_s_s((7UL >= (l_580 == ((((*l_583) = l_581) != (void*)0) , ((g_124 = 0xF4CA21FFL) >= p_3)))), (safe_rshift_func_uint16_t_u_u((**g_264), 5)))) < 0x76L)))))
    {
        int ***l_588 = (void*)0;
        int ****l_590 = &g_589;
        int *l_594 = &g_386;
        int **l_593 = &l_594;
        int ***l_592 = &l_593;
        int ****l_591 = &l_592;
        int l_595 = (-3L);
        unsigned *l_598 = &g_76;
        int **l_599 = (void*)0;
        int **l_600 = (void*)0;
        int **l_601 = &g_132;
        p_3 = ((l_588 != ((*l_591) = ((*l_590) = g_589))) ^ (g_261 == (0x97BD82C9L >= ((*g_132) = ((l_595 & func_29(l_595, ((((*l_5) ^ 253UL) > (safe_mul_func_uint8_t_u_u(func_29(func_29(func_29(((*l_598) = 0xD6C0E962L), g_124, l_595), g_371, p_3), p_3, (*l_5)), l_595))) <= (*g_265)), (**g_264))) , (*g_132))))));

        ;
        (*g_131) = (*g_342);
        (*l_601) = (void*)0;

        ;
    }
    else
    {
        unsigned l_605 = 0UL;
        unsigned l_606 = 9UL;
        int *l_609 = &g_43;
        short *l_610 = &g_126;
        char *l_612 = &g_613;
        char *l_614 = &g_615;
        char ***l_661 = &l_581;
        int l_738 = 0x9EE4BC88L;
        (*l_5) = (**g_577);
        if ((safe_sub_func_uint32_t_u_u(((((*l_614) = (((*l_612) = ((**l_581) = (((p_3 > p_3) > ((*l_610) = func_18((safe_unary_minus_func_int32_t_s((func_18(((**g_264) || l_605), (g_607 = (l_606 , (*g_454))), l_609) & ((*l_610) = (-8L))))), &g_608, l_611))) , (*g_260)))) , (*g_260))) , p_3) , p_3), 0L)))
        {
            int *l_626 = (void*)0;
            int l_627 = 1L;
            int l_629 = 0x9837155AL;
            unsigned short *l_634 = &g_40;
            char ***l_662 = &l_581;
            unsigned *l_706 = &g_76;
            unsigned **l_705 = &l_706;
            int **l_731 = &l_5;
            if (((safe_mod_func_uint8_t_u_u((p_3 , (*l_5)), p_3)) , (safe_rshift_func_int8_t_s_u(((((((((l_627 = (safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s((**g_131), (*l_609))), (safe_sub_func_uint8_t_u_u(p_3, g_40))))) , ((*l_609) = 255UL)) < ((g_76 ^ p_3) == 0x9538FD0DL)) > 4294967295UL) , (void*)0) != g_589) , l_628) ^ 0x8EF92FA3L), l_629))))
            {
                unsigned char *l_635 = &g_4;
                char ****l_638 = &l_583;
                int l_640 = 0x465E9DA9L;
                (*g_639) = &p_3;

                ;
                return l_640;



            }
            else
            {
                int l_643 = 0x9D7B9F8CL;
                unsigned short *l_648 = &l_559;
                int **l_698 = &l_626;
                int ***l_697 = &l_698;
                short **l_700 = &l_610;
                unsigned *l_704 = &g_76;
                unsigned **l_703 = &l_704;
                if ((((((((*g_260) || ((***l_583) = (((0x2CA3L ^ (safe_mod_func_uint16_t_u_u(p_3, ((*l_634) = l_643)))) | ((**g_264) , func_29(((*l_609) = (l_609 != l_626)), (safe_sub_func_int16_t_s_s(0x27A3L, (((*l_648) = ((*g_265) = (safe_mod_func_int16_t_s_s((0L > p_3), l_643)))) && g_371))), l_643))) || p_3))) ^ p_3) < p_3) <= p_3) && l_629) && l_643))
                {
                    int l_651 = (-1L);
                    unsigned *l_652 = &l_580;
                    unsigned char **l_656 = (void*)0;
                    unsigned char *l_658 = &g_4;
                    unsigned char **l_657 = &l_658;
                    char ****l_663 = &l_662;
                    int l_675 = (-1L);
                    const int l_699 = (-1L);
                    (*g_653) = (*g_357);
                    if (((*g_132) = ((((p_3 ^ 65535UL) & (((*l_657) = l_582) == l_614)) & ((**g_264) , (g_40 , (safe_add_func_int32_t_s_s((((0x8EC2B1D5L >= (l_661 == ((*l_663) = l_662))) & (*l_611)) < 0UL), 0xD814FF1AL))))) >= 0x44L)))
                    {
                        unsigned *l_674 = &l_606;
                        unsigned l_687 = 6UL;
                        (*l_611) = func_18(((*l_652) = ((*g_265) , func_29((safe_add_func_int32_t_s_s(((((safe_add_func_int32_t_s_s(0x36604195L, (safe_rshift_func_int16_t_s_s(5L, 10)))) ^ ((*l_609) = (safe_add_func_uint16_t_u_u((**g_264), ((((247UL && ((*l_612) = ((****l_663) = l_627))) , ((l_651 = (p_3 , (**g_375))) || ((safe_sub_func_uint32_t_u_u((+((*l_674) = ((g_615 = ((****l_663) = p_3)) & p_3))), (*g_477))) , g_158))) <= p_3) >= p_3))))) | l_675) < g_88), 0xAB3DBE75L)), l_629, l_629))), &g_161, &g_161);
                        p_3 = ((((safe_lshift_func_uint16_t_u_s((p_3 && ((safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((p_3 , (p_3 < 0x3F70L)), (+g_6))), (*g_360))) ^ ((~(((p_3 | ((func_29((((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(p_3, l_675)), 6)) ^ (**g_264)) , p_3), l_643, p_3) | l_629) && g_615)) >= g_4) >= p_3)) || (*g_265)))), 11)) && (**g_577)) && l_687) < g_613);
                        (*l_609) = (!((g_688 == (void*)0) && (safe_sub_func_uint16_t_u_u(((((*l_634) = 0x1233L) ^ p_3) < (g_575 = (((((safe_sub_func_uint8_t_u_u(((l_627 = (l_675 = func_29((+(safe_sub_func_uint8_t_u_u(((((*l_658) = ((void*)0 == l_697)) ^ func_18((func_29(l_699, p_3, p_3) != g_615), (*g_198), &g_161)) , 0x6CL), p_3))), l_643, (*g_265)))) , (*g_360)), 0x32L)) || (*g_360)) , 0x9CA9L) <= g_608) , p_3))), g_6))));
                    }
                    else
                    {
                        short ***l_701 = &l_700;
                        int **l_702 = &l_609;
                        (*l_701) = l_700;
                        (*l_702) = (void*)0;

                        ;
                    }

                    ;
                    ;
                    return p_3;


                }
                else
                {
                    unsigned short l_727 = 65535UL;
                    unsigned *l_728 = (void*)0;
                    int l_729 = (-1L);
                    l_705 = l_703;

                    ;
                    for (l_643 = 0; (l_643 <= 26); l_643++)
                    {
                        if (p_3)
                            break;
                        if (l_629)
                            continue;
                    }
                    (*l_611) = ((func_18((((*g_356) , (func_25((((((safe_mod_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(p_3, (((((((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((g_562 = (safe_sub_func_int16_t_s_s((((+0x5BL) < (((safe_mod_func_uint32_t_u_u(g_615, (*l_609))) , l_727) == (p_3 == p_3))) <= ((l_629 | 0x4DBDL) ^ (*l_609))), p_3))), 0x32407FC9L)), 12)), 4294967290UL)), 6)) ^ p_3) != l_729) & p_3) < 0x7716BC84L) || g_124) & l_643))) , p_3), (**g_264))) ^ l_730) , 255UL) <= 0x43L) , (*g_265)), &l_643, l_627) , 0xC356L)) && l_729), &l_643, &l_528) == 0x4C0F4BBFL) < p_3);
                }

                ;
                (*l_611) = l_629;
            }


            (*l_5) = (*g_221);
            (*l_731) = func_46(p_3);

            ;

        }
        else
        {
            unsigned *l_735 = &g_562;
            unsigned *l_739 = (void*)0;
            unsigned *l_740 = &g_76;
            const int *l_744 = &g_88;
            const int **l_743 = &l_744;
            const int ***l_742 = &l_743;
            (*g_732) = &p_3;

            ;
            (*g_741) = func_22(l_609, ((*l_740) = ((*l_609) == (safe_sub_func_uint32_t_u_u(((*l_735) = 1UL), func_18((**g_236), &l_528, &l_528))))));

            ;
            ;
            (*g_745) = &l_528;

            ;
        }

        ;

        ;
        (*l_609) = p_3;
    }

    ;

    ;
    (*l_748) = l_746;
    return l_749;



}







static int func_13(int * p_14)
{
    unsigned char l_17 = 0UL;
    int * const l_38 = &g_6;
    unsigned short *l_39 = &g_40;
    unsigned short *l_41 = &g_42;
    unsigned l_44 = 0UL;
    int l_45 = 0xF3BBA684L;
    int *l_373 = &g_6;
    unsigned *l_409 = &g_289;
    unsigned **l_408 = &l_409;
    char *l_410 = &g_371;
    unsigned char *l_411 = &g_158;
    (*l_38) = (safe_mul_func_int16_t_s_s((g_6 , (((l_17 <= g_6) & func_18(g_6, func_22((func_25(((((l_17 & (l_17 | (func_29(g_4, (g_43 = (safe_unary_minus_func_uint32_t_u((((*l_41) = ((*l_39) = ((0x0AL != (safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((l_38 == (void*)0), (*l_38))), 10))) <= g_4))) & (*l_38))))), l_44) >= (*l_38)))) | (*l_38)) | g_4) > (*l_38)), &g_6, l_45) , (void*)0), (*l_38)), l_373)) ^ 0x4163L)), (*l_38)));

    ;
    (*l_38) = (*p_14);
    if (((((safe_unary_minus_func_uint16_t_u(((**g_264) != ((void*)0 != l_408)))) , (((*l_410) = ((~(*g_360)) & 1UL)) > ((*l_373) || ((*l_411) = (*l_38))))) , 8UL) & ((&g_126 != (void*)0) != (*l_38))))
    {
        unsigned short *l_412 = &g_42;
        int l_413 = 0x40E753FCL;
        unsigned *l_440 = &g_289;
        unsigned char l_506 = 0xACL;
        if ((l_413 == 0UL))
        {
            int l_416 = 1L;
            unsigned char l_475 = 254UL;
            if ((((+((safe_sub_func_uint8_t_u_u(((*g_260) || l_416), (safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s(func_29((l_416 != g_43), ((((*g_132) == ((void*)0 == l_39)) == (safe_mod_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s((0xF75AL | (0x2C7DL | l_416)), 4)), 4)) > 0xBB0D7DC5L), l_413))) > (**g_264)), (*g_265)), l_416)), (*l_373))), g_76)))) & l_416)) ^ l_413) & g_42))
            {
                unsigned *l_433 = &l_44;
                unsigned short *l_441 = (void*)0;
                int l_457 = 0L;
                for (g_161 = 26; (g_161 > (-7)); --g_161)
                {
                    unsigned char l_436 = 252UL;
                    if ((safe_rshift_func_int8_t_s_u(((-1L) && (((void*)0 != l_433) >= ((**g_264) = (safe_lshift_func_uint8_t_u_u(l_413, 7))))), (((*l_410) = l_436) > (*g_360)))))
                    {
                        unsigned short l_442 = 0UL;
                        short *l_453 = &g_126;
                        (*g_437) = p_14;

                        ;
                        (*g_132) = ((0xCEE2L & 0UL) | (((((safe_rshift_func_int8_t_s_s(((*l_373) , ((*l_410) = l_442)), l_416)) < (l_442 != ((l_436 | (**g_198)) | 1UL))) , (*g_260)) <= g_40) >= 1UL));
                        (*g_132) = (safe_sub_func_uint32_t_u_u((l_442 > ((safe_rshift_func_uint16_t_u_u(0x6EBAL, l_436)) , (safe_sub_func_uint8_t_u_u(0xA7L, ((void*)0 != l_440))))), (~((safe_rshift_func_int8_t_s_s((*g_260), 4)) ^ ((safe_add_func_int16_t_s_s(((*l_453) = 9L), g_43)) | 0xACCB8323L)))));
                        (*g_454) = &l_413;

                        ;
                    }
                    else
                    {
                        (*l_373) = (safe_sub_func_uint16_t_u_u(l_457, (**g_264)));
                        (*p_14) = (*g_160);
                        (*g_458) = l_409;

                        ;
                        p_14 = l_373;
                    }

                    ;
                    (*g_350) = (*p_14);
                    if ((**g_343))
                        break;
                }

                ;
            }
            else
            {
                int l_476 = (-1L);
                unsigned short *l_490 = &g_42;
                const unsigned char l_494 = 5UL;
                unsigned char **l_508 = &l_411;
                unsigned char ***l_507 = &l_508;
                for (g_161 = (-2); (g_161 >= 12); g_161++)
                {
                    short l_463 = 0xA4B5L;
                    unsigned *l_474 = &g_289;
                    int l_491 = (-9L);
                    if ((((safe_mod_func_uint16_t_u_u((((*l_410) = (*l_38)) , (l_463 > (l_416 ^ 0xC8L))), 0x7E66L)) <= (safe_add_func_uint32_t_u_u((!(((safe_add_func_int8_t_s_s(0x28L, (safe_add_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((*g_260), (*l_373))) != (((func_29(((*l_474) = 0x35D3E90FL), g_40, (*g_265)) , 1L) >= l_413) != l_416)), 0x6AL)) & l_416), (*l_38))))) , 0x592D42B9L) , l_413)), l_475))) & l_476))
                    {
                        short *l_481 = &l_463;
                        int l_489 = 0L;
                        (*g_477) = ((*p_14) = (*l_373));
                        (*g_478) = &l_476;

                        ;
                        (*p_14) = (safe_add_func_int16_t_s_s(((*l_481) = 0xBF2AL), ((*l_412) = func_29((((((safe_unary_minus_func_uint32_t_u(g_88)) <= ((((safe_lshift_func_int8_t_s_u((*l_373), 1)) , (g_158 = ((safe_sub_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_u(((l_489 , l_491) ^ ((((safe_sub_func_int32_t_s_s(((*p_14) ^ (-1L)), l_476)) & g_4) , l_489) , l_491)), (*g_360))) , g_88) | g_42), l_494)) , l_494))) == (*l_373)) , (*g_260))) || l_413) , l_491) , 18446744073709551606UL), l_489, l_494))));
                    }
                    else
                    {
                        (*l_38) = (safe_unary_minus_func_uint32_t_u(l_476));
                    }

                    ;
                    (*g_496) = p_14;

                    ;
                }

                ;
                for (g_42 = (-19); (g_42 >= 46); g_42++)
                {
                    for (l_413 = 0; (l_413 < 2); l_413++)
                    {
                        const int l_501 = (-10L);
                        short *l_504 = (void*)0;
                        short *l_505 = &g_128;
                        (*l_38) = (*l_38);
                        (*p_14) = func_29(l_501, (*l_38), func_29(func_18(((((*l_505) = (safe_mod_func_uint8_t_u_u((1L == (*l_38)), 0xCCL))) != l_506) , ((void*)0 != &g_4)), p_14, p_14), l_475, l_475));

                        ;
                    }
                }
                (*l_507) = &l_411;
            }

            ;
            (*g_523) = ((safe_rshift_func_uint8_t_u_s((l_475 >= ((((void*)0 == &l_411) >= ((safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((g_126 != 0xDBB7L), (-1L))), (safe_mul_func_int16_t_s_s(l_506, (g_128 = (safe_mul_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((0xA28F2F3CL < ((safe_mod_func_uint32_t_u_u(0x8DED3852L, 0xCFAC44B0L)) , 4294967295UL)), (*l_38))) , 0xAAL), (-8L)))))))) < 4294967295UL)) | (*l_373))), 5)) , l_409);

            ;
        }
        else
        {
            short l_524 = (-10L);
            return l_524;
        }

        ;
    }
    else
    {
        short l_525 = 0L;
        (*l_38) = l_525;
        return (*p_14);
    }

    ;
    return (*l_38);
}







static unsigned short func_18(unsigned p_19, const int * p_20, int * p_21)
{
    int *l_374 = &g_161;
    int **l_376 = (void*)0;
    int **l_377 = &g_132;
    int * const **l_381 = (void*)0;
    int * const **l_387 = (void*)0;
    (*g_375) = l_374;

    ;
    (*l_377) = (*g_343);
    if ((**g_222))
    {
        unsigned l_397 = 9UL;
        unsigned short *l_399 = &g_42;
        if ((*p_21))
        {
            int * const **l_378 = (void*)0;
            int * const ***l_379 = (void*)0;
            int * const ***l_380 = &l_378;
            int * const l_385 = &g_386;
            int * const *l_384 = &l_385;
            int * const **l_383 = &l_384;
            int * const ***l_382 = &l_383;
            short *l_390 = (void*)0;
            short *l_391 = &g_126;
            int l_396 = 1L;
            short *l_398 = &g_128;
            (*g_132) = (*g_221);
            (**g_342) = (**g_131);
        }
        else
        {
            unsigned short l_400 = 0xCA14L;
            return l_400;
        }
    }
    else
    {
        return (**g_264);
    }
    (**l_377) = ((!((g_42 , (-1L)) ^ ((*l_374) > (p_19 || func_29((*g_237), ((safe_sub_func_uint16_t_u_u((*g_265), p_19)) >= (safe_mul_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(g_76, (func_29((*l_374), p_19, (**g_264)) | g_128))) && 0x3FL), 0x9BBDL))), (**g_264)))))) , (*g_356));
    return (*l_374);
}







static const int * func_22(int * const p_23, unsigned p_24)
{
    unsigned char *l_365 = &g_158;
    int l_366 = 2L;
    unsigned char l_367 = 0x8DL;
    int *l_368 = &g_161;
    unsigned short *l_369 = &g_40;
    char *l_370 = &g_371;
    (*g_372) = (safe_sub_func_uint8_t_u_u(p_24, ((*l_370) = ((((p_24 == (l_365 != l_365)) | l_366) || 6UL) >= ((*l_368) = func_54(((*l_368) = l_367), func_29((~((~(p_24 , g_128)) >= (-1L))), p_24, (*g_265)), g_261, g_42))))));

    ;
    (*l_368) = (*g_160);
    return (*g_198);


}







static unsigned func_25(unsigned short p_26, int * p_27, unsigned p_28)
{
    const unsigned l_354 = 18446744073709551615UL;
    (*g_342) = func_46(g_40);


    (*g_343) = p_27;


    for (g_40 = 0; (g_40 < 44); ++g_40)
    {
        for (g_76 = 26; (g_76 >= 7); g_76 = safe_sub_func_uint32_t_u_u(g_76, 1))
        {
            const unsigned l_353 = 0UL;
            for (g_88 = 0; (g_88 > (-14)); --g_88)
            {
                unsigned l_355 = 0x1F72A75FL;
                (*g_350) = (*p_27);
                (*g_356) = ((((safe_rshift_func_uint8_t_u_s(((func_29(l_353, func_29(l_354, p_26, (**g_264)), (**g_264)) == (p_26 & p_26)) ^ p_26), 5)) , l_355) , p_26) < 0x94DFL);
                if ((*g_160))
                    break;
            }
            (*g_357) = (*g_198);
        }
        (*g_362) = (safe_lshift_func_int16_t_s_u(((void*)0 != g_360), 1));
    }
    return (*g_237);
}







static unsigned char func_29(const unsigned p_30, short p_31, unsigned short p_32)
{
    return g_42;
}







static int * func_46(int p_47)
{
    short l_65 = 0x9D3BL;
    int l_66 = 0x4DB28543L;
    unsigned short *l_67 = &g_42;
    unsigned *l_75 = (void*)0;
    const int l_77 = 0x3394210AL;
    int *l_220 = &g_43;
    int **l_223 = &l_220;
    char l_290 = 0x29L;
    (*g_221) = (safe_rshift_func_uint16_t_u_u((((~(safe_rshift_func_int16_t_s_s((0x26L == (safe_sub_func_int32_t_s_s(((*l_220) = (func_54(((func_29((g_76 = ((safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(func_29(((((((p_47 , 0UL) != (l_65 >= (g_6 & p_47))) && l_65) | func_29(((((*l_67) = l_66) < (safe_unary_minus_func_uint32_t_u((safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((l_67 == l_67), 0x1863L)) < p_47), 0x4484L)), g_43))))) > p_47), g_40, g_43)) >= g_43) ^ g_6), l_66, p_47), 0xCCF7L)), g_4)) , g_6), p_47)) == g_4)), l_66, l_65) , 0xF205L) < 0x470BL), l_66, p_47, l_77) != p_47)), 0x9925D8BBL))), 3))) < g_6) || 0UL), g_4));


    (*g_222) = (*g_131);
    (*l_223) = &p_47;

    ;
    if (p_47)
    {
        int * const l_224 = &g_161;
        int **l_225 = &l_220;
        (*l_225) = l_224;

        ;
        (*l_220) = (safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s((**l_223), (*l_220))), (**l_225)));
    }
    else
    {
        char l_232 = (-7L);
        unsigned **l_235 = &l_75;
        unsigned *l_243 = (void*)0;
        unsigned *l_244 = &g_76;
        char *l_245 = &l_232;
        unsigned short **l_263 = (void*)0;
        int *l_307 = &g_88;
        int **l_306 = &l_307;
        int ***l_305 = &l_306;
        unsigned l_311 = 4UL;
        int l_335 = 2L;
        (*l_223) = (*l_223);
        (*l_220) = (safe_rshift_func_uint16_t_u_u(g_6, l_232));
        if (((safe_mul_func_uint16_t_u_u(((**l_223) && (((!g_124) != ((l_235 != g_236) & 250UL)) , 0L)), (((*l_245) = (safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((func_29(((*l_244) = ((l_67 == l_67) && g_161)), g_158, g_42) && g_161), g_124)), 0UL))) && 0x29L))) == 0x3BD3L))
        {
            unsigned short l_246 = 65534UL;
            int l_273 = 5L;
            int *l_274 = &g_161;
            unsigned char *l_291 = &g_4;
            unsigned l_292 = 1UL;
            unsigned **l_340 = &l_244;
            if ((g_158 <= (l_246 <= (g_158 > g_88))))
            {
                int l_256 = (-1L);
                unsigned short *l_286 = &l_246;
                unsigned l_308 = 5UL;
                unsigned *l_309 = &l_292;
                unsigned char *l_310 = &g_158;
                for (l_65 = 0; (l_65 >= (-13)); l_65 = safe_sub_func_uint16_t_u_u(l_65, 4))
                {
                    const char l_271 = 0x80L;
                    for (l_232 = 0; (l_232 == (-25)); l_232 = safe_sub_func_int32_t_s_s(l_232, 1))
                    {
                        int **l_251 = &g_132;
                        short *l_257 = &g_128;
                        char **l_262 = &l_245;
                        unsigned short ***l_266 = (void*)0;
                        unsigned short ***l_267 = &g_264;
                        unsigned short *l_272 = &l_246;
                        (*l_251) = ((*l_223) = &p_47);

                        ;
                        (*l_220) = (safe_add_func_int16_t_s_s(((g_126 = (((*l_272) = ((safe_mul_func_int16_t_s_s((((*l_257) = l_256) == (safe_lshift_func_uint8_t_u_s(((p_47 , g_260) == ((*l_262) = &l_232)), (l_263 != (g_268 = ((*l_267) = g_264)))))), l_246)) , ((**g_268) = (safe_lshift_func_int8_t_s_u((((p_47 < l_271) != l_246) , p_47), g_161))))) == l_273)) == g_238), l_271));

                        ;
                        if ((**g_222))
                            break;
                        (*g_131) = l_274;

                        ;
                    }
                    for (l_273 = 0; (l_273 != (-20)); --l_273)
                    {
                        (*l_223) = &p_47;
                    }
                }


                for (g_76 = (-10); (g_76 > 7); g_76 = safe_add_func_uint32_t_u_u(g_76, 1))
                {
                    const char l_285 = 0L;
                    short *l_287 = &g_126;
                    unsigned *l_288 = &g_289;
                    (*l_274) = (safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((func_29(l_285, ((**l_223) = ((*l_287) = (*l_220))), ((((*l_288) = func_29((*g_237), g_40, (*l_274))) , (((*l_288) = (((&g_264 != &g_264) < g_4) , l_256)) , l_256)) , 0xAE06L)) > g_6), l_232)), 0xC3BFL)), (*l_274)));
                    (*l_220) = ((((**g_264) = ((l_290 > p_47) || 0UL)) && (**g_264)) != ((g_88 = (l_291 != (void*)0)) , l_292));
                    (*l_223) = &l_273;

                    ;
                }

                ;
                (**l_223) = (*l_274);
                if (((p_47 | g_76) & ((*g_221) = (((((-5L) || func_29(((+((safe_rshift_func_int8_t_s_s(l_256, 1)) > l_232)) > (safe_mul_func_uint8_t_u_u(((*l_310) = (((*l_274) , ((safe_mod_func_uint32_t_u_u(((*l_309) = (safe_lshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((void*)0 == l_305), l_308)), g_6)), (**g_264)))), (-7L))) <= p_47)) || 0xF266B89EL)), 0x92L))), g_238, l_311)) >= 3UL) < p_47) , l_256))))
                {
                    int *l_312 = &l_273;
                    (*l_223) = &p_47;

                    ;
                    return l_307;



                }
                else
                {
                    int *l_318 = &l_66;
                    for (l_256 = 0; (l_256 <= 2); l_256 = safe_add_func_int8_t_s_s(l_256, 5))
                    {
                        int *l_315 = &g_43;
                        (*l_223) = l_244;

                        ;
                        p_47 = p_47;
                        if (p_47)
                            break;
                        (*l_223) = l_315;

                        ;
                    }

                    ;
                    for (l_292 = 0; (l_292 < 19); l_292++)
                    {
                        l_318 = &p_47;

                        ;
                        (*l_223) = (void*)0;

                        ;
                    }

                    ;
                    ;
                    return l_243;



                }
            }
            else
            {
                int *l_319 = &g_6;
                (*l_223) = l_319;

                ;
                for (l_65 = 0; (l_65 == (-16)); l_65 = safe_sub_func_int8_t_s_s(l_65, 9))
                {
                    unsigned short *l_328 = &g_40;
                    unsigned *l_333 = &l_311;
                    unsigned char *l_334 = &g_158;
                    unsigned **l_336 = &l_244;
                    unsigned *l_339 = &g_289;
                    const int l_341 = 0xFC290DDEL;
                    (*l_223) = &p_47;

                    ;
                    (*l_274) = (safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(((~(safe_sub_func_uint16_t_u_u((p_47 > ((*l_334) = ((g_40 , (*g_260)) > (safe_mod_func_int8_t_s_s(((*l_245) = (safe_lshift_func_int16_t_s_u(((void*)0 == &g_158), (((*l_333) = ((0xEDL && (l_232 , g_161)) < 0x6AL)) == 0x16A64882L)))), 0x5BL))))), l_335))) > 0x8BEC59F2L), 0L)), (*l_319)));
                    (*l_274) = (p_47 = (((((l_336 == ((func_29(((*l_339) = (safe_lshift_func_int8_t_s_s((*g_260), p_47))), (*l_319), p_47) == g_40) , l_340)) > func_29((*l_220), p_47, (**g_264))) && l_341) >= p_47) , 0L));
                    (*l_223) = ((p_47 , (p_47 , (p_47 || l_341))) , &p_47);
                }

                ;
            }

            ;
            (*l_274) = (*l_274);
        }
        else
        {
            return (*g_131);


        }

        ;
    }

    ;
    return (*g_198);


}







static char func_54(int p_55, unsigned short p_56, int p_57, const int p_58)
{
    unsigned *l_78 = &g_76;
    int l_86 = 0x7A3B2FE4L;
    int *l_199 = &g_43;
    int * const l_205 = &g_88;
    int * const *l_204 = &l_205;
    int * const **l_203 = &l_204;
    short l_217 = 0xBAD1L;
    if ((l_78 == &g_76))
    {
        int *l_80 = &g_6;
        int **l_79 = &l_80;
        int *l_87 = &g_88;
        unsigned **l_89 = (void*)0;
        unsigned **l_90 = &l_78;
        unsigned *l_92 = &g_76;
        unsigned **l_91 = &l_92;
        unsigned short *l_94 = &g_40;
        unsigned short **l_93 = &l_94;
        unsigned short *l_95 = &g_42;
        char l_169 = 1L;
        (*l_79) = &g_6;
        if (((safe_lshift_func_int8_t_s_u((func_83(((*l_91) = (((*l_87) = l_86) , ((*l_90) = l_80))), (l_95 = ((*l_93) = &g_40))) , l_86), (**l_79))) & ((g_4 == (safe_sub_func_uint8_t_u_u((*l_80), 0x45L))) > (-1L))))
        {
            int *l_137 = &g_43;
            int **l_140 = &l_87;
            int *l_142 = &g_88;
            int **l_141 = &l_142;
            char l_154 = 0x7BL;
            unsigned short *l_156 = &g_42;
            unsigned char *l_157 = &g_158;
            short *l_159 = &g_126;
            (*l_137) = (l_86 = (p_55 = ((safe_rshift_func_uint8_t_u_s(0xCEL, 0)) <= ((void*)0 != &p_56))));
            (*g_160) = (safe_sub_func_int16_t_s_s((g_128 = ((+((((*l_140) = &g_88) == ((*l_141) = (void*)0)) , (((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(l_86, (safe_lshift_func_int16_t_s_u(((*l_159) = (((((g_40 <= (((*l_157) = (g_151 > (p_57 && ((*l_137) = (safe_mod_func_uint8_t_u_u((l_154 ^ (*l_137)), ((safe_unary_minus_func_uint16_t_u(((*l_156) = (*l_137)))) , (*l_137)))))))) != l_86)) , (-3L)) ^ g_88) == 0x3AL) , 0L)), 5)))), 7)), (*l_80))) != p_57) , (*l_137)))) & 0L)), g_4));

            ;
            for (g_42 = 0; (g_42 <= 5); g_42 = safe_add_func_int16_t_s_s(g_42, 8))
            {
                const short l_164 = 0L;
                (*l_137) = l_164;
                for (g_126 = 0; (g_126 <= (-22)); g_126 = safe_sub_func_int8_t_s_s(g_126, 9))
                {
                    l_169 = (safe_rshift_func_int16_t_s_u(l_86, 9));
                }
                (*l_137) = ((safe_sub_func_uint16_t_u_u(g_161, 0x64D0L)) <= func_29((((safe_rshift_func_uint16_t_u_s(p_58, 13)) >= (+((g_76 , (g_4 == (g_43 != (&p_57 != (*l_141))))) & 3UL))) <= g_151), g_6, p_55));
            }
        }
        else
        {
            int l_174 = (-10L);
            int l_175 = 0x6CF93A13L;
            int *l_191 = (void*)0;
            if ((((l_175 = ((-1L) & l_174)) , ((safe_sub_func_uint8_t_u_u(((p_58 ^ ((g_6 < g_43) == (l_175 , (((safe_add_func_int8_t_s_s(g_128, (p_57 == g_4))) || p_55) || (-1L))))) <= (-5L)), (*l_80))) >= g_161)) , 1L))
            {
                char l_187 = 2L;
                for (g_128 = 6; (g_128 >= 0); g_128--)
                {
                    const unsigned l_184 = 6UL;
                    unsigned *l_188 = &g_124;
                    p_55 = (safe_add_func_uint32_t_u_u(func_29(l_184, ((+(0xD7796E21L > ((*l_188) = (safe_mul_func_int8_t_s_s(l_187, g_151))))) ^ p_57), l_86), func_29(func_29(((!p_58) == 0x41B6L), l_175, p_55), l_175, g_161)));
                    for (g_43 = 20; (g_43 <= (-17)); g_43 = safe_sub_func_uint8_t_u_u(g_43, 7))
                    {
                        (*l_79) = (void*)0;

                        ;
                        if (l_174)
                            break;
                    }
                }

                ;
            }
            else
            {
                int *l_192 = &g_161;
                int **l_194 = &l_87;
                int ***l_193 = &l_194;
                (*l_79) = l_191;

                ;
                (*l_192) = 0x2AEEF225L;
                (*l_193) = (void*)0;

                ;
            }

            ;
            for (g_124 = (-24); (g_124 < 52); g_124++)
            {
                int *l_197 = &l_175;
                (*l_197) = p_57;
                (*g_198) = ((*l_79) = (*g_131));


            }


            l_199 = &p_55;

            ;
        }

        ;

        ;
        ;
        ;
        p_55 = (*g_132);
        return p_58;
    }
    else
    {
        int **l_200 = &g_132;
        (*l_200) = (*g_198);
        p_55 = p_56;
        (*l_200) = (void*)0;

        ;
    }

    ;
    (*l_199) = (safe_add_func_int16_t_s_s(0x624CL, (l_203 == ((&l_78 != &l_78) , g_206))));
    l_199 = &p_55;

    ;
    for (g_76 = 0; (g_76 != 36); g_76 = safe_add_func_uint16_t_u_u(g_76, 1))
    {
        unsigned l_215 = 4294967295UL;
        int *l_216 = &g_6;
        int **l_218 = &l_216;
        int **l_219 = &g_132;
        p_55 = (((0xF1L | (*l_199)) >= ((g_126 != ((p_55 && ((safe_lshift_func_uint8_t_u_u(((((((void*)0 != &g_132) >= ((((*l_199) > ((g_4 ^ (safe_sub_func_uint32_t_u_u(((p_56 , g_42) , 1UL), 4294967295UL))) > p_55)) ^ 0UL) ^ p_57)) , p_55) >= g_124) & l_215), 0)) & 0xA89EFA38L)) > p_56)) == p_55)) > 0L);
        l_216 = l_216;
        if (l_217)
            continue;
        (*l_219) = (l_199 = ((*l_218) = l_216));

        ;
        ;
    }

    ;
    ;
    return p_56;
}







static int func_83(unsigned * p_84, unsigned short * p_85)
{
    unsigned char l_102 = 0x94L;
    int l_109 = 0x67550B10L;
    char l_110 = 0x59L;
    int *l_111 = &g_43;
    unsigned char l_117 = 2UL;
    unsigned *l_123 = &g_124;
    short *l_125 = &g_126;
    short *l_127 = &g_128;
    unsigned l_129 = 0x8A2850EDL;
    char *l_130 = &l_110;
    if (((*l_111) = (safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(l_102, ((safe_mul_func_int8_t_s_s((l_102 , (0xEF148A9BL && (((((l_102 , 0xFAD62130L) >= ((l_102 > ((safe_add_func_uint16_t_u_u((((l_102 , (safe_rshift_func_int8_t_s_s(g_88, 2))) || (*p_85)) < l_102), l_102)) != (-1L))) && l_102)) > l_109) , 1UL) <= l_110))), l_109)) & l_102))), 0)), l_102))))
    {
        int **l_114 = (void*)0;
        int **l_115 = (void*)0;
        int **l_116 = &l_111;
        (*l_116) = l_111;
        l_117 = (g_43 | (*l_111));
        (*l_116) = (*l_116);
    }
    else
    {
        return (*l_111);
    }
    for (g_42 = 0; (g_42 == 52); g_42 = safe_add_func_uint16_t_u_u(g_42, 7))
    {
        int **l_120 = &l_111;
        (*l_120) = l_111;
        (**l_120) = (*l_111);
    }
    (*l_111) = (func_29(g_43, g_4, ((+(((*l_111) ^ ((*l_111) >= (*l_111))) < (func_29((*p_84), func_29((((+(((*p_85) = func_29(((((*l_130) = (((*p_85) = (((*l_123) = (g_88 , (safe_rshift_func_int16_t_s_u((*l_111), 0)))) , (((*l_127) = ((*l_125) = (*l_111))) <= l_129))) < g_88)) && g_42) , g_4), g_4, g_4)) <= g_42)) >= 2L) <= 0x066401EEL), (*l_111), (*l_111)), (*l_111)) , 0x43FBL))) , (*l_111))) <= 4294967286UL);
    (*g_131) = p_84;

    ;
    return g_76;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_361, "g_361", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_386, "g_386", print_hash_value);
    transparent_crc(g_562, "g_562", print_hash_value);
    transparent_crc(g_575, "g_575", print_hash_value);
    transparent_crc(g_608, "g_608", print_hash_value);
    transparent_crc(g_613, "g_613", print_hash_value);
    transparent_crc(g_615, "g_615", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
