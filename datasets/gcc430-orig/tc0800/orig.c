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
   unsigned char f0;
   unsigned f1 : 24;
   int f2;
   unsigned f3;
};

struct S1 {
   unsigned f0 : 28;
   signed f1 : 21;
   unsigned f2 : 13;
   struct S0 f3;
   unsigned f4 : 7;
   unsigned f5 : 25;
   short f6;
};

struct S2 {
   unsigned f0 : 3;
   signed f1 : 8;
   unsigned f2 : 22;
   signed f3 : 22;
   unsigned f4 : 25;
};

struct S3 {
   int f0;
};


static short g_9 = 0x0CE9L;
static struct S3 g_28 = {9L};
static struct S0 g_35 = {0x23L,873,0xE99B96BCL,0x12BAD479L};
static struct S0 *g_34 = &g_35;
static int g_49 = 4L;
static struct S2 g_57 = {1,15,1964,1772,3555};
static short g_61 = 0L;
static struct S1 g_67 = {4765,562,60,{250UL,3122,0x0EFF2B3AL,18446744073709551614UL},1,1870,0x010CL};
static int g_99 = 1L;
static int g_110 = 4L;
static char g_115 = 0L;
static int g_138 = 0xDD6AA84CL;
static unsigned short g_142 = 65535UL;
static struct S0 **g_152 = &g_34;
static struct S0 ***g_151 = &g_152;
static struct S3 g_278 = {0x2B3CBE0EL};
static struct S0 g_295 = {255UL,101,0xD4220F00L,0xC9259771L};
static unsigned short g_437 = 0x5212L;
static struct S3 *g_457 = &g_278;
static unsigned char g_591 = 252UL;
static unsigned g_797 = 0x79CABB52L;
static unsigned g_921 = 4294967287UL;
static unsigned g_1020 = 4294967295UL;
static unsigned g_1123 = 0x2EA80BB4L;
static unsigned short g_1148 = 65532UL;
static struct S0 *g_1156 = (void*)0;
static int **g_1279 = (void*)0;



static struct S0 func_1(void);
static struct S0 * func_2(struct S0 p_3, struct S0 * p_4, struct S1 p_5, struct S0 * p_6);
static struct S0 func_7(char p_8);
static int func_10(struct S0 * p_11, struct S0 * p_12, struct S0 * p_13, int p_14);
static struct S0 * func_15(char p_16);
static unsigned short func_18(struct S0 * p_19, char p_20, struct S0 * p_21);
static struct S0 * func_22(struct S3 p_23, struct S3 p_24, struct S0 * p_25, struct S0 * p_26);
static struct S0 * func_29(short p_30, int p_31, struct S0 * p_32);
static struct S3 func_45(char p_46);
static unsigned func_52(char p_53, int p_54, struct S2 p_55, struct S0 p_56);
static struct S0 func_1(void)
{
    int l_17 = 0xAAD90151L;
    struct S3 l_27 = {6L};
    unsigned short l_33 = 0x04D4L;
    struct S0 *l_841 = &g_295;
    unsigned l_1151 = 0x4FA6685AL;
    struct S1 l_1266 = {12981,-867,77,{253UL,1291,1L,18446744073709551613UL},3,765,0x9A19L};
    int *l_1278 = &g_28.f0;
    (**g_151) = func_2(func_7(((g_9 , (func_10(func_15((l_17 != ((func_18(func_22(l_27, g_28, func_29(g_28.f0, l_33, g_34), l_841), g_57.f3, (*g_152)) & l_27.f0) ^ l_33))), l_841, l_841, l_1151) , g_67.f3.f1)) , 0x50L)), l_841, l_1266, l_841);

    ;
    for (l_1151 = 0; (l_1151 == 24); ++l_1151)
    {
        unsigned char l_1273 = 8UL;
        int *l_1276 = &g_99;
        int **l_1277 = &l_1276;
        g_99 ^= (safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((l_1273 && (g_67 , ((func_7((l_17 < g_110)) , (((safe_sub_func_int32_t_s_s((((((*l_841) , l_1273) && l_1273) ^ 0xFE1C94F1L) , g_35.f1), 0x82D46FBBL)) | 0x3C40093EL) ^ g_67.f3.f0)) ^ 0x2DL))), g_138)), 0x229FL));
        (*l_1277) = l_1276;
    }
    (*l_1278) = (((g_67 , &l_27) == (void*)0) & (g_110 , (-2L)));
    g_1279 = g_1279;
    return (**g_152);
}







static struct S0 * func_2(struct S0 p_3, struct S0 * p_4, struct S1 p_5, struct S0 * p_6)
{
    return (**g_151);


}







static struct S0 func_7(char p_8)
{
    unsigned char l_1169 = 246UL;
    struct S1 l_1181 = {10927,810,49,{248UL,3080,0xF1E07F37L,18446744073709551614UL},10,2020,-8L};
    int l_1187 = 0L;
    struct S3 *l_1196 = (void*)0;
    int l_1232 = 0x2586CD8AL;
    (*g_457) = func_45(l_1169);
    for (p_8 = (-29); (p_8 != (-27)); p_8 = safe_add_func_uint32_t_u_u(p_8, 2))
    {
        unsigned l_1172 = 0xDB002E70L;
        struct S2 l_1182 = {0,-10,1495,1847,1485};
        struct S0 l_1183 = {0xCDL,4045,9L,18446744073709551615UL};
        int *l_1184 = (void*)0;
        int *l_1185 = (void*)0;
        int *l_1186 = &g_99;
        int l_1257 = 0x0406F6B2L;
    }
    return (***g_151);
}







static int func_10(struct S0 * p_11, struct S0 * p_12, struct S0 * p_13, int p_14)
{
    struct S1 l_1152 = {630,341,19,{0x81L,144,1L,1UL},1,4652,0x81E5L};
    int *l_1153 = &g_49;
    unsigned l_1157 = 0x2AEC6004L;
    struct S3 l_1158 = {1L};
    char l_1167 = 0x5CL;
    int **l_1168 = &l_1153;
    l_1152 = g_67;
    (*l_1153) = g_67.f5;
    l_1167 &= (safe_mul_func_int8_t_s_s((p_14 == ((((func_18(g_1156, l_1157, func_22(l_1158, func_45((0x357CL < (1UL != ((safe_add_func_int8_t_s_s((g_35.f0 && g_28.f0), ((safe_mul_func_int16_t_s_s(func_52((safe_add_func_uint32_t_u_u(func_18(p_11, p_14, p_11), 0xBC879A02L)), p_14, g_57, l_1152.f3), (-7L))) & 0x1487B3E5L))) & g_142)))), p_12, p_11)) <= 5L) , g_591) , (-8L)) != l_1152.f3.f1)), g_9));
    (*l_1168) = l_1153;
    return (*l_1153);
}







static struct S0 * func_15(char p_16)
{
    struct S0 *l_1127 = &g_67.f3;
    int l_1128 = 0x1EDC15A3L;
    unsigned l_1129 = 0x042E9A0CL;
    int *l_1130 = &g_28.f0;
    int *l_1131 = &l_1128;
    int *l_1132 = (void*)0;
    int *l_1133 = &g_278.f0;
    int *l_1134 = &g_49;
    int *l_1135 = &g_49;
    int *l_1136 = &g_278.f0;
    int *l_1137 = &g_28.f0;
    int l_1138 = 0x891E9B16L;
    int l_1139 = 0x895F459AL;
    int *l_1140 = &g_49;
    int *l_1141 = &g_49;
    int *l_1142 = &g_28.f0;
    int *l_1143 = &g_278.f0;
    int *l_1144 = (void*)0;
    int *l_1145 = &g_278.f0;
    int *l_1146 = &g_28.f0;
    int *l_1147 = &l_1128;
    l_1129 = func_18(l_1127, l_1128, l_1127);

    ;
    ++g_1148;
    (*l_1133) &= 1L;
    return l_1127;


}







static unsigned short func_18(struct S0 * p_19, char p_20, struct S0 * p_21)
{
    unsigned short l_886 = 0x5F96L;
    struct S3 *l_889 = (void*)0;
    struct S3 *l_890 = (void*)0;
    struct S0 ***l_891 = &g_152;
    int l_892 = 0x7AB1D79FL;
    int l_899 = 4L;
    int l_909 = 7L;
    int l_917 = (-1L);
    int l_962 = 0x67D6D302L;
    int l_981 = 1L;
    int l_998 = 0x1083F53FL;
    int l_1005 = 0x4814FAB2L;
    int l_1015 = 0xD294501EL;
    int *l_1023 = &l_899;
    int *l_1024 = &l_892;
    int *l_1025 = &l_1005;
    int *l_1026 = &g_28.f0;
    int *l_1027 = (void*)0;
    int *l_1028 = (void*)0;
    int *l_1029 = &l_899;
    int *l_1030 = &l_917;
    int *l_1031 = &l_917;
    int *l_1032 = &l_909;
    int *l_1033 = (void*)0;
    int *l_1034 = &g_49;
    int *l_1035 = &l_998;
    int *l_1036 = &l_909;
    int *l_1037 = &l_962;
    int *l_1038 = &l_962;
    int *l_1039 = &l_917;
    int *l_1040 = &l_899;
    int *l_1041 = &l_1005;
    int *l_1042 = &g_99;
    int *l_1043 = (void*)0;
    int *l_1044 = &g_278.f0;
    int *l_1045 = (void*)0;
    int *l_1046 = &l_899;
    int *l_1047 = (void*)0;
    int *l_1048 = &g_28.f0;
    int *l_1049 = (void*)0;
    int *l_1050 = &l_909;
    int *l_1051 = &g_99;
    int *l_1052 = &g_49;
    int *l_1053 = (void*)0;
    int *l_1054 = &l_899;
    int *l_1055 = &l_899;
    int *l_1056 = &l_892;
    int *l_1057 = (void*)0;
    int *l_1058 = &l_1005;
    int *l_1059 = &l_981;
    int *l_1060 = &l_917;
    int *l_1061 = &g_99;
    int *l_1062 = &g_49;
    int *l_1063 = (void*)0;
    int *l_1064 = &l_917;
    int *l_1065 = &l_981;
    int *l_1066 = &l_917;
    int *l_1067 = (void*)0;
    int *l_1068 = (void*)0;
    int *l_1069 = (void*)0;
    int *l_1070 = (void*)0;
    int *l_1071 = &l_962;
    int *l_1072 = &l_917;
    int *l_1073 = &g_28.f0;
    int *l_1074 = &g_278.f0;
    int *l_1075 = &l_981;
    int *l_1076 = &l_892;
    int *l_1077 = &g_99;
    int *l_1078 = &g_278.f0;
    int *l_1079 = (void*)0;
    int *l_1080 = &g_49;
    int *l_1081 = &g_278.f0;
    int *l_1082 = &g_278.f0;
    int *l_1083 = &l_892;
    int *l_1084 = &l_962;
    int *l_1085 = &l_1005;
    int *l_1086 = &g_28.f0;
    int l_1087 = 0xAA7F24CEL;
    int *l_1088 = &g_278.f0;
    int *l_1089 = &l_1005;
    int *l_1090 = &g_28.f0;
    int *l_1091 = &l_909;
    int *l_1092 = &l_899;
    int *l_1093 = &l_892;
    int l_1094 = 2L;
    int *l_1095 = &l_1094;
    int *l_1096 = &l_962;
    int l_1097 = 0xA4A350E4L;
    int *l_1098 = &l_1087;
    int *l_1099 = &l_998;
    int *l_1100 = &l_1087;
    int *l_1101 = (void*)0;
    int *l_1102 = &g_278.f0;
    int *l_1103 = &l_962;
    int *l_1104 = &l_1094;
    int *l_1105 = &g_49;
    int *l_1106 = &l_1005;
    int *l_1107 = &l_1094;
    char l_1108 = (-1L);
    int *l_1109 = &l_981;
    int *l_1110 = &l_909;
    int *l_1111 = &l_962;
    int *l_1112 = &l_1094;
    int *l_1113 = &g_99;
    int *l_1114 = &l_1097;
    int *l_1115 = &g_49;
    int *l_1116 = &g_278.f0;
    int l_1117 = (-3L);
    int *l_1118 = &l_899;
    int *l_1119 = &g_99;
    int *l_1120 = &l_917;
    int *l_1121 = (void*)0;
    int *l_1122 = &g_278.f0;
    short l_1126 = 0xA1E2L;
    for (g_295.f2 = 18; (g_295.f2 != (-22)); g_295.f2 = safe_sub_func_uint16_t_u_u(g_295.f2, 7))
    {
        struct S1 *l_856 = &g_67;
        struct S1 **l_855 = &l_856;
        struct S1 ***l_857 = &l_855;
        int *l_860 = &g_99;
        int *l_861 = &g_278.f0;
        int *l_862 = &g_99;
        int *l_863 = &g_278.f0;
        int *l_864 = &g_278.f0;
        int *l_865 = &g_99;
        int *l_866 = &g_99;
        int *l_867 = &g_99;
        int *l_868 = &g_99;
        int *l_869 = &g_99;
        int *l_870 = &g_49;
        int *l_871 = &g_278.f0;
        int *l_872 = &g_278.f0;
        int *l_873 = &g_49;
        int *l_874 = (void*)0;
        int *l_875 = &g_49;
        int l_876 = 1L;
        int *l_877 = &g_99;
        int *l_878 = &g_49;
        int *l_879 = (void*)0;
        int *l_880 = (void*)0;
        int *l_881 = &g_49;
        int *l_882 = &g_49;
        int *l_883 = (void*)0;
        int *l_884 = (void*)0;
        int *l_885 = (void*)0;
        (*l_857) = l_855;
        for (g_437 = 7; (g_437 >= 11); ++g_437)
        {
            return g_67.f1;
        }
        l_886--;
        if ((l_889 != l_890))
        {
            (**g_151) = (func_45(g_67.f2) , p_21);
        }
        else
        {
            short l_893 = (-1L);
            int *l_894 = &g_28.f0;
            int *l_895 = &g_28.f0;
            int *l_896 = &g_28.f0;
            int *l_897 = &g_49;
            int *l_898 = &l_892;
            int *l_900 = &g_278.f0;
            int *l_901 = (void*)0;
            int *l_902 = &g_278.f0;
            int *l_903 = &g_28.f0;
            int *l_904 = &l_892;
            int *l_905 = &l_899;
            int *l_906 = &g_49;
            int *l_907 = &l_892;
            int *l_908 = (void*)0;
            int *l_910 = &l_909;
            int *l_911 = &l_892;
            int *l_912 = &g_28.f0;
            int *l_913 = &g_99;
            int *l_914 = &l_899;
            int *l_915 = (void*)0;
            int *l_916 = &l_876;
            int *l_918 = &l_917;
            int *l_919 = &g_49;
            int *l_920 = &l_876;
            struct S2 l_924 = {0,-15,1518,203,4388};
            struct S2 *l_925 = &l_924;
            if (l_886)
                break;
            (*l_871) = (p_20 | (((***g_151) , (0xB05C5E7CL | (g_61 , (*l_875)))) > (g_67 , ((void*)0 != l_891))));
            --g_921;
            (*l_925) = l_924;
        }
    }


    for (g_67.f6 = 0; (g_67.f6 == (-18)); g_67.f6--)
    {
        struct S3 **l_928 = &l_889;
        int *l_929 = (void*)0;
        int *l_930 = &l_917;
        int *l_931 = (void*)0;
        int *l_932 = &l_892;
        int *l_933 = &l_899;
        int *l_934 = &l_917;
        int *l_935 = (void*)0;
        int *l_936 = &l_892;
        int *l_937 = (void*)0;
        int *l_938 = (void*)0;
        int *l_939 = (void*)0;
        int *l_940 = &g_99;
        int *l_941 = &l_909;
        int *l_942 = &g_49;
        int *l_943 = &l_892;
        int *l_944 = &l_909;
        int *l_945 = &l_899;
        int *l_946 = &l_917;
        int *l_947 = &g_99;
        int *l_948 = &g_99;
        int *l_949 = &g_49;
        int *l_950 = &g_28.f0;
        int *l_951 = &l_892;
        int *l_952 = &l_917;
        int *l_953 = &g_99;
        int *l_954 = &g_28.f0;
        int *l_955 = (void*)0;
        int *l_956 = (void*)0;
        int *l_957 = &g_278.f0;
        int *l_958 = &g_49;
        int *l_959 = &l_899;
        int *l_960 = &l_917;
        int l_961 = 1L;
        int *l_963 = &g_99;
        int *l_964 = &l_962;
        int l_965 = (-1L);
        int *l_966 = &g_278.f0;
        int *l_967 = &g_28.f0;
        int *l_968 = &l_965;
        int *l_969 = &l_892;
        int *l_970 = &l_899;
        int *l_971 = &g_49;
        int *l_972 = &l_892;
        int l_973 = 0x76F5BC23L;
        int *l_974 = (void*)0;
        int *l_975 = (void*)0;
        int l_976 = 9L;
        int *l_977 = &l_909;
        int *l_978 = &l_962;
        int l_979 = 0L;
        int *l_980 = (void*)0;
        int *l_982 = (void*)0;
        int *l_983 = &g_99;
        int *l_984 = &l_909;
        int *l_985 = &l_981;
        int *l_986 = &l_961;
        int *l_987 = &l_917;
        int *l_988 = &l_961;
        int *l_989 = &l_917;
        int *l_990 = &l_961;
        int *l_991 = &g_278.f0;
        int *l_992 = &l_976;
        int *l_993 = &l_965;
        int *l_994 = &g_49;
        int *l_995 = &l_962;
        int *l_996 = (void*)0;
        int *l_997 = &l_899;
        int *l_999 = &l_981;
        int *l_1000 = &g_28.f0;
        int *l_1001 = &l_981;
        int *l_1002 = &l_917;
        int *l_1003 = &l_899;
        int *l_1004 = (void*)0;
        int *l_1006 = &l_981;
        int *l_1007 = &l_917;
        int *l_1008 = &l_998;
        int l_1009 = 1L;
        int *l_1010 = &l_962;
        int *l_1011 = &g_278.f0;
        int *l_1012 = &g_28.f0;
        int *l_1013 = &l_899;
        int *l_1014 = &l_961;
        int *l_1016 = &l_909;
        int *l_1017 = &l_973;
        int *l_1018 = &l_962;
        int *l_1019 = &l_917;
        (*l_928) = l_889;
        g_1020++;
    }
    --g_1123;
    return l_1126;
}







static struct S0 * func_22(struct S3 p_23, struct S3 p_24, struct S0 * p_25, struct S0 * p_26)
{
    struct S1 *l_849 = &g_67;
    struct S1 **l_848 = &l_849;
    struct S2 l_852 = {1,-14,1670,-1106,4729};
    for (g_138 = 0; (g_138 >= (-2)); g_138--)
    {
        int *l_846 = &g_99;
        int **l_847 = &l_846;
        for (g_797 = 28; (g_797 < 20); g_797--)
        {
            return (**g_151);


        }
        (*l_847) = l_846;
        return (**g_151);


    }
    (*l_848) = (void*)0;

    ;
    for (g_61 = 0; (g_61 <= (-6)); g_61--)
    {
        (*l_848) = (void*)0;
    }
    l_852 = l_852;
    return (**g_151);


}







static struct S0 * func_29(short p_30, int p_31, struct S0 * p_32)
{
    struct S0 **l_37 = &g_34;
    struct S0 ***l_36 = &l_37;
    int l_44 = 0xDA1E1CF2L;
    struct S2 l_65 = {1,2,758,-1482,3165};
    int l_135 = (-1L);
    struct S1 l_163 = {2770,-121,30,{0UL,3172,-1L,18446744073709551608UL},2,3074,0xE386L};
    struct S3 l_292 = {0L};
    int *l_304 = &l_44;
    unsigned short l_441 = 0x3CA5L;
    int l_605 = 0xCEFEB4F2L;
    struct S3 l_840 = {-3L};
    (*l_36) = &p_32;

    ;
    if ((safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((g_35.f2 <= g_28.f0), l_44)), (func_45(p_31) , ((**l_37) , l_44)))), (safe_mul_func_int16_t_s_s(l_44, (((g_57.f4 , l_44) && 0xD7BFL) && l_44))))))
    {
        struct S0 l_66 = {0UL,791,0L,18446744073709551611UL};
        struct S2 l_170 = {0,-12,1622,350,3751};
        int *l_184 = (void*)0;
        int *l_185 = &l_44;
        int *l_186 = (void*)0;
        int *l_187 = &g_99;
        int *l_188 = (void*)0;
        int *l_189 = &g_49;
        int *l_190 = &l_44;
        int *l_191 = &l_44;
        int *l_192 = &l_135;
        int *l_193 = &l_44;
        int *l_194 = &l_135;
        int *l_195 = (void*)0;
        int *l_196 = &g_49;
        int *l_197 = &l_135;
        int *l_198 = &g_49;
        int *l_199 = &g_49;
        int *l_200 = &g_99;
        int *l_201 = &g_49;
        int *l_202 = &l_44;
        int l_203 = (-1L);
        int *l_204 = &g_99;
        int *l_205 = &g_49;
        int *l_206 = &g_49;
        int *l_207 = (void*)0;
        int *l_208 = (void*)0;
        int *l_209 = (void*)0;
        int *l_210 = &l_203;
        int *l_211 = &l_135;
        int *l_212 = (void*)0;
        int *l_213 = &l_44;
        int *l_214 = &g_99;
        int *l_215 = (void*)0;
        int *l_216 = &g_49;
        int *l_217 = (void*)0;
        int *l_218 = (void*)0;
        int *l_219 = (void*)0;
        int *l_220 = &g_49;
        int *l_221 = (void*)0;
        int *l_222 = &l_203;
        int *l_223 = &g_99;
        int *l_224 = &l_44;
        int *l_225 = &l_44;
        int *l_226 = (void*)0;
        int *l_227 = &g_49;
        int *l_228 = (void*)0;
        int *l_229 = &l_135;
        int *l_230 = &l_44;
        int *l_231 = &l_44;
        int *l_232 = &l_135;
        int *l_233 = &g_49;
        int *l_234 = &l_203;
        int *l_235 = (void*)0;
        int *l_236 = &l_44;
        int *l_237 = &l_44;
        int *l_238 = &l_203;
        int *l_239 = &l_44;
        int l_240 = 0x0C86490BL;
        int *l_241 = (void*)0;
        int *l_242 = (void*)0;
        int *l_243 = &g_99;
        int *l_244 = &l_44;
        int *l_245 = &l_203;
        int *l_246 = &l_135;
        int *l_247 = &g_99;
        int *l_248 = &g_49;
        int *l_249 = &l_44;
        int *l_250 = &g_99;
        int *l_251 = &l_203;
        int *l_252 = &l_240;
        int *l_253 = &l_203;
        int *l_254 = &l_240;
        int l_255 = 1L;
        int *l_256 = &l_240;
        unsigned l_257 = 1UL;
        g_49 |= l_44;
        if ((safe_unary_minus_func_uint16_t_u(((l_65 , g_9) > g_35.f0))))
        {
            struct S1 l_72 = {1338,-304,10,{0x8EL,1970,-4L,0x5684CF74L},7,2579,6L};
            int *l_73 = &l_44;
            (*l_73) &= ((l_66 , &g_35) != (((((g_67 , (((((g_67.f2 == (safe_sub_func_uint32_t_u_u(p_31, func_52(p_30, ((safe_lshift_func_uint16_t_u_s((0x3FEC725EL > (1UL <= (((*g_34) , 4294967295UL) || 1L))), l_66.f2)) >= 1L), g_57, (*g_34))))) != l_66.f0) , l_72) , 0x48L) > 0x0EL)) != p_30) || 0x29L) , g_67) , (void*)0));
            (*l_73) = 0x80EC7D23L;
        }
        else
        {
            unsigned char l_74 = 6UL;
            int l_109 = 5L;
            int l_137 = 0L;
            struct S0 ***l_153 = (void*)0;
            struct S2 l_171 = {1,-8,55,1125,572};
            struct S3 *l_175 = (void*)0;
            struct S1 l_181 = {1426,331,82,{0x4BL,2812,0x375103C8L,0UL},3,5035,0x76D1L};
            if (func_52(l_74, l_65.f3, g_57, (*g_34)))
            {
                l_44 = l_66.f2;
            }
            else
            {
                int *l_75 = &l_44;
                int l_76 = 0x9DBF4B60L;
                int *l_77 = &g_49;
                int *l_78 = &g_49;
                int *l_79 = (void*)0;
                int *l_80 = &g_49;
                int *l_81 = &l_76;
                int *l_82 = &l_44;
                int *l_83 = &l_76;
                int l_84 = 3L;
                int *l_85 = &l_84;
                int *l_86 = (void*)0;
                int *l_87 = &l_44;
                int *l_88 = &l_84;
                int *l_89 = (void*)0;
                int *l_90 = &g_49;
                int *l_91 = &l_84;
                int *l_92 = &l_84;
                int *l_93 = &l_44;
                int *l_94 = &l_44;
                int *l_95 = &l_84;
                int *l_96 = &g_49;
                int *l_97 = (void*)0;
                int *l_98 = &l_44;
                int *l_100 = (void*)0;
                int *l_101 = &l_44;
                int *l_102 = &l_76;
                int *l_103 = &l_76;
                int *l_104 = &g_99;
                int *l_105 = &g_49;
                int *l_106 = (void*)0;
                int *l_107 = (void*)0;
                int *l_108 = (void*)0;
                int *l_111 = &l_84;
                int *l_112 = &g_49;
                int *l_113 = (void*)0;
                int *l_114 = &l_84;
                int *l_116 = (void*)0;
                int *l_117 = &l_76;
                int *l_118 = &g_49;
                int *l_119 = &l_76;
                int *l_120 = (void*)0;
                int *l_121 = (void*)0;
                int *l_122 = &g_99;
                int l_123 = 0x2C35B49DL;
                int *l_124 = &l_109;
                int *l_125 = &l_123;
                int *l_126 = &l_123;
                int *l_127 = &l_84;
                int *l_128 = &l_123;
                int *l_129 = &g_99;
                int *l_130 = (void*)0;
                int *l_131 = &g_49;
                int *l_132 = (void*)0;
                int l_133 = 0xC56F68EFL;
                int *l_134 = &g_49;
                int *l_136 = &l_44;
                int *l_139 = &l_109;
                int *l_140 = &l_76;
                int *l_141 = &l_44;
                struct S0 *l_162 = &g_67.f3;
                ++g_142;
                (*l_140) &= (safe_lshift_func_uint16_t_u_s(p_30, 0));
                if ((((safe_lshift_func_uint8_t_u_u(g_67.f4, 1)) , ((**l_37) , (safe_rshift_func_uint8_t_u_u((g_151 != l_153), (((**g_151) != ((safe_lshift_func_int8_t_s_s(((safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s((((l_74 != ((safe_add_func_int8_t_s_s(func_52((&l_135 != (g_67 , &l_76)), p_30, g_57, (***l_36)), (*l_83))) > 0x4A55526DL)) , (void*)0) == (*l_36)), l_66.f0)), p_30)) , 1L), 4)) , l_162)) || g_115))))) ^ p_30))
                {
                    int **l_164 = (void*)0;
                    int **l_165 = &l_79;
                    (*l_165) = (l_163 , (void*)0);
                }
                else
                {
                    unsigned l_172 = 0UL;
                    struct S3 **l_176 = &l_175;
                    (*l_91) |= (((safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s((((((func_52(p_31, g_9, l_170, (***l_36)) < 0UL) | p_30) , (func_52(func_52(p_30, (*l_82), l_171, (*p_32)), g_9, g_57, (**l_37)) < l_65.f1)) > 255UL) == p_31), g_67.f3.f2)), g_115)) ^ 0xD3L) && 0UL);
                    ++l_172;
                    (*l_176) = l_175;
                }
                l_170.f1 ^= (safe_mod_func_uint8_t_u_u(((l_181 , g_35.f0) == (0x8843L != p_30)), (safe_mul_func_uint16_t_u_u(func_52(l_171.f3, g_57.f1, g_57, (*p_32)), g_67.f0))));
            }
        }
        l_257++;
    }
    else
    {
        unsigned l_266 = 0x956EA2FDL;
        int *l_303 = &g_278.f0;
        struct S1 l_325 = {13489,1177,67,{7UL,4051,0xA91DF0A7L,0xC6A1E28AL},5,4281,1L};
        struct S2 l_341 = {0,9,203,-1480,1621};
        int l_428 = 0x2F70D8E6L;
        struct S3 l_450 = {1L};
        short l_788 = 0x1631L;
        if (((l_163.f0 <= (g_49 , (p_31 , (safe_mod_func_uint8_t_u_u((g_57.f3 , g_35.f2), ((safe_rshift_func_uint16_t_u_u(((((**l_37) , ((safe_sub_func_uint32_t_u_u(((void*)0 != (**l_36)), func_52(p_30, g_35.f2, l_65, (*p_32)))) | l_266)) || l_266) , g_57.f2), l_266)) & 3L)))))) , p_30))
        {
            unsigned l_274 = 1UL;
            struct S3 *l_277 = &g_278;
            struct S0 *l_291 = &g_35;
            unsigned short l_307 = 0UL;
            for (g_115 = 16; (g_115 == 14); g_115--)
            {
                unsigned l_287 = 0UL;
                char l_298 = (-1L);
                int *l_301 = &g_99;
                for (g_138 = 0; (g_138 <= 13); g_138 = safe_add_func_uint8_t_u_u(g_138, 1))
                {
                    (*g_34) = (*p_32);
                }
            }
            (*l_303) &= ((g_49 & (g_67.f4 , ((safe_mul_func_int16_t_s_s(l_307, (safe_mod_func_int8_t_s_s(0L, p_30)))) == (*l_304)))) <= g_57.f1);
            for (g_110 = 0; (g_110 > (-6)); g_110 = safe_sub_func_int32_t_s_s(g_110, 6))
            {
                return (*g_152);


            }
        }
        else
        {
            unsigned l_320 = 0x9B3E444BL;
            unsigned short l_328 = 0UL;
            struct S2 l_329 = {0,-14,1354,-1571,3111};
            struct S0 *l_453 = &g_295;
            struct S1 l_454 = {5389,78,23,{251UL,141,1L,0x4C91FD1CL},8,2101,0xE581L};
            int l_541 = (-8L);
            int l_742 = (-10L);
            int l_751 = 0xF431C29BL;
            for (g_35.f2 = 0; (g_35.f2 != 4); g_35.f2 = safe_add_func_uint8_t_u_u(g_35.f2, 7))
            {
                unsigned l_330 = 0UL;
                struct S2 l_331 = {1,2,1646,-947,3372};
                struct S0 **l_602 = &g_34;
                int l_715 = 0xC3AA4988L;
                int l_727 = 0xAD33CDD1L;
                unsigned l_837 = 0xB945C73EL;
                if ((func_52((func_52((0x45BEL <= ((safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(p_30, (l_320 || g_67.f3.f1))), g_295.f1)), (safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s((g_67 , (l_325 , (func_52((safe_sub_func_uint8_t_u_u((g_295.f2 & l_328), p_30)), p_31, l_329, (**l_37)) <= 0x6869L))), (*l_303))), g_67.f3.f1)))) & g_67.f4)), l_329.f3, l_329, (*g_34)) ^ 0xE09E583AL), g_295.f1, l_329, l_325.f3) > 0xCDEBL))
                {
                    struct S0 l_332 = {8UL,1966,0x016BB01CL,0x3E1A4289L};
                    struct S3 *l_339 = &g_28;
                    unsigned l_340 = 0x7A8C7C72L;
                    int l_343 = 5L;
                    int l_398 = 0xE37A3864L;
                    g_67.f1 = func_52(l_330, p_30, l_331, l_332);
                    (*l_303) &= g_35.f0;
                    if (((9L | (safe_add_func_uint32_t_u_u(0x7DB8A073L, ((*l_304) & p_30)))) & (safe_lshift_func_uint16_t_u_s((((func_52((safe_lshift_func_int8_t_s_s(g_138, ((void*)0 == l_339))), l_340, l_341, (**g_152)) <= 0xBFC5C242L) == 4UL) == 0x21C0L), 2))))
                    {
                        if (g_57.f1)
                            break;
                        return p_32;


                    }
                    else
                    {
                        int *l_342 = (void*)0;
                        int *l_344 = &l_135;
                        int *l_345 = &l_343;
                        int *l_346 = &g_49;
                        int *l_347 = (void*)0;
                        int *l_348 = &l_135;
                        int *l_349 = &l_343;
                        int *l_350 = (void*)0;
                        int *l_351 = &l_292.f0;
                        int *l_352 = &g_99;
                        int *l_353 = (void*)0;
                        int *l_354 = (void*)0;
                        int *l_355 = &l_343;
                        int *l_356 = (void*)0;
                        int *l_357 = &l_343;
                        int *l_358 = &l_343;
                        int *l_359 = &g_49;
                        int *l_360 = &g_49;
                        int *l_361 = (void*)0;
                        int *l_362 = &l_292.f0;
                        int *l_363 = &g_99;
                        int *l_364 = &l_135;
                        int *l_365 = &g_278.f0;
                        int *l_366 = &g_49;
                        int *l_367 = &l_44;
                        int *l_368 = &g_278.f0;
                        int *l_369 = &l_135;
                        int *l_370 = &l_44;
                        int *l_371 = &l_292.f0;
                        int *l_372 = &l_44;
                        int *l_373 = (void*)0;
                        int *l_374 = &g_49;
                        int *l_375 = (void*)0;
                        int *l_376 = &l_135;
                        int *l_377 = (void*)0;
                        int *l_378 = &g_49;
                        int *l_379 = (void*)0;
                        int *l_380 = &g_99;
                        int *l_381 = &l_135;
                        int *l_382 = &g_278.f0;
                        int *l_383 = &l_135;
                        int *l_384 = &l_343;
                        int *l_385 = &l_292.f0;
                        int *l_386 = &l_343;
                        int *l_387 = &l_135;
                        int *l_388 = &g_278.f0;
                        int *l_389 = (void*)0;
                        int *l_390 = (void*)0;
                        int *l_391 = &l_135;
                        int *l_392 = &g_278.f0;
                        int *l_393 = &l_343;
                        int *l_394 = &l_135;
                        int *l_395 = (void*)0;
                        int *l_396 = &l_135;
                        int *l_397 = &g_99;
                        int *l_399 = &l_135;
                        int *l_400 = &l_135;
                        int *l_401 = &g_49;
                        int *l_402 = (void*)0;
                        int *l_403 = &g_49;
                        int *l_404 = &l_135;
                        int *l_405 = &g_49;
                        int *l_406 = &g_49;
                        int *l_407 = &l_135;
                        int *l_408 = &l_292.f0;
                        int *l_409 = (void*)0;
                        int *l_410 = (void*)0;
                        int *l_411 = &g_49;
                        int *l_412 = &l_292.f0;
                        int *l_413 = &l_135;
                        int *l_414 = &l_44;
                        int *l_415 = &l_44;
                        int *l_416 = &l_135;
                        int *l_417 = &g_278.f0;
                        int *l_418 = (void*)0;
                        int *l_419 = &l_343;
                        int *l_420 = &l_343;
                        int *l_421 = &l_44;
                        int *l_422 = (void*)0;
                        int *l_423 = &l_292.f0;
                        int *l_424 = &l_398;
                        int *l_425 = &g_49;
                        int *l_426 = &l_292.f0;
                        int *l_427 = &l_343;
                        int *l_429 = (void*)0;
                        int *l_430 = &l_428;
                        int *l_431 = &g_278.f0;
                        int *l_432 = &l_135;
                        int *l_433 = &g_49;
                        int *l_434 = &g_99;
                        int *l_435 = &g_278.f0;
                        int *l_436 = &g_49;
                        struct S1 l_440 = {11133,-1293,82,{247UL,2941,0x2AF678EFL,0xC2E8F7DCL},6,5144,0x5D62L};
                        g_437--;
                        l_440 = g_67;
                        g_49 = p_30;
                        l_441++;
                    }
                    if ((g_35.f2 == (safe_lshift_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(p_31, ((l_450 , l_163) , ((((safe_add_func_int16_t_s_s(((251UL & p_31) , ((void*)0 != l_453)), ((((((l_454 , g_67.f4) & 0L) >= 0x0B1CL) && g_57.f2) , 0UL) , 0x92EBL))) != g_67.f0) , g_28.f0) > 1UL)))) < p_30), g_57.f4)) | 1UL) != g_67.f5), l_331.f2))))
                    {
                        struct S3 **l_455 = (void*)0;
                        struct S3 **l_456 = (void*)0;
                        (*l_304) ^= (&g_278 == &l_450);
                        g_457 = (g_67 , &g_278);
                    }
                    else
                    {
                        struct S0 l_460 = {0xADL,802,0x1335DF6CL,0x3773507AL};
                        struct S2 l_461 = {1,2,886,100,2972};
                        (*l_303) ^= (p_31 > (((g_67.f3.f0 < ((func_52(func_52(((((p_30 ^ g_67.f4) || g_99) && ((safe_rshift_func_uint8_t_u_u(((l_331 , ((***g_151) , func_52((*l_304), p_31, g_57, (*l_453)))) || g_67.f3.f0), p_31)) & l_331.f2)) & p_30), g_67.f0, l_329, l_460), l_460.f3, l_329, (**g_152)) ^ p_30) >= l_331.f4)) > 0x6D4AE694L) , p_30));
                        if (g_57.f1)
                            continue;
                        if (p_30)
                            continue;
                        l_461 = g_57;
                    }
                }
                else
                {
                    struct S2 l_473 = {0,12,490,-160,5519};
                    struct S0 **l_601 = &g_34;
                    int l_705 = 1L;
                    int l_707 = 0x42DD3024L;
                    int l_719 = 0xF3FED448L;
                    int l_720 = (-6L);
                    int l_733 = 6L;
                    for (g_437 = 0; (g_437 != 16); g_437++)
                    {
                        int l_472 = 8L;
                        unsigned char l_500 = 1UL;
                        int *l_501 = (void*)0;
                        int *l_502 = &l_135;
                        int *l_503 = &l_292.f0;
                        int l_504 = 1L;
                        int *l_505 = &l_428;
                        int *l_506 = &g_49;
                        int *l_507 = &l_504;
                        int *l_508 = &l_450.f0;
                        int *l_509 = &l_428;
                        int *l_510 = (void*)0;
                        int *l_511 = (void*)0;
                        int *l_512 = &l_44;
                        int *l_513 = (void*)0;
                        int *l_514 = &l_292.f0;
                        int *l_515 = (void*)0;
                        int *l_516 = &g_99;
                        int *l_517 = &l_428;
                        int *l_518 = &g_99;
                        int *l_519 = &g_49;
                        int *l_520 = &l_135;
                        int *l_521 = &l_292.f0;
                        int *l_522 = &g_278.f0;
                        int *l_523 = &g_99;
                        int *l_524 = &l_450.f0;
                        int *l_525 = &g_49;
                        int *l_526 = &l_428;
                        int *l_527 = &l_450.f0;
                        int *l_528 = &l_428;
                        int *l_529 = &l_292.f0;
                        int *l_530 = &g_49;
                        int *l_531 = &l_292.f0;
                        int *l_532 = &l_292.f0;
                        int *l_533 = (void*)0;
                        int *l_534 = &g_99;
                        int *l_535 = &l_292.f0;
                        int *l_536 = &l_428;
                        int *l_537 = &l_504;
                        int *l_538 = &l_135;
                        int *l_539 = &g_99;
                        int *l_540 = &l_44;
                        int *l_542 = &g_99;
                        int *l_543 = (void*)0;
                        int *l_544 = (void*)0;
                        int l_545 = 1L;
                        int *l_546 = (void*)0;
                        int *l_547 = &g_99;
                        int *l_548 = &g_49;
                        int *l_549 = &g_278.f0;
                        int *l_550 = (void*)0;
                        int *l_551 = &l_450.f0;
                        int *l_552 = &l_545;
                        int *l_553 = &l_292.f0;
                        int *l_554 = &l_545;
                        int *l_555 = (void*)0;
                        int *l_556 = &l_504;
                        int *l_557 = &l_44;
                        int *l_558 = &l_428;
                        int *l_559 = (void*)0;
                        int *l_560 = &g_49;
                        int *l_561 = &l_135;
                        int *l_562 = &l_292.f0;
                        int *l_563 = &l_541;
                        int *l_564 = &g_49;
                        int *l_565 = &g_278.f0;
                        int *l_566 = &l_450.f0;
                        int *l_567 = &l_545;
                        int *l_568 = &l_504;
                        int *l_569 = &g_278.f0;
                        int *l_570 = (void*)0;
                        int *l_571 = &l_44;
                        int *l_572 = &l_450.f0;
                        int *l_573 = (void*)0;
                        int *l_574 = &l_545;
                        int *l_575 = &l_135;
                        int *l_576 = &g_278.f0;
                        int *l_577 = &g_99;
                        int *l_578 = &g_99;
                        int *l_579 = &l_292.f0;
                        int *l_580 = &l_450.f0;
                        int *l_581 = &g_278.f0;
                        int *l_582 = &l_450.f0;
                        int *l_583 = &l_135;
                        int *l_584 = &l_545;
                        int *l_585 = &g_278.f0;
                        int *l_586 = &l_428;
                        int *l_587 = &g_278.f0;
                        int *l_588 = (void*)0;
                        int *l_589 = &l_428;
                        int *l_590 = &l_44;
                        (*l_303) = (safe_lshift_func_uint16_t_u_u((p_31 , l_329.f3), ((0x6E42L | (((safe_rshift_func_uint8_t_u_s(func_52((safe_sub_func_int32_t_s_s(g_67.f3.f1, (p_31 <= (l_331.f0 , func_52(p_30, (safe_add_func_int8_t_s_s((*l_304), ((l_472 , (void*)0) == (void*)0))), l_473, l_325.f3))))), g_57.f4, l_341, (*g_34)), 1)) | p_30) > g_295.f3)) < (*l_304))));
                        (*l_502) ^= ((safe_sub_func_uint8_t_u_u(p_31, ((safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(func_52((((safe_mod_func_int32_t_s_s(((p_30 || ((safe_mod_func_int32_t_s_s((*l_304), ((0x43ADL != (safe_lshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s((l_329.f0 && ((((0xB3061134L || ((l_450 , (safe_mul_func_uint16_t_u_u(p_30, (safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((p_31 , g_99), 6)), 0x3BL)) || g_35.f0) & g_138), p_30)), 1))))) || g_67.f4)) < l_472) < 0xB327L) || p_30)), (-9L))) & 1L), 7))) ^ g_49))) > p_30)) || 0xD27EL), l_473.f4)) , 0x0AL) | p_31), p_31, g_57, (***g_151)), l_500)), g_35.f1)) >= 3UL))) ^ (*l_303));
                        --g_591;
                        return (**g_151);


                    }
                    if ((((((((((g_28.f0 > (safe_unary_minus_func_uint16_t_u((safe_mod_func_int32_t_s_s((*l_303), (safe_mul_func_int8_t_s_s(0xF5L, ((safe_mul_func_uint16_t_u_u((((((*l_304) , l_601) != l_602) >= ((***g_151) , (*l_304))) , (((((safe_sub_func_uint8_t_u_u((l_473.f0 != 0UL), g_35.f3)) | l_454.f3.f0) | g_437) & (-1L)) == g_138)), (*l_303))) , p_31)))))))) | l_331.f3) | g_35.f1) | 0xDA55L) != l_473.f3) >= l_605) <= p_31) <= g_67.f2) > (*l_303)))
                    {
                        int *l_606 = &g_99;
                        int *l_607 = &l_135;
                        int *l_608 = &l_44;
                        int *l_609 = &l_44;
                        int *l_610 = (void*)0;
                        int *l_611 = (void*)0;
                        int *l_612 = &g_99;
                        int *l_613 = &l_135;
                        int *l_614 = &g_99;
                        int *l_615 = &l_605;
                        int *l_616 = (void*)0;
                        int *l_617 = &g_99;
                        int *l_618 = &g_49;
                        int *l_619 = &g_49;
                        int *l_620 = &l_44;
                        int *l_621 = &l_428;
                        int *l_622 = &l_44;
                        int *l_623 = &g_278.f0;
                        int *l_624 = &l_292.f0;
                        int *l_625 = &l_428;
                        int *l_626 = &g_278.f0;
                        int *l_627 = &l_292.f0;
                        int *l_628 = (void*)0;
                        int *l_629 = &l_44;
                        int *l_630 = (void*)0;
                        int *l_631 = &l_292.f0;
                        int *l_632 = (void*)0;
                        int *l_633 = (void*)0;
                        int *l_634 = (void*)0;
                        int *l_635 = &l_428;
                        int *l_636 = &l_292.f0;
                        int *l_637 = &l_135;
                        int *l_638 = &g_49;
                        int *l_639 = (void*)0;
                        int *l_640 = &g_99;
                        int *l_641 = (void*)0;
                        int *l_642 = &l_135;
                        int *l_643 = (void*)0;
                        int *l_644 = &l_135;
                        int *l_645 = (void*)0;
                        int *l_646 = (void*)0;
                        int *l_647 = &g_278.f0;
                        int *l_648 = &g_99;
                        int *l_649 = &g_278.f0;
                        int *l_650 = &l_605;
                        int *l_651 = &l_450.f0;
                        int *l_652 = &l_292.f0;
                        int *l_653 = &l_292.f0;
                        int l_654 = (-1L);
                        int *l_655 = &l_292.f0;
                        int *l_656 = &l_605;
                        int *l_657 = &l_292.f0;
                        int *l_658 = &g_99;
                        int *l_659 = &g_49;
                        int *l_660 = &g_49;
                        int *l_661 = &l_428;
                        int l_662 = 0x94ABE02DL;
                        int *l_663 = &l_654;
                        int *l_664 = &l_428;
                        int *l_665 = &l_450.f0;
                        int *l_666 = &l_450.f0;
                        int *l_667 = &g_99;
                        int *l_668 = &l_450.f0;
                        int *l_669 = &g_99;
                        int *l_670 = &g_99;
                        int *l_671 = &l_428;
                        int *l_672 = (void*)0;
                        int *l_673 = &l_428;
                        int *l_674 = &l_605;
                        int *l_675 = (void*)0;
                        int *l_676 = &l_605;
                        int *l_677 = &l_654;
                        int *l_678 = &l_44;
                        int *l_679 = &l_135;
                        int *l_680 = &l_662;
                        int *l_681 = &g_49;
                        int *l_682 = &l_662;
                        int *l_683 = &g_49;
                        int *l_684 = &g_278.f0;
                        int *l_685 = (void*)0;
                        int *l_686 = &l_450.f0;
                        int *l_687 = &l_654;
                        int *l_688 = &l_292.f0;
                        int *l_689 = &g_99;
                        int *l_690 = (void*)0;
                        int *l_691 = &g_99;
                        int *l_692 = &l_541;
                        int *l_693 = &l_135;
                        int *l_694 = (void*)0;
                        int *l_695 = &l_654;
                        int *l_696 = (void*)0;
                        int *l_697 = &g_99;
                        int *l_698 = (void*)0;
                        int *l_699 = &l_654;
                        int *l_700 = &l_605;
                        int *l_701 = &l_654;
                        int *l_702 = &g_278.f0;
                        int *l_703 = &g_278.f0;
                        int *l_704 = &l_541;
                        int *l_706 = &l_44;
                        int *l_708 = (void*)0;
                        int *l_709 = (void*)0;
                        int *l_710 = &l_662;
                        int *l_711 = &g_99;
                        int *l_712 = &l_541;
                        int *l_713 = &g_49;
                        int *l_714 = &l_654;
                        int *l_716 = &l_450.f0;
                        int *l_717 = &l_428;
                        int *l_718 = &l_715;
                        int *l_721 = &g_49;
                        int *l_722 = &l_662;
                        int *l_723 = &l_428;
                        int *l_724 = &l_662;
                        int *l_725 = &l_705;
                        int *l_726 = (void*)0;
                        int *l_728 = &l_605;
                        int *l_729 = (void*)0;
                        int *l_730 = &g_278.f0;
                        int *l_731 = &l_715;
                        int *l_732 = &g_49;
                        int *l_734 = &l_707;
                        int *l_735 = &l_428;
                        int *l_736 = &l_541;
                        int *l_737 = (void*)0;
                        int *l_738 = &l_541;
                        int *l_739 = &l_705;
                        int *l_740 = &g_99;
                        int *l_741 = &g_49;
                        int *l_743 = &l_705;
                        int *l_744 = &g_99;
                        int *l_745 = &l_450.f0;
                        int *l_746 = &l_135;
                        int *l_747 = &l_135;
                        int *l_748 = &l_541;
                        int *l_749 = &l_707;
                        int *l_750 = &l_707;
                        int *l_752 = &l_705;
                        int *l_753 = &l_705;
                        int *l_754 = &g_49;
                        int *l_755 = &l_292.f0;
                        int *l_756 = &l_541;
                        int *l_757 = &l_44;
                        int *l_758 = &l_428;
                        int *l_759 = &l_742;
                        int l_760 = (-1L);
                        int *l_761 = (void*)0;
                        int *l_762 = &l_707;
                        int *l_763 = &g_49;
                        int *l_764 = &l_428;
                        int *l_765 = (void*)0;
                        int *l_766 = (void*)0;
                        int *l_767 = &l_760;
                        int *l_768 = &l_707;
                        int *l_769 = &l_135;
                        int *l_770 = &g_99;
                        int *l_771 = (void*)0;
                        int *l_772 = &l_751;
                        int *l_773 = &l_541;
                        int *l_774 = &l_727;
                        int *l_775 = &l_450.f0;
                        int *l_776 = &l_662;
                        int *l_777 = (void*)0;
                        int *l_778 = (void*)0;
                        int *l_779 = &g_278.f0;
                        int *l_780 = (void*)0;
                        int *l_781 = &l_662;
                        int *l_782 = &l_760;
                        int *l_783 = (void*)0;
                        int *l_784 = &l_541;
                        int *l_785 = (void*)0;
                        int *l_786 = (void*)0;
                        int *l_787 = &l_44;
                        int *l_789 = (void*)0;
                        int *l_790 = &l_719;
                        int *l_791 = &l_428;
                        int *l_792 = (void*)0;
                        int *l_793 = &l_44;
                        int l_794 = (-3L);
                        int *l_795 = &g_99;
                        int *l_796 = &l_719;
                        ++g_797;
                        return (*l_602);


                    }
                    else
                    {
                        int *l_800 = &g_278.f0;
                        int *l_801 = &l_719;
                        int *l_802 = &l_605;
                        int *l_803 = &l_715;
                        int *l_804 = &l_707;
                        int *l_805 = &l_541;
                        int *l_806 = &l_707;
                        int *l_807 = &g_49;
                        int *l_808 = &g_99;
                        int *l_809 = &l_428;
                        int l_810 = 0x3C86C2D2L;
                        int *l_811 = &l_720;
                        int *l_812 = (void*)0;
                        int *l_813 = &l_742;
                        int *l_814 = &l_450.f0;
                        int *l_815 = &l_428;
                        int *l_816 = &l_44;
                        int *l_817 = &l_742;
                        int *l_818 = &l_541;
                        int *l_819 = &l_605;
                        int *l_820 = (void*)0;
                        int *l_821 = (void*)0;
                        int *l_822 = (void*)0;
                        int *l_823 = &l_733;
                        int *l_824 = &l_292.f0;
                        int *l_825 = &l_742;
                        int *l_826 = &l_742;
                        int *l_827 = &l_810;
                        int l_828 = 1L;
                        int *l_829 = (void*)0;
                        int *l_830 = (void*)0;
                        int *l_831 = &l_828;
                        int *l_832 = &l_727;
                        int *l_833 = &l_727;
                        int *l_834 = &l_44;
                        int l_835 = 0xF82ABC91L;
                        int *l_836 = &l_450.f0;
                        l_837++;
                        return p_32;


                    }
                }
            }
        }
    }
    l_292 = (l_163 , l_840);
    return p_32;


}







static struct S3 func_45(char p_46)
{
    unsigned l_47 = 0x2D16CF05L;
    int *l_48 = &g_49;
    struct S0 **l_60 = &g_34;
    (*l_48) = l_47;
    g_61 ^= ((g_9 & (255UL == (0UL ^ (func_52((*l_48), p_46, g_57, (*g_34)) <= ((void*)0 != l_60))))) & g_57.f0);
    return g_28;
}







static unsigned func_52(char p_53, int p_54, struct S2 p_55, struct S0 p_56)
{
    unsigned short l_58 = 0xF274L;
    int *l_59 = &g_49;
    (*l_59) |= l_58;
    return g_57.f3;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_28.f0, "g_28.f0", print_hash_value);
    transparent_crc(g_35.f0, "g_35.f0", print_hash_value);
    transparent_crc(g_35.f1, "g_35.f1", print_hash_value);
    transparent_crc(g_35.f2, "g_35.f2", print_hash_value);
    transparent_crc(g_35.f3, "g_35.f3", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_57.f0, "g_57.f0", print_hash_value);
    transparent_crc(g_57.f1, "g_57.f1", print_hash_value);
    transparent_crc(g_57.f2, "g_57.f2", print_hash_value);
    transparent_crc(g_57.f3, "g_57.f3", print_hash_value);
    transparent_crc(g_57.f4, "g_57.f4", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_67.f0, "g_67.f0", print_hash_value);
    transparent_crc(g_67.f1, "g_67.f1", print_hash_value);
    transparent_crc(g_67.f2, "g_67.f2", print_hash_value);
    transparent_crc(g_67.f3.f0, "g_67.f3.f0", print_hash_value);
    transparent_crc(g_67.f3.f1, "g_67.f3.f1", print_hash_value);
    transparent_crc(g_67.f3.f2, "g_67.f3.f2", print_hash_value);
    transparent_crc(g_67.f3.f3, "g_67.f3.f3", print_hash_value);
    transparent_crc(g_67.f4, "g_67.f4", print_hash_value);
    transparent_crc(g_67.f5, "g_67.f5", print_hash_value);
    transparent_crc(g_67.f6, "g_67.f6", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_278.f0, "g_278.f0", print_hash_value);
    transparent_crc(g_295.f0, "g_295.f0", print_hash_value);
    transparent_crc(g_295.f1, "g_295.f1", print_hash_value);
    transparent_crc(g_295.f2, "g_295.f2", print_hash_value);
    transparent_crc(g_295.f3, "g_295.f3", print_hash_value);
    transparent_crc(g_437, "g_437", print_hash_value);
    transparent_crc(g_591, "g_591", print_hash_value);
    transparent_crc(g_797, "g_797", print_hash_value);
    transparent_crc(g_921, "g_921", print_hash_value);
    transparent_crc(g_1020, "g_1020", print_hash_value);
    transparent_crc(g_1123, "g_1123", print_hash_value);
    transparent_crc(g_1148, "g_1148", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
