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
   const short f0;
   unsigned f1;
};

union U1 {
   unsigned f0 : 26;
};


static union U0 g_10 = {-8L};
static int g_20 = 0xE76E5B14L;
static short g_46 = 1L;
static short g_93 = 0xA3DAL;
static unsigned g_98 = 4294967288UL;
static int g_132 = 0x42E27698L;
static unsigned g_154 = 0x3BEAFE2AL;
static int g_173 = 0x9053DE64L;
static union U1 g_174 = {0xE6704342L};
static const int *g_185 = &g_132;
static const int **g_184 = &g_185;
static int g_188 = 3L;
static int g_259 = 0xBCFC55BBL;
static union U0 g_288 = {6L};
static union U0 *g_287 = &g_288;
static int *g_420 = &g_259;
static int **g_419 = &g_420;
static short g_549 = 0x824FL;
static short g_571 = (-1L);
static short g_576 = 0x6D62L;
static unsigned short g_586 = 2UL;
static unsigned short g_590 = 1UL;
static int g_695 = 2L;
static unsigned g_760 = 0UL;
static unsigned char g_899 = 0x66L;
static unsigned char g_990 = 4UL;
static unsigned g_1059 = 0xC66B220CL;
static short g_1133 = 0x7E10L;
static char g_1176 = 0xCFL;
static int g_1178 = (-3L);
static short g_1195 = 0xC3BBL;
static unsigned g_1203 = 8UL;
static unsigned char g_1242 = 0xD7L;
static unsigned char g_1419 = 0UL;
static unsigned g_1429 = 0xE2713057L;
static int *g_1432 = &g_132;
static int *g_1439 = &g_259;
static union U0 g_1476 = {0x3FB4L};
static int g_1570 = (-9L);
static char g_1580 = 0L;
static int g_1602 = 0x9351AAC9L;
static short g_1606 = 0L;
static unsigned g_1658 = 0xC35CCCA6L;
static int g_1727 = 8L;
static unsigned g_1730 = 0x7003A852L;
static union U1 *g_1733 = (void*)0;
static unsigned g_1925 = 18446744073709551614UL;
static unsigned short g_2072 = 0x1998L;
static short g_2215 = (-5L);
static int g_2237 = 0x735EBA56L;
static int g_2264 = 0x1DB229E5L;
static unsigned g_2274 = 0xD1A81C9AL;
static char g_2293 = (-4L);
static int g_2337 = 0L;
static char g_2400 = (-1L);
static unsigned short g_2404 = 0xDD1DL;
static const union U0 *g_2436 = &g_10;
static int g_2520 = 0x53AC4077L;
static char g_2536 = 0xB4L;
static int g_2537 = 0xC2BFAEC2L;
static char g_2542 = 0x21L;
static int g_2599 = (-6L);



static const unsigned short func_1(void);
static int func_4(int p_5, union U0 p_6, const int p_7, unsigned short p_8);
static unsigned func_15(union U0 p_16);
static union U0 func_106(int p_107, unsigned p_108);
static char func_109(const int ** p_110, unsigned char p_111, int ** p_112, unsigned char p_113, unsigned p_114);
static const int ** func_115(unsigned p_116, int p_117);
static unsigned func_120(unsigned p_121);
static int func_127(const int * p_128, int * const p_129, int * p_130);
static int * func_134(unsigned short p_135, unsigned p_136, int ** p_137, union U1 p_138);
static unsigned short func_139(unsigned char p_140, char p_141, const unsigned p_142);
static const unsigned short func_1(void)
{
    unsigned short l_2366 = 0x8DECL;
    short l_2418 = (-4L);
    const int *l_2422 = &g_259;
    int *l_2430 = &g_1727;
    unsigned l_2431 = 0x3200A50AL;
    const union U0 **l_2452 = &g_2436;
    int l_2508 = 0x0238AFDEL;
    int l_2535 = (-3L);
    unsigned l_2583 = 0x22EF58A7L;
    int ***l_2589 = &g_419;
    unsigned l_2592 = 0x56574B1FL;
    unsigned char l_2600 = 1UL;
    if ((safe_div_func_uint16_t_u_u(65535UL, 0x951FL)))
    {
        char l_9 = 0x10L;
        int l_2387 = 1L;
        int l_2399 = 0x92359C80L;
        int **l_2432 = &g_1439;
        unsigned char l_2563 = 1UL;
        (*g_1439) &= func_4(l_9, g_10, g_10.f0, g_10.f0);
        if (l_2366)
        {
            int *l_2371 = &g_2264;
            (*g_420) |= ((safe_lshift_func_int16_t_s_u((0xF105FC84L && ((l_2366 == g_586) != (safe_sub_func_int8_t_s_s((g_899 && l_9), 0xEAL)))), g_173)) <= (*l_2371));
        }
        else
        {
            int *l_2372 = &g_2264;
            int *l_2373 = &g_132;
            int *l_2374 = &g_173;
            int *l_2375 = (void*)0;
            int *l_2376 = &g_1727;
            int *l_2377 = &g_259;
            int *l_2378 = &g_188;
            int *l_2379 = &g_188;
            int *l_2380 = &g_1602;
            int *l_2381 = &g_132;
            int *l_2382 = &g_259;
            int *l_2383 = &g_132;
            int *l_2384 = &g_1727;
            int *l_2385 = &g_20;
            int l_2386 = 0x83DB0922L;
            int *l_2388 = &l_2386;
            int *l_2389 = &l_2386;
            int *l_2390 = &g_1727;
            int *l_2391 = &g_2264;
            int *l_2392 = &g_188;
            int *l_2393 = &g_1602;
            int *l_2394 = &g_188;
            int *l_2395 = &g_132;
            int *l_2396 = &g_132;
            int *l_2397 = &g_1602;
            int *l_2398 = &g_1602;
            int *l_2401 = &g_132;
            int *l_2402 = &l_2399;
            int *l_2403 = &l_2399;
            union U1 l_2423 = {4294967295UL};
            unsigned short l_2544 = 0xE575L;
            int l_2564 = 0xD3C45E6CL;
            g_2404++;
            if ((*l_2403))
            {
                int l_2411 = (-1L);
                int l_2488 = 0x8B116718L;
                union U0 l_2553 = {0x267FL};
                for (l_2386 = 13; (l_2386 > (-16)); l_2386 = safe_sub_func_uint16_t_u_u(l_2386, 9))
                {
                    unsigned l_2415 = 0xBE497CC7L;
                    for (g_288.f1 = (-30); (g_288.f1 >= 37); g_288.f1 = safe_add_func_int32_t_s_s(g_288.f1, 9))
                    {
                        unsigned l_2412 = 0x18812025L;
                        ++l_2412;
                    }

                    if (l_2415)
                        break;
                    for (g_1178 = (-16); (g_1178 <= 29); g_1178 = safe_add_func_int16_t_s_s(g_1178, 1))
                    {
                        unsigned l_2419 = 4294967291UL;
                        if (l_2399)
                            break;
                        l_2419--;
                    }
                    (*g_419) = func_134(((void*)0 != &l_2411), g_2072, &g_420, l_2423);

                    ;
                }

                ;
                if ((~l_2387))
                {
                    const int l_2435 = 0L;
                    (*l_2401) = (g_1606 < (l_2411 >= g_1242));
                    (*l_2378) = (~(safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(l_2431, ((func_139(g_1203, g_1476.f0, l_2435) == 65528UL) > 0x6DAB85D2L))), 1)), g_20)));
                    (*l_2397) &= ((((g_576 | (((void*)0 == g_2436) | g_2293)) == ((safe_lshift_func_int8_t_s_s(((**l_2432) && ((void*)0 != &g_185)), ((safe_add_func_uint32_t_u_u((l_2411 != (safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((0xE2L || g_1059))), l_2435)), l_2411))), (*g_1432))) >= g_154))) > g_174.f0)) && (*l_2430)) == 0x1781B40EL);
                    (*l_2396) |= (safe_lshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s((((void*)0 != l_2452) ^ (l_2411 <= 0xD3L)), ((*l_2379) ^ (&g_185 != &g_185)))), 6));
                }
                else
                {
                    short l_2455 = 8L;
                    for (g_1730 = (-13); (g_1730 > 53); g_1730 = safe_add_func_int16_t_s_s(g_1730, 9))
                    {
                        int *l_2456 = &g_259;
                        int l_2457 = 3L;
                        int *l_2458 = &g_132;
                        int *l_2459 = &g_259;
                        int *l_2460 = (void*)0;
                        int *l_2461 = &g_1602;
                        int *l_2462 = &g_1727;
                        int *l_2463 = &g_1602;
                        int *l_2464 = &l_2387;
                        int l_2465 = 0x3DD6377EL;
                        int *l_2466 = (void*)0;
                        int *l_2467 = &l_2457;
                        int l_2468 = (-1L);
                        int *l_2469 = &g_2264;
                        int *l_2470 = &l_2457;
                        int *l_2471 = &g_2264;
                        int *l_2472 = &g_188;
                        int *l_2473 = &l_2411;
                        int *l_2474 = (void*)0;
                        int *l_2475 = &l_2386;
                        int *l_2476 = (void*)0;
                        int *l_2477 = &g_173;
                        int *l_2478 = &g_188;
                        int *l_2479 = &l_2399;
                        int *l_2480 = &l_2457;
                        int *l_2481 = &g_20;
                        int *l_2482 = &l_2387;
                        int *l_2483 = &l_2386;
                        int *l_2484 = &l_2399;
                        int *l_2485 = &l_2399;
                        int *l_2486 = &g_132;
                        int *l_2487 = &l_2399;
                        int *l_2489 = &g_2264;
                        int *l_2490 = (void*)0;
                        int *l_2491 = &g_1727;
                        int *l_2492 = &g_259;
                        int *l_2493 = &l_2411;
                        int *l_2494 = &g_1727;
                        int *l_2495 = &g_2264;
                        int *l_2496 = &g_188;
                        int *l_2497 = &g_2264;
                        int *l_2498 = (void*)0;
                        int *l_2499 = &l_2457;
                        int *l_2500 = (void*)0;
                        int *l_2501 = &l_2465;
                        int *l_2502 = &g_173;
                        int *l_2503 = &g_1727;
                        int *l_2504 = &g_2264;
                        int *l_2505 = &g_2264;
                        int *l_2506 = &g_132;
                        int *l_2507 = &g_1602;
                        int *l_2509 = &g_20;
                        int *l_2510 = &g_20;
                        int *l_2511 = &g_259;
                        int *l_2512 = &l_2387;
                        int *l_2513 = (void*)0;
                        int *l_2514 = &l_2387;
                        int *l_2515 = (void*)0;
                        int *l_2516 = &g_259;
                        int *l_2517 = &l_2508;
                        int *l_2518 = &l_2399;
                        int *l_2519 = &g_1602;
                        int *l_2521 = &l_2411;
                        int *l_2522 = (void*)0;
                        int *l_2523 = (void*)0;
                        int *l_2524 = &g_173;
                        int *l_2525 = &g_259;
                        int *l_2526 = &g_259;
                        int *l_2527 = &l_2468;
                        int *l_2528 = (void*)0;
                        int *l_2529 = (void*)0;
                        int *l_2530 = &l_2411;
                        int *l_2531 = &l_2488;
                        int *l_2532 = &l_2465;
                        int *l_2533 = (void*)0;
                        int *l_2534 = &l_2386;
                        int *l_2538 = &g_188;
                        int *l_2539 = &l_2411;
                        int *l_2540 = (void*)0;
                        int *l_2541 = &g_259;
                        int *l_2543 = (void*)0;
                        ++l_2544;
                    }
                    if ((safe_mod_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s((func_4((**l_2432), l_2553, (~((safe_lshift_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u((l_2411 <= ((*l_2378) > g_1602)), g_1242)) | ((safe_div_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s(((g_2400 > ((safe_sub_func_int16_t_s_s((l_2411 ^ (g_98 | g_586)), l_2411)) ^ 0x55L)) <= g_1133))), (**l_2432))) ^ 8L)) & g_2293), l_2563)) > g_20)), (*l_2372)) >= 0x3BL), (-5L))), l_2564)) <= g_173) && g_1133), g_2404)))
                    {
                        return l_2488;
                    }
                    else
                    {
                        (*g_184) = (void*)0;

                        ;
                    }

                    ;
                }

                ;
            }
            else
            {
                unsigned l_2567 = 1UL;
                int l_2568 = (-6L);
                int *l_2569 = &l_2568;
                int *l_2570 = &l_2386;
                int l_2571 = 1L;
                int *l_2572 = &g_2264;
                int *l_2573 = &g_1602;
                int *l_2574 = &g_259;
                int *l_2575 = (void*)0;
                int *l_2576 = &l_2568;
                int *l_2577 = (void*)0;
                int *l_2578 = &l_2387;
                int *l_2579 = &g_2264;
                int *l_2580 = &l_2571;
                int *l_2581 = (void*)0;
                int *l_2582 = &g_2537;
                (*l_2398) ^= (!(9UL <= (safe_sub_func_int16_t_s_s((l_2567 == g_1203), ((void*)0 != &g_2436)))));
                --l_2583;
                (*g_184) = func_134(g_990, (*l_2574), &g_420, l_2423);

                ;
                ;
            }

            ;
            ;
        }

        ;
        ;
        (**l_2432) = 0x7A3931FCL;
    }
    else
    {
        union U0 *l_2586 = &g_288;
        (*l_2430) = (**g_419);
        (*l_2452) = l_2586;

        ;
    }

    ;
    ;
    ;
    (*g_1439) &= (safe_lshift_func_uint8_t_u_s((g_2274 | (l_2589 == &g_419)), g_2542));
    l_2600 &= (((safe_rshift_func_uint8_t_u_s(((l_2592 && (safe_sub_func_int8_t_s_s((*l_2430), (((*l_2422) || (((safe_sub_func_int32_t_s_s(0x1113EE61L, (-9L))) <= (g_93 >= 1UL)) != func_139((safe_lshift_func_uint8_t_u_s((*l_2430), g_1176)), (*l_2430), g_1570))) != (*l_2430))))) || 4294967295UL), g_2599)) > g_288.f0) == (*l_2430));
    (*g_1432) ^= 0L;
    return (*l_2422);
}







static int func_4(int p_5, union U0 p_6, const int p_7, unsigned short p_8)
{
    unsigned l_101 = 1UL;
    int **l_777 = &g_420;
    union U1 *l_1746 = (void*)0;
    int l_1858 = (-1L);
    int l_1924 = 0x44E58054L;
    char l_1978 = (-4L);
    int l_1985 = 0xDFDCD39CL;
    int l_2012 = 0x2AA4060CL;
    int l_2027 = 0x983A8F11L;
    int l_2029 = 0L;
    int l_2046 = 0x221019E3L;
    int l_2054 = 0x5D351C99L;
    unsigned l_2156 = 0UL;
    for (p_8 = 28; (p_8 == 46); ++p_8)
    {
        union U0 l_17 = {1L};
        unsigned short l_778 = 65535UL;
        int l_1818 = 0xFB717B85L;
        union U1 *l_1836 = &g_174;
        int l_1945 = (-1L);
        int l_1952 = 0xC7451808L;
        int l_1954 = 0x74B83E5FL;
        int l_1964 = 0x84B01FC1L;
        int l_1970 = 0x4DBD2B3AL;
        short l_2049 = (-1L);
        const int *l_2077 = &l_1954;
        short l_2362 = 0x8F9CL;
        unsigned char l_2363 = 2UL;
    }
    (*g_184) = (*g_184);
    return (**g_184);
}







static unsigned func_15(union U0 p_16)
{
    int *l_18 = (void*)0;
    int *l_19 = &g_20;
    int **l_21 = &l_19;
    int *l_22 = &g_20;
    int *l_23 = &g_20;
    int *l_24 = &g_20;
    int *l_25 = (void*)0;
    int *l_26 = (void*)0;
    int *l_27 = &g_20;
    int *l_28 = &g_20;
    int *l_29 = &g_20;
    int *l_30 = (void*)0;
    int *l_31 = &g_20;
    int *l_32 = &g_20;
    int *l_33 = &g_20;
    int *l_34 = &g_20;
    int *l_35 = &g_20;
    int *l_36 = &g_20;
    int *l_37 = &g_20;
    int *l_38 = &g_20;
    int *l_39 = &g_20;
    int *l_40 = &g_20;
    int l_41 = 0x3B7C39C9L;
    int *l_42 = &l_41;
    int *l_43 = &l_41;
    int *l_44 = &g_20;
    int *l_45 = &g_20;
    int *l_47 = (void*)0;
    int *l_48 = &l_41;
    int l_49 = (-5L);
    int l_50 = 8L;
    int *l_51 = &l_49;
    int *l_52 = &l_49;
    int *l_53 = &g_20;
    int l_54 = 0x88216928L;
    int *l_55 = &l_50;
    int *l_56 = &l_49;
    int l_57 = 0x83C17A3FL;
    int *l_58 = (void*)0;
    int *l_59 = &l_41;
    int l_60 = (-1L);
    int *l_61 = &l_49;
    int *l_62 = &l_50;
    int l_63 = 0x879096A9L;
    int *l_64 = &l_63;
    int l_65 = 1L;
    int *l_66 = &g_20;
    int *l_67 = &l_41;
    int l_68 = (-9L);
    int *l_69 = (void*)0;
    int *l_70 = (void*)0;
    int *l_71 = &l_65;
    int *l_72 = &l_50;
    int *l_73 = &g_20;
    int l_74 = 0L;
    int *l_75 = &l_68;
    int *l_76 = (void*)0;
    int l_77 = 6L;
    int *l_78 = &l_63;
    int *l_79 = &l_60;
    int *l_80 = &l_54;
    int *l_81 = &l_54;
    int *l_82 = &l_63;
    int *l_83 = &l_54;
    int *l_84 = (void*)0;
    int *l_85 = (void*)0;
    int *l_86 = &g_20;
    int *l_87 = (void*)0;
    int *l_88 = (void*)0;
    int *l_89 = &l_60;
    int *l_90 = &l_50;
    int l_91 = 0L;
    int *l_92 = &l_77;
    int l_94 = (-1L);
    int *l_95 = &l_49;
    int l_96 = 0xE6BA9994L;
    int *l_97 = (void*)0;
    (*l_19) &= 0x8047D203L;
    (*l_21) = l_18;

    ;
    ++g_98;
    return p_16.f0;
}







static union U0 func_106(int p_107, unsigned p_108)
{
    int *l_1477 = (void*)0;
    int *l_1478 = &g_259;
    int l_1479 = 0xB8D1D077L;
    int l_1480 = 0x746ACA57L;
    int *l_1481 = &g_188;
    int l_1482 = 0xDDE1B500L;
    int *l_1483 = &l_1482;
    int *l_1484 = &g_132;
    int *l_1485 = (void*)0;
    int *l_1486 = (void*)0;
    int *l_1487 = (void*)0;
    int l_1488 = 0xCEE772A8L;
    int *l_1489 = &l_1480;
    int *l_1490 = &g_259;
    int *l_1491 = (void*)0;
    int *l_1492 = (void*)0;
    int *l_1493 = &g_173;
    int *l_1494 = &g_20;
    int l_1495 = (-9L);
    int *l_1496 = &l_1495;
    int *l_1497 = &l_1479;
    int l_1498 = 0x6CDEE4BEL;
    int *l_1499 = &g_188;
    int *l_1500 = &l_1498;
    int *l_1501 = &l_1488;
    int *l_1502 = &l_1480;
    int *l_1503 = (void*)0;
    int *l_1504 = (void*)0;
    int *l_1505 = (void*)0;
    int *l_1506 = (void*)0;
    int *l_1507 = &g_188;
    int *l_1508 = &g_20;
    int *l_1509 = &g_20;
    int *l_1510 = (void*)0;
    int *l_1511 = &g_188;
    int *l_1512 = (void*)0;
    int l_1513 = 1L;
    int *l_1514 = &l_1482;
    int *l_1515 = &l_1495;
    int *l_1516 = &g_188;
    int *l_1517 = (void*)0;
    int l_1518 = 0x70A546E6L;
    int *l_1519 = &l_1480;
    int *l_1520 = &l_1488;
    int l_1521 = 0x1C04DFFEL;
    int *l_1522 = &l_1495;
    int l_1523 = 0x70E08576L;
    int *l_1524 = &g_132;
    int *l_1525 = &l_1479;
    int l_1526 = 0x5EAE9707L;
    int *l_1527 = &l_1479;
    int *l_1528 = &l_1488;
    int l_1529 = (-7L);
    int *l_1530 = &l_1523;
    int *l_1531 = &l_1480;
    int l_1532 = 0x60710790L;
    int *l_1533 = &l_1521;
    int *l_1534 = (void*)0;
    int *l_1535 = &g_20;
    int l_1536 = 0x63588BFAL;
    int *l_1537 = (void*)0;
    int *l_1538 = (void*)0;
    int *l_1539 = &g_20;
    int *l_1540 = &l_1495;
    int *l_1541 = &g_20;
    int *l_1542 = &l_1488;
    int *l_1543 = &l_1498;
    int *l_1544 = (void*)0;
    int *l_1545 = &l_1479;
    int *l_1546 = &l_1529;
    int l_1547 = 2L;
    int *l_1548 = (void*)0;
    int l_1549 = (-10L);
    int *l_1550 = &l_1518;
    int *l_1551 = &l_1488;
    int *l_1552 = &l_1518;
    int *l_1553 = (void*)0;
    int *l_1554 = &g_188;
    int l_1555 = 1L;
    int l_1556 = 0L;
    int *l_1557 = &g_188;
    int l_1558 = (-7L);
    int *l_1559 = &l_1526;
    int *l_1560 = &l_1549;
    int *l_1561 = &l_1556;
    int *l_1562 = &g_132;
    int *l_1563 = (void*)0;
    int *l_1564 = &g_188;
    int *l_1565 = &l_1523;
    int *l_1566 = (void*)0;
    int *l_1567 = &l_1482;
    int l_1568 = 0x624A2683L;
    int *l_1569 = (void*)0;
    int *l_1571 = &l_1480;
    int *l_1572 = &g_188;
    int *l_1573 = (void*)0;
    int *l_1574 = (void*)0;
    int *l_1575 = &l_1549;
    int *l_1576 = &g_259;
    int *l_1577 = &l_1480;
    int *l_1578 = &l_1558;
    int *l_1579 = (void*)0;
    int *l_1581 = &l_1558;
    int *l_1582 = &l_1526;
    int l_1583 = (-1L);
    int *l_1584 = &l_1536;
    int *l_1585 = &g_20;
    int *l_1586 = &l_1547;
    int *l_1587 = &l_1556;
    int *l_1588 = (void*)0;
    int *l_1589 = &l_1532;
    int *l_1590 = &l_1555;
    int *l_1591 = &l_1555;
    int *l_1592 = &l_1495;
    int *l_1593 = &l_1536;
    int *l_1594 = &l_1495;
    int *l_1595 = &l_1488;
    int *l_1596 = &g_132;
    int *l_1597 = (void*)0;
    int *l_1598 = &l_1556;
    int l_1599 = 1L;
    int *l_1600 = &l_1482;
    int *l_1601 = (void*)0;
    int *l_1603 = &l_1479;
    int *l_1604 = &l_1536;
    int *l_1605 = &l_1479;
    int *l_1607 = &l_1558;
    int *l_1608 = &l_1488;
    int *l_1609 = (void*)0;
    int *l_1610 = &l_1555;
    int *l_1611 = &l_1536;
    int *l_1612 = &g_259;
    int *l_1613 = &l_1521;
    int *l_1614 = &l_1536;
    int l_1615 = 0x97D1ACB8L;
    int *l_1616 = &g_188;
    int *l_1617 = &l_1518;
    int *l_1618 = &l_1547;
    int *l_1619 = &g_188;
    int *l_1620 = (void*)0;
    int *l_1621 = &l_1615;
    int *l_1622 = (void*)0;
    int *l_1623 = &g_188;
    int *l_1624 = &l_1529;
    int *l_1625 = &l_1529;
    int *l_1626 = (void*)0;
    int *l_1627 = &l_1488;
    int *l_1628 = &l_1549;
    int *l_1629 = &l_1480;
    int *l_1630 = &l_1480;
    int l_1631 = 0xD27648A0L;
    int *l_1632 = (void*)0;
    int *l_1633 = &g_188;
    int *l_1634 = &l_1488;
    int *l_1635 = &l_1480;
    int *l_1636 = (void*)0;
    int *l_1637 = &l_1495;
    int l_1638 = 1L;
    int *l_1639 = &g_173;
    int *l_1640 = (void*)0;
    int l_1641 = 0x2F613471L;
    int *l_1642 = &l_1631;
    int *l_1643 = &g_20;
    int *l_1644 = &l_1583;
    int *l_1645 = &g_20;
    int *l_1646 = (void*)0;
    int *l_1647 = &l_1498;
    int l_1648 = (-9L);
    int *l_1649 = &g_20;
    int *l_1650 = &g_1602;
    int l_1651 = 0x4066C48FL;
    int *l_1652 = (void*)0;
    int l_1653 = 0x090FCFD1L;
    int *l_1654 = (void*)0;
    int *l_1655 = (void*)0;
    int *l_1656 = &l_1495;
    int *l_1657 = (void*)0;
    union U0 l_1663 = {0L};
    int l_1690 = 0L;
    (*g_184) = l_1477;

    ;
    ++g_1658;
    for (g_132 = (-18); (g_132 < (-29)); g_132 = safe_sub_func_uint16_t_u_u(g_132, 1))
    {
        union U0 *l_1664 = &g_1476;
        int l_1666 = (-1L);
        int l_1667 = 0x5D36D8FBL;
        unsigned l_1676 = 0x751653A4L;
        int l_1722 = 0x9F93307EL;
        int l_1725 = 0L;
        int l_1728 = 1L;
        int l_1729 = 1L;
        if (func_15(l_1663))
        {
            unsigned short l_1668 = 0x6C18L;
            int l_1672 = 0x0CA98BB9L;
            int l_1673 = 0xF5A100ECL;
            int l_1674 = 0x5FFBCE5AL;
            if (((void*)0 == l_1664))
            {
                short l_1665 = (-1L);
                int *l_1671 = &l_1666;
                int l_1675 = 0xE968BB24L;
                l_1668++;
                l_1487 = l_1671;

                ;
                ++l_1676;
                if (l_1667)
                    break;

            }
            else
            {
                (*g_419) = &l_1523;

                ;
                (*l_1639) = 0x6298E526L;
                if (l_1666)
                    continue;
                (*l_1528) = ((p_107 < g_1602) & (0x0D8AL < (safe_lshift_func_uint8_t_u_u(((p_108 && ((func_120((safe_rshift_func_uint8_t_u_s((((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u(func_120((~(~(((*l_1587) || ((g_173 | 1L) ^ g_586)) & (safe_sub_func_int16_t_s_s(0xFE07L, g_154)))))), 0x07F2L)), 65528UL)) != p_107) | 0UL), 1))) >= p_108) ^ 0x0AL)) && 2UL), 6))));
            }


        }
        else
        {
            unsigned short l_1689 = 0x9A7AL;
            union U0 l_1707 = {-1L};
            char l_1708 = (-10L);
            int l_1711 = 0L;
            (*l_1581) = (+(func_120(g_10.f0) == g_1203));
            if (l_1689)
            {
                unsigned short l_1693 = 1UL;
                int l_1719 = (-6L);
                int l_1723 = (-4L);
                (*g_184) = (*g_184);
                (*g_184) = (*g_184);
                if (l_1690)
                {
                    short l_1698 = 1L;
                    (*l_1617) = (safe_mod_func_int8_t_s_s(((p_108 != l_1693) == (safe_sub_func_uint32_t_u_u((&l_1663 == (void*)0), ((safe_sub_func_int8_t_s_s(func_120(l_1689), (g_1242 > (p_108 > l_1689)))) == 0x1F6D6292L)))), l_1693));
                    if (l_1698)
                        break;
                    l_1711 = (safe_rshift_func_uint16_t_u_s(65535UL, (safe_div_func_uint8_t_u_u((+((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(func_15(l_1707), func_120(l_1708))), p_108)) > p_107)), (safe_div_func_uint8_t_u_u((1L ^ p_108), p_108))))));
                }
                else
                {
                    union U0 *l_1716 = &l_1663;
                    int l_1718 = 0x0546B5E6L;
                    int l_1720 = 0x1EE717CCL;
                    char l_1726 = 0xAAL;
                    (*l_1600) |= (((*g_1432) && (((safe_sub_func_uint8_t_u_u(g_1570, 0xCEL)) != g_174.f0) || g_1059)) >= g_188);
                    for (l_1532 = (-8); (l_1532 == 18); l_1532++)
                    {
                        union U0 **l_1717 = &l_1716;
                        int l_1721 = (-5L);
                        int l_1724 = 0xA119AC28L;
                        (*l_1717) = l_1716;
                        g_1730--;
                        if ((*l_1552))
                            continue;
                    }
                    g_1733 = &g_174;

                    ;
                    l_1666 ^= (&g_1476 != &l_1663);
                }
            }
            else
            {
                short l_1734 = (-2L);
                int l_1739 = 0xBEE78590L;
                int l_1740 = 0L;
                unsigned l_1744 = 1UL;
                (*l_1617) &= ((l_1666 < (*l_1515)) < l_1734);
                for (g_549 = 0; (g_549 > (-13)); g_549 = safe_sub_func_int16_t_s_s(g_549, 1))
                {
                    unsigned l_1741 = 18446744073709551613UL;
                    for (l_1558 = 4; (l_1558 <= (-21)); --l_1558)
                    {
                        l_1739 ^= p_108;
                        if ((*g_1432))
                            continue;
                        (*l_1533) = p_108;
                        l_1741++;
                    }
                    (*g_419) = &l_1480;

                    ;
                }
                if (l_1744)
                    continue;
                return (*g_287);


                            }
        }


    }

    ;


    return l_1663;


    }







static char func_109(const int ** p_110, unsigned char p_111, int ** p_112, unsigned char p_113, unsigned p_114)
{
    char l_785 = 0xFFL;
    int **l_798 = (void*)0;
    union U0 *l_806 = &g_288;
    union U0 l_807 = {0x3E88L};
    int l_811 = 0L;
    int l_856 = 0xC807AA68L;
    char l_862 = 0xADL;
    int l_977 = 6L;
    union U1 *l_1062 = (void*)0;
    int l_1074 = (-8L);
    int l_1189 = 0x7F2F74D8L;
    unsigned short l_1470 = 5UL;
    union U0 **l_1474 = (void*)0;
    union U0 *l_1475 = &g_1476;
    if ((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(l_785, (safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(func_139(p_111, ((((safe_div_func_int8_t_s_s((safe_div_func_uint8_t_u_u(p_113, (safe_rshift_func_uint16_t_u_u(3UL, (safe_lshift_func_int8_t_s_s(func_120(g_154), (l_785 < (((void*)0 != l_798) | p_114)))))))), (-1L))) > 65535UL) <= g_132) | g_695), g_174.f0), (**g_419))), 0xB38A2522L)))), (**g_419))), p_113)))
    {
        union U0 *l_805 = (void*)0;
        int l_808 = 0x9E157B59L;
        int l_845 = 8L;
        int l_1065 = 0xE3D127D1L;
        int l_1158 = 0xB143FF0CL;
        int l_1191 = 0L;
        union U1 l_1235 = {0UL};
        if ((safe_div_func_uint32_t_u_u((((**p_110) <= 4294967289UL) && ((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(0UL, ((((((l_805 != l_806) | ((*g_420) || (**p_110))) ^ (func_15(l_807) ^ p_111)) == (-8L)) > p_111) && g_173))), l_808)) ^ 0x6CL)), 4294967295UL)))
        {
            int l_848 = 0xB72AB8E5L;
            int l_904 = 0x657B2FF8L;
            int l_938 = 0xB6BC484CL;
            int l_1164 = 2L;
            int l_1183 = 0xE7727DE0L;
            char l_1231 = 0xC3L;
            for (g_93 = (-14); (g_93 < (-12)); g_93++)
            {
                int *l_812 = (void*)0;
                int *l_813 = &g_20;
                int *l_814 = (void*)0;
                int *l_815 = (void*)0;
                int *l_816 = &g_259;
                int *l_817 = &g_132;
                int *l_818 = &g_20;
                int *l_819 = &g_132;
                int *l_820 = &g_132;
                int *l_821 = &g_188;
                int *l_822 = &g_20;
                int *l_823 = &g_259;
                int *l_824 = &g_173;
                int *l_825 = &g_20;
                int *l_826 = (void*)0;
                int *l_827 = &g_20;
                int *l_828 = (void*)0;
                int *l_829 = &l_808;
                int *l_830 = &g_188;
                int *l_831 = &g_20;
                int *l_832 = &g_188;
                int *l_833 = &g_259;
                int *l_834 = &g_259;
                int *l_835 = &g_132;
                int *l_836 = &g_132;
                int *l_837 = &g_173;
                int *l_838 = &l_808;
                int *l_839 = &g_188;
                int *l_840 = &l_808;
                int *l_841 = (void*)0;
                int *l_842 = &g_132;
                int *l_843 = &g_188;
                int *l_844 = &l_808;
                int *l_846 = &g_188;
                int *l_847 = &g_173;
                int *l_849 = (void*)0;
                int *l_850 = &l_808;
                int *l_851 = &l_808;
                int l_852 = 1L;
                unsigned l_853 = 0x7F010E22L;
                (*g_420) = func_139(g_571, ((void*)0 != &g_420), l_808);
                if ((**p_112))
                    break;
                l_853++;
                l_856 |= (**p_112);
            }
            if (l_808)
            {
                unsigned short l_864 = 0xD553L;
                int l_879 = 1L;
                int l_897 = 0x58382F8BL;
                int *l_902 = (void*)0;
                int *l_903 = (void*)0;
                int *l_905 = &g_173;
                int *l_906 = &l_808;
                int *l_907 = (void*)0;
                int *l_908 = &g_173;
                int *l_909 = &l_845;
                int *l_910 = (void*)0;
                int *l_911 = &l_904;
                int *l_912 = (void*)0;
                int *l_913 = &l_856;
                int *l_914 = &l_808;
                int *l_915 = &g_132;
                int *l_916 = &l_904;
                int *l_917 = &l_897;
                int *l_918 = &l_856;
                int *l_919 = &g_259;
                int *l_920 = &l_845;
                int *l_921 = (void*)0;
                int *l_922 = &g_20;
                unsigned l_923 = 0xEE63D07BL;
                for (g_20 = 0; (g_20 == 24); g_20 = safe_add_func_int16_t_s_s(g_20, 3))
                {
                    int l_861 = 0xE2EC9CF8L;
                    int l_863 = 1L;
                    int l_869 = (-10L);
                    if (((*p_110) == (*g_184)))
                    {
                        (**p_112) ^= l_845;
                        (*p_110) = (*p_110);
                        (*g_184) = (*g_419);

                        ;
                        (**g_419) = (safe_lshift_func_uint16_t_u_u((~(g_98 < ((void*)0 != &g_288))), ((p_113 || (((&g_287 != (void*)0) == l_861) ^ ((g_173 & (p_111 && l_862)) <= 0xEA907463L))) || l_863)));
                    }
                    else
                    {
                        int *l_867 = &l_808;
                        int *l_868 = (void*)0;
                        int *l_870 = &g_259;
                        int *l_871 = &g_259;
                        int *l_872 = (void*)0;
                        int *l_873 = &l_845;
                        int *l_874 = &g_259;
                        int *l_875 = (void*)0;
                        int *l_876 = &l_869;
                        int *l_877 = &g_173;
                        int *l_878 = &g_173;
                        int *l_880 = &g_132;
                        int *l_881 = &l_879;
                        int *l_882 = &l_869;
                        int *l_883 = &l_869;
                        int *l_884 = (void*)0;
                        int *l_885 = &g_188;
                        int *l_886 = &g_259;
                        int *l_887 = &g_259;
                        int *l_888 = (void*)0;
                        int *l_889 = (void*)0;
                        int *l_890 = &l_869;
                        int *l_891 = &g_259;
                        int *l_892 = &l_869;
                        int *l_893 = &g_173;
                        int *l_894 = &l_856;
                        int *l_895 = &l_879;
                        int *l_896 = &g_259;
                        int *l_898 = &g_188;
                        l_864--;
                        --g_899;
                        if (l_897)
                            continue;
                        return p_114;
                    }

                    ;
                    if (l_848)
                        break;
                }

                ;
                l_923--;
            }
            else
            {
                unsigned char l_928 = 0xCCL;
                int l_960 = 0xEB65FCF3L;
                int l_1012 = 0x00AC3C9EL;
                int *l_1066 = &l_904;
                int *l_1067 = &l_1012;
                int *l_1068 = &l_1012;
                int *l_1069 = &l_1012;
                int *l_1070 = &l_977;
                int *l_1071 = (void*)0;
                int *l_1072 = &g_259;
                int *l_1073 = &l_808;
                int *l_1075 = &l_856;
                int *l_1076 = &g_173;
                int *l_1077 = (void*)0;
                int *l_1078 = &l_856;
                int *l_1079 = &l_960;
                int *l_1080 = &g_259;
                int *l_1081 = (void*)0;
                int *l_1082 = &l_845;
                int *l_1083 = &l_845;
                int *l_1084 = &l_845;
                int *l_1085 = &l_856;
                int *l_1086 = (void*)0;
                int *l_1087 = (void*)0;
                int *l_1088 = &l_856;
                int *l_1089 = (void*)0;
                int *l_1090 = &g_259;
                int *l_1091 = &g_20;
                int *l_1092 = &l_938;
                int *l_1093 = &g_20;
                int *l_1094 = &l_904;
                int *l_1095 = &l_904;
                int *l_1096 = (void*)0;
                int *l_1097 = (void*)0;
                int *l_1098 = &g_132;
                int *l_1099 = &l_1012;
                int *l_1100 = &l_808;
                int *l_1101 = (void*)0;
                int *l_1102 = &g_173;
                int *l_1103 = &l_845;
                int *l_1104 = (void*)0;
                int *l_1105 = (void*)0;
                int l_1106 = 0L;
                int *l_1107 = &l_977;
                int *l_1108 = (void*)0;
                int *l_1109 = &g_188;
                int *l_1110 = &g_132;
                int *l_1111 = &l_960;
                int *l_1112 = &l_845;
                int *l_1113 = &g_173;
                int *l_1114 = (void*)0;
                int *l_1115 = &g_173;
                int *l_1116 = &l_856;
                int *l_1117 = &l_1074;
                int *l_1118 = &g_173;
                int *l_1119 = &l_856;
                int *l_1120 = &g_188;
                int *l_1121 = &l_1074;
                int *l_1122 = (void*)0;
                int *l_1123 = (void*)0;
                int *l_1124 = &l_960;
                int *l_1125 = &l_856;
                int *l_1126 = &l_808;
                int *l_1127 = &g_173;
                int *l_1128 = &l_960;
                int *l_1129 = &g_188;
                int *l_1130 = &l_960;
                int *l_1131 = &l_960;
                int *l_1132 = &l_808;
                int *l_1134 = (void*)0;
                int *l_1135 = &g_188;
                int *l_1136 = &l_1012;
                int *l_1137 = &l_960;
                int *l_1138 = &l_977;
                int *l_1139 = &g_188;
                int l_1140 = 0x41FC954BL;
                int l_1141 = 0x2150038AL;
                int *l_1142 = &l_977;
                int *l_1143 = &l_808;
                int *l_1144 = &l_1141;
                int *l_1145 = &l_845;
                int *l_1146 = &l_1012;
                int *l_1147 = &l_938;
                int *l_1148 = &g_20;
                int *l_1149 = &g_20;
                int *l_1150 = &l_845;
                int *l_1151 = &l_845;
                int *l_1152 = (void*)0;
                int *l_1153 = (void*)0;
                int *l_1154 = &l_1012;
                int *l_1155 = &g_259;
                int *l_1156 = &l_856;
                int *l_1157 = &g_132;
                int *l_1159 = &g_132;
                int *l_1160 = &g_132;
                int *l_1161 = &l_938;
                int *l_1162 = &l_1141;
                int *l_1163 = &l_1074;
                int *l_1165 = &g_132;
                int *l_1166 = (void*)0;
                int *l_1167 = &g_20;
                int *l_1168 = &g_132;
                int *l_1169 = &l_1158;
                int *l_1170 = &l_1140;
                int *l_1171 = &l_938;
                int *l_1172 = &l_856;
                int *l_1173 = &l_1164;
                int l_1174 = 0xBF82385BL;
                int *l_1175 = &g_132;
                int *l_1177 = &l_938;
                int *l_1179 = &g_20;
                int *l_1180 = &l_1074;
                int *l_1181 = &l_856;
                int *l_1182 = &l_960;
                int l_1184 = 0x46BB51FAL;
                int *l_1185 = (void*)0;
                int *l_1186 = &l_856;
                int *l_1187 = &l_1183;
                int *l_1188 = (void*)0;
                int *l_1190 = &g_20;
                int *l_1192 = &l_1074;
                int *l_1193 = &l_808;
                int *l_1194 = &l_938;
                int *l_1196 = &l_960;
                int *l_1197 = &l_938;
                int *l_1198 = &l_1140;
                int *l_1199 = &l_1140;
                int *l_1200 = &l_1164;
                int *l_1201 = &l_904;
                int *l_1202 = (void*)0;
                short l_1211 = (-6L);
                union U1 **l_1218 = &l_1062;
                union U0 **l_1249 = &g_287;
                (**p_112) = (-8L);
                if ((safe_lshift_func_int8_t_s_u((g_695 < l_928), 3)))
                {
                    int * const l_995 = &l_808;
                    int l_1015 = (-1L);
                    int l_1018 = 0x5F7C2E0EL;
                    if (((*p_112) != (*g_419)))
                    {
                        int *l_929 = &g_259;
                        int *l_930 = &l_808;
                        int *l_931 = (void*)0;
                        int *l_932 = (void*)0;
                        int *l_933 = &l_856;
                        int *l_934 = &l_808;
                        int *l_935 = &l_808;
                        int *l_936 = (void*)0;
                        int *l_937 = &g_20;
                        int *l_939 = &l_856;
                        int *l_940 = &g_20;
                        int *l_941 = &l_856;
                        int *l_942 = &g_20;
                        int *l_943 = &l_938;
                        int *l_944 = &l_904;
                        int *l_945 = &l_938;
                        int *l_946 = &l_845;
                        int *l_947 = (void*)0;
                        int *l_948 = (void*)0;
                        int *l_949 = (void*)0;
                        int *l_950 = (void*)0;
                        int *l_951 = (void*)0;
                        int *l_952 = &g_132;
                        int *l_953 = &g_173;
                        int *l_954 = &l_856;
                        int *l_955 = (void*)0;
                        int *l_956 = &l_845;
                        int *l_957 = (void*)0;
                        int *l_958 = &g_188;
                        int *l_959 = (void*)0;
                        int *l_961 = &l_904;
                        int *l_962 = &g_132;
                        int *l_963 = &l_938;
                        int *l_964 = (void*)0;
                        int *l_965 = &l_856;
                        int *l_966 = &l_938;
                        int *l_967 = &l_960;
                        int *l_968 = &l_856;
                        int *l_969 = &g_20;
                        int *l_970 = &l_938;
                        int *l_971 = &l_808;
                        int *l_972 = &g_132;
                        int *l_973 = (void*)0;
                        int *l_974 = (void*)0;
                        int *l_975 = &l_938;
                        int *l_976 = &g_188;
                        int *l_978 = &g_20;
                        int *l_979 = &l_904;
                        int *l_980 = (void*)0;
                        int *l_981 = &g_173;
                        int *l_982 = &g_259;
                        int *l_983 = &g_259;
                        int *l_984 = &l_938;
                        int *l_985 = &l_938;
                        int *l_986 = &l_960;
                        int *l_987 = &l_904;
                        int *l_988 = &l_808;
                        int *l_989 = &g_259;
                        ++g_990;
                    }
                    else
                    {
                        int *l_996 = (void*)0;
                        int *l_997 = &l_938;
                        int *l_998 = &g_173;
                        int *l_999 = &g_188;
                        int *l_1000 = &g_20;
                        int *l_1001 = &l_856;
                        int *l_1002 = &g_132;
                        int *l_1003 = &l_938;
                        int *l_1004 = (void*)0;
                        int *l_1005 = &l_938;
                        int *l_1006 = &l_845;
                        int *l_1007 = &g_173;
                        int *l_1008 = &l_960;
                        int l_1009 = 0x59966CFEL;
                        int *l_1010 = &l_938;
                        int *l_1011 = &l_938;
                        int *l_1013 = &l_1009;
                        int *l_1014 = &l_808;
                        int l_1016 = (-1L);
                        int *l_1017 = &g_20;
                        int *l_1019 = &g_20;
                        int *l_1020 = &g_132;
                        int *l_1021 = &l_938;
                        int *l_1022 = &l_1012;
                        int *l_1023 = &l_904;
                        int *l_1024 = &l_1015;
                        int *l_1025 = &l_1012;
                        int *l_1026 = &l_1018;
                        int *l_1027 = &l_960;
                        int *l_1028 = &l_1009;
                        int *l_1029 = (void*)0;
                        int *l_1030 = &l_960;
                        int *l_1031 = &l_808;
                        int *l_1032 = &g_259;
                        int *l_1033 = &g_188;
                        int *l_1034 = &l_1009;
                        int *l_1035 = &l_845;
                        int *l_1036 = &l_938;
                        int *l_1037 = &l_977;
                        int *l_1038 = &g_173;
                        int *l_1039 = &g_173;
                        int *l_1040 = &l_938;
                        int *l_1041 = &g_132;
                        int *l_1042 = &l_1009;
                        int *l_1043 = (void*)0;
                        int *l_1044 = &g_132;
                        int *l_1045 = (void*)0;
                        int *l_1046 = (void*)0;
                        int *l_1047 = (void*)0;
                        int *l_1048 = &l_1015;
                        int *l_1049 = &g_20;
                        int *l_1050 = &l_904;
                        int *l_1051 = &l_938;
                        int *l_1052 = &g_188;
                        int *l_1053 = &g_188;
                        int *l_1054 = (void*)0;
                        int *l_1055 = &l_977;
                        int *l_1056 = &l_845;
                        int *l_1057 = &l_960;
                        int *l_1058 = &l_904;
                        union U1 **l_1063 = &l_1062;
                        (**p_112) = ((safe_rshift_func_int8_t_s_s(l_960, 5)) != g_132);
                        (*g_419) = (*g_419);
                        g_1059--;
                        (*l_1063) = l_1062;
                    }
                }
                else
                {
                    unsigned short l_1064 = 0xABC3L;
                    (**p_112) = l_1064;
                    (**p_112) &= (func_15((*g_287)) | 0L);
                }
                g_1203++;
                if ((**g_419))
                {
                    unsigned l_1206 = 0x564847A6L;
                    int *l_1217 = &l_1074;
                    --l_1206;
                    for (l_811 = 0; (l_811 < (-19)); l_811--)
                    {
                        unsigned l_1212 = 0xC4621246L;
                        (*l_1147) ^= (**p_110);
                        (*l_1172) &= l_1065;
                        ++l_1212;
                    }
                    if ((safe_div_func_uint32_t_u_u(0xEF2F2967L, (p_113 && (-1L)))))
                    {
                        (*g_419) = l_1217;

                        ;
                        return l_938;


                    }
                    else
                    {
                        (*l_1127) |= (((void*)0 != l_1218) | g_98);
                    }
                }
                else
                {
                    int l_1219 = 0L;
                    union U0 l_1226 = {0x59E4L};
                    int l_1239 = 0x9E02B04DL;
                    int l_1240 = 1L;
                    int l_1241 = 0xD5F46ADFL;
                    const union U1 *l_1258 = &l_1235;
                    const union U1 ** const l_1257 = &l_1258;
                    unsigned l_1259 = 4294967295UL;
                    char l_1277 = (-4L);
                    if ((l_1219 == g_132))
                    {
                        unsigned l_1232 = 3UL;
                        int l_1236 = 6L;
                        int l_1237 = 0L;
                        int l_1238 = 0x7819783EL;
                        (**g_419) &= ((safe_div_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s((**g_184), 0xD2857A86L)), func_15(l_1226))) && (safe_sub_func_int16_t_s_s(g_98, (safe_div_func_uint32_t_u_u(0x57AAED65L, func_139(l_1231, l_1219, (((**p_110) ^ 0xCCC2DD43L) || 0xADL))))))), g_571)) != l_1158);
                        ++l_1232;
                        (*p_110) = func_134(p_113, p_114, p_112, l_1235);

                        ;
                        ;
                        --g_1242;
                    }
                    else
                    {
                        (*l_1172) = (*l_1149);
                    }

                    ;
                    ;
                    if (func_139(p_111, (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((l_1249 != (void*)0), 5)), (safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int16_t_s(g_98)), 5)), 11)), (((void*)0 == l_1257) <= (func_139(l_1259, (safe_mod_func_int32_t_s_s(((safe_mod_func_int8_t_s_s((&l_1226 == &l_1226), 1L)) > p_111), 0x03B10761L)), g_899) <= 4294967293UL)))))), g_590))
                    {
                        unsigned char l_1264 = 4UL;
                        (*l_1196) = (l_1264 < (((-1L) >= (-8L)) != ((safe_lshift_func_int16_t_s_u((&l_807 != (*l_1249)), 6)) || g_695)));
                        (*g_184) = (*g_184);
                    }
                    else
                    {
                        (*l_1132) = l_1231;
                        (*p_112) = &l_938;

                        ;
                        (**g_419) &= l_1259;
                        (*g_184) = (*g_419);

                        ;
                    }

                    ;
                    ;
                    l_1240 = 0L;
                    for (l_845 = 16; (l_845 != (-6)); --l_845)
                    {
                        (*l_1187) ^= l_1158;
                        (*l_1162) |= (safe_div_func_uint32_t_u_u(func_120((((~g_549) < (safe_mod_func_int16_t_s_s(0xAF22L, p_111))) || (safe_mod_func_int16_t_s_s(p_114, (safe_add_func_int32_t_s_s(l_1277, l_1164)))))), (~((safe_sub_func_uint8_t_u_u((l_1164 < p_114), g_990)) || 5UL))));
                    }
                }

                ;
                ;
            }

            ;
            ;
        }
        else
        {
            union U0 *l_1280 = (void*)0;
            int l_1374 = 1L;
            int l_1422 = 0x98684000L;
            int l_1423 = 8L;
            int l_1425 = (-6L);
            int l_1428 = 0x177CEABAL;
            if (((void*)0 != l_1280))
            {
                (*g_420) &= (func_15((*g_287)) && g_10.f0);
            }
            else
            {
                short l_1281 = 0x8FCEL;
                union U1 *l_1328 = &l_1235;
                int l_1340 = 0x788C261FL;
                int l_1424 = 6L;
                int l_1426 = 0xC15A3CA7L;
                if ((~1L))
                {
                    return g_576;
                }
                else
                {
                    unsigned short l_1323 = 0xA6D3L;
                    union U0 *l_1335 = &g_10;
                    int l_1336 = 0x84CE3364L;
                    int l_1361 = 0xAFAA55F6L;
                    int l_1427 = 0x68BC593BL;
                    if ((*g_420))
                    {
                        int *l_1282 = &g_188;
                        int *l_1283 = &l_856;
                        int *l_1284 = &l_1191;
                        int *l_1285 = &g_173;
                        int *l_1286 = &g_259;
                        int *l_1287 = &g_132;
                        int *l_1288 = &g_259;
                        int *l_1289 = &l_1158;
                        int *l_1290 = &l_977;
                        int *l_1291 = &g_132;
                        int *l_1292 = &l_845;
                        int *l_1293 = &g_132;
                        int *l_1294 = &l_1074;
                        int *l_1295 = &l_1189;
                        int *l_1296 = (void*)0;
                        int *l_1297 = &l_808;
                        int *l_1298 = &l_808;
                        int *l_1299 = &l_1158;
                        int *l_1300 = &l_1191;
                        int *l_1301 = &g_173;
                        int *l_1302 = &l_1158;
                        int *l_1303 = &g_132;
                        int *l_1304 = (void*)0;
                        int *l_1305 = &g_259;
                        int *l_1306 = &g_132;
                        int *l_1307 = &l_1189;
                        int *l_1308 = &l_1191;
                        int *l_1309 = &g_259;
                        int *l_1310 = &l_1189;
                        int *l_1311 = &g_188;
                        int *l_1312 = &l_856;
                        int *l_1313 = (void*)0;
                        int *l_1314 = (void*)0;
                        int *l_1315 = (void*)0;
                        int *l_1316 = &l_856;
                        int *l_1317 = &l_856;
                        int *l_1318 = &l_845;
                        int *l_1319 = &l_845;
                        int *l_1320 = (void*)0;
                        int *l_1321 = &g_173;
                        int *l_1322 = &g_20;
                        int *l_1337 = &g_173;
                        int *l_1338 = &l_977;
                        int *l_1339 = &l_808;
                        int *l_1341 = &l_808;
                        int *l_1342 = (void*)0;
                        int *l_1343 = &l_977;
                        int *l_1344 = &l_845;
                        int *l_1345 = &l_1158;
                        int *l_1346 = &l_1189;
                        int *l_1347 = &l_845;
                        int *l_1348 = &g_132;
                        int *l_1349 = (void*)0;
                        int *l_1350 = &l_1074;
                        int *l_1351 = &l_1189;
                        int *l_1352 = &l_1158;
                        int *l_1353 = &g_20;
                        int *l_1354 = &l_977;
                        int *l_1355 = &l_1074;
                        int *l_1356 = &g_173;
                        int *l_1357 = (void*)0;
                        int *l_1358 = &l_808;
                        int *l_1359 = &l_808;
                        int *l_1360 = (void*)0;
                        int *l_1362 = &l_1336;
                        int *l_1363 = &l_1158;
                        int *l_1364 = (void*)0;
                        int *l_1365 = &g_259;
                        int *l_1366 = &g_188;
                        int *l_1367 = &l_1074;
                        int *l_1368 = &l_977;
                        int *l_1369 = &l_845;
                        int *l_1370 = &g_20;
                        int *l_1371 = &g_132;
                        int *l_1372 = &g_173;
                        int *l_1373 = (void*)0;
                        int *l_1375 = &g_173;
                        int *l_1376 = (void*)0;
                        int *l_1377 = &l_977;
                        int *l_1378 = &l_977;
                        int *l_1379 = &g_173;
                        int *l_1380 = &g_20;
                        int *l_1381 = (void*)0;
                        int *l_1382 = &l_856;
                        int *l_1383 = (void*)0;
                        int *l_1384 = &l_1374;
                        int *l_1385 = &g_188;
                        int *l_1386 = &l_1189;
                        int *l_1387 = &g_259;
                        int *l_1388 = &l_1074;
                        int *l_1389 = (void*)0;
                        int *l_1390 = &l_1361;
                        int *l_1391 = &l_1074;
                        int *l_1392 = &l_1374;
                        int *l_1393 = &l_808;
                        int *l_1394 = (void*)0;
                        int *l_1395 = &l_1374;
                        int *l_1396 = (void*)0;
                        int *l_1397 = &l_856;
                        int *l_1398 = &g_173;
                        int *l_1399 = &l_845;
                        int *l_1400 = &g_259;
                        int *l_1401 = &l_808;
                        int *l_1402 = &l_808;
                        int *l_1403 = &g_132;
                        int *l_1404 = &l_845;
                        int *l_1405 = &l_845;
                        int *l_1406 = &g_20;
                        int *l_1407 = &l_808;
                        int *l_1408 = &l_1189;
                        int *l_1409 = &g_173;
                        int *l_1410 = &l_1336;
                        int *l_1411 = &l_1374;
                        int l_1412 = 1L;
                        int *l_1413 = &g_259;
                        int l_1414 = 0x45A34860L;
                        int *l_1415 = &l_1374;
                        int *l_1416 = &l_1158;
                        int *l_1417 = (void*)0;
                        int *l_1418 = &g_259;
                        ++l_1323;
                        (*l_1308) = (safe_sub_func_int16_t_s_s((((&g_174 == l_1328) || (func_120(g_288.f0) ^ (!((safe_rshift_func_uint16_t_u_s(65535UL, 8)) < (g_20 | (*l_1312)))))) == ((((safe_div_func_int16_t_s_s(((l_1335 != &g_288) != 0xEE301717L), p_111)) >= (**p_112)) == p_113) < 0L)), p_114));
                        g_1419++;
                        ++g_1429;
                    }
                    else
                    {
                        (*p_110) = g_1432;

                        ;
                        (*g_1432) = (safe_div_func_int16_t_s_s((p_113 || (safe_mod_func_int32_t_s_s(0x3ABB4506L, ((!p_114) ^ 4294967288UL)))), g_1133));
                    }
                    for (l_1323 = 26; (l_1323 < 17); l_1323--)
                    {
                        g_1439 = (void*)0;

                        ;
                    }

                    ;
                    for (g_899 = (-2); (g_899 > 49); g_899 = safe_add_func_uint32_t_u_u(g_899, 8))
                    {
                        (**g_419) &= l_1340;
                    }
                }

                ;
            }

            ;
        }



        ;
        for (l_1065 = 0; (l_1065 == (-28)); l_1065--)
        {
            int *l_1444 = &l_856;
            int *l_1445 = (void*)0;
            int *l_1446 = &g_20;
            int *l_1447 = &l_1074;
            int *l_1448 = &l_1158;
            int *l_1449 = &g_20;
            int *l_1450 = &l_856;
            int *l_1451 = &g_259;
            int *l_1452 = (void*)0;
            int *l_1453 = &g_188;
            int *l_1454 = (void*)0;
            int *l_1455 = (void*)0;
            int *l_1456 = &l_808;
            int *l_1457 = &l_808;
            int *l_1458 = &l_977;
            int *l_1459 = (void*)0;
            int *l_1460 = &l_1074;
            int *l_1461 = &l_856;
            int *l_1462 = (void*)0;
            int *l_1463 = &l_977;
            int *l_1464 = &g_20;
            int *l_1465 = &l_1158;
            int *l_1466 = &l_1158;
            int *l_1467 = &l_977;
            int *l_1468 = &l_845;
            int *l_1469 = &l_977;
            l_1470--;
            if ((*l_1465))
                continue;
        }
    }
    else
    {
        unsigned char l_1473 = 255UL;
        l_1473 &= (*g_420);
    }



    ;
    l_1475 = &g_10;

    ;
    return g_760;
}







static const int ** func_115(unsigned p_116, int p_117)
{
    int * const l_133 = &g_132;
    int *l_172 = &g_173;
    int **l_171 = &l_172;
    const int **l_776 = &g_185;
    for (p_117 = 3; (p_117 != 7); ++p_117)
    {
        union U0 l_124 = {0xBEB3L};
        const int *l_131 = &g_132;
    }
    return l_776;


}







static unsigned func_120(unsigned p_121)
{
    int **l_424 = (void*)0;
    int l_435 = 0x0A886318L;
    int l_521 = 0L;
    int l_553 = 0x25D2D7BAL;
    int l_573 = (-8L);
    int l_633 = 0x0AAFC2DBL;
    int l_730 = 9L;
    union U0 l_773 = {-4L};
    unsigned short l_774 = 0x2FE3L;
    for (g_93 = 19; (g_93 == (-18)); g_93 = safe_sub_func_uint16_t_u_u(g_93, 9))
    {
        int *l_423 = &g_173;
        int l_548 = 0x4339D3A4L;
        union U0 **l_626 = &g_287;
        unsigned char l_629 = 0x12L;
        int l_682 = 0x4454D525L;
        int *l_775 = &g_188;
        (*g_184) = l_423;

        ;
    }
    return g_10.f0;
}







static int func_127(const int * p_128, int * const p_129, int * p_130)
{
    unsigned l_199 = 0x5D77E079L;
    int l_207 = 1L;
    int *l_239 = &g_188;
    int **l_238 = &l_239;
    int l_350 = (-1L);
    unsigned char l_366 = 247UL;
    g_188 = (*p_129);
    if ((safe_rshift_func_int8_t_s_s(g_10.f0, ((safe_lshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(g_46, 3)) || 65535UL), g_154)) | ((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(0x6C0BL, 15)), (l_199 && l_199))) || (safe_lshift_func_int8_t_s_u((safe_div_func_int8_t_s_s(g_173, g_93)), 3)))))))
    {
        (*p_129) = 1L;
        (*p_129) |= (safe_sub_func_int8_t_s_s(0x80L, g_10.f0));
    }
    else
    {
        short l_206 = 0xC05DL;
        l_207 &= (l_206 > func_139(l_206, g_132, ((*p_129) && 0x956D33D9L)));
        (*p_129) = (**g_184);
    }
    if ((*p_128))
    {
        (*p_129) = (-1L);
        for (g_132 = (-25); (g_132 > (-3)); g_132 = safe_add_func_uint16_t_u_u(g_132, 5))
        {
            (*g_184) = (*g_184);
        }
        (*g_184) = &l_207;

        ;
    }
    else
    {
        union U0 *l_222 = (void*)0;
        int l_226 = 0x9A6180E0L;
        int *l_229 = &g_188;
        g_188 = func_139((safe_add_func_uint16_t_u_u((g_154 < l_207), ((((0xF3L || (((safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u(g_154, l_207)), ((-1L) & 0x6A8F31C0L))), g_46)) <= g_174.f0) <= 0x3A92L)) != 0UL) == l_207) > g_132))), g_132, l_199);
        for (l_199 = 0; (l_199 != 33); l_199 = safe_add_func_int8_t_s_s(l_199, 7))
        {
            for (g_132 = 0; (g_132 < 12); g_132 = safe_add_func_int32_t_s_s(g_132, 7))
            {
                union U0 **l_223 = &l_222;
                (*l_223) = l_222;
                return (**g_184);
            }
        }
        (*l_229) |= ((**g_184) & (l_207 && (safe_lshift_func_uint8_t_u_u((0xD1E69A06L < (+(l_226 ^ 0x660CL))), ((safe_sub_func_int32_t_s_s(0x9B898011L, l_226)) | l_226)))));
    }

    ;
    for (g_132 = 28; (g_132 <= (-4)); g_132 = safe_sub_func_uint16_t_u_u(g_132, 5))
    {
        int **l_250 = &l_239;
        int l_313 = 0xC489A4F5L;
        int l_365 = 0x32BEE8E1L;
        for (g_154 = 27; (g_154 <= 32); g_154 = safe_add_func_int32_t_s_s(g_154, 1))
        {
            const unsigned l_236 = 0xACA0B537L;
            int *l_237 = &g_188;
            int l_256 = 1L;
            unsigned l_276 = 18446744073709551607UL;
            int *l_289 = (void*)0;
            int l_311 = 6L;
            int l_317 = 0xB483B4BDL;
            int l_353 = 0x3F8E5C4BL;
            if ((*p_129))
                break;
        }
        if ((*g_185))
            continue;
        g_419 = l_250;

        ;
        if ((*g_420))
            continue;
    }

    ;
    return (*p_129);



}







static int * func_134(unsigned short p_135, unsigned p_136, int ** p_137, union U1 p_138)
{
    unsigned char l_175 = 0UL;
    int *l_186 = (void*)0;
    int *l_187 = &g_188;
    (*p_137) = (void*)0;


    l_175 = (-8L);
    (*l_187) |= (safe_sub_func_uint16_t_u_u(l_175, func_139((safe_mod_func_int32_t_s_s(l_175, (-1L))), (((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u((p_137 != (void*)0), (l_175 | (((void*)0 != g_184) >= 4294967295UL)))) || p_135), l_175)) | 1L) != 7UL), g_173)));
    (*l_187) = (*l_187);
    return l_186;


}







static unsigned short func_139(unsigned char p_140, char p_141, const unsigned p_142)
{
    int *l_143 = &g_132;
    int *l_144 = (void*)0;
    int *l_145 = &g_132;
    int *l_146 = &g_132;
    int *l_147 = &g_132;
    int *l_148 = &g_132;
    int *l_149 = &g_132;
    int *l_150 = &g_132;
    int *l_151 = (void*)0;
    int *l_152 = &g_132;
    int *l_153 = &g_132;
    char l_167 = 6L;
    unsigned l_170 = 0xD6E25B9EL;
    g_154--;
    if (((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(g_154, ((*l_150) < (safe_add_func_uint16_t_u_u((&l_148 != &l_150), (p_142 || (safe_add_func_int32_t_s_s(g_46, p_140)))))))), (safe_rshift_func_int16_t_s_s((l_167 | (safe_mod_func_uint8_t_u_u(l_170, g_154))), (*l_146))))) != 0xD61439ABL))
    {
        return p_140;
    }
    else
    {
        (*l_153) = g_10.f0;
        return g_93;
    }
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10.f0, "g_10.f0", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_174.f0, "g_174.f0", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_288.f0, "g_288.f0", print_hash_value);
    transparent_crc(g_549, "g_549", print_hash_value);
    transparent_crc(g_571, "g_571", print_hash_value);
    transparent_crc(g_576, "g_576", print_hash_value);
    transparent_crc(g_586, "g_586", print_hash_value);
    transparent_crc(g_590, "g_590", print_hash_value);
    transparent_crc(g_695, "g_695", print_hash_value);
    transparent_crc(g_760, "g_760", print_hash_value);
    transparent_crc(g_899, "g_899", print_hash_value);
    transparent_crc(g_990, "g_990", print_hash_value);
    transparent_crc(g_1059, "g_1059", print_hash_value);
    transparent_crc(g_1133, "g_1133", print_hash_value);
    transparent_crc(g_1176, "g_1176", print_hash_value);
    transparent_crc(g_1178, "g_1178", print_hash_value);
    transparent_crc(g_1195, "g_1195", print_hash_value);
    transparent_crc(g_1203, "g_1203", print_hash_value);
    transparent_crc(g_1242, "g_1242", print_hash_value);
    transparent_crc(g_1419, "g_1419", print_hash_value);
    transparent_crc(g_1429, "g_1429", print_hash_value);
    transparent_crc(g_1476.f0, "g_1476.f0", print_hash_value);
    transparent_crc(g_1570, "g_1570", print_hash_value);
    transparent_crc(g_1580, "g_1580", print_hash_value);
    transparent_crc(g_1602, "g_1602", print_hash_value);
    transparent_crc(g_1606, "g_1606", print_hash_value);
    transparent_crc(g_1658, "g_1658", print_hash_value);
    transparent_crc(g_1727, "g_1727", print_hash_value);
    transparent_crc(g_1730, "g_1730", print_hash_value);
    transparent_crc(g_1925, "g_1925", print_hash_value);
    transparent_crc(g_2072, "g_2072", print_hash_value);
    transparent_crc(g_2215, "g_2215", print_hash_value);
    transparent_crc(g_2237, "g_2237", print_hash_value);
    transparent_crc(g_2264, "g_2264", print_hash_value);
    transparent_crc(g_2274, "g_2274", print_hash_value);
    transparent_crc(g_2293, "g_2293", print_hash_value);
    transparent_crc(g_2337, "g_2337", print_hash_value);
    transparent_crc(g_2400, "g_2400", print_hash_value);
    transparent_crc(g_2404, "g_2404", print_hash_value);
    transparent_crc(g_2520, "g_2520", print_hash_value);
    transparent_crc(g_2536, "g_2536", print_hash_value);
    transparent_crc(g_2537, "g_2537", print_hash_value);
    transparent_crc(g_2542, "g_2542", print_hash_value);
    transparent_crc(g_2599, "g_2599", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
