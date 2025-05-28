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



static unsigned g_4 = 3UL;
static unsigned g_12 = 0x9E9D60A2L;
static unsigned *g_47 = &g_12;
static unsigned **g_46 = &g_47;
static unsigned g_72 = 0xF497C316L;
static unsigned short g_77 = 0x55A2L;
static char g_79 = 1L;
static char g_81 = 0x51L;
static unsigned char g_83 = 1UL;
static unsigned char g_85 = 0x36L;
static int g_99 = 0x8C4B1E4FL;
static short g_146 = 0x5289L;
static unsigned g_187 = 6UL;
static volatile char g_193 = 0x29L;
static volatile char g_209 = 0x2FL;
static volatile short g_210 = 5L;
static volatile unsigned char g_223 = 0x41L;
static unsigned short *g_229 = &g_77;
static unsigned g_238 = 18446744073709551613UL;
static volatile unsigned short g_243 = 65535UL;
static int *g_262 = (void*)0;
static volatile char g_283 = (-2L);
static volatile unsigned short g_300 = 65534UL;
static volatile int g_304 = 0x75043125L;
static volatile unsigned g_380 = 18446744073709551614UL;
static unsigned short g_393 = 0xBC36L;
static volatile char g_433 = 3L;
static unsigned short g_465 = 0x2E31L;
static unsigned g_517 = 2UL;
static int g_536 = 0L;
static int g_552 = 0x62413DD2L;
static volatile char g_578 = 0xBCL;
static volatile unsigned g_582 = 0xB10E3198L;
static int g_605 = 0xDAEC199BL;
static volatile unsigned char g_613 = 4UL;
static unsigned *g_619 = &g_12;
static unsigned **g_618 = &g_619;
static unsigned g_659 = 0UL;
static unsigned * const g_658 = &g_659;
static unsigned * const *g_657 = &g_658;
static unsigned * const **g_656 = &g_657;
static unsigned * const ***g_655 = &g_656;
static short g_721 = 0xC624L;
static volatile int g_785 = 7L;
static unsigned char g_798 = 255UL;
static unsigned char *g_807 = (void*)0;
static unsigned char **g_806 = &g_807;
static char g_868 = 0x5BL;
static volatile unsigned g_880 = 0UL;
static int g_899 = 0xC43059F3L;
static unsigned g_930 = 4294967295UL;
static unsigned g_944 = 0x59477401L;
static int g_1074 = 0L;
static unsigned ***g_1114 = &g_46;
static unsigned ****g_1113 = &g_1114;
static const unsigned g_1128 = 0x1352D0F2L;
static const unsigned *g_1127 = &g_1128;
static volatile int g_1184 = 0x7EB92557L;
static volatile unsigned g_1207 = 0xB8B33C3AL;
static volatile int *g_1220 = &g_785;
static volatile int **g_1219 = &g_1220;
static char *g_1349 = &g_868;
static char **g_1348 = &g_1349;
static volatile int g_1398 = 0x7990BE36L;
static int g_1424 = (-4L);
static volatile unsigned char g_1433 = 0x2CL;
static unsigned g_1462 = 0xCD3797FCL;
static char g_1482 = 0xF3L;
static volatile unsigned short g_1577 = 65535UL;
static int g_1584 = 0xFD164157L;
static const unsigned char g_1585 = 0x3FL;
static volatile unsigned g_1901 = 0UL;
static int g_1991 = 0xADDDE9C0L;
static char g_2025 = 0xE4L;
static unsigned char g_2030 = 0xF0L;
static const int g_2067 = 1L;
static int g_2137 = 0x1B24179CL;
static volatile unsigned char g_2152 = 7UL;
static unsigned short **g_2189 = &g_229;
static unsigned short ***g_2188 = &g_2189;
static int **g_2280 = &g_262;
static const unsigned char g_2282 = 255UL;
static volatile short * const g_2289 = &g_210;
static volatile short * const *g_2288 = &g_2289;
static int ***g_2296 = &g_2280;
static short g_2406 = 0x4981L;
static unsigned g_2416 = 0x186216A9L;
static volatile unsigned g_2477 = 0x756642CFL;
static unsigned *g_2489 = &g_659;
static int g_2524 = (-1L);
static volatile unsigned short g_2554 = 1UL;
static volatile unsigned short g_2666 = 65526UL;
static unsigned g_2775 = 0x77833CA7L;
static char g_2913 = (-1L);
static volatile unsigned char g_2914 = 0x9EL;



static int func_1(void);
static char func_21(unsigned short p_22, unsigned * p_23);
static unsigned * func_24(unsigned p_25, short p_26);
static short func_27(unsigned ** p_28, unsigned * p_29, unsigned ** p_30, short p_31, int p_32);
static unsigned ** func_33(int p_34, const unsigned p_35, const int p_36);
static unsigned * func_39(unsigned char p_40, unsigned ** p_41, unsigned * const p_42, unsigned short p_43, const unsigned * p_44);
static int func_50(char p_51, char p_52, unsigned * p_53, const unsigned p_54);
static unsigned short func_55(unsigned char * p_56, unsigned * p_57, unsigned char p_58, unsigned char p_59);
static unsigned char * func_60(char p_61, unsigned * p_62, int p_63);
static unsigned * func_64(unsigned char p_65, unsigned ** p_66);
static int func_1(void)
{
    unsigned l_5 = 18446744073709551609UL;
    const int l_8 = 0L;
    unsigned *l_11 = &g_12;
    const unsigned * const l_20 = &g_4;
    unsigned *l_617 = &g_12;
    int l_2335 = 4L;
    int l_2336 = 0x4A4022AAL;
    int l_2360 = (-9L);
    char ***l_2485 = &g_1348;
    int l_2492 = 0x7ACE104DL;
    int l_2529 = 0x149203C8L;
    unsigned l_2535 = 0x0A52706EL;
    unsigned char **l_2539 = (void*)0;
    unsigned char **l_2540 = &g_807;
    unsigned char l_2542 = 0UL;
    int l_2568 = 0L;
    char ***l_2677 = &g_1348;
    unsigned *l_2680 = &g_944;
    int l_2732 = 0x63C9F0AEL;
    int l_2740 = 0xBBA1C9F5L;
    int l_2744 = (-3L);
    int l_2755 = 0x3400BCB3L;
    int l_2756 = 0L;
    unsigned l_2794 = 0xBA6EC6A7L;
    unsigned ***l_2875 = &g_618;
    unsigned l_2888 = 18446744073709551615UL;
    int *l_2898 = &l_2335;
    int **l_2901 = &l_2898;
    char l_2902 = 0x89L;
    char l_2909 = (-9L);
    char l_2930 = (-1L);
    if (((safe_add_func_uint8_t_u_u(g_4, (((*l_11) = ((((l_5 >= l_5) > 1UL) > (safe_lshift_func_int8_t_s_u(l_8, 5))) <= ((safe_mul_func_int8_t_s_s((((-1L) >= l_8) ^ g_4), 0x33L)) & g_4))) != l_5))) ^ 65533UL))
    {
        unsigned char l_15 = 4UL;
        unsigned *l_18 = &g_12;
        unsigned **l_19 = &l_11;
        unsigned char *l_45 = &l_15;
        unsigned **l_587 = &g_47;
        int l_588 = 0L;
        const unsigned char l_589 = 0x53L;
        unsigned ***l_616 = &g_46;
        short *l_636 = &g_146;
        char l_2306 = 2L;
        int l_2317 = 0x1EE5F8F2L;
        int l_2338 = 0xD2F7CBD4L;
        char l_2476 = 0xE9L;
        int l_2488 = 0x8073D671L;
        unsigned short l_2491 = 0x6134L;
        int *l_2495 = &l_2317;
        int *l_2496 = &g_552;
        int *l_2497 = &l_2335;
        int *l_2498 = (void*)0;
        int *l_2499 = &l_2317;
        int *l_2500 = &g_1074;
        int *l_2501 = &l_588;
        int *l_2502 = &l_2335;
        int *l_2503 = (void*)0;
        int *l_2504 = &l_2317;
        int *l_2505 = &g_552;
        int *l_2506 = &g_1074;
        int *l_2507 = &g_1074;
        int *l_2508 = (void*)0;
        int *l_2509 = &l_2360;
        int *l_2510 = &l_2338;
        int *l_2511 = &l_2338;
        int *l_2512 = &l_588;
        int *l_2513 = &l_2336;
        int *l_2514 = &g_99;
        int *l_2515 = &g_1074;
        int *l_2516 = &l_2335;
        int *l_2517 = &g_552;
        int *l_2518 = (void*)0;
        int *l_2519 = &l_588;
        int *l_2520 = &l_2492;
        int *l_2521 = &l_2335;
        int *l_2522 = &l_2336;
        int *l_2523 = &l_2317;
        int l_2525 = (-5L);
        int *l_2526 = (void*)0;
        int *l_2527 = &g_2524;
        int *l_2528 = &l_588;
        int *l_2530 = (void*)0;
        int *l_2531 = &g_99;
        int *l_2532 = &l_2360;
        int *l_2533 = &g_99;
        int *l_2534 = &g_899;
        if (((l_5 > (safe_rshift_func_uint8_t_u_u(l_15, 6))) || (((safe_lshift_func_int8_t_s_s(((((*l_19) = l_18) == &g_12) > (l_20 == &g_12)), func_21(l_5, func_24(g_12, ((*l_636) = (func_27(((*l_616) = func_33(((safe_div_func_uint32_t_u_u((((*l_587) = func_39(((*l_45) |= g_4), g_46, (*g_46), l_5, (*g_46))) == (void*)0), l_588)) == 0x83L), l_589, g_552)), l_617, g_618, g_605, g_552) | l_5)))))) && 65526UL) != 7L)))
        {
            char l_2292 = 5L;
            int ***l_2297 = &g_2280;
            unsigned short *l_2307 = &g_393;
            int l_2342 = 0x9F6494C6L;
            int l_2400 = 0xA6BEF102L;
            unsigned **l_2423 = &l_18;
            unsigned l_2424 = 0xC18A8225L;
            int l_2482 = 0x2CCD542FL;
            char ***l_2487 = &g_1348;
            char ****l_2486 = &l_2487;
            for (g_81 = 0; (g_81 <= (-6)); g_81--)
            {
                unsigned *l_2293 = &g_12;
                int l_2385 = 0xAB99F77AL;
                int l_2409 = 0x16475801L;
                int *l_2425 = &g_552;
                int *l_2426 = &l_2336;
                int *l_2427 = &l_2385;
                int *l_2428 = &g_1074;
                int *l_2429 = &l_2317;
                int *l_2430 = &g_899;
                int *l_2431 = (void*)0;
                int *l_2432 = &l_2317;
                int *l_2433 = (void*)0;
                int *l_2434 = &l_2317;
                int *l_2435 = &g_899;
                int *l_2436 = (void*)0;
                int *l_2437 = &l_2317;
                int *l_2438 = &g_552;
                int *l_2439 = &l_2338;
                int *l_2440 = &l_2335;
                int *l_2441 = &l_588;
                int *l_2442 = &l_2336;
                int *l_2443 = &l_588;
                int *l_2444 = &g_1074;
                int *l_2445 = &g_899;
                int *l_2446 = &l_2385;
                int *l_2447 = &g_99;
                int *l_2448 = &l_2342;
                int *l_2449 = &l_2317;
                int *l_2450 = &g_1074;
                int *l_2451 = &l_2342;
                int *l_2452 = (void*)0;
                int *l_2453 = &g_1074;
                int *l_2454 = &g_99;
                int *l_2455 = &g_552;
                int *l_2456 = &l_2335;
                int *l_2457 = &l_2360;
                int *l_2458 = &l_2338;
                int *l_2459 = &l_2338;
                int *l_2460 = &l_588;
                int *l_2461 = &l_2342;
                int *l_2462 = (void*)0;
                int *l_2463 = &l_2335;
                int *l_2464 = &l_2336;
                int *l_2465 = (void*)0;
                int *l_2466 = &l_2338;
                int *l_2467 = (void*)0;
                int *l_2468 = &l_2317;
                int *l_2469 = &l_2317;
                int *l_2470 = &g_899;
                int *l_2471 = &l_2317;
                int *l_2472 = &l_2335;
                int *l_2473 = &l_2338;
                int *l_2474 = &l_588;
                int *l_2475 = &l_2360;
                if (func_27((**g_1113), l_2293, (**g_1113), l_588, (**g_1219)))
                {
                    unsigned **l_2304 = &l_18;
                    int l_2305 = 0xD919F0EEL;
                    if (((*g_262) ^= (**g_1219)))
                    {
                        int ***l_2295 = &g_2280;
                        int ****l_2294 = &l_2295;
                        int ****l_2298 = &l_2297;
                        (**g_1219) |= ((g_2296 = ((*l_2294) = &g_2280)) == ((*l_2298) = l_2297));
                        if (l_589)
                            break;
                    }
                    else
                    {
                        unsigned char * const *l_2301 = &l_45;
                        (**g_1219) = (((safe_div_func_uint8_t_u_u(((l_2301 != (void*)0) < func_27((**g_1113), (*l_587), (l_2304 = func_33((*g_262), (safe_mod_func_int8_t_s_s((((**g_2189) = 0xD790L) ^ (**g_2288)), l_15)), g_659)), l_2305, l_2305)), 0x3BL)) | l_5) >= l_588);

                        ;
                        return l_2305;
                    }
                    (*g_262) |= (-1L);
                }
                else
                {
                    unsigned l_2309 = 3UL;
                    int *l_2311 = &g_552;
                    int *l_2318 = &l_2317;
                    int *l_2319 = &g_1074;
                    int *l_2320 = &g_99;
                    int *l_2321 = &l_588;
                    int *l_2322 = (void*)0;
                    int *l_2323 = &l_2317;
                    int *l_2324 = &g_552;
                    int *l_2325 = &l_588;
                    int *l_2326 = &l_2317;
                    int *l_2327 = &g_552;
                    int *l_2328 = &g_899;
                    int *l_2329 = &g_552;
                    int *l_2330 = &g_899;
                    int *l_2331 = &g_899;
                    int *l_2332 = (void*)0;
                    int *l_2333 = &l_2317;
                    int *l_2334 = (void*)0;
                    int *l_2337 = &g_99;
                    int *l_2339 = (void*)0;
                    int *l_2340 = &l_2317;
                    int *l_2341 = &l_2317;
                    int *l_2343 = &g_99;
                    int *l_2344 = &l_2336;
                    int *l_2345 = &l_2317;
                    int *l_2346 = &l_2335;
                    int *l_2347 = (void*)0;
                    int *l_2348 = &l_2335;
                    int *l_2349 = &l_2317;
                    int *l_2350 = (void*)0;
                    int *l_2351 = &g_99;
                    int *l_2352 = &l_2317;
                    int *l_2353 = &g_899;
                    int *l_2354 = (void*)0;
                    int *l_2355 = &l_588;
                    int *l_2356 = &g_1074;
                    int *l_2357 = &l_2336;
                    int *l_2358 = &l_2335;
                    int *l_2359 = (void*)0;
                    int *l_2361 = &l_2360;
                    int *l_2362 = &g_552;
                    int *l_2363 = &l_2338;
                    int *l_2364 = &l_2335;
                    int *l_2365 = &g_99;
                    int *l_2366 = (void*)0;
                    int *l_2367 = &l_2336;
                    int *l_2368 = (void*)0;
                    int *l_2369 = &g_99;
                    int *l_2370 = &l_2342;
                    int *l_2371 = (void*)0;
                    int *l_2372 = &l_2335;
                    int *l_2373 = &l_2317;
                    int *l_2374 = &l_2342;
                    int *l_2375 = &g_99;
                    int *l_2376 = (void*)0;
                    int *l_2377 = (void*)0;
                    int *l_2378 = &g_552;
                    int *l_2379 = &g_1074;
                    int *l_2380 = &g_552;
                    int *l_2381 = &l_2317;
                    int *l_2382 = &l_2342;
                    int *l_2383 = &l_588;
                    int *l_2384 = &g_899;
                    int *l_2386 = &g_1074;
                    int *l_2387 = &l_2335;
                    int *l_2388 = (void*)0;
                    int *l_2389 = &g_899;
                    int *l_2390 = &l_588;
                    int *l_2391 = (void*)0;
                    int *l_2392 = &l_2342;
                    int *l_2393 = &l_2335;
                    int *l_2394 = &l_2335;
                    int *l_2395 = &g_99;
                    int *l_2396 = &l_2338;
                    int *l_2397 = (void*)0;
                    int *l_2398 = &l_2317;
                    int *l_2399 = (void*)0;
                    int *l_2401 = &g_899;
                    int *l_2402 = &l_2400;
                    int *l_2403 = (void*)0;
                    int *l_2404 = &g_99;
                    int *l_2405 = &g_99;
                    int *l_2407 = &g_552;
                    int *l_2408 = &l_2317;
                    int *l_2410 = (void*)0;
                    int *l_2411 = &l_2317;
                    int *l_2412 = &g_552;
                    int *l_2413 = &g_899;
                    int *l_2414 = (void*)0;
                    int *l_2415 = &l_2400;
                    if ((((*g_1349) ^= l_2306) > l_8))
                    {
                        unsigned short **l_2308 = &l_2307;
                        int *l_2310 = &g_552;
                        int **l_2312 = (void*)0;
                        int **l_2313 = &g_262;
                        l_2309 |= ((**g_2188) != ((*l_2308) = l_2307));
                        (*l_2313) = (l_2311 = l_2310);

                        ;
                        (**l_2313) = (safe_div_func_int16_t_s_s(((*l_636) |= (**g_2288)), (**g_2189)));
                    }
                    else
                    {
                        int l_2316 = 2L;
                        (*g_262) &= (*g_1220);
                        (*g_1220) &= l_2316;
                        (*g_1219) = (*g_1219);
                    }

                    ;
                    g_2416++;
                    (*l_2407) = func_27((*g_1114), (*l_19), func_33((safe_lshift_func_uint16_t_u_s((**g_2189), (safe_mul_func_int8_t_s_s(0xE0L, ((*l_45) = l_5))))), func_27(l_2423, (***g_1113), (*l_616), (*g_2289), (*g_262)), g_798), l_2424, l_2409);

                    ;
                }

                ;
                if (l_2385)
                    break;
                g_2477--;
            }
            (**g_1219) = (((g_146 = (safe_lshift_func_uint16_t_u_u(l_2476, 3))) | (l_2482 >= (((*g_229) = (safe_add_func_uint16_t_u_u((l_2485 == ((*l_2486) = l_2485)), 1UL))) >= l_2336))) & l_589);
            (**g_1219) |= ((*g_2296) == (void*)0);
            l_2335 |= ((l_2488 || g_868) >= (**g_1219));
        }
        else
        {
            int *l_2490 = &l_2317;
            (**g_1219) = (~(&g_1113 != &g_655));
            (*g_1220) = (l_2491 = ((*l_2490) |= l_2360));
            (*g_1220) = ((*l_2490) |= (-10L));
        }

        ;
        ;

        ;
        ;
        ;
        if (l_2492)
        {
            return g_304;
        }
        else
        {
            int l_2493 = 0L;
            int **l_2494 = &g_262;
            (*l_2494) = &l_2493;

            ;
        }


        ++l_2535;
    }
    else
    {
        int *l_2538 = &l_2360;
        (*g_1220) &= ((*l_2538) = 3L);
    }

    ;
    ;

    ;
    ;
    ;
    if (((***g_1113) == (*g_46)))
    {
        unsigned char **l_2541 = &g_807;
        int l_2543 = 0L;
        int *l_2545 = (void*)0;
        int *l_2546 = (void*)0;
        int *l_2547 = &l_2492;
        int *l_2548 = &g_2524;
        int *l_2549 = (void*)0;
        int *l_2550 = &g_552;
        int *l_2551 = (void*)0;
        int *l_2552 = (void*)0;
        int *l_2553 = &l_2335;
        if (((l_2539 != (l_2541 = l_2540)) & l_2542))
        {
            char l_2544 = 0x5CL;
            l_2544 = l_2543;
        }
        else
        {
            l_2492 &= (**g_1219);
            (*g_1219) = (void*)0;

            ;
        }

        ;
        g_2554--;
        l_2548 = &l_2543;

        ;
    }
    else
    {
        char l_2594 = (-1L);
        int l_2624 = (-3L);
        int l_2641 = 0x85510280L;
        int l_2652 = (-4L);
        char * const **l_2676 = (void*)0;
        unsigned **l_2678 = &l_617;
        int l_2681 = 0L;
        unsigned char *l_2682 = (void*)0;
        int *l_2693 = &g_552;
        int *l_2694 = &l_2681;
        int *l_2695 = &l_2492;
        int *l_2696 = &g_99;
        int *l_2697 = &g_899;
        int *l_2698 = &g_99;
        int *l_2699 = &g_2524;
        int *l_2700 = (void*)0;
        int *l_2701 = &l_2336;
        int *l_2702 = &g_99;
        int *l_2703 = &l_2335;
        int *l_2704 = &l_2335;
        int *l_2705 = &g_552;
        int *l_2706 = &l_2624;
        int *l_2707 = &g_99;
        int *l_2708 = &g_1074;
        int *l_2709 = &l_2529;
        int *l_2710 = (void*)0;
        int *l_2711 = &l_2641;
        int *l_2712 = &l_2529;
        int *l_2713 = &g_552;
        int *l_2714 = &l_2492;
        int *l_2715 = &l_2360;
        int *l_2716 = &g_552;
        int *l_2717 = (void*)0;
        int *l_2718 = &l_2492;
        int *l_2719 = &l_2681;
        int *l_2720 = (void*)0;
        int *l_2721 = (void*)0;
        int *l_2722 = &g_552;
        int *l_2723 = &l_2492;
        int *l_2724 = &l_2529;
        int *l_2725 = (void*)0;
        int *l_2726 = &g_1074;
        int *l_2727 = &l_2652;
        int *l_2728 = &g_99;
        int *l_2729 = (void*)0;
        int *l_2730 = &l_2652;
        int *l_2731 = &l_2492;
        int *l_2733 = &l_2529;
        int *l_2734 = &l_2732;
        int *l_2735 = &g_99;
        int *l_2736 = (void*)0;
        int *l_2737 = &l_2360;
        int *l_2738 = &g_899;
        int *l_2739 = (void*)0;
        int *l_2741 = (void*)0;
        int *l_2742 = &l_2529;
        int *l_2743 = &g_552;
        int *l_2745 = &g_552;
        int *l_2746 = &g_2524;
        int *l_2747 = (void*)0;
        int *l_2748 = (void*)0;
        int *l_2749 = &g_99;
        int *l_2750 = (void*)0;
        int *l_2751 = &l_2732;
        int *l_2752 = &l_2335;
        int *l_2753 = &l_2492;
        int *l_2754 = &g_2524;
        int *l_2757 = &l_2755;
        int *l_2758 = &g_99;
        int *l_2759 = &l_2740;
        int *l_2760 = &g_552;
        int *l_2761 = &l_2335;
        int *l_2762 = &l_2732;
        int *l_2763 = &g_99;
        int *l_2764 = &l_2492;
        int *l_2765 = (void*)0;
        int *l_2766 = &g_2524;
        int *l_2767 = &l_2529;
        int *l_2768 = &l_2681;
        int *l_2769 = (void*)0;
        int *l_2770 = &l_2732;
        int l_2771 = 0x223C4A8EL;
        int *l_2772 = &g_99;
        int *l_2773 = &l_2652;
        int *l_2774 = &l_2732;
        int l_2874 = 0x08ABA88DL;
        unsigned l_2887 = 4294967286UL;
        unsigned short l_2896 = 0x6E58L;
        for (g_721 = (-10); (g_721 == (-19)); g_721 = safe_sub_func_uint8_t_u_u(g_721, 4))
        {
            int *l_2559 = &l_2492;
            int l_2560 = (-10L);
            int *l_2561 = &g_1074;
            int *l_2562 = &l_2560;
            int *l_2563 = (void*)0;
            int *l_2564 = &g_899;
            int *l_2565 = &l_2529;
            int *l_2566 = (void*)0;
            int *l_2567 = &g_2524;
            int *l_2569 = &l_2529;
            int *l_2570 = (void*)0;
            int *l_2571 = &l_2336;
            int *l_2572 = &g_99;
            int *l_2573 = &l_2560;
            int *l_2574 = &g_552;
            int *l_2575 = (void*)0;
            int *l_2576 = &l_2335;
            int *l_2577 = &g_1074;
            int *l_2578 = (void*)0;
            int *l_2579 = (void*)0;
            int *l_2580 = &l_2492;
            int l_2581 = 0x192B5B02L;
            int *l_2582 = (void*)0;
            int *l_2583 = &g_99;
            int *l_2584 = (void*)0;
            int *l_2585 = &g_899;
            int *l_2586 = &g_552;
            int *l_2587 = &g_899;
            int *l_2588 = &l_2529;
            int *l_2589 = &l_2581;
            int *l_2590 = (void*)0;
            int *l_2591 = &l_2529;
            int *l_2592 = (void*)0;
            int *l_2593 = &g_552;
            int *l_2595 = &l_2335;
            int *l_2596 = &l_2581;
            int *l_2597 = &g_899;
            int *l_2598 = &g_2524;
            int *l_2599 = &l_2336;
            int *l_2600 = &l_2492;
            int *l_2601 = &g_99;
            int *l_2602 = &l_2560;
            int *l_2603 = &g_552;
            int *l_2604 = &g_552;
            int *l_2605 = &g_1074;
            int *l_2606 = &g_2524;
            int *l_2607 = &l_2492;
            int *l_2608 = (void*)0;
            int *l_2609 = &g_552;
            int *l_2610 = &l_2360;
            int *l_2611 = &l_2335;
            int *l_2612 = &l_2492;
            int *l_2613 = (void*)0;
            int *l_2614 = &l_2581;
            int *l_2615 = &l_2335;
            int *l_2616 = &l_2335;
            int *l_2617 = &l_2492;
            int *l_2618 = &g_552;
            int *l_2619 = &g_2524;
            int *l_2620 = &l_2360;
            int *l_2621 = (void*)0;
            int *l_2622 = &l_2560;
            int *l_2623 = (void*)0;
            int *l_2625 = &g_2524;
            int *l_2626 = &g_899;
            int *l_2627 = &g_2524;
            int *l_2628 = &g_1074;
            int *l_2629 = &l_2529;
            int *l_2630 = &l_2336;
            int *l_2631 = &l_2560;
            int *l_2632 = &l_2581;
            int *l_2633 = &g_2524;
            int *l_2634 = &l_2624;
            int *l_2635 = (void*)0;
            int *l_2636 = &l_2360;
            int *l_2637 = &l_2529;
            int *l_2638 = &l_2581;
            int *l_2639 = &g_99;
            int *l_2640 = &l_2529;
            int *l_2642 = &g_1074;
            int *l_2643 = (void*)0;
            int l_2644 = (-1L);
            int *l_2645 = &g_899;
            int *l_2646 = &l_2641;
            int l_2647 = 1L;
            int *l_2648 = &g_899;
            int *l_2649 = &l_2644;
            int *l_2650 = &l_2360;
            int *l_2651 = (void*)0;
            int *l_2653 = &l_2624;
            int *l_2654 = &g_99;
            int *l_2655 = (void*)0;
            int *l_2656 = &l_2335;
            int *l_2657 = &g_2524;
            int *l_2658 = &l_2335;
            int *l_2659 = (void*)0;
            int *l_2660 = &l_2652;
            int *l_2661 = &l_2335;
            int *l_2662 = &l_2581;
            int *l_2663 = &g_1074;
            int *l_2664 = &l_2644;
            int *l_2665 = &l_2492;
            unsigned l_2671 = 0xC729C326L;
            unsigned **l_2679 = &g_2489;
            unsigned char *l_2687 = &g_83;
            volatile int *l_2688 = &g_1398;
            short *l_2691 = &g_146;
            short *l_2692 = &g_2406;
            ++g_2666;
            (*l_2601) = (safe_div_func_uint8_t_u_u(((*g_2289) != ((1L >= (l_2671 ^ (safe_mod_func_uint32_t_u_u(((((*l_2612) = ((*l_2567) &= (safe_mul_func_int8_t_s_s(((l_2676 == l_2677) ^ func_50(func_27(l_2678, (*g_618), l_2679, g_798, (*l_2572)), (*g_1349), l_2680, l_2624)), (**g_1348))))) || (*g_47)) != 0UL), 0x9D13C566L)))) != (**g_1348))), l_5));

            ;
            l_2688 = (*g_1219);

            ;
            (*l_2642) ^= ((~(*l_2585)) ^ (safe_lshift_func_int16_t_s_s(((*l_2691) = (*l_2632)), ((*l_2692) = (l_2492 > 0x114111ADL)))));
        }


        g_2775++;
        if ((l_2755 ^= ((*l_2731) = l_2335)))
        {
            short l_2789 = 0xBE68L;
            int l_2790 = 0x7C2E30CAL;
            int l_2791 = 0x68B4C06DL;
            int l_2792 = (-1L);
            int l_2793 = 0L;
            (*l_2698) = (l_2740 && 0x20C8359AL);
            for (g_536 = (-15); (g_536 >= (-26)); --g_536)
            {
                unsigned l_2780 = 4294967295UL;
                (*l_2719) ^= l_5;
                (*l_2774) ^= l_2780;
                if ((*l_2704))
                    break;
            }
            for (g_77 = 0; (g_77 <= 56); ++g_77)
            {
                unsigned l_2783 = 0x6A5EC1E9L;
                l_2789 &= ((((l_2783 > g_1207) & (((**g_1348) && (safe_rshift_func_int16_t_s_u((0xB106L | (safe_unary_minus_func_uint16_t_u(((**g_656) != (*l_2678))))), 9))) && ((((safe_mod_func_uint32_t_u_u((*l_2773), g_4)) | l_2783) ^ (-6L)) | 0xBE13L))) <= (**g_1348)) > (*l_2731));
            }
            l_2794--;
        }
        else
        {
            unsigned *l_2800 = (void*)0;
            unsigned **l_2799 = &l_2800;
            short *l_2801 = &g_2406;
            char l_2808 = 0xBEL;
            int l_2810 = 0L;
            int ***l_2816 = (void*)0;
            int l_2818 = 0x479E57BAL;
            unsigned short l_2863 = 0UL;
            int l_2912 = 0xFD10BE16L;
            short l_2921 = 0x591EL;
            int l_2926 = (-1L);
            unsigned char l_2927 = 0UL;
            if ((safe_lshift_func_uint16_t_u_s((*g_229), ((*l_2801) |= (((*l_2799) = l_2742) != (void*)0)))))
            {
                unsigned l_2807 = 1UL;
                for (g_944 = (-16); (g_944 > 32); ++g_944)
                {
                    unsigned char l_2806 = 0xD6L;
                    for (g_517 = 7; (g_517 > 50); g_517 = safe_add_func_int8_t_s_s(g_517, 5))
                    {
                        (**g_1219) |= l_2806;
                    }
                }
                return l_2807;
            }
            else
            {
                int l_2809 = (-10L);
                int *l_2811 = &l_2756;
                int l_2819 = 0x6E198F28L;
                int l_2820 = 0L;
                int l_2821 = (-1L);
                int l_2822 = 6L;
                int l_2823 = 0x07F0BEE0L;
                (*l_2722) |= (*l_2727);
                (*l_2730) |= ((((***g_2188) >= l_2542) < l_2808) || l_2809);
                if ((0xF9L || l_2744))
                {
                    (*l_2697) = (l_2810 = l_2732);
                    l_2811 = l_2811;
                    for (g_1074 = 0; (g_1074 <= 15); g_1074 = safe_add_func_uint32_t_u_u(g_1074, 8))
                    {
                        unsigned l_2817 = 18446744073709551615UL;
                        (*l_2713) = (**g_1219);
                        (*l_2752) = ((l_2817 = (safe_add_func_int32_t_s_s((*l_2764), (((l_2816 = (void*)0) != &g_2280) > (*g_1127))))) && (***g_2188));
                        (*l_2715) = l_2818;
                    }
                    return g_2554;
                }
                else
                {
                    int *l_2824 = (void*)0;
                    int *l_2825 = &l_2771;
                    int *l_2826 = &l_2336;
                    int *l_2827 = &l_2335;
                    int *l_2828 = &l_2732;
                    int *l_2829 = &l_2624;
                    int *l_2830 = &g_899;
                    int *l_2831 = &l_2771;
                    int *l_2832 = (void*)0;
                    int *l_2833 = &l_2681;
                    int *l_2834 = (void*)0;
                    int *l_2835 = &l_2755;
                    int *l_2836 = &l_2492;
                    int *l_2837 = &l_2624;
                    int *l_2838 = (void*)0;
                    int *l_2839 = &g_2524;
                    int *l_2840 = &l_2756;
                    int *l_2841 = &l_2755;
                    int *l_2842 = &l_2335;
                    int *l_2843 = (void*)0;
                    int *l_2844 = &l_2810;
                    int *l_2845 = &l_2360;
                    int *l_2846 = &l_2756;
                    int *l_2847 = &l_2335;
                    int *l_2848 = &g_2524;
                    int *l_2849 = &l_2740;
                    int *l_2850 = &l_2624;
                    int *l_2851 = (void*)0;
                    int *l_2852 = &l_2360;
                    int *l_2853 = (void*)0;
                    int *l_2854 = &l_2681;
                    int *l_2855 = (void*)0;
                    int *l_2856 = &g_552;
                    int *l_2857 = &l_2335;
                    int *l_2858 = &l_2652;
                    int *l_2859 = &l_2823;
                    int *l_2860 = &l_2529;
                    int *l_2861 = &l_2732;
                    int *l_2862 = &g_1074;
                    ++l_2863;
                    (*l_2706) = (*g_1220);
                    (*l_2716) = ((*l_2731) | (*l_2695));
                }
                (*g_1219) = (*g_1219);
            }

            ;
            if (((l_2875 != &l_2678) < (safe_lshift_func_int16_t_s_u((**g_2288), 8))))
            {
                int l_2878 = 2L;
                unsigned char *l_2883 = (void*)0;
                unsigned char *l_2886 = (void*)0;
                unsigned char *l_2889 = &l_2542;
                int l_2890 = 0xD74A2A32L;
                (*l_2719) = (l_2878 >= (((**g_2189) = (safe_lshift_func_uint16_t_u_u(l_2810, (~(**g_2189))))) ^ (((((safe_mod_func_uint8_t_u_u(func_50((*g_1349), ((((((*g_1349) & (g_798 = (*l_2753))) & ((safe_mul_func_uint8_t_u_u((l_2887 = l_2794), ((*l_2889) &= l_2888))) > (l_2890 |= (*g_1349)))) == (-1L)) || l_2756) && (-1L)), (*l_2678), (*g_1127)), l_2878)) || (**g_1348)) && l_2335) >= l_2878) ^ (**g_1219))));
                (*l_2693) = 0x662E0621L;
            }
            else
            {
                return g_2137;
            }
            for (l_2681 = 0; (l_2681 >= 3); ++l_2681)
            {
                unsigned short *l_2897 = &l_2863;
                int l_2910 = 0xB8400C73L;
                unsigned **l_2923 = &l_2800;
                unsigned *l_2924 = &g_1462;
                l_2898 = &l_2771;

                ;
                if ((safe_div_func_uint16_t_u_u(((*g_2296) == (l_2901 = (*g_2296))), (+(l_2902 && ((*g_229)--))))))
                {
                    int *l_2905 = &l_2641;
                    int **l_2906 = &l_2715;
                    (*l_2906) = l_2905;

                    ;
                    for (l_2756 = 25; (l_2756 >= 0); --l_2756)
                    {
                        return g_880;
                    }
                }
                else
                {
                    char l_2911 = (-1L);
                    unsigned short *l_2922 = &g_77;
                    const unsigned l_2925 = 0x4D30A89EL;
                    --g_2914;
                    (*l_2728) = l_2910;
                    for (l_2810 = (-7); (l_2810 >= (-7)); ++l_2810)
                    {
                        (*l_2766) ^= (~((*l_2705) &= (((*g_1349) = ((*g_1114) != ((*l_2875) = (**g_1113)))) == (func_50((safe_div_func_int32_t_s_s((&g_1219 != &g_2280), l_2921)), ((void*)0 == l_2922), l_2924, l_2925) <= 0x5CL))));

                        ;
                    }
                }

                ;
            }

            ;
            ;
            ;
            ;
            l_2927--;
        }

        ;
        ;
        ;
        ;
    }


    ;
    ;

    ;
    return l_2930;
}







static char func_21(unsigned short p_22, unsigned * p_23)
{
    unsigned short l_1477 = 0UL;
    char l_1480 = 0x97L;
    unsigned l_1485 = 0x5EF8645BL;
    char **l_1486 = (void*)0;
    int l_1494 = 0x47795A87L;
    int l_1504 = 1L;
    int l_1514 = 1L;
    unsigned **l_1581 = &g_47;
    int *l_1602 = &g_99;
    unsigned short **l_1643 = &g_229;
    int l_1657 = 0x2D816DC5L;
    short *l_2043 = &g_146;
    unsigned char **l_2063 = (void*)0;
    int l_2098 = 0x91048B4AL;
    short l_2112 = 0xAEEEL;
    int l_2124 = 0x001D0B6DL;
    int l_2147 = (-6L);
    int l_2149 = 7L;
    int l_2161 = 2L;
    unsigned short l_2174 = 0x1D28L;
    unsigned l_2182 = 0xFC3974DFL;
    unsigned short ***l_2283 = (void*)0;
    if ((safe_lshift_func_int8_t_s_u(((void*)0 != (*g_806)), 7)))
    {
        return (*g_1349);
    }
    else
    {
        int **l_1467 = (void*)0;
        int **l_1468 = &g_262;
        char *l_1478 = &g_81;
        char *l_1479 = &g_79;
        char *l_1481 = &g_1482;
        unsigned short *l_1483 = &g_465;
        int *l_1484 = &g_1074;
        int l_1503 = 0xBF1079D3L;
        int l_1519 = (-1L);
        int l_1563 = 0xC4BA1C05L;
        int l_1565 = 7L;
        unsigned l_1661 = 0x81974AB8L;
        unsigned char ** const l_1669 = &g_807;
        unsigned **l_2034 = &g_47;
        unsigned l_2062 = 0x78695A10L;
        unsigned char **l_2065 = &g_807;
        char l_2083 = 0x6CL;
        (*l_1468) = p_23;

        ;
        (**g_1219) = (!(((***g_1114) = (safe_mul_func_uint16_t_u_u((*g_229), (safe_add_func_int32_t_s_s(((*l_1484) ^= (safe_lshift_func_uint16_t_u_u((~((*l_1483) &= ((((**g_1348) = 0L) <= ((((p_22 || 0x3ABFL) < (p_22 & (safe_add_func_uint8_t_u_u(((((*l_1479) = ((*l_1478) = l_1477)) ^ p_22) ^ p_22), func_50(((*l_1481) |= (func_50((**l_1468), p_22, (*g_46), l_1477) & l_1480)), p_22, (*g_46), (****g_655)))))) == l_1477) != p_22)) && p_22))), 7))), (-10L)))))) || l_1485));
        if (((**l_1468) = (l_1486 != &g_1349)))
        {
            int *l_1487 = &g_899;
            int *l_1488 = &g_1074;
            int *l_1489 = &g_552;
            int *l_1490 = &g_552;
            int *l_1491 = (void*)0;
            int *l_1492 = (void*)0;
            int *l_1493 = (void*)0;
            int *l_1495 = &g_99;
            int *l_1496 = &g_552;
            int *l_1497 = &g_552;
            int *l_1498 = &g_552;
            int *l_1499 = &g_552;
            int *l_1500 = &g_1074;
            int *l_1501 = (void*)0;
            int *l_1502 = &g_552;
            int *l_1505 = &g_99;
            int l_1506 = 0L;
            int *l_1507 = &l_1503;
            int *l_1508 = &g_899;
            int *l_1509 = (void*)0;
            int *l_1510 = &g_1074;
            int *l_1511 = (void*)0;
            int *l_1512 = (void*)0;
            int *l_1513 = &g_552;
            int *l_1515 = &l_1514;
            int *l_1516 = &l_1506;
            int *l_1517 = &g_1074;
            int *l_1518 = &g_899;
            int *l_1520 = &g_899;
            int *l_1521 = &l_1504;
            int *l_1522 = &l_1514;
            int *l_1523 = (void*)0;
            int *l_1524 = &g_899;
            int *l_1525 = &l_1494;
            int *l_1526 = &g_552;
            int *l_1527 = &l_1494;
            int *l_1528 = &g_99;
            int *l_1529 = (void*)0;
            int *l_1530 = &l_1519;
            int *l_1531 = (void*)0;
            int *l_1532 = (void*)0;
            int *l_1533 = &g_99;
            int *l_1534 = &l_1519;
            int *l_1535 = &l_1504;
            int *l_1536 = &l_1514;
            int *l_1537 = &l_1519;
            int *l_1538 = &g_552;
            int *l_1539 = &g_1074;
            int *l_1540 = &l_1504;
            int *l_1541 = &l_1503;
            int *l_1542 = (void*)0;
            int *l_1543 = &g_552;
            int l_1544 = 0xE1CDCF9DL;
            int *l_1545 = &l_1506;
            int *l_1546 = &l_1544;
            int *l_1547 = &g_552;
            int *l_1548 = &g_1074;
            int *l_1549 = &l_1519;
            int *l_1550 = &l_1514;
            int *l_1551 = &g_552;
            int *l_1552 = &l_1504;
            int *l_1553 = (void*)0;
            int *l_1554 = &l_1503;
            int *l_1555 = &l_1503;
            int *l_1556 = &g_899;
            int *l_1557 = &l_1514;
            int *l_1558 = &l_1503;
            int *l_1559 = &l_1514;
            int *l_1560 = &l_1494;
            int *l_1561 = &l_1504;
            int *l_1562 = &l_1506;
            int *l_1564 = &l_1563;
            int *l_1566 = &l_1504;
            int *l_1567 = &g_899;
            int *l_1568 = &g_899;
            int *l_1569 = &l_1504;
            int *l_1570 = &l_1503;
            int *l_1571 = &l_1514;
            int *l_1572 = &l_1565;
            int *l_1573 = &l_1519;
            int *l_1574 = (void*)0;
            int *l_1575 = &l_1519;
            int *l_1576 = &l_1565;
            unsigned **l_1580 = &g_619;
            unsigned l_1598 = 3UL;
            unsigned ****l_1614 = &g_1114;
            unsigned char *l_1647 = (void*)0;
            ++g_1577;
            if (((p_22 || func_27(l_1580, p_23, l_1581, (+((0xC42365C0L < ((safe_mul_func_uint16_t_u_u((((*g_229) = (func_50((*g_1349), g_1584, (*g_618), g_1585) && (**g_46))) | g_605), g_1184)) || g_1482)) ^ g_868)), p_22)) ^ g_536))
            {
                int l_1595 = 0xB0E07202L;
                if (((*g_229) > ((*l_1496) >= 0x27DC3925L)))
                {
                    int l_1588 = 0x9A762C2CL;
                    unsigned short *l_1589 = (void*)0;
                    unsigned char *l_1594 = &g_85;
                    (*l_1500) ^= (safe_rshift_func_int8_t_s_u((l_1588 != ((void*)0 != l_1589)), (safe_sub_func_int32_t_s_s(((*g_229) >= (safe_rshift_func_int8_t_s_u(((**g_1348) = ((*l_1478) |= ((((*l_1594) = 1UL) ^ (*g_1349)) <= func_50(((*g_1349) < 1L), l_1595, (***g_1113), (***g_1114))))), 4))), p_22))));
                }
                else
                {
                    int *l_1601 = &l_1514;
                    (*l_1468) = (void*)0;

                    ;
                    for (g_238 = 0; (g_238 > 19); g_238 = safe_add_func_uint32_t_u_u(g_238, 8))
                    {
                        (**g_1219) ^= 0x18B49FA6L;
                        l_1598++;
                        l_1602 = l_1601;

                        ;
                    }

                    ;
                    (*l_1468) = &l_1494;

                    ;
                }

                ;
                ;
                for (l_1598 = 3; (l_1598 == 43); l_1598 = safe_add_func_uint8_t_u_u(l_1598, 9))
                {
                    unsigned l_1605 = 4294967295UL;
                    int * const l_1610 = &g_1074;
                    unsigned ** const *l_1616 = &l_1580;
                    unsigned ** const **l_1615 = &l_1616;
                    l_1605++;
                    for (g_85 = 3; (g_85 != 38); g_85 = safe_add_func_int32_t_s_s(g_85, 9))
                    {
                        int **l_1611 = &l_1570;
                        (*l_1611) = l_1610;

                        ;
                        (*l_1508) = ((*l_1525) = (safe_rshift_func_int8_t_s_s(((&g_1219 == (void*)0) >= (l_1614 != l_1615)), (func_50(((p_22 < (~(func_27((**g_1113), func_24((--(****l_1615)), ((safe_lshift_func_uint8_t_u_s(p_22, 6)) == p_22)), (*g_1114), g_85, (**l_1611)) != p_22))) | p_22), p_22, l_1484, (**l_1611)) | 0x107BL))));

                        ;
                        (*g_1220) = p_22;
                    }
                    (*l_1522) = 1L;
                }

                ;
                (*l_1496) |= (*g_1220);
            }
            else
            {
                unsigned l_1633 = 7UL;
                int l_1655 = 0xACA04D73L;
                unsigned char *l_1659 = &g_798;
                if ((((safe_add_func_uint32_t_u_u(((*p_23) ^= (--(****g_655))), p_22)) ^ ((+(g_83 < (safe_div_func_uint16_t_u_u((*l_1484), (p_22 & ((safe_add_func_int16_t_s_s(g_223, ((*g_229)--))) > ((((***l_1614) = p_23) == p_23) & p_22))))))) & ((*l_1554) = (safe_add_func_uint8_t_u_u(((*l_1498) = 255UL), 0x41L))))) & (**g_1348)))
                {
                    int * const * const l_1652 = &l_1557;
                    unsigned char *l_1658 = (void*)0;
                    char ***l_1660 = &g_1348;
                    unsigned **l_1666 = &g_47;
                    short l_1677 = (-4L);
                    l_1633++;
                    for (p_22 = 15; (p_22 < 42); p_22 = safe_add_func_uint32_t_u_u(p_22, 2))
                    {
                        int l_1640 = 0xF52462DBL;
                        unsigned short **l_1642 = &l_1483;
                        unsigned short ***l_1641 = &l_1642;
                        unsigned *l_1644 = &g_517;
                        const unsigned *l_1656 = &g_12;
                        if ((*g_262))
                            break;
                        (*l_1569) ^= ((func_27(func_33(p_22, (safe_lshift_func_int16_t_s_s((g_1184 >= l_1640), 0)), (((*l_1641) = &l_1483) == l_1643)), l_1644, (*g_1114), g_517, l_1640) < 1UL) <= p_22);

                        ;
                        (*l_1575) = (safe_mul_func_int8_t_s_s(((*l_1569) || p_22), 1UL));
                    }
                    if (l_1661)
                    {
                        unsigned char *l_1678 = (void*)0;
                        unsigned char *l_1679 = &g_85;
                        int l_1680 = 1L;
                        g_1074 ^= (safe_div_func_int8_t_s_s(((((safe_rshift_func_uint8_t_u_u(((-1L) > (-1L)), 4)) == (func_27(l_1666, (**g_1114), func_33((safe_lshift_func_int8_t_s_s((**l_1652), 4)), ((p_22 != (func_27((*g_1114), (**g_1114), func_33(p_22, g_187, g_536), (*l_1543), (*g_262)) >= (*l_1545))) || p_22), g_83), (**l_1652), g_1584) > 1UL)) >= 0L) < 65535UL), 0x7CL));

                        ;
                        (*l_1507) ^= ((((l_1680 | (*g_1349)) || (*g_1220)) < (*g_229)) < (*l_1484));
                    }
                    else
                    {
                        (*l_1555) = p_22;
                    }
                }
                else
                {
                    unsigned **l_1681 = (void*)0;
                    int *l_1682 = &l_1565;
                    (*l_1468) = l_1682;

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
            unsigned short * const l_1691 = &l_1477;
            int l_1695 = 0x2F532AFEL;
            unsigned char l_1697 = 1UL;
            int *l_1723 = (void*)0;
            int l_1831 = (-4L);
            char **l_2036 = &l_1481;
            short l_2061 = 0xD237L;
            unsigned char ***l_2064 = &g_806;
            const int *l_2066 = &g_2067;
            const int *l_2069 = (void*)0;
            const int **l_2068 = &l_2069;
            int *l_2070 = (void*)0;
            int *l_2071 = &g_99;
            int *l_2072 = &l_1695;
            int *l_2073 = &l_1563;
            int *l_2074 = &g_899;
            int *l_2075 = &l_1565;
            int *l_2076 = (void*)0;
            int *l_2077 = &l_1494;
            int *l_2078 = &g_1074;
            int *l_2079 = (void*)0;
            int *l_2080 = &l_1695;
            int *l_2081 = &l_1494;
            int *l_2082 = (void*)0;
            int *l_2084 = &l_1494;
            int *l_2085 = &l_1563;
            int *l_2086 = &l_1563;
            int *l_2087 = &g_899;
            int *l_2088 = &g_99;
            int *l_2089 = (void*)0;
            int *l_2090 = &l_1565;
            int *l_2091 = &l_1514;
            int *l_2092 = (void*)0;
            int *l_2093 = &l_1503;
            int *l_2094 = &l_1514;
            int *l_2095 = &l_1519;
            int *l_2096 = &g_899;
            int *l_2097 = &l_1695;
            int *l_2099 = &l_1503;
            int *l_2100 = &g_899;
            int l_2101 = 0x821DE3CEL;
            int *l_2102 = (void*)0;
            int *l_2103 = &l_1563;
            int *l_2104 = &l_1695;
            int *l_2105 = &g_99;
            int *l_2106 = (void*)0;
            int *l_2107 = &l_1494;
            int *l_2108 = &g_1074;
            int *l_2109 = (void*)0;
            int *l_2110 = &l_2098;
            int *l_2111 = &l_1503;
            int l_2113 = (-6L);
            int *l_2114 = &g_899;
            int *l_2115 = &l_2101;
            int *l_2116 = &l_1831;
            int *l_2117 = &l_1695;
            int *l_2118 = &l_2113;
            int *l_2119 = &l_2113;
            int *l_2120 = (void*)0;
            int *l_2121 = &l_1519;
            int *l_2122 = &l_1504;
            int *l_2123 = &l_1494;
            int *l_2125 = &l_1519;
            int *l_2126 = &l_2098;
            int *l_2127 = (void*)0;
            int *l_2128 = &g_552;
            int *l_2129 = &l_1695;
            int *l_2130 = &l_1514;
            int l_2131 = 0x6DABDE0EL;
            int *l_2132 = &l_1563;
            int *l_2133 = (void*)0;
            int *l_2134 = &l_1504;
            int *l_2135 = &l_1519;
            int *l_2136 = &g_1074;
            int *l_2138 = &l_1514;
            int *l_2139 = &g_1074;
            int *l_2140 = &g_1074;
            int *l_2141 = (void*)0;
            int *l_2142 = (void*)0;
            int *l_2143 = &g_552;
            int *l_2144 = (void*)0;
            int *l_2145 = &l_1503;
            int *l_2146 = &l_1565;
            int *l_2148 = &l_1494;
            int *l_2150 = &g_899;
            int *l_2151 = (void*)0;
            for (g_605 = 0; (g_605 > 17); ++g_605)
            {
                int l_1700 = 1L;
                int l_1766 = 0L;
                int l_1768 = 0x247BA2A5L;
                int l_1799 = 0xEA84DC18L;
                int l_1851 = (-6L);
                int l_1883 = (-1L);
                int l_1897 = (-1L);
                int l_1898 = (-1L);
                char **l_2035 = &g_1349;
                unsigned *l_2044 = &g_1462;
                unsigned char * const l_2056 = (void*)0;
                for (g_72 = 0; (g_72 <= 35); g_72 = safe_add_func_int8_t_s_s(g_72, 6))
                {
                    int l_1692 = 0x3B70AD0EL;
                    char **l_1726 = (void*)0;
                    char l_1794 = 2L;
                    int l_1850 = 6L;
                    int l_1868 = (-1L);
                    int l_1952 = 1L;
                    unsigned **l_2033 = &g_47;
                    unsigned ****l_2047 = (void*)0;
                    (**l_1468) = (l_1692 = (safe_mod_func_int16_t_s_s(g_659, (safe_mod_func_uint8_t_u_u((((*l_1643) = &g_393) == l_1691), p_22)))));

                    ;
                    if (((safe_add_func_int16_t_s_s(l_1695, ((**l_1468) < p_22))) == 0x10L))
                    {
                        char l_1696 = 1L;
                        unsigned char *l_1721 = (void*)0;
                        unsigned char *l_1722 = &l_1697;
                        (*l_1468) = p_23;
                        --l_1697;
                        (*l_1484) ^= (p_22 > (l_1700 == (((safe_mul_func_uint16_t_u_u((0xAEAE3047L < ((*l_1602) = (safe_sub_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(g_283, (safe_unary_minus_func_uint16_t_u(l_1692)))) || (safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((!(safe_mod_func_int16_t_s_s(l_1692, (safe_div_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(0x84FFL, (safe_unary_minus_func_int16_t_s(1L)))) || ((*l_1722) = ((void*)0 != &g_262))), (*g_229)))))) > 4L), g_930)), 0xFB49L))), p_22)))), p_22)) || p_22) > p_22)));
                    }
                    else
                    {
                        char ***l_1727 = &l_1486;
                        int *l_1728 = &l_1503;
                        int *l_1729 = &l_1565;
                        int *l_1730 = &l_1565;
                        int *l_1731 = &l_1519;
                        int *l_1732 = &l_1503;
                        int *l_1733 = &l_1503;
                        int *l_1734 = (void*)0;
                        int *l_1735 = &l_1494;
                        int *l_1736 = &g_552;
                        int *l_1737 = &l_1503;
                        int *l_1738 = (void*)0;
                        int *l_1739 = &l_1519;
                        int *l_1740 = &l_1494;
                        int *l_1741 = &l_1519;
                        int *l_1742 = &l_1565;
                        int *l_1743 = (void*)0;
                        int *l_1744 = &l_1700;
                        int *l_1745 = &l_1503;
                        int *l_1746 = &l_1503;
                        int *l_1747 = &l_1494;
                        int *l_1748 = &l_1695;
                        int *l_1749 = &l_1504;
                        int *l_1750 = &g_1074;
                        int *l_1751 = (void*)0;
                        int *l_1752 = &l_1695;
                        int *l_1753 = &l_1700;
                        int *l_1754 = &l_1519;
                        int *l_1755 = &l_1519;
                        int *l_1756 = &l_1503;
                        int *l_1757 = &l_1695;
                        int *l_1758 = &l_1494;
                        int *l_1759 = &g_552;
                        int *l_1760 = &l_1700;
                        int *l_1761 = &g_1074;
                        int *l_1762 = &l_1504;
                        int *l_1763 = &l_1565;
                        int *l_1764 = &l_1692;
                        int *l_1765 = &l_1700;
                        int *l_1767 = &l_1563;
                        int *l_1769 = &g_99;
                        int *l_1770 = &l_1695;
                        int *l_1771 = &l_1514;
                        int *l_1772 = (void*)0;
                        int *l_1773 = &g_552;
                        int *l_1774 = &l_1692;
                        int *l_1775 = &l_1503;
                        int *l_1776 = &g_552;
                        int *l_1777 = &g_552;
                        int *l_1778 = (void*)0;
                        int *l_1779 = &l_1565;
                        int *l_1780 = &l_1700;
                        int *l_1781 = (void*)0;
                        int *l_1782 = &g_1074;
                        int *l_1783 = &l_1514;
                        int *l_1784 = &l_1519;
                        int *l_1785 = &l_1700;
                        int *l_1786 = &l_1700;
                        int *l_1787 = &l_1768;
                        int *l_1788 = &g_899;
                        int *l_1789 = &g_1074;
                        int *l_1790 = &g_899;
                        int *l_1791 = &g_99;
                        int *l_1792 = (void*)0;
                        int *l_1793 = &l_1519;
                        int *l_1795 = &l_1766;
                        int *l_1796 = &l_1494;
                        int *l_1797 = &l_1494;
                        int *l_1798 = &l_1563;
                        int *l_1800 = &g_552;
                        int *l_1801 = (void*)0;
                        int *l_1802 = &l_1768;
                        int *l_1803 = (void*)0;
                        int *l_1804 = &l_1766;
                        int *l_1805 = &l_1494;
                        int *l_1806 = &l_1504;
                        int *l_1807 = (void*)0;
                        int *l_1808 = &l_1766;
                        int *l_1809 = &l_1494;
                        int *l_1810 = &l_1519;
                        int *l_1811 = &l_1514;
                        int *l_1812 = &g_99;
                        int *l_1813 = &g_1074;
                        int *l_1814 = (void*)0;
                        int *l_1815 = &l_1519;
                        int *l_1816 = &l_1768;
                        int *l_1817 = &l_1695;
                        int *l_1818 = &l_1503;
                        int *l_1819 = &l_1766;
                        int *l_1820 = (void*)0;
                        int *l_1821 = &l_1519;
                        int *l_1822 = &l_1700;
                        int *l_1823 = &l_1504;
                        int *l_1824 = &g_1074;
                        int *l_1825 = &l_1494;
                        int *l_1826 = &l_1503;
                        int *l_1827 = &l_1504;
                        int *l_1828 = &l_1565;
                        int *l_1829 = &l_1519;
                        int *l_1830 = &l_1799;
                        int *l_1832 = &l_1695;
                        int *l_1833 = (void*)0;
                        int *l_1834 = &l_1695;
                        int *l_1835 = &l_1504;
                        int *l_1836 = &l_1768;
                        int *l_1837 = &g_899;
                        int *l_1838 = &l_1692;
                        int *l_1839 = (void*)0;
                        int *l_1840 = (void*)0;
                        int *l_1841 = (void*)0;
                        int *l_1842 = (void*)0;
                        int *l_1843 = &l_1700;
                        int *l_1844 = &l_1503;
                        int *l_1845 = &l_1831;
                        int *l_1846 = &l_1494;
                        int *l_1847 = &l_1563;
                        int *l_1848 = &l_1766;
                        int *l_1849 = &l_1563;
                        int *l_1852 = (void*)0;
                        int *l_1853 = &l_1563;
                        int *l_1854 = &l_1519;
                        int *l_1855 = &l_1831;
                        int *l_1856 = &l_1494;
                        int *l_1857 = (void*)0;
                        int *l_1858 = &l_1503;
                        int *l_1859 = &l_1695;
                        int *l_1860 = &l_1565;
                        int *l_1861 = (void*)0;
                        int *l_1862 = &l_1519;
                        int *l_1863 = &l_1514;
                        int *l_1864 = &l_1514;
                        int *l_1865 = &l_1695;
                        int *l_1866 = &l_1503;
                        int *l_1867 = (void*)0;
                        int *l_1869 = &l_1766;
                        int *l_1870 = &g_99;
                        int *l_1871 = &l_1692;
                        int *l_1872 = &l_1514;
                        int *l_1873 = &g_552;
                        int *l_1874 = &l_1695;
                        int *l_1875 = &l_1695;
                        int *l_1876 = (void*)0;
                        int *l_1877 = (void*)0;
                        int *l_1878 = &l_1514;
                        int *l_1879 = (void*)0;
                        int *l_1880 = (void*)0;
                        int *l_1881 = &l_1514;
                        int *l_1882 = (void*)0;
                        int *l_1884 = &l_1851;
                        int *l_1885 = (void*)0;
                        int *l_1886 = &l_1563;
                        int *l_1887 = (void*)0;
                        int *l_1888 = &l_1831;
                        int *l_1889 = &l_1700;
                        int *l_1890 = &l_1868;
                        int *l_1891 = (void*)0;
                        int *l_1892 = &g_899;
                        int *l_1893 = &l_1565;
                        int *l_1894 = &l_1831;
                        int *l_1895 = &l_1768;
                        int *l_1896 = &l_1695;
                        int *l_1899 = &l_1494;
                        int *l_1900 = &l_1514;
                        l_1723 = (*l_1468);

                        ;
                        (*g_1220) = (safe_mod_func_uint8_t_u_u(((p_23 = ((*g_618) = (***g_1113))) == (*g_46)), p_22));
                        (*l_1727) = l_1726;
                        ++g_1901;
                    }
                    if (((safe_rshift_func_int8_t_s_s((p_22 && p_22), 0)) <= 0xB4F1L))
                    {
                        unsigned short l_1906 = 0x375FL;
                        int *l_1907 = &l_1494;
                        int *l_1908 = (void*)0;
                        int *l_1909 = &l_1766;
                        int *l_1910 = &l_1868;
                        int *l_1911 = (void*)0;
                        int l_1912 = 3L;
                        int *l_1913 = &l_1494;
                        int *l_1914 = &l_1519;
                        int *l_1915 = &l_1768;
                        int *l_1916 = &l_1565;
                        int *l_1917 = (void*)0;
                        int *l_1918 = &l_1504;
                        int *l_1919 = (void*)0;
                        int *l_1920 = &l_1868;
                        int *l_1921 = &l_1768;
                        int *l_1922 = &l_1494;
                        int *l_1923 = (void*)0;
                        int *l_1924 = (void*)0;
                        int *l_1925 = &l_1504;
                        int *l_1926 = &l_1494;
                        int *l_1927 = (void*)0;
                        int *l_1928 = (void*)0;
                        int *l_1929 = &g_1074;
                        int *l_1930 = &l_1868;
                        int *l_1931 = &g_899;
                        int *l_1932 = &l_1850;
                        int *l_1933 = &l_1503;
                        int *l_1934 = &l_1503;
                        int *l_1935 = (void*)0;
                        int *l_1936 = &l_1851;
                        int *l_1937 = &l_1700;
                        int *l_1938 = &g_899;
                        int *l_1939 = &l_1850;
                        int *l_1940 = &l_1883;
                        int *l_1941 = &l_1563;
                        int *l_1942 = (void*)0;
                        int *l_1943 = &l_1503;
                        int *l_1944 = &l_1494;
                        int *l_1945 = &l_1700;
                        int *l_1946 = &g_99;
                        int *l_1947 = &l_1700;
                        int *l_1948 = &l_1898;
                        int *l_1949 = &l_1831;
                        int l_1950 = 0x72F1860BL;
                        int *l_1951 = &l_1565;
                        int *l_1953 = &g_552;
                        int *l_1954 = (void*)0;
                        int *l_1955 = &l_1897;
                        int *l_1956 = &l_1898;
                        int *l_1957 = (void*)0;
                        int *l_1958 = &l_1831;
                        int *l_1959 = (void*)0;
                        int *l_1960 = &g_552;
                        int *l_1961 = (void*)0;
                        int *l_1962 = &l_1503;
                        int l_1963 = 0L;
                        int *l_1964 = (void*)0;
                        int *l_1965 = &l_1898;
                        int *l_1966 = &l_1831;
                        int *l_1967 = &l_1883;
                        int *l_1968 = &l_1692;
                        int *l_1969 = &l_1799;
                        int *l_1970 = &g_99;
                        int *l_1971 = &l_1504;
                        int *l_1972 = &g_99;
                        int *l_1973 = &l_1565;
                        int *l_1974 = (void*)0;
                        int *l_1975 = &l_1831;
                        int *l_1976 = &l_1963;
                        int *l_1977 = (void*)0;
                        int *l_1978 = &l_1700;
                        int *l_1979 = &l_1565;
                        int *l_1980 = (void*)0;
                        int *l_1981 = (void*)0;
                        int *l_1982 = (void*)0;
                        int *l_1983 = (void*)0;
                        int *l_1984 = (void*)0;
                        int *l_1985 = (void*)0;
                        int *l_1986 = &g_552;
                        int *l_1987 = &l_1851;
                        int *l_1988 = (void*)0;
                        int *l_1989 = &l_1963;
                        int l_1990 = (-1L);
                        int *l_1992 = (void*)0;
                        int *l_1993 = &l_1695;
                        int *l_1994 = (void*)0;
                        int *l_1995 = &l_1950;
                        int *l_1996 = (void*)0;
                        int *l_1997 = &g_899;
                        int *l_1998 = &l_1950;
                        int *l_1999 = (void*)0;
                        int *l_2000 = &l_1514;
                        int *l_2001 = &l_1950;
                        int *l_2002 = (void*)0;
                        int *l_2003 = &l_1494;
                        int *l_2004 = &l_1519;
                        int *l_2005 = &l_1519;
                        int *l_2006 = (void*)0;
                        int *l_2007 = &l_1565;
                        int *l_2008 = (void*)0;
                        int *l_2009 = &l_1851;
                        int *l_2010 = &l_1494;
                        int *l_2011 = &g_552;
                        int *l_2012 = &l_1850;
                        int *l_2013 = &l_1851;
                        int *l_2014 = &l_1514;
                        int *l_2015 = &l_1898;
                        int *l_2016 = &l_1912;
                        int *l_2017 = &l_1494;
                        int *l_2018 = &l_1519;
                        int *l_2019 = &l_1831;
                        int *l_2020 = &l_1766;
                        int *l_2021 = &l_1692;
                        int *l_2022 = &l_1692;
                        int *l_2023 = &l_1514;
                        int *l_2024 = (void*)0;
                        int *l_2026 = &l_1950;
                        int *l_2027 = (void*)0;
                        int *l_2028 = &l_1563;
                        int *l_2029 = &l_1897;
                        (*g_1220) ^= ((**l_1468) = l_1906);
                        (*g_1219) = (*g_1219);
                        (*g_1219) = (*g_1219);
                        ++g_2030;
                    }
                    else
                    {
                        unsigned char *l_2037 = &g_83;
                        int *l_2038 = &l_1565;
                        const short *l_2053 = (void*)0;
                        const short **l_2052 = &l_2053;
                        short **l_2054 = (void*)0;
                        short **l_2055 = &l_2043;
                        (*l_2038) |= (((l_1851 && ((void*)0 != l_2033)) && func_27(l_2034, p_23, ((**g_1113) = func_33((0x376585A1L != (l_2035 != l_2036)), (((*l_2037) = 0x30L) | 0x35L), g_659)), g_1074, p_22)) < p_22);
                        (**g_1219) = ((safe_mul_func_int16_t_s_s(g_868, ((*l_1483) ^= ((*l_1691) = (*g_229))))) & (safe_add_func_uint16_t_u_u(0UL, (((*l_1484) &= func_50(((l_2043 != (void*)0) ^ (**g_1219)), (*g_1349), ((***g_1113) = l_2044), (safe_div_func_int8_t_s_s((((void*)0 == l_2047) >= (*g_262)), p_22)))) ^ (*l_2038)))));

                        ;
                        if ((*g_1220))
                            continue;
                        (**g_1219) = func_27(func_33((((safe_add_func_int8_t_s_s((*l_1602), (**l_1468))) > (***g_1114)) | (((((l_1868 != p_22) || (safe_rshift_func_int8_t_s_s(p_22, ((((*l_2052) = l_1483) == ((*l_2055) = l_2043)) && ((void*)0 == l_2056))))) & l_1794) | (***g_656)) || 0x3AC3BC38L)), g_930, p_22), (***g_1113), (**g_1113), (*l_1602), l_1850);

                        ;
                        ;
                    }
                }
                for (g_393 = 4; (g_393 == 31); g_393 = safe_add_func_int16_t_s_s(g_393, 1))
                {
                    (*g_1219) = (*g_1219);
                    return l_2061;
                }
                l_2062 = (+(&g_229 == &l_1691));
            }

            ;
            ;
            ;
            ;
            ;
            ;
            (**g_1219) &= (((*l_2064) = l_2063) == (l_2065 = l_2063));

            ;
            ;
            (*l_2068) = (l_2066 = func_24((*l_1602), g_1577));

            ;
            ;
            g_2152--;
        }

        ;
        ;
        ;
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
    ;
    ;
    if ((**g_1219))
    {
        int **l_2155 = &l_1602;
        unsigned short ***l_2156 = &l_1643;
        const unsigned short *l_2159 = &g_393;
        const unsigned short **l_2158 = &l_2159;
        const unsigned short ***l_2157 = &l_2158;
        const unsigned short ****l_2160 = &l_2157;
        unsigned ***l_2168 = &g_46;
        int *l_2169 = &l_2098;
        (*l_2155) = p_23;

        ;
        (*l_2169) |= (((**l_2155) == ((g_1074 = (*g_1220)) && ((l_2156 != ((*l_2160) = l_2157)) >= (l_2161 <= (safe_lshift_func_int8_t_s_u((((**g_1219) >= (safe_div_func_uint8_t_u_u(((((safe_add_func_uint16_t_u_u((*l_1602), (((*g_1113) = l_2168) == (void*)0))) >= 0xDC11L) >= p_22) ^ 1UL), 0xD9L))) || (*g_229)), 5)))))) | 1L);
    }
    else
    {
        unsigned char l_2177 = 1UL;
        unsigned short *l_2183 = &l_1477;
        unsigned *l_2186 = &g_12;
        unsigned short ***l_2187 = &l_1643;
        int *l_2197 = &l_2149;
        unsigned short l_2203 = 65529UL;
        unsigned **l_2207 = &g_619;
        unsigned ****l_2275 = (void*)0;
        (**g_1219) &= (safe_mul_func_uint16_t_u_u(((*g_229)++), ((*l_2183) = (+((l_2174 = (0xA1L | 0L)) ^ (safe_lshift_func_uint16_t_u_u(l_2177, func_27(l_1581, (*g_618), l_1581, (p_22 <= (safe_mod_func_uint32_t_u_u((g_1074 < (safe_add_func_uint8_t_u_u(l_2182, p_22))), 4294967295UL))), (*l_1602)))))))));

        ;
        (*l_1602) = (l_2177 < ((safe_mod_func_uint16_t_u_u(func_27((**g_1113), l_2186, &l_2186, ((*l_2043) = (l_2187 != g_2188)), ((*l_1602) = (p_22 & ((*g_1349) = 7L)))), 0xE235L)) || 0UL));
        for (l_1514 = (-29); (l_1514 > 14); ++l_1514)
        {
            char l_2252 = 0L;
            int l_2253 = 1L;
            unsigned l_2271 = 0x909D5FFEL;
            int **l_2279 = (void*)0;
            l_1602 = p_23;

            ;
            for (l_1494 = 3; (l_1494 < 18); l_1494 = safe_add_func_uint16_t_u_u(l_1494, 7))
            {
                const int *l_2200 = &g_1074;
                unsigned **l_2220 = &l_2186;
                int l_2227 = 3L;
                int *l_2230 = &l_2098;
                int *l_2231 = (void*)0;
                int *l_2232 = (void*)0;
                int *l_2233 = &l_2124;
                int *l_2234 = &l_2098;
                int *l_2235 = (void*)0;
                int *l_2236 = &g_552;
                int *l_2237 = &g_899;
                int *l_2238 = &l_2147;
                int *l_2239 = &g_552;
                int *l_2240 = &g_1074;
                int *l_2241 = &g_1074;
                int *l_2242 = (void*)0;
                int *l_2243 = &l_2147;
                int *l_2244 = (void*)0;
                int *l_2245 = &l_2124;
                int *l_2246 = &g_552;
                int *l_2247 = &l_2124;
                int *l_2248 = &l_2098;
                int *l_2249 = &l_2098;
                int *l_2250 = (void*)0;
                int *l_2251 = &g_99;
                int *l_2254 = &l_1504;
                int *l_2255 = (void*)0;
                int *l_2256 = &l_2149;
                int *l_2257 = (void*)0;
                int *l_2258 = (void*)0;
                int *l_2259 = &g_899;
                int *l_2260 = &l_2098;
                int *l_2261 = &l_2227;
                int l_2262 = 1L;
                int *l_2263 = &l_2124;
                int *l_2264 = &g_552;
                int *l_2265 = (void*)0;
                int *l_2266 = &g_899;
                int *l_2267 = &l_2147;
                int *l_2268 = &l_2262;
                int *l_2269 = &l_2227;
                int *l_2270 = &g_552;
                unsigned *****l_2274 = &g_1113;
                unsigned *****l_2276 = &l_2275;
                char *l_2281 = &g_79;
                if ((*g_262))
                {
                    unsigned **l_2206 = &g_47;
                    char * const *l_2212 = &g_1349;
                    char * const **l_2211 = &l_2212;
                    char * const ***l_2213 = &l_2211;
                    int *l_2214 = &l_2124;
                    int **l_2215 = &l_2214;
                    for (g_2025 = 0; (g_2025 <= (-14)); g_2025--)
                    {
                        unsigned **l_2196 = (void*)0;
                        const int *l_2199 = &g_2067;
                        const int **l_2198 = &l_2199;
                        l_2197 = func_24(func_27((**g_1113), ((*g_618) = ((*g_46) = p_23)), l_2196, g_785, (*g_262)), p_22);

                        ;
                        l_2200 = ((*l_2198) = &g_552);

                        ;
                        ;
                        (*l_1602) |= p_22;
                    }

                    ;
                    (*l_2215) = l_2214;
                }
                else
                {
                    unsigned char l_2223 = 246UL;
                    unsigned *l_2224 = &g_187;
                    l_2227 = (safe_sub_func_uint32_t_u_u(((**g_657) |= (safe_rshift_func_uint16_t_u_u((func_27(l_2220, ((*l_2220) = (***g_1113)), func_33((!(safe_lshift_func_uint8_t_u_s(l_2223, 3))), ((*l_2224) |= ((g_262 = &g_99) != (void*)0)), g_393), g_605, (safe_div_func_int8_t_s_s(p_22, (**g_1348)))) < l_2223), 11))), l_2223));
                }

                ;
                (**g_1219) = (safe_mul_func_int8_t_s_s((*l_2200), (*l_2197)));
                l_2271--;
                (*g_1220) = (func_50(((*l_2197) | ((((*l_2274) = &g_1114) == ((*l_2276) = l_2275)) & (*g_1349))), (safe_sub_func_int32_t_s_s((((*l_2281) ^= ((*l_2248) &= ((**g_1348) <= (&g_262 != (g_2280 = l_2279))))) & (*g_1349)), (*l_1602))), p_23, g_2282) < (*l_2238));

                ;
            }
        }

        ;
        ;
        ;
        ;
    }

    ;
    ;
    (*g_1220) &= ((*l_1602) |= ((((void*)0 == &l_2063) != (&l_1643 == l_2283)) && 1L));
    return (*g_1349);


}







static unsigned * func_24(unsigned p_25, short p_26)
{
    short l_637 = 0x2834L;
    char * const l_649 = &g_81;
    const unsigned short l_652 = 5UL;
    unsigned * const ***l_660 = &g_656;
    int l_661 = 0L;
    unsigned **l_662 = (void*)0;
    int l_718 = 0xABD4214DL;
    int l_739 = 0xCCE88BC9L;
    int l_773 = 1L;
    unsigned l_835 = 0xDC463A2BL;
    short l_1438 = 0xEF65L;
    if (l_637)
    {
        const unsigned short l_642 = 0xA7E6L;
        char **l_645 = (void*)0;
        char **l_646 = (void*)0;
        char *l_648 = &g_79;
        char **l_647 = &l_648;
        unsigned char *l_653 = &g_85;
        unsigned * const ***l_654 = (void*)0;
        const unsigned *l_663 = &g_12;
        (*g_262) = ((((safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((l_642 >= ((safe_sub_func_uint32_t_u_u(p_25, (func_50((((*l_647) = (void*)0) == l_649), l_642, &p_25, (****g_655)) & 1UL))) <= 0x9D467D12L)), g_300)), l_661)) ^ 0x5AE9B3B8L) < 65535UL) != (**g_657));

        ;
    }
    else
    {
        unsigned l_666 = 0x7D05E702L;
        int l_687 = 0x2C1ADC8FL;
        unsigned char *l_693 = &g_85;
        unsigned char *l_695 = &g_85;
        int l_770 = (-1L);
        unsigned l_831 = 0xD2C6C615L;
        unsigned **l_834 = &g_619;
        short l_975 = 6L;
        const short l_1072 = 0xA6E4L;
        int l_1075 = 0xCCD43465L;
        for (g_79 = 7; (g_79 >= (-9)); g_79 = safe_sub_func_uint16_t_u_u(g_79, 7))
        {
            short *l_677 = (void*)0;
            short *l_678 = &g_146;
            int l_679 = 5L;
            int *l_680 = &g_552;
            unsigned char *l_696 = &g_85;
            int l_733 = 0xE77EDE55L;
            unsigned **l_805 = (void*)0;
            const unsigned l_946 = 0UL;
            int l_976 = 5L;
            unsigned l_1070 = 0x543435C7L;
            (*l_680) = (((l_661 = ((*g_262) = p_26)) ^ l_666) ^ (safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(0xA96BL, (((l_679 = (safe_mul_func_int16_t_s_s(l_666, ((*l_678) = (safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((+g_187), g_210)), (-7L))))))) | (((*g_229) = 0xB157L) || (((0xE9L ^ (-1L)) == 4294967292UL) >= g_77))) <= l_666))), (-6L))));
            for (l_679 = 14; (l_679 > 10); l_679 = safe_sub_func_int8_t_s_s(l_679, 8))
            {
                int l_743 = 0xF5E4E252L;
                int l_756 = 7L;
                int l_777 = 0x8B9C24C4L;
                char l_793 = 0x27L;
                unsigned char *l_945 = &g_85;
                short l_986 = (-1L);
                unsigned **l_1078 = (void*)0;
                int *l_1079 = &l_777;
                (*g_262) &= l_666;
                for (g_72 = 0; (g_72 == 10); g_72 = safe_add_func_int16_t_s_s(g_72, 8))
                {
                    unsigned char *l_688 = &g_83;
                    unsigned char **l_694 = &l_693;
                    unsigned char **l_697 = &l_696;
                    int l_704 = 0xFE36B35EL;
                    unsigned *l_707 = &g_517;
                    int l_747 = (-5L);
                    int l_768 = (-2L);
                    int l_769 = 0x421C1DE4L;
                    int **l_815 = &l_680;
                    int **l_816 = &g_262;
                    unsigned short l_823 = 0x5F92L;
                    int *l_826 = &g_552;
                    int *l_827 = (void*)0;
                    int *l_828 = &g_99;
                    int *l_829 = &l_687;
                    int *l_830 = &l_718;
                }
            }
        }
    }
    (*g_262) &= p_25;
    for (g_798 = (-26); (g_798 >= 5); g_798++)
    {
        int l_1098 = (-3L);
        int l_1110 = 0x4B60548CL;
        int l_1144 = (-1L);
        const int *l_1218 = &l_773;
        const int **l_1217 = &l_1218;
        unsigned short l_1234 = 1UL;
        int l_1283 = 0xAB2A21D3L;
        unsigned l_1333 = 7UL;
        for (l_835 = 0; (l_835 >= 50); l_835 = safe_add_func_uint32_t_u_u(l_835, 6))
        {
            unsigned char *l_1099 = &g_85;
            unsigned **l_1102 = &g_47;
            int l_1103 = 0L;
            int l_1145 = 0xC374C19BL;
            int l_1153 = 1L;
            unsigned char ***l_1344 = &g_806;
        }
        for (g_83 = 0; (g_83 >= 22); g_83++)
        {
            (*g_1220) = (*g_1220);
            if ((*g_1220))
                break;
            (*l_1217) = (*l_1217);
            g_1462++;
        }
    }
    return (*g_46);


}







static short func_27(unsigned ** p_28, unsigned * p_29, unsigned ** p_30, short p_31, int p_32)
{
    unsigned char *l_620 = &g_85;
    int *l_621 = &g_99;
    int **l_622 = &g_262;
    int l_625 = 9L;
    int *l_632 = &g_552;
    unsigned ***l_633 = &g_46;
    volatile int *l_635 = &g_304;
    volatile int **l_634 = &l_635;
    (*l_621) ^= (&g_613 == l_620);
    (*l_622) = l_621;

    ;
    (*l_634) = &g_304;
    return p_32;
}







static unsigned ** func_33(int p_34, const unsigned p_35, const int p_36)
{
    int *l_590 = &g_552;
    int *l_591 = (void*)0;
    int l_592 = 0x6B8DBD90L;
    int *l_593 = &l_592;
    int *l_594 = &g_552;
    int *l_595 = (void*)0;
    int *l_596 = (void*)0;
    int *l_597 = &g_99;
    int *l_598 = &g_99;
    int *l_599 = &l_592;
    int *l_600 = &l_592;
    int *l_601 = &l_592;
    int *l_602 = (void*)0;
    int *l_603 = &g_99;
    int *l_604 = &g_99;
    int *l_606 = &l_592;
    int *l_607 = &g_552;
    int *l_608 = &g_552;
    int *l_609 = (void*)0;
    int *l_610 = &g_99;
    int *l_611 = &l_592;
    int *l_612 = (void*)0;
    --g_613;
    return &g_47;


}







static unsigned * func_39(unsigned char p_40, unsigned ** p_41, unsigned * const p_42, unsigned short p_43, const unsigned * p_44)
{
    unsigned **l_87 = &g_47;
    const int l_333 = (-5L);
    unsigned short *l_388 = (void*)0;
    int l_394 = 0x3D81A310L;
    unsigned char l_398 = 1UL;
    int l_435 = (-2L);
    int l_442 = 0x32F51377L;
    unsigned char l_520 = 0x5FL;
    int *l_523 = &g_99;
    int *l_524 = &l_442;
    int *l_525 = &l_442;
    int *l_526 = &g_99;
    int *l_527 = &l_435;
    int *l_528 = (void*)0;
    int *l_529 = &l_435;
    int *l_530 = (void*)0;
    int *l_531 = &l_394;
    int *l_532 = &l_442;
    int *l_533 = &l_394;
    int *l_534 = (void*)0;
    int *l_535 = &l_435;
    int *l_537 = &l_435;
    int *l_538 = &l_442;
    int *l_539 = &l_435;
    int *l_540 = &l_442;
    int *l_541 = &l_394;
    int *l_542 = &l_435;
    int *l_543 = &l_435;
    int *l_544 = (void*)0;
    int *l_545 = &l_435;
    int *l_546 = &l_435;
    int *l_547 = (void*)0;
    int *l_548 = &l_394;
    int *l_549 = &l_442;
    int *l_550 = (void*)0;
    int *l_551 = &l_435;
    int *l_553 = &l_394;
    int *l_554 = &g_552;
    int *l_555 = &l_394;
    int *l_556 = (void*)0;
    int *l_557 = &l_394;
    int *l_558 = (void*)0;
    int l_559 = 1L;
    int *l_560 = &l_435;
    int l_561 = 0xC397BB7FL;
    int *l_562 = &l_561;
    int l_563 = 0x19DD807AL;
    int *l_564 = &l_559;
    int *l_565 = &l_559;
    int *l_566 = &l_559;
    int l_567 = 0L;
    int *l_568 = &g_552;
    int l_569 = (-6L);
    int *l_570 = &l_567;
    int *l_571 = &l_442;
    int l_572 = 0L;
    int *l_573 = &l_442;
    int *l_574 = &l_559;
    int *l_575 = &l_442;
    int *l_576 = &l_572;
    int *l_577 = &l_559;
    int *l_579 = &g_99;
    int l_580 = 1L;
    int *l_581 = &l_435;
    unsigned ***l_585 = &g_46;
    int **l_586 = &l_541;
    for (g_4 = 17; (g_4 > 39); g_4++)
    {
        unsigned *l_71 = &g_72;
        char *l_78 = &g_79;
        char *l_80 = &g_81;
        unsigned char *l_82 = &g_83;
        unsigned char *l_84 = &g_85;
        int l_86 = 0x509EF6E8L;
        int l_154 = 0x03667010L;
        unsigned * const *l_321 = (void*)0;
        unsigned * const **l_320 = &l_321;
        int l_510 = 0xA48C5682L;
        if (func_50((func_55(func_60(p_40, ((*l_87) = func_64((l_86 = ((*l_84) = ((*l_82) = (safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((p_43 <= (--(*l_71))), (g_77 = (safe_rshift_func_int8_t_s_u(1L, 7))))), (((*l_78) = p_40) == ((*l_80) = (g_12 != 0xA1L)))))))), l_87)), l_154), &g_12, p_43, p_40) >= p_43), p_43, &g_4, g_12))
        {
            unsigned char l_329 = 249UL;
            int l_375 = 0x8D0E2A1EL;
            int l_429 = (-7L);
            int l_457 = 7L;
            int l_464 = 0xB92BA8E1L;
            g_99 ^= ((*g_47) && (*p_42));
            if (p_43)
            {
                unsigned short l_326 = 0xA791L;
                int *l_330 = &l_86;
                int l_370 = 0x2B5224E5L;
                for (g_238 = 0; (g_238 > 4); g_238++)
                {
                    unsigned short l_319 = 0x44F9L;
                    unsigned **l_328 = &l_71;
                    for (p_43 = 0; (p_43 == 11); p_43++)
                    {
                        int **l_318 = &g_262;
                        unsigned * const **l_323 = &l_321;
                        unsigned * const ***l_322 = &l_323;
                        int *l_327 = &l_154;
                        (*l_318) = p_42;

                        ;
                        (*l_327) = func_50(l_319, ((&g_46 != ((*l_322) = (l_320 = (void*)0))) | ((safe_div_func_uint32_t_u_u(0xE5E4B7D5L, l_326)) < 3L)), (*g_46), (*p_44));

                        ;
                        ;
                        (*l_318) = func_64((((*l_84) |= ((*l_82) = p_40)) & g_210), l_328);

                        ;
                    }
                }

                ;
                ;
                (*l_330) = l_329;
                if ((func_55(&g_85, (*p_41), (safe_rshift_func_int16_t_s_s(((l_333 == (0x9575D05CL <= func_50(l_86, g_83, l_330, (safe_rshift_func_uint16_t_u_s((+9UL), (safe_add_func_int32_t_s_s(p_40, (-6L)))))))) == g_146), p_40)), g_83) ^ (*p_42)))
                {
                    (*l_330) = 0L;
                    for (g_85 = (-9); (g_85 == 6); g_85 = safe_add_func_int32_t_s_s(g_85, 3))
                    {
                        int *l_340 = (void*)0;
                        int *l_341 = &g_99;
                        int *l_342 = &g_99;
                        int *l_343 = &l_154;
                        int *l_344 = &g_99;
                        int *l_345 = &l_86;
                        int *l_346 = &g_99;
                        int *l_347 = &l_154;
                        int *l_348 = &l_154;
                        int l_349 = 0xC162CA8FL;
                        int *l_350 = (void*)0;
                        int *l_351 = (void*)0;
                        int *l_352 = &g_99;
                        int *l_353 = (void*)0;
                        int *l_354 = (void*)0;
                        int *l_355 = &g_99;
                        int *l_356 = &l_86;
                        int *l_357 = &g_99;
                        int *l_358 = (void*)0;
                        int *l_359 = &l_349;
                        int *l_360 = &l_349;
                        int *l_361 = &l_154;
                        int *l_362 = &l_86;
                        int *l_363 = &l_154;
                        int *l_364 = &g_99;
                        int *l_365 = &g_99;
                        int *l_366 = &g_99;
                        int *l_367 = &g_99;
                        int *l_368 = &l_349;
                        int *l_369 = &g_99;
                        int *l_371 = &l_86;
                        int *l_372 = &l_154;
                        int *l_373 = &g_99;
                        int *l_374 = &l_370;
                        int *l_376 = &l_349;
                        int l_377 = 0x93766C54L;
                        int *l_378 = (void*)0;
                        int *l_379 = (void*)0;
                        unsigned char *l_387 = &l_329;
                        int l_392 = 0L;
                        --g_380;
                        (*l_369) = (safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((g_393 = ((((*l_330) = ((*l_387) ^= ((*l_82) |= 255UL))) || (func_50((65533UL | g_193), (((((void*)0 != l_388) ^ (p_43 <= (safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s(p_43)), ((*l_330) ^ func_50(((*l_80) = (func_50((func_50((l_154 ^ l_86), g_4, (*g_46), (*g_47)) <= p_43), l_392, (*g_46), (**p_41)) >= (*l_330))), g_83, (*p_41), (*g_47))))))) || g_99) & 0x7DL), (*p_41), l_333) | p_43)) == g_77)), 7)) == (*g_47)), 0x7163L));
                        (*l_360) = (!((*l_342) = 0x7F856730L));
                    }
                }
                else
                {
                    g_262 = p_42;

                    ;
                    if (l_154)
                        continue;
                }
                l_394 = ((*l_330) = (*l_330));
            }
            else
            {
                unsigned l_397 = 0xF6503A9DL;
                int l_426 = 1L;
                int *l_472 = &g_99;
                int *l_473 = &l_86;
                int *l_474 = &l_426;
                l_86 ^= ((l_333 != (0x47E73FD2L < ((*l_71) ^= (**g_46)))) == (1L > l_397));
                if (l_398)
                {
                    if (p_43)
                        break;
                }
                else
                {
                    int *l_399 = (void*)0;
                    int *l_400 = &l_394;
                    int *l_401 = &g_99;
                    int *l_402 = &l_154;
                    int *l_403 = &l_86;
                    int *l_404 = &l_375;
                    int *l_405 = &l_375;
                    int *l_406 = &l_86;
                    int *l_407 = (void*)0;
                    int *l_408 = (void*)0;
                    int *l_409 = &l_375;
                    int *l_410 = &l_154;
                    int *l_411 = &l_86;
                    int *l_412 = &l_394;
                    int *l_413 = &l_375;
                    int *l_414 = &g_99;
                    int *l_415 = &l_394;
                    int *l_416 = &g_99;
                    int *l_417 = &g_99;
                    int *l_418 = &l_394;
                    int *l_419 = &l_86;
                    int *l_420 = &l_394;
                    int *l_421 = &l_86;
                    int *l_422 = &l_375;
                    int *l_423 = (void*)0;
                    int *l_424 = &g_99;
                    int *l_425 = &l_394;
                    int *l_427 = (void*)0;
                    int *l_428 = (void*)0;
                    int *l_430 = &l_429;
                    int *l_431 = (void*)0;
                    int *l_432 = &l_429;
                    int l_434 = (-2L);
                    int *l_436 = (void*)0;
                    int *l_437 = &l_375;
                    int *l_438 = &l_154;
                    int *l_439 = &l_434;
                    int *l_440 = &g_99;
                    int *l_441 = &l_154;
                    int *l_443 = (void*)0;
                    int *l_444 = &g_99;
                    int *l_445 = &l_394;
                    int *l_446 = &l_154;
                    int *l_447 = (void*)0;
                    int *l_448 = &l_394;
                    int *l_449 = &l_86;
                    int *l_450 = &l_435;
                    int *l_451 = &l_435;
                    int *l_452 = &l_435;
                    int *l_453 = (void*)0;
                    int *l_454 = &l_429;
                    int *l_455 = &l_394;
                    int *l_456 = (void*)0;
                    int *l_458 = &g_99;
                    int *l_459 = &l_426;
                    int *l_460 = &l_375;
                    int *l_461 = (void*)0;
                    int *l_462 = &l_457;
                    int *l_463 = &l_394;
                    g_465++;
                    (*l_459) &= 0L;
                }
                (*l_474) ^= ((*l_473) = ((*l_472) = (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(0x14L, 1)), p_43))));
            }

            ;
            ;
            if (p_40)
                continue;
        }
        else
        {
            int *l_475 = &g_99;
            int *l_476 = &g_99;
            int *l_477 = &l_86;
            int *l_478 = &g_99;
            int *l_479 = &l_442;
            int *l_480 = &g_99;
            int *l_481 = &l_86;
            int *l_482 = &l_435;
            int *l_483 = &l_154;
            int *l_484 = &l_442;
            int *l_485 = &l_394;
            int *l_486 = (void*)0;
            int *l_487 = &l_86;
            int *l_488 = &g_99;
            int *l_489 = &l_154;
            int *l_490 = &g_99;
            int *l_491 = &l_394;
            int *l_492 = &g_99;
            int *l_493 = &l_86;
            int *l_494 = &l_442;
            int *l_495 = &l_435;
            int *l_496 = &g_99;
            int *l_497 = &l_435;
            int *l_498 = &l_435;
            int *l_499 = &l_154;
            int *l_500 = &l_435;
            int *l_501 = &l_435;
            int *l_502 = &l_394;
            int *l_503 = &g_99;
            int *l_504 = (void*)0;
            int *l_505 = &l_154;
            int *l_506 = &g_99;
            int *l_507 = (void*)0;
            int *l_508 = (void*)0;
            int *l_509 = &g_99;
            int *l_511 = &l_394;
            int *l_512 = &l_394;
            int *l_513 = &l_86;
            int *l_514 = (void*)0;
            int *l_515 = &g_99;
            int *l_516 = (void*)0;
            g_517--;
            if (l_520)
                continue;
            for (l_398 = (-19); (l_398 != 40); l_398 = safe_add_func_uint8_t_u_u(l_398, 7))
            {
                return l_492;


            }
        }

        ;
        ;
        ;
    }

    ;
    ;
    (*l_523) |= p_43;
    g_582++;
    (*l_586) = func_64(((*l_541) != p_43), ((*l_585) = p_41));

    ;
    return (**l_585);


}







static int func_50(char p_51, char p_52, unsigned * p_53, const unsigned p_54)
{
    int *l_312 = (void*)0;
    int *l_313 = &g_99;
    (*l_313) |= p_54;
    return p_52;
}







static unsigned short func_55(unsigned char * p_56, unsigned * p_57, unsigned char p_58, unsigned char p_59)
{
    int *l_168 = &g_99;
    int *l_169 = &g_99;
    int *l_170 = (void*)0;
    int *l_171 = &g_99;
    int *l_172 = &g_99;
    int l_173 = 0x25B6AC95L;
    int l_174 = 0x6FC21787L;
    int l_175 = 0x647035F2L;
    int *l_176 = &l_173;
    int *l_177 = &g_99;
    int l_178 = 1L;
    int *l_179 = &l_175;
    int *l_180 = (void*)0;
    int *l_181 = (void*)0;
    int *l_182 = &l_175;
    int *l_183 = (void*)0;
    int *l_184 = &g_99;
    int *l_185 = &l_173;
    int *l_186 = &l_174;
    const unsigned l_226 = 0xE7E0054FL;
    short l_236 = 0x16AAL;
    unsigned **l_257 = &g_47;
    int *l_305 = (void*)0;
    int *l_306 = &l_175;
    int *l_307 = &l_178;
    unsigned l_308 = 4UL;
    char l_311 = 1L;
    g_187--;
    for (l_178 = 0; (l_178 != (-3)); l_178--)
    {
        int l_192 = 0L;
        int l_194 = 0x561CB1BBL;
        int l_195 = 0xC356ED06L;
        int l_196 = (-1L);
        int *l_197 = &l_174;
        int *l_198 = &l_173;
        int *l_199 = (void*)0;
        int *l_200 = &l_173;
        int *l_201 = &l_175;
        int *l_202 = &l_175;
        int *l_203 = &l_175;
        int l_204 = 0xDFD2E611L;
        int *l_205 = &g_99;
        int *l_206 = (void*)0;
        int *l_207 = (void*)0;
        int *l_208 = &l_175;
        int *l_211 = &l_194;
        int *l_212 = &l_194;
        int *l_213 = &l_204;
        int *l_214 = (void*)0;
        int *l_215 = &l_173;
        int *l_216 = &l_194;
        int *l_217 = &l_175;
        int *l_218 = &l_196;
        int *l_219 = &l_174;
        int *l_220 = (void*)0;
        int *l_221 = &l_195;
        int *l_222 = &l_173;
        unsigned **l_256 = &g_47;
        g_223++;
        g_99 |= ((*l_202) &= 0xB179DCF4L);
        if (((g_72 & (*l_217)) < l_226))
        {
            int l_237 = 8L;
            int l_242 = 0x4B72DBC9L;
            for (g_81 = 18; (g_81 < (-26)); --g_81)
            {
                unsigned short *l_230 = &g_77;
                unsigned short **l_231 = &l_230;
                unsigned short *l_233 = &g_77;
                unsigned short **l_232 = &l_233;
                int **l_241 = &l_179;
                if ((*l_179))
                    break;
                (*l_222) = ((g_229 = &g_77) != ((*l_232) = ((*l_231) = l_230)));
                for (g_85 = 0; (g_85 != 4); g_85 = safe_add_func_uint8_t_u_u(g_85, 8))
                {
                    (*l_211) &= p_59;
                    if ((*l_203))
                        continue;
                    (*l_217) |= p_58;
                    g_238++;
                }
                (*l_241) = func_64((*p_56), &g_47);

                ;
            }
            l_242 ^= ((*l_200) = ((*l_205) != (*l_211)));
            g_243--;
            if ((*l_185))
                break;
        }
        else
        {
            int l_255 = (-9L);
            int l_275 = 0x1F0D64EEL;
            int *l_276 = &l_174;
            int *l_277 = &l_194;
            int *l_278 = &l_173;
            int *l_279 = (void*)0;
            int *l_280 = &l_173;
            int *l_281 = &l_175;
            int *l_282 = (void*)0;
            int *l_284 = (void*)0;
            int *l_285 = &g_99;
            int *l_286 = &l_255;
            int *l_287 = (void*)0;
            int *l_288 = &l_196;
            int *l_289 = &l_275;
            int *l_290 = &l_204;
            int *l_291 = &l_196;
            int *l_292 = &l_194;
            int *l_293 = &l_204;
            int *l_294 = &l_174;
            int *l_295 = &g_99;
            int *l_296 = &l_174;
            int *l_297 = &l_173;
            int *l_298 = &l_194;
            int *l_299 = &l_196;
            int **l_303 = &l_221;
            if ((1UL && 1UL))
            {
                short l_248 = (-1L);
                char *l_258 = &g_81;
                int **l_261 = &l_171;
                (*l_201) = (safe_lshift_func_int16_t_s_s(((l_248 < (safe_rshift_func_int8_t_s_s((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((l_255 >= ((*l_258) = ((g_46 = l_256) == (l_257 = &p_57)))), 2)), 0x2913F7DCL)), ((safe_sub_func_uint16_t_u_u(p_58, p_59)) | 0xACC9075FL)))) ^ (*p_57)), 1));

                ;
                g_262 = ((*l_261) = func_64((*p_56), &g_47));

                ;
                ;
            }
            else
            {
                int **l_274 = &l_214;
                int ***l_273 = &l_274;
                (*l_222) &= ((p_59 != (((safe_mod_func_int16_t_s_s(((((safe_rshift_func_uint16_t_u_s((((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u(((l_255 > p_58) || ((*p_57) <= (((p_58 ^ (((*l_273) = &l_202) != &g_262)) ^ ((*l_205) ^= l_255)) > (((*g_47) > 0xFC2F5E6FL) > (*p_57))))), p_58)), 7)) && g_209), 4)) && 0xFBL) | p_59), 15)) >= 0UL) | p_59) | g_72), (*g_229))) != g_79) == (*g_229))) < g_238);

                ;
                if (p_59)
                    continue;
            }
            l_255 &= ((((*p_56) &= g_243) != (*l_176)) > (**g_46));
            g_300--;
            (*l_303) = &l_255;

            ;
        }


    }

    ;
    ;
    ;
    ++l_308;
    return l_311;
}







static unsigned char * func_60(char p_61, unsigned * p_62, int p_63)
{
    const int *l_166 = &g_99;
    const int **l_167 = &l_166;
    g_99 &= 8L;
    for (p_61 = 0; (p_61 == (-5)); p_61--)
    {
        unsigned char l_165 = 255UL;
        for (g_85 = 0; (g_85 == 31); ++g_85)
        {
            unsigned l_161 = 0x465D988DL;
            char *l_162 = (void*)0;
            char *l_163 = &g_79;
            int *l_164 = &g_99;
            l_165 = ((*l_164) = (safe_rshift_func_uint8_t_u_s((l_161 && (p_63 || (255UL != (p_63 && ((*l_163) |= g_77))))), 6)));
        }
    }
    (*l_167) = l_166;
    return &g_85;


}







static unsigned * func_64(unsigned char p_65, unsigned ** p_66)
{
    char l_97 = 1L;
    unsigned *l_106 = &g_4;
    short l_149 = 5L;
    int l_151 = 0L;
    for (g_77 = 0; (g_77 > 57); g_77 = safe_add_func_int32_t_s_s(g_77, 8))
    {
        unsigned short l_90 = 0x5761L;
        unsigned **l_91 = &g_47;
        unsigned ***l_92 = &g_46;
        unsigned **l_96 = &g_47;
        unsigned ***l_95 = &l_96;
        int *l_98 = &g_99;
        unsigned char l_109 = 0UL;
        char *l_110 = &l_97;
        (*l_98) &= ((l_90 ^ ((p_66 == ((*l_92) = l_91)) < 0xF617L)) <= ((((safe_mul_func_int16_t_s_s(((*g_47) != ((**p_66) > ((((*l_95) = (void*)0) == &g_47) > l_97))), 0x2427L)) ^ 0xA3A415DBL) == p_65) && 65528UL));

        ;
        (*l_98) &= (l_97 == g_77);
        (*l_98) = ((safe_add_func_uint8_t_u_u(253UL, ((*l_110) = (safe_add_func_uint32_t_u_u((((safe_mod_func_int32_t_s_s(((((0xFE4DL > (0xC51CL && (p_65 || (((l_106 != ((*p_66) = (*g_46))) || 0xD669L) || (safe_sub_func_int16_t_s_s(p_65, g_77)))))) != (*l_98)) | (*l_98)) <= 0xB7FDL), g_79)) & l_109) <= 0x9BL), (*l_98)))))) && 0xC0L);
    }
    for (g_83 = 16; (g_83 < 22); ++g_83)
    {
        int *l_114 = &g_99;
        int **l_113 = &l_114;
        int *l_116 = (void*)0;
        int **l_115 = &l_116;
        if (l_97)
            break;
        g_99 = g_77;
        (*l_115) = ((*l_113) = &g_99);

        ;
    }
    for (g_85 = 0; (g_85 <= 18); g_85++)
    {
        unsigned *l_122 = &g_4;
        int l_123 = 0x200BAF9CL;
        int *l_124 = &g_99;
        unsigned *l_125 = &g_72;
        int **l_153 = &l_124;
        if (g_4)
        {
            unsigned l_119 = 0x9D53036CL;
            l_119--;
        }
        else
        {
            return l_122;


        }
        (*l_124) = l_123;
        if ((((*l_125) = (&p_65 == &g_85)) < (*g_47)))
        {
            int *l_128 = &l_123;
            (*l_128) |= ((*l_124) = (((safe_div_func_uint16_t_u_u(p_65, p_65)) ^ (p_65 | g_81)) | g_12));
        }
        else
        {
            unsigned short l_133 = 65526UL;
            short *l_142 = (void*)0;
            short *l_143 = (void*)0;
            short *l_144 = (void*)0;
            short *l_145 = &g_146;
            unsigned char *l_147 = &g_83;
            unsigned short *l_148 = &g_77;
            int *l_150 = (void*)0;
            int **l_152 = &l_150;
            l_151 &= (safe_div_func_uint16_t_u_u(((*l_148) = (safe_mul_func_uint16_t_u_u((l_133 == (p_65 == (((((*l_147) = (safe_mul_func_int8_t_s_s((l_106 == (*p_66)), (((p_65 == (!((*l_145) &= ((safe_div_func_int16_t_s_s(((*l_124) ^= (safe_div_func_int8_t_s_s((&l_97 == (void*)0), ((safe_div_func_int32_t_s_s((((**g_46) ^ (**p_66)) & g_72), (*g_47))) | 0x68CE927CL)))), g_77)) >= 0x2B54446DL)))) < l_133) != 0x5DF5A5DAL)))) & 1UL) > l_97) <= p_65))), l_133))), l_149));
            (*l_152) = (void*)0;
        }
        (*l_153) = &l_123;

        ;
    }
    return l_106;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_300, "g_300", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_380, "g_380", print_hash_value);
    transparent_crc(g_393, "g_393", print_hash_value);
    transparent_crc(g_433, "g_433", print_hash_value);
    transparent_crc(g_465, "g_465", print_hash_value);
    transparent_crc(g_517, "g_517", print_hash_value);
    transparent_crc(g_536, "g_536", print_hash_value);
    transparent_crc(g_552, "g_552", print_hash_value);
    transparent_crc(g_578, "g_578", print_hash_value);
    transparent_crc(g_582, "g_582", print_hash_value);
    transparent_crc(g_605, "g_605", print_hash_value);
    transparent_crc(g_613, "g_613", print_hash_value);
    transparent_crc(g_659, "g_659", print_hash_value);
    transparent_crc(g_721, "g_721", print_hash_value);
    transparent_crc(g_785, "g_785", print_hash_value);
    transparent_crc(g_798, "g_798", print_hash_value);
    transparent_crc(g_868, "g_868", print_hash_value);
    transparent_crc(g_880, "g_880", print_hash_value);
    transparent_crc(g_899, "g_899", print_hash_value);
    transparent_crc(g_930, "g_930", print_hash_value);
    transparent_crc(g_944, "g_944", print_hash_value);
    transparent_crc(g_1074, "g_1074", print_hash_value);
    transparent_crc(g_1128, "g_1128", print_hash_value);
    transparent_crc(g_1184, "g_1184", print_hash_value);
    transparent_crc(g_1207, "g_1207", print_hash_value);
    transparent_crc(g_1398, "g_1398", print_hash_value);
    transparent_crc(g_1424, "g_1424", print_hash_value);
    transparent_crc(g_1433, "g_1433", print_hash_value);
    transparent_crc(g_1462, "g_1462", print_hash_value);
    transparent_crc(g_1482, "g_1482", print_hash_value);
    transparent_crc(g_1577, "g_1577", print_hash_value);
    transparent_crc(g_1584, "g_1584", print_hash_value);
    transparent_crc(g_1585, "g_1585", print_hash_value);
    transparent_crc(g_1901, "g_1901", print_hash_value);
    transparent_crc(g_1991, "g_1991", print_hash_value);
    transparent_crc(g_2025, "g_2025", print_hash_value);
    transparent_crc(g_2030, "g_2030", print_hash_value);
    transparent_crc(g_2067, "g_2067", print_hash_value);
    transparent_crc(g_2137, "g_2137", print_hash_value);
    transparent_crc(g_2152, "g_2152", print_hash_value);
    transparent_crc(g_2282, "g_2282", print_hash_value);
    transparent_crc(g_2406, "g_2406", print_hash_value);
    transparent_crc(g_2416, "g_2416", print_hash_value);
    transparent_crc(g_2477, "g_2477", print_hash_value);
    transparent_crc(g_2524, "g_2524", print_hash_value);
    transparent_crc(g_2554, "g_2554", print_hash_value);
    transparent_crc(g_2666, "g_2666", print_hash_value);
    transparent_crc(g_2775, "g_2775", print_hash_value);
    transparent_crc(g_2913, "g_2913", print_hash_value);
    transparent_crc(g_2914, "g_2914", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
