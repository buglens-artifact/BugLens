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



static unsigned short g_13 = 7UL;
static char g_26 = 0x28L;
static unsigned short g_40 = 2UL;
static unsigned short *g_39 = &g_40;
static unsigned char g_83 = 0x5FL;
static short g_88 = 0xEE25L;
static int g_91 = 0x2F470B9CL;
static int *g_93 = &g_91;
static int ** volatile g_92 = &g_93;
static int g_98 = 7L;
static char g_106 = (-2L);
static int ** volatile g_120 = &g_93;
static long long g_142 = 0L;
static unsigned char g_148 = 0UL;
static int ** volatile g_156 = &g_93;
static const int *g_184 = (void*)0;
static long long g_197 = (-10L);
static int ** volatile g_258 = &g_93;
static int ** volatile g_260 = &g_93;
static int ** volatile g_263 = &g_93;
static int ** volatile g_266 = &g_93;
static int g_278 = (-10L);
static unsigned g_333 = 1UL;
static int g_334 = (-1L);
static char *g_336 = &g_106;
static char * volatile *g_335 = &g_336;
static unsigned long long g_354 = 18446744073709551615UL;
static int ** volatile g_402 = &g_93;
static volatile short g_438 = 0xF856L;
static volatile short * volatile g_437 = &g_438;
static volatile short * volatile *g_436 = &g_437;
static char *** volatile g_452 = (void*)0;
static int ** volatile g_477 = &g_93;
static int ** volatile g_480 = &g_93;
static long long g_492 = 1L;
static long long *g_533 = &g_197;
static long long **g_532 = &g_533;
static long long *** volatile g_531 = &g_532;
static int ** volatile g_536 = &g_93;
static int ** volatile g_539 = (void*)0;
static unsigned g_558 = 4UL;
static volatile unsigned char * const *g_636 = (void*)0;
static int g_680 = 0x9674D2A6L;
static unsigned g_689 = 4294967295UL;
static volatile unsigned g_696 = 0xD22C09C7L;
static int ** volatile g_711 = (void*)0;
static int ** volatile g_714 = &g_93;
static int ** const volatile g_718 = &g_93;
static int *g_722 = (void*)0;
static int ** const g_721 = &g_722;
static int ** volatile g_736 = (void*)0;
static int ** volatile g_738 = &g_93;
static int ** volatile g_750 = &g_93;
static int ** volatile g_777 = &g_93;
static int * volatile g_821 = &g_680;
static unsigned short g_851 = 0UL;
static short g_887 = 0xDDD8L;
static long long g_890 = 0xE15CDBCF73F3EF88LL;
static unsigned char g_920 = 255UL;
static int * volatile g_936 = &g_98;
static int ** volatile g_939 = &g_93;
static volatile char g_952 = 0x04L;
static int ** volatile g_974 = &g_93;
static const int ** volatile g_985 = &g_184;
static int g_1061 = 0xB66F4B07L;
static int ** volatile g_1097 = &g_93;
static unsigned long long *g_1105 = &g_354;
static unsigned long long **g_1104 = &g_1105;
static volatile unsigned char g_1128 = 247UL;
static int g_1160 = 0x0770A518L;



static int func_1(void);
static int func_4(unsigned short p_5, unsigned short p_6);
static unsigned short func_21(unsigned p_22, char p_23, unsigned p_24, unsigned short * p_25);
static unsigned short * func_27(unsigned char p_28, unsigned p_29, unsigned short p_30, const short p_31);
static unsigned char func_33(const unsigned p_34, unsigned short * p_35, char p_36, unsigned short * p_37);
static unsigned func_47(long long p_48, char p_49);
static int func_52(unsigned short * p_53, unsigned short * p_54);
static unsigned short * func_55(unsigned p_56, unsigned short * const p_57, unsigned p_58);
static unsigned long long func_66(int p_67);
static unsigned long long func_70(int p_71, unsigned p_72, unsigned short * p_73, unsigned char p_74);
static int func_1(void)
{
    const int l_11 = 0xDA622A14L;
    unsigned short *l_12 = &g_13;
    char l_18 = 0x08L;
    short *l_886 = &g_887;
    short *l_888 = (void*)0;
    short *l_889 = &g_88;
    int l_891 = 0x77D50613L;
    unsigned l_1159 = 18446744073709551607UL;
    unsigned short * const l_1162 = (void*)0;
    unsigned short * const *l_1161 = &l_1162;
    const int l_1163 = 0xF73B750AL;
    int *l_1164 = &g_98;
    g_1160 ^= (safe_mul_func_uint8_t_u_u((((((func_4((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((l_11 , (((((*l_12) |= l_11) <= (g_890 &= (+(~((safe_mod_func_int32_t_s_s(0xC87A7525L, (((*l_889) = ((*l_886) |= (safe_add_func_int16_t_s_s(l_18, (safe_rshift_func_uint16_t_u_s(func_21(g_26, g_26, g_26, func_27(l_11, l_11, l_11, l_11)), l_11)))))) && l_11))) & l_11))))) < l_18) , l_18)), l_891)), 0x02L)), l_18) , l_18) | l_18) | 0L) < l_18) , l_1159), g_1061));





    ;
    (*l_1164) ^= ((l_1161 = (void*)0) == (l_1163 , &g_39));

    ;
    return (*l_1164);
}







static int func_4(unsigned short p_5, unsigned short p_6)
{
    long long l_894 = 0L;
    unsigned short l_895 = 0xF56AL;
    int l_896 = 0x26521F5CL;
    unsigned l_902 = 9UL;
    unsigned l_908 = 1UL;
    const int * const l_940 = &l_896;
    unsigned char *l_971 = &g_83;
    int **l_1100 = &g_93;
    int ***l_1099 = &l_1100;
    long long ***l_1112 = &g_532;
    char **l_1154 = &g_336;
    char ***l_1153 = &l_1154;
    unsigned char l_1155 = 251UL;
    unsigned *l_1156 = (void*)0;
    unsigned *l_1157 = (void*)0;
    unsigned *l_1158 = &g_689;
    if ((safe_mul_func_int8_t_s_s((-8L), (((l_894 >= l_894) != (l_896 = func_70(l_895, l_895, &g_851, l_894))) && ((((*g_533) = (safe_mod_func_int16_t_s_s(l_896, (*g_437)))) || 0L) || 0UL)))))
    {
        long long **l_903 = (void*)0;
        int l_911 = 0x4ADE56F9L;
        unsigned l_925 = 0x13BA3C96L;
        unsigned l_1027 = 0xA04C89D3L;
        char l_1068 = 0x48L;
        if (p_5)
        {
            unsigned l_912 = 0UL;
            int * const l_938 = (void*)0;
            const int *l_941 = &l_911;
            unsigned short **l_997 = (void*)0;
            unsigned char l_1016 = 0x6AL;
            for (l_894 = (-10); (l_894 == 6); l_894++)
            {
                int *l_901 = (void*)0;
                long long **l_904 = &g_533;
                int *l_905 = &g_680;
                unsigned char *l_917 = &g_83;
                unsigned char *l_918 = &g_148;
                unsigned char *l_919 = &g_920;
                int l_926 = 0x910AFED2L;
                unsigned char l_937 = 0x14L;
                int * const l_959 = (void*)0;
                int * const *l_958 = &l_959;
                int * const **l_957 = &l_958;
                unsigned char l_967 = 0x3DL;
                (*l_905) |= ((((l_901 != l_901) < g_278) && l_902) > (l_903 != l_904));
                if ((p_5 && ((safe_div_func_uint16_t_u_u(p_6, (safe_div_func_uint64_t_u_u(g_334, (safe_rshift_func_uint8_t_u_s(((*l_919) = ((*l_918) = ((*l_917) = p_6))), ((g_890 , (safe_rshift_func_int8_t_s_u((safe_div_func_int16_t_s_s(((l_912 != 0x1CL) >= l_925), p_6)), l_926))) , p_5))))))) >= l_911)))
                {
                    int *l_933 = &g_91;
                    (*l_905) &= (safe_div_func_uint8_t_u_u(0xA8L, (safe_sub_func_int32_t_s_s(p_6, p_6))));
                    (*l_933) |= ((*l_905) |= (safe_lshift_func_int16_t_s_u((**g_436), 15)));
                }
                else
                {
                    for (l_912 = 0; (l_912 <= 45); l_912 = safe_add_func_int32_t_s_s(l_912, 8))
                    {
                        (*g_936) = ((*l_905) = p_6);
                        if (l_937)
                            continue;
                    }
                    l_896 = (l_912 ^ 0x22B9134C7D44414BLL);
                    (*g_939) = l_938;

                    ;
                    l_941 = l_940;

                    ;
                }
                if (((*l_905) = (safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_u((p_5 > (p_5 ^ ((g_952 || ((*l_941) && (((safe_sub_func_uint64_t_u_u((0x1B816F2E11D2CDECLL != (safe_rshift_func_uint8_t_u_u(((*g_437) && 0x7517L), 5))), 0x7A4B9490112CB70BLL)) & 0x23L) , p_6))) & 0x9CL))), (*l_940))) ^ (*g_533)), g_689)), p_5)) > g_680), 4294967295UL)) <= 0UL), 1))))
                {
                    unsigned short l_972 = 65527UL;
                    char l_999 = 0x7FL;
                    if ((*l_905))
                    {
                        short *l_960 = &g_887;
                        const int l_970 = 0x96E259F7L;
                        short *l_973 = &g_88;
                        (*l_905) &= (((*l_960) |= ((*l_940) , p_6)) != ((((*l_973) = (safe_add_func_int8_t_s_s(((l_972 , 0x319FBE80D9CDE553LL) , p_5), l_972))) == l_911) & 5UL));
                    }
                    else
                    {
                        int **l_975 = &l_905;
                        int ***l_976 = &l_975;
                        int * const *l_978 = &l_938;
                        int * const **l_977 = &l_978;
                        (*g_974) = &l_896;

                        ;
                        (*g_93) = ((((*l_976) = l_975) != ((*l_977) = &g_93)) , ((*g_821) = (safe_add_func_int8_t_s_s(((*g_336) = (g_98 || (((*g_336) | (18446744073709551615UL & ((**l_904) = (safe_add_func_uint16_t_u_u((((((safe_div_func_int16_t_s_s((((g_333 ^= l_972) , ((*l_940) <= (g_952 & g_689))) == g_689), p_6)) || (-1L)) != (**l_975)) && 0x87CDL) | l_925), l_972))))) >= 2UL))), (***l_977)))));

                        ;
                        (*g_985) = l_941;

                        ;
                        if ((**g_120))
                            continue;
                    }
                    for (p_5 = (-26); (p_5 == 60); p_5++)
                    {
                        unsigned short l_992 = 0x3367L;
                        unsigned short **l_998 = (void*)0;
                        int **l_1000 = (void*)0;
                        int **l_1001 = &g_93;
                        short *l_1008 = &g_887;
                        short *l_1015 = &g_88;
                        int *l_1017 = &l_911;
                        (*l_905) &= p_5;
                        (*l_1001) = (void*)0;

                        ;
                        (*l_905) &= (*g_936);
                        l_896 |= (safe_add_func_uint8_t_u_u(p_5, ((p_5 > (safe_div_func_int64_t_s_s(((!2L) && (((*g_336) = ((((safe_rshift_func_uint8_t_u_s(p_6, p_6)) && ((*l_1017) |= (l_925 | (((((*l_1008) = (-1L)) != ((safe_div_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((*l_905), ((safe_add_func_int16_t_s_s(((*l_1015) = p_5), (-1L))) , p_5))), p_5)) | l_1016)) , (void*)0) != (void*)0)))) , l_911) || p_6)) == 1UL)), 0xACDCE316027EDFE2LL))) , 2L)));
                    }
                }
                else
                {
                    int **l_1018 = &g_93;
                    (*l_1018) = l_959;

                    ;
                }
                (*l_905) |= ((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((((*l_919) = p_6) != l_911), ((((g_689 |= (safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(l_1027, p_6)), 0x6DB1200AL))) != p_5) & p_6) || p_5))), 1)) == g_438);
            }


            ;
            ;
        }
        else
        {
            int l_1030 = 0xF88C9311L;
            int l_1072 = 0L;
            unsigned short *l_1083 = (void*)0;
            short *l_1093 = &g_88;
            short **l_1092 = &l_1093;
            int *l_1098 = &l_896;
            unsigned long long *l_1102 = (void*)0;
            unsigned long long **l_1101 = &l_1102;
            unsigned long long **l_1106 = &l_1102;
            unsigned l_1107 = 6UL;
            if ((((l_1030 , l_1030) == (*g_336)) ^ l_911))
            {
                const long long *l_1033 = &g_890;
                const long long **l_1032 = &l_1033;
                const long long ***l_1031 = &l_1032;
                const long long l_1038 = 0x1FABBC84C0F65129LL;
                if (((void*)0 != l_1031))
                {
                    int l_1066 = 0xBC136A52L;
                    int *l_1067 = &l_896;
                    l_1030 = (safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u(l_1038, (safe_sub_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((p_6 > (safe_mod_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((6L == (safe_mod_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(((safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(l_1030, 3)), (safe_lshift_func_int16_t_s_s((((*l_1067) = (safe_sub_func_int64_t_s_s(g_1061, func_66(func_70((~(*l_940)), (g_851 , (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(((l_1066 = p_5) || ((0x1DL | 1UL) > l_1038)), 4)), g_40))), &l_895, p_5))))) && 0x247E1BF1L), 8)))), l_1038)) , p_5), p_6)) | l_1030), l_1068))), l_1030)) <= l_1038), l_1068))), l_1038)), 9L)))), g_197));

                    ;
                }
                else
                {
                    unsigned char l_1079 = 0x71L;
                    for (l_1030 = 8; (l_1030 == 12); l_1030 = safe_add_func_uint8_t_u_u(l_1030, 5))
                    {
                        unsigned long long l_1071 = 0x87C31D47CF4BD1D3LL;
                        unsigned short *l_1082 = &g_13;
                        int *l_1084 = &g_334;
                        short *l_1089 = &g_887;
                        int *l_1094 = &g_91;
                        l_1072 &= l_1071;
                        l_896 = ((0xBC96E29B2F83FB65LL < ((safe_div_func_uint32_t_u_u(((*l_940) == 0x41L), (l_1072 |= ((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(l_1079, l_1038)) & 0x6FC718653C980FDALL), 11)) | (*l_940))))) & (func_70(((*l_1084) &= (safe_div_func_uint32_t_u_u(p_5, g_83))), p_5, &g_851, g_696) & 0x98L))) < 1L);
                        (*l_1094) &= ((safe_rshift_func_int8_t_s_u(func_70(l_1038, (l_1030 || func_70((((*l_1089) |= (p_5 < (safe_add_func_int16_t_s_s(l_1071, (-1L))))) < l_1071), (safe_add_func_uint8_t_u_u(((*l_971) = (!l_1079)), (p_5 , (+((g_851 = ((*l_1082) ^= ((~(&g_437 == l_1092)) >= 5UL))) <= p_5))))), &g_40, p_5)), l_1089, l_1038), p_6)) , (*l_940));
                    }
                }
                (*g_1097) = ((safe_rshift_func_int8_t_s_s(func_66((*g_936)), (g_887 || ((*g_336) = 0xB7L)))) , &l_911);

                ;
            }
            else
            {
                l_1098 = &l_896;
            }


            if ((l_1099 != (void*)0))
            {
                unsigned long long ***l_1103 = &l_1101;
                (*l_1098) ^= (-9L);
                (*l_1098) = (((*l_1103) = l_1101) != (l_1106 = g_1104));

                ;
            }
            else
            {
                unsigned short **l_1114 = (void*)0;
                unsigned short ***l_1113 = &l_1114;
                int l_1115 = 1L;
                unsigned l_1132 = 0x05A3B34DL;
                l_911 |= p_6;
                (*l_1098) ^= (((((l_1107 <= ((safe_rshift_func_int16_t_s_s(p_6, (*g_437))) , (safe_rshift_func_uint16_t_u_u((0L && g_142), 15)))) != (((l_1112 == &g_532) != (((*l_1113) = &g_39) == (p_5 , &g_39))) > l_1115)) != (*g_336)) , 7UL) , 0x12B6CED6L);

                ;
                if (((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s((**g_335), ((safe_mul_func_int8_t_s_s((!((p_5 | (((safe_sub_func_uint32_t_u_u(((p_5 & 0xCCDE5E9786E2EDD4LL) == l_925), 0UL)) <= p_6) || 0xF4L)) && l_1132)), 0L)) != p_5))), p_5)) ^ (-1L)))
                {
                    if ((safe_add_func_uint32_t_u_u(0UL, (safe_rshift_func_uint16_t_u_s(p_5, (*g_437))))))
                    {
                        return l_1132;


                    }
                    else
                    {
                        return p_6;


                    }
                }
                else
                {
                    (*l_1100) = &l_1072;

                    ;
                }

                ;
            }


            ;
            (*l_1098) = ((void*)0 != l_903);
        }


        ;
        if (func_66(l_1068))
        {
            const char l_1139 = 1L;
            unsigned short **l_1140 = &g_39;
            unsigned char l_1141 = 0x88L;
            long long ***l_1142 = (void*)0;
            int l_1143 = 0x2525F166L;
            l_1143 = ((safe_rshift_func_uint8_t_u_s((l_1139 < ((*l_971) = (func_52(&g_851, ((*l_1140) = &l_895)) && (g_333 , ((l_1141 ^= (*g_39)) < ((void*)0 != l_1142)))))), (~((g_851 ^ l_925) | p_5)))) != l_911);

            ;
            ;
        }
        else
        {
            short *l_1144 = &g_88;
            (**l_1100) |= p_6;
            (**l_1100) &= ((((*l_1144) = (p_6 > (l_925 != p_5))) , (0xCE49E2DBL & (3UL != l_1027))) == p_6);
        }


        ;
    }
    else
    {
        return p_6;
    }


    ;

    l_896 &= (safe_lshift_func_int16_t_s_s(((***l_1099) & (((safe_div_func_uint32_t_u_u(((*l_1158) = (safe_div_func_uint32_t_u_u(6UL, func_70(((***l_1099) , p_6), ((void*)0 == l_1153), &l_895, (func_70(((void*)0 != &l_894), g_680, &g_40, l_1155) , 0xC7L))))), p_5)) , 0x31EAA5EEL) , 0L)), 1));
    return p_5;



}







static unsigned short func_21(unsigned p_22, char p_23, unsigned p_24, unsigned short * p_25)
{
    long long l_787 = 0xD6278321D2B17679LL;
    unsigned long long *l_788 = (void*)0;
    unsigned long long **l_789 = &l_788;
    const unsigned long long *l_790 = &g_354;
    unsigned short *l_797 = &g_40;
    short *l_798 = &g_88;
    int l_799 = 9L;
    int **l_808 = (void*)0;
    long long *l_811 = (void*)0;
    long long *l_812 = &l_787;
    unsigned long long l_823 = 0xE5045A56944E9261LL;
    char **l_832 = &g_336;
    unsigned short l_874 = 1UL;
    const unsigned l_875 = 0x0611CB74L;
    long long ***l_882 = &g_532;
    l_799 = (safe_add_func_int16_t_s_s(((*l_798) = ((safe_mul_func_uint8_t_u_u(p_22, (l_787 , ((*g_336) ^= 0xE3L)))) , func_70((((((*l_789) = l_788) == l_790) == (((safe_add_func_uint64_t_u_u(g_83, (safe_mod_func_uint64_t_u_u((safe_div_func_int16_t_s_s(func_66(p_24), ((func_70((p_23 , l_787), g_148, &g_40, g_142) >= (*g_533)) , l_787))), p_24)))) > (**g_335)) >= (*g_39))) , l_787), g_142, l_797, p_24))), g_148));

    ;
    if (((**g_536) = (safe_sub_func_uint8_t_u_u(p_23, (p_23 == (~(safe_lshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s(((*l_812) = (safe_rshift_func_uint16_t_u_u((((*g_533) &= ((void*)0 != l_808)) , ((safe_rshift_func_uint16_t_u_u(l_787, 10)) & g_438)), 8))), (4294967286UL ^ (&g_532 != &g_532)))), l_799))))))))
    {
        int **l_813 = &g_93;
        char ** const l_826 = &g_336;
        long long **l_831 = &l_811;
        int *l_852 = &g_278;
        short **l_857 = &l_798;
        (*l_813) = (*g_120);
        if ((safe_lshift_func_uint16_t_u_s(0x2DFFL, 5)))
        {
            int *l_818 = &g_98;
            int *l_820 = (void*)0;
            (*g_93) ^= (safe_lshift_func_int16_t_s_s((**g_436), 2));
            l_818 = ((*l_813) = &l_799);

            ;
            ;
            (*g_821) ^= (safe_unary_minus_func_uint64_t_u(((**l_813) = (**l_813))));
            (**g_480) = 0xE105008FL;
        }
        else
        {
            unsigned l_822 = 4294967288UL;
            unsigned *l_833 = &g_558;
            (*g_93) = ((l_822 && (l_823 != (((p_24 > (p_23 && (!(**l_813)))) , l_826) != (void*)0))) , p_23);
            (**l_813) |= (safe_mod_func_uint64_t_u_u((((p_23 || (safe_mul_func_int8_t_s_s((*g_336), l_822))) , l_831) != (void*)0), func_70(p_22, ((*l_833) = ((void*)0 != l_832)), &g_40, p_23)));
        }

        ;
        for (g_492 = 1; (g_492 >= (-26)); --g_492)
        {
            unsigned char l_836 = 3UL;
            unsigned short *l_850 = &g_851;
            int l_858 = (-10L);
            (**l_813) = ((l_836 & l_799) > (safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(((*l_850) ^= ((1UL <= (l_799 ^ ((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((((g_278 != p_22) , (l_836 == (safe_mod_func_uint64_t_u_u(((*g_39) , (safe_rshift_func_uint16_t_u_u((((+(safe_unary_minus_func_uint64_t_u((((l_787 | (*g_336)) >= 0xEAL) < (**l_813))))) != 0x54037D151268CF2ELL) != (**g_335)), 1))), 0x18942F11EDE35C37LL)))) >= 0x8DL), 0x0AL)), p_24)) <= l_787))) || 8UL)), 6L)), (**l_813))));
            l_858 = (((*g_721) = l_852) != (((l_823 , 0x57A732F2L) , func_70(func_66((**g_718)), (g_88 && func_70(l_823, (((safe_lshift_func_int8_t_s_s((p_23 = (safe_lshift_func_uint16_t_u_u((((func_70(((!0xE8A0397DL) || ((0x20564B6FA84AEBBBLL && 0x5FDD5F2B67EA167FLL) < g_142)), p_24, l_798, g_142) | 0x7AF0C4F7C43971DALL) , l_857) == g_436), (*g_39)))), (*g_336))) , (void*)0) == &g_333), p_25, g_558)), &g_851, g_558)) , l_852));

            ;
            ;
        }

        ;
    }
    else
    {
        long long ***l_872 = (void*)0;
        long long ****l_871 = &l_872;
        long long *****l_873 = &l_871;
        int l_876 = 1L;
        unsigned char *l_877 = &g_83;
        unsigned short **l_883 = &g_39;
        (*g_93) = (safe_mul_func_int8_t_s_s(l_876, 0x28L));
        l_799 = ((**g_120) = (safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((g_334 >= (p_24 , 0x4541A91DAA854A08LL)), func_70(l_876, (((**l_873) = l_882) != &g_532), ((*l_883) = &l_874), ((safe_div_func_int64_t_s_s(((void*)0 != g_636), 9L)) , g_558)))), (*g_821))));

        ;
        ;
    }

    ;
    ;
    ;
    return l_875;



}







static unsigned short * func_27(unsigned char p_28, unsigned p_29, unsigned short p_30, const short p_31)
{
    unsigned l_32 = 0x59EC1348L;
    unsigned short *l_38 = (void*)0;
    int * const l_707 = &g_680;
    int *l_712 = &g_98;
    long long l_757 = 0x90953721F9BE9EE4LL;
    int l_759 = (-1L);
    unsigned *l_764 = &g_558;
    unsigned ** const l_763 = &l_764;
    int l_776 = 0x3E4A9CC8L;
    if ((((l_32 & (l_32 ^ func_33((l_32 != (0x8E10A3BDF78B15B4LL == (!((p_28 <= (5UL ^ g_26)) , 0x457A23A34071E994LL)))), l_38, g_26, g_39))) && g_689) != 0L))
    {
        long long ***l_695 = &g_532;
        long long ****l_694 = &l_695;
        unsigned short * const l_700 = &g_40;
        unsigned short *l_701 = &g_40;
        int l_702 = 9L;
        unsigned long long l_749 = 0x122D42A1AB3800E4LL;
        (*g_93) = (safe_add_func_int8_t_s_s(((**g_335) ^= (safe_sub_func_int32_t_s_s((l_694 != &l_695), (0L ^ p_28)))), g_696));
        if ((safe_lshift_func_uint16_t_u_s(0UL, 13)))
        {
            int **l_699 = &g_93;
            int *l_703 = &g_680;
            unsigned char *l_706 = &g_83;
            unsigned char **l_705 = &l_706;
            unsigned char ***l_704 = &l_705;
            int **l_708 = &g_93;
            (*l_699) = (void*)0;

            ;
            (*l_703) &= l_702;
            (*l_704) = (void*)0;

            ;
            (*l_708) = l_707;

            ;
        }
        else
        {
            const int *l_724 = &g_278;
            const int **l_723 = &l_724;
            int *l_727 = (void*)0;
            for (g_334 = (-11); (g_334 >= 28); g_334++)
            {
                int * const l_717 = &g_680;
            }
            (*l_712) = (safe_div_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((*g_39), (p_29 , l_702))) != (*l_712)), p_31));
            (*g_750) = &l_702;

            ;
        }

        ;
    }
    else
    {
        int *l_758 = &g_98;
        int l_760 = (-1L);
        unsigned **l_765 = &l_764;
        const int l_768 = 4L;
        unsigned char **l_771 = (void*)0;
        unsigned char *l_772 = &g_83;
        unsigned char **l_773 = (void*)0;
        unsigned char *l_775 = &g_83;
        unsigned char **l_774 = &l_775;
        (*l_712) = (((safe_rshift_func_uint8_t_u_s((((l_760 = (((safe_sub_func_uint64_t_u_u((*l_707), 1L)) ^ p_31) && ((*g_39) |= (g_492 & ((safe_add_func_uint8_t_u_u(((*l_707) | (l_712 == (l_758 = (l_757 , l_758)))), p_29)) != l_759))))) , p_30) || 0xB6E0L), p_28)) , 0x9FBCC56B9A224184LL) < (*l_707));
        l_776 |= (safe_div_func_int32_t_s_s(((l_763 != l_765) > ((((*l_712) = (safe_sub_func_int16_t_s_s((0L == func_33(l_768, l_38, ((safe_rshift_func_int16_t_s_s((*l_758), p_30)) < ((l_772 = &p_28) == ((*l_774) = &g_83))), &g_40)), g_689))) , 0xA6L) <= p_31)), g_689));

        ;
        (*g_777) = (*g_480);
        for (g_197 = 0; (g_197 > (-13)); g_197--)
        {
            long long ***l_780 = &g_532;
            long long **l_782 = &g_533;
            long long ***l_781 = &l_782;
            (*l_781) = ((*l_780) = (void*)0);

            ;
            ;
        }


    }



    (*l_712) ^= ((*l_707) != p_31);
    return l_38;


}







static unsigned char func_33(const unsigned p_34, unsigned short * p_35, char p_36, unsigned short * p_37)
{
    short l_534 = (-1L);
    unsigned l_582 = 0x825EA8C4L;
    int * const l_644 = &g_98;
    char **l_681 = &g_336;
    for (p_36 = 0; (p_36 <= (-2)); p_36 = safe_sub_func_int8_t_s_s(p_36, 7))
    {
        const int l_543 = 0xC9201CDCL;
        int *l_550 = &g_278;
        int *l_552 = &g_278;
        unsigned short *l_563 = &g_40;
        short l_580 = (-4L);
        long long ***l_633 = (void*)0;
        unsigned l_638 = 0xE9DA915EL;
        unsigned l_652 = 0x21F61460L;
        int l_666 = 0x696FB7BCL;
        if ((((((safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((((+func_47(((*g_533) = ((((safe_lshift_func_int16_t_s_s(p_36, p_34)) == func_52(func_55(p_34, p_37, p_36), g_39)) > l_534) & l_534)), p_36)) != l_543) ^ l_534) > 0x1838A191L), 0xD315L)), 7UL)) == l_543) < p_36) == (-1L)) != l_543))
        {
            if (l_534)
                break;
        }
        else
        {
            int **l_544 = &g_93;
            long long **l_549 = &g_533;
            int *l_553 = &g_334;
            int ** const l_564 = &l_552;
            unsigned short *l_584 = &g_40;
            char **l_603 = &g_336;
            unsigned char l_687 = 0x7AL;
            (*g_93) = 0xC37674FBL;
            (*l_544) = (*g_120);
            for (g_278 = 0; (g_278 < (-6)); g_278 = safe_sub_func_uint32_t_u_u(g_278, 9))
            {
                int **l_551 = &l_550;
                long long ** const l_554 = &g_533;
                unsigned *l_557 = &g_558;
                int l_559 = 0x95FF3E53L;
                unsigned **l_560 = (void*)0;
                unsigned *l_562 = (void*)0;
                unsigned **l_561 = &l_562;
                int l_581 = 0xE707567DL;
                unsigned long long *l_595 = (void*)0;
                unsigned long long * const *l_594 = &l_595;
                int l_596 = 5L;
                unsigned short l_609 = 0UL;
                int l_671 = 5L;
                short *l_679 = &l_580;
                char ***l_682 = &l_681;
                int *l_688 = &l_559;
                (*g_93) = (safe_lshift_func_uint8_t_u_u(((l_549 != ((((*l_551) = l_550) == (l_553 = l_552)) , l_554)) < ((safe_add_func_int16_t_s_s((((*l_557) = l_543) >= ((func_70(((l_559 <= ((g_184 == ((*l_561) = l_552)) & func_70(g_40, p_34, p_37, g_26))) , p_34), l_543, l_563, p_36) , (void*)0) != l_564)), l_559)) , 0x29L)), 3));

                ;
                ;
                if (((**l_544) = (**g_156)))
                {
                    short l_565 = 0x20A1L;
                    int *l_566 = (void*)0;
                    int *l_567 = &l_559;
                    unsigned l_583 = 0x41CF9AAEL;
                    char *l_597 = &g_106;
                    unsigned char *l_620 = &g_83;
                    if (func_70((((l_565 & (+(((((*g_437) , p_36) != (((((*l_567) ^= (*g_93)) < p_34) & p_36) && g_334)) > (safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(0x3AL, (func_70((safe_add_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(g_26, l_580)), 7)) > (*g_93)), p_36)), l_581, &g_40, p_36) , (**l_544)))), p_36)), 0xF68CB761L))) & p_34))) , l_582) || (*g_336)), l_583, l_584, g_26))
                    {
                        (*l_567) = l_580;
                        (*l_544) = l_550;

                        ;
                        return p_36;
                    }
                    else
                    {
                        short l_589 = 9L;
                        (*l_544) = (*g_263);
                        l_589 = (safe_sub_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u(p_36, ((((func_70(l_559, (0xBC20602535A36000LL ^ (-1L)), (g_39 = l_563), l_543) >= p_36) , (p_34 ^ 0L)) & g_98) == g_333))) < 2L), 0xC3BAL));
                    }
                    for (g_142 = 25; (g_142 > 8); g_142--)
                    {
                        unsigned long long *l_593 = &g_354;
                        unsigned long long * const *l_592 = &l_593;
                        l_594 = l_592;

                        ;
                    }


                    if ((l_596 = (((**g_266) < (**l_544)) > p_34)))
                    {
                        (*l_567) |= l_582;
                    }
                    else
                    {
                        char **l_598 = &l_597;
                        int l_608 = 0L;
                        (*g_93) = (((*g_39) = l_582) != (((*l_598) = l_597) == (void*)0));
                        (*l_567) ^= ((((((*l_551) = (*l_564)) == ((safe_add_func_uint16_t_u_u((*g_39), ((safe_mul_func_int16_t_s_s(p_36, (l_603 != (void*)0))) && ((safe_mod_func_uint32_t_u_u((((p_36 != (safe_mul_func_int16_t_s_s((func_47(p_34, ((*l_597) ^= (((l_608 , (p_36 || (*g_533))) == g_148) | l_580))) | l_609), (*g_39)))) , p_34) && 0xF21546B4F29FB610LL), p_36)) <= (*g_39))))) , &l_596)) ^ g_334) > (*p_37)) , (**l_544));
                    }
                    if (((g_354 ^= ((((*g_39) = (*p_37)) < g_334) , (safe_mul_func_int16_t_s_s((g_88 = (g_558 , ((**g_335) != 0xB1L))), func_66(((*l_567) = (**g_266))))))) != ((safe_div_func_int64_t_s_s((l_582 == (safe_mul_func_uint8_t_u_u(((*l_620) ^= (safe_add_func_int16_t_s_s((safe_add_func_uint64_t_u_u((0xF5L >= g_148), p_36)), 1UL))), g_334))), l_534)) >= l_543)))
                    {
                        unsigned long long l_637 = 1UL;
                        (*l_567) = (((safe_sub_func_uint16_t_u_u(((*l_584) = func_47(p_36, ((safe_rshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(((**l_603) &= (safe_rshift_func_int16_t_s_u(func_70(p_36, p_36, p_35, g_354), 2))), (-4L))), l_638)) , p_36))), g_354)) == 0xCB0D71E8C822394BLL) != g_492);

                        ;
                        (*l_544) = (void*)0;

                        ;
                    }
                    else
                    {
                        unsigned long long l_643 = 0x107B1B19D7B9F8CBLL;
                        int **l_645 = &g_93;
                        (*l_544) = (*g_480);
                        (*l_645) = ((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(l_643, l_534)), 9)) , l_644);

                        ;
                    }

                    ;
                }
                else
                {
                    unsigned short **l_653 = (void*)0;
                    unsigned short **l_654 = &l_563;
                    long long ****l_657 = &l_633;
                    int *l_658 = &l_581;
                    (*l_544) = &l_559;

                    ;
                    (*l_658) &= (((*l_644) = (safe_div_func_int64_t_s_s((((*l_644) && 8UL) , ((**l_549) = (safe_lshift_func_uint16_t_u_s((*p_37), (((*l_657) = (((func_70(((safe_mod_func_uint32_t_u_u(p_34, l_652)) == g_142), g_278, ((*l_654) = &g_40), ((safe_add_func_int16_t_s_s(func_47(p_34, p_36), (*g_39))) ^ l_638)) | 1UL) | g_83) , (void*)0)) == &g_532))))), g_492))) || 0x9303491FL);

                    ;
                    for (l_581 = (-16); (l_581 < 15); l_581++)
                    {
                        long long l_663 = 0x568628D53836E7E6LL;
                        unsigned *l_678 = &l_582;
                        (*l_644) = (((*l_557) = (((p_37 = p_37) != (void*)0) < func_47((safe_mod_func_uint32_t_u_u(l_663, (*g_93))), (safe_mod_func_uint16_t_u_u((l_563 != &l_609), (func_70(l_666, g_148, (((safe_mod_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((**l_544) , l_671), 0x18L)), 0xADL)) , 0xA8E34C7AL) , p_35), l_596) & 65526UL)))))) <= 0xFE98FB27L);
                        g_680 |= (((safe_rshift_func_int8_t_s_s(p_34, 1)) & ((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((((*l_561) = l_678) != (p_34 , l_658)), ((*l_679) = func_47(l_596, (((p_34 <= g_334) , p_36) > (func_47((l_679 == (*g_436)), (**g_335)) < p_36)))))), g_558)) <= 0x14AD7364B51ABF02LL)) , (*l_644));

                        ;
                    }

                    ;
                }

                ;
                ;

                (*l_644) = (((*l_682) = l_681) != (void*)0);
                (*l_688) |= (l_543 != ((((g_98 > 18446744073709551615UL) , (safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(0x19L, func_66(p_36))), l_687))) > ((*g_533) , ((g_334 | 65535UL) < p_36))) , g_26));

                ;
            }

            ;
        }

        ;
    }
    return p_36;
}







static unsigned func_47(long long p_48, char p_49)
{
    char l_541 = 0x57L;
    int *l_542 = &g_98;
    if (p_49)
    {
        int *l_535 = &g_91;
        (*g_536) = l_535;

        ;
    }
    else
    {
        int **l_537 = (void*)0;
        int **l_538 = (void*)0;
        int *l_540 = &g_91;
        l_540 = (*g_402);


        (*l_540) = func_66(l_541);

        ;
        (*g_266) = l_542;

        ;
    }

    ;
    return p_49;
}







static int func_52(unsigned short * p_53, unsigned short * p_54)
{
    char l_255 = 0x72L;
    int *l_264 = &g_98;
    char *l_269 = &l_255;
    char **l_268 = &l_269;
    char **l_270 = (void*)0;
    char *l_272 = &g_106;
    char **l_271 = &l_272;
    unsigned l_281 = 0xA6C36F7EL;
    unsigned short *l_375 = (void*)0;
    short l_432 = 0x5683L;
    int l_468 = (-7L);
    long long *l_520 = &g_142;
    long long **l_519 = &l_520;
    if (l_255)
    {
        int *l_259 = &g_98;
        int **l_265 = (void*)0;
        for (l_255 = 0; (l_255 > (-28)); l_255 = safe_sub_func_int64_t_s_s(l_255, 5))
        {
            (*g_258) = (*g_120);
            (*g_260) = l_259;

            ;
            for (g_142 = (-6); (g_142 > (-21)); g_142 = safe_sub_func_int8_t_s_s(g_142, 6))
            {
                return (**g_92);
            }
        }
        (*g_263) = l_259;

        ;
        (*g_266) = l_264;
    }
    else
    {
        int **l_267 = &g_93;
        (*l_267) = (*g_266);
    }
    if ((((*l_268) = &l_255) == ((*l_271) = &g_106)))
    {
        const int l_273 = (-6L);
        unsigned short *l_280 = (void*)0;
        int l_305 = 1L;
        unsigned short *l_349 = &g_40;
        int l_359 = 1L;
        long long l_448 = 0L;
        short *l_486 = &l_432;
        short **l_485 = &l_486;
        unsigned long long *l_495 = &g_354;
        int *l_500 = &l_468;
        char ***l_518 = &l_268;
        if (l_273)
        {
            unsigned short l_276 = 0UL;
            int *l_277 = &g_278;
            int l_279 = 0x0B3DA9CEL;
            int l_358 = 0x9FBC4ABEL;
            short **l_409 = (void*)0;
            char **l_451 = &l_269;
            unsigned long long l_467 = 0UL;
            int *l_479 = &l_305;
            if ((((safe_div_func_uint8_t_u_u(func_66((l_276 , (l_273 < (-4L)))), 0xC0L)) , (func_70(((*l_277) = ((void*)0 != (*l_268))), (((((((*p_53) && func_70((l_279 ^= g_83), l_273, l_280, l_276)) != (*l_264)) , 4294967289UL) != g_83) != (-1L)) != g_26), &l_276, l_281) != 0x529B3CD3L)) , l_273))
            {
                int *l_290 = &g_91;
                for (g_40 = 16; (g_40 == 34); ++g_40)
                {
                    for (g_278 = 0; (g_278 < 0); g_278++)
                    {
                        int *l_286 = &l_279;
                        int **l_287 = &l_264;
                        (*l_287) = (l_286 = l_286);

                        ;
                    }
                    for (l_276 = 0; (l_276 == 53); ++l_276)
                    {
                        l_290 = l_290;
                        if ((**g_156))
                            continue;
                    }
                }

                ;
            }
            else
            {
                unsigned short l_311 = 9UL;
                int l_348 = 0xC4D2F787L;
                if ((l_277 != (void*)0))
                {
                    unsigned short l_299 = 6UL;
                    long long *l_312 = &g_197;
                    int **l_313 = &g_93;
                    for (g_91 = 24; (g_91 > 18); g_91 = safe_sub_func_uint16_t_u_u(g_91, 8))
                    {
                        long long *l_301 = &g_197;
                        long long **l_300 = &l_301;
                        int l_304 = 0L;
                        l_305 |= (65535UL | ((safe_add_func_int64_t_s_s(func_70(((safe_lshift_func_uint16_t_u_u((safe_div_func_int64_t_s_s(l_299, (*l_264))), 6)) , ((&g_142 == (g_98 , ((*l_300) = (void*)0))) , ((safe_add_func_uint32_t_u_u(g_197, 0xF4583700L)) & g_83))), (*l_264), p_53, l_304), 0x34EA4AFEE0E1254DLL)) <= 0UL));

                        ;
                    }
                    (*l_264) = (l_276 || (g_148 > (safe_unary_minus_func_uint16_t_u(((safe_mul_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((((*l_272) = g_88) || l_276), (((-5L) > (l_305 >= 255UL)) & l_311))) <= ((*l_312) = ((((0xA555L | g_40) == (-7L)) & 1UL) <= g_148))), l_279)) != l_273)))));
                    (*l_313) = l_264;

                    ;
                }
                else
                {
                    int l_316 = 0x16BD2D8DL;
                    char ***l_325 = &l_270;
                    int l_330 = 1L;
                    unsigned *l_331 = (void*)0;
                    unsigned *l_332 = &g_333;
                    int l_337 = 0xBAFC0776L;
                    unsigned long long *l_346 = (void*)0;
                    unsigned long long *l_347 = (void*)0;
                    (*g_93) = ((l_279 && ((*l_272) = (((*g_39) = (safe_sub_func_uint8_t_u_u(func_70(((*l_277) = l_279), (l_316 != l_273), ((((*l_264) = (safe_lshift_func_int8_t_s_u((!(safe_lshift_func_uint8_t_u_u(((((safe_rshift_func_int8_t_s_u(((-8L) < (0x95L >= (l_337 = (safe_mul_func_int8_t_s_s(((*g_336) = (((*l_325) = &l_272) == ((g_334 = ((*l_332) = (safe_mul_func_uint8_t_u_u((l_330 = ((safe_rshift_func_int8_t_s_s(((l_305 ^ ((*l_269) = (l_305 < 2L))) || (-6L)), l_305)) != 7UL)), g_197)))) , g_335))), 0x03L))))), l_276)) < 255UL) < 0x5DL) > l_311), 0))), l_311))) == l_276) , &l_311), l_311), l_279))) > l_279))) , l_305);

                    ;
                    if (((0x656AFC29L | (safe_lshift_func_uint8_t_u_s((0UL || ((safe_rshift_func_uint16_t_u_s(func_66((**g_263)), (((func_70(l_273, ((-8L) || (l_348 = (safe_lshift_func_uint8_t_u_u(g_106, (+(safe_lshift_func_uint8_t_u_u(((-2L) == func_70(g_142, g_278, p_53, g_40)), g_334))))))), l_349, l_330) || (*g_39)) > 0L) > g_334))) | l_311)), 2))) != 0xC60A11C9L))
                    {
                        int **l_350 = (void*)0;
                        int **l_351 = &l_264;
                        unsigned long long *l_352 = (void*)0;
                        unsigned long long *l_353 = &g_354;
                        long long *l_357 = &g_142;
                        (*l_351) = &l_279;

                        ;
                        l_358 ^= ((((((*g_336) , (+0x03B7EA7F8506E6F4LL)) && ((*l_353) = l_348)) <= (safe_sub_func_int16_t_s_s((func_66((**g_266)) | ((**g_335) == 1UL)), (((*l_357) ^= l_330) == (**l_351))))) || 0x27EF067A4A607F54LL) | (-1L));
                        (*g_93) = l_359;
                    }
                    else
                    {
                        unsigned l_374 = 18446744073709551615UL;
                        int *l_376 = &l_359;
                        (*l_376) ^= (safe_mod_func_uint64_t_u_u(func_66(l_358), (safe_div_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(254UL, 7)), (~((safe_add_func_uint16_t_u_u(l_337, (8L < (safe_sub_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(((-1L) >= (func_70(g_333, l_337, ((l_374 , l_305) , l_375), g_26) < l_273)), l_305)) == g_148), g_354))))) <= g_278))))));
                    }

                    ;
                }

                ;
                ;
                ;
            }

            ;
            ;
            ;
            for (g_142 = (-9); (g_142 < 1); ++g_142)
            {
                unsigned long long l_391 = 0UL;
                const unsigned l_398 = 0x66BCB5D3L;
                (*g_93) = (**g_263);
                (*g_93) = (safe_sub_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s((safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(l_391, l_391)) && (safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s((((**g_260) != ((255UL >= (l_279 &= ((func_70(((safe_add_func_int8_t_s_s(l_273, (*g_336))) , l_358), g_83, l_375, l_358) == (-7L)) | l_305))) != l_358)) , (-9L)), g_26)), 0xC64FL))), l_398)), g_91)), 0x076C985221F519DDLL)), l_273)) == l_398), 4294967295UL));
            }
            for (g_83 = (-16); (g_83 > 16); g_83++)
            {
                int * const l_401 = &g_91;
                unsigned char *l_425 = &g_148;
                unsigned char l_433 = 8UL;
                int l_476 = 6L;
            }
            (*g_480) = &l_468;

            ;
        }
        else
        {
            unsigned long long l_491 = 8UL;
            int l_493 = 0x2001FA2DL;
            int *l_494 = &l_468;
            (*l_494) |= (safe_mul_func_uint8_t_u_u(((l_273 , func_70(g_40, g_88, &g_40, ((((((0x91BEL || (g_492 = (l_485 == ((safe_div_func_uint64_t_u_u(((l_491 = (safe_mod_func_uint32_t_u_u(((void*)0 != &g_83), g_438))) , l_491), 7L)) , &g_437)))) >= l_493) <= 0x05L) & 4294967289UL) , (*l_264)) , 1UL))) , g_438), l_493));
        }

        ;

        ;
        (*l_500) = (((func_66(l_359) < ((*g_39) , (((*p_54) ^= (func_70(l_273, ((l_359 && (((*l_495) = 0UL) <= (safe_mod_func_int16_t_s_s((!((g_83 & (g_148 <= ((safe_rshift_func_int8_t_s_u((**g_335), 2)) < (*g_336)))) >= l_359)), g_334)))) || 6UL), &g_40, g_334) && (*g_336))) > 1UL))) , (**g_92)) != 0x7E49803CL);

        ;
        for (g_98 = 0; (g_98 != 8); g_98 = safe_add_func_int32_t_s_s(g_98, 8))
        {
            int *l_505 = &l_305;
            long long *l_508 = &l_448;
            int l_511 = 0x790BD5B5L;
            unsigned short *l_516 = (void*)0;
            unsigned short **l_517 = &l_280;
            int **l_521 = &l_264;
            l_511 = (safe_mul_func_uint8_t_u_u(((void*)0 != l_505), (safe_mul_func_int16_t_s_s((((*l_508) &= g_354) || (((*l_505) = (*g_93)) , (safe_mod_func_uint64_t_u_u(g_197, ((*l_505) || ((**g_258) = ((*p_54) , (*g_93)))))))), ((*p_54) || l_255)))));
            (*l_505) = (safe_mod_func_int64_t_s_s(0x3409328FAB7A7245LL, (safe_mod_func_uint64_t_u_u((l_516 != ((*l_517) = l_280)), (((((*g_437) , ((((((&p_53 != &g_39) & (((((func_70((g_334 & ((g_278 , (**g_92)) >= 0x5399B90EL)), (*l_500), l_375, g_88) && (**g_335)) , g_278) , l_518) == (void*)0) , g_40)) != 4294967287UL) , l_519) == &l_520) >= (*l_500))) <= (*p_53)) ^ 0x2380E81A899AB900LL) , g_40)))));
            (*l_521) = &l_511;

            ;
        }
        l_500 = (void*)0;

        ;
    }
    else
    {
        long long l_526 = 0xBB70BC05A1244F57LL;
        int *l_527 = &g_91;
        int **l_528 = (void*)0;
        int **l_529 = &l_264;
        int *l_530 = &l_468;
        (*l_529) = ((safe_rshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s((*l_264), (*l_264))) , l_526), (*l_264))) , l_527);

        ;
        (**l_529) = func_66((*l_264));

        ;
        (*l_530) |= (**g_266);
    }

    ;

    ;
    (*g_531) = &l_520;

    ;
    return l_255;


}







static unsigned short * func_55(unsigned p_56, unsigned short * const p_57, unsigned p_58)
{
    unsigned l_59 = 0x12AEAFD7L;
    unsigned l_79 = 0x863D476FL;
    int l_80 = 0x374484A8L;
    unsigned char *l_81 = (void*)0;
    unsigned char *l_82 = &g_83;
    unsigned short *l_84 = &g_40;
    short *l_86 = (void*)0;
    short *l_87 = &g_88;
    int *l_89 = &l_80;
    unsigned long long l_99 = 0x29C6149AF40839CALL;
    short l_198 = 0x95B5L;
    unsigned char l_217 = 9UL;
    const int *l_231 = &g_91;
    char l_240 = 0xC4L;
    if ((l_59 , ((((l_59 || (safe_rshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((g_40 > (0x5D1BL || (safe_add_func_uint64_t_u_u(func_66(((*l_89) = ((safe_lshift_func_int16_t_s_s(((*l_87) ^= (func_70((l_59 & (safe_rshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u((*g_39), (((l_80 = l_79) || ((*l_82) ^= 0xC8L)) , ((-9L) != 0x1DBDL)))), 4))), g_40, l_84, g_26) && p_56)), 2)) & (*p_57)))), l_99)))), l_79)), 7))) , (*g_39)) <= (*g_39)) >= l_59)))
    {
        char l_104 = 0L;
        char *l_105 = &g_106;
        const char l_129 = 0x6DL;
        short **l_130 = &l_87;
        if ((safe_lshift_func_uint16_t_u_s((((safe_rshift_func_uint16_t_u_u(((*l_84) = ((l_104 > ((*l_105) = (&g_88 == p_57))) ^ p_56)), 1)) == g_88) == (g_91 , ((safe_div_func_int32_t_s_s(((l_104 || p_58) >= 18446744073709551608UL), g_91)) && p_58))), 2)))
        {
            long long l_113 = 0xCD8FDA5E0CF2F289LL;
            int *l_118 = &g_98;
            for (g_106 = (-13); (g_106 != 7); g_106 = safe_add_func_uint32_t_u_u(g_106, 3))
            {
                int **l_121 = &l_89;
                for (l_80 = 0; (l_80 > (-18)); l_80 = safe_sub_func_uint8_t_u_u(l_80, 4))
                {
                    l_113 ^= (~func_66(((void*)0 == &g_26)));

                    ;
                    if ((safe_sub_func_uint8_t_u_u(p_56, (*l_89))))
                    {
                        int *l_116 = (void*)0;
                        int **l_117 = &g_93;
                        (*l_117) = l_116;

                        ;
                    }
                    else
                    {
                        int **l_119 = &l_118;
                        (*g_120) = ((*l_119) = l_118);

                        ;
                    }

                    ;
                }
                (*l_118) |= ((*l_89) = l_104);
                (*l_121) = &l_80;
            }

            ;
            (*l_118) = (*l_118);
        }
        else
        {
            (*l_89) |= (&g_88 == (void*)0);
        }

        ;
        (*l_89) = (((safe_rshift_func_int16_t_s_u(0L, 11)) || (safe_add_func_int8_t_s_s((((~(safe_unary_minus_func_uint8_t_u(l_104))) != ((*l_89) == p_56)) < (-8L)), (((void*)0 == &l_104) || l_129)))) <= (((*l_130) = &g_88) == (void*)0));
        (*l_89) = 0x6303C50BL;
    }
    else
    {
        const unsigned short l_143 = 65529UL;
        unsigned short *l_153 = &g_40;
        int *l_157 = &g_91;
        unsigned char *l_238 = (void*)0;
        long long l_245 = 0x95A9EE059EF32C18LL;
        (*l_89) ^= p_56;
        (*l_89) |= (**g_92);
        (*l_89) ^= (**g_120);
        for (g_98 = 23; (g_98 > 8); --g_98)
        {
            unsigned l_135 = 4UL;
            long long *l_140 = (void*)0;
            long long *l_141 = &g_142;
            const int *l_180 = (void*)0;
            unsigned short *l_181 = &g_40;
            unsigned char **l_239 = &l_82;
            unsigned long long *l_241 = (void*)0;
            unsigned long long *l_242 = &l_99;
        }
    }

    ;
    return &g_40;


}







static unsigned long long func_66(int p_67)
{
    int * const l_90 = &g_91;
    int **l_94 = &g_93;
    (*g_92) = l_90;

    ;
    (*l_94) = l_90;
    for (g_91 = (-21); (g_91 < 18); g_91 = safe_add_func_int16_t_s_s(g_91, 1))
    {
        int *l_97 = &g_98;
        (*l_97) = (**l_94);
    }
    return (**l_94);
}







static unsigned long long func_70(int p_71, unsigned p_72, unsigned short * p_73, unsigned char p_74)
{
    unsigned long long l_85 = 0xB686461D90BCC9DFLL;
    return l_85;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_438, "g_438", print_hash_value);
    transparent_crc(g_492, "g_492", print_hash_value);
    transparent_crc(g_558, "g_558", print_hash_value);
    transparent_crc(g_680, "g_680", print_hash_value);
    transparent_crc(g_689, "g_689", print_hash_value);
    transparent_crc(g_696, "g_696", print_hash_value);
    transparent_crc(g_851, "g_851", print_hash_value);
    transparent_crc(g_887, "g_887", print_hash_value);
    transparent_crc(g_890, "g_890", print_hash_value);
    transparent_crc(g_920, "g_920", print_hash_value);
    transparent_crc(g_952, "g_952", print_hash_value);
    transparent_crc(g_1061, "g_1061", print_hash_value);
    transparent_crc(g_1128, "g_1128", print_hash_value);
    transparent_crc(g_1160, "g_1160", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
