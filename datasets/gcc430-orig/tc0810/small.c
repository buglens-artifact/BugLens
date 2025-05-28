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
   volatile signed f0 : 30;
   signed f1 : 27;
   signed f2 : 17;
};

union U1 {
   char f0;
};


static int g_12 = 0x64FD9E2AL;
static unsigned short g_20 = 0x11BCL;
static unsigned short g_59 = 0x6496L;
static unsigned short g_68 = 0x15EDL;
static unsigned short *g_67 = &g_68;
static short g_70 = (-10L);
static unsigned short g_81 = 0x3686L;
static unsigned char g_83 = 0x64L;
static unsigned g_91 = 4294967295UL;
static struct S0 g_100 = {-27679,-9819,-119};
static int g_103 = 0x48FB8AAAL;
static union U1 g_105 = {0x9EL};
static volatile union U1 g_109 = {0x5CL};
static volatile union U1 *g_108 = &g_109;
static volatile union U1 **g_107 = &g_108;
static struct S0 g_114 = {-17068,1085,-221};
static struct S0 g_115 = {26004,3293,-10};
static struct S0 g_116 = {-2347,9854,-149};
static char g_141 = 0x4BL;
static volatile unsigned g_142 = 3UL;
static unsigned g_143 = 0xB60A5FB0L;
static unsigned char g_154 = 0UL;
static int g_161 = 0L;
static struct S0 g_283 = {5793,3251,-276};
static volatile struct S0 g_410 = {-30170,-10140,183};
static short g_457 = 1L;
static short *g_472 = &g_457;
static short **g_471 = &g_472;
static short ***g_477 = &g_471;
static volatile struct S0 g_498 = {-18175,11499,251};
static unsigned g_504 = 0xC048E1D8L;
static unsigned g_592 = 0x4D4BB749L;
static int *g_653 = (void*)0;
static struct S0 g_666 = {-29947,-6366,184};
static struct S0 g_691 = {-13927,6593,95};
static struct S0 g_692 = {-30055,8727,47};
static unsigned g_1086 = 0xA5C3A70CL;
static struct S0 g_1309 = {-20053,11372,336};
static struct S0 g_1333 = {-21373,3459,231};
static union U1 *g_1340 = &g_105;
static union U1 **g_1339 = &g_1340;
static union U1 ***g_1338 = &g_1339;
static volatile struct S0 g_1350 = {-28914,-7960,-174};
static volatile struct S0 g_1351 = {-22566,6273,-44};
static unsigned g_1364 = 0xDE620F3FL;
static struct S0 g_1367 = {-27430,10003,-182};
static struct S0 g_1368 = {-3946,3193,70};
static union U1 ****g_1407 = &g_1338;
static unsigned char *g_1426 = (void*)0;
static volatile unsigned short g_1441 = 7UL;
static volatile unsigned short *g_1440 = &g_1441;
static volatile unsigned short **g_1439 = &g_1440;
static volatile unsigned short ***g_1438 = &g_1439;
static int g_1791 = 0x004309EBL;
static struct S0 g_1795 = {23919,-5201,-107};
static struct S0 g_1858 = {7532,-4457,-130};
static short ****g_1862 = &g_477;
static short *****g_1861 = &g_1862;
static short g_1954 = 4L;
static struct S0 g_2045 = {-17236,3220,108};
static struct S0 g_2076 = {-9458,-8052,-249};
static struct S0 g_2082 = {-3623,2259,-107};
static struct S0 g_2093 = {-32333,-8905,8};
static struct S0 g_2102 = {29739,-5621,59};
static char *g_2104 = &g_141;
static char **g_2103 = &g_2104;
static union U1 g_2174 = {-1L};
static struct S0 g_2175 = {8717,3209,96};
static int g_2606 = 0xE77EC387L;
static volatile int g_2867 = 1L;
static volatile struct S0 g_2882 = {3915,8502,-292};
static union U1 *****g_2884 = (void*)0;
static union U1 ******g_2883 = &g_2884;
static struct S0 g_2890 = {2574,-1910,-217};
static unsigned short *g_2901 = (void*)0;
static unsigned char g_2912 = 1UL;
static char g_2914 = 0x79L;
static int g_2950 = 8L;
static volatile char g_3008 = (-3L);
static unsigned g_3071 = 4UL;
static unsigned short g_3075 = 0x0634L;
static volatile unsigned g_3165 = 0UL;
static struct S0 g_3168 = {4684,5048,-175};
static struct S0 g_3361 = {27059,-5421,356};
static unsigned char g_3383 = 1UL;
static volatile unsigned g_3566 = 0x65DB82A0L;
static volatile struct S0 g_3677 = {-31972,-7043,-93};
static volatile unsigned g_3690 = 8UL;
static struct S0 g_3698 = {-667,-9878,-335};
static int *g_3713 = (void*)0;
static char ***g_3716 = &g_2103;
static char ****g_3715 = &g_3716;
static volatile unsigned ***g_3717 = (void*)0;
static union U1 *g_3728 = &g_2174;
static char g_3729 = (-3L);
static struct S0 *g_3759 = &g_2175;
static short g_3910 = 1L;
static unsigned short *g_3916 = &g_68;
static unsigned char g_4262 = 0xC4L;
static struct S0 g_4279 = {31476,11561,199};
static volatile struct S0 g_4288 = {12602,-8537,-320};
static unsigned char g_4403 = 255UL;
static int g_4436 = 0x63638C7BL;
static volatile char g_4539 = 0L;
static volatile struct S0 g_4630 = {-31925,5011,219};
static volatile struct S0 g_4638 = {-11424,-3269,-345};
static struct S0 g_5035 = {-8187,756,97};
static unsigned char **g_5157 = (void*)0;
static volatile struct S0 g_5176 = {-14167,-3585,-132};
static struct S0 g_5257 = {-23919,4639,59};
static volatile struct S0 g_5265 = {-3164,-3186,-268};
static struct S0 g_5291 = {-12172,-9056,-110};
static unsigned *g_5864 = &g_91;
static unsigned **g_5863 = &g_5864;
static volatile struct S0 g_5879 = {24289,4821,45};
static unsigned short g_6097 = 4UL;



static union U1 func_1(void);
static int * func_3(int * p_4, int * p_5);
static int * func_6(unsigned p_7, int * p_8, unsigned char p_9);
static unsigned char func_15(unsigned p_16, int * p_17, unsigned char p_18);
static unsigned short func_25(union U1 p_26, unsigned short * p_27, unsigned short * p_28, unsigned p_29, unsigned p_30);
static struct S0 func_32(unsigned short * p_33, unsigned short * p_34, unsigned p_35, int p_36, unsigned short * p_37);
static int * func_38(unsigned short p_39, unsigned char p_40, char p_41, unsigned char p_42, char p_43);
static unsigned char func_44(int * p_45, int * p_46, unsigned short * p_47);
static int * func_48(unsigned p_49, short p_50, unsigned short * p_51);
static struct S0 func_73(unsigned short * p_74, unsigned short * p_75, unsigned short * p_76, unsigned p_77);
static union U1 func_1(void)
{
    int l_2 = 0xE1265AB3L;
    unsigned short l_2910 = 0x602CL;
    int l_3784 = 0xA3EC9DC4L;
    int l_4002 = 1L;
    int l_4051 = 0xD64CE93EL;
    int l_4065 = 0xF9E1C058L;
    int l_4071 = 0L;
    short l_4199 = 0x323BL;
    int l_4213 = 1L;
    union U1 l_4269 = {1L};
    union U1 *l_4274 = &l_4269;
    int l_4348 = 7L;
    char l_4809 = 0x37L;
    unsigned l_4920 = 0x9966C045L;
    unsigned short l_5030 = 0x482FL;
    char **l_5051 = &g_2104;
    int l_5052 = (-2L);
    unsigned char **l_5055 = &g_1426;
    int l_5155 = (-9L);
    unsigned short *l_5169 = (void*)0;
    unsigned short *l_5252 = (void*)0;
    unsigned l_5782 = 0xE88FEFD6L;
    unsigned *l_5862 = &l_5782;
    unsigned **l_5861 = &l_5862;
    int *l_5867 = &l_4002;
    short l_5900 = 1L;
    unsigned char l_6103 = 249UL;
    if (l_2)
    {
        unsigned char l_10 = 0xD9L;
        int *l_11 = &g_12;
        unsigned short *l_19 = &g_20;
        unsigned char *l_2911 = &g_2912;
        char *l_2913 = &g_2914;
        unsigned char *l_2915 = (void*)0;
        unsigned char *l_2916 = &g_154;
        int **l_3745 = &l_11;
        union U1 **l_3751 = (void*)0;
        int l_3771 = 1L;
        union U1 l_3915 = {-6L};
        unsigned l_3922 = 0x86670DE2L;
        int l_3950 = 0xC93300E3L;
        int l_3982 = (-5L);
        int l_4010 = 0L;
        int l_4089 = 1L;
        unsigned l_4106 = 0x6E974067L;
        int l_4219 = 1L;
        int l_4223 = 0x8E4E9C5BL;
        int l_4226 = 1L;
        unsigned char l_4270 = 255UL;
        short l_4271 = (-6L);
        (*l_3745) = func_3(func_6(l_10, l_11, ((*l_2916) = (safe_mod_func_uint8_t_u_u((~func_15(g_12, l_11, (g_12 == ((*l_19) |= l_2)))), (safe_lshift_func_uint8_t_u_s((!((*l_2911) ^= l_2910)), ((*l_2913) = (-7L)))))))), g_3713);

        ;
        ;



        ;
        ;
        for (g_2174.f0 = (-11); (g_2174.f0 == (-8)); g_2174.f0 = safe_add_func_int32_t_s_s(g_2174.f0, 9))
        {
            unsigned short l_3748 = 0x0F8FL;
            unsigned *l_3752 = &g_3071;
            int l_3801 = 0xB4F504AFL;
            int l_3811 = 0x6DB2BA02L;
            int l_3870 = 0L;
            union U1 l_3908 = {-6L};
            int l_4070 = 6L;
            int l_4092 = 2L;
            int *l_4109 = &l_3982;
            int *l_4110 = &l_4070;
            int *l_4111 = &l_4092;
            int *l_4112 = &l_4092;
            int *l_4113 = &l_4092;
            int *l_4114 = &l_4070;
            int *l_4115 = &l_4089;
            int *l_4116 = &l_4089;
            int *l_4117 = &l_3811;
            int *l_4118 = (void*)0;
            int *l_4119 = &l_3801;
            int *l_4120 = &l_4070;
            int *l_4121 = &l_3771;
            int *l_4122 = &l_3784;
            int *l_4123 = (void*)0;
            int *l_4124 = &g_103;
            int *l_4125 = (void*)0;
            int *l_4126 = &g_161;
            int *l_4127 = &l_3784;
            int *l_4128 = &l_3801;
            int *l_4129 = &l_3771;
            int *l_4130 = (void*)0;
            int *l_4131 = &g_103;
            int *l_4132 = &l_3784;
            int *l_4133 = &l_4092;
            int *l_4134 = (void*)0;
            int *l_4135 = &l_3771;
            int *l_4136 = &g_12;
            int *l_4137 = &l_3950;
            int *l_4138 = &l_3784;
            int *l_4139 = &g_12;
            int *l_4140 = &g_2606;
            int *l_4141 = &l_4065;
            int *l_4142 = &l_3811;
            int *l_4143 = &l_4002;
            int *l_4144 = &l_3982;
            int *l_4145 = &g_12;
            int *l_4146 = &l_3950;
            int *l_4147 = (void*)0;
            int *l_4148 = (void*)0;
            int *l_4149 = &g_12;
            int *l_4150 = &l_4065;
            int *l_4151 = &l_4010;
            int *l_4152 = &l_4070;
            int *l_4153 = &l_3784;
            int *l_4154 = &g_1791;
            int *l_4155 = &l_4089;
            int *l_4156 = &l_3784;
            int *l_4157 = (void*)0;
            int *l_4158 = &l_3771;
            int *l_4159 = (void*)0;
            int *l_4160 = &l_3801;
            int *l_4161 = &l_4002;
            int *l_4162 = &g_103;
            int *l_4163 = (void*)0;
            int *l_4164 = &l_4002;
            int *l_4165 = &l_4070;
            int *l_4166 = (void*)0;
            int *l_4167 = &g_103;
            int *l_4168 = &l_3771;
            int *l_4169 = &l_4065;
            int *l_4170 = (void*)0;
            int *l_4171 = (void*)0;
            int *l_4172 = &l_4092;
            int *l_4173 = &g_2606;
            int *l_4174 = &l_4092;
            int *l_4175 = &l_3771;
            int *l_4176 = (void*)0;
            int *l_4177 = &l_4070;
            int *l_4178 = &l_3784;
            int *l_4179 = (void*)0;
            int *l_4180 = &g_2606;
            int *l_4181 = &l_4089;
            int *l_4182 = &g_12;
            int *l_4183 = &l_4065;
            int *l_4184 = &l_4051;
            int *l_4185 = &l_3784;
            int *l_4186 = &l_3982;
            int *l_4187 = &l_4070;
            int *l_4188 = &l_3982;
            int *l_4189 = &l_4065;
            int *l_4190 = &g_161;
            int *l_4191 = &g_12;
            int *l_4192 = (void*)0;
            int *l_4193 = &l_3950;
            int *l_4194 = &g_1791;
            int *l_4195 = (void*)0;
            int *l_4196 = &l_4071;
            int *l_4197 = &l_4089;
            int *l_4198 = &l_3801;
            int *l_4200 = &g_161;
            int *l_4201 = &l_4002;
            int *l_4202 = &l_4065;
            int *l_4203 = (void*)0;
            int *l_4204 = &l_3801;
            int *l_4205 = (void*)0;
            int *l_4206 = &l_3784;
            int *l_4207 = (void*)0;
            int *l_4208 = &l_4002;
            int *l_4209 = &l_4002;
            int *l_4210 = (void*)0;
            int *l_4211 = (void*)0;
            int *l_4212 = (void*)0;
            int *l_4214 = (void*)0;
            int *l_4215 = &l_4010;
            int *l_4216 = (void*)0;
            int *l_4217 = &l_3982;
            int *l_4218 = &l_4070;
            int *l_4220 = &l_4219;
            int *l_4221 = &l_4065;
            int *l_4222 = (void*)0;
            int *l_4224 = (void*)0;
            int *l_4225 = (void*)0;
            int *l_4227 = &l_4065;
            int *l_4228 = &g_12;
            int *l_4229 = &l_4065;
            int *l_4230 = &l_4213;
            int *l_4231 = &l_3784;
            int *l_4232 = (void*)0;
            int *l_4233 = (void*)0;
            int *l_4234 = &g_12;
            int *l_4235 = (void*)0;
            int *l_4236 = &l_4010;
            int *l_4237 = &l_3771;
            int *l_4238 = &l_3771;
            int *l_4239 = &l_4223;
            int *l_4240 = &l_4002;
            int *l_4241 = &g_103;
            int *l_4242 = &g_1791;
            int *l_4243 = &l_4002;
            int *l_4244 = &l_3801;
            int *l_4245 = (void*)0;
            int *l_4246 = &l_4071;
            int *l_4247 = &l_4010;
            int *l_4248 = &l_4002;
            int *l_4249 = &g_161;
            int *l_4250 = (void*)0;
            int *l_4251 = &l_4071;
            int *l_4252 = (void*)0;
            int *l_4253 = &l_4071;
            int *l_4254 = &g_103;
            int *l_4255 = &l_3870;
            int *l_4256 = &l_4092;
            int *l_4257 = &l_3801;
            int *l_4258 = &l_4010;
            int *l_4259 = &l_4065;
            int *l_4260 = &l_3771;
            int *l_4261 = &l_3771;
            (*l_3745) = &g_1791;

            ;
        }
        (**l_3745) |= (l_4213 , 1L);
    }
    else
    {
        struct S0 *l_4272 = (void*)0;
        struct S0 **l_4273 = &g_3759;
        int l_4284 = (-1L);
        char ***l_4285 = &g_2103;
        char l_4299 = (-1L);
        int l_4337 = 0x1BEDB763L;
        int l_4341 = 0x474292E6L;
        int l_4400 = 3L;
        int **l_4424 = &g_3713;
        unsigned short *l_4438 = &g_81;
        char l_4447 = 0L;
        union U1 *l_4449 = (void*)0;
        union U1 ***l_4461 = (void*)0;
        union U1 ***l_4462 = &g_1339;
        char l_4530 = 1L;
        char l_4632 = 1L;
        char l_5050 = 0x74L;
        unsigned char l_5053 = 0xA0L;
        short l_5084 = 9L;
        int l_5095 = 1L;
        unsigned l_5143 = 4294967287UL;
        char *l_5154 = &l_4299;
        int l_5163 = 0L;
        unsigned l_5177 = 18446744073709551608UL;
        unsigned short l_5240 = 65526UL;
        unsigned short l_5820 = 1UL;
        int l_6072 = 4L;
        int l_6083 = 0x550B35E9L;
        int l_6092 = 3L;
        (*l_4273) = l_4272;

        ;
        l_4274 = &l_4269;
        if ((safe_rshift_func_int16_t_s_s(((((safe_sub_func_int16_t_s_s((g_4279 , (g_3566 & 0xFDL)), (((((((((&g_2912 != &g_2912) | (((safe_add_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s(((*g_2104) = l_4284), l_4269.f0)) <= ((((0x15L && 8UL) , l_4284) > (*g_3916)) || l_4071)) | 0xAB93L), (*****g_1861))) && 5UL) , 0xCFL)) , l_4213) || l_4199) , l_4285) == (*g_3715)) ^ (*g_67)) , l_4065) , 0xF5F1L))) != l_4284) ^ l_2) | l_4284), 8)))
        {
            char l_4295 = (-2L);
            int *l_4323 = &l_4065;
            unsigned short *l_4324 = &g_59;
            int l_4366 = 0xE59BDA57L;
            int l_4381 = 0x3A8E1EA7L;
            union U1 *l_4450 = &g_105;
            int l_4492 = 0L;
            int l_4494 = 0x736D44AFL;
            int l_4512 = 0x28D6BA12L;
            int l_4515 = 0x74963D56L;
            int l_4547 = 0L;
            int l_4559 = (-1L);
            int l_4602 = (-2L);
            int l_4613 = 0L;
            int l_5049 = 0x88EAD37FL;
            unsigned l_5054 = 4294967295UL;
            for (g_1086 = 18; (g_1086 != 52); ++g_1086)
            {
                int *l_4291 = &g_103;
                unsigned short *l_4292 = &l_2910;
                int l_4304 = 1L;
                unsigned char l_4420 = 6UL;
                int l_4421 = 0x83B6B325L;
                union U1 ******l_4422 = &g_2884;
                struct S0 *l_4426 = (void*)0;
                struct S0 *l_4427 = &g_2102;
            }
            l_4337 &= (safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s((l_3784 != (((*l_4323) <= (*g_472)) < (safe_lshift_func_int8_t_s_u((((*g_1862) = (**g_1861)) != (((((safe_sub_func_uint8_t_u_u((((*g_1407) = (l_4461 = l_4461)) != l_4462), 0x09L)) , (safe_add_func_uint16_t_u_u((*g_1440), (g_2890.f2 || l_4051)))) , (**g_471)) <= 0xB2E9L) , (void*)0)), g_100.f2)))), (*g_2104))), (*l_4323)));

            ;
            if ((safe_mod_func_uint16_t_u_u((*g_67), (*l_4323))))
            {
                int *l_4467 = &l_4337;
                int *l_4468 = &g_1791;
                int *l_4469 = &l_4337;
                int l_4470 = 3L;
                int *l_4471 = &l_4381;
                int *l_4472 = (void*)0;
                int *l_4473 = &g_161;
                int *l_4474 = &g_1791;
                int *l_4475 = &l_4213;
                int *l_4476 = &g_103;
                int *l_4477 = &g_4436;
                int *l_4478 = &l_4051;
                int *l_4479 = &g_12;
                int *l_4480 = &g_4436;
                int *l_4481 = &l_4213;
                int *l_4482 = &g_2606;
                int *l_4483 = &g_4436;
                int *l_4484 = (void*)0;
                int *l_4485 = &l_4284;
                int *l_4486 = &l_4051;
                int *l_4487 = &l_4002;
                int *l_4488 = &l_4400;
                int *l_4489 = &l_4002;
                int *l_4490 = &l_4337;
                int *l_4491 = &l_4071;
                int *l_4493 = &l_4284;
                int *l_4495 = &l_4337;
                int *l_4496 = &g_103;
                int *l_4497 = &l_4366;
                int *l_4498 = (void*)0;
                int *l_4499 = &l_4002;
                int *l_4500 = &g_161;
                int *l_4501 = &g_12;
                int *l_4502 = &l_4492;
                int *l_4503 = (void*)0;
                int *l_4504 = &l_4400;
                int *l_4505 = &l_4284;
                int *l_4506 = &g_103;
                int *l_4507 = &l_4381;
                int *l_4508 = &l_4071;
                int *l_4509 = &l_4065;
                int *l_4510 = (void*)0;
                int *l_4511 = &l_4470;
                int *l_4513 = (void*)0;
                int *l_4514 = &l_4051;
                int *l_4516 = &l_3784;
                int *l_4517 = &l_4512;
                int *l_4518 = &l_4492;
                int *l_4519 = (void*)0;
                int *l_4520 = &l_4348;
                int *l_4521 = &l_4284;
                int *l_4522 = &l_4065;
                int *l_4523 = &g_2606;
                int *l_4524 = &l_4515;
                int *l_4525 = &g_1791;
                int *l_4526 = &l_4065;
                int *l_4527 = &g_161;
                int *l_4528 = &l_4341;
                int *l_4529 = &l_4400;
                int *l_4531 = (void*)0;
                int *l_4532 = &l_4002;
                int *l_4533 = (void*)0;
                int *l_4534 = &g_12;
                int *l_4535 = &l_4341;
                int *l_4536 = &g_161;
                int *l_4537 = &l_4051;
                int l_4538 = (-1L);
                int *l_4540 = &l_4494;
                int *l_4541 = &l_4341;
                int *l_4542 = &l_4366;
                int *l_4543 = &l_4492;
                int *l_4544 = (void*)0;
                int *l_4545 = (void*)0;
                int *l_4546 = &l_4538;
                int *l_4548 = &l_4470;
                int *l_4549 = &l_4051;
                int *l_4550 = (void*)0;
                int *l_4551 = &g_1791;
                int *l_4552 = &l_4065;
                int *l_4553 = &g_4436;
                int *l_4554 = &l_4538;
                int *l_4555 = &l_4337;
                int *l_4556 = &l_4538;
                int *l_4557 = (void*)0;
                int *l_4558 = &l_4065;
                int *l_4560 = &l_3784;
                int *l_4561 = &g_2606;
                int *l_4562 = (void*)0;
                int *l_4563 = &g_161;
                int *l_4564 = &g_1791;
                int *l_4565 = &g_1791;
                int *l_4566 = &l_4559;
                int *l_4567 = &l_4002;
                int *l_4568 = &g_1791;
                int *l_4569 = &l_3784;
                int *l_4570 = &g_12;
                int *l_4571 = &g_2606;
                int *l_4572 = &l_4559;
                int *l_4573 = &l_4381;
                int *l_4574 = &l_4492;
                int *l_4575 = (void*)0;
                int *l_4576 = &l_4065;
                int *l_4577 = &l_4494;
                int *l_4578 = (void*)0;
                int l_4579 = (-1L);
                int *l_4580 = (void*)0;
                int *l_4581 = (void*)0;
                int *l_4582 = &l_4400;
                int *l_4583 = &l_4512;
                int *l_4584 = &l_4341;
                int *l_4585 = &l_4065;
                int *l_4586 = &l_4071;
                int *l_4587 = &l_4579;
                int *l_4588 = &l_4515;
                int *l_4589 = &l_4213;
                int l_4590 = 0xA35D77BCL;
                int *l_4591 = &g_103;
                int *l_4592 = &g_103;
                int *l_4593 = (void*)0;
                int *l_4594 = &g_2606;
                int *l_4595 = &l_4337;
                int *l_4596 = &l_3784;
                int *l_4597 = (void*)0;
                int *l_4598 = &g_161;
                int *l_4599 = (void*)0;
                int *l_4600 = &l_4494;
                int *l_4601 = &l_4512;
                int l_4603 = 0x15DD5A5CL;
                int *l_4604 = &g_161;
                int *l_4605 = &l_4366;
                int *l_4606 = &l_4547;
                int *l_4607 = &l_3784;
                int *l_4608 = &l_4547;
                int *l_4609 = (void*)0;
                int *l_4610 = &l_4071;
                int *l_4611 = (void*)0;
                int *l_4612 = &l_4547;
                int *l_4614 = &l_4470;
                int *l_4615 = &l_4538;
                int *l_4616 = &l_4002;
                int *l_4617 = &l_4341;
                int *l_4618 = &g_103;
                int *l_4619 = &l_4366;
                int *l_4620 = &l_4381;
                int l_4621 = (-9L);
                int *l_4622 = &l_4071;
                int *l_4623 = (void*)0;
                int *l_4624 = &l_4284;
                unsigned short l_4625 = 1UL;
                l_4625--;
                (*l_4608) ^= ((safe_mod_func_uint8_t_u_u(((*****g_1861) ^ (**g_471)), (g_4630 , (*l_4323)))) & ((safe_unary_minus_func_uint16_t_u(0x5FCAL)) | l_4632));
            }
            else
            {
                short l_4671 = 0x7970L;
                int l_4788 = 0xDB64EDFDL;
                int l_4823 = 0xAD555E54L;
                int l_4857 = (-3L);
                int l_4858 = 0L;
                int l_4866 = 1L;
                int l_4886 = 0x383600ABL;
                for (g_70 = 0; (g_70 <= 1); g_70 = safe_add_func_uint32_t_u_u(g_70, 3))
                {
                    short l_4643 = 1L;
                    int l_4725 = 7L;
                    int l_4764 = 0x2F37F952L;
                    int l_4787 = 0L;
                    int *l_4923 = &l_4492;
                    int *l_4924 = (void*)0;
                    int *l_4925 = &l_4400;
                    int *l_4926 = &l_4002;
                    int *l_4927 = &l_3784;
                    int *l_4928 = &l_4613;
                    int *l_4929 = &l_4764;
                    int *l_4930 = (void*)0;
                    int *l_4931 = (void*)0;
                    int *l_4932 = &g_12;
                    int *l_4933 = &g_1791;
                    int *l_4934 = &l_4515;
                    int *l_4935 = &l_4559;
                    int *l_4936 = (void*)0;
                    int *l_4937 = &l_4071;
                    int *l_4938 = &l_4071;
                    int *l_4939 = (void*)0;
                    int *l_4940 = &l_4381;
                    int *l_4941 = &l_4559;
                    int *l_4942 = (void*)0;
                    int *l_4943 = &l_4337;
                    int *l_4944 = &l_4400;
                    int *l_4945 = &l_4857;
                    int *l_4946 = &l_4823;
                    int *l_4947 = &g_103;
                    int *l_4948 = &g_103;
                    int *l_4949 = (void*)0;
                    int *l_4950 = &l_4725;
                    int *l_4951 = &l_4337;
                    int *l_4952 = &l_4337;
                    int *l_4953 = &l_4213;
                    int *l_4954 = &g_161;
                    int *l_4955 = &l_4341;
                    int *l_4956 = (void*)0;
                    int *l_4957 = &l_4348;
                    int *l_4958 = &l_4866;
                    int *l_4959 = (void*)0;
                    int *l_4960 = &l_4788;
                    int *l_4961 = &l_4494;
                    int *l_4962 = &g_161;
                    int *l_4963 = &g_12;
                    int *l_4964 = &l_4400;
                    int *l_4965 = &l_4559;
                    int *l_4966 = &l_4613;
                    int *l_4967 = &l_4348;
                    int *l_4968 = &g_1791;
                    int *l_4969 = &l_4065;
                    int *l_4970 = &g_12;
                    int *l_4971 = &l_4602;
                    int *l_4972 = &l_4213;
                    int *l_4973 = &g_1791;
                    int *l_4974 = (void*)0;
                    int *l_4975 = &l_4725;
                    int *l_4976 = &g_161;
                    int *l_4977 = &g_12;
                    int *l_4978 = &l_4602;
                    int *l_4979 = &l_4787;
                    int *l_4980 = &l_4559;
                    int *l_4981 = &l_4823;
                    int *l_4982 = &l_3784;
                    int *l_4983 = &l_4547;
                    int *l_4984 = &g_4436;
                    int *l_4985 = &l_4823;
                    int *l_4986 = &l_4341;
                    int *l_4987 = &l_4213;
                    int *l_4988 = &l_4725;
                    int *l_4989 = &g_103;
                    int *l_4990 = &l_4337;
                    int *l_4991 = (void*)0;
                    int *l_4992 = &l_4071;
                    int *l_4993 = &l_4494;
                    int *l_4994 = &l_4065;
                    int *l_4995 = &l_4613;
                    int *l_4996 = &l_4381;
                    int *l_4997 = &l_4337;
                    int *l_4998 = &l_4725;
                    int *l_4999 = &l_4886;
                    int *l_5000 = &g_4436;
                    int *l_5001 = &g_103;
                    int *l_5002 = &l_4400;
                    int *l_5003 = &g_2606;
                    int *l_5004 = &g_103;
                    int *l_5005 = &l_4381;
                    int *l_5006 = &l_4213;
                    int *l_5007 = (void*)0;
                    int *l_5008 = (void*)0;
                    int *l_5009 = &g_1791;
                    int *l_5010 = &l_4787;
                    int *l_5011 = (void*)0;
                    int *l_5012 = (void*)0;
                    int *l_5013 = &l_4002;
                    int *l_5014 = (void*)0;
                    int *l_5015 = &l_4071;
                    int *l_5016 = &g_12;
                    int *l_5017 = (void*)0;
                    int *l_5018 = &l_4866;
                    int *l_5019 = &l_4764;
                    int *l_5020 = &l_4823;
                    int *l_5021 = &l_4559;
                    int *l_5022 = &l_4725;
                    int *l_5023 = &l_4065;
                    int *l_5024 = &g_1791;
                    int *l_5025 = (void*)0;
                    int *l_5026 = &l_4547;
                    int *l_5027 = &l_4547;
                    int *l_5028 = &l_4886;
                    int *l_5029 = &l_4341;
                    for (l_4559 = 13; (l_4559 >= 11); l_4559--)
                    {
                        unsigned short **l_4637 = &g_2901;
                        volatile struct S0 *l_4639 = &g_1350;
                        short l_4640 = 0x32EFL;
                        (*l_4323) = func_25((**g_1339), ((*l_4637) = &g_3075), &g_59, g_2867, (*l_4323));

                        ;
                        (*l_4639) = g_4638;
                        if (l_4640)
                            break;
                        (*l_4323) = (safe_rshift_func_int16_t_s_u(((0x67CB5DB4L & (l_4643 || (((*l_4323) >= 0xCF04FB04L) ^ (**g_471)))) & (l_4640 <= (l_4640 | (safe_lshift_func_uint8_t_u_s(252UL, (*l_4323)))))), 4));
                    }
                    if ((!l_4002))
                    {
                        return (*g_1340);

                                            }
                    else
                    {
                        int *l_4646 = &l_4366;
                        int *l_4647 = &l_4547;
                        int *l_4648 = &l_4512;
                        int *l_4649 = &g_2606;
                        int *l_4650 = &l_4341;
                        int *l_4651 = &l_4602;
                        int *l_4652 = &l_4337;
                        int *l_4653 = &l_4366;
                        int *l_4654 = &l_3784;
                        int *l_4655 = &l_4512;
                        int *l_4656 = &l_4400;
                        int *l_4657 = &l_4065;
                        int *l_4658 = &l_4341;
                        int *l_4659 = &l_4559;
                        int *l_4660 = &l_4348;
                        int *l_4661 = &l_3784;
                        int *l_4662 = &l_4547;
                        int *l_4663 = &l_4559;
                        int l_4664 = (-1L);
                        int *l_4665 = &l_4664;
                        int *l_4666 = &l_4492;
                        int *l_4667 = &l_3784;
                        int *l_4668 = &g_103;
                        int *l_4669 = &g_103;
                        int *l_4670 = &l_4337;
                        int *l_4672 = &g_2606;
                        int *l_4673 = &g_103;
                        int *l_4674 = &l_4547;
                        int *l_4675 = &l_4512;
                        int *l_4676 = &l_4284;
                        int *l_4677 = &g_4436;
                        int *l_4678 = &l_4492;
                        int *l_4679 = (void*)0;
                        int *l_4680 = &l_4602;
                        int *l_4681 = (void*)0;
                        int *l_4682 = &l_4348;
                        int *l_4683 = &g_103;
                        int *l_4684 = (void*)0;
                        int *l_4685 = (void*)0;
                        int *l_4686 = &l_4547;
                        int *l_4687 = &l_4051;
                        int *l_4688 = &l_4051;
                        int *l_4689 = &l_4613;
                        int *l_4690 = &l_4284;
                        int *l_4691 = &l_4337;
                        int *l_4692 = &g_1791;
                        int *l_4693 = (void*)0;
                        int *l_4694 = &l_4284;
                        int *l_4695 = &l_4284;
                        int *l_4696 = &l_4492;
                        int *l_4697 = &l_4213;
                        int *l_4698 = &l_4494;
                        int *l_4699 = (void*)0;
                        int *l_4700 = &l_4348;
                        int *l_4701 = (void*)0;
                        int *l_4702 = (void*)0;
                        int l_4703 = 6L;
                        int *l_4704 = (void*)0;
                        int *l_4705 = &l_4348;
                        int *l_4706 = &g_4436;
                        int *l_4707 = &l_4348;
                        int *l_4708 = &g_12;
                        int *l_4709 = (void*)0;
                        int *l_4710 = &l_4071;
                        int *l_4711 = (void*)0;
                        int *l_4712 = &g_161;
                        int *l_4713 = &l_4348;
                        int *l_4714 = &l_4515;
                        int *l_4715 = &l_4664;
                        int *l_4716 = &l_4381;
                        int *l_4717 = (void*)0;
                        int *l_4718 = &g_103;
                        int *l_4719 = &l_4065;
                        int *l_4720 = &l_4071;
                        int *l_4721 = (void*)0;
                        int l_4722 = 5L;
                        int *l_4723 = (void*)0;
                        int *l_4724 = (void*)0;
                        int *l_4726 = &l_4002;
                        int *l_4727 = &l_4213;
                        int *l_4728 = &l_4071;
                        int *l_4729 = &l_4337;
                        int *l_4730 = &l_4051;
                        int *l_4731 = &l_4613;
                        int *l_4732 = &l_4002;
                        int *l_4733 = (void*)0;
                        int *l_4734 = (void*)0;
                        int *l_4735 = &l_4725;
                        int *l_4736 = &l_4348;
                        int *l_4737 = (void*)0;
                        int *l_4738 = &l_4515;
                        int *l_4739 = &g_161;
                        int l_4740 = (-5L);
                        int *l_4741 = &l_4725;
                        int *l_4742 = &l_4284;
                        int *l_4743 = &l_4703;
                        int l_4744 = 0x35487ED8L;
                        int *l_4745 = &g_161;
                        int *l_4746 = (void*)0;
                        int *l_4747 = (void*)0;
                        int *l_4748 = &l_4341;
                        int *l_4749 = &g_4436;
                        int *l_4750 = &l_4664;
                        int *l_4751 = (void*)0;
                        int *l_4752 = &l_4613;
                        int *l_4753 = &l_4664;
                        int *l_4754 = (void*)0;
                        int *l_4755 = &l_4337;
                        int *l_4756 = &l_4703;
                        int *l_4757 = &l_4002;
                        int *l_4758 = &l_4547;
                        int *l_4759 = &l_4071;
                        int *l_4760 = (void*)0;
                        int *l_4761 = &l_4744;
                        int *l_4762 = &l_4515;
                        int *l_4763 = (void*)0;
                        int *l_4765 = &g_4436;
                        int *l_4766 = (void*)0;
                        int *l_4767 = &l_4381;
                        int *l_4768 = &l_4722;
                        int *l_4769 = &g_103;
                        int *l_4770 = &l_4381;
                        int *l_4771 = &l_4725;
                        int *l_4772 = &l_4381;
                        int *l_4773 = &l_4744;
                        int *l_4774 = &l_4381;
                        int *l_4775 = (void*)0;
                        int *l_4776 = &l_4559;
                        int *l_4777 = &l_4664;
                        int *l_4778 = &l_4348;
                        int *l_4779 = &l_4366;
                        int *l_4780 = &l_4071;
                        int *l_4781 = (void*)0;
                        int *l_4782 = &l_4602;
                        int *l_4783 = &l_4348;
                        int *l_4784 = &g_103;
                        int *l_4785 = &l_4664;
                        int *l_4786 = &l_4559;
                        int *l_4789 = &l_4381;
                        int *l_4790 = &l_4337;
                        int *l_4791 = &l_4494;
                        int *l_4792 = &l_4788;
                        int *l_4793 = &l_4788;
                        int *l_4794 = &l_4547;
                        int *l_4795 = &l_4065;
                        int *l_4796 = &l_4337;
                        int *l_4797 = &l_4725;
                        int *l_4798 = (void*)0;
                        int *l_4799 = &l_4787;
                        int *l_4800 = &g_103;
                        int *l_4801 = &l_4512;
                        int *l_4802 = (void*)0;
                        int *l_4803 = &l_4787;
                        int *l_4804 = (void*)0;
                        int *l_4805 = &l_3784;
                        int *l_4806 = &l_3784;
                        int *l_4807 = &g_2606;
                        int *l_4808 = &l_4381;
                        int *l_4810 = &l_4494;
                        int *l_4811 = (void*)0;
                        int *l_4812 = &g_161;
                        int *l_4813 = &l_4512;
                        int *l_4814 = &l_4547;
                        int *l_4815 = &l_4065;
                        int *l_4816 = (void*)0;
                        int *l_4817 = &l_4494;
                        int *l_4818 = &l_4787;
                        int *l_4819 = &l_4512;
                        int *l_4820 = &l_4065;
                        int *l_4821 = &l_4559;
                        int *l_4822 = (void*)0;
                        int *l_4824 = &l_4559;
                        int *l_4825 = (void*)0;
                        int *l_4826 = &l_4366;
                        int *l_4827 = &l_4602;
                        int *l_4828 = &l_4788;
                        int *l_4829 = &l_4823;
                        int *l_4830 = &g_2606;
                        int *l_4831 = &l_4381;
                        int *l_4832 = (void*)0;
                        int *l_4833 = &l_4744;
                        int *l_4834 = &l_4823;
                        int *l_4835 = &l_4722;
                        int *l_4836 = &l_4764;
                        int *l_4837 = &l_4664;
                        int *l_4838 = &l_3784;
                        int *l_4839 = &g_103;
                        int *l_4840 = (void*)0;
                        int *l_4841 = &l_4337;
                        int *l_4842 = (void*)0;
                        int *l_4843 = &g_103;
                        int *l_4844 = &l_4664;
                        int *l_4845 = &l_4722;
                        int *l_4846 = &l_4515;
                        int *l_4847 = &l_4764;
                        int *l_4848 = &l_4494;
                        int *l_4849 = (void*)0;
                        int *l_4850 = (void*)0;
                        int *l_4851 = &l_4744;
                        int *l_4852 = &l_4725;
                        int *l_4853 = &l_4613;
                        int *l_4854 = &l_4366;
                        int *l_4855 = (void*)0;
                        int *l_4856 = &g_161;
                        int *l_4859 = &l_4857;
                        int *l_4860 = (void*)0;
                        int *l_4861 = &l_4494;
                        int *l_4862 = &l_4348;
                        int l_4863 = 0xC6DCA7FDL;
                        int *l_4864 = &l_4823;
                        int *l_4865 = &l_4381;
                        int *l_4867 = &g_1791;
                        int *l_4868 = &l_4492;
                        int *l_4869 = &l_4494;
                        int l_4870 = 0L;
                        int *l_4871 = &l_4515;
                        int *l_4872 = &l_4764;
                        int *l_4873 = (void*)0;
                        int *l_4874 = (void*)0;
                        int *l_4875 = (void*)0;
                        int *l_4876 = &l_4764;
                        int *l_4877 = &l_4788;
                        int *l_4878 = (void*)0;
                        int *l_4879 = &l_4744;
                        int *l_4880 = &l_4602;
                        int *l_4881 = (void*)0;
                        int *l_4882 = &l_4065;
                        int *l_4883 = (void*)0;
                        int *l_4884 = &l_4547;
                        int *l_4885 = (void*)0;
                        int *l_4887 = &l_4348;
                        int *l_4888 = &l_4515;
                        int *l_4889 = &l_4381;
                        int *l_4890 = (void*)0;
                        int *l_4891 = &l_4348;
                        int *l_4892 = &l_4002;
                        int *l_4893 = (void*)0;
                        int *l_4894 = &l_4559;
                        int *l_4895 = &l_4664;
                        int *l_4896 = (void*)0;
                        int *l_4897 = &l_4744;
                        int *l_4898 = &l_4512;
                        int *l_4899 = &l_4664;
                        int *l_4900 = &l_4722;
                        int *l_4901 = &l_4337;
                        int *l_4902 = &l_4744;
                        int *l_4903 = &l_4744;
                        int *l_4904 = &l_4722;
                        int *l_4905 = &l_4547;
                        int *l_4906 = (void*)0;
                        int *l_4907 = &l_4348;
                        int *l_4908 = &g_12;
                        int *l_4909 = &g_103;
                        int *l_4910 = &l_4341;
                        int *l_4911 = &l_4065;
                        int *l_4912 = &l_4823;
                        int *l_4913 = &l_4213;
                        int *l_4914 = &l_4065;
                        int *l_4915 = &l_4870;
                        int *l_4916 = (void*)0;
                        int *l_4917 = (void*)0;
                        int *l_4918 = &l_4886;
                        int *l_4919 = (void*)0;
                        (*l_4424) = &g_4436;

                        ;
                        l_4920--;
                        if ((*g_3713))
                            break;
                    }

                    ;
                    ++l_5030;
                    (*l_5002) ^= ((*l_4945) = (~0x13B41963L));
                }

                ;
                ;
                (*l_4323) = g_692.f2;
                return (**g_1339);

                            }
            if (((*l_4323) = l_4065))
            {
                short *l_5034 = &g_1954;
                short **l_5033 = &l_5034;
                unsigned short **l_5036 = &g_3916;
                unsigned short **l_5037 = &g_67;
                int l_5048 = 0L;
                g_283 = (((((**g_471) > (*l_4323)) ^ ((****g_1861) != ((*l_4450) , ((*l_5033) = (****g_1861))))) && l_5030) , g_5035);

                ;
                (*l_4323) = ((((func_25((**g_107), ((*l_5036) = &g_68), ((*l_5037) = &g_81), (safe_rshift_func_int16_t_s_s((g_2045.f1 == (safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((*l_4323), (((((((safe_mod_func_int16_t_s_s(((*g_2104) == ((!g_4403) ^ (((safe_add_func_int8_t_s_s((((0x84L & (8L == 255UL)) , l_5048) , l_5049), l_3784)) != l_5050) | (***g_477)))), 7UL)) , (*l_4285)) != l_5051) , l_5052) == g_2102.f2) & l_4071) ^ g_68))), (**g_471)))), (*l_4323))), l_5053) ^ l_5048) , g_1795.f0) || l_5054) < (*l_4323));

                ;
                return (*g_1340);

                            }
            else
            {
                unsigned char ***l_5056 = &l_5055;
                int l_5057 = (-1L);
                int *l_5058 = (void*)0;
                int *l_5059 = &g_161;
                int *l_5060 = &g_2606;
                int *l_5061 = &l_4366;
                int *l_5062 = &g_103;
                int *l_5063 = &l_4613;
                int *l_5064 = &l_4494;
                int *l_5065 = &g_103;
                int *l_5066 = &l_4284;
                int *l_5067 = (void*)0;
                int *l_5068 = &g_12;
                int *l_5069 = &l_5057;
                int *l_5070 = &g_161;
                int *l_5071 = &l_4400;
                unsigned char l_5072 = 1UL;
                (*l_5056) = l_5055;
                (*l_4424) = &l_4547;

                ;
                --l_5072;
            }

            ;
        }
        else
        {
            unsigned short **l_5075 = &g_3916;
            int *l_5076 = (void*)0;
            int *l_5077 = &l_4348;
            int *l_5078 = (void*)0;
            int *l_5079 = &l_4337;
            int *l_5080 = &g_103;
            int *l_5081 = &g_12;
            int *l_5082 = &l_4002;
            int *l_5083 = (void*)0;
            int l_5085 = 1L;
            int *l_5086 = &g_4436;
            int *l_5087 = (void*)0;
            int *l_5088 = &g_1791;
            int *l_5089 = &g_1791;
            int l_5090 = 0x25082AB9L;
            int *l_5091 = &g_161;
            int *l_5092 = &l_4213;
            int *l_5093 = (void*)0;
            int *l_5094 = &l_4051;
            int *l_5096 = &l_4337;
            int *l_5097 = (void*)0;
            int *l_5098 = &g_2606;
            int *l_5099 = (void*)0;
            int *l_5100 = &l_4348;
            int *l_5101 = &l_4071;
            int *l_5102 = &g_161;
            int *l_5103 = (void*)0;
            int *l_5104 = &l_4213;
            int *l_5105 = &l_4348;
            int *l_5106 = &l_4337;
            int *l_5107 = &l_4337;
            int *l_5108 = (void*)0;
            int *l_5109 = (void*)0;
            int *l_5110 = (void*)0;
            int *l_5111 = &l_4213;
            int *l_5112 = &l_3784;
            int *l_5113 = &l_4002;
            int *l_5114 = &l_4337;
            int *l_5115 = &g_103;
            int *l_5116 = &l_4348;
            int *l_5117 = &l_4051;
            int *l_5118 = &l_4051;
            int *l_5119 = &g_12;
            int *l_5120 = &l_4002;
            int *l_5121 = &g_4436;
            int *l_5122 = &l_4213;
            int *l_5123 = &l_4337;
            int *l_5124 = (void*)0;
            int *l_5125 = &g_103;
            int *l_5126 = &l_4071;
            int *l_5127 = (void*)0;
            int *l_5128 = (void*)0;
            int *l_5129 = &l_4348;
            int l_5130 = 0x4DB71807L;
            int *l_5131 = &g_1791;
            int *l_5132 = &l_4348;
            int *l_5133 = (void*)0;
            int *l_5134 = &l_5090;
            int *l_5135 = &g_103;
            int *l_5136 = &l_5130;
            int *l_5137 = &l_4071;
            int *l_5138 = (void*)0;
            int *l_5139 = &l_4341;
            int *l_5140 = &l_3784;
            int *l_5141 = &l_4341;
            int l_5142 = 0L;
            (*l_5077) = (l_3784 , func_44(((*l_4424) = &g_12), &g_161, ((*l_5075) = &g_81)));

            ;
            ;
            l_5143++;
        }

        ;

        ;
        if ((((((func_44(&g_12, &l_4002, l_4438) < 1L) && 0x95L) >= g_5035.f2) | 8L) && l_2910))
        {
            unsigned char **l_5156 = &g_1426;
            int *l_5158 = &l_4051;
            g_5157 = l_5156;

            ;
            (*l_5158) = 0x68283E3AL;
        }
        else
        {
            char l_5164 = 0x69L;
            union U1 ****l_5165 = &l_4462;
            unsigned char *l_5168 = &g_154;
            unsigned short *l_5170 = (void*)0;
            unsigned short **l_5171 = &l_4438;
            int l_5185 = 0x6AC67FB8L;
            int l_5211 = 0x3E6A39B1L;
            int l_5371 = 0x05B0FA35L;
            int l_5383 = 0x594131AAL;
            int l_5674 = 0L;
            int l_5745 = 0xB0CADFB1L;
            int l_5778 = 0xC8CDAB0BL;
            char l_5831 = 1L;
            int *l_5839 = &l_5745;
            unsigned short l_5865 = 1UL;
            int l_6034 = 1L;
            int l_6067 = 4L;
            g_3713 = func_38((!(+((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((****g_3715), 7)), (l_5163 , ((l_5164 , l_5165) == &g_1338)))) ^ g_498.f0))), (func_25(((safe_rshift_func_int16_t_s_u(func_25((*g_3728), ((((*l_5168) = l_4065) && (***g_3716)) , l_5169), l_5170, g_2093.f2, g_2890.f2), l_5164)) , (*g_1340)), &g_3075, &g_3075, g_2093.f2, l_2) && 1L), (***g_3716), g_1795.f2, (**g_2103));


            ;
            l_3784 = ((((void*)0 == &g_1862) < (*g_1440)) && (****g_3715));
            for (l_4530 = 0; (l_4530 <= (-4)); --l_4530)
            {
                int *l_5180 = &l_4213;
                (*l_5180) ^= g_5176.f0;
            }
            if (g_498.f0)
            {
                char l_5181 = 0x80L;
                union U1 l_5182 = {0x6AL};
                unsigned *l_5183 = &g_592;
                int *l_5184 = &g_1791;
                int *l_5186 = &l_4348;
                int *l_5187 = &g_103;
                int *l_5188 = &l_3784;
                int *l_5189 = &l_3784;
                int *l_5190 = (void*)0;
                int *l_5191 = &g_2606;
                int *l_5192 = &g_103;
                int *l_5193 = &g_161;
                int *l_5194 = &l_4002;
                int *l_5195 = &l_4284;
                int *l_5196 = &l_4002;
                int *l_5197 = (void*)0;
                int l_5198 = 0xA9066674L;
                int *l_5199 = (void*)0;
                int *l_5200 = &l_5198;
                int *l_5201 = (void*)0;
                int *l_5202 = &g_2606;
                int *l_5203 = &l_5198;
                int *l_5204 = &l_5095;
                int *l_5205 = &l_5095;
                int *l_5206 = (void*)0;
                int *l_5207 = &l_4337;
                int *l_5208 = (void*)0;
                int *l_5209 = (void*)0;
                int *l_5210 = (void*)0;
                int *l_5212 = (void*)0;
                int *l_5213 = &l_4065;
                int l_5214 = (-3L);
                int *l_5215 = &g_161;
                int *l_5216 = &l_5095;
                int *l_5217 = &l_4337;
                int *l_5218 = (void*)0;
                int *l_5219 = &l_5211;
                int *l_5220 = &l_4284;
                int *l_5221 = (void*)0;
                int *l_5222 = &l_4400;
                int *l_5223 = &l_5095;
                int *l_5224 = &g_2606;
                int *l_5225 = (void*)0;
                int *l_5226 = &l_4337;
                int *l_5227 = (void*)0;
                int *l_5228 = &l_4341;
                int *l_5229 = (void*)0;
                int *l_5230 = &l_4400;
                int *l_5231 = &g_1791;
                int *l_5232 = &l_5198;
                int *l_5233 = &l_5095;
                int *l_5234 = (void*)0;
                int *l_5235 = &l_4400;
                int *l_5236 = &l_4051;
                int *l_5237 = &l_5198;
                int *l_5238 = &l_4002;
                int *l_5239 = &g_1791;
                unsigned short *l_5248 = &l_5240;
                (*l_5184) = (((*g_472) = l_5181) ^ (((func_25(l_5182, &g_59, &g_3075, l_5155, ((*l_5183) = l_5164)) <= (l_5052 || ((**g_1439) && (***g_1438)))) & l_5182.f0) && 0x81L));
                (*l_5184) |= l_5185;
                l_5240--;
                for (l_4199 = 0; (l_4199 > (-18)); l_4199 = safe_sub_func_uint8_t_u_u(l_4199, 1))
                {
                    union U1 l_5247 = {0L};
                    unsigned char ***l_5249 = &l_5055;
                    (*l_4424) = func_48(g_1364, (safe_mod_func_int8_t_s_s(((**g_2103) | ((*l_5154) = (((func_25(l_5247, &l_5240, l_5248, l_5030, l_5164) , l_5249) != (void*)0) ^ (-3L)))), l_5185)), &l_5030);

                    ;
                    ;
                    (*l_5216) &= (((safe_mod_func_uint32_t_u_u(l_5211, 0xA15D18DBL)) ^ ((***g_3716) > ((func_25(l_5182, &g_3075, (((*l_5186) <= (func_25((**g_1339), &l_5030, l_5252, (**l_4424), g_142) != l_5164)) , &g_20), g_1368.f1, l_5211) >= l_4071) && (*g_2104)))) >= l_5164);
                    if ((*g_3713))
                        continue;
                    if ((((void*)0 != l_5055) ^ (safe_sub_func_int8_t_s_s(((~(*g_3916)) > ((**l_4424) == (l_5211 = (safe_mod_func_int8_t_s_s(l_5247.f0, ((****g_3715) = (***g_3716))))))), (g_5257 , l_5247.f0)))))
                    {
                        unsigned short *l_5258 = &l_5240;
                        struct S0 *l_5262 = &g_2890;
                        (*l_5262) = func_32(&g_59, l_5258, g_1333.f2, (safe_unary_minus_func_int16_t_s((safe_lshift_func_uint16_t_u_u(func_25(l_5247, (*l_5171), &g_81, g_666.f2, g_2093.f0), 15)))), &g_59);

                        ;
                        (*g_3713) ^= ((safe_sub_func_int16_t_s_s((*l_5224), l_5211)) >= (l_4348 <= ((*l_5203) = 1L)));
                        (*l_5262) = g_5265;
                        if ((*g_3713))
                            continue;
                    }
                    else
                    {
                        int *l_5266 = &g_4436;
                        int *l_5273 = &l_5163;
                        if ((*g_3713))
                            break;
                        (*l_5202) ^= (func_44(l_5266, &l_4348, &l_5030) | ((safe_lshift_func_uint8_t_u_u(l_5185, 1)) & (((*g_3916) >= (((*l_5273) = (safe_mul_func_uint16_t_u_u(9UL, ((((safe_rshift_func_int16_t_s_s((l_5247 , 0L), 12)) >= 0x6148457CL) , l_5211) >= l_2)))) , (*g_3916))) < g_283.f2)));
                    }
                }

                ;
                ;
            }
            else
            {
                unsigned short l_5278 = 65528UL;
                union U1 ***l_5281 = &g_1339;
                int l_5321 = 0xC4A13448L;
                int l_5380 = 1L;
                unsigned char l_5834 = 1UL;
                int l_5840 = 4L;
                int l_6035 = 0L;
                struct S0 *l_6102 = &g_3361;
                for (l_2 = 22; (l_2 > (-13)); l_2 = safe_sub_func_uint8_t_u_u(l_2, 6))
                {
                    int l_5282 = 0L;
                    unsigned l_5283 = 0x001E522DL;
                    int *l_5288 = &l_4337;
                    int l_5313 = 0x9EB63572L;
                    int l_5331 = 0xF0174973L;
                    int l_5343 = (-1L);
                    int l_5390 = (-1L);
                    int l_5409 = 0x32917AACL;
                    unsigned short l_5476 = 0UL;
                    union U1 l_5479 = {-1L};
                    unsigned char l_5773 = 0UL;
                    int *l_5779 = &l_5155;
                    for (g_68 = (-14); (g_68 <= 51); ++g_68)
                    {
                        return (****l_5165);

                                            }
                    if ((l_5278 , (safe_mod_func_uint8_t_u_u((l_5281 != (((l_5282 & l_5283) , (safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((func_44((l_5283 , l_5288), &g_2606, &l_5240) > g_143), l_5185)), 0xC0L))) , l_5281)), l_5278))))
                    {
                        struct S0 *l_5289 = (void*)0;
                        struct S0 *l_5290 = &g_2082;
                        int *l_5292 = &g_161;
                        int *l_5293 = &l_4071;
                        int *l_5294 = &l_4002;
                        int *l_5295 = &l_4284;
                        int *l_5296 = (void*)0;
                        int *l_5297 = &l_4341;
                        int *l_5298 = &g_103;
                        int *l_5299 = &l_4065;
                        int *l_5300 = &l_4341;
                        int *l_5301 = &l_4284;
                        int *l_5302 = &l_4213;
                        int *l_5303 = &l_4337;
                        int *l_5304 = &l_3784;
                        int *l_5305 = (void*)0;
                        int *l_5306 = &l_4213;
                        int *l_5307 = &l_4213;
                        int *l_5308 = &l_4348;
                        int *l_5309 = &l_4002;
                        int *l_5310 = &g_4436;
                        int *l_5311 = (void*)0;
                        int *l_5312 = &l_5211;
                        int *l_5314 = (void*)0;
                        int *l_5315 = &g_161;
                        int *l_5316 = &g_2606;
                        int *l_5317 = &l_3784;
                        int *l_5318 = (void*)0;
                        int *l_5319 = &l_5211;
                        int *l_5320 = &l_4002;
                        int *l_5322 = (void*)0;
                        int *l_5323 = (void*)0;
                        int *l_5324 = &l_5321;
                        int *l_5325 = &g_2606;
                        int *l_5326 = &g_12;
                        int *l_5327 = &l_4341;
                        int *l_5328 = (void*)0;
                        int *l_5329 = &l_4051;
                        int *l_5330 = &l_5211;
                        int *l_5332 = &l_4284;
                        int *l_5333 = &l_4341;
                        int *l_5334 = &l_4002;
                        int *l_5335 = &l_3784;
                        int *l_5336 = &l_4400;
                        int *l_5337 = &l_4065;
                        int *l_5338 = &l_4400;
                        int *l_5339 = &l_5331;
                        int *l_5340 = &g_4436;
                        int *l_5341 = &l_4071;
                        int *l_5342 = (void*)0;
                        int *l_5344 = &l_4065;
                        int *l_5345 = &l_4341;
                        int *l_5346 = &l_5313;
                        int *l_5347 = &l_5331;
                        int *l_5348 = &l_4400;
                        int *l_5349 = (void*)0;
                        int *l_5350 = &l_4341;
                        int *l_5351 = &l_5313;
                        int *l_5352 = &g_1791;
                        int *l_5353 = &l_4337;
                        int *l_5354 = &l_4400;
                        int *l_5355 = (void*)0;
                        int *l_5356 = &g_2606;
                        int *l_5357 = &g_12;
                        int *l_5358 = (void*)0;
                        int *l_5359 = &l_4400;
                        int *l_5360 = &g_161;
                        int *l_5361 = &l_5331;
                        int *l_5362 = &l_5321;
                        int *l_5363 = &g_1791;
                        int *l_5364 = &l_4400;
                        int *l_5365 = &g_1791;
                        int *l_5366 = &l_4284;
                        int *l_5367 = &g_161;
                        int *l_5368 = &l_4284;
                        int *l_5369 = &l_5313;
                        int *l_5370 = (void*)0;
                        int *l_5372 = &g_1791;
                        int *l_5373 = &l_3784;
                        int *l_5374 = &g_161;
                        int *l_5375 = &g_2606;
                        int *l_5376 = (void*)0;
                        int *l_5377 = &l_4065;
                        int *l_5378 = &l_3784;
                        int *l_5379 = (void*)0;
                        int *l_5381 = &l_4071;
                        int *l_5382 = &l_4065;
                        int *l_5384 = &l_5343;
                        int *l_5385 = &l_5383;
                        int *l_5386 = &l_4065;
                        int *l_5387 = &l_5343;
                        int *l_5388 = (void*)0;
                        int *l_5389 = &l_4341;
                        int l_5391 = 1L;
                        int *l_5392 = &l_4400;
                        int *l_5393 = &l_4071;
                        int *l_5394 = (void*)0;
                        int *l_5395 = &l_4337;
                        int *l_5396 = &l_5390;
                        int *l_5397 = (void*)0;
                        int *l_5398 = (void*)0;
                        int *l_5399 = &l_4348;
                        int *l_5400 = &l_5343;
                        int *l_5401 = &g_2606;
                        int *l_5402 = &l_5380;
                        int *l_5403 = &l_5383;
                        int *l_5404 = &g_161;
                        int *l_5405 = &g_2606;
                        int *l_5406 = &l_3784;
                        int *l_5407 = &g_12;
                        int *l_5408 = &l_4051;
                        int *l_5410 = &l_4348;
                        int *l_5411 = (void*)0;
                        int *l_5412 = &l_4337;
                        int *l_5413 = &l_5371;
                        int *l_5414 = (void*)0;
                        int *l_5415 = (void*)0;
                        int *l_5416 = &l_5095;
                        int *l_5417 = &l_5383;
                        int *l_5418 = &l_5391;
                        int *l_5419 = &g_103;
                        int *l_5420 = &l_3784;
                        int *l_5421 = (void*)0;
                        int *l_5422 = &g_161;
                        int *l_5423 = &g_4436;
                        int *l_5424 = &l_5095;
                        int *l_5425 = &l_5331;
                        int *l_5426 = (void*)0;
                        int *l_5427 = &g_4436;
                        int *l_5428 = &l_5380;
                        int *l_5429 = &l_4213;
                        int *l_5430 = &g_1791;
                        int *l_5431 = &l_4065;
                        int *l_5432 = &l_5331;
                        int *l_5433 = &g_161;
                        int *l_5434 = &l_5331;
                        int *l_5435 = &l_5211;
                        int *l_5436 = &l_4071;
                        int *l_5437 = &l_4065;
                        int *l_5438 = &l_5380;
                        int *l_5439 = &l_5095;
                        int *l_5440 = &l_4002;
                        int *l_5441 = &l_4400;
                        int *l_5442 = &g_161;
                        int *l_5443 = &l_5321;
                        int *l_5444 = &l_4341;
                        int *l_5445 = &l_4400;
                        int *l_5446 = &l_4284;
                        int *l_5447 = &l_4002;
                        int *l_5448 = (void*)0;
                        int *l_5449 = &l_4213;
                        int *l_5450 = (void*)0;
                        int *l_5451 = &l_4213;
                        int *l_5452 = (void*)0;
                        int *l_5453 = &g_4436;
                        int *l_5454 = &l_4213;
                        int *l_5455 = &l_5211;
                        int *l_5456 = &l_5409;
                        int *l_5457 = &l_5343;
                        int *l_5458 = (void*)0;
                        int *l_5459 = (void*)0;
                        int *l_5460 = &g_1791;
                        int *l_5461 = &l_5095;
                        int *l_5462 = &l_4400;
                        int *l_5463 = &g_4436;
                        int *l_5464 = (void*)0;
                        int *l_5465 = &l_5095;
                        int *l_5466 = &l_4071;
                        int *l_5467 = &l_5331;
                        int *l_5468 = &l_5409;
                        int *l_5469 = &l_4071;
                        int *l_5470 = &l_4348;
                        int *l_5471 = &l_4400;
                        int *l_5472 = &l_5343;
                        int *l_5473 = &l_4341;
                        int *l_5474 = &l_4002;
                        int *l_5475 = &l_5095;
                        (*l_5290) = g_1309;
                        (*l_5290) = g_5291;
                        --l_5476;
                        (*l_5404) = (((*g_472) |= 0L) & func_25(l_5479, (g_2076.f0 , ((*l_5171) = &l_5240)), &g_68, l_5321, func_25((***l_4462), &g_81, &l_5476, (*l_5288), g_100.f1)));

                        ;
                    }
                    else
                    {
                        unsigned short l_5480 = 65535UL;
                        int *l_5481 = &l_5343;
                        int *l_5482 = &l_5371;
                        int *l_5483 = &g_103;
                        int *l_5484 = &l_5211;
                        int *l_5485 = &g_12;
                        int *l_5486 = &g_161;
                        int *l_5487 = &l_5321;
                        int *l_5488 = &l_5313;
                        int *l_5489 = &l_4400;
                        int *l_5490 = (void*)0;
                        int *l_5491 = &g_2606;
                        int *l_5492 = (void*)0;
                        int *l_5493 = &l_5321;
                        int *l_5494 = (void*)0;
                        int *l_5495 = &g_2606;
                        int *l_5496 = &l_5383;
                        int *l_5497 = &g_4436;
                        int *l_5498 = &l_5095;
                        int *l_5499 = &l_4071;
                        int *l_5500 = (void*)0;
                        int *l_5501 = &l_5313;
                        int *l_5502 = &l_5321;
                        int *l_5503 = &g_2606;
                        int *l_5504 = &l_4348;
                        int *l_5505 = &g_12;
                        int *l_5506 = &l_4071;
                        int *l_5507 = (void*)0;
                        int *l_5508 = &l_4051;
                        int *l_5509 = &l_5095;
                        int *l_5510 = (void*)0;
                        int *l_5511 = &g_161;
                        int *l_5512 = &l_4284;
                        int *l_5513 = &l_4065;
                        int *l_5514 = &g_103;
                        int *l_5515 = &g_2606;
                        int *l_5516 = &l_4400;
                        int *l_5517 = &l_3784;
                        int *l_5518 = &g_12;
                        int *l_5519 = &l_4341;
                        int *l_5520 = &g_1791;
                        int *l_5521 = &l_5313;
                        int *l_5522 = &l_5095;
                        int *l_5523 = &l_5211;
                        int *l_5524 = &l_4002;
                        int *l_5525 = &g_2606;
                        int *l_5526 = &l_5409;
                        int *l_5527 = &l_5390;
                        int *l_5528 = &l_5321;
                        int *l_5529 = (void*)0;
                        int *l_5530 = &g_103;
                        int *l_5531 = &l_4348;
                        int *l_5532 = (void*)0;
                        int *l_5533 = &l_4213;
                        int *l_5534 = (void*)0;
                        int *l_5535 = (void*)0;
                        int *l_5536 = &g_1791;
                        int *l_5537 = &l_5390;
                        int *l_5538 = &l_5343;
                        int *l_5539 = &l_5095;
                        int *l_5540 = &l_5095;
                        int *l_5541 = &l_5343;
                        int *l_5542 = &l_5409;
                        int *l_5543 = &l_5321;
                        int *l_5544 = &l_4348;
                        int *l_5545 = (void*)0;
                        int *l_5546 = &l_4213;
                        int *l_5547 = &l_5343;
                        int *l_5548 = &g_4436;
                        int *l_5549 = &l_5321;
                        int *l_5550 = &l_5380;
                        int *l_5551 = &g_103;
                        int *l_5552 = &l_5331;
                        int *l_5553 = &l_5371;
                        int *l_5554 = &l_4002;
                        int *l_5555 = &l_4284;
                        int *l_5556 = &l_5331;
                        int *l_5557 = &l_4400;
                        int *l_5558 = (void*)0;
                        int *l_5559 = &l_5343;
                        int *l_5560 = (void*)0;
                        int *l_5561 = &g_12;
                        int *l_5562 = &l_4400;
                        int *l_5563 = (void*)0;
                        int *l_5564 = &l_5331;
                        int *l_5565 = &l_5390;
                        int *l_5566 = &l_4065;
                        int *l_5567 = &l_5321;
                        int *l_5568 = &l_4051;
                        int *l_5569 = &g_103;
                        int l_5570 = 0x8736411AL;
                        int *l_5571 = &l_4400;
                        int *l_5572 = &l_5390;
                        int *l_5573 = &g_12;
                        int *l_5574 = &l_4400;
                        int *l_5575 = &l_4213;
                        int *l_5576 = &g_4436;
                        int *l_5577 = (void*)0;
                        int *l_5578 = &l_5570;
                        int *l_5579 = (void*)0;
                        int l_5580 = 0x38FC7AF8L;
                        int *l_5581 = &g_1791;
                        int *l_5582 = &l_4341;
                        int *l_5583 = &l_4284;
                        int *l_5584 = &l_5095;
                        int *l_5585 = &l_4213;
                        int *l_5586 = &l_4002;
                        int *l_5587 = &g_103;
                        int *l_5588 = &l_5343;
                        int *l_5589 = (void*)0;
                        int *l_5590 = &l_5570;
                        int *l_5591 = &l_4348;
                        int *l_5592 = &l_4213;
                        int *l_5593 = &l_4400;
                        int *l_5594 = &l_4051;
                        int l_5595 = 0xAA4C3FBDL;
                        int *l_5596 = &l_4337;
                        int *l_5597 = (void*)0;
                        int *l_5598 = &g_2606;
                        int *l_5599 = &g_161;
                        int *l_5600 = (void*)0;
                        int *l_5601 = &l_4051;
                        int *l_5602 = &l_4065;
                        int *l_5603 = (void*)0;
                        int *l_5604 = &l_5383;
                        int *l_5605 = &l_5380;
                        int *l_5606 = &l_4002;
                        int *l_5607 = &l_4071;
                        int *l_5608 = &l_4071;
                        int *l_5609 = &l_5313;
                        int *l_5610 = (void*)0;
                        int *l_5611 = &l_5313;
                        int *l_5612 = &l_4400;
                        int *l_5613 = &g_103;
                        int *l_5614 = &l_5331;
                        int *l_5615 = &l_5321;
                        int *l_5616 = &l_4337;
                        int *l_5617 = (void*)0;
                        int *l_5618 = &l_4400;
                        int *l_5619 = &l_4337;
                        int *l_5620 = &l_5313;
                        int *l_5621 = &l_4051;
                        int *l_5622 = &g_2606;
                        int *l_5623 = &l_4284;
                        int *l_5624 = &l_5409;
                        int *l_5625 = &l_4065;
                        int *l_5626 = (void*)0;
                        int *l_5627 = &l_4065;
                        int *l_5628 = &l_5211;
                        int *l_5629 = &l_5580;
                        int *l_5630 = &l_4284;
                        int *l_5631 = (void*)0;
                        int *l_5632 = &g_161;
                        int *l_5633 = (void*)0;
                        int *l_5634 = (void*)0;
                        int *l_5635 = &l_5580;
                        int *l_5636 = &l_5595;
                        int *l_5637 = (void*)0;
                        int *l_5638 = &g_4436;
                        int *l_5639 = (void*)0;
                        int *l_5640 = &l_5331;
                        int *l_5641 = &l_5570;
                        int *l_5642 = &l_4071;
                        int *l_5643 = &g_12;
                        int *l_5644 = &l_4348;
                        int *l_5645 = &l_4071;
                        int *l_5646 = &l_5383;
                        int *l_5647 = &g_2606;
                        int *l_5648 = (void*)0;
                        int *l_5649 = &l_4284;
                        int *l_5650 = &l_5331;
                        int *l_5651 = &l_4284;
                        int *l_5652 = &g_103;
                        int *l_5653 = &l_4337;
                        int *l_5654 = &l_4213;
                        int *l_5655 = &l_4284;
                        int *l_5656 = &l_4051;
                        int *l_5657 = &l_3784;
                        int *l_5658 = &l_5570;
                        int *l_5659 = &g_1791;
                        int *l_5660 = &l_4341;
                        int *l_5661 = &l_4284;
                        int *l_5662 = &l_5371;
                        int *l_5663 = (void*)0;
                        int *l_5664 = (void*)0;
                        int *l_5665 = &l_4284;
                        int *l_5666 = (void*)0;
                        int *l_5667 = &l_4348;
                        int *l_5668 = &l_4348;
                        int *l_5669 = &l_4002;
                        int *l_5670 = &l_5570;
                        int *l_5671 = &l_5321;
                        int *l_5672 = (void*)0;
                        int *l_5673 = &g_1791;
                        int *l_5675 = &g_103;
                        int *l_5676 = &g_103;
                        int *l_5677 = &l_4284;
                        int *l_5678 = &l_4337;
                        int *l_5679 = (void*)0;
                        int *l_5680 = &g_103;
                        int *l_5681 = &g_12;
                        int *l_5682 = &l_4284;
                        int *l_5683 = (void*)0;
                        int *l_5684 = &l_4341;
                        int *l_5685 = &g_161;
                        int *l_5686 = &l_5095;
                        int *l_5687 = &l_3784;
                        int *l_5688 = &l_5383;
                        int *l_5689 = &l_5390;
                        int *l_5690 = &l_5580;
                        int *l_5691 = &l_5380;
                        int *l_5692 = &l_3784;
                        int *l_5693 = &g_1791;
                        int *l_5694 = &l_4348;
                        int *l_5695 = (void*)0;
                        int *l_5696 = (void*)0;
                        int *l_5697 = &l_5211;
                        int *l_5698 = &l_5321;
                        int *l_5699 = &l_4341;
                        int *l_5700 = &g_103;
                        int *l_5701 = &g_4436;
                        int *l_5702 = &l_3784;
                        int *l_5703 = (void*)0;
                        int *l_5704 = &l_5383;
                        int *l_5705 = &l_4337;
                        int *l_5706 = &l_5371;
                        int *l_5707 = &l_4051;
                        int *l_5708 = &l_5380;
                        int *l_5709 = (void*)0;
                        int *l_5710 = (void*)0;
                        int *l_5711 = &l_4341;
                        int *l_5712 = &g_4436;
                        int *l_5713 = &l_5371;
                        int *l_5714 = &l_5313;
                        int *l_5715 = (void*)0;
                        int *l_5716 = &l_5371;
                        int *l_5717 = &l_4002;
                        int *l_5718 = &l_5321;
                        int *l_5719 = &l_5343;
                        int *l_5720 = (void*)0;
                        int *l_5721 = &l_5595;
                        int *l_5722 = &l_5343;
                        int *l_5723 = (void*)0;
                        int *l_5724 = &l_5095;
                        int *l_5725 = &g_12;
                        int *l_5726 = &l_5321;
                        int *l_5727 = &g_4436;
                        int *l_5728 = (void*)0;
                        int *l_5729 = &l_3784;
                        int *l_5730 = &l_5383;
                        int *l_5731 = &l_5674;
                        int *l_5732 = &l_5371;
                        int *l_5733 = &l_5371;
                        int *l_5734 = &l_4071;
                        int l_5735 = 0x6E3E45BBL;
                        int *l_5736 = &g_2606;
                        int *l_5737 = (void*)0;
                        int *l_5738 = &l_5321;
                        int *l_5739 = (void*)0;
                        int *l_5740 = &l_5409;
                        int *l_5741 = (void*)0;
                        int *l_5742 = &l_5321;
                        int *l_5743 = &l_4213;
                        int *l_5744 = (void*)0;
                        int *l_5746 = &l_5331;
                        int *l_5747 = &l_5380;
                        int *l_5748 = &l_4002;
                        int *l_5749 = (void*)0;
                        int *l_5750 = &l_5570;
                        int *l_5751 = &l_5745;
                        int *l_5752 = &l_5331;
                        int *l_5753 = &g_103;
                        int *l_5754 = &l_4348;
                        int *l_5755 = (void*)0;
                        int *l_5756 = (void*)0;
                        int *l_5757 = &l_4002;
                        int *l_5758 = (void*)0;
                        int *l_5759 = &l_5735;
                        int *l_5760 = &l_4400;
                        int *l_5761 = &l_5409;
                        int *l_5762 = &l_5313;
                        int *l_5763 = &l_4065;
                        int *l_5764 = &l_5674;
                        int *l_5765 = &l_5371;
                        int *l_5766 = &l_3784;
                        int *l_5767 = &g_103;
                        int *l_5768 = &l_5595;
                        int *l_5769 = (void*)0;
                        int *l_5770 = &l_4071;
                        int *l_5771 = (void*)0;
                        int *l_5772 = &l_4051;
                        (*l_5288) = l_5480;
                        ++l_5773;
                    }
                    (*l_5288) |= (safe_add_func_uint32_t_u_u(g_1350.f2, (+(((*l_5779) = func_25((**g_1339), &g_3075, (l_4341 , &l_5240), (l_5745 , 0UL), (0x8E12L == l_5778))) , l_5380))));
                    (***l_5165) = (*g_1339);
                }

                ;
                if (g_115.f1)
                {
                    unsigned l_5824 = 0xA0DE902BL;
                    struct S0 *l_5837 = &g_3168;
                    int l_5845 = 4L;
                    unsigned short *l_5850 = &l_5278;
                    for (l_4632 = 0; (l_4632 < 17); ++l_4632)
                    {
                        return (**g_107);

                                            }
                    (*l_4424) = &l_4348;

                    ;
                    if (l_5782)
                    {
                        int *l_5783 = &l_4400;
                        int *l_5784 = &l_4213;
                        int *l_5785 = &l_5383;
                        int *l_5786 = &l_5380;
                        int *l_5787 = &l_4341;
                        int *l_5788 = &l_4284;
                        int *l_5789 = &l_5674;
                        int *l_5790 = &l_3784;
                        int *l_5791 = &l_4284;
                        int *l_5792 = &l_5380;
                        int *l_5793 = &l_4071;
                        int *l_5794 = &l_4337;
                        int *l_5795 = &l_5383;
                        int *l_5796 = &g_4436;
                        int *l_5797 = &l_4348;
                        int *l_5798 = &l_4284;
                        int *l_5799 = &l_4348;
                        int *l_5800 = (void*)0;
                        int *l_5801 = &g_1791;
                        int *l_5802 = &l_5745;
                        int *l_5803 = &l_4071;
                        int *l_5804 = &l_5095;
                        int *l_5805 = (void*)0;
                        int *l_5806 = (void*)0;
                        int *l_5807 = &l_4065;
                        int *l_5808 = &l_5380;
                        int *l_5809 = &l_4341;
                        int *l_5810 = &g_2606;
                        int *l_5811 = (void*)0;
                        int *l_5812 = &l_4051;
                        int *l_5813 = &g_4436;
                        int *l_5814 = (void*)0;
                        int *l_5815 = &l_5371;
                        int *l_5816 = &l_4348;
                        int *l_5817 = (void*)0;
                        int *l_5818 = &l_4284;
                        int *l_5819 = &l_5095;
                        int l_5823 = (-8L);
                        l_5820++;
                        (*l_5812) |= ((**l_4424) , (**l_4424));
                        (*g_3713) |= l_5824;
                    }
                    else
                    {
                        unsigned *l_5825 = (void*)0;
                        unsigned *l_5826 = &l_5177;
                        int l_5838 = 0L;
                        l_5839 = func_48((--(*l_5826)), (((safe_rshift_func_uint8_t_u_s(l_5155, 2)) | (l_5831 && (((l_4065 = 0xB4D6L) , (*l_4274)) , (safe_add_func_int32_t_s_s(((void*)0 == (*l_5165)), ((l_5834 <= (safe_mul_func_int16_t_s_s(((l_5824 , &g_2076) == l_5837), l_5838))) , 4294967295UL)))))) != l_5824), &g_59);

                        ;
                        ;
                        (*l_5839) = l_5834;
                        (*l_5837) = func_32(&l_5240, ((*l_5171) = (*l_5171)), l_5840, (g_2950 = (safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(255UL, l_5824)), (((((l_5845 = l_5834) , (((l_5845 != ((safe_mul_func_int16_t_s_s(l_5845, (safe_add_func_int32_t_s_s((l_5838 < (**l_4424)), g_3361.f1)))) | (*g_472))) != l_5840) || (*g_472))) > 0xBCL) , 0x63L) >= l_5838)))), l_5850);

                        ;
                    }

                    ;
                    ;
                    ;
                }
                else
                {
                    int *l_5851 = &g_4436;
                    struct S0 *l_5868 = &g_3168;
                    unsigned short l_5870 = 8UL;
                    unsigned *l_5871 = &l_5177;
                    int *l_5876 = &l_5052;
                    int l_5907 = (-5L);
                    int l_6020 = 0L;
                    int l_6033 = (-2L);
                    (*l_4424) = l_5851;

                    ;
                    if ((+l_5834))
                    {
                        unsigned *l_5856 = (void*)0;
                        unsigned *l_5857 = &g_1086;
                        int l_5860 = (-3L);
                        int *l_5866 = &l_5095;
                        (*l_5866) ^= (safe_mul_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(((((((*l_5839) &= ((!func_44(&l_3784, ((++(*l_5857)) , &g_161), &l_5820)) == l_5860)) != ((((l_5861 == (g_592 , g_5863)) < l_5860) , 0UL) | l_5782)) , g_2175.f1) , (void*)0) != g_3759), 1UL)) , (**l_4424)), l_5865));
                        l_5851 = (l_5834 , ((*l_4424) = l_5867));

                        ;
                        ;
                    }
                    else
                    {
                        int *l_5869 = &l_5095;
                        (*g_3713) ^= (l_5868 != &g_1795);
                        (*l_4424) = (void*)0;

                        ;
                        l_5869 = &g_103;

                        ;
                    }

                    ;
                    ;
                    (*l_4424) = func_48(((*l_5871) |= (((*g_2104) , ((*l_5867) && 0x5F9FL)) != l_5870)), (((*l_4274) , (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(((*l_5154) = (*g_2104)), 6)), (((*l_5876) = g_3168.f2) , (safe_mod_func_int32_t_s_s(((**g_5863) && (g_5879 , (**g_5863))), (-3L))))))) && 0UL), &g_20);

                    ;
                    ;
                    if ((((*l_5851) >= (*l_5839)) <= 0xC7D6E713L))
                    {
                        (*l_5839) ^= (*g_3713);
                    }
                    else
                    {
                        int *l_5880 = &g_1791;
                        int *l_5881 = &l_4051;
                        int *l_5882 = &l_3784;
                        int *l_5883 = &l_5674;
                        int *l_5884 = &g_1791;
                        int *l_5885 = &g_1791;
                        int *l_5886 = (void*)0;
                        int *l_5887 = &l_5321;
                        int *l_5888 = &g_12;
                        int *l_5889 = &l_5383;
                        int *l_5890 = (void*)0;
                        int *l_5891 = (void*)0;
                        int *l_5892 = &l_4002;
                        int *l_5893 = &l_4284;
                        int *l_5894 = (void*)0;
                        int *l_5895 = &l_4002;
                        int *l_5896 = &l_5371;
                        int *l_5897 = &l_5321;
                        int *l_5898 = &l_4213;
                        int *l_5899 = &l_5095;
                        int *l_5901 = &l_5674;
                        int *l_5902 = (void*)0;
                        int *l_5903 = &l_5745;
                        int *l_5904 = &l_5095;
                        int l_5905 = 3L;
                        int *l_5906 = (void*)0;
                        int *l_5908 = &g_103;
                        int *l_5909 = &l_4051;
                        int *l_5910 = &l_5371;
                        int *l_5911 = (void*)0;
                        int *l_5912 = &l_4071;
                        int *l_5913 = &g_2606;
                        int *l_5914 = &l_4284;
                        int *l_5915 = &g_1791;
                        int *l_5916 = &g_1791;
                        int *l_5917 = (void*)0;
                        int *l_5918 = &l_3784;
                        int *l_5919 = (void*)0;
                        int *l_5920 = (void*)0;
                        int *l_5921 = &l_4341;
                        int *l_5922 = &l_5907;
                        int *l_5923 = (void*)0;
                        int *l_5924 = &l_4213;
                        int *l_5925 = &g_1791;
                        int *l_5926 = &l_4002;
                        int *l_5927 = &l_4002;
                        int *l_5928 = &l_4071;
                        int *l_5929 = &l_4051;
                        int *l_5930 = &l_4337;
                        int *l_5931 = &l_5321;
                        int *l_5932 = (void*)0;
                        int *l_5933 = &g_161;
                        int *l_5934 = &l_4348;
                        int *l_5935 = &l_4002;
                        int *l_5936 = &l_5674;
                        int *l_5937 = &l_4051;
                        int *l_5938 = &g_103;
                        int *l_5939 = &l_5095;
                        int *l_5940 = &l_4213;
                        int *l_5941 = &l_5905;
                        int *l_5942 = &l_5321;
                        int *l_5943 = &g_103;
                        int *l_5944 = &l_5371;
                        int *l_5945 = &g_103;
                        int *l_5946 = (void*)0;
                        int *l_5947 = &g_103;
                        int *l_5948 = &l_4348;
                        int *l_5949 = (void*)0;
                        int *l_5950 = &l_5211;
                        int *l_5951 = &l_5383;
                        int *l_5952 = &l_5745;
                        int *l_5953 = &g_103;
                        int *l_5954 = (void*)0;
                        int *l_5955 = &l_4051;
                        int *l_5956 = (void*)0;
                        int *l_5957 = &l_5905;
                        int *l_5958 = &l_4284;
                        int *l_5959 = &g_12;
                        int *l_5960 = &l_4341;
                        int *l_5961 = &l_4348;
                        int *l_5962 = &g_4436;
                        int *l_5963 = &g_1791;
                        int *l_5964 = &l_4400;
                        int *l_5965 = &l_5745;
                        int *l_5966 = &l_4065;
                        int *l_5967 = &l_4051;
                        int *l_5968 = &l_5211;
                        int *l_5969 = &l_5371;
                        int *l_5970 = &l_4051;
                        int *l_5971 = &g_12;
                        int *l_5972 = (void*)0;
                        int *l_5973 = &l_4213;
                        int *l_5974 = &l_4071;
                        int *l_5975 = (void*)0;
                        int *l_5976 = (void*)0;
                        int *l_5977 = (void*)0;
                        int *l_5978 = (void*)0;
                        int *l_5979 = &g_2606;
                        int *l_5980 = &l_4002;
                        int *l_5981 = &l_4341;
                        int *l_5982 = &l_4051;
                        int *l_5983 = (void*)0;
                        int *l_5984 = &l_3784;
                        int *l_5985 = &l_4337;
                        int l_5986 = 0x4A59180CL;
                        int *l_5987 = &g_161;
                        int *l_5988 = &l_4213;
                        int *l_5989 = &l_5383;
                        int *l_5990 = &l_5371;
                        int *l_5991 = &l_4071;
                        int *l_5992 = &l_4341;
                        int *l_5993 = &g_103;
                        int *l_5994 = &l_5905;
                        int l_5995 = 0x27CA5F8AL;
                        int *l_5996 = &l_4341;
                        int *l_5997 = &g_4436;
                        int *l_5998 = (void*)0;
                        int *l_5999 = &l_5674;
                        int *l_6000 = &l_4002;
                        int *l_6001 = &l_4348;
                        int *l_6002 = &l_5745;
                        int *l_6003 = &l_5095;
                        int *l_6004 = &l_4400;
                        int *l_6005 = (void*)0;
                        int *l_6006 = &l_4284;
                        int *l_6007 = &l_4071;
                        int *l_6008 = &l_5986;
                        int *l_6009 = &l_5995;
                        int *l_6010 = (void*)0;
                        int *l_6011 = &l_5905;
                        int *l_6012 = &l_4341;
                        int *l_6013 = &g_4436;
                        int *l_6014 = &l_4284;
                        int *l_6015 = &l_5995;
                        int *l_6016 = &l_5995;
                        int *l_6017 = &g_2606;
                        int *l_6018 = &l_4071;
                        int *l_6019 = &l_4400;
                        int *l_6021 = &l_5321;
                        int *l_6022 = (void*)0;
                        int *l_6023 = (void*)0;
                        int *l_6024 = &l_4002;
                        int *l_6025 = &l_6020;
                        int *l_6026 = (void*)0;
                        int *l_6027 = &l_4400;
                        int *l_6028 = &l_5907;
                        int *l_6029 = &l_4348;
                        int *l_6030 = (void*)0;
                        int *l_6031 = (void*)0;
                        int *l_6032 = &g_103;
                        int *l_6036 = &g_1791;
                        int *l_6037 = &l_4337;
                        int *l_6038 = &g_103;
                        int *l_6039 = &l_5995;
                        int *l_6040 = &g_2606;
                        int *l_6041 = &l_5383;
                        int *l_6042 = (void*)0;
                        int *l_6043 = &l_5383;
                        int *l_6044 = &l_5321;
                        int *l_6045 = &l_6020;
                        int *l_6046 = &l_3784;
                        int *l_6047 = &g_161;
                        int *l_6048 = (void*)0;
                        int *l_6049 = &l_3784;
                        int *l_6050 = (void*)0;
                        int *l_6051 = (void*)0;
                        int *l_6052 = &g_1791;
                        int l_6053 = 0x215DCD2AL;
                        int *l_6054 = &l_5095;
                        int *l_6055 = &l_5211;
                        int *l_6056 = &l_4065;
                        int *l_6057 = (void*)0;
                        int *l_6058 = &l_5986;
                        int *l_6059 = &l_5321;
                        int *l_6060 = &l_5905;
                        int *l_6061 = (void*)0;
                        int *l_6062 = &l_5907;
                        int *l_6063 = (void*)0;
                        int *l_6064 = &l_5383;
                        int *l_6065 = (void*)0;
                        int *l_6066 = (void*)0;
                        int *l_6068 = &l_6020;
                        int *l_6069 = &l_5380;
                        int *l_6070 = &g_12;
                        int *l_6071 = &l_4341;
                        int *l_6073 = &g_12;
                        int *l_6074 = &l_6033;
                        int *l_6075 = &l_6035;
                        int *l_6076 = &g_103;
                        int *l_6077 = &l_4341;
                        int *l_6078 = &l_4400;
                        int *l_6079 = &l_6034;
                        int *l_6080 = &g_103;
                        int *l_6081 = &g_1791;
                        int *l_6082 = &l_4065;
                        int *l_6084 = &l_6067;
                        int *l_6085 = &l_6020;
                        int *l_6086 = &l_4065;
                        int *l_6087 = &l_6020;
                        int *l_6088 = (void*)0;
                        int *l_6089 = (void*)0;
                        int *l_6090 = &l_6053;
                        int *l_6091 = &g_161;
                        int *l_6093 = &l_5995;
                        int *l_6094 = (void*)0;
                        int *l_6095 = (void*)0;
                        int *l_6096 = &l_4213;
                        --g_6097;
                    }
                }

                ;
                ;
                ;
                ;
                (*l_6102) = ((safe_mul_func_uint8_t_u_u((l_6035 | ((*l_4438) |= (*l_5839))), l_5321)) , g_2045);
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
    }

    ;



    ;
    ;
    ;

    ;
    ;
    ;
    l_6103++;
    (*l_5867) ^= 0xC6A30DE6L;
    return (*g_108);


    }







static int * func_3(int * p_4, int * p_5)
{
    union U1 **l_3731 = (void*)0;
    int l_3738 = (-2L);
    union U1 *****l_3743 = &g_1407;
    unsigned short *l_3744 = &g_59;
    (**g_1407) = l_3731;

    ;
    (*p_4) &= ((safe_mod_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((l_3738 < 0xF6L), (safe_rshift_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_u(0x340AL, 15)) <= ((*l_3744) = (l_3738 & l_3738))) >= l_3738), l_3738)))), l_3738)) | 0x7170L), 255UL)) == g_498.f2);
    return p_4;


}







static int * func_6(unsigned p_7, int * p_8, unsigned char p_9)
{
    unsigned l_2917 = 0xCBD520B6L;
    union U1 l_2942 = {-1L};
    unsigned short *l_2970 = &g_68;
    int l_3014 = 0x6212B838L;
    unsigned short *l_3056 = &g_59;
    unsigned char *l_3063 = &g_83;
    int l_3072 = 0L;
    int l_3073 = 0x566A2ADFL;
    unsigned short *l_3074 = &g_3075;
    unsigned short *l_3191 = &g_59;
    short l_3193 = 0xD4C2L;
    unsigned l_3362 = 0x2864FCF5L;
    int l_3398 = 0x894971C9L;
    union U1 l_3402 = {0xD8L};
    short l_3571 = 0x39AEL;
    short ***l_3601 = &g_471;
    char l_3605 = 1L;
    int l_3619 = 5L;
    unsigned l_3657 = 0xADC2C250L;
    unsigned *l_3720 = &g_3071;
    unsigned **l_3719 = &l_3720;
    unsigned ***l_3718 = &l_3719;
    int l_3727 = 0L;
    int l_3730 = 0xF1BF8083L;
    l_2917--;
    if ((*p_8))
    {
        unsigned short *l_2926 = &g_59;
        char *l_2927 = &g_2174.f0;
        int l_2928 = 0L;
        (*g_653) = (~((p_7 <= (safe_rshift_func_uint8_t_u_s(l_2917, 1))) < ((safe_add_func_uint16_t_u_u(((+(&g_161 != (void*)0)) | (((*l_2927) = ((*g_2104) &= (safe_lshift_func_uint8_t_u_u(l_2917, (p_7 | ((g_2867 && (((func_25((**g_107), l_2926, &g_68, l_2917, g_1309.f1) , (*g_653)) || (*g_653)) ^ 0xD0L)) , g_457)))))) >= 248UL)), l_2928)) != p_7)));
        for (g_2606 = 0; (g_2606 == (-18)); g_2606 = safe_sub_func_uint8_t_u_u(g_2606, 5))
        {
            int **l_2931 = &g_653;
            int l_2932 = 1L;
            int *l_2933 = (void*)0;
            int *l_2934 = (void*)0;
            int *l_2935 = &l_2932;
            (*l_2931) = (void*)0;

            ;
            l_2932 |= 0x8518D74BL;
            (*l_2935) |= (*p_8);
        }

        ;
    }
    else
    {
        int *l_2949 = &g_2950;
        unsigned short *l_2955 = &g_68;
        int l_2956 = 0xEEBEF746L;
        unsigned *l_2957 = (void*)0;
        unsigned *l_2958 = &g_592;
        struct S0 *l_2965 = &g_114;
        struct S0 **l_2964 = &l_2965;
        struct S0 ***l_2963 = &l_2964;
        unsigned *l_2966 = &g_143;
        union U1 l_2969 = {0x7FL};
        union U1 *****l_2983 = &g_1407;
        int l_3006 = 0x47BE0764L;
        unsigned l_3040 = 0xF5B25396L;
        int *l_3043 = &l_2956;
        int **l_3045 = (void*)0;
        (*p_8) = (*g_653);
        (*p_8) = (safe_sub_func_uint32_t_u_u(((*l_2958) = (p_7 = ((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((((*g_67) = (p_7 != (*p_8))) >= ((*g_472) = ((l_2942 , (safe_rshift_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((((safe_mod_func_uint32_t_u_u(((void*)0 != l_2949), (safe_mod_func_uint32_t_u_u((g_504 |= (safe_rshift_func_int16_t_s_u((l_2955 == (void*)0), (l_2956 <= ((*g_472) == l_2942.f0))))), l_2956)))) , 250UL) ^ l_2956), 0xE7C77D72L)) , 0x9CL), 6))) && l_2942.f0))), l_2956)), (-9L))) , 4294967295UL))), 0x31D04BDBL));
        if ((safe_add_func_int8_t_s_s(0x80L, (((*g_1440) , 18446744073709551608UL) , l_2917))))
        {
            unsigned short *l_2971 = &g_68;
            int l_2990 = 0x05C66187L;
            int l_3027 = 0x442497B8L;
            (*g_653) = (safe_lshift_func_uint8_t_u_s(l_2956, (func_25(l_2969, l_2970, l_2971, ((safe_rshift_func_uint8_t_u_s((((**g_1439) == (((*g_653) |= (*p_8)) >= (p_9 > 0L))) != (safe_add_func_int32_t_s_s(0x29E9315AL, p_9))), (*g_2104))) , p_9), l_2956) & l_2956)));
            for (g_20 = (-14); (g_20 != 18); g_20 = safe_add_func_int8_t_s_s(g_20, 6))
            {
                unsigned short *l_2981 = (void*)0;
                union U1 *******l_2982 = &g_2883;
                int l_2996 = 7L;
                int l_3019 = 0xAB1B4F52L;
                int l_3022 = 0x54009539L;
                int l_3030 = 0xE5D0AB7BL;
                int l_3032 = (-1L);
                (***g_1407) = &l_2942;

                ;
                (*p_8) = (*g_653);
                for (g_154 = 0; (g_154 >= 32); g_154 = safe_add_func_int16_t_s_s(g_154, 4))
                {
                    union U1 l_2980 = {8L};
                    (*g_653) = func_25(l_2980, l_2981, l_2955, (p_9 == (*g_653)), g_2882.f2);
                }
                if (((((*l_2982) = &g_2884) != &g_2884) > ((*g_1340) , (l_2983 == (void*)0))))
                {
                    return p_8;



                }
                else
                {
                    int **l_2984 = (void*)0;
                    int **l_2985 = &g_653;
                    (*l_2985) = &l_2956;

                    ;
                    if ((*g_653))
                    {
                        int *l_2986 = &g_103;
                        int *l_2987 = &g_1791;
                        int *l_2988 = &l_2956;
                        int *l_2989 = &g_2606;
                        int *l_2991 = &g_1791;
                        int *l_2992 = &g_103;
                        int *l_2993 = &g_161;
                        int *l_2994 = &g_161;
                        int *l_2995 = &g_2606;
                        int *l_2997 = &l_2990;
                        int *l_2998 = &l_2956;
                        int *l_2999 = &g_12;
                        int *l_3000 = &g_103;
                        int *l_3001 = (void*)0;
                        int *l_3002 = &l_2956;
                        int *l_3003 = &g_12;
                        int *l_3004 = &l_2996;
                        int *l_3005 = &g_1791;
                        int *l_3007 = &l_2996;
                        int *l_3009 = &l_2996;
                        int *l_3010 = &g_161;
                        int *l_3011 = (void*)0;
                        int *l_3012 = &g_1791;
                        int *l_3013 = &g_2606;
                        int *l_3015 = (void*)0;
                        int *l_3016 = &l_2990;
                        int *l_3017 = &g_2606;
                        int *l_3018 = &l_2996;
                        int *l_3020 = (void*)0;
                        int *l_3021 = &g_12;
                        int *l_3023 = &l_2990;
                        int *l_3024 = &g_12;
                        int *l_3025 = (void*)0;
                        int *l_3026 = &g_12;
                        int *l_3028 = (void*)0;
                        int *l_3029 = &l_3027;
                        int *l_3031 = &l_3030;
                        int *l_3033 = &l_3032;
                        int *l_3034 = (void*)0;
                        int *l_3035 = &l_3030;
                        int *l_3036 = (void*)0;
                        int *l_3037 = (void*)0;
                        int *l_3038 = &g_12;
                        int *l_3039 = &l_2956;
                        if ((*g_653))
                            break;
                        (*g_653) |= (*p_8);
                        l_3040++;
                    }
                    else
                    {
                        (*l_2985) = &g_1791;

                        ;
                    }

                    ;
                    (*l_2985) = p_8;

                    ;
                }

                ;
            }

            ;
            ;
        }
        else
        {
            int **l_3044 = &g_653;
            (*l_3044) = l_3043;

            ;
        }

        ;
        ;
        l_3043 = &g_161;

        ;
    }


    ;
    if ((safe_lshift_func_uint16_t_u_u(((*l_3074) &= (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((func_32((l_2970 = l_2970), l_3056, ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(((*l_3063)++), (((*g_1440) , 1L) | (safe_unary_minus_func_int8_t_s(0x0DL))))) < (0xEE6A47A8L < (p_7 , (safe_mod_func_uint32_t_u_u(((+((*g_67) = (safe_mod_func_uint32_t_u_u(p_7, func_25(l_2942, &g_59, &g_20, l_2917, g_3071))))) > p_7), 0x8B6B93F8L))))), (*g_2104))), g_691.f2)) > 4294967290UL), p_7, l_3056) , p_7) == l_2917), 0)), p_7)) >= l_3072), g_692.f2)), l_3073))), p_7)))
    {
        char l_3115 = 0xF8L;
        int l_3137 = 0xD6E9B1E2L;
        struct S0 *l_3169 = &g_1858;
        unsigned short *l_3178 = (void*)0;
        unsigned short **l_3179 = &g_2901;
        char *l_3180 = &g_2914;
        unsigned l_3181 = 0x91041F65L;
        char *l_3182 = (void*)0;
        union U1 l_3184 = {0x29L};
        int l_3253 = 7L;
        int l_3287 = 0L;
        struct S0 *l_3573 = &g_1858;
        short ***l_3600 = (void*)0;
        for (g_20 = 0; (g_20 >= 37); g_20++)
        {
            int *l_3078 = &g_1791;
            int *l_3079 = &g_161;
            int *l_3080 = &l_3073;
            int *l_3081 = &g_2606;
            int *l_3082 = &g_1791;
            int *l_3083 = (void*)0;
            int *l_3084 = &g_103;
            int *l_3085 = &g_161;
            int l_3086 = (-1L);
            int *l_3087 = &l_3086;
            int *l_3088 = &l_3073;
            int *l_3089 = &l_3086;
            int *l_3090 = &g_1791;
            int *l_3091 = (void*)0;
            int *l_3092 = &g_103;
            int *l_3093 = (void*)0;
            int *l_3094 = (void*)0;
            int *l_3095 = (void*)0;
            int *l_3096 = (void*)0;
            int *l_3097 = &g_1791;
            int *l_3098 = &l_3072;
            int *l_3099 = &g_103;
            int *l_3100 = &g_1791;
            int *l_3101 = &g_1791;
            int *l_3102 = &g_103;
            int *l_3103 = &l_3072;
            int *l_3104 = &l_3014;
            int *l_3105 = &g_2606;
            int *l_3106 = &l_3072;
            int *l_3107 = &l_3014;
            int *l_3108 = (void*)0;
            int l_3109 = (-10L);
            int *l_3110 = (void*)0;
            int *l_3111 = &l_3073;
            int *l_3112 = &g_2606;
            int *l_3113 = &l_3086;
            int *l_3114 = &l_3014;
            int *l_3116 = &l_3014;
            int *l_3117 = (void*)0;
            int *l_3118 = (void*)0;
            int *l_3119 = &l_3086;
            int *l_3120 = &l_3072;
            int *l_3121 = &g_103;
            int *l_3122 = &l_3014;
            int *l_3123 = &g_161;
            int *l_3124 = &l_3109;
            int *l_3125 = (void*)0;
            int *l_3126 = (void*)0;
            int *l_3127 = (void*)0;
            int *l_3128 = &g_161;
            int *l_3129 = &g_103;
            int *l_3130 = &l_3072;
            int *l_3131 = &g_2606;
            int *l_3132 = &l_3086;
            int *l_3133 = &g_12;
            int *l_3134 = &g_103;
            int *l_3135 = &l_3072;
            int *l_3136 = &l_3073;
            int *l_3138 = &g_12;
            int l_3139 = 0xA25FF787L;
            int *l_3140 = &g_2606;
            int *l_3141 = &g_161;
            int l_3142 = 0x7870D331L;
            int *l_3143 = &l_3086;
            int *l_3144 = &l_3086;
            int *l_3145 = (void*)0;
            int *l_3146 = &l_3014;
            int *l_3147 = &l_3137;
            int *l_3148 = &l_3142;
            int *l_3149 = &g_12;
            int *l_3150 = &g_2606;
            int l_3151 = 0L;
            int *l_3152 = &l_3109;
            int *l_3153 = &g_161;
            int *l_3154 = &l_3086;
            int *l_3155 = &l_3086;
            int *l_3156 = &g_2606;
            short l_3157 = (-6L);
            int *l_3158 = (void*)0;
            int l_3159 = 7L;
            int *l_3160 = &l_3109;
            int *l_3161 = (void*)0;
            int *l_3162 = &l_3151;
            int *l_3163 = &l_3139;
            int *l_3164 = (void*)0;
            g_3165--;
        }
        (*l_3169) = g_3168;
        (*p_8) = func_25((*g_108), l_3056, l_3056, g_161, p_7);
        if ((((g_105.f0 = (safe_mul_func_int16_t_s_s(((safe_add_func_int8_t_s_s(((*l_3180) = (0xF9L >= ((*g_2104) = (safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((*g_2104), 7)), func_25(l_2942, l_3178, ((*l_3179) = (void*)0), func_25(l_2942, &g_3075, l_3178, (p_7 != 4L), p_9), g_1858.f0)))))), l_3181)) && 0xCAL), p_7))) ^ 1L) < 0xDD65CC5DL))
        {
            char l_3183 = 0x09L;
            union U1 *l_3185 = (void*)0;
            union U1 *l_3186 = (void*)0;
            union U1 *l_3187 = &g_105;
            unsigned short **l_3188 = &l_3178;
            unsigned *l_3192 = &g_3071;
            int l_3209 = 0x2B0ED4ACL;
            int l_3212 = (-1L);
            int l_3231 = 1L;
            int l_3241 = 0xBDAA4260L;
            int l_3248 = 0xB16A0290L;
            int l_3286 = (-5L);
            unsigned short l_3317 = 65530UL;
            char l_3360 = 0x4EL;
            char ***l_3379 = &g_2103;
            union U1 ****l_3396 = &g_1338;
            int *l_3401 = &g_103;
            unsigned short l_3404 = 0xE9F8L;
            (*g_653) = ((((l_3183 ^ (~((((!((*l_3063) = (65535UL == l_2942.f0))) , ((0x39L != ((((((func_25(((*l_3187) = l_3184), l_3056, ((*l_3188) = ((*l_3179) = &g_59)), ((*l_3192) = (safe_add_func_uint8_t_u_u((func_73(&g_68, l_3191, &g_81, l_3183) , l_3073), g_115.f2))), l_3184.f0) & l_3183) , 0xE1L) & p_7) || l_3183) < l_2942.f0) == l_3193)) , (void*)0)) == (void*)0) | l_3183))) | g_2890.f2) && l_3193) && 0xA0L);

            ;
            ;
            if ((func_44(&g_1791, &g_12, (l_2942.f0 , (*l_3179))) > ((((l_3193 , 65535UL) | l_3183) != 0x7594L) , l_3115)))
            {
                int *l_3194 = &g_1791;
                int *l_3195 = &g_2606;
                int *l_3196 = &g_2606;
                int *l_3197 = &g_12;
                int *l_3198 = (void*)0;
                int *l_3199 = &l_3072;
                int *l_3200 = &l_3072;
                int *l_3201 = &l_3137;
                int *l_3202 = &l_3014;
                int *l_3203 = &g_161;
                int *l_3204 = &g_2606;
                int *l_3205 = &l_3137;
                int *l_3206 = &g_1791;
                int *l_3207 = &g_1791;
                int *l_3208 = (void*)0;
                int *l_3210 = (void*)0;
                int *l_3211 = &l_3014;
                int *l_3213 = &l_3212;
                int *l_3214 = (void*)0;
                int *l_3215 = (void*)0;
                int *l_3216 = &l_3209;
                int *l_3217 = (void*)0;
                int *l_3218 = (void*)0;
                int *l_3219 = &l_3014;
                int *l_3220 = (void*)0;
                int *l_3221 = &g_161;
                int *l_3222 = &l_3209;
                int *l_3223 = (void*)0;
                int *l_3224 = &l_3137;
                int *l_3225 = &g_103;
                int *l_3226 = &g_161;
                int *l_3227 = &l_3073;
                int *l_3228 = &l_3137;
                int *l_3229 = &g_161;
                int *l_3230 = &g_161;
                int *l_3232 = &l_3014;
                int *l_3233 = &g_2606;
                int *l_3234 = &l_3212;
                int *l_3235 = &g_1791;
                int *l_3236 = &g_103;
                int *l_3237 = &g_1791;
                int *l_3238 = (void*)0;
                int *l_3239 = &g_12;
                int *l_3240 = &g_1791;
                int *l_3242 = &l_3231;
                int *l_3243 = &l_3014;
                int *l_3244 = &g_1791;
                int *l_3245 = &l_3073;
                int *l_3246 = &g_103;
                int *l_3247 = &g_12;
                int *l_3249 = &l_3014;
                int *l_3250 = &l_3209;
                int *l_3251 = (void*)0;
                int *l_3252 = &l_3073;
                int *l_3254 = &l_3241;
                int *l_3255 = &g_1791;
                int *l_3256 = &l_3014;
                int *l_3257 = &g_12;
                int *l_3258 = &g_161;
                int *l_3259 = &l_3241;
                int *l_3260 = (void*)0;
                int l_3261 = 0x6B0CD549L;
                int *l_3262 = &l_3241;
                int *l_3263 = &g_1791;
                int *l_3264 = &l_3073;
                int *l_3265 = &l_3209;
                int l_3266 = (-10L);
                int l_3267 = (-5L);
                int l_3268 = 0L;
                int *l_3269 = &l_3241;
                int *l_3270 = &l_3072;
                int *l_3271 = (void*)0;
                int *l_3272 = &l_3014;
                int *l_3273 = &l_3072;
                int *l_3274 = &l_3231;
                int *l_3275 = &l_3231;
                int *l_3276 = (void*)0;
                int *l_3277 = &l_3267;
                int *l_3278 = &l_3014;
                int *l_3279 = (void*)0;
                int *l_3280 = &l_3231;
                int *l_3281 = &l_3266;
                int *l_3282 = &l_3241;
                int *l_3283 = &g_2606;
                int *l_3284 = &l_3268;
                int *l_3285 = &g_12;
                int *l_3288 = (void*)0;
                int *l_3289 = &g_2606;
                int *l_3290 = &g_2606;
                int *l_3291 = &l_3248;
                int *l_3292 = &l_3286;
                int *l_3293 = &l_3253;
                int *l_3294 = &l_3268;
                int *l_3295 = &l_3266;
                int *l_3296 = &l_3231;
                int *l_3297 = (void*)0;
                int l_3298 = 0x304F7ED3L;
                int *l_3299 = (void*)0;
                int *l_3300 = &g_12;
                int *l_3301 = &l_3137;
                int l_3302 = (-1L);
                int *l_3303 = &l_3137;
                int *l_3304 = &l_3267;
                int *l_3305 = &l_3266;
                int *l_3306 = &l_3302;
                int *l_3307 = (void*)0;
                int *l_3308 = &g_12;
                int *l_3309 = (void*)0;
                int *l_3310 = &g_1791;
                int *l_3311 = &l_3209;
                int *l_3312 = &g_12;
                int *l_3313 = &l_3266;
                int *l_3314 = (void*)0;
                int l_3315 = 0xDBBDECCCL;
                int *l_3316 = &l_3209;
                l_3317++;
            }
            else
            {
                int l_3320 = 0xF3B2EEF7L;
                int l_3321 = 0x486BD387L;
                int *l_3322 = &l_3321;
                int *l_3323 = &g_1791;
                int *l_3324 = &l_3320;
                int *l_3325 = &l_3287;
                int *l_3326 = &l_3073;
                int *l_3327 = &l_3072;
                int l_3328 = 0x655678A2L;
                int *l_3329 = &l_3137;
                int *l_3330 = (void*)0;
                int *l_3331 = &l_3137;
                int *l_3332 = &l_3328;
                int *l_3333 = &l_3231;
                int *l_3334 = &l_3072;
                int *l_3335 = &l_3320;
                int *l_3336 = &g_12;
                int *l_3337 = &l_3137;
                int *l_3338 = (void*)0;
                int *l_3339 = &l_3231;
                int *l_3340 = &l_3137;
                int *l_3341 = &l_3137;
                int *l_3342 = &g_1791;
                int *l_3343 = &l_3328;
                int *l_3344 = &l_3320;
                int l_3345 = 0xCE443042L;
                int *l_3346 = (void*)0;
                int *l_3347 = &l_3287;
                int *l_3348 = &l_3286;
                int *l_3349 = &l_3286;
                int *l_3350 = &l_3321;
                int *l_3351 = &l_3072;
                int l_3352 = 0x3D415776L;
                unsigned l_3353 = 0x549F8FD9L;
                int **l_3363 = &l_3337;
                union U1 l_3371 = {0x65L};
                unsigned short *l_3372 = &g_68;
                char ***l_3376 = &g_2103;
                char ****l_3375 = &l_3376;
                char ***l_3378 = &g_2103;
                char ****l_3377 = &l_3378;
                unsigned char *l_3380 = (void*)0;
                unsigned char *l_3381 = &g_154;
                unsigned char *l_3382 = &g_3383;
                --l_3353;
                (*l_3348) |= (safe_lshift_func_uint8_t_u_u(((((*g_653) = (*g_653)) == (((((safe_mod_func_uint8_t_u_u((((*l_3324) & (*p_8)) <= 7UL), ((*l_3335) || (l_3360 & (g_3361 , l_3362))))) > (-1L)) && 0UL) >= l_3183) , (*p_8))) < (**g_2103)), l_3248));
                (*l_3363) = p_8;

                ;
                (*p_8) |= (l_3115 && ((safe_lshift_func_uint8_t_u_s(((*l_3382) ^= ((*l_3381) |= ((*l_3063) |= (safe_unary_minus_func_uint8_t_u((safe_rshift_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_u((**g_1439), ((((*g_2104) = 0xE7L) ^ g_114.f2) , func_25(l_3371, (*l_3188), l_3372, (safe_mul_func_uint8_t_u_u(((g_2093.f2 != (((*l_3377) = ((*l_3375) = (func_25(l_3184, (*l_3179), &g_3075, p_9, l_3253) , (void*)0))) != l_3379)) == l_2942.f0), l_3248)), g_1367.f2)))) != g_2912) && p_9), 10))))))), 2)) | 0x6554FCEEL));

                ;
                ;
            }
            (*p_8) = ((*g_653) = (*g_653));
            for (g_457 = (-23); (g_457 < 5); g_457++)
            {
                unsigned short *l_3395 = &g_68;
                int l_3400 = 0xEAE3803FL;
                int **l_3403 = &g_653;
                if ((*p_8))
                {
                    int **l_3386 = (void*)0;
                    int **l_3387 = &g_653;
                    union U1 *l_3388 = (void*)0;
                    unsigned short *l_3397 = &g_59;
                    (*l_3387) = p_8;

                    ;
                    g_103 &= (*p_8);
                    (*l_3387) = (void*)0;

                    ;
                    (*p_8) |= ((l_3388 != ((***g_1407) = &l_3184)) >= (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((l_3014 = (safe_lshift_func_int8_t_s_u(func_25(l_3184, l_3395, ((*l_3179) = &g_3075), (g_114.f2 > (p_9 != p_9)), l_3398), 6))), 0)), (*g_1440))));

                    ;
                    ;
                }
                else
                {
                    int **l_3399 = &g_653;
                    (*l_3399) = p_8;

                    ;
                    l_3401 = func_48(l_3400, l_3400, &g_3075);
                }

                ;
                g_283.f2 &= func_25(l_3402, (p_7 , (*l_3179)), l_2970, p_9, ((*l_3192) |= (((l_3404 = p_9) ^ (**g_1439)) | (*p_8))));
            }

            ;
            ;
            ;
        }
        else
        {
            int *l_3407 = &g_2950;
            union U1 *****l_3408 = (void*)0;
            union U1 ******l_3409 = &l_3408;
            int l_3414 = 0x6B80F9C0L;
            int l_3494 = 0xF89CC903L;
            int l_3529 = 0L;
            unsigned short *l_3578 = &g_59;
            unsigned l_3595 = 0x3B5AD26BL;
            unsigned *l_3604 = &l_2917;
            int **l_3606 = &g_653;
            if (((*p_8) &= (func_25(l_3402, ((**g_2103) , &g_20), &g_81, (safe_sub_func_int16_t_s_s((((*l_3407) &= g_100.f2) , ((((*g_2883) = (*g_2883)) == ((*l_3409) = l_3408)) && ((safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(l_3414, 1UL)), g_691.f2)) >= (**g_2103)))), l_3362)), g_161) , l_3287)))
            {
                unsigned l_3423 = 9UL;
                int *l_3427 = (void*)0;
                int *l_3428 = (void*)0;
                int *l_3429 = &l_3287;
                int *l_3430 = (void*)0;
                int *l_3431 = (void*)0;
                int *l_3432 = (void*)0;
                int *l_3433 = &l_3073;
                int *l_3434 = &g_12;
                int *l_3435 = &g_12;
                int *l_3436 = &l_3072;
                int *l_3437 = &l_3073;
                int *l_3438 = &g_103;
                int *l_3439 = &g_161;
                int *l_3440 = (void*)0;
                int *l_3441 = &l_3287;
                int *l_3442 = &l_3414;
                int *l_3443 = &l_3014;
                int *l_3444 = &l_3137;
                int *l_3445 = &g_2606;
                int *l_3446 = (void*)0;
                int *l_3447 = &l_3253;
                int *l_3448 = &g_12;
                int *l_3449 = (void*)0;
                int *l_3450 = (void*)0;
                int *l_3451 = &l_3137;
                int *l_3452 = &l_3014;
                int *l_3453 = &l_3137;
                int *l_3454 = &l_3287;
                int *l_3455 = &l_3014;
                int *l_3456 = &l_3072;
                int *l_3457 = &g_161;
                int *l_3458 = &g_2606;
                int *l_3459 = &g_103;
                int *l_3460 = &l_3414;
                int *l_3461 = (void*)0;
                int *l_3462 = (void*)0;
                int *l_3463 = &g_1791;
                int *l_3464 = &l_3414;
                int *l_3465 = &g_2606;
                int *l_3466 = &g_103;
                int *l_3467 = &l_3137;
                int *l_3468 = &g_12;
                int *l_3469 = &l_3414;
                int *l_3470 = &l_3287;
                int *l_3471 = &g_12;
                int *l_3472 = &l_3253;
                int *l_3473 = &l_3072;
                int *l_3474 = &l_3287;
                int *l_3475 = &l_3073;
                int *l_3476 = &g_103;
                int *l_3477 = &g_1791;
                int *l_3478 = &l_3137;
                int *l_3479 = &l_3073;
                int *l_3480 = &l_3073;
                int *l_3481 = (void*)0;
                int *l_3482 = &g_1791;
                int *l_3483 = &g_103;
                int *l_3484 = &l_3014;
                int *l_3485 = &g_1791;
                int *l_3486 = (void*)0;
                int *l_3487 = &g_161;
                int *l_3488 = &l_3253;
                int *l_3489 = &g_2606;
                int *l_3490 = &g_2606;
                int *l_3491 = &g_12;
                int *l_3492 = &g_1791;
                int *l_3493 = &g_103;
                int *l_3495 = &l_3014;
                int *l_3496 = &g_12;
                int *l_3497 = &l_3494;
                int *l_3498 = (void*)0;
                int *l_3499 = &l_3072;
                int *l_3500 = &g_2606;
                int *l_3501 = &l_3073;
                int *l_3502 = &l_3287;
                int *l_3503 = &l_3137;
                int *l_3504 = &g_161;
                int *l_3505 = (void*)0;
                int *l_3506 = &l_3072;
                int *l_3507 = &l_3137;
                int *l_3508 = &l_3494;
                int *l_3509 = &g_1791;
                int *l_3510 = &g_1791;
                int *l_3511 = &l_3414;
                int *l_3512 = &l_3014;
                int *l_3513 = &l_3073;
                int *l_3514 = &l_3073;
                int *l_3515 = &l_3414;
                int *l_3516 = &g_161;
                int *l_3517 = &l_3287;
                int *l_3518 = (void*)0;
                int *l_3519 = (void*)0;
                int *l_3520 = &g_161;
                int *l_3521 = (void*)0;
                int *l_3522 = &l_3414;
                int *l_3523 = &l_3414;
                int *l_3524 = &l_3072;
                int *l_3525 = &l_3072;
                int *l_3526 = &g_1791;
                int l_3527 = 0L;
                int *l_3528 = &g_1791;
                int *l_3530 = &g_12;
                int *l_3531 = &l_3414;
                int *l_3532 = &l_3014;
                int *l_3533 = &l_3529;
                int *l_3534 = &g_103;
                int *l_3535 = &l_3137;
                int *l_3536 = (void*)0;
                int *l_3537 = &l_3287;
                int *l_3538 = &l_3072;
                int *l_3539 = &l_3494;
                int *l_3540 = &g_1791;
                int *l_3541 = &g_161;
                int *l_3542 = (void*)0;
                int *l_3543 = (void*)0;
                int *l_3544 = &l_3072;
                int *l_3545 = &l_3137;
                int *l_3546 = &l_3137;
                int *l_3547 = &l_3287;
                int *l_3548 = &l_3529;
                int *l_3549 = (void*)0;
                int *l_3550 = &g_161;
                int *l_3551 = &l_3072;
                int *l_3552 = (void*)0;
                int *l_3553 = &l_3072;
                int *l_3554 = &g_1791;
                int *l_3555 = (void*)0;
                int *l_3556 = (void*)0;
                int *l_3557 = &l_3529;
                int *l_3558 = &g_12;
                int l_3559 = (-9L);
                int *l_3560 = &g_161;
                int *l_3561 = &l_3137;
                int *l_3562 = (void*)0;
                int l_3563 = (-8L);
                int *l_3564 = &l_3494;
                int *l_3565 = &l_3073;
                int **l_3572 = &l_3521;
                for (g_2914 = 0; (g_2914 != (-17)); g_2914--)
                {
                    unsigned *l_3420 = &g_592;
                    int l_3426 = 1L;
                    (*g_653) |= (safe_unary_minus_func_uint16_t_u(l_3287));
                }
                --g_3566;
                l_3494 = (safe_lshift_func_uint8_t_u_s(l_3571, 2));
                (*l_3572) = (void*)0;
            }
            else
            {
                int **l_3574 = (void*)0;
                int **l_3575 = &g_653;
                union U1 l_3579 = {0x68L};
                unsigned short *l_3585 = &g_59;
                (*p_8) ^= ((&g_1086 != &g_142) == ((*g_653) && (((l_3287 <= (*g_472)) && (l_3169 != l_3573)) , 0x7B358A80L)));
                (*l_3575) = &g_161;

                ;
                if (((g_3071 & ((g_691 , l_3398) , l_3253)) <= l_3072))
                {
                    union U1 *l_3580 = &l_3184;
                    unsigned short **l_3584 = &g_2901;
                    int l_3588 = 0xC0B3E91BL;
                    int *l_3590 = &l_3014;
                    int **l_3589 = &l_3590;
                    if (((((*l_3580) = l_3579) , (0UL & p_7)) , (safe_sub_func_int16_t_s_s(0x6217L, (**g_1439)))))
                    {
                        (**l_3575) = 0x9309D196L;
                    }
                    else
                    {
                        unsigned short ***l_3583 = &l_3179;
                        l_3584 = ((*l_3583) = &l_3178);

                        ;
                        ;
                        (*g_653) |= ((func_73(&g_20, l_3191, l_3585, ((*l_3584) != ((l_2942.f0 && (safe_add_func_uint8_t_u_u(p_9, p_7))) , (**g_1438)))) , 0x2437E2D7L) , l_3588);
                        (*l_3575) = &l_3137;

                        ;
                    }

                    ;
                    ;
                    ;
                    (*l_3589) = ((*l_3575) = (void*)0);

                    ;
                    ;
                }
                else
                {
                    (**l_3575) = (*g_653);
                }

                ;
                ;
            }

            ;
            ;
            (*l_3606) = &l_3073;

            ;
            (*g_653) |= ((safe_mod_func_int8_t_s_s(l_3571, p_7)) || (*p_8));
            return p_8;




        }

        ;
        ;
        ;
        ;
    }
    else
    {
        unsigned l_3617 = 4UL;
        int l_3618 = 4L;
        char *l_3620 = &g_105.f0;
        int **l_3621 = &g_653;
        unsigned *l_3623 = &g_592;
        unsigned **l_3622 = &l_3623;
        int *l_3626 = &g_161;
        int *l_3627 = &l_3073;
        int *l_3628 = (void*)0;
        int *l_3629 = &l_3073;
        int *l_3630 = &g_1791;
        int *l_3631 = &l_3073;
        int *l_3632 = &l_3072;
        int *l_3633 = &l_3014;
        int *l_3634 = (void*)0;
        int *l_3635 = &l_3014;
        int *l_3636 = (void*)0;
        int *l_3637 = &g_161;
        int *l_3638 = &l_3618;
        int *l_3639 = &l_3073;
        int *l_3640 = (void*)0;
        int *l_3641 = &g_161;
        int *l_3642 = &g_1791;
        int *l_3643 = &l_3072;
        int *l_3644 = (void*)0;
        int *l_3645 = &g_12;
        int *l_3646 = &l_3618;
        int *l_3647 = &g_103;
        int *l_3648 = &l_3618;
        int *l_3649 = (void*)0;
        int *l_3650 = (void*)0;
        int *l_3651 = &l_3072;
        int *l_3652 = &l_3072;
        int *l_3653 = (void*)0;
        int *l_3654 = &l_3619;
        int *l_3655 = &g_2606;
        int *l_3656 = &l_3619;
        unsigned short *l_3663 = (void*)0;
        union U1 l_3668 = {0x10L};
        union U1 ******l_3684 = (void*)0;
        (*l_3621) = p_8;

        ;
        if ((*p_8))
        {
            (**l_3621) ^= (-1L);
        }
        else
        {
            unsigned ***l_3624 = &l_3622;
            int *l_3625 = (void*)0;
            g_498.f0 ^= ((**l_3621) = (((((*l_3624) = l_3622) != (void*)0) , 0xBAD5L) , (*p_8)));
        }
        l_3657++;
        for (l_3398 = 6; (l_3398 < (-1)); l_3398 = safe_sub_func_uint8_t_u_u(l_3398, 1))
        {
            unsigned short *l_3662 = (void*)0;
            unsigned *l_3667 = &g_1086;
            struct S0 *l_3669 = &g_692;
            int l_3695 = 0x6848D0A1L;
            union U1 l_3721 = {0L};
            unsigned l_3722 = 3UL;
            (*l_3669) = g_1367;
            if ((*p_8))
            {
                union U1 l_3674 = {0xBDL};
                for (g_143 = 0; (g_143 < 9); g_143 = safe_add_func_uint32_t_u_u(g_143, 6))
                {
                    unsigned short **l_3675 = (void*)0;
                    unsigned short **l_3676 = &g_67;
                    (*l_3656) = (safe_add_func_int32_t_s_s(func_25(l_3674, ((*l_3676) = &g_59), l_3662, ((((*l_3056) |= (***g_1438)) , ((l_3072 = (g_3677 , (safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((((safe_lshift_func_int8_t_s_s(l_3674.f0, 6)) , (g_70 , l_3684)) != ((*g_653) , &g_2884)), (*l_3627))), 255UL)))) > 0x4D47L)) == 0x1373E174L), l_3605), 5L));

                    ;
                    (*l_3638) |= (*l_3631);
                }
            }
            else
            {
                unsigned l_3687 = 0UL;
                union U1 l_3691 = {-8L};
                unsigned short *l_3708 = &g_3075;
                int *l_3711 = &l_3072;
                (*l_3621) = p_8;

                ;
                if ((*p_8))
                {
                    union U1 *l_3692 = &l_3691;
                    union U1 *l_3693 = &g_105;
                    unsigned short *l_3694 = (void*)0;
                    (*l_3639) &= (*g_653);
                    for (g_2914 = 0; (g_2914 <= 27); g_2914 = safe_add_func_int32_t_s_s(g_2914, 8))
                    {
                        if ((*p_8))
                            break;
                        l_3687--;
                    }
                    if ((*g_653))
                        break;
                    if ((((*g_108) , ((g_3690 <= func_25(((*l_3693) = ((*l_3692) = l_3691)), l_3694, &g_68, p_7, (((l_3695 != ((safe_mul_func_uint16_t_u_u((*l_3629), func_25(l_2942, l_3663, l_2970, p_7, p_9))) <= 0x78D032D5L)) , p_9) , 0xF504A194L))) & p_9)) , (*p_8)))
                    {
                        p_8 = &g_1791;

                        ;
                        (*l_3638) ^= (*g_653);
                        (*l_3669) = g_3698;
                    }
                    else
                    {
                        unsigned char l_3699 = 255UL;
                        (*g_653) ^= l_3699;
                        (*p_8) |= ((safe_add_func_uint32_t_u_u(g_116.f2, (safe_mod_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(((l_3014 > ((((*l_3063) ^= func_25((*l_3693), l_3662, l_3708, ((((*l_3074) ^= (safe_lshift_func_int8_t_s_s((*g_2104), p_9))) || p_9) | p_9), g_1333.f1)) == 255UL) <= 0xC7L)) | l_3619), l_3695)), 7L)), 0xF5L)))) != (**g_2103));
                        (*l_3621) = p_8;
                    }
                }
                else
                {
                    int *l_3712 = &g_161;
                    unsigned short *l_3714 = (void*)0;
                    (*l_3621) = func_48((0x8263E2ADL > (l_3072 , p_9)), (*g_472), l_3663);

                    ;
                    ;
                    (*l_3655) = ((void*)0 != g_3715);
                }

                ;
                (*g_653) = (*l_3652);
                (*p_8) = ((g_3677.f2 , ((g_3717 != l_3718) == (!func_25(l_2942, &g_3075, l_2970, p_7, (((-4L) > ((l_2942 , l_3691) , l_3402.f0)) < l_3402.f0))))) < 0xE4L);
            }

            ;
            (*l_3621) = &g_2606;

            ;
        }

        ;
        ;
        ;
    }

    ;
    ;

    ;
    ;
    return p_8;



}







static unsigned char func_15(unsigned p_16, int * p_17, unsigned char p_18)
{
    int *l_21 = &g_12;
    union U1 l_31 = {9L};
    char l_52 = 1L;
    unsigned short *l_53 = &g_20;
    unsigned short *l_58 = &g_59;
    short *l_69 = &g_70;
    char l_71 = 0xA7L;
    int l_72 = (-7L);
    unsigned char *l_153 = &g_154;
    int l_155 = (-1L);
    int **l_652 = &l_21;
    int *l_1790 = &g_1791;
    unsigned l_1805 = 0x641BF96EL;
    short ****l_1825 = &g_477;
    int l_1879 = 0x382B81C3L;
    int l_1895 = (-1L);
    char l_2033 = 9L;
    int l_2041 = 0x41BBEFDAL;
    unsigned l_2056 = 4UL;
    unsigned short *l_2070 = (void*)0;
    unsigned l_2156 = 18446744073709551615UL;
    unsigned short *l_2166 = &g_20;
    unsigned *l_2169 = &g_91;
    unsigned **l_2168 = &l_2169;
    int l_2355 = 0x379E736CL;
    int l_2373 = 1L;
    int l_2510 = (-2L);
    unsigned short l_2582 = 0x0395L;
    int l_2823 = 9L;
    int l_2835 = 0L;
    unsigned short l_2907 = 0xCC37L;
    p_17 = l_21;
    if (((*l_1790) |= (safe_mod_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u(func_25(l_31, &g_20, (func_32((((((*l_652) = func_38(p_18, ((*l_153) |= func_44(func_48(((l_52 < (((--(*l_53)) ^ (((g_12 > (0UL < (safe_lshift_func_uint16_t_u_s(((*l_58) ^= 0x06DCL), ((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s(((*l_69) = (safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((g_67 == l_58), 1)), 0xEC8FL))))), 8)) > l_71))))) , l_58) != (void*)0)) == g_12)) , g_59), l_72, &g_68), l_21, l_53)), l_155, p_18, g_100.f1)) != g_653) , 0L) , &g_81), g_472, g_143, g_143, l_58) , l_69), l_155, g_100.f1))), g_691.f2))))
    {
        unsigned l_1792 = 0x5CF19448L;
        unsigned *l_1796 = &l_1792;
        int l_1799 = (-1L);
        int l_1800 = (-6L);
        int l_1919 = 0x5235C9B2L;
        int l_1990 = (-2L);
        unsigned short *l_2039 = (void*)0;
        struct S0 *l_2081 = &g_2082;
        int l_2095 = 0xC0ADFAE2L;
        char l_2132 = 1L;
        int l_2137 = 0xE04F95D7L;
        int l_2344 = (-7L);
        int l_2392 = 0xB1CC79E2L;
        int l_2400 = (-1L);
        int l_2426 = 0x2A445E35L;
        int l_2446 = (-1L);
        int l_2454 = 0x8C3FF6E6L;
        int *l_2553 = (void*)0;
        union U1 l_2580 = {-1L};
        unsigned short l_2785 = 1UL;
        (*g_653) |= l_1792;
        (*l_1790) |= ((*g_653) = (*g_653));
        if (((~((l_1800 &= func_44(func_48(g_1086, ((safe_rshift_func_uint8_t_u_u((((((*l_1796) = (((g_1795 , p_17) != l_21) | ((*g_1340) , p_18))) <= ((safe_lshift_func_int8_t_s_s(0x50L, 5)) , l_1799)) == p_16) || (**g_1439)), 4)) , (*g_472)), &g_68), &g_1791, l_58)) <= 4UL)) == 0L))
        {
            unsigned short **l_1807 = (void*)0;
            unsigned short ***l_1806 = &l_1807;
            int l_1816 = 0x05C293CBL;
            short ****l_1817 = &g_477;
            int l_1916 = 0xBB0528C7L;
            int l_2004 = 9L;
            union U1 l_2044 = {0x14L};
            struct S0 *l_2059 = (void*)0;
            int *l_2114 = &g_1791;
            int *l_2115 = &l_1879;
            int *l_2116 = (void*)0;
            int *l_2117 = &l_1895;
            int *l_2118 = &g_161;
            int *l_2119 = &l_1879;
            int *l_2120 = &l_1816;
            int *l_2121 = &l_1895;
            int *l_2122 = &g_12;
            int *l_2123 = (void*)0;
            int *l_2124 = &l_1919;
            int *l_2125 = &g_103;
            int *l_2126 = &l_1879;
            int *l_2127 = &l_1916;
            int *l_2128 = &l_1919;
            int *l_2129 = &l_1799;
            int *l_2130 = &l_1919;
            int *l_2131 = &g_103;
            int *l_2133 = &l_1800;
            int *l_2134 = (void*)0;
            int *l_2135 = &l_1990;
            int *l_2136 = (void*)0;
            int *l_2138 = &l_1919;
            int *l_2139 = &l_1799;
            int *l_2140 = &l_1916;
            int *l_2141 = &l_1879;
            int *l_2142 = &g_161;
            int *l_2143 = &l_1800;
            int *l_2144 = &l_1916;
            int *l_2145 = &g_1791;
            int *l_2146 = &l_1816;
            int *l_2147 = &l_2004;
            int *l_2148 = &l_1879;
            int *l_2149 = &g_1791;
            int *l_2150 = &l_1919;
            int *l_2151 = &g_1791;
            int *l_2152 = &l_1799;
            int *l_2153 = &g_161;
            int *l_2154 = &l_1990;
            int *l_2155 = &g_1791;
            if (((*g_653) = ((safe_lshift_func_uint8_t_u_u((((4L || (((safe_lshift_func_int16_t_s_u(((*l_69) = l_1805), 4)) | ((void*)0 != l_1806)) && (safe_mul_func_uint8_t_u_u(p_16, (*l_1790))))) , 0x6CL) , ((safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(0xBC0DL, ((*g_472) = (((*l_1790) = (safe_mod_func_uint16_t_u_u((*g_1440), p_16))) < l_1816)))), 2)) && 4294967294UL)), l_1816)) == p_16)))
            {
                char *l_1819 = &g_141;
                char **l_1818 = &l_1819;
                char *l_1824 = &g_105.f0;
                union U1 l_1856 = {0xACL};
                int l_1901 = 0xBE57448AL;
                int l_1958 = 9L;
                int l_2013 = 1L;
                unsigned short **l_2051 = &l_58;
                if ((l_1817 == (((~((*l_1790) ^= 0x568B068CL)) , ((((((l_1799 &= (p_18 , g_283.f2)) <= (6L & 0xA4AB54D5L)) | p_16) >= ((*l_1824) = (((*l_1818) = &g_141) != ((safe_mod_func_int16_t_s_s(((*l_69) = (safe_add_func_int8_t_s_s(l_1816, l_1800))), (*g_472))) , (void*)0)))) , p_18) | p_16)) , l_1825)))
                {
                    int l_1829 = 0xFFF69514L;
                    unsigned short **l_1840 = &l_53;
                    unsigned l_1843 = 0xEA86431EL;
                    for (l_1805 = 0; (l_1805 > 4); ++l_1805)
                    {
                        struct S0 *l_1828 = &g_114;
                        (*l_1828) = g_691;
                    }
                    (*p_17) &= l_1829;
                    (*g_653) = ((**g_107) , (l_1843 |= ((safe_sub_func_uint16_t_u_u(((*g_67) = (safe_sub_func_int8_t_s_s(g_100.f1, 4UL))), (((*p_17) = ((*l_1790) ^= (((*l_69) = ((((safe_add_func_int8_t_s_s((((void*)0 == l_1824) >= ((*l_1824) &= ((g_457 < (safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((l_1840 == (*l_1806)), ((!(safe_lshift_func_int8_t_s_s(((*l_1819) = g_116.f2), p_16))) | (*g_653)))), 0L))) | l_1799))), p_18)) >= 1L) || p_16) > 6UL)) != (*g_472)))) == l_1829))) , (*g_653))));
                }
                else
                {
                    short **l_1857 = &g_472;
                    unsigned short *l_1868 = (void*)0;
                    int l_1877 = 2L;
                    int l_1956 = (-2L);
                    int l_2014 = (-10L);
                    int l_2017 = (-3L);
                    int l_2026 = 0xE2BC05BDL;
                    if ((0x3EL || (((****g_1407) , ((safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((p_18 ^ (-3L)), (*g_67))), (((safe_mod_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s((l_1856 , ((l_1800 , ((void*)0 != l_1857)) == g_1333.f2)), g_691.f1)), l_1856.f0)) == 250UL), 0x4AFAL)), g_109.f0)) , 0xE157L) , g_12))) < (*g_67))) & p_18)))
                    {
                        (*l_652) = p_17;

                        ;
                    }
                    else
                    {
                        int l_1865 = 0x64FA93F9L;
                        union U1 *l_1866 = (void*)0;
                        union U1 *l_1867 = &l_31;
                        int l_1869 = 0x8AFFF381L;
                        int *l_1870 = (void*)0;
                        int *l_1871 = (void*)0;
                        int *l_1872 = &g_103;
                        int l_1873 = 0xC8D3F719L;
                        int *l_1874 = &g_103;
                        int *l_1875 = (void*)0;
                        int *l_1876 = &l_1869;
                        int *l_1878 = &l_1873;
                        int *l_1880 = &g_12;
                        int *l_1881 = (void*)0;
                        int *l_1882 = (void*)0;
                        int *l_1883 = &l_1869;
                        int *l_1884 = &g_161;
                        int *l_1885 = &g_161;
                        int *l_1886 = &g_1791;
                        int *l_1887 = &l_1873;
                        int *l_1888 = &l_1873;
                        int *l_1889 = &l_1799;
                        int *l_1890 = &l_1799;
                        int *l_1891 = (void*)0;
                        int *l_1892 = &g_103;
                        int *l_1893 = (void*)0;
                        int *l_1894 = (void*)0;
                        int l_1896 = 0x444E784FL;
                        int l_1897 = 0x3C970ED0L;
                        int *l_1898 = &l_1897;
                        int *l_1899 = (void*)0;
                        int *l_1900 = &g_103;
                        int *l_1902 = &l_1895;
                        int *l_1903 = &l_1869;
                        int *l_1904 = &g_161;
                        int *l_1905 = &l_1799;
                        int *l_1906 = &l_1799;
                        int *l_1907 = &l_1879;
                        int *l_1908 = &l_1869;
                        int *l_1909 = &l_1895;
                        int *l_1910 = &g_1791;
                        int l_1911 = 6L;
                        int *l_1912 = &l_1877;
                        int *l_1913 = &g_161;
                        int *l_1914 = &l_1897;
                        int *l_1915 = &l_1911;
                        int *l_1917 = (void*)0;
                        int *l_1918 = &l_1897;
                        int *l_1920 = &l_1869;
                        int *l_1921 = &l_1896;
                        int *l_1922 = &l_1873;
                        int *l_1923 = &g_161;
                        int *l_1924 = &g_103;
                        int *l_1925 = &l_1895;
                        int *l_1926 = &l_1901;
                        int *l_1927 = &l_1873;
                        int *l_1928 = &l_1800;
                        int *l_1929 = &g_161;
                        int *l_1930 = &l_1879;
                        int *l_1931 = &l_1799;
                        int *l_1932 = &l_1901;
                        int *l_1933 = (void*)0;
                        int *l_1934 = &l_1799;
                        int *l_1935 = &l_1879;
                        int *l_1936 = &g_161;
                        int *l_1937 = &l_1869;
                        int *l_1938 = &l_1873;
                        int *l_1939 = &g_161;
                        int *l_1940 = &g_12;
                        int *l_1941 = &l_1873;
                        int *l_1942 = &l_1879;
                        int *l_1943 = &l_1896;
                        int *l_1944 = (void*)0;
                        int *l_1945 = &l_1800;
                        int *l_1946 = &l_1897;
                        int *l_1947 = (void*)0;
                        int *l_1948 = &g_12;
                        int *l_1949 = &l_1816;
                        int *l_1950 = &g_161;
                        int *l_1951 = &g_12;
                        int *l_1952 = (void*)0;
                        int *l_1953 = &l_1873;
                        int *l_1955 = (void*)0;
                        int *l_1957 = &l_1895;
                        int *l_1959 = &l_1916;
                        int *l_1960 = &l_1956;
                        int *l_1961 = (void*)0;
                        int *l_1962 = &l_1799;
                        int *l_1963 = &l_1879;
                        int *l_1964 = (void*)0;
                        int *l_1965 = &l_1877;
                        int *l_1966 = &l_1916;
                        int *l_1967 = &l_1897;
                        int *l_1968 = &l_1799;
                        int *l_1969 = &l_1896;
                        int *l_1970 = &l_1897;
                        int *l_1971 = &l_1958;
                        int *l_1972 = &g_161;
                        int *l_1973 = (void*)0;
                        int *l_1974 = &l_1897;
                        int *l_1975 = &l_1879;
                        int *l_1976 = &g_12;
                        int *l_1977 = &l_1895;
                        int *l_1978 = &g_161;
                        int *l_1979 = &g_103;
                        int *l_1980 = (void*)0;
                        int *l_1981 = (void*)0;
                        int *l_1982 = &g_103;
                        int *l_1983 = &l_1800;
                        int *l_1984 = &g_103;
                        int *l_1985 = &l_1873;
                        int *l_1986 = &l_1919;
                        int *l_1987 = &l_1869;
                        int *l_1988 = &l_1879;
                        int *l_1989 = &l_1901;
                        int *l_1991 = &l_1873;
                        int *l_1992 = &l_1869;
                        int *l_1993 = &l_1911;
                        int *l_1994 = &l_1877;
                        int *l_1995 = &l_1895;
                        int *l_1996 = &l_1799;
                        int *l_1997 = &g_12;
                        int *l_1998 = (void*)0;
                        int *l_1999 = &l_1911;
                        int *l_2000 = &g_103;
                        int *l_2001 = &l_1919;
                        int *l_2002 = &l_1897;
                        int *l_2003 = &l_1896;
                        int *l_2005 = &l_1799;
                        int *l_2006 = &l_1990;
                        int *l_2007 = &l_1956;
                        int *l_2008 = &l_1901;
                        int *l_2009 = (void*)0;
                        int *l_2010 = &g_1791;
                        int *l_2011 = &l_1800;
                        int *l_2012 = &l_1799;
                        int *l_2015 = &l_1911;
                        int *l_2016 = &l_1919;
                        int *l_2018 = &l_1956;
                        int *l_2019 = &l_1911;
                        int *l_2020 = &l_1916;
                        int *l_2021 = &l_1873;
                        int *l_2022 = &l_1911;
                        int *l_2023 = (void*)0;
                        int *l_2024 = &l_1873;
                        int *l_2025 = &l_1956;
                        int *l_2027 = &l_1873;
                        unsigned l_2028 = 0x29B3EE5AL;
                        (*l_652) = (g_1858 , &g_1791);

                        ;
                        (*g_653) = (-3L);
                        (*l_1790) = ((((safe_mul_func_int8_t_s_s(((p_16 | (((l_1799 | l_1800) ^ (g_1861 != &g_1862)) , (func_25(((***g_1338) = l_1856), ((((safe_lshift_func_int16_t_s_s(l_1865, (*l_21))) == (((*l_1867) = l_1856) , 0xAD2592C2L)) , 0xAC43L) , &g_81), l_1868, l_1865, p_18) , l_1856.f0))) < l_1856.f0), 0xE8L)) == (*g_472)) || l_1856.f0) == l_1816);
                        l_2028--;
                    }

                    ;
                }

                ;
                if (((***g_1438) , (safe_mod_func_int16_t_s_s(l_2033, ((*l_69) = ((func_25(l_31, &g_68, &g_20, (++(*l_1796)), (safe_mul_func_int8_t_s_s(((*l_1790) = g_103), g_114.f2))) > 8UL) & g_70))))))
                {
                    unsigned short *l_2038 = (void*)0;
                    int l_2040 = (-8L);
                    struct S0 *l_2046 = &g_1309;
                    (*l_2046) = g_2045;
                    (*l_652) = func_48(((*g_653) >= (safe_sub_func_uint8_t_u_u((((l_2044.f0 != 0x8669L) < (*g_472)) || 1UL), (safe_sub_func_int8_t_s_s(((*g_1339) != (void*)0), (((*g_653) , l_2051) == l_2051)))))), l_1916, (*l_2051));

                    ;
                }
                else
                {
                    (*l_1790) ^= ((*p_17) ^ (-6L));
                }
                (*p_17) &= (*g_653);
                for (g_70 = 0; (g_70 < 20); g_70 = safe_add_func_uint32_t_u_u(g_70, 4))
                {
                    char l_2071 = 0xE7L;
                    l_2059 = ((safe_mod_func_int8_t_s_s((l_2056 , 0x06L), (safe_rshift_func_uint8_t_u_s(p_16, l_1856.f0)))) , &g_691);

                    ;
                    (*g_653) = (safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(1UL, (safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s((func_25((**g_107), &g_59, (*l_2051), g_20, (safe_mul_func_uint16_t_u_u(p_18, ((((func_25((****g_1407), l_2070, &g_68, g_116.f1, p_16) & p_16) | 0x6F276D3CL) || l_2071) & p_16)))) || (*g_653)), p_18)), g_141)))), p_16));
                }

                ;
            }
            else
            {
                unsigned short *l_2089 = &g_81;
                struct S0 *l_2092 = &g_2093;
                char **l_2106 = &g_2104;
                unsigned *l_2110 = &g_1086;
                int l_2113 = 0x52F58E02L;
                for (l_71 = 0; (l_71 <= (-21)); --l_71)
                {
                    unsigned l_2090 = 0xA0351764L;
                    unsigned short *l_2098 = &g_81;
                    union U1 l_2109 = {-1L};
                    for (g_81 = 0; (g_81 == 5); g_81 = safe_add_func_int32_t_s_s(g_81, 4))
                    {
                        struct S0 **l_2083 = (void*)0;
                        struct S0 **l_2084 = &l_2081;
                        unsigned short **l_2087 = (void*)0;
                        unsigned short **l_2088 = &l_2070;
                        char *l_2091 = &g_141;
                        struct S0 **l_2094 = &l_2092;
                        int l_2099 = 0L;
                        char ***l_2105 = &g_2103;
                        g_2076 = g_114;
                        (*l_1790) |= (safe_mul_func_uint8_t_u_u(((--g_504) || ((((***g_1438) >= func_25(((****g_1407) = l_2044), &g_68, l_2039, ((*l_1796) = 1UL), g_691.f1)) ^ (((*l_2084) = l_2081) == ((*l_2094) = (((*l_2091) = (((*l_153) = (safe_add_func_int16_t_s_s(((((*l_2088) = l_53) != l_2089) && g_504), (*g_67)))) != l_2090)) , l_2092)))) == 0xF9L)), l_2095));
                        (*l_1790) |= (((safe_sub_func_uint16_t_u_u((p_16 > p_18), (((*p_17) , ((l_2099 &= 0xDCL) < ((~((safe_mod_func_int16_t_s_s((g_2102 , 0xC818L), l_1792)) , p_18)) >= 0UL))) ^ 0x6C62L))) == 0xB5L) , (*p_17));
                        (*l_1790) &= (((((*l_2105) = g_2103) == l_2106) > (((((*g_2104) > (((safe_add_func_uint8_t_u_u(p_18, p_16)) & ((((*p_17) , ((***g_1438) & (func_25(l_2109, l_2039, &g_20, g_100.f2, l_1990) , (*g_67)))) & 1L) ^ 65535UL)) && (*g_472))) < (*p_17)) | g_691.f1) ^ l_1816)) <= 0x5BF1L);
                    }
                }

                ;
                (*p_17) &= (((*l_2110)++) , (g_2082.f0 > l_2113));
            }

            ;
            ;
            ;
            ++l_2156;
        }
        else
        {
            unsigned short **l_2161 = &g_67;
            unsigned short ***l_2162 = &l_2161;
            int l_2163 = 0xE72C2782L;
            unsigned **l_2167 = &l_1796;
            int l_2220 = 0xFCB47601L;
            int l_2227 = 0x0236DD5CL;
            unsigned short *l_2248 = &g_20;
            int l_2374 = (-1L);
            int l_2474 = 0xE0440C1AL;
            int l_2481 = (-1L);
            unsigned l_2521 = 18446744073709551607UL;
            unsigned l_2534 = 4UL;
            int l_2709 = (-1L);
            int l_2715 = 0x04CCC367L;
            if (((safe_mul_func_uint8_t_u_u((((((((*l_2162) = l_2161) != (void*)0) != (l_2163 ^ (l_1919 = (**g_2103)))) >= l_2163) | (*p_17)) ^ 0x97F3L), (safe_mod_func_uint32_t_u_u(func_25((***g_1338), l_2166, &g_59, p_18, g_498.f2), (*p_17))))) == g_2045.f1))
            {
                unsigned short *l_2172 = &g_68;
                union U1 *l_2182 = (void*)0;
                l_2168 = l_2167;

                ;
                p_17 = &g_12;
                g_2093 = g_1309;
                for (l_52 = (-23); (l_52 > (-15)); l_52 = safe_add_func_uint16_t_u_u(l_52, 7))
                {
                    int l_2173 = 0x7E491B8FL;
                    union U1 *l_2183 = (void*)0;
                    (*l_1790) = func_44(&l_1919, p_17, l_2172);
                    (*p_17) = (((((-3L) <= p_18) , l_2173) > p_18) < func_25(g_2174, ((g_2175 , (safe_add_func_int32_t_s_s((((**g_2103) &= ((***g_1438) == (safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((void*)0 == l_2182), l_2173)), 0xF2L)))) || 0xAAL), 0x0CE5AF68L))) , (*l_2161)), &g_59, l_2173, g_1309.f1));
                    (*g_107) = (*g_107);
                    (***g_1407) = l_2183;

                    ;
                }

                ;
            }
            else
            {
                unsigned short l_2230 = 65530UL;
                union U1 l_2237 = {0xE5L};
                int l_2251 = 0x10869683L;
                int l_2253 = 0x80D0A77AL;
                char l_2255 = 0L;
                int l_2285 = (-8L);
                int l_2286 = 0xE04E9126L;
                int l_2318 = 0L;
                int l_2319 = 0xFD4F772AL;
                int l_2399 = 0L;
                int l_2401 = 4L;
                int l_2418 = 0xD6D8C49EL;
                int l_2451 = 0x46D706D7L;
                int l_2470 = (-10L);
                int l_2500 = 0xEC48CC68L;
                unsigned l_2777 = 2UL;
                if (((*l_2167) != p_17))
                {
                    int l_2184 = 1L;
                    int *l_2185 = &g_161;
                    int *l_2186 = &l_1990;
                    int *l_2187 = &l_2163;
                    int *l_2188 = &l_1919;
                    int *l_2189 = (void*)0;
                    int *l_2190 = &l_1990;
                    int *l_2191 = &l_1990;
                    int *l_2192 = (void*)0;
                    int *l_2193 = &l_1895;
                    int *l_2194 = &l_2163;
                    int *l_2195 = &l_1895;
                    int *l_2196 = &l_1895;
                    int *l_2197 = &l_1800;
                    int *l_2198 = &l_1879;
                    int *l_2199 = &l_1799;
                    int *l_2200 = (void*)0;
                    int *l_2201 = &l_1895;
                    int *l_2202 = &l_2163;
                    int *l_2203 = &g_161;
                    int *l_2204 = &g_1791;
                    int *l_2205 = &g_103;
                    int l_2206 = 0x792DFF20L;
                    int *l_2207 = &g_1791;
                    int *l_2208 = &g_12;
                    int l_2209 = 0x8D94D886L;
                    int *l_2210 = &l_1990;
                    int *l_2211 = &g_12;
                    int *l_2212 = (void*)0;
                    int *l_2213 = &g_103;
                    int *l_2214 = &l_2206;
                    int *l_2215 = (void*)0;
                    int *l_2216 = &l_1895;
                    int *l_2217 = (void*)0;
                    int *l_2218 = &l_2163;
                    int *l_2219 = &l_1800;
                    int *l_2221 = &l_1895;
                    int *l_2222 = &l_2206;
                    int *l_2223 = &g_103;
                    int *l_2224 = &l_1879;
                    int l_2225 = (-3L);
                    int *l_2226 = &l_1799;
                    int *l_2228 = (void*)0;
                    int *l_2229 = &l_1895;
                    short l_2256 = 2L;
                    int l_2506 = 0xD0C62E86L;
                    union U1 l_2543 = {0xE5L};
                    ++l_2230;
                    if ((p_16 == 0L))
                    {
                        char *l_2246 = (void*)0;
                        char *l_2247 = &l_2033;
                        unsigned short *l_2249 = &g_68;
                        int l_2250 = (-7L);
                        int l_2252 = 0x07679B60L;
                        int l_2254 = 0x302CB25CL;
                        int *l_2257 = (void*)0;
                        int *l_2258 = (void*)0;
                        int *l_2259 = (void*)0;
                        int *l_2260 = (void*)0;
                        int *l_2261 = (void*)0;
                        int *l_2262 = &l_2227;
                        int *l_2263 = &l_2163;
                        int *l_2264 = &l_2163;
                        int *l_2265 = (void*)0;
                        int *l_2266 = &g_1791;
                        int *l_2267 = &l_1879;
                        int *l_2268 = &l_2251;
                        int *l_2269 = &g_1791;
                        int *l_2270 = &l_2163;
                        int *l_2271 = &l_2206;
                        int *l_2272 = &l_2220;
                        int *l_2273 = (void*)0;
                        int *l_2274 = &l_2227;
                        int l_2275 = 0x02F7763CL;
                        int *l_2276 = &l_2252;
                        int *l_2277 = (void*)0;
                        int *l_2278 = &l_2225;
                        int *l_2279 = (void*)0;
                        int *l_2280 = &l_1990;
                        int *l_2281 = &l_2225;
                        int *l_2282 = &l_2220;
                        int *l_2283 = &g_103;
                        int *l_2284 = &g_103;
                        int *l_2287 = &l_1990;
                        int *l_2288 = &g_103;
                        int *l_2289 = &l_2220;
                        int *l_2290 = &l_1800;
                        int *l_2291 = &g_12;
                        int *l_2292 = &g_1791;
                        int *l_2293 = (void*)0;
                        int *l_2294 = &l_2285;
                        int *l_2295 = &l_2209;
                        int *l_2296 = &l_1895;
                        int *l_2297 = (void*)0;
                        int l_2298 = 0L;
                        int *l_2299 = &l_2206;
                        int *l_2300 = &g_1791;
                        int *l_2301 = &l_2251;
                        int *l_2302 = (void*)0;
                        int *l_2303 = (void*)0;
                        int *l_2304 = &g_161;
                        int *l_2305 = &l_2286;
                        int *l_2306 = &l_1800;
                        int *l_2307 = &l_1990;
                        int *l_2308 = &l_2286;
                        int *l_2309 = &l_2254;
                        int *l_2310 = &l_2286;
                        int *l_2311 = (void*)0;
                        int *l_2312 = &g_103;
                        int *l_2313 = (void*)0;
                        int *l_2314 = &g_161;
                        int *l_2315 = &l_2163;
                        int *l_2316 = &g_161;
                        int *l_2317 = &l_2250;
                        int *l_2320 = (void*)0;
                        int *l_2321 = &l_2206;
                        int *l_2322 = (void*)0;
                        int *l_2323 = &l_2225;
                        int *l_2324 = &l_2251;
                        int *l_2325 = (void*)0;
                        int *l_2326 = &l_2275;
                        int *l_2327 = &l_1919;
                        int *l_2328 = &l_2220;
                        int *l_2329 = &l_2206;
                        int *l_2330 = (void*)0;
                        int *l_2331 = (void*)0;
                        int *l_2332 = &g_161;
                        int *l_2333 = &l_2252;
                        int *l_2334 = &l_1799;
                        int *l_2335 = &l_2251;
                        int *l_2336 = (void*)0;
                        int *l_2337 = &l_1799;
                        int *l_2338 = &l_2285;
                        int *l_2339 = &l_2250;
                        int *l_2340 = (void*)0;
                        int *l_2341 = (void*)0;
                        int *l_2342 = &l_2250;
                        int *l_2343 = &l_2250;
                        int *l_2345 = &l_2318;
                        int *l_2346 = &l_2163;
                        int *l_2347 = (void*)0;
                        int *l_2348 = &l_1799;
                        int *l_2349 = &l_2252;
                        int *l_2350 = (void*)0;
                        int *l_2351 = &l_2227;
                        int *l_2352 = &g_12;
                        int *l_2353 = (void*)0;
                        int *l_2354 = &l_2318;
                        int *l_2356 = &l_2286;
                        int *l_2357 = &l_2344;
                        int *l_2358 = &l_1800;
                        int *l_2359 = (void*)0;
                        int *l_2360 = &l_2220;
                        int l_2361 = 0x63702444L;
                        int *l_2362 = &l_1879;
                        int *l_2363 = &l_2163;
                        int *l_2364 = (void*)0;
                        int *l_2365 = &l_2344;
                        int *l_2366 = &l_1919;
                        int *l_2367 = &l_2206;
                        int *l_2368 = &l_2220;
                        int *l_2369 = &l_1919;
                        int *l_2370 = &l_2275;
                        int *l_2371 = &l_2361;
                        int *l_2372 = &l_2209;
                        int *l_2375 = &l_2209;
                        int *l_2376 = &l_2227;
                        int *l_2377 = &l_2319;
                        int *l_2378 = &l_2285;
                        int *l_2379 = &l_2318;
                        int *l_2380 = &g_161;
                        int *l_2381 = &l_2209;
                        int *l_2382 = &l_2373;
                        int *l_2383 = &l_2220;
                        int *l_2384 = &l_2355;
                        int *l_2385 = &l_2374;
                        int *l_2386 = (void*)0;
                        int *l_2387 = (void*)0;
                        int *l_2388 = &l_2163;
                        int *l_2389 = &l_2209;
                        int *l_2390 = &l_2285;
                        int *l_2391 = &l_2251;
                        int *l_2393 = &l_2318;
                        int *l_2394 = &l_2361;
                        int *l_2395 = (void*)0;
                        int *l_2396 = &l_2225;
                        int *l_2397 = &l_1879;
                        int *l_2398 = &l_2286;
                        int *l_2402 = (void*)0;
                        int *l_2403 = (void*)0;
                        int *l_2404 = &l_2206;
                        int l_2405 = (-10L);
                        int *l_2406 = &l_1800;
                        int *l_2407 = &l_2400;
                        int *l_2408 = &l_2227;
                        int *l_2409 = &l_2220;
                        int *l_2410 = &g_161;
                        int *l_2411 = &l_2275;
                        int *l_2412 = &g_12;
                        int *l_2413 = (void*)0;
                        int *l_2414 = &l_2225;
                        int *l_2415 = &l_1879;
                        int *l_2416 = (void*)0;
                        int *l_2417 = &l_2250;
                        int *l_2419 = &l_2401;
                        int *l_2420 = &l_2399;
                        int *l_2421 = &l_2206;
                        int *l_2422 = &l_2163;
                        int *l_2423 = &l_2361;
                        int *l_2424 = &g_103;
                        int *l_2425 = &l_2285;
                        int *l_2427 = &l_2250;
                        int *l_2428 = &l_2250;
                        int *l_2429 = &l_2355;
                        int *l_2430 = &l_2225;
                        int *l_2431 = &l_2400;
                        int *l_2432 = &l_1800;
                        int *l_2433 = (void*)0;
                        int *l_2434 = (void*)0;
                        int *l_2435 = (void*)0;
                        int *l_2436 = &l_2225;
                        int *l_2437 = &l_2355;
                        int *l_2438 = &l_2392;
                        int *l_2439 = &l_2373;
                        int *l_2440 = &l_2399;
                        int *l_2441 = &l_1800;
                        int *l_2442 = &l_2225;
                        int *l_2443 = &l_2400;
                        int *l_2444 = &l_1895;
                        int l_2445 = 1L;
                        int *l_2447 = &l_2401;
                        int *l_2448 = &l_2254;
                        int *l_2449 = &l_1895;
                        int *l_2450 = &l_2400;
                        int *l_2452 = &l_2319;
                        int *l_2453 = (void*)0;
                        int *l_2455 = &l_2446;
                        int *l_2456 = &g_1791;
                        int *l_2457 = &l_2355;
                        int *l_2458 = &l_2392;
                        int *l_2459 = &l_2225;
                        int *l_2460 = &l_2206;
                        int *l_2461 = &l_2355;
                        int *l_2462 = &l_2220;
                        int *l_2463 = (void*)0;
                        int *l_2464 = (void*)0;
                        int *l_2465 = (void*)0;
                        int *l_2466 = &l_1879;
                        int *l_2467 = &l_2418;
                        int *l_2468 = (void*)0;
                        int *l_2469 = (void*)0;
                        int *l_2471 = &l_2209;
                        int *l_2472 = &l_2373;
                        int *l_2473 = &l_2250;
                        int *l_2475 = &l_1990;
                        int *l_2476 = &l_2163;
                        int *l_2477 = &l_2401;
                        int *l_2478 = &l_2451;
                        int *l_2479 = &l_2319;
                        int *l_2480 = &l_2374;
                        int *l_2482 = &l_2225;
                        int *l_2483 = (void*)0;
                        int *l_2484 = &l_2401;
                        int *l_2485 = &l_1800;
                        int *l_2486 = &l_2400;
                        int *l_2487 = (void*)0;
                        int *l_2488 = &l_2355;
                        int *l_2489 = &l_2399;
                        int *l_2490 = &l_1879;
                        int *l_2491 = (void*)0;
                        int *l_2492 = &l_2318;
                        int *l_2493 = &l_2275;
                        int *l_2494 = &l_2374;
                        int *l_2495 = (void*)0;
                        int *l_2496 = &l_2401;
                        int *l_2497 = (void*)0;
                        int *l_2498 = &l_2426;
                        int *l_2499 = (void*)0;
                        int *l_2501 = &l_2481;
                        int *l_2502 = (void*)0;
                        int *l_2503 = &l_1800;
                        int *l_2504 = &l_2318;
                        int *l_2505 = &l_2470;
                        int *l_2507 = &l_2254;
                        int *l_2508 = &l_2285;
                        int *l_2509 = &l_1895;
                        int *l_2511 = (void*)0;
                        int *l_2512 = &l_1879;
                        int *l_2513 = &l_2451;
                        int *l_2514 = &l_1879;
                        int *l_2515 = &l_2399;
                        int *l_2516 = (void*)0;
                        int l_2517 = 0L;
                        int *l_2518 = (void*)0;
                        int *l_2519 = &l_1879;
                        int *l_2520 = &l_2227;
                        (*l_2207) |= (safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(func_25(l_2237, (((*g_2104) != ((**g_1439) > (func_25((***g_1338), l_2039, &g_59, (*l_2193), (safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s((*g_2104), (~(safe_rshift_func_uint16_t_u_s(((l_1919 = ((*l_2247) = (safe_lshift_func_uint8_t_u_s((l_1799 , 0UL), (*g_2104))))) , 65535UL), 8))))), p_18))) || p_16))) , l_2248), l_2249, g_1368.f1, p_16), g_457)), l_2137));
                        ++l_2521;
                    }
                    else
                    {
                        (*l_652) = ((safe_sub_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((g_1795.f1 > ((l_2253 && (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(0x3AL, (*l_2202))), 4))) , 7UL)), (p_16 , 4294967289UL))) >= (*l_2211)), 0x0CL)) > l_2534), (-1L))) , p_17);

                        ;
                        l_2399 ^= ((p_16 > p_18) == (4L && 65529UL));
                    }
                    if ((((*l_1790) || l_2163) != p_18))
                    {
                        int *l_2552 = &l_2137;
                        (*l_2214) = (safe_mul_func_int16_t_s_s(0xFC04L, ((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(g_1351.f0, ((*g_653) = (func_25(l_2543, &g_59, l_2070, p_18, l_2392) , (-3L))))), (*l_2221))), 8)) , l_2137)));
                        (*l_2218) ^= ((*l_2229) = (safe_mod_func_int8_t_s_s(((((((-2L) ^ (~(l_1799 && p_18))) < 0x7AFDL) <= p_16) ^ l_2454) >= (*g_653)), l_2426)));
                        l_2553 = (void*)0;
                    }
                    else
                    {
                        union U1 l_2556 = {-1L};
                        unsigned l_2571 = 0x40181C46L;
                        unsigned short *l_2581 = &g_20;
                        int l_2583 = 0xB93A698AL;
                        int *l_2584 = (void*)0;
                        int *l_2585 = &l_2344;
                        int *l_2586 = &l_2583;
                        int *l_2587 = (void*)0;
                        int *l_2588 = &l_2481;
                        int *l_2589 = (void*)0;
                        int *l_2590 = &l_2446;
                        int *l_2591 = &l_2446;
                        int *l_2592 = (void*)0;
                        int *l_2593 = &l_2355;
                        int *l_2594 = &l_2474;
                        int *l_2595 = &l_2251;
                        int *l_2596 = &l_2470;
                        int *l_2597 = &l_1990;
                        int *l_2598 = &l_1919;
                        int *l_2599 = &l_2399;
                        int *l_2600 = &l_1879;
                        int *l_2601 = &l_2225;
                        int *l_2602 = &l_2286;
                        int *l_2603 = (void*)0;
                        int *l_2604 = &l_2373;
                        int *l_2605 = &l_2399;
                        int *l_2607 = &l_2344;
                        int *l_2608 = &l_2355;
                        int *l_2609 = &l_2474;
                        int *l_2610 = &l_2373;
                        int *l_2611 = &l_2426;
                        int *l_2612 = &l_1919;
                        int *l_2613 = (void*)0;
                        int *l_2614 = &l_2399;
                        int *l_2615 = &l_2426;
                        int *l_2616 = (void*)0;
                        int *l_2617 = &l_1800;
                        int *l_2618 = &l_2286;
                        int *l_2619 = &l_1800;
                        int *l_2620 = (void*)0;
                        int l_2621 = 0xE826E383L;
                        int *l_2622 = &l_1990;
                        int *l_2623 = &l_2355;
                        int *l_2624 = (void*)0;
                        int *l_2625 = &l_1895;
                        int *l_2626 = &l_2446;
                        int *l_2627 = &g_2606;
                        int *l_2628 = &l_2392;
                        int *l_2629 = &l_2206;
                        int *l_2630 = &l_2446;
                        int *l_2631 = &l_2373;
                        int *l_2632 = &g_12;
                        int *l_2633 = &l_2220;
                        int *l_2634 = &l_2220;
                        int *l_2635 = (void*)0;
                        int *l_2636 = &g_161;
                        int *l_2637 = &l_2209;
                        int *l_2638 = &l_2400;
                        int *l_2639 = (void*)0;
                        int *l_2640 = &l_1800;
                        int *l_2641 = &l_2225;
                        int *l_2642 = &l_1895;
                        int *l_2643 = &l_2418;
                        int *l_2644 = &l_2206;
                        int *l_2645 = (void*)0;
                        int *l_2646 = &l_2319;
                        int *l_2647 = &l_2474;
                        int *l_2648 = &l_2163;
                        int *l_2649 = &l_1799;
                        int *l_2650 = &l_2470;
                        int *l_2651 = &l_2400;
                        int *l_2652 = &l_2426;
                        int *l_2653 = &g_12;
                        int *l_2654 = (void*)0;
                        int *l_2655 = &g_103;
                        int *l_2656 = &l_2399;
                        int *l_2657 = &l_2418;
                        int *l_2658 = &l_2510;
                        int *l_2659 = &l_1800;
                        int *l_2660 = &l_2506;
                        int *l_2661 = &l_2418;
                        int *l_2662 = &l_2344;
                        int *l_2663 = &l_2227;
                        int *l_2664 = (void*)0;
                        int *l_2665 = &l_2227;
                        int *l_2666 = &l_2470;
                        int *l_2667 = &l_2206;
                        int *l_2668 = &l_2474;
                        int *l_2669 = &l_2470;
                        int *l_2670 = &l_2506;
                        int *l_2671 = (void*)0;
                        int *l_2672 = &l_2318;
                        int *l_2673 = &l_2251;
                        int *l_2674 = &l_2621;
                        int *l_2675 = &l_1895;
                        int l_2676 = 0x391D41E6L;
                        int *l_2677 = &l_1800;
                        int *l_2678 = &l_2373;
                        int *l_2679 = &l_2451;
                        int *l_2680 = &l_2470;
                        int *l_2681 = &l_1799;
                        int *l_2682 = &l_2163;
                        int *l_2683 = &l_2399;
                        int *l_2684 = &l_2392;
                        int *l_2685 = &l_1990;
                        int *l_2686 = &l_1879;
                        int *l_2687 = &g_12;
                        int *l_2688 = &l_2446;
                        int *l_2689 = &l_2510;
                        int *l_2690 = &l_2251;
                        int *l_2691 = &l_1879;
                        int *l_2692 = &l_2418;
                        int *l_2693 = &l_2227;
                        int *l_2694 = (void*)0;
                        int *l_2695 = &l_1895;
                        int *l_2696 = &l_2209;
                        int *l_2697 = &l_2426;
                        int *l_2698 = &l_1990;
                        int *l_2699 = &l_2286;
                        int *l_2700 = &l_2451;
                        int *l_2701 = &l_2220;
                        int *l_2702 = &l_2676;
                        int *l_2703 = (void*)0;
                        int *l_2704 = &l_2451;
                        int *l_2705 = &l_2426;
                        int *l_2706 = &l_2209;
                        int *l_2707 = &g_103;
                        int *l_2708 = &l_2163;
                        int *l_2710 = &l_2506;
                        int *l_2711 = &l_2285;
                        int *l_2712 = &l_2392;
                        int *l_2713 = &l_1895;
                        int *l_2714 = &l_1895;
                        int l_2716 = 0x7433927BL;
                        int *l_2717 = (void*)0;
                        int *l_2718 = &l_2716;
                        int *l_2719 = &l_1879;
                        int *l_2720 = &l_2319;
                        int *l_2721 = &l_2454;
                        int *l_2722 = (void*)0;
                        int *l_2723 = &l_1895;
                        int *l_2724 = &l_2676;
                        int *l_2725 = &l_1879;
                        int *l_2726 = &l_2392;
                        int *l_2727 = &l_2355;
                        int *l_2728 = &l_2286;
                        int *l_2729 = &l_1879;
                        int *l_2730 = &l_2285;
                        int *l_2731 = (void*)0;
                        int *l_2732 = &l_2227;
                        int *l_2733 = &l_2510;
                        int *l_2734 = &l_2506;
                        int *l_2735 = (void*)0;
                        int *l_2736 = &l_2418;
                        int *l_2737 = &l_2676;
                        int *l_2738 = &l_2344;
                        int *l_2739 = &l_1895;
                        int *l_2740 = &l_2621;
                        int *l_2741 = &l_2676;
                        int *l_2742 = &l_2209;
                        int *l_2743 = &l_2399;
                        int *l_2744 = &l_2227;
                        int *l_2745 = (void*)0;
                        int *l_2746 = &l_2418;
                        int *l_2747 = (void*)0;
                        int *l_2748 = (void*)0;
                        int *l_2749 = &l_2451;
                        int l_2750 = 0xA095B097L;
                        int *l_2751 = (void*)0;
                        int *l_2752 = (void*)0;
                        int *l_2753 = &l_2474;
                        int *l_2754 = (void*)0;
                        int *l_2755 = &g_103;
                        int *l_2756 = &g_2606;
                        int *l_2757 = &l_2446;
                        int *l_2758 = &l_2220;
                        int *l_2759 = &l_2676;
                        int *l_2760 = &l_2446;
                        int *l_2761 = &g_103;
                        int *l_2762 = &l_2401;
                        int *l_2763 = &l_2418;
                        int *l_2764 = &l_2474;
                        int *l_2765 = &g_103;
                        int *l_2766 = &l_2374;
                        int *l_2767 = &l_2621;
                        int *l_2768 = (void*)0;
                        int *l_2769 = &l_2285;
                        int *l_2770 = &l_2506;
                        int *l_2771 = &l_2583;
                        int *l_2772 = &g_161;
                        int *l_2773 = &l_2583;
                        int *l_2774 = &g_12;
                        int *l_2775 = &l_2454;
                        int *l_2776 = (void*)0;
                        (*l_2187) ^= (safe_add_func_uint16_t_u_u((l_2543 , (***g_1438)), (((*l_2190) = (func_25(l_2556, &g_68, &g_68, p_16, p_16) && 0xCCL)) || g_2093.f2)));
                        (*l_2199) &= (safe_add_func_int16_t_s_s((((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(2L, ((((safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s((*p_17), (+l_2571))), (safe_sub_func_int16_t_s_s(0L, p_16)))) | (safe_lshift_func_int16_t_s_s(l_2556.f0, 7))) != (~((safe_sub_func_uint32_t_u_u(((p_18 , (safe_sub_func_uint32_t_u_u(0xB67135D3L, (func_25(l_2580, &g_59, l_2581, p_18, p_16) < l_2253)))) && (**g_2103)), g_115.f0)) | l_2582))) , p_16))), 0xB6L)), p_18)), p_16)) ^ (-5L)) ^ (*g_67)), l_2534));
                        --l_2777;
                    }
                    for (l_2510 = (-21); (l_2510 != (-27)); l_2510 = safe_sub_func_int8_t_s_s(l_2510, 1))
                    {
                        (*l_652) = (void*)0;

                        ;
                    }
                }
                else
                {
                    int *l_2782 = (void*)0;
                    int *l_2783 = &l_1800;
                    int *l_2784 = &l_2451;
                    l_2785--;
                }
            }

            ;
            ;
        }

        ;
        ;
        ;
        ;
    }
    else
    {
        int *l_2788 = &g_12;
        int *l_2789 = &l_2510;
        int *l_2790 = &g_103;
        int *l_2791 = &g_12;
        int *l_2792 = &l_1895;
        int *l_2793 = &g_1791;
        int l_2794 = 1L;
        int *l_2795 = (void*)0;
        int *l_2796 = (void*)0;
        int *l_2797 = &g_1791;
        int *l_2798 = &l_2510;
        int *l_2799 = &g_161;
        int l_2800 = 0x61D371EAL;
        int *l_2801 = &l_2355;
        int *l_2802 = &l_2800;
        int *l_2803 = &g_2606;
        int *l_2804 = &l_2373;
        int *l_2805 = &l_2373;
        int *l_2806 = (void*)0;
        int *l_2807 = &g_103;
        int l_2808 = 0x4AC85D90L;
        int *l_2809 = &l_2355;
        int *l_2810 = &g_2606;
        int *l_2811 = &l_2794;
        int *l_2812 = &g_12;
        int *l_2813 = &l_1895;
        int *l_2814 = (void*)0;
        int *l_2815 = (void*)0;
        int l_2816 = 0xA4571F5AL;
        int *l_2817 = &l_2794;
        int *l_2818 = &g_103;
        int *l_2819 = &g_2606;
        int *l_2820 = &l_1895;
        int *l_2821 = (void*)0;
        int *l_2822 = (void*)0;
        int l_2824 = (-8L);
        int *l_2825 = &g_2606;
        int l_2826 = 1L;
        int *l_2827 = (void*)0;
        int *l_2828 = &g_12;
        int *l_2829 = &l_2808;
        int *l_2830 = &l_1895;
        int *l_2831 = &g_1791;
        int *l_2832 = &l_1895;
        int *l_2833 = &l_2794;
        int *l_2834 = &l_2794;
        int *l_2836 = &g_161;
        int *l_2837 = &g_2606;
        int *l_2838 = &l_2794;
        int *l_2839 = (void*)0;
        int *l_2840 = &l_2823;
        int *l_2841 = &l_1895;
        int *l_2842 = &l_2816;
        int *l_2843 = (void*)0;
        int *l_2844 = &g_103;
        int *l_2845 = &l_2510;
        int *l_2846 = &g_103;
        int *l_2847 = &l_2355;
        int *l_2848 = &l_2373;
        int *l_2849 = &l_1879;
        int *l_2850 = &l_2823;
        int *l_2851 = &l_1879;
        int *l_2852 = (void*)0;
        unsigned l_2853 = 0x56923930L;
        unsigned short **l_2858 = (void*)0;
        unsigned short **l_2859 = &l_53;
        unsigned l_2860 = 1UL;
        --l_2853;
        (*l_2812) = (((0x2DL || (safe_add_func_int8_t_s_s(((**g_2103) = (func_32(&g_68, ((*l_2859) = (l_58 = &l_2582)), ((((*l_2817) &= l_2860) == (0x55E9L && p_16)) != (safe_add_func_uint16_t_u_u((g_81 ^= (((**g_2103) || (((*l_153)--) > 0x6EL)) ^ ((safe_sub_func_int16_t_s_s(func_25(l_31, &l_2582, &l_2582, p_16, p_16), (*l_2836))) || g_2867))), p_16))), g_68, &g_20) , 0L)), g_2093.f1))) , (void*)0) == (void*)0);

        ;
        ;
        p_17 = (*l_652);

        ;
        for (l_2824 = 0; (l_2824 >= 3); l_2824++)
        {
            unsigned char l_2872 = 0x95L;
            union U1 ******l_2887 = &g_2884;
            for (l_2510 = 0; (l_2510 < (-17)); l_2510 = safe_sub_func_uint8_t_u_u(l_2510, 1))
            {
                unsigned *l_2877 = (void*)0;
                unsigned *l_2878 = &l_2156;
                int l_2879 = 0xF5D2F71BL;
                unsigned *l_2880 = (void*)0;
                unsigned *l_2881 = &g_1086;
                union U1 *******l_2885 = (void*)0;
                union U1 *******l_2886 = &g_2883;
                (*l_2817) = ((*g_653) = l_2872);
                l_2879 = (safe_rshift_func_uint16_t_u_s((g_2882 , p_16), 4));
                (*l_2804) |= (((*l_2886) = g_2883) == l_2887);
            }
            for (l_1879 = 0; (l_1879 >= 26); l_1879++)
            {
                g_2890 = g_2082;
            }
        }
    }

    ;
    ;
    ;
    ;
    ;

    ;
    ;
    ;

    for (g_1791 = 0; (g_1791 <= (-22)); g_1791--)
    {
        union U1 l_2895 = {0L};
        unsigned short l_2896 = 0x88B7L;
        char **l_2898 = (void*)0;
        char **l_2899 = &g_2104;
        union U1 l_2900 = {-6L};
        for (l_2373 = 0; (l_2373 > (-2)); l_2373--)
        {
            char **l_2897 = (void*)0;
            int *l_2902 = &l_2823;
            union U1 *l_2905 = &l_2895;
            (*l_2902) |= (func_25(l_2895, &g_20, &g_20, l_2896, ((((l_2898 = l_2897) != l_2899) <= (func_25(l_2900, &l_2582, (g_2045 , g_2901), g_1791, g_592) <= 4294967288UL)) && g_283.f1)) , (-7L));
            if ((*g_653))
            {
                union U1 l_2903 = {-1L};
                union U1 *l_2904 = &l_31;
                int *l_2906 = &g_2606;
                if (func_25(l_2903, &l_2896, &g_68, func_25(((*l_2904) = l_2903), &g_20, &l_2582, func_25(l_2900, &l_2582, &g_59, l_2895.f0, l_2903.f0), l_2895.f0), l_2900.f0))
                {
                    l_2905 = ((*g_1339) = &l_2900);

                    ;
                    ;
                }
                else
                {
                    l_2906 = (void*)0;

                    ;
                }

                ;
                ;
                ;
                (*g_1339) = (void*)0;

                ;
            }
            else
            {
                (*g_653) = (!(((*l_53) = func_25((*l_2905), &g_59, &l_2896, l_2900.f0, g_1368.f0)) ^ 0xF51CL));
            }

            ;
            return p_18;
        }
        (*l_652) = (void*)0;

        ;
    }
    (*l_1790) &= (*g_653);
    return l_2907;
}







static unsigned short func_25(union U1 p_26, unsigned short * p_27, unsigned short * p_28, unsigned p_29, unsigned p_30)
{
    unsigned l_669 = 18446744073709551613UL;
    short ****l_684 = &g_477;
    struct S0 **l_686 = (void*)0;
    int l_698 = 0xB768BDAEL;
    int l_777 = 7L;
    int l_805 = 0x6CECA46EL;
    int l_845 = 0x23805A0BL;
    int l_874 = 2L;
    int l_974 = (-1L);
    int l_1037 = (-2L);
    int l_1048 = 0L;
    union U1 *l_1344 = &g_105;
    char *l_1382 = &g_141;
    unsigned char l_1401 = 0x73L;
    for (g_103 = 7; (g_103 == (-16)); g_103 = safe_sub_func_int32_t_s_s(g_103, 9))
    {
        int *l_670 = &g_12;
        short l_680 = (-7L);
        short ****l_685 = &g_477;
        int l_705 = 1L;
        int l_732 = 0L;
        int l_739 = (-9L);
        short l_792 = 0x49E8L;
        int l_818 = (-1L);
        int l_861 = 0xE1705295L;
        int l_869 = 0L;
        char l_908 = 0x79L;
        int l_917 = 0x8DEDDCC7L;
        int l_955 = 0x1089C80DL;
        int l_1005 = 0x49451FE8L;
        int l_1066 = 0x8387DD2CL;
        int *l_1106 = &l_698;
        unsigned l_1297 = 0xDD31CFC8L;
        union U1 ***l_1342 = &g_1339;
        short l_1388 = 0L;
        char l_1565 = 0L;
        union U1 *l_1769 = &g_105;
        l_669 &= 0xC7330FEDL;
    }
    return (*g_67);
}







static struct S0 func_32(unsigned short * p_33, unsigned short * p_34, unsigned p_35, int p_36, unsigned short * p_37)
{
    unsigned l_654 = 5UL;
    unsigned short **l_659 = (void*)0;
    unsigned short *l_660 = (void*)0;
    unsigned short *l_661 = &g_68;
    int l_662 = (-7L);
    unsigned char *l_663 = &g_83;
    int **l_664 = &g_653;
    int *l_665 = &g_161;
    (*l_664) = (((*g_472) = (((p_35 , func_44(((*l_664) = func_48(((((*l_663) ^= (g_154 ^ ((((((l_654 , ((safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((((((l_660 = &g_59) == ((*p_33) , l_661)) ^ p_36) < (((*g_67) = ((l_662 = l_654) != (*p_33))) != l_654)) , g_592), 0xE9C8482EL)), 0)) , l_662)) || 249UL) < l_654) & l_654) >= l_654) , p_36))) != l_654) > p_36), p_36, l_661)), l_665, p_34)) == 0xC005L) , p_35)) , (*l_664));

    ;
    ;
    ;
    return g_666;
}







static int * func_38(unsigned short p_39, unsigned char p_40, char p_41, unsigned char p_42, char p_43)
{
    unsigned short *l_158 = &g_59;
    int *l_160 = &g_161;
    int **l_159 = &l_160;
    char *l_165 = &g_141;
    char **l_164 = &l_165;
    int l_192 = 0x6B46617FL;
    int l_251 = 9L;
    union U1 *l_282 = &g_105;
    int l_300 = 1L;
    int l_301 = (-6L);
    int l_434 = 4L;
    short *l_468 = (void*)0;
    short **l_467 = &l_468;
    short ****l_491 = &g_477;
    unsigned short **l_590 = &g_67;
    struct S0 *l_640 = &g_100;
    struct S0 **l_641 = &l_640;
    unsigned char *l_650 = (void*)0;
    unsigned char *l_651 = &g_83;
    if (((safe_lshift_func_int16_t_s_s(p_41, (safe_lshift_func_uint16_t_u_u((((*l_164) = &p_41) != &p_41), (**l_159))))) , 0x82652714L))
    {
        unsigned char l_166 = 0x58L;
        int l_173 = (-8L);
        int l_175 = 0L;
        int l_184 = 0x2B33A361L;
        int l_211 = 0L;
        int l_229 = 0x59B2D93AL;
        unsigned short l_279 = 7UL;
        short *l_292 = &g_70;
        short **l_291 = &l_292;
        int l_297 = (-1L);
        char l_298 = 2L;
        unsigned char l_302 = 0xBDL;
        union U1 **l_312 = &l_282;
        if (g_142)
        {
            (**l_159) = (~p_40);
        }
        else
        {
            int *l_167 = &g_103;
            int *l_168 = &g_12;
            int *l_169 = &g_161;
            int *l_170 = &g_103;
            int *l_171 = &g_161;
            int *l_172 = &g_12;
            int *l_174 = &g_161;
            int *l_176 = &g_103;
            int *l_177 = (void*)0;
            int *l_178 = &g_103;
            int l_179 = 0x8DCA0F1CL;
            int *l_180 = &g_161;
            int *l_181 = &l_179;
            int *l_182 = (void*)0;
            int *l_183 = (void*)0;
            int *l_185 = &g_103;
            int *l_186 = (void*)0;
            int *l_187 = &g_103;
            int *l_188 = &g_161;
            int *l_189 = &l_184;
            int *l_190 = &g_161;
            int *l_191 = &g_12;
            int *l_193 = &l_192;
            int *l_194 = &g_12;
            int *l_195 = &l_179;
            int *l_196 = &l_173;
            int *l_197 = &g_161;
            int *l_198 = &g_103;
            int *l_199 = (void*)0;
            int *l_200 = &g_103;
            int *l_201 = &g_12;
            int *l_202 = &g_12;
            int *l_203 = (void*)0;
            int *l_204 = &g_103;
            int *l_205 = &l_175;
            int *l_206 = &l_173;
            int *l_207 = &l_173;
            int *l_208 = &g_12;
            int *l_209 = (void*)0;
            int *l_210 = &l_175;
            int *l_212 = &l_173;
            int *l_213 = &l_192;
            int *l_214 = &l_175;
            int *l_215 = &l_184;
            int *l_216 = (void*)0;
            int *l_217 = &g_161;
            int *l_218 = &g_103;
            int *l_219 = &l_175;
            int *l_220 = &g_103;
            int *l_221 = &l_173;
            int *l_222 = (void*)0;
            int *l_223 = &l_175;
            int *l_224 = &g_161;
            int *l_225 = (void*)0;
            int *l_226 = &l_192;
            int *l_227 = &g_103;
            int *l_228 = &g_12;
            int *l_230 = &l_179;
            int *l_231 = &l_179;
            int *l_232 = &l_179;
            int *l_233 = &g_161;
            int *l_234 = &g_161;
            int *l_235 = &l_173;
            int *l_236 = &l_211;
            int *l_237 = &g_12;
            int *l_238 = &g_103;
            int *l_239 = &g_161;
            int *l_240 = &g_12;
            int *l_241 = (void*)0;
            int *l_242 = &l_179;
            int *l_243 = (void*)0;
            int *l_244 = &g_161;
            int *l_245 = &l_179;
            int l_246 = 5L;
            int *l_247 = &l_229;
            int *l_248 = (void*)0;
            int *l_249 = &l_184;
            int *l_250 = (void*)0;
            int *l_252 = &l_251;
            int *l_253 = &l_211;
            int *l_254 = &l_211;
            int *l_255 = &l_229;
            int *l_256 = &g_161;
            int l_257 = 0x7ACCF6E1L;
            int *l_258 = (void*)0;
            int *l_259 = &l_251;
            int *l_260 = (void*)0;
            int *l_261 = &l_211;
            int l_262 = 0xA76FC585L;
            int *l_263 = &l_246;
            int *l_264 = &l_175;
            int *l_265 = &l_184;
            int *l_266 = &l_246;
            int *l_267 = &l_262;
            int *l_268 = (void*)0;
            int *l_269 = &g_12;
            int *l_270 = &l_257;
            int *l_271 = &g_161;
            int *l_272 = &l_192;
            int *l_273 = &l_211;
            int *l_274 = (void*)0;
            int *l_275 = &g_12;
            int *l_276 = &g_103;
            int *l_277 = &l_173;
            int l_278 = 1L;
            unsigned char l_288 = 0x9BL;
            (**l_159) = l_166;
            --l_279;
            (*l_208) = ((((*g_67) >= (**l_159)) > (*l_204)) && (((((*g_107) != l_282) != 0x743CD8D7L) , g_283) , l_288));
            for (l_246 = 0; (l_246 == 25); l_246 = safe_add_func_uint16_t_u_u(l_246, 9))
            {
                unsigned char l_307 = 0xF2L;
                int l_308 = 0x038AAF25L;
                if ((0UL <= (*g_67)))
                {
                    short ***l_293 = &l_291;
                    (*l_293) = l_291;
                    return &g_12;


                }
                else
                {
                    int l_296 = 0xB1F7435FL;
                    int l_299 = 0xF440EA31L;
                    for (l_288 = 0; (l_288 < 5); l_288 = safe_add_func_int16_t_s_s(l_288, 7))
                    {
                        return &g_103;


                    }
                    l_302++;
                    if ((*l_160))
                    {
                        (*l_159) = (func_73((g_67 = &g_68), ((g_100.f1 <= ((p_39 > g_100.f0) >= 0xE3L)) , (void*)0), &g_59, ((safe_sub_func_uint8_t_u_u((((**l_291) = l_307) <= ((((g_116.f2 || p_40) < l_307) ^ g_115.f1) > g_81)), 9L)) , l_229)) , (*l_159));

                        ;
                    }
                    else
                    {
                        unsigned l_309 = 1UL;
                        (*l_226) = g_91;
                        if (p_39)
                            break;
                        l_204 = (void*)0;

                        ;
                        l_309--;
                    }
                }
            }

            ;
        }
        (*l_312) = l_282;
    }
    else
    {
        int l_344 = 0L;
        int l_353 = 0x3201CB5AL;
        int l_395 = (-7L);
        short **l_466 = (void*)0;
        short ****l_493 = &g_477;
        char l_499 = (-1L);
        union U1 *l_505 = &g_105;
        unsigned l_555 = 0x7CFA881EL;
        for (g_141 = 0; (g_141 != 27); ++g_141)
        {
            int *l_315 = &l_300;
            int *l_316 = &g_12;
            int *l_317 = &l_301;
            int *l_318 = (void*)0;
            int *l_319 = &l_301;
            int *l_320 = &l_300;
            int l_321 = (-1L);
            int *l_322 = &g_161;
            int *l_323 = &l_192;
            int *l_324 = &l_300;
            int *l_325 = &g_103;
            int *l_326 = &l_301;
            int l_327 = 1L;
            int *l_328 = &l_327;
            int *l_329 = &l_327;
            int *l_330 = &g_161;
            int *l_331 = &l_327;
            int *l_332 = &l_301;
            int *l_333 = (void*)0;
            int *l_334 = (void*)0;
            int *l_335 = &l_192;
            int *l_336 = (void*)0;
            int *l_337 = &l_321;
            int *l_338 = (void*)0;
            int *l_339 = &g_12;
            int *l_340 = &l_301;
            int *l_341 = &g_12;
            int l_342 = 0xEA880BC6L;
            int *l_343 = (void*)0;
            int *l_345 = (void*)0;
            int *l_346 = &l_300;
            int l_347 = 0x57BED906L;
            int *l_348 = &l_301;
            int *l_349 = &l_347;
            int *l_350 = &l_327;
            int *l_351 = &l_327;
            int *l_352 = &l_342;
            int *l_354 = &g_12;
            int *l_355 = &l_300;
            int *l_356 = &l_342;
            int *l_357 = &l_321;
            int *l_358 = &l_342;
            int *l_359 = &l_342;
            int *l_360 = &g_161;
            int *l_361 = (void*)0;
            int *l_362 = (void*)0;
            int *l_363 = (void*)0;
            int *l_364 = &g_103;
            int *l_365 = &g_161;
            int *l_366 = &g_12;
            int *l_367 = &l_251;
            int *l_368 = (void*)0;
            int *l_369 = (void*)0;
            int *l_370 = &l_300;
            int *l_371 = (void*)0;
            int *l_372 = (void*)0;
            int *l_373 = &l_192;
            int *l_374 = &l_301;
            int *l_375 = &l_321;
            int *l_376 = &g_103;
            int *l_377 = &g_161;
            int *l_378 = &l_342;
            int *l_379 = &l_342;
            int *l_380 = (void*)0;
            int *l_381 = &l_300;
            int *l_382 = &l_301;
            int *l_383 = &g_103;
            int *l_384 = &l_342;
            int *l_385 = &l_251;
            int *l_386 = &l_300;
            int *l_387 = &l_353;
            int *l_388 = &l_251;
            int *l_389 = &l_347;
            int *l_390 = &l_327;
            int *l_391 = &l_300;
            int l_392 = 0x3B6CD964L;
            int *l_393 = &l_342;
            int *l_394 = &l_300;
            int *l_396 = &l_321;
            int *l_397 = &l_395;
            int *l_398 = &g_12;
            int *l_399 = &g_161;
            int *l_400 = (void*)0;
            int *l_401 = (void*)0;
            int *l_402 = (void*)0;
            int *l_403 = &l_395;
            int *l_404 = &g_161;
            int *l_405 = &l_301;
            int *l_406 = &l_395;
            unsigned l_407 = 0x5CD96861L;
            volatile struct S0 *l_411 = &g_410;
            l_407++;
            if (g_141)
                break;
            (*l_411) = g_410;
        }
        (*l_160) = 0xC87A73CAL;
        (*l_160) = 0xFD501939L;
        for (g_141 = 20; (g_141 >= 14); g_141 = safe_sub_func_uint8_t_u_u(g_141, 9))
        {
            unsigned short l_423 = 0xE5DDL;
            int l_454 = 0xFE76519DL;
            short l_481 = 0xBF16L;
            short *****l_492 = &l_491;
            short ****l_494 = &g_477;
            unsigned char l_495 = 255UL;
            int l_538 = 0L;
            unsigned l_637 = 4294967287UL;
            for (l_395 = 24; (l_395 < 29); l_395++)
            {
                struct S0 *l_416 = &g_115;
                struct S0 **l_417 = &l_416;
                int *l_418 = &l_300;
                int *l_419 = &g_12;
                int *l_420 = &l_301;
                int *l_421 = &l_300;
                int *l_422 = &l_251;
                short *l_453 = &g_70;
                unsigned *l_455 = &g_91;
                short *l_456 = &g_457;
                (*l_417) = (((**l_164) = g_105.f0) , l_416);
                --l_423;
                (*l_422) ^= ((((*l_456) ^= ((g_83 = p_42) <= (((*l_455) |= ((*l_160) &= (safe_sub_func_uint16_t_u_u(0x1790L, (l_423 | (safe_mul_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s(p_40, ((p_40 || g_103) == l_434))), ((l_454 = (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_s((((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((*g_67), (safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((p_39++), ((*l_453) = ((*l_420) != 0x11EA467DL)))) | g_100.f0), 0L)) , p_42), p_42)), g_141)))), l_423)) <= 0UL) != (-6L)), 2)) < 0xC543C7B7L), 6))) == p_42))), (*l_419)))))))) , p_41))) == p_42) , (*l_419));
            }
            if (((**l_159) |= p_43))
            {
                unsigned short l_464 = 1UL;
                short ***l_478 = (void*)0;
                int *l_486 = (void*)0;
                for (l_192 = 0; (l_192 == (-18)); --l_192)
                {
                    short *l_465 = &g_70;
                    short ***l_469 = (void*)0;
                    short ***l_470 = (void*)0;
                    int l_473 = (-10L);
                    l_353 |= ((((safe_add_func_uint8_t_u_u(p_39, ((*g_67) , g_116.f2))) , ((((*l_465) = (safe_rshift_func_int16_t_s_u(l_464, 7))) < (g_410.f2 && (p_42 && (l_466 != (g_471 = l_467))))) || ((((**l_159) = 4L) ^ p_41) <= (*g_67)))) <= p_40) | l_473);

                    ;
                    if ((l_473 || ((!(*g_67)) >= (safe_add_func_int32_t_s_s(p_39, p_39)))))
                    {
                        short ****l_476 = &l_470;
                        (**l_159) &= (((((*l_476) = &l_467) == (l_478 = g_477)) , (safe_lshift_func_uint16_t_u_s(((p_43 > 0xD1871B91L) > g_115.f0), l_481))) , (4294967295UL & (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(l_464, p_42)), p_41))));

                        ;
                        ;
                        return l_486;



                    }
                    else
                    {
                        int *l_487 = &l_434;
                        return &g_103;



                    }
                }
            }
            else
            {
                if (g_283.f1)
                    break;
            }
            for (p_42 = 0; (p_42 > 28); p_42 = safe_add_func_uint16_t_u_u(p_42, 2))
            {
                int *l_490 = &l_454;
                return &g_12;


            }
            if ((((l_495 |= ((**l_164) = (p_43 ^ (((*l_492) = l_491) == (l_494 = (g_109.f0 , l_493)))))) , (safe_mod_func_int16_t_s_s((g_498 , 0xC6ECL), (l_499 | (safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(l_423, (l_395 == (*g_67)))), g_504)))))) && l_454))
            {
                union U1 **l_506 = &l_282;
                union U1 **l_507 = &l_505;
                (*l_507) = ((*l_506) = l_505);
            }
            else
            {
                int *l_508 = &l_300;
                int *l_509 = &l_192;
                int *l_510 = &g_161;
                int *l_511 = &g_103;
                int l_512 = 0L;
                int *l_513 = &l_301;
                int *l_514 = &l_454;
                int *l_515 = &l_353;
                int *l_516 = (void*)0;
                int *l_517 = &l_353;
                int *l_518 = &l_512;
                int *l_519 = &l_434;
                int *l_520 = (void*)0;
                int *l_521 = &l_300;
                int *l_522 = &l_192;
                int *l_523 = &l_192;
                int *l_524 = &l_192;
                int *l_525 = &l_353;
                int *l_526 = &g_103;
                int *l_527 = &g_103;
                int *l_528 = (void*)0;
                int *l_529 = &l_395;
                int *l_530 = &l_454;
                int *l_531 = &l_353;
                int *l_532 = &l_300;
                int *l_533 = &l_300;
                int *l_534 = (void*)0;
                int *l_535 = &l_300;
                int *l_536 = &l_192;
                int *l_537 = (void*)0;
                int *l_539 = (void*)0;
                int *l_540 = (void*)0;
                int *l_541 = &l_395;
                int *l_542 = &l_395;
                int *l_543 = &l_301;
                int *l_544 = &l_395;
                int *l_545 = (void*)0;
                int *l_546 = (void*)0;
                int *l_547 = (void*)0;
                int *l_548 = &g_12;
                int *l_549 = &l_538;
                int *l_550 = &l_538;
                int *l_551 = &l_395;
                int *l_552 = &l_251;
                int *l_553 = &g_103;
                int *l_554 = &l_434;
                short ****l_591 = &g_477;
                ++l_555;
                for (g_81 = 0; (g_81 > 51); ++g_81)
                {
                    unsigned char *l_580 = &l_495;
                    unsigned char *l_583 = (void*)0;
                    unsigned char *l_584 = (void*)0;
                    unsigned char *l_585 = &g_154;
                    int l_593 = 0x33865C0EL;
                    int l_598 = 0x303B9F7BL;
                    int l_601 = 0x50889C46L;
                    int l_630 = (-3L);
                    int l_634 = 0L;
                    if (((&l_423 == &g_59) >= (safe_rshift_func_uint8_t_u_s(((l_454 = ((safe_lshift_func_uint16_t_u_u(0x77E5L, (((p_43 , ((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s((((((((safe_mul_func_int8_t_s_s(((*l_282) , g_103), g_410.f1)) > ((~((((safe_mul_func_int16_t_s_s((((*g_472) = (((g_20 , ((*l_585) = (++(*l_580)))) != (((((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(((*g_67) != p_43), l_395)), g_161)) , &g_67) == l_590) & g_105.f0) <= l_555)) ^ p_41)) && 1UL), p_42)) , l_591) == &g_477) , 0xC2D7F6E2L)) && 1UL)) == l_538) , l_395) , 4294967292UL) >= (*l_518)) < p_42), 0x7B45L)), (*g_67))) >= g_141), g_592)), 1)), g_91)) , (void*)0)) != (void*)0) , l_593))) || (*g_67))) ^ p_42), 4))))
                    {
                        unsigned char l_594 = 8UL;
                        l_593 |= l_594;
                        if (g_70)
                            break;
                    }
                    else
                    {
                        short l_595 = 0L;
                        int l_596 = 0L;
                        int *l_597 = &l_538;
                        int *l_599 = &l_353;
                        int *l_600 = &l_596;
                        int l_602 = (-5L);
                        int *l_603 = &l_301;
                        int *l_604 = (void*)0;
                        int *l_605 = &l_353;
                        int *l_606 = &l_300;
                        int *l_607 = &g_161;
                        int *l_608 = &l_454;
                        int *l_609 = &l_538;
                        int *l_610 = (void*)0;
                        int *l_611 = &l_512;
                        int *l_612 = &l_192;
                        int *l_613 = &l_434;
                        int *l_614 = &l_602;
                        int *l_615 = (void*)0;
                        int *l_616 = &l_596;
                        int *l_617 = &l_454;
                        int *l_618 = &l_434;
                        int *l_619 = (void*)0;
                        int *l_620 = &l_601;
                        int *l_621 = &l_512;
                        int *l_622 = &g_103;
                        int *l_623 = &g_12;
                        int *l_624 = &l_192;
                        int *l_625 = &l_251;
                        int *l_626 = &l_601;
                        int *l_627 = (void*)0;
                        int *l_628 = &g_161;
                        int *l_629 = &l_512;
                        int *l_631 = &l_300;
                        int *l_632 = &l_454;
                        int *l_633 = (void*)0;
                        int *l_635 = &l_538;
                        int *l_636 = &l_434;
                        --l_637;
                    }
                    return &g_12;


                }
            }
        }
    }

    ;
    (*l_159) = (*l_159);
    (*l_641) = l_640;
    l_300 &= ((*l_160) >= ((+(0UL ^ (((safe_mul_func_uint8_t_u_u((g_154 = (((***g_477) <= ((g_105.f0 | (safe_add_func_uint16_t_u_u(((-10L) <= (safe_add_func_uint32_t_u_u((g_410.f2 ^ ((*l_651) = (g_114.f2 >= 0UL))), (p_43 != 0L)))), (*g_67)))) < p_39)) && g_114.f0)), (-1L))) ^ 0x7367FBF1L) & p_42))) > (*l_160)));
    return &g_161;


}







static unsigned char func_44(int * p_45, int * p_46, unsigned short * p_47)
{
    union U1 *l_132 = &g_105;
    union U1 **l_131 = &l_132;
    int l_138 = 6L;
    if ((safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((*p_47), (*g_67))), ((*g_67) > (l_131 == &l_132)))))
    {
        struct S0 *l_133 = &g_116;
        int l_134 = 0x6F6C633FL;
        char *l_137 = &g_105.f0;
        char *l_139 = (void*)0;
        char *l_140 = &g_141;
        (*l_133) = g_116;
        g_100.f0 = ((*p_45) = ((l_134 & (safe_mod_func_int8_t_s_s(((*l_137) = l_134), ((*l_140) = ((l_134 | (g_103 ^ (-3L))) | l_138))))) > ((g_142 | ((((g_143 , (((*p_46) = (((l_138 , &p_46) == &p_46) , 0x462BD54EL)) ^ 0xEEA40FDBL)) <= 3UL) && (*g_67)) | 0xC87B4EC1L)) == 0x879CL)));
        if (((g_83 , (*g_107)) == ((((*g_67) | l_138) & g_142) , (*g_107))))
        {
            short *l_145 = &g_70;
            short **l_144 = &l_145;
            short ***l_146 = &l_144;
            (*l_146) = l_144;
            (*p_46) = g_114.f1;
        }
        else
        {
            short l_147 = 0x6AE3L;
            l_147 = g_12;
        }
    }
    else
    {
        struct S0 *l_152 = &g_116;
        g_114.f1 ^= (safe_lshift_func_uint8_t_u_u(l_138, 2));
        (*l_152) = ((safe_rshift_func_uint8_t_u_u(1UL, l_138)) , g_115);
    }
    return l_138;
}







static int * func_48(unsigned p_49, short p_50, unsigned short * p_51)
{
    union U1 l_78 = {0xD2L};
    unsigned short **l_79 = &g_67;
    struct S0 *l_119 = &g_115;
    int *l_124 = &g_12;
    int **l_125 = &l_124;
    int *l_126 = &g_103;
    (*l_119) = func_73(p_51, p_51, &g_68, (l_78 , (((*l_79) = &g_20) == &g_20)));

    ;
    for (g_20 = 0; (g_20 <= 18); g_20 = safe_add_func_uint32_t_u_u(g_20, 3))
    {
        union U1 l_122 = {0x5DL};
        int *l_123 = &g_103;
        (*l_123) = ((g_103 , &g_108) != (l_122 , &g_108));
    }
    (*l_125) = l_124;
    (*l_125) = (l_78 , &g_12);
    return l_126;


}







static struct S0 func_73(unsigned short * p_74, unsigned short * p_75, unsigned short * p_76, unsigned p_77)
{
    unsigned *l_80 = (void*)0;
    unsigned char *l_82 = &g_83;
    int *l_84 = (void*)0;
    int *l_85 = (void*)0;
    int *l_86 = (void*)0;
    int **l_87 = &l_84;
    int **l_88 = &l_85;
    g_12 ^= (((g_81 |= g_59) | (-3L)) < ((*l_82) = 0xCEL));
    (*l_88) = ((*l_87) = l_86);
    for (g_12 = 0; (g_12 <= 19); g_12 = safe_add_func_int16_t_s_s(g_12, 3))
    {
        unsigned short l_101 = 65535UL;
        int *l_102 = &g_103;
        union U1 *l_104 = &g_105;
        if (((*l_102) ^= ((g_91--) ^ (safe_lshift_func_uint16_t_u_s((+(safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((((*g_67) && ((p_77 == g_81) , (g_81 >= ((g_100 , (l_101 > l_101)) , l_101)))) || p_77), 2)), p_77))), 11)))))
        {
            (*l_102) = (g_100 , (g_100.f2 > (*l_102)));
        }
        else
        {
            union U1 **l_106 = &l_104;
            volatile union U1 ***l_110 = &g_107;
            (*l_106) = l_104;
            (*l_110) = g_107;
            for (g_68 = (-3); (g_68 == 56); g_68 = safe_add_func_uint32_t_u_u(g_68, 2))
            {
                if ((*l_102))
                {
                    struct S0 *l_113 = (void*)0;
                    (*l_102) ^= 0x08626224L;
                    g_114 = g_100;
                }
                else
                {
                    return g_115;
                }
                return g_116;
            }
            for (g_91 = 7; (g_91 > 16); g_91 = safe_add_func_uint8_t_u_u(g_91, 4))
            {
                (*l_88) = l_102;

                ;
            }
        }
    }

    ;
    return g_116;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_100.f0, "g_100.f0", print_hash_value);
    transparent_crc(g_100.f1, "g_100.f1", print_hash_value);
    transparent_crc(g_100.f2, "g_100.f2", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_105.f0, "g_105.f0", print_hash_value);
    transparent_crc(g_109.f0, "g_109.f0", print_hash_value);
    transparent_crc(g_114.f0, "g_114.f0", print_hash_value);
    transparent_crc(g_114.f1, "g_114.f1", print_hash_value);
    transparent_crc(g_114.f2, "g_114.f2", print_hash_value);
    transparent_crc(g_115.f0, "g_115.f0", print_hash_value);
    transparent_crc(g_115.f1, "g_115.f1", print_hash_value);
    transparent_crc(g_115.f2, "g_115.f2", print_hash_value);
    transparent_crc(g_116.f0, "g_116.f0", print_hash_value);
    transparent_crc(g_116.f1, "g_116.f1", print_hash_value);
    transparent_crc(g_116.f2, "g_116.f2", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_283.f0, "g_283.f0", print_hash_value);
    transparent_crc(g_283.f1, "g_283.f1", print_hash_value);
    transparent_crc(g_283.f2, "g_283.f2", print_hash_value);
    transparent_crc(g_410.f0, "g_410.f0", print_hash_value);
    transparent_crc(g_410.f1, "g_410.f1", print_hash_value);
    transparent_crc(g_410.f2, "g_410.f2", print_hash_value);
    transparent_crc(g_457, "g_457", print_hash_value);
    transparent_crc(g_498.f0, "g_498.f0", print_hash_value);
    transparent_crc(g_498.f1, "g_498.f1", print_hash_value);
    transparent_crc(g_498.f2, "g_498.f2", print_hash_value);
    transparent_crc(g_504, "g_504", print_hash_value);
    transparent_crc(g_592, "g_592", print_hash_value);
    transparent_crc(g_666.f0, "g_666.f0", print_hash_value);
    transparent_crc(g_666.f1, "g_666.f1", print_hash_value);
    transparent_crc(g_666.f2, "g_666.f2", print_hash_value);
    transparent_crc(g_691.f0, "g_691.f0", print_hash_value);
    transparent_crc(g_691.f1, "g_691.f1", print_hash_value);
    transparent_crc(g_691.f2, "g_691.f2", print_hash_value);
    transparent_crc(g_692.f0, "g_692.f0", print_hash_value);
    transparent_crc(g_692.f1, "g_692.f1", print_hash_value);
    transparent_crc(g_692.f2, "g_692.f2", print_hash_value);
    transparent_crc(g_1086, "g_1086", print_hash_value);
    transparent_crc(g_1309.f0, "g_1309.f0", print_hash_value);
    transparent_crc(g_1309.f1, "g_1309.f1", print_hash_value);
    transparent_crc(g_1309.f2, "g_1309.f2", print_hash_value);
    transparent_crc(g_1333.f0, "g_1333.f0", print_hash_value);
    transparent_crc(g_1333.f1, "g_1333.f1", print_hash_value);
    transparent_crc(g_1333.f2, "g_1333.f2", print_hash_value);
    transparent_crc(g_1350.f0, "g_1350.f0", print_hash_value);
    transparent_crc(g_1350.f1, "g_1350.f1", print_hash_value);
    transparent_crc(g_1350.f2, "g_1350.f2", print_hash_value);
    transparent_crc(g_1351.f0, "g_1351.f0", print_hash_value);
    transparent_crc(g_1351.f1, "g_1351.f1", print_hash_value);
    transparent_crc(g_1351.f2, "g_1351.f2", print_hash_value);
    transparent_crc(g_1364, "g_1364", print_hash_value);
    transparent_crc(g_1367.f0, "g_1367.f0", print_hash_value);
    transparent_crc(g_1367.f1, "g_1367.f1", print_hash_value);
    transparent_crc(g_1367.f2, "g_1367.f2", print_hash_value);
    transparent_crc(g_1368.f0, "g_1368.f0", print_hash_value);
    transparent_crc(g_1368.f1, "g_1368.f1", print_hash_value);
    transparent_crc(g_1368.f2, "g_1368.f2", print_hash_value);
    transparent_crc(g_1441, "g_1441", print_hash_value);
    transparent_crc(g_1791, "g_1791", print_hash_value);
    transparent_crc(g_1795.f0, "g_1795.f0", print_hash_value);
    transparent_crc(g_1795.f1, "g_1795.f1", print_hash_value);
    transparent_crc(g_1795.f2, "g_1795.f2", print_hash_value);
    transparent_crc(g_1858.f0, "g_1858.f0", print_hash_value);
    transparent_crc(g_1858.f1, "g_1858.f1", print_hash_value);
    transparent_crc(g_1858.f2, "g_1858.f2", print_hash_value);
    transparent_crc(g_1954, "g_1954", print_hash_value);
    transparent_crc(g_2045.f0, "g_2045.f0", print_hash_value);
    transparent_crc(g_2045.f1, "g_2045.f1", print_hash_value);
    transparent_crc(g_2045.f2, "g_2045.f2", print_hash_value);
    transparent_crc(g_2076.f0, "g_2076.f0", print_hash_value);
    transparent_crc(g_2076.f1, "g_2076.f1", print_hash_value);
    transparent_crc(g_2076.f2, "g_2076.f2", print_hash_value);
    transparent_crc(g_2082.f0, "g_2082.f0", print_hash_value);
    transparent_crc(g_2082.f1, "g_2082.f1", print_hash_value);
    transparent_crc(g_2082.f2, "g_2082.f2", print_hash_value);
    transparent_crc(g_2093.f0, "g_2093.f0", print_hash_value);
    transparent_crc(g_2093.f1, "g_2093.f1", print_hash_value);
    transparent_crc(g_2093.f2, "g_2093.f2", print_hash_value);
    transparent_crc(g_2102.f0, "g_2102.f0", print_hash_value);
    transparent_crc(g_2102.f1, "g_2102.f1", print_hash_value);
    transparent_crc(g_2102.f2, "g_2102.f2", print_hash_value);
    transparent_crc(g_2174.f0, "g_2174.f0", print_hash_value);
    transparent_crc(g_2175.f0, "g_2175.f0", print_hash_value);
    transparent_crc(g_2175.f1, "g_2175.f1", print_hash_value);
    transparent_crc(g_2175.f2, "g_2175.f2", print_hash_value);
    transparent_crc(g_2606, "g_2606", print_hash_value);
    transparent_crc(g_2867, "g_2867", print_hash_value);
    transparent_crc(g_2882.f0, "g_2882.f0", print_hash_value);
    transparent_crc(g_2882.f1, "g_2882.f1", print_hash_value);
    transparent_crc(g_2882.f2, "g_2882.f2", print_hash_value);
    transparent_crc(g_2890.f0, "g_2890.f0", print_hash_value);
    transparent_crc(g_2890.f1, "g_2890.f1", print_hash_value);
    transparent_crc(g_2890.f2, "g_2890.f2", print_hash_value);
    transparent_crc(g_2912, "g_2912", print_hash_value);
    transparent_crc(g_2914, "g_2914", print_hash_value);
    transparent_crc(g_2950, "g_2950", print_hash_value);
    transparent_crc(g_3008, "g_3008", print_hash_value);
    transparent_crc(g_3071, "g_3071", print_hash_value);
    transparent_crc(g_3075, "g_3075", print_hash_value);
    transparent_crc(g_3165, "g_3165", print_hash_value);
    transparent_crc(g_3168.f0, "g_3168.f0", print_hash_value);
    transparent_crc(g_3168.f1, "g_3168.f1", print_hash_value);
    transparent_crc(g_3168.f2, "g_3168.f2", print_hash_value);
    transparent_crc(g_3361.f0, "g_3361.f0", print_hash_value);
    transparent_crc(g_3361.f1, "g_3361.f1", print_hash_value);
    transparent_crc(g_3361.f2, "g_3361.f2", print_hash_value);
    transparent_crc(g_3383, "g_3383", print_hash_value);
    transparent_crc(g_3566, "g_3566", print_hash_value);
    transparent_crc(g_3677.f0, "g_3677.f0", print_hash_value);
    transparent_crc(g_3677.f1, "g_3677.f1", print_hash_value);
    transparent_crc(g_3677.f2, "g_3677.f2", print_hash_value);
    transparent_crc(g_3690, "g_3690", print_hash_value);
    transparent_crc(g_3698.f0, "g_3698.f0", print_hash_value);
    transparent_crc(g_3698.f1, "g_3698.f1", print_hash_value);
    transparent_crc(g_3698.f2, "g_3698.f2", print_hash_value);
    transparent_crc(g_3729, "g_3729", print_hash_value);
    transparent_crc(g_3910, "g_3910", print_hash_value);
    transparent_crc(g_4262, "g_4262", print_hash_value);
    transparent_crc(g_4279.f0, "g_4279.f0", print_hash_value);
    transparent_crc(g_4279.f1, "g_4279.f1", print_hash_value);
    transparent_crc(g_4279.f2, "g_4279.f2", print_hash_value);
    transparent_crc(g_4288.f0, "g_4288.f0", print_hash_value);
    transparent_crc(g_4288.f1, "g_4288.f1", print_hash_value);
    transparent_crc(g_4288.f2, "g_4288.f2", print_hash_value);
    transparent_crc(g_4403, "g_4403", print_hash_value);
    transparent_crc(g_4436, "g_4436", print_hash_value);
    transparent_crc(g_4539, "g_4539", print_hash_value);
    transparent_crc(g_4630.f0, "g_4630.f0", print_hash_value);
    transparent_crc(g_4630.f1, "g_4630.f1", print_hash_value);
    transparent_crc(g_4630.f2, "g_4630.f2", print_hash_value);
    transparent_crc(g_4638.f0, "g_4638.f0", print_hash_value);
    transparent_crc(g_4638.f1, "g_4638.f1", print_hash_value);
    transparent_crc(g_4638.f2, "g_4638.f2", print_hash_value);
    transparent_crc(g_5035.f0, "g_5035.f0", print_hash_value);
    transparent_crc(g_5035.f1, "g_5035.f1", print_hash_value);
    transparent_crc(g_5035.f2, "g_5035.f2", print_hash_value);
    transparent_crc(g_5176.f0, "g_5176.f0", print_hash_value);
    transparent_crc(g_5176.f1, "g_5176.f1", print_hash_value);
    transparent_crc(g_5176.f2, "g_5176.f2", print_hash_value);
    transparent_crc(g_5257.f0, "g_5257.f0", print_hash_value);
    transparent_crc(g_5257.f1, "g_5257.f1", print_hash_value);
    transparent_crc(g_5257.f2, "g_5257.f2", print_hash_value);
    transparent_crc(g_5265.f0, "g_5265.f0", print_hash_value);
    transparent_crc(g_5265.f1, "g_5265.f1", print_hash_value);
    transparent_crc(g_5265.f2, "g_5265.f2", print_hash_value);
    transparent_crc(g_5291.f0, "g_5291.f0", print_hash_value);
    transparent_crc(g_5291.f1, "g_5291.f1", print_hash_value);
    transparent_crc(g_5291.f2, "g_5291.f2", print_hash_value);
    transparent_crc(g_5879.f0, "g_5879.f0", print_hash_value);
    transparent_crc(g_5879.f1, "g_5879.f1", print_hash_value);
    transparent_crc(g_5879.f2, "g_5879.f2", print_hash_value);
    transparent_crc(g_6097, "g_6097", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
