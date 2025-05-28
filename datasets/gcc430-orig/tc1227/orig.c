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



static int g_3 = 0x5BB2C213L;
static unsigned short g_21 = 0x282DL;
static char g_30 = 0x49L;
static unsigned short g_31 = 0x0F6BL;
static unsigned g_79 = 0x36EAF0ABL;
static unsigned g_85 = 6UL;
static unsigned *g_84 = &g_85;
static unsigned char g_100 = 3UL;
static unsigned char g_105 = 248UL;
static char g_106 = 0x2BL;
static int g_116 = 0x7C5EFF0DL;
static unsigned short g_152 = 0x68C9L;
static unsigned long long g_161 = 0x4BF81B78F42CBA37LL;
static char g_179 = 0x0AL;
static unsigned char g_189 = 6UL;
static long long g_194 = 0L;
static unsigned char g_195 = 251UL;
static int *g_210 = &g_116;
static int **g_209 = &g_210;
static short g_239 = 1L;
static unsigned char g_285 = 0x0EL;
static short g_330 = 0xAB16L;
static unsigned **g_351 = &g_84;
static unsigned ***g_350 = &g_351;
static unsigned long long *g_359 = &g_161;
static unsigned long long **g_358 = &g_359;
static unsigned char *g_375 = &g_195;
static unsigned char **g_374 = &g_375;
static long long g_412 = 0x894985C0450BFEABLL;
static char g_446 = (-3L);
static int g_449 = 0xBF17A3B1L;
static int g_454 = (-6L);
static short g_534 = 5L;
static unsigned char g_539 = 0x06L;
static unsigned g_588 = 0xB3824C0FL;
static unsigned g_681 = 8UL;
static unsigned short g_743 = 0UL;
static int *g_746 = (void*)0;
static int g_762 = (-2L);
static int g_763 = 1L;
static long long *g_774 = &g_194;
static long long **g_773 = &g_774;
static char **g_796 = (void*)0;
static int g_862 = 0x3ADBF9BBL;
static unsigned short g_886 = 0xDD15L;
static int g_892 = (-9L);
static long long g_893 = 0x47D91A805E807473LL;
static unsigned char g_894 = 255UL;
static unsigned g_1011 = 0xC48BAF98L;
static long long g_1094 = 0x1CA6606497466D9ALL;
static char g_1095 = 0x43L;
static char g_1114 = 0x99L;
static int g_1119 = 0L;
static char g_1124 = (-1L);
static unsigned g_1138 = 0x81E77B78L;
static char g_1214 = 0x1FL;
static unsigned g_1238 = 18446744073709551615UL;
static unsigned long long g_1266 = 0xD836ABDD023C9910LL;
static char g_1405 = 0x78L;
static unsigned char g_1486 = 0x2CL;
static unsigned g_1642 = 3UL;
static short *g_1688 = &g_239;
static short **g_1687 = &g_1688;
static int g_1817 = 0x43351D05L;
static int g_1823 = 0x31ADEAFFL;
static int g_1832 = 0x63C4D49AL;
static unsigned char g_1849 = 255UL;
static long long ***g_1898 = &g_773;
static long long ****g_1897 = &g_1898;
static unsigned g_2151 = 0xF57105F9L;
static char *g_2198 = (void*)0;
static int g_2201 = 0L;
static unsigned short *g_2219 = &g_743;
static unsigned short **g_2218 = &g_2219;
static unsigned long long *g_2301 = &g_1266;
static long long g_2506 = (-8L);
static unsigned long long g_2525 = 0xA5014A36C244E236LL;
static short g_2948 = 0x6E56L;
static char g_2954 = 3L;
static long long g_2985 = 0L;
static long long g_2997 = (-2L);
static unsigned char g_3014 = 0x1DL;
static unsigned g_3120 = 0UL;
static unsigned char g_3124 = 0UL;
static unsigned char g_3139 = 0x3EL;



static unsigned char func_1(void);
static int func_34(long long p_35, int p_36, unsigned p_37, int p_38, int * p_39);
static char * func_46(unsigned p_47, unsigned p_48, char * p_49);
static unsigned long long func_50(unsigned long long p_51);
static short func_54(char p_55);
static int * func_56(int ** p_57, unsigned p_58, unsigned p_59, char p_60, char p_61);
static int ** func_62(short p_63, unsigned p_64);
static int ** func_67(char p_68, int ** p_69);
static int * func_89(unsigned p_90, unsigned * p_91, short p_92, int p_93);
static unsigned * func_95(unsigned char p_96, unsigned p_97, int * p_98);
static unsigned char func_1(void)
{
    int *l_2 = &g_3;
    int *l_4 = (void*)0;
    int *l_5 = &g_3;
    int *l_6 = &g_3;
    int *l_7 = &g_3;
    int *l_8 = (void*)0;
    int *l_9 = &g_3;
    int *l_10 = (void*)0;
    int *l_11 = &g_3;
    int *l_12 = &g_3;
    int l_13 = 0xDFBD6C3FL;
    int *l_14 = &l_13;
    int *l_15 = &g_3;
    int *l_16 = &g_3;
    int *l_17 = &g_3;
    int *l_18 = &l_13;
    int *l_19 = &g_3;
    int *l_20 = &l_13;
    int *l_24 = &l_13;
    int *l_25 = (void*)0;
    int *l_26 = &g_3;
    int *l_27 = &g_3;
    int *l_28 = &g_3;
    int *l_29 = (void*)0;
    int **l_42 = &l_12;
    int **l_43 = &l_11;
    char *l_44 = &g_30;
    int l_45 = 0x0783518FL;
    char l_2197 = 0xE1L;
    char **l_2355 = &l_44;
    int *l_2356 = &g_3;
    unsigned l_3184 = 0x523BA952L;
    ++g_21;
    --g_31;
    if (func_34((*l_9), g_3, ((safe_lshift_func_int8_t_s_u(((*l_44) ^= (((*l_43) = ((*l_42) = &l_13)) == &g_3)), 2)) , ((((*l_2355) = (l_45 , func_46((((func_50((((**l_42) = (*l_9)) > ((safe_mod_func_int16_t_s_s(0x2DC8L, func_54(g_31))) & g_179))) == l_2197) != 4UL) != 1L), (*l_5), g_2198))) != &g_179) != g_1823)), g_534, l_2356))
    {
        (*g_209) = (void*)0;
        (*g_209) = &g_762;
    }
    else
    {
        long long l_3141 = 0xA39AF5999C6B0547LL;
        int *l_3142 = &g_3;
        int *l_3143 = &l_13;
        int *l_3144 = &g_1832;
        int *l_3145 = &g_763;
        int *l_3146 = &g_449;
        int *l_3147 = (void*)0;
        int *l_3148 = (void*)0;
        int l_3149 = 0x21D92C63L;
        int *l_3150 = &g_3;
        int *l_3151 = &g_892;
        int *l_3152 = &g_1832;
        int *l_3153 = &l_3149;
        int *l_3154 = &l_3149;
        int *l_3155 = &g_2201;
        int *l_3156 = &l_3149;
        int *l_3157 = &g_3;
        int *l_3158 = &l_45;
        int *l_3159 = &g_3;
        int *l_3160 = &g_892;
        int l_3161 = (-1L);
        int *l_3162 = &g_1832;
        int l_3163 = 1L;
        int *l_3164 = &g_763;
        int *l_3165 = &g_1817;
        int *l_3166 = &g_3;
        int *l_3167 = &g_3;
        int *l_3168 = &l_3149;
        int *l_3169 = &g_892;
        int *l_3170 = &l_3163;
        int *l_3171 = (void*)0;
        int *l_3172 = &l_3149;
        int *l_3173 = &g_762;
        int *l_3174 = &g_892;
        int *l_3175 = &g_116;
        int *l_3176 = (void*)0;
        int *l_3177 = (void*)0;
        int *l_3178 = (void*)0;
        int *l_3179 = &g_3;
        int *l_3180 = &l_3163;
        unsigned short l_3181 = 0x0FA0L;
        ++l_3181;
        --l_3184;
        return (*l_27);
    }
    return (*l_2);
}







static int func_34(long long p_35, int p_36, unsigned p_37, int p_38, int * p_39)
{
    short l_2359 = 0x6FB8L;
    long long **l_2373 = &g_774;
    int *l_2394 = &g_449;
    char ***l_2397 = &g_796;
    unsigned short **l_2402 = &g_2219;
    short l_2403 = 3L;
    int l_2428 = 0x1C6F9B34L;
    int l_2456 = 0x7EF00609L;
    char l_2605 = 0x14L;
    int l_2615 = (-3L);
    int l_2640 = 0L;
    short l_2661 = 0x717AL;
    unsigned long long **l_2672 = &g_359;
    unsigned short l_2882 = 65535UL;
    int l_2975 = 0xDAA33BA5L;
    int l_2987 = 0xB233D85CL;
    int l_3007 = 0xFFA5337AL;
    short l_3029 = (-10L);
    for (g_1094 = (-22); (g_1094 >= 3); g_1094 = safe_add_func_uint16_t_u_u(g_1094, 8))
    {
        long long l_2380 = 0x6345C3E5BC93188FLL;
        int l_2392 = 0xE7E19FC6L;
        int l_2476 = 0L;
        int l_2488 = 0x5B517B43L;
        int l_2500 = 2L;
        short **l_2570 = &g_1688;
        char l_2686 = 0xE9L;
        unsigned **l_2689 = &g_84;
        unsigned short l_2866 = 0x1ED7L;
        char *l_2889 = &g_179;
        int l_3020 = 0x36026BA8L;
        long long l_3023 = (-5L);
        int l_3024 = 0x7202EE72L;
        int l_3062 = (-1L);
        int l_3064 = (-1L);
        int l_3110 = (-1L);
        unsigned char *l_3138 = &g_285;
        int *l_3140 = &l_3064;
        if (l_2359)
        {
            unsigned char l_2375 = 255UL;
            int l_2377 = 0xDEF22BFEL;
            unsigned short **l_2401 = &g_2219;
            unsigned **l_2555 = &g_84;
            short l_2560 = (-1L);
            long long l_2571 = 0x07BFEE6426D0C9EFLL;
            int l_2587 = (-1L);
            int l_2618 = (-9L);
            unsigned long long l_2650 = 0xE904FB465A3BF406LL;
            unsigned char ***l_2663 = &g_374;
            unsigned long long **l_2671 = (void*)0;
            unsigned char *l_2683 = &g_285;
            int l_2771 = 0xC5269512L;
            for (g_1124 = 0; (g_1124 != (-20)); --g_1124)
            {
                int *l_2387 = &g_2201;
                int l_2388 = 0x1C87EB62L;
                int l_2434 = 0x6F95EB6AL;
                int l_2446 = 0xEAD8D17EL;
                int l_2460 = 0xC6511F4DL;
                int l_2486 = 0x0850DFC8L;
                char ****l_2528 = &l_2397;
                unsigned l_2646 = 9UL;
                unsigned char *l_2662 = &g_285;
                unsigned char ****l_2664 = &l_2663;
                unsigned short *l_2665 = (void*)0;
                unsigned short *l_2666 = &g_886;
                (*g_209) = &p_36;
            }
            (*p_39) = (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((l_2671 != l_2672) , (safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s((*l_2394), 4)) , (((**g_351) && ((*l_2394) = ((l_2587 > (safe_lshift_func_uint8_t_u_u((**g_374), ((*l_2683) |= p_37)))) || ((**g_351) = l_2500)))) , (safe_add_func_uint16_t_u_u(((&g_359 != &g_2301) , p_36), l_2476)))), (-1L))), p_35)), 5))), g_3)), l_2686));
            if (l_2571)
                continue;
            if ((safe_lshift_func_int8_t_s_u(((4294967291UL == l_2380) >= ((((**g_374) & l_2375) , l_2555) != l_2689)), 7)))
            {
                int *l_2690 = &g_449;
                int *l_2691 = &g_1817;
                int *l_2692 = &l_2428;
                int *l_2693 = &g_892;
                int *l_2694 = &g_449;
                int *l_2695 = (void*)0;
                int *l_2696 = &l_2615;
                int *l_2697 = &l_2476;
                int *l_2698 = &l_2615;
                int *l_2699 = &l_2640;
                int *l_2700 = &l_2587;
                int *l_2701 = &g_1832;
                int *l_2702 = &g_1832;
                int l_2703 = 0x21984065L;
                int *l_2704 = &l_2428;
                int *l_2705 = &g_449;
                int *l_2706 = &l_2640;
                int *l_2707 = (void*)0;
                int *l_2708 = &l_2377;
                int *l_2709 = &g_1817;
                int *l_2710 = (void*)0;
                int *l_2711 = &l_2618;
                int *l_2712 = &l_2476;
                int *l_2713 = (void*)0;
                int *l_2714 = &g_1832;
                int *l_2715 = &g_449;
                int *l_2716 = &g_2201;
                int *l_2717 = &l_2587;
                int *l_2718 = (void*)0;
                int *l_2719 = &g_763;
                int *l_2720 = &g_892;
                int *l_2721 = &g_3;
                int *l_2722 = &l_2392;
                int *l_2723 = &g_892;
                int *l_2724 = &l_2615;
                int *l_2725 = &l_2428;
                int *l_2726 = &g_2201;
                int *l_2727 = &g_116;
                int *l_2728 = (void*)0;
                int *l_2729 = &l_2428;
                int *l_2730 = (void*)0;
                int *l_2731 = (void*)0;
                int *l_2732 = &g_892;
                int *l_2733 = &l_2615;
                int *l_2734 = (void*)0;
                int *l_2735 = (void*)0;
                int *l_2736 = &g_2201;
                int *l_2737 = (void*)0;
                int *l_2738 = (void*)0;
                int *l_2739 = &g_116;
                int *l_2740 = &l_2615;
                int *l_2741 = &g_1832;
                int *l_2742 = &g_2201;
                int *l_2743 = &l_2476;
                int *l_2744 = &g_892;
                int *l_2745 = &l_2703;
                int *l_2746 = &l_2500;
                int *l_2747 = (void*)0;
                int *l_2748 = &l_2392;
                int *l_2749 = &l_2377;
                int *l_2750 = &l_2587;
                int *l_2751 = &l_2640;
                int *l_2752 = &l_2500;
                int *l_2753 = &g_1832;
                int *l_2754 = &g_2201;
                int *l_2755 = &g_1817;
                int *l_2756 = &g_763;
                int *l_2757 = &g_3;
                int *l_2758 = &l_2703;
                int *l_2759 = (void*)0;
                int *l_2760 = &l_2703;
                int *l_2761 = &l_2618;
                int *l_2762 = &l_2615;
                int *l_2763 = &g_892;
                int *l_2764 = &l_2488;
                int l_2765 = 0x5EC2115BL;
                int *l_2766 = &l_2456;
                int *l_2767 = &g_3;
                int *l_2768 = &g_762;
                int *l_2769 = &g_1817;
                int *l_2770 = &l_2456;
                int *l_2772 = &l_2640;
                int *l_2773 = (void*)0;
                unsigned long long l_2774 = 0x4F6A0FC84BD4610FLL;
                l_2774--;
                (*g_209) = ((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_s((p_35 > (**g_358)), (safe_rshift_func_uint8_t_u_u(p_35, 2)))) > p_35), (((safe_sub_func_uint32_t_u_u((**g_351), (*p_39))) | ((((safe_sub_func_int8_t_s_s(l_2488, 0xD7L)) > l_2392) , (*l_2394)) == (*g_375))) , p_36))) != (*l_2394)), 2)) , &g_1832);
                (*l_2394) = ((safe_rshift_func_int8_t_s_u(0x08L, 3)) < l_2476);
            }
            else
            {
                int *l_2791 = &g_3;
                int *l_2792 = &g_1817;
                int *l_2793 = &g_2201;
                int *l_2794 = &g_3;
                int *l_2795 = &g_116;
                int *l_2796 = &l_2500;
                int *l_2797 = &l_2392;
                int *l_2798 = &l_2615;
                int *l_2799 = &l_2392;
                int *l_2800 = &g_1817;
                int l_2801 = 0L;
                int *l_2802 = &l_2392;
                int *l_2803 = &l_2456;
                int *l_2804 = &l_2488;
                int *l_2805 = &l_2618;
                int *l_2806 = &l_2618;
                int *l_2807 = (void*)0;
                unsigned long long l_2808 = 0xC26C1F79FB91D556LL;
                l_2808--;
                (*l_2792) = (((safe_lshift_func_uint16_t_u_s((**g_2218), (p_35 && ((((**l_2555)--) == 0x1B1AF215L) && ((*p_39) && ((safe_rshift_func_uint16_t_u_u(((p_35 ^ ((**g_358) = (safe_mod_func_int8_t_s_s(p_38, (*g_375))))) && ((((l_2555 = (*g_350)) == ((p_38 && (***g_1898)) , (*g_350))) | 0xD19BL) <= p_38)), 12)) > 0x13L)))))) <= l_2771) & 0x1FC64F698DFDA834LL);
                if (l_2488)
                    break;
            }
        }
        else
        {
            unsigned *l_2829 = &g_79;
            int l_2830 = 0xF6A8E868L;
            long long l_2831 = 0x0351213CB3A98AE8LL;
            unsigned l_2872 = 0xA892F865L;
            int l_2988 = 0x8AD6DB43L;
            int l_2995 = 0x04ED3B6BL;
            if ((*p_39))
                break;
            if (((*l_2394) , (((l_2830 = ((((*l_2829) &= ((((safe_sub_func_uint32_t_u_u(1UL, ((*g_84) = 0UL))) || (safe_mod_func_uint64_t_u_u((l_2476 = p_37), p_35))) , ((*p_39) < ((*l_2394) &= (*p_39)))) == (safe_sub_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_s(((**g_374) ^= (&g_358 != (void*)0)), 0)) | l_2686) , 0x9AD2AE5DL), p_37)))) > l_2830) ^ l_2831)) <= 7UL) >= p_38)))
            {
                unsigned short l_2863 = 0x8C73L;
                int **l_2871 = &l_2394;
                if ((safe_add_func_int16_t_s_s((-9L), (((*g_2219) < (((((*l_2394) < ((*g_375) >= 1UL)) > (safe_sub_func_uint8_t_u_u(252UL, ((void*)0 == &g_2219)))) | ((p_37 , p_36) , (*g_1688))) | (*g_359))) , p_35))))
                {
                    int *l_2844 = &g_1832;
                    for (g_893 = 0; (g_893 == 20); g_893 = safe_add_func_int64_t_s_s(g_893, 9))
                    {
                        short **l_2838 = (void*)0;
                        int l_2843 = 0x12AE9142L;
                        unsigned *l_2849 = &g_1642;
                        (*g_209) = &p_36;
                        if (l_2392)
                            continue;
                        (*g_209) = &l_2428;
                        l_2488 = ((((***g_350) ^= (safe_mod_func_uint32_t_u_u((safe_add_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u(((-1L) != p_36), p_38)), (((safe_mod_func_uint64_t_u_u((0x50L <= ((*l_2844) |= (p_36 < ((((p_36 , &l_2829) == ((*l_2394) , (((*p_39) , (*g_2301)) , (void*)0))) || p_35) <= 0xF9706C6B7ED4E6B3LL)))), 0xD84ABDB6FDC1F780LL)) >= l_2830) , 1UL))), p_37))) | p_38) && (*p_39));
                    }
                }
                else
                {
                    unsigned l_2862 = 0x68A0D4DCL;
                    (*p_39) = ((safe_lshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s(l_2862, (0x31C87C36A3D91119LL & (l_2863 <= ((*g_1688) &= p_37))))), (8UL | (p_37 < 1UL)))) > (safe_add_func_int16_t_s_s((l_2866 || (((safe_add_func_int8_t_s_s(l_2863, l_2500)) < (*l_2394)) , l_2830)), l_2830)));
                    return l_2863;
                }
                l_2830 = (((safe_sub_func_uint16_t_u_u((l_2871 == (((**l_2871) | (-8L)) , ((((*l_2394) = l_2872) != (((**g_374) = ((void*)0 == &p_37)) == 0xA5L)) , &g_746))), ((safe_rshift_func_uint16_t_u_s((*g_2219), 13)) & l_2872))) , (void*)0) == &p_36);
            }
            else
            {
                short l_2879 = 0x90CEL;
                (*p_39) = (((p_36 | (p_35 >= p_35)) >= p_36) > (1L == (safe_lshift_func_int16_t_s_s((((safe_add_func_int8_t_s_s(((*l_2394) = l_2879), (((p_38 < 0x4FC0L) != (safe_mod_func_uint64_t_u_u(p_37, (-1L)))) <= 0x79L))) != 0x2E5BL) == l_2882), 14))));
                (*g_209) = &p_36;
            }
            (*l_2394) = l_2830;
            if ((safe_rshift_func_int16_t_s_s(((((((p_37 , (*g_374)) == (*g_374)) , (p_38 , (safe_rshift_func_uint16_t_u_s((safe_mod_func_int64_t_s_s(p_37, ((65534UL ^ (&l_2605 == l_2889)) , (+(0xF1L != 0UL))))), (*g_1688))))) >= (*l_2394)) > (-1L)) || p_38), p_35)))
            {
                long long l_2890 = 0xA11CF02D001B7436LL;
                int l_2891 = 3L;
                int *l_2892 = &l_2456;
                int *l_2893 = (void*)0;
                int *l_2894 = &g_116;
                int *l_2895 = &l_2830;
                int *l_2896 = &g_3;
                int *l_2897 = &l_2392;
                int *l_2898 = &g_449;
                int *l_2899 = &l_2488;
                int *l_2900 = &l_2891;
                int *l_2901 = &l_2476;
                int *l_2902 = &l_2428;
                int *l_2903 = &g_1817;
                int *l_2904 = &l_2615;
                int *l_2905 = (void*)0;
                int *l_2906 = (void*)0;
                int *l_2907 = &g_892;
                int *l_2908 = (void*)0;
                int *l_2909 = &l_2488;
                int *l_2910 = &l_2476;
                int *l_2911 = &g_762;
                int *l_2912 = &l_2891;
                int *l_2913 = &g_116;
                int *l_2914 = &g_892;
                int *l_2915 = &l_2891;
                int l_2916 = 0xA2D05A34L;
                int l_2917 = 0L;
                int *l_2918 = &g_763;
                int *l_2919 = &l_2476;
                int *l_2920 = &g_762;
                int *l_2921 = (void*)0;
                int *l_2922 = (void*)0;
                int *l_2923 = &l_2428;
                int *l_2924 = &l_2830;
                int *l_2925 = &g_116;
                int *l_2926 = &g_762;
                int *l_2927 = &l_2891;
                int *l_2928 = &g_449;
                int *l_2929 = &l_2500;
                int *l_2930 = (void*)0;
                int *l_2931 = &l_2488;
                int *l_2932 = &l_2640;
                int *l_2933 = &l_2476;
                int *l_2934 = &l_2830;
                int *l_2935 = &g_2201;
                int *l_2936 = &g_3;
                int *l_2937 = &l_2456;
                int *l_2938 = (void*)0;
                int *l_2939 = &l_2917;
                int *l_2940 = &g_892;
                int *l_2941 = &l_2500;
                int *l_2942 = &l_2891;
                int *l_2943 = (void*)0;
                int *l_2944 = &g_116;
                int *l_2945 = (void*)0;
                int *l_2946 = &g_763;
                int *l_2947 = &g_892;
                int *l_2949 = &l_2891;
                int *l_2950 = &g_1832;
                int *l_2951 = &l_2916;
                int *l_2952 = (void*)0;
                int *l_2953 = &g_449;
                int *l_2955 = &l_2830;
                int *l_2956 = &l_2916;
                int *l_2957 = &g_763;
                int *l_2958 = (void*)0;
                int *l_2959 = &l_2428;
                int *l_2960 = &g_892;
                int *l_2961 = &l_2500;
                int *l_2962 = (void*)0;
                int *l_2963 = (void*)0;
                int *l_2964 = (void*)0;
                int *l_2965 = &l_2476;
                int l_2966 = 0x3C15C28AL;
                int *l_2967 = &g_1832;
                int *l_2968 = &g_892;
                int *l_2969 = (void*)0;
                int *l_2970 = &l_2500;
                int *l_2971 = &g_763;
                int *l_2972 = &g_762;
                int *l_2973 = &g_2201;
                int *l_2974 = &g_1817;
                int l_2976 = (-1L);
                int *l_2977 = (void*)0;
                int *l_2978 = &l_2488;
                int *l_2979 = &l_2500;
                int *l_2980 = (void*)0;
                int *l_2981 = &l_2830;
                int *l_2982 = &g_116;
                int *l_2983 = (void*)0;
                int *l_2984 = &g_3;
                int *l_2986 = (void*)0;
                int *l_2989 = (void*)0;
                int *l_2990 = &l_2640;
                int *l_2991 = (void*)0;
                int *l_2992 = (void*)0;
                int *l_2993 = (void*)0;
                int *l_2994 = &l_2640;
                int *l_2996 = &l_2966;
                int *l_2998 = (void*)0;
                int *l_2999 = (void*)0;
                int *l_3000 = &g_116;
                int *l_3001 = &l_2995;
                int *l_3002 = &l_2988;
                int *l_3003 = (void*)0;
                int l_3004 = 1L;
                int *l_3005 = (void*)0;
                int *l_3006 = &g_116;
                int *l_3008 = &g_892;
                int *l_3009 = &l_2615;
                int *l_3010 = &l_2640;
                int *l_3011 = &g_762;
                int *l_3012 = &l_2891;
                int *l_3013 = &l_2916;
                int *l_3017 = &l_2488;
                int *l_3018 = &l_2640;
                int *l_3019 = &l_2966;
                int *l_3021 = &l_2975;
                int *l_3022 = &l_2966;
                int *l_3025 = (void*)0;
                int *l_3026 = &l_2995;
                int *l_3027 = &l_2975;
                int *l_3028 = &l_2891;
                int *l_3030 = &l_2916;
                int *l_3031 = &l_2891;
                int *l_3032 = (void*)0;
                int *l_3033 = (void*)0;
                int *l_3034 = &g_762;
                int *l_3035 = (void*)0;
                int *l_3036 = &l_2988;
                int *l_3037 = &g_116;
                int *l_3038 = (void*)0;
                int *l_3039 = &g_762;
                int *l_3040 = &l_2975;
                int *l_3041 = &l_2987;
                int *l_3042 = &l_2488;
                int *l_3043 = &g_892;
                int *l_3044 = (void*)0;
                int *l_3045 = (void*)0;
                int *l_3046 = &l_2891;
                int *l_3047 = &g_892;
                int *l_3048 = &l_3004;
                int *l_3049 = (void*)0;
                int *l_3050 = &l_2830;
                int *l_3051 = &l_2976;
                int *l_3052 = (void*)0;
                int *l_3053 = &l_2966;
                int *l_3054 = &l_2830;
                int *l_3055 = &l_2488;
                int *l_3056 = (void*)0;
                int *l_3057 = (void*)0;
                int *l_3058 = (void*)0;
                int *l_3059 = &g_449;
                int *l_3060 = &l_2615;
                int *l_3061 = &l_2995;
                int *l_3063 = &l_2500;
                int *l_3065 = &l_2392;
                int *l_3066 = &l_2916;
                int *l_3067 = &l_2917;
                int *l_3068 = &l_2392;
                int *l_3069 = &l_2916;
                int *l_3070 = (void*)0;
                int *l_3071 = &l_2428;
                int *l_3072 = &l_2975;
                int *l_3073 = &l_2476;
                int *l_3074 = &l_2988;
                int *l_3075 = &l_2640;
                int *l_3076 = &l_2488;
                int *l_3077 = &l_2476;
                int *l_3078 = &l_2891;
                int *l_3079 = &l_2917;
                int *l_3080 = &l_2995;
                int *l_3081 = &l_2995;
                int *l_3082 = &l_2476;
                int *l_3083 = (void*)0;
                int *l_3084 = &g_1832;
                int *l_3085 = &l_2428;
                int *l_3086 = &l_2988;
                int *l_3087 = &l_2488;
                int *l_3088 = &l_2975;
                int *l_3089 = &l_2500;
                int *l_3090 = &g_2201;
                int *l_3091 = &g_1832;
                int *l_3092 = (void*)0;
                int *l_3093 = &g_1817;
                int *l_3094 = &g_762;
                int *l_3095 = (void*)0;
                int *l_3096 = &l_2392;
                int *l_3097 = &g_762;
                int *l_3098 = &l_2916;
                int *l_3099 = &g_116;
                int *l_3100 = &l_2640;
                int *l_3101 = (void*)0;
                int *l_3102 = &l_2392;
                int *l_3103 = &g_762;
                int *l_3104 = &l_2988;
                int *l_3105 = (void*)0;
                int *l_3106 = &l_2966;
                int *l_3107 = &l_2615;
                int *l_3108 = &l_2917;
                int *l_3109 = &l_2916;
                int *l_3111 = &g_762;
                int *l_3112 = &l_2976;
                int *l_3113 = (void*)0;
                int *l_3114 = &g_116;
                int *l_3115 = &l_3110;
                int *l_3116 = &l_2975;
                int *l_3117 = &g_1817;
                int *l_3118 = &l_2975;
                int *l_3119 = (void*)0;
                ++g_3014;
                g_3120++;
            }
            else
            {
                long long l_3123 = 0xAF3F9637CD9C8D5DLL;
                unsigned ****l_3125 = &g_350;
                (*p_39) &= l_3123;
                (*l_2394) ^= (g_3124 == (&g_351 == ((*l_3125) = &g_351)));
            }
        }
        for (g_2985 = 0; (g_2985 < 27); g_2985 = safe_add_func_int32_t_s_s(g_2985, 8))
        {
            for (p_36 = 0; (p_36 > (-22)); p_36 = safe_sub_func_uint64_t_u_u(p_36, 9))
            {
                return (*p_39);
            }
        }
        (*l_3140) |= (safe_rshift_func_int16_t_s_u((p_35 , ((**l_2570) &= (safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint8_t_u_u((*g_375), (((((*l_2394) < ((l_3110 = (((*l_3138) = (((safe_lshift_func_int8_t_s_s(1L, 5)) , p_35) != (l_3110 , (0xC9L <= ((*l_2889) |= (((**l_2672) = ((**g_2218) & ((*p_39) >= 1L))) && p_35)))))) < (*l_2394))) > p_36)) | (-8L)) > g_3139) <= (*g_2219)))) , (**g_2218)), p_37)))), 10));
    }
    return (*p_39);
}







static char * func_46(unsigned p_47, unsigned p_48, char * p_49)
{
    long long l_2199 = 9L;
    unsigned short **l_2220 = &g_2219;
    int *l_2224 = &g_892;
    int l_2231 = 3L;
    unsigned long long **l_2279 = &g_359;
    unsigned **l_2285 = &g_84;
    unsigned **l_2287 = (void*)0;
    long long ****l_2290 = &g_1898;
    unsigned l_2313 = 5UL;
    char *l_2337 = &g_1095;
    short l_2351 = 0x7F5FL;
    int ***l_2352 = (void*)0;
    int ***l_2353 = (void*)0;
    int ***l_2354 = &g_209;
    if (l_2199)
    {
        int *l_2200 = &g_2201;
        int *l_2221 = (void*)0;
        int *l_2222 = &g_763;
        unsigned *l_2223 = &g_681;
        (*l_2200) &= (func_50(p_48) , 0L);
        (*l_2200) = ((((*l_2222) &= ((safe_add_func_uint32_t_u_u(((((((!(((safe_rshift_func_int16_t_s_u(0x3107L, 13)) && (safe_sub_func_int32_t_s_s(l_2199, 0xEE4C99BFL))) != (g_1114 &= 3L))) | (safe_rshift_func_int16_t_s_u((((safe_rshift_func_uint16_t_u_s((((*l_2200) , (safe_add_func_int64_t_s_s(((safe_sub_func_int32_t_s_s(((((safe_mod_func_uint16_t_u_u(l_2199, 2L)) , ((*l_2200) , p_47)) < (***g_1898)) ^ 1UL), (**g_351))) , p_47), (***g_1898)))) > l_2199), (*g_1688))) >= 1L) , (**g_1687)), l_2199))) && l_2199) | 0xB276AD98L) , g_2218) != l_2220), l_2199)) < 3UL)) && p_48) <= l_2199);
        (*g_209) = l_2224;
    }
    else
    {
        int *l_2225 = &g_1832;
        int *l_2226 = (void*)0;
        int *l_2227 = &g_449;
        int l_2228 = 0x42C9AC05L;
        int *l_2229 = (void*)0;
        int l_2230 = 5L;
        int *l_2232 = &l_2231;
        int *l_2233 = &l_2228;
        int *l_2234 = &g_449;
        int *l_2235 = &g_762;
        int *l_2236 = &g_1832;
        int *l_2237 = (void*)0;
        int *l_2238 = (void*)0;
        int *l_2239 = (void*)0;
        int *l_2240 = &g_116;
        int *l_2241 = (void*)0;
        int *l_2242 = &g_1832;
        int *l_2243 = &g_2201;
        int *l_2244 = &l_2230;
        int *l_2245 = (void*)0;
        int *l_2246 = (void*)0;
        int *l_2247 = &g_2201;
        int *l_2248 = &g_892;
        int *l_2249 = &g_116;
        int *l_2250 = &l_2231;
        int *l_2251 = &g_763;
        int *l_2252 = &g_449;
        int *l_2253 = &g_2201;
        int *l_2254 = &g_449;
        int *l_2255 = (void*)0;
        int *l_2256 = &l_2228;
        int *l_2257 = &l_2231;
        int l_2258 = 0x59F157AAL;
        int *l_2259 = &l_2231;
        int *l_2260 = &g_1817;
        int l_2261 = 6L;
        int *l_2262 = &g_762;
        int *l_2263 = &l_2228;
        int *l_2264 = &g_1817;
        int *l_2265 = &g_2201;
        int *l_2266 = &l_2258;
        int *l_2267 = &l_2231;
        int *l_2268 = &g_1832;
        int *l_2269 = &l_2228;
        int *l_2270 = &g_1817;
        int *l_2271 = (void*)0;
        unsigned l_2272 = 1UL;
        long long ****l_2291 = &g_1898;
        (*l_2224) |= p_48;
        (*g_209) = (((*l_2224) = (-1L)) , (void*)0);
        l_2272++;
        if (((p_47 & (++(***g_350))) & (l_2279 != &g_359)))
        {
            unsigned long long **l_2282 = &g_359;
            int l_2283 = 5L;
            int *l_2284 = &g_862;
            unsigned ***l_2286 = (void*)0;
            long long *****l_2292 = &g_1897;
            (*l_2224) |= (safe_add_func_int32_t_s_s(2L, (l_2282 != (g_358 = l_2279))));
            (*l_2224) = (((*l_2268) &= (((((*l_2224) ^ (((*l_2284) = ((p_48 & (!((**g_351) = ((*l_2250) = l_2283)))) == 6UL)) , ((l_2285 = ((*g_350) = l_2285)) == (((p_47 , (+((*g_1897) == (*g_1897)))) | p_47) , l_2287)))) , p_47) , 0x4CE7342E8A9540BFLL) , 1L)) <= p_48);
            if ((((((*l_2269) = l_2283) < (**g_351)) & (safe_rshift_func_int16_t_s_s((**g_1687), (((*l_2260) | (((*l_2224) | (l_2290 != ((*l_2292) = l_2291))) , ((p_48 > (safe_mod_func_uint16_t_u_u(((**l_2220) &= (*l_2224)), p_48))) >= l_2283))) < p_48)))) || p_47))
            {
                unsigned long long *l_2300 = &g_1266;
                unsigned long long **l_2299 = &l_2300;
                int l_2304 = 0x28D65811L;
                (*l_2256) |= ((safe_lshift_func_int16_t_s_u((*l_2250), 0)) < (0x0BCDF77975A60205LL != ((0L < ((*g_359) < func_50((((*l_2299) = (*g_358)) != (g_2301 = (*g_358)))))) <= (p_47 , ((safe_lshift_func_int16_t_s_u(l_2304, 1)) , 0x37L)))));
            }
            else
            {
                int l_2326 = 0x4B3B7EB3L;
                char *l_2329 = (void*)0;
                char **l_2330 = &g_2198;
                char *l_2331 = &g_1214;
                if (p_48)
                {
                    return p_49;
                }
                else
                {
                    unsigned l_2314 = 0x8F7BB1A7L;
                    if ((safe_lshift_func_uint16_t_u_s(0UL, 2)))
                    {
                        int l_2315 = 1L;
                        (*l_2225) = ((*l_2251) = ((*l_2267) = ((*l_2233) &= (safe_sub_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(p_48, 1)) <= (safe_sub_func_uint32_t_u_u(l_2313, l_2283))), l_2314)))));
                        l_2315 &= (-9L);
                    }
                    else
                    {
                        int **l_2316 = &l_2226;
                        unsigned char *l_2319 = &g_1849;
                        (*l_2316) = &l_2283;
                    }
                    (*l_2266) = (*l_2224);
                }
                if (((((*l_2331) ^= ((safe_rshift_func_uint8_t_u_u((**g_374), 3)) >= ((((l_2326 , p_49) == ((*l_2330) = l_2329)) && (p_48 , ((0x8245FB12FEBC5F2BLL < ((**g_374) < (-1L))) || (((*l_2265) & 0xF59A6162L) || (**g_2218))))) > l_2283))) && (-6L)) != (**g_374)))
                {
                    for (g_449 = 0; (g_449 != 12); ++g_449)
                    {
                        short ***l_2336 = &g_1687;
                        (*l_2253) = (safe_rshift_func_uint8_t_u_u((*l_2265), 3));
                        (*l_2336) = &g_1688;
                        return l_2337;
                    }
                    return p_49;
                }
                else
                {
                    int *l_2338 = &l_2231;
                    (*g_209) = l_2338;
                    (*l_2224) = (p_47 == l_2326);
                }
                (*g_209) = &l_2231;
            }
        }
        else
        {
            (*g_209) = &l_2231;
            l_2351 = (safe_sub_func_int32_t_s_s(p_47, 0xEAC3D54FL));
        }
    }
    (*l_2354) = &g_210;
    (**l_2354) = &g_3;
    return l_2337;
}







static unsigned long long func_50(unsigned long long p_51)
{
    int l_1964 = 0L;
    unsigned short *l_1971 = &g_152;
    int l_1992 = (-9L);
    int l_1993 = 5L;
    int *l_1994 = (void*)0;
    int *l_1995 = (void*)0;
    int *l_1996 = &g_116;
    int *l_1997 = &g_449;
    int *l_1998 = &g_449;
    int *l_1999 = &g_449;
    int *l_2000 = (void*)0;
    int *l_2001 = &l_1993;
    unsigned char l_2002 = 0x2FL;
    unsigned l_2020 = 18446744073709551615UL;
    unsigned char ***l_2021 = (void*)0;
    unsigned long long **l_2045 = &g_359;
    int *l_2051 = &g_116;
    long long l_2062 = (-7L);
    int l_2150 = 0L;
    unsigned char l_2158 = 0UL;
    long long ****l_2167 = &g_1898;
    if ((((safe_lshift_func_uint16_t_u_u(l_1964, (safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((**g_1687), l_1964)), (safe_add_func_uint16_t_u_u(g_194, ((void*)0 == l_1971))))))) <= (safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((safe_unary_minus_func_int32_t_s(0x4A92E5F8L)) && (0x51E2L != l_1964)), g_21)), 0x0AL))) || l_1964))
    {
        unsigned l_1983 = 0x0EDB3373L;
        int l_1986 = 0x479AE375L;
        int l_1991 = 0x22AEF60FL;
        l_1991 = (+((**g_351) ^ (safe_rshift_func_uint16_t_u_s((((safe_sub_func_int64_t_s_s((**g_773), p_51)) > ((++l_1983) <= ((0xE589A7D8A7451522LL == (g_330 != ((l_1986 = p_51) != (18446744073709551612UL ^ 0xC4F72BB816DB8766LL)))) ^ (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(l_1964, l_1964)), (*g_1688)))))) | g_31), 5))));
    }
    else
    {
        l_1993 = l_1992;
        return (**g_358);
    }
    (*g_209) = &l_1993;
    --l_2002;
    for (g_1119 = 0; (g_1119 > (-19)); --g_1119)
    {
        int l_2009 = 0x1FAF1BA4L;
        unsigned long long l_2030 = 0x87437BD877D2118ALL;
        long long *l_2043 = &g_1094;
        unsigned long long **l_2044 = &g_359;
        unsigned short l_2061 = 65526UL;
        int l_2107 = (-1L);
        char l_2168 = 0x46L;
        l_2009 = (safe_lshift_func_int8_t_s_u((p_51 <= (p_51 , 253UL)), ((l_2009 | (g_1405 > (0x51E30F9D820D0D98LL ^ p_51))) == g_100)));
        if ((safe_rshift_func_int16_t_s_u((g_21 , ((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s(((*l_1971) = ((((((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((((*g_774) ^ 0x06E5F351C8F1E2C7LL) > 0x340AL), l_2009)), (*l_1997))) & p_51) , (*l_1996)) <= l_2030) , p_51) == (*g_84))), 10)), 0x08AE2696DEC0DE6ALL)) < 65535UL)), p_51)))
        {
            long long *l_2042 = &g_893;
            int l_2049 = 0xC2D41008L;
            int *l_2050 = &l_2009;
            int l_2103 = 0x80F84E69L;
            for (g_1266 = (-5); (g_1266 > 11); g_1266 = safe_add_func_uint32_t_u_u(g_1266, 7))
            {
                int *l_2046 = &g_454;
                short *l_2047 = &g_330;
                int l_2048 = 0L;
                l_2049 = ((safe_add_func_uint64_t_u_u((0x3B38L != (safe_add_func_uint16_t_u_u((&g_210 == &l_1996), 0x92D0L))), (safe_unary_minus_func_uint8_t_u((safe_sub_func_uint16_t_u_u((((**g_773) |= (((((*l_2047) = ((*g_1688) ^= ((((*l_2046) &= ((((*g_84) ^= (safe_add_func_int32_t_s_s((l_2042 != l_2043), ((l_2044 != l_2045) , p_51)))) <= 0x44B34E4DL) , 1L)) , 0xFCL) , l_2030))) , 0x36A7E905L) , &g_116) != (void*)0)) | l_2048), 1UL)))))) ^ 0x0729DB80L);
                (*g_209) = &g_3;
                (*g_209) = l_2051;
            }
            for (g_85 = 22; (g_85 > 28); g_85 = safe_add_func_int8_t_s_s(g_85, 1))
            {
                unsigned char l_2060 = 1UL;
                int *l_2065 = &g_3;
                int l_2177 = (-8L);
                unsigned short *l_2185 = (void*)0;
                (*l_2050) ^= ((0x31E5966CL & (l_2030 | ((**g_1687) = (*g_1688)))) & (p_51 >= (safe_lshift_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(p_51, (safe_rshift_func_uint16_t_u_s((l_2060 <= p_51), 12)))), (l_2061 = (*l_2051))))));
                if (l_2060)
                    break;
                if ((l_2062 ^ (((*l_2050) | 1L) , (**g_773))))
                {
                    int *l_2066 = (void*)0;
                    int *l_2067 = &g_763;
                    int *l_2068 = &g_449;
                    int *l_2069 = &g_1817;
                    int *l_2070 = (void*)0;
                    int *l_2071 = &g_1817;
                    int *l_2072 = (void*)0;
                    int *l_2073 = (void*)0;
                    int *l_2074 = &g_116;
                    int *l_2075 = &g_892;
                    int *l_2076 = &l_2009;
                    int l_2077 = 6L;
                    int *l_2078 = &g_116;
                    int *l_2079 = &g_1817;
                    int *l_2080 = (void*)0;
                    int *l_2081 = &g_449;
                    int *l_2082 = &g_762;
                    int *l_2083 = &g_1817;
                    int *l_2084 = &g_449;
                    int *l_2085 = &l_2077;
                    int *l_2086 = &g_762;
                    int *l_2087 = &g_762;
                    int *l_2088 = &g_116;
                    int *l_2089 = &l_2077;
                    int *l_2090 = &g_763;
                    int *l_2091 = &l_1993;
                    int *l_2092 = &l_2009;
                    int *l_2093 = &g_449;
                    int *l_2094 = &g_892;
                    int *l_2095 = &g_762;
                    int *l_2096 = (void*)0;
                    int *l_2097 = &g_763;
                    int *l_2098 = &g_762;
                    int *l_2099 = &g_116;
                    int *l_2100 = &l_1993;
                    int *l_2101 = &g_1817;
                    int *l_2102 = &l_2009;
                    int *l_2104 = &g_763;
                    int *l_2105 = &g_762;
                    int *l_2106 = (void*)0;
                    int *l_2108 = &l_1993;
                    int *l_2109 = &l_2049;
                    int *l_2110 = &l_2103;
                    int *l_2111 = (void*)0;
                    int *l_2112 = &l_2103;
                    int *l_2113 = &g_1832;
                    int *l_2114 = &g_763;
                    int *l_2115 = &l_1993;
                    int *l_2116 = &g_449;
                    int *l_2117 = &l_1993;
                    int *l_2118 = &l_2009;
                    int *l_2119 = &g_1817;
                    int *l_2120 = &g_763;
                    int *l_2121 = &l_2103;
                    int *l_2122 = (void*)0;
                    int *l_2123 = &l_2077;
                    int *l_2124 = &g_116;
                    int *l_2125 = &l_2103;
                    int *l_2126 = &l_2009;
                    int *l_2127 = &l_2103;
                    int *l_2128 = &g_1817;
                    int *l_2129 = &l_1993;
                    int *l_2130 = &g_1817;
                    int *l_2131 = &l_1993;
                    int *l_2132 = &g_116;
                    int *l_2133 = &g_449;
                    int *l_2134 = &l_2049;
                    int *l_2135 = (void*)0;
                    int *l_2136 = &g_1832;
                    int *l_2137 = &g_892;
                    int *l_2138 = &l_2009;
                    int *l_2139 = &g_892;
                    int *l_2140 = &g_116;
                    int *l_2141 = &g_1817;
                    int *l_2142 = &l_2049;
                    int *l_2143 = (void*)0;
                    int *l_2144 = &l_1993;
                    int l_2145 = 0L;
                    int *l_2146 = &l_2145;
                    int *l_2147 = (void*)0;
                    int *l_2148 = (void*)0;
                    int *l_2149 = &l_2009;
                    for (g_1095 = 0; (g_1095 != (-2)); g_1095 = safe_sub_func_uint8_t_u_u(g_1095, 4))
                    {
                        (*g_209) = l_2065;
                    }
                    (*g_209) = &l_1993;
                    --g_2151;
                    if (((safe_rshift_func_uint8_t_u_u(((**g_374) = (l_2009 |= (*l_2065))), 2)) || p_51))
                    {
                        unsigned char l_2180 = 255UL;
                        (*l_2082) = 0xCBAE2482L;
                        (*l_2105) |= ((***g_350) , ((*l_2139) ^= (safe_mul_func_int16_t_s_s(((**g_1687) = l_2158), (!(safe_add_func_int8_t_s_s((*l_2065), (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(((safe_mod_func_int64_t_s_s(((****g_1897) ^= ((p_51 < (&g_1898 != l_2167)) , (*l_2051))), p_51)) != g_1214), 5)), (*l_2065))))))))));
                        (*l_2095) |= ((*l_2079) = ((*l_2065) & (((*l_1996) < g_454) | l_2168)));
                        (*l_2121) = ((*l_2114) = (p_51 || (safe_sub_func_int64_t_s_s(((((p_51 ^= (safe_add_func_uint32_t_u_u((**g_351), ((*l_2128) = (***g_350))))) & 0x86F04DC355C7C6D7LL) < (safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((((0x833D858EL & l_2177) & (safe_sub_func_int16_t_s_s(((*g_359) , (**g_1687)), (l_2180 || 0L)))) <= 0x68FE0AEEL), (*l_2050))) != (**g_358)), g_862))) | l_2009), (*g_774)))));
                    }
                    else
                    {
                        unsigned l_2181 = 0x71AA4F5BL;
                        if (l_2181)
                            break;
                        (*g_209) = &l_2145;
                        (*g_209) = (void*)0;
                    }
                }
                else
                {
                    (*l_1996) = (g_31 , p_51);
                    if ((*l_2065))
                        continue;
                    for (g_1832 = 0; (g_1832 <= (-25)); g_1832 = safe_sub_func_uint8_t_u_u(g_1832, 5))
                    {
                        unsigned l_2184 = 0xC202F9FFL;
                        unsigned short **l_2186 = &l_1971;
                        unsigned short *l_2187 = &g_31;
                        (*g_209) = (l_2107 , ((((*l_2043) = (l_2184 |= (((*g_1688) = (p_51 , (*l_2001))) < g_31))) || ((**g_358) != (**g_773))) , (((*l_2187) = (l_2185 == ((*l_2186) = ((((**g_351) | 0xE1EA20ECL) > (*l_2050)) , &g_886)))) , &g_1832)));
                    }
                }
            }
            (*l_1998) |= (safe_lshift_func_int8_t_s_u((1L <= (safe_lshift_func_uint8_t_u_s(l_2168, 4))), (--(**g_374))));
        }
        else
        {
            (*l_1996) = p_51;
            for (g_1642 = 16; (g_1642 < 12); --g_1642)
            {
                int l_2196 = (-1L);
                (*l_2001) = l_2168;
                if (l_2196)
                    continue;
            }
            return (**g_358);
        }
    }
    return (*l_1996);
}







static short func_54(char p_55)
{
    unsigned *l_78 = &g_79;
    long long l_82 = 0x89A0308336182647LL;
    char *l_83 = &g_30;
    int **l_86 = (void*)0;
    int ***l_1690 = &l_86;
    int *l_1880 = (void*)0;
    int *l_1881 = &g_1832;
    short ***l_1888 = &g_1687;
    long long l_1889 = 7L;
    int l_1891 = 0xFD8E01C4L;
    long long ****l_1896 = (void*)0;
    int l_1931 = 1L;
    int l_1940 = (-6L);
    short l_1961 = (-1L);
    if (((((l_1880 = func_56(((*l_1690) = func_62(g_3, ((**g_351) = ((p_55 < ((safe_lshift_func_uint16_t_u_s(((((p_55 , ((*l_1690) = func_67((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((p_55 >= 0x76L), (safe_lshift_func_int8_t_s_s(((*l_83) = (safe_sub_func_uint32_t_u_u(((*l_78) = 4294967287UL), (safe_lshift_func_uint16_t_u_u(l_82, 11))))), g_31)))), (((g_84 != (void*)0) && g_3) != p_55))), l_86))) != (void*)0) & 0x6B871B81A24A7510LL) , 0xB54BL), 14)) , p_55)) ^ 0x85L)))), l_82, p_55, p_55, p_55)) != l_1881) , (void*)0) != &l_1881))
    {
        unsigned short *l_1886 = &g_31;
        short ***l_1887 = &g_1687;
        int l_1890 = 9L;
        (*g_209) = &l_1890;
        return l_1890;
    }
    else
    {
        unsigned char l_1892 = 246UL;
        char *l_1895 = &g_1124;
        int *l_1899 = &g_1817;
        unsigned short *l_1904 = &g_21;
        short *l_1910 = &g_330;
        long long ****l_1911 = &g_1898;
        int l_1912 = 4L;
        int *l_1913 = (void*)0;
        int *l_1914 = &g_762;
        int *l_1915 = &g_1817;
        int *l_1916 = &g_763;
        int *l_1917 = &g_763;
        int l_1918 = 0xB6B593C1L;
        int *l_1919 = &l_1912;
        int *l_1920 = &g_1817;
        int *l_1921 = &g_449;
        int *l_1922 = &g_449;
        int *l_1923 = &g_762;
        int *l_1924 = &l_1918;
        int *l_1925 = &g_1832;
        int l_1926 = 0x947DA666L;
        int *l_1927 = &g_116;
        int *l_1928 = &g_892;
        int *l_1929 = &g_762;
        int *l_1930 = &l_1926;
        int *l_1932 = &l_1931;
        int *l_1933 = &l_1891;
        int *l_1934 = (void*)0;
        int *l_1935 = (void*)0;
        int *l_1936 = &g_763;
        int *l_1937 = &l_1926;
        int *l_1938 = &l_1926;
        int *l_1939 = &g_762;
        int *l_1941 = &g_763;
        int *l_1942 = &l_1926;
        int *l_1943 = &g_1817;
        int l_1944 = (-3L);
        int *l_1945 = (void*)0;
        int *l_1946 = &l_1940;
        int *l_1947 = &g_116;
        int *l_1948 = &g_762;
        int *l_1949 = &g_763;
        int *l_1950 = &g_763;
        int *l_1951 = &l_1891;
        int *l_1952 = &g_763;
        int *l_1953 = &l_1891;
        int *l_1954 = &l_1918;
        int *l_1955 = &g_892;
        int *l_1956 = &l_1918;
        int *l_1957 = &l_1940;
        unsigned l_1958 = 0x7CB75E15L;
        (*l_1881) = ((((((l_1892 > (0x9BB8A66C6AE84531LL & ((**g_773) = (**g_773)))) <= 1L) || p_55) , (l_1892 >= ((safe_sub_func_int32_t_s_s((((((((((g_1405 , l_1895) != l_83) , l_1896) == g_1897) == 9L) && 0x2FL) && g_3) , 0xC0D2C0ACC4FB5A66LL) > 0xA06BE5007FB849F7LL), 0x2981B61EL)) , 1L))) == (**g_374)) ^ 0UL);
        (*l_1899) = ((((**g_1687) = ((p_55 , (((**g_350) = (**g_350)) == (void*)0)) >= (((**g_358)--) , (safe_rshift_func_uint16_t_u_s((--(*l_1904)), 5))))) || (~((**g_1687) = ((*l_1910) ^= ((((*l_1880) <= 0x9A51C98AEA13C7BDLL) <= (safe_sub_func_uint64_t_u_u((((((safe_unary_minus_func_uint64_t_u((**g_358))) < p_55) | (**g_1687)) && (*g_359)) & p_55), p_55))) && 252UL))))) , p_55);
        (*l_1899) &= ((**g_374) && ((*l_1881) |= ((l_1911 == l_1911) & ((*l_1880) , 9L))));
        l_1958--;
    }
    (*l_1880) = l_1961;
    (*l_1881) = ((*g_1688) || ((p_55 | p_55) == (*g_84)));
    return (*g_1688);
}







static int * func_56(int ** p_57, unsigned p_58, unsigned p_59, char p_60, char p_61)
{
    short l_1853 = 0x5A8CL;
    int l_1854 = 2L;
    unsigned long long l_1866 = 0x38FD16F789D07E88LL;
    int *l_1878 = &l_1854;
    int **l_1877 = &l_1878;
    int *l_1879 = &g_116;
    l_1854 ^= l_1853;
    if (l_1854)
    {
        unsigned char l_1858 = 249UL;
        int l_1859 = (-3L);
        for (g_743 = 0; (g_743 != 13); g_743 = safe_add_func_uint32_t_u_u(g_743, 5))
        {
            unsigned char l_1857 = 0UL;
            l_1858 = l_1857;
            l_1859 = 0xAF50BDF2L;
        }
    }
    else
    {
        int *l_1860 = &g_449;
        int *l_1861 = &g_763;
        int *l_1862 = &g_116;
        int *l_1863 = &g_762;
        int l_1864 = 0x7600CCE1L;
        int *l_1865 = &g_116;
        unsigned *l_1871 = &g_588;
        l_1866--;
        (*g_209) = func_89((*g_84), (**g_350), p_58, ((safe_sub_func_int8_t_s_s((p_59 , (l_1854 != ((*l_1871) = ((*g_774) , p_59)))), p_61)) , (-1L)));
        for (g_100 = 0; (g_100 < 46); g_100 = safe_add_func_int64_t_s_s(g_100, 7))
        {
            if (l_1854)
                break;
        }
    }
    for (g_189 = 13; (g_189 < 49); g_189++)
    {
        int *l_1876 = &g_892;
        (*g_209) = l_1876;
        return l_1876;
    }
    (*l_1877) = (p_60 , ((*g_209) = &l_1854));
    return l_1879;
}







static int ** func_62(short p_63, unsigned p_64)
{
    long long **l_1695 = &g_774;
    int l_1701 = 0x00C85D9CL;
    short **l_1719 = &g_1688;
    int **l_1852 = (void*)0;
    for (g_195 = 0; (g_195 == 42); g_195 = safe_add_func_uint64_t_u_u(g_195, 9))
    {
        unsigned l_1696 = 0x4C42FFC6L;
        long long *l_1699 = &g_1094;
        long long *l_1700 = &g_412;
        int l_1702 = 0x2743CA13L;
        char *l_1703 = &g_106;
        int *l_1704 = (void*)0;
        int *l_1705 = &g_116;
        (*l_1705) = (((**g_773) , ((*l_1703) = ((safe_rshift_func_int16_t_s_s(((void*)0 != l_1695), l_1696)) || (safe_rshift_func_uint8_t_u_u((p_63 < (18446744073709551615UL >= (((l_1696 && (l_1702 = (((g_893 = ((*l_1700) = ((*l_1699) &= ((**g_773) = (*g_774))))) ^ ((l_1701 >= 9L) & g_116)) >= 0x36L))) <= p_63) | p_63))), 1))))) , l_1702);
        if (p_64)
            break;
        for (g_30 = 0; (g_30 <= (-8)); g_30 = safe_sub_func_int8_t_s_s(g_30, 4))
        {
            int *l_1708 = &g_763;
            int *l_1709 = &g_116;
            unsigned long long l_1710 = 18446744073709551611UL;
            unsigned long long ***l_1721 = &g_358;
            (*l_1705) = 0xCCCEB922L;
            l_1710--;
            if (p_63)
                continue;
            for (g_21 = (-9); (g_21 > 1); g_21++)
            {
                short l_1760 = 0xC9DBL;
                int l_1761 = 0xB20CCB4AL;
                int l_1762 = 0xBF1CB59FL;
                int l_1788 = (-9L);
                int l_1805 = 9L;
                if (p_64)
                    break;
                for (g_894 = 0; (g_894 == 47); ++g_894)
                {
                    unsigned char l_1740 = 0UL;
                    int l_1811 = 0xCA2E0828L;
                    int l_1838 = 4L;
                    for (g_161 = 0; (g_161 <= 39); g_161++)
                    {
                        short ***l_1720 = &g_1687;
                        int *l_1722 = &g_449;
                        int *l_1723 = &l_1702;
                        int *l_1724 = &l_1701;
                        int *l_1725 = &g_763;
                        int *l_1726 = &g_449;
                        int *l_1727 = (void*)0;
                        int *l_1728 = &g_116;
                        int *l_1729 = &g_763;
                        int l_1730 = 0x4CA5C4BFL;
                        int *l_1731 = &g_762;
                        int *l_1732 = (void*)0;
                        int l_1733 = 0xF3348631L;
                        int *l_1734 = &g_116;
                        int *l_1735 = &l_1702;
                        int *l_1736 = &l_1702;
                        int *l_1737 = &g_116;
                        int *l_1738 = &l_1733;
                        int *l_1739 = &l_1701;
                        (*l_1720) = l_1719;
                        (*l_1708) ^= ((void*)0 == l_1721);
                        --l_1740;
                    }
                    if ((((1UL < (++(***g_350))) >= (p_64 , (safe_lshift_func_int16_t_s_u((*l_1705), 2)))) || ((l_1701 >= (l_1701 & p_64)) , (((**g_351) &= ((*l_1705) , p_64)) == (0x724B6B6C63AE7628LL <= 0x7E9BFB940A927DA7LL)))))
                    {
                        unsigned char *l_1753 = (void*)0;
                        unsigned char *l_1754 = &l_1740;
                        unsigned char *l_1755 = &g_1486;
                        unsigned char *l_1756 = &g_539;
                        unsigned long long l_1757 = 18446744073709551615UL;
                        (*g_209) = func_89((safe_add_func_uint16_t_u_u(g_105, (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((*l_1754) &= p_64), 5)), (((((*l_1756) = ((*l_1709) &= ((*l_1755) |= p_63))) > l_1757) , (*g_774)) <= (((p_64 < (p_63 <= 18446744073709551615UL)) , (safe_sub_func_uint64_t_u_u(((***g_350) == (***g_350)), p_63))) & 0x81L)))))), (**g_350), (**g_1687), l_1760);
                        if (l_1757)
                            continue;
                    }
                    else
                    {
                        int *l_1763 = &g_116;
                        int *l_1764 = &g_892;
                        int *l_1765 = &g_892;
                        int *l_1766 = &g_892;
                        int *l_1767 = (void*)0;
                        int *l_1768 = &g_892;
                        int l_1769 = 0x3FDC32D3L;
                        int *l_1770 = &l_1769;
                        int *l_1771 = &g_892;
                        int *l_1772 = &g_892;
                        int *l_1773 = (void*)0;
                        int l_1774 = 0xC9E0EFC0L;
                        int *l_1775 = &l_1762;
                        int *l_1776 = &l_1701;
                        int *l_1777 = &g_762;
                        int *l_1778 = &g_449;
                        int *l_1779 = &g_116;
                        int l_1780 = 0x1ABF8AA3L;
                        int *l_1781 = &g_449;
                        int *l_1782 = &l_1769;
                        int *l_1783 = &l_1702;
                        int *l_1784 = &g_449;
                        int *l_1785 = (void*)0;
                        int *l_1786 = &l_1774;
                        int *l_1787 = &g_763;
                        int *l_1789 = &g_762;
                        int *l_1790 = &g_892;
                        int *l_1791 = &l_1702;
                        int *l_1792 = &l_1761;
                        int *l_1793 = &l_1761;
                        int *l_1794 = &l_1769;
                        int *l_1795 = &l_1701;
                        int *l_1796 = &l_1769;
                        int *l_1797 = &l_1780;
                        int *l_1798 = (void*)0;
                        int *l_1799 = (void*)0;
                        int *l_1800 = &l_1788;
                        int *l_1801 = &g_892;
                        int *l_1802 = &g_763;
                        int *l_1803 = &g_449;
                        int *l_1804 = (void*)0;
                        int *l_1806 = &g_116;
                        int *l_1807 = (void*)0;
                        int *l_1808 = &g_763;
                        int *l_1809 = &g_762;
                        int *l_1810 = (void*)0;
                        int *l_1812 = &l_1762;
                        int *l_1813 = &g_892;
                        int *l_1814 = &g_116;
                        int *l_1815 = &g_892;
                        int *l_1816 = &l_1701;
                        int *l_1818 = &g_762;
                        int *l_1819 = &l_1811;
                        int *l_1820 = &l_1701;
                        int *l_1821 = &g_763;
                        int *l_1822 = &g_1817;
                        int *l_1824 = &l_1769;
                        int *l_1825 = (void*)0;
                        int *l_1826 = (void*)0;
                        int *l_1827 = &l_1701;
                        int *l_1828 = (void*)0;
                        int *l_1829 = &l_1805;
                        int *l_1830 = &l_1769;
                        int *l_1831 = &l_1780;
                        int *l_1833 = &l_1769;
                        int *l_1834 = &g_892;
                        int *l_1835 = &g_449;
                        int *l_1836 = &l_1769;
                        int *l_1837 = &g_1817;
                        int *l_1839 = &l_1762;
                        int *l_1840 = &l_1702;
                        int *l_1841 = &l_1774;
                        int *l_1842 = (void*)0;
                        int *l_1843 = (void*)0;
                        int *l_1844 = (void*)0;
                        int *l_1845 = &l_1780;
                        int *l_1846 = &g_116;
                        int *l_1847 = (void*)0;
                        int *l_1848 = &l_1774;
                        --g_1849;
                    }
                }
                (*g_209) = func_89((*g_84), func_89((**g_351), l_1708, p_64, (((*g_774) , (((p_63 , (**g_351)) , (((((*l_1709) , 0x3243FA6A3E14575DLL) > (**g_773)) | (*l_1705)) | p_63)) | g_30)) >= l_1762)), (**g_1687), l_1762);
            }
        }
    }
    return l_1852;
}







static int ** func_67(char p_68, int ** p_69)
{
    char l_94 = 1L;
    int **l_1686 = &g_746;
    short ***l_1689 = &g_1687;
    for (g_21 = 23; (g_21 == 51); g_21 = safe_add_func_int64_t_s_s(g_21, 5))
    {
        unsigned char *l_99 = &g_100;
        int l_101 = 0x846C248BL;
        unsigned char *l_104 = &g_105;
        int **l_1685 = &g_746;
        (*l_1685) = func_89(l_94, func_95(((*l_99) = l_94), (~(((g_30 < g_79) , l_101) > (l_101 ^ l_94))), ((((safe_lshift_func_int8_t_s_u(p_68, 2)) & (((g_106 = ((*l_104) = l_101)) <= l_101) , (*g_84))) , g_3) , &g_3)), p_68, g_681);
        return l_1686;
    }
    (*l_1689) = g_1687;
    (*g_210) &= l_94;
    return &g_210;
}







static int * func_89(unsigned p_90, unsigned * p_91, short p_92, int p_93)
{
    unsigned long long l_1669 = 0x18D072E0F5977E5ELL;
    char **l_1670 = (void*)0;
    char ***l_1671 = &g_796;
    char ***l_1672 = (void*)0;
    char *l_1675 = &g_1405;
    char **l_1674 = &l_1675;
    char ***l_1673 = &l_1674;
    char **l_1677 = &l_1675;
    char ***l_1676 = &l_1677;
    unsigned *l_1678 = &g_1138;
    unsigned char **l_1683 = &g_375;
    int l_1684 = (-1L);
    l_1684 &= ((((g_886 != (((l_1669 = g_763) , (((l_1670 != ((*l_1676) = ((*l_1673) = ((*l_1671) = l_1670)))) | ((*l_1678) ^= (**g_351))) ^ (safe_rshift_func_uint16_t_u_u(l_1669, 6)))) != (safe_lshift_func_uint16_t_u_u(65535UL, 10)))) , l_1683) != (void*)0) , p_93);
    return (*g_209);
}







static unsigned * func_95(unsigned char p_96, unsigned p_97, int * p_98)
{
    int l_131 = (-3L);
    unsigned **l_328 = &g_84;
    unsigned short l_360 = 0xFED3L;
    short *l_478 = &g_330;
    int l_500 = 0xEA91B572L;
    int l_518 = 0L;
    unsigned short l_652 = 0xBD5DL;
    int ***l_686 = (void*)0;
    unsigned char l_786 = 0xE4L;
    long long ***l_907 = &g_773;
    int l_1006 = 0x5EDE5F77L;
    char l_1014 = 0L;
    unsigned l_1015 = 1UL;
    int l_1071 = 0xFA38DCCDL;
    int l_1079 = (-2L);
    int l_1084 = (-10L);
    int l_1088 = 0x8B243DF2L;
    int l_1092 = 0x8E62BE37L;
    int l_1115 = 0xF23DB2A0L;
    unsigned short l_1199 = 0x7B1FL;
    unsigned char **l_1209 = (void*)0;
    int *l_1220 = (void*)0;
    unsigned long long l_1235 = 4UL;
    char *l_1236 = &g_1095;
    long long l_1237 = 0x865EBA0DD28C9EA3LL;
    unsigned l_1239 = 0x3F543CEBL;
    unsigned l_1249 = 0xC454E89FL;
    short l_1350 = 0xD2F1L;
    char l_1374 = 0xF0L;
    long long l_1407 = 0x2598ADEC3674EB0ALL;
    int *l_1496 = &l_1115;
    unsigned long long l_1626 = 18446744073709551615UL;
    int l_1658 = 0xD75702A7L;
    for (g_85 = (-13); (g_85 <= 53); g_85 = safe_add_func_uint8_t_u_u(g_85, 4))
    {
        unsigned **l_126 = &g_84;
        int l_141 = 0x60EFD82BL;
        int l_149 = (-6L);
        int *l_212 = (void*)0;
        int *l_213 = &l_149;
        unsigned short l_216 = 0x4045L;
        int l_258 = 6L;
        short *l_316 = &g_239;
        long long l_317 = 0xC0569548CA7A099DLL;
        unsigned l_329 = 0x6A1FD85AL;
        unsigned ***l_353 = &g_351;
        unsigned long long **l_372 = &g_359;
        unsigned char l_760 = 255UL;
        long long *l_766 = &g_412;
        int l_909 = 0x3769C288L;
        int *l_910 = (void*)0;
        int *l_911 = &l_909;
        int *l_912 = &l_909;
        int *l_913 = &g_763;
        int *l_914 = &l_909;
        int *l_915 = (void*)0;
        int *l_916 = (void*)0;
        int *l_917 = &g_449;
        int *l_918 = &g_449;
        int *l_919 = &g_762;
        int *l_920 = &g_892;
        int *l_921 = (void*)0;
        int *l_922 = &l_258;
        int *l_923 = &g_762;
        int *l_924 = &g_762;
        int *l_925 = &g_762;
        int *l_926 = (void*)0;
        int *l_927 = &l_909;
        int *l_928 = (void*)0;
        int *l_929 = &g_762;
        int *l_930 = &l_258;
        int *l_931 = &g_116;
        int *l_932 = &g_892;
        int *l_933 = &l_909;
        int *l_934 = &g_763;
        int *l_935 = (void*)0;
        int *l_936 = &g_116;
        int *l_937 = &l_500;
        int *l_938 = &l_518;
        int *l_939 = &g_892;
        int *l_940 = &l_131;
        int *l_941 = &l_500;
        int *l_942 = &l_500;
        int *l_943 = &g_762;
        int *l_944 = &g_762;
        int *l_945 = (void*)0;
        int *l_946 = &g_116;
        int *l_947 = &g_892;
        int *l_948 = (void*)0;
        int *l_949 = &g_116;
        int *l_950 = &l_141;
        int *l_951 = (void*)0;
        int *l_952 = (void*)0;
        int *l_953 = &g_762;
        int *l_954 = &l_258;
        int *l_955 = &g_763;
        int *l_956 = (void*)0;
        int *l_957 = &g_449;
        int *l_958 = &g_763;
        int *l_959 = &l_909;
        int *l_960 = &g_892;
        int *l_961 = (void*)0;
        int *l_962 = &l_909;
        int *l_963 = &l_131;
        int *l_964 = &l_131;
        int *l_965 = &l_909;
        int *l_966 = &l_131;
        int *l_967 = &l_141;
        int *l_968 = &g_763;
        int *l_969 = &g_763;
        int *l_970 = (void*)0;
        int *l_971 = &l_500;
        int *l_972 = &l_500;
        int *l_973 = (void*)0;
        int *l_974 = &l_909;
        int *l_975 = &l_149;
        int *l_976 = &g_763;
        int *l_977 = &g_762;
        int *l_978 = &g_762;
        int *l_979 = &l_500;
        int *l_980 = &g_892;
        int *l_981 = &l_258;
        int *l_982 = &l_909;
        int *l_983 = (void*)0;
        int *l_984 = (void*)0;
        int *l_985 = &l_518;
        int *l_986 = (void*)0;
        int *l_987 = &l_149;
        int *l_988 = &g_763;
        int *l_989 = &g_116;
        int *l_990 = &l_909;
        int *l_991 = &l_909;
        int *l_992 = &l_131;
        int *l_993 = &g_116;
        int *l_994 = (void*)0;
        int *l_995 = &l_500;
        int *l_996 = &g_116;
        int *l_997 = &g_762;
        int *l_998 = &l_500;
        int *l_999 = &l_131;
        int *l_1000 = (void*)0;
        int *l_1001 = &l_500;
        int *l_1002 = &l_149;
        int *l_1003 = (void*)0;
        int *l_1004 = &l_149;
        int *l_1005 = &l_909;
        int *l_1007 = &g_762;
        int *l_1008 = &g_116;
        int *l_1009 = &g_762;
        int *l_1010 = &g_762;
        for (g_31 = (-5); (g_31 != 47); g_31 = safe_add_func_int8_t_s_s(g_31, 9))
        {
            char l_119 = 0x10L;
            int l_193 = (-1L);
            int l_266 = 1L;
            int l_271 = 2L;
            unsigned **l_296 = &g_84;
            long long l_306 = 0x8C3D5F11A4D7BC63LL;
            int **l_320 = &l_213;
            int ***l_321 = &g_209;
            unsigned *l_354 = (void*)0;
            unsigned l_361 = 18446744073709551615UL;
            for (p_96 = 0; (p_96 == 21); p_96++)
            {
                unsigned l_123 = 0xC190CC4BL;
                int l_129 = 1L;
                int l_140 = 1L;
                int *l_165 = &l_131;
                int **l_164 = &l_165;
                unsigned l_208 = 4294967295UL;
                int ***l_211 = &g_209;
                if ((*p_98))
                {
                    if (g_100)
                    {
                        int *l_114 = (void*)0;
                        int **l_113 = &l_114;
                        (*l_113) = &g_3;
                    }
                    else
                    {
                        int *l_115 = &g_116;
                        int *l_117 = &g_116;
                        int *l_118 = &g_116;
                        int *l_120 = &g_116;
                        int *l_121 = &g_116;
                        int *l_122 = &g_116;
                        unsigned ***l_127 = &l_126;
                        (*l_115) &= g_31;
                        ++l_123;
                        (*l_127) = l_126;
                        if ((*l_118))
                            break;
                    }
                    if ((g_116 = g_79))
                    {
                        int *l_128 = &g_116;
                        int *l_130 = &l_129;
                        int *l_132 = (void*)0;
                        int *l_133 = &g_116;
                        int *l_134 = &l_129;
                        int *l_135 = &l_131;
                        int *l_136 = (void*)0;
                        int *l_137 = &l_131;
                        int *l_138 = &l_131;
                        int *l_139 = &l_131;
                        int *l_142 = &l_129;
                        int *l_143 = &g_116;
                        int *l_144 = &l_131;
                        int *l_145 = &g_116;
                        int *l_146 = &l_140;
                        int *l_147 = &g_116;
                        int *l_148 = &l_131;
                        int *l_150 = &l_129;
                        int *l_151 = (void*)0;
                        (*l_128) &= (0x2632L && l_119);
                        --g_152;
                    }
                    else
                    {
                        int *l_156 = &l_140;
                        int **l_155 = &l_156;
                        (*l_155) = p_98;
                    }
                }
                else
                {
                    int *l_158 = (void*)0;
                    int **l_157 = &l_158;
                    unsigned long long *l_159 = (void*)0;
                    unsigned long long *l_160 = &g_161;
                    char *l_204 = &g_106;
                    unsigned short *l_207 = &g_152;
                    (*l_157) = &l_129;
                    (**l_157) ^= (l_119 || ((*l_160) = 0x462423037FF7E953LL));
                    if ((safe_rshift_func_int16_t_s_u((((g_161 , &g_3) != &g_3) , ((*g_84) == (g_106 , ((l_164 != (void*)0) & (+(safe_rshift_func_int8_t_s_u((1L | (*l_158)), p_96))))))), g_79)))
                    {
                        int *l_168 = &l_149;
                        int *l_169 = &g_116;
                        int *l_170 = &l_131;
                        int *l_171 = &l_129;
                        int *l_172 = &l_141;
                        int *l_173 = &l_131;
                        int *l_174 = &l_131;
                        int *l_175 = (void*)0;
                        int *l_176 = &l_149;
                        int *l_177 = &g_116;
                        int *l_178 = &l_129;
                        int *l_180 = &l_140;
                        int *l_181 = &l_131;
                        int *l_182 = &g_116;
                        int *l_183 = (void*)0;
                        int *l_184 = &l_129;
                        int *l_185 = &g_116;
                        int *l_186 = &l_141;
                        int *l_187 = &l_140;
                        int *l_188 = &l_140;
                        int *l_192 = &l_129;
                        --g_189;
                        (*l_157) = &l_131;
                        (*l_157) = l_192;
                    }
                    else
                    {
                        (**l_164) = (*p_98);
                        --g_195;
                    }
                    l_208 |= (safe_mod_func_int8_t_s_s((((*l_207) = (((safe_lshift_func_int8_t_s_s(((l_193 , (~0L)) != (*l_165)), ((*l_204) = 0xAEL))) > 5L) == (((*p_98) , (safe_lshift_func_int16_t_s_s(((g_189 <= g_100) || ((*l_158) = g_152)), (**l_164)))) >= g_179))) <= (-1L)), 0xE4L));
                }
                (*l_165) ^= g_179;
                (*l_211) = g_209;
            }
        }
    }
    if (((*p_98) & 0xC53004C5L))
    {
        (*g_210) &= (p_96 >= ((((*g_774) , (*g_359)) < ((((l_1014 ^ 0UL) | (((&g_375 == &g_375) , (*g_375)) || l_1015)) , (*g_375)) , (**g_358))) <= g_534));
    }
    else
    {
        int *l_1016 = &l_500;
        int *l_1017 = &l_518;
        int *l_1018 = &l_500;
        int *l_1019 = &g_763;
        int *l_1020 = (void*)0;
        int *l_1021 = &g_449;
        int *l_1022 = &l_1006;
        int *l_1023 = &l_500;
        int *l_1024 = &g_892;
        int *l_1025 = &l_131;
        int *l_1026 = &g_762;
        int *l_1027 = &l_518;
        int *l_1028 = (void*)0;
        int *l_1029 = &l_500;
        int *l_1030 = &g_762;
        int *l_1031 = &l_500;
        int *l_1032 = &g_892;
        int *l_1033 = &g_116;
        int *l_1034 = &l_500;
        int *l_1035 = &g_892;
        int *l_1036 = &l_500;
        int *l_1037 = &g_116;
        int *l_1038 = &g_116;
        int *l_1039 = &g_763;
        int *l_1040 = &g_116;
        int *l_1041 = &g_762;
        int *l_1042 = &g_763;
        int *l_1043 = &g_762;
        int *l_1044 = (void*)0;
        int *l_1045 = &g_449;
        int *l_1046 = &g_763;
        int l_1047 = 0xB13339AFL;
        int *l_1048 = &g_116;
        int *l_1049 = &g_116;
        int *l_1050 = &l_1047;
        int *l_1051 = (void*)0;
        int *l_1052 = &g_762;
        int l_1053 = 0xE247480EL;
        int *l_1054 = &l_1006;
        int *l_1055 = &l_1006;
        int l_1056 = (-4L);
        int l_1057 = (-1L);
        int *l_1058 = &g_449;
        int *l_1059 = &l_1053;
        int *l_1060 = &l_1057;
        int *l_1061 = &g_449;
        int *l_1062 = &g_763;
        int *l_1063 = (void*)0;
        int *l_1064 = &g_763;
        int *l_1065 = &g_762;
        int *l_1066 = &g_892;
        int *l_1067 = (void*)0;
        int *l_1068 = &l_1056;
        int *l_1069 = &l_1053;
        int l_1070 = 0x557E9FCBL;
        int *l_1072 = &g_892;
        int l_1073 = 8L;
        int *l_1074 = &g_762;
        int *l_1075 = &g_763;
        int *l_1076 = &l_1053;
        int *l_1077 = &g_763;
        int *l_1078 = (void*)0;
        int *l_1080 = &l_1071;
        int *l_1081 = &l_518;
        int *l_1082 = &l_1057;
        int *l_1083 = &l_1006;
        int *l_1085 = &l_1047;
        int *l_1086 = &l_131;
        int *l_1087 = (void*)0;
        int *l_1089 = &l_518;
        int *l_1090 = &g_762;
        int *l_1091 = &l_1079;
        int *l_1093 = &l_500;
        int *l_1096 = &l_1084;
        int *l_1097 = (void*)0;
        int *l_1098 = &g_892;
        int *l_1099 = &l_1073;
        int *l_1100 = &l_518;
        int *l_1101 = &l_1070;
        int *l_1102 = &g_892;
        int *l_1103 = &g_762;
        int *l_1104 = &l_1057;
        int l_1105 = 1L;
        int *l_1106 = &l_500;
        int *l_1107 = &g_116;
        int l_1108 = 0x47D0DCECL;
        int l_1109 = 0x05680592L;
        int *l_1110 = &l_1092;
        int *l_1111 = &l_500;
        int *l_1112 = &l_1092;
        int *l_1113 = &l_1092;
        int *l_1116 = &l_1079;
        int *l_1117 = &g_763;
        int *l_1118 = (void*)0;
        int *l_1120 = &l_1115;
        int *l_1121 = &l_1088;
        int *l_1122 = &l_1056;
        int *l_1123 = &l_1079;
        int *l_1125 = &g_762;
        int *l_1126 = (void*)0;
        int *l_1127 = &l_1056;
        int *l_1128 = &g_763;
        int *l_1129 = (void*)0;
        int *l_1130 = &g_449;
        int *l_1131 = &g_449;
        int *l_1132 = (void*)0;
        int *l_1133 = &g_116;
        int *l_1134 = &g_763;
        int *l_1135 = &l_1053;
        int *l_1136 = &g_763;
        int *l_1137 = &l_1006;
        long long **l_1155 = &g_774;
        int ***l_1219 = &g_209;
        --g_1138;
        for (g_105 = 13; (g_105 <= 55); g_105 = safe_add_func_int32_t_s_s(g_105, 5))
        {
            unsigned long long ***l_1146 = &g_358;
            int l_1174 = 0x46774A5BL;
            int l_1175 = 0x694DFDF1L;
            long long l_1215 = (-10L);
            unsigned long long l_1216 = 0xEB64B9C2C9F82D43LL;
            (*g_209) = p_98;
            for (l_652 = 15; (l_652 < 39); l_652 = safe_add_func_int64_t_s_s(l_652, 6))
            {
                char l_1145 = 3L;
                unsigned short l_1173 = 1UL;
                unsigned l_1192 = 0xC491E59BL;
                int l_1195 = (-1L);
            }
            if (l_1199)
            {
                unsigned long long l_1211 = 18446744073709551611UL;
                (*g_209) = (void*)0;
                (*l_1025) = l_1174;
                if (((void*)0 != g_796))
                {
                    short l_1206 = 0xE855L;
                    (*l_1101) &= (*p_98);
                    for (g_1011 = (-1); (g_1011 >= 25); g_1011 = safe_add_func_uint64_t_u_u(g_1011, 7))
                    {
                        unsigned char **l_1208 = &g_375;
                        unsigned char ***l_1207 = &l_1208;
                        unsigned short *l_1210 = &g_31;
                        (*l_1064) &= (((*l_1210) = (safe_add_func_uint16_t_u_u((p_96 , ((**g_374) ^ ((safe_sub_func_int32_t_s_s(((*p_98) && (l_1206 != 0xECA61124L)), p_96)) , (((*l_1207) = &g_375) == l_1209)))), g_105))) & l_1211);
                        if ((*l_1111))
                            break;
                    }
                    (*l_1117) = (((*l_1146) = &g_359) == (void*)0);
                }
                else
                {
                    for (l_1108 = 0; (l_1108 == (-6)); l_1108--)
                    {
                        if ((*p_98))
                            break;
                    }
                }
            }
            else
            {
                return p_98;
            }
            ++l_1216;
        }
        (*l_1219) = &g_746;
    }
    l_1006 &= 1L;
    if (((18446744073709551608UL | (((p_97 ^ ((((((-8L) ^ 0L) , ((*g_359)++)) || (safe_add_func_int8_t_s_s(0L, ((((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s(((**g_358) == (safe_sub_func_int16_t_s_s(((*l_478) = l_1235), (((((**g_773) != (((*l_1236) = p_96) || 0x09L)) , 65535UL) != g_116) && 2UL)))), l_1237)), g_1238)) & (*p_98)) , l_652) <= p_96)))) , &l_1209) != &l_1209)) , p_96) < 0x7AL)) && (*p_98)))
    {
        unsigned l_1242 = 4294967293UL;
        unsigned char l_1245 = 0x32L;
        unsigned char *l_1246 = &g_100;
        unsigned short *l_1250 = (void*)0;
        unsigned short *l_1251 = (void*)0;
        unsigned short *l_1252 = &g_31;
        int *l_1253 = &g_449;
        unsigned short *l_1254 = &l_360;
        int l_1255 = 4L;
        unsigned l_1256 = 1UL;
        l_1255 = (((&g_374 != (void*)0) | (*g_375)) ^ ((*l_1254) = (((((((*l_1253) = (((**g_358) &= (((*l_1236) = 0x9EL) != l_1239)) <= ((safe_lshift_func_uint8_t_u_s((++l_1242), ((l_1245 > ((*l_1252) ^= (((((*l_1246) = (p_97 | (l_1071 &= (*p_98)))) > (safe_add_func_uint64_t_u_u((g_1138 , 0UL), l_1249))) == l_1245) || 0x5EL))) , p_97))) & (*p_98)))) && (-9L)) ^ 0UL) >= l_1079) , &l_1236) != &l_1236)));
        (*l_1253) &= (l_1256 = 1L);
    }
    else
    {
        int *l_1259 = (void*)0;
        unsigned long long *l_1265 = &g_1266;
        int l_1313 = 0xFE63A0B2L;
        int l_1317 = 0x889F41DDL;
        int l_1324 = 2L;
        int l_1335 = 0xB649EB27L;
        unsigned short l_1346 = 0x2E37L;
        unsigned l_1532 = 0xB310B97AL;
        int l_1609 = 4L;
        int l_1618 = 0x5C716EBEL;
        int l_1619 = (-5L);
        unsigned char *l_1654 = (void*)0;
        unsigned char *l_1655 = &g_1486;
        unsigned char *l_1661 = (void*)0;
        unsigned char *l_1662 = (void*)0;
        unsigned char *l_1663 = &g_894;
        int *l_1664 = (void*)0;
        int *l_1665 = &l_1092;
        int *l_1666 = &l_1084;
        for (l_1239 = (-22); (l_1239 > 60); l_1239 = safe_add_func_int16_t_s_s(l_1239, 2))
        {
            unsigned long long *l_1262 = &l_1235;
            unsigned long long *l_1264 = (void*)0;
            unsigned long long **l_1263 = &l_1264;
            unsigned long long *l_1268 = &g_161;
            unsigned long long **l_1267 = &l_1268;
            int l_1312 = (-9L);
            int l_1331 = 0L;
            int l_1336 = (-1L);
            int l_1349 = 2L;
            unsigned long long ***l_1359 = &l_1267;
            unsigned long long ****l_1358 = &l_1359;
            (*g_209) = ((p_97 != (*g_774)) , l_1259);
            (*g_209) = ((((safe_sub_func_uint64_t_u_u((**g_358), ((*l_1262) |= (~(*g_359))))) , (*g_358)) == ((*l_1267) = (l_1265 = ((*l_1263) = l_1262)))) , (*g_209));
            for (g_862 = (-3); (g_862 <= (-13)); g_862--)
            {
                long long l_1305 = 1L;
                unsigned *l_1389 = (void*)0;
                int *l_1392 = &l_1317;
                int *l_1406 = &l_1313;
                if ((*p_98))
                {
                    int *l_1271 = &l_131;
                    int *l_1272 = &l_518;
                    int *l_1273 = &l_1088;
                    int *l_1274 = &g_763;
                    int *l_1275 = &g_762;
                    int *l_1276 = &l_518;
                    int *l_1277 = &g_116;
                    int *l_1278 = &g_892;
                    int *l_1279 = (void*)0;
                    int *l_1280 = &l_500;
                    int *l_1281 = &g_116;
                    int *l_1282 = &g_763;
                    int *l_1283 = &l_1006;
                    int *l_1284 = &l_518;
                    int *l_1285 = &l_131;
                    int *l_1286 = &l_1088;
                    int *l_1287 = &l_1092;
                    int *l_1288 = &l_1092;
                    int *l_1289 = &g_449;
                    int *l_1290 = &l_131;
                    int *l_1291 = &g_116;
                    int *l_1292 = &l_131;
                    int *l_1293 = &g_762;
                    int *l_1294 = &l_131;
                    int *l_1295 = &l_1115;
                    int *l_1296 = (void*)0;
                    int *l_1297 = &l_1071;
                    int *l_1298 = &l_131;
                    int *l_1299 = &g_763;
                    int *l_1300 = &l_131;
                    int *l_1301 = &g_763;
                    int *l_1302 = &l_131;
                    int *l_1303 = &l_1092;
                    int *l_1304 = &l_1006;
                    int *l_1306 = &l_1115;
                    int *l_1307 = &g_449;
                    int *l_1308 = &l_518;
                    int *l_1309 = (void*)0;
                    int *l_1310 = &l_1079;
                    int *l_1311 = &l_1071;
                    int *l_1314 = (void*)0;
                    int *l_1315 = (void*)0;
                    int *l_1316 = (void*)0;
                    int *l_1318 = &l_1088;
                    int *l_1319 = &l_131;
                    int *l_1320 = (void*)0;
                    int *l_1321 = &l_1092;
                    int *l_1322 = (void*)0;
                    int *l_1323 = &l_1006;
                    int *l_1325 = &l_1313;
                    int *l_1326 = &l_1313;
                    int *l_1327 = &l_1092;
                    int *l_1328 = &l_1317;
                    int *l_1329 = &g_763;
                    int *l_1330 = &l_1088;
                    int *l_1332 = &l_1071;
                    int *l_1333 = &l_1071;
                    int *l_1334 = (void*)0;
                    int *l_1337 = &g_762;
                    int *l_1338 = &l_1092;
                    int *l_1339 = &l_500;
                    int *l_1340 = &l_1084;
                    int *l_1341 = &g_892;
                    int *l_1342 = &l_1324;
                    int *l_1343 = (void*)0;
                    int *l_1344 = &l_1006;
                    int *l_1345 = &l_1324;
                    l_1346++;
                    l_1349 |= (*p_98);
                    (*l_1288) &= ((*l_1323) = ((*l_1271) = ((*l_1274) = l_1350)));
                }
                else
                {
                    unsigned l_1351 = 0xCCA962C9L;
                    unsigned long long ***l_1357 = &l_1263;
                    unsigned long long ****l_1356 = &l_1357;
                    unsigned short l_1367 = 65535UL;
                    l_1351 = l_1305;
                    (*g_209) = (*g_209);
                    if ((((+((((*g_774) != (safe_lshift_func_int16_t_s_u((!(p_96 && (p_97 | g_588))), (safe_sub_func_int32_t_s_s((l_1351 >= ((p_97 , (l_1356 != l_1358)) || p_96)), l_1351))))) && (**g_773)) , l_1331)) >= l_1305) < (**g_358)))
                    {
                        int *l_1360 = &l_1336;
                        int *l_1361 = &l_1336;
                        int *l_1362 = &g_762;
                        int *l_1363 = &l_1115;
                        int *l_1364 = (void*)0;
                        int *l_1365 = &l_1335;
                        int *l_1366 = (void*)0;
                        --l_1367;
                        (*l_1361) &= ((p_96 && (*g_375)) && (safe_lshift_func_int16_t_s_s(((*l_478) = p_97), 14)));
                        l_1312 &= ((*l_1361) = ((safe_sub_func_uint32_t_u_u((*l_1362), ((p_97 && p_97) || g_892))) ^ ((g_194 == (((0x69L != l_1374) && ((safe_rshift_func_int8_t_s_u(p_97, 3)) > ((*l_478) = ((((((*l_1236) = g_189) && (*g_375)) > l_1346) == 246UL) || g_534)))) , p_96)) || (**g_374))));
                    }
                    else
                    {
                        int *l_1379 = &l_1071;
                        (*l_1379) |= (safe_lshift_func_int16_t_s_s(p_96, 8));
                    }
                    if ((*p_98))
                    {
                        g_449 = (safe_mod_func_int16_t_s_s(g_1095, (safe_lshift_func_uint8_t_u_u((((*g_359) > (((safe_add_func_int64_t_s_s((**g_773), 0xAD795D75A4D8BF13LL)) ^ p_97) & g_194)) | l_1349), 1))));
                    }
                    else
                    {
                        int *l_1388 = &l_1071;
                        (*l_1388) &= (safe_lshift_func_int16_t_s_u(((void*)0 != &g_210), 1));
                        (*l_1388) ^= l_1305;
                    }
                }
                (*l_1392) = ((((**g_773) , (l_1305 == ((***l_907) = l_1349))) || (((***g_350) , (l_1349 ^= (**g_351))) & (p_96 <= 1UL))) && (safe_rshift_func_uint16_t_u_u(((**g_374) && (*g_375)), 11)));
                (*l_1406) &= (((**g_351) = ((safe_lshift_func_uint16_t_u_u(p_96, 9)) < ((*l_1392) , (((safe_lshift_func_int8_t_s_s((*l_1392), 2)) , (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(g_1405, 4)), l_1336)), 5)), 0x65E7L))) >= 7UL)))) ^ l_1349);
            }
            l_1312 &= l_1349;
        }
        if (l_1407)
        {
            int *l_1408 = &l_1092;
            int *l_1409 = &l_131;
            int *l_1410 = &g_892;
            int *l_1411 = &l_1092;
            int *l_1412 = &g_762;
            int *l_1413 = &l_500;
            int *l_1414 = &g_763;
            int *l_1415 = &g_116;
            int *l_1416 = &l_1324;
            int *l_1417 = &g_449;
            int *l_1418 = &l_1335;
            int *l_1419 = &l_1088;
            int *l_1420 = &g_763;
            int *l_1421 = &g_449;
            int *l_1422 = &g_763;
            int *l_1423 = &l_1084;
            int *l_1424 = &l_518;
            int *l_1425 = &l_1084;
            int *l_1426 = &l_1335;
            int *l_1427 = (void*)0;
            int l_1428 = (-1L);
            int *l_1429 = &l_518;
            int l_1430 = (-3L);
            int l_1431 = 0x8E16846FL;
            int *l_1432 = (void*)0;
            int *l_1433 = &l_1430;
            int *l_1434 = &l_1006;
            int *l_1435 = &l_1335;
            int l_1436 = 0x2DBB5DA3L;
            int *l_1437 = &l_1428;
            int *l_1438 = &g_892;
            int *l_1439 = &l_1115;
            int *l_1440 = &l_1324;
            int *l_1441 = &g_762;
            int *l_1442 = &l_1428;
            int *l_1443 = &g_763;
            int *l_1444 = &l_1088;
            int *l_1445 = &g_449;
            int *l_1446 = (void*)0;
            int l_1447 = (-2L);
            int *l_1448 = &l_1428;
            int *l_1449 = &g_892;
            int *l_1450 = &l_1088;
            int *l_1451 = (void*)0;
            int *l_1452 = &l_1428;
            int *l_1453 = &l_518;
            int *l_1454 = &g_116;
            int *l_1455 = &l_1092;
            int *l_1456 = &g_762;
            int *l_1457 = &l_1084;
            int l_1458 = 0L;
            int *l_1459 = &l_1431;
            int *l_1460 = &l_1428;
            int *l_1461 = &l_1430;
            int *l_1462 = &l_1431;
            int l_1463 = 0L;
            int *l_1464 = &g_892;
            int *l_1465 = &l_1463;
            int *l_1466 = &l_1428;
            int *l_1467 = (void*)0;
            int *l_1468 = (void*)0;
            int *l_1469 = (void*)0;
            int *l_1470 = &l_1313;
            int *l_1471 = &l_1071;
            int *l_1472 = &l_1313;
            int *l_1473 = (void*)0;
            int *l_1474 = &g_892;
            int *l_1475 = &g_762;
            int *l_1476 = &l_1088;
            int *l_1477 = &l_1335;
            int *l_1478 = &l_518;
            int *l_1479 = &g_892;
            int *l_1480 = &l_1092;
            int *l_1481 = &g_116;
            int *l_1482 = &l_1428;
            int *l_1483 = (void*)0;
            int *l_1484 = &l_1092;
            int *l_1485 = &l_1071;
            l_1324 = 0xBC7F0390L;
            p_98 = l_1408;
            g_1486--;
        }
        else
        {
            long long l_1520 = 0x1C0DA3B4CB1C57DDLL;
            int l_1537 = (-10L);
            int l_1539 = 0xEAA9566CL;
            int l_1579 = 0x78CBED2EL;
            int l_1598 = 0x9A12E12FL;
            int l_1611 = (-1L);
            unsigned *l_1629 = (void*)0;
            int *l_1643 = &l_1006;
            if ((g_1238 <= (safe_add_func_int16_t_s_s(p_96, (p_97 , 0x009EL)))))
            {
                unsigned ****l_1497 = (void*)0;
                int l_1521 = 0x9E2BB2B6L;
                if ((l_1079 ^= (l_500 = ((void*)0 == &g_359))))
                {
                    for (g_886 = 0; (g_886 != 40); ++g_886)
                    {
                        unsigned char l_1493 = 0xAAL;
                        if (l_1493)
                            break;
                        p_98 = (*g_209);
                    }
                    for (g_763 = 21; (g_763 != 1); g_763--)
                    {
                        (*g_209) = (*g_209);
                    }
                    p_98 = p_98;
                }
                else
                {
                    char l_1499 = 0xF9L;
                    if ((*p_98))
                    {
                        l_1496 = (*g_209);
                        g_449 = ((void*)0 == l_1497);
                        return p_98;
                    }
                    else
                    {
                        int *l_1498 = &l_518;
                        int *l_1500 = &g_892;
                        int *l_1501 = (void*)0;
                        int *l_1502 = &l_1317;
                        int *l_1503 = (void*)0;
                        int *l_1504 = (void*)0;
                        int *l_1505 = &l_1324;
                        int *l_1506 = &l_500;
                        int *l_1507 = &l_1335;
                        int *l_1508 = (void*)0;
                        int *l_1509 = (void*)0;
                        int *l_1510 = &l_1006;
                        int *l_1511 = &g_762;
                        int *l_1512 = &l_1084;
                        int *l_1513 = (void*)0;
                        int *l_1514 = &l_1115;
                        int *l_1515 = &l_1335;
                        int *l_1516 = (void*)0;
                        int *l_1517 = &g_449;
                        int *l_1518 = (void*)0;
                        int *l_1519 = &l_1088;
                        int *l_1522 = (void*)0;
                        int *l_1523 = &l_1071;
                        int *l_1524 = &l_1006;
                        int *l_1525 = &l_1317;
                        int *l_1526 = &g_763;
                        int *l_1527 = &l_1006;
                        int *l_1528 = (void*)0;
                        int *l_1529 = &l_1115;
                        int *l_1530 = (void*)0;
                        int *l_1531 = &l_1079;
                        (*g_209) = (*g_209);
                        --l_1532;
                        return p_98;
                    }
                }
            }
            else
            {
                int *l_1535 = &l_1317;
                int *l_1536 = &l_1313;
                int *l_1538 = &g_762;
                int *l_1540 = &l_1324;
                int *l_1541 = (void*)0;
                int *l_1542 = &l_500;
                int *l_1543 = &l_1092;
                int *l_1544 = &l_1079;
                int *l_1545 = &l_1317;
                int *l_1546 = &l_1317;
                int *l_1547 = &l_1115;
                int *l_1548 = &g_892;
                int *l_1549 = &l_1088;
                int *l_1550 = &l_131;
                int *l_1551 = &l_1006;
                int *l_1552 = &l_1115;
                int *l_1553 = &l_1084;
                int *l_1554 = &l_1088;
                int *l_1555 = (void*)0;
                int *l_1556 = (void*)0;
                int *l_1557 = &l_1006;
                int *l_1558 = &l_1537;
                int *l_1559 = &l_1084;
                int *l_1560 = (void*)0;
                int *l_1561 = (void*)0;
                int *l_1562 = &l_1092;
                int *l_1563 = &g_763;
                int *l_1564 = &l_1317;
                int *l_1565 = &l_1079;
                int *l_1566 = &l_1088;
                int *l_1567 = (void*)0;
                int *l_1568 = &l_1006;
                int *l_1569 = &l_131;
                int *l_1570 = &l_1006;
                int *l_1571 = &l_518;
                int *l_1572 = &l_1313;
                int *l_1573 = (void*)0;
                int *l_1574 = &l_1084;
                int *l_1575 = (void*)0;
                int *l_1576 = &l_1317;
                int *l_1577 = &l_1006;
                int *l_1578 = &l_1092;
                int *l_1580 = &g_892;
                int *l_1581 = (void*)0;
                int *l_1582 = &l_1115;
                int *l_1583 = &g_763;
                int *l_1584 = &l_1313;
                int *l_1585 = &l_1537;
                int *l_1586 = (void*)0;
                int *l_1587 = &l_1088;
                int *l_1588 = (void*)0;
                int *l_1589 = &l_1324;
                int *l_1590 = &l_1088;
                int *l_1591 = &l_1092;
                int l_1592 = 0xB29CC943L;
                int l_1593 = 0xA7806294L;
                int *l_1594 = &l_1593;
                int *l_1595 = (void*)0;
                int *l_1596 = (void*)0;
                int *l_1597 = &g_449;
                int *l_1599 = &l_1079;
                int *l_1600 = &l_1088;
                int *l_1601 = &l_1324;
                int *l_1602 = &l_1539;
                int *l_1603 = (void*)0;
                int *l_1604 = &l_1539;
                int *l_1605 = &l_1592;
                int *l_1606 = (void*)0;
                int *l_1607 = (void*)0;
                int l_1608 = (-1L);
                int *l_1610 = &l_1608;
                int *l_1612 = &l_518;
                int *l_1613 = &l_1071;
                int *l_1614 = (void*)0;
                int *l_1615 = &l_1313;
                int *l_1616 = &l_1579;
                int *l_1617 = &l_1071;
                int *l_1620 = &l_1611;
                int *l_1621 = &l_1598;
                int *l_1622 = &l_1608;
                int *l_1623 = &l_1084;
                int *l_1624 = &l_1084;
                int *l_1625 = (void*)0;
                l_1626++;
                if ((*p_98))
                {
                    (*g_209) = (*g_209);
                    return l_1629;
                }
                else
                {
                    unsigned l_1630 = 0UL;
                    int l_1635 = 0x37B86FEDL;
                    ++l_1630;
                    (*l_1578) = ((p_96 > ((((*p_98) <= ((l_1598 , ((*l_1604) |= (p_97 != (((((safe_add_func_int16_t_s_s(((--(*g_359)) == (safe_sub_func_int64_t_s_s(((((*l_1582) = 0x54EA6BF2L) < (l_1635 == ((**g_374) , (*p_98)))) && (((safe_rshift_func_int16_t_s_s((g_85 | (*l_1610)), g_588)) < 0x60L) | p_96)), (**g_773)))), p_96)) , (**g_773)) && (*g_774)) <= 0x1476206FL) , (**g_773))))) >= (*l_1622))) != g_194) & g_1642)) | 0x8438L);
                    p_98 = (*g_209);
                }
            }
            (*l_1643) &= ((*l_1496) = (-1L));
        }
        (*l_1666) |= ((*l_1665) = (safe_add_func_uint16_t_u_u(((g_886 |= (safe_add_func_uint32_t_u_u((*g_84), (((((+(g_239 , (((*l_1496) = (l_1313 ^ 0xA7152882L)) >= ((p_96 >= (**g_374)) | (((***l_907) = (((*l_1663) ^= (safe_rshift_func_uint16_t_u_u(p_97, ((safe_mod_func_uint8_t_u_u(((*l_1655)++), (l_1658 || (safe_lshift_func_uint16_t_u_u((p_97 && p_97), g_152))))) <= p_97)))) > g_763)) ^ p_96))))) | 253UL) == p_97) , p_97) > p_96)))) < 0UL), g_763)));
    }
    return (*l_328);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_330, "g_330", print_hash_value);
    transparent_crc(g_412, "g_412", print_hash_value);
    transparent_crc(g_446, "g_446", print_hash_value);
    transparent_crc(g_449, "g_449", print_hash_value);
    transparent_crc(g_454, "g_454", print_hash_value);
    transparent_crc(g_534, "g_534", print_hash_value);
    transparent_crc(g_539, "g_539", print_hash_value);
    transparent_crc(g_588, "g_588", print_hash_value);
    transparent_crc(g_681, "g_681", print_hash_value);
    transparent_crc(g_743, "g_743", print_hash_value);
    transparent_crc(g_762, "g_762", print_hash_value);
    transparent_crc(g_763, "g_763", print_hash_value);
    transparent_crc(g_862, "g_862", print_hash_value);
    transparent_crc(g_886, "g_886", print_hash_value);
    transparent_crc(g_892, "g_892", print_hash_value);
    transparent_crc(g_893, "g_893", print_hash_value);
    transparent_crc(g_894, "g_894", print_hash_value);
    transparent_crc(g_1011, "g_1011", print_hash_value);
    transparent_crc(g_1094, "g_1094", print_hash_value);
    transparent_crc(g_1095, "g_1095", print_hash_value);
    transparent_crc(g_1114, "g_1114", print_hash_value);
    transparent_crc(g_1119, "g_1119", print_hash_value);
    transparent_crc(g_1124, "g_1124", print_hash_value);
    transparent_crc(g_1138, "g_1138", print_hash_value);
    transparent_crc(g_1214, "g_1214", print_hash_value);
    transparent_crc(g_1238, "g_1238", print_hash_value);
    transparent_crc(g_1266, "g_1266", print_hash_value);
    transparent_crc(g_1405, "g_1405", print_hash_value);
    transparent_crc(g_1486, "g_1486", print_hash_value);
    transparent_crc(g_1642, "g_1642", print_hash_value);
    transparent_crc(g_1817, "g_1817", print_hash_value);
    transparent_crc(g_1823, "g_1823", print_hash_value);
    transparent_crc(g_1832, "g_1832", print_hash_value);
    transparent_crc(g_1849, "g_1849", print_hash_value);
    transparent_crc(g_2151, "g_2151", print_hash_value);
    transparent_crc(g_2201, "g_2201", print_hash_value);
    transparent_crc(g_2506, "g_2506", print_hash_value);
    transparent_crc(g_2525, "g_2525", print_hash_value);
    transparent_crc(g_2948, "g_2948", print_hash_value);
    transparent_crc(g_2954, "g_2954", print_hash_value);
    transparent_crc(g_2985, "g_2985", print_hash_value);
    transparent_crc(g_2997, "g_2997", print_hash_value);
    transparent_crc(g_3014, "g_3014", print_hash_value);
    transparent_crc(g_3120, "g_3120", print_hash_value);
    transparent_crc(g_3124, "g_3124", print_hash_value);
    transparent_crc(g_3139, "g_3139", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
