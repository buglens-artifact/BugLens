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
   volatile unsigned f0;
   volatile unsigned f1;
   volatile unsigned char f2;
};

struct S1 {
   char f0;
   int f1;
   unsigned f2;
   volatile int f3;
   unsigned f4;
   int f5;
   volatile unsigned short f6;
   volatile short f7;
   struct S0 f8;
};

struct S2 {
   unsigned short f0;
   unsigned f1;
   unsigned f2;
};

struct S3 {
   struct S2 f0;
   int f1;
   volatile struct S2 f2;
   int f3;
   struct S1 f4;
   int f5;
   char f6;
};

struct S4 {
   volatile unsigned f0;
   struct S2 f1;
};

union U5 {
   char f0;
};

union U6 {
   struct S2 f0;
   struct S0 f1;
   int f2;
   struct S0 f3;
};


static struct S4 g_2 = {8UL,{0xE124L,0xC41FD9D0L,18446744073709551615UL}};
static char g_86 = 0x1BL;
static struct S2 g_88 = {0xE0AFL,0xD74211FAL,0xBF40F859L};
static unsigned char g_102 = 255UL;
static unsigned short g_132 = 0xC0D2L;
static unsigned g_143 = 0x7C1BE544L;
static union U5 g_188 = {0x3AL};
static int g_199 = 0x330AEBB8L;
static int g_324 = 0xCD46B94CL;
static unsigned g_326 = 0UL;
static unsigned g_336 = 0x3FB895A3L;
static char g_538 = 1L;
static volatile struct S1 g_583 = {6L,0xAF55DB09L,0x91D9F90FL,1L,0x834FB33DL,0xC6BA5699L,1UL,0x6DBDL,{9UL,1UL,9UL}};
static struct S3 g_608 = {{1UL,1UL,0xA37C8F88L},7L,{7UL,0xC18D580FL,0xF7A8F223L},-1L,{0L,0xDCE9277EL,4294967287UL,-5L,0xA183E177L,0xE86BA603L,65528UL,0x665DL,{0x036AAA67L,1UL,1UL}},0L,-1L};
static volatile struct S4 g_628 = {0x66907B63L,{0x334EL,0xA2BFFFA3L,0x8ADD36BDL}};
static volatile struct S4 g_629 = {6UL,{0xD5BDL,1UL,18446744073709551615UL}};
static struct S0 g_642 = {0UL,7UL,0xEEL};
static struct S4 g_650 = {0x294C43F4L,{0x20D1L,0xAD95ED0AL,18446744073709551608UL}};
static union U6 g_653 = {{65529UL,18446744073709551610UL,0xA4D9470EL}};



static struct S4 func_1(void);
static int func_3(int p_4, char p_5);
static int func_9(unsigned p_10, int p_11);
static struct S2 func_13(unsigned p_14, int p_15, unsigned p_16, unsigned p_17, char p_18);
static unsigned short func_31(unsigned p_32, struct S2 p_33, unsigned p_34, unsigned p_35, int p_36);
static struct S2 func_37(unsigned short p_38, short p_39, unsigned char p_40, unsigned char p_41, char p_42);
static int func_43(unsigned p_44, int p_45, char p_46, int p_47, short p_48);
static unsigned func_55(unsigned short p_56, unsigned p_57, unsigned short p_58);
static struct S2 func_60(struct S2 p_61, int p_62, unsigned char p_63, struct S2 p_64);
static struct S2 func_65(struct S2 p_66, unsigned p_67, unsigned short p_68, union U5 p_69, struct S2 p_70);
static struct S4 func_1(void)
{
    unsigned l_6 = 0xAA05D762L;
    int l_649 = 0xAFF056E8L;
    unsigned l_658 = 18446744073709551614UL;
    l_649 = (g_2 , (!func_3(l_6, (g_2.f1.f0 < g_2.f1.f2))));
    l_649 = func_9(l_6, (g_650 , (((g_608.f6 | ((g_608.f3 && ((safe_mod_func_uint16_t_u_u(func_3((g_653 , (safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(func_9(func_9(l_649, l_649), l_649), 0x5015L)), l_6))), l_6), 0x8918L)) , g_583.f5)) > g_650.f1.f1)) == g_608.f4.f0) || 0xC58282E9L)));
    l_658 = g_324;
    return g_2;
}







static int func_3(int p_4, char p_5)
{
    char l_12 = 0xFEL;
    int l_582 = 0xE89694E8L;
    int l_586 = 1L;
    struct S2 l_587 = {0UL,0x48252815L,0xAD88CB79L};
    int l_636 = 3L;
    l_582 = ((safe_lshift_func_uint16_t_u_s((p_4 == 0x9E177C42L), 13)) > (func_9((l_12 > (func_13((((((l_12 > (safe_sub_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u((((safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((g_2.f0 ^ func_31(g_2.f1.f0, func_37((!0x7756L), l_12, l_12, g_2.f1.f2, l_12), p_4, p_4, p_5)) < g_188.f0), l_12)), 4294967291UL)) | 0xA47DL) && l_12), 4294967287UL)), 14)), 5)) , 0xC7A8L), g_538))) <= g_538) && g_132) >= g_336) | 0x74L), p_5, p_5, g_188.f0, p_5) , 3UL)), l_12) || g_2.f1.f1));
    l_587 = func_13((((g_583 , l_12) || (safe_mod_func_int16_t_s_s((l_12 && (p_5 | (p_4 & 0x633110F7L))), l_586))) && 65528UL), l_12, g_86, l_586, p_5);
    for (g_2.f1.f2 = 3; (g_2.f1.f2 == 42); g_2.f1.f2 = safe_add_func_int8_t_s_s(g_2.f1.f2, 1))
    {
        int l_604 = 0xA714B071L;
        union U5 l_607 = {0xC7L};
        int l_610 = 5L;
        for (l_12 = 0; (l_12 != (-5)); l_12 = safe_sub_func_uint16_t_u_u(l_12, 8))
        {
            int l_594 = 1L;
            union U5 l_595 = {1L};
            unsigned char l_609 = 0xA3L;
            g_583.f1 = func_9((safe_lshift_func_int16_t_s_u(func_9(p_4, (func_9(l_594, (l_595 , (3UL | (safe_rshift_func_int8_t_s_u(func_55(p_5, p_5, g_326), 3))))) | p_4)), 10)), l_12);
            if (g_583.f0)
                continue;
            if ((safe_sub_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(g_143, (safe_add_func_int16_t_s_s((l_604 > (safe_add_func_uint32_t_u_u((l_607 , g_132), (0xCBF27536L & (func_43(g_102, (g_608 , l_609), g_132, l_610, p_4) < (-4L)))))), p_4)))) , p_5), 5UL)))
            {
                short l_624 = 1L;
                l_582 = (func_55((safe_lshift_func_uint16_t_u_u(l_594, 7)), (((l_582 ^ ((p_5 != g_608.f4.f8.f0) ^ ((safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(((g_143 <= g_608.f3) != (safe_add_func_int32_t_s_s((((g_188.f0 > (safe_unary_minus_func_int32_t_s((safe_lshift_func_int16_t_s_u(p_4, ((g_143 && g_608.f0.f1) || l_595.f0)))))) == p_5) , 0x252C98C4L), 6L))), 0x265E66E7L)), 1L)), 0xDDABL)) <= l_595.f0))) | 8L) , l_624), l_609) <= 0x78D4L);
            }
            else
            {
                unsigned short l_648 = 0x12E2L;
                for (l_587.f0 = (-29); (l_587.f0 <= 51); l_587.f0++)
                {
                    char l_627 = 6L;
                    int l_638 = 9L;
                    l_627 = g_608.f0.f0;
                    if ((p_5 < p_5))
                    {
                        g_629 = g_628;
                    }
                    else
                    {
                        union U5 l_637 = {-9L};
                        g_608.f5 = (safe_lshift_func_int8_t_s_u((~(safe_rshift_func_uint16_t_u_s((+(g_608 , g_143)), 15))), l_609));
                        l_638 = (((safe_rshift_func_int8_t_s_u(func_55(g_628.f1.f2, p_5, g_336), (func_9((((g_199 || l_636) , l_637) , 18446744073709551613UL), func_9(g_336, g_608.f6)) , g_102))) || 0UL) < 0x60L);
                        if (g_608.f6)
                            continue;
                    }
                    for (g_2.f1.f1 = (-4); (g_2.f1.f1 < 49); g_2.f1.f1 = safe_add_func_int8_t_s_s(g_2.f1.f1, 1))
                    {
                        int l_647 = 0x2CE8C83DL;
                        g_608.f5 = p_4;
                        l_648 = (safe_unary_minus_func_int32_t_s(((g_642 , ((safe_mod_func_int16_t_s_s((func_43(l_636, p_4, g_608.f6, p_5, l_610) ^ func_9((safe_rshift_func_int8_t_s_u((p_5 == (((((0L | 0x70L) , 0L) , l_610) != g_326) , g_336)), 2)), l_647)), p_4)) >= 0x35L)) < 0x05L)));
                    }
                }
            }
        }
        return p_4;
    }
    return g_608.f2.f2;
}







static int func_9(unsigned p_10, int p_11)
{
    unsigned char l_581 = 0x73L;
    p_11 = 2L;
    return l_581;
}







static struct S2 func_13(unsigned p_14, int p_15, unsigned p_16, unsigned p_17, char p_18)
{
    struct S2 l_580 = {0x5BF9L,0xBB7B0D9FL,0UL};
    p_15 = g_88.f0;
    return l_580;
}







static unsigned short func_31(unsigned p_32, struct S2 p_33, unsigned p_34, unsigned p_35, int p_36)
{
    unsigned l_117 = 0UL;
    union U5 l_118 = {0xFCL};
    unsigned l_119 = 18446744073709551613UL;
    struct S2 l_142 = {3UL,0x42E7455EL,0xD3EF5034L};
    short l_154 = 0x01A0L;
    int l_167 = 0x555FCFD5L;
    unsigned l_226 = 1UL;
    short l_290 = 1L;
    unsigned l_341 = 0UL;
    struct S2 l_395 = {0xAE6BL,18446744073709551613UL,0xFAC66368L};
    unsigned l_407 = 0x2443C714L;
    short l_454 = 9L;
    unsigned short l_564 = 1UL;
    if (func_43(p_33.f1, p_32, g_88.f2, (((l_117 & (l_118 , (l_119 , (g_102 < p_33.f1)))) != ((((((safe_add_func_int8_t_s_s(((((safe_sub_func_int8_t_s_s(g_88.f2, 0xB3L)) > 0x10F5L) && 0x47B4B067L) , l_118.f0), 0xB7L)) || l_119) , g_88.f0) | p_33.f2) <= 0x6A65L) || 2L)) , 0x671196D9L), g_102))
    {
        char l_126 = (-9L);
        struct S2 l_131 = {0UL,0x2332C83DL,0x1EB91146L};
        union U5 l_197 = {1L};
        if (((((l_118.f0 != l_117) , (p_33 , g_88.f0)) , g_2.f1.f2) | (((safe_lshift_func_int8_t_s_s(((((g_102 , ((p_33 , p_32) == l_126)) & 0UL) ^ 0xC3L) | p_33.f0), p_32)) >= 0xB330L) <= g_86)))
        {
            g_2.f1 = g_88;
        }
        else
        {
            unsigned char l_127 = 1UL;
            struct S2 l_130 = {0xDF7CL,0x78769263L,0UL};
            struct S2 l_141 = {0xD1CFL,18446744073709551606UL,18446744073709551615UL};
            int l_166 = 0x3F8197DDL;
            union U5 l_210 = {0x26L};
            if ((p_33.f2 | (p_33.f2 | l_127)))
            {
                unsigned l_135 = 0x975BB608L;
                int l_178 = 0x55DDAB54L;
                unsigned short l_179 = 5UL;
                for (p_36 = 0; (p_36 <= (-4)); --p_36)
                {
                    g_132 = (func_60(l_130, p_33.f2, g_102, l_131) , (+g_86));
                }
                for (p_33.f2 = (-15); (p_33.f2 > 48); p_33.f2 = safe_add_func_int8_t_s_s(p_33.f2, 8))
                {
                    int l_140 = 0x49417E07L;
                    p_36 = (((l_135 || p_33.f2) | ((((safe_add_func_int32_t_s_s((((l_126 | (g_132 < 0x3C1EL)) == (safe_rshift_func_int8_t_s_u(l_135, 3))) || 0x5C39L), (g_88.f2 && (g_88 , l_140)))) || p_33.f2) | p_33.f0) <= g_2.f1.f0)) ^ l_135);
                    l_142 = l_141;
                    g_143 = p_34;
                    p_36 = 1L;
                }
                for (l_141.f1 = 0; (l_141.f1 >= 37); ++l_141.f1)
                {
                    union U5 l_165 = {-1L};
                    for (g_102 = 0; (g_102 <= 35); ++g_102)
                    {
                        p_36 = g_2.f1.f1;
                        p_36 = ((p_33.f1 , (((safe_mod_func_uint32_t_u_u(g_86, p_33.f2)) & g_143) != ((safe_mod_func_int32_t_s_s(((((safe_lshift_func_uint16_t_u_s((((4294967295UL != l_154) != ((safe_lshift_func_int8_t_s_u(((g_88.f1 | (safe_lshift_func_int8_t_s_s(g_88.f1, 4))) & (safe_rshift_func_uint16_t_u_s((((l_142.f0 | g_88.f2) | g_88.f1) , 65535UL), g_88.f0))), p_34)) ^ p_33.f1)) >= p_33.f2), 5)) && g_132) <= p_33.f1) >= p_33.f2), 0x96FF799FL)) < p_35))) ^ l_135);
                    }
                    l_166 = (safe_add_func_int16_t_s_s((((g_2.f1.f2 != func_55((l_126 == ((p_35 < (p_33.f2 <= (safe_rshift_func_uint16_t_u_s((l_165 , p_33.f2), 15)))) & func_55(g_132, (p_33.f0 , ((((g_132 != g_88.f0) , l_165.f0) , g_2.f1.f1) <= 0xC008L)), g_2.f1.f2))), g_132, g_2.f1.f1)) > p_33.f2) , g_88.f0), p_36));
                    l_167 = g_102;
                    l_166 = (((safe_sub_func_int8_t_s_s((l_131.f0 | (l_131.f1 , (func_43(p_32, l_135, p_35, (safe_sub_func_uint32_t_u_u(((safe_add_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u(p_32, 6)) >= func_43((p_33.f1 && func_55(l_142.f1, (safe_mod_func_uint16_t_u_u((((((l_131.f2 | 0x987CFA79L) | l_142.f2) , p_34) != l_131.f1) || 0xCEL), p_33.f0)), l_135)), l_178, l_178, p_33.f2, p_34)) || p_34), g_2.f1.f1)) & l_165.f0), l_130.f2)), l_179) , g_2.f1.f0))), g_2.f1.f2)) & g_132) > p_35);
                }
            }
            else
            {
                union U5 l_198 = {1L};
                g_199 = func_43(l_131.f2, (safe_add_func_uint8_t_u_u((func_55(((safe_lshift_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s(func_55((p_34 , g_102), p_35, ((0xEBL ^ 1UL) != (safe_sub_func_int32_t_s_s(func_55((g_188 , ((safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(func_55(((p_33.f2 , ((safe_rshift_func_uint8_t_u_s((func_65(p_33, p_33.f2, p_35, l_197, p_33) , p_33.f1), 7)) , l_198)) , 0x2DCAL), l_118.f0, l_198.f0), 4)), l_142.f1)), 3)) != g_132)), l_126, p_35), g_102)))), 13)) ^ g_2.f1.f1) < g_2.f1.f1), l_141.f1)) , g_2.f1.f0), g_2.f1.f2, l_126) | p_32), p_32)), g_2.f1.f1, p_36, l_142.f2);
                g_2.f1 = g_88;
            }
            g_199 = (l_142.f0 || (0xDEL & (((6L || l_131.f0) , ((safe_sub_func_int8_t_s_s((g_88.f2 , (safe_add_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((l_210 , (g_188 , g_188.f0)) > ((safe_sub_func_uint8_t_u_u(((((func_43(l_118.f0, g_102, l_210.f0, p_32, g_86) <= 9L) , g_199) == l_118.f0) < g_2.f1.f1), l_131.f0)) > l_142.f2)), p_33.f1)), l_131.f1)) > 0L), l_131.f0))), p_33.f0)) == 65535UL)) | 0x6506466BL)));
            return p_34;
        }
        g_199 = p_35;
        p_36 = p_34;
    }
    else
    {
        char l_213 = 0xAEL;
        struct S2 l_249 = {4UL,1UL,0xEF908077L};
        int l_284 = 0x2AE67165L;
        unsigned char l_370 = 0xD4L;
        int l_442 = 1L;
        unsigned short l_453 = 65530UL;
        union U5 l_462 = {0L};
        p_36 = (g_132 || (g_132 ^ g_2.f1.f2));
        if ((((-5L) >= p_33.f1) | func_55(l_213, l_142.f2, (((func_43(((((~(func_43(p_33.f1, l_213, p_33.f1, (((((((+0x9DL) < (safe_lshift_func_int16_t_s_u(p_36, 11))) > l_213) & g_88.f0) , g_102) != l_213) || p_32), l_213) >= l_213)) ^ 0x07L) <= p_33.f1) != 2UL), p_36, g_2.f1.f2, p_35, l_142.f2) >= l_213) & p_33.f2) >= p_34))))
        {
            unsigned l_252 = 0x01241E3AL;
            int l_271 = 0xC63CFDD3L;
            unsigned l_287 = 4294967288UL;
            if ((safe_sub_func_int16_t_s_s(g_132, (g_88.f1 < p_33.f0))))
            {
                short l_230 = (-3L);
                struct S2 l_233 = {0UL,4UL,0x38C47E81L};
                int l_268 = 0xF5BEA1ABL;
                int l_270 = (-1L);
                int l_299 = 0xC004BFBCL;
                char l_323 = 0xA4L;
                g_199 = (((p_32 > (safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((l_226 >= ((g_88.f2 & ((~(safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((((~l_230) == p_35) == (l_226 >= (safe_sub_func_int16_t_s_s(((g_88.f1 <= (+g_143)) || ((g_88.f1 , g_88.f2) < (-1L))), l_213)))))), g_88.f1))) > g_2.f1.f1)) > 0x0CL)), l_213)), p_32)), p_34))) == g_143) >= p_32);
                g_88 = l_233;
                g_199 = ((safe_mod_func_uint32_t_u_u(((p_34 > (+g_88.f2)) && (p_33.f0 , p_33.f1)), ((safe_unary_minus_func_int8_t_s((((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s(((g_88.f1 >= ((0xD4BFL == 65535UL) & (((g_188.f0 <= ((((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int32_t_s((safe_sub_func_uint32_t_u_u((((safe_add_func_int32_t_s_s((l_213 ^ p_34), 0xB2D08710L)) , l_213) & g_88.f1), l_230)))), l_233.f2)) , p_36) || 255UL) == p_33.f1)) , 0x9DACL) || 0x0C68L))) != (-10L)))), 0UL)) && p_35) != p_33.f0))) && p_33.f2))) ^ p_35);
                for (g_2.f1.f1 = (-11); (g_2.f1.f1 != 28); g_2.f1.f1++)
                {
                    char l_255 = 0x44L;
                    union U5 l_274 = {0x7DL};
                    struct S2 l_310 = {0UL,7UL,18446744073709551615UL};
                    l_249 = l_233;
                    if ((g_2.f1.f0 , ((g_2.f1.f2 , (func_43((safe_sub_func_int16_t_s_s((l_252 <= 0L), (safe_add_func_int8_t_s_s(l_252, l_233.f0)))), l_249.f2, l_255, (0xBC85L && l_117), l_249.f2) && 0xF57DL)) == 0x81C7L)))
                    {
                        short l_269 = 9L;
                        l_271 = (func_55((((safe_sub_func_int32_t_s_s((-7L), ((g_88.f1 > l_249.f1) , (safe_lshift_func_int8_t_s_s(0x98L, 5))))) , func_37(((safe_add_func_int16_t_s_s(((((safe_lshift_func_uint16_t_u_s(l_233.f2, 13)) && p_35) == ((~(p_36 && g_88.f0)) , ((safe_mod_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s(g_188.f0, 5)) <= p_35) | l_255), p_32)) , 1UL))) || 0L), l_249.f1)) && l_119), l_268, l_268, l_230, g_88.f0)) , l_252), l_269, g_199) , l_270);
                        l_271 = (g_132 != 0xBFL);
                        g_88 = g_88;
                    }
                    else
                    {
                        char l_281 = 0x1AL;
                        p_33 = func_37(((g_88 , (safe_lshift_func_int8_t_s_u(p_34, 7))) , (l_274 , (((((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((((p_32 & (safe_sub_func_int8_t_s_s(0x3FL, ((l_281 < (g_88.f0 & (((safe_add_func_uint16_t_u_u(((g_102 && (((g_86 > g_188.f0) , g_143) || 0L)) > p_35), l_119)) >= l_268) == 0xAFA0L))) < 0x1A2BL)))) || 0xE8L) > l_252) != p_33.f2), 15)), 1)) <= g_88.f0) > g_102) >= 0x1FF86E46L) != l_284))), p_35, g_88.f1, l_255, g_143);
                        if (p_35)
                            continue;
                        g_199 = (g_86 == (-1L));
                    }
                    if ((safe_mod_func_uint8_t_u_u(((l_287 , g_188.f0) , (safe_lshift_func_int8_t_s_u((g_132 , g_2.f1.f0), l_233.f1))), func_43(l_290, p_34, g_2.f1.f1, p_36, p_33.f2))))
                    {
                        char l_309 = 0xA6L;
                        g_199 = (safe_add_func_int16_t_s_s(g_88.f2, g_86));
                        p_36 = (!(safe_sub_func_int16_t_s_s((-1L), (safe_sub_func_uint8_t_u_u(((func_43(((safe_mod_func_uint8_t_u_u(0xC5L, ((((l_299 ^ ((safe_unary_minus_func_uint8_t_u((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((p_34 == (p_33.f2 && (safe_add_func_int16_t_s_s(g_2.f1.f1, (!func_43((0xDD79L || p_32), func_43(((p_35 >= g_88.f0) < g_143), g_88.f0, l_309, p_35, g_88.f1), g_188.f0, g_188.f0, g_132)))))), g_2.f1.f2)), 11)), 0x5E0CF097L)))) & l_284)) || g_2.f1.f2) , l_252) && 0xC413L))) | l_255), p_33.f1, l_252, p_33.f1, p_34) , g_88.f1) | g_2.f1.f2), 0x58L)))));
                        l_270 = 0x7CEC86A8L;
                        l_310 = g_2.f1;
                    }
                    else
                    {
                        int l_325 = (-7L);
                        int l_327 = (-4L);
                        p_33 = func_60(func_65(g_2.f1, (safe_sub_func_uint32_t_u_u(0x7C82EAEAL, (safe_sub_func_uint32_t_u_u(p_34, (safe_lshift_func_int16_t_s_s(((~0xAAF6L) <= (safe_rshift_func_int8_t_s_u((g_188 , (func_65(l_233, p_34, ((safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u((((func_43(g_86, g_132, g_102, g_143, l_233.f2) && p_36) < g_132) , l_323), l_287)), g_324)) <= l_325), g_188, g_2.f1) , g_326)), 0))), p_34)))))), p_34, l_118, g_2.f1), p_36, p_34, p_33);
                        l_249 = g_2.f1;
                        l_327 = 1L;
                    }
                    return p_33.f0;
                }
            }
            else
            {
                int l_349 = 1L;
                p_33 = p_33;
                if (g_2.f1.f1)
                {
                    p_33 = g_88;
                    for (g_326 = (-23); (g_326 == 46); g_326 = safe_add_func_uint8_t_u_u(g_326, 9))
                    {
                        if (p_35)
                            break;
                    }
                    g_2.f1 = p_33;
                }
                else
                {
                    short l_348 = 0xC064L;
                    struct S2 l_350 = {0x7AD1L,0x5595F862L,0x7F560B45L};
                    int l_355 = 0x5C39C28EL;
                    p_33 = g_88;
                    if ((func_55(((g_188 , (safe_rshift_func_uint8_t_u_s(g_88.f1, 1))) | p_34), (safe_lshift_func_int16_t_s_s(l_167, (safe_add_func_uint16_t_u_u((g_143 , g_336), (safe_add_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s((p_32 >= p_32), ((p_34 && 0x0136F621L) && 0x0D181D2BL))) , g_2.f1.f2) , l_142.f0), g_88.f1)))))), l_142.f1) || 8UL))
                    {
                        char l_346 = 0x58L;
                        int l_347 = (-6L);
                        g_324 = l_287;
                        p_36 = l_341;
                        p_36 = p_33.f1;
                        p_33 = func_37((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((p_35 != (((l_346 != l_346) == (-6L)) , 0x0632L)) != func_43(((g_2.f1.f0 & 252UL) || (p_33.f1 || func_43(g_2.f1.f1, p_35, l_347, g_2.f1.f0, g_2.f1.f1))), p_32, g_2.f1.f1, g_324, g_2.f1.f1)), 15)), l_348)), p_33.f2, p_33.f2, l_349, l_154);
                    }
                    else
                    {
                        short l_356 = (-1L);
                        p_33 = func_65(l_350, (g_102 , 4294967292UL), func_55(p_34, (~((safe_rshift_func_int8_t_s_u((((p_33.f1 == (((((-8L) == func_55(((safe_mod_func_int8_t_s_s(g_336, (g_2.f1.f2 ^ ((l_355 >= 5UL) < p_35)))) | 255UL), g_86, l_154)) , 3L) != g_2.f1.f0) | 0xDC7A7DE5L)) == l_355) | l_356), p_33.f0)) > g_132)), g_199), g_188, l_142);
                        l_167 = g_88.f0;
                    }
                    return g_102;
                }
                p_36 = (((func_55(g_132, l_349, l_349) ^ p_36) && ((func_43(l_142.f0, p_33.f1, l_349, l_287, l_287) != 0UL) == p_33.f0)) & g_143);
                p_36 = g_2.f1.f0;
            }
            for (l_341 = 26; (l_341 >= 36); l_341 = safe_add_func_uint8_t_u_u(l_341, 3))
            {
                int l_359 = (-1L);
                l_284 = (0xD6D6L || l_118.f0);
                return l_359;
            }
            l_271 = g_88.f2;
            p_36 = (l_287 , (g_88.f2 & (safe_lshift_func_uint16_t_u_s(l_287, 8))));
        }
        else
        {
            struct S2 l_372 = {0xF8B2L,0xD5859F1CL,0xD5DF71B7L};
            union U5 l_394 = {0xA1L};
            unsigned l_398 = 1UL;
            if ((g_188 , func_55(((g_86 == g_143) >= (((safe_rshift_func_int16_t_s_u(p_32, l_284)) , (safe_add_func_uint16_t_u_u(p_36, p_34))) >= (l_142 , p_34))), g_326, g_132)))
            {
                int l_371 = 0x1E9CE888L;
                g_324 = (0x939F6233L && p_34);
                l_372 = func_37(p_36, (safe_rshift_func_int8_t_s_s(func_43(func_55(g_188.f0, p_33.f0, (((0xDD36A248L == p_36) | p_36) , g_132)), (safe_mod_func_uint8_t_u_u(l_370, l_371)), l_142.f2, g_199, g_102), g_2.f1.f0)), l_167, g_188.f0, g_2.f1.f1);
                l_284 = ((((~(p_35 , (safe_add_func_uint16_t_u_u(((((((safe_sub_func_uint32_t_u_u(g_336, (safe_lshift_func_uint16_t_u_u(g_102, 10)))) , p_33.f0) | (l_371 >= (safe_mod_func_uint8_t_u_u((g_2.f1.f1 >= p_33.f0), (((safe_sub_func_uint16_t_u_u(((-5L) & (-1L)), (-10L))) , g_88.f0) , p_36))))) && 0x29DAL) == l_371) < 7UL), l_371)))) == 0UL) , g_132) ^ (-1L));
            }
            else
            {
                unsigned char l_391 = 0xA6L;
                p_36 = ((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((func_43(func_43(p_33.f2, g_88.f2, g_324, (+((0x36L || ((safe_mod_func_uint32_t_u_u((((((safe_lshift_func_uint8_t_u_u((p_33.f0 ^ l_391), ((+((func_65(g_2.f1, (~l_167), ((safe_mod_func_uint32_t_u_u(((p_33.f2 | l_391) >= p_35), p_36)) , g_143), l_394, g_2.f1) , l_395) , p_33.f2)) & g_88.f0))) , p_32) <= 7UL) || 0xD6L) , l_395.f1), l_249.f0)) & p_32)) >= g_132)), l_391), g_2.f1.f1, g_2.f1.f2, p_33.f1, g_2.f1.f2) | l_395.f0), g_2.f1.f0)), 0x5E16L)) == 0xAAL);
                g_324 = func_43(l_372.f0, p_36, ((safe_add_func_uint32_t_u_u(func_55(p_33.f0, func_43(g_102, l_398, g_2.f1.f2, l_391, func_55(((safe_rshift_func_int8_t_s_s(((0xA236L < p_33.f2) && l_372.f1), 4)) < 0x9EL), p_33.f0, p_33.f0)), p_33.f1), g_188.f0)) <= l_213), g_2.f1.f2, g_336);
            }
        }
        g_199 = p_32;
        if ((safe_add_func_uint16_t_u_u(0xC87FL, (p_34 < l_249.f1))))
        {
            char l_408 = 0x5BL;
            int l_417 = 0x086D0986L;
            unsigned l_419 = 0x09F36BA6L;
            unsigned char l_461 = 0x27L;
            if ((safe_lshift_func_uint16_t_u_u((func_55(func_43((g_88.f1 | p_33.f2), (p_36 && (((safe_rshift_func_uint16_t_u_u(p_36, (g_188.f0 && 0x2EA51AAAL))) & (p_33.f2 || g_324)) | g_326)), l_407, p_34, l_142.f0), l_408, p_33.f1) >= l_249.f1), l_249.f0)))
            {
                unsigned char l_418 = 255UL;
                l_418 = func_55((l_117 >= func_43((safe_rshift_func_uint16_t_u_s((func_43(((((p_33.f0 < (safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u(func_55(l_249.f0, p_33.f1, g_88.f1), p_36)), (safe_mod_func_int8_t_s_s((((p_36 == (p_33.f2 != 8L)) | p_34) & p_34), g_199))))) == g_326) ^ 0x1A10L) , 0xBF82BC9BL), g_326, p_33.f2, l_417, g_2.f1.f1) & g_326), l_395.f2)), p_33.f0, p_33.f0, g_2.f1.f2, p_33.f1)), p_36, g_132);
                p_33 = func_60((func_43((l_419 & (l_142.f0 , (g_2.f1.f2 == g_88.f2))), (0x8F8947E9L <= g_2.f1.f2), (safe_mod_func_uint32_t_u_u(6UL, (safe_lshift_func_int8_t_s_u(5L, (safe_add_func_int8_t_s_s(g_102, p_34)))))), g_326, l_249.f2) , g_2.f1), g_2.f1.f2, p_32, l_142);
                for (l_249.f2 = 14; (l_249.f2 <= 7); l_249.f2 = safe_sub_func_int8_t_s_s(l_249.f2, 4))
                {
                    char l_434 = 1L;
                    if ((~(65529UL > p_36)))
                    {
                        unsigned char l_441 = 8UL;
                        g_2.f1 = func_37(p_35, (!(safe_lshift_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_s(g_143, 2)) ^ (safe_sub_func_int8_t_s_s((((g_2.f1.f1 , 0x2C5EA47BL) , l_434) ^ 0xBCL), ((safe_add_func_int16_t_s_s(l_167, (safe_mod_func_uint8_t_u_u(g_2.f1.f2, (((((safe_add_func_int16_t_s_s(l_249.f0, l_441)) , l_418) >= 0UL) , g_86) | 0x7EF358BEL))))) <= (-4L))))) > l_442), g_324))), p_34, p_33.f1, g_88.f0);
                    }
                    else
                    {
                        l_395 = p_33;
                        g_199 = g_2.f1.f1;
                    }
                    if ((g_324 != func_55(((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(g_132, ((safe_sub_func_uint32_t_u_u((g_2.f1 , ((safe_sub_func_uint16_t_u_u((l_408 && (((g_132 >= p_35) > (p_33.f2 > (g_2.f1 , g_188.f0))) ^ l_249.f1)), g_2.f1.f2)) , 4294967295UL)), p_34)) <= g_2.f1.f2))), p_33.f0)) != l_213), l_284, g_326)))
                    {
                        if (p_33.f2)
                            break;
                        if (g_324)
                            continue;
                    }
                    else
                    {
                        p_36 = 1L;
                        p_36 = 0xEAB7ACE2L;
                        p_36 = g_188.f0;
                    }
                    l_442 = p_33.f2;
                    g_199 = p_35;
                }
            }
            else
            {
                union U5 l_455 = {0x61L};
                int l_476 = 1L;
                unsigned short l_484 = 65527UL;
                struct S2 l_504 = {65535UL,2UL,0x8BA98DE2L};
                if (p_33.f2)
                {
                    unsigned short l_460 = 65535UL;
                    for (p_33.f0 = 0; (p_33.f0 == 29); p_33.f0 = safe_add_func_uint8_t_u_u(p_33.f0, 1))
                    {
                        short l_463 = 4L;
                        l_454 = l_453;
                        l_463 = ((((g_102 == (l_455 , ((safe_add_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(0UL, ((-4L) < l_455.f0))) && (-1L)), ((((((l_419 , func_55(((func_55(p_32, (((p_32 ^ p_35) & 0xF2A16E3BL) || g_88.f1), l_460) | l_249.f1) < l_453), p_32, p_33.f2)) != l_461) < 8L) , p_35) , g_2.f1.f1) <= g_2.f1.f1))) , l_454))) > l_417) , l_462) , l_395.f2);
                    }
                }
                else
                {
                    struct S2 l_466 = {0x5F4EL,0UL,18446744073709551607UL};
                    for (l_454 = 12; (l_454 > (-30)); l_454--)
                    {
                        int l_475 = (-6L);
                        l_466 = g_2.f1;
                        p_36 = ((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(g_199, (g_102 , (4294967290UL | func_43(g_2.f1.f2, p_34, (safe_rshift_func_int8_t_s_u(((l_417 <= p_35) < (safe_mod_func_int16_t_s_s(g_88.f0, ((((-5L) > l_455.f0) , l_475) || 0x41B08AA4L)))), 1)), l_453, p_34))))), 0xBA6FL)) < l_455.f0);
                        g_88 = p_33;
                        l_476 = g_86;
                    }
                }
                g_199 = 0x5E971CD4L;
                if (((safe_add_func_uint32_t_u_u(((p_35 , l_461) == (+(((safe_unary_minus_func_int32_t_s(p_35)) & ((safe_lshift_func_uint16_t_u_u((l_284 == ((safe_mod_func_uint16_t_u_u((func_43(l_484, (g_88.f2 < g_326), p_33.f0, (safe_sub_func_uint32_t_u_u((g_199 && l_370), g_336)), l_484) <= g_2.f1.f1), l_442)) , 0x0800DAFAL)), 6)) >= p_36)) && g_2.f1.f0))), g_2.f1.f0)) < 0x91E2L))
                {
                    unsigned l_503 = 0xA08714A2L;
                    unsigned char l_514 = 1UL;
                    short l_525 = (-2L);
                    l_476 = (p_33.f1 != 0xC5L);
                    if (((g_88.f1 & (((safe_rshift_func_int16_t_s_u(((p_33 , 65534UL) < (~((safe_lshift_func_uint8_t_u_s((((safe_rshift_func_int16_t_s_u((g_88.f2 <= (((safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s(g_336, l_249.f1)), (safe_add_func_int8_t_s_s(g_86, ((safe_sub_func_int16_t_s_s((((0xE2A29304L == ((safe_sub_func_uint32_t_u_u(p_35, p_33.f0)) , l_461)) > g_326) && g_88.f2), l_503)) & 0x0777L))))) && l_503) & 0xF81F5E85L)), l_284)) , p_33.f1) > 0x568DCC7CL), g_336)) > p_33.f2))), 13)) < g_132) , g_2.f1.f2)) , p_34))
                    {
                        l_504 = g_88;
                        l_167 = (0xD3L & (safe_add_func_int8_t_s_s(func_43((g_326 || (0xEF2EL & 0xF48BL)), (func_43((g_2.f1.f1 <= 0x147DL), (safe_add_func_uint16_t_u_u(l_118.f0, ((!(func_55((safe_mod_func_uint8_t_u_u(func_43(p_33.f0, ((safe_unary_minus_func_uint16_t_u(((safe_add_func_uint32_t_u_u(p_33.f0, 0xA4561E61L)) ^ l_514))) | l_290), p_33.f0, p_36, l_514), l_249.f0)), g_324, p_35) > 0x236DA1E7L)) > p_36))), g_188.f0, g_2.f1.f0, l_514) == l_341), l_408, l_119, p_35), 0x34L)));
                        g_199 = (safe_add_func_uint32_t_u_u(func_43(func_43(p_33.f1, (((p_32 , p_33.f2) < (!0x2DL)) > (+g_86)), l_503, g_88.f2, g_143), g_2.f1.f2, g_336, l_249.f2, g_324), 0L));
                        p_36 = (safe_add_func_int32_t_s_s(((p_32 & (safe_sub_func_uint32_t_u_u((func_43(g_199, l_504.f1, p_33.f1, ((((safe_mod_func_uint8_t_u_u(g_143, ((safe_sub_func_int32_t_s_s(l_525, g_2.f1.f0)) ^ (safe_lshift_func_uint16_t_u_s(g_324, (g_336 >= g_188.f0)))))) != g_2.f1.f1) , l_407) , p_33.f2), g_326) && g_86), 0L))) || 246UL), l_514));
                    }
                    else
                    {
                        p_33 = g_88;
                        return p_34;
                    }
                    l_249 = g_88;
                }
                else
                {
                    union U5 l_536 = {0x15L};
                    struct S2 l_537 = {65535UL,18446744073709551607UL,0xB35F985DL};
                    for (l_454 = (-16); (l_454 > 24); ++l_454)
                    {
                        g_324 = (g_88.f0 < ((safe_rshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((g_88.f0 , (p_34 != (((safe_sub_func_uint16_t_u_u(65535UL, (func_65(g_88, l_462.f0, g_88.f2, l_536, l_537) , p_33.f1))) >= 0xDCL) > (-1L)))) > p_34), 0x7EE9EF8EL)), g_199)) || l_536.f0));
                    }
                    if (l_213)
                    {
                        g_199 = 0x6CF045B6L;
                        p_36 = func_55(g_324, (((g_538 != func_55((safe_lshift_func_int8_t_s_s(l_117, 5)), p_35, (((safe_lshift_func_int16_t_s_s(((~(l_395.f2 & (((0x6883L <= p_35) == ((g_199 ^ (-1L)) , 0x36FFL)) ^ 1UL))) >= g_188.f0), 5)) ^ 0xAF2B6122L) < (-3L)))) != 0x095BL) & g_199), g_102);
                        return p_36;
                    }
                    else
                    {
                        int l_563 = 0xEB180E80L;
                        p_36 = (((safe_mod_func_uint32_t_u_u(p_33.f1, 0x88FA4A87L)) <= 0xBDL) & l_154);
                        p_36 = (safe_add_func_int16_t_s_s((g_88.f0 ^ (p_36 | (g_324 <= (safe_lshift_func_uint8_t_u_s(l_504.f0, (g_324 , (-1L))))))), ((((p_36 == (safe_sub_func_uint16_t_u_u(((l_455 , (safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(0xE3L, p_34)), p_33.f0))) , l_455.f0), l_504.f1))) & 0xE0L) , 0x45L) | p_32)));
                        g_199 = (1UL & func_43(l_419, func_43(l_484, p_35, (((safe_rshift_func_int16_t_s_u(((safe_mod_func_int32_t_s_s((l_395.f2 == func_55((((((safe_sub_func_int8_t_s_s((g_326 >= ((((safe_add_func_uint32_t_u_u(p_32, ((func_55(g_132, ((l_563 == l_564) != l_563), p_33.f0) | l_476) || 8L))) ^ (-9L)) >= p_33.f2) && g_188.f0)), 0x6EL)) , g_132) & (-1L)) & 8L) && 0x4F25L), l_442, g_336)), g_132)) ^ g_2.f1.f2), g_336)) ^ 0xE393L) , g_2.f1.f2), p_36, l_536.f0), g_326, g_188.f0, l_537.f1));
                        g_2.f1 = func_37(((l_119 , l_504.f1) & 248UL), l_249.f1, (((func_37((p_33.f0 > (g_188 , (-1L))), l_249.f0, (safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((((safe_add_func_int16_t_s_s(((g_188.f0 | g_143) , p_33.f1), p_33.f0)) == g_324) && l_408), 0x34L)), 0)), g_86, p_33.f1) , p_33.f0) , 1UL) ^ 0xFAL), p_35, l_504.f2);
                    }
                }
            }
            p_36 = func_43(g_2.f1.f2, p_33.f2, (((func_55(((safe_lshift_func_int8_t_s_s(0x7BL, (0xECL && p_36))) > 0UL), (safe_lshift_func_uint16_t_u_u(((((safe_sub_func_uint8_t_u_u((g_324 , (((safe_lshift_func_int16_t_s_s(g_88.f2, (l_395.f2 > 1UL))) <= g_143) <= 0UL)), g_102)) || p_36) != 0xA0L) , 0xE96CL), l_462.f0)), l_419) > l_395.f0) || g_199) > l_142.f2), g_2.f1.f2, g_326);
        }
        else
        {
            unsigned short l_579 = 0xE64FL;
            l_167 = func_55(l_579, l_341, g_336);
        }
    }
    return l_154;
}







static struct S2 func_37(unsigned short p_38, short p_39, unsigned char p_40, unsigned char p_41, char p_42)
{
    unsigned l_59 = 0UL;
    unsigned char l_92 = 0x49L;
    int l_114 = 0L;
    l_114 = func_43((safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u(func_55(l_59, ((-7L) >= g_2.f1.f1), g_2.f1.f1), (safe_mod_func_uint16_t_u_u(l_59, (p_41 ^ ((+g_2.f1.f0) == 0x3A9BL)))))), p_41)), l_59)), p_39, l_92, g_2.f1.f1, l_59);
    return g_88;
}







static int func_43(unsigned p_44, int p_45, char p_46, int p_47, short p_48)
{
    int l_97 = 0x17FA172CL;
    int l_113 = 0xA27851EDL;
    g_102 = (safe_mod_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(l_97, p_48)) | (l_97 || 0x1B5DL)), ((safe_sub_func_uint8_t_u_u(255UL, (safe_sub_func_int16_t_s_s(g_2.f1.f1, ((0x3EL && 9UL) != 1L))))) & l_97)));
    l_113 = (p_44 && func_55((func_55(((((((((safe_lshift_func_uint16_t_u_u(p_48, 3)) , ((((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(((g_88 , (safe_sub_func_uint16_t_u_u((p_48 , l_97), g_88.f0))) , l_97), 2)), 0)) != 0xF9E3L) <= (!(((safe_sub_func_uint16_t_u_u((((p_46 , (-9L)) > g_88.f0) != 0x124A7691L), g_88.f1)) & g_2.f1.f0) , g_102))) < l_97)) && p_45) || p_46) , p_44) || g_88.f0) > l_97) > l_97), g_88.f2, g_86) <= l_97), p_44, g_102));
    return l_113;
}







static unsigned func_55(unsigned short p_56, unsigned p_57, unsigned short p_58)
{
    struct S2 l_71 = {4UL,3UL,0x0BF28884L};
    unsigned char l_84 = 0x44L;
    union U5 l_85 = {-1L};
    char l_87 = (-1L);
    l_71 = func_60(func_65(l_71, p_57, (((safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((g_2.f1.f2 >= (safe_add_func_uint16_t_u_u((l_71.f0 | (safe_lshift_func_uint8_t_u_s(((~(safe_rshift_func_uint16_t_u_s((g_2.f1.f2 ^ ((p_58 == g_2.f1.f0) == (g_2.f1.f0 | (safe_sub_func_int8_t_s_s((((-2L) > l_71.f1) <= g_2.f1.f0), g_2.f1.f1))))), g_2.f1.f0))) < 2L), l_84))), (-1L)))), p_56)), 12)) && g_2.f1.f2) , 0x312FL), l_85, l_71), g_2.f1.f2, l_87, g_2.f1);
    return l_71.f0;
}







static struct S2 func_60(struct S2 p_61, int p_62, unsigned char p_63, struct S2 p_64)
{
    struct S2 l_89 = {1UL,18446744073709551615UL,0x8ECCDF33L};
    g_88 = g_2.f1;
    g_88 = g_88;
    return l_89;
}







static struct S2 func_65(struct S2 p_66, unsigned p_67, unsigned short p_68, union U5 p_69, struct S2 p_70)
{
    g_86 = 0L;
    return p_66;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2.f0, "g_2.f0", print_hash_value);
    transparent_crc(g_2.f1.f0, "g_2.f1.f0", print_hash_value);
    transparent_crc(g_2.f1.f1, "g_2.f1.f1", print_hash_value);
    transparent_crc(g_2.f1.f2, "g_2.f1.f2", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_88.f0, "g_88.f0", print_hash_value);
    transparent_crc(g_88.f1, "g_88.f1", print_hash_value);
    transparent_crc(g_88.f2, "g_88.f2", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_188.f0, "g_188.f0", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_324, "g_324", print_hash_value);
    transparent_crc(g_326, "g_326", print_hash_value);
    transparent_crc(g_336, "g_336", print_hash_value);
    transparent_crc(g_538, "g_538", print_hash_value);
    transparent_crc(g_583.f0, "g_583.f0", print_hash_value);
    transparent_crc(g_583.f1, "g_583.f1", print_hash_value);
    transparent_crc(g_583.f2, "g_583.f2", print_hash_value);
    transparent_crc(g_583.f3, "g_583.f3", print_hash_value);
    transparent_crc(g_583.f4, "g_583.f4", print_hash_value);
    transparent_crc(g_583.f5, "g_583.f5", print_hash_value);
    transparent_crc(g_583.f6, "g_583.f6", print_hash_value);
    transparent_crc(g_583.f7, "g_583.f7", print_hash_value);
    transparent_crc(g_583.f8.f0, "g_583.f8.f0", print_hash_value);
    transparent_crc(g_583.f8.f1, "g_583.f8.f1", print_hash_value);
    transparent_crc(g_583.f8.f2, "g_583.f8.f2", print_hash_value);
    transparent_crc(g_608.f0.f0, "g_608.f0.f0", print_hash_value);
    transparent_crc(g_608.f0.f1, "g_608.f0.f1", print_hash_value);
    transparent_crc(g_608.f0.f2, "g_608.f0.f2", print_hash_value);
    transparent_crc(g_608.f1, "g_608.f1", print_hash_value);
    transparent_crc(g_608.f2.f0, "g_608.f2.f0", print_hash_value);
    transparent_crc(g_608.f2.f1, "g_608.f2.f1", print_hash_value);
    transparent_crc(g_608.f2.f2, "g_608.f2.f2", print_hash_value);
    transparent_crc(g_608.f3, "g_608.f3", print_hash_value);
    transparent_crc(g_608.f4.f0, "g_608.f4.f0", print_hash_value);
    transparent_crc(g_608.f4.f1, "g_608.f4.f1", print_hash_value);
    transparent_crc(g_608.f4.f2, "g_608.f4.f2", print_hash_value);
    transparent_crc(g_608.f4.f3, "g_608.f4.f3", print_hash_value);
    transparent_crc(g_608.f4.f4, "g_608.f4.f4", print_hash_value);
    transparent_crc(g_608.f4.f5, "g_608.f4.f5", print_hash_value);
    transparent_crc(g_608.f4.f6, "g_608.f4.f6", print_hash_value);
    transparent_crc(g_608.f4.f7, "g_608.f4.f7", print_hash_value);
    transparent_crc(g_608.f4.f8.f0, "g_608.f4.f8.f0", print_hash_value);
    transparent_crc(g_608.f4.f8.f1, "g_608.f4.f8.f1", print_hash_value);
    transparent_crc(g_608.f4.f8.f2, "g_608.f4.f8.f2", print_hash_value);
    transparent_crc(g_608.f5, "g_608.f5", print_hash_value);
    transparent_crc(g_608.f6, "g_608.f6", print_hash_value);
    transparent_crc(g_628.f0, "g_628.f0", print_hash_value);
    transparent_crc(g_628.f1.f0, "g_628.f1.f0", print_hash_value);
    transparent_crc(g_628.f1.f1, "g_628.f1.f1", print_hash_value);
    transparent_crc(g_628.f1.f2, "g_628.f1.f2", print_hash_value);
    transparent_crc(g_629.f0, "g_629.f0", print_hash_value);
    transparent_crc(g_629.f1.f0, "g_629.f1.f0", print_hash_value);
    transparent_crc(g_629.f1.f1, "g_629.f1.f1", print_hash_value);
    transparent_crc(g_629.f1.f2, "g_629.f1.f2", print_hash_value);
    transparent_crc(g_642.f0, "g_642.f0", print_hash_value);
    transparent_crc(g_642.f1, "g_642.f1", print_hash_value);
    transparent_crc(g_642.f2, "g_642.f2", print_hash_value);
    transparent_crc(g_650.f0, "g_650.f0", print_hash_value);
    transparent_crc(g_650.f1.f0, "g_650.f1.f0", print_hash_value);
    transparent_crc(g_650.f1.f1, "g_650.f1.f1", print_hash_value);
    transparent_crc(g_650.f1.f2, "g_650.f1.f2", print_hash_value);
    transparent_crc(g_653.f0.f0, "g_653.f0.f0", print_hash_value);
    transparent_crc(g_653.f0.f1, "g_653.f0.f1", print_hash_value);
    transparent_crc(g_653.f0.f2, "g_653.f0.f2", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
