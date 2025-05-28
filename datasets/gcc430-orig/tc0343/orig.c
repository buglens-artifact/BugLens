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


union U0 {
   int f0;
   const char * const f1;
   char f2;
   const unsigned f3;
   int f4;
};

union U1 {
   int f0;
};

union U2 {
   unsigned f0;
   unsigned short f1;
   char * f2;
   short f3;
};


static int g_8 = 0x7412DF3DL;
static const int *g_7 = &g_8;
static char g_22 = 0x25L;
static char *g_21 = &g_22;
static int **g_46 = (void*)0;
static union U1 g_69 = {-7L};
static unsigned char g_103 = 0xB8L;
static char g_137 = 5L;
static const union U1 *g_172 = &g_69;
static const union U1 **g_171 = &g_172;
static int g_191 = 0xB43D5122L;
static int *g_190 = &g_191;
static unsigned short g_209 = 1UL;
static short g_220 = 4L;
static short g_223 = 0x47DCL;
static char g_225 = 0L;
static union U2 g_252 = {0x4F50E07BL};
static int g_267 = 0x307FEAA8L;
static int *g_266 = &g_267;
static unsigned short g_296 = 7UL;
static char g_311 = 0x65L;
static union U0 g_316 = {-1L};
static union U0 *g_315 = &g_316;
static unsigned g_328 = 0xB4E28337L;
static unsigned *g_341 = &g_328;
static unsigned **g_340 = &g_341;
static char *g_347 = (void*)0;
static unsigned g_367 = 0x14374FFDL;
static union U1 *g_372 = &g_69;
static union U1 **g_371 = &g_372;
static unsigned g_478 = 0x0BCD4C30L;
static char g_499 = 1L;
static char * const *g_555 = &g_21;
static unsigned g_580 = 0xF974E3EAL;
static short *g_599 = &g_252.f3;
static short **g_598 = &g_599;
static unsigned char g_613 = 0x94L;
static char g_619 = 8L;
static const union U0 g_642 = {0xF4600CD0L};
static union U0 g_647 = {0x943D947FL};
static union U2 *g_669 = &g_252;
static union U2 **g_668 = &g_669;
static char **g_772 = &g_347;
static char ***g_771 = &g_772;
static unsigned g_848 = 0xDC5E318CL;
static unsigned short g_897 = 0x96E5L;
static int *g_915 = &g_647.f4;
static int *g_920 = (void*)0;
static int **g_919 = &g_920;



static unsigned char func_1(void);
static int * func_2(const int * p_3, const char * p_4, int * p_5, unsigned short p_6);
static const char * func_9(int * p_10, int * p_11);
static int * func_13(int * p_14, union U2 p_15, char * p_16, int p_17);
static const char func_29(unsigned char p_30, int ** p_31, union U1 p_32, int p_33, int * p_34);
static int ** func_35(int * p_36, const unsigned char p_37, int * p_38, const union U2 p_39);
static int * func_40(unsigned p_41, unsigned short p_42, int ** p_43, const unsigned p_44);
static int func_47(char * p_48, const int p_49, union U0 p_50);
static char * func_51(int * p_52, char p_53, int p_54, union U1 * const p_55);
static int * func_56(unsigned char p_57, union U2 p_58, int * p_59, union U1 * p_60);
static unsigned char func_1(void)
{
    int *l_12 = &g_8;
    int *l_19 = &g_8;
    int **l_18 = &l_19;
    union U2 l_20 = {0x37855514L};
    const union U0 l_27 = {1L};
    unsigned char l_28 = 0x47L;
    char *l_45 = (void*)0;
    (*l_18) = func_2(g_7, func_9(l_12, func_13(((*l_18) = &g_8), l_20, g_21, (safe_sub_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_u(((l_27 , (l_28 > func_29(g_22, func_35(func_40((l_45 == l_45), g_22, g_46, (*l_12)), g_69.f0, g_266, l_20), g_69, (*g_266), &g_267))) && 0UL), g_69.f0)) , g_103) , (*l_12)), g_69.f0)))), g_915, g_296);

    ;



    ;

    ;


        ;

    (*l_18) = (*l_18);
    return g_642.f2;
}







static int * func_2(const int * p_3, const char * p_4, int * p_5, unsigned short p_6)
{
    int *l_917 = (void*)0;
    int **l_916 = &l_917;
    int ***l_918 = &l_916;
    int l_921 = 0xCE8B3AFCL;
    int l_922 = 0x3F0DD86AL;
    union U2 *l_925 = &g_252;
    char l_926 = 0xEDL;
    int **l_927 = &g_915;
    int *l_928 = &l_922;
    unsigned char *l_936 = &g_103;
    int ***l_937 = &g_46;
    union U1 l_938 = {1L};
    int *l_939 = (void*)0;
    int *l_940 = (void*)0;
    int *l_941 = &g_267;
    g_919 = ((*l_918) = l_916);

    ;
    l_928 = (*l_927);

    ;
    (*g_668) = (*g_668);
    (*l_941) = ((*g_915) = (*g_7));

    return &g_267;



}







static const char * func_9(int * p_10, int * p_11)
{
    unsigned short *l_276 = &g_252.f1;
    unsigned short **l_275 = &l_276;
    int l_278 = 0x23E7098FL;
    union U1 l_282 = {-1L};
    char *l_294 = &g_225;
    unsigned *l_339 = (void*)0;
    unsigned **l_338 = &l_339;
    union U1 *l_370 = &l_282;
    union U1 **l_369 = &l_370;
    union U0 *l_393 = (void*)0;
    int l_424 = 0xD9703391L;
    int * const *l_486 = &g_190;
    int **l_503 = (void*)0;
    char *l_523 = &g_499;
    int l_533 = 1L;
    union U2 l_542 = {0x3EE27A5AL};
    int *l_554 = &l_533;
    const int *l_560 = &l_278;
    const unsigned l_645 = 4294967295UL;
    unsigned l_649 = 18446744073709551612UL;
    union U1 l_796 = {-1L};
    union U1 *l_821 = &l_796;
    short l_840 = 0x69A1L;
    char l_856 = (-1L);
    unsigned l_888 = 7UL;
    const char *l_914 = (void*)0;
    l_275 = (void*)0;

    ;
    if (((void*)0 != l_276))
    {
        const union U1 l_277 = {-1L};
        int l_279 = 0x46917934L;
        short *l_283 = (void*)0;
        short *l_284 = &g_223;
        union U1 *l_286 = &g_69;
        union U1 **l_285 = &l_286;
        int **l_291 = &g_190;
        char *l_323 = &g_225;
        union U0 l_326 = {1L};
        int **l_331 = &g_266;
        union U0 **l_489 = (void*)0;
        short l_498 = (-5L);
        char l_507 = (-6L);
        int *l_510 = &g_267;
        union U2 l_522 = {0UL};
        int l_534 = 6L;
        int *l_541 = &l_278;
        unsigned l_593 = 18446744073709551606UL;
        unsigned **l_648 = &g_341;
        if ((l_277 , (((*p_10) = ((*g_266) = (((*l_276) = (g_191 & ((*l_284) = ((l_277.f0 < (l_279 = l_278)) >= (((g_252 , (l_277.f0 == ((l_278 != 8UL) != l_277.f0))) != (-4L)) , 0x21L))))) & l_278))) , (*p_10))))
        {
            union U1 l_292 = {0x2001A86CL};
            int *l_293 = &g_191;
            union U0 l_295 = {3L};
            unsigned char *l_299 = (void*)0;
            union U1 l_300 = {3L};
            short *l_319 = &g_252.f3;
            union U1 **l_373 = &l_370;
            union U2 l_384 = {8UL};
            char *l_411 = &g_22;
            int l_441 = 1L;
            int l_464 = 0xF3E0EEA0L;
            union U2 *l_509 = &g_252;
            int **l_540 = &g_266;
            unsigned char *l_543 = &g_103;
            union U2 *l_544 = &g_252;
            char **l_545 = &l_523;
            if ((l_285 == (void*)0))
            {
                unsigned l_297 = 7UL;
                union U1 * const l_298 = &l_282;
                unsigned char *l_312 = &g_103;
                (*p_10) = (safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(g_252.f1, g_220)), l_282.f0));
                (*g_266) = (((*p_10) = (l_297 > (g_296 , 1UL))) , (((l_300 , (safe_sub_func_uint8_t_u_u(((((0L | (safe_sub_func_int16_t_s_s(1L, ((*l_276) = ((((safe_lshift_func_uint8_t_u_s(((*l_312) = (safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((((func_29(l_297, &p_11, l_282, (*g_7), &g_191) >= (*g_21)) , l_278) < 0xC4L) | 0L), g_311)), l_297))), (*g_21))) , (*l_293)) >= l_278) >= (*g_21)))))) && g_223) && 0x0AL) && 0x31C9L), l_292.f0))) & (*g_21)) < (*p_10)));
                for (g_137 = 0; (g_137 < (-3)); g_137--)
                {
                    union U0 **l_317 = &g_315;
                    (*l_317) = g_315;
                }
            }
            else
            {
                int **l_318 = &g_190;
                int l_320 = 3L;
                short *l_336 = &g_252.f3;
                union U2 l_350 = {0xF2D2754FL};
                union U0 *l_392 = &l_326;
                unsigned l_417 = 4294967291UL;
                const char *l_421 = &l_326.f2;
                p_11 = ((*l_291) = p_11);
                (*l_293) = (l_283 == l_319);
                (*p_10) = l_320;
                if ((*g_266))
                {
                    unsigned l_324 = 4UL;
                    int *l_325 = &g_8;
                    unsigned *l_327 = &g_328;
                    union U0 l_357 = {0xFE89841CL};
                    unsigned l_358 = 0UL;
                    int l_368 = 0x17A0F061L;
                    if ((g_137 , ((*p_10) = (safe_sub_func_uint32_t_u_u(((*l_327) = (g_252 , func_47(&g_137, ((*l_325) = (*p_10)), l_326))), g_316.f2)))))
                    {
                        (*g_266) = (safe_div_func_int32_t_s_s((*p_10), g_316.f3));
                    }
                    else
                    {
                        short *l_334 = &g_220;
                        short **l_335 = &l_283;
                        unsigned char *l_337 = &g_103;
                        int l_342 = (-1L);
                        (*l_325) = ((l_331 != (void*)0) != ((*l_337) = (g_267 <= (safe_add_func_int32_t_s_s((0x955AL & 0xA282L), ((((*g_315) , (l_295 , (l_334 != ((*l_335) = &g_220)))) , (void*)0) != l_336))))));

                        ;
                        (*g_266) = (*l_293);
                        g_340 = l_338;

                        ;
                        l_358 = ((l_342 = ((*g_341) = l_342)) , (0x81C6L != (g_223 = (safe_add_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((((*p_10) | l_282.f0) | (**l_331)), (*g_341))) <= l_350.f3), (-1L))))));
                    }

                    ;
                    ;
                    (*p_10) = ((safe_mod_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(((*l_325) <= ((**l_331) , ((((((l_320 = 0L) && (**l_331)) >= ((((g_252 , 0x5DL) == (safe_add_func_int8_t_s_s((!(-6L)), ((*l_325) , (safe_lshift_func_uint8_t_u_u(0xFFL, 3)))))) ^ (*l_293)) & l_278)) , 2UL) & 0x85CDL) , 0UL))), 10)) != g_367), l_368)) & 0xA446L);
                    if (((*p_10) = (*p_10)))
                    {
                        (**l_331) = (((((l_369 != (l_373 = g_371)) == (~(((g_267 & 0L) < (safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_u(g_252.f3, 6)) & (((l_384 , ((safe_rshift_func_int16_t_s_u(((safe_div_func_int32_t_s_s((0x6D7E888EL <= (*l_325)), 0x38EBB08DL)) || (*g_266)), (**l_331))) <= l_278)) < (*l_325)) ^ g_316.f3)) >= (-1L)), (*l_293))), 3)), (*g_21))), 1L))) <= l_282.f0))) <= (*g_21)) == (*p_10)) , 1L);

                        ;
                        (*l_331) = p_10;

                        ;
                        return l_323;



                    }
                    else
                    {
                        const unsigned l_391 = 0xD9B2E33AL;
                        (*g_266) = ((safe_rshift_func_uint16_t_u_u(g_223, 0)) == l_391);
                        l_393 = l_392;

                        ;
                    }

                    ;
                }
                else
                {
                    int **l_396 = &g_266;
                    unsigned short l_398 = 0xE0B4L;
                    const union U2 l_425 = {0xC84F80DEL};
                    unsigned char *l_428 = &g_103;
                    union U0 l_429 = {0x92F64507L};
                    for (g_225 = 0; (g_225 > (-24)); --g_225)
                    {
                        int ***l_397 = &l_291;
                        union U0 **l_399 = &l_393;
                        unsigned short l_406 = 1UL;
                        (*g_266) = ((func_29((l_295 , (*l_293)), ((*l_397) = (l_396 = func_35(&l_278, (0xC2DBD2CDL != 4294967291UL), (*l_331), l_384))), (**g_371), l_398, p_10) & l_282.f0) == (*g_21));

                                                ;
                        (*l_399) = l_393;
                        (*g_266) = (safe_add_func_uint16_t_u_u((((*p_10) && (safe_mod_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(((**l_396) != (*l_293)), 13)) || 0x1EECL), (**l_331)))) == (0UL && ((((((l_406 , (**l_396)) & (safe_add_func_uint16_t_u_u((**l_396), (**l_396)))) || 0L) > (-1L)) && (-1L)) < (*g_7)))), l_350.f1));
                    }

                    ;
                    if ((0UL || (*l_293)))
                    {
                        int *l_416 = &l_295.f4;
                        (*g_171) = (*g_171);
                        (*p_10) = ((*g_266) = (func_47(func_51(&g_267, ((((*l_294) = (safe_div_func_int16_t_s_s((**l_396), (g_223 = (safe_add_func_int8_t_s_s(0x1AL, ((*l_293) = g_8))))))) && g_191) , l_417), (*p_10), (*l_369)), (**l_396), (*g_315)) > g_103));
                    }
                    else
                    {
                        union U1 l_418 = {1L};
                        union U2 l_419 = {5UL};
                        int *l_420 = &g_8;
                        (*l_331) = &l_278;

                        ;
                        (*l_420) = func_29((**l_396), &g_190, l_418, ((*l_293) = (**l_396)), &g_267);

                                                return &g_137;



                    }
                    (**l_331) = (*p_10);
                    (**l_331) = (func_47(&g_137, ((*p_10) = (((((*g_7) != ((l_424 , 0UL) <= ((((*g_341) = (9L || (l_425 , ((**l_396) = (safe_sub_func_int8_t_s_s((-2L), ((*l_392) , ((*l_428) = (l_278 && l_278))))))))) > (*p_10)) , g_223))) >= 0L) < g_367) | (*p_10))), l_429) | (*g_21));
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
            if ((*p_10))
            {
                union U1 ***l_430 = &l_373;
                (*l_430) = (void*)0;

                ;
            }
            else
            {
                const char l_442 = 0x2BL;
                unsigned char *l_443 = &g_103;
                int **l_456 = &g_266;
                char *l_462 = &g_137;
                int *** const l_474 = &l_331;
                union U2 l_524 = {18446744073709551615UL};
                if (((*l_293) = (safe_lshift_func_uint8_t_u_s(((*l_443) = (safe_mod_func_int8_t_s_s(0x87L, l_442))), (**l_331)))))
                {
                    unsigned *l_448 = &g_252.f0;
                    int l_455 = 0x94A89D1CL;
                    p_11 = &l_441;

                    ;
                }
                else
                {
                    union U0 l_459 = {-1L};
                    l_278 = (l_459.f4 = (safe_sub_func_uint16_t_u_u(g_252.f3, (l_459 , (**l_331)))));

                                        (*l_456) = &l_278;

                    ;
                }

                ;
                ;
                if ((*g_266))
                {
                    int *l_463 = &l_279;
                    (*l_463) = ((*g_266) = ((*l_293) = ((*p_10) = (((1UL >= (0x9AAEEBD2L || (**l_456))) | ((func_47(l_462, (g_252.f1 , (*g_7)), (*g_315)) , p_10) == l_463)) , l_464))));
                }
                else
                {
                    union U2 *l_466 = &l_384;
                    union U2 **l_465 = &l_466;
                    int l_484 = 1L;
                    char l_485 = 0x77L;
                    (*l_465) = &l_384;
                    (*l_291) = (*l_456);

                    ;
                    for (g_69.f0 = 14; (g_69.f0 != (-12)); g_69.f0 = safe_sub_func_int8_t_s_s(g_69.f0, 6))
                    {
                        unsigned short l_473 = 0xA87FL;
                        unsigned *l_477 = &g_478;
                        union U2 l_483 = {1UL};
                        l_484 = ((*p_10) = (safe_add_func_uint16_t_u_u((~((l_278 = 4UL) == (safe_lshift_func_uint16_t_u_s(((*g_341) < l_473), (((void*)0 == l_474) && ((&g_190 != ((((((((*l_477) = l_282.f0) | (safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(0UL, 5)), ((l_483 , (-7L)) , g_316.f2)))) && l_484) > l_485) | (*p_10)) >= g_311) , l_486)) , 0x3C32L)))))), (*l_293))));
                        if ((*g_7))
                            continue;
                    }
                }

                ;
                if ((((***l_474) | (safe_sub_func_uint8_t_u_u(((void*)0 == l_489), (safe_lshift_func_uint8_t_u_u((g_103 = (g_252 , ((safe_add_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((*g_341) , ((&g_46 == (g_316.f3 , &l_291)) < 1UL)), (*g_341))), g_69.f0)) , l_498) == 1L), g_252.f1)) && (*g_341)))), g_499))))) ^ 0x2E0DL))
                {
                    union U2 l_502 = {0x195F14F3L};
                    union U1 l_506 = {1L};
                    int *l_508 = (void*)0;
                    union U2 *l_539 = &l_384;
                    if ((safe_sub_func_int16_t_s_s(((((**g_371) , (((*l_319) = ((l_502 , ((***l_474) , (***l_474))) , (***l_474))) <= 0x8A8FL)) , 0xDD9AL) != 0UL), 0xB03DL)))
                    {
                        union U1 **l_519 = &g_372;
                        char **l_520 = &l_462;
                        int l_521 = (-6L);
                        int *l_525 = &l_295.f4;
                        int *l_535 = &g_69.f0;
                        l_509 = &g_252;
                        l_525 = func_13(func_13(l_510, ((+((safe_mod_func_uint16_t_u_u((func_47(((*l_520) = func_51(p_10, (***l_474), ((*p_10) = (safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s((**l_456), (**l_456))), (safe_mod_func_uint8_t_u_u((***l_474), (*l_293)))))), ((*l_519) = (*g_371)))), (*l_510), l_295) == l_521), 0x4C8CL)) <= (**l_331))) , l_522), l_523, l_464), l_524, &l_507, g_311);

                        ;
                        ;
                        (***l_474) = (((safe_add_func_uint8_t_u_u((((*l_535) = (safe_div_func_int16_t_s_s((l_534 = ((safe_unary_minus_func_int16_t_s(g_328)) != (1UL < ((safe_add_func_uint16_t_u_u((0UL <= l_533), (***l_474))) || (*g_341))))), g_267))) , (*l_293)), (***l_474))) >= 0x15L) <= (***l_474));
                    }
                    else
                    {
                        int *l_536 = &l_441;
                        unsigned ***l_537 = &l_338;
                        union U2 **l_538 = &l_509;
                        (*l_331) = l_536;

                        ;
                        (*l_537) = (void*)0;

                        ;
                        (*l_510) = (*g_266);
                        l_539 = ((*l_538) = &l_522);

                        ;
                        ;
                    }

                                        ;
                    ;
                    ;
                    ;
                    (*l_291) = &g_8;

                    ;
                    ;
                    (**l_456) = (*p_10);
                    return l_299;





                }
                else
                {
                    return &g_137;





                }
            }

            ;
            (*l_331) = p_11;

            ;
            (*l_331) = func_13(((*l_331) = l_541), l_542, ((*l_545) = func_51(&g_8, (*l_293), (*p_10), (*l_369))), (*p_10));

            ;
        }
        else
        {
            int l_551 = 0x54F68315L;
            int **l_581 = (void*)0;
            const unsigned char l_588 = 254UL;
            short *l_591 = (void*)0;
            const union U2 l_592 = {0UL};
            for (g_69.f0 = (-27); (g_69.f0 >= (-1)); ++g_69.f0)
            {
                unsigned short l_550 = 0UL;
                union U1 * const l_556 = &l_282;
                int *l_587 = &g_8;
                for (l_507 = 27; (l_507 >= 17); --l_507)
                {
                    unsigned short l_557 = 0UL;
                    const int * const l_558 = &g_267;
                    const int **l_559 = (void*)0;
                    l_560 = l_558;

                    ;
                    (*g_266) = l_550;
                    if ((*p_10))
                        break;
                    l_551 = ((*l_510) = ((void*)0 == l_541));
                }
                (**l_331) = ((&g_371 != ((**l_331) , &l_285)) != (-1L));
                if (l_550)
                {
                    char l_565 = 5L;
                    union U1 l_582 = {0xA9DE9627L};
                    int l_584 = (-1L);
                    for (g_137 = (-5); (g_137 < (-18)); g_137 = safe_sub_func_uint32_t_u_u(g_137, 6))
                    {
                        unsigned l_574 = 0x233FE253L;
                        char **l_577 = &l_323;
                        unsigned char *l_583 = (void*)0;
                        (*p_10) = ((l_584 = ((safe_lshift_func_int8_t_s_s(l_565, (((g_296 , (void*)0) == &g_372) == 0x90L))) , g_103)) >= 0x73L);
                        (*l_291) = p_11;

                        ;
                        (**l_331) = (*l_560);
                    }
                    if ((*l_510))
                        break;
                    if ((*g_7))
                    {
                        union U0 **l_585 = &l_393;
                        (*l_585) = (void*)0;
                        return &g_499;


                    }
                    else
                    {
                        (*l_510) = l_550;
                        if ((*p_10))
                            break;
                    }
                }
                else
                {
                    union U0 ***l_586 = &l_489;
                    (*l_586) = &g_315;

                    ;
                }
                (*l_291) = l_587;

                ;
            }

            ;
            ;
            ;
            (*p_10) = ((((*l_284) = (func_29((func_47(l_523, l_588, (*g_315)) == (safe_lshift_func_int8_t_s_u(((**l_331) = ((void*)0 != l_591)), g_316.f3))), func_35((*l_291), g_103, p_11, l_592), (*l_286), l_592.f3, p_10) == (-4L))) == g_580) | g_316.f3);

                        (*l_554) = (*g_266);
        }

        ;
                ;
        ;
        ;
        ;
        ;
        ;
        ;
        ;
        (*l_541) = 9L;
        (*l_510) = 0x87B35AFDL;
        if (((*l_510) = l_593))
        {
            union U2 *l_608 = (void*)0;
            union U2 **l_607 = &l_608;
            unsigned l_614 = 4294967295UL;
            union U0 l_620 = {0xCD03033CL};
            int *l_621 = &l_278;
            (*p_10) = (*g_7);
            for (l_279 = 0; (l_279 <= 25); l_279 = safe_add_func_uint8_t_u_u(l_279, 6))
            {
                union U2 *l_604 = &l_542;
                union U2 **l_603 = &l_604;
                int l_609 = 0L;
                for (g_103 = 0; (g_103 >= 52); g_103++)
                {
                    short ***l_600 = &g_598;
                    const int l_626 = (-1L);
                    (*l_600) = g_598;
                    if ((*p_10))
                        break;
                    for (l_498 = 14; (l_498 <= 10); l_498 = safe_sub_func_int32_t_s_s(l_498, 3))
                    {
                        union U2 **l_606 = &l_604;
                        union U2 ***l_605 = &l_606;
                        unsigned char *l_610 = (void*)0;
                        unsigned char *l_611 = (void*)0;
                        unsigned char *l_612 = &g_613;
                        union U0 l_622 = {4L};
                        int ***l_623 = &l_503;
                        int ***l_624 = &l_291;
                        union U1 * const l_625 = &g_69;
                        l_614 = ((*l_541) = ((*l_554) = ((((*l_605) = (l_603 = l_603)) == l_607) , (l_609 , (((*l_612) = g_137) , (*p_10))))));
                        (*l_510) = (safe_add_func_uint16_t_u_u((((*p_10) && (safe_add_func_uint8_t_u_u(func_47(func_51(p_11, ((((g_619 & ((l_620 , ((l_609 , 0x8506E850L) || (*p_10))) > g_209)) & 1UL) > 1UL) & l_609), (*g_7), l_625), l_626, (*g_315)), (*l_554)))) && (*g_341)), 0x7168L));
                        (*p_10) = (safe_lshift_func_int8_t_s_u(0x1BL, 6));
                        (*l_541) = (*p_10);
                    }
                }
            }
        }
        else
        {
            char l_637 = 2L;
            const union U0 *l_641 = &g_642;
            const union U0 **l_640 = &l_641;
            unsigned short l_646 = 65535UL;
            for (g_69.f0 = 0; (g_69.f0 < (-11)); --g_69.f0)
            {
                (*l_291) = ((safe_lshift_func_uint16_t_u_s(g_8, 7)) , &g_267);
            }

            ;
            p_10 = (*l_331);

            ;
            (*l_554) = (safe_sub_func_uint16_t_u_u(((*l_276) = (safe_sub_func_uint8_t_u_u((*l_510), l_637))), (((safe_mod_func_uint32_t_u_u(((((*l_640) = l_393) == (void*)0) == func_47(&l_507, (*l_541), g_647)), (*g_341))) , &l_339) == l_648)));

            ;
            (*l_541) = l_649;
        }

        ;
        ;
    }
    else
    {
        unsigned l_652 = 0x3639087BL;
        char **l_653 = &g_347;
        union U0 l_656 = {0xFFD4E167L};
        union U2 l_685 = {0x32499634L};
        int *l_692 = &g_316.f4;
        unsigned ** const l_697 = &l_339;
        unsigned l_737 = 0UL;
        union U1 ** const *l_752 = &l_369;
        int **l_757 = &l_692;
        char l_883 = (-1L);
        union U2 *l_894 = (void*)0;
        unsigned char l_907 = 0x1FL;
        if ((safe_mod_func_int16_t_s_s((**g_598), (func_47(func_51((l_652 , func_13(p_10, l_542, ((*l_653) = &g_619), (*g_266))), l_652, (safe_add_func_int32_t_s_s(1L, (*l_560))), (*l_369)), (*g_7), l_656) ^ l_656.f0))))
        {
            int l_657 = 0x1B1790E7L;
            unsigned short l_664 = 0xB356L;
            unsigned * const l_667 = &l_652;
            union U1 l_680 = {0L};
            char *l_688 = (void*)0;
            union U0 l_725 = {0xAE189A84L};
            int *l_730 = (void*)0;
            int l_751 = 0x05C7E30AL;
            union U1 ** const **l_753 = &l_752;
            unsigned char *l_756 = &g_613;
            int **l_797 = &l_692;
            union U1 ***l_815 = &l_369;
            union U2 l_818 = {1UL};
            union U1 *l_830 = (void*)0;
            if (l_657)
            {
                const unsigned char l_665 = 0xC6L;
                union U1 l_666 = {0x94555647L};
                union U2 **l_671 = &g_669;
                int *l_686 = (void*)0;
                char *l_693 = &g_225;
                union U0 l_715 = {0x504B8664L};
                unsigned char l_716 = 4UL;
                if (func_47((*l_653), (l_542 , (safe_add_func_uint16_t_u_u(0UL, (safe_lshift_func_uint8_t_u_s(func_29(l_657, func_35(((((((**g_598) = 1L) == (safe_div_func_uint8_t_u_u(g_223, (l_664 | l_664)))) , (*g_341)) < (*p_10)) , (void*)0), l_665, &g_191, l_542), l_666, (*g_7), p_10), l_664))))), (*g_315)))
                {
                    union U2 ***l_670 = &g_668;
                    int l_672 = 0xA980C784L;
                    const union U1 *l_673 = (void*)0;
                    if ((l_672 = (l_667 != ((((*l_670) = g_668) != l_671) , ((*g_340) = ((*l_338) = (void*)0))))))
                    {
                        union U1 ***l_681 = &g_371;
                        int l_682 = 7L;
                        int **l_687 = &g_266;
                        l_673 = (*g_171);

                        ;
                        (*l_554) = (((*g_21) = l_656.f4) , func_47(&g_619, (*p_10), l_656));
                        (*l_681) = &l_370;

                        ;
                        (*l_687) = &l_682;

                        ;
                    }
                    else
                    {
                        char l_689 = 9L;
                        union U0 l_694 = {0x048799DBL};
                        (*g_266) = (*g_7);
                        (*p_10) = ((*g_266) = ((*l_554) = (safe_div_func_int16_t_s_s(l_672, l_689))));
                        l_692 = &l_672;

                        ;
                        (*l_692) = (*l_692);
                    }


                    ;
                    ;
                    ;
                    ;
                }
                else
                {
                    union U1 * const l_717 = &l_666;
                    const int l_718 = 0xEE38C8ECL;
                    int *l_721 = &g_316.f4;
                    short l_728 = 4L;
                    char *l_729 = &g_647.f2;
                    for (g_22 = 0; (g_22 >= 6); g_22++)
                    {
                        unsigned ***l_698 = &l_338;
                        (*l_698) = l_697;
                    }
                    (*g_266) = (safe_mod_func_int16_t_s_s(((0L || ((65535UL | ((safe_lshift_func_uint8_t_u_s((255UL ^ (((func_47(func_51((p_10 = &g_267), ((safe_rshift_func_int8_t_s_u(0x5FL, 7)) , (+(safe_mod_func_int32_t_s_s(((**l_369) , (+(*g_266))), (l_680.f0 | (safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((l_715 , (void*)0) != &g_103), l_716)), 1L))))))), (*l_560), l_717), l_657, (*g_315)) > l_718) >= l_657) == (*l_692))), l_680.f0)) || (**g_340))) , 0UL)) == g_69.f0), 0x9B93L));

                    ;
                    (*g_266) = (func_47(((*l_653) = &g_619), ((*l_721) = ((*l_692) , (safe_add_func_uint16_t_u_u(l_680.f0, (l_666 , l_680.f0))))), l_715) ^ g_103);

                                        for (g_267 = (-20); (g_267 >= (-2)); g_267 = safe_add_func_int8_t_s_s(g_267, 1))
                    {
                        int l_724 = 8L;
                        union U2 **l_731 = (void*)0;
                        union U2 *l_733 = &l_685;
                        union U2 **l_732 = &l_733;
                        l_721 = l_730;

                        ;
                        (*l_732) = ((*l_671) = (*g_668));

                        ;
                        (*l_554) = (*l_692);
                    }

                    ;
                }


                ;
                ;
                ;

            }
            else
            {
                union U2 *l_734 = &g_252;
                char ***l_742 = &l_653;
                unsigned char *l_749 = &g_613;
                int l_750 = (-1L);
                (*p_10) = (*g_266);
                l_734 = &l_685;

                ;
                (*p_10) = ((*l_692) & (safe_lshift_func_uint8_t_u_s((l_737 | (((safe_add_func_uint8_t_u_u((g_103 = (((p_11 == ((*p_10) , (*g_340))) , (((safe_lshift_func_int8_t_s_s((((*l_742) = l_653) != (void*)0), 5)) || ((safe_rshift_func_uint8_t_u_u(253UL, 7)) , ((*l_749) = (safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((((*l_734) , (-6L)) , g_22), (*l_692))), (*l_554)))))) > 255UL)) == (*l_692))), (*l_692))) == (*l_692)) , l_750)), l_751)));
                return (*l_653);


            }


            ;
            ;
            ;

            (*l_554) = (((*l_753) = l_752) != &l_369);
            if (((*p_10) = (safe_lshift_func_uint8_t_u_s(l_680.f0, (safe_sub_func_uint32_t_u_u((1L | ((safe_mod_func_int8_t_s_s((((safe_add_func_int8_t_s_s(((((*g_21) > g_8) <= g_647.f2) && l_725.f2), 1UL)) == 0xBC92F24FL) , (*l_554)), (*g_21))) < (*g_7))), (*p_10)))))))
            {
                short l_767 = 8L;
                int **l_784 = &g_266;
                union U1 l_792 = {0x05BCBF61L};
                char l_794 = 0x94L;
                union U0 l_799 = {3L};
                if ((*p_10))
                {
                    short l_768 = (-9L);
                    char ****l_773 = &g_771;
                    int *l_775 = (void*)0;
                    (*l_554) = ((*p_10) , ((*p_10) = (((-1L) || (*l_560)) ^ 0x18D254C8L)));
                    if ((safe_unary_minus_func_int8_t_s((safe_div_func_uint16_t_u_u((*l_554), ((l_767 > l_767) ^ (g_137 <= ((l_768 || (safe_lshift_func_int16_t_s_u((-10L), ((((*l_773) = g_771) == (void*)0) > g_647.f0)))) == l_768))))))))
                    {
                        (*p_10) = (*g_7);
                    }
                    else
                    {
                        int **l_774 = &l_730;
                        (*l_774) = ((*l_757) = &g_267);

                        ;
                        ;
                    }


                    ;
                    (*l_757) = l_775;

                    ;
                }
                else
                {
                    int l_787 = 0x4E9C152DL;
                    int l_793 = 4L;
                    for (g_367 = 5; (g_367 != 54); ++g_367)
                    {
                        union U0 *l_778 = &g_647;
                        union U0 **l_779 = &l_778;
                        const int l_795 = 1L;
                        int *l_798 = (void*)0;
                        (*l_779) = l_778;
                        (*l_554) = (((**g_772) >= ((*l_756) = (safe_sub_func_uint32_t_u_u(l_793, 9L)))) >= l_793);
                        (*l_757) = p_11;

                        ;
                    }


                }


                ;
                if (((((((*g_599) && ((*l_554) = (*g_599))) == (*p_10)) , ((*l_276) = ((func_47((*l_653), (l_799 , (*p_10)), l_656) != g_647.f2) || (-1L)))) != g_103) < g_642.f4))
                {
                    char l_810 = 5L;
                    (*p_10) = (safe_rshift_func_uint16_t_u_s(l_810, 1));
                }
                else
                {
                    const char *l_811 = &g_22;
                    return l_811;



                }

                                for (g_478 = 0; (g_478 < 13); g_478 = safe_add_func_uint16_t_u_u(g_478, 2))
                {
                    union U2 l_819 = {7UL};
                    int *l_822 = (void*)0;
                    union U1 *l_823 = &l_792;
                    if ((&g_340 != (void*)0))
                    {
                        char l_814 = (-1L);
                        (*p_10) = ((*l_554) = (*g_7));
                        if (l_814)
                            continue;
                    }
                    else
                    {
                        union U1 ***l_816 = &g_371;
                        union U1 ****l_817 = &l_815;
                        char *l_820 = &g_311;
                        (*p_10) = (((g_328 = (((*l_817) = (l_816 = l_815)) != (func_47(l_820, (*g_7), l_656) , &l_369))) < l_819.f1) < g_647.f4);

                        ;
                        (*l_797) = p_10;

                        ;
                        l_823 = (**l_815);

                        ;
                    }


                    ;
                    return l_756;



                }
                (*l_757) = p_11;

                ;
            }
            else
            {
                int *l_824 = &g_191;
                union U2 l_839 = {0x50ED653BL};
                (*l_757) = l_824;

                ;
                if ((((*l_667) = (((**l_653) = (**l_797)) <= 0xCFL)) != ((*p_10) = 0xEAB5D4D2L)))
                {
                    return (*g_772);



                }
                else
                {
                    union U0 l_825 = {0x565C4C4EL};
                    short l_828 = 0xA0F0L;
                    union U1 *l_829 = &l_796;
                    unsigned short *l_833 = &g_296;
                    unsigned short **l_834 = &l_276;
                    const union U2 l_841 = {18446744073709551607UL};
                    if ((func_47((*g_772), (*p_10), l_825) > ((*l_523) = ((((l_825.f0 && 0xF65FED45L) , (*g_315)) , ((*g_21) , ((safe_lshift_func_int8_t_s_s(((-1L) == l_825.f0), l_828)) == g_22))) >= g_642.f4))))
                    {
                        (*g_371) = (l_830 = l_829);

                        ;
                        ;
                        ;
                    }
                    else
                    {
                        return l_523;



                    }

                    ;
                    ;
                    ;
                    (**l_757) = (safe_div_func_int8_t_s_s((g_613 , ((~g_647.f2) >= (*l_692))), 0xB3L));
                }

                ;
                ;
                ;
            }

                        ;
            ;
            ;
            ;
            ;
            for (g_191 = 0; (g_191 > 23); g_191 = safe_add_func_uint8_t_u_u(g_191, 9))
            {
                (*l_554) = (*p_10);
                (*p_10) = ((safe_mod_func_int32_t_s_s((safe_div_func_uint16_t_u_u(g_252.f1, 0x7F8BL)), g_848)) < ((*l_554) = (*p_10)));
            }
        }
        else
        {
            int l_853 = 0xD842D769L;
            short *l_855 = (void*)0;
            short **l_854 = &l_855;
            int **l_884 = &g_266;
            union U1 l_885 = {-1L};
            (*l_554) = ((**l_757) = (((**g_598) & g_220) | (safe_sub_func_uint16_t_u_u((**l_757), (safe_lshift_func_uint16_t_u_s((((0xA1C50A1FL & l_853) | (((((((*l_854) = (void*)0) == &l_840) <= ((l_853 ^ (l_856 != (*l_692))) , 0UL)) && 4L) != l_853) , l_853)) && l_853), 2))))));

                        for (g_367 = 0; (g_367 == 59); g_367 = safe_add_func_int16_t_s_s(g_367, 9))
            {
                char l_875 = 0x07L;
                int **l_878 = &g_190;
                union U1 l_887 = {0x186A07E9L};
                union U0 l_900 = {0x0FB8E00DL};
                for (g_8 = 2; (g_8 != (-7)); --g_8)
                {
                    return (**g_771);


                }
                if ((*g_7))
                {
                    char l_865 = (-1L);
                    int *l_880 = &g_191;
                    short **l_893 = (void*)0;
                    short l_905 = 0x3A4FL;
                    for (l_424 = 10; (l_424 != (-5)); l_424 = safe_sub_func_int32_t_s_s(l_424, 8))
                    {
                        union U0 **l_864 = (void*)0;
                        union U0 ***l_863 = &l_864;
                        int l_872 = (-1L);
                        union U1 l_879 = {0xEDAA40E3L};
                        unsigned *l_881 = &l_685.f0;
                        int l_882 = 5L;
                        int *l_886 = &l_879.f0;
                        (*l_863) = &g_315;

                        ;
                        (*l_757) = (l_554 = (void*)0);

                        ;
                        ;
                        (*l_884) = (((l_853 & (((*l_560) , l_865) < (g_647.f4 && (safe_mod_func_int32_t_s_s((*p_10), 0x440F6602L))))) < g_580) , (void*)0);

                        ;
                        if (l_888)
                            continue;
                    }
                    for (l_649 = (-23); (l_649 >= 25); ++l_649)
                    {
                        unsigned l_892 = 4294967286UL;
                        (*l_880) = ((safe_unary_minus_func_uint8_t_u(g_209)) ^ (*g_599));
                        (*p_10) = ((((*g_341) , (*l_560)) , (*g_7)) == 1UL);
                    }
                    l_894 = &l_542;

                    ;
                    if ((safe_div_func_int8_t_s_s(g_897, (*l_560))))
                    {
                        unsigned l_906 = 0x7C37EA76L;
                        (*p_10) = ((((safe_add_func_uint32_t_u_u((g_137 , 1UL), (l_900 , (safe_mod_func_int32_t_s_s((safe_div_func_int16_t_s_s(((*g_599) = (l_905 || (g_647.f0 , (-5L)))), (((*l_523) = (**g_555)) , (g_499 && (g_642.f0 != (*l_880)))))), (*g_341)))))) || g_647.f3) || l_906) , (*g_7));
                    }
                    else
                    {
                        (*p_10) = (*l_560);
                        (**l_752) = &l_885;

                        ;
                        if ((*p_10))
                            continue;
                    }
                }
                else
                {
                    (*g_668) = (void*)0;

                    ;
                }
            }

            ;
            ;
            ;
            ;
            ;
            ;
            return (**g_771);


        }


        ;
        ;
        ;
        ;
        ;
        ;
        ;
        (*l_757) = p_11;

        ;
        (*p_10) = l_907;
        for (g_613 = 0; (g_613 < 34); g_613 = safe_add_func_int32_t_s_s(g_613, 3))
        {
            unsigned **l_910 = (void*)0;
            unsigned ***l_911 = (void*)0;
            unsigned ***l_912 = &g_340;
            int *l_913 = (void*)0;
            (*l_912) = l_910;

            ;
        }

        ;
    }

    ;

    ;
    ;
    ;
    ;
    ;
    ;
    ;

    ;
    ;
    return l_914;





}







static int * func_13(int * p_14, union U2 p_15, char * p_16, int p_17)
{
    unsigned l_273 = 18446744073709551612UL;
    int *l_274 = (void*)0;
    (*g_266) = l_273;
    return l_274;


}







static const char func_29(unsigned char p_30, int ** p_31, union U1 p_32, int p_33, int * p_34)
{
    char l_268 = 0xFFL;
    short *l_269 = &g_252.f3;
    union U1 l_270 = {0x230A905DL};
    union U1 *l_271 = &l_270;
    int l_272 = 1L;
    p_33 = (l_268 && (+((g_223 | ((l_268 == ((void*)0 != &p_34)) == (0x63AEL | l_268))) ^ ((*l_269) = (((((((((*g_266) = 0L) , (p_32.f0 && g_191)) , (void*)0) != (void*)0) , g_209) , g_223) != 0L) , g_209)))));

    (*p_34) = (((*l_271) = l_270) , (*g_266));
    (*g_266) = l_272;
    return (*g_21);
}







static int ** func_35(int * p_36, const unsigned char p_37, int * p_38, const union U2 p_39)
{
    return &g_266;


}







static int * func_40(unsigned p_41, unsigned short p_42, int ** p_43, const unsigned p_44)
{
    char l_65 = 0L;
    union U0 l_66 = {1L};
    union U2 l_67 = {0x6FAE7A48L};
    union U1 *l_68 = &g_69;
    int *l_253 = &g_191;
    char *l_256 = &l_66.f2;
    union U0 l_263 = {0xF76FFFE6L};
    int **l_264 = &l_253;
    int *l_265 = &g_8;
    l_68 = (func_47(func_51(func_56((((&g_7 != (p_42 , p_43)) , (safe_lshift_func_int16_t_s_u(((safe_sub_func_int8_t_s_s((*g_21), p_41)) ^ l_65), (l_66 , ((l_66.f0 >= (*g_21)) && l_66.f2))))) == 0UL), l_67, &g_8, l_68), l_65, l_66.f2, l_68), g_22, l_66) , l_68);


    ;
    (*l_264) = l_253;
    (*l_253) = 0x98E24242L;
    return l_265;


}







static int func_47(char * p_48, const int p_49, union U0 p_50)
{
    short *l_207 = (void*)0;
    unsigned short *l_208 = &g_209;
    int l_214 = (-1L);
    const int l_217 = 3L;
    int *l_218 = &g_8;
    short *l_219 = &g_220;
    int l_221 = 0xB68CB1B8L;
    short *l_222 = &g_223;
    char *l_224 = &g_225;
    union U1 *l_245 = (void*)0;
    union U1 * const * const l_244 = &l_245;
    union U2 l_247 = {0UL};
    for (g_137 = 4; (g_137 != 23); ++g_137)
    {
        int *l_198 = &g_191;
        (*l_198) = 0xBCEE7636L;
    }
    if ((safe_add_func_int8_t_s_s((*g_21), (safe_mod_func_int8_t_s_s((safe_div_func_int8_t_s_s(((*l_224) = (safe_div_func_int16_t_s_s(0x36E5L, ((*l_222) = (((*l_219) = (((*l_208) = (l_207 == l_207)) <= (safe_div_func_int8_t_s_s((((((*l_218) = (safe_sub_func_int16_t_s_s(((l_214 = p_50.f3) == (((*p_48) = 0x26L) && ((safe_lshift_func_int16_t_s_u((+l_217), 3)) >= p_49))), l_217))) , (*p_48)) || (*p_48)) , (*g_21)), (*g_21))))) | l_221))))), (*g_21))), 0x5DL)))))
    {
        int *l_226 = &l_221;
        (*l_226) = (g_8 = 0xE29D7D8EL);
    }
    else
    {
        return p_50.f3;
    }
    if ((safe_rshift_func_int16_t_s_u(((void*)0 == &g_7), 4)))
    {
        (*l_218) = 0x2858D321L;
        (*l_218) = (g_69.f0 >= g_8);
        (*l_218) = (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((*l_218), p_50.f3)), p_50.f4));
    }
    else
    {
        union U1 *l_239 = &g_69;
        int l_246 = 9L;
        for (g_223 = (-2); (g_223 >= (-10)); --g_223)
        {
            (*l_218) = (safe_div_func_int32_t_s_s(((void*)0 != &g_103), 0xEB0CFFECL));
            (*l_218) = (-1L);
        }
        for (l_214 = 26; (l_214 > (-3)); l_214--)
        {
            (*g_171) = l_239;
        }
        (*l_218) = ((((*l_224) = ((safe_sub_func_int32_t_s_s((safe_div_func_int16_t_s_s(((void*)0 != l_244), (l_246 , (l_247 , ((*l_218) , ((safe_div_func_int8_t_s_s((*g_21), (*g_21))) && (safe_mod_func_uint16_t_u_u((p_50.f4 != 0x4A91896EL), l_246)))))))), 0xBE22E702L)) < g_191)) == (*g_21)) , (*l_218));
    }
    return (*l_218);
}







static char * func_51(int * p_52, char p_53, int p_54, union U1 * const p_55)
{
    int ***l_178 = &g_46;
    int *l_180 = &g_8;
    int **l_179 = &l_180;
    char *l_189 = &g_137;
    int *l_193 = &g_8;
    int **l_192 = &l_193;
    unsigned l_194 = 1UL;
    int *l_195 = &g_191;
    (*l_178) = &p_52;

    ;
    (*l_179) = ((*g_46) = &p_54);

    ;
    ;
    (**g_46) = (safe_mod_func_int8_t_s_s((((safe_lshift_func_int8_t_s_s(((*l_189) = (0xCF39L <= (safe_sub_func_uint8_t_u_u(g_8, ((-1L) && (**l_179)))))), 7)) <= ((**l_178) == ((*l_192) = (g_190 = (void*)0)))) ^ (*l_180)), ((***l_178) | (***l_178))));

    ;
    ;
    (*l_195) = ((*p_52) = l_194);
    return &g_137;



}







static int * func_56(unsigned char p_57, union U2 p_58, int * p_59, union U1 * p_60)
{
    int **l_70 = (void*)0;
    int *l_72 = &g_8;
    int **l_71 = &l_72;
    const short l_88 = 1L;
    union U0 l_116 = {0x530E041BL};
    unsigned short l_118 = 65532UL;
    union U2 l_142 = {0x66E2C43CL};
    int *l_177 = (void*)0;
    (*l_71) = p_59;
    (*l_71) = p_59;
    if (((**l_71) = ((*p_59) == 1L)))
    {
        const unsigned short l_81 = 1UL;
        unsigned l_82 = 0x6825D0BCL;
        int l_87 = 0xFC23FAABL;
        int *l_166 = (void*)0;
        if ((((*l_72) = ((safe_rshift_func_uint16_t_u_s(((g_69.f0 ^ 65535UL) >= (**l_71)), ((((+(((p_60 == ((safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((safe_div_func_uint8_t_u_u((p_57 , l_81), l_82)) <= (safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(l_82, (~((l_87 = (0xAEL > 1UL)) | 0x03L)))), (-3L)))), l_82)), (*g_21))) , p_60)) < 0x1AL) && 0xBCDAL)) != g_8) >= 0x308DL) || g_8))) , (*g_7))) != p_58.f0))
        {
            (*l_71) = p_59;
        }
        else
        {
            int l_95 = 0xF7F7A374L;
            unsigned short l_139 = 0x8DE7L;
            int l_140 = (-7L);
            const union U1 l_151 = {0L};
            union U1 *l_157 = &g_69;
            union U1 **l_156 = &l_157;
            short *l_160 = &l_142.f3;
            unsigned short *l_163 = (void*)0;
            unsigned short *l_164 = &l_139;
            unsigned short *l_165 = &l_118;
            (**l_71) = l_88;
            for (l_87 = 26; (l_87 >= 24); l_87--)
            {
                int l_98 = 0L;
                int l_104 = 0x3A40B105L;
                int *l_117 = (void*)0;
                if (l_82)
                {
                    (*p_59) = (0x72A6DD75L & (safe_lshift_func_uint8_t_u_s(p_57, (&l_87 != (void*)0))));
                }
                else
                {
                    unsigned l_115 = 0x2BF7FA13L;
                    int l_141 = (-3L);
                    if ((safe_mod_func_uint16_t_u_u((&g_7 != (g_46 = g_46)), l_95)))
                    {
                        (**l_71) = 0L;
                        (*l_72) = (safe_rshift_func_uint16_t_u_u(l_81, 11));
                        (*l_72) = l_98;
                        (*l_71) = p_59;
                    }
                    else
                    {
                        unsigned char *l_102 = &g_103;
                        char *l_119 = &l_116.f2;
                        char *l_136 = &g_137;
                        unsigned short *l_138 = &l_118;
                        (*l_72) = ((safe_add_func_uint8_t_u_u(((*l_102) = ((safe_unary_minus_func_int16_t_s(1L)) & ((*g_7) >= p_58.f1))), p_58.f0)) < ((l_104 = p_58.f1) || (safe_rshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((*g_21), ((*l_119) = ((*p_59) == (l_115 , ((((l_116 , 0x0970L) , (void*)0) != l_117) || l_118)))))), 0xC57991EEL)), p_58.f3)), 0x8339L)), 15))));
                        l_141 = ((**l_71) = ((((safe_sub_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_div_func_uint16_t_u_u(g_22, g_69.f0)), (safe_add_func_uint8_t_u_u(p_57, (safe_add_func_int8_t_s_s((l_140 = ((safe_lshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s((0x1442L < ((*l_138) = (((*l_136) = ((*l_119) = p_58.f1)) >= ((void*)0 == &g_103)))), ((*g_21) >= ((0x117D1427L | (*g_7)) != g_103)))) > 4L), l_81)) , l_139)), p_58.f3)))))), 7UL)) & 0x995B858EL) , p_58.f1) & g_22));
                    }
                }
                if ((**l_71))
                    break;
            }

                        (*l_72) = 9L;
            (**l_71) = ((l_142 , (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(g_137, ((safe_rshift_func_uint16_t_u_u(1UL, 5)) <= l_87))), (((safe_sub_func_uint16_t_u_u(((*l_165) = (l_151 , (safe_unary_minus_func_int8_t_s((safe_unary_minus_func_int32_t_s(((((((safe_sub_func_uint32_t_u_u((((*l_164) = ((((*l_156) = p_60) == p_60) > (((safe_add_func_int16_t_s_s(((*l_160) = l_139), (safe_lshift_func_int8_t_s_s(l_81, 7)))) , g_8) > (*g_21)))) != g_69.f0), 9UL)) & l_140) & (*l_72)) == (**l_71)) , (**l_71)) && l_139))))))), 6UL)) != p_57) & p_57)))) > (*g_7));

                    }

                        l_166 = p_59;

        ;
        (*l_71) = p_59;
    }
    else
    {
        const union U1 ***l_173 = &g_171;
        union U1 **l_174 = (void*)0;
        union U1 *l_176 = &g_69;
        union U1 **l_175 = &l_176;
        (*p_59) = (((*p_59) | (safe_lshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_u((p_58.f1 , ((void*)0 == &l_88)), 2)) >= (l_116 , (&p_60 != ((*l_173) = g_171)))), p_58.f1))) , ((g_103 , (*p_59)) , 5L));
        (*g_171) = ((*l_175) = &g_69);
    }

            (*l_71) = l_177;

    ;
    return p_59;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_69.f0, "g_69.f0", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_252.f1, "g_252.f1", print_hash_value);
    transparent_crc(g_252.f3, "g_252.f3", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_316.f0, "g_316.f0", print_hash_value);
    transparent_crc(g_316.f2, "g_316.f2", print_hash_value);
    transparent_crc(g_316.f3, "g_316.f3", print_hash_value);
    transparent_crc(g_316.f4, "g_316.f4", print_hash_value);
    transparent_crc(g_328, "g_328", print_hash_value);
    transparent_crc(g_367, "g_367", print_hash_value);
    transparent_crc(g_478, "g_478", print_hash_value);
    transparent_crc(g_499, "g_499", print_hash_value);
    transparent_crc(g_580, "g_580", print_hash_value);
    transparent_crc(g_613, "g_613", print_hash_value);
    transparent_crc(g_619, "g_619", print_hash_value);
    transparent_crc(g_642.f0, "g_642.f0", print_hash_value);
    transparent_crc(g_642.f2, "g_642.f2", print_hash_value);
    transparent_crc(g_642.f3, "g_642.f3", print_hash_value);
    transparent_crc(g_642.f4, "g_642.f4", print_hash_value);
    transparent_crc(g_647.f0, "g_647.f0", print_hash_value);
    transparent_crc(g_647.f2, "g_647.f2", print_hash_value);
    transparent_crc(g_647.f3, "g_647.f3", print_hash_value);
    transparent_crc(g_647.f4, "g_647.f4", print_hash_value);
    transparent_crc(g_848, "g_848", print_hash_value);
    transparent_crc(g_897, "g_897", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
