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
   signed f0 : 10;
   volatile signed f1 : 23;
   unsigned f2 : 29;
};

struct S1 {
   unsigned f0 : 6;
   signed f1 : 26;
   unsigned f2;
};


static struct S0 g_2[3] = {{7,986,1506},{7,986,1506},{7,986,1506}};
static volatile int g_3 = 0xED9A924CL;
static int g_4 = 1L;
static struct S1 g_20 = {0,-6385,0UL};
static unsigned char g_51 = 0xE2L;
static unsigned g_56[8][1][10] = {{{18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL}},{{18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL}},{{18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL}},{{18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL}},{{18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL}},{{18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL}},{{18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL}},{{18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL}}};
static int g_92[4][2] = {{0L,0x39BCA7AFL},{0L,0L},{0x39BCA7AFL,0L},{0L,0x39BCA7AFL}};
static unsigned g_93 = 0UL;
static short g_133 = 0x5E37L;
static unsigned short g_138 = 0xB5C0L;
static struct S1 g_142 = {2,1890,0UL};
static unsigned g_179 = 1UL;
static int g_191 = 3L;
static char g_208 = 1L;
static unsigned char g_229 = 0x1BL;
static struct S0 g_235 = {5,-243,10602};
static int g_263 = 0L;
static struct S0 g_266 = {-10,2713,15160};
static unsigned g_354 = 0UL;
static struct S0 g_368 = {5,-594,18382};
static struct S0 g_369 = {2,-818,3923};
static volatile int g_380[2][6] = {{0x14680039L,0x14680039L,0x14680039L,0x14680039L,0x14680039L,0x14680039L},{0x14680039L,0x14680039L,0x14680039L,0x14680039L,0x14680039L,0x14680039L}};
static unsigned short g_435 = 0x3299L;
static struct S0 g_447 = {-25,1611,12922};
static struct S0 g_468 = {7,1198,20851};
static volatile struct S0 g_503 = {-28,1151,9876};
static volatile struct S0 g_504[8][2][9] = {{{{-10,2211,12608},{-8,930,15494},{16,-1805,20704},{-11,-2781,19825},{-13,-511,17166},{30,-762,4152},{9,-443,17921},{30,144,13734},{-11,-265,22514}},{{0,2735,20643},{1,-1573,19258},{21,-1274,15869},{1,-1411,14184},{-5,2550,16758},{28,-2825,19760},{3,2048,18969},{-9,-610,20032},{15,-2347,19701}}},{{{-0,697,7019},{-30,-1862,10166},{3,2048,18969},{16,-1805,20704},{30,2321,11480},{11,-2127,4812},{1,-1573,19258},{1,2275,15247},{-10,2211,12608}},{{-15,-403,14311},{-11,-265,22514},{-6,1609,13177},{18,2884,10621},{-6,10,7238},{11,-2127,4812},{-24,-814,17659},{5,-2630,6402},{11,-1293,9448}}},{{{5,-2630,6402},{16,-1805,20704},{1,-1573,19258},{-9,-610,20032},{-12,2015,21634},{-9,-610,20032},{1,-1573,19258},{5,-2630,6402},{-11,-2781,19825}},{{-6,10,7238},{-14,2181,14018},{-10,2211,12608},{30,144,13734},{28,-2825,19760},{1,-1573,19258},{-11,-2781,19825},{20,1755,18704},{-30,-1862,10166}}},{{{-24,-814,17659},{-10,-621,12478},{18,2884,10621},{-6,1062,2098},{-11,-2781,19825},{-14,2543,18955},{-30,1463,4658},{-15,-403,14311},{-29,1814,9205}},{{-6,10,7238},{28,-2825,19760},{-11,-2781,19825},{20,323,5982},{-24,-814,17659},{-8,-2811,10154},{-0,697,7019},{30,-762,4152},{27,-1031,11625}}},{{{-11,-2781,19825},{10,2690,10434},{3,2048,18969},{-30,1463,4658},{0,2735,20643},{25,-2520,6568},{-25,2525,7451},{-6,1609,13177},{30,144,13734}},{{-10,2211,12608},{-0,697,7019},{-13,1993,18065},{28,-2825,19760},{0,2735,20643},{27,-1031,11625},{-15,-403,14311},{3,2048,18969},{25,-2520,6568}}},{{{21,-1274,15869},{11,-2127,4812},{-15,469,2136},{-24,-814,17659},{-24,-814,17659},{-15,469,2136},{11,-2127,4812},{21,-1274,15869},{-10,2211,12608}},{{10,2690,10434},{1,-1411,14184},{-12,2015,21634},{11,-1293,9448},{-11,-2781,19825},{-6,10,7238},{20,323,5982},{16,-1805,20704},{11,-2127,4812}}},{{{20,323,5982},{-6,1062,2098},{-24,-814,17659},{-14,2181,14018},{28,-2825,19760},{-21,-301,9089},{30,2321,11480},{11,-1293,9448},{-10,2211,12608}},{{-11,-265,22514},{27,-1031,11625},{-9,-610,20032},{-15,-403,14311},{-12,2015,21634},{-14,2181,14018},{11,-1293,9448},{20,323,5982},{25,-2520,6568}}},{{{-25,2525,7451},{0,2735,20643},{9,-443,17921},{-29,1814,9205},{15,-2347,19701},{11,-2127,4812},{-2,2886,19974},{1,-1411,14184},{-13,1076,15872}},{{-2,2886,19974},{10,2690,10434},{-10,2211,12608},{3,2048,18969},{-15,469,2136},{5,-2630,6402},{-13,1993,18065},{-30,1463,4658},{-30,1463,4658}}}};
static int g_505 = 0L;
static short g_610 = 8L;
static char g_662[7][8] = {{0L,(-3L),(-3L),0L,1L,0L,(-3L),(-3L)},{(-3L),1L,(-6L),(-6L),1L,(-3L),1L,(-6L)},{0L,1L,0L,(-3L),(-3L),0L,1L,0L},{0x44L,(-3L),(-6L),(-3L),0x44L,0x44L,(-3L),(-6L)},{0x44L,0x44L,(-3L),(-6L),(-3L),0x44L,0x44L,(-3L)},{0L,(-3L),(-3L),0L,1L,0L,(-3L),(-3L)},{(-3L),1L,(-6L),(-6L),1L,(-3L),1L,(-6L)}};
static short g_669 = (-1L);
static volatile int g_713 = (-8L);
static int g_735[2][7][7] = {{{0x115415B4L,0xF0419111L,0x0C889C06L,0xE4F64CB7L,0xF0419111L,(-6L),0x8EE6ADCFL},{0x60D7C3EAL,0xD8F698E2L,(-5L),0xAA66875CL,0xAA66875CL,(-5L),0xD8F698E2L},{0x60D7C3EAL,0x8EE6ADCFL,(-6L),0xF0419111L,0xE4F64CB7L,0x0C889C06L,0xF0419111L},{0x115415B4L,0xA7544F37L,0x3E977C4AL,0x0C889C06L,0x47E9437CL,0x8EE6ADCFL,0x9EA7706BL},{0x47E9437CL,0xD8F698E2L,0xFDC84D3DL,0xA7544F37L,0x29ACF950L,0xD0DCE43AL,0x4CF8D73DL},{0x4CF8D73DL,0x3E977C4AL,0xEEA1BBD0L,0xF0419111L,0xEEA1BBD0L,0x3E977C4AL,0x4CF8D73DL},{0x0C889C06L,0x60D7C3EAL,(-6L),0xEEA1BBD0L,0x4CF8D73DL,0x8EE6ADCFL,0x3E977C4AL}},{{0x60D7C3EAL,0xF0419111L,0xD0DCE43AL,(-1L),0xD8F698E2L,0xFDC84D3DL,0xA7544F37L},{0x29ACF950L,0x3E977C4AL,(-6L),0x29ACF950L,0x9EA7706BL,0xE4F64CB7L,0xAA66875CL},{0xE4F64CB7L,0x47E9437CL,0xEEA1BBD0L,0xEEA1BBD0L,0x47E9437CL,0xE4F64CB7L,0x115415B4L},{0xA7544F37L,(-1L),0xFDC84D3DL,0x4CF8D73DL,0x60D7C3EAL,0xFDC84D3DL,0x29ACF950L},{0x47E9437CL,0x115415B4L,1L,0xD8F698E2L,0xEEA1BBD0L,0x8EE6ADCFL,0xD8F698E2L},{0xE4F64CB7L,(-1L),0x0C889C06L,0x9EA7706BL,0xAA66875CL,0x3E977C4AL,0x3E977C4AL},{0xAA66875CL,0x47E9437CL,0xFDC84D3DL,0x47E9437CL,0xAA66875CL,0xD0DCE43AL,0x60D7C3EAL}}};
static volatile struct S0 g_778 = {13,1262,16567};
static volatile struct S0 g_779 = {25,-528,13900};
static struct S0 g_821 = {-11,-1948,21668};
static unsigned char g_875 = 0UL;
static int g_882 = 0x202CEB9EL;
static int g_927[7] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
static short g_940 = 1L;
static short g_945 = 0x4E18L;
static int g_954 = 0x6234C40EL;
static unsigned char g_961 = 4UL;
static volatile short g_1006 = 1L;
static unsigned short g_1031 = 0xF5A3L;
static struct S1 g_1053[4] = {{5,-5,0x22F95D4BL},{5,-5,0x22F95D4BL},{5,-5,0x22F95D4BL},{5,-5,0x22F95D4BL}};
static struct S0 g_1067[5][8] = {{{-7,2237,8193},{28,1543,214},{11,-879,22241},{9,-2077,12565},{9,2468,5085},{-14,1281,6939},{11,2544,13447},{-8,906,895}},{{0,2395,18776},{-3,-1413,6611},{-27,-293,1656},{11,2544,13447},{-7,2237,8193},{-7,2237,8193},{11,2544,13447},{7,-2856,8783}},{{28,1543,214},{28,1543,214},{0,2395,18776},{-9,-1189,4006},{11,85,4540},{11,-879,22241},{-1,-316,19561},{9,-2077,12565}},{{11,85,4540},{11,-879,22241},{-1,-316,19561},{9,-2077,12565},{-27,-293,1656},{7,-2856,8783},{-27,-293,1656},{9,-2077,12565}},{{11,-879,22241},{0,2395,18776},{11,-879,22241},{-9,-1189,4006},{-3,-1413,6611},{11,2544,13447},{-28,-1492,23093},{7,-2856,8783}}};
static struct S0 g_1117 = {-25,-2235,8829};
static volatile struct S0 g_1198 = {-0,-1040,16011};
static volatile struct S0 g_1199 = {-6,-833,20319};



static char func_1(void);
static char func_8(short p_9, unsigned p_10, unsigned short p_11, struct S1 p_12);
static unsigned func_13(unsigned short p_14);
static struct S0 func_21(short p_22, char p_23, unsigned p_24, unsigned p_25);
static unsigned char func_30(int p_31, int p_32, unsigned short p_33);
static int func_37(char p_38, int p_39);
static int func_41(int p_42);
static struct S0 func_46(int p_47, unsigned p_48, unsigned p_49, short p_50);
static char func_64(int p_65);
static unsigned char func_68(unsigned short p_69, int p_70, int p_71, int p_72, unsigned short p_73);
static char func_1(void)
{
    unsigned l_15 = 1UL;
    int l_524 = 0x6FE12CF4L;
    unsigned char l_525 = 0x0FL;
    unsigned l_551 = 4294967289UL;
    int l_554 = 0L;
    char l_598 = 1L;
    unsigned l_600 = 9UL;
    unsigned short l_601[9][5][1] = {{{65529UL},{4UL},{0UL},{0x2C58L},{1UL}},{{0x2C58L},{0UL},{4UL},{65529UL},{0UL}},{{65527UL},{6UL},{0xFB52L},{0xFB52L},{6UL}},{{65527UL},{0UL},{65529UL},{4UL},{0UL}},{{0x2C58L},{1UL},{0x2C58L},{0UL},{4UL}},{{65529UL},{0UL},{65527UL},{6UL},{0xFB52L}},{{0xFB52L},{6UL},{65527UL},{0UL},{65529UL}},{{4UL},{0UL},{0x2C58L},{1UL},{0x2C58L}},{{0UL},{4UL},{65529UL},{0UL},{65527UL}}};
    unsigned char l_724 = 0UL;
    unsigned l_806 = 0xF722AD79L;
    struct S1 l_809[8][6] = {{{2,4283,0xF8FB154FL},{4,-7959,0x0408AA13L},{4,-7959,0x0408AA13L},{2,4283,0xF8FB154FL},{3,-7339,1UL},{0,2774,0x8CAB3DD5L}},{{2,4283,0xF8FB154FL},{3,-7339,1UL},{0,2774,0x8CAB3DD5L},{5,4501,0x0B376E93L},{4,-7959,0x0408AA13L},{0,2774,0x8CAB3DD5L}},{{6,7433,1UL},{1,2864,0x30CBE029L},{4,-7959,0x0408AA13L},{1,4307,1UL},{4,-7959,0x0408AA13L},{1,2864,0x30CBE029L}},{{5,4501,0x0B376E93L},{3,-7339,1UL},{7,938,18446744073709551615UL},{1,4307,1UL},{3,-7339,1UL},{4,-7959,0x0408AA13L}},{{6,7433,1UL},{4,-7959,0x0408AA13L},{1,2864,0x30CBE029L},{1,4307,1UL},{0,2774,0x8CAB3DD5L},{0,2774,0x8CAB3DD5L}},{{0,-71,18446744073709551612UL},{7,938,18446744073709551615UL},{7,938,18446744073709551615UL},{0,-71,18446744073709551612UL},{4,-7959,0x0408AA13L},{3,-7339,1UL}},{{0,-71,18446744073709551612UL},{4,-7959,0x0408AA13L},{3,-7339,1UL},{1,4307,1UL},{7,938,18446744073709551615UL},{3,-7339,1UL}},{{2,4283,0xF8FB154FL},{0,2774,0x8CAB3DD5L},{7,938,18446744073709551615UL},{6,7433,1UL},{7,938,18446744073709551615UL},{0,2774,0x8CAB3DD5L}}};
    short l_862 = (-1L);
    int l_965 = 0x89B98467L;
    short l_1007 = 0L;
    unsigned char l_1011 = 0x54L;
    char l_1200 = 0x5DL;
    int i, j, k;
lbl_1091:
    for (g_4 = 2; (g_4 >= 0); g_4 -= 1)
    {
        unsigned short l_7 = 65535UL;
        char l_506 = 0x3BL;
        int l_507[7] = {0xC69E44E8L,0xC69E44E8L,0xC69E44E8L,0xC69E44E8L,0xC69E44E8L,0xC69E44E8L,0xC69E44E8L};
        int l_518 = 0x516A470DL;
        int i;
        g_503.f1 = ((safe_add_func_int32_t_s_s((0xF0L <= (g_505 &= (l_7 == func_8(g_4, func_13(l_15), g_4, g_20)))), ((l_507[6] = (func_64((l_506 = func_64(l_7))) | g_435)) | l_15))) , g_447.f0);
        for (g_179 = 0; (g_179 <= 2); g_179 += 1)
        {
            int i;
            g_2[g_4] = g_2[g_179];
        }
        for (g_354 = 0; (g_354 <= 2); g_354 += 1)
        {
            unsigned l_514 = 0UL;
            unsigned l_517[1];
            int i;
            for (i = 0; i < 1; i++)
                l_517[i] = 0xFE492064L;
            l_518 &= (safe_rshift_func_int8_t_s_s((l_506 <= (safe_sub_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u(((((4294967292UL || l_507[6]) <= (((g_51 = l_514) , g_447.f1) , (g_133 |= 0x57A4L))) ^ (safe_rshift_func_int16_t_s_s(func_64(l_15), l_517[0]))) != g_447.f0), l_517[0])) && l_15) & g_56[6][0][0]), g_142.f2))), l_514));
            for (g_133 = 0; (g_133 <= 2); g_133 += 1)
            {
                int l_521 = (-1L);
                g_266.f1 |= (g_229 >= (9UL ^ (l_521 = (safe_add_func_int32_t_s_s(l_514, g_51)))));
                return g_3;
            }
            for (g_263 = 2; (g_263 >= 0); g_263 -= 1)
            {
                g_447.f0 = ((safe_lshift_func_uint8_t_u_u((g_235.f2 != g_142.f2), 7)) >= l_15);
            }
        }
    }
lbl_560:
    l_524 &= (+(g_142 , 0x0E91ABF8L));
    if (l_525)
    {
        short l_531 = 0x9D5CL;
        int l_582 = 0x92D1587DL;
        unsigned short l_602[6] = {0xB5C1L,1UL,0xB5C1L,0xB5C1L,1UL,0xB5C1L};
        unsigned short l_643 = 0xB55DL;
        unsigned short l_698 = 1UL;
        unsigned l_730 = 0xA2B24936L;
        int l_767 = 0L;
        short l_805 = 1L;
        struct S1 l_898 = {6,-6632,0x68769357L};
        unsigned char l_941 = 0x8BL;
        unsigned short l_964 = 65531UL;
        unsigned char l_973 = 1UL;
        unsigned char l_1045 = 0UL;
        int l_1049 = (-1L);
        unsigned short l_1136 = 7UL;
        int i;
lbl_616:
        for (g_138 = 11; (g_138 == 53); g_138 = safe_add_func_int8_t_s_s(g_138, 3))
        {
            int l_530 = 7L;
            int l_532 = 3L;
            int l_552 = (-1L);
            unsigned l_577 = 1UL;
            if ((((safe_add_func_uint8_t_u_u((l_530 ^= func_64(g_468.f0)), (l_532 = l_531))) && 1L) , g_138))
            {
                unsigned short l_553 = 0UL;
                int l_555 = 0xEE129011L;
                short l_559[6] = {0x782FL,0x8952L,0x782FL,0x782FL,0x8952L,0x782FL};
                int l_576 = 1L;
                int i;
                if ((func_64(func_13((safe_add_func_uint32_t_u_u(((l_524 = (((l_554 ^= (l_530 | (safe_add_func_uint32_t_u_u(((((safe_mod_func_int16_t_s_s(l_531, (l_552 |= ((safe_lshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_s(g_505, (safe_rshift_func_uint8_t_u_s((g_142 , (safe_add_func_int32_t_s_s((l_532 = (((!(((((g_468.f0 = (g_92[3][1] | (l_531 ^ g_92[3][0]))) || func_64(func_64((g_20.f1 >= (safe_mod_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s((((g_504[1][1][6].f1 & g_447.f2) >= l_524) < l_531), 3)) < g_142.f1), l_532)))))) ^ l_532) & g_20.f2) | l_532)) != l_530) & 0x2A4C4491L)), g_92[1][1]))), g_4)))) , (-9L)), l_530)) , l_551)))) & 0x1AF444A9L) , l_553) , g_380[0][4]), l_553)))) , l_553) < g_92[3][0])) , l_555), 4294967293UL)))) <= l_553))
                {
                    unsigned l_558 = 0UL;
                    int l_561 = 0L;
                    unsigned l_578 = 0x6CC69A02L;
                    if (((((safe_rshift_func_int16_t_s_s((g_2[1] , l_555), g_20.f0)) < ((((g_20.f2 & ((g_93 == l_532) || ((~func_64((l_553 , l_558))) < l_551))) == g_56[2][0][1]) && g_468.f0) , g_20.f2)) & 0xB406A1AFL) >= l_559[0]))
                    {
                        g_20 = g_20;
                        if (g_208)
                            goto lbl_560;
                        l_561 |= g_503.f0;
                        l_561 = (safe_add_func_int16_t_s_s(l_551, (((g_503.f0 || g_3) , 0xEF8AC3CFL) , 0xC1ACL)));
                    }
                    else
                    {
                        g_2[1] = (g_235.f2 , g_235);
                        return l_525;
                    }
                    g_368.f0 &= ((((g_229 || (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s((((safe_mod_func_int8_t_s_s((l_577 = (safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(0xF6L, l_576)), func_64(g_369.f2)))), func_13(l_578))) , 5UL) , 2UL), l_532)), g_354)), l_552))) < l_559[2]) == 0xCBL) == l_531);
                }
                else
                {
                    for (g_263 = 1; (g_263 >= 0); g_263 -= 1)
                    {
                        int i, j;
                        return g_380[g_263][g_263];
                    }
                    if (g_468.f2)
                        continue;
                    g_369.f1 ^= (!9L);
                    g_142.f1 = func_64(l_525);
                }
            }
            else
            {
                return g_468.f1;
            }
            if (g_369.f0)
                break;
            g_504[1][1][6] = func_21(((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int16_t_s((l_582 &= g_263))), (l_531 ^ 0x7BL))) , (((func_64((safe_rshift_func_uint16_t_u_s((g_369.f0 || func_64((safe_lshift_func_uint16_t_u_u((func_64((safe_add_func_uint8_t_u_u(l_531, (l_582 && ((safe_mod_func_uint32_t_u_u(0xC8D84BCCL, (safe_unary_minus_func_uint32_t_u((safe_add_func_uint32_t_u_u(((g_447.f0 > (safe_mod_func_int8_t_s_s((+(l_554 = ((safe_lshift_func_int8_t_s_s(l_531, 1)) & 0x72C748E5L))), 0xB0L))) < l_15), g_266.f0)))))) < (-1L)))))) & g_20.f0), l_552)))), 1))) > 0xC7L) < 0xA91AL) < 0xD589CE83L)), g_504[1][1][6].f1, l_598, l_525);
        }
        for (g_229 = 0; (g_229 <= 2); g_229 += 1)
        {
            unsigned short l_599 = 0UL;
            unsigned char l_603 = 0UL;
            int l_656[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
            char l_657 = 0xA3L;
            unsigned l_663 = 4294967295UL;
            int l_666[4];
            unsigned l_687 = 2UL;
            unsigned char l_704[9][8] = {{5UL,0x3BL,5UL,5UL,0x3BL,5UL,5UL,0x3BL},{0x3BL,5UL,5UL,0x3BL,5UL,5UL,0x3BL,5UL},{0x3BL,0x3BL,0x9EL,0x3BL,0x3BL,0x9EL,0x3BL,0x3BL},{5UL,0x3BL,5UL,5UL,0x3BL,5UL,5UL,0x3BL},{0x3BL,5UL,5UL,0x3BL,5UL,5UL,0x3BL,5UL},{0x3BL,0x3BL,0x9EL,0x3BL,0x3BL,0x3BL,5UL,5UL},{0x9EL,5UL,0x9EL,0x9EL,5UL,0x9EL,0x9EL,5UL},{5UL,0x9EL,0x9EL,5UL,0x9EL,0x9EL,5UL,0x9EL},{5UL,5UL,0x3BL,5UL,5UL,0x3BL,5UL,5UL}};
            unsigned l_810 = 4294967295UL;
            short l_874[7] = {0xA814L,0xB980L,0xA814L,0xA814L,0xB980L,0xA814L,0xA814L};
            char l_885 = 0x2FL;
            struct S1 l_901 = {0,-5243,0xB2F22F3AL};
            unsigned l_926 = 4294967289UL;
            int i, j;
            for (i = 0; i < 4; i++)
                l_666[i] = 1L;
            g_4 = (!func_68(l_599, (l_602[2] = (func_13(l_15) < (g_368.f0 & (g_208 == ((l_600 = l_525) ^ l_601[7][1][0]))))), (g_92[3][0] = (l_551 <= ((1UL > g_179) != 0xF0L))), l_554, g_191));
            if ((((l_603 | ((l_601[3][2][0] > (safe_sub_func_uint32_t_u_u(l_15, (((func_64((((-1L) <= g_56[5][0][3]) < 0x8F09L)) != 4UL) && (safe_lshift_func_uint16_t_u_s((g_435 = (g_369.f0 , 5UL)), 12))) >= g_468.f0)))) && (-7L))) , 0x46L) < g_235.f1))
            {
                int l_612 = 0xD29B8174L;
                struct S1 l_654 = {1,4545,0x152B5915L};
                unsigned l_689 = 0x52CE07E2L;
                if (g_51)
                {
                    short l_611 = 0x2229L;
                    int l_613 = 0xE6019CDCL;
                    int l_621 = (-1L);
                    struct S1 l_655 = {1,6857,6UL};
                    if (((((safe_rshift_func_uint16_t_u_s((l_611 &= g_610), ((((g_229 & (+(func_64(l_612) < l_613))) < func_64((safe_sub_func_uint32_t_u_u(g_504[1][1][6].f1, (g_266.f0 = (l_599 ^ l_554)))))) == g_468.f2) == l_612))) & g_142.f1) > 0x71B4L) ^ l_612))
                    {
                        if (g_208)
                            goto lbl_616;
                        return l_613;
                    }
                    else
                    {
                        l_621 = ((safe_sub_func_int32_t_s_s(g_447.f1, 0xAA9D2AA6L)) && (safe_lshift_func_uint8_t_u_s(l_613, 1)));
                    }
                    g_20 = g_20;
                    for (l_611 = 2; (l_611 >= 0); l_611 -= 1)
                    {
                        unsigned short l_642[8] = {4UL,4UL,4UL,4UL,4UL,4UL,4UL,4UL};
                        int i;
                        g_368.f0 = (safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u((g_435 = func_68(l_15, (g_20 , (g_610 >= ((safe_rshift_func_uint16_t_u_s((g_229 > (safe_lshift_func_int16_t_s_u(((safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s((-1L), func_13(func_68(g_266.f2, (safe_rshift_func_int8_t_s_s((((safe_lshift_func_int16_t_s_u(0x2FD8L, (safe_lshift_func_uint16_t_u_u((l_599 ^ (safe_rshift_func_uint8_t_u_s((g_138 | l_603), l_598))), g_380[1][1])))) != g_447.f0) == 9L), l_599)), l_642[5], l_612, g_208)))), l_643)) & g_4), 11))), 1)) && l_602[2]))), l_524, g_368.f0, l_612)), g_229)), 0x837DL));
                    }
                    for (l_612 = 0; (l_612 <= 1); l_612 += 1)
                    {
                        int i, j;
                        g_92[(l_612 + 2)][l_612] = g_92[(l_612 + 2)][l_612];
                        g_92[l_612][l_612] = 0xDC2CBAEEL;
                        l_656[0] |= (g_2[g_229] , (((l_611 ^ ((safe_add_func_uint32_t_u_u((l_599 == (((l_603 , g_138) && (((safe_lshift_func_int8_t_s_s(l_603, 4)) & (g_369.f2 = 6UL)) > (safe_rshift_func_int16_t_s_u(func_13((safe_rshift_func_int8_t_s_s(((!(safe_add_func_int32_t_s_s((func_64(((g_92[l_612][l_612] = 0UL) == ((l_655 = l_654) , g_503.f2))) > 0xFFDAL), l_654.f2))) , l_603), 6))), g_468.f2)))) ^ 0xFBL)), 1L)) >= g_142.f0)) < l_599) < 0x7584L));
                        g_468.f0 = ((l_656[6] |= 1UL) , (((l_657 >= ((g_263 != (safe_rshift_func_int8_t_s_u((l_655.f1 < ((func_64(g_142.f1) | 0x63DFC9E2L) <= 3L)), g_235.f1))) & l_654.f2)) & g_369.f2) > l_602[1]));
                    }
                }
                else
                {
                    int l_667 = 6L;
                    int l_668 = 0xF7B112D7L;
                    int l_670 = 0xFD8CF97AL;
                    char l_688 = (-1L);
                    unsigned short l_703 = 0x660BL;
                    for (g_263 = 2; (g_263 >= 0); g_263 -= 1)
                    {
                        int i;
                        g_369.f1 = (l_656[(g_263 + 3)] >= (l_654.f2 <= (((((((safe_sub_func_int8_t_s_s(((func_13(l_643) < g_662[5][5]) < func_64(func_68(l_663, g_92[3][0], ((l_667 = (((safe_add_func_int16_t_s_s((255UL <= l_666[2]), g_354)) <= l_656[0]) & g_229)) || 3L), g_56[6][0][0], l_668))), 0x21L)) < g_435) & g_669) , g_20.f2) || l_582) && g_503.f2) <= (-1L))));
                        l_656[(g_229 + 2)] |= l_670;
                    }
                    if (((+(safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s(((g_266.f2 <= (246UL >= ((g_468.f2 <= (-10L)) | ((((((g_662[5][6] |= (safe_mod_func_int16_t_s_s(((l_582 = g_504[1][1][6].f0) , (safe_sub_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(func_64((safe_sub_func_int16_t_s_s((func_68((((-1L) || ((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u((g_138 = ((((((((l_654.f1 = l_600) <= 1L) > (~(!(((l_554 == g_468.f2) | g_142.f2) && 65535UL)))) == l_654.f0) , 1UL) && 0x09L) == l_654.f2) < l_687)), 65533UL)), l_688)) && l_602[2])) > l_654.f2), g_20.f0, g_503.f2, g_447.f2, g_142.f0) == g_468.f2), 0xE0CBL))), 11)) ^ g_263), l_598))), l_688))) != g_669) | l_668) >= l_598) ^ 0x77L) < g_235.f2)))) < g_447.f2), 0x41L)), l_689))) || 1UL))
                    {
                        if (l_654.f1)
                            break;
                        g_468.f0 &= l_582;
                        if (l_657)
                            break;
                        l_654.f1 |= l_612;
                    }
                    else
                    {
                        unsigned short l_705 = 3UL;
                        if (l_15)
                            break;
                        l_654.f1 ^= (safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(1UL, ((safe_sub_func_int32_t_s_s((l_666[2] ^= 0x2A2338E5L), ((safe_sub_func_int8_t_s_s(l_698, (func_68((l_656[4] = (g_133 != l_612)), l_582, ((safe_rshift_func_int16_t_s_s((-1L), (((safe_sub_func_int16_t_s_s(l_703, (g_435 = (((0xBEL ^ g_468.f0) < l_15) < 0xCAL)))) >= g_56[2][0][3]) > 0L))) , l_698), l_657, l_704[1][4]) >= l_602[2]))) > l_582))) , 4294967287UL))), 9));
                        l_554 = func_13((((func_68(((((func_68((func_64(g_468.f0) < 0x07160A64L), g_380[1][1], g_235.f2, l_15, l_643) | 0xA4L) || g_503.f0) , l_668) , 6UL), g_610, l_654.f0, g_368.f0, g_447.f0) ^ 0xCEBCL) < l_705) , 0x0225L));
                    }
                }
                if (((((safe_rshift_func_int8_t_s_u(g_93, (safe_mod_func_int8_t_s_s(((0x8258L >= l_599) == l_612), ((0xD7L == (func_13(g_447.f1) | l_704[1][4])) && g_92[3][0]))))) == 0xD152L) ^ l_704[1][4]) > 6L))
                {
                    return g_369.f1;
                }
                else
                {
                    if ((safe_unary_minus_func_int8_t_s(g_20.f0)))
                    {
                        g_235.f0 = (l_524 |= (safe_add_func_uint16_t_u_u(6UL, (g_669 ^= (+l_643)))));
                    }
                    else
                    {
                        return g_369.f2;
                    }
                    if (l_525)
                        continue;
                    for (l_531 = 0; (l_531 <= 2); l_531 += 1)
                    {
                        int i, j;
                        g_713 = 0x23959289L;
                        if (l_704[(g_229 + 1)][(l_531 + 1)])
                            continue;
                        if (l_704[(g_229 + 3)][(l_531 + 5)])
                            continue;
                    }
                }
                g_4 = l_554;
                l_554 |= (g_142 , (l_666[1] = (+(~g_369.f1))));
            }
            else
            {
                unsigned short l_725 = 3UL;
                struct S1 l_744[1][5][7] = {{{{0,-2423,0xE692EDDBL},{5,-3464,0x627428B6L},{0,-2423,0xE692EDDBL},{0,-2423,0xE692EDDBL},{5,-3464,0x627428B6L},{0,-2423,0xE692EDDBL},{0,-2423,0xE692EDDBL}},{{7,-7536,18446744073709551615UL},{7,-7536,18446744073709551615UL},{0,-3429,18446744073709551613UL},{7,-7536,18446744073709551615UL},{7,-7536,18446744073709551615UL},{0,-3429,18446744073709551613UL},{7,-7536,18446744073709551615UL}},{{5,-3464,0x627428B6L},{0,-2423,0xE692EDDBL},{0,-2423,0xE692EDDBL},{5,-3464,0x627428B6L},{0,-2423,0xE692EDDBL},{0,-2423,0xE692EDDBL},{5,-3464,0x627428B6L}},{{0,1169,18446744073709551607UL},{7,-7536,18446744073709551615UL},{0,1169,18446744073709551607UL},{0,1169,18446744073709551607UL},{7,-7536,18446744073709551615UL},{0,1169,18446744073709551607UL},{0,1169,18446744073709551607UL}},{{5,-3464,0x627428B6L},{5,-3464,0x627428B6L},{0,6960,0xAF8D65DBL},{5,-3464,0x627428B6L},{5,-3464,0x627428B6L},{0,6960,0xAF8D65DBL},{5,-3464,0x627428B6L}}}};
                char l_766 = 0x55L;
                int i, j, k;
                g_142.f1 = ((((safe_lshift_func_uint8_t_u_s(251UL, 0)) ^ (((((+l_531) & (g_133 ^= (((g_368.f0 = ((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((((((l_656[0] |= l_599) , ((safe_mod_func_int32_t_s_s(l_704[5][7], (((g_266.f1 <= g_20.f2) , g_92[0][1]) || 250UL))) && (func_64((l_656[0] |= l_666[1])) & 0UL))) && g_20.f0) >= 5UL) && l_698), g_447.f2)), 3)) > l_687)) ^ g_263) >= g_4))) , g_142.f0) > (-7L)) && 3L)) ^ 0xC969BA51L) , g_235.f0);
                g_266.f0 = (g_92[0][0] ^= ((safe_add_func_int16_t_s_s(((0x88L >= (l_666[2] &= ((0xC3L <= ((l_724 || (g_20.f2 , ((g_51 ^= func_64(func_64(((g_504[1][1][6].f0 , func_13(g_142.f2)) , g_191)))) == 0UL))) != g_610)) == l_600))) ^ 1UL), l_725)) , g_435));
                for (g_20.f2 = 0; (g_20.f2 <= 2); g_20.f2 += 1)
                {
                    int l_729 = 0x42B4A5BFL;
                    if ((safe_rshift_func_uint16_t_u_u(((+0x2CBFL) != (g_610 ^= g_20.f1)), 0)))
                    {
                        g_4 = 4L;
                    }
                    else
                    {
                        g_266.f0 = (-10L);
                        g_447.f0 |= (((func_13(l_657) , g_435) || (((l_704[1][4] ^ (!func_13(g_20.f1))) <= l_704[0][7]) > (((l_663 != (+(((safe_unary_minus_func_uint32_t_u((g_235.f0 >= 6L))) >= l_724) > 0x7A3F4471L))) != 1L) <= l_729))) && (-1L));
                    }
                    if (((g_138 < func_13(l_601[5][1][0])) < ((((l_729 , (l_643 ^ ((l_730 < (func_64(g_662[5][5]) , 0xD08CL)) <= 1L))) , l_663) , g_51) == 0x728DL)))
                    {
                        return l_663;
                    }
                    else
                    {
                        if (l_725)
                            break;
                    }
                }
                if ((((g_51 = (safe_mod_func_int32_t_s_s(l_725, l_656[8]))) & (8L && g_20.f0)) == ((safe_sub_func_int16_t_s_s((l_602[2] < ((g_56[6][0][0] || (l_525 && (l_643 || (func_21(((func_68(l_601[7][2][0], g_503.f1, g_735[0][3][4], l_656[6], g_229) > g_468.f0) == 0x92L), g_208, g_235.f0, g_368.f0) , (-5L))))) , l_643)), l_725)) && g_447.f0)))
                {
                    int l_742[8][6][5] = {{{0xF1857EC8L,0xE74D8F0AL,0x2F027783L,0xE74D8F0AL,0xF1857EC8L},{0x4D98B74CL,0xFF853CA9L,0xD782BDE9L,(-1L),0x0BF11632L},{1L,0L,0x9C039F62L,1L,6L},{0L,0xCDD03425L,(-1L),0xFF853CA9L,0x65421C8BL},{(-7L),0xE74D8F0AL,0L,9L,0L},{0x65421C8BL,0L,0x3357FE72L,0x0BF11632L,0L}},{{8L,0xB10C3677L,0x9C039F62L,(-7L),(-1L)},{0x0BF11632L,0x9D84B0E7L,0x3ABD10B5L,0xE34DFFA6L,0x45CB7B2AL},{0xCD670A49L,0xB10C3677L,(-7L),0xAD849FB3L,0xF7A4C00BL},{0xCDD03425L,0L,0L,0xCDD03425L,0x0BF11632L},{6L,0xE74D8F0AL,8L,1L,1L},{(-6L),0x51AE4AB2L,0x3ABD10B5L,(-1L),(-6L)}},{{(-6L),0xAD849FB3L,0xCD670A49L,1L,0x7A4F1807L},{0x4D98B74CL,3L,0x3357FE72L,0xCDD03425L,0x8DD0182CL},{(-1L),1L,6L,0xAD849FB3L,1L},{0x51AE4AB2L,0xCDD03425L,0xFF853CA9L,0xE34DFFA6L,(-6L)},{0x7A4F1807L,0xFCBF8AC6L,(-6L),(-7L),0x2F027783L},{0x51AE4AB2L,1L,5L,0x0BF11632L,0x0BF11632L}},{{(-1L),0x04643BF5L,(-1L),9L,1L},{0x4D98B74CL,0L,(-1L),3L,0x45CB7B2AL},{(-6L),0xFCBF8AC6L,0x7A4F1807L,0xE74D8F0AL,0x66826602L},{(-6L),0x3357FE72L,(-1L),0x45CB7B2AL,0L},{6L,1L,(-1L),1L,1L},{0x0BF11632L,0x4D98B74CL,1L,(-1L),0x8DD0182CL}},{{0x2F027783L,1L,0x66826602L,(-7L),0xCD670A49L},{(-6L),0L,0xD782BDE9L,0x4D98B74CL,0x8DD0182CL},{1L,(-7L),1L,0xE74D8F0AL,1L},{0x8DD0182CL,0x8DD0182CL,0x3ABD10B5L,0xFF853CA9L,0x9D84B0E7L},{0x7A4F1807L,0x04643BF5L,0x2F027783L,0L,0L},{(-6L),0xE34DFFA6L,0xFF853CA9L,0xCDD03425L,0x51AE4AB2L}},{{1L,0x04643BF5L,1L,1L,8L},{0x0BF11632L,0x8DD0182CL,3L,0x3ABD10B5L,(-6L)},{0xF7A4C00BL,(-7L),0x7A4F1807L,1L,0xF1857EC8L},{0x45CB7B2AL,0L,0xFF853CA9L,0x65421C8BL,0x45CB7B2AL},{(-1L),1L,1L,1L,0x8B81A260L},{0L,0x4D98B74CL,0x3ABD10B5L,0x3ABD10B5L,0x4D98B74CL}},{{0L,0xFCBF8AC6L,0xF7A4C00BL,1L,5L},{0x65421C8BL,0x3ABD10B5L,0xD782BDE9L,0xCDD03425L,0x45CB7B2AL},{0x8B81A260L,0xAD849FB3L,(-1L),0L,(-3L)},{0x65421C8BL,0x9D84B0E7L,1L,0xFF853CA9L,(-6L)},{0L,9L,0L,0xE74D8F0AL,(-7L)},{0L,(-1L),0L,0x4D98B74CL,0L}},{{1L,9L,0x75668C5DL,0xFCBF8AC6L,0x8B81A260L},{0x4D98B74CL,0x65421C8BL,(-1L),1L,(-6L)},{0xCD670A49L,0x04643BF5L,5L,0x04643BF5L,0xCD670A49L},{0x65421C8BL,0x3357FE72L,0x3ABD10B5L,0L,(-1L)},{(-1L),0xE74D8F0AL,1L,0xFCBF8AC6L,(-6L)},{0x8DD0182CL,0x9D84B0E7L,5L,0x3357FE72L,(-1L)}}};
                    int i, j, k;
                    g_2[g_229] = func_21(func_64(g_368.f0), (safe_lshift_func_uint8_t_u_u(func_68(g_92[3][0], g_235.f0, (((g_610 = ((safe_mod_func_int32_t_s_s((func_13((func_64((l_725 & 1UL)) <= ((safe_mod_func_uint8_t_u_u(func_13(g_380[1][1]), 0x8EL)) >= l_742[0][2][3]))) && 65526UL), g_669)) <= g_92[3][0])) || 0UL) , g_4), g_505, l_742[0][2][3]), l_656[8])), l_742[0][2][3], l_602[4]);
                    g_4 = (g_266.f0 = g_354);
                    l_524 = g_447.f1;
                }
                else
                {
                    struct S1 l_743 = {6,5029,0x7C53F0FAL};
                    unsigned l_747 = 4294967295UL;
                    unsigned char l_765 = 255UL;
                    int i;
                    if (l_643)
                        break;
                    for (l_663 = 0; (l_663 <= 5); l_663 += 1)
                    {
                        int i;
                        l_666[g_229] = l_599;
                        l_744[0][2][4] = (g_20 = l_743);
                        l_666[g_229] = ((g_662[5][5] ^= g_504[1][1][6].f0) != 0xCAL);
                        if (l_744[0][2][4].f0)
                            continue;
                    }
                    if ((safe_add_func_int16_t_s_s((g_669 = (-1L)), ((((l_747 = 0x6FA8DC68L) , func_68(l_744[0][2][4].f0, g_229, l_743.f2, l_743.f1, ((safe_lshift_func_uint8_t_u_u((+(safe_add_func_int8_t_s_s(l_743.f2, (g_51 = ((g_2[g_229] , g_368.f0) , 1UL))))), 7)) >= l_531))) || g_179) & l_601[7][1][0]))))
                    {
                        char l_764 = 0x41L;
                        g_468.f0 = (safe_rshift_func_int16_t_s_u(((g_662[5][5] = ((0UL != (safe_add_func_uint8_t_u_u((((((0x307CL >= func_64((l_554 , ((safe_lshift_func_int16_t_s_u((~(safe_rshift_func_uint8_t_u_s((((safe_mod_func_uint8_t_u_u(g_51, func_64((safe_sub_func_uint8_t_u_u((g_662[4][3] , 0x49L), l_764))))) < ((g_191 <= l_744[0][2][4].f1) == (-1L))) & 0x3BL), l_765))), l_551)) || g_713)))) | g_735[0][3][4]) != l_764) > l_766) != g_56[6][0][0]), 0x8FL))) <= l_531)) > 0xE1L), g_229));
                    }
                    else
                    {
                        g_368.f1 = (func_68(l_767, (g_368.f0 = l_600), g_735[0][3][4], g_2[g_229].f0, (safe_rshift_func_int16_t_s_s(l_524, (g_610 = g_179)))) >= (0xF0L < ((safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u((1L ^ l_744[0][2][4].f2), 6)) >= (-6L)) || 0xA6DD9CF9L), 0UL)), g_505)) <= g_735[0][3][4])));
                        g_468.f0 |= (safe_lshift_func_uint16_t_u_s(func_13(g_2[g_229].f2), 12));
                    }
                }
            }
            if (l_601[7][1][0])
            {
                g_779 = g_778;
            }
            else
            {
                unsigned char l_790 = 0UL;
                unsigned char l_807 = 7UL;
                int l_833 = 0x175B3917L;
                char l_884 = 1L;
                short l_911 = 0xFC9FL;
                l_656[0] = (((l_554 <= (safe_mod_func_uint16_t_u_u(((l_554 , (((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((l_582 >= (safe_mod_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u((!(l_790 ^ func_68((g_380[0][4] && (g_468.f0 = (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((0xDAL <= func_64(g_778.f1)), (l_656[1] = g_447.f0))), 13)))), g_447.f2, l_730, g_92[3][0], g_235.f2))), 0x01F6L)) & l_657) < g_447.f2), 0xB6L))), 0)) == l_643), l_602[2])) < g_435) <= l_790)) | 0xF4L), g_369.f2))) >= g_20.f0) && l_666[2]);
                if (g_662[5][5])
                {
                    unsigned short l_808 = 0UL;
                    g_503.f1 = (safe_rshift_func_int8_t_s_u((((l_808 = ((((((safe_sub_func_uint16_t_u_u(65528UL, ((l_600 , g_2[2]) , ((safe_add_func_uint32_t_u_u(((0xD4L != ((safe_sub_func_uint8_t_u_u(g_369.f0, g_380[1][1])) == l_790)) && (0xF5L > ((safe_sub_func_uint32_t_u_u(func_68(g_354, l_663, l_805, l_806, g_142.f1), l_790)) <= l_807))), g_354)) <= 65533UL)))) , 0xC77DL) >= l_807) && l_524) >= g_20.f0) | 0UL)) != g_4) , l_790), l_806));
                    g_142 = l_809[2][4];
                    if ((l_805 & func_13(((g_369.f2 = 0x4D3DE977L) && ((0xD2D2L && (func_68(l_810, ((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u(l_551, 11)), 15)) & l_808), l_808, ((safe_add_func_int32_t_s_s((((safe_lshift_func_int16_t_s_s((g_468 , g_468.f0), g_662[2][7])) ^ l_807) & g_51), g_20.f0)) | l_807), l_790) <= g_4)) >= g_56[0][0][1])))))
                    {
                        unsigned l_820 = 0UL;
                        int l_822[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_822[i] = 0x58777BEDL;
                        l_822[1] = (safe_unary_minus_func_uint32_t_u(((func_64(func_64(g_504[1][1][6].f2)) && (g_662[5][5] && (l_820 = 0x93F2L))) || ((g_821 , l_790) , (l_808 < 0xD624L)))));
                        g_735[0][6][6] = ((l_833 = (safe_lshift_func_uint8_t_u_s((0x85349F2EL <= (safe_sub_func_uint8_t_u_u(l_808, 5L))), (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((0x28B9L & func_13(g_503.f1)), (l_808 , 0x189FL))), g_93)), g_229))))) < g_208);
                        g_92[3][1] = l_809[2][4].f1;
                        g_468.f0 |= 0L;
                    }
                    else
                    {
                        unsigned char l_836 = 8UL;
                        g_735[0][2][6] |= (((g_138 = (safe_rshift_func_int8_t_s_u(((l_833 ^ g_179) != (((0xABFC38DDL <= (l_525 > l_807)) , g_503) , g_778.f2)), 0))) ^ (l_836 < g_92[3][0])) >= g_447.f0);
                        g_369.f0 ^= l_704[6][1];
                    }
                }
                else
                {
                    unsigned char l_843 = 0x0CL;
                    int l_861[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_861[i] = 0xF2240BCBL;
                    g_778.f1 = ((safe_mod_func_uint8_t_u_u(g_662[5][5], (safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(g_93, (l_843 == (safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((((((l_656[0] = 1L) > ((l_843 == (g_266.f1 || ((~(safe_rshift_func_uint8_t_u_s(l_602[0], 1))) > (safe_mod_func_uint16_t_u_u((((5L && func_13(l_602[2])) & l_643) == 0x7CL), l_807))))) > g_662[6][7])) || l_843) != g_92[3][0]) & l_843), 8L)), 0))))), 0x8EL)))) & g_179);
                    for (l_724 = 0; (l_724 <= 1); l_724 += 1)
                    {
                        unsigned short l_854 = 0x3C64L;
                        int l_858 = 4L;
                        g_821.f0 |= (safe_add_func_uint8_t_u_u(((((l_854 && ((-2L) == (((safe_mod_func_int16_t_s_s(((((((g_821.f1 != ((safe_unary_minus_func_uint32_t_u((func_64((l_858 = (-1L))) >= (g_368.f0 < g_505)))) && g_266.f2)) & (l_833 &= (func_68(((safe_sub_func_int32_t_s_s((func_64(g_447.f0) > l_843), 0xC1F38666L)) ^ 247UL), g_468.f0, l_805, g_20.f2, l_861[0]) , g_354))) > 0xFEL) & l_790) <= g_435) , g_142.f0), l_861[0])) <= l_861[0]) || l_862))) || 0x23L) & g_735[0][5][2]) >= (-1L)), l_790));
                    }
                    if (func_64((l_582 |= ((((l_833 = g_266.f2) , g_138) == (safe_rshift_func_int8_t_s_s(3L, 7))) < (g_821.f1 & l_790)))))
                    {
                        if (g_20.f2)
                            break;
                        l_666[2] = (8UL > (-1L));
                        if (l_833)
                            break;
                    }
                    else
                    {
                        unsigned char l_871 = 0x96L;
                        unsigned char l_883[8][8][4] = {{{0x57L,0UL,1UL,249UL},{0xE2L,255UL,0xC3L,249UL},{0x85L,0UL,0x05L,253UL},{0xC4L,6UL,0x19L,0x5BL},{0xC2L,0x0BL,3UL,0xC3L},{255UL,0xC2L,253UL,0UL},{0x72L,255UL,0xC3L,253UL},{0x2FL,247UL,0x85L,6UL}},{{0x05L,0UL,255UL,0x2FL},{0x0FL,0x0BL,254UL,0x19L},{0x19L,0x3DL,1UL,0xD9L},{255UL,0x0FL,0x8AL,249UL},{0x2FL,246UL,0x2FL,0xA9L},{0x85L,0x19L,0x57L,252UL},{0xC6L,6UL,3UL,0x19L},{0x0BL,0UL,3UL,0x83L}},{{0xC6L,246UL,0xC2L,0xC4L},{253UL,254UL,0x8AL,0xC2L},{0x8AL,0xC2L,0x91L,255UL},{0UL,255UL,0x2FL,0x72L},{0xE2L,0UL,7UL,0x2FL},{1UL,0UL,0xAFL,0x05L},{0x0BL,0x83L,253UL,0x0FL},{0x8AL,1UL,0x72L,0x19L}},{{0x7DL,0xE2L,249UL,255UL},{0xAFL,1UL,0x2FL,0x2FL},{0x3DL,0x3DL,0xE2L,0x85L},{0UL,0xE0L,0x0BL,0xC6L},{253UL,0xC2L,0x72L,0x0BL},{0x07L,0xC2L,252UL,0xC6L},{0xC2L,0xE0L,0x2FL,0x85L},{1UL,0x3DL,0x77L,0x2FL}},{{0xC3L,1UL,0UL,255UL},{0x0BL,0xE2L,0x91L,0x19L},{0x07L,1UL,0x85L,0x0FL},{0x91L,0x83L,249UL,0x05L},{0xC2L,0UL,0xE2L,0x2FL},{6UL,0UL,0xC3L,0x72L},{0UL,255UL,0xC2L,255UL},{0x7DL,0xC2L,0x85L,0xC2L}},{{7UL,255UL,0UL,0UL},{255UL,0x8AL,0x2FL,0x3DL},{254UL,1UL,249UL,249UL},{254UL,0x5BL,0x2FL,0xF7L},{255UL,249UL,0UL,0x05L},{7UL,0x91L,0x3DL,247UL},{255UL,0x0BL,0x32L,0xC2L},{0x83L,0x0FL,254UL,249UL}},{{249UL,0x6AL,249UL,0UL},{0xC3L,0x85L,246UL,0x5BL},{0xC4L,255UL,0x3DL,246UL},{6UL,255UL,0xC4L,0UL},{0xE0L,0x72L,0x83L,7UL},{254UL,0x6AL,0x6AL,254UL},{0x0BL,0x5BL,1UL,0x2FL},{0x32L,0xC2L,0UL,247UL}},{{6UL,253UL,7UL,247UL},{1UL,0xC2L,0xE0L,0x2FL},{0x83L,0x5BL,249UL,254UL},{0xA9L,0x6AL,0UL,7UL},{0x2FL,0x72L,246UL,0UL},{255UL,255UL,7UL,246UL},{0UL,255UL,1UL,0x5BL},{0xE0L,0x85L,0x2FL,0xC4L}}};
                        int l_888 = (-1L);
                        int i, j, k;
                        g_504[1][1][6] = func_21((((l_883[7][0][1] = (safe_rshift_func_int16_t_s_s((g_610 = ((func_64((l_809[2][4].f1 ^= g_369.f2)) || (safe_lshift_func_uint8_t_u_s(l_843, (safe_rshift_func_uint16_t_u_s((~l_871), (l_656[0] ^= ((func_21((((safe_lshift_func_uint16_t_u_s((l_874[2] || func_68(func_68(g_662[5][5], func_68(((func_64((g_875 >= (l_524 = (safe_add_func_uint8_t_u_u((l_554 = (safe_mod_func_uint32_t_u_u(((((0x889AL || (l_698 == l_807)) >= 0xAFL) != g_208) , l_871), g_503.f0))), l_871))))) & g_875) | l_871), l_657, l_843, g_882, g_468.f0), l_871, g_447.f0, l_666[2]), l_871, l_790, g_821.f2, g_20.f0)), g_821.f0)) & g_875) & g_662[0][1]), l_698, l_807, l_809[2][4].f0) , l_698) <= 0x9F07L))))))) , g_380[1][1])), l_861[0]))) , l_833) == l_871), g_447.f2, l_884, g_354);
                        l_833 &= (g_20.f1 = ((((0xB332L | l_885) == 0L) | (func_21((((l_666[2] ^= (l_656[0] |= (safe_add_func_uint8_t_u_u(l_888, 0x7BL)))) != (l_861[0] >= (safe_add_func_int8_t_s_s(0L, ((safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((g_20.f2 > ((safe_sub_func_int32_t_s_s(l_883[2][1][1], g_20.f2)) <= (-9L))) , 1UL), l_871)), 2UL)) && l_730))))) | 0x69BC7F20L), l_883[7][0][1], g_235.f0, g_20.f2) , (-1L))) != 0UL));
                    }
                }
                if (func_13(l_666[2]))
                {
                    return l_809[2][4].f2;
                }
                else
                {
                    struct S1 l_897 = {0,1235,0x6CADCD7BL};
                    if ((0x26CE6AE1L > g_875))
                    {
                        g_142 = l_897;
                        return g_779.f0;
                    }
                    else
                    {
                        l_898 = l_809[0][1];
                        if (g_133)
                            break;
                        l_524 = (l_898.f1 |= g_93);
                        if (g_447.f2)
                            continue;
                    }
                    for (l_687 = 0; (l_687 <= 43); ++l_687)
                    {
                        l_901 = g_20;
                    }
                    g_779.f0 = (g_92[3][0] = (l_874[0] | g_208));
                }
                for (g_138 = 2; (g_138 <= 6); g_138 += 1)
                {
                    int l_907 = (-1L);
                    unsigned char l_923 = 255UL;
                    int l_925 = 0x697CCD8EL;
                    if (g_93)
                    {
                        unsigned l_904 = 0x5FD9D32FL;
                        int l_924 = 6L;
                        int i, j;
                        l_809[2][4] = g_20;
                        g_778.f1 = ((((safe_mod_func_uint8_t_u_u((l_884 , ((g_93 | (l_904 >= func_13((g_435 = ((func_13((l_525 , (safe_sub_func_int16_t_s_s(func_13(func_64(l_805)), (-1L))))) , 0x04D7L) && 65529UL))))) && g_369.f0)), g_208)) <= (-10L)) != l_907) && l_602[2]);
                        l_924 |= (((safe_unary_minus_func_uint32_t_u(g_235.f0)) & (((0x04D4L && (safe_mod_func_int32_t_s_s(l_911, g_56[6][0][7]))) == 6L) | (safe_rshift_func_uint8_t_u_u((0x7D8835AEL == g_380[0][1]), 4)))) >= (safe_sub_func_int8_t_s_s(((safe_unary_minus_func_int8_t_s(((safe_lshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s((g_662[g_138][g_138] = ((safe_add_func_int8_t_s_s((0x0851D1B1L > g_20.f1), g_20.f1)) != 0x2FL)), l_656[0])) && 0x77L), l_923)) | (-8L)))) && l_601[7][1][0]), g_92[1][1])));
                        if (l_925)
                            break;
                    }
                    else
                    {
                        g_927[5] ^= (l_926 = l_810);
                        l_666[0] &= g_142.f0;
                        if (l_602[2])
                            break;
                        if (g_821.f0)
                            break;
                    }
                    return l_600;
                }
            }
            if ((g_821.f0 = ((0x6FL <= (safe_sub_func_uint16_t_u_u(l_598, (0xA0L && (safe_sub_func_int32_t_s_s((l_643 , ((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((0x6ADE9E00L ^ (((safe_add_func_int32_t_s_s((g_503.f1 || 0xA6AA0A8DL), g_468.f0)) | g_940) || l_554)) ^ l_941), l_898.f1)), g_368.f0)) < (-1L))), g_208)))))) <= 0UL)))
            {
                int l_942 = 1L;
                return l_942;
            }
            else
            {
                int l_955 = 0xCA804882L;
                unsigned short l_956 = 0x5D7FL;
                g_821.f1 = (safe_sub_func_uint16_t_u_u(g_945, ((((safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s(((g_447.f1 > ((g_229 ^ func_68((((l_601[4][1][0] && ((g_266.f2 = (safe_add_func_int32_t_s_s(func_64(g_266.f2), g_954))) != ((((g_662[5][5] ^= l_602[2]) == (~255UL)) <= 4294967295UL) <= 0x92DAL))) , 18446744073709551615UL) , 0xFABFL), g_954, g_505, l_531, l_955)) && 65535UL)) <= l_956), l_901.f2)), l_724)) ^ g_235.f2) & l_809[2][4].f0) , l_941)));
                if (l_805)
                    break;
            }
        }
        g_92[3][0] |= (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(l_600, 4L)), 10));
        if ((g_961 < (safe_mod_func_int32_t_s_s(func_68(g_208, ((g_92[3][0] < g_940) > ((~(g_208 != (g_504[1][1][6].f1 , (((l_964 != ((func_64((l_582 = (l_898.f1 != (((((l_524 , g_208) ^ g_435) , g_380[1][3]) , l_524) & l_862)))) & 0L) || 0xB770L)) >= l_862) && 0x07L)))) >= l_964)), l_898.f2, l_965, g_133), l_698))))
        {
            short l_970 = 0x3969L;
            unsigned l_991 = 0x513C0162L;
            int l_1002 = (-5L);
            int l_1032[4][10] = {{0x97329CC7L,0x55F0BF9BL,0x97329CC7L,0L,7L,7L,0L,0x97329CC7L,0x55F0BF9BL,0x97329CC7L},{0x97329CC7L,0x85A65EA6L,0x55F0BF9BL,0xBF1257E0L,0x55F0BF9BL,0x85A65EA6L,0x97329CC7L,0x97329CC7L,0x85A65EA6L,0x55F0BF9BL},{0x85A65EA6L,0x97329CC7L,0x97329CC7L,0x85A65EA6L,0x55F0BF9BL,0xBF1257E0L,0x55F0BF9BL,0x85A65EA6L,0x97329CC7L,0x97329CC7L},{0x55F0BF9BL,0x97329CC7L,0L,7L,7L,0L,0x97329CC7L,0x55F0BF9BL,0x97329CC7L,0L}};
            int l_1066 = 0L;
            unsigned short l_1081 = 65535UL;
            char l_1109 = 0x5DL;
            int l_1110 = 5L;
            unsigned l_1112 = 0x086DA462L;
            char l_1125 = 5L;
            int i, j;
            for (g_875 = 0; (g_875 >= 10); g_875++)
            {
                unsigned l_989[3];
                int l_990 = 8L;
                char l_1033 = (-2L);
                int i;
                for (i = 0; i < 3; i++)
                    l_989[i] = 0x50E670D8L;
                if (g_927[5])
                {
                    unsigned short l_972[1][4];
                    int l_992 = 0x9E6D0B43L;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_972[i][j] = 6UL;
                    }
                    for (l_941 = 0; (l_941 != 15); l_941++)
                    {
                        char l_971[8][5][6] = {{{0x21L,0xC7L,(-5L),(-2L),0xB6L,0x50L},{0x2DL,0x6EL,(-5L),0xC3L,0xB6L,1L},{8L,0xC7L,0xD9L,(-6L),0x68L,0x39L},{(-1L),(-1L),0x8AL,5L,1L,5L},{0L,(-1L),0L,0x8BL,8L,0x98L}},{{(-9L),(-6L),1L,(-1L),5L,(-1L)},{0x40L,0x39L,1L,(-1L),8L,0x8BL},{(-9L),0L,0x97L,0x8BL,(-1L),0x27L},{0L,0x41L,0x3BL,5L,(-9L),0x35L},{(-1L),0xD2L,0x9DL,0xCCL,0x2EL,0xF1L}},{{0x8AL,0x39L,0L,0x98L,0xD7L,0x66L},{8L,(-1L),0L,0L,1L,0xF1L},{(-1L),0L,0x9DL,0x8DL,0L,0x39L},{0L,0xC7L,(-1L),(-1L),(-1L),0xC7L},{0x91L,0x98L,0xD9L,0x41L,0x2DL,0xD2L}},{{0x2DL,0xC3L,(-9L),(-1L),0x9DL,0x45L},{0xB6L,0xC3L,(-5L),0x6EL,0x2DL,0x27L},{0x21L,0x98L,5L,0xF1L,(-1L),(-2L)},{(-9L),0xC7L,0xD7L,0x45L,0L,(-1L)},{0x3BL,0L,0x21L,0x69L,1L,(-1L)}},{{0x9DL,(-1L),0x2DL,1L,0xD7L,(-2L)},{0x9DL,0x39L,8L,0x69L,0x2EL,0x98L},{0x3BL,0xD2L,(-1L),0x45L,0xB6L,0x41L},{(-9L),0xF1L,0L,0xF1L,(-9L),(-6L)},{0x21L,(-1L),(-9L),0x6EL,0x8AL,0x69L}},{{0L,4L,0L,1L,0L,0xCCL},{0x40L,0xF1L,0xD9L,0xC3L,0L,0x41L},{0L,(-1L),0x91L,0xD2L,8L,0xC3L},{0x3BL,5L,(-9L),0x35L,(-5L),0xC7L},{(-9L),0L,0xD7L,0L,1L,(-1L)}},{{0x2EL,0x8BL,0x40L,0xC7L,1L,0x8DL},{0L,0L,1L,0xF1L,(-5L),4L},{0xB6L,5L,0x9DL,(-6L),8L,(-6L)},{(-1L),(-1L),(-1L),(-2L),0L,0x50L},{0x21L,0xF1L,8L,5L,0L,0x66L}},{{5L,4L,0x68L,5L,0L,(-2L)},{0x21L,1L,(-1L),(-2L),0xD9L,(-2L)},{(-1L),0x98L,0x97L,(-6L),0L,0x6EL},{0xB6L,(-2L),(-1L),0xF1L,5L,0x98L},{0L,0x6EL,0x3BL,0xC7L,0x9DL,0x39L}}};
                        int l_988[5][3][9] = {{{0xA83F9EAFL,0L,0xA83F9EAFL,0L,0xA83F9EAFL,0L,0xA83F9EAFL,0L,0xA83F9EAFL},{0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL},{0xA83F9EAFL,0L,0xA83F9EAFL,0L,0xA83F9EAFL,0L,0xA83F9EAFL,0L,0xA83F9EAFL}},{{0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL},{0xA83F9EAFL,0L,0xA83F9EAFL,0L,0xA83F9EAFL,0L,0xA83F9EAFL,0L,0xA83F9EAFL},{0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL}},{{0xA83F9EAFL,0L,0xA83F9EAFL,0L,0xA83F9EAFL,0L,0xA83F9EAFL,0L,0xA83F9EAFL},{0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL},{0xA83F9EAFL,0L,0xA83F9EAFL,0L,0xA83F9EAFL,0L,0xA83F9EAFL,0L,0xA83F9EAFL}},{{0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL},{0xA83F9EAFL,0L,0xA83F9EAFL,0L,0xA83F9EAFL,0L,0xA83F9EAFL,0L,0xA83F9EAFL},{0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL}},{{0xA83F9EAFL,0L,0xA83F9EAFL,0L,0xA83F9EAFL,0L,0xA83F9EAFL,0L,0xA83F9EAFL},{0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL,0x58AAF88CL},{0xA83F9EAFL,0L,0xA83F9EAFL,0L,0xA83F9EAFL,0L,0xA83F9EAFL,0L,0xA83F9EAFL}}};
                        int i, j, k;
                        g_735[0][3][4] |= (g_266.f0 = (g_503.f2 | (l_970 , l_971[7][3][3])));
                        l_972[0][3] ^= (l_970 | 1L);
                        l_992 = ((l_973 == (g_20.f2 >= (g_142.f0 < (safe_rshift_func_uint8_t_u_u((((((l_531 , ((safe_sub_func_int32_t_s_s((((l_989[1] = ((safe_rshift_func_int16_t_s_s((0xA7L <= (l_988[2][2][6] = (safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_s(g_778.f1, 3)) && l_970), (safe_add_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(g_235.f0, 0x59B2L)) && 4L), g_92[3][0])))))), l_971[7][3][3])) < l_600)) >= l_601[7][1][0]) <= l_990), g_133)) , 0L)) , (-9L)) != g_940) > g_940) > g_4), l_991))))) > g_235.f2);
                        l_992 = g_468.f0;
                    }
                }
                else
                {
                    char l_1003[6][6][7] = {{{0x28L,1L,0L,(-9L),(-1L),1L,0L},{(-9L),0L,(-3L),0x26L,1L,(-1L),0x35L},{1L,0x35L,0L,0x65L,0x05L,0L,0x00L},{0L,(-4L),(-1L),0L,(-9L),1L,0xBCL},{5L,0x13L,1L,0x87L,0x00L,(-1L),1L},{1L,0x3DL,0xBCL,6L,0x2DL,0xA7L,0xD5L}},{{0x00L,0x65L,0L,0x87L,0x13L,0x05L,0xF7L},{0L,0xB8L,0x2DL,0L,0L,0L,0x2DL},{(-1L),(-1L),0x10L,0x65L,0x0DL,(-1L),1L},{0xBBL,(-2L),(-9L),0x30L,(-10L),0x19L,0x1FL},{0x28L,0L,1L,0x05L,0x82L,0x0DL,0L},{0x35L,6L,0L,0xB8L,0xBCL,(-4L),0xD5L}},{{5L,0xA9L,5L,0L,0x0DL,0x82L,0x05L},{0x2DL,0L,1L,0xE4L,0L,0xAFL,(-1L)},{(-9L),0x13L,0x00L,1L,(-1L),0x82L,0x87L},{(-1L),0x67L,0L,0x19L,0x7CL,(-4L),0x7CL},{0x10L,(-1L),(-1L),0x10L,0x65L,0x0DL,0x00L},{(-1L),7L,0xBCL,(-7L),0x35L,0x19L,0x47L}},{{0x13L,0L,0x10L,0x8EL,0L,(-1L),0x00L},{0xD5L,0xE4L,1L,7L,2L,(-1L),0x7CL},{0x7CL,(-1L),0x35L,(-1L),0x7CL,0x65L,0x87L},{0L,0xA7L,0x47L,0x26L,8L,0x3EL,(-1L)},{0x82L,0x7CL,0x05L,(-6L),0x10L,(-9L),0x87L},{(-9L),6L,2L,1L,0x35L,0x61L,(-1L)}},{{0L,1L,0x28L,0x28L,1L,0L,(-9L)},{(-1L),0x3DL,0xF6L,0xB8L,1L,7L,0L},{0x82L,(-1L),0x0DL,0x35L,0x87L,0x10L,0L},{0xD5L,0x3DL,0L,(-1L),0xF6L,0x3EL,(-10L)},{0x9BL,1L,1L,0L,1L,1L,0x9BL},{0x52L,6L,(-1L),7L,0x7CL,1L,(-9L)}},{{0x65L,0L,0x35L,1L,0x70L,0x87L,0xA9L},{1L,0x26L,(-1L),7L,0xBCL,8L,0x1FL},{0x8EL,0x0DL,1L,0x65L,0x65L,1L,0x0DL},{(-1L),1L,0L,(-2L),0x1FL,(-1L),0xF6L},{0L,0x10L,0x0DL,0xF7L,0x28L,0x70L,(-6L)},{0x1FL,7L,0xF6L,(-2L),0L,(-4L),(-1L)}}};
                    int i, j, k;
                    if ((l_582 &= 0x6F59321CL))
                    {
                        unsigned char l_1001 = 254UL;
                        g_447.f1 = (((safe_lshift_func_uint8_t_u_u((g_51 = func_30(((0x816D7851L == g_662[5][5]) <= ((safe_add_func_uint8_t_u_u(func_30((g_735[0][3][4] >= (g_778.f2 == l_970)), (safe_lshift_func_uint8_t_u_s(0x79L, 2)), ((((safe_mod_func_uint32_t_u_u(((g_142.f1 <= (1L >= ((((l_698 > l_990) | g_945) != 0x400DFFC6L) != l_970))) , 4294967295UL), g_229)) && g_447.f2) <= 2UL) | l_809[2][4].f1)), l_15)) , g_940)), g_20.f1, l_1001)), 0)) >= g_235.f2) , l_991);
                        l_1002 = g_235.f2;
                        l_554 = 7L;
                    }
                    else
                    {
                        unsigned short l_1010[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1010[i] = 1UL;
                        l_990 ^= 9L;
                        l_1011 = (((l_1003[1][1][2] , ((l_989[2] , (safe_sub_func_uint16_t_u_u(g_961, g_1006))) & ((func_68(l_1007, (((g_20 , 0x2E9C11A9L) ^ (safe_mod_func_uint32_t_u_u((g_354 = ((g_468.f0 = l_989[2]) , l_989[0])), l_964))) != g_940), g_20.f1, g_735[0][3][4], l_1003[1][1][2]) <= g_875) , 0x9CL))) <= l_1010[0]) == g_368.f0);
                        return g_662[5][5];
                    }
                }
                if (l_1002)
                {
                    unsigned l_1016 = 0xAAA8D2FBL;
                    g_735[0][3][4] ^= (((safe_sub_func_uint8_t_u_u(l_1002, (safe_lshift_func_int8_t_s_u((g_662[5][7] = (l_1016 ^ (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(func_30(func_41(g_435), ((safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(g_468.f0, ((safe_mod_func_int32_t_s_s(g_821.f0, (safe_lshift_func_int8_t_s_s(g_927[3], (g_662[5][5] = (+l_643)))))) || (((g_1031 , 0x2D7C9482L) && l_809[2][4].f2) >= l_1002)))), 0UL)), l_970)) || g_927[5]), g_468.f0), g_610)), 5)))), g_447.f2)))) >= l_525) == 0x97F9A932L);
                    l_554 = l_643;
                    if (l_1032[1][2])
                        continue;
                }
                else
                {
                    unsigned l_1040 = 0x31C4533BL;
                    int l_1052 = 0x4A971A14L;
                    g_735[0][3][4] = (l_554 ^= l_809[2][4].f1);
                    if (g_235.f2)
                    {
                        l_1033 = 0xF6DEDD6DL;
                        return l_1033;
                    }
                    else
                    {
                        short l_1048 = 0xED9FL;
                        int l_1050 = 0L;
                        struct S1 l_1051 = {2,-4298,18446744073709551609UL};
                        g_735[0][3][4] = ((func_37(g_961, g_51) | (safe_mod_func_int8_t_s_s(g_735[0][2][3], g_662[5][6]))) , (0xA2EBL == ((0UL > (+(safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((l_1040 = (l_554 = (((g_380[1][1] || g_778.f2) && g_504[1][1][6].f2) <= g_93))), 5)), 65535UL)))) | l_767)));
                        g_735[0][3][4] &= func_8((g_610 = l_1032[0][5]), (g_56[1][0][7] = (((g_435 = (safe_rshift_func_int8_t_s_u((l_1052 &= (l_1040 && func_64(func_8((g_945 = (l_1050 = (safe_lshift_func_int8_t_s_s((1L & l_1045), (((g_92[3][0] < ((!g_779.f2) > (func_64(((l_1049 |= (((safe_sub_func_int8_t_s_s(l_1002, (((+g_208) , (((l_698 , g_229) < l_991) , l_1048)) , g_927[0]))) <= 0UL) >= l_602[0])) , 5L)) , (-3L)))) || g_662[5][5]) != 0xB16356DCL))))), g_662[3][2], g_191, l_1051)))), l_964))) >= 1L) , 1UL)), l_1051.f2, g_1053[1]);
                        g_3 = g_435;
                    }
                    for (l_524 = 0; (l_524 != 24); l_524++)
                    {
                        unsigned short l_1056 = 1UL;
                        return l_1056;
                    }
                }
            }
            if (g_504[1][1][6].f0)
            {
                unsigned char l_1059 = 253UL;
                char l_1065 = (-1L);
                int l_1073 = 0xE618DCCAL;
                l_898 = (g_20 , g_1053[0]);
                g_1067[1][0] = func_21(((l_941 <= ((((g_266.f2 |= (((l_1032[1][2] >= 1UL) == (safe_lshift_func_uint8_t_u_s((l_1059 ^ l_582), (((safe_unary_minus_func_uint8_t_u((0L | (!(g_142 , ((safe_add_func_uint8_t_u_u(0x36L, ((safe_add_func_int16_t_s_s((-7L), 0x2ABEL)) , l_1002))) == g_133)))))) | l_1059) , g_380[1][1])))) , l_1049)) > l_1065) <= l_554) , 0xDF781935L)) && 5L), l_551, l_602[2], l_1066);
                g_1067[1][0].f1 |= (func_64(l_809[2][4].f0) , 0xB63B19EBL);
                for (g_1031 = 0; (g_1031 == 21); g_1031 = safe_add_func_uint8_t_u_u(g_1031, 6))
                {
                    unsigned char l_1072[4] = {1UL,1UL,1UL,1UL};
                    volatile int l_1083 = 0xD780A9F3L;
                    int i;
                    g_235.f1 = l_602[5];
                    for (l_767 = 0; (l_767 < (-29)); --l_767)
                    {
                        int l_1074 = 0x687CEC7DL;
                        unsigned short l_1082 = 3UL;
                        l_1073 = (g_92[1][0] &= (g_266.f0 == (g_435 = (0x646EL < l_1072[1]))));
                        g_779.f0 |= (-1L);
                        if (l_1074)
                            continue;
                        l_1083 = ((((0xEA45L < (g_435 = (((safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u(0x1264719BL, l_1081)), ((l_1082 = (((((g_263 , l_1065) <= 0xC6L) == (l_1072[1] < l_898.f1)) , 1L) , l_1072[3])) , g_380[0][2]))), l_806)) < g_954) , l_724))) <= g_1031) != g_92[0][0]) , g_468.f1);
                    }
                }
            }
            else
            {
                int l_1086 = (-1L);
                int l_1087[6] = {0x4510BA5AL,(-9L),(-9L),0x4510BA5AL,(-9L),(-9L)};
                short l_1124 = 0xDAB1L;
                int i;
                g_1067[1][0].f1 = (((0x58L | (l_1002 = (g_229 = func_68(g_669, ((((((safe_add_func_int8_t_s_s(((((((l_1087[5] |= ((g_662[4][1] |= l_1086) ^ (~g_380[1][1]))) == 255UL) >= (g_735[1][3][5] = g_447.f2)) == (-1L)) & (0xE06A3CD0L != g_1053[1].f1)) , g_503.f1), g_927[4])) | (-1L)) != g_191) | g_468.f2) , 0xC2L) < l_551), l_531, l_1086, g_142.f2)))) || l_1087[2]) & g_235.f0);
                g_1053[1].f1 &= (g_779.f0 == l_1087[5]);
                for (g_354 = 0; (g_354 <= 6); g_354 += 1)
                {
                    char l_1090 = 0x08L;
                    int l_1111[4][3][2] = {{{0x2078CAC5L,1L},{0x2F25A012L,1L},{0x2078CAC5L,0x2F25A012L}},{{0xAAA32257L,0xAAA32257L},{0xAAA32257L,0x2F25A012L},{0x2078CAC5L,1L}},{{0x2F25A012L,1L},{0x2078CAC5L,0x2F25A012L},{0xAAA32257L,0xAAA32257L}},{{0xAAA32257L,0x2F25A012L},{0x2078CAC5L,1L},{0x2F25A012L,1L}}};
                    char l_1126 = 0L;
                    int i, j, k;
                    if (g_435)
                    {
                        g_504[1][1][6].f1 = ((((safe_rshift_func_uint16_t_u_s(((func_64(l_1066) & (g_235.f1 , func_64((g_821 , func_68((func_37(g_133, l_973) == ((g_368.f2 == 0x13B5D439L) ^ 0xC88AL)), g_954, l_862, l_531, g_266.f0))))) <= g_927[5]), l_1090)) >= 0x891DL) || 0xCB0542EDL) & (-3L));
                    }
                    else
                    {
                        char l_1094[5][10] = {{(-10L),0x8BL,0x8BL,(-10L),0x8BL,0x8BL,(-10L),0x8BL,0x8BL,(-10L)},{0x8BL,(-10L),0x8BL,0x8BL,(-10L),0x8BL,0x8BL,(-10L),0x8BL,0x8BL},{(-10L),(-10L),(-1L),(-10L),(-10L),(-1L),(-10L),(-10L),(-1L),(-10L)},{(-10L),0x8BL,0x8BL,(-10L),0x8BL,0x8BL,(-10L),0x8BL,0x8BL,(-10L)},{0x8BL,(-10L),0x8BL,0x8BL,(-10L),0x8BL,0x8BL,(-10L),0x8BL,0x8BL}};
                        int i, j;
                        if (g_945)
                            goto lbl_1091;
                        g_235.f0 = (safe_add_func_uint8_t_u_u((0xD84FL & l_1094[0][0]), (((safe_mod_func_uint32_t_u_u((((((safe_rshift_func_uint16_t_u_u(g_778.f2, (((l_1111[2][2][0] = ((l_1110 = ((safe_add_func_uint8_t_u_u(l_643, (safe_rshift_func_int8_t_s_u((l_1002 = 0x64L), 6)))) , (g_1067[1][0].f2 = ((((((safe_lshift_func_uint16_t_u_s(0xA816L, 0)) & (g_662[5][5] >= ((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u(((func_68(g_4, l_941, l_1094[0][0], l_1087[0], g_1053[1].f2) | l_805) || l_1049), g_229)) | g_368.f0), g_1053[1].f1)) != g_662[5][7]))) ^ l_1109) > g_821.f2) ^ l_1090) <= 0xE5C15244L)))) , g_92[3][1])) | 0xC57BF4FAL) < g_368.f0))) > l_1090) , g_504[1][1][6].f0) | l_1112) || l_1112), l_1094[0][0])) | g_662[5][4]) ^ 4294967295UL)));
                    }
                    g_778.f0 = l_898.f2;
                    g_1117 = func_21(g_235.f1, g_368.f0, (safe_rshift_func_int8_t_s_u(l_1110, 2)), (l_1087[5] | ((((l_730 || (l_1111[1][0][0] = ((safe_add_func_int32_t_s_s((((((0x6221L < ((g_1067[1][0].f0 == (1L | g_927[1])) > 0UL)) || l_1090) ^ 0xA141L) && 0x53E47BB6L) ^ l_1049), 0x9D498780L)) < 0x4364L))) , g_1067[1][0].f2) & l_1110) <= l_809[2][4].f0)));
                    if (l_531)
                        continue;
                    for (l_941 = 0; (l_941 <= 6); l_941 += 1)
                    {
                        int i, j;
                        if (g_662[l_941][(g_354 + 1)])
                            break;
                        g_1117.f0 = func_68((g_1031 = l_582), (safe_lshift_func_uint16_t_u_u((l_1002 = g_1006), 3)), (safe_add_func_uint16_t_u_u(0xFBD3L, l_767)), g_447.f0, (0UL == ((((l_1124 = ((l_1111[3][2][1] != (safe_lshift_func_uint16_t_u_u(0xA32AL, (+0xBDE7L)))) || (-1L))) & l_1125) <= (-1L)) == l_1126)));
                        return g_447.f0;
                    }
                }
            }
            if (g_821.f2)
                goto lbl_616;
            l_554 = (((safe_sub_func_uint32_t_u_u((l_805 , l_809[2][4].f1), ((safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((0x66A3CA67L >= (func_30((l_898.f1 &= g_266.f1), g_138, (((l_862 & g_927[6]) < ((g_875 = (l_524 = 255UL)) && ((safe_unary_minus_func_uint16_t_u(((((g_20.f0 = (g_1117.f2 |= ((g_266.f2 <= 0xBAL) | l_730))) & g_93) < 65530UL) , 0x9A16L))) | g_735[0][3][4]))) , l_1011)) | g_882)), g_447.f0)), l_1032[1][2])), g_266.f0)) & l_1136))) == 2UL) != l_1109);
        }
        else
        {
            int l_1137[4][9][5] = {{{(-1L),0L,0x4BADB702L,0xE8A58E21L,0L},{0L,0xCCC72FFEL,0x4BADB702L,0x560F8691L,0x4BADB702L},{0L,0xE8A58E21L,(-1L),0x4BADB702L,5L},{0L,5L,(-2L),0x4BADB702L,0x4BADB702L},{0x4BADB702L,0x560F8691L,0x4BADB702L,0xCCC72FFEL,0L},{(-2L),5L,0L,2L,0L},{(-1L),0xE8A58E21L,0xE8A58E21L,(-1L),0x4BADB702L},{0xEEBCF8F2L,(-1L),0L,0L,5L},{0xEEBCF8F2L,0L,0x4BADB702L,0L,0xEEBCF8F2L}},{{(-1L),2L,(-2L),0L,0xE8A58E21L},{(-2L),2L,(-1L),(-1L),2L},{0x4BADB702L,0L,0xEEBCF8F2L,2L,0xE8A58E21L},{0L,(-1L),0xEEBCF8F2L,0xCCC72FFEL,0xEEBCF8F2L},{0xE8A58E21L,0xE8A58E21L,(-1L),0x4BADB702L,5L},{0L,5L,(-2L),0x4BADB702L,0x4BADB702L},{0x4BADB702L,0x560F8691L,0x4BADB702L,0xCCC72FFEL,0L},{(-2L),5L,0L,2L,0L},{(-1L),0xE8A58E21L,0xE8A58E21L,(-1L),0x4BADB702L}},{{0xEEBCF8F2L,(-1L),0L,0L,5L},{0xEEBCF8F2L,0L,0x4BADB702L,0L,0xEEBCF8F2L},{(-1L),2L,(-2L),0L,0xE8A58E21L},{(-2L),0xCCC72FFEL,0L,0L,0xCCC72FFEL},{0xE8A58E21L,5L,2L,0xCCC72FFEL,0x560F8691L},{5L,0L,2L,0L,2L},{0x560F8691L,0x560F8691L,0L,0xE8A58E21L,0x4BADB702L},{5L,0x4BADB702L,(-1L),0xE8A58E21L,0xE8A58E21L},{0xE8A58E21L,0xEEBCF8F2L,0xE8A58E21L,0L,(-2L)}},{{(-1L),0x4BADB702L,5L,0xCCC72FFEL,(-2L)},{0L,0x560F8691L,0x560F8691L,0L,0xE8A58E21L},{2L,0L,5L,(-2L),0x4BADB702L},{2L,5L,0xE8A58E21L,5L,2L},{0L,0xCCC72FFEL,(-1L),(-2L),0x560F8691L},{(-1L),0xCCC72FFEL,0L,0L,0xCCC72FFEL},{0xE8A58E21L,5L,2L,0xCCC72FFEL,0x560F8691L},{5L,0L,2L,0L,2L},{0x560F8691L,0x560F8691L,0L,0xE8A58E21L,0x4BADB702L}}};
            unsigned l_1162 = 4294967293UL;
            unsigned short l_1170 = 0x54B5L;
            int l_1171 = (-7L);
            int l_1193 = (-1L);
            int i, j, k;
            l_1137[3][6][4] = 4L;
            for (l_898.f2 = (-14); (l_898.f2 <= 57); l_898.f2++)
            {
                unsigned l_1142 = 0UL;
                unsigned short l_1161 = 0xEA97L;
                for (g_4 = 4; (g_4 >= 0); g_4 -= 1)
                {
                    int l_1143 = 0xC3188F1DL;
                    char l_1144[6] = {0x30L,0x30L,0L,0x30L,0x30L,0L};
                    unsigned l_1163 = 0xB14B4BCEL;
                    unsigned l_1167 = 1UL;
                    int i;
                    for (l_767 = 0; (l_767 <= 6); l_767 += 1)
                    {
                        int l_1160 = 0x9C61DB2CL;
                        int i, j;
                        g_380[0][2] = (func_8(g_662[g_4][g_4], g_821.f1, g_662[g_4][g_4], g_142) , (((safe_lshift_func_uint16_t_u_u(0x56FDL, (g_138 ^= l_1142))) | 1L) || (g_435 || g_662[6][0])));
                        l_1143 ^= (func_41(g_882) , g_503.f1);
                        l_1162 |= (l_1144[2] ^ (safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((+g_142.f2), (safe_sub_func_uint8_t_u_u(func_64((((!(((safe_add_func_int8_t_s_s((g_662[5][5] = func_13(g_266.f1)), ((func_64(g_468.f2) | ((g_940 != (l_554 |= (g_138 , ((safe_unary_minus_func_int8_t_s(((safe_mod_func_uint32_t_u_u((g_1053[1].f0 = ((((safe_rshift_func_uint8_t_u_s((l_1160 = 0xCEL), l_643)) & l_1161) && l_805) & l_1144[3])), g_138)) ^ 0x71CDL))) & 0x25L)))) & g_138)) , g_435))) < g_1117.f2) >= 65535UL)) >= 1UL) <= 1L)), 0L)))) <= l_1144[2]), l_1011)), 255UL)));
                    }
                    for (g_208 = 1; (g_208 >= 0); g_208 -= 1)
                    {
                        int i, j;
                        return g_380[g_208][(g_208 + 3)];
                    }
                    for (l_1007 = 1; (l_1007 >= 0); l_1007 -= 1)
                    {
                        struct S1 l_1166[7][5][7] = {{{{3,-298,1UL},{7,4136,0UL},{7,-5409,0xCF9D26E1L},{3,-418,0x0C1C7432L},{1,-1477,18446744073709551615UL},{3,4763,1UL},{7,-577,0x13DE12C1L}},{{5,-5167,0UL},{3,7429,0UL},{7,-1300,1UL},{4,4391,0xC9F3AB37L},{4,-7618,0UL},{5,-4440,0xC4169DA8L},{3,-6275,0UL}},{{2,1183,0xA7D5DEA4L},{4,-3159,0x4B5AF6CEL},{3,106,18446744073709551615UL},{5,-5367,18446744073709551612UL},{5,-703,1UL},{3,5171,18446744073709551612UL},{3,4546,18446744073709551615UL}},{{7,-6200,3UL},{5,3120,0x61D36B37L},{3,4546,18446744073709551615UL},{4,8158,0xA31388F8L},{4,-2360,1UL},{5,953,9UL},{4,-2039,0xBAF8E4F2L}},{{1,3573,1UL},{6,6642,18446744073709551615UL},{0,-5556,1UL},{3,4546,18446744073709551615UL},{5,953,9UL},{4,-7618,0UL},{0,-6992,0x118D4972L}}},{{{0,2770,18446744073709551615UL},{2,-7617,0x673DACA6L},{6,-1402,7UL},{3,4546,18446744073709551615UL},{6,-342,18446744073709551609UL},{4,-4118,0x6C89FE6FL},{0,6581,1UL}},{{7,7436,0x2885AC3DL},{1,2210,18446744073709551608UL},{4,-3040,0x212BC867L},{4,8158,0xA31388F8L},{6,-8034,0x3085FB14L},{4,-2360,1UL},{4,4391,0xC9F3AB37L}},{{6,4585,18446744073709551609UL},{2,-1311,0xC4C665FEL},{1,-4347,18446744073709551609UL},{5,-5367,18446744073709551612UL},{5,944,0UL},{1,-1477,18446744073709551615UL},{3,106,18446744073709551615UL}},{{5,3120,0x61D36B37L},{7,4136,0UL},{0,6187,0x5D9468D5L},{3,-298,1UL},{3,4546,18446744073709551615UL},{7,-577,0x13DE12C1L},{5,-2266,18446744073709551615UL}},{{7,4136,0UL},{0,2038,1UL},{7,-69,1UL},{2,4025,0xF7E8B25AL},{3,7429,0UL},{3,7429,0UL},{2,4025,0xF7E8B25AL}}},{{{6,3715,0xC9FFDB68L},{2,-7617,0x673DACA6L},{6,3715,0xC9FFDB68L},{1,-4347,18446744073709551609UL},{7,-5262,0x2FA08478L},{2,6683,0x92188197L},{7,47,0x3D88A5A0L}},{{4,-3582,0xF092A57DL},{3,-3291,0x35BE6494L},{1,69,0xA2728D1BL},{6,5983,0UL},{7,47,0x3D88A5A0L},{3,106,18446744073709551615UL},{6,-8034,0x3085FB14L}},{{2,6677,0UL},{3,106,18446744073709551615UL},{0,2038,1UL},{4,-3159,0x4B5AF6CEL},{3,-3291,0x35BE6494L},{2,6683,0x92188197L},{3,106,18446744073709551615UL}},{{5,-2266,18446744073709551615UL},{3,-6275,0UL},{6,4677,0x7F42FCC8L},{3,4763,1UL},{6,6642,18446744073709551615UL},{3,7429,0UL},{1,3892,0xB5CEB009L}},{{1,3573,1UL},{4,-3582,0xF092A57DL},{3,3885,0x5822B394L},{0,6187,0x5D9468D5L},{6,6950,0x24F41D4FL},{7,-577,0x13DE12C1L},{6,4677,0x7F42FCC8L}}},{{{1,-1477,18446744073709551615UL},{4,-3820,1UL},{2,6677,0UL},{7,7436,0x2885AC3DL},{7,-5262,0x2FA08478L},{1,-1477,18446744073709551615UL},{3,-1799,7UL}},{{0,-5556,1UL},{6,6642,18446744073709551615UL},{1,3573,1UL},{4,6251,0xAB147BD2L},{0,2038,1UL},{4,-3040,0x212BC867L},{6,4677,0x7F42FCC8L}},{{5,944,0UL},{3,3885,0x5822B394L},{0,-5556,1UL},{7,47,0x3D88A5A0L},{3,-8123,1UL},{0,6581,1UL},{1,69,0xA2728D1BL}},{{2,6683,0x92188197L},{4,-3159,0x4B5AF6CEL},{2,1183,0xA7D5DEA4L},{7,-1771,1UL},{0,-451,0x5F20D04BL},{2,6677,0UL},{5,-4440,0xC4169DA8L}},{{2,6683,0x92188197L},{4,8158,0xA31388F8L},{4,-2039,0xBAF8E4F2L},{3,3885,0x5822B394L},{2,-3086,0UL},{6,-1402,7UL},{3,-298,1UL}}},{{{5,944,0UL},{3,106,18446744073709551615UL},{4,4391,0xC9F3AB37L},{7,-5409,0xCF9D26E1L},{0,-5556,1UL},{1,-842,0xEC379C4DL},{4,-2360,1UL}},{{0,-5556,1UL},{0,6187,0x5D9468D5L},{7,-6200,3UL},{5,-2266,18446744073709551615UL},{1,-4347,18446744073709551609UL},{7,-5409,0xCF9D26E1L},{3,-8123,1UL}},{{7,47,0x3D88A5A0L},{6,5983,0UL},{1,69,0xA2728D1BL},{3,-3291,0x35BE6494L},{4,-3582,0xF092A57DL},{7,81,0xFD1C1945L},{4,8158,0xA31388F8L}},{{5,-3235,1UL},{2,6677,0UL},{7,-6322,0xAC516837L},{7,-577,0x13DE12C1L},{7,-6322,0xAC516837L},{2,6677,0UL},{5,-3235,1UL}},{{2,-3086,0UL},{7,-5409,0xCF9D26E1L},{7,-1771,1UL},{1,69,0xA2728D1BL},{5,-5167,0UL},{3,-418,0x0C1C7432L},{2,1183,0xA7D5DEA4L}}},{{{2,-7617,0x673DACA6L},{7,-5262,0x2FA08478L},{4,-4148,18446744073709551609UL},{2,1183,0xA7D5DEA4L},{7,-69,1UL},{5,944,0UL},{4,-3582,0xF092A57DL}},{{0,-451,0x5F20D04BL},{3,-7937,6UL},{7,-1771,1UL},{5,-2266,18446744073709551615UL},{3,106,18446744073709551615UL},{3,6394,5UL},{3,5323,0x9CA393D3L}},{{2,-7987,0x108E4C2CL},{6,1581,3UL},{7,-6322,0xAC516837L},{1,-842,0xEC379C4DL},{3,-8123,1UL},{4,4391,0xC9F3AB37L},{7,-69,1UL}},{{0,2770,18446744073709551615UL},{4,-4118,0x6C89FE6FL},{1,69,0xA2728D1BL},{3,-6275,0UL},{1,-4162,18446744073709551614UL},{2,6683,0x92188197L},{2,-5660,18446744073709551613UL}},{{1,-1477,18446744073709551615UL},{7,-5409,0xCF9D26E1L},{7,-6200,3UL},{6,3715,0xC9FFDB68L},{2,4025,0xF7E8B25AL},{3,5323,0x9CA393D3L},{6,-5522,0x9FFBDF95L}}},{{{6,753,0xECF791A2L},{5,953,9UL},{3,-298,1UL},{2,-3086,0UL},{6,-5522,0x9FFBDF95L},{6,1581,3UL},{4,-7618,0UL}},{{6,-1402,7UL},{5,-2266,18446744073709551615UL},{2,-7987,0x108E4C2CL},{5,-703,1UL},{5,953,9UL},{1,-1477,18446744073709551615UL},{5,-2266,18446744073709551615UL}},{{2,1183,0xA7D5DEA4L},{5,-4440,0xC4169DA8L},{2,-5660,18446744073709551613UL},{7,-6322,0xAC516837L},{5,953,9UL},{0,-451,0x5F20D04BL},{5,-3235,1UL}},{{0,2038,1UL},{2,-1311,0xC4C665FEL},{5,-4440,0xC4169DA8L},{5,944,0UL},{6,-5522,0x9FFBDF95L},{0,-6992,0x118D4972L},{6,-342,18446744073709551609UL}},{{3,4546,18446744073709551615UL},{5,3873,18446744073709551615UL},{7,81,0xFD1C1945L},{6,-1402,7UL},{2,4025,0xF7E8B25AL},{3,4546,18446744073709551615UL},{2,6683,0x92188197L}}}};
                        int i, j, k;
                        g_1067[1][0].f0 ^= func_8(g_368.f0, l_1163, (safe_sub_func_int8_t_s_s(9L, (l_1142 , (0x92923119L <= 0x412BEE71L)))), l_1166[5][2][5]);
                        if (l_1167)
                            continue;
                        g_142.f1 = l_601[2][4][0];
                        if (l_1144[2])
                            continue;
                    }
                }
                g_380[1][1] = (safe_rshift_func_int8_t_s_s(func_41((l_1171 = l_1170)), (g_662[6][5] , (((((g_4 > (g_1053[1] , g_954)) <= g_1067[1][0].f0) <= (g_961 ^= (func_64(((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(((g_447.f0 = ((l_730 <= (+(g_368.f0 == l_1137[2][5][0]))) <= g_669)) == 6UL), 5)), l_767)) , g_875)) > g_821.f2))) && (-1L)) , (-9L)))));
                g_142.f1 |= (((safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s((g_369.f0 = ((((safe_add_func_uint32_t_u_u((4294967295UL <= (g_1053[1].f1 = (l_524 = (safe_mod_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s((l_554 &= (safe_unary_minus_func_uint8_t_u((((0x37L == l_582) || (((g_961 = 0UL) != ((l_1049 , ((g_435 = ((l_1171 = l_1162) < ((safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((((safe_rshift_func_uint8_t_u_s((l_1193 |= 255UL), 6)) || g_229) && (safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(0x8BF2650BL, l_698)), 2))) < g_179), 6L)), 0xFDL)) & g_56[7][0][8]))) < 0x8112L)) != 1UL)) <= g_503.f2)) & 7L)))), l_601[7][1][0])) , g_380[1][1]), 0x027C8910L))))), l_1142)) || 255UL) < 0x835BB65FL) , 0xA38F20EAL)), 0x6D7D6CC6L)), l_525)) | g_92[3][0]) , g_713);
                g_1199 = g_1198;
            }
        }
    }
    else
    {
        g_779.f1 &= l_862;
    }
    return l_1200;
}







static char func_8(short p_9, unsigned p_10, unsigned short p_11, struct S1 p_12)
{
    unsigned char l_34 = 0x7FL;
    int l_370 = (-1L);
    unsigned short l_495 = 0x452EL;
    for (p_11 = 0; (p_11 <= 2); p_11 += 1)
    {
        int l_40 = 0x3A21B78CL;
        int l_341[1];
        int l_399 = 0xCDDFC541L;
        unsigned char l_402 = 1UL;
        short l_444 = 0x6E38L;
        int i;
        for (i = 0; i < 1; i++)
            l_341[i] = (-1L);
        p_12.f1 = p_12.f1;
        l_370 |= (func_21((safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u(g_20.f1, 0xF9L)), (g_20.f1 , func_30(p_10, l_34, (l_341[0] = (((((safe_mod_func_int32_t_s_s(g_20.f0, 0x7A2E255BL)) <= func_37(g_20.f1, l_40)) > 9UL) | 0xB0FBL) <= (-3L))))))), p_12.f0, l_34, p_12.f1) , p_10);
        for (g_142.f2 = 0; (g_142.f2 <= 2); g_142.f2 += 1)
        {
            unsigned l_379 = 4294967287UL;
            short l_381 = 0L;
            int l_398[5];
            unsigned l_421 = 1UL;
            int l_456[1];
            int l_487[7][1];
            struct S1 l_499 = {2,5336,0xE4C950BEL};
            int i, j;
            for (i = 0; i < 5; i++)
                l_398[i] = (-1L);
            for (i = 0; i < 1; i++)
                l_456[i] = 0x423A7828L;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 1; j++)
                    l_487[i][j] = 0xE18C88A2L;
            }
            for (g_133 = 0; (g_133 <= 1); g_133 += 1)
            {
                struct S1 l_371 = {4,5794,0x2EB9DF43L};
                for (g_208 = 0; (g_208 <= 2); g_208 += 1)
                {
                    unsigned l_378 = 0UL;
                    int i, j;
                    l_371 = g_142;
                    p_12.f1 = (func_13(g_92[(g_208 + 1)][g_133]) , (((safe_rshift_func_uint16_t_u_s(((l_341[0] = l_371.f1) , g_368.f2), 4)) < ((safe_add_func_int8_t_s_s((g_56[7][0][8] < 0x45L), (((l_378 |= (((g_93 && (safe_mod_func_int8_t_s_s(l_370, (p_11 , 0xD8L)))) < p_9) && p_12.f2)) ^ l_379) ^ l_379))) | p_9)) , g_380[1][1]));
                }
            }
            if ((((0xC3L != l_381) > (func_64((g_368.f0 = (l_341[0] = (safe_sub_func_uint16_t_u_u(((-1L) <= p_11), p_12.f1))))) | (safe_rshift_func_int16_t_s_u(func_64(p_9), 9)))) , (g_92[3][0] ^= (func_64(func_13(((((((l_379 && g_138) >= g_20.f2) || l_34) != 0xBBA03617L) < g_208) != l_341[0]))) < 0xA4FDL))))
            {
                unsigned short l_389 = 0UL;
                int l_400 = (-6L);
                int l_401 = 0xD1211589L;
                for (p_12.f2 = 0; (p_12.f2 <= 2); p_12.f2 += 1)
                {
                    return p_10;
                }
                if (p_9)
                {
                    return g_368.f0;
                }
                else
                {
                    int i;
                    l_401 |= (l_400 |= (((safe_lshift_func_int8_t_s_u((((g_2[g_142.f2] , (g_51 = ((+(l_398[0] = (((func_13(((((((l_34 <= func_13(((g_56[6][0][0] , g_235.f2) <= ((!(safe_unary_minus_func_uint16_t_u(((func_64((g_92[3][0] = ((l_389 == func_13((safe_mod_func_int8_t_s_s((g_266.f0 == ((safe_add_func_int16_t_s_s(func_64(((g_235.f0 = ((safe_rshift_func_uint8_t_u_u(g_20.f0, (safe_add_func_int32_t_s_s(((l_398[4] &= func_13(l_341[0])) <= 0x48A5L), p_11)))) && p_11)) | p_11)), 0xACC8L)) , p_12.f0)), 255UL)))) <= l_399))) || g_51) && g_179)))) && p_12.f0)))) , p_12.f2) >= p_10) >= 0xD9L) <= (-1L)) >= 7UL)) >= g_208) ^ g_2[g_142.f2].f2) , (-9L)))) <= p_12.f1))) && l_34) & 0x45L), 2)) == g_354) , 0L));
                }
                return l_379;
            }
            else
            {
                unsigned l_436 = 4294967288UL;
                struct S1 l_475 = {6,-5411,0UL};
                unsigned l_502[5][9] = {{0xC9CCF949L,18446744073709551611UL,0xC9CCF949L,18446744073709551611UL,0xC9CCF949L,18446744073709551611UL,0xC9CCF949L,18446744073709551611UL,0xC9CCF949L},{0x14A99FFFL,0x14A99FFFL,0x14A99FFFL,0x14A99FFFL,0x14A99FFFL,0x14A99FFFL,0x14A99FFFL,0x14A99FFFL,0x14A99FFFL},{0xC9CCF949L,18446744073709551611UL,0xC9CCF949L,18446744073709551611UL,0xC9CCF949L,18446744073709551611UL,0xC9CCF949L,18446744073709551611UL,0xC9CCF949L},{0x14A99FFFL,0x14A99FFFL,0x14A99FFFL,0x14A99FFFL,0x14A99FFFL,0x14A99FFFL,0x14A99FFFL,0x14A99FFFL,0x14A99FFFL},{0xC9CCF949L,18446744073709551611UL,0xC9CCF949L,18446744073709551611UL,0xC9CCF949L,18446744073709551611UL,0xC9CCF949L,18446744073709551611UL,0xC9CCF949L}};
                int i, j;
                if ((+l_341[0]))
                {
                    unsigned l_422 = 4294967295UL;
                    unsigned l_423 = 18446744073709551615UL;
                    int l_424[10][5] = {{0x27B3C5AFL,1L,0xCA8B75B9L,0xCA8B75B9L,1L},{1L,0x5933EB76L,0x27B3C5AFL,1L,0xCA8B75B9L},{6L,1L,0x874411FAL,6L,0xAF13EE54L},{0xCA8B75B9L,1L,0x27B3C5AFL,0x5933EB76L,1L},{0xAF13EE54L,0x27B3C5AFL,0x27B3C5AFL,0xAF13EE54L,0x5933EB76L},{6L,0xAF13EE54L,0x874411FAL,1L,1L},{0xCA8B75B9L,0xAF13EE54L,0xCA8B75B9L,0x5933EB76L,0xAF13EE54L},{1L,0x27B3C5AFL,0x5933EB76L,1L,0x5933EB76L},{1L,1L,0x874411FAL,0xAF13EE54L,6L},{0xCA8B75B9L,6L,0x5933EB76L,0x5933EB76L,6L}};
                    int i, j;
                    if (l_402)
                    {
                        int l_403[10];
                        int l_414 = 2L;
                        int i;
                        for (i = 0; i < 10; i++)
                            l_403[i] = 0x5EEDD2B8L;
                        l_424[6][3] &= (((l_403[3] , g_20.f1) , (p_12 , (safe_sub_func_int32_t_s_s(func_13(l_34), (safe_mod_func_uint16_t_u_u((((((safe_mod_func_int32_t_s_s(1L, (((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((((g_235.f0 = (l_414 = (p_12.f1 = (-1L)))) >= g_354) || (((safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(((((g_235.f0 ^= func_64((safe_mod_func_int16_t_s_s((l_421 , g_266.f2), g_369.f2)))) & l_422) & 0x566DL) , l_423), g_369.f2)), g_20.f0)) , g_235.f2) | p_12.f2)), p_9)), l_422)) , p_9) , l_414))) && g_369.f2) >= 0x1F4E67AEL) < 0x74CAL) < 255UL), 65535UL)))))) | 0x05B6C174L);
                        return l_402;
                    }
                    else
                    {
                        return g_51;
                    }
                }
                else
                {
                    unsigned l_433 = 0xAC696D2CL;
                    int l_434 = 0x50B24073L;
                    g_369.f1 = ((g_208 = p_11) >= (l_434 = ((((safe_mod_func_uint16_t_u_u((func_13(((g_235.f2 = 0UL) & (g_354 ^= (safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(p_12.f2, (p_12.f1 |= g_142.f0))), (g_179 , func_13(l_379))))))) || (((g_368.f0 = (((safe_rshift_func_int16_t_s_s(p_10, 9)) > p_12.f1) & 65527UL)) | 6UL) | g_380[1][1])), g_133)) ^ l_433) > g_138) != 0L)));
                    for (l_379 = 0; (l_379 <= 2); l_379 += 1)
                    {
                        g_266.f1 = (g_142 , l_433);
                    }
                }
                p_12.f1 &= g_56[6][0][0];
                if ((g_51 ^ ((+(g_369.f2 , (g_435 == ((p_11 > (l_436 == (((!func_64((func_13(g_92[0][1]) , ((safe_sub_func_uint32_t_u_u((p_12.f0 = p_12.f0), (g_368.f2 = (safe_lshift_func_int16_t_s_s(((g_133 = func_13(g_369.f1)) ^ p_10), 5))))) == g_142.f0)))) , l_379) | g_354))) == p_11)))) > 0x1B40L)))
                {
                    int l_445 = 9L;
                    int l_446 = 0x09210B71L;
                    int l_494 = 0x40D2264DL;
                    if (((safe_unary_minus_func_uint16_t_u(((safe_add_func_int32_t_s_s(p_12.f1, g_142.f0)) >= ((l_446 = (l_445 = (g_20.f1 = l_444))) >= 4294967286UL)))) , g_142.f2))
                    {
                        p_12.f1 |= 0xAFA983C5L;
                    }
                    else
                    {
                        p_12.f1 = 0x400376F3L;
                        g_266.f1 &= 0xEDF92732L;
                        if (l_445)
                            break;
                    }
                    if (((g_142 , g_447) , (p_12.f1 , (g_266.f1 | ((func_64(((p_9 <= (((p_11 | (l_436 >= l_436)) >= (safe_lshift_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((func_64((g_266.f0 = (p_12.f1 = ((l_398[4] = (((((safe_lshift_func_uint16_t_u_s(g_20.f2, p_12.f2)) & 4294967292UL) < (-4L)) , p_12.f0) != p_11)) || g_51)))) & l_456[0]), l_436)) ^ g_133), 8))) <= 0xC8FBL)) < l_436)) < 0UL) == 255UL)))))
                    {
                        unsigned char l_467[8][2] = {{0x21L,1UL},{7UL,1UL},{0x21L,7UL},{0x48L,0x48L},{0x48L,7UL},{0x21L,1UL},{7UL,1UL},{0x21L,7UL}};
                        int i, j;
                        l_445 = (p_9 > p_10);
                        l_370 = (((p_12.f0 && (((safe_sub_func_uint16_t_u_u((p_10 < (safe_add_func_int8_t_s_s(0x22L, (safe_sub_func_uint32_t_u_u(func_13(func_13(l_34)), (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(func_64(l_467[2][0]), l_445)), l_467[4][1]))))))), 0xAFD8L)) <= g_142.f1) >= g_368.f2)) > g_56[3][0][6]) && p_12.f2);
                    }
                    else
                    {
                        char l_484 = 0x56L;
                        int i;
                        g_2[p_11] = g_468;
                        l_370 = (safe_sub_func_uint8_t_u_u((l_445 = (safe_sub_func_int16_t_s_s(g_447.f2, ((safe_rshift_func_uint16_t_u_s(p_9, (func_64(func_13(func_64((((g_142.f1 != ((((p_12 = l_475) , (safe_mod_func_int32_t_s_s((1UL != (safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s((6L ^ ((0L != (l_446 > 0xD7F501F7L)) , l_34)), g_133)), 0xC479337BL))), l_484))) , 0x541FL) || g_266.f1)) != p_11) == 1UL)))) != p_10))) == g_2[p_11].f2)))), l_456[0]));
                        l_341[0] |= p_12.f1;
                    }
                    p_12.f1 &= ((l_494 &= ((l_341[0] <= ((func_13(((l_456[0] |= (safe_sub_func_uint32_t_u_u((g_447.f2 |= (func_21(p_9, l_446, l_487[1][0], (l_370 &= 0x25772441L)) , (p_12.f0 &= g_468.f2))), l_381))) && ((((safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((g_266.f1 == l_399), (-2L))) || g_56[4][0][1]), p_9)), 11)) < 0x4869FFA6L) & l_446) <= g_142.f2))) || 0xFB3080E2L) >= l_398[3])) <= l_445)) , l_495);
                }
                else
                {
                    struct S1 l_498[7][3][2] = {{{{3,2523,18446744073709551615UL},{3,2523,18446744073709551615UL}},{{3,2523,18446744073709551615UL},{4,7454,18446744073709551615UL}},{{6,-1850,0x2CAD2FD9L},{6,-6085,0UL}}},{{{4,7454,18446744073709551615UL},{6,-6085,0UL}},{{6,-1850,0x2CAD2FD9L},{4,7454,18446744073709551615UL}},{{3,2523,18446744073709551615UL},{3,2523,18446744073709551615UL}}},{{{3,2523,18446744073709551615UL},{4,7454,18446744073709551615UL}},{{6,-1850,0x2CAD2FD9L},{6,-6085,0UL}},{{4,7454,18446744073709551615UL},{6,-6085,0UL}}},{{{6,-1850,0x2CAD2FD9L},{4,7454,18446744073709551615UL}},{{3,2523,18446744073709551615UL},{3,2523,18446744073709551615UL}},{{3,2523,18446744073709551615UL},{4,7454,18446744073709551615UL}}},{{{6,-1850,0x2CAD2FD9L},{6,-6085,0UL}},{{4,7454,18446744073709551615UL},{6,-6085,0UL}},{{6,-1850,0x2CAD2FD9L},{4,7454,18446744073709551615UL}}},{{{3,2523,18446744073709551615UL},{3,2523,18446744073709551615UL}},{{3,2523,18446744073709551615UL},{4,7454,18446744073709551615UL}},{{6,-1850,0x2CAD2FD9L},{6,-6085,0UL}}},{{{4,7454,18446744073709551615UL},{6,-6085,0UL}},{{6,-1850,0x2CAD2FD9L},{4,7454,18446744073709551615UL}},{{3,2523,18446744073709551615UL},{6,-6085,0UL}}}};
                    int i, j, k;
                    if ((safe_add_func_uint8_t_u_u(func_13(l_34), func_64(((p_12 = l_498[6][2][0]) , g_229)))))
                    {
                        l_499 = l_499;
                        return l_487[1][0];
                    }
                    else
                    {
                        g_380[1][1] &= (g_369.f0 = 0x7D235A63L);
                        if (g_263)
                            continue;
                    }
                    p_12.f1 = ((safe_rshift_func_int16_t_s_s(p_10, 14)) || (func_13(l_402) , l_502[4][3]));
                    g_504[1][1][6] = g_503;
                    if (g_142.f2)
                        continue;
                }
            }
        }
        if (l_402)
            break;
    }
    return p_12.f2;
}







static unsigned func_13(unsigned short p_14)
{
    unsigned l_19 = 18446744073709551614UL;
    for (p_14 = 0; (p_14 <= 9); p_14 = safe_add_func_int32_t_s_s(p_14, 6))
    {
        short l_18 = 0L;
        return l_18;
    }
    l_19 = (-1L);
    return g_3;
}







static struct S0 func_21(short p_22, char p_23, unsigned p_24, unsigned p_25)
{
    int l_358[1];
    struct S1 l_359[3][9][5] = {{{{1,1275,18446744073709551615UL},{7,7037,0xE56EBD7AL},{0,-2237,1UL},{6,7123,0xBD332B89L},{5,-895,18446744073709551614UL}},{{7,5840,1UL},{0,-2889,0UL},{2,3911,0x5C1104DDL},{7,7037,0xE56EBD7AL},{4,-4378,0x5E920F64L}},{{6,6823,0x76D71B74L},{6,-4648,0xB8AEEBAFL},{5,5602,0x3290B5A5L},{5,5748,0xA9AA2DC8L},{5,5602,0x3290B5A5L}},{{6,-3869,9UL},{6,-3869,9UL},{5,5602,0x3290B5A5L},{0,-5793,0x87386A1BL},{0,-2889,0UL}},{{2,-4109,0xA55D4B49L},{6,7123,0xBD332B89L},{2,3911,0x5C1104DDL},{1,1275,18446744073709551615UL},{5,5748,0xA9AA2DC8L}},{{4,1798,0UL},{2,4643,1UL},{0,-2237,1UL},{7,5840,1UL},{2,-4109,0xA55D4B49L}},{{6,-4648,0xB8AEEBAFL},{6,7123,0xBD332B89L},{2,-3070,1UL},{6,6823,0x76D71B74L},{0,-2237,1UL}},{{2,6679,0x3F3E70D1L},{6,-3869,9UL},{7,5840,1UL},{6,-3869,9UL},{2,6679,0x3F3E70D1L}},{{2,6679,0x3F3E70D1L},{6,-4648,0xB8AEEBAFL},{4,1798,0UL},{2,-4109,0xA55D4B49L},{6,-3869,9UL}}},{{{6,-4648,0xB8AEEBAFL},{0,-2889,0UL},{7,7037,0xE56EBD7AL},{4,1798,0UL},{7,5840,1UL}},{{4,1798,0UL},{7,7037,0xE56EBD7AL},{0,-2889,0UL},{6,-4648,0xB8AEEBAFL},{6,-3869,9UL}},{{2,-4109,0xA55D4B49L},{4,1798,0UL},{6,-4648,0xB8AEEBAFL},{2,6679,0x3F3E70D1L},{2,6679,0x3F3E70D1L}},{{6,-3869,9UL},{7,5840,1UL},{6,-3869,9UL},{2,6679,0x3F3E70D1L},{0,-2237,1UL}},{{6,6823,0x76D71B74L},{2,-3070,1UL},{6,7123,0xBD332B89L},{6,-4648,0xB8AEEBAFL},{2,-4109,0xA55D4B49L}},{{7,5840,1UL},{0,-2237,1UL},{2,4643,1UL},{4,1798,0UL},{5,5748,0xA9AA2DC8L}},{{1,1275,18446744073709551615UL},{2,3911,0x5C1104DDL},{6,7123,0xBD332B89L},{2,-4109,0xA55D4B49L},{0,-2889,0UL}},{{0,-5793,0x87386A1BL},{5,5602,0x3290B5A5L},{6,-3869,9UL},{6,-3869,9UL},{5,5602,0x3290B5A5L}},{{5,5748,0xA9AA2DC8L},{5,5602,0x3290B5A5L},{6,-4648,0xB8AEEBAFL},{6,6823,0x76D71B74L},{4,-4378,0x5E920F64L}}},{{{7,7037,0xE56EBD7AL},{2,3911,0x5C1104DDL},{0,-2889,0UL},{7,5840,1UL},{5,-895,18446744073709551614UL}},{{5,5748,0xA9AA2DC8L},{0,-2889,0UL},{5,5602,0x3290B5A5L},{4,-4378,0x5E920F64L},{5,-895,18446744073709551614UL}},{{5,5602,0x3290B5A5L},{2,-2082,0x2AC0322AL},{1,1275,18446744073709551615UL},{6,6823,0x76D71B74L},{4,1798,0UL}},{{6,-4648,0xB8AEEBAFL},{2,6679,0x3F3E70D1L},{2,6679,0x3F3E70D1L},{6,-4648,0xB8AEEBAFL},{4,1798,0UL}},{{6,6823,0x76D71B74L},{1,1275,18446744073709551615UL},{2,-2082,0x2AC0322AL},{5,5602,0x3290B5A5L},{5,-895,18446744073709551614UL}},{{4,-4378,0x5E920F64L},{5,5602,0x3290B5A5L},{0,-2889,0UL},{5,5748,0xA9AA2DC8L},{2,-4109,0xA55D4B49L}},{{2,6679,0x3F3E70D1L},{3,7922,0x34615189L},{0,-2237,1UL},{5,5602,0x3290B5A5L},{7,7037,0xE56EBD7AL}},{{2,-3070,1UL},{4,1798,0UL},{0,-5793,0x87386A1BL},{6,-4648,0xB8AEEBAFL},{0,-5793,0x87386A1BL}},{{2,3911,0x5C1104DDL},{2,3911,0x5C1104DDL},{0,-5793,0x87386A1BL},{6,6823,0x76D71B74L},{3,7922,0x34615189L}}}};
    int l_366 = 0L;
    int l_367 = 5L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_358[i] = 0x3ACD9655L;
    g_2[2] = g_235;
    g_235.f1 = (l_367 = (safe_mod_func_uint16_t_u_u((l_358[0] |= p_23), ((l_359[1][3][0] , (safe_rshift_func_int16_t_s_u((((safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((((l_359[1][3][0].f1 = g_92[3][0]) <= ((g_235 , func_64(l_359[1][3][0].f0)) ^ g_235.f2)) | (l_366 = (p_23 , 0x329AF886L))), l_359[1][3][0].f0)), 0x94L)) || l_366) >= p_22), 13))) , l_366))));
    g_235 = g_368;
    l_359[1][3][0] = l_359[1][3][0];
    return g_369;
}







static unsigned char func_30(int p_31, int p_32, unsigned short p_33)
{
    unsigned short l_352[7] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL};
    int l_353 = 0x820B1F87L;
    int l_355 = 0L;
    int i;
    g_2[1] = g_2[0];
    l_355 |= (safe_lshift_func_int16_t_s_u(((g_229 = (((((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((g_354 = ((((safe_sub_func_int8_t_s_s(((func_68(p_31, p_33, (((g_138 = ((l_353 ^= l_352[6]) <= l_352[4])) == 0UL) && (g_133 <= p_33)), p_32, g_92[2][0]) & p_32) < 8L), 247UL)) , g_208) < 0x09246CAEL) | p_31)), l_352[1])), 3)), p_33)) , p_33) != 0x04D62375L) < l_352[6]) > g_20.f1)) != 5L), 3));
    return l_352[6];
}







static int func_37(char p_38, int p_39)
{
    unsigned l_43 = 1UL;
    struct S1 l_340[5][8] = {{{1,-2814,0xA541CA58L},{2,-8105,0x8F6FA15BL},{1,5118,0xCE8B5572L},{6,-7867,18446744073709551606UL},{6,-7867,18446744073709551606UL},{1,5118,0xCE8B5572L},{2,-8105,0x8F6FA15BL},{1,-2814,0xA541CA58L}},{{4,-5478,0xF21E3287L},{6,-7867,18446744073709551606UL},{5,-7578,0xD3BD019DL},{3,-7687,0x32D582BEL},{6,-7867,18446744073709551606UL},{3,-7687,0x32D582BEL},{5,-7578,0xD3BD019DL},{6,-7867,18446744073709551606UL}},{{1,-2814,0xA541CA58L},{5,-7578,0xD3BD019DL},{4,-5478,0xF21E3287L},{1,-2814,0xA541CA58L},{3,-7687,0x32D582BEL},{3,-7687,0x32D582BEL},{1,-2814,0xA541CA58L},{4,-5478,0xF21E3287L}},{{6,-7867,18446744073709551606UL},{6,-7867,18446744073709551606UL},{1,5118,0xCE8B5572L},{2,-8105,0x8F6FA15BL},{1,-2814,0xA541CA58L},{1,5118,0xCE8B5572L},{1,-2814,0xA541CA58L},{2,-8105,0x8F6FA15BL}},{{4,-5478,0xF21E3287L},{2,-8105,0x8F6FA15BL},{4,-5478,0xF21E3287L},{3,-7687,0x32D582BEL},{2,-8105,0x8F6FA15BL},{5,-7578,0xD3BD019DL},{5,-7578,0xD3BD019DL},{2,-8105,0x8F6FA15BL}}};
    int i, j;
    p_39 = func_41(l_43);
    l_340[1][6] = l_340[1][6];
    return g_229;
}







static int func_41(int p_42)
{
    short l_74 = 0x79A8L;
    int l_76[8];
    int l_289 = 0xC26C8E93L;
    unsigned short l_290 = 0UL;
    int l_309 = 0x4CA984D7L;
    int l_315 = 0x4FFCF75BL;
    struct S1 l_326 = {6,3092,0x7D956E6CL};
    char l_339[3];
    int i;
    for (i = 0; i < 8; i++)
        l_76[i] = 1L;
    for (i = 0; i < 3; i++)
        l_339[i] = 0x1BL;
    for (p_42 = 0; (p_42 < 18); ++p_42)
    {
        unsigned l_63 = 6UL;
        int l_267[9][7] = {{6L,0xE5F79DBFL,0x240290D0L,0xE5F79DBFL,6L,0x3478844DL,0x3478844DL},{0xC33572A6L,0xC33572A6L,0xE37CBACDL,0xC33572A6L,0xD006B99CL,0xEFB076ACL,0xEFB076ACL},{0x240290D0L,6L,(-7L),6L,0x240290D0L,0x27D56CCAL,0x27D56CCAL},{0xD006B99CL,0xC33572A6L,0xE37CBACDL,0xC33572A6L,0xD006B99CL,0xEFB076ACL,0xEFB076ACL},{0x240290D0L,6L,(-7L),6L,0x240290D0L,0x27D56CCAL,0x27D56CCAL},{0xD006B99CL,0xC33572A6L,0xE37CBACDL,0xC33572A6L,0xD006B99CL,0xEFB076ACL,0xEFB076ACL},{0x240290D0L,6L,(-7L),6L,0x240290D0L,0x27D56CCAL,0x27D56CCAL},{0xD006B99CL,0xC33572A6L,0xE37CBACDL,0xC33572A6L,0xD006B99CL,0xEFB076ACL,0xEFB076ACL},{0x240290D0L,6L,(-7L),6L,0x240290D0L,0x27D56CCAL,0x27D56CCAL}};
        int i, j;
        if (p_42)
        {
            int l_75 = (-1L);
            struct S1 l_316 = {0,-1857,18446744073709551615UL};
            l_267[8][2] = (func_46((g_51 ^= g_20.f1), (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(p_42, (g_56[6][0][0] = g_4))), g_20.f0)), p_42, ((safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((((safe_add_func_uint32_t_u_u((l_63 , (((func_13(g_20.f1) > func_64((safe_mod_func_uint8_t_u_u(func_68((p_42 < p_42), l_63, l_74, l_75, l_76[5]), 0x82L)))) >= p_42) || g_92[3][0])), g_208)) <= l_63) >= g_208), p_42)), 15)) | g_20.f1)) , 0L);
            if ((safe_lshift_func_int8_t_s_u(p_42, 4)))
            {
                int l_308 = 0x7DBD5873L;
                int l_314 = 0L;
                if (p_42)
                {
                    unsigned l_270[1];
                    unsigned char l_287 = 253UL;
                    int l_299 = 9L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_270[i] = 0xFBE857C8L;
                    g_235.f1 |= l_270[0];
                    if ((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((g_51 ^= ((l_74 <= g_93) != (l_267[8][2] = func_13((4294967286UL ^ func_13((l_75 >= (safe_lshift_func_int16_t_s_u(g_208, g_235.f0))))))))), 5)), p_42)))
                    {
                        unsigned l_277 = 0x789D02CCL;
                        int l_280 = 0xD1DBEBF9L;
                        l_280 ^= ((5L >= (l_267[8][2] ^= (g_142.f2 > ((0xA6EA9592L ^ (l_277 != (safe_add_func_uint8_t_u_u((g_266 , p_42), (g_208 = (-1L)))))) >= (l_75 ^ func_64(p_42)))))) ^ p_42);
                        return p_42;
                    }
                    else
                    {
                        int l_288 = 4L;
                        g_235.f0 = (safe_mod_func_int8_t_s_s((l_76[5] , (((func_46((safe_lshift_func_int16_t_s_s(p_42, (g_235.f1 & ((g_208 = (safe_mod_func_int8_t_s_s(0xADL, p_42))) >= g_133)))), g_20.f2, l_287, p_42) , l_267[8][2]) < 8L) || p_42)), l_75));
                        l_288 = (-1L);
                        l_289 = p_42;
                        if (l_290)
                            continue;
                    }
                    l_299 ^= func_13(((l_75 = (l_267[8][2] = (p_42 , 0x03701D3AL))) == ((l_289 = p_42) , (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((g_208 = (safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(p_42, 2)), l_270[0]))), 7)), g_142.f0)))));
                }
                else
                {
                    for (l_289 = 0; (l_289 >= (-20)); --l_289)
                    {
                        if (p_42)
                            break;
                    }
                }
                if ((safe_lshift_func_int16_t_s_s(l_267[1][6], (safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((l_308 >= l_309), (safe_mod_func_int16_t_s_s(((g_142.f2 < ((l_314 = g_92[3][0]) & l_308)) && (((l_308 == l_315) & (0xCAF07905L < 0x45802C0CL)) >= l_267[7][5])), p_42)))), p_42)))))
                {
                    g_142 = l_316;
                    g_142.f1 &= (((l_75 = p_42) < p_42) <= 0x60B0L);
                }
                else
                {
                    l_315 |= func_13(p_42);
                }
                if (p_42)
                    continue;
            }
            else
            {
                struct S1 l_323[1][4][4] = {{{{7,-294,18446744073709551615UL},{4,869,0xFF8A22B9L},{7,-3421,0xCEC7D193L},{4,869,0xFF8A22B9L}},{{4,869,0xFF8A22B9L},{0,5265,18446744073709551615UL},{7,-3421,0xCEC7D193L},{7,-3421,0xCEC7D193L}},{{7,-294,18446744073709551615UL},{7,-294,18446744073709551615UL},{4,869,0xFF8A22B9L},{7,-3421,0xCEC7D193L}},{{6,2182,0x9A3CBAA0L},{0,5265,18446744073709551615UL},{6,2182,0x9A3CBAA0L},{4,869,0xFF8A22B9L}}}};
                int i, j, k;
                l_75 ^= (safe_sub_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s((-5L), (((g_235.f0 = 0x5EBCC991L) == (0x49A6F945L >= (func_68(g_229, (0x0471E1CBL <= (l_316.f1 &= ((l_323[0][0][1] , p_42) == l_323[0][0][1].f1))), (safe_sub_func_uint8_t_u_u((func_64(func_68(((-1L) & g_56[6][0][0]), p_42, g_266.f0, p_42, p_42)) < 0x86L), 255UL)), p_42, l_76[5]) == 0x28L))) & 65535UL))), p_42)) == l_76[7]), g_266.f0));
            }
        }
        else
        {
            return l_63;
        }
        if (p_42)
            break;
    }
    l_289 |= p_42;
    if (p_42)
    {
        return l_289;
    }
    else
    {
        p_42 &= 1L;
        p_42 = g_20.f1;
        g_142 = l_326;
        p_42 = l_315;
    }
    g_235.f0 = (1L > ((g_142.f2 <= (safe_lshift_func_uint8_t_u_s(func_64((g_92[2][0] = (~g_20.f2))), 5))) && (g_93 != (0x50939953L ^ (safe_add_func_uint16_t_u_u(func_64(p_42), (((safe_add_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((l_315 |= ((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(l_309, g_235.f2)) | (-5L)), g_3)) | p_42)), l_339[1])) != p_42), 1L)) < 0x30L) & g_138)))))));
    return l_315;
}







static struct S0 func_46(int p_47, unsigned p_48, unsigned p_49, short p_50)
{
    unsigned short l_210 = 0x0D54L;
    struct S1 l_213 = {7,4875,3UL};
    short l_224[10][10] = {{0xC46AL,0L,(-7L),(-7L),0L,0xC46AL,5L,0L,5L,0xC46AL},{1L,0L,1L,0L,1L,1L,6L,6L,1L,1L},{1L,5L,5L,1L,5L,(-7L),6L,(-7L),5L,6L},{(-7L),6L,(-7L),5L,6L,0xC46AL,0xC46AL,6L,5L,(-7L)},{0L,0L,6L,6L,1L,6L,1L,6L,6L,0L},{1L,0xC46AL,(-7L),1L,5L,5L,1L,(-7L),0xC46AL,1L},{(-7L),0L,0xC46AL,5L,0L,5L,0xC46AL,0L,(-7L),(-7L)},{1L,6L,6L,0L,0L,6L,6L,1L,6L,1L},{0L,0xC46AL,5L,0L,5L,0xC46AL,0L,(-7L),(-7L),0L},{(-7L),1L,5L,5L,1L,(-7L),0xC46AL,1L,0xC46AL,(-7L)}};
    int l_225 = 0x95C22D9DL;
    int l_226 = 8L;
    int l_227 = 1L;
    unsigned char l_228[9][9][3] = {{{1UL,0xFBL,255UL},{2UL,1UL,1UL},{253UL,0x0CL,0x86L},{0xAAL,0x08L,5UL},{0x4EL,0x60L,0x0DL},{2UL,0x36L,0x62L},{0x62L,255UL,255UL},{2UL,2UL,4UL},{0x60L,255UL,0xFBL}},{{255UL,0x51L,0x3EL},{250UL,1UL,2UL},{255UL,255UL,0x3EL},{0x36L,9UL,0xFBL},{1UL,2UL,4UL},{0x6DL,0x12L,255UL},{0xB5L,0xC5L,0x0DL},{0x51L,255UL,0UL},{0x12L,254UL,0UL}},{{9UL,0x58L,0x0CL},{0x08L,0x93L,253UL},{255UL,0xDDL,3UL},{2UL,0xB5L,1UL},{253UL,0UL,0x5FL},{0x84L,0UL,0x36L},{255UL,0xB5L,254UL},{0x62L,0xDDL,255UL},{252UL,0x93L,2UL}},{{0xAAL,0x58L,1UL},{0UL,254UL,0x93L},{0x36L,255UL,0xB8L},{0UL,0xC5L,255UL},{0xC5L,0x12L,0xC5L},{0xB8L,2UL,9UL},{0x0CL,9UL,0x07L},{0x4EL,255UL,252UL},{255UL,1UL,2UL}},{{0x4EL,0x51L,0x12L},{0x0CL,255UL,0x07L},{0xB8L,255UL,1UL},{255UL,0xDDL,0x0CL},{5UL,255UL,254UL},{0UL,0x36L,5UL},{255UL,0x4EL,250UL},{0xFBL,250UL,0UL},{255UL,1UL,0x62L}},{{0x58L,2UL,253UL},{0x4EL,0x62L,253UL},{255UL,255UL,253UL},{0UL,247UL,253UL},{0x6DL,0x07L,0x62L},{0x12L,0x07L,0UL},{254UL,0x13L,250UL},{253UL,0x58L,5UL},{246UL,3UL,254UL}},{{4UL,255UL,0x0CL},{1UL,1UL,1UL},{255UL,2UL,0x0DL},{0x60L,252UL,246UL},{0UL,252UL,255UL},{0x36L,0x0CL,0x07L},{0xA4L,252UL,250UL},{0x93L,252UL,0x07L},{0UL,2UL,255UL}},{{255UL,1UL,0x4EL},{0xAAL,255UL,0xB5L},{2UL,3UL,0x84L},{0x0DL,0x58L,0x36L},{253UL,0x13L,0x6DL},{1UL,0x07L,0x93L},{0x3EL,0x07L,0xC5L},{253UL,254UL,255UL},{255UL,2UL,255UL}},{{255UL,0x0DL,0UL},{253UL,255UL,0x0CL},{0UL,253UL,246UL},{0x07L,247UL,250UL},{0xDDL,0x07L,1UL},{0UL,247UL,2UL},{1UL,0x5FL,255UL},{255UL,2UL,0x86L},{0x36L,0x36L,9UL}}};
    int i, j, k;
    l_210 &= 0x983243EDL;
    if (((safe_sub_func_uint32_t_u_u(((g_229 = (l_228[3][4][0] = (((g_51 != (l_213 , ((l_227 = (safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s((((((safe_mod_func_int16_t_s_s((l_210 <= g_51), (0xBB306596L && (g_51 != (l_226 = (0x9236L > (l_213.f1 = (safe_lshift_func_uint16_t_u_u(func_68(l_213.f2, (safe_rshift_func_uint8_t_u_s((l_225 = (l_224[7][4] = ((-6L) <= p_47))), l_213.f0)), g_20.f1, g_191, g_56[6][0][0]), p_50))))))))) ^ g_4) > l_210) | p_49) || l_213.f0), p_49)), p_48))) , g_208))) != g_3) <= l_213.f2))) , 0xB1EAC38EL), l_213.f2)) != 0x55FA1EA5L))
    {
        unsigned l_230 = 0xF1CD69E2L;
        int l_231 = 0x73B01895L;
        l_231 = (l_230 & 0x4D15D3D0L);
    }
    else
    {
        unsigned l_236 = 18446744073709551614UL;
        struct S1 l_240[5][2] = {{{5,-3805,18446744073709551612UL},{5,-3805,18446744073709551612UL}},{{7,-6693,7UL},{5,-3805,18446744073709551612UL}},{{5,-3805,18446744073709551612UL},{7,-6693,7UL}},{{5,-3805,18446744073709551612UL},{5,-3805,18446744073709551612UL}},{{7,-6693,7UL},{5,-3805,18446744073709551612UL}}};
        int i, j;
        for (g_191 = 2; (g_191 >= 0); g_191 -= 1)
        {
            short l_237 = 0x5EF4L;
            int l_243 = 0x10F83735L;
            int l_245[2][6][6] = {{{0xC3CE8049L,0xFC717972L,0xFC717972L,0xC3CE8049L,(-2L),0xB351D394L},{(-2L),0x2D4DC24DL,0xFC717972L,0x677575D8L,0xC3CE8049L,0x2CA0AF4EL},{0x2CA0AF4EL,0x677575D8L,(-4L),0xC3CE8049L,0xC3CE8049L,(-4L)},{0x2D4DC24DL,0x2D4DC24DL,0xB351D394L,0xFC717972L,(-2L),0x2CA0AF4EL},{0x2D4DC24DL,0xFC717972L,0x677575D8L,0xC3CE8049L,0x2CA0AF4EL,0xB351D394L},{0x2CA0AF4EL,0x2D4DC24DL,0x677575D8L,0x677575D8L,0x2D4DC24DL,0x2CA0AF4EL}},{{(-2L),0x677575D8L,0xB351D394L,0xC3CE8049L,0x2D4DC24DL,(-4L)},{0xC3CE8049L,0x2D4DC24DL,(-4L),0xFC717972L,0x2CA0AF4EL,0x2CA0AF4EL},{0xC3CE8049L,0xFC717972L,0xFC717972L,0xC3CE8049L,(-2L),0xB351D394L},{(-2L),0x2D4DC24DL,0xFC717972L,0x677575D8L,0xC3CE8049L,0x2CA0AF4EL},{0x2CA0AF4EL,0x677575D8L,(-4L),0xC3CE8049L,0xC3CE8049L,(-4L)},{0x2D4DC24DL,0x2D4DC24DL,0xB351D394L,0xFC717972L,(-2L),0x2CA0AF4EL}}};
            int i, j, k;
            for (p_48 = 0; (p_48 <= 2); p_48 += 1)
            {
                unsigned short l_244[4] = {65527UL,65527UL,65527UL,65527UL};
                int i;
                for (g_51 = 0; (g_51 <= 1); g_51 += 1)
                {
                    unsigned char l_232 = 255UL;
                    for (g_93 = 0; (g_93 <= 2); g_93 += 1)
                    {
                        int i, j;
                        g_92[3][0] = (g_92[g_191][g_51] , g_92[(g_93 + 1)][g_51]);
                        return g_2[(g_51 + 1)];
                    }
                    l_227 ^= (-1L);
                    for (l_213.f2 = 2; (l_213.f2 <= 9); l_213.f2 += 1)
                    {
                        int i, j, k;
                        l_232 = (l_228[g_191][(g_191 + 5)][(g_51 + 1)] | 0L);
                        if (g_56[6][0][0])
                            continue;
                        l_226 = (~func_13(g_51));
                    }
                }
                for (g_51 = 0; (g_51 <= 2); g_51 += 1)
                {
                    int i, j, k;
                    g_2[p_48] = g_2[p_48];
                    l_245[1][1][3] ^= (l_244[0] = (safe_sub_func_int16_t_s_s(l_228[(g_51 + 3)][(p_48 + 5)][g_191], (p_48 | ((g_20 , g_235) , ((g_179 & (l_237 = l_236)) , (safe_mod_func_uint32_t_u_u((((l_240[3][1] , 1UL) || ((g_133 = ((safe_add_func_int32_t_s_s((l_243 = (p_48 != g_235.f2)), (-1L))) | 0x21L)) == g_3)) == 254UL), 0xFE40136CL))))))));
                    g_92[0][1] = (safe_mod_func_uint32_t_u_u(p_49, (((l_237 | ((safe_sub_func_uint16_t_u_u(0x4EDFL, ((((safe_sub_func_int8_t_s_s((g_2[p_48].f0 ^= (l_244[0] , g_142.f0)), (safe_rshift_func_uint8_t_u_u(l_210, 3)))) & 4294967292UL) >= (g_138 , (l_228[(g_191 + 5)][(g_51 + 6)][g_51] = p_49))) <= g_179))) >= (-1L))) , p_47) , 0x162C63C9L)));
                    l_243 |= (!g_2[p_48].f0);
                }
            }
        }
        for (g_179 = 0; (g_179 >= 10); g_179 = safe_add_func_int16_t_s_s(g_179, 7))
        {
            int l_260[1][1];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_260[i][j] = (-1L);
            }
            l_213.f1 = (((safe_sub_func_int8_t_s_s(0xFBL, (l_228[3][4][0] | (g_235.f0 | ((((safe_rshift_func_int8_t_s_u(func_13((func_13(p_49) == ((g_92[3][0] = (p_50 >= (0xDFF8L ^ (((l_240[3][1].f0 == (g_142.f1 | l_260[0][0])) || 0x69L) && p_50)))) < p_47))), 2)) | g_142.f2) > 8L) >= l_213.f2))))) > 0x952BL) >= p_49);
        }
        g_263 ^= (((g_142.f0 |= 0x9608C04AL) != (safe_rshift_func_int8_t_s_s(func_64((l_240[3][1].f1 = (g_92[0][1] = (l_240[1][0] , g_235.f1)))), 7))) & g_235.f2);
    }
    l_227 &= ((p_50 == (g_92[0][0] != ((g_51 = ((g_20.f0 ^ p_48) , (g_235.f2 | p_47))) ^ (p_48 , (p_48 >= l_224[5][9]))))) >= p_50);
    return g_266;
}







static char func_64(int p_65)
{
    struct S1 l_209 = {3,-7251,0x9E8EBB9BL};
    l_209 = l_209;
    return l_209.f2;
}







static unsigned char func_68(unsigned short p_69, int p_70, int p_71, int p_72, unsigned short p_73)
{
    int l_81 = 0xCD5918CDL;
    int l_94[4] = {3L,3L,3L,3L};
    int l_161[2][4][3] = {{{0xF8E2B3D6L,3L,7L},{7L,3L,0xF8E2B3D6L},{3L,0xF880E715L,0xF880E715L},{(-1L),7L,0xF8E2B3D6L}},{{0xE95F642DL,0x66101610L,7L},{0xE95F642DL,0xA7C64346L,3L},{(-1L),0xEDDB30E8L,(-1L)},{3L,0xA7C64346L,0xE95F642DL}}};
    struct S1 l_170 = {3,-242,0x579426CDL};
    int i, j, k;
    if ((p_70 = ((((safe_mod_func_int32_t_s_s((0x27DFDEEAL > (safe_sub_func_uint16_t_u_u(((l_81 ^ g_20.f0) , ((safe_sub_func_int16_t_s_s((safe_mod_func_int32_t_s_s(l_81, (safe_rshift_func_int16_t_s_u(((~(p_69 < ((l_81 < g_4) == (safe_sub_func_uint32_t_u_u((0xFFL && p_72), g_20.f1))))) || l_81), l_81)))), p_72)) && 0x38BBL)), g_4))), 0x270ADFF4L)) != g_20.f2) > p_69) , (-6L))))
    {
lbl_186:
        g_92[3][0] = (safe_mod_func_uint32_t_u_u(g_20.f0, p_69));
    }
    else
    {
        unsigned l_101 = 18446744073709551607UL;
        int l_108 = (-1L);
        unsigned l_137 = 0x2DBF0B25L;
        unsigned l_180 = 0xDBAEAE63L;
        if (((((g_93 = p_71) && (l_94[0] &= g_92[0][0])) , (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint16_t_u_u((((l_101 = g_20.f2) , ((safe_mod_func_uint8_t_u_u((((p_71 | (((l_94[0] == (safe_rshift_func_int8_t_s_s((0xE0432CFCL <= ((g_20.f1 <= (safe_mod_func_uint16_t_u_u((l_101 || (~(-1L))), p_69))) & l_101)), p_72))) > 0x57L) , p_73)) , g_92[3][0]) || g_93), l_94[1])) , 0x717E41ABL)) >= l_94[0]), g_92[3][0])) , 0UL), l_108)), 1L))) < 65535UL))
        {
            unsigned char l_136 = 254UL;
            int l_151 = 0x10D2121AL;
            if ((p_71 |= (l_108 = 0x53350B76L)))
            {
                p_71 = g_20.f1;
            }
            else
            {
                l_108 &= g_20.f0;
            }
            g_138 = ((((l_137 ^= (l_81 && (safe_add_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((g_92[0][1] &= (safe_mod_func_int8_t_s_s(((((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_u(g_20.f2, 7)) , (safe_sub_func_uint16_t_u_u(65535UL, (safe_rshift_func_uint16_t_u_u(4UL, ((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s((((g_133 &= 0x9A18L) != g_20.f2) & (safe_rshift_func_int8_t_s_s((((l_136 | g_20.f1) != g_20.f2) != p_72), 5))), p_69)), 4)) == g_20.f2)))))), l_94[0])), l_108)) != 255UL) & g_20.f0) , (-9L)), g_20.f1))), g_4)), 13)) & p_70), g_93)) >= p_73), p_72)))) <= 0x85D133FDL) & 0x70L) == 0xBAL);
            for (l_137 = (-12); (l_137 < 23); ++l_137)
            {
                struct S1 l_141 = {3,-7268,0x1E3D09CEL};
                if (l_136)
                    break;
                g_142 = l_141;
                p_71 &= (safe_lshift_func_int8_t_s_s((((safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s(8L, (l_94[3] = (g_142.f2 & l_136)))), 3)) | (safe_mod_func_int8_t_s_s(g_92[3][0], ((((((l_151 = (p_73 <= p_73)) | (safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(p_70, (g_142.f1 ^= (0L | ((l_141.f2 > 4294967295UL) == g_20.f0))))), p_73))) > 0xBD0BL) | l_136) , l_81) || g_4)))) | g_142.f0), g_92[2][0]));
            }
        }
        else
        {
            struct S1 l_158[4][2] = {{{7,3745,1UL},{7,3745,1UL}},{{7,3745,1UL},{7,3745,1UL}},{{7,3745,1UL},{7,3745,1UL}},{{7,3745,1UL},{7,3745,1UL}}};
            int i, j;
            for (g_133 = (-22); (g_133 >= (-9)); g_133++)
            {
                g_142 = l_158[2][1];
                p_70 &= l_137;
                return l_158[2][1].f1;
            }
            l_108 = ((l_94[0] || (l_137 , g_142.f2)) < ((safe_rshift_func_int16_t_s_s((g_133 ^= (p_69 == (l_161[1][3][0] ^= 0x11L))), 5)) || (safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(l_108, p_70)), l_94[0]))));
        }
        l_94[0] = ((((l_108 = (safe_lshift_func_int16_t_s_s(0x60FBL, 0))) && ((safe_mod_func_int8_t_s_s(p_73, (l_180 ^= (((l_161[0][0][0] != (((l_170 , (g_179 = (safe_lshift_func_int8_t_s_s((0x619775E7L && ((p_69 != (p_71 , ((safe_lshift_func_int16_t_s_u(g_133, (safe_sub_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u(((+(l_137 == g_92[3][0])) , g_133), l_161[1][0][2])) | g_133), g_92[3][0])))) || g_93))) < g_92[1][0])), p_73)))) , g_93) | g_20.f2)) <= 0xD0BAL) == g_133)))) <= p_71)) != (-9L)) == l_101);
        for (g_20.f2 = 11; (g_20.f2 == 59); ++g_20.f2)
        {
            unsigned short l_183 = 0UL;
            struct S1 l_187[9] = {{1,-5123,18446744073709551614UL},{1,-5123,18446744073709551614UL},{1,-5123,18446744073709551614UL},{1,-5123,18446744073709551614UL},{1,-5123,18446744073709551614UL},{1,-5123,18446744073709551614UL},{1,-5123,18446744073709551614UL},{1,-5123,18446744073709551614UL},{1,-5123,18446744073709551614UL}};
            int i;
            if (l_183)
            {
                struct S1 l_185 = {6,7393,4UL};
                l_170.f1 ^= (~2L);
                l_108 = g_20.f0;
                p_71 = g_138;
                for (p_72 = 1; (p_72 >= 0); p_72 -= 1)
                {
                    struct S1 l_184[10] = {{4,6284,0UL},{4,6284,0UL},{4,6284,0UL},{4,6284,0UL},{4,6284,0UL},{4,6284,0UL},{4,6284,0UL},{4,6284,0UL},{4,6284,0UL},{4,6284,0UL}};
                    struct S1 l_188 = {1,369,0x05E15677L};
                    int i;
                    for (g_142.f2 = 0; (g_142.f2 <= 1); g_142.f2 += 1)
                    {
                        int i, j, k;
                        l_185 = l_184[2];
                        if (l_161[p_72][p_72][p_72])
                            break;
                        if (l_170.f2)
                            goto lbl_186;
                        l_170 = (p_69 , g_20);
                    }
                    for (g_93 = 0; (g_93 <= 3); g_93 += 1)
                    {
                        l_188 = l_187[6];
                    }
                }
            }
            else
            {
                l_108 = (safe_add_func_int32_t_s_s((l_170.f1 &= ((((l_161[1][3][0] = (((g_191 = l_187[6].f2) | ((((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(((p_69 , (p_71 ^ g_20.f0)) == p_70), 3)), 0)), (((safe_lshift_func_uint8_t_u_u(6UL, (safe_mod_func_uint16_t_u_u((p_73 , (g_179 ^ (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(g_142.f0, (-7L))), g_92[3][0])), g_208)))), p_72)))) , p_69) > 0xFAL))) , 0x395DFB6AL) != 0xA012D08AL) | l_94[2])) == p_69)) == g_208) || 2UL) & g_138)), 0L));
            }
            if (p_71)
                break;
            g_142.f1 = l_187[6].f1;
        }
    }
    p_70 = (g_92[3][0] = l_170.f2);
    return g_20.f1;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2[i].f0, "g_2[i].f0", print_hash_value);
        transparent_crc(g_2[i].f1, "g_2[i].f1", print_hash_value);
        transparent_crc(g_2[i].f2, "g_2[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_20.f0, "g_20.f0", print_hash_value);
    transparent_crc(g_20.f1, "g_20.f1", print_hash_value);
    transparent_crc(g_20.f2, "g_20.f2", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_56[i][j][k], "g_56[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_92[i][j], "g_92[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_142.f0, "g_142.f0", print_hash_value);
    transparent_crc(g_142.f1, "g_142.f1", print_hash_value);
    transparent_crc(g_142.f2, "g_142.f2", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_235.f0, "g_235.f0", print_hash_value);
    transparent_crc(g_235.f1, "g_235.f1", print_hash_value);
    transparent_crc(g_235.f2, "g_235.f2", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_266.f0, "g_266.f0", print_hash_value);
    transparent_crc(g_266.f1, "g_266.f1", print_hash_value);
    transparent_crc(g_266.f2, "g_266.f2", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_368.f0, "g_368.f0", print_hash_value);
    transparent_crc(g_368.f1, "g_368.f1", print_hash_value);
    transparent_crc(g_368.f2, "g_368.f2", print_hash_value);
    transparent_crc(g_369.f0, "g_369.f0", print_hash_value);
    transparent_crc(g_369.f1, "g_369.f1", print_hash_value);
    transparent_crc(g_369.f2, "g_369.f2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_380[i][j], "g_380[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_435, "g_435", print_hash_value);
    transparent_crc(g_447.f0, "g_447.f0", print_hash_value);
    transparent_crc(g_447.f1, "g_447.f1", print_hash_value);
    transparent_crc(g_447.f2, "g_447.f2", print_hash_value);
    transparent_crc(g_468.f0, "g_468.f0", print_hash_value);
    transparent_crc(g_468.f1, "g_468.f1", print_hash_value);
    transparent_crc(g_468.f2, "g_468.f2", print_hash_value);
    transparent_crc(g_503.f0, "g_503.f0", print_hash_value);
    transparent_crc(g_503.f1, "g_503.f1", print_hash_value);
    transparent_crc(g_503.f2, "g_503.f2", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_504[i][j][k].f0, "g_504[i][j][k].f0", print_hash_value);
                transparent_crc(g_504[i][j][k].f1, "g_504[i][j][k].f1", print_hash_value);
                transparent_crc(g_504[i][j][k].f2, "g_504[i][j][k].f2", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_505, "g_505", print_hash_value);
    transparent_crc(g_610, "g_610", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_662[i][j], "g_662[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_669, "g_669", print_hash_value);
    transparent_crc(g_713, "g_713", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_735[i][j][k], "g_735[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_778.f0, "g_778.f0", print_hash_value);
    transparent_crc(g_778.f1, "g_778.f1", print_hash_value);
    transparent_crc(g_778.f2, "g_778.f2", print_hash_value);
    transparent_crc(g_779.f0, "g_779.f0", print_hash_value);
    transparent_crc(g_779.f1, "g_779.f1", print_hash_value);
    transparent_crc(g_779.f2, "g_779.f2", print_hash_value);
    transparent_crc(g_821.f0, "g_821.f0", print_hash_value);
    transparent_crc(g_821.f1, "g_821.f1", print_hash_value);
    transparent_crc(g_821.f2, "g_821.f2", print_hash_value);
    transparent_crc(g_875, "g_875", print_hash_value);
    transparent_crc(g_882, "g_882", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_927[i], "g_927[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_940, "g_940", print_hash_value);
    transparent_crc(g_945, "g_945", print_hash_value);
    transparent_crc(g_954, "g_954", print_hash_value);
    transparent_crc(g_961, "g_961", print_hash_value);
    transparent_crc(g_1006, "g_1006", print_hash_value);
    transparent_crc(g_1031, "g_1031", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1053[i].f0, "g_1053[i].f0", print_hash_value);
        transparent_crc(g_1053[i].f1, "g_1053[i].f1", print_hash_value);
        transparent_crc(g_1053[i].f2, "g_1053[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_1067[i][j].f0, "g_1067[i][j].f0", print_hash_value);
            transparent_crc(g_1067[i][j].f1, "g_1067[i][j].f1", print_hash_value);
            transparent_crc(g_1067[i][j].f2, "g_1067[i][j].f2", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1117.f0, "g_1117.f0", print_hash_value);
    transparent_crc(g_1117.f1, "g_1117.f1", print_hash_value);
    transparent_crc(g_1117.f2, "g_1117.f2", print_hash_value);
    transparent_crc(g_1198.f0, "g_1198.f0", print_hash_value);
    transparent_crc(g_1198.f1, "g_1198.f1", print_hash_value);
    transparent_crc(g_1198.f2, "g_1198.f2", print_hash_value);
    transparent_crc(g_1199.f0, "g_1199.f0", print_hash_value);
    transparent_crc(g_1199.f1, "g_1199.f1", print_hash_value);
    transparent_crc(g_1199.f2, "g_1199.f2", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
