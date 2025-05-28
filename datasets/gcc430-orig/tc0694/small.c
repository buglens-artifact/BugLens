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
   volatile long long f1;
   volatile char f2;
};


static volatile int g_2 = 1L;
static int g_3 = 0L;
static int g_10 = 0xA2B3B7BEL;
static volatile int g_13 = 1L;
static int g_14 = 0L;
static int *g_43 = (void*)0;
static int **g_42 = &g_43;
static struct S0 g_70 = {0x7756L,0xB3E1984BBC1846E9LL,0x2FL};
static struct S0 *g_75 = &g_70;
static struct S0 ** volatile g_74 = &g_75;
static volatile int g_88 = 0L;
static volatile short g_165 = 0x11F3L;
static unsigned long long g_167 = 0x12F6744ED4C97A61LL;
static unsigned g_172 = 0UL;
static volatile struct S0 g_177 = {1L,0xE31D749550B438E4LL,-1L};
static struct S0 g_181 = {0xD717L,0xF146544C23B8D9BCLL,-1L};
static int **g_183 = (void*)0;
static int *** volatile g_182 = &g_183;
static volatile int g_219 = 0x7C975BB6L;
static unsigned long long g_227 = 1UL;
static volatile unsigned long long g_331 = 18446744073709551615UL;
static struct S0 ** volatile g_341 = (void*)0;
static struct S0 ** volatile g_342 = &g_75;
static volatile char g_419 = 0x04L;
static unsigned g_427 = 18446744073709551615UL;
static int **g_440 = &g_43;
static volatile unsigned char g_475 = 251UL;
static struct S0 g_481 = {0L,-10L,0xAAL};
static unsigned g_544 = 0UL;
static int g_553 = 0xD64FB073L;
static char g_584 = 0xA5L;
static volatile char g_624 = 0xA3L;
static volatile int g_636 = 0x3B4EDD34L;
static volatile unsigned char g_638 = 254UL;
static unsigned short g_733 = 0x0A98L;
static unsigned g_758 = 1UL;
static int g_800 = 0x03F32B09L;
static unsigned g_801 = 0xB3A67F1FL;
static int * volatile g_833 = &g_10;
static short g_1029 = 0xE4A7L;
static volatile int g_1030 = 0x6067CA7EL;
static volatile unsigned g_1045 = 0x63DE6470L;
static struct S0 g_1056 = {0x5A10L,0x9DC63889E4DC1ACALL,0x03L};
static struct S0 g_1070 = {0x3598L,-1L,-1L};
static struct S0 g_1086 = {0xA99EL,-1L,0x8FL};
static unsigned long long g_1361 = 0x9982AC0DE20CBC91LL;
static volatile unsigned char g_1571 = 0UL;
static struct S0 g_1685 = {0xFEF6L,0x6F391CCCAC3A0E80LL,-1L};
static int **g_1687 = (void*)0;
static struct S0 g_1764 = {-1L,0x4B1C93B9FDA726F9LL,0L};
static volatile unsigned long long g_1773 = 1UL;
static int g_1846 = 0x73219B72L;
static volatile unsigned g_1852 = 18446744073709551611UL;



static int func_1(void);
static int * func_23(char p_24, unsigned p_25, int ** p_26);
static unsigned short func_34(int * p_35, char p_36, int * p_37);
static int * func_39(int ** p_40, long long p_41);
static long long func_44(char p_45, int * p_46, unsigned short p_47, int ** p_48);
static int * func_49(short p_50, int ** p_51, unsigned short p_52);
static short func_55(int * p_56, unsigned char p_57, unsigned p_58, int ** p_59, unsigned short p_60);
static int * func_61(int ** p_62);
static int ** func_63(unsigned p_64, int ** p_65);
static struct S0 func_66(unsigned short p_67, int * p_68);
static int func_1(void)
{
    int *l_6 = (void*)0;
    char l_21 = 0xF7L;
    int *l_1608 = &g_800;
    int l_1664 = 0x315014E6L;
    int l_1717 = 0xBDB6B0B5L;
    for (g_3 = (-9); (g_3 >= 2); g_3++)
    {
        int **l_7 = &l_6;
        (*l_7) = l_6;
    }
    for (g_3 = 26; (g_3 != 22); g_3 = safe_sub_func_int8_t_s_s(g_3, 1))
    {
        int l_18 = 0x2F67D50FL;
        int *l_22 = &g_10;
        int *l_1607 = &g_553;
        int l_1635 = (-2L);
        int l_1666 = 0xC297572CL;
        int ***l_1679 = &g_440;
        for (g_10 = (-16); (g_10 <= (-25)); g_10 = safe_sub_func_uint64_t_u_u(g_10, 8))
        {
            for (g_14 = 17; (g_14 < 7); --g_14)
            {
                unsigned char l_17 = 7UL;
                if (l_17)
                    break;
                if (l_18)
                    break;
            }
        }
        (*l_22) |= (safe_add_func_uint32_t_u_u(l_21, (&g_10 == l_22)));
    }
    return (*l_1608);
}







static int * func_23(char p_24, unsigned p_25, int ** p_26)
{
    unsigned l_29 = 0UL;
    int *l_335 = (void*)0;
    int **l_334 = &l_335;
    int l_582 = (-3L);
    int l_589 = 6L;
    int l_614 = 0xCD99A783L;
    int l_623 = (-1L);
    int l_670 = 1L;
    int l_673 = 0xA458A64CL;
    int l_693 = 0x3C97DC50L;
    int l_712 = 0L;
    int *l_738 = (void*)0;
    int l_826 = 0xEFE63921L;
    int l_827 = (-1L);
    unsigned char l_834 = 252UL;
    struct S0 **l_839 = &g_75;
    unsigned short l_842 = 0x4413L;
    int l_1285 = 0L;
    int l_1308 = 1L;
    int l_1343 = 6L;
    int l_1345 = 3L;
    unsigned l_1409 = 0x92B3935BL;
    if ((safe_add_func_int8_t_s_s(l_29, 0x62L)))
    {
        int *l_38 = (void*)0;
        int l_336 = (-6L);
        unsigned short l_550 = 1UL;
        int *l_551 = (void*)0;
        int *l_552 = &g_553;
        (*l_552) ^= (safe_sub_func_uint8_t_u_u(((((safe_sub_func_uint16_t_u_u((!func_34(l_38, p_25, func_39(g_42, func_44(p_24, func_49(((safe_sub_func_int8_t_s_s((func_55(func_61(func_63(p_24, &g_43)), g_14, p_25, g_42, g_14) != p_25), 0UL)) >= 3UL), l_334, l_336), p_25, l_334)))), l_550)) & p_24) >= p_25) | 3L), 0xB0L));
        (**p_26) = ((*l_552) == (&g_42 != &g_440));
        for (p_25 = 15; (p_25 <= 30); p_25++)
        {
            int *l_558 = &g_14;
            int *l_559 = &g_10;
            int *l_560 = &g_10;
            int *l_561 = (void*)0;
            int *l_562 = (void*)0;
            int *l_563 = &g_553;
            int *l_564 = &g_553;
            int *l_565 = &g_553;
            int *l_566 = &g_553;
            int *l_567 = (void*)0;
            int *l_568 = &l_336;
            int *l_569 = (void*)0;
            int *l_570 = &l_336;
            int *l_571 = &g_10;
            int *l_572 = &g_14;
            int *l_573 = &g_553;
            int *l_574 = &l_336;
            int *l_575 = &g_10;
            int *l_576 = &g_10;
            int *l_577 = &g_553;
            int *l_578 = &g_10;
            int *l_579 = &g_553;
            int l_580 = 1L;
            int *l_581 = (void*)0;
            int *l_583 = &l_580;
            int *l_585 = &l_580;
            int *l_586 = &g_14;
            int *l_587 = &g_14;
            int *l_588 = &g_553;
            int *l_590 = &l_580;
            int *l_591 = &l_582;
            int l_592 = 0xDFDA9B5FL;
            int *l_593 = &l_592;
            int *l_594 = (void*)0;
            int *l_595 = &g_553;
            int *l_596 = &g_14;
            int l_597 = 0xCFA903B3L;
            int *l_598 = &g_10;
            int *l_599 = (void*)0;
            int *l_600 = &g_553;
            int *l_601 = (void*)0;
            int *l_602 = (void*)0;
            int *l_603 = &g_553;
            int *l_604 = &l_597;
            int *l_605 = &l_597;
            int *l_606 = &g_10;
            int *l_607 = &g_10;
            int *l_608 = &l_336;
            int *l_609 = &l_582;
            int *l_610 = &l_589;
            int *l_611 = &l_582;
            int l_612 = 0xD9A8A873L;
            int *l_613 = (void*)0;
            int *l_615 = &l_612;
            int *l_616 = &l_589;
            int *l_617 = &l_612;
            int *l_618 = &l_580;
            int *l_619 = &g_553;
            int *l_620 = &l_612;
            int *l_621 = &g_14;
            int *l_622 = &l_589;
            int *l_625 = &l_336;
            int *l_626 = &l_614;
            int *l_627 = &l_589;
            int *l_628 = &l_592;
            int *l_629 = (void*)0;
            int *l_630 = &l_589;
            int *l_631 = &l_597;
            int *l_632 = (void*)0;
            int *l_633 = &l_623;
            int *l_634 = &l_336;
            int *l_635 = (void*)0;
            int l_637 = 0x6D34A9AFL;
            g_638--;
        }
    }
    else
    {
        int *l_641 = &l_582;
        int *l_642 = &l_623;
        int *l_643 = &l_582;
        int *l_644 = &g_14;
        int *l_645 = &g_10;
        int l_646 = 0xDAACF49DL;
        int *l_647 = &l_614;
        int *l_648 = &l_589;
        int *l_649 = &l_582;
        int *l_650 = &l_646;
        int *l_651 = &l_623;
        int *l_652 = &l_623;
        int *l_653 = (void*)0;
        int l_654 = 0xBAE7E86BL;
        int *l_655 = &g_10;
        int *l_656 = &l_589;
        int *l_657 = (void*)0;
        int *l_658 = &g_553;
        int l_659 = 5L;
        int *l_660 = (void*)0;
        int *l_661 = &l_646;
        int *l_662 = &l_623;
        int *l_663 = &l_659;
        int *l_664 = (void*)0;
        int *l_665 = (void*)0;
        int *l_666 = (void*)0;
        int *l_667 = &g_10;
        int *l_668 = &l_582;
        int *l_669 = &g_553;
        int *l_671 = &g_553;
        int *l_672 = &g_10;
        int *l_674 = (void*)0;
        int *l_675 = &l_659;
        int *l_676 = &l_614;
        int *l_677 = &g_10;
        int *l_678 = &l_673;
        int *l_679 = &g_553;
        int *l_680 = (void*)0;
        int *l_681 = (void*)0;
        int *l_682 = (void*)0;
        int *l_683 = &l_670;
        int l_684 = 0xF77C82EAL;
        int *l_685 = &g_10;
        int *l_686 = &l_614;
        int *l_687 = (void*)0;
        int *l_688 = (void*)0;
        int *l_689 = &g_10;
        int *l_690 = (void*)0;
        int *l_691 = &g_10;
        int *l_692 = &l_646;
        int *l_694 = (void*)0;
        int *l_695 = &l_670;
        int *l_696 = &g_14;
        int *l_697 = &g_14;
        int *l_698 = &l_582;
        int *l_699 = &l_654;
        int *l_700 = &l_670;
        int *l_701 = &l_684;
        int *l_702 = &l_693;
        int *l_703 = &g_553;
        int *l_704 = &l_589;
        int *l_705 = &l_670;
        int *l_706 = &l_693;
        int *l_707 = &l_659;
        int *l_708 = &l_684;
        int *l_709 = &g_14;
        int l_710 = (-6L);
        int *l_711 = &l_623;
        int *l_713 = &g_14;
        int *l_714 = &g_553;
        int *l_715 = &l_670;
        int *l_716 = &l_589;
        int *l_717 = &l_589;
        int *l_718 = &l_693;
        int *l_719 = &l_646;
        int l_720 = 0x66C921BAL;
        int *l_721 = (void*)0;
        int *l_722 = &l_659;
        int *l_723 = &g_10;
        int *l_724 = &l_614;
        int *l_725 = &g_14;
        int *l_726 = &g_553;
        int *l_727 = &l_614;
        int *l_728 = &l_623;
        int *l_729 = (void*)0;
        int *l_730 = &l_673;
        int *l_731 = &l_670;
        int *l_732 = (void*)0;
        struct S0 *l_736 = &g_181;
        struct S0 *l_737 = &g_181;
        unsigned l_762 = 0x9CD658C9L;
        short l_798 = 1L;
        g_733--;
        l_737 = l_736;
        if ((**p_26))
        {
            return l_738;
        }
        else
        {
            int l_757 = 3L;
            int l_797 = 0x5E85FD5CL;
            int l_799 = 0x630AD938L;
            int **l_817 = &l_335;
            for (g_167 = 0; (g_167 >= 18); g_167 = safe_add_func_uint32_t_u_u(g_167, 3))
            {
                for (g_227 = (-4); (g_227 <= 46); ++g_227)
                {
                    if ((**p_26))
                        break;
                }
            }
lbl_763:
            (*l_736) = (*g_75);
            if (((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((0x19D4712D92A50D18LL ^ p_25), g_13)), ((+func_34((*p_26), p_24, (*l_334))) > (safe_mul_func_uint16_t_u_u(g_172, ((safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((p_25 ^ 0L), g_3)) ^ 6UL), 1UL)) > l_757), g_758)), g_70.f0)) >= (-1L))))))) >= 18446744073709551615UL))
            {
                return (*p_26);
            }
            else
            {
                long long l_761 = 0xCF8B93748A7D6011LL;
                unsigned l_769 = 0xDC7A7DE5L;
                char l_791 = 1L;
                int l_796 = (-1L);
                if ((safe_add_func_int8_t_s_s(((((65534UL & g_3) <= 0xEF3CL) || g_14) && l_761), (0xD7AD1C55L != (0x60B452CE8F852F59LL != func_34((*l_334), l_762, (*p_26)))))))
                {
                    (*l_707) ^= (**p_26);
                    if (g_172)
                        goto lbl_764;
                    (*l_692) &= 0x7104FF23L;
lbl_764:
                    if (l_29)
                        goto lbl_763;
                    (*l_678) ^= func_34(func_61(func_63(p_25, p_26)), g_3, (*p_26));
                }
                else
                {
                    unsigned l_776 = 0x9BB8CC1EL;
                    int l_777 = 0xD5DAD6D6L;
                    int **l_795 = &l_335;
                    (*p_26) = (*g_42);
                    (*l_334) = (void*)0;
                    (*l_724) |= (((g_481.f2 > ((safe_add_func_int32_t_s_s((p_25 && (safe_sub_func_uint64_t_u_u((((l_769 == ((safe_mod_func_int16_t_s_s(((0x43L & g_14) && (safe_mul_func_int8_t_s_s(((p_24 == (p_24 != (safe_sub_func_uint8_t_u_u((g_10 | 0xBB7210143FD5F553LL), p_24)))) != l_776), p_25))), 0xB3F7L)) ^ (*l_699))) & 0x9D2ECFFAL) < 1UL), g_10))), l_777)) & 1L)) ^ l_761) >= g_10);
                    for (g_733 = 0; (g_733 != 31); g_733 = safe_add_func_uint8_t_u_u(g_733, 6))
                    {
                        long long l_788 = 0x5E1BA66277D689E2LL;
                        int *l_794 = &g_3;
                        (*l_697) |= (safe_sub_func_int16_t_s_s((1L & ((~0L) || p_24)), ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(l_757, p_25)), (((safe_mod_func_uint32_t_u_u((l_788 | (safe_sub_func_uint32_t_u_u(((void*)0 == &l_334), (((0x43L < 0xD0L) || g_2) && l_761)))), 0x6A248AD6L)) || l_791) > g_167))) >= p_24)));
                        (*l_683) &= l_757;
                        (*p_26) = (*p_26);
                        (*l_649) = (func_44((safe_rshift_func_int8_t_s_s(func_44(p_25, l_794, g_177.f1, &g_43), 7)), (*g_42), l_757, l_795) > p_24);
                    }
                }
                g_801--;
                for (g_10 = 0; (g_10 < 3); g_10++)
                {
                    int *l_810 = &l_757;
                    (*l_696) = (safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(func_34(l_810, func_55(func_39(func_63((safe_add_func_int64_t_s_s((((*l_810) & g_419) ^ 1UL), ((0x86F1L != p_24) == (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((p_25 || (-1L)) ^ (func_34((*p_26), p_24, (*p_26)) & l_791)), g_10)), 65527UL))))), p_26), g_14), p_25, p_25, l_817, g_584), (*l_334)), g_427)), 15));
                    if (((*p_26) == (*p_26)))
                    {
                        unsigned char l_818 = 0x5EL;
                        char l_821 = (-5L);
                        l_818--;
                        if (l_818)
                            break;
                        (*l_704) = (((void*)0 != &l_334) < (p_24 <= func_55((*p_26), p_24, ((void*)0 == (*g_342)), &g_43, p_24)));
                        (*l_683) = l_821;
                    }
                    else
                    {
                        unsigned char l_822 = 0x6FL;
                        int *l_825 = (void*)0;
                        ++l_822;
                        (*l_334) = (*l_817);
                        return l_825;
                    }
                }
            }
        }
        (*l_663) = ((((func_55(func_49(l_826, p_26, l_827), g_800, g_553, &g_43, (((safe_add_func_int32_t_s_s(p_24, (0x1B3EL ^ 1L))) < (-1L)) | g_800)) | p_24) < g_181.f0) < p_24) & p_24);
    }
    if ((&g_75 != &g_75))
    {
        int *l_840 = (void*)0;
        unsigned l_841 = 0x7AF16294L;
        struct S0 *l_848 = &g_481;
        int l_895 = 0L;
        char l_896 = 0xC0L;
        int l_948 = 0x49FBD58DL;
        int l_950 = 7L;
        int l_956 = (-6L);
        int l_958 = 8L;
        char l_977 = 0x7FL;
        int l_998 = 0L;
        int l_1008 = 1L;
        unsigned l_1061 = 0x42D5FE88L;
        long long l_1229 = 0L;
        int l_1305 = 0x44A4F9BCL;
        int l_1307 = 0x923D0007L;
        int l_1312 = (-6L);
        int l_1333 = 0x62789262L;
        for (g_14 = 14; (g_14 == (-10)); g_14--)
        {
            int l_832 = 0x098CC03FL;
            (*g_833) &= l_832;
        }
        if (l_834)
        {
            unsigned long long l_837 = 0x311C4F684961C327LL;
            int *l_838 = (void*)0;
            int *l_843 = &l_670;
            int l_857 = 0x80988662L;
            int l_910 = 0L;
            int l_920 = 0L;
            int l_933 = (-1L);
            int l_972 = 8L;
            int l_1003 = 1L;
            (*l_843) = ((safe_lshift_func_uint8_t_u_s(l_842, 7)) || g_70.f2);
            (*g_833) &= (safe_mod_func_int16_t_s_s(p_24, func_34((*p_26), (safe_rshift_func_int8_t_s_s(p_24, 5)), func_39(p_26, (&l_843 != (void*)0)))));
            (*l_839) = l_848;
            for (l_712 = 25; (l_712 > 28); l_712 = safe_add_func_uint32_t_u_u(l_712, 9))
            {
                long long l_867 = 0xC694FDEB0F3B1CA1LL;
                int l_892 = 0x68237D19L;
                int l_927 = (-6L);
                int l_949 = 0L;
                int l_952 = 0L;
                int l_976 = 8L;
                if ((p_25 && 0x630AA0883D9349DFLL))
                {
                    int *l_851 = &l_589;
                    int *l_852 = &l_693;
                    int *l_853 = &l_673;
                    int *l_854 = &l_673;
                    int *l_855 = (void*)0;
                    int *l_856 = &l_614;
                    int *l_858 = &l_589;
                    int *l_859 = &l_693;
                    int *l_860 = &l_623;
                    int *l_861 = &l_623;
                    int *l_862 = &l_623;
                    int *l_863 = &g_553;
                    int *l_864 = &l_589;
                    int *l_865 = &l_670;
                    int *l_866 = &g_800;
                    int *l_868 = &l_614;
                    int *l_869 = &g_14;
                    int *l_870 = &l_670;
                    int *l_871 = &l_623;
                    int *l_872 = &l_827;
                    int *l_873 = &g_553;
                    int *l_874 = &l_693;
                    int *l_875 = &l_614;
                    int *l_876 = &g_14;
                    int *l_877 = &l_857;
                    int *l_878 = &l_589;
                    int *l_879 = (void*)0;
                    int *l_880 = (void*)0;
                    int *l_881 = &l_827;
                    int *l_882 = &g_553;
                    int *l_883 = (void*)0;
                    int *l_884 = &g_10;
                    int *l_885 = &l_589;
                    int *l_886 = &l_582;
                    int *l_887 = (void*)0;
                    int *l_888 = &l_623;
                    int *l_889 = &l_693;
                    int *l_890 = &g_800;
                    int *l_891 = &l_857;
                    int *l_893 = &l_614;
                    int *l_894 = &g_10;
                    int *l_897 = (void*)0;
                    int *l_898 = (void*)0;
                    int *l_899 = &l_673;
                    int *l_900 = &l_589;
                    int *l_901 = (void*)0;
                    int *l_902 = &l_623;
                    int *l_903 = &l_693;
                    int l_904 = 0x04589D9BL;
                    int *l_905 = &g_14;
                    int *l_906 = &l_827;
                    int *l_907 = (void*)0;
                    int l_908 = 0L;
                    int *l_909 = &l_673;
                    int *l_911 = &l_895;
                    int *l_912 = &l_910;
                    int *l_913 = &l_589;
                    int *l_914 = &l_614;
                    int *l_915 = (void*)0;
                    int *l_916 = &l_904;
                    int *l_917 = &l_670;
                    int *l_918 = (void*)0;
                    int *l_919 = (void*)0;
                    int *l_921 = &l_920;
                    int *l_922 = &l_857;
                    int *l_923 = &l_892;
                    int *l_924 = &l_827;
                    int *l_925 = &l_623;
                    int *l_926 = &l_582;
                    int *l_928 = &l_589;
                    int *l_929 = &l_895;
                    int *l_930 = &l_920;
                    int *l_931 = &g_10;
                    int *l_932 = (void*)0;
                    int *l_934 = &l_927;
                    int *l_935 = &l_857;
                    int *l_936 = &l_910;
                    int *l_937 = &l_673;
                    int *l_938 = &l_827;
                    int *l_939 = &l_920;
                    int *l_940 = &l_904;
                    int *l_941 = (void*)0;
                    int *l_942 = &l_582;
                    int *l_943 = &l_904;
                    int *l_944 = &g_14;
                    int *l_945 = &l_857;
                    int *l_946 = &l_673;
                    int *l_947 = &l_614;
                    int l_951 = 0x16E3B149L;
                    int *l_953 = &l_693;
                    int *l_954 = &l_950;
                    int *l_955 = &l_614;
                    int *l_957 = &l_920;
                    int *l_959 = &l_892;
                    int *l_960 = (void*)0;
                    int *l_961 = (void*)0;
                    int *l_962 = &l_908;
                    int *l_963 = &l_951;
                    int *l_964 = (void*)0;
                    int *l_965 = &l_582;
                    int *l_966 = &l_623;
                    int *l_967 = &l_949;
                    int *l_968 = &l_673;
                    int *l_969 = &l_673;
                    int *l_970 = &l_949;
                    int *l_971 = &l_933;
                    int *l_973 = &l_623;
                    int *l_974 = (void*)0;
                    int *l_975 = &l_908;
                    int *l_978 = &l_951;
                    int *l_979 = (void*)0;
                    int *l_980 = &l_972;
                    int *l_981 = &l_910;
                    int *l_982 = &l_589;
                    int *l_983 = &l_949;
                    int *l_984 = (void*)0;
                    int *l_985 = &l_827;
                    int *l_986 = &l_693;
                    int *l_987 = (void*)0;
                    int *l_988 = &l_589;
                    int *l_989 = &g_10;
                    int *l_990 = &l_948;
                    int *l_991 = &l_933;
                    int *l_992 = (void*)0;
                    int *l_993 = &g_10;
                    int *l_994 = &l_951;
                    int *l_995 = &l_857;
                    int l_996 = (-9L);
                    int *l_997 = &l_958;
                    int *l_999 = &l_623;
                    int *l_1000 = &l_895;
                    int *l_1001 = (void*)0;
                    int *l_1002 = &l_582;
                    int *l_1004 = &l_614;
                    int *l_1005 = &l_614;
                    int *l_1006 = &l_976;
                    int *l_1007 = &l_904;
                    int *l_1009 = &l_589;
                    int *l_1010 = &l_826;
                    int *l_1011 = &l_956;
                    int *l_1012 = &l_895;
                    int *l_1013 = (void*)0;
                    int *l_1014 = &l_670;
                    int *l_1015 = &l_582;
                    int *l_1016 = &l_693;
                    int *l_1017 = (void*)0;
                    int *l_1018 = (void*)0;
                    int *l_1019 = &l_908;
                    int *l_1020 = &l_614;
                    int *l_1021 = &l_920;
                    int *l_1022 = (void*)0;
                    int *l_1023 = &l_614;
                    int *l_1024 = &l_956;
                    int *l_1025 = &l_857;
                    int *l_1026 = &l_950;
                    int *l_1027 = &l_948;
                    int *l_1028 = &l_972;
                    int *l_1031 = &l_582;
                    int *l_1032 = &l_857;
                    int *l_1033 = &g_10;
                    int *l_1034 = &l_857;
                    int *l_1035 = &l_910;
                    int *l_1036 = (void*)0;
                    int *l_1037 = &l_670;
                    int *l_1038 = (void*)0;
                    int *l_1039 = &l_670;
                    int *l_1040 = &l_614;
                    int *l_1041 = &l_892;
                    int *l_1042 = &g_800;
                    int *l_1043 = &l_895;
                    int *l_1044 = &l_927;
                    --g_1045;
                    if ((g_181.f2 > 1UL))
                    {
                        (*l_862) = l_952;
                        (*p_26) = (*p_26);
                    }
                    else
                    {
                        int ***l_1048 = &g_183;
                        if ((*g_833))
                            break;
                        (*l_1048) = p_26;
                        if (p_24)
                            break;
                    }
                    if ((l_949 | p_24))
                    {
                        unsigned short l_1049 = 0x9BA0L;
                        l_1049++;
                    }
                    else
                    {
                        if ((*l_934))
                            break;
                        (*l_929) = (*g_833);
                    }
                    if ((*g_833))
                        break;
                }
                else
                {
                    for (g_733 = (-18); (g_733 >= 30); g_733 = safe_add_func_int16_t_s_s(g_733, 4))
                    {
                        return (*p_26);
                    }
                    if (l_927)
                        continue;
                    for (l_826 = 0; (l_826 > (-3)); --l_826)
                    {
                        int *l_1057 = &l_1008;
                        (*g_75) = g_1056;
                        (*l_848) = (**g_74);
                        (*g_440) = (void*)0;
                        (*g_440) = l_1057;
                    }
                    (*g_74) = (*g_342);
                }
            }
        }
        else
        {
            unsigned l_1062 = 0x99ED4B8BL;
            struct S0 *l_1069 = &g_1070;
            int l_1087 = 0x8B54B96FL;
            int *l_1088 = &l_958;
            int l_1089 = 0x578D276FL;
            int *l_1090 = &g_553;
            int *l_1091 = &l_712;
            int *l_1092 = &g_553;
            int l_1093 = 0L;
            int *l_1094 = (void*)0;
            int *l_1095 = &l_948;
            int *l_1096 = &l_673;
            int *l_1097 = &g_553;
            int *l_1098 = &l_826;
            int *l_1099 = &l_1093;
            int *l_1100 = &l_895;
            int *l_1101 = &l_589;
            int *l_1102 = &g_14;
            int *l_1103 = &l_827;
            int *l_1104 = &l_950;
            int *l_1105 = &l_948;
            int *l_1106 = &l_998;
            int *l_1107 = &l_614;
            int *l_1108 = &l_998;
            int *l_1109 = &l_895;
            int *l_1110 = (void*)0;
            int *l_1111 = &l_956;
            int *l_1112 = &l_1008;
            int *l_1113 = &l_673;
            int *l_1114 = &l_948;
            int *l_1115 = &g_553;
            int *l_1116 = &l_826;
            int *l_1117 = (void*)0;
            int *l_1118 = &l_670;
            int l_1119 = 0xA3F61947L;
            int l_1120 = 0xEE94C0DCL;
            int *l_1121 = &l_1008;
            int *l_1122 = &l_956;
            int *l_1123 = &l_1008;
            int *l_1124 = &l_948;
            int *l_1125 = &g_10;
            int *l_1126 = &l_1093;
            int *l_1127 = &l_1008;
            int *l_1128 = (void*)0;
            int *l_1129 = &l_958;
            int *l_1130 = &l_956;
            int *l_1131 = &l_1087;
            int *l_1132 = &l_1087;
            int *l_1133 = (void*)0;
            int *l_1134 = &l_950;
            int *l_1135 = &l_998;
            int *l_1136 = (void*)0;
            int *l_1137 = (void*)0;
            int l_1138 = 4L;
            int *l_1139 = (void*)0;
            int *l_1140 = (void*)0;
            int *l_1141 = &l_1120;
            int *l_1142 = &l_1120;
            int *l_1143 = (void*)0;
            int l_1144 = 0x6CE4FC17L;
            int *l_1145 = (void*)0;
            int *l_1146 = &l_1087;
            int *l_1147 = &l_998;
            int *l_1148 = &g_10;
            int *l_1149 = &l_693;
            int *l_1150 = &l_827;
            int *l_1151 = (void*)0;
            int *l_1152 = (void*)0;
            int *l_1153 = (void*)0;
            int *l_1154 = &g_14;
            int *l_1155 = &g_10;
            int *l_1156 = &l_673;
            int *l_1157 = (void*)0;
            int *l_1158 = &l_958;
            int *l_1159 = &g_14;
            int *l_1160 = &g_553;
            int *l_1161 = &l_1144;
            int *l_1162 = &g_14;
            int *l_1163 = &g_800;
            int *l_1164 = &l_712;
            int *l_1165 = &l_958;
            int *l_1166 = &l_958;
            int *l_1167 = &l_673;
            int *l_1168 = (void*)0;
            int *l_1169 = &l_614;
            int *l_1170 = &g_10;
            int *l_1171 = (void*)0;
            int l_1172 = (-5L);
            int *l_1173 = &l_895;
            int *l_1174 = (void*)0;
            int *l_1175 = &g_10;
            int *l_1176 = &l_712;
            int *l_1177 = &l_1008;
            int *l_1178 = &g_14;
            int *l_1179 = &l_958;
            int *l_1180 = &l_1144;
            int *l_1181 = &l_1093;
            int *l_1182 = &l_948;
            int *l_1183 = &l_623;
            int *l_1184 = &l_950;
            int *l_1185 = &l_958;
            int *l_1186 = &g_800;
            int *l_1187 = &g_553;
            int l_1188 = (-9L);
            int *l_1189 = &l_623;
            int *l_1190 = &l_1138;
            int *l_1191 = &l_1120;
            int *l_1192 = &g_14;
            int *l_1193 = &g_553;
            int *l_1194 = &l_1008;
            int *l_1195 = &l_948;
            int *l_1196 = &g_800;
            int *l_1197 = (void*)0;
            int *l_1198 = &l_895;
            int *l_1199 = &l_998;
            int *l_1200 = (void*)0;
            int *l_1201 = &l_582;
            int l_1202 = (-5L);
            int *l_1203 = &l_693;
            int *l_1204 = (void*)0;
            int l_1205 = 0xE7325AF5L;
            long long l_1206 = 0xD86AFA23F84AE377LL;
            int *l_1207 = (void*)0;
            int *l_1208 = &l_712;
            int *l_1209 = (void*)0;
            int *l_1210 = &l_1172;
            int *l_1211 = &g_14;
            int *l_1212 = &l_958;
            int *l_1213 = &l_1120;
            int *l_1214 = (void*)0;
            int *l_1215 = (void*)0;
            int *l_1216 = &l_614;
            int *l_1217 = &l_693;
            int *l_1218 = &l_693;
            int *l_1219 = &l_1093;
            int *l_1220 = &l_1120;
            int *l_1221 = &l_1138;
            int *l_1222 = &l_1087;
            int *l_1223 = (void*)0;
            int *l_1224 = &l_589;
            int *l_1225 = &l_673;
            unsigned short l_1226 = 65526UL;
            int *l_1230 = &g_14;
            int *l_1231 = &l_614;
            int *l_1232 = (void*)0;
            int *l_1233 = &g_800;
            int *l_1234 = &g_800;
            int *l_1235 = &l_673;
            int *l_1236 = &l_1087;
            int *l_1237 = &l_1202;
            int *l_1238 = &l_673;
            int *l_1239 = &g_10;
            int *l_1240 = &g_553;
            int *l_1241 = &l_1138;
            int *l_1242 = (void*)0;
            int *l_1243 = &l_1087;
            int *l_1244 = (void*)0;
            int *l_1245 = &l_1202;
            int *l_1246 = (void*)0;
            int *l_1247 = (void*)0;
            int *l_1248 = (void*)0;
            int *l_1249 = &g_14;
            int *l_1250 = &l_712;
            int *l_1251 = (void*)0;
            int *l_1252 = (void*)0;
            int *l_1253 = &l_1119;
            int *l_1254 = &l_673;
            int *l_1255 = &l_1087;
            int *l_1256 = &g_800;
            int *l_1257 = &l_895;
            int *l_1258 = &g_10;
            int *l_1259 = &l_998;
            int *l_1260 = &l_827;
            int *l_1261 = &l_998;
            int *l_1262 = &l_623;
            int *l_1263 = &l_1093;
            int *l_1264 = &l_826;
            int *l_1265 = &l_1087;
            int *l_1266 = (void*)0;
            short l_1267 = 7L;
            int *l_1268 = (void*)0;
            int *l_1269 = (void*)0;
            int *l_1270 = (void*)0;
            int *l_1271 = &g_14;
            int *l_1272 = &l_1138;
            int *l_1273 = (void*)0;
            int *l_1274 = &l_1144;
            int *l_1275 = &l_623;
            int *l_1276 = &l_950;
            int *l_1277 = &l_948;
            int *l_1278 = &l_1144;
            int *l_1279 = &g_10;
            int *l_1280 = &l_1008;
            int *l_1281 = &l_1087;
            int *l_1282 = (void*)0;
            int *l_1283 = &l_895;
            int *l_1284 = &l_712;
            int *l_1286 = &l_1205;
            int *l_1287 = &l_826;
            int *l_1288 = (void*)0;
            int *l_1289 = &l_589;
            int *l_1290 = &l_1202;
            int *l_1291 = &l_826;
            int *l_1292 = &l_582;
            int *l_1293 = &l_582;
            int *l_1294 = (void*)0;
            int *l_1295 = &l_1093;
            int *l_1296 = (void*)0;
            int *l_1297 = &l_958;
            int *l_1298 = &l_1285;
            int *l_1299 = &l_1119;
            int *l_1300 = &l_693;
            int *l_1301 = &l_826;
            int *l_1302 = &l_614;
            int *l_1303 = (void*)0;
            int *l_1304 = &g_553;
            int *l_1306 = &l_1305;
            int *l_1309 = &l_623;
            int *l_1310 = &l_673;
            int *l_1311 = (void*)0;
            int *l_1313 = &l_1307;
            int *l_1314 = &g_14;
            int *l_1315 = &l_1285;
            int *l_1316 = &l_950;
            int *l_1317 = &l_1093;
            int *l_1318 = &l_1205;
            int *l_1319 = &l_1205;
            int *l_1320 = (void*)0;
            int *l_1321 = &l_1087;
            int *l_1322 = &l_582;
            int *l_1323 = (void*)0;
            int *l_1324 = (void*)0;
            int *l_1325 = &l_1008;
            int *l_1326 = &l_950;
            int *l_1327 = &g_10;
            int *l_1328 = &l_582;
            int *l_1329 = &l_956;
            int *l_1330 = &l_614;
            int *l_1331 = &l_1305;
            int *l_1332 = &l_1119;
            int *l_1334 = &l_1093;
            int *l_1335 = &l_1120;
            int *l_1336 = &l_1144;
            int *l_1337 = (void*)0;
            int *l_1338 = &l_958;
            int *l_1339 = &l_1093;
            int *l_1340 = &l_670;
            int *l_1341 = &l_614;
            int *l_1342 = &l_670;
            int *l_1344 = (void*)0;
            int *l_1346 = (void*)0;
            int *l_1347 = &l_589;
            int *l_1348 = (void*)0;
            int *l_1349 = &l_1202;
            int *l_1350 = &l_1312;
            int *l_1351 = &l_1312;
            int *l_1352 = &l_1144;
            int *l_1353 = &l_1172;
            int *l_1354 = &l_1202;
            int *l_1355 = &l_956;
            int *l_1356 = (void*)0;
            int *l_1357 = &l_582;
            int *l_1358 = &l_589;
            int *l_1359 = &l_895;
            int *l_1360 = &l_1345;
            for (l_895 = 0; (l_895 == (-8)); l_895--)
            {
                if (p_25)
                {
                    unsigned short l_1060 = 0x7C7DL;
                    l_1060 |= ((void*)0 == p_26);
                    l_1061 = (*g_833);
                    --l_1062;
                }
                else
                {
                    unsigned l_1085 = 18446744073709551607UL;
                    for (g_553 = 0; (g_553 < 21); g_553 = safe_add_func_uint8_t_u_u(g_553, 5))
                    {
                        unsigned l_1077 = 1UL;
                        int *l_1080 = &l_956;
                        (*g_833) = (g_14 & (safe_rshift_func_uint8_t_u_u(func_55(func_39((*g_182), (((void*)0 == l_1069) | ((safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(((l_1077 < (+(safe_sub_func_uint32_t_u_u(g_1056.f0, ((&l_950 == l_1080) >= ((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((-10L), 7)), g_1029)) >= 6L)))))) && g_172), g_167)), g_427)) > p_25), l_1085)) < 0x4D93L))), l_1062, g_427, g_440, p_24), 6)));
                    }
                }
                (*l_1069) = g_1086;
            }
            l_1226--;
            ++g_1361;
        }
    }
    else
    {
        unsigned l_1364 = 4294967295UL;
        int *l_1376 = &l_1343;
        int l_1490 = (-6L);
        int l_1495 = 0L;
        int l_1522 = 0x8B2C3A6CL;
        unsigned long long l_1581 = 0xE1CB3C12AC9B3DA4LL;
        short l_1592 = 0x5FEBL;
        if ((l_1364 != g_219))
        {
            int l_1373 = 5L;
            int l_1382 = 3L;
            for (l_1364 = (-14); (l_1364 <= 24); ++l_1364)
            {
                unsigned l_1381 = 0x9D3B9253L;
                (*g_833) = func_34(func_39((*g_182), p_24), (safe_rshift_func_int16_t_s_s((-1L), ((g_440 == g_183) || g_14))), (*p_26));
                l_1382 |= (safe_sub_func_uint32_t_u_u((p_24 | (!(safe_mul_func_int16_t_s_s((-7L), l_1373)))), (((l_1364 < ((safe_sub_func_int32_t_s_s((p_25 == ((*p_26) == l_1376)), (safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((g_3 || ((~((*l_1376) & 255UL)) & g_758)) <= l_1381), 0xBFF3L)), g_1030)))) && g_70.f2)) < g_3) == 0xFAL)));
            }
        }
        else
        {
            unsigned long long l_1383 = 0x8FCD13F8519E9913LL;
            int l_1386 = (-9L);
            unsigned char l_1404 = 246UL;
            int l_1540 = 2L;
            l_1386 |= ((-8L) <= (l_1383 | ((safe_lshift_func_int8_t_s_s(p_25, 6)) >= g_227)));
            (*l_1376) = (&g_3 == (void*)0);
            if ((safe_mul_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s((((safe_unary_minus_func_uint32_t_u(func_34((*p_26), ((void*)0 == &p_26), &l_1386))) ^ (safe_unary_minus_func_int8_t_s((l_1386 | p_24)))) ^ 0x2A3AL), (safe_mod_func_int8_t_s_s((*l_1376), g_219)))) ^ g_800) & g_733), p_24)))
            {
                int *l_1399 = &l_1345;
                int l_1412 = 3L;
                int l_1459 = 0L;
                (*l_1399) |= (((safe_add_func_uint32_t_u_u((safe_mul_func_int64_t_s_s(func_34(&l_1386, g_584, l_1399), ((g_1056.f0 || g_10) != (((((g_70.f0 == ((void*)0 == p_26)) | 6UL) | (*l_1376)) & p_24) & g_624)))), g_1070.f0)) != (*l_1376)) > 0xA2DBC4C0D3ADB084LL);
                for (l_1364 = 29; (l_1364 >= 49); l_1364 = safe_add_func_uint64_t_u_u(l_1364, 4))
                {
                    unsigned l_1477 = 0x132DB489L;
                    if ((safe_mod_func_uint16_t_u_u(l_1404, (safe_sub_func_int32_t_s_s(p_25, (((((((void*)0 != l_839) | p_24) >= p_25) > ((*g_342) == (void*)0)) < (((safe_rshift_func_uint8_t_u_s(((void*)0 != &g_75), 0)) & 0x33466D0E94B56581LL) <= 0xEEF64BCCL)) < g_1070.f0))))))
                    {
                        --l_1409;
                        (*l_1399) = func_34(l_1399, (((*g_342) != (void*)0) && 0x38CEB85BF3DE9836LL), &g_800);
                    }
                    else
                    {
                        int *l_1413 = &g_14;
                        int *l_1414 = &l_1386;
                        int *l_1415 = (void*)0;
                        int *l_1416 = (void*)0;
                        int *l_1417 = &l_1343;
                        int *l_1418 = &l_826;
                        int *l_1419 = &l_1308;
                        int *l_1420 = &l_693;
                        int *l_1421 = &l_827;
                        int *l_1422 = &g_14;
                        int *l_1423 = &l_712;
                        int *l_1424 = (void*)0;
                        int *l_1425 = &l_1343;
                        int *l_1426 = &l_1308;
                        int *l_1427 = &l_1308;
                        int *l_1428 = &l_673;
                        int *l_1429 = (void*)0;
                        int *l_1430 = &l_1386;
                        int *l_1431 = &l_1308;
                        int *l_1432 = &l_670;
                        int *l_1433 = &l_826;
                        int *l_1434 = &g_800;
                        int *l_1435 = &l_1386;
                        int *l_1436 = &l_712;
                        int *l_1437 = &l_1345;
                        int *l_1438 = &g_800;
                        int *l_1439 = &l_623;
                        int *l_1440 = &g_10;
                        int *l_1441 = &g_553;
                        int *l_1442 = (void*)0;
                        int *l_1443 = &l_826;
                        int *l_1444 = &l_589;
                        int *l_1445 = &l_623;
                        int *l_1446 = (void*)0;
                        int *l_1447 = &l_1412;
                        int *l_1448 = &g_14;
                        int *l_1449 = (void*)0;
                        int *l_1450 = &l_712;
                        int *l_1451 = &l_623;
                        int *l_1452 = &l_1386;
                        int *l_1453 = (void*)0;
                        int *l_1454 = &g_10;
                        int *l_1455 = &l_1386;
                        int *l_1456 = &l_693;
                        int l_1457 = 0xC58282E9L;
                        int *l_1458 = &l_1412;
                        int *l_1460 = &g_14;
                        int *l_1461 = &l_1343;
                        int l_1462 = (-8L);
                        int l_1463 = 0L;
                        int *l_1464 = &l_712;
                        int *l_1465 = &g_14;
                        int *l_1466 = &l_614;
                        int *l_1467 = &l_1386;
                        int *l_1468 = &l_1463;
                        int *l_1469 = (void*)0;
                        int *l_1470 = &l_582;
                        int *l_1471 = (void*)0;
                        int *l_1472 = (void*)0;
                        int *l_1473 = &l_693;
                        int *l_1474 = (void*)0;
                        int *l_1475 = &l_1459;
                        int *l_1476 = &l_1463;
                        --l_1477;
                        return (*p_26);
                    }
                    if ((safe_mul_func_int16_t_s_s(g_13, g_172)))
                    {
                        unsigned l_1482 = 0xC17AD9A4L;
                        (*l_1399) &= l_1482;
                    }
                    else
                    {
                        (*l_1376) |= 0x48C2E7B2L;
                    }
                    if (l_1477)
                        continue;
                }
                for (g_10 = 0; (g_10 == 26); g_10 = safe_add_func_uint32_t_u_u(g_10, 4))
                {
                    int *l_1489 = &l_827;
                    int *l_1491 = &l_1386;
                    int *l_1492 = &l_1412;
                    int *l_1493 = &l_712;
                    int *l_1494 = &l_1386;
                    int *l_1496 = &l_582;
                    int *l_1497 = &l_693;
                    int *l_1498 = &l_670;
                    int l_1499 = (-9L);
                    int *l_1500 = (void*)0;
                    int *l_1501 = &l_1459;
                    int *l_1502 = &l_614;
                    int *l_1503 = &l_1459;
                    int *l_1504 = &g_553;
                    int *l_1505 = &l_827;
                    int *l_1506 = &l_582;
                    int *l_1507 = &l_1490;
                    int *l_1508 = &l_673;
                    int *l_1509 = (void*)0;
                    int *l_1510 = &l_623;
                    int *l_1511 = (void*)0;
                    int *l_1512 = &l_1308;
                    int *l_1513 = &l_1345;
                    int *l_1514 = &l_693;
                    int *l_1515 = &l_712;
                    int *l_1516 = &l_826;
                    int *l_1517 = &l_1285;
                    int *l_1518 = (void*)0;
                    int *l_1519 = &l_673;
                    int *l_1520 = &g_800;
                    int *l_1521 = (void*)0;
                    int *l_1523 = (void*)0;
                    int *l_1524 = &l_693;
                    int *l_1525 = (void*)0;
                    int *l_1526 = &l_1308;
                    int *l_1527 = &l_1490;
                    int *l_1528 = &l_1345;
                    int *l_1529 = (void*)0;
                    int *l_1530 = &l_693;
                    int *l_1531 = &l_1285;
                    int *l_1532 = &l_1495;
                    int *l_1533 = &l_712;
                    int *l_1534 = &l_582;
                    int *l_1535 = &l_1412;
                    int *l_1536 = &l_582;
                    int *l_1537 = &l_712;
                    int *l_1538 = (void*)0;
                    int *l_1539 = &g_553;
                    int *l_1541 = &l_1522;
                    int *l_1542 = &l_1495;
                    int *l_1543 = &l_623;
                    int *l_1544 = &l_1285;
                    int *l_1545 = &l_1308;
                    int *l_1546 = &l_614;
                    int *l_1547 = (void*)0;
                    int *l_1548 = &l_1285;
                    int *l_1549 = &l_623;
                    int *l_1550 = &l_1495;
                    int *l_1551 = (void*)0;
                    int *l_1552 = &l_826;
                    int *l_1553 = &l_614;
                    int *l_1554 = &l_1345;
                    int *l_1555 = &l_1540;
                    int *l_1556 = (void*)0;
                    int *l_1557 = &l_589;
                    int *l_1558 = &l_693;
                    int *l_1559 = &l_614;
                    int *l_1560 = &l_1308;
                    int *l_1561 = &l_1522;
                    int *l_1562 = (void*)0;
                    int l_1563 = (-5L);
                    int *l_1564 = &l_693;
                    int *l_1565 = &l_1308;
                    int *l_1566 = &g_553;
                    int *l_1567 = &l_1459;
                    int *l_1568 = &l_1386;
                    int *l_1569 = &l_1495;
                    int *l_1570 = &l_1540;
                    for (g_758 = 22; (g_758 > 41); g_758++)
                    {
                        (*l_1376) = ((safe_lshift_func_uint8_t_u_u(p_25, 5)) && 0xCC5CL);
                        (*l_1376) &= (*l_1399);
                    }
                    g_1571++;
                }
            }
            else
            {
                int *l_1574 = (void*)0;
                unsigned long long l_1593 = 5UL;
                (*p_26) = l_1574;
                (*l_1376) = (safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s(l_1581, g_800)), 0x3BL)) ^ p_24), (safe_sub_func_int8_t_s_s(p_25, ((((safe_add_func_int32_t_s_s((((safe_add_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((void*)0 != &g_75), (safe_lshift_func_uint16_t_u_s(8UL, 3)))), (251UL == g_177.f1))) & (*l_1376)) < l_1404), l_1592)) & l_1593) != p_25) | g_167)))));
            }
        }
    }
    return (*p_26);
}







static unsigned short func_34(int * p_35, char p_36, int * p_37)
{
    int l_548 = (-1L);
    int l_549 = 0x7DD19256L;
    l_549 &= l_548;
    return l_549;
}







static int * func_39(int ** p_40, long long p_41)
{
    int l_478 = 0x18E8DE44L;
    struct S0 *l_480 = &g_481;
    int **l_482 = &g_43;
    int *l_484 = &l_478;
    int *l_485 = &g_14;
    int *l_486 = &g_10;
    int *l_487 = &l_478;
    int *l_488 = &l_478;
    int *l_489 = (void*)0;
    int *l_490 = (void*)0;
    int *l_491 = &g_14;
    int *l_492 = &g_14;
    int *l_493 = &l_478;
    int *l_494 = &l_478;
    int *l_495 = (void*)0;
    int *l_496 = &g_14;
    int *l_497 = &g_14;
    int *l_498 = &g_10;
    int *l_499 = &l_478;
    int *l_500 = (void*)0;
    int *l_501 = &l_478;
    int *l_502 = &g_14;
    int *l_503 = &l_478;
    int *l_504 = &l_478;
    int *l_505 = &g_14;
    int *l_506 = &g_14;
    int *l_507 = (void*)0;
    int *l_508 = &l_478;
    int *l_509 = &g_10;
    int *l_510 = (void*)0;
    int *l_511 = &g_10;
    int *l_512 = &g_10;
    int *l_513 = &g_14;
    int *l_514 = &g_10;
    int *l_515 = &g_14;
    int *l_516 = &g_10;
    int *l_517 = &l_478;
    int l_518 = 8L;
    int *l_519 = &l_478;
    int *l_520 = (void*)0;
    int *l_521 = &g_14;
    int *l_522 = (void*)0;
    int *l_523 = &l_478;
    int *l_524 = (void*)0;
    int *l_525 = &g_10;
    int l_526 = 0x7C1DD5F3L;
    int *l_527 = (void*)0;
    int *l_528 = &l_526;
    int *l_529 = (void*)0;
    int *l_530 = &g_10;
    int *l_531 = &l_518;
    int *l_532 = &l_518;
    int *l_533 = &l_478;
    int l_534 = 0x1A63A71FL;
    int *l_535 = (void*)0;
    int *l_536 = &l_518;
    int *l_537 = &g_14;
    int *l_538 = &l_518;
    int *l_539 = (void*)0;
    int l_540 = 0L;
    int *l_541 = &l_534;
    int *l_542 = (void*)0;
    int l_543 = (-4L);
    int *l_547 = (void*)0;
    for (g_172 = 2; (g_172 < 8); ++g_172)
    {
        int *l_483 = (void*)0;
        (*g_42) = l_483;
        if (p_41)
            continue;
    }
    ++g_544;
    return l_547;
}







static long long func_44(char p_45, int * p_46, unsigned short p_47, int ** p_48)
{
    long long l_343 = (-6L);
    int *l_344 = &g_14;
    int *l_345 = &g_14;
    int *l_346 = &g_14;
    int *l_347 = &g_14;
    int *l_348 = &g_10;
    int *l_349 = &g_14;
    int *l_350 = &g_10;
    int *l_351 = &g_14;
    int *l_352 = (void*)0;
    int *l_353 = &g_10;
    int *l_354 = &g_10;
    int l_355 = (-8L);
    int *l_356 = (void*)0;
    int *l_357 = &l_355;
    int *l_358 = (void*)0;
    int *l_359 = &l_355;
    int l_360 = 0xEF48D875L;
    int *l_361 = &l_355;
    int *l_362 = &g_14;
    int *l_363 = &l_360;
    int *l_364 = &l_360;
    int *l_365 = &g_14;
    int *l_366 = &g_14;
    int *l_367 = (void*)0;
    int *l_368 = (void*)0;
    int *l_369 = &l_355;
    int *l_370 = &g_10;
    int *l_371 = &g_14;
    int l_372 = 0xB87BBF4AL;
    int *l_373 = &g_14;
    int *l_374 = &g_10;
    int *l_375 = (void*)0;
    int *l_376 = &l_355;
    int *l_377 = &l_372;
    int *l_378 = &l_372;
    int l_379 = (-7L);
    int *l_380 = &l_355;
    int *l_381 = &l_360;
    int *l_382 = (void*)0;
    int *l_383 = (void*)0;
    int *l_384 = &l_372;
    int l_385 = (-1L);
    int *l_386 = (void*)0;
    int *l_387 = &g_14;
    int *l_388 = (void*)0;
    int l_389 = 0L;
    int *l_390 = &l_379;
    int *l_391 = &l_389;
    int *l_392 = &g_10;
    int *l_393 = (void*)0;
    int *l_394 = &g_10;
    int *l_395 = &g_10;
    int *l_396 = &l_389;
    int *l_397 = &l_355;
    int *l_398 = &l_372;
    int *l_399 = &l_372;
    int *l_400 = &g_14;
    int *l_401 = &g_10;
    int *l_402 = &l_355;
    int *l_403 = &l_385;
    int *l_404 = &l_355;
    int *l_405 = (void*)0;
    int *l_406 = &g_14;
    int *l_407 = &l_385;
    int *l_408 = &l_372;
    int l_409 = 0x8D5B51C3L;
    int *l_410 = &l_360;
    int *l_411 = &l_379;
    int *l_412 = &l_355;
    int *l_413 = &l_379;
    int l_414 = 0x679A5ECEL;
    int *l_415 = &l_409;
    int *l_416 = (void*)0;
    int *l_417 = &l_414;
    int *l_418 = (void*)0;
    int *l_420 = (void*)0;
    int l_421 = 0xC790DA67L;
    int *l_422 = &l_360;
    int *l_423 = (void*)0;
    int *l_424 = &l_379;
    int *l_425 = &g_14;
    int *l_426 = &l_385;
    long long l_462 = 1L;
    g_427++;
    for (g_70.f0 = (-12); (g_70.f0 <= 2); ++g_70.f0)
    {
        int ***l_434 = (void*)0;
        if ((p_47 & (((*l_365) | (0L & ((l_434 != (void*)0) < func_55(&g_3, p_45, (safe_mod_func_int64_t_s_s((safe_sub_func_int16_t_s_s(p_47, 0x96F5L)), g_331)), &l_408, p_47)))) == p_47)))
        {
            int *l_439 = &l_389;
            int **l_449 = &l_404;
            struct S0 *l_450 = &g_181;
            long long l_458 = (-1L);
            (*l_450) = func_66((func_55(l_439, (func_55(&l_355, p_47, p_47, (*g_182), (*l_439)) != g_172), (*l_439), l_449, g_10) || g_419), (*p_48));
            for (g_172 = (-4); (g_172 >= 20); g_172++)
            {
                long long l_453 = (-1L);
                int l_461 = (-1L);
                if (l_453)
                    break;
                (*l_402) = (*l_439);
                for (l_372 = (-5); (l_372 == (-8)); l_372 = safe_sub_func_uint64_t_u_u(l_372, 9))
                {
                    unsigned short l_463 = 0xE64BL;
                    (*l_348) |= (safe_lshift_func_uint8_t_u_s((~l_458), (safe_mul_func_int16_t_s_s(p_45, p_47))));
                    l_463++;
                }
            }
            (*l_349) &= (g_177.f0 | ((safe_lshift_func_int16_t_s_u(p_47, 6)) > g_181.f0));
        }
        else
        {
            unsigned char l_468 = 246UL;
            if (l_468)
                break;
            return g_427;
        }
        return p_47;
    }
    (*l_365) |= ((((p_47 > p_47) < g_70.f2) == (*l_350)) <= (safe_mul_func_int8_t_s_s(p_47, (p_45 | p_45))));
    for (g_14 = (-10); (g_14 < 8); ++g_14)
    {
        for (l_355 = 0; (l_355 > 29); ++l_355)
        {
            (*l_410) = (g_475 >= (g_14 <= g_167));
        }
    }
    return g_177.f1;
}







static int * func_49(short p_50, int ** p_51, unsigned short p_52)
{
    int **l_337 = &g_43;
    int *l_338 = &g_10;
    int *l_339 = &g_14;
    struct S0 *l_340 = &g_70;
    (*p_51) = (*p_51);
    (*l_338) |= func_55((*p_51), g_167, g_181.f1, l_337, g_167);
    (*l_339) |= (*l_338);
    (*g_342) = l_340;
    return (*p_51);
}







static short func_55(int * p_56, unsigned char p_57, unsigned p_58, int ** p_59, unsigned short p_60)
{
    int *l_231 = (void*)0;
    int l_232 = 0xF7E8E123L;
    int *l_233 = &l_232;
    int *l_234 = &l_232;
    int *l_235 = &g_14;
    int *l_236 = &l_232;
    int *l_237 = &g_14;
    int *l_238 = &g_14;
    int *l_239 = &g_14;
    int *l_240 = (void*)0;
    int l_241 = 0x93052EA8L;
    int *l_242 = &l_241;
    int *l_243 = &g_10;
    int l_244 = 0x8996BAC3L;
    int *l_245 = &g_10;
    int *l_246 = &g_10;
    int *l_247 = &l_232;
    int *l_248 = &l_244;
    int *l_249 = &l_241;
    int l_250 = (-4L);
    int *l_251 = &l_250;
    int *l_252 = &g_14;
    int *l_253 = &g_14;
    int *l_254 = (void*)0;
    int l_255 = 0x31F37730L;
    int *l_256 = &l_250;
    int *l_257 = &l_255;
    int *l_258 = (void*)0;
    int *l_259 = &l_250;
    int *l_260 = &g_14;
    int *l_261 = &g_10;
    int *l_262 = &l_232;
    int *l_263 = &l_255;
    int *l_264 = (void*)0;
    int l_265 = 0x725CFA70L;
    int l_266 = (-1L);
    int *l_267 = &g_10;
    int *l_268 = &l_266;
    int *l_269 = &l_232;
    int *l_270 = &l_244;
    int *l_271 = &l_250;
    int *l_272 = (void*)0;
    int *l_273 = &l_241;
    int *l_274 = &g_10;
    int *l_275 = &g_14;
    int l_276 = 6L;
    int *l_277 = &l_265;
    int *l_278 = &l_265;
    int *l_279 = &l_250;
    int *l_280 = (void*)0;
    int *l_281 = (void*)0;
    int *l_282 = &l_244;
    int *l_283 = &l_250;
    int *l_284 = &g_14;
    int *l_285 = &g_14;
    int *l_286 = &l_232;
    int *l_287 = &l_232;
    int *l_288 = &g_14;
    int *l_289 = &l_250;
    long long l_290 = 7L;
    int l_291 = 0xCF287346L;
    int *l_292 = &l_241;
    int *l_293 = &l_241;
    int *l_294 = &l_241;
    int *l_295 = &l_291;
    int l_296 = 0x199F5E48L;
    int *l_297 = &l_265;
    int *l_298 = &l_244;
    int l_299 = 0x4C376665L;
    int *l_300 = &l_244;
    int *l_301 = &l_241;
    int *l_302 = &l_232;
    int *l_303 = &l_250;
    int *l_304 = &l_250;
    int *l_305 = &g_14;
    int l_306 = 0xF4294B59L;
    int *l_307 = &l_291;
    int *l_308 = (void*)0;
    int *l_309 = (void*)0;
    int *l_310 = &l_244;
    int *l_311 = &l_250;
    int *l_312 = (void*)0;
    int *l_313 = &l_276;
    int *l_314 = &l_276;
    int *l_315 = &l_265;
    int *l_316 = &l_291;
    int *l_317 = &l_241;
    int *l_318 = &l_299;
    int *l_319 = &l_265;
    int *l_320 = &l_299;
    int *l_321 = &l_306;
    int *l_322 = (void*)0;
    int *l_323 = (void*)0;
    int l_324 = (-4L);
    int *l_325 = &l_241;
    int *l_326 = (void*)0;
    int l_327 = 0x0EBD88DAL;
    int *l_328 = &l_255;
    int *l_329 = &l_324;
    int *l_330 = &g_10;
    --g_331;
    return p_60;
}







static int * func_61(int ** p_62)
{
    short l_77 = 0xD8C2L;
    int *l_82 = &g_10;
    int l_137 = 0x3CB79D87L;
    int l_161 = (-1L);
    int l_164 = (-1L);
    int *l_230 = &g_3;
    if (((0x94L ^ (l_77 < ((safe_rshift_func_uint16_t_u_s((65528UL & l_77), 9)) <= (((safe_mul_func_uint8_t_u_u(((void*)0 != l_82), (safe_sub_func_int32_t_s_s(5L, ((*l_82) < (*l_82)))))) == g_14) > 0x2CA01DC0L)))) <= g_2))
    {
        unsigned l_85 = 0UL;
        (*l_82) = l_85;
    }
    else
    {
        int l_89 = (-3L);
        unsigned char l_184 = 0x37L;
        l_89 |= (safe_lshift_func_int16_t_s_u((-3L), g_88));
        (*l_82) &= l_89;
        if ((g_70.f1 >= g_3))
        {
            long long l_90 = 0xC5DA298B2365B212LL;
            unsigned short l_103 = 9UL;
            int l_133 = 0L;
            int *l_179 = &l_161;
            if (((((l_90 < g_10) || (safe_mul_func_int8_t_s_s((~0x7AL), (safe_lshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((*l_82), l_89)) ^ (((l_89 | (safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((((l_90 > (+g_70.f1)) > ((safe_mod_func_uint64_t_u_u(0xAFDD74211FA8BF40LL, g_3)) != 0xE6L)) == l_89), l_90)), 4294967289UL))) ^ (-2L)) & g_14)), l_103))))) | g_70.f0) >= l_89))
            {
                int *l_104 = &g_14;
                int *l_105 = (void*)0;
                int *l_106 = &g_10;
                int *l_107 = &g_10;
                int *l_108 = &g_14;
                int *l_109 = (void*)0;
                int *l_110 = &l_89;
                int *l_111 = &g_14;
                int *l_112 = &l_89;
                int *l_113 = &g_10;
                int *l_114 = &g_10;
                int *l_115 = &l_89;
                int *l_116 = &g_14;
                int *l_117 = &g_14;
                int *l_118 = &g_10;
                int *l_119 = &g_10;
                int *l_120 = &g_10;
                int *l_121 = &g_14;
                int *l_122 = &g_14;
                int *l_123 = &g_14;
                int *l_124 = &g_14;
                int *l_125 = &g_14;
                int l_126 = (-3L);
                int *l_127 = &g_14;
                int *l_128 = &l_89;
                int *l_129 = (void*)0;
                int *l_130 = &l_126;
                int *l_131 = (void*)0;
                int *l_132 = &g_14;
                int *l_134 = &l_133;
                int *l_135 = &g_10;
                int *l_136 = &g_10;
                int *l_138 = &l_126;
                int *l_139 = &l_126;
                int *l_140 = &g_10;
                int *l_141 = &l_126;
                int *l_142 = &l_133;
                int *l_143 = &l_89;
                int *l_144 = (void*)0;
                int *l_145 = (void*)0;
                int l_146 = 0L;
                int *l_147 = (void*)0;
                int *l_148 = (void*)0;
                int *l_149 = &l_89;
                int *l_150 = &l_126;
                int *l_151 = &g_10;
                int *l_152 = (void*)0;
                int *l_153 = &l_133;
                short l_154 = 0x26DFL;
                int *l_155 = (void*)0;
                int *l_156 = &l_133;
                int *l_157 = &g_14;
                int *l_158 = (void*)0;
                int *l_159 = &l_137;
                int *l_160 = &g_14;
                int *l_162 = &g_14;
                int *l_163 = &g_14;
                int *l_166 = &g_14;
                g_167--;
                (*g_75) = func_66((18446744073709551615UL != (safe_rshift_func_uint8_t_u_s((g_172 != 0x851ED01B0F431827LL), 3))), (*p_62));
                if ((*l_82))
                {
                    (*g_42) = (*g_42);
                }
                else
                {
                    char l_175 = 0x99L;
                    for (l_77 = (-13); (l_77 >= (-27)); --l_77)
                    {
                        (*p_62) = (*p_62);
                    }
                    if (l_175)
                    {
                        struct S0 **l_176 = &g_75;
                        (*p_62) = (void*)0;
                        (*l_120) = (&g_75 == l_176);
                        if (g_70.f0)
                            goto lbl_178;
lbl_178:
                        (**l_176) = g_177;
                        (*l_119) = ((&g_43 != &g_43) == ((l_103 & g_165) >= 0xEBL));
                    }
                    else
                    {
                        char l_180 = 0x99L;
                        l_179 = (*p_62);
                        (*l_110) = l_180;
                        (*p_62) = (*g_42);
                        (*g_42) = &l_126;
                    }
                    (*g_75) = g_181;
                    (*g_182) = &g_43;
                }
            }
            else
            {
                (*l_179) = (*l_179);
                (*l_179) |= (l_184 >= g_70.f2);
            }
        }
        else
        {
            int *l_185 = &l_164;
            int *l_186 = &l_137;
            int *l_187 = &g_10;
            int *l_188 = &l_137;
            int *l_189 = &g_14;
            int l_190 = 0xEF9D813AL;
            int *l_191 = &l_89;
            int *l_192 = &g_10;
            int *l_193 = &l_161;
            int *l_194 = &g_14;
            int *l_195 = (void*)0;
            int *l_196 = &l_89;
            int *l_197 = (void*)0;
            int *l_198 = &l_89;
            int *l_199 = (void*)0;
            int *l_200 = &l_164;
            int *l_201 = (void*)0;
            int *l_202 = &g_10;
            int *l_203 = &g_14;
            int *l_204 = &l_137;
            int *l_205 = (void*)0;
            int *l_206 = &l_164;
            int *l_207 = (void*)0;
            int *l_208 = &l_137;
            int *l_209 = &l_161;
            int *l_210 = &l_161;
            int *l_211 = &l_89;
            int *l_212 = &l_161;
            int *l_213 = &g_10;
            int *l_214 = (void*)0;
            int *l_215 = &g_14;
            int *l_216 = &l_137;
            int *l_217 = &g_14;
            int *l_218 = &g_10;
            int *l_220 = &g_10;
            int *l_221 = &l_190;
            int *l_222 = &l_89;
            int *l_223 = &l_164;
            int *l_224 = &l_190;
            int *l_225 = &l_164;
            int *l_226 = &l_190;
            g_227--;
        }
    }
    (*g_42) = &l_161;
    (*g_42) = (*p_62);
    return l_230;
}







static int ** func_63(unsigned p_64, int ** p_65)
{
    struct S0 *l_71 = &g_70;
    int l_72 = 0L;
    unsigned long long l_73 = 0x09F33D48A24E228CLL;
    int **l_76 = &g_43;
    (*l_71) = func_66(g_13, (*p_65));
    l_72 |= ((void*)0 == &g_70);
    l_73 |= (!l_72);
    (*g_74) = &g_70;
    return l_76;
}







static struct S0 func_66(unsigned short p_67, int * p_68)
{
    char l_69 = 0x15L;
    g_2 ^= (!l_69);
    return g_70;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_70.f0, "g_70.f0", print_hash_value);
    transparent_crc(g_70.f1, "g_70.f1", print_hash_value);
    transparent_crc(g_70.f2, "g_70.f2", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_177.f0, "g_177.f0", print_hash_value);
    transparent_crc(g_177.f1, "g_177.f1", print_hash_value);
    transparent_crc(g_177.f2, "g_177.f2", print_hash_value);
    transparent_crc(g_181.f0, "g_181.f0", print_hash_value);
    transparent_crc(g_181.f1, "g_181.f1", print_hash_value);
    transparent_crc(g_181.f2, "g_181.f2", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_419, "g_419", print_hash_value);
    transparent_crc(g_427, "g_427", print_hash_value);
    transparent_crc(g_475, "g_475", print_hash_value);
    transparent_crc(g_481.f0, "g_481.f0", print_hash_value);
    transparent_crc(g_481.f1, "g_481.f1", print_hash_value);
    transparent_crc(g_481.f2, "g_481.f2", print_hash_value);
    transparent_crc(g_544, "g_544", print_hash_value);
    transparent_crc(g_553, "g_553", print_hash_value);
    transparent_crc(g_584, "g_584", print_hash_value);
    transparent_crc(g_624, "g_624", print_hash_value);
    transparent_crc(g_636, "g_636", print_hash_value);
    transparent_crc(g_638, "g_638", print_hash_value);
    transparent_crc(g_733, "g_733", print_hash_value);
    transparent_crc(g_758, "g_758", print_hash_value);
    transparent_crc(g_800, "g_800", print_hash_value);
    transparent_crc(g_801, "g_801", print_hash_value);
    transparent_crc(g_1029, "g_1029", print_hash_value);
    transparent_crc(g_1030, "g_1030", print_hash_value);
    transparent_crc(g_1045, "g_1045", print_hash_value);
    transparent_crc(g_1056.f0, "g_1056.f0", print_hash_value);
    transparent_crc(g_1056.f1, "g_1056.f1", print_hash_value);
    transparent_crc(g_1056.f2, "g_1056.f2", print_hash_value);
    transparent_crc(g_1070.f0, "g_1070.f0", print_hash_value);
    transparent_crc(g_1070.f1, "g_1070.f1", print_hash_value);
    transparent_crc(g_1070.f2, "g_1070.f2", print_hash_value);
    transparent_crc(g_1086.f0, "g_1086.f0", print_hash_value);
    transparent_crc(g_1086.f1, "g_1086.f1", print_hash_value);
    transparent_crc(g_1086.f2, "g_1086.f2", print_hash_value);
    transparent_crc(g_1361, "g_1361", print_hash_value);
    transparent_crc(g_1571, "g_1571", print_hash_value);
    transparent_crc(g_1685.f0, "g_1685.f0", print_hash_value);
    transparent_crc(g_1685.f1, "g_1685.f1", print_hash_value);
    transparent_crc(g_1685.f2, "g_1685.f2", print_hash_value);
    transparent_crc(g_1764.f0, "g_1764.f0", print_hash_value);
    transparent_crc(g_1764.f1, "g_1764.f1", print_hash_value);
    transparent_crc(g_1764.f2, "g_1764.f2", print_hash_value);
    transparent_crc(g_1773, "g_1773", print_hash_value);
    transparent_crc(g_1846, "g_1846", print_hash_value);
    transparent_crc(g_1852, "g_1852", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
