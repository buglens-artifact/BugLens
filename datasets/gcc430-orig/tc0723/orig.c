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
   unsigned long long f1;
   unsigned long long f2;
   volatile long long f3;
   unsigned short f4;
   volatile unsigned f5;
};

union U1 {
   struct S0 f0;
   unsigned f1;
   volatile unsigned short f2;
   int f3;
   volatile struct S0 f4;
};

union U2 {
   volatile int f0;
   unsigned long long f1;
   unsigned char f2;
};


static unsigned char g_7 = 255UL;
static int g_10 = (-1L);
static volatile char g_87 = (-6L);
static short g_89 = (-9L);
static volatile long long g_141 = 0x84CB426AB799115BLL;
static unsigned short g_197 = 65528UL;
static volatile int g_208 = 0x171BA0D8L;
static volatile int *g_207 = &g_208;
static volatile struct S0 g_242 = {0xE4L,0xE62905013582EBD2LL,18446744073709551606UL,-1L,0xD400L,0UL};
static volatile char g_253 = 0x1DL;
static int g_317 = 0x719620DEL;
static struct S0 g_348 = {0UL,0xE35D45CBCC7407BCLL,6UL,0xAC48BB85DC8BF38BLL,65532UL,1UL};
static struct S0 *g_347 = &g_348;
static struct S0 **g_346 = &g_347;
static long long g_428 = 0xF489C5609187B28CLL;
static volatile int g_430 = 0xB1E1FFC8L;
static unsigned short g_432 = 1UL;
static union U2 g_436 = {1L};
static volatile unsigned long long g_478 = 18446744073709551606UL;
static union U2 *g_486 = &g_436;
static union U2 **g_485 = &g_486;
static union U1 g_545 = {{0UL,18446744073709551615UL,0xD86B5120042DFD0DLL,0xD268E0CB7C3AA316LL,0xE27CL,0x5D314EDCL}};
static struct S0 g_553 = {253UL,3UL,18446744073709551608UL,-4L,65535UL,0UL};
static struct S0 g_559 = {255UL,0x59BEA66983E4668FLL,0x129A4367D4B8A66ALL,-1L,0x34AAL,0x4C6CEB2BL};
static unsigned g_602 = 0UL;
static unsigned g_609 = 4294967292UL;
static volatile char g_647 = 0x1BL;
static unsigned long long g_658 = 0x1CD9B62F114BED56LL;
static short g_700 = (-1L);
static volatile unsigned char g_711 = 0x8AL;
static volatile union U1 g_719 = {{0UL,18446744073709551609UL,0xBA01716409956FB4LL,0L,0UL,4294967295UL}};
static long long g_724 = 9L;
static volatile int g_768 = 0x809D9579L;
static short g_786 = (-6L);
static volatile short g_795 = 0L;
static volatile unsigned short g_802 = 0xA0E5L;
static char g_857 = 0x90L;
static volatile long long g_949 = (-9L);
static unsigned g_955 = 0x3539FFBFL;
static int g_964 = 0x6754519BL;
static long long g_966 = 0x628E17E25F3A32B4LL;
static volatile short g_967 = 0xDF05L;
static volatile int g_968 = 9L;
static volatile int g_969 = 0x4FE6C59FL;
static unsigned g_971 = 0x278AB794L;
static int *g_1021 = &g_10;
static unsigned long long g_1050 = 18446744073709551614UL;
static char g_1056 = 0x08L;
static short g_1171 = 0x59A9L;
static unsigned g_1176 = 0xB797909AL;
static unsigned short *g_1206 = &g_197;
static unsigned short **g_1205 = &g_1206;
static unsigned g_1270 = 4294967295UL;
static volatile union U1 g_1307 = {{0x6EL,0xB43BD7CD7939F1D7LL,1UL,0x88BD7B905F5E5127LL,65535UL,0x8F6EEE67L}};
static volatile struct S0 g_1315 = {4UL,0x089BA3C343BA8768LL,1UL,0xBA392DD1514DE6A9LL,0x3FF8L,0x727B7B04L};
static int g_1329 = 2L;
static volatile unsigned char g_1330 = 1UL;
static union U1 g_1344 = {{4UL,1UL,2UL,0x4BA17D3BC30058A8LL,0UL,0x642F542AL}};
static volatile short **g_1379 = (void*)0;
static struct S0 g_1381 = {0xA1L,0xFAAF5172F94DFAC8LL,1UL,1L,65527UL,0xEB669A90L};
static int g_1394 = 1L;
static struct S0 g_1405 = {0UL,0x12DF36B078E373E9LL,0UL,0xF218C6283C409492LL,0x8A02L,1UL};
static unsigned long long g_1450 = 0x323B99EA2AA8BE17LL;



static struct S0 func_1(void);
static long long func_2(unsigned char p_3, unsigned short p_4, unsigned p_5, unsigned long long p_6);
static int func_200(int * p_201);
static union U2 func_202(unsigned short p_203, unsigned p_204);
static unsigned long long func_209(short p_210, int p_211);
static short func_212(int p_213, char p_214, unsigned p_215, int * p_216);
static short func_219(unsigned p_220);
static unsigned long long func_222(int * p_223);
static int * func_224(unsigned short p_225, unsigned p_226);
static char func_229(int * p_230, unsigned p_231, int * p_232);
static struct S0 func_1(void)
{
    unsigned l_8 = 18446744073709551609UL;
    int l_1392 = 0x076D8C12L;
    int *l_1393 = &g_1394;
    int *l_1406 = &g_317;
    int *l_1407 = &g_317;
    int *l_1408 = &g_317;
    int *l_1409 = &l_1392;
    int *l_1410 = (void*)0;
    int *l_1411 = &g_10;
    int *l_1412 = &g_317;
    int *l_1413 = &g_1394;
    int *l_1414 = &g_317;
    int *l_1415 = &g_317;
    int *l_1416 = (void*)0;
    int *l_1417 = &g_317;
    int *l_1418 = &l_1392;
    int *l_1419 = &g_1394;
    int *l_1420 = &l_1392;
    int *l_1421 = &g_10;
    int *l_1422 = &g_1394;
    int *l_1423 = (void*)0;
    int *l_1424 = &g_10;
    int *l_1425 = &l_1392;
    int *l_1426 = (void*)0;
    int *l_1427 = &l_1392;
    int l_1428 = 0x803C4F04L;
    int *l_1429 = (void*)0;
    int *l_1430 = &l_1392;
    int *l_1431 = &l_1428;
    int *l_1432 = &g_317;
    int *l_1433 = (void*)0;
    int *l_1434 = (void*)0;
    char l_1435 = (-1L);
    int *l_1436 = (void*)0;
    int *l_1437 = (void*)0;
    int *l_1438 = &g_1394;
    int *l_1439 = &l_1392;
    int *l_1440 = &l_1392;
    int *l_1441 = &l_1428;
    int *l_1442 = &l_1392;
    int *l_1443 = (void*)0;
    int l_1444 = (-2L);
    int *l_1445 = &g_317;
    int *l_1446 = &l_1444;
    int *l_1447 = &g_317;
    int *l_1448 = &l_1444;
    int *l_1449 = &l_1444;
    (*l_1393) ^= ((func_2(g_7, l_8, l_8, l_8) != ((-6L) < l_8)) != l_1392);

    ;
    ;

    ;
    for (g_1381.f4 = 0; (g_1381.f4 <= 60); ++g_1381.f4)
    {
        unsigned l_1397 = 0x7A252EA9L;
        int *l_1402 = &l_1392;
        if (l_1397)
        {
            struct S0 *l_1398 = &g_348;
            int l_1399 = 0x852652BFL;
            (*l_1398) = (**g_346);
            if (l_1399)
                continue;
            return (*g_347);
        }
        else
        {
            int **l_1403 = &l_1393;
            union U2 **l_1404 = &g_486;
            (*l_1403) = l_1402;

            ;
            (*l_1404) = &g_436;
            return g_1405;
        }
    }
    --g_1450;
    return (**g_346);
}







static long long func_2(unsigned char p_3, unsigned short p_4, unsigned p_5, unsigned long long p_6)
{
    int *l_9 = &g_10;
    int *l_11 = &g_10;
    int *l_12 = &g_10;
    int *l_13 = (void*)0;
    int *l_14 = &g_10;
    int *l_15 = &g_10;
    int *l_16 = &g_10;
    int *l_17 = (void*)0;
    int *l_18 = &g_10;
    int l_19 = 6L;
    int l_20 = 0L;
    int *l_21 = (void*)0;
    int l_22 = 7L;
    int *l_23 = &l_20;
    int *l_24 = &g_10;
    int *l_25 = &l_19;
    int l_26 = 0x046E74A6L;
    int *l_27 = &g_10;
    int *l_28 = &l_19;
    int *l_29 = (void*)0;
    int *l_30 = &l_20;
    int *l_31 = &l_22;
    int *l_32 = &l_20;
    int *l_33 = &l_26;
    int *l_34 = &l_26;
    int *l_35 = &l_22;
    int *l_36 = &l_19;
    int *l_37 = &l_26;
    int *l_38 = &l_26;
    int *l_39 = (void*)0;
    int l_40 = (-1L);
    int *l_41 = (void*)0;
    int l_42 = (-1L);
    int *l_43 = &l_20;
    int *l_44 = (void*)0;
    int *l_45 = &l_42;
    int l_46 = 0x0211E9A9L;
    int *l_47 = &l_20;
    int *l_48 = &l_20;
    int *l_49 = &l_42;
    int *l_50 = (void*)0;
    int *l_51 = &l_22;
    int *l_52 = &l_46;
    int l_53 = (-2L);
    int *l_54 = &l_20;
    int *l_55 = &g_10;
    int *l_56 = &l_46;
    int *l_57 = &l_46;
    int *l_58 = (void*)0;
    int *l_59 = &g_10;
    int l_60 = 0x7F44FB66L;
    int *l_61 = &l_53;
    int *l_62 = &g_10;
    int *l_63 = &l_20;
    int *l_64 = &l_46;
    int *l_65 = &g_10;
    int *l_66 = &l_40;
    int *l_67 = (void*)0;
    int *l_68 = &g_10;
    int *l_69 = &l_40;
    int *l_70 = &l_40;
    int *l_71 = &l_20;
    int l_72 = 1L;
    int *l_73 = &l_19;
    int *l_74 = &l_42;
    int l_75 = 0xC9AD537EL;
    int *l_76 = &l_19;
    int *l_77 = &l_19;
    int *l_78 = &l_26;
    int *l_79 = &l_40;
    int *l_80 = &l_40;
    int *l_81 = &l_20;
    int *l_82 = &l_22;
    int l_83 = 0x038BE40EL;
    int *l_84 = &l_22;
    int *l_85 = &l_26;
    int *l_86 = (void*)0;
    int *l_88 = (void*)0;
    int *l_90 = &l_40;
    int *l_91 = &l_19;
    int *l_92 = &l_22;
    int *l_93 = &l_22;
    int l_94 = 0L;
    int *l_95 = &l_60;
    int *l_96 = &g_10;
    int *l_97 = (void*)0;
    long long l_98 = 0xA3D85AA7F794FC7BLL;
    int *l_99 = &l_83;
    int *l_100 = (void*)0;
    int *l_101 = &l_19;
    int *l_102 = &g_10;
    int *l_103 = &l_53;
    int *l_104 = &l_22;
    int l_105 = 0x30F141BDL;
    int *l_106 = &l_105;
    int *l_107 = (void*)0;
    int *l_108 = (void*)0;
    int *l_109 = (void*)0;
    int *l_110 = (void*)0;
    int *l_111 = &l_72;
    int *l_112 = &l_46;
    int *l_113 = (void*)0;
    int l_114 = 0xA086CC6BL;
    int *l_115 = (void*)0;
    int l_116 = (-2L);
    int *l_117 = &g_10;
    int *l_118 = &l_42;
    int *l_119 = &l_19;
    int *l_120 = &l_22;
    int *l_121 = &l_60;
    int *l_122 = &l_94;
    int *l_123 = &l_75;
    int l_124 = 6L;
    int *l_125 = &l_19;
    int *l_126 = &l_20;
    int l_127 = 1L;
    int *l_128 = &l_116;
    int l_129 = 1L;
    int *l_130 = &l_105;
    int *l_131 = &l_105;
    int *l_132 = &l_124;
    int *l_133 = &l_83;
    int l_134 = 0x387092E0L;
    int *l_135 = (void*)0;
    int *l_136 = &g_10;
    int *l_137 = &l_105;
    int *l_138 = &l_75;
    int *l_139 = &l_19;
    int *l_140 = &g_10;
    int *l_142 = &l_94;
    int l_143 = 0L;
    int l_144 = 4L;
    int *l_145 = &l_124;
    int *l_146 = &l_72;
    int *l_147 = &l_46;
    int *l_148 = &l_129;
    int *l_149 = &l_116;
    int *l_150 = &l_53;
    int l_151 = (-1L);
    int l_152 = 1L;
    int *l_153 = &l_151;
    int *l_154 = &l_143;
    int *l_155 = &l_83;
    int *l_156 = (void*)0;
    int *l_157 = &l_42;
    int *l_158 = &l_72;
    int *l_159 = &l_20;
    int *l_160 = (void*)0;
    int *l_161 = &l_144;
    int *l_162 = (void*)0;
    int *l_163 = &l_40;
    int *l_164 = &l_83;
    int *l_165 = &l_94;
    int *l_166 = (void*)0;
    int *l_167 = &l_114;
    int *l_168 = (void*)0;
    int *l_169 = &l_124;
    int *l_170 = &l_22;
    int *l_171 = (void*)0;
    int *l_172 = &l_129;
    int *l_173 = (void*)0;
    int *l_174 = &l_143;
    int l_175 = 0xC95BC5B3L;
    int *l_176 = &l_129;
    int *l_177 = &l_127;
    int *l_178 = &l_129;
    int *l_179 = &l_42;
    int *l_180 = &l_134;
    int *l_181 = &l_22;
    int *l_182 = &l_83;
    int *l_183 = &l_53;
    int *l_184 = &l_72;
    int l_185 = 0xF05760DCL;
    int *l_186 = &l_20;
    int *l_187 = (void*)0;
    int l_188 = 1L;
    int *l_189 = &l_53;
    int *l_190 = &l_105;
    int *l_191 = (void*)0;
    int *l_192 = &l_22;
    int *l_193 = &l_124;
    int *l_194 = &l_105;
    int *l_195 = &l_129;
    int *l_196 = (void*)0;
    struct S0 *l_1389 = &g_1344.f0;
    g_197--;
    (*l_80) = (p_4 , func_200((func_202(p_3, (*l_178)) , &l_60)));

    ;
    ;

    ;
    (*g_346) = l_1389;

    ;
    (*l_12) = (safe_mod_func_uint32_t_u_u(5UL, (*l_139)));
    return g_1307.f0.f5;
}







static int func_200(int * p_201)
{
    char l_1388 = 0x9AL;
    (*g_207) &= l_1388;
    return (*g_207);
}







static union U2 func_202(unsigned short p_203, unsigned p_204)
{
    unsigned l_221 = 9UL;
    int l_227 = 0xA5E38B96L;
    unsigned long long l_228 = 0UL;
    long long *l_1055 = (void*)0;
    unsigned short *l_1067 = (void*)0;
    unsigned short *l_1068 = &g_559.f4;
    long long l_1380 = (-1L);
    int l_1387 = 0xD5029486L;
    l_1387 |= (safe_add_func_uint64_t_u_u(((g_207 == (void*)0) , func_209(func_212((((*l_1068) = (safe_mod_func_uint8_t_u_u((((((func_219((l_221 , (((func_222(func_224((l_227 > 18446744073709551612UL), l_228)) && (safe_mod_func_int64_t_s_s((g_1056 |= (0x0F36L & (-1L))), l_221))) , p_203) < p_203))) != g_553.f4) , p_203) ^ p_204) , g_89) ^ g_553.f4), p_203))) & g_786), l_221, l_227, &l_227), l_1380)), g_1381.f2));

    ;
    ;

    ;
    l_227 ^= l_1387;
    return (*g_486);

    }







static unsigned long long func_209(short p_210, int p_211)
{
    struct S0 *l_1382 = &g_559;
    union U1 *l_1385 = &g_545;
    union U1 **l_1386 = &l_1385;
    (*l_1382) = g_1381;
    (*l_1382) = (*l_1382);
    for (g_545.f0.f1 = (-28); (g_545.f0.f1 <= 31); g_545.f0.f1 = safe_add_func_uint32_t_u_u(g_545.f0.f1, 1))
    {
        p_211 |= (*g_207);
    }
    (*l_1386) = l_1385;
    return g_1381.f4;
}







static short func_212(int p_213, char p_214, unsigned p_215, int * p_216)
{
    int *l_1069 = &g_317;
    int l_1070 = 0L;
    int *l_1071 = &l_1070;
    int *l_1072 = &g_317;
    int *l_1073 = &g_317;
    int *l_1074 = &g_317;
    int *l_1075 = &l_1070;
    int *l_1076 = &g_10;
    int *l_1077 = &g_10;
    int *l_1078 = (void*)0;
    int *l_1079 = &g_10;
    int l_1080 = 1L;
    int *l_1081 = &l_1080;
    int *l_1082 = (void*)0;
    int *l_1083 = (void*)0;
    int *l_1084 = &g_10;
    int *l_1085 = &g_317;
    int *l_1086 = &l_1080;
    int *l_1087 = &g_10;
    int *l_1088 = &g_10;
    int *l_1089 = &l_1080;
    int *l_1090 = &g_317;
    int l_1091 = (-7L);
    int *l_1092 = &g_317;
    int l_1093 = 3L;
    int *l_1094 = (void*)0;
    int *l_1095 = (void*)0;
    int *l_1096 = &l_1091;
    int *l_1097 = &g_10;
    int l_1098 = 0x4DD2432BL;
    int l_1099 = 0xD18FD78BL;
    int *l_1100 = &l_1099;
    int *l_1101 = (void*)0;
    int *l_1102 = &l_1093;
    int *l_1103 = (void*)0;
    int *l_1104 = &l_1093;
    int *l_1105 = (void*)0;
    int *l_1106 = &g_317;
    int *l_1107 = &l_1098;
    int *l_1108 = &l_1099;
    int *l_1109 = &l_1098;
    int l_1110 = 0xE47427DFL;
    int *l_1111 = &g_10;
    int l_1112 = 1L;
    int *l_1113 = &l_1112;
    int *l_1114 = &g_317;
    int *l_1115 = (void*)0;
    int *l_1116 = &l_1093;
    int *l_1117 = &l_1091;
    int *l_1118 = &l_1093;
    int *l_1119 = &l_1110;
    int l_1120 = 0x3F10614EL;
    int *l_1121 = &l_1080;
    int *l_1122 = &l_1112;
    int *l_1123 = &l_1112;
    int *l_1124 = &g_10;
    int *l_1125 = &l_1112;
    int *l_1126 = &l_1093;
    int *l_1127 = &l_1093;
    int *l_1128 = &l_1112;
    int *l_1129 = &l_1080;
    int *l_1130 = &l_1112;
    int *l_1131 = &g_317;
    int *l_1132 = &g_10;
    int *l_1133 = &l_1112;
    int *l_1134 = &l_1093;
    int l_1135 = 2L;
    int *l_1136 = &l_1110;
    int *l_1137 = &l_1135;
    int *l_1138 = &l_1093;
    int l_1139 = 1L;
    int *l_1140 = (void*)0;
    int *l_1141 = (void*)0;
    int *l_1142 = &g_317;
    int *l_1143 = &l_1080;
    int *l_1144 = &l_1135;
    int *l_1145 = &l_1070;
    int *l_1146 = &l_1135;
    int *l_1147 = &l_1120;
    int *l_1148 = &l_1120;
    int *l_1149 = &l_1135;
    int l_1150 = 0x7FD57B4AL;
    int *l_1151 = &l_1070;
    int *l_1152 = (void*)0;
    int *l_1153 = &l_1098;
    int *l_1154 = &l_1093;
    int *l_1155 = &l_1099;
    int *l_1156 = &l_1099;
    int *l_1157 = &l_1070;
    int l_1158 = 0x6CAB4AA6L;
    int *l_1159 = &l_1110;
    int *l_1160 = &l_1070;
    int *l_1161 = &l_1150;
    int *l_1162 = (void*)0;
    int *l_1163 = &l_1120;
    int *l_1164 = (void*)0;
    int *l_1165 = &l_1098;
    int *l_1166 = &g_317;
    int l_1167 = 0x256D16D8L;
    int *l_1168 = &l_1080;
    int *l_1169 = &l_1080;
    int l_1170 = 0x11B6551EL;
    int *l_1172 = &l_1135;
    int *l_1173 = &l_1112;
    int *l_1174 = &l_1120;
    int *l_1175 = (void*)0;
    union U2 **l_1187 = &g_486;
    struct S0 *l_1190 = &g_553;
    unsigned short *l_1203 = &g_432;
    unsigned short **l_1202 = &l_1203;
    unsigned long long *l_1358 = &g_559.f2;
    union U2 **l_1368 = &g_486;
    short **l_1378 = (void*)0;
    g_1176++;
    if ((g_348.f0 < p_215))
    {
        unsigned long long *l_1181 = &g_553.f1;
        int l_1185 = 1L;
        union U2 **l_1186 = &g_486;
        int *l_1276 = &l_1185;
        struct S0 **l_1277 = &g_347;
        int l_1323 = 0x5EF8C339L;
        int l_1324 = (-1L);
        int l_1326 = 0xAD221367L;
        (**g_346) = (((((*g_207) == p_213) , l_1149) == &g_971) , (**g_346));
        (*l_1187) = (*l_1186);
        for (l_1110 = 23; (l_1110 != 28); l_1110 = safe_add_func_uint64_t_u_u(l_1110, 2))
        {
            struct S0 *l_1191 = &g_545.f0;
            unsigned *l_1198 = (void*)0;
            unsigned *l_1199 = &g_602;
            unsigned short **l_1204 = (void*)0;
            int l_1247 = 0x6EED263FL;
            int l_1266 = (-2L);
            int l_1267 = 0x61DB7370L;
            (*g_346) = (l_1191 = l_1190);

            ;
            ;
            if ((*l_1165))
                break;
            (*g_346) = (((safe_mod_func_uint32_t_u_u((((safe_div_func_uint32_t_u_u(((((safe_rshift_func_int16_t_s_s((((((*l_1199) |= 0UL) , l_1181) == (void*)0) | (safe_div_func_uint32_t_u_u((func_229(&l_1170, ((l_1204 = l_1202) != g_1205), p_216) , g_711), g_553.f4))), p_215)) != 0xB1L) & 0x8406L) == 0x6AL), p_213)) , g_966) , p_213), (-1L))) , p_214) , (void*)0);

            ;
            ;
            for (l_1080 = 0; (l_1080 > 14); l_1080++)
            {
                int l_1222 = 0L;
                long long *l_1248 = &g_724;
                short *l_1251 = &g_786;
                char l_1257 = 0x7BL;
                struct S0 **l_1278 = (void*)0;
                int l_1325 = (-10L);
                (*l_1137) ^= (-2L);
            }
        }

        ;
    }
    else
    {
        unsigned short l_1359 = 0x4EE5L;
        if ((*l_1131))
        {
            return p_213;
        }
        else
        {
            unsigned short l_1355 = 0x0D12L;
            int l_1362 = (-9L);
            l_1355--;
            (*l_1106) &= ((((l_1358 != ((l_1355 <= l_1359) , &g_658)) >= ((safe_lshift_func_uint8_t_u_u(g_1307.f0.f3, p_213)) , (l_1359 , l_1359))) , (((l_1362 = l_1359) , (*l_1160)) >= 0x3EE0BFEC0C2043F2LL)) , (*p_216));
        }
        (*g_346) = l_1190;

        ;
    }

    ;
    for (g_658 = 26; (g_658 > 8); g_658 = safe_sub_func_int8_t_s_s(g_658, 3))
    {
        unsigned short l_1367 = 0UL;
        volatile int **l_1371 = (void*)0;
        volatile int **l_1372 = (void*)0;
        volatile int **l_1373 = &g_207;
        (*p_216) = (g_348.f4 == ((*l_1102) > (safe_add_func_uint8_t_u_u(((l_1367 & (g_1315.f1 , (!(((!(l_1187 == (l_1368 = l_1187))) <= (safe_sub_func_int32_t_s_s((-3L), ((p_214 , ((**l_1202) |= ((~g_553.f3) > g_658))) | 0x372BL)))) > l_1367)))) >= p_213), g_317))));
        (*l_1373) = &g_968;

        ;
    }

    ;
    (*l_1123) &= ((safe_add_func_int64_t_s_s(func_229(p_216, ((&l_1202 != (void*)0) < (((safe_rshift_func_uint16_t_u_s(0x8DFEL, p_214)) , l_1378) == g_1379)), &l_1099), g_432)) | p_214);
    return p_213;
}







static short func_219(unsigned p_220)
{
    int *l_1065 = &g_10;
    for (g_609 = 8; (g_609 < 44); g_609++)
    {
        unsigned l_1064 = 0UL;
        int *l_1066 = &g_317;
        for (g_1056 = (-16); (g_1056 < 21); ++g_1056)
        {
            int **l_1061 = (void*)0;
            int **l_1062 = &g_1021;
            (*l_1062) = (void*)0;

            ;
            if ((0x5E78A664L > (l_1064 |= (safe_unary_minus_func_uint64_t_u(1UL)))))
            {
                l_1065 = ((*l_1062) = &g_317);

                ;
                ;
                (*g_207) &= (*l_1065);
            }
            else
            {
                if ((*g_207))
                    break;
            }

            ;
            (*l_1062) = l_1066;

            ;
        }
    }

    ;
    ;
    (*l_1065) = func_222(l_1065);
    return (*l_1065);
}







static unsigned long long func_222(int * p_223)
{
    unsigned short **l_868 = (void*)0;
    unsigned short *l_870 = (void*)0;
    unsigned short **l_869 = &l_870;
    int l_871 = 7L;
    union U1 *l_872 = &g_545;
    int l_873 = 0x565B4DB0L;
    int l_912 = 0x9193DCADL;
    int l_937 = 0L;
    int l_943 = 0x317209AEL;
    int *l_958 = &l_943;
    union U2 **l_959 = &g_486;
    unsigned char l_987 = 255UL;
    unsigned l_1013 = 0xF47472B2L;
    (*g_207) = ((&g_802 != ((*l_869) = (void*)0)) < ((((l_871 , l_872) == l_872) ^ ((0xE1L != (0xDEF8L <= func_229(&l_871, l_873, &g_317))) == l_873)) == g_7));
    for (g_602 = 13; (g_602 >= 7); g_602 = safe_sub_func_uint16_t_u_u(g_602, 3))
    {
        int *l_876 = &g_10;
        int *l_877 = &l_871;
        int *l_878 = &l_873;
        int *l_879 = &g_10;
        int *l_880 = &g_10;
        int *l_881 = &g_317;
        int *l_882 = &g_317;
        int *l_883 = (void*)0;
        int *l_884 = &g_10;
        int *l_885 = &l_871;
        int *l_886 = &l_871;
        int *l_887 = &l_873;
        int *l_888 = &g_10;
        int *l_889 = &g_10;
        int l_890 = 0x80521CBCL;
        int *l_891 = &l_873;
        int *l_892 = &g_317;
        int *l_893 = &g_317;
        int *l_894 = &l_871;
        int *l_895 = &l_871;
        int *l_896 = &l_890;
        int l_897 = (-10L);
        int *l_898 = &l_897;
        int *l_899 = &l_873;
        int *l_900 = &l_890;
        int *l_901 = &l_873;
        int *l_902 = (void*)0;
        int *l_903 = &l_897;
        int *l_904 = &l_873;
        int *l_905 = (void*)0;
        int *l_906 = &g_10;
        int *l_907 = &g_317;
        int *l_908 = &l_897;
        int *l_909 = &l_890;
        int *l_910 = (void*)0;
        int *l_911 = &g_317;
        int *l_913 = &l_890;
        int *l_914 = &l_873;
        int *l_915 = &l_871;
        int *l_916 = &l_912;
        int *l_917 = &l_890;
        int *l_918 = &g_317;
        int *l_919 = &l_890;
        int *l_920 = &l_912;
        int *l_921 = &l_873;
        int *l_922 = &l_897;
        int l_923 = (-1L);
        int l_924 = 9L;
        int *l_925 = &g_10;
        int *l_926 = &g_10;
        int *l_927 = (void*)0;
        int l_928 = 0x3B1009D2L;
        int *l_929 = &g_317;
        int *l_930 = &l_873;
        int *l_931 = &l_897;
        int *l_932 = &l_890;
        int *l_933 = &l_890;
        int *l_934 = &l_912;
        int *l_935 = &l_912;
        int *l_936 = &l_897;
        int *l_938 = &g_317;
        int *l_939 = &g_10;
        int *l_940 = &l_937;
        int *l_941 = &l_923;
        int *l_942 = &l_924;
        int *l_944 = (void*)0;
        int *l_945 = &l_871;
        int *l_946 = &l_890;
        int *l_947 = &l_871;
        int *l_948 = (void*)0;
        int *l_950 = &g_10;
        int *l_951 = &l_897;
        int *l_952 = &l_912;
        int *l_953 = &g_10;
        int *l_954 = &l_897;
        ++g_955;
        if ((*g_207))
            break;
        if (((func_229(&l_924, g_786, &l_897) , ((*l_886) && func_229(&l_890, func_229(p_223, func_229(l_958, (l_959 != l_959), &g_10), p_223), p_223))) <= 0xF978L))
        {
            unsigned char l_960 = 0xECL;
            int l_963 = (-9L);
            int l_965 = (-10L);
            int *l_970 = &l_897;
            (**g_346) = (*g_347);
            (*l_880) ^= (0x113C6A15L && (*l_921));
            l_960--;
            g_971++;
        }
        else
        {
            (*g_347) = (**g_346);
        }
        if ((*g_207))
            continue;
    }
    for (g_545.f1 = 0; (g_545.f1 <= 27); g_545.f1++)
    {
        char l_980 = 0x92L;
        int l_1002 = 0xE8E52504L;
        int l_1005 = 0xF87CCE1FL;
        if ((((0L <= ((safe_mod_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(l_980, ((((**g_346) , ((0xBCFB0773L && (safe_div_func_uint64_t_u_u(((g_802 > ((safe_lshift_func_int8_t_s_s(g_317, l_980)) <= ((*l_958) > (((*l_958) <= 0x3B3FL) ^ 0L)))) && l_980), l_980))) || l_980)) != 0x18E61EBABCDA5AECLL) <= (*l_958)))) , 0xE6D289CBL), 0x9BB5F4D9L)) > 2L)) > l_987) , (*l_958)))
        {
            struct S0 *l_988 = &g_553;
            int *l_989 = &g_317;
            int *l_990 = &l_912;
            int *l_991 = (void*)0;
            int *l_992 = (void*)0;
            int *l_993 = &l_873;
            int *l_994 = &l_873;
            int *l_995 = &l_943;
            int *l_996 = &l_943;
            int *l_997 = &l_937;
            int *l_998 = &g_10;
            int *l_999 = (void*)0;
            int *l_1000 = &l_912;
            int *l_1001 = &l_873;
            int *l_1003 = (void*)0;
            int *l_1004 = &g_317;
            int *l_1006 = &l_871;
            int *l_1007 = (void*)0;
            int *l_1008 = &l_1002;
            int *l_1009 = &l_937;
            int *l_1010 = &g_10;
            int *l_1011 = (void*)0;
            int *l_1012 = &l_1002;
            (*g_346) = (l_988 = (*g_346));

            ;
            l_1013++;
        }
        else
        {
            unsigned long long *l_1016 = &g_553.f1;
            unsigned long long *l_1017 = &g_436.f1;
            int **l_1019 = &l_958;
            int **l_1020 = (void*)0;
            if ((func_229(&g_10, g_955, (((*l_1017) = ((*l_1016) = func_229(&l_937, (g_559.f0 , func_229(&g_10, ((*g_346) == (*g_346)), &g_317)), &g_317))) , &l_912)) || 0x13L))
            {
                if ((*g_207))
                    break;
            }
            else
            {
                unsigned char l_1018 = 255UL;
                (*l_958) ^= func_229(&g_10, ((func_229(&l_1002, l_1018, &g_10) != g_7) ^ g_559.f4), p_223);
            }

            g_1021 = ((*l_1019) = &g_10);

            ;
            ;
        }
        for (g_317 = 0; (g_317 != 4); ++g_317)
        {
            int *l_1024 = &l_912;
            int *l_1025 = &g_10;
            int *l_1026 = &l_1002;
            int *l_1027 = &l_912;
            int *l_1028 = &l_1005;
            int *l_1029 = (void*)0;
            int *l_1030 = &g_10;
            int *l_1031 = &g_10;
            int *l_1032 = &l_1005;
            int *l_1033 = &l_1002;
            int *l_1034 = (void*)0;
            int *l_1035 = &l_1005;
            int *l_1036 = &l_873;
            int *l_1037 = &l_871;
            int *l_1038 = &l_1005;
            int *l_1039 = &l_1002;
            int *l_1040 = (void*)0;
            int *l_1041 = &l_943;
            int *l_1042 = &l_873;
            int *l_1043 = (void*)0;
            int *l_1044 = (void*)0;
            int *l_1045 = (void*)0;
            int *l_1046 = &l_1002;
            int *l_1047 = &l_912;
            int *l_1048 = &l_871;
            int *l_1049 = &l_873;
            ++g_1050;
            if ((*l_958))
                break;
        }
    }

    ;
    return g_208;
}







static int * func_224(unsigned short p_225, unsigned p_226)
{
    unsigned l_255 = 4294967295UL;
    int l_274 = (-9L);
    int l_287 = 0x8A8CD10DL;
    int l_324 = 0xE5D39A1AL;
    unsigned long long *l_499 = &g_348.f1;
    union U2 **l_539 = &g_486;
    short l_588 = (-1L);
    int l_594 = 3L;
    int l_710 = 0x60D0EFD3L;
    union U1 *l_806 = &g_545;
    (*g_207) ^= ((void*)0 != &g_10);
    if (p_226)
    {
        int *l_233 = (void*)0;
        int l_272 = 1L;
        unsigned long long l_336 = 0UL;
        int *l_343 = (void*)0;
        char l_350 = 0x51L;
        int l_384 = 1L;
        union U2 **l_487 = &g_486;
        struct S0 *l_558 = &g_559;
        union U2 *l_583 = &g_436;
        int *l_593 = (void*)0;
        int l_698 = 0x35FD4406L;
        int l_704 = 0xA9BDF50DL;
        if (((p_225 , func_229(l_233, g_7, l_233)) || g_208))
        {
            unsigned l_244 = 0x970CE46CL;
            for (p_225 = 0; (p_225 < 24); p_225 = safe_add_func_uint32_t_u_u(p_225, 2))
            {
                volatile int **l_241 = &g_207;
                volatile int ***l_240 = &l_241;
                volatile struct S0 *l_243 = &g_242;
                (*l_240) = &g_207;
                (*l_243) = g_242;
            }
            (*g_207) |= l_244;
        }
        else
        {
            int l_247 = 6L;
            int *l_258 = (void*)0;
            int *l_259 = &g_10;
            int *l_260 = &g_10;
            int *l_261 = &g_10;
            int *l_262 = &g_10;
            int *l_263 = &g_10;
            int *l_264 = &g_10;
            int *l_265 = &g_10;
            int *l_266 = &g_10;
            int *l_267 = &g_10;
            int *l_268 = &g_10;
            int *l_269 = &g_10;
            int l_270 = (-4L);
            int *l_271 = &l_270;
            int *l_273 = &l_272;
            int *l_275 = (void*)0;
            int *l_276 = &l_270;
            int *l_277 = &g_10;
            int *l_278 = &l_270;
            int *l_279 = (void*)0;
            int *l_280 = (void*)0;
            int l_281 = 1L;
            int *l_282 = (void*)0;
            int *l_283 = &l_274;
            int *l_284 = (void*)0;
            int *l_285 = (void*)0;
            int *l_286 = (void*)0;
            int *l_288 = (void*)0;
            int *l_289 = &l_281;
            int *l_290 = &l_274;
            int *l_291 = (void*)0;
            int l_292 = 0xCDBDE630L;
            int *l_293 = &l_281;
            int *l_294 = &l_274;
            int *l_295 = &l_270;
            int *l_296 = (void*)0;
            int *l_297 = &l_270;
            int *l_298 = &l_274;
            int *l_299 = &l_292;
            int *l_300 = (void*)0;
            int *l_301 = &l_274;
            int *l_302 = (void*)0;
            int *l_303 = &l_270;
            int *l_304 = &l_281;
            int *l_305 = (void*)0;
            int *l_306 = &g_10;
            int *l_307 = &l_287;
            int *l_308 = (void*)0;
            int l_309 = 1L;
            int *l_310 = &g_10;
            int *l_311 = &g_10;
            int *l_312 = &l_272;
            int *l_313 = &l_292;
            int *l_314 = (void*)0;
            int *l_315 = &g_10;
            int l_316 = 1L;
            int *l_318 = &l_287;
            int *l_319 = &l_309;
            int *l_320 = &l_309;
            int *l_321 = &g_10;
            int *l_322 = (void*)0;
            int *l_323 = &l_270;
            int *l_325 = &l_272;
            int *l_326 = (void*)0;
            int *l_327 = (void*)0;
            int *l_328 = (void*)0;
            int *l_329 = &l_281;
            int *l_330 = &l_292;
            int *l_331 = (void*)0;
            int *l_332 = &l_270;
            int *l_333 = (void*)0;
            int *l_334 = (void*)0;
            int *l_335 = &l_272;
            for (g_197 = (-5); (g_197 > 31); ++g_197)
            {
                int *l_248 = (void*)0;
                int *l_249 = &g_10;
                int l_250 = 0L;
                int *l_251 = &l_250;
                int *l_252 = &g_10;
                int *l_254 = &g_10;
                if (p_226)
                    break;
                --l_255;
            }
            l_336--;
            return &g_317;


        }
        if (p_225)
        {
            int *l_340 = &l_272;
            unsigned long long *l_345 = &l_336;
            int l_370 = 0xB425CBB4L;
            int l_424 = 1L;
            struct S0 ***l_481 = &g_346;
            union U2 *l_484 = &g_436;
            union U2 **l_483 = &l_484;
            union U1 *l_544 = &g_545;
            union U2 *l_570 = &g_436;
            if ((func_229(((safe_unary_minus_func_int16_t_s((p_226 < 18446744073709551615UL))) , &l_272), (func_229(l_340, (safe_sub_func_int32_t_s_s((((*l_345) = (func_229(l_343, func_229(&l_287, (safe_unary_minus_func_uint16_t_u((p_225 , (func_229(&l_287, g_242.f2, &l_287) , (*l_340))))), l_340), &l_324) | g_89)) , 0x6E4D920EL), 0xDCB43784L)), l_340) , p_225), &l_287) || (*l_340)))
            {
                struct S0 ***l_349 = &g_346;
                int l_351 = 1L;
                int l_371 = 6L;
                int l_394 = (-6L);
                int l_395 = 1L;
                int l_397 = 0x8A188AF3L;
                unsigned l_403 = 0xEB0DE8B8L;
                union U2 *l_435 = &g_436;
                (*l_349) = g_346;
                l_351 &= (l_350 |= (*g_207));
                if ((*g_207))
                {
                    unsigned l_391 = 0UL;
                    int l_412 = (-3L);
                    union U2 **l_482 = &l_435;
                    if (((*l_340) = (*g_207)))
                    {
                        int **l_352 = &l_233;
                        (*l_352) = &l_351;

                        ;
                        (*g_207) = p_225;
                    }
                    else
                    {
                        unsigned l_353 = 0x79CE0627L;
                        int l_360 = 2L;
                        int *l_361 = &l_351;
                        int *l_362 = &l_324;
                        int *l_363 = &g_10;
                        int *l_364 = &l_287;
                        int *l_365 = (void*)0;
                        int *l_366 = &g_317;
                        int *l_367 = &l_360;
                        int *l_368 = &l_360;
                        int *l_369 = &l_274;
                        int *l_372 = &l_371;
                        int *l_373 = &l_324;
                        int *l_374 = (void*)0;
                        int *l_375 = &g_10;
                        int *l_376 = &l_272;
                        int *l_377 = &l_360;
                        int *l_378 = (void*)0;
                        int *l_379 = &l_360;
                        int *l_380 = &l_371;
                        int *l_381 = &g_10;
                        int *l_382 = (void*)0;
                        int *l_383 = (void*)0;
                        int *l_385 = &l_360;
                        int *l_386 = &l_274;
                        int *l_387 = &l_287;
                        int *l_388 = &l_384;
                        int *l_389 = &g_10;
                        int *l_390 = &l_371;
                        int *l_396 = (void*)0;
                        int *l_398 = &l_371;
                        int *l_399 = &l_384;
                        int *l_400 = &l_370;
                        int *l_401 = &l_360;
                        int *l_402 = &g_10;
                        (*l_340) = ((p_226 & l_255) <= ((func_229((((g_242.f3 <= (g_348.f1 , l_255)) <= ((*l_340) & (l_353 && (p_226 > ((((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(p_225, g_10)), g_7)) , &g_207) != (void*)0) >= g_348.f1))))) , l_340), g_197, &g_10) >= p_226) && 0xC7201BE58EEB3F82LL));
                        l_391--;
                        ++l_403;
                    }

                    ;
                    for (l_394 = 25; (l_394 >= 4); l_394 = safe_sub_func_uint16_t_u_u(l_394, 1))
                    {
                        int *l_408 = &l_274;
                        int *l_409 = &l_395;
                        int *l_410 = &g_317;
                        int *l_411 = (void*)0;
                        int *l_413 = &g_317;
                        int *l_414 = &l_272;
                        int *l_415 = &g_317;
                        int l_416 = 0L;
                        int *l_417 = &l_371;
                        int *l_418 = &l_416;
                        int *l_419 = (void*)0;
                        int *l_420 = &l_351;
                        int *l_421 = &l_370;
                        int *l_422 = &l_287;
                        int *l_423 = &l_324;
                        int *l_425 = &g_10;
                        int *l_426 = &l_324;
                        int *l_427 = &g_317;
                        int *l_429 = &g_317;
                        int *l_431 = &l_370;
                        union U2 **l_437 = (void*)0;
                        union U2 **l_438 = &l_435;
                        g_432--;
                        (*l_438) = l_435;
                    }
                    for (g_317 = 0; (g_317 == 1); ++g_317)
                    {
                        int *l_441 = (void*)0;
                        int *l_442 = &l_412;
                        int *l_443 = &l_351;
                        int *l_444 = &l_395;
                        int *l_445 = &l_371;
                        int *l_446 = &l_424;
                        int *l_447 = (void*)0;
                        int *l_448 = &l_384;
                        int *l_449 = &l_272;
                        int *l_450 = &l_351;
                        int *l_451 = &l_424;
                        int *l_452 = &l_424;
                        int *l_453 = &l_351;
                        int *l_454 = &l_287;
                        int *l_455 = &l_395;
                        int *l_456 = (void*)0;
                        int *l_457 = &l_287;
                        int *l_458 = &l_395;
                        int *l_459 = &l_287;
                        int *l_460 = (void*)0;
                        int *l_461 = &l_351;
                        int *l_462 = (void*)0;
                        int *l_463 = (void*)0;
                        int *l_464 = &g_10;
                        int *l_465 = &l_397;
                        int *l_466 = (void*)0;
                        int *l_467 = &l_412;
                        int *l_468 = &l_324;
                        int *l_469 = (void*)0;
                        int *l_470 = (void*)0;
                        int *l_471 = &l_395;
                        int *l_472 = &l_287;
                        int *l_473 = &l_397;
                        int *l_474 = &l_324;
                        int *l_475 = (void*)0;
                        int *l_476 = (void*)0;
                        int *l_477 = &l_395;
                        ++g_478;
                        if ((*g_207))
                            break;
                    }
                    (*l_340) ^= (0x01008DDBL | ((((void*)0 == l_481) , l_482) != (l_487 = (g_485 = l_483))));

                    ;
                    ;
                }
                else
                {
                    (*g_207) &= ((safe_add_func_uint8_t_u_u(g_348.f4, (1UL > 0UL))) | (p_226 ^ p_225));
                }

                ;
                ;
                ;
            }
            else
            {
                int *l_498 = (void*)0;
                unsigned char *l_537 = &g_7;
                unsigned *l_538 = &l_255;
                struct S0 *l_552 = &g_553;
                (*g_207) ^= (-1L);
                for (g_10 = (-13); (g_10 != (-30)); g_10 = safe_sub_func_int8_t_s_s(g_10, 7))
                {
                    unsigned short *l_509 = &g_348.f4;
                    int *l_516 = &l_424;
                    unsigned *l_517 = &l_255;
                    (*g_207) ^= (&g_486 != (p_226 , &g_486));
                    g_317 |= (safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u(g_89, 4)) || (safe_sub_func_uint32_t_u_u(func_229(l_498, p_225, &l_384), 1UL))), ((l_499 == (void*)0) <= g_7)));
                    for (l_272 = 0; (l_272 == 20); l_272 = safe_add_func_uint8_t_u_u(l_272, 4))
                    {
                        long long l_504 = (-4L);
                        (*g_207) = ((9L < (safe_div_func_int64_t_s_s(p_225, 18446744073709551615UL))) >= l_504);
                        if (p_225)
                            break;
                        (*g_207) |= p_225;
                    }
                    if ((safe_mod_func_uint64_t_u_u((safe_div_func_uint16_t_u_u(((*l_509) ^= 0xACF0L), (safe_mod_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((safe_sub_func_int64_t_s_s((p_225 < (func_229(l_516, (++(*l_517)), &g_10) || (p_225 ^ (safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((*l_340), (g_348.f2 , ((safe_sub_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(g_348.f3, g_10)) == (*l_516)), p_225)) <= g_89)))), p_226))))), 18446744073709551609UL)), 0x7CL)) != p_226), g_89)))), (*l_340))))
                    {
                        if (p_225)
                            break;
                        if ((*g_207))
                            break;
                    }
                    else
                    {
                        long long *l_530 = &g_428;
                        char *l_531 = &l_350;
                        (*l_516) |= (func_229(&g_10, g_348.f3, l_498) <= (l_274 = ((*l_531) = (safe_add_func_int64_t_s_s(((*l_530) = p_226), (g_432 > ((*l_340) = 0x2AB77A99L)))))));
                        return l_498;


                    }
                }
                if (func_229(&g_10, func_229(l_498, ((*l_538) = ((((safe_unary_minus_func_uint16_t_u((p_226 != (*l_340)))) , g_242.f1) , (safe_add_func_int16_t_s_s(((((g_242.f1 == p_226) & ((g_436.f2 >= ((safe_rshift_func_uint8_t_u_u(((*l_537) |= (g_89 | p_225)), p_226)) && 1L)) && 0xB3F67B546B69338ELL)) <= (*l_340)) <= l_255), g_197))) <= p_225)), &g_317), &l_370))
                {
                    union U2 ***l_540 = &l_487;
                    int l_560 = 0x08006A75L;
                    int *l_563 = &l_287;
                    (*l_540) = l_539;
                    for (g_428 = 0; (g_428 >= (-3)); g_428 = safe_sub_func_uint8_t_u_u(g_428, 4))
                    {
                        volatile int **l_543 = &g_207;
                        union U1 **l_546 = &l_544;
                        int l_551 = (-8L);
                        (*l_543) = &g_208;
                        (*l_546) = l_544;
                        (*l_340) &= 0L;
                        (**l_543) = ((**g_346) , (0x4E87E4CCL == ((safe_rshift_func_int8_t_s_s((**l_543), (((void*)0 == &l_539) || (((p_225 & l_551) <= (l_552 == ((~(safe_add_func_int64_t_s_s((((safe_div_func_uint32_t_u_u(((void*)0 == l_499), 0x67E6C5E4L)) && p_226) , p_225), p_225))) , l_558))) < l_560)))) < p_226)));
                    }
                    (*l_563) &= func_229(&l_424, ((((safe_sub_func_uint8_t_u_u(((func_229(l_563, (safe_rshift_func_int8_t_s_s((safe_div_func_int16_t_s_s(((~2L) != func_229((g_348.f4 , l_538), ((safe_rshift_func_int16_t_s_u(((*g_485) != l_570), 9)) | 1L), &g_317)), g_553.f2)), 3)), l_538) || p_225) , l_255), g_428)) & p_225) & (*l_340)) >= p_226), &l_370);
                }
                else
                {
                    l_287 = (l_324 = (-4L));
                }
                for (g_436.f2 = 0; (g_436.f2 != 35); g_436.f2 = safe_add_func_int16_t_s_s(g_436.f2, 6))
                {
                    int **l_573 = &l_343;
                    (*l_573) = &g_317;

                    ;
                    if (l_287)
                        continue;
                    (*g_347) = (*g_347);
                }

                ;
                            }


            ;
                        ;
            ;
        }
        else
        {
            unsigned l_581 = 0x481E0D7EL;
            int *l_582 = &g_10;
            (*l_582) &= ((((safe_lshift_func_uint8_t_u_s(((g_253 | (p_226 & (((g_197 | ((((safe_lshift_func_int16_t_s_u((-1L), 4)) == g_432) , p_225) >= (safe_unary_minus_func_uint32_t_u((0x1AL > ((safe_rshift_func_int8_t_s_s((((((l_581 == p_225) <= g_553.f2) , (-9L)) , 0x4E7EDF301F82277DLL) | 0x43EFEFC4BC694DAFLL), g_197)) <= p_225)))))) && l_287) == 0x85L))) , l_287), 2)) == p_225) , (*l_558)) , (*g_207));
        }


        ;


        (*l_539) = l_583;
        if (((((safe_add_func_int32_t_s_s(((safe_sub_func_int64_t_s_s(0x7B3EE37B53C0D599LL, l_588)) <= ((*l_499) = ((0xFDC9L < ((((safe_rshift_func_int16_t_s_s(((l_594 = ((((2UL >= (safe_div_func_uint16_t_u_u((g_559.f0 , func_229(&l_324, (~p_226), &g_317)), 2UL))) | 3UL) && p_225) & 0x6C9DDDC7L)) | g_10), 7)) , g_545.f0.f3) , g_545.f0.f5) , g_242.f2)) >= l_255))), 0x8301F91BL)) == 18446744073709551615UL) , g_317) ^ g_89))
        {
            int *l_595 = (void*)0;
            int **l_596 = &l_233;
            int l_607 = 1L;
            int l_610 = 0x0928FCB1L;
            unsigned l_616 = 18446744073709551610UL;
            int *l_619 = &g_10;
            int *l_620 = &g_10;
            int *l_621 = &g_10;
            int *l_622 = &l_274;
            int *l_623 = &l_324;
            int *l_624 = &l_272;
            int *l_625 = (void*)0;
            int *l_626 = &l_272;
            int *l_627 = &g_317;
            int *l_628 = &g_317;
            int *l_629 = &l_272;
            int *l_630 = &g_317;
            int *l_631 = &g_10;
            int *l_632 = &l_610;
            int *l_633 = &l_272;
            int *l_634 = &l_274;
            int *l_635 = &g_10;
            int *l_636 = &l_324;
            int *l_637 = &l_324;
            int *l_638 = &l_607;
            int *l_639 = &l_607;
            int *l_640 = &l_607;
            int *l_641 = &l_607;
            int *l_642 = &g_317;
            int *l_643 = &l_272;
            int *l_644 = &l_610;
            int *l_645 = &l_287;
            int *l_646 = (void*)0;
            int *l_648 = &g_317;
            int *l_649 = &g_317;
            int *l_650 = &l_272;
            int *l_651 = &g_317;
            int *l_652 = (void*)0;
            int *l_653 = &l_384;
            int *l_654 = &l_272;
            int *l_655 = &l_384;
            int *l_656 = &l_274;
            int *l_657 = &l_610;
            (*l_596) = l_595;

            ;
            for (g_559.f2 = 0; (g_559.f2 < 48); ++g_559.f2)
            {
                unsigned *l_601 = &g_602;
                unsigned *l_608 = &g_609;
                int l_615 = 0xF38FB1F7L;
                l_610 &= (l_255 < ((safe_lshift_func_uint16_t_u_s(((func_229(((*g_486) , &g_10), g_436.f2, &g_317) ^ (~(0xD2994937L > ((*l_601)++)))) & (((g_89 < ((*l_608) = (safe_add_func_uint64_t_u_u(0UL, l_607)))) , (-10L)) != 0x45L)), 1)) == 0xA5EF7343141E1F0ALL));
                for (l_588 = 0; (l_588 != (-2)); --l_588)
                {
                    unsigned l_613 = 0x586A8A5BL;
                    int l_614 = 8L;
                    l_614 |= l_613;
                    return &g_10;


                }
                (*g_207) = ((p_225 | (*g_207)) , l_615);
                l_616--;
            }
            ++g_658;
        }
        else
        {
            short l_661 = 0x5186L;
            int *l_662 = &l_324;
            int *l_663 = &l_384;
            int *l_664 = (void*)0;
            int *l_665 = (void*)0;
            int *l_666 = &l_274;
            int *l_667 = &l_324;
            int *l_668 = &l_384;
            int *l_669 = &l_384;
            int l_670 = 0xC590239DL;
            int l_671 = 0L;
            int *l_672 = &l_287;
            int *l_673 = (void*)0;
            int *l_674 = (void*)0;
            int *l_675 = (void*)0;
            int *l_676 = (void*)0;
            int l_677 = 0x97027DA6L;
            int *l_678 = (void*)0;
            int *l_679 = &l_384;
            int *l_680 = &l_670;
            int *l_681 = &l_287;
            int *l_682 = &l_274;
            int l_683 = (-4L);
            int *l_684 = (void*)0;
            int *l_685 = &l_683;
            int *l_686 = (void*)0;
            int *l_687 = &l_671;
            int *l_688 = (void*)0;
            int *l_689 = &g_317;
            int *l_690 = &l_683;
            int *l_691 = &g_317;
            int *l_692 = (void*)0;
            int *l_693 = &g_10;
            int *l_694 = &l_671;
            int *l_695 = &l_670;
            int *l_696 = &l_274;
            int *l_697 = &g_317;
            int *l_699 = (void*)0;
            int *l_701 = &l_677;
            int *l_702 = &l_384;
            int *l_703 = &l_677;
            int *l_705 = &l_671;
            int *l_706 = &l_670;
            int l_707 = 8L;
            int *l_708 = &l_384;
            int *l_709 = &l_324;
            union U2 *l_714 = &g_436;
            ++g_711;
            (*l_685) = ((*l_667) &= ((l_714 = (*l_539)) == (void*)0));
        }
    }
    else
    {
        long long *l_722 = &g_428;
        long long *l_723 = &g_724;
        unsigned short *l_729 = &g_545.f0.f4;
        int l_746 = 0xD8D0A3EDL;
        int l_792 = 0xD50ED881L;
        int l_800 = 1L;
        union U2 *l_805 = &g_436;
        short l_828 = 0x73CBL;
        union U1 **l_860 = &l_806;
        unsigned long long l_866 = 5UL;
        int *l_867 = &l_287;
        if ((g_317 , (safe_lshift_func_uint16_t_u_s((((+(0x5ED4EA07L & (safe_rshift_func_uint16_t_u_u((g_719 , (((safe_sub_func_uint16_t_u_u(((g_317 , ((*l_723) = ((*l_722) = (-3L)))) | (safe_rshift_func_uint16_t_u_u(l_594, 12))), ((p_226 | 0x55L) != (safe_rshift_func_uint16_t_u_s(((*l_729) = ((void*)0 == &g_347)), 5))))) & 0x70EDC74811CE01D7LL) == g_436.f0)), g_609)))) , &g_197) == &g_197), 10))))
        {
            int *l_730 = &g_317;
            int *l_731 = &g_10;
            int *l_732 = (void*)0;
            int *l_733 = &g_10;
            int *l_734 = &g_317;
            int *l_735 = (void*)0;
            int *l_736 = (void*)0;
            int *l_737 = (void*)0;
            int *l_738 = &g_317;
            int *l_739 = &l_287;
            int *l_740 = &l_324;
            int *l_741 = &l_324;
            int *l_742 = (void*)0;
            int *l_743 = &l_274;
            int *l_744 = &l_287;
            int *l_745 = &l_710;
            int *l_747 = &g_317;
            int l_748 = 0x9BB82E0FL;
            int *l_749 = &l_746;
            int *l_750 = &l_748;
            int *l_751 = (void*)0;
            int *l_752 = &l_287;
            int *l_753 = &l_748;
            int *l_754 = &g_10;
            int *l_755 = &g_317;
            int *l_756 = (void*)0;
            int *l_757 = &l_710;
            int *l_758 = &g_317;
            int *l_759 = &l_748;
            int *l_760 = &l_710;
            int *l_761 = (void*)0;
            int *l_762 = &l_748;
            int *l_763 = &l_274;
            int *l_764 = &g_317;
            int *l_765 = &l_746;
            int *l_766 = &g_317;
            int *l_767 = &l_710;
            int *l_769 = (void*)0;
            int *l_770 = &l_710;
            int *l_771 = &g_10;
            int *l_772 = &l_324;
            int *l_773 = &l_746;
            int *l_774 = &l_287;
            int *l_775 = &g_10;
            int *l_776 = &l_710;
            int *l_777 = &l_748;
            int *l_778 = &l_287;
            int *l_779 = &l_748;
            int *l_780 = &l_324;
            int l_781 = (-1L);
            int *l_782 = &l_746;
            int *l_783 = &l_746;
            int *l_784 = &l_710;
            int *l_785 = &l_781;
            int *l_787 = &l_746;
            int *l_788 = (void*)0;
            int *l_789 = &g_317;
            int *l_790 = (void*)0;
            int *l_791 = &l_274;
            int *l_793 = &l_746;
            int *l_794 = (void*)0;
            int *l_796 = &g_317;
            int *l_797 = (void*)0;
            int *l_798 = (void*)0;
            int *l_799 = &l_748;
            int l_801 = 0x464F8CF7L;
            g_802++;
        }
        else
        {
            union U1 **l_807 = &l_806;
            (*l_539) = l_805;
            l_746 = (g_719 , 0x38434438L);
            (*l_807) = l_806;
        }
        (*g_207) = (safe_sub_func_int64_t_s_s(l_746, (-1L)));
        for (g_658 = 10; (g_658 >= 20); g_658 = safe_add_func_int32_t_s_s(g_658, 6))
        {
            int *l_812 = &l_710;
            int *l_813 = &l_710;
            int *l_814 = &l_800;
            int *l_815 = &l_746;
            int *l_816 = (void*)0;
            int *l_817 = &l_746;
            int *l_818 = &l_710;
            int *l_819 = &g_10;
            int *l_820 = &l_710;
            int *l_821 = &g_317;
            int *l_822 = &l_792;
            int *l_823 = (void*)0;
            int *l_824 = &l_710;
            int *l_825 = (void*)0;
            int *l_826 = &g_10;
            int *l_827 = &l_287;
            int *l_829 = &l_274;
            int *l_830 = &l_746;
            int l_831 = 0x6C52450AL;
            int *l_832 = (void*)0;
            int *l_833 = (void*)0;
            int *l_834 = &l_800;
            int *l_835 = &l_710;
            int *l_836 = &l_274;
            int *l_837 = (void*)0;
            int *l_838 = &l_710;
            int *l_839 = &g_317;
            int *l_840 = &l_792;
            int *l_841 = &l_274;
            int *l_842 = &g_10;
            int *l_843 = &g_317;
            int *l_844 = &l_746;
            int *l_845 = &l_746;
            int *l_846 = &l_800;
            int *l_847 = &l_746;
            int *l_848 = &l_746;
            int *l_849 = &l_710;
            int *l_850 = &l_800;
            int *l_851 = &l_274;
            int *l_852 = (void*)0;
            unsigned l_853 = 0x1A585685L;
            char *l_856 = &g_857;
            union U1 **l_861 = &l_806;
            l_853++;
            (*g_207) |= l_274;
            (*l_824) ^= (g_559.f3 < p_226);
            (*l_814) |= (((*l_856) = p_226) && (safe_sub_func_uint32_t_u_u(g_141, ((((*l_827) &= p_226) , (p_226 , l_860)) != (((void*)0 != &p_226) , l_861)))));
        }
        (*g_207) = (func_229(&l_274, ((void*)0 == &g_711), (func_229(&l_792, (safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(func_229(((**g_485) , &l_274), g_197, &l_800), l_866)) , g_432), 0xE128L)), l_867) , (void*)0)) , (*l_867));
    }


    return &g_317;


}







static char func_229(int * p_230, unsigned p_231, int * p_232)
{
    char l_234 = 0L;
    unsigned short l_235 = 0x51F0L;
    (*g_207) ^= l_234;
    --l_235;
    return p_231;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_242.f0, "g_242.f0", print_hash_value);
    transparent_crc(g_242.f1, "g_242.f1", print_hash_value);
    transparent_crc(g_242.f2, "g_242.f2", print_hash_value);
    transparent_crc(g_242.f3, "g_242.f3", print_hash_value);
    transparent_crc(g_242.f4, "g_242.f4", print_hash_value);
    transparent_crc(g_242.f5, "g_242.f5", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_317, "g_317", print_hash_value);
    transparent_crc(g_348.f0, "g_348.f0", print_hash_value);
    transparent_crc(g_348.f1, "g_348.f1", print_hash_value);
    transparent_crc(g_348.f2, "g_348.f2", print_hash_value);
    transparent_crc(g_348.f3, "g_348.f3", print_hash_value);
    transparent_crc(g_348.f4, "g_348.f4", print_hash_value);
    transparent_crc(g_348.f5, "g_348.f5", print_hash_value);
    transparent_crc(g_428, "g_428", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_432, "g_432", print_hash_value);
    transparent_crc(g_436.f2, "g_436.f2", print_hash_value);
    transparent_crc(g_478, "g_478", print_hash_value);
    transparent_crc(g_545.f1, "g_545.f1", print_hash_value);
    transparent_crc(g_545.f2, "g_545.f2", print_hash_value);
    transparent_crc(g_545.f3, "g_545.f3", print_hash_value);
    transparent_crc(g_553.f0, "g_553.f0", print_hash_value);
    transparent_crc(g_553.f1, "g_553.f1", print_hash_value);
    transparent_crc(g_553.f2, "g_553.f2", print_hash_value);
    transparent_crc(g_553.f3, "g_553.f3", print_hash_value);
    transparent_crc(g_553.f4, "g_553.f4", print_hash_value);
    transparent_crc(g_553.f5, "g_553.f5", print_hash_value);
    transparent_crc(g_559.f0, "g_559.f0", print_hash_value);
    transparent_crc(g_559.f1, "g_559.f1", print_hash_value);
    transparent_crc(g_559.f2, "g_559.f2", print_hash_value);
    transparent_crc(g_559.f3, "g_559.f3", print_hash_value);
    transparent_crc(g_559.f4, "g_559.f4", print_hash_value);
    transparent_crc(g_559.f5, "g_559.f5", print_hash_value);
    transparent_crc(g_602, "g_602", print_hash_value);
    transparent_crc(g_609, "g_609", print_hash_value);
    transparent_crc(g_647, "g_647", print_hash_value);
    transparent_crc(g_658, "g_658", print_hash_value);
    transparent_crc(g_700, "g_700", print_hash_value);
    transparent_crc(g_711, "g_711", print_hash_value);
    transparent_crc(g_719.f0.f0, "g_719.f0.f0", print_hash_value);
    transparent_crc(g_719.f0.f1, "g_719.f0.f1", print_hash_value);
    transparent_crc(g_719.f0.f2, "g_719.f0.f2", print_hash_value);
    transparent_crc(g_719.f0.f3, "g_719.f0.f3", print_hash_value);
    transparent_crc(g_719.f0.f4, "g_719.f0.f4", print_hash_value);
    transparent_crc(g_719.f0.f5, "g_719.f0.f5", print_hash_value);
    transparent_crc(g_724, "g_724", print_hash_value);
    transparent_crc(g_768, "g_768", print_hash_value);
    transparent_crc(g_786, "g_786", print_hash_value);
    transparent_crc(g_795, "g_795", print_hash_value);
    transparent_crc(g_802, "g_802", print_hash_value);
    transparent_crc(g_857, "g_857", print_hash_value);
    transparent_crc(g_949, "g_949", print_hash_value);
    transparent_crc(g_955, "g_955", print_hash_value);
    transparent_crc(g_964, "g_964", print_hash_value);
    transparent_crc(g_966, "g_966", print_hash_value);
    transparent_crc(g_967, "g_967", print_hash_value);
    transparent_crc(g_968, "g_968", print_hash_value);
    transparent_crc(g_969, "g_969", print_hash_value);
    transparent_crc(g_971, "g_971", print_hash_value);
    transparent_crc(g_1050, "g_1050", print_hash_value);
    transparent_crc(g_1056, "g_1056", print_hash_value);
    transparent_crc(g_1171, "g_1171", print_hash_value);
    transparent_crc(g_1176, "g_1176", print_hash_value);
    transparent_crc(g_1270, "g_1270", print_hash_value);
    transparent_crc(g_1307.f0.f0, "g_1307.f0.f0", print_hash_value);
    transparent_crc(g_1307.f0.f1, "g_1307.f0.f1", print_hash_value);
    transparent_crc(g_1307.f0.f2, "g_1307.f0.f2", print_hash_value);
    transparent_crc(g_1307.f0.f3, "g_1307.f0.f3", print_hash_value);
    transparent_crc(g_1307.f0.f4, "g_1307.f0.f4", print_hash_value);
    transparent_crc(g_1307.f0.f5, "g_1307.f0.f5", print_hash_value);
    transparent_crc(g_1315.f0, "g_1315.f0", print_hash_value);
    transparent_crc(g_1315.f1, "g_1315.f1", print_hash_value);
    transparent_crc(g_1315.f2, "g_1315.f2", print_hash_value);
    transparent_crc(g_1315.f3, "g_1315.f3", print_hash_value);
    transparent_crc(g_1315.f4, "g_1315.f4", print_hash_value);
    transparent_crc(g_1315.f5, "g_1315.f5", print_hash_value);
    transparent_crc(g_1329, "g_1329", print_hash_value);
    transparent_crc(g_1330, "g_1330", print_hash_value);
    transparent_crc(g_1344.f0.f0, "g_1344.f0.f0", print_hash_value);
    transparent_crc(g_1344.f0.f1, "g_1344.f0.f1", print_hash_value);
    transparent_crc(g_1344.f0.f2, "g_1344.f0.f2", print_hash_value);
    transparent_crc(g_1344.f0.f3, "g_1344.f0.f3", print_hash_value);
    transparent_crc(g_1344.f0.f4, "g_1344.f0.f4", print_hash_value);
    transparent_crc(g_1344.f0.f5, "g_1344.f0.f5", print_hash_value);
    transparent_crc(g_1381.f0, "g_1381.f0", print_hash_value);
    transparent_crc(g_1381.f1, "g_1381.f1", print_hash_value);
    transparent_crc(g_1381.f2, "g_1381.f2", print_hash_value);
    transparent_crc(g_1381.f3, "g_1381.f3", print_hash_value);
    transparent_crc(g_1381.f4, "g_1381.f4", print_hash_value);
    transparent_crc(g_1381.f5, "g_1381.f5", print_hash_value);
    transparent_crc(g_1394, "g_1394", print_hash_value);
    transparent_crc(g_1405.f0, "g_1405.f0", print_hash_value);
    transparent_crc(g_1405.f1, "g_1405.f1", print_hash_value);
    transparent_crc(g_1405.f2, "g_1405.f2", print_hash_value);
    transparent_crc(g_1405.f3, "g_1405.f3", print_hash_value);
    transparent_crc(g_1405.f4, "g_1405.f4", print_hash_value);
    transparent_crc(g_1405.f5, "g_1405.f5", print_hash_value);
    transparent_crc(g_1450, "g_1450", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
