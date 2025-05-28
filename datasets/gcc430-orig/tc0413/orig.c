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



static const char g_7 = (-1L);
static unsigned g_43 = 18446744073709551611UL;
static volatile short g_77 = 0x602FL;
static unsigned g_81 = 18446744073709551615UL;
static short g_88 = 0x6139L;
static volatile unsigned g_89 = 0x27020778L;
static short g_106 = (-6L);
static long long g_107 = 0x34FE9DE5592ED994LL;
static int g_108 = 0x83B7C1F6L;
static char g_113 = 4L;
static char g_131 = 1L;
static int g_133 = 0L;
static unsigned long long g_147 = 1UL;
static int g_152 = 0xFE5A8EECL;
static unsigned char g_160 = 0xB8L;
static unsigned short g_192 = 65535UL;
static volatile short g_198 = 0x4DD1L;
static volatile char g_212 = 0x1BL;
static int g_213 = 0x77BBAC15L;
static volatile int g_217 = 0x6B8C764DL;
static unsigned g_218 = 0x699B59D0L;
static volatile unsigned long long g_221 = 6UL;
static unsigned long long g_230 = 18446744073709551612UL;
static volatile int g_272 = 0x95BAE7EBL;
static int g_274 = 0xBD303A7FL;
static int g_275 = 0L;
static short g_278 = 0x2BE6L;
static unsigned g_280 = 18446744073709551615UL;
static long long g_322 = 0L;
static long long g_342 = 0x2B981AEEA3C3AD9DLL;
static volatile int g_385 = 0x3DCF11F3L;
static volatile int g_387 = 0xA36B09E2L;
static volatile int g_388 = 0x35EB0D30L;
static volatile unsigned long long g_391 = 18446744073709551615UL;
static unsigned g_395 = 1UL;
static char g_430 = 0x17L;
static unsigned char g_465 = 255UL;
static int g_472 = 0x7E91F815L;
static volatile char g_473 = 4L;
static volatile unsigned g_474 = 0UL;
static volatile int g_663 = 0x4ED195E6L;
static char g_664 = 0x85L;
static volatile unsigned g_665 = 0x20897814L;
static short g_672 = 0x0F95L;
static unsigned short g_681 = 0x68B2L;
static volatile unsigned g_734 = 1UL;
static unsigned long long g_776 = 18446744073709551615UL;
static char g_798 = (-4L);
static int g_812 = 0xD66B085FL;
static long long g_828 = 0L;
static short g_860 = 1L;
static const volatile unsigned g_891 = 0x362264D4L;
static const unsigned g_895 = 4294967289UL;
static int g_948 = 3L;
static char g_1052 = 0L;
static short g_1065 = (-1L);
static char g_1074 = 0x5EL;
static volatile unsigned g_1179 = 4294967295UL;
static unsigned g_1197 = 6UL;
static long long g_1210 = 0xB58B720567CE0CF1LL;
static unsigned long long g_1211 = 18446744073709551614UL;
static short g_1216 = 0xBCC6L;
static char g_1240 = 0x4FL;
static volatile short g_1246 = 1L;
static unsigned long long g_1314 = 2UL;
static int g_1386 = 0x573070C8L;
static int g_1452 = 7L;
static unsigned g_1454 = 1UL;
static volatile int g_1458 = 3L;
static unsigned long long g_1459 = 0xB7AC2727B2EB51EBLL;
static short g_1464 = 0xE202L;
static unsigned char g_1600 = 0x8BL;
static volatile long long g_1606 = 0xF0AB07E6225C0866LL;
static volatile unsigned g_1608 = 0x9BDDFE3FL;
static unsigned short g_1628 = 0x6488L;
static unsigned g_1632 = 0UL;



static const int func_1(void);
static int func_2(unsigned short p_3, unsigned char p_4, int p_5, short p_6);
static const unsigned short func_10(unsigned short p_11);
static const char func_14(char p_15, unsigned char p_16, const long long p_17, unsigned p_18);
static char func_21(int p_22, const char p_23);
static unsigned long long func_25(short p_26, unsigned p_27, unsigned p_28, char p_29, unsigned p_30);
static unsigned short func_33(char p_34);
static const int func_48(int p_49);
static unsigned short func_56(int p_57, unsigned char p_58);
static short func_61(short p_62, int p_63, const short p_64);
static const int func_1(void)
{
    const unsigned long long l_24 = 1UL;
    short l_41 = 0xC6FEL;
    int l_42 = (-1L);
    unsigned short l_654 = 0x7556L;
    int l_683 = 0xEC5B8AD2L;
    short l_1096 = 0xD986L;
    long long l_1177 = 0x03BBC6D0E33C46D5LL;
    const unsigned long long l_1271 = 0xF89FC434D5006373LL;
    int l_1353 = 1L;
    short l_1388 = (-5L);
    int l_1446 = 0x944030B5L;
    unsigned char l_1561 = 0x0BL;
    int l_1580 = 1L;
    if (func_2((((g_7 <= (safe_sub_func_uint16_t_u_u(func_10((((safe_lshift_func_int8_t_s_s(func_14((safe_sub_func_uint64_t_u_u(((l_683 &= func_21(((l_24 && g_7) , (l_654 = (func_25((g_230 |= (safe_mul_func_int8_t_s_s(l_24, (func_33((g_43 = (l_42 = (g_7 < (safe_lshift_func_uint8_t_u_s((l_41 |= (safe_add_func_int16_t_s_s(0xB8CEL, ((safe_add_func_int64_t_s_s((g_7 , 0L), g_7)) , 1UL)))), 1)))))) ^ g_213)))), g_7, g_108, l_24, g_213) > 0xFC3FA4910D2A02A4LL))), l_24)) >= 0xC0L), l_24)), g_681, g_672, l_24), 4)) <= l_24) , l_24)), g_895))) ^ g_860) != g_664), g_828, g_664, g_948))
    {
        int l_1077 = (-5L);
        l_42 = func_25(((g_77 & ((g_828 != ((safe_add_func_int16_t_s_s(l_42, 0x53E0L)) < ((((g_278 &= 0x0595L) | ((-1L) == ((0x542612CB2E0615D2LL & l_654) > l_1077))) >= 18446744073709551615UL) , l_1077))) || l_41)) , l_42), l_654, g_664, l_1077, g_133);
    }
    else
    {
        unsigned long long l_1078 = 18446744073709551615UL;
        const unsigned l_1095 = 4UL;
        int l_1118 = 0xA3C59669L;
        int l_1272 = (-2L);
        unsigned long long l_1400 = 0x6B629C2166D9C78ALL;
        int l_1457 = 0x207B7BCAL;
        int l_1483 = 0x8D6E932CL;
        unsigned char l_1547 = 0x30L;
        unsigned long long l_1601 = 0xB8A065AC9D8F08DDLL;
        int l_1603 = 0x2B9C91D3L;
lbl_1422:
        l_1078 = (~0x7DA02B56L);
        for (g_213 = (-19); (g_213 > 20); g_213++)
        {
            unsigned short l_1089 = 65531UL;
            int l_1094 = 0L;
            int l_1097 = 6L;
            int l_1098 = (-1L);
            g_272 = (((func_61(g_1052, (safe_sub_func_uint8_t_u_u(func_48(((safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s((g_133 = (((g_472 = (((((((g_131 , 8UL) >= ((0x09CEL ^ ((g_473 >= (l_1089 = (safe_add_func_uint8_t_u_u(l_1078, (g_465 = g_1052))))) || ((g_681 = (((safe_add_func_uint16_t_u_u(l_1089, (l_1094 = ((safe_lshift_func_int8_t_s_s(0x4EL, 6)) > 0L)))) < g_664) >= l_1095)) & g_192))) , 0x43L)) , g_106) & l_1096) & g_160) , l_24) < l_42)) || g_147) != g_7)), l_1097)), 0x0595L)) , 0xBCC736F2L)), l_1098)), l_1095) > l_683) || g_274) , l_1096);
        }
        for (g_160 = 0; (g_160 != 56); ++g_160)
        {
            unsigned l_1112 = 1UL;
            unsigned l_1117 = 0xDE64543EL;
            int l_1144 = 0xD631761EL;
            unsigned l_1242 = 9UL;
            int l_1261 = 0xDD778DEBL;
            int l_1291 = (-6L);
            unsigned l_1474 = 18446744073709551615UL;
            if (g_387)
            {
                unsigned char l_1101 = 7UL;
                int l_1113 = 0x06C4F1FDL;
                int l_1116 = 0L;
                l_1101 |= g_272;
                if ((safe_add_func_int64_t_s_s((safe_div_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((((g_465 = func_48(((g_212 , (safe_sub_func_uint32_t_u_u(((g_218 = (l_1101 != (0xC70B68E2DD505416LL < func_21((safe_mul_func_uint16_t_u_u((l_1113 = (l_1112 = g_81)), (!(l_1116 ^= (safe_sub_func_int8_t_s_s(l_1101, func_10((g_192 ^= 0xA641L)))))))), g_113)))) & g_7), 0xC7476B6CL))) > 3UL))) > g_108) == g_278), l_1117)) ^ l_1117), l_1101)), l_1095)))
                {
                    long long l_1119 = 0x4CCED3AB5ED4C5B0LL;
                    long long l_1122 = 0L;
                    l_1118 = l_1116;
                    l_1118 = (func_56(l_683, (l_1119 < (safe_mod_func_uint32_t_u_u((l_24 & (func_61(g_217, l_1078, ((g_230 = g_948) > (g_342 == (l_1122 , (l_24 , 0x35L))))) , g_88)), 4294967295UL)))) , l_1118);
                    if (g_663)
                        continue;
                }
                else
                {
                    char l_1125 = 0x76L;
                    int l_1163 = 0x3290201FL;
                    char l_1178 = 0xF6L;
                    if (l_1101)
                    {
                        long long l_1143 = 1L;
                        l_1144 = (safe_mul_func_uint16_t_u_u(l_1101, ((l_1125 < func_56((~(g_160 | ((safe_sub_func_int16_t_s_s((((g_1052 == l_42) > (safe_mul_func_int8_t_s_s(func_48((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(l_1096, 3)) <= 0xB41E74032F87B27FLL), (safe_mod_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(l_1125, (safe_unary_minus_func_uint32_t_u((safe_sub_func_int32_t_s_s(l_1143, (-4L))))))), g_895)) , g_672), 0x82L))))), 7UL))) >= l_1078), g_160)) , l_1112))), g_664)) , 0x557DL)));
                    }
                    else
                    {
                        if (l_1125)
                            break;
                    }
                    if ((l_1113 = (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(l_1116, func_21(l_41, (0xE270C69F21FC4A23LL == (safe_rshift_func_int8_t_s_s((safe_div_func_int64_t_s_s((safe_mod_func_uint64_t_u_u((((safe_add_func_uint16_t_u_u((l_1163 = 0xD434L), ((l_1118 & (~(safe_mul_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((safe_sub_func_int64_t_s_s((safe_add_func_uint32_t_u_u(((safe_div_func_int16_t_s_s(((((safe_sub_func_uint32_t_u_u(g_395, g_212)) , l_1113) && (safe_unary_minus_func_uint16_t_u(l_41))) || 0xAC2884DF243D9458LL), g_342)) >= g_81), 4294967295UL)), l_1118)) != l_1101), l_1177)), l_1125)))) >= l_1125))) > 0xA0L) >= g_278), l_1178)), 5L)), 4)))))), g_895)), l_1118)) == l_1144), l_1078)) < l_1117), l_24))))
                    {
                        char l_1186 = 1L;
                        ++g_1179;
                        if (g_198)
                            continue;
                        g_472 = l_1095;
                        g_272 = func_21(((+(safe_div_func_uint64_t_u_u(func_10((safe_add_func_int8_t_s_s((g_430 = ((l_1186 >= (((g_812 , (((l_1101 & (l_41 >= (safe_rshift_func_uint8_t_u_s((+((safe_mod_func_uint8_t_u_u((--g_465), l_1186)) == (func_56((((safe_lshift_func_int16_t_s_s((l_1144 = l_1112), ((g_192 = 0xCF56L) ^ g_131))) >= (safe_lshift_func_int8_t_s_u(0x5CL, g_1197))) == 0xA8L), l_1101) >= g_1065))), g_108)))) && 0x97492901L) >= 252UL)) == g_77) , g_895)) == g_275)), l_1186))), l_1186))) <= l_1101), l_1112);
                    }
                    else
                    {
                        g_213 = (safe_sub_func_uint8_t_u_u(l_1116, ((g_1211 = (g_1210 = (safe_mod_func_int8_t_s_s((safe_div_func_int32_t_s_s((safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(g_663, g_798)), g_895)), (g_465 = 1UL))), g_192)), 0x74L)))) | (g_1216 = (safe_mul_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(l_1112, l_1096)), g_828))))));
                        return l_1112;
                    }
                    return g_664;
                }
            }
            else
            {
                unsigned l_1243 = 0UL;
                char l_1270 = (-1L);
                int l_1290 = 7L;
                for (g_860 = (-13); (g_860 < (-20)); g_860 = safe_sub_func_int8_t_s_s(g_860, 8))
                {
                    unsigned l_1221 = 0xCF2AE791L;
                    int l_1225 = 0x42A1F7EDL;
                    int l_1241 = 0xFFCFD80FL;
                    g_472 |= (safe_lshift_func_uint16_t_u_u((l_1221--), (((safe_unary_minus_func_uint16_t_u((l_1225 , (safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u(((safe_add_func_uint64_t_u_u((safe_add_func_int16_t_s_s(g_1197, (l_1241 ^= ((safe_rshift_func_uint16_t_u_u(((g_192 &= (l_1177 < ((((func_48(g_278) < l_1225) , ((g_1240 &= l_683) || l_24)) , g_212) , g_278))) | g_798), 12)) && g_322)))), g_280)) != g_1074), g_395)), l_1242)) < g_828), g_7)), l_1095))))) , l_1095) ^ l_1243)));
                    return g_113;
                }
                if ((safe_mod_func_int8_t_s_s((g_230 || g_395), 0x24L)))
                {
                    volatile unsigned l_1247 = 0xD9C0D1EFL;
                    l_1247 = (l_1243 , g_1246);
                }
                else
                {
                    char l_1248 = 0xFBL;
                    unsigned l_1266 = 4294967295UL;
                    unsigned short l_1273 = 0x3C83L;
                    g_133 = (l_1248 <= ((l_24 == ((safe_add_func_int16_t_s_s(func_21(l_1248, ((l_1078 != (g_798 >= l_1248)) == 0x965800AF335B48FDLL)), (-5L))) , 1UL)) , 0x0DL));
                    for (l_1144 = 0; (l_1144 == 16); l_1144 = safe_add_func_uint8_t_u_u(l_1144, 9))
                    {
                        unsigned long long l_1269 = 0xAC341F497C1AA5D3LL;
                        g_388 = (+l_1144);
                        if (l_1243)
                            break;
                        g_472 ^= (((l_1272 &= (l_1248 >= (safe_sub_func_int16_t_s_s(((((safe_mul_func_uint16_t_u_u((safe_div_func_int32_t_s_s((((safe_div_func_uint16_t_u_u(l_1243, (l_1261 ^= 0L))) <= (safe_div_func_int16_t_s_s(func_56((g_152 ^= (g_734 > (safe_mul_func_int8_t_s_s(l_1266, (safe_sub_func_int64_t_s_s((l_1118 = (g_1211 , (((g_113 = g_1074) >= g_322) , (l_1269 || g_108)))), g_1211)))))), g_147), l_1270))) == l_1271), 1UL)), 0x6DE3L)) , 0UL) , 0x6C43L) >= l_1248), g_395)))) & 0xE0L) >= g_322);
                    }
                    ++l_1273;
                }
                for (g_131 = 0; (g_131 <= 0); g_131++)
                {
                    unsigned short l_1292 = 0x89B8L;
                    int l_1313 = 0x32A43207L;
                    if (((func_10((safe_sub_func_int32_t_s_s((((g_828 = (l_1078 != (safe_mod_func_int64_t_s_s((safe_add_func_uint32_t_u_u((((l_1118 = g_107) || (safe_add_func_int8_t_s_s(func_21(((l_1272 = (func_21((safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(func_48(l_654), (g_395 >= 0UL))), 7)), (g_1074 = func_10((g_192 = (((l_654 == (0UL & 1UL)) || 18446744073709551610UL) & 0x3C7AL))))) & l_1117)) , g_81), g_664), 1L))) | g_895), l_1096)), g_275)))) >= l_1095) < g_1197), g_472))) < 1UL) < l_1117))
                    {
                        unsigned l_1306 = 18446744073709551609UL;
                        l_1292++;
                        g_472 = (((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(0L)), (safe_div_func_uint8_t_u_u(g_88, (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((++g_465), (func_56(l_1271, l_1306) != func_10((((safe_sub_func_uint32_t_u_u(l_1292, (safe_lshift_func_uint8_t_u_s((g_1314 = (((g_1052 = (~(l_1313 = (safe_mul_func_int16_t_s_s(l_1272, 0x2FCEL))))) > (((0xD34F8C9134E41E02LL >= l_1117) ^ 0x15L) , g_1246)) != l_1292)), 6)))) , l_1078) | g_7))))), 2)))))) == 1L) , g_385);
                        if (l_1290)
                            continue;
                    }
                    else
                    {
                        return l_1270;
                    }
                    for (g_278 = 0; (g_278 <= 26); g_278 = safe_add_func_uint16_t_u_u(g_278, 9))
                    {
                        char l_1333 = (-1L);
                        char l_1334 = 0x60L;
                        g_133 |= (safe_add_func_uint32_t_u_u(((l_1272 , ((safe_unary_minus_func_uint32_t_u(((l_1095 , (0xECB1L ^ l_1290)) < (safe_sub_func_uint16_t_u_u(((l_1272 = g_77) && g_472), g_7))))) | (l_683 = ((safe_unary_minus_func_int8_t_s(func_10(((safe_mul_func_int8_t_s_s((-3L), func_56(((safe_mul_func_uint8_t_u_u(func_56((l_1144 |= (safe_sub_func_uint16_t_u_u(g_107, 0x5C6DL))), g_1052), g_160)) || g_1210), g_860))) ^ l_1118)))) > g_275)))) , 1UL), g_230));
                        g_272 ^= ((l_1272 , ((!(~(safe_add_func_int32_t_s_s((l_1290 = (safe_div_func_int64_t_s_s((7L & ((l_1333 & (g_322 && (l_1334 < (0xADL | l_1292)))) == l_1291)), ((l_1292 , 0xC59AEA2AF098E462LL) , 0xA786F7560BE0221ALL)))), 0L)))) , g_280)) & l_1243);
                    }
                    for (l_1270 = 11; (l_1270 != (-29)); l_1270--)
                    {
                        g_472 = l_1118;
                        return g_391;
                    }
                }
            }
            if (func_61(((safe_mul_func_int16_t_s_s(l_1177, ((safe_lshift_func_uint8_t_u_u(((g_1314 |= (safe_mod_func_uint16_t_u_u(l_1272, g_387))) && ((l_1353 &= ((g_1197 ^ ((safe_rshift_func_uint16_t_u_u(g_275, (g_192++))) & (g_798 , ((g_828 = ((safe_sub_func_uint16_t_u_u(((!((safe_sub_func_uint8_t_u_u((g_465--), (((g_665 , 4294967287UL) || g_1314) & 0xA5B5L))) || 0xD9L)) , 0x8187L), g_152)) || g_388)) != l_683)))) & g_798)) < 0x3CF0DC136B1532A6LL)), g_776)) || 0L))) == l_1242), l_683, g_43))
            {
                int l_1376 = 0x7935D947L;
                int l_1418 = 0x77E02A1EL;
                unsigned long long l_1427 = 5UL;
                unsigned l_1430 = 0x674C4A1BL;
                char l_1453 = 0xA7L;
                unsigned l_1469 = 3UL;
                if (((safe_mul_func_uint8_t_u_u((g_1246 ^ (g_108 <= 0L)), (((safe_mod_func_int16_t_s_s(l_1144, ((safe_add_func_int8_t_s_s((((((safe_rshift_func_uint16_t_u_s(g_81, 10)) , (safe_mod_func_int64_t_s_s(l_41, l_1261))) >= (!(safe_add_func_int16_t_s_s(l_1118, ((safe_rshift_func_int16_t_s_s(g_1197, l_42)) , g_192))))) , g_107) != l_1112), g_147)) && l_1095))) | 5L) ^ 0x9358A73390FF4374LL))) != g_131))
                {
                    short l_1377 = 1L;
                    int l_1387 = 4L;
                    unsigned l_1389 = 0x58086632L;
                    for (g_1210 = 0; (g_1210 <= (-21)); g_1210--)
                    {
                        g_272 = ((safe_rshift_func_int16_t_s_s(((l_1078 <= func_56((safe_sub_func_int8_t_s_s(g_664, ((((~((-3L) | ((++g_681) >= ((l_1353 = 0xAEAA22D7L) , (0xE5F79F1A57486274LL | (safe_add_func_uint16_t_u_u(g_474, (g_472 <= g_7)))))))) > (safe_sub_func_uint8_t_u_u(func_10(((safe_lshift_func_int16_t_s_u(0x8B20L, 0)) || l_1377)), l_1078))) & 0x7B24L) ^ g_192))), l_1112)) & l_1376), 0)) || g_1386);
                        l_1389++;
                        g_272 = (l_1376 || ((safe_mod_func_int16_t_s_s(g_474, (safe_rshift_func_int16_t_s_s(func_56(((safe_div_func_int8_t_s_s((g_131 = (g_1052 &= g_133)), g_1314)) , g_681), (g_1240 >= l_1389)), ((safe_rshift_func_uint8_t_u_s(func_56(((~0x46L) || g_395), l_1376), 0)) , g_1074))))) , g_221));
                    }
                    ++l_1400;
                    g_388 |= g_1216;
                    g_472 ^= (safe_mul_func_uint8_t_u_u(g_1065, func_21(((safe_lshift_func_int8_t_s_s(l_1376, l_1376)) == (l_1389 ^ l_1377)), l_1389)));
                }
                else
                {
                    unsigned char l_1419 = 254UL;
                    l_1419 = (((safe_lshift_func_int16_t_s_s((safe_div_func_int64_t_s_s(0x60F87294F4231702LL, ((func_10((safe_unary_minus_func_int32_t_s(((((g_107 == (((((g_106 >= g_1179) && (((g_472 = (safe_lshift_func_int16_t_s_u((l_1272 = ((l_1376 = (safe_lshift_func_uint8_t_u_s(l_1242, ((safe_rshift_func_int8_t_s_s(g_1179, 6)) & g_681)))) , 0x2C26L)), g_1210))) & g_672) ^ 0xC5EC00CB2429F0FFLL)) > g_280) ^ 0x67L) , l_1144)) , g_665) <= (-8L)) , g_81)))) , g_860) , g_280))), 2)) >= (-8L)) == l_1418);
                    for (g_1211 = (-17); (g_1211 == 52); g_1211++)
                    {
                        g_133 = g_198;
                        if (g_1210)
                            goto lbl_1422;
                        if (g_218)
                            continue;
                        if (g_1197)
                            break;
                    }
                }
                if ((g_133 = ((l_1291 != ((g_275 = (safe_add_func_int64_t_s_s((5UL && l_1376), g_280))) , func_56((l_1427 || (g_218 = (l_1112 < (l_1430 = (g_77 , (g_1314++)))))), g_1211))) , 0xE9AF7108L)))
                {
                    const unsigned long long l_1435 = 0xD5AAC0706179EEA1LL;
                    int l_1451 = 1L;
                    if ((g_133 = g_213))
                    {
                        int l_1438 = 0xE5F557DDL;
                        g_472 = (((safe_div_func_uint32_t_u_u((g_160 & ((safe_add_func_int32_t_s_s(l_1112, l_1435)) && ((safe_sub_func_uint8_t_u_u(l_1438, g_160)) , (((safe_lshift_func_uint8_t_u_s(((g_474 | 0x6027L) , ((+l_1177) | 255UL)), 4)) < g_342) != 0xB1C4L)))), g_160)) || 7L) <= 0xB4L);
                    }
                    else
                    {
                        char l_1445 = 0xAEL;
                        int l_1450 = 0x2EF29464L;
                        g_472 ^= ((safe_mul_func_uint8_t_u_u(l_1435, (safe_rshift_func_int16_t_s_s((l_1445 <= (l_1400 != l_1446)), func_21((safe_unary_minus_func_int64_t_s(g_1179)), (((func_56((g_108 ^= 0x03CCCEF3L), (g_1216 , ((safe_div_func_int8_t_s_s(g_43, l_24)) || l_1376))) || l_654) , 0xC7L) , g_107)))))) > 0x1BL);
                        g_472 = (g_213 ^= g_212);
                        g_1454--;
                        l_1450 = l_1457;
                    }
                    --g_1459;
                    g_388 = (safe_mod_func_uint64_t_u_u(g_89, (func_56(g_107, (g_1464 &= (l_1453 == (g_465 = l_1427)))) , ((safe_mod_func_int64_t_s_s(((l_1457 && g_1210) , (l_1242 || l_1451)), g_395)) ^ g_1459))));
                }
                else
                {
                    for (g_798 = (-20); (g_798 == 24); ++g_798)
                    {
                        return g_385;
                    }
                    if (g_131)
                        break;
                }
                l_1469++;
                g_1452 = func_48(l_1418);
            }
            else
            {
                g_133 = (safe_sub_func_int16_t_s_s((l_42 , 9L), (l_1474 > ((l_1261 = ((safe_sub_func_int64_t_s_s(0xB2D5FDF7C9AA3DD7LL, 0x2F5E1B232115C200LL)) && g_388)) , l_654))));
                l_42 = l_1177;
            }
            g_272 = g_275;
        }
        if ((l_1483 = ((safe_sub_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u(g_213, l_1177)) && (safe_mod_func_uint8_t_u_u(g_192, (+l_1118)))), l_1400)) < g_385)))
        {
            unsigned short l_1488 = 1UL;
            int l_1493 = 1L;
            const unsigned l_1590 = 4294967293UL;
            int l_1607 = 0xF3C88872L;
            if (((g_1452 &= ((l_42 = (l_41 , (safe_mul_func_uint8_t_u_u(g_1052, g_221)))) ^ (safe_add_func_int8_t_s_s(l_1488, (safe_unary_minus_func_uint16_t_u((0x34L | (g_88 , ((((l_683 |= 0x06L) > (func_10(l_1488) > g_81)) , l_683) || g_1240))))))))) , 8L))
            {
                const long long l_1494 = 1L;
                for (l_1272 = 0; (l_1272 >= 7); ++l_1272)
                {
                    unsigned char l_1492 = 0xFDL;
                    l_1493 = l_1492;
                }
                g_1452 |= l_1494;
            }
            else
            {
                const unsigned l_1501 = 0x1B7780E6L;
                unsigned l_1510 = 0x56C97725L;
                int l_1511 = (-1L);
                short l_1589 = 6L;
                int l_1604 = (-3L);
                for (g_828 = 0; (g_828 <= 15); g_828++)
                {
                    unsigned long long l_1520 = 0xF4C116F98B3AF13BLL;
                    for (g_1240 = 0; (g_1240 < (-5)); g_1240 = safe_sub_func_int8_t_s_s(g_1240, 9))
                    {
                        const int l_1521 = 0L;
                        unsigned long long l_1522 = 0xBEC61FEC63E636ECLL;
                        g_1452 |= ((safe_sub_func_int64_t_s_s(l_1501, (safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(g_221, 0x24DEL)), (g_160 = g_1386))))) , 0xC6C8DFA2L);
                        g_1452 ^= (safe_mul_func_uint8_t_u_u(g_147, func_10((((l_1511 = (l_1510 = g_152)) && (l_1493 = (l_1457 <= (safe_mod_func_int8_t_s_s(((0x041D6F5AL | g_274) ^ (((safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(((l_1488 <= func_21((g_160 & ((safe_mul_func_uint16_t_u_u(((g_342 = l_1520) || func_21((g_213 = g_828), l_1521)), l_1522)) , g_395)), g_107)) == 0UL), g_812)), l_1520)) ^ 0L) , g_664)), l_683))))) && l_1353))));
                        l_1272 = ((safe_sub_func_uint64_t_u_u(l_1177, (safe_rshift_func_uint8_t_u_s((func_48(((safe_add_func_uint64_t_u_u(((func_10((safe_lshift_func_int16_t_s_u(l_1522, (g_681 = (safe_lshift_func_int8_t_s_s((g_113 |= g_385), 0)))))) , (safe_mod_func_uint32_t_u_u(((l_1547 = func_33((safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u(g_278, (((safe_sub_func_int16_t_s_s(g_275, l_1488)) ^ (((safe_mod_func_int16_t_s_s(g_665, (g_681 = (safe_add_func_int32_t_s_s((0UL ^ g_131), l_1520))))) , 2UL) != g_1210)) , l_1520))) || l_1446), g_147)), g_395)))) == 0UL), g_1065))) || l_1177), 1L)) , g_217)) || l_1400), 7)))) | 8UL);
                    }
                    if (g_948)
                        continue;
                }
                if (func_48(l_41))
                {
                    long long l_1554 = 0xFDC3B98685BDED8ELL;
                    int l_1578 = 0xEE324F54L;
                    int l_1579 = 0xDD413AECL;
                    int l_1605 = 0x45A0F97CL;
                    if ((g_1246 == (safe_rshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s(g_278, (func_10(l_1118) ^ func_56(g_948, (safe_lshift_func_int8_t_s_s((g_1052 = g_465), 5)))))), (l_1554 >= func_56((((-1L) || l_654) , l_654), g_1459))))))
                    {
                        l_1272 = ((-1L) & (0x6F56L < (((((l_1118 = 0x967AL) , (l_1488 & (safe_sub_func_uint32_t_u_u(func_48((safe_rshift_func_uint16_t_u_u((l_1493 = (((safe_mod_func_uint64_t_u_u(g_1211, l_41)) >= (l_1271 >= (l_1561 , l_1554))) >= l_1446)), l_683))), g_7)))) && l_1493) ^ l_1547) < l_1510)));
                        if (g_430)
                            goto lbl_1562;
lbl_1562:
                        l_1493 = g_395;
                        return l_1554;
                    }
                    else
                    {
                        unsigned long long l_1575 = 18446744073709551615UL;
                        l_1511 &= func_48((func_14(((safe_rshift_func_int16_t_s_u(0xBEDEL, 11)) | l_1554), (g_160 = (safe_rshift_func_uint8_t_u_u(0x87L, 1))), (safe_mul_func_int16_t_s_s(g_1065, (safe_lshift_func_int8_t_s_s(l_1554, 4)))), (((safe_add_func_int32_t_s_s((g_895 <= (safe_mul_func_int8_t_s_s(g_322, g_342))), 0x06B4946EL)) < 0x03E93C38C9A8D9D8LL) == l_1575)) != 0x8DL));
                    }
                    if ((safe_rshift_func_uint8_t_u_u(((((18446744073709551615UL | g_221) <= (g_192++)) | ((safe_mul_func_uint8_t_u_u(l_1579, 0x4FL)) < 0L)) & g_472), 7)))
                    {
                        unsigned long long l_1593 = 0UL;
                        int l_1602 = 0x270BCE05L;
                        l_1578 &= (((g_1211 = l_1511) , (g_218 = g_213)) ^ (func_61(((g_1459 , ((safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(g_230, func_61(func_48(l_1589), g_828, l_1590))), 0x8CBEL)) >= 0x2979L)) || 0x0DL), g_280, g_278) > g_43));
                        l_1602 = ((l_1578 = ((((safe_rshift_func_int8_t_s_s((((l_1353 = (func_14(l_1593, g_198, ((safe_div_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((((~(((l_1590 & ((safe_sub_func_int32_t_s_s(l_1096, g_948)) & (l_1593 && (-4L)))) & (((l_1590 ^ g_274) <= g_7) > 0L)) , g_278)) | g_218) || g_1600), g_1211)) & l_1601), g_798)) , 0xF838AA461EE52EE0LL), l_1511) ^ g_1240)) ^ g_7) != 6UL), l_1488)) > l_1593) | l_1593) <= 0x820AL)) , l_1493);
                    }
                    else
                    {
                        g_1608--;
                        g_1452 = ((safe_mod_func_uint64_t_u_u((safe_div_func_uint64_t_u_u((((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((g_465 = l_24), 3)), (g_106 = (l_1604 = 0x5DB0L)))) | g_798) | (g_860 |= g_388)), (g_213 & (safe_add_func_uint8_t_u_u(0x2DL, (l_1096 != l_1118)))))), 18446744073709551615UL)) , g_106);
                        l_1578 = g_106;
                    }
                }
                else
                {
                    l_1353 ^= 0x95FCA04AL;
                }
                l_1511 ^= 0L;
            }
        }
        else
        {
            unsigned l_1625 = 18446744073709551613UL;
            int l_1631 = 1L;
            g_388 = (g_472 = (safe_div_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((((l_1625 && ((safe_add_func_int8_t_s_s(g_1628, (safe_rshift_func_int8_t_s_s(l_1457, 3)))) >= 0x5F2921197DD13837LL)) >= func_33(l_654)) > g_664) > l_1457), (l_1078 | g_860))), l_1625)));
            l_1631 = 0x3BBEE659L;
            g_1632--;
        }
    }
    return g_106;
}







static int func_2(unsigned short p_3, unsigned char p_4, int p_5, short p_6)
{
    unsigned short l_1031 = 0xEF57L;
    int l_1064 = (-1L);
    int l_1066 = 0xF978458FL;
    unsigned l_1067 = 4294967290UL;
    for (g_828 = 0; (g_828 <= 22); g_828++)
    {
        char l_1029 = 0xDDL;
        int l_1030 = 0L;
        --l_1031;
        if (((1L ^ (safe_lshift_func_int8_t_s_u((-1L), 2))) < (g_106 || ((safe_div_func_uint8_t_u_u(l_1031, ((safe_div_func_int8_t_s_s((func_10((p_4 , (+(safe_sub_func_uint16_t_u_u((p_3 &= func_61(p_6, (safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(g_664, (g_860 |= p_5))), p_4)), g_465)), 0x2809L))))) ^ l_1030), (-6L))) && g_274))) , p_5))))
        {
            unsigned char l_1053 = 0UL;
            p_5 |= (((safe_mod_func_int16_t_s_s((safe_div_func_int64_t_s_s((safe_rshift_func_int8_t_s_s(p_3, g_1052)), p_3)), (l_1053 = l_1029))) <= ((g_133 , (((+p_3) == g_113) | l_1031)) & 0xD3AA81C0L)) == 0x9FEA830AE890193DLL);
        }
        else
        {
            short l_1054 = 0x105AL;
            g_213 = ((~((((func_48(p_4) | (g_131 = l_1054)) ^ p_4) | (((safe_lshift_func_int8_t_s_s(g_147, (safe_unary_minus_func_int64_t_s(l_1030)))) || g_798) && (safe_sub_func_uint32_t_u_u(p_6, 0x8D9FED6BL)))) && 8UL)) != l_1054);
        }
    }
    p_5 = (g_812 , (((safe_mul_func_uint8_t_u_u(((func_14((g_465 >= l_1031), p_3, g_77, (g_218++)) >= ((((++l_1067) == func_56((safe_mod_func_uint32_t_u_u(g_7, (safe_rshift_func_int16_t_s_s(func_56(((l_1066 = (l_1064 = (g_1074 = 0x85282A67E978D2CALL))) , l_1066), g_664), 7)))), g_895)) < g_1065) & 0xF0L)) && p_3), p_4)) == l_1031) ^ l_1031));
    l_1066 = (l_1064 = g_1052);
    return g_663;
}







static const unsigned short func_10(unsigned short p_11)
{
    const int l_1026 = 0xF35580B2L;
    g_213 |= p_11;
    return l_1026;
}







static const char func_14(char p_15, unsigned char p_16, const long long p_17, unsigned p_18)
{
    unsigned short l_685 = 0x5E81L;
    unsigned long long l_688 = 1UL;
    unsigned short l_693 = 1UL;
    int l_694 = (-1L);
    unsigned long long l_700 = 0x27EC888AE71177D1LL;
    unsigned char l_732 = 1UL;
    unsigned char l_850 = 0xF2L;
    long long l_855 = 1L;
    int l_877 = 2L;
    int l_974 = 0L;
    unsigned char l_1023 = 0UL;
    if ((((safe_unary_minus_func_uint8_t_u(p_17)) ^ (((0x52450DDE7017572ELL | l_685) , (p_18 , (safe_rshift_func_int16_t_s_s((l_688 , (safe_mul_func_uint16_t_u_u(g_275, (l_688 , (safe_mod_func_uint8_t_u_u(func_56((g_385 < (l_694 = (l_693 = (l_685 , l_685)))), g_107), 0xE6L)))))), g_322)))) , g_212)) ^ l_688))
    {
        short l_717 = 0x9E2BL;
        int l_718 = 0x1158C8A3L;
        int l_733 = 0L;
        const unsigned long long l_775 = 18446744073709551614UL;
        int l_777 = (-1L);
        const short l_835 = 0xD575L;
        const long long l_851 = 0xEDE130D22BFB94E4LL;
        unsigned char l_868 = 5UL;
        if (g_681)
        {
            const unsigned l_699 = 0xAD809C7FL;
            int l_750 = 5L;
            int l_769 = (-1L);
            unsigned l_861 = 18446744073709551615UL;
lbl_838:
            l_700 = (safe_sub_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(0x9ACDL, l_699)), 0xBF5D643F2763DE1ELL));
            if ((safe_mod_func_int32_t_s_s((func_25(g_7, p_17, (safe_add_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((g_342 ^ (((((safe_mul_func_uint8_t_u_u(0xFBL, (l_718 = ((safe_lshift_func_int8_t_s_s((func_56((g_274 = (p_16 , p_16)), (g_160 = (g_272 == (safe_lshift_func_uint8_t_u_u(((l_699 < g_472) , l_717), 3))))) ^ 0xB42CL), 2)) , (-1L))))) , 0x6C5F6E89759DFCCBLL) , 6UL) , 1L) , l_700)) ^ 0x6B88F64A4A42AF7ELL), 7)), 0xD3L)) | 0UL), l_694)), l_717, g_7) , g_395), 0x3E605667L)))
            {
                long long l_749 = 0x361D9B2E1CFE587BLL;
                int l_770 = 2L;
                unsigned long long l_791 = 1UL;
                unsigned char l_834 = 0x46L;
                for (g_43 = (-10); (g_43 == 50); g_43 = safe_add_func_int8_t_s_s(g_43, 2))
                {
                    unsigned long long l_723 = 0UL;
                    l_694 = (l_733 ^= ((g_108 ^= (safe_mod_func_int64_t_s_s((l_723 == (func_56((safe_sub_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((l_718 |= (safe_mul_func_int8_t_s_s((g_387 == (safe_sub_func_int16_t_s_s(l_685, (((g_465 ^ func_56((0xFC170148L <= p_18), l_732)) <= 18446744073709551615UL) != l_699)))), 8UL))), 0xDBL)) > p_17), 0xB8L)), p_18) , l_732)), p_16))) , 0xC41C6A03L));
                    --g_734;
                }
                g_133 = ((g_465 = (safe_mul_func_int8_t_s_s(p_15, ((g_152 == ((safe_lshift_func_uint8_t_u_u(((~(func_56(l_732, (safe_div_func_uint32_t_u_u(((g_322 = g_152) || ((((safe_mod_func_uint64_t_u_u((l_750 = ((p_16 , func_21((g_213 &= ((safe_add_func_uint64_t_u_u((l_732 ^ l_733), (safe_add_func_uint8_t_u_u((g_160 ^= l_749), (l_718 = 0xB6L))))) > 18446744073709551608UL)), l_749)) >= l_717)), p_16)) || g_152) | g_280) , g_221)), g_472))) > g_108)) <= g_280), 7)) , 0x9A730936381098B1LL)) > g_43)))) || l_749);
                if (((safe_div_func_int8_t_s_s((safe_add_func_uint32_t_u_u((l_733 > (((safe_mod_func_int16_t_s_s(8L, ((((p_18 , ((--p_18) == ((l_694 = (safe_mod_func_uint8_t_u_u(((l_769 &= func_33((((g_776 = (safe_sub_func_int64_t_s_s((0x5C7D3FA8L | ((safe_lshift_func_int8_t_s_u(func_25((l_750 |= g_77), (((safe_lshift_func_int8_t_s_s(((safe_div_func_int32_t_s_s(p_17, 0x0450D95DL)) != (++g_147)), 0)) ^ g_113) , (safe_lshift_func_int16_t_s_s((p_17 || l_775), 8))), p_16, g_113, l_717), g_672)) , g_672)), (-7L)))) && g_133) , 0x4EL))) >= g_681), p_15))) , 1L))) >= p_17) , l_749) , 0x717BL))) == g_681) , l_777)), g_681)), 0xE7L)) ^ p_15))
                {
                    return g_160;
                }
                else
                {
                    unsigned char l_778 = 255UL;
                    l_778--;
                    l_694 ^= func_61((g_672 = (safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(func_33(g_672), l_778)), ((l_770 != (safe_lshift_func_int16_t_s_s(func_56(((g_275 = (((g_681 &= (+(safe_div_func_uint32_t_u_u(((((safe_mul_func_uint8_t_u_u(p_16, g_430)) != l_791) > g_275) && (safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((((g_278 ^= ((safe_mul_func_uint8_t_u_u((l_718 = (g_430 >= 5UL)), p_18)) <= 4294967289UL)) <= l_733) >= l_791), p_15)), g_7))), p_18)))) & 65535UL) || g_672)) , g_430), p_16), 13))) || l_777)))), g_798, l_778);
                    if ((l_770 = ((safe_mul_func_int16_t_s_s(0x15D7L, (safe_add_func_int8_t_s_s((((6L == (func_25(p_16, (safe_unary_minus_func_uint64_t_u(l_750)), (safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(g_664, (g_798 = l_778))), g_218)), ((safe_div_func_int64_t_s_s(func_56((safe_add_func_uint16_t_u_u((g_812 < 1L), 0L)), g_133), 0x2E030C65D66C7B95LL)) , p_16), l_769) < l_778)) , p_17) <= g_812), 246UL)))) > 18446744073709551615UL)))
                    {
                        const unsigned short l_825 = 65535UL;
                        l_770 = (safe_mul_func_int8_t_s_s(func_33(g_43), (safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(g_681, 0x74AAL)), (((safe_lshift_func_int8_t_s_s(g_395, (safe_mul_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((l_718 = (g_280 , 0x28L)), l_825)) <= g_7), l_750)))) || p_16) == p_15)))));
                    }
                    else
                    {
                        long long l_829 = (-7L);
                        l_769 ^= ((func_33(p_15) > 0xF9F9L) ^ (p_17 && (func_56(g_798, p_16) & ((g_395 = func_56((safe_mul_func_int8_t_s_s((g_430 & (func_56((l_770 = g_828), l_749) <= p_15)), g_812)), l_829)) , g_322))));
                        l_770 = (!(0UL != (safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(65526UL, ((func_48(p_18) ^ l_778) || p_18))), l_834))));
                        return l_835;
                    }
                    for (g_192 = 15; (g_192 <= 56); g_192 = safe_add_func_uint16_t_u_u(g_192, 1))
                    {
                        char l_852 = 0xE7L;
                        if (g_107)
                            goto lbl_838;
                        l_770 = (l_778 <= (((safe_mod_func_int64_t_s_s(((safe_div_func_int32_t_s_s(((func_61(p_17, l_733, ((safe_add_func_int64_t_s_s(((safe_unary_minus_func_int64_t_s((p_16 <= g_342))) >= ((l_685 == (((l_694 &= (+p_17)) != 0x11L) , ((+(safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(((g_107 | l_850) ^ 0x20405CDCL), 4UL)), p_15))) , 0x0DEFB6F4A71E5F94LL))) , p_18)), p_18)) , l_851)) & g_131) , p_15), g_681)) < g_681), 0xCFB3D007D81B34B7LL)) && g_108) >= l_852));
                    }
                }
            }
            else
            {
                l_694 |= (g_89 , g_391);
            }
            g_213 &= (func_33(l_750) >= (((safe_rshift_func_uint16_t_u_s(l_769, l_855)) , ((p_16 | (safe_mod_func_uint8_t_u_u((g_465 |= g_664), (+((g_798 == (safe_sub_func_int8_t_s_s((l_718 ^= (func_56((((p_15 = (g_430 &= p_18)) , ((l_694 = 0x6D8DBD87A4CE3437LL) | g_860)) || l_769), l_861) ^ g_322)), l_769))) && g_280))))) > g_812)) | 0x0967B2B0L));
        }
        else
        {
            l_694 = (g_278 >= (safe_mod_func_uint64_t_u_u(l_685, g_89)));
            l_694 = ((g_275 & func_33(l_732)) != (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u((l_688 , g_7), 3)), l_694)));
        }
        l_868 = 7L;
        l_877 = (+((((g_218 == 0xD2L) ^ ((!((l_694 |= p_17) == (safe_mul_func_int8_t_s_s(0xAEL, (l_688 <= ((((safe_sub_func_uint64_t_u_u(((((((((~(safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((-1L), 8L)), ((g_131 >= ((255UL < 9L) ^ p_17)) >= p_15)))) , l_855) >= g_388) , 0xEFEEL) , l_718) == g_322) == 0x8D70L) && 0xF904L), p_15)) && 4UL) && 0xCB128BAC897FC717LL) == l_693)))))) , g_275)) , g_221) ^ p_18));
    }
    else
    {
        unsigned char l_934 = 1UL;
        int l_940 = 0x540315ADL;
        char l_963 = 0x64L;
        for (g_275 = 13; (g_275 < (-30)); --g_275)
        {
            char l_882 = 1L;
            const long long l_894 = 0x59A9922DFE6C2C89LL;
            char l_931 = 2L;
            int l_933 = 0xEDB7E927L;
            g_133 = (safe_mul_func_int64_t_s_s((l_882 ^= p_17), (0xC1L <= (0x7B87L == (safe_div_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(p_15, (((((safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(((g_218 ^ (func_61(p_18, (((g_891 && (safe_add_func_int8_t_s_s(p_15, 0xE7L))) ^ 18446744073709551610UL) != g_395), l_894) ^ p_18)) ^ g_895), l_894)), 0)) < p_16) >= g_160) && g_212) && p_16))) <= l_894), l_855))))));
            for (g_280 = 0; (g_280 == 37); g_280++)
            {
                char l_900 = 0x00L;
                for (g_160 = 0; (g_160 >= 53); ++g_160)
                {
                    int l_945 = 0x9FBB52CCL;
                    g_133 &= (p_15 , (((l_900 = 0xE357303DL) & 0x97E56052L) == ((g_664 , (p_16--)) > (safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((g_147 > (g_230++)), p_15)), g_776)))));
                    l_877 |= (g_278 > (safe_sub_func_uint8_t_u_u(l_894, 0x00L)));
                    if ((g_230 != g_663))
                    {
                        unsigned l_932 = 1UL;
                        l_933 ^= (((p_16 , g_147) >= (-2L)) || (p_17 > (safe_mul_func_int16_t_s_s((g_272 && ((safe_div_func_int64_t_s_s(g_113, (safe_add_func_uint16_t_u_u(((-1L) <= (safe_rshift_func_uint16_t_u_s(((((safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(func_56(((((((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u((func_61((((l_694 |= p_17) >= (safe_add_func_uint16_t_u_u((func_61((g_275 | p_15), l_931, g_665) , p_16), p_16))) , p_15), g_465, p_18) , g_681), g_113)), 5)) || 8L), 7)) && p_15) != 0L) || l_932) == p_17) ^ 0xF288694109C31683LL), p_17), g_108)), 8)) & g_828) > 0x1B76L) >= g_108), p_15))), g_230)))) == 0xEBL)), 0L))));
                        l_934 = l_900;
                        l_940 ^= ((safe_add_func_uint64_t_u_u(18446744073709551615UL, (safe_lshift_func_int8_t_s_u((safe_unary_minus_func_int8_t_s((+g_828))), 4)))) | g_217);
                        l_877 = ((safe_sub_func_int32_t_s_s(func_56((((g_272 == (safe_mod_func_uint8_t_u_u(func_56((l_945 , func_56((((func_56((g_108 = l_882), p_15) > (func_56(g_798, p_16) >= (safe_mul_func_int16_t_s_s(((((l_894 , g_274) , l_932) <= g_948) , g_274), p_17)))) || l_900) > 0x30D73B7EBF060A89LL), l_900)), l_693), 0x4CL))) != p_16) & l_693), l_900), g_681)) & g_275);
                    }
                    else
                    {
                        if (g_664)
                            break;
                    }
                }
                g_272 = (safe_rshift_func_uint8_t_u_s(l_940, 5));
            }
            if (p_17)
                break;
            if (((safe_add_func_uint8_t_u_u(((-5L) != (safe_mul_func_int16_t_s_s((-7L), ((safe_mul_func_int16_t_s_s((((safe_add_func_uint64_t_u_u(g_147, ((safe_rshift_func_int16_t_s_s((g_88 = (safe_mul_func_uint16_t_u_u(l_963, 7L))), 4)) || g_388))) || (safe_mod_func_int8_t_s_s(6L, ((safe_sub_func_int32_t_s_s(((l_940 = (l_933 = ((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((g_147 != g_798), 3)), 8)), g_278)) & g_77))) , 0xE585BFA9L), 1L)) | 0x711FL)))) || g_891), p_16)) >= 0x91D3L)))), l_974)) & l_934))
            {
                unsigned char l_979 = 9UL;
                int l_984 = 0x619E1C54L;
                for (g_776 = (-2); (g_776 < 6); g_776++)
                {
                    l_979 = (safe_lshift_func_int16_t_s_s(g_828, 11));
                }
                l_694 = p_18;
                l_933 = l_933;
                for (l_685 = 17; (l_685 >= 20); ++l_685)
                {
                    l_694 = (g_472 ^ (safe_lshift_func_int16_t_s_u((l_984 = l_934), 14)));
                }
            }
            else
            {
                g_133 |= func_61(p_18, l_963, (g_278 >= (safe_mod_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s(p_17)), 0x05AFL))));
                g_472 = (0x9A1F4B6AL || p_15);
            }
        }
    }
    if (p_16)
    {
        unsigned short l_1000 = 0xA0A3L;
        int l_1001 = (-5L);
        l_694 = (safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_u(((((((l_1000 &= ((safe_add_func_uint8_t_u_u((((g_664 != (safe_mul_func_int16_t_s_s(g_391, 0xB159L))) || (p_17 <= g_133)) , (g_278 ^ ((0x6A15D6CFL < (safe_mod_func_int16_t_s_s((safe_div_func_int32_t_s_s(((~0x45977923L) , (g_152 != g_77)), p_17)), p_15))) ^ g_465))), p_17)) , g_113)) != 0xE1D984AAL) || g_860) && p_17) ^ p_18) , 65535UL), g_274)) & l_1001), 2));
    }
    else
    {
        unsigned l_1002 = 0x8E74346AL;
        int l_1010 = 0x9BA59BFBL;
        int l_1022 = 0x2DFB2EEAL;
        --l_1002;
        for (l_693 = 0; (l_693 == 59); l_693 = safe_add_func_uint8_t_u_u(l_693, 6))
        {
            unsigned char l_1013 = 0xF7L;
            for (g_107 = (-29); (g_107 > (-22)); g_107 = safe_add_func_uint8_t_u_u(g_107, 6))
            {
                unsigned char l_1009 = 0x7AL;
                l_694 ^= (g_133 &= ((p_15 || l_1009) || g_948));
            }
            l_1010 ^= p_18;
            g_133 &= (+func_48(func_61(g_113, func_56((l_1010 = l_877), (safe_rshift_func_uint8_t_u_s((((g_472 < l_1013) >= ((l_1002 != l_1013) | (l_1022 = (g_192 < (safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s(p_16, (safe_mod_func_uint16_t_u_u(g_275, 0x83A7L)))), 65535UL)), g_89)))))) != 252UL), 3))), g_113)));
            l_1023--;
        }
    }
    return l_1023;
}







static char func_21(int p_22, const char p_23)
{
    char l_655 = (-1L);
    int l_656 = 1L;
    int l_657 = 0x0DA61DE3L;
    int l_658 = 0L;
    int l_659 = 0xA67A99ABL;
    int l_660 = 0xEEA9DE91L;
    int l_661 = 0x38E65F4AL;
    int l_662 = 0x38F67E2FL;
    unsigned l_680 = 0xEE177A95L;
    --g_665;
    for (g_430 = 0; (g_430 >= 4); ++g_430)
    {
        for (l_658 = 0; (l_658 >= (-22)); --l_658)
        {
            unsigned l_673 = 0UL;
            int l_682 = 0L;
            l_682 &= ((((l_673++) ^ (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((g_664 && l_680), 4)), 3))) , p_22) & func_56(g_681, l_660));
        }
    }
    return l_680;
}







static unsigned long long func_25(short p_26, unsigned p_27, unsigned p_28, char p_29, unsigned p_30)
{
    char l_246 = 0x4FL;
    unsigned short l_250 = 0xBF62L;
    int l_251 = 0x9C83895BL;
    long long l_341 = 0x4BA92695958FE576LL;
    char l_382 = 0xFEL;
    int l_384 = 0L;
    int l_390 = 0x0AFCFC30L;
    int l_514 = 0L;
    if ((safe_add_func_int16_t_s_s(0x0524L, p_27)))
    {
        long long l_252 = 0x99639025BF7B98E7LL;
        int l_273 = 6L;
        int l_455 = (-7L);
        const unsigned short l_468 = 0xD6E9L;
        for (g_152 = 0; (g_152 < (-23)); g_152 = safe_sub_func_int32_t_s_s(g_152, 9))
        {
            unsigned l_239 = 0xF47762CDL;
            int l_269 = (-2L);
            int l_270 = 0xE1A12AFEL;
            int l_343 = (-3L);
            unsigned l_432 = 0x8078A078L;
            short l_469 = 0L;
            for (g_133 = (-1); (g_133 > (-11)); g_133 = safe_sub_func_int32_t_s_s(g_133, 8))
            {
                long long l_259 = 4L;
                int l_268 = 0x527156C7L;
                int l_276 = 0x25306425L;
                char l_298 = 3L;
                if ((g_213 = (0x99L != (!(p_27 && l_239)))))
                {
                    unsigned short l_244 = 0x2AD4L;
                    int l_245 = 0xF7328926L;
                    int l_271 = 0L;
                    int l_279 = (-1L);
                    for (p_28 = 10; (p_28 != 20); p_28++)
                    {
                        l_245 ^= (safe_rshift_func_uint16_t_u_s(l_244, 8));
                    }
                    if (g_131)
                    {
                        unsigned short l_249 = 0x6332L;
                        l_246 = l_239;
                        l_249 = (g_213 = (safe_sub_func_uint8_t_u_u(g_81, p_28)));
                    }
                    else
                    {
                        l_250 = p_27;
                    }
                    if (p_27)
                    {
                        l_251 = 0x6F81079EL;
                        if (l_252)
                            break;
                        return p_27;
                    }
                    else
                    {
                        g_213 = p_26;
                        l_245 = g_43;
                        l_270 &= (safe_lshift_func_uint8_t_u_s((((safe_lshift_func_uint8_t_u_u((l_246 <= (safe_add_func_int64_t_s_s((l_259 = p_29), ((safe_mul_func_int8_t_s_s(((l_269 = (g_160 ^= func_48((safe_rshift_func_uint8_t_u_s(((((((safe_div_func_int32_t_s_s(((safe_mul_func_int16_t_s_s(p_30, ((0L | ((p_26 &= g_212) , func_48(l_244))) >= p_27))) , 0L), 4294967295UL)) , l_268) < l_268) <= l_268) < l_252) , 3UL), 5))))) < l_250), 255UL)) < 0xF02EEB52L)))), 3)) , p_29) && 2UL), g_108));
                        g_213 = g_106;
                    }
                    if ((l_268 = p_29))
                    {
                        int l_277 = 0xC67EB79DL;
                        ++g_280;
                    }
                    else
                    {
                        const short l_291 = 0xBEABL;
                        l_251 = (safe_add_func_int16_t_s_s(g_113, g_272));
                        if (p_26)
                            break;
                        l_269 = ((safe_rshift_func_uint8_t_u_u(((!(p_27 != 0xC1L)) ^ (0x7672F530L < l_269)), 2)) , (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(g_198, 11)), (l_291 | (func_56(g_160, (safe_add_func_uint64_t_u_u(g_107, p_28))) | 0xA0L)))));
                    }
                }
                else
                {
                    long long l_307 = 8L;
                    if ((4294967295UL < g_133))
                    {
                        unsigned char l_306 = 4UL;
                        l_276 = (safe_add_func_uint32_t_u_u((g_88 > g_221), (p_29 != ((0x3CD100AB29EDB272LL != (safe_add_func_uint8_t_u_u((g_88 , ((func_56(l_298, (((safe_add_func_int64_t_s_s(func_56((safe_unary_minus_func_uint32_t_u(((0L != (g_106 ^= (l_273 |= (p_26 = ((safe_rshift_func_int16_t_s_s(((func_56(g_278, ((safe_div_func_uint64_t_u_u((p_30 & 0xA97A0B3854730C7DLL), p_26)) != l_270)) >= 65535UL) ^ p_30), 9)) != p_29))))) > 0x5E1E1634L))), p_27), p_28)) ^ l_306) >= g_131)) >= p_27) | 0x18D9L)), p_27))) , l_307))));
                        l_270 ^= (safe_lshift_func_int16_t_s_u(((safe_div_func_uint8_t_u_u(l_250, (safe_add_func_uint64_t_u_u(0xACF91862B91AFFA9LL, (g_274 , ((((0xDB85L >= (safe_sub_func_uint64_t_u_u(l_273, (g_322 = ((((func_61(l_273, (g_106 == (safe_sub_func_uint64_t_u_u((g_147 = (safe_rshift_func_uint8_t_u_s((g_160 = p_26), 1))), (~(safe_sub_func_uint64_t_u_u(0xB3AE07F9E03FE52CLL, l_239)))))), l_307) , 0xA7C43D89DC9810B7LL) != p_27) ^ g_131) || g_113))))) < g_192) ^ p_30) | 0x53D7A3F9L)))))) < 18446744073709551615UL), g_192));
                    }
                    else
                    {
                        g_272 ^= 0x959E13DEL;
                    }
                    if (l_246)
                        continue;
                    g_213 = 0x598AF31AL;
                    g_342 ^= ((g_213 = (((((safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((l_273 = (safe_sub_func_int64_t_s_s(p_28, (l_269 & (((l_307 ^ (safe_mul_func_int16_t_s_s((4UL > (safe_lshift_func_int16_t_s_u(((safe_div_func_int16_t_s_s((p_26 = p_26), ((safe_rshift_func_int8_t_s_u(((safe_div_func_int16_t_s_s((g_88 ^= (safe_div_func_uint32_t_u_u((g_218 = (5UL ^ l_252)), (6L && l_250)))), p_30)) , l_246), 4)) & 1UL))) > 0UL), p_30))), g_108))) , g_7) != 0x00CADEF5C6319326LL))))), l_270)), l_276)) & p_28) , l_341) ^ l_307) <= g_217)) && g_272);
                }
                l_273 = g_217;
                return l_273;
            }
            l_273 = (g_213 = ((l_343 >= 0xC34DL) || (safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((-1L), (p_29 = 7L))), (g_88 , ((safe_mod_func_uint8_t_u_u(((-8L) > l_252), g_113)) , l_273))))));
            l_273 = ((+l_341) , g_198);
            if ((safe_add_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(p_27, (p_28 != p_27))) & func_48(g_192)), (l_250 > (((safe_add_func_int64_t_s_s(l_273, (safe_rshift_func_int16_t_s_u((g_278 = (safe_rshift_func_uint16_t_u_s(l_252, g_192))), 14)))) & g_218) || p_30)))))
            {
                unsigned short l_367 = 1UL;
                unsigned long long l_371 = 0UL;
                unsigned char l_383 = 0x4AL;
                int l_389 = 0x35714B23L;
                int l_394 = (-1L);
                unsigned long long l_450 = 0x800D1BDF202DA095LL;
                for (p_29 = (-11); (p_29 <= (-30)); --p_29)
                {
                    long long l_366 = 0x5053D333267E44FFLL;
                    int l_386 = 0L;
                    for (g_230 = 0; (g_230 <= 47); ++g_230)
                    {
                        l_343 = (safe_rshift_func_uint16_t_u_u(0x4C70L, 4));
                        l_367 = (l_366 |= ((p_27 > (-1L)) & 0L));
                        g_133 = g_221;
                        if (p_26)
                            break;
                    }
                    if (g_77)
                    {
                        char l_370 = 0L;
                        l_273 ^= ((+((safe_lshift_func_uint8_t_u_u(l_370, 0)) ^ (((l_371 >= (((g_7 >= l_250) >= (g_280 <= (((safe_rshift_func_uint8_t_u_u((((func_56((safe_lshift_func_int8_t_s_u((0x87L <= ((safe_div_func_uint8_t_u_u(254UL, (safe_sub_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u(((((g_43 , 0xAAL) > 0L) , p_30) <= l_239), 0xA3L)) || g_213), l_382)))) | 0x9246L)), g_221)), g_278) != g_275) , 0xFD33L) || 1L), p_26)) , 0xAEL) , g_106))) , 4UL)) < p_29) && g_342))) , l_383);
                        --g_391;
                    }
                    else
                    {
                        l_384 = func_48(p_30);
                        g_395++;
                        l_386 = g_278;
                    }
                    for (l_246 = 9; (l_246 < (-25)); l_246--)
                    {
                        unsigned short l_419 = 0x7006L;
                        int l_431 = 0x1734DF60L;
                        l_384 = (safe_lshift_func_int16_t_s_s(((safe_div_func_int8_t_s_s((g_113 ^= (l_366 == ((((safe_mod_func_int32_t_s_s(((safe_sub_func_uint64_t_u_u((safe_add_func_int64_t_s_s((((safe_add_func_uint32_t_u_u(l_251, ((safe_unary_minus_func_uint32_t_u(((((safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((((g_107 == func_56(((l_419 = (g_221 != 0xE4L)) < (l_386 ^ ((safe_add_func_int8_t_s_s((func_56(g_192, (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(func_56((((((l_269 = ((l_270 = func_56((l_389 &= (safe_mul_func_int8_t_s_s((l_343 = (safe_rshift_func_uint16_t_u_s(p_29, 7))), l_270))), p_28)) != l_390)) && p_28) >= 0L) > p_26) > 0xF7898A18L), p_27), l_252)), p_27))) | p_28), l_371)) > 0L))), g_43)) < 249UL) , p_30), p_27)), l_371)), 0L)) , p_26) || g_133) | 1L))) == 65535UL))) != g_430) ^ g_322), 0x706784F3FD6F96F3LL)), l_431)) ^ p_29), g_43)) >= l_371) <= g_108) <= g_152))), g_88)) < 0xDBF9F70BE9A3CA29LL), 12));
                        return p_30;
                    }
                    if (l_432)
                        break;
                }
                l_273 = g_217;
                l_251 = g_198;
                for (g_218 = 0; (g_218 >= 36); ++g_218)
                {
                    unsigned char l_443 = 249UL;
                    g_213 = (safe_mul_func_uint8_t_u_u(func_61(g_217, (g_108 = ((func_56((l_252 , (safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((l_389 = ((g_81 >= (0L || g_274)) > g_88)), func_56(p_30, (safe_sub_func_uint64_t_u_u(g_322, ((l_443 &= (g_342 > p_29)) , 0xFC5D0FD5C3F43AB8LL)))))), p_30))), l_246) , p_30) , l_443)), l_367), 0x10L));
                    l_455 |= (safe_mod_func_uint64_t_u_u((safe_div_func_int32_t_s_s(((safe_mul_func_int16_t_s_s(((func_56(l_450, (p_30 , (l_432 == (((p_26 != (safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(g_387, ((l_443 , ((g_192 = p_27) == func_56(l_383, g_106))) , g_395))), 0x131DL))) , p_29) & g_430)))) != (-10L)) || 0x5FE0C15DL), g_81)) > 0x0AFBL), 6L)), l_273));
                    for (p_29 = 0; (p_29 == (-23)); p_29 = safe_sub_func_int8_t_s_s(p_29, 9))
                    {
                        g_388 = 0xCCEB260CL;
                        g_133 &= p_29;
                    }
                    return l_246;
                }
            }
            else
            {
                long long l_460 = 1L;
                l_273 = l_252;
                g_213 = l_252;
                g_133 = (((g_213 && func_56(p_30, ((safe_rshift_func_uint8_t_u_s(((l_390 = g_342) >= (((++g_160) > (safe_lshift_func_uint16_t_u_u(((-1L) < (g_465 |= g_342)), 11))) > (((safe_sub_func_uint16_t_u_u(func_61(l_250, ((g_198 > ((l_468 && (p_29 < (-1L))) , p_28)) , g_274), g_108), p_26)) , 255UL) , 0x6A7AL))), l_460)) < 0x6ED1CEA1L))) & l_469) , p_30);
            }
        }
        if ((g_213 = (l_390 = g_88)))
        {
            long long l_470 = (-5L);
            int l_471 = 0L;
            ++g_474;
        }
        else
        {
            short l_479 = 0x8FD1L;
            int l_500 = (-1L);
            l_455 = ((safe_mul_func_int16_t_s_s(l_479, (safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((func_33((l_500 = (safe_sub_func_int8_t_s_s(g_108, (safe_sub_func_uint16_t_u_u(func_33(((g_430 = (safe_sub_func_int8_t_s_s(((~(safe_add_func_int64_t_s_s(0L, (((safe_mul_func_uint8_t_u_u(0x20L, (p_27 , (safe_add_func_uint32_t_u_u((+3UL), (safe_sub_func_int64_t_s_s(g_43, (safe_add_func_uint16_t_u_u(func_61((+(0x807C01A6B60F661FLL && (65534UL == l_468))), g_133, l_468), g_147))))))))) == 0x2AD20D30CB4F071ELL) == p_26)))) != 0L), p_30))) == p_29)), 8L)))))) || g_212), 0xF6L)), l_479)))) | 65526UL);
        }
        l_273 = 0xD5CF267EL;
        l_251 |= g_473;
    }
    else
    {
        unsigned l_516 = 0x91FD03CEL;
        const int l_517 = 1L;
        unsigned char l_553 = 0x1FL;
        unsigned char l_580 = 0x84L;
        for (g_430 = 16; (g_430 < 16); g_430++)
        {
            unsigned char l_515 = 0xBAL;
            unsigned l_518 = 0x0F5FABB3L;
            int l_521 = 0L;
            const unsigned l_551 = 0UL;
            const unsigned char l_552 = 0x4FL;
            g_213 = (l_518 &= (+(((((g_43 > func_61(p_27, ((safe_sub_func_int32_t_s_s((l_516 = (l_251 ^= (safe_rshift_func_int8_t_s_s(1L, ((safe_unary_minus_func_int32_t_s((safe_lshift_func_uint16_t_u_s(g_385, 7)))) <= (func_56((safe_div_func_uint64_t_u_u(p_28, (safe_rshift_func_uint8_t_u_s((~(~(~((l_390 &= g_88) | p_28)))), (g_113 = (0xA1L < func_56(func_56((l_514 > l_515), g_280), l_384))))))), p_30) ^ g_218)))))), p_26)) , p_26), p_27)) == p_30) , l_514) | l_517) ^ (-1L))));
            for (g_152 = 23; (g_152 > (-17)); --g_152)
            {
                unsigned short l_522 = 0x02E3L;
                int l_525 = (-3L);
                l_521 = (func_61(g_7, (func_61(func_56(g_472, l_517), g_342, p_26) , func_48(func_61(g_88, p_27, g_108))), g_131) ^ g_7);
                l_522--;
                g_272 = func_61((0xD46AF936L >= g_385), g_218, l_517);
                l_525 |= (p_27 , (p_30 && 0L));
            }
            l_521 = ((l_516 != ((safe_mul_func_int8_t_s_s(8L, (safe_rshift_func_uint8_t_u_s((l_517 & p_26), 0)))) , (g_88 ^ 0xA797L))) >= p_28);
            l_514 = ((safe_mul_func_int16_t_s_s((((safe_div_func_int32_t_s_s((((safe_add_func_uint16_t_u_u(func_61(l_250, (safe_add_func_int16_t_s_s((p_26 = (safe_sub_func_uint32_t_u_u((((((safe_rshift_func_int8_t_s_u(((l_251 < (+(p_28 || ((((0x8F80C7ABL != ((((safe_mod_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(((~0x5873B9A3A852397BLL) || ((0xA7CCC55746121AF7LL ^ (safe_mul_func_int8_t_s_s(g_473, (p_27 != (safe_unary_minus_func_uint8_t_u((((((safe_mod_func_int8_t_s_s(p_26, g_230)) , p_26) , g_472) ^ p_26) != g_107))))))) , l_517)), 6)) , 0x28L), p_30)) , g_218) , 65534UL) < g_152)) | g_160) | 0xF3L) , l_517)))) && g_88), p_29)) >= 0x8D87L) > p_26) , 0x1FAFL) > g_192), l_518))), l_551)), g_88), l_517)) , l_552) == (-1L)), l_250)) == g_218) ^ 0x75L), g_108)) && p_29);
        }
        if (l_553)
        {
            char l_562 = 0xF8L;
            int l_581 = 0x0D2B40A9L;
            for (g_88 = (-6); (g_88 != (-21)); --g_88)
            {
                unsigned char l_583 = 255UL;
                if (l_517)
                {
                    for (g_322 = 9; (g_322 < (-4)); g_322 = safe_sub_func_uint16_t_u_u(g_322, 6))
                    {
                        unsigned long long l_565 = 0xE7B89689C453166ELL;
                        g_472 ^= (safe_lshift_func_uint8_t_u_s(((safe_div_func_int32_t_s_s(l_562, (safe_mod_func_uint8_t_u_u((!(l_565--)), g_213)))) != (+func_56(g_152, ((((p_29 = (safe_lshift_func_int8_t_s_u(g_77, 2))) >= ((((safe_mod_func_int16_t_s_s((g_280 , 0x53B3L), (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(p_30, (safe_div_func_int8_t_s_s((1L != (l_580 ^= ((safe_div_func_int64_t_s_s(l_562, 0x9866A7898F86669DLL)) != g_81))), 255UL)))), 65535UL)))) & 247UL) , p_27) || l_516)) > g_230) , p_26)))), 4));
                        l_581 &= (4294967289UL || 0xF3C9D6BAL);
                        if (g_77)
                            break;
                    }
                }
                else
                {
                    long long l_582 = 1L;
                    l_582 = l_562;
                }
                return l_583;
            }
        }
        else
        {
            unsigned l_586 = 4294967294UL;
            l_384 = (safe_mul_func_int8_t_s_s(g_113, l_586));
            g_133 = (safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s((((g_322 & (safe_sub_func_int8_t_s_s(func_56(g_388, l_341), (l_390 = (safe_mul_func_uint16_t_u_u((func_56(g_81, p_30) != func_56(((((((safe_lshift_func_uint8_t_u_s(l_384, 1)) , ((safe_rshift_func_int16_t_s_u(p_28, l_514)) ^ g_395)) < l_586) < 18446744073709551609UL) < g_7) < l_341), p_29)), p_29)))))) > p_27) , p_27), g_322)), l_586));
        }
    }
    for (l_382 = (-21); (l_382 > 15); l_382 = safe_add_func_uint64_t_u_u(l_382, 9))
    {
        int l_620 = (-6L);
        const unsigned char l_630 = 0UL;
        if (l_382)
            break;
        for (l_514 = 8; (l_514 > 17); l_514 = safe_add_func_uint32_t_u_u(l_514, 6))
        {
            unsigned short l_607 = 65535UL;
            const unsigned long long l_627 = 5UL;
            for (g_107 = (-1); (g_107 != (-28)); g_107--)
            {
                int l_608 = 0xFDDF2EE5L;
                for (g_465 = 0; (g_465 <= 17); g_465 = safe_add_func_uint64_t_u_u(g_465, 2))
                {
                    if (l_607)
                        break;
                }
                l_620 = (g_275 == (l_608 & (((safe_unary_minus_func_int64_t_s(((safe_rshift_func_int16_t_s_u((safe_div_func_int64_t_s_s((((safe_rshift_func_uint8_t_u_u(g_278, 5)) != g_322) >= (safe_div_func_int8_t_s_s(((0x6918L | (-1L)) & ((((p_30 ^ func_56(l_390, (safe_div_func_uint8_t_u_u((l_514 >= 249UL), l_620)))) , p_28) == p_26) && p_26)), p_28))), l_620)), 11)) <= (-4L)))) , p_29) , g_212)));
            }
            if (l_620)
                continue;
            g_388 = (safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((((0x5BDBCF2AL | ((safe_lshift_func_uint16_t_u_s(g_430, 5)) >= 0x3FL)) , ((((p_30 & (+l_627)) >= ((safe_rshift_func_uint16_t_u_s((l_630 && (safe_sub_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(p_29, 1UL)), (((safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u(l_341, g_272)), 7)) , g_473) >= g_230)))), 9)) > g_133)) && g_192) > p_29)) == g_395), p_28)), p_30));
        }
        l_620 = (safe_div_func_uint32_t_u_u(((safe_unary_minus_func_int8_t_s((p_27 , g_473))) >= (safe_mul_func_uint16_t_u_u((g_192 &= l_620), p_30))), (g_218 = p_28)));
        l_384 = (((l_390 = (g_388 & (safe_lshift_func_uint8_t_u_u((++g_465), (safe_sub_func_uint16_t_u_u(l_250, ((p_29 , l_630) | ((safe_sub_func_uint32_t_u_u((((-4L) && (p_27 && (((safe_mul_func_int8_t_s_s((g_133 != (g_131 , func_56((g_275 = ((((4L > 0x9C8CC324E9AE97BBLL) , 0x0221L) >= g_152) || g_342)), l_630))), p_26)) <= l_514) & p_30))) >= g_278), l_341)) == 0xE07F35292130D788LL)))))))) && g_387) == 18446744073709551606UL);
    }
    return l_390;
}







static unsigned short func_33(char p_34)
{
    unsigned short l_50 = 0x81D5L;
    int l_114 = 1L;
    unsigned short l_115 = 0UL;
    int l_141 = 0xF243A456L;
    int l_214 = 0x84171F4BL;
    int l_215 = 0x04EB4280L;
    for (g_43 = 10; (g_43 <= 39); ++g_43)
    {
        unsigned l_128 = 0UL;
        unsigned short l_132 = 0x74AEL;
        int l_142 = 0x8C5F844BL;
        int l_178 = 0L;
        g_133 = ((safe_lshift_func_int16_t_s_u(((func_48(l_50) ^ (((++l_115) , ((safe_div_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(p_34, ((((((safe_sub_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((g_131 = ((((l_50 , func_56(g_108, (((safe_add_func_uint32_t_u_u((l_128 == p_34), (func_56((safe_sub_func_int8_t_s_s(p_34, func_56(g_7, p_34))), l_50) && p_34))) && p_34) , p_34))) , g_7) & g_43) < g_108)), g_7)) > l_114), 0xC3L)) != 0xAF6502FCEF8C34F7LL) || p_34) , g_108) >= 0x0CAFCEB5L) , g_7))), 0x56L)) , l_128)) , p_34)) & l_132), l_50)) & p_34);
        if ((l_114 = (!func_61((l_142 = (safe_sub_func_int16_t_s_s(((((safe_unary_minus_func_uint32_t_u(4294967288UL)) , 0xCE5CD9F560E83E0DLL) , (p_34 || ((((+g_7) , (safe_sub_func_int8_t_s_s(func_48(g_131), ((p_34 > (safe_lshift_func_uint8_t_u_s(0UL, 3))) != g_133)))) && l_141) < 0L))) >= g_7), l_132))), p_34, p_34))))
        {
            const long long l_155 = 0x7FA89076915C511DLL;
            for (g_133 = 0; (g_133 != (-20)); g_133 = safe_sub_func_uint32_t_u_u(g_133, 7))
            {
                int l_158 = 0x63684A2DL;
                int l_159 = 1L;
                g_160 = (~(((p_34 , 0x98C9807AL) & ((safe_div_func_int16_t_s_s(p_34, (g_147--))) > (-1L))) >= (safe_sub_func_uint16_t_u_u(((g_152 = (l_141 , l_114)) | g_43), ((safe_add_func_int32_t_s_s((((l_155 >= ((l_158 = (safe_div_func_uint8_t_u_u(0x08L, p_34))) != 0x2A4F93C2L)) , p_34) <= p_34), l_159)) & l_155)))));
            }
        }
        else
        {
            int l_190 = 0xF576C3BBL;
            int l_194 = (-4L);
            if (p_34)
            {
                unsigned l_199 = 0x3B9DB78BL;
                if ((((func_48(l_128) == ((p_34 == 0x3AD1L) < (safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((p_34 && 3UL), (0xA0937D7650D96A5ELL | g_131))) , (safe_lshift_func_uint16_t_u_s((l_141 = (p_34 != g_43)), l_114))), l_132)))) != g_152) , p_34))
                {
                    short l_181 = 0x289BL;
                    int l_193 = 0xEFB0F277L;
                    for (l_50 = (-4); (l_50 >= 14); l_50 = safe_add_func_uint64_t_u_u(l_50, 1))
                    {
                        unsigned short l_171 = 0x9F24L;
                        const unsigned long long l_191 = 0x335FF0F84FEBEC88LL;
                        unsigned l_195 = 4294967291UL;
                        g_133 = (0xC3L | ((safe_lshift_func_uint8_t_u_s((g_133 && 0L), (!l_171))) != ((safe_div_func_int64_t_s_s(((l_142 = (safe_rshift_func_int16_t_s_s(g_131, 1))) <= (p_34 ^ (g_152 != g_77))), (safe_rshift_func_int16_t_s_u((l_178 |= (~((l_132 && 0xECL) > 252UL))), 13)))) , 0L)));
                        g_133 &= ((p_34 != (l_178 && (safe_mul_func_int16_t_s_s((l_181 = p_34), (safe_mod_func_int8_t_s_s((~(g_131 = (!(((l_194 = ((safe_rshift_func_uint16_t_u_u(((l_190 = (safe_div_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(l_190, ((g_192 |= func_61(p_34, p_34, ((+l_114) & (l_141 ^ (l_191 <= p_34))))) , p_34))), l_193))) , l_190), 11)) < l_193)) == g_43) , g_77)))), p_34)))))) , l_195);
                    }
                    for (l_181 = 10; (l_181 == 21); l_181 = safe_add_func_int16_t_s_s(l_181, 2))
                    {
                        long long l_206 = 0x49AEB80568E968EFLL;
                        ++l_199;
                        if (l_190)
                            break;
                        l_141 = (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s(0xD08FL, 6)), l_142));
                        if (l_206)
                            break;
                    }
                }
                else
                {
                    unsigned char l_207 = 0x42L;
                    l_207++;
                    return p_34;
                }
            }
            else
            {
                char l_210 = (-4L);
                int l_211 = 0x2A6C9F1CL;
                int l_216 = 0x74A439A0L;
                ++g_218;
                if (p_34)
                    continue;
                g_221++;
            }
        }
        l_178 = (safe_sub_func_int32_t_s_s(0L, (func_61((l_115 , (g_88 = l_132)), (func_56(l_132, ((safe_div_func_uint64_t_u_u((g_147 = g_192), (safe_div_func_int32_t_s_s((l_114 , p_34), ((+l_114) , (g_106 || g_106)))))) >= p_34)) & 249UL), p_34) > l_114)));
    }
    return g_218;
}







static const int func_48(int p_49)
{
    int l_53 = 0L;
    int l_78 = (-10L);
    g_113 = (safe_add_func_uint64_t_u_u((l_53 < 0x279329BFAEAD2214LL), (safe_sub_func_uint16_t_u_u(func_56((safe_mod_func_int16_t_s_s(p_49, func_61(((safe_lshift_func_uint16_t_u_u(l_53, 1)) , (((safe_mul_func_uint16_t_u_u(65535UL, (l_78 = (safe_mul_func_int16_t_s_s(0x6D00L, (g_7 || (p_49 , (safe_mul_func_int8_t_s_s((~((safe_div_func_uint8_t_u_u((g_7 && p_49), g_77)) & p_49)), 0UL))))))))) ^ g_7) , l_53)), g_43, g_7))), l_53), 1L))));
    return p_49;
}







static unsigned short func_56(int p_57, unsigned char p_58)
{
    unsigned long long l_109 = 1UL;
    unsigned short l_112 = 65535UL;
    l_109++;
    return l_112;
}







static short func_61(short p_62, int p_63, const short p_64)
{
    int l_79 = 0x5D59274CL;
    int l_80 = 0xBC842353L;
    unsigned l_104 = 0x9466B01FL;
    unsigned l_105 = 0xDD045908L;
    ++g_81;
    for (p_63 = 0; (p_63 == 18); ++p_63)
    {
        unsigned char l_86 = 0xADL;
        int l_87 = 0xA6B86D56L;
        g_88 |= (((l_80 & g_7) , p_63) || (l_87 = (l_86 || p_63)));
        ++g_89;
    }
    g_107 = (safe_sub_func_uint32_t_u_u((g_106 = (l_80 > ((g_89 & (l_80 >= ((((safe_div_func_int16_t_s_s(p_64, (safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((((safe_add_func_int32_t_s_s(g_7, l_104)) < l_79) & (l_105 ^ p_62)), 0)) && g_43), 65528UL)))) != p_62) && 0xDC89L) >= 1L))) >= g_7))), g_7));
    return p_62;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_322, "g_322", print_hash_value);
    transparent_crc(g_342, "g_342", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    transparent_crc(g_387, "g_387", print_hash_value);
    transparent_crc(g_388, "g_388", print_hash_value);
    transparent_crc(g_391, "g_391", print_hash_value);
    transparent_crc(g_395, "g_395", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_465, "g_465", print_hash_value);
    transparent_crc(g_472, "g_472", print_hash_value);
    transparent_crc(g_473, "g_473", print_hash_value);
    transparent_crc(g_474, "g_474", print_hash_value);
    transparent_crc(g_663, "g_663", print_hash_value);
    transparent_crc(g_664, "g_664", print_hash_value);
    transparent_crc(g_665, "g_665", print_hash_value);
    transparent_crc(g_672, "g_672", print_hash_value);
    transparent_crc(g_681, "g_681", print_hash_value);
    transparent_crc(g_734, "g_734", print_hash_value);
    transparent_crc(g_776, "g_776", print_hash_value);
    transparent_crc(g_798, "g_798", print_hash_value);
    transparent_crc(g_812, "g_812", print_hash_value);
    transparent_crc(g_828, "g_828", print_hash_value);
    transparent_crc(g_860, "g_860", print_hash_value);
    transparent_crc(g_891, "g_891", print_hash_value);
    transparent_crc(g_895, "g_895", print_hash_value);
    transparent_crc(g_948, "g_948", print_hash_value);
    transparent_crc(g_1052, "g_1052", print_hash_value);
    transparent_crc(g_1065, "g_1065", print_hash_value);
    transparent_crc(g_1074, "g_1074", print_hash_value);
    transparent_crc(g_1179, "g_1179", print_hash_value);
    transparent_crc(g_1197, "g_1197", print_hash_value);
    transparent_crc(g_1210, "g_1210", print_hash_value);
    transparent_crc(g_1211, "g_1211", print_hash_value);
    transparent_crc(g_1216, "g_1216", print_hash_value);
    transparent_crc(g_1240, "g_1240", print_hash_value);
    transparent_crc(g_1246, "g_1246", print_hash_value);
    transparent_crc(g_1314, "g_1314", print_hash_value);
    transparent_crc(g_1386, "g_1386", print_hash_value);
    transparent_crc(g_1452, "g_1452", print_hash_value);
    transparent_crc(g_1454, "g_1454", print_hash_value);
    transparent_crc(g_1458, "g_1458", print_hash_value);
    transparent_crc(g_1459, "g_1459", print_hash_value);
    transparent_crc(g_1464, "g_1464", print_hash_value);
    transparent_crc(g_1600, "g_1600", print_hash_value);
    transparent_crc(g_1606, "g_1606", print_hash_value);
    transparent_crc(g_1608, "g_1608", print_hash_value);
    transparent_crc(g_1628, "g_1628", print_hash_value);
    transparent_crc(g_1632, "g_1632", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
