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
   char f0;
   char f1;
   unsigned f2;
};


static unsigned short g_8 = 0xEB9AL;
static int g_10 = 0L;
static short g_11 = 0x0707L;
static int * volatile g_13 = &g_10;
static int *g_59 = &g_10;
static int **g_58 = &g_59;
static struct S0 * volatile g_61 = (void*)0;
static int g_63 = 7L;
static volatile char g_82 = 6L;
static volatile unsigned g_89 = 2UL;
static volatile short g_92 = (-2L);
static int g_98 = (-7L);
static unsigned char g_107 = 0xF5L;
static char g_115 = 0xFBL;
static unsigned g_159 = 5UL;
static struct S0 *g_194 = (void*)0;
static unsigned g_229 = 0xC26F71A7L;
static volatile unsigned char g_248 = 0x45L;
static volatile char g_283 = 1L;
static volatile unsigned g_296 = 7UL;
static struct S0 g_334 = {0x14L,0x17L,0x816E1F83L};
static struct S0 * volatile g_333 = &g_334;
static struct S0 **g_348 = &g_194;
static volatile unsigned g_406 = 0xD77BE777L;
static int g_417 = 0x700A65A2L;
static volatile unsigned g_428 = 0xE2178750L;
static short g_440 = 1L;
static unsigned short g_442 = 0xCA17L;
static unsigned char g_535 = 255UL;
static int *g_542 = (void*)0;
static int ** volatile g_541 = &g_542;
static int *g_551 = (void*)0;
static int **g_550 = &g_551;
static volatile char g_673 = 1L;
static volatile unsigned g_693 = 0x3E17F145L;
static short g_774 = (-1L);
static volatile int g_775 = 0L;
static unsigned short g_788 = 65526UL;
static int g_836 = 0x1187817EL;
static unsigned char g_837 = 1UL;
static volatile int g_936 = 0xEA58A81EL;
static int g_953 = 0xADCFAA5EL;
static int g_972 = 0L;
static unsigned char g_984 = 0x99L;
static struct S0 ** volatile g_998 = (void*)0;
static struct S0 ** volatile g_999 = &g_194;
static volatile unsigned char g_1140 = 255UL;
static struct S0 * volatile g_1153 = &g_334;
static struct S0 g_1178 = {0xB3L,0xD4L,0x0F3FABB4L};
static struct S0 * volatile g_1177 = &g_1178;
static unsigned g_1264 = 4294967295UL;
static volatile unsigned *g_1283 = &g_296;
static volatile unsigned ** volatile g_1282 = &g_1283;
static short *g_1303 = &g_440;
static unsigned short **g_1340 = (void*)0;
static char *g_1347 = &g_334.f0;
static char **g_1346 = &g_1347;
static volatile int g_1419 = 0L;
static unsigned char g_1427 = 0x7EL;
static volatile unsigned short g_1470 = 65535UL;
static struct S0 * volatile g_1474 = &g_1178;
static struct S0 * volatile g_1481 = &g_1178;
static char g_1607 = 0x46L;
static unsigned char g_1632 = 0xB0L;
static unsigned g_1753 = 0UL;
static int g_1810 = 0L;
static volatile int g_1905 = 5L;
static unsigned short g_1909 = 0UL;
static volatile unsigned g_1997 = 0x7843EBABL;
static short g_2007 = 0L;



static char func_1(void);
static int * func_2(int * p_3);
static int * func_4(int p_5);
static int ** func_18(unsigned short p_19, int p_20, int ** p_21, unsigned p_22);
static char func_25(int p_26, unsigned char p_27, int * p_28, unsigned p_29);
static short func_32(char p_33, int * p_34, int * p_35, int * p_36, unsigned short p_37);
static int * func_38(int ** p_39, int ** p_40);
static int ** func_41(int * p_42, int p_43, int * p_44, int ** p_45);
static int * func_46(int ** p_47, int ** p_48, unsigned short p_49);
static int ** func_50(int ** p_51, int ** p_52, int ** p_53, short p_54);
static char func_1(void)
{
    short l_1816 = 0x0B8BL;
    int l_1845 = 1L;
    int l_1847 = 0x4BDB7318L;
    int l_1851 = (-1L);
    short l_1863 = 0xF339L;
    int l_1884 = (-1L);
    int l_1891 = 4L;
    int l_1893 = 0x5073781FL;
    int l_1896 = (-1L);
    int l_1901 = 4L;
    int l_1903 = 5L;
    unsigned l_1912 = 0UL;
    struct S0 l_1919 = {0x56L,-8L,1UL};
    (*g_550) = func_2(func_4((safe_rshift_func_uint8_t_u_u(g_8, 7))));
    for (g_334.f1 = (-5); (g_334.f1 == 14); g_334.f1 = safe_add_func_uint8_t_u_u(g_334.f1, 1))
    {
        int *l_1817 = (void*)0;
        int *l_1818 = &g_417;
        int *l_1819 = &g_417;
        int *l_1820 = &g_10;
        int *l_1821 = &g_972;
        int *l_1822 = &g_10;
        int *l_1823 = &g_63;
        int *l_1824 = &g_836;
        int *l_1825 = &g_972;
        int l_1826 = (-1L);
        int *l_1827 = &g_953;
        int *l_1828 = &l_1826;
        int *l_1829 = &g_417;
        int *l_1830 = (void*)0;
        int l_1831 = 0xB197C5FBL;
        int *l_1832 = &g_1810;
        int *l_1833 = &g_1810;
        int *l_1834 = &g_836;
        int *l_1835 = (void*)0;
        int *l_1836 = &g_417;
        int *l_1837 = &l_1831;
        int *l_1838 = &l_1831;
        int *l_1839 = &g_836;
        int *l_1840 = &g_10;
        int *l_1841 = &g_836;
        int *l_1842 = &g_1810;
        int *l_1843 = &g_63;
        int *l_1844 = &g_953;
        int *l_1846 = &l_1831;
        int *l_1848 = &g_836;
        int *l_1849 = &g_836;
        int *l_1850 = &g_63;
        int *l_1852 = &l_1826;
        int l_1853 = 0x9F7652A3L;
        int *l_1854 = &l_1853;
        int *l_1855 = &g_417;
        int *l_1856 = (void*)0;
        int *l_1857 = &g_972;
        int *l_1858 = &l_1831;
        int *l_1859 = &g_417;
        int *l_1860 = &g_972;
        int *l_1861 = &l_1853;
        int *l_1862 = &g_972;
        int *l_1864 = &g_63;
        int *l_1865 = &l_1847;
        int *l_1866 = (void*)0;
        int *l_1867 = &g_1810;
        int *l_1868 = &l_1851;
        int *l_1869 = &l_1851;
        int *l_1870 = (void*)0;
        int *l_1871 = &l_1847;
        int *l_1872 = &l_1851;
        int *l_1873 = &l_1847;
        int *l_1874 = (void*)0;
        int *l_1875 = (void*)0;
        int *l_1876 = &l_1847;
        int l_1877 = 0L;
        int *l_1878 = &g_10;
        int *l_1879 = (void*)0;
        int l_1880 = 0xC67E177BL;
        int l_1881 = 0xDD0F253FL;
        int *l_1882 = (void*)0;
        int *l_1883 = (void*)0;
        int *l_1885 = &l_1877;
        int *l_1886 = (void*)0;
        int *l_1887 = &g_953;
        int *l_1888 = &l_1877;
        int *l_1889 = &l_1884;
        int *l_1890 = &g_953;
        int *l_1892 = &l_1831;
        int *l_1894 = &g_836;
        int *l_1895 = (void*)0;
        int *l_1897 = &l_1826;
        int *l_1898 = &l_1896;
        int l_1899 = 0x28B91C03L;
        int l_1900 = 0x16A91E6CL;
        int *l_1902 = &l_1891;
        int *l_1904 = &l_1900;
        int *l_1906 = &g_417;
        int *l_1907 = &l_1847;
        int l_1908 = 0x0301D692L;
        unsigned char *l_1917 = &g_107;
        struct S0 l_1918 = {0xC0L,-1L,18446744073709551612UL};
        int *l_1930 = &l_1853;
        --g_1909;
        (*l_1897) ^= (*g_13);
        ++l_1912;
    }
    g_2007 = (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((&g_1347 == &g_1347), l_1847)), 0L));
    return (**g_1346);
}







static int * func_2(int * p_3)
{
    struct S0 *l_1659 = &g_334;
    int l_1678 = 0xA190C865L;
    int l_1744 = 0xA23485D5L;
    int **l_1781 = &g_551;
    unsigned l_1787 = 0xF154F913L;
    int *l_1811 = &l_1744;
    int ***l_1813 = &l_1781;
    if ((*p_3))
    {
        struct S0 *l_1658 = &g_1178;
        int l_1672 = 0xE6C7625BL;
        int l_1677 = (-1L);
        int l_1749 = 8L;
        int **l_1768 = &g_551;
        short l_1782 = (-1L);
        int **l_1808 = &g_542;
        l_1659 = ((*g_348) = l_1658);
        (**g_58) = (safe_lshift_func_uint8_t_u_u(g_1427, g_406));
        for (g_11 = 0; (g_11 >= 18); g_11++)
        {
            int l_1675 = 0x97F3835EL;
            unsigned char *l_1676 = &g_1632;
            char l_1766 = 0xB4L;
            unsigned l_1799 = 1UL;
            unsigned l_1809 = 1UL;
            int *l_1812 = &l_1677;
        }
        (*g_58) = p_3;
    }
    else
    {
        (**g_58) = 0L;
        return (*g_550);
    }
    if (func_32(((*g_1347) == (-6L)), (*l_1781), p_3, p_3, (*l_1811)))
    {
        (*g_999) = (void*)0;
    }
    else
    {
        p_3 = (*g_541);
    }
    return (**l_1813);
}







static int * func_4(int p_5)
{
    int *l_9 = &g_10;
    int **l_12 = &l_9;
    int **l_55 = &l_9;
    int ***l_56 = &l_12;
    int ***l_57 = &l_55;
    int *l_538 = (void*)0;
    unsigned l_568 = 5UL;
    int *l_582 = &g_63;
    char *l_1148 = &g_334.f1;
    unsigned l_1171 = 0x776CAAF8L;
    int l_1209 = 0xF5235337L;
    int l_1214 = (-1L);
    int l_1228 = (-3L);
    int l_1234 = (-1L);
    struct S0 l_1267 = {0xF4L,-4L,0x868C86DAL};
    char l_1275 = (-10L);
    int l_1338 = 9L;
    int l_1540 = 0xA4F683C3L;
    int l_1581 = 0x002F5232L;
    int *l_1654 = (void*)0;
    int *l_1655 = &g_417;
    g_11 &= ((*l_9) = g_8);
    (*g_13) = ((0x3A18E418L ^ p_5) > (((*l_12) = &g_10) == &g_10));
    return (*g_58);
}







static int ** func_18(unsigned short p_19, int p_20, int ** p_21, unsigned p_22)
{
    short l_585 = 5L;
    unsigned l_618 = 0x3093133CL;
    int l_690 = (-1L);
    int l_791 = 0x8B5409C4L;
    int l_792 = 1L;
    int l_793 = 0x632458DEL;
    int l_826 = 0xB47B0789L;
    int l_831 = 1L;
    int l_834 = (-7L);
    unsigned short *l_881 = &g_788;
    unsigned short **l_880 = &l_881;
    int l_1025 = 0L;
    int l_1043 = (-1L);
    int l_1080 = 8L;
    int l_1087 = 0L;
    int l_1103 = 0L;
    int l_1112 = 4L;
    int l_1120 = 0x7F45F284L;
    char *l_1146 = &g_115;
    char **l_1145 = &l_1146;
    int ***l_1147 = &g_58;
    for (g_98 = 0; (g_98 > (-5)); --g_98)
    {
        int *l_601 = &g_417;
        int l_681 = 1L;
        int l_692 = 0xD21402CFL;
        int l_750 = 0xECACBAFCL;
        int l_759 = 0x9918F8D0L;
        int l_762 = 0x4ACD50D9L;
        int l_771 = 1L;
        int l_823 = (-1L);
        struct S0 *l_856 = &g_334;
        unsigned short *l_879 = &g_788;
        unsigned short **l_878 = &l_879;
        int l_1004 = 0x5616ADC4L;
        int l_1036 = 0L;
        int l_1065 = (-4L);
        int l_1089 = 0x10B0D003L;
        int l_1096 = 0xF99AD8EFL;
        int l_1132 = 0L;
        if (l_585)
            break;
        if ((**p_21))
        {
            int l_680 = 9L;
            int **l_712 = &g_542;
            struct S0 ***l_713 = &g_348;
            for (g_159 = 26; (g_159 <= 58); g_159 = safe_add_func_uint16_t_u_u(g_159, 4))
            {
                char l_588 = (-1L);
                unsigned *l_593 = &g_229;
                char *l_594 = &g_334.f1;
                (*g_59) = (**p_21);
                if (l_588)
                    continue;
                (**g_58) ^= (safe_div_func_int8_t_s_s((p_22 & ((*l_594) |= (safe_mod_func_uint16_t_u_u((l_593 == (void*)0), g_406)))), g_115));
                (**g_58) = 0xA2F05105L;
            }
            for (g_115 = 0; (g_115 < 10); g_115++)
            {
                char l_604 = 0xEAL;
                int *l_619 = &g_417;
                int l_656 = (-1L);
                int l_662 = (-10L);
                int l_676 = 7L;
                struct S0 *l_698 = &g_334;
                for (g_535 = 15; (g_535 != 40); g_535 = safe_add_func_uint8_t_u_u(g_535, 9))
                {
                    unsigned char *l_602 = (void*)0;
                    unsigned char *l_603 = &g_107;
                    int l_609 = 0xAFCBD419L;
                    (*g_551) ^= (0x5EL == g_442);
                    if ((**g_541))
                        continue;
                    if ((safe_add_func_uint8_t_u_u(((*l_603) &= (g_11 & func_32((!(&g_334 == (void*)0)), l_601, ((*g_58) = (*p_21)), (*g_550), p_19))), l_604)))
                    {
                        return p_21;
                    }
                    else
                    {
                        unsigned *l_616 = (void*)0;
                        unsigned *l_617 = &g_229;
                        int l_620 = 0x5A11A75CL;
                        int *l_621 = (void*)0;
                        int *l_622 = (void*)0;
                        int *l_623 = &g_63;
                        int *l_624 = &l_620;
                        int *l_625 = &g_63;
                        int *l_626 = &l_620;
                        int *l_627 = &g_63;
                        int *l_628 = (void*)0;
                        int *l_629 = &g_417;
                        int *l_630 = &g_63;
                        int *l_631 = &g_417;
                        int *l_632 = &l_609;
                        int *l_633 = (void*)0;
                        int *l_634 = &l_620;
                        int *l_635 = &l_609;
                        int *l_636 = &l_620;
                        int *l_637 = &g_417;
                        int *l_638 = (void*)0;
                        int *l_639 = (void*)0;
                        int *l_640 = &g_417;
                        int *l_641 = &g_417;
                        int *l_642 = &l_620;
                        int *l_643 = &l_620;
                        int *l_644 = (void*)0;
                        int *l_645 = (void*)0;
                        int *l_646 = &g_417;
                        int *l_647 = &g_417;
                        int *l_648 = &g_63;
                        int *l_649 = &l_620;
                        int *l_650 = &l_620;
                        int *l_651 = (void*)0;
                        int *l_652 = &l_609;
                        int *l_653 = &g_417;
                        int *l_654 = (void*)0;
                        int *l_655 = &g_63;
                        int *l_657 = &g_63;
                        int *l_658 = &l_620;
                        int *l_659 = (void*)0;
                        int *l_660 = &g_63;
                        int *l_661 = &l_620;
                        int *l_663 = &l_620;
                        int *l_664 = &g_417;
                        int *l_665 = &l_609;
                        int *l_666 = &l_662;
                        int *l_667 = &l_656;
                        int *l_668 = &l_620;
                        int *l_669 = &l_620;
                        int *l_670 = (void*)0;
                        int *l_671 = &l_609;
                        int *l_672 = &l_620;
                        int *l_674 = &g_417;
                        int *l_675 = (void*)0;
                        int *l_677 = (void*)0;
                        int *l_678 = &g_63;
                        int *l_679 = &l_676;
                        int *l_682 = &l_656;
                        int *l_683 = &l_656;
                        int *l_684 = &l_620;
                        int *l_685 = &l_681;
                        int *l_686 = (void*)0;
                        int *l_687 = &l_620;
                        int *l_688 = &l_681;
                        int *l_689 = (void*)0;
                        int *l_691 = (void*)0;
                        l_609 = (safe_div_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((*l_603) = (func_32((((l_609 ^ (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((func_32(p_22, (*g_541), (*p_21), (*g_550), p_19) == (*l_601)), (((*l_617) |= (safe_div_func_int32_t_s_s((-9L), 0x8B5250FEL))) >= l_618))), g_159))) != 0xE290L) >= 0x29DEL), (*p_21), l_619, l_601, (*l_601)) <= g_442)), 0xB0L)), 0x5BL));
                        g_693--;
                        return &g_551;
                    }
                }
                for (g_8 = 0; (g_8 > 9); g_8 = safe_add_func_int16_t_s_s(g_8, 2))
                {
                    short l_717 = (-4L);
                    g_194 = l_698;
                    for (l_585 = 13; (l_585 != (-8)); l_585--)
                    {
                        char l_701 = 7L;
                        int *l_702 = &g_417;
                        struct S0 ****l_714 = &l_713;
                        unsigned short *l_715 = (void*)0;
                        unsigned short *l_716 = &g_442;
                        l_701 ^= (*g_542);
                        (*p_21) = l_702;
                        (*l_619) |= (safe_div_func_int32_t_s_s((safe_add_func_uint32_t_u_u(0x46D2E92BL, (((((void*)0 == &g_334) | (safe_rshift_func_int16_t_s_u(l_618, (safe_unary_minus_func_int8_t_s((l_717 = ((((void*)0 != l_712) <= (((*l_716) = ((+(g_89 == (((*l_714) = l_713) == (void*)0))) == g_535)) > 0x7216L)) < (**l_712)))))))) == 0x5819L) && 1UL))), 0x4EA4F0AFL));
                        (*g_542) &= (safe_mod_func_int8_t_s_s(func_32((!(g_115 ^ g_440)), (*p_21), (*g_550), (*p_21), ((*l_716) = l_690)), func_32(g_8, (*l_712), (*g_541), (*p_21), (*l_601))));
                    }
                }
            }
            (**g_58) = (**p_21);
        }
        else
        {
            int *l_720 = &l_681;
            int *l_721 = &l_681;
            int *l_722 = &l_692;
            int *l_723 = (void*)0;
            int *l_724 = &l_681;
            int *l_725 = &l_692;
            int *l_726 = (void*)0;
            int l_727 = 0x1DB1DC92L;
            int *l_728 = &l_727;
            int *l_729 = (void*)0;
            int *l_730 = &l_727;
            int l_731 = (-8L);
            int *l_732 = &l_727;
            int *l_733 = &l_690;
            int *l_734 = &l_692;
            int *l_735 = &l_731;
            int *l_736 = &l_690;
            int *l_737 = &g_417;
            int *l_738 = &l_692;
            int *l_739 = (void*)0;
            int *l_740 = &l_681;
            int *l_741 = (void*)0;
            int *l_742 = &l_731;
            int *l_743 = &l_681;
            int *l_744 = (void*)0;
            int *l_745 = &l_731;
            int *l_746 = &l_681;
            int *l_747 = &g_417;
            int *l_748 = &l_727;
            int *l_749 = &l_692;
            int *l_751 = (void*)0;
            int *l_752 = &l_750;
            int *l_753 = &g_417;
            int *l_754 = (void*)0;
            int *l_755 = &l_731;
            int *l_756 = &g_63;
            int *l_757 = &l_690;
            int *l_758 = (void*)0;
            int *l_760 = (void*)0;
            int *l_761 = &l_750;
            int *l_763 = &g_417;
            int *l_764 = (void*)0;
            int *l_765 = &l_731;
            int *l_766 = &l_762;
            int *l_767 = &l_762;
            int *l_768 = &g_63;
            int *l_769 = &g_417;
            int *l_770 = &g_63;
            int *l_772 = (void*)0;
            int *l_773 = (void*)0;
            int *l_776 = &l_681;
            int *l_777 = &g_63;
            int *l_778 = (void*)0;
            int l_779 = 0x1B4E32C6L;
            int *l_780 = &l_762;
            int *l_781 = (void*)0;
            int *l_782 = &l_750;
            int *l_783 = &l_779;
            int *l_784 = &l_750;
            int *l_785 = &l_727;
            int *l_786 = &l_762;
            int *l_787 = (void*)0;
            int *l_794 = (void*)0;
            int *l_795 = &l_690;
            int *l_796 = &l_771;
            int *l_797 = &l_692;
            int *l_798 = (void*)0;
            int *l_799 = &l_771;
            int *l_800 = &l_779;
            int *l_801 = &l_793;
            int *l_802 = &g_63;
            int *l_803 = &l_731;
            int *l_804 = &l_727;
            int *l_805 = &l_750;
            int *l_806 = &l_759;
            int *l_807 = (void*)0;
            int *l_808 = (void*)0;
            int *l_809 = &l_793;
            int *l_810 = (void*)0;
            int *l_811 = &l_771;
            int *l_812 = &l_759;
            int *l_813 = &l_791;
            int *l_814 = (void*)0;
            int *l_815 = (void*)0;
            int *l_816 = &l_791;
            int *l_817 = &l_681;
            int *l_818 = &l_793;
            int *l_819 = &l_727;
            int *l_820 = &l_791;
            int *l_821 = (void*)0;
            int *l_822 = &l_771;
            int *l_824 = &l_731;
            int *l_825 = &l_791;
            int *l_827 = (void*)0;
            int *l_828 = (void*)0;
            int *l_829 = &l_731;
            int *l_830 = &l_759;
            int *l_832 = &l_762;
            int *l_833 = &g_63;
            int *l_835 = (void*)0;
            short *l_840 = &l_585;
            struct S0 *l_997 = (void*)0;
            int *l_1005 = &g_417;
            int *l_1006 = (void*)0;
            int *l_1007 = &l_779;
            int *l_1008 = &g_417;
            int *l_1009 = &g_953;
            int *l_1010 = &g_417;
            int *l_1011 = &g_972;
            int *l_1012 = &l_750;
            int *l_1013 = &l_759;
            int *l_1014 = &g_63;
            int *l_1015 = &l_834;
            int *l_1016 = &g_953;
            int *l_1017 = &l_834;
            int *l_1018 = &l_727;
            int *l_1019 = &l_731;
            int *l_1020 = &l_826;
            int *l_1021 = &l_823;
            int *l_1022 = (void*)0;
            int *l_1023 = &g_63;
            int *l_1024 = &l_692;
            int *l_1026 = &l_793;
            int *l_1027 = (void*)0;
            int *l_1028 = &l_727;
            int *l_1029 = &l_759;
            int *l_1030 = &l_826;
            int *l_1031 = &l_731;
            int *l_1032 = &l_681;
            char l_1033 = 0x80L;
            int *l_1034 = (void*)0;
            int *l_1035 = &g_63;
            int *l_1037 = &l_834;
            int *l_1038 = &l_823;
            int *l_1039 = &l_834;
            int *l_1040 = &l_793;
            int *l_1041 = (void*)0;
            int *l_1042 = &g_953;
            int *l_1044 = &l_792;
            int *l_1045 = &l_681;
            int *l_1046 = &l_759;
            int *l_1047 = &l_690;
            int *l_1048 = &l_1004;
            int *l_1049 = &l_690;
            int *l_1050 = &l_823;
            int *l_1051 = &l_826;
            int *l_1052 = &l_834;
            int *l_1053 = &l_779;
            int *l_1054 = &l_690;
            int *l_1055 = &l_791;
            int *l_1056 = &g_972;
            int *l_1057 = &l_1025;
            int *l_1058 = &l_826;
            int *l_1059 = &g_417;
            int *l_1060 = &l_750;
            int *l_1061 = &l_1004;
            int *l_1062 = &l_834;
            int *l_1063 = &g_953;
            int *l_1064 = &l_731;
            int *l_1066 = &l_823;
            int *l_1067 = &l_834;
            int *l_1068 = &l_690;
            int *l_1069 = &l_681;
            int *l_1070 = (void*)0;
            int *l_1071 = (void*)0;
            int *l_1072 = &l_771;
            int *l_1073 = &l_771;
            int *l_1074 = &g_953;
            int *l_1075 = &l_1004;
            int *l_1076 = (void*)0;
            int *l_1077 = &g_953;
            int *l_1078 = &g_972;
            int *l_1079 = &l_690;
            int *l_1081 = &l_750;
            int *l_1082 = (void*)0;
            int *l_1083 = &g_836;
            int *l_1084 = (void*)0;
            int *l_1085 = &l_779;
            int l_1086 = 0x6C026484L;
            int *l_1088 = &l_690;
            int l_1090 = 0xA95B488CL;
            int *l_1091 = &l_771;
            int *l_1092 = &l_750;
            int *l_1093 = &l_792;
            int *l_1094 = (void*)0;
            int *l_1095 = &l_793;
            int *l_1097 = &l_690;
            int *l_1098 = &l_834;
            int *l_1099 = &l_1080;
            int *l_1100 = &l_731;
            int l_1101 = 0x2A40285EL;
            int *l_1102 = &l_692;
            int *l_1104 = &l_823;
            int *l_1105 = &l_1090;
            int *l_1106 = &l_1087;
            int *l_1107 = &l_690;
            int *l_1108 = &l_1096;
            int *l_1109 = (void*)0;
            int *l_1110 = &l_793;
            int *l_1111 = &l_826;
            int *l_1113 = &l_792;
            int *l_1114 = &l_750;
            int *l_1115 = (void*)0;
            int *l_1116 = (void*)0;
            int *l_1117 = &l_1086;
            int *l_1118 = &l_690;
            int l_1119 = 0xE4015C74L;
            int *l_1121 = &l_1086;
            int *l_1122 = &l_1119;
            int *l_1123 = &l_1065;
            int *l_1124 = &l_1043;
            int *l_1125 = &l_779;
            int *l_1126 = &l_750;
            int *l_1127 = &l_1101;
            int *l_1128 = (void*)0;
            int *l_1129 = &l_1086;
            int *l_1130 = &l_1065;
            int *l_1131 = (void*)0;
            int *l_1133 = &g_953;
            int *l_1134 = &l_1119;
            int *l_1135 = &l_1096;
            int *l_1136 = &l_791;
            int *l_1137 = &l_731;
            int *l_1138 = &l_1101;
            int *l_1139 = &l_1103;
            g_788++;
            g_837--;
            if (((0x382AL && ((*l_840) = l_826)) | 4294967288UL))
            {
                unsigned char l_841 = 255UL;
                unsigned char *l_848 = &g_107;
                char *l_849 = &g_334.f1;
                int **l_863 = &l_749;
                unsigned *l_872 = &g_229;
                int l_888 = 1L;
                int *l_889 = &l_823;
                int *l_890 = &l_779;
                int *l_891 = &l_831;
                int *l_892 = &l_692;
                int *l_893 = &l_690;
                int *l_894 = &l_692;
                int *l_895 = (void*)0;
                int *l_896 = &l_692;
                int *l_897 = &l_888;
                int *l_898 = &g_417;
                int *l_899 = &l_792;
                int *l_900 = &g_417;
                int *l_901 = &l_681;
                int *l_902 = (void*)0;
                int *l_903 = &l_771;
                int *l_904 = &l_793;
                int *l_905 = &g_63;
                int *l_906 = &l_793;
                int *l_907 = &g_836;
                int *l_908 = &l_771;
                int *l_909 = &l_750;
                int *l_910 = &l_690;
                int *l_911 = &l_793;
                int *l_912 = (void*)0;
                int *l_913 = &l_727;
                int *l_914 = &g_836;
                int *l_915 = &l_727;
                int *l_916 = &l_792;
                int *l_917 = &l_834;
                int *l_918 = &g_417;
                int *l_919 = (void*)0;
                int *l_920 = &l_692;
                int *l_921 = (void*)0;
                int *l_922 = &l_681;
                int *l_923 = &l_727;
                int *l_924 = &l_834;
                int *l_925 = &l_690;
                int *l_926 = &l_681;
                int *l_927 = &l_823;
                int *l_928 = &l_888;
                int *l_929 = (void*)0;
                int *l_930 = (void*)0;
                int *l_931 = &l_681;
                int *l_932 = &l_779;
                int *l_933 = &l_727;
                int *l_934 = (void*)0;
                int *l_935 = &l_834;
                int *l_937 = &l_731;
                int *l_938 = &l_692;
                int *l_939 = &l_727;
                int *l_940 = &l_792;
                int *l_941 = &l_791;
                int *l_942 = &l_727;
                int *l_943 = &l_792;
                int *l_944 = (void*)0;
                int *l_945 = &g_63;
                int *l_946 = &l_792;
                int *l_947 = &g_63;
                int *l_948 = (void*)0;
                int *l_949 = &l_750;
                int *l_950 = &l_690;
                int *l_951 = &l_692;
                int *l_952 = &l_779;
                int *l_954 = &l_759;
                int *l_955 = &l_826;
                int *l_956 = &l_831;
                int *l_957 = &l_759;
                int *l_958 = &l_779;
                int *l_959 = &l_826;
                int *l_960 = &g_836;
                int *l_961 = &l_690;
                int *l_962 = &g_417;
                int *l_963 = &l_681;
                int *l_964 = (void*)0;
                int *l_965 = &g_63;
                int *l_966 = &l_750;
                int *l_967 = &l_826;
                int *l_968 = &l_692;
                int *l_969 = &l_793;
                int *l_970 = &l_834;
                int *l_971 = &l_831;
                int *l_973 = &l_888;
                int *l_974 = (void*)0;
                int *l_975 = (void*)0;
                int *l_976 = &l_831;
                int *l_977 = (void*)0;
                int *l_978 = &l_779;
                int *l_979 = &l_831;
                int *l_980 = (void*)0;
                int *l_981 = &l_792;
                int *l_982 = &l_762;
                int *l_983 = &l_690;
                --l_841;
                if ((((p_20 ^ g_428) == ((*l_849) = (safe_rshift_func_uint16_t_u_s((((**p_21) < (safe_mod_func_int32_t_s_s((l_793 == (p_20 ^ (l_585 >= ((*l_848) = g_788)))), (*g_542)))) > (*l_601)), g_440)))) & (*l_601)))
                {
                    unsigned l_850 = 4294967286UL;
                    int *l_853 = &l_791;
                    unsigned *l_876 = &g_229;
                    unsigned **l_875 = &l_876;
                    unsigned char *l_877 = &g_535;
                    (*l_763) &= ((*l_730) |= ((((*l_840) &= ((((void*)0 == &p_19) <= func_32((l_850 < (safe_lshift_func_int16_t_s_s((p_21 == &g_542), 11))), ((*p_21) = (*p_21)), l_853, (*g_541), g_63)) > g_836)) != l_690) && g_836));
                    for (l_727 = 0; (l_727 <= (-7)); l_727 = safe_sub_func_uint32_t_u_u(l_727, 7))
                    {
                        struct S0 **l_857 = &g_194;
                        int ***l_860 = (void*)0;
                        int **l_862 = &l_777;
                        int ***l_861 = &l_862;
                        (*l_801) ^= (*g_13);
                        (*l_857) = l_856;
                        (**l_857) = (*g_333);
                        (*l_795) &= (safe_add_func_int16_t_s_s(func_32(l_841, (*g_550), (*g_58), func_38(((*l_861) = p_21), l_863), g_673), p_19));
                    }
                    (*g_551) = ((~(safe_lshift_func_int8_t_s_u(((**l_863) = (((*l_872) = (((*l_877) = ((*l_848) = (((*l_840) &= ((safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s((((safe_add_func_int32_t_s_s(((4294967294UL | (((void*)0 != l_872) > g_417)) == (safe_div_func_uint32_t_u_u(((**l_863) || (((l_872 != ((*l_875) = &g_229)) < g_115) && g_775)), (**g_550)))), p_20)) >= (-6L)) ^ p_19), g_440)), (**p_21))) | p_19)) != (*l_601)))) >= 0UL)) ^ (-5L))), 6))) && 0x98C5L);
                    (*l_780) |= ((((**g_550) != g_296) < 0x2DA26440L) >= (*g_551));
                }
                else
                {
                    l_880 = l_878;
                    if ((**p_21))
                        break;
                    (*l_738) &= (**p_21);
                    if ((safe_add_func_uint8_t_u_u(((*l_848) = func_32(((*l_849) = (p_22 | g_673)), func_38(&l_601, &g_59), (*g_58), (*g_550), (safe_rshift_func_int8_t_s_s(((((safe_sub_func_uint32_t_u_u(g_159, func_32((**l_863), (*g_550), (*g_550), (*g_58), (**l_863)))) == 3L) ^ g_8) || p_20), 7)))), p_19)))
                    {
                        (*l_804) ^= (**p_21);
                    }
                    else
                    {
                        if ((*g_542))
                            break;
                    }
                }
                g_984--;
                return p_21;
            }
            else
            {
                unsigned l_996 = 0xDBDDD7B5L;
                for (g_334.f1 = 0; (g_334.f1 <= 29); ++g_334.f1)
                {
                    unsigned char *l_989 = (void*)0;
                    unsigned char *l_990 = &g_107;
                    char *l_991 = &g_115;
                    (*l_740) = ((((*l_990) = ((4294967288UL < l_618) == p_20)) < ((*l_724) ^ (+((((*l_991) ^= g_82) > (safe_add_func_int32_t_s_s(((*l_755) = (**g_58)), g_8))) ^ (safe_sub_func_uint16_t_u_u((l_996 = (&g_348 != &g_348)), 0xF78BL)))))) || g_159);
                    return p_21;
                }
                (*g_999) = l_997;
                (*l_806) = ((l_793 = ((-1L) && ((*l_765) = (*g_551)))) >= (safe_add_func_int16_t_s_s((func_32(g_8, &l_759, &l_834, &l_762, (safe_lshift_func_uint16_t_u_s((&g_440 != (void*)0), ((((**p_21) < (**p_21)) <= 0L) >= l_996)))) ^ g_774), 0x9C6FL)));
                (*l_856) = (*l_856);
            }
            g_1140--;
        }
        (*g_551) ^= (safe_sub_func_int8_t_s_s(((void*)0 == l_1145), ((void*)0 == l_1147)));
    }
    return &g_542;
}







static char func_25(int p_26, unsigned char p_27, int * p_28, unsigned p_29)
{
    int *l_570 = &g_63;
    int l_571 = 0xFA48EE69L;
    int *l_572 = &l_571;
    int l_573 = 0xE2287291L;
    int *l_574 = &l_573;
    unsigned l_575 = 0x9258C689L;
    ++l_575;
    for (g_98 = 0; (g_98 != 6); g_98++)
    {
        for (p_26 = 0; (p_26 <= 18); p_26 = safe_add_func_int16_t_s_s(p_26, 8))
        {
            return g_82;
        }
    }
    return p_27;
}







static short func_32(char p_33, int * p_34, int * p_35, int * p_36, unsigned short p_37)
{
    struct S0 l_569 = {0x10L,0x25L,18446744073709551615UL};
    l_569 = l_569;
    return l_569.f0;
}







static int * func_38(int ** p_39, int ** p_40)
{
    unsigned l_558 = 0UL;
    unsigned short *l_559 = &g_442;
    int l_560 = 0x44A49926L;
    unsigned char *l_561 = &g_535;
    char **l_564 = (void*)0;
    char *l_566 = &g_334.f1;
    char **l_565 = &l_566;
    unsigned *l_567 = &g_229;
    (*g_542) = (((safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((void*)0 == (*g_550)), ((*l_567) = ((l_558 & ((*l_559) = 65528UL)) <= ((((*l_561) ^= l_560) != (l_558 >= (&g_115 != ((*l_565) = &g_115)))) != l_560))))), 4)), 9L)) ^ 0xC35C898AL) >= l_560);
    return (*p_39);
}







static int ** func_41(int * p_42, int p_43, int * p_44, int ** p_45)
{
    short *l_539 = &g_11;
    int *l_540 = &g_63;
    int *l_543 = &g_417;
    int **l_549 = &g_59;
    (*g_541) = ((*g_58) = l_540);
    (*l_543) &= ((*g_542) = ((void*)0 != &l_540));
    for (g_334.f0 = (-20); (g_334.f0 <= (-1)); g_334.f0 = safe_add_func_int8_t_s_s(g_334.f0, 7))
    {
        unsigned l_546 = 4294967289UL;
        ++l_546;
    }
    return l_549;
}







static int * func_46(int ** p_47, int ** p_48, unsigned short p_49)
{
    char *l_113 = (void*)0;
    char *l_114 = &g_115;
    short *l_116 = &g_11;
    int l_117 = 0x3C1A33FEL;
    int l_118 = (-6L);
    int l_239 = (-1L);
    int l_278 = 0L;
    int l_279 = 0L;
    int l_288 = 1L;
    int ***l_300 = &g_58;
    int *l_315 = (void*)0;
    unsigned l_321 = 4294967291UL;
    int *l_329 = &l_278;
    unsigned l_372 = 0x3624ADBFL;
    struct S0 l_375 = {1L,-1L,1UL};
    unsigned short l_454 = 0x75E5L;
    char l_483 = 0L;
    int *l_484 = &l_279;
    int *l_485 = &l_288;
    int *l_486 = &l_288;
    int *l_487 = &g_417;
    int *l_488 = &g_63;
    int *l_489 = &l_278;
    int *l_490 = (void*)0;
    int *l_491 = &l_278;
    int *l_492 = &g_63;
    int *l_493 = &l_239;
    int *l_494 = &l_278;
    int *l_495 = &l_117;
    int *l_496 = (void*)0;
    int *l_497 = &g_417;
    int *l_498 = (void*)0;
    int *l_499 = (void*)0;
    int *l_500 = (void*)0;
    int *l_501 = &l_288;
    int *l_502 = &g_417;
    int *l_503 = &l_278;
    int *l_504 = (void*)0;
    int *l_505 = &g_417;
    int *l_506 = &l_288;
    int *l_507 = &g_417;
    int *l_508 = (void*)0;
    int *l_509 = &l_288;
    int *l_510 = &l_118;
    int *l_511 = &l_239;
    int *l_512 = &l_279;
    int *l_513 = (void*)0;
    int *l_514 = &l_279;
    int *l_515 = &g_417;
    int *l_516 = (void*)0;
    int *l_517 = &l_288;
    int *l_518 = &l_118;
    int *l_519 = (void*)0;
    int *l_520 = &l_117;
    int *l_521 = &g_417;
    char l_522 = (-9L);
    int *l_523 = &l_117;
    int *l_524 = &l_279;
    int *l_525 = &l_117;
    int *l_526 = (void*)0;
    int *l_527 = &g_63;
    int *l_528 = (void*)0;
    int *l_529 = (void*)0;
    int *l_530 = (void*)0;
    int *l_531 = &l_118;
    int *l_532 = &l_288;
    int *l_533 = &l_117;
    int *l_534 = (void*)0;
    if ((0x01CFL != ((safe_sub_func_uint16_t_u_u(((void*)0 == p_48), (((*l_116) ^= ((((*l_114) ^= 0x72L) > (-4L)) > (p_49 | 1UL))) != l_117))) ^ (((((l_118 ^= ((g_8 <= l_117) | 0x9493L)) || g_92) >= l_117) != 1L) || p_49))))
    {
        struct S0 *l_121 = (void*)0;
        int l_126 = 0x2354C0A2L;
        int l_147 = 1L;
        int l_156 = (-1L);
        unsigned char l_162 = 0x7DL;
        char l_181 = 0x34L;
        short l_271 = 0x2E2AL;
        unsigned short *l_391 = (void*)0;
        unsigned short *l_392 = &g_8;
lbl_349:
        if ((safe_lshift_func_int8_t_s_u(((*l_114) = (l_121 == g_61)), g_8)))
        {
            int *l_122 = (void*)0;
            int *l_123 = &l_117;
            int *l_124 = &l_117;
            int *l_125 = &l_118;
            int *l_127 = &l_126;
            int *l_128 = &g_63;
            int *l_129 = &l_126;
            int *l_130 = &g_63;
            int *l_131 = &g_63;
            int l_132 = 1L;
            int *l_133 = (void*)0;
            int *l_134 = &g_63;
            int *l_135 = &l_118;
            int *l_136 = (void*)0;
            int *l_137 = (void*)0;
            int *l_138 = &l_126;
            int *l_139 = &l_132;
            int *l_140 = &l_117;
            int *l_141 = &l_117;
            int l_142 = 0xD2487603L;
            int *l_143 = &l_118;
            int *l_144 = (void*)0;
            int *l_145 = &l_118;
            int *l_146 = &l_132;
            int l_148 = 1L;
            int *l_149 = &g_63;
            int *l_150 = &l_126;
            int *l_151 = &l_132;
            int *l_152 = &l_147;
            int *l_153 = &l_117;
            int *l_154 = &l_118;
            int *l_155 = &l_126;
            int *l_157 = (void*)0;
            int *l_158 = &l_156;
            unsigned short *l_184 = (void*)0;
            unsigned short *l_185 = &g_8;
            struct S0 **l_195 = &l_121;
            int l_205 = 0x09CA3844L;
            g_159++;
            (*g_58) = (*g_58);
            if (l_162)
            {
                int ***l_169 = &g_58;
                struct S0 l_170 = {-10L,-1L,0x9A86FCAFL};
                struct S0 *l_171 = (void*)0;
                struct S0 *l_172 = &l_170;
                (*p_48) = (*p_48);
                (*l_141) |= ((0x94FBL || (~(safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(p_49, l_118)), (safe_lshift_func_uint8_t_u_u((((*l_169) = func_50(&l_145, &g_59, p_47, p_49)) == (void*)0), g_115)))))) <= p_49);
                (*l_172) = l_170;
            }
            else
            {
                int l_176 = 0xA7CC927BL;
                for (g_107 = (-3); (g_107 >= 18); g_107 = safe_add_func_int8_t_s_s(g_107, 4))
                {
                    int *l_175 = &g_10;
                    (*p_48) = l_175;
                    if (((g_107 & ((*l_116) = (*l_175))) || (g_92 ^ (l_176 && (g_11 && (safe_lshift_func_int8_t_s_s(((((*l_154) = ((safe_sub_func_uint8_t_u_u(l_181, (g_98 != 0x03B6L))) >= (p_49 ^ p_49))) | (-7L)) | g_159), 3)))))))
                    {
                        (*l_154) = (*l_175);
                    }
                    else
                    {
                        return (*p_47);
                    }
                }
            }
            if (((safe_rshift_func_uint16_t_u_s((((*l_185) &= p_49) ^ (~g_159)), p_49)) > (((*l_128) = (safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s(g_63, 2)), 1))) & (safe_add_func_int8_t_s_s(p_49, (safe_rshift_func_int16_t_s_s((p_49 == (((*l_195) = g_194) != (void*)0)), (safe_rshift_func_int16_t_s_s((p_49 == l_126), 10)))))))))
            {
                for (g_98 = 8; (g_98 != (-5)); g_98 = safe_sub_func_uint32_t_u_u(g_98, 6))
                {
                    (*l_128) = 0L;
                }
                if (g_11)
                    goto lbl_349;
            }
            else
            {
                int *l_232 = &l_156;
                int *l_233 = &l_117;
                int *l_234 = &l_156;
                int *l_235 = &l_132;
                int *l_236 = &l_132;
                int *l_237 = &l_118;
                int *l_238 = &l_156;
                int *l_240 = &l_147;
                int *l_241 = &g_63;
                int *l_242 = &l_118;
                int *l_243 = &l_126;
                int *l_244 = (void*)0;
                int *l_245 = &l_239;
                int *l_246 = (void*)0;
                int *l_247 = &g_63;
                for (g_11 = (-30); (g_11 != (-15)); ++g_11)
                {
                    char l_206 = 0x29L;
                    int l_210 = 0x8232EDDAL;
                    int l_222 = 0xFB7419DFL;
                    (*p_48) = (*g_58);
                    for (g_8 = 0; (g_8 <= 36); ++g_8)
                    {
                        struct S0 l_204 = {0xB9L,-1L,0x62F6D3EBL};
                        int l_207 = 0L;
                        int *l_208 = &l_156;
                        int *l_209 = &l_126;
                        int *l_211 = &l_132;
                        int *l_212 = &l_142;
                        int *l_213 = &l_147;
                        int *l_214 = (void*)0;
                        int *l_215 = &l_210;
                        int *l_216 = &l_142;
                        int *l_217 = &l_147;
                        int *l_218 = &l_210;
                        int *l_219 = &l_148;
                        int *l_220 = &l_156;
                        int *l_221 = &l_132;
                        int *l_223 = &l_117;
                        int *l_224 = (void*)0;
                        int *l_225 = (void*)0;
                        int *l_226 = (void*)0;
                        int *l_227 = (void*)0;
                        int *l_228 = &l_207;
                        l_204 = l_204;
                        --g_229;
                        (*l_139) ^= 6L;
                        (*p_48) = (*g_58);
                    }
                }
                --g_248;
                (*l_240) = (*g_13);
            }
        }
        else
        {
            int *l_251 = (void*)0;
            int *l_252 = &l_239;
            int *l_253 = &l_117;
            int *l_254 = (void*)0;
            int *l_255 = &l_118;
            int *l_256 = &l_126;
            int *l_257 = (void*)0;
            int *l_258 = (void*)0;
            int *l_259 = (void*)0;
            int l_260 = (-4L);
            int *l_261 = &l_118;
            int *l_262 = &l_117;
            int *l_263 = &l_118;
            int *l_264 = (void*)0;
            int *l_265 = (void*)0;
            int *l_266 = &g_63;
            int *l_267 = &l_118;
            int *l_268 = &l_117;
            int *l_269 = &l_156;
            int *l_270 = &l_239;
            int *l_272 = &l_239;
            int *l_273 = &l_239;
            int *l_274 = (void*)0;
            int *l_275 = &l_118;
            int *l_276 = &l_156;
            int *l_277 = &l_117;
            int *l_280 = &l_156;
            int *l_281 = (void*)0;
            int *l_282 = &l_278;
            int *l_284 = &l_118;
            int *l_285 = &l_117;
            int *l_286 = &l_118;
            int *l_287 = &l_118;
            int *l_289 = &g_63;
            int *l_290 = &l_117;
            int *l_291 = &l_288;
            int *l_292 = &l_126;
            int *l_293 = &l_117;
            int *l_294 = (void*)0;
            int *l_295 = &l_279;
            unsigned l_316 = 0x0B296149L;
            struct S0 **l_345 = &g_194;
lbl_299:
            g_296--;
            (*g_58) = (*g_58);
            if (l_118)
                goto lbl_299;
            if ((p_49 == (l_300 != &p_47)))
            {
                char l_306 = (-1L);
                struct S0 l_309 = {0L,0x50L,0x18A6757BL};
                struct S0 *l_310 = &l_309;
                if ((**g_58))
                {
                    (*l_261) ^= (**g_58);
                }
                else
                {
                    (*l_292) = (safe_unary_minus_func_int16_t_s((safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(p_49, g_82)), l_306))));
                    (**l_300) = (*g_58);
                    (*l_272) |= (247UL >= (***l_300));
                    for (l_278 = (-6); (l_278 < 24); l_278++)
                    {
                        (*l_287) = (*l_277);
                        if ((*g_59))
                            continue;
                        (*p_48) = (*g_58);
                    }
                }
                (*l_310) = l_309;
            }
            else
            {
                unsigned l_324 = 0x3E397D91L;
                unsigned short *l_325 = (void*)0;
                unsigned short *l_326 = &g_8;
                struct S0 **l_347 = &l_121;
                (*p_48) = (void*)0;
                l_277 = (*g_58);
                if ((safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(((*l_116) |= g_248), ((((l_315 = &l_156) != (void*)0) < l_316) & (((*l_326) ^= (safe_sub_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(l_321, 0xFDBF3818L)) >= (safe_sub_func_uint32_t_u_u(l_324, (**p_47)))), 0xBFFE4561L))) < l_324)))), g_98)))
                {
                    (*l_289) &= ((safe_sub_func_int16_t_s_s((((void*)0 != &g_58) >= l_324), ((*l_326) = p_49))) >= ((*l_116) = (g_107 && (*l_315))));
                    return (*p_47);
                }
                else
                {
                    struct S0 l_332 = {1L,0xD6L,0UL};
                    struct S0 ***l_346 = &l_345;
                    for (l_126 = 0; (l_126 >= (-17)); --l_126)
                    {
                        (*l_272) = ((void*)0 == &g_8);
                        (*g_333) = l_332;
                        (*l_286) = ((*l_269) = (**p_47));
                    }
                    (*l_263) |= (safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s(l_324, ((+(safe_add_func_int32_t_s_s(((l_332.f2 || (l_324 <= ((p_49 || g_296) <= g_107))) > (safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((((*l_346) = l_345) != (g_348 = l_347)), 2)), 0x11L))), (*l_252)))) | (*l_290)))), g_115));
                }
                (*l_285) &= l_324;
            }
        }
        for (g_334.f0 = (-1); (g_334.f0 > 18); ++g_334.f0)
        {
            int l_352 = 0x8C8359BEL;
            int l_353 = 0x0661D1CEL;
            int *l_354 = &l_278;
            int *l_355 = (void*)0;
            int *l_356 = &l_353;
            int *l_357 = &l_117;
            int *l_358 = &l_278;
            int *l_359 = &l_279;
            int *l_360 = &l_117;
            int *l_361 = &l_147;
            int *l_362 = (void*)0;
            int *l_363 = (void*)0;
            int *l_364 = &l_147;
            int *l_365 = &l_117;
            int *l_366 = &l_156;
            int *l_367 = &l_126;
            int *l_368 = (void*)0;
            int *l_369 = (void*)0;
            int l_370 = 0L;
            int *l_371 = &l_117;
            ++l_372;
            l_375 = l_375;
            (*l_371) = (safe_rshift_func_int16_t_s_s((-1L), g_248));
            for (l_375.f2 = 0; (l_375.f2 <= 49); l_375.f2 = safe_add_func_uint32_t_u_u(l_375.f2, 5))
            {
                short l_382 = 0xD4AAL;
                (*l_365) &= (**p_47);
                l_382 &= ((p_49 && (safe_lshift_func_int16_t_s_s((0UL == g_8), 9))) || p_49);
            }
        }
        if (((safe_rshift_func_int16_t_s_u(0xB6CDL, (((void*)0 == &g_8) ^ (safe_sub_func_int32_t_s_s(((p_49 < 0xDA62993EL) == ((safe_add_func_int32_t_s_s((*l_329), (safe_rshift_func_uint8_t_u_u(g_10, 6)))) || ((l_147 | (((*l_392)++) > g_107)) > 8UL))), (**p_47)))))) || (*g_13)))
        {
            int *l_395 = &l_117;
            int l_396 = 0xAFD50193L;
            int *l_397 = &g_63;
            int *l_398 = (void*)0;
            int *l_399 = &l_239;
            int *l_400 = &l_278;
            int *l_401 = &l_239;
            int *l_402 = &l_279;
            int *l_403 = &l_396;
            int l_404 = 0x5FD4661EL;
            int l_405 = (-1L);
            int *l_409 = (void*)0;
            int *l_410 = &l_117;
            int *l_411 = (void*)0;
            int *l_412 = (void*)0;
            int *l_413 = (void*)0;
            int *l_414 = &l_278;
            int *l_415 = &l_405;
            int *l_416 = &l_279;
            int *l_418 = &l_126;
            int *l_419 = &g_417;
            int *l_420 = &l_279;
            int *l_421 = &l_126;
            int *l_422 = &l_156;
            int *l_423 = &g_63;
            int *l_424 = (void*)0;
            int *l_425 = (void*)0;
            int *l_426 = &l_278;
            int *l_427 = (void*)0;
            struct S0 *l_431 = &g_334;
            g_406--;
            g_428++;
            (*g_58) = (*g_58);
            (*g_348) = l_431;
        }
        else
        {
            int l_434 = (-6L);
            char *l_466 = &l_375.f1;
            for (g_8 = 0; (g_8 > 5); g_8 = safe_add_func_int32_t_s_s(g_8, 7))
            {
                unsigned l_439 = 0xD678DBA8L;
                unsigned short *l_441 = &g_442;
                int *l_444 = &l_147;
                (*l_329) = ((l_434 >= g_63) >= p_49);
                if ((safe_lshift_func_int16_t_s_u(p_49, ((*l_441) = (g_440 = (safe_mod_func_int32_t_s_s(((*l_329) ^= (l_439 = (**p_47))), (**p_47))))))))
                {
                    struct S0 *l_443 = (void*)0;
                    (*g_58) = (*p_47);
                    l_375 = (*g_333);
                    return (*p_47);
                }
                else
                {
                    unsigned l_453 = 0x0BBCD69BL;
                    unsigned short **l_455 = &l_441;
                    int *l_456 = &l_279;
                    char *l_465 = &g_334.f1;
                    (*l_456) |= ((safe_rshift_func_uint8_t_u_u((0xDDB6L || (safe_add_func_int8_t_s_s(((*g_58) != (*p_47)), g_92))), l_126)) & (safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s(l_453, (((*l_329) = ((*l_444) = l_454)) || (((*l_455) = &p_49) != &p_49)))), 2L)));
                    (*l_329) ^= (safe_div_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(((+(((*l_444) |= (!(+(**p_47)))) != (g_442 & (safe_sub_func_uint32_t_u_u(((p_49 < (l_465 != l_466)) != (g_248 != ((safe_lshift_func_int8_t_s_s(g_334.f2, l_434)) >= ((*p_48) == (void*)0)))), 0x62369411L))))) || (*g_13)), 3)), (*l_456))) > g_442), g_159));
                    if ((*l_444))
                    {
                        unsigned char l_477 = 0x00L;
                        (*l_456) |= ((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(p_49, (safe_unary_minus_func_uint8_t_u(((safe_sub_func_uint32_t_u_u(((safe_unary_minus_func_uint16_t_u(g_115)) ^ (*g_13)), l_477)) < (*l_444)))))), (safe_lshift_func_int16_t_s_s(1L, 7)))) || ((void*)0 != &g_348));
                    }
                    else
                    {
                        if ((*l_444))
                            break;
                        (*l_329) |= l_147;
                        (**l_300) = (*p_48);
                    }
                }
            }
        }
    }
    else
    {
        unsigned short l_482 = 1UL;
        (*l_329) = (safe_rshift_func_int16_t_s_s(l_482, l_483));
    }
    g_535--;
    return (*p_48);
}







static int ** func_50(int ** p_51, int ** p_52, int ** p_53, short p_54)
{
    struct S0 l_60 = {1L,0x4DL,0UL};
    int *l_62 = &g_63;
    int *l_64 = &g_63;
    int *l_65 = (void*)0;
    int *l_66 = &g_63;
    int l_67 = (-1L);
    int *l_68 = (void*)0;
    int *l_69 = &g_63;
    int *l_70 = &l_67;
    int *l_71 = &g_63;
    int *l_72 = (void*)0;
    int *l_73 = &l_67;
    int *l_74 = (void*)0;
    int *l_75 = &g_63;
    int *l_76 = &l_67;
    int *l_77 = &g_63;
    int *l_78 = &l_67;
    int *l_79 = &l_67;
    int *l_80 = &l_67;
    int *l_81 = &l_67;
    int *l_83 = &l_67;
    int *l_84 = &l_67;
    int *l_85 = &l_67;
    int *l_86 = &g_63;
    int l_87 = 0x1082E70DL;
    int l_88 = 7L;
    int *l_93 = (void*)0;
    int *l_94 = (void*)0;
    int *l_95 = &l_67;
    int *l_96 = &l_88;
    int *l_97 = &l_88;
    int *l_99 = (void*)0;
    int *l_100 = (void*)0;
    int *l_101 = &l_87;
    int *l_102 = (void*)0;
    int *l_103 = &l_87;
    int *l_104 = &l_67;
    int *l_105 = &l_88;
    int *l_106 = &l_88;
    int **l_110 = &l_84;
    l_60 = l_60;
    ++g_89;
    ++g_107;
    return &g_59;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_334.f0, "g_334.f0", print_hash_value);
    transparent_crc(g_334.f1, "g_334.f1", print_hash_value);
    transparent_crc(g_334.f2, "g_334.f2", print_hash_value);
    transparent_crc(g_406, "g_406", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_428, "g_428", print_hash_value);
    transparent_crc(g_440, "g_440", print_hash_value);
    transparent_crc(g_442, "g_442", print_hash_value);
    transparent_crc(g_535, "g_535", print_hash_value);
    transparent_crc(g_673, "g_673", print_hash_value);
    transparent_crc(g_693, "g_693", print_hash_value);
    transparent_crc(g_774, "g_774", print_hash_value);
    transparent_crc(g_775, "g_775", print_hash_value);
    transparent_crc(g_788, "g_788", print_hash_value);
    transparent_crc(g_836, "g_836", print_hash_value);
    transparent_crc(g_837, "g_837", print_hash_value);
    transparent_crc(g_936, "g_936", print_hash_value);
    transparent_crc(g_953, "g_953", print_hash_value);
    transparent_crc(g_972, "g_972", print_hash_value);
    transparent_crc(g_984, "g_984", print_hash_value);
    transparent_crc(g_1140, "g_1140", print_hash_value);
    transparent_crc(g_1178.f0, "g_1178.f0", print_hash_value);
    transparent_crc(g_1178.f1, "g_1178.f1", print_hash_value);
    transparent_crc(g_1178.f2, "g_1178.f2", print_hash_value);
    transparent_crc(g_1264, "g_1264", print_hash_value);
    transparent_crc(g_1419, "g_1419", print_hash_value);
    transparent_crc(g_1427, "g_1427", print_hash_value);
    transparent_crc(g_1470, "g_1470", print_hash_value);
    transparent_crc(g_1607, "g_1607", print_hash_value);
    transparent_crc(g_1632, "g_1632", print_hash_value);
    transparent_crc(g_1753, "g_1753", print_hash_value);
    transparent_crc(g_1810, "g_1810", print_hash_value);
    transparent_crc(g_1905, "g_1905", print_hash_value);
    transparent_crc(g_1909, "g_1909", print_hash_value);
    transparent_crc(g_1997, "g_1997", print_hash_value);
    transparent_crc(g_2007, "g_2007", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
