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
   unsigned f0;
   signed f1 : 29;
   char * f2;
   unsigned short f3;
   const unsigned short f4;
};

union U1 {
   signed f0 : 14;
};


static long long g_10[1] = {0x41E4F1F13B01D91ELL};
static char g_21 = 0x63L;
static int g_56 = 0x8597A0B8L;
static char *g_73 = (void*)0;
static int g_75 = 0x3981DC8AL;
static char **g_78 = &g_73;
static union U1 g_95 = {-1L};
static union U0 g_127 = {0x170163A6L};
static union U1 *g_162 = &g_95;
static int *g_177 = &g_75;
static int **g_191 = &g_177;
static int ***g_190 = &g_191;
static unsigned short g_197 = 65535UL;
static const int *g_297 = &g_56;
static union U1 *** const g_314 = (void*)0;
static char g_318 = 0x01L;
static union U0 *g_357 = (void*)0;
static union U0 **g_356 = &g_357;
static int g_425 = 0xDCAEDFCAL;
static const char g_514 = 2L;



static unsigned short func_1(void);
static unsigned long long func_3(char * p_4, char * p_5, char * p_6, char * p_7);
static union U0 func_8(unsigned long long p_9);
static unsigned short func_13(char * p_14);
static char * func_15(unsigned p_16, const unsigned short p_17, char * p_18, short p_19);
static unsigned char func_24(unsigned short p_25, char * p_26, int p_27);
static char * func_28(unsigned p_29, char * p_30, char * const p_31);
static char func_35(long long p_36, char p_37, unsigned char p_38, char * p_39, unsigned short p_40);
static union U0 func_43(char * p_44, long long p_45, union U1 p_46, char * p_47);
static char * func_48(int p_49, char * p_50, int p_51, const char * p_52);
static unsigned short func_1(void)
{
    unsigned char l_2 = 0x5CL;
    char **l_305 = &g_73;
    union U1 **l_313 = &g_162;
    union U1 ***l_312[1];
    const long long l_315 = (-1L);
    const unsigned short l_316[7][7] = {{0x4224L, 2UL, 65533UL, 0x62B5L, 0xA4E1L, 0x62B5L, 65533UL}, {0x4224L, 2UL, 65533UL, 0x62B5L, 0xA4E1L, 0x62B5L, 65533UL}, {0x4224L, 2UL, 65533UL, 0x62B5L, 0xA4E1L, 0x62B5L, 65533UL}, {0x4224L, 2UL, 65533UL, 0x62B5L, 0xA4E1L, 0x62B5L, 65533UL}, {0x4224L, 2UL, 65533UL, 0x62B5L, 0xA4E1L, 0x62B5L, 65533UL}, {0x4224L, 2UL, 65533UL, 0x62B5L, 0xA4E1L, 0x62B5L, 65533UL}, {0x4224L, 2UL, 65533UL, 0x62B5L, 0xA4E1L, 0x62B5L, 65533UL}};
    char *l_317[5];
    int *l_525 = (void*)0;
    unsigned char l_546 = 1UL;
    union U0 l_548 = {0UL};
    int i, j;
    for (i = 0; i < 1; i++)
        l_312[i] = &l_313;
    for (i = 0; i < 5; i++)
        l_317[i] = &g_318;
    g_95.f0 = (l_2 != (func_3(((((func_8(g_10[0]) , func_28((((g_10[0] != ((65535UL | g_127.f3) | (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((((((l_305 == ((safe_lshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s(((safe_sub_func_uint32_t_u_u(0x53DE2249L, ((((*g_162) , l_312[0]) == g_314) ^ 0L))) | 4294967286UL), 0x5DDD6B6EAE9B237BLL)), 10)) , &g_73)) ^ l_2) | l_315) , 0L) ^ 1L), 5)), l_316[4][5])))) && (-2L)) >= 0xBB9FAACF56058C3ELL), (*l_305), (*l_305))) == (*g_78)) == 0x6870AA87L) , (*g_78)), (*l_305), (*l_305), l_317[0]) , l_316[0][1]));
    for (g_21 = 0; (g_21 >= 0); g_21 -= 1)
    {
        char *l_534 = (void*)0;
        unsigned short l_535 = 65527UL;
        int *l_536[10][8][3] = {{{&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}}, {{&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}}, {{&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}}, {{&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}}, {{&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}}, {{&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}}, {{&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}}, {{&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}}, {{&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}}, {{&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}, {&g_75, &g_75, &g_75}}};
        union U0 l_560[8] = {{18446744073709551614UL}, {0x45129C31L}, {18446744073709551614UL}, {0x45129C31L}, {18446744073709551614UL}, {0x45129C31L}, {18446744073709551614UL}, {0x45129C31L}};
        int i, j, k;
        (**g_190) = ((((((g_10[g_21] >= ((1L <= (safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((0x7AL >= ((safe_lshift_func_uint16_t_u_s(g_10[g_21], 14)) != ((g_127.f4 <= g_197) || g_10[g_21]))), 10)), 0x6EA7A8DAL)), g_514))) < g_127.f0)) > l_535) , g_514) == g_95.f0) | 0xF7L) , l_536[8][1][2]);
        (*g_191) = l_525;
        (*g_191) = (g_95.f0 , (void*)0);
        for (g_75 = 3; (g_75 >= 0); g_75 -= 1)
        {
            int *l_537[3];
            int i;
            for (i = 0; i < 3; i++)
                l_537[i] = &g_56;
            (*g_191) = l_537[2];
            if (((safe_lshift_func_int8_t_s_u((func_13((*g_78)) < g_127.f0), 0)) > (*g_297)))
            {
                unsigned l_540[9][9][3] = {{{0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}}, {{0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}}, {{0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}}, {{0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}}, {{0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}}, {{0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}}, {{0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}}, {{0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}}, {{0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}, {0x42D8FA15L, 1UL, 0xB9A3EAD2L}}};
                int i, j, k;
                for (g_56 = 0; (g_56 <= 0); g_56 += 1)
                {
                    const unsigned l_545 = 0xC2A68D67L;
                }
            }
            else
            {
                union U1 l_547[8] = {{0xEA6188BCL}, {0xEA6188BCL}, {0xEA6188BCL}, {0xEA6188BCL}, {0xEA6188BCL}, {0xEA6188BCL}, {0xEA6188BCL}, {0xEA6188BCL}};
                unsigned l_559 = 8UL;
                int i;
                (*g_356) = (*g_356);
                for (l_535 = 0; (l_535 <= 0); l_535 += 1)
                {
                    int i;
                    (**g_190) = ((((l_547[5] , func_13(l_534)) | (l_548 , ((safe_rshift_func_int8_t_s_s(1L, ((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u((((*g_297) && (safe_sub_func_uint32_t_u_u((g_127.f1 , l_559), (l_559 == 0x571FL)))) >= 0x1DL), 2L)), g_75)) == g_127.f4), g_127.f0)) >= g_56))) | g_318))) & 0L) , l_536[5][4][2]);
                    l_537[1] = (l_560[1] , (**g_190));
                }
                for (l_546 = 0; (l_546 <= 0); l_546 += 1)
                {
                    long long l_561 = (-9L);
                    g_56 = (g_127.f3 && 0xB7B6D051L);
                    (*g_356) = (*g_356);
                    for (l_559 = 0; (l_559 <= 0); l_559 += 1)
                    {
                        return g_127.f0;
                    }
                    g_56 = l_561;
                }
            }
        }
    }
    return g_425;
}







static unsigned long long func_3(char * p_4, char * p_5, char * p_6, char * p_7)
{
    unsigned long long l_326 = 0UL;
    union U0 * const l_345 = &g_127;
    union U0 * const *l_344 = &l_345;
    long long l_362 = (-1L);
    int l_371 = (-1L);
    unsigned short l_467 = 0x7CD9L;
    union U1 *l_482 = &g_95;
    char **l_523 = &g_73;
    for (g_318 = 0; (g_318 <= 23); ++g_318)
    {
        union U0 *l_343 = &g_127;
        union U0 **l_342 = &l_343;
        int l_346 = 0L;
        char *l_395 = (void*)0;
        int l_405[8][10] = {{(-10L), 0xFF21F37AL, 7L, 0L, 0L, 7L, 0xFF21F37AL, (-10L), 7L, (-10L)}, {(-10L), 0xFF21F37AL, 7L, 0L, 0L, 7L, 0xFF21F37AL, (-10L), 7L, (-10L)}, {(-10L), 0xFF21F37AL, 7L, 0L, 0L, 7L, 0xFF21F37AL, (-10L), 7L, (-10L)}, {(-10L), 0xFF21F37AL, 7L, 0L, 0L, 7L, 0xFF21F37AL, (-10L), 7L, (-10L)}, {(-10L), 0xFF21F37AL, 7L, 0L, 0L, 7L, 0xFF21F37AL, (-10L), 7L, (-10L)}, {(-10L), 0xFF21F37AL, 7L, 0L, 0L, 7L, 0xFF21F37AL, (-10L), 7L, (-10L)}, {(-10L), 0xFF21F37AL, 7L, 0L, 0L, 7L, 0xFF21F37AL, (-10L), 7L, (-10L)}, {(-10L), 0xFF21F37AL, 7L, 0L, 0L, 7L, 0xFF21F37AL, (-10L), 7L, (-10L)}};
        short l_449[1][5];
        unsigned char l_452 = 0xFFL;
        int l_511 = 0xF285CC0AL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_449[i][j] = 0xD53AL;
        }
        for (g_56 = (-7); (g_56 == 4); g_56++)
        {
            const short l_323 = (-10L);
            char *l_348 = &g_318;
            int *l_361 = &l_346;
            int l_373 = 0x9530091CL;
            int l_385 = 0L;
            union U1 l_416 = {0xAB605D1BL};
            short l_422 = 0xA713L;
            long long l_439 = 0x7D974E2166110EF3LL;
        }
        for (g_21 = (-15); (g_21 <= (-11)); g_21 = safe_add_func_uint8_t_u_u(g_21, 4))
        {
            short l_444 = (-1L);
            int *l_458 = &l_405[3][9];
            int *** const l_492 = &g_191;
            union U1 *l_501 = (void*)0;
            char *l_503 = &g_318;
            int *l_508[3][4][10] = {{{&g_75, &l_405[6][1], &l_371, &l_371, &l_405[3][9], &l_405[3][9], &l_346, &g_56, &g_75, (void*)0}, {&g_75, &l_405[6][1], &l_371, &l_371, &l_405[3][9], &l_405[3][9], &l_346, &g_56, &g_75, (void*)0}, {&g_75, &l_405[6][1], &l_371, &l_371, &l_405[3][9], &l_405[3][9], &l_346, &g_56, &g_75, (void*)0}, {&g_75, &l_405[6][1], &l_371, &l_371, &l_405[3][9], &l_405[3][9], &l_346, &g_56, &g_75, (void*)0}}, {{&g_75, &l_405[6][1], &l_371, &l_371, &l_405[3][9], &l_405[3][9], &l_346, &g_56, &g_75, (void*)0}, {&g_75, &l_405[6][1], &l_371, &l_371, &l_405[3][9], &l_405[3][9], &l_346, &g_56, &g_75, (void*)0}, {&g_75, &l_405[6][1], &l_371, &l_371, &l_405[3][9], &l_405[3][9], &l_346, &g_56, &g_75, (void*)0}, {&g_75, &l_405[6][1], &l_371, &l_371, &l_405[3][9], &l_405[3][9], &l_346, &g_56, &g_75, (void*)0}}, {{&g_75, &l_405[6][1], &l_371, &l_371, &l_405[3][9], &l_405[3][9], &l_346, &g_56, &g_75, (void*)0}, {&g_75, &l_405[6][1], &l_371, &l_371, &l_405[3][9], &l_405[3][9], &l_346, &g_56, &g_75, (void*)0}, {&g_75, &l_405[6][1], &l_371, &l_371, &l_405[3][9], &l_405[3][9], &l_346, &g_56, &g_75, (void*)0}, {&g_75, &l_405[6][1], &l_371, &l_371, &l_405[3][9], &l_405[3][9], &l_346, &g_56, &g_75, (void*)0}}};
            int i, j, k;
        }
        for (g_21 = 0; (g_21 <= 26); ++g_21)
        {
            return g_10[0];
        }
        if ((l_511 <= (safe_sub_func_int32_t_s_s(l_449[0][4], (!g_514)))))
        {
            for (l_346 = 0; (l_346 < (-2)); --l_346)
            {
                if (l_326)
                    break;
                (*g_191) = &l_405[3][9];
                l_482 = l_482;
                return l_346;
            }
        }
        else
        {
            (**g_191) = 1L;
        }
    }
    for (l_326 = 0; (l_326 < 57); ++l_326)
    {
        int *l_519[9][8][3] = {{{&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}}, {{&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}}, {{&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}}, {{&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}}, {{&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}}, {{&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}}, {{&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}}, {{&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}}, {{&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}, {&g_56, (void*)0, (void*)0}}};
        int i, j, k;
        l_519[6][2][1] = l_519[5][6][0];
    }
    if ((**g_191))
    {
        int *l_520 = &l_371;
        (**g_190) = l_520;
        for (l_326 = 0; l_326 < 1; l_326 += 1)
        {
            g_10[l_326] = 9L;
        }
        if ((+(((func_13(p_7) > (*l_520)) != func_35(l_326, (safe_rshift_func_int16_t_s_u(func_35(l_467, (*p_7), ((void*)0 != l_523), func_48((func_35(g_197, (*l_520), g_56, (*l_523), g_95.f0) > (*l_520)), p_7, g_127.f0, p_4), l_362), 10)), (*l_520), (*g_78), l_362)) | (*l_520))))
        {
            return g_56;
        }
        else
        {
            unsigned char l_524 = 0x3AL;
            return l_524;
        }
    }
    else
    {
        l_371 = (*g_177);
    }
    (*g_191) = &l_371;
    return g_197;
}







static union U0 func_8(unsigned long long p_9)
{
    const unsigned short l_34 = 0x2B62L;
    char *l_53 = &g_21;
    char *l_211 = &g_21;
    union U1 * const l_212 = &g_95;
    int l_231 = 1L;
    const short l_249 = 0x4894L;
    int * const *l_276 = &g_177;
    int * const **l_275 = &l_276;
    union U1 **l_277 = (void*)0;
    union U0 l_289 = {1UL};
    const int *l_298[4];
    int i;
    for (i = 0; i < 4; i++)
        l_298[i] = (void*)0;
    for (p_9 = 0; (p_9 == 19); p_9 = safe_add_func_uint64_t_u_u(p_9, 7))
    {
        char *l_20 = &g_21;
        int l_54 = 0xD3610CB4L;
        union U1 l_59 = {0xB077CB11L};
        char ***l_209 = &g_78;
        unsigned short l_210 = 0x1FF8L;
        union U0 *l_214 = &g_127;
    }
    (**g_191) = (l_34 == (((safe_lshift_func_uint16_t_u_s(l_34, (g_10[0] != (func_35((l_34 < (safe_sub_func_uint32_t_u_u((((*g_162) , (p_9 & ((l_275 == &l_276) , (((l_277 != (void*)0) , g_56) >= (***g_190))))) <= g_127.f4), g_95.f0))), (**l_276), g_56, l_211, g_10[0]) , g_10[0])))) & 0xF854522A5A1738A9LL) != (***l_275)));
    if ((**l_276))
    {
        int *l_279 = &g_75;
        const char *l_280 = (void*)0;
        unsigned l_285 = 18446744073709551615UL;
        (**l_276) = (safe_unary_minus_func_int64_t_s((-6L)));
        l_279 = (**g_190);
        if ((~((l_280 == l_211) ^ ((*g_162) , (0x83A6L >= (safe_rshift_func_int16_t_s_u(p_9, 12)))))))
        {
            unsigned char l_283 = 0UL;
            char *l_288 = &g_21;
            union U1 *l_292[5][6] = {{(void*)0, &g_95, &g_95, &g_95, (void*)0, &g_95}, {(void*)0, &g_95, &g_95, &g_95, (void*)0, &g_95}, {(void*)0, &g_95, &g_95, &g_95, (void*)0, &g_95}, {(void*)0, &g_95, &g_95, &g_95, (void*)0, &g_95}, {(void*)0, &g_95, &g_95, &g_95, (void*)0, &g_95}};
            int i, j;
            (*l_279) = (2UL | func_35((l_283 < (g_56 , (safe_unary_minus_func_uint64_t_u(g_95.f0)))), l_285, ((((((((*l_279) && ((safe_mod_func_int16_t_s_s((((*l_279) < (((g_75 != 0x23228502CDAD2A5CLL) & g_56) && g_56)) >= (*l_279)), g_127.f1)) & 0xA36AL)) > 0x5DA1887DL) > p_9) == (*g_177)) || 0xA7C8BD03L) | p_9) ^ g_197), l_288, l_283));
            (***l_275) = p_9;
            (***g_190) = p_9;
            if ((l_283 < 0x29L))
            {
                return l_289;
            }
            else
            {
                union U0 l_294 = {0x4175DB8EL};
                for (g_75 = 0; (g_75 > (-21)); g_75--)
                {
                    int *l_293 = &g_56;
                    (*l_293) = ((void*)0 != l_292[0][5]);
                }
                return l_294;
            }
        }
        else
        {
            (***l_275) = (safe_sub_func_int64_t_s_s(g_10[0], (p_9 == 0x9478L)));
        }
        l_298[1] = g_297;
    }
    else
    {
        const union U0 *l_299 = (void*)0;
        const union U0 **l_300 = &l_299;
        (*l_300) = l_299;
    }
    return l_289;
}







static unsigned short func_13(char * p_14)
{
    int *l_195[8][4][8] = {{{&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}, {&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}, {&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}, {&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}}, {{&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}, {&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}, {&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}, {&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}}, {{&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}, {&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}, {&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}, {&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}}, {{&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}, {&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}, {&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}, {&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}}, {{&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}, {&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}, {&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}, {&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}}, {{&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}, {&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}, {&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}, {&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}}, {{&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}, {&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}, {&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}, {&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}}, {{&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}, {&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}, {&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}, {&g_56, &g_56, &g_75, &g_75, &g_75, &g_75, &g_56, &g_75}}};
    int i, j, k;
    (*g_191) = l_195[5][1][1];
    return g_56;
}







static char * func_15(unsigned p_16, const unsigned short p_17, char * p_18, short p_19)
{
    long long l_187[10] = {0xE925984574007049LL, (-1L), 0xE925984574007049LL, (-1L), 0xE925984574007049LL, (-1L), 0xE925984574007049LL, (-1L), 0xE925984574007049LL, (-1L)};
    int **l_189 = &g_177;
    int ***l_188[8] = {&l_189, &l_189, &l_189, &l_189, &l_189, &l_189, &l_189, &l_189};
    const union U0 *l_194[1];
    int i;
    for (i = 0; i < 1; i++)
        l_194[i] = &g_127;
    for (g_21 = 0; (g_21 <= 0); g_21 += 1)
    {
        int *l_181 = &g_56;
        int **l_182 = &l_181;
        int i;
        (*l_182) = l_181;
        (**l_189) = (g_10[g_21] ^ func_24(((((safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s((*p_18), (*l_181))), l_187[8])) , l_188[0]) == g_190) == (**l_182)), p_18, (safe_rshift_func_uint16_t_u_u(p_17, 8))));
    }
    l_194[0] = l_194[0];
    return p_18;
}







static unsigned char func_24(unsigned short p_25, char * p_26, int p_27)
{
    union U0 l_179 = {0x4F8910C7L};
    int l_180 = 0x5F6FCF51L;
    (*g_177) = (0x55E8L < (g_21 <= (l_179 , 4L)));
    return l_180;
}







static char * func_28(unsigned p_29, char * p_30, char * const p_31)
{
    return (*g_78);
}







static char func_35(long long p_36, char p_37, unsigned char p_38, char * p_39, unsigned short p_40)
{
    unsigned l_104[8] = {1UL, 0x1C6F7076L, 1UL, 0x1C6F7076L, 1UL, 0x1C6F7076L, 1UL, 0x1C6F7076L};
    int **l_113 = (void*)0;
    int ***l_112 = &l_113;
    int *l_174 = &g_75;
    int i;
    for (g_21 = (-30); (g_21 >= (-3)); g_21++)
    {
        int *l_101 = &g_75;
        int **l_100[4][7] = {{&l_101, &l_101, &l_101, &l_101, &l_101, &l_101, &l_101}, {&l_101, &l_101, &l_101, &l_101, &l_101, &l_101, &l_101}, {&l_101, &l_101, &l_101, &l_101, &l_101, &l_101, &l_101}, {&l_101, &l_101, &l_101, &l_101, &l_101, &l_101, &l_101}};
        int ***l_99 = &l_100[3][4];
        union U1 *l_102 = &g_95;
        union U1 **l_103 = &l_102;
        int i, j;
        (*l_99) = (void*)0;
        if (g_21)
            break;
        (*l_103) = l_102;
        if (p_37)
            break;
    }
    for (p_40 = 2; (p_40 <= 7); p_40 += 1)
    {
        int *l_106 = (void*)0;
        int **l_105 = &l_106;
        int ***l_114 = &l_113;
        union U1 l_119 = {2L};
        int * const *l_136 = &l_106;
        long long l_159 = 0x8AB05D55F32A4288LL;
        int *l_167 = &g_56;
        int i;
        if (l_104[p_40])
            break;
        (*l_105) = &g_56;
    }
    return (*l_174);
}







static union U0 func_43(char * p_44, long long p_45, union U1 p_46, char * p_47)
{
    long long l_60[3];
    union U1 *l_94 = &g_95;
    union U1 **l_93 = &l_94;
    union U0 l_96 = {0x066996F5L};
    int i;
    for (i = 0; i < 3; i++)
        l_60[i] = 0x42F53403E1FE01AFLL;
    for (g_56 = 2; (g_56 >= 0); g_56 -= 1)
    {
        int *l_71 = &g_56;
        char *l_72 = &g_21;
        int *l_74 = &g_75;
        char **l_77[3];
        char ***l_76[9] = {&l_77[0], &l_77[0], &l_77[0], &l_77[0], &l_77[0], &l_77[0], &l_77[0], &l_77[0], &l_77[0]};
        int i;
        for (i = 0; i < 3; i++)
            l_77[i] = &l_72;
        (*l_74) = (((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((l_60[g_56] >= ((safe_add_func_int16_t_s_s(g_10[0], (((+0L) ^ ((safe_rshift_func_int8_t_s_u((p_45 && p_45), (((l_71 == (void*)0) , func_48(p_45, func_48(g_10[0], l_72, p_46.f0, &g_21), (*l_71), &g_21)) == g_73))) , p_45)) != (*l_71)))) < p_46.f0)), g_10[0])), 8)) , 3UL), g_10[0])) && g_56) <= 0xFF46A2FF81308FB8LL);
        g_78 = &g_73;
        for (g_21 = 2; (g_21 >= 0); g_21 -= 1)
        {
            if (g_10[0])
                break;
            for (p_45 = 0; (p_45 <= 2); p_45 += 1)
            {
                unsigned l_92 = 0UL;
                (*l_74) = ((safe_sub_func_int32_t_s_s((((!(safe_mod_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u(1UL)), ((*l_74) && ((safe_add_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u(1UL, (safe_rshift_func_uint8_t_u_s(g_56, 3)))), p_45)) != (safe_mod_func_int16_t_s_s(((0x2DBF905AFB092334LL ^ p_45) >= ((*p_44) > l_92)), p_45))))))) || (*l_74)) <= g_75), 4294967295UL)) == l_92);
            }
            (*l_74) = g_75;
        }
    }
    (*l_93) = &p_46;
    return l_96;
}







static char * func_48(int p_49, char * p_50, int p_51, const char * p_52)
{
    int *l_55[2][7][6] = {{{&g_56, (void*)0, &g_56, &g_56, &g_56, &g_56}, {&g_56, (void*)0, &g_56, &g_56, &g_56, &g_56}, {&g_56, (void*)0, &g_56, &g_56, &g_56, &g_56}, {&g_56, (void*)0, &g_56, &g_56, &g_56, &g_56}, {&g_56, (void*)0, &g_56, &g_56, &g_56, &g_56}, {&g_56, (void*)0, &g_56, &g_56, &g_56, &g_56}, {&g_56, (void*)0, &g_56, &g_56, &g_56, &g_56}}, {{&g_56, (void*)0, &g_56, &g_56, &g_56, &g_56}, {&g_56, (void*)0, &g_56, &g_56, &g_56, &g_56}, {&g_56, (void*)0, &g_56, &g_56, &g_56, &g_56}, {&g_56, (void*)0, &g_56, &g_56, &g_56, &g_56}, {&g_56, (void*)0, &g_56, &g_56, &g_56, &g_56}, {&g_56, (void*)0, &g_56, &g_56, &g_56, &g_56}, {&g_56, (void*)0, &g_56, &g_56, &g_56, &g_56}}};
    int **l_57 = (void*)0;
    int **l_58 = &l_55[1][1][5];
    int i, j, k;
    (*l_58) = l_55[1][6][0];
    return &g_21;
}





int main (void)
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_10[i], "g_10[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_95.f0, "g_95.f0", print_hash_value);
    transparent_crc(g_127.f0, "g_127.f0", print_hash_value);
    transparent_crc(g_127.f1, "g_127.f1", print_hash_value);
    transparent_crc(g_127.f3, "g_127.f3", print_hash_value);
    transparent_crc(g_127.f4, "g_127.f4", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    transparent_crc(g_425, "g_425", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
