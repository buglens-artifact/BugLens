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
   volatile unsigned f0 : 28;
   signed f1 : 1;
   const unsigned f2 : 31;
};

struct S1 {
   signed f0 : 22;
   signed f1 : 17;
   const signed f2 : 11;
   unsigned f3 : 20;
   signed f4 : 8;
   unsigned f5;
   unsigned f6 : 26;
};

union U2 {
   char f0;
   int f1;
   const unsigned short f2;
};

union U3 {
   volatile char * f0;
   unsigned f1;
   unsigned short f2;
};


static char g_7 = 3L;
static int g_9 = 0x7F1A969AL;
static struct S0 g_11 = {855,-0,26137};
static char **g_41 = (void*)0;
static struct S1 g_45 = {-1141,335,2,131,12,0xBDAB6AC3L,4537};
static int g_49 = 9L;
static int g_68 = 0xEAC691C6L;
static int * volatile g_67 = &g_68;
static unsigned g_77 = 0x0AA4AECAL;
static char g_113 = 0x6BL;
static unsigned short g_116 = 0x626DL;
static int *g_125 = (void*)0;
static int ** const volatile g_124 = &g_125;
static int g_126 = (-4L);
static unsigned char g_135 = 0x38L;
static unsigned short g_136 = 1UL;
static int * volatile g_137 = &g_9;
static struct S0 *g_161 = &g_11;
static struct S0 **g_160 = &g_161;
static int * volatile g_162 = &g_9;
static unsigned g_169 = 0x5247B03FL;
static int g_211 = 4L;
static short g_217 = 0x55A1L;
static union U3 g_221 = {0};
static int ** volatile g_225 = &g_125;
static short g_246 = 0x3B7BL;
static const volatile int g_281 = 0xF4A9CFADL;
static struct S0 **g_312 = &g_161;
static unsigned g_338 = 4294967290UL;
static unsigned char * volatile g_346 = (void*)0;
static unsigned char * volatile *g_345 = &g_346;
static int * const volatile g_347 = &g_211;
static union U2 g_348 = {0x9BL};
static int g_351 = 5L;
static const int *g_350 = &g_351;
static struct S1 *g_380 = &g_45;
static struct S1 * volatile * volatile g_379 = &g_380;
static int * volatile g_414 = &g_68;
static short *g_423 = &g_246;
static short **g_422 = &g_423;
static int ** volatile g_429 = &g_125;
static struct S0 g_436 = {8655,0,2562};
static struct S0 * const *g_444 = &g_161;
static struct S0 * const ** volatile g_443 = &g_444;
static int * volatile g_470 = &g_351;
static struct S0 g_478 = {8246,0,34197};



static unsigned func_1(void);
static struct S0 * func_2(int p_3, char * const p_4);
static short func_16(struct S0 * p_17, char * p_18, union U2 p_19, const union U2 p_20, union U2 p_21);
static char * const func_22(int p_23, int * p_24, const int * p_25, short p_26);
static unsigned short func_27(unsigned p_28, struct S0 * const p_29, int p_30, unsigned short p_31, const int * p_32);
static union U2 func_37(struct S0 * p_38, char ** p_39, char * p_40);
static char * func_42(struct S1 p_43, struct S0 ** p_44);
static struct S0 ** func_46(struct S0 * p_47);
static char func_54(union U3 p_55);
static const unsigned short func_61(unsigned short p_62, char p_63, unsigned p_64);
static unsigned func_1(void)
{
    int l_5 = 0xE21AFA9BL;
    char * const l_6 = &g_7;
    struct S0 *l_13 = &g_11;
    struct S0 **l_12 = &l_13;
    char *l_36 = &g_7;
    char **l_35 = &l_36;
    int *l_48 = &g_49;
    struct S0 *l_51 = &g_11;
    struct S0 **l_50 = &l_51;
    unsigned *l_349 = &g_221.f1;
    char *l_402 = (void*)0;
    const union U2 l_403 = {-1L};
    int l_469 = 0x5E5EA0DFL;
    struct S0 *l_476 = &g_436;
    (*l_12) = func_2(l_5, l_6);
    if (((((safe_lshift_func_int16_t_s_s(func_16(func_2(g_11.f1, func_22((0xEAE2L <= func_27(((*l_349) = (safe_mod_func_int8_t_s_s((&g_7 != (l_5 , ((*l_35) = (void*)0))), ((func_37((*l_12), g_41, func_42(g_45, func_46(((*l_50) = func_2(((*l_48) = (((l_5 < g_9) <= 255UL) ^ 7UL)), l_6))))) , (-1L)) | 4294967289UL)))), g_161, l_5, g_348.f0, g_350)), &l_5, &l_5, g_45.f2)), l_402, g_348, l_403, g_348), l_403.f0)) >= 5L) && 0xE461L) && 0xDA2793B3L))
    {
        int *l_415 = (void*)0;
        int *l_416 = &g_68;
        int *l_417 = &g_126;
        char * const l_420 = (void*)0;
        short **l_421 = (void*)0;
        (*l_417) = ((*l_416) = ((**g_379) , (*g_350)));
        (*l_12) = func_2((safe_rshift_func_uint16_t_u_s((g_221.f2 = ((l_403.f0 <= ((*l_417) , g_126)) >= func_54(g_221))), 13)), l_420);
        g_422 = l_421;
        g_11.f1 &= (*g_347);
    }
    else
    {
        struct S0 * const *l_442 = &l_13;
        int l_454 = 1L;
        unsigned short *l_461 = (void*)0;
        unsigned short *l_462 = (void*)0;
        unsigned short *l_463 = &g_221.f2;
        unsigned short *l_467 = &g_136;
        int **l_468 = &g_125;
        for (g_45.f5 = 0; (g_45.f5 > 21); g_45.f5++)
        {
            int *l_451 = &l_5;
            for (g_211 = 16; (g_211 != 23); ++g_211)
            {
                int **l_428 = (void*)0;
                unsigned short *l_439 = &g_221.f2;
                unsigned short l_440 = 0xE751L;
                int *l_441 = &g_68;
                (*g_429) = (*g_225);
                for (g_169 = (-11); (g_169 != 5); g_169 = safe_add_func_int32_t_s_s(g_169, 8))
                {
                    unsigned char l_432 = 255UL;
                    int l_433 = 0x9924834AL;
                    if (l_432)
                        break;
                    l_433 ^= (-4L);
                }
                (*l_441) = ((safe_add_func_int16_t_s_s(((g_436 , (safe_mod_func_uint8_t_u_u(g_126, ((&g_423 != (((*l_439) = g_7) , (void*)0)) & (g_45.f5 || (*g_350)))))) , (0x46L | l_440)), 0x41C2L)) ^ (*g_350));
                (*g_443) = (((void*)0 != &l_428) , l_442);
            }
            for (l_5 = 0; (l_5 > (-13)); l_5--)
            {
                int *l_447 = &g_68;
                int **l_448 = &g_125;
                (*l_448) = l_447;
                (**l_448) ^= l_403.f0;
                (*l_448) = (*l_448);
                (*l_448) = (*l_448);
            }
            (*l_451) = (safe_rshift_func_uint8_t_u_s((!0UL), 4));
        }
        (*l_468) = ((((0x43E5L ^ ((safe_add_func_uint16_t_u_u(((*l_463) = (l_454 ^ ((~(safe_sub_func_uint16_t_u_u(g_169, l_403.f0))) < (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((*l_6) = func_54(g_221)), 7)), l_454))))), ((*l_467) = (safe_lshift_func_uint16_t_u_s(((safe_unary_minus_func_uint32_t_u(((*g_380) , ((*g_350) || (*g_350))))) , g_45.f3), (**g_422)))))) == g_211)) && l_403.f0) , 0UL) , &l_5);
    }
    (*g_470) |= l_469;
    for (g_113 = 0; (g_113 >= (-15)); --g_113)
    {
        for (g_348.f1 = 0; (g_348.f1 != (-26)); g_348.f1--)
        {
            int *l_475 = &g_126;
            struct S0 *l_477 = &g_478;
            (*l_475) = 0x78976597L;
            (*l_475) = ((*g_423) | ((*g_429) != (void*)0));
            l_477 = l_476;
        }
    }
    return g_281;
}







static struct S0 * func_2(int p_3, char * const p_4)
{
    int *l_8 = &g_9;
    struct S0 *l_10 = &g_11;
    (*l_8) &= 0x267E6AA1L;
    return l_10;
}







static short func_16(struct S0 * p_17, char * p_18, union U2 p_19, const union U2 p_20, union U2 p_21)
{
    int **l_404 = &g_125;
    const unsigned l_407 = 1UL;
    struct S0 * const l_408 = &g_11;
    struct S0 **l_409 = &g_161;
    (*l_404) = (void*)0;
    (*g_414) &= (g_126 <= ((safe_sub_func_uint8_t_u_u((g_126 & p_19.f0), p_19.f0)) == l_407));
    return g_348.f0;
}







static char * const func_22(int p_23, int * p_24, const int * p_25, short p_26)
{
    struct S1 *l_376 = &g_45;
    struct S1 **l_377 = &l_376;
    int l_378 = 0L;
    short l_384 = 1L;
    struct S0 *l_386 = (void*)0;
    unsigned l_396 = 4294967294UL;
    unsigned char *l_401 = &g_135;
    unsigned char **l_400 = &l_401;
    (*l_377) = l_376;
    (*p_24) = (+(l_378 > (g_379 == &l_376)));
    for (g_45.f5 = 0; (g_45.f5 > 10); g_45.f5 = safe_add_func_uint32_t_u_u(g_45.f5, 5))
    {
        int **l_383 = &g_125;
        struct S0 * const l_385 = &g_11;
        union U3 l_395 = {0};
        unsigned *l_397 = &g_221.f1;
        struct S1 l_398 = {-848,75,-44,115,-0,0UL,2220};
        unsigned short *l_399 = &g_221.f2;
        (*l_383) = &l_378;
        (*l_383) = p_24;
        if ((((((func_27(l_384, (l_386 = l_385), ((*p_24) = ((safe_mod_func_uint16_t_u_u(((*l_399) = ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(l_378, func_27(((*l_397) = ((safe_mod_func_int8_t_s_s(func_54(l_395), 7L)) != l_396)), l_385, (l_398 , (*p_25)), l_384, p_25))), l_396)) <= l_378)), (-1L))) != 0x7AL)), g_11.f2, &g_126) && g_45.f4) < p_26) , l_400) != (void*)0) >= g_136))
        {
            (*l_383) = (*g_124);
        }
        else
        {
            (*l_383) = (*g_225);
        }
    }
    (*p_24) = ((l_378 || 0x79L) || l_396);
    return l_401;
}







static unsigned short func_27(unsigned p_28, struct S0 * const p_29, int p_30, unsigned short p_31, const int * p_32)
{
    int l_354 = 5L;
    union U3 l_369 = {0};
    for (g_246 = 0; (g_246 >= (-19)); g_246 = safe_sub_func_int16_t_s_s(g_246, 7))
    {
        union U3 l_355 = {0};
        int *l_356 = &g_351;
        unsigned char *l_359 = (void*)0;
        struct S1 l_360 = {55,82,35,871,15,0x8E7C1B22L,2985};
        struct S0 **l_361 = &g_161;
        unsigned char **l_362 = (void*)0;
        unsigned char *l_364 = (void*)0;
        unsigned char **l_363 = &l_364;
        unsigned *l_367 = (void*)0;
        unsigned *l_368 = &g_169;
        unsigned l_370 = 9UL;
        int *l_371 = (void*)0;
        int *l_372 = &l_354;
        (*l_356) ^= (l_354 & func_54(l_355));
        g_45.f1 ^= (safe_sub_func_int16_t_s_s(1L, (((((*l_368) = ((l_359 != ((*l_363) = func_42(l_360, l_361))) > (safe_add_func_int32_t_s_s(((*l_356) = (*p_32)), ((p_28 >= g_11.f1) < ((!l_354) != l_354)))))) , &p_31) == (void*)0) & g_246)));
        (*l_372) = (((p_30 > ((func_54(l_369) <= 4294967292UL) || (*g_347))) && ((*l_356) = l_370)) > l_354);
        (*l_356) ^= (safe_lshift_func_int16_t_s_s((l_354 < (safe_unary_minus_func_int8_t_s(0x75L))), 2));
    }
    return l_354;
}







static union U2 func_37(struct S0 * p_38, char ** p_39, char * p_40)
{
    short l_344 = 0L;
    (*g_347) = ((func_54((l_344 , g_221)) | 0xB4L) ^ (l_344 > ((((void*)0 != g_345) , 4L) | (l_344 , g_217))));
    return g_348;
}







static char * func_42(struct S1 p_43, struct S0 ** p_44)
{
    unsigned char l_341 = 255UL;
    int *l_342 = &g_68;
    char *l_343 = &g_7;
    (*g_67) = l_341;
    (*l_342) = 9L;
    return l_343;
}







static struct S0 ** func_46(struct S0 * p_47)
{
    union U3 l_56 = {0};
    int l_128 = 0xD83CB06CL;
    unsigned short *l_133 = &g_116;
    unsigned char *l_134 = &g_135;
    int l_138 = 0L;
    struct S0 *l_159 = (void*)0;
    struct S0 **l_158 = &l_159;
    int *l_171 = &g_68;
    unsigned short l_214 = 6UL;
    struct S1 l_220 = {-1964,108,-32,776,-6,0UL,2469};
    unsigned *l_261 = (void*)0;
    unsigned **l_260 = &l_261;
    int **l_285 = &l_171;
    int *l_286 = &g_211;
    int l_289 = 1L;
    struct S0 **l_339 = &l_159;
    struct S0 **l_340 = &l_159;
    (*g_137) = ((safe_sub_func_int8_t_s_s(func_54(l_56), (0x1FC1L & g_45.f6))) && ((g_136 ^= (((*l_134) = func_61(l_128, g_45.f1, (safe_sub_func_uint16_t_u_u(((*l_133) = (safe_lshift_func_uint16_t_u_u(l_128, g_45.f6))), (g_11.f0 >= 0x87D0L))))) >= l_128)) | l_128));
    if (l_138)
    {
        int l_139 = 0x291C4591L;
        int *l_140 = &g_68;
        union U3 l_143 = {0};
        unsigned *l_152 = &l_56.f1;
        char *l_157 = &g_7;
        (*l_140) |= l_139;
        (*l_140) = (safe_sub_func_int16_t_s_s(((*l_140) >= ((*l_157) = (((*l_140) < ((*l_134) |= (l_143 , (safe_add_func_uint8_t_u_u(l_128, (safe_rshift_func_uint8_t_u_u((!(safe_lshift_func_int16_t_s_u((-1L), 6))), 2))))))) ^ ((safe_sub_func_uint32_t_u_u((*l_140), (+((((*l_152) = (*l_140)) , (safe_mod_func_uint32_t_u_u((g_11 , (safe_rshift_func_int8_t_s_s((*l_140), (*l_140)))), l_128))) || (*l_140))))) == (*l_140))))), l_128));
    }
    else
    {
        return g_160;
    }
    (*g_162) &= (g_45.f4 ^ (g_116 |= l_128));
    if ((!l_138))
    {
        unsigned l_165 = 3UL;
        union U2 l_167 = {1L};
        unsigned *l_168 = &g_169;
        int *l_170 = (void*)0;
        int *l_190 = (void*)0;
        int l_191 = 1L;
        unsigned l_192 = 0UL;
        int *l_193 = &g_126;
        unsigned l_194 = 0x1E324BC1L;
        union U3 l_207 = {0};
        unsigned char *l_209 = &g_135;
        int l_210 = (-6L);
        unsigned l_282 = 0x6F9CE4C8L;
        struct S1 l_290 = {-1708,-70,-27,846,15,0xE5059A09L,1295};
        const short * const l_293 = &g_246;
        struct S0 **l_305 = &g_161;
        l_128 = ((((*p_47) , (safe_add_func_int16_t_s_s((-1L), func_61(g_135, l_165, ((*l_168) = (safe_unary_minus_func_uint32_t_u(func_61(g_45.f0, l_165, ((l_167 , 4294967289UL) ^ l_165))))))))) > 0xF64895FDL) ^ l_128);
        l_171 = (*g_124);
        (*l_193) = (safe_sub_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(((*p_47) , g_11.f2), (l_191 = (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u((g_116 == (g_45.f3 == l_138)), ((*g_160) == (void*)0))), 3)), (safe_mod_func_uint16_t_u_u(((~(g_49 ^= l_138)) , (l_167.f0 <= l_138)), g_116)))), l_56.f2))))), 4)) , 6UL), 1UL)) & l_192), (-7L)));
        if (func_61((*l_193), l_194, l_56.f2))
        {
            int *l_195 = &l_191;
            char *l_253 = &l_167.f0;
            char l_262 = 0xB5L;
            if ((*g_67))
            {
                unsigned short l_196 = 0x22D8L;
                union U3 l_199 = {0};
                (*g_124) = l_195;
                (*g_125) = (g_45.f1 <= (func_61(g_45.f3, g_126, func_61(l_196, (*l_193), (safe_lshift_func_int16_t_s_s((((*l_195) = 0x284FL) != l_196), 14)))) > l_196));
                (*l_195) = func_54(l_199);
            }
            else
            {
                unsigned *l_206 = &g_77;
                unsigned char **l_208 = &l_134;
                int l_215 = 0x3B482F0BL;
                int l_219 = 0x5F9AD4D9L;
                unsigned short *l_276 = &g_221.f2;
                int **l_284 = &g_125;
                int ***l_283 = &l_284;
                if ((safe_rshift_func_int16_t_s_u(((((((g_11.f2 & (safe_add_func_uint32_t_u_u(((*l_206) = (*l_195)), g_136))) || (func_54(l_207) >= g_11.f2)) || (0x1EL >= (((+((((*l_208) = l_134) != l_209) , l_210)) & (-5L)) , l_56.f1))) >= 0x11A8L) < (*l_195)) >= (*l_193)), g_211)))
                {
                    unsigned l_218 = 4294967291UL;
                    int *l_235 = &g_211;
                    int **l_236 = &l_193;
                    if ((*g_137))
                    {
                        short *l_216 = &g_217;
                        (*l_195) ^= (((*l_193) = (*g_162)) ^ (((g_9 , 0x73CE1473L) > (g_113 <= (((((*l_133) = l_214) == 0x6FCEL) != ((*l_216) = l_215)) < l_218))) | ((((*l_209) = l_215) | l_219) == 7UL)));
                        (*l_193) |= ((l_220 , (0UL && l_56.f2)) == (!g_211));
                    }
                    else
                    {
                        (*l_195) &= func_54(g_221);
                    }
                    for (l_128 = (-11); (l_128 > 24); l_128++)
                    {
                        int *l_224 = &g_211;
                        (*g_225) = l_224;
                        return &g_161;
                    }
                    for (l_210 = 0; (l_210 >= 24); l_210 = safe_add_func_uint32_t_u_u(l_210, 6))
                    {
                        const int l_228 = (-1L);
                        unsigned short l_229 = 3UL;
                        int **l_230 = (void*)0;
                        int **l_231 = (void*)0;
                        int **l_232 = (void*)0;
                    }
                    (*l_236) = l_235;
                }
                else
                {
                    unsigned short l_241 = 0xC7DEL;
                    char *l_242 = (void*)0;
                    char *l_243 = &g_113;
                    short *l_244 = (void*)0;
                    short *l_245 = &g_246;
                    unsigned *l_251 = (void*)0;
                    unsigned *l_252 = &l_192;
                    (*l_195) ^= (safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((0L == g_217), (((-9L) > (l_241 <= ((*l_206) = 4294967295UL))) ^ ((*l_243) ^= (g_7 == l_241))))), ((*l_245) = g_49)));
                    l_210 ^= (~(safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(func_54(l_56), (((l_215 &= ((*l_252) = l_241)) , (l_253 != (void*)0)) && ((l_241 <= l_215) > (safe_mod_func_uint8_t_u_u(((!l_215) > (((((safe_rshift_func_int16_t_s_u(((*l_245) ^= l_219), g_45.f6)) && g_217) < (*l_195)) >= (*l_195)) > (*l_195))), g_45.f5)))))), 4)));
                    if ((*l_195))
                    {
                        struct S0 **l_258 = (void*)0;
                        return l_258;
                    }
                    else
                    {
                        unsigned short l_259 = 65535UL;
                        (*l_193) ^= l_259;
                        l_260 = &l_168;
                        (*l_193) = (((*l_209) = g_7) || (l_219 , l_262));
                        return &g_161;
                    }
                }
                (*l_195) = (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_int16_t_s((((*l_253) = (safe_add_func_uint16_t_u_u(((*l_133) ^= (safe_mod_func_int32_t_s_s(((*l_195) , l_219), ((*l_206) = 4294967288UL)))), (((*l_195) || (safe_sub_func_uint16_t_u_u(((*l_276) = g_45.f2), l_219))) >= ((safe_rshift_func_uint8_t_u_u(g_7, 5)) && l_219))))) > ((*l_193) |= ((safe_sub_func_uint8_t_u_u(((*l_134) = g_7), l_215)) && g_281))))), g_11.f2)), 4)), l_282));
                l_285 = ((*l_283) = &g_125);
                (**l_283) = l_286;
            }
            (*l_286) = (*l_193);
            (*l_195) &= (((safe_sub_func_uint8_t_u_u(l_289, g_11.f2)) , &l_209) == (l_290 , &l_209));
        }
        else
        {
            unsigned char *l_291 = &g_135;
            int l_294 = (-1L);
            int **l_297 = &l_190;
            unsigned l_302 = 0UL;
            if ((l_291 != &g_135))
            {
                int l_292 = (-1L);
                int ***l_298 = &l_297;
                (*l_193) = l_292;
                (*l_286) ^= (g_45.f2 || (((l_293 == (((l_292 = (l_294 , (safe_lshift_func_int8_t_s_s((*l_193), 5)))) >= func_54(l_207)) , (void*)0)) , ((*l_291) = g_45.f5)) >= l_294));
                (*l_298) = l_297;
            }
            else
            {
                unsigned char l_308 = 0x86L;
                struct S0 ***l_309 = (void*)0;
                struct S0 ***l_310 = &g_160;
                struct S0 ***l_311 = &l_305;
                short *l_315 = (void*)0;
                for (g_217 = 0; (g_217 <= (-30)); g_217 = safe_sub_func_int32_t_s_s(g_217, 4))
                {
                    int l_301 = 1L;
                    if (l_294)
                    {
                        (*l_286) = 1L;
                        l_302 &= l_301;
                    }
                    else
                    {
                        (*l_193) &= ((safe_rshift_func_uint16_t_u_u(((*l_133) = 1UL), 12)) & l_301);
                        return l_305;
                    }
                    (*l_285) = &l_294;
                    if ((**l_285))
                        continue;
                }
                if (((0x9F62L ^ (safe_lshift_func_uint16_t_u_s(l_308, 5))) || ((l_308 || g_113) > ((((*l_311) = ((*l_310) = &p_47)) != (g_312 = &p_47)) > g_246))))
                {
                    return &g_161;
                }
                else
                {
                    (*l_193) &= 0x23A12515L;
                    (*l_286) &= ((*l_193) = (*l_193));
                }
                (*l_286) = (safe_sub_func_uint16_t_u_u((l_308 || l_308), ((*l_193) = (-3L))));
            }
        }
    }
    else
    {
        int *l_316 = &g_68;
        unsigned *l_323 = (void*)0;
        unsigned *l_324 = &g_77;
        unsigned short *l_325 = (void*)0;
        unsigned short *l_326 = &g_221.f2;
        int *l_327 = &l_128;
        (*l_285) = l_316;
        (*l_327) ^= ((safe_lshift_func_uint8_t_u_s(((*l_134) = (*l_286)), 2)) || (!((*l_316) ^ ((*l_316) != ((*l_326) = ((l_56 , (*l_316)) > ((**l_285) || ((*l_133) |= (safe_mod_func_uint8_t_u_u((*l_316), ((((((*l_324) |= (0UL | (((safe_lshift_func_uint8_t_u_u(((((*g_124) = ((*l_285) = l_316)) == l_316) >= (*l_286)), 4)) > 0x7DA0L) , g_169))) , 0x41CBL) , g_45.f5) && g_7) | 0L)))))))))));
        (*l_316) = (safe_sub_func_int16_t_s_s((l_56 , (l_56 , 0L)), ((*l_326) = ((*l_133) = (((((*l_171) ^ ((*l_327) > (**l_285))) , g_45.f1) == (((safe_sub_func_uint8_t_u_u((g_135 = (0x5DDE9F33L != (((safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((g_126 & 6L), 14)), (*l_327))), (*l_316))) && 0xD7DEL) | g_45.f4))), (*l_286))) != g_49) >= g_338)) < (*l_286))))));
    }
    return &g_161;
}







static char func_54(union U3 p_55)
{
    char l_65 = 0x66L;
    char *l_122 = (void*)0;
    char **l_121 = &l_122;
    int *l_123 = &g_68;
    if ((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(func_61(l_65, l_65, l_65), (g_49 | (g_11.f1 ^ l_65)))), (safe_sub_func_uint32_t_u_u(g_49, (p_55.f1 = (safe_rshift_func_int8_t_s_s(((void*)0 != l_121), 7))))))))
    {
        (*g_124) = l_123;
        (*l_123) = g_126;
    }
    else
    {
        char *l_127 = &l_65;
        (*l_123) |= ((g_11 , l_127) == l_127);
    }
    return (*l_123);
}







static const unsigned short func_61(unsigned short p_62, char p_63, unsigned p_64)
{
    int *l_66 = &g_9;
    int *l_73 = &g_68;
    int **l_72 = &l_73;
    const int *l_75 = (void*)0;
    const int **l_74 = &l_75;
    unsigned *l_76 = &g_77;
    int l_80 = 8L;
    struct S1 l_99 = {548,-50,-22,266,-2,0x7682755FL,5596};
    int *l_106 = &g_9;
    unsigned l_109 = 18446744073709551611UL;
    (*g_67) = ((*l_66) = g_11.f1);
    (*l_66) = (p_64 | (g_45.f3 >= ((safe_lshift_func_int8_t_s_s(((*l_66) ^ (*l_66)), 6)) > ((*l_76) = (safe_unary_minus_func_int32_t_s(((((*l_72) = (void*)0) != ((*l_74) = &g_68)) | p_64)))))));
    if (((*l_66) = (safe_lshift_func_int8_t_s_u((p_63 && l_80), (0x7332L ^ (*l_66))))))
    {
        int l_89 = 0xD7C6C5FBL;
        int *l_105 = &l_80;
        for (p_63 = 1; (p_63 != (-9)); --p_63)
        {
            char *l_98 = (void*)0;
            int l_100 = 1L;
            if ((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u(((0xC65F31FDL <= ((*l_76) |= ((safe_mod_func_int32_t_s_s((*g_67), p_63)) > (p_64 <= l_89)))) , ((safe_mod_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((0xDA5D7A23L & ((safe_add_func_int32_t_s_s(((((safe_add_func_uint8_t_u_u((0xCCL >= (*l_75)), ((l_98 = &p_63) != &p_63))) , l_99) , l_89) == 0x22E00644L), (*g_67))) | g_45.f5)), 0xBBL)) , l_100), l_100)) , 0UL)), l_89)), p_64)))
            {
                (*l_66) = (*g_67);
                (*l_66) &= l_89;
            }
            else
            {
                (*l_66) = (-1L);
                (*g_67) = (*g_67);
            }
            (*l_72) = &g_9;
        }
        g_9 ^= (safe_rshift_func_uint16_t_u_s(((g_77 = (((*g_67) = p_64) > (((p_63 ^ p_64) , &l_80) == l_105))) || ((void*)0 != &g_11)), 9));
        (*l_72) = (g_45.f0 , l_106);
    }
    else
    {
        short l_110 = 1L;
        char *l_114 = &g_7;
        unsigned short *l_115 = &g_116;
        (*l_106) = (*g_67);
        (*g_67) = p_62;
        (*g_67) = (((*l_115) = (((*l_114) = (((safe_add_func_int8_t_s_s((((**l_74) , l_109) < (p_63 , (l_110 | ((safe_add_func_uint32_t_u_u(((g_113 = (p_62 < g_49)) | g_49), l_110)) && (~p_63))))), p_64)) , g_7) , g_45.f4)) != p_64)) && 0xC2FEL);
    }
    (*l_72) = &g_68;
    return (*l_73);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_11.f0, "g_11.f0", print_hash_value);
    transparent_crc(g_11.f1, "g_11.f1", print_hash_value);
    transparent_crc(g_11.f2, "g_11.f2", print_hash_value);
    transparent_crc(g_45.f0, "g_45.f0", print_hash_value);
    transparent_crc(g_45.f1, "g_45.f1", print_hash_value);
    transparent_crc(g_45.f2, "g_45.f2", print_hash_value);
    transparent_crc(g_45.f3, "g_45.f3", print_hash_value);
    transparent_crc(g_45.f4, "g_45.f4", print_hash_value);
    transparent_crc(g_45.f5, "g_45.f5", print_hash_value);
    transparent_crc(g_45.f6, "g_45.f6", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    transparent_crc(g_221.f2, "g_221.f2", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_348.f0, "g_348.f0", print_hash_value);
    transparent_crc(g_351, "g_351", print_hash_value);
    transparent_crc(g_436.f0, "g_436.f0", print_hash_value);
    transparent_crc(g_436.f1, "g_436.f1", print_hash_value);
    transparent_crc(g_436.f2, "g_436.f2", print_hash_value);
    transparent_crc(g_478.f0, "g_478.f0", print_hash_value);
    transparent_crc(g_478.f1, "g_478.f1", print_hash_value);
    transparent_crc(g_478.f2, "g_478.f2", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
