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
   unsigned f0 : 28;
   unsigned f1 : 1;
   signed f2 : 31;
   unsigned f3 : 15;
   unsigned f4 : 2;
   signed f5 : 17;
   signed f6 : 11;
   unsigned f7 : 20;
   unsigned f8 : 8;
};


static unsigned g_24 = 3UL;
static unsigned short g_35 = 0xEB61L;
static struct S0 g_37 = {7574,0,3782,125,1,244,-36,303,14};
static int g_112 = (-1L);
static struct S0 g_133 = {3229,0,8128,22,1,339,15,99,4};
static unsigned g_150 = 4294967295UL;
static short g_162 = 0x62C3L;
static struct S0 g_224 = {14973,0,32155,21,1,200,-34,895,14};
static char g_237 = 0x55L;
static short g_239 = 1L;
static unsigned g_276 = 0xC3C4A111L;
static unsigned short g_321 = 0xBE57L;
static unsigned g_322 = 0UL;
static unsigned long long g_323 = 18446744073709551613UL;
static short g_355 = 0x31BFL;
static unsigned g_372 = 0x24271F31L;
static long long g_374 = 0xBAE327D8690E24ADLL;
static int g_375 = 1L;
static short g_442 = 0xFE26L;
static int g_451 = 0xEF0FBBD5L;



static int func_1(void);
static short func_14(char p_15, char p_16, long long p_17, char p_18, unsigned p_19);
static char func_25(unsigned short p_26, unsigned p_27, short p_28);
static long long func_29(int p_30, unsigned long long p_31, unsigned short p_32, unsigned char p_33, char p_34);
static struct S0 func_46(char p_47, long long p_48, int p_49, char p_50);
static long long func_59(unsigned short p_60, unsigned p_61);
static char func_64(unsigned p_65, unsigned long long p_66, unsigned char p_67, int p_68, int p_69);
static unsigned func_70(unsigned p_71, unsigned short p_72, struct S0 p_73);
static unsigned char func_78(unsigned p_79, short p_80, unsigned short p_81, unsigned long long p_82);
static unsigned char func_90(struct S0 p_91, short p_92, int p_93, char p_94, long long p_95);
static int func_1(void)
{
    unsigned char l_2 = 0x78L;
    unsigned l_3 = 0UL;
    int l_38 = 1L;
    int l_373 = (-1L);
    unsigned l_450 = 0xB39429A5L;
    int l_452 = 2L;
    l_452 = (l_2 < (g_451 = (l_3 & (((safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_add_func_int64_t_s_s(l_2, ((-8L) != (safe_rshift_func_uint16_t_u_s((l_450 = (0x67E6AA16L < (+(safe_sub_func_int16_t_s_s(func_14(((g_374 = (safe_mod_func_uint64_t_u_u((l_373 = (g_372 = (l_3 && ((((((safe_mul_func_int8_t_s_s(((l_3 ^ ((+g_24) & func_25((l_38 = (func_29(g_24, l_3, g_24, l_2, l_2) , 0xF373L)), g_24, g_24))) == l_2), l_3)) , 18446744073709551615UL) == 0x0E2FFBBDEFA2FEFFLL) > g_355) == l_2) <= 0x876A514F412A1E54LL)))), 18446744073709551607UL))) , (-1L)), g_355, l_2, g_375, g_224.f6), g_375))))), 14))))), l_2)), l_3)) , g_37.f2) , g_112))));
    return g_37.f5;
}







static short func_14(char p_15, char p_16, long long p_17, char p_18, unsigned p_19)
{
    long long l_381 = 0L;
    long long l_398 = 0xB7224F58B69752E0LL;
    int l_400 = 0x62E75E3FL;
    int l_412 = 0xAD116CF5L;
    short l_427 = 0L;
    struct S0 l_430 = {6256,0,-26230,33,1,13,28,869,1};
    struct S0 l_431 = {5326,0,42755,132,1,-160,25,198,14};
    unsigned short l_449 = 0x8F40L;
    for (g_276 = 0; (g_276 == 10); g_276++)
    {
        struct S0 l_378 = {4961,0,-9117,59,1,326,44,724,13};
        int l_382 = 1L;
        char l_383 = (-4L);
        if ((((0xF4L & (p_19 , func_70(g_239, (0x50L & 0x0CL), l_378))) <= ((((l_381 & (l_382 = ((g_224.f3 != l_381) == 65531UL))) | l_383) ^ g_37.f4) || p_16)) | p_16))
        {
            struct S0 l_396 = {10587,0,-40726,10,1,39,26,527,8};
            for (l_381 = 0; (l_381 == 5); ++l_381)
            {
                char l_397 = 0x0EL;
                int l_399 = (-4L);
                l_399 = ((p_18 , (safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s(((p_17 = (safe_mod_func_uint32_t_u_u(((l_381 && g_37.f4) || ((safe_lshift_func_int16_t_s_s(0x79C5L, 2)) != (l_378.f6 = ((func_70(l_381, (safe_sub_func_uint32_t_u_u(l_378.f4, l_378.f6)), l_396) | l_396.f7) != 65535UL)))), l_397))) != l_398), 0xB24927D8L)), p_18))) & l_378.f2);
                l_399 = g_24;
                if (p_16)
                    continue;
            }
            l_400 = g_276;
        }
        else
        {
            int l_417 = (-8L);
            int l_419 = (-1L);
            struct S0 l_420 = {12086,0,-20030,13,1,-338,26,695,10};
            for (g_150 = (-13); (g_150 >= 55); ++g_150)
            {
                int l_418 = 0L;
                l_419 = (((safe_sub_func_uint32_t_u_u((0xEEBE0AD6E44AAF06LL || (g_374 = (((g_133.f7 != ((0xDA8BL || ((safe_add_func_int32_t_s_s(p_19, g_37.f8)) >= (g_355 = (g_162 = (safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u(253UL)), 10)))))) != (l_412 = (safe_rshift_func_uint8_t_u_u(g_37.f2, 2))))) | (((+(((((safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u((7UL == func_64(p_16, l_417, l_381, l_398, p_19)), p_16)), g_35)) || p_19) > l_418) , g_322) ^ g_133.f1)) | l_417) != p_17)) >= 1UL))), p_18)) ^ l_398) , p_17);
                g_224 = l_420;
                l_420.f6 = (((l_412 = ((((safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u(func_64(((g_224.f4 | g_133.f7) <= (g_224.f3 = (l_398 <= (func_78(p_19, (p_15 , ((l_418 = func_78((safe_add_func_uint16_t_u_u(g_112, g_24)), (g_355 = ((-1L) >= p_17)), g_37.f4, l_398)) <= 1UL)), g_37.f8, l_427) | 0L)))), g_323, p_15, l_378.f8, g_150), p_18)) == 2L), 2)) , 65531UL) && l_378.f0) <= 0x03F353B8L)) || l_418) == g_133.f6);
            }
        }
    }
    for (p_15 = 0; (p_15 >= 18); p_15 = safe_add_func_int32_t_s_s(p_15, 8))
    {
        l_431 = l_430;
    }
    l_431.f2 = func_29(p_18, (safe_rshift_func_int8_t_s_u((l_431.f8 , (safe_rshift_func_uint8_t_u_s(((safe_mod_func_uint16_t_u_u((func_90(g_37, (safe_mul_func_int16_t_s_s((-7L), ((((safe_mod_func_int64_t_s_s(func_64(p_19, g_442, g_35, ((safe_rshift_func_uint16_t_u_u(((g_37.f4 < (safe_lshift_func_uint16_t_u_u((g_321 = (safe_mod_func_uint8_t_u_u(0x13L, l_430.f2))), 1))) && 0xA381L), 14)) , g_37.f6), g_372), l_430.f4)) != (-1L)) , l_430.f0) >= g_133.f6))), g_133.f6, g_224.f5, g_37.f4) & p_17), p_15)) , p_18), 3))), g_37.f3)), g_133.f4, p_16, l_449);
    g_37 = g_37;
    return l_449;
}







static char func_25(unsigned short p_26, unsigned p_27, short p_28)
{
    unsigned short l_43 = 0xAABDL;
    int l_324 = 0x62622B78L;
    int l_325 = (-1L);
    unsigned l_328 = 0xF1479107L;
    short l_339 = (-1L);
    short l_353 = 0L;
    int l_354 = (-2L);
    struct S0 l_356 = {13971,0,-34558,85,1,-52,13,477,13};
    int l_371 = 4L;
    l_328 = ((g_37.f5 , (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((l_43 , (safe_lshift_func_int16_t_s_u((((g_37 = func_46((l_325 = (l_324 = (((safe_mul_func_uint8_t_u_u(((0xC0838563L < 0xAC691C6CL) , (safe_mod_func_int16_t_s_s(0xCF1AL, ((safe_add_func_uint16_t_u_u(g_37.f8, (safe_sub_func_uint16_t_u_u((~(((l_43 ^ ((func_59(p_28, (g_150 = (((safe_mod_func_int8_t_s_s(func_64(func_70((safe_mul_func_int16_t_s_s(((((safe_rshift_func_uint16_t_u_s((func_78(l_43, l_43, l_43, l_43) && l_43), 14)) <= l_43) != l_43) & 3UL), g_37.f0)), g_37.f3, g_133), g_37.f0, l_43, l_43, l_43), 0x69L)) | l_43) >= 0L))) == 8L) , p_26)) , l_43) >= p_26)), g_37.f1)))) || 1UL)))), g_224.f1)) != l_43) < p_27))), p_27, p_27, p_27)) , g_37.f7) <= 9L), l_43))), 5)) > l_43), g_224.f3))) >= p_28);
    l_356 = func_46((((func_78((safe_lshift_func_uint8_t_u_u(func_59((p_26 = (l_354 = (safe_mul_func_uint8_t_u_u(0x60L, func_64(p_28, func_78(((safe_lshift_func_uint8_t_u_u(0x4BL, (safe_sub_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s(((l_339 , (l_325 = ((safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(((~(p_27 = ((g_112 = ((safe_sub_func_uint8_t_u_u(g_276, ((((((g_321 = (safe_unary_minus_func_uint64_t_u((safe_mul_func_uint16_t_u_u((((l_324 = 0x4A1AL) > 0xD435L) == 0x10F4L), (safe_sub_func_int8_t_s_s((l_43 != p_27), g_133.f8))))))) == p_26) != l_339) | (-1L)) , (-7L)) | l_43))) && (-5L))) | l_43))) > g_37.f7), 0xBAAB0F44A99A04B6LL)), g_24)), 3)) < l_328))) >= p_26), l_353)) || 0xF4205768L), g_24)))) , p_26), g_133.f8, p_28, p_28), l_339, p_28, g_37.f0))))), p_28), 1)), g_224.f5, l_339, p_28) , g_162) ^ g_224.f5) , g_355), l_328, p_28, p_28);
    l_356 = g_37;
    l_356.f2 = ((1UL != 0x77ABDB37L) , ((safe_add_func_uint64_t_u_u(l_356.f0, ((l_324 = ((safe_rshift_func_uint8_t_u_u(0x35L, g_112)) && p_26)) | (((0x93L <= (safe_mul_func_int16_t_s_s((((((func_59(((safe_lshift_func_uint16_t_u_u(l_356.f2, ((((g_133.f4 = (((safe_mul_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u(l_353, g_224.f0)) , g_133.f5) <= p_26), p_26)) , 4294967295UL) != 0xDDBA5227L), 0UL)) | g_37.f7) <= 4UL)) != l_339) <= g_224.f8) | l_371))) , 0x415AL), g_133.f7) && 0x33A935475D525E5ELL) , g_133.f2) > g_150) <= l_356.f6) == l_354), g_355))) > l_356.f6) >= l_325)))) > p_27));
    return l_371;
}







static long long func_29(int p_30, unsigned long long p_31, unsigned short p_32, unsigned char p_33, char p_34)
{
    struct S0 l_36 = {13277,0,-7030,62,1,-144,-16,789,8};
    g_35 = 9L;
    g_37 = (g_35 , l_36);
    return l_36.f6;
}







static struct S0 func_46(char p_47, long long p_48, int p_49, char p_50)
{
    struct S0 l_326 = {1371,0,-5078,148,1,-251,23,153,1};
    struct S0 l_327 = {7433,0,12802,116,1,-359,41,387,13};
    l_327 = l_326;
    p_49 = g_133.f2;
    return l_326;
}







static long long func_59(unsigned short p_60, unsigned p_61)
{
    unsigned short l_156 = 65532UL;
    int l_175 = (-10L);
    unsigned char l_273 = 0UL;
    unsigned l_274 = 0xE97B37DFL;
    struct S0 l_278 = {7621,0,43155,40,1,-347,-18,976,3};
    g_133 = g_133;
    for (p_61 = 0; (p_61 != 46); ++p_61)
    {
        unsigned long long l_161 = 0UL;
        char l_166 = (-1L);
        int l_205 = 0L;
        struct S0 l_207 = {15369,0,24316,5,0,221,35,617,10};
        for (g_35 = (-12); (g_35 >= 36); g_35++)
        {
            unsigned l_155 = 18446744073709551615UL;
            unsigned long long l_163 = 0x0C6C1D74413540FALL;
            int l_206 = (-8L);
            unsigned l_215 = 0x17F3B7B1L;
            unsigned char l_228 = 0UL;
            char l_238 = 0x87L;
            unsigned char l_254 = 0x5FL;
            struct S0 l_277 = {13214,0,39935,105,1,-11,10,561,9};
            if ((g_133.f2 , func_64((l_156 = l_155), (+(func_64((((safe_mod_func_uint8_t_u_u(l_155, 255UL)) && ((g_162 = (func_64((safe_mul_func_int16_t_s_s(l_161, g_37.f2)), p_61, l_161, (g_112 , g_37.f4), g_133.f8) , p_60)) | 0UL)) , l_155), g_37.f8, l_161, p_60, l_163) , 0UL)), p_61, g_37.f1, g_24)))
            {
                unsigned l_170 = 0x3AA068DCL;
                int l_173 = 0x5FCE81A1L;
                int l_177 = 0x4BFEEEDEL;
                short l_208 = 0xA3A3L;
                struct S0 l_209 = {1624,0,-8443,150,1,38,19,856,4};
                g_133.f5 = l_156;
                g_37.f2 = (-1L);
                for (l_163 = (-20); (l_163 < 20); l_163 = safe_add_func_uint16_t_u_u(l_163, 1))
                {
                    int l_169 = 0L;
                    int l_174 = 0xAA79D859L;
                    unsigned short l_176 = 0xFBCEL;
                    g_37.f2 = (func_64((p_61 , (l_166 , 0x2B2FAD47L)), (safe_rshift_func_int16_t_s_u(((p_61 >= (((l_175 = (func_64((l_170 = (p_61 , l_169)), ((l_174 = (safe_rshift_func_uint16_t_u_u(l_173, (l_156 >= p_61)))) & p_60), l_163, l_173, p_61) >= p_61)) || g_37.f2) || p_60)) >= l_176), 11)), l_169, g_133.f1, g_133.f3) , l_156);
                    l_206 = ((l_177 = p_60) <= ((safe_add_func_int8_t_s_s(0xC7L, (safe_add_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((g_133.f8 != ((!((safe_unary_minus_func_int16_t_s(func_64(p_61, ((l_173 = (safe_lshift_func_int8_t_s_s((l_205 = ((safe_rshift_func_uint16_t_u_u(g_37.f3, (safe_sub_func_int64_t_s_s(((l_174 = g_133.f3) && (safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((g_162 = ((safe_lshift_func_uint16_t_u_s(g_37.f5, (safe_rshift_func_uint16_t_u_u((!0x0052L), 13)))) || (safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((p_61 || g_150), g_37.f6)), 3)))), 6)), 2))), 4L)))) < 65535UL)), l_173))) >= g_112), p_60, g_133.f5, p_61))) <= 0xF2L)) , p_60)), 2)), 0xF1L)) , g_37.f3), p_61)))) < 0L));
                    if (((l_173 = g_133.f1) & (l_207 , (l_208 = 9UL))))
                    {
                        struct S0 l_210 = {8208,0,-1201,37,0,-204,31,85,0};
                        l_210 = l_209;
                    }
                    else
                    {
                        return p_60;
                    }
                }
                if ((safe_sub_func_int8_t_s_s((((safe_sub_func_int64_t_s_s(g_37.f4, 0x72C683EEC5992523LL)) || l_215) || (safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(p_60, (safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((l_175 = (((p_61 == (g_37.f5 <= 0UL)) >= (-1L)) == (l_156 && 1UL))), 0x82L)), l_170)))) == 0x7866L), 9UL))), p_61)))
                {
                    struct S0 l_225 = {9092,0,-42639,83,0,-161,44,437,8};
                    l_225 = g_224;
                }
                else
                {
                    int l_229 = 0x9E90ACFBL;
                    unsigned l_236 = 6UL;
                    if (l_175)
                        break;
                    for (l_205 = (-14); (l_205 >= (-9)); l_205++)
                    {
                        l_229 = (g_224.f2 = l_228);
                    }
                    if (l_228)
                        break;
                    l_175 = (((l_175 , (((func_64(g_37.f4, (g_237 = (l_206 = (safe_add_func_int32_t_s_s(l_229, ((((((0xEDEC0B913E921230LL | (safe_lshift_func_uint16_t_u_u((246UL | (((1L && (p_61 < (~(func_64((safe_mod_func_uint16_t_u_u(l_215, l_175)), p_61, l_236, l_156, l_236) <= l_156)))) , 0xDF14L) != l_215)), 11))) > l_156) | g_162) ^ 0xD7CB5B6F9CE4C8BBLL) ^ p_60) , 1UL))))), g_37.f7, g_37.f2, p_60) ^ l_238) , g_224.f0) < 0x37C6L)) & l_215) , 0xCD83B648L);
                }
            }
            else
            {
                char l_240 = 0x1FL;
                struct S0 l_249 = {1943,0,-362,64,0,214,-35,358,6};
                l_205 = (l_207.f6 = 0x240AD27CL);
                if (func_64(func_64(g_37.f4, (~l_175), (g_239 = g_37.f0), l_240, l_240), p_61, p_60, p_61, g_133.f4))
                {
                    unsigned l_241 = 0x7E3CEDB5L;
                    if (l_241)
                        break;
                    if (l_175)
                        break;
                }
                else
                {
                    char l_246 = 6L;
                    l_205 = func_64(((safe_mod_func_uint64_t_u_u((((safe_rshift_func_int16_t_s_s(g_237, 4)) == (func_64(l_246, g_37.f6, g_133.f1, g_224.f6, l_238) >= l_166)) != (safe_add_func_int64_t_s_s(g_37.f6, p_60))), g_133.f1)) != 0x2417F5783FD7632DLL), g_224.f0, p_60, l_207.f1, g_37.f6);
                    l_207 = l_249;
                    if (((g_37.f0 > p_61) & (~(func_64(((((safe_sub_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(((((p_60 > l_238) ^ func_64(((((g_224.f8 = ((l_205 | g_133.f1) | l_238)) <= (4294967291UL != g_133.f4)) && l_246) | g_150), l_254, p_61, l_175, p_61)) <= p_61) & 0xC5EAL), g_37.f2)), 65535UL)) , l_156) | 0xACL) >= l_175), l_175, g_224.f1, p_61, p_60) < 0xDFL))))
                    {
                        g_37.f5 = (p_60 && p_61);
                        return p_60;
                    }
                    else
                    {
                        char l_275 = 0x69L;
                        g_224.f2 = l_156;
                        g_133 = ((safe_rshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((g_237 = (safe_sub_func_uint32_t_u_u(func_64(l_215, (p_61 , 0xF1068F0A819F9FF2LL), (safe_sub_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s((!(~((safe_lshift_func_uint16_t_u_u((g_276 = (func_64((safe_mul_func_uint8_t_u_u(func_64(p_60, l_249.f3, ((p_60 >= (l_249.f6 = 0x8FDCL)) <= func_64((l_249.f5 = ((func_64(g_35, (((func_64(l_156, g_37.f3, g_37.f3, l_156, p_61) == l_273) <= l_274) && g_224.f5), p_61, g_37.f5, l_275) | 0xFEL) <= p_60)), l_175, g_133.f0, p_61, p_60)), g_37.f6, p_61), g_239)), p_61, g_133.f3, l_273, p_60) && 0x4438L)), p_61)) && p_61))), 0L)), 5)), 0xADE6E3D1L)) , g_224.f5) > 0xC1L), p_60)), l_156, g_239), g_224.f4))), l_205)), 0)) , l_277);
                        l_207 = l_278;
                    }
                    for (l_163 = (-28); (l_163 >= 39); l_163 = safe_add_func_uint16_t_u_u(l_163, 4))
                    {
                        unsigned char l_285 = 1UL;
                        int l_294 = (-1L);
                        l_277.f6 = g_133.f3;
                        l_249.f2 = (((g_133.f1 ^ (safe_rshift_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((l_285 = (g_37.f2 = (l_205 = g_133.f0))), ((g_224 , (l_249.f7 , g_150)) , 1L))) == (safe_sub_func_uint16_t_u_u((g_239 != (g_162 = (((safe_sub_func_int16_t_s_s(0x6567L, (safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(((func_64(p_61, l_246, g_37.f0, g_224.f6, p_60) < l_207.f0) , l_294), 6)) > g_112), 1L)))) != g_37.f8) , l_249.f0))), p_60))), g_224.f2))) != g_37.f3) <= 8UL);
                        return p_61;
                    }
                }
            }
            if (g_224.f1)
            {
                char l_310 = 0x18L;
                int l_316 = 1L;
                if ((safe_sub_func_uint64_t_u_u((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((p_60 = (l_166 < (safe_add_func_uint64_t_u_u((l_205 = l_207.f4), g_276)))), l_207.f0)), 0x96AB8CA2L)), (func_64(p_61, (l_277.f2 != (safe_sub_func_int16_t_s_s(0x45E3L, 0x3647L))), p_61, p_61, p_61) <= p_61))))
                {
                    return p_61;
                }
                else
                {
                    unsigned l_315 = 18446744073709551609UL;
                    g_37.f6 = p_60;
                    l_278.f5 = ((safe_mul_func_int16_t_s_s((func_64(p_61, (l_277 , (safe_mul_func_uint8_t_u_u(func_64(l_175, ((g_37.f4 <= (safe_unary_minus_func_int64_t_s(((l_310 = g_276) || (safe_mod_func_int8_t_s_s(0x34L, (safe_mul_func_int16_t_s_s((p_61 , l_206), ((!l_315) < 0x247C1534L))))))))) , 0UL), g_37.f8, l_207.f6, p_60), p_60))), l_316, p_61, p_60) ^ (-8L)), (-1L))) ^ 0xF60EL);
                }
                l_277.f6 = ((safe_mul_func_int16_t_s_s(l_310, (safe_sub_func_int64_t_s_s((g_321 = p_61), (g_323 = ((l_277.f1 , (g_322 = l_278.f4)) != l_207.f0)))))) | g_37.f5);
            }
            else
            {
                l_277 = l_207;
            }
            g_133.f2 = p_60;
        }
    }
    g_133 = (((-8L) & l_278.f0) , l_278);
    return p_60;
}







static char func_64(unsigned p_65, unsigned long long p_66, unsigned char p_67, int p_68, int p_69)
{
    char l_149 = 0xFAL;
    for (p_66 = 0; (p_66 < 47); p_66 = safe_add_func_int16_t_s_s(p_66, 8))
    {
        struct S0 l_148 = {7591,0,40657,179,0,14,18,873,10};
        l_148 = l_148;
    }
    g_133.f2 = l_149;
    return l_149;
}







static unsigned func_70(unsigned p_71, unsigned short p_72, struct S0 p_73)
{
    struct S0 l_134 = {7480,0,-23787,67,1,-215,7,84,11};
    char l_139 = 0xB6L;
    unsigned l_140 = 0UL;
    unsigned l_145 = 0xFD560464L;
    g_133 = l_134;
    for (g_112 = (-11); (g_112 == 23); g_112 = safe_add_func_uint16_t_u_u(g_112, 3))
    {
        g_133.f6 = g_35;
        l_134.f5 = l_134.f2;
        g_37.f6 = ((g_133.f6 == p_73.f1) || g_133.f0);
    }
    l_134.f6 = (((g_133.f6 , (safe_sub_func_int8_t_s_s(l_139, func_78(l_134.f2, p_73.f2, l_140, ((func_90((g_133 = ((safe_mul_func_uint16_t_u_u(l_134.f1, (((safe_sub_func_int8_t_s_s(0xC8L, g_133.f1)) , l_134.f6) & 0x4FB0B04AL))) , p_73)), l_134.f4, l_134.f4, l_145, l_134.f8) , l_134.f3) == l_134.f8))))) <= 0xB1L) <= l_139);
    return l_134.f0;
}







static unsigned char func_78(unsigned p_79, short p_80, unsigned short p_81, unsigned long long p_82)
{
    long long l_85 = 0x4124F91E2C0253A1LL;
    struct S0 l_96 = {10592,0,-26994,179,0,-242,25,731,11};
    int l_97 = 0L;
    l_96.f2 = ((safe_mul_func_uint16_t_u_u(((l_85 ^ (safe_add_func_int64_t_s_s((p_80 , (((safe_mod_func_int8_t_s_s(g_37.f1, func_90(l_96, ((p_80 | g_37.f2) ^ (l_97 = ((~p_80) , p_82))), (safe_mod_func_uint8_t_u_u(l_96.f6, g_24)), l_96.f0, l_85))) , 0xEFF2801407F46339LL) , l_97)), g_37.f7))) && g_37.f4), 0x0A8AL)) | 4294967287UL);
    return p_79;
}







static unsigned char func_90(struct S0 p_91, short p_92, int p_93, char p_94, long long p_95)
{
    int l_106 = (-1L);
    int l_111 = 0x52248422L;
    for (p_93 = 0; (p_93 > 2); p_93 = safe_add_func_uint32_t_u_u(p_93, 8))
    {
        unsigned long long l_113 = 5UL;
        if ((safe_rshift_func_int8_t_s_s((p_94 = ((((safe_lshift_func_uint8_t_u_u((l_106 = g_37.f5), p_94)) > (((((safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u((((g_112 = l_111) == l_113) >= (~l_111)), g_37.f2)), ((((((safe_mod_func_int64_t_s_s(p_91.f2, (safe_add_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(p_92, (((safe_mod_func_uint16_t_u_u(g_35, p_91.f4)) ^ p_91.f1) ^ p_91.f7))) == 9L), p_91.f2)))) || g_35) , p_91.f2) != 0x8EL) , g_37.f2) >= 0x3FL))) | p_91.f2) | p_91.f3) && g_37.f6) || l_113)) ^ 1UL) , (-1L))), 5)))
        {
            int l_122 = 0xC92B2451L;
            return l_122;
        }
        else
        {
            short l_123 = (-1L);
            l_123 = (p_91.f4 || ((p_92 = 0x808BL) , g_37.f5));
            for (p_94 = (-22); (p_94 > 25); p_94++)
            {
                for (l_123 = 2; (l_123 == 7); l_123++)
                {
                    g_112 = (g_37.f7 == (g_35 = 65535UL));
                    g_37.f5 = p_91.f8;
                }
                g_37.f6 = (0xAFL ^ 0x11L);
                g_112 = ((g_37.f6 , g_24) != (p_91.f6 & g_35));
                if (g_37.f2)
                    continue;
            }
            g_37.f2 = (safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(g_37.f2, l_113)), (l_111 == (safe_unary_minus_func_uint8_t_u(g_37.f3)))));
            return g_37.f6;
        }
    }
    p_93 = l_111;
    return l_111;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_37.f0, "g_37.f0", print_hash_value);
    transparent_crc(g_37.f1, "g_37.f1", print_hash_value);
    transparent_crc(g_37.f2, "g_37.f2", print_hash_value);
    transparent_crc(g_37.f3, "g_37.f3", print_hash_value);
    transparent_crc(g_37.f4, "g_37.f4", print_hash_value);
    transparent_crc(g_37.f5, "g_37.f5", print_hash_value);
    transparent_crc(g_37.f6, "g_37.f6", print_hash_value);
    transparent_crc(g_37.f7, "g_37.f7", print_hash_value);
    transparent_crc(g_37.f8, "g_37.f8", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_133.f0, "g_133.f0", print_hash_value);
    transparent_crc(g_133.f1, "g_133.f1", print_hash_value);
    transparent_crc(g_133.f2, "g_133.f2", print_hash_value);
    transparent_crc(g_133.f3, "g_133.f3", print_hash_value);
    transparent_crc(g_133.f4, "g_133.f4", print_hash_value);
    transparent_crc(g_133.f5, "g_133.f5", print_hash_value);
    transparent_crc(g_133.f6, "g_133.f6", print_hash_value);
    transparent_crc(g_133.f7, "g_133.f7", print_hash_value);
    transparent_crc(g_133.f8, "g_133.f8", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_224.f0, "g_224.f0", print_hash_value);
    transparent_crc(g_224.f1, "g_224.f1", print_hash_value);
    transparent_crc(g_224.f2, "g_224.f2", print_hash_value);
    transparent_crc(g_224.f3, "g_224.f3", print_hash_value);
    transparent_crc(g_224.f4, "g_224.f4", print_hash_value);
    transparent_crc(g_224.f5, "g_224.f5", print_hash_value);
    transparent_crc(g_224.f6, "g_224.f6", print_hash_value);
    transparent_crc(g_224.f7, "g_224.f7", print_hash_value);
    transparent_crc(g_224.f8, "g_224.f8", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_276, "g_276", print_hash_value);
    transparent_crc(g_321, "g_321", print_hash_value);
    transparent_crc(g_322, "g_322", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_355, "g_355", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    transparent_crc(g_375, "g_375", print_hash_value);
    transparent_crc(g_442, "g_442", print_hash_value);
    transparent_crc(g_451, "g_451", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
