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
   volatile long long f0;
};


static char g_3 = 0x7DL;
static int g_74 = 0x9CDE89C6L;
static int *g_73 = &g_74;
static struct S0 g_90 = {-1L};
static struct S0 **g_116 = (void*)0;
static struct S0 g_123 = {0L};
static struct S0 *g_156 = &g_123;
static struct S0 **g_155 = &g_156;
static unsigned short g_186 = 65535UL;
static int ***g_195[2] = {(void*)0, (void*)0};
static volatile int g_202 = 0x9602BA40L;
static volatile int *g_201 = &g_202;
static struct S0 g_205 = {0L};
static struct S0 g_214 = {9L};
static int g_265 = 0xF29779F3L;
static volatile struct S0 g_300 = {-6L};
static struct S0 g_316[10][7] = {{{0x148392DC4278F18DLL}, {4L}, {0x093A6662EE07E1FELL}, {8L}, {-1L}, {0xE5995FA5FF65FF97LL}, {5L}}, {{0x148392DC4278F18DLL}, {4L}, {0x093A6662EE07E1FELL}, {8L}, {-1L}, {0xE5995FA5FF65FF97LL}, {5L}}, {{0x148392DC4278F18DLL}, {4L}, {0x093A6662EE07E1FELL}, {8L}, {-1L}, {0xE5995FA5FF65FF97LL}, {5L}}, {{0x148392DC4278F18DLL}, {4L}, {0x093A6662EE07E1FELL}, {8L}, {-1L}, {0xE5995FA5FF65FF97LL}, {5L}}, {{0x148392DC4278F18DLL}, {4L}, {0x093A6662EE07E1FELL}, {8L}, {-1L}, {0xE5995FA5FF65FF97LL}, {5L}}, {{0x148392DC4278F18DLL}, {4L}, {0x093A6662EE07E1FELL}, {8L}, {-1L}, {0xE5995FA5FF65FF97LL}, {5L}}, {{0x148392DC4278F18DLL}, {4L}, {0x093A6662EE07E1FELL}, {8L}, {-1L}, {0xE5995FA5FF65FF97LL}, {5L}}, {{0x148392DC4278F18DLL}, {4L}, {0x093A6662EE07E1FELL}, {8L}, {-1L}, {0xE5995FA5FF65FF97LL}, {5L}}, {{0x148392DC4278F18DLL}, {4L}, {0x093A6662EE07E1FELL}, {8L}, {-1L}, {0xE5995FA5FF65FF97LL}, {5L}}, {{0x148392DC4278F18DLL}, {4L}, {0x093A6662EE07E1FELL}, {8L}, {-1L}, {0xE5995FA5FF65FF97LL}, {5L}}};
static struct S0 g_340 = {0x6FB1F02209DB0E4ELL};
static struct S0 g_341[10] = {{-3L}, {-3L}, {-1L}, {-3L}, {-3L}, {-1L}, {-3L}, {-3L}, {-1L}, {-3L}};
static struct S0 g_352 = {0x8A4B93AC515AA2A8LL};
static struct S0 g_353 = {0x10D637567B2451EDLL};
static int *g_354[9][10] = {{(void*)0, (void*)0, (void*)0, &g_74, &g_265, &g_74, &g_265, &g_265, &g_74, &g_265}, {(void*)0, (void*)0, (void*)0, &g_74, &g_265, &g_74, &g_265, &g_265, &g_74, &g_265}, {(void*)0, (void*)0, (void*)0, &g_74, &g_265, &g_74, &g_265, &g_265, &g_74, &g_265}, {(void*)0, (void*)0, (void*)0, &g_74, &g_265, &g_74, &g_265, &g_265, &g_74, &g_265}, {(void*)0, (void*)0, (void*)0, &g_74, &g_265, &g_74, &g_265, &g_265, &g_74, &g_265}, {(void*)0, (void*)0, (void*)0, &g_74, &g_265, &g_74, &g_265, &g_265, &g_74, &g_265}, {(void*)0, (void*)0, (void*)0, &g_74, &g_265, &g_74, &g_265, &g_265, &g_74, &g_265}, {(void*)0, (void*)0, (void*)0, &g_74, &g_265, &g_74, &g_265, &g_265, &g_74, &g_265}, {(void*)0, (void*)0, (void*)0, &g_74, &g_265, &g_74, &g_265, &g_265, &g_74, &g_265}};
static volatile struct S0 g_365 = {0xB614F5B04E45F982LL};
static volatile struct S0 g_401 = {0L};
static volatile struct S0 g_402 = {0x435743E36C680D96LL};
static struct S0 g_436[9][6][4] = {{{{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}}, {{{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}}, {{{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}}, {{{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}}, {{{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}}, {{{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}}, {{{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}}, {{{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}}, {{{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}, {{0xF1E78B4661D7D39FLL}, {-1L}, {1L}, {0x11BF9147FA53BCFELL}}}};
static struct S0 g_437 = {0L};
static int g_460 = 0xED9F8CC0L;
static struct S0 g_467[1][10][6] = {{{{0L}, {-1L}, {0L}, {-1L}, {0L}, {-1L}}, {{0L}, {-1L}, {0L}, {-1L}, {0L}, {-1L}}, {{0L}, {-1L}, {0L}, {-1L}, {0L}, {-1L}}, {{0L}, {-1L}, {0L}, {-1L}, {0L}, {-1L}}, {{0L}, {-1L}, {0L}, {-1L}, {0L}, {-1L}}, {{0L}, {-1L}, {0L}, {-1L}, {0L}, {-1L}}, {{0L}, {-1L}, {0L}, {-1L}, {0L}, {-1L}}, {{0L}, {-1L}, {0L}, {-1L}, {0L}, {-1L}}, {{0L}, {-1L}, {0L}, {-1L}, {0L}, {-1L}}, {{0L}, {-1L}, {0L}, {-1L}, {0L}, {-1L}}}};
static volatile struct S0 g_480 = {0x209AD9629B41913DLL};
static int g_483[5] = {1L, 1L, 1L, 1L, 1L};
static struct S0 g_519 = {0xD8162950D39421FFLL};
static struct S0 g_520[2] = {{-1L}, {-1L}};
static struct S0 g_547 = {0xB50B96490838AF62LL};
static volatile struct S0 g_577 = {-3L};
static struct S0 g_591 = {0xD9825A84E5B8E9A2LL};
static struct S0 g_656 = {0xD47BA4529255CDB4LL};
static long long g_693 = (-8L);
static volatile int *g_710 = &g_202;
static struct S0 g_751 = {0x1CEAFCA03E8D2183LL};
static struct S0 g_772 = {-8L};
static unsigned char g_836 = 0x7AL;
static volatile struct S0 g_861 = {0x660E156D35A12FBCLL};
static struct S0 g_927 = {-1L};
static struct S0 g_928[3][1] = {{{-5L}}, {{-5L}}, {{-5L}}};
static struct S0 g_930 = {5L};
static volatile struct S0 g_947 = {0L};
static volatile struct S0 g_969 = {0xBDE9F0511D391D3ALL};
static volatile struct S0 g_980 = {2L};
static struct S0 g_1045 = {1L};
static int *g_1065 = &g_483[3];
static struct S0 g_1083 = {0x78D98B38C37711FALL};
static struct S0 g_1149 = {0x2BE99A14E1DE7B68LL};
static struct S0 g_1150[3][9] = {{{7L}, {1L}, {7L}, {1L}, {7L}, {1L}, {7L}, {1L}, {7L}}, {{7L}, {1L}, {7L}, {1L}, {7L}, {1L}, {7L}, {1L}, {7L}}, {{7L}, {1L}, {7L}, {1L}, {7L}, {1L}, {7L}, {1L}, {7L}}};
static volatile struct S0 g_1177[4] = {{0x03ACD51CE05D9D0ALL}, {0xF192A61B4B5CFCD3LL}, {0x03ACD51CE05D9D0ALL}, {0xF192A61B4B5CFCD3LL}};
static volatile struct S0 g_1198[1] = {{0x3BE70B17006D2F4CLL}};
static struct S0 g_1222 = {1L};
static volatile struct S0 g_1227[3][1] = {{{1L}}, {{1L}}, {{1L}}};
static struct S0 g_1228 = {3L};
static unsigned char g_1281 = 0x6AL;
static volatile struct S0 g_1286 = {1L};
static volatile struct S0 g_1319 = {0x4E74233F10B1A39FLL};
static struct S0 g_1322 = {0x017794655A02D766LL};



static unsigned long long func_1(void);
static unsigned char func_10(int p_11, unsigned p_12, unsigned p_13);
static unsigned func_14(int p_15, long long p_16, unsigned p_17, unsigned long long p_18, long long p_19);
static unsigned char func_29(int p_30, long long p_31, unsigned char p_32, unsigned long long p_33);
static int func_34(int p_35, int p_36, int p_37, int p_38, int p_39);
static unsigned func_40(unsigned short p_41, unsigned p_42);
static unsigned long long func_43(unsigned short p_44, unsigned long long p_45, unsigned char p_46, unsigned p_47);
static unsigned short func_53(long long p_54, unsigned short p_55, unsigned p_56);
static short func_57(unsigned short p_58, unsigned char p_59, unsigned p_60, unsigned long long p_61);
static short func_63(char p_64, unsigned long long p_65, short p_66, unsigned long long p_67);
static unsigned long long func_1(void)
{
    int l_2 = 0xEA6801FCL;
    unsigned l_1244 = 0xEAE8509CL;
    unsigned char l_1245[4];
    struct S0 *l_1294 = &g_928[2][0];
    int *l_1323 = &g_483[3];
    struct S0 *l_1383 = &g_1083;
    int **l_1419[10][3] = {{&g_73, &g_354[4][6], (void*)0}, {&g_73, &g_354[4][6], (void*)0}, {&g_73, &g_354[4][6], (void*)0}, {&g_73, &g_354[4][6], (void*)0}, {&g_73, &g_354[4][6], (void*)0}, {&g_73, &g_354[4][6], (void*)0}, {&g_73, &g_354[4][6], (void*)0}, {&g_73, &g_354[4][6], (void*)0}, {&g_73, &g_354[4][6], (void*)0}, {&g_73, &g_354[4][6], (void*)0}};
    int *l_1420 = &g_265;
    int i, j;
    for (i = 0; i < 4; i++)
        l_1245[i] = 0x8BL;
    if (((0xF4A8L <= (l_2 == 0xEE2FL)) & g_3))
    {
        unsigned l_20 = 0x41145714L;
        unsigned short l_1292 = 65527UL;
        unsigned l_1315 = 0x64D16306L;
        int *l_1331 = &g_74;
        unsigned l_1346 = 8UL;
        int **l_1373[5][5][2] = {{{&l_1331, (void*)0}, {&l_1331, (void*)0}, {&l_1331, (void*)0}, {&l_1331, (void*)0}, {&l_1331, (void*)0}}, {{&l_1331, (void*)0}, {&l_1331, (void*)0}, {&l_1331, (void*)0}, {&l_1331, (void*)0}, {&l_1331, (void*)0}}, {{&l_1331, (void*)0}, {&l_1331, (void*)0}, {&l_1331, (void*)0}, {&l_1331, (void*)0}, {&l_1331, (void*)0}}, {{&l_1331, (void*)0}, {&l_1331, (void*)0}, {&l_1331, (void*)0}, {&l_1331, (void*)0}, {&l_1331, (void*)0}}, {{&l_1331, (void*)0}, {&l_1331, (void*)0}, {&l_1331, (void*)0}, {&l_1331, (void*)0}, {&l_1331, (void*)0}}};
        struct S0 ***l_1411 = &g_155;
        int i, j, k;
        if ((((safe_mul_func_uint16_t_u_u(l_2, ((safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((g_3 <= (func_10((g_3 != l_2), func_14(g_3, g_3, l_20, (g_3 , l_20), l_2), g_3) <= 0x0FL)), l_20)), 4)) < 0x70288748L))) , l_1244) , l_1245[2]))
        {
            unsigned l_1257 = 4294967288UL;
            int *l_1265 = &g_74;
            int l_1268[5];
            struct S0 *l_1288 = &g_928[2][0];
            int **l_1324[1][4][7] = {{{&g_354[4][6], &l_1323, (void*)0, &l_1323, &g_354[4][6], &l_1323, (void*)0}, {&g_354[4][6], &l_1323, (void*)0, &l_1323, &g_354[4][6], &l_1323, (void*)0}, {&g_354[4][6], &l_1323, (void*)0, &l_1323, &g_354[4][6], &l_1323, (void*)0}, {&g_354[4][6], &l_1323, (void*)0, &l_1323, &g_354[4][6], &l_1323, (void*)0}}};
            int *l_1325 = (void*)0;
            int l_1326 = 0xE97E4AB5L;
            short l_1358 = 0x9358L;
            unsigned long long l_1369 = 0x65B458C2C17256D7LL;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_1268[i] = 0x90DD6473L;
            if ((safe_mul_func_int16_t_s_s((safe_unary_minus_func_int8_t_s((safe_add_func_uint64_t_u_u(0xB38EA9A95C3F0386LL, (l_20 , (safe_lshift_func_uint8_t_u_s((g_591.f0 != (safe_mod_func_int64_t_s_s((safe_rshift_func_int16_t_s_u(l_1257, l_20)), (safe_sub_func_uint64_t_u_u(g_483[1], l_2))))), g_265))))))), g_3)))
            {
                unsigned long long l_1282[2][9] = {{0x326CDF7AA06CDE9ALL, 18446744073709551608UL, 0x326CDF7AA06CDE9ALL, 18446744073709551608UL, 0x326CDF7AA06CDE9ALL, 18446744073709551608UL, 0x326CDF7AA06CDE9ALL, 18446744073709551608UL, 0x326CDF7AA06CDE9ALL}, {0x326CDF7AA06CDE9ALL, 18446744073709551608UL, 0x326CDF7AA06CDE9ALL, 18446744073709551608UL, 0x326CDF7AA06CDE9ALL, 18446744073709551608UL, 0x326CDF7AA06CDE9ALL, 18446744073709551608UL, 0x326CDF7AA06CDE9ALL}};
                int **l_1290 = &g_354[4][6];
                int ***l_1289 = &l_1290;
                unsigned short l_1291 = 0x1F65L;
                short l_1305[6] = {0xFA8AL, (-1L), 0xFA8AL, (-1L), 0xFA8AL, (-1L)};
                int i, j;
                (*g_1065) = (l_20 , l_1257);
                if ((*g_1065))
                {
                    short l_1283[5][8] = {{(-6L), 0x1046L, 0xE705L, (-4L), 0x62F1L, 0xA1B4L, 0x62F1L, (-4L)}, {(-6L), 0x1046L, 0xE705L, (-4L), 0x62F1L, 0xA1B4L, 0x62F1L, (-4L)}, {(-6L), 0x1046L, 0xE705L, (-4L), 0x62F1L, 0xA1B4L, 0x62F1L, (-4L)}, {(-6L), 0x1046L, 0xE705L, (-4L), 0x62F1L, 0xA1B4L, 0x62F1L, (-4L)}, {(-6L), 0x1046L, 0xE705L, (-4L), 0x62F1L, 0xA1B4L, 0x62F1L, (-4L)}};
                    int l_1287 = (-1L);
                    int i, j;
                    for (l_1244 = 0; (l_1244 == 12); l_1244 = safe_add_func_int64_t_s_s(l_1244, 9))
                    {
                        int *l_1262 = &g_265;
                        int **l_1263 = (void*)0;
                        int **l_1264[1][3];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_1264[i][j] = &g_354[4][6];
                        }
                        l_1265 = l_1262;
                        (*l_1262) = (((0x46L & g_980.f0) , ((safe_rshift_func_int8_t_s_s((g_836 , l_1268[4]), ((safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(((*g_1065) > (safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(0x7CCCL, (safe_mod_func_int8_t_s_s(g_591.f0, 0xDFL)))), l_1282[0][1]))), g_836)), g_74)) != l_1244))) || l_1283[2][7])) & l_1282[0][8]);
                    }
                    (*l_1290) = (((safe_sub_func_uint64_t_u_u((g_1286 , func_57(l_1287, (l_1288 == (void*)0), g_436[6][1][0].f0, (+(g_195[1] == l_1289)))), g_460)) , l_1291) , (void*)0);
                    for (l_1287 = 0; (l_1287 >= 0); l_1287 -= 1)
                    {
                        (*l_1265) = l_2;
                        return l_1292;
                    }
                }
                else
                {
                    for (g_74 = 0; (g_74 <= 9); g_74 += 1)
                    {
                        unsigned short l_1293[4][7][9] = {{{65535UL, 4UL, 3UL, 65530UL, 65526UL, 0xF8A6L, 0UL, 65535UL, 0x9F1DL}, {65535UL, 4UL, 3UL, 65530UL, 65526UL, 0xF8A6L, 0UL, 65535UL, 0x9F1DL}, {65535UL, 4UL, 3UL, 65530UL, 65526UL, 0xF8A6L, 0UL, 65535UL, 0x9F1DL}, {65535UL, 4UL, 3UL, 65530UL, 65526UL, 0xF8A6L, 0UL, 65535UL, 0x9F1DL}, {65535UL, 4UL, 3UL, 65530UL, 65526UL, 0xF8A6L, 0UL, 65535UL, 0x9F1DL}, {65535UL, 4UL, 3UL, 65530UL, 65526UL, 0xF8A6L, 0UL, 65535UL, 0x9F1DL}, {65535UL, 4UL, 3UL, 65530UL, 65526UL, 0xF8A6L, 0UL, 65535UL, 0x9F1DL}}, {{65535UL, 4UL, 3UL, 65530UL, 65526UL, 0xF8A6L, 0UL, 65535UL, 0x9F1DL}, {65535UL, 4UL, 3UL, 65530UL, 65526UL, 0xF8A6L, 0UL, 65535UL, 0x9F1DL}, {65535UL, 4UL, 3UL, 65530UL, 65526UL, 0xF8A6L, 0UL, 65535UL, 0x9F1DL}, {65535UL, 4UL, 3UL, 65530UL, 65526UL, 0xF8A6L, 0UL, 65535UL, 0x9F1DL}, {65535UL, 4UL, 3UL, 65530UL, 65526UL, 0xF8A6L, 0UL, 65535UL, 0x9F1DL}, {65535UL, 4UL, 3UL, 65530UL, 65526UL, 0xF8A6L, 0UL, 65535UL, 0x9F1DL}, {65535UL, 4UL, 3UL, 65530UL, 65526UL, 0xF8A6L, 0UL, 65535UL, 0x9F1DL}}, {{65535UL, 4UL, 3UL, 65530UL, 65526UL, 0xF8A6L, 0UL, 65535UL, 0x9F1DL}, {65535UL, 4UL, 3UL, 65530UL, 65526UL, 0xF8A6L, 0UL, 65535UL, 0x9F1DL}, {65535UL, 4UL, 3UL, 65530UL, 65526UL, 0xF8A6L, 0UL, 65535UL, 0x9F1DL}, {65535UL, 4UL, 3UL, 65530UL, 65526UL, 0xF8A6L, 0UL, 65535UL, 0x9F1DL}, {65535UL, 4UL, 3UL, 65530UL, 65526UL, 0xF8A6L, 0UL, 65535UL, 0x9F1DL}, {65535UL, 4UL, 3UL, 65530UL, 65526UL, 0xF8A6L, 0UL, 65535UL, 0x9F1DL}, {65535UL, 4UL, 3UL, 65530UL, 65526UL, 0xF8A6L, 0UL, 65535UL, 0x9F1DL}}, {{65535UL, 4UL, 3UL, 65530UL, 65526UL, 0xF8A6L, 0UL, 65535UL, 0x9F1DL}, {65535UL, 4UL, 3UL, 65530UL, 65526UL, 0xF8A6L, 0UL, 65535UL, 0x9F1DL}, {65535UL, 4UL, 3UL, 65530UL, 65526UL, 0xF8A6L, 0UL, 65535UL, 0x9F1DL}, {65535UL, 4UL, 3UL, 65530UL, 65526UL, 0xF8A6L, 0UL, 65535UL, 0x9F1DL}, {65535UL, 4UL, 3UL, 65530UL, 65526UL, 0xF8A6L, 0UL, 65535UL, 0x9F1DL}, {65535UL, 4UL, 3UL, 65530UL, 65526UL, 0xF8A6L, 0UL, 65535UL, 0x9F1DL}, {65535UL, 4UL, 3UL, 65530UL, 65526UL, 0xF8A6L, 0UL, 65535UL, 0x9F1DL}}};
                        int i, j, k;
                        return l_1293[2][1][5];
                    }
                    (*g_155) = l_1294;
                    return g_693;
                }
                (*g_201) = l_1244;
                l_2 = (safe_rshift_func_int16_t_s_s((g_656.f0 != ((safe_add_func_int16_t_s_s(l_20, (((void*)0 != (*g_155)) || g_836))) && func_57(((safe_mod_func_int32_t_s_s(((1L & (safe_mod_func_uint16_t_u_u((6L < (safe_add_func_int16_t_s_s((0xAB1A1958EA2551ABLL && (l_2 > 0x6BEEL)), g_693))), l_1305[4]))) , (-1L)), g_1281)) >= g_693), l_2, l_1244, g_1281))), l_1245[2]));
            }
            else
            {
                int *l_1309 = &g_74;
                int *l_1320[6][9][4] = {{{&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}}, {{&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}}, {{&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}}, {{&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}}, {{&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}}, {{&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}, {&g_483[3], &g_483[3], &l_2, &g_483[1]}}};
                int i, j, k;
                for (g_836 = 0; (g_836 >= 17); ++g_836)
                {
                    int **l_1308 = &g_1065;
                    (*l_1308) = &l_2;
                    (*l_1308) = l_1309;
                }
                for (g_186 = 0; (g_186 >= 45); ++g_186)
                {
                    unsigned l_1316 = 0xAF8AF508L;
                    for (g_74 = 0; (g_74 <= 3); g_74 += 1)
                    {
                        int **l_1312 = &l_1309;
                        int i;
                        (*l_1312) = &g_483[g_74];
                        if (g_483[g_74])
                            break;
                        g_483[g_74] = (safe_sub_func_int16_t_s_s(((((func_57((**l_1312), g_772.f0, (*l_1309), g_265) & g_265) && g_1083.f0) < ((g_836 > l_1315) < 0x5743L)) <= 0xA4785078L), (-1L)));
                        if (l_1316)
                            continue;
                    }
                    for (g_1281 = (-12); (g_1281 >= 1); g_1281++)
                    {
                        int **l_1321 = &g_354[4][3];
                        (*l_1265) = (*l_1309);
                        (**g_155) = g_1319;
                        (*l_1321) = l_1320[0][7][1];
                        (*l_1265) = (g_1322 , (*l_1309));
                    }
                }
            }
            l_1325 = l_1323;
            if (((((l_1326 | (safe_rshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u(0x7EL, ((0L != (+1L)) ^ ((((*l_1294) , &l_2) == l_1331) ^ ((safe_sub_func_int32_t_s_s((*l_1265), (((*l_1331) | (*l_1331)) <= (*l_1331)))) > 4294967294UL))))) != (*l_1323)), (*l_1323)))) || 0x5687F69796AE5A6FLL) > 0x2BE8L) < 65535UL))
            {
                unsigned char l_1351 = 255UL;
                (*g_1065) = ((safe_mod_func_int32_t_s_s((*l_1325), ((((g_927.f0 < (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((-1L), 9)) == 0x98E671F0L), ((safe_sub_func_uint8_t_u_u((l_1346 <= (safe_rshift_func_int16_t_s_u(0x6B7DL, func_57((*l_1323), func_57((*l_1323), (((((safe_add_func_int16_t_s_s((-5L), g_693)) != 0x9C463682F6F9F5D1LL) & (-1L)) , 0xD6DD9979L) & g_1281), (*l_1323), l_1351), g_3, l_1351)))), g_74)) & (*l_1331)))), (*l_1331))), (*l_1325)))) == (*l_1325)) == g_460) || (*l_1323)))) , (*g_1065));
            }
            else
            {
                long long l_1365 = 0x89020C44FD6BD7DBLL;
                unsigned short l_1367 = 7UL;
                for (g_3 = (-26); (g_3 != (-21)); ++g_3)
                {
                    struct S0 *l_1366[5][3] = {{&g_1228, &g_436[6][1][0], &g_1228}, {&g_1228, &g_436[6][1][0], &g_1228}, {&g_1228, &g_436[6][1][0], &g_1228}, {&g_1228, &g_436[6][1][0], &g_1228}, {&g_1228, &g_436[6][1][0], &g_1228}};
                    int l_1368 = 0xAF3AAF8AL;
                    int i, j;
                    if ((*l_1331))
                        break;
                    if ((*l_1331))
                    {
                        return g_436[6][1][0].f0;
                    }
                    else
                    {
                        unsigned long long l_1370 = 0UL;
                        int **l_1371 = (void*)0;
                        (*l_1265) = (l_1370 , (func_29((*l_1331), l_1367, (((0xD0FEB9C37D53E6CALL && ((*g_1065) , (*l_1323))) , l_1370) ^ (l_1294 != ((l_1371 == (void*)0) , l_1294))), g_480.f0) > g_1281));
                        return g_656.f0;
                    }
                }
            }
        }
        else
        {
            int **l_1372 = &g_354[4][6];
            (*l_1372) = &l_2;
            return g_467[0][2][2].f0;
        }
        l_1323 = l_1331;
        if ((*l_1331))
        {
            (*g_155) = l_1294;
            for (l_1346 = 0; l_1346 < 1; l_1346 += 1)
            {
                struct S0 tmp = {-8L};
                g_1198[l_1346] = tmp;
            }
            return (*l_1323);
        }
        else
        {
            int l_1376 = 0x0BE2E0E7L;
            unsigned char l_1391 = 1UL;
            struct S0 **l_1397[6][6][7] = {{{(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}}, {{(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}}, {{(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}}, {{(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}}, {{(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}}, {{(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}, {(void*)0, &l_1294, &g_156, &l_1294, &l_1294, (void*)0, &l_1294}}};
            int **l_1402 = &l_1331;
            int i, j, k;
            if ((((+(safe_lshift_func_uint16_t_u_u(65534UL, l_1376))) || 1L) ^ (1UL && (func_43((*l_1331), (safe_add_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u(0xB5L, 4)), (((((*g_201) , (l_1383 != ((g_3 == g_927.f0) , (*g_155)))) , 4294967294UL) && g_205.f0) , g_836))), 8L)), g_265, (*l_1323)) , l_1376))))
            {
                int l_1390 = (-1L);
                (*l_1331) = (safe_mul_func_int8_t_s_s((0xF15DL != g_1177[0].f0), g_693));
                for (g_74 = (-4); (g_74 <= 17); ++g_74)
                {
                    struct S0 ***l_1395 = (void*)0;
                    struct S0 ***l_1396[1][9][7] = {{{&g_116, &g_116, &g_116, &g_155, &g_116, &g_116, &g_116}, {&g_116, &g_116, &g_116, &g_155, &g_116, &g_116, &g_116}, {&g_116, &g_116, &g_116, &g_155, &g_116, &g_116, &g_116}, {&g_116, &g_116, &g_116, &g_155, &g_116, &g_116, &g_116}, {&g_116, &g_116, &g_116, &g_155, &g_116, &g_116, &g_116}, {&g_116, &g_116, &g_116, &g_155, &g_116, &g_116, &g_116}, {&g_116, &g_116, &g_116, &g_155, &g_116, &g_116, &g_116}, {&g_116, &g_116, &g_116, &g_155, &g_116, &g_116, &g_116}, {&g_116, &g_116, &g_116, &g_155, &g_116, &g_116, &g_116}}};
                    int i, j, k;
                    for (g_265 = 0; (g_265 <= 0); g_265 += 1)
                    {
                        int *l_1394 = (void*)0;
                        l_1394 = &l_1390;
                        if ((*l_1394))
                            break;
                    }
                    l_1397[5][3][0] = &g_156;
                    if ((*l_1323))
                    {
                        return g_467[0][2][2].f0;
                    }
                    else
                    {
                        return g_1177[0].f0;
                    }
                }
                return l_1390;
            }
            else
            {
                char l_1405 = (-8L);
                int l_1406 = (-9L);
                (*l_1331) = l_1376;
                (*g_156) = (**g_155);
                (*l_1331) = (*l_1323);
                l_1406 = (((*l_1294) , (*g_201)) ^ ((safe_mul_func_int8_t_s_s(((((((void*)0 == &l_1323) < g_1281) , (*g_1065)) & (((safe_mod_func_uint16_t_u_u(((void*)0 != l_1402), (safe_mod_func_int64_t_s_s(((**l_1402) == l_1405), (*l_1331))))) , g_483[3]) || (*l_1323))) ^ g_693), g_483[3])) <= l_1405));
            }
            (*l_1402) = (*l_1402);
            (**g_155) = (*l_1294);
            (*g_201) = ((**l_1402) , (safe_mul_func_uint8_t_u_u(g_3, (safe_mod_func_uint16_t_u_u((((g_300.f0 > g_483[1]) | g_74) | ((&g_116 != l_1411) || (safe_unary_minus_func_int64_t_s((safe_lshift_func_uint8_t_u_u((g_693 | (safe_add_func_uint16_t_u_u(((0x77L || 247UL) <= g_460), (*l_1331)))), g_483[4])))))), g_74)))));
        }
    }
    else
    {
        (*g_1065) = 0L;
    }
    (*g_1065) = (*l_1323);
    (*g_1065) = (safe_mod_func_int64_t_s_s(g_365.f0, (*l_1323)));
    l_1420 = &l_2;
    return g_1045.f0;
}







static unsigned char func_10(int p_11, unsigned p_12, unsigned p_13)
{
    int l_1132 = 0x82D375B6L;
    int **l_1142 = (void*)0;
    int ***l_1141 = &l_1142;
    int *l_1148[5] = {(void*)0, &l_1132, (void*)0, &l_1132, (void*)0};
    int *l_1153 = (void*)0;
    unsigned l_1197 = 0x7BD4C4EEL;
    int *l_1202 = &l_1132;
    char l_1216 = 0x51L;
    struct S0 *l_1221 = &g_1222;
    int i;
    if (l_1132)
    {
        struct S0 *l_1143[9] = {&g_591, &g_591, &g_316[0][0], &g_591, &g_591, &g_316[0][0], &g_591, &g_591, &g_316[0][0]};
        int **l_1146[4][3] = {{&g_354[4][3], &g_354[4][3], (void*)0}, {&g_354[4][3], &g_354[4][3], (void*)0}, {&g_354[4][3], &g_354[4][3], (void*)0}, {&g_354[4][3], &g_354[4][3], (void*)0}};
        int i, j;
        if ((safe_mul_func_int16_t_s_s((-2L), ((safe_rshift_func_int16_t_s_s((((void*)0 == l_1141) & (((l_1143[1] != ((safe_add_func_uint64_t_u_u(0x3DC6018CCD094783LL, (0UL == ((p_12 , (l_1146[1][1] == (*l_1141))) | 0x26ABC328L)))) , (void*)0)) | (-5L)) > 0xEDBB34A3D92A9209LL)), 14)) | g_467[0][2][2].f0))))
        {
            int *l_1147[2][2] = {{&g_483[3], &l_1132}, {&g_483[3], &l_1132}};
            int i, j;
            l_1148[1] = l_1147[1][0];
            (*g_156) = (**g_155);
            g_1150[1][4] = g_1149;
        }
        else
        {
            int *l_1154 = &l_1132;
            int *l_1156[6][8] = {{&l_1132, &g_483[2], &g_483[1], &g_483[1], &g_483[2], &l_1132, &g_483[2], &g_483[1]}, {&l_1132, &g_483[2], &g_483[1], &g_483[1], &g_483[2], &l_1132, &g_483[2], &g_483[1]}, {&l_1132, &g_483[2], &g_483[1], &g_483[1], &g_483[2], &l_1132, &g_483[2], &g_483[1]}, {&l_1132, &g_483[2], &g_483[1], &g_483[1], &g_483[2], &l_1132, &g_483[2], &g_483[1]}, {&l_1132, &g_483[2], &g_483[1], &g_483[1], &g_483[2], &l_1132, &g_483[2], &g_483[1]}, {&l_1132, &g_483[2], &g_483[1], &g_483[1], &g_483[2], &l_1132, &g_483[2], &g_483[1]}};
            int i, j;
            for (g_460 = 0; (g_460 > 18); g_460++)
            {
                int *l_1155 = (void*)0;
                l_1148[1] = l_1153;
                l_1153 = l_1154;
                (*g_1065) = p_13;
                l_1156[1][3] = l_1155;
            }
            for (g_836 = 20; (g_836 >= 20); g_836++)
            {
                struct S0 *l_1159 = &g_520[0];
                (*g_155) = l_1159;
            }
        }
    }
    else
    {
        unsigned long long l_1166[6][9][4] = {{{0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}}, {{0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}}, {{0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}}, {{0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}}, {{0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}}, {{0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}, {0x22DE5435696F9009LL, 0x7914DF6D421B9AAELL, 18446744073709551607UL, 18446744073709551607UL}}};
        int *l_1171 = &g_483[0];
        int **l_1172 = &g_354[6][0];
        int i, j, k;
        l_1171 = ((safe_add_func_uint64_t_u_u((p_11 <= g_693), 0x8813906203B5D9ACLL)) , l_1171);
        (*l_1172) = (void*)0;
        (*l_1172) = ((0xAE6933BCBD36EC1CLL >= ((g_947.f0 || (((safe_lshift_func_uint8_t_u_u(g_365.f0, 3)) <= (p_11 , 0UL)) || (!g_437.f0))) >= g_836)) , l_1171);
    }
    for (p_13 = 14; (p_13 == 2); p_13 = safe_sub_func_int32_t_s_s(p_13, 7))
    {
        (*g_201) = (-2L);
    }
    for (p_12 = 0; (p_12 <= 3); p_12 += 1)
    {
        long long l_1178 = 1L;
        unsigned char l_1199 = 1UL;
        int *l_1203[6][5] = {{&g_483[3], &g_74, &g_74, &g_483[3], &g_483[3]}, {&g_483[3], &g_74, &g_74, &g_483[3], &g_483[3]}, {&g_483[3], &g_74, &g_74, &g_483[3], &g_483[3]}, {&g_483[3], &g_74, &g_74, &g_483[3], &g_483[3]}, {&g_483[3], &g_74, &g_74, &g_483[3], &g_483[3]}, {&g_483[3], &g_74, &g_74, &g_483[3], &g_483[3]}};
        struct S0 ***l_1232 = &g_155;
        int i, j;
        (*g_156) = g_1177[0];
        l_1178 = (-9L);
        (*g_1065) = (((&g_155 != ((safe_lshift_func_uint16_t_u_s(((safe_mod_func_int32_t_s_s((p_13 | (l_1178 , l_1199)), p_12)) , 0x18BAL), g_123.f0)) , &g_155)) == (-8L)) != 1UL);
        if ((*g_201))
            break;
        for (g_836 = 0; (g_836 <= 3); g_836 += 1)
        {
            int *l_1200 = &g_483[1];
            int **l_1201 = &g_354[4][3];
            int *l_1204 = &g_74;
            (*l_1201) = l_1200;
            (*g_201) = (l_1202 != l_1203[5][3]);
            if ((*g_201))
                continue;
            (*l_1201) = l_1204;
            for (g_460 = 3; (g_460 >= 0); g_460 -= 1)
            {
                char l_1211 = 0xFDL;
                struct S0 **l_1235 = &g_156;
                int *l_1242[4][6][7] = {{{(void*)0, &l_1132, (void*)0, &l_1132, (void*)0, &l_1132, (void*)0}, {(void*)0, &l_1132, (void*)0, &l_1132, (void*)0, &l_1132, (void*)0}, {(void*)0, &l_1132, (void*)0, &l_1132, (void*)0, &l_1132, (void*)0}, {(void*)0, &l_1132, (void*)0, &l_1132, (void*)0, &l_1132, (void*)0}, {(void*)0, &l_1132, (void*)0, &l_1132, (void*)0, &l_1132, (void*)0}, {(void*)0, &l_1132, (void*)0, &l_1132, (void*)0, &l_1132, (void*)0}}, {{(void*)0, &l_1132, (void*)0, &l_1132, (void*)0, &l_1132, (void*)0}, {(void*)0, &l_1132, (void*)0, &l_1132, (void*)0, &l_1132, (void*)0}, {(void*)0, &l_1132, (void*)0, &l_1132, (void*)0, &l_1132, (void*)0}, {(void*)0, &l_1132, (void*)0, &l_1132, (void*)0, &l_1132, (void*)0}, {(void*)0, &l_1132, (void*)0, &l_1132, (void*)0, &l_1132, (void*)0}, {(void*)0, &l_1132, (void*)0, &l_1132, (void*)0, &l_1132, (void*)0}}, {{(void*)0, &l_1132, (void*)0, &l_1132, (void*)0, &l_1132, (void*)0}, {(void*)0, &l_1132, (void*)0, &l_1132, (void*)0, &l_1132, (void*)0}, {(void*)0, &l_1132, (void*)0, &l_1132, (void*)0, &l_1132, (void*)0}, {(void*)0, &l_1132, (void*)0, &l_1132, (void*)0, &l_1132, (void*)0}, {(void*)0, &l_1132, (void*)0, &l_1132, (void*)0, &l_1132, (void*)0}, {(void*)0, &l_1132, (void*)0, &l_1132, (void*)0, &l_1132, (void*)0}}, {{(void*)0, &l_1132, (void*)0, &l_1132, (void*)0, &l_1132, (void*)0}, {(void*)0, &l_1132, (void*)0, &l_1132, (void*)0, &l_1132, (void*)0}, {(void*)0, &l_1132, (void*)0, &l_1132, (void*)0, &l_1132, (void*)0}, {(void*)0, &l_1132, (void*)0, &l_1132, (void*)0, &l_1132, (void*)0}, {(void*)0, &l_1132, (void*)0, &l_1132, (void*)0, &l_1132, (void*)0}, {(void*)0, &l_1132, (void*)0, &l_1132, (void*)0, &l_1132, (void*)0}}};
                int *l_1243[9][9] = {{&l_1132, (void*)0, (void*)0, &g_265, (void*)0, (void*)0, &l_1132, &g_74, &g_483[3]}, {&l_1132, (void*)0, (void*)0, &g_265, (void*)0, (void*)0, &l_1132, &g_74, &g_483[3]}, {&l_1132, (void*)0, (void*)0, &g_265, (void*)0, (void*)0, &l_1132, &g_74, &g_483[3]}, {&l_1132, (void*)0, (void*)0, &g_265, (void*)0, (void*)0, &l_1132, &g_74, &g_483[3]}, {&l_1132, (void*)0, (void*)0, &g_265, (void*)0, (void*)0, &l_1132, &g_74, &g_483[3]}, {&l_1132, (void*)0, (void*)0, &g_265, (void*)0, (void*)0, &l_1132, &g_74, &g_483[3]}, {&l_1132, (void*)0, (void*)0, &g_265, (void*)0, (void*)0, &l_1132, &g_74, &g_483[3]}, {&l_1132, (void*)0, (void*)0, &g_265, (void*)0, (void*)0, &l_1132, &g_74, &g_483[3]}, {&l_1132, (void*)0, (void*)0, &g_265, (void*)0, (void*)0, &l_1132, &g_74, &g_483[3]}};
                int i, j, k;
                if ((p_13 , l_1211))
                {
                    unsigned char l_1226 = 0UL;
                    if ((0xED833D5F3E1DBAE0LL == p_12))
                    {
                        int l_1225[8] = {1L, 0x749BEBE8L, 1L, 0x749BEBE8L, 1L, 0x749BEBE8L, 1L, 0x749BEBE8L};
                        int i;
                        (*g_201) = (p_13 != (p_11 < (g_341[1].f0 || p_13)));
                    }
                    else
                    {
                        return g_520[1].f0;
                    }
                }
                else
                {
                    unsigned long long l_1229 = 0x40DC2861CDEF400DLL;
                    for (g_577.f0 = 0; g_577.f0 < 3; g_577.f0 += 1)
                    {
                        for (g_365.f0 = 0; g_365.f0 < 9; g_365.f0 += 1)
                        {
                            struct S0 tmp = {1L};
                            g_1150[g_577.f0][g_365.f0] = tmp;
                        }
                    }
                    for (l_1216 = 0; (l_1216 <= 3); l_1216 += 1)
                    {
                        int i, j, k;
                        g_436[g_460][(g_836 + 2)][g_460] = g_1227[1][0];
                        g_436[(g_836 + 2)][(p_12 + 2)][g_460] = g_1228;
                    }
                    l_1229 = p_11;
                    if ((safe_lshift_func_uint8_t_u_s((l_1232 == ((**g_155) , l_1232)), (safe_sub_func_uint8_t_u_u((g_483[3] , (l_1235 != (void*)0)), (p_13 , (p_11 > ((safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s(l_1229, l_1211)), (-1L))), l_1229)) != g_483[2]))))))))
                    {
                        (*l_1201) = l_1242[2][3][1];
                    }
                    else
                    {
                        (*l_1201) = (g_352.f0 , l_1243[7][1]);
                    }
                }
            }
        }
    }
    return g_401.f0;
}







static unsigned func_14(int p_15, long long p_16, unsigned p_17, unsigned long long p_18, long long p_19)
{
    unsigned l_48 = 1UL;
    unsigned l_664 = 1UL;
    struct S0 ***l_1025 = &g_116;
    int **l_1070[7];
    int ***l_1069 = &l_1070[2];
    struct S0 **l_1108[1];
    int *l_1121 = &g_483[4];
    int i;
    for (i = 0; i < 7; i++)
        l_1070[i] = &g_73;
    for (i = 0; i < 1; i++)
        l_1108[i] = (void*)0;
    p_15 = (safe_sub_func_uint8_t_u_u((+(safe_sub_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(((g_3 == (safe_lshift_func_uint8_t_u_s(255UL, 3))) < func_29((g_3 <= ((func_34(p_17, ((func_40((((func_43((l_48 != (safe_add_func_uint32_t_u_u((p_18 && g_3), (func_53(l_48, g_3, g_3) >= 0L)))), l_48, l_48, p_15) > g_265) && (-1L)) >= 0x7B7DF2C2L), p_17) != l_664) & 0x4A298A49L), l_664, p_19, p_16) , g_772.f0) ^ g_3)), g_836, g_836, l_48)), l_48)), 18446744073709551612UL))), p_15));
    if ((p_16 <= (((safe_lshift_func_uint8_t_u_u(l_664, (p_17 > (safe_mod_func_int8_t_s_s((safe_add_func_int64_t_s_s(g_547.f0, (p_19 | p_16))), func_57((!(0x1993ECE0L >= ((l_664 == (!g_186)) , l_664))), p_17, l_664, g_483[3])))))) || g_316[0][2].f0) , p_17)))
    {
        unsigned l_1012 = 0x2A614992L;
        int *l_1015 = &g_74;
        for (g_836 = (-11); (g_836 < 17); g_836++)
        {
            unsigned l_1003 = 0xCD137219L;
            int *l_1019 = &g_483[1];
            struct S0 ***l_1024 = &g_116;
            unsigned l_1043 = 0xC0D19A71L;
            unsigned long long l_1092 = 4UL;
            if ((safe_mul_func_uint8_t_u_u(255UL, p_15)))
            {
                int **l_1006[4][8] = {{(void*)0, &g_73, &g_354[7][0], &g_73, (void*)0, &g_354[4][9], (void*)0, &g_73}, {(void*)0, &g_73, &g_354[7][0], &g_73, (void*)0, &g_354[4][9], (void*)0, &g_73}, {(void*)0, &g_73, &g_354[7][0], &g_73, (void*)0, &g_354[4][9], (void*)0, &g_73}, {(void*)0, &g_73, &g_354[7][0], &g_73, (void*)0, &g_354[4][9], (void*)0, &g_73}};
                int ***l_1005 = &l_1006[3][4];
                int i, j;
                for (p_18 = 12; (p_18 >= 1); p_18--)
                {
                    unsigned l_1013 = 4294967295UL;
                    int **l_1016 = &g_354[0][2];
                    int *l_1026 = &g_483[3];
                    if (p_15)
                    {
                        int **l_1004 = &g_354[4][6];
                        if (l_1003)
                            break;
                        (*g_201) = 0x153DC5BFL;
                        (*l_1004) = &p_15;
                    }
                    else
                    {
                        unsigned long long l_1007[4] = {0UL, 1UL, 0UL, 1UL};
                        int i;
                        (*g_201) = (l_1005 != (l_1007[3] , (void*)0));
                    }
                    if (p_16)
                    {
                        int *l_1014 = &g_483[3];
                        l_1015 = l_1014;
                        (*l_1005) = l_1016;
                    }
                    else
                    {
                        int *l_1031 = &g_265;
                        (*l_1019) = (safe_mod_func_int8_t_s_s(((l_1019 != (void*)0) && ((safe_mod_func_int32_t_s_s(((&p_15 != ((g_656.f0 >= (l_1024 == l_1025)) , l_1026)) == (safe_mul_func_int16_t_s_s(((g_483[4] , &l_1019) == (void*)0), g_836))), g_483[2])) >= p_15)), g_74));
                        (*g_201) = ((~(safe_sub_func_int8_t_s_s(((g_3 , &l_1015) != (p_17 , (*l_1005))), ((&l_1015 == (void*)0) , (p_18 , (&p_15 != l_1031)))))) ^ 0xD01FBA144F871AB1LL);
                    }
                    return p_16;
                }
            }
            else
            {
                short l_1038[6] = {(-6L), 0x4772L, (-6L), 0x4772L, (-6L), 0x4772L};
                int **l_1044 = &g_354[4][1];
                int i;
                (*l_1044) = ((safe_mod_func_int64_t_s_s(((safe_mod_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((p_18 <= l_1038[2]) , (safe_mul_func_uint8_t_u_u((l_1038[2] || p_19), l_1038[2]))), (g_772.f0 || l_1043))) , (-1L)), p_18)) <= 5L), (*l_1015))) , (void*)0);
                (**g_155) = g_1045;
            }
            for (g_186 = (-19); (g_186 >= 21); g_186++)
            {
                unsigned short l_1058 = 65527UL;
                int *l_1067[2][5] = {{(void*)0, &g_265, (void*)0, &g_265, (void*)0}, {(void*)0, &g_265, (void*)0, &g_265, (void*)0}};
                struct S0 **l_1082 = (void*)0;
                int i, j;
                if (p_18)
                    break;
                if ((p_17 >= l_664))
                {
                    int *l_1063[4][9] = {{&g_265, &g_265, &g_265, &g_265, &g_265, &g_265, &g_265, &g_265, &g_265}, {&g_265, &g_265, &g_265, &g_265, &g_265, &g_265, &g_265, &g_265, &g_265}, {&g_265, &g_265, &g_265, &g_265, &g_265, &g_265, &g_265, &g_265, &g_265}, {&g_265, &g_265, &g_265, &g_265, &g_265, &g_265, &g_265, &g_265, &g_265}};
                    int *l_1066 = &g_265;
                    int i, j;
                    if ((p_19 < (safe_sub_func_int64_t_s_s(g_577.f0, (2UL && ((safe_rshift_func_uint8_t_u_s((((*l_1015) , 0xF92B8BBFL) , (*l_1015)), ((p_18 , (g_265 == (0xFD215880L || g_186))) | g_3))) ^ g_186))))))
                    {
                        int **l_1064[2][3][3] = {{{&l_1019, &l_1019, &l_1063[1][1]}, {&l_1019, &l_1019, &l_1063[1][1]}, {&l_1019, &l_1019, &l_1063[1][1]}}, {{&l_1019, &l_1019, &l_1063[1][1]}, {&l_1019, &l_1019, &l_1063[1][1]}, {&l_1019, &l_1019, &l_1063[1][1]}}};
                        int i, j, k;
                        g_1065 = l_1063[1][1];
                        l_1066 = &p_15;
                        l_1067[1][4] = l_1067[1][4];
                        if (p_15)
                            continue;
                    }
                    else
                    {
                        int **l_1068 = &l_1067[1][4];
                        struct S0 ***l_1081 = &g_155;
                        (*l_1068) = &p_15;
                        (*l_1068) = l_1063[2][7];
                        p_15 = ((void*)0 != l_1069);
                        (*l_1066) = (safe_add_func_int32_t_s_s(0x69BD6E9AL, (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((&p_15 == (*l_1068)), 7)), ((safe_lshift_func_uint16_t_u_s(p_16, (((safe_add_func_int8_t_s_s(p_19, 255UL)) | 0x86147911L) && 0x36D2L))) & 0x10L)))));
                    }
                    g_1083 = (*g_156);
                }
                else
                {
                    long long l_1091 = 0L;
                    char l_1099 = 2L;
                    (*l_1019) = (safe_sub_func_int64_t_s_s((((g_519.f0 == ((((safe_mod_func_int16_t_s_s(l_1091, g_483[3])) & 2L) == g_265) == p_17)) && g_772.f0) , p_17), g_483[3]));
                    if ((safe_mul_func_uint8_t_u_u(g_861.f0, (((((*l_1015) == l_1091) , (*l_1015)) , p_19) <= p_19))))
                    {
                        long long l_1119[4][6] = {{(-7L), 0xD72B50D49AA82C1BLL, (-6L), 0xD72B50D49AA82C1BLL, (-7L), 0x0354A400D53C04A4LL}, {(-7L), 0xD72B50D49AA82C1BLL, (-6L), 0xD72B50D49AA82C1BLL, (-7L), 0x0354A400D53C04A4LL}, {(-7L), 0xD72B50D49AA82C1BLL, (-6L), 0xD72B50D49AA82C1BLL, (-7L), 0x0354A400D53C04A4LL}, {(-7L), 0xD72B50D49AA82C1BLL, (-6L), 0xD72B50D49AA82C1BLL, (-7L), 0x0354A400D53C04A4LL}};
                        int i, j;
                        (*l_1015) = (p_16 ^ (((!((*l_1015) , g_340.f0)) , (safe_add_func_int16_t_s_s((g_401.f0 || (l_1108[0] == ((safe_sub_func_uint16_t_u_u((0x50L == (safe_add_func_uint64_t_u_u(((((~g_340.f0) >= (safe_add_func_int32_t_s_s((((safe_mul_func_int16_t_s_s(g_836, (safe_lshift_func_int8_t_s_s(func_57(p_17, g_483[0], g_693, l_1119[0][5]), 5)))) != (*g_1065)) , (*l_1015)), 2L))) ^ p_18) | p_16), 0x41E2F83BCBB8902BLL))), g_74)) , (void*)0))), (*l_1015)))) <= p_18));
                        (**l_1069) = &p_15;
                    }
                    else
                    {
                        return g_591.f0;
                    }
                }
            }
        }
        (*g_201) = (*g_1065);
    }
    else
    {
        int *l_1120 = &g_483[3];
        l_1120 = l_1120;
        (**l_1069) = l_1121;
        for (g_693 = (-24); (g_693 != (-16)); g_693 = safe_add_func_uint8_t_u_u(g_693, 5))
        {
            return p_17;
        }
        for (l_664 = 0; (l_664 <= 3); l_664 += 1)
        {
            return p_17;
        }
    }
    return (*l_1121);
}







static unsigned char func_29(int p_30, long long p_31, unsigned char p_32, unsigned long long p_33)
{
    int *l_943 = &g_483[1];
    struct S0 **l_944 = (void*)0;
    short l_987[9];
    int l_988 = (-1L);
    int i;
    for (i = 0; i < 9; i++)
        l_987[i] = 9L;
    l_943 = l_943;
    l_944 = l_944;
    for (g_74 = (-14); (g_74 != (-27)); g_74--)
    {
        int *l_948[6];
        int **l_949 = (void*)0;
        int **l_950[6][7] = {{(void*)0, &l_948[4], (void*)0, &l_948[4], (void*)0, &l_948[4], (void*)0}, {(void*)0, &l_948[4], (void*)0, &l_948[4], (void*)0, &l_948[4], (void*)0}, {(void*)0, &l_948[4], (void*)0, &l_948[4], (void*)0, &l_948[4], (void*)0}, {(void*)0, &l_948[4], (void*)0, &l_948[4], (void*)0, &l_948[4], (void*)0}, {(void*)0, &l_948[4], (void*)0, &l_948[4], (void*)0, &l_948[4], (void*)0}, {(void*)0, &l_948[4], (void*)0, &l_948[4], (void*)0, &l_948[4], (void*)0}};
        int i, j;
        for (i = 0; i < 6; i++)
            l_948[i] = &g_74;
        (**g_155) = g_947;
        l_943 = l_948[4];
        if (((((*l_943) <= 1UL) , ((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u((((*l_943) || g_467[0][2][2].f0) != (((p_30 >= func_57(((safe_add_func_uint32_t_u_u(0xD6209545L, ((-1L) != (g_483[3] ^ (+(safe_lshift_func_uint16_t_u_s(p_32, 0))))))) <= (*l_943)), g_186, g_483[4], g_3)) & g_460) != 0x057EL)), 0)), g_836)) ^ p_31)) , 1L))
        {
            int **l_965 = &g_354[0][9];
            for (g_265 = (-27); (g_265 > 10); g_265 = safe_add_func_uint16_t_u_u(g_265, 8))
            {
                unsigned l_970 = 1UL;
                int *l_975 = &g_483[3];
                for (g_460 = 14; (g_460 <= 15); g_460 = safe_add_func_int8_t_s_s(g_460, 7))
                {
                    for (g_353.f0 = 0; g_353.f0 < 1; g_353.f0 += 1)
                    {
                        for (g_402.f0 = 0; g_402.f0 < 10; g_402.f0 += 1)
                        {
                            for (g_861.f0 = 0; g_861.f0 < 6; g_861.f0 += 1)
                            {
                                struct S0 tmp = {0xF71961410BA48244LL};
                                g_467[g_353.f0][g_402.f0][g_861.f0] = tmp;
                            }
                        }
                    }
                    for (p_30 = 0; (p_30 >= (-7)); p_30 = safe_sub_func_uint8_t_u_u(p_30, 2))
                    {
                        int ***l_966 = &l_965;
                        (*l_966) = l_965;
                        (*g_156) = (*g_156);
                        return p_30;
                    }
                }
                for (p_32 = 0; (p_32 == 35); p_32 = safe_add_func_uint8_t_u_u(p_32, 6))
                {
                    (**g_155) = g_969;
                    (*g_201) = l_970;
                    return g_969.f0;
                }
                for (g_836 = 0; (g_836 != 53); g_836++)
                {
                    for (p_30 = 1; (p_30 >= 0); p_30 -= 1)
                    {
                        int i;
                        (*g_155) = &g_520[p_30];
                        (*l_965) = l_943;
                    }
                }
                if ((g_74 & g_693))
                {
                    (*g_201) = 0L;
                }
                else
                {
                    short l_986 = 0xAEB8L;
                    for (g_693 = (-10); (g_693 == (-11)); g_693--)
                    {
                        return g_772.f0;
                    }
                    (*l_965) = l_975;
                    l_943 = (void*)0;
                    for (g_693 = 0; (g_693 == (-11)); g_693--)
                    {
                        unsigned char l_985 = 255UL;
                        (*l_965) = l_975;
                        l_987[1] = (safe_add_func_int8_t_s_s((g_980 , ((safe_lshift_func_uint8_t_u_s((p_33 != (*g_201)), 0)) <= p_30)), (safe_mul_func_int16_t_s_s((((l_985 && (p_31 , 0x0AL)) >= 0x70L) || (-1L)), (-1L)))));
                    }
                }
            }
            if (p_32)
                continue;
            l_988 = p_33;
        }
        else
        {
            l_943 = l_943;
            if ((*l_943))
                continue;
        }
        if (p_32)
            break;
    }
    return g_520[1].f0;
}







static int func_34(int p_35, int p_36, int p_37, int p_38, int p_39)
{
    long long l_665 = 1L;
    int *l_677 = &g_483[2];
    int ***l_705 = (void*)0;
    struct S0 **l_706 = &g_156;
    short l_707 = 4L;
    long long l_792 = (-1L);
    int l_811 = 0L;
    unsigned short l_899 = 0xEF99L;
    struct S0 ***l_903 = &g_155;
    unsigned l_917 = 1UL;
    if ((g_214.f0 > l_665))
    {
        char l_669 = 0xB7L;
        long long l_672 = 0xCD8A4DA5EAA4DE77LL;
        int **l_732 = (void*)0;
        int l_739 = 0x35983D57L;
        int *l_747[3];
        int **l_749 = &l_747[1];
        int i;
        for (i = 0; i < 3; i++)
            l_747[i] = (void*)0;
        if (p_39)
        {
            int **l_690 = &g_73;
            for (l_665 = 3; (l_665 <= 9); l_665 += 1)
            {
                int *l_676[10][5] = {{(void*)0, (void*)0, &g_74, &g_74, &g_483[3]}, {(void*)0, (void*)0, &g_74, &g_74, &g_483[3]}, {(void*)0, (void*)0, &g_74, &g_74, &g_483[3]}, {(void*)0, (void*)0, &g_74, &g_74, &g_483[3]}, {(void*)0, (void*)0, &g_74, &g_74, &g_483[3]}, {(void*)0, (void*)0, &g_74, &g_74, &g_483[3]}, {(void*)0, (void*)0, &g_74, &g_74, &g_483[3]}, {(void*)0, (void*)0, &g_74, &g_74, &g_483[3]}, {(void*)0, (void*)0, &g_74, &g_74, &g_483[3]}, {(void*)0, (void*)0, &g_74, &g_74, &g_483[3]}};
                int i, j;
                if (((((((g_341[l_665] , ((safe_unary_minus_func_int16_t_s((g_341[l_665].f0 , g_74))) == (safe_sub_func_int8_t_s_s((l_669 != (g_74 & (0x75L & ((safe_add_func_uint64_t_u_u((p_39 <= ((p_39 > ((l_672 || g_3) | l_669)) == 0x1B14L)), l_672)) | g_74)))), g_3)))) , g_214.f0) , &g_341[l_665]) == (void*)0) , g_341[l_665].f0) > g_3))
                {
                    for (p_36 = 0; (p_36 <= 9); p_36 += 1)
                    {
                        int **l_673 = (void*)0;
                        int **l_674 = &g_73;
                        (*l_674) = &p_39;
                    }
                }
                else
                {
                    int **l_675[1][9];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 9; j++)
                            l_675[i][j] = (void*)0;
                    }
                    l_676[8][0] = &p_35;
                    l_677 = &p_39;
                }
                p_39 = ((safe_sub_func_uint16_t_u_u(p_38, 2L)) == (safe_add_func_int16_t_s_s(((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((g_265 != p_37), g_693)), p_38)) > g_186), g_547.f0)));
            }
        }
        else
        {
            int **l_697[5] = {(void*)0, &g_354[0][0], (void*)0, &g_354[0][0], (void*)0};
            char l_708 = 0xCCL;
            unsigned short l_728 = 65535UL;
            long long l_729[9];
            int **l_730[10][2];
            int i, j;
            for (i = 0; i < 9; i++)
                l_729[i] = 0x5D18FF9D0FBC9B85LL;
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 2; j++)
                    l_730[i][j] = &g_73;
            }
            for (l_669 = (-24); (l_669 == 2); l_669 = safe_add_func_int64_t_s_s(l_669, 1))
            {
                int **l_696 = (void*)0;
                if (((l_696 != l_697[3]) , (*l_677)))
                {
                    char l_698 = 0xD2L;
                    (**g_155) = (*g_156);
                    if ((*g_201))
                        break;
                    p_39 = ((p_38 , g_123.f0) || ((!((l_698 >= func_57((((g_401.f0 != ((((((p_39 | ((safe_mul_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(1UL, ((((l_705 != (void*)0) ^ ((((void*)0 == l_706) <= g_3) | p_37)) > 250UL) && 0x25L))) >= 0x61CBL), 0x2EL)) < l_707), l_669)) & 0xF4C20A12471D868CLL)) != (*l_677)) > l_708) && l_669) >= g_74) != 6UL)) ^ p_38) , 7UL), g_74, g_483[3], p_39)) >= g_186)) , p_38));
                }
                else
                {
                    int *l_709 = &g_74;
                    char l_715 = (-1L);
                    int ***l_731[7] = {&l_697[1], &l_697[0], &l_697[1], &l_697[0], &l_697[1], &l_697[0], &l_697[1]};
                    int i;
                    if (l_672)
                    {
                        l_709 = &p_35;
                        g_710 = (void*)0;
                        if ((*l_709))
                            break;
                        (*l_709) = 1L;
                    }
                    else
                    {
                        if (p_35)
                            break;
                        (*g_201) = (safe_mod_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(l_715, (((safe_rshift_func_int8_t_s_u(p_39, 4)) , (safe_mul_func_uint8_t_u_u(func_57(p_35, (safe_sub_func_uint16_t_u_u(func_57((safe_sub_func_int8_t_s_s(func_40((safe_rshift_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u((p_39 && p_37), l_672)) && l_672), p_38)), g_436[6][1][0].f0), 0x87L)), p_38, p_37, l_728), p_39)), p_35, g_693), l_729[1]))) == 0xA78AFF0B46BC5772LL))), p_38));
                        if (p_35)
                            break;
                    }
                    (*g_201) = p_36;
                    l_732 = l_730[0][1];
                    if (p_39)
                        continue;
                }
                l_677 = &p_35;
                if (p_36)
                    break;
                for (l_708 = 0; (l_708 == (-29)); l_708 = safe_sub_func_uint16_t_u_u(l_708, 1))
                {
                    if ((*g_201))
                        break;
                    p_38 = p_39;
                }
            }
        }
        if (p_39)
        {
            for (g_693 = 8; (g_693 != 15); ++g_693)
            {
                return (*g_201);
            }
        }
        else
        {
            int *l_744 = &g_74;
            int **l_748 = &l_677;
            for (p_38 = (-18); (p_38 != (-6)); p_38 = safe_add_func_int8_t_s_s(p_38, 2))
            {
                int *l_745[3][1][1];
                int **l_746 = &g_354[5][5];
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_745[i][j][k] = &g_265;
                    }
                }
                (*g_201) = (-6L);
                l_745[1][0][0] = l_744;
                (*l_746) = &p_35;
                if ((*l_744))
                    break;
            }
            (*l_748) = l_747[1];
            (*l_744) = 0x56CE2ECDL;
            (*l_748) = &p_39;
        }
        (*l_749) = &p_39;
    }
    else
    {
        int **l_750 = &g_354[4][6];
        (*l_750) = &p_39;
        (*l_750) = &p_35;
        g_751 = (*g_156);
    }
    for (g_693 = 6; (g_693 >= 0); g_693 -= 1)
    {
        unsigned l_787 = 0xE05594B7L;
        int *l_797 = &g_483[4];
        unsigned l_810 = 0UL;
        struct S0 **l_883[10][10][2] = {{{&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}}, {{&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}}, {{&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}}, {{&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}}, {{&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}}, {{&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}}, {{&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}}, {{&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}}, {{&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}}, {{&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}, {&g_156, &g_156}}};
        int i, j, k;
        for (l_707 = 6; (l_707 >= 1); l_707 -= 1)
        {
            int l_753 = 0xA4F63DE7L;
            int *l_774 = (void*)0;
            struct S0 *l_799 = &g_656;
            if (p_38)
            {
                int **l_752 = &g_354[4][6];
                (*l_752) = &p_35;
            }
            else
            {
                return l_753;
            }
            if (p_38)
            {
                if (p_37)
                    break;
                if (p_37)
                    continue;
                for (g_265 = 2; (g_265 <= 6); g_265 += 1)
                {
                    (*l_677) = (safe_mul_func_uint8_t_u_u(g_520[1].f0, (safe_lshift_func_uint8_t_u_u((&p_39 == &p_38), 1))));
                    for (p_39 = 6; (p_39 >= 0); p_39 -= 1)
                    {
                        int i, j;
                        g_316[p_39][g_693] = g_316[(p_39 + 3)][g_265];
                        if (p_36)
                            continue;
                        (*g_201) = l_753;
                    }
                }
            }
            else
            {
                int *l_758[8][5] = {{&g_483[1], &g_483[3], (void*)0, &g_483[1], &g_483[3]}, {&g_483[1], &g_483[3], (void*)0, &g_483[1], &g_483[3]}, {&g_483[1], &g_483[3], (void*)0, &g_483[1], &g_483[3]}, {&g_483[1], &g_483[3], (void*)0, &g_483[1], &g_483[3]}, {&g_483[1], &g_483[3], (void*)0, &g_483[1], &g_483[3]}, {&g_483[1], &g_483[3], (void*)0, &g_483[1], &g_483[3]}, {&g_483[1], &g_483[3], (void*)0, &g_483[1], &g_483[3]}, {&g_483[1], &g_483[3], (void*)0, &g_483[1], &g_483[3]}};
                struct S0 *l_771[7];
                short l_773 = (-6L);
                int i, j;
                for (i = 0; i < 7; i++)
                    l_771[i] = &g_772;
                l_758[6][3] = (l_753 , &p_35);
                if (p_35)
                    continue;
                for (p_35 = 6; (p_35 >= 0); p_35 -= 1)
                {
                    int *l_760[2];
                    int **l_777 = (void*)0;
                    int **l_778 = &l_760[0];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_760[i] = &g_483[3];
                    for (g_186 = 0; (g_186 <= 0); g_186 += 1)
                    {
                        int *l_759 = &g_483[1];
                        int i;
                        l_759 = (void*)0;
                        g_483[g_186] = 0xC9A978D0L;
                    }
                    l_760[1] = l_758[6][3];
                    if ((safe_rshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(l_753, (p_36 , ((safe_rshift_func_int16_t_s_u(((g_202 | (65535UL | (p_39 | (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(l_773, 1)), 4))))) ^ (*l_677)), g_265)) , g_205.f0)))), p_36)))
                    {
                        int *l_775 = &g_483[4];
                        l_774 = &p_39;
                        l_760[1] = l_775;
                    }
                    else
                    {
                        int l_776 = 0xFA00095EL;
                        (*g_201) = (+l_776);
                    }
                    (*l_778) = l_758[0][3];
                }
            }
            if (((safe_lshift_func_int16_t_s_s((safe_add_func_int16_t_s_s((0xB525F1A80AB25BBFLL != (safe_lshift_func_uint16_t_u_s(((~(safe_rshift_func_int16_t_s_u(((((!g_520[1].f0) & g_483[3]) ^ ((void*)0 == (*l_706))) && l_787), 12))) >= (((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_u(0xB0L, (l_792 > g_265))) && 0x35L), g_483[3])) | 0x39L) ^ 9UL)), 10))), l_787)), 15)) ^ 0xB548DBE4L))
            {
                struct S0 **l_793 = &g_156;
                struct S0 ***l_794 = &l_706;
                (*l_794) = l_793;
            }
            else
            {
                int *l_795 = &g_265;
                int **l_796[5][6] = {{&g_73, &g_73, &g_73, &g_73, &g_73, &l_677}, {&g_73, &g_73, &g_73, &g_73, &g_73, &l_677}, {&g_73, &g_73, &g_73, &g_73, &g_73, &l_677}, {&g_73, &g_73, &g_73, &g_73, &g_73, &l_677}, {&g_73, &g_73, &g_73, &g_73, &g_73, &l_677}};
                int *l_801 = &g_74;
                int i, j;
                l_797 = l_795;
                for (p_39 = 6; (p_39 >= 0); p_39 -= 1)
                {
                    int *l_798 = &g_74;
                    if (p_39)
                        break;
                    l_798 = l_798;
                    (*g_155) = l_799;
                }
                l_797 = (void*)0;
                for (p_37 = 0; (p_37 <= 4); p_37 += 1)
                {
                    int *l_800 = &g_483[3];
                    int ***l_828[6][1] = {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}};
                    int i, j;
                    l_800 = &p_39;
                    if (p_37)
                        continue;
                    for (l_792 = 0; (l_792 <= 1); l_792 += 1)
                    {
                        int i;
                        l_800 = (void*)0;
                        if ((*g_201))
                            continue;
                        g_483[p_37] = (0xCDL <= (*l_795));
                        l_801 = &g_483[p_37];
                    }
                    g_483[p_37] = (((safe_mul_func_uint16_t_u_u(0xE0DFL, func_40((((g_341[(p_37 + 3)] , 1UL) , ((safe_mod_func_uint8_t_u_u((!(((((**l_706) , (safe_mod_func_int16_t_s_s(((p_38 , g_195[1]) == (((p_38 && ((p_37 <= (safe_lshift_func_uint16_t_u_u(0x1B8EL, g_693))) <= p_35)) || 0x69CB5DAAL) , l_705)), g_90.f0))) , 0xA8L) , (-2L)) , 4UL)), l_810)) , g_341[(p_37 + 3)].f0)) == g_186), g_74))) , l_811) != 1UL);
                    for (p_38 = 6; (p_38 >= 0); p_38 -= 1)
                    {
                        unsigned char l_814 = 248UL;
                        int **l_829 = &g_354[4][6];
                        int l_837 = (-1L);
                        p_35 = (safe_sub_func_int16_t_s_s((!l_814), p_37));
                        (*l_795) = 0x14052233L;
                        (*l_801) = (((g_402.f0 | (&l_795 != l_829)) || 0x39C246F9E37D322ALL) , (+0xCC2D5E48L));
                        l_837 = p_38;
                    }
                }
            }
        }
        for (g_74 = 4; (g_74 >= 1); g_74 -= 1)
        {
            int *l_841[10][9][2] = {{{&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}}, {{&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}}, {{&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}}, {{&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}}, {{&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}}, {{&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}}, {{&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}}, {{&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}}, {{&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}}, {{&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}, {&l_811, &g_483[2]}}};
            unsigned char l_851 = 0x26L;
            long long l_862 = 0x69FA0BA81B7A583CLL;
            int i, j, k;
            for (g_186 = 1; (g_186 <= 4); g_186 += 1)
            {
                int *l_838 = &l_811;
                int **l_842 = &l_797;
                for (p_39 = 0; (p_39 <= 1); p_39 += 1)
                {
                    int **l_840[9][8][3] = {{{&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}}, {{&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}}, {{&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}}, {{&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}}, {{&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}}, {{&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}}, {{&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}}, {{&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}}, {{&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}, {&g_354[4][6], &l_838, &l_797}}};
                    int i, j, k;
                    for (p_35 = 4; (p_35 >= 0); p_35 -= 1)
                    {
                        int **l_839 = &g_73;
                        (*l_839) = l_838;
                    }
                    l_841[2][4][1] = l_838;
                }
                (*l_842) = &p_35;
            }
            g_483[g_74] = (safe_sub_func_int32_t_s_s(((((p_37 >= ((safe_mod_func_int16_t_s_s(g_402.f0, (l_851 ^ 0xBD32L))) != p_38)) , (*l_677)) <= p_36) > p_36), p_39));
            for (l_792 = 1; (l_792 <= 6); l_792 += 1)
            {
                char l_865[9][2] = {{(-4L), 0L}, {(-4L), 0L}, {(-4L), 0L}, {(-4L), 0L}, {(-4L), 0L}, {(-4L), 0L}, {(-4L), 0L}, {(-4L), 0L}, {(-4L), 0L}};
                int i, j;
                for (l_811 = 0; (l_811 <= 1); l_811 += 1)
                {
                    char l_852 = 0x52L;
                    int i, j, k;
                    for (p_39 = 1; (p_39 >= 0); p_39 -= 1)
                    {
                        int i, j, k;
                        if (p_35)
                            break;
                        p_38 = p_38;
                    }
                    g_316[(l_811 + 8)][l_792] = g_520[l_811];
                    l_841[(l_811 + 3)][(g_74 + 2)][l_811] = &p_39;
                    if ((l_852 , p_37))
                    {
                        long long l_853 = 0xBA457BE697182C21LL;
                        int **l_854 = &g_354[4][6];
                        int ***l_868 = &l_854;
                        int i;
                        (*l_854) = (l_853 , (void*)0);
                        (*l_854) = ((safe_sub_func_int16_t_s_s(p_38, (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s((-1L), func_57(((g_861 , ((p_38 & l_862) , (safe_lshift_func_uint16_t_u_s(p_38, (l_865[6][1] == 0x48L))))) != (safe_mul_func_int16_t_s_s((p_38 , 0xC31FL), g_265))), g_3, g_74, g_483[2]))), 6)))) , &p_35);
                        (*l_868) = &l_841[(l_811 + 3)][(g_74 + 2)][l_811];
                    }
                    else
                    {
                        char l_880 = 0x19L;
                        p_38 = (0x53E2A3B6F5B4419ELL != (2UL || (safe_mod_func_int64_t_s_s(0xAD226C83689D6822LL, (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((((l_865[6][1] & (safe_unary_minus_func_int16_t_s(0L))) ^ (-1L)) , g_205.f0), (p_39 < (safe_sub_func_int64_t_s_s(((safe_lshift_func_int16_t_s_s((0x0F690BC1924ABDF6LL == 5L), g_460)) < l_880), 1L))))), 4))))));
                        (*g_201) = (safe_mul_func_int16_t_s_s((((l_865[4][0] , p_37) <= (g_693 , ((l_883[0][9][1] != &g_156) && (safe_mod_func_int16_t_s_s(g_205.f0, g_483[3]))))) , (&l_706 == (void*)0)), p_37));
                        l_841[2][4][1] = (g_577.f0 , &g_483[g_74]);
                        if (p_39)
                            break;
                    }
                }
            }
            p_39 = l_787;
        }
        for (l_810 = 0; (l_810 <= 6); l_810 += 1)
        {
            unsigned short l_894 = 0x36B9L;
            struct S0 ***l_902 = &g_155;
            unsigned l_935[5][9] = {{0x087B510FL, 18446744073709551614UL, 0x5BB8ED63L, 9UL, 0xE3E36D0BL, 0x893D4F76L, 0xE3E36D0BL, 9UL, 0x5BB8ED63L}, {0x087B510FL, 18446744073709551614UL, 0x5BB8ED63L, 9UL, 0xE3E36D0BL, 0x893D4F76L, 0xE3E36D0BL, 9UL, 0x5BB8ED63L}, {0x087B510FL, 18446744073709551614UL, 0x5BB8ED63L, 9UL, 0xE3E36D0BL, 0x893D4F76L, 0xE3E36D0BL, 9UL, 0x5BB8ED63L}, {0x087B510FL, 18446744073709551614UL, 0x5BB8ED63L, 9UL, 0xE3E36D0BL, 0x893D4F76L, 0xE3E36D0BL, 9UL, 0x5BB8ED63L}, {0x087B510FL, 18446744073709551614UL, 0x5BB8ED63L, 9UL, 0xE3E36D0BL, 0x893D4F76L, 0xE3E36D0BL, 9UL, 0x5BB8ED63L}};
            int *l_941 = &g_265;
            int i, j;
            p_35 = ((safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((((((((safe_sub_func_int32_t_s_s(p_36, l_894)) , (*l_677)) , (safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s((!((l_810 , ((+((l_899 , (!((safe_add_func_uint64_t_u_u((l_902 == &g_116), 1L)) , ((((**g_155) , 1L) , &g_156) != (void*)0)))) == 0UL)) || p_37)) == 0UL)), p_39)), (*l_677)))) , l_903) == (void*)0) , p_35) != 0xFE1BDFFBL), 14)), (-1L))), p_35)) | g_693);
            if (p_36)
                break;
            for (p_35 = 6; (p_35 >= 0); p_35 -= 1)
            {
                int *l_904 = &g_74;
                long long l_940[4][4][8] = {{{0L, (-5L), 0L, 0xBE9F595D6CC382B7LL, 2L, (-5L), 5L, 1L}, {0L, (-5L), 0L, 0xBE9F595D6CC382B7LL, 2L, (-5L), 5L, 1L}, {0L, (-5L), 0L, 0xBE9F595D6CC382B7LL, 2L, (-5L), 5L, 1L}, {0L, (-5L), 0L, 0xBE9F595D6CC382B7LL, 2L, (-5L), 5L, 1L}}, {{0L, (-5L), 0L, 0xBE9F595D6CC382B7LL, 2L, (-5L), 5L, 1L}, {0L, (-5L), 0L, 0xBE9F595D6CC382B7LL, 2L, (-5L), 5L, 1L}, {0L, (-5L), 0L, 0xBE9F595D6CC382B7LL, 2L, (-5L), 5L, 1L}, {0L, (-5L), 0L, 0xBE9F595D6CC382B7LL, 2L, (-5L), 5L, 1L}}, {{0L, (-5L), 0L, 0xBE9F595D6CC382B7LL, 2L, (-5L), 5L, 1L}, {0L, (-5L), 0L, 0xBE9F595D6CC382B7LL, 2L, (-5L), 5L, 1L}, {0L, (-5L), 0L, 0xBE9F595D6CC382B7LL, 2L, (-5L), 5L, 1L}, {0L, (-5L), 0L, 0xBE9F595D6CC382B7LL, 2L, (-5L), 5L, 1L}}, {{0L, (-5L), 0L, 0xBE9F595D6CC382B7LL, 2L, (-5L), 5L, 1L}, {0L, (-5L), 0L, 0xBE9F595D6CC382B7LL, 2L, (-5L), 5L, 1L}, {0L, (-5L), 0L, 0xBE9F595D6CC382B7LL, 2L, (-5L), 5L, 1L}, {0L, (-5L), 0L, 0xBE9F595D6CC382B7LL, 2L, (-5L), 5L, 1L}}};
                int i, j, k;
            }
        }
    }
    (**l_706) = (**g_155);
    return p_36;
}







static unsigned func_40(unsigned short p_41, unsigned p_42)
{
    char l_488 = (-1L);
    int *l_489[8] = {(void*)0, (void*)0, &g_483[0], (void*)0, (void*)0, &g_483[0], (void*)0, (void*)0};
    unsigned long long l_503[6][6] = {{0xD8BED2A8ADF92289LL, 0UL, 0xD8BED2A8ADF92289LL, 0UL, 0xD8BED2A8ADF92289LL, 0UL}, {0xD8BED2A8ADF92289LL, 0UL, 0xD8BED2A8ADF92289LL, 0UL, 0xD8BED2A8ADF92289LL, 0UL}, {0xD8BED2A8ADF92289LL, 0UL, 0xD8BED2A8ADF92289LL, 0UL, 0xD8BED2A8ADF92289LL, 0UL}, {0xD8BED2A8ADF92289LL, 0UL, 0xD8BED2A8ADF92289LL, 0UL, 0xD8BED2A8ADF92289LL, 0UL}, {0xD8BED2A8ADF92289LL, 0UL, 0xD8BED2A8ADF92289LL, 0UL, 0xD8BED2A8ADF92289LL, 0UL}, {0xD8BED2A8ADF92289LL, 0UL, 0xD8BED2A8ADF92289LL, 0UL, 0xD8BED2A8ADF92289LL, 0UL}};
    struct S0 *l_510 = &g_123;
    unsigned l_517 = 18446744073709551615UL;
    short l_584 = 0xAA76L;
    unsigned char l_598 = 0x60L;
    unsigned l_601 = 0xE0A0AC91L;
    int i, j;
    if ((safe_mod_func_int16_t_s_s(g_483[3], (g_401.f0 || (0x9205L > (p_41 || (-1L)))))))
    {
        int *l_490 = &g_74;
        int **l_491 = &g_354[4][5];
        (*l_491) = l_490;
    }
    else
    {
        short l_498[2];
        int *l_504 = &g_74;
        char l_558 = 0xB0L;
        int *l_565 = &g_483[3];
        int **l_637[9] = {&g_73, (void*)0, &g_73, (void*)0, &g_73, (void*)0, &g_73, (void*)0, &g_73};
        unsigned char l_638 = 249UL;
        int i;
        for (i = 0; i < 2; i++)
            l_498[i] = 0L;
        if (p_42)
        {
            unsigned char l_502 = 0xB3L;
            int *l_505[3];
            char l_524 = 0x4FL;
            unsigned l_560 = 4294967288UL;
            unsigned short l_622 = 0x6842L;
            int i;
            for (i = 0; i < 3; i++)
                l_505[i] = &g_265;
            if (((safe_mul_func_int16_t_s_s(g_300.f0, ((safe_mul_func_uint8_t_u_u((0x239AF2506619627ALL && ((0x9616L == (safe_rshift_func_int8_t_s_u(l_498[0], 2))) ^ p_41)), 0x1BL)) & (*l_504)))) >= 1UL))
            {
                int *l_511 = &g_483[3];
                unsigned short l_518 = 65535UL;
                if (p_42)
                {
                    struct S0 *l_509[4][2][8] = {{{(void*)0, &g_90, &g_90, &g_123, &g_123, &g_90, &g_90, (void*)0}, {(void*)0, &g_90, &g_90, &g_123, &g_123, &g_90, &g_90, (void*)0}}, {{(void*)0, &g_90, &g_90, &g_123, &g_123, &g_90, &g_90, (void*)0}, {(void*)0, &g_90, &g_90, &g_123, &g_123, &g_90, &g_90, (void*)0}}, {{(void*)0, &g_90, &g_90, &g_123, &g_123, &g_90, &g_90, (void*)0}, {(void*)0, &g_90, &g_90, &g_123, &g_123, &g_90, &g_90, (void*)0}}, {{(void*)0, &g_90, &g_90, &g_123, &g_123, &g_90, &g_90, (void*)0}, {(void*)0, &g_90, &g_90, &g_123, &g_123, &g_90, &g_90, (void*)0}}};
                    int **l_516 = (void*)0;
                    int i, j, k;
                    for (l_488 = 0; (l_488 != 24); l_488 = safe_add_func_uint32_t_u_u(l_488, 1))
                    {
                        int **l_508 = &l_504;
                        (*l_508) = l_489[4];
                        (*g_201) = (l_509[1][0][3] != l_510);
                        (*l_508) = l_511;
                    }
                    g_520[1] = ((g_340.f0 , (safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((l_518 != p_42), (*l_511))), 0x6AL))) , g_519);
                    return (*l_511);
                }
                else
                {
                    char l_523 = 0x6AL;
                    (*g_201) = (safe_sub_func_uint8_t_u_u(p_42, (l_523 > l_524)));
                    for (g_460 = 0; (g_460 != 10); g_460++)
                    {
                        int **l_527 = (void*)0;
                        int **l_528 = &l_489[7];
                        (*l_528) = l_505[1];
                        (*l_511) = (*g_201);
                        (*l_504) = (safe_rshift_func_int16_t_s_s(((65528UL != func_43((((((func_57((0x4EL < (safe_mod_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(l_523, ((safe_mod_func_int64_t_s_s(((safe_mul_func_int16_t_s_s((p_42 == ((safe_rshift_func_uint8_t_u_u(p_42, func_57(p_41, func_57(g_300.f0, l_523, (((safe_add_func_int32_t_s_s(p_41, (*l_511))) , p_42) ^ (*l_504)), p_41), p_41, (*l_511)))) < 1L)), 65535UL)) > p_42), 18446744073709551609UL)) >= g_186))), (*l_504))) <= p_42) > g_460), 0xF9L))), (*l_504), p_42, p_41) | (*l_504)) , (*l_511)) <= p_41) < 0x3D5748C16E6C5818LL) , 0x77FEL), p_41, (*l_511), p_42)) >= p_42), 10));
                    }
                }
            }
            else
            {
                unsigned long long l_559 = 18446744073709551612UL;
                int *l_570 = (void*)0;
                for (l_517 = 0; (l_517 != 3); l_517++)
                {
                    (**g_155) = g_547;
                }
                if (((((((g_202 != p_41) != g_483[2]) > p_42) & 0x9FL) != l_559) != g_483[3]))
                {
                    for (g_265 = 0; (g_265 != 25); g_265++)
                    {
                        int *l_563 = &g_483[2];
                        int **l_564[8][4][2] = {{{&g_354[4][6], &g_354[4][6]}, {&g_354[4][6], &g_354[4][6]}, {&g_354[4][6], &g_354[4][6]}, {&g_354[4][6], &g_354[4][6]}}, {{&g_354[4][6], &g_354[4][6]}, {&g_354[4][6], &g_354[4][6]}, {&g_354[4][6], &g_354[4][6]}, {&g_354[4][6], &g_354[4][6]}}, {{&g_354[4][6], &g_354[4][6]}, {&g_354[4][6], &g_354[4][6]}, {&g_354[4][6], &g_354[4][6]}, {&g_354[4][6], &g_354[4][6]}}, {{&g_354[4][6], &g_354[4][6]}, {&g_354[4][6], &g_354[4][6]}, {&g_354[4][6], &g_354[4][6]}, {&g_354[4][6], &g_354[4][6]}}, {{&g_354[4][6], &g_354[4][6]}, {&g_354[4][6], &g_354[4][6]}, {&g_354[4][6], &g_354[4][6]}, {&g_354[4][6], &g_354[4][6]}}, {{&g_354[4][6], &g_354[4][6]}, {&g_354[4][6], &g_354[4][6]}, {&g_354[4][6], &g_354[4][6]}, {&g_354[4][6], &g_354[4][6]}}, {{&g_354[4][6], &g_354[4][6]}, {&g_354[4][6], &g_354[4][6]}, {&g_354[4][6], &g_354[4][6]}, {&g_354[4][6], &g_354[4][6]}}, {{&g_354[4][6], &g_354[4][6]}, {&g_354[4][6], &g_354[4][6]}, {&g_354[4][6], &g_354[4][6]}, {&g_354[4][6], &g_354[4][6]}}};
                        int i, j, k;
                        l_489[2] = l_563;
                        l_504 = l_565;
                        return p_42;
                    }
                }
                else
                {
                    (*g_201) = (g_202 != ((safe_lshift_func_uint8_t_u_u(g_3, 1)) & 18446744073709551615UL));
                    for (l_502 = 0; (l_502 < 12); l_502 = safe_add_func_uint32_t_u_u(l_502, 2))
                    {
                        return g_519.f0;
                    }
                    l_570 = l_570;
                }
            }
            (*l_565) = (g_401.f0 || ((safe_lshift_func_uint8_t_u_s(((((((safe_mul_func_uint8_t_u_u(p_42, ((((safe_add_func_int32_t_s_s((0x6B760BF3L || g_483[3]), p_41)) , g_577) , l_489[2]) != l_489[2]))) & (safe_sub_func_uint32_t_u_u(0UL, 0x133CA85AL))) || p_41) , p_42) >= g_74) || (*l_565)), 3)) | p_41));
            if ((!(g_519.f0 , (g_340.f0 || ((0xF93CE937119B6BBALL > ((safe_mul_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u(0x22E7L, p_41)) & (6UL != ((g_467[0][2][2].f0 != 0xED800C3FL) , p_42))) == l_584), g_460)) && p_42)) < g_3)))))
            {
                int **l_585 = &l_489[1];
                (*l_585) = l_489[7];
            }
            else
            {
                int *l_594 = &g_483[3];
                for (g_460 = (-24); (g_460 >= 17); ++g_460)
                {
                    for (l_524 = (-1); (l_524 < (-5)); l_524--)
                    {
                        int **l_590 = &l_565;
                        (*l_590) = l_505[1];
                        return g_483[3];
                    }
                }
                (*g_156) = g_591;
                for (g_186 = 0; (g_186 > 34); ++g_186)
                {
                    unsigned short l_602 = 1UL;
                    int *l_609[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_609[i] = &g_265;
                    if (((g_265 != 3L) <= p_41))
                    {
                        int **l_597 = &l_489[2];
                        (*l_597) = l_565;
                        if (p_42)
                            break;
                        if (p_41)
                            continue;
                    }
                    else
                    {
                        return g_353.f0;
                    }
                    (*l_565) = (!(((l_489[0] != (void*)0) , (g_437.f0 > p_41)) >= ((+((*l_565) <= p_42)) || (((((func_57((p_41 <= ((l_598 ^ (safe_sub_func_int8_t_s_s((((p_42 , g_483[3]) && 0xA835BF6745D69905LL) != p_41), 4UL))) > l_601)), p_42, g_265, l_602) , g_186) , l_602) , (void*)0) == &g_156) >= (-1L)))));
                    if ((*l_594))
                    {
                        int *l_605[10][7][3] = {{{&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}}, {{&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}}, {{&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}}, {{&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}}, {{&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}}, {{&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}}, {{&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}}, {{&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}}, {{&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}}, {{&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}, {&g_265, (void*)0, &g_74}}};
                        int **l_606 = (void*)0;
                        int **l_607 = &g_354[4][6];
                        int i, j, k;
                        (*g_201) = (((g_480.f0 == (safe_sub_func_int16_t_s_s((*l_504), (g_483[3] || 18446744073709551615UL)))) , g_480.f0) , (*g_201));
                        (*l_607) = l_605[7][4][0];
                        if (p_42)
                            break;
                        if ((*g_201))
                            continue;
                    }
                    else
                    {
                        int *l_608 = &g_265;
                        (*g_201) = (*g_201);
                        (*l_594) = (p_42 || p_42);
                        l_609[0] = l_608;
                    }
                }
            }
            for (g_186 = 0; (g_186 < 33); g_186++)
            {
                int *l_612 = &g_483[4];
                unsigned short l_635 = 65535UL;
                if (p_42)
                {
                    int **l_613 = (void*)0;
                    int **l_614 = &l_489[4];
                    (*l_614) = l_612;
                    (*l_614) = l_504;
                    (*l_504) = (safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((*l_565), ((safe_unary_minus_func_uint64_t_u(g_265)) && p_41))), 0x129D8FA7L));
                    if ((*g_201))
                        break;
                }
                else
                {
                    int *l_620 = &g_483[3];
                    (*l_504) = (l_620 != l_620);
                }
                for (l_560 = 2; (l_560 <= 9); l_560 += 1)
                {
                    for (p_41 = 2; (p_41 <= 9); p_41 += 1)
                    {
                        char l_621[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_621[i] = 0x5FL;
                        (*g_201) = ((l_621[1] >= (*l_612)) == (g_467[0][2][2].f0 ^ 4294967293UL));
                    }
                    for (p_42 = 0; (p_42 <= 1); p_42 += 1)
                    {
                        int i;
                        g_341[l_560] = g_341[l_560];
                        l_505[p_42] = l_505[(p_42 + 1)];
                    }
                }
                (*l_565) = ((1L | g_520[1].f0) <= func_57((((g_74 == (*l_565)) <= ((func_57(p_41, (safe_sub_func_uint16_t_u_u(p_42, l_635)), (*l_612), p_42) != (*l_565)) == 0x23C10224536FB10ELL)) , (*l_612)), p_42, (*l_565), (*l_612)));
            }
        }
        else
        {
            int **l_636 = &l_565;
            (*l_636) = l_489[0];
        }
        l_489[2] = l_504;
        for (g_437.f0 = 0; g_437.f0 < 5; g_437.f0 += 1)
        {
            g_483[g_437.f0] = 0x9DBFFC0FL;
        }
        for (l_517 = 0; (l_517 <= 8); l_517 += 1)
        {
            short l_639 = (-1L);
            short l_642[10][6] = {{0xFDAAL, 0x6D26L, 0L, (-3L), 0L, (-3L)}, {0xFDAAL, 0x6D26L, 0L, (-3L), 0L, (-3L)}, {0xFDAAL, 0x6D26L, 0L, (-3L), 0L, (-3L)}, {0xFDAAL, 0x6D26L, 0L, (-3L), 0L, (-3L)}, {0xFDAAL, 0x6D26L, 0L, (-3L), 0L, (-3L)}, {0xFDAAL, 0x6D26L, 0L, (-3L), 0L, (-3L)}, {0xFDAAL, 0x6D26L, 0L, (-3L), 0L, (-3L)}, {0xFDAAL, 0x6D26L, 0L, (-3L), 0L, (-3L)}, {0xFDAAL, 0x6D26L, 0L, (-3L), 0L, (-3L)}, {0xFDAAL, 0x6D26L, 0L, (-3L), 0L, (-3L)}};
            struct S0 *l_655 = &g_656;
            int i, j;
            for (p_41 = 3; (p_41 <= 8); p_41 += 1)
            {
                char l_645 = 1L;
                (*l_504) = func_57(g_341[1].f0, l_638, g_3, l_639);
                if ((((safe_rshift_func_uint16_t_u_u(p_41, 5)) || ((g_483[0] ^ l_642[2][5]) != (p_42 , l_645))) , 0xFADF914EL))
                {
                    for (g_74 = 8; (g_74 >= 0); g_74 -= 1)
                    {
                        int i, j;
                        g_354[p_41][(g_74 + 1)] = l_489[2];
                    }
                }
                else
                {
                    for (g_460 = 1; (g_460 <= 8); g_460 += 1)
                    {
                        struct S0 ***l_646 = &g_116;
                        int i, j;
                        g_354[p_41][p_41] = l_489[2];
                        if (l_645)
                            break;
                        (*l_646) = &l_510;
                    }
                    for (g_460 = 0; (g_460 <= 8); g_460 += 1)
                    {
                        (*l_504) = p_41;
                        return g_341[1].f0;
                    }
                }
                for (l_638 = 1; (l_638 <= 8); l_638 += 1)
                {
                    int *l_647 = &g_265;
                    int *l_648 = &g_74;
                    int i, j;
                    g_354[p_41][(l_517 + 1)] = l_647;
                    for (g_265 = 5; (g_265 >= 1); g_265 -= 1)
                    {
                        int i, j;
                        g_354[l_638][(p_41 + 1)] = l_648;
                        g_354[l_638][(p_41 + 1)] = g_354[l_638][(p_41 + 1)];
                        g_354[l_638][(p_41 + 1)] = g_354[l_638][(p_41 + 1)];
                    }
                }
            }
            (**g_155) = (*g_156);
            if ((safe_mul_func_int16_t_s_s(g_402.f0, (safe_mod_func_uint16_t_u_u(((0xFBL || ((safe_rshift_func_int16_t_s_s((*l_504), 1)) == p_41)) , ((((*g_155) == ((((p_42 && 4294967295UL) , (void*)0) == &l_637[2]) , l_655)) , (void*)0) == (void*)0)), 1UL)))))
            {
                return g_353.f0;
            }
            else
            {
                return p_42;
            }
        }
    }
    if (((g_186 , (&l_510 != &l_510)) ^ g_483[3]))
    {
        short l_657 = 0x259DL;
        int **l_658 = &l_489[5];
        (*g_201) = func_57((p_41 < func_57(l_657, (l_489[7] != (((((g_341[1].f0 <= 0x66L) | g_483[3]) , l_658) == (void*)0) , l_489[2])), p_42, g_3)), p_42, g_74, p_42);
    }
    else
    {
        (*g_156) = (*l_510);
    }
    for (l_517 = 0; (l_517 >= 31); ++l_517)
    {
        int **l_663 = &l_489[1];
        (*g_201) = (safe_mul_func_uint8_t_u_u((l_663 == l_663), ((*g_155) == (void*)0)));
    }
    return p_41;
}







static unsigned long long func_43(unsigned short p_44, unsigned long long p_45, unsigned char p_46, unsigned p_47)
{
    struct S0 *l_146 = (void*)0;
    struct S0 **l_147[9][2][1];
    struct S0 *l_148 = &g_90;
    int *l_153[8] = {&g_74, (void*)0, &g_74, (void*)0, &g_74, (void*)0, &g_74, (void*)0};
    unsigned short l_208 = 0x65D2L;
    short l_280 = 1L;
    unsigned char l_312 = 0UL;
    unsigned l_342[4] = {18446744073709551615UL, 0x1229C483L, 18446744073709551615UL, 0x1229C483L};
    unsigned l_343[10] = {18446744073709551612UL, 0UL, 18446744073709551612UL, 0UL, 18446744073709551612UL, 0UL, 18446744073709551612UL, 0UL, 18446744073709551612UL, 0UL};
    int l_400 = 0x4DC9B79DL;
    unsigned l_419[2];
    short l_466 = 5L;
    int i, j, k;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_147[i][j][k] = (void*)0;
        }
    }
    for (i = 0; i < 2; i++)
        l_419[i] = 0x932B4017L;
    l_148 = l_146;
    for (p_46 = (-9); (p_46 <= 44); p_46++)
    {
        unsigned l_164 = 1UL;
        int **l_197 = &l_153[4];
        int ***l_196 = &l_197;
        for (g_74 = 11; (g_74 <= 14); g_74++)
        {
            int **l_154 = &l_153[1];
            struct S0 **l_157 = &l_148;
            int l_189 = 0x0D6B5B77L;
            (*l_154) = l_153[1];
            l_157 = g_155;
        }
        for (p_47 = 0; p_47 < 9; p_47 += 1)
        {
            for (p_44 = 0; p_44 < 2; p_44 += 1)
            {
                for (g_74 = 0; g_74 < 1; g_74 += 1)
                {
                    l_147[p_47][p_44][g_74] = &g_156;
                }
            }
        }
        for (p_44 = (-15); (p_44 == 48); ++p_44)
        {
            (**l_196) = l_153[5];
            (*g_201) = 0x68491689L;
            for (l_164 = 0; l_164 < 8; l_164 += 1)
            {
                l_153[l_164] = &g_74;
            }
            (**g_155) = (p_47 , g_205);
        }
    }
    if ((1L <= ((-10L) & (((l_153[1] != l_153[5]) && ((safe_lshift_func_uint16_t_u_s(0UL, l_208)) , 0x9C149A9D8984B9C5LL)) || (safe_add_func_int64_t_s_s((~(p_47 > p_46)), p_46))))))
    {
        int **l_211 = &l_153[1];
        (*l_211) = l_153[3];
    }
    else
    {
        int **l_220 = &g_73;
        int l_274 = (-7L);
        long long l_296 = (-1L);
        int l_321 = 0x4F4DF9F6L;
        int l_344[10][4] = {{(-1L), 0x854F1E06L, (-1L), 0x4C1D7989L}, {(-1L), 0x854F1E06L, (-1L), 0x4C1D7989L}, {(-1L), 0x854F1E06L, (-1L), 0x4C1D7989L}, {(-1L), 0x854F1E06L, (-1L), 0x4C1D7989L}, {(-1L), 0x854F1E06L, (-1L), 0x4C1D7989L}, {(-1L), 0x854F1E06L, (-1L), 0x4C1D7989L}, {(-1L), 0x854F1E06L, (-1L), 0x4C1D7989L}, {(-1L), 0x854F1E06L, (-1L), 0x4C1D7989L}, {(-1L), 0x854F1E06L, (-1L), 0x4C1D7989L}, {(-1L), 0x854F1E06L, (-1L), 0x4C1D7989L}};
        int l_350[8][6][5] = {{{0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}}, {{0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}}, {{0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}}, {{0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}}, {{0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}}, {{0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}}, {{0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}}, {{0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}, {0x8BFADAF8L, 0x0CD57975L, 0x8BFADAF8L, (-1L), 1L}}};
        unsigned short l_364 = 65527UL;
        struct S0 ***l_371 = &l_147[2][0][0];
        int i, j, k;
        for (g_74 = 3; (g_74 == 29); g_74++)
        {
            int **l_222[8][4] = {{&l_153[1], &l_153[3], &l_153[4], &l_153[1]}, {&l_153[1], &l_153[3], &l_153[4], &l_153[1]}, {&l_153[1], &l_153[3], &l_153[4], &l_153[1]}, {&l_153[1], &l_153[3], &l_153[4], &l_153[1]}, {&l_153[1], &l_153[3], &l_153[4], &l_153[1]}, {&l_153[1], &l_153[3], &l_153[4], &l_153[1]}, {&l_153[1], &l_153[3], &l_153[4], &l_153[1]}, {&l_153[1], &l_153[3], &l_153[4], &l_153[1]}};
            int *l_229 = &g_74;
            int i, j;
            if (p_44)
            {
                int *l_217 = &g_74;
                int ***l_221[3][1][8] = {{{&l_220, &l_220, &l_220, &l_220, &l_220, &l_220, &l_220, &l_220}}, {{&l_220, &l_220, &l_220, &l_220, &l_220, &l_220, &l_220, &l_220}}, {{&l_220, &l_220, &l_220, &l_220, &l_220, &l_220, &l_220, &l_220}}};
                unsigned long long l_228 = 0x8E7317A308BB56DCLL;
                int i, j, k;
                (*g_156) = g_214;
                for (p_44 = 0; (p_44 >= 12); p_44 = safe_add_func_uint8_t_u_u(p_44, 5))
                {
                    int **l_218 = (void*)0;
                    int **l_219 = &l_153[3];
                    (*l_219) = l_217;
                }
                l_222[7][3] = l_220;
                for (g_186 = 14; (g_186 <= 6); --g_186)
                {
                    long long l_225 = 5L;
                    int *l_230 = &g_74;
                    if (l_225)
                        break;
                    if ((0x0BL | g_74))
                    {
                        (*l_220) = l_153[4];
                        (*g_201) = (-1L);
                        if (p_47)
                            break;
                        (*g_201) = (safe_lshift_func_int8_t_s_s(l_228, 1));
                    }
                    else
                    {
                        (*l_220) = l_229;
                    }
                    l_153[1] = l_230;
                }
            }
            else
            {
                if ((*g_201))
                {
                    struct S0 **l_233[7] = {&l_148, &l_146, &l_148, &l_146, &l_148, &l_146, &l_148};
                    int *l_234 = &g_74;
                    int i;
                    for (p_46 = 0; (p_46 <= 23); p_46 = safe_add_func_int64_t_s_s(p_46, 9))
                    {
                        (*g_201) = (p_47 ^ ((void*)0 != l_233[3]));
                    }
                    (*l_220) = l_234;
                }
                else
                {
                    int l_245 = 0x2E8AB1B6L;
                    (*g_201) = ((safe_mul_func_uint16_t_u_u(0x3265L, g_74)) >= 3L);
                }
                (*l_220) = (g_202 , l_153[6]);
            }
            if ((*g_201))
                break;
        }
        for (g_74 = (-16); (g_74 < (-27)); --g_74)
        {
            unsigned l_254 = 1UL;
            int *l_264 = &g_265;
            struct S0 ***l_283 = &g_155;
            int *l_311 = (void*)0;
            short l_332 = (-1L);
            unsigned short l_351 = 0x7274L;
            unsigned l_359 = 0x68379605L;
            int ***l_388 = &l_220;
            int *l_390 = &l_344[0][1];
        }
        for (g_186 = 0; (g_186 == 3); ++g_186)
        {
            int *l_405 = &l_344[3][1];
            unsigned long long l_421 = 18446744073709551615UL;
            if (p_47)
            {
                if ((l_371 == &g_155))
                {
                    short l_406 = 0x9E58L;
                    l_405 = &l_400;
                    if (l_406)
                        break;
                }
                else
                {
                    for (l_321 = 0; (l_321 < 1); l_321 = safe_add_func_uint16_t_u_u(l_321, 6))
                    {
                        return g_186;
                    }
                }
                return g_365.f0;
            }
            else
            {
                long long l_420 = 0x270E7C306249774FLL;
                unsigned short l_426 = 0xA197L;
                struct S0 ***l_427 = &l_147[7][1][0];
                if ((safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(0L, ((*l_405) , (p_45 < ((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((l_220 != l_220), func_57(g_402.f0, (func_57(p_46, (((safe_mul_func_int16_t_s_s(((g_74 , g_265) < 0UL), g_3)) | g_74) != l_419[0]), l_420, p_46) >= l_421), p_45, p_44))) >= g_74), 6)) , p_46))))), p_46)))
                {
                    (**g_155) = ((safe_lshift_func_uint16_t_u_u(g_90.f0, 4)) , (**g_155));
                }
                else
                {
                    return g_300.f0;
                }
            }
            for (p_45 = 2; (p_45 <= 7); p_45 += 1)
            {
                int l_455[1][7][3] = {{{(-1L), (-4L), 0x629FB11BL}, {(-1L), (-4L), 0x629FB11BL}, {(-1L), (-4L), 0x629FB11BL}, {(-1L), (-4L), 0x629FB11BL}, {(-1L), (-4L), 0x629FB11BL}, {(-1L), (-4L), 0x629FB11BL}, {(-1L), (-4L), 0x629FB11BL}}};
                int i, j, k;
                (*l_405) = p_47;
                if ((*l_405))
                    continue;
                (*g_201) = (((&l_405 != &l_153[1]) != g_401.f0) < (p_44 & ((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(p_44, 6)), 4)) || (((((&l_400 == (void*)0) != (0L > g_3)) , 0L) | p_46) , 0x629AF9D0L))));
            }
        }
        (*l_220) = &l_274;
    }
    (*g_156) = g_480;
    return p_46;
}







static unsigned short func_53(long long p_54, unsigned short p_55, unsigned p_56)
{
    unsigned l_62 = 0xC9E520C3L;
    int l_68[5];
    short l_96[6];
    unsigned l_98[5][2] = {{8UL, 0x99A8624AL}, {8UL, 0x99A8624AL}, {8UL, 0x99A8624AL}, {8UL, 0x99A8624AL}, {8UL, 0x99A8624AL}};
    int **l_113 = &g_73;
    struct S0 *l_121 = &g_90;
    short l_137 = 0x527DL;
    int i, j;
    for (i = 0; i < 5; i++)
        l_68[i] = 0x84A4E7FBL;
    for (i = 0; i < 6; i++)
        l_96[i] = 0x2899L;
    if ((func_57(p_56, (((l_62 ^ (func_63(g_3, l_68[1], (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(l_68[2], (l_68[1] | 0x24L))), 0)), (l_68[1] <= p_55)) & 0x1675L)) , l_68[4]) > 1L), p_54, p_56) || g_3))
    {
        unsigned l_92 = 0UL;
        int *l_109 = &g_74;
        g_73 = &g_74;
        for (p_55 = 0; (p_55 != 3); p_55++)
        {
            long long l_93 = 2L;
            unsigned l_97 = 2UL;
            (*g_73) = (*g_73);
            for (g_74 = 0; (g_74 > (-1)); g_74--)
            {
                int **l_89 = &g_73;
                struct S0 *l_91 = &g_90;
                char l_94[7] = {0x40L, 0L, 0x40L, 0L, 0x40L, 0L, 0x40L};
                int i;
                for (l_62 = (-30); (l_62 < 43); l_62 = safe_add_func_int64_t_s_s(l_62, 2))
                {
                    struct S0 **l_95 = &l_91;
                    (*l_95) = (((((!(g_3 ^ (g_3 & (g_74 & ((func_63((func_63((!((((p_54 != g_3) != (safe_lshift_func_int8_t_s_s(((void*)0 == l_89), 1))) > (g_90 , ((void*)0 == l_91))) | 8UL)), (**l_89), g_74, p_56) && l_92), p_55, p_56, l_93) | g_74) < g_3))))) <= l_94[2]) || l_93) && p_55) , (void*)0);
                    return (**l_89);
                }
            }
            (*g_73) = (((+p_55) == (0x9BA9L && (((l_92 || (0x1534BB8EL < func_57(l_93, l_96[2], l_97, l_92))) | l_92) , g_74))) <= l_98[0][0]);
            if (l_97)
                break;
        }
        (*l_109) = (safe_mod_func_int16_t_s_s(func_63(g_3, (safe_mod_func_int8_t_s_s((g_74 <= g_74), p_56)), (safe_lshift_func_int8_t_s_s(l_62, g_90.f0)), (safe_sub_func_int64_t_s_s(((p_56 <= g_74) <= (safe_mul_func_uint16_t_u_u(((l_68[2] , (-7L)) & l_98[3][0]), 0L))), (-7L)))), g_3));
        for (p_56 = 0; (p_56 <= 1); p_56 += 1)
        {
            short l_122 = 1L;
            for (l_92 = 1; (l_92 <= 4); l_92 += 1)
            {
                for (p_55 = 0; (p_55 <= 1); p_55 += 1)
                {
                    int **l_110 = &g_73;
                    int i;
                    for (g_74 = 0; (g_74 <= 4); g_74 += 1)
                    {
                        int ***l_111 = (void*)0;
                        int ***l_112[6] = {&l_110, &l_110, (void*)0, &l_110, &l_110, (void*)0};
                        int i;
                        l_113 = l_110;
                    }
                    (*l_110) = &l_68[l_92];
                    (**l_110) = ((l_109 != (*l_110)) , (&g_90 != (void*)0));
                }
                (*l_113) = (*l_113);
            }
            g_73 = &g_74;
            (*l_109) = (((safe_rshift_func_int8_t_s_u((((**l_113) || (+(0xF5L || (p_55 ^ func_63((**l_113), ((void*)0 != g_116), p_56, (safe_sub_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u(((l_121 == (void*)0) < p_54), g_90.f0)) | (-1L)), p_56))))))) < p_54), 0)) && 0x6630802EL) , (*g_73));
            l_109 = l_109;
            for (l_62 = 0; (l_62 <= 1); l_62 += 1)
            {
                for (p_54 = 1; (p_54 >= 0); p_54 -= 1)
                {
                    int i;
                    l_68[l_62] = (-9L);
                    for (p_55 = 0; (p_55 <= 4); p_55 += 1)
                    {
                        int i;
                        return l_68[(p_54 + 3)];
                    }
                    (*g_73) = l_68[(l_62 + 2)];
                }
                (*l_113) = &g_74;
                (*g_73) = ((p_56 == ((4UL >= l_122) < (*g_73))) == ((~func_57(g_3, p_54, ((func_57((**l_113), p_55, (func_57(g_3, p_55, g_3, g_90.f0) & 0xDB6BE6058BBDFDC5LL), g_3) || g_3) | 0x63L), p_54)) != (-8L)));
            }
        }
    }
    else
    {
        (*l_121) = g_123;
        (*l_113) = ((g_123 , p_56) , (*l_113));
        (*l_113) = &g_74;
        (*g_73) = 7L;
    }
    if ((**l_113))
    {
        int l_136 = 0x208B9B0AL;
        int l_138[1];
        int i;
        for (i = 0; i < 1; i++)
            l_138[i] = (-1L);
        (*l_113) = ((*g_73) , &g_74);
        for (p_54 = (-19); (p_54 != 12); ++p_54)
        {
            (*l_121) = g_90;
        }
        if ((*g_73))
        {
            unsigned l_130 = 2UL;
            struct S0 *l_135 = &g_123;
            int *l_139 = (void*)0;
            l_138[0] = func_57(p_54, (safe_mod_func_int16_t_s_s((p_54 < p_56), (safe_rshift_func_int16_t_s_s(l_130, (+((0x8A0C824337CDB552LL & (safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((&g_74 == (*l_113)), (((l_135 != (func_57(p_54, g_123.f0, g_3, g_3) , (void*)0)) , l_136) , 0x1DC2E7BDL))), p_56))) | l_130)))))), l_137, l_130);
            (*l_113) = (((void*)0 != (*l_113)) , l_139);
            for (l_62 = 0; (l_62 >= 60); l_62 = safe_add_func_int32_t_s_s(l_62, 5))
            {
                struct S0 **l_142 = &l_121;
                (*l_113) = &g_74;
                for (l_137 = 1; (l_137 <= 5); l_137 += 1)
                {
                    struct S0 ***l_143 = (void*)0;
                    struct S0 ***l_144 = &g_116;
                    (*l_144) = l_142;
                }
            }
        }
        else
        {
            int *l_145 = &l_138[0];
            (*l_113) = l_145;
        }
    }
    else
    {
        (*l_113) = &g_74;
    }
    return g_3;
}







static short func_57(unsigned short p_58, unsigned char p_59, unsigned p_60, unsigned long long p_61)
{
    char l_78[9][7][2] = {{{0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}}, {{0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}}, {{0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}}, {{0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}}, {{0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}}, {{0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}}, {{0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}}, {{0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}}, {{0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}, {0L, (-3L)}}};
    int **l_79[2];
    int *l_80 = &g_74;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_79[i] = &g_73;
    for (p_59 = 0; (p_59 != 25); ++p_59)
    {
        return l_78[6][6][1];
    }
    l_80 = (void*)0;
    return p_58;
}







static short func_63(char p_64, unsigned long long p_65, short p_66, unsigned long long p_67)
{
    int **l_75 = &g_73;
    (*l_75) = g_73;
    return p_65;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_90.f0, "g_90.f0", print_hash_value);
    transparent_crc(g_123.f0, "g_123.f0", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_205.f0, "g_205.f0", print_hash_value);
    transparent_crc(g_214.f0, "g_214.f0", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    transparent_crc(g_300.f0, "g_300.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_316[i][j].f0, "g_316[i][j].f0", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_340.f0, "g_340.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_341[i].f0, "g_341[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_352.f0, "g_352.f0", print_hash_value);
    transparent_crc(g_353.f0, "g_353.f0", print_hash_value);
    transparent_crc(g_365.f0, "g_365.f0", print_hash_value);
    transparent_crc(g_401.f0, "g_401.f0", print_hash_value);
    transparent_crc(g_402.f0, "g_402.f0", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_436[i][j][k].f0, "g_436[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_437.f0, "g_437.f0", print_hash_value);
    transparent_crc(g_460, "g_460", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_467[i][j][k].f0, "g_467[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_480.f0, "g_480.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_483[i], "g_483[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_519.f0, "g_519.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_520[i].f0, "g_520[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_547.f0, "g_547.f0", print_hash_value);
    transparent_crc(g_577.f0, "g_577.f0", print_hash_value);
    transparent_crc(g_591.f0, "g_591.f0", print_hash_value);
    transparent_crc(g_656.f0, "g_656.f0", print_hash_value);
    transparent_crc(g_693, "g_693", print_hash_value);
    transparent_crc(g_751.f0, "g_751.f0", print_hash_value);
    transparent_crc(g_772.f0, "g_772.f0", print_hash_value);
    transparent_crc(g_836, "g_836", print_hash_value);
    transparent_crc(g_861.f0, "g_861.f0", print_hash_value);
    transparent_crc(g_927.f0, "g_927.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_928[i][j].f0, "g_928[i][j].f0", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_930.f0, "g_930.f0", print_hash_value);
    transparent_crc(g_947.f0, "g_947.f0", print_hash_value);
    transparent_crc(g_969.f0, "g_969.f0", print_hash_value);
    transparent_crc(g_980.f0, "g_980.f0", print_hash_value);
    transparent_crc(g_1045.f0, "g_1045.f0", print_hash_value);
    transparent_crc(g_1083.f0, "g_1083.f0", print_hash_value);
    transparent_crc(g_1149.f0, "g_1149.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_1150[i][j].f0, "g_1150[i][j].f0", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1177[i].f0, "g_1177[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1198[i].f0, "g_1198[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1222.f0, "g_1222.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1227[i][j].f0, "g_1227[i][j].f0", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1228.f0, "g_1228.f0", print_hash_value);
    transparent_crc(g_1281, "g_1281", print_hash_value);
    transparent_crc(g_1286.f0, "g_1286.f0", print_hash_value);
    transparent_crc(g_1319.f0, "g_1319.f0", print_hash_value);
    transparent_crc(g_1322.f0, "g_1322.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
