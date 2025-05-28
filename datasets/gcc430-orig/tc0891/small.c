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
   short f0;
};


static volatile int g_10 = 1L;
static unsigned g_13 = 0UL;
static int g_24 = 0x911B9C6FL;
static union U0 g_65 = {0x0539L};
static union U0 *g_64 = &g_65;
static char g_76 = (-1L);
static unsigned char g_95 = 1UL;
static volatile unsigned short g_144 = 1UL;
static volatile int *g_151 = &g_10;
static unsigned char g_174 = 0x17L;
static char g_182 = (-10L);
static volatile unsigned g_226 = 1UL;
static unsigned short g_253 = 0x8FB2L;
static volatile char g_273 = (-5L);
static volatile unsigned g_274 = 0x6B15256DL;
static unsigned char ***g_287 = (void*)0;
static int g_339 = 0x71AA19CEL;
static unsigned short g_365 = 0xDE00L;
static unsigned g_384 = 1UL;
static int g_440 = (-1L);
static union U0 **g_469 = &g_64;
static unsigned g_482 = 0UL;
static short g_485 = (-1L);
static int g_549 = 0x107A2326L;
static unsigned short g_568 = 0xA769L;
static volatile union U0 g_585 = {0x132FL};
static volatile union U0 *g_584 = &g_585;
static unsigned short *g_599 = &g_253;
static unsigned short **g_598 = &g_599;
static unsigned char g_644 = 9UL;
static char g_647 = 0L;
static volatile unsigned g_711 = 18446744073709551613UL;
static unsigned g_729 = 18446744073709551612UL;
static volatile int g_853 = 9L;
static int g_856 = 0x0F49EA9DL;
static volatile char g_864 = 0x70L;
static volatile unsigned g_874 = 0x3FA797A1L;
static unsigned char g_937 = 255UL;
static int g_940 = 1L;
static int *g_939 = &g_940;
static int *g_943 = &g_440;
static volatile unsigned g_1071 = 3UL;
static unsigned short g_1231 = 0x452FL;
static int g_1245 = 8L;
static int g_1257 = 0xE9727E8EL;
static volatile unsigned char g_1265 = 251UL;
static volatile unsigned char g_1318 = 5UL;



static unsigned short func_1(void);
static int func_2(int p_3, unsigned short p_4, unsigned p_5);
static int * func_27(unsigned short p_28, int * p_29, char p_30, int p_31);
static int * func_32(int * p_33, unsigned char p_34, int p_35, int * p_36, unsigned p_37);
static unsigned char func_39(int * p_40, union U0 p_41, unsigned short p_42, unsigned short p_43, int * p_44);
static union U0 func_45(unsigned p_46, int * p_47, short p_48, union U0 p_49, int * p_50);
static int * func_52(int * p_53, unsigned p_54, char p_55, unsigned p_56);
static unsigned func_57(unsigned short p_58, int p_59);
static union U0 * func_61(unsigned char p_62, union U0 * p_63);
static int * func_66(union U0 * p_67, union U0 * p_68, union U0 * p_69);
static unsigned short func_1(void)
{
    unsigned l_9 = 0x25FA5FEFL;
    int *l_22 = (void*)0;
    int *l_23 = &g_24;
    int *l_1153 = &g_24;
    int l_1284 = 0x83272342L;
    int l_1301 = 0xD74BCF70L;
    int l_1303 = (-1L);
    int l_1305 = 0xB0C31BEAL;
    if (func_2((safe_unary_minus_func_uint32_t_u(0x7B1C2A2CL)), ((safe_div_func_int32_t_s_s(l_9, l_9)) < (g_10 & ((5L <= (safe_add_func_int8_t_s_s((l_9 == ((*l_23) = ((g_13 >= (safe_rshift_func_uint8_t_u_s((l_9 & (safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((((safe_sub_func_int32_t_s_s(l_9, g_13)) < g_13) == l_9) && 0xFBL), (-1L))), 8L))), g_13))) | g_13))), g_13))) > g_13))), l_9))
    {
        int *l_1152 = (void*)0;
        union U0 *l_1164 = &g_65;
        unsigned short ***l_1185 = &g_598;
        char *l_1276 = &g_647;
        int l_1277 = 0L;
        int *l_1278 = &g_549;
        int *l_1279 = &g_339;
        int *l_1280 = (void*)0;
        int *l_1281 = &g_1257;
        int *l_1282 = &g_940;
        int *l_1283 = &g_856;
        int l_1285 = 0x9284CCFAL;
        int *l_1286 = &g_549;
        int *l_1287 = (void*)0;
        int *l_1288 = &g_856;
        int *l_1289 = &g_339;
        int *l_1290 = &g_940;
        int *l_1291 = &l_1284;
        int *l_1292 = &l_1285;
        int *l_1293 = &g_339;
        int *l_1294 = (void*)0;
        int *l_1295 = &l_1284;
        int *l_1296 = &g_339;
        int *l_1297 = &g_549;
        int *l_1298 = &l_1284;
        int *l_1299 = &g_549;
        int *l_1300 = &g_856;
        int *l_1302 = &g_549;
        int *l_1304 = &l_1285;
        int *l_1306 = (void*)0;
        int *l_1307 = &l_1284;
        int *l_1308 = (void*)0;
        int *l_1309 = &l_1277;
        int *l_1310 = &l_1305;
        int *l_1311 = &l_1277;
        int *l_1312 = (void*)0;
        int *l_1313 = &l_1301;
        int *l_1314 = &l_1284;
        int *l_1315 = &g_440;
        int l_1316 = 0x780E2DE9L;
        int *l_1317 = (void*)0;
        (*g_469) = func_61((safe_sub_func_int32_t_s_s(func_2(((**g_598) | (*l_23)), (((l_1152 != l_1153) == ((-3L) != (safe_div_func_int32_t_s_s((safe_sub_func_int16_t_s_s(g_711, ((safe_div_func_uint32_t_u_u((g_482 = g_485), (safe_rshift_func_int8_t_s_s(0x8AL, 7)))) ^ (safe_lshift_func_uint8_t_u_s((*l_23), (*l_23)))))), (*g_939))))) == 0UL), g_440), g_485)), l_1164);
        for (g_365 = 0; (g_365 != 38); g_365++)
        {
            union U0 *l_1167 = (void*)0;
            int *l_1170 = &g_549;
            char *l_1175 = &g_182;
            (*g_469) = func_61((*l_23), l_1167);
            for (g_644 = (-3); (g_644 > 25); ++g_644)
            {
                int **l_1171 = (void*)0;
                int *l_1172 = &g_549;
                l_1172 = l_1170;
            }
            (*l_23) = (*l_1170);
            (*g_943) = ((safe_div_func_uint16_t_u_u((g_644 && ((*l_1175) &= g_856)), (*g_599))) || (*l_1153));
        }
        for (g_485 = 0; (g_485 >= 13); ++g_485)
        {
            unsigned short l_1186 = 6UL;
            union U0 *l_1187 = &g_65;
            int l_1234 = (-1L);
            int l_1235 = 0L;
        }
        --g_1318;
    }
    else
    {
        int *l_1321 = &l_1303;
        int *l_1322 = (void*)0;
        int *l_1323 = &g_24;
        int *l_1324 = (void*)0;
        int *l_1325 = &g_339;
        int *l_1326 = &g_24;
        int *l_1327 = (void*)0;
        int *l_1328 = &g_549;
        int *l_1329 = &g_549;
        int *l_1330 = (void*)0;
        int *l_1331 = &g_339;
        int *l_1332 = (void*)0;
        int *l_1333 = &g_440;
        int *l_1334 = &l_1303;
        int *l_1335 = &l_1305;
        int l_1336 = 0x34DEEADCL;
        int *l_1337 = &l_1303;
        int *l_1338 = &g_940;
        int *l_1339 = &g_549;
        int *l_1340 = (void*)0;
        int *l_1341 = &g_856;
        int *l_1342 = &l_1303;
        int *l_1343 = &l_1305;
        int *l_1344 = &l_1336;
        int *l_1345 = &l_1301;
        unsigned l_1346 = 2UL;
        int **l_1349 = &l_1321;
        l_1346--;
        (*l_1323) &= ((*l_1338) = (*l_1335));
        (*l_1349) = &g_1257;
    }
    return (**g_598);
}







static int func_2(int p_3, unsigned short p_4, unsigned p_5)
{
    int *l_38 = &g_24;
    union U0 l_1136 = {0x122FL};
    unsigned l_1139 = 18446744073709551613UL;
    for (p_4 = (-2); (p_4 <= 35); ++p_4)
    {
        unsigned short l_51 = 65534UL;
        short l_60 = 0x5F2FL;
        union U0 l_878 = {0x0207L};
        unsigned char *l_936 = &g_937;
        int l_938 = 0xAE9DF7BDL;
        int **l_1082 = &g_943;
    }
    return (*g_943);
}







static int * func_27(unsigned short p_28, int * p_29, char p_30, int p_31)
{
    char l_1083 = 1L;
    int *l_1084 = &g_24;
    int *l_1085 = &g_549;
    int *l_1086 = &g_940;
    int *l_1087 = (void*)0;
    int *l_1088 = (void*)0;
    int *l_1089 = &g_856;
    int l_1090 = (-1L);
    int *l_1091 = &g_549;
    int *l_1092 = &g_940;
    int *l_1093 = &l_1090;
    int *l_1094 = (void*)0;
    int *l_1095 = &g_440;
    int *l_1096 = &g_339;
    int *l_1097 = &g_549;
    int *l_1098 = &g_24;
    int *l_1099 = &l_1090;
    int *l_1100 = &g_549;
    int *l_1101 = &g_549;
    int *l_1102 = &g_440;
    int *l_1103 = &g_440;
    int *l_1104 = &g_339;
    int *l_1105 = (void*)0;
    int *l_1106 = &g_339;
    int *l_1107 = (void*)0;
    int l_1108 = (-10L);
    int l_1109 = (-5L);
    int *l_1110 = (void*)0;
    int *l_1111 = &g_549;
    int *l_1112 = &l_1109;
    int *l_1113 = &g_24;
    int *l_1114 = &l_1109;
    int *l_1115 = &l_1090;
    int *l_1116 = &l_1109;
    int *l_1117 = &g_940;
    int *l_1118 = &g_339;
    int *l_1119 = (void*)0;
    int *l_1120 = &g_549;
    int *l_1121 = &l_1109;
    int *l_1122 = &g_339;
    int *l_1123 = (void*)0;
    int *l_1124 = &g_24;
    int *l_1125 = &g_339;
    int *l_1126 = &g_856;
    int *l_1127 = &l_1090;
    int *l_1128 = &l_1090;
    int *l_1129 = &g_339;
    int *l_1130 = &l_1109;
    int l_1131 = 0L;
    unsigned l_1132 = 0xE39F0F95L;
    int **l_1135 = &l_1096;
    l_1132++;
    (*l_1135) = &l_1090;
    (*l_1135) = &g_440;
    return &g_940;
}







static int * func_32(int * p_33, unsigned char p_34, int p_35, int * p_36, unsigned p_37)
{
    union U0 l_941 = {-1L};
    int l_945 = (-9L);
    int l_960 = 9L;
    int l_966 = 0x3A5F8AC1L;
    int l_981 = 0x8BD7C63EL;
    int l_982 = 0xDCCE7CC4L;
    int l_1005 = 0x9D266918L;
    int l_1015 = 3L;
    int l_1051 = 2L;
    unsigned char l_1077 = 0UL;
    if (((*g_939) = (*p_33)))
    {
        int **l_942 = &g_939;
        g_943 = ((*l_942) = (void*)0);
        (*l_942) = (void*)0;
    }
    else
    {
        int *l_944 = &g_549;
        int *l_946 = (void*)0;
        int *l_947 = &g_339;
        int *l_948 = &g_339;
        int *l_949 = &g_440;
        int *l_950 = &g_339;
        int *l_951 = &l_945;
        int *l_952 = &g_549;
        int *l_953 = &g_24;
        int *l_954 = (void*)0;
        int *l_955 = &g_339;
        int *l_956 = (void*)0;
        int *l_957 = &g_339;
        int *l_958 = &g_549;
        int *l_959 = &l_945;
        int *l_961 = (void*)0;
        int l_962 = 0x07859915L;
        int *l_963 = &g_440;
        int l_964 = (-1L);
        int *l_965 = &g_339;
        int *l_967 = &g_440;
        int *l_968 = &g_940;
        int *l_969 = &l_962;
        int l_970 = 0xADA55E93L;
        int *l_971 = &l_945;
        int *l_972 = (void*)0;
        int *l_973 = &l_945;
        int *l_974 = &g_940;
        int *l_975 = &l_970;
        int *l_976 = (void*)0;
        int *l_977 = &l_964;
        int *l_978 = &g_856;
        int *l_979 = &g_549;
        int *l_980 = (void*)0;
        int l_983 = 0L;
        int *l_984 = &l_966;
        int *l_985 = &g_940;
        int *l_986 = &g_339;
        int *l_987 = (void*)0;
        int l_988 = 1L;
        int *l_989 = (void*)0;
        int l_990 = 2L;
        int *l_991 = &g_440;
        int l_992 = 0xFD0D20FDL;
        int *l_993 = &l_964;
        int *l_994 = &g_549;
        int *l_995 = &l_992;
        int *l_996 = &g_856;
        int *l_997 = &l_982;
        int *l_998 = (void*)0;
        int *l_999 = &g_24;
        int *l_1000 = &l_988;
        int *l_1001 = &l_962;
        int l_1002 = 0x21595468L;
        int *l_1003 = &g_549;
        int *l_1004 = &g_549;
        int l_1006 = 1L;
        int *l_1007 = &l_988;
        int *l_1008 = &l_992;
        int *l_1009 = &l_982;
        int *l_1010 = &l_1002;
        int *l_1011 = &l_964;
        int *l_1012 = &g_940;
        int l_1013 = (-3L);
        int *l_1014 = &l_970;
        int *l_1016 = (void*)0;
        int *l_1017 = &l_970;
        int *l_1018 = &l_945;
        int *l_1019 = &l_945;
        int *l_1020 = &l_981;
        int *l_1021 = (void*)0;
        int *l_1022 = &l_1013;
        int *l_1023 = &g_856;
        int l_1024 = 0xAFAFA16AL;
        int *l_1025 = &l_981;
        int *l_1026 = &g_339;
        int *l_1027 = (void*)0;
        int *l_1028 = &l_1002;
        int *l_1029 = &l_960;
        int *l_1030 = &l_992;
        int *l_1031 = &g_24;
        int l_1032 = 1L;
        int *l_1033 = &l_964;
        int *l_1034 = &l_1013;
        int *l_1035 = (void*)0;
        int *l_1036 = &g_24;
        int *l_1037 = &l_1024;
        int *l_1038 = &l_962;
        int *l_1039 = &g_856;
        int *l_1040 = &g_549;
        int l_1041 = 0xADC3BA32L;
        int *l_1042 = (void*)0;
        int *l_1043 = &l_1032;
        int *l_1044 = &l_990;
        int *l_1045 = &l_1013;
        int *l_1046 = (void*)0;
        int *l_1047 = &l_945;
        int *l_1048 = &l_1032;
        int *l_1049 = (void*)0;
        int *l_1050 = (void*)0;
        int *l_1052 = &l_962;
        int l_1053 = 1L;
        int *l_1054 = &g_940;
        int *l_1055 = &l_1015;
        int *l_1056 = &l_945;
        int *l_1057 = &l_983;
        int *l_1058 = &l_990;
        int *l_1059 = &l_964;
        int *l_1060 = &l_1015;
        int *l_1061 = &l_966;
        int *l_1062 = (void*)0;
        int *l_1063 = &l_988;
        int *l_1064 = (void*)0;
        int *l_1065 = &l_983;
        int *l_1066 = (void*)0;
        int l_1067 = 0x28988425L;
        int *l_1068 = &l_945;
        int *l_1069 = &l_982;
        int *l_1070 = &l_970;
        g_1071++;
        if ((safe_lshift_func_uint16_t_u_s((*g_599), (+1L))))
        {
            short l_1076 = 0x242EL;
            (*l_1056) &= (g_384 || l_1076);
        }
        else
        {
            int l_1078 = 0x5173473DL;
            int **l_1081 = &l_969;
            (*l_965) = (((*g_943) != (l_1077 == l_1078)) ^ (safe_mod_func_int32_t_s_s(5L, g_273)));
            (*l_1081) = p_33;
        }
        (*l_1034) = ((void*)0 != &l_1077);
    }
    return p_33;
}







static unsigned char func_39(int * p_40, union U0 p_41, unsigned short p_42, unsigned short p_43, int * p_44)
{
    short l_896 = 0xF933L;
    int l_901 = 0xC81542B8L;
    unsigned short l_910 = 1UL;
    unsigned l_933 = 0xB1C1F842L;
    (*p_44) &= l_896;
    for (g_384 = 9; (g_384 == 44); g_384 = safe_add_func_uint32_t_u_u(g_384, 1))
    {
        unsigned l_902 = 9UL;
        char *l_909 = &g_182;
        int *l_921 = &g_24;
        int *l_922 = (void*)0;
        int *l_923 = &l_901;
        int *l_924 = &g_549;
        int *l_925 = &l_901;
        int *l_926 = &l_901;
        int *l_927 = &g_440;
        int *l_928 = &g_24;
        int *l_929 = &g_440;
        int *l_930 = &g_440;
        int *l_931 = &g_856;
        int *l_932 = &g_24;
        (*p_44) ^= (l_901 > ((~l_902) && (safe_sub_func_uint32_t_u_u(((((void*)0 != &l_896) == (&g_95 != (void*)0)) || (safe_sub_func_uint16_t_u_u(((**g_598) |= ((safe_div_func_int8_t_s_s(((*l_909) ^= 0xD8L), p_43)) < p_43)), p_41.f0))), l_910))));
        for (g_24 = 0; (g_24 < 14); g_24 = safe_add_func_uint32_t_u_u(g_24, 1))
        {
            unsigned char *l_913 = &g_95;
            unsigned char *l_914 = &g_174;
            int l_919 = 7L;
            short *l_920 = &l_896;
            (*p_44) |= ((((*l_914) |= ((*l_913) = (l_901 < g_384))) < (((g_10 >= (safe_mod_func_uint16_t_u_u((**g_598), (safe_mod_func_int8_t_s_s(((*l_909) = l_919), p_41.f0))))) == 0x92727425L) > (*g_599))) & (+((*l_920) &= p_41.f0)));
        }
        ++l_933;
    }
    return g_549;
}







static union U0 func_45(unsigned p_46, int * p_47, short p_48, union U0 p_49, int * p_50)
{
    short l_881 = 0L;
    unsigned char *l_890 = &g_95;
    unsigned char **l_889 = &l_890;
    unsigned char ***l_888 = &l_889;
    unsigned char **l_891 = (void*)0;
    (*p_47) &= (safe_rshift_func_uint8_t_u_u(g_144, g_13));
    (*p_47) |= (l_881 && ((*l_888) != l_891));
    return p_49;
}







static int * func_52(int * p_53, unsigned p_54, char p_55, unsigned p_56)
{
    char l_495 = (-2L);
    unsigned short *l_498 = (void*)0;
    int l_499 = 0xC1E38ED1L;
    int *l_502 = &g_440;
    unsigned l_503 = 0UL;
    int l_556 = 6L;
    int l_567 = 0xA04E7043L;
    int l_677 = 0x1F68E581L;
    int l_694 = 0xB7EF2194L;
    if ((g_76 < l_503))
    {
        int *l_504 = &g_24;
        int l_505 = 0x1BFE3D08L;
        int *l_506 = &g_339;
        int *l_507 = &g_440;
        int *l_508 = &l_505;
        int *l_509 = (void*)0;
        int *l_510 = &l_505;
        int *l_511 = &g_339;
        int *l_512 = &l_505;
        int *l_513 = &g_339;
        int *l_514 = (void*)0;
        int *l_515 = &g_440;
        int *l_516 = &g_24;
        int *l_517 = (void*)0;
        int *l_518 = &g_24;
        int *l_519 = &g_24;
        int *l_520 = (void*)0;
        int *l_521 = &l_505;
        int *l_522 = &g_339;
        int *l_523 = &g_339;
        int *l_524 = &g_24;
        int l_525 = 0x5A09BF90L;
        int *l_526 = &l_499;
        int *l_527 = &l_499;
        int *l_528 = &l_499;
        int *l_529 = &g_24;
        int *l_530 = &l_525;
        int *l_531 = &l_499;
        int l_532 = 0x0F0426A3L;
        int *l_533 = (void*)0;
        int *l_534 = (void*)0;
        int *l_535 = &g_339;
        int *l_536 = (void*)0;
        int *l_537 = &l_532;
        int *l_538 = &l_525;
        int *l_539 = &l_505;
        int l_540 = 8L;
        int *l_541 = &l_505;
        int *l_542 = &l_499;
        int *l_543 = &l_540;
        int *l_544 = &l_499;
        int *l_545 = &g_24;
        int *l_546 = (void*)0;
        int *l_547 = &l_499;
        int *l_548 = &g_24;
        int *l_550 = &g_549;
        int *l_551 = &l_525;
        int *l_552 = (void*)0;
        int l_553 = 0x1F39B6BEL;
        int *l_554 = &l_499;
        int *l_555 = &l_532;
        int *l_557 = &l_540;
        int *l_558 = &g_339;
        int *l_559 = &l_505;
        int *l_560 = &l_553;
        int *l_561 = &l_553;
        int *l_562 = &l_540;
        int *l_563 = &l_499;
        int *l_564 = &l_553;
        int *l_565 = &g_339;
        int l_566 = 1L;
        int **l_571 = &l_511;
lbl_572:
        --g_568;
        (*l_571) = (void*)0;
        if (g_76)
            goto lbl_572;
        for (g_482 = (-2); (g_482 > 41); g_482++)
        {
            if ((*p_53))
                break;
        }
    }
    else
    {
        unsigned char *l_581 = &g_95;
        int l_597 = 0x13450612L;
        int l_689 = 1L;
        int l_753 = 0xCBAD7814L;
        int l_766 = 0xCC983FD8L;
        int l_797 = 3L;
        int l_798 = (-1L);
        int l_803 = 0x408F6A8AL;
        int l_816 = 0x1F2BCD1FL;
        int l_863 = 5L;
        int l_865 = (-8L);
        int *l_877 = &l_766;
        if ((*p_53))
        {
            int **l_575 = &l_502;
            (*l_575) = &l_556;
            (**l_575) = (*p_53);
        }
        else
        {
            unsigned l_580 = 0x29D56DC0L;
            unsigned char *l_582 = &g_95;
            int l_624 = (-2L);
            int l_657 = 0xDAF5CFC6L;
            int l_685 = 0x964983E5L;
            union U0 *l_715 = &g_65;
            int *l_731 = &g_24;
            int *l_732 = (void*)0;
            int *l_733 = &l_499;
            int *l_734 = &l_677;
            int *l_735 = &l_499;
            int *l_736 = &l_567;
            int *l_737 = &g_339;
            int *l_738 = &g_549;
            int *l_739 = &l_567;
            int *l_740 = (void*)0;
            int *l_741 = &g_24;
            int *l_742 = &l_567;
            int *l_743 = &l_567;
            int *l_744 = &l_689;
            int *l_745 = &l_556;
            int *l_746 = &l_556;
            int *l_747 = &l_694;
            int *l_748 = &g_440;
            int *l_749 = &l_597;
            int *l_750 = &l_689;
            int *l_751 = &l_499;
            int *l_752 = &l_597;
            int *l_754 = &l_657;
            int *l_755 = &l_689;
            int *l_756 = &l_677;
            int *l_757 = &g_339;
            int *l_758 = &l_677;
            int *l_759 = &l_657;
            int *l_760 = &l_624;
            int *l_761 = &g_24;
            int *l_762 = &l_685;
            int *l_763 = &l_694;
            int *l_764 = &l_677;
            int *l_765 = &l_556;
            int *l_767 = (void*)0;
            int *l_768 = &g_24;
            int *l_769 = &l_657;
            int l_770 = 0x7324DE21L;
            int *l_771 = &g_24;
            int *l_772 = (void*)0;
            int *l_773 = (void*)0;
            int *l_774 = &g_440;
            int *l_775 = &l_677;
            int *l_776 = &l_677;
            int *l_777 = &l_677;
            int *l_778 = &l_624;
            int *l_779 = &g_440;
            int *l_780 = &g_440;
            int *l_781 = &g_24;
            int *l_782 = &l_556;
            int *l_783 = &l_689;
            int *l_784 = &g_440;
            int *l_785 = &l_689;
            int *l_786 = &l_657;
            int *l_787 = &l_753;
            int *l_788 = &g_440;
            int *l_789 = (void*)0;
            int *l_790 = &g_339;
            int *l_791 = &l_766;
            int *l_792 = &l_567;
            int *l_793 = &l_499;
            int *l_794 = &g_24;
            int *l_795 = &l_694;
            int *l_796 = &g_549;
            int *l_799 = (void*)0;
            int *l_800 = &l_753;
            int *l_801 = &l_797;
            int *l_802 = &l_685;
            int *l_804 = &l_567;
            int *l_805 = &l_597;
            int *l_806 = (void*)0;
            int *l_807 = &g_24;
            int *l_808 = (void*)0;
            int *l_809 = &l_694;
            int *l_810 = &l_685;
            int *l_811 = &g_440;
            int *l_812 = &l_766;
            int *l_813 = &l_597;
            int *l_814 = &l_689;
            int *l_815 = &g_440;
            int l_817 = (-8L);
            int *l_818 = &l_770;
            int *l_819 = &l_694;
            int *l_820 = &l_798;
            int *l_821 = &l_567;
            int *l_822 = &l_556;
            int *l_823 = &l_597;
            int *l_824 = &g_339;
            int *l_825 = &l_556;
            int *l_826 = &l_753;
            int *l_827 = (void*)0;
            int *l_828 = &l_694;
            int *l_829 = &l_817;
            int *l_830 = (void*)0;
            int *l_831 = &g_339;
            int *l_832 = &l_624;
            int *l_833 = &g_549;
            int *l_834 = &g_24;
            int *l_835 = &l_816;
            int *l_836 = &l_798;
            int *l_837 = &g_24;
            int *l_838 = &l_797;
            int *l_839 = &l_803;
            int *l_840 = &g_339;
            int *l_841 = &l_766;
            int *l_842 = (void*)0;
            int *l_843 = &l_685;
            int *l_844 = (void*)0;
            int *l_845 = &g_440;
            int *l_846 = &l_766;
            int *l_847 = &l_685;
            int *l_848 = &l_597;
            int *l_849 = &l_556;
            int *l_850 = &l_556;
            int *l_851 = &l_766;
            int *l_852 = &l_694;
            int *l_854 = &g_440;
            int *l_855 = &l_770;
            int *l_857 = &g_440;
            int *l_858 = &l_567;
            int *l_859 = &l_677;
            int *l_860 = &g_24;
            int *l_861 = &l_499;
            int *l_862 = &l_597;
            int *l_866 = &l_770;
            int *l_867 = &l_770;
            int *l_868 = &g_440;
            int *l_869 = &l_863;
            int *l_870 = (void*)0;
            int *l_871 = (void*)0;
            int *l_872 = (void*)0;
            int *l_873 = &l_556;
            if ((safe_lshift_func_uint8_t_u_u(l_580, p_56)))
            {
                unsigned char **l_583 = &l_582;
                volatile union U0 **l_586 = &g_584;
                unsigned short *l_589 = &g_568;
                int l_615 = 9L;
                int l_630 = 0x0B8F9777L;
                (*p_53) = (l_581 == ((*l_583) = l_582));
lbl_714:
                if (l_580)
                    goto lbl_592;
                (*l_586) = g_584;
lbl_592:
                (*p_53) ^= ((((*l_589) = (~(safe_div_func_uint16_t_u_u(p_56, g_485)))) | l_580) & (p_56 == ((void*)0 == &l_589)));
                if ((safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(p_54, l_597)), 4)))
                {
                    char *l_602 = &g_182;
                    int l_620 = 0x4BE8A045L;
                    int l_635 = 0xCA292C39L;
                    int l_638 = (-5L);
                    if (l_597)
                    {
                        unsigned short ***l_600 = (void*)0;
                        unsigned short ***l_601 = &g_598;
                        (*l_502) ^= ((*p_53) = (((((*l_601) = g_598) == &g_599) == g_549) <= ((l_602 = &g_76) != &g_182)));
                    }
                    else
                    {
                        int *l_603 = &g_440;
                        int *l_604 = &l_597;
                        int *l_605 = &l_556;
                        int *l_606 = (void*)0;
                        int *l_607 = &g_440;
                        int *l_608 = &g_549;
                        int *l_609 = &l_597;
                        int *l_610 = &l_499;
                        int *l_611 = &l_597;
                        int *l_612 = &l_499;
                        int *l_613 = &g_549;
                        int *l_614 = &g_549;
                        int *l_616 = &l_597;
                        int *l_617 = (void*)0;
                        int *l_618 = &l_597;
                        int *l_619 = &g_549;
                        int *l_621 = &l_567;
                        int *l_622 = &g_339;
                        int *l_623 = &l_615;
                        int *l_625 = &g_549;
                        int *l_626 = &l_597;
                        int *l_627 = &g_549;
                        int *l_628 = (void*)0;
                        int *l_629 = &l_624;
                        int *l_631 = &g_24;
                        int *l_632 = &g_339;
                        int *l_633 = &l_624;
                        int *l_634 = (void*)0;
                        int *l_636 = (void*)0;
                        int *l_637 = (void*)0;
                        int *l_639 = &l_567;
                        int *l_640 = &l_499;
                        int *l_641 = &l_635;
                        int *l_642 = &g_549;
                        int *l_643 = &g_549;
                        int *l_648 = &g_549;
                        int *l_649 = &g_339;
                        int *l_650 = &l_567;
                        int *l_651 = (void*)0;
                        int *l_652 = (void*)0;
                        int *l_653 = (void*)0;
                        int *l_654 = &l_567;
                        int *l_655 = (void*)0;
                        int *l_656 = &l_556;
                        int *l_658 = (void*)0;
                        int *l_659 = &l_615;
                        int *l_660 = &l_620;
                        int *l_661 = &l_620;
                        int *l_662 = &l_499;
                        int *l_663 = &g_339;
                        int *l_664 = &l_597;
                        int *l_665 = (void*)0;
                        int *l_666 = &l_638;
                        int *l_667 = &l_615;
                        int *l_668 = (void*)0;
                        int *l_669 = (void*)0;
                        int *l_670 = &g_24;
                        int *l_671 = (void*)0;
                        int *l_672 = &l_638;
                        int *l_673 = &l_630;
                        int *l_674 = &l_620;
                        int *l_675 = &l_657;
                        int *l_676 = &l_620;
                        int *l_678 = &l_657;
                        int *l_679 = &l_638;
                        int *l_680 = &l_620;
                        int *l_681 = &l_556;
                        int *l_682 = &l_630;
                        int *l_683 = &l_556;
                        int *l_684 = &g_440;
                        int *l_686 = &l_657;
                        int *l_687 = &l_677;
                        int *l_688 = (void*)0;
                        int *l_690 = &l_615;
                        int *l_691 = &g_339;
                        int *l_692 = &l_685;
                        int *l_693 = &g_549;
                        int *l_695 = &l_677;
                        int *l_696 = &l_638;
                        int *l_697 = &g_339;
                        int *l_698 = &l_635;
                        int *l_699 = &g_24;
                        int *l_700 = &l_620;
                        int *l_701 = &g_549;
                        int *l_702 = &g_339;
                        int *l_703 = &l_567;
                        int *l_704 = &g_549;
                        int *l_705 = (void*)0;
                        int *l_706 = &l_556;
                        int *l_707 = &l_630;
                        int *l_708 = &l_499;
                        int *l_709 = &g_440;
                        int *l_710 = (void*)0;
                        --g_644;
                        g_711--;
                    }
                }
                else
                {
                    if (l_503)
                        goto lbl_714;
                }
            }
            else
            {
                union U0 **l_716 = &l_715;
                int l_726 = 0xA20597C2L;
                (*p_53) ^= g_274;
                (*l_716) = l_715;
                for (g_384 = 0; (g_384 >= 32); g_384 = safe_add_func_uint16_t_u_u(g_384, 9))
                {
                    unsigned short *l_727 = (void*)0;
                    unsigned short *l_728 = &g_365;
                    int *l_730 = &l_499;
                    (*l_730) |= ((*p_53) || (safe_sub_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((*l_728) = (g_568 = ((**g_598) = (safe_sub_func_int16_t_s_s((-1L), (safe_unary_minus_func_int16_t_s(l_726))))))), (g_729 = (*l_502)))), g_485)));
                }
            }
            g_874--;
        }
        return &g_339;
    }
    return &g_856;
}







static unsigned func_57(unsigned short p_58, int p_59)
{
    union U0 *l_301 = &g_65;
    unsigned char *l_309 = &g_95;
    unsigned char *l_313 = (void*)0;
    unsigned char *l_314 = &g_95;
    int l_337 = 7L;
    unsigned short *l_368 = &g_253;
    unsigned l_398 = 18446744073709551615UL;
    int l_418 = 0xD3D98685L;
    int l_433 = 0xCC4F20DAL;
    int l_437 = 9L;
    char l_453 = 0xE1L;
    union U0 **l_474 = &g_64;
    l_301 = func_61(p_59, g_64);
    (*g_151) = (*g_151);
    if (p_58)
    {
        union U0 **l_302 = &g_64;
        union U0 *l_304 = &g_65;
        union U0 **l_303 = &l_304;
        char *l_307 = (void*)0;
        char *l_308 = &g_182;
        unsigned char **l_310 = &l_309;
        unsigned char *l_312 = (void*)0;
        unsigned char **l_311 = &l_312;
        short *l_315 = &g_65.f0;
        int l_318 = 0xA8C9CD3FL;
        char *l_319 = &g_76;
        int *l_320 = (void*)0;
        int *l_321 = &l_318;
        int **l_322 = &l_320;
        int *l_338 = &g_339;
        (*g_151) ^= ((*l_321) = ((l_301 != ((*l_303) = ((*l_302) = &g_65))) || (((((*l_308) = (safe_rshift_func_int16_t_s_s((0xBE4EL != 0L), 9))) > (p_59 >= ((l_313 = ((*l_311) = ((*l_310) = l_309))) == l_314))) || ((*l_315) = p_58)) | ((*l_314) = ((((safe_sub_func_int16_t_s_s((~(((*l_319) = ((l_318 || 6UL) && g_13)) & g_13)), p_59)) <= 0x1710BE48L) || p_59) != p_58)))));
        if (g_174)
            goto lbl_323;
lbl_323:
        (*l_322) = func_66((*l_302), &g_65, l_301);
        (*l_338) &= (((((((*l_321) = p_59) | (*g_151)) == g_13) <= ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u((0xA3L ^ ((*l_319) = (safe_add_func_uint16_t_u_u(((p_58 >= (safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(l_337, 15)), g_95))) && ((((&l_312 == &l_312) >= l_337) != p_59) & 0x71FDL)), p_59)))))), g_174)), 13)), p_59)) < l_337)) | g_24) & p_58);
        (*l_322) = func_66(l_301, (*l_302), (*l_303));
    }
    else
    {
        char l_344 = 9L;
        union U0 *l_345 = &g_65;
        int *l_403 = &l_337;
        int l_421 = (-1L);
        int l_442 = (-6L);
        union U0 ***l_471 = (void*)0;
        union U0 ***l_472 = (void*)0;
        union U0 ***l_473 = &g_469;
        union U0 ***l_475 = &l_474;
        short *l_476 = &g_65.f0;
        unsigned l_477 = 4294967290UL;
        short *l_483 = (void*)0;
        short *l_484 = &g_485;
        if ((*g_151))
        {
            unsigned l_356 = 1UL;
            int l_392 = 0xF17A2EE5L;
            int **l_402 = (void*)0;
            int *l_404 = (void*)0;
            int *l_405 = &g_24;
            int *l_406 = (void*)0;
            int *l_407 = &g_339;
            int *l_408 = &g_339;
            int *l_409 = &l_337;
            int *l_410 = &l_392;
            int *l_411 = &l_337;
            int *l_412 = &l_337;
            int *l_413 = &l_392;
            int *l_414 = &l_392;
            int *l_415 = &g_24;
            int *l_416 = (void*)0;
            int *l_417 = (void*)0;
            int *l_419 = &g_24;
            int *l_420 = (void*)0;
            int *l_422 = &l_337;
            int *l_423 = &l_418;
            int *l_424 = &g_339;
            int *l_425 = (void*)0;
            int *l_426 = (void*)0;
            int *l_427 = (void*)0;
            int *l_428 = &g_24;
            int *l_429 = &l_421;
            int *l_430 = (void*)0;
            int *l_431 = &l_337;
            int *l_432 = (void*)0;
            int *l_434 = &l_392;
            int *l_435 = &g_24;
            int *l_436 = &l_433;
            int *l_438 = &l_433;
            int *l_439 = &l_337;
            int *l_441 = &l_337;
            int *l_443 = &l_418;
            int *l_444 = &g_24;
            int *l_445 = (void*)0;
            int *l_446 = (void*)0;
            int *l_447 = &g_24;
            int *l_448 = &l_442;
            int *l_449 = &l_392;
            int *l_450 = &l_433;
            int *l_451 = (void*)0;
            int *l_452 = &l_418;
            unsigned l_454 = 3UL;
lbl_401:
            if ((safe_lshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(g_273, l_344)), g_174)))
            {
                union U0 *l_346 = &g_65;
                union U0 *l_347 = &g_65;
                int *l_361 = &g_24;
                unsigned short *l_395 = &g_365;
                if (l_337)
                {
                    union U0 **l_348 = &l_301;
                    int *l_350 = &g_339;
                    int **l_349 = &l_350;
                    int *l_373 = &l_337;
lbl_363:
                    (*l_349) = func_66(&g_65, (l_346 = l_345), ((*l_348) = l_347));
                    if (g_253)
                        goto lbl_367;
lbl_367:
                    if ((*g_151))
                    {
                        int *l_351 = (void*)0;
                        int *l_352 = (void*)0;
                        int *l_353 = &l_337;
                        int *l_354 = &l_337;
                        int *l_355 = &g_24;
                        int **l_362 = &l_351;
                        --l_356;
                        (*l_354) &= (safe_add_func_uint16_t_u_u(g_182, (+g_13)));
                        (*l_362) = ((*l_349) = l_361);
                    }
                    else
                    {
                        int l_364 = 1L;
                        union U0 *l_366 = &g_65;
                        if (g_13)
                            goto lbl_363;
                        g_365 = l_364;
                        (*g_151) ^= (l_366 == (*l_348));
                        (*l_348) = (void*)0;
                    }
                    (*l_373) |= (((*l_361) & (l_368 == (void*)0)) >= (safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s(g_253, g_10)), 4)));
                }
                else
                {
                    return p_58;
                }
                l_337 = l_337;
                for (l_356 = 0; (l_356 == 3); l_356++)
                {
                    unsigned *l_382 = (void*)0;
                    unsigned *l_383 = &g_384;
                    short *l_387 = &g_65.f0;
                    unsigned short **l_396 = &l_368;
                    int l_397 = 0x75A97A0BL;
                    (*l_361) ^= ((safe_div_func_uint8_t_u_u((((*l_387) ^= ((safe_sub_func_uint32_t_u_u(0xB8B61DA0L, ((*l_383)++))) & ((*l_314) = g_144))) > ((((safe_rshift_func_uint16_t_u_u(65535UL, p_59)) && l_337) < (l_392 = (l_356 < p_59))) > ((safe_sub_func_uint32_t_u_u((l_395 == ((*l_396) = &p_58)), l_397)) <= p_59))), (-7L))) ^ p_59);
                    return l_398;
                }
                if (l_398)
                    goto lbl_401;
            }
            else
            {
                int *l_400 = (void*)0;
                int **l_399 = &l_400;
                (*l_399) = (void*)0;
            }
lbl_457:
            l_403 = func_66(&g_65, &g_65, l_345);
            ++l_454;
            if (l_337)
                goto lbl_457;
        }
        else
        {
            short l_468 = (-1L);
            (*l_403) = (safe_lshift_func_uint16_t_u_s(g_274, (safe_sub_func_uint32_t_u_u(p_58, (~(safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((0xDDAAEF32L <= (safe_mod_func_int32_t_s_s(((g_95 & l_468) != ((&l_433 != (void*)0) == l_453)), p_59))), (*l_403))), p_58)))))));
            (*l_403) = 1L;
            g_469 = (void*)0;
        }
        if (((safe_unary_minus_func_uint16_t_u((g_253 = (((*l_473) = &l_301) != ((*l_475) = l_474))))) != ((*l_484) |= ((((*l_476) = p_59) && (l_477 || ((safe_add_func_uint16_t_u_u(l_398, g_13)) == ((void*)0 == &p_58)))) <= (((l_421 = (safe_sub_func_uint8_t_u_u((0x2CL < g_482), 0x81L))) < p_59) & g_144)))))
        {
            int **l_486 = &l_403;
            (*l_486) = &l_442;
            return g_440;
        }
        else
        {
            volatile int **l_487 = &g_151;
            (*l_487) = &g_10;
            (*l_487) = (void*)0;
        }
    }
    return p_58;
}







static union U0 * func_61(unsigned char p_62, union U0 * p_63)
{
    union U0 *l_70 = &g_65;
    int *l_289 = (void*)0;
    volatile int **l_290 = (void*)0;
    volatile int **l_291 = &g_151;
    int *l_296 = &g_24;
    l_289 = func_66(l_70, l_70, &g_65);
    (*l_291) = &g_10;
    (*g_151) = ((g_174 & ((l_296 == &g_24) >= p_62)) == (((**l_291) || (+(safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(g_253, g_226)) ^ g_13), ((~1UL) > (-5L)))))) > g_65.f0));
    return l_70;
}







static int * func_66(union U0 * p_67, union U0 * p_68, union U0 * p_69)
{
    int l_80 = 0x558E0D31L;
    int *l_90 = (void*)0;
    int l_106 = 0xC17A62E5L;
    int l_109 = (-2L);
    int *l_288 = (void*)0;
    for (g_24 = (-23); (g_24 <= (-1)); ++g_24)
    {
        union U0 **l_73 = &g_64;
        int l_74 = 0x8B3027FEL;
        char *l_75 = &g_76;
        unsigned char l_79 = 0x9EL;
        short *l_81 = &g_65.f0;
        int l_138 = 0x7C395B56L;
        int **l_147 = (void*)0;
        char *l_229 = &g_76;
        char *l_230 = (void*)0;
        unsigned short l_237 = 0x5559L;
        int *l_254 = &l_138;
        int *l_255 = &l_106;
        int *l_256 = (void*)0;
        int *l_257 = (void*)0;
        int *l_258 = &l_109;
        int *l_259 = (void*)0;
        int *l_260 = &l_138;
        int *l_261 = (void*)0;
        int *l_262 = &l_74;
        int *l_263 = &l_106;
        int *l_264 = &l_109;
        int *l_265 = (void*)0;
        int *l_266 = &l_74;
        int *l_267 = &l_138;
        int *l_268 = &l_106;
        int *l_269 = &l_106;
        int *l_270 = &l_109;
        int *l_271 = (void*)0;
        int *l_272 = &l_74;
        (*l_73) = p_69;
        if (((l_74 >= ((*l_75) = l_74)) & (((((l_79 ^= l_74) < 0UL) >= ((!(0UL != l_74)) > (l_80 & ((*l_81) = (l_80 ^ l_80))))) == g_10) & l_80)))
        {
            int *l_83 = &g_24;
            int **l_82 = &l_83;
            unsigned char *l_91 = (void*)0;
            unsigned char *l_92 = (void*)0;
            unsigned char *l_93 = (void*)0;
            unsigned char *l_94 = &g_95;
            int l_132 = 0x67212537L;
            int l_217 = 0L;
            (*l_82) = &g_24;
            if ((((g_24 & l_79) < (((*l_75) = ((safe_mod_func_int8_t_s_s((l_74 <= g_13), (safe_add_func_int32_t_s_s(g_10, (*l_83))))) <= ((safe_add_func_uint8_t_u_u(((void*)0 == l_90), ((((*l_94) = l_74) ^ g_13) < g_13))) == l_79))) | g_13)) && g_24))
            {
                int *l_96 = (void*)0;
                int *l_97 = &l_74;
                int *l_98 = &l_74;
                int *l_99 = &l_74;
                int *l_100 = &l_74;
                int *l_101 = &l_74;
                int *l_102 = &l_74;
                int *l_103 = &l_74;
                int *l_104 = &l_74;
                int l_105 = (-9L);
                int *l_107 = &l_106;
                int *l_108 = &l_105;
                int *l_110 = &l_106;
                int *l_111 = &l_106;
                int *l_112 = &l_74;
                int *l_113 = &l_109;
                int *l_114 = (void*)0;
                int *l_115 = (void*)0;
                int *l_116 = &l_109;
                int l_117 = 0x9FEC4F7CL;
                int *l_118 = &l_105;
                int *l_119 = &l_109;
                int *l_120 = (void*)0;
                int *l_121 = &l_105;
                int *l_122 = (void*)0;
                int *l_123 = (void*)0;
                int *l_124 = &l_105;
                int *l_125 = &l_105;
                int *l_126 = &l_105;
                int *l_127 = (void*)0;
                int *l_128 = &l_105;
                int *l_129 = &l_74;
                int *l_130 = &l_117;
                int *l_131 = (void*)0;
                int *l_133 = &l_109;
                int *l_134 = &l_106;
                int *l_135 = &l_109;
                int *l_136 = &l_109;
                int *l_137 = &l_117;
                int *l_139 = &l_138;
                int l_140 = 1L;
                int *l_141 = (void*)0;
                int *l_142 = (void*)0;
                int *l_143 = &l_132;
                --g_144;
                return &g_24;
            }
            else
            {
                unsigned short l_167 = 1UL;
                if (((void*)0 != l_147))
                {
                    int *l_148 = &l_106;
                    (*l_148) &= g_10;
                    for (g_95 = 0; (g_95 == 51); g_95 = safe_add_func_uint32_t_u_u(g_95, 8))
                    {
                        (*l_82) = &l_106;
                        g_151 = &g_10;
                    }
                    if ((*l_148))
                        continue;
                    (*l_82) = &g_24;
                }
                else
                {
                    int l_166 = 0x728FC8EEL;
                    int l_207 = (-1L);
                    if ((*g_151))
                    {
                        int *l_152 = &l_106;
                        int *l_153 = &l_106;
                        int *l_154 = &l_106;
                        int *l_155 = &l_132;
                        int *l_156 = &l_106;
                        int *l_157 = &l_106;
                        int *l_158 = &l_138;
                        int *l_159 = &l_74;
                        int *l_160 = &l_106;
                        int *l_161 = &l_74;
                        int *l_162 = (void*)0;
                        int *l_163 = &l_132;
                        int *l_164 = &l_109;
                        int *l_165 = &l_74;
                        int *l_170 = (void*)0;
                        int *l_171 = &l_166;
                        int *l_172 = &l_74;
                        int *l_173 = &l_109;
                        l_167--;
                        --g_174;
                        if ((*g_151))
                            break;
                    }
                    else
                    {
                        int *l_177 = &l_109;
                        int *l_178 = &l_74;
                        int *l_179 = (void*)0;
                        int *l_180 = (void*)0;
                        int *l_181 = &l_166;
                        int l_183 = 0x98E595DBL;
                        int *l_184 = &l_183;
                        int *l_185 = &l_166;
                        int *l_186 = &l_183;
                        int *l_187 = &l_109;
                        int *l_188 = (void*)0;
                        int *l_189 = &l_106;
                        int *l_190 = &l_132;
                        int *l_191 = &l_166;
                        int *l_192 = &l_106;
                        int *l_193 = &l_132;
                        int *l_194 = &l_106;
                        int l_195 = 0L;
                        int *l_196 = &l_195;
                        int *l_197 = &l_109;
                        int *l_198 = &l_74;
                        int *l_199 = &l_183;
                        int *l_200 = (void*)0;
                        int *l_201 = &l_195;
                        int *l_202 = &l_109;
                        int *l_203 = &l_183;
                        int *l_204 = &l_106;
                        int *l_205 = &l_132;
                        int *l_206 = &l_166;
                        int *l_208 = (void*)0;
                        int *l_209 = &l_183;
                        int *l_210 = &l_138;
                        int *l_211 = &l_195;
                        int *l_212 = &l_74;
                        int *l_213 = &l_132;
                        int *l_214 = &l_106;
                        int *l_215 = &l_195;
                        int *l_216 = &l_166;
                        int *l_218 = &l_106;
                        int *l_219 = (void*)0;
                        int l_220 = (-1L);
                        int *l_221 = &l_132;
                        int *l_222 = &l_74;
                        int *l_223 = &l_217;
                        int *l_224 = &l_195;
                        int *l_225 = &l_207;
                        l_166 &= (*g_151);
                        --g_226;
                    }
                }
            }
            if ((*g_151))
                break;
            (*g_151) |= (+(l_229 != l_230));
        }
        else
        {
            unsigned char *l_232 = (void*)0;
            unsigned char **l_231 = &l_232;
            unsigned char ***l_233 = &l_231;
            int l_238 = 0x4EEC52D1L;
            int l_243 = 5L;
            unsigned char *l_244 = &g_95;
            short l_251 = 1L;
            unsigned short *l_252 = &g_253;
            (*l_233) = l_231;
            (*g_151) = (((safe_unary_minus_func_int16_t_s((253UL >= (((safe_add_func_uint16_t_u_u(l_237, (l_238 != (((void*)0 == &g_182) && ((*l_252) = (safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u((g_174 &= (++(*l_244))), (l_251 = ((&g_65 != (*l_73)) && (safe_div_func_int32_t_s_s(0L, (*g_151))))))), g_65.f0))))))) < 0xE483898EL) < g_24)))) >= l_238) == 1L);
        }
        --g_274;
        for (l_74 = 0; (l_74 <= (-22)); l_74 = safe_sub_func_int16_t_s_s(l_74, 7))
        {
            (*l_270) = (1UL || (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_div_func_int32_t_s_s(((+(g_287 == g_287)) && 0L), 0xB81438DEL)), l_106)), 5)));
            if ((*g_151))
                continue;
        }
    }
    return l_288;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_65.f0, "g_65.f0", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_273, "g_273", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_384, "g_384", print_hash_value);
    transparent_crc(g_440, "g_440", print_hash_value);
    transparent_crc(g_482, "g_482", print_hash_value);
    transparent_crc(g_485, "g_485", print_hash_value);
    transparent_crc(g_549, "g_549", print_hash_value);
    transparent_crc(g_568, "g_568", print_hash_value);
    transparent_crc(g_585.f0, "g_585.f0", print_hash_value);
    transparent_crc(g_644, "g_644", print_hash_value);
    transparent_crc(g_647, "g_647", print_hash_value);
    transparent_crc(g_711, "g_711", print_hash_value);
    transparent_crc(g_729, "g_729", print_hash_value);
    transparent_crc(g_853, "g_853", print_hash_value);
    transparent_crc(g_856, "g_856", print_hash_value);
    transparent_crc(g_864, "g_864", print_hash_value);
    transparent_crc(g_874, "g_874", print_hash_value);
    transparent_crc(g_937, "g_937", print_hash_value);
    transparent_crc(g_940, "g_940", print_hash_value);
    transparent_crc(g_1071, "g_1071", print_hash_value);
    transparent_crc(g_1231, "g_1231", print_hash_value);
    transparent_crc(g_1245, "g_1245", print_hash_value);
    transparent_crc(g_1257, "g_1257", print_hash_value);
    transparent_crc(g_1265, "g_1265", print_hash_value);
    transparent_crc(g_1318, "g_1318", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
