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
   unsigned f0 : 26;
   signed f1 : 7;
   signed f2 : 13;
   signed f3 : 5;
   signed : 0;
};

struct S1 {
   signed f0 : 3;
   signed f1 : 16;
   unsigned f2 : 1;
   unsigned f3 : 5;
};

union U2 {
   short f0;
};

union U3 {
   int f0;
   char f1;
};

union U4 {
   unsigned short f0;
   signed f1 : 18;
};

union U5 {
   unsigned f0;
   unsigned char f1;
   char f2;
};

union U6 {
   unsigned short f0;
   int f1;
   int f2;
   unsigned f3;
   unsigned f4;
};


static unsigned char g_19 = 1UL;
static struct S0 g_42 = {2553,-9,-58,-2};
static union U4 g_47 = {0xBB1DL};
static union U3 g_74 = {-2L};
static int g_83 = 8L;
static short g_91 = 0xB98FL;
static struct S1 g_116 = {0,146,0,2};
static unsigned short g_150 = 65528UL;
static char g_161 = 0x44L;
static unsigned g_199 = 0x3514C0A4L;
static char g_200 = 0x4FL;
static unsigned g_228 = 18446744073709551608UL;
static unsigned short g_229 = 0x596CL;
static unsigned char g_256 = 0xAAL;
static unsigned char g_371 = 246UL;
static union U5 g_412 = {18446744073709551607UL};
static union U3 g_464 = {-6L};
static struct S1 g_534 = {-0,-190,0,2};
static union U6 g_692 = {65526UL};
static union U4 g_719 = {0xD5C2L};
static union U3 g_797 = {-1L};



static union U3 func_1(void);
static char func_5(union U5 p_6, union U6 p_7, unsigned p_8, struct S1 p_9);
static union U5 func_10(unsigned short p_11, short p_12, int p_13, union U4 p_14);
static int func_20(unsigned char p_21, short p_22, int p_23, struct S1 p_24, char p_25);
static unsigned func_30(union U6 p_31, unsigned char p_32, int p_33, unsigned short p_34, union U4 p_35);
static union U6 func_36(int p_37, struct S0 p_38, int p_39, char p_40, union U4 p_41);
static struct S0 func_50(unsigned p_51, union U6 p_52, union U3 p_53);
static union U6 func_56(union U2 p_57, union U5 p_58, union U4 p_59, union U5 p_60);
static union U4 func_63(unsigned p_64, int p_65);
static int func_68(unsigned p_69, union U3 p_70, unsigned p_71, unsigned short p_72);
static union U3 func_1(void)
{
    unsigned char l_2 = 0x3AL;
    int l_45 = (-6L);
    int l_46 = 9L;
    unsigned char l_693 = 0x6EL;
    union U4 l_694 = {0x919BL};
    int l_701 = 0xC0A37516L;
    struct S1 l_702 = {-0,-76,0,3};
    short l_703 = (-5L);
    unsigned l_718 = 0xD5C977F3L;
    unsigned l_869 = 0x13A8EB48L;
    short l_870 = 0x9EF9L;
    l_870 = ((l_869 = ((~(l_2 ^ (safe_rshift_func_uint8_t_u_s(l_2, func_5(func_10(l_2, (l_46 = (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(0xE4L, 0)), (((g_19 ^ func_20((safe_rshift_func_uint16_t_u_u(l_2, (safe_sub_func_uint8_t_u_u(((+func_30(func_36(l_2, g_42, ((safe_mod_func_int16_t_s_s((l_45 = 9L), 1UL)) || 0xDEDBL), l_46, g_47), g_19, l_693, g_692.f0, l_694)) | 2UL), l_701)))), l_46, g_19, l_702, l_703)) >= 0xF2L) > g_371)))), l_718, g_719), g_692, g_692.f0, l_702))))) && l_702.f0)) | g_797.f1);

                        return g_464;

    }







static char func_5(union U5 p_6, union U6 p_7, unsigned p_8, struct S1 p_9)
{
    short l_734 = (-4L);
    int l_758 = (-1L);
    int l_759 = 0x9953AC5BL;
    int l_760 = 0x614B9D37L;
    struct S1 l_779 = {1,100,0,3};
    char l_783 = 0xABL;
    struct S0 l_784 = {7677,0,21,1};
    union U3 l_789 = {-8L};
    char l_858 = 9L;
    union U4 l_862 = {65533UL};
    unsigned l_863 = 0xD71DE4F4L;
    union U6 l_867 = {65528UL};
    char l_868 = (-1L);
lbl_762:
    if (l_734)
    {
        union U4 l_740 = {0x2F9FL};
        g_534 = g_534;
        for (p_7.f4 = (-4); (p_7.f4 > 9); p_7.f4 = safe_add_func_uint16_t_u_u(p_7.f4, 4))
        {
            unsigned short l_739 = 0UL;
            int l_745 = (-1L);
            union U4 l_761 = {0x70E1L};
            p_9.f0 = (safe_add_func_int32_t_s_s(((l_739 & 4294967292UL) != p_7.f3), ((l_740.f1 = (p_9.f1 = func_30((g_692 = p_7), p_7.f0, (0xB3L < 0UL), (p_7.f4 & ((0xDFL && g_42.f3) != g_74.f0)), l_740))) >= 9L)));

                                    g_534 = g_116;
            g_42.f2 = g_464.f1;
            if (((p_6.f1 = ((safe_mul_func_uint16_t_u_u(p_8, ((safe_mod_func_uint16_t_u_u(l_745, (g_91 = (l_761.f1 = (l_740.f1 = (safe_add_func_int32_t_s_s(((((!0x5A5509EAL) & (func_30((g_692 = g_692), (safe_sub_func_int32_t_s_s((~((l_734 & l_734) && (safe_mul_func_uint16_t_u_u((l_760 = (p_6.f1 != ((safe_mul_func_int8_t_s_s(g_116.f3, (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((l_759 = (g_464.f1 = (((l_758 = p_7.f2) >= g_116.f0) || p_6.f1))), p_7.f1)), 14)))) >= 0x4645L))), p_9.f3)))), 0x76A09FC6L)), l_740.f1, g_534.f3, l_761) | p_9.f2)) != l_734) == g_719.f0), 0x6C8DF515L))))))) & 0x6060L))) < l_734)) > 251UL))
            {
                p_9.f0 = (((~g_74.f0) & 4294967288UL) > p_6.f2);
            }
            else
            {
                g_116.f1 = p_7.f3;
                return l_745;
            }

                    }

                    }
    else
    {
        g_42 = g_42;
    }
    g_42 = g_42;
    if (g_47.f1)
    {
        if (g_74.f0)
            goto lbl_762;
lbl_829:
        g_534.f0 = 0xA2C40D9AL;
    }
    else
    {
        int l_769 = 0x471B744EL;
        for (g_412.f2 = 27; (g_412.f2 > 13); --g_412.f2)
        {
            struct S1 l_776 = {1,79,0,4};
            if ((((safe_mul_func_uint8_t_u_u((g_371 = (safe_mul_func_uint8_t_u_u(p_6.f1, (+(l_760 = (g_200 <= l_769)))))), 0x6BL)) <= ((safe_lshift_func_int16_t_s_u(p_9.f0, (((((safe_lshift_func_int8_t_s_u(func_20(g_534.f3, (((p_9.f0 == ((safe_lshift_func_int8_t_s_s(((-10L) <= (p_8 && l_758)), l_769)) > g_42.f3)) > g_534.f3) <= 0x2BCF286BL), p_6.f1, l_776, p_6.f2), 5)) ^ 0xFDL) <= g_42.f0) == l_776.f0) < 0xC87E2F8FL))) > g_199)) || l_734))
            {
                struct S1 l_780 = {0,67,0,4};
                for (p_7.f1 = 0; (p_7.f1 <= 8); ++p_7.f1)
                {
                    p_9.f1 = g_74.f0;
                    p_9 = p_9;
                }

                                l_776 = (l_780 = l_779);
                g_42.f2 = (g_719.f1 = p_7.f3);

                                l_769 = (g_371 != ((g_464.f1 & (l_780.f3 | func_20(g_228, g_371, g_83, l_776, func_20((g_19 = p_7.f3), (g_91 = (((safe_lshift_func_int16_t_s_s(p_6.f2, g_229)) ^ p_6.f1) <= l_776.f0)), p_9.f1, l_780, l_769)))) || 0xA7L));
            }
            else
            {
                l_783 = p_9.f3;
            }
        }

                l_784 = l_784;
        return p_9.f0;
    }

        for (p_7.f1 = 0; (p_7.f1 >= 25); p_7.f1++)
    {
        unsigned char l_796 = 255UL;
        struct S0 l_798 = {4622,6,68,4};
        union U4 l_828 = {4UL};
        short l_861 = 0xB7FFL;
        l_798 = func_50(p_7.f1, func_36((func_68(((safe_add_func_int8_t_s_s(p_7.f0, p_9.f2)) <= (g_161 < p_9.f1)), l_789, (safe_lshift_func_uint16_t_u_s(p_8, 8)), (safe_mod_func_uint8_t_u_u((g_256 = (0x4D7FL & (((safe_rshift_func_int16_t_s_u(l_796, 13)) && 0L) != 0xCC8BL))), 3UL))) <= l_760), l_784, l_784.f0, g_534.f0, g_719), g_797);

                if (func_68(((safe_mod_func_int32_t_s_s((l_798.f1 = (g_797.f1 & (p_7.f4 && (+(safe_add_func_uint16_t_u_u(((l_798.f2 | (safe_mod_func_uint8_t_u_u(g_692.f0, (safe_sub_func_int32_t_s_s((p_8 == (0xDC91L <= func_68((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(p_9.f3, g_42.f1)), 2)), l_789, p_7.f1, g_228))), g_797.f1))))) ^ l_798.f0), p_7.f4)))))), (-7L))) != 0L), g_797, p_7.f4, p_8))
        {
            int l_825 = 1L;
            l_779.f0 = g_116.f2;
            l_779 = p_9;
            if ((safe_lshift_func_int16_t_s_u((((safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(func_30(g_692, g_42.f0, (safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s((g_534.f2 & ((safe_mul_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((+(0x4F73L && l_825)), p_7.f3)), l_825)) <= (safe_mul_func_int8_t_s_s(p_9.f1, (g_719.f0 && g_199))))), g_74.f1)), g_42.f1)), l_825, l_828), g_719.f0)), g_116.f3)) != g_200) <= (-7L)), 9)))
            {
                if (l_784.f2)
                    goto lbl_829;
            }
            else
            {
                return g_797.f1;
            }

                    }
        else
        {
            int l_830 = 1L;
            p_9.f0 = (p_9.f1 = l_830);
            p_9.f0 = ((0x02L & g_150) == p_7.f4);
            if ((0UL <= l_830))
            {
                char l_841 = 3L;
                g_42.f2 = (safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((g_42.f0 >= (g_371 == (safe_mul_func_int8_t_s_s((l_784.f3 != (safe_sub_func_uint32_t_u_u(((l_841 > ((l_784.f2 = ((p_9.f1 = ((~(g_47.f0 = p_9.f2)) || (safe_add_func_int8_t_s_s(((l_841 ^ (safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(l_830, (l_798.f3 = p_7.f1))), (l_830 <= l_798.f2)))) || (-1L)), l_841)))) >= l_828.f0)) && p_7.f0)) | 0xB8D8L), 8UL))), 0xBFL)))), (-1L))), p_9.f2));

                                return p_7.f1;
            }
            else
            {
                l_784.f2 = ((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((!l_830), ((safe_sub_func_int16_t_s_s(l_830, func_20(g_200, (safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(l_858, 14)), (safe_mod_func_int32_t_s_s(0xF1D1E84DL, func_30(g_692, g_42.f1, ((p_8 | (0UL | l_798.f3)) & l_861), l_830, l_862))))), g_412.f2, p_9, g_19))) | 0x7EL))), l_734)) || l_830);

                                            }

                                    return l_863;
        }

                l_868 = ((p_6.f1 <= p_7.f3) != (((safe_unary_minus_func_uint8_t_u(((safe_lshift_func_int16_t_s_u(g_719.f0, p_7.f1)) | 1L))) & (func_30(l_867, l_798.f0, l_784.f2, g_19, l_828) > 4294967295UL)) & 0x3AL));
    }

        return l_734;
}







static union U5 func_10(unsigned short p_11, short p_12, int p_13, union U4 p_14)
{
    struct S1 l_720 = {0,234,0,1};
    union U5 l_733 = {0UL};
    l_720 = l_720;
    if (((safe_rshift_func_int8_t_s_s(g_534.f1, 3)) <= (safe_add_func_int32_t_s_s(l_720.f2, p_14.f0))))
    {
        int l_727 = (-5L);
        l_727 = (safe_sub_func_int16_t_s_s(l_720.f2, g_719.f0));
    }
    else
    {
        unsigned char l_728 = 246UL;
        p_14.f1 = p_11;

                g_42.f2 = l_728;
    }

        g_116 = g_116;
    g_116.f0 = (0x44L && (safe_rshift_func_uint8_t_u_s(l_720.f0, ((safe_lshift_func_uint16_t_u_s(((l_720.f3 || 4294967293UL) == ((p_14.f1 = ((-6L) >= (((((func_20(l_720.f1, p_11, p_12, g_534, l_720.f3) > p_12) ^ g_42.f0) > l_720.f0) > 0x9F05L) < 65535UL))) && l_720.f3)), 5)) & l_720.f2))));
    return l_733;

    }







static int func_20(unsigned char p_21, short p_22, int p_23, struct S1 p_24, char p_25)
{
    short l_704 = 0x386AL;
    int l_717 = 0xF4E50EC0L;
    l_704 = (g_116.f1 <= 248UL);
    g_47.f1 = (l_717 = (safe_sub_func_int16_t_s_s((0x05L || g_42.f1), (safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(l_704, (safe_rshift_func_uint8_t_u_u(246UL, 7)))), (safe_add_func_int16_t_s_s((g_161 ^ p_24.f1), (safe_mul_func_uint8_t_u_u((p_24.f0 <= (!0xF7C5490FL)), p_21)))))))));

    return p_22;
}







static unsigned func_30(union U6 p_31, unsigned char p_32, int p_33, unsigned short p_34, union U4 p_35)
{
    struct S1 l_700 = {-0,62,0,0};
    g_42 = g_42;
    for (g_74.f0 = (-15); (g_74.f0 != (-15)); g_74.f0++)
    {
        int l_699 = (-8L);
        g_116.f1 = (p_34 < (safe_lshift_func_int8_t_s_u((l_699 = g_534.f2), 0)));
        l_700 = g_116;
        if (g_83)
            continue;
    }

    return l_700.f1;
}







static union U6 func_36(int p_37, struct S0 p_38, int p_39, char p_40, union U4 p_41)
{
    unsigned l_55 = 0xCCF58D91L;
    union U5 l_62 = {0xE8B7DD14L};
    union U3 l_428 = {7L};
    for (p_40 = 0; (p_40 == 3); p_40 = safe_add_func_uint16_t_u_u(p_40, 2))
    {
        int l_54 = 0x4499C77EL;
        union U2 l_61 = {1L};
        p_38 = func_50((l_55 = l_54), func_56(l_61, l_62, func_63(g_42.f2, p_39), g_412), l_428);
    }
    return g_692;

    }







static struct S0 func_50(unsigned p_51, union U6 p_52, union U3 p_53)
{
    unsigned short l_429 = 7UL;
    union U3 l_430 = {0x0423C186L};
    int l_439 = 8L;
    int l_463 = (-1L);
    struct S0 l_478 = {3720,-2,32,-1};
    struct S1 l_499 = {0,166,0,0};
    if (func_68((l_429 != l_429), l_430, (((g_229 = 1UL) > g_150) && ((((safe_add_func_uint16_t_u_u(p_52.f0, ((safe_lshift_func_uint8_t_u_u((g_256 = ((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((~l_430.f1), 1)), 0xA14CL)) || (l_439 = g_42.f2))), l_430.f0)) == g_199))) <= p_53.f1) != g_161) | l_430.f1)), g_91))
    {
        unsigned short l_440 = 65535UL;
        l_440 = g_228;
        p_52.f2 = g_150;

            }
    else
    {
        unsigned char l_447 = 7UL;
        l_439 = 0x60A541CAL;
        p_53.f0 = (func_68((~(safe_sub_func_uint8_t_u_u(p_51, (safe_add_func_int32_t_s_s(g_74.f1, p_52.f0))))), p_53, ((safe_lshift_func_uint8_t_u_s((l_447 || p_51), g_42.f3)) <= (g_116.f3 ^ (~p_53.f1))), p_53.f1) != p_53.f1);
        return g_42;
    }

        g_74.f0 = p_52.f0;

        if (func_68((safe_lshift_func_int8_t_s_u(p_52.f2, (65527UL & func_68((((((safe_add_func_uint32_t_u_u((l_430.f0 = (safe_mul_func_uint16_t_u_u(g_161, (safe_mul_func_uint16_t_u_u(((l_463 = ((0x96D40372L >= (safe_rshift_func_uint8_t_u_u(g_42.f1, (safe_add_func_int32_t_s_s((p_52.f0 == l_430.f1), (safe_unary_minus_func_int8_t_s((safe_add_func_int16_t_s_s(g_116.f3, (p_51 && 1UL)))))))))) <= l_430.f0)) && g_161), p_53.f0))))), l_439)) != 0xB684L) | l_439) <= 0xFA84D3B9L) == 6L), g_74, l_439, g_19)))), g_464, g_412.f1, l_429))
    {
        unsigned l_471 = 4UL;
        int l_472 = 1L;
        struct S0 l_482 = {2071,-5,48,-3};
        unsigned short l_483 = 0xDA09L;
        union U3 l_484 = {0x940CC902L};
        int l_565 = 8L;
        int l_592 = (-10L);
        struct S1 l_600 = {-1,217,0,1};
        char l_605 = 1L;
        for (g_464.f1 = (-13); (g_464.f1 < 17); g_464.f1 = safe_add_func_int32_t_s_s(g_464.f1, 3))
        {
            unsigned l_467 = 4294967295UL;
            struct S1 l_479 = {-1,126,0,3};
            struct S1 l_480 = {-0,65,0,1};
            struct S1 l_481 = {1,73,0,0};
            if ((~l_467))
            {
                unsigned short l_468 = 65532UL;
                l_472 = (func_68(((g_42.f0 || (((~l_468) <= (p_52.f4 && g_150)) >= g_42.f0)) <= g_464.f1), (p_53 = g_464), (l_471 = (((safe_mod_func_int32_t_s_s(((g_19 < (g_412.f2 <= g_412.f1)) && 4UL), 0x45487B85L)) & l_467) & 65535UL)), l_472) == l_468);
            }
            else
            {
                short l_477 = (-8L);
                for (l_467 = 15; (l_467 < 31); ++l_467)
                {
                    for (l_439 = 4; (l_439 < 28); l_439++)
                    {
                        p_53.f0 = g_74.f1;

                                                if (g_116.f2)
                            goto lbl_487;
                        l_477 = 0x6D9E034AL;
                    }
                    g_42 = l_478;
                }
                if (g_256)
                {
                    l_480 = (l_479 = g_116);
                    g_116 = l_481;
                }
                else
                {
                    g_42 = l_482;
                }
                l_483 = (1L || 1L);
            }
            if (g_150)
                break;
            l_430.f0 = func_68((l_482.f3 <= 1UL), l_484, g_74.f1, (l_478.f0 | p_52.f3));
        }

                if ((safe_lshift_func_uint16_t_u_s((p_51 >= 0x32L), 15)))
        {
lbl_487:
            g_47.f1 = p_52.f3;

            g_83 = 0x0617D871L;
        }
        else
        {
            struct S0 l_500 = {2216,10,25,3};
            int l_518 = 0xF9B53902L;
            union U3 l_524 = {0xEBC05423L};
            struct S1 l_533 = {-1,-201,0,1};
            unsigned char l_589 = 0UL;
            for (l_484.f1 = 0; (l_484.f1 > (-2)); l_484.f1 = safe_sub_func_uint16_t_u_u(l_484.f1, 2))
            {
                struct S0 l_490 = {3193,-6,-60,3};
                l_490 = l_490;
                l_482.f3 = (func_68((g_116.f2 = (0x9DF43732L < l_471)), l_430, l_483, (~((safe_mul_func_int16_t_s_s(l_490.f1, (safe_mod_func_int16_t_s_s((l_430.f1 > (0xE749L & g_74.f1)), 9L)))) > g_116.f1))) ^ l_482.f3);
                for (g_464.f1 = 16; (g_464.f1 != (-10)); g_464.f1--)
                {
                    unsigned l_497 = 0x273DC26DL;
                    struct S1 l_498 = {-0,-130,0,1};
                    if (l_497)
                    {
                        l_498 = g_116;
                        if (p_52.f4)
                            continue;
                    }
                    else
                    {
                        if (g_412.f1)
                            break;
                    }
                    l_499 = l_499;
                    p_53.f0 = 0x6749B941L;

                                    }
                l_478 = l_500;
            }

                        if ((p_53.f0 = (safe_lshift_func_uint8_t_u_u(g_199, 5))))
            {
                unsigned l_519 = 0xC86E067EL;
                int l_529 = 0xC56878A8L;
                l_519 = ((p_51 >= (l_518 = ((p_53.f0 || ((p_53.f0 >= (g_412.f1 = (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((((safe_sub_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((l_471 >= (l_430.f0 < (safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int32_t_s(1L)), 2)))), ((((g_42.f3 < l_478.f3) ^ p_51) && 2UL) || 0x4A62L))) != p_52.f3), p_52.f3)) | 0x3B07E92FL) ^ l_500.f1), p_51)), 0xF2L)), 1)), 65535UL)))) || g_161)) == (-9L)))) >= p_53.f0);

                l_529 = (safe_sub_func_uint8_t_u_u((func_68((safe_sub_func_int32_t_s_s(1L, g_83)), l_524, (((g_464.f1 < g_200) ^ (p_52.f0 > 0xE26C2D76L)) ^ ((safe_rshift_func_int16_t_s_s(g_412.f2, 5)) > ((l_482.f1 = g_116.f2) >= g_412.f1))), l_519) && l_524.f0), 0x94L));
                p_53.f0 = (g_464.f0 = g_256);

                            }
            else
            {
                unsigned short l_532 = 65535UL;
                union U3 l_566 = {0xAC37D0DCL};
                for (l_484.f0 = 0; (l_484.f0 < 2); l_484.f0 = safe_add_func_uint32_t_u_u(l_484.f0, 1))
                {
                    unsigned l_551 = 0xBEE20119L;
                    int l_552 = (-9L);
                    if (((p_53.f0 < l_500.f0) < (l_532 = g_42.f1)))
                    {
                        l_500.f2 = (g_42.f3 = l_532);
                        g_534 = (g_116 = l_533);
                    }
                    else
                    {
                        l_500 = g_42;
                        l_533.f0 = (g_83 = 0x9EF1ECBDL);
                    }
                    g_42.f1 = g_256;
                    g_116.f0 = (p_52.f2 = (safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(p_52.f1, (g_42.f0 <= (safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s(g_412.f2, (l_552 = (0UL || (g_228 ^ (((safe_add_func_int16_t_s_s(((g_91 = p_52.f0) & (safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s((l_551 = (g_42.f3 ^ (l_533.f1 & g_200))), 65530UL)), l_499.f2))), g_42.f2)) < 0UL) == 0xC4L)))))), g_116.f0)), l_532))))), g_412.f1)));
                    g_42 = (l_478 = g_42);
                }

                                if (func_68(((safe_rshift_func_uint8_t_u_s((l_478.f3 = (safe_rshift_func_uint8_t_u_s(0UL, (safe_lshift_func_int16_t_s_s(((l_478.f1 = (p_52.f0 >= l_532)) != ((((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((g_464.f1 == (g_74.f0 = ((~l_430.f1) != func_68(g_412.f1, p_53, ((l_532 | g_412.f1) >= (-6L)), p_52.f0)))), l_482.f3)) && l_532), l_430.f0)), g_534.f0)) ^ g_412.f1) ^ 1L) ^ l_533.f0)), 6))))), p_52.f3)) < 7UL), p_53, g_534.f3, l_565))
                {
                    unsigned short l_586 = 0x1CABL;
                    short l_599 = 1L;
                    struct S1 l_602 = {1,25,0,0};
                    char l_616 = (-6L);
                    if (((p_53.f1 & func_68(l_533.f1, (g_74 = l_566), (safe_mul_func_uint8_t_u_u(0xB3L, g_116.f0)), ((safe_sub_func_int16_t_s_s(0x43EBL, g_534.f3)) != (g_228 && ((safe_mul_func_int16_t_s_s((0x6DBDAC93L & 4294967295UL), 0x860CL)) == g_116.f0))))) & p_52.f0))
                    {
                        unsigned char l_573 = 0x9BL;
                        l_482 = l_500;
                        p_52.f2 = ((l_500.f1 = ((p_53.f1 = (l_573 = p_53.f0)) | ((l_533.f1 = (safe_mul_func_int8_t_s_s(g_412.f1, ((g_199 != g_42.f3) != l_532)))) < (safe_lshift_func_int16_t_s_u(l_500.f0, 12))))) & ((safe_mod_func_uint32_t_u_u((((safe_add_func_uint32_t_u_u(g_534.f0, (safe_lshift_func_int16_t_s_s(l_500.f2, g_42.f2)))) ^ p_51) ^ 4L), 1L)) <= 255UL));

                                                l_499.f1 = ((g_199 = (safe_sub_func_uint8_t_u_u(g_83, (((l_586 != (safe_add_func_int16_t_s_s(g_42.f2, (l_589 == ((~(safe_mod_func_int16_t_s_s((((l_592 < 0UL) < (l_482.f2 = (l_533.f0 = p_52.f2))) <= (safe_add_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_u(g_161, (((((safe_lshift_func_uint16_t_u_u((g_412.f2 && p_51), l_586)) | g_42.f1) != l_472) ^ g_464.f1) && l_500.f3))) == g_534.f2) | 0x8B66L), l_599))), g_150))) > p_52.f4))))) == p_53.f1) != l_599)))) > p_53.f1);
                    }
                    else
                    {
                        struct S1 l_601 = {0,139,0,1};
                        l_602 = (l_601 = l_600);
                        g_116.f0 = l_430.f1;
                        l_499 = g_534;
                        g_534.f1 = p_51;
                    }

                                        l_602.f0 = ((65529UL || (6UL != l_533.f1)) && l_532);
                    if (((safe_rshift_func_uint8_t_u_u(l_605, (l_518 && ((safe_add_func_int8_t_s_s(l_472, func_68((l_592 = (l_439 = (0UL < (l_566.f1 | (g_228 != (0xEFL <= (safe_sub_func_uint8_t_u_u(((g_42.f2 || l_500.f3) < l_602.f2), l_592)))))))), p_53, l_602.f3, l_565))) || 0x36AC7434L)))) == p_52.f3))
                    {
                        unsigned l_617 = 18446744073709551614UL;
                        p_52.f2 = func_68(((g_534.f2 == 1UL) < func_68((g_116.f3 = ((safe_mul_func_int16_t_s_s(((-9L) <= (safe_lshift_func_int8_t_s_s(p_53.f1, (((((g_116.f2 = l_533.f3) && 5L) || l_500.f1) && (safe_lshift_func_int8_t_s_s(((((p_51 == g_116.f1) <= l_478.f0) != l_616) || p_52.f1), p_53.f1))) || l_471)))), p_53.f1)) | l_617)), p_53, g_150, l_430.f0)), p_53, g_412.f2, p_52.f4);
                    }
                    else
                    {
                        short l_629 = (-1L);
                        p_52.f2 = func_68(((safe_sub_func_uint8_t_u_u(l_533.f3, (p_52.f0 >= (l_478.f1 = (safe_unary_minus_func_uint8_t_u((func_68((safe_rshift_func_uint8_t_u_u(l_518, g_74.f1)), g_74, p_52.f1, (g_83 != ((safe_mul_func_uint16_t_u_u(g_116.f0, ((safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s((g_91 = 0xCF86L), g_42.f2)), l_602.f1)) == g_116.f3))) < 0x6533L))) | 65531UL))))))) ^ l_524.f1), l_524, p_52.f3, l_629);
                        g_42.f3 = ((safe_add_func_uint32_t_u_u((0UL && l_599), l_566.f0)) == 9UL);
                    }
                    p_52.f2 = 0x0B1F56A8L;
                }
                else
                {
                    struct S1 l_632 = {-1,-120,0,1};
                    l_533 = l_632;
                }

                            }

        }

            }
    else
    {
        unsigned l_645 = 1UL;
        struct S0 l_672 = {1100,1,-55,2};
        union U3 l_689 = {0xAD831DE8L};
        for (g_256 = 0; (g_256 < 30); g_256 = safe_add_func_uint8_t_u_u(g_256, 8))
        {
            int l_664 = 0x50BEE59BL;
            int l_665 = 0x0206DC59L;
            for (g_47.f0 = (-16); (g_47.f0 < 22); g_47.f0 = safe_add_func_int8_t_s_s(g_47.f0, 5))
            {
                unsigned l_641 = 1UL;
                int l_642 = (-1L);
                g_83 = (safe_mul_func_uint16_t_u_u(g_256, (safe_mul_func_uint8_t_u_u((~(l_642 = (l_641 = (g_91 | g_229)))), (safe_sub_func_int8_t_s_s(g_47.f0, (g_228 >= ((l_645 = p_52.f4) == p_53.f0))))))));
                l_665 = (safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(p_52.f2, (l_499.f0 & (safe_add_func_uint32_t_u_u((((g_534.f1 ^ ((safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(g_83, (((((l_642 == ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s(0xFCBA6236L, ((safe_rshift_func_int16_t_s_u((4294967286UL ^ (p_52.f0 && l_664)), 5)) | 0x374C6B50L))), l_499.f3)), g_116.f2)) > p_51)) < p_52.f0) | p_52.f1) & 0x0EC205DFL) <= p_52.f2))), (-3L))) <= g_412.f1)) && g_534.f1) < l_641), g_534.f3))))), l_478.f1));
            }

            if (p_52.f2)
                break;
            if ((safe_rshift_func_int8_t_s_s(g_371, 0)))
            {
                int l_676 = (-1L);
                for (g_47.f0 = (-5); (g_47.f0 == 1); g_47.f0 = safe_add_func_uint16_t_u_u(g_47.f0, 7))
                {
                    struct S1 l_673 = {0,-50,0,1};
                    for (p_53.f0 = 18; (p_53.f0 < 3); p_53.f0--)
                    {
                        l_672 = g_42;
                        g_534 = l_673;
                    }
                    g_42.f2 = (((((safe_rshift_func_int16_t_s_u(p_52.f3, 2)) || (~l_676)) & p_52.f0) | (((+g_42.f0) < p_51) & 0x01L)) < l_673.f1);
                    l_478.f1 = (p_52.f0 == ((0x63L || (safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s((((p_53.f0 = ((l_672.f3 = ((safe_lshift_func_int8_t_s_s((8L || g_116.f3), 0)) && (g_116.f1 = (safe_mod_func_int8_t_s_s(g_412.f2, l_676))))) & p_53.f0)) <= g_42.f3) == (safe_add_func_int16_t_s_s((p_52.f3 != g_534.f1), l_430.f1))), l_665)), l_676))) && l_429));
                    for (g_412.f0 = (-28); (g_412.f0 < 30); g_412.f0 = safe_add_func_uint32_t_u_u(g_412.f0, 1))
                    {
                        g_464.f0 = g_19;

                                            }

                }
                g_534.f0 = l_499.f3;
            }
            else
            {
                return g_42;
            }
        }
        p_52.f2 = func_68(l_672.f0, (g_74 = l_689), g_199, ((l_689.f0 > (p_52.f4 ^ l_689.f1)) != (safe_add_func_uint16_t_u_u(((p_53.f0 >= g_534.f1) > p_52.f3), g_199))));
    }

            l_499 = (g_116 = g_116);
    return l_478;
}







static union U6 func_56(union U2 p_57, union U5 p_58, union U4 p_59, union U5 p_60)
{
    unsigned char l_417 = 1UL;
    int l_426 = 0L;
    union U6 l_427 = {65535UL};
    p_59.f1 = (safe_mod_func_int32_t_s_s(((g_412.f2 = g_42.f2) == (safe_add_func_int32_t_s_s(l_417, p_58.f1))), (safe_rshift_func_uint8_t_u_s((((((l_426 = (safe_add_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(g_150)), ((255UL >= ((safe_lshift_func_int16_t_s_u((g_91 = ((safe_unary_minus_func_uint32_t_u(0xCA76CCA6L)) != g_74.f1)), 14)) && (65534UL > p_59.f0))) | g_229)))) > l_417) || g_161) || p_58.f2) < p_58.f2), g_116.f2))));

        return l_427;

    }







static union U4 func_63(unsigned p_64, int p_65)
{
    int l_86 = 0xEEAF7921L;
    int l_345 = 7L;
    struct S0 l_380 = {7624,7,-63,2};
    int l_398 = 0L;
    for (p_64 = 27; (p_64 == 48); p_64 = safe_add_func_uint32_t_u_u(p_64, 8))
    {
        short l_73 = 0x9548L;
        int l_87 = 0x4BE5697AL;
        int l_341 = 0xD79ECDA7L;
        union U3 l_344 = {0x65BEFB07L};
    }
    for (l_345 = 0; (l_345 == (-30)); l_345--)
    {
        short l_378 = 0x1AD3L;
        int l_379 = 0xD487A202L;
        struct S0 l_381 = {1920,9,-11,-0};
        l_379 = (l_86 = (safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(func_68(l_378, g_74, p_65, g_91), (((g_371 != g_371) || 65535UL) || (-3L)))), 0xE2L)));
        if (g_116.f0)
            continue;
        l_380 = l_380;
        l_381 = l_380;
    }
    for (g_47.f0 = 0; (g_47.f0 > 37); ++g_47.f0)
    {
        short l_390 = 0x134BL;
        int l_391 = 0x58738F40L;
        unsigned l_407 = 0x64AD36B8L;
        unsigned l_408 = 1UL;
        unsigned char l_409 = 0x6DL;
        l_380.f3 = (safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((l_380.f3 != (safe_mul_func_uint8_t_u_u((g_256 ^ g_19), l_380.f0))), (0xA909A3CDL >= (l_391 = (g_42.f0 = (0x0DE8L | l_390)))))), l_380.f0));
        g_42.f3 = (safe_mod_func_uint32_t_u_u(((l_409 = ((safe_rshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(((((l_398 = (g_116.f3 > (g_199 = g_116.f1))) && ((safe_add_func_int8_t_s_s((((l_380.f1 = p_65) > p_64) & ((safe_lshift_func_uint16_t_u_u(((0x1F33E96EL || (safe_mod_func_uint16_t_u_u((g_229 = (safe_sub_func_uint32_t_u_u(((g_199 == g_161) < p_64), (l_407 = ((l_86 = p_64) <= l_345))))), p_64))) >= g_116.f2), g_228)) <= g_371)), 1L)) | p_64)) ^ 0x548FL) > l_408), p_64)), 0)) & g_91)) | g_116.f0), g_42.f3));
        p_65 = ((0xE4E5L ^ (0xC66E59A3L & (safe_rshift_func_int8_t_s_s(g_42.f0, 5)))) > l_391);
    }

        return g_47;

    }







static int func_68(unsigned p_69, union U3 p_70, unsigned p_71, unsigned short p_72)
{
    short l_90 = 0xB00FL;
    int l_97 = (-1L);
    struct S1 l_115 = {-1,150,0,0};
    unsigned l_152 = 1UL;
    char l_198 = 1L;
    unsigned short l_232 = 65535UL;
    struct S0 l_237 = {4250,5,79,1};
    unsigned char l_320 = 0x0BL;
lbl_337:
    for (g_74.f1 = 0; (g_74.f1 >= 21); g_74.f1 = safe_add_func_uint16_t_u_u(g_74.f1, 7))
    {
        unsigned l_92 = 1UL;
        int l_100 = 0x339BCA7AL;
        int l_101 = 5L;
        int l_197 = 1L;
        struct S0 l_204 = {2600,2,-60,-4};
        p_70.f0 = (((g_91 = l_90) & l_92) > ((p_72 = (g_47.f0 = g_19)) | ((l_101 = (safe_sub_func_int8_t_s_s(((g_74.f1 < (l_97 = (safe_sub_func_uint32_t_u_u(l_92, p_70.f1)))) != (safe_rshift_func_uint16_t_u_u((l_100 = ((g_42.f3 == p_70.f1) <= g_42.f0)), p_69))), p_71))) < 0x61DAE56BL)));

                if ((safe_mod_func_int8_t_s_s(p_72, 0x19L)))
        {
            unsigned char l_106 = 0x47L;
            int l_132 = 0xE7910ABAL;
            struct S1 l_143 = {1,94,0,0};
            if (((safe_mod_func_uint32_t_u_u((g_91 > g_42.f3), (l_106 ^ l_100))) | (safe_unary_minus_func_uint16_t_u((g_47.f0 ^ (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(g_74.f1, 6)), ((0L != g_42.f1) || g_83))))))))
            {
                for (l_92 = 0; (l_92 >= 5); ++l_92)
                {
                    short l_114 = 0xC475L;
                    l_114 = g_42.f0;
                    g_116 = l_115;
                    l_100 = (~p_71);
                }
            }
            else
            {
                int l_123 = 0x1A1E6DEAL;
                int l_160 = (-5L);
                int l_175 = (-6L);
                if (((safe_rshift_func_uint8_t_u_s(((((safe_mul_func_uint16_t_u_u(((((!0x0DL) ^ l_115.f1) < (l_100 = (safe_add_func_uint16_t_u_u(65533UL, l_123)))) < 0x7EB9L), (safe_mod_func_uint16_t_u_u(0x5C11L, (safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s((g_42.f2 || p_70.f1), p_71)), p_71)), l_132)))))) > g_116.f3) == l_92) <= p_72), 0)) > g_19))
                {
                    short l_133 = 0x2789L;
                    int l_162 = 0x6101610AL;
                    if (((l_101 = (((!l_133) & (((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(((1L || (p_70.f1 && (g_116.f0 != ((((~(p_70.f0 = p_72)) | (g_42.f3 = l_100)) ^ p_71) >= (((safe_mul_func_int16_t_s_s((((((0x92485D13L == (safe_mod_func_int32_t_s_s((-8L), l_115.f1))) | l_123) <= p_71) > g_116.f2) < l_133), g_42.f2)) == l_123) >= g_116.f2))))) != l_101), 6)), 6)) <= g_116.f2) && l_106)) <= p_69)) ^ 1UL))
                    {
                        struct S1 l_142 = {0,-47,0,0};
                        int l_151 = 0xF98C0194L;
                        l_143 = l_142;
                        l_115.f0 = ((g_74.f1 && ((p_72 = (safe_mod_func_uint16_t_u_u(l_133, p_70.f1))) | (g_42.f0 | (safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((g_150 = (g_47.f0 = g_116.f2)), ((g_116.f3 = l_101) || (l_151 = l_133)))), (g_42.f2 & 1L)))))) | g_42.f2);
                        g_116.f1 = p_72;
                    }
                    else
                    {
                        int l_153 = 1L;
                        l_152 = 1L;
                        g_83 = (((((((0x307C177FL == ((!l_153) != l_100)) ^ (4294967287UL < 0x8031382DL)) != ((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(0xF5B9L, ((l_160 = 0xB730L) == p_69))), 3)), (g_161 = 0UL))) == 0L)) || 65528UL) < (-10L)) != 255UL) != 0xE2B3L);
                        l_162 = (-1L);
                        if (g_116.f0)
                            continue;
                    }
                    if ((0x34L | 0x59L))
                    {
                        unsigned l_165 = 0xC7F9DB91L;
                        g_47.f1 = (safe_add_func_uint32_t_u_u((l_165 || p_70.f1), (g_116.f3 = (g_42.f0 >= l_165))));

                        g_83 = ((safe_mod_func_int16_t_s_s(p_70.f0, l_123)) ^ (g_42.f1 != 1L));
                    }
                    else
                    {
                        return g_91;
                    }

                    if (p_70.f1)
                        break;
                    l_175 = (g_83 = ((l_133 < (safe_unary_minus_func_int8_t_s(((((-1L) || (g_116.f2 = ((safe_add_func_int8_t_s_s(7L, (l_143.f2 < 4294967295UL))) != (p_72 = l_115.f1)))) || (p_72 && ((l_160 = (safe_mod_func_int16_t_s_s((g_47.f1 > (safe_mod_func_uint16_t_u_u(l_152, g_116.f1))), p_69))) < l_123))) < 0x7BBEL)))) && 0xADL));
                }
                else
                {
                    if (l_143.f2)
                        break;
                    for (p_70.f1 = 0; (p_70.f1 == (-9)); p_70.f1 = safe_sub_func_int8_t_s_s(p_70.f1, 5))
                    {
                        unsigned short l_184 = 65531UL;
                        g_42.f1 = 0xE8A0DB83L;
                        l_160 = ((g_83 = (0xC2A9FDACL < ((g_42.f3 | (p_69 = 1UL)) && (safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((l_97 = l_100), (~((safe_mod_func_uint8_t_u_u(l_184, p_72)) && ((p_70.f1 || p_70.f1) >= l_184))))), p_70.f1))))) && 0x117FE557L);
                    }

                                    }

                                p_70.f0 = (safe_mul_func_uint16_t_u_u(l_106, 0xFDF7L));

                            }

            g_42.f1 = (safe_mul_func_uint16_t_u_u(l_106, p_70.f0));
            l_143 = g_116;
            for (l_132 = 0; (l_132 <= (-12)); --l_132)
            {
                struct S1 l_194 = {-0,-226,0,4};
                unsigned char l_203 = 1UL;
                if (l_143.f1)
                {
                    return g_42.f1;
                }
                else
                {
                    struct S1 l_193 = {-0,235,0,0};
                    l_100 = 0x6A339AD1L;
                    for (l_92 = (-25); (l_92 <= 35); ++l_92)
                    {
                        l_194 = l_193;
                        l_193.f1 = (((safe_sub_func_int16_t_s_s(l_143.f2, p_72)) & (((g_116.f3 = (((l_197 && l_198) || (((((g_199 = 0x0FL) < ((g_200 = l_143.f0) > ((0UL ^ ((g_150 >= g_42.f2) < g_150)) >= p_71))) == p_70.f0) && l_115.f0) ^ 0x7EL)) | (-2L))) == 0xBB3813ABL) != p_70.f0)) ^ g_116.f0);
                    }
                    l_203 = (safe_sub_func_uint16_t_u_u(p_69, 0x7BBAL));
                    g_116.f1 = (-8L);
                }
                g_42 = l_204;
            }
        }
        else
        {
            struct S1 l_205 = {1,-95,0,4};
            l_115 = l_205;
            l_100 = (safe_sub_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(g_116.f2, (safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((((l_204.f2 = (p_70.f0 = (g_42.f2 = (((g_42.f0 < (safe_mod_func_uint32_t_u_u(g_199, (safe_rshift_func_uint16_t_u_s(g_42.f3, 13))))) <= (safe_rshift_func_int16_t_s_s(g_161, g_161))) > g_47.f0)))) && (l_115.f2 > g_74.f1)) < p_69), 7)), p_72)), 0xCED7L)))) >= l_90), p_71));
            l_205.f1 = ((safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((g_116.f0 = (safe_mul_func_int8_t_s_s(p_69, (g_229 = (g_228 = l_205.f3))))), 0x56ED219EL)), 4)) != ((safe_add_func_uint16_t_u_u((g_47.f0 = l_205.f0), 65533UL)) < l_232));
        }

        for (l_100 = 7; (l_100 >= 6); l_100 = safe_sub_func_int32_t_s_s(l_100, 4))
        {
            unsigned short l_235 = 65533UL;
            struct S0 l_236 = {4889,-0,-74,4};
            p_70.f0 = g_42.f1;
            l_235 = p_70.f0;
            l_237 = l_236;
        }
        g_42.f2 = l_115.f1;
    }
    g_42.f3 = (l_237.f2 = p_70.f1);
    for (g_74.f1 = 12; (g_74.f1 <= (-16)); g_74.f1 = safe_sub_func_int8_t_s_s(g_74.f1, 1))
    {
        unsigned l_257 = 0x072D0B3DL;
        int l_272 = 0x612929A0L;
        int l_291 = 0x5C979380L;
        int l_292 = (-5L);
        struct S1 l_339 = {1,-118,0,3};
        p_70.f0 = g_161;

                if (p_70.f0)
            break;
        if ((0x5955131BL <= (safe_rshift_func_uint8_t_u_u(p_70.f0, 7))))
        {
            unsigned char l_260 = 0xF1L;
            int l_265 = 4L;
            unsigned l_290 = 0x0EF30843L;
            struct S1 l_338 = {-1,237,0,3};
            for (g_228 = (-15); (g_228 < 54); ++g_228)
            {
                struct S0 l_247 = {47,-10,56,-2};
                for (l_90 = (-4); (l_90 > 27); l_90 = safe_add_func_uint32_t_u_u(l_90, 4))
                {
                    struct S0 l_246 = {1654,8,52,-0};
                    unsigned l_261 = 4294967295UL;
                    struct S1 l_262 = {0,98,0,0};
                    l_247 = l_246;
                    for (g_150 = (-17); (g_150 <= 3); ++g_150)
                    {
                        p_70.f0 = (g_42.f3 = (((4294967293UL == (safe_lshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(p_72, (g_256 = l_246.f2))), (l_257 ^ (p_70.f1 & (l_246.f1 = (safe_lshift_func_uint8_t_u_u((p_72 || 1L), p_70.f0))))))) || p_72), l_246.f3))) == g_91) >= l_260));
                        return l_261;
                    }
                    if (p_72)
                        break;
                    g_116 = l_262;
                }
                p_70.f0 = (safe_lshift_func_uint16_t_u_s(((l_272 = ((0xFDL ^ ((l_265 = (l_247.f2 = l_260)) > (safe_add_func_int32_t_s_s(p_71, l_257)))) > (g_228 > (safe_lshift_func_int16_t_s_s(l_257, (safe_add_func_int8_t_s_s(l_260, ((1UL > l_260) && g_42.f1)))))))) || p_70.f0), g_83));
            }
            if (p_72)
            {
                short l_275 = 6L;
                int l_301 = 0xC4EFF3E8L;
                if ((p_70.f0 = (safe_add_func_uint8_t_u_u((~l_275), 2L))))
                {
                    short l_293 = 0L;
                    int l_298 = (-1L);
                    p_70.f0 = ((p_70.f0 ^ p_71) >= (safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(p_70.f1, ((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(p_72, (safe_rshift_func_int16_t_s_s(((p_70.f1 >= ((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(l_272, l_290)), (l_292 = (l_291 = (l_265 = g_150))))) > (+(-1L)))) == l_293), 13)))), 15)) > l_272))), g_150)));
                    g_116.f1 = ((p_72 = (p_70.f1 | (safe_rshift_func_int8_t_s_s(((!(safe_rshift_func_uint8_t_u_u((+g_150), l_115.f1))) <= 0L), (g_116.f1 || 0x93L))))) < (((l_298 = 1L) ^ ((safe_rshift_func_int8_t_s_u(p_71, p_71)) <= (-1L))) > g_161));
                }
                else
                {
                    struct S0 l_304 = {3798,7,85,-2};
                    l_301 = (g_150 ^ l_292);
                    g_116.f1 = g_91;
                    for (g_91 = (-16); (g_91 >= 0); g_91 = safe_add_func_int32_t_s_s(g_91, 7))
                    {
                        g_42 = l_304;
                        if (g_229)
                            continue;
                    }
                    for (l_275 = 0; (l_275 > 17); l_275 = safe_add_func_int8_t_s_s(l_275, 9))
                    {
                        unsigned short l_307 = 1UL;
                        p_70.f0 = ((g_42.f2 >= (g_42.f3 || (l_307 && ((p_72 <= (safe_rshift_func_int16_t_s_s(p_70.f0, 11))) == ((safe_add_func_uint32_t_u_u(0xAB3DB0E1L, g_229)) || (p_70.f1 > (safe_sub_func_uint16_t_u_u(g_91, l_307)))))))) & l_304.f2);
                        l_320 = (((p_69 <= l_307) <= (g_91 >= ((safe_mul_func_uint8_t_u_u((p_71 && (safe_sub_func_uint16_t_u_u(1UL, (-1L)))), (safe_lshift_func_int8_t_s_s(g_19, g_42.f0)))) ^ p_70.f1))) < 0x63C9L);
                        l_237.f2 = (p_70.f0 = ((-2L) & (safe_add_func_uint16_t_u_u(((((((safe_lshift_func_int16_t_s_u((((safe_add_func_uint16_t_u_u(g_116.f1, g_256)) >= (safe_rshift_func_uint16_t_u_u((p_70.f1 || (safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((g_200 > p_70.f1), (l_265 = (safe_mul_func_uint8_t_u_u(g_83, ((g_116.f0 | ((safe_mod_func_int16_t_s_s(l_307, g_161)) == l_307)) | g_116.f1)))))), g_42.f2))), l_275))) ^ 255UL), p_72)) < l_275) == g_161) == l_304.f0) != l_232) || p_70.f0), 0UL))));
                    }
                }
                p_70.f0 = (l_115.f1 != 0x80L);
            }
            else
            {
                if (g_229)
                    goto lbl_337;
                if (p_70.f1)
                    continue;
            }
            l_339 = l_338;
        }
        else
        {
            struct S1 l_340 = {-1,150,0,4};
            g_116 = l_115;
            l_340 = l_339;
        }
    }
    return l_237.f3;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_42.f0, "g_42.f0", print_hash_value);
    transparent_crc(g_42.f1, "g_42.f1", print_hash_value);
    transparent_crc(g_42.f2, "g_42.f2", print_hash_value);
    transparent_crc(g_42.f3, "g_42.f3", print_hash_value);
    transparent_crc(g_74.f1, "g_74.f1", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_116.f0, "g_116.f0", print_hash_value);
    transparent_crc(g_116.f1, "g_116.f1", print_hash_value);
    transparent_crc(g_116.f2, "g_116.f2", print_hash_value);
    transparent_crc(g_116.f3, "g_116.f3", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_412.f1, "g_412.f1", print_hash_value);
    transparent_crc(g_412.f2, "g_412.f2", print_hash_value);
    transparent_crc(g_464.f1, "g_464.f1", print_hash_value);
    transparent_crc(g_534.f0, "g_534.f0", print_hash_value);
    transparent_crc(g_534.f1, "g_534.f1", print_hash_value);
    transparent_crc(g_534.f2, "g_534.f2", print_hash_value);
    transparent_crc(g_534.f3, "g_534.f3", print_hash_value);
    transparent_crc(g_692.f0, "g_692.f0", print_hash_value);
    transparent_crc(g_797.f0, "g_797.f0", print_hash_value);
    transparent_crc(g_797.f1, "g_797.f1", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
