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
   short f0;
   short f1;
   short f2;
   const unsigned short f3;
   int f4;
   unsigned f5;
   int f6;
   int f7;
   const unsigned f8;
};

struct S1 {
   const int f0;
   unsigned short f1;
   unsigned f2;
   int f3;
   short f4;
};


static unsigned char g_7 = 0x0EL;
static int g_8 = 0xA4BEDCC5L;
static int g_54 = 3L;
static int *g_58 = &g_54;
static int **g_57 = &g_58;
static struct S0 g_86 = {7L,0xEF3AL,0x864EL,1UL,0x26771399L,0xEA342190L,-3L,-2L,4294967295UL};
static struct S0 g_107 = {0x764CL,-2L,8L,0xC8D4L,0x572A9630L,4294967295UL,7L,0x2BDDC7CBL,0xABE471A2L};
static struct S1 g_117 = {0xB8DD85FCL,0x6EAAL,6UL,9L,1L};
static struct S1 *g_116 = &g_117;
static struct S1 g_119 = {0xF56F3C4EL,0x1865L,1UL,0x921E46D4L,1L};
static struct S1 *g_118 = &g_119;
static struct S0 *g_136 = (void*)0;
static struct S0 ** const g_135 = &g_136;
static unsigned char *g_171 = (void*)0;
static unsigned char **g_170 = &g_171;
static unsigned char ***g_169 = &g_170;
static short *g_213 = &g_86.f2;
static struct S0 **g_218 = &g_136;
static struct S1 g_229 = {0x3EADD13DL,0x49BEL,0x58439F27L,1L,0xEF52L};
static unsigned g_268 = 8UL;
static const int *g_323 = &g_119.f0;
static const int **g_322 = &g_323;
static char g_325 = 0xF2L;
static int **g_326 = (void*)0;
static int g_343 = 1L;
static const struct S1 g_346 = {1L,0xAB01L,0xE67839AEL,7L,-4L};
static const struct S1 *g_345 = &g_346;
static unsigned short g_453 = 65535UL;
static unsigned short g_530 = 65535UL;
static unsigned g_534 = 0xE4BA2902L;
static struct S1 g_655 = {1L,1UL,0x6EE377C0L,3L,0x64A9L};
static unsigned char g_749 = 0UL;
static unsigned char *g_748 = &g_749;
static unsigned short g_752 = 0x5E50L;
static unsigned short *g_823 = &g_117.f1;
static unsigned short **g_822 = &g_823;
static short **g_827 = (void*)0;
static unsigned short ** const g_854 = &g_823;
static unsigned short ** const *g_853 = &g_854;
static unsigned short ** const **g_852 = &g_853;
static struct S1 g_869 = {0L,0x6C5DL,0UL,0xA00FBA35L,8L};
static int *g_886 = &g_86.f6;



static unsigned short func_1(void);
static int * func_2(unsigned char p_3, int p_4);
static int ** func_9(unsigned p_10);
static int func_12(int ** const p_13, char p_14, unsigned short p_15, int p_16, int ** p_17);
static int ** func_20(const unsigned p_21);
static unsigned short func_24(int p_25, char p_26);
static int func_28(int p_29, unsigned char * p_30, struct S1 p_31);
static unsigned char * func_32(int * p_33, short p_34, const int ** p_35, int ** p_36);
static int * func_37(const unsigned p_38, char p_39, unsigned p_40, unsigned char p_41, int ** p_42);
static int ** func_45(int p_46, const unsigned char * p_47, int * p_48, unsigned char * p_49, short p_50);
static unsigned short func_1(void)
{
    short l_5 = (-1L);
    unsigned char *l_6 = &g_7;
    (*g_322) = func_2(((*l_6) = l_5), g_8);


    ;
    ;
    ;
    ;
    ;
    ;
    ;
    if (l_5)
    {
        struct S1 **l_889 = &g_118;
        (*g_886) = (-7L);
        for (l_5 = 0; (l_5 > (-17)); --l_5)
        {
            if (l_5)
                break;
        }
        (*g_322) = (*g_322);
        (*l_889) = (void*)0;

        ;
    }
    else
    {
        (*g_886) = l_5;
    }
    for (g_86.f0 = 28; (g_86.f0 == (-25)); g_86.f0--)
    {
        (*g_322) = (*g_322);
    }
    return (*g_823);
}







static int * func_2(unsigned char p_3, int p_4)
{
    int l_11 = 0L;
    int ***l_876 = (void*)0;
    int **l_877 = &g_58;
    unsigned char ***l_885 = &g_170;
    l_877 = func_9(l_11);


    ;
    ;
    ;
    ;

    ;
    ;
    ;
    for (g_655.f1 = 0; (g_655.f1 != 38); g_655.f1++)
    {
        unsigned char *l_880 = &g_7;
        struct S1 l_881 = {0x0C5F72C5L,0xB33AL,6UL,1L,0x98D8L};
        int *l_882 = &g_107.f6;
        (*g_322) = l_882;

        ;
        (*l_882) = ((*l_882) == (p_3 > (l_885 == &g_170)));
    }


    return g_886;


}







static int ** func_9(unsigned p_10)
{
    int ** const l_18 = (void*)0;
    int **l_19 = (void*)0;
    unsigned char *l_793 = &g_7;
    struct S1 l_794 = {0x9A8C8D45L,0xAD50L,18446744073709551615UL,-1L,0xCFBBL};
    int l_799 = 9L;
    int l_835 = 0L;
    char l_841 = 0xF6L;
    short ***l_865 = (void*)0;
    if (func_12(l_18, g_7, p_10, p_10, l_19))
    {
        unsigned short l_781 = 0x43CEL;
        int l_792 = 0L;
        int l_795 = 0xB85AA373L;
        struct S1 l_796 = {0x77495036L,0x8C40L,0x6003391CL,0x7339BE37L,0x3473L};
        int **l_811 = &g_58;
        char **l_842 = (void*)0;
        (*g_322) = &g_54;

        ;
        for (g_752 = 12; (g_752 <= 30); g_752 = safe_add_func_uint16_t_u_u(g_752, 9))
        {
            unsigned char l_782 = 0x06L;
            int *l_783 = &g_86.f6;
            unsigned char **l_788 = &g_748;
            (*l_783) = (l_781 >= l_782);
            (*g_322) = (*g_322);
            for (g_86.f7 = 0; (g_86.f7 >= (-19)); g_86.f7 = safe_sub_func_int16_t_s_s(g_86.f7, 1))
            {
                unsigned *l_791 = &g_86.f5;
            }
            for (g_119.f1 = 7; (g_119.f1 >= 58); g_119.f1 = safe_add_func_int8_t_s_s(g_119.f1, 1))
            {
                char *l_809 = &g_325;
                int l_810 = 0xAFC5A837L;
                struct S1 **l_870 = &g_116;
                l_810 = (safe_div_func_int8_t_s_s(((*l_809) = ((*l_783) != (((-1L) | g_8) <= (safe_mod_func_uint8_t_u_u(p_10, (-1L)))))), (+p_10)));
            }
        }
    }
    else
    {
        int l_871 = (-8L);
        int *l_872 = (void*)0;
        int *l_873 = (void*)0;
        int *l_874 = &g_54;
        int l_875 = 0xC8565291L;
        l_871 = p_10;
        l_875 = ((*l_874) = 0xF9794688L);
    }


    ;
    ;
    ;
    ;

    ;
    ;
    return l_19;


}







static int func_12(int ** const p_13, char p_14, unsigned short p_15, int p_16, int ** p_17)
{
    int ***l_776 = &g_326;
    unsigned char l_777 = 0x1EL;
    unsigned l_778 = 1UL;
    (*l_776) = func_20(g_8);


    ;
    ;
    ;
    ;

    ;
    ;
    l_778 = l_777;
    return l_778;
}







static int ** func_20(const unsigned p_21)
{
    unsigned l_27 = 0x7A10DD66L;
    short l_368 = 0xD879L;
    short **l_386 = (void*)0;
    int **l_390 = (void*)0;
    unsigned char *l_403 = &g_7;
    struct S1 *l_442 = &g_119;
    unsigned char l_448 = 0UL;
    const int **l_465 = &g_323;
    int **l_471 = &g_58;
    const int ** const l_488 = &g_323;
    int l_495 = 0x562B396DL;
    int *l_497 = &g_54;
    unsigned short * const l_652 = &g_117.f1;
    unsigned short * const *l_651 = &l_652;
    int *l_656 = &l_495;
    unsigned *l_667 = &g_268;
    char l_719 = 5L;
    unsigned l_720 = 18446744073709551611UL;
    unsigned char l_734 = 3UL;
    char l_735 = (-4L);
    struct S0 *l_775 = (void*)0;
    if ((safe_add_func_int8_t_s_s((func_24(g_7, l_27) ^ g_119.f2), ((void*)0 != g_171))))
    {
        short l_369 = (-7L);
        int l_387 = (-1L);
        int **l_412 = (void*)0;
        l_369 = (**g_322);
        for (g_325 = (-3); (g_325 > 21); g_325 = safe_add_func_int32_t_s_s(g_325, 6))
        {
            unsigned l_384 = 5UL;
            unsigned char *l_385 = &g_7;
            int l_404 = 0L;
            int *l_411 = &g_86.f6;
            l_387 = (safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((l_368 || (safe_rshift_func_int8_t_s_u(((3UL || ((safe_div_func_uint8_t_u_u(((*l_385) = (((safe_lshift_func_uint16_t_u_s(65535UL, 4)) < (safe_div_func_uint8_t_u_u(l_384, l_384))) | 0x017AL)), l_384)) <= (l_386 == (void*)0))) & p_21), p_21))), p_21)), g_86.f2));
            for (g_119.f3 = (-14); (g_119.f3 >= (-30)); g_119.f3--)
            {
                int ***l_391 = &g_57;
                (*l_391) = l_390;

                ;
            }
            for (g_107.f6 = 11; (g_107.f6 <= 1); g_107.f6 = safe_sub_func_int32_t_s_s(g_107.f6, 8))
            {
                unsigned short *l_402 = &g_119.f1;
                int l_407 = 0xAD18B259L;
            }
            (*l_411) = 2L;
        }

        ;
        return l_412;


    }
    else
    {
        int *l_413 = (void*)0;
        unsigned short * const l_416 = &g_229.f1;
        short ** const l_419 = &g_213;
        unsigned short *l_422 = &g_117.f1;
        unsigned short *l_425 = &g_119.f1;
        int l_426 = 0x1C8258AFL;
        unsigned char *l_462 = (void*)0;
        struct S1 l_463 = {0x368114C9L,0x005BL,18446744073709551615UL,1L,0x4FDDL};
        int **l_659 = &l_413;
        char *l_662 = &g_325;
        (*g_57) = l_413;
        if (((safe_add_func_uint8_t_u_u((~(((void*)0 != l_416) < (safe_mul_func_int16_t_s_s(((**l_419) = ((void*)0 == l_419)), (p_21 >= ((2L && p_21) == (l_426 = (((*l_422) = ((*l_416) = g_86.f4)) == ((*l_425) = (safe_rshift_func_uint8_t_u_s((p_21 ^ 0xF8493BBAL), g_107.f1))))))))))), g_8)) || 1UL))
        {
            unsigned l_427 = 0x0AB808DEL;
            char *l_428 = &g_325;
            int l_438 = 0xE06D0921L;
            int **l_503 = &g_58;
            struct S0 **l_576 = &g_136;
            if (l_427)
            {
                const unsigned short l_437 = 1UL;
                int **l_454 = &l_413;
                unsigned l_467 = 0xAC961514L;
                if (((void*)0 == l_428))
                {
                    struct S1 *l_429 = &g_119;
                    struct S1 **l_430 = &l_429;
                    unsigned char *l_431 = &g_7;
                    int l_433 = 0xA4E39C4EL;
                    struct S0 *l_436 = &g_86;
                    (*l_430) = l_429;
                    if ((!0xC983EDA9L))
                    {
                        return &g_58;


                    }
                    else
                    {
                        struct S1 l_432 = {0x192F95D6L,0x3B7DL,0UL,0xB2698821L,0x27D4L};
                        l_433 = func_28((*g_323), l_431, l_432);
                    }
                    if (((&g_325 == (void*)0) == (safe_rshift_func_uint16_t_u_u((g_107.f7 && p_21), (l_433 <= p_21)))))
                    {
                        (*g_218) = l_436;

                        ;
                        l_438 = (+l_437);
                        return l_390;


                    }
                    else
                    {
                        int *l_441 = &l_433;
                        (*l_441) = (safe_lshift_func_int8_t_s_s(l_438, p_21));
                        (*g_135) = l_436;

                        ;
                        (*l_430) = l_442;
                    }

                    ;
                }
                else
                {
                    unsigned l_443 = 18446744073709551611UL;
                    l_443 = l_438;
                    (*g_322) = func_37((safe_sub_func_uint32_t_u_u((~g_86.f8), ((safe_lshift_func_uint16_t_u_s(p_21, p_21)) > p_21))), (l_438 = ((*l_428) = l_438)), l_443, ((l_448 == p_21) && (safe_add_func_uint32_t_u_u(((g_453 = (safe_lshift_func_uint16_t_u_s(p_21, 4))) & p_21), p_21))), l_454);

                    ;
                }

                ;
                for (g_229.f2 = 0; (g_229.f2 <= 33); g_229.f2++)
                {
                    int l_459 = 0x9C823D7EL;
                    int l_470 = 1L;
                    struct S1 l_472 = {0x5943DF4CL,0UL,0xF09CD1F4L,0L,0x620FL};
                    int *l_473 = &l_470;
                    for (l_448 = 24; (l_448 >= 41); l_448 = safe_add_func_uint16_t_u_u(l_448, 9))
                    {
                        int l_464 = 0x2190FD33L;
                        int **l_466 = &g_58;
                        l_467 = (l_459 <= ((*l_422) = (safe_div_func_int32_t_s_s(((*g_213) | g_346.f4), g_86.f0))));
                        l_470 = (l_438 ^ (safe_sub_func_int16_t_s_s((*g_213), 0x6197L)));
                        l_438 = (l_427 && (*g_213));
                    }
                    (*l_473) = p_21;
                    return &g_58;


                }
                for (l_463.f1 = 0; (l_463.f1 < 22); l_463.f1 = safe_add_func_uint8_t_u_u(l_463.f1, 1))
                {
                    unsigned short l_484 = 0UL;
                    short *l_485 = &g_107.f2;
                    unsigned *l_489 = (void*)0;
                    unsigned *l_490 = &g_107.f5;
                    const unsigned l_491 = 4294967294UL;
                    int l_492 = (-1L);
                    l_492 = l_438;
                }
                l_413 = &l_438;

                ;
            }
            else
            {
                unsigned short ** const l_518 = (void*)0;
                unsigned short ** const *l_517 = &l_518;
                unsigned short ** const **l_516 = &l_517;
                int l_519 = 0L;
                struct S1 l_549 = {0x0D8071BBL,3UL,0x30BCC405L,0x43C9068DL,0x9AE7L};
                const int l_565 = 0L;
                unsigned short l_599 = 1UL;
                unsigned char l_608 = 255UL;
                for (g_107.f0 = 0; (g_107.f0 > (-29)); g_107.f0 = safe_sub_func_uint8_t_u_u(g_107.f0, 4))
                {
                    unsigned l_496 = 8UL;
                    int *l_498 = (void*)0;
                    int ***l_504 = (void*)0;
                    int ***l_505 = &l_503;
                    if (p_21)
                    {
                        l_495 = 0xCD46B3C5L;
                        (*g_322) = &l_426;

                        ;
                        (*g_322) = &l_438;

                        ;
                    }
                    else
                    {
                        l_496 = (*g_323);
                        l_498 = l_497;

                        ;
                    }

                    ;
                    for (g_107.f6 = (-14); (g_107.f6 != 18); g_107.f6 = safe_add_func_int32_t_s_s(g_107.f6, 3))
                    {
                        struct S1 **l_501 = (void*)0;
                        struct S1 **l_502 = &l_442;
                        (*l_502) = &g_229;

                        ;
                    }
                    (*l_505) = l_503;
                }

                ;
                ;
                if ((safe_rshift_func_int8_t_s_u(p_21, (safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u((safe_div_func_int16_t_s_s(func_28(((*l_497) = p_21), (**g_169), (*g_345)), (*g_213))), 5)) & (&g_136 != &g_136)), (((*l_516) = (void*)0) != (void*)0))), p_21)))))
                {
                    unsigned char *l_533 = &g_7;
                    unsigned short l_535 = 9UL;
                    l_519 = p_21;
                    (*l_465) = (*l_503);

                    ;
                    if ((p_21 & ((*l_403) = ((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((((0xDB9A8042L || 0x03033FBDL) && p_21) > (+0x922EL)), (g_534 <= 0x09B8BC99L))) == (*g_213)), l_535)) & l_519))))
                    {
                        unsigned char l_548 = 3UL;
                        int l_554 = 0xB5FCCB70L;
                        int l_555 = (-3L);
                        const struct S0 *l_556 = (void*)0;
                        (*l_497) = (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(p_21, 11)), 10));
                        g_86.f6 = ((*l_497) = l_548);
                        l_555 = (l_554 = (safe_mul_func_int8_t_s_s(p_21, ((~((*l_497) = (((void*)0 != l_497) != g_107.f5))) >= (safe_lshift_func_int8_t_s_u(g_346.f1, (g_229.f4 || l_548)))))));
                        (*l_497) = (((void*)0 != l_556) < (((((*l_403) = (safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((safe_add_func_int32_t_s_s((((safe_div_func_uint32_t_u_u((((void*)0 == &g_170) ^ ((*g_213) = 0xD484L)), (p_21 || ((void*)0 == &g_58)))) | ((+(p_21 & l_535)) && 0x09L)) & 0L), l_565)) > (-1L)), 6)), p_21))) | l_555) || p_21) <= 0x3949L));
                    }
                    else
                    {
                        struct S1 **l_568 = &g_118;
                        (*l_497) = (safe_lshift_func_int16_t_s_s(l_549.f2, 6));
                        g_86.f6 = ((void*)0 == &g_534);
                        (*l_568) = &g_117;

                        ;
                    }

                    ;
                }
                else
                {
                    const struct S0 *l_581 = &g_107;
                    const struct S0 **l_580 = &l_581;
                    unsigned *l_614 = &g_534;
                    int l_615 = 1L;
                    struct S1 *l_630 = &g_229;
                    const unsigned l_646 = 1UL;
                    for (g_229.f3 = 16; (g_229.f3 < (-21)); g_229.f3--)
                    {
                        struct S0 ***l_577 = &g_218;
                        int l_582 = 0x64778DA1L;
                        char *l_591 = &g_325;
                        l_582 = ((safe_mod_func_int16_t_s_s(l_549.f1, (safe_unary_minus_func_int8_t_s(p_21)))) > (g_86.f5 | p_21));
                        (*g_322) = &l_426;

                        ;
                        l_599 = ((g_119.f0 < ((*g_213) = (!(safe_rshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((l_403 == l_591), (safe_mul_func_int8_t_s_s(((*l_428) = ((safe_unary_minus_func_uint8_t_u((safe_mod_func_int32_t_s_s(p_21, ((safe_add_func_int8_t_s_s(p_21, p_21)) ^ ((&l_576 == &g_135) | p_21)))))) & l_549.f3)), l_549.f0)))), 5L)), l_582)), 4))))) || l_549.f0);
                    }

                    ;
                    (*l_497) = (safe_add_func_int32_t_s_s(((g_229.f4 && ((*g_213) = (g_119.f0 == (+((*l_422) = ((safe_lshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(l_438, (safe_rshift_func_uint16_t_u_u(l_608, g_453)))), 3)) && (safe_mod_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s((**l_488), (safe_unary_minus_func_uint32_t_u(((*l_614) = ((p_21 ^ g_119.f3) || (g_117.f0 < (*g_213)))))))) ^ p_21), p_21)))))))) >= g_8), l_615));
                    (*l_497) = (0x29L | (safe_lshift_func_int16_t_s_s((0x757332DAL >= (((safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((((*l_416) = ((safe_mod_func_uint32_t_u_u(g_117.f2, 2UL)) <= (~(safe_mod_func_int32_t_s_s(p_21, l_565))))) || p_21) <= (**g_322)), 4294967295UL)), (-1L))) != (*g_213)) <= p_21)), 14)));
                    if (p_21)
                    {
                        struct S1 **l_631 = (void*)0;
                        struct S1 **l_632 = &g_118;
                        int l_641 = 8L;
                        unsigned char *l_642 = &l_448;
                        unsigned short l_643 = 8UL;
                        (*l_497) = (l_641 = l_643);
                        (*l_497) = (p_21 < (safe_sub_func_uint8_t_u_u((l_643 < l_646), ((safe_rshift_func_int16_t_s_s(((p_21 != (safe_sub_func_int32_t_s_s((((((*l_428) = (&l_422 == l_651)) | 0xF7L) & (252UL | 0x78L)) <= 2UL), 1UL))) == 0x27L), (*g_213))) >= (-3L)))));
                        g_118 = l_442;

                        ;
                        (*l_497) = 0xAEE0B06EL;
                    }
                    else
                    {
                        struct S1 **l_653 = (void*)0;
                        struct S1 *l_654 = &g_655;
                        l_654 = l_630;

                        ;
                    }

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
        }
        else
        {
            (*g_57) = l_656;

            ;
            l_413 = func_37(p_21, p_21, p_21, l_463.f4, &l_497);

            ;
            (*g_57) = (*g_57);
            (**l_471) = ((*l_497) = p_21);
        }

        ;
        ;


        ;
        (*l_656) = ((*l_497) = (safe_div_func_int8_t_s_s(((((void*)0 != l_659) == (safe_lshift_func_int16_t_s_u((!p_21), (safe_div_func_int16_t_s_s((-10L), 0xAA22L))))) || g_346.f4), g_119.f1)));
        l_426 = 1L;
    }

    ;
    ;
    ;
    ;

    ;
    ;
    if ((safe_mul_func_int8_t_s_s(p_21, p_21)))
    {
        char l_668 = 1L;
        int *l_669 = &g_86.f6;
        l_668 = p_21;
        (*l_488) = l_669;

        ;
    }
    else
    {
        const unsigned l_674 = 8UL;
        int l_680 = 4L;
        for (g_86.f1 = 0; (g_86.f1 <= (-15)); g_86.f1 = safe_sub_func_uint32_t_u_u(g_86.f1, 9))
        {
            for (g_530 = (-29); (g_530 < 47); g_530 = safe_add_func_uint32_t_u_u(g_530, 5))
            {
                (*l_656) = (l_674 < (safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((*g_213))), ((*l_652) = 0x71C8L))));
                l_680 = ((safe_rshift_func_uint8_t_u_u(((*l_403) = p_21), 0)) & g_117.f3);
                (*l_471) = (*l_471);
            }
        }
    }


    if ((safe_sub_func_int8_t_s_s(3L, g_655.f0)))
    {
        (*l_497) = p_21;
    }
    else
    {
        int *l_690 = (void*)0;
        unsigned char *l_702 = &l_448;
        char l_723 = 0xD4L;
        struct S1 l_750 = {0xA3BB57DCL,0x7BE7L,1UL,0x0DED63E8L,1L};
        int *l_768 = &l_495;
        (*l_471) = l_690;

        ;
        for (g_119.f4 = (-17); (g_119.f4 == 1); g_119.f4++)
        {
            (*l_497) = p_21;
        }
        if ((p_21 < g_117.f2))
        {
            int *l_695 = &g_54;
            struct S1 l_703 = {-10L,65534UL,0UL,0xBB6391FBL,-2L};
            if ((safe_rshift_func_int16_t_s_u((p_21 == p_21), p_21)))
            {
                const int *l_710 = (void*)0;
                for (g_119.f4 = 0; (g_119.f4 <= 10); g_119.f4++)
                {
                    if (p_21)
                    {
                        int l_706 = 0xF2D43B3FL;
                        (*l_695) = l_706;
                    }
                    else
                    {
                        int *l_707 = &g_86.f6;
                        l_707 = l_695;

                        ;
                        (*g_322) = l_695;

                        ;
                        (*g_57) = (*g_57);
                        return &g_58;


                    }
                    for (l_495 = (-3); (l_495 > 0); l_495++)
                    {
                        (*l_488) = l_710;

                        ;
                    }
                    (*l_695) = (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(65535UL, p_21)), (safe_div_func_uint32_t_u_u(0x0C616228L, p_21))));
                    if ((*l_695))
                    {
                        (*g_322) = l_695;

                        ;
                    }
                    else
                    {
                        if (p_21)
                            break;
                        (*l_465) = (void*)0;

                        ;
                        (*l_656) = ((-10L) != p_21);
                        return &g_58;


                    }

                    ;
                }
            }
            else
            {
                (*l_656) = (p_21 <= (safe_add_func_int32_t_s_s(0xCADBE705L, g_117.f0)));
            }
            (*g_57) = l_690;
            (*l_656) = (-1L);
        }
        else
        {
            char *l_729 = (void*)0;
            char *l_730 = &g_325;
            int l_731 = 0x5F4BFC2FL;
            struct S1 l_771 = {0x931E9AAAL,0xBE52L,1UL,0x18367171L,0xF02DL};
            if (((safe_div_func_int32_t_s_s(0x20FA3370L, l_723)) & (safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((*l_730) = (safe_unary_minus_func_uint32_t_u((&g_58 != &l_690)))), (((((*g_213) = 0L) | (p_21 & l_731)) ^ (p_21 ^ (safe_rshift_func_int8_t_s_s((-2L), l_734)))) | 0L))), l_735))))
            {
                short l_747 = 3L;
                int l_751 = 0x952A8AACL;
                int *l_757 = &g_107.f6;
                (*l_656) = (((*l_667) = (safe_div_func_uint8_t_u_u(((l_751 = (safe_mod_func_uint16_t_u_u(l_751, 6L))) >= p_21), p_21))) & g_752);
                l_757 = l_690;

                ;
                (*l_465) = (*l_471);

                ;
            }
            else
            {
                short l_769 = 0x877CL;
                int **l_772 = &l_690;
                for (g_655.f4 = 12; (g_655.f4 > 11); g_655.f4 = safe_sub_func_int32_t_s_s(g_655.f4, 3))
                {
                    short l_770 = 0x19ECL;
                    for (l_734 = 0; (l_734 == 45); ++l_734)
                    {
                        (*g_322) = l_768;

                        ;
                        l_769 = p_21;
                    }


                    (*g_57) = l_768;

                    ;
                    (*g_322) = &l_731;

                    ;
                    (*l_768) = (safe_sub_func_int8_t_s_s((*l_656), l_771.f1));
                }

                ;

            }

            ;

        }

        ;
        (*g_135) = l_775;

        ;
    }
    (*l_497) = (*l_656);
    return &g_58;



}







static unsigned short func_24(int p_25, char p_26)
{
    const unsigned char *l_51 = &g_7;
    int *l_53 = &g_54;
    int **l_52 = &l_53;
    unsigned char *l_55 = &g_7;
    unsigned char l_56 = 248UL;
    int ***l_320 = (void*)0;
    int ***l_321 = &g_57;
    char *l_324 = &g_325;
    int *l_352 = &g_54;
    const int *l_354 = (void*)0;
    const int **l_353 = &l_354;
    struct S1 l_358 = {0x90025CD2L,0x2257L,0x348755DAL,0L,0xD008L};
    int l_367 = 1L;
    l_367 = func_28(p_26, func_32((l_352 = func_37((g_8 | (safe_rshift_func_int8_t_s_s(((*l_324) = (((*l_321) = func_45(p_26, l_51, ((*l_52) = (void*)0), l_55, l_56)) != g_322)), p_25))), g_107.f1, p_25, p_26, g_326)), g_107.f3, l_353, l_52), l_358);

    ;
    ;
    ;
    ;
    ;
    ;
    ;
    return p_25;
}







static int func_28(int p_29, unsigned char * p_30, struct S1 p_31)
{
    int *l_359 = (void*)0;
    int *l_360 = &g_86.f6;
    short **l_366 = &g_213;
    short ***l_365 = &l_366;
    p_29 = ((((*l_360) = 0xEC71239FL) != (safe_rshift_func_uint16_t_u_s(p_31.f2, 15))) == ((safe_mul_func_int16_t_s_s((p_31.f1 && ((*g_213) != (*g_213))), g_86.f1)) || p_31.f0));
    (*l_365) = (void*)0;

    ;
    return (*g_323);
}







static unsigned char * func_32(int * p_33, short p_34, const int ** p_35, int ** p_36)
{
    unsigned char *l_357 = (void*)0;
    (*g_57) = (void*)0;

    ;
    for (g_107.f2 = (-5); (g_107.f2 < 29); g_107.f2 = safe_add_func_int16_t_s_s(g_107.f2, 3))
    {
        (*g_322) = (*g_322);
    }
    return l_357;


}







static int * func_37(const unsigned p_38, char p_39, unsigned p_40, unsigned char p_41, int ** p_42)
{
    unsigned l_336 = 0UL;
    int *l_351 = (void*)0;
    for (p_41 = 0; (p_41 != 14); p_41++)
    {
        int l_335 = 4L;
        char *l_337 = &g_325;
        unsigned *l_342 = &g_268;
        const struct S1 *l_344 = &g_117;
        int *l_350 = &g_54;
        if ((safe_rshift_func_int8_t_s_u((((*l_337) = (safe_lshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s((((((*g_213) = p_40) ^ l_335) | g_107.f2) == g_8), l_336)), 3))) >= (safe_add_func_uint8_t_u_u((l_336 & (safe_rshift_func_int16_t_s_u(p_39, 15))), ((p_39 && (((((*l_342) = 0xB0F1111AL) <= l_335) < l_336) >= l_336)) <= g_343)))), p_41)))
        {
            g_345 = l_344;

            ;
            (*g_322) = (*g_322);
        }
        else
        {
            struct S0 * const l_347 = &g_107;
            struct S0 **l_348 = (void*)0;
            struct S0 **l_349 = &g_136;
            (*l_349) = l_347;

            ;
        }
        return l_350;


    }
    return l_351;


}







static int ** func_45(int p_46, const unsigned char * p_47, int * p_48, unsigned char * p_49, short p_50)
{
    int *l_59 = (void*)0;
    unsigned char *l_73 = &g_7;
    short l_74 = 0L;
    struct S0 *l_85 = &g_86;
    int *l_90 = &g_86.f6;
    unsigned char l_112 = 0xDEL;
    unsigned char l_126 = 0x27L;
    int *l_141 = &g_54;
    const unsigned short *l_180 = &g_86.f3;
    const struct S1 *l_249 = &g_119;
    const short l_278 = 0L;
    unsigned short *l_308 = &g_117.f1;
    if (((void*)0 != g_57))
    {
        int *l_62 = &g_54;
        (*g_57) = l_59;

        ;
        for (p_50 = 0; (p_50 == 14); p_50++)
        {
            int l_63 = (-9L);
            int l_64 = 0xED5297F1L;
            (*g_57) = l_62;

            ;
            l_64 = ((g_7 = g_54) != l_63);
            (*g_57) = (*g_57);
            if ((*g_58))
                break;
        }

        ;
    }
    else
    {
        short l_79 = (-2L);
        int l_84 = 1L;
        (**g_57) = ((safe_div_func_int32_t_s_s((safe_add_func_uint32_t_u_u((((safe_add_func_int8_t_s_s((-1L), (g_8 && (safe_div_func_int8_t_s_s(((l_73 != (void*)0) | 0x10L), (l_74 | (g_7 | (safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s((**g_57), (0x5D00L > g_8))), g_54))))))))) < p_46) | l_79), (*g_58))), 0xAF8A8FF0L)) <= g_7);
        (*g_57) = p_48;

        ;
        for (p_46 = 0; (p_46 <= (-9)); p_46 = safe_sub_func_int32_t_s_s(p_46, 4))
        {
            struct S0 **l_87 = &l_85;
            struct S0 *l_89 = &g_86;
            struct S0 **l_88 = &l_89;
            for (g_7 = 0; (g_7 > 23); ++g_7)
            {
                l_84 = (g_7 != 4L);
            }
            (*g_57) = l_59;
            (*l_88) = ((*l_87) = l_85);
            if (p_50)
                break;
        }
        (*g_57) = p_48;
    }

    ;
    if (((*l_90) = l_74))
    {
        const int *l_124 = &g_119.f0;
        int l_154 = (-9L);
        for (g_86.f7 = 0; (g_86.f7 == (-16)); g_86.f7--)
        {
            int *l_93 = &g_54;
            int *l_94 = &g_86.f6;
            int **l_95 = (void*)0;
            int **l_96 = &l_94;
            unsigned *l_99 = &g_86.f5;
            struct S0 *l_106 = &g_107;
            short *l_108 = &g_107.f0;
            unsigned *l_109 = &g_107.f5;
            (*g_57) = l_93;

            ;
            (*g_57) = (*g_57);
            (*l_96) = ((*g_57) = l_94);

            ;
            (*l_90) = (safe_sub_func_uint32_t_u_u(((*l_99) = (*l_90)), ((*l_109) = (safe_div_func_int16_t_s_s(((safe_add_func_int32_t_s_s((**g_57), (*g_58))) || p_50), (+(((((*l_108) = (!(safe_div_func_int8_t_s_s((l_106 != l_85), p_46)))) <= p_46) >= g_54) & p_46)))))));
        }

        ;
        for (p_46 = 0; (p_46 > (-24)); --p_46)
        {
            int l_122 = (-3L);
            const int *l_125 = &l_122;
            int **l_147 = &g_58;
            (*g_57) = p_48;

            ;
            if (l_112)
            {
                int * const l_113 = (void*)0;
                int **l_114 = &l_59;
                (*l_114) = l_113;
                (*l_114) = l_59;
                if (p_50)
                    break;
            }
            else
            {
                struct S1 **l_115 = (void*)0;
                int l_123 = (-9L);
                g_118 = (g_116 = (void*)0);

                ;
                ;
                (*l_90) = 1L;
                if ((safe_mod_func_int32_t_s_s(l_122, l_123)))
                {
                    p_48 = p_48;
                    l_125 = l_124;

                    ;
                    if (l_126)
                    {
                        (*g_57) = &l_123;

                        ;
                        if ((*g_58))
                            continue;

                        if ((*g_58))
                            break;

                    }
                    else
                    {
                        l_123 = (*l_125);
                        if ((*l_90))
                            continue;
                        if ((*l_124))
                            break;
                        l_123 = (safe_lshift_func_int16_t_s_u((~(safe_mul_func_int16_t_s_s(g_86.f2, (safe_lshift_func_uint16_t_u_s(((safe_mul_func_int8_t_s_s((l_122 = 8L), ((void*)0 != g_135))) && (*l_125)), 5))))), 12));
                    }

                    ;
                    for (g_54 = 23; (g_54 > 8); g_54--)
                    {
                        (*g_57) = p_48;

                        ;
                    }
                }
                else
                {
                    for (g_7 = (-28); (g_7 < 45); g_7 = safe_add_func_int8_t_s_s(g_7, 5))
                    {
                        (*g_57) = l_141;

                        ;
                        (*g_57) = p_48;

                        ;
                        (*l_90) = (*l_124);
                    }
                    for (g_86.f7 = 0; (g_86.f7 > 19); g_86.f7 = safe_add_func_uint16_t_u_u(g_86.f7, 8))
                    {
                        (*g_57) = p_48;
                        return &g_58;


                    }
                }

                ;
                ;
                if (p_46)
                    continue;

            }


            ;
            if (((*l_141) = 0x9AB5F6EBL))
            {
                unsigned char **l_156 = (void*)0;
                if ((*l_125))
                {
                    (*g_135) = l_85;

                    ;
                }
                else
                {
                    char l_146 = 0x6FL;
                    for (g_117.f4 = 0; (g_117.f4 <= 17); g_117.f4++)
                    {
                        (*l_90) = l_146;
                    }
                    return l_147;


                }

                ;
                for (g_107.f0 = 0; (g_107.f0 >= (-2)); --g_107.f0)
                {
                    unsigned char ***l_157 = &l_156;
                    for (g_107.f6 = 0; (g_107.f6 > (-14)); --g_107.f6)
                    {
                        int *l_155 = &g_107.f6;
                        l_154 = ((safe_lshift_func_int8_t_s_s((*l_90), 4)) ^ g_86.f8);
                        (*l_147) = l_155;

                        ;
                    }
                    (*l_157) = l_156;
                }


            }
            else
            {
                int *l_158 = (void*)0;
                unsigned *l_159 = (void*)0;
                unsigned *l_160 = &g_86.f5;
                unsigned l_177 = 0x8A0E647CL;
                unsigned short *l_181 = &g_119.f1;
                l_158 = p_48;
                if (((((*l_160) = p_50) > (((safe_sub_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(g_117.f4, g_7)) >= g_7), ((((p_49 = &g_7) == p_47) < (((*p_47) || (g_117.f2 <= (safe_rshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u((*l_124), 0x52CAL)), p_50)))) > 5L)) && (*l_124)))) | 0L) && 0xE4L)) >= g_117.f2))
                {
                    (*l_90) = (p_50 == (0x4BL && ((void*)0 == g_169)));
                }
                else
                {
                    g_116 = &g_119;

                    ;
                    if ((*l_124))
                        break;
                }
                for (g_86.f2 = 4; (g_86.f2 == 24); g_86.f2 = safe_add_func_int16_t_s_s(g_86.f2, 9))
                {
                    if (p_46)
                    {
                        unsigned short *l_174 = &g_117.f1;
                        unsigned short **l_182 = &l_181;
                        int l_183 = 1L;
                        (*l_90) = p_50;
                        if ((*l_141))
                            continue;
                        (*l_141) = ((((*l_174) = p_50) == 0xBAE6L) | ((safe_mul_func_int8_t_s_s(l_177, (*p_49))) && ((safe_mod_func_int8_t_s_s(((l_180 != ((*l_182) = l_181)) > p_50), (l_183 = (*l_90)))) ^ 0x21L)));
                        (*l_90) = l_183;
                    }
                    else
                    {
                        (*g_135) = (*g_135);
                        (*g_57) = &g_54;

                        ;
                        return &g_58;


                    }
                }
            }


        }


        ;
        ;
        ;
        l_154 = p_50;
        (*g_57) = p_48;

        ;
    }
    else
    {
        unsigned l_184 = 4294967289UL;
        int l_185 = 0xFCC78449L;
        struct S1 *l_195 = &g_119;
        unsigned char l_211 = 246UL;
        int l_224 = 0xDD3F7657L;
        const struct S1 *l_234 = &g_117;
        int *l_319 = &l_185;
        (*l_141) = p_50;
        if (l_184)
        {
            char l_186 = 0L;
            int l_219 = 0x6635F1EAL;
            (*g_57) = (*g_57);
            l_185 = ((*l_90) = 0L);
            (*l_141) = (l_186 ^ (safe_mod_func_uint32_t_u_u((((safe_add_func_uint16_t_u_u(g_86.f8, (*l_141))) == (safe_mul_func_uint8_t_u_u((l_184 && ((void*)0 == &l_73)), (*l_90)))) < 1UL), (*l_141))));
            if ((safe_lshift_func_uint8_t_u_u((*p_47), ((void*)0 != (*g_135)))))
            {
                struct S0 *l_198 = &g_107;
                int l_201 = (-1L);
                char *l_204 = (void*)0;
                char *l_205 = &l_186;
                short *l_208 = &g_86.f1;
                unsigned short *l_209 = &g_117.f1;
                unsigned char l_210 = 4UL;
                unsigned l_215 = 0xB5AE6562L;
                (*l_141) = ((*l_90) = (((void*)0 != l_195) <= (safe_rshift_func_uint8_t_u_s((l_185 != (l_198 == (void*)0)), g_7))));
                if ((safe_sub_func_int16_t_s_s(((l_184 == l_184) ^ l_201), (safe_mod_func_int16_t_s_s((((g_7 = 0xFDL) > (0x09L == ((*l_205) = 1L))) && ((l_210 = ((*l_209) = ((p_50 & p_50) <= ((*l_208) = (safe_lshift_func_uint8_t_u_s(6UL, 5)))))) == l_211)), p_50)))))
                {
                    int *l_212 = (void*)0;
                    (*g_57) = l_212;

                    ;
                    (*g_57) = (*g_57);
                    (*l_90) = ((*l_141) = g_119.f0);
                    (*l_141) = ((*l_90) = (l_184 == ((void*)0 != g_213)));
                }
                else
                {
                    int l_214 = 1L;
                    (*g_57) = l_90;

                    ;
                    (*l_90) = l_185;
                    if ((**g_57))
                    {
                        (*l_141) = ((*g_58) = (l_214 | (l_215 = ((void*)0 == p_48))));
                        (*g_57) = (*g_57);
                    }
                    else
                    {
                        (*l_141) = (safe_mod_func_uint16_t_u_u(p_50, (*g_213)));
                    }
                }

                ;
            }
            else
            {
                short l_238 = (-3L);
                int *l_244 = &l_219;
                if (((l_219 = (g_86.f0 = ((*g_213) = (&g_136 == g_218)))) == ((safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(((*p_49) = 255UL), l_224)), (*l_90))) < p_46)))
                {
                    (*l_90) = p_50;
                    (*g_57) = p_48;

                    ;
                    if ((l_185 >= p_50))
                    {
                        int **l_227 = &l_90;
                        (*l_90) = (safe_lshift_func_uint16_t_u_u(65526UL, p_50));
                        (*l_90) = ((g_86.f0 <= (!0xAE251091L)) <= (*g_213));
                        (*l_227) = ((*g_57) = p_48);

                        ;
                        (*g_57) = (*g_57);
                    }
                    else
                    {
                        struct S1 *l_228 = &g_229;
                        l_228 = (void*)0;

                        ;
                        (*l_90) = l_184;
                        (*l_141) = l_211;
                    }

                    ;
                }
                else
                {
                    unsigned short *l_232 = (void*)0;
                    unsigned short *l_233 = &g_119.f1;
                    if (((*l_90) = (safe_rshift_func_uint16_t_u_s(((*l_233) = g_119.f2), 1))))
                    {
                        const struct S1 **l_235 = &l_234;
                        (*l_90) = l_184;
                        (*l_235) = l_234;
                    }
                    else
                    {
                        (*l_90) = (safe_sub_func_uint32_t_u_u(g_107.f0, 0xA2DF3804L));
                    }
                    return &g_58;


                }

                ;
                ;
                if (l_219)
                {
                    unsigned l_243 = 1UL;
                    const int *l_245 = &l_185;
                    (*g_57) = &l_219;

                    ;
                    (*l_141) = ((*g_58) || l_238);
                    if ((l_219 != (safe_lshift_func_int16_t_s_u((*g_213), g_86.f2))))
                    {
                        (*g_57) = (*g_57);
                        (**g_57) = (safe_div_func_uint16_t_u_u(l_243, p_50));
                        (*l_141) = 0L;
                    }
                    else
                    {
                        const int **l_246 = &l_245;
                        (**g_57) = p_46;
                        (*g_57) = l_244;
                        (*l_246) = l_245;
                        (*g_57) = l_244;
                    }
                }
                else
                {
                    unsigned short *l_256 = &g_117.f1;
                    unsigned short **l_255 = &l_256;
                    unsigned short ***l_254 = &l_255;
                    int l_257 = 0x00375982L;
                    struct S1 *l_271 = (void*)0;
                    (*l_244) = (safe_rshift_func_int16_t_s_s((l_195 == l_249), (safe_mul_func_uint8_t_u_u((g_107.f3 && (safe_add_func_int32_t_s_s(p_50, (((((*l_254) = (void*)0) == &l_180) ^ (-1L)) || l_257)))), (*l_244)))));

                    ;
                    for (l_211 = (-5); (l_211 != 28); ++l_211)
                    {
                        int l_279 = 1L;
                        (*l_244) = 0x37CAFADEL;
                        (*l_141) = (safe_lshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(p_46, g_229.f2)) > (safe_div_func_int32_t_s_s(g_268, (safe_div_func_int32_t_s_s((&g_229 == l_271), (safe_div_func_int32_t_s_s((p_46 ^ l_224), l_219))))))), (safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(l_278, 0x4D85BD37L)), l_279)))), l_219));
                    }
                }

                ;
            }

            ;
            ;
        }
        else
        {
            unsigned char ** const *l_288 = &g_170;
            int l_293 = 6L;
            (*g_218) = (void*)0;
            if (p_50)
            {
                (*l_141) = (g_107.f3 ^ ((safe_rshift_func_int8_t_s_s(l_211, 1)) >= (0xCA45F45CL ^ l_185)));
                (*g_57) = (void*)0;

                ;
                (*g_57) = p_48;
            }
            else
            {
                int *l_282 = &l_224;
                const unsigned char ***l_287 = (void*)0;
                (*g_57) = (l_282 = p_48);

                ;
                ;
                (*g_57) = &l_185;

                ;
                (**g_57) = ((safe_mod_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u(l_185, (l_287 == l_288))) | ((*p_49) = (*l_90))) && 9L), (safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u((l_184 < l_293), ((void*)0 == &p_50))), g_119.f0)))) < (*g_213));
                if ((**g_57))
                {
                    (**g_57) = 0xBDFAEDB5L;
                }
                else
                {
                    return &g_58;



                }
            }

            ;
            if (((*l_90) = ((*l_141) = (safe_add_func_uint16_t_u_u(l_293, (safe_lshift_func_int16_t_s_u((l_73 != g_171), 1)))))))
            {
                unsigned short l_298 = 0xC805L;
                int *l_299 = &l_185;
                (*l_141) = l_298;
                (*g_57) = l_299;

                ;
                (*g_57) = p_48;

                ;
                (*g_57) = (*g_57);
            }
            else
            {
                unsigned short l_300 = 65534UL;
                int l_303 = 9L;
                (*l_141) = l_300;
                for (g_86.f0 = 0; (g_86.f0 >= (-13)); g_86.f0 = safe_sub_func_uint32_t_u_u(g_86.f0, 2))
                {
                    unsigned l_305 = 0x904D1D3EL;
                    if (((*l_141) = (l_303 & (~0x5AL))))
                    {
                        char l_304 = 0L;
                        l_305 = l_304;
                    }
                    else
                    {
                        unsigned short **l_309 = &l_308;
                        short *l_316 = &l_74;
                        (*l_141) = ((*l_90) = ((+(0xC0L ^ (safe_div_func_uint32_t_u_u((((*l_309) = l_308) != l_180), (g_107.f5 = l_224))))) | (safe_unary_minus_func_uint32_t_u((safe_unary_minus_func_int32_t_s((*l_90)))))));
                        (*l_141) = (l_185 = ((((safe_sub_func_uint32_t_u_u((((*g_213) <= ((*l_316) = (!l_305))) || (p_46 < (*p_49))), p_46)) | g_117.f0) != p_50) > (safe_rshift_func_uint8_t_u_s(1UL, 5))));
                    }
                    l_319 = p_48;

                    ;
                    (*g_135) = (void*)0;
                    (*g_57) = p_48;

                    ;
                }

                ;
                (*l_90) = 7L;
                (*l_141) = (0x582EAE93L & (251UL >= ((*p_49) == (g_213 != g_213))));
            }

            ;
        }


        ;
        ;
    }


    ;
    ;
    ;
    ;
    return &g_58;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_86.f0, "g_86.f0", print_hash_value);
    transparent_crc(g_86.f1, "g_86.f1", print_hash_value);
    transparent_crc(g_86.f2, "g_86.f2", print_hash_value);
    transparent_crc(g_86.f3, "g_86.f3", print_hash_value);
    transparent_crc(g_86.f4, "g_86.f4", print_hash_value);
    transparent_crc(g_86.f5, "g_86.f5", print_hash_value);
    transparent_crc(g_86.f6, "g_86.f6", print_hash_value);
    transparent_crc(g_86.f7, "g_86.f7", print_hash_value);
    transparent_crc(g_86.f8, "g_86.f8", print_hash_value);
    transparent_crc(g_107.f0, "g_107.f0", print_hash_value);
    transparent_crc(g_107.f1, "g_107.f1", print_hash_value);
    transparent_crc(g_107.f2, "g_107.f2", print_hash_value);
    transparent_crc(g_107.f3, "g_107.f3", print_hash_value);
    transparent_crc(g_107.f4, "g_107.f4", print_hash_value);
    transparent_crc(g_107.f5, "g_107.f5", print_hash_value);
    transparent_crc(g_107.f6, "g_107.f6", print_hash_value);
    transparent_crc(g_107.f7, "g_107.f7", print_hash_value);
    transparent_crc(g_107.f8, "g_107.f8", print_hash_value);
    transparent_crc(g_117.f0, "g_117.f0", print_hash_value);
    transparent_crc(g_117.f1, "g_117.f1", print_hash_value);
    transparent_crc(g_117.f2, "g_117.f2", print_hash_value);
    transparent_crc(g_117.f3, "g_117.f3", print_hash_value);
    transparent_crc(g_117.f4, "g_117.f4", print_hash_value);
    transparent_crc(g_119.f0, "g_119.f0", print_hash_value);
    transparent_crc(g_119.f1, "g_119.f1", print_hash_value);
    transparent_crc(g_119.f2, "g_119.f2", print_hash_value);
    transparent_crc(g_119.f3, "g_119.f3", print_hash_value);
    transparent_crc(g_119.f4, "g_119.f4", print_hash_value);
    transparent_crc(g_229.f0, "g_229.f0", print_hash_value);
    transparent_crc(g_229.f1, "g_229.f1", print_hash_value);
    transparent_crc(g_229.f2, "g_229.f2", print_hash_value);
    transparent_crc(g_229.f3, "g_229.f3", print_hash_value);
    transparent_crc(g_229.f4, "g_229.f4", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_343, "g_343", print_hash_value);
    transparent_crc(g_346.f0, "g_346.f0", print_hash_value);
    transparent_crc(g_346.f1, "g_346.f1", print_hash_value);
    transparent_crc(g_346.f2, "g_346.f2", print_hash_value);
    transparent_crc(g_346.f3, "g_346.f3", print_hash_value);
    transparent_crc(g_346.f4, "g_346.f4", print_hash_value);
    transparent_crc(g_453, "g_453", print_hash_value);
    transparent_crc(g_530, "g_530", print_hash_value);
    transparent_crc(g_534, "g_534", print_hash_value);
    transparent_crc(g_655.f0, "g_655.f0", print_hash_value);
    transparent_crc(g_655.f1, "g_655.f1", print_hash_value);
    transparent_crc(g_655.f2, "g_655.f2", print_hash_value);
    transparent_crc(g_655.f3, "g_655.f3", print_hash_value);
    transparent_crc(g_655.f4, "g_655.f4", print_hash_value);
    transparent_crc(g_749, "g_749", print_hash_value);
    transparent_crc(g_752, "g_752", print_hash_value);
    transparent_crc(g_869.f0, "g_869.f0", print_hash_value);
    transparent_crc(g_869.f1, "g_869.f1", print_hash_value);
    transparent_crc(g_869.f2, "g_869.f2", print_hash_value);
    transparent_crc(g_869.f3, "g_869.f3", print_hash_value);
    transparent_crc(g_869.f4, "g_869.f4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
