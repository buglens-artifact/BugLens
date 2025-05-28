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
   unsigned f0;
};

struct S1 {
   char f0;
   unsigned f1;
};


static short g_5 = (-3L);
static unsigned g_21 = 0x4F943AF7L;
static unsigned g_23 = 4294967295UL;
static int g_24 = (-1L);
static unsigned g_26 = 1UL;
static struct S1 g_33 = {1L,1UL};
static struct S1 *g_32[7][4] = {{&g_33, (void*)0, &g_33, &g_33}, {&g_33, (void*)0, &g_33, &g_33}, {&g_33, (void*)0, &g_33, &g_33}, {&g_33, (void*)0, &g_33, &g_33}, {&g_33, (void*)0, &g_33, &g_33}, {&g_33, (void*)0, &g_33, &g_33}, {&g_33, (void*)0, &g_33, &g_33}};
static unsigned g_40[1] = {4294967290UL};
static unsigned *g_39 = &g_40[0];
static int g_46[3] = {(-3L), (-3L), (-3L)};
static int * volatile g_45 = &g_46[1];
static int *g_82 = &g_46[1];
static int g_95 = 3L;
static char g_105 = 0x10L;
static int **g_119 = &g_82;
static struct S0 g_123 = {0x2B3C890FL};
static struct S0 *g_125 = &g_123;
static struct S0 ** volatile g_124[2][6] = {{&g_125, &g_125, &g_125, &g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125, &g_125, &g_125, &g_125}};
static struct S0 ** volatile g_126 = &g_125;
static unsigned char g_132 = 9UL;
static int * volatile g_137 = &g_46[2];
static int ** volatile g_143 = (void*)0;
static int ** volatile g_161 = &g_82;
static struct S0 ** volatile g_163 = &g_125;
static struct S1 ** volatile g_164 = &g_32[3][3];
static struct S1 **g_176 = &g_32[3][3];
static unsigned char g_177 = 0x68L;
static struct S1 g_206 = {0x23L,0xA57CDCCDL};
static short g_211 = (-5L);
static unsigned short g_239 = 0x2F90L;
static unsigned short g_311 = 4UL;
static unsigned short g_313 = 0xC52CL;
static struct S0 **g_365 = (void*)0;
static struct S0 *** volatile g_364 = &g_365;
static int g_387 = 0x0BEC624AL;
static int *g_386 = &g_387;
static struct S0 ** volatile g_439[9] = {&g_125, &g_125, (void*)0, &g_125, &g_125, (void*)0, &g_125, &g_125, (void*)0};
static struct S0 ** volatile g_441 = (void*)0;
static struct S1 * volatile g_470 = &g_206;
static struct S0 * volatile g_503 = &g_123;
static struct S0 ** volatile g_513 = &g_125;
static struct S1 ** volatile g_516 = (void*)0;
static struct S1 ** volatile g_517 = &g_32[0][2];
static struct S1 * volatile g_519 = &g_33;
static unsigned short *g_532 = (void*)0;
static unsigned short * volatile * volatile g_531 = &g_532;



static struct S1 func_1(void);
static struct S1 * func_2(struct S0 p_3, int p_4);
static unsigned func_17(unsigned p_18, unsigned char p_19);
static struct S0 func_27(unsigned * p_28, short p_29, struct S1 * p_30, int p_31);
static struct S1 * func_35(unsigned * p_36, int p_37, struct S1 * p_38);
static unsigned char func_49(unsigned char p_50, struct S1 * p_51, int * p_52, struct S1 p_53, unsigned * p_54);
static short func_56(struct S0 p_57, int * p_58, int * p_59, unsigned p_60, struct S0 p_61);
static struct S0 func_62(int * p_63, unsigned * p_64, unsigned * p_65);
static unsigned * func_66(unsigned * p_67, unsigned p_68, int * p_69, unsigned p_70);
static unsigned func_71(unsigned char p_72, int p_73, int * p_74, unsigned char p_75, int p_76);
static struct S1 func_1(void)
{
    short l_14 = (-1L);
    unsigned *l_20 = &g_21;
    unsigned *l_22 = &g_23;
    unsigned *l_25 = &g_26;
    int l_34[8][5][6] = {{{(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}}, {{(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}}, {{(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}}, {{(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}}, {{(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}}, {{(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}}, {{(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}}, {{(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}, {(-10L), 0x16E31137L, 0xD1D89E17L, 0x16E31137L, (-10L), 0x16E31137L}}};
    int l_450[1];
    char *l_497[4][4] = {{&g_33.f0, &g_33.f0, &g_33.f0, &g_33.f0}, {&g_33.f0, &g_33.f0, &g_33.f0, &g_33.f0}, {&g_33.f0, &g_33.f0, &g_33.f0, &g_33.f0}, {&g_33.f0, &g_33.f0, &g_33.f0, &g_33.f0}};
    unsigned l_498 = 4294967290UL;
    unsigned short *l_499 = &g_239;
    int l_500[4][3] = {{0x599CEEB2L, 0x599CEEB2L, 0xC62E34A5L}, {0x599CEEB2L, 0x599CEEB2L, 0xC62E34A5L}, {0x599CEEB2L, 0x599CEEB2L, 0xC62E34A5L}, {0x599CEEB2L, 0x599CEEB2L, 0xC62E34A5L}};
    struct S0 l_501 = {0UL};
    char l_502 = 0xABL;
    struct S1 l_518[10] = {{0x43L,0x668442B5L}, {0x43L,0x668442B5L}, {0x43L,0x668442B5L}, {0x43L,0x668442B5L}, {0x43L,0x668442B5L}, {0x43L,0x668442B5L}, {0x43L,0x668442B5L}, {0x43L,0x668442B5L}, {0x43L,0x668442B5L}, {0x43L,0x668442B5L}};
    unsigned char *l_520 = &g_177;
    int *l_521 = &g_95;
    int *l_522 = &g_46[1];
    struct S0 l_523 = {0x3E10B3B6L};
    unsigned char l_524 = 255UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_450[i] = 1L;
    (*g_517) = func_2(((g_5 <= (safe_sub_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(g_5, 5)), (safe_lshift_func_int8_t_s_u((((*l_499) = (((~((l_498 = (l_14 ^ (((safe_lshift_func_uint16_t_u_s(((func_17(((*l_25) = (g_24 = ((*l_22) = ((*l_20) = g_5)))), (((((func_27(l_25, g_5, g_32[3][3], (l_34[6][0][1] = 0x380A3888L)) , g_40[0]) > l_450[0]) | g_40[0]) , (*g_164)) != (void*)0)) > 1L) != (-1L)), g_123.f0)) ^ 6UL) , (*g_137)))) || l_498)) && l_34[6][0][1]) ^ l_14)) , l_500[0][2]), 0)))) & l_450[0]), l_450[0]))) , l_501), l_502);
    (*g_519) = l_518[7];
    (*l_521) = ((l_524 = (*l_522)) != 0x5A15L);
    (*g_119) = ((safe_add_func_int32_t_s_s(((((*l_521) & (&g_211 == (((*l_520) = ((safe_mul_func_uint8_t_u_u(1UL, (*l_522))) <= ((((*l_499) = (safe_rshift_func_int8_t_s_u(((g_531 == (void*)0) >= 0x5BCAL), ((-3L) >= ((safe_lshift_func_uint8_t_u_s(((((g_123 , &g_386) == &l_521) || (*l_522)) , (*l_521)), (*l_522))) != (*l_521)))))) != 0xF197L) , (*l_521)))) , (void*)0))) == (*l_522)) && 0x83L), (*l_522))) , &l_450[0]);
    return l_518[8];
}







static struct S1 * func_2(struct S0 p_3, int p_4)
{
    unsigned l_506 = 0x2DDE9B5DL;
    struct S1 *l_515 = &g_33;
    (*g_503) = p_3;
    for (g_132 = (-14); (g_132 > 18); g_132 = safe_add_func_uint8_t_u_u(g_132, 3))
    {
        return (*g_164);
    }
    if ((l_506 , l_506))
    {
        (*g_386) = p_4;
    }
    else
    {
        return (*g_164);
    }
    for (g_5 = 0; (g_5 <= 8); g_5 += 1)
    {
        int *l_511 = &g_95;
        int *l_512 = &g_387;
        int *l_514[3];
        int i;
        for (i = 0; i < 3; i++)
            l_514[i] = &g_46[1];
        for (g_206.f1 = 0; (g_206.f1 <= 3); g_206.f1 += 1)
        {
            int **l_507 = &g_386;
            int **l_508 = (void*)0;
            int *l_510 = &g_95;
            int **l_509[1][4][3] = {{{&l_510, &l_510, &l_510}, {&l_510, &l_510, &l_510}, {&l_510, &l_510, &l_510}, {&l_510, &l_510, &l_510}}};
            int i, j, k;
            l_512 = (l_511 = ((*l_507) = ((*g_119) = &p_4)));
        }
        if ((*l_512))
            continue;
        (*g_513) = &p_3;
        for (g_206.f1 = 0; (g_206.f1 <= 3); g_206.f1 += 1)
        {
            (*g_119) = l_514[0];
        }
    }
    return l_515;
}







static unsigned func_17(unsigned p_18, unsigned char p_19)
{
    struct S0 *l_455 = &g_123;
    int l_464 = 0x0AA2A399L;
    unsigned *l_472 = &g_40[0];
    struct S0 *l_473 = &g_123;
    unsigned l_477 = 0UL;
    unsigned **l_478 = &l_472;
    short *l_479 = &g_211;
    struct S1 *l_480 = (void*)0;
    struct S1 **l_481 = (void*)0;
    struct S1 **l_482 = &g_32[3][3];
    unsigned char *l_485[1];
    char l_488 = 0xEFL;
    int i;
    for (i = 0; i < 1; i++)
        l_485[i] = &g_177;
    for (g_24 = 0; (g_24 <= 2); g_24 += 1)
    {
        struct S1 l_453[3] = {{0x19L,2UL}, {0x19L,2UL}, {0x19L,2UL}};
        struct S0 *l_454 = &g_123;
        int l_465 = 0L;
        unsigned *l_471[2];
        int i;
        for (i = 0; i < 2; i++)
            l_471[i] = (void*)0;
        (**g_119) = (g_46[g_24] | (safe_sub_func_int32_t_s_s(((l_453[0] , l_454) != l_455), ((((safe_lshift_func_uint8_t_u_s(l_453[0].f1, 6)) , (((p_18 < p_19) >= l_464) > g_206.f0)) ^ 0xC8L) || l_465))));
        for (g_311 = 0; (g_311 <= 2); g_311 += 1)
        {
            int *l_466 = &l_464;
            (*g_119) = l_466;
            for (l_464 = 2; (l_464 >= 0); l_464 -= 1)
            {
                (*g_119) = (void*)0;
                if (p_19)
                    break;
            }
        }
        for (g_177 = 14; (g_177 <= 39); ++g_177)
        {
            struct S1 l_469 = {0x33L,0xB0C8316DL};
            (*g_470) = l_469;
        }
        (*g_119) = func_66(&g_26, g_387, &l_464, l_465);
    }
    l_473 = (l_455 = l_455);
    if (((**g_119) = (safe_unary_minus_func_uint8_t_u((((((safe_add_func_int32_t_s_s((l_477 < (p_18 = 4294967286UL)), 0x9DEE8099L)) == l_464) != 0xEDL) >= 0xF8L) & l_464)))))
    {
        l_473 = (*g_163);
        l_464 = l_488;
    }
    else
    {
        int *l_495[10][6][4] = {{{(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}}, {{(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}}, {{(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}}, {{(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}}, {{(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}}, {{(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}}, {{(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}}, {{(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}}, {{(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}}, {{(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}, {(void*)0, (void*)0, (void*)0, &g_387}}};
        int **l_496 = (void*)0;
        int i, j, k;
        l_495[9][4][3] = ((*g_119) = l_495[9][3][1]);
    }
    return p_18;
}







static struct S0 func_27(unsigned * p_28, short p_29, struct S1 * p_30, int p_31)
{
    int l_41 = 3L;
    unsigned *l_444 = &g_33.f1;
    struct S1 *l_445 = &g_206;
    struct S1 ***l_446 = &g_176;
    struct S1 *l_447 = &g_206;
    struct S1 *l_448 = &g_206;
    struct S0 l_449 = {1UL};
    (*g_176) = func_35(g_39, l_41, p_30);
    (*g_176) = func_35(p_28, p_31, l_445);
    (*l_446) = (void*)0;
    l_448 = l_447;
    return l_449;
}







static struct S1 * func_35(unsigned * p_36, int p_37, struct S1 * p_38)
{
    unsigned short l_83[6] = {0xD6C3L, 0xD6C3L, 0x13DBL, 0xD6C3L, 0xD6C3L, 0x13DBL};
    int *l_84 = &g_46[1];
    struct S0 l_180[2] = {{18446744073709551610UL}, {18446744073709551610UL}};
    struct S1 *l_390 = &g_33;
    struct S1 l_409 = {0L,18446744073709551614UL};
    unsigned **l_438 = &g_39;
    int i;
    for (p_37 = 0; (p_37 > 28); ++p_37)
    {
        int l_44 = 2L;
        struct S1 *l_55 = &g_33;
        char l_77 = 1L;
        int *l_80 = (void*)0;
        int **l_81[1][9][2];
        struct S0 l_179 = {0x355E81BFL};
        unsigned short *l_397 = &g_239;
        struct S1 **l_407 = &g_32[5][2];
        struct S1 l_425[6][5] = {{{-2L,0xF1982D9EL}, {-4L,0xE9E1B32FL}, {-8L,18446744073709551607UL}, {-4L,0xE9E1B32FL}, {-2L,0xF1982D9EL}}, {{-2L,0xF1982D9EL}, {-4L,0xE9E1B32FL}, {-8L,18446744073709551607UL}, {-4L,0xE9E1B32FL}, {-2L,0xF1982D9EL}}, {{-2L,0xF1982D9EL}, {-4L,0xE9E1B32FL}, {-8L,18446744073709551607UL}, {-4L,0xE9E1B32FL}, {-2L,0xF1982D9EL}}, {{-2L,0xF1982D9EL}, {-4L,0xE9E1B32FL}, {-8L,18446744073709551607UL}, {-4L,0xE9E1B32FL}, {-2L,0xF1982D9EL}}, {{-2L,0xF1982D9EL}, {-4L,0xE9E1B32FL}, {-8L,18446744073709551607UL}, {-4L,0xE9E1B32FL}, {-2L,0xF1982D9EL}}, {{-2L,0xF1982D9EL}, {-4L,0xE9E1B32FL}, {-8L,18446744073709551607UL}, {-4L,0xE9E1B32FL}, {-2L,0xF1982D9EL}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 9; j++)
            {
                for (k = 0; k < 2; k++)
                    l_81[i][j][k] = &l_80;
            }
        }
        (*g_45) = l_44;
    }
    return (*g_164);
}







static unsigned char func_49(unsigned char p_50, struct S1 * p_51, int * p_52, struct S1 p_53, unsigned * p_54)
{
    unsigned *l_214 = &g_40[0];
    int l_215 = 1L;
    int *l_217 = &g_95;
    struct S0 l_220 = {0xB8F5414DL};
    struct S1 ***l_221 = &g_176;
    char *l_242 = &g_105;
    struct S1 l_267 = {-1L,0x458CBF98L};
    int ***l_290 = &g_119;
    int ***l_295 = &g_119;
    int **l_332 = &g_82;
    unsigned char *l_371[5] = {&g_132, &g_132, &g_132, &g_132, &g_132};
    unsigned char **l_370 = &l_371[0];
    int i;
    for (g_123.f0 = 0; (g_123.f0 != 4); ++g_123.f0)
    {
        int *l_209 = &g_46[0];
        short *l_210 = &g_211;
        unsigned **l_212 = (void*)0;
        unsigned **l_213 = &g_39;
        int **l_216[7] = {&g_82, &g_82, &g_82, &g_82, &g_82, &g_82, &g_82};
        int i;
        l_217 = (p_52 = ((((*l_210) = (l_209 == (*g_161))) > 0L) , &l_215));
    }
    if (((*l_217) , (safe_add_func_uint32_t_u_u(p_53.f0, func_56(l_220, &l_215, p_54, ((void*)0 != l_221), l_220)))))
    {
        int l_225 = 0xDDAF615AL;
        unsigned *l_231 = &g_40[0];
        char *l_237 = (void*)0;
        struct S0 l_262[1] = {{18446744073709551611UL}};
        struct S1 ***l_315[9] = {&g_176, &g_176, &g_176, &g_176, &g_176, &g_176, &g_176, &g_176, &g_176};
        unsigned char l_358 = 5UL;
        int *l_360 = &l_215;
        int l_366 = 0L;
        struct S0 *l_384 = &l_262[0];
        int i;
        if ((*l_217))
        {
            int **l_224 = &g_82;
            int l_254 = (-7L);
            struct S1 l_266 = {0x67L,0UL};
            struct S0 l_276 = {0x38A90A74L};
            char **l_285 = (void*)0;
            struct S1 l_287 = {0L,0UL};
            struct S0 **l_363 = &g_125;
            unsigned char *l_369 = &g_177;
            unsigned char **l_368 = &l_369;
            unsigned *l_372 = (void*)0;
            if (((((safe_sub_func_int16_t_s_s(g_211, (((*p_51) , g_206.f1) | p_53.f1))) , (l_225 ^ 3L)) , l_225) , 0xED7C92EBL))
            {
                struct S1 l_228 = {-1L,18446744073709551615UL};
                if (((((*p_51) = ((safe_lshift_func_int8_t_s_s(p_53.f1, 1)) , l_228)) , &p_54) == &g_39))
                {
                    char *l_244 = &g_206.f0;
                    for (g_123.f0 = 13; (g_123.f0 <= 33); g_123.f0 = safe_add_func_uint32_t_u_u(g_123.f0, 1))
                    {
                        unsigned short *l_238 = &g_239;
                        char **l_243 = &l_242;
                        (*l_224) = &l_215;
                    }
                    (*l_224) = p_52;
                }
                else
                {
                    (**l_221) = &p_53;
                }
                (*l_217) = (**l_224);
            }
            else
            {
                struct S0 l_245[9] = {{18446744073709551613UL}, {18446744073709551615UL}, {18446744073709551613UL}, {18446744073709551615UL}, {18446744073709551613UL}, {18446744073709551615UL}, {18446744073709551613UL}, {18446744073709551615UL}, {18446744073709551613UL}};
                unsigned short *l_252 = &g_239;
                unsigned char *l_253[4][5][2] = {{{(void*)0, &g_132}, {(void*)0, &g_132}, {(void*)0, &g_132}, {(void*)0, &g_132}, {(void*)0, &g_132}}, {{(void*)0, &g_132}, {(void*)0, &g_132}, {(void*)0, &g_132}, {(void*)0, &g_132}, {(void*)0, &g_132}}, {{(void*)0, &g_132}, {(void*)0, &g_132}, {(void*)0, &g_132}, {(void*)0, &g_132}, {(void*)0, &g_132}}, {{(void*)0, &g_132}, {(void*)0, &g_132}, {(void*)0, &g_132}, {(void*)0, &g_132}, {(void*)0, &g_132}}};
                int *l_255 = &g_46[1];
                unsigned char l_256 = 0x98L;
                unsigned *l_265 = &g_33.f1;
                int i, j, k;
                if (l_256)
                {
                    unsigned l_259 = 4294967287UL;
                    unsigned l_264 = 4294967293UL;
                    for (g_206.f0 = 23; (g_206.f0 > (-23)); --g_206.f0)
                    {
                        int *l_263 = &l_254;
                        (*l_224) = p_54;
                        if ((*p_52))
                            break;
                        if ((*p_52))
                            break;
                    }
                }
                else
                {
                    (*p_52) = 0xABFEF35BL;
                }
                (*l_224) = &l_215;
            }
            l_267 = l_266;
            if (((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(((p_53.f0 , 0x1CD93EC3L) && (safe_sub_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u(((*l_242) = g_239), l_225)) < p_53.f0), (**l_224)))), g_177)), 3)) > (*g_39)))
            {
                char l_283 = 0xCFL;
                char *l_284 = &l_266.f0;
                short *l_286 = &g_211;
                (*l_217) = (**l_224);
                (*p_52) = (*p_52);
                (*l_217) = (*p_52);
                if ((*l_217))
                {
                    (*p_52) = ((((safe_rshift_func_int16_t_s_u((((*p_51) , ((*p_51) , l_290)) == ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u((**l_224), 7)), g_40[0])) , l_295)), ((~(safe_sub_func_int32_t_s_s(0L, 0xACBD857EL))) == p_50))) , p_53.f1) && g_132) , 0x5147F8CDL);
                }
                else
                {
                    return g_105;
                }
            }
            else
            {
                struct S0 l_322 = {1UL};
                unsigned *l_324[5][5] = {{&g_40[0], (void*)0, &g_40[0], (void*)0, &g_40[0]}, {&g_40[0], (void*)0, &g_40[0], (void*)0, &g_40[0]}, {&g_40[0], (void*)0, &g_40[0], (void*)0, &g_40[0]}, {&g_40[0], (void*)0, &g_40[0], (void*)0, &g_40[0]}, {&g_40[0], (void*)0, &g_40[0], (void*)0, &g_40[0]}};
                struct S0 l_325 = {18446744073709551615UL};
                int l_343[8] = {0L, 0L, 4L, 0L, 0L, 4L, 0L, 0L};
                struct S1 l_354 = {-1L,18446744073709551609UL};
                int *l_381 = &l_225;
                int i, j;
                if (((*p_52) = (*p_52)))
                {
                    int l_306 = 0x290356B7L;
                    int l_309 = 0xBDB00296L;
                    unsigned short *l_310 = &g_311;
                    unsigned short *l_312 = &g_313;
                    unsigned **l_314 = &l_214;
                    struct S0 l_316 = {0x3D6F203CL};
                    (*l_217) = (safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(p_50, ((((safe_sub_func_uint16_t_u_u((g_5 == (((g_123.f0 || l_262[0].f0) | p_53.f0) , p_53.f0)), g_5)) <= (-7L)) != g_206.f1) == (**l_224)))), (-6L)));
                    return p_53.f1;
                }
                else
                {
                    int *l_317[1][6] = {{&l_215, &l_225, &l_215, &l_225, &l_215, &l_225}};
                    struct S0 l_319 = {5UL};
                    int **l_338 = (void*)0;
                    unsigned l_347 = 0x543CFDC6L;
                    int i, j;
                    (*g_161) = l_317[0][5];
                    if ((*g_137))
                    {
                        struct S0 *l_318[10] = {&l_262[0], &g_123, &l_262[0], &g_123, &l_262[0], &g_123, &l_262[0], &g_123, &l_262[0], &g_123};
                        unsigned **l_323 = &l_214;
                        int i;
                        (*l_224) = (*g_161);
                        (*l_224) = (*g_161);
                        l_319 = l_276;
                        (*p_52) = ((**l_224) , ((safe_sub_func_uint16_t_u_u(func_56((l_322 = l_262[0]), p_54, p_52, g_95, l_325), p_53.f0)) , 0x221A421AL));
                    }
                    else
                    {
                        struct S0 **l_326 = &g_125;
                        struct S0 *l_328 = &g_123;
                        struct S0 **l_327 = &l_328;
                        int ***l_329 = &g_119;
                        int ***l_330 = &g_119;
                        int ***l_331 = &g_119;
                        int ***l_333 = &g_119;
                        int ***l_334 = &g_119;
                        int ***l_335 = &l_224;
                        int ***l_336 = &g_119;
                        int ***l_337 = &g_119;
                        unsigned char *l_341 = &g_177;
                        unsigned char **l_342 = &l_341;
                        unsigned *l_344 = &l_287.f1;
                        (*l_327) = ((*l_326) = (*g_163));
                        (*p_52) = ((**l_224) , ((l_332 = &p_52) == (l_338 = ((*l_335) = &g_82))));
                        (*p_52) = 0x67729FFEL;
                        p_52 = p_54;
                    }
                    for (g_123.f0 = 0; (g_123.f0 > 12); g_123.f0++)
                    {
                        (*l_332) = &l_343[1];
                        return l_347;
                    }
                }
                for (g_177 = 0; (g_177 <= 0); g_177 += 1)
                {
                    int l_359[6][6][1] = {{{0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}}};
                    int i, j, k;
                    if ((safe_rshift_func_uint8_t_u_u(0x23L, p_50)))
                    {
                        (**l_224) = (*g_45);
                    }
                    else
                    {
                        unsigned **l_357 = &l_324[4][3];
                        int **l_361 = &l_217;
                        unsigned short *l_362[5] = {&g_313, (void*)0, &g_313, (void*)0, &g_313};
                        int i;
                        l_359[1][2][0] = (safe_sub_func_int8_t_s_s(((g_33.f1 | ((safe_sub_func_int8_t_s_s(0x2BL, p_53.f0)) , (((l_354 , (func_56(l_262[g_177], func_66(((safe_sub_func_uint32_t_u_u(((void*)0 == &p_52), 0x91C4B442L)) , (*l_357)), p_50, (*l_224), l_359[1][2][0]), p_52, g_206.f1, l_262[g_177]) , 65533UL)) >= p_53.f1) , 0xABL))) >= p_53.f1), 0xE2L));
                        p_52 = ((*l_361) = ((*l_224) = l_360));
                        (*g_45) = (~(((*l_360) = (*l_360)) ^ g_177));
                        (*p_51) = (*p_51);
                    }
                    return p_50;
                }
                (*g_364) = (l_220 , l_363);
                if (p_50)
                {
                    struct S0 *l_367[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_367[i] = &l_276;
                    (**l_224) = ((l_366 | ((l_262[0] = l_262[0]) , 0xAA96L)) > 2L);
                    if ((l_368 == l_370))
                    {
                        (*l_217) = (**l_224);
                        (*g_163) = (*g_126);
                    }
                    else
                    {
                        unsigned short *l_376 = (void*)0;
                        unsigned short **l_375 = &l_376;
                        unsigned short *l_378 = &g_311;
                        unsigned short **l_377 = &l_378;
                        struct S0 l_379 = {0xDF47251DL};
                        int l_380 = 1L;
                        l_380 = (l_372 != ((((0x93L == (((*l_377) = ((*g_82) , ((*l_375) = &g_313))) != (void*)0)) <= (l_379 , (((void*)0 != &p_53) , ((**l_370) = p_53.f1)))) , g_206.f1) , (void*)0));
                        l_381 = (((void*)0 == &g_32[3][3]) , p_54);
                    }
                }
                else
                {
                    p_52 = ((*l_224) = p_54);
                }
            }
        }
        else
        {
            (*g_45) = ((*l_360) != (((**l_370) = 3UL) <= (p_50 = (safe_rshift_func_uint16_t_u_u((((*l_242) = g_40[0]) != 252UL), 2)))));
        }
        (*l_384) = l_262[0];
    }
    else
    {
        struct S0 *l_385 = &g_123;
        (*l_385) = l_220;
        return g_313;
    }
    (*l_217) = (*g_137);
    (*p_51) = (*p_51);
    return p_53.f1;
}







static short func_56(struct S0 p_57, int * p_58, int * p_59, unsigned p_60, struct S0 p_61)
{
    int l_189 = 9L;
    struct S1 *l_200 = &g_33;
    int l_204 = 0x3A3C0B00L;
    int l_205 = (-2L);
    for (p_61.f0 = 0; (p_61.f0 <= 39); p_61.f0++)
    {
        int l_193 = (-2L);
        struct S1 l_198 = {0L,1UL};
        int l_199 = 0x38C6D902L;
        char *l_201 = &g_33.f0;
        int *l_202[6][1][2];
        short l_203 = 0x0160L;
        int i, j, k;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 2; k++)
                    l_202[i][j][k] = &g_46[1];
            }
        }
        l_205 = ((1UL | (safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((l_189 , (((*g_82) = (~0x15CA3407L)) != p_60)), (safe_mod_func_int32_t_s_s((safe_unary_minus_func_int32_t_s(l_189)), (l_204 = (l_203 = ((l_193 == (safe_mod_func_int8_t_s_s(((*l_201) = (((safe_lshift_func_uint16_t_u_s((g_33.f1 & ((l_199 = ((l_198 , g_123.f0) , l_189)) < 0x1447B9B5L)), l_189)) , l_200) != (*g_176))), 0x81L))) || (*g_45)))))))), 4)), 0xFC0EF5ABL))) >= g_33.f1);
    }
    return l_204;
}







static struct S0 func_62(int * p_63, unsigned * p_64, unsigned * p_65)
{
    unsigned **l_148 = &g_39;
    int l_149 = 0x4FBD3AC5L;
    struct S1 l_159 = {-1L,18446744073709551613UL};
    int *l_160 = &g_95;
    struct S0 l_171[1][10][3] = {{{{18446744073709551610UL}, {0x2E18EF8DL}, {0x2BE2F300L}}, {{18446744073709551610UL}, {0x2E18EF8DL}, {0x2BE2F300L}}, {{18446744073709551610UL}, {0x2E18EF8DL}, {0x2BE2F300L}}, {{18446744073709551610UL}, {0x2E18EF8DL}, {0x2BE2F300L}}, {{18446744073709551610UL}, {0x2E18EF8DL}, {0x2BE2F300L}}, {{18446744073709551610UL}, {0x2E18EF8DL}, {0x2BE2F300L}}, {{18446744073709551610UL}, {0x2E18EF8DL}, {0x2BE2F300L}}, {{18446744073709551610UL}, {0x2E18EF8DL}, {0x2BE2F300L}}, {{18446744073709551610UL}, {0x2E18EF8DL}, {0x2BE2F300L}}, {{18446744073709551610UL}, {0x2E18EF8DL}, {0x2BE2F300L}}}};
    struct S1 **l_174 = &g_32[3][3];
    struct S1 ***l_175[3];
    int **l_178 = &l_160;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_175[i] = &l_174;
    (*g_161) = func_66(((*l_148) = p_64), l_149, p_65, (!(1L ^ ((*l_160) = (((((safe_mul_func_int16_t_s_s((0x20E0L != (safe_mul_func_int16_t_s_s(l_149, (((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(l_149, 2)), (safe_unary_minus_func_int8_t_s((((*p_63) = l_149) <= (l_149 <= l_149)))))) == g_33.f0) | l_149)))), l_149)) , l_159) , l_159.f0) <= 252UL) ^ l_149)))));
    for (g_132 = 0; (g_132 <= 2); g_132 += 1)
    {
        struct S0 *l_162 = (void*)0;
        for (l_159.f1 = 0; (l_159.f1 <= 2); l_159.f1 += 1)
        {
            int i, j;
            for (g_123.f0 = 0; (g_123.f0 <= 2); g_123.f0 += 1)
            {
                int i;
                g_46[g_132] = 0x3702682AL;
            }
            for (g_123.f0 = 0; (g_123.f0 <= 2); g_123.f0 += 1)
            {
                int i;
                (*g_163) = l_162;
                g_46[g_123.f0] = 0xC26B4E49L;
            }
            (*g_164) = g_32[(g_132 + 4)][(l_159.f1 + 1)];
        }
        for (g_95 = 0; (g_95 <= 1); g_95 += 1)
        {
            int i;
            p_63 = &g_46[(g_95 + 1)];
        }
    }
    (*l_178) = ((+(((*l_160) != (g_177 = (safe_sub_func_int16_t_s_s((*l_160), ((((safe_mul_func_int8_t_s_s((0UL <= ((*l_160) != ((~((safe_lshift_func_uint16_t_u_u((((*g_39) > (((0x1DL && (l_171[0][3][0] , ((safe_lshift_func_uint8_t_u_s(((&g_32[3][3] == (g_176 = l_174)) ^ 0L), g_33.f0)) > (*l_160)))) || (*l_160)) && (*p_65))) < (*l_160)), (*l_160))) , 253UL)) | g_5))), (*l_160))) < (*g_82)) != 0UL) , 0xCE15L))))) ^ (*l_160))) , p_65);
    (*l_174) = (void*)0;
    return l_171[0][1][1];
}







static unsigned * func_66(unsigned * p_67, unsigned p_68, int * p_69, unsigned p_70)
{
    unsigned l_130 = 7UL;
    struct S0 *l_135[1][7] = {{(void*)0, &g_123, (void*)0, &g_123, (void*)0, &g_123, (void*)0}};
    struct S1 *l_140 = (void*)0;
    int *l_142 = (void*)0;
    int *l_146 = &g_46[1];
    int **l_147 = &l_142;
    int i, j;
    if ((*p_69))
    {
        struct S0 *l_122 = &g_123;
        int l_129 = 4L;
        unsigned char *l_131 = &g_132;
        struct S0 **l_136 = &g_125;
        (*g_126) = l_122;
        (*g_137) = (safe_mod_func_uint8_t_u_u(((g_33.f0 > (((*p_69) = ((((*g_45) || (safe_mod_func_int16_t_s_s((((*l_136) = l_135[0][6]) == l_135[0][6]), l_130))) | l_130) < 4294967295UL)) || (*g_39))) >= 0L), g_105));
    }
    else
    {
        for (l_130 = 6; (l_130 != 24); l_130 = safe_add_func_uint32_t_u_u(l_130, 2))
        {
            struct S1 **l_141 = &g_32[3][3];
            (*l_141) = l_140;
            l_140 = ((*l_141) = l_140);
        }
    }
    l_142 = l_142;
    for (l_130 = 0; (l_130 <= 50); ++l_130)
    {
        l_146 = (void*)0;
    }
    (*l_147) = (void*)0;
    return &g_40[0];
}







static unsigned func_71(unsigned char p_72, int p_73, int * p_74, unsigned char p_75, int p_76)
{
    struct S0 l_85 = {0UL};
    int l_96 = 0xE9BCC685L;
    char *l_103 = (void*)0;
    char *l_104 = &g_105;
    int l_106 = (-5L);
    int **l_118 = &g_82;
    int ***l_117[9][2][10] = {{{&l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118}, {&l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118}}, {{&l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118}, {&l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118}}, {{&l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118}, {&l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118}}, {{&l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118}, {&l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118}}, {{&l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118}, {&l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118}}, {{&l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118}, {&l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118}}, {{&l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118}, {&l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118}}, {{&l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118}, {&l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118}}, {{&l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118}, {&l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118, &l_118}}};
    int l_120 = 1L;
    int l_121 = 0x4C648ED3L;
    int i, j, k;
    for (g_33.f1 = 0; (g_33.f1 <= 2); g_33.f1 += 1)
    {
        int *l_94[3][2];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
                l_94[i][j] = &g_95;
        }
        l_96 = ((l_85 , g_46[g_33.f1]) , (((*p_74) = ((((safe_mod_func_uint8_t_u_u(((((-8L) != (*g_45)) >= ((safe_lshift_func_int16_t_s_s(((0xF80BL != (safe_lshift_func_int8_t_s_u(((p_75 >= p_72) != (safe_lshift_func_uint16_t_u_s(p_75, 7))), g_33.f1))) <= (-7L)), p_72)) , g_40[0])) ^ 0x08F4L), p_72)) , 0x9E5A9921L) ^ g_46[g_33.f1]) <= g_5)) <= 0xB9066996L));
    }
    for (l_85.f0 = (-14); (l_85.f0 < 13); ++l_85.f0)
    {
        return p_72;
    }
    l_121 = ((((*p_74) = (safe_lshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(0x1043A423L, (l_106 = (p_76 , ((*g_39) = (+(((*l_104) = (g_33.f0 = g_46[1])) | (l_96 , g_95)))))))) && (safe_lshift_func_int16_t_s_u(p_73, ((safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(1UL, (((g_119 = &p_74) == (void*)0) <= (*p_74)))), p_72)) , p_76), l_120)), g_40[0])) >= 1L)))), 9))) <= g_95) >= 0x7642676EL);
    (*g_119) = (*g_119);
    return g_46[0];
}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_33.f0, "g_33.f0", print_hash_value);
    transparent_crc(g_33.f1, "g_33.f1", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_40[i], "g_40[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_46[i], "g_46[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_123.f0, "g_123.f0", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_206.f0, "g_206.f0", print_hash_value);
    transparent_crc(g_206.f1, "g_206.f1", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_313, "g_313", print_hash_value);
    transparent_crc(g_387, "g_387", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
