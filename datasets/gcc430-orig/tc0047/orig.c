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



static int g_3 = 0xC8B13ECAL;
static short g_15 = (-2L);
static int g_22 = 0x47D2038EL;
static unsigned short g_24 = 65535UL;
static unsigned long long g_52 = 0xAF14186E1459F451LL;
static int g_94 = 1L;
static int *g_164 = (void*)0;
static int **g_163 = &g_164;
static unsigned g_231 = 0xCAAA6151L;
static char g_264 = (-1L);
static unsigned g_274 = 0x81EB8B6CL;
static const int *g_331 = &g_3;
static const int ** const g_330 = &g_331;
static int g_399 = 4L;
static unsigned long long g_402 = 0UL;
static const int g_443 = 0x838914F1L;
static long long g_462 = 0xFAFC0084AF5CDD96LL;
static int g_463 = (-1L);
static int g_464 = (-4L);
static unsigned char g_470 = 1UL;
static long long g_485 = 0x96A82E25330AEA5CLL;
static unsigned short g_554 = 0xA284L;
static unsigned g_591 = 0x9A029482L;
static int *g_668 = &g_399;
static int g_718 = 0xF3E17549L;
static char g_727 = (-1L);
static long long g_746 = 0x1A26BE1EBE222405LL;
static short g_917 = 0x4AADL;
static unsigned short g_939 = 65528UL;
static char g_993 = (-10L);
static unsigned long long g_1028 = 0x7F66F17ABE5FAF83LL;
static char g_1149 = 0L;
static int g_1151 = 0xFC1F887AL;
static long long g_1158 = 0x53EC302EDCC4B6A2LL;
static unsigned short g_1195 = 6UL;
static unsigned short g_1215 = 0x1593L;
static char g_1346 = 0xE6L;
static long long g_1449 = (-1L);
static unsigned long long g_1458 = 0UL;
static char g_1520 = 0L;
static unsigned char g_1672 = 0UL;
static unsigned char g_1752 = 0xCAL;
static unsigned short g_1765 = 65535UL;
static unsigned char g_1890 = 0x91L;
static int g_1916 = 2L;
static int g_1995 = 0xA8C6D819L;



static int func_1(void);
static int * func_27(int p_28, unsigned char p_29, long long p_30, unsigned char p_31);
static int func_32(char p_33, char p_34);
static short func_35(unsigned p_36);
static unsigned func_37(long long p_38, int * p_39, unsigned long long p_40, int * p_41);
static int * func_62(long long p_63);
static long long func_70(short p_71, int ** p_72, int * p_73, char p_74);
static int * func_77(int ** p_78);
static int ** func_80(int * p_81, int p_82, int * p_83, int * p_84, const int ** const p_85);
static int * func_86(long long p_87, unsigned short p_88, long long p_89);
static int func_1(void)
{
    int *l_2 = &g_3;
    int *l_4 = &g_3;
    int *l_5 = &g_3;
    int l_6 = 8L;
    int *l_7 = &g_3;
    int l_8 = 1L;
    int *l_9 = (void*)0;
    int *l_10 = &l_6;
    int *l_11 = &l_8;
    int l_12 = 3L;
    int *l_13 = (void*)0;
    int *l_14 = &g_3;
    int *l_16 = (void*)0;
    int *l_17 = &l_6;
    int *l_18 = &l_8;
    int *l_19 = &g_3;
    int *l_20 = &l_8;
    int *l_21 = &l_8;
    int *l_23 = &l_6;
    long long l_1996 = 2L;
    --g_24;
    (*g_163) = func_27(func_32((*l_17), (func_35(func_37(((safe_unary_minus_func_uint32_t_u(0x3EEF7D26L)) , g_15), &l_8, g_24, &g_3)) , 2L)), g_1195, (*l_21), g_463);
    return l_1996;
}







static int * func_27(int p_28, unsigned char p_29, long long p_30, unsigned char p_31)
{
    unsigned l_1982 = 0x442666DBL;
    int * const *l_1983 = &g_668;
    int **l_1986 = &g_164;
    char l_1993 = (-4L);
    int *l_1994 = &g_1995;
    (**l_1983) = ((func_32(l_1982, g_402) , &g_668) != l_1983);
    (*g_668) = (p_28 , (safe_add_func_int32_t_s_s((**l_1983), 0xDF7DB922L)));
    (*l_1986) = (*l_1983);
    (*l_1994) ^= func_32((safe_lshift_func_int16_t_s_u(func_35(p_30), 4)), ((**l_1983) <= ((safe_lshift_func_int16_t_s_u(g_1449, 6)) , (((**l_1983) == ((**l_1986) != ((safe_sub_func_int8_t_s_s(1L, l_1993)) == g_1158))) , 0x30L))));
    return (*g_163);
}







static int func_32(char p_33, char p_34)
{
    int * const l_653 = &g_3;
    int *l_657 = &g_399;
    unsigned char l_681 = 0xC6L;
    int ***l_813 = (void*)0;
    int l_828 = 0x8F9D58D2L;
    int l_959 = 0x656EF327L;
    int l_1161 = 0x7F809B3BL;
    int l_1214 = 0L;
    int **l_1318 = &l_657;
    unsigned l_1331 = 18446744073709551615UL;
    char l_1516 = (-1L);
    int l_1521 = 0x9CDABB09L;
    unsigned l_1569 = 18446744073709551615UL;
    int *l_1580 = &l_959;
    unsigned char l_1581 = 0UL;
    int l_1749 = 0L;
    int *l_1774 = &g_718;
    int l_1903 = 0x8F442C99L;
    const unsigned l_1909 = 1UL;
    unsigned short l_1912 = 0x44FAL;
    int **l_1981 = &g_668;
    for (g_402 = 0; (g_402 != 31); g_402 = safe_add_func_uint8_t_u_u(g_402, 7))
    {
        unsigned char l_654 = 0x8AL;
        int **l_666 = &g_164;
        const short l_693 = 0L;
        int l_706 = (-1L);
        unsigned l_861 = 18446744073709551615UL;
        int l_900 = (-1L);
        int l_1052 = 0x9B2F76C1L;
        int l_1187 = 0xD08D2899L;
        char l_1207 = 0x61L;
        unsigned long long l_1303 = 18446744073709551608UL;
        unsigned l_1341 = 0UL;
        const int l_1366 = 0x717B8534L;
        int *l_1467 = &l_1161;
        int *l_1507 = (void*)0;
        unsigned l_1564 = 6UL;
        int *l_1582 = &l_828;
    }
    if ((**l_1318))
    {
        unsigned long long l_1596 = 18446744073709551615UL;
        int *l_1597 = &g_94;
        const int ** const l_1598 = (void*)0;
        int l_1624 = 0x734D29E3L;
        int l_1655 = 1L;
        unsigned char l_1659 = 6UL;
        unsigned long long l_1686 = 0xD26C45777ACB9905LL;
        unsigned l_1766 = 1UL;
        unsigned char l_1796 = 0x2BL;
        int *l_1811 = (void*)0;
        char l_1821 = 1L;
        if ((**l_1318))
        {
            unsigned short l_1585 = 0xBCF8L;
            int *l_1599 = &g_1151;
            int l_1604 = 0x120CD20CL;
            int l_1639 = 0xF27BA94BL;
            (*g_330) = ((safe_lshift_func_uint16_t_u_s((p_34 , (l_1585 & (safe_add_func_uint16_t_u_u(func_35((((((safe_mul_func_uint8_t_u_u(1UL, (safe_sub_func_uint16_t_u_u((*l_657), (safe_add_func_int16_t_s_s(p_34, p_34)))))) , g_402) == (-3L)) == 0xF3B3E313L) , 0x75B18C2AL)), g_1158)))), (*l_1599))) , (void*)0);
            for (l_828 = 10; (l_828 > (-24)); l_828 = safe_sub_func_int16_t_s_s(l_828, 1))
            {
                int *l_1602 = (void*)0;
                int *l_1603 = &l_1161;
                int l_1605 = 0L;
                int *l_1606 = &l_1605;
                int *l_1607 = &g_1151;
                int *l_1608 = &g_718;
                int *l_1609 = &g_3;
                int *l_1610 = &l_1161;
                int *l_1611 = (void*)0;
                int *l_1612 = &l_959;
                int *l_1613 = &l_1604;
                int *l_1614 = &g_3;
                int *l_1615 = &l_1605;
                int *l_1616 = (void*)0;
                int *l_1617 = &g_399;
                int *l_1618 = &g_1151;
                int *l_1619 = &l_959;
                int *l_1620 = &g_718;
                int *l_1621 = (void*)0;
                int *l_1622 = (void*)0;
                int *l_1623 = (void*)0;
                int *l_1625 = &l_1214;
                int *l_1626 = &l_1161;
                int *l_1627 = &l_1605;
                int *l_1628 = &g_718;
                int *l_1629 = &g_1151;
                int l_1630 = 0L;
                int *l_1631 = &l_1604;
                int *l_1632 = &g_718;
                int *l_1633 = &g_718;
                int *l_1634 = &g_3;
                int *l_1635 = &g_718;
                int *l_1636 = (void*)0;
                int *l_1637 = &l_959;
                int *l_1638 = &g_399;
                int *l_1640 = &l_1604;
                int *l_1641 = &g_399;
                int *l_1642 = &g_3;
                int *l_1643 = &l_1639;
                int *l_1644 = (void*)0;
                int *l_1645 = &l_1214;
                int *l_1646 = &l_1604;
                int *l_1647 = &g_94;
                int *l_1648 = (void*)0;
                int *l_1649 = &g_399;
                int *l_1650 = &g_718;
                int *l_1651 = &g_1151;
                int *l_1652 = &l_1639;
                int *l_1653 = (void*)0;
                int *l_1654 = (void*)0;
                int *l_1656 = &l_1214;
                int *l_1657 = &l_959;
                int *l_1658 = &l_959;
                --l_1659;
                for (g_1520 = 0; (g_1520 == 22); g_1520 = safe_add_func_uint64_t_u_u(g_1520, 1))
                {
                    long long l_1673 = (-8L);
                    if ((safe_rshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((func_35((((g_15 >= p_33) <= 0xBA39L) >= p_33)) == 0x7DL), 1L)) > g_1028), (safe_add_func_int8_t_s_s((g_1672 , 0x9AL), p_33)))), 5)))
                    {
                        return p_33;
                    }
                    else
                    {
                        unsigned l_1674 = 0x013548D6L;
                        --l_1674;
                    }
                    for (g_94 = 0; (g_94 < (-22)); --g_94)
                    {
                        int l_1681 = 3L;
                        l_1681 = (safe_mod_func_uint8_t_u_u((&g_331 == &g_668), 248UL));
                    }
                    for (l_1161 = 17; (l_1161 > (-9)); l_1161 = safe_sub_func_int64_t_s_s(l_1161, 6))
                    {
                        return g_1215;
                    }
                }
            }
        }
        else
        {
            char l_1693 = 0x3DL;
            int *** const l_1696 = (void*)0;
            int l_1718 = 1L;
            int l_1719 = 0x6DAB85D2L;
            int *l_1720 = (void*)0;
            int *l_1721 = &g_399;
            int *l_1722 = &g_3;
            int *l_1723 = &g_718;
            int l_1724 = 0x5F48883AL;
            int *l_1725 = (void*)0;
            int *l_1726 = &l_1214;
            int *l_1727 = &l_1655;
            int *l_1728 = &l_828;
            int *l_1729 = &l_1719;
            int *l_1730 = &g_399;
            int *l_1731 = &g_3;
            int *l_1732 = &g_718;
            int *l_1733 = &g_94;
            int *l_1734 = (void*)0;
            int *l_1735 = &l_1655;
            int *l_1736 = &g_399;
            int *l_1737 = &g_3;
            int *l_1738 = (void*)0;
            int *l_1739 = &l_1719;
            int *l_1740 = &g_94;
            int *l_1741 = &l_1719;
            int *l_1742 = &g_718;
            int *l_1743 = &g_3;
            int *l_1744 = &g_1151;
            int *l_1745 = &l_959;
            int *l_1746 = &l_1214;
            int *l_1747 = &g_1151;
            int *l_1748 = &l_1719;
            int *l_1750 = (void*)0;
            int *l_1751 = &l_1724;
            (*g_668) |= (p_34 == (+(safe_rshift_func_uint8_t_u_u((p_34 <= (((p_34 & ((((l_1686 < ((&l_1624 == (void*)0) , ((safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s(5L, p_34)), (0L > p_33))), p_33)) && g_22))) ^ p_34) || g_22) ^ p_34)) < p_34) , p_34)), l_1693))));
            for (g_591 = 0; (g_591 <= 59); g_591 = safe_add_func_int64_t_s_s(g_591, 3))
            {
                int *l_1707 = (void*)0;
                (*l_1597) = p_34;
                if (((safe_rshift_func_uint16_t_u_u(g_1346, (safe_mod_func_int32_t_s_s((g_264 == (*g_668)), (((((*g_163) != (*l_1318)) <= 1L) >= g_463) ^ (-7L)))))) || g_1195))
                {
                    unsigned long long l_1710 = 0x97D620E7058F21EBLL;
                    for (g_554 = 14; (g_554 < 1); g_554--)
                    {
                        (*g_163) = (*g_163);
                        (**l_1318) = (p_33 == ((0x51B60400L < l_1710) && 0xDB4DL));
                        (*g_163) = l_1707;
                    }
                    (*g_163) = func_86((safe_mod_func_uint8_t_u_u(g_24, 0xB0L)), l_1710, g_993);
                }
                else
                {
                    int *l_1717 = &l_1624;
                    (*g_330) = func_86(g_402, p_34, g_464);
                    for (l_828 = (-19); (l_828 <= 17); l_828++)
                    {
                        unsigned short l_1715 = 0UL;
                        int *l_1716 = &l_959;
                        l_1715 = (*l_1597);
                        l_1717 = l_1716;
                        (*l_1318) = func_62((*l_1717));
                        return g_1195;
                    }
                }
                l_1718 = p_34;
            }
            g_1752++;
            for (g_462 = 19; (g_462 >= (-5)); --g_462)
            {
                unsigned l_1763 = 1UL;
                int *l_1764 = (void*)0;
                unsigned short l_1773 = 65532UL;
                if (((+(safe_lshift_func_int16_t_s_s(p_33, 7))) <= (g_1765 > (*l_1732))))
                {
                    return g_24;
                }
                else
                {
                    if (p_33)
                        break;
                    (*l_1729) = l_1766;
                }
                (*g_330) = func_86(g_1158, ((+((g_443 > (safe_sub_func_uint64_t_u_u((((p_34 ^ ((safe_rshift_func_int16_t_s_s(((g_470 ^ func_37(g_1151, (func_35(g_939) , (*g_163)), (safe_lshift_func_uint8_t_u_u((((g_463 >= 0xA31B42DFL) != g_15) ^ 0x13L), g_917)), (*l_1318))) || p_33), p_34)) , p_34)) > (-10L)) && (-1L)), l_1773))) != p_34)) , g_485), g_591);
                (*l_1730) &= 0x67A530A7L;
            }
        }
        if (p_34)
        {
            short l_1775 = 4L;
            (*g_330) = l_1774;
            return l_1775;
        }
        else
        {
            short l_1776 = 0x1635L;
            int *l_1810 = &l_1655;
            unsigned long long l_1813 = 18446744073709551614UL;
            int l_1836 = (-7L);
            int l_1842 = 0xAFFC8618L;
            int l_1843 = 0xB23FAD01L;
            l_1776 &= (*l_1597);
            for (l_1686 = 21; (l_1686 == 56); l_1686 = safe_add_func_uint32_t_u_u(l_1686, 1))
            {
                char l_1785 = 0x5DL;
                const long long l_1815 = 0xD8D5BFE1E7B4D0E9LL;
                int **l_1826 = &l_1597;
                char l_1835 = 0xE8L;
                int l_1845 = 1L;
                int l_1863 = 0x612EEC88L;
                int l_1869 = 0x1FD11AF5L;
                int l_1870 = 0x3CD6D119L;
                if (p_34)
                {
                    int *l_1814 = &g_399;
                    if ((0xAFDEFD77L & (safe_rshift_func_uint8_t_u_s((+((p_34 ^ ((0x89L != ((((void*)0 == (*g_163)) , (*g_330)) != ((safe_add_func_int64_t_s_s(0xEBB536472C70D4E7LL, (safe_sub_func_uint64_t_u_u((((l_1776 & (-9L)) <= 0xF0B1L) != (*l_1597)), l_1785)))) , (*g_330)))) , 1L)) & g_1449)), 5))))
                    {
                        const char l_1801 = (-2L);
                        unsigned char l_1812 = 0UL;
                        (*l_1814) = (safe_add_func_int64_t_s_s(func_35((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s(p_34, l_1796)), ((+((safe_lshift_func_int16_t_s_s(func_37(((safe_rshift_func_uint16_t_u_s((*l_1774), ((l_1785 , l_1801) && (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(p_34, func_37((g_264 , l_1785), &l_1624, g_1520, &l_1655))), l_1785))))) , l_1813), l_1814, (*l_1774), (*l_1318)), 4)) < (*l_1580))) , (*l_1814)))) & l_1815) & p_34), l_1785)), p_33))), p_34));
                        if ((*l_1810))
                            continue;
                    }
                    else
                    {
                        int **l_1822 = &l_657;
                        if ((*l_657))
                            break;
                        (**l_1318) = l_1785;
                        (*g_668) = ((18446744073709551609UL == p_34) < (((safe_unary_minus_func_uint8_t_u(g_231)) <= ((((safe_sub_func_uint32_t_u_u(((((*l_1810) > (safe_add_func_int8_t_s_s(((((((l_1821 <= (p_34 == 1UL)) , 0UL) & (-1L)) | 1L) , (void*)0) != &g_668), g_470))) > p_33) ^ 0L), (*g_668))) , p_33) , l_1822) == l_1822)) , p_34));
                        (*g_330) = (void*)0;
                    }
                }
                else
                {
                    unsigned char l_1823 = 249UL;
                    int l_1837 = 0xAA46276EL;
                    int l_1871 = 0L;
                    int l_1878 = 4L;
                    if (((p_34 ^ p_33) ^ p_34))
                    {
                        (*l_1580) = (*g_668);
                    }
                    else
                    {
                        int l_1829 = (-1L);
                        int *l_1838 = &l_1836;
                        int *l_1839 = &g_3;
                        int *l_1840 = &g_3;
                        int *l_1841 = &g_718;
                        int *l_1844 = (void*)0;
                        int *l_1846 = (void*)0;
                        int *l_1847 = &l_1842;
                        int *l_1848 = &l_1837;
                        int *l_1849 = &l_1837;
                        int *l_1850 = &g_718;
                        int *l_1851 = (void*)0;
                        int *l_1852 = &g_94;
                        int *l_1853 = &g_1151;
                        int *l_1854 = &l_1842;
                        int *l_1855 = &l_1161;
                        int *l_1856 = &g_3;
                        int *l_1857 = &l_1843;
                        int *l_1858 = (void*)0;
                        int *l_1859 = &l_1843;
                        int *l_1860 = &l_1214;
                        int *l_1861 = (void*)0;
                        int *l_1862 = &g_3;
                        int *l_1864 = &g_1151;
                        int *l_1865 = (void*)0;
                        int *l_1866 = &l_1843;
                        int *l_1867 = &l_959;
                        int *l_1868 = &l_828;
                        int *l_1872 = &l_1870;
                        int *l_1873 = &l_1214;
                        int *l_1874 = &l_1842;
                        int *l_1875 = &l_1843;
                        int *l_1876 = &l_1214;
                        int *l_1877 = &l_1836;
                        int *l_1879 = &g_1151;
                        int *l_1880 = (void*)0;
                        int *l_1881 = &l_1869;
                        int *l_1882 = (void*)0;
                        int *l_1883 = &l_1869;
                        int *l_1884 = &l_1845;
                        int *l_1885 = &l_1214;
                        int *l_1886 = &g_1151;
                        int *l_1887 = &l_1871;
                        int *l_1888 = &g_718;
                        int *l_1889 = (void*)0;
                        (*l_1810) &= (safe_mod_func_int64_t_s_s(l_1829, (safe_lshift_func_int16_t_s_s((func_37((p_34 != ((((g_1149 | (safe_unary_minus_func_uint8_t_u(p_34))) == (((&g_163 == ((safe_rshift_func_uint16_t_u_u(func_37(g_231, func_62(((func_35(g_264) != l_1835) | 0x5AL)), l_1836, &l_1836), 13)) , &g_163)) ^ 0xDF3F27A0D198438DLL) , 7UL)) > g_22) < (-9L))), (*l_1318), l_1829, (*l_1826)) , l_1823), 6))));
                        (*l_1597) = p_34;
                        g_1890++;
                    }
                }
            }
        }
        (*g_163) = func_86(g_1672, func_35(p_33), (**l_1318));
        if ((*l_1597))
        {
            return g_727;
        }
        else
        {
            long long l_1898 = 0L;
            int **l_1906 = (void*)0;
            unsigned short l_1965 = 0UL;
            for (l_959 = 10; (l_959 <= (-20)); l_959 = safe_sub_func_int32_t_s_s(l_959, 7))
            {
                unsigned l_1897 = 0x3C5AEB27L;
                l_1898 |= ((safe_mul_func_uint16_t_u_u(func_35(l_1897), g_1149)) == ((((((l_1897 , 0UL) || p_34) || 0L) > (p_33 | p_33)) > p_33) || 1UL));
                for (g_727 = 27; (g_727 == 16); g_727--)
                {
                    (*l_1774) &= (safe_mul_func_int8_t_s_s((p_34 <= l_1897), (g_470 < (p_33 ^ ((l_1903 , (safe_mod_func_uint64_t_u_u(((void*)0 == l_1906), (~(((safe_sub_func_uint16_t_u_u(p_34, (*l_657))) && l_1909) | g_470))))) > g_917)))));
                }
            }
            if ((g_1765 , (0x4325CF0BL | (g_1158 >= g_231))))
            {
                int *l_1915 = &l_1655;
                int l_1917 = 1L;
                (*g_668) = ((g_274 & 0x6BB1L) && l_1912);
                (*l_1774) = ((safe_add_func_uint64_t_u_u(func_37(g_231, l_1915, g_1916, l_1915), g_274)) || p_34);
            }
            else
            {
                int l_1918 = 1L;
                int l_1919 = 0L;
                int *l_1920 = (void*)0;
                int *l_1921 = &l_828;
                int *l_1922 = &g_718;
                int *l_1923 = &g_718;
                int *l_1924 = (void*)0;
                int *l_1925 = &l_1214;
                int *l_1926 = &g_718;
                int *l_1927 = &l_1214;
                int *l_1928 = &g_94;
                int *l_1929 = &l_1624;
                int *l_1930 = &l_1918;
                int *l_1931 = &g_718;
                int *l_1932 = &l_1919;
                int *l_1933 = (void*)0;
                int *l_1934 = (void*)0;
                int *l_1935 = &g_399;
                int *l_1936 = &g_1916;
                int *l_1937 = &g_94;
                int *l_1938 = (void*)0;
                int *l_1939 = &l_959;
                int *l_1940 = (void*)0;
                int *l_1941 = (void*)0;
                int *l_1942 = (void*)0;
                int *l_1943 = &l_1624;
                int *l_1944 = &g_1916;
                int *l_1945 = (void*)0;
                int *l_1946 = &l_828;
                int *l_1947 = &g_399;
                int *l_1948 = &l_1655;
                int *l_1949 = &l_1161;
                int *l_1950 = (void*)0;
                int *l_1951 = &g_718;
                int *l_1952 = &g_3;
                int *l_1953 = &g_1151;
                int *l_1954 = &l_1161;
                int *l_1955 = &l_1655;
                int *l_1956 = (void*)0;
                int *l_1957 = &l_1655;
                int *l_1958 = &g_1151;
                int *l_1959 = &g_1151;
                int *l_1960 = (void*)0;
                int *l_1961 = (void*)0;
                int l_1962 = 1L;
                int l_1963 = 0x7F2482FFL;
                int l_1964 = 1L;
                ++l_1965;
            }
            for (g_727 = 0; (g_727 != (-24)); g_727 = safe_sub_func_int16_t_s_s(g_727, 1))
            {
                (*l_1318) = (*g_163);
            }
        }
    }
    else
    {
        unsigned short l_1974 = 0x7577L;
        (*g_668) = (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(g_3, (-1L))), (l_1974 && 0x3812F26FL)));
        (*g_330) = (void*)0;
    }
    (*l_653) = (safe_add_func_int16_t_s_s((&g_331 != &l_653), ((safe_sub_func_uint64_t_u_u(((((safe_mul_func_uint16_t_u_u((*l_1580), ((&g_330 == &l_1318) ^ 0L))) <= g_274) , 0x17L) >= g_939), 0xCC5B62A5AA380462LL)) & 248UL)));
    return p_34;
}







static short func_35(unsigned p_36)
{
    unsigned char l_638 = 0UL;
    int *l_641 = &g_94;
    const int ** const l_642 = &g_331;
    (*l_641) &= (p_36 > g_3);
    return g_274;
}







static unsigned func_37(long long p_38, int * p_39, unsigned long long p_40, int * p_41)
{
    int *l_43 = &g_3;
    int l_44 = (-2L);
    int *l_45 = &l_44;
    int l_46 = 0x54E5878EL;
    int *l_47 = (void*)0;
    int *l_48 = &l_46;
    int l_49 = 0L;
    int *l_50 = &g_3;
    int l_51 = (-1L);
    unsigned l_603 = 0xA35B0BF8L;
    int ** const *l_620 = &g_163;
    int l_637 = 0L;
    --g_52;
    for (g_15 = 0; (g_15 >= 27); ++g_15)
    {
        return p_40;
    }
    if ((safe_lshift_func_uint8_t_u_s(g_3, 1)))
    {
        int **l_59 = &l_50;
        (*l_59) = &g_3;
    }
    else
    {
        unsigned char l_598 = 0xADL;
        short l_626 = (-1L);
        const int **l_629 = &g_331;
        const int ***l_628 = &l_629;
        for (g_52 = 28; (g_52 <= 46); g_52 = safe_add_func_int8_t_s_s(g_52, 6))
        {
            (*g_330) = func_62(p_40);
        }
        (*g_330) = (*g_330);
        if ((((l_598 == (l_598 == (((safe_add_func_uint64_t_u_u(g_462, l_603)) , 0xF9A4B633L) == ((safe_mul_func_int8_t_s_s(0x3CL, (p_38 < (p_38 , g_443)))) ^ 0x3883698EL)))) || l_598) <= g_94))
        {
            unsigned short l_610 = 65535UL;
            (*g_163) = (*g_163);
            (*l_45) = (*l_48);
            --l_610;
        }
        else
        {
            unsigned l_621 = 0UL;
            int ***l_627 = &g_163;
            unsigned short l_636 = 1UL;
            (*l_48) |= ((safe_mul_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_s(248UL, 6)) > (safe_mul_func_int8_t_s_s(p_40, (((safe_unary_minus_func_int16_t_s(((&g_163 != l_620) <= 0x9EA90746391D39C9LL))) & ((0xFBA7764C1D55329CLL && p_38) || ((g_402 || (((*l_43) & l_598) == (*p_41))) >= g_22))) , p_38)))) , (*l_45)), p_38)) | l_621);
            (*p_41) = (safe_lshift_func_int8_t_s_s(((safe_add_func_int8_t_s_s((l_626 , (l_627 == l_628)), (p_38 == ((+(+((safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((((void*)0 == p_41) , (safe_add_func_int64_t_s_s(((!g_274) != (((((g_554 , 9L) || 0x3F7DA681A5B53C98LL) >= l_636) <= g_52) , g_443)), g_52))), 1L)), p_38)) && g_462))) == p_38)))) <= l_637), 6));
            return g_591;
        }
    }
    (*g_330) = ((g_463 || g_264) , (*g_163));
    return p_38;
}







static int * func_62(long long p_63)
{
    unsigned l_79 = 0x760B96BCL;
    int *l_328 = (void*)0;
    const int ** const l_588 = &g_331;
    char l_594 = (-2L);
    for (g_3 = 0; (g_3 == (-25)); g_3 = safe_sub_func_int32_t_s_s(g_3, 1))
    {
        unsigned long long l_92 = 1UL;
        int *l_329 = (void*)0;
        int l_579 = 0x1DEF6397L;
        unsigned long long l_581 = 0x216A6A1FEF0CCDEDLL;
        for (g_15 = 0; (g_15 >= (-24)); --g_15)
        {
            int *l_76 = (void*)0;
            int **l_75 = &l_76;
            int *l_580 = &l_579;
        }
        if (l_581)
            continue;
    }
    return (*g_163);
}







static long long func_70(short p_71, int ** p_72, int * p_73, char p_74)
{
    unsigned l_357 = 0UL;
    int ***l_360 = (void*)0;
    short l_366 = 7L;
    int l_383 = 0xB5662893L;
    int l_391 = 9L;
    int l_393 = 0xFBBC769EL;
    int l_398 = 6L;
    short l_446 = (-1L);
    (*p_72) = ((0x632DL > 0L) , func_77(&g_164));
    g_94 &= 0xF40911ACL;
    for (g_264 = 0; (g_264 > (-20)); g_264 = safe_sub_func_int8_t_s_s(g_264, 6))
    {
        int l_363 = 0L;
        (*p_72) = func_86((((l_357 != ((safe_lshift_func_uint8_t_u_u(p_74, 7)) & (0x5CC2L || ((((&p_72 != ((+l_357) , l_360)) > g_15) <= 0x6AEBFF18L) , (((safe_add_func_uint32_t_u_u((p_71 , g_52), l_363)) , (*g_331)) <= g_15))))) >= 0L) <= p_74), p_71, p_74);
    }
    if ((safe_mul_func_uint16_t_u_u(((l_357 ^ ((l_357 , ((p_71 , (void*)0) != &g_330)) ^ (((*g_331) <= l_366) != ((p_71 <= ((p_74 && 7UL) <= g_24)) | p_71)))) != 0L), 5L)))
    {
        unsigned l_367 = 0UL;
        char l_384 = 0xE8L;
        unsigned long long l_433 = 0x62E34BF77ECFCCCFLL;
        const unsigned char l_490 = 0x2EL;
        int *l_557 = &g_94;
        if (l_367)
        {
            int l_385 = 0x3B886E6CL;
            int *l_386 = &g_94;
            int *l_387 = (void*)0;
            int *l_388 = &l_385;
            int *l_389 = &g_94;
            int *l_390 = &l_385;
            int l_392 = (-1L);
            int *l_394 = &l_391;
            int *l_395 = &l_391;
            int *l_396 = (void*)0;
            int l_397 = 0xBC21BE6DL;
            int *l_400 = &l_393;
            int *l_401 = &g_399;
            (*g_330) = (((1L <= g_3) , (safe_rshift_func_int8_t_s_u(((l_367 == (safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint16_t_u(((safe_sub_func_int64_t_s_s((((void*)0 == &g_330) <= (safe_mul_func_int16_t_s_s(l_367, (((safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(g_94, ((g_3 >= (safe_mul_func_int16_t_s_s((~((void*)0 == &g_331)), p_71))) , l_383))), 0x0AL)) ^ l_384) > p_71)))), (-1L))) > p_71))), 4))) > g_24), 2))) , (void*)0);
            --g_402;
        }
        else
        {
            int *l_405 = &l_391;
            int l_417 = 0x773BB535L;
            unsigned short l_428 = 65526UL;
            int l_434 = 0xF51B75F4L;
            (*l_405) |= (~5L);
            if ((l_367 , ((&g_330 != (g_3 , (void*)0)) , 0xDAF3B193L)))
            {
                unsigned short l_423 = 0xE58DL;
                int l_437 = 0x9CED0956L;
                const int ** const l_448 = &g_331;
                for (g_264 = 0; (g_264 <= (-12)); g_264 = safe_sub_func_int32_t_s_s(g_264, 1))
                {
                    int *l_408 = &g_94;
                    int *l_409 = &l_391;
                    int *l_410 = &l_398;
                    int *l_411 = &l_398;
                    int *l_412 = (void*)0;
                    int *l_413 = &g_94;
                    int *l_414 = (void*)0;
                    int *l_415 = &l_391;
                    int *l_416 = &g_399;
                    int *l_418 = &g_399;
                    int l_419 = 1L;
                    int *l_420 = &l_391;
                    int *l_421 = &l_419;
                    int *l_422 = (void*)0;
                    l_423++;
                    for (l_391 = (-10); (l_391 != (-1)); l_391++)
                    {
                        (*p_72) = (*p_72);
                        return g_94;
                    }
                    (*l_409) = (((l_428 | p_71) , p_74) || ((((safe_add_func_int16_t_s_s(g_24, p_71)) > 0xF28E0927C5C9C01FLL) && l_423) <= (safe_mod_func_int32_t_s_s(((p_71 && ((((*g_163) != (*g_163)) & 0x78B59EA3L) , g_22)) > l_433), l_367))));
                }
                if ((&g_164 != ((g_52 != p_71) , &p_73)))
                {
                    (*l_405) ^= (*g_331);
                    return l_434;
                }
                else
                {
                    unsigned l_442 = 6UL;
                    if (l_423)
                    {
                        l_437 = ((l_423 , p_74) >= (1L == ((!(&g_163 == (g_399 , l_360))) , (((0UL <= ((*g_331) > (safe_sub_func_int16_t_s_s((l_367 , (*l_405)), 0x7105L)))) != 0x90L) != 0x0702L))));
                    }
                    else
                    {
                        unsigned short l_447 = 65534UL;
                        int *l_449 = &g_399;
                        int *l_450 = &g_94;
                        int *l_451 = &l_437;
                        int *l_452 = (void*)0;
                        int *l_453 = &l_398;
                        int *l_454 = &l_391;
                        int *l_455 = &g_399;
                        int *l_456 = &g_399;
                        int *l_457 = &l_437;
                        int *l_458 = &g_94;
                        int *l_459 = &l_417;
                        int *l_460 = &g_399;
                        int *l_461 = &l_398;
                        int *l_465 = &l_437;
                        int *l_466 = &l_417;
                        int *l_467 = (void*)0;
                        int *l_468 = &l_437;
                        int *l_469 = &l_437;
                        (*l_405) ^= (safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(l_442, 1)), g_443));
                        (*p_72) = ((safe_mod_func_int32_t_s_s((((l_437 <= g_399) || ((l_446 || l_367) || ((void*)0 == &p_72))) && g_443), l_433)) , ((g_3 == l_447) , (void*)0));
                        (*g_330) = func_77(func_80(func_77(&g_164), l_423, (*p_72), (*g_163), l_448));
                        g_470--;
                    }
                    l_437 |= (safe_add_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((((void*)0 != &g_164) , p_71), p_74)) == ((g_274 , &g_330) == l_360)), 0x53L));
                    (*l_405) |= ((g_470 , (*p_72)) != (*p_72));
                }
                for (l_367 = 3; (l_367 == 57); l_367 = safe_add_func_int32_t_s_s(l_367, 4))
                {
                    int *l_481 = &g_94;
                    (*l_405) = ((void*)0 == (*g_163));
                    if (g_274)
                        break;
                    if ((g_462 < 0L))
                    {
                        unsigned short l_482 = 1UL;
                        int **l_483 = &l_481;
                        (**l_483) ^= ((safe_rshift_func_uint8_t_u_u((((*l_405) , &g_164) != (void*)0), g_399)) ^ p_74);
                        (*g_163) = (*g_163);
                    }
                    else
                    {
                        if (p_71)
                            break;
                        (*l_405) = (l_384 >= (safe_unary_minus_func_uint8_t_u(0x94L)));
                        (*g_330) = (*p_72);
                        (*p_72) = (void*)0;
                    }
                }
                return g_485;
            }
            else
            {
                int l_504 = 3L;
                int l_517 = 0x98F459F3L;
                if ((safe_sub_func_int32_t_s_s((p_71 <= ((safe_mul_func_uint8_t_u_u(l_490, (safe_rshift_func_int8_t_s_u(g_464, g_462)))) , g_24)), ((safe_sub_func_uint64_t_u_u(p_71, g_463)) , (safe_rshift_func_int16_t_s_s(p_74, 6))))))
                {
                    (*l_405) = (&g_163 == (void*)0);
                    (*p_72) = (*g_163);
                }
                else
                {
                    return g_24;
                }
                (*g_330) = (*p_72);
                for (l_434 = 22; (l_434 < (-17)); l_434 = safe_sub_func_uint8_t_u_u(l_434, 5))
                {
                    int *l_499 = &g_94;
                    int *l_500 = &l_398;
                    int *l_501 = &g_94;
                    int *l_502 = &g_399;
                    int *l_503 = &g_94;
                    int *l_505 = &g_94;
                    int *l_506 = (void*)0;
                    int *l_507 = &l_393;
                    int *l_508 = &l_417;
                    int *l_509 = &l_391;
                    int *l_510 = (void*)0;
                    int l_511 = 0x915E2869L;
                    int *l_512 = (void*)0;
                    int *l_513 = &l_398;
                    int *l_514 = &l_417;
                    int *l_515 = &g_94;
                    int *l_516 = (void*)0;
                    int *l_518 = &l_398;
                    int *l_519 = &l_398;
                    int *l_520 = (void*)0;
                    int *l_521 = &l_398;
                    int *l_522 = (void*)0;
                    int *l_523 = &l_517;
                    int *l_524 = &l_417;
                    int *l_525 = (void*)0;
                    int *l_526 = &l_393;
                    int *l_527 = &l_417;
                    int *l_528 = (void*)0;
                    int *l_529 = &l_398;
                    int *l_530 = &g_94;
                    int *l_531 = &l_511;
                    int *l_532 = (void*)0;
                    int *l_533 = &l_417;
                    int *l_534 = (void*)0;
                    int *l_535 = &l_398;
                    int *l_536 = (void*)0;
                    int *l_537 = &l_391;
                    int *l_538 = (void*)0;
                    int *l_539 = &l_398;
                    int *l_540 = &l_393;
                    int *l_541 = (void*)0;
                    int *l_542 = &l_393;
                    int *l_543 = &l_417;
                    int *l_544 = (void*)0;
                    int *l_545 = &l_393;
                    int *l_546 = &l_391;
                    int *l_547 = &g_94;
                    int *l_548 = (void*)0;
                    int *l_549 = &l_391;
                    int l_550 = 0xDBCD3C21L;
                    int *l_551 = &l_511;
                    int *l_552 = &l_550;
                    int *l_553 = &g_399;
                    g_554++;
                    (*g_330) = (*g_330);
                    (*l_542) &= (*l_518);
                    (*l_543) = l_504;
                }
                return g_554;
            }
        }
        (*l_557) = 0xA5A4B6F3L;
        (*l_557) &= p_74;
    }
    else
    {
        unsigned char l_558 = 1UL;
        int l_574 = 3L;
        int * const l_577 = &l_393;
        const char l_578 = 0x11L;
        l_574 = (l_558 , (safe_unary_minus_func_int16_t_s(((safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(p_74, (safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(g_22, ((!g_3) , g_264))), 0xED03L)), 4)))), (safe_rshift_func_int16_t_s_s((g_52 <= (g_399 , p_74)), l_383)))), l_558)) & g_3))));
        (*g_163) = &l_574;
        (*l_577) = ((((g_463 ^ (-4L)) < (safe_rshift_func_uint16_t_u_s((((*g_331) , l_360) == ((l_577 == (*p_72)) , &g_163)), ((*l_577) , (*l_577))))) , l_578) < (*l_577));
    }
    return g_52;
}







static int * func_77(int ** p_78)
{
    int *l_338 = &g_94;
    int * const *l_349 = &g_164;
    int * const **l_348 = &l_349;
    char l_352 = (-1L);
    (*l_338) = (*g_331);
    (*l_338) = (*l_338);
    (*l_338) = ((0UL & (((safe_unary_minus_func_int32_t_s((safe_sub_func_int64_t_s_s((safe_sub_func_int64_t_s_s((((safe_rshift_func_uint16_t_u_u(((((safe_mul_func_int16_t_s_s((l_348 != (void*)0), 1L)) , (*l_338)) , g_264) <= ((*l_348) != (void*)0)), 9)) || (((safe_add_func_int64_t_s_s((*l_338), 0xA94E00818EC19C00LL)) & 4294967288UL) , g_15)) > g_94), 9L)), (*l_338))))) , &l_349) == (void*)0)) == (*l_338));
    (*l_338) = l_352;
    return (*g_163);
}







static int ** func_80(int * p_81, int p_82, int * p_83, int * p_84, const int ** const p_85)
{
    int l_332 = 1L;
    int *l_333 = (void*)0;
    int *l_334 = &g_94;
    short l_337 = 0x8904L;
    l_332 ^= (*g_331);
    (*l_334) = (-1L);
    for (g_22 = 0; (g_22 >= (-23)); --g_22)
    {
        if (l_337)
            break;
        return &g_164;
    }
    (*l_334) = 0x06B359D7L;
    return &g_164;
}







static int * func_86(long long p_87, unsigned short p_88, long long p_89)
{
    int l_93 = 0xE85184BFL;
    int *l_115 = &l_93;
    unsigned l_127 = 0x224A3AAFL;
    int *l_237 = &g_3;
    char l_305 = 0xB7L;
    unsigned char l_310 = 0x4CL;
    unsigned long long l_311 = 18446744073709551614UL;
    const long long l_322 = 0L;
    unsigned short l_323 = 1UL;
    int ***l_326 = (void*)0;
    unsigned long long l_327 = 1UL;
    if (g_52)
    {
        int **l_101 = (void*)0;
        int **l_102 = (void*)0;
        int **l_103 = (void*)0;
        int *l_104 = &g_94;
        int **l_105 = &l_104;
        g_94 = (l_93 || g_52);
        for (g_94 = (-28); (g_94 == (-21)); ++g_94)
        {
            return &g_94;
        }
        l_104 = ((safe_lshift_func_uint8_t_u_s((p_87 >= g_24), (safe_mod_func_int64_t_s_s(l_93, g_15)))) , &g_94);
        (*l_105) = &l_93;
    }
    else
    {
        int l_108 = 0x279C83BDL;
        int *l_113 = &g_3;
        unsigned short l_151 = 0x9162L;
        int l_183 = 0xA0B53720L;
        int l_223 = 0xFC128342L;
        unsigned l_236 = 0UL;
        for (l_93 = (-4); (l_93 != (-30)); l_93 = safe_sub_func_int16_t_s_s(l_93, 8))
        {
            int *l_109 = (void*)0;
            int *l_110 = &g_94;
            (*l_110) &= (p_89 ^ l_108);
        }
        for (l_108 = 0; (l_108 <= (-19)); l_108 = safe_sub_func_int64_t_s_s(l_108, 3))
        {
            int **l_114 = &l_113;
            (*l_114) = l_113;
        }
        l_115 = (void*)0;
        if ((~((((((safe_rshift_func_uint8_t_u_s(0x47L, (safe_add_func_int16_t_s_s((&l_115 != &l_115), g_24)))) , ((4294967290UL | (safe_sub_func_int16_t_s_s(g_24, (*l_113)))) && ((l_113 != l_113) & g_22))) , g_24) , (-1L)) , &l_115) != &l_115)))
        {
            char l_126 = 0x25L;
            int **l_128 = &l_113;
            (*l_128) = ((!(safe_mod_func_int32_t_s_s((((p_87 ^ ((safe_mod_func_int32_t_s_s(g_24, g_22)) | ((((g_94 , (p_88 || ((*l_113) & g_22))) < (l_113 != &g_94)) != l_126) & l_126))) , g_52) , g_15), l_127))) , (void*)0);
            for (g_24 = (-17); (g_24 != 15); g_24 = safe_add_func_uint64_t_u_u(g_24, 8))
            {
                short l_131 = (-1L);
                l_131 &= 0x186D9D6EL;
            }
        }
        else
        {
            unsigned char l_142 = 246UL;
            int **l_165 = &g_164;
            unsigned long long l_294 = 18446744073709551615UL;
            if ((p_88 , (((+(((((safe_sub_func_uint64_t_u_u((safe_add_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((((((safe_sub_func_int16_t_s_s((*l_113), (safe_rshift_func_int8_t_s_s(l_142, 6)))) > (safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(l_151, 11)) , ((((safe_lshift_func_int16_t_s_s((((((p_87 > (g_3 | g_3)) , l_127) , g_52) & g_3) <= 1UL), g_24)) | 0xAB47L) , (*l_113)) < p_87)), g_22)), g_94)), (*l_113)))) | g_22) || p_89) | (-1L)), 18446744073709551615UL)), 8L)), g_52)) && 0xD3C6BE40L) > g_52) , p_87) , p_88)) == (*l_113)) || 0x2720855CL)))
            {
                unsigned short l_162 = 0UL;
                int *l_166 = &l_93;
                (*l_166) |= (safe_sub_func_int8_t_s_s((((g_94 <= ((p_87 , g_94) > ((safe_rshift_func_uint16_t_u_s((((g_24 , ((safe_add_func_int16_t_s_s(p_88, (safe_mod_func_uint64_t_u_u(((-1L) | ((((l_162 && (g_163 == l_165)) < 4294967295UL) , &l_115) != &g_164)), p_87)))) , 0x25F9EFA0L)) , p_89) > 0UL), p_88)) | p_88))) , (*l_113)) || g_24), 3UL));
                l_183 = (g_24 <= ((safe_mul_func_int8_t_s_s(2L, (safe_lshift_func_int16_t_s_u(g_3, (safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((p_89 <= ((safe_mod_func_int8_t_s_s((1UL || ((((safe_sub_func_uint8_t_u_u(((((p_88 , ((((*l_165) == (*l_165)) > ((((safe_mod_func_uint8_t_u_u(0x31L, 0x04L)) && g_24) >= 0xC011B9A2L) < (*l_113))) <= g_15)) , (*l_166)) < (*l_166)) ^ 1UL), p_87)) >= g_94) || g_15) <= g_94)), g_3)) || 0x6EL)), p_88)), (*l_113))))))) , g_22));
            }
            else
            {
                unsigned short l_192 = 0x993BL;
                int l_207 = 0x1DCD0C39L;
                int *l_240 = &g_3;
                if (((safe_mul_func_uint8_t_u_u(((0xB6L <= ((safe_lshift_func_int16_t_s_u((safe_add_func_uint64_t_u_u((&l_183 == (p_89 , &l_183)), ((safe_mul_func_int8_t_s_s(p_89, ((((((l_192 != (p_88 , p_88)) , (*g_163)) != (void*)0) , 1UL) != 0UL) >= 8UL))) , 9UL))), p_89)) && p_88)) != p_87), g_52)) , p_88))
                {
                    int ***l_193 = &l_165;
                    (*l_193) = l_165;
                    for (l_192 = 0; (l_192 < 46); ++l_192)
                    {
                        int *l_196 = &l_93;
                        int l_197 = 0x567E67BAL;
                        int l_198 = 0x77F500FDL;
                        int *l_199 = (void*)0;
                        int *l_200 = &l_183;
                        int *l_201 = &l_198;
                        int *l_202 = &g_94;
                        int *l_203 = &g_94;
                        int *l_204 = &l_198;
                        int *l_205 = &l_197;
                        int *l_206 = &l_93;
                        int *l_208 = &g_94;
                        int *l_209 = &l_93;
                        int *l_210 = &g_94;
                        int *l_211 = &l_198;
                        int *l_212 = &l_197;
                        int *l_213 = (void*)0;
                        int *l_214 = &l_197;
                        int *l_215 = &l_207;
                        int *l_216 = (void*)0;
                        int *l_217 = &l_183;
                        int *l_218 = &l_197;
                        int *l_219 = &l_93;
                        int *l_220 = &g_94;
                        int *l_221 = &l_207;
                        int *l_222 = &l_93;
                        int *l_224 = &l_198;
                        int *l_225 = &l_93;
                        int *l_226 = (void*)0;
                        int *l_227 = &l_198;
                        int *l_228 = &l_93;
                        int *l_229 = &l_93;
                        int *l_230 = &l_223;
                        ++g_231;
                        (*l_221) &= (p_88 | ((p_87 <= ((safe_rshift_func_uint8_t_u_s(g_94, p_89)) ^ p_89)) , l_236));
                        l_113 = l_237;
                    }
                    for (g_24 = (-5); (g_24 == 35); g_24++)
                    {
                        int *l_241 = &l_223;
                        int *l_242 = &g_94;
                        int *l_243 = &l_183;
                        int *l_244 = &l_183;
                        int *l_245 = &g_94;
                        int *l_246 = (void*)0;
                        int *l_247 = &g_94;
                        int *l_248 = &l_93;
                        int *l_249 = &l_223;
                        int *l_250 = &l_93;
                        int *l_251 = &l_223;
                        int *l_252 = &l_183;
                        int *l_253 = &l_207;
                        int *l_254 = (void*)0;
                        int *l_255 = &l_207;
                        int *l_256 = &l_93;
                        int *l_257 = &l_223;
                        int *l_258 = &l_93;
                        int *l_259 = &l_223;
                        int *l_260 = &l_207;
                        int *l_261 = &l_207;
                        int *l_262 = &l_93;
                        int *l_263 = &l_183;
                        int *l_265 = (void*)0;
                        int *l_266 = (void*)0;
                        int *l_267 = &g_94;
                        int *l_268 = &l_223;
                        int *l_269 = &l_207;
                        int *l_270 = &l_183;
                        int *l_271 = &g_94;
                        int *l_272 = (void*)0;
                        int *l_273 = &l_207;
                        (*g_163) = &l_207;
                        (*l_165) = l_240;
                        g_274++;
                        (*l_260) = 0xC332B00AL;
                    }
                    (*l_165) = (*g_163);
                }
                else
                {
                    int l_285 = 0x1301E1D7L;
                    for (l_142 = (-30); (l_142 < 43); ++l_142)
                    {
                        unsigned l_279 = 0x1F0D1286L;
                        int *l_282 = &l_207;
                        ++l_279;
                        (*l_282) |= (*l_240);
                        (*l_282) = ((*l_282) , ((safe_lshift_func_int16_t_s_u((l_285 ^ (safe_add_func_uint64_t_u_u(g_52, (safe_rshift_func_int8_t_s_u(((g_94 < (safe_lshift_func_uint16_t_u_u(((*l_240) , (safe_rshift_func_int8_t_s_u((-1L), 6))), 5))) , (-6L)), 3))))), (&l_282 != l_165))) , l_294));
                    }
                    return (*g_163);
                }
                l_223 &= ((*l_237) , ((safe_sub_func_int8_t_s_s(p_87, (*l_237))) == (0xAAABL <= (g_15 , (safe_rshift_func_int8_t_s_s(0xC4L, (g_231 != ((safe_rshift_func_uint8_t_u_s((((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((*l_113) > ((((p_89 | (*l_113)) | (*l_237)) || p_88) <= g_274)), g_15)), p_87)) == g_24) , p_89), l_305)) , g_264))))))));
            }
        }
    }
    (*g_163) = ((safe_rshift_func_int16_t_s_u((g_24 && (safe_add_func_int64_t_s_s(((((*l_237) > ((p_87 , 0xB1L) & (0L == (*l_237)))) | (&g_164 == &l_115)) , (l_310 < 6UL)), g_24))), g_94)) , (void*)0);
    l_327 = (((((l_311 >= ((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((+(safe_add_func_int32_t_s_s(((g_231 > p_88) > (g_274 < (safe_sub_func_uint64_t_u_u(l_322, g_3)))), l_323))) && (((((safe_mul_func_int8_t_s_s((l_326 != ((p_88 || 0xB2L) , (void*)0)), 0xD6L)) , (-5L)) , 0xFB3B23CBL) < 0UL) & 0x2E78B22332C2AF84LL)), 1)), g_22)), 0x704AL)) != (-1L))) | g_22) , (void*)0) != (void*)0) , g_52);
    return (*g_163);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_399, "g_399", print_hash_value);
    transparent_crc(g_402, "g_402", print_hash_value);
    transparent_crc(g_443, "g_443", print_hash_value);
    transparent_crc(g_462, "g_462", print_hash_value);
    transparent_crc(g_463, "g_463", print_hash_value);
    transparent_crc(g_464, "g_464", print_hash_value);
    transparent_crc(g_470, "g_470", print_hash_value);
    transparent_crc(g_485, "g_485", print_hash_value);
    transparent_crc(g_554, "g_554", print_hash_value);
    transparent_crc(g_591, "g_591", print_hash_value);
    transparent_crc(g_718, "g_718", print_hash_value);
    transparent_crc(g_727, "g_727", print_hash_value);
    transparent_crc(g_746, "g_746", print_hash_value);
    transparent_crc(g_917, "g_917", print_hash_value);
    transparent_crc(g_939, "g_939", print_hash_value);
    transparent_crc(g_993, "g_993", print_hash_value);
    transparent_crc(g_1028, "g_1028", print_hash_value);
    transparent_crc(g_1149, "g_1149", print_hash_value);
    transparent_crc(g_1151, "g_1151", print_hash_value);
    transparent_crc(g_1158, "g_1158", print_hash_value);
    transparent_crc(g_1195, "g_1195", print_hash_value);
    transparent_crc(g_1215, "g_1215", print_hash_value);
    transparent_crc(g_1346, "g_1346", print_hash_value);
    transparent_crc(g_1449, "g_1449", print_hash_value);
    transparent_crc(g_1458, "g_1458", print_hash_value);
    transparent_crc(g_1520, "g_1520", print_hash_value);
    transparent_crc(g_1672, "g_1672", print_hash_value);
    transparent_crc(g_1752, "g_1752", print_hash_value);
    transparent_crc(g_1765, "g_1765", print_hash_value);
    transparent_crc(g_1890, "g_1890", print_hash_value);
    transparent_crc(g_1916, "g_1916", print_hash_value);
    transparent_crc(g_1995, "g_1995", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
