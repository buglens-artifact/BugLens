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
   volatile unsigned short f0;
   const volatile unsigned short f1;
};

union U1 {
   unsigned f0;
   volatile char f1;
};


static unsigned long long g_5 = 0x47A6DEEC54165132LL;
static unsigned long long g_20 = 0x7C629C4DDB84C6A3LL;
static int g_49 = 0xD6C8400BL;
static volatile unsigned short g_55 = 0x946CL;
static unsigned g_83 = 0xA98A1BD0L;
static int g_89 = (-5L);
static const union U0 g_90 = {0xA74AL};
static unsigned long long g_97 = 0x973452C795732B80LL;
static int g_101 = (-4L);
static unsigned short g_109 = 0UL;
static short g_124 = 0x86DBL;
static unsigned char g_129 = 6UL;
static unsigned char g_131 = 0xDAL;
static unsigned g_149 = 0x669E62ADL;
static volatile short g_280 = 0xE8C8L;
static unsigned long long g_283 = 0UL;
static volatile unsigned short g_303 = 65535UL;
static volatile int g_307 = 9L;
static union U0 g_316 = {65535UL};
static unsigned char *g_322 = &g_129;
static unsigned char **g_321 = &g_322;
static char g_347 = 1L;
static short g_370 = (-6L);
static unsigned long long g_371 = 6UL;
static int *g_381 = &g_101;
static long long g_398 = 0x36BC6E75ED7DA01ELL;
static volatile union U0 g_413 = {0xC821L};
static int g_417 = 1L;
static unsigned short g_580 = 65535UL;
static union U0 *g_589 = &g_316;
static union U0 **g_588 = &g_589;
static unsigned short g_619 = 65527UL;
static int *g_620 = (void*)0;
static union U1 g_647 = {0x58D30C1EL};
static unsigned g_665 = 0x306CF536L;
static volatile int g_672 = 0x22FE2B96L;
static unsigned long long g_674 = 0UL;
static int g_681 = 0x48721688L;
static volatile unsigned g_682 = 0xF38BA8A3L;
static volatile union U0 g_714 = {1UL};
static const int g_747 = 0x65A4977BL;
static long long g_833 = 0xE40C62F0825A3480LL;
static long long *g_855 = &g_398;
static long long * const * const g_854 = &g_855;
static char g_858 = (-1L);
static short *g_863 = &g_124;
static short **g_862 = &g_863;
static unsigned short g_885 = 0x7DB9L;
static unsigned short g_969 = 0x634EL;
static unsigned long long g_977 = 18446744073709551615UL;
static volatile unsigned short ** const g_987 = (void*)0;
static unsigned char g_992 = 255UL;
static volatile union U1 g_1018 = {0UL};
static int g_1020 = (-10L);



static const short func_1(void);
static int func_2(unsigned char p_3, unsigned p_4);
static const char func_16(long long p_17, long long p_18);
static unsigned short func_23(unsigned p_24);
static int func_25(unsigned p_26, unsigned p_27, int p_28, unsigned long long p_29, short p_30);
static short func_35(unsigned p_36, unsigned long long p_37, int p_38, unsigned short p_39, const unsigned long long p_40);
static unsigned short func_44(unsigned p_45, int p_46, const int p_47);
static short func_60(int * p_61, const unsigned p_62);
static int * func_65(long long p_66, int * p_67, unsigned p_68, const int * p_69, const unsigned p_70);
static int * func_72(unsigned p_73, long long p_74);
static const short func_1(void)
{
    const unsigned char l_6 = 0xD0L;
    unsigned long long *l_976 = &g_977;
    short l_978 = 1L;
    short *l_979 = (void*)0;
    short *l_980 = &l_978;
    short l_1002 = 0xE313L;
    const int *l_1003 = &g_417;
    unsigned long long *l_1016 = (void*)0;
    long long * const *l_1035 = (void*)0;
    unsigned char *l_1036 = &g_992;
    unsigned l_1037 = 0x79B48A4BL;
    int *l_1038 = &g_681;
    if (((func_2(g_5, (g_5 > l_6)) <= (g_747 & ((*l_980) = ((0x11L <= (safe_mod_func_int16_t_s_s((l_6 , g_149), (safe_mod_func_uint64_t_u_u(((*l_976) = l_6), l_978))))) , g_149)))) != 65533UL))
    {
        long long *l_981 = &g_398;
        int l_983 = 1L;
        char *l_984 = &g_347;
        const unsigned short **l_988 = (void*)0;
        unsigned *l_991 = &g_665;
        int *l_993 = &g_417;
        int *l_994 = &g_681;
        if ((l_981 != (void*)0))
        {
            (*g_381) &= 0x4C849F60L;
            return (**g_862);
        }
        else
        {
            short l_982 = 6L;
            (*g_381) = (l_978 && l_982);
        }
        (*l_994) = ((*l_993) |= func_44(((l_978 , ((*l_984) = l_983)) < ((((l_983 || (safe_rshift_func_uint8_t_u_u((**g_321), 5))) , ((g_987 == ((l_978 && (+(**g_862))) , l_988)) < (safe_sub_func_uint32_t_u_u(((((func_25(((*l_991) = (l_983 <= 0xB8D63E3CL)), l_983, (*g_381), l_983, l_983) , &l_988) == (void*)0) & 0xF9BD2942L) > g_992), l_6)))) == g_858) == l_983)), l_978, g_885));
        for (g_49 = 0; (g_49 == 15); g_49 = safe_add_func_int32_t_s_s(g_49, 5))
        {
            int l_999 = 0x90120C8CL;
            int *l_1001 = &l_983;
            int **l_1004 = &l_993;
            (*l_1004) = func_65((**g_854), func_65((l_978 <= (l_999 <= (safe_unary_minus_func_int32_t_s(l_999)))), l_1001, l_1002, func_72(g_370, (*g_855)), (*l_994)), (*l_994), l_1003, (*l_993));
        }
    }
    else
    {
        unsigned l_1009 = 3UL;
        long long **l_1013 = &g_855;
        long long *** const l_1012 = &l_1013;
        int l_1014 = 1L;
        int l_1015 = 9L;
        unsigned l_1017 = 0x0AEA30C9L;
        int *l_1019 = &g_1020;
        l_1015 = (func_44((((safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(l_1009, (g_747 != ((**g_854) = (!l_1009))))), 10)) && ((*l_1003) , ((*l_976)--))) < (&g_854 == l_1012)), (*g_381), (l_1014 == 4294967292UL)) >= 3UL);
        (*l_1019) |= ((((((***l_1012) = l_1009) , ((*g_589) , l_1015)) , &g_371) != l_1016) , func_25(l_1017, (g_1018 , 0xD94EA0B2L), (+(*l_1003)), g_20, (*l_1003)));
    }
    (*l_1038) &= (((safe_lshift_func_int16_t_s_s(0x82A0L, 3)) ^ (func_44(g_89, func_35((safe_add_func_uint32_t_u_u((((*l_1003) < (-1L)) | ((*l_1036) = ((**g_588) , (safe_sub_func_uint8_t_u_u(((**g_321) = ((((**g_588) , ((safe_mul_func_uint16_t_u_u((*l_1003), (((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((**g_321), (((safe_sub_func_uint32_t_u_u((g_1018 , 4294967295UL), (*l_1003))) , l_976) != l_976))), (*l_1003))) <= (*l_1003)) <= g_101))) >= (*l_1003))) , l_1035) != &g_855)), 0x7BL))))), (*l_1003))), g_101, g_674, (*l_1003), (*l_1003)), g_109) != l_1037)) && (*l_1003));
    return (*l_1038);
}







static int func_2(unsigned char p_3, unsigned p_4)
{
    unsigned long long l_7 = 0x57B5BF2D3F5047C4LL;
    unsigned short *l_884 = &g_885;
    char *l_886 = &g_858;
    unsigned short l_887 = 0UL;
    int *l_888 = &g_417;
    int *l_889 = &g_89;
    int *l_890 = (void*)0;
    int *l_891 = (void*)0;
    int *l_892 = (void*)0;
    int *l_893 = &g_49;
    int *l_894 = &g_417;
    int l_895 = (-1L);
    int *l_896 = &g_89;
    int *l_897 = &g_417;
    int *l_898 = &l_895;
    int *l_899 = &g_417;
    int *l_900 = (void*)0;
    int *l_901 = &l_895;
    int l_902 = 0x7F1B1869L;
    int *l_903 = (void*)0;
    int *l_904 = (void*)0;
    int *l_905 = &l_902;
    int *l_906 = &g_101;
    int *l_907 = &g_101;
    int *l_908 = &g_417;
    int *l_909 = &l_895;
    int *l_910 = &g_89;
    int *l_911 = &g_681;
    int *l_912 = &g_101;
    int *l_913 = &g_417;
    int *l_914 = &l_902;
    int *l_915 = &g_49;
    int *l_916 = (void*)0;
    int *l_917 = (void*)0;
    int *l_918 = &g_681;
    int *l_919 = &g_681;
    int *l_920 = (void*)0;
    int *l_921 = &l_902;
    int *l_922 = &g_681;
    int *l_923 = &l_895;
    int *l_924 = &l_902;
    int *l_925 = &g_417;
    int l_926 = 0xD2211892L;
    int *l_927 = &g_417;
    int *l_928 = &g_89;
    int l_929 = 0x32B160D2L;
    int *l_930 = &l_926;
    int *l_931 = &g_681;
    int *l_932 = &g_681;
    int *l_933 = &l_926;
    int *l_934 = &g_101;
    int *l_935 = &g_101;
    int *l_936 = (void*)0;
    int *l_937 = &g_417;
    int *l_938 = &g_101;
    int l_939 = (-2L);
    int *l_940 = &l_939;
    int l_941 = 1L;
    int *l_942 = &g_49;
    int *l_943 = &l_926;
    int *l_944 = &g_89;
    int *l_945 = &g_89;
    int *l_946 = &g_101;
    int *l_947 = (void*)0;
    int *l_948 = &g_101;
    int *l_949 = &g_49;
    int l_950 = 0x5DD652B4L;
    int *l_951 = &g_49;
    int *l_952 = &g_49;
    int *l_953 = &l_950;
    int *l_954 = &l_950;
    int *l_955 = &l_929;
    int *l_956 = &g_417;
    int l_957 = (-4L);
    int *l_958 = &g_101;
    int l_959 = (-5L);
    int *l_960 = &l_959;
    int *l_961 = (void*)0;
    int *l_962 = &l_926;
    int *l_963 = (void*)0;
    int *l_964 = &l_895;
    int *l_965 = &l_941;
    int *l_966 = (void*)0;
    int *l_967 = &l_959;
    int *l_968 = &g_417;
    l_7 = g_5;
    (*l_888) = (((*g_322) = ((safe_mod_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s(p_3, g_5)), g_5)) <= (safe_sub_func_int8_t_s_s((p_4 == ((l_7 < (((*l_886) = (safe_sub_func_int8_t_s_s(func_16(p_3, l_7), ((((*l_884) = 6UL) || l_7) < p_4)))) & g_747)) >= p_3)), l_887)))) | l_887);
    g_969++;
    (*l_967) |= (*g_381);
    return p_4;
}







static const char func_16(long long p_17, long long p_18)
{
    short l_19 = 0x3D59L;
    unsigned short *l_831 = &g_619;
    long long *l_832 = &g_833;
    unsigned l_834 = 0xB01C9FD3L;
    int *l_835 = &g_681;
    int **l_836 = &g_381;
    long long l_859 = 0x5A33324D81D241AFLL;
    short * const *l_867 = &g_863;
    short **l_868 = &g_863;
    g_20 = l_19;
    (*l_835) |= (((*l_831) = (safe_mul_func_uint16_t_u_u(func_23(p_17), g_674))) > (((((*l_832) = (l_19 ^ p_18)) | l_834) <= (l_19 > ((void*)0 != &g_665))) >= 1L));
    (*l_836) = func_65(((g_89 , p_18) == (*l_835)), l_835, (*l_835), l_835, p_18);
    for (g_398 = 0; (g_398 == (-22)); --g_398)
    {
        int l_849 = (-4L);
        unsigned long long l_861 = 18446744073709551607UL;
        char **l_882 = (void*)0;
        if (p_18)
        {
            char *l_856 = &g_347;
            char *l_857 = &g_858;
            const int l_860 = (-1L);
            short ***l_864 = &g_862;
            l_861 = (safe_sub_func_uint8_t_u_u((**g_321), func_35(((safe_sub_func_uint8_t_u_u((func_35((safe_add_func_int16_t_s_s(((((safe_sub_func_int32_t_s_s(((**l_836) = (safe_rshift_func_uint8_t_u_u((((**l_836) , ((((**l_836) <= ((*l_857) = ((((((l_849 | l_849) && ((safe_sub_func_uint8_t_u_u((p_17 != p_18), ((*l_856) = (safe_rshift_func_int8_t_s_s(((*l_835) , (g_854 == &g_855)), 7))))) , p_17)) ^ p_18) && l_849) <= l_849) <= p_17))) && p_17) > (**g_321))) < g_370), 4))), l_859)) > 0x003B1EBAE3768666LL) | 0x0BL) ^ p_18), p_17)), p_17, p_18, p_18, l_860) ^ 0x7F697B7DL), 0xD4L)) , g_283), g_413.f1, g_417, p_18, l_849)));
            (*l_864) = g_862;
            return p_18;
        }
        else
        {
            short ***l_869 = &l_868;
            unsigned l_880 = 0x7B5BDD8CL;
            long long l_881 = 1L;
            int *l_883 = &g_49;
            (*l_883) |= ((((((safe_add_func_int16_t_s_s((0x1D1FC7F7L ^ func_35((0xE31CB51CL & (l_867 == ((*l_869) = l_868))), p_18, func_35(((((p_18 , (*l_835)) > (safe_add_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(((!0x80F3L) | (~((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u(0UL, 0xAA991F4FE879E47BLL)), (*g_863))) & l_849))), p_18)) | 0x75L), p_18)) , g_672) != 9UL), l_861))) , l_880) , (**l_836)), p_18, p_18, g_858, l_849), p_18, g_109)), l_881)) & l_881) , l_882) == (void*)0) >= l_880) , (*g_381));
        }
    }
    return (**l_836);
}







static unsigned short func_23(unsigned p_24)
{
    unsigned char l_41 = 0x08L;
    int *l_416 = &g_417;
    union U1 *l_420 = (void*)0;
    int l_433 = 0xBAD667D2L;
    int l_448 = 0x7B452A93L;
    int l_472 = 0x531CCCDEL;
    int l_488 = (-1L);
    int l_499 = 6L;
    int l_502 = 0x606840BBL;
    int l_515 = 0x18A77CAAL;
    int l_525 = 0x088E696DL;
    int l_526 = 1L;
    int l_555 = 1L;
    int l_558 = 0xA24C56DEL;
    int l_579 = 2L;
    union U0 **l_590 = &g_589;
    unsigned short *l_597 = &g_109;
    const char *l_600 = (void*)0;
    long long l_601 = 1L;
    union U0 ** const l_612 = &g_589;
    const int *l_617 = (void*)0;
    long long ***l_624 = (void*)0;
    unsigned long long l_666 = 0x0FD19086DFAE1C68LL;
    char l_694 = 0xC2L;
    unsigned char **l_729 = &g_322;
    unsigned char l_795 = 0UL;
    unsigned char l_808 = 249UL;
    const long long l_821 = (-7L);
    (*l_416) &= func_25((safe_add_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(func_35(p_24, l_41, p_24, ((safe_mod_func_int32_t_s_s((0x6CL != (g_5 >= (!(g_20 < g_5)))), l_41)) <= func_44((0x13L || l_41), p_24, l_41)), l_41), 3UL)) && 0x2FL), p_24)), g_20, p_24, g_5, l_41);
    for (g_131 = 0; (g_131 < 28); g_131 = safe_add_func_int64_t_s_s(g_131, 5))
    {
        union U1 **l_421 = &l_420;
        (*l_421) = l_420;
    }
    (*l_416) = (safe_add_func_int16_t_s_s(((safe_unary_minus_func_uint32_t_u((*l_416))) && ((((l_416 != (void*)0) && p_24) , (safe_mod_func_uint64_t_u_u(((safe_mod_func_uint64_t_u_u((0L < (*l_416)), 18446744073709551615UL)) < (safe_lshift_func_uint8_t_u_u((p_24 > 0x1E9DDE0FL), (*l_416)))), p_24))) , (*l_416))), p_24));
    for (l_41 = (-21); (l_41 != 11); l_41 = safe_add_func_int32_t_s_s(l_41, 3))
    {
        int *l_434 = &l_433;
        int *l_435 = &l_433;
        int *l_436 = &g_89;
        int *l_437 = &g_89;
        int *l_438 = &g_417;
        int *l_439 = &g_49;
        int *l_440 = (void*)0;
        int *l_441 = &g_417;
        int *l_442 = &g_89;
        int *l_443 = &g_101;
        int *l_444 = &g_49;
        int *l_445 = &g_417;
        int *l_446 = &l_433;
        int *l_447 = &l_433;
        int l_449 = (-3L);
        int *l_450 = &l_449;
        int *l_451 = (void*)0;
        int *l_452 = &g_417;
        int *l_453 = &l_448;
        int *l_454 = &g_417;
        int l_455 = 0xA1EA45FBL;
        int *l_456 = (void*)0;
        int *l_457 = &l_449;
        int *l_458 = &l_433;
        int *l_459 = &g_101;
        int *l_460 = (void*)0;
        int *l_461 = &g_417;
        int *l_462 = &l_433;
        int *l_463 = &l_433;
        int *l_464 = (void*)0;
        int *l_465 = &l_455;
        int *l_466 = (void*)0;
        int *l_467 = &l_448;
        int l_468 = 1L;
        int *l_469 = &g_89;
        int *l_470 = &g_49;
        int *l_471 = &g_89;
        int *l_473 = &g_101;
        int *l_474 = (void*)0;
        int *l_475 = &l_449;
        int l_476 = 1L;
        int *l_477 = &l_472;
        int *l_478 = &l_472;
        int *l_479 = &l_455;
        int *l_480 = &g_417;
        int *l_481 = (void*)0;
        int *l_482 = &l_472;
        int l_483 = 0x78B01510L;
        int *l_484 = &g_49;
        int *l_485 = (void*)0;
        int l_486 = 8L;
        int *l_487 = &l_483;
        int *l_489 = (void*)0;
        int *l_490 = &g_89;
        int *l_491 = &l_488;
        int *l_492 = &g_101;
        int *l_493 = &l_455;
        int *l_494 = &l_455;
        int *l_495 = (void*)0;
        int *l_496 = &l_472;
        int l_497 = (-1L);
        int l_498 = 0x553A1973L;
        int *l_500 = &l_498;
        int l_501 = 0x1B13C486L;
        int *l_503 = &l_486;
        int *l_504 = &l_488;
        int *l_505 = &l_483;
        int *l_506 = (void*)0;
        int *l_507 = (void*)0;
        int *l_508 = &l_472;
        int *l_509 = &l_497;
        int *l_510 = &l_433;
        int *l_511 = &l_449;
        int *l_512 = &l_472;
        int *l_513 = &l_476;
        int *l_514 = &g_417;
        int l_516 = 0L;
        int *l_517 = &l_468;
        int *l_518 = &g_417;
        int *l_519 = &l_449;
        int *l_520 = &l_515;
        int *l_521 = (void*)0;
        int l_522 = 0xDB0181DCL;
        int *l_523 = (void*)0;
        int *l_524 = &l_522;
        int *l_527 = &l_526;
        int *l_528 = &l_502;
        int *l_529 = &l_488;
        int *l_530 = &l_522;
        int *l_531 = (void*)0;
        int *l_532 = (void*)0;
        int *l_533 = &l_502;
        int *l_534 = &l_449;
        int *l_535 = (void*)0;
        int *l_536 = &l_522;
        int *l_537 = &l_497;
        int *l_538 = (void*)0;
        int *l_539 = &l_472;
        int *l_540 = &l_486;
        int *l_541 = &l_526;
        int *l_542 = &l_515;
        int *l_543 = &l_455;
        int *l_544 = &g_49;
        int *l_545 = (void*)0;
        int *l_546 = &l_522;
        int *l_547 = (void*)0;
        int *l_548 = (void*)0;
        int *l_549 = &l_525;
        int *l_550 = &l_526;
        int *l_551 = (void*)0;
        int *l_552 = &l_476;
        int *l_553 = &l_483;
        int *l_554 = &l_488;
        int l_556 = 1L;
        int *l_557 = &g_49;
        int *l_559 = &g_101;
        int *l_560 = &l_526;
        int *l_561 = &l_556;
        int *l_562 = &g_417;
        int *l_563 = &l_433;
        int *l_564 = &l_476;
        int *l_565 = &g_89;
        int *l_566 = &l_501;
        int *l_567 = (void*)0;
        int *l_568 = &l_476;
        int *l_569 = &l_525;
        int *l_570 = &l_555;
        int *l_571 = &l_516;
        int *l_572 = &l_483;
        int l_573 = 0x8614077CL;
        int *l_574 = (void*)0;
        int l_575 = 3L;
        int *l_576 = (void*)0;
        int *l_577 = &g_49;
        int *l_578 = &l_483;
        unsigned l_583 = 3UL;
        short l_594 = 0x83CDL;
        const char *l_598 = &g_347;
        const char **l_599 = (void*)0;
        union U0 **l_611 = &g_589;
        union U1 *l_646 = &g_647;
        unsigned char *l_715 = &g_131;
        long long *l_824 = &g_398;
        ++g_580;
        ++l_583;
    }
    return g_109;
}







static int func_25(unsigned p_26, unsigned p_27, int p_28, unsigned long long p_29, short p_30)
{
    union U0 *l_402 = &g_316;
    const int l_406 = 0x6E1C351EL;
    unsigned *l_409 = (void*)0;
    for (g_97 = (-30); (g_97 < 24); ++g_97)
    {
        char l_387 = 0x80L;
        union U0 *l_400 = (void*)0;
        union U0 **l_401 = &l_400;
        int l_405 = 0x9037B7EFL;
        int *l_407 = (void*)0;
        int *l_408 = &g_101;
        int *l_410 = &g_89;
        for (g_83 = 0; (g_83 >= 31); g_83 = safe_add_func_uint8_t_u_u(g_83, 5))
        {
            unsigned l_386 = 18446744073709551615UL;
            unsigned char *l_396 = &g_131;
            long long *l_397 = &g_398;
            int *l_399 = &g_49;
            (*l_399) |= (func_35(l_386, g_101, l_387, ((((*l_397) = (safe_mod_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s((*g_322), p_26)) , (((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(4UL, (((*g_322) ^= (g_303 >= 0UL)) < ((*l_396) = 0xDBL)))), p_26)) || 0x2007L) , p_28)) | (*g_381)), (-1L)))) >= p_29) , 0xCFDCL), l_387) && 0x224A2D75L);
            return p_29;
        }
        (*l_408) = ((func_35(((((*l_401) = l_400) == l_402) & (l_387 && ((safe_mul_func_int8_t_s_s(0x4BL, 251UL)) && (+0x4EF9590FL)))), g_89, ((((*g_381) = (~(p_30 != (l_405 = g_90.f1)))) && (*g_381)) && p_29), p_29, l_406) > 1UL) , l_405);
        (*l_410) ^= (!((*l_408) ^= (0x161C9ACDL ^ (l_409 == (void*)0))));
    }
    for (g_20 = 0; (g_20 != 56); g_20 = safe_add_func_int32_t_s_s(g_20, 7))
    {
        int *l_414 = &g_49;
        int **l_415 = &g_381;
        (*l_415) = (g_413 , l_414);
    }
    return (*g_381);
}







static short func_35(unsigned p_36, unsigned long long p_37, int p_38, unsigned short p_39, const unsigned long long p_40)
{
    unsigned short l_375 = 0UL;
    int *l_378 = &g_101;
    union U1 *l_379 = (void*)0;
    union U1 **l_380 = &l_379;
    (*l_378) |= (((!6L) , (safe_mod_func_int64_t_s_s(l_375, g_109))) != ((safe_add_func_int8_t_s_s(p_36, g_83)) < l_375));
    (*l_380) = l_379;
    g_381 = l_378;
    return p_38;
}







static unsigned short func_44(unsigned p_45, int p_46, const int p_47)
{
    int *l_48 = &g_49;
    int *l_50 = (void*)0;
    int *l_51 = &g_49;
    int *l_52 = &g_49;
    int *l_53 = &g_49;
    int *l_54 = (void*)0;
    short *l_369 = &g_370;
    unsigned l_372 = 6UL;
    ++g_55;
    (*l_53) = (safe_rshift_func_int16_t_s_u(func_60(&g_49, g_55), 5));
    g_371 ^= (((func_60((g_316 , l_51), (*l_53)) ^ (((g_149 > (p_47 > (safe_rshift_func_uint8_t_u_u(p_47, 2)))) > (((-10L) ^ ((*l_369) ^= g_5)) > 0x66BAD0E2BE1C1F15LL)) , 0x93810D71L)) && (-1L)) , (-8L));
    return l_372;
}







static short func_60(int * p_61, const unsigned p_62)
{
    long long l_71 = 1L;
    int l_111 = (-5L);
    unsigned char *l_130 = &g_131;
    short l_133 = (-6L);
    const unsigned long long l_136 = 0x9AF5B30FD8B1EB15LL;
    int l_171 = 1L;
    unsigned char ***l_339 = (void*)0;
    unsigned char *l_350 = &g_129;
    int *l_366 = &g_101;
    int **l_365 = &l_366;
    for (g_49 = (-20); (g_49 == 14); ++g_49)
    {
        unsigned short l_77 = 0x6FB6L;
        int *l_79 = &g_49;
        int **l_78 = &l_79;
        char l_80 = 1L;
        unsigned *l_81 = (void*)0;
        unsigned *l_82 = &g_83;
        (*l_78) = func_65(l_71, &g_49, p_62, func_72(((*l_82) = (0xA44BL & (g_49 , (safe_lshift_func_int8_t_s_s(((((g_55 == (l_77 ^ (((*l_78) = &g_49) == p_61))) != p_62) != p_62) , (**l_78)), l_80))))), l_71), p_62);
        for (l_77 = 6; (l_77 == 15); ++l_77)
        {
            int *l_95 = &g_89;
            int *l_96 = &g_89;
            int *l_100 = &g_101;
            unsigned short *l_108 = &g_109;
            long long *l_110 = &l_71;
            g_97++;
            (*l_100) ^= (*l_96);
            if (((p_62 , ((((safe_mod_func_int16_t_s_s((**l_78), (((g_101 & (safe_lshift_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(((*l_110) = ((((*l_108) = p_62) && (*l_100)) | ((*p_61) && g_20))), l_111)), (safe_add_func_int64_t_s_s((p_62 < 0x5405L), g_55))))) , p_62) | p_62))) | g_89) , g_5) | g_49)) > 0x458B9948L))
            {
                if (g_97)
                    break;
                if ((*p_61))
                    break;
            }
            else
            {
                unsigned short l_118 = 65535UL;
                for (g_89 = 0; (g_89 <= (-14)); g_89--)
                {
                    unsigned l_121 = 0x6E063347L;
                    short *l_122 = (void*)0;
                    short *l_123 = &g_124;
                    int *l_125 = &l_111;
                    (*l_100) = (*p_61);
                    (*l_125) |= ((safe_rshift_func_uint8_t_u_u(p_62, 4)) < (((p_62 < ((((*l_123) = ((p_62 < l_118) != (safe_sub_func_uint32_t_u_u((p_62 < (*l_96)), (l_121 , g_97))))) ^ (g_90.f1 > g_101)) <= g_89)) < p_62) > 1UL));
                    if ((*p_61))
                        continue;
                }
            }
        }
    }
    (*p_61) = g_90.f1;
    if (g_49)
    {
        unsigned long long l_126 = 18446744073709551615UL;
        short *l_127 = &g_124;
        unsigned char *l_128 = &g_129;
        unsigned char **l_132 = &l_130;
        int l_216 = 0xEBF8EC99L;
        int l_243 = 0xF4F03D5EL;
        unsigned l_250 = 18446744073709551615UL;
        if (((*p_61) = (((*l_128) = (p_62 | (((l_126 , (void*)0) != (l_127 = &g_124)) <= (g_55 || l_111)))) <= (((*l_132) = l_130) == &g_131))))
        {
            l_133 = ((*p_61) = 0L);
            return p_62;
        }
        else
        {
            unsigned short l_195 = 65533UL;
            int l_203 = 4L;
            int l_247 = 0L;
            short l_334 = 0x31CCL;
            for (g_89 = 0; (g_89 <= (-8)); g_89 = safe_sub_func_int64_t_s_s(g_89, 1))
            {
                char l_143 = (-4L);
                unsigned l_151 = 0xA479C51AL;
                int l_189 = 0x575B1656L;
                int l_300 = (-1L);
                int **l_308 = (void*)0;
                int *l_310 = &l_203;
                int **l_309 = &l_310;
                (*p_61) ^= l_136;
                for (g_131 = 0; (g_131 < 41); g_131++)
                {
                    unsigned short *l_142 = &g_109;
                    unsigned *l_148 = &g_149;
                    int l_150 = 0x9137EFE7L;
                    int l_180 = 3L;
                    int l_229 = 0x1FB71B89L;
                    int *l_253 = &l_229;
                    int *l_254 = &l_229;
                    int *l_255 = &l_229;
                    int *l_256 = &l_203;
                    int *l_257 = &l_203;
                    int *l_258 = &g_49;
                    int *l_259 = &l_247;
                    int *l_260 = &l_111;
                    int *l_261 = (void*)0;
                    int *l_262 = &l_247;
                    int *l_263 = &l_216;
                    int *l_264 = &l_203;
                    int *l_265 = &l_216;
                    int *l_266 = &g_49;
                    int *l_267 = &l_203;
                    int *l_268 = &l_229;
                    int *l_269 = (void*)0;
                    int *l_270 = &l_189;
                    int *l_271 = &l_203;
                    int *l_272 = (void*)0;
                    int *l_273 = &l_180;
                    int *l_274 = &l_229;
                    int *l_275 = &l_203;
                    int *l_276 = &l_189;
                    int *l_277 = &l_229;
                    int *l_278 = (void*)0;
                    int *l_279 = &l_243;
                    int *l_281 = (void*)0;
                    int *l_282 = &l_180;
                    long long *l_288 = &l_71;
                    long long **l_289 = &l_288;
                }
                for (l_250 = 11; (l_250 == 47); l_250 = safe_add_func_int8_t_s_s(l_250, 4))
                {
                    for (l_171 = (-1); (l_171 < (-15)); l_171 = safe_sub_func_uint8_t_u_u(l_171, 9))
                    {
                        int *l_294 = (void*)0;
                        int *l_295 = &l_189;
                        int *l_296 = &g_49;
                        int *l_297 = &g_101;
                        int *l_298 = &g_49;
                        int *l_299 = &g_49;
                        int *l_301 = &l_300;
                        int *l_302 = &g_49;
                        int **l_306 = &l_299;
                        if ((*p_61))
                            break;
                        --g_303;
                        (*l_306) = (l_189 , &g_101);
                    }
                    if (g_307)
                        continue;
                }
                (*l_309) = &g_89;
            }
            for (g_283 = 25; (g_283 == 58); g_283 = safe_add_func_int64_t_s_s(g_283, 1))
            {
                union U0 *l_315 = &g_316;
                int l_333 = 4L;
                for (l_133 = 0; (l_133 > (-26)); l_133 = safe_sub_func_int64_t_s_s(l_133, 1))
                {
                    union U0 **l_317 = &l_315;
                    unsigned char **l_320 = &l_130;
                    (*l_317) = l_315;
                    (*p_61) ^= (-8L);
                    for (l_250 = (-23); (l_250 == 54); l_250 = safe_add_func_uint64_t_u_u(l_250, 4))
                    {
                        unsigned char ***l_323 = &g_321;
                        const long long l_328 = 0x0059E374C3C970C7LL;
                        (*p_61) ^= ((p_62 > (g_55 == (l_320 != ((*l_323) = g_321)))) != ((safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(l_328, 0L)), (*g_322))) == (p_62 , (l_334 ^= ((((safe_mul_func_uint8_t_u_u(((**l_132)++), l_333)) <= 0x00L) > 0x24L) | l_328)))));
                    }
                }
            }
        }
    }
    else
    {
        unsigned char l_345 = 0x7FL;
        for (l_171 = 0; (l_171 != 9); l_171 = safe_add_func_uint64_t_u_u(l_171, 2))
        {
            unsigned short *l_342 = &g_109;
            char *l_346 = &g_347;
            int *l_349 = &g_101;
            int **l_348 = &l_349;
            (*p_61) = ((g_316.f0 , (((*l_346) = ((p_62 , &l_171) != (((((l_339 != &g_321) & ((*l_342) = (p_62 <= (safe_sub_func_uint8_t_u_u(l_171, g_97))))) ^ (safe_add_func_int8_t_s_s((l_345 , p_62), l_345))) , p_62) , (void*)0))) | p_62)) & 0UL);
            (*l_348) = p_61;
            (*l_348) = p_61;
            if (((void*)0 == l_350))
            {
                (*p_61) |= l_71;
                (*l_349) ^= (+g_131);
            }
            else
            {
                unsigned short l_353 = 0xF76FL;
                g_101 ^= (safe_sub_func_int8_t_s_s((g_90.f1 , l_353), ((((safe_lshift_func_int16_t_s_s(g_89, (safe_mul_func_int8_t_s_s((safe_mod_func_int64_t_s_s((safe_sub_func_uint32_t_u_u((p_62 , p_62), ((~(-2L)) <= p_62))), l_111)), 0x79L)))) , 0xDB2C2C76L) <= 0x5FE7B200L) ^ p_62)));
                for (g_97 = (-28); (g_97 > 46); g_97++)
                {
                    short l_364 = 0xD797L;
                    (*l_349) = l_364;
                    return l_71;
                }
            }
        }
        g_49 &= 0L;
    }
    (*l_365) = &l_171;
    return g_90.f0;
}







static int * func_65(long long p_66, int * p_67, unsigned p_68, const int * p_69, const unsigned p_70)
{
    int *l_91 = (void*)0;
    int *l_92 = &g_89;
    (*l_92) ^= (g_5 >= (g_90 , (&p_68 != (void*)0)));
    return p_67;
}







static int * func_72(unsigned p_73, long long p_74)
{
    int *l_87 = (void*)0;
    int *l_88 = &g_89;
    (*l_88) = (safe_unary_minus_func_uint32_t_u((safe_sub_func_uint64_t_u_u(g_83, p_74))));
    return l_88;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_90.f0, "g_90.f0", print_hash_value);
    transparent_crc(g_90.f1, "g_90.f1", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_303, "g_303", print_hash_value);
    transparent_crc(g_307, "g_307", print_hash_value);
    transparent_crc(g_316.f0, "g_316.f0", print_hash_value);
    transparent_crc(g_316.f1, "g_316.f1", print_hash_value);
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_370, "g_370", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_398, "g_398", print_hash_value);
    transparent_crc(g_413.f0, "g_413.f0", print_hash_value);
    transparent_crc(g_413.f1, "g_413.f1", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_580, "g_580", print_hash_value);
    transparent_crc(g_619, "g_619", print_hash_value);
    transparent_crc(g_647.f0, "g_647.f0", print_hash_value);
    transparent_crc(g_647.f1, "g_647.f1", print_hash_value);
    transparent_crc(g_665, "g_665", print_hash_value);
    transparent_crc(g_672, "g_672", print_hash_value);
    transparent_crc(g_674, "g_674", print_hash_value);
    transparent_crc(g_681, "g_681", print_hash_value);
    transparent_crc(g_682, "g_682", print_hash_value);
    transparent_crc(g_714.f0, "g_714.f0", print_hash_value);
    transparent_crc(g_714.f1, "g_714.f1", print_hash_value);
    transparent_crc(g_747, "g_747", print_hash_value);
    transparent_crc(g_833, "g_833", print_hash_value);
    transparent_crc(g_858, "g_858", print_hash_value);
    transparent_crc(g_885, "g_885", print_hash_value);
    transparent_crc(g_969, "g_969", print_hash_value);
    transparent_crc(g_977, "g_977", print_hash_value);
    transparent_crc(g_992, "g_992", print_hash_value);
    transparent_crc(g_1018.f0, "g_1018.f0", print_hash_value);
    transparent_crc(g_1018.f1, "g_1018.f1", print_hash_value);
    transparent_crc(g_1020, "g_1020", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
