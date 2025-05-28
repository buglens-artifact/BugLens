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



static unsigned g_9 = 0xD0188753L;
static unsigned char g_27 = 0x92L;
static unsigned char g_34 = 0UL;
static int g_51 = 0x2B6A3604L;
static int *g_50 = &g_51;
static unsigned g_57 = 0UL;
static int g_72 = 0x26F5D9AEL;
static unsigned short g_74 = 1UL;
static int g_86 = 1L;
static unsigned char *g_87 = &g_27;
static short g_115 = 3L;
static const int g_119 = 0x12CA17A5L;
static const int *g_118 = &g_119;
static short * const *g_143 = (void*)0;
static char g_180 = (-7L);
static char g_199 = 1L;
static char g_202 = 0xA8L;
static unsigned *g_205 = &g_57;
static int **g_299 = &g_50;
static int ***g_298 = &g_299;
static unsigned short g_309 = 65526UL;
static unsigned g_313 = 18446744073709551615UL;
static unsigned **g_335 = (void*)0;
static const unsigned ** const g_341 = (void*)0;
static const unsigned ** const *g_340 = &g_341;
static const unsigned g_345 = 0x5D36CBC2L;
static short g_405 = 0xE270L;
static int g_476 = 0x24F14233L;
static short *g_513 = &g_115;
static const unsigned short **g_573 = (void*)0;
static const unsigned short ** const *g_572 = &g_573;
static unsigned *g_620 = &g_313;
static unsigned **g_619 = &g_620;
static int g_643 = (-1L);
static const int g_674 = 0xFA471C38L;
static char g_727 = 0x9CL;
static int *g_750 = &g_643;
static const int g_796 = (-2L);
static unsigned short *g_831 = &g_74;
static unsigned short **g_830 = &g_831;
static short g_922 = 7L;
static int *g_937 = &g_476;
static int **g_936 = &g_937;
static int ***g_935 = &g_936;
static unsigned g_1002 = 4294967293UL;
static const int g_1035 = 0x1A0C45EEL;
static int ****g_1055 = &g_298;
static int *****g_1054 = &g_1055;
static unsigned char **g_1058 = (void*)0;
static unsigned char ***g_1057 = &g_1058;



static unsigned func_1(void);
static unsigned func_2(unsigned p_3, const int p_4);
static unsigned char func_11(unsigned p_12, int p_13, short p_14, int p_15);
static unsigned func_16(char p_17, unsigned char p_18, const unsigned p_19, const unsigned char p_20, int p_21);
static char func_22(int p_23, int p_24, char p_25, unsigned p_26);
static int * const func_35(const int * p_36, short p_37);
static int * func_38(int * p_39);
static int * func_40(int * p_41);
static int * func_42(const int * p_43);
static int * func_44(unsigned p_45, int * p_46, int * p_47, unsigned p_48, int p_49);
static unsigned func_1(void)
{
    const unsigned l_5 = 0UL;
    int l_6 = (-1L);
    unsigned short l_1015 = 1UL;
    char l_1056 = 0x80L;
    char l_1062 = 0x02L;
    const int *l_1063 = &g_1035;
    unsigned char *l_1075 = (void*)0;
    const int ***l_1084 = (void*)0;
    unsigned l_1085 = 4294967291UL;
    if ((((*g_620) = func_2((l_5 , (1UL || (l_5 >= 0L))), (l_6 = l_5))) , (safe_sub_func_int32_t_s_s(l_1015, ((((*g_513) = 0xA5ECL) , g_674) , l_1015)))))
    {
        return (*g_620);
    }
    else
    {
        unsigned *l_1023 = (void*)0;
        int l_1024 = 0x9BE2E0D1L;
        int l_1029 = 9L;
        const unsigned char ***l_1044 = (void*)0;
        unsigned char *l_1076 = &g_34;
        char *l_1090 = &g_727;
        if (((safe_unary_minus_func_uint16_t_u((l_6 ^ (*g_205)))) ^ (safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((l_1024 = 4294967295UL), ((g_1002 = 0x265CC11BL) | (safe_rshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u(l_5, l_1029)), 2))))), 0x2BA59A79L)), l_5))))
        {
            int ***l_1033 = &g_299;
            int ****l_1034 = &g_298;
            char *l_1036 = &g_180;
            const short l_1043 = 0xAD22L;
            short *l_1045 = (void*)0;
            int *l_1081 = &g_86;
            if (((safe_unary_minus_func_int16_t_s((((*l_1034) = l_1033) == &g_299))) < ((((l_1015 > g_27) , ((g_1035 , ((((*l_1036) = g_922) , g_86) , ((g_405 = (((safe_div_func_int8_t_s_s(((((*g_513) = (safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u((((l_1043 , l_1044) == (void*)0) <= 246UL), 3UL)), (*g_87)))) ^ l_1043) , l_1024), l_1015)) , 0xB02116C8L) <= (*g_205))) , (*g_87)))) , (*g_937))) , g_405) > l_1015)))
            {
                unsigned l_1046 = 4294967295UL;
                int *l_1047 = &l_1029;
                (*l_1047) = l_1046;
                (**g_298) = func_38(&l_1024);
            }
            else
            {
                char l_1048 = 0x3FL;
                unsigned short l_1053 = 0x1017L;
                int *l_1059 = &g_86;
                unsigned l_1070 = 0x937A48B6L;
                g_51 = l_1048;
                (*l_1059) = (safe_sub_func_uint8_t_u_u(255UL, (((*l_1036) = l_1029) & 2UL)));
                for (g_72 = 0; (g_72 < (-16)); g_72--)
                {
                    const int **l_1064 = &l_1063;
                    (*l_1059) = l_1062;
                    (*l_1064) = (g_118 = l_1063);
                    (*l_1059) = (safe_mod_func_uint8_t_u_u((((*g_513) = (-1L)) <= 0xE543L), (safe_add_func_int8_t_s_s(((safe_unary_minus_func_int16_t_s(l_1070)) < (safe_add_func_uint16_t_u_u(0x87E1L, 0x356AL))), 254UL))));
                }
            }
            (****g_1054) = (((((safe_add_func_int8_t_s_s(g_674, ((((*g_205) = ((l_1075 == (l_1076 = l_1075)) >= g_27)) || ((safe_sub_func_uint32_t_u_u((*l_1063), 1L)) <= l_1029)) ^ g_119))) >= (*l_1063)) && (*l_1063)) , (*l_1063)) , &l_1029);
        }
        else
        {
            int *l_1086 = (void*)0;
            int *l_1087 = &l_6;
            l_1024 = 0L;
            (*l_1087) = 5L;
        }
        if ((safe_add_func_int8_t_s_s(0x87L, ((*l_1090) = l_1029))))
        {
            return (*g_620);
        }
        else
        {
            unsigned l_1091 = 1UL;
            return l_1091;
        }
    }
}







static unsigned func_2(unsigned p_3, const int p_4)
{
    const char l_10 = 0x3EL;
    unsigned short l_703 = 0x78E2L;
    unsigned ***l_941 = (void*)0;
    unsigned char ***l_959 = (void*)0;
    int l_962 = (-2L);
    if ((((((safe_mod_func_uint32_t_u_u(((((*g_831) = (0x58L > ((((p_3 & ((*g_205) = (g_9 & ((l_10 , l_10) == ((func_11((((func_16(func_22((g_27 && (safe_lshift_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(l_10, (g_34 = (safe_add_func_int32_t_s_s((~l_10), (((p_4 , g_27) & 0xA26CDEE9L) , l_10)))))) > 65526UL), 12))), l_10, p_4, p_4), p_3, l_10, p_3, g_9) , g_476) == g_345) != (-1L)), l_10, l_703, g_643) <= l_703) > (-8L)))))) || (*g_831)) , p_4) | l_703))) > p_3) , (*g_205)), g_796)) , p_4) > 0L) , l_10) <= g_9))
    {
        unsigned ***l_940 = &g_335;
        int l_948 = 9L;
        unsigned l_958 = 0x3ABA1216L;
        const char *l_960 = &g_199;
        if ((safe_mod_func_int16_t_s_s((((l_940 = &g_335) == l_941) == 0x3821L), (-1L))))
        {
            unsigned short l_961 = 0x1C44L;
            g_51 = (l_962 = ((((*g_831) = (safe_rshift_func_int16_t_s_s((((safe_add_func_uint32_t_u_u(((((safe_sub_func_int32_t_s_s(l_948, (safe_unary_minus_func_int32_t_s((((0x7C40E42EL <= ((safe_lshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u(p_3, p_4)), (safe_add_func_uint8_t_u_u(0xC0L, (l_948 | l_948))))) , (safe_add_func_uint8_t_u_u((l_958 = p_4), (l_959 != (void*)0))))) , l_960) == (void*)0))))) && (-8L)) == g_9) ^ l_948), l_961)) | l_10) != 0xDE20440AL), p_3))) , p_3) > p_3));
        }
        else
        {
            const int **l_963 = &g_118;
            (*l_963) = &p_4;
        }
        (**g_298) = &l_948;
        (***g_298) = l_703;
    }
    else
    {
        unsigned char l_984 = 0x18L;
        unsigned short l_991 = 0UL;
        int **l_1003 = &g_750;
        int **l_1004 = (void*)0;
        const int l_1007 = 0xB1812B87L;
        unsigned *l_1012 = &g_57;
        for (g_476 = (-4); (g_476 != 3); g_476 = safe_add_func_int16_t_s_s(g_476, 7))
        {
            int *l_995 = &g_643;
            (**g_298) = func_38(func_38(&l_962));
            for (g_922 = (-9); (g_922 != 2); g_922 = safe_add_func_int32_t_s_s(g_922, 4))
            {
                int *l_976 = &l_962;
                short *l_985 = (void*)0;
                short *l_986 = &g_405;
                if (l_10)
                {
                    if (p_3)
                        break;
                }
                else
                {
                    unsigned *l_974 = &g_9;
                    int l_975 = 0x2353D8BFL;
                    (***g_298) = (safe_div_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((((*l_974) = ((**g_619) = (p_3 = (safe_add_func_uint32_t_u_u(p_3, p_3))))) , 0x4800L), 8)) | l_975), g_727));
                    l_976 = (*g_299);
                    if (l_975)
                        continue;
                }
                (***g_298) = (((safe_div_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s(p_3, (safe_unary_minus_func_int16_t_s((((((+((*l_986) = ((*g_513) = l_984))) , (*g_87)) > (-7L)) , ((*g_87) = (safe_div_func_int16_t_s_s((*g_513), ((safe_div_func_uint16_t_u_u((l_991 <= (((((safe_sub_func_uint16_t_u_u((((safe_unary_minus_func_uint32_t_u(0x86C30210L)) & p_3) > (l_962 , 1UL)), (*l_976))) != l_962) != p_4) , p_4) <= 3L)), 0x4126L)) | l_984))))) , 0x2CBDL))))), 251UL)), p_4)) && l_703) , 0x7259E012L);
            }
            (**g_298) = l_995;
            (*g_50) = (*g_118);
        }
        g_1002 = (((((safe_rshift_func_int8_t_s_u((l_991 && (safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(0x6DL, 1)) != (*g_513)), ((*g_513) , 1L)))), 1)) == (l_962 || (((l_962 , p_4) == (l_991 || l_10)) && g_345))) , p_4) == (*g_87)) < g_405);
        g_118 = ((*l_1003) = ((*g_299) = (void*)0));
        l_962 = ((((*g_620) = (safe_add_func_uint8_t_u_u(func_16((l_1007 && 4294967295UL), (((safe_div_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((l_1012 != (void*)0) && 0x69FFL), (1UL || 0UL))), (*g_87))) , 4294967294UL) <= 4294967295UL), l_10, p_4, l_962), 0xAEL))) , 0xE3C683A3L) , 3L);
    }
    g_86 = 0xFAFBE527L;
    return l_10;
}







static unsigned char func_11(unsigned p_12, int p_13, short p_14, int p_15)
{
    int *l_709 = &g_72;
    int **l_708 = &l_709;
    const unsigned char l_728 = 0x2EL;
    int l_730 = 3L;
    unsigned char ** const *l_748 = (void*)0;
    int ** const *l_775 = &g_299;
    int ** const **l_774 = &l_775;
    const short *l_909 = &g_115;
    const short ** const l_908 = &l_909;
    int **l_924 = &g_750;
    unsigned * const *l_925 = &g_620;
    unsigned short **l_932 = &g_831;
    int l_933 = 9L;
    int l_934 = 0x98A0E0F1L;
    for (g_405 = 22; (g_405 <= 16); g_405 = safe_sub_func_uint8_t_u_u(g_405, 3))
    {
        const int *l_706 = &g_119;
        const int **l_707 = &g_118;
        int ***l_710 = &l_708;
        int **l_712 = &l_709;
        int ***l_711 = &l_712;
        unsigned *l_729 = &g_313;
        int l_749 = 0x1C2DAAEEL;
        int l_760 = (-2L);
        const unsigned short ***l_773 = (void*)0;
        (*l_707) = l_706;
        (*l_707) = (*l_707);
        (*l_711) = ((*l_710) = l_708);
        if ((l_730 = ((((safe_mod_func_uint16_t_u_u(((*g_205) , (safe_div_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((((**l_707) , p_14) <= l_728) != p_15), (*g_513))), p_14))), p_12)) || (**l_707)) , 0x9FL) != p_14)))
        {
            int *l_735 = &g_86;
            unsigned short l_738 = 65535UL;
            for (p_15 = 2; (p_15 < (-2)); --p_15)
            {
                int l_758 = 0x859177D3L;
                for (l_730 = (-4); (l_730 < 10); l_730 = safe_add_func_int8_t_s_s(l_730, 1))
                {
                    unsigned char l_743 = 6UL;
                    unsigned *l_759 = (void*)0;
                    short l_763 = 6L;
                    unsigned char l_770 = 0x2DL;
                    (**g_298) = l_735;
                    if ((safe_add_func_int16_t_s_s(((((((l_738 != func_16((safe_div_func_int32_t_s_s((((**g_299) = 4L) & ((p_14 < (safe_mod_func_uint16_t_u_u(l_743, (safe_lshift_func_uint8_t_u_u((*g_87), (l_749 = (((p_12 != (p_12 , ((((safe_div_func_uint16_t_u_u(l_743, ((*l_706) , (*l_706)))) | (*g_87)) , l_748) == (void*)0))) != l_728) , 0x74L))))))) >= 0x3BEA6F1BL)), 0x3A8A26D0L)), (*g_87), p_15, p_14, p_15)) & 0x1F5DA343L) && p_15) == 0L) && p_14) >= 0x7EADL), 0x1084L)))
                    {
                        (**g_298) = g_750;
                        if ((*g_50))
                            break;
                    }
                    else
                    {
                        char *l_755 = (void*)0;
                        char *l_756 = &g_180;
                        unsigned char *l_757 = &g_34;
                        l_760 = l_728;
                    }
                    (*g_750) = (l_743 && (*g_205));
                }
            }
        }
        else
        {
            unsigned l_771 = 0x12F52DCAL;
            int l_772 = 0L;
            int ****l_776 = &g_298;
            int *****l_777 = &l_776;
            unsigned short l_788 = 0xA105L;
            const int *l_795 = &g_796;
            char l_817 = (-1L);
            int l_849 = 3L;
            l_772 = l_771;
            if ((((((void*)0 == l_773) , 0x5983L) , l_774) == ((*l_777) = l_776)))
            {
                int l_780 = (-3L);
                unsigned *l_789 = &g_57;
                int l_823 = 0x4673D875L;
                int *l_824 = &l_730;
                unsigned char **l_827 = &g_87;
                unsigned char ***l_826 = &l_827;
                unsigned short l_850 = 1UL;
                if (p_13)
                {
                    char l_787 = 0x7DL;
                    unsigned **l_790 = &l_789;
                    (*g_750) = (p_12 > l_780);
                    (*g_750) = (((*g_87) = (((*l_790) = l_789) == &p_12)) , (safe_div_func_uint8_t_u_u(0x27L, (((p_15 >= l_780) >= ((**l_790) = p_15)) ^ (p_14 | l_780)))));
                    for (g_51 = 19; (g_51 != 29); g_51 = safe_add_func_int32_t_s_s(g_51, 1))
                    {
                        (*g_750) = (*g_118);
                        if (p_15)
                            continue;
                    }
                    (*g_750) = 0x985ABD7EL;
                }
                else
                {
                    int *l_797 = &l_772;
                    (*l_707) = l_797;
                    for (g_199 = (-3); (g_199 >= (-1)); g_199++)
                    {
                        char *l_808 = &g_727;
                        char *l_809 = &g_202;
                        const int l_810 = 0x123DC118L;
                        (*g_750) = (*g_118);
                        (*l_707) = (*l_707);
                        (*g_750) = (*g_118);
                        if ((*l_706))
                            continue;
                    }
                    for (g_180 = 0; (g_180 == 24); g_180++)
                    {
                        l_749 = (-1L);
                        if (p_15)
                            continue;
                        (*g_750) = (safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s((*l_797), (l_817 || ((*g_118) < (1L | (l_797 != l_789)))))), ((safe_lshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u(p_13, (p_12 , (((safe_unary_minus_func_int8_t_s((0x4E06BDC8L >= (*l_797)))) < 0UL) , l_780)))), p_12)) , p_15)));
                        if ((*l_706))
                            continue;
                    }
                }
                l_823 = p_12;
                (****l_777) = l_824;
                if (((*g_513) > ((safe_unary_minus_func_uint16_t_u((****l_774))) ^ (l_826 == l_748))))
                {
                    unsigned short **l_832 = &g_831;
                    int l_841 = (-1L);
                    if (p_13)
                        break;
                    for (g_57 = (-21); (g_57 != 28); ++g_57)
                    {
                        unsigned short l_840 = 1UL;
                        (*g_750) = ((((*g_87) != (((((l_832 = g_830) != (*g_572)) > (safe_rshift_func_int8_t_s_s(((*g_205) , ((safe_rshift_func_uint16_t_u_s(((safe_unary_minus_func_uint16_t_u((safe_lshift_func_int8_t_s_u(1L, 2)))) == (((((l_841 = l_840) || ((p_12 & ((*g_513) = (p_14 = (safe_add_func_int32_t_s_s(0xFF17FD9CL, l_840))))) != p_15)) <= l_840) , (*l_706)) , p_13)), (*l_706))) != 0xE0BD7BC4L)), 3))) & 0x7BL) , g_796)) , p_15) && p_12);
                    }
                    l_749 = ((***l_775) , (*l_706));
                    (*l_707) = (((((&l_728 != (void*)0) > (p_12 && func_16((safe_unary_minus_func_int16_t_s(l_841)), (((safe_div_func_int8_t_s_s(g_72, p_13)) & ((*g_513) = p_12)) && (safe_sub_func_uint16_t_u_u((l_849 & (*g_513)), l_850))), (*g_620), p_14, g_72))) != g_34) != 1UL) , (void*)0);
                }
                else
                {
                    int *l_851 = &l_730;
                    (**g_298) = l_851;
                    (**g_298) = func_38(((**l_775) = l_851));
                    (*l_707) = (*l_707);
                }
            }
            else
            {
                int *l_852 = (void*)0;
                (****l_777) = l_852;
            }
        }
    }
    for (g_86 = 0; (g_86 > (-20)); g_86 = safe_sub_func_int16_t_s_s(g_86, 6))
    {
        int l_869 = 0xBF03E918L;
        char l_902 = 0x21L;
        int l_923 = 7L;
        if ((safe_lshift_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(p_13, g_727)) , 0x62L), 5)))
        {
            unsigned char l_863 = 253UL;
            int l_868 = 0xD57BFF46L;
            for (g_405 = (-3); (g_405 <= 28); ++g_405)
            {
                return (*g_87);
            }
            l_869 = ((((safe_rshift_func_int8_t_s_u((((&g_298 == &l_775) < (l_863 = ((*g_513) = (*g_513)))) == (safe_lshift_func_uint8_t_u_s((+p_14), (safe_rshift_func_int8_t_s_s((p_13 , g_405), (((void*)0 != &g_727) , (p_13 , 0L))))))), 5)) >= l_868) , (*g_513)) ^ p_12);
        }
        else
        {
            int l_874 = (-1L);
            char *l_897 = &g_180;
            unsigned short *l_903 = &g_309;
            (***l_774) = &l_869;
            if (((*g_87) , ((g_72 = 7L) , (****l_774))))
            {
                int *l_875 = &l_874;
                for (g_180 = 0; (g_180 != (-23)); g_180 = safe_sub_func_int32_t_s_s(g_180, 8))
                {
                    (**g_299) = (((0x60CAFC3CL || (safe_div_func_int32_t_s_s(((void*)0 != (***l_774)), 0xF065B28BL))) , 4294967294UL) == 4294967288UL);
                    (*g_50) = (***l_775);
                    (*g_750) = p_15;
                }
                (*g_299) = (l_874 , l_875);
            }
            else
            {
                int ** const l_878 = &g_750;
                if (((p_15 , &g_620) != (void*)0))
                {
                    unsigned char l_879 = 1UL;
                    char *l_886 = &g_727;
                    (***l_775) = ((safe_sub_func_int8_t_s_s(((*l_886) = ((((*g_87) , (((**l_774) == l_878) , (p_13 , (((**l_878) , l_879) != (safe_rshift_func_uint8_t_u_u(((*g_87) = (*g_87)), 4)))))) != ((safe_rshift_func_int16_t_s_u(((*g_513) = (safe_rshift_func_int8_t_s_u(g_199, 7))), (l_869 ^ p_13))) ^ 0x5BL)) && l_869)), 0xF4L)) || (*g_50));
                    (*g_750) = ((***l_775) = p_12);
                    (**l_878) = (safe_sub_func_uint8_t_u_u(((*g_87) , (***l_775)), p_13));
                }
                else
                {
                    return p_14;
                }
            }
            (*g_50) = ((safe_lshift_func_int8_t_s_u((-6L), (((safe_div_func_int32_t_s_s((((safe_add_func_int8_t_s_s(l_874, ((safe_sub_func_uint16_t_u_u(((((*l_897) = (-4L)) | g_796) > (**g_830)), (safe_lshift_func_uint16_t_u_s((l_869 < (+(safe_sub_func_uint16_t_u_u(l_902, ((*l_903) = l_869))))), 10)))) > 1UL))) >= 0xE4BD9624L) && p_14), (****l_774))) , p_15) , (*g_87)))) < 1L);
            if ((***g_298))
                break;
        }
        l_730 = (safe_div_func_int8_t_s_s((~(safe_sub_func_uint8_t_u_u((((void*)0 != l_908) , ((safe_sub_func_int32_t_s_s(0x9A771608L, ((*g_750) = p_12))) && (safe_lshift_func_int16_t_s_s((safe_div_func_int8_t_s_s(((safe_div_func_int8_t_s_s((((((safe_add_func_int16_t_s_s(((((**g_830) > (safe_div_func_int16_t_s_s(l_869, 65529UL))) | (1UL & (0x8F3AL <= p_14))) > 0x86F8L), 0x28D3L)) , (void*)0) != (void*)0) , 0xB55DL) >= l_902), g_922)) < g_405), p_13)), 6)))), 0xFFL))), l_923));
    }
    (*l_924) = ((***l_774) = &l_730);
    (*g_750) = ((((***l_775) , g_935) != &l_708) , p_15);
    return (*g_87);
}







static unsigned func_16(char p_17, unsigned char p_18, const unsigned p_19, const unsigned char p_20, int p_21)
{
    char l_556 = (-3L);
    int *l_565 = &g_476;
    int l_569 = 0x040474EEL;
    char *l_576 = &l_556;
    unsigned *l_577 = &g_313;
    unsigned l_615 = 18446744073709551615UL;
    unsigned l_641 = 2UL;
    int *l_669 = &l_569;
lbl_581:
    if ((safe_mod_func_uint8_t_u_u(l_556, (safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(p_20, l_556)), l_556)))))
    {
        (*g_299) = (*g_299);
    }
    else
    {
        unsigned short *l_567 = &g_74;
        unsigned short **l_566 = &l_567;
        int l_568 = 0xCCEA60AAL;
        l_568 = ((&g_309 != ((*l_566) = (void*)0)) ^ (p_20 && p_20));
    }
    if (((safe_rshift_func_uint8_t_u_u((l_569 == ((p_20 , (safe_add_func_uint16_t_u_u(l_569, 0xBB2CL))) && (*g_205))), (*g_87))) ^ l_569))
    {
        unsigned l_580 = 1UL;
        return l_580;
    }
    else
    {
        int *l_584 = &g_86;
        int *l_586 = &g_51;
        unsigned char l_642 = 0x5CL;
        if (g_57)
            goto lbl_581;
        (*g_299) = (void*)0;
        if ((p_19 , ((*g_205) , ((l_556 , 0xC55B3D94L) <= l_556))))
        {
            int **l_585 = &l_584;
            const unsigned char *l_601 = &g_34;
            (*g_299) = (*l_585);
            for (p_17 = 0; (p_17 < 20); p_17 = safe_add_func_int16_t_s_s(p_17, 1))
            {
                unsigned **l_610 = &l_577;
                int l_618 = 0x3ADBFB17L;
                const int *l_622 = &g_51;
                (***g_298) = ((*g_87) , ((void*)0 != &g_199));
                if ((safe_sub_func_uint32_t_u_u(p_17, 1L)))
                {
                    unsigned short *l_616 = &g_74;
                    int **l_617 = &l_586;
                    const int **l_621 = &g_118;
                    l_622 = ((*l_621) = ((((safe_div_func_uint8_t_u_u(255UL, 0xC3L)) && (l_610 != ((safe_div_func_int8_t_s_s(l_556, (**l_617))) , g_619))) , g_345) , (void*)0));
                }
                else
                {
                    int *l_626 = &g_51;
                    for (g_72 = 0; (g_72 > (-5)); --g_72)
                    {
                        int **l_625 = &l_584;
                        (*l_625) = func_35(func_38((*g_299)), (**l_585));
                        (*l_585) = l_626;
                        return p_17;
                    }
                }
                (*g_50) = (safe_add_func_int32_t_s_s((((((*l_565) = 0x8B616CD6L) , (l_642 || g_643)) , 0x466EL) && 0xFD41L), l_569));
            }
            if (p_18)
            {
                for (g_72 = (-26); (g_72 == (-30)); --g_72)
                {
                    for (l_569 = 22; (l_569 == 3); l_569 = safe_sub_func_int32_t_s_s(l_569, 9))
                    {
                        (*g_298) = (*g_298);
                    }
                }
            }
            else
            {
                unsigned short l_656 = 1UL;
                int *l_657 = &g_51;
                (*l_586) = (((*g_340) != (void*)0) || (((safe_lshift_func_uint8_t_u_s(((void*)0 != &g_87), p_21)) < ((l_556 > (((*g_513) , (6L < ((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((*g_513) = ((p_21 && p_20) <= 0xE1L)), 4)), 1UL)) <= l_656))) < p_21)) ^ 0xFA53L)) && p_20));
                l_657 = &l_569;
                for (p_18 = 0; (p_18 == 18); p_18 = safe_add_func_int8_t_s_s(p_18, 1))
                {
                    int *l_660 = &l_569;
                    unsigned short *l_665 = (void*)0;
                    unsigned short *l_666 = &l_656;
                    (*g_299) = l_660;
                    (*l_657) = (safe_lshift_func_uint16_t_u_s((g_476 ^ (((((*l_666) = (((+0xCCE20BB1L) , (safe_lshift_func_uint8_t_u_u(((void*)0 == l_657), 7))) & 255UL)) > 0xD2EFL) && ((g_74 , (0xDEL > (safe_sub_func_int8_t_s_s((-8L), 0L)))) || p_20)) == p_18)), 12));
                    l_669 = l_660;
                }
                for (l_569 = (-24); (l_569 != (-7)); l_569 = safe_add_func_uint16_t_u_u(l_569, 5))
                {
                    const int **l_672 = (void*)0;
                    const int *l_673 = &g_674;
                    int **l_675 = &g_50;
                    (*l_675) = func_35((l_673 = (void*)0), ((void*)0 == (*g_619)));
                    (**g_298) = (void*)0;
                    (*l_586) = 0x1B82CDA6L;
                }
            }
            (*l_669) = (**l_585);
        }
        else
        {
            short l_691 = 0xB216L;
            const short l_692 = (-1L);
            for (p_21 = 22; (p_21 <= 28); p_21++)
            {
                return (*g_620);
            }
            for (p_21 = 0; (p_21 != 3); ++p_21)
            {
                unsigned short l_686 = 1UL;
                int ** const *l_693 = &g_299;
                int ****l_694 = (void*)0;
                int ****l_695 = (void*)0;
                int ****l_696 = &g_298;
                unsigned char l_697 = 0x0CL;
                (*l_669) = p_19;
                (*l_669) = ((*l_584) = ((p_19 >= (((safe_add_func_int32_t_s_s(((((*l_586) = p_18) , (safe_add_func_uint16_t_u_u(((0x218BL ^ ((l_691 , (l_692 <= (0x92L == ((((l_693 == ((*l_696) = &g_299)) & ((*l_586) != p_21)) , p_19) && (-1L))))) & l_697)) < 0x295ACAEAL), (*l_669)))) > (*g_513)), p_21)) < p_18) || (*g_513))) <= 0x341BL));
                for (g_74 = (-8); (g_74 > 57); ++g_74)
                {
                    int l_702 = 0x5640C0EBL;
                    (*l_586) = 0x6717C94CL;
                    if ((safe_add_func_uint16_t_u_u(l_702, (p_17 > (*l_669)))))
                    {
                        return p_21;
                    }
                    else
                    {
                        return (*g_620);
                    }
                }
            }
        }
    }
    return (*g_620);
}







static char func_22(int p_23, int p_24, char p_25, unsigned p_26)
{
    unsigned *l_56 = &g_57;
    int l_66 = 0x978C7644L;
    unsigned *l_69 = (void*)0;
    unsigned *l_70 = (void*)0;
    int l_71 = 0x3F3A8A1DL;
    unsigned short *l_73 = &g_74;
    unsigned char *l_75 = &g_34;
    unsigned char l_76 = 251UL;
    const int **l_259 = (void*)0;
    const int **l_260 = (void*)0;
    const int **l_261 = &g_118;
    const int *l_263 = &g_119;
    const int **l_262 = &l_263;
    unsigned char l_264 = 0xE7L;
    int **l_268 = (void*)0;
    const unsigned l_283 = 0xE4380670L;
    int *l_284 = &g_51;
    unsigned short **l_287 = (void*)0;
    char l_307 = 0x88L;
    const unsigned *l_344 = &g_345;
    const unsigned ** const l_343 = &l_344;
    const unsigned ** const *l_342 = &l_343;
    int * const l_346 = &g_51;
    unsigned l_400 = 4UL;
    unsigned short l_407 = 0x72F1L;
    short *l_431 = &g_405;
    short **l_430 = &l_431;
    unsigned *l_448 = (void*)0;
    unsigned char l_463 = 0x78L;
    int l_525 = 0xDE8D5FAAL;
    int ****l_532 = &g_298;
    int l_548 = 0xAB9A405DL;
    int *l_553 = (void*)0;
    (*l_261) = func_35(((*l_262) = ((*l_261) = func_38(func_40(func_42((g_118 = func_44((((((g_50 != ((((*l_75) = (((*g_50) = (safe_div_func_uint16_t_u_u(((*l_73) = (safe_add_func_uint32_t_u_u(((*l_56) = p_23), (((~(safe_add_func_int32_t_s_s((g_51 ^ (safe_div_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((l_66 == (p_24 == ((((safe_lshift_func_int16_t_s_u(g_51, (((l_71 = g_51) & ((((((void*)0 == g_50) | 65528UL) , l_66) != 0L) | p_25)) != p_24))) , g_51) , 1L) , 0L))), g_72)), p_26)), g_34))), l_66))) , 0xF9F7E48FL) && l_66)))), l_66))) > 1L)) == (-5L)) , &l_66)) || g_72) && 0x55L) <= l_66) && p_24), &l_66, g_50, l_76, g_9))))))), l_264);
    (*l_284) = (6UL && ((&l_261 != &l_260) || (safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(p_25, p_25)), ((p_23 || ((((safe_mod_func_int32_t_s_s(((*g_205) , ((safe_add_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u(0xCF16L, ((p_25 ^ 0xF5F2D47BL) > p_25))) > 7L) ^ 0x231DL), p_25)) , p_24)), (-1L))) && 1L) , l_283) >= g_27)) >= p_25))) != 0xA8EBL), p_23)), g_51))));
    if (((((p_26 && (safe_rshift_func_int8_t_s_s((g_180 = ((l_287 = &l_73) != (void*)0)), 0))) || ((safe_div_func_int8_t_s_s(p_24, (safe_lshift_func_uint16_t_u_u(((*l_261) != &g_86), 6)))) != ((safe_mod_func_int32_t_s_s((-6L), (safe_lshift_func_uint8_t_u_u(((((void*)0 == &g_74) < p_24) | 0xFE640AC8L), p_23)))) || p_25))) ^ p_24) > 255UL))
    {
        int ****l_300 = &g_298;
        unsigned short *l_308 = &g_309;
        int *l_319 = &l_71;
        unsigned short l_333 = 0x2ADAL;
        unsigned short l_336 = 0x6515L;
        unsigned char **l_338 = &g_87;
        const unsigned **l_366 = &l_344;
        unsigned short l_382 = 65532UL;
        if (((((*l_308) = (3UL >= (((((*l_73) = (((*l_300) = g_298) == &l_260)) == (p_24 & 0xE0L)) | ((*l_284) == (((*l_75) = (safe_sub_func_uint8_t_u_u((*g_87), (safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((l_307 >= g_57), 14)), g_9))))) > 0xB0L))) < 253UL))) , &l_75) != &g_87))
        {
            (**g_298) = (***l_300);
            (**g_298) = (*g_299);
        }
        else
        {
            int *l_316 = (void*)0;
            int l_318 = 0xBE9E310BL;
            (*l_284) = p_23;
            for (g_86 = (-10); (g_86 > 10); g_86 = safe_add_func_int8_t_s_s(g_86, 8))
            {
                unsigned *l_312 = &g_313;
                int l_317 = 1L;
                int *l_324 = &l_317;
                if (((((-1L) >= (((*l_312) = g_51) , (((safe_sub_func_uint16_t_u_u(((**g_298) == l_316), ((((*g_205) >= (p_24 | l_317)) , l_318) >= 0x95L))) < p_23) ^ p_24))) , 0L) , l_317))
                {
                    short *l_322 = &g_115;
                    (*l_262) = l_319;
                    (*l_284) = ((p_23 & 0xD4L) & 0L);
                    for (g_51 = (-25); (g_51 <= (-12)); g_51 = safe_add_func_uint16_t_u_u(g_51, 2))
                    {
                        return g_9;
                    }
                    (*l_319) = (((*l_322) = 1L) , p_25);
                }
                else
                {
                    int *l_323 = &g_51;
                    unsigned **l_334 = &l_56;
                    l_324 = l_323;
                    if (((safe_sub_func_uint32_t_u_u(((*l_323) = (safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((g_51 != (*g_87)), g_202)), 15))), (safe_div_func_uint16_t_u_u(0UL, l_333)))) <= (*g_87)))
                    {
                        g_335 = l_334;
                        (***l_300) = (void*)0;
                    }
                    else
                    {
                        (*l_261) = (*l_262);
                        (*l_324) = (g_9 , (*l_323));
                        l_336 = 6L;
                    }
                }
                if ((*l_324))
                {
                    unsigned l_337 = 5UL;
                    unsigned ***l_339 = &g_335;
                    (*l_319) = (&l_56 == &g_205);
                    (*l_324) = (l_337 || ((*l_319) = ((l_338 != &g_87) ^ (l_339 == (l_342 = g_340)))));
                    if (l_337)
                        break;
                    (*g_299) = l_346;
                }
                else
                {
                    return p_24;
                }
            }
            return g_115;
        }
        for (g_51 = 0; (g_51 <= 8); g_51 = safe_add_func_int16_t_s_s(g_51, 7))
        {
            unsigned *l_353 = &g_57;
            unsigned *l_367 = &g_313;
            int l_372 = (-1L);
            unsigned l_395 = 1UL;
            if ((safe_sub_func_int32_t_s_s(p_23, ((*g_205) = (safe_div_func_uint16_t_u_u(((l_353 == ((((safe_lshift_func_uint16_t_u_s((p_26 >= p_26), 4)) , ((*l_367) = (safe_mod_func_uint8_t_u_u(p_24, (safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(((((+(*g_87)) , &l_353) == ((((safe_rshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s(p_25, (*g_87))), 4)) , (void*)0) == l_366) , (*g_340))) && 0xD9F4L), (*l_284))), g_27)))))) , p_24) , (void*)0)) & p_25), 1L))))))
            {
                if (p_24)
                    break;
                (*l_319) = p_26;
            }
            else
            {
                (*l_319) = (safe_sub_func_int8_t_s_s((+g_199), (safe_sub_func_uint16_t_u_u((p_24 >= 0x0EC7L), p_25))));
                (**g_298) = (*g_299);
                (*l_262) = ((***l_300) = (void*)0);
                return p_25;
            }
            l_372 = p_25;
            (***l_300) = (**g_298);
            for (g_115 = 0; (g_115 != (-29)); --g_115)
            {
                unsigned char l_379 = 0UL;
                int *l_385 = &g_86;
                char *l_394 = &g_180;
                l_382 = ((*l_319) = (((*l_73) = (g_199 < (((&l_366 == &l_366) , (safe_lshift_func_int16_t_s_u(p_25, (safe_add_func_int16_t_s_s(l_372, (((*g_87) = l_379) | (0x7EFEL ^ p_24))))))) | (((safe_lshift_func_uint8_t_u_s(g_34, 2)) | p_24) <= l_372)))) , 2L));
                for (l_264 = 0; (l_264 != 47); l_264 = safe_add_func_uint16_t_u_u(l_264, 1))
                {
                    int l_401 = 0x5E9072B6L;
                    (**g_298) = (**g_298);
                    (***l_300) = l_385;
                    for (p_24 = (-24); (p_24 <= 22); p_24 = safe_add_func_uint32_t_u_u(p_24, 2))
                    {
                        (*l_261) = (**g_298);
                    }
                    if ((g_309 & (safe_mod_func_int32_t_s_s((*g_50), (***g_298)))))
                    {
                        short *l_404 = &g_405;
                        int l_406 = 0xD34659FDL;
                        (**g_298) = ((safe_div_func_int8_t_s_s(g_345, (safe_sub_func_uint16_t_u_u(((&p_25 == l_394) == 0UL), ((l_395 && (((p_25 >= (((l_372 = ((*l_404) = ((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s(l_400, l_401)), (safe_rshift_func_uint8_t_u_s(l_395, (*l_385))))) <= 9UL))) != l_395) == (***g_298))) == p_24) || 65535UL)) != l_401))))) , (*g_299));
                        if (l_406)
                            break;
                        (*g_299) = (**g_298);
                    }
                    else
                    {
                        (*g_50) = (l_407 <= g_313);
                        (*l_261) = l_385;
                    }
                }
            }
        }
    }
    else
    {
        unsigned char **l_409 = &l_75;
        unsigned char ***l_408 = &l_409;
        int l_410 = 8L;
        short *l_428 = &g_115;
        short **l_427 = &l_428;
        short *** const l_426 = &l_427;
        unsigned short *l_441 = &g_309;
        unsigned *l_454 = &g_57;
        unsigned l_503 = 18446744073709551608UL;
        if (((*l_346) = (((*l_408) = &g_87) != (void*)0)))
        {
            unsigned char l_411 = 0x0FL;
            int l_434 = 0x9D6BF60BL;
            unsigned short *l_442 = (void*)0;
            unsigned *l_446 = &g_9;
            unsigned **l_445 = &l_446;
            unsigned **l_447 = (void*)0;
            if (l_410)
            {
                unsigned short l_412 = 0xAEB2L;
                char l_423 = 0xB0L;
                short ***l_429 = &l_427;
                const unsigned short *l_433 = (void*)0;
                const unsigned short **l_432 = &l_433;
                unsigned char l_435 = 255UL;
                int *l_436 = &l_66;
                (*l_346) = l_410;
                g_51 = p_24;
                l_412 = (0x6BL < ((+l_411) >= (-1L)));
                (*l_436) = (((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(((((safe_div_func_uint8_t_u_u(((((*l_346) = (safe_div_func_uint16_t_u_u(l_423, l_410))) && (l_434 = (safe_sub_func_int16_t_s_s(((l_426 == l_429) | (p_24 > (((*l_429) = l_430) != (void*)0))), (&g_309 != ((*l_432) = &l_412)))))) && l_410), p_24)) != g_119) != p_26) < p_26), 12)) && l_435), 7L)), l_435)) & p_26) <= 0xB21E731DL);
            }
            else
            {
                (*l_284) = (safe_rshift_func_uint16_t_u_u(g_9, 1));
                for (g_199 = 18; (g_199 <= (-21)); --g_199)
                {
                    return g_74;
                }
                (*l_261) = (void*)0;
                (*l_284) = (l_441 == l_442);
            }
            (*l_346) = (safe_lshift_func_uint16_t_u_s((((*l_445) = &g_9) != (l_448 = &p_26)), 15));
            (*l_261) = ((*g_299) = (**g_298));
        }
        else
        {
            unsigned short **l_451 = &l_73;
            unsigned char **l_452 = (void*)0;
            char *l_453 = &g_199;
            int l_466 = 0xBAE65E62L;
            unsigned l_524 = 4294967287UL;
            if (((((*l_75) = (((*l_451) = l_441) != (void*)0)) , ((*l_453) = (&l_75 != l_452))) <= ((void*)0 != l_454)))
            {
                unsigned l_455 = 0x5275EBEAL;
                int *l_467 = &g_51;
                int *l_504 = (void*)0;
                int *l_505 = &g_86;
                if (l_455)
                {
                    short l_460 = 0xDBFAL;
                    short ***l_464 = &l_430;
                    int l_465 = (-1L);
                    const char l_477 = 0x96L;
                    if ((((safe_lshift_func_int16_t_s_s(p_23, ((g_74 , (((((**l_430) = (safe_add_func_int8_t_s_s(g_119, (g_202 = ((*l_453) = (-5L)))))) < ((l_460 & (safe_mod_func_uint8_t_u_u(l_463, ((((l_465 = (((l_464 == (void*)0) != g_74) || (*g_87))) & g_119) == l_466) , p_26)))) != (*g_205))) , 0x6525348DL) , (-3L))) && p_26))) == p_23) | 0xCEL))
                    {
lbl_468:
                        (*l_284) = ((void*)0 != &g_341);
                        (*g_299) = l_467;
                    }
                    else
                    {
                        int *l_475 = &g_476;
                        int l_478 = 0x9D0B7933L;
                        if (g_119)
                            goto lbl_468;
                        (*l_346) = (((((((~(safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((*l_467), 3)), g_72))) , g_72) ^ (safe_div_func_int8_t_s_s(l_410, ((((*l_475) = (l_465 | 1UL)) , (((&g_72 == (void*)0) == (~g_51)) | p_26)) , 1L)))) ^ 1L) < l_477) && l_478) >= 1UL);
                        (*l_262) = &l_410;
                        (*g_299) = &l_465;
                    }
                }
                else
                {
                    const int *l_483 = &l_66;
                    (*l_262) = (*l_262);
                    for (g_86 = 26; (g_86 <= (-24)); g_86 = safe_sub_func_uint32_t_u_u(g_86, 5))
                    {
                        (*l_262) = func_38(func_38((**g_298)));
                    }
                    for (l_66 = 0; (l_66 > (-22)); l_66 = safe_sub_func_uint16_t_u_u(l_66, 8))
                    {
                        int **l_484 = &l_467;
                    }
                }
                (*l_505) = ((safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(p_26, p_25)), (safe_rshift_func_int16_t_s_s(((***l_426) = p_23), (~((safe_sub_func_uint16_t_u_u((((safe_div_func_int8_t_s_s(((*l_467) = ((safe_lshift_func_int8_t_s_u((((*l_467) , (((safe_div_func_int16_t_s_s(l_466, (0xBB224FDAL || (p_25 , (*g_205))))) == (safe_lshift_func_uint16_t_u_s(((~(((safe_div_func_int32_t_s_s(7L, (-1L))) != 0x94L) < (*l_346))) , p_25), 9))) , 0xC0C592D1L)) && p_26), 0)) > g_86)), 0x2AL)) < 0x83BAL) >= l_503), 0x1392L)) & l_410)))))) < l_503);
            }
            else
            {
                short *l_512 = &g_115;
                unsigned short l_516 = 65535UL;
                unsigned char l_522 = 0UL;
                unsigned * const *l_523 = &l_70;
                int l_539 = 0L;
                for (g_202 = (-23); (g_202 != 27); ++g_202)
                {
                    int *l_536 = &g_476;
                    int l_546 = 0xE6F447A8L;
                    char *l_547 = (void*)0;
                    (*l_346) = (~((safe_mod_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((g_202 >= g_86), ((g_513 = l_512) == (void*)0))) < (safe_mod_func_uint8_t_u_u(p_24, g_51))), 0xFDL)) != (l_516 > l_516)));
                    if ((safe_sub_func_uint16_t_u_u(((((((safe_unary_minus_func_uint32_t_u(l_410)) , ((p_26 | ((void*)0 == &l_75)) & ((safe_rshift_func_uint16_t_u_u(((p_26 < ((((p_26 & ((((l_410 && (((*g_205) = l_522) , ((**l_430) = ((*l_512) = (&p_23 == (void*)0))))) || l_503) | 0x8CL) == p_25)) , l_523) != (*g_340)) <= l_524)) > l_466), l_516)) & p_26))) <= 5UL) != 0L) & g_51) , l_525), g_34)))
                    {
                        (*l_426) = &l_431;
                        (**g_298) = &l_466;
                    }
                    else
                    {
                        int ****l_533 = &g_298;
                        unsigned short * const l_537 = &g_74;
                        const unsigned char l_538 = 1UL;
                        l_539 = (((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((((p_24 < (safe_rshift_func_int8_t_s_u(g_57, 5))) | 2L) ^ g_476), 1)), ((l_410 = (((l_532 != l_533) & (safe_div_func_uint8_t_u_u(((l_536 == &g_72) >= (l_537 != (void*)0)), (*g_87)))) ^ 3L)) || 0x1178C8B2L))) & l_538) || l_466);
                    }
                    if (l_524)
                        break;
                    (**g_298) = func_44((((*l_75) = ((**l_409) = (*g_87))) , 0x662D2B78L), ((***l_532) = l_536), &l_539, g_199, (((((((l_466 = ((safe_mod_func_uint16_t_u_u(((p_26 || 0x27L) ^ p_23), ((***l_426) = (safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u((l_546 ^ p_25), p_26)), p_23))))) != 4L)) , p_24) || 65535UL) == l_548) & 0x31L) , p_25) != l_516));
                }
            }
            (***l_532) = &l_410;
            for (l_548 = 0; (l_548 >= 11); l_548 = safe_add_func_uint32_t_u_u(l_548, 4))
            {
                (***l_532) = (*g_299);
            }
            (*l_261) = (*g_299);
        }
        (*l_346) = (p_24 | ((p_26 < (safe_add_func_int16_t_s_s((*g_513), ((*l_73) = g_115)))) >= l_410));
    }
    (**g_298) = l_553;
    return g_202;
}







static int * const func_35(const int * p_36, short p_37)
{
    unsigned **l_266 = &g_205;
    unsigned ***l_265 = &l_266;
    int * const l_267 = (void*)0;
    (*l_265) = (void*)0;
    return l_267;
}







static int * func_38(int * p_39)
{
    const int **l_258 = &g_118;
    for (g_57 = (-9); (g_57 > 15); g_57 = safe_add_func_int16_t_s_s(g_57, 2))
    {
        int **l_257 = &g_50;
        (*l_257) = p_39;
    }
    (*l_258) = &g_119;
    (*l_258) = (*l_258);
    return p_39;
}







static int * func_40(int * p_41)
{
    unsigned char l_134 = 246UL;
    int *l_135 = &g_86;
    int **l_136 = &l_135;
    int l_172 = 1L;
    char *l_201 = &g_202;
    int l_214 = (-8L);
    unsigned short *l_228 = &g_74;
    unsigned short **l_227 = &l_228;
    const short *l_254 = &g_115;
    const short **l_253 = &l_254;
    (*g_50) = l_134;
    (*l_136) = l_135;
    if (l_134)
        goto lbl_137;
lbl_137:
    (*l_136) = p_41;
    if ((safe_add_func_int16_t_s_s(((void*)0 != &p_41), (safe_unary_minus_func_int8_t_s(g_9)))))
    {
        char l_141 = (-8L);
        unsigned short *l_142 = &g_74;
        short * const **l_144 = &g_143;
        int l_154 = 1L;
        int l_159 = (-1L);
        char *l_168 = (void*)0;
        char *l_169 = &l_141;
        char *l_179 = &g_180;
        char l_181 = (-1L);
        (*l_144) = (((*l_142) = (g_86 , l_141)) , g_143);
        (**l_136) = (*g_50);
        if (((((**l_136) ^ ((*g_118) < (*l_135))) > (*g_118)) && 0x2DL))
        {
            int *l_145 = (void*)0;
            p_41 = l_145;
            (**l_136) = ((*g_50) = 0x22227AEBL);
        }
        else
        {
            unsigned l_146 = 0x000C4EEBL;
            short *l_153 = (void*)0;
            short *l_155 = (void*)0;
            short *l_156 = &g_115;
            unsigned *l_157 = (void*)0;
            unsigned *l_158 = &g_57;
            (**l_136) = (((l_141 != l_146) ^ g_9) , (((l_159 = ((*l_158) = ((safe_mod_func_uint16_t_u_u((**l_136), ((*l_156) = (l_154 = (safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((*g_87) = ((((**l_136) || ((*g_50) = (*g_118))) ^ ((void*)0 != l_153)) & (l_146 > (*l_135)))), (**l_136))), 4294967295UL)))))) < l_141))) ^ 0x32A7D5B9L) , (*p_41)));
        }
        l_159 = (safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((((~(-5L)) ^ (*g_87)) ^ (**l_136)), (l_181 = (safe_sub_func_int16_t_s_s(((((**l_136) , ((((*l_179) = (safe_mod_func_int32_t_s_s(((((*l_169) = l_159) < (safe_mod_func_int16_t_s_s(l_172, (safe_add_func_uint32_t_u_u((g_57 = (safe_mod_func_uint16_t_u_u(((g_86 != 0x9B809ED8L) , ((*l_142) = (((l_154 = ((safe_mod_func_uint32_t_u_u(g_119, (*g_50))) , 4L)) < l_159) , g_34))), (**l_136)))), (*g_50)))))) , (*g_118)), (**l_136)))) && (*l_135)) & 1L)) , (-7L)) , 0xAA8CL), l_159))))), l_159));
    }
    else
    {
        char l_184 = 0x92L;
        int l_196 = (-1L);
        unsigned *l_206 = &g_57;
        unsigned short l_207 = 0UL;
        int *l_250 = &g_72;
        (*l_136) = func_42((*l_136));
        for (l_134 = 0; (l_134 < 28); l_134 = safe_add_func_uint16_t_u_u(l_134, 7))
        {
            unsigned short l_193 = 1UL;
            char *l_197 = &g_180;
            char *l_198 = &g_199;
            int *l_200 = (void*)0;
            unsigned *l_204 = &g_57;
            unsigned **l_203 = &l_204;
            const unsigned l_222 = 0x32BBBA2DL;
            (**l_136) = (4UL & l_184);
            (*l_136) = func_42(&g_86);
        }
        l_196 = ((*g_50) = (((**l_136) = 0x8C4533D2L) && (!(((safe_sub_func_int32_t_s_s(0L, (((*l_250) = l_184) , (l_184 , (safe_sub_func_uint8_t_u_u(0x17L, (0x68E1CF2DL ^ (l_196 <= l_196)))))))) && (l_253 == g_143)) > g_57))));
    }
    return p_41;
}







static int * func_42(const int * p_43)
{
    short *l_122 = &g_115;
    int l_123 = 0xEF039836L;
    int l_129 = (-4L);
    const unsigned * const l_133 = &g_57;
    if (((*g_50) = (((safe_rshift_func_int8_t_s_u(0x7EL, (l_122 != ((g_72 , l_123) , l_122)))) < (safe_add_func_int8_t_s_s(l_123, l_123))) && l_123)))
    {
        const unsigned char l_128 = 0x5BL;
        (*g_50) = (*p_43);
        (*g_50) = ((safe_rshift_func_uint8_t_u_s((g_27 , ((l_128 | ((*g_87) = (*g_87))) < ((((l_123 & (l_128 >= ((!(((*g_50) , l_122) == (void*)0)) > (g_57 , g_86)))) ^ l_129) ^ l_128) > 0x5D52L))), 1)) && 0xB8142826L);
        (*g_50) = (g_74 > l_123);
    }
    else
    {
        const int **l_130 = &g_118;
        unsigned char **l_131 = &g_87;
        unsigned char ***l_132 = &l_131;
        (*l_130) = p_43;
        (*l_130) = &g_86;
        (*l_132) = l_131;
    }
    (*g_50) = (l_133 == p_43);
    return &g_86;
}







static int * func_44(unsigned p_45, int * p_46, int * p_47, unsigned p_48, int p_49)
{
    unsigned short l_79 = 65535UL;
    unsigned *l_82 = &g_57;
    unsigned char *l_83 = &g_34;
    int l_84 = 0xA89AEEB1L;
    int *l_85 = &g_86;
    (*l_85) = (safe_sub_func_int16_t_s_s((l_79 ^ (safe_mod_func_int8_t_s_s((((*l_82) = 0x3103D53AL) <= ((*p_46) = (l_83 == (((g_74 <= l_84) == ((l_84 , 0x6F303358L) , ((g_74 | ((((*p_47) = (g_74 , l_84)) , (void*)0) != (void*)0)) , 0UL))) , &g_27)))), 0xD5L))), p_49));
    if ((l_83 == g_87))
    {
        int **l_89 = &l_85;
        int ***l_88 = &l_89;
        (*l_88) = (void*)0;
        for (g_72 = 0; (g_72 <= (-29)); --g_72)
        {
            int *l_94 = &g_51;
            (*g_50) = 0x241BC4ECL;
            for (p_48 = 24; (p_48 != 48); p_48++)
            {
                (*g_50) = (-3L);
                return l_94;
            }
        }
    }
    else
    {
        unsigned l_97 = 0UL;
        if ((safe_mod_func_int8_t_s_s(l_97, p_49)))
        {
            (*l_85) = 0xB6DB4DB8L;
        }
        else
        {
            int l_108 = 7L;
            char l_113 = 0x0EL;
            short *l_114 = &g_115;
            unsigned short *l_116 = (void*)0;
            unsigned short *l_117 = &g_74;
            (*p_46) = (((safe_add_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(((((0L <= (*g_87)) && (safe_div_func_int32_t_s_s(((&g_74 == (void*)0) | ((safe_lshift_func_uint16_t_u_u(l_108, 4)) != (safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((((*l_117) = (((*p_47) = (((l_113 & l_113) & (*l_85)) == ((*l_114) = g_34))) , 0x431CL)) | p_45) , 0x75L), 3)), 0x4BL)))), l_97))) != (*l_85)) != (*l_85)), g_27)) >= l_97), g_57)) != g_27) , (*g_50));
        }
    }
    return &g_51;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    transparent_crc(g_313, "g_313", print_hash_value);
    transparent_crc(g_345, "g_345", print_hash_value);
    transparent_crc(g_405, "g_405", print_hash_value);
    transparent_crc(g_476, "g_476", print_hash_value);
    transparent_crc(g_643, "g_643", print_hash_value);
    transparent_crc(g_674, "g_674", print_hash_value);
    transparent_crc(g_727, "g_727", print_hash_value);
    transparent_crc(g_796, "g_796", print_hash_value);
    transparent_crc(g_922, "g_922", print_hash_value);
    transparent_crc(g_1002, "g_1002", print_hash_value);
    transparent_crc(g_1035, "g_1035", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
