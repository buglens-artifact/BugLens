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
   signed f0 : 9;
   signed f1 : 28;
   unsigned f2 : 15;
   volatile signed f3 : 30;
};

struct S1 {
   volatile unsigned f0 : 15;
   volatile unsigned char f1;
   unsigned f2;
   volatile int f3;
};


static int g_4 = 4L;
static unsigned g_12 = 0xA5223FA3L;
static int g_38 = 1L;
static int * volatile g_37 = &g_38;
static struct S1 g_66 = {122,0x38L,6UL,-5L};
static int *g_71 = &g_4;
static int **g_70 = &g_71;
static int *** volatile g_69 = &g_70;
static struct S0 g_76 = {16,9521,56,14877};
static volatile struct S0 g_77 = {15,11885,23,-3884};
static char g_84 = 0x7CL;
static int g_98 = 1L;
static struct S0 g_115 = {-16,10072,157,-32364};
static struct S0 g_134 = {6,-12220,145,-22687};
static struct S1 * volatile g_169 = (void*)0;
static struct S1 * volatile g_170 = (void*)0;
static int *** volatile g_177 = &g_70;
static unsigned short g_372 = 1UL;
static struct S1 *g_381 = &g_66;
static struct S1 ** volatile g_380 = &g_381;
static int g_544 = 1L;
static volatile short g_548 = 0xE567L;
static char g_557 = 0xF8L;
static volatile int g_907 = (-1L);
static unsigned g_934 = 18446744073709551615UL;
static struct S0 g_942 = {-20,-9704,54,13674};
static int g_957 = 0x4B6FB6EFL;
static volatile struct S0 g_958 = {-3,-12451,70,-16350};
static int g_1048 = 0x648990E4L;
static struct S1 g_1323 = {165,0x80L,0UL,-1L};
static int * volatile g_1470 = &g_544;
static struct S0 ** volatile g_1492 = (void*)0;
static struct S0 *g_1494 = &g_115;
static struct S0 ** volatile g_1493 = &g_1494;
static int g_1512 = 0x2BE68DF7L;
static struct S0 g_1533 = {15,-5583,30,17565};
static unsigned g_1555 = 0xF13DA9F5L;
static int ** volatile g_1558 = &g_71;
static volatile struct S1 g_1564 = {118,2UL,0x00508975L,9L};
static struct S1 g_1567 = {34,0x14L,1UL,-1L};
static volatile struct S0 g_1589 = {6,-5690,179,21582};
static volatile struct S1 g_1596 = {81,255UL,0x6EAC6394L,5L};
static unsigned short g_1666 = 1UL;
static int ** volatile g_1674 = &g_71;
static int ** volatile g_1734 = &g_71;
static int ** volatile g_1801 = (void*)0;
static struct S0 g_1817 = {-17,-7952,80,-31305};
static int ** volatile g_1850 = (void*)0;
static volatile struct S1 *g_1935 = (void*)0;
static volatile struct S1 * volatile *g_1934 = &g_1935;
static volatile struct S1 * volatile * volatile *g_1933 = &g_1934;
static volatile struct S1 g_2227 = {25,0x7AL,0UL,0L};
static volatile struct S0 g_2458 = {19,-8367,46,23757};
static struct S0 g_2462 = {-3,5412,113,-24047};
static volatile struct S1 g_2552 = {171,0UL,7UL,0x5FF66AC8L};
static int ** volatile g_2564 = (void*)0;
static struct S0 g_2572 = {5,-2314,151,21292};
static unsigned short g_2587 = 0xE653L;
static volatile unsigned short g_2654 = 0xD1E4L;
static struct S0 g_2752 = {9,8775,166,-5014};
static int g_2754 = 1L;
static int *g_2753 = &g_2754;
static int ** volatile g_2759 = &g_2753;
static int ** volatile g_2925 = (void*)0;
static volatile struct S0 g_2937 = {-12,-97,38,3915};
static unsigned g_2951 = 0x7904D7D9L;
static struct S0 g_2952 = {-2,-10623,84,16273};
static struct S1 **g_3162 = (void*)0;
static struct S1 *** volatile g_3161 = &g_3162;
static int ***g_3174 = &g_70;
static volatile struct S1 g_3189 = {123,0xD0L,0xF45B2C8FL,0L};
static unsigned g_3306 = 4294967292UL;
static struct S1 g_3389 = {177,0x27L,0xE3C1B648L,0x6605D63EL};
static int ** volatile g_3390 = &g_2753;



static unsigned char func_1(void);
static int func_5(unsigned p_6);
static unsigned func_7(int * p_8, int * p_9, int p_10, int * p_11);
static int func_13(unsigned short p_14, int * p_15, unsigned p_16, int p_17, int * p_18);
static struct S0 func_19(int * p_20, int * p_21);
static int * func_23(int p_24, int p_25, int * p_26, int * p_27);
static short func_32(char p_33, unsigned char p_34, unsigned char p_35, unsigned char p_36);
static short func_40(int * p_41, int p_42);
static char func_48(char p_49, int * p_50, short p_51, int * p_52);
static unsigned short func_60(unsigned p_61, int * p_62, int * p_63, int * p_64, int p_65);
static unsigned char func_1(void)
{
    int *l_2 = (void*)0;
    int *l_3 = &g_4;
    unsigned char l_3317 = 0xAAL;
    int l_3357 = 0L;
    int l_3367 = 0L;
    int l_3373 = (-3L);
    unsigned l_3378 = 0x1F0E44B3L;
    struct S0 **l_3386 = &g_1494;
    struct S0 ***l_3385 = &l_3386;
    int l_3391 = 0L;
    int *l_3392 = &l_3367;
    int *l_3393 = &l_3391;
    int *l_3394 = &g_2754;
    char l_3395 = (-2L);
    int *l_3396 = &g_1512;
    int *l_3397 = &g_2754;
    int *l_3398 = &l_3367;
    int *l_3399 = &g_544;
    int *l_3400 = &g_4;
    int *l_3401 = &l_3391;
    int *l_3402 = &g_2754;
    int *l_3403 = &g_1512;
    int *l_3404 = &l_3391;
    int *l_3405 = &l_3391;
    int *l_3406 = &g_38;
    int *l_3407 = (void*)0;
    int *l_3408 = &l_3357;
    int *l_3409 = &g_957;
    int *l_3410 = &g_544;
    int *l_3411 = &l_3367;
    int *l_3412 = &g_4;
    int *l_3413 = &g_4;
    int *l_3414 = &g_544;
    int *l_3415 = &g_544;
    int *l_3416 = &g_2754;
    int *l_3417 = &l_3373;
    int *l_3418 = &g_4;
    int *l_3419 = &g_2754;
    int *l_3420 = &g_38;
    int *l_3421 = &g_544;
    int *l_3422 = &g_98;
    int *l_3423 = (void*)0;
    int *l_3424 = &g_4;
    int *l_3425 = &g_98;
    int *l_3426 = &g_544;
    int *l_3427 = &g_4;
    int *l_3428 = (void*)0;
    int *l_3429 = &l_3373;
    int *l_3430 = &g_98;
    int *l_3431 = &l_3373;
    int *l_3432 = &g_4;
    int *l_3433 = &l_3357;
    int *l_3434 = &g_98;
    int *l_3435 = &g_957;
    int l_3436 = 0x033F42DAL;
    int *l_3437 = (void*)0;
    int *l_3438 = &l_3391;
    int *l_3439 = (void*)0;
    int *l_3440 = &g_4;
    int *l_3441 = &l_3357;
    int l_3442 = 3L;
    int l_3443 = 1L;
    int *l_3444 = &l_3442;
    int *l_3445 = &l_3357;
    int *l_3446 = &l_3436;
    int l_3447 = 0xA6DC97EDL;
    int *l_3448 = &l_3442;
    int *l_3449 = &g_4;
    int *l_3450 = &g_4;
    int *l_3451 = &l_3442;
    int *l_3452 = &l_3443;
    int *l_3453 = &g_957;
    int *l_3454 = &l_3373;
    int *l_3455 = &l_3443;
    int *l_3456 = &g_98;
    int *l_3457 = &g_957;
    int *l_3458 = (void*)0;
    int *l_3459 = &g_2754;
    int *l_3460 = (void*)0;
    int *l_3461 = &g_1512;
    int l_3462 = (-8L);
    int *l_3463 = &g_38;
    int *l_3464 = &g_957;
    int *l_3465 = &g_38;
    int *l_3466 = &g_2754;
    int *l_3467 = &l_3443;
    int *l_3468 = &g_2754;
    int l_3469 = (-1L);
    int *l_3470 = &l_3436;
    int *l_3471 = &l_3443;
    int *l_3472 = &l_3436;
    int *l_3473 = (void*)0;
    int *l_3474 = &g_4;
    int *l_3475 = (void*)0;
    int *l_3476 = &l_3391;
    int *l_3477 = &g_2754;
    int *l_3478 = &l_3373;
    int *l_3479 = &l_3367;
    int *l_3480 = &l_3443;
    int *l_3481 = &l_3442;
    int *l_3482 = &l_3367;
    int *l_3483 = (void*)0;
    int *l_3484 = &l_3442;
    int *l_3485 = &g_957;
    int *l_3486 = &l_3436;
    int *l_3487 = &l_3443;
    int *l_3488 = &l_3447;
    int *l_3489 = (void*)0;
    int *l_3490 = &l_3447;
    int *l_3491 = &l_3469;
    int *l_3492 = &l_3442;
    int *l_3493 = (void*)0;
    int *l_3494 = (void*)0;
    int *l_3495 = &g_544;
    int *l_3496 = &g_98;
    int *l_3497 = &g_1512;
    int *l_3498 = &g_1512;
    int *l_3499 = &g_4;
    int *l_3500 = (void*)0;
    int *l_3501 = &l_3436;
    int *l_3502 = &l_3391;
    int *l_3503 = &l_3357;
    int *l_3504 = &g_544;
    int *l_3505 = &g_4;
    int *l_3506 = &g_2754;
    int *l_3507 = (void*)0;
    int *l_3508 = (void*)0;
    int *l_3509 = &g_1512;
    int *l_3510 = &g_38;
    int *l_3511 = &l_3442;
    int *l_3512 = &g_98;
    int *l_3513 = &l_3373;
    int *l_3514 = &l_3391;
    int *l_3515 = &l_3436;
    int *l_3516 = &g_38;
    int l_3517 = 0x759A3CA3L;
    int *l_3518 = &l_3462;
    int *l_3519 = (void*)0;
    int l_3520 = 0L;
    int *l_3521 = &l_3357;
    int *l_3522 = (void*)0;
    int *l_3523 = &g_957;
    int *l_3524 = &l_3442;
    int l_3525 = 0x6F15B475L;
    int *l_3526 = &g_2754;
    int *l_3527 = &l_3469;
    int *l_3528 = &l_3357;
    int *l_3529 = &l_3373;
    int *l_3530 = &l_3469;
    int *l_3531 = &l_3442;
    int *l_3532 = &l_3525;
    int *l_3533 = &l_3367;
    int *l_3534 = &g_2754;
    int *l_3535 = &l_3357;
    int *l_3536 = &l_3447;
    int *l_3537 = &l_3442;
    int *l_3538 = &g_38;
    int *l_3539 = &g_4;
    int *l_3540 = &l_3469;
    int *l_3541 = &l_3367;
    int *l_3542 = &g_1512;
    int *l_3543 = &g_4;
    int *l_3544 = &g_38;
    int *l_3545 = &l_3443;
    int *l_3546 = &g_98;
    int l_3547 = 3L;
    int *l_3548 = &l_3442;
    int *l_3549 = &l_3447;
    int *l_3550 = (void*)0;
    int *l_3551 = &g_4;
    int *l_3552 = &l_3525;
    int *l_3553 = &g_544;
    int *l_3554 = &l_3520;
    int *l_3555 = &g_544;
    int *l_3556 = &g_544;
    int *l_3557 = &g_2754;
    int *l_3558 = &l_3442;
    int *l_3559 = (void*)0;
    int *l_3560 = &l_3373;
    int *l_3561 = &l_3367;
    int l_3562 = 4L;
    int *l_3563 = &g_38;
    int *l_3564 = (void*)0;
    int *l_3565 = &g_2754;
    int l_3566 = 1L;
    int l_3567 = 0L;
    int *l_3568 = (void*)0;
    int *l_3569 = (void*)0;
    int *l_3570 = &l_3436;
    int *l_3571 = &l_3520;
    int *l_3572 = &l_3357;
    int *l_3573 = (void*)0;
    int *l_3574 = &l_3447;
    int l_3575 = 0x9613C007L;
    int *l_3576 = &l_3469;
    int *l_3577 = &l_3525;
    int *l_3578 = &g_4;
    int *l_3579 = &l_3373;
    int *l_3580 = &l_3517;
    int l_3581 = 0L;
    int *l_3582 = &l_3462;
    int l_3583 = 0xF195269FL;
    int *l_3584 = &l_3575;
    int l_3585 = 0xB725F3A2L;
    int *l_3586 = &g_2754;
    int *l_3587 = (void*)0;
    int *l_3588 = &l_3585;
    int *l_3589 = &l_3469;
    int *l_3590 = &l_3567;
    int *l_3591 = &g_957;
    int *l_3592 = &l_3583;
    int *l_3593 = &l_3566;
    int *l_3594 = (void*)0;
    int *l_3595 = &l_3520;
    int *l_3596 = &l_3517;
    int *l_3597 = &l_3443;
    int *l_3598 = (void*)0;
    int *l_3599 = (void*)0;
    int *l_3600 = &l_3575;
    int *l_3601 = &g_4;
    int l_3602 = (-1L);
    int *l_3603 = &g_957;
    int *l_3604 = &l_3447;
    int *l_3605 = &g_957;
    int *l_3606 = &l_3443;
    int l_3607 = (-2L);
    int *l_3608 = &l_3581;
    int *l_3609 = &g_957;
    int *l_3610 = &g_98;
    int l_3611 = 0x8CB742AEL;
    int *l_3612 = &l_3373;
    int *l_3613 = &g_4;
    int *l_3614 = (void*)0;
    int *l_3615 = &g_957;
    int *l_3616 = &l_3583;
    int *l_3617 = &l_3525;
    int *l_3618 = &l_3520;
    int *l_3619 = &l_3469;
    int *l_3620 = &l_3562;
    int l_3621 = 0L;
    int *l_3622 = (void*)0;
    int *l_3623 = &l_3357;
    int l_3624 = 0xB5E27280L;
    int *l_3625 = &l_3462;
    int *l_3626 = &l_3462;
    int *l_3627 = (void*)0;
    int *l_3628 = &l_3566;
    int *l_3629 = (void*)0;
    int *l_3630 = &l_3567;
    int *l_3631 = &l_3583;
    int *l_3632 = &g_544;
    int l_3633 = 0x35B5CFFFL;
    int *l_3634 = &l_3357;
    int *l_3635 = &l_3633;
    int *l_3636 = &l_3575;
    int *l_3637 = &l_3436;
    int *l_3638 = &l_3607;
    int *l_3639 = &g_544;
    int *l_3640 = &l_3585;
    int *l_3641 = &l_3624;
    int *l_3642 = (void*)0;
    int *l_3643 = &l_3607;
    int *l_3644 = &l_3469;
    int *l_3645 = (void*)0;
    int l_3646 = (-1L);
    int *l_3647 = &g_957;
    unsigned l_3648 = 4294967295UL;
    (*l_3) &= (-1L);
    if (func_5(func_7(l_3, l_3, g_12, l_3)))
    {
        unsigned short l_3309 = 0x0BF0L;
        short l_3314 = (-5L);
        l_3309 = (*g_37);
        (*l_3) |= (safe_rshift_func_int16_t_s_s(l_3314, 13));
    }
    else
    {
        int *l_3318 = &g_957;
        int *l_3319 = &g_1512;
        int *l_3320 = (void*)0;
        int *l_3321 = (void*)0;
        int *l_3322 = &g_957;
        int l_3323 = (-1L);
        int *l_3324 = &g_98;
        int *l_3325 = (void*)0;
        int *l_3326 = &g_2754;
        int *l_3327 = (void*)0;
        int *l_3328 = (void*)0;
        int *l_3329 = &g_1512;
        int l_3330 = 5L;
        int *l_3331 = &g_957;
        int *l_3332 = &l_3330;
        int *l_3333 = &g_1512;
        int *l_3334 = &l_3330;
        int *l_3335 = &g_98;
        int *l_3336 = &g_957;
        int *l_3337 = &g_4;
        int *l_3338 = (void*)0;
        int *l_3339 = &g_98;
        int *l_3340 = &g_2754;
        int *l_3341 = &g_2754;
        int *l_3342 = &l_3330;
        int *l_3343 = &l_3323;
        int *l_3344 = &g_4;
        int *l_3345 = &g_38;
        int *l_3346 = &g_98;
        int *l_3347 = (void*)0;
        int *l_3348 = &g_1512;
        int *l_3349 = (void*)0;
        int *l_3350 = (void*)0;
        int *l_3351 = &g_957;
        int *l_3352 = &g_957;
        int *l_3353 = &g_544;
        int *l_3354 = &g_4;
        int *l_3355 = &g_1512;
        int *l_3356 = (void*)0;
        int *l_3358 = &g_98;
        int *l_3359 = &g_2754;
        int *l_3360 = &g_2754;
        int *l_3361 = &l_3357;
        int *l_3362 = &l_3323;
        int *l_3363 = &l_3323;
        int *l_3364 = &g_544;
        int *l_3365 = &l_3330;
        int *l_3366 = &g_98;
        int *l_3368 = &l_3330;
        int *l_3369 = &g_957;
        int *l_3370 = &g_38;
        int *l_3371 = &g_1512;
        int *l_3372 = &g_38;
        int *l_3374 = &l_3367;
        int *l_3375 = (void*)0;
        int *l_3376 = &l_3373;
        int *l_3377 = &l_3323;
        struct S1 *l_3388 = &g_66;
        --l_3378;
        (*l_3364) |= ((safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(((l_3385 != &g_1493) ^ (safe_unary_minus_func_int32_t_s((*l_3333)))), ((*g_1934) != l_3388))), 0)) || (*l_3371));
        (*g_3390) = (g_3389 , &l_3357);
    }
    --l_3648;
    return (*l_3474);
}







static int func_5(unsigned p_6)
{
    char l_2874 = 0x38L;
    int *l_2878 = &g_98;
    int *l_2879 = &g_1512;
    unsigned l_2919 = 0UL;
    int l_2958 = 0xA411317FL;
    int l_2991 = 0xF2C08F6AL;
    int l_3221 = 0x67FFE535L;
    int l_3248 = (-3L);
    int l_3268 = (-1L);
    int l_3276 = 4L;
    if (p_6)
    {
        unsigned l_2875 = 4294967295UL;
        int *l_2876 = &g_4;
        int *l_2877 = (void*)0;
        unsigned short l_2887 = 0x526FL;
        struct S1 *l_2899 = (void*)0;
        int ***l_2955 = &g_70;
        int l_3003 = 0xD37CF6C0L;
        int l_3032 = (-5L);
        int l_3114 = 0x84F08414L;
        int l_3134 = 0x3AA27D86L;
        int ***l_3180 = &g_70;
        int *l_3181 = &g_957;
        if (((safe_lshift_func_uint8_t_u_u(l_2874, g_115.f0)) <= g_2227.f3))
        {
            int l_2882 = 7L;
            int **l_2888 = &l_2877;
            (*l_2879) ^= (safe_add_func_uint8_t_u_u((!((((p_6 ^ ((*l_2876) != ((l_2882 <= ((*l_2878) <= ((void*)0 == (*g_1493)))) , (~((safe_lshift_func_uint8_t_u_u(g_1533.f0, g_2587)) & ((+((+(l_2887 , p_6)) , p_6)) <= (-9L))))))) > l_2882) != 0x329AL) && 8L)), (-5L)));
            (*g_177) = l_2888;
        }
        else
        {
            int l_2898 = 1L;
            int *l_2936 = &g_38;
            int l_2970 = 0xE67FB3D2L;
            int l_3034 = 0x1C301F12L;
            int l_3054 = (-3L);
            int l_3080 = 0x1687DA9EL;
            int l_3140 = 0L;
            for (g_1512 = (-24); (g_1512 > 24); g_1512 = safe_add_func_int16_t_s_s(g_1512, 1))
            {
                struct S0 *l_2891 = &g_76;
                int *l_2900 = &g_38;
                int *l_2901 = &g_98;
                int *l_2902 = (void*)0;
                int *l_2903 = &g_98;
                int *l_2904 = &g_38;
                int *l_2905 = (void*)0;
                int *l_2906 = &g_957;
                int *l_2907 = &g_4;
                int *l_2908 = &g_98;
                int *l_2909 = &g_544;
                int *l_2910 = &g_544;
                int *l_2911 = &g_957;
                int *l_2912 = (void*)0;
                int *l_2913 = &g_957;
                int *l_2914 = &g_2754;
                int *l_2915 = &g_544;
                int *l_2916 = &g_2754;
                int *l_2917 = &g_957;
                int *l_2918 = &g_98;
                unsigned l_2945 = 18446744073709551615UL;
                int l_2960 = 2L;
                int l_2998 = 2L;
                int l_3016 = 0L;
                int l_3025 = (-1L);
                unsigned l_3142 = 4294967295UL;
                (*g_2753) |= ((g_2227.f0 || (((l_2891 == ((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((p_6 , p_6), 0x8021ABD6L)), g_934)) , l_2891)) , (*g_380)) != l_2899)) && g_548);
                l_2919++;
                if ((0x8442L <= (safe_add_func_int8_t_s_s(p_6, (0xD883L < 0x723EL)))))
                {
                    int *l_2924 = &g_1512;
                    int **l_2926 = &l_2878;
                    struct S0 **l_2935 = &g_1494;
                    (*l_2926) = l_2924;
                    if (((safe_lshift_func_int16_t_s_s(0xB7EEL, (safe_rshift_func_int8_t_s_u((p_6 , (65535UL | l_2898)), (safe_rshift_func_uint16_t_u_s((p_6 & p_6), g_1567.f2)))))) , (safe_add_func_uint8_t_u_u(((g_1817.f3 , l_2935) != (void*)0), g_115.f0))))
                    {
                        (*l_2926) = (func_40(l_2936, p_6) , (g_2937 , l_2936));
                        (*l_2876) = 0xF405AF84L;
                    }
                    else
                    {
                        int l_2950 = 0xB6E629E2L;
                        (*l_2914) ^= (~((((((safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_s((l_2950 | g_1567.f3), g_2951)) , 0x14F8L), 1)) & 1L), l_2950)) && 0x16L) <= g_2752.f2) > 0x12L) <= (*l_2904)) != p_6));
                        (*l_2926) = &l_2950;
                    }
                }
                else
                {
                    int *l_2956 = &g_2754;
                    int *l_2957 = &g_2754;
                    int l_2995 = 0x29C73219L;
                    int l_3044 = (-1L);
                    int l_3081 = 0x73CC8D5CL;
                    int l_3094 = 0xA781A8CEL;
                    int l_3105 = 0x9C89AC8EL;
                    int l_3120 = 0x366F59B2L;
                    (*g_381) = (g_2952 , (**g_380));
                    if ((p_6 != ((p_6 , l_2955) == ((p_6 && ((~(~g_115.f0)) > g_76.f3)) , &g_1734))))
                    {
                        int *l_2959 = &l_2958;
                        int *l_2961 = &g_4;
                        int *l_2962 = &l_2958;
                        int *l_2963 = &g_98;
                        int *l_2964 = (void*)0;
                        int *l_2965 = &l_2960;
                        int *l_2966 = (void*)0;
                        int *l_2967 = &l_2958;
                        int *l_2968 = &g_2754;
                        int *l_2969 = &g_38;
                        int *l_2971 = &g_957;
                        int l_2972 = 0xD425713EL;
                        int *l_2973 = &g_38;
                        int *l_2974 = (void*)0;
                        int *l_2975 = &l_2970;
                        int *l_2976 = &g_544;
                        int *l_2977 = &g_38;
                        int *l_2978 = &g_957;
                        int *l_2979 = &l_2972;
                        int *l_2980 = (void*)0;
                        int *l_2981 = &g_544;
                        int *l_2982 = (void*)0;
                        int l_2983 = 0xFFB0328CL;
                        int *l_2984 = &g_2754;
                        int *l_2985 = (void*)0;
                        int *l_2986 = &g_4;
                        int *l_2987 = &g_957;
                        int *l_2988 = (void*)0;
                        int *l_2989 = (void*)0;
                        int *l_2990 = &l_2958;
                        int *l_2992 = &l_2972;
                        int *l_2993 = &g_544;
                        int *l_2994 = (void*)0;
                        int *l_2996 = &g_38;
                        int *l_2997 = &l_2983;
                        unsigned l_2999 = 1UL;
                        (*l_2907) = (*l_2915);
                        l_2957 = l_2956;
                        ++l_2999;
                    }
                    else
                    {
                        int *l_3002 = &g_98;
                        int *l_3004 = &l_3003;
                        int *l_3005 = &g_38;
                        int *l_3006 = (void*)0;
                        int *l_3007 = &l_3003;
                        int l_3008 = 0x6E2044F3L;
                        int *l_3009 = &l_3008;
                        int *l_3010 = &l_2991;
                        int *l_3011 = &l_2995;
                        int *l_3012 = &l_2958;
                        int *l_3013 = (void*)0;
                        int *l_3014 = &g_957;
                        int *l_3015 = &g_2754;
                        int *l_3017 = &l_2995;
                        int *l_3018 = &g_2754;
                        int *l_3019 = &l_2970;
                        int *l_3020 = &g_38;
                        int *l_3021 = &l_3003;
                        int *l_3022 = &l_2958;
                        int *l_3023 = &l_3003;
                        int *l_3024 = &g_98;
                        int *l_3026 = &g_957;
                        int *l_3027 = &g_98;
                        int *l_3028 = &g_544;
                        int *l_3029 = &g_4;
                        int *l_3030 = &l_3003;
                        int *l_3031 = (void*)0;
                        int *l_3033 = &l_3016;
                        int *l_3035 = &l_2960;
                        int *l_3036 = &g_4;
                        int *l_3037 = &l_2995;
                        int *l_3038 = (void*)0;
                        int *l_3039 = &l_3034;
                        int *l_3040 = (void*)0;
                        unsigned l_3041 = 0x82F2EF46L;
                        int *l_3045 = &l_3032;
                        int *l_3046 = &l_2970;
                        int *l_3047 = &l_2958;
                        int *l_3048 = (void*)0;
                        int *l_3049 = &l_3016;
                        int *l_3050 = &g_957;
                        int *l_3051 = &g_4;
                        int *l_3052 = &g_544;
                        int *l_3053 = (void*)0;
                        int *l_3055 = &l_3032;
                        int *l_3056 = &g_38;
                        int *l_3057 = (void*)0;
                        int *l_3058 = &l_3025;
                        int *l_3059 = &l_2970;
                        int *l_3060 = &l_3032;
                        int *l_3061 = &l_2970;
                        int *l_3062 = &g_4;
                        int *l_3063 = &l_3044;
                        int *l_3064 = &l_3003;
                        int *l_3065 = &l_3008;
                        int *l_3066 = &l_2998;
                        int *l_3067 = &l_3054;
                        int *l_3068 = (void*)0;
                        int *l_3069 = &g_98;
                        int *l_3070 = &g_98;
                        int *l_3071 = &l_3034;
                        int *l_3072 = &l_3025;
                        int *l_3073 = &g_4;
                        int *l_3074 = &l_3054;
                        int *l_3075 = &l_2991;
                        int *l_3076 = &l_2970;
                        int *l_3077 = (void*)0;
                        int *l_3078 = &g_544;
                        int *l_3079 = &l_3003;
                        int *l_3082 = &l_3034;
                        int *l_3083 = (void*)0;
                        int *l_3084 = &l_3025;
                        int *l_3085 = &l_2958;
                        int *l_3086 = &l_3032;
                        int *l_3087 = &g_38;
                        int *l_3088 = &g_98;
                        int *l_3089 = (void*)0;
                        int *l_3090 = &g_2754;
                        int *l_3091 = &l_2998;
                        int *l_3092 = (void*)0;
                        int *l_3093 = &l_3080;
                        int *l_3095 = (void*)0;
                        int *l_3096 = (void*)0;
                        int *l_3097 = &l_2960;
                        int *l_3098 = &l_3032;
                        int *l_3099 = &g_98;
                        int *l_3100 = &l_2958;
                        int *l_3101 = (void*)0;
                        int *l_3102 = &l_3044;
                        int *l_3103 = &l_3025;
                        int *l_3104 = &l_3081;
                        int *l_3106 = &l_2991;
                        int *l_3107 = &l_3034;
                        int *l_3108 = &l_3016;
                        int *l_3109 = (void*)0;
                        int *l_3110 = &g_98;
                        int *l_3111 = &l_3080;
                        int *l_3112 = &l_3034;
                        int *l_3113 = &g_38;
                        int *l_3115 = (void*)0;
                        int *l_3116 = &l_3054;
                        int *l_3117 = (void*)0;
                        int *l_3118 = (void*)0;
                        int *l_3119 = &l_3054;
                        int *l_3121 = (void*)0;
                        int *l_3122 = &g_544;
                        int *l_3123 = &l_2991;
                        int *l_3124 = &g_38;
                        int *l_3125 = &g_544;
                        int *l_3126 = &l_2991;
                        int *l_3127 = &l_3120;
                        int *l_3128 = (void*)0;
                        int *l_3129 = &l_3105;
                        int *l_3130 = (void*)0;
                        int *l_3131 = &l_3054;
                        int *l_3132 = &g_38;
                        int *l_3133 = &l_3081;
                        int *l_3135 = &l_2960;
                        int *l_3136 = &g_2754;
                        int *l_3137 = &l_2960;
                        int *l_3138 = &l_2960;
                        int *l_3139 = &g_38;
                        int *l_3141 = &g_544;
                        l_3041++;
                        l_3142--;
                    }
                }
                for (l_2874 = 22; (l_2874 <= 16); l_2874 = safe_sub_func_uint32_t_u_u(l_2874, 6))
                {
                    int *l_3157 = (void*)0;
                }
            }
            (*l_2876) ^= (0x79L | g_2552.f0);
        }
        (*g_3161) = &l_2899;
        for (l_3134 = 2; (l_3134 != 10); l_3134 = safe_add_func_uint16_t_u_u(l_3134, 6))
        {
            int *l_3179 = &l_3003;
            int *l_3182 = &g_957;
            if (((((((g_115.f3 & ((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_int8_t_s(g_1555)), (p_6 , 1UL))) & 0xA51CL)) || (func_48((((func_48(((safe_rshift_func_int16_t_s_s(((((((4294967287UL | (*l_2879)) && g_2552.f3) < p_6) , g_66.f3) > 0L) && 0xF0DCL), 10)) >= 0xED6F5C03L), l_3179, p_6, &g_38) < (*l_3179)) , g_2752.f2) , p_6), &l_2991, (*l_3179), l_3181) , 5L)) | p_6) | g_2587) && (*l_2879)) == (*l_3179)))
            {
                unsigned char l_3186 = 2UL;
                (*g_2753) = func_48(g_1564.f2, &g_98, (func_40(l_3182, ((safe_lshift_func_int8_t_s_s((((p_6 == g_1533.f2) < g_2752.f0) < ((p_6 != (((*l_3182) & (safe_unary_minus_func_int8_t_s((p_6 , 0x1DL)))) || (*l_3181))) == l_3186)), 3)) , (*l_3179))) , p_6), &l_2958);
            }
            else
            {
                (*g_2753) = (~(((safe_sub_func_int16_t_s_s((g_3189 , g_84), (&l_2991 == (void*)0))) , (**g_1933)) != (*g_3162)));
                return p_6;
            }
        }
    }
    else
    {
        int *l_3190 = (void*)0;
        int *l_3191 = &g_98;
        int *l_3192 = &g_1512;
        int *l_3193 = (void*)0;
        int *l_3194 = (void*)0;
        int *l_3195 = &g_98;
        int *l_3196 = &g_2754;
        int *l_3197 = &g_98;
        int *l_3198 = &l_2991;
        int *l_3199 = (void*)0;
        int *l_3200 = (void*)0;
        int *l_3201 = (void*)0;
        int *l_3202 = &l_2958;
        int *l_3203 = &g_98;
        int *l_3204 = &g_98;
        int *l_3205 = &g_957;
        int *l_3206 = &l_2991;
        int *l_3207 = &g_957;
        int *l_3208 = &l_2958;
        int *l_3209 = (void*)0;
        int *l_3210 = &l_2991;
        int *l_3211 = &g_2754;
        int *l_3212 = &g_2754;
        int *l_3213 = &l_2958;
        int *l_3214 = &l_2958;
        int *l_3215 = (void*)0;
        int *l_3216 = &g_2754;
        int *l_3217 = &g_957;
        int *l_3218 = &g_1512;
        int *l_3219 = &g_98;
        int *l_3220 = (void*)0;
        int *l_3222 = &g_38;
        int *l_3223 = &g_4;
        int *l_3224 = &l_2958;
        int *l_3225 = &g_4;
        int *l_3226 = &l_2958;
        int *l_3227 = &l_2958;
        int *l_3228 = &g_957;
        int l_3229 = 0L;
        int *l_3230 = &g_38;
        int *l_3231 = (void*)0;
        int *l_3232 = &l_2991;
        int *l_3233 = (void*)0;
        int *l_3234 = (void*)0;
        int *l_3235 = &l_3221;
        int *l_3236 = &g_1512;
        int *l_3237 = &l_3221;
        int *l_3238 = (void*)0;
        int *l_3239 = &l_2991;
        int *l_3240 = &l_3221;
        int *l_3241 = &g_544;
        int *l_3242 = (void*)0;
        int *l_3243 = (void*)0;
        int *l_3244 = &l_2991;
        int *l_3245 = &g_38;
        int *l_3246 = (void*)0;
        int *l_3247 = &g_1512;
        int *l_3249 = &g_98;
        int *l_3250 = (void*)0;
        int *l_3251 = &l_2991;
        int *l_3252 = &g_2754;
        int *l_3253 = (void*)0;
        int *l_3254 = &g_38;
        int *l_3255 = &g_2754;
        int *l_3256 = &l_3221;
        int *l_3257 = (void*)0;
        int *l_3258 = &l_2991;
        int *l_3259 = &g_957;
        int *l_3260 = (void*)0;
        int *l_3261 = &g_957;
        int *l_3262 = &l_3229;
        int *l_3263 = &l_3221;
        int *l_3264 = (void*)0;
        int *l_3265 = &l_2991;
        int *l_3266 = &g_957;
        int *l_3267 = (void*)0;
        int *l_3269 = &g_544;
        int *l_3270 = &l_2991;
        int *l_3271 = (void*)0;
        int *l_3272 = &g_2754;
        int *l_3273 = &g_957;
        int *l_3274 = &g_4;
        int *l_3275 = &g_2754;
        int *l_3277 = &l_2991;
        int *l_3278 = (void*)0;
        int *l_3279 = &l_3221;
        int *l_3280 = &g_2754;
        int *l_3281 = &l_3248;
        int *l_3282 = &g_98;
        int *l_3283 = &g_4;
        int *l_3284 = &g_1512;
        int *l_3285 = &l_3276;
        int *l_3286 = &g_1512;
        int *l_3287 = (void*)0;
        int *l_3288 = &g_544;
        int *l_3289 = &l_3229;
        int *l_3290 = &g_2754;
        int *l_3291 = &g_4;
        int *l_3292 = (void*)0;
        int *l_3293 = &g_1512;
        int *l_3294 = &l_3221;
        int *l_3295 = &g_1512;
        int *l_3296 = &l_2991;
        int *l_3297 = &g_98;
        int *l_3298 = &g_1512;
        int l_3299 = 0x3638C137L;
        int *l_3300 = (void*)0;
        int *l_3301 = &g_1512;
        int *l_3302 = &g_544;
        int *l_3303 = &l_3229;
        int *l_3304 = (void*)0;
        int *l_3305 = (void*)0;
        ++g_3306;
    }
    return (*l_2879);
}







static unsigned func_7(int * p_8, int * p_9, int p_10, int * p_11)
{
    int *l_22 = &g_4;
    int l_2760 = 1L;
    int *l_2761 = &g_544;
    int *l_2762 = &g_1512;
    int *l_2763 = &g_38;
    int *l_2764 = &g_98;
    int *l_2765 = &g_2754;
    int *l_2766 = &g_1512;
    int *l_2767 = &l_2760;
    int l_2768 = 0x720466D5L;
    int l_2769 = 0x9DCAA75BL;
    int *l_2770 = (void*)0;
    int l_2771 = 0x9615ACAAL;
    int *l_2772 = &g_38;
    int l_2773 = (-9L);
    int *l_2774 = &g_98;
    int *l_2775 = &g_957;
    int *l_2776 = &l_2773;
    int *l_2777 = &g_98;
    int *l_2778 = &g_957;
    int *l_2779 = &l_2773;
    int l_2780 = 0L;
    int *l_2781 = (void*)0;
    int *l_2782 = &l_2760;
    int *l_2783 = &l_2769;
    int *l_2784 = (void*)0;
    int l_2785 = 0x6B4997AEL;
    int l_2786 = 0x2C4C0C40L;
    int *l_2787 = &l_2785;
    int *l_2788 = &g_1512;
    int *l_2789 = &l_2780;
    int *l_2790 = &g_544;
    int *l_2791 = &l_2771;
    int *l_2792 = &l_2768;
    int *l_2793 = &l_2760;
    int *l_2794 = &l_2780;
    int l_2795 = 6L;
    int l_2796 = 0L;
    int *l_2797 = &g_544;
    int *l_2798 = &l_2780;
    int *l_2799 = &g_544;
    int *l_2800 = &l_2771;
    int *l_2801 = (void*)0;
    int *l_2802 = &g_2754;
    int *l_2803 = &g_957;
    int *l_2804 = &l_2760;
    int *l_2805 = &g_98;
    int *l_2806 = &l_2780;
    int *l_2807 = &l_2768;
    int *l_2808 = &l_2769;
    int *l_2809 = &l_2773;
    int *l_2810 = &g_2754;
    int *l_2811 = (void*)0;
    int *l_2812 = (void*)0;
    int *l_2813 = (void*)0;
    int *l_2814 = &g_544;
    int l_2815 = 0xB58B5637L;
    int *l_2816 = &g_2754;
    int *l_2817 = &g_38;
    int *l_2818 = &g_98;
    int *l_2819 = &g_957;
    int l_2820 = 0x8D5B79CBL;
    int *l_2821 = &g_957;
    int *l_2822 = &l_2786;
    int *l_2823 = &g_98;
    int l_2824 = 6L;
    int *l_2825 = &g_2754;
    int l_2826 = 9L;
    int *l_2827 = (void*)0;
    int *l_2828 = &l_2796;
    int *l_2829 = &l_2773;
    int *l_2830 = &l_2769;
    int *l_2831 = &l_2760;
    int *l_2832 = &l_2760;
    int *l_2833 = &l_2815;
    int *l_2834 = &l_2771;
    int *l_2835 = &l_2768;
    int *l_2836 = &l_2780;
    int *l_2837 = &l_2768;
    int *l_2838 = &l_2796;
    int *l_2839 = &l_2796;
    int *l_2840 = &g_38;
    int *l_2841 = &l_2780;
    int *l_2842 = (void*)0;
    int *l_2843 = &g_1512;
    int *l_2844 = &l_2786;
    int *l_2845 = (void*)0;
    int *l_2846 = (void*)0;
    int *l_2847 = &l_2760;
    int *l_2848 = &g_38;
    int *l_2849 = &l_2771;
    int *l_2850 = &l_2826;
    int *l_2851 = &l_2820;
    int *l_2852 = &g_1512;
    int *l_2853 = &l_2773;
    int l_2854 = (-10L);
    int *l_2855 = &l_2785;
    int *l_2856 = (void*)0;
    int *l_2857 = &g_544;
    int *l_2858 = &g_957;
    int *l_2859 = &l_2795;
    int *l_2860 = &l_2796;
    int *l_2861 = &l_2769;
    int *l_2862 = &l_2771;
    int *l_2863 = (void*)0;
    int *l_2864 = (void*)0;
    int *l_2865 = &l_2824;
    int *l_2866 = (void*)0;
    int *l_2867 = &l_2769;
    int *l_2868 = &g_4;
    unsigned char l_2869 = 0UL;
    (*p_9) = func_13((((g_4 , func_19(l_22, func_23(p_10, ((*p_11) < (0x16AAC895L & (safe_add_func_int16_t_s_s(((((safe_sub_func_int16_t_s_s(p_10, func_32(p_10, p_10, p_10, p_10))) >= (*l_22)) | (*l_22)) > g_1048), (*l_22))))), p_9, &g_4))) , (*l_22)) | 2UL), l_22, g_134.f1, p_10, g_2753);
    --l_2869;
    return g_1817.f3;
}







static int func_13(unsigned short p_14, int * p_15, unsigned p_16, int p_17, int * p_18)
{
    int ***l_2757 = &g_70;
    int l_2758 = 0x26E35EFDL;
    (*g_2753) &= ((((g_2458.f3 , g_907) && ((-8L) <= (*p_15))) , (2UL != p_14)) < g_4);
    (*g_2759) = p_15;
    return l_2758;
}







static struct S0 func_19(int * p_20, int * p_21)
{
    (*p_21) = (*p_20);
    return g_2752;
}







static int * func_23(int p_24, int p_25, int * p_26, int * p_27)
{
    unsigned l_1495 = 0x50EA56B2L;
    struct S1 **l_1499 = &g_381;
    struct S1 ***l_1498 = &l_1499;
    struct S1 **l_1502 = &g_381;
    int l_1505 = 0L;
    unsigned char l_1553 = 0x7EL;
    char l_1568 = 0x57L;
    unsigned short l_1590 = 65532UL;
    int l_1591 = 0x2F2E8D51L;
    int l_1702 = 4L;
    int l_1709 = (-1L);
    int l_1822 = (-1L);
    int l_1993 = 1L;
    int l_2146 = 0L;
    int l_2155 = 0x36DA212CL;
    int l_2312 = (-1L);
    int l_2392 = 0x47B1FA77L;
    int l_2412 = 0x2C594493L;
    int l_2423 = 0x2FF97A8BL;
    int l_2434 = 0x563BF991L;
    unsigned char l_2441 = 0x2DL;
    char l_2464 = 0x1EL;
    struct S0 **l_2659 = (void*)0;
    char l_2734 = 0x3BL;
    int l_2741 = 0x7E8E20DFL;
    l_1495++;
    l_1505 = ((l_1498 != (void*)0) , ((safe_mod_func_int16_t_s_s((((l_1502 != (*l_1498)) , (l_1495 < p_25)) == ((safe_add_func_uint16_t_u_u(((((l_1495 > ((((((void*)0 != &g_1494) | 0x753FE19DL) != p_25) <= 0L) && p_24)) == 1L) || p_24) || 0x6AL), g_76.f2)) | p_24)), l_1495)) >= p_25));
    if ((l_1495 | (g_66.f3 , (safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s((g_1512 == (p_24 && p_24)), ((safe_unary_minus_func_int32_t_s((-1L))) || l_1495))) > ((((safe_sub_func_uint16_t_u_u(((0x443A14B3L <= func_40(((safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((safe_add_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s(p_24, p_24)) != 65529UL), l_1495)) < (*p_26)), 0x331975ABL)), g_942.f0)) , p_27), l_1505)) | 0x5D0AL), 65534UL)) == p_24) || 6UL) & g_958.f0)) < (*p_27)), g_76.f2)), g_76.f0)))))
    {
        unsigned l_1529 = 0xD6BE693EL;
        int l_1530 = (-1L);
        unsigned short l_1569 = 0xB6ECL;
        unsigned char l_1600 = 1UL;
        unsigned char l_1606 = 251UL;
        int *l_1612 = &g_1512;
        int l_1633 = 6L;
        unsigned char l_1659 = 0xACL;
        unsigned short l_1731 = 0xE1BFL;
        int l_1798 = 0L;
        struct S0 *l_1816 = &g_134;
        int l_1834 = (-6L);
        struct S1 **l_1847 = (void*)0;
        int l_1859 = 0xB76DCE8CL;
        unsigned l_1936 = 18446744073709551612UL;
        int l_1976 = 0x06EFA51FL;
        int l_2121 = 1L;
        int l_2122 = (-4L);
        unsigned l_2159 = 0xEFB369B0L;
        int l_2179 = 0L;
        int l_2180 = 9L;
        int l_2181 = 1L;
        int l_2397 = (-1L);
        for (g_1323.f2 = 0; (g_1323.f2 >= 49); g_1323.f2++)
        {
            short l_1526 = 3L;
            int *l_1554 = &g_4;
            int ***l_1565 = (void*)0;
            int ***l_1566 = &g_70;
            if ((l_1526 , ((safe_mod_func_uint32_t_u_u((&g_70 != (void*)0), g_372)) | ((p_24 , (l_1529 || (((((-4L) == l_1530) , ((((g_958.f0 & l_1526) >= 3L) == g_115.f1) || g_1323.f0)) , g_942.f0) , 65535UL))) , g_76.f1))))
            {
                char l_1534 = 1L;
                if ((((safe_sub_func_uint8_t_u_u((~(!((l_1530 & g_1323.f3) == p_25))), 246UL)) || p_24) != l_1534))
                {
                    unsigned l_1552 = 0xE4C71094L;
                    (*p_27) = (safe_mod_func_int8_t_s_s((((((safe_add_func_uint8_t_u_u(p_24, (safe_add_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((((func_40(p_27, (*p_27)) > (safe_sub_func_uint16_t_u_u(g_1323.f3, (((g_1323.f2 , ((safe_unary_minus_func_int16_t_s((safe_rshift_func_uint8_t_u_u(g_98, (((p_25 , (safe_lshift_func_uint16_t_u_s(0x5BB0L, 14))) & 1UL) <= l_1552))))) == 0x5749L)) >= 0xE7L) , 0xF0E1L)))) == l_1529) ^ g_134.f0), (*p_26))) >= 0L), l_1505)) < l_1534), p_24)))) , l_1526) || p_24) ^ l_1529) >= g_557), g_4));
                    (*p_26) |= l_1553;
                    p_27 = l_1554;
                }
                else
                {
                    g_1555 |= ((((((**l_1499) , ((*g_71) <= p_25)) == 0xEFL) != p_25) , (**g_1493)) , (*g_71));
                    for (g_544 = 4; (g_544 > 7); ++g_544)
                    {
                        (*g_1558) = p_27;
                    }
                }
                (*g_71) = (*l_1554);
            }
            else
            {
                int *l_1559 = &l_1505;
                (*l_1554) = (*p_26);
                (*l_1554) |= (*g_37);
                (**l_1502) = g_1564;
            }
            (*l_1566) = &p_26;
            (***l_1498) = g_1567;
        }
        l_1568 &= (**g_1558);
        if ((*p_27))
        {
            int *l_1579 = &g_544;
            struct S0 **l_1588 = &g_1494;
            struct S1 *l_1597 = &g_1323;
            int l_1624 = 5L;
            int *l_1736 = &l_1633;
            int *l_1737 = &g_38;
            int *l_1738 = &g_957;
            int *l_1739 = &l_1709;
            int *l_1740 = &g_1512;
            int *l_1741 = &g_1512;
            int *l_1742 = &g_4;
            int *l_1743 = &l_1624;
            int *l_1744 = &g_4;
            int *l_1745 = &l_1591;
            int *l_1746 = &g_544;
            int *l_1747 = &g_1512;
            int *l_1748 = &l_1591;
            int *l_1749 = &l_1624;
            int *l_1750 = &l_1633;
            int *l_1751 = &g_98;
            int *l_1752 = &g_4;
            int *l_1753 = (void*)0;
            int *l_1754 = &g_38;
            int *l_1755 = (void*)0;
            int l_1756 = 0xE7D7D640L;
            int *l_1757 = (void*)0;
            int *l_1758 = &l_1709;
            int *l_1759 = (void*)0;
            int *l_1760 = &g_957;
            int *l_1761 = (void*)0;
            int *l_1762 = (void*)0;
            int *l_1763 = (void*)0;
            int *l_1764 = &g_1512;
            int *l_1765 = &l_1709;
            int *l_1766 = &g_4;
            int *l_1767 = &l_1633;
            int *l_1768 = &g_4;
            int *l_1769 = &l_1624;
            int l_1770 = 0x080A6522L;
            int *l_1771 = &g_38;
            int *l_1772 = &l_1633;
            unsigned l_1773 = 5UL;
            unsigned l_1927 = 0x4AAEEC8FL;
            int l_2113 = (-2L);
            int l_2216 = 0xEB8998C8L;
            unsigned char l_2218 = 5UL;
            struct S1 ***l_2237 = &l_1847;
            int l_2408 = 0L;
            unsigned short l_2461 = 0x1005L;
            int *l_2502 = (void*)0;
            if (((**g_380) , (*p_26)))
            {
                unsigned short l_1599 = 0xC107L;
                int **l_1611 = (void*)0;
                int l_1626 = 7L;
                int l_1699 = (-1L);
                (*p_27) |= l_1569;
                if (((safe_rshift_func_int16_t_s_u((*l_1579), p_25)) || 0L))
                {
                    short l_1618 = 0xB5D4L;
                    int l_1658 = 0x832C4D92L;
                    for (l_1505 = 0; (l_1505 < (-23)); --l_1505)
                    {
                        struct S1 *l_1598 = (void*)0;
                        l_1591 ^= (safe_sub_func_uint32_t_u_u(((g_934 | ((((((*p_27) > (((safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s((g_1567.f2 >= g_77.f1), (*l_1579))), p_25)) , &g_1494) == l_1588)) & 0x0A4BL) ^ l_1530) , g_1589) , 255UL)) <= 247UL), l_1590));
                        g_942.f0 |= ((safe_rshift_func_uint16_t_u_u((((g_76.f1 , (((((void*)0 != &g_70) <= l_1553) , p_25) , g_1323.f0)) ^ (*p_26)) , g_957), g_38)) > p_25);
                    }
                    for (g_1555 = (-13); (g_1555 != 27); ++g_1555)
                    {
                        int *l_1605 = &g_38;
                        (*l_1605) ^= (p_25 | (safe_add_func_uint16_t_u_u((((((*l_1579) != p_25) == g_557) ^ 1UL) == (*p_26)), p_24)));
                        (*l_1579) ^= (*p_27);
                        if (l_1590)
                            break;
                        if ((*p_27))
                            break;
                    }
                    (*g_71) &= (p_25 < (g_958.f0 , g_1048));
                    if ((0x8723L & ((void*)0 == l_1611)))
                    {
                        short l_1613 = 0L;
                        int *l_1614 = &g_4;
                        int *l_1615 = (void*)0;
                        int *l_1616 = &g_1512;
                        int *l_1617 = &l_1591;
                        int *l_1619 = (void*)0;
                        int *l_1620 = &l_1505;
                        int *l_1621 = &g_98;
                        int *l_1622 = &g_544;
                        int *l_1623 = (void*)0;
                        int *l_1625 = &l_1624;
                        int *l_1627 = &l_1626;
                        int *l_1628 = &g_1512;
                        int *l_1629 = &g_957;
                        int *l_1630 = (void*)0;
                        int *l_1631 = (void*)0;
                        int *l_1632 = &g_957;
                        int *l_1634 = &l_1626;
                        int *l_1635 = &l_1633;
                        int *l_1636 = &l_1626;
                        int *l_1637 = &g_38;
                        int *l_1638 = &g_98;
                        int *l_1639 = &l_1505;
                        int *l_1640 = &g_957;
                        int *l_1641 = &g_4;
                        int *l_1642 = &g_98;
                        int *l_1643 = &g_1512;
                        int *l_1644 = &l_1505;
                        int *l_1645 = (void*)0;
                        int *l_1646 = &g_98;
                        int *l_1647 = &l_1626;
                        int *l_1648 = &l_1624;
                        int *l_1649 = &g_38;
                        int *l_1650 = &l_1626;
                        int *l_1651 = (void*)0;
                        int *l_1652 = &l_1591;
                        int *l_1653 = &g_4;
                        int *l_1654 = (void*)0;
                        int *l_1655 = &l_1624;
                        int *l_1656 = (void*)0;
                        int *l_1657 = &g_4;
                        (*g_71) ^= 7L;
                        l_1612 = p_27;
                        l_1659++;
                    }
                    else
                    {
                        (*p_26) = ((safe_sub_func_int16_t_s_s((+((((-5L) < (g_1323.f3 > (g_1533.f1 <= g_372))) , &l_1579) == &p_27)), (safe_mod_func_int32_t_s_s((g_1666 & (((g_115.f0 >= g_557) , (*l_1579)) | (*l_1612))), (*g_71))))) && p_24);
                    }
                }
                else
                {
                    int *l_1667 = &g_4;
                    if ((*g_1470))
                    {
                        (***l_1498) = (*g_381);
                        (*l_1612) = (g_958.f3 | (safe_add_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((((*l_1612) < (safe_add_func_uint32_t_u_u(0x7963F2AEL, (g_544 < (((*l_1579) == g_115.f2) && p_24))))) , (*l_1612)), (*l_1579))) || g_942.f2), (*l_1667))));
                        (*g_1674) = (*g_1558);
                    }
                    else
                    {
                        struct S0 ***l_1675 = &l_1588;
                        (*l_1675) = l_1588;
                        return (*g_1558);
                    }
                }
                for (g_557 = 0; (g_557 > 12); g_557++)
                {
                    short l_1698 = 0x9643L;
                    unsigned l_1727 = 0x3F444914L;
                    int l_1730 = 0x398F7B81L;
                    for (g_1323.f2 = (-8); (g_1323.f2 >= 27); ++g_1323.f2)
                    {
                        int *l_1680 = &l_1591;
                        int *l_1681 = (void*)0;
                        int *l_1682 = &g_1512;
                        int *l_1683 = &l_1626;
                        int *l_1684 = &l_1624;
                        int *l_1685 = &l_1633;
                        int *l_1686 = &g_957;
                        int *l_1687 = &l_1505;
                        int *l_1688 = &l_1624;
                        int *l_1689 = &g_98;
                        int *l_1690 = (void*)0;
                        int *l_1691 = (void*)0;
                        int *l_1692 = &g_98;
                        int *l_1693 = &g_1512;
                        int *l_1694 = &g_4;
                        int *l_1695 = (void*)0;
                        int *l_1696 = &l_1624;
                        int *l_1697 = &l_1624;
                        int *l_1700 = &g_957;
                        int *l_1701 = &g_4;
                        int *l_1703 = &l_1702;
                        int *l_1704 = &l_1591;
                        int *l_1705 = &l_1624;
                        int *l_1706 = &l_1591;
                        int *l_1707 = (void*)0;
                        int *l_1708 = &g_38;
                        int *l_1710 = &l_1505;
                        int *l_1711 = &g_544;
                        int *l_1712 = &l_1633;
                        int *l_1713 = &g_4;
                        int *l_1714 = &l_1709;
                        int *l_1715 = &g_38;
                        int *l_1716 = &l_1702;
                        int *l_1717 = &l_1626;
                        int *l_1718 = &g_4;
                        int *l_1719 = &g_544;
                        int *l_1720 = (void*)0;
                        int *l_1721 = &l_1633;
                        int *l_1722 = &g_544;
                        int *l_1723 = &g_38;
                        int *l_1724 = &g_1512;
                        int *l_1725 = &l_1591;
                        int *l_1726 = (void*)0;
                        l_1727++;
                    }
                    l_1731--;
                }
            }
            else
            {
                int *l_1735 = &l_1633;
                if ((*l_1612))
                {
                    (*g_1734) = (*g_1674);
                    (*p_26) = (*p_27);
                    (*g_71) = (*g_37);
                }
                else
                {
                    return p_26;
                }
            }
            ++l_1773;
            if ((*p_26))
            {
                (*l_1754) &= func_40((*g_1674), (*p_27));
                if ((*l_1612))
                {
                    unsigned char l_1778 = 0x3EL;
                    (*l_1748) = (((void*)0 == &l_1633) != (safe_lshift_func_int16_t_s_u(p_24, (g_77.f1 == l_1778))));
                }
                else
                {
                    char l_1779 = (-6L);
                    int *l_1796 = &l_1624;
                    int l_1797 = (-5L);
                    (*l_1739) = (((p_25 < ((**g_1674) || l_1779)) & (*l_1612)) > (safe_sub_func_int32_t_s_s((((safe_rshift_func_int16_t_s_s((*l_1612), 4)) , l_1588) == (void*)0), ((safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(4294967295UL, (safe_sub_func_int16_t_s_s(l_1779, l_1779)))), 0x5646L)) , 0xB447EC96L))));
                    (*l_1767) ^= (((((p_25 && ((0xC431E708L && (1L >= g_1323.f1)) , (safe_rshift_func_uint8_t_u_u((((((l_1495 && (+(0xC9D42AA3L == ((*l_1796) ^ (-9L))))) , l_1797) ^ (*l_1745)) || (-10L)) , g_557), 4)))) <= (*p_27)) == l_1590) != p_24) >= l_1798);
                }
            }
            else
            {
                for (l_1633 = 0; (l_1633 < (-28)); l_1633--)
                {
                    int **l_1802 = &l_1761;
                    (*l_1802) = p_26;
                    for (g_66.f2 = 0; (g_66.f2 != 34); g_66.f2++)
                    {
                        int l_1805 = 0x758D534AL;
                        if ((*l_1750))
                            break;
                        if ((*p_26))
                            continue;
                        (*l_1802) = (*g_1558);
                        (*l_1738) &= l_1805;
                    }
                    (*l_1802) = (void*)0;
                }
            }
            if ((!((*l_1612) <= 0x6182CB78L)))
            {
                unsigned l_1811 = 0x1F0926ACL;
                struct S1 ***l_1829 = &l_1499;
                int l_1893 = 0L;
                int l_1951 = 0x6EE84A40L;
                int l_2087 = (-1L);
                int l_2119 = 0x5EE10265L;
                int l_2120 = 1L;
                int l_2140 = 1L;
                unsigned l_2171 = 0UL;
                unsigned short l_2224 = 0x263CL;
                (*p_27) = 1L;
                for (g_1666 = 0; (g_1666 >= 14); g_1666 = safe_add_func_uint32_t_u_u(g_1666, 3))
                {
                    int *l_1808 = &l_1624;
                    int *l_1809 = &g_1512;
                    int *l_1810 = &g_544;
                    if ((*p_26))
                        break;
                    --l_1811;
                    (*p_27) ^= (safe_lshift_func_uint16_t_u_s(((((void*)0 == l_1816) < (0xD1L && (g_1817 , 0xE6L))) <= (((5L | (safe_rshift_func_int16_t_s_u(((p_25 && (0x6CE0L != (*l_1808))) != l_1811), 0))) != p_25) , g_1567.f2)), 10));
                    (*l_1742) = (safe_add_func_int16_t_s_s(g_958.f2, 0x57F2L));
                }
                if (((*p_26) || (l_1829 == ((safe_lshift_func_uint16_t_u_s(65535UL, 9)) , &g_380))))
                {
                    char l_1846 = 0xB0L;
                    int l_1852 = 4L;
                    unsigned l_1866 = 0x48C8D082L;
                    int l_1873 = (-6L);
                    int *l_1874 = &l_1709;
                    int *l_1875 = &g_544;
                    int *l_1876 = &l_1505;
                    int *l_1877 = &g_544;
                    int *l_1878 = &l_1624;
                    int *l_1879 = &l_1770;
                    int *l_1880 = (void*)0;
                    int *l_1881 = &g_4;
                    int *l_1882 = &l_1633;
                    int *l_1883 = (void*)0;
                    int *l_1884 = &g_544;
                    int *l_1885 = &g_38;
                    int *l_1886 = &g_38;
                    int *l_1887 = &l_1633;
                    int *l_1888 = &g_98;
                    int *l_1889 = &g_98;
                    int *l_1890 = &l_1873;
                    int *l_1891 = (void*)0;
                    int *l_1892 = (void*)0;
                    int *l_1894 = &l_1852;
                    int *l_1895 = &g_544;
                    int *l_1896 = &l_1852;
                    int *l_1897 = &g_98;
                    int *l_1898 = &g_38;
                    int *l_1899 = &g_1512;
                    int *l_1900 = (void*)0;
                    int *l_1901 = &l_1591;
                    int *l_1902 = &l_1770;
                    int *l_1903 = &l_1770;
                    int *l_1904 = &g_1512;
                    int *l_1905 = &g_957;
                    int *l_1906 = &l_1859;
                    int *l_1907 = &l_1624;
                    int *l_1908 = &l_1591;
                    int *l_1909 = &l_1505;
                    int *l_1910 = &l_1852;
                    int *l_1911 = &g_4;
                    int *l_1912 = &g_98;
                    int l_1913 = (-1L);
                    int *l_1914 = (void*)0;
                    int *l_1915 = &g_957;
                    int *l_1916 = &l_1505;
                    int *l_1917 = &l_1702;
                    int *l_1918 = &l_1913;
                    int *l_1919 = (void*)0;
                    int *l_1920 = &g_957;
                    int *l_1921 = (void*)0;
                    int *l_1922 = (void*)0;
                    int *l_1923 = (void*)0;
                    int *l_1924 = (void*)0;
                    int *l_1925 = &l_1633;
                    int *l_1926 = &g_1512;
                    if ((safe_lshift_func_int8_t_s_s(l_1834, 7)))
                    {
                        unsigned l_1841 = 0xFADE9FEAL;
                        int **l_1851 = &l_1612;
                        (*l_1760) = (safe_add_func_uint16_t_u_u(0x23EAL, ((safe_rshift_func_uint16_t_u_u(0UL, 9)) >= (g_1589.f0 <= ((l_1590 & (safe_sub_func_int8_t_s_s((((((void*)0 != &g_381) > ((l_1841 , ((safe_sub_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s(func_40(&g_98, (*g_71)), 4)) || (-1L)), (*p_27))) , 0x6C20L)) & l_1846)) , l_1847) != (void*)0), 252UL))) , p_24)))));
                        (*l_1746) |= (safe_rshift_func_uint16_t_u_u(0xD207L, 5));
                        (*l_1851) = p_27;
                    }
                    else
                    {
                        char l_1853 = 1L;
                        int *l_1854 = &g_38;
                        int *l_1855 = &g_1512;
                        int *l_1856 = &l_1505;
                        int *l_1857 = &g_4;
                        int *l_1858 = &g_98;
                        int *l_1860 = (void*)0;
                        int *l_1861 = &l_1633;
                        int *l_1862 = &l_1770;
                        int l_1863 = (-1L);
                        int *l_1864 = &g_38;
                        int *l_1865 = &g_1512;
                        l_1866--;
                        return p_26;
                    }
                    for (g_98 = 29; (g_98 >= (-11)); --g_98)
                    {
                        (*l_1739) = (safe_rshift_func_uint8_t_u_s(0xAFL, g_1567.f1));
                        if ((*p_27))
                            break;
                        return p_26;
                    }
                    l_1927--;
                    (*l_1736) = 0x2F77521AL;
                }
                else
                {
                    int l_1930 = 1L;
                    int *l_1946 = &g_98;
                    int *l_1947 = (void*)0;
                    int *l_1948 = &l_1624;
                    int *l_1949 = &l_1591;
                    int *l_1950 = &l_1702;
                    int *l_1952 = &l_1709;
                    int *l_1953 = (void*)0;
                    int *l_1954 = &l_1770;
                    int *l_1955 = &l_1893;
                    int *l_1956 = &l_1756;
                    int *l_1957 = &l_1770;
                    int *l_1958 = (void*)0;
                    int l_1959 = (-8L);
                    int *l_1960 = &g_544;
                    int *l_1961 = &l_1951;
                    int *l_1962 = &l_1702;
                    int *l_1963 = &g_4;
                    int *l_1964 = (void*)0;
                    int *l_1965 = &l_1709;
                    int *l_1966 = &g_98;
                    int *l_1967 = &l_1702;
                    int *l_1968 = &g_957;
                    int *l_1969 = &g_1512;
                    int *l_1970 = &l_1770;
                    int l_1971 = 0x09493648L;
                    int *l_1972 = &g_98;
                    int *l_1973 = &g_4;
                    int *l_1974 = &g_98;
                    int *l_1975 = &l_1505;
                    int *l_1977 = &l_1633;
                    int *l_1978 = &g_957;
                    int *l_1979 = &g_98;
                    int *l_1980 = &l_1951;
                    int *l_1981 = (void*)0;
                    int *l_1982 = &l_1959;
                    int *l_1983 = &l_1951;
                    int *l_1984 = (void*)0;
                    int *l_1985 = &g_98;
                    int *l_1986 = &g_957;
                    int *l_1987 = &l_1971;
                    int *l_1988 = &g_98;
                    int *l_1989 = &l_1505;
                    int *l_1990 = &l_1756;
                    int *l_1991 = &g_544;
                    int *l_1992 = &l_1951;
                    int *l_1994 = (void*)0;
                    int *l_1995 = (void*)0;
                    int *l_1996 = &l_1633;
                    int *l_1997 = (void*)0;
                    int *l_1998 = &g_544;
                    int *l_1999 = &l_1951;
                    int *l_2000 = &l_1624;
                    int *l_2001 = &l_1709;
                    int l_2002 = 0L;
                    int *l_2003 = (void*)0;
                    int *l_2004 = &g_1512;
                    int *l_2005 = &g_1512;
                    int *l_2006 = &l_1971;
                    int *l_2007 = &l_1702;
                    int *l_2008 = &l_1633;
                    int *l_2009 = &l_1959;
                    int *l_2010 = &l_1993;
                    int *l_2011 = (void*)0;
                    int *l_2012 = &l_1591;
                    int *l_2013 = &l_1702;
                    int *l_2014 = &g_544;
                    int *l_2015 = &l_1505;
                    int *l_2016 = &l_2002;
                    int *l_2017 = &l_1505;
                    int *l_2018 = &l_1591;
                    int *l_2019 = (void*)0;
                    int *l_2020 = &l_1624;
                    int *l_2021 = &l_1993;
                    int *l_2022 = &g_544;
                    int *l_2023 = (void*)0;
                    int *l_2024 = &l_1702;
                    int *l_2025 = &l_1591;
                    int *l_2026 = (void*)0;
                    int *l_2027 = &l_2002;
                    int *l_2028 = (void*)0;
                    int *l_2029 = &g_1512;
                    int *l_2030 = &l_1971;
                    int l_2031 = 3L;
                    int *l_2032 = &l_1709;
                    int l_2033 = (-1L);
                    int *l_2034 = &l_1702;
                    int *l_2035 = &g_544;
                    int *l_2036 = &l_1591;
                    int *l_2037 = (void*)0;
                    int *l_2038 = &l_1959;
                    int *l_2039 = &l_1702;
                    int *l_2040 = &l_1702;
                    int *l_2041 = &l_1951;
                    int *l_2042 = (void*)0;
                    int *l_2043 = (void*)0;
                    int *l_2044 = &g_4;
                    int *l_2045 = &g_4;
                    int *l_2046 = &l_1756;
                    int *l_2047 = &l_1709;
                    int *l_2048 = &l_1770;
                    int *l_2049 = &l_1702;
                    int *l_2050 = &g_4;
                    int *l_2051 = &l_1505;
                    int *l_2052 = (void*)0;
                    int *l_2053 = &l_1893;
                    int *l_2054 = &l_1971;
                    int *l_2055 = (void*)0;
                    int *l_2056 = &g_4;
                    int *l_2057 = &l_1770;
                    int *l_2058 = &g_957;
                    int *l_2059 = &l_1959;
                    int *l_2060 = &g_1512;
                    int *l_2061 = &l_2031;
                    int *l_2062 = &l_1633;
                    int *l_2063 = &l_1971;
                    int *l_2064 = (void*)0;
                    int *l_2065 = &l_1702;
                    int *l_2066 = (void*)0;
                    int *l_2067 = (void*)0;
                    int l_2068 = 0x62E4859EL;
                    int *l_2069 = &g_957;
                    int *l_2070 = &l_1859;
                    int *l_2071 = &l_2002;
                    int *l_2072 = &l_1893;
                    int *l_2073 = (void*)0;
                    int *l_2074 = &l_1993;
                    int *l_2075 = &l_1770;
                    int *l_2076 = &l_1893;
                    int *l_2077 = (void*)0;
                    int *l_2078 = &l_1993;
                    int l_2079 = (-1L);
                    int *l_2080 = &l_1993;
                    int *l_2081 = &l_1971;
                    int *l_2082 = (void*)0;
                    int *l_2083 = &l_1859;
                    int *l_2084 = &g_957;
                    int *l_2085 = &g_544;
                    int *l_2086 = (void*)0;
                    int *l_2088 = &l_1702;
                    int *l_2089 = &g_4;
                    int *l_2090 = &l_1893;
                    int *l_2091 = &l_1624;
                    int *l_2092 = &l_1971;
                    int *l_2093 = &g_957;
                    int *l_2094 = (void*)0;
                    int *l_2095 = (void*)0;
                    int l_2096 = 0L;
                    int *l_2097 = &g_38;
                    int *l_2098 = &l_1702;
                    int *l_2099 = &l_1702;
                    int *l_2100 = &l_1633;
                    int *l_2101 = &g_957;
                    int *l_2102 = &g_957;
                    int *l_2103 = (void*)0;
                    int *l_2104 = &g_4;
                    int *l_2105 = &l_2033;
                    int l_2106 = 0x4E654B36L;
                    int *l_2107 = &l_1993;
                    int *l_2108 = &l_1993;
                    int *l_2109 = &g_957;
                    int *l_2110 = (void*)0;
                    int *l_2111 = &l_1859;
                    int *l_2112 = &l_1591;
                    int *l_2114 = &g_544;
                    int *l_2115 = (void*)0;
                    int *l_2116 = &g_1512;
                    int *l_2117 = (void*)0;
                    int *l_2118 = &g_1512;
                    int *l_2123 = &g_544;
                    int *l_2124 = &l_2120;
                    int *l_2125 = &l_2033;
                    int *l_2126 = &l_1951;
                    int *l_2127 = &l_2121;
                    int *l_2128 = &l_1859;
                    int *l_2129 = (void*)0;
                    int *l_2130 = &l_1859;
                    int *l_2131 = &l_2120;
                    int *l_2132 = (void*)0;
                    int *l_2133 = &l_2033;
                    int *l_2134 = (void*)0;
                    int *l_2135 = &g_98;
                    int *l_2136 = &l_2113;
                    int *l_2137 = &l_1951;
                    int *l_2138 = &l_2096;
                    int *l_2139 = &l_2113;
                    int *l_2141 = &l_1959;
                    int *l_2142 = &g_544;
                    int *l_2143 = &l_1959;
                    int *l_2144 = (void*)0;
                    int *l_2145 = &l_1959;
                    int *l_2147 = &l_1951;
                    int *l_2148 = &l_2146;
                    int *l_2149 = &l_2002;
                    int *l_2150 = &g_1512;
                    int *l_2151 = &l_1709;
                    int *l_2152 = &l_1993;
                    int *l_2153 = &l_2113;
                    int *l_2154 = (void*)0;
                    int *l_2156 = &l_2096;
                    int *l_2157 = &l_2120;
                    int *l_2158 = (void*)0;
                    if (func_40((*g_1674), ((l_1930 >= (-8L)) > (func_40(&l_1859, (((safe_lshift_func_int16_t_s_u((func_40(&l_1591, l_1930) & (1UL > (&l_1847 == g_1933))), 14)) | g_76.f2) != g_76.f0)) > l_1936))))
                    {
                        int **l_1937 = (void*)0;
                        int **l_1938 = (void*)0;
                        (*l_1739) = (*p_27);
                        l_1761 = (void*)0;
                        return p_26;
                    }
                    else
                    {
                        struct S0 *l_1941 = &g_942;
                        (*l_1744) &= l_1930;
                        (*l_1739) |= (safe_add_func_uint8_t_u_u(((((l_1941 != (p_25 , (*g_1493))) != (safe_lshift_func_uint8_t_u_s((*l_1752), (safe_lshift_func_int8_t_s_u((g_1494 != l_1816), func_40(p_27, l_1930)))))) ^ 0x06140FC1L) && 1L), 0xF5L));
                    }
                    l_2159++;
                    if ((((safe_rshift_func_uint8_t_u_u(g_4, (((&l_1597 != (void*)0) || (safe_rshift_func_int8_t_s_s(l_2140, 0))) || (safe_sub_func_uint8_t_u_u(p_25, 0L))))) != (l_1495 , ((1UL <= p_25) ^ (*l_1749)))) == g_66.f0))
                    {
                        short l_2168 = 0x296BL;
                        int l_2169 = (-8L);
                        int l_2170 = 0L;
                        int l_2174 = (-3L);
                        int l_2175 = (-1L);
                        int l_2176 = 0x3FDBD761L;
                        int l_2177 = (-8L);
                        int l_2178 = 0x473D5E94L;
                        int *l_2182 = &l_2178;
                        int *l_2183 = (void*)0;
                        int *l_2184 = (void*)0;
                        int *l_2185 = &l_1591;
                        int *l_2186 = &g_98;
                        int *l_2187 = &l_1709;
                        int *l_2188 = (void*)0;
                        int *l_2189 = (void*)0;
                        int *l_2190 = (void*)0;
                        int *l_2191 = &l_2087;
                        int *l_2192 = &l_2120;
                        int *l_2193 = &l_2119;
                        int *l_2194 = &g_544;
                        int *l_2195 = &g_98;
                        int *l_2196 = &l_2031;
                        int *l_2197 = (void*)0;
                        int l_2198 = (-2L);
                        int *l_2199 = &l_2176;
                        int *l_2200 = &l_2031;
                        int *l_2201 = &l_2119;
                        int *l_2202 = (void*)0;
                        int *l_2203 = &l_1951;
                        int *l_2204 = &g_1512;
                        int l_2205 = (-2L);
                        int *l_2206 = &g_4;
                        int *l_2207 = &l_2176;
                        int *l_2208 = &l_2096;
                        int *l_2209 = &l_1624;
                        int *l_2210 = &l_1770;
                        int *l_2211 = &l_1505;
                        int *l_2212 = (void*)0;
                        int l_2213 = 0x348FC64EL;
                        int *l_2214 = (void*)0;
                        int *l_2215 = &l_2079;
                        int *l_2217 = &l_1971;
                        ++l_2171;
                        ++l_2218;
                    }
                    else
                    {
                        short l_2221 = 0x8968L;
                        int l_2222 = (-1L);
                        int l_2223 = 0L;
                        ++l_2224;
                        (*l_1597) = g_2227;
                        (*l_1996) &= (((*p_26) , 0UL) > g_1533.f2);
                    }
                    (*l_1742) = (safe_rshift_func_int8_t_s_s(g_2227.f1, (*l_1579)));
                }
            }
            else
            {
                char l_2234 = 1L;
                int l_2387 = 0x96DDCBC2L;
                int l_2437 = 0x8C2991A0L;
                int **l_2503 = &l_1764;
                if ((((safe_lshift_func_int16_t_s_u((((safe_lshift_func_uint8_t_u_s(l_2234, ((0x2DL && (((g_1323.f2 , (safe_rshift_func_int8_t_s_u((p_24 < ((void*)0 != l_2237)), 7))) & (safe_lshift_func_int16_t_s_u((*l_1612), g_1589.f1))) , 0xAAL)) == l_2234))) < (*l_1736)) <= (*g_71)), 5)) == 0x87D174B1L) && g_38))
                {
                    int l_2242 = 1L;
                    int *l_2243 = &g_4;
                    int *l_2244 = &l_1756;
                    int *l_2245 = &l_2113;
                    int *l_2246 = &l_2180;
                    int *l_2247 = &l_2121;
                    int *l_2248 = &l_1505;
                    int *l_2249 = &l_1505;
                    int *l_2250 = &g_98;
                    int *l_2251 = &l_1633;
                    int l_2252 = 0x25118706L;
                    int *l_2253 = &l_1770;
                    int *l_2254 = &l_1633;
                    int *l_2255 = (void*)0;
                    int *l_2256 = &l_2179;
                    int *l_2257 = &l_1505;
                    int *l_2258 = &l_1770;
                    int *l_2259 = &l_1770;
                    int *l_2260 = &g_4;
                    int *l_2261 = &g_98;
                    int *l_2262 = &l_1591;
                    int *l_2263 = &l_2179;
                    int *l_2264 = (void*)0;
                    int *l_2265 = &g_1512;
                    int *l_2266 = &l_1993;
                    int *l_2267 = &l_2179;
                    int *l_2268 = &l_1633;
                    int *l_2269 = &l_1709;
                    int *l_2270 = &l_2121;
                    int *l_2271 = &l_1505;
                    int *l_2272 = &l_1505;
                    int *l_2273 = &l_1633;
                    int *l_2274 = &l_1770;
                    int *l_2275 = (void*)0;
                    int *l_2276 = (void*)0;
                    int *l_2277 = &l_2252;
                    int *l_2278 = &g_544;
                    int *l_2279 = &l_2181;
                    int *l_2280 = &l_2122;
                    int *l_2281 = &g_544;
                    int *l_2282 = &l_2180;
                    int l_2283 = 0x69139B79L;
                    int *l_2284 = &g_957;
                    int *l_2285 = &l_2252;
                    int *l_2286 = &l_1770;
                    int *l_2287 = &g_957;
                    int *l_2288 = &l_1624;
                    int *l_2289 = &l_2252;
                    int *l_2290 = &l_2113;
                    int *l_2291 = &g_957;
                    int *l_2292 = &l_1756;
                    int *l_2293 = &g_957;
                    int *l_2294 = &g_38;
                    int *l_2295 = &l_2121;
                    int l_2296 = 0x336C8BA7L;
                    int *l_2297 = (void*)0;
                    int *l_2298 = &l_2146;
                    int *l_2299 = &g_957;
                    int *l_2300 = &l_1591;
                    int *l_2301 = &l_2180;
                    int *l_2302 = (void*)0;
                    int *l_2303 = &l_1770;
                    int *l_2304 = &g_98;
                    int *l_2305 = (void*)0;
                    int *l_2306 = &l_2252;
                    int *l_2307 = &g_544;
                    int *l_2308 = &l_2155;
                    int *l_2309 = &l_2252;
                    int *l_2310 = &g_544;
                    int *l_2311 = (void*)0;
                    int *l_2313 = &l_1624;
                    int *l_2314 = (void*)0;
                    int *l_2315 = &l_2146;
                    int *l_2316 = &g_1512;
                    int l_2317 = 4L;
                    int *l_2318 = &g_38;
                    int *l_2319 = (void*)0;
                    int *l_2320 = &g_4;
                    int *l_2321 = (void*)0;
                    int *l_2322 = &l_1709;
                    int *l_2323 = &l_2121;
                    int *l_2324 = &g_957;
                    int *l_2325 = &l_2155;
                    int *l_2326 = &l_2180;
                    int *l_2327 = &l_1505;
                    int *l_2328 = &l_2283;
                    int *l_2329 = &l_2312;
                    int *l_2330 = &l_2252;
                    int *l_2331 = &l_1505;
                    int *l_2332 = (void*)0;
                    int *l_2333 = &l_2283;
                    int *l_2334 = &l_1591;
                    int *l_2335 = &l_2155;
                    int *l_2336 = &l_1624;
                    int *l_2337 = (void*)0;
                    int *l_2338 = &g_957;
                    int *l_2339 = &l_2179;
                    int *l_2340 = (void*)0;
                    int *l_2341 = &l_1505;
                    int *l_2342 = &g_957;
                    int *l_2343 = &g_544;
                    int *l_2344 = &l_2180;
                    int *l_2345 = &l_2180;
                    int *l_2346 = (void*)0;
                    int *l_2347 = &l_1633;
                    int *l_2348 = &l_2179;
                    int *l_2349 = &g_98;
                    int *l_2350 = &l_1859;
                    int l_2351 = (-10L);
                    int *l_2352 = (void*)0;
                    int *l_2353 = &l_2216;
                    int *l_2354 = (void*)0;
                    int *l_2355 = &g_4;
                    int *l_2356 = &l_1993;
                    int *l_2357 = &g_38;
                    int *l_2358 = &l_2181;
                    int *l_2359 = &l_1624;
                    int *l_2360 = (void*)0;
                    int *l_2361 = &l_2351;
                    int *l_2362 = (void*)0;
                    int *l_2363 = &g_957;
                    int *l_2364 = &g_98;
                    int *l_2365 = &l_2312;
                    int *l_2366 = &l_2317;
                    int *l_2367 = &l_1859;
                    int *l_2368 = &g_98;
                    int *l_2369 = (void*)0;
                    int *l_2370 = &l_1859;
                    int *l_2371 = &l_1702;
                    int *l_2372 = &g_544;
                    int *l_2373 = &l_1505;
                    int *l_2374 = &l_1505;
                    int *l_2375 = (void*)0;
                    int *l_2376 = &g_98;
                    int *l_2377 = &l_2155;
                    int *l_2378 = &l_2317;
                    int *l_2379 = &l_1624;
                    int *l_2380 = &l_1993;
                    int *l_2381 = &g_544;
                    int *l_2382 = &l_2351;
                    int *l_2383 = &l_1624;
                    int *l_2384 = &l_1709;
                    int *l_2385 = (void*)0;
                    int l_2386 = 0x73CC0135L;
                    int *l_2388 = &g_544;
                    int *l_2389 = &l_2216;
                    int *l_2390 = &g_957;
                    int *l_2391 = &l_2180;
                    int *l_2393 = &l_1756;
                    int *l_2394 = &l_2252;
                    int *l_2395 = &l_2386;
                    int *l_2396 = &g_38;
                    int *l_2398 = &l_1633;
                    int *l_2399 = &l_2386;
                    int *l_2400 = &l_2113;
                    int *l_2401 = &g_1512;
                    int *l_2402 = &l_1624;
                    int *l_2403 = &l_2312;
                    int *l_2404 = &l_2179;
                    int *l_2405 = &g_544;
                    int *l_2406 = &l_2296;
                    int *l_2407 = (void*)0;
                    int *l_2409 = &l_2146;
                    int *l_2410 = &l_1770;
                    int *l_2411 = &l_1591;
                    int *l_2413 = (void*)0;
                    int *l_2414 = (void*)0;
                    int *l_2415 = &l_2155;
                    int *l_2416 = &l_2122;
                    int *l_2417 = &l_2179;
                    int *l_2418 = &l_2351;
                    int *l_2419 = &l_2351;
                    int *l_2420 = &l_2351;
                    int *l_2421 = &l_2179;
                    int *l_2422 = &l_2252;
                    int *l_2424 = &g_4;
                    int *l_2425 = &l_2423;
                    int *l_2426 = &l_2296;
                    int *l_2427 = &l_1993;
                    int *l_2428 = &l_2397;
                    int *l_2429 = &l_2386;
                    int *l_2430 = &l_1633;
                    int *l_2431 = &l_1591;
                    int *l_2432 = (void*)0;
                    int *l_2433 = (void*)0;
                    int *l_2435 = &l_2408;
                    int *l_2436 = &g_1512;
                    int *l_2438 = &l_2121;
                    int *l_2439 = &l_2122;
                    int *l_2440 = (void*)0;
                    l_1993 = ((*p_27) >= l_2234);
                    (*p_26) = (safe_mod_func_int32_t_s_s((*l_1612), (**g_1558)));
                    ++l_2441;
                }
                else
                {
                    int l_2448 = 0x38C2EA12L;
                    int *l_2453 = &l_1591;
                    unsigned short l_2454 = 65535UL;
                    int l_2463 = 0x885F1788L;
                    int l_2477 = 0L;
                    unsigned char l_2499 = 255UL;
                    if ((safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((((*g_71) | func_40(p_27, l_2448)) & (safe_add_func_int8_t_s_s(1L, ((safe_rshift_func_uint8_t_u_u(((*g_1674) == &g_98), 5)) >= g_942.f2)))), (*g_71))), l_2448)))
                    {
                        struct S0 *l_2457 = &g_115;
                        l_2453 = ((l_2448 , ((*g_1494) , g_84)) , l_2453);
                        l_2454++;
                        (*l_1765) = (((void*)0 != l_2457) < (g_2458 , (safe_sub_func_uint8_t_u_u(g_2227.f2, 0xEFL))));
                    }
                    else
                    {
                        return p_27;
                    }
                    if (((*l_2453) , l_2461))
                    {
                        (*l_1749) ^= l_2437;
                        p_26 = p_26;
                        p_27 = (g_2462 , p_26);
                        (*g_1558) = &l_1709;
                    }
                    else
                    {
                        int *l_2465 = (void*)0;
                        int *l_2466 = &l_2181;
                        int *l_2467 = (void*)0;
                        int *l_2468 = &l_2181;
                        int *l_2469 = (void*)0;
                        int *l_2470 = (void*)0;
                        int *l_2471 = &l_2122;
                        int *l_2472 = &l_2437;
                        int *l_2473 = &l_2121;
                        int *l_2474 = &l_2437;
                        int *l_2475 = &l_2155;
                        int *l_2476 = &l_1591;
                        int *l_2478 = (void*)0;
                        int l_2479 = 0x9FDF81E1L;
                        int *l_2480 = &g_1512;
                        int *l_2481 = &l_2392;
                        int *l_2482 = &l_2412;
                        int *l_2483 = &l_2434;
                        int *l_2484 = &l_2387;
                        int *l_2485 = (void*)0;
                        int *l_2486 = &l_1702;
                        int *l_2487 = &l_2412;
                        int *l_2488 = &l_2216;
                        int *l_2489 = &l_2463;
                        int l_2490 = 0x761C7775L;
                        int *l_2491 = &g_98;
                        int *l_2492 = (void*)0;
                        int *l_2493 = &l_2121;
                        int *l_2494 = &g_1512;
                        int *l_2495 = &l_2477;
                        int *l_2496 = &l_2113;
                        int *l_2497 = &g_544;
                        int *l_2498 = &l_2437;
                        p_27 = &l_2180;
                        l_2499--;
                        (*l_2483) ^= (((p_25 == g_1323.f2) , func_48((0x4E46L <= (*l_1612)), l_2502, g_2462.f1, p_27)) && g_942.f1);
                        p_27 = (*g_1558);
                    }
                }
                (*l_2503) = &l_2122;
                (*l_1588) = (*g_1493);
            }
        }
        else
        {
            int *l_2504 = &l_2155;
            int *l_2505 = (void*)0;
            int *l_2506 = &l_2392;
            int *l_2507 = (void*)0;
            int *l_2508 = &g_1512;
            int *l_2509 = &l_1505;
            int *l_2510 = &g_4;
            int *l_2511 = &l_2122;
            int *l_2512 = &l_2146;
            int *l_2513 = (void*)0;
            int *l_2514 = &l_2146;
            int *l_2515 = &l_2179;
            int *l_2516 = &l_2312;
            int *l_2517 = &l_1702;
            int *l_2518 = &g_98;
            int *l_2519 = &l_1702;
            int *l_2520 = &l_2434;
            int *l_2521 = &g_38;
            int *l_2522 = &l_2423;
            int *l_2523 = (void*)0;
            int *l_2524 = (void*)0;
            int *l_2525 = &l_2412;
            int *l_2526 = (void*)0;
            int *l_2527 = &l_2180;
            int *l_2528 = (void*)0;
            int *l_2529 = &l_1709;
            int *l_2530 = &l_2155;
            int *l_2531 = &l_2397;
            int *l_2532 = &l_2412;
            int *l_2533 = (void*)0;
            int *l_2534 = &l_2181;
            int l_2535 = 0x896B50DAL;
            int *l_2536 = &l_1702;
            int *l_2537 = &l_2121;
            int *l_2538 = &g_38;
            int *l_2539 = &l_2181;
            int *l_2540 = &l_2397;
            int *l_2541 = (void*)0;
            int *l_2542 = &g_957;
            int *l_2543 = &g_957;
            int *l_2544 = &g_38;
            int *l_2545 = &l_2397;
            int *l_2546 = (void*)0;
            int *l_2547 = &l_2146;
            int *l_2548 = &l_2312;
            unsigned l_2549 = 0UL;
            (*p_27) = (((*l_1612) , l_1591) && g_76.f3);
            --l_2549;
            (*l_2504) = (0xF8L <= ((((((*l_1612) & ((p_24 , g_2227.f2) ^ g_115.f1)) & 7L) ^ p_24) != (*l_1612)) < (*l_1612)));
            (*l_2547) &= (safe_lshift_func_uint16_t_u_u((*l_2517), ((g_2227.f0 | ((func_40(((*l_2534) , (void*)0), (safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u(4294967295UL, (g_76.f0 <= p_25))), (g_942.f0 != ((p_24 <= 65531UL) < (-1L)))))) || g_115.f1) ^ (*p_26))) , g_12)));
        }
    }
    else
    {
        unsigned char l_2567 = 0x90L;
        int *l_2573 = &g_1512;
        int l_2575 = 9L;
        int l_2639 = (-1L);
        int l_2645 = 0xCB9BBB37L;
        int *l_2662 = &g_957;
        int *l_2663 = &l_1505;
        int *l_2664 = &l_1702;
        int *l_2665 = (void*)0;
        int *l_2666 = &l_2155;
        int *l_2667 = &l_1505;
        int *l_2668 = &l_1702;
        int *l_2669 = &l_2575;
        int *l_2670 = &g_4;
        int *l_2671 = &l_2639;
        int *l_2672 = &l_2312;
        int *l_2673 = (void*)0;
        int *l_2674 = &l_1702;
        int *l_2675 = &l_2645;
        int *l_2676 = &l_2639;
        int *l_2677 = &l_1993;
        int *l_2678 = &g_957;
        int *l_2679 = &l_2392;
        int *l_2680 = &l_2312;
        int *l_2681 = &l_1505;
        int *l_2682 = &l_1709;
        int *l_2683 = &g_957;
        int *l_2684 = &g_1512;
        int *l_2685 = &g_544;
        int *l_2686 = &g_38;
        int *l_2687 = &g_38;
        int *l_2688 = &l_2434;
        int *l_2689 = &l_2412;
        int *l_2690 = &g_38;
        int *l_2691 = &g_544;
        int *l_2692 = &g_98;
        int *l_2693 = &l_2392;
        int *l_2694 = &g_1512;
        int *l_2695 = &g_38;
        int *l_2696 = &l_2423;
        int *l_2697 = (void*)0;
        int *l_2698 = &l_2412;
        int l_2699 = (-1L);
        int *l_2700 = (void*)0;
        int *l_2701 = &g_98;
        int *l_2702 = &g_98;
        int *l_2703 = &g_98;
        int *l_2704 = (void*)0;
        int *l_2705 = &l_2312;
        int *l_2706 = &g_544;
        int *l_2707 = &l_2645;
        int *l_2708 = &l_2639;
        int *l_2709 = &l_2412;
        int l_2710 = 0x80763E40L;
        int l_2711 = 0x716B2B56L;
        int *l_2712 = &l_2711;
        int *l_2713 = &l_1709;
        int *l_2714 = &l_2645;
        int *l_2715 = &l_2434;
        int *l_2716 = &l_2645;
        int *l_2717 = &l_2146;
        int *l_2718 = &l_2423;
        int *l_2719 = &l_2699;
        int *l_2720 = &l_2434;
        int *l_2721 = &g_544;
        int l_2722 = 1L;
        int l_2723 = 0xF4BF207DL;
        int *l_2724 = &g_544;
        int *l_2725 = &l_2711;
        int *l_2726 = &l_2392;
        int l_2727 = (-6L);
        int *l_2728 = &g_544;
        int *l_2729 = &g_98;
        int *l_2730 = &l_2155;
        int *l_2731 = &l_1591;
        int *l_2732 = &l_2575;
        int *l_2733 = &l_2575;
        int *l_2735 = &g_957;
        int *l_2736 = (void*)0;
        int *l_2737 = &l_2727;
        int *l_2738 = &l_2434;
        int *l_2739 = &l_2434;
        int *l_2740 = (void*)0;
        int *l_2742 = &l_2155;
        int *l_2743 = &l_1505;
        int *l_2744 = (void*)0;
        int *l_2745 = &l_2155;
        int *l_2746 = &l_2723;
        unsigned l_2747 = 18446744073709551611UL;
        for (l_1709 = (-17); (l_1709 == (-1)); ++l_1709)
        {
            struct S1 ***l_2568 = &l_1499;
            int l_2571 = 0xEEB27EC4L;
            int l_2611 = 0xA56E1133L;
            int l_2619 = (-1L);
            int l_2620 = 0xF2508B60L;
            int l_2630 = (-4L);
            for (g_957 = 22; (g_957 >= 19); g_957 = safe_sub_func_uint16_t_u_u(g_957, 5))
            {
                int *l_2563 = &g_1512;
                int **l_2565 = (void*)0;
                int **l_2566 = &g_71;
                int l_2608 = 0x298174F6L;
                int l_2636 = 0x2527A059L;
                (*l_2566) = l_2563;
                if (((((**g_1493) , g_2552.f0) < ((((l_2567 , l_2568) == &l_1502) >= (-9L)) , (safe_rshift_func_uint8_t_u_u(p_25, p_25)))) & (l_2571 || p_24)))
                {
                    unsigned l_2582 = 0xD8A2948CL;
                    struct S1 ***l_2588 = &l_1502;
                    int l_2591 = 0L;
                    int l_2604 = (-1L);
                    int l_2638 = 3L;
                    int l_2643 = 9L;
                    g_2572 = (**g_1493);
                    if ((*p_27))
                        continue;
                    if (l_2571)
                    {
                        short l_2574 = 0xD8DDL;
                        (*p_26) = func_40(p_27, l_2571);
                        if ((**g_1734))
                            break;
                        l_2574 &= (**g_1674);
                    }
                    else
                    {
                        int *l_2576 = &g_4;
                        int *l_2577 = &l_1591;
                        int *l_2578 = &l_1591;
                        int *l_2579 = &g_544;
                        int *l_2580 = &l_2146;
                        int *l_2581 = &l_1591;
                        int *l_2589 = &l_1993;
                        int *l_2590 = &l_1505;
                        int *l_2592 = &g_38;
                        int *l_2593 = &g_1512;
                        int *l_2594 = &l_2423;
                        int *l_2595 = &l_2423;
                        int *l_2596 = &l_2434;
                        int *l_2597 = (void*)0;
                        int *l_2598 = &l_1505;
                        int *l_2599 = &l_2591;
                        int *l_2600 = &l_1505;
                        int *l_2601 = &l_2412;
                        int *l_2602 = (void*)0;
                        int *l_2603 = (void*)0;
                        int *l_2605 = &l_1505;
                        int *l_2606 = &g_544;
                        int *l_2607 = &l_2146;
                        int *l_2609 = (void*)0;
                        int *l_2610 = &l_2146;
                        int *l_2612 = &g_4;
                        int *l_2613 = &l_2155;
                        int *l_2614 = &l_2392;
                        int *l_2615 = &g_1512;
                        int *l_2616 = &g_38;
                        int *l_2617 = &l_2608;
                        int *l_2618 = &g_98;
                        int *l_2621 = &l_2392;
                        int *l_2622 = &l_2591;
                        int *l_2623 = &g_98;
                        int *l_2624 = &g_1512;
                        int *l_2625 = &l_2611;
                        int *l_2626 = &l_2591;
                        int *l_2627 = &l_2155;
                        int *l_2628 = (void*)0;
                        int *l_2629 = &g_544;
                        int l_2631 = 0xF086201EL;
                        int *l_2632 = &g_38;
                        int *l_2633 = (void*)0;
                        int *l_2634 = &l_2434;
                        int *l_2635 = &l_2611;
                        int *l_2637 = &l_2636;
                        int l_2640 = 0x9FDC69DFL;
                        int *l_2641 = (void*)0;
                        int *l_2642 = &l_2620;
                        int *l_2644 = (void*)0;
                        int *l_2646 = &g_38;
                        int *l_2647 = &l_1505;
                        int *l_2648 = &l_2638;
                        int *l_2649 = &l_1591;
                        int *l_2650 = &l_2608;
                        int *l_2651 = &l_2638;
                        int *l_2652 = (void*)0;
                        int *l_2653 = &g_98;
                        l_2582--;
                        (*l_2579) |= (((~l_2571) & (((((safe_rshift_func_int8_t_s_u(g_2587, 4)) >= g_1564.f3) , p_24) <= l_2582) , ((((p_24 >= 0xD788L) >= ((&l_1502 == l_2588) <= (*p_26))) , g_115.f3) || p_24))) & l_2412);
                        g_2654--;
                    }
                }
                else
                {
                    (*l_2566) = p_27;
                    (*l_2563) |= (((0UL == (&g_1494 == ((1L && ((***l_2568) , (~(g_1564.f1 ^ 0UL)))) , l_2659))) == l_1505) && ((!0x9EE7C48AL) , 0x7AL));
                }
                if (l_2146)
                    continue;
                (*l_2573) &= l_2423;
            }
            (*p_26) &= (safe_rshift_func_int8_t_s_s(g_2462.f3, (*l_2573)));
        }
        (*g_71) ^= (-1L);
        l_2747++;
        for (g_1512 = 0; (g_1512 != 14); g_1512 = safe_add_func_uint8_t_u_u(g_1512, 8))
        {
            return p_27;
        }
    }
    return p_26;
}







static short func_32(char p_33, unsigned char p_34, unsigned char p_35, unsigned char p_36)
{
    int l_47 = (-7L);
    int *l_57 = &g_4;
    int *l_955 = (void*)0;
    int l_986 = 0x74CF1EF8L;
    int l_988 = 0xD66CE1ADL;
    int l_1004 = 0x3CDF8C7CL;
    int l_1022 = 1L;
    int l_1024 = 0xB9DABF54L;
    int l_1062 = 0x3F76A082L;
    int l_1075 = 0x03F91CBBL;
    int l_1087 = 0x4715543DL;
    int l_1104 = 1L;
    int l_1162 = 1L;
    int l_1184 = 0x5589B328L;
    int l_1194 = (-4L);
    int l_1257 = 0x9647A0BBL;
    int l_1266 = 3L;
    int l_1287 = (-1L);
    int l_1298 = 7L;
    unsigned short l_1316 = 0UL;
    (*g_37) = g_4;
    if (((safe_unary_minus_func_int16_t_s(func_40(&g_4, (safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u(0x00L, ((l_47 != func_48((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(p_36, 15)), 10)), l_57, (((safe_add_func_uint16_t_u_u(((*g_37) , func_60((g_66 , g_66.f0), &g_38, &g_38, &g_4, (*l_57))), (*l_57))) || g_77.f2) , p_35), l_57)) >= g_134.f2))), (*l_57)))))) , (*g_37)))
    {
        short l_947 = 0x1F42L;
        int *l_948 = &g_544;
        int *l_956 = &g_957;
        (*l_956) ^= ((func_40(l_57, ((func_48(p_33, l_57, l_947, l_948) , (((((safe_mod_func_int16_t_s_s(((**g_380) , (safe_sub_func_uint16_t_u_u(((l_955 != l_955) || 0UL), p_35))), 0x583CL)) , 0x94L) | g_76.f1) != 0x11L) >= 0UL)) && (*l_948))) >= p_36) > p_33);
    }
    else
    {
        return g_544;
    }
    if ((g_958 , (p_33 <= ((*l_57) <= 247UL))))
    {
        short l_1006 = 0x0CA1L;
        int l_1027 = 3L;
        int l_1035 = 7L;
        int l_1036 = 0x25AF9F93L;
        int l_1037 = (-7L);
        int l_1038 = 0x9422A714L;
        int l_1044 = (-5L);
        int l_1056 = (-1L);
        int l_1079 = 0x708A6C82L;
        int l_1128 = (-2L);
        int l_1130 = 0xCABC87A6L;
        int l_1164 = 0xF1C0C604L;
        int l_1170 = 0xDDB031C6L;
        int l_1237 = (-4L);
        char l_1284 = (-8L);
        int *l_1467 = &g_957;
        for (g_957 = 0; (g_957 == (-30)); g_957 = safe_sub_func_uint16_t_u_u(g_957, 8))
        {
            int *l_961 = &g_98;
            int *l_962 = &g_38;
            int *l_963 = (void*)0;
            int *l_964 = &g_98;
            int *l_965 = &g_98;
            int *l_966 = (void*)0;
            int *l_967 = &g_38;
            int *l_968 = &g_38;
            int *l_969 = &g_98;
            int *l_970 = &g_38;
            int *l_971 = (void*)0;
            int *l_972 = &g_38;
            int *l_973 = &g_38;
            int *l_974 = &g_544;
            int *l_975 = &g_544;
            int *l_976 = (void*)0;
            int *l_977 = &g_544;
            int *l_978 = &g_38;
            int *l_979 = &g_98;
            int *l_980 = &g_38;
            int *l_981 = &g_544;
            int *l_982 = &g_38;
            int *l_983 = &g_98;
            int *l_984 = &g_98;
            int *l_985 = &g_98;
            int *l_987 = &g_544;
            int *l_989 = &g_38;
            int *l_990 = &g_544;
            int *l_991 = &g_544;
            int *l_992 = &l_986;
            int *l_993 = (void*)0;
            int *l_994 = &g_98;
            int *l_995 = &l_988;
            int *l_996 = &l_988;
            int *l_997 = &g_98;
            int *l_998 = &g_98;
            int *l_999 = &l_988;
            int *l_1000 = &l_988;
            int *l_1001 = (void*)0;
            int *l_1002 = &l_986;
            int *l_1003 = &g_544;
            int *l_1005 = &g_38;
            int *l_1007 = (void*)0;
            int *l_1008 = &l_986;
            int l_1009 = 0x38EFC058L;
            int *l_1010 = &l_1009;
            int *l_1011 = &l_1004;
            int *l_1012 = &l_986;
            int *l_1013 = &l_1004;
            int *l_1014 = &g_544;
            int *l_1015 = &g_544;
            int *l_1016 = &l_1004;
            int *l_1017 = &l_988;
            int *l_1018 = &g_38;
            int *l_1019 = &l_1009;
            int *l_1020 = (void*)0;
            int *l_1021 = &l_1004;
            int *l_1023 = &g_544;
            int *l_1025 = (void*)0;
            int l_1026 = 0x4EA35202L;
            int *l_1028 = (void*)0;
            int *l_1029 = &g_544;
            int *l_1030 = &g_38;
            int *l_1031 = (void*)0;
            unsigned char l_1032 = 255UL;
            int *l_1039 = &l_1027;
            int *l_1040 = &l_1036;
            int *l_1041 = &l_1036;
            int *l_1042 = (void*)0;
            int *l_1043 = &l_1024;
            int *l_1045 = (void*)0;
            int *l_1046 = &g_544;
            int *l_1047 = &l_1038;
            int *l_1049 = &l_1027;
            int *l_1050 = &l_1038;
            int *l_1051 = &l_1038;
            int *l_1052 = &l_1024;
            int *l_1053 = &l_1004;
            int *l_1054 = &l_986;
            int *l_1055 = (void*)0;
            int *l_1057 = &l_1056;
            int *l_1058 = &l_986;
            int *l_1059 = &l_1056;
            int *l_1060 = &l_1035;
            int *l_1061 = &l_986;
            int *l_1063 = (void*)0;
            int *l_1064 = &l_1062;
            int *l_1065 = &l_1044;
            int *l_1066 = &g_38;
            int *l_1067 = &l_1038;
            int *l_1068 = &l_1037;
            int *l_1069 = &l_1027;
            int *l_1070 = &l_1035;
            int *l_1071 = &l_1062;
            int *l_1072 = &l_1024;
            int *l_1073 = (void*)0;
            int *l_1074 = &l_1035;
            int *l_1076 = &g_98;
            int *l_1077 = &l_1026;
            int *l_1078 = (void*)0;
            int *l_1080 = &l_986;
            int *l_1081 = &l_1009;
            int *l_1082 = &l_1009;
            int *l_1083 = (void*)0;
            int *l_1084 = &l_1037;
            int *l_1085 = (void*)0;
            int *l_1086 = &l_1056;
            int *l_1088 = &l_1024;
            int *l_1089 = (void*)0;
            int *l_1090 = &g_38;
            int *l_1091 = &l_1079;
            int *l_1092 = (void*)0;
            int *l_1093 = &l_1079;
            int *l_1094 = &l_1026;
            int *l_1095 = &l_1026;
            int *l_1096 = &l_1004;
            int *l_1097 = (void*)0;
            int *l_1098 = &l_1027;
            int *l_1099 = &l_988;
            int *l_1100 = &l_986;
            int *l_1101 = &l_1079;
            int *l_1102 = &l_1037;
            int *l_1103 = &l_1036;
            int *l_1105 = &l_1104;
            int *l_1106 = &l_1026;
            int *l_1107 = &l_1056;
            int *l_1108 = &l_1024;
            int *l_1109 = &l_1036;
            int *l_1110 = (void*)0;
            int *l_1111 = &l_1004;
            int *l_1112 = (void*)0;
            int *l_1113 = &l_1075;
            int *l_1114 = (void*)0;
            int *l_1115 = &l_1036;
            int *l_1116 = &g_544;
            int *l_1117 = &g_38;
            int *l_1118 = (void*)0;
            int *l_1119 = &l_1035;
            int *l_1120 = &l_1056;
            int *l_1121 = &l_1024;
            int *l_1122 = &l_1062;
            int *l_1123 = &l_1009;
            int *l_1124 = &l_1044;
            int *l_1125 = &g_544;
            int *l_1126 = &l_1004;
            int *l_1127 = &l_1087;
            int *l_1129 = &l_1037;
            int *l_1131 = (void*)0;
            int *l_1132 = &l_988;
            int *l_1133 = &l_1104;
            int *l_1134 = &l_1036;
            int *l_1135 = &l_1075;
            int *l_1136 = &l_1035;
            int *l_1137 = &l_986;
            int *l_1138 = &l_1009;
            int *l_1139 = &g_38;
            int *l_1140 = &l_1026;
            int *l_1141 = &l_1044;
            int *l_1142 = &l_1087;
            int *l_1143 = &g_544;
            int *l_1144 = (void*)0;
            int *l_1145 = &l_1079;
            int *l_1146 = &l_1128;
            int *l_1147 = (void*)0;
            int *l_1148 = &l_1087;
            int *l_1149 = &l_1087;
            int *l_1150 = &l_1104;
            int *l_1151 = &l_1004;
            int *l_1152 = (void*)0;
            int *l_1153 = &l_1004;
            int *l_1154 = &l_1044;
            int *l_1155 = &l_1128;
            int *l_1156 = &l_1004;
            int *l_1157 = (void*)0;
            int *l_1158 = &g_544;
            int *l_1159 = &l_1044;
            int *l_1160 = (void*)0;
            int *l_1161 = &l_1128;
            int *l_1163 = &l_1079;
            int l_1165 = 4L;
            int *l_1166 = &l_1038;
            int *l_1167 = &g_98;
            int *l_1168 = &l_1044;
            int *l_1169 = (void*)0;
            int *l_1171 = (void*)0;
            int *l_1172 = &g_38;
            int *l_1173 = &l_1024;
            int *l_1174 = &g_544;
            int *l_1175 = (void*)0;
            int *l_1176 = (void*)0;
            int l_1177 = 0x731F3508L;
            int *l_1178 = &l_988;
            int *l_1179 = (void*)0;
            int *l_1180 = (void*)0;
            int *l_1181 = &l_1164;
            int *l_1182 = (void*)0;
            int *l_1183 = &l_1165;
            int *l_1185 = &l_1079;
            int *l_1186 = &l_1035;
            int *l_1187 = &l_1037;
            int *l_1188 = &l_1024;
            int *l_1189 = (void*)0;
            int *l_1190 = &g_544;
            int *l_1191 = &l_1044;
            int *l_1192 = &l_986;
            int *l_1193 = &l_1087;
            int *l_1195 = &l_1087;
            int *l_1196 = &l_1184;
            int *l_1197 = &l_988;
            int *l_1198 = &l_1004;
            int *l_1199 = &l_986;
            int *l_1200 = (void*)0;
            int *l_1201 = &l_1009;
            int *l_1202 = (void*)0;
            int l_1203 = 0xDEE72EE1L;
            int *l_1204 = &l_1062;
            int *l_1205 = &g_98;
            int *l_1206 = &l_1027;
            int *l_1207 = &l_1035;
            int *l_1208 = (void*)0;
            int *l_1209 = &l_1170;
            int *l_1210 = (void*)0;
            int *l_1211 = &l_1079;
            int *l_1212 = &g_544;
            int *l_1213 = &l_1026;
            int *l_1214 = (void*)0;
            int *l_1215 = &l_1038;
            int *l_1216 = (void*)0;
            int *l_1217 = &g_38;
            int *l_1218 = &l_1027;
            int *l_1219 = &l_1027;
            int *l_1220 = &l_988;
            int *l_1221 = &l_1087;
            int *l_1222 = &l_1075;
            int *l_1223 = (void*)0;
            int *l_1224 = &l_1075;
            int *l_1225 = &l_1087;
            int *l_1226 = &l_1027;
            int *l_1227 = &l_1044;
            int *l_1228 = &g_98;
            int *l_1229 = &g_544;
            int *l_1230 = &l_988;
            int *l_1231 = &l_1044;
            int *l_1232 = (void*)0;
            int *l_1233 = &l_1203;
            int *l_1234 = (void*)0;
            int *l_1235 = &l_1009;
            int *l_1236 = &l_1203;
            int *l_1238 = &l_1009;
            int *l_1239 = &l_988;
            int *l_1240 = &l_1128;
            int *l_1241 = &g_38;
            int l_1242 = 0x6BED1C8EL;
            int *l_1243 = (void*)0;
            int *l_1244 = &l_1004;
            int *l_1245 = (void*)0;
            int *l_1246 = &l_1170;
            int *l_1247 = (void*)0;
            int *l_1248 = &l_988;
            int *l_1249 = &l_1087;
            int *l_1250 = &l_986;
            int *l_1251 = &l_1165;
            int *l_1252 = &l_1079;
            int *l_1253 = &g_38;
            int *l_1254 = (void*)0;
            int *l_1255 = &l_1038;
            int *l_1256 = &l_1203;
            int *l_1258 = (void*)0;
            int *l_1259 = &l_1237;
            int *l_1260 = &l_1044;
            int *l_1261 = &l_1104;
            int *l_1262 = &l_1024;
            int *l_1263 = &l_1087;
            int *l_1264 = &l_1075;
            int *l_1265 = &l_1035;
            int *l_1267 = &l_1036;
            int *l_1268 = &l_988;
            int *l_1269 = &l_1004;
            int l_1270 = 0x659447CEL;
            int l_1271 = 0x2EB173DFL;
            int *l_1272 = (void*)0;
            int *l_1273 = &l_988;
            int *l_1274 = (void*)0;
            int *l_1275 = (void*)0;
            int *l_1276 = (void*)0;
            int l_1277 = 0L;
            int *l_1278 = &l_1194;
            int *l_1279 = (void*)0;
            int *l_1280 = (void*)0;
            int *l_1281 = &l_1026;
            int *l_1282 = &l_1170;
            int *l_1283 = &l_1242;
            int *l_1285 = &g_544;
            int *l_1286 = &g_98;
            int *l_1288 = (void*)0;
            int *l_1289 = &l_1266;
            int *l_1290 = &l_1079;
            int *l_1291 = &l_1237;
            int *l_1292 = &l_1004;
            int *l_1293 = (void*)0;
            int *l_1294 = &l_1036;
            int *l_1295 = &l_1056;
            int l_1296 = 4L;
            int *l_1297 = &l_1104;
            int *l_1299 = &l_1184;
            int *l_1300 = &l_1165;
            int *l_1301 = &l_1087;
            int *l_1302 = (void*)0;
            int *l_1303 = &l_1038;
            int *l_1304 = &l_1035;
            int *l_1305 = &g_38;
            int *l_1306 = &g_38;
            int *l_1307 = &l_1298;
            int *l_1308 = &l_1296;
            int *l_1309 = &l_1277;
            int *l_1310 = &l_1075;
            int *l_1311 = (void*)0;
            int *l_1312 = &l_1287;
            int *l_1313 = &l_1087;
            int *l_1314 = &l_1170;
            int *l_1315 = (void*)0;
            l_1032--;
            l_1316--;
        }
        for (l_1266 = 13; (l_1266 == (-12)); l_1266 = safe_sub_func_uint16_t_u_u(l_1266, 1))
        {
            struct S1 **l_1324 = (void*)0;
            int l_1325 = (-1L);
            int l_1362 = 0x47DFB6F5L;
            int l_1364 = 0xA6698707L;
            int l_1379 = 0x21FB47DEL;
            int l_1391 = (-10L);
            int l_1395 = (-1L);
            int l_1431 = 0x51AAE2FDL;
            int l_1443 = 0L;
            int l_1453 = (-6L);
            for (l_1130 = (-11); (l_1130 > (-19)); l_1130--)
            {
                l_1325 = ((g_1323 , l_1324) != (l_1325 , l_1324));
                l_1325 |= (-7L);
            }
            for (g_544 = 0; (g_544 > 0); g_544++)
            {
                unsigned short l_1330 = 0xBF5AL;
                int *l_1332 = &l_1035;
                int *l_1339 = &l_1087;
                int l_1340 = 0x717424B9L;
                int *l_1341 = (void*)0;
                int *l_1342 = (void*)0;
                int *l_1343 = (void*)0;
                int *l_1344 = &l_1170;
                int *l_1345 = &l_1087;
                int l_1346 = 1L;
                int *l_1347 = &l_1027;
                int *l_1348 = &l_1298;
                int *l_1349 = &l_1062;
                int *l_1350 = (void*)0;
                int *l_1351 = &l_1162;
                int *l_1352 = &l_1044;
                int *l_1353 = (void*)0;
                int *l_1354 = &l_1062;
                int *l_1355 = (void*)0;
                int *l_1356 = (void*)0;
                int l_1357 = (-7L);
                int *l_1358 = (void*)0;
                int *l_1359 = &l_1075;
                int *l_1360 = (void*)0;
                int *l_1361 = &g_957;
                int *l_1363 = (void*)0;
                int *l_1365 = &l_1004;
                int *l_1366 = &l_1036;
                int *l_1367 = &l_1036;
                int *l_1368 = &l_1036;
                int *l_1369 = &l_1257;
                int *l_1370 = (void*)0;
                int *l_1371 = &l_1325;
                int *l_1372 = (void*)0;
                int *l_1373 = &l_1257;
                int *l_1374 = &l_1298;
                int *l_1375 = &l_1104;
                int *l_1376 = &l_1237;
                int *l_1377 = (void*)0;
                int *l_1378 = &g_98;
                int *l_1380 = &l_986;
                int *l_1381 = (void*)0;
                int *l_1382 = &l_1364;
                int *l_1383 = &l_1024;
                int *l_1384 = &l_1364;
                int *l_1385 = &l_1024;
                int *l_1386 = &l_1364;
                int *l_1387 = &l_1346;
                int *l_1388 = &g_98;
                int *l_1389 = &g_98;
                int *l_1390 = &l_1056;
                int *l_1392 = &l_1170;
                int *l_1393 = &l_1194;
                int *l_1394 = &l_1027;
                int *l_1396 = &l_1075;
                int *l_1397 = &l_1079;
                int *l_1398 = &l_986;
                int *l_1399 = &l_988;
                int *l_1400 = &l_1087;
                int *l_1401 = (void*)0;
                int *l_1402 = &l_1325;
                int *l_1403 = (void*)0;
                int *l_1404 = &l_1037;
                int *l_1405 = &l_1128;
                int *l_1406 = &l_1062;
                int *l_1407 = &l_1184;
                int *l_1408 = &l_1036;
                int *l_1409 = &l_1162;
                int *l_1410 = &l_1395;
                int l_1411 = 0x43649243L;
                int *l_1412 = &l_1325;
                int *l_1413 = &l_1325;
                int *l_1414 = (void*)0;
                int *l_1415 = &l_1194;
                int *l_1416 = &l_1056;
                int *l_1417 = &l_1037;
                int *l_1418 = &g_38;
                int *l_1419 = &l_1395;
                int *l_1420 = &l_986;
                int *l_1421 = &l_1298;
                int *l_1422 = &l_1104;
                int *l_1423 = &l_1362;
                int *l_1424 = &l_1087;
                int *l_1425 = (void*)0;
                int *l_1426 = &l_988;
                int *l_1427 = (void*)0;
                int *l_1428 = &l_1362;
                int l_1429 = 0x938E363BL;
                int *l_1430 = &l_1164;
                int *l_1432 = &l_1391;
                int *l_1433 = &l_1104;
                int *l_1434 = (void*)0;
                int *l_1435 = &l_1170;
                int *l_1436 = (void*)0;
                int *l_1437 = (void*)0;
                int *l_1438 = &l_1184;
                int *l_1439 = &l_1184;
                int *l_1440 = &l_986;
                int *l_1441 = &l_988;
                int *l_1442 = &l_1079;
                int *l_1444 = (void*)0;
                int *l_1445 = &l_1443;
                int *l_1446 = &g_38;
                int *l_1447 = &l_1170;
                int *l_1448 = &l_1024;
                int *l_1449 = &l_1411;
                int *l_1450 = &l_1164;
                int *l_1451 = &l_1391;
                int *l_1452 = &g_38;
                int *l_1454 = &l_1037;
                int *l_1455 = &l_986;
                int *l_1456 = &l_1164;
                int *l_1457 = &l_1027;
                unsigned l_1458 = 0xBC045CB3L;
                struct S1 * volatile *l_1462 = &g_170;
                struct S1 * volatile **l_1461 = &l_1462;
                l_1325 = ((((safe_mod_func_uint16_t_u_u(l_1330, (safe_unary_minus_func_uint32_t_u(((func_48(g_958.f1, l_1332, (safe_mod_func_uint8_t_u_u((*l_1332), (((g_134.f2 > ((*l_1332) , ((safe_rshift_func_int16_t_s_s(p_34, 14)) <= (*g_71)))) && g_957) & (*l_57)))), &g_4) == (*l_1332)) ^ p_34))))) , g_1323.f3) <= 0x8A7BL) == g_115.f2);
                l_1458++;
                (*l_1461) = &g_169;
            }
            (*g_37) = 0L;
        }
        for (p_36 = 0; (p_36 < 35); ++p_36)
        {
            if ((*l_57))
                break;
            for (p_33 = 0; (p_33 >= (-6)); p_33--)
            {
                short l_1468 = 6L;
                int *l_1469 = (void*)0;
                struct S0 *l_1471 = &g_115;
                l_1467 = (void*)0;
                (*g_1470) = l_1468;
                (*l_1471) = g_134;
            }
            return g_66.f1;
        }
        for (l_1316 = 0; (l_1316 == 43); ++l_1316)
        {
            int *l_1476 = (void*)0;
            struct S0 *l_1491 = &g_115;
            (*g_1470) = ((safe_mod_func_uint8_t_u_u(p_36, func_40(l_1476, ((*g_1470) , p_35)))) && (p_33 == (safe_add_func_uint8_t_u_u(p_33, func_40(&l_1170, ((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((g_134 , g_12), 0)) || g_958.f3), 0x467FL)), p_35)), g_942.f2)) > 8UL))))));
            (*l_1467) = (((+0x574BAD48L) , (((safe_rshift_func_int16_t_s_u((0UL & (((func_48(p_33, &l_1298, (g_77.f0 != g_76.f1), (((&g_71 == &l_1467) & ((safe_sub_func_int8_t_s_s(((1UL < g_76.f2) < 0x6EF9D026L), g_12)) , 65527UL)) , &l_1062)) & g_115.f0) <= 3L) , p_33)), g_372)) >= g_4) , p_35)) , p_36);
            (*l_1467) = (*g_1470);
            (*g_1493) = l_1491;
        }
    }
    else
    {
        return g_77.f3;
    }
    return g_134.f3;
}







static short func_40(int * p_41, int p_42)
{
    int *l_946 = &g_544;
    (*l_946) &= (safe_rshift_func_uint8_t_u_u(6UL, 0));
    return p_42;
}







static char func_48(char p_49, int * p_50, short p_51, int * p_52)
{
    unsigned char l_572 = 0xADL;
    int *l_573 = &g_4;
    int l_574 = 0x6BAB0A81L;
    int l_588 = 0L;
    int l_598 = 0x21C417D1L;
    int l_654 = 5L;
    int l_669 = 0x71A0695FL;
    int l_675 = 9L;
    int l_691 = (-2L);
    int l_702 = 0xC3CFB5C6L;
    int l_759 = 0x1A4F6752L;
    int l_782 = 0L;
    int l_784 = 0x1C30420EL;
    int l_798 = (-1L);
    int l_816 = 0xA2C39B48L;
    int l_867 = 0x4146A149L;
    int l_871 = 0x8A5E68DEL;
    int l_872 = 0xA53FC13CL;
    int l_873 = 5L;
    struct S1 **l_937 = &g_381;
    int *l_938 = &l_574;
    unsigned short l_941 = 0UL;
    char l_943 = 0x1BL;
    l_574 ^= ((p_51 && (((safe_mod_func_uint16_t_u_u(l_572, g_77.f0)) || ((*l_573) | (*l_573))) || 0x7A048C9AL)) == 0xB45EL);
    for (g_66.f2 = 26; (g_66.f2 == 13); g_66.f2 = safe_sub_func_int32_t_s_s(g_66.f2, 5))
    {
        int *l_577 = &g_98;
        struct S1 *l_580 = &g_66;
        int *l_585 = &g_4;
        int l_592 = 1L;
        int l_616 = 0x16D7C74EL;
        int l_663 = 3L;
        int l_670 = 0xEBF98C91L;
        int l_715 = 0x1FA88EC0L;
        short l_725 = (-1L);
        int l_730 = 0L;
        int l_731 = 1L;
        int l_756 = 0L;
        int l_757 = (-2L);
        int l_762 = 0x70819A11L;
        int l_773 = 0L;
        int l_792 = 0xEC626977L;
        int l_804 = 0x13186D76L;
        int l_806 = (-7L);
        int l_836 = (-2L);
        int l_837 = 0xFED9247DL;
        int l_849 = 1L;
        int l_888 = (-7L);
        int l_902 = (-5L);
        int l_904 = (-6L);
        (*l_577) |= (*p_52);
        for (l_572 = 29; (l_572 != 26); --l_572)
        {
            (*l_577) |= ((void*)0 == l_580);
        }
        if ((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(0x0136L, 0)), ((*l_573) <= l_588))))
        {
            int *l_589 = (void*)0;
            int *l_590 = &l_588;
            int *l_591 = (void*)0;
            int *l_593 = &g_38;
            int *l_594 = &g_98;
            int *l_595 = &g_544;
            int *l_596 = &g_38;
            int *l_597 = &g_98;
            int *l_599 = &l_574;
            int *l_600 = &l_574;
            int *l_601 = (void*)0;
            int *l_602 = &l_592;
            int l_603 = 0x426D5CE3L;
            int *l_604 = &g_38;
            int *l_605 = (void*)0;
            int *l_606 = &l_603;
            int *l_607 = &g_98;
            int *l_608 = &l_603;
            int *l_609 = (void*)0;
            int *l_610 = (void*)0;
            int *l_611 = &l_592;
            int *l_612 = &g_98;
            int *l_613 = &l_592;
            int *l_614 = &l_574;
            int *l_615 = (void*)0;
            int *l_617 = (void*)0;
            int *l_618 = &l_574;
            int *l_619 = (void*)0;
            int *l_620 = &l_603;
            int *l_621 = (void*)0;
            int *l_622 = (void*)0;
            int *l_623 = &l_588;
            int *l_624 = &l_592;
            int l_625 = 1L;
            int *l_626 = &l_603;
            int *l_627 = &g_544;
            int *l_628 = &l_592;
            int *l_629 = &g_98;
            int *l_630 = &l_592;
            int *l_631 = (void*)0;
            int l_632 = 0x4531A606L;
            int *l_633 = &l_592;
            int *l_634 = &l_574;
            int *l_635 = &l_588;
            int *l_636 = (void*)0;
            int *l_637 = &l_603;
            int *l_638 = &l_588;
            int *l_639 = &l_616;
            int *l_640 = &l_592;
            int *l_641 = (void*)0;
            int *l_642 = &l_616;
            int *l_643 = &l_588;
            int *l_644 = &l_603;
            int *l_645 = (void*)0;
            int *l_646 = &g_38;
            int *l_647 = &g_38;
            int *l_648 = &l_632;
            int *l_649 = &g_544;
            int l_650 = 0xBDCE6ECEL;
            int *l_651 = &g_38;
            int *l_652 = &l_650;
            int *l_653 = (void*)0;
            int *l_655 = &l_625;
            int *l_656 = &l_574;
            int *l_657 = &l_632;
            int *l_658 = &l_574;
            int *l_659 = &l_603;
            int *l_660 = &l_603;
            int *l_661 = &l_650;
            int *l_662 = &g_544;
            int *l_664 = (void*)0;
            int *l_665 = &l_663;
            int *l_666 = &l_616;
            int *l_667 = &l_603;
            int *l_668 = &l_603;
            int *l_671 = &l_632;
            int *l_672 = &l_669;
            int *l_673 = &g_98;
            int *l_674 = &l_669;
            int *l_676 = &g_544;
            int *l_677 = &g_38;
            int *l_678 = &l_603;
            int *l_679 = &l_632;
            int *l_680 = (void*)0;
            int *l_681 = &l_670;
            int *l_682 = &g_38;
            int *l_683 = (void*)0;
            int *l_684 = (void*)0;
            int *l_685 = (void*)0;
            int *l_686 = (void*)0;
            int *l_687 = &l_654;
            int *l_688 = &l_603;
            int *l_689 = &l_632;
            int *l_690 = (void*)0;
            int *l_692 = &l_588;
            int *l_693 = &l_625;
            int *l_694 = &l_588;
            int *l_695 = (void*)0;
            int *l_696 = &l_669;
            int *l_697 = &l_574;
            int *l_698 = &l_670;
            int *l_699 = &l_603;
            int *l_700 = (void*)0;
            int *l_701 = &l_574;
            int *l_703 = &l_632;
            int *l_704 = (void*)0;
            int l_705 = 0xDD66434FL;
            int *l_706 = &l_675;
            int *l_707 = &l_592;
            int *l_708 = &g_98;
            int *l_709 = (void*)0;
            int *l_710 = &g_38;
            int *l_711 = &l_632;
            int *l_712 = &l_675;
            int *l_713 = &l_675;
            int *l_714 = &l_603;
            int *l_716 = &l_669;
            int *l_717 = &l_650;
            int *l_718 = (void*)0;
            int *l_719 = (void*)0;
            int *l_720 = &l_625;
            int *l_721 = &l_663;
            int *l_722 = &l_588;
            int *l_723 = &l_588;
            int *l_724 = &l_691;
            int *l_726 = &l_625;
            int *l_727 = &l_616;
            int *l_728 = (void*)0;
            int *l_729 = &l_588;
            int *l_732 = (void*)0;
            int *l_733 = (void*)0;
            int *l_734 = &l_616;
            int *l_735 = &l_592;
            int *l_736 = &l_731;
            int *l_737 = &l_705;
            int *l_738 = &l_675;
            int *l_739 = &l_632;
            int *l_740 = &l_669;
            int *l_741 = &l_574;
            int *l_742 = &l_625;
            int *l_743 = &l_715;
            int *l_744 = &l_632;
            int *l_745 = (void*)0;
            int *l_746 = (void*)0;
            int *l_747 = &l_669;
            int *l_748 = &l_730;
            int *l_749 = &l_670;
            int *l_750 = &l_616;
            int *l_751 = &l_731;
            int *l_752 = &l_625;
            int *l_753 = &l_663;
            int *l_754 = &g_38;
            int *l_755 = &l_603;
            int *l_758 = &l_616;
            int *l_760 = (void*)0;
            int *l_761 = &l_715;
            int *l_763 = &l_616;
            int *l_764 = &g_98;
            int *l_765 = &l_756;
            int *l_766 = (void*)0;
            int *l_767 = &l_616;
            int *l_768 = &l_715;
            int *l_769 = &l_757;
            int *l_770 = &l_588;
            int *l_771 = (void*)0;
            int *l_772 = &l_705;
            int *l_774 = &l_650;
            int *l_775 = &l_588;
            int *l_776 = &g_38;
            int *l_777 = &l_715;
            int l_778 = 4L;
            int *l_779 = &l_757;
            int *l_780 = &l_757;
            int l_781 = 0xDB6316A7L;
            int *l_783 = &g_544;
            int *l_785 = (void*)0;
            char l_786 = 0xF8L;
            int *l_787 = &l_715;
            int *l_788 = &l_762;
            int *l_789 = (void*)0;
            int *l_790 = &l_691;
            int *l_791 = &l_654;
            int *l_793 = &l_603;
            int *l_794 = &l_784;
            int *l_795 = &l_756;
            int *l_796 = &l_654;
            int *l_797 = &l_574;
            int *l_799 = &l_592;
            int *l_800 = &l_731;
            int *l_801 = &l_798;
            int *l_802 = (void*)0;
            int *l_803 = (void*)0;
            int *l_805 = &l_730;
            int *l_807 = &l_616;
            int *l_808 = &l_702;
            int *l_809 = &l_731;
            int *l_810 = &l_650;
            int *l_811 = (void*)0;
            int *l_812 = &l_632;
            int *l_813 = (void*)0;
            int *l_814 = &l_782;
            int *l_815 = (void*)0;
            int *l_817 = &g_98;
            int *l_818 = &l_625;
            int *l_819 = &l_757;
            char l_820 = 1L;
            int *l_821 = &l_792;
            int *l_822 = &l_784;
            int *l_823 = &l_702;
            int *l_824 = &l_798;
            int *l_825 = (void*)0;
            int *l_826 = &l_675;
            int *l_827 = &l_669;
            int *l_828 = (void*)0;
            int *l_829 = &g_38;
            int *l_830 = (void*)0;
            int *l_831 = &l_705;
            int *l_832 = (void*)0;
            int *l_833 = &g_38;
            int *l_834 = &l_773;
            int *l_835 = &l_670;
            int *l_838 = (void*)0;
            int *l_839 = &l_757;
            int *l_840 = &l_782;
            int *l_841 = &l_675;
            int *l_842 = &g_38;
            int *l_843 = &l_603;
            int l_844 = 0xBC400501L;
            int *l_845 = (void*)0;
            int *l_846 = &g_38;
            int *l_847 = &g_98;
            int *l_848 = &l_759;
            int *l_850 = &l_837;
            int *l_851 = &l_784;
            int *l_852 = &l_574;
            int *l_853 = &l_675;
            int *l_854 = &l_849;
            int *l_855 = &l_759;
            int *l_856 = (void*)0;
            int *l_857 = &l_616;
            int *l_858 = &l_773;
            int l_859 = 0xA893C579L;
            int l_860 = (-8L);
            int *l_861 = &l_784;
            int *l_862 = &l_715;
            int *l_863 = &l_756;
            int *l_864 = &g_38;
            int l_865 = (-1L);
            int *l_866 = &l_731;
            int *l_868 = &l_860;
            int *l_869 = &l_603;
            int *l_870 = &l_670;
            int *l_874 = &l_806;
            int *l_875 = &l_816;
            int *l_876 = &g_38;
            int *l_877 = &g_38;
            int *l_878 = &l_784;
            int *l_879 = &l_705;
            int *l_880 = &l_867;
            int *l_881 = (void*)0;
            int *l_882 = &l_654;
            int *l_883 = &l_588;
            int *l_884 = &l_603;
            int *l_885 = &l_574;
            int *l_886 = &l_837;
            int *l_887 = &l_867;
            int *l_889 = &l_603;
            int *l_890 = (void*)0;
            int *l_891 = (void*)0;
            int *l_892 = (void*)0;
            short l_893 = 1L;
            int *l_894 = &l_603;
            int *l_895 = &l_715;
            int l_896 = 1L;
            int *l_897 = &g_544;
            int *l_898 = (void*)0;
            int *l_899 = &l_574;
            int *l_900 = &l_670;
            int *l_901 = &l_675;
            int *l_903 = &l_873;
            int *l_905 = &l_837;
            int *l_906 = &l_616;
            int *l_908 = &l_806;
            int *l_909 = &l_872;
            int *l_910 = &l_625;
            int *l_911 = &l_632;
            int *l_912 = &l_663;
            int *l_913 = &l_849;
            int *l_914 = &l_873;
            int *l_915 = &l_896;
            int *l_916 = &l_675;
            int *l_917 = &l_888;
            int *l_918 = &l_837;
            int *l_919 = &l_860;
            int *l_920 = &l_792;
            int *l_921 = &g_38;
            int *l_922 = &l_806;
            int *l_923 = (void*)0;
            int *l_924 = &l_902;
            int *l_925 = &l_773;
            int *l_926 = &l_670;
            int *l_927 = &l_705;
            int *l_928 = (void*)0;
            int *l_929 = &l_872;
            int *l_930 = (void*)0;
            int *l_931 = &l_663;
            int *l_932 = (void*)0;
            int *l_933 = &l_865;
            g_934--;
        }
        else
        {
            return g_76.f2;
        }
    }
    (*g_37) = ((l_937 == ((((l_943 >= g_942.f2) > (*l_938)) < g_115.f1) , &g_381)) | p_51);
    return g_98;
}







static unsigned short func_60(unsigned p_61, int * p_62, int * p_63, int * p_64, int p_65)
{
    int *l_68 = &g_38;
    int **l_67 = &l_68;
    char l_83 = 9L;
    int l_151 = 0xAE7D9AD9L;
    int l_152 = 1L;
    int l_162 = 0x77F729EEL;
    unsigned char l_166 = 0xC5L;
    int l_290 = (-3L);
    int l_302 = 5L;
    int l_315 = (-1L);
    int l_330 = 0x9DA6E5C4L;
    int l_331 = 0L;
    struct S1 *l_379 = &g_66;
    int l_563 = 0x3E30AF52L;
    unsigned char l_567 = 255UL;
    if ((*g_37))
    {
        unsigned l_78 = 0xD2E653D3L;
        (*g_69) = l_67;
        (*l_68) = (safe_mod_func_uint16_t_u_u((((safe_add_func_uint32_t_u_u((((g_76 , (((*l_68) && 0xC8F381C4L) , (g_77 , (&p_65 == (**g_69))))) < g_38) != (l_78 != g_4)), (*p_64))) , (*p_63)) > 0xB59559C2L), g_4));
        (*l_68) = ((g_4 , (&p_65 != (*l_67))) != (safe_mod_func_int8_t_s_s(p_65, (((0xB3F0L >= ((p_61 ^ ((l_78 , (void*)0) == (g_66 , &l_68))) , l_83)) > g_84) | p_61))));
    }
    else
    {
        int l_91 = (-1L);
        short l_96 = 0L;
        int *l_97 = &g_98;
        (*l_97) |= (safe_rshift_func_int16_t_s_s((p_61 , (((safe_mod_func_int16_t_s_s(p_65, ((safe_add_func_int32_t_s_s((p_65 < l_91), (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((&l_68 == (void*)0) , g_76.f0), ((!0x634890B8L) && l_96))), 5)))) , g_66.f0))) , (**l_67)) <= 0xF4L)), 13));
    }
    (*l_68) |= (p_61 , (safe_sub_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((g_77.f0 & (p_65 , g_76.f2)), g_66.f2)) & ((void*)0 != (*g_70))), g_4)));
    (**l_67) = (safe_mod_func_int32_t_s_s((0x8D46L & (safe_add_func_int8_t_s_s(((&l_67 != (void*)0) ^ ((safe_rshift_func_uint8_t_u_s(0x2CL, 6)) , (safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((((g_115 , ((safe_add_func_uint16_t_u_u(((p_65 || ((2L || 4L) | ((**g_69) != (void*)0))) >= g_115.f1), p_61)) > 1UL)) & 0x94CDL) > p_65), (*l_68))), g_115.f1)), 2)))), p_65))), (**l_67)));
    if (((*l_68) && (p_65 || (((safe_rshift_func_int16_t_s_s(7L, 2)) || (safe_unary_minus_func_int32_t_s((safe_add_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((((safe_sub_func_int32_t_s_s((***g_69), ((void*)0 == (*g_70)))) & 0x68063CD6L) < ((*l_68) , ((safe_sub_func_uint8_t_u_u(g_66.f2, 0x87L)) , 0x16B64C99L))), 9)) | (**g_70)), 0xA53AL)) < p_65), g_38))))) & g_98))))
    {
        int l_156 = 0x4ABD77EDL;
        for (g_12 = (-9); (g_12 >= 5); g_12 = safe_add_func_uint8_t_u_u(g_12, 7))
        {
            int *l_137 = (void*)0;
            int *l_138 = &g_98;
            int *l_139 = &g_38;
            int *l_140 = (void*)0;
            int *l_141 = &g_98;
            int *l_142 = (void*)0;
            int *l_143 = (void*)0;
            int l_144 = 0xD0CF2277L;
            int *l_145 = &g_98;
            int *l_146 = &g_98;
            int *l_147 = &l_144;
            int *l_148 = &g_98;
            int l_149 = (-10L);
            int *l_150 = (void*)0;
            int *l_153 = &l_149;
            int *l_154 = (void*)0;
            int *l_155 = &g_98;
            int *l_157 = (void*)0;
            int *l_158 = &l_156;
            int *l_159 = &l_152;
            int *l_160 = &l_152;
            int *l_161 = &l_149;
            int *l_163 = &l_151;
            int *l_164 = (void*)0;
            int *l_165 = &l_149;
            struct S1 *l_171 = &g_66;
        }
        for (p_61 = 29; (p_61 <= 49); p_61 = safe_add_func_uint8_t_u_u(p_61, 2))
        {
            return p_65;
        }
    }
    else
    {
        short l_176 = (-1L);
        int l_234 = 0xB705B545L;
        int l_253 = (-1L);
        int l_268 = 0x017B851EL;
        int l_275 = 0x4BC7CA1AL;
        int l_279 = 0xFD258EC0L;
        int l_287 = 0x22EBED49L;
        int l_301 = 0x95C713BCL;
        int l_319 = (-1L);
        struct S1 *l_382 = &g_66;
        unsigned short l_564 = 3UL;
        (**g_69) = (*g_70);
        if ((safe_mod_func_uint16_t_u_u(((l_176 , 0L) , (**l_67)), g_12)))
        {
            (*g_177) = (*g_69);
            (*l_67) = (**g_69);
        }
        else
        {
            int *l_178 = &l_151;
            int *l_179 = &l_162;
            int *l_180 = &l_152;
            int *l_181 = &l_162;
            int *l_182 = &l_151;
            int *l_183 = &g_38;
            int *l_184 = &l_151;
            int *l_185 = (void*)0;
            int *l_186 = &l_152;
            int *l_187 = &l_151;
            int *l_188 = &g_38;
            int *l_189 = &g_98;
            int *l_190 = &l_151;
            int *l_191 = &g_98;
            int *l_192 = &l_151;
            int *l_193 = &l_152;
            int *l_194 = &l_151;
            int *l_195 = &g_38;
            int *l_196 = &l_151;
            int *l_197 = &l_162;
            int *l_198 = &g_38;
            int *l_199 = &g_38;
            int *l_200 = &l_152;
            int *l_201 = &l_152;
            int *l_202 = (void*)0;
            int l_203 = 1L;
            int l_204 = 0x42FE60FCL;
            int *l_205 = &l_203;
            int *l_206 = &l_151;
            int *l_207 = (void*)0;
            int *l_208 = &l_152;
            int *l_209 = &l_151;
            int *l_210 = &l_151;
            int *l_211 = &l_152;
            int *l_212 = &g_98;
            int *l_213 = &l_162;
            int *l_214 = (void*)0;
            int *l_215 = &g_38;
            int *l_216 = &g_98;
            int *l_217 = (void*)0;
            int *l_218 = &l_151;
            int *l_219 = &l_152;
            int *l_220 = &g_98;
            int *l_221 = (void*)0;
            int l_222 = 0x92C45C1CL;
            int *l_223 = &g_38;
            int *l_224 = &l_222;
            int *l_225 = &l_203;
            int *l_226 = &l_203;
            int *l_227 = &l_203;
            int *l_228 = (void*)0;
            int *l_229 = (void*)0;
            int *l_230 = &l_204;
            int *l_231 = (void*)0;
            int *l_232 = &l_162;
            int *l_233 = &l_162;
            int *l_235 = &g_98;
            int *l_236 = &l_162;
            int *l_237 = &l_204;
            int *l_238 = (void*)0;
            int *l_239 = (void*)0;
            int *l_240 = &l_204;
            int *l_241 = &l_162;
            int *l_242 = &g_38;
            int *l_243 = &g_98;
            int *l_244 = &g_98;
            int *l_245 = (void*)0;
            int *l_246 = (void*)0;
            int *l_247 = (void*)0;
            int *l_248 = &g_98;
            int *l_249 = &l_152;
            int *l_250 = &g_98;
            int *l_251 = &l_222;
            int *l_252 = (void*)0;
            int *l_254 = (void*)0;
            int *l_255 = &l_222;
            int *l_256 = (void*)0;
            int *l_257 = &l_203;
            int *l_258 = &l_234;
            int *l_259 = &g_38;
            int *l_260 = (void*)0;
            int *l_261 = &g_38;
            int *l_262 = &l_151;
            int *l_263 = &l_253;
            int *l_264 = &l_222;
            int *l_265 = (void*)0;
            int *l_266 = &l_151;
            int *l_267 = &l_151;
            int *l_269 = (void*)0;
            int *l_270 = &g_38;
            int *l_271 = &l_152;
            int *l_272 = &l_152;
            int *l_273 = (void*)0;
            int *l_274 = (void*)0;
            int *l_276 = &l_162;
            int *l_277 = (void*)0;
            int *l_278 = &l_203;
            int *l_280 = &l_204;
            int *l_281 = &g_38;
            int *l_282 = &l_162;
            int *l_283 = (void*)0;
            int *l_284 = &l_162;
            int *l_285 = &l_204;
            int l_286 = 0L;
            int *l_288 = &l_204;
            int *l_289 = &l_279;
            int *l_291 = (void*)0;
            int *l_292 = &l_279;
            int *l_293 = &l_162;
            int *l_294 = (void*)0;
            int *l_295 = &l_287;
            int *l_296 = (void*)0;
            int *l_297 = (void*)0;
            int *l_298 = &l_287;
            int *l_299 = &l_287;
            int *l_300 = &l_152;
            int *l_303 = (void*)0;
            int *l_304 = &l_234;
            int *l_305 = &l_234;
            int *l_306 = &l_287;
            int *l_307 = &l_234;
            int *l_308 = (void*)0;
            int *l_309 = (void*)0;
            int *l_310 = (void*)0;
            int *l_311 = &l_151;
            int *l_312 = &l_301;
            int *l_313 = &l_204;
            int *l_314 = &l_290;
            int l_316 = (-7L);
            int *l_317 = &l_204;
            int *l_318 = &l_253;
            int *l_320 = &l_287;
            int *l_321 = &l_268;
            int *l_322 = &l_151;
            int *l_323 = &l_253;
            int *l_324 = (void*)0;
            int *l_325 = &l_287;
            int *l_326 = (void*)0;
            int *l_327 = (void*)0;
            int l_328 = 0x51DF6473L;
            int *l_329 = &g_98;
            int *l_332 = &l_315;
            int *l_333 = &l_204;
            int *l_334 = &l_302;
            int *l_335 = &l_279;
            int *l_336 = &l_279;
            int *l_337 = &l_151;
            int *l_338 = &g_98;
            int *l_339 = &l_253;
            int *l_340 = &l_152;
            int *l_341 = &l_302;
            int *l_342 = &l_330;
            int *l_343 = &l_279;
            int l_344 = (-5L);
            int *l_345 = &l_290;
            int *l_346 = &l_203;
            int l_347 = 0x226855CDL;
            int *l_348 = &l_151;
            int *l_349 = &l_328;
            int *l_350 = &l_344;
            int *l_351 = &l_301;
            int *l_352 = &l_330;
            int *l_353 = &g_38;
            int *l_354 = (void*)0;
            int *l_355 = &l_316;
            int *l_356 = &l_151;
            int *l_357 = (void*)0;
            int *l_358 = &l_279;
            int *l_359 = (void*)0;
            int *l_360 = &l_253;
            int *l_361 = (void*)0;
            int *l_362 = &l_253;
            int *l_363 = &l_316;
            int *l_364 = &l_287;
            int *l_365 = &l_315;
            int *l_366 = &l_301;
            int *l_367 = (void*)0;
            int *l_368 = &l_203;
            int *l_369 = &l_290;
            int l_370 = 0xD0ADECF7L;
            int *l_371 = &l_344;
            (*p_63) = ((*l_68) , (*g_37));
            ++g_372;
        }
        for (g_84 = 0; (g_84 > 2); ++g_84)
        {
            int *l_384 = &l_301;
            int *l_385 = &l_315;
            int *l_386 = &l_268;
            int *l_387 = &l_319;
            int *l_388 = &l_315;
            int *l_389 = &l_331;
            int *l_390 = &l_152;
            int *l_391 = &l_234;
            int *l_392 = &g_98;
            int *l_393 = (void*)0;
            int *l_394 = &l_301;
            int *l_395 = &l_268;
            int *l_396 = &l_302;
            int *l_397 = &l_331;
            int *l_398 = &l_275;
            int *l_399 = &l_290;
            int *l_400 = (void*)0;
            int *l_401 = &l_315;
            int *l_402 = (void*)0;
            int *l_403 = &l_302;
            int *l_404 = &g_98;
            int *l_405 = &l_331;
            short l_406 = 0xC391L;
            int *l_407 = &l_268;
            int *l_408 = (void*)0;
            int *l_409 = &l_290;
            int *l_410 = (void*)0;
            int *l_411 = (void*)0;
            int *l_412 = &l_279;
            int *l_413 = (void*)0;
            int l_414 = 0xFD7926D9L;
            int *l_415 = &l_319;
            int *l_416 = &l_414;
            int *l_417 = &l_315;
            int *l_418 = &l_275;
            int *l_419 = &l_319;
            int *l_420 = &l_301;
            int *l_421 = &l_414;
            int *l_422 = &l_315;
            int *l_423 = &l_268;
            int *l_424 = (void*)0;
            int *l_425 = &l_331;
            int *l_426 = (void*)0;
            int *l_427 = &l_302;
            int *l_428 = &l_279;
            int l_429 = 0L;
            int *l_430 = (void*)0;
            int *l_431 = &l_301;
            int *l_432 = &l_290;
            int *l_433 = (void*)0;
            int *l_434 = &l_253;
            int *l_435 = &l_414;
            int *l_436 = (void*)0;
            int *l_437 = &l_152;
            int *l_438 = (void*)0;
            int *l_439 = &l_279;
            int *l_440 = &l_151;
            int *l_441 = &g_38;
            int *l_442 = &l_331;
            int *l_443 = &l_315;
            int *l_444 = &l_152;
            int *l_445 = &l_290;
            int *l_446 = &l_275;
            int *l_447 = &l_319;
            int *l_448 = &l_302;
            int *l_449 = &l_275;
            int *l_450 = &l_162;
            int l_451 = 0x4B01E4F8L;
            int *l_452 = (void*)0;
            int *l_453 = &l_287;
            int *l_454 = (void*)0;
            int *l_455 = &l_301;
            int *l_456 = &l_268;
            int *l_457 = &l_429;
            int l_458 = 9L;
            int *l_459 = &g_38;
            int l_460 = (-1L);
            int *l_461 = (void*)0;
            int *l_462 = &l_458;
            int *l_463 = &l_253;
            int *l_464 = &l_290;
            int *l_465 = &l_162;
            int *l_466 = (void*)0;
            int *l_467 = &l_458;
            int *l_468 = (void*)0;
            int *l_469 = &l_152;
            int *l_470 = &l_460;
            int *l_471 = (void*)0;
            int *l_472 = (void*)0;
            int *l_473 = (void*)0;
            int *l_474 = &l_414;
            int l_475 = 0x21B15B01L;
            int *l_476 = (void*)0;
            int *l_477 = &l_151;
            int *l_478 = &l_287;
            int *l_479 = &l_460;
            int *l_480 = (void*)0;
            int *l_481 = &l_414;
            int *l_482 = (void*)0;
            int *l_483 = &l_460;
            int *l_484 = &l_451;
            int *l_485 = (void*)0;
            int *l_486 = &l_151;
            int *l_487 = (void*)0;
            int *l_488 = &l_451;
            int *l_489 = (void*)0;
            int *l_490 = &l_475;
            int *l_491 = &l_234;
            int *l_492 = &l_162;
            int *l_493 = &g_38;
            int *l_494 = &l_268;
            int *l_495 = &l_331;
            int *l_496 = &l_331;
            int *l_497 = &l_234;
            int *l_498 = &l_268;
            int *l_499 = &l_315;
            int *l_500 = (void*)0;
            int *l_501 = &l_279;
            int *l_502 = &l_330;
            int *l_503 = &l_458;
            int *l_504 = (void*)0;
            int *l_505 = &l_458;
            int *l_506 = (void*)0;
            int *l_507 = &l_458;
            int *l_508 = &l_301;
            int *l_509 = &g_38;
            int *l_510 = &l_414;
            int *l_511 = &l_301;
            int *l_512 = &l_414;
            int *l_513 = &l_268;
            int *l_514 = &l_414;
            int *l_515 = &l_287;
            int *l_516 = &l_429;
            int *l_517 = &l_151;
            int *l_518 = &l_253;
            int *l_519 = &l_268;
            int *l_520 = &g_98;
            int *l_521 = &l_279;
            int *l_522 = &l_331;
            int *l_523 = &l_460;
            int *l_524 = (void*)0;
            int *l_525 = &l_279;
            int *l_526 = &g_38;
            int *l_527 = &l_319;
            int *l_528 = &l_475;
            int *l_529 = &l_315;
            int *l_530 = &l_290;
            int *l_531 = &g_38;
            int *l_532 = &l_287;
            int *l_533 = &l_331;
            int *l_534 = (void*)0;
            int *l_535 = &l_275;
            int l_536 = 1L;
            int *l_537 = (void*)0;
            int l_538 = 0x74E0D6C5L;
            int *l_539 = (void*)0;
            int *l_540 = (void*)0;
            int *l_541 = &l_151;
            int *l_542 = &l_536;
            int *l_543 = &l_253;
            int *l_545 = &l_279;
            int *l_546 = &l_460;
            int *l_547 = (void*)0;
            int *l_549 = (void*)0;
            int *l_550 = &g_38;
            int *l_551 = &l_287;
            int *l_552 = &l_275;
            int *l_553 = &l_302;
            int *l_554 = &l_302;
            int *l_555 = &l_152;
            int *l_556 = &g_544;
            int *l_558 = (void*)0;
            int *l_559 = &l_319;
            int *l_560 = &l_319;
            int *l_561 = (void*)0;
            int *l_562 = &l_319;
            for (l_275 = 0; (l_275 == (-21)); l_275 = safe_sub_func_int32_t_s_s(l_275, 5))
            {
                struct S1 **l_383 = &g_381;
                (*g_380) = l_379;
                (*l_383) = l_382;
                (*p_63) = (0x12535F52L & p_61);
            }
            l_564++;
            l_567++;
        }
    }
    return p_65;
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
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_66.f0, "g_66.f0", print_hash_value);
    transparent_crc(g_66.f1, "g_66.f1", print_hash_value);
    transparent_crc(g_66.f2, "g_66.f2", print_hash_value);
    transparent_crc(g_66.f3, "g_66.f3", print_hash_value);
    transparent_crc(g_76.f0, "g_76.f0", print_hash_value);
    transparent_crc(g_76.f1, "g_76.f1", print_hash_value);
    transparent_crc(g_76.f2, "g_76.f2", print_hash_value);
    transparent_crc(g_76.f3, "g_76.f3", print_hash_value);
    transparent_crc(g_77.f0, "g_77.f0", print_hash_value);
    transparent_crc(g_77.f1, "g_77.f1", print_hash_value);
    transparent_crc(g_77.f2, "g_77.f2", print_hash_value);
    transparent_crc(g_77.f3, "g_77.f3", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_115.f0, "g_115.f0", print_hash_value);
    transparent_crc(g_115.f1, "g_115.f1", print_hash_value);
    transparent_crc(g_115.f2, "g_115.f2", print_hash_value);
    transparent_crc(g_115.f3, "g_115.f3", print_hash_value);
    transparent_crc(g_134.f0, "g_134.f0", print_hash_value);
    transparent_crc(g_134.f1, "g_134.f1", print_hash_value);
    transparent_crc(g_134.f2, "g_134.f2", print_hash_value);
    transparent_crc(g_134.f3, "g_134.f3", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_544, "g_544", print_hash_value);
    transparent_crc(g_548, "g_548", print_hash_value);
    transparent_crc(g_557, "g_557", print_hash_value);
    transparent_crc(g_907, "g_907", print_hash_value);
    transparent_crc(g_934, "g_934", print_hash_value);
    transparent_crc(g_942.f0, "g_942.f0", print_hash_value);
    transparent_crc(g_942.f1, "g_942.f1", print_hash_value);
    transparent_crc(g_942.f2, "g_942.f2", print_hash_value);
    transparent_crc(g_942.f3, "g_942.f3", print_hash_value);
    transparent_crc(g_957, "g_957", print_hash_value);
    transparent_crc(g_958.f0, "g_958.f0", print_hash_value);
    transparent_crc(g_958.f1, "g_958.f1", print_hash_value);
    transparent_crc(g_958.f2, "g_958.f2", print_hash_value);
    transparent_crc(g_958.f3, "g_958.f3", print_hash_value);
    transparent_crc(g_1048, "g_1048", print_hash_value);
    transparent_crc(g_1323.f0, "g_1323.f0", print_hash_value);
    transparent_crc(g_1323.f1, "g_1323.f1", print_hash_value);
    transparent_crc(g_1323.f2, "g_1323.f2", print_hash_value);
    transparent_crc(g_1323.f3, "g_1323.f3", print_hash_value);
    transparent_crc(g_1512, "g_1512", print_hash_value);
    transparent_crc(g_1533.f0, "g_1533.f0", print_hash_value);
    transparent_crc(g_1533.f1, "g_1533.f1", print_hash_value);
    transparent_crc(g_1533.f2, "g_1533.f2", print_hash_value);
    transparent_crc(g_1533.f3, "g_1533.f3", print_hash_value);
    transparent_crc(g_1555, "g_1555", print_hash_value);
    transparent_crc(g_1564.f0, "g_1564.f0", print_hash_value);
    transparent_crc(g_1564.f1, "g_1564.f1", print_hash_value);
    transparent_crc(g_1564.f2, "g_1564.f2", print_hash_value);
    transparent_crc(g_1564.f3, "g_1564.f3", print_hash_value);
    transparent_crc(g_1567.f0, "g_1567.f0", print_hash_value);
    transparent_crc(g_1567.f1, "g_1567.f1", print_hash_value);
    transparent_crc(g_1567.f2, "g_1567.f2", print_hash_value);
    transparent_crc(g_1567.f3, "g_1567.f3", print_hash_value);
    transparent_crc(g_1589.f0, "g_1589.f0", print_hash_value);
    transparent_crc(g_1589.f1, "g_1589.f1", print_hash_value);
    transparent_crc(g_1589.f2, "g_1589.f2", print_hash_value);
    transparent_crc(g_1589.f3, "g_1589.f3", print_hash_value);
    transparent_crc(g_1596.f0, "g_1596.f0", print_hash_value);
    transparent_crc(g_1596.f1, "g_1596.f1", print_hash_value);
    transparent_crc(g_1596.f2, "g_1596.f2", print_hash_value);
    transparent_crc(g_1596.f3, "g_1596.f3", print_hash_value);
    transparent_crc(g_1666, "g_1666", print_hash_value);
    transparent_crc(g_1817.f0, "g_1817.f0", print_hash_value);
    transparent_crc(g_1817.f1, "g_1817.f1", print_hash_value);
    transparent_crc(g_1817.f2, "g_1817.f2", print_hash_value);
    transparent_crc(g_1817.f3, "g_1817.f3", print_hash_value);
    transparent_crc(g_2227.f0, "g_2227.f0", print_hash_value);
    transparent_crc(g_2227.f1, "g_2227.f1", print_hash_value);
    transparent_crc(g_2227.f2, "g_2227.f2", print_hash_value);
    transparent_crc(g_2227.f3, "g_2227.f3", print_hash_value);
    transparent_crc(g_2458.f0, "g_2458.f0", print_hash_value);
    transparent_crc(g_2458.f1, "g_2458.f1", print_hash_value);
    transparent_crc(g_2458.f2, "g_2458.f2", print_hash_value);
    transparent_crc(g_2458.f3, "g_2458.f3", print_hash_value);
    transparent_crc(g_2462.f0, "g_2462.f0", print_hash_value);
    transparent_crc(g_2462.f1, "g_2462.f1", print_hash_value);
    transparent_crc(g_2462.f2, "g_2462.f2", print_hash_value);
    transparent_crc(g_2462.f3, "g_2462.f3", print_hash_value);
    transparent_crc(g_2552.f0, "g_2552.f0", print_hash_value);
    transparent_crc(g_2552.f1, "g_2552.f1", print_hash_value);
    transparent_crc(g_2552.f2, "g_2552.f2", print_hash_value);
    transparent_crc(g_2552.f3, "g_2552.f3", print_hash_value);
    transparent_crc(g_2572.f0, "g_2572.f0", print_hash_value);
    transparent_crc(g_2572.f1, "g_2572.f1", print_hash_value);
    transparent_crc(g_2572.f2, "g_2572.f2", print_hash_value);
    transparent_crc(g_2572.f3, "g_2572.f3", print_hash_value);
    transparent_crc(g_2587, "g_2587", print_hash_value);
    transparent_crc(g_2654, "g_2654", print_hash_value);
    transparent_crc(g_2752.f0, "g_2752.f0", print_hash_value);
    transparent_crc(g_2752.f1, "g_2752.f1", print_hash_value);
    transparent_crc(g_2752.f2, "g_2752.f2", print_hash_value);
    transparent_crc(g_2752.f3, "g_2752.f3", print_hash_value);
    transparent_crc(g_2754, "g_2754", print_hash_value);
    transparent_crc(g_2937.f0, "g_2937.f0", print_hash_value);
    transparent_crc(g_2937.f1, "g_2937.f1", print_hash_value);
    transparent_crc(g_2937.f2, "g_2937.f2", print_hash_value);
    transparent_crc(g_2937.f3, "g_2937.f3", print_hash_value);
    transparent_crc(g_2951, "g_2951", print_hash_value);
    transparent_crc(g_2952.f0, "g_2952.f0", print_hash_value);
    transparent_crc(g_2952.f1, "g_2952.f1", print_hash_value);
    transparent_crc(g_2952.f2, "g_2952.f2", print_hash_value);
    transparent_crc(g_2952.f3, "g_2952.f3", print_hash_value);
    transparent_crc(g_3189.f0, "g_3189.f0", print_hash_value);
    transparent_crc(g_3189.f1, "g_3189.f1", print_hash_value);
    transparent_crc(g_3189.f2, "g_3189.f2", print_hash_value);
    transparent_crc(g_3189.f3, "g_3189.f3", print_hash_value);
    transparent_crc(g_3306, "g_3306", print_hash_value);
    transparent_crc(g_3389.f0, "g_3389.f0", print_hash_value);
    transparent_crc(g_3389.f1, "g_3389.f1", print_hash_value);
    transparent_crc(g_3389.f2, "g_3389.f2", print_hash_value);
    transparent_crc(g_3389.f3, "g_3389.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
