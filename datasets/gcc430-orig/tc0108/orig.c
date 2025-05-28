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
   unsigned f1;
   unsigned f2;
};


static unsigned long long g_10 = 7UL;
static long long g_32 = 0x29B85755261FC42FLL;
static long long g_47 = 0x082F4E55B65AB4D2LL;
static char g_49 = 0L;
static union U0 g_58 = {0xEC1E183AL};
static union U0 g_61 = {0x1F6ED734L};
static unsigned char g_73 = 250UL;
static int g_75 = 0xD55A9D45L;
static char g_76 = 0x0AL;
static long long g_89 = (-8L);
static long long g_110 = 1L;
static long long g_136 = 0L;
static unsigned short g_144 = 6UL;
static unsigned g_145 = 0xFB93C35EL;
static unsigned char g_146 = 0x8DL;
static char g_186 = 4L;
static long long g_224 = 1L;
static int g_231 = 0xCA7D67C4L;
static long long g_241 = 0x7383A1794BD295D9LL;
static int g_248 = (-6L);
static int g_261 = 0x8159CCD5L;
static short g_264 = 0x5BB5L;
static short g_285 = (-1L);
static int g_290 = 1L;
static unsigned g_298 = 0xABC2DA77L;
static unsigned g_341 = 4294967286UL;
static unsigned short g_362 = 0UL;
static int g_416 = 0xF4DBD033L;
static char g_521 = 0x82L;
static unsigned char g_716 = 0xCAL;
static unsigned g_798 = 4294967295UL;
static volatile long long g_1066 = 0xC23DC5D89BE87B05LL;
static int g_1072 = 0L;
static unsigned g_1080 = 0UL;
static short g_1127 = 0x79DCL;
static volatile unsigned char g_1148 = 255UL;
static unsigned long long g_1175 = 0xCCD1BA6204F99805LL;
static union U0 g_1179 = {18446744073709551609UL};
static unsigned short g_1386 = 0xA196L;
static unsigned char g_1440 = 0UL;
static unsigned short g_1525 = 0UL;
static volatile long long g_1582 = 9L;
static char g_1601 = (-2L);
static unsigned g_1790 = 0x84A1A74EL;
static char g_1794 = 0L;
static char g_1795 = 0x0EL;
static int g_1896 = 1L;
static unsigned short g_1909 = 65535UL;
static short g_1910 = 0L;
static volatile unsigned char g_2067 = 0UL;
static short g_2147 = (-1L);
static char g_2170 = 0x10L;
static unsigned long long g_2274 = 4UL;
static int g_2291 = 0x838C3B98L;
static unsigned g_2382 = 0x55B9AECFL;
static unsigned g_2389 = 18446744073709551607UL;
static int g_2475 = (-1L);
static unsigned char g_2519 = 247UL;
static char g_2781 = (-6L);
static union U0 g_2782 = {0x777BD679L};
static unsigned g_2804 = 0xED37B232L;



static union U0 func_1(void);
static unsigned func_7(unsigned char p_8, unsigned char p_9);
static int func_12(unsigned short p_13, unsigned char p_14, union U0 p_15, short p_16);
static char func_17(unsigned p_18, short p_19, unsigned p_20, unsigned char p_21, int p_22);
static unsigned char func_25(int p_26, unsigned p_27, unsigned char p_28, unsigned char p_29);
static short func_33(int p_34, int p_35);
static unsigned long long func_36(union U0 p_37, unsigned char p_38);
static union U0 func_39(int p_40);
static unsigned func_42(long long p_43, unsigned char p_44);
static unsigned long long func_54(union U0 p_55, int p_56, int p_57);
static union U0 func_1(void)
{
    unsigned l_4 = 1UL;
    int l_2805 = 0x99848B67L;
    int l_2806 = 0xF6A8E7FDL;
    union U0 l_2807 = {0x3A2F4B60L};
    l_2806 = ((safe_mod_func_uint32_t_u_u(l_4, (safe_sub_func_int8_t_s_s(((!(func_7(g_10, g_10) , (4294967295UL | (g_32 , l_4)))) != (g_10 | (l_2805 = (g_2804 = ((((((safe_mul_func_uint8_t_u_u((((l_4 || l_4) ^ l_4) > l_4), g_2782.f2)) , l_4) , l_4) , l_4) != g_2782.f0) , l_4))))), g_2782.f1)))) > 4294967292UL);
    return l_2807;
}







static unsigned func_7(unsigned char p_8, unsigned char p_9)
{
    unsigned l_11 = 9UL;
    int l_41 = 0x966C4779L;
    int l_2801 = 4L;
    l_11 = g_10;
    l_2801 = func_12(g_10, (func_17(p_8, (((l_11 , p_9) == ((safe_mul_func_uint8_t_u_u(func_25((safe_lshift_func_uint16_t_u_s(g_10, 0)), ((g_32 = p_9) && (+func_33(g_32, (func_36(func_39((l_41 = l_11)), g_1601) & p_8)))), l_11, p_9), g_10)) , l_41)) || l_41), g_10, g_10, g_10) || g_2147), g_2782, l_11);
    return g_298;
}







static int func_12(unsigned short p_13, unsigned char p_14, union U0 p_15, short p_16)
{
    long long l_2788 = 1L;
    unsigned l_2789 = 0UL;
    int l_2800 = 3L;
    l_2800 = ((func_25((safe_mod_func_int64_t_s_s((safe_unary_minus_func_uint8_t_u(g_144)), (l_2789 = (safe_lshift_func_int16_t_s_s((p_16 = l_2788), 7))))), (((-3L) | p_13) , 0xC41394E2L), (((p_15 = p_15) , ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(p_15.f1, 6)), 1)) && ((safe_mod_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s(((g_146 = (safe_mul_func_uint8_t_u_u(func_25((((p_13 , ((~g_61.f1) | 0x13FAE0A3E992933DLL)) || (-8L)) || 0UL), p_14, g_416, g_2291), p_14))) & l_2788), g_89)), 0x41D5FBD841A8EA30LL)) >= p_14))) != l_2788), g_298) , p_15.f1) , 0x8FB07436L);
    return p_15.f1;
}







static char func_17(unsigned p_18, short p_19, unsigned p_20, unsigned char p_21, int p_22)
{
    unsigned long long l_2752 = 1UL;
    int l_2771 = 9L;
    int l_2772 = 0xC9B6816AL;
    unsigned l_2779 = 18446744073709551606UL;
    int l_2780 = 0x2B89111DL;
    g_75 = l_2752;
    g_75 = (g_47 < (safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(0x70L, ((l_2772 = ((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(((l_2771 = (func_25((func_25(l_2752, g_341, ((safe_lshift_func_uint16_t_u_s(g_2389, 7)) , (safe_mod_func_int8_t_s_s((-1L), (safe_sub_func_uint8_t_u_u(((!l_2752) <= ((safe_mod_func_uint8_t_u_u(l_2752, g_341)) == 0L)), l_2752))))), g_1066) , l_2752), g_1525, l_2752, l_2752) , p_22)) | l_2752), 1)), 7)) == l_2752)) , 0x59L))), l_2752)));
    g_2781 = func_33(p_19, (l_2780 = (((safe_mul_func_uint8_t_u_u((((l_2772 = ((g_58.f0 , 7L) > (g_285 < l_2752))) , g_1179.f2) ^ (safe_sub_func_uint32_t_u_u(4294967294UL, 0xECFF46EAL))), ((l_2771 = (safe_sub_func_int16_t_s_s((g_798 > l_2752), l_2779))) ^ l_2780))) >= 0xEFL) && 0x2B97L)));
    return p_18;
}







static unsigned char func_25(int p_26, unsigned p_27, unsigned char p_28, unsigned char p_29)
{
    g_231 = (safe_lshift_func_uint8_t_u_u((p_28 = g_290), p_27));
    return g_1525;
}







static short func_33(int p_34, int p_35)
{
    unsigned char l_2276 = 255UL;
    union U0 l_2287 = {0x3F057471L};
    short l_2288 = 0x8AECL;
    unsigned l_2293 = 0xFA916162L;
    int l_2317 = 0x8E45F247L;
    short l_2349 = 4L;
    int l_2366 = 0L;
    long long l_2367 = 0x959954291AE3F1F0LL;
    unsigned long long l_2419 = 0x3A7942410B8E94C6LL;
    int l_2485 = (-1L);
    union U0 l_2487 = {0x9802DF8EL};
    unsigned long long l_2554 = 0xA6178B345C8BAA75LL;
    g_261 = (g_186 != (l_2276 , ((g_285 = (safe_mul_func_uint16_t_u_u((+l_2276), g_1910))) , ((((g_61.f0 | (safe_sub_func_uint8_t_u_u((l_2276 | 1L), ((safe_mod_func_uint16_t_u_u((l_2276 == ((((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(l_2276, p_35)), 255UL)) , 0xB5L) , l_2276) < 18446744073709551612UL)), 7UL)) < l_2276)))) && g_2147) ^ 8L) != 0x0CL))));
    if ((l_2288 = func_54(((g_1910 = 0L) , l_2287), l_2287.f2, p_35)))
    {
        for (g_248 = (-5); (g_248 > 27); ++g_248)
        {
            unsigned char l_2292 = 0xD3L;
            g_75 = p_34;
            g_231 = g_2291;
            p_35 = l_2292;
        }
        return g_1179.f1;
    }
    else
    {
        unsigned l_2306 = 18446744073709551615UL;
        int l_2307 = (-6L);
        unsigned l_2334 = 0x7C1105A0L;
        union U0 l_2361 = {0x61FC8EF1L};
        unsigned l_2472 = 0x08945D7FL;
        int l_2520 = 0L;
        unsigned l_2590 = 0xD7ECB895L;
        int l_2616 = (-1L);
        unsigned short l_2619 = 0UL;
        int l_2656 = 1L;
        union U0 l_2741 = {0x53E5EEFDL};
        if (l_2293)
        {
            int l_2316 = 1L;
            union U0 l_2376 = {0x0CEC60EFL};
            unsigned l_2391 = 0UL;
            int l_2413 = 0L;
            unsigned long long l_2416 = 1UL;
            short l_2503 = 0xA126L;
            unsigned l_2508 = 4294967294UL;
            for (g_75 = 0; (g_75 < (-16)); g_75--)
            {
                unsigned l_2296 = 0x32EA86FAL;
                int l_2308 = (-2L);
                int l_2327 = 0xB64C2E90L;
                if (l_2296)
                    break;
                if (g_416)
                {
                    char l_2305 = 8L;
                    int l_2311 = 0x7654BF34L;
                    p_35 = (safe_sub_func_int16_t_s_s((~g_58.f2), (safe_lshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((~l_2287.f2), (l_2305 = 0x1695CABEFF08A0F7LL))), l_2306)), p_35))));
                    p_35 = (l_2296 && (l_2308 = (l_2307 = 1L)));
                    for (g_264 = 26; (g_264 > (-6)); --g_264)
                    {
                        l_2311 = 0xE044998BL;
                        if (g_798)
                            break;
                    }
                    l_2308 = 0x18738DAAL;
                }
                else
                {
                    short l_2326 = 0xDF06L;
                    g_261 = ((safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u((l_2316 = 0UL), ((!((g_716 & l_2306) <= (((((g_2274 = ((l_2317 = l_2288) ^ g_224)) || (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((p_35 >= ((safe_mod_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u(0UL, l_2306)) > g_10), l_2307)) != l_2326)), l_2307)), l_2327))) < 0xA8L) >= 3L) , 0x6D0B1AC2F0F7A50ELL))) <= 8L))), p_34)) & 0x53253E090C09C0E8LL);
                    return g_144;
                }
            }
            if (((safe_sub_func_uint64_t_u_u(((g_1179.f2 , (safe_add_func_int8_t_s_s(((safe_add_func_uint64_t_u_u((p_34 & p_35), (g_2067 >= (g_1896 || (l_2307 > ((((g_1179 , l_2306) > p_35) , p_35) , 0L)))))) , 0L), g_61.f0))) | 2UL), p_35)) | 0x1231L))
            {
                unsigned long long l_2348 = 0UL;
                int l_2352 = 0xBB0E816AL;
                l_2307 = (g_261 = (((0x3AEAL | l_2334) && (safe_rshift_func_uint8_t_u_s((p_35 ^ l_2317), 3))) == p_34));
                p_35 = (safe_unary_minus_func_int64_t_s((safe_mul_func_uint8_t_u_u((func_36(func_39(g_1148), (safe_sub_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u(250UL, l_2334)) , (safe_add_func_uint8_t_u_u(((+l_2316) , p_35), (((safe_mul_func_int8_t_s_s((((l_2348 = (g_10 && 0xE8007C3159C0A503LL)) < 0x32L) , p_35), l_2316)) , g_1896) , 0x97L)))), l_2287.f1))) , l_2334), l_2349))));
                l_2352 = (((((g_144 | (1L > (safe_mod_func_uint8_t_u_u(((l_2316 && ((p_35 | (((((p_34 ^ g_285) | g_110) , 0x81C83E874088C588LL) , p_34) , g_144)) <= g_1179.f0)) <= 0L), l_2307)))) <= l_2334) || p_34) <= (-1L)) , g_1127);
                l_2367 = ((safe_lshift_func_uint16_t_u_u((g_1148 && (g_1909 = (!(l_2366 = (safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((func_54(l_2361, p_35, p_35) <= (safe_mul_func_uint8_t_u_u((g_1440 = ((l_2287.f1 & (l_2352 = 1L)) < (safe_rshift_func_int16_t_s_u((l_2317 = l_2316), 8)))), l_2348))) & 0xB9A96C9B4535E459LL), g_1601)), 3)), 0x1C50L)))))), 8)) & l_2348);
            }
            else
            {
                unsigned l_2377 = 0UL;
                int l_2390 = 0L;
                unsigned char l_2392 = 255UL;
                p_35 = (((safe_add_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s(func_36(l_2287, (l_2390 = ((safe_sub_func_int8_t_s_s((((safe_add_func_uint16_t_u_u((((func_36((l_2376 = func_39(p_34)), l_2377) | g_2291) != (((safe_add_func_int8_t_s_s((g_2382 = p_34), 0xC5L)) > ((safe_lshift_func_int16_t_s_u(((((g_2389 = (safe_mod_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((p_35 && (-7L)), (-9L))), 0x08A0L))) , (-6L)) && p_35) <= 65528UL), 11)) & 255UL)) | 0L)) >= g_2291), p_35)) > l_2306) || 0xA6L), g_10)) & p_34))), p_34)) != p_34), l_2391)) & l_2392) != 0x411980FA86A6D385LL);
                p_35 = func_36(l_2376, l_2293);
            }
            if (func_54(l_2361, (g_2291 = ((l_2391 < ((g_61 = l_2361) , (safe_sub_func_uint32_t_u_u(p_34, g_58.f1)))) >= l_2376.f0)), ((safe_lshift_func_uint16_t_u_s(0x9256L, (safe_mod_func_int32_t_s_s(((l_2361 , (p_35 & l_2361.f1)) || g_1179.f0), 9UL)))) , p_35)))
            {
                unsigned char l_2420 = 9UL;
                int l_2428 = (-1L);
                g_231 = (g_261 = ((-4L) || p_34));
                g_231 = ((safe_lshift_func_int16_t_s_s((l_2307 = ((safe_add_func_uint64_t_u_u(0x344805C7CCA07851LL, p_35)) <= (safe_add_func_int32_t_s_s((g_1795 & g_58.f0), 2L)))), (0UL == (((g_2382 = g_110) <= ((safe_mul_func_int16_t_s_s(((!(((p_34 , (g_716 == 0x1EB65931L)) || 2L) && g_1909)) ^ l_2366), 0x4378L)) | l_2349)) || p_34)))) > 2L);
                if ((safe_rshift_func_uint16_t_u_u(((-4L) & (safe_sub_func_uint32_t_u_u(p_35, (safe_mod_func_uint32_t_u_u((func_42(((l_2413 = (p_34 || l_2361.f2)) && (safe_add_func_int8_t_s_s(((((0x9CL & (l_2416 = p_34)) | (((safe_lshift_func_uint16_t_u_s(((l_2413 = func_42(l_2419, (l_2420 , (((safe_unary_minus_func_uint16_t_u((func_36(l_2376, p_35) < l_2413))) != p_35) | g_10)))) >= (-9L)), g_2382)) == l_2361.f0) && l_2306)) <= g_2291) > g_2389), p_35))), p_35) ^ p_35), 0xE8199D9BL))))), g_32)))
                {
                    int l_2433 = 0L;
                    int l_2448 = (-8L);
                    union U0 l_2463 = {0UL};
                    if (((l_2317 = 0x30L) | (safe_add_func_uint32_t_u_u((l_2366 = l_2420), g_58.f2))))
                    {
                        return g_416;
                    }
                    else
                    {
                        union U0 l_2453 = {0x014A430CL};
                        unsigned long long l_2454 = 0x9BBB03E92473F94BLL;
                        p_35 = (0x23BA46C8L >= (safe_add_func_uint16_t_u_u(((l_2428 = (safe_rshift_func_int16_t_s_s((l_2420 && p_34), (g_716 >= 9L)))) | g_1896), ((safe_rshift_func_uint8_t_u_s(((((safe_mod_func_uint8_t_u_u((l_2433 ^ p_34), g_2170)) <= p_35) , l_2420) & g_231), 6)) || 0xF7B8L))));
                        g_261 = l_2428;
                        p_35 = (g_1386 != ((l_2366 = (safe_sub_func_uint64_t_u_u(p_34, (safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((l_2317 = (p_35 & (safe_mod_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(65527UL, (((safe_sub_func_uint16_t_u_u((((g_2274 = (p_35 , func_42((l_2413 = (l_2428 , (safe_rshift_func_uint8_t_u_u(((l_2433 != func_42(((l_2448 = 4294967295UL) , (g_32 = (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(func_54(l_2453, p_35, g_1909), 6)), l_2454)))), l_2453.f0)) , 0x7AL), g_1440)))), p_35))) | l_2376.f1) , 0x82F2L), l_2316)) >= l_2376.f1) == p_34))) > g_1795), g_2291)))), l_2428)), 4))))) , g_1066));
                    }
                    p_35 = (l_2413 = (safe_add_func_uint32_t_u_u((((safe_add_func_int32_t_s_s((safe_mod_func_int32_t_s_s((((safe_rshift_func_int8_t_s_s(func_36(l_2463, p_35), (safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((-5L), (((p_35 <= p_34) | 0x7E3C577DBFEC971CLL) > (safe_mul_func_int8_t_s_s(0xEEL, g_2389))))), p_35)), 5)))) & l_2428) < g_2389), g_2382)), g_10)) || g_1386) && l_2472), g_2389)));
                    for (l_2293 = 22; (l_2293 < 41); l_2293++)
                    {
                        char l_2484 = 0xC5L;
                        int l_2486 = 0xE4DEB757L;
                        l_2428 = ((p_35 < g_2475) ^ (safe_sub_func_int32_t_s_s(7L, (safe_lshift_func_int8_t_s_u(((((l_2486 = ((l_2366 = (((safe_add_func_int32_t_s_s(l_2416, (safe_lshift_func_uint8_t_u_s((((0x39L & (func_36((func_54((g_1179 = l_2361), ((func_54(g_58, (1UL && 0UL), l_2484) != p_34) & p_34), g_1440) , l_2376), l_2485) > 0xEB67DC469A818E23LL)) , 0x08B7860DL) || p_34), l_2448)))) & g_2389) && l_2463.f0)) <= g_2291)) , 0x65L) != 255UL) > 0xDCBB7C31749E3AD0LL), p_34)))));
                    }
                }
                else
                {
                    long long l_2488 = 0x274A0AB09931CB9DLL;
                    if (func_36(g_1179, ((func_54((g_76 , l_2487), l_2488, g_2067) , g_261) == (0x771E4F85L != (safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(g_1525, 3L)), p_34))))))
                    {
                        unsigned short l_2495 = 0x7B20L;
                        int l_2496 = 0x345307E0L;
                        l_2496 = func_42(((p_34 = (0x9296L && (l_2413 = (l_2495 = (((func_42(l_2316, p_35) > 0L) != ((safe_lshift_func_int16_t_s_u(0xD718L, (g_1440 > g_2389))) > 0x02L)) && l_2420))))) , (-7L)), p_35);
                    }
                    else
                    {
                        char l_2506 = 1L;
                        int l_2507 = 0x240583E4L;
                        l_2307 = 0xD6925B5EL;
                        l_2366 = ((func_42(p_34, p_35) , (safe_mod_func_int8_t_s_s(l_2391, (func_36(func_39(g_1080), ((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s((((l_2503 = p_35) , ((p_35 ^ ((l_2507 = l_2506) < p_34)) ^ 0x46FE0928L)) == p_35), 6)), g_2382)) || l_2428)) , g_10)))) != g_2382);
                        p_35 = (g_231 = (l_2508 ^ p_35));
                        p_35 = l_2334;
                    }
                    p_35 = p_34;
                }
                p_35 = (l_2413 || (((-1L) ^ (func_54((l_2287 = func_39((g_186 , (g_248 = p_35)))), g_1909, l_2428) < p_35)) <= 0xB047L));
            }
            else
            {
                long long l_2521 = (-1L);
                unsigned long long l_2547 = 18446744073709551608UL;
                int l_2557 = 0xE9784250L;
                l_2485 = (safe_sub_func_int64_t_s_s((func_36((((safe_mod_func_int64_t_s_s((18446744073709551615UL && ((safe_lshift_func_int8_t_s_u((func_36(g_58, l_2307) | ((l_2361.f0 , (((l_2520 = (g_2291 , (((safe_mul_func_int16_t_s_s((g_2389 == (((safe_rshift_func_uint16_t_u_u((((g_10 , (g_2519 = g_2291)) < p_35) , p_34), 3)) > 0x9EA0BDFF2F0A9E60LL) <= g_32)), g_10)) | 0x279742BAL) | 0xE7L))) , l_2508) & 0x83B9C876L)) , 0x0DL)), 5)) & g_10)), 0x51F9E3AEB2412FECLL)) | 0x40L) , l_2376), l_2521) == p_35), l_2521));
                g_231 = l_2307;
                for (l_2391 = 14; (l_2391 < 15); l_2391 = safe_add_func_int64_t_s_s(l_2391, 2))
                {
                    unsigned l_2524 = 0x395A9A21L;
                    int l_2531 = (-1L);
                    p_35 = ((((l_2531 = (((l_2524 == func_42(g_2389, g_89)) , ((func_54(g_58, (((safe_mod_func_int64_t_s_s((safe_add_func_int16_t_s_s((((g_298 = 4294967295UL) < (safe_mod_func_uint16_t_u_u(((0xB8L ^ 0xB1L) != ((1L | 0xE3L) ^ 65527UL)), 0x26B0L))) <= 0UL), p_34)), 0xB6862EFFE692B57ELL)) & g_2475) && g_2291), g_1179.f0) == p_34) || p_35)) || g_2274)) > l_2306) || 0xA362L) | 5L);
                }
                for (p_35 = 0; (p_35 == (-28)); p_35 = safe_sub_func_int64_t_s_s(p_35, 2))
                {
                    unsigned long long l_2534 = 1UL;
                    int l_2558 = 1L;
                    l_2534 = g_49;
                    l_2558 = (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((safe_mod_func_int32_t_s_s((!(safe_sub_func_int16_t_s_s(l_2547, (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(0xA24AL, (((l_2306 != (safe_mod_func_uint32_t_u_u(((((l_2554 >= (safe_mod_func_int16_t_s_s((func_36(func_39((l_2376.f2 > (((l_2557 = func_54(l_2361, l_2547, p_34)) < p_35) && p_34))), g_1790) > 0L), l_2534))) , p_34) && 0L) , l_2547), p_34))) , g_32) | 0L))), 15))))), l_2547)) , 0L), p_34)), l_2534)), g_32)), g_2389));
                }
            }
        }
        else
        {
            unsigned l_2567 = 4294967295UL;
            int l_2568 = (-1L);
            int l_2606 = 0L;
            unsigned l_2607 = 1UL;
            union U0 l_2627 = {0xC24BF8CEL};
            char l_2630 = 0xD2L;
            unsigned char l_2682 = 0xF7L;
            unsigned l_2705 = 4294967289UL;
            unsigned char l_2749 = 1UL;
            p_35 = (safe_add_func_uint8_t_u_u(((g_2147 != func_42((safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((p_35 & (safe_lshift_func_int16_t_s_u(func_42((l_2307 = 0xF82785FBE5CC2704LL), (l_2567 = g_261)), (g_1386 > (p_35 >= (g_2170 = (l_2317 = p_35))))))), p_35)), p_35)), l_2367)) | (-7L)), l_2568));
            if (l_2487.f2)
            {
                unsigned l_2573 = 3UL;
                for (g_2382 = 0; (g_2382 > 5); g_2382++)
                {
                    g_75 = l_2472;
                    l_2573 = (safe_sub_func_uint32_t_u_u((~func_54(l_2361, (g_61.f0 <= g_10), l_2307)), 0UL));
                    p_35 = g_224;
                }
                l_2568 = ((g_248 && (safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(l_2276, (safe_sub_func_int8_t_s_s(((g_2389 == 1L) < func_42((0x72L | (g_2382 && g_75)), p_34)), p_34)))), 8L))) >= p_35);
                p_35 = ((l_2317 = (l_2568 || (safe_lshift_func_uint8_t_u_s((func_54(func_39((safe_add_func_int16_t_s_s(l_2573, 0UL))), (1L ^ ((l_2520 = (safe_lshift_func_int8_t_s_u(g_2170, 5))) ^ (g_1790 || (g_2291 <= l_2567)))), g_1072) ^ 0xBAL), 3)))) | l_2568);
            }
            else
            {
                short l_2591 = 0x7B32L;
                int l_2597 = 0L;
                short l_2636 = 0xBCD5L;
                int l_2661 = 2L;
                unsigned char l_2702 = 255UL;
                g_231 = g_110;
                g_2291 = ((l_2317 = ((l_2366 <= func_36(g_1179, g_2389)) , ((((p_34 >= g_241) & (g_1179 , (safe_lshift_func_int16_t_s_s(g_1909, 2)))) , (safe_mod_func_uint16_t_u_u((l_2590 = p_35), 0x53C4L))) , g_2274))) <= l_2591);
                if ((safe_unary_minus_func_int16_t_s(((safe_rshift_func_int16_t_s_s(((l_2591 , (((safe_sub_func_int32_t_s_s((((l_2307 , (l_2568 = (+(g_1790 = func_54(func_39(g_231), (~p_34), (g_2382 , g_1896)))))) >= (g_2147 <= l_2361.f0)) == l_2597), 0L)) , g_145) && g_1910)) & g_2475), 3)) != g_2147))))
                {
                    unsigned char l_2600 = 255UL;
                    int l_2605 = (-6L);
                    int l_2620 = 1L;
                    union U0 l_2654 = {0xAAF8FD09L};
                    if ((func_54(g_1179, ((l_2361.f2 > ((safe_sub_func_uint8_t_u_u(func_42(l_2600, ((l_2520 = (g_1525 = p_34)) <= g_224)), ((l_2317 = (safe_rshift_func_int8_t_s_s(((safe_add_func_int32_t_s_s(9L, ((((l_2361.f2 , ((l_2606 = (l_2605 = (l_2568 = p_35))) | g_1795)) & l_2591) >= 0L) , g_2170))) <= g_1179.f1), l_2419))) < g_2274))) == l_2607)) == 0UL), l_2607) , g_58.f0))
                    {
                        p_35 = g_1910;
                    }
                    else
                    {
                        p_35 = ((safe_mod_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(g_2147, g_1179.f2)) > (l_2485 = (safe_lshift_func_int8_t_s_u((l_2620 = ((safe_add_func_int64_t_s_s(((18446744073709551612UL ^ (l_2287.f1 , (l_2600 == (l_2605 = (1UL != l_2616))))) ^ func_42(p_34, (safe_mul_func_uint16_t_u_u(p_34, l_2600)))), l_2619)) <= g_32)), 0)))), g_2382)) <= p_34);
                        return g_298;
                    }
                    g_75 = ((safe_lshift_func_int8_t_s_s(0x53L, (0xCAL <= ((((safe_mod_func_int64_t_s_s((g_110 = (-1L)), p_34)) , 65531UL) | ((1L != l_2597) < ((safe_mod_func_uint8_t_u_u(g_1179.f2, (l_2627 , p_35))) == p_35))) != 0L)))) & p_35);
                    for (g_2475 = 0; (g_2475 >= (-7)); g_2475 = safe_sub_func_uint64_t_u_u(g_2475, 2))
                    {
                        l_2630 = g_1072;
                    }
                    if ((func_42(func_42(p_34, ((g_89 < l_2620) >= (((safe_mod_func_uint8_t_u_u(p_35, (safe_add_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s((g_76 , ((((l_2568 = (p_35 <= (l_2487.f0 , ((l_2366 = p_34) <= (((g_241 = 0x1E45AC55682C3392LL) | 18446744073709551614UL) | l_2597))))) && 0xB313DEDB31DC676CLL) , p_35) != p_34)))), g_716)))) == g_231) , g_1072))), p_35) > p_35))
                    {
                        unsigned char l_2643 = 0xAFL;
                        int l_2653 = 0x9D97D9EDL;
                        l_2605 = (((l_2568 | ((((18446744073709551615UL | l_2607) | g_1795) && l_2487.f2) | func_42(g_1790, g_1582))) == (((g_1795 & l_2636) , g_1440) == p_34)) > 0xE87DE6CBL);
                        g_2291 = func_42((safe_mul_func_int16_t_s_s((0L != (l_2317 = (((safe_mod_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u(func_54(l_2361, l_2643, ((p_34 | l_2600) , ((p_35 == (safe_lshift_func_uint16_t_u_s(((((g_290 <= g_231) == (safe_mod_func_int64_t_s_s(g_298, 3L))) > g_2170) ^ 18446744073709551607UL), g_89))) != 8UL))), p_34)) <= 3UL), (-1L))) | p_34) > g_2475))), p_35)), l_2287.f0);
                        p_35 = (safe_mod_func_int64_t_s_s(((g_186 , func_42(l_2643, (l_2606 = (l_2653 = (((((1UL != ((g_1179 , (safe_unary_minus_func_uint16_t_u((safe_sub_func_uint16_t_u_u(func_54(l_2287, g_89, (p_34 <= g_73)), 5L))))) <= p_34)) >= l_2643) || 0x1CC8E290L) , l_2487.f0) ^ 0x7E4E85E01313D6F8LL))))) <= p_34), 0x34717F6D629D17EDLL));
                    }
                    else
                    {
                        unsigned long long l_2664 = 0UL;
                        l_2656 = func_42((l_2654 , ((safe_unary_minus_func_uint64_t_u((g_2274 = ((~g_1909) != ((+g_1795) & (l_2616 = (l_2656 , ((l_2620 = 0UL) | g_1080)))))))) && ((g_1179 , func_54(func_39((((safe_mod_func_int8_t_s_s((((l_2661 = (safe_mod_func_uint64_t_u_u((l_2597 = p_35), ((g_144 == l_2591) || 0x36L)))) != (-7L)) >= p_35), l_2636)) <= g_1072) != 5L)), p_34, g_1910)) != l_2605))), l_2627.f1);
                        p_35 = (safe_lshift_func_int16_t_s_u(l_2664, 15));
                    }
                }
                else
                {
                    unsigned l_2681 = 4UL;
                    l_2568 = 8L;
                    l_2568 = (safe_add_func_int64_t_s_s(((((((((safe_mul_func_int8_t_s_s((l_2661 = p_34), (4294967295UL < (l_2307 = (((safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((l_2627.f1 , (safe_add_func_uint32_t_u_u(((safe_mod_func_uint64_t_u_u(p_35, func_36((l_2361 , g_61), ((safe_add_func_uint64_t_u_u(p_34, 1L)) , ((safe_sub_func_uint32_t_u_u((0x8FL | 0UL), 0x48FAE88FL)) != p_35))))) >= g_2291), p_34))), g_2382)), g_32)) ^ l_2288) >= 0x8AL))))) && l_2681) > l_2361.f1) >= p_35) | l_2681) , l_2607) , g_61.f1) | g_2389), p_34));
                    if (g_32)
                    {
                        unsigned long long l_2689 = 0xEAE2573EDB0D50B3LL;
                        int l_2690 = (-1L);
                        p_35 = ((!p_34) ^ ((l_2682 = p_35) , (safe_rshift_func_int8_t_s_s(l_2591, (safe_add_func_int16_t_s_s(func_42((safe_rshift_func_uint8_t_u_s((func_36(g_1179, (l_2568 = l_2689)) , l_2636), 4)), (l_2690 = 252UL)), 0xE8F3L))))));
                        l_2307 = (g_1179 , (((((safe_rshift_func_int16_t_s_s((((-1L) || ((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(l_2568, 1)), 0xD8FCCC49L)) & g_298)) <= (safe_unary_minus_func_uint16_t_u(g_2389))), (safe_lshift_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_s(l_2702, p_35)) && (254UL == p_35)) ^ 0UL), l_2293)))) , p_34) , 0UL) != l_2656) < 1UL));
                    }
                    else
                    {
                        return g_146;
                    }
                }
                p_35 = (func_36(g_61, l_2472) , ((p_35 < (l_2616 >= ((g_2170 == (p_34 , ((g_49 = ((!(safe_sub_func_int8_t_s_s(((l_2607 & l_2705) , 0x79L), 0x94L))) >= l_2361.f0)) != g_1794))) , g_146))) < l_2702));
            }
            for (g_1175 = 16; (g_1175 != 25); g_1175 = safe_add_func_int32_t_s_s(g_1175, 5))
            {
                unsigned l_2712 = 0UL;
                union U0 l_2719 = {0xED88B8F9L};
                int l_2742 = (-6L);
                unsigned short l_2743 = 0x382FL;
                g_2291 = (safe_mul_func_uint8_t_u_u((((((safe_sub_func_uint8_t_u_u(l_2712, (safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((l_2719 , (safe_rshift_func_uint8_t_u_u((l_2317 = ((g_261 = (p_35 || (g_1179.f2 != p_34))) >= (safe_lshift_func_uint16_t_u_u(((((safe_rshift_func_int16_t_s_s((p_35 <= (((safe_rshift_func_int16_t_s_u(p_34, g_521)) <= (safe_mod_func_uint32_t_u_u((1UL || g_298), l_2616))) & 0xB9BDL)), 0)) || 0x6990A368L) | g_1525) & l_2619), l_2361.f2)))), l_2712))) > 0L), g_75)), 8UL)), g_2067)))) != p_35) ^ 1UL) < g_231) , p_35), 0xFDL));
                for (l_2487.f0 = 9; (l_2487.f0 < 11); l_2487.f0 = safe_add_func_uint16_t_u_u(l_2487.f0, 7))
                {
                    unsigned l_2736 = 3UL;
                    p_35 = (safe_lshift_func_uint16_t_u_s(p_35, g_1179.f1));
                    l_2656 = (((l_2607 , (l_2487 , (+((safe_sub_func_int32_t_s_s(l_2736, (l_2742 = (((-1L) ^ (safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(((g_2382 = (((func_54((g_58 = (l_2741 = (l_2361 = g_58))), p_35, (l_2287.f0 ^ (l_2712 >= (8UL && 0x48465682L)))) == 0x5168L) >= (-1L)) > p_34)) & 0xC32F319EL), 1)), g_1179.f0))) < l_2287.f0)))) < l_2743)))) < l_2736) && g_1910);
                    p_35 = func_54(l_2741, l_2736, (((((((safe_add_func_int8_t_s_s((l_2366 = (safe_unary_minus_func_int8_t_s(l_2590))), (((p_34 | (g_798 & (~(g_1794 , (g_362 = g_716))))) , ((((safe_rshift_func_uint16_t_u_s(p_35, 0)) < g_1066) , l_2712) <= l_2287.f2)) ^ 4294967295UL))) , l_2741.f2) && 0xFA61L) ^ 1UL) >= l_2361.f1) , l_2749) > l_2741.f2));
                }
            }
        }
    }
    p_35 = (g_261 | g_241);
    return l_2554;
}







static unsigned long long func_36(union U0 p_37, unsigned char p_38)
{
    unsigned char l_1751 = 0x61L;
    int l_1752 = 0xBCC53643L;
    int l_1761 = (-1L);
    unsigned char l_1839 = 0xDBL;
    short l_1849 = 0x7ACDL;
    int l_1862 = 1L;
    unsigned l_1941 = 0x7B95DD44L;
    unsigned char l_2004 = 0UL;
    unsigned char l_2007 = 0x15L;
    union U0 l_2058 = {0UL};
    char l_2142 = 0L;
    int l_2196 = (-7L);
    unsigned char l_2218 = 0xA9L;
    short l_2255 = 1L;
    int l_2273 = 0L;
    if ((safe_lshift_func_int16_t_s_u(((((l_1752 = l_1751) == (((g_264 = p_37.f2) > g_61.f1) & (((safe_sub_func_int16_t_s_s(l_1751, (((safe_mul_func_uint8_t_u_u(l_1751, 0x8FL)) ^ (~l_1751)) <= (((g_1179.f0 == (g_1148 != l_1751)) , g_261) , l_1751)))) && g_10) , 0x0F2020A2L))) <= g_1601) == p_37.f1), l_1751)))
    {
        unsigned long long l_1762 = 1UL;
        short l_1763 = 0x33B1L;
        unsigned short l_1785 = 1UL;
        int l_1789 = 0x8221BA61L;
        int l_1912 = 0x5CE81294L;
        long long l_1929 = 0L;
        unsigned long long l_1930 = 18446744073709551610UL;
        int l_1931 = 0L;
        if (((g_1601 | 65530UL) == ((((0x0E718A7CL == (l_1752 = ((65535UL < ((0UL == (safe_mod_func_uint32_t_u_u((((l_1762 = (func_54(g_1179, (p_37.f1 < (~l_1752)), ((safe_rshift_func_int16_t_s_s((l_1761 = (p_37.f0 & 0x87D067D0379E3A40LL)), 1)) , p_38)) | 0L)) == g_1179.f0) | (-1L)), l_1763))) && 1UL)) < g_1175))) ^ g_32) || g_1175) & l_1763)))
        {
            unsigned l_1793 = 4294967295UL;
            union U0 l_1848 = {0UL};
            int l_1868 = (-4L);
            int l_1873 = 0xE2BA0FA8L;
            if (((safe_rshift_func_uint16_t_u_u(0xAAEFL, g_231)) >= ((-5L) ^ ((safe_lshift_func_int8_t_s_u((g_1601 = (safe_mod_func_int16_t_s_s((l_1761 = (safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(0xFFC41B7DL)), l_1762)), g_61.f0))), (safe_add_func_int32_t_s_s(((safe_add_func_uint16_t_u_u(((((g_146 , (safe_mod_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u(g_1072, (p_37.f0 < p_37.f2))) , l_1752) == l_1763), g_61.f1))) > l_1763) <= l_1785) <= 18446744073709551615UL), g_32)) | p_37.f0), g_261))))), g_416)) == l_1785))))
            {
                char l_1788 = (-9L);
                int l_1796 = 0x2E44168FL;
                int l_1826 = (-6L);
                char l_1878 = 0xB4L;
                if ((l_1796 = (safe_mul_func_uint16_t_u_u(func_54(func_39(p_38), ((l_1789 = (l_1788 && l_1762)) >= l_1788), (g_1790 && ((safe_rshift_func_uint8_t_u_s((l_1785 || ((l_1793 , (g_1795 = (g_1794 = l_1751))) , g_1072)), l_1788)) , l_1761))), p_37.f1))))
                {
                    return p_37.f0;
                }
                else
                {
                    unsigned long long l_1799 = 0x5CFE8CEDEEDAC05ELL;
                    for (g_144 = 0; (g_144 != 42); ++g_144)
                    {
                        unsigned l_1815 = 0x9D000CF6L;
                        g_231 = ((l_1799 || ((safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u(((((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s(p_37.f0, (l_1815 ^ (l_1789 = ((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u(l_1796, (l_1826 = (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(0x13L, 0)), 7))))) ^ (safe_sub_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((((p_37.f1 == g_1582) , (((safe_mul_func_uint16_t_u_u(g_58.f1, g_58.f1)) >= g_1790) | l_1763)) && 0UL), 7)), 1)) <= l_1752) , p_37.f1), g_1525))), 4)), 5L)) != 7UL))))), g_261)), p_37.f1)) > l_1793), p_37.f0)) > l_1788) <= 0UL), p_38)) && g_1080) <= g_241) , 1UL))), p_37.f0)) & l_1815)) ^ l_1761);
                        if (l_1799)
                            break;
                        l_1789 = (-3L);
                    }
                    g_75 = p_38;
                    for (g_145 = 0; (g_145 > 56); g_145 = safe_add_func_uint32_t_u_u(g_145, 6))
                    {
                        g_261 = 1L;
                    }
                    if ((safe_sub_func_int16_t_s_s(l_1839, (safe_mul_func_int16_t_s_s(l_1793, func_54((((safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((p_38 && (g_75 = ((p_37.f0 && p_37.f1) >= (-9L)))), 65535UL)), (safe_mod_func_int16_t_s_s((l_1761 < ((l_1752 = (p_37.f2 == p_37.f0)) != p_37.f0)), g_61.f0)))) < 0UL) , l_1848), l_1849, l_1839))))))
                    {
                        int l_1861 = 0xE71427B9L;
                        int l_1863 = 0xCEBD5145L;
                        unsigned short l_1872 = 9UL;
                        l_1863 = (l_1789 = ((safe_mul_func_uint8_t_u_u(((l_1861 = (safe_unary_minus_func_uint32_t_u(func_42(((((g_1525 = (p_37.f2 | (p_38 ^ l_1799))) == (((((safe_mod_func_int16_t_s_s((l_1752 = (safe_lshift_func_uint16_t_u_s(p_37.f0, 0))), p_37.f2)) != 0x3ECA1D0219E5A7ADLL) , 4294967295UL) ^ (safe_lshift_func_uint16_t_u_u(g_144, 12))) , (safe_sub_func_uint64_t_u_u(l_1861, 0UL)))) == 0xEFL) | l_1862), p_37.f0)))) , 0x71L), g_10)) > 0x3CC5F050B8C7F65BLL));
                        l_1796 = ((p_38 && 246UL) == ((g_264 & (safe_mod_func_uint16_t_u_u((+l_1849), (g_362 = l_1861)))) <= p_37.f0));
                        g_75 = ((safe_add_func_uint8_t_u_u(g_58.f1, (l_1785 , ((l_1873 = (g_145 != ((p_38 , (l_1868 = 0xC0E35B0FL)) , ((((safe_add_func_uint16_t_u_u((((safe_unary_minus_func_int8_t_s(g_224)) <= l_1799) <= l_1848.f1), 65535UL)) != 3UL) , 0xB97CAFA8L) , l_1872)))) >= g_58.f1)))) | g_32);
                        l_1752 = (-1L);
                    }
                    else
                    {
                        l_1789 = 0L;
                        g_231 = l_1785;
                        l_1789 = ((safe_add_func_int32_t_s_s((((~(safe_add_func_int64_t_s_s(l_1878, (p_37.f0 || g_58.f1)))) != g_1080) <= 0x12L), (6L > g_61.f1))) , (safe_mul_func_int16_t_s_s((~(((p_38 = (safe_mul_func_int8_t_s_s((l_1763 && (safe_sub_func_int16_t_s_s((l_1761 = g_261), l_1752))), p_37.f1))) , g_1072) ^ 1UL)), p_37.f1)));
                    }
                }
                for (g_285 = 0; (g_285 >= 9); ++g_285)
                {
                    unsigned short l_1887 = 0UL;
                    l_1887 = g_58.f2;
                }
            }
            else
            {
                int l_1895 = 0x9AF547E8L;
                int l_1897 = 0xEEA8A034L;
                l_1873 = (safe_sub_func_int64_t_s_s(((safe_mod_func_uint64_t_u_u(((((~(((l_1839 | func_54(g_1179, p_38, (p_38 ^ g_1582))) == (g_1896 = (safe_unary_minus_func_int16_t_s((g_1072 == (safe_lshift_func_int8_t_s_s(((!((l_1895 = g_1440) <= g_1179.f2)) != 0x20344702L), p_38))))))) != p_37.f1)) && 0xB4D6E41CL) || 0UL) > l_1897), l_1862)) , 0x41256EB000D4C66FLL), (-1L)));
                return p_37.f2;
            }
            l_1789 = 0x72FEDEF5L;
        }
        else
        {
            unsigned long long l_1906 = 0UL;
            int l_1911 = 0x09B453D7L;
            l_1912 = ((l_1839 <= func_42((safe_sub_func_uint64_t_u_u((0x76A0L || ((safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u((0x8A3245D8787F104DLL <= (((l_1789 = (func_54(((safe_lshift_func_int8_t_s_u(l_1906, l_1906)) , func_39((safe_mod_func_int8_t_s_s(((g_241 , (l_1849 && (g_1910 = (g_1909 = (g_1175 = p_37.f2))))) == (l_1911 = (g_716 <= l_1862))), l_1839)))), l_1762, l_1906) == 1UL)) ^ (-4L)) > 0x84287F2EL)), p_38)), 7)) || g_285)), g_1790)), g_10)) <= l_1906);
            l_1912 = ((safe_add_func_int32_t_s_s(((g_362 = (safe_lshift_func_uint8_t_u_u(g_89, (safe_add_func_int8_t_s_s(((l_1906 & ((safe_add_func_uint16_t_u_u(p_37.f0, ((safe_rshift_func_uint16_t_u_s((~((g_231 , ((safe_mul_func_uint8_t_u_u(((g_1175 = p_38) == (((safe_lshift_func_uint16_t_u_s(0xA802L, (safe_sub_func_uint8_t_u_u(g_1440, (l_1929 == p_37.f1))))) || g_1179.f0) , 0xC2754B5555663E4BLL)), p_37.f2)) ^ l_1911)) || l_1911)), g_1440)) <= l_1930))) && g_1179.f2)) , 0xDEL), 0xDCL))))) & 0x5783L), l_1931)) , l_1761);
            l_1761 = g_110;
        }
        g_231 = g_241;
    }
    else
    {
        unsigned l_1938 = 1UL;
        int l_1958 = 0x5D9145F9L;
        char l_1970 = 0x54L;
        unsigned short l_1972 = 6UL;
        unsigned short l_2126 = 0xADE5L;
        union U0 l_2183 = {0x64C2E5E1L};
        union U0 l_2204 = {0x09D8756AL};
        short l_2219 = 0xBC37L;
        int l_2258 = (-1L);
        int l_2275 = 8L;
        if ((safe_rshift_func_uint8_t_u_s(((g_1175 == (safe_rshift_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u(l_1938, (safe_mod_func_int32_t_s_s((g_261 = p_37.f1), l_1938)))) < (l_1941 = (3UL < l_1849))) | (g_136 = (-1L))), (safe_mod_func_uint64_t_u_u(((((safe_mod_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s((p_38 == ((safe_unary_minus_func_uint8_t_u(0xEEL)) | l_1938)), 1)) >= p_37.f2) <= l_1849), (-7L))) ^ 2UL) , l_1938) == g_61.f0), p_37.f1))))) && 0x5B8CL), l_1752)))
        {
            int l_1955 = 1L;
            int l_1969 = (-5L);
            int l_1971 = (-7L);
            long long l_2026 = 8L;
            union U0 l_2035 = {0x2BDE625FL};
            l_1958 = (safe_sub_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((func_42(l_1938, (l_1752 = (p_38 = p_37.f1))) && (p_37.f1 != (safe_rshift_func_uint16_t_u_s(((l_1938 != (p_38 , l_1955)) > l_1752), 9)))), 2)) > ((safe_sub_func_uint16_t_u_u(((g_1910 | g_1790) <= p_37.f0), l_1955)) , g_1795)), p_37.f0));
            l_1958 = l_1958;
            if ((safe_mod_func_uint16_t_u_u(((g_145 , (safe_add_func_int32_t_s_s((l_1761 = (l_1971 = ((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u((0x9AL && ((l_1970 = (((safe_mod_func_int8_t_s_s((g_285 , (l_1955 , func_42(((l_1969 = ((p_38 <= func_42(p_37.f0, ((((p_37.f0 || l_1955) < (g_1175 = (l_1958 = (l_1958 == 0UL)))) <= p_38) > l_1955))) && p_37.f0)) ^ g_1794), l_1849))), 5UL)) == l_1938) != 1L)) ^ 0L)), l_1862)), p_37.f1)) ^ p_38))), l_1972))) , 0x85FDL), p_38)))
            {
                int l_1979 = 1L;
                int l_2008 = 0xDBD6A813L;
                g_75 = (-3L);
                if (((safe_lshift_func_uint16_t_u_s(l_1941, (g_61.f2 , (l_1970 > (~(p_37.f0 | ((l_1970 ^ (func_42(func_54(func_39((((((func_39((g_416 = (safe_lshift_func_int16_t_s_s(1L, 14)))) , ((g_1790 = (l_1969 , (((safe_mul_func_int16_t_s_s(g_1066, 0x91CEL)) || p_38) , 0UL))) ^ 0xF614B2DBL)) > l_1979) & p_37.f1) < g_1795) != (-2L))), l_1955, g_1910), g_1909) ^ p_38)) >= 0xFAA9L))))))) & p_37.f1))
                {
                    g_261 = g_32;
                    g_231 = (p_38 & g_285);
                }
                else
                {
                    short l_1984 = 0x484FL;
                    int l_1995 = 0x1D91C9F3L;
                    g_75 = ((safe_lshift_func_int16_t_s_u(g_1582, g_298)) | (-10L));
                    l_1969 = g_1440;
                    l_1752 = (((safe_mod_func_uint16_t_u_u(l_1984, (safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((g_1795 , ((0x61L == (4294967288UL && (l_1995 = (g_145 <= ((~0UL) > (p_37.f2 && (safe_lshift_func_int16_t_s_s(0x3E74L, 1)))))))) & ((safe_mul_func_int16_t_s_s((-10L), g_1127)) | p_37.f0))), 0UL)), 3)), 65529UL)))) || l_1958) , p_37.f2);
                    for (l_1941 = 0; (l_1941 != 57); l_1941 = safe_add_func_int32_t_s_s(l_1941, 7))
                    {
                        l_1971 = (safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(l_2004, 2)), p_37.f1));
                        if (l_1984)
                            break;
                    }
                }
                for (g_1072 = 11; (g_1072 <= (-24)); g_1072 = safe_sub_func_int16_t_s_s(g_1072, 8))
                {
                    l_2008 = (l_2007 = (p_38 && 0UL));
                }
                g_75 = ((((((((p_37.f0 == (safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s(g_264, (((safe_add_func_int64_t_s_s((safe_sub_func_int32_t_s_s((((!g_1179.f1) && (safe_sub_func_int8_t_s_s(l_1955, g_521))) > p_37.f0), (safe_unary_minus_func_uint8_t_u(p_38)))), ((safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s(l_1752, 4)) || (p_37.f1 || 2L)) >= g_1790), p_37.f2)) && 9L), p_37.f1)) , p_37.f0))) == l_1862) == g_1601))), (-10L)))) ^ p_37.f0) >= l_2026) && g_224) , 0xD73EL) || 0x5A46L) <= 0x37EEL) | 0x0B9852CEA9F89C06LL);
            }
            else
            {
                short l_2036 = (-1L);
                int l_2037 = 1L;
                int l_2040 = (-2L);
                unsigned l_2098 = 0x95257529L;
                unsigned l_2107 = 0x9CA441A0L;
                if ((((((p_37.f2 & (l_1938 > l_1972)) >= (l_1751 & (l_1972 > (safe_add_func_int8_t_s_s(((safe_mod_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(l_1955, 2)), p_37.f2)) <= l_1972), p_37.f1))))) | p_37.f2) > g_1179.f1) ^ (-4L)))
                {
                    char l_2041 = 0xBBL;
                    l_1958 = (safe_rshift_func_uint16_t_u_s(func_54(l_2035, p_37.f2, ((l_2037 = l_2036) && (l_1969 = (g_521 = l_2037)))), (safe_lshift_func_uint8_t_u_u((l_1752 & p_37.f1), (0x0FAE9F3BL | ((l_2040 = ((65530UL != l_2004) > p_38)) | p_37.f2))))));
                    l_1958 = l_2041;
                }
                else
                {
                    unsigned char l_2070 = 0xEDL;
                    int l_2071 = 0L;
                    if (((safe_mod_func_int16_t_s_s((g_285 = ((safe_add_func_uint64_t_u_u(1UL, l_2040)) != (p_37.f1 >= (safe_sub_func_uint32_t_u_u(((p_38 & (~(safe_lshift_func_uint8_t_u_s((l_1969 = (((safe_add_func_uint8_t_u_u(g_798, g_1179.f2)) >= (safe_add_func_uint8_t_u_u(l_2036, l_1849))) == (g_1795 , g_241))), g_146)))) > 0x16AB0ECFC882DC0BLL), 0xC118259FL))))), p_37.f1)) > l_1958))
                    {
                        char l_2068 = (-1L);
                        int l_2069 = 0L;
                        l_1761 = (g_1790 || (((l_2071 = ((0x8429L | (safe_add_func_int64_t_s_s(p_37.f2, ((safe_add_func_uint8_t_u_u(func_54(l_2058, ((func_42((l_2069 = (l_2068 = (safe_mul_func_int16_t_s_s(((l_1969 == 0x76L) | ((g_362 = (l_1971 = (safe_mul_func_uint8_t_u_u((p_37.f2 >= (safe_mul_func_uint8_t_u_u(0UL, ((safe_lshift_func_uint8_t_u_u(0xD1L, l_1969)) , 0x27L)))), g_2067)))) , g_61.f0)), (-7L))))), l_2070) <= p_38) , (-1L)), g_1910), p_38)) , 0xF42EFD9BA4082CD2LL)))) != g_1790)) <= p_37.f1) , l_1849));
                        l_2071 = (g_261 = (safe_sub_func_int8_t_s_s((l_1958 = p_37.f0), (p_38 , l_1971))));
                        l_2071 = l_2069;
                        l_1971 = (((safe_add_func_uint64_t_u_u((func_54(func_39(((safe_add_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s(g_1072, (safe_lshift_func_int16_t_s_u((func_42(((l_2071 = g_186) & l_2070), ((safe_rshift_func_uint8_t_u_s(0xE8L, 7)) > p_37.f1)) , (l_2037 & ((l_1761 = (safe_sub_func_int8_t_s_s((((g_1179.f0 < ((safe_sub_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((l_1971 >= (-8L)), p_37.f0)), 0x8DF803371C580D5FLL)), l_2058.f0)) == g_298)) <= 1L) != g_73), l_2035.f1))) , 0x9C380CCEL))), 15)))) || g_1909), p_38)) , g_798)), l_2070, l_1958) | l_2070), p_37.f0)) > 0xE00DL) | p_37.f0);
                    }
                    else
                    {
                        char l_2114 = 0x0BL;
                        int l_2115 = 0x9573012DL;
                        l_2115 = (((-1L) & (safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(4294967293UL, 0x6785C52EL)), (safe_mul_func_uint16_t_u_u(((l_2098 = p_37.f0) < ((((l_1761 & (safe_sub_func_int64_t_s_s((~(g_224 = ((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((l_1958 = (safe_sub_func_int64_t_s_s(l_2107, (((safe_sub_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(g_521, (-8L))) <= g_362), 0x8DL)), 9UL)) , p_37.f0) & g_186)))), p_37.f2)), l_1955)) , 0xC7289B2E5E7E7F52LL))), l_2114))) , g_58.f1) ^ p_38) == g_1386)), 1UL))))) > p_38);
                        l_1971 = (l_1958 = ((safe_mul_func_int16_t_s_s(((l_1761 = p_37.f0) <= ((l_2115 >= g_231) != (p_37.f1 <= l_2098))), g_1794)) , (0xA971L & (safe_rshift_func_uint16_t_u_s(p_37.f0, (l_2098 > g_285))))));
                        return g_231;
                    }
                }
                g_231 = g_32;
                l_2037 = l_1972;
            }
        }
        else
        {
            unsigned l_2135 = 0xCCABE59DL;
            if ((8L == 0x9636L))
            {
                char l_2129 = 0xF0L;
                int l_2134 = 0x69F80077L;
                l_2134 = (l_1958 = ((safe_lshift_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u(l_2126, (g_261 , (safe_mul_func_uint16_t_u_u(l_2129, g_716))))) >= (l_2058.f1 >= 1UL)) > (g_58.f0 <= ((safe_mod_func_uint64_t_u_u((!(((((safe_mod_func_int64_t_s_s((~p_37.f0), l_2058.f0)) == 2L) > g_145) | g_285) , 0UL)), l_1970)) >= 65532UL))), p_37.f0)) | g_264));
                g_231 = g_231;
                g_75 = l_2126;
            }
            else
            {
                l_1958 = l_2135;
            }
        }
        l_1958 = (p_37 , p_37.f0);
        if ((l_1761 = g_146))
        {
            int l_2148 = 1L;
            unsigned long long l_2203 = 18446744073709551615UL;
            int l_2214 = 0x2DA3946AL;
            int l_2215 = 0x99F7F833L;
            if ((l_1752 = (((0x37L <= 0x80L) ^ g_58.f2) == (safe_rshift_func_int8_t_s_s((-7L), 7)))))
            {
                unsigned long long l_2138 = 0x36FD1495E992125BLL;
                int l_2139 = 0xD4275103L;
                long long l_2184 = 9L;
                unsigned char l_2199 = 246UL;
                l_2139 = (func_39(l_2138) , ((l_1752 = g_47) >= (-8L)));
                if (g_49)
                {
                    l_1761 = (0x15A51E81898805ABLL && 7L);
                    if ((((0xFFC9L && ((0x426E79C4L | (safe_mod_func_int16_t_s_s(((p_37.f0 || (-9L)) | 0xDEL), l_2126))) < l_2142)) , ((((safe_rshift_func_uint8_t_u_s(p_37.f1, (((safe_lshift_func_int16_t_s_u(((l_1958 = func_54(g_61, g_2147, p_37.f2)) <= g_1794), l_2148)) , g_1525) || l_1938))) <= g_1175) == (-8L)) < l_1751)) ^ l_2058.f2))
                    {
                        long long l_2157 = (-4L);
                        l_2148 = (safe_rshift_func_uint8_t_u_s(l_2138, func_42(p_37.f1, (l_1752 = (safe_mod_func_uint64_t_u_u((safe_add_func_int32_t_s_s(p_38, p_38)), (0x69C5DB99CAE001F4LL | (safe_sub_func_int64_t_s_s((l_2157 , func_42(l_2139, p_37.f0)), p_37.f0)))))))));
                    }
                    else
                    {
                        g_261 = (-1L);
                    }
                }
                else
                {
                    unsigned long long l_2162 = 0x3519E027A18E719FLL;
                    int l_2169 = 1L;
                    g_2170 = (safe_mod_func_int8_t_s_s((l_2169 = (l_1752 = (p_37.f2 <= (65535UL || (func_39((safe_mul_func_uint8_t_u_u((g_73 = (p_38 = l_2162)), ((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s((g_1795 | 0x3CECL), (0x4DA2L | ((safe_sub_func_int64_t_s_s((g_61.f0 , ((((p_37.f1 == g_1795) ^ l_2139) , l_2138) ^ l_2162)), p_37.f1)) , 0xAD40L)))), p_37.f0)) >= 248UL)))) , l_1958))))), 0x82L));
                    l_1761 = func_42(g_298, p_38);
                    for (g_798 = 19; (g_798 <= 56); g_798 = safe_add_func_uint32_t_u_u(g_798, 6))
                    {
                        unsigned l_2182 = 0UL;
                        l_2184 = (l_1958 = ((safe_sub_func_int8_t_s_s(((((p_37.f1 >= ((safe_mod_func_int8_t_s_s((l_2148 = (safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((g_75 = ((((g_1909 = g_224) , (0xCFL & l_2162)) & ((l_1958 < (l_2139 , l_2182)) == p_37.f1)) > p_38)))), (-4L))), g_136))), 0x87L)) >= l_2058.f0)) , l_2183) , (-8L)) , 0L), p_38)) , l_2182));
                    }
                }
                l_1958 = (((safe_sub_func_uint8_t_u_u(g_47, g_248)) != (safe_rshift_func_uint8_t_u_s(l_2183.f0, 0))) <= ((safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(p_37.f0, ((l_2196 = (((safe_mul_func_int8_t_s_s((p_37.f2 <= l_2184), (0x17B4425778D1FA93LL >= (safe_unary_minus_func_uint32_t_u(((l_1752 = (1L || p_37.f0)) , l_2139)))))) & g_186) , 0x9BBDF5F3L)) , g_248))), g_1795)) == l_2184));
                l_2139 = (l_2199 = ((((l_1970 , ((g_2170 = g_1790) > g_76)) , (l_2139 < (((safe_mul_func_int16_t_s_s(g_224, 0x25B4L)) | ((0xD7C248FF0801E82DLL | l_2007) && 1L)) && p_37.f2))) > g_10) == l_2139));
            }
            else
            {
                int l_2200 = 0x979AEE08L;
                l_2200 = 0x5E53A1BCL;
            }
            for (g_1525 = 21; (g_1525 <= 42); g_1525 = safe_add_func_uint16_t_u_u(g_1525, 1))
            {
                unsigned short l_2211 = 0x96FCL;
                l_2215 = ((p_37.f0 , l_2203) >= ((l_1761 = (l_2214 = (func_54(l_2204, (p_37.f0 & ((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(0x55L, 1)), (safe_mul_func_uint8_t_u_u((l_2211 >= (l_1752 = p_37.f2)), (safe_add_func_int64_t_s_s((l_2148 = (p_37.f2 || 0x674B4494L)), g_1066)))))) != g_1179.f1)), l_2211) != l_2203))) | p_37.f1));
                l_2215 = (g_1582 >= l_2215);
            }
            l_2219 = (g_10 , (safe_add_func_uint16_t_u_u((1L && l_2218), p_37.f2)));
            for (l_2058.f2 = 0; (l_2058.f2 != 57); l_2058.f2 = safe_add_func_int64_t_s_s(l_2058.f2, 3))
            {
                unsigned l_2230 = 3UL;
                int l_2237 = 0x52D9C068L;
                g_75 = (l_1958 = ((l_1839 || (safe_lshift_func_int8_t_s_s(g_58.f1, (((((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((g_1440 = g_144), g_61.f2)), 0)) <= (safe_mod_func_uint64_t_u_u(l_2230, g_290))) >= g_2067) & p_37.f2) ^ g_89)))) != l_2214));
                g_231 = l_2230;
                for (l_2218 = 12; (l_2218 >= 36); l_2218 = safe_add_func_int8_t_s_s(l_2218, 6))
                {
                    long long l_2233 = 0x6E04C20EECD110FDLL;
                    int l_2236 = 1L;
                    l_2148 = p_37.f0;
                    l_2237 = (l_2233 == (g_1175 = func_54(p_37, g_264, (((g_2147 = (l_2236 = ((safe_mul_func_uint16_t_u_u(0UL, g_716)) > g_521))) != l_2230) ^ p_37.f0))));
                }
                if (g_145)
                    continue;
            }
        }
        else
        {
            char l_2246 = 0L;
            int l_2256 = 0xF76BB46BL;
            int l_2257 = 0xA2819200L;
            int l_2268 = (-1L);
            l_1752 = 0x86896F34L;
            for (l_1862 = (-28); (l_1862 < (-1)); l_1862 = safe_add_func_uint64_t_u_u(l_1862, 7))
            {
                g_231 = g_290;
            }
            l_2257 = ((safe_rshift_func_uint8_t_u_u((l_2258 = (((+(((safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((l_2246 = func_54(g_61, g_231, g_2170)) , ((l_1958 = (-1L)) <= (l_2256 = func_42((func_42((safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(p_38, 6)), (((safe_lshift_func_uint8_t_u_s(l_2255, 6)) && (p_37.f2 ^ (~func_54(p_37, g_362, l_2246)))) || 0xDA31EBA3692EAB36LL))), 4)), p_38) <= l_1972), l_2246)))), g_1179.f0)), 0x9743L)) ^ 0xA12AL) <= l_2257)) <= g_10) , g_61.f2)), 3)) ^ 247UL);
            l_2275 = (l_2256 = (safe_sub_func_uint64_t_u_u(((l_1849 != (l_1752 = l_2257)) && (p_38 & ((safe_sub_func_int16_t_s_s(((g_2274 = (g_144 , (safe_mod_func_int64_t_s_s(((l_2258 = (safe_unary_minus_func_int16_t_s((((l_1958 = ((safe_rshift_func_int8_t_s_u(((g_2170 = 0x6AL) , ((l_2268 , func_54(func_39((safe_lshift_func_int8_t_s_s((p_37.f0 <= (p_37.f2 | (((safe_mod_func_int32_t_s_s(func_42(g_298, p_37.f0), g_2147)) > l_1839) , g_61.f1))), p_37.f2))), g_1601, p_37.f0)) != g_32)), 5)) <= l_2273)) || 0L) , 0xDC85L)))) ^ l_2246), 0x98694A384C9AE9E0LL)))) ^ g_2147), g_1601)) , 1L))), p_38)));
        }
    }
    return g_146;
}







static union U0 func_39(int p_40)
{
    unsigned short l_48 = 65530UL;
    int l_1195 = 0L;
    char l_1198 = (-4L);
    char l_1216 = 0x28L;
    char l_1235 = (-7L);
    int l_1376 = 9L;
    unsigned char l_1377 = 0x2EL;
    short l_1422 = (-1L);
    union U0 l_1452 = {18446744073709551607UL};
    unsigned short l_1577 = 9UL;
    int l_1602 = 0x67A3F9D5L;
    if (((l_1195 = func_42((g_47 = (safe_mul_func_uint8_t_u_u((g_10 , 246UL), 0x62L))), (l_48 = p_40))) , (((((((safe_rshift_func_uint8_t_u_s((l_1195 = func_42(l_1198, (!(!(l_1195 != p_40))))), g_1072)) || 0xEDL) || p_40) & g_1072) , 0x0AF31573L) & p_40) > 0x5AB9CD83L)))
    {
        unsigned char l_1207 = 0UL;
        int l_1211 = 6L;
        int l_1212 = 0L;
        int l_1213 = 0x02F54C93L;
        unsigned l_1241 = 0xA952A907L;
        long long l_1242 = 1L;
        short l_1256 = 0L;
        union U0 l_1290 = {0x5057180DL};
        unsigned short l_1298 = 0x4BC7L;
        long long l_1414 = 0xFF99A0EEDE3B1930LL;
        for (g_47 = (-20); (g_47 < (-23)); g_47 = safe_sub_func_int32_t_s_s(g_47, 8))
        {
            unsigned long long l_1208 = 1UL;
            int l_1215 = (-10L);
            int l_1375 = 1L;
            char l_1435 = 0L;
            union U0 l_1453 = {0x3C59ADDFL};
            for (g_798 = 0; (g_798 < 6); g_798++)
            {
                long long l_1214 = 0x32A5FB1A7483BC90LL;
                if (g_1179.f0)
                {
                    for (g_521 = 0; (g_521 != 0); g_521 = safe_add_func_uint64_t_u_u(g_521, 4))
                    {
                        return g_61;
                    }
                    if (p_40)
                        continue;
                    l_1213 = ((((-1L) > g_186) ^ (safe_mul_func_uint16_t_u_u(g_1066, ((l_1208 = (0xD994BA776FB5D190LL || l_1207)) == ((g_362 = (safe_rshift_func_int8_t_s_u(((g_146 = ((((l_1211 = g_416) < (l_1212 = (-1L))) & 1L) , ((l_1195 = (l_48 | p_40)) > g_798))) ^ p_40), g_58.f0))) && 0x5DF4L))))) > l_1207);
                    l_1215 = ((-7L) > (l_1214 >= g_1179.f2));
                }
                else
                {
                    unsigned l_1229 = 0x1BDBD70CL;
                    l_1216 = p_40;
                    l_1195 = (safe_rshift_func_int16_t_s_u((l_1213 = l_1215), 7));
                    for (l_1208 = 25; (l_1208 == 19); l_1208--)
                    {
                        g_75 = (safe_lshift_func_uint8_t_u_s((l_1195 = (safe_sub_func_int16_t_s_s(l_1208, (g_264 = g_61.f0)))), ((safe_add_func_uint32_t_u_u(((g_1175 = ((safe_add_func_int64_t_s_s(((1L && (l_1214 > (l_1229 , 0UL))) >= (g_285 = (g_341 ^ (safe_rshift_func_int16_t_s_s(l_1207, (0x7BDDL | 0x0C4BL)))))), l_1229)) , 1UL)) <= p_40), 1L)) ^ p_40)));
                    }
                }
                l_1215 = p_40;
            }
            for (l_1208 = (-30); (l_1208 >= 18); ++l_1208)
            {
                unsigned char l_1236 = 1UL;
                int l_1257 = 0x6A6B9438L;
                int l_1264 = 1L;
                unsigned long long l_1317 = 1UL;
                if (((((g_1179.f1 && (safe_unary_minus_func_uint32_t_u(g_58.f0))) <= 0x34090C81L) < (p_40 , g_1179.f0)) && ((l_1236 = (~((l_1235 , l_1207) < (g_264 = g_416)))) == (g_75 = ((g_261 = (((safe_mul_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(((l_1241 , g_261) < 0x7261C935L), p_40)) <= 0x65142E6EF41F05BELL), 1UL)) != p_40) == g_1127)) ^ g_47)))))
                {
                    g_231 = 7L;
                }
                else
                {
                    if ((p_40 <= l_1215))
                    {
                        g_261 = l_1208;
                        g_231 = l_1213;
                    }
                    else
                    {
                        if (l_1207)
                            break;
                    }
                    g_75 = l_1236;
                }
                if (l_1242)
                {
                    unsigned l_1255 = 9UL;
                    l_1257 = ((safe_lshift_func_int8_t_s_s(0xA6L, 2)) && (((((safe_mul_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s(l_1198, p_40)) != g_362) > (((g_261 = (((((g_1175 = p_40) , g_61.f2) > (safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(l_1236, (safe_add_func_uint8_t_u_u((0x7FC1L == (g_144 = (l_1215 = (p_40 , 1UL)))), g_521)))), 3))) >= 1L) , 7L)) < g_241) & p_40)), l_1208)) ^ l_1255) , l_1241) >= p_40) >= l_1256));
                    for (g_1080 = (-12); (g_1080 < 25); g_1080 = safe_add_func_uint16_t_u_u(g_1080, 3))
                    {
                        g_231 = (g_110 & (l_1255 & g_145));
                        if (g_49)
                            break;
                    }
                }
                else
                {
                    unsigned l_1262 = 4UL;
                    int l_1263 = 8L;
                    if ((g_1072 | (l_48 < l_1236)))
                    {
                        g_75 = (((g_224 > (+0x3E871E07L)) || (safe_lshift_func_int16_t_s_s(l_1262, 4))) <= 0xEAL);
                        g_231 = g_241;
                        l_1263 = 0x8C9D6627L;
                        g_75 = l_1264;
                    }
                    else
                    {
                        short l_1265 = 1L;
                        g_231 = ((l_1265 < (g_1175 && 2UL)) < (((safe_add_func_int64_t_s_s((safe_mod_func_int16_t_s_s((g_1127 != l_1265), p_40)), p_40)) > (safe_add_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_s(((!((g_261 , (((safe_lshift_func_uint8_t_u_u(g_89, 2)) & g_1179.f1) <= g_231)) <= 0UL)) , p_40), 4)) , g_1175), g_341))) != 1UL));
                    }
                    return g_61;
                }
                if (g_1066)
                    break;
                if ((g_61.f2 >= (safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((p_40 ^ ((safe_mul_func_int16_t_s_s((l_1213 = (-10L)), ((g_1066 && p_40) , 0xCC20L))) & g_231)), p_40)), g_298))))
                {
                    return g_61;
                }
                else
                {
                    int l_1291 = 4L;
                    union U0 l_1322 = {18446744073709551615UL};
                    for (g_264 = 24; (g_264 == (-12)); g_264--)
                    {
                        char l_1309 = 0xA4L;
                        l_1211 = (l_1208 & (((safe_sub_func_uint64_t_u_u((0xD0946F28L <= p_40), (safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s(p_40, l_1235)), (l_1290 , g_1179.f0))))) ^ l_1291) & (g_47 <= 0x3AL)));
                        g_231 = (safe_sub_func_int64_t_s_s((safe_sub_func_uint16_t_u_u((g_1179.f1 , 0x3D94L), l_1264)), 0xE2EEFEF1760755B9LL));
                        g_231 = (g_1148 == p_40);
                        l_1264 = ((g_61.f0 , g_144) && (safe_lshift_func_int8_t_s_s((l_1208 == ((g_49 != l_1291) || ((l_1298 > l_1213) ^ (l_1215 = (safe_lshift_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(l_1215, l_1309)) >= g_73), p_40)), 0xDDL)), g_61.f2)) , g_1072) , g_716), 15)))))), g_144)));
                    }
                    if ((safe_rshift_func_int16_t_s_s((l_1256 & g_521), g_144)))
                    {
                        long long l_1312 = 0x80B078ABE55D4456LL;
                        l_1312 = (l_1195 = (+g_798));
                        l_1291 = (g_75 = ((safe_rshift_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u(l_1317, ((safe_sub_func_uint16_t_u_u((p_40 , 0xC7CAL), (safe_add_func_uint32_t_u_u(g_61.f0, (l_1322 , l_1290.f0))))) != (l_1212 = (safe_mul_func_int16_t_s_s((l_1236 && (safe_lshift_func_uint16_t_u_s((+(1L == g_1127)), 7))), g_76)))))) | l_1215) <= g_1127), 7)) , (-3L)));
                        l_1264 = ((((l_1317 , ((l_1322 , g_416) != (safe_rshift_func_int8_t_s_u((-3L), (p_40 , ((l_1211 = (p_40 > ((-7L) >= (safe_add_func_uint32_t_u_u(4294967294UL, (p_40 != 250UL)))))) == 0xB82F81CEL)))))) == 0x49CB5660L) <= 7UL) , 0x538FEF13L);
                    }
                    else
                    {
                        long long l_1353 = 0xFFEB4ACF64CFAEBELL;
                        int l_1356 = 0xC6D2D23DL;
                        l_1211 = (g_49 >= ((((~(((((p_40 , ((g_1179.f0 = 5UL) , ((safe_mul_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((l_1213 = (g_716 & (safe_sub_func_uint8_t_u_u(0xE8L, (!(safe_mod_func_uint8_t_u_u(((g_1127 = (l_1208 != ((safe_lshift_func_int16_t_s_u(((p_40 , (safe_rshift_func_uint16_t_u_s(g_1175, 10))) < ((safe_mul_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((((safe_add_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(g_285, l_1317)), l_1353)), l_1198)) , 0xB49C6C5086DCACCCLL) , g_49), g_290)), 0x52L)) == p_40)), 4)) > 0xED8FL))) , l_1208), g_716))))))), p_40)) != p_40), g_58.f1)) == p_40))) , 0xDD8ED3EDL) , p_40) || 0x3123L) , l_1215)) & p_40) < g_58.f0) , l_1353));
                        l_1356 = (safe_sub_func_int32_t_s_s((l_1264 , g_61.f0), ((l_1257 = p_40) > (p_40 || (~g_1179.f2)))));
                        g_261 = (l_1322 , l_1356);
                    }
                    l_1211 = 0x17C5613CL;
                }
            }
            if ((safe_add_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(((safe_add_func_int16_t_s_s((l_1242 != (safe_mul_func_uint8_t_u_u(((l_1215 = l_1215) && (g_1175 = l_1208)), (safe_rshift_func_int16_t_s_s((l_1195 = 0x0CA3L), 2))))), (safe_rshift_func_uint8_t_u_u(0x5FL, (l_1376 = (((l_1375 = (safe_mul_func_uint16_t_u_u(g_264, (l_1212 = (safe_rshift_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(((l_1211 = 18446744073709551615UL) ^ (((g_32 , (g_61.f0 , l_1290.f0)) , p_40) && l_48)), 6UL)) != 1L), 6)))))) == l_1235) < p_40)))))) < p_40), g_1072)) <= p_40), 7UL)))
            {
                char l_1393 = (-1L);
                int l_1396 = 0x334949E8L;
                int l_1442 = 0L;
                if (l_1208)
                {
                    g_231 = l_1377;
                    g_261 = 0x6FBE49CBL;
                }
                else
                {
                    for (g_110 = (-14); (g_110 <= (-21)); g_110--)
                    {
                        return l_1290;
                    }
                    for (l_48 = (-3); (l_48 < 44); l_48 = safe_add_func_uint64_t_u_u(l_48, 5))
                    {
                        l_1211 = (-1L);
                    }
                    g_261 = p_40;
                }
                if (g_110)
                {
                    unsigned l_1413 = 0x20E02068L;
                    int l_1415 = 0xE7ADB594L;
                    union U0 l_1416 = {8UL};
                    for (l_1216 = 0; (l_1216 == (-6)); l_1216--)
                    {
                        g_1386 = (safe_lshift_func_uint16_t_u_u(((l_1376 = p_40) != (g_1179.f0 && (-2L))), (249UL ^ 0UL)));
                        l_1393 = (g_61.f1 != (((p_40 < (l_1235 >= (safe_mod_func_int8_t_s_s((g_58.f0 ^ (g_341 = (l_1375 , ((g_285 <= (p_40 >= ((safe_mul_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((g_1179.f0 , l_1216) != l_48), l_48)), l_1195)) , g_1386))) && g_231)))), 246UL)))) ^ p_40) || 0x697660C41D9D7D1CLL));
                        g_75 = g_716;
                    }
                    for (g_298 = 0; (g_298 <= 13); g_298 = safe_add_func_uint8_t_u_u(g_298, 1))
                    {
                        short l_1405 = 0L;
                        char l_1406 = 0x5DL;
                        l_1396 = g_241;
                        l_1376 = (safe_mod_func_uint64_t_u_u(((safe_sub_func_int16_t_s_s((0x08A9L | (l_1195 = ((g_75 = ((+((((safe_lshift_func_uint8_t_u_s(((safe_mod_func_int32_t_s_s((0L | (l_1207 > ((g_89 >= (4294967295UL < p_40)) > (((g_298 >= ((l_1396 = (g_136 == l_1405)) < p_40)) <= 6UL) || g_521)))), l_1405)) , g_110), 2)) <= 0x6568L) != p_40) == l_1405)) > l_1208)) , l_1235))), g_416)) == p_40), l_1393));
                        l_1376 = p_40;
                        l_1415 = (l_1406 == (g_1175 , (safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(l_1405, 4)), (safe_lshift_func_int8_t_s_u((p_40 ^ (l_1413 , l_1414)), ((0xCC849299L & g_1386) ^ g_1386)))))));
                    }
                    return l_1416;
                }
                else
                {
                    long long l_1417 = (-1L);
                    int l_1432 = (-1L);
                    if (((g_73 , (l_1417 = l_1290.f2)) && (((safe_add_func_int32_t_s_s((-1L), p_40)) & 0xAF13L) || (g_136 = (g_186 , (g_1179.f0 & (l_1393 ^ (safe_add_func_uint32_t_u_u((g_298 = ((((g_58.f1 = 18446744073709551615UL) , l_1422) || g_1072) >= 1L)), 0xE088F08CL)))))))))
                    {
                        short l_1431 = 0L;
                        int l_1441 = (-3L);
                        l_1375 = (safe_lshift_func_int16_t_s_u((l_1213 = p_40), (g_1386 = ((l_1432 = (safe_mul_func_uint16_t_u_u(((p_40 , (safe_mod_func_int64_t_s_s((((l_1431 = (g_1072 <= (l_1215 = ((((l_1211 = 0xFA95FAEDL) || ((p_40 || p_40) <= (((safe_mul_func_int16_t_s_s(l_1212, p_40)) < p_40) != 253UL))) && l_1417) || l_1290.f1)))) >= g_285) != g_58.f2), (-10L)))) < p_40), g_10))) != g_61.f0))));
                        l_1442 = (l_1441 = (safe_mul_func_uint8_t_u_u(l_1435, ((+g_1148) >= (safe_sub_func_uint64_t_u_u((safe_mod_func_int32_t_s_s((0xC2L < g_1179.f1), (l_1396 = g_264))), (+g_1440)))))));
                    }
                    else
                    {
                        l_1375 = (safe_sub_func_int32_t_s_s(((safe_sub_func_int64_t_s_s((-7L), (safe_rshift_func_uint16_t_u_u(g_1179.f2, 4)))) || 0xC21BL), 0x6E748C75L));
                        if (g_58.f1)
                            continue;
                    }
                    for (g_186 = 6; (g_186 != (-7)); g_186--)
                    {
                        unsigned l_1451 = 0x4C8696D0L;
                        l_1451 = g_61.f2;
                    }
                    return l_1452;
                }
            }
            else
            {
                return l_1453;
            }
        }
    }
    else
    {
        l_1376 = (safe_unary_minus_func_uint16_t_u((safe_sub_func_int8_t_s_s((func_42((g_1148 < ((((!(p_40 != g_798)) | g_58.f1) & p_40) , (((safe_rshift_func_uint8_t_u_s(250UL, (((p_40 & l_1452.f0) == (-5L)) < 1UL))) < 0x40122B1AL) >= p_40))), g_110) == g_32), g_1386))));
    }
    if (p_40)
    {
        char l_1459 = 0x9EL;
        int l_1478 = 0L;
        int l_1508 = 0x36AA61E5L;
        int l_1509 = 6L;
        unsigned long long l_1536 = 18446744073709551612UL;
        union U0 l_1539 = {0x9BE7AB9CL};
        unsigned char l_1645 = 1UL;
        char l_1745 = 0L;
        g_75 = p_40;
        if ((l_1459 <= (((l_1376 = 0x9547959549B20475LL) & g_261) >= 0x89L)))
        {
            unsigned l_1466 = 1UL;
            int l_1471 = 0x62212710L;
            int l_1477 = 0x78C92C4AL;
            int l_1479 = 2L;
            unsigned l_1572 = 0x653D6D05L;
            int l_1575 = 0x4E3EBDA0L;
            for (g_61.f0 = 0; (g_61.f0 >= 34); ++g_61.f0)
            {
                unsigned long long l_1472 = 5UL;
                int l_1494 = 0xFB971EDAL;
                int l_1554 = 0x1C29AB91L;
                unsigned char l_1560 = 0UL;
                short l_1569 = 0xCFB8L;
                char l_1591 = 0L;
                l_1479 = (safe_add_func_uint64_t_u_u((p_40 >= ((safe_mul_func_uint16_t_u_u((l_1466 <= ((safe_add_func_uint64_t_u_u((l_1478 = (l_1235 == ((((safe_mod_func_int64_t_s_s(((l_1471 != g_416) <= p_40), l_1472)) , (~(((((p_40 || (l_1477 = (safe_add_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u(0xA242L, 2L)) ^ g_1179.f1) & p_40), 0x14L)))) , g_1148) > g_146) ^ p_40) | l_1376))) ^ p_40) & 0x0385D272A1D610D6LL))), 0x1C5A21466B4481AALL)) | l_1459)), l_48)) , g_224)), 0x5BC3EF8C2663EC61LL));
                if (((((((safe_sub_func_int64_t_s_s(g_248, (safe_mod_func_int16_t_s_s(g_285, l_1472)))) ^ l_1459) & ((safe_mod_func_uint16_t_u_u(p_40, ((l_1376 = (l_1478 = p_40)) && (l_1479 = (safe_sub_func_uint64_t_u_u((((((g_1179.f0 != (safe_mul_func_int8_t_s_s(0x25L, (l_1494 = ((safe_add_func_int16_t_s_s((((safe_sub_func_int64_t_s_s(g_1127, 0x71E4D30B0BC800BBLL)) == g_58.f1) >= l_1466), 9UL)) == p_40))))) < l_1477) , 5L) ^ p_40) , 0xE91D1CA150E27C24LL), g_261)))))) > 255UL)) == l_1466) == 0xFC51584EL) | p_40))
                {
                    unsigned short l_1495 = 0x7E0CL;
                    int l_1514 = 0x5D62A535L;
                    int l_1537 = 4L;
                    int l_1538 = 0x1CE3882EL;
                    l_1495 = (l_1477 , g_298);
                    if (l_1472)
                    {
                        if (p_40)
                            break;
                        return l_1452;
                    }
                    else
                    {
                        int l_1505 = 1L;
                        l_1509 = (safe_lshift_func_uint8_t_u_s((((l_1195 = p_40) | (safe_unary_minus_func_int16_t_s((((l_1508 = (safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_u((g_224 || 0x52L), 5)) >= (l_1478 = 0L)), (g_110 , l_1505))), ((safe_sub_func_int16_t_s_s(l_1505, p_40)) && ((g_285 , l_1495) != l_1466))))) , p_40) > p_40)))) ^ 1L), g_73));
                        g_231 = 0x1F14E4A9L;
                        g_231 = ((l_1508 = (((safe_lshift_func_uint8_t_u_u(p_40, 6)) ^ ((safe_mod_func_int16_t_s_s((((g_186 = g_61.f0) > l_1495) < ((l_1514 ^ l_1509) || (l_1494 || ((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((l_1514 = ((safe_sub_func_uint16_t_u_u(g_1175, l_1495)) , ((0L && 0x28FDB2C8CDB2BD13LL) || g_47))), l_1452.f2)), g_136)) != 0xC5C5A88F01E0011CLL), 8L)) != l_1505)))), p_40)) <= 0UL)) < p_40)) , g_264);
                    }
                    l_1509 = (l_1494 = (l_1477 && (4294967288UL | (l_1422 , (safe_unary_minus_func_int32_t_s((((((l_1514 = (p_40 = l_1495)) , 0x2B3E7811C4521F40LL) == (l_1466 == g_298)) | (247UL | (g_186 = 0x5CL))) && 0x4BDB133AL)))))));
                    if (g_224)
                    {
                        unsigned l_1524 = 0UL;
                        g_231 = ((l_1514 = l_1524) == ((g_1525 != 0x9545L) || ((safe_add_func_uint64_t_u_u(((l_1376 = (+g_61.f1)) , (safe_rshift_func_uint8_t_u_s(l_1471, 0))), (safe_rshift_func_int16_t_s_s((l_1494 = l_1508), g_58.f2)))) ^ ((l_1538 = (((l_1537 = (safe_rshift_func_int16_t_s_u((g_224 <= (safe_add_func_int8_t_s_s((l_1536 && p_40), g_248))), p_40))) != g_61.f2) || 0x4EC152BBL)) <= p_40))));
                        l_1477 = (g_521 & l_1509);
                        return l_1539;
                    }
                    else
                    {
                        unsigned l_1542 = 7UL;
                        int l_1545 = (-10L);
                        l_1477 = (safe_add_func_int16_t_s_s((l_1542 >= (l_1494 = g_798)), (safe_mul_func_uint16_t_u_u(g_1386, l_1195))));
                        l_1545 = 9L;
                    }
                }
                else
                {
                    unsigned short l_1550 = 0x7EB1L;
                    unsigned char l_1567 = 0UL;
                    int l_1568 = 0xFD9F9D2CL;
                    if (((p_40 <= ((g_798 = p_40) , (safe_lshift_func_uint8_t_u_s((((l_1376 = (safe_add_func_uint8_t_u_u(0xEFL, ((((((((-1L) <= (l_1509 = 0xAD35932DD43B332BLL)) && (4UL != l_1550)) & l_1471) , (g_1175 > g_58.f1)) <= 0xF469L) , p_40) != g_1066)))) , l_1508) , p_40), 2)))) <= 2L))
                    {
                        int l_1551 = 1L;
                        l_1494 = ((p_40 & (l_1494 & (p_40 <= (l_1554 = ((l_1551 = g_76) && ((g_241 , 0UL) ^ (((((l_1472 & p_40) <= 0xACDBL) == 0UL) | 18446744073709551615UL) == g_716))))))) || 0xBBL);
                        l_1568 = (1UL != (safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((248UL <= (safe_unary_minus_func_uint8_t_u(l_1377))), ((((l_1560 || p_40) && (l_1459 >= (0x76424482L & (safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(((p_40 , (((safe_rshift_func_uint8_t_u_u(p_40, p_40)) , l_1567) != l_1479)) , g_362), g_186)), 13))))) , l_1551) > p_40))), g_1179.f1)));
                        g_75 = (l_1195 = ((g_61.f1 == g_10) & 4294967288UL));
                        if (l_1569)
                            break;
                    }
                    else
                    {
                        l_1494 = (safe_mul_func_uint8_t_u_u(l_1572, (safe_mod_func_uint8_t_u_u((p_40 & (((6L > ((l_1575 == (safe_unary_minus_func_uint16_t_u((4294967295UL > (0xC1C60898L && l_1577))))) && (safe_lshift_func_int16_t_s_u(((safe_mod_func_int8_t_s_s((l_1554 = (g_1582 , (p_40 == l_1478))), p_40)) > (-1L)), p_40)))) < p_40) & l_1477)), 5L))));
                        g_261 = (safe_add_func_uint32_t_u_u(l_1478, (safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((l_1508 = g_231), 12)), (safe_rshift_func_uint16_t_u_s(l_1591, 2))))));
                    }
                    l_1195 = (safe_add_func_int32_t_s_s((safe_add_func_int64_t_s_s(l_1568, l_1569)), g_146));
                }
                return g_58;
            }
            l_1376 = l_1479;
            return l_1452;
        }
        else
        {
            short l_1600 = 0x553EL;
            int l_1646 = 8L;
            int l_1647 = 5L;
            int l_1672 = 3L;
            unsigned char l_1704 = 0xD9L;
            l_1602 = ((((l_1376 = (p_40 >= (((((((-1L) || ((l_1195 = ((((g_290 | l_1577) != (safe_mod_func_uint8_t_u_u(((p_40 ^ p_40) && l_1539.f2), ((((g_1525 = (g_61.f2 != l_1600)) | 1L) , g_146) ^ l_1216)))) , 0x7F3DL) | g_89)) != p_40)) == g_1601) ^ l_1539.f0) > 0xBD54L) <= p_40) && g_1072))) , l_1600) & p_40) , l_1452.f1);
            for (g_224 = (-24); (g_224 <= (-23)); ++g_224)
            {
                unsigned l_1618 = 18446744073709551615UL;
                int l_1681 = 8L;
                int l_1725 = (-1L);
                if (p_40)
                    break;
                for (g_110 = (-23); (g_110 == (-21)); ++g_110)
                {
                    unsigned l_1619 = 18446744073709551609UL;
                    int l_1633 = 0x66A21D8EL;
                    union U0 l_1661 = {1UL};
                    if ((safe_lshift_func_int16_t_s_u((l_1478 = g_241), ((safe_mod_func_uint16_t_u_u(((l_1600 > ((0x934066A4L <= 0x107E163AL) , (g_58.f0 , p_40))) > ((safe_mod_func_uint64_t_u_u(p_40, l_1536)) <= 0x9EE84A2F7A81DE20LL)), g_110)) == p_40))))
                    {
                        l_1602 = g_61.f2;
                        if (p_40)
                            break;
                    }
                    else
                    {
                        long long l_1617 = 0x1A8F1E26F9A98D7ELL;
                        int l_1624 = 0L;
                        l_1509 = (((safe_add_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((g_47 = ((l_1618 = l_1617) & (p_40 , l_1619))), (-4L))), ((((safe_mul_func_uint16_t_u_u(l_1617, ((safe_rshift_func_int16_t_s_s((l_1624 , ((safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((p_40 ^ ((l_1478 = (safe_rshift_func_uint16_t_u_s(l_1478, 5))) | l_1619)), l_1376)), 0xD6L)) ^ l_1619)), g_76)) == 0x11C9L))) != 0xB1A9988644D553EBLL) >= p_40) | p_40))) <= p_40) <= p_40);
                        g_75 = ((l_1618 ^ p_40) != (safe_rshift_func_int8_t_s_s((l_1624 = (l_1618 && ((l_1633 = p_40) , (0x373F32A2L != p_40)))), (safe_lshift_func_int16_t_s_u((1UL <= p_40), 11)))));
                        l_1195 = (safe_add_func_uint64_t_u_u(p_40, ((g_1072 , (+0x44197048L)) , (safe_unary_minus_func_uint16_t_u((((safe_rshift_func_uint8_t_u_u((~g_1525), (g_1440 = (safe_add_func_uint8_t_u_u((l_1647 = (safe_mul_func_uint8_t_u_u(g_1127, (l_1646 = (g_146 = (4294967290UL <= (g_1175 < (l_1645 = l_1216)))))))), l_1216))))) , g_248) <= 0x38446CD393AB5A3BLL))))));
                    }
                    if (g_1148)
                    {
                        unsigned char l_1648 = 0xD0L;
                        unsigned short l_1651 = 1UL;
                        unsigned l_1660 = 18446744073709551614UL;
                        l_1648 = g_47;
                        g_261 = (g_61.f2 != (g_1582 && (safe_mod_func_uint64_t_u_u((l_1651 == (safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u((l_1633 = (safe_mod_func_int8_t_s_s(0xC3L, l_1660))), 12)), 7)), (p_40 || ((l_1602 = g_362) != (l_1619 ^ p_40)))))), 1L))));
                    }
                    else
                    {
                        l_1508 = p_40;
                        return l_1661;
                    }
                    for (l_1577 = (-3); (l_1577 == 6); l_1577++)
                    {
                        unsigned l_1664 = 0xBFAE6AF6L;
                        l_1664 = 0x24480F92L;
                        l_1195 = g_1179.f0;
                    }
                    l_1478 = l_1661.f2;
                }
                for (g_136 = (-23); (g_136 < (-26)); --g_136)
                {
                    short l_1667 = 0xD3ACL;
                    int l_1697 = 3L;
                    if ((((((l_1646 = ((0xD10609E3L & l_1667) && (l_1376 = ((safe_mul_func_int16_t_s_s((((safe_mod_func_int64_t_s_s(((g_58 , l_1539.f0) >= (l_1681 = (((((g_110 && l_1672) > (safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s(p_40, 1UL)), (safe_lshift_func_int8_t_s_s((g_1582 ^ g_1179.f1), 3)))), g_261))) >= 18446744073709551615UL) == p_40) <= p_40))), l_1422)) <= l_1618) <= g_1179.f2), 0x25B3L)) , g_61.f2)))) , l_1600) , l_1539.f1) , (-5L)) != 0x5C0014D8BC72B523LL))
                    {
                        unsigned l_1688 = 4294967288UL;
                        g_231 = (safe_add_func_int8_t_s_s((-8L), ((safe_rshift_func_int8_t_s_s((((-5L) <= (safe_mul_func_uint8_t_u_u(l_1688, (-7L)))) || (g_285 , ((safe_add_func_int8_t_s_s((((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint16_t_u_u(0xFD5CL, (p_40 || p_40))) , l_1667), l_1618)) , 0xD540L) <= p_40), 0x27L)) || g_61.f0))), p_40)) || l_1459)));
                        g_75 = (-6L);
                        g_231 = p_40;
                        g_231 = (g_61.f1 ^ g_73);
                    }
                    else
                    {
                        g_261 = ((l_1681 = (g_1080 != l_1667)) & (p_40 , (p_40 >= 0x6FL)));
                        l_1681 = p_40;
                    }
                    l_1697 = ((((l_1672 = g_61.f1) , ((l_1198 <= 1UL) & (((g_261 | g_145) && p_40) && p_40))) == (-5L)) || ((safe_mul_func_int8_t_s_s((l_1478 = ((l_1539 , g_716) <= l_1459)), (-8L))) & 250UL));
                    l_1195 = p_40;
                    l_1681 = ((safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(l_1647, (safe_rshift_func_uint8_t_u_u((l_1704 = g_1179.f2), 6)))), l_1602)) || g_186);
                }
                if (((p_40 != (g_1386 , ((l_1647 == ((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((1UL & (l_1725 = ((safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((!(safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(p_40, (g_716 = (safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(0xD0L, 7)), ((g_1179.f0 > (((l_1681 = (+p_40)) , ((((l_1509 = (p_40 >= p_40)) , p_40) ^ 0L) <= p_40)) != p_40)) || (-1L)))) != 4L), g_716)), 0xC27852B0L))))), g_1601))) | 1L), p_40)), p_40)) || 18446744073709551615UL))), 1L)), p_40)) > p_40)) && 0x5B26214AL))) <= p_40))
                {
                    l_1646 = l_1725;
                    l_1672 = p_40;
                }
                else
                {
                    l_1647 = g_136;
                    l_1672 = (g_75 = (l_1376 = ((g_1175 = ((((safe_add_func_uint32_t_u_u(((l_1647 = ((safe_lshift_func_int8_t_s_u(g_1179.f0, 4)) , g_1179.f2)) == (safe_lshift_func_int16_t_s_s(p_40, 15))), (l_1681 != (g_49 = 0L)))) & (g_58.f1 , 0x98B0L)) , (p_40 ^ g_1066)) , g_224)) && l_1645)));
                    l_1508 = p_40;
                    g_261 = ((g_32 | (g_1148 , ((safe_unary_minus_func_uint16_t_u(l_1725)) < g_1179.f2))) <= ((~(g_1080 > ((safe_add_func_uint64_t_u_u((g_1175 = (((p_40 && (l_1681 = g_75)) | (g_241 <= ((safe_lshift_func_uint8_t_u_s((g_73 = (g_76 , 1UL)), 0)) > p_40))) & l_1725)), g_362)) , p_40))) || 0x4002L));
                }
            }
        }
        for (l_1452.f1 = 0; (l_1452.f1 <= 1); l_1452.f1++)
        {
            short l_1739 = 0x22A4L;
            l_1739 = p_40;
            for (g_241 = 0; (g_241 > (-4)); g_241 = safe_sub_func_int16_t_s_s(g_241, 1))
            {
                int l_1748 = 0x43327740L;
                for (g_110 = 16; (g_110 >= 11); g_110 = safe_sub_func_uint64_t_u_u(g_110, 9))
                {
                    int l_1744 = 0x5C9552CAL;
                    l_1478 = l_1744;
                }
                l_1509 = (l_1748 = (g_1582 , (l_1745 >= (l_1216 & (safe_rshift_func_int16_t_s_s(p_40, 6))))));
            }
        }
    }
    else
    {
        return l_1452;
    }
    return l_1452;
}







static unsigned func_42(long long p_43, unsigned char p_44)
{
    int l_62 = (-9L);
    int l_1169 = 0x7874B1A5L;
    int l_1170 = 0xC5AFAA56L;
    int l_1171 = 0x117CD219L;
    union U0 l_1172 = {0x05D3843BL};
    unsigned char l_1176 = 0x58L;
    g_49 = g_10;
    l_1171 = (safe_mul_func_uint8_t_u_u((l_1170 = (l_62 = ((safe_rshift_func_uint8_t_u_s((((func_54(g_58, ((((safe_lshift_func_int16_t_s_s(p_44, 5)) , (g_61 = g_58)) , g_47) ^ l_62), g_47) , g_264) | ((l_1169 = (safe_sub_func_uint8_t_u_u((p_43 == g_1072), l_62))) <= 0x366874404C1C3AD6LL)) | g_32), 4)) , 0x3FL))), 0x82L));
    if ((func_54(l_1172, (safe_add_func_uint64_t_u_u((g_1175 = l_1171), g_1148)), p_44) , func_54(l_1172, ((g_521 = p_43) & ((l_62 = p_43) , l_1176)), g_298)))
    {
        l_1170 = 0xE444D922L;
    }
    else
    {
        short l_1177 = (-4L);
        int l_1178 = 0x6935EC4EL;
        char l_1180 = 1L;
        int l_1181 = 0x825F36D9L;
        l_62 = (((l_1170 = p_44) >= (l_1178 = (l_1177 && func_54(g_58, g_110, p_44)))) > (g_1179 , (l_1181 = l_1180)));
        for (p_43 = 0; (p_43 > (-4)); p_43 = safe_sub_func_uint32_t_u_u(p_43, 1))
        {
            if (l_62)
                break;
        }
        return p_44;
    }
    l_1170 = (p_43 , (251UL != ((l_62 = (l_1171 = (func_54(l_1172, (safe_unary_minus_func_uint64_t_u((l_1169 = l_1172.f0))), (safe_mod_func_int8_t_s_s(l_1172.f2, l_1171))) >= (p_44 || (safe_sub_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s(((safe_mod_func_uint64_t_u_u(((p_43 || g_32) == p_44), (-8L))) | l_1176), l_1170)), g_32)), l_62)))))) == 0xA19D7569L)));
    return g_1179.f1;
}







static unsigned long long func_54(union U0 p_55, int p_56, int p_57)
{
    short l_63 = 0x071CL;
    int l_64 = 0x90F6DAE1L;
    char l_250 = (-1L);
    union U0 l_253 = {0UL};
    long long l_297 = 1L;
    long long l_344 = (-2L);
    int l_376 = 0xCC2C11AEL;
    int l_377 = 2L;
    unsigned char l_511 = 249UL;
    long long l_621 = 3L;
    unsigned long long l_651 = 18446744073709551615UL;
    long long l_677 = 0xD548A9DC16A3E06BLL;
    unsigned long long l_745 = 18446744073709551615UL;
    unsigned short l_797 = 1UL;
    unsigned char l_851 = 0x75L;
    unsigned l_859 = 18446744073709551606UL;
    short l_922 = 0x8CE2L;
    int l_1008 = 0xE2DA93EDL;
    short l_1013 = 3L;
    char l_1034 = 0xE7L;
    int l_1071 = 0x1675769FL;
    l_64 = (l_63 = p_57);
    if (((safe_mod_func_uint32_t_u_u(g_58.f2, (0x54C3DC4D7E3C2391LL & (safe_lshift_func_int16_t_s_u(l_63, p_55.f0))))) | ((safe_mod_func_int64_t_s_s(p_55.f1, g_47)) & g_10)))
    {
        short l_91 = 0xBD03L;
        int l_139 = 0x6A3D77AEL;
        int l_161 = 0x9F7D83A0L;
        int l_163 = 0xB0CC679CL;
        unsigned l_204 = 18446744073709551615UL;
        int l_249 = 0L;
        union U0 l_367 = {0UL};
        unsigned l_488 = 6UL;
        int l_510 = 6L;
        unsigned long long l_541 = 0x37F951FFD2F6792ELL;
        if (p_55.f1)
        {
            int l_74 = 1L;
            unsigned l_88 = 0xCCCE42BFL;
            int l_227 = 1L;
            for (p_55.f2 = 27; (p_55.f2 <= 26); p_55.f2 = safe_sub_func_uint8_t_u_u(p_55.f2, 1))
            {
                short l_111 = 2L;
                g_76 = (p_55 , (g_75 = (l_74 = (g_73 = p_55.f0))));
                if (g_58.f2)
                {
                    int l_79 = 0L;
                    int l_90 = (-6L);
                    p_56 = ((safe_mul_func_int8_t_s_s((l_79 = (l_74 & p_55.f0)), (safe_sub_func_int64_t_s_s((((safe_add_func_int32_t_s_s(((safe_add_func_uint64_t_u_u(0xA2283564F69674B1LL, ((g_61 , g_61.f1) == (safe_add_func_int16_t_s_s(p_56, (g_89 = l_88)))))) & p_55.f2), ((((g_49 < p_57) , l_90) , g_73) > 1L))) ^ 0x2536DE7EL) , (-1L)), g_76)))) <= l_91);
                    for (l_79 = 13; (l_79 <= 23); l_79 = safe_add_func_uint8_t_u_u(l_79, 1))
                    {
                        unsigned char l_112 = 0xDEL;
                        l_112 = ((g_49 = (((safe_mul_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((p_55.f0 || ((p_55.f0 > (~(((p_57 , (((g_110 = (safe_lshift_func_int8_t_s_s(((((safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s(g_75, ((safe_lshift_func_int8_t_s_u(((((g_47 = g_89) & 0x96A127326B30262ALL) < (safe_rshift_func_uint8_t_u_u(((g_58.f2 ^ 0xE6F95D92507BCD5ALL) & p_57), p_56))) , 0x90L), 7)) > g_58.f2))), g_58.f1)) & p_56) && p_55.f0) ^ 0L), l_91))) == 0L) || g_61.f1)) || g_49) , 8UL))) , 0xD58FL)), p_55.f2)) > l_64), g_10)) , l_111) < p_55.f1)) >= l_90);
                    }
                }
                else
                {
                    l_64 = (~(safe_add_func_uint32_t_u_u(0xE3F132C5L, ((((((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint64_t_u((l_91 != (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u((p_55.f0 ^ 4294967295UL), (((safe_sub_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((g_76 = l_64), 7)) <= ((((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(0x3281L, g_89)), (safe_lshift_func_uint8_t_u_s(((safe_mod_func_int8_t_s_s(l_91, g_58.f1)) & (-3L)), 2)))) || p_55.f1) , 4294967288UL) , g_58.f1)), 0xBD0CL)) > 1UL) <= 1UL))), p_55.f0)), 4))))), g_110)) , p_57) | p_55.f0) , l_91) , l_111) >= 0x7B59BB015C768A6ALL))));
                    g_136 = (g_75 = 0xAA56D442L);
                    l_139 = (safe_lshift_func_uint8_t_u_s(l_64, 5));
                }
                g_75 = ((0x29AA74C462F11252LL <= (safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(g_61.f1, 5)) < g_61.f2), (g_144 = (~g_58.f1))))) < (l_139 < (0x9EBFL | (g_145 = ((l_111 >= p_55.f2) || p_55.f2)))));
                g_75 = (l_91 ^ (g_146 = (0x2091L & l_88)));
            }
            l_139 = (p_57 = g_73);
            for (l_139 = 2; (l_139 == (-2)); --l_139)
            {
                unsigned long long l_182 = 6UL;
                int l_221 = 0xF74BF00CL;
                if ((l_64 , g_146))
                {
                    int l_162 = 0L;
                    int l_187 = 0xFEEA2D53L;
                    l_163 = (((~(safe_mul_func_uint16_t_u_u(g_10, g_110))) != (0xA7L != g_73)) < (safe_add_func_int16_t_s_s((l_161 = (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((g_75 , (p_57 = (safe_rshift_func_uint16_t_u_s((((-5L) < (g_110 >= l_74)) || ((safe_sub_func_uint64_t_u_u(g_61.f1, l_64)) || p_56)), 7)))) != g_58.f1), g_76)), g_146))), l_162)));
                    for (g_136 = 0; (g_136 < 24); ++g_136)
                    {
                        return g_32;
                    }
                    for (l_91 = 0; (l_91 >= (-19)); l_91--)
                    {
                        int l_185 = 9L;
                        g_75 = ((safe_lshift_func_int8_t_s_s((l_162 && l_139), (g_49 = ((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(p_55.f0, 5)), 1UL)) == g_76)))) == (((((g_186 = ((1L && ((safe_add_func_int32_t_s_s((((((safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((((safe_mul_func_int16_t_s_s((((l_182 , 0xDCD2DC6FEDBD1561LL) > ((safe_mod_func_int8_t_s_s(l_162, p_56)) || p_56)) , g_146), p_57)) == p_55.f1) ^ 0xFBE9L), 0)), p_55.f2)) ^ g_61.f1) , l_185) < p_56) && 0xD0L), g_47)) | p_55.f1)) > (-7L))) == p_56) | g_146) ^ p_55.f2) || p_55.f1));
                        g_75 = 0L;
                        l_187 = (g_76 >= p_55.f2);
                    }
                    if ((safe_rshift_func_uint16_t_u_u(((g_75 && (((safe_add_func_int8_t_s_s((l_163 = ((l_187 , l_162) ^ 0xC1E94944L)), g_75)) | (safe_lshift_func_uint8_t_u_s(g_58.f0, (g_61.f0 && g_89)))) >= (l_182 ^ l_182))) <= 0x110C5E2DL), g_110)))
                    {
                        l_187 = (safe_add_func_uint8_t_u_u((0x76L != (safe_sub_func_int32_t_s_s((-6L), ((safe_lshift_func_int8_t_s_u(g_186, (p_55.f2 <= (g_58.f2 < ((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((l_204 = (!p_55.f2)) != g_61.f0), ((l_163 ^ l_161) , 0L))), 0xA113A258L)) != 1UL))))) == 1L)))), 0x29L));
                        g_75 = (-1L);
                    }
                    else
                    {
                        return g_58.f0;
                    }
                }
                else
                {
                    p_57 = (0x87A3L >= ((0x15L > ((safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(g_136, 6)) || (safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(65528UL, ((safe_rshift_func_int16_t_s_s(g_73, ((((((safe_add_func_int64_t_s_s((l_74 >= p_55.f2), g_61.f2)) == (l_182 < l_163)) | l_163) ^ l_63) ^ p_57) <= g_76))) ^ 0x3D10L))) , p_56), 0UL))), g_47)), 7)) , l_182)) == g_73));
                    l_221 = g_73;
                    for (g_75 = 1; (g_75 != 17); g_75 = safe_add_func_uint8_t_u_u(g_75, 9))
                    {
                        g_224 = g_145;
                        l_64 = (g_224 <= g_110);
                        return p_57;
                    }
                    for (g_110 = 0; (g_110 == 19); g_110++)
                    {
                        unsigned short l_228 = 0UL;
                        g_75 = p_55.f1;
                        g_75 = (((l_227 = p_56) != (((g_144 >= g_110) , p_55.f2) || (l_228 <= (~(g_61.f1 , (safe_add_func_int8_t_s_s(((g_231 = (-1L)) || p_55.f2), 0xF0L))))))) | g_58.f2);
                        g_75 = ((+(safe_lshift_func_uint8_t_u_u((p_56 ^ ((safe_mod_func_uint16_t_u_u((~((l_182 , l_204) & g_136)), (l_221 = (safe_unary_minus_func_uint8_t_u(g_75))))) != 0UL)), l_139))) >= (0xB0L ^ (((g_241 = ((safe_mod_func_uint64_t_u_u(l_182, p_57)) & 65529UL)) < g_10) | l_182)));
                    }
                }
            }
        }
        else
        {
            short l_256 = 0x36BAL;
            int l_359 = 1L;
            int l_363 = 0x3E6207B4L;
            long long l_364 = (-1L);
            unsigned l_451 = 0xA81AF41BL;
            int l_493 = 0x505BFE8EL;
            if ((1L || (g_10 >= (p_55.f1 & (safe_rshift_func_int16_t_s_u((+((l_139 , p_55.f2) , (safe_sub_func_uint64_t_u_u((((g_136 = (l_250 = (safe_rshift_func_uint16_t_u_u(((1L && g_248) != l_249), 12)))) <= (l_63 <= 2UL)) != g_76), g_10)))), p_56))))))
            {
                long long l_259 = 0L;
                int l_260 = (-1L);
                g_75 = ((safe_lshift_func_uint8_t_u_u((l_253 , g_58.f0), 7)) >= (g_76 = g_10));
                if (p_56)
                {
                    unsigned l_267 = 0xB6F5C222L;
                    p_56 = (((safe_mod_func_int8_t_s_s((l_256 , ((safe_add_func_int64_t_s_s(((l_259 , (g_261 = (l_260 = g_231))) , g_144), 0x1511DFD7D1BF06ACLL)) == (l_256 , (l_256 > (0x4629L < (g_264 = (safe_sub_func_int8_t_s_s(((g_76 > p_55.f1) <= 0x68F206085BB838FALL), l_139)))))))), g_73)) , p_55.f0) < p_57);
                    for (g_58.f0 = 4; (g_58.f0 <= 5); ++g_58.f0)
                    {
                        unsigned l_282 = 0xB4231400L;
                        p_57 = ((((p_56 = l_259) , ((p_56 && g_145) > l_267)) , l_256) > p_55.f1);
                        if (g_58.f0)
                            continue;
                        l_161 = (g_75 = ((safe_add_func_uint64_t_u_u(l_161, (safe_sub_func_int8_t_s_s((0x8F4AL == p_55.f1), (l_63 ^ p_55.f1))))) ^ (((0x2F4EL & (g_73 , (((safe_sub_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(l_267, (safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s(p_57, 6L)), g_241)))), l_256)), p_56)) < l_282) == l_253.f2))) , g_89) & p_55.f1)));
                        if (g_75)
                            break;
                    }
                    l_139 = (g_61.f0 && ((safe_lshift_func_uint8_t_u_s(((p_55.f0 && (g_285 = g_186)) || (p_56 | 1UL)), 4)) >= 0x72L));
                }
                else
                {
                    char l_293 = 9L;
                    int l_296 = (-1L);
                    l_64 = 0x2DE5E56CL;
                    p_57 = ((safe_sub_func_int64_t_s_s(((((p_55.f1 == ((g_298 = (p_57 , ((safe_add_func_uint32_t_u_u((l_91 || ((p_56 , (g_290 = 4294967290UL)) > (l_64 = l_64))), ((safe_add_func_uint8_t_u_u((l_296 = (((l_293 && g_261) && (safe_mul_func_int8_t_s_s(g_224, g_231))) >= l_260)), 0UL)) | l_297))) < g_145))) >= p_56)) >= (-8L)) > l_260) | 0xD46EL), l_250)) , p_55.f0);
                }
                if (((((g_58.f2 ^ g_32) , (safe_add_func_int32_t_s_s((safe_unary_minus_func_int8_t_s((safe_add_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(((l_250 | 0x4C5EL) & (0x1F6DF76FED91531CLL != g_76)))), g_290)))), (((l_64 = g_58.f2) , g_49) , g_73)))) ^ p_55.f1) >= g_76))
                {
                    g_261 = g_231;
                    g_261 = (safe_mod_func_int64_t_s_s((g_89 = (l_260 = l_161)), g_32));
                    return p_55.f1;
                }
                else
                {
                    unsigned char l_317 = 0xC6L;
                    int l_365 = 0x28BA4243L;
                    int l_366 = 0xA41384D2L;
                    p_56 = ((g_298 && (safe_rshift_func_uint8_t_u_u(((g_58.f1 = (safe_rshift_func_uint16_t_u_s((((safe_sub_func_uint64_t_u_u(l_253.f1, ((0xD7709794L || ((l_253.f1 , p_55.f1) | (((~(safe_mod_func_uint8_t_u_u(p_55.f2, (p_55.f1 & l_317)))) == g_32) >= 0x94L))) != (-7L)))) && g_61.f2) < p_55.f1), 2))) , p_56), 7))) | g_75);
                    for (g_224 = (-30); (g_224 <= (-16)); g_224 = safe_add_func_int32_t_s_s(g_224, 9))
                    {
                        unsigned short l_326 = 0UL;
                        int l_357 = 0x37F6ACF3L;
                        int l_358 = (-1L);
                        l_139 = (p_56 = (((safe_sub_func_int64_t_s_s(l_260, ((+(safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(l_326, ((safe_rshift_func_uint8_t_u_u((g_146 = (g_73 = l_260)), 3)) & ((g_248 != ((safe_sub_func_int64_t_s_s(((safe_sub_func_int64_t_s_s(g_144, (g_47 >= g_61.f1))) && (safe_rshift_func_int16_t_s_s(((18446744073709551607UL || g_75) > 247UL), p_56))), g_89)) ^ 1L)) && p_55.f2)))), 11))) >= 1UL))) , g_145) < l_317));
                        g_75 = (safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(p_55.f1, ((safe_mul_func_uint8_t_u_u((0xEB3F9A5F5D61C98CLL == (g_341 = g_145)), (safe_rshift_func_int8_t_s_s(l_344, 3)))) ^ (safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(p_55.f0, 15)) == (l_163 && 250UL)), (safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(255UL, (l_317 | p_55.f2))), 5))))))) > l_317), 1));
                        l_161 = p_55.f1;
                        l_260 = (safe_lshift_func_int8_t_s_s(1L, ((safe_rshift_func_int8_t_s_u((((((!(((l_359 = (((l_357 & p_57) && (p_56 , p_55.f1)) , (l_358 = g_224))) || l_317) , p_55.f2)) & (((((safe_mod_func_uint32_t_u_u(g_10, 0x99EB9F4AL)) >= p_55.f0) | g_49) ^ g_61.f2) >= 255UL)) <= p_55.f1) , l_259) >= p_57), 5)) , 0L)));
                    }
                    g_261 = (g_362 && ((l_363 = ((l_359 = p_55.f0) != 255UL)) > p_56));
                    l_366 = ((-7L) || (l_365 = l_364));
                }
            }
            else
            {
                g_261 = ((l_250 ^ g_58.f1) != (-1L));
                l_64 = g_146;
                p_57 = 0x99E6D188L;
            }
            if ((((((p_56 >= p_55.f2) ^ (l_344 <= p_55.f1)) , (l_377 = (l_367 , (safe_mod_func_uint64_t_u_u(g_76, ((safe_rshift_func_uint16_t_u_s(p_55.f2, 13)) , (safe_sub_func_uint64_t_u_u(((l_64 = g_75) <= (safe_add_func_uint64_t_u_u((l_376 = (p_57 == 0UL)), 0xC4E963F5E78A2021LL))), 1L)))))))) > g_298) >= 8UL))
            {
                g_261 = 0L;
            }
            else
            {
                unsigned long long l_399 = 0x2508654093352466LL;
                l_64 = (safe_add_func_int64_t_s_s(p_55.f2, (((safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(g_241, g_61.f1)) != g_261), (safe_unary_minus_func_uint32_t_u((((g_75 ^ p_56) < 4L) >= 0L))))) == (safe_rshift_func_uint16_t_u_s(0xC5AEL, 0))) , 0x0436ECE72C066E18LL)));
                l_359 = (l_163 = ((safe_lshift_func_int16_t_s_u(g_75, ((l_377 = p_55.f2) <= ((l_363 = (g_110 = (g_47 , (0xFCL ^ (safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((p_56 <= (l_161 = (1L | (g_144 >= (((p_57 = (!p_55.f2)) & ((((safe_rshift_func_uint8_t_u_s(0x6DL, 0)) > 0x9143L) && l_399) == p_55.f2)) , 0x8C41L))))), g_285)) < g_61.f0), p_55.f2)), l_364)))))) || l_399)))) <= 0xB2L));
            }
            for (g_58.f2 = (-14); (g_58.f2 >= 16); ++g_58.f2)
            {
                unsigned char l_415 = 255UL;
                char l_440 = 0L;
                p_57 = (g_241 && (p_57 >= ((safe_unary_minus_func_uint64_t_u((g_416 = ((((g_146 || (safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((p_56 == ((l_139 = (safe_lshift_func_int8_t_s_s(g_144, l_364))) && g_58.f0)), (!l_364))), 5)) <= (((safe_mul_func_int16_t_s_s((((~l_415) && 0x7613CF3447AFBABFLL) < 0xECBCL), l_415)) ^ l_344) ^ l_344)), 0x46B8L)), 0x1A0A197FL))) > 1UL) ^ l_364) != 0x6C397C8AL)))) & g_231)));
                for (p_57 = (-1); (p_57 > 13); p_57 = safe_add_func_uint16_t_u_u(p_57, 8))
                {
                    unsigned char l_421 = 1UL;
                    int l_453 = 1L;
                    int l_474 = 0x83514E3EL;
                    int l_475 = 6L;
                    if ((safe_add_func_uint32_t_u_u((p_57 > g_47), p_57)))
                    {
                        l_64 = 0xA1205C9CL;
                        if (l_421)
                            continue;
                        p_56 = (!(p_57 , (safe_sub_func_uint32_t_u_u(((g_241 && (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((g_58.f0 == p_57), 2)), p_55.f2))) , ((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(l_256, l_377)), p_55.f1)) , (!l_163))), p_56))));
                        g_231 = 5L;
                    }
                    else
                    {
                        unsigned long long l_443 = 0x1FEE5F72F857729BLL;
                        int l_448 = 6L;
                        unsigned long long l_452 = 18446744073709551615UL;
                        p_56 = (safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(p_57, (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((((l_161 = (l_440 , l_359)) ^ (l_453 = ((safe_mod_func_int16_t_s_s(l_443, (safe_rshift_func_uint8_t_u_s((+(+(p_55.f0 | 0UL))), ((safe_mul_func_int16_t_s_s((l_256 || (l_448 >= (safe_rshift_func_uint8_t_u_u(l_451, 2)))), p_55.f1)) ^ l_452))))) , l_253.f1))) <= p_55.f0), 6)), 7)))), l_363));
                    }
                    l_139 = ((safe_sub_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(((0xDA2C610DL < p_55.f1) <= (l_161 <= ((p_56 & (!248UL)) > p_55.f1))), p_56)), (safe_lshift_func_uint16_t_u_u(p_57, (safe_mul_func_uint16_t_u_u(l_453, p_55.f0)))))) & g_61.f0);
                    l_475 = ((l_415 >= (safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(p_55.f2, (l_363 = ((g_58.f1 >= (safe_sub_func_int32_t_s_s((((p_56 && (safe_add_func_int16_t_s_s(0x97A7L, (l_376 = (l_474 = (+(safe_mul_func_uint8_t_u_u((l_421 || (safe_unary_minus_func_uint16_t_u((l_453 = (safe_unary_minus_func_int16_t_s(l_440)))))), ((p_55.f1 , (g_58.f2 < g_285)) == l_451))))))))) ^ p_57) | 0x19782B84L), g_285))) && l_421)))), g_75))) != g_136);
                    l_359 = (~(0x409FL == p_55.f1));
                }
                p_57 = (((safe_mul_func_int16_t_s_s(l_367.f0, ((l_440 >= p_55.f0) != (0x32AEL <= p_57)))) , p_56) , (0x64F34E5C464219A5LL == (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(g_136, 1)), 8))));
            }
            for (l_364 = 13; (l_364 > (-11)); l_364 = safe_sub_func_uint8_t_u_u(l_364, 3))
            {
                g_231 = (g_298 >= ((g_264 | l_367.f2) | (safe_sub_func_int64_t_s_s((p_55.f2 <= (safe_mul_func_int8_t_s_s((l_488 < l_367.f2), (((p_55.f1 && (((l_488 ^ ((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s((l_253.f0 < g_341), l_364)), 0xF11AL)) < p_55.f1)) && l_493) , g_47)) >= 0x45230432L) >= g_61.f0)))), p_55.f0))));
            }
        }
        g_231 = (((safe_sub_func_int32_t_s_s((((l_163 <= (safe_add_func_uint8_t_u_u(1UL, (((l_376 = ((safe_rshift_func_int16_t_s_u((l_511 = (safe_mul_func_int16_t_s_s((((safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(65535UL, (p_56 >= (p_55.f1 != ((l_377 = (g_76 = l_204)) || (g_73 = g_298)))))), (safe_rshift_func_uint8_t_u_u(g_47, (l_488 , g_89))))), l_510)) <= g_47) >= 2L), p_55.f2))), 1)) > 1UL)) < g_75) ^ p_55.f2)))) , 0x87L) > l_63), p_55.f0)) , l_91) > g_49);
        for (p_55.f1 = 5; (p_55.f1 < 46); p_55.f1 = safe_add_func_uint64_t_u_u(p_55.f1, 4))
        {
            unsigned l_536 = 8UL;
            for (g_248 = (-14); (g_248 <= 11); g_248 = safe_add_func_uint16_t_u_u(g_248, 1))
            {
                short l_516 = 0x14CAL;
                p_57 = (l_516 ^ (safe_sub_func_int8_t_s_s(((safe_sub_func_int64_t_s_s(g_76, g_521)) >= 0xEBEEA759B0F3FEBDLL), g_61.f1)));
                for (g_290 = 2; (g_290 < 15); g_290++)
                {
                    p_56 = 1L;
                    return g_248;
                }
                g_231 = (l_376 = (((safe_mul_func_int16_t_s_s((g_285 = (safe_sub_func_uint32_t_u_u(((((0L ^ p_55.f1) != p_55.f2) != ((safe_sub_func_uint32_t_u_u(l_516, 4294967293UL)) > (p_56 , (safe_sub_func_int64_t_s_s((safe_mod_func_int16_t_s_s((safe_add_func_uint64_t_u_u((((l_163 = l_536) , ((safe_lshift_func_int8_t_s_u(((!((safe_mod_func_uint32_t_u_u((l_536 || ((l_64 = (l_163 >= g_136)) , g_285)), 0xF014C9FEL)) == l_536)) & g_298), l_536)) != l_541)) > p_55.f1), (-1L))), g_73)), l_249))))) ^ l_377), p_55.f0))), l_376)) & 0UL) >= 18446744073709551610UL));
            }
            if (l_536)
            {
                unsigned long long l_550 = 18446744073709551615UL;
                int l_555 = 0xB5062E54L;
                if ((safe_rshift_func_int16_t_s_u((g_264 = (((!(safe_rshift_func_uint8_t_u_u(g_416, p_55.f0))) && (safe_mul_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_u((l_550 = l_510), 1)) == ((safe_add_func_uint64_t_u_u((((safe_mul_func_uint8_t_u_u((p_57 & l_555), g_298)) == ((!((((g_285 > ((((safe_mul_func_int16_t_s_s((((g_341 = l_253.f1) >= l_253.f1) | 0xE1L), p_55.f2)) , (-4L)) || p_55.f0) | l_536)) | g_58.f2) || l_376) && g_61.f0)) >= 3UL)) , 0xE3F1211D8B410406LL), g_186)) , 0xE28E93201184098ELL)) != g_144), 0x5F72L))) < p_55.f0)), g_416)))
                {
                    if (g_285)
                        break;
                    p_56 = 0x33D65060L;
                    for (l_250 = 22; (l_250 > (-3)); l_250 = safe_sub_func_uint16_t_u_u(l_250, 8))
                    {
                        unsigned long long l_564 = 18446744073709551612UL;
                        l_555 = (p_57 = ((g_76 = ((safe_sub_func_int32_t_s_s(l_536, (((((safe_add_func_uint32_t_u_u((l_550 && (0x87A49A58F885F798LL > (8L > (l_564 >= l_377)))), p_57)) < 2L) <= g_144) , l_510) <= 8L))) & p_56)) && g_290));
                        p_56 = g_110;
                        l_64 = (l_204 , p_55.f2);
                    }
                }
                else
                {
                    int l_567 = 1L;
                    int l_568 = 0L;
                    p_57 = p_55.f0;
                    g_231 = g_136;
                    l_568 = (safe_rshift_func_uint8_t_u_u(l_567, 1));
                    if (p_55.f0)
                        break;
                }
                g_261 = (safe_mod_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(l_536, 2)), p_57));
                p_56 = (safe_rshift_func_uint16_t_u_s(g_110, 2));
            }
            else
            {
                long long l_577 = 1L;
                int l_589 = (-9L);
                for (l_510 = (-6); (l_510 >= (-9)); l_510--)
                {
                    g_75 = l_577;
                    for (l_297 = 0; (l_297 < 22); l_297++)
                    {
                        g_75 = (safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u((p_55.f0 > 6UL))), (g_186 , ((safe_sub_func_int64_t_s_s(p_55.f0, (0x26L == (safe_add_func_uint16_t_u_u((l_367.f0 , g_61.f2), ((((3L <= ((((safe_add_func_uint64_t_u_u(g_47, g_264)) == p_56) , (-1L)) , g_144)) >= p_57) != p_55.f2) < g_110)))))) != 0UL))));
                    }
                    l_589 = g_32;
                }
                l_139 = 1L;
                if (l_536)
                    break;
            }
            for (l_367.f0 = 0; (l_367.f0 <= 47); l_367.f0 = safe_add_func_uint32_t_u_u(l_367.f0, 4))
            {
                g_231 = (safe_unary_minus_func_uint32_t_u(0UL));
                if (l_536)
                    break;
            }
        }
        return p_57;
    }
    else
    {
        char l_593 = 0x03L;
        union U0 l_613 = {2UL};
        unsigned short l_671 = 0UL;
        int l_672 = 1L;
        int l_759 = (-9L);
        unsigned l_777 = 4294967295UL;
        if (l_593)
        {
            unsigned short l_603 = 0x300DL;
            unsigned long long l_608 = 0xD1E963A6868F39C9LL;
            g_261 = (safe_sub_func_uint32_t_u_u((g_58.f0 < (safe_add_func_int64_t_s_s((g_136 , (!p_55.f0)), 18446744073709551615UL))), g_285));
            for (p_57 = 0; (p_57 < 25); p_57++)
            {
                long long l_600 = (-4L);
                return l_600;
            }
            p_56 = (((l_377 = p_56) > (((l_64 = ((safe_lshift_func_int8_t_s_u((~l_603), l_593)) | (((safe_sub_func_uint8_t_u_u(l_608, (safe_mul_func_uint8_t_u_u(g_73, g_231)))) && (g_224 > g_73)) == (safe_lshift_func_uint16_t_u_s(((l_613 = (p_55 = g_58)) , 1UL), g_47))))) < 1L) >= g_10)) , l_608);
        }
        else
        {
            union U0 l_614 = {18446744073709551615UL};
            int l_633 = 0x14E0AD6DL;
            int l_710 = (-1L);
            unsigned l_732 = 0x2C455BB3L;
            if (((l_253 = l_614) , ((((g_58.f0 & (g_290 <= (g_290 <= (+((safe_sub_func_int64_t_s_s((l_613.f0 , 4L), ((safe_mod_func_uint64_t_u_u((~((safe_sub_func_uint16_t_u_u((l_613.f2 , 1UL), g_186)) , 1UL)), l_621)) == 0x46A3FA14L))) || g_362))))) && p_55.f0) > 0xCFE7A89DL) | g_49)))
            {
                unsigned l_629 = 1UL;
                int l_644 = 8L;
                g_231 = 2L;
                if ((safe_rshift_func_int8_t_s_s(((250UL & g_261) == l_614.f1), ((((safe_unary_minus_func_uint8_t_u(((safe_rshift_func_int16_t_s_u(((l_614.f0 , (g_224 = g_32)) , g_521), 1)) , (l_297 <= (safe_add_func_uint16_t_u_u(p_55.f0, ((p_56 == l_629) ^ p_57))))))) || 2UL) || g_231) <= l_613.f0))))
                {
                    int l_642 = (-1L);
                    if ((p_57 = ((safe_unary_minus_func_uint8_t_u((l_633 = (p_55.f2 , (safe_mod_func_int32_t_s_s((l_344 , (g_10 || g_58.f0)), 1L)))))) & l_629)))
                    {
                        g_75 = (g_231 = l_629);
                        g_75 = (l_376 & ((safe_mod_func_int64_t_s_s(l_629, (safe_rshift_func_int16_t_s_u((l_64 = 0x5A80L), p_56)))) && (safe_sub_func_int32_t_s_s(p_57, (safe_mod_func_int32_t_s_s(l_642, p_56))))));
                    }
                    else
                    {
                        unsigned short l_643 = 0UL;
                        p_56 = ((l_644 = l_643) && g_75);
                    }
                    g_231 = (safe_mod_func_int64_t_s_s(g_58.f1, p_55.f2));
                    if ((safe_mul_func_uint16_t_u_u(g_231, g_61.f0)))
                    {
                        p_57 = p_55.f2;
                        p_56 = l_644;
                        p_56 = l_642;
                        l_651 = (l_614.f2 ^ ((safe_add_func_int32_t_s_s((-1L), g_61.f1)) & g_264));
                    }
                    else
                    {
                        int l_670 = 0xE5FB4109L;
                        g_261 = g_32;
                        l_671 = (safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s(g_241, (safe_mul_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(0xE6L, 6)), 0xF9L)) | (safe_mul_func_int16_t_s_s(0xC250L, (safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(4294967290UL, p_57)), (((l_614.f0 && (safe_add_func_uint16_t_u_u((((g_89 >= ((l_670 , 65527UL) | p_55.f0)) & 8UL) , g_248), 0x0535L))) != p_56) < p_57)))))) < p_55.f2), l_64)))), 0x8AA8F1E1L));
                    }
                    if (l_629)
                    {
                        l_672 = g_58.f2;
                    }
                    else
                    {
                        g_231 = l_642;
                    }
                }
                else
                {
                    long long l_686 = 0x5250DB643D52DF60LL;
                    int l_692 = (-6L);
                    int l_699 = 4L;
                    short l_706 = 0L;
                    for (l_614.f2 = 22; (l_614.f2 <= 58); l_614.f2 = safe_add_func_int8_t_s_s(l_614.f2, 3))
                    {
                        unsigned l_691 = 1UL;
                        int l_693 = (-2L);
                        int l_698 = 4L;
                        l_672 = (safe_sub_func_uint8_t_u_u(((p_55.f0 | (l_64 = l_677)) || 0x7BF2L), ((safe_mul_func_uint8_t_u_u(((p_57 || ((safe_add_func_uint8_t_u_u((g_146 = l_677), g_76)) == (safe_add_func_int64_t_s_s(((l_376 = ((0L != p_57) & g_58.f0)) <= p_56), l_614.f2)))) <= 0xAA3BL), l_614.f0)) , 251UL)));
                        l_699 = ((l_698 = ((((g_290 <= (safe_mod_func_int32_t_s_s(((l_693 = (l_692 = (((l_686 = g_362) < ((l_633 >= (safe_lshift_func_int8_t_s_u(0x5FL, 3))) | (p_55.f1 & (l_644 = (safe_add_func_uint16_t_u_u(l_691, l_253.f0)))))) , 0x37L))) ^ (((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(p_55.f2, 6)), p_57)) || l_613.f2) <= 8UL)), l_614.f1))) > (-1L)) != 0xEA2E80AA86F4DE2BLL) > l_691)) == 2L);
                        if (p_55.f2)
                            break;
                    }
                    if (((safe_rshift_func_int8_t_s_s(p_56, (l_629 >= (l_344 | l_692)))) ^ (safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(((-2L) == ((l_644 < g_362) , (((l_614.f1 < (l_644 = ((p_57 , g_224) <= p_56))) & l_706) >= l_614.f1))), 0)) && g_264), g_76))))
                    {
                        return l_614.f1;
                    }
                    else
                    {
                        unsigned long long l_709 = 0x3F7A3E2A152F6268LL;
                        l_709 = ((((l_633 = p_55.f2) , g_32) <= g_298) <= (safe_add_func_uint64_t_u_u((g_110 || g_10), p_57)));
                    }
                    g_231 = p_56;
                    l_699 = p_55.f2;
                }
            }
            else
            {
                unsigned char l_715 = 0x05L;
                long long l_723 = 0xB21CB21747D36788LL;
                unsigned l_752 = 0x47D8208BL;
                if (((((l_710 , (safe_rshift_func_uint8_t_u_s(g_61.f2, (safe_mod_func_uint8_t_u_u((g_146 = (g_49 == (l_672 != (((-1L) <= (g_716 = l_715)) , ((-1L) == (safe_add_func_uint32_t_u_u((g_341 = (p_55.f2 > ((safe_add_func_uint16_t_u_u(l_613.f0, p_55.f2)) <= p_57))), p_55.f0))))))), g_58.f2))))) , p_55.f2) >= l_511) & 1UL))
                {
                    p_57 = l_715;
                    return l_715;
                }
                else
                {
                    int l_727 = 0x89D4FC97L;
                    for (l_253.f2 = 0; (l_253.f2 > 36); ++l_253.f2)
                    {
                        char l_724 = (-1L);
                        int l_728 = 0x7CD7A0C9L;
                        unsigned char l_729 = 0xA4L;
                        l_728 = (((l_724 = ((!(l_723 = (p_57 < p_57))) > p_57)) , ((((7L <= (g_264 = l_715)) > (g_416 & (l_633 , (safe_mod_func_uint64_t_u_u(p_55.f2, g_145))))) < (-1L)) || g_61.f2)) != l_727);
                        l_672 = (l_729 || l_723);
                        g_75 = ((((safe_rshift_func_uint16_t_u_u((l_724 >= l_732), 12)) || ((g_89 || g_285) == (safe_add_func_uint32_t_u_u(((((safe_add_func_uint64_t_u_u((g_416 == (((((g_261 = ((l_715 , 8L) == (0xA1694FD9L != (-4L)))) != p_55.f1) || l_728) & p_57) || g_136)), 7L)) ^ (-1L)) , 0UL) > 0xC60A29E6L), 0xA8204617L)))) | p_55.f0) , g_248);
                        l_727 = (safe_mul_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u((g_61.f0 , ((((g_362 = (safe_sub_func_int64_t_s_s((g_290 && (safe_add_func_int16_t_s_s(p_57, l_745))), (safe_lshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(l_511, (l_727 <= (-9L)))), l_621)) , p_55.f2), l_613.f0))))) ^ l_729) || p_56) , l_752)), g_186)) < l_710), l_724));
                    }
                    p_57 = (-10L);
                    g_261 = l_727;
                    for (g_89 = 22; (g_89 == (-12)); --g_89)
                    {
                        p_57 = g_416;
                    }
                }
                l_377 = (safe_mod_func_int64_t_s_s(p_55.f2, (safe_mul_func_int8_t_s_s(p_55.f0, ((g_416 & (((l_759 || l_651) , (~0x4610211BL)) , g_285)) , (~0xA7L))))));
                g_261 = (p_56 == ((((p_55.f1 && (safe_sub_func_int8_t_s_s((((p_55.f2 | (safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(p_56, ((safe_add_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((l_614 , ((((g_186 = (safe_lshift_func_int8_t_s_u((p_55.f2 | (safe_unary_minus_func_int8_t_s((safe_add_func_int32_t_s_s(g_49, ((p_55.f1 != (g_47 < p_57)) > 0x72FC7688L)))))), g_10))) , g_89) || 1UL) && 4UL)), 4)) >= g_362), l_633)) != l_633))) ^ p_55.f0), 1)), 0x41F77DABDBBF3132LL))) | p_56) <= 0x69DD57C6L), g_61.f0))) >= l_777) , g_58) , g_241));
            }
        }
    }
    for (l_376 = 0; (l_376 >= 26); l_376 = safe_add_func_int8_t_s_s(l_376, 3))
    {
        short l_784 = 0xE16BL;
        int l_785 = 7L;
        unsigned l_877 = 0x4EC5186AL;
        int l_879 = 0x0EC9E574L;
        unsigned long long l_971 = 9UL;
        short l_977 = 0L;
        short l_1043 = 0x8163L;
        union U0 l_1094 = {0xCB15F39CL};
        unsigned short l_1111 = 6UL;
        unsigned l_1133 = 9UL;
        g_75 = p_57;
        if ((safe_sub_func_uint16_t_u_u(((l_621 && (safe_lshift_func_uint16_t_u_u(l_784, (p_55.f1 > (((l_745 != (l_785 = l_784)) > p_55.f0) <= (((p_55.f2 < p_55.f1) <= g_298) ^ p_55.f2)))))) && 0x5551L), l_377)))
        {
            int l_794 = 6L;
            int l_904 = (-1L);
            if ((safe_mod_func_int64_t_s_s(((p_55.f0 != l_621) & (!0xE5CDD73C74C59BA0LL)), (l_377 = (safe_rshift_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(l_784, l_785)) == (4294967295UL > (l_794 = g_61.f2))), 4))))))
            {
                short l_841 = 0x0849L;
                int l_860 = 6L;
                unsigned l_878 = 0xB8E0C854L;
                for (g_341 = (-12); (g_341 <= 21); g_341 = safe_add_func_uint16_t_u_u(g_341, 1))
                {
                    l_797 = p_56;
                }
                g_231 = ((g_798 = l_794) < l_794);
                if ((((safe_sub_func_int8_t_s_s(l_63, l_794)) != (l_794 , (p_55.f2 , g_10))) , (l_794 , (safe_add_func_uint64_t_u_u(0x26D6BB762B7A4644LL, (((safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(l_794, ((safe_mod_func_uint8_t_u_u((l_63 > p_56), g_47)) != g_186))), l_253.f2)) ^ l_253.f1) && 6L))))))
                {
                    char l_821 = 0x28L;
                    p_56 = (g_75 = (g_261 = (safe_mod_func_int64_t_s_s((p_55.f0 && (((safe_mod_func_int64_t_s_s((g_110 = p_55.f2), g_32)) ^ ((g_264 = (g_341 | (safe_sub_func_int32_t_s_s(0x9B1D10BFL, ((g_521 = (4294967295UL != (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(0L, 7)), 2)), 5)))) , l_821))))) == ((safe_mul_func_uint16_t_u_u(0xE36EL, g_186)) <= p_56))) || p_55.f0)), l_784))));
                }
                else
                {
                    unsigned l_850 = 1UL;
                    for (l_253.f2 = 0; (l_253.f2 >= 6); l_253.f2 = safe_add_func_uint16_t_u_u(l_253.f2, 1))
                    {
                        long long l_830 = (-1L);
                        int l_852 = 0x2EB77B86L;
                        p_57 = ((g_58.f0 && 1UL) || (safe_mod_func_uint8_t_u_u(((((safe_mod_func_uint16_t_u_u(l_830, ((safe_lshift_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((!p_55.f1), p_55.f0)) && p_55.f0), p_55.f2)) | g_89))) != (safe_rshift_func_uint16_t_u_s(((7L < p_55.f1) , g_136), 14))) || g_61.f2) && p_57), 0x97L)));
                        l_851 = ((safe_rshift_func_uint8_t_u_s(((-6L) || (safe_mod_func_int32_t_s_s((l_841 = p_57), ((g_285 >= ((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((g_362 > (g_75 , ((g_76 < ((safe_sub_func_int64_t_s_s(l_830, g_362)) || (((safe_rshift_func_int8_t_s_u((((g_145 < 1UL) >= 4294967295UL) < 1L), p_57)) , l_511) && l_785))) <= p_55.f0))), 5)) >= 5L), g_58.f0)) == l_850)) & g_186)))), l_794)) == (-1L));
                        g_75 = (l_852 = l_794);
                    }
                    l_64 = (safe_sub_func_uint32_t_u_u(((((0x5A4A6A1EL & (safe_add_func_uint8_t_u_u((g_73 = p_55.f0), (g_146 = (safe_rshift_func_uint8_t_u_u((((1L == l_794) , (((g_61.f1 || g_186) > ((l_785 = (g_61.f0 == (-5L))) , (((~l_841) <= l_784) && 1UL))) >= g_75)) , p_55.f0), 5)))))) <= p_56) , l_859) & 0xEBL), g_798));
                    l_860 = g_58.f1;
                    if (l_794)
                        continue;
                }
                g_231 = (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(g_248, (safe_rshift_func_uint16_t_u_s(((g_146 | (0xB7BFL ^ (l_879 = ((0xDF65L >= (l_785 = (((l_878 = ((p_55 , 1UL) <= (safe_add_func_uint8_t_u_u((l_877 && (-1L)), ((g_61 , p_55.f1) ^ (-1L)))))) <= 0x3E1F75F7L) & 1UL))) >= 0x56L)))) < 1UL), 10)))), 12)), 5)), 9)), 5));
            }
            else
            {
                int l_882 = 0xD702D7B5L;
                int l_899 = (-1L);
                g_75 = (p_55.f2 , (1L == g_136));
                if (g_61.f2)
                    break;
                for (g_58.f2 = 12; (g_58.f2 <= 5); --g_58.f2)
                {
                    unsigned l_891 = 0x1C8DD27BL;
                    int l_898 = 0x7B372FA4L;
                    if (l_882)
                    {
                        unsigned l_900 = 4294967295UL;
                        g_261 = (safe_mod_func_int64_t_s_s(0xD30D862036B83B54LL, 1UL));
                        l_900 = ((g_362 = (p_57 == ((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(g_145, 1)) ^ (l_899 = ((!g_261) < ((!l_891) , ((safe_sub_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(p_55.f2, (safe_rshift_func_int16_t_s_u(g_61.f2, 7)))), g_146)) >= (g_75 = ((l_898 = ((l_891 > (l_879 = ((g_798 == l_794) , 0UL))) ^ g_32)) || 4UL))))))), p_55.f1)) | g_58.f0))) <= g_186);
                    }
                    else
                    {
                        unsigned short l_903 = 0xA849L;
                        p_56 = p_55.f0;
                        l_903 = (l_898 || (safe_mod_func_uint16_t_u_u(p_57, p_55.f0)));
                    }
                    l_904 = l_899;
                }
                if (l_882)
                {
                    g_261 = p_56;
                }
                else
                {
                    int l_907 = 7L;
                    g_231 = g_61.f1;
                    for (g_716 = 0; (g_716 >= 57); g_716 = safe_add_func_int16_t_s_s(g_716, 6))
                    {
                        if (g_58.f2)
                            break;
                        g_231 = l_907;
                        l_64 = (safe_sub_func_int8_t_s_s(p_56, (l_882 <= p_56)));
                    }
                }
            }
        }
        else
        {
            int l_923 = 0xC442D0EEL;
            g_75 = (safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s((g_285 = g_76), (safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((safe_sub_func_int64_t_s_s((g_136 = 0x19082EF5298E876ALL), (p_55.f0 <= (g_248 , (safe_rshift_func_uint8_t_u_u((l_621 | p_55.f2), ((l_923 = (l_377 = (~(((l_922 = (g_10 , (p_55.f1 , 0x40E671CC98240AA1LL))) <= 0x8F93503782DF9F4ELL) <= p_55.f0)))) == 0L))))))), 0x465486BAL)), l_784)))), g_716));
        }
        for (l_253.f1 = 0; (l_253.f1 < 33); l_253.f1++)
        {
            short l_932 = 0xB3DAL;
            int l_942 = 4L;
            for (g_61.f2 = 0; (g_61.f2 < 22); g_61.f2 = safe_add_func_int16_t_s_s(g_61.f2, 2))
            {
                short l_957 = 0L;
                int l_960 = (-1L);
                unsigned l_961 = 3UL;
                g_261 = (safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(l_932, 6)), l_253.f2));
                if (g_241)
                    continue;
                if (p_55.f1)
                    continue;
                for (l_922 = 0; (l_922 >= 13); l_922 = safe_add_func_int8_t_s_s(l_922, 9))
                {
                    long long l_962 = (-10L);
                    for (l_851 = 0; (l_851 < 45); l_851 = safe_add_func_uint64_t_u_u(l_851, 1))
                    {
                        g_75 = (safe_mod_func_uint8_t_u_u((p_56 | 0x4BL), p_57));
                    }
                    if (l_784)
                    {
                        unsigned short l_941 = 0xE99BL;
                        p_57 = (g_58.f0 ^ g_89);
                        l_942 = (safe_sub_func_uint64_t_u_u(l_941, 1L));
                        p_56 = (((safe_rshift_func_int8_t_s_u(0xC5L, (safe_sub_func_uint8_t_u_u((0xE76FC11100CBA1E9LL > (safe_sub_func_int32_t_s_s(7L, l_942))), g_248)))) <= ((~0x57AADED0L) & p_55.f1)) , (safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((p_55.f0 , 0x975FL), l_941)), l_253.f0)));
                    }
                    else
                    {
                        p_57 = g_231;
                        l_962 = (((g_61 , (l_960 = (safe_mul_func_int16_t_s_s((l_785 = (l_957 = (g_49 , ((g_521 > (safe_rshift_func_int8_t_s_u((g_285 <= (p_55.f0 , p_55.f0)), 7))) , 1L)))), (safe_mul_func_uint8_t_u_u(l_651, p_55.f1)))))) <= l_961) && 2UL);
                        l_785 = p_55.f2;
                    }
                }
            }
        }
        if (p_55.f2)
        {
            char l_972 = 0x63L;
            int l_973 = (-1L);
            p_56 = g_298;
            l_785 = ((g_341 & l_785) | (safe_lshift_func_int16_t_s_s(((p_57 = p_55.f0) > (p_56 == (l_377 = (safe_rshift_func_uint8_t_u_u((((((safe_lshift_func_int8_t_s_u(g_136, (p_55.f2 == 65529UL))) || (g_798 = (safe_sub_func_uint32_t_u_u(l_971, (l_972 = (p_56 != g_49)))))) , p_55.f1) == p_55.f1) <= l_797), l_973))))), 14)));
        }
        else
        {
            unsigned long long l_976 = 0x8580B9F685559B1BLL;
            long long l_978 = 0L;
            unsigned char l_1041 = 247UL;
            int l_1042 = 0x8B9A5AA1L;
            unsigned l_1044 = 1UL;
            int l_1061 = 0x72F30F51L;
            unsigned l_1065 = 18446744073709551610UL;
            union U0 l_1106 = {1UL};
            for (l_621 = 15; (l_621 >= 3); l_621 = safe_sub_func_int64_t_s_s(l_621, 1))
            {
                g_75 = (l_978 = (((p_55.f1 || 1L) && ((p_55.f0 >= p_57) <= l_976)) < ((0x5685L > g_61.f1) != l_977)));
            }
            if (((l_745 >= (((l_976 && 0x2B319E10L) , ((safe_sub_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint64_t_u_u(((g_10 , ((safe_sub_func_uint64_t_u_u(0x4717B7D161997122LL, (l_785 > g_110))) , (~((g_521 ^ g_416) , g_798)))) ^ 247UL), p_55.f0)) , l_971), 2)) != p_55.f2), l_253.f1)) > l_977)) ^ l_976)) == l_879))
            {
                unsigned char l_991 = 0xD0L;
                if (l_745)
                {
                    int l_994 = 0x5A16AE09L;
                    int l_995 = 0xE1E7C1B1L;
                    l_995 = ((((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((((0x4248356DAC87378ALL && p_55.f1) < (((l_991 , g_231) , g_58) , g_298)) & l_784) & ((0x5AE3L && (safe_mul_func_int8_t_s_s((l_994 = p_55.f0), l_250))) <= 0xE52DC74BL)), p_55.f2)), g_144)) & p_56) > 8UL) , 0x2BEAF07AL);
                    p_57 = ((safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u(l_651, ((safe_sub_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u(p_56, p_57)), l_976)) != g_241))), (((safe_lshift_func_int16_t_s_s(l_994, 8)) , (safe_mod_func_uint8_t_u_u((l_1008 & (l_785 = (p_55.f0 >= (l_995 = ((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u(l_677, 7)), 0)) > p_56))))), p_56))) , g_798))) <= p_56);
                    if (l_1013)
                        break;
                    if ((safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((g_285 = l_995), (safe_lshift_func_int16_t_s_u(l_879, l_253.f1)))), 1)))
                    {
                        g_231 = g_231;
                    }
                    else
                    {
                        return g_186;
                    }
                }
                else
                {
                    g_75 = (p_56 <= 0L);
                }
                p_57 = (l_784 , (safe_mul_func_uint16_t_u_u((l_977 >= l_64), l_977)));
            }
            else
            {
                char l_1045 = (-2L);
                int l_1060 = 0xC2A8C5A4L;
                int l_1079 = 0L;
                union U0 l_1165 = {0xA5601ECFL};
                p_56 = p_55.f1;
                if (((((safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((g_76 && ((18446744073709551615UL > g_362) & (safe_rshift_func_int8_t_s_s((g_58.f2 , 1L), (safe_add_func_int16_t_s_s((p_55.f2 , (safe_rshift_func_uint16_t_u_u(l_978, (p_55.f0 | (p_55.f0 & p_55.f2))))), p_55.f0)))))), g_231)) , g_298), g_58.f0)), 14)) , p_55.f1) ^ l_1034) != 0xFC31F7F55F65F8EALL))
                {
                    char l_1055 = 0x18L;
                    int l_1062 = 0x724E13E8L;
                    p_57 = (((safe_add_func_uint32_t_u_u((p_55.f0 < (p_55.f2 > (6L == (safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((((((p_55.f2 <= (g_61 , 18446744073709551615UL)) , (g_362 = (((g_58.f2 || l_1008) ^ ((l_1042 = (!(3L <= l_1041))) & 0xBBL)) > g_58.f1))) == l_1043) | g_231) , (-1L)) && 0xCC0AE8AEBE14797BLL), 5L)), 1UL))))), 0xD6F10CAEL)) , 0L) != g_75);
                    p_56 = ((l_1044 != (l_1045 >= ((safe_rshift_func_int16_t_s_u(4L, 12)) & g_261))) <= (p_57 & (p_55.f2 != 18446744073709551615UL)));
                    for (l_677 = 0; (l_677 > 17); l_677++)
                    {
                        long long l_1052 = (-4L);
                        p_57 = (((((safe_mul_func_int16_t_s_s((l_1052 | (p_55.f1 , (0x92C9B994L || (g_798 = (safe_lshift_func_int8_t_s_s(0L, ((l_1055 = p_56) & (l_1062 = ((l_1061 = (g_73 = ((g_224 >= (l_1042 = (safe_lshift_func_uint16_t_u_u((((((p_55.f1 ^ (p_56 , (((((l_1060 = l_1045) ^ g_341) , 0xDAL) <= p_55.f2) == l_250))) != p_55.f1) != 0xD88DL) == 0x8FL) > l_1052), l_1045)))) > 0x7BFDBC38DB2D0C4BLL))) ^ p_55.f0))))))))), p_56)) , l_1034) | (-2L)) == g_290) , 0x8E04C176L);
                    }
                    p_56 = ((0xD06A2702L > (safe_lshift_func_int16_t_s_s((l_1065 >= g_1066), (((((g_144 | (safe_add_func_uint32_t_u_u((l_1044 , (g_416 , 0x8F2F17B1L)), (safe_mul_func_uint8_t_u_u(l_784, (0xA6A3L | g_58.f1)))))) != l_1060) <= 255UL) && l_1071) >= 9UL)))) <= p_55.f0);
                }
                else
                {
                    unsigned char l_1083 = 0x23L;
                    int l_1107 = 0xAB00B8A3L;
                    int l_1110 = 3L;
                    p_57 = g_1072;
                    for (g_416 = 24; (g_416 != (-19)); --g_416)
                    {
                        p_56 = l_978;
                        g_231 = (g_290 < (safe_rshift_func_uint8_t_u_u(((g_145 = g_61.f0) , (((l_1042 = g_716) & g_798) , p_55.f1)), 7)));
                        l_1061 = ((l_1060 != (l_1083 = (((l_1045 == (((safe_sub_func_int16_t_s_s((l_1079 = p_57), p_57)) || (p_55.f0 || l_1061)) > (g_1080 = g_10))) && p_55.f0) , (safe_add_func_uint32_t_u_u(l_784, p_56))))) == g_285);
                        return g_49;
                    }
                    if ((0x85B1L > ((-1L) & (safe_sub_func_int8_t_s_s(1L, (l_1060 & (g_285 = (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((l_1079 = (l_1094 , (!((safe_unary_minus_func_int16_t_s(p_55.f0)) != ((l_785 = ((safe_mul_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_s(((p_55.f0 ^ ((l_1083 < ((l_1041 , 0xC6L) , g_75)) > 0x4E568B51CAC005A6LL)) > l_877), 7)) <= 0x69DFL), g_290)), g_285)) >= g_362)) | 0L))))), 7L)), 7)), l_297)), l_511)))))))))
                    {
                        char l_1112 = 1L;
                        l_1112 = ((l_1110 = ((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((l_1061 = 0L), 11)), (-1L))) , ((l_1106 , ((-7L) ^ (l_1045 >= ((l_1107 = l_1079) && (safe_sub_func_uint16_t_u_u(l_971, 9L)))))) <= g_61.f2))) >= l_1111);
                        l_1110 = (g_75 = ((safe_lshift_func_uint8_t_u_s((((safe_mul_func_int8_t_s_s((g_341 , g_1066), g_231)) == (g_145 <= l_1083)) ^ (l_1112 , l_785)), 0)) >= (l_1042 = (g_231 < ((((safe_rshift_func_int16_t_s_u(((safe_mul_func_uint8_t_u_u((((g_341 | l_511) , p_55.f1) ^ 9L), l_1112)) , g_241), l_1112)) , 0x819CC7BDD2FED06BLL) , g_61.f1) , l_1111)))));
                        l_879 = (((0x5B36224E22CE8934LL < g_145) | p_57) > (safe_mul_func_uint8_t_u_u((p_56 ^ l_1106.f2), (l_1060 = p_57))));
                        if (l_1065)
                            continue;
                    }
                    else
                    {
                        char l_1128 = 0xCAL;
                        p_56 = ((p_55.f0 , (safe_rshift_func_int16_t_s_s(((((((p_55.f2 < 0xA23F67CDL) != (+((g_89 = ((l_377 = ((g_76 = (safe_mod_func_int32_t_s_s(((g_1127 = (g_32 || l_1079)) > (g_61.f2 > (l_1128 ^ l_1034))), (((safe_sub_func_uint8_t_u_u((((g_416 ^ 65535UL) == g_58.f0) < p_56), l_1008)) & 0x9A02459874A53F73LL) , g_264)))) || l_677)) > g_58.f0)) ^ p_55.f2))) == g_264) , g_416) , p_57) && 0x06L), 6))) , l_1128);
                        g_231 = l_1107;
                    }
                    p_57 = (safe_lshift_func_int16_t_s_s(l_1133, 2));
                }
                for (l_1106.f1 = 24; (l_1106.f1 > 15); l_1106.f1--)
                {
                    unsigned short l_1163 = 9UL;
                    int l_1166 = 5L;
                    g_231 = (g_75 = (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((l_1079 = (l_1045 <= g_58.f1)), l_922)), 3)));
                    if (((safe_mul_func_int8_t_s_s(p_57, 0UL)) | ((l_879 , (0xE4E7249FL < (l_253.f2 || (safe_sub_func_uint32_t_u_u((((((l_785 = p_55.f1) , (g_136 ^ (g_61.f1 & g_145))) != 0x824D71E9L) != 0x1BF23D45L) || 6UL), 0x32704723L))))) <= 5L)))
                    {
                        p_56 = ((l_377 = (safe_rshift_func_int8_t_s_u((g_144 , (l_879 & l_1045)), 6))) , p_55.f2);
                        return p_55.f0;
                    }
                    else
                    {
                        long long l_1164 = 1L;
                        p_56 = (((safe_lshift_func_uint8_t_u_s(g_61.f2, g_1148)) >= (((((0xF0L != (+253UL)) >= (safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(g_73, 0x0C76L)) < (g_89 > (l_1060 = (safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_int64_t_s_s((((l_1163 >= l_1164) & g_58.f0) && 0x13236D8C90A6DFBDLL), g_76)), p_55.f0)), p_55.f2)), 0))))), (-1L))), (-1L)))) , l_1165) , 0x9E1C391FL) & g_110)) , g_61.f1);
                        return l_1166;
                    }
                }
            }
        }
    }
    l_64 = l_377;
    return g_75;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_58.f0, "g_58.f0", print_hash_value);
    transparent_crc(g_58.f1, "g_58.f1", print_hash_value);
    transparent_crc(g_58.f2, "g_58.f2", print_hash_value);
    transparent_crc(g_61.f0, "g_61.f0", print_hash_value);
    transparent_crc(g_61.f1, "g_61.f1", print_hash_value);
    transparent_crc(g_61.f2, "g_61.f2", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_341, "g_341", print_hash_value);
    transparent_crc(g_362, "g_362", print_hash_value);
    transparent_crc(g_416, "g_416", print_hash_value);
    transparent_crc(g_521, "g_521", print_hash_value);
    transparent_crc(g_716, "g_716", print_hash_value);
    transparent_crc(g_798, "g_798", print_hash_value);
    transparent_crc(g_1066, "g_1066", print_hash_value);
    transparent_crc(g_1072, "g_1072", print_hash_value);
    transparent_crc(g_1080, "g_1080", print_hash_value);
    transparent_crc(g_1127, "g_1127", print_hash_value);
    transparent_crc(g_1148, "g_1148", print_hash_value);
    transparent_crc(g_1175, "g_1175", print_hash_value);
    transparent_crc(g_1179.f0, "g_1179.f0", print_hash_value);
    transparent_crc(g_1179.f1, "g_1179.f1", print_hash_value);
    transparent_crc(g_1179.f2, "g_1179.f2", print_hash_value);
    transparent_crc(g_1386, "g_1386", print_hash_value);
    transparent_crc(g_1440, "g_1440", print_hash_value);
    transparent_crc(g_1525, "g_1525", print_hash_value);
    transparent_crc(g_1582, "g_1582", print_hash_value);
    transparent_crc(g_1601, "g_1601", print_hash_value);
    transparent_crc(g_1790, "g_1790", print_hash_value);
    transparent_crc(g_1794, "g_1794", print_hash_value);
    transparent_crc(g_1795, "g_1795", print_hash_value);
    transparent_crc(g_1896, "g_1896", print_hash_value);
    transparent_crc(g_1909, "g_1909", print_hash_value);
    transparent_crc(g_1910, "g_1910", print_hash_value);
    transparent_crc(g_2067, "g_2067", print_hash_value);
    transparent_crc(g_2147, "g_2147", print_hash_value);
    transparent_crc(g_2170, "g_2170", print_hash_value);
    transparent_crc(g_2274, "g_2274", print_hash_value);
    transparent_crc(g_2291, "g_2291", print_hash_value);
    transparent_crc(g_2382, "g_2382", print_hash_value);
    transparent_crc(g_2389, "g_2389", print_hash_value);
    transparent_crc(g_2475, "g_2475", print_hash_value);
    transparent_crc(g_2519, "g_2519", print_hash_value);
    transparent_crc(g_2781, "g_2781", print_hash_value);
    transparent_crc(g_2782.f0, "g_2782.f0", print_hash_value);
    transparent_crc(g_2782.f1, "g_2782.f1", print_hash_value);
    transparent_crc(g_2782.f2, "g_2782.f2", print_hash_value);
    transparent_crc(g_2804, "g_2804", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
