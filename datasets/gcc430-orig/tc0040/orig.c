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
   volatile int f0;
   int f1;
   volatile unsigned f2;
   volatile char f3;
   unsigned f4;
   int f5;
};


static volatile struct S0 g_2 = {4L,0xFC2285FAL,0xFE30F587L,-1L,1UL,-3L};
static int g_5 = 0x8555145CL;
static struct S0 g_12 = {0x66E9F086L,-4L,0x1600D549L,0L,1UL,0x709BA87AL};
static struct S0 *g_11 = &g_12;
static volatile struct S0 g_45 = {9L,1L,0x7326DC75L,4L,0x2D949044L,0x8F7F2F1EL};
static volatile struct S0 g_63 = {-8L,0x72A6DD75L,18446744073709551607UL,-1L,0x8F94618CL,0L};
static struct S0 g_73 = {-5L,1L,0xFA3C5B2EL,8L,0x7CA61894L,0xB8798E37L};
static unsigned char g_78 = 0x0EL;
static unsigned short g_79 = 1UL;
static int g_80 = 1L;
static unsigned char g_83 = 0x79L;
static char g_98 = 7L;
static unsigned short g_103 = 0xB858L;
static int **g_115 = (void*)0;
static int ***g_114 = &g_115;
static unsigned g_121 = 0x2B5784CDL;
static struct S0 g_124 = {0x2E7F1700L,-1L,0x16F66F74L,1L,0x6666BE2FL,-10L};
static volatile unsigned short **g_132 = (void*)0;
static int g_135 = 1L;
static volatile struct S0 g_200 = {-1L,0x53F484CDL,18446744073709551615UL,0x80L,5UL,0x7FEAA8E9L};
static int g_265 = 0x8670366AL;
static volatile unsigned char g_280 = 0x91L;
static short g_331 = 0xD32AL;
static unsigned char *g_347 = &g_78;
static volatile unsigned char g_414 = 2UL;
static unsigned char g_512 = 0xABL;
static volatile unsigned char g_594 = 0x38L;
static int g_648 = (-7L);
static volatile short g_802 = (-1L);
static volatile unsigned g_818 = 18446744073709551615UL;
static int g_917 = 0x080C5C93L;
static short g_930 = 1L;
static short g_931 = 6L;
static volatile char g_932 = 1L;
static unsigned short g_933 = 65535UL;
static unsigned short g_962 = 0x0192L;
static unsigned g_1000 = 4294967290UL;
static volatile struct S0 *g_1093 = &g_45;
static int g_1325 = 0xCCE767E4L;
static unsigned g_1331 = 0x5639610EL;
static volatile unsigned g_1426 = 0x62E942B4L;
static char g_1457 = 2L;
static volatile short g_1466 = (-10L);
static volatile short g_1470 = 0xB267L;
static volatile char g_1534 = 0x47L;
static unsigned char g_1540 = 0x5DL;
static volatile struct S0 g_1545 = {0x35424E77L,-8L,0x633ED7C0L,1L,0x9FF54B80L,0L};
static struct S0 g_1555 = {0x311F1918L,0xBF4EBD13L,0x5791654AL,0L,0xFBB326BAL,0L};
static struct S0 g_1557 = {0x3114E663L,0L,18446744073709551614UL,3L,0xC8DE6106L,0x0A15BF74L};
static struct S0 g_1558 = {1L,0x23D4B781L,0x52EE5B01L,1L,0x1176A92EL,-8L};
static volatile unsigned short g_2039 = 0xEE48L;
static int g_2211 = 0xC166D751L;
static int *g_2212 = &g_73.f5;



static struct S0 func_1(void);
static int * func_6(int * p_7);
static int * func_8(struct S0 * p_9, int p_10);
static unsigned short func_13(int * p_14, struct S0 * p_15);
static int * func_16(struct S0 * p_17);
static struct S0 * func_18(struct S0 * p_19);
static struct S0 func_20(struct S0 * p_21, char p_22);
static struct S0 * func_23(int p_24, int * p_25);
static int func_26(unsigned char p_27);
static short func_28(unsigned p_29, char p_30, char p_31, unsigned short p_32);
static struct S0 func_1(void)
{
    volatile struct S0 *l_3 = &g_2;
    int *l_4 = &g_5;
    int l_87 = 0xFFF44055L;
    struct S0 **l_154 = (void*)0;
    struct S0 *l_156 = &g_12;
    struct S0 **l_155 = &l_156;
    int **l_2214 = (void*)0;
    (*l_3) = g_2;
    (*l_4) = 0x2DB8E964L;
    l_4 = func_6(func_8(g_11, (g_12.f4 != ((*l_4) = func_13(func_16(((*l_155) = func_18(((*l_155) = (func_20(((g_12.f3 , g_12.f1) , func_23((*l_4), &g_5)), l_87) , (void*)0))))), g_11)))));
    return (*g_11);
}







static int * func_6(int * p_7)
{
    int *l_2213 = &g_1325;
    return l_2213;
}







static int * func_8(struct S0 * p_9, int p_10)
{
    short l_2074 = 0xD7CFL;
    int *l_2075 = &g_73.f5;
    int l_2100 = 0L;
    int l_2131 = 0x432A1DEFL;
    int l_2135 = 0x98A78487L;
    int l_2141 = 9L;
    int l_2154 = (-1L);
    int l_2158 = 0L;
    int l_2166 = 0x23F2D3A0L;
    int l_2195 = 0x78362799L;
    unsigned l_2205 = 0x0B9F0665L;
    char l_2210 = 0x81L;
    l_2075 = func_16(p_9);
    if ((((((*l_2075) || (safe_add_func_int16_t_s_s(((((0x87L | p_10) || (safe_lshift_func_uint16_t_u_s((*l_2075), (safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((*g_347) , p_10), p_10)), ((safe_lshift_func_uint8_t_u_s((*g_347), 6)) && (0x5A5021B6L && (*l_2075)))))))) , g_121) & p_10), 2L))) ^ 1L) , (void*)0) == &g_124))
    {
        p_10 |= (*l_2075);
    }
    else
    {
        int ****l_2088 = &g_114;
        int l_2099 = 7L;
        int l_2102 = 0x52E512EBL;
        int *l_2104 = (void*)0;
        int *l_2105 = &g_648;
        int *l_2106 = &g_124.f5;
        int *l_2107 = (void*)0;
        int *l_2108 = (void*)0;
        int *l_2109 = &g_1555.f5;
        int *l_2110 = &l_2102;
        int *l_2111 = &g_648;
        int *l_2112 = &g_917;
        int *l_2113 = &g_73.f5;
        int *l_2114 = &g_648;
        int *l_2115 = &g_648;
        int *l_2116 = &g_917;
        int *l_2117 = &g_124.f5;
        int *l_2118 = &g_135;
        int *l_2119 = (void*)0;
        int *l_2120 = &g_648;
        int *l_2121 = &g_1555.f5;
        int *l_2122 = &g_124.f5;
        int *l_2123 = &g_124.f5;
        int *l_2124 = (void*)0;
        int *l_2125 = (void*)0;
        int *l_2126 = (void*)0;
        int *l_2127 = &g_73.f5;
        int *l_2128 = &g_124.f5;
        int *l_2129 = &g_1557.f5;
        int *l_2130 = &g_135;
        int *l_2132 = &g_1557.f5;
        int *l_2133 = &g_73.f5;
        int *l_2134 = (void*)0;
        int *l_2136 = &g_1558.f5;
        int *l_2137 = &g_1558.f5;
        int *l_2138 = &g_1557.f5;
        int *l_2139 = (void*)0;
        int *l_2140 = &l_2131;
        int *l_2142 = &g_12.f5;
        int *l_2143 = (void*)0;
        int l_2144 = 0x2BFE0152L;
        int *l_2145 = &l_2144;
        int *l_2146 = (void*)0;
        int *l_2147 = &g_12.f5;
        int *l_2148 = &l_2099;
        int *l_2149 = (void*)0;
        int *l_2150 = &g_917;
        int l_2151 = 1L;
        int *l_2152 = &l_2141;
        int *l_2153 = &g_1555.f5;
        int *l_2155 = &g_917;
        int *l_2156 = &g_135;
        int *l_2157 = &l_2154;
        int *l_2159 = (void*)0;
        int *l_2160 = (void*)0;
        int *l_2161 = &l_2144;
        int *l_2162 = &l_2154;
        int *l_2163 = &l_2131;
        int *l_2164 = (void*)0;
        int *l_2165 = &l_2154;
        int l_2167 = 1L;
        int *l_2168 = (void*)0;
        int *l_2169 = &l_2099;
        int *l_2170 = &g_648;
        int *l_2171 = &g_1555.f5;
        int *l_2172 = &g_124.f5;
        int *l_2173 = &g_1555.f5;
        int *l_2174 = (void*)0;
        int *l_2175 = &g_917;
        int l_2176 = 7L;
        int *l_2177 = &l_2158;
        int *l_2178 = (void*)0;
        int *l_2179 = &g_917;
        int *l_2180 = &g_917;
        int l_2181 = 0xE4387F38L;
        int l_2182 = 0x18EBB631L;
        int *l_2183 = &l_2151;
        int *l_2184 = (void*)0;
        int *l_2185 = &g_135;
        int *l_2186 = &l_2141;
        int l_2187 = 1L;
        int *l_2188 = &l_2187;
        int *l_2189 = &g_917;
        int *l_2190 = &g_135;
        int *l_2191 = &g_5;
        int *l_2192 = &g_135;
        int *l_2193 = (void*)0;
        int *l_2194 = (void*)0;
        int *l_2196 = &g_135;
        int *l_2197 = &l_2182;
        int *l_2198 = &l_2141;
        int *l_2199 = &l_2166;
        int *l_2200 = (void*)0;
        int *l_2201 = &l_2195;
        int *l_2202 = (void*)0;
        int *l_2203 = &g_648;
        int *l_2204 = &l_2158;
        for (g_1557.f1 = (-9); (g_1557.f1 != 13); ++g_1557.f1)
        {
            unsigned l_2101 = 0x1E138A28L;
            int **l_2103 = &l_2075;
            (*l_2103) = func_16((((l_2088 == ((p_10 != g_931) , (((4294967295UL ^ (p_10 && (l_2102 |= (func_26((*g_347)) && (((safe_lshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(p_10, (safe_lshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(p_10, l_2099)), (*l_2075))), l_2100)))) > p_10), 5)) < l_2101) == g_45.f0))))) >= l_2101) , (void*)0))) ^ 7L) , (void*)0));
            (*l_2103) = (*l_2103);
        }
        --l_2205;
    }
    g_2212 = func_16(func_23(((p_10 ^ func_28(((safe_add_func_uint16_t_u_u((*l_2075), ((g_2.f5 > (*l_2075)) , func_28((*l_2075), g_1555.f2, (*l_2075), l_2210)))) && 255UL), g_1557.f4, g_1325, p_10)) , g_2211), &l_2154));
    return &g_648;
}







static unsigned short func_13(int * p_14, struct S0 * p_15)
{
    unsigned short *l_965 = &g_933;
    int l_966 = 6L;
    int *l_968 = (void*)0;
    unsigned short **l_982 = &l_965;
    unsigned short ***l_981 = &l_982;
    unsigned short l_1081 = 0x37E9L;
    short l_1091 = (-5L);
    int l_1165 = 0x0CBDDC55L;
    int l_1185 = 0xD11B0D20L;
    int l_1202 = 1L;
    int l_1223 = 0x095F09BEL;
    int l_1225 = 1L;
    int l_1252 = 0x543EDD19L;
    int l_1259 = 1L;
    int l_1278 = (-1L);
    int l_1286 = 4L;
    unsigned l_1451 = 4294967290UL;
    char *l_1780 = &g_1457;
    unsigned char l_1786 = 5UL;
    if (((l_965 == l_965) & l_966))
    {
        unsigned char l_967 = 249UL;
        int *l_969 = &g_135;
        unsigned l_1002 = 0xA068D99AL;
        int l_1048 = 0xCB650859L;
        unsigned short l_1062 = 0xA6AAL;
        struct S0 *l_1094 = &g_73;
        if (((func_26((*g_347)) && l_967) , (*p_14)))
        {
            unsigned l_978 = 0x3E7B9A00L;
            g_917 ^= (((p_14 = l_968) == l_969) | (g_45.f3 ^ (((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((1L || (safe_rshift_func_uint8_t_u_s((~(*l_969)), 0))) > ((((*l_969) , l_966) , (safe_lshift_func_int16_t_s_u((*l_969), 2))) || (*l_969))), 0)), 251UL)) == l_978) == l_978)));
        }
        else
        {
            short l_996 = 4L;
            int l_1043 = 0xF82C1DCAL;
            int l_1092 = 5L;
            int **l_1095 = &l_969;
            for (g_78 = 0; (g_78 != 13); g_78++)
            {
                unsigned *l_983 = &g_121;
                short *l_997 = &g_930;
                int l_998 = 1L;
                unsigned *l_999 = &g_1000;
                unsigned *l_1001 = &g_73.f4;
                int l_1018 = 3L;
                int l_1038 = 0xDC09AC1EL;
                int l_1055 = 0L;
                struct S0 *l_1084 = (void*)0;
                struct S0 *l_1085 = (void*)0;
                struct S0 *l_1086 = &g_73;
                if (((((*p_14) = (((((((*l_983) = (&g_132 != l_981)) , ((*l_1001) = ((~((g_331 <= ((*p_14) , (g_121 = 0xC9275188L))) | (safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s(0UL, 3)) ^ (g_414 == (safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((65535UL >= (safe_mod_func_int32_t_s_s((((((*l_999) = (safe_sub_func_uint8_t_u_u((((*l_997) = (((*l_969) && 0x2402204BL) & l_996)) , l_998), (*l_969)))) , 65535UL) , (*p_14)) ^ (*l_969)), (-5L)))) && (*l_969)), 0x8681C7DDL)), (*p_14))))), (*l_969))))) != 0UL))) , l_966) == l_996) == g_917) && l_998)) > l_998) >= l_1002))
                {
                    int **l_1003 = &l_968;
                    (*l_1003) = p_14;
                    (**l_1003) = (*p_14);
                }
                else
                {
                    int l_1035 = 0x531857FFL;
                    int *l_1077 = (void*)0;
                    int *l_1078 = &l_966;
                    for (g_962 = 22; (g_962 >= 14); g_962 = safe_sub_func_int32_t_s_s(g_962, 8))
                    {
                        int *l_1006 = &g_5;
                        int *l_1007 = &l_966;
                        int *l_1008 = (void*)0;
                        int *l_1009 = &g_135;
                        int *l_1010 = &g_135;
                        int *l_1011 = (void*)0;
                        int *l_1012 = &g_73.f5;
                        int *l_1013 = &g_124.f5;
                        int *l_1014 = &g_124.f5;
                        int *l_1015 = &l_998;
                        int *l_1016 = &g_917;
                        int *l_1017 = &g_5;
                        int *l_1019 = &l_998;
                        int *l_1020 = (void*)0;
                        int *l_1021 = (void*)0;
                        int *l_1022 = &g_124.f5;
                        int *l_1023 = &g_917;
                        int *l_1024 = &g_135;
                        int *l_1025 = (void*)0;
                        int *l_1026 = &g_917;
                        int *l_1027 = &l_1018;
                        int *l_1028 = (void*)0;
                        int *l_1029 = (void*)0;
                        int *l_1030 = (void*)0;
                        int *l_1031 = &g_917;
                        int *l_1032 = &g_135;
                        int *l_1033 = (void*)0;
                        int *l_1034 = &l_1018;
                        int l_1036 = 0x6E0084CCL;
                        int *l_1037 = (void*)0;
                        int *l_1039 = &l_966;
                        int *l_1040 = &g_648;
                        int *l_1041 = &g_124.f5;
                        int *l_1042 = (void*)0;
                        int *l_1044 = &g_73.f5;
                        int *l_1045 = &g_135;
                        int *l_1046 = &l_1038;
                        int *l_1047 = (void*)0;
                        int *l_1049 = &g_917;
                        int *l_1050 = &l_1018;
                        int *l_1051 = &g_5;
                        int *l_1052 = &g_5;
                        int *l_1053 = &g_917;
                        int *l_1054 = &l_1038;
                        int *l_1056 = &g_5;
                        int *l_1057 = (void*)0;
                        int *l_1058 = &l_1036;
                        int *l_1059 = &l_1048;
                        int *l_1060 = &g_73.f5;
                        int *l_1061 = &l_1036;
                        l_1062++;
                        p_14 = p_14;
                        (*l_1056) ^= (safe_lshift_func_uint16_t_u_s(l_1055, 1));
                    }
                    (*l_1078) ^= ((*p_15) , (safe_lshift_func_int8_t_s_s((((*l_969) , ((***l_981) = (safe_lshift_func_uint8_t_u_s(((l_1035 <= (*p_14)) & (safe_rshift_func_int8_t_s_u(func_28((((((*p_14) < ((g_12.f1 , ((((*l_999) = func_28(((*l_999) = (safe_sub_func_uint16_t_u_u((--(**l_982)), (g_78 > (l_996 <= (((1UL > l_1018) & l_1035) , l_1035)))))), l_1055, (*l_969), (*l_969))) , l_996) ^ 8L)) == g_12.f1)) , 0UL) && l_1043) , g_80), l_1035, (*l_969), g_135), l_1055))), l_1035)))) && 65530UL), g_124.f4)));
                    (*l_1078) &= (safe_add_func_uint32_t_u_u(l_1081, (safe_rshift_func_int8_t_s_u(l_1018, l_1043))));
                }
                if ((*l_969))
                    continue;
                (*l_1086) = (*p_15);
            }
            l_1092 &= func_28(g_73.f3, (safe_add_func_uint16_t_u_u((((*l_969) >= g_124.f5) && l_1043), (0x8579C1D8L | (*p_14)))), (l_1043 , ((safe_sub_func_uint8_t_u_u((((-10L) < g_73.f5) < (*p_14)), 0xB4L)) > g_933)), l_1091);
            g_1093 = &g_200;
            (*l_1095) = (p_14 = func_16(l_1094));
        }
    }
    else
    {
        unsigned char l_1124 = 0UL;
        int l_1129 = 0x6AF2951EL;
        int l_1130 = 8L;
        int l_1132 = 1L;
        int l_1140 = 0x791708FCL;
        int l_1174 = 0L;
        int l_1206 = 0x64C1D7BEL;
        int l_1219 = 1L;
        int l_1243 = (-1L);
        int l_1251 = 9L;
        int l_1267 = 0xB1160B7FL;
        int l_1279 = 0xFDDF1104L;
        int l_1285 = 0L;
        int l_1288 = 2L;
        int l_1312 = 0xEC2AEBECL;
        int l_1317 = 0L;
        unsigned l_1436 = 0xC4F2EAB5L;
        short l_1437 = (-10L);
        unsigned char l_1455 = 1UL;
        unsigned short l_1503 = 0x9DECL;
        short l_1551 = 0x290FL;
        unsigned short l_1556 = 0x53FDL;
        char l_1673 = 0xDAL;
        char l_2069 = 0xB1L;
        unsigned char l_2070 = 0x0CL;
        for (g_79 = 0; (g_79 > 13); g_79++)
        {
            int *l_1098 = &g_12.f5;
            int *l_1099 = &g_73.f5;
            int *l_1100 = &g_73.f5;
            int *l_1101 = &g_124.f5;
            int *l_1102 = &g_917;
            int *l_1103 = (void*)0;
            int *l_1104 = &g_648;
            int *l_1105 = (void*)0;
            int *l_1106 = &g_135;
            int *l_1107 = &l_966;
            int *l_1108 = (void*)0;
            int *l_1109 = &g_12.f5;
            int *l_1110 = &l_966;
            int *l_1111 = (void*)0;
            int *l_1112 = &g_135;
            int *l_1113 = &g_648;
            int *l_1114 = &g_5;
            int *l_1115 = &l_966;
            int *l_1116 = (void*)0;
            int *l_1117 = (void*)0;
            int *l_1118 = &g_135;
            int *l_1119 = &g_135;
            int *l_1120 = &g_73.f5;
            int *l_1121 = (void*)0;
            int *l_1122 = &g_648;
            int *l_1123 = &g_12.f5;
            int l_1134 = (-8L);
            int l_1203 = 1L;
            int l_1271 = 0x4ADDE054L;
            int l_1318 = 1L;
            int l_1323 = 0x9C7E69D4L;
            int *l_1334 = (void*)0;
            int *l_1335 = &l_1223;
            int *l_1336 = &g_135;
            int *l_1337 = &l_1185;
            int *l_1338 = &l_1285;
            int *l_1339 = &l_1140;
            int *l_1340 = &l_1203;
            int *l_1341 = (void*)0;
            int *l_1342 = (void*)0;
            int *l_1343 = &l_1271;
            int *l_1344 = (void*)0;
            int *l_1345 = &l_1285;
            int *l_1346 = &l_1251;
            int *l_1347 = &g_124.f5;
            int *l_1348 = (void*)0;
            int *l_1349 = &l_1259;
            int *l_1350 = &l_1252;
            int *l_1351 = &l_1323;
            int *l_1352 = &l_1223;
            int *l_1353 = (void*)0;
            int *l_1354 = &l_1165;
            int *l_1355 = &g_12.f5;
            int *l_1356 = (void*)0;
            int *l_1357 = (void*)0;
            int *l_1358 = &l_1312;
            int *l_1359 = (void*)0;
            int *l_1360 = &l_1174;
            int *l_1361 = &l_1317;
            int *l_1362 = &l_1185;
            int *l_1363 = &l_1134;
            int *l_1364 = &l_1165;
            int *l_1365 = &l_1285;
            int *l_1366 = (void*)0;
            int *l_1367 = &l_1251;
            int *l_1368 = &l_1278;
            int *l_1369 = &l_1219;
            int *l_1370 = (void*)0;
            int *l_1371 = &l_1206;
            int *l_1372 = &g_73.f5;
            int *l_1373 = &l_1243;
            int *l_1374 = &l_1129;
            int *l_1375 = &l_1278;
            int *l_1376 = &l_1174;
            int *l_1377 = &l_1202;
            int *l_1378 = (void*)0;
            int *l_1379 = &g_135;
            int *l_1380 = &l_1165;
            int *l_1381 = &l_1323;
            int *l_1382 = &l_1271;
            int *l_1383 = &l_1323;
            int *l_1384 = (void*)0;
            int l_1385 = 0L;
            int *l_1386 = (void*)0;
            int *l_1387 = &g_124.f5;
            int *l_1388 = &l_1243;
            int *l_1389 = &l_1129;
            int *l_1390 = &l_1132;
            int *l_1391 = &l_1223;
            int *l_1392 = &l_966;
            int *l_1393 = (void*)0;
            int *l_1394 = &l_1285;
            int *l_1395 = &g_5;
            int *l_1396 = &l_1285;
            int *l_1397 = &l_1285;
            int *l_1398 = (void*)0;
            int *l_1399 = (void*)0;
            int *l_1400 = &l_1202;
            int *l_1401 = &l_1288;
            int *l_1402 = &g_917;
            int *l_1403 = &l_1165;
            int *l_1404 = &l_1323;
            int *l_1405 = &g_135;
            int *l_1406 = &l_1267;
            int *l_1407 = &g_648;
            int *l_1408 = &l_1206;
            int *l_1409 = &g_5;
            int *l_1410 = &l_1134;
            int *l_1411 = &l_966;
            int *l_1412 = &l_1267;
            int *l_1413 = &l_1206;
            int *l_1414 = &l_1252;
            int *l_1415 = &l_1251;
            int *l_1416 = &g_124.f5;
            int *l_1417 = &l_1279;
            int l_1418 = 2L;
            int l_1419 = 0xB9AFEC4DL;
            int *l_1420 = &l_1288;
            int *l_1421 = &l_1267;
            int *l_1422 = (void*)0;
            int *l_1423 = (void*)0;
            int *l_1424 = &l_1223;
            int *l_1425 = (void*)0;
            char *l_1435 = &g_98;
            short *l_1438 = &g_931;
            l_1124++;
            for (g_265 = 10; (g_265 < (-11)); g_265--)
            {
                int *l_1131 = (void*)0;
                int *l_1133 = (void*)0;
                int *l_1135 = (void*)0;
                int *l_1136 = &g_5;
                int *l_1137 = &g_135;
                int *l_1138 = &g_73.f5;
                int *l_1139 = &g_5;
                int *l_1141 = &l_1132;
                int *l_1142 = &l_1140;
                int *l_1143 = &g_917;
                int *l_1144 = &g_917;
                int *l_1145 = &l_1134;
                int *l_1146 = (void*)0;
                int *l_1147 = &l_1129;
                int *l_1148 = &l_1130;
                int *l_1149 = &g_135;
                int *l_1150 = &l_966;
                int *l_1151 = &l_1134;
                int *l_1152 = (void*)0;
                int *l_1153 = &g_5;
                int *l_1154 = &l_1130;
                int *l_1155 = (void*)0;
                int l_1156 = 0xA61ADB1DL;
                int *l_1157 = &g_124.f5;
                int *l_1158 = &g_917;
                int *l_1159 = &g_124.f5;
                int *l_1160 = (void*)0;
                int *l_1161 = &l_1134;
                int *l_1162 = &l_1130;
                int *l_1163 = &g_124.f5;
                int *l_1164 = &g_124.f5;
                int *l_1166 = &l_1156;
                int *l_1167 = &l_966;
                int *l_1168 = (void*)0;
                int *l_1169 = &l_1165;
                int *l_1170 = &g_135;
                int *l_1171 = &l_1130;
                int *l_1172 = &l_1132;
                int *l_1173 = &g_73.f5;
                int *l_1175 = &l_1174;
                int l_1176 = 1L;
                int *l_1177 = &l_1129;
                int l_1178 = 7L;
                int *l_1179 = &l_1129;
                int *l_1180 = &g_73.f5;
                int *l_1181 = (void*)0;
                int *l_1182 = (void*)0;
                int *l_1183 = &l_1156;
                int *l_1184 = &l_1156;
                int *l_1186 = &l_1178;
                int *l_1187 = &l_1140;
                int *l_1188 = &g_124.f5;
                int *l_1189 = &l_1130;
                int *l_1190 = &g_917;
                int *l_1191 = &l_1140;
                int *l_1192 = &g_124.f5;
                int *l_1193 = &g_124.f5;
                int *l_1194 = &l_1156;
                int *l_1195 = &g_648;
                int *l_1196 = &l_1174;
                int *l_1197 = &l_1176;
                int *l_1198 = &g_135;
                int *l_1199 = &g_12.f5;
                int *l_1200 = &l_1156;
                int l_1201 = 0L;
                int *l_1204 = (void*)0;
                int *l_1205 = &g_135;
                int *l_1207 = &l_1165;
                int *l_1208 = &g_135;
                int *l_1209 = (void*)0;
                int *l_1210 = &l_1178;
                int *l_1211 = &l_1134;
                int *l_1212 = &g_124.f5;
                int *l_1213 = (void*)0;
                int *l_1214 = &l_1130;
                int *l_1215 = &l_1130;
                int l_1216 = (-1L);
                int *l_1217 = &l_1185;
                int *l_1218 = (void*)0;
                int *l_1220 = &l_1216;
                int *l_1221 = &g_917;
                int *l_1222 = &l_1165;
                int *l_1224 = &l_1156;
                int *l_1226 = &g_12.f5;
                int *l_1227 = (void*)0;
                int *l_1228 = &l_1174;
                int *l_1229 = &l_1206;
                int *l_1230 = &l_1185;
                int *l_1231 = &l_1176;
                int *l_1232 = &l_1129;
                int l_1233 = 0xF2EA35F2L;
                int *l_1234 = &l_1185;
                int *l_1235 = &l_1174;
                int *l_1236 = &l_1156;
                int *l_1237 = &g_648;
                int *l_1238 = &l_1219;
                int *l_1239 = &l_1225;
                int *l_1240 = &l_1140;
                int *l_1241 = &l_1233;
                int *l_1242 = &l_1134;
                int *l_1244 = (void*)0;
                int *l_1245 = &l_1165;
                int *l_1246 = &l_1216;
                int *l_1247 = (void*)0;
                int *l_1248 = &l_1216;
                int *l_1249 = (void*)0;
                int *l_1250 = (void*)0;
                int *l_1253 = (void*)0;
                int *l_1254 = &l_1129;
                int *l_1255 = &g_917;
                int *l_1256 = (void*)0;
                int *l_1257 = &l_1174;
                int *l_1258 = &l_1178;
                int l_1260 = 9L;
                int *l_1261 = &l_1176;
                int *l_1262 = &g_124.f5;
                int *l_1263 = &l_1129;
                int *l_1264 = &l_1203;
                int *l_1265 = &l_1201;
                int *l_1266 = (void*)0;
                int *l_1268 = &g_12.f5;
                int *l_1269 = &l_1216;
                int *l_1270 = &l_1260;
                int *l_1272 = &l_1225;
                int *l_1273 = &l_1176;
                int l_1274 = 0x0170B06EL;
                int *l_1275 = &l_1243;
                int *l_1276 = &l_1267;
                int *l_1277 = (void*)0;
                int *l_1280 = &g_12.f5;
                int *l_1281 = &l_1223;
                int l_1282 = (-1L);
                int l_1283 = 0x8500BD0FL;
                int *l_1284 = &l_1174;
                int *l_1287 = &g_12.f5;
                int *l_1289 = (void*)0;
                int *l_1290 = &l_1259;
                int *l_1291 = &l_1201;
                int *l_1292 = &l_1140;
                int *l_1293 = &l_1129;
                int *l_1294 = &l_1278;
                int *l_1295 = &l_1259;
                int *l_1296 = &l_1134;
                int *l_1297 = &l_1206;
                int *l_1298 = &l_1267;
                int *l_1299 = &l_1267;
                int *l_1300 = (void*)0;
                int *l_1301 = (void*)0;
                int *l_1302 = &l_1243;
                int *l_1303 = (void*)0;
                int *l_1304 = (void*)0;
                int *l_1305 = (void*)0;
                int *l_1306 = (void*)0;
                int *l_1307 = &l_1274;
                int *l_1308 = &l_1129;
                int *l_1309 = &l_1219;
                int *l_1310 = &g_648;
                int *l_1311 = &l_1201;
                int *l_1313 = &l_1259;
                int *l_1314 = (void*)0;
                int *l_1315 = &l_1216;
                int *l_1316 = &l_1243;
                int *l_1319 = &l_1267;
                int *l_1320 = &l_1233;
                int *l_1321 = &l_1279;
                int *l_1322 = (void*)0;
                int *l_1324 = (void*)0;
                int *l_1326 = &l_1216;
                int *l_1327 = &l_1165;
                int *l_1328 = &l_1130;
                int *l_1329 = &l_1129;
                int *l_1330 = (void*)0;
                p_14 = p_14;
                l_968 = (g_124.f5 , p_14);
                g_1331--;
                (*l_1254) = ((&l_1252 != &l_1259) > 0x83409301L);
            }
            g_1426--;
            if (((((*l_1438) |= (func_28(((((((*p_14) >= l_1124) , (func_28((((safe_lshift_func_int16_t_s_s(g_932, (safe_rshift_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(4L, g_79)) <= ((*l_1435) = g_83)), l_1251)))) | l_1436) >= (*l_1098)), l_1312, l_1132, g_103) <= l_1285)) , (*p_14)) > l_1437) & l_1243), g_1331, (*l_1365), g_121) || 0xBD93292DL)) < g_73.f4) <= (*l_1396)))
            {
                char l_1443 = 0x30L;
                int l_1460 = 0x4DE41394L;
                int l_1464 = 0xC2ADD214L;
                int l_1499 = 0xB427F6B7L;
                int **l_1546 = &l_1386;
                if (((*l_1336) = ((safe_mod_func_uint8_t_u_u((g_931 | (g_63.f4 | ((safe_mod_func_int8_t_s_s(((l_1225 | g_265) == (l_1443 && g_12.f4)), (*l_1122))) == (g_962 , (*p_14))))), (*g_347))) & l_1219)))
                {
                    unsigned l_1450 = 18446744073709551606UL;
                    unsigned short l_1452 = 0xB21DL;
                    int l_1459 = (-1L);
                    int l_1462 = 0xDF460F26L;
                    int l_1463 = 0x6F6FC9FBL;
                    int l_1465 = 0x14A9E8C3L;
                    int l_1476 = 0x621BA2A0L;
                    int l_1487 = (-1L);
                    int l_1488 = 0xAE15E9F1L;
                    for (g_1325 = 12; (g_1325 > (-28)); g_1325--)
                    {
                        char *l_1456 = &g_1457;
                        int l_1458 = 0L;
                        int l_1461 = 0xBA1C50A1L;
                        int *l_1467 = &l_1185;
                        int *l_1468 = &l_1460;
                        int *l_1469 = (void*)0;
                        int *l_1471 = &l_1259;
                        int *l_1472 = &l_1465;
                        int *l_1473 = &l_1459;
                        int *l_1474 = &l_1312;
                        int *l_1475 = (void*)0;
                        int *l_1477 = &l_1288;
                        int *l_1478 = &l_1203;
                        int *l_1479 = &g_124.f5;
                        int *l_1480 = &l_1460;
                        int *l_1481 = &l_1219;
                        int *l_1482 = (void*)0;
                        int *l_1483 = &l_1312;
                        int *l_1484 = &l_1286;
                        int *l_1485 = &l_1464;
                        int *l_1486 = &l_1259;
                        int *l_1489 = &g_124.f5;
                        int *l_1490 = &l_1130;
                        int *l_1491 = (void*)0;
                        int *l_1492 = &l_1219;
                        int *l_1493 = &l_1461;
                        int *l_1494 = &l_1385;
                        int *l_1495 = &l_1323;
                        int *l_1496 = &l_1174;
                        int *l_1497 = &l_966;
                        int *l_1498 = &l_1461;
                        int *l_1500 = &l_1458;
                        int *l_1501 = &l_1385;
                        int *l_1502 = &l_1219;
                        int *l_1506 = &l_1462;
                        int *l_1507 = &l_966;
                        int *l_1508 = &l_1288;
                        int *l_1509 = &l_1134;
                        int *l_1510 = &l_1419;
                        int *l_1511 = &l_1317;
                        int *l_1512 = &g_73.f5;
                        int *l_1513 = &l_1132;
                        int *l_1514 = (void*)0;
                        int *l_1515 = &l_1488;
                        int *l_1516 = &l_1286;
                        int *l_1517 = (void*)0;
                        int *l_1518 = &l_1267;
                        int *l_1519 = (void*)0;
                        int *l_1520 = &l_1499;
                        int *l_1521 = &l_1462;
                        int *l_1522 = (void*)0;
                        int *l_1523 = (void*)0;
                        int *l_1524 = (void*)0;
                        int *l_1525 = &l_1174;
                        int *l_1526 = &l_1317;
                        int *l_1527 = &l_1499;
                        int *l_1528 = (void*)0;
                        int *l_1529 = &l_1134;
                        int *l_1530 = &l_1130;
                        int *l_1531 = &g_5;
                        int *l_1532 = &l_1132;
                        int *l_1533 = &l_1278;
                        int *l_1535 = &l_1219;
                        int *l_1536 = &l_1323;
                        int *l_1537 = (void*)0;
                        int *l_1538 = &l_1463;
                        int *l_1539 = &l_1132;
                        (*l_1123) = ((*l_1112) = (safe_add_func_uint16_t_u_u(func_28((g_121 = l_1251), ((*l_1456) ^= (g_63.f0 , (+((safe_sub_func_int8_t_s_s((func_28(l_1450, (g_594 == ((*g_347) = (g_124.f5 != l_1451))), ((((*l_1406) = ((*l_1407) ^= l_1452)) & (((safe_add_func_int16_t_s_s(g_98, ((***l_981) = (g_1325 , 0x3C53L)))) , l_1443) <= l_1455)) ^ 1L), l_1225) < 0x9A1CL), g_73.f5)) & 0x8D35L)))), g_135, l_1443), 0L)));
                        l_1503--;
                        --g_1540;
                        (*g_1093) = (*p_15);
                    }
                }
                else
                {
                    l_1464 &= (0xB9A31116L && (safe_lshift_func_int8_t_s_u(l_1140, 2)));
                }
                (*g_1093) = g_1545;
                (*l_1546) = ((*g_1093) , &l_1460);
            }
            else
            {
                int *l_1550 = &g_5;
                for (g_931 = (-30); (g_931 >= (-9)); g_931++)
                {
                    unsigned short l_1552 = 0x0DD8L;
                    if (l_1132)
                    {
                        int *l_1549 = &l_1259;
                        l_1550 = l_1549;
                        ++l_1552;
                        (*l_981) = (*l_981);
                    }
                    else
                    {
                        (*g_1093) = (*g_1093);
                        return g_78;
                    }
                    g_1558 = ((g_1555 , (*g_11)) , (((*l_1354) ^ ((*l_1435) = (((0x0DL == ((*g_347) , ((((*p_15) , &l_1252) != (void*)0) , func_28(l_1132, g_1545.f3, (*l_1550), l_1132)))) & g_331) != l_1556))) , g_1557));
                    (*l_1368) &= (func_28((g_1000++), ((*l_1550) , 0x6FL), (l_1251 , (-1L)), (((safe_mod_func_int32_t_s_s(((safe_sub_func_int8_t_s_s(l_1552, (~250UL))) == (*p_14)), func_28((*l_1337), (*l_1550), l_1285, l_1552))) >= g_962) , 65535UL)) < 0UL);
                }
            }
        }
        l_1132 &= (*p_14);
        for (l_1503 = 27; (l_1503 > 38); ++l_1503)
        {
            int *l_1567 = (void*)0;
            int *l_1568 = &l_1286;
            int l_1661 = 0x3DCA345CL;
            int l_1690 = 0L;
            int l_1737 = (-1L);
            int l_1757 = 0L;
            int l_1759 = 0x7B0CA680L;
            int ***l_1789 = &g_115;
            int l_1864 = 0xBF27F7DDL;
            if (((*l_1568) &= (+(*p_14))))
            {
                for (l_1252 = 0; (l_1252 >= 11); l_1252++)
                {
                    return l_1251;
                }
            }
            else
            {
                int *l_1575 = &l_1252;
                unsigned char l_1576 = 0x5FL;
                char *l_1577 = &g_98;
                short *l_1578 = (void*)0;
                short *l_1579 = &l_1437;
                int l_1622 = (-2L);
                int l_1635 = (-1L);
                int l_1746 = 8L;
                unsigned l_1773 = 4UL;
                int ***l_1790 = &g_115;
                int l_1960 = 3L;
                int l_1977 = (-10L);
                int l_1980 = 8L;
                int l_1998 = 0xA9A419D1L;
                int l_2036 = 0x38D409E0L;
                int *l_2071 = (void*)0;
                if (((func_26((*g_347)) >= (safe_mod_func_int32_t_s_s(l_1436, (*l_1568)))) | (g_1557.f5 , ((*l_1579) |= ((safe_lshift_func_uint16_t_u_u((((((*l_1568) & l_1279) == ((*l_1577) = (((*l_1575) = (0x82L == (g_124.f1 < g_103))) > l_1576))) & (-1L)) == 0x978F665EL), 0)) , l_1288)))))
                {
                    unsigned l_1580 = 4294967295UL;
                    return l_1580;
                }
                else
                {
                    int *l_1581 = (void*)0;
                    int *l_1582 = &l_1130;
                    int *l_1583 = &g_12.f5;
                    int *l_1584 = (void*)0;
                    int *l_1585 = &l_1251;
                    int *l_1586 = &l_1251;
                    int *l_1587 = &g_12.f5;
                    int *l_1588 = &l_1202;
                    int *l_1589 = &l_1202;
                    int *l_1590 = (void*)0;
                    int *l_1591 = &l_1259;
                    int *l_1592 = &l_1202;
                    int *l_1593 = (void*)0;
                    int *l_1594 = &l_1288;
                    int *l_1595 = &l_1278;
                    int *l_1596 = &g_1557.f5;
                    int l_1597 = (-1L);
                    int *l_1598 = &g_1557.f5;
                    int *l_1599 = &l_1129;
                    int *l_1600 = &l_1259;
                    int l_1601 = (-8L);
                    int *l_1602 = &l_1317;
                    int *l_1603 = &l_1165;
                    int *l_1604 = (void*)0;
                    int *l_1605 = &l_1185;
                    int *l_1606 = (void*)0;
                    int *l_1607 = &l_1597;
                    int *l_1608 = &l_1223;
                    int *l_1609 = &l_1202;
                    int *l_1610 = &l_1202;
                    int *l_1611 = &l_1129;
                    int *l_1612 = &l_1223;
                    int *l_1613 = &l_1259;
                    int *l_1614 = &g_1555.f5;
                    int *l_1615 = &g_1555.f5;
                    int *l_1616 = &g_1557.f5;
                    int *l_1617 = &g_135;
                    int *l_1618 = (void*)0;
                    int *l_1619 = &l_1601;
                    int *l_1620 = &l_1288;
                    int *l_1621 = &l_1279;
                    int *l_1623 = (void*)0;
                    int *l_1624 = &g_124.f5;
                    int *l_1625 = (void*)0;
                    int *l_1626 = &l_1251;
                    int *l_1627 = &l_1243;
                    int l_1628 = (-6L);
                    int *l_1629 = &l_1132;
                    int *l_1630 = &l_1206;
                    int *l_1631 = &g_124.f5;
                    int *l_1632 = &l_1601;
                    int *l_1633 = &l_1628;
                    int *l_1634 = (void*)0;
                    int *l_1636 = &l_966;
                    int *l_1637 = &l_1202;
                    int *l_1638 = &l_1278;
                    int *l_1639 = &g_917;
                    int *l_1640 = (void*)0;
                    int *l_1641 = &l_1225;
                    int *l_1642 = (void*)0;
                    int *l_1643 = &l_1267;
                    int *l_1644 = &l_1225;
                    int *l_1645 = (void*)0;
                    int *l_1646 = &l_1130;
                    int *l_1647 = &l_1312;
                    int l_1648 = (-1L);
                    int *l_1649 = &g_1325;
                    int *l_1650 = (void*)0;
                    int *l_1651 = &l_1278;
                    int *l_1652 = &l_1279;
                    int *l_1653 = &l_1243;
                    int *l_1654 = (void*)0;
                    int l_1655 = 0L;
                    int *l_1656 = (void*)0;
                    int *l_1657 = &l_1267;
                    int *l_1658 = &l_1252;
                    int *l_1659 = &l_1219;
                    int *l_1660 = &l_1648;
                    int *l_1662 = &l_1601;
                    int *l_1663 = (void*)0;
                    int *l_1664 = &l_1174;
                    int *l_1665 = &l_1279;
                    int *l_1666 = &g_12.f5;
                    int *l_1667 = &l_1286;
                    int *l_1668 = &l_1140;
                    int *l_1669 = &g_917;
                    int *l_1670 = &g_1555.f5;
                    int *l_1671 = (void*)0;
                    int l_1672 = 0xE1A1164FL;
                    int *l_1674 = &l_1285;
                    int *l_1675 = &l_1286;
                    int *l_1676 = &l_1278;
                    int *l_1677 = &g_73.f5;
                    int *l_1678 = &g_1555.f5;
                    int *l_1679 = (void*)0;
                    int *l_1680 = (void*)0;
                    int *l_1681 = &l_1259;
                    int *l_1682 = &g_124.f5;
                    int *l_1683 = &l_1635;
                    int *l_1684 = (void*)0;
                    int *l_1685 = &l_1288;
                    int *l_1686 = &l_1129;
                    int *l_1687 = &g_648;
                    int *l_1688 = &l_1202;
                    int *l_1689 = &g_917;
                    int *l_1691 = &l_1129;
                    int *l_1692 = &l_1251;
                    int *l_1693 = &l_1312;
                    int *l_1694 = &g_648;
                    int l_1695 = 0L;
                    int l_1696 = 0xB2338270L;
                    int *l_1697 = &l_1648;
                    int *l_1698 = &g_5;
                    int *l_1699 = &l_1129;
                    int *l_1700 = (void*)0;
                    int *l_1701 = (void*)0;
                    int *l_1702 = &g_1555.f5;
                    int *l_1703 = (void*)0;
                    int *l_1704 = (void*)0;
                    int *l_1705 = (void*)0;
                    int *l_1706 = &l_1635;
                    int *l_1707 = &l_1690;
                    int *l_1708 = &l_1312;
                    int *l_1709 = (void*)0;
                    int *l_1710 = (void*)0;
                    int *l_1711 = &g_5;
                    int *l_1712 = &g_73.f5;
                    int *l_1713 = &l_1317;
                    int *l_1714 = &l_1185;
                    int *l_1715 = &l_1690;
                    int *l_1716 = &l_1259;
                    int *l_1717 = &l_1622;
                    int *l_1718 = &l_1185;
                    int *l_1719 = &g_12.f5;
                    int *l_1720 = &l_1672;
                    int *l_1721 = &l_1628;
                    int *l_1722 = &l_1252;
                    int *l_1723 = &l_1185;
                    int *l_1724 = &l_1288;
                    int *l_1725 = &g_5;
                    int *l_1726 = &l_1259;
                    int *l_1727 = &l_1165;
                    int *l_1728 = (void*)0;
                    int *l_1729 = &l_1219;
                    int *l_1730 = &l_1251;
                    int *l_1731 = &g_73.f5;
                    int *l_1732 = &g_1557.f5;
                    int *l_1733 = &l_1174;
                    int *l_1734 = &l_1288;
                    int *l_1735 = &l_1132;
                    int *l_1736 = (void*)0;
                    int *l_1738 = &l_1202;
                    int *l_1739 = &g_1557.f5;
                    int *l_1740 = &l_1635;
                    int *l_1741 = &l_1129;
                    int l_1742 = 0x431C2A1EL;
                    int l_1743 = 2L;
                    int *l_1744 = (void*)0;
                    int *l_1745 = &l_1279;
                    int *l_1747 = &l_1742;
                    int *l_1748 = &l_1695;
                    int *l_1749 = &l_1174;
                    int *l_1750 = &g_1557.f5;
                    int *l_1751 = &l_966;
                    int *l_1752 = &l_1628;
                    int *l_1753 = &l_1267;
                    int *l_1754 = &l_1174;
                    int *l_1755 = &g_1558.f5;
                    int *l_1756 = &g_1557.f5;
                    int *l_1758 = &l_1225;
                    int *l_1760 = &l_1225;
                    int *l_1761 = (void*)0;
                    int *l_1762 = &l_1759;
                    int *l_1763 = &l_1130;
                    int *l_1764 = &g_135;
                    int *l_1765 = &g_73.f5;
                    int *l_1766 = &l_1742;
                    int *l_1767 = &l_1655;
                    int *l_1768 = &l_1259;
                    int *l_1769 = &l_1690;
                    int *l_1770 = &l_1225;
                    int *l_1771 = &l_1243;
                    int *l_1772 = &l_1635;
                    char **l_1778 = (void*)0;
                    char **l_1779 = &l_1577;
                    unsigned l_1781 = 18446744073709551615UL;
                    short **l_1782 = &l_1579;
                    --l_1773;
                    (*l_1614) = (((safe_lshift_func_int8_t_s_s((((((*l_1779) = &l_1673) == l_1780) != (l_1781 , (0UL & ((void*)0 != &l_1556)))) , ((*l_1577) = (((*l_1782) = &g_331) == ((*l_1749) , &g_1470)))), l_1140)) , (void*)0) == (void*)0);
                }
                if (((((*l_1780) = (safe_mod_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u((*l_1568))), (((l_1786 == (safe_lshift_func_int8_t_s_u(func_26((*g_347)), 6))) , 0x26L) && ((*l_1568) && ((*l_1577) = func_28(l_1436, ((*g_347) || ((*l_1575) |= 0x09L)), g_1000, l_1746))))))) & 0x07L) <= l_1267))
                {
                    int ****l_1791 = &l_1790;
                    (*l_1575) &= (l_1789 != ((*l_1791) = l_1790));
                }
                else
                {
                    int *l_1792 = (void*)0;
                    int *l_1793 = &l_1185;
                    int *l_1794 = &l_1285;
                    int *l_1795 = (void*)0;
                    int *l_1796 = &l_1225;
                    int *l_1797 = &g_1558.f5;
                    int l_1798 = 0xFAA84D56L;
                    int *l_1799 = &l_1132;
                    int l_1800 = 0xEFC95B56L;
                    int *l_1801 = &g_124.f5;
                    int *l_1802 = (void*)0;
                    int l_1803 = 1L;
                    int *l_1804 = &l_1661;
                    int *l_1805 = &l_1132;
                    int *l_1806 = (void*)0;
                    int *l_1807 = (void*)0;
                    int *l_1808 = &l_1206;
                    int *l_1809 = (void*)0;
                    int *l_1810 = &l_1746;
                    int *l_1811 = (void*)0;
                    int l_1812 = 0xD7BE8CFAL;
                    int *l_1813 = &l_1757;
                    int *l_1814 = &l_1174;
                    int *l_1815 = (void*)0;
                    int *l_1816 = &l_1746;
                    int *l_1817 = (void*)0;
                    int *l_1818 = &l_1251;
                    int *l_1819 = (void*)0;
                    int *l_1820 = &l_1312;
                    int *l_1821 = &l_1286;
                    int *l_1822 = &l_966;
                    int *l_1823 = (void*)0;
                    int *l_1824 = (void*)0;
                    int *l_1825 = &l_1286;
                    int *l_1826 = &g_73.f5;
                    int *l_1827 = &l_1288;
                    int *l_1828 = &l_1219;
                    int *l_1829 = (void*)0;
                    int *l_1830 = &l_1317;
                    int *l_1831 = &l_1800;
                    int *l_1832 = &l_1223;
                    int *l_1833 = &l_1140;
                    int *l_1834 = &l_966;
                    int *l_1835 = &l_1202;
                    int *l_1836 = &g_12.f5;
                    int *l_1837 = &l_1622;
                    int *l_1838 = (void*)0;
                    int *l_1839 = &g_135;
                    int *l_1840 = &l_1251;
                    int *l_1841 = &l_1690;
                    int *l_1842 = (void*)0;
                    int *l_1843 = &l_1259;
                    int *l_1844 = &l_1206;
                    int *l_1845 = &l_1165;
                    int *l_1846 = &l_1243;
                    int *l_1847 = &g_135;
                    int *l_1848 = &l_1803;
                    int *l_1849 = &g_1555.f5;
                    int *l_1850 = &l_1174;
                    int *l_1851 = &g_1555.f5;
                    int *l_1852 = &g_1557.f5;
                    int l_1853 = 0x7C1DC75EL;
                    int *l_1854 = (void*)0;
                    int *l_1855 = &l_1317;
                    int *l_1856 = &l_1800;
                    int *l_1857 = &l_1853;
                    int *l_1858 = &l_1219;
                    int *l_1859 = &l_1278;
                    int *l_1860 = &l_1259;
                    int *l_1861 = (void*)0;
                    int *l_1862 = &l_1800;
                    int *l_1863 = (void*)0;
                    int *l_1865 = &l_1798;
                    int *l_1866 = &l_1185;
                    int *l_1867 = &l_1737;
                    int *l_1868 = &l_1853;
                    int *l_1869 = &l_1286;
                    int *l_1870 = (void*)0;
                    int *l_1871 = &l_1165;
                    int *l_1872 = &l_966;
                    int *l_1873 = &g_648;
                    int *l_1874 = &g_1555.f5;
                    int *l_1875 = &l_1202;
                    int *l_1876 = &g_5;
                    int *l_1877 = &l_1185;
                    int *l_1878 = &l_1317;
                    int *l_1879 = &l_1129;
                    int *l_1880 = &l_1174;
                    int l_1881 = 0x54FB6E00L;
                    int *l_1882 = &l_1130;
                    int *l_1883 = &l_1259;
                    int *l_1884 = &l_966;
                    int *l_1885 = &g_1325;
                    int *l_1886 = &l_966;
                    int *l_1887 = &l_1174;
                    int *l_1888 = &l_1757;
                    int *l_1889 = &l_1129;
                    int l_1890 = 0xB4112C18L;
                    int *l_1891 = &l_1267;
                    int *l_1892 = &l_1312;
                    int *l_1893 = &l_1206;
                    int *l_1894 = &g_648;
                    int *l_1895 = &l_1661;
                    int *l_1896 = &g_1325;
                    int *l_1897 = &l_1800;
                    int *l_1898 = &l_1890;
                    int *l_1899 = (void*)0;
                    int *l_1900 = &l_1278;
                    int *l_1901 = (void*)0;
                    int *l_1902 = (void*)0;
                    int *l_1903 = (void*)0;
                    int *l_1904 = (void*)0;
                    int *l_1905 = (void*)0;
                    int *l_1906 = &l_1130;
                    int *l_1907 = &l_1881;
                    int *l_1908 = &l_1317;
                    int *l_1909 = (void*)0;
                    int *l_1910 = &l_1225;
                    int *l_1911 = &l_1165;
                    int *l_1912 = (void*)0;
                    int *l_1913 = &l_1206;
                    int *l_1914 = &g_1558.f5;
                    int *l_1915 = &l_1225;
                    int *l_1916 = &l_1252;
                    int *l_1917 = &l_1223;
                    int *l_1918 = (void*)0;
                    int *l_1919 = &g_1557.f5;
                    int *l_1920 = &l_1129;
                    int *l_1921 = &l_1140;
                    int *l_1922 = &l_1129;
                    int *l_1923 = (void*)0;
                    int *l_1924 = &l_1278;
                    int *l_1925 = &l_1279;
                    int *l_1926 = &l_1278;
                    int *l_1927 = &l_1267;
                    int *l_1928 = &l_1185;
                    int *l_1929 = (void*)0;
                    int *l_1930 = &l_1800;
                    int *l_1931 = &g_1555.f5;
                    int *l_1932 = &l_1812;
                    int *l_1933 = &g_648;
                    int *l_1934 = &l_1798;
                    int *l_1935 = &g_5;
                    int *l_1936 = (void*)0;
                    int *l_1937 = (void*)0;
                    int *l_1938 = &g_1558.f5;
                    int *l_1939 = &l_1312;
                    int *l_1940 = &l_1661;
                    int *l_1941 = (void*)0;
                    int *l_1942 = (void*)0;
                    int *l_1943 = &l_1185;
                    int *l_1944 = &l_1312;
                    int *l_1945 = &l_1243;
                    int *l_1946 = (void*)0;
                    int *l_1947 = &l_1890;
                    int *l_1948 = &g_917;
                    int *l_1949 = &l_1890;
                    int *l_1950 = (void*)0;
                    int *l_1951 = &l_1252;
                    int *l_1952 = &l_1737;
                    int *l_1953 = &g_648;
                    int *l_1954 = &l_1890;
                    int *l_1955 = &l_1746;
                    int *l_1956 = &g_1325;
                    int *l_1957 = &l_1259;
                    int *l_1958 = &l_1635;
                    int *l_1959 = &l_1803;
                    int *l_1961 = &l_1129;
                    int *l_1962 = &g_1555.f5;
                    int *l_1963 = &g_5;
                    int *l_1964 = &l_1798;
                    int *l_1965 = &g_124.f5;
                    int *l_1966 = &l_1202;
                    int *l_1967 = &l_1140;
                    int *l_1968 = &g_12.f5;
                    int *l_1969 = &g_1555.f5;
                    int *l_1970 = &l_1243;
                    int *l_1971 = &g_1557.f5;
                    int *l_1972 = &l_1798;
                    int *l_1973 = &l_1312;
                    int *l_1974 = (void*)0;
                    int *l_1975 = (void*)0;
                    int *l_1976 = &l_1129;
                    int *l_1978 = &l_1278;
                    int *l_1979 = &l_1812;
                    int *l_1981 = &g_648;
                    int *l_1982 = (void*)0;
                    int *l_1983 = &l_966;
                    int *l_1984 = &l_1812;
                    int *l_1985 = &l_1977;
                    int *l_1986 = (void*)0;
                    int *l_1987 = &l_1279;
                    int *l_1988 = &l_1798;
                    int *l_1989 = &l_1202;
                    int *l_1990 = &l_1737;
                    int *l_1991 = &l_1185;
                    int *l_1992 = &l_1757;
                    int *l_1993 = &l_1812;
                    int *l_1994 = (void*)0;
                    int *l_1995 = (void*)0;
                    int *l_1996 = &g_5;
                    int *l_1997 = &g_73.f5;
                    int *l_1999 = &g_12.f5;
                    int *l_2000 = &l_1165;
                    int l_2001 = 5L;
                    int *l_2002 = (void*)0;
                    int *l_2003 = (void*)0;
                    int *l_2004 = &l_1165;
                    int *l_2005 = &l_1223;
                    int *l_2006 = &g_1325;
                    int *l_2007 = &l_1798;
                    int *l_2008 = &l_1267;
                    int *l_2009 = &g_917;
                    int *l_2010 = &l_1853;
                    int *l_2011 = &l_1661;
                    int *l_2012 = (void*)0;
                    int *l_2013 = (void*)0;
                    int *l_2014 = &l_1259;
                    int *l_2015 = (void*)0;
                    int *l_2016 = &l_1252;
                    int *l_2017 = &l_1980;
                    int *l_2018 = (void*)0;
                    int *l_2019 = &l_1252;
                    int *l_2020 = &l_1977;
                    int *l_2021 = (void*)0;
                    int *l_2022 = &l_1185;
                    int *l_2023 = (void*)0;
                    int *l_2024 = &l_1690;
                    int *l_2025 = &l_1223;
                    int *l_2026 = &g_124.f5;
                    int *l_2027 = (void*)0;
                    int *l_2028 = &g_5;
                    int *l_2029 = &l_1288;
                    int *l_2030 = (void*)0;
                    int *l_2031 = &l_1746;
                    int *l_2032 = (void*)0;
                    int *l_2033 = &l_1288;
                    int *l_2034 = (void*)0;
                    int *l_2035 = (void*)0;
                    int *l_2037 = &l_1252;
                    int *l_2038 = &l_1140;
                    char **l_2043 = &l_1780;
                    char ***l_2042 = &l_2043;
                    ++g_2039;
                    (*l_2042) = &l_1780;
                    (*l_1973) ^= (safe_mod_func_uint8_t_u_u(((g_1555.f5 > (safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((*p_14), func_28(func_28((safe_mod_func_int32_t_s_s(7L, ((((*l_1964) = ((*l_1930) && ((0xEDACL && (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((safe_unary_minus_func_int8_t_s((((safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(g_78, ((*g_1093) , ((func_28((g_83 , 0xCF5BA156L), (*l_1575), g_1555.f0, g_83) && (*g_347)) | (*l_1891))))), 7)) < g_917) & (*g_347)))), g_79)), (*g_347))), (*p_14)))) | l_1285))) == 8L) || l_1140))), (*l_1860), g_1331, (*l_1568)), l_1219, g_83, (*l_1568)))), 0xFA53L))) , (*g_347)), 0x39L));
                }
                g_917 |= ((safe_mod_func_uint32_t_u_u((((*l_965)--) ^ ((g_1558.f2 , ((((*l_1579) = (((safe_lshift_func_uint16_t_u_u((func_28((((*l_1579) = (g_1325 , ((*l_1575) , ((*l_1575) || (0xC681F05BL > ((*p_14) = 0x265FB5D6L)))))) && (-6L)), (*l_1568), (*l_1575), l_2069) || 0x2D89L), 3)) < g_1557.f1) || l_2070)) > l_1124) & (*g_347))) || (*g_347))), 0xDDD908DCL)) || 0xECL);
            }
        }
        for (l_1243 = 0; (l_1243 < 9); l_1243++)
        {
            return l_1279;
        }
    }
    return l_1786;
}







static int * func_16(struct S0 * p_17)
{
    unsigned l_159 = 0xCEEE54ADL;
    unsigned short **l_160 = (void*)0;
    int *l_184 = &g_124.f5;
    unsigned short l_196 = 0UL;
    int l_246 = 0x4D098204L;
    int l_252 = 0x9340F367L;
    int l_266 = 1L;
    int l_275 = 4L;
    char l_276 = 0x1AL;
    int l_284 = (-10L);
    unsigned short l_615 = 1UL;
    unsigned char l_660 = 251UL;
    unsigned short l_713 = 0UL;
    if (l_159)
    {
        unsigned short l_162 = 65529UL;
        int ***l_181 = &g_115;
        int l_272 = 0x18CD6108L;
        int l_283 = 0xA785BCADL;
        int l_285 = 0x2A38F906L;
        unsigned char *l_350 = &g_83;
        int l_423 = 0x20BF1236L;
        int l_424 = 0x96DF6385L;
        int l_425 = (-4L);
        int l_426 = 6L;
        int l_439 = 9L;
        int l_460 = 0x9C2A8EAFL;
        int l_465 = (-8L);
        int l_491 = 0x2388B404L;
        int l_499 = 1L;
        int l_502 = 0xBA51722BL;
        unsigned l_632 = 0xB3C5F61AL;
        if (l_159)
        {
            unsigned short **l_161 = (void*)0;
            int l_164 = 0xFD47EA3AL;
            short l_174 = (-1L);
            int *l_185 = &g_5;
            l_161 = l_160;
            if (l_159)
            {
                unsigned l_166 = 0xC7F52387L;
                struct S0 *l_178 = &g_124;
                int *l_183 = &g_73.f5;
                if (l_162)
                {
                    int l_163 = 0xBAC48D8FL;
                    int *l_165 = &g_5;
                    (*l_165) = (l_163 < (l_159 | (l_159 | l_164)));
                    l_166--;
                    for (g_80 = 0; (g_80 == (-2)); g_80 = safe_sub_func_uint32_t_u_u(g_80, 1))
                    {
                        unsigned short *l_172 = (void*)0;
                        unsigned short **l_171 = &l_172;
                        unsigned short ***l_173 = &l_160;
                        (*l_173) = l_171;
                    }
                }
                else
                {
                    int *l_182 = &l_164;
                    if (l_174)
                    {
                        int *l_177 = &l_164;
                        (*l_177) |= (safe_lshift_func_uint16_t_u_s((func_26(g_12.f2) | l_162), (0x41L != g_135)));
                    }
                    else
                    {
                        int ***l_179 = &g_115;
                        int ****l_180 = &g_114;
                        (*l_178) = func_20(l_178, (((*l_180) = l_179) == (l_181 = &g_115)));
                        return &g_5;
                    }
                    return l_183;
                }
            }
            else
            {
                int l_189 = 0xC0B73496L;
                int *l_211 = &g_124.f5;
                l_185 = l_184;
                for (g_124.f4 = (-11); (g_124.f4 <= 36); g_124.f4++)
                {
                    unsigned l_188 = 1UL;
                    unsigned *l_197 = &g_121;
                    unsigned char *l_209 = &g_78;
                    unsigned char *l_210 = &g_83;
                    struct S0 *l_212 = (void*)0;
                    struct S0 *l_213 = &g_73;
                    (*l_184) = 0x193F4887L;
                    (*l_213) = func_20(((g_98 = ((*l_185) , 0L)) , func_23(((l_188 <= l_189) < ((safe_lshift_func_uint8_t_u_u(((*l_209) = (safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(func_26(((*l_210) = ((*l_209) = ((l_196 != (--(*l_197))) , (g_200 , (safe_add_func_int16_t_s_s(0L, (safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s((l_188 > 0xB35A4D2AL), l_188)), l_162)), l_188))))))))), g_12.f1)), 6))), 3)) , 0xD2L)), l_211)), l_189);
                }
            }
        }
        else
        {
            int *l_214 = &g_135;
            int *l_215 = &g_135;
            int *l_216 = (void*)0;
            int *l_217 = (void*)0;
            int *l_218 = (void*)0;
            int *l_219 = &g_12.f5;
            int *l_220 = &g_12.f5;
            int *l_221 = &g_124.f5;
            int *l_222 = &g_135;
            int *l_223 = &g_5;
            int *l_224 = (void*)0;
            int *l_225 = &g_5;
            int *l_226 = &g_124.f5;
            int *l_227 = &g_135;
            int *l_228 = &g_73.f5;
            int *l_229 = &g_73.f5;
            int l_230 = 0x2D1FD33CL;
            int *l_231 = &l_230;
            int *l_232 = &g_124.f5;
            int *l_233 = &g_73.f5;
            int l_234 = 0x59CB87FCL;
            int *l_235 = &g_135;
            int *l_236 = &g_12.f5;
            int *l_237 = &g_5;
            int *l_238 = &g_12.f5;
            int *l_239 = &l_230;
            int l_240 = 0x68F9EE32L;
            int *l_241 = &g_135;
            int *l_242 = &l_234;
            int *l_243 = &g_124.f5;
            int *l_244 = &g_73.f5;
            int *l_245 = &g_12.f5;
            int *l_247 = &l_234;
            int *l_248 = &l_246;
            int *l_249 = &g_135;
            int *l_250 = &g_12.f5;
            int *l_251 = &l_246;
            int *l_253 = &g_124.f5;
            int *l_254 = &l_252;
            int *l_255 = &g_124.f5;
            int *l_256 = &g_5;
            int *l_257 = (void*)0;
            int *l_258 = &l_252;
            int *l_259 = &g_73.f5;
            int *l_260 = &g_124.f5;
            int *l_261 = &g_135;
            int *l_262 = &l_230;
            int *l_263 = &l_230;
            int *l_264 = &l_246;
            int *l_267 = &l_246;
            int *l_268 = &l_234;
            int *l_269 = &l_240;
            int *l_270 = &l_240;
            int *l_271 = &g_135;
            int *l_273 = &l_272;
            int l_274 = 0x494586F0L;
            int *l_277 = &g_5;
            int *l_278 = (void*)0;
            int *l_279 = &g_12.f5;
            unsigned l_314 = 0UL;
            unsigned short ***l_336 = &l_160;
            struct S0 *l_339 = &g_73;
            int *l_345 = &g_135;
            g_280--;
            if ((*l_184))
            {
                int *l_286 = &l_285;
                int *l_287 = (void*)0;
                int *l_288 = (void*)0;
                int *l_289 = &l_252;
                int *l_290 = (void*)0;
                int l_291 = 0xDA3CCD9CL;
                int *l_292 = &l_285;
                int *l_293 = &l_252;
                int *l_294 = &l_283;
                int *l_295 = (void*)0;
                int *l_296 = &l_291;
                int *l_297 = &l_266;
                int *l_298 = &l_252;
                int *l_299 = &l_240;
                int *l_300 = &g_5;
                int *l_301 = &l_284;
                int *l_302 = &l_284;
                int *l_303 = &l_285;
                int *l_304 = &l_283;
                int *l_305 = &g_124.f5;
                int *l_306 = &g_124.f5;
                int *l_307 = &l_284;
                int *l_308 = &l_274;
                int *l_309 = &g_12.f5;
                int *l_310 = &l_285;
                int *l_311 = (void*)0;
                int *l_312 = &l_272;
                int *l_313 = &g_73.f5;
                unsigned short l_417 = 0x76D7L;
                l_314--;
                for (g_98 = 2; (g_98 < 7); g_98++)
                {
                    short *l_330 = &g_331;
                    unsigned short *l_334 = (void*)0;
                    unsigned short *l_335 = &g_103;
                    int l_337 = 0L;
                    if ((safe_unary_minus_func_int16_t_s(((((((*g_11) , (safe_sub_func_int8_t_s_s((((safe_lshift_func_int16_t_s_u((*l_258), (safe_add_func_int16_t_s_s((~(g_45.f5 && (*l_248))), ((*l_299) = ((((((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((!((*l_263) != g_98)) < ((*l_330) = (-1L))), ((*l_335) = (safe_rshift_func_int8_t_s_u((-3L), 7))))), (*l_299))) & 1L) , (*l_312)) , l_336) == &g_132) & (*l_184))))))) > g_124.f5) , 6L), 254UL))) == (*l_248)) == 0x24EEF291L) ^ l_337) & 0xBE43B6D3L))))
                    {
                        if (l_337)
                            break;
                    }
                    else
                    {
                        struct S0 *l_338 = &g_73;
                        struct S0 **l_340 = &l_338;
                        (*l_338) = (*g_11);
                        (*l_242) ^= 0xA5AFFB38L;
                        (*l_340) = l_339;
                    }
                }
                if ((*l_264))
                {
                    unsigned l_343 = 0x28196840L;
                    unsigned *l_351 = &g_121;
                    int l_354 = (-9L);
                    int l_386 = 0xE93917A0L;
                    int l_409 = 0x1DE6FA05L;
                    if (((safe_add_func_int16_t_s_s(l_343, (-8L))) != ((*l_306) > (*l_184))))
                    {
                        int **l_344 = &l_297;
                        (*l_344) = &l_275;
                        return l_345;
                    }
                    else
                    {
                        int l_346 = 0x6481C35CL;
                        unsigned char *l_348 = &g_83;
                        int **l_349 = &l_312;
                        (*l_251) ^= ((*l_259) = (0x55L >= (+(l_346 > ((*l_348) |= (((g_347 = &g_78) == (void*)0) & g_45.f1))))));
                        (*l_349) = (void*)0;
                        (*l_313) ^= (65535UL | l_343);
                        (*l_349) = &l_291;
                    }
                    if (((*l_259) > ((*l_351) &= ((void*)0 != l_350))))
                    {
                        int l_352 = (-6L);
                        (*l_228) &= l_352;
                        l_239 = l_351;
                    }
                    else
                    {
                        struct S0 **l_353 = &l_339;
                        int *l_355 = &l_246;
                        int *l_356 = &l_354;
                        int *l_357 = &l_275;
                        int *l_358 = &l_272;
                        int *l_359 = &g_124.f5;
                        int *l_360 = &l_240;
                        int *l_361 = &l_240;
                        int *l_362 = &l_272;
                        int *l_363 = &l_274;
                        int *l_364 = &l_240;
                        int *l_365 = (void*)0;
                        int *l_366 = &g_135;
                        int *l_367 = &g_124.f5;
                        int *l_368 = &g_5;
                        int *l_369 = &l_274;
                        int *l_370 = &l_274;
                        int *l_371 = (void*)0;
                        int *l_372 = &g_73.f5;
                        int *l_373 = (void*)0;
                        int *l_374 = &l_274;
                        int *l_375 = &l_354;
                        int *l_376 = &g_124.f5;
                        int *l_377 = &g_135;
                        int *l_378 = &g_124.f5;
                        int *l_379 = (void*)0;
                        int *l_380 = &l_283;
                        int *l_381 = (void*)0;
                        int *l_382 = &l_354;
                        int *l_383 = &l_291;
                        int *l_384 = &l_272;
                        int *l_385 = &l_240;
                        int *l_387 = &l_354;
                        int *l_388 = (void*)0;
                        int *l_389 = &g_73.f5;
                        int *l_390 = &g_124.f5;
                        int *l_391 = &l_386;
                        int *l_392 = (void*)0;
                        int *l_393 = (void*)0;
                        int *l_394 = &g_5;
                        int *l_395 = &l_246;
                        int *l_396 = &l_291;
                        int *l_397 = &l_246;
                        int *l_398 = &l_275;
                        int *l_399 = &l_284;
                        int *l_400 = &g_73.f5;
                        int *l_401 = &l_230;
                        int *l_402 = &l_285;
                        int *l_403 = &l_291;
                        int *l_404 = (void*)0;
                        int *l_405 = &g_12.f5;
                        int *l_406 = &g_124.f5;
                        int *l_407 = &l_246;
                        int *l_408 = (void*)0;
                        int *l_410 = (void*)0;
                        int *l_411 = &l_284;
                        int *l_412 = &l_275;
                        int *l_413 = &l_409;
                        (*l_353) = l_339;
                        --g_414;
                        (*l_339) = (*g_11);
                    }
                }
                else
                {
                    --l_417;
                }
            }
            else
            {
                int l_420 = 0x9D3524D7L;
                int l_421 = 0L;
                int l_422 = 0xED17E8DBL;
                int *l_427 = &l_266;
                int *l_428 = &g_12.f5;
                int *l_429 = &l_252;
                int *l_430 = &l_422;
                int *l_431 = &l_283;
                int *l_432 = &l_230;
                int *l_433 = &l_252;
                int *l_434 = &l_240;
                int *l_435 = (void*)0;
                int *l_436 = &l_252;
                int *l_437 = (void*)0;
                int l_438 = 0xDA4B8048L;
                int *l_440 = &l_423;
                int *l_441 = &l_439;
                int *l_442 = &g_73.f5;
                int *l_443 = &l_421;
                int *l_444 = &l_266;
                int *l_445 = &l_274;
                int *l_446 = (void*)0;
                int *l_447 = &g_12.f5;
                int *l_448 = (void*)0;
                int *l_449 = (void*)0;
                int *l_450 = (void*)0;
                int *l_451 = &l_283;
                int *l_452 = &g_135;
                int *l_453 = &l_246;
                int *l_454 = (void*)0;
                int *l_455 = (void*)0;
                int *l_456 = &g_124.f5;
                int *l_457 = &l_438;
                int *l_458 = &l_240;
                int *l_459 = &g_73.f5;
                int *l_461 = &l_234;
                int *l_462 = &l_234;
                int *l_463 = &l_234;
                int *l_464 = &l_423;
                int *l_466 = &l_272;
                int *l_467 = &l_422;
                int *l_468 = &l_275;
                int *l_469 = &l_285;
                int *l_470 = &l_423;
                int *l_471 = &l_439;
                int *l_472 = &l_272;
                int *l_473 = &l_234;
                int *l_474 = &g_135;
                int *l_475 = (void*)0;
                int *l_476 = &l_274;
                int *l_477 = (void*)0;
                int *l_478 = &g_135;
                int *l_479 = (void*)0;
                int *l_480 = &l_425;
                int *l_481 = &l_460;
                int *l_482 = &l_252;
                int *l_483 = &l_285;
                int *l_484 = &l_423;
                int *l_485 = &l_246;
                int *l_486 = (void*)0;
                int *l_487 = &l_252;
                int *l_488 = (void*)0;
                int *l_489 = &l_284;
                int *l_490 = &l_422;
                int *l_492 = (void*)0;
                int *l_493 = &l_275;
                int *l_494 = (void*)0;
                int *l_495 = (void*)0;
                int *l_496 = &l_240;
                int *l_497 = &l_425;
                int *l_498 = &l_283;
                int *l_500 = &l_460;
                int *l_501 = &l_266;
                int *l_503 = &l_272;
                int *l_504 = &g_124.f5;
                int *l_505 = &l_465;
                int *l_506 = &l_491;
                int *l_507 = &l_230;
                int *l_508 = (void*)0;
                int l_509 = 0x1E256835L;
                int *l_510 = &l_420;
                int *l_511 = (void*)0;
                g_512--;
            }
            (*l_235) = (*l_268);
        }
        (*l_184) ^= ((func_26((*g_347)) | g_121) , 0xF4AFBBC1L);
        for (l_423 = (-17); (l_423 <= (-26)); l_423--)
        {
            int *l_517 = &l_283;
            int *l_518 = &l_275;
            int *l_519 = &l_465;
            int *l_520 = &g_5;
            int *l_521 = &g_135;
            int *l_522 = (void*)0;
            int *l_523 = &g_5;
            int *l_524 = &l_283;
            int *l_525 = &g_12.f5;
            int *l_526 = &l_285;
            int *l_527 = (void*)0;
            int *l_528 = &l_425;
            int *l_529 = &l_252;
            int *l_530 = &l_266;
            int *l_531 = &l_425;
            int *l_532 = &l_439;
            int *l_533 = &g_124.f5;
            int *l_534 = &g_124.f5;
            int *l_535 = (void*)0;
            int *l_536 = &l_285;
            int *l_537 = (void*)0;
            int *l_538 = &l_425;
            int *l_539 = &l_266;
            int *l_540 = &g_135;
            int *l_541 = &g_73.f5;
            int *l_542 = &l_252;
            int *l_543 = &l_465;
            int *l_544 = &l_285;
            int *l_545 = (void*)0;
            int l_546 = 0xD6BD1B4FL;
            int *l_547 = &l_460;
            int *l_548 = (void*)0;
            int *l_549 = (void*)0;
            int *l_550 = &l_439;
            int *l_551 = &l_252;
            int *l_552 = &l_252;
            int *l_553 = &l_252;
            int *l_554 = &l_546;
            int *l_555 = (void*)0;
            int *l_556 = &l_283;
            int l_557 = 1L;
            int *l_558 = &l_246;
            int *l_559 = &l_272;
            int *l_560 = (void*)0;
            int l_561 = 1L;
            int *l_562 = &l_285;
            int *l_563 = &l_557;
            int *l_564 = &l_275;
            int *l_565 = &l_275;
            int *l_566 = &l_252;
            int *l_567 = (void*)0;
            int *l_568 = (void*)0;
            int l_569 = 0x37122CDFL;
            int *l_570 = &l_425;
            int *l_571 = &l_426;
            int *l_572 = &l_252;
            int *l_573 = &l_284;
            int *l_574 = &l_275;
            int *l_575 = &l_266;
            int *l_576 = (void*)0;
            int *l_577 = &g_5;
            int *l_578 = &g_73.f5;
            int *l_579 = &l_439;
            int *l_580 = &g_5;
            int *l_581 = &l_557;
            int *l_582 = &g_124.f5;
            int *l_583 = &g_73.f5;
            int *l_584 = &l_569;
            int *l_585 = &g_5;
            int *l_586 = &l_284;
            int *l_587 = (void*)0;
            int l_588 = (-1L);
            int *l_589 = &l_252;
            int *l_590 = &g_5;
            int l_591 = 0x6DE4CB3BL;
            int *l_592 = &l_499;
            int l_593 = 3L;
            int *l_599 = &l_439;
            g_594--;
            for (l_276 = (-4); (l_276 == 29); l_276 = safe_add_func_uint16_t_u_u(l_276, 7))
            {
                l_184 = l_599;
            }
            for (l_593 = 0; (l_593 <= (-18)); l_593--)
            {
                (*l_578) |= (*l_184);
            }
            (*l_575) = (*l_184);
        }
        for (g_135 = (-24); (g_135 > (-13)); g_135++)
        {
            char l_641 = 0x56L;
            char *l_642 = &l_276;
            int l_647 = (-1L);
            unsigned short *l_658 = &l_196;
            unsigned l_704 = 0xB5254C33L;
            int l_791 = (-1L);
            int *l_821 = (void*)0;
            int *l_822 = &g_124.f5;
            int *l_823 = &l_252;
            int *l_824 = &l_460;
            int *l_825 = &l_499;
            int *l_826 = &l_499;
            int *l_827 = (void*)0;
            int *l_828 = &l_252;
            int *l_829 = (void*)0;
            int l_830 = (-7L);
            int *l_831 = &l_423;
            int *l_832 = &l_272;
            int *l_833 = &l_426;
            int *l_834 = &g_12.f5;
            int *l_835 = &l_460;
            int *l_836 = &l_465;
            int *l_837 = (void*)0;
            int *l_838 = &l_499;
            int *l_839 = (void*)0;
            int *l_840 = &l_465;
            int *l_841 = &l_439;
            int *l_842 = &l_425;
            int *l_843 = (void*)0;
            int *l_844 = (void*)0;
            int *l_845 = (void*)0;
            int *l_846 = &l_460;
            int *l_847 = &g_648;
            int *l_848 = (void*)0;
            int *l_849 = &l_499;
            int *l_850 = (void*)0;
            int *l_851 = &g_12.f5;
            int l_852 = 0x8EFDE849L;
            int *l_853 = &l_424;
            int *l_854 = (void*)0;
            int *l_855 = &l_285;
            int *l_856 = &l_252;
            int *l_857 = &l_272;
            int *l_858 = &g_124.f5;
            int *l_859 = &l_499;
            int *l_860 = &l_499;
            int *l_861 = (void*)0;
            int *l_862 = &l_460;
            int *l_863 = (void*)0;
            int *l_864 = &l_252;
            int *l_865 = (void*)0;
            int *l_866 = &g_73.f5;
            int l_867 = 2L;
            int *l_868 = &g_648;
            int *l_869 = &l_499;
            int *l_870 = &l_647;
            int *l_871 = &l_465;
            int *l_872 = &l_852;
            int *l_873 = &l_647;
            int *l_874 = &l_425;
            int *l_875 = &l_246;
            int *l_876 = &g_124.f5;
            int *l_877 = &l_252;
            int *l_878 = &l_499;
            int *l_879 = &g_5;
            int *l_880 = (void*)0;
            int *l_881 = &l_491;
            int *l_882 = &l_791;
            int *l_883 = (void*)0;
            int *l_884 = &l_647;
            int l_885 = 0xCC473912L;
            int *l_886 = &l_424;
            int *l_887 = &l_852;
            int *l_888 = (void*)0;
            int l_889 = 0xBD102BE6L;
            int *l_890 = (void*)0;
            int *l_891 = (void*)0;
            int *l_892 = &g_73.f5;
            int *l_893 = &l_885;
            int *l_894 = &l_246;
            int *l_895 = &l_491;
            int *l_896 = &g_5;
            int *l_897 = &l_283;
            int *l_898 = &l_246;
            int *l_899 = &l_867;
            int *l_900 = &g_648;
            int *l_901 = &l_423;
            int *l_902 = &l_424;
            int *l_903 = &l_830;
            int *l_904 = &l_465;
            int *l_905 = &l_885;
            int *l_906 = &l_499;
            int *l_907 = (void*)0;
            int *l_908 = (void*)0;
            int *l_909 = (void*)0;
            int *l_910 = &l_439;
            int *l_911 = &l_502;
            int *l_912 = &l_491;
            int *l_913 = &l_275;
            int *l_914 = &l_424;
            int *l_915 = &l_885;
            int *l_916 = &l_424;
            int *l_918 = &l_246;
            int *l_919 = &l_465;
            int *l_920 = &g_73.f5;
            int *l_921 = &l_791;
            int l_922 = (-1L);
            int *l_923 = &l_830;
            int *l_924 = &g_648;
            int *l_925 = (void*)0;
            int *l_926 = &l_424;
            int *l_927 = &l_499;
            int *l_928 = &g_12.f5;
            int *l_929 = &l_647;
        }
    }
    else
    {
        int *l_936 = (void*)0;
        int *l_937 = &g_135;
        int *l_938 = &g_135;
        int *l_939 = (void*)0;
        int *l_940 = &l_246;
        int *l_941 = &l_266;
        int *l_942 = &g_135;
        int *l_943 = &g_648;
        int *l_944 = &l_252;
        int *l_945 = &g_124.f5;
        int l_946 = 0L;
        int *l_947 = (void*)0;
        int *l_948 = &l_246;
        int *l_949 = &g_135;
        int *l_950 = &l_246;
        int *l_951 = &g_12.f5;
        int l_952 = 0xB3C64775L;
        int *l_953 = &g_124.f5;
        int *l_954 = &g_135;
        int l_955 = 0xD8A4CF80L;
        int *l_956 = &g_12.f5;
        int *l_957 = &l_952;
        int *l_958 = &l_252;
        int *l_959 = &l_246;
        int *l_960 = &l_246;
        int *l_961 = (void*)0;
        (*l_937) ^= (*l_184);
        ++g_962;
    }
    return &g_648;
}







static struct S0 * func_18(struct S0 * p_19)
{
    int *l_158 = (void*)0;
    int **l_157 = &l_158;
    (*l_157) = (void*)0;
    return p_19;
}







static struct S0 func_20(struct S0 * p_21, char p_22)
{
    int l_92 = 8L;
    char *l_97 = &g_98;
    unsigned short *l_101 = (void*)0;
    unsigned short *l_102 = &g_103;
    int ***l_116 = (void*)0;
    short l_122 = 0x7E0FL;
    short l_123 = 4L;
    char l_125 = 1L;
    unsigned char *l_129 = &g_83;
    unsigned *l_133 = &g_121;
    unsigned *l_134 = (void*)0;
    int *l_136 = &g_124.f5;
    int l_137 = 0x6DB221B1L;
    int *l_144 = &g_124.f5;
    unsigned short **l_149 = &l_102;
    unsigned l_150 = 18446744073709551607UL;
    unsigned short l_151 = 6UL;
    int *l_152 = (void*)0;
    int *l_153 = &g_135;
    if (((safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((((*l_102) ^= ((g_78 = func_28(((void*)0 != &g_12), l_92, (safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(((*l_97) = (g_63.f5 || g_63.f0)), l_92)), (g_5 || g_79))), (safe_add_func_uint32_t_u_u(p_22, g_73.f5)))) ^ l_92)) || g_2.f3), l_92)), g_79)) == g_80))
    {
        int *l_105 = &g_73.f5;
        int **l_104 = &l_105;
        unsigned short *l_106 = (void*)0;
        unsigned short **l_107 = &l_101;
        g_45.f5 &= 0xDB0A1621L;
        (*l_104) = &l_92;
        (**l_104) ^= (((*l_107) = l_106) != l_102);
    }
    else
    {
        int *l_108 = &g_5;
        int **l_109 = &l_108;
        short *l_119 = (void*)0;
        short *l_120 = (void*)0;
        (*l_109) = l_108;
        if ((safe_lshift_func_int8_t_s_u(func_28(p_22, ((((g_73.f1 < ((safe_sub_func_uint16_t_u_u((g_114 != l_116), ((((+(((*g_114) == (*g_114)) , func_26((safe_lshift_func_int8_t_s_s(((*l_97) |= ((*g_11) , func_28((func_26((((g_121 = func_28(g_73.f4, (((**l_109) = ((l_92 , &g_115) != (void*)0)) < g_63.f0), p_22, p_22)) && g_45.f4) && 0x8C05660FL)) <= p_22), g_73.f4, l_122, g_83))), 1))))) != p_22) <= 247UL) || 0xE03748BFL))) <= p_22)) && g_12.f4) , 0x52E2L) != l_123), g_12.f1, p_22), g_12.f4)))
        {
            return (*g_11);
        }
        else
        {
            (**l_109) |= p_22;
            return g_124;
        }
    }
    (*l_136) |= ((l_122 != func_26(l_125)) ^ ((*l_97) |= (p_22 || ((safe_unary_minus_func_int16_t_s(((safe_add_func_uint16_t_u_u(((p_22 < ((*l_129) = (p_22 & g_12.f1))) , ((((safe_lshift_func_uint16_t_u_u(((g_135 = ((*l_133) = (&l_101 == g_132))) || 0x841C190BL), 3)) , p_22) > (-1L)) > p_22)), g_12.f1)) >= p_22))) > 0xEAL))));
    (*l_153) &= ((((+(*l_136)) == l_137) , func_23((((*l_136) & p_22) <= (safe_add_func_uint32_t_u_u(func_26(((*l_129) = (((func_28(((safe_sub_func_uint16_t_u_u((!((safe_mod_func_uint16_t_u_u((l_144 != (void*)0), (safe_rshift_func_int16_t_s_s(((p_22 , (l_151 = ((safe_mod_func_uint16_t_u_u(((func_26((+((void*)0 != l_149))) | p_22) >= p_22), p_22)) > l_150))) , g_124.f4), 6)))) > 4294967288UL)), (-5L))) , 1UL), (*l_144), (*l_136), p_22) < 0x8CFBL) == 0x5DL) <= g_124.f1))), g_103))), &l_92)) == g_11);
    return (*g_11);
}







static struct S0 * func_23(int p_24, int * p_25)
{
    int l_33 = 5L;
    unsigned char l_42 = 0UL;
    int *l_82 = (void*)0;
    unsigned char *l_85 = &l_42;
    int *l_86 = &g_73.f5;
    g_83 ^= func_26((func_28((4UL > (p_24 != (l_33 || g_2.f3))), p_24, ((safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((p_24 <= ((g_12.f1 , (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((((((*p_25) = l_33) || l_33) == p_24) || l_33), p_24)), l_33))) & g_12.f5)), g_12.f1)), l_42)) > 255UL), l_33) < 0x90DCL));
    (*l_86) &= (((safe_unary_minus_func_uint8_t_u(((*l_85) = 254UL))) & (g_2.f1 > 0x7BL)) | (*p_25));
    return &g_73;
}







static int func_26(unsigned char p_27)
{
    int *l_64 = &g_5;
    unsigned char *l_77 = &g_78;
    int *l_81 = &g_12.f5;
    for (g_5 = 0; (g_5 != 12); g_5++)
    {
        int **l_65 = &l_64;
        int **l_66 = (void*)0;
        int *l_68 = &g_5;
        int **l_67 = &l_68;
        (*l_67) = ((*l_65) = (g_63 , l_64));
    }
    (*l_64) = (safe_sub_func_int32_t_s_s(((*l_81) |= (((0xB40BL <= (*l_64)) & p_27) >= (((g_80 = (safe_add_func_int8_t_s_s(((((*l_64) , (*l_64)) , g_73) , (safe_sub_func_uint32_t_u_u(((*l_64) == g_12.f4), (((safe_unary_minus_func_int32_t_s((((g_79 |= ((((((*l_77) |= ((((*l_64) , (*l_64)) || 0x41L) , p_27)) >= 5L) >= p_27) > g_2.f4) , 1L)) | 0L) , p_27))) , 1UL) , (-4L))))), 0x39L))) | g_5) || 0L))), p_27));
    return g_63.f5;
}







static short func_28(unsigned p_29, char p_30, char p_31, unsigned short p_32)
{
    unsigned short l_55 = 0xA391L;
    int *l_58 = &g_5;
    int **l_57 = &l_58;
    for (p_31 = (-10); (p_31 > (-16)); p_31 = safe_sub_func_uint8_t_u_u(p_31, 8))
    {
        unsigned char l_47 = 255UL;
        int *l_52 = &g_5;
        int *l_56 = &g_12.f5;
        int ***l_59 = (void*)0;
        int ***l_60 = &l_57;
        (*l_56) ^= ((((g_45 , g_12.f2) || (safe_unary_minus_func_uint16_t_u((((l_47 > (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(g_2.f0, ((void*)0 != l_52))), 7))) >= (safe_lshift_func_uint8_t_u_u(l_55, l_55))) , (((((&g_45 == &g_2) >= 0xEBL) , p_30) || 1L) >= 7UL))))) <= (*l_52)) <= p_29);
        (*l_60) = l_57;
    }
    return g_12.f1;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2.f0, "g_2.f0", print_hash_value);
    transparent_crc(g_2.f1, "g_2.f1", print_hash_value);
    transparent_crc(g_2.f2, "g_2.f2", print_hash_value);
    transparent_crc(g_2.f3, "g_2.f3", print_hash_value);
    transparent_crc(g_2.f4, "g_2.f4", print_hash_value);
    transparent_crc(g_2.f5, "g_2.f5", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_12.f0, "g_12.f0", print_hash_value);
    transparent_crc(g_12.f1, "g_12.f1", print_hash_value);
    transparent_crc(g_12.f2, "g_12.f2", print_hash_value);
    transparent_crc(g_12.f3, "g_12.f3", print_hash_value);
    transparent_crc(g_12.f4, "g_12.f4", print_hash_value);
    transparent_crc(g_12.f5, "g_12.f5", print_hash_value);
    transparent_crc(g_45.f0, "g_45.f0", print_hash_value);
    transparent_crc(g_45.f1, "g_45.f1", print_hash_value);
    transparent_crc(g_45.f2, "g_45.f2", print_hash_value);
    transparent_crc(g_45.f3, "g_45.f3", print_hash_value);
    transparent_crc(g_45.f4, "g_45.f4", print_hash_value);
    transparent_crc(g_45.f5, "g_45.f5", print_hash_value);
    transparent_crc(g_63.f0, "g_63.f0", print_hash_value);
    transparent_crc(g_63.f1, "g_63.f1", print_hash_value);
    transparent_crc(g_63.f2, "g_63.f2", print_hash_value);
    transparent_crc(g_63.f3, "g_63.f3", print_hash_value);
    transparent_crc(g_63.f4, "g_63.f4", print_hash_value);
    transparent_crc(g_63.f5, "g_63.f5", print_hash_value);
    transparent_crc(g_73.f0, "g_73.f0", print_hash_value);
    transparent_crc(g_73.f1, "g_73.f1", print_hash_value);
    transparent_crc(g_73.f2, "g_73.f2", print_hash_value);
    transparent_crc(g_73.f3, "g_73.f3", print_hash_value);
    transparent_crc(g_73.f4, "g_73.f4", print_hash_value);
    transparent_crc(g_73.f5, "g_73.f5", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_124.f0, "g_124.f0", print_hash_value);
    transparent_crc(g_124.f1, "g_124.f1", print_hash_value);
    transparent_crc(g_124.f2, "g_124.f2", print_hash_value);
    transparent_crc(g_124.f3, "g_124.f3", print_hash_value);
    transparent_crc(g_124.f4, "g_124.f4", print_hash_value);
    transparent_crc(g_124.f5, "g_124.f5", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_200.f0, "g_200.f0", print_hash_value);
    transparent_crc(g_200.f1, "g_200.f1", print_hash_value);
    transparent_crc(g_200.f2, "g_200.f2", print_hash_value);
    transparent_crc(g_200.f3, "g_200.f3", print_hash_value);
    transparent_crc(g_200.f4, "g_200.f4", print_hash_value);
    transparent_crc(g_200.f5, "g_200.f5", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_414, "g_414", print_hash_value);
    transparent_crc(g_512, "g_512", print_hash_value);
    transparent_crc(g_594, "g_594", print_hash_value);
    transparent_crc(g_648, "g_648", print_hash_value);
    transparent_crc(g_802, "g_802", print_hash_value);
    transparent_crc(g_818, "g_818", print_hash_value);
    transparent_crc(g_917, "g_917", print_hash_value);
    transparent_crc(g_930, "g_930", print_hash_value);
    transparent_crc(g_931, "g_931", print_hash_value);
    transparent_crc(g_932, "g_932", print_hash_value);
    transparent_crc(g_933, "g_933", print_hash_value);
    transparent_crc(g_962, "g_962", print_hash_value);
    transparent_crc(g_1000, "g_1000", print_hash_value);
    transparent_crc(g_1325, "g_1325", print_hash_value);
    transparent_crc(g_1331, "g_1331", print_hash_value);
    transparent_crc(g_1426, "g_1426", print_hash_value);
    transparent_crc(g_1457, "g_1457", print_hash_value);
    transparent_crc(g_1466, "g_1466", print_hash_value);
    transparent_crc(g_1470, "g_1470", print_hash_value);
    transparent_crc(g_1534, "g_1534", print_hash_value);
    transparent_crc(g_1540, "g_1540", print_hash_value);
    transparent_crc(g_1545.f0, "g_1545.f0", print_hash_value);
    transparent_crc(g_1545.f1, "g_1545.f1", print_hash_value);
    transparent_crc(g_1545.f2, "g_1545.f2", print_hash_value);
    transparent_crc(g_1545.f3, "g_1545.f3", print_hash_value);
    transparent_crc(g_1545.f4, "g_1545.f4", print_hash_value);
    transparent_crc(g_1545.f5, "g_1545.f5", print_hash_value);
    transparent_crc(g_1555.f0, "g_1555.f0", print_hash_value);
    transparent_crc(g_1555.f1, "g_1555.f1", print_hash_value);
    transparent_crc(g_1555.f2, "g_1555.f2", print_hash_value);
    transparent_crc(g_1555.f3, "g_1555.f3", print_hash_value);
    transparent_crc(g_1555.f4, "g_1555.f4", print_hash_value);
    transparent_crc(g_1555.f5, "g_1555.f5", print_hash_value);
    transparent_crc(g_1557.f0, "g_1557.f0", print_hash_value);
    transparent_crc(g_1557.f1, "g_1557.f1", print_hash_value);
    transparent_crc(g_1557.f2, "g_1557.f2", print_hash_value);
    transparent_crc(g_1557.f3, "g_1557.f3", print_hash_value);
    transparent_crc(g_1557.f4, "g_1557.f4", print_hash_value);
    transparent_crc(g_1557.f5, "g_1557.f5", print_hash_value);
    transparent_crc(g_1558.f0, "g_1558.f0", print_hash_value);
    transparent_crc(g_1558.f1, "g_1558.f1", print_hash_value);
    transparent_crc(g_1558.f2, "g_1558.f2", print_hash_value);
    transparent_crc(g_1558.f3, "g_1558.f3", print_hash_value);
    transparent_crc(g_1558.f4, "g_1558.f4", print_hash_value);
    transparent_crc(g_1558.f5, "g_1558.f5", print_hash_value);
    transparent_crc(g_2039, "g_2039", print_hash_value);
    transparent_crc(g_2211, "g_2211", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
