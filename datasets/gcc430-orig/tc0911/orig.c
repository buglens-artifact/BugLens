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



static int g_2 = 0L;
static int g_90 = 0x6E85A6EDL;
static const int g_103 = 0x8CB35B2DL;
static int g_121 = (-1L);
static int g_132 = 0x3921C45DL;
static int g_137 = 3L;
static int g_144 = 0xBB592249L;
static unsigned long long g_150 = 18446744073709551608UL;
static int *g_156 = &g_121;
static int **g_155 = &g_156;
static unsigned short g_220 = 0x3A4EL;
static int g_311 = (-5L);
static unsigned short g_321 = 0xEEFBL;
static long long g_355 = 0x13205A4E5D210BA1LL;
static char g_399 = 1L;
static short g_516 = 2L;
static int g_520 = 0x4F5EA74AL;
static short g_527 = 0xF1E8L;
static short g_549 = 1L;
static int g_564 = 0x75AD1371L;
static unsigned g_567 = 3UL;
static int g_616 = 0x0EFFC479L;
static unsigned short g_629 = 4UL;
static int ***g_636 = &g_155;
static long long g_698 = 0xD4548542B7FE280ALL;
static unsigned g_711 = 0UL;
static unsigned g_761 = 4294967294UL;
static unsigned short g_880 = 65535UL;
static unsigned short g_890 = 2UL;
static short g_977 = 0x1FC8L;
static int g_984 = (-1L);
static short g_988 = 0x03B4L;
static unsigned short g_1008 = 0UL;
static int g_1177 = 0x7B274D79L;
static unsigned long long g_1241 = 0UL;
static int g_1410 = (-10L);
static short g_1420 = 0L;
static short g_1426 = 0x23CDL;
static unsigned long long g_1442 = 0xDEBC5E58B0978D6ALL;
static int *g_1451 = &g_984;



static const long long func_1(void);
static char func_11(int p_12, short p_13, unsigned char p_14, char p_15);
static int * func_19(unsigned p_20, const unsigned p_21);
static unsigned long long func_26(unsigned long long p_27, int * p_28, int p_29);
static int func_32(const unsigned char p_33, int * p_34, char p_35, unsigned p_36, unsigned short p_37);
static const unsigned char func_38(int p_39, short p_40, int * p_41, unsigned p_42);
static int * func_43(int p_44, unsigned long long p_45, int * p_46, short p_47);
static int func_54(unsigned char p_55, int * p_56);
static const unsigned long long func_63(int * p_64, unsigned p_65, const int * p_66, int * p_67, int p_68);
static int * func_69(unsigned short p_70, const int * p_71, short p_72);
static const long long func_1(void)
{
    int l_18 = 0x31F145BAL;
    int *l_1268 = &g_984;
    const int l_1273 = 1L;
    int l_1282 = 0xBF29E369L;
    int l_1300 = (-1L);
    unsigned l_1322 = 0xC5C3E78AL;
    int ***l_1326 = (void*)0;
    unsigned l_1347 = 1UL;
    int l_1348 = 0L;
    unsigned l_1366 = 0x0216D4D4L;
    const int l_1367 = 5L;
    int l_1405 = 0L;
    const int *l_1445 = &g_1410;
    int *l_1447 = &l_1282;
    long long l_1450 = 0xE6E617620DED8928LL;
    unsigned char l_1453 = 0x28L;
    for (g_2 = 0; (g_2 < 14); g_2 = safe_add_func_int32_t_s_s(g_2, 4))
    {
        unsigned l_17 = 0x9ECF4A41L;
        int *l_1266 = (void*)0;
        int *l_1267 = &g_90;
        (*l_1267) = (~(safe_sub_func_int16_t_s_s(((((safe_rshift_func_uint8_t_u_u(0x27L, g_2)) ^ (((safe_rshift_func_uint8_t_u_s(g_2, func_11(g_2, ((safe_unary_minus_func_uint32_t_u((l_17 ^ l_17))) >= l_17), (l_18 | (!4294967290UL)), l_17))) <= (-1L)) || 0xFCL)) ^ g_2) & (-8L)), 65535UL)));

        ;
    }

    ;
    (**g_636) = l_1268;

    ;
    l_1282 ^= ((*l_1268) & (+((safe_sub_func_int32_t_s_s((g_1177 == ((safe_sub_func_int32_t_s_s((l_1273 == 0x0FL), (((+(safe_mod_func_int32_t_s_s((((g_321 , func_43(((safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s(g_220, g_144)), (+((((g_144 ^ (safe_rshift_func_int16_t_s_u(((*l_1268) != g_220), 10))) || 0x51A5L) == (*g_156)) && (*l_1268))))) , g_549), (*l_1268), l_1268, g_988)) != &l_1273) < (*l_1268)), 0x41B2EC44L))) , 6L) , (*l_1268)))) < 0UL)), 0x165638D1L)) < g_549)));
    if ((safe_rshift_func_int16_t_s_s(((*l_1268) == (*l_1268)), 4)))
    {
        unsigned l_1299 = 18446744073709551615UL;
        char l_1305 = 0xCCL;
        int **l_1308 = &g_156;
        int l_1375 = 4L;
        int l_1412 = 1L;
        int l_1441 = 1L;
        for (g_137 = 0; (g_137 >= (-1)); g_137--)
        {
            int ***l_1295 = &g_155;
            char l_1320 = (-10L);
            unsigned char l_1323 = 0xB4L;
            int l_1335 = 0xFC946F9CL;
            unsigned short l_1433 = 65527UL;
            unsigned short l_1440 = 0UL;
            if (((*g_636) == (*g_636)))
            {
                const unsigned l_1289 = 0xFEFE0BA8L;
                int ***l_1296 = &g_155;
                (**g_155) = (safe_rshift_func_int8_t_s_u((l_1289 , (safe_sub_func_int16_t_s_s(((((safe_sub_func_int16_t_s_s((((safe_unary_minus_func_int16_t_s(g_132)) != (g_616 , (l_1295 == l_1296))) && ((((((((***l_1295) & func_63(func_43(g_321, ((((safe_sub_func_uint64_t_u_u((***l_1295), 0x75074A92E54A1E27LL)) , (*l_1268)) | 0x18CAA69394A03E59LL) != (***l_1295)), (**l_1296), l_1299), l_1300, (**g_636), (**g_636), (*g_156))) > g_711) , (***l_1295)) , 0xC1L) >= 0x4AL) , g_1008) , 0xD12825BAC38EF183LL)), g_137)) | (***l_1296)) , l_1299) >= g_220), 6UL))), 3));
            }
            else
            {
                unsigned long long l_1304 = 0x3BE8DEA2EE4A4449LL;
                int *** const l_1363 = (void*)0;
                int *l_1368 = &g_2;
                int *l_1369 = &l_1282;
                int *l_1370 = &g_2;
                int *l_1371 = &g_2;
                int *l_1372 = &g_90;
                int *l_1373 = &g_90;
                int *l_1374 = &g_984;
                int *l_1376 = &l_1282;
                int *l_1377 = &g_2;
                int l_1378 = 8L;
                int *l_1379 = (void*)0;
                int *l_1380 = &g_121;
                int *l_1381 = &g_121;
                int *l_1382 = &g_121;
                int *l_1383 = (void*)0;
                int *l_1384 = &g_311;
                int *l_1385 = &g_311;
                int *l_1386 = &l_1378;
                int *l_1387 = (void*)0;
                int *l_1388 = &l_1378;
                int *l_1389 = &g_2;
                int *l_1390 = &g_2;
                int *l_1391 = &g_984;
                int *l_1392 = &g_311;
                int *l_1393 = (void*)0;
                int *l_1394 = &g_121;
                int l_1395 = 0xA3298140L;
                int *l_1396 = &g_616;
                int *l_1397 = &g_616;
                int *l_1398 = (void*)0;
                int *l_1399 = (void*)0;
                int *l_1400 = &g_2;
                int *l_1401 = &g_616;
                int *l_1402 = &l_1282;
                int *l_1403 = (void*)0;
                int *l_1404 = &l_1335;
                int *l_1406 = (void*)0;
                int *l_1407 = (void*)0;
                int *l_1408 = &l_1405;
                int *l_1409 = (void*)0;
                int *l_1411 = &l_1395;
                int *l_1413 = &l_1378;
                int *l_1414 = &l_1282;
                int *l_1415 = &l_1378;
                int *l_1416 = (void*)0;
                int *l_1417 = &l_1335;
                int *l_1418 = &g_616;
                int *l_1419 = &g_1410;
                int *l_1421 = &g_984;
                int *l_1422 = (void*)0;
                int *l_1423 = &l_1395;
                int *l_1424 = &g_520;
                int *l_1425 = (void*)0;
                int *l_1427 = &l_1375;
                int l_1428 = (-1L);
                int *l_1429 = &g_1410;
                int l_1430 = 4L;
                int *l_1431 = &l_1428;
                int *l_1432 = &l_1395;
                l_1305 ^= (safe_rshift_func_uint16_t_u_s((***l_1295), (2UL == (safe_unary_minus_func_int8_t_s(func_38(((((l_1304 , (**g_636)) != (((*l_1268) ^ ((void*)0 != &g_155)) , &l_1273)) , l_1304) && 0xC727CCB5L), g_567, &l_1282, (*l_1268)))))));
                (*l_1268) = 5L;
                if ((safe_lshift_func_uint16_t_u_u(g_132, (g_103 > ((*g_636) == ((+0x7C90410254067846LL) , l_1308))))))
                {
                    int *l_1309 = &g_311;
                    long long l_1321 = 0x5903FBCFA5FA6FADLL;
                    (*l_1309) ^= (*g_156);
                    (**g_155) = (func_38((**g_155), ((func_38((g_103 , ((safe_lshift_func_uint8_t_u_u((***l_1295), ((*l_1309) != (safe_add_func_int16_t_s_s((***l_1295), (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(0xDBA54F4FFF0B4190LL, g_399)), g_520)) && l_1304), 0))))))) != g_616)), l_1320, l_1309, g_1008) > 0L) , l_1321), (**l_1295), l_1304) || l_1322);
                    if ((**g_155))
                        continue;
                }
                else
                {
                    unsigned l_1336 = 0x5B6127C6L;
                    unsigned l_1355 = 1UL;
                    int *l_1357 = &g_616;
                    if (l_1323)
                        break;
                    l_1335 &= (safe_mod_func_uint32_t_u_u((l_1326 != &g_155), (safe_lshift_func_uint16_t_u_s(((((g_698 , (*g_636)) != l_1308) <= (safe_lshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_s(0xBAL, (+0xEDL))) ^ ((void*)0 == l_1326)), 5))) > 0x77629524L), (**l_1308)))));
                    if ((*g_156))
                    {
                        unsigned short l_1339 = 1UL;
                        unsigned long long l_1342 = 0x03364F444D473167LL;
                        int l_1356 = (-1L);
                        (***l_1295) |= 0x646BB072L;
                        (***g_636) = (l_1336 >= (((!((g_516 , ((g_321 == (safe_add_func_int16_t_s_s(g_150, (g_90 < 1UL)))) || g_527)) && l_1339)) , (~l_1342)) | (-1L)));
                        (**g_636) = func_43(g_399, ((g_988 , (((g_355 ^ ((g_2 && 5L) ^ (-1L))) , g_144) && ((g_527 && ((safe_rshift_func_uint16_t_u_s((((safe_add_func_int8_t_s_s((***l_1295), 1L)) ^ l_1304) != 248UL), 9)) ^ (*l_1268))) | 9L))) , l_1347), (**l_1295), l_1348);
                        (*l_1357) = (((g_137 | 0UL) ^ ((safe_add_func_uint8_t_u_u((func_26(g_549, (*g_155), (safe_add_func_int16_t_s_s(((((***l_1295) <= (safe_sub_func_int8_t_s_s(0x66L, l_1355))) > (g_121 ^ ((func_63((**g_636), l_1356, &l_1356, l_1357, (**g_155)) , (void*)0) != (void*)0))) & (*l_1268)), 0x0EE6L))) || l_1339), 0xDBL)) != g_1177)) != l_1339);
                    }
                    else
                    {
                        unsigned l_1358 = 0xEFE83DE7L;
                        l_1335 |= (l_1358 > func_38((((((safe_rshift_func_int8_t_s_s(g_311, (((((*l_1357) , (func_38(l_1304, (safe_add_func_uint8_t_u_u(((void*)0 != l_1363), (g_132 <= (safe_mod_func_int16_t_s_s(((((((**l_1308) == (*l_1357)) , 1UL) != 0x1581L) , (-1L)) > g_137), 65535UL))))), (*g_155), g_567) , 0x43L)) ^ l_1366) , 0x4CB91B13L) > (*l_1268)))) <= g_399) >= g_616) == (***l_1295)) <= l_1367), g_984, (*l_1308), g_311));
                    }
                }
                ++l_1433;
            }
            if ((**g_155))
                break;
            l_1335 &= (((*l_1268) < (((***l_1295) , ((safe_lshift_func_int16_t_s_s((((g_311 != ((((*g_636) == l_1308) | ((g_564 , ((((safe_sub_func_uint64_t_u_u((0xFEL || ((***l_1295) > ((((((!(***l_1295)) >= l_1440) , g_516) , g_549) , (*l_1268)) != (**l_1308)))), (**l_1308))) == g_1008) | 6UL) != l_1441)) , g_137)) & g_1442)) , (void*)0) != (*l_1295)), 8)) , (***g_636))) , 0x61AC1945L)) | (**l_1308));
            if ((**l_1308))
                break;
        }
        (*l_1308) = (**g_636);
        (*g_156) = 0L;
        for (g_711 = 0; (g_711 >= 35); g_711++)
        {
            const int **l_1446 = &l_1445;
            (*l_1446) = l_1445;
        }
    }
    else
    {
        unsigned short l_1448 = 65535UL;
        const int *l_1449 = &g_984;
        int *l_1452 = &g_90;
        (*g_1451) = func_63(func_19(func_38((*g_156), g_567, (*g_155), (func_63(func_43((((func_63(l_1447, l_1448, l_1449, (**g_636), (*l_1445)) <= l_1450) | g_2) <= (-1L)), g_355, g_1451, g_121), g_311, (**g_636), l_1452, (**g_155)) ^ (-1L))), g_880), l_1453, l_1452, &g_311, (*l_1449));

        ;
    }

    ;
    return g_711;
}







static char func_11(int p_12, short p_13, unsigned char p_14, char p_15)
{
    int *l_52 = (void*)0;
    int *l_53 = &g_2;
    unsigned char l_324 = 0UL;
    int *l_408 = &g_2;
    int *l_1262 = &g_121;
    unsigned l_1265 = 18446744073709551606UL;
    (**g_636) = func_19((&p_12 == &g_2), (((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(func_26((safe_rshift_func_uint8_t_u_u(g_2, 5)), &g_2, func_32(func_38((((p_14 , func_43((((safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((((l_52 != l_53) || 252UL) , func_54((p_12 <= p_14), &g_2)), (*l_53))), 4)) > 0xEB29476FL) & 0x6E9CFC8D8B85B255LL), g_321, l_52, (*l_53))) != l_53) , (-1L)), g_103, &g_2, l_324), l_408, g_144, p_12, p_15)), p_12)), 13)) <= p_14) , 0x13D0D146L));

    ;
    for (g_144 = 0; (g_144 < (-12)); --g_144)
    {
        unsigned char l_1257 = 4UL;
        int *l_1258 = &g_520;
        unsigned l_1259 = 18446744073709551615UL;
        if ((*l_408))
            break;
        p_12 = func_63(l_52, ((((safe_rshift_func_uint8_t_u_s(p_14, 0)) < (safe_rshift_func_uint8_t_u_s((((*l_53) | (safe_sub_func_int64_t_s_s((!g_549), (g_399 < (0xB1L == (func_26((l_1257 || (-1L)), l_1258, (*l_1258)) != 0xCEL)))))) , (*l_1258)), p_14))) != 5UL) >= g_220), l_1258, l_1258, l_1259);
        (***g_636) = (safe_rshift_func_uint16_t_u_u((*l_53), 3));
    }
    (***g_636) ^= ((g_1008 != l_1265) | (*l_408));
    (***g_636) = (**g_155);
    return p_13;
}







static int * func_19(unsigned p_20, const unsigned p_21)
{
    int l_1247 = 1L;
    int *l_1248 = &g_520;
    for (g_520 = (-16); (g_520 >= (-11)); g_520 = safe_add_func_int64_t_s_s(g_520, 1))
    {
        int *l_1246 = &g_121;
        (*l_1246) &= p_20;
        (*l_1246) |= (0x8157A179EEECC303LL | l_1247);
    }
    (**g_636) = l_1248;

    ;
    (*g_156) = (g_103 != ((func_38(p_21, g_567, (**g_636), g_629) , (g_698 , (p_20 , (p_20 , p_20)))) == (*l_1248)));
    return l_1248;


}







static unsigned long long func_26(unsigned long long p_27, int * p_28, int p_29)
{
    const unsigned l_897 = 4294967289UL;
    int ***l_898 = &g_155;
    int l_924 = 0x8E2628D4L;
    int l_953 = (-1L);
    int l_965 = (-8L);
    int l_978 = 1L;
    int l_1000 = 0L;
    int l_1004 = 0L;
    char l_1024 = 0xB3L;
    int *l_1025 = &l_924;
    int *l_1026 = &g_311;
    int *l_1027 = &g_616;
    int *l_1028 = &l_1004;
    int *l_1029 = &l_924;
    int *l_1030 = &g_984;
    int *l_1031 = &g_616;
    int *l_1032 = &g_121;
    int *l_1033 = &l_1004;
    int *l_1034 = &g_311;
    int *l_1035 = &l_1004;
    int *l_1036 = (void*)0;
    int *l_1037 = &l_953;
    int *l_1038 = (void*)0;
    int *l_1039 = (void*)0;
    int *l_1040 = (void*)0;
    int *l_1041 = &l_978;
    int *l_1042 = (void*)0;
    int *l_1043 = &l_1004;
    int *l_1044 = &l_1004;
    int *l_1045 = &g_311;
    int *l_1046 = (void*)0;
    int *l_1047 = &l_953;
    int *l_1048 = &g_616;
    int *l_1049 = &l_1000;
    int *l_1050 = &g_616;
    int *l_1051 = &l_953;
    int *l_1052 = &l_1004;
    int *l_1053 = &l_924;
    int *l_1054 = &g_520;
    int *l_1055 = &g_121;
    int *l_1056 = &g_520;
    int *l_1057 = &g_520;
    int *l_1058 = (void*)0;
    char l_1059 = 0L;
    int *l_1060 = (void*)0;
    int *l_1061 = (void*)0;
    int *l_1062 = &l_1000;
    int *l_1063 = &l_1004;
    int *l_1064 = &g_984;
    int *l_1065 = &g_616;
    int *l_1066 = &l_1004;
    int *l_1067 = &g_520;
    int *l_1068 = &l_978;
    int *l_1069 = &g_520;
    int *l_1070 = (void*)0;
    int *l_1071 = &l_953;
    int *l_1072 = &g_616;
    int *l_1073 = &g_616;
    int *l_1074 = (void*)0;
    int *l_1075 = (void*)0;
    int *l_1076 = (void*)0;
    int *l_1077 = &g_311;
    int *l_1078 = &l_924;
    int *l_1079 = &g_311;
    int *l_1080 = &l_1004;
    int *l_1081 = (void*)0;
    int *l_1082 = &l_1004;
    int *l_1083 = (void*)0;
    int *l_1084 = &l_924;
    int *l_1085 = &g_90;
    int *l_1086 = &l_953;
    int *l_1087 = &g_520;
    int *l_1088 = (void*)0;
    int *l_1089 = &l_953;
    int *l_1090 = &l_924;
    int *l_1091 = &g_90;
    int *l_1092 = &l_1000;
    int l_1093 = 1L;
    int *l_1094 = (void*)0;
    int *l_1095 = &g_984;
    int *l_1096 = &g_121;
    int *l_1097 = &g_616;
    int *l_1098 = &l_953;
    int *l_1099 = &g_90;
    int *l_1100 = &g_520;
    int *l_1101 = &l_953;
    int *l_1102 = &g_121;
    int *l_1103 = (void*)0;
    int *l_1104 = &g_616;
    int *l_1105 = &l_1004;
    int *l_1106 = (void*)0;
    int *l_1107 = (void*)0;
    int *l_1108 = &l_1004;
    int *l_1109 = &l_978;
    int *l_1110 = (void*)0;
    int *l_1111 = (void*)0;
    int *l_1112 = (void*)0;
    int *l_1113 = &l_1000;
    int l_1114 = 0xF981CAE3L;
    int *l_1115 = &l_1000;
    int *l_1116 = &g_121;
    int *l_1117 = &g_90;
    int *l_1118 = &l_978;
    int *l_1119 = &l_1004;
    int *l_1120 = &l_978;
    int *l_1121 = (void*)0;
    int *l_1122 = (void*)0;
    int l_1123 = 0L;
    int *l_1124 = &l_1093;
    int *l_1125 = &l_1123;
    int *l_1126 = &l_1004;
    int *l_1127 = &g_90;
    int l_1128 = 0xA732B446L;
    int *l_1129 = &g_984;
    int l_1130 = 0x5E0BED3FL;
    int *l_1131 = &l_924;
    int *l_1132 = &l_953;
    int *l_1133 = &g_90;
    int *l_1134 = &g_520;
    int *l_1135 = &g_311;
    int *l_1136 = (void*)0;
    int *l_1137 = &g_984;
    int *l_1138 = &l_953;
    int *l_1139 = &l_1093;
    int *l_1140 = (void*)0;
    int *l_1141 = &l_1130;
    int *l_1142 = (void*)0;
    int *l_1143 = &l_1128;
    int *l_1144 = &l_1093;
    int *l_1145 = &l_1000;
    int *l_1146 = &l_1000;
    int *l_1147 = &l_1004;
    int *l_1148 = &g_520;
    int *l_1149 = (void*)0;
    int *l_1150 = &g_616;
    int *l_1151 = &l_1123;
    int *l_1152 = &l_1004;
    int *l_1153 = &l_924;
    int *l_1154 = &l_1128;
    int *l_1155 = &l_1000;
    int *l_1156 = (void*)0;
    int *l_1157 = &g_90;
    int *l_1158 = (void*)0;
    int *l_1159 = (void*)0;
    int *l_1160 = &l_953;
    int *l_1161 = &g_520;
    int l_1162 = 0xE5A4126DL;
    int *l_1163 = &l_1128;
    int *l_1164 = &l_1114;
    int *l_1165 = (void*)0;
    int *l_1166 = &g_984;
    int *l_1167 = &l_1093;
    int *l_1168 = &l_978;
    int *l_1169 = &l_1000;
    int *l_1170 = &l_924;
    int *l_1171 = (void*)0;
    int *l_1172 = &g_90;
    int *l_1173 = &g_121;
    int *l_1174 = &l_953;
    int *l_1175 = &l_1004;
    int *l_1176 = &l_1162;
    int *l_1178 = &l_924;
    int *l_1179 = &l_1000;
    int *l_1180 = &l_1162;
    int *l_1181 = &l_1000;
    int *l_1182 = &l_924;
    int l_1183 = 0x02686134L;
    int *l_1184 = &l_1114;
    int *l_1185 = &l_1093;
    int l_1186 = (-5L);
    int l_1187 = 0x92A4DDFEL;
    int l_1188 = 0xB47C7C3BL;
    int *l_1189 = (void*)0;
    int *l_1190 = &l_1128;
    int *l_1191 = &g_520;
    long long l_1192 = (-1L);
    int *l_1193 = &l_1183;
    int l_1194 = 1L;
    int *l_1195 = &l_953;
    int *l_1196 = &l_1000;
    int l_1197 = 0x96C2292FL;
    int *l_1198 = &l_1162;
    int *l_1199 = &l_1114;
    int *l_1200 = &l_1000;
    int *l_1201 = (void*)0;
    int *l_1202 = &g_984;
    int *l_1203 = (void*)0;
    int *l_1204 = (void*)0;
    int *l_1205 = &l_924;
    int *l_1206 = &g_311;
    int *l_1207 = &l_924;
    int *l_1208 = &l_1194;
    int *l_1209 = (void*)0;
    int *l_1210 = &l_1183;
    int l_1211 = 0xA0F5BF3BL;
    int *l_1212 = (void*)0;
    int *l_1213 = &g_121;
    int *l_1214 = &l_1194;
    int *l_1215 = &l_1162;
    int *l_1216 = &l_1188;
    int *l_1217 = (void*)0;
    int *l_1218 = (void*)0;
    int *l_1219 = (void*)0;
    int *l_1220 = &l_1114;
    int *l_1221 = &g_121;
    int *l_1222 = &l_1093;
    int *l_1223 = &l_1004;
    int l_1224 = 8L;
    int *l_1225 = &l_1123;
    int *l_1226 = &g_90;
    int *l_1227 = (void*)0;
    int *l_1228 = &g_520;
    int l_1229 = 0xFCEF1576L;
    int *l_1230 = &l_1186;
    int *l_1231 = &l_978;
    int *l_1232 = &g_616;
    int *l_1233 = &g_121;
    int *l_1234 = (void*)0;
    int *l_1235 = (void*)0;
    int *l_1236 = &l_1194;
    int *l_1237 = &l_978;
    int *l_1238 = &l_1186;
    int l_1239 = 0xC32B37EFL;
    int *l_1240 = &l_1128;
    if ((safe_add_func_int32_t_s_s(l_897, (l_898 == (g_516 , &g_155)))))
    {
        const int *l_899 = &g_2;
        const int **l_900 = (void*)0;
        const int **l_901 = &l_899;
        (*l_901) = l_899;
    }
    else
    {
        int *l_906 = (void*)0;
        int *l_907 = &g_121;
        int *l_908 = &g_311;
        int *l_909 = &g_121;
        int *l_910 = &g_311;
        int *l_911 = &g_121;
        int *l_912 = &g_520;
        int *l_913 = &g_121;
        int *l_914 = (void*)0;
        int l_915 = 0x6BD961ADL;
        int *l_916 = &g_520;
        int *l_917 = &g_616;
        int *l_918 = (void*)0;
        int *l_919 = &g_121;
        int *l_920 = (void*)0;
        int *l_921 = &g_90;
        int *l_922 = &g_121;
        int *l_923 = &g_311;
        int *l_925 = &g_311;
        int *l_926 = &l_915;
        int *l_927 = &g_311;
        int *l_928 = &g_311;
        int *l_929 = &g_520;
        int *l_930 = &g_616;
        int *l_931 = &g_616;
        int *l_932 = &g_121;
        int *l_933 = &g_616;
        int *l_934 = (void*)0;
        int *l_935 = &g_121;
        int *l_936 = &g_90;
        int *l_937 = (void*)0;
        int *l_938 = &g_121;
        int *l_939 = &g_90;
        int *l_940 = &g_121;
        int *l_941 = (void*)0;
        int *l_942 = (void*)0;
        int *l_943 = &g_520;
        int *l_944 = &g_520;
        int *l_945 = &g_520;
        int *l_946 = &g_121;
        int *l_947 = &g_90;
        int *l_948 = &g_90;
        int *l_949 = (void*)0;
        int *l_950 = &g_311;
        int *l_951 = &g_520;
        int *l_952 = &g_311;
        int *l_954 = &g_90;
        int *l_955 = &l_953;
        int *l_956 = (void*)0;
        int l_957 = (-1L);
        int *l_958 = &l_924;
        int *l_959 = (void*)0;
        int *l_960 = &l_915;
        int *l_961 = &l_953;
        int *l_962 = (void*)0;
        int l_963 = 1L;
        int *l_964 = (void*)0;
        int *l_966 = &g_520;
        int *l_967 = &l_957;
        int *l_968 = &g_90;
        int *l_969 = (void*)0;
        int *l_970 = &l_924;
        int *l_971 = (void*)0;
        int *l_972 = &l_915;
        int *l_973 = (void*)0;
        int *l_974 = &l_915;
        int l_975 = 0x361F96C2L;
        int *l_976 = &l_963;
        int *l_979 = &l_953;
        int *l_980 = &l_957;
        int *l_981 = &g_520;
        int *l_982 = (void*)0;
        int *l_983 = (void*)0;
        int *l_985 = (void*)0;
        int *l_986 = &l_978;
        int *l_987 = &g_616;
        int *l_989 = (void*)0;
        int *l_990 = (void*)0;
        int *l_991 = &l_915;
        int *l_992 = &l_915;
        int *l_993 = (void*)0;
        int *l_994 = &l_963;
        int *l_995 = &l_953;
        int *l_996 = &g_311;
        int *l_997 = &l_975;
        int *l_998 = &l_963;
        int *l_999 = (void*)0;
        int *l_1001 = &l_915;
        int *l_1002 = &l_953;
        int *l_1003 = &g_616;
        int *l_1005 = &l_978;
        int *l_1006 = &g_984;
        int *l_1007 = &l_915;
        for (g_711 = 0; (g_711 <= 13); g_711++)
        {
            for (g_567 = (-20); (g_567 == 3); g_567 = safe_add_func_uint8_t_u_u(g_567, 1))
            {
                (**g_636) = (**g_636);
                if ((*p_28))
                    continue;
                l_906 = p_28;

                ;
            }
        }

        ;
        g_1008++;
        for (g_321 = 0; (g_321 == 39); ++g_321)
        {
            unsigned long long l_1015 = 0UL;
            int *l_1017 = &l_957;
            if ((6L <= g_564))
            {
                unsigned short l_1016 = 0x1516L;
                int *l_1018 = &l_957;
                (*l_958) = (((0x1AE9L | (safe_rshift_func_int16_t_s_s(l_1015, 1))) | (l_1016 > ((((g_516 , ((void*)0 == l_1017)) , p_27) <= (*l_945)) >= (g_761 , (*l_1017))))) <= g_220);
                (**l_898) = func_43(l_1016, ((!(g_137 <= (func_38((g_516 < 0xD6L), p_29, l_1018, ((func_38(((((*l_1017) ^ (((safe_add_func_int64_t_s_s((safe_sub_func_int64_t_s_s(p_29, (((p_27 && 1UL) , p_28) != (*g_155)))), 0x5AF66207B60FCA6BLL)) <= 0UL) , (*l_1017))) > (-1L)) , (*p_28)), g_144, (**g_636), g_984) >= (*l_1018)) , 18446744073709551615UL)) | 1L))) <= p_29), p_28, p_29);
            }
            else
            {
                unsigned long long l_1023 = 18446744073709551615UL;
                (**g_636) = (**g_636);
            }
        }
    }
    g_1241++;
    return (*l_1116);
}







static int func_32(const unsigned char p_33, int * p_34, char p_35, unsigned p_36, unsigned short p_37)
{
    int *l_409 = &g_90;
    int ***l_410 = &g_155;
    int *l_417 = (void*)0;
    int *l_418 = &g_121;
    int l_432 = 7L;
    unsigned short l_433 = 0x0FFDL;
    short l_464 = 0x1E11L;
    int l_510 = 1L;
    int l_566 = 0xFCE86A73L;
    unsigned l_572 = 7UL;
    int l_602 = (-7L);
    int l_608 = 0x072B97F2L;
    long long l_632 = 0x45704F456B11966ALL;
    int l_680 = (-1L);
    int l_697 = 0x13624698L;
    int l_703 = 1L;
    (*l_418) &= func_63(l_409, ((l_410 != l_410) >= g_399), p_34, (**l_410), (*l_409));
    for (g_220 = 0; (g_220 != 33); g_220 = safe_add_func_int8_t_s_s(g_220, 1))
    {
        int l_431 = 0L;
        short l_459 = 0xC88DL;
        int l_465 = (-1L);
        int l_470 = (-1L);
        int l_477 = 0x3E002D6EL;
        int l_480 = (-7L);
        int l_539 = 0x2D56DB8BL;
        int l_558 = 4L;
        char l_573 = (-5L);
    }
    for (g_321 = (-25); (g_321 == 55); g_321++)
    {
        int l_578 = 0xA4992157L;
        int *l_581 = &g_90;
        int *l_582 = &l_566;
        int *l_583 = &g_520;
        int *l_584 = (void*)0;
        int *l_585 = (void*)0;
        int *l_586 = &l_510;
        int *l_587 = &l_510;
        int *l_588 = &g_121;
        int *l_589 = &l_432;
        int *l_590 = &l_432;
        int *l_591 = &l_432;
        int *l_592 = &g_311;
        int *l_593 = &g_90;
        int *l_594 = (void*)0;
        int *l_595 = &g_90;
        int *l_596 = &g_520;
        int *l_597 = &l_432;
        int *l_598 = &l_566;
        int *l_599 = &l_566;
        int *l_600 = &l_510;
        int *l_601 = &l_566;
        int *l_603 = (void*)0;
        int *l_604 = &g_121;
        int *l_605 = &l_602;
        int *l_606 = &l_602;
        int *l_607 = &g_520;
        int *l_609 = (void*)0;
        int *l_610 = &g_520;
        int *l_611 = &l_566;
        int *l_612 = &l_510;
        int *l_613 = &g_311;
        int *l_614 = &g_311;
        int *l_615 = &l_432;
        int *l_617 = &g_616;
        int *l_618 = &l_510;
        int l_619 = 7L;
        int *l_620 = &l_602;
        int *l_621 = (void*)0;
        int *l_622 = &l_566;
        int *l_623 = &l_510;
        int *l_624 = &g_121;
        int *l_625 = &g_311;
        int *l_626 = &l_432;
        int *l_627 = &l_619;
        int *l_628 = &g_90;
        for (g_516 = 0; (g_516 != (-18)); g_516 = safe_sub_func_int32_t_s_s(g_516, 3))
        {
            (*g_155) = (*g_155);
        }
        (*l_409) = (g_321 | ((**g_155) , l_578));
        for (g_567 = 0; (g_567 < 18); g_567 = safe_add_func_int16_t_s_s(g_567, 3))
        {
            (**l_410) = (*g_155);
        }
        g_629--;
    }
    if ((l_410 != (void*)0))
    {
        unsigned short l_633 = 9UL;
        unsigned l_634 = 0x45F09B39L;
        int ***l_635 = &g_155;
        int *l_637 = &l_566;
        int *l_638 = &g_121;
        int *l_639 = &g_520;
        int *l_640 = &g_121;
        int *l_641 = (void*)0;
        int *l_642 = &g_311;
        int *l_643 = &g_90;
        int *l_644 = &l_566;
        int *l_645 = (void*)0;
        int *l_646 = &g_311;
        int *l_647 = &l_510;
        int *l_648 = &g_121;
        int *l_649 = &l_608;
        int *l_650 = &l_566;
        int *l_651 = &l_608;
        int *l_652 = &g_121;
        int *l_653 = &g_616;
        int *l_654 = &l_432;
        long long l_655 = (-10L);
        int *l_656 = &g_311;
        int *l_657 = &g_90;
        int *l_658 = &l_602;
        int *l_659 = &l_602;
        int *l_660 = &l_608;
        int *l_661 = &l_566;
        int l_662 = (-9L);
        int *l_663 = (void*)0;
        int *l_664 = &g_121;
        int *l_665 = &l_602;
        int *l_666 = &l_566;
        int *l_667 = &l_432;
        int *l_668 = (void*)0;
        int l_669 = 0xED963F0BL;
        int *l_670 = (void*)0;
        int *l_671 = (void*)0;
        int *l_672 = &l_510;
        int *l_673 = &g_616;
        int *l_674 = &l_566;
        int *l_675 = &g_520;
        int *l_676 = &g_90;
        int *l_677 = &g_90;
        int *l_678 = &l_566;
        int *l_679 = &l_608;
        int l_681 = 0xEA07931BL;
        int *l_682 = &l_510;
        int *l_683 = &l_602;
        int *l_684 = &l_602;
        int *l_685 = &g_90;
        int *l_686 = &g_616;
        int *l_687 = &l_669;
        int l_688 = 0L;
        int *l_689 = &g_90;
        int *l_690 = &g_616;
        int *l_691 = &l_662;
        int *l_692 = &g_90;
        int *l_693 = &l_510;
        int *l_694 = &g_90;
        int *l_695 = (void*)0;
        int *l_696 = &g_311;
        int *l_699 = &l_662;
        int *l_700 = (void*)0;
        int *l_701 = &g_121;
        int *l_702 = &l_669;
        int *l_704 = &l_566;
        int *l_705 = &l_688;
        int *l_706 = &l_681;
        int *l_707 = &l_662;
        int *l_708 = &l_510;
        int *l_709 = &l_662;
        int *l_710 = &l_688;
        (*g_155) = func_43((l_632 >= l_633), l_634, (*g_155), ((l_635 != g_636) <= (((void*)0 == &g_155) && (&g_155 != l_635))));
        ++g_711;
        for (g_629 = 6; (g_629 != 8); g_629 = safe_add_func_int8_t_s_s(g_629, 9))
        {
            unsigned char l_716 = 2UL;
            --l_716;
            (*l_709) = ((l_716 | ((6UL >= (safe_add_func_int64_t_s_s(((((p_36 & p_33) , (+1UL)) , ((((0x16L == 0x70L) == (safe_add_func_uint8_t_u_u(p_36, (((((1L ^ (*l_418)) , 0xDF6DA999L) , (void*)0) == (*l_410)) <= g_2)))) , p_35) || g_516)) > (*l_648)), l_716))) && l_716)) >= 0x44EBC241L);
            return p_33;
        }
        (*l_672) = (***l_410);
    }
    else
    {
        unsigned long long l_732 = 18446744073709551612UL;
        const int l_743 = 8L;
        const int *l_744 = &l_432;
        int l_876 = 6L;
        int l_878 = 7L;
        int l_883 = 3L;
        int l_884 = 0x72CE8FFDL;
        int l_885 = 0xE971B681L;
        if ((**g_155))
        {
            int ***l_756 = &g_155;
            int l_877 = (-6L);
            int l_879 = 0x960DB2EBL;
            for (l_566 = 0; (l_566 > (-21)); --l_566)
            {
                unsigned char l_725 = 4UL;
                int l_739 = 0x59DEF7B2L;
                int l_804 = 0x6D742D97L;
                int l_843 = 0x02EDE02FL;
                unsigned char l_873 = 0UL;
                l_725++;
                l_739 ^= ((8UL & ((safe_rshift_func_int16_t_s_s((!p_36), 5)) >= (g_698 == (l_732 ^ l_732)))) , (safe_sub_func_int64_t_s_s((0x46L <= ((((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((g_399 > g_311), 14)) >= (((void*)0 == &p_34) ^ 1UL)), 4)) & l_732) == p_35) | p_35)), p_35)));
                if (l_732)
                {
                    unsigned l_740 = 0UL;
                    (*l_418) = (((l_740 , ((((((safe_add_func_int8_t_s_s(((!(((l_743 >= (~((void*)0 == p_34))) || (func_63(p_34, p_36, (*g_155), (*g_155), (*p_34)) | 0x78E5L)) <= (-8L))) != p_33), l_740)) <= (*p_34)) ^ p_37) || l_740) , (*l_744)) <= l_740)) , &p_34) != (*l_410));
                    for (g_616 = 10; (g_616 == 24); g_616 = safe_add_func_uint8_t_u_u(g_616, 6))
                    {
                        if ((*p_34))
                            break;
                        return g_103;
                    }
                }
                else
                {
                    unsigned short l_751 = 0x7433L;
                    int l_773 = (-8L);
                    int l_830 = (-1L);
                    int l_851 = 0xE212C8AAL;
                    (*g_155) = (void*)0;

                    ;
                    if (func_38(((((((safe_add_func_uint32_t_u_u(((g_564 && p_35) , p_35), 1L)) , p_34) == (void*)0) > (((((func_38((p_37 , (safe_mod_func_int8_t_s_s(((void*)0 == &p_34), g_516))), g_527, (*g_155), g_711) , &p_34) != &l_744) == g_520) != g_220) ^ 0xB5L)) , (*p_34)) > l_751), (*l_409), (**g_636), p_37))
                    {
                        int *l_764 = &g_2;
                        (*g_155) = (*g_155);
                        (*g_155) = p_34;

                        ;
                        return l_739;
                    }
                    else
                    {
                        char l_774 = 0L;
                        int *l_775 = &l_510;
                        int *l_776 = (void*)0;
                        int *l_777 = &l_608;
                        int *l_778 = &l_432;
                        int *l_779 = &g_121;
                        int *l_780 = &l_697;
                        int *l_781 = &g_121;
                        int *l_782 = &g_520;
                        int *l_783 = &g_616;
                        int *l_784 = &l_773;
                        int *l_785 = (void*)0;
                        int *l_786 = &l_432;
                        int *l_787 = &l_432;
                        int *l_788 = &l_510;
                        int *l_789 = &l_432;
                        int *l_790 = &g_311;
                        int *l_791 = (void*)0;
                        int *l_792 = &g_121;
                        int *l_793 = &l_739;
                        int *l_794 = (void*)0;
                        int *l_795 = (void*)0;
                        int *l_796 = (void*)0;
                        int *l_797 = &g_520;
                        int *l_798 = &l_432;
                        int *l_799 = &l_602;
                        int *l_800 = &l_697;
                        int *l_801 = &l_602;
                        int *l_802 = (void*)0;
                        int *l_803 = &l_432;
                        int *l_805 = &g_90;
                        int *l_806 = &g_121;
                        int *l_807 = &l_432;
                        int *l_808 = &l_680;
                        int *l_809 = &l_703;
                        int *l_810 = &l_510;
                        int *l_811 = &l_432;
                        int *l_812 = &l_602;
                        int *l_813 = &l_432;
                        int *l_814 = &l_510;
                        int *l_815 = &l_510;
                        int *l_816 = &l_697;
                        int *l_817 = &g_311;
                        int *l_818 = &l_739;
                        int *l_819 = &l_697;
                        int *l_820 = &l_602;
                        int *l_821 = &l_697;
                        int *l_822 = &g_311;
                        int *l_823 = (void*)0;
                        int *l_824 = &l_773;
                        int *l_825 = &l_804;
                        int *l_826 = &l_804;
                        int *l_827 = (void*)0;
                        int *l_828 = &l_739;
                        int l_829 = (-1L);
                        int *l_831 = &l_697;
                        int *l_832 = &g_520;
                        int *l_833 = (void*)0;
                        int *l_834 = &l_432;
                        int *l_835 = &g_616;
                        int *l_836 = &l_739;
                        int *l_837 = (void*)0;
                        int *l_838 = &l_608;
                        int *l_839 = &l_680;
                        int *l_840 = (void*)0;
                        int *l_841 = &l_680;
                        int *l_842 = &l_510;
                        int *l_844 = &l_739;
                        int *l_845 = &l_773;
                        int *l_846 = (void*)0;
                        int *l_847 = &l_829;
                        int *l_848 = &g_616;
                        int *l_849 = &l_432;
                        int *l_850 = &l_804;
                        int *l_852 = &l_739;
                        int *l_853 = &l_830;
                        int *l_854 = &l_804;
                        int *l_855 = &l_510;
                        int *l_856 = &g_520;
                        int *l_857 = &g_520;
                        int *l_858 = (void*)0;
                        int *l_859 = &l_829;
                        int *l_860 = &g_90;
                        int *l_861 = &l_510;
                        int *l_862 = &l_829;
                        int *l_863 = (void*)0;
                        int *l_864 = &l_432;
                        int *l_865 = &l_510;
                        int *l_866 = &g_311;
                        int *l_867 = &g_616;
                        int *l_868 = &l_608;
                        int *l_869 = &l_739;
                        int *l_870 = &l_680;
                        int *l_871 = &l_739;
                        int *l_872 = &l_804;
                        int *l_886 = &l_878;
                        int *l_887 = &l_879;
                        int *l_888 = (void*)0;
                        int *l_889 = (void*)0;
                        --l_873;
                        g_880++;
                        g_890--;
                    }
                    if ((*p_34))
                        break;
                    return g_311;
                }
            }

            ;
        }
        else
        {
            const int **l_893 = &l_744;
            const int ***l_894 = &l_893;
            (*l_418) ^= ((g_564 , &l_744) == (void*)0);
            (*l_894) = l_893;
            (**l_894) = (**l_894);
        }

        ;
    }

    ;
    return (*l_418);
}







static const unsigned char func_38(int p_39, short p_40, int * p_41, unsigned p_42)
{
    int l_325 = 1L;
    int *l_326 = &g_311;
    int l_327 = 1L;
    int *l_328 = &l_327;
    int l_329 = 0x3D5FC5F3L;
    int *l_330 = &l_329;
    int *l_331 = &l_329;
    int *l_332 = &l_327;
    int *l_333 = (void*)0;
    int *l_334 = &l_325;
    int *l_335 = (void*)0;
    int *l_336 = &g_121;
    int *l_337 = &l_329;
    int *l_338 = &g_90;
    int *l_339 = &l_329;
    int *l_340 = &g_121;
    int l_341 = (-1L);
    int *l_342 = (void*)0;
    int *l_343 = &l_329;
    int *l_344 = &l_325;
    int l_345 = 0x8A4F390BL;
    int l_346 = 0x216B368CL;
    int *l_347 = (void*)0;
    int *l_348 = &l_345;
    int *l_349 = &l_329;
    int *l_350 = &l_329;
    int *l_351 = &l_346;
    int *l_352 = &l_329;
    int *l_353 = &l_341;
    int *l_354 = (void*)0;
    int *l_356 = &g_90;
    int *l_357 = &l_341;
    int *l_358 = (void*)0;
    int *l_359 = &l_325;
    int *l_360 = &l_325;
    int *l_361 = &g_121;
    int *l_362 = (void*)0;
    int *l_363 = &l_345;
    int *l_364 = &l_341;
    int *l_365 = &l_327;
    int *l_366 = &l_345;
    int *l_367 = (void*)0;
    int *l_368 = &l_327;
    int *l_369 = &l_341;
    int *l_370 = &l_325;
    int *l_371 = &l_341;
    int *l_372 = (void*)0;
    int *l_373 = (void*)0;
    int *l_374 = (void*)0;
    int *l_375 = (void*)0;
    int *l_376 = &g_90;
    int *l_377 = (void*)0;
    int *l_378 = &l_345;
    int l_379 = 0x16C38271L;
    int *l_380 = (void*)0;
    int *l_381 = &l_346;
    int *l_382 = &l_379;
    int *l_383 = &l_345;
    int *l_384 = (void*)0;
    int *l_385 = (void*)0;
    int *l_386 = &g_311;
    int *l_387 = &g_311;
    int *l_388 = &g_90;
    int *l_389 = (void*)0;
    int *l_390 = &l_346;
    int *l_391 = &g_311;
    int *l_392 = &g_121;
    int *l_393 = &l_341;
    int l_394 = (-7L);
    int *l_395 = (void*)0;
    int *l_396 = (void*)0;
    int l_397 = 0x2C723471L;
    int *l_398 = &g_311;
    int *l_400 = (void*)0;
    int *l_401 = &g_90;
    int *l_402 = &l_394;
    int *l_403 = &l_327;
    int *l_404 = (void*)0;
    unsigned l_405 = 3UL;
    ++l_405;
    return p_40;
}







static int * func_43(int p_44, unsigned long long p_45, int * p_46, short p_47)
{
    long long l_322 = (-2L);
    int *l_323 = &g_311;
    g_121 &= (*l_323);
    return (*g_155);


}







static int func_54(unsigned char p_55, int * p_56)
{
    const unsigned l_73 = 0xA839BB81L;
    int *l_277 = &g_2;
    int *l_308 = &g_90;
    int l_316 = 1L;
    int ***l_319 = (void*)0;
    int l_320 = 1L;
    if ((*p_56))
    {
        int l_80 = 0x392E18E6L;
        const int *l_81 = (void*)0;
        const int *l_276 = &g_103;
        unsigned short l_278 = 0x94C8L;
        long long l_290 = 5L;
        l_278 = (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_s(((safe_sub_func_int64_t_s_s(g_2, func_63(func_69((((l_73 <= ((safe_sub_func_int8_t_s_s(p_55, ((safe_rshift_func_uint16_t_u_s((&g_2 != p_56), (safe_sub_func_uint64_t_u_u((l_80 <= l_73), p_55)))) , g_2))) >= l_73)) , 0xA27655505F459CADLL) ^ 0UL), l_81, p_55), g_132, l_276, l_277, (*p_56)))) >= g_144), 5)) , g_2), (*l_277)));

        ;
        for (l_278 = 26; (l_278 < 3); l_278 = safe_sub_func_uint64_t_u_u(l_278, 6))
        {
            int **l_289 = (void*)0;
            if ((*p_56))
                break;
            l_290 |= (~(0x72575A83L >= (safe_add_func_uint32_t_u_u((safe_add_func_int64_t_s_s((((-7L) > (((*l_277) , (((safe_sub_func_uint32_t_u_u((p_55 ^ g_90), (safe_add_func_uint32_t_u_u(p_55, ((l_289 != &g_156) , ((p_55 , (*p_56)) & (*l_276))))))) <= g_137) , 0xA0E92DA2L)) | (*l_277))) >= g_2), g_137)), g_2))));
            return (*p_56);
        }
        g_121 = (((((safe_mod_func_uint64_t_u_u((((((((((((safe_lshift_func_int16_t_s_u((+g_220), 7)) , (safe_lshift_func_uint16_t_u_s(g_132, ((((safe_sub_func_uint32_t_u_u((((void*)0 != (*g_155)) | ((((*p_56) != 4294967290UL) > (255UL < (func_63(l_277, (p_55 & p_55), l_277, (*g_155), (*l_277)) ^ (*l_277)))) && 0x270A30F14B3650ACLL)), (*l_276))) <= (*l_277)) <= (*l_277)) < p_55)))) ^ (*l_277)) , l_277) != (void*)0) != 0xFFL) != (*l_277)) , (*l_277)) & 0xB2L) , p_55) < 255UL), 1L)) != g_144) < p_55) < 9UL) , (*l_276));
    }
    else
    {
        int * const *l_307 = &l_277;
        int *l_309 = (void*)0;
        int *l_310 = &g_311;
        (*l_310) |= (((safe_rshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(func_63((*g_155), ((p_55 , l_307) == ((**l_307) , ((*l_277) , &g_156))), (*g_155), l_308, (**l_307)), g_103)), (*l_277))) , (*g_156)), (*g_156))) == (*l_308)), (*l_277))) , g_90) >= 0x622FC61834C53088LL);
        l_320 |= (p_55 > func_63(func_69((((((((((**l_307) ^ p_55) , ((((((safe_add_func_int16_t_s_s(g_2, (~(g_90 <= (safe_sub_func_int32_t_s_s((l_316 && (p_55 <= (safe_mod_func_uint8_t_u_u((g_132 == p_55), g_2)))), 0x075B5994L)))))) < 0xCDA9944A5D971EE6LL) || p_55) & g_2) , g_2) || p_55)) <= 1UL) , l_319) != &l_307) , p_55) , p_55) <= (*l_277)), &l_316, p_55), (**l_307), l_310, &g_2, (**l_307)));

        ;
    }

    ;
    return (*l_277);
}







static const unsigned long long func_63(int * p_64, unsigned p_65, const int * p_66, int * p_67, int p_68)
{
    p_68 = (*p_66);
    return g_150;
}







static int * func_69(unsigned short p_70, const int * p_71, short p_72)
{
    unsigned l_86 = 4294967295UL;
    unsigned l_102 = 0x7032CD4BL;
    int l_126 = 3L;
    int * const *l_195 = &g_156;
    int *l_206 = &l_126;
    int *l_207 = &g_121;
    int *l_208 = &l_126;
    int *l_209 = &g_121;
    int *l_210 = &l_126;
    int *l_211 = &l_126;
    int *l_212 = &g_90;
    int *l_213 = &g_121;
    int *l_214 = &l_126;
    int *l_215 = &g_90;
    int *l_216 = &g_90;
    int *l_217 = (void*)0;
    int *l_218 = &g_121;
    int *l_219 = &g_90;
    char l_229 = 0xDBL;
    const unsigned l_230 = 1UL;
    for (p_72 = 0; (p_72 < (-22)); --p_72)
    {
        unsigned l_87 = 0xBB69233CL;
        int *l_99 = &g_90;
        int l_129 = 0x5F560565L;
        for (p_70 = 0; (p_70 >= 18); p_70 = safe_add_func_int64_t_s_s(p_70, 8))
        {
            int *l_88 = (void*)0;
            int *l_89 = &g_90;
            (*l_89) = (l_86 <= l_87);
            (*l_89) = g_2;
        }
        if ((((safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(p_70, (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((g_90 , g_2), l_86)), ((&g_90 == l_99) || (~(((safe_rshift_func_int16_t_s_s((g_2 ^ (*l_99)), ((p_70 , g_90) > g_2))) , l_102) < 0x297315BB970EAE32LL))))))), 4)) , g_103) > g_103))
        {
            const int *l_105 = &g_2;
            const int **l_104 = &l_105;
            unsigned char l_118 = 255UL;
            int **l_157 = &l_99;
            int l_189 = 0x343E278FL;
            l_99 = (g_103 , &g_90);
            (*l_104) = p_71;


            if (((void*)0 == p_71))
            {
                unsigned l_108 = 0xE9F7A6BAL;
                int *l_109 = &g_90;
                int *l_119 = (void*)0;
                int *l_120 = &g_121;
                int *l_122 = &g_121;
                int *l_123 = &g_90;
                int *l_124 = &g_121;
                int l_125 = 0xD280D01BL;
                int *l_127 = &l_125;
                int *l_128 = &l_126;
                int *l_130 = (void*)0;
                int *l_131 = (void*)0;
                int *l_133 = &l_125;
                int *l_134 = &l_125;
                int *l_135 = &l_125;
                int *l_136 = &g_90;
                int *l_138 = &l_125;
                int *l_139 = &l_126;
                int *l_140 = &l_126;
                int *l_141 = &l_129;
                int *l_142 = &l_126;
                int *l_143 = &g_90;
                int *l_145 = &g_121;
                int *l_146 = &l_129;
                int *l_147 = &g_90;
                int *l_148 = (void*)0;
                int *l_149 = &l_129;
                (*l_120) |= ((safe_lshift_func_int16_t_s_s(((0x76063AEBL | (p_72 == (((l_108 & ((*l_104) == l_109)) >= ((safe_rshift_func_int16_t_s_u(p_72, ((*l_109) , (((0xF637114CL && (safe_mod_func_int64_t_s_s((safe_add_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((g_103 > g_90), 0xD38C14FD429592AELL)), (-8L))), l_102))) , 2L) ^ p_72)))) >= 0x2F72762B6CB16C62LL)) | l_118))) ^ (*l_99)), g_90)) , (-1L));
                g_150--;
                if (g_103)
                {
                    (*l_135) = 0L;
                }
                else
                {
                    (*l_99) &= 3L;
                    for (g_90 = (-23); (g_90 <= 24); ++g_90)
                    {
                        l_157 = g_155;

                        ;
                    }

                    ;
                }

                ;
            }
            else
            {
                long long l_160 = 0xDB2509B59B1E0FC0LL;
                int ***l_165 = &l_157;
                unsigned l_188 = 0x4CDD2EE4L;
                if (((safe_lshift_func_int8_t_s_s((l_160 == 7UL), ((*l_99) > ((void*)0 != &l_99)))) , (((((1L != (((*g_155) != p_71) , (**g_155))) == 1L) , p_70) != 0UL) && l_86)))
                {
                    int l_161 = 0x2DAC479BL;
                    if (l_161)
                        break;
                    for (l_86 = 0; (l_86 > 59); ++l_86)
                    {
                        (**g_155) = 1L;
                    }
                }
                else
                {
                    int *l_164 = &l_129;
                    l_164 = (*g_155);

                    ;
                }
                if ((*g_156))
                    break;
                (*l_165) = &g_156;

                ;
                l_189 ^= ((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((((0x12514AF1L < (((((((safe_rshift_func_int16_t_s_s(((4UL || (safe_rshift_func_int8_t_s_s((***l_165), ((safe_rshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((***l_165), (p_72 & g_90))), 9)) >= ((safe_mod_func_int32_t_s_s(((*l_99) , l_102), ((0UL && p_72) , g_137))) , (***l_165))), p_72)), l_188)), 4)) < p_72)))) || 0xDEFA47E73AB66917LL), 9)) <= p_72) | 0x43CA2BCDE28A808BLL) & 246UL) ^ (***l_165)) > 0x2CD61D1BL) && g_2)) ^ 0x3D9AL) != p_72), g_103)), g_144)), l_126)) , (*g_156));
            }

            ;
            (*l_99) |= (*g_156);
        }
        else
        {
            long long l_190 = 0xEA00BF5F1DF6FF76LL;
            int *l_198 = &l_126;
            l_190 |= (&g_155 == &g_155);
            for (g_137 = 0; (g_137 > 3); g_137 = safe_add_func_int16_t_s_s(g_137, 4))
            {
                if ((**g_155))
                    break;
                if (l_190)
                    break;
            }
            for (l_86 = 0; (l_86 >= 9); l_86 = safe_add_func_uint32_t_u_u(l_86, 1))
            {
                int *l_199 = &g_121;
                if ((l_195 == (void*)0))
                {
                    (**g_155) &= ((~l_190) ^ 0UL);
                    if ((**g_155))
                        break;
                }
                else
                {
                    return l_199;


                }
                (**g_155) = (((*l_99) || (**l_195)) , (((g_2 & (&l_99 == (p_70 , l_195))) >= ((((((safe_mod_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((g_121 ^ g_137), p_72)) || 8L), 0x7AL)), 1UL)) & 0xECED94F1BE2ED989LL) , g_137) == 65532UL) != g_121) , p_72)) <= (*l_198)));
                (**g_155) = (*l_199);
            }
        }
    }
    (*g_155) = (*l_195);
    g_220--;
    for (g_150 = 0; (g_150 == 41); g_150++)
    {
        unsigned l_235 = 0xDB2DB784L;
        int *l_238 = &g_121;
        int l_268 = 0xE9A43CC3L;
        if ((((safe_sub_func_int64_t_s_s(g_137, (safe_add_func_uint8_t_u_u((l_229 > (l_230 ^ (p_70 | ((p_70 , (safe_add_func_int8_t_s_s(((safe_mod_func_int64_t_s_s((0x98B4B1B4L < l_235), g_132)) || g_150), (*l_219)))) != (*l_219))))), g_103)))) & (**g_155)) , l_235))
        {
            int *l_243 = &g_2;
            if ((g_150 != (l_235 <= (p_72 ^ g_137))))
            {
                const int *l_237 = &g_121;
                const int **l_236 = &l_237;
                (*l_236) = p_71;


                (*l_236) = l_238;

                ;
            }
            else
            {
                unsigned l_258 = 1UL;
                int ***l_264 = &g_155;
                (*l_208) ^= (*g_156);
                if ((*l_238))
                {
                    for (g_90 = (-15); (g_90 > (-27)); g_90 = safe_sub_func_uint16_t_u_u(g_90, 1))
                    {
                        (*g_155) = (*g_155);
                        (*l_211) ^= (*g_156);
                    }
                    for (l_229 = 15; (l_229 <= (-22)); l_229 = safe_sub_func_int8_t_s_s(l_229, 3))
                    {
                        (*g_155) = l_243;

                        ;
                    }

                    ;
                }
                else
                {
                    short l_259 = 0x249DL;
                    (*l_211) |= (((safe_mod_func_int32_t_s_s(((safe_mod_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(65533UL, p_72)), (((safe_lshift_func_int8_t_s_s(g_2, g_137)) , 0xDA2C960BL) , (safe_add_func_int8_t_s_s(((p_70 > ((safe_add_func_int8_t_s_s(g_132, l_258)) || ((g_220 == l_259) > p_72))) > p_72), 0L))))) && 0x60A3BB4AL) >= p_70), 1L)) | (*l_238)), 4294967295UL)) == p_72) , 0L);
                }

                ;
                if ((p_70 >= p_72))
                {
                    return (*g_155);


                }
                else
                {
                    char l_265 = 0x03L;
                    int *l_271 = &l_126;
                    if ((((((p_70 > ((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((l_264 == ((((g_137 ^ p_72) > l_265) & ((safe_mod_func_int64_t_s_s((((g_220 && g_90) == p_72) < p_72), l_268)) && g_137)) , l_264)), p_72)), g_144)) == 0x25CEL)) && (*l_238)) | p_70) <= (***l_264)) < (-3L)))
                    {
                        return (**l_264);


                    }
                    else
                    {
                        (*l_211) = (safe_lshift_func_int16_t_s_s(p_70, (g_90 , (g_2 == 1UL))));
                        (*l_212) = 0x32801D18L;
                        (*l_216) &= 0xBE0CD270L;
                    }
                    (*l_216) |= (*g_156);
                    p_71 = l_271;

                    ;
                }

                ;
                (*l_206) = 3L;
            }


            ;
            return (*g_155);


        }
        else
        {
            (*l_211) = (safe_lshift_func_uint8_t_u_s(g_121, 4));
            if ((*l_211))
                continue;
        }
        if ((**g_155))
            continue;
        (*l_219) = (((g_121 ^ ((*l_238) <= ((((safe_sub_func_int8_t_s_s(0xB6L, (((p_71 != (void*)0) , &l_195) != (void*)0))) < ((*l_238) > (-1L))) && p_72) ^ p_70))) != (*l_214)) >= 0x722DL);
    }
    return (*g_155);


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_321, "g_321", print_hash_value);
    transparent_crc(g_355, "g_355", print_hash_value);
    transparent_crc(g_399, "g_399", print_hash_value);
    transparent_crc(g_516, "g_516", print_hash_value);
    transparent_crc(g_520, "g_520", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_549, "g_549", print_hash_value);
    transparent_crc(g_564, "g_564", print_hash_value);
    transparent_crc(g_567, "g_567", print_hash_value);
    transparent_crc(g_616, "g_616", print_hash_value);
    transparent_crc(g_629, "g_629", print_hash_value);
    transparent_crc(g_698, "g_698", print_hash_value);
    transparent_crc(g_711, "g_711", print_hash_value);
    transparent_crc(g_761, "g_761", print_hash_value);
    transparent_crc(g_880, "g_880", print_hash_value);
    transparent_crc(g_890, "g_890", print_hash_value);
    transparent_crc(g_977, "g_977", print_hash_value);
    transparent_crc(g_984, "g_984", print_hash_value);
    transparent_crc(g_988, "g_988", print_hash_value);
    transparent_crc(g_1008, "g_1008", print_hash_value);
    transparent_crc(g_1177, "g_1177", print_hash_value);
    transparent_crc(g_1241, "g_1241", print_hash_value);
    transparent_crc(g_1410, "g_1410", print_hash_value);
    transparent_crc(g_1420, "g_1420", print_hash_value);
    transparent_crc(g_1426, "g_1426", print_hash_value);
    transparent_crc(g_1442, "g_1442", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
