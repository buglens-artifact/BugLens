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
   volatile unsigned char f0;
   volatile int f1;
   volatile unsigned short f2;
   short f3;
};

union U1 {
   unsigned char f0;
   int f1;
   int f2;
};


static int g_3 = 0xFD1E814BL;
static volatile unsigned short g_35 = 0x65CAL;
static unsigned char g_93 = 0x71L;
static unsigned g_107 = 18446744073709551615UL;
static unsigned char g_108 = 0x0EL;
static char g_111 = (-1L);
static char g_118 = 0xD8L;
static char g_123 = 0x6CL;
static unsigned g_140 = 0x885CFE2AL;
static int g_147 = (-7L);
static short g_171 = 0x9B62L;
static unsigned char g_184 = 0x3EL;
static unsigned g_252 = 0x78003283L;
static short g_290 = 0xEE1EL;
static unsigned char g_389 = 0xCEL;
static int g_430 = (-1L);
static short g_550 = 1L;
static unsigned short g_607 = 65535UL;
static int g_674 = (-2L);
static unsigned g_681 = 0UL;
static int g_802 = 1L;
static unsigned short g_836 = 0x87EFL;
static char g_839 = 0xB9L;
static struct S0 g_890 = {0UL,0xC8DB98BEL,0x8EB4L,2L};
static struct S0 g_891 = {0x46L,0x0D3C951AL,0xBE33L,0xABC2L};
static short g_895 = 9L;
static struct S0 g_899 = {249UL,-1L,0xEE7CL,-8L};
static struct S0 g_900 = {0xE9L,0xB61E4890L,0x4707L,0x96D5L};
static volatile struct S0 g_911 = {0x2AL,0L,5UL,0x4A04L};
static volatile struct S0 g_912 = {1UL,0L,0xEB49L,0xBC2EL};
static struct S0 g_959 = {0x16L,0x32B0128AL,0xFD04L,0x5A97L};
static struct S0 g_960 = {246UL,7L,0x8879L,0x719FL};
static volatile struct S0 g_962 = {1UL,-4L,65533UL,5L};
static unsigned g_984 = 0x048A6CFAL;
static unsigned short g_988 = 0UL;
static struct S0 g_1001 = {0x3AL,-1L,0x09C8L,5L};
static struct S0 g_1039 = {2UL,-3L,0x3674L,0xC768L};



static unsigned short func_1(void);
static struct S0 func_4(unsigned char p_5);
static unsigned short func_12(unsigned char p_13, int p_14, short p_15);
static char func_22(char p_23);
static unsigned short func_31(unsigned char p_32, short p_33, int p_34);
static int func_42(short p_43, union U1 p_44, unsigned p_45, char p_46, short p_47);
static unsigned func_49(char p_50, unsigned char p_51);
static char func_55(unsigned char p_56);
static unsigned func_59(short p_60, unsigned char p_61, int p_62);
static int func_66(unsigned p_67, unsigned short p_68);
static unsigned short func_1(void)
{
    unsigned char l_2 = 2UL;
    unsigned l_1015 = 0x5279A3E4L;
    int l_1016 = 8L;
    unsigned l_1040 = 0x961C9F0AL;
    unsigned char l_1043 = 1UL;
    unsigned l_1044 = 0xDF82392EL;
    int l_1045 = (-1L);
    g_3 = l_2;
    g_1039 = func_4((((l_1016 = (safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s(l_2, ((safe_lshift_func_uint16_t_u_u(l_2, func_12(g_3, g_3, l_2))) | (safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s(l_1015, 5)) && g_890.f3), g_959.f3))))), 0x1371167DL))) >= l_2) < 0xC8L));
    g_147 = ((((!(g_184 <= (g_607 = l_1040))) || 0x63L) & (((func_49((l_2 & g_962.f1), g_550) > (l_1044 = (safe_add_func_int16_t_s_s(g_550, l_1043)))) ^ l_1040) || g_959.f2)) <= l_1016);
    l_1016 = (g_147 = l_1040);
    return l_1045;
}







static struct S0 func_4(unsigned char p_5)
{
    unsigned short l_1017 = 0x9521L;
    int l_1018 = (-9L);
    l_1018 = l_1017;
    for (g_836 = 0; (g_836 >= 22); ++g_836)
    {
        unsigned short l_1023 = 0xA57BL;
        int l_1038 = 1L;
        l_1038 = ((safe_sub_func_int32_t_s_s(p_5, (l_1023 & ((0x9BA5A1BDL | (safe_sub_func_uint16_t_u_u((0x7BL ^ (safe_mod_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(func_49(l_1017, (1UL ^ (safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s((p_5 || 0x681D2398L), g_550)), 0xD463D352L)), p_5)))), l_1023)) < 0xC5L), 0x8688L)) & l_1017) > l_1017), 0xE700L))), l_1023))) | l_1018)))) <= 255UL);
    }
    return g_912;
}







static unsigned short func_12(unsigned char p_13, int p_14, short p_15)
{
    char l_30 = (-1L);
    int l_38 = 0L;
    int l_39 = 0x72B416C2L;
    int l_913 = 0xC04B4988L;
    int l_914 = 0x3B7A3D3DL;
    int l_986 = 0x643C8DE8L;
    int l_987 = 1L;
    char l_989 = 0x48L;
    unsigned char l_996 = 6UL;
    unsigned char l_1006 = 249UL;
    char l_1008 = 1L;
    l_989 = (g_988 = (l_987 = (l_986 = (safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_u((p_14 >= (func_22((safe_lshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s(((+(safe_sub_func_uint8_t_u_u((g_3 <= l_30), (((l_914 = (l_913 = func_31(g_3, (g_3 != (((g_35 > (l_38 = (safe_add_func_int16_t_s_s(g_3, l_30)))) == (l_39 = 0x4BL)) >= g_3)), p_15))) || l_913) && 0xF4L)))) != p_14), 0x2FL)) || 0x759245EBL), 1))) ^ 0x12L)), 2)) <= l_30), 1)), g_681)))));
    g_147 = (func_59(l_986, (p_13 = (l_913 = 5UL)), (safe_add_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(g_900.f3, (safe_sub_func_int16_t_s_s(((1UL && p_14) == p_15), (p_15 >= 3UL))))) == l_38), 0x7346L))) && 0xFE3AL);
    l_986 = (l_996 >= (safe_rshift_func_uint16_t_u_s(l_989, 12)));
    for (g_290 = (-4); (g_290 == 18); ++g_290)
    {
        int l_1007 = 0L;
        g_1001 = g_900;
        l_1007 = (((p_13 == (safe_mod_func_uint32_t_u_u(func_49(g_107, ((safe_add_func_int8_t_s_s((g_912.f3 && (l_1006 || (((l_986 = l_1007) == g_899.f3) && (p_13 <= ((l_39 = ((l_1008 & (safe_mod_func_int8_t_s_s(g_911.f2, 1L))) != p_14)) <= l_1007))))), p_13)) >= 65535UL)), 0x47243CCEL))) | 0L) == p_14);
        l_1007 = p_15;
    }
    return l_996;
}







static char func_22(char p_23)
{
    unsigned l_915 = 0xDA365503L;
    int l_918 = 0xCADEE236L;
    unsigned char l_922 = 255UL;
    unsigned short l_983 = 65531UL;
    unsigned char l_985 = 2UL;
    if ((func_31(l_915, p_23, g_890.f2) ^ ((l_918 = (safe_sub_func_uint8_t_u_u(p_23, p_23))) >= p_23)))
    {
        unsigned l_919 = 18446744073709551615UL;
        int l_926 = 0x03BB6BFDL;
        int l_956 = (-1L);
        l_919 = l_918;
        for (g_111 = 0; (g_111 < (-14)); g_111--)
        {
            int l_923 = 0x1540C24FL;
            char l_930 = 0xFFL;
            int l_961 = 0x65BD939FL;
            if (l_922)
            {
                if ((l_923 = g_890.f3))
                {
                    return l_923;
                }
                else
                {
                    for (g_123 = 0; (g_123 < 23); ++g_123)
                    {
                        if (g_123)
                            break;
                        if (p_23)
                            break;
                        if (g_430)
                            break;
                    }
                    return l_926;
                }
            }
            else
            {
                union U1 l_933 = {0xE2L};
                g_802 = (g_147 = (p_23 | (safe_add_func_uint8_t_u_u((func_59((safe_unary_minus_func_uint16_t_u(l_930)), (l_919 < (((safe_lshift_func_int16_t_s_s(func_42(p_23, l_933, p_23, ((safe_mod_func_uint32_t_u_u(((((safe_mod_func_uint16_t_u_u(0xEECEL, (func_59(p_23, g_891.f2, l_930) ^ 8UL))) < g_107) <= 0L) & l_926), 1UL)) < p_23), l_915), 14)) & 65535UL) < p_23)), p_23) < g_681), p_23))));
                if ((((((safe_rshift_func_uint8_t_u_s(0x9AL, func_49((safe_sub_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((l_956 = func_49(l_918, ((func_49(p_23, (safe_mod_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((l_930 && g_900.f0), 1)) == ((safe_lshift_func_int8_t_s_s((g_111 >= ((g_607 = g_111) & (safe_rshift_func_uint8_t_u_u((g_389 = ((safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((g_674 > (p_23 | p_23)), (-10L))), p_23)) & g_839)), 5)))), l_923)) == p_23)), l_926))) >= g_252) <= l_918))), p_23)) | p_23), 0xAEL)), g_108))) == 2UL) ^ 0L) && 0xAEL) & 0x333162D8L))
                {
                    g_912 = g_891;
                }
                else
                {
                    if (g_147)
                        break;
                    for (g_147 = 0; (g_147 <= (-15)); --g_147)
                    {
                        g_3 = p_23;
                    }
                    g_960 = g_959;
                }
            }
            l_961 = g_890.f3;
            g_962 = g_912;
            g_3 = (-4L);
        }
    }
    else
    {
        short l_963 = 0x2B2AL;
lbl_966:
        l_963 = (func_66(g_960.f0, l_915) && g_890.f1);
        for (p_23 = (-8); (p_23 > (-12)); p_23 = safe_sub_func_uint32_t_u_u(p_23, 2))
        {
            g_147 = 0xA1865049L;
        }
        g_147 = l_918;
        if (g_171)
            goto lbl_966;
    }
    g_984 = (((((l_915 == ((g_3 = (safe_mod_func_uint16_t_u_u(func_31((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((0x5CL < (65528UL >= g_890.f2)), 0x468EDB0AL)), (safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((p_23 ^ ((safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u((func_66(p_23, p_23) ^ g_3), 248UL)), g_895)) == 0x0EL)), 11)), 1)) & 0x52630C87L), 12)))), g_899.f3, p_23), l_983))) < p_23)) != p_23) == p_23) > l_983) | p_23);
    return l_985;
}







static unsigned short func_31(unsigned char p_32, short p_33, int p_34)
{
    union U1 l_48 = {2UL};
    int l_52 = 1L;
    int l_896 = (-1L);
    int l_897 = 0x393B0EDFL;
    short l_902 = 0L;
    unsigned l_910 = 0UL;
    l_910 = ((((safe_add_func_int32_t_s_s(func_42(p_32, (l_48 = l_48), (((func_49((l_897 = ((0xA2D3C5EBL ^ (l_52 = (l_52 | ((safe_rshift_func_int8_t_s_u(func_55((safe_lshift_func_int8_t_s_u(l_52, 0))), (l_896 = (safe_add_func_int8_t_s_s(p_34, (g_895 = (g_890.f3 != 7L))))))) < 9UL)))) <= g_890.f3)), g_681) || p_33) < p_32) < l_902), p_32, l_902), p_34)) == p_34) || l_896) & p_34);
    g_912 = g_911;
    return l_48.f0;
}







static int func_42(short p_43, union U1 p_44, unsigned p_45, char p_46, short p_47)
{
    unsigned l_908 = 0UL;
    int l_909 = 0x8D81D643L;
    for (g_899.f3 = 0; (g_899.f3 == 15); g_899.f3++)
    {
        l_909 = ((safe_unary_minus_func_int16_t_s((g_895 = ((func_49(g_107, (p_45 | 0x9D33B920L)) >= p_43) || (safe_rshift_func_int16_t_s_s((l_908 || g_111), 4)))))) < p_45);
        if (g_681)
            break;
    }
    return p_45;
}







static unsigned func_49(char p_50, unsigned char p_51)
{
    short l_898 = 0x07E9L;
    unsigned l_901 = 0x5C82BCBDL;
    l_898 = g_171;
    g_900 = g_899;
    return l_901;
}







static char func_55(unsigned char p_56)
{
    unsigned l_63 = 4294967292UL;
    int l_892 = 6L;
    l_892 = (func_59((l_63 && ((safe_add_func_uint8_t_u_u(0x64L, g_35)) & (((func_66(l_63, ((safe_sub_func_int16_t_s_s(0L, ((p_56 && ((safe_add_func_uint32_t_u_u(((((p_56 == (-1L)) == (-1L)) && p_56) >= l_63), l_63)) == g_3)) | 0x719BL))) | g_3)) <= p_56) == g_3) == p_56))), l_63, g_681) > 0x6DDBB875L);
    return p_56;
}







static unsigned func_59(short p_60, unsigned char p_61, int p_62)
{
    g_891 = g_890;
    g_891 = g_891;
    return g_674;
}







static int func_66(unsigned p_67, unsigned short p_68)
{
    char l_75 = 0xA1L;
    int l_78 = 0x1F898AFBL;
    int l_81 = 4L;
    unsigned short l_102 = 0x35F0L;
    unsigned char l_124 = 0x2FL;
    unsigned l_213 = 18446744073709551606UL;
    unsigned l_235 = 2UL;
    int l_405 = 0x5E5B6B0BL;
    int l_494 = 0xE12E99EAL;
    short l_495 = 0xB428L;
    unsigned l_645 = 18446744073709551611UL;
lbl_263:
    for (p_67 = 0; (p_67 == 12); ++p_67)
    {
        unsigned l_79 = 0x9C99C4DBL;
        unsigned short l_80 = 0x7CADL;
        int l_84 = (-1L);
        int l_85 = 8L;
        unsigned l_100 = 0UL;
        if ((0x3441L <= ((l_75 = p_67) < ((254UL <= (safe_mod_func_int8_t_s_s((l_78 <= (!(l_79 >= l_80))), (l_81 = p_67)))) && g_3))))
        {
            unsigned l_101 = 18446744073709551615UL;
            int l_103 = 0xD7FDF8BFL;
            l_85 = (0xB930L && ((l_84 = g_3) >= (0xE8010CA1L | g_3)));
            for (l_79 = 17; (l_79 > 38); l_79 = safe_add_func_uint32_t_u_u(l_79, 7))
            {
                l_103 = ((((safe_add_func_uint16_t_u_u(((g_93 = (safe_unary_minus_func_int8_t_s((safe_rshift_func_int8_t_s_s(g_3, 0))))) && (safe_add_func_uint16_t_u_u(l_75, ((safe_rshift_func_int8_t_s_u((-7L), 7)) & (l_100 = (safe_sub_func_int32_t_s_s(0L, (g_3 || g_93)))))))), (l_101 = ((0x9B4FL != p_68) & (l_84 = (p_67 <= 0xDCF8L)))))) == g_3) ^ g_3) > l_102);
                if (g_3)
                {
                    if (p_68)
                        break;
                    for (l_84 = 0; (l_84 <= (-3)); l_84--)
                    {
                        char l_106 = 0L;
                        l_103 = g_3;
                        if (l_106)
                            continue;
                        g_107 = (p_67 < (!(l_103 = g_3)));
                    }
                }
                else
                {
                    unsigned l_112 = 0x122A8473L;
                    int l_119 = 0x35CAF2BFL;
                    int l_120 = 0x4E140BD2L;
                    if ((p_68 < p_67))
                    {
                        unsigned l_113 = 0x15B33599L;
                        g_108 = g_3;
                        g_111 = (safe_mod_func_int16_t_s_s(g_93, p_68));
                        l_113 = l_112;
                        if (p_68)
                            continue;
                    }
                    else
                    {
                        l_120 = (safe_add_func_uint8_t_u_u((0xBEL < (0UL < (l_119 = (g_118 = ((0xDBL == (g_108 != p_68)) || 0x88L))))), g_107));
                    }
                    if (g_93)
                        break;
                }
            }
            if (g_108)
                continue;
        }
        else
        {
            int l_133 = 0L;
            int l_177 = 0x9E8A1AAAL;
            l_78 = ((safe_sub_func_uint16_t_u_u((l_124 = (g_123 = l_81)), (0x97L == ((safe_lshift_func_int16_t_s_u((l_80 && g_93), (0x2AL && (safe_sub_func_uint16_t_u_u(g_108, (((safe_add_func_uint32_t_u_u(g_107, ((((safe_lshift_func_int16_t_s_u((l_84 | g_107), l_81)) & g_3) >= 1UL) <= l_133))) != p_67) || 0x3C59L)))))) ^ g_111)))) && p_67);
            for (l_81 = (-15); (l_81 > 15); l_81++)
            {
                unsigned l_172 = 0x70E2A701L;
                for (l_100 = (-23); (l_100 > 23); l_100 = safe_add_func_int16_t_s_s(l_100, 6))
                {
                    l_78 = (((l_133 = (safe_mod_func_int8_t_s_s(((g_140 = 1L) | (p_67 && ((safe_lshift_func_int8_t_s_s((g_123 = (safe_rshift_func_int16_t_s_u((g_147 = p_68), (safe_mod_func_int8_t_s_s(0L, 0xEDL))))), (~0xCBL))) <= (((safe_unary_minus_func_uint8_t_u(((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(g_3, p_67)) <= (((safe_sub_func_int16_t_s_s(g_93, p_67)) & l_81) >= p_67)), g_108)), g_107)), l_85)) <= p_67))) | 0x9CL) >= g_93)))), 0xB2L))) < 0x18L) >= g_107);
                    l_133 = l_124;
                    for (g_118 = 0; (g_118 < (-3)); g_118 = safe_sub_func_uint8_t_u_u(g_118, 6))
                    {
                        g_147 = l_79;
                    }
                    if (l_85)
                    {
                        l_84 = p_67;
                    }
                    else
                    {
                        l_172 = ((((((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((((0L || ((p_68 != p_67) ^ p_67)) != (safe_lshift_func_uint16_t_u_u((0x81L | (g_3 == l_133)), (0x40L & ((safe_mod_func_uint16_t_u_u(p_67, 0xBFD4L)) ^ g_3))))) <= 0xA8532EA6L), 0)), l_84)) >= g_140) >= 0x11D49593L) <= g_123) == g_171) & 0x93970EBCL);
                    }
                }
                l_177 = (safe_lshift_func_uint16_t_u_u(((((safe_lshift_func_int16_t_s_s((l_85 = l_102), l_81)) == g_3) == l_78) >= p_67), 8));
                if (l_172)
                    continue;
            }
            g_147 = ((l_80 <= g_111) ^ p_68);
        }
    }
    g_147 = g_111;
    if (g_147)
    {
        unsigned l_178 = 4294967286UL;
        int l_190 = 0x033656F6L;
        short l_258 = 0xB9BAL;
        char l_274 = 5L;
        short l_428 = 0xDC2BL;
        unsigned short l_509 = 0x6F05L;
        l_78 = l_178;
        if (((safe_mod_func_int8_t_s_s((g_118 = l_178), p_68)) ^ g_140))
        {
            short l_181 = (-1L);
            l_181 = g_140;
            l_81 = l_181;
            g_147 = (-10L);
        }
        else
        {
            unsigned short l_197 = 65529UL;
            g_184 = ((g_147 = (safe_lshift_func_uint8_t_u_s(g_93, 0))) | g_123);
            for (p_68 = 0; (p_68 >= 47); p_68++)
            {
                unsigned l_196 = 0xCF5260BBL;
                unsigned l_209 = 0UL;
                int l_210 = 0xD2DD3FA2L;
                for (g_123 = 0; (g_123 < (-17)); g_123--)
                {
                    unsigned l_189 = 6UL;
                    int l_195 = 0L;
                    l_190 = (l_189 = p_67);
                    if (((((safe_sub_func_uint32_t_u_u(g_123, p_67)) == (l_197 = ((safe_add_func_int32_t_s_s(((!l_189) ^ p_68), (l_195 = p_68))) <= l_196))) < 65534UL) || p_67))
                    {
                        int l_204 = 0L;
                        l_190 = ((safe_add_func_uint32_t_u_u(0x72E676B4L, (l_196 || (p_68 > (safe_add_func_uint16_t_u_u((l_196 == (((g_171 >= (safe_add_func_int8_t_s_s(l_204, ((safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s(g_184, p_68)), l_209)) != p_68)))) ^ g_108) < g_111)), l_81)))))) > 4UL);
                        l_210 = p_67;
                        if (g_111)
                            break;
                        g_147 = 0x20BB0CEBL;
                    }
                    else
                    {
                        l_78 = (l_78 && p_68);
                        l_195 = l_190;
                        g_147 = p_67;
                        l_81 = l_190;
                    }
                }
                g_147 = (((safe_lshift_func_uint8_t_u_s(((g_140 = (((p_67 && ((0x64L != p_67) == l_78)) & p_68) || (g_184 >= ((g_93 == p_68) <= ((l_190 = ((g_140 == p_68) < 0x91L)) && 0UL))))) <= p_68), g_3)) || g_123) && p_68);
            }
        }
        if (l_213)
        {
            int l_220 = (-1L);
            int l_221 = 0x0E49BB20L;
            int l_283 = 1L;
            unsigned short l_289 = 0x2EBAL;
            int l_308 = 0x3FC6B856L;
            unsigned char l_502 = 0x87L;
            int l_511 = 1L;
            if ((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(65533UL, (0x67439DE1L || l_78))) >= (((1UL | g_93) && (0xF7CF728DL ^ 0x7C34602AL)) > (0x96L > (safe_lshift_func_int8_t_s_s((g_93 != l_220), g_107))))), (-1L))))
            {
                int l_236 = (-3L);
                int l_246 = (-1L);
                int l_351 = 0x236C3F1CL;
                char l_429 = 0xF2L;
                l_221 = g_107;
                if (p_68)
                {
                    unsigned short l_229 = 0xFD8FL;
                    int l_261 = (-1L);
                    int l_262 = (-3L);
                    for (g_93 = 0; (g_93 < 46); ++g_93)
                    {
                        unsigned l_224 = 0x55174FDFL;
                        l_224 = g_107;
                        if (p_67)
                            continue;
                        g_147 = g_118;
                    }
                    for (g_107 = 0; (g_107 == 45); g_107 = safe_add_func_int16_t_s_s(g_107, 1))
                    {
                        int l_230 = 0x8D167BA4L;
                        int l_241 = 0xAF15A9D2L;
                        l_241 = ((safe_sub_func_uint32_t_u_u(((((g_111 = l_229) ^ (l_230 >= ((((safe_add_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_s(g_171, 4)) >= l_221) <= l_235), l_236)) < l_178) == (((g_171 | (+(safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(p_67, p_68)), 4)))) > l_220) ^ g_3)) || p_67))) || l_178) ^ 0x6AL), 0x1267525AL)) < g_147);
                    }
                    for (l_229 = 0; (l_229 >= 33); l_229 = safe_add_func_uint8_t_u_u(l_229, 8))
                    {
                        unsigned l_249 = 4294967295UL;
                        int l_253 = (-5L);
                        l_253 = (safe_mod_func_int16_t_s_s((l_249 = (p_68 || ((g_108 = (l_246 = ((65535UL != (g_118 || 0x8200FA25L)) >= (-1L)))) ^ (safe_rshift_func_int16_t_s_s((-4L), (l_190 <= g_171)))))), (g_252 = (safe_mod_func_int32_t_s_s(0xF0394342L, 0x36B333FFL)))));
                        g_147 = (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u((l_258 || p_68), (~(g_252 & g_118)))), (((g_147 & ((l_262 = (safe_rshift_func_int16_t_s_s((l_261 = (0xEF3DL <= ((!l_229) || g_252))), 14))) || g_123)) || 0x2CB20AC4L) || 65535UL)));
                    }
                    return p_68;
                }
                else
                {
                    int l_278 = 0x1A7D0201L;
                    int l_286 = 1L;
                    if (l_213)
                        goto lbl_263;
                    for (l_213 = 0; (l_213 <= 27); l_213++)
                    {
                        unsigned l_277 = 6UL;
                        g_147 = ((((safe_rshift_func_uint8_t_u_u(1UL, (0x8AL || (l_278 = ((l_277 = (safe_mul_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(p_67, (((l_246 = l_220) >= ((g_107 ^ (safe_mod_func_uint32_t_u_u(l_258, (l_274 = l_236)))) < (g_252 = 0xA9B3E444L))) | ((safe_sub_func_int32_t_s_s(((0x4194L >= g_147) ^ 1UL), l_258)) | g_111)))), 0L))) > l_221))))) != g_93) && 0x9DL) && g_93);
                        g_147 = 0x253F6F19L;
                        g_147 = p_68;
                    }
                    l_286 = (((safe_lshift_func_int8_t_s_s(g_3, 6)) == (p_67 ^ (safe_add_func_uint8_t_u_u(l_283, l_220)))) < (safe_rshift_func_int8_t_s_s(8L, 2)));
                }
                if (g_140)
                {
                    l_221 = (-2L);
                    if ((safe_rshift_func_uint16_t_u_u((l_190 = (g_290 = (l_289 > 0x255FL))), (safe_add_func_int32_t_s_s(p_68, (safe_sub_func_uint8_t_u_u(1UL, p_67)))))))
                    {
                        int l_301 = (-1L);
                        l_246 = (g_147 & ((safe_sub_func_int8_t_s_s(l_274, (safe_lshift_func_uint8_t_u_u(((l_301 >= (0x63L <= 0xA4L)) | ((safe_lshift_func_uint8_t_u_u(((p_67 & (safe_rshift_func_int16_t_s_s(9L, 2))) & (safe_rshift_func_uint16_t_u_s((l_308 >= (safe_mod_func_uint32_t_u_u((g_111 | l_178), g_290))), g_93))), p_67)) >= 0x04A06CDDL)), g_140)))) <= 0x505CL));
                        if (g_107)
                            goto lbl_321;
                        l_246 = l_124;
lbl_321:
                        g_147 = (((((safe_mod_func_int16_t_s_s(0xABFCL, 2UL)) ^ (safe_add_func_int8_t_s_s(l_213, (-10L)))) | 2UL) && (0x0539L <= (safe_rshift_func_uint16_t_u_s(((((safe_rshift_func_int16_t_s_u(l_220, p_68)) >= (safe_mod_func_uint16_t_u_u((((l_246 = 0x85L) >= g_171) | p_67), 0xB25AL))) < p_67) != g_171), g_147)))) == g_140);
                        l_78 = (0x11E06A48L == (l_274 != (l_235 == 0xAEBFF022L)));
                    }
                    else
                    {
                        short l_324 = 0x360CL;
                        g_147 = (safe_rshift_func_uint16_t_u_u((g_118 ^ (l_324 && (p_68 && ((p_68 ^ ((+(safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((+(p_68 >= (!(safe_rshift_func_uint8_t_u_s(p_68, 6))))), 0x27L)), (safe_lshift_func_int16_t_s_s(g_252, 2))))) && ((safe_sub_func_uint8_t_u_u(((l_283 < l_178) | g_118), g_93)) & 0xE8FA73D8L))) || g_147)))), p_68));
                        l_246 = p_68;
                    }
                    g_147 = p_67;
                }
                else
                {
                    int l_344 = 0x3F62F70DL;
                    int l_382 = (-3L);
                    int l_402 = 0xAE6948D2L;
                    int l_409 = 0L;
                    unsigned l_427 = 0x43AD270DL;
                    for (p_68 = 22; (p_68 <= 33); p_68++)
                    {
                        unsigned l_343 = 0UL;
                        l_246 = (safe_rshift_func_uint16_t_u_s((0x5CL == 0xA3L), 14));
                        l_78 = 0xFC9F82F5L;
                        l_351 = ((safe_lshift_func_int8_t_s_u(((safe_mod_func_uint16_t_u_u(g_290, (+g_171))) <= ((l_78 = (l_344 = (l_343 = ((!g_108) ^ (l_246 != 0UL))))) && (safe_lshift_func_int8_t_s_u(((g_108 | ((safe_lshift_func_uint16_t_u_s(g_107, (safe_mod_func_uint16_t_u_u(g_123, (l_246 = (p_68 || l_246)))))) == p_68)) | g_140), p_68)))), 3)) & p_67);
                        l_283 = (safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(l_289, p_67)), (safe_mod_func_uint32_t_u_u(p_68, (safe_sub_func_uint32_t_u_u((l_246 = 4294967294UL), 0x8C5382C0L))))));
                    }
                    if (g_290)
                    {
                        unsigned l_364 = 0x14F62E68L;
                        unsigned l_377 = 0xABA89AF6L;
                        g_147 = ((l_124 & (l_81 = (safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((l_246 = l_364), l_75)), (p_67 >= (1L == (safe_mod_func_uint16_t_u_u(0x8135L, (safe_sub_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(p_67, (safe_lshift_func_int16_t_s_u(((l_190 = (safe_mod_func_int8_t_s_s((l_377 = l_190), (safe_mod_func_int8_t_s_s((l_351 = (safe_rshift_func_int8_t_s_s(g_123, 3))), l_78))))) ^ l_178), 15)))) & 0xE0L), 0x2BL)))))))))) & g_118);
                        l_382 = ((g_118 & (l_351 = 1UL)) && g_118);
                        g_389 = (g_147 = (safe_add_func_int8_t_s_s(((g_118 || (safe_lshift_func_int8_t_s_u((l_221 = (g_118 || (g_123 >= g_171))), 7))) && p_68), (l_220 != ((safe_sub_func_uint16_t_u_u((((-5L) || l_377) || g_171), 0x5627L)) >= l_124)))));
                    }
                    else
                    {
                        short l_403 = 0xFACAL;
                        int l_404 = 0x9D8CCFA6L;
                        g_147 = (0x45L > (p_67 ^ (safe_rshift_func_uint8_t_u_u((l_283 = (g_184 = (safe_lshift_func_int16_t_s_u(((l_382 < ((g_123 = (p_67 == ((l_404 = (((!(safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((g_123 || (((p_67 < (((l_283 <= (((0xE0L == ((safe_lshift_func_int8_t_s_u((l_402 = (safe_sub_func_int8_t_s_s(l_190, (-6L)))), g_93)) & g_118)) >= g_111) >= p_68)) == g_3) >= g_3)) ^ l_403) | p_68)), g_252)), l_258))) > g_108) <= l_236)) ^ 0UL))) || 255UL)) ^ p_67), 4)))), 2))));
                        l_382 = ((0xFDL > l_405) & l_283);
                        l_351 = (((l_283 = ((safe_unary_minus_func_uint16_t_u(l_81)) >= (6UL <= g_147))) & (safe_sub_func_uint32_t_u_u(l_409, (((safe_add_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((l_78 = (!(p_68 ^ (safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int16_t_s((l_246 & ((l_428 = (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u((p_67 ^ (safe_rshift_func_uint16_t_u_s(((((g_171 = (l_258 & (!l_427))) < l_344) & g_123) < l_308), 4))), (-1L))), p_68)), p_67))) < l_405)))), 0x468BE79BL))))), g_118)), l_404)), p_67)) == g_3) >= l_429)))) & l_221);
                        g_147 = ((g_430 = 0xDC83L) || (((safe_add_func_int32_t_s_s(((safe_mod_func_int8_t_s_s(((safe_unary_minus_func_uint16_t_u(g_108)) >= ((safe_mod_func_int32_t_s_s(l_382, (safe_sub_func_uint16_t_u_u((0x065C9D6CL ^ 0x5D27EA40L), (safe_add_func_int16_t_s_s(p_68, p_68)))))) || (p_68 ^ g_184))), g_252)) && 0UL), g_290)) != g_3) < p_67));
                    }
                }
                if (g_147)
                {
                    char l_442 = 0x2CL;
                    l_190 = l_442;
                    g_147 = 0x5BE65578L;
                }
                else
                {
                    for (l_235 = 0; (l_235 == 1); ++l_235)
                    {
                        l_190 = (6L == g_123);
                        l_190 = (g_140 != (g_171 = p_67));
                        if (g_108)
                            continue;
                        g_147 = p_68;
                    }
                }
            }
            else
            {
                short l_445 = 0x28A6L;
                int l_446 = 0x8C3C1A84L;
                l_446 = l_445;
                for (l_274 = 0; (l_274 <= (-8)); l_274--)
                {
                    if (l_428)
                        break;
                    if (g_123)
                    {
                        short l_451 = (-9L);
                        if (l_445)
                            break;
                        l_446 = (safe_rshift_func_int8_t_s_s((l_445 > ((l_451 = (p_67 >= g_171)) | p_67)), 7));
                    }
                    else
                    {
                        int l_452 = (-1L);
                        l_452 = l_274;
                        l_190 = (p_67 != (p_68 >= 0L));
                    }
                }
                l_446 = g_290;
                if (((safe_rshift_func_int16_t_s_u((g_123 < p_68), (safe_lshift_func_int8_t_s_u((l_445 ^ l_428), 5)))) != (((p_68 != p_67) || (g_118 = l_220)) && (safe_add_func_int16_t_s_s((g_171 = (p_67 < ((g_290 | 0UL) <= l_428))), l_258)))))
                {
                    g_147 = p_67;
                }
                else
                {
                    unsigned l_463 = 0x8B240CD4L;
                    l_463 = (safe_rshift_func_int16_t_s_s(l_445, 1));
                }
            }
            for (g_140 = 0; (g_140 != 30); g_140 = safe_add_func_uint32_t_u_u(g_140, 2))
            {
                char l_472 = (-5L);
                int l_510 = 0x9B7925D8L;
                g_147 = (g_107 || ((safe_sub_func_int16_t_s_s(0x7F6BL, ((0xD4348B68L > (~((l_190 = (g_108 = l_221)) >= l_178))) || p_68))) >= (safe_lshift_func_int16_t_s_u(l_220, (safe_add_func_int16_t_s_s((l_472 = p_67), (safe_add_func_uint32_t_u_u(0x0E65BC3FL, 0x60D38191L))))))));
                g_147 = (((safe_add_func_int8_t_s_s(((g_123 < l_213) ^ l_274), (l_102 | ((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_s((g_184 >= 0xC2L), 12)) != (safe_unary_minus_func_uint16_t_u((l_81 = (((p_67 ^ (((~(g_430 <= g_430)) != g_389) > g_118)) ^ 0x59L) != p_68))))), 2)) != p_68)))) > g_430) || p_68);
                for (l_102 = 0; (l_102 < 17); ++l_102)
                {
                    return p_68;
                }
                if (p_68)
                {
                    unsigned l_492 = 0xBC533F83L;
                    g_147 = (((-8L) > 0xB0L) < (g_252 = 4294967291UL));
                    l_495 = ((safe_rshift_func_int8_t_s_s(6L, (g_147 ^ (((safe_lshift_func_uint16_t_u_u(0x73DBL, (~0x1E66L))) | (safe_sub_func_int8_t_s_s(l_220, g_140))) < l_81)))) != (safe_lshift_func_int16_t_s_s(l_492, (safe_unary_minus_func_uint8_t_u((0x96FC550BL != l_494))))));
                    for (g_147 = (-10); (g_147 >= (-10)); g_147++)
                    {
                        l_509 = (p_67 & ((l_308 = ((!(g_108 & (l_78 = (((safe_lshift_func_int8_t_s_s(((l_502 <= (p_68 = (p_68 > (safe_mod_func_int16_t_s_s((p_67 >= (((g_389 = (l_221 && g_123)) < (p_68 | ((safe_sub_func_int16_t_s_s(((((((safe_lshift_func_uint8_t_u_s((g_171 <= p_68), p_67)) | l_213) <= p_68) >= g_184) & 0L) ^ p_67), 2L)) & 2L))) == g_93)), g_184))))) & 0xBE354E66L), 3)) & l_102) >= 9L)))) >= p_67)) ^ l_492));
                        l_308 = 0x82755D5FL;
                    }
                }
                else
                {
                    if (l_509)
                        break;
                    if (l_75)
                        continue;
                    l_510 = ((g_184 >= 0UL) < (g_252 = ((!(l_283 != 9UL)) <= p_68)));
                }
            }
            l_511 = (g_123 || l_78);
        }
        else
        {
            for (g_123 = 0; (g_123 <= (-2)); g_123 = safe_sub_func_uint16_t_u_u(g_123, 5))
            {
                return p_68;
            }
            for (l_258 = 17; (l_258 != 28); l_258++)
            {
                return g_140;
            }
            for (g_290 = 0; (g_290 <= 5); g_290++)
            {
                int l_521 = 0xEC3AA498L;
                l_521 = ((g_123 | (safe_unary_minus_func_int8_t_s(0x24L))) && (g_140 = (l_405 < ((safe_sub_func_int8_t_s_s(0L, g_111)) > l_258))));
            }
            l_190 = p_68;
        }
    }
    else
    {
        char l_527 = 0x33L;
        int l_528 = (-2L);
        unsigned short l_558 = 0xA80EL;
        int l_566 = 0xC9139251L;
        char l_606 = 0x67L;
        unsigned l_619 = 0xAC72EE65L;
        int l_633 = 6L;
        unsigned l_707 = 18446744073709551615UL;
        unsigned l_734 = 0x834CECF7L;
        int l_787 = 9L;
        for (l_75 = 16; (l_75 > (-2)); l_75 = safe_sub_func_uint8_t_u_u(l_75, 5))
        {
            int l_534 = 0x987E043FL;
            short l_539 = 0L;
            int l_563 = (-6L);
            unsigned short l_622 = 0xCC78L;
            if (p_67)
            {
                unsigned l_526 = 0xFFCF7B3AL;
                int l_529 = 0L;
                l_529 = (safe_rshift_func_uint8_t_u_u((((l_526 = g_140) ^ (l_527 = p_67)) | l_528), 7));
                if ((safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(l_529, 0)), g_147)))
                {
                    char l_536 = 0x39L;
                    l_534 = (65535UL != (g_290 = p_67));
                    l_534 = (safe_unary_minus_func_int32_t_s(l_536));
                }
                else
                {
                    unsigned char l_548 = 0x5EL;
                    int l_549 = 0x286BC42FL;
                    g_550 = (((p_67 < ((safe_lshift_func_uint16_t_u_u(l_539, 9)) == 0x66EBD144L)) || ((l_549 = ((safe_rshift_func_int16_t_s_u(p_67, (!(safe_mod_func_uint8_t_u_u(((p_67 < ((l_534 ^ (safe_rshift_func_int8_t_s_s((p_68 & ((safe_mod_func_int32_t_s_s(l_548, g_290)) < l_539)), 4))) ^ p_68)) | 1UL), g_118))))) <= g_140)) < p_67)) > l_405);
                    for (l_81 = (-4); (l_81 <= (-3)); l_81++)
                    {
                        l_528 = g_550;
                        g_147 = (((safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(0x4F67L, (p_67 || 0x1631L))), 1)) < p_68) != (((g_107 && l_102) | p_68) == (((safe_unary_minus_func_uint32_t_u(l_526)) | 0xB522L) > p_68)));
                    }
                    l_81 = ((g_107 < g_430) <= (g_147 = l_558));
                }
            }
            else
            {
                for (g_140 = 0; (g_140 > 36); ++g_140)
                {
                    if (l_405)
                        goto lbl_263;
                }
            }
            g_147 = l_534;
            if (((g_147 = (l_534 <= (safe_mod_func_int8_t_s_s((((g_252 && (l_528 = 0xE09663EDL)) ^ 4294967295UL) > (((l_566 = ((l_563 = l_75) & (p_68 = (((safe_sub_func_int32_t_s_s(p_68, g_3)) > ((252UL < (g_171 || 0x6C90L)) || g_108)) ^ 4294967295UL)))) & g_184) > g_550)), p_67)))) != l_494))
            {
                short l_570 = 0x7EBBL;
                int l_589 = 0x1A66F6F8L;
                l_589 = (((safe_unary_minus_func_int8_t_s(((safe_rshift_func_uint8_t_u_s((l_570 & ((safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(l_558, (l_78 = (safe_rshift_func_int8_t_s_s((!((+(l_566 <= (p_68 = g_111))) | (safe_sub_func_int16_t_s_s((((g_140 = ((g_184 >= (l_528 = g_550)) < (g_107 ^ (safe_lshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((((safe_lshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s((l_102 < (safe_unary_minus_func_int8_t_s(0x1BL))), g_107)) && l_566), 14)) != l_534) && p_67))), l_527)), 0))))) == p_67) ^ g_550), 0x0B0FL)))), l_527))))), 1)) ^ g_111)), g_184)) < (-6L)))) ^ l_570) < l_534);
            }
            else
            {
                int l_590 = 0xD67E793FL;
                int l_593 = (-1L);
                int l_625 = 0x3E905A30L;
                if (g_252)
                    goto lbl_263;
                if ((((((l_534 | 0x26L) ^ ((l_590 = 6L) && l_534)) >= g_140) >= (((safe_sub_func_uint16_t_u_u(l_593, (l_527 > p_68))) && g_290) >= l_534)) || 0x50F9L))
                {
                    if (l_590)
                        break;
                    for (g_147 = (-21); (g_147 == (-24)); --g_147)
                    {
                        return p_68;
                    }
                }
                else
                {
                    g_147 = (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(((((p_67 >= (safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(l_606, l_534)), 5)), 3))) <= 0x7A97E9CEL) ^ g_107) ^ (g_607 = 0xB375L)), ((-2L) ^ g_430))), ((g_252 <= p_67) > p_68)));
                    g_147 = p_67;
                }
                for (l_534 = 0; (l_534 <= 15); l_534 = safe_add_func_int8_t_s_s(l_534, 6))
                {
                    int l_620 = 1L;
                    char l_621 = 0x9EL;
                    for (g_140 = (-17); (g_140 < 8); g_140 = safe_add_func_uint32_t_u_u(g_140, 2))
                    {
                        unsigned char l_612 = 255UL;
                        if (l_612)
                            break;
                        l_528 = 0L;
                    }
                    if ((safe_add_func_uint16_t_u_u(65535UL, l_534)))
                    {
                        l_622 = (safe_mod_func_int32_t_s_s(((l_621 = (l_619 >= ((l_620 | (-6L)) < g_140))) != l_405), p_67));
                        if (p_67)
                            continue;
                        l_81 = (safe_mod_func_int16_t_s_s(p_68, (p_67 || l_563)));
                    }
                    else
                    {
                        l_625 = g_118;
                        if (p_67)
                            break;
                    }
                }
                return p_67;
            }
        }
        g_147 = (g_93 || 0UL);
        if ((g_147 = (((g_3 >= (p_67 > (safe_add_func_int8_t_s_s(l_606, (safe_sub_func_int8_t_s_s(p_67, (0x1803213DL != ((safe_rshift_func_int8_t_s_u(0xD3L, g_171)) < l_566)))))))) && p_68) >= p_67)))
        {
            return l_235;
        }
        else
        {
            unsigned l_632 = 0x326939B5L;
            l_633 = (l_632 = l_528);
        }
        for (g_140 = 0; (g_140 != 15); g_140++)
        {
            short l_636 = (-5L);
            int l_637 = 0xEC3D9237L;
            int l_644 = (-1L);
            int l_712 = 1L;
            l_637 = ((p_68 < l_636) && g_111);
            if ((((l_78 = (g_252 = (l_81 = ((safe_rshift_func_int16_t_s_s(l_637, 9)) ^ (g_93 != (g_140 != (-9L))))))) & (safe_mod_func_int16_t_s_s(g_118, ((l_633 = 4294967291UL) | (safe_mod_func_uint8_t_u_u(g_290, l_527)))))) < ((l_644 = p_67) != g_430)))
            {
                short l_658 = 0L;
                int l_659 = 0x2BDB2929L;
                l_644 = (l_644 < (l_619 & (l_645 = 0x103E7F66L)));
                l_78 = (-1L);
                g_147 = (safe_add_func_int8_t_s_s(g_123, (g_108 = 255UL)));
                l_566 = (l_659 = (safe_rshift_func_uint8_t_u_u((((l_606 >= l_619) > (safe_rshift_func_uint16_t_u_u((g_93 | (safe_lshift_func_uint16_t_u_s(((safe_add_func_int16_t_s_s(p_67, (g_93 != (l_637 = l_636)))) == ((-2L) || l_75)), (((safe_lshift_func_uint8_t_u_u((~1UL), l_235)) == p_67) <= g_389)))), 12))) != l_658), g_107)));
            }
            else
            {
                int l_668 = (-5L);
                int l_672 = (-10L);
                if (p_67)
                {
                    short l_662 = 0x88E5L;
                    unsigned l_663 = 4294967294UL;
                    if ((safe_lshift_func_uint8_t_u_u(g_118, 0)))
                    {
                        int l_669 = 0xF89DCA0CL;
                        int l_673 = (-10L);
                        if (g_607)
                            break;
                        g_674 = (((l_662 != l_663) | (l_673 = ((safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((l_668 | (p_68 = l_558)) ^ 0xD75BL), (g_147 = (g_290 >= (((!(p_67 || l_669)) > (safe_lshift_func_uint16_t_u_s((g_430 < l_637), 11))) || l_672))))), g_123)) > p_67))) | l_672);
                    }
                    else
                    {
                        unsigned short l_675 = 65535UL;
                        int l_680 = (-1L);
                        l_675 = p_68;
                        l_680 = (g_107 <= ((((l_527 < (p_68 = (safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s(p_68, g_171)), p_68)))) & g_252) && 8UL) != g_171));
                    }
                    return l_645;
                }
                else
                {
                    int l_682 = 0xAA7F24CEL;
                    int l_695 = 0x58F7B000L;
                    g_147 = (g_147 | p_68);
                    l_682 = g_681;
                    l_528 = (safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((((l_682 = (g_607 & (safe_lshift_func_uint8_t_u_u((g_430 ^ (safe_lshift_func_uint8_t_u_s(1UL, 1))), 1)))) < (l_644 = 0UL)) ^ l_213) == (!(safe_sub_func_uint8_t_u_u(g_290, (g_111 = (g_184 <= ((safe_rshift_func_int8_t_s_s((g_108 | l_672), l_695)) > g_171))))))), p_67)), p_68));
                    for (g_674 = 8; (g_674 > (-20)); g_674 = safe_sub_func_int8_t_s_s(g_674, 7))
                    {
                        unsigned l_700 = 3UL;
                        l_700 = ((-1L) || (g_147 = (g_118 >= (g_111 == l_606))));
                        l_566 = (g_107 < 0xD34A1A1EL);
                    }
                }
            }
            if ((g_3 | l_644))
            {
                l_78 = 0x93DF9AECL;
            }
            else
            {
                l_633 = (~(!(0xADL != (safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((((safe_rshift_func_int16_t_s_u((0xF4L || g_140), 4)) >= l_558) | ((l_707 >= (safe_unary_minus_func_uint16_t_u(p_67))) & (255UL < (safe_unary_minus_func_int32_t_s(p_68))))), (g_93 <= 0x704FA668L))), 0x39L)))));
            }
            for (l_235 = (-10); (l_235 > 48); l_235 = safe_add_func_int8_t_s_s(l_235, 8))
            {
                int l_733 = (-4L);
                int l_764 = 0L;
                l_733 = ((l_712 > (safe_add_func_int32_t_s_s((g_147 = g_674), (safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(0x91E8L, 12)), 14)), (safe_rshift_func_uint8_t_u_u((p_68 && ((safe_rshift_func_int8_t_s_u((((safe_rshift_func_int8_t_s_u((g_550 | 0x77L), 7)) == ((l_528 = ((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(g_3, p_68)), (p_68 != l_707))) < (-8L))) & 0xA17BL)) | 0x9F40B255L), 6)) ^ g_607)), l_405)))), l_733))))) & l_734);
                if (((((g_140 < ((g_118 == (g_184 <= (safe_sub_func_int8_t_s_s((!(safe_add_func_int16_t_s_s((p_67 <= (((safe_rshift_func_int16_t_s_u(g_107, 13)) != g_123) == (safe_mod_func_uint32_t_u_u(g_123, (safe_lshift_func_uint16_t_u_u(p_68, ((safe_sub_func_uint16_t_u_u(((l_528 = g_140) >= 1UL), 7L)) | l_733))))))), g_3))), 0x5EL)))) > 0L)) >= p_67) | l_733) || 1L))
                {
                    unsigned l_751 = 4UL;
                    int l_765 = 0L;
                    l_733 = (~((safe_lshift_func_int16_t_s_u(p_67, 8)) >= 0xFB42L));
                    l_765 = (safe_mul_func_int32_t_s_s((l_733 = 0x0CE49135L), (l_102 >= (l_751 & (((((safe_lshift_func_int16_t_s_u(((~(safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s(g_184, (safe_sub_func_int16_t_s_s((9UL || (safe_sub_func_uint32_t_u_u(p_67, 0x2CDD2137L))), (-2L))))), (p_68 = l_636))) >= 0x82L), l_764))) >= p_67), 5)) && g_108) < p_67) < 0xEED9L) != 0x853BL)))));
                    for (g_93 = 22; (g_93 < 45); ++g_93)
                    {
                        int l_782 = 1L;
                        g_147 = ((safe_mod_func_int32_t_s_s((p_68 >= (-3L)), g_430)) && (safe_add_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(g_3, 14)), 0)) && g_430), p_67)), l_733)), (0UL || 0x59L))) != l_782), (-1L))));
                        if (g_389)
                            continue;
                        if (g_93)
                            break;
                        if (g_674)
                            continue;
                    }
                    l_765 = g_252;
                }
                else
                {
                    unsigned short l_789 = 0UL;
                    int l_803 = 1L;
                    if (l_558)
                    {
                        unsigned l_788 = 0xFFE322E2L;
                        char l_798 = (-5L);
                        g_147 = (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_s((g_607 = ((~(6L | g_123)) | p_68)), ((((l_787 | (l_495 != (l_644 = p_68))) == p_67) ^ 0UL) == l_788))) <= l_789), l_636));
                        g_147 = g_111;
                        g_147 = (g_107 >= (safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u(p_67, 3)), (l_81 = ((g_252 = p_68) <= (safe_rshift_func_int16_t_s_s(1L, 11)))))));
                        g_147 = ((p_68 > (l_644 | (p_67 > (safe_sub_func_int16_t_s_s((p_67 || l_798), g_430))))) >= (l_78 = l_764));
                    }
                    else
                    {
                        short l_799 = 5L;
                        l_799 = p_67;
                        l_803 = (((g_108 = 249UL) ^ p_68) || (g_93 <= ((g_147 = ((1UL | (p_67 || ((safe_mod_func_int16_t_s_s(0x6E6FL, (p_68 ^ l_789))) <= l_799))) == 0xCEL)) || g_802)));
                        g_147 = (safe_add_func_uint16_t_u_u((+g_111), l_637));
                    }
                    for (l_636 = 0; (l_636 < 20); ++l_636)
                    {
                        g_147 = ((p_67 && (l_81 = 7L)) > (l_707 && g_389));
                        g_802 = l_764;
                    }
                    l_78 = (l_528 >= 1UL);
                }
                l_637 = (((0xC3L > p_68) >= ((6UL && (l_81 = (l_566 = p_68))) && l_81)) | (l_633 = (-1L)));
                if (g_111)
                {
                    g_147 = g_681;
                }
                else
                {
                    l_566 = 7L;
                    l_644 = ((safe_add_func_int32_t_s_s((l_733 != ((safe_lshift_func_int16_t_s_s((g_111 & l_527), (g_93 | 4294967292UL))) != g_290)), (l_712 = (-7L)))) > p_67);
                }
            }
        }
    }
    if (l_78)
    {
        int l_825 = 0xFB52FA01L;
        int l_832 = (-1L);
        int l_838 = 0L;
lbl_860:
        for (g_107 = 0; (g_107 >= 57); g_107 = safe_add_func_uint16_t_u_u(g_107, 8))
        {
            char l_814 = 0x35L;
            if (l_495)
                goto lbl_263;
            l_814 = g_430;
        }
        for (g_107 = 0; (g_107 >= 40); g_107 = safe_add_func_int16_t_s_s(g_107, 7))
        {
            int l_826 = 0xA3AED44AL;
            int l_837 = 0xCDC5E5AEL;
            if ((safe_add_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((-1L), (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(g_3, 6)), 0L)))) ^ p_67), (l_826 = l_825))))
            {
                int l_831 = 0xE3808C54L;
                l_832 = (~((g_674 ^ (((p_67 | g_140) & p_67) || 0x406FL)) && ((g_123 || g_607) & (l_826 >= (((safe_mod_func_uint8_t_u_u((p_67 & l_405), 0x55L)) < p_67) & l_831)))));
            }
            else
            {
                char l_835 = 0xE6L;
                if (g_147)
                    break;
                g_802 = p_68;
                if (((g_389 = (((l_826 = p_67) >= (0xDCBD78CDL > (safe_lshift_func_uint8_t_u_u(((((l_837 = ((g_108 = (g_118 < (p_67 >= ((((g_607 = p_68) > l_835) != p_68) == g_147)))) <= g_836)) >= l_838) > p_68) == p_68), g_839)))) > g_147)) | p_67))
                {
                    unsigned l_844 = 0xC35DBBB7L;
                    g_147 = (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((l_837 || l_837) && l_844), (safe_lshift_func_int16_t_s_u((!(l_81 = ((safe_add_func_uint8_t_u_u(l_838, ((safe_add_func_uint8_t_u_u(0xA5L, (l_78 = ((l_844 ^ (~((g_111 = 0x5DL) != (g_123 = (g_839 = ((l_837 == (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(g_252, 7L)), g_3))) | 1UL)))))) & l_835)))) | l_826))) | p_68))), g_3)))), l_826));
                    g_802 = g_607;
                }
                else
                {
                    short l_855 = 0x8E7FL;
                    l_826 = ((g_252 = l_855) >= (((g_123 = l_837) | (l_832 = (safe_rshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_u(p_67, 7)) & l_855), 10)))) || g_802));
                    if (l_235)
                        goto lbl_860;
                    l_81 = 0x773350FBL;
                }
            }
            g_147 = ((-1L) > g_140);
        }
    }
    else
    {
        unsigned char l_865 = 0xB2L;
        int l_889 = 0xEB7F1C34L;
        g_802 = (l_495 || g_184);
        if ((safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u(((0x1E92L & p_67) & (g_836 = g_118)), l_494)), l_495)))
        {
            int l_866 = (-1L);
            unsigned short l_883 = 65535UL;
            if (p_67)
            {
                g_147 = l_865;
            }
            else
            {
                l_78 = ((l_866 = l_866) && p_68);
                return g_111;
            }
            for (g_674 = (-23); (g_674 == 7); ++g_674)
            {
                return p_67;
            }
            for (g_389 = (-10); (g_389 == 33); ++g_389)
            {
                char l_886 = (-1L);
                g_802 = (+p_68);
                g_802 = (safe_sub_func_uint16_t_u_u(g_681, ((g_118 != ((((safe_lshift_func_uint16_t_u_s(g_93, (safe_rshift_func_uint16_t_u_u((g_171 || (safe_rshift_func_int8_t_s_s(((safe_add_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u(l_883, 9)) && g_123) || ((g_252 && (safe_rshift_func_uint8_t_u_u(p_67, (((l_78 = l_865) < p_67) > p_67)))) != 0x1FE1095AL)), 0xE5L)) || 1UL), 6))), 5)))) == l_886) == 0xDAL) != p_68)) && p_68)));
            }
        }
        else
        {
            l_889 = ((g_681 | (((l_124 | 0x3B8AL) && l_865) <= 0xE4L)) >= (l_865 >= ((safe_add_func_int8_t_s_s(((g_171 = l_235) & (l_235 & (g_118 & 0xADD1L))), g_118)) <= p_67)));
        }
    }
    return l_124;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_389, "g_389", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_550, "g_550", print_hash_value);
    transparent_crc(g_607, "g_607", print_hash_value);
    transparent_crc(g_674, "g_674", print_hash_value);
    transparent_crc(g_681, "g_681", print_hash_value);
    transparent_crc(g_802, "g_802", print_hash_value);
    transparent_crc(g_836, "g_836", print_hash_value);
    transparent_crc(g_839, "g_839", print_hash_value);
    transparent_crc(g_890.f0, "g_890.f0", print_hash_value);
    transparent_crc(g_890.f1, "g_890.f1", print_hash_value);
    transparent_crc(g_890.f2, "g_890.f2", print_hash_value);
    transparent_crc(g_890.f3, "g_890.f3", print_hash_value);
    transparent_crc(g_891.f0, "g_891.f0", print_hash_value);
    transparent_crc(g_891.f1, "g_891.f1", print_hash_value);
    transparent_crc(g_891.f2, "g_891.f2", print_hash_value);
    transparent_crc(g_891.f3, "g_891.f3", print_hash_value);
    transparent_crc(g_895, "g_895", print_hash_value);
    transparent_crc(g_899.f0, "g_899.f0", print_hash_value);
    transparent_crc(g_899.f1, "g_899.f1", print_hash_value);
    transparent_crc(g_899.f2, "g_899.f2", print_hash_value);
    transparent_crc(g_899.f3, "g_899.f3", print_hash_value);
    transparent_crc(g_900.f0, "g_900.f0", print_hash_value);
    transparent_crc(g_900.f1, "g_900.f1", print_hash_value);
    transparent_crc(g_900.f2, "g_900.f2", print_hash_value);
    transparent_crc(g_900.f3, "g_900.f3", print_hash_value);
    transparent_crc(g_911.f0, "g_911.f0", print_hash_value);
    transparent_crc(g_911.f1, "g_911.f1", print_hash_value);
    transparent_crc(g_911.f2, "g_911.f2", print_hash_value);
    transparent_crc(g_911.f3, "g_911.f3", print_hash_value);
    transparent_crc(g_912.f0, "g_912.f0", print_hash_value);
    transparent_crc(g_912.f1, "g_912.f1", print_hash_value);
    transparent_crc(g_912.f2, "g_912.f2", print_hash_value);
    transparent_crc(g_912.f3, "g_912.f3", print_hash_value);
    transparent_crc(g_959.f0, "g_959.f0", print_hash_value);
    transparent_crc(g_959.f1, "g_959.f1", print_hash_value);
    transparent_crc(g_959.f2, "g_959.f2", print_hash_value);
    transparent_crc(g_959.f3, "g_959.f3", print_hash_value);
    transparent_crc(g_960.f0, "g_960.f0", print_hash_value);
    transparent_crc(g_960.f1, "g_960.f1", print_hash_value);
    transparent_crc(g_960.f2, "g_960.f2", print_hash_value);
    transparent_crc(g_960.f3, "g_960.f3", print_hash_value);
    transparent_crc(g_962.f0, "g_962.f0", print_hash_value);
    transparent_crc(g_962.f1, "g_962.f1", print_hash_value);
    transparent_crc(g_962.f2, "g_962.f2", print_hash_value);
    transparent_crc(g_962.f3, "g_962.f3", print_hash_value);
    transparent_crc(g_984, "g_984", print_hash_value);
    transparent_crc(g_988, "g_988", print_hash_value);
    transparent_crc(g_1001.f0, "g_1001.f0", print_hash_value);
    transparent_crc(g_1001.f1, "g_1001.f1", print_hash_value);
    transparent_crc(g_1001.f2, "g_1001.f2", print_hash_value);
    transparent_crc(g_1001.f3, "g_1001.f3", print_hash_value);
    transparent_crc(g_1039.f0, "g_1039.f0", print_hash_value);
    transparent_crc(g_1039.f1, "g_1039.f1", print_hash_value);
    transparent_crc(g_1039.f2, "g_1039.f2", print_hash_value);
    transparent_crc(g_1039.f3, "g_1039.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
