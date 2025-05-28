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
   unsigned char f0;
   unsigned char f1;
   unsigned f2;
   unsigned short f3;
};

union U1 {
   unsigned short f0;
};


static int g_23 = 0x08FB0B44L;
static union U0 g_28 = {0xE6L};
static int g_31 = 5L;
static int g_53 = 0xFA3C9E4AL;
static unsigned g_64 = 2UL;
static char g_76 = 0x78L;
static short g_79 = (-1L);
static char g_86 = 3L;
static unsigned g_117 = 0xA82FB348L;
static int *g_120 = &g_31;
static int g_187 = (-1L);
static char g_242 = 0L;
static unsigned char g_245 = 0x4DL;
static unsigned short g_268 = 65534UL;
static union U1 *g_296 = (void*)0;
static unsigned short g_343 = 1UL;
static short g_427 = (-5L);
static char g_429 = 0x77L;
static short g_435 = 0xEFF6L;
static short g_448 = 0x0221L;
static unsigned char g_454 = 1UL;
static short g_479 = 0xEC67L;
static unsigned g_491 = 0xA0155A2BL;
static union U0 *** const g_532 = (void*)0;
static int g_661 = 1L;
static int g_665 = 0x9D4AEB7AL;
static int g_672 = 0xC0272817L;
static char g_673 = (-1L);
static unsigned char g_682 = 0x0FL;
static const union U1 g_735 = {0xBCACL};
static char g_794 = (-10L);
static short g_802 = 1L;
static unsigned g_806 = 0xE4ECC752L;
static unsigned short g_930 = 65535UL;
static union U1 g_941 = {8UL};
static union U0 *g_1009 = &g_28;
static union U0 **g_1008 = &g_1009;
static int g_1031 = 0x77ABA84BL;
static unsigned char g_1040 = 1UL;
static union U0 g_1143 = {3UL};
static unsigned short g_1243 = 0UL;
static short g_1336 = 0L;
static int g_1345 = 0x2C994174L;
static unsigned g_1355 = 0UL;
static int g_1453 = (-8L);
static unsigned g_1460 = 0x27C8F451L;
static char g_1604 = 0x98L;
static unsigned g_1606 = 0x7DB86CECL;
static unsigned g_1717 = 18446744073709551615UL;
static int g_1922 = 0x7536EAFBL;
static unsigned char g_1927 = 0x2EL;
static unsigned g_2006 = 0xA4CEF10FL;
static char g_2078 = 0x3CL;
static unsigned g_2146 = 6UL;
static int *g_2214 = &g_1345;
static int **g_2233 = &g_120;
static int ** const *g_2232 = &g_2233;
static unsigned short g_2323 = 0xE978L;
static unsigned char g_2376 = 0xEEL;



static unsigned char func_1(void);
static unsigned char func_3(unsigned short p_4, union U1 p_5, unsigned p_6, short p_7, int p_8);
static short func_11(const int p_12, unsigned short p_13, const int p_14, unsigned p_15);
static unsigned func_24(union U0 p_25, char p_26, unsigned p_27);
static int * func_69(int * p_70, union U1 p_71);
static unsigned short func_123(char p_124, int * const p_125, const char p_126, unsigned char p_127);
static unsigned char func_130(union U0 p_131, int * p_132, int p_133, unsigned p_134);
static union U0 func_135(const unsigned short p_136, int * p_137, int * p_138, int * p_139);
static int * func_141(short p_142, const int * p_143, int * p_144);
static const int * func_146(union U1 p_147, unsigned char p_148);
static unsigned char func_1(void)
{
    unsigned short l_2 = 4UL;
    int *l_2352 = &g_31;
    union U1 l_2375 = {0x8BCAL};
    int l_2377 = 0x90506B8AL;
    int l_2393 = 0xC7B3C0DAL;
    unsigned l_2395 = 0x93825969L;
    unsigned l_2403 = 0x8322221BL;
    short l_2409 = 8L;
    if (l_2)
    {
        char l_29 = 0xA8L;
        union U1 l_2339 = {1UL};
        int *l_2347 = (void*)0;
        int *l_2348 = &g_31;
        union U0 l_2357 = {0x2CL};
        int l_2358 = 1L;
        char l_2359 = 0L;
        (*l_2348) = (func_3(((safe_rshift_func_int16_t_s_s(func_11(((safe_unary_minus_func_int16_t_s(((safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((0x09CFL | l_2) || (safe_mod_func_uint16_t_u_u(g_23, ((!1L) || g_23)))), (func_24(g_28, g_28.f0, l_29) , l_2))), g_76)) && g_673))) , l_29), g_1336, l_29, g_454), 3)) , 2UL), l_2339, g_941.f0, g_672, l_2339.f0) , (-1L));


        ;
        ;
        ;
        ;
        for (g_2078 = (-27); (g_2078 != 16); g_2078 = safe_add_func_uint8_t_u_u(g_2078, 5))
        {
            unsigned char l_2351 = 0xF0L;
            union U0 l_2355 = {0xB6L};
            int *l_2356 = &g_665;
            int *l_2374 = &g_23;
            (*l_2356) &= ((((+g_429) <= g_2078) || (l_2351 < (!func_130(l_2357, l_2348, l_2358, l_2359)))) <= (*l_2348));
            (*l_2374) = (safe_add_func_uint16_t_u_u((g_23 , g_2006), (*l_2356)));
        }
    }
    else
    {
        int *l_2378 = &g_23;
        int *l_2379 = &g_1031;
        int l_2380 = 0x37136B82L;
        int *l_2381 = &g_1031;
        int *l_2382 = &g_665;
        int *l_2383 = &l_2380;
        int *l_2384 = &g_1031;
        int *l_2385 = &g_665;
        int *l_2386 = &g_1345;
        int *l_2387 = (void*)0;
        int *l_2388 = (void*)0;
        int *l_2389 = (void*)0;
        int *l_2390 = &g_23;
        int *l_2391 = (void*)0;
        int *l_2392 = (void*)0;
        int *l_2394 = &g_1031;
        union U0 *l_2408 = &g_1143;
        ++l_2395;
        l_2409 = (safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u(l_2403)), (safe_mod_func_int32_t_s_s(((safe_sub_func_int32_t_s_s((**g_2233), ((g_435 , l_2408) == (void*)0))) > g_28.f0), func_3(g_491, g_941, (*l_2386), (*l_2352), (*g_120)))))) ^ (-1L)), 0xA74EL));
        (*l_2390) ^= (**g_2233);
    }


    ;
    ;
    ;
    ;
    (*g_2214) = (0x32L < ((safe_add_func_int16_t_s_s(((safe_add_func_int16_t_s_s(g_1922, (((g_86 <= (*l_2352)) || 0x67L) && 1UL))) >= (-3L)), 6L)) , 8L));
    return (*l_2352);
}







static unsigned char func_3(unsigned short p_4, union U1 p_5, unsigned p_6, short p_7, int p_8)
{
    union U0 l_2340 = {0x2DL};
    int * const l_2345 = &g_1345;
    int l_2346 = 0L;
    l_2346 &= ((p_5 , (l_2340 , ((((g_448 , p_5.f0) < (safe_rshift_func_int8_t_s_u((*l_2345), g_343))) | (*l_2345)) < 0xBE0F8BE1L))) && g_435);
    return p_5.f0;
}







static short func_11(const int p_12, unsigned short p_13, const int p_14, unsigned p_15)
{
    int l_1509 = 0xDB752CB0L;
    union U0 l_1527 = {0xC0L};
    int l_1568 = 7L;
    int **l_1724 = &g_120;
    int ***l_1723 = &l_1724;
    union U0 ***l_1851 = &g_1008;
    unsigned l_1854 = 5UL;
    union U0 l_1865 = {0UL};
    union U1 **l_1936 = &g_296;
    union U1 ***l_1935 = &l_1936;
    union U0 *l_2028 = &l_1865;
    char l_2133 = 0x64L;
    int l_2258 = 8L;
    int *l_2337 = &g_23;
    for (g_665 = 7; (g_665 > (-15)); g_665--)
    {
        const int **l_1488 = (void*)0;
        const int **l_1489 = (void*)0;
        const int **l_1490 = (void*)0;
        const int *l_1492 = (void*)0;
        const int **l_1491 = &l_1492;
        union U0 l_1517 = {1UL};
        int l_1528 = 0xBFC89BE2L;
        short l_1529 = (-1L);
        union U0 ***l_1623 = &g_1008;
        unsigned char l_1628 = 0x2AL;
        unsigned l_1632 = 1UL;
        (*l_1491) = func_146(g_941, (safe_unary_minus_func_uint8_t_u(0x99L)));

        ;
        for (g_1143.f1 = 0; (g_1143.f1 > 24); g_1143.f1 = safe_add_func_int16_t_s_s(g_1143.f1, 4))
        {
            union U0 l_1501 = {251UL};
            int *l_1502 = &g_187;
            int *l_1525 = &g_1345;
            int l_1530 = 0x165D1BEFL;
            int l_1537 = 9L;
            if (((safe_rshift_func_uint16_t_u_s(((g_242 , (safe_add_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u((p_13 | func_130(l_1501, l_1502, ((*l_1502) ^ ((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(p_12, ((p_12 <= (safe_sub_func_uint8_t_u_u(p_13, 0x71L))) , 1UL))) < p_15), g_454)) <= 0x5B30L)), (*l_1502))), (*l_1492))) == l_1509), 0x84FDA0A5L))) < 5L), 6)) ^ p_14))
            {
                char l_1516 = 0x1FL;
                union U0 l_1518 = {0x29L};
                int l_1526 = 0L;
                int *l_1531 = &g_1345;
                int *l_1532 = &g_1345;
                int *l_1533 = &l_1526;
                int *l_1534 = &g_23;
                int *l_1535 = &g_1031;
                int *l_1536 = &g_31;
                int *l_1538 = &l_1530;
                int *l_1539 = &l_1526;
                int *l_1540 = &l_1537;
                int *l_1541 = (void*)0;
                int *l_1542 = &l_1526;
                int *l_1543 = &l_1537;
                int *l_1544 = &l_1526;
                int *l_1545 = &l_1528;
                int *l_1546 = &l_1526;
                int *l_1547 = &l_1530;
                int *l_1548 = &l_1528;
                int *l_1549 = &g_1345;
                int *l_1550 = (void*)0;
                int *l_1551 = &g_187;
                int *l_1552 = &l_1528;
                int *l_1553 = &g_31;
                int *l_1554 = &l_1528;
                int *l_1555 = &l_1526;
                int *l_1556 = &l_1537;
                int *l_1557 = &l_1509;
                int *l_1558 = (void*)0;
                int *l_1559 = &g_1345;
                int *l_1560 = &g_31;
                int *l_1561 = &g_23;
                int *l_1562 = (void*)0;
                int *l_1563 = &g_23;
                int *l_1564 = &g_1031;
                int *l_1565 = &g_1345;
                int *l_1566 = &g_187;
                int *l_1567 = (void*)0;
                int *l_1569 = &g_1345;
                int *l_1570 = &l_1537;
                int *l_1571 = &l_1537;
                int *l_1572 = &l_1530;
                int *l_1573 = &g_187;
                int *l_1574 = &g_187;
                int *l_1575 = (void*)0;
                int *l_1576 = &g_1031;
                int *l_1577 = &g_1345;
                int *l_1578 = &l_1509;
                int *l_1579 = &g_31;
                int *l_1580 = (void*)0;
                int *l_1581 = &g_1031;
                int *l_1582 = (void*)0;
                int *l_1583 = &l_1530;
                int *l_1584 = &g_1031;
                int *l_1585 = &l_1530;
                int *l_1586 = &l_1528;
                int *l_1587 = &l_1537;
                int *l_1588 = &l_1530;
                int *l_1589 = &l_1568;
                int *l_1590 = &g_1031;
                int *l_1591 = &g_1031;
                int *l_1592 = &l_1537;
                int *l_1593 = &l_1526;
                int *l_1594 = &g_23;
                int *l_1595 = &l_1530;
                int *l_1596 = &l_1528;
                int *l_1597 = (void*)0;
                int *l_1598 = &l_1568;
                int *l_1599 = &g_1031;
                int *l_1600 = &l_1509;
                int *l_1601 = &g_1345;
                int *l_1602 = &g_31;
                int *l_1603 = &l_1528;
                int *l_1605 = &l_1537;
                for (g_28.f3 = 14; (g_28.f3 != 59); g_28.f3++)
                {
                    return p_12;
                }

                l_1528 = (safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((+p_13) & ((l_1516 | func_130(l_1517, func_141(((func_130(l_1518, &g_187, func_130(l_1517, &g_1031, p_12, (*l_1502)), p_14) >= 1UL) < g_479), &g_665, &l_1526), p_13, g_245)) <= g_673)), 4294967295UL)), 0x4AB7L));
                g_1606--;
                if ((((*l_1525) , g_187) , (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((*l_1564), ((safe_lshift_func_int8_t_s_s((((*l_1602) , (-1L)) || (g_941.f0 >= (l_1517 , 4294967295UL))), (safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(0xC87BL, (*l_1525))), 0x73AEL)))) , g_682))), (*l_1525)))))
                {
                    unsigned l_1624 = 0UL;
                    int *l_1625 = &l_1568;
                    const union U0 *l_1631 = &g_28;
                    const union U0 **l_1630 = &l_1631;
                    if ((((safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((&g_1008 == l_1623), 1L)), l_1624)) , func_130(l_1518, l_1625, p_12, ((g_28.f1 > (p_14 != 9UL)) || g_187))) | 0xE052L))
                    {
                        union U0 **l_1629 = &g_1009;
                        (*l_1589) ^= ((+(safe_add_func_int8_t_s_s((g_53 || l_1628), 0x11L))) | (l_1629 != (p_15 , l_1630)));
                    }
                    else
                    {
                        (*l_1534) &= p_13;
                    }
                    g_187 ^= 2L;
                    (*l_1525) = 0x20093B6DL;
                    g_120 = &l_1537;

                    ;
                }
                else
                {
                    l_1632++;
                }


            }
            else
            {
                return p_15;
            }


        }


        if ((((void*)0 == (*l_1623)) >= (((p_12 ^ (0x12B6L == ((((2UL && (safe_mod_func_int8_t_s_s(func_130(l_1527, &g_1345, p_12, g_1040), 1L))) != g_930) , g_1606) , 8UL))) && p_13) & 0x18DD9C06L)))
        {
            if (p_14)
                break;
            return g_672;
        }
        else
        {
            int *l_1639 = &l_1528;
            int *l_1640 = &g_1031;
            int l_1641 = 0x4D8A2DF3L;
            int *l_1642 = (void*)0;
            int *l_1643 = (void*)0;
            int *l_1644 = &l_1528;
            int *l_1645 = &l_1509;
            int *l_1646 = &g_1031;
            int *l_1647 = &g_1345;
            int *l_1648 = &g_1031;
            int *l_1649 = &g_23;
            int *l_1650 = &l_1568;
            int *l_1651 = &g_23;
            int *l_1652 = &g_23;
            int *l_1653 = (void*)0;
            int *l_1654 = (void*)0;
            int *l_1655 = &g_1031;
            int *l_1656 = &g_1345;
            int *l_1657 = &l_1641;
            int *l_1658 = &g_31;
            int *l_1659 = &g_1345;
            int *l_1660 = &l_1509;
            int *l_1661 = &g_187;
            int *l_1662 = &g_1345;
            int *l_1663 = &g_1345;
            int *l_1664 = &g_1345;
            int l_1665 = 0x005A3B34L;
            int *l_1666 = &g_1345;
            int *l_1667 = &l_1568;
            int *l_1668 = &l_1528;
            int *l_1669 = &l_1509;
            int *l_1670 = &l_1665;
            int *l_1671 = &g_23;
            int *l_1672 = &g_187;
            int *l_1673 = (void*)0;
            int *l_1674 = &l_1568;
            int *l_1675 = &g_187;
            int *l_1676 = &l_1641;
            int *l_1677 = &l_1641;
            int *l_1678 = &l_1665;
            int *l_1679 = &l_1568;
            int *l_1680 = &g_1345;
            int *l_1681 = (void*)0;
            int *l_1682 = &l_1528;
            int *l_1683 = &l_1665;
            int *l_1684 = &l_1509;
            int *l_1685 = &g_1031;
            int *l_1686 = &l_1665;
            int *l_1687 = (void*)0;
            int *l_1688 = &g_31;
            int *l_1689 = &l_1509;
            int *l_1690 = &g_31;
            int *l_1691 = (void*)0;
            int *l_1692 = &g_31;
            int *l_1693 = &g_187;
            int *l_1694 = (void*)0;
            int *l_1695 = &l_1528;
            int *l_1696 = &l_1641;
            int *l_1697 = (void*)0;
            int l_1698 = (-1L);
            int *l_1699 = (void*)0;
            int *l_1700 = (void*)0;
            int *l_1701 = &g_1345;
            int *l_1702 = &l_1665;
            int *l_1703 = &l_1698;
            int *l_1704 = (void*)0;
            int *l_1705 = &g_1031;
            int *l_1706 = &l_1509;
            int *l_1707 = &g_23;
            int *l_1708 = (void*)0;
            int *l_1709 = (void*)0;
            int *l_1710 = &l_1509;
            int *l_1711 = &l_1698;
            int *l_1712 = &g_31;
            int *l_1713 = (void*)0;
            int *l_1714 = &l_1528;
            int *l_1715 = &l_1528;
            int *l_1716 = &g_1031;
            g_1717++;
        }
        return l_1568;
    }


    if (g_435)
    {
        unsigned l_1720 = 7UL;
        const union U0 *l_1743 = &l_1527;
        const union U0 ** const l_1742 = &l_1743;
        int l_1757 = 0x7D8D5A3BL;
        int l_1789 = 0xE21D442EL;
        union U1 l_1808 = {4UL};
        union U1 **l_1934 = &g_296;
        union U1 *** const l_1933 = &l_1934;
        unsigned short l_2177 = 9UL;
        int **l_2186 = &g_120;
        int l_2223 = 3L;
        union U1 **l_2231 = &g_296;
        int l_2266 = 0L;
        int l_2311 = 1L;
        unsigned l_2332 = 0xAF67D848L;
        if (l_1720)
        {
            int **l_1722 = &g_120;
            int ***l_1721 = &l_1722;
            int *l_1725 = (void*)0;
            int l_1726 = 0x21BDA600L;
            int *l_1806 = &g_187;
            union U1 l_1821 = {7UL};
            union U1 **l_1827 = (void*)0;
            union U1 ***l_1826 = &l_1827;
            int * const l_1841 = &l_1757;
            union U0 * const ** const l_1850 = (void*)0;
            union U0 *l_1867 = &l_1527;
            l_1726 = (((l_1721 == l_1723) <= ((void*)0 == &g_1031)) || l_1720);
            if ((safe_add_func_uint8_t_u_u(0xC3L, 0xB9L)))
            {
                unsigned char l_1739 = 0x6FL;
                int l_1749 = (-2L);
                int l_1794 = 0x172ECADEL;
                union U0 l_1809 = {0UL};
                int * const l_1812 = &l_1726;
                int *l_1842 = &l_1509;
                union U1 l_1843 = {65529UL};
                for (g_28.f2 = (-22); (g_28.f2 >= 45); ++g_28.f2)
                {
                    int l_1758 = 0x0735648EL;
                    union U0 l_1817 = {0xB0L};
                    if (((safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(l_1739, p_15)), ((((safe_rshift_func_int16_t_s_s(func_130(l_1527, &g_1031, ((((void*)0 == l_1742) <= g_1031) > g_187), (safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(p_13, 0x7903L)) , p_12), l_1739))))), 4)) ^ l_1739) , p_13) & p_13))), l_1739)), g_1336)) ^ g_427))
                    {
                        int *l_1750 = &g_1031;
                        int *l_1751 = (void*)0;
                        int *l_1752 = &g_1031;
                        int *l_1753 = &l_1509;
                        int *l_1754 = &l_1568;
                        int *l_1755 = &g_23;
                        int *l_1756 = &g_187;
                        int *l_1759 = &l_1749;
                        int *l_1760 = &g_23;
                        int *l_1761 = &g_187;
                        int l_1762 = (-1L);
                        int *l_1763 = (void*)0;
                        int *l_1764 = (void*)0;
                        int *l_1765 = (void*)0;
                        int *l_1766 = &g_665;
                        int *l_1767 = (void*)0;
                        int *l_1768 = (void*)0;
                        int *l_1769 = &g_665;
                        int *l_1770 = (void*)0;
                        int *l_1771 = &l_1726;
                        int *l_1772 = &l_1509;
                        int *l_1773 = &l_1762;
                        int *l_1774 = &g_665;
                        int *l_1775 = (void*)0;
                        int *l_1776 = (void*)0;
                        int *l_1777 = &l_1762;
                        int *l_1778 = &g_1031;
                        int l_1779 = 7L;
                        int *l_1780 = &g_1031;
                        int *l_1781 = &l_1762;
                        int *l_1782 = &g_23;
                        int *l_1783 = &l_1509;
                        int *l_1784 = (void*)0;
                        int *l_1785 = &l_1779;
                        int *l_1786 = &g_187;
                        int *l_1787 = &g_665;
                        int *l_1788 = &l_1568;
                        int *l_1790 = &g_23;
                        int *l_1791 = &l_1779;
                        int *l_1792 = (void*)0;
                        int *l_1793 = &l_1789;
                        int *l_1795 = &l_1509;
                        int *l_1796 = &l_1794;
                        int *l_1797 = &g_1345;
                        int *l_1798 = &l_1789;
                        int *l_1799 = &l_1779;
                        int *l_1800 = &g_187;
                        unsigned l_1801 = 0x18E1EA98L;
                        union U1 **l_1805 = (void*)0;
                        union U1 ***l_1804 = &l_1805;
                        --l_1801;
                        (*l_1804) = &g_296;

                        ;
                        (*l_1777) ^= (l_1806 == (void*)0);
                        (*l_1769) = p_15;
                    }
                    else
                    {
                        int *l_1807 = &l_1789;
                        unsigned short l_1820 = 65535UL;
                        (*l_1806) &= l_1757;
                        (*l_1806) = func_130(l_1809, &l_1789, g_245, (*l_1812));
                        l_1789 = (((*l_1812) , (0x31FD9635L | g_1143.f0)) , (safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(func_130(l_1817, l_1807, l_1758, ((((((p_13 | ((((*l_1807) == ((safe_mul_func_int8_t_s_s(((*l_1743) , 0x12L), g_491)) >= 4L)) ^ l_1720) | (*l_1812))) >= 0L) , g_28.f0) | g_1717) & (*l_1812)) , l_1820)), 3L)), 3)));
                        return g_64;


                    }
                    (*l_1806) = (((((~((l_1821 , (p_14 > l_1817.f1)) > ((safe_lshift_func_uint8_t_u_u(g_429, 7)) ^ g_187))) , (((*l_1812) && g_1717) < 0x34L)) != g_682) != p_13) == 0x8B450DEDL);
                    for (l_1809.f2 = (-4); (l_1809.f2 != 6); l_1809.f2 = safe_add_func_int16_t_s_s(l_1809.f2, 2))
                    {
                        union U0 l_1837 = {0x60L};
                        int *l_1838 = &g_31;
                        (*l_1812) &= (safe_mul_func_uint16_t_u_u(((+((g_665 , 0x909804E4L) , p_12)) == 1UL), ((g_187 >= (((&l_1742 == (void*)0) | ((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s((p_14 != (func_130(l_1837, l_1838, g_1604, p_14) && 65535UL)))), g_661)) , 0x36736888L)) , g_491)) < 1UL)));
                        g_665 &= (safe_add_func_int16_t_s_s(p_12, (((*l_1838) >= (g_930 == func_130(l_1817, func_69(l_1842, l_1843), l_1758, g_735.f0))) , g_1606)));
                    }

                                        (**l_1723) = &l_1789;

                    ;
                }


                (*l_1724) = &g_665;

                ;
                (*l_1842) &= (*g_120);
                g_120 = func_69((*l_1722), g_941);
            }
            else
            {
                int l_1846 = 0x907FF16AL;
                int l_1847 = (-5L);
                union U0 *l_1857 = &g_28;
                const unsigned short l_1860 = 0xCE97L;
                int l_1901 = 1L;
                int l_1913 = 0xDCB473D3L;
                int **l_1930 = &l_1806;
                (*l_1806) = 0x798D1FA0L;
                for (g_661 = 0; (g_661 >= 21); g_661 = safe_add_func_uint16_t_u_u(g_661, 9))
                {
                    l_1846 = ((-2L) != p_13);
                }
                l_1847 ^= 0x874E7DE2L;
                if (((safe_sub_func_uint16_t_u_u(((g_673 < (l_1808.f0 || (l_1850 == l_1851))) & (safe_lshift_func_int8_t_s_s(l_1808.f0, 1))), l_1854)) > 0x358DL))
                {
                    char l_1866 = 1L;
                    int l_1872 = 0xF3E998F3L;
                    int l_1877 = 1L;
                    int l_1894 = 0xCA387836L;
                    int l_1902 = 0x12998211L;
                    int l_1906 = 0x2A878B9DL;
                    if (((((safe_rshift_func_int8_t_s_s(g_1031, (l_1857 != ((((g_86 & (safe_sub_func_int16_t_s_s((246UL | l_1860), (((safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s(l_1860, func_130(l_1865, &l_1847, (~2L), g_794))), p_14)) & g_1604) , l_1846)))) && g_454) , l_1866) , l_1867)))) == 1L) != l_1789) , 7L))
                    {
                        int *l_1868 = (void*)0;
                        int l_1869 = (-1L);
                        int *l_1870 = &l_1869;
                        int *l_1871 = &l_1789;
                        int *l_1873 = (void*)0;
                        int *l_1874 = &l_1757;
                        int *l_1875 = &g_665;
                        int *l_1876 = &g_1345;
                        int *l_1878 = &l_1568;
                        int *l_1879 = &l_1869;
                        int *l_1880 = &g_1031;
                        int *l_1881 = &l_1568;
                        int *l_1882 = &g_665;
                        int *l_1883 = (void*)0;
                        int *l_1884 = &g_31;
                        int *l_1885 = &l_1869;
                        int *l_1886 = &l_1789;
                        int *l_1887 = &l_1509;
                        int *l_1888 = (void*)0;
                        int *l_1889 = &g_23;
                        int *l_1890 = &l_1757;
                        int *l_1891 = &l_1509;
                        int *l_1892 = (void*)0;
                        int *l_1893 = &l_1877;
                        int *l_1895 = &l_1877;
                        int *l_1896 = &l_1789;
                        int *l_1897 = &l_1877;
                        int *l_1898 = &l_1789;
                        int *l_1899 = &g_665;
                        int *l_1900 = &l_1872;
                        int *l_1903 = (void*)0;
                        int *l_1904 = (void*)0;
                        int *l_1905 = &g_31;
                        int *l_1907 = &l_1509;
                        int *l_1908 = (void*)0;
                        int *l_1909 = (void*)0;
                        int *l_1910 = &l_1872;
                        int *l_1911 = &l_1847;
                        int *l_1912 = &l_1568;
                        int *l_1914 = &l_1894;
                        int *l_1915 = &l_1877;
                        int *l_1916 = (void*)0;
                        int *l_1917 = &l_1869;
                        int *l_1918 = &l_1869;
                        int *l_1919 = &g_1345;
                        int *l_1920 = (void*)0;
                        int *l_1921 = &l_1789;
                        int *l_1923 = &l_1913;
                        int *l_1924 = &l_1894;
                        int *l_1925 = &l_1757;
                        int *l_1926 = &g_1031;
                        g_1927++;
                    }
                    else
                    {
                        return p_15;
                    }
                    (**l_1723) = &l_1906;

                    ;
                }
                else
                {
                    (*l_1723) = l_1930;

                    ;
                }

                ;
            }

            ;
            (*l_1724) = &g_31;

            ;
        }
        else
        {
            short l_1937 = 0x45D2L;
            union U1 l_2020 = {0x30DBL};
            union U0 l_2060 = {0xD8L};
            const union U1 *l_2077 = &g_941;
            const union U1 **l_2076 = &l_2077;
            int l_2087 = 1L;
            int *l_2195 = (void*)0;
            char l_2222 = 0x7BL;
            int l_2241 = 0L;
            int l_2296 = 0x8FC1133FL;
            int l_2302 = (-1L);
            if ((safe_sub_func_int32_t_s_s((l_1933 == l_1935), 4294967287UL)))
            {
                union U0 l_1961 = {0x26L};
                unsigned char l_2026 = 1UL;
                int *l_2027 = &g_31;
                unsigned short l_2054 = 0UL;
                union U1 **l_2055 = &g_296;
                int l_2093 = 5L;
                if (l_1937)
                {
                    unsigned l_1950 = 0x49A88CBBL;
                    int *l_1951 = (void*)0;
                    int *l_1952 = &g_31;
                    (*l_1952) = ((((((safe_add_func_int16_t_s_s(l_1808.f0, ((!(safe_rshift_func_int8_t_s_u(p_12, 4))) && (safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(l_1937, (p_12 , ((safe_mul_func_int16_t_s_s(p_14, p_15)) < g_1717)))), p_14)), 2UL))))) , 8UL) , &g_735) != (*l_1934)) < 0L) , l_1950);
                }
                else
                {
                    union U0 l_1970 = {0xC7L};
                    int *l_1971 = &g_665;
                    int l_1992 = 5L;
                    union U1 *l_2019 = &l_1808;
                    if ((safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(g_86, g_1460)), 6)), (safe_mul_func_uint16_t_u_u(g_930, ((g_1453 > func_130(l_1961, func_141(((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(g_665, 4)), (((safe_mul_func_int16_t_s_s(l_1961.f0, (safe_lshift_func_int8_t_s_u(0x1DL, 2)))) == (func_130(l_1970, l_1971, p_13, g_1243) , g_427)) && p_12))) != (*l_1971)), &g_1031, l_1971), p_14, g_1355)) || 0x735DL))))))
                    {
                        int *l_1972 = (void*)0;
                        int l_1973 = (-1L);
                        int *l_1974 = &l_1757;
                        int *l_1975 = (void*)0;
                        int *l_1976 = &g_187;
                        int *l_1977 = &l_1509;
                        int *l_1978 = &l_1568;
                        int *l_1979 = &g_31;
                        int *l_1980 = &l_1973;
                        int *l_1981 = &l_1509;
                        int *l_1982 = (void*)0;
                        int *l_1983 = &g_23;
                        int *l_1984 = (void*)0;
                        int *l_1985 = &g_665;
                        int *l_1986 = &l_1973;
                        int *l_1987 = &l_1789;
                        int *l_1988 = &g_23;
                        int *l_1989 = &l_1757;
                        int *l_1990 = &l_1789;
                        int *l_1991 = &g_187;
                        int *l_1993 = &g_23;
                        int *l_1994 = &g_1345;
                        int *l_1995 = (void*)0;
                        int *l_1996 = &g_665;
                        int *l_1997 = (void*)0;
                        int *l_1998 = &g_23;
                        int *l_1999 = &g_665;
                        int *l_2000 = &l_1509;
                        int *l_2001 = &g_1031;
                        int *l_2002 = &g_187;
                        int *l_2003 = &g_31;
                        int *l_2004 = &g_665;
                        int *l_2005 = (void*)0;
                        --g_2006;
                    }
                    else
                    {
                        union U0 l_2021 = {0x3DL};
                        (*l_1971) = ((((l_1937 == (g_1717 ^ ((safe_mul_func_int16_t_s_s(((*l_1935) == ((0xF728L && (safe_add_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(g_343, (safe_rshift_func_uint8_t_u_u((7UL > 0UL), (safe_add_func_int32_t_s_s(0L, (l_1937 <= 0UL))))))) , g_1453), (*l_1971)))) , (void*)0)), l_1961.f0)) >= 1L))) , l_2019) != (void*)0) || p_13);
                        (**l_1723) = func_69(func_141(g_1717, &g_31, &l_1992), l_2020);

                        ;
                        (**l_1724) = (g_661 | ((safe_add_func_uint16_t_u_u((&g_120 == (l_2021 , (void*)0)), (***l_1723))) | 0x7D5CL));
                        (*g_120) |= l_2021.f1;
                    }
                    (*l_1742) = l_2028;

                    ;
                }

                ;
                if ((g_941.f0 >= p_13))
                {
                    (*l_1724) = (((safe_sub_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(p_15, p_12)), 0xBBBBL)), p_12)) != g_1336), 0xE3634037L)) && g_1717) , &g_187);

                    ;
                    (**l_1724) ^= (-1L);
                    (*l_1724) = (void*)0;

                    ;
                    (*l_2027) = (l_1961 , p_12);
                }
                else
                {
                    union U0 l_2045 = {253UL};
                    (**l_1723) = (p_15 , (void*)0);

                    ;
                }

                ;
                (**l_1723) = func_141((l_2055 == ((safe_rshift_func_uint8_t_u_u(func_130(l_1961, (*l_1724), ((l_2020 , g_64) == 4294967291UL), g_343), ((g_806 & 0x5901B339L) == g_1717))) , &g_296)), l_2027, &g_187);

                ;
                if ((*g_120))
                {
                    union U1 l_2075 = {65535UL};
                    for (g_806 = 0; (g_806 < 7); ++g_806)
                    {
                        union U0 l_2063 = {0xC2L};
                        union U0 **l_2066 = &g_1009;
                        unsigned char l_2067 = 0x8CL;
                        int *l_2074 = &g_1345;
                        int *l_2079 = (void*)0;
                        int *l_2080 = (void*)0;
                        int *l_2081 = &g_31;
                        int *l_2082 = &g_31;
                        int *l_2083 = &g_187;
                        int *l_2084 = &g_1031;
                        int *l_2085 = &l_1789;
                        int *l_2086 = &l_1568;
                        int *l_2088 = &g_1031;
                        int *l_2089 = &l_1509;
                        int *l_2090 = &g_1031;
                        int *l_2091 = &l_2087;
                        int *l_2092 = (void*)0;
                        int *l_2094 = (void*)0;
                        int *l_2095 = &l_1509;
                        int *l_2096 = &l_2087;
                        int *l_2097 = (void*)0;
                        int *l_2098 = &l_1789;
                        int *l_2099 = &l_1789;
                        int *l_2100 = &g_1031;
                        int *l_2101 = &l_1789;
                        int *l_2102 = &l_1568;
                        int *l_2103 = &l_1789;
                        int *l_2104 = (void*)0;
                        int *l_2105 = &l_1789;
                        int *l_2106 = (void*)0;
                        int *l_2107 = &g_1345;
                        int *l_2108 = (void*)0;
                        int *l_2109 = &l_1789;
                        int *l_2110 = &g_665;
                        int *l_2111 = &l_1568;
                        int *l_2112 = &l_2087;
                        int *l_2113 = (void*)0;
                        int *l_2114 = &l_2087;
                        int *l_2115 = &l_1757;
                        int *l_2116 = &l_2093;
                        int *l_2117 = (void*)0;
                        int *l_2118 = &g_665;
                        int *l_2119 = &l_2093;
                        int *l_2120 = &g_665;
                        int *l_2121 = &g_1031;
                        int *l_2122 = &g_31;
                        int *l_2123 = &g_187;
                        int *l_2124 = (void*)0;
                        int *l_2125 = &l_2087;
                        int *l_2126 = (void*)0;
                        int *l_2127 = (void*)0;
                        int *l_2128 = &g_1345;
                        int *l_2129 = &g_23;
                        int *l_2130 = &l_1568;
                        int *l_2131 = &g_665;
                        int *l_2132 = &l_1568;
                        int *l_2134 = &g_187;
                        int *l_2135 = &l_1789;
                        int *l_2136 = (void*)0;
                        int *l_2137 = &l_1568;
                        int *l_2138 = &l_1568;
                        int *l_2139 = (void*)0;
                        int *l_2140 = (void*)0;
                        int *l_2141 = &l_1568;
                        int *l_2142 = (void*)0;
                        int *l_2143 = &g_187;
                        int *l_2144 = &l_2093;
                        int *l_2145 = &l_1757;
                        (*l_2027) = func_130(l_2060, (**l_1723), l_1757, (safe_mul_func_uint16_t_u_u(g_672, func_130(l_2063, &g_1345, ((((safe_sub_func_int8_t_s_s((((-1L) != (((p_13 | func_130((**l_1742), &g_1031, p_15, g_427)) < g_1143.f0) == 4294967287UL)) < (-4L)), 0x6AL)) , l_2066) != (*l_1851)) , l_2067), p_14))));
                        if (p_12)
                            break;
                        (*g_120) = (((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(0UL, (safe_rshift_func_uint8_t_u_s(func_130((*l_1743), func_69(l_2074, l_2075), ((l_2076 != (g_661 , &g_296)) , (*g_120)), p_15), 4)))), p_14)) < g_1606) == 0x3CL);
                        --g_2146;
                    }
                    (*l_2076) = &g_735;

                    ;
                }
                else
                {
                    union U0 **l_2153 = (void*)0;
                    union U1 * const l_2154 = &g_941;
                    if ((safe_mod_func_int32_t_s_s((g_28.f1 & ((safe_mod_func_uint16_t_u_u((((func_130(l_1961, func_141(((!(g_802 , (**l_1724))) < 0xE9L), &l_2093, &l_1757), l_1808.f0, p_12) > g_1031) , &g_735) != l_2154), g_2078)) < p_12)), 0xA2DA5F1EL)))
                    {
                        (*l_1724) = func_69(&l_1789, g_735);

                        ;
                        (*l_2027) ^= (safe_mul_func_int8_t_s_s(p_12, (p_14 >= ((**l_1724) && (safe_mod_func_uint8_t_u_u(((***l_1723) > p_15), g_1336))))));
                        (*l_2055) = &g_941;

                        ;
                    }
                    else
                    {
                        return g_31;
                    }

                    ;
                    ;
                    g_120 = &g_1345;

                    ;
                }

                ;
                ;
                ;
            }
            else
            {
                unsigned l_2165 = 1UL;
                int *l_2166 = &l_2087;
                int *l_2167 = (void*)0;
                int ***l_2234 = &l_1724;
                (*l_1724) = &l_2087;

                ;
                if ((*g_120))
                {
                    int *l_2168 = &g_665;
                    int *l_2169 = &g_665;
                    int *l_2170 = &l_1509;
                    int *l_2171 = &l_1757;
                    int *l_2172 = &g_1031;
                    int *l_2173 = &g_187;
                    int *l_2174 = &g_31;
                    int *l_2175 = &l_1568;
                    int *l_2176 = &l_1757;
                    (*g_120) &= p_12;
                    l_2177++;
                }
                else
                {
                    union U0 *** const l_2189 = &g_1008;
                    int *l_2194 = &g_665;
                    unsigned l_2207 = 0x0FF0ECC3L;
                    for (l_1937 = 0; (l_1937 > (-13)); l_1937--)
                    {
                        int l_2192 = 0xA0D1A6E8L;
                        int *l_2193 = (void*)0;
                        int *l_2202 = &g_23;
                        int *l_2203 = (void*)0;
                        int *l_2204 = (void*)0;
                        int *l_2205 = &l_1568;
                        int *l_2206 = &g_187;
                        (*g_120) = (safe_add_func_uint16_t_u_u(func_130(l_2060, &l_2087, (*g_120), g_930), 3L));
                        (*g_120) |= (((safe_mul_func_int16_t_s_s((((safe_add_func_int32_t_s_s((p_14 <= p_15), p_12)) , p_14) , g_1336), 0x7551L)) , 0x44206C6DL) <= p_15);
                        (*l_2194) &= (*g_120);
                        ++l_2207;
                    }
                    g_2214 = (p_13 , &g_187);

                    ;
                    for (l_2060.f2 = 27; (l_2060.f2 > 47); l_2060.f2 = safe_add_func_uint8_t_u_u(l_2060.f2, 1))
                    {
                        (*g_2214) |= ((*g_120) & 0x2D25970EL);
                        (*l_2166) = (-8L);
                        (*g_2214) = p_15;
                        (***l_1723) = (***l_1723);
                    }

                                    }

                ;
                if ((safe_lshift_func_uint8_t_u_u(p_12, 5)))
                {
                    return g_1604;


                }
                else
                {
                    union U0 l_2221 = {1UL};
                    union U1 *l_2226 = &l_2020;
                    (*g_2214) ^= (((((g_1243 | 4L) , g_802) != g_1604) < (~(-1L))) != (safe_mod_func_int8_t_s_s(g_479, l_2221.f0)));
                    l_2226 = (void*)0;

                    ;
                }
                (*g_2214) ^= (((p_14 && 0x8111L) == ((*l_1743) , 0x56239D3DL)) != ((safe_sub_func_int32_t_s_s(2L, ((safe_mul_func_int8_t_s_s((((0UL && (((*l_2166) , (((l_2060 , (**l_1724)) , (*l_1933)) != l_2231)) | g_1717)) , g_2232) != l_2234), 0x3AL)) ^ g_672))) | 0x4EL));
            }

            ;
            ;
            ;
            ;
            ;
            for (g_454 = 0; (g_454 > 51); g_454 = safe_add_func_int8_t_s_s(g_454, 6))
            {
                int *l_2237 = &l_1757;
                int *l_2238 = (void*)0;
                int *l_2239 = (void*)0;
                int *l_2240 = &g_23;
                int *l_2242 = (void*)0;
                int *l_2243 = &l_1568;
                int *l_2244 = &g_1031;
                int *l_2245 = &g_1031;
                int *l_2246 = &l_1789;
                int *l_2247 = (void*)0;
                int *l_2248 = (void*)0;
                int *l_2249 = &g_23;
                int *l_2250 = (void*)0;
                int *l_2251 = (void*)0;
                int *l_2252 = &l_1509;
                int *l_2253 = &l_1757;
                int *l_2254 = &g_1031;
                int *l_2255 = &g_1031;
                int *l_2256 = &g_1031;
                int *l_2257 = &g_665;
                int *l_2259 = &g_187;
                int *l_2260 = &l_1509;
                int *l_2261 = &l_1757;
                int *l_2262 = &l_1757;
                int *l_2263 = (void*)0;
                int *l_2264 = (void*)0;
                int *l_2265 = &l_2087;
                int *l_2267 = (void*)0;
                int *l_2268 = &g_187;
                int *l_2269 = &l_1789;
                int *l_2270 = &l_1568;
                int *l_2271 = &l_1509;
                int l_2272 = 0L;
                int *l_2273 = (void*)0;
                int *l_2274 = &g_23;
                int *l_2275 = &g_1031;
                int *l_2276 = &l_1509;
                int *l_2277 = &g_31;
                int *l_2278 = &g_1345;
                int *l_2279 = &g_1345;
                int *l_2280 = (void*)0;
                int *l_2281 = &g_187;
                int *l_2282 = &g_1345;
                int *l_2283 = &l_1757;
                int *l_2284 = &l_1757;
                int *l_2285 = &l_1757;
                int *l_2286 = &l_1789;
                int *l_2287 = &g_1345;
                int *l_2288 = &g_665;
                int *l_2289 = &g_23;
                int *l_2290 = &g_1031;
                int *l_2291 = (void*)0;
                int *l_2292 = &l_2272;
                int *l_2293 = &l_2272;
                int *l_2294 = &g_31;
                int *l_2295 = &g_23;
                int *l_2297 = &l_1789;
                int *l_2298 = &l_2241;
                int *l_2299 = (void*)0;
                int *l_2300 = &g_665;
                int *l_2301 = &g_665;
                int *l_2303 = &l_1568;
                int *l_2304 = (void*)0;
                int *l_2305 = &g_1031;
                int *l_2306 = &l_2241;
                int *l_2307 = &g_665;
                int *l_2308 = &l_2272;
                int *l_2309 = &l_1509;
                int *l_2310 = &l_1789;
                int *l_2312 = &g_31;
                int *l_2313 = &l_2241;
                int *l_2314 = (void*)0;
                int *l_2315 = &l_2311;
                int *l_2316 = &l_2302;
                int *l_2317 = &l_1568;
                int *l_2318 = &g_23;
                int l_2319 = 0xD1E446FBL;
                unsigned char l_2320 = 0xD3L;
                --l_2320;
            }
            return g_2323;


        }


        (*g_2214) = (((250UL > ((g_2146 >= p_15) | ((+(p_12 ^ (safe_mod_func_int32_t_s_s(l_2332, g_343)))) && g_941.f0))) < 65535UL) == 0xB7D33789L);
    }
    else
    {
        union U1 l_2333 = {0xCA15L};
        int *l_2338 = &g_665;
        l_2338 = l_2337;

        ;
    }


    (*l_2337) &= 0xDB961C1DL;
    (*l_2337) = p_12;
    return g_491;
}







static unsigned func_24(union U0 p_25, char p_26, unsigned p_27)
{
    int *l_30 = &g_31;
    int l_34 = 7L;
    int l_41 = 0xDBC2A41BL;
    int l_43 = (-8L);
    int l_56 = 0xECCE005AL;
    unsigned short l_1272 = 0x0509L;
    unsigned short l_1359 = 0xC7D4L;
    short l_1375 = 1L;
    const int *l_1379 = &l_34;
    unsigned l_1482 = 4294967295UL;
    (*l_30) = p_27;
    for (g_28.f0 = 0; (g_28.f0 == 25); g_28.f0++)
    {
        int *l_35 = &g_31;
        int *l_36 = &g_31;
        int *l_37 = &g_31;
        int *l_38 = &l_34;
        int *l_39 = (void*)0;
        int *l_40 = &g_31;
        int *l_42 = &g_31;
        int *l_44 = &l_43;
        int *l_45 = &l_43;
        int *l_46 = &g_31;
        int *l_47 = &l_34;
        int *l_48 = &l_41;
        int *l_49 = &g_31;
        int *l_50 = &l_41;
        int *l_51 = &l_43;
        int *l_52 = &g_31;
        int *l_54 = (void*)0;
        int *l_55 = &g_31;
        int *l_57 = (void*)0;
        int *l_58 = &g_31;
        int *l_59 = &l_56;
        int *l_60 = &g_31;
        int *l_61 = &l_41;
        int *l_62 = &l_56;
        int *l_63 = &l_41;
        if (g_23)
            break;
        g_64++;
        (*l_30) ^= 0L;
    }
    if ((*l_30))
    {
        union U1 l_149 = {3UL};
        int *l_190 = (void*)0;
        union U0 **l_1264 = (void*)0;
        int l_1314 = 0xFC406DFDL;
        unsigned l_1351 = 4294967295UL;
        int *l_1362 = (void*)0;
        unsigned short l_1372 = 0x7E53L;
        int *l_1463 = (void*)0;
        int *l_1464 = &l_1314;
        for (l_56 = 0; (l_56 == 8); l_56 = safe_add_func_uint8_t_u_u(l_56, 2))
        {
            union U1 l_72 = {65535UL};
            g_120 = func_69(&g_23, l_72);

            ;
        }

        ;
        if (((void*)0 != &l_34))
        {
            return g_117;
        }
        else
        {
            union U1 l_140 = {0UL};
            short l_145 = 0x6EFFL;
            int l_1288 = 0xD4A63854L;
            int l_1289 = 0L;
            int l_1327 = (-1L);
            union U0 ** const * const l_1358 = &l_1264;
            int l_1441 = 0x33674AA4L;
            int l_1447 = 3L;
            int l_1449 = 0x40252218L;
            if (((g_28.f0 , (void*)0) != ((safe_mul_func_uint8_t_u_u((((func_123((((((safe_add_func_uint8_t_u_u(func_130(func_135(g_28.f1, func_69(&l_56, l_140), func_141(l_145, func_146(l_149, ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((safe_add_func_int32_t_s_s((((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s(0L, 3)) <= g_23), g_53)), 1UL)) , 1UL) == (*l_30)), 0UL)) && l_149.f0), p_27)), 5)), 0)) >= g_76)), &l_56), l_190), l_190, g_76, p_25.f1), p_25.f0)) != 0x685AL) | 0x26C89EFCL) & 65526UL) >= p_25.f1), &g_665, g_429, g_53) <= 0xB637L) , 0x3DL) & l_145), 8L)) , (void*)0)))
            {
                int l_1258 = 3L;
                int *l_1259 = &g_1031;
                int l_1354 = 0x072C37A2L;
                int **l_1363 = &l_30;
                if ((safe_sub_func_int8_t_s_s(g_930, g_735.f0)))
                {
                    int * const l_1265 = &l_41;
                    (*l_1259) = func_130(((((+p_27) != (p_27 <= l_1258)) != 0xF416L) , p_25), (p_27 , l_1259), (safe_add_func_uint32_t_u_u((g_64 >= (0xAACC7AADL | (*g_120))), 0x4D3F1783L)), l_145);
                    for (l_140.f0 = 0; (l_140.f0 < 13); l_140.f0++)
                    {
                        unsigned short l_1270 = 1UL;
                        int l_1271 = 0xAA946319L;
                        (*l_1265) = p_26;
                        if (l_1272)
                            break;
                    }
                }
                else
                {
                    int *l_1273 = (void*)0;
                    int *l_1274 = &g_1031;
                    int *l_1275 = &l_43;
                    int *l_1276 = &l_43;
                    int *l_1277 = &g_31;
                    int *l_1278 = (void*)0;
                    int l_1279 = 7L;
                    int *l_1280 = (void*)0;
                    int l_1281 = 8L;
                    int *l_1282 = &l_56;
                    int *l_1283 = (void*)0;
                    int *l_1284 = &l_1279;
                    int *l_1285 = &g_31;
                    int *l_1286 = &l_1281;
                    int *l_1287 = &l_56;
                    int *l_1290 = &g_665;
                    int *l_1291 = &l_1281;
                    int *l_1292 = &l_1279;
                    int *l_1293 = (void*)0;
                    int *l_1294 = &g_1031;
                    int *l_1295 = (void*)0;
                    int *l_1296 = &l_41;
                    int *l_1297 = &l_1279;
                    int *l_1298 = &g_187;
                    int *l_1299 = &l_1288;
                    int *l_1300 = (void*)0;
                    int *l_1301 = &g_187;
                    int *l_1302 = &g_665;
                    int *l_1303 = &l_1281;
                    int *l_1304 = (void*)0;
                    int *l_1305 = &l_41;
                    int *l_1306 = &l_34;
                    int *l_1307 = &l_56;
                    int *l_1308 = &l_1288;
                    int *l_1309 = &l_43;
                    int *l_1310 = &g_31;
                    int *l_1311 = (void*)0;
                    int *l_1312 = &l_1289;
                    int *l_1313 = &l_41;
                    int *l_1315 = (void*)0;
                    int *l_1316 = &l_1288;
                    int *l_1317 = (void*)0;
                    int *l_1318 = &l_1314;
                    int l_1319 = 1L;
                    int *l_1320 = &l_41;
                    int *l_1321 = &l_1314;
                    int *l_1322 = &l_1289;
                    int *l_1323 = (void*)0;
                    int *l_1324 = (void*)0;
                    int *l_1325 = &g_665;
                    int *l_1326 = &l_1319;
                    int *l_1328 = &l_1314;
                    int *l_1329 = &l_1319;
                    int *l_1330 = &l_1288;
                    int *l_1331 = &l_1314;
                    int *l_1332 = &l_1289;
                    int *l_1333 = &l_1289;
                    int *l_1334 = &g_665;
                    int *l_1335 = &g_665;
                    int *l_1337 = &l_1327;
                    int *l_1338 = &l_34;
                    int *l_1339 = &l_1314;
                    int *l_1340 = &l_1288;
                    int *l_1341 = &l_1279;
                    int *l_1342 = (void*)0;
                    int *l_1343 = &l_1327;
                    int *l_1344 = &g_187;
                    int *l_1346 = (void*)0;
                    int *l_1347 = (void*)0;
                    int *l_1348 = (void*)0;
                    int *l_1349 = &l_1281;
                    int *l_1350 = &l_41;
                    l_1351++;
                    g_1355--;
                    if (((void*)0 != l_1358))
                    {
                        (*l_1285) &= (g_448 != (~l_1359));
                        (*l_1307) = (!(-1L));
                        (*l_1312) = (&g_1008 == &l_1264);
                        (*l_1307) ^= 0xEB2CEC8DL;
                    }
                    else
                    {
                        int **l_1361 = &l_1309;
                        (*l_1316) = (safe_unary_minus_func_uint8_t_u(0x64L));
                        (*l_1296) &= (*l_30);
                        (*l_1361) = &l_1314;

                        ;
                    }

                    ;
                }
                (*l_1363) = (func_135(g_268, &g_665, &l_34, &g_187) , l_1362);

                ;
            }
            else
            {
                return p_26;
            }

            ;
            ;
            ;
            ;
            if (p_26)
            {
                int l_1400 = 1L;
                l_1362 = func_141((((safe_lshift_func_int8_t_s_s(p_27, g_673)) , ((safe_add_func_int32_t_s_s(((((safe_lshift_func_uint16_t_u_s((&p_25 == (void*)0), 15)) ^ (safe_add_func_uint16_t_u_u(g_1243, l_1372))) && (safe_lshift_func_int8_t_s_u((l_1289 ^ ((*g_120) < (p_25.f1 | g_1336))), 3))) & g_454), p_25.f0)) , p_25)) , g_86), &l_1314, &g_1031);

                ;
                if ((g_53 ^ l_1375))
                {
                    unsigned short l_1376 = 1UL;
                    if (l_1376)
                    {
                        l_1362 = &g_665;

                        ;
                        (*l_1362) = (&g_296 != &g_296);
                    }
                    else
                    {
                        int l_1380 = (-1L);
                        l_1327 &= ((*g_120) >= l_1380);
                    }

                    ;
                    l_56 &= (safe_lshift_func_uint8_t_u_s(g_672, g_930));
                }
                else
                {
                    return g_735.f0;
                }

                ;
                for (g_1143.f0 = 0; (g_1143.f0 == 28); g_1143.f0 = safe_add_func_uint32_t_u_u(g_1143.f0, 2))
                {
                    int *l_1386 = &g_1345;
                    union U1 l_1398 = {0UL};
                    if (((safe_unary_minus_func_int8_t_s(7L)) & (g_53 , p_26)))
                    {
                        (*l_1362) ^= p_25.f1;
                    }
                    else
                    {
                        int **l_1387 = (void*)0;
                        int **l_1388 = (void*)0;
                        int **l_1389 = &l_190;
                        unsigned short l_1399 = 3UL;
                        (*l_1389) = l_1386;

                        ;
                        g_1031 |= ((l_140.f0 && p_27) || (((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((((safe_rshift_func_uint8_t_u_u(p_27, g_1345)) == g_117) | g_682), 1)), p_27)) , l_1399) , 4294967288UL));
                    }
                    (*l_1362) = l_1400;
                }

                ;
            }
            else
            {
                int l_1401 = 0x5E4C0749L;
                return l_1401;
            }

            ;
            ;
            for (g_31 = 0; (g_31 >= (-26)); g_31 = safe_sub_func_uint32_t_u_u(g_31, 1))
            {
                int *l_1404 = &g_187;
                int *l_1405 = &l_1288;
                int *l_1406 = &l_34;
                int *l_1407 = &l_1327;
                int *l_1408 = &g_1345;
                int *l_1409 = (void*)0;
                int *l_1410 = &l_1289;
                int *l_1411 = (void*)0;
                int *l_1412 = &l_56;
                int *l_1413 = &g_665;
                int *l_1414 = &g_1031;
                int *l_1415 = (void*)0;
                int *l_1416 = (void*)0;
                int *l_1417 = &g_187;
                int *l_1418 = &l_56;
                int *l_1419 = (void*)0;
                int *l_1420 = &g_665;
                int *l_1421 = &l_1327;
                int *l_1422 = &g_665;
                int *l_1423 = &l_34;
                int *l_1424 = &l_1314;
                int *l_1425 = &l_41;
                int *l_1426 = &l_34;
                int l_1427 = 0xF5A8A427L;
                int *l_1428 = &l_41;
                int *l_1429 = (void*)0;
                int *l_1430 = &l_1327;
                int *l_1431 = &l_1314;
                int *l_1432 = &l_41;
                int *l_1433 = (void*)0;
                int *l_1434 = &l_1289;
                int *l_1435 = &l_41;
                int *l_1436 = (void*)0;
                int *l_1437 = &l_1289;
                int *l_1438 = &l_56;
                int *l_1439 = &g_187;
                int *l_1440 = &g_187;
                int *l_1442 = &l_41;
                int *l_1443 = &g_187;
                int *l_1444 = (void*)0;
                int *l_1445 = &l_1288;
                int *l_1446 = &g_665;
                int *l_1448 = &l_1327;
                int *l_1450 = &l_41;
                int *l_1451 = &g_1345;
                int *l_1452 = &l_1314;
                int *l_1454 = (void*)0;
                int *l_1455 = &l_1427;
                int *l_1456 = &l_34;
                int *l_1457 = &l_1447;
                int *l_1458 = &l_1288;
                int *l_1459 = &l_1314;
                g_1460--;
            }
        }

        ;
        ;
        ;
        ;
        ;
        ;
        (*l_1464) ^= (*g_120);
    }
    else
    {
        int *l_1465 = &g_31;
        int *l_1466 = &g_665;
        int *l_1467 = &g_665;
        int *l_1468 = &l_43;
        int l_1469 = 0x920D9D03L;
        int *l_1470 = &g_187;
        int *l_1471 = &l_34;
        int *l_1472 = &g_665;
        int *l_1473 = (void*)0;
        int *l_1474 = &l_41;
        int *l_1475 = &g_1031;
        int *l_1476 = &g_31;
        int *l_1477 = &l_1469;
        int *l_1478 = &l_56;
        int l_1479 = 1L;
        int *l_1480 = &g_1345;
        int *l_1481 = &g_187;
        --l_1482;
    }

    ;
    ;
    ;
    ;
    return p_25.f1;
}







static int * func_69(int * p_70, union U1 p_71)
{
    int *l_73 = (void*)0;
    int *l_74 = &g_31;
    int *l_75 = &g_31;
    int *l_77 = &g_31;
    int *l_78 = &g_31;
    int *l_80 = &g_31;
    int *l_81 = &g_31;
    int *l_82 = &g_31;
    int *l_83 = &g_31;
    int *l_84 = &g_31;
    int *l_85 = &g_31;
    int *l_87 = &g_31;
    int *l_88 = &g_31;
    int *l_89 = &g_31;
    int *l_90 = &g_31;
    int *l_91 = &g_31;
    int *l_92 = &g_31;
    int *l_93 = &g_31;
    int l_94 = (-1L);
    int *l_95 = &g_31;
    int *l_96 = &g_31;
    int *l_97 = &g_31;
    int *l_98 = &l_94;
    int l_99 = (-3L);
    int l_100 = 0L;
    int *l_101 = &l_100;
    int *l_102 = &l_94;
    int *l_103 = &g_31;
    int l_104 = 0x120B879BL;
    int l_105 = 0x57AFC499L;
    int *l_106 = &l_100;
    int *l_107 = &l_99;
    int *l_108 = &l_100;
    int *l_109 = &l_94;
    int l_110 = 0x8AC37448L;
    int *l_111 = &l_110;
    int *l_112 = &l_105;
    int *l_113 = (void*)0;
    int l_114 = 0x5DCFD1F9L;
    int *l_115 = &l_105;
    int *l_116 = &l_110;
    ++g_117;
    return p_70;


}







static unsigned short func_123(char p_124, int * const p_125, const char p_126, unsigned char p_127)
{
    union U0 *l_870 = &g_28;
    int l_877 = (-10L);
    char l_878 = 2L;
    int *l_887 = &g_187;
    union U1 *l_991 = &g_941;
    unsigned l_992 = 4UL;
    int l_1057 = 6L;
    int l_1092 = 0xDBFD131FL;
    int l_1093 = (-5L);
    union U0 *l_1112 = (void*)0;
    int *l_1255 = &l_1092;
    (*p_125) = (((((p_124 , l_870) != (void*)0) == g_268) >= (safe_mod_func_int8_t_s_s(0x8FL, p_126))) | ((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((((g_76 != (((p_127 || (-1L)) ^ l_877) || l_877)) , 0x1CL) == 5UL), 1L)), l_878)) != g_64));
    for (g_794 = 0; (g_794 >= 27); g_794 = safe_add_func_uint32_t_u_u(g_794, 4))
    {
        int **l_881 = &g_120;
        union U0 l_886 = {6UL};
        int l_925 = 0xB41FA521L;
        (*l_881) = p_125;

        ;
        g_31 &= (((safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(0x50C1L, (((l_877 , func_130(l_886, func_141(l_878, func_141(g_23, &g_665, &l_877), l_887), (*p_125), g_242)) > 0xBE6EL) , (**l_881)))), p_126)) && p_124) & g_479);
        for (g_479 = 0; (g_479 != (-12)); g_479 = safe_sub_func_uint32_t_u_u(g_479, 6))
        {
            int *l_890 = &g_187;
            int *l_891 = (void*)0;
            int *l_892 = &l_877;
            int *l_893 = &l_877;
            int *l_894 = (void*)0;
            int *l_895 = &g_187;
            int *l_896 = &g_31;
            int *l_897 = &l_877;
            int *l_898 = &g_31;
            int *l_899 = (void*)0;
            int *l_900 = &l_877;
            int *l_901 = &g_31;
            int *l_902 = (void*)0;
            int *l_903 = &g_665;
            int l_904 = (-1L);
            int *l_905 = &l_877;
            int *l_906 = &g_187;
            int *l_907 = &l_904;
            int *l_908 = (void*)0;
            int *l_909 = &g_187;
            int *l_910 = &l_904;
            int *l_911 = &l_904;
            int *l_912 = &g_31;
            int *l_913 = &g_665;
            int *l_914 = &g_31;
            int *l_915 = &g_665;
            int *l_916 = &g_665;
            int *l_917 = &l_877;
            int *l_918 = &l_904;
            int l_919 = 0x4465E9DAL;
            int *l_920 = &l_904;
            int *l_921 = (void*)0;
            int *l_922 = &l_877;
            int *l_923 = &g_187;
            int *l_924 = &g_31;
            int *l_926 = &l_925;
            int *l_927 = (void*)0;
            int *l_928 = &g_187;
            int *l_929 = &l_904;
            g_930++;
            (*l_929) ^= (+(*g_120));
            if ((*p_125))
                continue;
            if ((*g_120))
                break;
        }
    }

    ;
    if (((!g_802) | p_127))
    {
        union U1 *l_940 = &g_941;
        int l_951 = (-1L);
        int *l_1108 = &g_187;
        union U0 *l_1109 = (void*)0;
        int * const *l_1145 = &l_1108;
        int * const **l_1144 = &l_1145;
        int *l_1149 = &l_1057;
        int *l_1150 = &l_1093;
        int *l_1151 = (void*)0;
        int *l_1152 = &l_951;
        int *l_1153 = (void*)0;
        int *l_1154 = &l_1057;
        int *l_1155 = &l_877;
        int l_1156 = 1L;
        int *l_1157 = &l_951;
        int *l_1158 = (void*)0;
        int *l_1159 = &g_665;
        int *l_1160 = &l_877;
        int *l_1161 = (void*)0;
        int *l_1162 = &l_1093;
        int *l_1163 = &l_877;
        int *l_1164 = &g_31;
        int *l_1165 = &g_665;
        int *l_1166 = (void*)0;
        int *l_1167 = &g_187;
        int *l_1168 = (void*)0;
        int *l_1169 = &l_877;
        int *l_1170 = &l_1093;
        int *l_1171 = &l_1093;
        int *l_1172 = &l_1093;
        int *l_1173 = &l_1156;
        int l_1174 = 0xF302F0FEL;
        int *l_1175 = &g_187;
        int *l_1176 = &l_1174;
        int *l_1177 = &l_1057;
        int *l_1178 = &g_1031;
        int *l_1179 = &l_1156;
        int *l_1180 = &l_1057;
        int *l_1181 = &l_1057;
        int *l_1182 = &l_877;
        int *l_1183 = &l_951;
        int *l_1184 = &g_187;
        int *l_1185 = &l_1174;
        int *l_1186 = &l_1174;
        int *l_1187 = &l_1092;
        int *l_1188 = &l_951;
        int *l_1189 = &l_1093;
        int *l_1190 = (void*)0;
        int *l_1191 = &l_1174;
        int *l_1192 = (void*)0;
        int l_1193 = 1L;
        int *l_1194 = &l_951;
        int *l_1195 = &l_1092;
        int *l_1196 = (void*)0;
        int *l_1197 = (void*)0;
        int l_1198 = (-7L);
        int *l_1199 = &l_1092;
        int *l_1200 = &l_1193;
        int *l_1201 = &l_877;
        int *l_1202 = (void*)0;
        int *l_1203 = (void*)0;
        int *l_1204 = &l_1193;
        int *l_1205 = &g_187;
        int *l_1206 = &g_1031;
        int *l_1207 = &l_1093;
        int *l_1208 = (void*)0;
        int *l_1209 = &l_1156;
        int *l_1210 = &l_1093;
        int *l_1211 = (void*)0;
        int *l_1212 = &l_877;
        int *l_1213 = &g_665;
        int *l_1214 = &l_1093;
        int *l_1215 = &g_187;
        int *l_1216 = &l_1198;
        int *l_1217 = &l_951;
        int *l_1218 = (void*)0;
        int *l_1219 = &l_1093;
        int *l_1220 = &l_1174;
        int *l_1221 = &l_1057;
        int *l_1222 = &g_187;
        int *l_1223 = &l_1093;
        int *l_1224 = (void*)0;
        int *l_1225 = &l_1198;
        int *l_1226 = &l_1193;
        int *l_1227 = &g_31;
        int *l_1228 = &l_1092;
        int *l_1229 = &l_1057;
        int *l_1230 = &l_1093;
        int *l_1231 = &l_1174;
        int *l_1232 = &g_665;
        int *l_1233 = &l_1174;
        int *l_1234 = (void*)0;
        int *l_1235 = &l_951;
        int l_1236 = 0x40B0A62AL;
        int *l_1237 = &l_1236;
        int *l_1238 = &g_665;
        int *l_1239 = (void*)0;
        int *l_1240 = &l_1092;
        int *l_1241 = &l_1198;
        int *l_1242 = &l_951;
        if ((*g_120))
        {
            unsigned char l_975 = 0x97L;
            union U0 l_982 = {9UL};
            int l_1056 = 0x5BC29296L;
            int l_1100 = 0x0F1921D2L;
            if (((((~0x3E5AL) == g_672) , (void*)0) == (void*)0))
            {
                const int *l_953 = &g_31;
                int *l_954 = &g_31;
                int l_969 = 0x7FA8E34CL;
                union U1 l_980 = {1UL};
                union U1 * const * const l_989 = (void*)0;
                char l_1000 = 0x4EL;
                for (g_429 = 0; (g_429 != (-23)); --g_429)
                {
                    unsigned l_939 = 8UL;
                    union U1 *l_942 = &g_941;
                    unsigned l_952 = 0xB182D760L;
                    int **l_955 = &g_120;
                    int l_958 = 0xF1A4C744L;
                    unsigned short l_990 = 65535UL;
                    (*l_955) = func_141((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((p_127 || (p_127 , 0x1A1109BFL)), ((~l_939) >= g_23))), (l_940 != l_942))), &g_31, func_141((safe_add_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((((safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((l_951 , g_86) >= l_952), 0x96161454L)), p_124)) < l_951) & (-8L)), p_124)) | p_124), 0xA6L)), l_953, l_954));

                    ;
                    for (g_427 = 0; (g_427 == 10); g_427 = safe_add_func_uint8_t_u_u(g_427, 1))
                    {
                        int *l_959 = &g_31;
                        int *l_960 = &g_31;
                        int *l_961 = &l_951;
                        int *l_962 = &l_951;
                        int *l_963 = &g_187;
                        int *l_964 = &g_187;
                        int *l_965 = &l_951;
                        int *l_966 = &l_877;
                        int *l_967 = (void*)0;
                        int *l_968 = (void*)0;
                        int *l_970 = &g_31;
                        int *l_971 = &g_31;
                        int *l_972 = &l_958;
                        int *l_973 = (void*)0;
                        int *l_974 = &l_951;
                        union U0 l_981 = {252UL};
                        ++l_975;
                        (**l_955) = (safe_sub_func_int16_t_s_s((g_187 != func_130((l_980 , l_981), &g_23, (**l_955), ((*l_887) , p_127))), (*l_954)));
                    }
                    if ((func_130(l_982, &g_187, (safe_add_func_int16_t_s_s((*l_954), (((((0x5E5B8AEFL <= (safe_sub_func_uint8_t_u_u(p_126, (safe_sub_func_int8_t_s_s(((p_126 | p_126) && ((l_989 != l_989) <= (*l_954))), g_479))))) < g_53) | l_990) , l_942) == l_991))), (*l_953)) & l_951))
                    {
                        ++l_992;
                    }
                    else
                    {
                        union U1 l_999 = {0UL};
                        g_665 &= (((((safe_mul_func_uint16_t_u_u((p_126 | (safe_mul_func_uint8_t_u_u(0x65L, (l_999 , (p_126 ^ ((((g_479 == p_126) <= (((g_64 != p_124) & 0x53L) , p_124)) , l_1000) == (*l_887))))))), (**l_955))) != (*g_120)) || 4294967289UL) == 0UL) ^ l_951);
                    }
                    if ((*p_125))
                        break;
                }
            }
            else
            {
                union U0 **l_1007 = (void*)0;
                int l_1024 = 6L;
                int l_1026 = 5L;
                int l_1058 = (-4L);
                int l_1073 = (-10L);
                int l_1082 = 0xE503E098L;
                int l_1103 = 0x3C27A65FL;
                if (((g_23 , func_69(func_141(g_79, ((((((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(0UL, p_124)), g_454)) , (safe_lshift_func_uint16_t_u_u(l_951, 11))) , ((g_930 < p_124) && g_427)) & 0x8CCAL) | 0L) , (void*)0), &g_187), (*l_940))) == &l_951))
                {
                    (*p_125) = (((*g_120) | 0x1D13D04BL) != 0xF1E5L);
                }
                else
                {
                    (*l_887) = ((0x292C3D8EL == ((*l_991) , (*g_120))) ^ (*l_887));
                }
                (*p_125) = (*l_887);
                g_1008 = l_1007;

                ;
                for (g_117 = 20; (g_117 >= 27); g_117 = safe_add_func_int32_t_s_s(g_117, 5))
                {
                    int **l_1012 = &l_887;
                    int *l_1013 = &g_187;
                    int *l_1014 = (void*)0;
                    int *l_1015 = &g_187;
                    int *l_1016 = &g_31;
                    int *l_1017 = &l_951;
                    int *l_1018 = (void*)0;
                    int *l_1019 = &l_951;
                    int *l_1020 = (void*)0;
                    int *l_1021 = (void*)0;
                    int *l_1022 = &l_877;
                    int *l_1023 = (void*)0;
                    int *l_1025 = &l_951;
                    int *l_1027 = &g_665;
                    int *l_1028 = &g_665;
                    int *l_1029 = (void*)0;
                    int *l_1030 = &l_951;
                    int *l_1032 = &g_665;
                    int *l_1033 = &l_877;
                    int l_1034 = 0x3887C43AL;
                    int *l_1035 = &g_665;
                    int *l_1036 = &g_31;
                    int *l_1037 = &g_31;
                    int *l_1038 = &l_877;
                    int *l_1039 = &g_1031;
                    int l_1068 = (-5L);
                    int l_1079 = 4L;
                    int l_1080 = 0x8C72EE0DL;
                    (*l_1012) = (void*)0;

                    ;
                    g_1040++;
                    if ((*g_120))
                    {
                        (*l_1028) = (((p_127 | (((void*)0 == &g_941) != ((&p_125 == (void*)0) >= (*g_120)))) && ((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((safe_mod_func_int16_t_s_s(0x1E7FL, ((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u(p_124, 0x2843D53AL)), p_126)) ^ 5L))) == 0x0913L), g_76)), 0xA1L)) > g_448)) && 0L);
                    }
                    else
                    {
                        int * const *l_1054 = &l_1014;
                        int * const **l_1053 = &l_1054;
                        int **l_1055 = &g_120;
                        int *l_1059 = (void*)0;
                        int *l_1060 = &g_31;
                        int *l_1061 = &l_1058;
                        int *l_1062 = (void*)0;
                        int *l_1063 = (void*)0;
                        int *l_1064 = &l_877;
                        int *l_1065 = &l_1026;
                        int *l_1066 = &g_1031;
                        int *l_1067 = &g_187;
                        int l_1069 = (-2L);
                        int *l_1070 = &g_665;
                        int *l_1071 = &l_877;
                        int *l_1072 = &g_31;
                        int *l_1074 = &l_1056;
                        int *l_1075 = &g_187;
                        int *l_1076 = &l_877;
                        int *l_1077 = (void*)0;
                        int *l_1078 = &l_951;
                        int *l_1081 = &l_1034;
                        int *l_1083 = (void*)0;
                        int *l_1084 = (void*)0;
                        int *l_1085 = &l_1058;
                        int *l_1086 = &l_951;
                        int *l_1087 = (void*)0;
                        int *l_1088 = &l_1080;
                        int *l_1089 = &l_1069;
                        int *l_1090 = &l_1080;
                        int *l_1091 = &l_1034;
                        int *l_1094 = &l_1079;
                        int *l_1095 = (void*)0;
                        int *l_1096 = &g_187;
                        int *l_1097 = (void*)0;
                        int *l_1098 = &l_1026;
                        int *l_1099 = &g_665;
                        int *l_1101 = (void*)0;
                        int *l_1102 = &l_951;
                        int *l_1104 = &l_1058;
                        unsigned short l_1105 = 0xDF45L;
                        (*l_1017) = (*p_125);
                        (*l_1053) = &p_125;

                        ;
                        (*l_1055) = (**l_1053);

                        ;
                        l_1105++;
                    }
                    l_1108 = p_125;

                    ;
                }

                ;
                ;
            }

            ;
            ;
            ;
        }
        else
        {
            int *l_1142 = &g_23;
            int *l_1146 = &l_1057;
            union U0 l_1147 = {0x35L};
            short l_1148 = (-1L);
            (*g_1008) = l_1109;

            ;
            for (g_53 = 0; (g_53 > (-12)); g_53 = safe_sub_func_uint32_t_u_u(g_53, 4))
            {
                short l_1115 = 0xBC46L;
                (*l_887) = (-9L);
                (*g_1008) = l_1112;
                for (g_665 = 0; (g_665 == (-27)); --g_665)
                {
                    int *l_1116 = &g_23;
                    int **l_1117 = (void*)0;
                    int **l_1118 = &l_1116;
                    union U0 *l_1123 = &g_28;
                    if ((*l_1108))
                        break;
                    (*l_1108) ^= l_1115;
                    (*l_1118) = l_1116;
                    (**l_1145) |= (&g_120 == (((((safe_add_func_uint8_t_u_u((1UL | (((((void*)0 != l_1123) , (safe_sub_func_uint8_t_u_u(((l_1115 | func_130(l_1147, &l_951, l_1148, p_124)) >= 0L), 7UL))) == 1L) == (-1L))), p_124)) , 0xD775D5FBL) & 0UL) & p_124) , &g_120));
                }
            }
            return g_343;
        }

        ;
        ;
        ;
        g_1243--;
        (*l_1242) |= (*g_120);
    }
    else
    {
        int *l_1254 = &g_187;
        (*l_1254) = ((safe_sub_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(g_448, g_427)) > (func_130((*l_870), &g_1031, (safe_lshift_func_int8_t_s_u((~(func_135((func_130((*l_870), func_141(p_126, &l_1057, ((*g_120) , l_1254)), (*g_120), p_124) != (*g_120)), l_1255, &l_1093, l_1254) , g_941.f0)), g_79)), g_735.f0) != g_448)), p_126)) != g_673);
    }

    ;
    ;
    return p_127;
}







static unsigned char func_130(union U0 p_131, int * p_132, int p_133, unsigned p_134)
{
    unsigned char l_717 = 0x65L;
    short l_737 = (-1L);
    union U1 l_741 = {0x05A1L};
    int *l_827 = &g_665;
    int **l_868 = (void*)0;
    int **l_869 = (void*)0;
    for (g_435 = (-20); (g_435 > 24); ++g_435)
    {
        char l_722 = (-1L);
        union U0 *l_726 = &g_28;
        union U0 **l_725 = &l_726;
        int l_749 = 3L;
        int l_797 = (-1L);
        unsigned char l_820 = 0xDFL;
    }
    l_827 = func_69(&g_187, l_741);

    ;
    return g_28.f1;
}







static union U0 func_135(const unsigned short p_136, int * p_137, int * p_138, int * p_139)
{
    unsigned l_193 = 0xDE1848A2L;
    int l_194 = (-1L);
    int l_199 = 0x31F77301L;
    int l_208 = 4L;
    int l_219 = 1L;
    int l_230 = 0xE293F4BBL;
    union U0 *l_516 = &g_28;
    unsigned short l_552 = 0x304DL;
    union U1 l_560 = {65535UL};
    union U1 ** const l_582 = &g_296;
    int l_589 = (-7L);
    const short l_602 = 0xD19EL;
    if ((*p_138))
    {
        int l_200 = 1L;
        int l_206 = (-5L);
        int l_213 = (-6L);
        int l_221 = (-1L);
        union U1 l_248 = {1UL};
        unsigned l_295 = 1UL;
        int l_527 = 1L;
        int **l_546 = &g_120;
        union U0 l_568 = {0x44L};
        if (((safe_mul_func_int16_t_s_s(g_86, ((g_28.f0 , p_136) , g_23))) , (&g_120 != (void*)0)))
        {
            int *l_195 = &l_194;
            int l_196 = 2L;
            int *l_197 = &l_196;
            int *l_198 = &g_31;
            int l_201 = 0x51AF0014L;
            int *l_202 = &l_194;
            int *l_203 = &l_196;
            int *l_204 = (void*)0;
            int *l_205 = &l_199;
            int *l_207 = &g_31;
            int *l_209 = &l_201;
            int *l_210 = (void*)0;
            int *l_211 = (void*)0;
            int *l_212 = &l_201;
            int *l_214 = (void*)0;
            int *l_215 = &g_31;
            int *l_216 = &l_194;
            int *l_217 = &g_31;
            int *l_218 = &l_199;
            int *l_220 = &g_31;
            int *l_222 = &l_201;
            int *l_223 = (void*)0;
            int l_224 = 0L;
            int *l_225 = &g_31;
            int *l_226 = &l_221;
            int *l_227 = (void*)0;
            int *l_228 = &l_199;
            int *l_229 = (void*)0;
            int l_231 = 0L;
            int *l_232 = &l_194;
            int *l_233 = &l_231;
            int *l_234 = &l_206;
            int *l_235 = &l_208;
            int *l_236 = (void*)0;
            int *l_237 = &g_31;
            int *l_238 = &g_187;
            int *l_239 = &l_206;
            int *l_240 = &l_219;
            int *l_241 = &g_187;
            int *l_243 = &l_230;
            int *l_244 = (void*)0;
            (*p_138) |= 0xFCA91F7CL;
            (*p_137) = 0x00C9FB39L;
            (*p_137) |= (!l_193);
            g_245++;
        }
        else
        {
            int **l_249 = (void*)0;
            union U0 l_291 = {0UL};
            p_139 = func_69(&l_221, l_248);

            ;
            if ((safe_sub_func_int8_t_s_s(g_187, p_136)))
            {
                int l_269 = (-7L);
                (*p_139) = (safe_sub_func_uint32_t_u_u((5L <= (safe_mod_func_uint16_t_u_u((((0x1AB63E39L > (safe_lshift_func_int8_t_s_u((p_136 , ((*p_137) < (255UL ^ p_136))), (((safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((~(safe_mul_func_int16_t_s_s(((((p_136 <= ((((safe_mul_func_uint8_t_u_u(l_221, l_206)) , (*p_139)) , p_136) , p_136)) == (*g_120)) , 0xC6L) | 0x0BL), p_136))), p_136)) , p_136), g_268)), l_194)) ^ l_269) ^ l_269)))) , g_187) , l_269), 0xAC8DL))), 0x42ED1920L));
                (*p_138) |= 0x97375CE8L;
            }
            else
            {
                unsigned l_274 = 4294967295UL;
                union U1 l_292 = {0x4C34L};
                union U1 **l_297 = (void*)0;
                union U1 **l_298 = &g_296;
                for (g_86 = 22; (g_86 <= 22); g_86 = safe_add_func_uint32_t_u_u(g_86, 1))
                {
                    unsigned l_277 = 8UL;
                    int **l_278 = &g_120;
                    (*p_137) = (safe_rshift_func_uint16_t_u_s(l_274, (((((253UL & p_136) & 7UL) != 0x73L) , l_194) , (safe_add_func_uint32_t_u_u(((((p_136 >= 0xEB25L) && p_136) ^ l_274) == 0x1160L), l_277)))));
                    (*l_278) = p_138;


                    (*l_278) = func_141((g_31 , (safe_add_func_int8_t_s_s((((safe_add_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(5UL, (~(safe_mod_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((~p_136), 14)) <= (l_291 , ((l_292 , (safe_rshift_func_uint8_t_u_u((((g_28 , (*g_120)) , (**l_278)) | 0xBBEDE7E5L), l_295))) != 0xF397C00CL))), p_136)) < (*g_120)), g_242))))) ^ p_136), g_242)) == p_136) == 0x565CL), 0L))), p_137, p_138);

                    ;
                }
                (*l_298) = g_296;
            }
            for (l_221 = 9; (l_221 > 7); --l_221)
            {
                return l_291;

                            }
        }

        ;
        for (g_268 = 0; (g_268 <= 8); ++g_268)
        {
            union U1 l_309 = {1UL};
            int l_341 = 0x7FEED684L;
            int l_416 = 6L;
            int l_450 = 0x03A189BEL;
            union U0 * const l_512 = &g_28;
            (*p_137) &= ((safe_mul_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(65530UL, l_219)) , (65533UL == 0x0C6DL)), ((((p_136 < 0x2ECF321DL) != ((l_295 , &g_120) != ((~p_136) , (void*)0))) , (void*)0) != &g_296))) ^ (*p_138));
            (*p_138) = (l_199 && (safe_rshift_func_uint16_t_u_u((7UL ^ 0xA833L), (!(l_309 , l_309.f0)))));
        }
        for (l_230 = 13; (l_230 < 7); l_230 = safe_sub_func_int8_t_s_s(l_230, 4))
        {
            unsigned l_575 = 0x6CD3486CL;
            (*p_138) = ((l_560 , (1UL || p_136)) , ((safe_add_func_int16_t_s_s(g_28.f0, (g_427 || (1UL && (*p_138))))) , (*g_120)));
            (*p_137) = ((((safe_mod_func_uint16_t_u_u((l_575 | g_86), (safe_sub_func_uint8_t_u_u(((((((p_136 >= ((!(p_136 & (*g_120))) || p_136)) ^ ((!0x055DL) && (1UL & (((safe_lshift_func_int16_t_s_u(((0UL | (-7L)) <= p_136), (**l_546))) , 0x48BFL) == g_28.f1)))) | g_79) , 251UL) || g_86) && 0x55B9L), g_242)))) ^ g_23) | 4294967287UL) , 0L);
        }
    }
    else
    {
        (*p_138) |= (g_242 < 0x3892L);
        return (*l_516);

            }


    if ((l_582 == l_582))
    {
        int l_600 = (-7L);
        const unsigned short l_601 = 2UL;
        (*p_137) = (safe_mod_func_int32_t_s_s((*g_120), 0x743BEBD9L));
        (*p_138) ^= ((safe_add_func_int16_t_s_s(p_136, (safe_rshift_func_uint8_t_u_u(l_589, ((((safe_unary_minus_func_uint16_t_u(((safe_unary_minus_func_int8_t_s((safe_sub_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s(p_136, l_208)) > p_136), (0x6DL == ((safe_sub_func_int8_t_s_s((((g_479 , (safe_add_func_int8_t_s_s(0x5CL, 0x04L))) , 0UL) ^ l_600), l_601)) , (-1L))))))) == l_219))) < g_245) , 0L) == p_136))))) , l_602);
        (*l_582) = g_296;
        for (l_560.f0 = 0; (l_560.f0 >= 52); l_560.f0++)
        {
            union U0 *l_611 = &g_28;
            g_31 = (safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(p_136, (safe_mul_func_uint8_t_u_u(p_136, (((*l_516) , ((l_552 & (0x479D4BE2L & ((+g_448) , ((void*)0 == l_611)))) <= g_117)) || l_600))))), 0UL));
            (*p_138) = (safe_unary_minus_func_uint16_t_u(65530UL));
        }
    }
    else
    {
        union U0 **l_615 = &l_516;
        int l_616 = 3L;
        int l_617 = 0xB58C1B3EL;
        int l_639 = 0x4893DD36L;
        int l_650 = 1L;
        (*p_137) = ((((*p_138) , (safe_add_func_int8_t_s_s(((l_615 != (void*)0) & g_79), g_479))) && p_136) , 0L);
        if ((*p_138))
        {
            int *l_618 = &l_194;
            int *l_619 = &g_187;
            int *l_620 = (void*)0;
            int *l_621 = &l_616;
            int *l_622 = &l_219;
            int *l_623 = &l_208;
            int *l_624 = &l_589;
            int *l_625 = (void*)0;
            int *l_626 = &l_230;
            int *l_627 = (void*)0;
            int *l_628 = (void*)0;
            int *l_629 = &l_219;
            int *l_630 = &l_589;
            int *l_631 = (void*)0;
            int *l_632 = &g_187;
            int *l_633 = &l_617;
            int *l_634 = &l_208;
            int *l_635 = (void*)0;
            int *l_636 = &l_589;
            int *l_637 = &l_617;
            int *l_638 = &l_219;
            int l_640 = (-2L);
            int l_641 = 0L;
            int *l_642 = &l_641;
            int *l_643 = &l_641;
            int *l_644 = &l_194;
            int *l_645 = &l_639;
            int l_646 = 0L;
            int *l_647 = (void*)0;
            int *l_648 = &l_639;
            int *l_649 = &l_641;
            int *l_651 = &l_208;
            int *l_652 = &l_194;
            int *l_653 = &l_639;
            int *l_654 = &l_194;
            int *l_655 = &l_589;
            int *l_656 = &l_194;
            int *l_657 = (void*)0;
            int *l_658 = &l_230;
            int *l_659 = &l_650;
            int *l_660 = (void*)0;
            int l_662 = (-3L);
            int *l_663 = (void*)0;
            int *l_664 = &l_640;
            int *l_666 = (void*)0;
            int l_667 = 0xF9E345E4L;
            int *l_668 = &l_646;
            int *l_669 = &l_194;
            int *l_670 = &l_650;
            int *l_671 = (void*)0;
            int *l_674 = (void*)0;
            int *l_675 = &l_616;
            int *l_676 = &l_616;
            int *l_677 = (void*)0;
            int *l_678 = (void*)0;
            int *l_679 = &l_650;
            int *l_680 = &l_640;
            int *l_681 = &l_617;
            --g_682;
            l_650 &= (safe_mul_func_int16_t_s_s(((*p_137) <= 0x96AABE22L), (p_136 , (safe_rshift_func_int8_t_s_s(0L, 2)))));
        }
        else
        {
            int l_705 = 0xCBC03E09L;
            for (g_31 = 17; (g_31 < 29); ++g_31)
            {
                int *l_691 = &l_208;
                int *l_692 = &l_616;
                int *l_693 = &l_199;
                int *l_694 = &g_665;
                int *l_695 = &l_639;
                int *l_696 = &l_639;
                int *l_697 = &l_194;
                int *l_698 = (void*)0;
                int *l_699 = (void*)0;
                int *l_700 = &g_187;
                int *l_701 = &g_665;
                unsigned short l_702 = 1UL;
                l_702++;
                l_705 &= l_230;
            }
        }
    }
    return (*l_516);

    }







static int * func_141(short p_142, const int * p_143, int * p_144)
{
    int l_188 = 0x37A7FFAEL;
    int *l_189 = &g_31;
    (*p_144) = l_188;
    return l_189;


}







static const int * func_146(union U1 p_147, unsigned char p_148)
{
    unsigned char l_164 = 0xE0L;
    int *l_167 = &g_31;
    int **l_168 = &l_167;
    char l_180 = 0x79L;
    l_164++;
    (*l_168) = l_167;
    g_187 &= (((safe_unary_minus_func_int16_t_s((safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((0x64L == g_79) > ((safe_add_func_uint32_t_u_u((g_53 && (safe_mod_func_int8_t_s_s(g_23, l_180))), (**l_168))) | (*g_120))), (((safe_lshift_func_uint8_t_u_u(1UL, (safe_lshift_func_uint8_t_u_s(((*l_168) != (void*)0), g_64)))) | 0UL) , p_148))), p_147.f0)), 0)))) && (**l_168)) & 0xB3L);
    return &g_187;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_28.f0, "g_28.f0", print_hash_value);
    transparent_crc(g_28.f1, "g_28.f1", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    transparent_crc(g_343, "g_343", print_hash_value);
    transparent_crc(g_427, "g_427", print_hash_value);
    transparent_crc(g_429, "g_429", print_hash_value);
    transparent_crc(g_435, "g_435", print_hash_value);
    transparent_crc(g_448, "g_448", print_hash_value);
    transparent_crc(g_454, "g_454", print_hash_value);
    transparent_crc(g_479, "g_479", print_hash_value);
    transparent_crc(g_491, "g_491", print_hash_value);
    transparent_crc(g_661, "g_661", print_hash_value);
    transparent_crc(g_665, "g_665", print_hash_value);
    transparent_crc(g_672, "g_672", print_hash_value);
    transparent_crc(g_673, "g_673", print_hash_value);
    transparent_crc(g_682, "g_682", print_hash_value);
    transparent_crc(g_735.f0, "g_735.f0", print_hash_value);
    transparent_crc(g_794, "g_794", print_hash_value);
    transparent_crc(g_802, "g_802", print_hash_value);
    transparent_crc(g_806, "g_806", print_hash_value);
    transparent_crc(g_930, "g_930", print_hash_value);
    transparent_crc(g_941.f0, "g_941.f0", print_hash_value);
    transparent_crc(g_1031, "g_1031", print_hash_value);
    transparent_crc(g_1040, "g_1040", print_hash_value);
    transparent_crc(g_1143.f0, "g_1143.f0", print_hash_value);
    transparent_crc(g_1143.f1, "g_1143.f1", print_hash_value);
    transparent_crc(g_1243, "g_1243", print_hash_value);
    transparent_crc(g_1336, "g_1336", print_hash_value);
    transparent_crc(g_1345, "g_1345", print_hash_value);
    transparent_crc(g_1355, "g_1355", print_hash_value);
    transparent_crc(g_1453, "g_1453", print_hash_value);
    transparent_crc(g_1460, "g_1460", print_hash_value);
    transparent_crc(g_1604, "g_1604", print_hash_value);
    transparent_crc(g_1606, "g_1606", print_hash_value);
    transparent_crc(g_1717, "g_1717", print_hash_value);
    transparent_crc(g_1922, "g_1922", print_hash_value);
    transparent_crc(g_1927, "g_1927", print_hash_value);
    transparent_crc(g_2006, "g_2006", print_hash_value);
    transparent_crc(g_2078, "g_2078", print_hash_value);
    transparent_crc(g_2146, "g_2146", print_hash_value);
    transparent_crc(g_2323, "g_2323", print_hash_value);
    transparent_crc(g_2376, "g_2376", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
