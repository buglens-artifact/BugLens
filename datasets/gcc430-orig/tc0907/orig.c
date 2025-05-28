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
   unsigned f0 : 24;
   const unsigned f1 : 1;
   signed f2 : 24;
   signed f3 : 15;
   signed f4 : 14;
};

struct S1 {
   char f0;
};

struct S2 {
   const unsigned long long f0;
   signed f1 : 1;
};


static int g_2 = 0L;
static long long g_54 = 0x3807906852DB5965LL;
static unsigned char g_55 = 0x14L;
static unsigned g_56 = 0xF8149088L;
static struct S1 g_72 = {0xA6L};
static long long g_82[3][6] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
static int g_97 = 0x1D493DC3L;
static unsigned g_132 = 0UL;
static short g_160 = 0xC7FBL;
static unsigned short g_191 = 0x467DL;
static struct S2 g_225[3][6][9] = {{{{0xDF269038BE0EB0DALL,-0},{5UL,-0},{5UL,-0},{0xDF269038BE0EB0DALL,-0},{0xEFF87EF0A5C0DE6CLL,0},{1UL,0},{0x4CFB21B00D12D87ELL,-0},{1UL,-0},{8UL,-0}},{{0xDF269038BE0EB0DALL,-0},{0x6ED070B2E8BE2C4ELL,0},{1UL,-0},{1UL,0},{8UL,-0},{0xEFF87EF0A5C0DE6CLL,0},{0xEFF87EF0A5C0DE6CLL,0},{8UL,-0},{1UL,0}},{{0x47CBADA1B3B349EFLL,0},{0xD5D40986E19FE53BLL,0},{0x47CBADA1B3B349EFLL,0},{1UL,-0},{0xEFF87EF0A5C0DE6CLL,0},{1UL,-0},{0UL,0},{0xC9974A6ED00A525ALL,-0},{1UL,0}},{{7UL,0},{0xD5D40986E19FE53BLL,0},{7UL,0},{0xDF269038BE0EB0DALL,-0},{0xC9974A6ED00A525ALL,-0},{0x47CBADA1B3B349EFLL,0},{0xC9974A6ED00A525ALL,-0},{0xDF269038BE0EB0DALL,-0},{7UL,0}},{{0x75BA92084C10A020LL,-0},{0x75BA92084C10A020LL,-0},{1UL,-0},{5UL,-0},{0xEFF87EF0A5C0DE6CLL,0},{0xD5D40986E19FE53BLL,0},{7UL,0},{0xDF269038BE0EB0DALL,-0},{0xC9974A6ED00A525ALL,-0}},{{1UL,0},{0UL,0},{0x47CBADA1B3B349EFLL,0},{0x75BA92084C10A020LL,-0},{0x6ED070B2E8BE2C4ELL,0},{0x6ED070B2E8BE2C4ELL,0},{0x75BA92084C10A020LL,-0},{0x47CBADA1B3B349EFLL,0},{0UL,0}}},{{{0x6ED070B2E8BE2C4ELL,0},{0UL,0},{1UL,-0},{1UL,-0},{8UL,-0},{5UL,-0},{0x75BA92084C10A020LL,-0},{7UL,0},{0UL,0}},{{0xDF269038BE0EB0DALL,-0},{1UL,0},{7UL,0},{0UL,0},{0x4CFB21B00D12D87ELL,-0},{0UL,0},{7UL,0},{1UL,0},{0xDF269038BE0EB0DALL,-0}},{{8UL,-0},{0UL,0},{0xD5D40986E19FE53BLL,0},{0x4CFB21B00D12D87ELL,-0},{0x75BA92084C10A020LL,-0},{0UL,0},{0xC9974A6ED00A525ALL,-0},{1UL,-0},{1UL,0}},{{0UL,0},{0UL,0},{5UL,-0},{0x47CBADA1B3B349EFLL,0},{0x47CBADA1B3B349EFLL,0},{5UL,-0},{0UL,0},{0UL,0},{1UL,-0}},{{8UL,-0},{0x75BA92084C10A020LL,-0},{0xC9974A6ED00A525ALL,-0},{0xEFF87EF0A5C0DE6CLL,0},{0x47CBADA1B3B349EFLL,0},{0x6ED070B2E8BE2C4ELL,0},{0UL,0},{0x4CFB21B00D12D87ELL,-0},{0x4CFB21B00D12D87ELL,-0}},{{0xDF269038BE0EB0DALL,-0},{0xD5D40986E19FE53BLL,0},{0x75BA92084C10A020LL,-0},{0UL,0},{0x75BA92084C10A020LL,-0},{0xD5D40986E19FE53BLL,0},{0xDF269038BE0EB0DALL,-0},{0x6ED070B2E8BE2C4ELL,0},{1UL,-0}}},{{{0x6ED070B2E8BE2C4ELL,0},{1UL,-0},{0xDF269038BE0EB0DALL,-0},{0UL,0},{0x4CFB21B00D12D87ELL,-0},{0x47CBADA1B3B349EFLL,0},{1UL,0},{0x75BA92084C10A020LL,-0},{1UL,0}},{{1UL,0},{8UL,-0},{0xEFF87EF0A5C0DE6CLL,0},{0xEFF87EF0A5C0DE6CLL,0},{8UL,-0},{1UL,0},{0UL,0},{1UL,-0},{0x75BA92084C10A020LL,-0}},{{0x4CFB21B00D12D87ELL,-0},{8UL,-0},{0x47CBADA1B3B349EFLL,0},{7UL,0},{1UL,-0},{0xD5D40986E19FE53BLL,0},{1UL,0},{1UL,0},{0xD5D40986E19FE53BLL,0}},{{0x47CBADA1B3B349EFLL,0},{1UL,0},{0x75BA92084C10A020LL,-0},{1UL,0},{0x47CBADA1B3B349EFLL,0},{0x4CFB21B00D12D87ELL,-0},{0UL,0},{0xDF269038BE0EB0DALL,-0},{1UL,-0}},{{0xEFF87EF0A5C0DE6CLL,0},{1UL,0},{0x4CFB21B00D12D87ELL,-0},{1UL,-0},{8UL,-0},{0UL,0},{0UL,0},{0UL,0},{8UL,-0}},{{0UL,0},{8UL,-0},{8UL,-0},{0UL,0},{0xD5D40986E19FE53BLL,0},{0x4CFB21B00D12D87ELL,-0},{0x75BA92084C10A020LL,-0},{0UL,0},{0xC9974A6ED00A525ALL,-0}}}};
static char g_226 = 0x45L;
static int g_234 = 0x953D0D8FL;
static unsigned long long g_235 = 18446744073709551612UL;
static struct S0 g_240 = {2347,0,1718,-127,97};
static short g_269 = 0L;
static struct S1 g_381 = {-1L};
static int g_391 = 0L;
static struct S2 g_504 = {18446744073709551606UL,0};
static unsigned char g_506 = 0UL;
static unsigned short g_612 = 65535UL;
static unsigned char g_619 = 255UL;
static unsigned g_643 = 2UL;
static unsigned short g_719 = 0x2BAEL;
static short g_801 = 0L;
static long long g_812 = 1L;
static struct S2 g_849 = {0x79EB814D572D14A7LL,0};
static const unsigned g_976 = 0x46A6DF83L;
static int g_1062 = 7L;
static char g_1080 = (-1L);
static unsigned char g_1149[9][8] = {{7UL,6UL,7UL,7UL,6UL,7UL,7UL,6UL},{6UL,7UL,7UL,6UL,7UL,7UL,6UL,7UL},{6UL,6UL,255UL,6UL,6UL,255UL,6UL,6UL},{7UL,6UL,7UL,7UL,6UL,7UL,7UL,6UL},{6UL,7UL,7UL,6UL,7UL,7UL,6UL,7UL},{6UL,6UL,255UL,6UL,6UL,255UL,6UL,6UL},{7UL,6UL,7UL,7UL,6UL,7UL,7UL,6UL},{6UL,255UL,255UL,7UL,255UL,255UL,7UL,255UL},{7UL,7UL,6UL,7UL,7UL,6UL,7UL,7UL}};



static unsigned func_1(void);
static unsigned short func_4(long long p_5);
static short func_8(const int p_9);
static const int func_13(char p_14);
static short func_18(struct S0 p_19);
static struct S0 func_20(struct S2 p_21, unsigned long long p_22);
static struct S2 func_23(unsigned p_24);
static struct S1 func_27(struct S0 p_28);
static struct S0 func_29(const unsigned long long p_30, short p_31, const unsigned short p_32, int p_33, unsigned long long p_34);
static unsigned long long func_35(long long p_36, short p_37, struct S2 p_38, struct S1 p_39);
static unsigned func_1(void)
{
    char l_3[3][10] = {{0x92L,0L,0L,0x92L,0x4DL,0x92L,0L,0L,0x92L,0x3EL},{0x0FL,0L,0x9BL,0x0FL,0x4DL,(-1L),0L,0L,(-1L),0x4DL},{0x0FL,0L,0L,0x0FL,0x3EL,0x92L,0L,0L,0x92L,0x4DL}};
    int l_10 = 0x1FBF6859L;
    int l_15 = 5L;
    int l_798[7] = {0L,0x94B16644L,0L,0L,0x94B16644L,0L,0L};
    unsigned char l_800 = 249UL;
    int l_1031 = 2L;
    short l_1032 = 0x1BC4L;
    long long l_1033 = 0x4B16A4195CFCF10CLL;
    int l_1053 = 7L;
    struct S1 l_1056 = {-1L};
    short l_1075 = (-1L);
    unsigned long long l_1099 = 0UL;
    unsigned l_1117 = 1UL;
    struct S1 l_1119 = {0x5EL};
    unsigned l_1140 = 0x451E00F5L;
    unsigned char l_1147 = 0x2EL;
    struct S2 l_1148 = {18446744073709551611UL,0};
    int i, j;
    l_3[0][1] = g_2;
    g_225[2][5][0].f1 = (l_3[0][1] || ((func_4(((safe_lshift_func_int16_t_s_u((l_1031 = (l_798[5] = func_8((g_801 = (g_2 >= ((l_10 = g_2) >= (l_800 = (((safe_add_func_int16_t_s_s(l_3[0][1], l_3[1][8])) > g_2) > func_13((l_798[5] = ((l_15 = g_2) || (g_612 = (safe_add_func_int16_t_s_s(func_18(func_20(func_23(g_2), g_225[2][5][0].f0)), l_3[0][5])))))))))))))), l_1032)) == l_1033)) < l_1033) <= g_504.f0));
    for (g_191 = (-6); (g_191 == 59); g_191++)
    {
        const unsigned short l_1052 = 0x637FL;
        struct S1 l_1057 = {6L};
        int l_1113[6];
        unsigned l_1114 = 0x476E42BCL;
        unsigned short l_1137 = 0x48D8L;
        int i;
        for (i = 0; i < 6; i++)
            l_1113[i] = 0xEA1F2FEFL;
        if ((l_1031 = (g_225[2][5][0].f1 = 0xA66428DBL)))
        {
            unsigned l_1054 = 0x91C7EE3CL;
            int l_1055 = (-8L);
            char l_1061 = 0x99L;
            unsigned l_1112 = 0xA1C20DEBL;
            if ((func_4((safe_mod_func_int8_t_s_s((((g_240.f3 = 0x9A261ED6L) || (safe_mod_func_int16_t_s_s(g_225[2][5][0].f1, (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((((((-1L) & ((safe_mod_func_int64_t_s_s((g_225[2][5][0].f0 > (safe_lshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u((l_1052 != l_1053), l_1054)), 5))), (g_240.f3 | ((l_1055 = (func_4((g_56 < g_82[1][0])) || l_1054)) | g_240.f4)))) != 0x63789FF4E7EF9500LL)) < l_1054) == g_225[2][5][0].f0) != 1L), g_391)), 0))))) < 250UL), 0x93L))) >= 0x4EF80B1FL))
            {
                l_1057 = l_1056;
                return g_643;
            }
            else
            {
                unsigned l_1058 = 0xF947C145L;
                unsigned char l_1116 = 255UL;
                g_240.f3 = g_504.f0;
                l_1058 = l_1054;
                g_240.f2 = 1L;
                for (l_1056.f0 = 2; (l_1056.f0 >= 0); l_1056.f0 -= 1)
                {
                    char l_1070[7] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
                    const unsigned char l_1076 = 1UL;
                    int l_1091 = (-7L);
                    int i, j;
                    g_97 = 5L;
                    if (l_3[l_1056.f0][(l_1056.f0 + 5)])
                        continue;
                    if (((safe_rshift_func_uint8_t_u_s(func_4(func_4(g_82[l_1056.f0][l_1056.f0])), 1)) < func_4(l_1061)))
                    {
                        unsigned long long l_1063 = 18446744073709551609UL;
                        int l_1079 = 0x478EE620L;
                        int i, j;
                        g_504.f1 = (g_191 | (g_1062 == (g_240.f0 = 0x2040CD65L)));
                        l_1063 = 1L;
                        l_798[5] = (safe_mod_func_int8_t_s_s((g_381.f0 = ((l_1075 = ((safe_div_func_int32_t_s_s((g_240.f3 = (((func_4(g_2) | ((safe_add_func_uint16_t_u_u((l_1070[1] || ((g_82[l_1056.f0][(l_1056.f0 + 1)] = g_225[2][5][0].f0) >= (+(l_1031 >= ((0UL == (!(((g_801 < (safe_rshift_func_uint16_t_u_s(l_1061, 3))) <= ((g_132 = (~5UL)) >= 0x12382FCCL)) <= g_812))) | 65535UL))))), 65535UL)) & 0xB6CDL)) || l_1058) || g_849.f0)), g_612)) | g_160)) != 4294967295UL)), l_1076));
                        g_1080 = (0xC674510BL & (safe_rshift_func_int8_t_s_s((l_1079 = l_1058), l_1076)));
                    }
                    else
                    {
                        unsigned l_1096[10][6] = {{0x2F5DF926L,0UL,0x52CACEF2L,0x824A745CL,0x955B437CL,0x955B437CL},{0xDC1B5172L,0UL,0UL,0xDC1B5172L,4294967289UL,1UL},{0xDC1B5172L,4294967289UL,1UL,0x824A745CL,0UL,1UL},{0x2F5DF926L,0x955B437CL,0UL,8UL,0UL,0x955B437CL},{0x824A745CL,4294967289UL,0x52CACEF2L,8UL,4294967289UL,0UL},{0x2F5DF926L,0UL,0x52CACEF2L,0x824A745CL,0x955B437CL,0x955B437CL},{7UL,0x52CACEF2L,0x52CACEF2L,7UL,0UL,4294967289UL},{7UL,0UL,4294967289UL,8UL,0x52CACEF2L,4294967289UL},{0xDC1B5172L,1UL,0x52CACEF2L,0x2F5DF926L,0x52CACEF2L,1UL},{8UL,0UL,0x955B437CL,0x2F5DF926L,0UL,0x52CACEF2L}};
                        int l_1115 = 0x7FE3DC8EL;
                        int i, j;
                        l_1099 = ((safe_div_func_uint16_t_u_u(((g_612 = (safe_div_func_int64_t_s_s(l_1052, ((l_1055 = (safe_mod_func_uint32_t_u_u((0x595CD84DL == (g_225[2][5][0].f1 = (safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((l_1091 = l_1058), 2)), g_504.f0)))), func_4((safe_rshift_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u(6L, l_1096[5][3])) > (4UL & (~(safe_sub_func_int64_t_s_s(g_82[l_1056.f0][l_1056.f0], g_504.f0))))) != l_1052), g_381.f0)))))) ^ l_3[l_1056.f0][(l_1056.f0 + 5)])))) ^ g_160), g_240.f2)) == g_1062);
                        l_1115 = (safe_mod_func_int64_t_s_s((safe_div_func_uint32_t_u_u((safe_add_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((((0x68BB93D9L & func_4(l_798[0])) | 8L) != (safe_mod_func_uint16_t_u_u(((safe_div_func_int16_t_s_s((l_1113[2] = ((g_801 = g_240.f4) || (!(g_160 = (l_1055 = ((l_1057.f0 <= ((l_1052 | (func_4(l_1112) ^ 0xAAL)) | 0xBDL)) >= g_506)))))), g_240.f4)) == 9L), l_1112))), l_1114)), g_191)), g_612)), 0x881479085C697E25LL));
                    }
                    l_1116 = func_4(g_849.f0);
                }
            }
        }
        else
        {
            g_225[2][5][0].f1 = (l_1113[2] = l_1117);
        }
        for (g_97 = 0; (g_97 <= 5); g_97 += 1)
        {
            const unsigned long long l_1127[3] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
            int l_1128[5] = {0x5BBAA62AL,0x5BBAA62AL,0x5BBAA62AL,0x5BBAA62AL,0x5BBAA62AL};
            int i;
            for (l_1114 = 0; (l_1114 <= 5); l_1114 += 1)
            {
                for (l_1056.f0 = 5; (l_1056.f0 >= 1); l_1056.f0 -= 1)
                {
                    int l_1118 = 0xD27DB716L;
                    int i;
                    g_849.f1 = (l_1118 = (l_1113[l_1056.f0] = (-1L)));
                }
                g_381 = g_72;
                g_381 = (l_1119 = l_1056);
            }
            for (l_1033 = (-10); (l_1033 > (-15)); --l_1033)
            {
                struct S1 l_1122 = {3L};
                l_1057 = l_1122;
                l_1128[1] = (g_225[2][5][0].f1 = (safe_mod_func_uint8_t_u_u(0xB4L, (l_1057.f0 && (((safe_div_func_uint32_t_u_u(((g_54 < l_1127[2]) < l_1057.f0), l_1128[1])) == (l_1113[2] == (safe_rshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s((+(safe_lshift_func_uint16_t_u_s((g_719 = 0x8875L), g_240.f3))), l_1128[1])) < 0L) != l_1137), g_849.f1)) ^ 0x4AL), g_234)))) == 1UL)))));
                return g_235;
            }
            l_1031 = l_1128[4];
        }
        for (g_160 = 0; g_160 < 7; g_160 += 1)
        {
            l_798[g_160] = 5L;
        }
        return l_1113[2];
    }
    g_1149[0][0] = (g_849.f1 = ((safe_sub_func_uint64_t_u_u(l_3[1][0], ((((l_1140 < (safe_div_func_int16_t_s_s((safe_add_func_int8_t_s_s(g_240.f4, ((g_240.f0 = func_4((safe_sub_func_uint32_t_u_u(l_1147, func_35(l_1119.f0, (((l_10 = 0x4E91D29DA0EC04E7LL) != g_234) <= g_849.f0), l_1148, l_1056))))) > l_800))), g_1062))) & l_798[5]) || g_506) & 1L))) && g_55));
    return g_269;
}







static unsigned short func_4(long long p_5)
{
    struct S1 l_1034[2][5] = {{{0xF8L},{0xF8L},{0xF8L},{0xF8L},{0xF8L}},{{-4L},{0L},{-4L},{0L},{-4L}}};
    struct S1 l_1035 = {0xE3L};
    int i, j;
    l_1035 = l_1034[1][3];
    return l_1035.f0;
}







static short func_8(const int p_9)
{
    short l_816 = 0x060BL;
    int l_825 = 9L;
    struct S1 l_843 = {-2L};
    struct S2 l_848 = {0UL,-0};
    long long l_899 = 0x70D866BCD192F457LL;
    long long l_918 = 5L;
    short l_943 = 9L;
    const unsigned char l_1015 = 0xE6L;
    if (p_9)
    {
        long long l_824 = (-1L);
        for (g_391 = (-5); (g_391 < 0); g_391++)
        {
            int l_822 = (-4L);
            int l_823[8] = {0L,0xDAFB6DA5L,0xDAFB6DA5L,0L,0xDAFB6DA5L,0xDAFB6DA5L,0L,0xDAFB6DA5L};
            int i;
            for (g_55 = (-3); (g_55 >= 11); g_55 = safe_add_func_int16_t_s_s(g_55, 6))
            {
                for (g_801 = 0; (g_801 > (-10)); g_801 = safe_sub_func_int8_t_s_s(g_801, 2))
                {
                    unsigned short l_813 = 0x3EA0L;
                    int l_821 = (-1L);
                    l_816 = (safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(g_812, l_813)), (safe_add_func_int8_t_s_s(l_813, g_504.f1))));
                    g_240.f3 = (l_823[4] = (l_822 = (l_821 = (l_816 & (safe_rshift_func_int8_t_s_s(g_55, (safe_lshift_func_uint16_t_u_s(65530UL, 15))))))));
                }
            }
            g_240.f2 = l_824;
            l_823[4] = (((l_825 = (-10L)) == g_72.f0) && (safe_sub_func_int8_t_s_s(((safe_unary_minus_func_uint64_t_u((safe_rshift_func_uint16_t_u_s(((g_240.f0 = func_13(l_822)) ^ (safe_sub_func_uint8_t_u_u(252UL, l_824))), g_240.f2)))) > (((((p_9 ^ (safe_div_func_int8_t_s_s(g_160, g_504.f1))) || g_504.f1) & p_9) ^ 0L) <= 65527UL)), g_801)));
        }
    }
    else
    {
        int l_836 = 0xDA2F5107L;
        struct S2 l_868 = {0x12A5C6B3738BB294LL,-0};
        struct S1 l_869 = {-8L};
        l_836 = (((g_191 = (l_825 = ((safe_unary_minus_func_int64_t_s(g_55)) && g_504.f1))) ^ g_82[1][3]) | 0x94L);
        if ((safe_add_func_int16_t_s_s(g_82[1][0], 0x7CFFL)))
        {
            for (g_619 = 0; (g_619 > 58); g_619 = safe_add_func_int32_t_s_s(g_619, 7))
            {
                struct S1 l_844 = {0x9DL};
                int l_845 = 2L;
                for (l_825 = 0; (l_825 >= (-1)); l_825 = safe_sub_func_uint64_t_u_u(l_825, 1))
                {
                    for (g_391 = 0; (g_391 <= 2); g_391 += 1)
                    {
                        int i, j;
                        l_844 = l_843;
                        l_845 = (g_82[g_391][(g_391 + 2)] == g_82[g_391][(g_391 + 3)]);
                    }
                }
            }
        }
        else
        {
            short l_847 = (-1L);
            int l_867 = 0xF7CF42B4L;
            if (g_235)
            {
                char l_851 = 0x73L;
                int l_855 = 8L;
                struct S2 l_865[6] = {{0x42F04F5F5C99129ALL,-0},{0x42F04F5F5C99129ALL,-0},{0x42F04F5F5C99129ALL,-0},{0x42F04F5F5C99129ALL,-0},{0x42F04F5F5C99129ALL,-0},{0x42F04F5F5C99129ALL,-0}};
                struct S1 l_866 = {0xC4L};
                int i;
                for (g_801 = 2; (g_801 >= 0); g_801 -= 1)
                {
                    unsigned l_846 = 0x3EACB153L;
                    g_97 = (l_836 < l_846);
                    l_847 = (p_9 | l_843.f0);
                    for (g_234 = 2; (g_234 >= 0); g_234 -= 1)
                    {
                        struct S1 l_850 = {0xAEL};
                        int l_852[6][6] = {{1L,1L,0L,1L,1L,0L},{1L,1L,0L,1L,1L,0L},{1L,1L,0L,1L,1L,0L},{1L,1L,0L,1L,1L,0L},{1L,1L,0L,1L,1L,0L},{1L,1L,0L,1L,1L,0L}};
                        int i, j;
                        l_852[3][5] = func_13(((func_35(func_18(func_20(l_848, ((g_82[g_234][(g_801 + 2)] != ((!(l_846 > g_504.f1)) >= p_9)) > (g_812 = g_719)))), p_9, g_849, l_850) | g_849.f1) == l_851));
                        return g_234;
                    }
                }
                for (g_812 = 10; (g_812 >= (-15)); --g_812)
                {
                    int l_864 = 0x90C37AF5L;
                    g_391 = (g_225[2][5][0].f1 = (l_851 | (((0x37E3L == func_35((((l_848.f1 = ((l_836 = (l_855 = l_847)) > (safe_add_func_int32_t_s_s(func_13(((safe_add_func_uint8_t_u_u((l_867 = (safe_lshift_func_int8_t_s_s((((safe_lshift_func_int16_t_s_u(l_847, 2)) == l_864) <= func_35((l_825 = (g_54 || g_160)), g_849.f0, l_865[5], l_866)), 1))), 1L)) ^ g_849.f0)), 0x55B24EE2L)))) || 0x8643C30E2888A75ELL) & 1L), p_9, l_868, l_869)) & 1UL) != g_240.f4)));
                }
            }
            else
            {
                char l_874 = (-3L);
                int l_875 = 0L;
                g_240.f2 = func_13(((safe_mod_func_uint64_t_u_u((0x40L || (l_848.f1 = (safe_add_func_int32_t_s_s((-2L), l_874)))), g_381.f0)) >= l_867));
                l_848.f1 = ((l_875 = (1L <= (0xA055L > l_847))) <= ((-5L) && ((safe_add_func_uint16_t_u_u(9UL, p_9)) != 0x6086L)));
            }
        }
        if ((safe_rshift_func_uint8_t_u_s(((+((((1L < (l_825 = 0x20CE79F1L)) <= 0L) && g_269) <= l_868.f1)) == l_848.f1), l_868.f0)))
        {
            unsigned short l_890 = 0xFFADL;
            struct S2 l_904 = {18446744073709551610UL,-0};
            struct S1 l_905 = {0x4DL};
            int l_955 = (-6L);
            l_904.f1 = ((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((func_35(((safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_u(((l_890 || (p_9 && ((((safe_rshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u((l_825 <= (l_869.f0 ^ g_619)), ((l_868.f1 = (safe_mod_func_int16_t_s_s(((safe_add_func_int16_t_s_s(l_899, ((safe_lshift_func_uint16_t_u_u(l_848.f0, (safe_sub_func_uint32_t_u_u(4294967290UL, (l_869.f0 == l_869.f0))))) >= l_869.f0))) | l_825), l_899))) & l_890))), p_9)) | p_9) & 6UL) | 0UL))) < 0x73CA0FEAF0943BFCLL), p_9)) || (-1L)), l_868.f0)) <= p_9), l_890, l_904, l_905) || 0x8715BF4C67A8CDA7LL), 2)), 15)), 13)) && g_240.f2);
            for (l_890 = 0; (l_890 <= 2); l_890 += 1)
            {
                char l_908[7] = {1L,1L,1L,(-1L),(-1L),1L,(-1L)};
                struct S1 l_919[4][9][6] = {{{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}}},{{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}}},{{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}}},{{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}},{{0x71L},{0xF5L},{0x71L},{0xF5L},{0x71L},{0xF5L}}}};
                int l_927 = 0L;
                int l_951 = 0xFD68285EL;
                struct S0 l_954 = {2797,0,2284,175,116};
                int i, j, k;
                for (l_843.f0 = 0; (l_843.f0 <= 2); l_843.f0 += 1)
                {
                    int i, j;
                    return g_82[l_890][(l_843.f0 + 3)];
                }
                l_848.f1 = (safe_add_func_uint64_t_u_u((0x48C0L <= func_13(func_13((l_836 = (l_904.f1 = (l_816 || 0x98L)))))), g_619));
                if (l_908[6])
                {
                    short l_915 = 0xDA3DL;
                    int l_928 = 0x252B3352L;
                    int l_929 = 1L;
                    struct S1 l_946[7][7] = {{{0x48L},{0x20L},{1L},{1L},{0xF8L},{1L},{1L}},{{7L},{7L},{0x87L},{-10L},{0x20L},{-10L},{0x48L}},{{0x48L},{1L},{0x87L},{0x87L},{1L},{0x48L},{0xF8L}},{{0L},{0x87L},{1L},{0xF8L},{0x20L},{0x20L},{0xF8L}},{{-10L},{0L},{-10L},{-10L},{0xF8L},{0L},{0x48L}},{{1L},{0x87L},{0L},{-10L},{0L},{0x87L},{1L}},{{0x87L},{1L},{0x48L},{0xF8L},{7L},{0L},{7L}}};
                    unsigned short l_949[10][3][8] = {{{0xB802L,0xB88AL,0x3880L,0xC4DDL,0x17FBL,65535UL,0UL,0x3880L},{0xB802L,0x17FBL,0xB88AL,0UL,0UL,65535UL,65535UL,0UL},{0xCEDCL,65533UL,0x59C3L,0xC897L,0xC4DDL,65534UL,0x3880L,0UL}},{{0UL,0xB88AL,0x17FBL,0xB802L,65533UL,0UL,0xFF4BL,6UL},{65535UL,0xB88AL,0xC897L,0x3880L,9UL,65534UL,0xB88AL,65534UL},{0x64D8L,0x59C3L,65535UL,0x59C3L,0x64D8L,9UL,9UL,65535UL}},{{4UL,0x64D8L,2UL,0x17FBL,0UL,0xCEDCL,9UL,0x59C3L},{65531UL,0x3880L,2UL,0xC897L,0xFF4BL,0x33FFL,9UL,9UL},{0UL,0UL,65535UL,65535UL,0UL,0UL,0xB88AL,0x17FBL}},{{0x33FFL,0xFF4BL,0xC897L,2UL,0x3880L,65531UL,0xFF4BL,65534UL},{0xCEDCL,0UL,0x17FBL,2UL,0x64D8L,4UL,0x3880L,0x17FBL},{9UL,0x64D8L,0x59C3L,65535UL,0x59C3L,0x64D8L,9UL,9UL}},{{65534UL,9UL,0x3880L,0xC897L,0xB88AL,65535UL,2UL,0x59C3L},{0UL,65533UL,0xB802L,0x17FBL,0xB88AL,0UL,0UL,65535UL},{65534UL,65535UL,0x3880L,0xCEDCL,0xCEDCL,0x3880L,65535UL,0UL}},{{0UL,0x64D8L,65531UL,65535UL,0xFF4BL,0xC4DDL,0xCEDCL,65531UL},{0xB88AL,0xFF4BL,9UL,65535UL,65535UL,0xC4DDL,0UL,4UL},{2UL,0x64D8L,4UL,0x3880L,0x17FBL,0x3880L,4UL,0x64D8L}},{{4UL,65535UL,0xC897L,65531UL,6UL,4UL,65535UL,65535UL},{0x59C3L,65535UL,0x3880L,9UL,4UL,9UL,65535UL,0UL},{65533UL,9UL,0xC897L,4UL,0xFF4BL,0xFF4BL,4UL,0xC897L}},{{0xFF4BL,0xFF4BL,4UL,0xC897L,9UL,65533UL,0UL,65535UL},{9UL,4UL,9UL,0x3880L,65535UL,0x59C3L,0xCEDCL,65535UL},{4UL,6UL,65531UL,0xC897L,65535UL,4UL,65535UL,0xC897L}},{{0x3880L,0x17FBL,0x3880L,4UL,0x64D8L,2UL,0x17FBL,0UL},{0xC4DDL,65535UL,65535UL,9UL,0xFF4BL,0xB88AL,0x64D8L,65535UL},{9UL,0UL,65535UL,65533UL,65534UL,2UL,2UL,65534UL}},{{0xB802L,0xC897L,0xC897L,0xB802L,9UL,6UL,65535UL,65531UL},{65531UL,65535UL,0xFF4BL,0xC4DDL,0xCEDCL,65531UL,4UL,65533UL},{65535UL,65535UL,0xB802L,65535UL,0x33FFL,6UL,65535UL,6UL}}};
                    int i, j, k;
                    g_225[2][5][0].f1 = p_9;
                    if (((safe_div_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u((l_915 = g_225[2][5][0].f0), func_13((g_504.f0 || (g_225[2][5][0].f0 | l_868.f0))))) && ((safe_lshift_func_int16_t_s_u(g_240.f1, func_35(l_918, g_160, l_904, l_843))) & g_504.f1)), l_899)) || p_9), l_836)) ^ l_848.f1))
                    {
                        l_919[1][4][1] = l_843;
                    }
                    else
                    {
                        unsigned l_924 = 0xF443E775L;
                        l_927 = (safe_sub_func_int32_t_s_s(((g_381.f0 <= (l_825 = (g_72.f0 ^ (safe_div_func_uint64_t_u_u((l_924 == g_2), (safe_sub_func_uint16_t_u_u(p_9, l_915))))))) != 0x21L), p_9));
                        if (p_9)
                            continue;
                        l_868.f1 = (l_927 = (p_9 ^ 0x7F9AL));
                        g_2 = g_381.f0;
                    }
                    if ((l_928 = p_9))
                    {
                        unsigned l_942 = 0x6A17A7FFL;
                        l_904.f1 = l_929;
                        g_225[2][5][0].f1 = (safe_div_func_int8_t_s_s(((l_848.f1 = g_506) < ((g_849.f0 | 4294967288UL) == ((((safe_lshift_func_int8_t_s_u(0x6DL, 3)) ^ (safe_lshift_func_int16_t_s_u(((safe_sub_func_int64_t_s_s((g_55 > p_9), ((safe_mod_func_int64_t_s_s(g_82[1][5], ((safe_rshift_func_int8_t_s_u(p_9, 4)) && l_927))) == 0UL))) > l_942), 6))) == g_160) & p_9))), g_719));
                    }
                    else
                    {
                        l_904.f1 = l_943;
                        l_825 = (safe_rshift_func_uint16_t_u_s(p_9, 6));
                        l_946[1][4] = l_919[3][3][2];
                    }
                    if (p_9)
                    {
                        g_504.f1 = (0x5DFFL == ((g_2 = g_801) >= (safe_mod_func_int16_t_s_s(l_949[2][0][5], 65535UL))));
                    }
                    else
                    {
                        long long l_950 = (-6L);
                        if (l_899)
                            break;
                        l_951 = ((l_927 = l_843.f0) | (!l_950));
                        return p_9;
                    }
                }
                else
                {
                    char l_956 = (-1L);
                    struct S1 l_960 = {-1L};
                    unsigned char l_966 = 0x9DL;
                    l_955 = ((l_848.f1 = 0xB9L) > (l_904.f1 = (safe_lshift_func_uint8_t_u_s((l_825 = func_13((func_18(l_954) & g_849.f1))), 3))));
                    l_956 = ((p_9 >= ((l_868.f0 & ((func_35(p_9, g_240.f1, l_868, l_905) != p_9) | p_9)) | 9L)) == (-1L));
                    if (l_869.f0)
                        break;
                    for (g_269 = 0; (g_269 <= 2); g_269 += 1)
                    {
                        unsigned short l_963 = 0UL;
                        int l_969 = 0x75E59884L;
                        int i, j;
                        l_954.f4 = (safe_lshift_func_uint16_t_u_u(func_35((safe_unary_minus_func_int64_t_s(g_82[g_269][l_890])), p_9, g_849, l_843), p_9));
                        l_960 = l_919[1][4][1];
                        l_969 = (safe_rshift_func_int16_t_s_s((l_963 != (((safe_sub_func_uint64_t_u_u(p_9, 0x0072AB5DD62B185FLL)) == ((g_381.f0 || (((l_966 = (l_825 = (g_97 <= (l_816 | func_13(g_801))))) == ((safe_lshift_func_uint8_t_u_u(0UL, p_9)) < 0xE4748B3BL)) | g_132)) >= g_504.f0)) >= l_868.f0)), 7));
                        g_240.f2 = g_82[1][0];
                    }
                }
                l_904.f1 = l_869.f0;
                for (g_2 = 0; (g_2 <= 2); g_2 += 1)
                {
                    for (g_269 = 0; (g_269 <= 2); g_269 += 1)
                    {
                        g_240.f2 = (safe_rshift_func_int8_t_s_s(p_9, 2));
                    }
                }
            }
            l_905 = l_905;
            g_849.f1 = p_9;
        }
        else
        {
            unsigned l_977[6] = {1UL,0x7D95C94FL,1UL,1UL,0x7D95C94FL,1UL};
            int l_980 = 0x8A53C911L;
            int i;
            if ((0x624F76C2L | (l_869.f0 < ((l_848.f0 | (-7L)) > (0x8726A004L != (0x23E1L | (safe_rshift_func_int16_t_s_u((((((l_848.f1 = ((g_240.f0 >= ((func_13((((safe_lshift_func_uint8_t_u_u(p_9, (l_868.f0 < p_9))) & l_843.f0) > g_976)) | p_9) > 0xF72EL)) & l_869.f0)) ^ g_160) | l_977[0]) & p_9) ^ 0x834F6D651D9C27A6LL), g_619))))))))
            {
                int l_990[6] = {0x599EFA89L,3L,0x599EFA89L,0x599EFA89L,3L,0x599EFA89L};
                int l_998 = (-5L);
                int i;
                if (g_504.f1)
                {
                    int l_997 = 4L;
                    struct S1 l_1003[10][8][3] = {{{{0x3EL},{0x44L},{0x85L}},{{0x1DL},{0xAAL},{1L}},{{-3L},{0xAAL},{-8L}},{{-1L},{0x44L},{1L}},{{-7L},{0xD6L},{-3L}},{{1L},{0x5AL},{0x66L}},{{0x5EL},{-4L},{-3L}},{{0x85L},{-9L},{1L}}},{{{1L},{0x9BL},{-8L}},{{0xA9L},{-1L},{1L}},{{0xA9L},{0x78L},{0x85L}},{{1L},{0x6CL},{0x5AL}},{{0x85L},{0x04L},{-7L}},{{0x5EL},{1L},{2L}},{{1L},{0x04L},{5L}},{{-7L},{0x6CL},{0x5EL}}},{{{-1L},{0x78L},{-3L}},{{-3L},{-3L},{0xFCL}},{{-1L},{0x32L},{-1L}},{{-8L},{1L},{1L}},{{0x50L},{0L},{0x4CL}},{{1L},{-7L},{1L}},{{0x50L},{0L},{1L}},{{-8L},{1L},{0x10L}}},{{{-1L},{0x60L},{-3L}},{{0xFCL},{0x60L},{-1L}},{{0x5DL},{1L},{0x5EL}},{{1L},{0L},{0xD8L}},{{-3L},{-7L},{-2L}},{{-1L},{0L},{0xD8L}},{{0x10L},{1L},{0x5EL}},{{0x13L},{0x32L},{-1L}}},{{{0xAEL},{-3L},{-3L}},{{0xAEL},{0x3EL},{0x10L}},{{0x13L},{5L},{1L}},{{0x10L},{-8L},{1L}},{{-1L},{0x5EL},{0x4CL}},{{-3L},{-8L},{1L}},{{1L},{5L},{-1L}},{{0x5DL},{0x3EL},{0xFCL}}},{{{0xFCL},{-3L},{0xFCL}},{{-1L},{0x32L},{-1L}},{{-8L},{1L},{1L}},{{0x50L},{0L},{0x4CL}},{{1L},{-7L},{1L}},{{0x50L},{0L},{1L}},{{-8L},{1L},{0x10L}},{{-1L},{0x60L},{-3L}}},{{{0xFCL},{0x60L},{-1L}},{{0x13L},{0x1DL},{1L}},{{-1L},{-7L},{-8L}},{{-1L},{-8L},{0xFCL}},{{0x50L},{0x3EL},{-8L}},{{-1L},{1L},{1L}},{{0x5EL},{1L},{0x5DL}},{{0x10L},{-1L},{-1L}}},{{{0x10L},{0x66L},{-1L}},{{0x5EL},{2L},{0xAEL}},{{-1L},{-1L},{-1L}},{{0x50L},{0x60L},{0xD8L}},{{-1L},{-1L},{0x4CL}},{{-1L},{2L},{0x50L}},{{0x13L},{0x66L},{1L}},{{1L},{-1L},{1L}}},{{{-1L},{1L},{0x50L}},{{-2L},{1L},{0x4CL}},{{1L},{0x3EL},{0xD8L}},{{0xAEL},{-8L},{-1L}},{{1L},{-7L},{0xAEL}},{{-2L},{0x1DL},{-1L}},{{-1L},{0L},{-1L}},{{1L},{0L},{0x5DL}}},{{{0x13L},{0x1DL},{1L}},{{-1L},{-7L},{-8L}},{{-1L},{-8L},{0xFCL}},{{0x50L},{0x3EL},{-8L}},{{-1L},{1L},{1L}},{{0x5EL},{1L},{0x5DL}},{{0x10L},{-1L},{-1L}},{{0x10L},{0x66L},{-1L}}}};
                    int i, j, k;
                    if ((safe_sub_func_uint64_t_u_u((g_160 & func_13((g_72.f0 = func_13((l_980 = ((g_82[2][4] = (!l_868.f1)) ^ func_13(l_977[0]))))))), g_240.f1)))
                    {
                        char l_991 = (-1L);
                        int l_994 = (-1L);
                        l_848.f1 = l_899;
                        l_980 = (safe_div_func_int32_t_s_s(func_13((l_998 = func_35((safe_add_func_int64_t_s_s(0x62BE92F4A03B419BLL, ((safe_lshift_func_int16_t_s_u((((safe_rshift_func_int16_t_s_u(l_869.f0, 2)) && (0x23L >= (safe_unary_minus_func_int64_t_s(((((l_990[5] ^ l_991) ^ ((g_191 = (l_994 = (safe_mod_func_int16_t_s_s(p_9, (+0xA17AL))))) > (0xE7L ^ (safe_mod_func_int8_t_s_s((-1L), l_990[5]))))) < l_868.f0) == (-1L)))))) >= g_97), 1)) > l_997))), p_9, g_225[2][5][0], g_381))), l_868.f1));
                    }
                    else
                    {
                        g_849.f1 = (safe_add_func_uint32_t_u_u((g_240.f0 && l_977[0]), (l_825 = (l_868.f1 = (g_225[2][5][0].f1 = p_9)))));
                        l_825 = l_836;
                    }
                    for (g_97 = 0; (g_97 == (-13)); --g_97)
                    {
                        return p_9;
                    }
                    l_1003[4][3][1] = g_72;
                }
                else
                {
                    return l_943;
                }
                l_998 = g_2;
            }
            else
            {
                char l_1014 = 0xC0L;
                l_980 = g_97;
                g_2 = (+(+((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(((g_55 = (safe_lshift_func_uint8_t_u_s(l_848.f1, ((func_13(p_9) < p_9) > ((safe_add_func_int8_t_s_s((((l_977[0] ^ (g_240.f4 = p_9)) || (safe_lshift_func_int16_t_s_u(((0x56F5L | ((0x322AL & ((p_9 >= g_240.f0) >= p_9)) > g_391)) != l_1014), l_1015))) < 0x6095FF191C046DB1LL), l_836)) && g_643))))) & g_235), 0x35ACL)) == g_240.f2), l_977[0])) != 0x7E1219576B41BD10LL)));
            }
        }
        for (g_191 = 0; (g_191 <= 17); g_191 = safe_add_func_uint16_t_u_u(g_191, 6))
        {
            unsigned short l_1030 = 65526UL;
            g_97 = ((safe_lshift_func_int8_t_s_u((((g_225[2][5][0].f0 ^ (4294967286UL > (l_918 ^ (g_54 = (safe_add_func_int8_t_s_s((((0UL & 0xF62BL) <= (safe_lshift_func_uint8_t_u_s(255UL, 3))) || (safe_mod_func_int16_t_s_s(((0x548DL <= ((safe_rshift_func_int16_t_s_s(g_801, g_240.f3)) < p_9)) && 0xD22BBC33F909843FLL), p_9))), p_9)))))) | p_9) ^ l_869.f0), 1)) & g_234);
            l_1030 = (2UL == (safe_sub_func_int64_t_s_s(l_869.f0, l_918)));
        }
    }
    return l_943;
}







static const int func_13(char p_14)
{
    short l_799 = 7L;
    g_225[2][5][0].f1 = (l_799 == (g_191 = p_14));
    return g_191;
}







static short func_18(struct S0 p_19)
{
    struct S1 l_742[8] = {{0x37L},{0x37L},{0x37L},{0x37L},{0x37L},{0x37L},{0x37L},{0x37L}};
    struct S2 l_775[2][4][7] = {{{{0UL,-0},{0x8BBC7AF62056F3D1LL,0},{0x07A3E72FFFD746B8LL,-0},{0x8BBC7AF62056F3D1LL,0},{0UL,-0},{0UL,-0},{0x8BBC7AF62056F3D1LL,0}},{{18446744073709551613UL,0},{0xBF0AAC833CDB5595LL,-0},{18446744073709551613UL,0},{1UL,-0},{0xA727CC4D72859C67LL,0},{0x643E49569E125820LL,0},{0UL,-0}},{{0x8BBC7AF62056F3D1LL,0},{18446744073709551613UL,-0},{0x07A3E72FFFD746B8LL,-0},{0x07A3E72FFFD746B8LL,-0},{18446744073709551613UL,-0},{0x8BBC7AF62056F3D1LL,0},{18446744073709551613UL,-0}},{{18446744073709551613UL,0},{1UL,-0},{0xA727CC4D72859C67LL,0},{0x643E49569E125820LL,0},{0UL,-0},{0x643E49569E125820LL,0},{0xA727CC4D72859C67LL,0}}},{{{0UL,-0},{0UL,-0},{0x8BBC7AF62056F3D1LL,0},{0x07A3E72FFFD746B8LL,-0},{0x8BBC7AF62056F3D1LL,0},{0UL,-0},{0UL,-0}},{{0x14844B05B3A972CALL,0},{1UL,-0},{0x3253487A9EAEF116LL,0},{1UL,-0},{0x14844B05B3A972CALL,0},{0x8D6E1501C1A9FB9CLL,0},{0xA727CC4D72859C67LL,0}},{{18446744073709551615UL,-0},{18446744073709551613UL,-0},{18446744073709551615UL,-0},{0x8BBC7AF62056F3D1LL,0},{0x8BBC7AF62056F3D1LL,0},{18446744073709551615UL,-0},{18446744073709551613UL,-0}},{{0xA727CC4D72859C67LL,0},{0xBF0AAC833CDB5595LL,-0},{0x3253487A9EAEF116LL,0},{0xAB854C11D3A9F05DLL,-0},{0UL,-0},{1UL,-0},{0UL,-0}}}};
    int l_776 = (-10L);
    long long l_777 = (-1L);
    int l_778[8][6][5] = {{{0x40812F86L,0xB066E8FDL,0xB066E8FDL,0x40812F86L,(-1L)},{0x9571920AL,1L,0L,0xD211D61EL,0L},{0x40812F86L,2L,0x51E37449L,0xB066E8FDL,(-6L)},{(-1L),0xD211D61EL,0xA614D25DL,0xD211D61EL,(-1L)},{(-1L),1L,0L,0x40812F86L,2L},{0L,0xD211D61EL,0L,1L,0x9571920AL}},{{(-6L),2L,1L,1L,2L},{(-1L),1L,0x7AE1EDF4L,1L,(-1L)},{2L,0xB066E8FDL,1L,0x40812F86L,(-6L)},{0x9571920AL,1L,0L,1L,0L},{2L,2L,0L,0xB066E8FDL,(-1L)},{(-1L),1L,0xA614D25DL,1L,(-1L)}},{{(-6L),1L,0x51E37449L,0x40812F86L,0x40812F86L},{0L,1L,0L,1L,0x9571920AL},{(-1L),2L,0xB066E8FDL,1L,0x40812F86L},{(-1L),1L,0x7AE1EDF4L,1L,(-1L)},{0x40812F86L,0xB066E8FDL,0xB066E8FDL,0x40812F86L,(-1L)},{0x9571920AL,1L,0L,0xD211D61EL,0L}},{{0x40812F86L,2L,0x51E37449L,0xB066E8FDL,(-6L)},{(-1L),0xD211D61EL,0xA614D25DL,0xD211D61EL,(-1L)},{(-1L),1L,0L,0x40812F86L,2L},{0L,0xD211D61EL,0L,1L,0x9571920AL},{(-6L),2L,1L,1L,2L},{(-1L),1L,0x7AE1EDF4L,1L,(-1L)}},{{2L,0xB066E8FDL,1L,0x40812F86L,(-6L)},{0x9571920AL,1L,0L,1L,0L},{2L,2L,0L,0xB066E8FDL,(-1L)},{(-1L),1L,0xA614D25DL,1L,(-1L)},{(-6L),1L,0x51E37449L,0x40812F86L,0x40812F86L},{0L,1L,0L,1L,0x9571920AL}},{{(-1L),2L,0xB066E8FDL,1L,0x40812F86L},{(-1L),1L,0x7AE1EDF4L,1L,(-1L)},{0x40812F86L,0xB066E8FDL,0xB066E8FDL,0x40812F86L,(-1L)},{0x9571920AL,1L,0L,0xD211D61EL,0L},{0x40812F86L,2L,0x51E37449L,0xB066E8FDL,(-6L)},{(-1L),0xD211D61EL,0xA614D25DL,0xD211D61EL,(-1L)}},{{(-1L),1L,0L,0x40812F86L,2L},{0L,0xD211D61EL,0L,1L,0x9571920AL},{(-6L),2L,1L,1L,2L},{(-1L),1L,0x7AE1EDF4L,1L,(-1L)},{2L,0xB066E8FDL,1L,0x40812F86L,(-6L)},{0x9571920AL,1L,0L,1L,0L}},{{2L,2L,0L,0xB066E8FDL,(-1L)},{(-1L),1L,0xA614D25DL,1L,(-1L)},{(-6L),1L,0x51E37449L,0x40812F86L,0x40812F86L},{0L,1L,0L,1L,0x9571920AL},{(-1L),2L,0xB066E8FDL,1L,0x40812F86L},{(-1L),1L,0x7AE1EDF4L,1L,(-1L)}}};
    struct S2 l_779 = {0xB967A1DD1EA8E1C3LL,0};
    struct S2 l_780 = {0xA5F9BE0907646176LL,0};
    unsigned short l_795 = 3UL;
    int i, j, k;
    g_381 = l_742[7];
    for (g_719 = (-22); (g_719 > 31); g_719++)
    {
        unsigned short l_750 = 0xAA26L;
        int l_753 = 1L;
        for (g_55 = 0; (g_55 == 34); g_55++)
        {
            struct S1 l_747 = {1L};
            l_747 = l_747;
            if (g_240.f3)
                continue;
            p_19.f2 = (((safe_mod_func_uint64_t_u_u((l_750 || (safe_mod_func_int16_t_s_s(((l_753 = (~(g_619 = l_747.f0))) ^ ((p_19.f3 >= (p_19.f3 > p_19.f1)) | (((safe_sub_func_int64_t_s_s(0xB55A731FBDBB7FD2LL, (p_19.f4 | ((-1L) != g_56)))) || p_19.f2) && p_19.f4))), 0x6EADL))), l_750)) > 0x7D1DA004L) && 0xEFL);
            g_504.f1 = (l_742[7].f0 || 0x67A771CAL);
        }
    }
    if (((~func_35(((safe_add_func_uint16_t_u_u(g_240.f0, (+(l_779.f1 = func_35((((safe_lshift_func_uint16_t_u_u(((l_778[4][3][2] = (((safe_lshift_func_int16_t_s_s(p_19.f1, (g_132 && ((((safe_div_func_int32_t_s_s((safe_div_func_uint32_t_u_u(p_19.f4, ((safe_mod_func_uint32_t_u_u(((l_776 = (((g_240.f2 == (safe_mod_func_int16_t_s_s((safe_unary_minus_func_int32_t_s((+(l_775[1][2][5].f1 = func_35(g_97, p_19.f1, l_775[1][2][5], l_742[7]))))), 0x0E74L))) & p_19.f2) || g_225[2][5][0].f0)) == 0xCD21BF88E7E58850LL), 0x556634C2L)) & l_775[1][2][5].f0))), l_777)) ^ p_19.f1) | p_19.f3) > 0x673E56DEL)))) | g_235) == g_504.f0)) != p_19.f4), p_19.f0)) >= p_19.f3) | g_240.f3), p_19.f3, l_779, g_381))))) == g_504.f1), l_777, l_780, l_742[7])) != l_777))
    {
        unsigned l_785 = 0x23CDC22AL;
        for (g_54 = 0; (g_54 <= 12); g_54 = safe_add_func_int32_t_s_s(g_54, 7))
        {
            char l_784 = 2L;
            struct S1 l_786 = {0x10L};
            l_785 = ((safe_unary_minus_func_int64_t_s((g_82[1][0] = (~l_784)))) <= (0L != g_240.f1));
            l_786 = func_27(p_19);
            p_19.f2 = p_19.f3;
        }
        l_780.f1 = (safe_lshift_func_int8_t_s_s(((l_778[4][3][2] = l_785) | (safe_div_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(0x8B0AL, 9)) == (5L >= (safe_rshift_func_int8_t_s_s(g_643, 3)))), l_795))), 6));
    }
    else
    {
        l_780.f1 = (safe_rshift_func_int8_t_s_u(0xE2L, 3));
    }
    return l_778[6][1][4];
}







static struct S0 func_20(struct S2 p_21, unsigned long long p_22)
{
    unsigned char l_535[5] = {5UL,5UL,5UL,5UL,5UL};
    int l_538 = 0x28923D6EL;
    int l_545 = (-4L);
    int l_546 = 3L;
    struct S2 l_553[8][3] = {{{18446744073709551612UL,0},{0x9270FD4A8983D18ALL,0},{18446744073709551612UL,0}},{{0UL,0},{0UL,0},{0UL,0}},{{18446744073709551612UL,0},{0x9270FD4A8983D18ALL,0},{18446744073709551612UL,0}},{{0UL,0},{0UL,0},{0UL,0}},{{18446744073709551612UL,0},{0x9270FD4A8983D18ALL,0},{18446744073709551612UL,0}},{{0UL,0},{0UL,0},{0UL,0}},{{18446744073709551612UL,0},{0x9270FD4A8983D18ALL,0},{18446744073709551612UL,0}},{{0UL,0},{0UL,0},{0UL,0}}};
    struct S1 l_554 = {8L};
    unsigned short l_574 = 0UL;
    struct S0 l_679 = {1033,0,2153,148,-113};
    int i, j;
    g_391 = ((p_22 == (((l_545 = ((~(safe_div_func_uint16_t_u_u(((g_82[1][0] = (safe_mod_func_uint64_t_u_u((l_535[1] = 0UL), (-1L)))) & (safe_div_func_uint64_t_u_u((l_538 = 0UL), ((safe_div_func_int8_t_s_s((safe_add_func_int16_t_s_s((-8L), (safe_lshift_func_uint8_t_u_s(l_545, g_506)))), (g_226 = l_545))) && 9L)))), l_546))) == 0L)) <= p_21.f1) > l_546)) ^ p_22);
    g_225[2][5][0].f1 = func_35((safe_add_func_uint8_t_u_u((l_545 = p_22), ((g_235 = (safe_mod_func_int64_t_s_s(g_160, p_22))) && (((+(l_538 = (((safe_add_func_int64_t_s_s((((p_21.f0 | func_35((g_54 = 0xC49BD68ABED1FCCDLL), (g_269 = (g_82[0][0] && (g_504.f0 >= 4294967295UL))), l_553[6][1], l_554)) & g_234) || 2UL), (-1L))) >= 0xAB377602L) & p_21.f0))) | 8UL) && g_504.f0)))), g_240.f2, g_225[2][0][3], g_381);
    for (g_506 = 0; (g_506 <= 38); g_506++)
    {
        unsigned char l_561 = 255UL;
        int l_562 = 0x6A3237DBL;
        int l_565 = 0x60D6D90EL;
        struct S2 l_566 = {0x376A23226E5F3C94LL,0};
        struct S1 l_567 = {-4L};
        unsigned l_735 = 4294967295UL;
        if ((func_35(g_381.f0, (l_565 = (safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(l_561, (((p_21.f0 != ((l_562 != func_35(p_21.f0, (g_269 = (0x2CEFE993L & ((safe_lshift_func_int8_t_s_u((((((0xB05AD57EL <= g_226) ^ l_561) > 18446744073709551615UL) >= 0x43B1L) == 4UL), 5)) <= (-9L)))), g_225[2][5][0], l_554)) > g_240.f3)) <= 0L) && l_561))), 5))), l_566, l_567) <= l_567.f0))
        {
            unsigned long long l_581 = 18446744073709551613UL;
            int l_597 = 0xA4E1EBF0L;
            int l_603 = 5L;
            int l_604 = 0x8D5092C6L;
            struct S0 l_605 = {757,0,3096,25,-71};
            for (g_235 = 0; (g_235 <= 2); g_235 += 1)
            {
                int l_620 = 0xECF25E44L;
                struct S1 l_624[1] = {{0L}};
                int i, j;
                g_225[2][5][0].f1 = ((safe_div_func_int32_t_s_s((((g_82[g_235][g_235] || (g_82[g_235][g_235] >= p_21.f0)) >= p_21.f0) <= (safe_mod_func_uint32_t_u_u(((p_22 > (g_191 = 0x77C5L)) <= 4294967289UL), (+(((+(((l_574 & (l_553[6][1].f1 & 0x4012L)) == l_535[1]) == 0x6F17L)) > 0x8AD1E79E1218BFEELL) != p_21.f1))))), 0xD66DE8CBL)) >= l_562);
                for (g_226 = 0; (g_226 <= 4); g_226 += 1)
                {
                    g_240.f2 = 0xC2FD93A0L;
                }
                for (l_561 = 0; (l_561 <= 2); l_561 += 1)
                {
                    int l_590 = 8L;
                    struct S1 l_591 = {0x8AL};
                    unsigned l_592 = 0xE1843368L;
                    if ((func_35(p_21.f0, ((l_545 = ((safe_lshift_func_uint16_t_u_u((l_566.f1 = func_35((!((safe_lshift_func_int8_t_s_s((~((safe_div_func_uint32_t_u_u(g_82[g_235][g_235], p_22)) != (l_581 > ((((((safe_rshift_func_int8_t_s_s((safe_div_func_uint64_t_u_u(g_240.f4, p_22)), (g_240.f4 >= (g_235 <= (safe_add_func_int32_t_s_s(((safe_div_func_uint16_t_u_u((p_21.f0 ^ p_21.f0), p_21.f0)) != l_566.f1), l_590)))))) < l_554.f0) & g_391) != 0x3141L) != 0L) != g_56)))), 3)) && g_82[g_235][g_235])), p_22, l_566, l_591)), 7)) > l_592)) > g_56), g_504, g_381) || p_21.f1))
                    {
                        int l_600 = (-4L);
                        l_604 = ((safe_rshift_func_int16_t_s_u((l_603 = (((safe_add_func_int32_t_s_s(g_226, (l_597 < (safe_sub_func_uint64_t_u_u(l_600, (p_22 || p_21.f1)))))) < ((safe_add_func_uint16_t_u_u(((-6L) >= p_22), g_2)) ^ g_234)) | 65535UL)), 5)) == l_553[6][1].f1);
                        if (p_21.f1)
                            continue;
                        l_554 = func_27(l_605);
                    }
                    else
                    {
                        if (g_82[g_235][g_235])
                            break;
                        p_21.f1 = p_22;
                        g_240.f4 = (safe_rshift_func_int16_t_s_u(0xDC09L, 2));
                    }
                    for (g_132 = 0; (g_132 <= 4); g_132 += 1)
                    {
                        int i;
                        p_21.f1 = (g_391 = (safe_mod_func_uint32_t_u_u(l_535[g_132], ((safe_mod_func_int16_t_s_s((g_612 == (l_553[6][1].f0 ^ (((0x900CCA81L && (safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(l_562, (((p_21.f0 > (l_590 = ((safe_lshift_func_int16_t_s_s(g_619, 13)) || (l_620 = p_21.f0)))) >= g_72.f0) < 0UL))), 3))) == l_535[g_132]) | p_21.f0))), g_240.f1)) & 0x694EL))));
                        if (l_590)
                            continue;
                        l_590 = p_22;
                    }
                    for (g_97 = 2; (g_97 >= 0); g_97 -= 1)
                    {
                        int i, j;
                        p_21.f1 = (safe_lshift_func_uint16_t_u_u(g_82[g_97][(l_561 + 2)], p_21.f1));
                    }
                }
                if (g_82[1][0])
                {
                    struct S1 l_623 = {0xD9L};
                    int l_640 = 1L;
                    for (g_72.f0 = 2; (g_72.f0 >= 0); g_72.f0 -= 1)
                    {
                        int l_626 = 5L;
                        int i, j;
                        l_624[0] = l_623;
                        g_240.f4 = (~0L);
                        g_240.f4 = (safe_unary_minus_func_int64_t_s(((0x99L | ((g_226 = (g_82[g_72.f0][(g_72.f0 + 1)] != p_21.f1)) ^ 255UL)) && l_605.f2)));
                        l_626 = l_535[1];
                    }
                    if (((g_191 = 65535UL) || (safe_unary_minus_func_uint8_t_u(((safe_rshift_func_int8_t_s_s((-5L), 4)) <= (safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(g_226, g_191)) == p_21.f0), (safe_div_func_int32_t_s_s(((l_581 | ((l_553[6][1].f1 = (safe_mod_func_int16_t_s_s(0x9902L, (l_640 = (safe_lshift_func_int16_t_s_s((p_21.f0 < l_553[6][1].f1), g_132)))))) <= l_620)) <= (-1L)), 4294967295UL)))))))))
                    {
                        l_554 = func_27(g_240);
                        g_391 = (g_240.f3 = (0x15DF46E9L & ((g_643 = (p_22 = ((safe_add_func_int16_t_s_s(l_567.f0, l_605.f3)) && 18446744073709551607UL))) && (safe_rshift_func_int16_t_s_u(func_35(p_21.f1, (func_35(l_562, (p_21.f0 > (safe_rshift_func_uint16_t_u_u((g_191 = (safe_div_func_uint64_t_u_u((p_22 = (safe_mod_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((p_21.f0 < (safe_rshift_func_int16_t_s_s(((p_22 > g_56) <= g_160), g_504.f0))), 0xFE40L)), p_21.f1)), g_225[2][5][0].f0)) | p_21.f1) && g_56), g_97))), p_21.f0))), p_21.f1))), g_225[2][5][0], l_624[0]) < g_391), g_504, l_567), 15)))));
                        l_640 = g_226;
                    }
                    else
                    {
                        if (l_566.f1)
                            break;
                        if (g_226)
                            break;
                    }
                    for (l_567.f0 = 2; (l_567.f0 >= 0); l_567.f0 -= 1)
                    {
                        g_72 = l_554;
                    }
                }
                else
                {
                    long long l_664 = 0xEBD646D9BC876466LL;
                    int l_665 = 0L;
                    l_665 = ((g_240.f2 = p_21.f1) && (g_225[2][5][0].f1 != (safe_mod_func_int32_t_s_s(l_664, (l_553[6][1].f1 = p_21.f1)))));
                    return g_240;
                }
            }
            for (l_565 = 0; (l_565 > 2); l_565++)
            {
                struct S1 l_668 = {0x24L};
                int l_678[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_678[i] = 0x626AE762L;
                l_668 = func_27(l_605);
                if ((safe_lshift_func_uint16_t_u_s(l_581, (((g_82[1][0] = ((g_55 = (l_538 = 0xD1L)) || (safe_unary_minus_func_int32_t_s((safe_mod_func_int64_t_s_s(7L, (safe_add_func_uint64_t_u_u(((0xB65E9A54AF640B74LL <= 0xB8D0213EF558BFB6LL) <= (safe_add_func_int32_t_s_s(p_22, func_35(p_21.f0, (l_605.f3 = (l_678[1] = p_22)), p_21, g_381)))), g_240.f3)))))))) != 5L) ^ p_21.f0))))
                {
                    g_240.f2 = p_21.f0;
                    return l_679;
                }
                else
                {
                    p_21.f1 = g_225[2][5][0].f0;
                }
                l_554 = func_27(g_240);
            }
        }
        else
        {
            unsigned char l_680[10] = {0xEFL,0xEFL,0xEFL,0xEFL,0xEFL,0xEFL,0xEFL,0xEFL,0xEFL,0xEFL};
            int l_685 = 0x41FBC1BCL;
            int l_686 = (-1L);
            short l_697 = 0xB246L;
            int l_705[5][6][8] = {{{0L,1L,0x17818E71L,0L,0x8BA787DDL,0x7695F722L,1L,0x6C006E7FL},{0L,0x106163C3L,0L,1L,(-6L),(-5L),(-6L),1L},{0x665DA7F5L,0L,0x665DA7F5L,1L,0xAD6A6ECAL,0x4DD9CD6BL,0x2C79FA6DL,(-10L)},{0xCA2B31E3L,(-1L),0x342763B8L,0x49FC9054L,0xA2549773L,0L,0xAD6A6ECAL,(-7L)},{0xCA2B31E3L,0x665DA7F5L,0x38BE33BFL,0x73DDB85AL,0xAD6A6ECAL,1L,(-1L),0xCA2B31E3L},{(-9L),0x8BA787DDL,0x21A37A85L,0L,(-6L),0xDC08CC49L,0x38BE33BFL,1L}},{{0L,0xAD6A6ECAL,(-1L),(-7L),0x4DD9CD6BL,(-5L),(-1L),0L},{0L,0x49FC9054L,0L,0x6C006E7FL,0x17818E71L,(-1L),(-1L),0x17818E71L},{0xDC08CC49L,1L,1L,0xDC08CC49L,0x5B6F9E4FL,0x17818E71L,(-6L),0x49FC9054L},{0x7695F722L,7L,0x2C79FA6DL,0xCA2B31E3L,(-1L),1L,(-7L),(-9L)},{(-6L),7L,0x138187F7L,0x342763B8L,0x106163C3L,0x17818E71L,0x3AB47B2FL,0x21A37A85L},{1L,1L,(-6L),0x138187F7L,1L,(-1L),0x2C79FA6DL,1L}},{{1L,0x49FC9054L,0x21A37A85L,0xF27137E8L,7L,(-5L),(-9L),0x634F81F9L},{0x8BA787DDL,0xAD6A6ECAL,0L,(-1L),0x73DDB85AL,0xDC08CC49L,0x138187F7L,0xDC08CC49L},{0L,0x8BA787DDL,0x3AB47B2FL,0x8BA787DDL,0L,(-7L),0xCA2B31E3L,0x17818E71L},{0L,(-9L),1L,0x49FC9054L,0x3698BE85L,0x73DDB85AL,(-6L),0x8BA787DDL},{0x2C79FA6DL,0x5B6F9E4FL,1L,0xE946457AL,0x1DCCF989L,1L,0xCA2B31E3L,0x8BA787DDL},{0x138187F7L,0L,(-7L),1L,0L,0x7695F722L,(-1L),0xA2549773L}},{{(-1L),0L,0xAD6A6ECAL,(-1L),(-7L),0x4DD9CD6BL,(-5L),(-1L)},{0L,0L,0L,(-9L),0x1DCCF989L,(-10L),0xDC08CC49L,0xDC08CC49L},{0x106163C3L,0x38BE33BFL,0x4DD9CD6BL,0x4DD9CD6BL,0x38BE33BFL,0x106163C3L,(-7L),(-10L)},{1L,(-10L),(-1L),0x665DA7F5L,0x7695F722L,0L,0x73DDB85AL,1L},{(-1L),0x8BA787DDL,0xDC08CC49L,0x665DA7F5L,0x3AB47B2FL,0x634F81F9L,1L,(-10L)},{0x6C006E7FL,0x3AB47B2FL,0L,0x4DD9CD6BL,(-1L),0xE946457AL,0x342763B8L,0xDC08CC49L}},{{0L,0x138187F7L,0x9DD42CB5L,(-9L),0L,0x38BE33BFL,(-6L),(-1L)},{0xA2549773L,0x49FC9054L,0x342763B8L,(-1L),0xCA2B31E3L,0xF27137E8L,0L,0xA2549773L},{0x49FC9054L,(-1L),0L,1L,0L,(-1L),0x49FC9054L,0x8BA787DDL},{0L,0x38BE33BFL,0L,0xF27137E8L,0x634F81F9L,0x665DA7F5L,0x9DD42CB5L,0x5593DBF3L},{1L,(-1L),(-6L),0x106163C3L,0x634F81F9L,0xAD6A6ECAL,0xA2549773L,0L},{0x7695F722L,0xF27137E8L,0x342763B8L,0x2C79FA6DL,0x665DA7F5L,(-7L),(-1L),0x634F81F9L}}};
            int i, j, k;
            g_381 = func_27(l_679);
            g_240.f2 = (l_679.f4 = ((l_566.f1 = l_680[5]) > (safe_mod_func_int64_t_s_s((g_55 <= p_21.f1), (safe_sub_func_uint16_t_u_u((+0xBD67L), ((p_21.f0 || (l_545 = g_612)) && g_240.f3)))))));
            l_686 = (l_538 = (l_685 = p_21.f0));
            if (((l_685 = (l_686 = (func_35(((0xCB6FB1934D056F80LL < l_565) && l_574), l_535[4], p_21, g_72) & (0x5409710CL <= l_680[0])))) & p_22))
            {
                int l_704 = 0xB4E086ABL;
                g_225[2][5][0].f1 = (((g_235 >= (safe_sub_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(g_269, p_22)), (safe_add_func_int16_t_s_s((g_160 = (safe_sub_func_int32_t_s_s((g_132 || l_697), 1L))), (safe_div_func_int8_t_s_s(p_22, (g_619 = (safe_add_func_int16_t_s_s(((l_685 = (safe_lshift_func_int8_t_s_s(g_234, (~((g_132 < (-1L)) == 4L))))) & g_225[2][5][0].f0), g_54)))))))))) && l_680[5]) <= l_704);
                l_705[1][1][6] = (p_21.f0 & 0UL);
            }
            else
            {
                for (g_160 = 0; (g_160 <= (-5)); g_160 = safe_sub_func_uint32_t_u_u(g_160, 4))
                {
                    g_225[2][5][0].f1 = (safe_unary_minus_func_int32_t_s((g_612 >= g_191)));
                    l_538 = g_234;
                    p_21.f1 = (g_225[2][5][0].f1 = p_21.f0);
                }
                p_21.f1 = 1L;
                g_240.f4 = (g_240.f2 = ((((!(g_643 < g_269)) & (safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(l_546, g_72.f0)), g_240.f4))) & (safe_add_func_uint64_t_u_u(5UL, (l_566.f1 = p_21.f0)))) || 5L));
            }
        }
        if ((safe_add_func_int64_t_s_s(0L, l_545)))
        {
            g_240.f3 = (safe_rshift_func_int16_t_s_u(g_269, func_35(l_538, g_719, p_21, l_554)));
        }
        else
        {
            char l_734 = (-5L);
            struct S0 l_739 = {92,0,281,117,28};
            if ((g_391 != ((!0UL) >= (safe_div_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(((safe_mod_func_int64_t_s_s((l_566.f1 = 0xE977196F73FD6387LL), (g_82[0][5] = (safe_lshift_func_int16_t_s_s((((g_82[1][0] && (safe_add_func_int16_t_s_s((func_35((g_82[2][3] = (safe_add_func_int16_t_s_s(((g_191 <= g_97) >= g_612), (l_565 = ((safe_div_func_uint8_t_u_u(l_734, g_391)) >= g_235))))), l_735, g_225[1][1][0], l_567) <= l_734), 0L))) != 18446744073709551614UL) >= 0x9BA23DC404FF0B9ELL), p_21.f0))))) & 0UL), 1UL)) >= g_506), p_22)))))
            {
                for (g_619 = 11; (g_619 >= 27); g_619 = safe_add_func_uint8_t_u_u(g_619, 1))
                {
                    struct S1 l_738 = {1L};
                    for (l_561 = 1; (l_561 <= 4); l_561 += 1)
                    {
                        l_567 = (l_738 = g_72);
                    }
                }
            }
            else
            {
                if (g_269)
                    break;
                return l_739;
            }
            l_679.f2 = g_2;
            g_240.f2 = (p_21.f1 = 0xB8C1DF0CL);
            if (g_240.f3)
                continue;
        }
        l_554 = func_27(g_240);
        g_240.f4 = (safe_sub_func_uint8_t_u_u(l_562, (g_381.f0 = (p_22 ^ l_735))));
    }
    return l_679;
}







static struct S2 func_23(unsigned p_24)
{
    unsigned l_25 = 4294967295UL;
    int l_26 = 0L;
    const long long l_68 = 0x0A04A8F9B1095402LL;
    int l_69[7];
    int l_70 = (-1L);
    struct S2 l_71[4][8][5] = {{{{18446744073709551612UL,0},{0xE11ED7A4D755E4DDLL,0},{3UL,0},{9UL,-0},{5UL,0}},{{9UL,-0},{0xE8D137083F7A5371LL,-0},{0UL,0},{3UL,0},{7UL,-0}},{{0xEF126ED30483F316LL,-0},{0xBBC9109B52FFB46DLL,-0},{0xE11ED7A4D755E4DDLL,0},{0x399958B7C26C73D5LL,0},{0x55E195D318EE11E7LL,0}},{{18446744073709551606UL,0},{0x6A3F29A3864406D4LL,0},{0xE246355D6903F87FLL,0},{0x537570C98F2C1609LL,0},{0x63853DC631A1BBCFLL,0}},{{0x63853DC631A1BBCFLL,0},{0x2CAB94E7F8FE0BD8LL,-0},{0UL,-0},{0xE11ED7A4D755E4DDLL,0},{0x603458E53ADD1EB1LL,0}},{{0xBBC9109B52FFB46DLL,-0},{0x386F5C60D0FB0CE4LL,-0},{0xE2FE0F9CC38D247FLL,0},{18446744073709551615UL,-0},{0x9EC88C485E2798E9LL,0}},{{1UL,0},{0UL,0},{0UL,0},{0x9995E3EEF21D7ACALL,0},{0xE11ED7A4D755E4DDLL,0}},{{1UL,0},{0x91824DA47CC04BECLL,0},{1UL,-0},{7UL,-0},{0xC7C9CA9E20859F89LL,-0}}},{{{0xBBC9109B52FFB46DLL,-0},{0UL,-0},{0xA63DFDF942F02481LL,-0},{0x810D8942C1F8D07FLL,0},{0x020513F0F01F95A7LL,-0}},{{0x63853DC631A1BBCFLL,0},{1UL,-0},{0UL,-0},{18446744073709551608UL,0},{0x386F5C60D0FB0CE4LL,-0}},{{18446744073709551606UL,0},{0xB948C0F44DC86549LL,0},{0xB948C0F44DC86549LL,0},{18446744073709551606UL,0},{0xD211A92B6F801DA9LL,-0}},{{0xEF126ED30483F316LL,-0},{9UL,-0},{0x63853DC631A1BBCFLL,0},{1UL,-0},{18446744073709551613UL,0}},{{9UL,-0},{0xE246355D6903F87FLL,0},{0x9A5DE3B0BAB1DDA3LL,0},{0UL,0},{0x0EFCF3BB3A51F895LL,0}},{{18446744073709551612UL,0},{0x020513F0F01F95A7LL,-0},{0xCE7022C981DF7693LL,0},{1UL,-0},{18446744073709551613UL,-0}},{{1UL,-0},{0UL,0},{0xEF126ED30483F316LL,-0},{18446744073709551606UL,0},{0x6A3F29A3864406D4LL,0}},{{0xE11ED7A4D755E4DDLL,0},{0x399958B7C26C73D5LL,0},{0x55E195D318EE11E7LL,0},{18446744073709551608UL,0},{18446744073709551606UL,0}}},{{{0x9A5DE3B0BAB1DDA3LL,0},{0x1F8A02582781EE23LL,-0},{5UL,0},{0x810D8942C1F8D07FLL,0},{1UL,-0}},{{0x55E195D318EE11E7LL,0},{0xE8D137083F7A5371LL,-0},{18446744073709551615UL,-0},{0xE2FE0F9CC38D247FLL,0},{0xF5F243A6B221C00ELL,0}},{{1UL,-0},{0x386F5C60D0FB0CE4LL,-0},{0x9DE5337C488B1902LL,-0},{0UL,0},{0UL,-0}},{{7UL,-0},{0x386F5C60D0FB0CE4LL,-0},{0x2CAB94E7F8FE0BD8LL,-0},{1UL,-0},{0xE246355D6903F87FLL,0}},{{0UL,0},{0xE8D137083F7A5371LL,-0},{0xF5F243A6B221C00ELL,0},{0xA63DFDF942F02481LL,-0},{3UL,0}},{{0x603458E53ADD1EB1LL,0},{0xF5F243A6B221C00ELL,0},{0xEF126ED30483F316LL,-0},{0UL,-0},{1UL,0}},{{1UL,-0},{0xB948C0F44DC86549LL,0},{0xBBC9109B52FFB46DLL,-0},{0xB948C0F44DC86549LL,0},{1UL,-0}},{{0UL,-0},{0xCE7022C981DF7693LL,0},{0x399958B7C26C73D5LL,0},{0x63853DC631A1BBCFLL,0},{6UL,0}}},{{{1UL,0},{1UL,-0},{7UL,-0},{0x9A5DE3B0BAB1DDA3LL,0},{18446744073709551613UL,-0}},{{0xE8D137083F7A5371LL,-0},{0x945F7E1E514D8613LL,0},{18446744073709551606UL,-0},{0xCE7022C981DF7693LL,0},{6UL,0}},{{18446744073709551613UL,-0},{0x9A5DE3B0BAB1DDA3LL,0},{0xE11ED7A4D755E4DDLL,0},{0xEF126ED30483F316LL,-0},{1UL,-0}},{{6UL,0},{0x91824DA47CC04BECLL,0},{1UL,-0},{0x55E195D318EE11E7LL,0},{1UL,0}},{{0x386F5C60D0FB0CE4LL,-0},{0xBBC9109B52FFB46DLL,-0},{0x5BA07B4D734B0E87LL,0},{5UL,0},{3UL,0}},{{18446744073709551608UL,0},{0UL,0},{0xCE7022C981DF7693LL,0},{18446744073709551613UL,-0},{0xE246355D6903F87FLL,0}},{{0xBBC9109B52FFB46DLL,-0},{0x9995E3EEF21D7ACALL,0},{18446744073709551613UL,-0},{0x603458E53ADD1EB1LL,0},{0UL,-0}},{{0xCD7FECAEFE6362ACLL,-0},{3UL,0},{18446744073709551613UL,-0},{0xBBC9109B52FFB46DLL,-0},{0xF5F243A6B221C00ELL,0}}}};
    struct S1 l_530 = {0xECL};
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_69[i] = 9L;
    l_26 = l_25;
    l_530 = func_27(func_29(func_35(((safe_rshift_func_uint16_t_u_u(0x8B69L, 6)) > (l_70 = (safe_add_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_add_func_uint64_t_u_u((p_24 < (safe_rshift_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((((g_56 = (g_55 = ((6UL | (p_24 ^ (g_54 = 0xDE11D69CL))) && l_25))) > (l_69[0] = (0x12L | (safe_mod_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(0xE4212CF7L)), (l_26 = ((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(5L, 250UL)), 0x8FFFL)), 3)), l_68)) ^ 0x799C819BL))))))) | g_2), 2)), l_25)) >= l_68) ^ 0x6BE80DA390E64C7CLL), 9))), 18446744073709551615UL)), g_2)), 0x7322L)))), l_25, l_71[1][7][1], g_72), l_71[1][7][1].f1, l_68, g_2, g_2));
    return g_225[0][3][6];
}







static struct S1 func_27(struct S0 p_28)
{
    struct S1 l_529 = {0xC5L};
    return l_529;
}







static struct S0 func_29(const unsigned long long p_30, short p_31, const unsigned short p_32, int p_33, unsigned long long p_34)
{
    long long l_197 = 0L;
    int l_207 = (-10L);
    struct S1 l_219 = {1L};
    short l_231 = 7L;
    unsigned long long l_254[9] = {0xE787EEBC04C05FA3LL,0xE787EEBC04C05FA3LL,0xE787EEBC04C05FA3LL,0xE787EEBC04C05FA3LL,0xE787EEBC04C05FA3LL,0xE787EEBC04C05FA3LL,0xE787EEBC04C05FA3LL,0xE787EEBC04C05FA3LL,0xE787EEBC04C05FA3LL};
    struct S2 l_322[5][4] = {{{0x08DDEFBBDF446996LL,-0},{1UL,-0},{0x88666FD07E57CFADLL,-0},{1UL,-0}},{{1UL,-0},{0x2CC31B7F185931FFLL,-0},{0x88666FD07E57CFADLL,-0},{0x88666FD07E57CFADLL,-0}},{{0x08DDEFBBDF446996LL,-0},{0x08DDEFBBDF446996LL,-0},{1UL,-0},{0x88666FD07E57CFADLL,-0}},{{1UL,-0},{0x88666FD07E57CFADLL,-0},{1UL,-0},{0x08DDEFBBDF446996LL,-0}},{{1UL,-0},{0x08DDEFBBDF446996LL,-0},{0x08DDEFBBDF446996LL,-0},{1UL,-0}}};
    struct S0 l_415[5][5][9] = {{{{2486,0,-514,-28,51},{3691,0,2110,-125,8},{2050,0,-2436,-111,68},{1745,0,-1798,-85,83},{624,0,2022,45,-64},{1306,0,648,106,53},{541,0,-3547,178,70},{1468,0,3317,7,127},{792,0,-3922,118,43}},{{1180,0,2780,-62,95},{3154,0,-3301,-121,-21},{960,0,-2578,-54,46},{4006,0,1645,109,121},{287,0,-183,45,-92},{3331,0,3432,-121,-73},{1194,0,3203,-172,-108},{3331,0,3432,-121,-73},{287,0,-183,45,-92}},{{3388,0,1938,-135,100},{1149,0,2371,-55,-96},{1149,0,2371,-55,-96},{3388,0,1938,-135,100},{2198,0,-2003,-137,-76},{2050,0,-2436,-111,68},{4060,0,2492,172,122},{3691,0,2110,-125,8},{734,0,-441,-85,-14}},{{4055,0,2913,84,-65},{1282,0,-1326,-112,-103},{4021,0,-3391,-39,-73},{3064,0,395,32,87},{960,0,-2578,-54,46},{1795,0,-3972,-59,-66},{1480,0,-1779,50,37},{4006,0,1645,109,121},{3331,0,3432,-121,-73}},{{885,0,2820,91,73},{792,0,-3922,118,43},{2417,0,3993,-78,-20},{734,0,-441,-85,-14},{2198,0,-2003,-137,-76},{3691,0,2110,-125,8},{3861,0,355,-65,-71},{353,0,-75,-26,-116},{3861,0,355,-65,-71}}},{{{2983,0,585,-139,27},{287,0,-183,45,-92},{1795,0,-3972,-59,-66},{1795,0,-3972,-59,-66},{287,0,-183,45,-92},{2983,0,585,-139,27},{3625,0,-971,159,-49},{326,0,1667,-142,25},{3064,0,395,32,87}},{{3541,0,1303,127,-98},{734,0,-441,-85,-14},{4060,0,2492,172,122},{1149,0,2371,-55,-96},{624,0,2022,45,-64},{97,0,-2946,-15,115},{1468,0,3317,7,127},{3861,0,355,-65,-71},{885,0,2820,91,73}},{{960,0,-2578,-54,46},{3331,0,3432,-121,-73},{1028,0,-4088,-43,94},{1532,0,-1354,-46,14},{790,0,1285,-36,112},{1480,0,-1779,50,37},{3625,0,-971,159,-49},{1560,0,-3422,179,-125},{887,0,2849,41,-105}},{{792,0,-3922,118,43},{3861,0,355,-65,-71},{3707,0,-3435,104,-30},{2486,0,-514,-28,51},{2486,0,-514,-28,51},{3707,0,-3435,104,-30},{3861,0,355,-65,-71},{792,0,-3922,118,43},{2050,0,-2436,-111,68}},{{1194,0,3203,-172,-108},{3064,0,395,32,87},{2983,0,585,-139,27},{172,0,481,-126,5},{4003,0,3588,-22,-115},{1532,0,-1354,-46,14},{790,0,1285,-36,112},{1282,0,-1326,-112,-103},{1194,0,3203,-172,-108}}},{{{2050,0,-2436,-111,68},{97,0,-2946,-15,115},{1431,0,1513,0,-32},{1745,0,-1798,-85,83},{2486,0,-2157,-177,-52},{1168,0,-266,-128,-3},{3861,0,355,-65,-71},{2417,0,3993,-78,-20},{798,0,-3493,93,29}},{{3154,0,-3301,-121,-21},{1028,0,-4088,-43,94},{1560,0,-3422,179,-125},{1180,0,2780,-62,95},{4055,0,2913,84,-65},{4055,0,2913,84,-65},{1180,0,2780,-62,95},{1560,0,-3422,179,-125},{1028,0,-4088,-43,94}},{{541,0,-3547,178,70},{798,0,-3493,93,29},{2417,0,3993,-78,-20},{3861,0,355,-65,-71},{1168,0,-266,-128,-3},{2486,0,-2157,-177,-52},{1745,0,-1798,-85,83},{1431,0,1513,0,-32},{97,0,-2946,-15,115}},{{1480,0,-1779,50,37},{1194,0,3203,-172,-108},{1282,0,-1326,-112,-103},{790,0,1285,-36,112},{954,0,3416,-159,-35},{1795,0,-3972,-59,-66},{326,0,1667,-142,25},{172,0,481,-126,5},{887,0,2849,41,-105}},{{1149,0,2371,-55,-96},{798,0,-3493,93,29},{624,0,2022,45,-64},{1168,0,-266,-128,-3},{3691,0,2110,-125,8},{1306,0,648,106,53},{1306,0,648,106,53},{3691,0,2110,-125,8},{1168,0,-266,-128,-3}}},{{{1361,0,2264,-77,13},{1028,0,-4088,-43,94},{1361,0,2264,-77,13},{4021,0,-3391,-39,-73},{790,0,1285,-36,112},{287,0,-183,45,-92},{954,0,3416,-159,-35},{4003,0,3588,-22,-115},{2983,0,585,-139,27}},{{2331,0,-2709,54,-2},{97,0,-2946,-15,115},{1168,0,-266,-128,-3},{885,0,2820,91,73},{3388,0,1938,-135,100},{541,0,-3547,178,70},{503,0,-249,-102,103},{3861,0,355,-65,-71},{4060,0,2492,172,122}},{{326,0,1667,-142,25},{887,0,2849,41,-105},{1194,0,3203,-172,-108},{4021,0,-3391,-39,-73},{172,0,481,-126,5},{1560,0,-3422,179,-125},{4006,0,1645,109,121},{4006,0,1645,109,121},{1560,0,-3422,179,-125}},{{3541,0,1303,127,-98},{1168,0,-266,-128,-3},{792,0,-3922,118,43},{1168,0,-266,-128,-3},{3541,0,1303,127,-98},{734,0,-441,-85,-14},{4060,0,2492,172,122},{1149,0,2371,-55,-96},{624,0,2022,45,-64}},{{1795,0,-3972,-59,-66},{2983,0,585,-139,27},{960,0,-2578,-54,46},{790,0,1285,-36,112},{4006,0,1645,109,121},{3974,0,-968,-164,115},{887,0,2849,41,-105},{2421,0,1163,-20,-58},{1480,0,-1779,50,37}}},{{{1168,0,-266,-128,-3},{4060,0,2492,172,122},{3541,0,1303,127,-98},{2050,0,-2436,-111,68},{792,0,-3922,118,43},{3861,0,355,-65,-71},{3707,0,-3435,104,-30},{2486,0,-514,-28,51},{2486,0,-514,-28,51}},{{3331,0,3432,-121,-73},{3154,0,-3301,-121,-21},{326,0,1667,-142,25},{4021,0,-3391,-39,-73},{326,0,1667,-142,25},{3154,0,-3301,-121,-21},{3331,0,3432,-121,-73},{2983,0,585,-139,27},{1028,0,-4088,-43,94}},{{2486,0,-514,-28,51},{1745,0,-1798,-85,83},{3388,0,1938,-135,100},{1468,0,3317,7,127},{4060,0,2492,172,122},{2433,0,2691,-16,-1},{885,0,2820,91,73},{792,0,-3922,118,43},{2417,0,3993,-78,-20}},{{2197,0,-1474,-6,-51},{287,0,-183,45,-92},{1480,0,-1779,50,37},{1180,0,2780,-62,95},{790,0,1285,-36,112},{1361,0,2264,-77,13},{1282,0,-1326,-112,-103},{2983,0,585,-139,27},{1532,0,-1354,-46,14}},{{1306,0,648,106,53},{2486,0,-514,-28,51},{2331,0,-2709,54,-2},{734,0,-441,-85,-14},{2050,0,-2436,-111,68},{734,0,-441,-85,-14},{2331,0,-2709,54,-2},{2486,0,-514,-28,51},{1306,0,648,106,53}}}};
    long long l_430[6][7] = {{0xE539DC152115C987LL,0xF434B5AF1A29EAC0LL,0xEAC13083529ED146LL,0xA77FB13204137121LL,(-1L),(-1L),0xA77FB13204137121LL},{0x4C303FD63609C185LL,(-1L),0x4C303FD63609C185LL,0x65C68B40395D64C1LL,0xA77FB13204137121LL,0xE539DC152115C987LL,0x1B573E327C05B540LL},{0xEAC13083529ED146LL,0xF434B5AF1A29EAC0LL,0xE539DC152115C987LL,0x65C68B40395D64C1LL,0xE539DC152115C987LL,0xF434B5AF1A29EAC0LL,0xEAC13083529ED146LL},{0xF434B5AF1A29EAC0LL,0x3AFCCA4461D6DC17LL,0x1B573E327C05B540LL,0xA77FB13204137121LL,7L,0xE539DC152115C987LL,7L},{0xF434B5AF1A29EAC0LL,7L,7L,0xF434B5AF1A29EAC0LL,0x4C303FD63609C185LL,(-1L),0x65C68B40395D64C1LL},{0xEAC13083529ED146LL,(-1L),0x1B573E327C05B540LL,0x4C303FD63609C185LL,0x4C303FD63609C185LL,0x1B573E327C05B540LL,(-1L)}};
    int i, j, k;
    if (p_31)
    {
        unsigned char l_196 = 0xE3L;
        struct S1 l_204 = {0x53L};
        const long long l_208[5] = {0xA3F6B23AD1BBFE58LL,0xA3F6B23AD1BBFE58LL,0xA3F6B23AD1BBFE58LL,0xA3F6B23AD1BBFE58LL,0xA3F6B23AD1BBFE58LL};
        struct S2 l_223 = {0x9CAD3B19451B64B2LL,-0};
        int l_288 = 0xFEFF1BEEL;
        unsigned char l_306[5];
        int l_311[2];
        long long l_317 = 0xFC275AE5692138E5LL;
        int l_321[8];
        char l_382 = 0xDAL;
        int i;
        for (i = 0; i < 5; i++)
            l_306[i] = 0x9FL;
        for (i = 0; i < 2; i++)
            l_311[i] = 0x6CAAE0C3L;
        for (i = 0; i < 8; i++)
            l_321[i] = 0x531DB4C0L;
        if ((g_56 ^ (safe_lshift_func_int8_t_s_s((((l_196 > (-3L)) > 1L) & 246UL), 5))))
        {
            short l_202 = 1L;
            struct S2 l_203 = {18446744073709551615UL,-0};
            struct S0 l_220[9][9][3] = {{{{209,0,1139,58,1},{3751,0,-2453,137,-48},{2065,0,4010,129,61}},{{2869,0,-3701,105,-19},{1916,0,-2427,-52,-51},{3333,0,1280,117,84}},{{3751,0,-2453,137,-48},{3391,0,639,-135,-66},{205,0,-3690,166,1}},{{273,0,2163,-69,-89},{273,0,2163,-69,-89},{3333,0,1280,117,84}},{{3391,0,639,-135,-66},{3751,0,-2453,137,-48},{847,0,223,-84,87}},{{1011,0,-2417,-119,111},{273,0,2163,-69,-89},{2943,0,-2447,77,47}},{{209,0,1139,58,1},{3391,0,639,-135,-66},{3832,0,2611,78,-60}},{{3197,0,542,-103,-28},{1011,0,-2417,-119,111},{2943,0,-2447,77,47}},{{339,0,920,-140,47},{209,0,1139,58,1},{847,0,223,-84,87}}},{{{1916,0,-2427,-52,-51},{3197,0,542,-103,-28},{3333,0,1280,117,84}},{{339,0,920,-140,47},{339,0,920,-140,47},{205,0,-3690,166,1}},{{3197,0,542,-103,-28},{1916,0,-2427,-52,-51},{3863,0,2266,-39,-124}},{{209,0,1139,58,1},{339,0,920,-140,47},{965,0,255,4,-82}},{{1011,0,-2417,-119,111},{3197,0,542,-103,-28},{3242,0,3478,65,-34}},{{3391,0,639,-135,-66},{209,0,1139,58,1},{965,0,255,4,-82}},{{273,0,2163,-69,-89},{1011,0,-2417,-119,111},{3863,0,2266,-39,-124}},{{3751,0,-2453,137,-48},{3391,0,639,-135,-66},{205,0,-3690,166,1}},{{273,0,2163,-69,-89},{273,0,2163,-69,-89},{3333,0,1280,117,84}}},{{{3391,0,639,-135,-66},{3751,0,-2453,137,-48},{847,0,223,-84,87}},{{1011,0,-2417,-119,111},{273,0,2163,-69,-89},{2943,0,-2447,77,47}},{{209,0,1139,58,1},{3391,0,639,-135,-66},{3832,0,2611,78,-60}},{{3197,0,542,-103,-28},{1011,0,-2417,-119,111},{2943,0,-2447,77,47}},{{339,0,920,-140,47},{209,0,1139,58,1},{847,0,223,-84,87}},{{1916,0,-2427,-52,-51},{3197,0,542,-103,-28},{3333,0,1280,117,84}},{{339,0,920,-140,47},{339,0,920,-140,47},{205,0,-3690,166,1}},{{3197,0,542,-103,-28},{1916,0,-2427,-52,-51},{3863,0,2266,-39,-124}},{{209,0,1139,58,1},{339,0,920,-140,47},{965,0,255,4,-82}}},{{{1011,0,-2417,-119,111},{3197,0,542,-103,-28},{3242,0,3478,65,-34}},{{3391,0,639,-135,-66},{209,0,1139,58,1},{965,0,255,4,-82}},{{273,0,2163,-69,-89},{1011,0,-2417,-119,111},{3863,0,2266,-39,-124}},{{3751,0,-2453,137,-48},{3391,0,639,-135,-66},{205,0,-3690,166,1}},{{273,0,2163,-69,-89},{273,0,2163,-69,-89},{3333,0,1280,117,84}},{{3391,0,639,-135,-66},{3751,0,-2453,137,-48},{847,0,223,-84,87}},{{1011,0,-2417,-119,111},{273,0,2163,-69,-89},{3042,0,-31,-97,43}},{{2944,0,-372,-74,48},{209,0,-2390,-83,105},{3391,0,639,-135,-66}},{{171,0,-2031,-165,-20},{1987,0,-2415,-30,-64},{3042,0,-31,-97,43}}},{{{2528,0,-241,33,26},{2944,0,-372,-74,48},{339,0,920,-140,47}},{{759,0,-4071,125,-121},{171,0,-2031,-165,-20},{2869,0,-3701,105,-19}},{{2528,0,-241,33,26},{2528,0,-241,33,26},{2628,0,1166,50,50}},{{171,0,-2031,-165,-20},{759,0,-4071,125,-121},{273,0,2163,-69,-89}},{{2944,0,-372,-74,48},{2528,0,-241,33,26},{2959,0,302,-93,-50}},{{1987,0,-2415,-30,-64},{171,0,-2031,-165,-20},{3197,0,542,-103,-28}},{{209,0,-2390,-83,105},{2944,0,-372,-74,48},{2959,0,302,-93,-50}},{{2936,0,-2444,33,63},{1987,0,-2415,-30,-64},{273,0,2163,-69,-89}},{{2109,0,-3222,37,12},{209,0,-2390,-83,105},{2628,0,1166,50,50}}},{{{2936,0,-2444,33,63},{2936,0,-2444,33,63},{2869,0,-3701,105,-19}},{{209,0,-2390,-83,105},{2109,0,-3222,37,12},{339,0,920,-140,47}},{{1987,0,-2415,-30,-64},{2936,0,-2444,33,63},{3042,0,-31,-97,43}},{{2944,0,-372,-74,48},{209,0,-2390,-83,105},{3391,0,639,-135,-66}},{{171,0,-2031,-165,-20},{1987,0,-2415,-30,-64},{3042,0,-31,-97,43}},{{2528,0,-241,33,26},{2944,0,-372,-74,48},{339,0,920,-140,47}},{{759,0,-4071,125,-121},{171,0,-2031,-165,-20},{2869,0,-3701,105,-19}},{{2528,0,-241,33,26},{2528,0,-241,33,26},{2628,0,1166,50,50}},{{171,0,-2031,-165,-20},{759,0,-4071,125,-121},{273,0,2163,-69,-89}}},{{{2944,0,-372,-74,48},{2528,0,-241,33,26},{2959,0,302,-93,-50}},{{1987,0,-2415,-30,-64},{171,0,-2031,-165,-20},{3197,0,542,-103,-28}},{{209,0,-2390,-83,105},{2944,0,-372,-74,48},{2959,0,302,-93,-50}},{{2936,0,-2444,33,63},{1987,0,-2415,-30,-64},{273,0,2163,-69,-89}},{{2109,0,-3222,37,12},{209,0,-2390,-83,105},{2628,0,1166,50,50}},{{2936,0,-2444,33,63},{2936,0,-2444,33,63},{2869,0,-3701,105,-19}},{{209,0,-2390,-83,105},{2109,0,-3222,37,12},{339,0,920,-140,47}},{{1987,0,-2415,-30,-64},{2936,0,-2444,33,63},{3042,0,-31,-97,43}},{{2944,0,-372,-74,48},{209,0,-2390,-83,105},{3391,0,639,-135,-66}}},{{{171,0,-2031,-165,-20},{1987,0,-2415,-30,-64},{3042,0,-31,-97,43}},{{2528,0,-241,33,26},{2944,0,-372,-74,48},{339,0,920,-140,47}},{{759,0,-4071,125,-121},{171,0,-2031,-165,-20},{273,0,2163,-69,-89}},{{3312,0,2011,151,48},{3312,0,2011,151,48},{339,0,920,-140,47}},{{3857,0,1484,-7,68},{1987,0,-2415,-30,-64},{693,0,4031,-39,-124}},{{209,0,-2390,-83,105},{3312,0,2011,151,48},{3751,0,-2453,137,-48}},{{171,0,-2031,-165,-20},{3857,0,1484,-7,68},{2869,0,-3701,105,-19}},{{1639,0,-4055,-173,-56},{209,0,-2390,-83,105},{3751,0,-2453,137,-48}},{{3459,0,3542,68,19},{171,0,-2031,-165,-20},{693,0,4031,-39,-124}}},{{{2944,0,-372,-74,48},{1639,0,-4055,-173,-56},{339,0,920,-140,47}},{{3459,0,3542,68,19},{3459,0,3542,68,19},{273,0,2163,-69,-89}},{{1639,0,-4055,-173,-56},{2944,0,-372,-74,48},{3959,0,-679,52,-6}},{{171,0,-2031,-165,-20},{3459,0,3542,68,19},{1916,0,-2427,-52,-51}},{{209,0,-2390,-83,105},{1639,0,-4055,-173,-56},{2628,0,1166,50,50}},{{3857,0,1484,-7,68},{171,0,-2031,-165,-20},{1916,0,-2427,-52,-51}},{{3312,0,2011,151,48},{209,0,-2390,-83,105},{3959,0,-679,52,-6}},{{1987,0,-2415,-30,-64},{3857,0,1484,-7,68},{273,0,2163,-69,-89}},{{3312,0,2011,151,48},{3312,0,2011,151,48},{339,0,920,-140,47}}}};
            struct S1 l_255 = {0xFDL};
            int l_303 = 1L;
            char l_326[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            int l_366 = (-1L);
            unsigned char l_380 = 0x6AL;
            int l_465 = 0x8CA53054L;
            int i, j, k;
            if ((l_197 == (((safe_add_func_uint64_t_u_u(((l_202 && func_35(l_202, p_33, l_203, l_204)) >= 0L), (safe_sub_func_uint32_t_u_u((l_207 = p_31), g_56)))) ^ l_208[2]) && l_202)))
            {
                struct S1 l_211 = {-1L};
                int l_224 = 1L;
                struct S2 l_266 = {0x2BD3F513112503CDLL,0};
                for (p_31 = 28; (p_31 != (-24)); p_31--)
                {
                    char l_214 = (-1L);
                    int l_217 = 1L;
                    const struct S1 l_218[10] = {{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}};
                    int i;
                    g_72 = l_211;
                    g_72 = (l_211 = l_204);
                    for (g_72.f0 = (-27); (g_72.f0 > (-7)); g_72.f0++)
                    {
                        l_214 = (3UL <= (p_31 > p_34));
                        l_217 = (safe_add_func_int64_t_s_s(g_72.f0, (-1L)));
                        l_219 = l_218[5];
                    }
                    return l_220[7][1][1];
                }
                g_225[2][5][0].f1 = func_35(func_35((((g_56 | g_2) != (safe_rshift_func_int16_t_s_s((!(p_33 || ((l_224 = (l_220[7][1][1].f3 = (!func_35(l_220[7][1][1].f4, g_82[1][0], l_223, (g_72 = l_211))))) <= g_56))), p_32))) > l_211.f0), p_31, g_225[2][5][0], l_211), g_225[2][5][0].f1, l_223, l_204);
                for (g_160 = 2; (g_160 >= 0); g_160 -= 1)
                {
                    short l_232 = 0x9F23L;
                    int l_236 = 0x5D713EDCL;
                    for (p_31 = 2; (p_31 >= 0); p_31 -= 1)
                    {
                        l_220[7][1][1].f3 = (p_32 == ((g_226 = 0L) != (l_219.f0 > (safe_lshift_func_int16_t_s_s(7L, p_31)))));
                        l_223.f1 = p_33;
                        l_232 = (0x8AL || ((g_82[2][0] < ((0xBA2CL > g_160) & (l_223.f1 & (l_207 == l_231)))) > p_31));
                        g_225[2][5][0].f1 = l_211.f0;
                    }
                    g_97 = ((l_236 = (((-9L) >= (+(+((((safe_unary_minus_func_int16_t_s(0x8AEEL)) || p_31) == ((g_226 = (l_219.f0 ^ g_2)) > g_234)) && g_160)))) <= (g_235 = 0x0450DAB84D86FEFDLL))) && g_56);
                    l_207 = g_56;
                    for (l_232 = 0; (l_232 <= 2); l_232 += 1)
                    {
                        unsigned short l_237 = 0x592EL;
                        l_237 = p_31;
                        l_207 = (g_225[2][5][0].f1 = (safe_rshift_func_uint8_t_u_s((g_55 = l_236), 3)));
                    }
                    for (g_97 = 2; (g_97 >= 0); g_97 -= 1)
                    {
                        return g_240;
                    }
                }
                if ((l_207 = ((safe_rshift_func_uint8_t_u_u(((p_31 = p_34) ^ (g_160 = ((safe_sub_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(p_32, 0xBA2B943FF87EAEE4LL)), (g_56 = g_160))) < g_240.f3))), 5)) && g_132)))
                {
                    short l_249 = (-1L);
                    int l_250 = 0xC69E6B9AL;
                    g_97 = (l_249 = (safe_sub_func_int8_t_s_s(p_34, l_220[7][1][1].f1)));
                    if ((((-6L) | l_250) != (0x3172L >= 0x7DE8L)))
                    {
                        struct S1 l_253 = {-1L};
                        int l_256 = (-1L);
                        l_256 = (func_35((g_82[0][1] && (((l_197 && (l_250 == l_249)) == (((l_224 >= l_202) != ((g_225[2][5][0].f0 ^ (safe_lshift_func_uint8_t_u_s(func_35(((p_31 | 0UL) | 1UL), p_33, l_203, l_253), 7))) > 7L)) == p_32)) ^ l_254[3])), l_223.f0, g_225[0][1][2], l_255) > p_34);
                        l_256 = l_196;
                    }
                    else
                    {
                        struct S0 l_257 = {1575,0,-844,42,-126};
                        return l_257;
                    }
                }
                else
                {
                    long long l_287[9] = {0x2FF4622C585B56D4LL,0xEAA570827C41B23CLL,0x2FF4622C585B56D4LL,0xEAA570827C41B23CLL,0x2FF4622C585B56D4LL,0xEAA570827C41B23CLL,0x2FF4622C585B56D4LL,0xEAA570827C41B23CLL,0x2FF4622C585B56D4LL};
                    int i;
                    for (p_33 = 0; (p_33 == 27); ++p_33)
                    {
                        g_72 = l_204;
                        g_240.f3 = ((safe_add_func_uint32_t_u_u((((safe_add_func_int8_t_s_s(func_35(g_54, (safe_sub_func_uint64_t_u_u((l_224 = l_223.f0), 0xC1D48B72D27B8E15LL)), l_266, l_211), (safe_rshift_func_int8_t_s_u(((((((g_240.f1 < l_208[3]) > ((g_269 = ((l_223.f1 = l_266.f1) ^ g_225[2][5][0].f0)) <= 0x8CL)) >= 0x22F857C4L) < g_240.f2) & l_231) | 0x72C08B8954911FD7LL), g_2)))) >= l_211.f0) && l_254[3]), 0xFB299D94L)) & p_32);
                        if (g_82[1][0])
                            continue;
                    }
                    for (g_55 = 20; (g_55 != 14); g_55 = safe_sub_func_int64_t_s_s(g_55, 1))
                    {
                        struct S1 l_272[7] = {{0x4BL},{0x4BL},{0x4BL},{0x4BL},{0x4BL},{0x4BL},{0x4BL}};
                        int i;
                        l_272[5] = g_72;
                        g_240.f4 = g_56;
                        l_288 = (l_220[7][1][1].f2 = (((safe_rshift_func_int16_t_s_u(p_31, (l_224 && l_272[5].f0))) < (((safe_add_func_uint32_t_u_u(((g_240.f2 = g_82[1][0]) && g_191), ((safe_mod_func_int8_t_s_s(l_266.f0, ((l_223.f1 = ((safe_mod_func_int16_t_s_s((((safe_add_func_uint8_t_u_u((safe_unary_minus_func_int64_t_s((g_54 = (9L >= 18446744073709551614UL)))), (safe_unary_minus_func_uint64_t_u((safe_sub_func_int16_t_s_s((-1L), g_269)))))) | l_219.f0) & g_191), 0xBB47L)) > p_33)) & l_208[2]))) && l_287[7]))) >= g_82[0][4]) ^ 0xC2L)) ^ g_235));
                        g_72 = l_219;
                    }
                    g_240.f4 = (((safe_lshift_func_int16_t_s_u(g_2, (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((l_223.f1 = ((safe_rshift_func_int16_t_s_u((0xBCBEL | ((safe_rshift_func_uint16_t_u_s((~((safe_sub_func_int32_t_s_s(g_2, (0x6BD2A75425D473E1LL > (safe_mod_func_int16_t_s_s((3L >= l_303), 0xE259L))))) > func_35((1UL == l_287[7]), g_240.f4, l_266, g_72))), 3)) == 0x2A3DL)), g_2)) || 6L)), g_240.f0)) < l_288), 3)))) & l_197) == l_224);
                }
            }
            else
            {
                struct S1 l_313 = {5L};
                unsigned l_318 = 3UL;
                int l_323 = 0x471300C7L;
                unsigned long long l_328 = 0UL;
                if (p_31)
                {
                    const int l_316[9][5] = {{0xF715C670L,1L,0xF715C670L,0xF715C670L,1L},{(-1L),0x9F907A06L,0x9F907A06L,(-1L),0x9F907A06L},{1L,1L,0xDB652A51L,1L,0xF715C670L},{0x8A108B1EL,0x9F907A06L,0x8A108B1EL,0x8A108B1EL,0x9F907A06L},{0xF715C670L,0xDB652A51L,0xDB652A51L,0xF715C670L,0xDB652A51L},{0x9F907A06L,0x9F907A06L,(-1L),0x9F907A06L,0x9F907A06L},{0xDB652A51L,0xF715C670L,0xDB652A51L,0xDB652A51L,0xF715C670L},{0x9F907A06L,0x8A108B1EL,0x8A108B1EL,0x9F907A06L,0x8A108B1EL},{0xF715C670L,0xF715C670L,1L,0xF715C670L,0xF715C670L}};
                    struct S1 l_329 = {-1L};
                    int i, j;
                    g_225[2][5][0].f1 = g_240.f1;
                    g_240.f2 = (g_240.f4 = (safe_rshift_func_uint16_t_u_s(l_306[3], func_35((l_207 = p_31), g_240.f2, g_225[2][5][0], l_204))));
                    if (g_160)
                    {
                        int l_312 = 1L;
                        g_240.f3 = (safe_div_func_uint64_t_u_u((safe_add_func_int32_t_s_s(l_311[0], (func_35(l_312, (g_54 >= g_56), g_225[2][5][0], l_313) || g_225[2][5][0].f0))), ((!(l_317 = (safe_lshift_func_int8_t_s_s(((p_31 | g_2) & 0x63F446E6B259F250LL), l_316[7][3])))) & l_318)));
                    }
                    else
                    {
                        unsigned char l_327 = 0x89L;
                        l_323 = (safe_rshift_func_int8_t_s_u(func_35(l_255.f0, l_321[3], l_322[4][2], l_219), l_197));
                        l_327 = (g_240.f4 = (safe_mod_func_uint16_t_u_u(p_30, l_326[4])));
                        l_220[7][1][1].f2 = (l_328 != func_35(g_160, p_33, g_225[2][0][3], l_255));
                        l_329 = l_329;
                    }
                }
                else
                {
                    unsigned char l_347[10] = {0x8CL,0x8CL,0x8CL,0x8CL,0x8CL,0x8CL,0x8CL,0x8CL,0x8CL,0x8CL};
                    struct S2 l_365 = {0UL,-0};
                    int l_375[4][10] = {{1L,0x39550EE5L,(-1L),0x39550EE5L,1L,1L,0x39550EE5L,(-1L),0x39550EE5L,1L},{1L,0x39550EE5L,(-1L),0x39550EE5L,1L,1L,0x39550EE5L,(-1L),0x39550EE5L,1L},{1L,0x39550EE5L,(-1L),0x39550EE5L,1L,1L,0x39550EE5L,(-1L),0x39550EE5L,1L},{1L,0x39550EE5L,(-1L),0x39550EE5L,1L,1L,0x39550EE5L,(-1L),0x39550EE5L,1L}};
                    int i, j;
                    for (l_231 = 12; (l_231 >= 13); l_231 = safe_add_func_uint32_t_u_u(l_231, 8))
                    {
                        unsigned l_344 = 4294967295UL;
                        l_344 = (safe_div_func_uint8_t_u_u((l_288 & (0xB421L || ((((p_30 != (safe_add_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(p_32, (p_33 >= (safe_add_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(0x77B0583BL, (g_82[1][0] ^ g_225[2][5][0].f1))) > p_32), g_240.f0))))), 0xE594L))) <= g_225[2][5][0].f0) && 0UL) & 0L))), g_235));
                        g_240.f4 = ((safe_div_func_uint8_t_u_u((l_347[5] = l_344), (~(l_321[3] = (safe_lshift_func_uint8_t_u_s(l_311[0], 4)))))) > (safe_sub_func_uint8_t_u_u((p_31 | p_34), (safe_unary_minus_func_uint64_t_u((safe_rshift_func_int8_t_s_u((l_203.f1 = (((((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((((safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(l_207, p_30)), (safe_rshift_func_int8_t_s_u(g_97, 1)))) && func_35(l_323, l_344, l_365, l_204)) && g_240.f0), p_32)), g_234)) & 0L) != p_33) | 65530UL) < (-7L))), 0)))))));
                    }
                    l_382 = ((l_366 < (l_365.f1 = (p_33 <= ((safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((((safe_lshift_func_uint8_t_u_u(l_375[3][3], 5)) || (safe_div_func_uint16_t_u_u((func_35((p_33 <= (4294967286UL >= (g_240.f3 = (g_240.f2 = (l_380 = (((safe_sub_func_uint64_t_u_u(func_35(p_31, l_220[7][1][1].f2, l_223, g_72), g_235)) || p_32) != l_365.f1)))))), g_226, l_365, g_381) || p_33), p_30))) | (-9L)) < 0xD643687EL), g_2)), p_30)), g_235)) >= g_240.f0)))) == g_240.f4);
                    g_240.f4 = ((l_223.f1 = (g_82[1][0] = p_31)) || (0xB35BL ^ (g_269 ^ (l_255.f0 || l_313.f0))));
                    if ((((l_323 = (l_254[3] >= ((func_35(p_32, (safe_mod_func_uint64_t_u_u(func_35(g_381.f0, (p_34 || (safe_add_func_int16_t_s_s(p_31, (((p_32 > (safe_lshift_func_int8_t_s_s(((g_235 = (g_240.f0 != ((1L > (safe_rshift_func_int8_t_s_u(g_72.f0, 3))) ^ g_391))) | p_31), g_72.f0))) > l_219.f0) ^ l_326[4])))), l_365, l_313), p_32)), l_322[3][2], l_204) ^ g_381.f0) ^ 0x9AE4B778L))) & 5L) || l_321[1]))
                    {
                        g_240.f4 = func_35(g_82[1][0], (l_322[4][2].f1 = (p_31 = (safe_lshift_func_int16_t_s_u((g_269 = (l_365.f1 = ((l_326[5] & g_234) & (g_191 = p_32)))), g_240.f0)))), g_225[2][5][0], l_219);
                        g_240.f3 = (l_311[0] = p_33);
                        return g_240;
                    }
                    else
                    {
                        struct S1 l_394 = {0xACL};
                        l_219 = l_394;
                        g_391 = (g_97 = p_34);
                        g_72 = l_313;
                    }
                }
                if (g_240.f3)
                {
                    struct S2 l_412[3] = {{0x65867E601E663E33LL,-0},{0x65867E601E663E33LL,-0},{0x65867E601E663E33LL,-0}};
                    int i;
                    l_412[0].f1 = ((p_31 = (((safe_sub_func_uint32_t_u_u((((safe_mod_func_uint16_t_u_u(p_33, ((safe_div_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(0x1206192F4315D77ALL, (safe_unary_minus_func_int64_t_s((l_202 >= ((safe_sub_func_int8_t_s_s((p_31 && ((safe_div_func_uint16_t_u_u(0x1870L, p_34)) && (-1L))), ((65527UL < ((safe_div_func_uint64_t_u_u(func_35((safe_div_func_int32_t_s_s(p_34, l_366)), p_32, l_412[0], g_381), p_31)) & (-1L))) < 0x27L))) >= p_33)))))), p_33)) ^ l_412[0].f1))) || 3L) ^ 4UL), l_318)) || 4L) <= 0x07L)) || l_231);
                    for (g_160 = 16; (g_160 != (-16)); g_160 = safe_sub_func_int64_t_s_s(g_160, 1))
                    {
                        l_311[0] = l_203.f1;
                    }
                }
                else
                {
                    return l_415[2][1][5];
                }
                for (g_191 = 0; (g_191 >= 54); g_191 = safe_add_func_int32_t_s_s(g_191, 5))
                {
                    int l_454 = 0x75A4FC06L;
                    int l_456 = 0L;
                    short l_464 = (-4L);
                    if (((safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((l_313.f0 & (g_2 < (safe_rshift_func_uint16_t_u_s(65531UL, 12)))), p_31)), g_132)) && (safe_add_func_uint32_t_u_u(((-1L) & (safe_lshift_func_int8_t_s_u((!((safe_lshift_func_int8_t_s_u(g_235, g_240.f1)) || (l_323 = (g_225[2][5][0].f1 && (-1L))))), l_430[4][5]))), 0xFF1917F8L))))
                    {
                        unsigned short l_455 = 0x725FL;
                        g_240.f2 = p_34;
                        l_415[2][1][5].f3 = (safe_lshift_func_int8_t_s_s(9L, (safe_rshift_func_int8_t_s_s(((g_269 = (((safe_div_func_int64_t_s_s(g_235, (safe_unary_minus_func_int32_t_s(((safe_lshift_func_uint8_t_u_s((l_323 = (safe_lshift_func_int8_t_s_u((l_202 || (0xBBF00851L != (safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_add_func_int64_t_s_s((((g_391 <= ((l_207 = (((p_34 && (safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u((g_234 && (((1UL == (l_415[2][1][5].f2 = g_56)) ^ (-1L)) && g_235)), g_235)) ^ l_454), l_454))) && 255UL) ^ p_34)) == p_34)) != 0x81317ECAL) & l_220[7][1][1].f3), p_32)), p_30)), 9L)))), l_203.f0))), l_220[7][1][1].f1)) != l_455))))) == 0x0EL) >= p_31)) || l_415[2][1][5].f2), g_55))));
                    }
                    else
                    {
                        int l_461 = (-5L);
                        l_415[2][1][5].f2 = (((l_456 = (g_132 = (0xD7L & g_269))) != (safe_sub_func_int8_t_s_s((((p_34 == ((((+(0x4EL <= ((safe_sub_func_uint64_t_u_u((g_235 = l_461), 0xDF838681FD1DC98ELL)) <= (safe_mod_func_int64_t_s_s((l_415[2][1][5].f3 | (-7L)), (l_464 = p_32)))))) == l_465) && l_464) && g_82[1][0])) >= p_34) == g_381.f0), g_56))) == l_220[7][1][1].f4);
                        if (g_225[2][5][0].f1)
                            break;
                    }
                }
            }
            g_381 = g_72;
            if (((g_225[2][5][0].f1 = (safe_add_func_uint32_t_u_u((((safe_div_func_uint32_t_u_u(g_226, (safe_div_func_int8_t_s_s(func_35(g_240.f3, ((!(safe_unary_minus_func_uint16_t_u(l_220[7][1][1].f2))) >= (safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((l_321[3] = (1L ^ ((func_35(l_204.f0, l_220[7][1][1].f4, g_225[2][5][0], g_381) || p_32) >= 0x46869381L))), 65531UL)), p_33))), g_225[2][5][7], l_204), g_269)))) & p_34) != g_234), g_240.f3))) ^ g_235))
            {
                l_220[7][1][1].f2 = (g_240.f2 = (g_191 >= p_33));
            }
            else
            {
                unsigned char l_479 = 1UL;
                for (l_219.f0 = (-24); (l_219.f0 >= 23); l_219.f0 = safe_add_func_uint8_t_u_u(l_219.f0, 8))
                {
                    l_479 = 1L;
                }
                g_240.f2 = ((l_321[3] = (0xFDC4L ^ ((l_220[7][1][1].f2 = (safe_mod_func_uint32_t_u_u((0x3F82A7C7L | (((g_55 == (g_235 || ((safe_div_func_int8_t_s_s((g_132 >= (g_160 && (safe_lshift_func_uint16_t_u_s(g_56, 12)))), p_30)) != l_204.f0))) && l_220[7][1][1].f4) != 0x92L)), p_34))) <= 255UL))) && 0x1A34BA68L);
            }
        }
        else
        {
            unsigned char l_493 = 0x2EL;
            struct S2 l_498[6][1][4] = {{{{0xB877866A6B6F4988LL,0},{0UL,0},{0x46C23B8312E70D47LL,0},{0x46C23B8312E70D47LL,0}}},{{{0x1FF90CE3C15ABD8DLL,-0},{0x1FF90CE3C15ABD8DLL,-0},{18446744073709551613UL,-0},{0UL,0}}},{{{0UL,0},{0xB877866A6B6F4988LL,0},{18446744073709551613UL,-0},{0xB877866A6B6F4988LL,0}}},{{{18446744073709551613UL,-0},{0xB877866A6B6F4988LL,0},{0UL,0},{0x46C23B8312E70D47LL,0}}},{{{18446744073709551615UL,0},{0xB877866A6B6F4988LL,0},{0xB877866A6B6F4988LL,0},{18446744073709551615UL,0}}},{{{0xB877866A6B6F4988LL,0},{18446744073709551615UL,0},{18446744073709551613UL,-0},{0x4426C7D89A73C911LL,0}}}};
            int i, j, k;
            if ((safe_lshift_func_uint8_t_u_u(g_381.f0, 6)))
            {
                unsigned char l_492 = 250UL;
                int l_494 = (-9L);
                int l_497 = 0x6D4EA6BCL;
                int l_499 = 0x484FA863L;
                g_240.f2 = (g_240.f2 || (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(func_35(l_492, p_31, g_225[2][5][3], (l_219 = g_381)), 1)), l_493)));
                l_499 = (g_225[2][5][0].f1 = ((0x37L > ((l_494 = l_197) == 1L)) != ((safe_add_func_int32_t_s_s(((l_497 = 250UL) ^ func_35(p_34, l_493, l_498[1][0][1], g_72)), l_311[0])) == p_30)));
            }
            else
            {
                g_72 = g_381;
            }
            g_381 = l_219;
        }
        l_223.f1 = (l_322[4][2].f1 = (safe_sub_func_uint32_t_u_u((((-1L) || (2UL || g_225[2][5][0].f0)) & (l_311[0] = ((safe_sub_func_uint64_t_u_u((g_235 = (l_321[2] = ((func_35(l_415[2][1][5].f1, p_31, g_504, g_72) | (safe_unary_minus_func_int8_t_s(((g_506 = (((254UL < 0x05L) <= g_226) < l_254[7])) || 65529UL)))) != 0x3D6DEA12L))), p_30)) >= 0x9C98A865B8D6C124LL))), l_254[3])));
        for (l_219.f0 = 1; (l_219.f0 <= 4); l_219.f0 += 1)
        {
            int i;
            g_240.f4 = l_306[l_219.f0];
            for (l_231 = 0; (l_231 <= 4); l_231 += 1)
            {
                char l_507[10][5] = {{0x93L,(-1L),0L,0xEFL,0L},{0L,0L,0L,0L,0x3DL},{0L,(-1L),0x3DL,1L,0x83L},{0x93L,0xACL,5L,0L,1L},{0L,(-1L),(-1L),0L,0xABL},{(-7L),0L,(-1L),0x3DL,1L},{0x3DL,(-1L),5L,0x93L,(-1L)},{0xACL,(-7L),0x3DL,0x3DL,(-7L)},{0x83L,0xEFL,0L,0L,(-7L)},{(-1L),1L,0L,0L,(-1L)}};
                struct S1 l_510 = {1L};
                int i, j;
                g_240.f2 = ((((func_35(l_507[4][0], (0x26L || (g_55 = (l_306[l_219.f0] = ((safe_sub_func_uint64_t_u_u(g_191, (0xF9DB01452B6C2D84LL >= l_507[4][0]))) <= (0x1950L ^ p_31))))), g_504, l_510) == g_240.f4) < 0xCAC3EB8064236D7DLL) & p_30) != 0xF7827325L);
            }
        }
        return g_240;
    }
    else
    {
        l_219 = g_381;
    }
    l_219 = g_381;
    for (p_31 = (-10); (p_31 == (-20)); p_31 = safe_sub_func_int8_t_s_s(p_31, 6))
    {
        struct S1 l_515 = {4L};
        int l_522 = 0xB044C616L;
        char l_525[4][6] = {{(-9L),(-5L),3L,(-5L),(-9L),0x05L},{(-9L),(-5L),3L,(-5L),(-9L),0x05L},{(-9L),(-5L),3L,(-5L),(-9L),0x05L},{(-9L),(-5L),3L,(-5L),(-9L),0x05L}};
        int i, j;
        for (g_234 = (-26); (g_234 != 14); ++g_234)
        {
            struct S1 l_523 = {1L};
            int l_524 = 9L;
            g_72 = l_515;
            l_207 = (safe_lshift_func_int16_t_s_s(p_31, (safe_div_func_uint64_t_u_u(((0xBB77L & (safe_lshift_func_int8_t_s_u((l_524 = func_35((g_391 < (l_522 = p_33)), p_34, g_225[2][5][0], l_523)), (g_506 = l_525[0][0])))) == g_240.f3), 0xAAF15180C7C3B922LL))));
            l_523 = g_72;
        }
    }
    for (l_197 = 0; (l_197 == (-14)); l_197--)
    {
        unsigned l_528 = 3UL;
        l_528 = 0xC31A4A8BL;
        g_381 = g_381;
        if (g_56)
            break;
    }
    return l_415[0][2][6];
}







static unsigned long long func_35(long long p_36, short p_37, struct S2 p_38, struct S1 p_39)
{
    unsigned l_73 = 0UL;
    int l_74 = (-1L);
    char l_86 = 0x6FL;
    int l_92[5] = {0xDC50425FL,0xDC50425FL,0xDC50425FL,0xDC50425FL,0xDC50425FL};
    struct S1 l_102[5] = {{0xA2L},{0xA2L},{0xA2L},{0xA2L},{0xA2L}};
    int l_124 = 0x31BEAA37L;
    unsigned char l_186[2][10][6] = {{{255UL,247UL,1UL,6UL,255UL,0x74L},{6UL,1UL,0xFCL,6UL,255UL,255UL},{255UL,0xD2L,0xD2L,255UL,252UL,247UL},{9UL,6UL,0x74L,0UL,0xFCL,2UL},{247UL,6UL,0xD2L,0xFDL,0xFCL,247UL},{252UL,6UL,255UL,6UL,252UL,0xFDL},{0xD2L,0xD2L,2UL,247UL,255UL,247UL},{2UL,1UL,252UL,0xD2L,255UL,247UL},{0xFDL,247UL,2UL,2UL,247UL,0xFDL},{255UL,0UL,255UL,0xFCL,0xD2L,247UL}},{{0UL,252UL,0xD2L,0x74L,6UL,2UL},{0UL,247UL,0x74L,0xFCL,0x74L,247UL},{255UL,0xD2L,0xD2L,2UL,247UL,255UL},{0xFDL,9UL,0xFCL,0xD2L,247UL,0x74L},{2UL,9UL,1UL,247UL,247UL,1UL},{0xD2L,0xD2L,9UL,6UL,255UL,1UL},{9UL,2UL,247UL,6UL,0xD2L,0xFDL},{252UL,9UL,247UL,1UL,0x74L,1UL},{0xFDL,1UL,0xFDL,1UL,0xD2L,247UL},{1UL,0xD2L,247UL,0xD2L,0xFCL,255UL}}};
    int i, j, k;
    if ((l_74 = l_73))
    {
        for (g_55 = 0; (g_55 < 16); g_55 = safe_add_func_int32_t_s_s(g_55, 4))
        {
            long long l_81 = (-1L);
            unsigned short l_87 = 0UL;
            for (l_74 = 0; (l_74 < 7); l_74 = safe_add_func_uint16_t_u_u(l_74, 1))
            {
                if ((safe_sub_func_int32_t_s_s((g_2 == l_81), (0UL >= (p_37 = g_54)))))
                {
                    int l_83 = 5L;
                    g_82[1][0] = p_37;
                    for (g_54 = 2; (g_54 >= 0); g_54 -= 1)
                    {
                        int i, j;
                        l_83 = g_82[g_54][(g_54 + 2)];
                    }
                    for (l_81 = 0; (l_81 > (-24)); l_81--)
                    {
                        if (l_86)
                            break;
                        return g_55;
                    }
                    if (g_56)
                        continue;
                }
                else
                {
                    return g_54;
                }
            }
            p_38.f1 = p_37;
            l_87 = (p_39.f0 && p_37);
        }
    }
    else
    {
        char l_90 = 0x07L;
        short l_91[3];
        int i;
        for (i = 0; i < 3; i++)
            l_91[i] = 1L;
        l_74 = ((safe_rshift_func_uint8_t_u_s(p_36, 1)) ^ l_90);
        l_92[0] = (8UL && l_91[1]);
        p_38.f1 = l_91[2];
    }
    for (g_55 = 0; (g_55 <= 2); g_55 += 1)
    {
        long long l_100 = 6L;
        int l_131[9] = {5L,0x527C6EF0L,0x527C6EF0L,5L,0x527C6EF0L,0x527C6EF0L,5L,0x527C6EF0L,0x527C6EF0L};
        short l_161 = (-1L);
        struct S1 l_164 = {7L};
        int l_184 = 0L;
        int i;
        for (l_86 = 4; (l_86 >= 0); l_86 -= 1)
        {
            struct S1 l_101[4] = {{0L},{0L},{0L},{0L}};
            int l_111 = 0x68B7F09DL;
            int i, j;
            if (g_82[g_55][g_55])
                break;
            g_97 = ((l_92[(g_55 + 2)] && (l_74 = (g_54 || 0xD6E1L))) & (safe_add_func_int32_t_s_s(l_73, (safe_lshift_func_int8_t_s_s(g_82[2][2], p_39.f0)))));
            for (g_54 = 2; (g_54 >= 0); g_54 -= 1)
            {
                struct S1 l_103[2] = {{0xB0L},{0xB0L}};
                unsigned char l_110 = 0UL;
                int i;
                p_38.f1 = 0xDDC735B2L;
                for (p_39.f0 = 4; (p_39.f0 >= 0); p_39.f0 -= 1)
                {
                    int i, j;
                    p_38.f1 = ((safe_rshift_func_uint8_t_u_s(0x1FL, (l_100 = (l_92[(g_54 + 1)] > 0xEA868270L)))) | 0xF573F665L);
                    if (g_82[g_55][(p_39.f0 + 1)])
                        break;
                    l_101[3] = g_72;
                }
                for (p_39.f0 = 2; (p_39.f0 >= 0); p_39.f0 -= 1)
                {
                    l_103[1] = l_102[4];
                    l_74 = (p_38.f1 = l_92[0]);
                    l_111 = ((0x7BA2L == (safe_rshift_func_uint16_t_u_u((0L | g_2), g_82[1][0]))) != (l_110 == ((p_36 >= g_2) < g_82[1][0])));
                    return g_82[2][1];
                }
            }
            g_97 = g_82[1][0];
            for (g_97 = 2; (g_97 >= 0); g_97 -= 1)
            {
                l_74 = g_55;
            }
        }
        g_97 = l_73;
        for (l_74 = 1; (l_74 <= 4); l_74 += 1)
        {
            unsigned short l_112 = 65533UL;
            long long l_185[9][3];
            int i, j;
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 3; j++)
                    l_185[i][j] = 8L;
            }
            if (((l_100 ^ (l_112 = g_72.f0)) && g_72.f0))
            {
                int l_136 = 0L;
                for (l_100 = 3; (l_100 >= 1); l_100 -= 1)
                {
                    g_97 = g_97;
                }
                if (((safe_rshift_func_uint16_t_u_s((((safe_rshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s((safe_unary_minus_func_uint32_t_u(g_82[1][0])), (!((safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s(((l_124 = l_112) ^ p_38.f1), 0xD65AL)), (g_72.f0 = ((0xB7A0L | (safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(g_55, 4294967295UL)), g_55))) != 0x3F99B119ECE53CA3LL)))) ^ 18446744073709551608UL)))), 6)) > p_38.f1) >= 3L), 12)) & 0xEA974B99L))
                {
                    int l_135 = 0x093782F4L;
                    unsigned char l_153 = 0x28L;
                    int i, j;
                    if ((((safe_add_func_int64_t_s_s((g_82[g_55][(g_55 + 2)] = ((l_131[0] = p_39.f0) ^ (g_82[2][5] | l_100))), p_37)) < ((0x124FAB6BA350D549LL & (((g_132 = p_38.f0) == (l_136 = (safe_rshift_func_uint8_t_u_s(((g_97 | p_36) <= (l_135 = p_39.f0)), p_37)))) | 7L)) > p_39.f0)) && 0x2774L))
                    {
                        if (g_132)
                            break;
                        l_135 = p_38.f0;
                        g_97 = (+((safe_sub_func_uint16_t_u_u(p_38.f1, g_97)) <= (safe_add_func_int16_t_s_s(0xBE72L, (g_56 && p_36)))));
                    }
                    else
                    {
                        unsigned short l_155 = 0x9CCFL;
                        unsigned long long l_156[1];
                        int l_157 = 0x4C9A3B3AL;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_156[i] = 0x7B1FDA6A7151E09FLL;
                        p_38.f1 = ((safe_add_func_uint32_t_u_u((l_157 = (safe_lshift_func_int8_t_s_u((+((safe_mod_func_int64_t_s_s((safe_sub_func_int64_t_s_s((1L >= (((l_136 == (safe_sub_func_int8_t_s_s((p_39.f0 != l_112), (safe_add_func_int32_t_s_s((((l_131[0] > ((g_82[1][0] || (p_37 = l_153)) < (safe_unary_minus_func_int16_t_s(l_155)))) & 3UL) <= p_38.f0), g_55))))) || 246UL) > 0xC455L)), l_136)), 0x8F9F8067CD4424C0LL)) ^ l_156[0])), l_86))), p_36)) | g_132);
                        g_97 = g_2;
                        g_97 = (((safe_lshift_func_uint8_t_u_u(l_153, l_157)) ^ g_56) ^ (+((g_54 >= ((l_135 < (g_160 = l_136)) || ((l_136 = (((p_38.f1 && l_161) ^ (safe_sub_func_int16_t_s_s(g_82[2][0], l_112))) != p_37)) && p_37))) < p_36)));
                    }
                }
                else
                {
                    struct S1 l_165[8] = {{-5L},{-5L},{-5L},{-5L},{-5L},{-5L},{-5L},{-5L}};
                    int i;
                    l_164 = g_72;
                    p_39 = l_165[4];
                    for (l_86 = 2; (l_86 <= 7); l_86 += 1)
                    {
                        int i;
                        l_165[l_86] = l_165[(g_55 + 4)];
                    }
                    if (p_37)
                    {
                        g_72 = p_39;
                        if (l_165[4].f0)
                            break;
                    }
                    else
                    {
                        if (p_38.f1)
                            break;
                    }
                }
            }
            else
            {
                unsigned char l_183 = 0xA5L;
                p_38.f1 = ((l_184 = ((p_38.f0 >= (safe_rshift_func_uint16_t_u_s(p_39.f0, p_38.f0))) & ((((safe_add_func_int16_t_s_s(l_112, (safe_add_func_int32_t_s_s((g_97 = g_132), (l_131[0] = g_56))))) | (safe_unary_minus_func_int64_t_s((g_82[1][2] = ((g_72.f0 = (l_124 = ((safe_sub_func_uint32_t_u_u(((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(p_38.f0, ((l_73 ^ (safe_add_func_uint8_t_u_u(((l_183 != 5L) | l_112), g_56))) ^ l_74))), p_38.f1)) == g_56), p_39.f0)) > g_132))) | p_37))))) | l_92[0]) < l_112))) ^ l_100);
                if (p_39.f0)
                    break;
                p_38.f1 = (0x8DD1E84AL < l_185[4][2]);
            }
            l_186[1][9][4] = (g_97 = (18446744073709551614UL && (p_36 ^ 0xBCL)));
            for (p_36 = 4; (p_36 >= 1); p_36 -= 1)
            {
                for (l_100 = 1; (l_100 <= 4); l_100 += 1)
                {
                    int l_192 = 1L;
                    int l_193 = 0xC2238E3DL;
                    int i, j;
                    l_193 = ((l_131[l_100] = (safe_add_func_uint8_t_u_u(l_131[(l_74 + 4)], l_185[(g_55 + 3)][g_55]))) ^ (safe_mod_func_uint64_t_u_u((g_160 == p_38.f1), (l_192 = (g_191 = 1UL)))));
                }
                return p_36;
            }
        }
    }
    return l_186[1][4][1];
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_72.f0, "g_72.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_82[i][j], "g_82[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_225[i][j][k].f0, "g_225[i][j][k].f0", print_hash_value);
                transparent_crc(g_225[i][j][k].f1, "g_225[i][j][k].f1", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_240.f0, "g_240.f0", print_hash_value);
    transparent_crc(g_240.f1, "g_240.f1", print_hash_value);
    transparent_crc(g_240.f2, "g_240.f2", print_hash_value);
    transparent_crc(g_240.f3, "g_240.f3", print_hash_value);
    transparent_crc(g_240.f4, "g_240.f4", print_hash_value);
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_381.f0, "g_381.f0", print_hash_value);
    transparent_crc(g_391, "g_391", print_hash_value);
    transparent_crc(g_504.f0, "g_504.f0", print_hash_value);
    transparent_crc(g_504.f1, "g_504.f1", print_hash_value);
    transparent_crc(g_506, "g_506", print_hash_value);
    transparent_crc(g_612, "g_612", print_hash_value);
    transparent_crc(g_619, "g_619", print_hash_value);
    transparent_crc(g_643, "g_643", print_hash_value);
    transparent_crc(g_719, "g_719", print_hash_value);
    transparent_crc(g_801, "g_801", print_hash_value);
    transparent_crc(g_812, "g_812", print_hash_value);
    transparent_crc(g_849.f0, "g_849.f0", print_hash_value);
    transparent_crc(g_849.f1, "g_849.f1", print_hash_value);
    transparent_crc(g_976, "g_976", print_hash_value);
    transparent_crc(g_1062, "g_1062", print_hash_value);
    transparent_crc(g_1080, "g_1080", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_1149[i][j], "g_1149[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
