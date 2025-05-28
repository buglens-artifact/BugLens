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
   unsigned short f0;
   const unsigned f1 : 28;
   volatile signed f2 : 2;
   unsigned f3 : 30;
   unsigned f4 : 13;
   volatile signed f5 : 7;
   unsigned f6 : 14;
   signed f7 : 16;
};

union U1 {
   unsigned char f0;
   int f1;
   unsigned f2;
   signed f3 : 20;
};

union U2 {
   char f0;
};


static unsigned g_29 = 0x61A6B719L;
static const union U2 g_30 = {0x0AL};
static int g_37 = 0x21494FB3L;
static union U1 g_79 = {0xB8L};
static volatile struct S0 g_89 = {0xAF71L,4462,-1,18391,73,-9,25,-37};
static int g_90 = 6L;
static unsigned g_324 = 0xEB9182EEL;
static unsigned g_359 = 0x507CC00BL;
static short g_440 = 1L;
static volatile struct S0 g_491 = {65526UL,4843,1,2275,50,3,94,234};
static volatile struct S0 g_492 = {0x5CFBL,3402,1,22415,17,-2,59,-25};
static struct S0 g_505 = {0x405BL,2447,-1,2205,67,5,88,103};
static struct S0 g_507 = {0x1A35L,3054,1,22377,5,-7,10,-119};
static volatile struct S0 g_515 = {0x4FBEL,2920,0,11416,15,-7,117,106};
static int g_517 = 0xB4650914L;
static union U1 g_519 = {1UL};
static volatile struct S0 g_589 = {0xB634L,13296,-1,28221,53,3,82,125};
static struct S0 g_679 = {65535UL,15868,0,295,62,0,113,136};
static short g_686 = 0xC2AEL;
static volatile struct S0 g_714 = {1UL,8413,-0,4953,85,-7,29,-111};
static volatile struct S0 g_790 = {1UL,1013,0,20450,25,4,48,103};
static short g_857 = 0xB75AL;
static char g_974 = 0xF5L;
static struct S0 g_996 = {0UL,11858,1,2718,88,-8,73,-229};
static unsigned short g_1044 = 0x3F20L;
static struct S0 g_1102 = {0xE98EL,14790,0,22695,59,8,21,238};
static int g_1164 = 0x07AB8EC2L;
static volatile struct S0 g_1311 = {0UL,3445,1,22968,64,-0,46,212};
static unsigned g_1349 = 1UL;



static union U2 func_1(void);
static unsigned short func_4(unsigned p_5, unsigned short p_6, unsigned short p_7);
static unsigned func_8(char p_9, union U1 p_10, unsigned short p_11, unsigned char p_12, unsigned short p_13);
static const unsigned func_25(unsigned short p_26, unsigned char p_27, const union U2 p_28);
static unsigned short func_42(union U2 p_43, int p_44, union U2 p_45, unsigned short p_46, int p_47);
static int func_48(unsigned p_49, int p_50, unsigned p_51, union U1 p_52, union U1 p_53);
static unsigned func_60(int p_61, unsigned p_62, char p_63);
static const unsigned func_64(const char p_65, int p_66, int p_67, unsigned short p_68, short p_69);
static const char func_70(char p_71, unsigned p_72, int p_73);
static short func_74(unsigned p_75, union U1 p_76, unsigned short p_77);
static union U2 func_1(void)
{
    unsigned l_16 = 3UL;
    int l_1237 = 0xCB74F708L;
    union U1 l_1238 = {0x9AL};
    unsigned short l_1247 = 0x7CD1L;
    g_589.f5 = (safe_mod_func_int8_t_s_s((func_4(func_8((safe_sub_func_uint32_t_u_u((l_16 & ((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((((safe_mod_func_int8_t_s_s((func_25(g_29, l_16, g_30) > (l_16 == (l_16 <= g_1102.f4))), l_16)) | 65530UL) == l_1237) > g_1102.f1), g_679.f4)), g_1164)), g_1102.f4)) != 8UL)), g_1102.f6)), l_1238, g_90, g_79.f0, g_679.f7), l_16, l_1247) , l_1238.f0), g_505.f4));
    return g_30;
}







static unsigned short func_4(unsigned p_5, unsigned short p_6, unsigned short p_7)
{
    unsigned char l_1248 = 0xC5L;
    int l_1277 = (-10L);
    short l_1325 = 1L;
    union U1 l_1379 = {1UL};
lbl_1275:
    g_491.f5 = (l_1248 < (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(p_5, 12)) != (func_70((safe_lshift_func_int16_t_s_s((!(safe_mod_func_int32_t_s_s((-8L), (safe_mul_func_int8_t_s_s(((((safe_add_func_uint8_t_u_u(g_1164, (safe_sub_func_int16_t_s_s((((l_1248 || 0x47ACL) >= g_491.f2) <= g_679.f1), ((safe_sub_func_int16_t_s_s((safe_div_func_int8_t_s_s(g_996.f1, g_1102.f0)), 5L)) , 0x2CB5L))))) <= l_1248) | l_1248) | 0x36L), (-7L)))))), g_505.f7)), l_1248, p_7) ^ g_679.f3)), g_507.f1)));
    for (g_440 = 0; (g_440 != 18); ++g_440)
    {
        int l_1292 = (-1L);
        int l_1293 = 0L;
        union U1 l_1348 = {4UL};
        const union U2 l_1378 = {8L};
        for (g_996.f0 = 0; (g_996.f0 >= 16); g_996.f0++)
        {
            union U2 l_1318 = {0x13L};
            unsigned short l_1350 = 8UL;
            int l_1366 = 0L;
            union U1 l_1375 = {0xC0L};
            const short l_1380 = 0x1EF6L;
            if ((g_507.f2 , l_1248))
            {
                for (g_37 = 0; (g_37 > 22); g_37 = safe_add_func_int32_t_s_s(g_37, 4))
                {
                    int l_1276 = 0x0872DDAEL;
                    for (p_6 = 21; (p_6 >= 57); p_6 = safe_add_func_int32_t_s_s(p_6, 6))
                    {
                        if (g_996.f1)
                            goto lbl_1275;
                        l_1277 = ((p_6 == l_1276) <= (g_790.f5 , p_5));
                        l_1277 = func_70(p_7, p_7, (g_491.f1 < 9L));
                    }
                    for (l_1277 = 0; (l_1277 != 18); l_1277 = safe_add_func_int32_t_s_s(l_1277, 9))
                    {
                        unsigned l_1282 = 0UL;
                        l_1282 = (safe_lshift_func_uint16_t_u_s(1UL, p_5));
                    }
                    l_1276 = (p_6 && (g_491.f5 <= ((0x0DL != (safe_mod_func_uint8_t_u_u(l_1276, (0x083204FEL | (p_5 , p_5))))) > ((safe_unary_minus_func_uint8_t_u(0x75L)) >= 6UL))));
                    for (g_79.f2 = 0; (g_79.f2 >= 46); g_79.f2 = safe_add_func_uint8_t_u_u(g_79.f2, 9))
                    {
                        unsigned char l_1294 = 0x87L;
                        l_1293 = l_1292;
                        return l_1294;
                    }
                }
            }
            else
            {
                char l_1297 = 0x37L;
                union U1 l_1300 = {0x27L};
                l_1277 = 0xBE47863BL;
                l_1300.f3 = ((safe_lshift_func_int8_t_s_u(p_6, l_1297)) > (safe_mod_func_uint32_t_u_u((g_790.f5 >= (g_30.f0 && p_6)), (l_1300 , p_6))));
                g_505.f5 = p_6;
                g_679.f2 = (safe_add_func_int32_t_s_s(g_1102.f2, (safe_rshift_func_int16_t_s_s((p_5 & (safe_sub_func_int16_t_s_s((g_324 <= (!1L)), (l_1297 | (safe_lshift_func_uint16_t_u_u(g_996.f6, 4)))))), 12))));
            }
            if (func_8((p_6 > ((~((safe_add_func_int32_t_s_s((g_1311 , 0xD17CB3A1L), g_505.f6)) , (-1L))) , ((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((((safe_lshift_func_int8_t_s_u((~((p_7 != (l_1318 , (func_60((safe_add_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((((p_7 && g_996.f0) , l_1293) , (-1L)), l_1293)), l_1318.f0)) <= l_1318.f0), g_1102.f0)), p_6, l_1293) , p_6))) >= l_1248)), g_996.f3)) , l_1318.f0) == 0x7C82L) , p_7), l_1325)), 0UL)) != p_6))), g_519, l_1293, g_79.f0, l_1292))
            {
                unsigned l_1330 = 18446744073709551607UL;
                union U1 l_1347 = {0x9AL};
                l_1293 = (safe_div_func_int32_t_s_s(((((((func_70(p_6, g_491.f2, g_1102.f3) == (safe_sub_func_int8_t_s_s(0xEAL, ((0L < p_5) == l_1330)))) & l_1318.f0) != l_1248) < l_1325) && g_790.f7) | 4UL), p_5));
                g_1311.f5 = (((safe_lshift_func_int8_t_s_u((func_48(g_686, p_7, ((safe_div_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(((g_30 , (func_48((safe_mod_func_uint8_t_u_u(func_74(func_70(((safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((p_5 < ((((safe_sub_func_uint8_t_u_u(0x56L, (g_515.f7 | l_1293))) != (((l_1318.f0 , 7UL) != 4294967288UL) && p_5)) , p_6) ^ l_1292)), l_1292)), p_5)), p_5)) ^ g_996.f6), g_37, g_30.f0), g_79, p_5), g_1102.f6)), g_1102.f3, l_1318.f0, l_1347, g_79) > 0x58FDL)) || p_5), p_7)) & l_1318.f0), g_679.f3)) || g_492.f5), l_1347, l_1348) != p_7), g_505.f7)) , g_1349) != l_1292);
            }
            else
            {
                int l_1365 = 0x5D2E3B89L;
                l_1366 = (((l_1350 & ((safe_rshift_func_int8_t_s_u(((safe_mul_func_int8_t_s_s((g_79 , l_1248), ((~func_74(((safe_add_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((safe_add_func_int8_t_s_s(1L, (p_7 ^ ((g_589.f1 <= l_1293) ^ ((l_1318.f0 | (((!0xC0L) != p_5) | p_7)) ^ 0x3BBC481FL))))) && p_7), p_7)), l_1350)), 0x79L)) | l_1318.f0), l_1365)) & p_7), g_79, g_857)) > p_7))) < 0xF9L), 5)) , 0L)) < p_5) <= 0x47L);
                l_1379.f3 = ((1L > (((func_25(((safe_rshift_func_int8_t_s_u(0L, 7)) | (safe_div_func_uint32_t_u_u((safe_add_func_int32_t_s_s(func_74(l_1277, l_1348, (safe_div_func_uint32_t_u_u(func_8((func_8(((((func_25(((func_8(g_491.f6, l_1375, g_974, ((safe_sub_func_int32_t_s_s(((~g_507.f7) < ((g_996.f0 < l_1365) , p_7)), 0x4AE5390CL)) , 255UL), l_1365) != p_7) || l_1365), p_6, l_1378) ^ l_1293) ^ p_5) && p_5) & 255UL), l_1379, p_7, p_5, l_1325) , 0L), g_79, p_5, p_5, g_996.f4), 8UL))), l_1380)), l_1292))), g_996.f7, g_30) , p_5) | g_505.f0) && p_7)) == g_505.f4);
                l_1293 = (l_1325 | g_790.f3);
                l_1348.f3 = (g_1102.f3 < p_7);
            }
        }
        if (l_1293)
            break;
    }
    return l_1248;
}







static unsigned func_8(char p_9, union U1 p_10, unsigned short p_11, unsigned char p_12, unsigned short p_13)
{
    union U1 l_1241 = {0x85L};
    union U2 l_1244 = {0xC2L};
    unsigned l_1245 = 18446744073709551613UL;
    union U2 l_1246 = {0xECL};
    g_505.f7 = ((7UL == ((safe_div_func_int32_t_s_s(0x0FF7378BL, (+(((((l_1241 , (safe_sub_func_int8_t_s_s((-9L), ((g_491.f1 | g_679.f0) >= l_1244.f0)))) & l_1241.f0) , 2L) , g_1102.f1) & 0xDDL)))) ^ 1L)) < g_679.f6);
    return l_1244.f0;
}







static const unsigned func_25(unsigned short p_26, unsigned char p_27, const union U2 p_28)
{
    int l_31 = 0x0CADFB1AL;
    unsigned short l_36 = 1UL;
    union U2 l_1215 = {0xE7L};
    l_31 = l_31;
    g_37 = ((3UL || (safe_lshift_func_uint8_t_u_u(l_31, 0))) & (p_27 >= ((0x0E83L != (((0xF793L | ((l_31 , ((0UL <= 0L) == l_36)) <= (-7L))) & g_30.f0) <= p_28.f0)) > g_30.f0)));
    if ((g_29 <= 0xD9L))
    {
        union U1 l_78 = {0xCCL};
        for (l_31 = 13; (l_31 >= 28); l_31++)
        {
            char l_518 = 0x67L;
            union U1 l_1197 = {0UL};
            unsigned l_1198 = 0x2ED47946L;
        }
        return p_28.f0;
    }
    else
    {
        const int l_1207 = (-1L);
        union U2 l_1214 = {-1L};
lbl_1236:
        l_31 = ((p_27 <= (((safe_mod_func_uint8_t_u_u((g_505.f2 & (safe_rshift_func_uint8_t_u_u(((((safe_mod_func_uint16_t_u_u((l_1207 == (-1L)), (safe_div_func_int16_t_s_s(p_27, ((p_27 && l_31) && ((safe_mul_func_uint8_t_u_u(g_1102.f7, g_1102.f4)) < g_996.f7)))))) || g_679.f4) || l_31) | l_31), 0))), 0x03L)) ^ (-7L)) != p_26)) && p_27);
        l_31 = 0x47D49E7FL;
        if ((((func_48(func_60((0x2CL && (g_679.f4 , (((g_515.f6 , g_30) , 0x36ED41FFL) <= 1UL))), g_679.f1, p_26), p_26, p_28.f0, g_79, g_79) >= l_1207) , g_517) , p_28.f0))
        {
            for (g_519.f1 = 0; (g_519.f1 < 2); ++g_519.f1)
            {
                unsigned char l_1234 = 0xF9L;
                int l_1235 = (-1L);
                l_31 = 0xEA784AE7L;
                l_1235 = (((safe_mod_func_int8_t_s_s(p_26, (l_36 && (safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s((-4L), (safe_mod_func_int16_t_s_s(l_1207, (p_27 | g_996.f5))))), ((safe_mul_func_uint16_t_u_u(65535UL, ((((safe_mod_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u((g_507.f3 <= ((safe_lshift_func_int16_t_s_s(((g_79.f0 > 1L) , l_36), 1)) && g_1102.f0)), g_679.f3)) != g_440) == g_1044), p_26)) > l_1234) ^ l_1207) , l_1207))) , 0xC4L)))))) < g_507.f4) & 0xD248B461L);
            }
        }
        else
        {
            if (g_440)
                goto lbl_1236;
        }
    }
    return g_519.f0;
}







static unsigned short func_42(union U2 p_43, int p_44, union U2 p_45, unsigned short p_46, int p_47)
{
    union U1 l_547 = {0UL};
    unsigned short l_560 = 65529UL;
    unsigned l_610 = 2UL;
    int l_689 = (-3L);
    const unsigned short l_737 = 0x0E91L;
    unsigned l_847 = 3UL;
    union U2 l_889 = {-8L};
    char l_895 = (-3L);
    unsigned char l_936 = 0xBCL;
    union U1 l_939 = {1UL};
    unsigned l_1014 = 18446744073709551608UL;
    int l_1051 = (-1L);
    int l_1075 = 0x315C49F0L;
    unsigned l_1138 = 0x02B6383DL;
    unsigned short l_1147 = 1UL;
    for (p_44 = 0; (p_44 < 2); p_44++)
    {
        short l_548 = 0x9A52L;
        unsigned char l_592 = 249UL;
        union U1 l_597 = {0x94L};
        unsigned short l_674 = 0xA2AEL;
        const short l_755 = 5L;
        union U1 l_766 = {0xBFL};
        for (g_519.f1 = (-29); (g_519.f1 > (-17)); g_519.f1 = safe_add_func_int32_t_s_s(g_519.f1, 9))
        {
            unsigned l_555 = 0xDCE7A24EL;
            union U2 l_557 = {0xC9L};
            unsigned l_617 = 0xBCBC1B1EL;
            union U1 l_620 = {0x52L};
            unsigned char l_633 = 0xBFL;
            g_491.f7 = func_74((0x997DL > func_70(g_515.f6, g_440, (p_47 , g_505.f0))), l_547, p_45.f0);
            if (l_548)
                continue;
            if (l_548)
            {
                char l_556 = 0x58L;
                p_47 = g_89.f5;
                if ((((safe_lshift_func_uint16_t_u_s(((((((safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(l_555, l_556)), (l_557 , g_505.f1))) , g_491.f1) , func_60(l_547.f0, ((safe_rshift_func_uint8_t_u_u(l_548, func_70(((g_491.f7 >= l_548) & g_30.f0), g_507.f6, p_46))) , 1UL), g_79.f1)) > l_560) || l_557.f0) || l_556), l_555)) > g_507.f1) < l_555))
                {
                    return l_556;
                }
                else
                {
                    g_507.f5 = p_45.f0;
                    if (g_491.f1)
                        continue;
                    p_47 = (p_46 , g_491.f1);
                    g_491.f2 = (safe_sub_func_int8_t_s_s(g_491.f3, (p_44 && (0x2BE8L < (safe_sub_func_int32_t_s_s(l_548, (safe_add_func_int8_t_s_s((!l_548), (~(safe_mod_func_int16_t_s_s(p_47, p_46)))))))))));
                }
            }
            else
            {
                int l_584 = 0x503C6D53L;
                char l_611 = 4L;
                if (p_45.f0)
                {
                    union U1 l_585 = {255UL};
                    g_492.f5 = g_515.f3;
                    for (l_547.f0 = 6; (l_547.f0 > 48); ++l_547.f0)
                    {
                        unsigned char l_583 = 255UL;
                        union U1 l_586 = {0x1FL};
                        l_584 = (func_48(func_70(p_45.f0, ((((((p_45.f0 , g_505.f1) > (safe_lshift_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s((((((safe_lshift_func_uint8_t_u_u((p_44 >= func_60(l_548, g_492.f5, (((safe_add_func_uint8_t_u_u(p_46, (safe_rshift_func_uint8_t_u_u(p_44, 1)))) && ((safe_sub_func_int16_t_s_s((0x4CL > 1UL), g_505.f1)) == g_30.f0)) , l_583))), 2)) > l_584) <= p_45.f0) | (-1L)) , 0x8C4CL), p_45.f0)) < g_507.f0) , l_583), l_547.f0))) && (-9L)) >= 0x843D38D4L) , l_560) ^ 0xF6L), p_43.f0), p_47, p_43.f0, l_585, l_586) && l_548);
                        if (l_586.f0)
                            break;
                        p_47 = (l_547.f0 <= g_519.f0);
                        p_47 = (((safe_sub_func_int16_t_s_s(l_583, (g_589 , 8UL))) < g_505.f4) | (l_584 && (-1L)));
                    }
                    g_589.f2 = func_48(p_45.f0, p_43.f0, func_70((g_492.f6 < (safe_mul_func_uint16_t_u_u((l_592 > g_505.f4), p_46))), l_548, ((1UL || (((safe_sub_func_int32_t_s_s((((safe_mod_func_uint16_t_u_u(0xACAAL, (-1L))) == g_79.f0) == p_47), g_505.f6)) , p_46) && g_507.f3)) != l_592)), l_597, l_547);
                    if ((((+l_560) && 0x7776L) , (safe_div_func_int16_t_s_s(7L, 0x7F52L))))
                    {
                        unsigned char l_612 = 2UL;
                        p_47 = (+func_70((65535UL || func_70(g_515.f7, (((safe_mod_func_int32_t_s_s((p_45.f0 >= (!(safe_div_func_uint32_t_u_u(((g_517 || (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((((g_507.f7 ^ (safe_mul_func_int16_t_s_s(0x977CL, ((l_610 ^ p_46) & (g_505.f3 == g_79.f1))))) != p_43.f0) , p_44), l_592)), l_560))) < 65535UL), 4294967294UL)))), g_505.f6)) != (-5L)) ^ g_359), l_611)), g_79.f1, l_612));
                        g_505.f5 = l_612;
                        p_47 = p_44;
                        g_505.f7 = 2L;
                    }
                    else
                    {
                        int l_648 = 0x09CEF9D7L;
                        g_491.f2 = (safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(l_617, (p_45 , (safe_mul_func_uint16_t_u_u(func_74(l_557.f0, l_620, func_48((safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(p_46, ((safe_mod_func_uint16_t_u_u(g_89.f1, ((safe_div_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((!g_37), (safe_add_func_uint8_t_u_u(g_507.f4, (65526UL < (-7L)))))), l_611)) | p_47))) != p_47))), 13)), p_47, l_633, l_585, g_519)), g_79.f3))))), l_585.f0));
                        g_515.f5 = (safe_sub_func_int16_t_s_s((func_74(g_492.f5, g_79, ((safe_div_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((safe_add_func_int8_t_s_s(0x73L, 1L)) , g_29) , ((safe_div_func_uint8_t_u_u((safe_div_func_int16_t_s_s(p_46, ((((safe_mod_func_uint8_t_u_u((g_79.f1 , l_648), (g_519.f2 && p_45.f0))) & 0xA0A9F654L) | 0x40702608L) , g_505.f7))), l_560)) >= l_648)), p_45.f0)), 0x7501L)) , 0xE10FL)) & g_507.f4), l_548));
                        return p_45.f0;
                    }
                }
                else
                {
                    p_47 = p_44;
                }
                g_515.f7 = (1UL != (g_519 , (l_560 < func_64(l_610, p_44, l_611, (g_89.f5 , (func_70(l_620.f0, ((safe_rshift_func_int8_t_s_s(l_555, 5)) , p_46), g_505.f4) | (-6L))), g_359))));
            }
            for (g_517 = 0; (g_517 == 26); ++g_517)
            {
                int l_655 = 0x112110B9L;
                int l_680 = 0L;
                short l_690 = 0x99FEL;
                p_47 = ((func_64(g_517, l_560, ((((l_655 , (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((g_505.f0 > p_43.f0), 1)), (safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((g_589.f5 >= (g_507.f3 > g_505.f6)), p_47)), 0x93L))))) , g_505.f1) == p_43.f0) ^ 0xB3L), l_597.f0, p_47) <= l_610) , g_89.f5);
                if (g_515.f3)
                {
                    unsigned short l_685 = 0xD705L;
                    p_47 = (safe_add_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u(func_64(func_70(((safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s((~(255UL != (p_46 | func_64((((l_655 ^ p_43.f0) & (((l_674 < (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(0x3CEFL, 9)), (g_679 , l_680)))) > (((safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(l_685, 7)), g_507.f4)) < 0UL) & 0x50B4L)) <= 0x0093L)) != p_43.f0), l_597.f0, g_519.f1, g_359, l_655)))), p_44)), p_47)) != 0x0BF6L), p_44, g_505.f3), l_560, p_43.f0, g_686, l_655), p_43.f0)) | 0x32L) == (-1L)), 0xBAL));
                }
                else
                {
                    char l_697 = 0x16L;
                    union U1 l_700 = {3UL};
                    if ((((safe_add_func_uint16_t_u_u(func_48(l_689, (func_48(g_89.f3, l_690, (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((g_679.f1 | (+(g_679.f4 || g_679.f0))), 2)), ((safe_sub_func_uint8_t_u_u((0xA633L && l_697), (+((safe_sub_func_uint32_t_u_u((p_45.f0 , l_680), p_43.f0)) & g_79.f3)))) == p_47))), g_519, g_519) <= p_43.f0), p_43.f0, l_700, g_79), p_43.f0)) & l_592) , 4L))
                    {
                        int l_707 = (-3L);
                        l_707 = ((safe_div_func_int16_t_s_s((l_655 < (!p_44)), l_610)) >= ((((l_610 , (safe_div_func_uint16_t_u_u(p_46, (l_620 , p_44)))) ^ func_74((((p_43.f0 , (g_679.f1 < 0x2A235D3CL)) == g_686) , 18446744073709551613UL), g_79, p_44)) , 0xA6CF9D44L) & l_655));
                        if (p_43.f0)
                            break;
                        return l_700.f0;
                    }
                    else
                    {
                        if (g_491.f5)
                            break;
                        if (g_679.f7)
                            continue;
                    }
                    p_47 = func_60(((safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(l_617, (safe_lshift_func_uint8_t_u_s((func_74(((g_714 , (safe_add_func_int8_t_s_s(g_359, ((safe_add_func_uint16_t_u_u(((-5L) | (0x1A5C17C0L ^ ((safe_rshift_func_uint8_t_u_s(0x9CL, g_589.f0)) ^ (-3L)))), (((safe_sub_func_int32_t_s_s(g_519.f2, p_46)) || g_507.f0) , g_507.f1))) ^ l_690)))) == 4294967295UL), g_519, p_45.f0) ^ 0xC9L), p_44)))), l_620.f0)) | 0x84F1L), l_560, p_46);
                }
            }
        }
        for (l_610 = 0; (l_610 > 58); l_610++)
        {
            int l_725 = 0L;
            union U1 l_756 = {6UL};
            if (l_725)
            {
                unsigned char l_728 = 0x35L;
                unsigned char l_750 = 0xB1L;
                int l_789 = 0xB7EC7BDFL;
                int l_792 = 0L;
                if ((safe_lshift_func_uint8_t_u_s((l_728 || (((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(l_737, (0x2502L >= 0xF76AL))), (safe_rshift_func_int8_t_s_s((~(g_30 , g_90)), (safe_sub_func_uint8_t_u_u(p_43.f0, ((safe_sub_func_int8_t_s_s((g_714 , g_89.f4), l_725)) && 0x10L))))))), 0xF8CEL)), p_43.f0)) , p_44) && g_505.f5)), 7)))
                {
                    unsigned short l_757 = 0x8DDCL;
                    g_589.f2 = (((0x38DEL & ((safe_add_func_int32_t_s_s(l_674, g_89.f2)) , (p_46 > l_689))) , 0x0F1CL) , (safe_mod_func_uint16_t_u_u(l_547.f0, (((((safe_rshift_func_int8_t_s_s(l_750, p_43.f0)) < 0x55DE1E9BL) == 6L) , g_79) , l_592))));
                    l_689 = (((safe_mul_func_int8_t_s_s(((g_519.f0 > (-9L)) <= ((((safe_mod_func_uint32_t_u_u((l_755 == ((0x3BL <= (!((g_679.f4 && func_70((func_70(p_45.f0, l_610, (l_756 , (((g_679.f6 , l_689) <= 0x01L) <= g_507.f2))) , 0x5CL), l_750, p_44)) , l_757))) == 0x2E85950AL)), g_519.f3)) & p_43.f0) < l_597.f0) && l_610)), 0xDAL)) , g_491.f6) || l_725);
                    if (g_714.f1)
                    {
                        int l_767 = 0L;
                        g_679.f2 = ((((l_547.f0 ^ func_48((safe_sub_func_int8_t_s_s(l_756.f0, (safe_rshift_func_uint16_t_u_s(((((safe_rshift_func_uint16_t_u_u(p_43.f0, (safe_div_func_int16_t_s_s(func_64((l_610 <= (-6L)), l_756.f0, (0x81F35AB5L & (g_714 , (~(0x8DL | p_43.f0)))), g_507.f4, l_757), (-5L))))) >= l_757) <= l_725) || 0L), 7)))), p_45.f0, g_30.f0, l_547, l_766)) >= 5UL) >= l_610) , l_767);
                        if (p_45.f0)
                            continue;
                    }
                    else
                    {
                        int l_772 = 1L;
                        g_679.f7 = (safe_sub_func_uint16_t_u_u(func_70(((safe_mul_func_uint8_t_u_u(l_772, (func_74(((((g_507 , l_757) >= g_440) && (p_45.f0 != p_46)) , (((safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((safe_div_func_int16_t_s_s(l_725, (g_89.f0 , (l_750 , l_757)))) || 0xCB83F96DL), g_29)), l_772)) && 0xF38163FCL) > p_43.f0)), g_79, g_679.f1) != p_44))) & 0x67L), g_30.f0, l_597.f0), 65527UL));
                        l_789 = ((g_507.f6 ^ p_47) , ((-4L) == (p_45.f0 , (((((l_547.f0 & (safe_sub_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((func_60((0x0ADA27B8L == ((safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((p_46 && (p_43 , (g_30 , g_589.f2))) && 0UL), 1UL)), 0x0F14L)) >= p_44)), g_30.f0, l_766.f0) | 1UL), l_757)), g_679.f6)), 1UL))) ^ 1UL) ^ 0UL) && 0xDEL) || l_560))));
                        p_47 = (g_790 , (g_714.f1 >= p_47));
                    }
                }
                else
                {
                    unsigned short l_791 = 65535UL;
                    l_766.f3 = l_791;
                    if (l_792)
                        break;
                    return l_756.f0;
                }
            }
            else
            {
                g_492.f2 = p_47;
                l_756.f3 = l_725;
                for (l_766.f2 = 0; (l_766.f2 != 40); l_766.f2 = safe_add_func_uint32_t_u_u(l_766.f2, 9))
                {
                    return l_766.f0;
                }
                g_505.f2 = l_766.f0;
            }
            p_47 = func_64((g_589.f4 > g_30.f0), (safe_lshift_func_int16_t_s_s(l_725, (((safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(g_440, 12)), (((safe_add_func_int16_t_s_s(p_45.f0, 0x9A52L)) ^ 0UL) | ((g_79.f3 , l_756) , l_689)))), l_610)), 65535UL)) | 0x9DL) >= 1L))), g_519.f2, p_44, l_592);
            g_714.f5 = (((g_492.f4 , g_507.f5) != (g_679.f3 || (((safe_sub_func_uint8_t_u_u((l_725 || ((safe_add_func_int16_t_s_s(g_79.f3, p_45.f0)) & ((l_725 && g_519.f0) != (safe_mul_func_int8_t_s_s((safe_div_func_int16_t_s_s(p_46, 1L)), g_507.f3))))), p_43.f0)) <= l_547.f0) < p_46))) && g_89.f4);
            if ((func_60((safe_add_func_uint8_t_u_u(((p_47 <= l_560) || ((safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(((safe_div_func_int16_t_s_s(p_47, (g_589.f7 , (safe_mul_func_uint16_t_u_u((l_756 , l_548), func_60(g_79.f2, ((safe_rshift_func_uint16_t_u_s(func_74(func_70((+((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s(p_47, p_46)), 4)), g_790.f6)) == (-5L))), g_79.f0, l_725), l_597, l_689), 4)) < p_44), l_766.f0)))))) & g_440), g_505.f1)) <= g_79.f2), l_737)), 4294967291UL)), p_47)) , 0xF6D7L)), 1L)), l_737, l_725) < g_507.f4))
            {
                unsigned char l_882 = 0x3CL;
                if (p_43.f0)
                    break;
                g_491.f5 = p_43.f0;
                if (((+((safe_rshift_func_uint8_t_u_u((((l_725 > (g_519 , (safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((((g_359 == (~p_45.f0)) == ((0x8CEFL && ((safe_rshift_func_int8_t_s_s((-1L), 2)) && (p_43.f0 | 0xFD9CL))) < ((safe_mod_func_uint8_t_u_u(1UL, 0x7BL)) >= 5UL))) == 0xA4E4DD04L) > p_46), 65535UL)) | 4294967294UL), 0UL)))) || l_847) == 0xF60DD9ADL), 3)) , p_46)) > 0xACL))
                {
                    const unsigned l_852 = 18446744073709551615UL;
                    int l_858 = 1L;
                    l_858 = ((g_515.f0 , (0x019FL | (l_755 < (g_30 , (safe_sub_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s(3L, 5)) , (!(l_674 , l_852))) & (func_70((((safe_add_func_int16_t_s_s(g_589.f4, (safe_lshift_func_int16_t_s_s(p_44, l_725)))) , 0L) < g_519.f2), g_857, l_597.f0) == g_440)), 0x03D6L)))))) , 0x3223F967L);
                    p_47 = (g_359 <= ((safe_mod_func_uint16_t_u_u(0xAB55L, p_45.f0)) != (safe_lshift_func_uint8_t_u_s((1L < g_589.f5), (safe_sub_func_uint8_t_u_u((((safe_unary_minus_func_int16_t_s(0x082CL)) || (p_43.f0 != ((safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((((p_44 , ((safe_mod_func_int16_t_s_s(g_679.f6, (-1L))) || 0L)) , 0x4C91L) || l_560), g_507.f1)), 3)) & p_46))) & 0x829CL), 0x04L))))));
                    l_756.f3 = (safe_lshift_func_int8_t_s_u(((g_790.f7 > ((safe_mul_func_int16_t_s_s((g_79.f2 && (g_679.f7 & ((safe_mul_func_uint16_t_u_u((((safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(l_858, g_519.f3)), l_882)) >= (~((9L != (safe_sub_func_uint16_t_u_u(((p_46 , (safe_add_func_int32_t_s_s((safe_div_func_int16_t_s_s(l_597.f0, 0x203AL)), g_679.f7))) > 253UL), g_79.f3))) < g_507.f7))) && 0xF217L), p_47)) , g_507.f1))), g_679.f3)) ^ p_45.f0)) | l_547.f0), 5));
                    g_679.f5 = 0x53F5CD70L;
                }
                else
                {
                    union U2 l_892 = {1L};
                    if ((g_30 , (l_889 , (safe_mod_func_uint16_t_u_u(((g_515.f4 , l_892) , ((((func_70((g_492.f4 >= (safe_mul_func_uint8_t_u_u(g_29, l_895))), ((p_46 && ((g_507.f3 | (-1L)) , g_505.f3)) && p_44), l_892.f0) < g_519.f0) , 0xFEA0L) | 8UL) || l_592)), 0x0D6EL)))))
                    {
                        unsigned l_920 = 0xBD96245EL;
                        int l_925 = (-5L);
                        l_725 = (safe_mul_func_uint16_t_u_u(l_892.f0, (((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(p_43.f0, p_47)), (p_44 < (safe_div_func_int32_t_s_s(l_892.f0, g_679.f2))))), (safe_rshift_func_int16_t_s_s((250UL >= (safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((((safe_rshift_func_uint8_t_u_s(((safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s((l_892.f0 , (((((l_920 , 0xCEF0L) > p_45.f0) <= 0UL) , p_47) , g_79.f2)), 0x1C00C175L)), 1UL)) || l_725), 7)) , 7L) & l_725) == 1UL), l_766.f0)), g_79.f1))), 6)))) <= g_79.f0) >= g_90)));
                        l_925 = ((((((((g_519 , func_64(l_548, (g_515.f7 | ((safe_div_func_int32_t_s_s(l_920, l_920)) <= 0x5DA3L)), (safe_mul_func_uint8_t_u_u((g_505.f7 < ((g_79 , l_756) , p_44)), (-9L))), p_43.f0, l_847)) ^ 0x05L) ^ 0xB33903ADL) > p_45.f0) & p_43.f0) , g_79.f0) , 0x63577792L) > p_45.f0);
                        g_507.f2 = (-1L);
                    }
                    else
                    {
                        char l_926 = (-1L);
                        l_926 = 0x92D0358CL;
                        return p_44;
                    }
                    p_47 = (safe_add_func_uint32_t_u_u(4294967295UL, l_725));
                    return g_440;
                }
            }
            else
            {
                unsigned short l_935 = 65533UL;
                l_935 = (safe_mod_func_int16_t_s_s(((~(safe_add_func_uint8_t_u_u(l_547.f0, g_515.f2))) | (safe_mod_func_int8_t_s_s(g_29, 255UL))), p_46));
                return l_597.f0;
            }
        }
        p_47 = (g_505.f6 < (func_48(l_936, g_37, l_689, l_547, (l_689 , g_519)) & g_505.f1));
    }
    for (g_79.f1 = 0; (g_79.f1 != 14); g_79.f1 = safe_add_func_int32_t_s_s(g_79.f1, 1))
    {
        short l_942 = 0x815AL;
        int l_951 = (-1L);
        union U1 l_973 = {0x2FL};
        int l_1002 = 1L;
        int l_1028 = 0x0C45EED8L;
        unsigned l_1031 = 0xF34E57C8L;
        const char l_1050 = 0xD7L;
        unsigned l_1119 = 0x7ED1529AL;
    }
    for (p_45.f0 = 18; (p_45.f0 >= 2); p_45.f0 = safe_sub_func_uint16_t_u_u(p_45.f0, 6))
    {
        short l_1184 = 0xA31AL;
        union U1 l_1189 = {246UL};
        p_47 = ((l_1184 != func_64(func_60(l_1184, l_895, func_70(p_47, (g_1102.f6 <= (safe_sub_func_uint32_t_u_u(0x43EAEC7BL, (safe_div_func_int32_t_s_s(func_48(l_1184, func_74(((0x2751FA59L > 0xCF243972L) & p_43.f0), l_1189, l_1184), g_507.f6, g_519, l_547), (-2L)))))), g_857)), l_1075, p_47, p_45.f0, g_505.f1)) == l_895);
    }
    p_44 = 0x6373E6F1L;
    return p_45.f0;
}







static int func_48(unsigned p_49, int p_50, unsigned p_51, union U1 p_52, union U1 p_53)
{
    int l_522 = 0x7FE424C5L;
    unsigned char l_523 = 0xE7L;
    char l_528 = 0x67L;
    char l_529 = 1L;
    l_528 = (((~g_492.f4) > ((((((0x10B2L || ((l_522 > (0x90289039L > (l_523 <= ((safe_add_func_uint16_t_u_u(g_507.f0, 0x28DBL)) & (0xF8L != (safe_div_func_int32_t_s_s(l_522, g_505.f7))))))) >= 0UL)) >= 0x55L) || p_52.f0) & g_507.f4) >= g_37) ^ 0x4ACBL)) > p_49);
    g_515.f5 = (func_70(g_505.f2, p_52.f0, l_529) | ((safe_rshift_func_int16_t_s_u(p_52.f0, 1)) ^ 8UL));
    l_522 = (4294967295UL && (func_60((safe_mul_func_uint8_t_u_u(p_50, p_49)), g_89.f5, g_79.f0) || 0L));
    for (g_359 = (-16); (g_359 <= 4); ++g_359)
    {
        unsigned l_538 = 0x13E1CF48L;
        g_515.f5 = (func_70(g_507.f3, l_538, p_52.f0) , (65528UL & ((safe_mul_func_uint16_t_u_u(g_507.f2, (safe_mul_func_uint16_t_u_u((((!l_538) > 65531UL) || 4294967295UL), l_528)))) <= g_505.f0)));
        p_50 = g_491.f1;
    }
    return l_528;
}







static unsigned func_60(int p_61, unsigned p_62, char p_63)
{
    p_61 = g_89.f2;
    return g_517;
}







static const unsigned func_64(const char p_65, int p_66, int p_67, unsigned short p_68, short p_69)
{
    unsigned l_115 = 0UL;
    unsigned l_118 = 0xDB463C3EL;
    char l_163 = 0x6EL;
    union U2 l_222 = {0x92L};
    int l_229 = 0L;
    unsigned short l_233 = 0x3F18L;
    int l_243 = 0xF7F12930L;
    unsigned l_314 = 18446744073709551615UL;
    int l_334 = 0x4BFDCD4DL;
    union U1 l_402 = {0x1DL};
    unsigned char l_485 = 2UL;
    char l_516 = 0xAAL;
    for (g_90 = (-14); (g_90 < 11); g_90 = safe_add_func_int32_t_s_s(g_90, 5))
    {
        p_66 = p_69;
    }
    for (g_79.f2 = 22; (g_79.f2 > 32); ++g_79.f2)
    {
        const union U1 l_114 = {253UL};
        union U2 l_151 = {0x20L};
        unsigned char l_429 = 248UL;
        int l_477 = 0x39CF260AL;
        short l_486 = 0L;
        unsigned short l_487 = 0x3294L;
        if (((safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((func_70(((safe_div_func_uint32_t_u_u(0xC4137E2FL, p_65)) ^ (safe_lshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((g_79.f3 , (safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((l_114 , ((l_115 , func_70(l_115, (l_115 == (0xA1C1L >= g_89.f7)), g_79.f1)) & l_114.f0)), l_115)) & 0x3EL), 0xE3L)), 7))) & l_114.f0), p_66)), p_69))), l_118, l_118) | g_79.f1), g_30.f0)), l_118)) <= 0L))
        {
            const union U2 l_135 = {-6L};
            unsigned l_146 = 0x69C76AADL;
            g_89.f2 = ((((g_29 < (((safe_sub_func_int16_t_s_s(((g_79.f0 , (((safe_div_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u((p_67 & (l_135 , ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((p_67 ^ (safe_mod_func_int32_t_s_s((safe_div_func_int16_t_s_s(g_89.f3, l_114.f0)), p_67))), ((p_66 <= l_146) | p_68))), l_114.f0)), 9)) != l_118))), 1)), l_114.f0)), 5)) & l_115), 0)), 0xC8L)), (-1L))) == 0x97E3D8B0L), g_29)) ^ g_90) && 0L)) , p_65), 0xDC72L)) , g_89.f5) > 0xAAD8L)) > g_79.f2) || p_68) == p_68);
        }
        else
        {
            int l_203 = 1L;
            union U2 l_255 = {-1L};
            unsigned char l_343 = 255UL;
            for (p_67 = 14; (p_67 < (-20)); --p_67)
            {
                int l_158 = 5L;
                union U1 l_202 = {255UL};
                int l_232 = 0xA856D6ABL;
                unsigned l_271 = 0xF0242437L;
                unsigned char l_310 = 0UL;
                unsigned l_331 = 0x475F5708L;
                for (l_118 = 0; (l_118 > 53); l_118 = safe_add_func_uint8_t_u_u(l_118, 4))
                {
                    short l_174 = 0xD3CCL;
                    union U2 l_252 = {6L};
                    if (p_66)
                    {
                        int l_181 = 0x1ECA23E1L;
                        if (l_114.f0)
                            break;
                        l_163 = (l_151 , ((safe_sub_func_uint16_t_u_u(65530UL, (safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(l_158, (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((-1L), p_65)), g_89.f2)))), 0x9647L)))) && 1L));
                        g_89.f5 = ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(g_29, ((0x9BL | (p_67 ^ (safe_lshift_func_int16_t_s_u(func_70(p_66, ((safe_sub_func_int16_t_s_s(g_79.f0, (func_70((safe_add_func_int8_t_s_s((!(func_70(l_174, ((0xA5L > (safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_div_func_uint8_t_u_u(p_65, (g_89 , g_89.f1))), g_90)), 0x2BL))) , g_89.f6), p_69) , 1L)), g_29)), l_181, g_37) ^ g_79.f3))) > p_67), p_65), 13)))) <= g_30.f0))), 0xB4F1CBC0L)) | 6UL);
                        l_203 = (255UL | (safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u((65528UL & (safe_rshift_func_uint16_t_u_s((0x45CAL >= (0L >= 65534UL)), ((((safe_lshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s((((func_74((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(g_89.f7, l_158)) != (safe_mod_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((l_174 & (4294967295UL && 0x849EAACEL)) ^ p_69), 0x6085L)) && l_174), 0x1D41L))), p_65)), 7)), l_202, g_90) , 0xD6167FD5L) < g_90) , g_89.f6), p_68)), 8)) || l_203) != g_79.f0) || 0xE726L)))), g_30.f0)), g_79.f2)));
                    }
                    else
                    {
                        int l_230 = 0x2B47A6F6L;
                        union U1 l_231 = {0UL};
                        p_66 = ((0xD690D09DL == (((safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((~(safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(0x796DL, 6)) > (safe_div_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((g_79.f0 & (safe_div_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((p_69 || (l_222 , (safe_mod_func_int8_t_s_s((func_74((((safe_lshift_func_int8_t_s_u(l_222.f0, (safe_div_func_uint8_t_u_u(func_70(p_69, (l_229 < func_70((p_65 >= l_114.f0), g_29, l_114.f0)), l_151.f0), 1L)))) <= l_230) && g_89.f0), l_231, p_67) | l_174), 1L)))), 0x92L)), p_69))), 1UL)), l_229))), l_232))), l_114.f0)), l_222.f0)) == l_151.f0) || l_233)) <= p_68);
                    }
                    for (l_232 = 6; (l_232 > (-3)); --l_232)
                    {
                        int l_236 = (-1L);
                        if (p_68)
                            break;
                        g_89.f2 = l_236;
                        l_243 = ((safe_add_func_uint32_t_u_u(g_89.f7, (0x6804L && (((safe_lshift_func_int8_t_s_u(l_174, p_66)) , 0UL) , g_79.f2)))) , (safe_rshift_func_uint16_t_u_s((g_89.f3 || (l_203 == g_79.f0)), l_151.f0)));
                        p_66 = func_70(((0xACL < (safe_add_func_uint32_t_u_u(1UL, (g_79 , ((((0x1AFBL == (!p_66)) & (((g_79.f1 , (-1L)) <= (safe_lshift_func_int16_t_s_s(0x0443L, 2))) < ((5UL & 0x15DCL) <= l_233))) >= p_67) && p_68))))) < 3UL), g_79.f3, g_89.f7);
                    }
                    for (l_163 = 0; (l_163 <= 1); l_163++)
                    {
                        int l_256 = (-1L);
                        p_66 = (0x2681L == (((safe_mul_func_uint16_t_u_u(p_68, ((func_70(g_89.f6, ((l_252 , (+g_30.f0)) < g_79.f2), (g_90 && ((l_233 , (0x73L && l_174)) < 0x31L))) <= 65527UL) != 0x3BL))) <= 0xB67F1609L) == 0x38L));
                        l_243 = (p_67 <= (((l_255 , g_90) <= (func_70(l_256, (l_229 , (safe_div_func_int32_t_s_s((((((safe_div_func_int16_t_s_s((safe_sub_func_int16_t_s_s((((((l_202 , (safe_sub_func_int16_t_s_s(func_70(l_255.f0, p_65, g_90), g_79.f0))) != 2L) , g_89.f7) <= l_174) >= p_66), l_256)), 0x743BL)) , p_69) , g_89.f6) <= 65533UL) <= 0x9F73L), g_37))), p_66) || 0x4B5AL)) <= g_37));
                    }
                    g_89.f2 = ((l_202.f0 >= (g_79.f2 >= 0x09L)) && func_70((l_255.f0 & (~(safe_mod_func_uint8_t_u_u(p_65, g_89.f4)))), (safe_add_func_int16_t_s_s((-5L), (((l_114.f0 == (safe_mul_func_uint16_t_u_u(l_203, p_68))) , 0xF8C4533DL) != 0xA56CEAAEL))), p_68));
                }
                l_243 = p_69;
                if (l_271)
                {
                    union U2 l_278 = {-9L};
                    union U1 l_301 = {255UL};
                    g_89.f5 = (safe_div_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((g_37 >= ((g_30 , 0x4DE583D3L) != (l_278 , ((safe_mod_func_int16_t_s_s(func_70(p_68, (safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s(0x19L, (safe_mul_func_uint16_t_u_u((g_89.f7 || (-4L)), (safe_mod_func_uint16_t_u_u(((((((safe_div_func_uint16_t_u_u((((g_90 || g_90) & l_278.f0) < l_151.f0), p_65)) , 0x06AD7F4EL) <= p_66) ^ l_243) > p_66) | 0L), p_68)))))) || (-4L)), l_151.f0)), l_114.f0)), l_278.f0), g_79.f3)) == p_66)))), p_68)), g_90));
                    g_89.f5 = ((safe_sub_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((~(-2L)), 13)), func_74(g_89.f3, l_301, ((safe_mod_func_int8_t_s_s(((((((~l_255.f0) > ((p_68 >= (0xC6DDL < p_67)) && (safe_mod_func_int32_t_s_s(l_243, (safe_mul_func_uint8_t_u_u((l_114.f0 , p_69), 0x36L)))))) , l_203) >= p_68) , 0x54L) | g_37), 0x68L)) , p_66)))), g_37)), 0x0CL)) > 0x1052L);
                    g_89.f2 = func_70(p_67, p_66, p_65);
                    g_89.f5 = (safe_mul_func_uint16_t_u_u(g_89.f2, (l_310 < (!p_68))));
                }
                else
                {
                    unsigned char l_320 = 250UL;
                    union U1 l_323 = {0x75L};
                    g_89.f5 = ((g_79.f0 || (((((g_89.f7 | p_68) && p_66) , p_67) > (0UL == g_79.f1)) >= 0L)) <= ((~0xFE64L) > p_69));
                    if (l_151.f0)
                    {
                        unsigned l_313 = 1UL;
                        l_313 = 1L;
                        l_314 = p_65;
                        p_66 = p_65;
                        l_203 = (l_203 > func_70(((((g_89.f5 ^ (safe_lshift_func_uint16_t_u_s(((safe_unary_minus_func_uint32_t_u(p_66)) , ((safe_add_func_uint32_t_u_u(((p_68 == g_30.f0) > (g_79.f2 , ((g_37 < l_232) && p_69))), 1L)) , p_67)), l_313))) & l_158) , 0x3FEBC825L) , g_89.f0), l_203, l_320));
                    }
                    else
                    {
                        g_324 = ((safe_mul_func_uint8_t_u_u(l_118, p_65)) && (func_74((func_74(((p_67 > (-5L)) < g_89.f1), l_323, p_68) || (g_89.f5 || 0x82E84388L)), g_79, g_79.f0) ^ l_323.f0));
                        l_331 = (((safe_lshift_func_uint8_t_u_u((g_89.f5 > ((l_233 == ((g_79 , p_69) || p_66)) != (safe_sub_func_uint8_t_u_u(p_65, ((safe_add_func_int8_t_s_s((g_324 | 4294967295UL), (0x4C590541L > 0L))) , l_151.f0))))), 6)) , g_37) >= 0xB24EL);
                    }
                }
                p_66 = func_70((((safe_mod_func_int8_t_s_s(l_222.f0, 0x25L)) <= (g_89.f1 || l_334)) , (safe_add_func_uint16_t_u_u((+(~(+(((!l_331) , p_65) , p_69)))), 0x4528L))), ((((((0xD235L || l_114.f0) < p_69) ^ g_29) , g_30) , p_69) < l_202.f0), g_30.f0);
            }
            g_89.f2 = (((safe_sub_func_uint8_t_u_u(0x89L, func_70(((l_222.f0 ^ g_30.f0) || (func_70((g_30.f0 | ((safe_mod_func_uint32_t_u_u(((safe_div_func_int32_t_s_s(((p_67 , p_65) , l_343), func_74(l_343, l_114, l_203))) , p_66), l_233)) || 0x8FL)), g_90, g_79.f0) , l_255.f0)), p_68, g_79.f2))) || g_30.f0) || l_343);
        }
        g_89.f5 = (safe_sub_func_uint16_t_u_u((p_69 == (safe_sub_func_uint8_t_u_u(((g_79.f2 ^ (safe_sub_func_uint32_t_u_u(((g_89.f4 ^ (safe_mod_func_uint8_t_u_u(g_79.f1, 0xF4L))) != (safe_mod_func_int8_t_s_s(g_30.f0, (safe_sub_func_int16_t_s_s(p_68, (p_67 || 0x8B8FL)))))), (-7L)))) < g_90), g_37))), p_67));
        for (l_233 = 0; (l_233 <= 51); l_233 = safe_add_func_int8_t_s_s(l_233, 6))
        {
            char l_360 = 8L;
            l_360 = (safe_unary_minus_func_int8_t_s(g_359));
            p_66 = ((+((!(p_69 , l_114.f0)) >= (!(safe_lshift_func_uint8_t_u_s((l_151.f0 || p_67), ((~g_89.f1) & (0x045CL & l_360))))))) , p_68);
            for (l_243 = 0; (l_243 < 4); l_243 = safe_add_func_int16_t_s_s(l_243, 1))
            {
                char l_369 = 0x95L;
                l_369 = (((safe_lshift_func_uint16_t_u_s(((((g_30 , g_30.f0) > (g_79.f2 | p_66)) < ((p_69 && p_67) <= (p_65 >= (((safe_lshift_func_int16_t_s_s((-1L), 9)) <= 0xD28EFC2BL) == 0L)))) && 4UL), g_89.f4)) || l_229) > 0x7BDEL);
            }
        }
        if ((safe_mod_func_int32_t_s_s((g_89.f6 , ((((safe_mul_func_int8_t_s_s(l_151.f0, p_69)) | (((safe_lshift_func_int8_t_s_s(func_70(func_74(((safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(p_65, 3)), 0xBA8AB619L)) <= l_151.f0), g_79, ((g_89.f1 ^ l_334) == g_30.f0)), g_359, l_243), p_68)) != 1L) < g_79.f0)) < p_66) < 4294967295UL)), l_163)))
        {
            const int l_390 = (-6L);
            union U1 l_396 = {1UL};
            unsigned char l_401 = 0x27L;
            g_89.f5 = ((func_70(((((safe_add_func_uint8_t_u_u((~(safe_sub_func_int32_t_s_s(((l_151.f0 ^ ((g_89.f4 != (p_69 <= (p_68 < g_37))) | (((safe_mul_func_uint16_t_u_u(g_29, (safe_rshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(l_114.f0, g_90)), 3)))) != (g_79 , 0UL)) ^ g_79.f3))) & l_151.f0), g_359))), l_390)) > p_68) <= 0xE0CBL) > 8UL), g_79.f2, l_229) ^ l_390) | 8L);
            for (l_334 = 17; (l_334 > (-6)); l_334--)
            {
                int l_395 = (-10L);
                g_89.f2 = (safe_add_func_uint8_t_u_u((func_74(l_395, l_396, g_29) | (safe_sub_func_int8_t_s_s(((g_79.f1 | ((((p_67 >= (l_401 > ((g_90 , l_402) , g_30.f0))) , l_395) == g_90) <= 0x48D6C81EL)) != p_68), 0x77L))), 255UL));
                p_66 = (func_74(((safe_div_func_uint16_t_u_u(0xF677L, l_151.f0)) == g_359), g_79, ((safe_rshift_func_int16_t_s_s(0xB285L, 10)) | 0UL)) && (safe_sub_func_uint8_t_u_u(p_67, ((4294967287UL == p_67) ^ g_89.f5))));
                l_243 = (((((!p_68) , 0xA180L) ^ (safe_lshift_func_uint16_t_u_u(l_229, 6))) == (safe_rshift_func_int16_t_s_u((+(4294967289UL || (func_70(g_37, g_359, (safe_sub_func_int32_t_s_s(l_243, (func_70(g_359, p_68, g_89.f7) || (-1L))))) ^ 0UL))), l_395))) , g_89.f5);
            }
            p_66 = l_396.f0;
            g_89.f2 = l_229;
        }
        else
        {
            int l_425 = 0xBB4315D4L;
            union U2 l_490 = {0xC1L};
            union U1 l_493 = {255UL};
            if (((safe_div_func_uint16_t_u_u((p_68 >= func_70(l_151.f0, (((safe_sub_func_int32_t_s_s((0xC055L != (safe_lshift_func_uint16_t_u_s(2UL, ((safe_div_func_int16_t_s_s((safe_add_func_int16_t_s_s((!(((g_89 , (!4294967292UL)) ^ ((l_114.f0 && (p_67 || ((-10L) >= 0x035C83AAL))) | l_233)) == l_115)), 0xDEE8L)), (-1L))) <= l_425)))), 0x50AC84BFL)) == 0x1F7AL) >= 0x4073L), l_233)), (-3L))) | l_163))
            {
                return g_79.f2;
            }
            else
            {
                int l_426 = 0xA215B597L;
                int l_478 = 0x37098DB1L;
                unsigned l_506 = 4294967295UL;
                p_66 = (l_426 && (((safe_add_func_int8_t_s_s(g_79.f2, l_429)) > p_67) , (-1L)));
                if ((safe_add_func_int32_t_s_s((l_402 , ((((l_429 != (p_67 <= 0L)) & (safe_lshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(p_68, (safe_rshift_func_int16_t_s_u(g_89.f4, 2)))), ((0x40L ^ g_440) & (safe_mod_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u(g_79.f1, g_90)) == p_67), p_68))))), 3))) > g_79.f0) & g_37)), g_440)))
                {
                    int l_476 = 1L;
                    for (g_440 = 13; (g_440 <= (-29)); g_440 = safe_sub_func_uint8_t_u_u(g_440, 8))
                    {
                        char l_455 = 0xD7L;
                        l_477 = ((((safe_mod_func_int32_t_s_s((safe_div_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u((g_89.f4 ^ l_455), ((safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u(l_426, (safe_add_func_int32_t_s_s((p_66 , (safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((((l_425 , (l_402 , g_79)) , (safe_div_func_int32_t_s_s((((l_426 < p_67) || 7L) == l_229), 0x48D2017BL))) , 65535UL), 0xE971L)) ^ 0L), 5L)), 1))), g_324)))) || 65535UL), 1)) >= 0x92A4L) || l_476), 0x912113F2L)) >= p_67), p_67)), p_67)) < g_79.f2))), l_476)), g_79.f3)), 0x8FC8BB43L)) , p_66) & p_68) == l_426);
                        l_478 = 0x19585323L;
                    }
                    if (func_74(g_30.f0, g_79, (safe_rshift_func_int8_t_s_u((((g_30.f0 && ((safe_rshift_func_int8_t_s_s((p_65 , (func_74(l_478, l_402, l_114.f0) | ((((safe_sub_func_uint8_t_u_u((l_485 , 0xB3L), g_79.f1)) | p_69) ^ l_486) || g_29))), 6)) & g_79.f2)) != l_478) , l_486), l_487))))
                    {
                        l_493.f3 = ((safe_rshift_func_int8_t_s_u(g_359, p_66)) > (p_66 > (l_490 , (((func_74(l_476, g_79, (((g_491 , (((g_492 , l_493) , 4294967295UL) >= 1UL)) , p_68) != p_68)) | p_69) & p_66) || 0xA2B2L))));
                    }
                    else
                    {
                        int l_496 = (-1L);
                        g_89.f5 = (l_476 ^ ((safe_add_func_int8_t_s_s((g_30 , l_496), l_334)) <= (safe_add_func_uint32_t_u_u(((g_89.f2 ^ l_476) & (safe_mul_func_uint8_t_u_u((g_79.f2 & (safe_mul_func_int8_t_s_s(l_233, l_490.f0))), 0L))), p_65))));
                        if (p_68)
                            continue;
                    }
                }
                else
                {
                    short l_510 = 0xE4C3L;
                    g_505.f2 = ((safe_add_func_uint8_t_u_u((((g_505 , 0xE9L) , ((((l_485 > g_37) , (((l_506 != func_74(g_89.f4, g_79, l_506)) || 0UL) & p_69)) == 1L) > 0x23D4D1E4L)) || p_68), g_79.f0)) > l_486);
                    p_66 = func_70(p_65, g_492.f4, p_65);
                    p_66 = ((g_492 , func_74((~0x40B2AE9AL), (g_507 , g_79), ((safe_rshift_func_uint8_t_u_s(p_67, 3)) , 0UL))) <= (p_66 && 8L));
                    l_493.f3 = l_510;
                }
            }
            return g_79.f0;
        }
    }
    g_507.f7 = (safe_div_func_uint8_t_u_u((!((safe_lshift_func_uint8_t_u_u((g_515 , p_65), 7)) < (p_66 , (l_516 , l_229)))), g_29));
    return l_233;
}







static const char func_70(char p_71, unsigned p_72, int p_73)
{
    short l_91 = 0L;
    l_91 = ((func_74(p_73, g_79, p_71) != p_73) <= g_90);
    return g_89.f5;
}







static short func_74(unsigned p_75, union U1 p_76, unsigned short p_77)
{
    unsigned char l_80 = 0xFFL;
    int l_81 = 0xE48FFC8EL;
    unsigned l_84 = 1UL;
    l_81 = l_80;
    g_89.f7 = (~(l_84 && (((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((g_37 >= (g_89 , 0L)), 1)) | ((g_79.f0 && (g_29 < l_80)) | p_77)), (p_75 > (-1L)))) , p_77) <= g_90)));
    return g_89.f3;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_30.f0, "g_30.f0", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_79.f0, "g_79.f0", print_hash_value);
    transparent_crc(g_89.f0, "g_89.f0", print_hash_value);
    transparent_crc(g_89.f1, "g_89.f1", print_hash_value);
    transparent_crc(g_89.f2, "g_89.f2", print_hash_value);
    transparent_crc(g_89.f3, "g_89.f3", print_hash_value);
    transparent_crc(g_89.f4, "g_89.f4", print_hash_value);
    transparent_crc(g_89.f5, "g_89.f5", print_hash_value);
    transparent_crc(g_89.f6, "g_89.f6", print_hash_value);
    transparent_crc(g_89.f7, "g_89.f7", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_324, "g_324", print_hash_value);
    transparent_crc(g_359, "g_359", print_hash_value);
    transparent_crc(g_440, "g_440", print_hash_value);
    transparent_crc(g_491.f0, "g_491.f0", print_hash_value);
    transparent_crc(g_491.f1, "g_491.f1", print_hash_value);
    transparent_crc(g_491.f2, "g_491.f2", print_hash_value);
    transparent_crc(g_491.f3, "g_491.f3", print_hash_value);
    transparent_crc(g_491.f4, "g_491.f4", print_hash_value);
    transparent_crc(g_491.f5, "g_491.f5", print_hash_value);
    transparent_crc(g_491.f6, "g_491.f6", print_hash_value);
    transparent_crc(g_491.f7, "g_491.f7", print_hash_value);
    transparent_crc(g_492.f0, "g_492.f0", print_hash_value);
    transparent_crc(g_492.f1, "g_492.f1", print_hash_value);
    transparent_crc(g_492.f2, "g_492.f2", print_hash_value);
    transparent_crc(g_492.f3, "g_492.f3", print_hash_value);
    transparent_crc(g_492.f4, "g_492.f4", print_hash_value);
    transparent_crc(g_492.f5, "g_492.f5", print_hash_value);
    transparent_crc(g_492.f6, "g_492.f6", print_hash_value);
    transparent_crc(g_492.f7, "g_492.f7", print_hash_value);
    transparent_crc(g_505.f0, "g_505.f0", print_hash_value);
    transparent_crc(g_505.f1, "g_505.f1", print_hash_value);
    transparent_crc(g_505.f2, "g_505.f2", print_hash_value);
    transparent_crc(g_505.f3, "g_505.f3", print_hash_value);
    transparent_crc(g_505.f4, "g_505.f4", print_hash_value);
    transparent_crc(g_505.f5, "g_505.f5", print_hash_value);
    transparent_crc(g_505.f6, "g_505.f6", print_hash_value);
    transparent_crc(g_505.f7, "g_505.f7", print_hash_value);
    transparent_crc(g_507.f0, "g_507.f0", print_hash_value);
    transparent_crc(g_507.f1, "g_507.f1", print_hash_value);
    transparent_crc(g_507.f2, "g_507.f2", print_hash_value);
    transparent_crc(g_507.f3, "g_507.f3", print_hash_value);
    transparent_crc(g_507.f4, "g_507.f4", print_hash_value);
    transparent_crc(g_507.f5, "g_507.f5", print_hash_value);
    transparent_crc(g_507.f6, "g_507.f6", print_hash_value);
    transparent_crc(g_507.f7, "g_507.f7", print_hash_value);
    transparent_crc(g_515.f0, "g_515.f0", print_hash_value);
    transparent_crc(g_515.f1, "g_515.f1", print_hash_value);
    transparent_crc(g_515.f2, "g_515.f2", print_hash_value);
    transparent_crc(g_515.f3, "g_515.f3", print_hash_value);
    transparent_crc(g_515.f4, "g_515.f4", print_hash_value);
    transparent_crc(g_515.f5, "g_515.f5", print_hash_value);
    transparent_crc(g_515.f6, "g_515.f6", print_hash_value);
    transparent_crc(g_515.f7, "g_515.f7", print_hash_value);
    transparent_crc(g_517, "g_517", print_hash_value);
    transparent_crc(g_519.f0, "g_519.f0", print_hash_value);
    transparent_crc(g_589.f0, "g_589.f0", print_hash_value);
    transparent_crc(g_589.f1, "g_589.f1", print_hash_value);
    transparent_crc(g_589.f2, "g_589.f2", print_hash_value);
    transparent_crc(g_589.f3, "g_589.f3", print_hash_value);
    transparent_crc(g_589.f4, "g_589.f4", print_hash_value);
    transparent_crc(g_589.f5, "g_589.f5", print_hash_value);
    transparent_crc(g_589.f6, "g_589.f6", print_hash_value);
    transparent_crc(g_589.f7, "g_589.f7", print_hash_value);
    transparent_crc(g_679.f0, "g_679.f0", print_hash_value);
    transparent_crc(g_679.f1, "g_679.f1", print_hash_value);
    transparent_crc(g_679.f2, "g_679.f2", print_hash_value);
    transparent_crc(g_679.f3, "g_679.f3", print_hash_value);
    transparent_crc(g_679.f4, "g_679.f4", print_hash_value);
    transparent_crc(g_679.f5, "g_679.f5", print_hash_value);
    transparent_crc(g_679.f6, "g_679.f6", print_hash_value);
    transparent_crc(g_679.f7, "g_679.f7", print_hash_value);
    transparent_crc(g_686, "g_686", print_hash_value);
    transparent_crc(g_714.f0, "g_714.f0", print_hash_value);
    transparent_crc(g_714.f1, "g_714.f1", print_hash_value);
    transparent_crc(g_714.f2, "g_714.f2", print_hash_value);
    transparent_crc(g_714.f3, "g_714.f3", print_hash_value);
    transparent_crc(g_714.f4, "g_714.f4", print_hash_value);
    transparent_crc(g_714.f5, "g_714.f5", print_hash_value);
    transparent_crc(g_714.f6, "g_714.f6", print_hash_value);
    transparent_crc(g_714.f7, "g_714.f7", print_hash_value);
    transparent_crc(g_790.f0, "g_790.f0", print_hash_value);
    transparent_crc(g_790.f1, "g_790.f1", print_hash_value);
    transparent_crc(g_790.f2, "g_790.f2", print_hash_value);
    transparent_crc(g_790.f3, "g_790.f3", print_hash_value);
    transparent_crc(g_790.f4, "g_790.f4", print_hash_value);
    transparent_crc(g_790.f5, "g_790.f5", print_hash_value);
    transparent_crc(g_790.f6, "g_790.f6", print_hash_value);
    transparent_crc(g_790.f7, "g_790.f7", print_hash_value);
    transparent_crc(g_857, "g_857", print_hash_value);
    transparent_crc(g_974, "g_974", print_hash_value);
    transparent_crc(g_996.f0, "g_996.f0", print_hash_value);
    transparent_crc(g_996.f1, "g_996.f1", print_hash_value);
    transparent_crc(g_996.f2, "g_996.f2", print_hash_value);
    transparent_crc(g_996.f3, "g_996.f3", print_hash_value);
    transparent_crc(g_996.f4, "g_996.f4", print_hash_value);
    transparent_crc(g_996.f5, "g_996.f5", print_hash_value);
    transparent_crc(g_996.f6, "g_996.f6", print_hash_value);
    transparent_crc(g_996.f7, "g_996.f7", print_hash_value);
    transparent_crc(g_1044, "g_1044", print_hash_value);
    transparent_crc(g_1102.f0, "g_1102.f0", print_hash_value);
    transparent_crc(g_1102.f1, "g_1102.f1", print_hash_value);
    transparent_crc(g_1102.f2, "g_1102.f2", print_hash_value);
    transparent_crc(g_1102.f3, "g_1102.f3", print_hash_value);
    transparent_crc(g_1102.f4, "g_1102.f4", print_hash_value);
    transparent_crc(g_1102.f5, "g_1102.f5", print_hash_value);
    transparent_crc(g_1102.f6, "g_1102.f6", print_hash_value);
    transparent_crc(g_1102.f7, "g_1102.f7", print_hash_value);
    transparent_crc(g_1164, "g_1164", print_hash_value);
    transparent_crc(g_1311.f0, "g_1311.f0", print_hash_value);
    transparent_crc(g_1311.f1, "g_1311.f1", print_hash_value);
    transparent_crc(g_1311.f2, "g_1311.f2", print_hash_value);
    transparent_crc(g_1311.f3, "g_1311.f3", print_hash_value);
    transparent_crc(g_1311.f4, "g_1311.f4", print_hash_value);
    transparent_crc(g_1311.f5, "g_1311.f5", print_hash_value);
    transparent_crc(g_1311.f6, "g_1311.f6", print_hash_value);
    transparent_crc(g_1311.f7, "g_1311.f7", print_hash_value);
    transparent_crc(g_1349, "g_1349", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
