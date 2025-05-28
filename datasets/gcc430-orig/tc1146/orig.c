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



static int g_9[6][4] = {{0xFC2285FAL, 0xFC2285FAL, (-8L), 0xFC2285FAL}, {0xFC2285FAL, 0xFC2285FAL, (-8L), 0xFC2285FAL}, {0xFC2285FAL, 0xFC2285FAL, (-8L), 0xFC2285FAL}, {0xFC2285FAL, 0xFC2285FAL, (-8L), 0xFC2285FAL}, {0xFC2285FAL, 0xFC2285FAL, (-8L), 0xFC2285FAL}, {0xFC2285FAL, 0xFC2285FAL, (-8L), 0xFC2285FAL}};
static unsigned short g_19[5][10] = {{0x89FFL, 0x0D54L, 65535UL, 0x664AL, 0xBA87L, 0x664AL, 65535UL, 0x0D54L, 0x89FFL, 0x5EAFL}, {0x89FFL, 0x0D54L, 65535UL, 0x664AL, 0xBA87L, 0x664AL, 65535UL, 0x0D54L, 0x89FFL, 0x5EAFL}, {0x89FFL, 0x0D54L, 65535UL, 0x664AL, 0xBA87L, 0x664AL, 65535UL, 0x0D54L, 0x89FFL, 0x5EAFL}, {0x89FFL, 0x0D54L, 65535UL, 0x664AL, 0xBA87L, 0x664AL, 65535UL, 0x0D54L, 0x89FFL, 0x5EAFL}, {0x89FFL, 0x0D54L, 65535UL, 0x664AL, 0xBA87L, 0x664AL, 65535UL, 0x0D54L, 0x89FFL, 0x5EAFL}};
static char g_29 = 1L;
static unsigned short g_31 = 0UL;
static short g_87 = 0xAB93L;
static unsigned g_91 = 4294967291UL;
static int g_95 = (-8L);
static int *g_94 = &g_95;
static int *g_104 = &g_95;
static long long g_111 = 0x40B9FCDB2BF7FA13LL;
static long long g_113 = (-1L);
static const unsigned g_118[3] = {0UL, 0UL, 0UL};
static unsigned char g_122 = 0xB8L;
static long long *g_126 = (void*)0;
static long long * const *g_125 = &g_126;
static const unsigned char * const *g_147 = (void*)0;
static char g_153 = 0xEAL;
static const unsigned *g_161[5] = {&g_91, &g_91, &g_91, &g_91, &g_91};
static const unsigned **g_160 = &g_161[3];
static const int *g_191 = &g_95;
static unsigned g_199[5] = {5UL, 0xAFA5ED00L, 5UL, 0xAFA5ED00L, 5UL};
static unsigned g_222[10][6] = {{0UL, 0UL, 0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL, 0UL, 0UL}};
static int g_224 = 0L;
static unsigned long long g_227 = 0x9BD9F5654A653397LL;
static long long g_228 = (-1L);
static short g_277[3][9][2] = {{{0xEC84L, 0x7CC0L}, {0xEC84L, 0x7CC0L}, {0xEC84L, 0x7CC0L}, {0xEC84L, 0x7CC0L}, {0xEC84L, 0x7CC0L}, {0xEC84L, 0x7CC0L}, {0xEC84L, 0x7CC0L}, {0xEC84L, 0x7CC0L}, {0xEC84L, 0x7CC0L}}, {{0xEC84L, 0x7CC0L}, {0xEC84L, 0x7CC0L}, {0xEC84L, 0x7CC0L}, {0xEC84L, 0x7CC0L}, {0xEC84L, 0x7CC0L}, {0xEC84L, 0x7CC0L}, {0xEC84L, 0x7CC0L}, {0xEC84L, 0x7CC0L}, {0xEC84L, 0x7CC0L}}, {{0xEC84L, 0x7CC0L}, {0xEC84L, 0x7CC0L}, {0xEC84L, 0x7CC0L}, {0xEC84L, 0x7CC0L}, {0xEC84L, 0x7CC0L}, {0xEC84L, 0x7CC0L}, {0xEC84L, 0x7CC0L}, {0xEC84L, 0x7CC0L}, {0xEC84L, 0x7CC0L}}};
static short *g_276 = &g_277[2][4][1];
static unsigned long long **g_311[3] = {(void*)0, (void*)0, (void*)0};
static char *g_329[5][5] = {{(void*)0, &g_29, (void*)0, &g_29, (void*)0}, {(void*)0, &g_29, (void*)0, &g_29, (void*)0}, {(void*)0, &g_29, (void*)0, &g_29, (void*)0}, {(void*)0, &g_29, (void*)0, &g_29, (void*)0}, {(void*)0, &g_29, (void*)0, &g_29, (void*)0}};
static char g_337 = 0L;
static unsigned *g_340 = &g_222[0][1];
static unsigned **g_339 = &g_340;
static unsigned char g_398 = 0UL;
static unsigned g_461 = 0x82EAC3F7L;
static unsigned char g_623 = 0x6EL;
static unsigned short **g_669 = (void*)0;
static const char g_678 = 0x6AL;
static const char *g_677[6][4] = {{&g_678, &g_678, &g_678, &g_678}, {&g_678, &g_678, &g_678, &g_678}, {&g_678, &g_678, &g_678, &g_678}, {&g_678, &g_678, &g_678, &g_678}, {&g_678, &g_678, &g_678, &g_678}, {&g_678, &g_678, &g_678, &g_678}};
static int *g_692 = (void*)0;
static int **g_691 = &g_692;
static short g_762 = 4L;
static unsigned long long g_862 = 9UL;
static short g_909 = 0L;
static unsigned long long ** const g_971 = (void*)0;
static short **g_1059 = &g_276;
static short ***g_1058 = &g_1059;
static const unsigned short g_1075 = 65535UL;
static const unsigned short *g_1079 = &g_19[0][3];
static const unsigned short **g_1078 = &g_1079;
static int *g_1085 = (void*)0;
static unsigned short g_1113 = 0xE4DCL;
static const unsigned short * const *g_1123[4] = {&g_1079, &g_1079, &g_1079, &g_1079};
static const unsigned short * const **g_1122 = &g_1123[3];
static unsigned g_1128 = 1UL;
static unsigned ***g_1158 = &g_339;
static unsigned ****g_1157[6] = {(void*)0, (void*)0, &g_1158, (void*)0, (void*)0, &g_1158};
static const unsigned **g_1164 = &g_161[2];
static const unsigned **g_1165 = (void*)0;
static const unsigned *** const g_1163[4] = {&g_1165, &g_1164, &g_1165, &g_1164};
static const unsigned *** const *g_1162 = &g_1163[2];
static const unsigned short g_1222 = 1UL;
static unsigned g_1316 = 0xD858382AL;
static unsigned short *g_1467 = &g_31;
static int *g_1470 = &g_9[1][3];
static unsigned short *g_1507 = &g_1113;



static int func_1(void);
static int * func_2(long long p_3, unsigned long long p_4, int * p_5, unsigned char p_6);
static long long func_12(long long p_13, int * p_14, unsigned char p_15, int * p_16, int * p_17);
static unsigned short * func_34(int * p_35, short p_36, char * p_37, unsigned short * const p_38, long long p_39);
static int func_47(unsigned p_48, int p_49, int p_50, int p_51, int p_52);
static char func_55(unsigned char p_56);
static int func_58(unsigned short * p_59, unsigned short * p_60, unsigned short * p_61, unsigned short * p_62, unsigned char p_63);
static int func_68(int * p_69, unsigned short * p_70, const char * p_71);
static unsigned short * func_72(char * p_73, unsigned short * p_74, int * p_75, char p_76, unsigned p_77);
static int * func_81(unsigned long long p_82);
static int func_1(void)
{
    int l_7 = 0x37D45DB3L;
    int *l_8 = &g_9[2][3];
    unsigned short *l_18 = &g_19[3][3];
    int l_20 = 0xA14C5530L;
    int **l_1469[3];
    unsigned *l_1481 = &g_199[4];
    char l_1492 = 0x85L;
    short l_1497 = 5L;
    unsigned l_1498 = 0x433D28A9L;
    unsigned short **l_1505 = (void*)0;
    unsigned short **l_1506[4][10][2] = {{{&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}}, {{&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}}, {{&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}}, {{&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}, {&l_18, (void*)0}}};
    char l_1508 = 0xAAL;
    unsigned short l_1511 = 1UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1469[i] = &g_94;
    g_1470 = func_2(l_7, l_7, l_8, (g_9[4][1] > (safe_sub_func_int64_t_s_s((*l_8), ((func_12((g_9[1][1] && ((l_20 = ((*l_18) = g_9[2][3])) <= 0xE2BFL)), l_8, (*l_8), l_8, l_8) != (*l_8)) == (*l_8))))));
    (*l_8) = (~(!((*g_276) ^ ((*g_1467) = (safe_lshift_func_int16_t_s_u(((g_91 , (safe_rshift_func_int16_t_s_u((**g_1059), 7))) < ((~((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((*l_8), 4)), (g_277[2][4][1] , 0xF5L))) == (safe_add_func_int32_t_s_s((2L >= func_47(((*l_1481) = g_1075), g_153, (*l_8), (*l_8), (*l_8))), 0x6D268979L)))) < 0x46658EDDL)), 4))))));
    for (g_623 = (-27); (g_623 < 9); ++g_623)
    {
        unsigned *****l_1484 = &g_1157[4];
        int l_1488 = 0x316042BBL;
        unsigned short *l_1495 = &g_1113;
        unsigned short l_1499 = 1UL;
        int *l_1500 = &g_95;
        if (((*l_8) = (&g_1158 != ((*l_1484) = &g_1158))))
        {
            long long l_1487 = 0x04F143CBB0BFEAB2LL;
            long long ** const l_1489 = &g_126;
            for (g_29 = (-25); (g_29 <= 6); g_29 = safe_add_func_int8_t_s_s(g_29, 2))
            {
                (*l_8) = (0xB1L | g_909);
                l_1488 = l_1487;
            }
            g_125 = l_1489;
            if (l_1487)
                break;
        }
        else
        {
            long long l_1493[3][2];
            unsigned char *l_1494 = &g_398;
            int *l_1496[10][7] = {{&l_1488, &l_1488, &g_9[5][0], (void*)0, &g_9[3][0], &l_1488, &g_9[2][3]}, {&l_1488, &l_1488, &g_9[5][0], (void*)0, &g_9[3][0], &l_1488, &g_9[2][3]}, {&l_1488, &l_1488, &g_9[5][0], (void*)0, &g_9[3][0], &l_1488, &g_9[2][3]}, {&l_1488, &l_1488, &g_9[5][0], (void*)0, &g_9[3][0], &l_1488, &g_9[2][3]}, {&l_1488, &l_1488, &g_9[5][0], (void*)0, &g_9[3][0], &l_1488, &g_9[2][3]}, {&l_1488, &l_1488, &g_9[5][0], (void*)0, &g_9[3][0], &l_1488, &g_9[2][3]}, {&l_1488, &l_1488, &g_9[5][0], (void*)0, &g_9[3][0], &l_1488, &g_9[2][3]}, {&l_1488, &l_1488, &g_9[5][0], (void*)0, &g_9[3][0], &l_1488, &g_9[2][3]}, {&l_1488, &l_1488, &g_9[5][0], (void*)0, &g_9[3][0], &l_1488, &g_9[2][3]}, {&l_1488, &l_1488, &g_9[5][0], (void*)0, &g_9[3][0], &l_1488, &g_9[2][3]}};
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1493[i][j] = 0x99065893AD7D21B8LL;
            }
            l_1499 = func_47(((-6L) > (*g_1079)), (safe_lshift_func_int16_t_s_s((((((((((((*l_8) | l_1492) ^ l_1497) < l_1488) & 1L) > l_1488) > l_1498) & g_199[1]) == (*l_8)) != (**g_160)) < (**g_1059)), l_1488)), g_29, l_1488, l_1488);
            g_1085 = func_81(l_1488);
            l_1500 = (void*)0;
            for (g_1113 = 0; (g_1113 == 34); g_1113 = safe_add_func_uint16_t_u_u(g_1113, 1))
            {
                g_104 = &g_9[2][2];
            }
        }
    }
    (*l_8) = ((*l_8) ^ (safe_add_func_int8_t_s_s(l_1508, ((*l_8) , (safe_add_func_uint32_t_u_u(0xD7CA4B85L, (*l_8)))))));
    return l_1511;
}







static int * func_2(long long p_3, unsigned long long p_4, int * p_5, unsigned char p_6)
{
    unsigned short l_1340 = 0x1900L;
    unsigned char *l_1361 = &g_623;
    int l_1367 = 0xB9152D42L;
    unsigned char l_1376 = 0xABL;
    unsigned ***l_1383[5] = {(void*)0, &g_339, (void*)0, &g_339, (void*)0};
    long long l_1386 = (-8L);
    int *l_1457 = &g_9[2][3];
    int i;
    for (g_623 = 3; (g_623 >= 47); g_623 = safe_add_func_int16_t_s_s(g_623, 2))
    {
        unsigned l_1349 = 5UL;
        int l_1355 = 0x28745468L;
        unsigned *l_1396 = &g_199[4];
        unsigned **l_1395 = &l_1396;
        unsigned char *l_1462 = &l_1376;
        unsigned char *l_1468 = &g_398;
        for (g_227 = 1; (g_227 <= 4); g_227 += 1)
        {
            int l_1343[6];
            unsigned short * const l_1353 = (void*)0;
            char *l_1360 = &g_153;
            unsigned *l_1366 = &l_1349;
            unsigned * const *l_1385[9];
            unsigned * const **l_1384[6][7][6] = {{{(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}}, {{(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}}, {{(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}}, {{(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}}, {{(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}}, {{(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}, {(void*)0, (void*)0, (void*)0, (void*)0, &l_1385[8], &l_1385[8]}}};
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_1343[i] = 0L;
            for (i = 0; i < 9; i++)
                l_1385[i] = &l_1366;
            if (((*p_5) = l_1340))
            {
                (*p_5) = (*p_5);
                for (g_337 = 0; g_337 < 3; g_337 += 1)
                {
                    g_311[g_337] = (void*)0;
                }
            }
            else
            {
                int l_1346 = 0L;
                int **l_1350 = &g_104;
                unsigned l_1351 = 18446744073709551609UL;
                char *l_1352[4][5];
                unsigned short *l_1354[2];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_1352[i][j] = &g_337;
                }
                for (i = 0; i < 2; i++)
                    l_1354[i] = &g_31;
                (*p_5) = (((safe_add_func_int8_t_s_s((p_6 , p_3), (((p_6 | ((func_47(l_1343[3], (safe_add_func_int8_t_s_s(((l_1346 , 0x39A4L) > (safe_add_func_int8_t_s_s((l_1355 = p_4), (-1L)))), l_1343[3])), l_1343[3], l_1340, l_1343[3]) && 0x517AL) , 0xAAL)) & 0x5AF2699EL) >= p_4))) , 6L) == p_3);
            }
            (*p_5) = ((((((~(*g_1079)) > (((**g_339) = 1UL) <= ((l_1367 = ((*l_1366) = ((((safe_lshift_func_uint8_t_u_u((g_122 = (safe_sub_func_uint8_t_u_u((p_6 <= p_4), ((*l_1360) = l_1349)))), 4)) , &p_4) == (((l_1361 == l_1360) , ((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(l_1355, 5)), l_1340)) & (-1L))) , (void*)0)) ^ 0x4789FCACL))) > (*p_5)))) | 8UL) , (void*)0) != (void*)0) | 0xFD89C94AL);
            for (g_31 = 0; (g_31 <= 4); g_31 += 1)
            {
                unsigned short l_1377 = 7UL;
                if ((*p_5))
                {
                    for (g_29 = 0; (g_29 <= 3); g_29 += 1)
                    {
                        int *l_1368 = (void*)0;
                        return l_1368;
                    }
                }
                else
                {
                    char l_1371 = 0x91L;
                    unsigned long long *l_1372[4][5] = {{&g_862, (void*)0, &g_862, (void*)0, &g_862}, {&g_862, (void*)0, &g_862, (void*)0, &g_862}, {&g_862, (void*)0, &g_862, (void*)0, &g_862}, {&g_862, (void*)0, &g_862, (void*)0, &g_862}};
                    long long l_1388[3][5] = {{1L, 1L, (-1L), (-1L), 0x1036D0E6657C37B5LL}, {1L, 1L, (-1L), (-1L), 0x1036D0E6657C37B5LL}, {1L, 1L, (-1L), (-1L), 0x1036D0E6657C37B5LL}};
                    int i, j;
                    if ((safe_sub_func_int64_t_s_s((((p_4 = l_1371) , &g_1078) != (void*)0), (l_1340 & (0xC0CAFA9BL ^ (*p_5))))))
                    {
                        unsigned long long l_1375 = 0UL;
                        unsigned ***l_1382 = &g_339;
                        int *l_1387 = &l_1355;
                        (*p_5) = l_1349;
                        (*l_1387) = ((safe_add_func_int32_t_s_s((*p_5), l_1375)) , ((*p_5) = (((l_1376 < ((*l_1366) = 4294967294UL)) , (l_1377 & 4294967290UL)) | ((safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u(0UL, ((((p_6 , (((*l_1360) = (l_1382 == l_1383[0])) , l_1383[0])) != l_1384[3][2][3]) || p_3) > l_1343[3]))) & 0x20L), l_1386)) ^ g_862))));
                    }
                    else
                    {
                        int *l_1391 = &l_1355;
                        l_1355 = (*p_5);
                        if (l_1388[0][0])
                            continue;
                        (*l_1391) = ((*p_5) = ((p_6 | (l_1343[3] & 1UL)) , (l_1349 > (safe_add_func_uint8_t_u_u((0x33L < (~p_3)), g_31)))));
                    }
                    g_191 = p_5;
                }
                g_94 = ((safe_sub_func_int32_t_s_s(((void*)0 != &g_971), 4294967287UL)) , &g_9[2][3]);
            }
            if ((*p_5))
                continue;
        }
        for (g_337 = 3; (g_337 >= 0); g_337 -= 1)
        {
            int **l_1394 = &g_1085;
            (*l_1394) = &l_1367;
            for (l_1386 = 4; (l_1386 >= 1); l_1386 -= 1)
            {
                return &g_95;
            }
        }
        if ((((*l_1395) = p_5) != p_5))
        {
            int *l_1399 = &l_1367;
            const unsigned l_1448 = 0xAA697BCAL;
            for (g_153 = 0; (g_153 < 12); g_153 = safe_add_func_uint64_t_u_u(g_153, 1))
            {
                int **l_1400[7][8] = {{&l_1399, (void*)0, &g_1085, &g_94, &g_1085, &l_1399, (void*)0, &g_94}, {&l_1399, (void*)0, &g_1085, &g_94, &g_1085, &l_1399, (void*)0, &g_94}, {&l_1399, (void*)0, &g_1085, &g_94, &g_1085, &l_1399, (void*)0, &g_94}, {&l_1399, (void*)0, &g_1085, &g_94, &g_1085, &l_1399, (void*)0, &g_94}, {&l_1399, (void*)0, &g_1085, &g_94, &g_1085, &l_1399, (void*)0, &g_94}, {&l_1399, (void*)0, &g_1085, &g_94, &g_1085, &l_1399, (void*)0, &g_94}, {&l_1399, (void*)0, &g_1085, &g_94, &g_1085, &l_1399, (void*)0, &g_94}};
                unsigned short l_1407[2];
                unsigned char **l_1445 = &l_1361;
                unsigned long long l_1447 = 18446744073709551613UL;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_1407[i] = 1UL;
                g_104 = l_1399;
                if (((safe_lshift_func_uint8_t_u_u((~(g_1128 , (*l_1399))), 3)) , ((*p_5) = (g_147 == g_147))))
                {
                    unsigned l_1408 = 0x93B6B95AL;
                    int *l_1412 = &g_224;
                    int *l_1413 = &g_95;
                    int l_1425 = 0xEC4BD52DL;
                    if (((safe_rshift_func_uint16_t_u_u(((((p_5 != (void*)0) || (safe_lshift_func_uint8_t_u_s(l_1407[0], ((*l_1399) | func_47(p_4, ((*l_1412) = func_47(((*l_1396) = (l_1408 == func_47(p_3, (safe_sub_func_int16_t_s_s((safe_unary_minus_func_int64_t_s(((func_47((l_1408 || ((*g_1079) <= p_6)), p_3, l_1355, (*p_5), l_1376) < p_3) | l_1349))), l_1349)), p_4, l_1355, l_1355))), l_1355, p_4, l_1340, p_6)), g_623, l_1376, p_4))))) , p_4) && (*l_1399)), p_6)) , (-4L)))
                    {
                        l_1413 = func_81(p_4);
                    }
                    else
                    {
                        short ****l_1414 = &g_1058;
                        int *l_1415 = (void*)0;
                        unsigned long long *l_1426 = (void*)0;
                        unsigned long long *l_1427 = &g_862;
                        (*g_104) = (&g_1058 == l_1414);
                        g_191 = l_1415;
                        (*g_104) = ((safe_add_func_int16_t_s_s((((safe_mod_func_uint64_t_u_u((p_6 || ((safe_sub_func_int64_t_s_s((safe_unary_minus_func_int64_t_s(((safe_add_func_int8_t_s_s(l_1425, ((l_1355 ^ ((7UL > (((*l_1427) = p_4) & (func_47(p_4, (p_4 , ((*l_1412) = (l_1355 && p_3))), (*l_1413), (*l_1399), g_1128) & p_3))) , 1UL)) > l_1349))) ^ p_3))), p_6)) > p_4)), p_6)) <= p_6) , (*g_276)), p_3)) <= p_6);
                        (*l_1399) = (-8L);
                    }
                    if ((*p_5))
                        continue;
                    return &g_9[2][3];
                }
                else
                {
                    char *l_1430 = (void*)0;
                    int l_1438[2][10];
                    unsigned char **l_1446 = &l_1361;
                    unsigned short *l_1455 = (void*)0;
                    unsigned short *l_1456 = &l_1407[0];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 10; j++)
                            l_1438[i][j] = 0x9D1323E9L;
                    }
                    if ((~((((p_6 ^ ((*l_1399) = func_47((safe_sub_func_int8_t_s_s(func_47(((l_1361 != l_1430) == (((***g_1158) = (safe_lshift_func_uint16_t_u_u(p_6, (l_1355 > ((-7L) | ((*l_1399) = ((***g_1122) | (safe_add_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(((*p_5) == (safe_unary_minus_func_int16_t_s(((***g_1058) = (0L >= p_4))))), (*g_1079))) > (-8L)), p_3))))))))) && p_3)), l_1438[0][3], g_1128, l_1355, p_6), g_19[3][6])), l_1355, l_1438[1][1], (*p_5), l_1355))) , p_6) == l_1376) , (*p_5))))
                    {
                        l_1438[0][3] = (*p_5);
                        (*p_5) = (p_6 > (safe_rshift_func_uint16_t_u_s(((p_3 <= (safe_rshift_func_uint8_t_u_u(((***g_1058) != (&p_3 == (void*)0)), p_4))) != (((*l_1399) && (safe_rshift_func_uint16_t_u_u((((l_1445 = l_1445) == l_1446) < l_1447), 12))) > p_3)), 13)));
                    }
                    else
                    {
                        p_5 = &g_9[4][3];
                        (*l_1399) = l_1448;
                    }
                    (*g_104) = ((((safe_rshift_func_int16_t_s_s((&g_9[2][3] != (void*)0), 10)) != l_1438[0][3]) , ((*l_1456) = (safe_rshift_func_int8_t_s_u(p_4, (l_1376 ^ (func_47(g_1128, (l_1367 = l_1367), p_6, (safe_rshift_func_uint16_t_u_u(0xE5D3L, p_4)), p_3) > 0xBCL)))))) || p_6);
                    l_1457 = l_1457;
                }
            }
        }
        else
        {
            for (l_1349 = 0; (l_1349 == 16); l_1349 = safe_add_func_uint16_t_u_u(l_1349, 2))
            {
                return &g_95;
            }
        }
        l_1355 = (safe_mod_func_uint16_t_u_u(((*g_1467) = (((*l_1462) = l_1349) & ((*l_1468) = (safe_sub_func_uint8_t_u_u((3UL && ((*l_1457) , (((*l_1457) = (*p_5)) , func_47(l_1349, (safe_rshift_func_uint16_t_u_s((*l_1457), p_6)), p_4, (*p_5), p_6)))), (-7L)))))), 0x1578L));
    }
    return &g_95;
}







static long long func_12(long long p_13, int * p_14, unsigned char p_15, int * p_16, int * p_17)
{
    int l_23 = 0x3ACB6D64L;
    unsigned short *l_26 = &g_19[3][3];
    int *l_27 = &g_9[2][3];
    char *l_28[6] = {&g_29, &g_29, &g_29, &g_29, &g_29, &g_29};
    unsigned short *l_30 = &g_31;
    long long l_42 = 0L;
    const unsigned short *l_1221 = &g_1222;
    long long l_1229[2];
    unsigned long long *l_1235 = &g_227;
    unsigned long long **l_1234 = &l_1235;
    unsigned long long l_1255 = 0xEE6E261C330D1A7CLL;
    int l_1318 = 9L;
    int i;
    for (i = 0; i < 2; i++)
        l_1229[i] = 1L;
    if ((safe_mod_func_uint8_t_u_u(l_23, (safe_sub_func_uint16_t_u_u(((*l_26) = 65528UL), ((*l_30) = (g_9[2][3] && (g_29 = ((void*)0 == l_27)))))))))
    {
        char *l_57 = &g_29;
        long long l_1209 = 0x1DFC03052D1770A9LL;
        char l_1210 = 0x58L;
        unsigned short * const l_1212 = &g_19[1][1];
        const unsigned short **l_1220[7][10] = {{(void*)0, &g_1079, (void*)0, &g_1079, (void*)0, &g_1079, (void*)0, &g_1079, (void*)0, &g_1079}, {(void*)0, &g_1079, (void*)0, &g_1079, (void*)0, &g_1079, (void*)0, &g_1079, (void*)0, &g_1079}, {(void*)0, &g_1079, (void*)0, &g_1079, (void*)0, &g_1079, (void*)0, &g_1079, (void*)0, &g_1079}, {(void*)0, &g_1079, (void*)0, &g_1079, (void*)0, &g_1079, (void*)0, &g_1079, (void*)0, &g_1079}, {(void*)0, &g_1079, (void*)0, &g_1079, (void*)0, &g_1079, (void*)0, &g_1079, (void*)0, &g_1079}, {(void*)0, &g_1079, (void*)0, &g_1079, (void*)0, &g_1079, (void*)0, &g_1079, (void*)0, &g_1079}, {(void*)0, &g_1079, (void*)0, &g_1079, (void*)0, &g_1079, (void*)0, &g_1079, (void*)0, &g_1079}};
        int *l_1223 = (void*)0;
        int *l_1224 = &g_95;
        unsigned long long ***l_1236 = &g_311[2];
        unsigned long long **l_1237 = &l_1235;
        unsigned l_1238 = 4UL;
        short l_1239 = 4L;
        const unsigned **l_1243[10] = {&g_161[3], &g_161[3], (void*)0, (void*)0, &g_161[3], &g_161[3], &g_161[3], (void*)0, (void*)0, &g_161[3]};
        unsigned short *l_1247 = &g_19[3][3];
        unsigned short *l_1248 = &g_19[3][3];
        unsigned l_1281 = 18446744073709551615UL;
        int l_1299 = 0x931AD917L;
        short **l_1314 = &g_276;
        int i, j;
        (*l_1224) = (g_29 || ((((l_1221 = func_34(&g_9[3][3], ((((((safe_sub_func_uint16_t_u_u(g_9[5][2], l_42)) , (*p_16)) ^ (safe_add_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(func_47((g_19[3][3] | ((safe_rshift_func_int8_t_s_u(func_55(((l_28[5] == ((p_14 == &g_9[2][3]) , l_57)) , p_13)), (*l_27))) <= l_1209)), p_13, l_1210, (*l_27), p_15), l_1210)) | (-1L)), 255UL))) != l_1209) == (*l_27)) || p_15), &l_1210, l_1212, l_1209)) != l_26) < g_9[1][2]) <= p_13));
        (*l_1224) = ((*p_17) > (safe_mod_func_int32_t_s_s(((safe_mod_func_int32_t_s_s((*l_1224), ((((*l_30) = (l_1229[0] >= ((l_30 == ((safe_add_func_uint64_t_u_u((*l_27), (((*l_57) = (p_15 >= (*l_27))) > (((**g_1059) = (p_15 , (safe_sub_func_int64_t_s_s(((l_1237 = l_1234) == &l_1235), 0x5FA6E2C9A99BBC74LL)))) , 0x63L)))) , l_30)) , p_13))) & p_15) ^ l_1238))) && l_1239), (*l_27))));
        for (g_461 = 14; (g_461 == 55); g_461 = safe_add_func_uint32_t_u_u(g_461, 5))
        {
            short l_1242 = 0x1FDCL;
            unsigned short *l_1246 = &g_1113;
            int * const l_1257 = &g_95;
            char *l_1271 = &g_29;
            unsigned *l_1272 = &g_199[4];
            long long *l_1282 = (void*)0;
            long long *l_1283 = &g_111;
            long long *l_1284[8][10] = {{&g_228, &g_228, &g_113, &g_228, &g_228, &g_113, &g_228, &g_228, &g_113, &g_228}, {&g_228, &g_228, &g_113, &g_228, &g_228, &g_113, &g_228, &g_228, &g_113, &g_228}, {&g_228, &g_228, &g_113, &g_228, &g_228, &g_113, &g_228, &g_228, &g_113, &g_228}, {&g_228, &g_228, &g_113, &g_228, &g_228, &g_113, &g_228, &g_228, &g_113, &g_228}, {&g_228, &g_228, &g_113, &g_228, &g_228, &g_113, &g_228, &g_228, &g_113, &g_228}, {&g_228, &g_228, &g_113, &g_228, &g_228, &g_113, &g_228, &g_228, &g_113, &g_228}, {&g_228, &g_228, &g_113, &g_228, &g_228, &g_113, &g_228, &g_228, &g_113, &g_228}, {&g_228, &g_228, &g_113, &g_228, &g_228, &g_113, &g_228, &g_228, &g_113, &g_228}};
            int *l_1285 = &l_23;
            unsigned char *l_1286 = &g_623;
            int **l_1307 = &g_1085;
            unsigned char **l_1313 = &l_1286;
            unsigned char ***l_1312 = &l_1313;
            unsigned *l_1315 = &g_1128;
            int *l_1317[4];
            int i, j;
            for (i = 0; i < 4; i++)
                l_1317[i] = &l_1299;
            if (((l_1242 , (l_1243[5] == ((safe_rshift_func_uint8_t_u_s(g_122, (((*l_1224) = (l_1242 && (0xBBF0L > ((*g_340) , 0L)))) && g_227))) , (void*)0))) && 65535UL))
            {
                int l_1251[8] = {5L, (-1L), 5L, (-1L), 5L, (-1L), 5L, (-1L)};
                int i;
                (*l_1224) = (*p_16);
                for (p_15 = 1; (p_15 <= 5); p_15 += 1)
                {
                    const unsigned long long * const l_1252 = &g_227;
                    int l_1256 = 1L;
                    int i, j;
                    (*l_1224) = (-5L);
                    (*l_1224) = (((safe_mod_func_uint16_t_u_u(l_1251[5], (((p_15 & (l_1252 != (*l_1234))) , ((*l_27) , (((safe_add_func_uint16_t_u_u((((((***g_1158) = ((1L < 0xE5L) == func_47(p_15, (*l_27), l_1255, (*l_1224), l_1256))) == 4294967294UL) || 0x4440L) , l_1256), (**g_1059))) <= p_15) , l_1256))) , l_1256))) != 1UL) <= p_13);
                    return p_13;
                }
                (*l_1224) = (*p_16);
            }
            else
            {
                int **l_1258[9][8] = {{&g_94, &l_1224, &l_27, &l_27, &l_1223, &l_27, &l_27, &g_1085}, {&g_94, &l_1224, &l_27, &l_27, &l_1223, &l_27, &l_27, &g_1085}, {&g_94, &l_1224, &l_27, &l_27, &l_1223, &l_27, &l_27, &g_1085}, {&g_94, &l_1224, &l_27, &l_27, &l_1223, &l_27, &l_27, &g_1085}, {&g_94, &l_1224, &l_27, &l_27, &l_1223, &l_27, &l_27, &g_1085}, {&g_94, &l_1224, &l_27, &l_27, &l_1223, &l_27, &l_27, &g_1085}, {&g_94, &l_1224, &l_27, &l_27, &l_1223, &l_27, &l_27, &g_1085}, {&g_94, &l_1224, &l_27, &l_27, &l_1223, &l_27, &l_27, &g_1085}, {&g_94, &l_1224, &l_27, &l_27, &l_1223, &l_27, &l_27, &g_1085}};
                int **l_1259 = &l_1224;
                int i, j;
                (*l_1259) = l_1257;
            }
            if ((((safe_rshift_func_int16_t_s_s((((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(((safe_mod_func_uint16_t_u_u((((*l_1286) = ((safe_sub_func_int32_t_s_s((*l_27), (safe_lshift_func_uint16_t_u_u((((*l_26) = (*l_27)) <= 0xB1C8L), 13)))) | func_47(((*l_1272) = (l_1271 != (void*)0)), ((*l_1285) = func_47((safe_add_func_int64_t_s_s(((p_13 = ((*l_1283) = (((safe_sub_func_int32_t_s_s(((*l_1257) = (*p_17)), (safe_sub_func_int32_t_s_s((0xCD66L != (*l_27)), (safe_mod_func_uint16_t_u_u((func_47(((((((*l_27) ^ (*p_16)) & 0x8A009E15763DA8B8LL) , 0UL) && 0xFA57051FL) | g_87), p_15, p_13, (*l_27), l_1281) , p_13), 0x4ADFL)))))) <= p_15) <= 0x6439L))) , (-1L)), p_15)), p_15, (*l_27), (*p_14), g_1075)), p_15, (*p_16), l_1242))) <= p_15), 0x38D4L)) <= (*l_27)))), 12)) | (**g_1059)) >= p_15), 10)) & g_277[2][0][1]) | (*l_27)))
            {
                unsigned l_1287[9];
                int **l_1288 = &g_94;
                int i;
                for (i = 0; i < 9; i++)
                    l_1287[i] = 4294967295UL;
                (*l_1288) = func_81(l_1287[8]);
                if ((**l_1288))
                    break;
                if ((**l_1288))
                {
                    unsigned char l_1295 = 8UL;
                    if ((*p_14))
                        break;
                    if ((*p_14))
                        break;
                    for (g_228 = 0; (g_228 < 5); g_228++)
                    {
                        (*l_1288) = p_17;
                        (*l_1257) = ((*g_94) , ((safe_mod_func_uint8_t_u_u(g_762, ((*l_1286) = (safe_sub_func_int16_t_s_s((*l_1224), ((((*g_1122) != (func_47(l_1295, p_13, (((*l_1248) = (safe_sub_func_uint32_t_u_u(((p_15 >= (safe_unary_minus_func_uint64_t_u(p_13))) && p_13), (*l_1257)))) != 0x6466L), (*g_94), l_1299) , (void*)0)) , p_15) >= (*l_27))))))) <= p_13));
                        (*l_1224) = 0x4A551357L;
                    }
                    (*l_1288) = &g_9[2][3];
                }
                else
                {
                    long long l_1302 = 0x5B9C8F5316E254C5LL;
                    for (g_337 = 0; (g_337 == (-14)); g_337 = safe_sub_func_uint8_t_u_u(g_337, 6))
                    {
                        (*l_1288) = func_81(l_1302);
                        return p_15;
                    }
                    if ((*p_14))
                        continue;
                    return p_13;
                }
                (*l_1224) = ((safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s(((*l_1286) = (**l_1288)), 7)), (*l_27))) & (*l_1257));
            }
            else
            {
                return (*l_1224);
            }
            (*l_1307) = func_81((*l_1257));
            l_1318 = (g_1316 = (safe_add_func_int32_t_s_s(0x89651EDEL, ((safe_add_func_int32_t_s_s(((*l_1257) = ((void*)0 == &l_1239)), ((*l_1315) = ((((l_1312 != (void*)0) , 1L) || ((*l_1286) = (**l_1307))) < ((*g_340) = (0x769B70BB42154662LL & (((l_1314 = (*g_1058)) != (void*)0) < p_15))))))) & p_13))));
        }
    }
    else
    {
        unsigned * const ***l_1320 = (void*)0;
        unsigned * const ****l_1319 = &l_1320;
        int l_1323 = 0xC85FAE0BL;
        unsigned char *l_1334 = &g_398;
        int **l_1337[5][9] = {{&l_27, (void*)0, &g_94, &l_27, &g_94, &l_27, &l_27, &g_94, &g_94}, {&l_27, (void*)0, &g_94, &l_27, &g_94, &l_27, &l_27, &g_94, &g_94}, {&l_27, (void*)0, &g_94, &l_27, &g_94, &l_27, &l_27, &g_94, &g_94}, {&l_27, (void*)0, &g_94, &l_27, &g_94, &l_27, &l_27, &g_94, &g_94}, {&l_27, (void*)0, &g_94, &l_27, &g_94, &l_27, &l_27, &g_94, &g_94}};
        int i, j;
        l_1318 = func_55(((&g_1157[5] != l_1319) , ((*l_1334) = func_47(((*p_14) < (safe_add_func_uint64_t_u_u(((l_1323 >= ((*l_1235) = (safe_lshift_func_uint8_t_u_u(l_1323, 4)))) || 0xE9L), (((*l_30) = (safe_lshift_func_int8_t_s_u(((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((*l_27) != (safe_lshift_func_int16_t_s_s(((~((*l_27) <= p_15)) == 0x7B3D7035L), (***g_1058)))), p_13)), p_13)) >= 0xD066C05DF4BA3755LL), 1))) | (**g_1078))))), l_1323, p_15, (*p_16), l_1323))));
        g_191 = (((+(safe_sub_func_int32_t_s_s((*p_16), 0UL))) ^ (***g_1058)) , (void*)0);
    }
    return (*l_27);
}







static unsigned short * func_34(int * p_35, short p_36, char * p_37, unsigned short * const p_38, long long p_39)
{
    short l_1215 = 0x5BA2L;
    unsigned l_1216 = 0x2ED13572L;
    unsigned char **l_1217 = (void*)0;
    int *l_1218 = &g_95;
    unsigned short *l_1219 = &g_19[3][3];
    (*l_1218) = (safe_add_func_int32_t_s_s((*p_35), (((((l_1215 < (((((*p_38) && l_1216) , l_1217) != (l_1215 , g_147)) , (l_1215 >= p_39))) <= (-8L)) , p_36) > 0xDB1780AC417212EDLL) == p_36)));
    return l_1219;
}







static int func_47(unsigned p_48, int p_49, int p_50, int p_51, int p_52)
{
    unsigned short l_1211 = 4UL;
    return l_1211;
}







static char func_55(unsigned char p_56)
{
    char *l_78 = &g_29;
    unsigned short *l_79 = &g_31;
    unsigned short **l_80 = &l_79;
    int l_85 = 0L;
    short *l_86 = &g_87;
    unsigned *l_90 = &g_91;
    int **l_101 = (void*)0;
    int **l_102 = (void*)0;
    int **l_103[6];
    unsigned short l_665 = 65530UL;
    short l_1081 = 0x9DAEL;
    unsigned ****l_1107 = (void*)0;
    unsigned long long *l_1144[1][8][5] = {{{&g_862, &g_227, (void*)0, &g_227, &g_862}, {&g_862, &g_227, (void*)0, &g_227, &g_862}, {&g_862, &g_227, (void*)0, &g_227, &g_862}, {&g_862, &g_227, (void*)0, &g_227, &g_862}, {&g_862, &g_227, (void*)0, &g_227, &g_862}, {&g_862, &g_227, (void*)0, &g_227, &g_862}, {&g_862, &g_227, (void*)0, &g_227, &g_862}, {&g_862, &g_227, (void*)0, &g_227, &g_862}}};
    unsigned l_1150 = 0x569ECA15L;
    int *l_1170[10] = {&g_224, &g_224, &g_224, &g_224, &g_224, &g_224, &g_224, &g_224, &g_224, &g_224};
    short ***l_1206 = (void*)0;
    unsigned short l_1207[10][10] = {{0xAA04L, 0xA68DL, 8UL, 0x86F1L, 6UL, 0x86F1L, 8UL, 0xA68DL, 0xAA04L, 65535UL}, {0xAA04L, 0xA68DL, 8UL, 0x86F1L, 6UL, 0x86F1L, 8UL, 0xA68DL, 0xAA04L, 65535UL}, {0xAA04L, 0xA68DL, 8UL, 0x86F1L, 6UL, 0x86F1L, 8UL, 0xA68DL, 0xAA04L, 65535UL}, {0xAA04L, 0xA68DL, 8UL, 0x86F1L, 6UL, 0x86F1L, 8UL, 0xA68DL, 0xAA04L, 65535UL}, {0xAA04L, 0xA68DL, 8UL, 0x86F1L, 6UL, 0x86F1L, 8UL, 0xA68DL, 0xAA04L, 65535UL}, {0xAA04L, 0xA68DL, 8UL, 0x86F1L, 6UL, 0x86F1L, 8UL, 0xA68DL, 0xAA04L, 65535UL}, {0xAA04L, 0xA68DL, 8UL, 0x86F1L, 6UL, 0x86F1L, 8UL, 0xA68DL, 0xAA04L, 65535UL}, {0xAA04L, 0xA68DL, 8UL, 0x86F1L, 6UL, 0x86F1L, 8UL, 0xA68DL, 0xAA04L, 65535UL}, {0xAA04L, 0xA68DL, 8UL, 0x86F1L, 6UL, 0x86F1L, 8UL, 0xA68DL, 0xAA04L, 65535UL}, {0xAA04L, 0xA68DL, 8UL, 0x86F1L, 6UL, 0x86F1L, 8UL, 0xA68DL, 0xAA04L, 65535UL}};
    unsigned l_1208[8] = {0x9F683F96L, 0x68B24983L, 0x9F683F96L, 0x68B24983L, 0x9F683F96L, 0x68B24983L, 0x9F683F96L, 0x68B24983L};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_103[i] = &g_94;
    if (func_58(((safe_sub_func_int32_t_s_s(p_56, (((((!(((safe_sub_func_int32_t_s_s(func_68(&g_9[2][3], func_72(l_78, ((*l_80) = l_79), (g_104 = func_81((((safe_rshift_func_int16_t_s_s(((*l_86) = l_85), 5)) , ((((*l_90) = (((safe_add_func_int32_t_s_s((p_56 & p_56), l_85)) , ((void*)0 != &g_19[0][7])) | 0xFBCDA4F1DFBA308DLL)) , 2L) , 0x11EE15D11E9056FFLL)) | (-1L)))), g_19[3][1], g_9[2][3]), l_78), g_623)) ^ 0xE45C1ED3BE560E50LL) > g_199[3])) | p_56) , 1UL) && p_56) & 18446744073709551608UL))) , (void*)0), &g_19[3][8], l_86, l_86, l_665))
    {
        int l_1071[6][6][7] = {{{0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}}, {{0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}}, {{0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}}, {{0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}}, {{0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}}, {{0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}, {0L, 0x8E139678L, 0x77DBC06CL, 0x5151C3FEL, 1L, 0xE8D40114L, 0x0A967BD4L}}};
        char l_1092 = 0x90L;
        int l_1095[2][1];
        unsigned char **l_1104 = (void*)0;
        unsigned char ***l_1103 = &l_1104;
        unsigned l_1141[6] = {18446744073709551615UL, 18446744073709551615UL, 1UL, 18446744073709551615UL, 18446744073709551615UL, 1UL};
        short ***l_1145 = &g_1059;
        int *l_1199 = &l_1071[1][1][5];
        unsigned short *l_1201 = &g_1113;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_1095[i][j] = 6L;
        }
        for (g_227 = 0; (g_227 < 53); g_227 = safe_add_func_int16_t_s_s(g_227, 4))
        {
            unsigned char *l_1068[10] = {&g_623, &g_623, &g_398, &g_398, &g_623, &g_623, &g_623, &g_398, &g_398, &g_623};
            unsigned char **l_1067 = &l_1068[4];
            unsigned char l_1082 = 0x33L;
            int l_1084 = 0L;
            int i;
            for (g_31 = 0; (g_31 <= 2); g_31 += 1)
            {
                long long l_1080[4][6] = {{0x89AACBAB2445EF20LL, 0L, 0x4B063D1928D406CDLL, (-8L), (-8L), 0x4B063D1928D406CDLL}, {0x89AACBAB2445EF20LL, 0L, 0x4B063D1928D406CDLL, (-8L), (-8L), 0x4B063D1928D406CDLL}, {0x89AACBAB2445EF20LL, 0L, 0x4B063D1928D406CDLL, (-8L), (-8L), 0x4B063D1928D406CDLL}, {0x89AACBAB2445EF20LL, 0L, 0x4B063D1928D406CDLL, (-8L), (-8L), 0x4B063D1928D406CDLL}};
                char l_1083[4];
                int *l_1098 = &l_1071[1][1][5];
                int i, j;
                for (i = 0; i < 4; i++)
                    l_1083[i] = (-1L);
                if ((l_1067 != (((safe_rshift_func_uint8_t_u_s((p_56 == p_56), l_1071[1][1][5])) > p_56) , (void*)0)))
                {
                    return p_56;
                }
                else
                {
                    const unsigned short *l_1074 = &g_1075;
                    const unsigned short **l_1073 = &l_1074;
                    const unsigned short ***l_1072 = &l_1073;
                    const unsigned short **l_1077 = &l_1074;
                    const unsigned short ***l_1076[9][5][5] = {{{(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}}, {{(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}}, {{(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}}, {{(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}}, {{(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}}, {{(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}}, {{(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}}, {{(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}}, {{(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}, {(void*)0, &l_1077, &l_1077, &l_1077, &l_1077}}};
                    int i, j, k;
                    g_1078 = ((*l_1072) = (void*)0);
                    l_1084 = (l_1083[3] = ((l_1080[1][3] , l_1081) & l_1082));
                }
                for (g_224 = 0; (g_224 <= 1); g_224 += 1)
                {
                    unsigned l_1091 = 0xEF2A287AL;
                    int l_1096 = 0xC6D5F2AEL;
                    for (g_461 = 0; (g_461 <= 2); g_461 += 1)
                    {
                        return p_56;
                    }
                    g_104 = g_1085;
                    for (g_153 = 0; (g_153 <= 2); g_153 += 1)
                    {
                        int l_1088 = 0x30B62257L;
                        int *l_1097 = &g_95;
                        int i;
                        g_95 = (l_1096 = ((((((p_56 > (((p_56 ^ l_1082) , (g_87 , (safe_sub_func_uint32_t_u_u((l_1088 , (((((safe_mod_func_uint16_t_u_u(0x4360L, (~(l_1091 == ((l_1092 < ((safe_lshift_func_uint16_t_u_s((p_56 < p_56), 12)) ^ l_1088)) & l_1091))))) ^ 1L) , 0x7C6EL) && p_56) , p_56)), (-3L))))) >= l_1095[1][0])) , l_1088) , 0xA9L) ^ p_56) ^ p_56) , p_56));
                        l_1097 = &l_1096;
                        l_1084 = (l_1084 , 0xBFC1B946L);
                        g_94 = &l_1084;
                    }
                    l_1098 = &g_9[2][3];
                }
            }
        }
        for (g_398 = (-3); (g_398 > 4); g_398 = safe_add_func_uint32_t_u_u(g_398, 9))
        {
            const int *l_1114[4];
            int i;
            for (i = 0; i < 4; i++)
                l_1114[i] = (void*)0;
            if ((safe_mod_func_int64_t_s_s(((&g_147 == l_1103) < ((safe_sub_func_uint16_t_u_u((!(l_1107 != (void*)0)), (*g_1079))) < (safe_lshift_func_uint16_t_u_s(((l_1071[1][1][4] ^ l_1095[1][0]) < p_56), 12)))), p_56)))
            {
                unsigned long long l_1110[4][10][5] = {{{0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}}, {{0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}}, {{0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}}, {{0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}, {0x2469C85389F13749LL, 0x571CE42460CB5B2CLL, 1UL, 0x571CE42460CB5B2CLL, 0x2469C85389F13749LL}}};
                int i, j, k;
                l_1110[0][5][2] = p_56;
            }
            else
            {
                for (g_122 = 0; (g_122 <= 18); g_122 = safe_add_func_uint64_t_u_u(g_122, 3))
                {
                    const int **l_1115 = &g_191;
                    g_1113 = (g_95 = (&g_678 != (void*)0));
                    (*l_1115) = l_1114[1];
                }
                for (g_762 = 24; (g_762 >= (-1)); --g_762)
                {
                    char l_1120[4] = {0x2BL, (-4L), 0x2BL, (-4L)};
                    int i;
                    if ((l_1120[0] = (safe_lshift_func_uint16_t_u_u(0xE3A5L, p_56))))
                    {
                        if (p_56)
                            break;
                    }
                    else
                    {
                        int l_1121[3];
                        unsigned long long *l_1126[4];
                        int l_1127 = 9L;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1121[i] = 0L;
                        for (i = 0; i < 4; i++)
                            l_1126[i] = &g_227;
                        if (p_56)
                            break;
                        if (l_1121[1])
                            break;
                        g_104 = func_81((l_1120[0] , p_56));
                        g_191 = func_81((((g_1122 == &l_80) == (safe_add_func_uint8_t_u_u((0x00L || p_56), l_1121[1]))) , (l_1127 = p_56)));
                    }
                    g_1128 = 0xE38E2C61L;
                    if (p_56)
                        break;
                }
            }
        }
        for (l_1081 = 0; (l_1081 == (-25)); l_1081 = safe_sub_func_uint8_t_u_u(l_1081, 5))
        {
            int *l_1134 = &l_1071[5][5][4];
            short *** const l_1151 = &g_1059;
            long long *l_1152[5];
            int l_1153[5];
            unsigned l_1156 = 0x1109D0B6L;
            unsigned short *l_1188[7] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
            int l_1192 = (-1L);
            int i;
            for (i = 0; i < 5; i++)
                l_1152[i] = (void*)0;
            for (i = 0; i < 5; i++)
                l_1153[i] = 0xF7AF4665L;
            for (g_623 = 0; (g_623 == 5); g_623 = safe_add_func_uint32_t_u_u(g_623, 1))
            {
                int *l_1133[8][3] = {{&g_9[2][3], &l_1071[3][4][0], &g_9[1][1]}, {&g_9[2][3], &l_1071[3][4][0], &g_9[1][1]}, {&g_9[2][3], &l_1071[3][4][0], &g_9[1][1]}, {&g_9[2][3], &l_1071[3][4][0], &g_9[1][1]}, {&g_9[2][3], &l_1071[3][4][0], &g_9[1][1]}, {&g_9[2][3], &l_1071[3][4][0], &g_9[1][1]}, {&g_9[2][3], &l_1071[3][4][0], &g_9[1][1]}, {&g_9[2][3], &l_1071[3][4][0], &g_9[1][1]}};
                int i, j;
                l_1134 = l_1133[5][2];
            }
            if ((*l_1134))
                break;
            if ((((l_1153[1] = (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u(p_56, 9)), ((((((safe_sub_func_uint32_t_u_u((((0x86510E02L != (+l_1141[4])) , ((((safe_sub_func_uint32_t_u_u(((void*)0 != l_1144[0][3][0]), ((*l_1134) ^ (0x09178E297D407E63LL & (l_1145 != ((safe_unary_minus_func_int16_t_s((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_int64_t_s((l_1150 > p_56))), 7)))) , l_1151)))))) || l_1141[4]) >= 1UL) == (*l_1134))) < p_56), (-8L))) || (*l_1134)) & p_56) > p_56) && p_56) > 250UL)))) ^ p_56) <= 0x41239FADL))
            {
                const unsigned ***l_1161 = &g_160;
                const unsigned *** const *l_1160 = &l_1161;
                int *l_1169 = &g_224;
                int l_1175[10] = {0L, 0x1C1815CBL, 0L, 0x1C1815CBL, 0L, 0x1C1815CBL, 0L, 0x1C1815CBL, 0L, 0x1C1815CBL};
                int *l_1193 = &l_85;
                unsigned char ** const *l_1200 = &l_1104;
                unsigned l_1204 = 0x3D5A6C55L;
                int i;
                if ((((safe_lshift_func_uint16_t_u_s((*g_1079), ((***g_1058) <= (((*l_1134) <= l_1156) , (*l_1134))))) , (***g_1122)) && (0xB0BEL >= (*g_276))))
                {
                    unsigned *****l_1159 = &g_1157[0];
                    unsigned *l_1167 = &g_199[1];
                    unsigned **l_1166 = &l_1167;
                    unsigned **l_1168 = (void*)0;
                    if ((((*l_1159) = g_1157[4]) == (((0xE1CF139C73124A69LL || p_56) && p_56) , (g_1162 = l_1160))))
                    {
                        l_1168 = l_1166;
                        l_1175[9] = (p_56 ^ (((*g_276) = (l_1169 != (l_1170[2] = ((*g_691) = l_1167)))) < (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u(2UL, 0x6D2FD5D25CAD84CBLL)), 12))));
                        if (l_1175[9])
                            break;
                    }
                    else
                    {
                        unsigned short l_1180[6] = {0xD2DAL, 0xD2DAL, 0UL, 0xD2DAL, 0xD2DAL, 0UL};
                        int *l_1187 = &g_9[2][3];
                        char *l_1189 = (void*)0;
                        char *l_1190 = &g_337;
                        int i;
                        l_1071[1][1][5] = ((~(((safe_lshift_func_uint16_t_u_s(p_56, 0)) ^ (safe_lshift_func_uint8_t_u_u(255UL, (((***g_1058) == (l_1180[3] , ((safe_rshift_func_int8_t_s_s((-7L), 2)) && ((*l_79) = (safe_sub_func_uint64_t_u_u(((((l_1180[3] == (-1L)) != p_56) ^ (p_56 , 0xD79BL)) , 1UL), 0xFCA1F63413247250LL)))))) , 249UL)))) || 1UL)) >= l_1175[9]);
                        if (l_1180[3])
                            break;
                        l_1071[1][1][5] = (((*l_1167) = (p_56 & (safe_sub_func_uint32_t_u_u(l_1175[9], p_56)))) , p_56);
                    }
                }
                else
                {
                    unsigned l_1191[10] = {0xA8BAEFB5L, 4294967287UL, 0xA8BAEFB5L, 4294967287UL, 0xA8BAEFB5L, 4294967287UL, 0xA8BAEFB5L, 4294967287UL, 0xA8BAEFB5L, 4294967287UL};
                    int i;
                    l_1191[5] = p_56;
                    l_1192 = p_56;
                    g_1085 = l_1193;
                }
                if ((safe_sub_func_uint8_t_u_u((p_56 < (*l_1134)), p_56)))
                {
                    unsigned short *l_1202 = (void*)0;
                    int l_1203 = 0xCB231698L;
                    for (g_153 = 18; (g_153 > 4); g_153 = safe_sub_func_int16_t_s_s(g_153, 7))
                    {
                        int *l_1198[5][8][6] = {{{&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}}, {{&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}}, {{&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}}, {{&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}}, {{&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}, {&g_95, &l_1071[3][4][1], &l_1175[1], &g_95, &l_1095[0][0], &g_9[0][0]}}};
                        int i, j, k;
                        g_104 = l_1198[2][6][4];
                        l_1199 = &l_1095[1][0];
                    }
                    g_1085 = func_81(l_1203);
                }
                else
                {
                    (*l_1193) = p_56;
                }
                return l_1204;
            }
            else
            {
                unsigned l_1205 = 7UL;
                (*l_1199) = (((*g_340) = l_1205) , 0xADB86CCBL);
                if (l_1205)
                    break;
                (*l_1199) = (-1L);
            }
            for (g_1128 = 0; g_1128 < 6; g_1128 += 1)
            {
                l_1141[g_1128] = 0x82806D1CL;
            }
        }
    }
    else
    {
        return p_56;
    }
    g_95 = (l_1206 != (void*)0);
    l_1208[2] = l_1207[4][8];
    g_95 = p_56;
    return p_56;
}







static int func_58(unsigned short * p_59, unsigned short * p_60, unsigned short * p_61, unsigned short * p_62, unsigned char p_63)
{
    int *l_666 = (void*)0;
    char *l_667[2];
    int l_668 = 0xC2AEBECDL;
    unsigned short ***l_670 = &g_669;
    unsigned long long l_671 = 0UL;
    unsigned l_672 = 0x0934B943L;
    int **l_694 = &g_692;
    int l_696[7][1];
    int *l_868 = &l_696[3][0];
    int l_907 = 0x953B8ABBL;
    const int *l_928 = (void*)0;
    int l_974 = 0x43801F2DL;
    unsigned **l_997 = &g_340;
    unsigned long long *l_1011[4][10][6] = {{{&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}}, {{&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}}, {{&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}}, {{&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}, {&l_671, &g_862, (void*)0, &l_671, &l_671, &l_671}}};
    unsigned long long **l_1010 = &l_1011[0][9][3];
    int *l_1055 = &l_696[6][0];
    unsigned l_1062 = 0xDA3CB2CDL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_667[i] = &g_29;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_696[i][j] = 0xC047B929L;
    }
    if ((((+((g_153 , l_672) ^ p_63)) == 1L) == l_672))
    {
        const char *l_675 = &g_29;
        const char **l_676[10][4][6] = {{{(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}}, {{(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}}, {{(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}}, {{(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}}, {{(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}}, {{(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}}, {{(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}}, {{(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}}, {{(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}}, {{(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}, {(void*)0, &l_675, &l_675, &l_675, &l_675, &l_675}}};
        int l_679 = 0x61AB7996L;
        int *l_680 = &g_95;
        int **l_690 = (void*)0;
        unsigned char l_717 = 0x5DL;
        long long *l_721 = &g_228;
        const int *l_737 = &g_9[0][1];
        unsigned l_771[1][10] = {{18446744073709551606UL, 6UL, 18446744073709551606UL, 6UL, 18446744073709551606UL, 6UL, 18446744073709551606UL, 6UL, 18446744073709551606UL, 6UL}};
        const char *l_784 = &g_678;
        int l_859 = 7L;
        int l_894[5];
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_894[i] = 0L;
lbl_785:
        if (((*l_680) = (((safe_rshift_func_int8_t_s_u(p_63, (p_63 == (l_679 = 0x128D4806L)))) == ((*p_61) , 0x63D97BA0DD011659LL)) , l_679)))
        {
            unsigned l_683 = 4UL;
            int **l_695 = &g_692;
            int l_698 = (-4L);
            int **l_700 = &g_94;
            unsigned l_722 = 0xE61D02FFL;
            for (g_111 = 29; (g_111 >= (-29)); g_111--)
            {
                int ***l_693[9] = {&l_690, &g_691, &l_690, &g_691, &l_690, &g_691, &l_690, &g_691, &l_690};
                int l_697 = 0x5C97F786L;
                int **l_699[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_699[i] = &l_680;
                (*l_680) = ((l_697 = (+(p_63 && (((((*l_680) & ((void*)0 == l_680)) != (((1L == l_683) , (((safe_add_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((*l_680), ((*g_276) = ((l_690 == (l_695 = (l_694 = g_691))) > (*g_276))))), 65535UL)) , l_696[3][0]), (*l_680))) , 1L) <= (*l_680))) >= p_63)) >= 0x029F4F8746B40FC9LL) >= (**g_339))))) | l_698);
                g_94 = &g_9[1][1];
            }
            (*l_700) = &g_95;
            for (g_113 = (-30); (g_113 >= (-2)); g_113 = safe_add_func_int64_t_s_s(g_113, 6))
            {
                char *l_709 = (void*)0;
                int l_727 = 0xA0BB9D8FL;
                for (g_224 = 28; (g_224 != (-3)); g_224--)
                {
                    int l_707 = (-5L);
                    char *l_708 = &g_153;
                    g_104 = &g_9[2][3];
                    if ((*g_104))
                        break;
                }
            }
            (*l_700) = &l_696[0][0];
        }
        else
        {
lbl_795:
            for (l_672 = 0; (l_672 == 18); l_672 = safe_add_func_uint16_t_u_u(l_672, 3))
            {
                const int **l_738 = &g_191;
                int **l_739 = &g_104;
                (*l_738) = l_737;
                (*l_738) = ((*l_739) = (void*)0);
            }
            for (g_224 = 23; (g_224 < 14); g_224 = safe_sub_func_uint64_t_u_u(g_224, 3))
            {
                const char l_747 = (-10L);
                const unsigned char * const l_753[6][3] = {{&g_122, &g_122, &g_122}, {&g_122, &g_122, &g_122}, {&g_122, &g_122, &g_122}, {&g_122, &g_122, &g_122}, {&g_122, &g_122, &g_122}, {&g_122, &g_122, &g_122}};
                const unsigned char * const *l_752 = &l_753[2][1];
                int i, j;
                if (p_63)
                    break;
                for (l_672 = 28; (l_672 <= 31); ++l_672)
                {
                    const unsigned char * const **l_751[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_751[i] = &g_147;
                    for (g_111 = 0; (g_111 == (-5)); g_111 = safe_sub_func_int64_t_s_s(g_111, 8))
                    {
                        unsigned *** const *l_746 = (void*)0;
                        int l_748 = 0xD2F56E50L;
                        int **l_749 = &g_94;
                        int l_750[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_750[i] = (-7L);
                        (*l_680) = ((void*)0 == l_746);
                        if (l_747)
                            break;
                        (*l_749) = func_81((l_748 = p_63));
                        if (l_750[0])
                            continue;
                    }
                    l_752 = g_147;
                }
            }
        }
        if (((*l_680) , l_668))
        {
            unsigned short l_754 = 0x5F26L;
            unsigned char *l_758 = (void*)0;
            unsigned char *l_759 = &g_623;
            short *l_760 = &g_87;
            short *l_761 = &g_762;
            int l_767 = 0xC190E19BL;
            const char *l_782 = &g_678;
            const unsigned char l_790 = 6UL;
            int l_800 = 9L;
            int l_801[6] = {2L, 2L, 0xD4434230L, 2L, 2L, 0xD4434230L};
            char l_847 = 1L;
            unsigned long long *l_856 = (void*)0;
            unsigned long long *l_857 = &l_671;
            int l_858[5][3] = {{0x0A325ABCL, 0x0A325ABCL, 0xC4B9E0F1L}, {0x0A325ABCL, 0x0A325ABCL, 0xC4B9E0F1L}, {0x0A325ABCL, 0x0A325ABCL, 0xC4B9E0F1L}, {0x0A325ABCL, 0x0A325ABCL, 0xC4B9E0F1L}, {0x0A325ABCL, 0x0A325ABCL, 0xC4B9E0F1L}};
            unsigned long long *l_860 = &g_227;
            unsigned long long *l_861 = &g_862;
            int **l_863 = &g_94;
            int i, j;
            if (((*g_276) != ((*l_761) = (l_754 && ((*l_760) = (safe_unary_minus_func_uint8_t_u(((p_63 , ((safe_sub_func_int8_t_s_s(p_63, ((*l_759) = l_754))) , (*p_62))) & g_222[0][1]))))))))
            {
                long long l_763 = 0x636014BBEBD128B2LL;
                int l_764 = 7L;
                unsigned short *l_778[10][2][1] = {{{&l_754}, {&l_754}}, {{&l_754}, {&l_754}}, {{&l_754}, {&l_754}}, {{&l_754}, {&l_754}}, {{&l_754}, {&l_754}}, {{&l_754}, {&l_754}}, {{&l_754}, {&l_754}}, {{&l_754}, {&l_754}}, {{&l_754}, {&l_754}}, {{&l_754}, {&l_754}}};
                int i, j, k;
                if (l_763)
                {
                    int *l_765 = &l_696[3][0];
                    int *l_766 = &l_764;
                    l_767 = ((*l_766) = ((*l_765) = (l_764 , ((*l_680) = (l_763 ^ 6UL)))));
                    return l_763;
                }
                else
                {
                    unsigned char l_772[9][6] = {{246UL, 0x9BL, 252UL, 0x9BL, 246UL, 253UL}, {246UL, 0x9BL, 252UL, 0x9BL, 246UL, 253UL}, {246UL, 0x9BL, 252UL, 0x9BL, 246UL, 253UL}, {246UL, 0x9BL, 252UL, 0x9BL, 246UL, 253UL}, {246UL, 0x9BL, 252UL, 0x9BL, 246UL, 253UL}, {246UL, 0x9BL, 252UL, 0x9BL, 246UL, 253UL}, {246UL, 0x9BL, 252UL, 0x9BL, 246UL, 253UL}, {246UL, 0x9BL, 252UL, 0x9BL, 246UL, 253UL}, {246UL, 0x9BL, 252UL, 0x9BL, 246UL, 253UL}};
                    unsigned short *l_773 = &g_19[4][0];
                    unsigned short **l_779 = (void*)0;
                    unsigned short **l_780 = (void*)0;
                    unsigned short **l_781 = &l_778[3][0][0];
                    int i, j;
                    if (((*l_680) = (*l_737)))
                    {
                        int *l_768 = (void*)0;
                        int **l_769 = &l_666;
                        l_768 = (g_104 = &l_764);
                        (*l_769) = &l_679;
                        (**l_769) = ((*l_680) = (l_763 , (*g_94)));
                    }
                    else
                    {
                        return p_63;
                    }
                    if ((l_772[1][0] >= (safe_rshift_func_uint16_t_u_s(((safe_add_func_uint32_t_u_u((((*l_759) = (p_63 > (l_772[3][4] != (*l_680)))) != 1UL), 8UL)) & 1L), (*g_276)))))
                    {
                        int *l_783 = &l_764;
                        l_764 = ((l_772[1][3] , (p_63 & ((void*)0 == &p_63))) , (*g_94));
                        (*l_783) = (*g_94);
                    }
                    else
                    {
                        (*l_680) = (*l_737);
                    }
                    if (g_87)
                        goto lbl_785;
                }
                g_104 = &g_9[2][0];
            }
            else
            {
                int l_789 = (-6L);
                unsigned long long ***l_791 = &g_311[0];
                int *l_794 = (void*)0;
                unsigned ***l_820[9][10] = {{&g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339}};
                const unsigned ***l_822 = &g_160;
                short l_830[6];
                unsigned short *l_831 = &l_754;
                int i, j;
                for (i = 0; i < 6; i++)
                    l_830[i] = 0x1F4AL;
                if (p_63)
                {
                    int *l_786 = (void*)0;
                    l_786 = &g_9[2][3];
                    if ((((safe_lshift_func_uint8_t_u_s(l_789, 4)) , 0x38E5C651L) , (&g_311[0] != (l_790 , l_791))))
                    {
                        int **l_792 = &g_94;
                        (*l_792) = &l_679;
                        if (l_754)
                            goto lbl_785;
                        return p_63;
                    }
                    else
                    {
                        int **l_793[5] = {&g_104, &l_786, &g_104, &l_786, &g_104};
                        int i;
                        l_794 = &l_668;
                        if (l_679)
                            goto lbl_795;
                        (*l_680) = (*g_94);
                    }
                }
                else
                {
                    unsigned long long *l_798 = &l_671;
                    int l_799 = 0x7E1E191AL;
                    unsigned **l_802 = (void*)0;
                    unsigned *l_803 = (void*)0;
                    int **l_804 = &l_666;
                    int *l_832 = &l_696[3][0];
                    if (l_672)
                        goto lbl_785;
                    (*l_804) = func_81((((l_803 = func_81(((l_801[1] = (((safe_add_func_int32_t_s_s((((((*g_340) = 0x4B8079D2L) > l_789) <= (g_228 | 0UL)) <= ((*l_798) = (((*g_276) = (*g_276)) != (+(p_63 & 253UL))))), (*l_737))) && ((l_800 = (l_767 = l_799)) >= l_799)) | p_63)) , p_63))) != l_794) , 0xB2C9BCC356E0B6BCLL));
                    if (l_790)
                        goto lbl_823;
lbl_823:
                    if ((safe_lshift_func_int8_t_s_s(((*l_680) >= p_63), (*l_737))))
                    {
                        char l_819 = 0x42L;
                        g_104 = &l_789;
                        l_680 = ((((safe_mod_func_uint64_t_u_u(p_63, (safe_add_func_uint64_t_u_u(p_63, (((g_398 = (l_754 != (((p_63 | ((safe_add_func_int16_t_s_s(p_63, (**l_804))) >= (-5L))) >= ((safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(p_63, (((0x18L || l_819) ^ (*p_60)) & 0x90F90D0AL))), 1L)) >= 0x85086911L)) | (-7L)))) >= 5L) > (*g_276)))))) ^ l_801[2]) != 2UL) , (void*)0);
                    }
                    else
                    {
                        unsigned ****l_821 = &l_820[4][8];
                        (*l_680) = (((*l_821) = l_820[4][8]) == l_822);
                        (*l_680) = p_63;
                    }
                    (*l_832) = (((p_63 , (((safe_sub_func_int32_t_s_s(((*l_666) || (((safe_lshift_func_uint8_t_u_s(((*l_759) = ((safe_lshift_func_int16_t_s_u(p_63, 12)) | l_830[4])), 7)) , (*l_666)) < (p_63 & (4L & (*l_666))))), ((p_63 || (*l_666)) || (-1L)))) >= p_63) != (-1L))) , p_63) , (**l_804));
                }
            }
            (*l_863) = func_81(((*l_861) = ((*l_860) = (((((((*l_721) = (-5L)) < (((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(((*l_761) = (safe_sub_func_int16_t_s_s((((l_801[1] = 0x48L) >= ((*l_737) , (l_767 = (safe_rshift_func_uint8_t_u_u(((p_63 < 8UL) , (((*l_759) = (safe_rshift_func_int8_t_s_u(((safe_add_func_uint8_t_u_u(l_847, p_63)) <= (((safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint16_t_u_u(((((*l_857) = ((safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u((p_63 & (g_95 , p_63)), p_63)), 7)) , 18446744073709551609UL)) , &g_95) != (void*)0), (*g_276))) , l_858[4][1]), 8)) | g_199[4]) >= p_63)), 2))) < l_859)), p_63))))) <= p_63), 1UL))), (*p_62))), 10)), (*g_94))) ^ 5L) < l_754)) > p_63) >= 1UL) | p_63) | p_63))));
            (*l_863) = (g_224 , &g_95);
            for (g_31 = 0; (g_31 <= 2); g_31 += 1)
            {
                int *l_864 = &g_9[2][3];
                int *l_866 = &l_800;
                short **l_879 = &g_276;
                short ***l_880 = &l_879;
                int i;
            }
        }
        else
        {
            int *l_885 = &l_668;
            unsigned short *l_886 = &g_19[3][3];
            const char *l_887[3];
            short l_895 = 0x5201L;
            unsigned char l_899 = 0xE9L;
            int **l_900 = &l_680;
            long long l_908 = 0x3DA0B4B655BE8026LL;
            int i;
            for (i = 0; i < 3; i++)
                l_887[i] = &g_29;
            (*l_680) = ((safe_mod_func_uint32_t_u_u((&g_277[2][4][1] == &g_277[2][4][1]), ((*l_868) = (safe_lshift_func_uint16_t_u_s((p_63 >= p_63), p_63))))) <= p_63);
            if ((((safe_add_func_int32_t_s_s(((safe_add_func_int16_t_s_s(((((*l_721) = (p_63 , ((((safe_lshift_func_uint8_t_u_u(((((**g_339) = ((*g_94) , 0xBC4AC658L)) != ((*l_868) == (*l_868))) , 0UL), (&l_771[0][2] == &g_199[4]))) >= (**g_160)) != p_63) , p_63))) || p_63) && l_894[3]), p_63)) <= p_63), (*l_885))) <= p_63) , (*l_737)))
            {
                return l_895;
            }
            else
            {
                int **l_896[8];
                int i;
                for (i = 0; i < 8; i++)
                    l_896[i] = &l_680;
                l_868 = &l_668;
                for (g_398 = 0; (g_398 != 44); ++g_398)
                {
                    (*l_885) = (l_899 >= 1UL);
                }
            }
            (*l_900) = &g_9[2][0];
            l_868 = ((!p_63) , (((((((void*)0 != &g_126) < ((((safe_mod_func_uint32_t_u_u(((*g_340) = (((safe_add_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u(p_63, ((*l_721) = (6UL == l_907)))) < (*l_885)), p_63)) ^ 0x998AL) , 0x93594B6EL)), 0xC48EDE4CL)) == (*l_868)) & p_63) | p_63)) != l_908) >= (**l_900)) , g_909) , &g_9[2][3]));
        }
    }
    else
    {
        int l_910 = 0x3900934FL;
        int l_917 = 4L;
        int * const l_920 = &l_696[3][0];
        unsigned short l_940 = 4UL;
        unsigned l_968 = 4294967295UL;
        const char *l_969 = (void*)0;
        unsigned short *l_975[4][2] = {{&g_19[3][3], &g_19[3][3]}, {&g_19[3][3], &g_19[3][3]}, {&g_19[3][3], &g_19[3][3]}, {&g_19[3][3], &g_19[3][3]}};
        unsigned long long **l_1014 = &l_1011[0][9][3];
        const short ***l_1061 = (void*)0;
        const short ****l_1060 = &l_1061;
        int i, j;
        if ((l_910 = 1L))
        {
            long long l_918 = (-5L);
            unsigned *l_919 = &g_199[0];
            int **l_921 = &l_868;
            (*l_921) = ((g_87 <= (((*l_868) = (((*l_919) = (((safe_mod_func_uint16_t_u_u((((((**g_160) | ((safe_rshift_func_int16_t_s_s(((l_917 = (*g_94)) , ((((*p_61) || ((g_337 > ((l_918 , l_917) < 0x0E27203EL)) | 0xEB14L)) <= 0xEEA8L) != 0xE1DBD29A312987BBLL)), 14)) != 0xC26EL)) > (*g_191)) && 0L) , (*l_868)), (*g_276))) <= p_63) >= (*l_868))) , 1L)) , (*l_868))) , l_920);
        }
        else
        {
            short l_930 = 0x8F6FL;
            unsigned short *l_956 = (void*)0;
            int *l_957 = &l_668;
            const char *l_970 = &g_29;
            unsigned l_1042[4][2] = {{0xF64DD7F0L, 0x7322099DL}, {0xF64DD7F0L, 0x7322099DL}, {0xF64DD7F0L, 0x7322099DL}, {0xF64DD7F0L, 0x7322099DL}};
            unsigned short ***l_1051 = &g_669;
            int i, j;
lbl_1018:
            for (p_63 = 3; (p_63 < 18); p_63++)
            {
                char l_926 = 0L;
                const int *l_927[5];
                int **l_929 = &l_868;
                int i;
                for (i = 0; i < 5; i++)
                    l_927[i] = &g_95;
                for (l_910 = 0; (l_910 == 21); l_910 = safe_add_func_uint8_t_u_u(l_910, 6))
                {
                    if (p_63)
                    {
                        if (l_926)
                            break;
                    }
                    else
                    {
                        (*l_920) = (*g_94);
                        return p_63;
                    }
                    l_928 = l_927[2];
                }
                (*l_929) = &g_9[5][3];
                l_930 = 0x2B261CBDL;
            }
            if ((safe_lshift_func_int16_t_s_u((*l_920), ((void*)0 == &g_147))))
            {
                unsigned char *l_982 = &g_398;
                long long l_983 = 1L;
                int **l_986 = &g_104;
                for (g_909 = 0; (g_909 == 12); g_909 = safe_add_func_uint32_t_u_u(g_909, 8))
                {
                    unsigned char l_981 = 0x1DL;
                    return l_981;
                }
                (*l_986) = ((((*l_957) != ((*l_982) = g_228)) <= (l_983 , ((safe_mod_func_uint64_t_u_u(p_63, p_63)) | (+(*l_920))))) , &l_917);
            }
            else
            {
                const unsigned l_989 = 4294967293UL;
                unsigned * const *l_996 = &g_340;
                int **l_1019 = &g_104;
                unsigned short *l_1037 = (void*)0;
                unsigned short * const * const l_1053 = &l_975[0][1];
                unsigned short * const * const *l_1052[8][2][1] = {{{(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}}};
                int l_1054[10] = {(-9L), 0x8DF93A7AL, (-9L), 0x8DF93A7AL, (-9L), 0x8DF93A7AL, (-9L), 0x8DF93A7AL, (-9L), 0x8DF93A7AL};
                int i, j, k;
                for (g_95 = 0; (g_95 > (-18)); g_95 = safe_sub_func_int16_t_s_s(g_95, 9))
                {
                    short l_998 = 0x2291L;
                    int l_1001[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1001[i] = (-8L);
                    if (((0x076E6911L < ((*l_920) , l_989)) && (safe_add_func_uint32_t_u_u(p_63, (**g_339)))))
                    {
                        short l_992[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_992[i] = 0x2231L;
                        l_992[3] = ((*l_920) = (*l_920));
                        if (l_992[3])
                            continue;
                    }
                    else
                    {
                        long long *l_995 = &g_111;
                        int **l_1002 = &g_104;
                        (*l_957) = (((((safe_rshift_func_int16_t_s_s(2L, (*g_276))) != ((*l_995) = p_63)) , g_762) > (*l_957)) != (255UL > (((l_996 == l_997) && l_998) , 0x3FL)));
                        (*l_957) = (safe_mod_func_uint16_t_u_u(((*p_61) ^ (g_227 , ((*l_957) && (l_1001[2] = 0xD3L)))), ((*l_920) = (*p_62))));
                        (*l_1002) = &g_9[5][0];
                    }
                    for (g_398 = 1; (g_398 >= 56); g_398++)
                    {
                        if (p_63)
                            break;
                        if ((*g_104))
                            break;
                        (*l_957) = (!p_63);
                    }
                    if ((*g_191))
                    {
                        unsigned short **l_1009 = &l_975[2][0];
                        unsigned long long ***l_1012 = (void*)0;
                        unsigned long long ***l_1013 = &g_311[0];
                        int l_1015 = 0x4E95FE40L;
                        g_104 = func_81(l_989);
                        (*l_920) = (l_1015 = ((safe_lshift_func_int16_t_s_u(((((safe_lshift_func_uint8_t_u_u((p_63 & l_989), 1)) , (((*p_61) , 5L) >= p_63)) > (l_1009 != &p_59)) <= (((l_1014 = l_1010) != (void*)0) , l_1015)), (*p_60))) || (*l_920)));
                    }
                    else
                    {
                        (*l_920) = (((*l_957) , 0x3AC2CF3AL) > ((**g_339) = (safe_rshift_func_uint8_t_u_s(0x47L, (*l_957)))));
                        if (g_95)
                            goto lbl_1018;
                    }
                    if (p_63)
                        continue;
                }
                (*l_1019) = l_957;
                if ((*g_104))
                {
                    return p_63;
                }
                else
                {
                    const short l_1022 = 0x938AL;
                    int *l_1046 = &g_9[1][0];
                    l_696[3][0] = (+((**l_1019) = (*g_104)));
                    (*l_1019) = func_81((*l_957));
                    if (l_668)
                        goto lbl_1018;
                    if (g_909)
                        goto lbl_1043;
                    if ((((safe_rshift_func_uint8_t_u_u(p_63, (safe_add_func_uint8_t_u_u(((p_63 , ((((((*l_920) | ((l_1042[0][0] = (~p_63)) , (*l_957))) , (*l_920)) && 0xE50F3EAABB4EA574LL) > (**l_1019)) , 4294967290UL)) <= (*l_920)), p_63)))) , (*p_60)) , 0xC9ED45E9L))
                    {
lbl_1043:
                        (*l_957) = p_63;
                        (*l_920) = (safe_add_func_int8_t_s_s(((*l_957) = p_63), ((void*)0 == &g_692)));
lbl_1047:
                        (*l_957) = (*g_104);
                    }
                    else
                    {
                        int *l_1048 = &l_974;
                        g_104 = l_1046;
                        if (p_63)
                            goto lbl_1047;
                        l_1048 = &l_917;
                        (*l_920) = (safe_sub_func_int8_t_s_s((l_1051 == (g_118[1] , l_1052[0][1][0])), p_63));
                    }
                }
                l_1055 = func_81(((*l_920) = (l_1054[0] = 9UL)));
            }
        }
        (*l_920) = (((0xFE0152B3L && ((void*)0 != (*l_694))) , (safe_add_func_int64_t_s_s((g_1058 == ((*l_1060) = (void*)0)), p_63))) & l_1062);
        for (l_1062 = 5; (l_1062 == 46); ++l_1062)
        {
            if ((*g_191))
                break;
        }
    }
    return p_63;
}







static int func_68(int * p_69, unsigned short * p_70, const char * p_71)
{
    short l_309 = 0xEC30L;
    char *l_328 = &g_153;
    int *l_416 = &g_95;
    char l_421 = 0L;
    long long l_438 = 0x93BFE93EF1349D58LL;
    unsigned short l_445 = 0UL;
    unsigned long long *l_615 = &g_227;
    unsigned long long **l_614 = &l_615;
    int l_640 = (-9L);
    unsigned short *l_649 = &l_445;
    short *l_660[1];
    long long **l_661 = &g_126;
    int **l_662 = (void*)0;
    int **l_663 = &l_416;
    int *l_664 = &l_640;
    int i;
    for (i = 0; i < 1; i++)
        l_660[i] = &g_87;
    for (g_153 = 0; (g_153 < (-15)); --g_153)
    {
        unsigned long long l_312 = 0x573710BBA61E40FFLL;
        int *l_338 = (void*)0;
        int l_343 = 0L;
        char *l_366 = &g_29;
        unsigned short *l_371 = &g_31;
        int l_372 = 5L;
        const unsigned short l_404 = 1UL;
        unsigned char * const l_410[7] = {&g_122, &g_122, &g_122, &g_122, &g_122, &g_122, &g_122};
        unsigned char * const *l_409[2];
        char *l_422[3][10] = {{(void*)0, &g_29, (void*)0, &g_29, (void*)0, &g_29, (void*)0, &g_29, (void*)0, &g_29}, {(void*)0, &g_29, (void*)0, &g_29, (void*)0, &g_29, (void*)0, &g_29, (void*)0, &g_29}, {(void*)0, &g_29, (void*)0, &g_29, (void*)0, &g_29, (void*)0, &g_29, (void*)0, &g_29}};
        int l_423 = (-10L);
        int *l_424 = &l_423;
        unsigned l_504 = 0xDE4656F0L;
        short **l_538 = (void*)0;
        long long **l_593 = (void*)0;
        short l_639 = 0x2540L;
        int *l_641 = &l_640;
        int *l_642 = &l_343;
        int i, j;
        for (i = 0; i < 2; i++)
            l_409[i] = &l_410[5];
        if ((*p_69))
        {
            int l_310 = 4L;
            int *l_378 = &l_343;
            short l_399[1][8] = {{0xEBD2L, 0x671AL, 0xEBD2L, 0x671AL, 0xEBD2L, 0x671AL, 0xEBD2L, 0x671AL}};
            int i, j;
            if ((safe_mod_func_int64_t_s_s((((safe_rshift_func_int16_t_s_u(l_309, 13)) || (((l_310 , g_311[0]) == (void*)0) >= (0xC2FCE0FFL | l_309))) && l_312), l_310)))
            {
                int **l_313 = &g_104;
                (*l_313) = func_81(l_309);
            }
            else
            {
                unsigned long long l_316 = 0x87969E0E3CD681C3LL;
                int l_317 = 7L;
                short **l_325 = &g_276;
                int *l_357 = &g_224;
                unsigned long long *l_374 = &l_316;
                unsigned long long **l_373 = &l_374;
                int *l_377 = &l_372;
                for (g_122 = 0; (g_122 <= 2); g_122 += 1)
                {
                    int **l_318 = &g_94;
                    long long *l_334[3];
                    int l_335[1][10][8] = {{{(-1L), 0x76C9A656L, 8L, 0xD2CD2D69L, 0xE33A0EA8L, (-4L), 0xE33A0EA8L, 0xD2CD2D69L}, {(-1L), 0x76C9A656L, 8L, 0xD2CD2D69L, 0xE33A0EA8L, (-4L), 0xE33A0EA8L, 0xD2CD2D69L}, {(-1L), 0x76C9A656L, 8L, 0xD2CD2D69L, 0xE33A0EA8L, (-4L), 0xE33A0EA8L, 0xD2CD2D69L}, {(-1L), 0x76C9A656L, 8L, 0xD2CD2D69L, 0xE33A0EA8L, (-4L), 0xE33A0EA8L, 0xD2CD2D69L}, {(-1L), 0x76C9A656L, 8L, 0xD2CD2D69L, 0xE33A0EA8L, (-4L), 0xE33A0EA8L, 0xD2CD2D69L}, {(-1L), 0x76C9A656L, 8L, 0xD2CD2D69L, 0xE33A0EA8L, (-4L), 0xE33A0EA8L, 0xD2CD2D69L}, {(-1L), 0x76C9A656L, 8L, 0xD2CD2D69L, 0xE33A0EA8L, (-4L), 0xE33A0EA8L, 0xD2CD2D69L}, {(-1L), 0x76C9A656L, 8L, 0xD2CD2D69L, 0xE33A0EA8L, (-4L), 0xE33A0EA8L, 0xD2CD2D69L}, {(-1L), 0x76C9A656L, 8L, 0xD2CD2D69L, 0xE33A0EA8L, (-4L), 0xE33A0EA8L, 0xD2CD2D69L}, {(-1L), 0x76C9A656L, 8L, 0xD2CD2D69L, 0xE33A0EA8L, (-4L), 0xE33A0EA8L, 0xD2CD2D69L}}};
                    char *l_336 = &g_337;
                    unsigned long long l_368 = 5UL;
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_334[i] = &g_111;
                    for (g_113 = 2; (g_113 >= 0); g_113 -= 1)
                    {
                        int **l_314 = (void*)0;
                        int **l_315 = &g_94;
                        (*l_315) = p_69;
                        l_317 = (l_316 , l_312);
                    }
                    (*l_318) = p_69;
                    if ((safe_lshift_func_uint16_t_u_s((!(((safe_mod_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(((*l_336) = (((((l_325 != ((l_312 != ((safe_sub_func_int64_t_s_s((g_228 = ((l_309 || (((g_329[4][3] = l_328) == p_71) <= (safe_lshift_func_int16_t_s_u((**l_318), g_113)))) > ((p_69 == ((safe_sub_func_uint16_t_u_u((l_310 | l_309), (**l_318))) , p_69)) == 0x459A02BF50137D2CLL))), 0x6C2306FBF4255ED3LL)) != l_312)) , l_325)) , (**g_160)) , l_335[0][3][7]) , 4294967291UL) <= l_316)), g_19[3][3])) && 3L), (*p_70))) ^ (-5L)) , 0xBE1EL)), 6)))
                    {
                        unsigned ***l_341 = &g_339;
                        int *l_342[3][5][7] = {{{&l_317, &g_9[2][3], &g_9[1][0], &l_335[0][3][7], &g_9[1][0], &g_9[2][3], &l_317}, {&l_317, &g_9[2][3], &g_9[1][0], &l_335[0][3][7], &g_9[1][0], &g_9[2][3], &l_317}, {&l_317, &g_9[2][3], &g_9[1][0], &l_335[0][3][7], &g_9[1][0], &g_9[2][3], &l_317}, {&l_317, &g_9[2][3], &g_9[1][0], &l_335[0][3][7], &g_9[1][0], &g_9[2][3], &l_317}, {&l_317, &g_9[2][3], &g_9[1][0], &l_335[0][3][7], &g_9[1][0], &g_9[2][3], &l_317}}, {{&l_317, &g_9[2][3], &g_9[1][0], &l_335[0][3][7], &g_9[1][0], &g_9[2][3], &l_317}, {&l_317, &g_9[2][3], &g_9[1][0], &l_335[0][3][7], &g_9[1][0], &g_9[2][3], &l_317}, {&l_317, &g_9[2][3], &g_9[1][0], &l_335[0][3][7], &g_9[1][0], &g_9[2][3], &l_317}, {&l_317, &g_9[2][3], &g_9[1][0], &l_335[0][3][7], &g_9[1][0], &g_9[2][3], &l_317}, {&l_317, &g_9[2][3], &g_9[1][0], &l_335[0][3][7], &g_9[1][0], &g_9[2][3], &l_317}}, {{&l_317, &g_9[2][3], &g_9[1][0], &l_335[0][3][7], &g_9[1][0], &g_9[2][3], &l_317}, {&l_317, &g_9[2][3], &g_9[1][0], &l_335[0][3][7], &g_9[1][0], &g_9[2][3], &l_317}, {&l_317, &g_9[2][3], &g_9[1][0], &l_335[0][3][7], &g_9[1][0], &g_9[2][3], &l_317}, {&l_317, &g_9[2][3], &g_9[1][0], &l_335[0][3][7], &g_9[1][0], &g_9[2][3], &l_317}, {&l_317, &g_9[2][3], &g_9[1][0], &l_335[0][3][7], &g_9[1][0], &g_9[2][3], &l_317}}};
                        int i, j, k;
                        l_338 = p_69;
                        l_343 = (l_316 || ((((*l_341) = g_339) != (void*)0) , 2L));
                        l_335[0][3][7] = ((*p_71) , l_309);
                        l_317 = ((g_31 = g_228) <= g_9[0][0]);
                    }
                    else
                    {
                        short l_354[9][1] = {{0xCB4DL}, {0xCB4DL}, {0xCB4DL}, {0xCB4DL}, {0xCB4DL}, {0xCB4DL}, {0xCB4DL}, {0xCB4DL}, {0xCB4DL}};
                        int **l_355 = (void*)0;
                        int **l_356 = (void*)0;
                        char *l_367 = (void*)0;
                        unsigned short *l_370 = &g_31;
                        unsigned short **l_369[5][3][1] = {{{(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}}};
                        int i, j, k;
                        if ((*p_69))
                            break;
                        g_95 = (safe_sub_func_int8_t_s_s((safe_add_func_uint64_t_u_u(((l_316 != (*p_69)) ^ l_316), (safe_sub_func_uint32_t_u_u(l_309, ((((safe_mod_func_int16_t_s_s(((*g_276) = ((*g_191) , (*g_276))), g_199[4])) != (-1L)) , l_310) && l_309))))), (-1L)));
                        if ((*g_104))
                            continue;
                        g_311[g_122] = ((safe_add_func_int16_t_s_s((((l_354[0][0] < 0xAE14CD8BL) || ((((*g_276) = ((l_357 = p_69) == (((((safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(g_224, ((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(((p_70 == (l_371 = func_72(l_366, func_72(l_367, &g_19[4][9], func_81((l_354[5][0] && l_354[6][0])), l_317, l_368), &g_9[2][3], l_317, g_9[2][3]))) ^ (*p_69)), (*p_71))), 6)) > l_310))), g_277[1][7][0])) , l_354[0][0]) || l_309) == l_372) , (void*)0))) && g_222[7][3]) , (*g_340))) >= l_309), g_122)) , l_373);
                    }
                }
                (*l_377) = (0xBA0F185EL > (safe_rshift_func_uint16_t_u_u((((-9L) >= l_317) != ((-1L) == l_309)), 9)));
            }
            if (((*l_378) = (*p_69)))
            {
                const unsigned char l_387[8] = {6UL, 247UL, 6UL, 247UL, 6UL, 247UL, 6UL, 247UL};
                int l_388[9][1][9] = {{{(-1L), 0x989D66A2L, 0xB1D1BEAFL, 8L, 0xEF8D0AE2L, 0L, 0xEF8D0AE2L, 8L, 0xB1D1BEAFL}}, {{(-1L), 0x989D66A2L, 0xB1D1BEAFL, 8L, 0xEF8D0AE2L, 0L, 0xEF8D0AE2L, 8L, 0xB1D1BEAFL}}, {{(-1L), 0x989D66A2L, 0xB1D1BEAFL, 8L, 0xEF8D0AE2L, 0L, 0xEF8D0AE2L, 8L, 0xB1D1BEAFL}}, {{(-1L), 0x989D66A2L, 0xB1D1BEAFL, 8L, 0xEF8D0AE2L, 0L, 0xEF8D0AE2L, 8L, 0xB1D1BEAFL}}, {{(-1L), 0x989D66A2L, 0xB1D1BEAFL, 8L, 0xEF8D0AE2L, 0L, 0xEF8D0AE2L, 8L, 0xB1D1BEAFL}}, {{(-1L), 0x989D66A2L, 0xB1D1BEAFL, 8L, 0xEF8D0AE2L, 0L, 0xEF8D0AE2L, 8L, 0xB1D1BEAFL}}, {{(-1L), 0x989D66A2L, 0xB1D1BEAFL, 8L, 0xEF8D0AE2L, 0L, 0xEF8D0AE2L, 8L, 0xB1D1BEAFL}}, {{(-1L), 0x989D66A2L, 0xB1D1BEAFL, 8L, 0xEF8D0AE2L, 0L, 0xEF8D0AE2L, 8L, 0xB1D1BEAFL}}, {{(-1L), 0x989D66A2L, 0xB1D1BEAFL, 8L, 0xEF8D0AE2L, 0L, 0xEF8D0AE2L, 8L, 0xB1D1BEAFL}}};
                int *l_402 = &l_343;
                unsigned long long *l_412 = &l_312;
                int **l_413[5] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
                int i, j, k;
                for (g_122 = 1; (g_122 < 46); ++g_122)
                {
                    unsigned char l_381 = 0x18L;
                    short *l_386 = &l_309;
                    unsigned char *l_397 = &g_398;
                    unsigned short l_407 = 0UL;
                    int **l_408 = &l_338;
                    (*l_378) = (l_381 <= ((safe_add_func_int64_t_s_s((*l_378), (safe_add_func_uint64_t_u_u((*l_378), ((((*l_378) , p_70) != l_386) <= l_387[7]))))) , ((*p_69) , (*l_378))));
                    if (((~l_388[0][0][3]) ^ ((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((((0xB1A312071DDF2FB8LL != l_381) <= ((*p_71) != (((*g_339) = (*g_339)) != ((safe_lshift_func_uint8_t_u_u(((*l_397) = ((*p_69) , (safe_lshift_func_int8_t_s_u(l_381, 2)))), 7)) , (*g_160))))) , (l_387[7] , l_399[0][3])), l_309)), l_388[2][0][8])) & 0L)))
                    {
                        int **l_400 = (void*)0;
                        int *l_401 = &l_343;
                        int **l_403 = &l_378;
                        g_104 = (l_401 = p_69);
                        (*l_378) = (*p_69);
                        (*l_403) = l_402;
                    }
                    else
                    {
                        if (l_404)
                            break;
                    }
                    (*l_408) = (((safe_rshift_func_uint8_t_u_u((*l_402), 7)) ^ (*p_71)) , (l_407 , (((*l_402) , l_309) , func_81((1UL == 0xFFE2L)))));
                }
                if ((*p_69))
                {
                    int **l_411 = &l_338;
                    l_409[1] = l_409[1];
                    (*l_411) = &g_95;
                }
                else
                {
                    l_402 = p_69;
                }
                g_191 = func_81(((*l_412) = ((*l_378) , ((*l_378) , (*l_378)))));
                if (l_309)
                    break;
            }
            else
            {
                int **l_414 = &g_104;
                (*l_414) = p_69;
            }
        }
        else
        {
            int **l_415[2];
            int i;
            for (i = 0; i < 2; i++)
                l_415[i] = &g_94;
            l_416 = p_69;
            return (*p_69);
        }
        if (((*l_424) = (((*l_416) = (safe_sub_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_s(65528UL, 5)) | (*l_416)) && l_421), (*g_276)))) == (l_372 = ((!g_87) , (&g_126 != ((((-1L) < (l_423 | (l_372 , (*g_276)))) && (**g_339)) , (void*)0)))))))
        {
            unsigned short l_427 = 0xFB1DL;
            int l_470 = 0x7A5A30E2L;
            unsigned ***l_494 = (void*)0;
            unsigned ****l_493 = &l_494;
            int l_535[10] = {0xCAD5D377L, 4L, 0xAF71681FL, 0xAF71681FL, 4L, 0xCAD5D377L, 4L, 0xAF71681FL, 0xAF71681FL, 4L};
            unsigned long long l_536[6][1][2] = {{{0xE5EA7C1E0A8F7F17LL, 0xE5EA7C1E0A8F7F17LL}}, {{0xE5EA7C1E0A8F7F17LL, 0xE5EA7C1E0A8F7F17LL}}, {{0xE5EA7C1E0A8F7F17LL, 0xE5EA7C1E0A8F7F17LL}}, {{0xE5EA7C1E0A8F7F17LL, 0xE5EA7C1E0A8F7F17LL}}, {{0xE5EA7C1E0A8F7F17LL, 0xE5EA7C1E0A8F7F17LL}}, {{0xE5EA7C1E0A8F7F17LL, 0xE5EA7C1E0A8F7F17LL}}};
            int i, j, k;
            if ((((*l_416) == (safe_sub_func_int8_t_s_s((((*g_276) = 0x1D05L) & l_427), ((safe_lshift_func_int16_t_s_u(1L, g_87)) , 0x81L)))) | (*l_424)))
            {
                unsigned long long l_444 = 0x256404C4F262596ELL;
                for (l_309 = (-12); (l_309 < 12); ++l_309)
                {
                    unsigned short l_443 = 7UL;
                    int **l_446 = &l_416;
                    (*l_446) = func_81(((safe_lshift_func_uint16_t_u_s(65532UL, (safe_mod_func_uint8_t_u_u(((*p_71) >= (((((((*l_416) = (safe_add_func_int16_t_s_s((((((*l_424) = (l_438 > ((**g_339) = ((void*)0 != &g_339)))) & ((safe_add_func_int16_t_s_s((((7L & (safe_sub_func_int64_t_s_s(l_427, 0x8A8FA942DD9A022ALL))) | l_443) , (*g_276)), 0xA64DL)) < 0x04L)) & l_444) && l_444), (-1L)))) , (*p_70)) , l_445) > g_199[4]) | 9L) | (*g_276))), 0x59L)))) , l_443));
                    return (*p_69);
                }
            }
            else
            {
                char l_447 = 0x81L;
                unsigned *l_458 = (void*)0;
                unsigned *l_459 = &g_91;
                unsigned *l_460 = &g_461;
                long long *l_484[4][2];
                int l_499 = (-4L);
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_484[i][j] = &l_438;
                }
                (*l_416) = ((((*l_460) = (((*p_71) , l_447) < (l_427 , (((safe_add_func_uint32_t_u_u(((*g_340) = l_447), ((*l_459) = (((l_427 ^ (((safe_sub_func_uint16_t_u_u((0L > ((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((((*l_416) , 0x8A4CEA6C601C56F9LL) & 1L) , 0UL), l_447)), 14)), (*p_70))) || (-3L))), (-1L))) || (*p_69)) , l_427)) != l_427) , 0x7FE7DF49L)))) , (**g_160)) | l_427)))) == 0L) & (*l_416));
                if (((&l_458 == (void*)0) >= (safe_add_func_int16_t_s_s((l_427 != (l_447 & (l_470 = ((safe_lshift_func_uint8_t_u_u(l_427, (safe_mod_func_uint16_t_u_u((*l_416), g_118[2])))) < (safe_rshift_func_int8_t_s_s((6UL & (*g_276)), 0)))))), 65532UL))))
                {
                    unsigned l_471 = 0UL;
                    unsigned long long *l_477 = &g_227;
                    unsigned long long **l_476[6][8] = {{&l_477, &l_477, &l_477, &l_477, &l_477, (void*)0, &l_477, &l_477}, {&l_477, &l_477, &l_477, &l_477, &l_477, (void*)0, &l_477, &l_477}, {&l_477, &l_477, &l_477, &l_477, &l_477, (void*)0, &l_477, &l_477}, {&l_477, &l_477, &l_477, &l_477, &l_477, (void*)0, &l_477, &l_477}, {&l_477, &l_477, &l_477, &l_477, &l_477, (void*)0, &l_477, &l_477}, {&l_477, &l_477, &l_477, &l_477, &l_477, (void*)0, &l_477, &l_477}};
                    int i, j;
                    if (l_471)
                    {
                        int **l_472 = &l_416;
                        (*l_472) = func_81(l_447);
                    }
                    else
                    {
                        int l_473 = 0x88D66BC7L;
                        short *l_478 = &g_87;
                        unsigned short *l_479 = (void*)0;
                        unsigned short *l_480 = &l_427;
                        int l_483 = 0x04E83A8EL;
                        unsigned ***l_487 = &g_339;
                        unsigned ****l_488 = &l_487;
                        l_470 = ((l_473 , l_473) <= (((((*g_276) > (safe_rshift_func_uint16_t_u_u(((~(4294967295UL && 0x2A269663L)) != (g_31 = 1UL)), ((((*l_480) = (((*l_478) = ((void*)0 == l_476[5][6])) >= (((void*)0 != &g_224) | (*p_69)))) <= (*g_276)) == l_471)))) & 255UL) > l_447) ^ g_227));
                        l_483 = (safe_rshift_func_int8_t_s_u(l_447, 0));
                        (*l_424) = ((l_471 || (l_483 = (l_484[0][0] == (*g_125)))) <= ((safe_lshift_func_int16_t_s_s(l_470, (&g_160 == ((*l_488) = l_487)))) > (p_70 == p_70)));
                    }
                    (*l_424) = (safe_lshift_func_uint8_t_u_s((l_471 , ((((safe_add_func_uint8_t_u_u((l_493 != &l_494), (*l_424))) , (safe_add_func_uint64_t_u_u(l_447, 1UL))) , l_470) != (safe_rshift_func_uint16_t_u_u((l_499 = (0xEFC5L || (g_31 = ((-8L) | g_222[0][1])))), 8)))), 4));
                    if ((*g_94))
                    {
                        int l_505 = 0x2A1CF6E4L;
                        (*l_424) = ((l_447 , ((((((~((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((l_504 = l_499), 0)), (l_505 <= (safe_add_func_uint64_t_u_u(l_505, (g_118[1] <= (((-9L) > l_427) < l_447))))))) & (safe_rshift_func_int8_t_s_u(0x21L, 2)))) >= l_470) || (*p_69)) >= (*l_416)) | l_471) | l_447)) <= (*p_71));
                    }
                    else
                    {
                        int **l_510 = (void*)0;
                        int **l_511 = (void*)0;
                        int **l_512 = (void*)0;
                        int **l_513 = &l_424;
                        (*l_513) = func_81(l_447);
                    }
                }
                else
                {
                    (*l_416) = (*p_69);
                }
            }
            if ((*g_94))
            {
                long long *l_516 = &l_438;
                int **l_517 = (void*)0;
                int **l_518 = &l_338;
                int l_533 = 0xA630C53EL;
                unsigned ****l_543 = &l_494;
                (*l_518) = ((((*l_416) , (((*p_69) , ((*l_516) = ((((*l_416) > ((*p_70) || (safe_lshift_func_uint8_t_u_s((*l_416), (g_398 & g_31))))) && l_470) || (0x0CL <= g_228)))) >= l_427)) != 3UL) , (void*)0);
                if ((*g_94))
                    break;
                for (l_427 = 27; (l_427 != 44); l_427 = safe_add_func_int8_t_s_s(l_427, 3))
                {
                    short l_534[6][6][6] = {{{0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}}, {{0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}}, {{0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}}, {{0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}}, {{0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}}, {{0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}, {0x745FL, (-1L), (-3L), 6L, 2L, (-8L)}}};
                    int l_537 = 8L;
                    short ***l_539 = &l_538;
                    int l_542 = 0x90446446L;
                    const unsigned ***l_547 = &g_160;
                    const unsigned ****l_546 = &l_547;
                    int *l_548 = &l_372;
                    int i, j, k;
                    l_535[9] = (safe_add_func_uint64_t_u_u((((l_470 = (!(safe_lshift_func_int8_t_s_s((*p_71), (safe_rshift_func_int8_t_s_s((*p_71), 2)))))) >= (*p_71)) >= ((((l_427 , (safe_lshift_func_uint16_t_u_s(((safe_mod_func_int16_t_s_s(((((safe_sub_func_int8_t_s_s((*l_416), (g_398 = (*l_416)))) , (((((((*l_424) ^ (((*l_416) != 0x080D46E1L) < (*l_416))) & 1UL) & 6L) ^ (*l_416)) < (-2L)) != l_533)) == 0xB663AE90L) , (-7L)), (-1L))) | l_427), 4))) || 0x116DL) , l_534[4][3][5]) & (*l_416))), 18446744073709551612UL));
                    for (g_398 = 0; (g_398 <= 4); g_398 += 1)
                    {
                        (*l_518) = func_81(l_535[9]);
                        l_536[0][0][1] = l_535[9];
                        (*l_518) = &g_9[1][1];
                        l_537 = l_536[5][0][1];
                    }
                    (*l_548) = (((*l_539) = ((*l_424) , l_538)) == (((safe_rshift_func_int8_t_s_s((l_542 = l_537), 7)) | (((*p_69) || (((void*)0 != l_543) ^ (!(~((-1L) | g_337))))) , (safe_lshift_func_int16_t_s_s((((*l_546) = &g_160) == (void*)0), (*l_416))))) , (void*)0));
                    if (l_470)
                        break;
                }
                p_69 = ((*l_518) = func_81((*l_416)));
            }
            else
            {
                unsigned long long l_551 = 18446744073709551608UL;
                short l_562 = (-7L);
                int *l_612 = &l_535[9];
                for (l_343 = (-5); (l_343 < (-21)); l_343 = safe_sub_func_int32_t_s_s(l_343, 9))
                {
                    char l_567 = 1L;
                    int l_569 = 0x15E5BBDCL;
                    long long **l_588 = &g_126;
                    int l_611 = 0xE0E2E31AL;
                    int **l_613 = &l_424;
                    int *l_616 = &l_535[9];
                    if ((*l_424))
                    {
                        if ((*g_94))
                            break;
                    }
                    else
                    {
                        int *l_552 = &l_535[7];
                        long long *l_565 = &g_228;
                        long long *l_566 = &g_111;
                        unsigned short *l_568 = &l_427;
                        (*l_552) = ((*p_71) > l_551);
                        l_569 = (safe_sub_func_uint32_t_u_u(0x1C9FFD4EL, (((*l_568) = ((safe_mod_func_uint8_t_u_u(0x1BL, (*p_71))) > (l_535[9] = (safe_unary_minus_func_uint32_t_u(((((*l_566) = (~((*l_565) = (safe_mod_func_int16_t_s_s((((((*g_276) = (*g_276)) && (g_31 = (safe_rshift_func_uint8_t_u_s(l_562, 3)))) && (safe_rshift_func_uint16_t_u_u((((*l_552) , 0UL) & g_95), 12))) ^ (*l_552)), l_551))))) | l_567) , (*l_552))))))) | 0x023DL)));
                        return (*l_416);
                    }
                    if ((*l_416))
                    {
                        short l_570 = 0x46A4L;
                        int **l_571[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_571[i] = (void*)0;
                        p_69 = func_81(l_570);
                        g_104 = (((l_535[9] = (safe_lshift_func_int8_t_s_u((*p_71), 5))) != ((+(safe_mod_func_uint8_t_u_u((~(((safe_add_func_uint8_t_u_u(((((*l_424) == l_567) , ((~(safe_mod_func_int8_t_s_s((*p_71), (-1L)))) & ((*g_340) ^ ((safe_mod_func_int64_t_s_s(g_222[0][1], (l_536[2][0][1] & ((*p_70) == (*l_416))))) && l_567)))) , 255UL), 0L)) && (*g_276)) != 0x75FDL)), 0xD6L))) == l_427)) , &g_9[2][3]);
                        g_191 = &g_9[2][3];
                    }
                    else
                    {
                        long long ***l_589 = (void*)0;
                        long long ***l_590 = &l_588;
                        long long **l_592 = (void*)0;
                        long long ***l_591[3][6] = {{&l_592, &l_592, &l_592, &l_592, &l_592, &l_592}, {&l_592, &l_592, &l_592, &l_592, &l_592, &l_592}, {&l_592, &l_592, &l_592, &l_592, &l_592, &l_592}};
                        int l_596[7] = {0x6E231FA7L, (-1L), 0x6E231FA7L, (-1L), 0x6E231FA7L, (-1L), 0x6E231FA7L};
                        long long * const **l_597 = &g_125;
                        int **l_600[1][10] = {{&g_104, &g_104, &g_104, &g_104, &g_104, &g_104, &g_104, &g_104, &g_104, &g_104}};
                        int i, j;
                        l_596[3] = ((safe_rshift_func_int8_t_s_u((-1L), ((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint16_t_u_u(1UL, (((l_593 = ((*l_590) = l_588)) != (((safe_rshift_func_int16_t_s_s((g_31 , ((*g_276) = l_551)), 5)) , l_596[3]) , ((*l_597) = &g_126))) && (safe_lshift_func_int16_t_s_s((*l_416), l_567))))) , l_562), l_551)) ^ 0x711F955BL))) != 0x69A8579C1D8506DALL);
                        g_94 = &g_9[2][3];
                        l_612 = func_81((l_611 = (((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(((*l_588) == (*g_125)), ((safe_sub_func_int8_t_s_s((l_569 = (*l_416)), (((l_535[1] = (*l_416)) != ((l_562 & 0L) , ((*l_416) >= 18446744073709551615UL))) && (safe_add_func_uint16_t_u_u((((((((*g_340) = (*l_416)) | (*p_69)) < l_567) | (*p_71)) && (*p_71)) < (*l_416)), l_536[0][0][1]))))) , (*l_424)))) , (*l_416)), (*l_424))) > 0xA1L) , 5UL)));
                    }
                    (*l_613) = func_81((*l_424));
                    (*l_616) = (g_91 , (l_569 = (l_614 == ((*g_276) , &l_615))));
                }
            }
        }
        else
        {
            unsigned short l_632[9] = {0xED07L, 65528UL, 0xED07L, 65528UL, 0xED07L, 65528UL, 0xED07L, 65528UL, 0xED07L};
            int l_633 = 0x1C6283ADL;
            int i;
            for (g_87 = 0; (g_87 >= 24); ++g_87)
            {
                unsigned l_626 = 0UL;
                int l_629 = (-3L);
                int *l_634 = &l_629;
                int **l_635 = &l_424;
                int **l_636 = &l_338;
            }
            if ((*p_69))
                break;
        }
        (*l_642) = (((safe_rshift_func_uint8_t_u_u((g_122 = (*l_416)), (*l_424))) , ((l_640 = (l_639 = ((*l_416) | (*p_71)))) & ((void*)0 == &p_70))) , ((*l_641) = (*l_416)));
        return (*g_104);
    }
    for (l_309 = 0; (l_309 >= 22); l_309 = safe_add_func_uint64_t_u_u(l_309, 6))
    {
        return (*g_94);
    }
    (*l_663) = (((((safe_lshift_func_int16_t_s_s(((*g_276) = ((*g_104) && 1UL)), ((8UL != ((safe_sub_func_uint8_t_u_u((((*l_649) = 65531UL) == (((*l_661) = (((l_640 = (*p_69)) <= (safe_add_func_uint32_t_u_u((*l_416), (*l_416)))) , ((g_87 = ((((safe_sub_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((*l_416), (((safe_sub_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(((l_649 != &g_19[3][3]) && g_91), (*l_416))), (*l_416))) , (*l_416)) , (*l_416)))) | (*l_416)), 1L)) > (*g_94)) , 0x587FDD525A2CE99ALL) ^ 0xD5BB174DB1698CAFLL)) , (void*)0))) == (void*)0)), 0x28L)) != (*l_416))) == (*p_71)))) >= (*l_416)) && (*l_416)) , (*l_416)) , (void*)0);
    (*l_664) = (p_69 != (void*)0);
    return (*g_191);
}







static unsigned short * func_72(char * p_73, unsigned short * p_74, int * p_75, char p_76, unsigned p_77)
{
    long long *l_110 = &g_111;
    long long *l_112 = &g_113;
    int l_114 = 0L;
    int *l_115[3];
    unsigned char l_124[7][1][1];
    unsigned short *l_129 = &g_19[3][3];
    unsigned char l_150 = 0x9FL;
    unsigned char l_151[9][10][2] = {{{0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}}, {{0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}}, {{0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}}, {{0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}}, {{0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}}, {{0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}}, {{0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}}, {{0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}}, {{0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}, {0x41L, 4UL}}};
    unsigned char *l_172 = &l_150;
    unsigned l_261[4];
    unsigned long long *l_301 = &g_227;
    unsigned long long **l_300 = &l_301;
    unsigned long long ***l_302 = &l_300;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_115[i] = &l_114;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_124[i][j][k] = 0x56L;
        }
    }
    for (i = 0; i < 4; i++)
        l_261[i] = 0xAB4C20C9L;
    for (g_31 = 0; (g_31 == 21); ++g_31)
    {
        unsigned short *l_107[10] = {&g_19[4][2], &g_31, &g_19[4][2], &g_31, &g_19[4][2], &g_31, &g_19[4][2], &g_31, &g_19[4][2], &g_31};
        int i;
        return l_107[0];
    }
    g_95 = ((g_91 | (*g_104)) || ((safe_sub_func_int16_t_s_s((p_76 | (((*g_94) , ((*l_112) = ((*l_110) = g_19[2][6]))) | l_114)), l_114)) != g_31));
    for (g_113 = 0; (g_113 <= 2); g_113 += 1)
    {
        const unsigned *l_117 = &g_118[1];
        const unsigned **l_116 = &l_117;
        unsigned *l_120 = &g_91;
        unsigned **l_119 = &l_120;
        unsigned char *l_121 = &g_122;
        int l_123 = 0x4429F1C2L;
        long long * const **l_127 = &g_125;
        unsigned char l_155 = 4UL;
        int i;
    }
    (*l_302) = l_300;
    return l_129;
}







static int * func_81(unsigned long long p_82)
{
    int *l_93[7][7] = {{&g_9[4][3], &g_9[2][3], (void*)0, &g_9[2][3], &g_9[4][3], &g_9[2][0], (void*)0}, {&g_9[4][3], &g_9[2][3], (void*)0, &g_9[2][3], &g_9[4][3], &g_9[2][0], (void*)0}, {&g_9[4][3], &g_9[2][3], (void*)0, &g_9[2][3], &g_9[4][3], &g_9[2][0], (void*)0}, {&g_9[4][3], &g_9[2][3], (void*)0, &g_9[2][3], &g_9[4][3], &g_9[2][0], (void*)0}, {&g_9[4][3], &g_9[2][3], (void*)0, &g_9[2][3], &g_9[4][3], &g_9[2][0], (void*)0}, {&g_9[4][3], &g_9[2][3], (void*)0, &g_9[2][3], &g_9[4][3], &g_9[2][0], (void*)0}, {&g_9[4][3], &g_9[2][3], (void*)0, &g_9[2][3], &g_9[4][3], &g_9[2][0], (void*)0}};
    int **l_92[8] = {&l_93[4][6], &l_93[4][6], &l_93[4][6], &l_93[4][6], &l_93[4][6], &l_93[4][6], &l_93[4][6], &l_93[4][6]};
    int i, j;
    g_94 = &g_9[2][3];
    for (g_31 = (-7); (g_31 != 23); ++g_31)
    {
        for (p_82 = 0; (p_82 >= 1); ++p_82)
        {
            int *l_100 = &g_9[2][3];
            return l_100;
        }
    }
    return &g_9[3][0];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_9[i][j], "g_9[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_19[i][j], "g_19[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_118[i], "g_118[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_199[i], "g_199[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_222[i][j], "g_222[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_277[i][j][k], "g_277[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_337, "g_337", print_hash_value);
    transparent_crc(g_398, "g_398", print_hash_value);
    transparent_crc(g_461, "g_461", print_hash_value);
    transparent_crc(g_623, "g_623", print_hash_value);
    transparent_crc(g_678, "g_678", print_hash_value);
    transparent_crc(g_762, "g_762", print_hash_value);
    transparent_crc(g_862, "g_862", print_hash_value);
    transparent_crc(g_909, "g_909", print_hash_value);
    transparent_crc(g_1075, "g_1075", print_hash_value);
    transparent_crc(g_1113, "g_1113", print_hash_value);
    transparent_crc(g_1128, "g_1128", print_hash_value);
    transparent_crc(g_1222, "g_1222", print_hash_value);
    transparent_crc(g_1316, "g_1316", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
