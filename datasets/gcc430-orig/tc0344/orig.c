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
   short f0;
   char f1;
   volatile signed f2 : 14;
   volatile unsigned char f3;
   volatile int f4;
   int f5;
   unsigned long long f6;
};


static unsigned char g_13 = 1UL;
static unsigned long long g_21 = 3UL;
static char g_42 = 1L;
static char g_44[9][4][7] = {{{6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}, {6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}, {6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}, {6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}}, {{6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}, {6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}, {6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}, {6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}}, {{6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}, {6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}, {6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}, {6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}}, {{6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}, {6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}, {6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}, {6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}}, {{6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}, {6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}, {6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}, {6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}}, {{6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}, {6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}, {6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}, {6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}}, {{6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}, {6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}, {6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}, {6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}}, {{6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}, {6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}, {6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}, {6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}}, {{6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}, {6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}, {6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}, {6L, 8L, (-3L), 7L, 0xA9L, 0x37L, 0x89L}}};
static int g_63 = 0x8BF51449L;
static char *g_75 = &g_42;
static int *g_84 = &g_63;
static int ** volatile g_83[8] = {&g_84, &g_84, &g_84, &g_84, &g_84, &g_84, &g_84, &g_84};
static int ** volatile g_85[4] = {&g_84, &g_84, &g_84, &g_84};
static int ** volatile g_86 = &g_84;
static unsigned char g_91 = 0xAAL;
static unsigned long long g_99 = 0x63D7CB68985BB29ALL;
static int * volatile g_101 = &g_63;
static struct S0 g_103 = {0x7EE7L,0x4EL,27,0xC4L,0xAE4C08A2L,-9L,0xF56D1B7A171313FELL};
static struct S0 * volatile g_104 = (void*)0;
static struct S0 * volatile g_105 = &g_103;
static int g_107 = 0x0F57B567L;
static int *g_106[10] = {&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, &g_107, &g_107, &g_107, &g_107};
static volatile struct S0 g_108[10] = {{1L,0xB1L,-19,250UL,0L,0x1310918DL,0xDCD3E82D738A40F9LL}, {1L,0xB1L,-19,250UL,0L,0x1310918DL,0xDCD3E82D738A40F9LL}, {1L,0xB1L,-19,250UL,0L,0x1310918DL,0xDCD3E82D738A40F9LL}, {1L,0xB1L,-19,250UL,0L,0x1310918DL,0xDCD3E82D738A40F9LL}, {1L,0xB1L,-19,250UL,0L,0x1310918DL,0xDCD3E82D738A40F9LL}, {1L,0xB1L,-19,250UL,0L,0x1310918DL,0xDCD3E82D738A40F9LL}, {1L,0xB1L,-19,250UL,0L,0x1310918DL,0xDCD3E82D738A40F9LL}, {1L,0xB1L,-19,250UL,0L,0x1310918DL,0xDCD3E82D738A40F9LL}, {1L,0xB1L,-19,250UL,0L,0x1310918DL,0xDCD3E82D738A40F9LL}, {1L,0xB1L,-19,250UL,0L,0x1310918DL,0xDCD3E82D738A40F9LL}};
static int ** volatile g_112 = &g_106[7];
static char **g_115 = &g_75;
static int ** volatile g_117[9] = {&g_106[6], &g_106[0], &g_106[6], &g_106[0], &g_106[6], &g_106[0], &g_106[6], &g_106[0], &g_106[6]};
static int ** volatile g_120 = &g_106[8];
static char g_129 = 0xA7L;
static unsigned short g_144 = 0x673FL;
static int * volatile g_145 = (void*)0;
static long long g_150 = (-1L);
static volatile struct S0 g_157[2] = {{0L,0x35L,0,0x89L,6L,0L,0UL}, {0L,0x35L,0,0x89L,6L,0L,0UL}};
static volatile struct S0 g_171 = {-1L,0xAFL,-107,253UL,-7L,1L,0xB6FFE17F8277DDD3LL};
static unsigned g_173 = 1UL;
static int * volatile g_178[1] = {&g_107};
static int * volatile * volatile g_179 = &g_106[6];
static unsigned g_191[9] = {18446744073709551614UL, 18446744073709551614UL, 18446744073709551614UL, 18446744073709551614UL, 18446744073709551614UL, 18446744073709551614UL, 18446744073709551614UL, 18446744073709551614UL, 18446744073709551614UL};
static volatile struct S0 g_194[3][4] = {{{0L,-1L,20,0UL,6L,-1L,18446744073709551606UL}, {0L,1L,-117,255UL,0x0227ADE1L,0x54FE0FA9L,18446744073709551613UL}, {-10L,-3L,-48,1UL,0x00962F29L,0x115A3005L,5UL}, {0L,1L,-117,255UL,0x0227ADE1L,0x54FE0FA9L,18446744073709551613UL}}, {{0L,-1L,20,0UL,6L,-1L,18446744073709551606UL}, {0L,1L,-117,255UL,0x0227ADE1L,0x54FE0FA9L,18446744073709551613UL}, {-10L,-3L,-48,1UL,0x00962F29L,0x115A3005L,5UL}, {0L,1L,-117,255UL,0x0227ADE1L,0x54FE0FA9L,18446744073709551613UL}}, {{0L,-1L,20,0UL,6L,-1L,18446744073709551606UL}, {0L,1L,-117,255UL,0x0227ADE1L,0x54FE0FA9L,18446744073709551613UL}, {-10L,-3L,-48,1UL,0x00962F29L,0x115A3005L,5UL}, {0L,1L,-117,255UL,0x0227ADE1L,0x54FE0FA9L,18446744073709551613UL}}};
static volatile struct S0 g_199 = {-1L,0x64L,-37,0UL,0x171A2FFDL,0x36518EE9L,18446744073709551606UL};
static struct S0 g_212 = {-1L,1L,76,254UL,0xF93EFDE0L,0xD20D79F7L,18446744073709551615UL};
static struct S0 * volatile g_213 = &g_103;
static struct S0 *g_219 = (void*)0;
static struct S0 ** volatile g_218 = &g_219;
static volatile struct S0 g_220 = {0x5FF3L,1L,95,0x30L,-1L,0xF572883FL,1UL};
static int g_223[7][4] = {{1L, 0x0FD85092L, (-1L), 0x68CCABFCL}, {1L, 0x0FD85092L, (-1L), 0x68CCABFCL}, {1L, 0x0FD85092L, (-1L), 0x68CCABFCL}, {1L, 0x0FD85092L, (-1L), 0x68CCABFCL}, {1L, 0x0FD85092L, (-1L), 0x68CCABFCL}, {1L, 0x0FD85092L, (-1L), 0x68CCABFCL}, {1L, 0x0FD85092L, (-1L), 0x68CCABFCL}};
static struct S0 g_232 = {6L,0x67L,8,6UL,0xA534BA0CL,0xF28E5AF4L,0x9B1BF553ECEDD2ABLL};
static struct S0 g_240 = {-1L,0x36L,-29,1UL,0L,0xBE4DEC8AL,0x6DF752B4E3854A16LL};
static int g_241[3] = {0x90F9319DL, 0x90F9319DL, 0x90F9319DL};
static volatile struct S0 g_268[10] = {{-1L,-1L,-54,0x06L,1L,1L,18446744073709551609UL}, {0xAF79L,0x92L,36,1UL,-1L,0x8794BD40L,18446744073709551615UL}, {0x9064L,0x56L,-100,0x79L,0x32531323L,8L,0x2A6515E3640A0DB1LL}, {0x9064L,0x56L,-100,0x79L,0x32531323L,8L,0x2A6515E3640A0DB1LL}, {0xAF79L,0x92L,36,1UL,-1L,0x8794BD40L,18446744073709551615UL}, {-1L,-1L,-54,0x06L,1L,1L,18446744073709551609UL}, {0xAF79L,0x92L,36,1UL,-1L,0x8794BD40L,18446744073709551615UL}, {0x9064L,0x56L,-100,0x79L,0x32531323L,8L,0x2A6515E3640A0DB1LL}, {0x9064L,0x56L,-100,0x79L,0x32531323L,8L,0x2A6515E3640A0DB1LL}, {0xAF79L,0x92L,36,1UL,-1L,0x8794BD40L,18446744073709551615UL}};
static volatile struct S0 g_269 = {0x8261L,-1L,-40,0x29L,5L,0L,0x79BD662E9029FDCDLL};
static int ** volatile g_295[7] = {&g_106[1], &g_106[1], &g_106[1], &g_106[1], &g_106[1], &g_106[1], &g_106[1]};
static int ** volatile g_296 = &g_84;
static struct S0 g_301 = {0x5B6DL,0x22L,-122,9UL,0x0EF8D422L,0x02113A69L,7UL};
static struct S0 * volatile g_302 = &g_103;
static unsigned *g_308 = &g_173;
static unsigned ** volatile g_307 = &g_308;
static long long g_320 = (-3L);
static struct S0 g_345 = {-9L,1L,12,255UL,0x67642432L,-1L,5UL};
static struct S0 g_346 = {0L,0x3AL,41,0xFAL,0xC9DEEEC2L,0x5D851CD8L,5UL};
static struct S0 g_347 = {-1L,8L,35,0xF2L,1L,0x36988ECCL,6UL};
static struct S0 g_354 = {0x0CF8L,0xDBL,-116,0x30L,-1L,-1L,18446744073709551615UL};
static int ** volatile g_367 = &g_84;
static struct S0 * volatile g_370 = &g_354;
static int *g_372 = &g_223[1][2];
static int **g_371 = &g_372;
static volatile struct S0 g_381 = {0L,0xD2L,106,0x5EL,0xF1211D8BL,-10L,18446744073709551615UL};
static volatile struct S0 g_383 = {1L,0x31L,58,7UL,0L,0x6E431F0FL,1UL};
static volatile struct S0 * volatile g_384[10][9] = {{(void*)0, &g_157[0], &g_108[8], &g_157[0], (void*)0, &g_194[2][0], &g_108[8], &g_194[2][0], (void*)0}, {(void*)0, &g_157[0], &g_108[8], &g_157[0], (void*)0, &g_194[2][0], &g_108[8], &g_194[2][0], (void*)0}, {(void*)0, &g_157[0], &g_108[8], &g_157[0], (void*)0, &g_194[2][0], &g_108[8], &g_194[2][0], (void*)0}, {(void*)0, &g_157[0], &g_108[8], &g_157[0], (void*)0, &g_194[2][0], &g_108[8], &g_194[2][0], (void*)0}, {(void*)0, &g_157[0], &g_108[8], &g_157[0], (void*)0, &g_194[2][0], &g_108[8], &g_194[2][0], (void*)0}, {(void*)0, &g_157[0], &g_108[8], &g_157[0], (void*)0, &g_194[2][0], &g_108[8], &g_194[2][0], (void*)0}, {(void*)0, &g_157[0], &g_108[8], &g_157[0], (void*)0, &g_194[2][0], &g_108[8], &g_194[2][0], (void*)0}, {(void*)0, &g_157[0], &g_108[8], &g_157[0], (void*)0, &g_194[2][0], &g_108[8], &g_194[2][0], (void*)0}, {(void*)0, &g_157[0], &g_108[8], &g_157[0], (void*)0, &g_194[2][0], &g_108[8], &g_194[2][0], (void*)0}, {(void*)0, &g_157[0], &g_108[8], &g_157[0], (void*)0, &g_194[2][0], &g_108[8], &g_194[2][0], (void*)0}};
static volatile struct S0 g_386 = {0xDA05L,0xEBL,-96,0x04L,-6L,6L,2UL};
static struct S0 g_425 = {-3L,1L,-37,0UL,0L,0x2D62352BL,18446744073709551606UL};
static char * volatile *g_443[10] = {&g_75, (void*)0, &g_75, (void*)0, &g_75, (void*)0, &g_75, (void*)0, &g_75, (void*)0};
static char * volatile **g_442 = &g_443[5];
static char * volatile ***g_441[8] = {(void*)0, (void*)0, &g_442, (void*)0, (void*)0, &g_442, (void*)0, (void*)0};
static struct S0 g_448 = {1L,1L,60,6UL,0xE0A8AAA3L,0x379B8159L,0UL};
static struct S0 ** volatile g_452 = &g_219;
static int ** volatile g_455 = &g_84;
static int ** volatile g_499[2][5] = {{&g_106[2], (void*)0, &g_106[6], &g_106[6], (void*)0}, {&g_106[2], (void*)0, &g_106[6], &g_106[6], (void*)0}};
static unsigned short *g_566 = (void*)0;
static volatile struct S0 g_573 = {0xE6B6L,0x32L,101,0x19L,0x0285C02DL,1L,0x80774A50C4C096ABLL};
static short *g_586[4][1][10] = {{{(void*)0, &g_240.f0, (void*)0, &g_346.f0, &g_346.f0, &g_240.f0, &g_232.f0, &g_347.f0, &g_232.f0, &g_240.f0}}, {{(void*)0, &g_240.f0, (void*)0, &g_346.f0, &g_346.f0, &g_240.f0, &g_232.f0, &g_347.f0, &g_232.f0, &g_240.f0}}, {{(void*)0, &g_240.f0, (void*)0, &g_346.f0, &g_346.f0, &g_240.f0, &g_232.f0, &g_347.f0, &g_232.f0, &g_240.f0}}, {{(void*)0, &g_240.f0, (void*)0, &g_346.f0, &g_346.f0, &g_240.f0, &g_232.f0, &g_347.f0, &g_232.f0, &g_240.f0}}};
static short **g_585 = &g_586[1][0][7];
static short **g_587 = &g_586[1][0][7];
static struct S0 ** volatile g_589[2][4][2] = {{{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}, {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}};
static struct S0 ** volatile g_590 = &g_219;
static int ** volatile g_592 = (void*)0;
static volatile unsigned long long *g_603[10] = {(void*)0, (void*)0, &g_381.f6, (void*)0, (void*)0, &g_381.f6, (void*)0, (void*)0, &g_381.f6, (void*)0};
static volatile unsigned long long ** volatile g_602 = &g_603[5];
static int ** volatile g_632 = (void*)0;
static int ** volatile g_633 = (void*)0;
static volatile struct S0 g_656 = {0x926AL,9L,-105,254UL,1L,8L,1UL};
static volatile struct S0 g_657 = {-1L,0x37L,-72,0xF9L,0x4E95E632L,0xFDEA8E50L,0x901E8E8C442D0EE0LL};
static volatile struct S0 g_661[8][5][6] = {{{{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}}, {{{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}}, {{{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}}, {{{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}}, {{{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}}, {{{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}}, {{{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}}, {{{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}, {{2L,0x11L,45,0x41L,7L,0x109B8214L,0x2339015836DDEB44LL}, {1L,0L,127,0xE4L,-9L,9L,18446744073709551615UL}, {0L,0xB9L,-38,0x44L,0x78A24B4AL,0x64B91F18L,0x4C1264B4B763E1CFLL}, {1L,0L,-4,2UL,7L,0x1880F78DL,18446744073709551612UL}, {-4L,-2L,-0,250UL,0x344C3A91L,0xFCB699F7L,0x05916DE381F1F6B6LL}, {-3L,0xADL,-94,9UL,0x6CD0AE85L,0xCB81E62FL,0xB85AE5AB5975FD72LL}}}};
static volatile struct S0 g_663 = {0xCFB3L,0xBAL,83,255UL,0x7F155E10L,0x68F7FDC6L,0x77D6049ECEA22B31LL};
static volatile struct S0 * volatile g_664[6][2] = {{&g_661[0][1][2], &g_386}, {&g_661[0][1][2], &g_386}, {&g_661[0][1][2], &g_386}, {&g_661[0][1][2], &g_386}, {&g_661[0][1][2], &g_386}, {&g_661[0][1][2], &g_386}};
static volatile struct S0 * volatile g_666[4][8] = {{&g_656, &g_268[8], (void*)0, &g_268[8], &g_656, (void*)0, &g_656, &g_268[8]}, {&g_656, &g_268[8], (void*)0, &g_268[8], &g_656, (void*)0, &g_656, &g_268[8]}, {&g_656, &g_268[8], (void*)0, &g_268[8], &g_656, (void*)0, &g_656, &g_268[8]}, {&g_656, &g_268[8], (void*)0, &g_268[8], &g_656, (void*)0, &g_656, &g_268[8]}};
static volatile struct S0 g_667 = {0xC16EL,1L,-92,0UL,-4L,5L,1UL};
static volatile int g_671 = 0x37FECEB4L;
static volatile struct S0 g_672 = {0L,0xB3L,-4,0UL,0x6DAC8737L,0L,18446744073709551615UL};
static struct S0 g_680[6][5][5] = {{{{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}, {{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}, {{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}, {{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}, {{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}}, {{{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}, {{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}, {{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}, {{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}, {{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}}, {{{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}, {{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}, {{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}, {{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}, {{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}}, {{{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}, {{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}, {{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}, {{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}, {{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}}, {{{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}, {{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}, {{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}, {{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}, {{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}}, {{{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}, {{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}, {{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}, {{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}, {{0xFA53L,0L,54,0x56L,0xB51CAC00L,-1L,18446744073709551615UL}, {0x8F76L,-1L,-112,0x9EL,-2L,0x5602FC31L,0x7F55F65F8EA331BDLL}, {6L,0x5DL,29,1UL,0x4E14ADE8L,1L,0x3EDFDB1C3A1BD0A4LL}, {0x9C54L,0x1CL,6,0xB3L,0xDF44BCC2L,0xE236E9C2L,18446744073709551612UL}, {0x34B0L,0L,14,0UL,0x361A7A16L,0x5769F637L,0x4777E1D9C467F258LL}}}};
static volatile struct S0 g_681 = {0xA6D7L,0x9CL,38,255UL,0L,0x473AA0B2L,0x873D2C938FA67B98LL};
static struct S0 g_687 = {0xFED0L,0xB8L,-21,0x28L,0x8C8923C6L,0x57DB0A30L,18446744073709551615UL};
static volatile int g_691[2] = {0x67CD5360L, 0x67CD5360L};
static int ** volatile g_692[3] = {&g_84, &g_84, &g_84};



static unsigned func_1(void);
static int func_14(unsigned p_15, int p_16, unsigned long long p_17, unsigned p_18, unsigned p_19);
static char func_22(unsigned short p_23, unsigned short p_24, unsigned long long * p_25);
static unsigned short func_30(unsigned long long * p_31, unsigned p_32, long long p_33, unsigned long long * p_34);
static unsigned long long * func_35(unsigned long long * p_36, char p_37, unsigned p_38);
static int * func_46(char * p_47, short p_48, int * p_49, unsigned p_50, int * p_51);
static int * func_56(int p_57, short p_58, unsigned p_59);
static int func_64(int * p_65, int * p_66, int p_67);
static int * func_68(long long p_69, char * p_70, int * p_71, char * p_72);
static char * func_77(int * p_78, unsigned long long * p_79, unsigned char p_80, char p_81);
static unsigned func_1(void)
{
    int l_6 = (-7L);
    unsigned long long *l_20 = &g_21;
    unsigned long long l_39 = 2UL;
    unsigned long long *l_40 = &g_21;
    char *l_41 = &g_42;
    char *l_43 = &g_44[8][1][5];
    unsigned long long l_305 = 0xECA8A1A81AF41BFALL;
    short *l_410 = &g_103.f0;
    unsigned short *l_411 = &g_144;
    struct S0 *l_451 = (void*)0;
    int *l_489 = &g_240.f5;
    char l_491 = 0xB0L;
    int *l_498 = &g_347.f5;
    char ***l_522 = &g_115;
    char ****l_521[9][2][9] = {{{&l_522, (void*)0, &l_522, &l_522, &l_522, &l_522, &l_522, (void*)0, &l_522}, {&l_522, (void*)0, &l_522, &l_522, &l_522, &l_522, &l_522, (void*)0, &l_522}}, {{&l_522, (void*)0, &l_522, &l_522, &l_522, &l_522, &l_522, (void*)0, &l_522}, {&l_522, (void*)0, &l_522, &l_522, &l_522, &l_522, &l_522, (void*)0, &l_522}}, {{&l_522, (void*)0, &l_522, &l_522, &l_522, &l_522, &l_522, (void*)0, &l_522}, {&l_522, (void*)0, &l_522, &l_522, &l_522, &l_522, &l_522, (void*)0, &l_522}}, {{&l_522, (void*)0, &l_522, &l_522, &l_522, &l_522, &l_522, (void*)0, &l_522}, {&l_522, (void*)0, &l_522, &l_522, &l_522, &l_522, &l_522, (void*)0, &l_522}}, {{&l_522, (void*)0, &l_522, &l_522, &l_522, &l_522, &l_522, (void*)0, &l_522}, {&l_522, (void*)0, &l_522, &l_522, &l_522, &l_522, &l_522, (void*)0, &l_522}}, {{&l_522, (void*)0, &l_522, &l_522, &l_522, &l_522, &l_522, (void*)0, &l_522}, {&l_522, (void*)0, &l_522, &l_522, &l_522, &l_522, &l_522, (void*)0, &l_522}}, {{&l_522, (void*)0, &l_522, &l_522, &l_522, &l_522, &l_522, (void*)0, &l_522}, {&l_522, (void*)0, &l_522, &l_522, &l_522, &l_522, &l_522, (void*)0, &l_522}}, {{&l_522, (void*)0, &l_522, &l_522, &l_522, &l_522, &l_522, (void*)0, &l_522}, {&l_522, (void*)0, &l_522, &l_522, &l_522, &l_522, &l_522, (void*)0, &l_522}}, {{&l_522, (void*)0, &l_522, &l_522, &l_522, &l_522, &l_522, (void*)0, &l_522}, {&l_522, (void*)0, &l_522, &l_522, &l_522, &l_522, &l_522, (void*)0, &l_522}}};
    unsigned l_533 = 0x14A270EFL;
    unsigned short l_545 = 65529UL;
    unsigned char l_606 = 0xD2L;
    int l_617 = (-1L);
    int l_699[8][8];
    int *l_701 = &g_103.f5;
    int l_703[9];
    long long l_714 = 1L;
    int i, j, k;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
            l_699[i][j] = 0x3A844257L;
    }
    for (i = 0; i < 9; i++)
        l_703[i] = 0x9C58D424L;
    if ((((*l_411) = ((safe_sub_func_uint32_t_u_u((((safe_add_func_uint8_t_u_u(l_6, (~((l_6 >= (safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((*l_410) = ((g_13 == ((((*g_372) = func_14(((l_6 & ((*l_20) = 0x5589B58331C587C7LL)) , (func_22((safe_mul_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_s(func_30(func_35(&g_21, ((*l_43) = ((*l_41) = (l_39 | (l_40 != &g_21)))), g_21), l_6, l_39, &l_39), 3)) && 0x9AL) > l_6), l_39)), l_39, &l_39) ^ l_6)), l_305, g_212.f1, g_232.f5, g_232.f6)) , 1UL) & g_129)) , g_268[8].f6)), g_346.f1)), 65532UL)), 3))) , l_39)))) == g_13) , 0xFE7A89DFL), g_232.f6)) || g_268[8].f3)) ^ 0xF827L))
    {
        short l_412 = 0x55A4L;
        return l_412;
    }
    else
    {
        long long *l_416 = &g_150;
        int l_417 = 0L;
        int *l_418 = (void*)0;
        int *l_419 = &g_232.f5;
        int l_468 = 0x0AA86F4DL;
        unsigned long long **l_473 = (void*)0;
        unsigned l_492 = 1UL;
        unsigned **l_514 = &g_308;
        int *l_582[5];
        short **l_583 = &l_410;
        unsigned l_655 = 4294967295UL;
        struct S0 *l_674[5][7][2] = {{{(void*)0, &g_448}, {(void*)0, &g_448}, {(void*)0, &g_448}, {(void*)0, &g_448}, {(void*)0, &g_448}, {(void*)0, &g_448}, {(void*)0, &g_448}}, {{(void*)0, &g_448}, {(void*)0, &g_448}, {(void*)0, &g_448}, {(void*)0, &g_448}, {(void*)0, &g_448}, {(void*)0, &g_448}, {(void*)0, &g_448}}, {{(void*)0, &g_448}, {(void*)0, &g_448}, {(void*)0, &g_448}, {(void*)0, &g_448}, {(void*)0, &g_448}, {(void*)0, &g_448}, {(void*)0, &g_448}}, {{(void*)0, &g_448}, {(void*)0, &g_448}, {(void*)0, &g_448}, {(void*)0, &g_448}, {(void*)0, &g_448}, {(void*)0, &g_448}, {(void*)0, &g_448}}, {{(void*)0, &g_448}, {(void*)0, &g_448}, {(void*)0, &g_448}, {(void*)0, &g_448}, {(void*)0, &g_448}, {(void*)0, &g_448}, {(void*)0, &g_448}}};
        int l_686 = 0xD143F0DFL;
        unsigned l_690 = 18446744073709551614UL;
        unsigned short **l_695 = &l_411;
        char *l_700 = &g_129;
        unsigned l_702 = 0UL;
        int **l_704 = &g_84;
        unsigned short l_709[9][9][3] = {{{0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}}, {{0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}}, {{0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}}, {{0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}}, {{0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}}, {{0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}}, {{0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}}, {{0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}}, {{0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}, {0x4D73L, 0UL, 9UL}}};
        unsigned short l_710 = 0x3668L;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_582[i] = &l_6;
        if (((((*g_308) = ((safe_unary_minus_func_uint16_t_u((g_194[0][3].f6 == (((((*l_419) = (0x0D3AL || (((*l_416) = g_223[0][0]) != ((l_417 >= g_354.f6) , g_107)))) >= (safe_rshift_func_uint16_t_u_s(((l_305 , (safe_unary_minus_func_int16_t_s((g_212.f0 ^ ((safe_lshift_func_uint8_t_u_s((g_173 & g_240.f6), g_240.f1)) < g_241[1]))))) & 0x33L), l_305))) , 0x654FL) , 0x1D4EL)))) & l_305)) == 1UL) | 0x4EL))
        {
            int l_427 = (-1L);
            unsigned char l_438 = 0xB3L;
            int l_478 = 0x5906845AL;
            unsigned long long *l_605 = (void*)0;
            short l_654 = 0x9082L;
            if ((*l_419))
            {
                struct S0 *l_426 = &g_232;
                int l_444[3][8][8] = {{{(-10L), 1L, (-10L), (-4L), (-5L), 0xD06275D1L, (-1L), 0x8A9DC16AL}, {(-10L), 1L, (-10L), (-4L), (-5L), 0xD06275D1L, (-1L), 0x8A9DC16AL}, {(-10L), 1L, (-10L), (-4L), (-5L), 0xD06275D1L, (-1L), 0x8A9DC16AL}, {(-10L), 1L, (-10L), (-4L), (-5L), 0xD06275D1L, (-1L), 0x8A9DC16AL}, {(-10L), 1L, (-10L), (-4L), (-5L), 0xD06275D1L, (-1L), 0x8A9DC16AL}, {(-10L), 1L, (-10L), (-4L), (-5L), 0xD06275D1L, (-1L), 0x8A9DC16AL}, {(-10L), 1L, (-10L), (-4L), (-5L), 0xD06275D1L, (-1L), 0x8A9DC16AL}, {(-10L), 1L, (-10L), (-4L), (-5L), 0xD06275D1L, (-1L), 0x8A9DC16AL}}, {{(-10L), 1L, (-10L), (-4L), (-5L), 0xD06275D1L, (-1L), 0x8A9DC16AL}, {(-10L), 1L, (-10L), (-4L), (-5L), 0xD06275D1L, (-1L), 0x8A9DC16AL}, {(-10L), 1L, (-10L), (-4L), (-5L), 0xD06275D1L, (-1L), 0x8A9DC16AL}, {(-10L), 1L, (-10L), (-4L), (-5L), 0xD06275D1L, (-1L), 0x8A9DC16AL}, {(-10L), 1L, (-10L), (-4L), (-5L), 0xD06275D1L, (-1L), 0x8A9DC16AL}, {(-10L), 1L, (-10L), (-4L), (-5L), 0xD06275D1L, (-1L), 0x8A9DC16AL}, {(-10L), 1L, (-10L), (-4L), (-5L), 0xD06275D1L, (-1L), 0x8A9DC16AL}, {(-10L), 1L, (-10L), (-4L), (-5L), 0xD06275D1L, (-1L), 0x8A9DC16AL}}, {{(-10L), 1L, (-10L), (-4L), (-5L), 0xD06275D1L, (-1L), 0x8A9DC16AL}, {(-10L), 1L, (-10L), (-4L), (-5L), 0xD06275D1L, (-1L), 0x8A9DC16AL}, {(-10L), 1L, (-10L), (-4L), (-5L), 0xD06275D1L, (-1L), 0x8A9DC16AL}, {(-10L), 1L, (-10L), (-4L), (-5L), 0xD06275D1L, (-1L), 0x8A9DC16AL}, {(-10L), 1L, (-10L), (-4L), (-5L), 0xD06275D1L, (-1L), 0x8A9DC16AL}, {(-10L), 1L, (-10L), (-4L), (-5L), 0xD06275D1L, (-1L), 0x8A9DC16AL}, {(-10L), 1L, (-10L), (-4L), (-5L), 0xD06275D1L, (-1L), 0x8A9DC16AL}, {(-10L), 1L, (-10L), (-4L), (-5L), 0xD06275D1L, (-1L), 0x8A9DC16AL}}};
                int *l_445 = &g_347.f5;
                unsigned char *l_476 = &l_438;
                unsigned long long *l_477 = &g_345.f6;
                int i, j, k;
                (*l_426) = g_425;
                (*l_445) = (((~g_347.f2) , (l_6 > ((l_427 != ((g_346.f6 < ((!(safe_add_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((safe_add_func_int64_t_s_s((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((l_438 & 0x9EFC5118L), ((*l_419) = 9L))), (safe_rshift_func_uint16_t_u_s((g_441[7] != (void*)0), 5)))), l_305)), (*g_308))) && (-1L)), 0x3853L))) , g_381.f4)) && 0x644DE8BFD0AA5063LL)) | 6UL))) && l_444[0][3][1]);
                for (g_21 = 8; (g_21 == 10); g_21++)
                {
                    int *l_453[7];
                    int **l_454 = &l_445;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_453[i] = &g_346.f5;
                    (*l_426) = g_448;
                    for (g_301.f5 = 2; (g_301.f5 == (-6)); g_301.f5--)
                    {
                        (*g_452) = l_451;
                        if ((*l_419))
                            continue;
                    }
                    (*g_455) = ((*l_454) = ((*g_105) , l_453[6]));
                    l_427 = (*l_445);
                }
                (*l_445) = (safe_mul_func_uint8_t_u_u((g_13 = l_305), (safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(((((safe_sub_func_uint64_t_u_u(((*l_477) = ((*l_20) = (safe_mod_func_int64_t_s_s(l_6, ((safe_add_func_int32_t_s_s(l_468, 0xBB9EBD29L)) , (g_320 = ((safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((((*l_476) = ((((void*)0 == l_473) && ((safe_lshift_func_int16_t_s_s((((*l_416) = g_381.f6) ^ g_191[3]), ((((g_107 != 0x0309A8036627E460LL) , 0x23L) & (-2L)) , (-1L)))) == g_448.f0)) != l_427)) || 0xC3L), l_427)) , 0xA4L), l_427)) , 0xBEEF292DE6B79C51LL))))))), (*l_445))) , l_427) > (*l_419)) == g_425.f0), l_427)), l_478))));
            }
            else
            {
                long long l_481 = 0xE0714DF50196CCCDLL;
                unsigned char *l_488 = &g_91;
                unsigned long long *l_497 = &g_232.f6;
                unsigned char l_505 = 0xEAL;
                int *l_537 = (void*)0;
                int *l_554[1];
                int *l_557 = &g_63;
                int l_569[3];
                int *l_591 = (void*)0;
                int i;
                for (i = 0; i < 1; i++)
                    l_554[i] = &l_417;
                for (i = 0; i < 3; i++)
                    l_569[i] = 5L;
                if ((l_438 < (safe_sub_func_int16_t_s_s(l_481, (safe_mul_func_uint8_t_u_u(l_427, ((*l_488) = (safe_add_func_uint64_t_u_u(g_268[8].f0, (safe_mul_func_int8_t_s_s(l_478, (g_99 ^ (*l_419)))))))))))))
                {
                    for (g_232.f5 = 9; (g_232.f5 >= 0); g_232.f5 -= 1)
                    {
                        struct S0 **l_490 = &g_219;
                        int i;
                        l_489 = &l_427;
                        (*l_490) = (void*)0;
                        l_491 = ((*l_489) = (*l_489));
                    }
                }
                else
                {
                    unsigned l_495 = 0x6900822BL;
                    unsigned long long l_496 = 18446744073709551615UL;
                    int **l_500 = &l_489;
                    unsigned *l_502[10] = {&g_191[1], &g_191[3], &g_191[1], &g_191[3], &g_191[1], &g_191[3], &g_191[1], &g_191[3], &g_191[1], &g_191[3]};
                    unsigned **l_501[9][1] = {{&l_502[4]}, {&l_502[4]}, {&l_502[4]}, {&l_502[4]}, {&l_502[4]}, {&l_502[4]}, {&l_502[4]}, {&l_502[4]}, {&l_502[4]}};
                    unsigned ***l_503 = &l_501[6][0];
                    int l_519 = 0x872D6C60L;
                    int i, j;
                    (*l_500) = l_498;
                    if (g_212.f6)
                        goto lbl_504;
lbl_504:
                    (*l_503) = l_501[6][0];
                    if (l_505)
                    {
                        unsigned long long l_520 = 18446744073709551608UL;
                        (*l_498) = ((safe_add_func_int64_t_s_s((((l_438 , &g_13) != (void*)0) <= g_268[8].f0), g_448.f0)) , (*g_101));
                    }
                    else
                    {
                        short l_536 = 7L;
                        unsigned short l_544[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_544[i] = 65531UL;
                        (*l_500) = l_537;
                        (*l_500) = (*l_500);
                        (*l_500) = &l_427;
                    }
                }
                for (g_107 = 20; (g_107 > 7); --g_107)
                {
                    unsigned char l_552[4];
                    unsigned short **l_567 = &g_566;
                    unsigned *l_568 = &l_492;
                    unsigned *l_570 = &l_533;
                    int **l_581 = (void*)0;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_552[i] = 255UL;
                    for (g_173 = 2; (g_173 <= 6); g_173 += 1)
                    {
                        int l_550 = (-8L);
                        char l_551 = 0x61L;
                        unsigned *l_553 = &l_492;
                        int **l_555 = (void*)0;
                        int **l_556[2][7] = {{&l_419, &l_419, &l_537, &l_537, &g_84, &l_537, &l_537}, {&l_419, &l_419, &l_537, &l_537, &g_84, &l_537, &l_537}};
                        int i, j;
                        l_557 = func_46(l_488, (((~g_345.f0) , (safe_sub_func_uint32_t_u_u(1UL, ((*l_553) = func_14(((func_64(&l_417, &l_6, l_550) > 1L) > (g_44[6][1][3] && 0x1BA2B85AA118F45BLL)), l_551, (*l_498), l_552[0], l_550))))) , g_194[0][3].f0), &l_427, l_551, l_554[0]);
                        if ((*g_101))
                            break;
                    }
                    if (((((safe_lshift_func_uint8_t_u_u(g_191[3], func_14((*g_308), (*g_372), (((*l_411) = g_347.f5) , l_552[0]), g_448.f4, ((*l_570) = (safe_sub_func_uint16_t_u_u((((*l_41) = (safe_mod_func_int8_t_s_s((l_569[1] = (safe_add_func_uint8_t_u_u((*l_419), ((((*l_568) = (!((*l_557) == (((*l_567) = g_566) == (void*)0)))) != (*g_308)) > 0x90BDB1B2L)))), 5UL))) , g_91), 0xBD7CL)))))) ^ 0x40E521611C5A6D94LL) <= 0x3ACC6270C26D6BB7LL) >= l_552[1]))
                    {
                        int l_574 = 0L;
                        int **l_577 = &g_84;
                        int ***l_578 = (void*)0;
                        int ***l_579 = (void*)0;
                        int ***l_580[1][4][4] = {{{&l_577, &l_577, &l_577, &l_577}, {&l_577, &l_577, &l_577, &l_577}, {&l_577, &l_577, &l_577, &l_577}, {&l_577, &l_577, &l_577, &l_577}}};
                        int i, j, k;
                        (*l_419) = (safe_mul_func_uint16_t_u_u(((*g_308) , (g_573 , l_574)), (((safe_lshift_func_int16_t_s_u((l_427 && (*l_557)), l_552[0])) & 0x3509L) ^ ((l_581 = l_577) == &g_84))));
                        (*l_581) = l_582[2];
                    }
                    else
                    {
                        short ***l_584[6][10] = {{&l_583, &l_583, (void*)0, &l_583, &l_583, &l_583, &l_583, &l_583, &l_583, &l_583}, {&l_583, &l_583, (void*)0, &l_583, &l_583, &l_583, &l_583, &l_583, &l_583, &l_583}, {&l_583, &l_583, (void*)0, &l_583, &l_583, &l_583, &l_583, &l_583, &l_583, &l_583}, {&l_583, &l_583, (void*)0, &l_583, &l_583, &l_583, &l_583, &l_583, &l_583, &l_583}, {&l_583, &l_583, (void*)0, &l_583, &l_583, &l_583, &l_583, &l_583, &l_583, &l_583}, {&l_583, &l_583, (void*)0, &l_583, &l_583, &l_583, &l_583, &l_583, &l_583, &l_583}};
                        struct S0 **l_588 = (void*)0;
                        int i, j;
                        g_587 = (g_585 = l_583);
                        (*g_590) = (*g_218);
                    }
                    l_591 = l_537;
                }
                (*g_86) = &l_427;
                (**g_367) = (*l_489);
            }
            for (g_345.f6 = (-26); (g_345.f6 > 32); g_345.f6++)
            {
                if ((*l_489))
                    break;
            }
            if (l_478)
            {
                unsigned **l_597 = &g_308;
                int l_604 = 0L;
                int **l_616 = &l_498;
                int ***l_615 = &l_616;
                char l_630 = 0x5FL;
                unsigned long long *l_653 = (void*)0;
                struct S0 *l_658 = (void*)0;
                int **l_684 = &l_419;
                unsigned long long l_685 = 2UL;
                if (((safe_add_func_int8_t_s_s((*l_489), (l_597 == &g_308))) , (((*l_498) | (safe_sub_func_uint16_t_u_u(g_103.f0, (-4L)))) || ((safe_mod_func_uint64_t_u_u((g_345.f6 = l_606), g_347.f2)) , (*l_489)))))
                {
                    int l_607 = 0L;
                    int l_612[1];
                    struct S0 **l_659 = (void*)0;
                    struct S0 **l_660 = &l_451;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_612[i] = (-10L);
                    if ((l_607 != ((safe_mod_func_int32_t_s_s(l_438, (safe_mul_func_int8_t_s_s(l_478, ((g_346.f2 & (**l_616)) & 1L))))) < g_345.f0)))
                    {
                        unsigned l_631 = 0x5F748339L;
                        int **l_634 = &l_489;
                        (*l_634) = (l_612[0] , ((*l_616) = (((safe_sub_func_int8_t_s_s(((*l_43) = (l_478 = (*l_489))), (safe_sub_func_int64_t_s_s((((*l_411) = (safe_rshift_func_uint16_t_u_s((g_345.f0 , (safe_lshift_func_uint16_t_u_s(((((*l_41) = ((safe_rshift_func_int16_t_s_s(func_14(((*g_308) = 0x2955C9B4L), (safe_rshift_func_uint8_t_u_s(g_240.f3, 6)), g_448.f6, l_630, ((((*l_41) = ((g_301.f0 , (*l_489)) || 1L)) ^ l_612[0]) || l_438)), l_631)) | (*l_498))) | 0xCFL) , l_631), l_427))), 7))) || g_199.f4), g_425.f0)))) >= g_346.f5) , &l_6)));
                    }
                    else
                    {
                        char *****l_635 = &l_521[4][0][5];
                        int l_644 = 0L;
                        int ***l_649 = (void*)0;
                        int ***l_650 = &g_371;
                        (*l_419) = ((((*l_635) = (void*)0) == &g_442) ^ ((l_478 , ((g_383.f0 != ((safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s((0UL ^ 0x7521C8DDL), (safe_rshift_func_uint16_t_u_s(((*l_411) = (g_44[8][0][3] >= g_240.f0)), ((((**l_583) = l_612[0]) < 0xAE8CL) ^ l_644))))), (**l_616))), 11)) | 0xBB5CF562BCC27B37LL)) ^ 0x34993F6AL)) >= 0x0CE18B88L));
                        g_657 = ((safe_rshift_func_int8_t_s_s(func_64(&l_644, (((4294967290UL <= ((safe_add_func_int16_t_s_s(((l_644 = l_654) < 4UL), l_654)) || g_103.f4)) ^ 0xCFL) , &l_427), (**g_371)), l_655)) , g_656);
                        (**l_615) = &l_644;
                    }
                    (*l_660) = l_658;
                    (*l_616) = (g_661[0][1][2] , &l_417);
                }
                else
                {
                    return (**g_307);
                }
                (*l_498) = 3L;
                for (g_232.f1 = 2; (g_232.f1 <= 6); g_232.f1 += 1)
                {
                    struct S0 *l_673 = &g_212;
                    int i;
                    if ((***l_615))
                    {
                        int *l_662 = &g_346.f5;
                        volatile struct S0 *l_665 = (void*)0;
                        (*l_616) = l_662;
                        g_667 = g_663;
                    }
                    else
                    {
                        struct S0 **l_675 = &l_451;
                        unsigned char *l_676[5] = {&g_13, &l_438, &g_13, &l_438, &g_13};
                        int l_677 = 3L;
                        int i;
                        (***l_615) = (*l_419);
                    }
                    return (**g_307);
                }
                if ((((*l_41) = ((safe_lshift_func_int16_t_s_s((4294967295UL == (func_64(((*l_684) = (g_680[0][0][0] , ((*l_616) = &l_417))), &g_107, l_685) != l_686)), 9)) , (*l_489))) | g_212.f0))
                {
                    (*l_684) = (*l_616);
                }
                else
                {
                    (*l_684) = (*l_616);
                    g_687 = (*g_213);
                }
            }
            else
            {
                volatile unsigned long long **l_689 = &g_603[5];
                volatile unsigned long long ***l_688[9][8] = {{&l_689, (void*)0, &l_689, (void*)0, &l_689, (void*)0, &l_689, (void*)0}, {&l_689, (void*)0, &l_689, (void*)0, &l_689, (void*)0, &l_689, (void*)0}, {&l_689, (void*)0, &l_689, (void*)0, &l_689, (void*)0, &l_689, (void*)0}, {&l_689, (void*)0, &l_689, (void*)0, &l_689, (void*)0, &l_689, (void*)0}, {&l_689, (void*)0, &l_689, (void*)0, &l_689, (void*)0, &l_689, (void*)0}, {&l_689, (void*)0, &l_689, (void*)0, &l_689, (void*)0, &l_689, (void*)0}, {&l_689, (void*)0, &l_689, (void*)0, &l_689, (void*)0, &l_689, (void*)0}, {&l_689, (void*)0, &l_689, (void*)0, &l_689, (void*)0, &l_689, (void*)0}, {&l_689, (void*)0, &l_689, (void*)0, &l_689, (void*)0, &l_689, (void*)0}};
                int **l_693 = &l_582[0];
                int i, j;
                g_602 = &g_603[6];
                (*l_419) = l_690;
                (*l_489) = (((**g_371) , g_691[0]) | (*l_489));
                (*l_693) = &l_6;
            }
        }
        else
        {
            int **l_694 = &l_418;
            int *l_696 = &l_617;
            (*l_694) = &l_417;
            (*l_694) = (*l_694);
        }
        (*l_704) = func_68(g_448.f3, l_700, l_701, ((((l_702 == ((void*)0 != (*g_585))) , 0L) > (l_703[1] | (*l_419))) , (*g_115)));
        (*l_498) = (((((*l_43) = (((safe_mul_func_int16_t_s_s((((**l_704) >= (*l_701)) != (safe_add_func_int8_t_s_s((*l_498), l_709[7][6][0]))), l_710)) | (*l_701)) < (g_150 = (*l_419)))) , g_347.f0) != func_64((*l_704), (*g_455), (**g_371))) ^ (**l_704));
    }
    for (l_305 = 0; (l_305 < 25); l_305++)
    {
        int l_713[8][8][1] = {{{0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}}, {{0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}}, {{0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}}, {{0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}}, {{0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}}, {{0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}}, {{0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}}, {{0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}, {0x0427BB11L}}};
        int i, j, k;
        return l_713[3][6][0];
    }
    return l_714;
}







static int func_14(unsigned p_15, int p_16, unsigned long long p_17, unsigned p_18, unsigned p_19)
{
    unsigned l_306 = 0x965B3739L;
    int *l_318 = &g_63;
    int l_388 = 0x122984D5L;
    for (g_301.f6 = 0; (g_301.f6 <= 7); g_301.f6 += 1)
    {
        char *l_315 = &g_232.f1;
        int l_316[8] = {(-6L), 0x488DD117L, (-6L), 0x488DD117L, (-6L), 0x488DD117L, (-6L), 0x488DD117L};
        unsigned l_342 = 0xFFE74566L;
        int *l_363[6] = {&g_107, &g_107, &g_232.f5, &g_107, &g_107, &g_232.f5};
        unsigned short *l_389 = (void*)0;
        int i;
        if ((p_18 ^ l_306))
        {
            unsigned ** volatile *l_309 = &g_307;
            int *l_319 = (void*)0;
            char *l_324 = &g_44[7][1][3];
            int l_333 = 0xE47DCB6BL;
            int **l_365 = &g_106[4];
            int **l_366 = &l_318;
            (*l_309) = g_307;
            for (g_103.f5 = 7; (g_103.f5 >= 2); g_103.f5 -= 1)
            {
                int *l_314[2];
                short *l_317[2];
                unsigned long long *l_321 = &g_99;
                unsigned l_341[1];
                int i;
                for (i = 0; i < 2; i++)
                    l_314[i] = (void*)0;
                for (i = 0; i < 2; i++)
                    l_317[i] = &g_103.f0;
                for (i = 0; i < 1; i++)
                    l_341[i] = 0UL;
            }
            (*g_367) = ((*l_366) = ((*l_365) = l_318));
        }
        else
        {
            int ***l_373 = &g_371;
            int **l_375 = &g_372;
            int ***l_374 = &l_375;
            unsigned short *l_378[5][2] = {{&g_144, &g_144}, {&g_144, &g_144}, {&g_144, &g_144}, {&g_144, &g_144}, {&g_144, &g_144}};
            short *l_379 = &g_345.f0;
            short *l_380 = &g_232.f0;
            int i, j;
            (*g_370) = (((g_194[0][3].f3 , 0UL) , (safe_lshift_func_int8_t_s_s(p_18, 2))) , (*g_213));
            (*l_374) = ((*l_373) = g_371);
            if (((*l_318) , (((*l_318) | 1UL) , ((*l_318) = (((safe_rshift_func_uint8_t_u_u((*l_318), g_108[8].f6)) > (((p_17 | ((g_144 = (&l_315 != &g_75)) | ((*l_380) = ((*l_379) = p_17)))) >= p_18) > 0L)) >= 3L)))))
            {
                volatile struct S0 *l_382 = &g_157[1];
                (*l_382) = g_381;
            }
            else
            {
                volatile struct S0 *l_385[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_385[i] = &g_268[8];
                g_386 = g_383;
            }
        }
        if (p_16)
        {
            return p_17;
        }
        else
        {
            char **l_387 = &g_75;
            for (g_301.f5 = 0; g_301.f5 < 1; g_301.f5 += 1)
            {
                g_178[g_301.f5] = &g_241[1];
            }
            l_387 = l_387;
        }
        (*g_179) = func_68((p_19 , p_17), ((((*l_318) = (*l_318)) & ((safe_rshift_func_uint8_t_u_u(g_240.f6, (g_91 >= p_19))) >= 0xA236A0E8L)) , (void*)0), &l_316[4], (*g_115));
    }
    for (g_347.f6 = 3; (g_347.f6 < 8); g_347.f6++)
    {
        long long l_405 = 0x82CB2F88E1740D2DLL;
        if (p_18)
            break;
        for (g_103.f1 = 0; (g_103.f1 > 3); g_103.f1++)
        {
            unsigned long long l_396 = 0x44300DDB63E37F81LL;
            long long *l_406 = &g_320;
            int ***l_409 = &g_371;
            l_396 = 0xF8EA8647L;
            for (g_232.f5 = 0; g_232.f5 < 2; g_232.f5 += 1)
            {
                struct S0 tmp = {0L,-6L,-4,0x73L,-6L,5L,1UL};
                g_157[g_232.f5] = tmp;
            }
            (*l_318) = 0x1E963A68L;
            (*l_318) = (safe_lshift_func_uint8_t_u_s((((safe_mul_func_int16_t_s_s(g_171.f2, (safe_lshift_func_int16_t_s_u((*l_318), 10)))) != (safe_mod_func_int16_t_s_s((((*l_406) = l_405) , (((p_19 , (((((safe_mul_func_int8_t_s_s((*l_318), 0x5AL)) <= (*l_318)) , l_409) == (((g_347.f5 != 0x8892L) < l_405) , &g_371)) & 0x9EL)) | l_405) || 0x2CF7L)), (*l_318)))) , p_15), 4));
        }
    }
    return (*g_372);
}







static char func_22(unsigned short p_23, unsigned short p_24, unsigned long long * p_25)
{
    int *l_118 = &g_107;
    int **l_119 = &l_118;
    char l_123 = 0L;
    char *l_127 = &g_42;
    char **l_126[9][10][2] = {{{(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}}, {{(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}}, {{(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}}, {{(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}}, {{(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}}, {{(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}}, {{(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}}, {{(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}}, {{(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}, {(void*)0, &l_127}}};
    char *l_128 = &g_129;
    long long *l_132 = (void*)0;
    int l_139 = 0xDD8142B0L;
    int *l_181 = &g_63;
    long long l_284[5] = {3L, 0xB317F358C7D61086LL, 3L, 0xB317F358C7D61086LL, 3L};
    int l_292 = 0xD6ECBC03L;
    int *l_294 = (void*)0;
    int i, j, k;
lbl_154:
    (*g_120) = (p_24 , ((*l_119) = l_118));
    if ((safe_mul_func_uint16_t_u_u((((*p_25) = (((*l_118) = (l_123 > func_64(func_56((**l_119), p_24, (p_23 , (~(safe_sub_func_int16_t_s_s(g_44[8][1][5], 1L))))), func_46((l_128 = &l_123), (safe_lshift_func_uint8_t_u_s(((0x4BB92A5F0EF6F4DFLL | g_107) ^ g_13), (*l_118))), (*l_119), p_23, &g_107), g_107))) <= g_21)) ^ 6L), p_24)))
    {
        char *l_137 = &g_44[8][1][5];
        short *l_138 = &g_103.f0;
        char ***l_140[3][4][4] = {{{&l_126[4][6][1], &l_126[4][1][0], &l_126[4][6][1], &l_126[4][1][0]}, {&l_126[4][6][1], &l_126[4][1][0], &l_126[4][6][1], &l_126[4][1][0]}, {&l_126[4][6][1], &l_126[4][1][0], &l_126[4][6][1], &l_126[4][1][0]}, {&l_126[4][6][1], &l_126[4][1][0], &l_126[4][6][1], &l_126[4][1][0]}}, {{&l_126[4][6][1], &l_126[4][1][0], &l_126[4][6][1], &l_126[4][1][0]}, {&l_126[4][6][1], &l_126[4][1][0], &l_126[4][6][1], &l_126[4][1][0]}, {&l_126[4][6][1], &l_126[4][1][0], &l_126[4][6][1], &l_126[4][1][0]}, {&l_126[4][6][1], &l_126[4][1][0], &l_126[4][6][1], &l_126[4][1][0]}}, {{&l_126[4][6][1], &l_126[4][1][0], &l_126[4][6][1], &l_126[4][1][0]}, {&l_126[4][6][1], &l_126[4][1][0], &l_126[4][6][1], &l_126[4][1][0]}, {&l_126[4][6][1], &l_126[4][1][0], &l_126[4][6][1], &l_126[4][1][0]}, {&l_126[4][6][1], &l_126[4][1][0], &l_126[4][6][1], &l_126[4][1][0]}}};
        char ****l_141 = &l_140[0][1][3];
        int l_142 = 0x19C51062L;
        unsigned short *l_143 = &g_144;
        int *l_159 = &g_63;
        int *l_259 = &g_241[2];
        int *l_293 = &l_139;
        int i, j, k;
        if ((safe_add_func_uint16_t_u_u(((*l_143) = (l_142 = (safe_mod_func_uint32_t_u_u(func_64(func_46(l_137, (l_139 = ((*l_138) = (p_23 , p_24))), func_46((*g_115), (((((*l_141) = l_140[0][1][3]) != (void*)0) >= ((g_129 < ((**g_120) & (**l_119))) > 1UL)) > l_142), &g_107, p_23, &g_107), g_99, &l_142), &l_142, l_142), (*l_118))))), 1UL)))
        {
            int *l_146 = (void*)0;
            int *l_147 = &g_103.f5;
            (*l_147) = ((**l_119) = (**g_112));
        }
        else
        {
            unsigned long long l_148 = 18446744073709551615UL;
            long long *l_149 = &g_150;
            int *l_151 = &l_139;
            char *l_158 = &g_44[8][1][5];
            long long l_198[4][8] = {{0xF2E4992809C4DB89LL, 1L, (-1L), 0x76BB3E926D7F8DAALL, 0xBD84F3E2910136EALL, 0x3087AE741E8B384FLL, 0xBD84F3E2910136EALL, 0x76BB3E926D7F8DAALL}, {0xF2E4992809C4DB89LL, 1L, (-1L), 0x76BB3E926D7F8DAALL, 0xBD84F3E2910136EALL, 0x3087AE741E8B384FLL, 0xBD84F3E2910136EALL, 0x76BB3E926D7F8DAALL}, {0xF2E4992809C4DB89LL, 1L, (-1L), 0x76BB3E926D7F8DAALL, 0xBD84F3E2910136EALL, 0x3087AE741E8B384FLL, 0xBD84F3E2910136EALL, 0x76BB3E926D7F8DAALL}, {0xF2E4992809C4DB89LL, 1L, (-1L), 0x76BB3E926D7F8DAALL, 0xBD84F3E2910136EALL, 0x3087AE741E8B384FLL, 0xBD84F3E2910136EALL, 0x76BB3E926D7F8DAALL}};
            unsigned short l_214 = 0x8EA9L;
            char ****l_216 = &l_140[0][3][1];
            struct S0 *l_239 = &g_240;
            int i, j;
            if (func_64((*g_112), func_46((*g_115), (((*l_149) = ((l_148 == (6L && l_142)) , (l_142 , (-3L)))) , (**l_119)), &g_107, g_63, l_151), g_144))
            {
                for (g_99 = (-25); (g_99 != 8); g_99 = safe_add_func_uint16_t_u_u(g_99, 5))
                {
                    l_142 = p_23;
                    if (g_103.f1)
                        goto lbl_154;
                    for (l_148 = 0; l_148 < 3; l_148 += 1)
                    {
                        for (p_23 = 0; p_23 < 4; p_23 += 1)
                        {
                            for (g_103.f1 = 0; g_103.f1 < 4; g_103.f1 += 1)
                            {
                                l_140[l_148][p_23][g_103.f1] = &l_126[5][0][1];
                            }
                        }
                    }
                    l_159 = func_68(((0x3110L && (((safe_sub_func_uint32_t_u_u(p_23, (g_157[0] , (l_151 != (void*)0)))) >= (((8L >= p_23) || p_23) ^ g_150)) == (-7L))) , 7L), l_158, (*l_119), (*g_115));
                }
            }
            else
            {
                unsigned *l_172 = &g_173;
                int l_174 = 1L;
                struct S0 *l_217 = (void*)0;
                short *l_221 = &g_103.f0;
                unsigned long long *l_255[1][6] = {{&g_21, &g_212.f6, &g_21, &g_212.f6, &g_21, &g_212.f6}};
                int i, j;
                if (((p_23 != ((safe_mul_func_uint16_t_u_u(0x6C97L, (0x2F9622FFL | (safe_unary_minus_func_uint16_t_u((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((((+(p_24 < (-1L))) , ((safe_sub_func_int64_t_s_s((g_99 , func_64((*l_119), (((*l_172) = (g_171 , (*l_151))) , (*l_119)), l_174)), (*p_25))) & (*p_25))) != g_13) | (*l_151)), p_23)), p_24)), 0x6FF5L))))))) && (*l_159))) | g_63))
                {
                    unsigned *l_190[5][5] = {{(void*)0, &g_191[5], &g_191[3], &g_191[5], (void*)0}, {(void*)0, &g_191[5], &g_191[3], &g_191[5], (void*)0}, {(void*)0, &g_191[5], &g_191[3], &g_191[5], (void*)0}, {(void*)0, &g_191[5], &g_191[3], &g_191[5], (void*)0}, {(void*)0, &g_191[5], &g_191[3], &g_191[5], (void*)0}};
                    int l_192 = (-1L);
                    int **l_193 = &l_181;
                    int i, j;
lbl_177:
                    (*l_118) = ((*l_151) = (((g_171.f6 , p_25) != l_132) > p_24));
lbl_180:
                    for (g_42 = (-30); (g_42 > 3); g_42 = safe_add_func_int8_t_s_s(g_42, 5))
                    {
                        if (g_99)
                            goto lbl_177;
                        (**l_119) = (**l_119);
                        (*g_179) = g_178[0];
                        if (l_142)
                            goto lbl_180;
                        if (p_24)
                            break;
                    }
                    (*l_193) = ((*l_119) = func_68(g_107, (*g_115), l_181, func_77(l_151, p_25, p_24, ((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((g_171.f4 ^ l_174), (safe_add_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(((g_191[3] = g_144) , g_191[7]), p_24)) , (-1L)), l_192)))), p_23)) | 0x43AEAE043946F77FLL))));
                }
                else
                {
                    (*g_105) = g_194[0][3];
                    if ((*l_159))
                    {
                        long long l_195 = (-2L);
                        (**l_119) = l_195;
                    }
                    else
                    {
                        struct S0 *l_197 = &g_103;
                        struct S0 **l_196 = &l_197;
                        (*l_196) = (void*)0;
                        (*l_119) = (void*)0;
                        return l_198[0][3];
                    }
                    for (l_142 = 8; (l_142 >= 0); l_142 -= 1)
                    {
                        volatile struct S0 *l_200 = &g_108[8];
                        unsigned long long *l_205 = (void*)0;
                        unsigned long long **l_206[8][2][8] = {{{&l_205, &l_205, (void*)0, (void*)0, &l_205, &l_205, (void*)0, &l_205}, {&l_205, &l_205, (void*)0, (void*)0, &l_205, &l_205, (void*)0, &l_205}}, {{&l_205, &l_205, (void*)0, (void*)0, &l_205, &l_205, (void*)0, &l_205}, {&l_205, &l_205, (void*)0, (void*)0, &l_205, &l_205, (void*)0, &l_205}}, {{&l_205, &l_205, (void*)0, (void*)0, &l_205, &l_205, (void*)0, &l_205}, {&l_205, &l_205, (void*)0, (void*)0, &l_205, &l_205, (void*)0, &l_205}}, {{&l_205, &l_205, (void*)0, (void*)0, &l_205, &l_205, (void*)0, &l_205}, {&l_205, &l_205, (void*)0, (void*)0, &l_205, &l_205, (void*)0, &l_205}}, {{&l_205, &l_205, (void*)0, (void*)0, &l_205, &l_205, (void*)0, &l_205}, {&l_205, &l_205, (void*)0, (void*)0, &l_205, &l_205, (void*)0, &l_205}}, {{&l_205, &l_205, (void*)0, (void*)0, &l_205, &l_205, (void*)0, &l_205}, {&l_205, &l_205, (void*)0, (void*)0, &l_205, &l_205, (void*)0, &l_205}}, {{&l_205, &l_205, (void*)0, (void*)0, &l_205, &l_205, (void*)0, &l_205}, {&l_205, &l_205, (void*)0, (void*)0, &l_205, &l_205, (void*)0, &l_205}}, {{&l_205, &l_205, (void*)0, (void*)0, &l_205, &l_205, (void*)0, &l_205}, {&l_205, &l_205, (void*)0, (void*)0, &l_205, &l_205, (void*)0, &l_205}}};
                        int l_209 = (-8L);
                        int i, j, k;
                        (*l_119) = &l_174;
                        (*l_200) = g_199;
                        (*l_118) = ((((safe_mod_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u(func_30((p_25 = l_205), (safe_add_func_uint16_t_u_u((*l_159), (*l_151))), (*l_181), func_35(&g_99, p_23, ((((g_194[0][3].f0 | g_21) == l_209) | 0x164ED7519BBCB22DLL) , l_174))), p_24)) & p_23) <= g_191[3]), p_24)) != p_23) <= 0x69F7C8D7L) ^ g_129);
                    }
                    for (l_148 = 0; (l_148 == 51); ++l_148)
                    {
                        char l_215 = 0x4FL;
                        (*g_213) = g_212;
                        (*l_159) = (4294967293UL < ((((*l_138) = g_212.f0) == ((g_194[0][3].f0 > l_214) > (!l_215))) && g_108[8].f0));
                        (**g_179) = p_24;
                    }
                }
                (*l_118) = ((void*)0 == l_216);
                if (p_24)
                {
                    int *l_222 = &g_223[0][0];
                    int l_230 = 0L;
                    unsigned char *l_250 = &g_91;
                    if ((0x1C7CL > (&l_142 == &l_174)))
                    {
                        char **l_231 = &l_137;
                        int l_233 = (-1L);
                        (*g_218) = l_217;
                        (*g_105) = g_220;
                        (*l_119) = ((((((*l_149) = (p_24 , (*l_151))) != ((void*)0 == l_221)) | (l_222 != ((safe_lshift_func_int8_t_s_s(((((!(g_13 < (((safe_add_func_uint32_t_u_u((255UL >= (safe_mul_func_int16_t_s_s(g_212.f0, (l_230 | (*l_159))))), p_23)) , g_157[0].f0) | 0x4B0218DDL))) < p_24) , l_231) == (void*)0), l_174)) , &g_223[1][2]))) , l_230) , (void*)0);
                        l_233 = (g_232 , ((*l_181) = ((*l_151) = l_230)));
                    }
                    else
                    {
                        long long l_238 = 0x23637AD52E694BA9LL;
                        (*l_118) = (func_64(l_151, l_151, ((*l_222) = (&l_151 == &g_145))) == (g_241[1] = ((safe_mul_func_int16_t_s_s(((0x94L | 0xBFL) , ((((*l_149) = ((g_219 != ((safe_mul_func_uint16_t_u_u((p_24 <= l_238), 0x97CAL)) , l_239)) > p_23)) > l_238) <= (*l_118))), 0x3D83L)) >= (-7L))));
                        return (*l_159);
                    }
                    (*l_151) = ((safe_sub_func_uint32_t_u_u((g_173 = ((-7L) < (safe_rshift_func_uint16_t_u_s(((*l_151) , g_232.f4), ((((l_230 && ((safe_mod_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u(l_230, ((*l_250) = g_13))) ^ p_23), g_240.f0)) && (((*l_159) = ((safe_unary_minus_func_int64_t_s((((p_23 | g_129) != p_23) | g_191[1]))) && 0UL)) >= g_240.f6))) && 0xE9F7L) && g_191[3]) < g_223[4][2]))))), p_23)) & 0xE2L);
                    for (g_240.f5 = 0; (g_240.f5 == 10); ++g_240.f5)
                    {
                        unsigned l_254[5][9][2] = {{{0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}}, {{0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}}, {{0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}}, {{0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}}, {{0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}}};
                        int i, j, k;
                        if ((**g_179))
                            break;
                        l_254[4][2][1] = ((void*)0 != &g_150);
                    }
                }
                else
                {
                    struct S0 **l_256 = &l_239;
                    (**l_119) = func_30(l_255[0][2], (((*l_256) = (*g_218)) != (void*)0), g_103.f1, &g_99);
                }
            }
            l_151 = func_46((p_23 , (*g_115)), (((*l_159) = (safe_add_func_int64_t_s_s((*l_151), (p_23 <= g_194[0][3].f3)))) != (+p_23)), &g_241[1], p_24, &g_241[1]);
            (*l_119) = (void*)0;
            (*l_119) = l_259;
        }
        if (((void*)0 != &l_126[2][4][0]))
        {
            int l_260 = 0x5B784680L;
            unsigned long long *l_267 = &g_240.f6;
            (*l_181) = ((l_260 < (safe_sub_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s(g_129, 3)) & (**l_119)) != ((safe_lshift_func_int8_t_s_u((-7L), g_108[8].f1)) != ((*l_267) = 0x6D9E332CBFD598AELL))), l_260))) <= g_212.f6);
            (*l_119) = (*g_120);
            g_269 = g_268[8];
        }
        else
        {
            long long *l_270 = (void*)0;
            long long *l_271 = (void*)0;
            long long *l_272 = &g_150;
            int l_273 = 0x61C7195CL;
            unsigned char l_285 = 0xD0L;
            unsigned *l_286 = &g_173;
            int l_289 = (-1L);
            (*l_259) = (((((*l_272) = (*l_181)) , ((*l_286) = ((l_273 != (safe_rshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((*l_137) = ((safe_lshift_func_int16_t_s_u((func_64(&l_142, &l_142, (*l_118)) == ((l_273 , func_35(&g_99, ((((((safe_sub_func_int16_t_s_s((((((safe_add_func_int64_t_s_s(g_212.f5, (*l_181))) && p_24) , p_24) <= g_232.f1) || 0UL), 0x3F35L)) >= g_42) || 65527UL) , l_273) | p_24) && 1L), (*l_181))) == l_132)), 4)) && l_284[1])), p_23)), g_173))) , l_285))) || 0xD65F5B50L) & 0x84D59CC582CEDBFFLL);
            (*l_159) = (0xB6L <= ((((func_64(&l_142, &l_142, (*l_259)) , ((*l_259) = (((l_273 != (safe_add_func_int32_t_s_s((((func_64(func_46((*g_115), ((l_289 = ((*l_272) = g_194[0][3].f2)) , (safe_lshift_func_uint8_t_u_u(((l_289 = l_292) < 0xC9L), g_171.f3))), &l_142, p_23, &g_107), l_293, g_103.f6) , p_24) == (*l_181)) || p_23), 0x2ED2992FL))) > 65535UL) , g_157[0].f3))) && g_194[0][3].f5) , (*l_159)) <= 0L));
        }
        (*g_296) = ((*l_119) = l_294);
    }
    else
    {
        short *l_297 = &g_240.f0;
        int *l_298 = &l_139;
        int *l_299 = &g_223[2][1];
        int **l_300 = &g_106[8];
        (*l_119) = ((*l_300) = func_46((*g_115), ((p_23 | (!(1UL != 0x481DE108L))) , (g_212.f0 = ((*l_297) = (*l_181)))), l_298, (((*l_119) = l_298) == ((*l_300) = (((*l_299) = (*l_298)) , &l_292))), l_299));
        (*g_302) = g_301;
        (**l_300) = ((*g_115) != (void*)0);
        for (g_232.f0 = 0; (g_232.f0 <= 19); g_232.f0 = safe_add_func_uint16_t_u_u(g_232.f0, 1))
        {
            (*l_298) = 0x692C0D94L;
        }
    }
    return p_23;
}







static unsigned short func_30(unsigned long long * p_31, unsigned p_32, long long p_33, unsigned long long * p_34)
{
    char *l_52 = &g_42;
    int l_53 = 0x6F576105L;
    int *l_54 = &l_53;
    unsigned long long l_55 = 0x47399D012CD0AB83LL;
    int **l_116 = (void*)0;
    l_54 = func_46(l_52, l_53, l_54, l_55, func_56(((0x980A6F85D55A9D45LL != g_13) , ((safe_lshift_func_uint8_t_u_s(g_44[2][2][3], 2)) || (*l_54))), p_32, (*l_54)));
    return g_108[8].f5;
}







static unsigned long long * func_35(unsigned long long * p_36, char p_37, unsigned p_38)
{
    unsigned long long *l_45[4] = {&g_21, &g_21, &g_21, &g_21};
    int i;
    return l_45[0];
}







static int * func_46(char * p_47, short p_48, int * p_49, unsigned p_50, int * p_51)
{
    return p_51;
}







static int * func_56(int p_57, short p_58, unsigned p_59)
{
    int *l_62 = &g_63;
    char *l_74 = &g_44[8][1][5];
    char **l_73[6][8][5] = {{{&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}}, {{&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}}, {{&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}}, {{&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}}, {{&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}}, {{&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}, {&l_74, (void*)0, (void*)0, &l_74, &l_74}}};
    int *l_76 = &g_63;
    unsigned short l_82 = 0x677CL;
    char *l_102 = (void*)0;
    int i, j, k;
    (*l_62) = (-10L);
    (*l_62) = func_64(func_68(p_57, (g_75 = (void*)0), l_76, (l_102 = func_77(&p_57, &g_21, (g_63 , 0xFAL), ((*l_74) = (g_42 , ((-9L) > l_82)))))), g_106[6], p_59);
    return l_62;
}







static int func_64(int * p_65, int * p_66, int p_67)
{
    volatile struct S0 *l_109 = &g_108[8];
    int *l_110 = &g_63;
    int **l_111 = &l_110;
    char **l_113 = &g_75;
    char ***l_114[6][3] = {{&l_113, &l_113, (void*)0}, {&l_113, &l_113, (void*)0}, {&l_113, &l_113, (void*)0}, {&l_113, &l_113, (void*)0}, {&l_113, &l_113, (void*)0}, {&l_113, &l_113, (void*)0}};
    int i, j;
    (*l_109) = g_108[8];
    (*g_112) = ((*l_111) = l_110);
    g_115 = l_113;
    return (**l_111);
}







static int * func_68(long long p_69, char * p_70, int * p_71, char * p_72)
{
    for (g_91 = 0; (g_91 <= 3); g_91 += 1)
    {
        (*g_105) = g_103;
    }
    return p_71;
}







static char * func_77(int * p_78, unsigned long long * p_79, unsigned char p_80, char p_81)
{
    int l_89 = 0x5D1C1BBBL;
    unsigned char *l_90 = &g_91;
    int *l_97[1][9][6] = {{{&l_89, (void*)0, &l_89, &l_89, (void*)0, &l_89}, {&l_89, (void*)0, &l_89, &l_89, (void*)0, &l_89}, {&l_89, (void*)0, &l_89, &l_89, (void*)0, &l_89}, {&l_89, (void*)0, &l_89, &l_89, (void*)0, &l_89}, {&l_89, (void*)0, &l_89, &l_89, (void*)0, &l_89}, {&l_89, (void*)0, &l_89, &l_89, (void*)0, &l_89}, {&l_89, (void*)0, &l_89, &l_89, (void*)0, &l_89}, {&l_89, (void*)0, &l_89, &l_89, (void*)0, &l_89}, {&l_89, (void*)0, &l_89, &l_89, (void*)0, &l_89}}};
    int l_98 = 0x507BCD5AL;
    int *l_100 = (void*)0;
    int i, j, k;
    (*g_86) = p_78;
    (*g_101) = ((((*l_90) = ((safe_rshift_func_uint8_t_u_u(g_63, 0)) != (+l_89))) , (g_99 = (l_98 = (safe_unary_minus_func_uint8_t_u((l_89 < (((*l_90) = (~l_89)) == ((0xBC84746BL && l_89) , (safe_mul_func_uint16_t_u_u(g_21, (safe_add_func_uint16_t_u_u(((*p_78) ^ 0x62A889E4L), p_80)))))))))))) , (*p_78));
    return l_90;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_44[i][j][k], "g_44[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_103.f0, "g_103.f0", print_hash_value);
    transparent_crc(g_103.f1, "g_103.f1", print_hash_value);
    transparent_crc(g_103.f2, "g_103.f2", print_hash_value);
    transparent_crc(g_103.f3, "g_103.f3", print_hash_value);
    transparent_crc(g_103.f4, "g_103.f4", print_hash_value);
    transparent_crc(g_103.f5, "g_103.f5", print_hash_value);
    transparent_crc(g_103.f6, "g_103.f6", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_108[i].f0, "g_108[i].f0", print_hash_value);
        transparent_crc(g_108[i].f1, "g_108[i].f1", print_hash_value);
        transparent_crc(g_108[i].f2, "g_108[i].f2", print_hash_value);
        transparent_crc(g_108[i].f3, "g_108[i].f3", print_hash_value);
        transparent_crc(g_108[i].f4, "g_108[i].f4", print_hash_value);
        transparent_crc(g_108[i].f5, "g_108[i].f5", print_hash_value);
        transparent_crc(g_108[i].f6, "g_108[i].f6", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_157[i].f0, "g_157[i].f0", print_hash_value);
        transparent_crc(g_157[i].f1, "g_157[i].f1", print_hash_value);
        transparent_crc(g_157[i].f2, "g_157[i].f2", print_hash_value);
        transparent_crc(g_157[i].f3, "g_157[i].f3", print_hash_value);
        transparent_crc(g_157[i].f4, "g_157[i].f4", print_hash_value);
        transparent_crc(g_157[i].f5, "g_157[i].f5", print_hash_value);
        transparent_crc(g_157[i].f6, "g_157[i].f6", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_171.f0, "g_171.f0", print_hash_value);
    transparent_crc(g_171.f1, "g_171.f1", print_hash_value);
    transparent_crc(g_171.f2, "g_171.f2", print_hash_value);
    transparent_crc(g_171.f3, "g_171.f3", print_hash_value);
    transparent_crc(g_171.f4, "g_171.f4", print_hash_value);
    transparent_crc(g_171.f5, "g_171.f5", print_hash_value);
    transparent_crc(g_171.f6, "g_171.f6", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_191[i], "g_191[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_194[i][j].f0, "g_194[i][j].f0", print_hash_value);
            transparent_crc(g_194[i][j].f1, "g_194[i][j].f1", print_hash_value);
            transparent_crc(g_194[i][j].f2, "g_194[i][j].f2", print_hash_value);
            transparent_crc(g_194[i][j].f3, "g_194[i][j].f3", print_hash_value);
            transparent_crc(g_194[i][j].f4, "g_194[i][j].f4", print_hash_value);
            transparent_crc(g_194[i][j].f5, "g_194[i][j].f5", print_hash_value);
            transparent_crc(g_194[i][j].f6, "g_194[i][j].f6", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_199.f0, "g_199.f0", print_hash_value);
    transparent_crc(g_199.f1, "g_199.f1", print_hash_value);
    transparent_crc(g_199.f2, "g_199.f2", print_hash_value);
    transparent_crc(g_199.f3, "g_199.f3", print_hash_value);
    transparent_crc(g_199.f4, "g_199.f4", print_hash_value);
    transparent_crc(g_199.f5, "g_199.f5", print_hash_value);
    transparent_crc(g_199.f6, "g_199.f6", print_hash_value);
    transparent_crc(g_212.f0, "g_212.f0", print_hash_value);
    transparent_crc(g_212.f1, "g_212.f1", print_hash_value);
    transparent_crc(g_212.f2, "g_212.f2", print_hash_value);
    transparent_crc(g_212.f3, "g_212.f3", print_hash_value);
    transparent_crc(g_212.f4, "g_212.f4", print_hash_value);
    transparent_crc(g_212.f5, "g_212.f5", print_hash_value);
    transparent_crc(g_212.f6, "g_212.f6", print_hash_value);
    transparent_crc(g_220.f0, "g_220.f0", print_hash_value);
    transparent_crc(g_220.f1, "g_220.f1", print_hash_value);
    transparent_crc(g_220.f2, "g_220.f2", print_hash_value);
    transparent_crc(g_220.f3, "g_220.f3", print_hash_value);
    transparent_crc(g_220.f4, "g_220.f4", print_hash_value);
    transparent_crc(g_220.f5, "g_220.f5", print_hash_value);
    transparent_crc(g_220.f6, "g_220.f6", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_223[i][j], "g_223[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_232.f0, "g_232.f0", print_hash_value);
    transparent_crc(g_232.f1, "g_232.f1", print_hash_value);
    transparent_crc(g_232.f2, "g_232.f2", print_hash_value);
    transparent_crc(g_232.f3, "g_232.f3", print_hash_value);
    transparent_crc(g_232.f4, "g_232.f4", print_hash_value);
    transparent_crc(g_232.f5, "g_232.f5", print_hash_value);
    transparent_crc(g_232.f6, "g_232.f6", print_hash_value);
    transparent_crc(g_240.f0, "g_240.f0", print_hash_value);
    transparent_crc(g_240.f1, "g_240.f1", print_hash_value);
    transparent_crc(g_240.f2, "g_240.f2", print_hash_value);
    transparent_crc(g_240.f3, "g_240.f3", print_hash_value);
    transparent_crc(g_240.f4, "g_240.f4", print_hash_value);
    transparent_crc(g_240.f5, "g_240.f5", print_hash_value);
    transparent_crc(g_240.f6, "g_240.f6", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_241[i], "g_241[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_268[i].f0, "g_268[i].f0", print_hash_value);
        transparent_crc(g_268[i].f1, "g_268[i].f1", print_hash_value);
        transparent_crc(g_268[i].f2, "g_268[i].f2", print_hash_value);
        transparent_crc(g_268[i].f3, "g_268[i].f3", print_hash_value);
        transparent_crc(g_268[i].f4, "g_268[i].f4", print_hash_value);
        transparent_crc(g_268[i].f5, "g_268[i].f5", print_hash_value);
        transparent_crc(g_268[i].f6, "g_268[i].f6", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_269.f0, "g_269.f0", print_hash_value);
    transparent_crc(g_269.f1, "g_269.f1", print_hash_value);
    transparent_crc(g_269.f2, "g_269.f2", print_hash_value);
    transparent_crc(g_269.f3, "g_269.f3", print_hash_value);
    transparent_crc(g_269.f4, "g_269.f4", print_hash_value);
    transparent_crc(g_269.f5, "g_269.f5", print_hash_value);
    transparent_crc(g_269.f6, "g_269.f6", print_hash_value);
    transparent_crc(g_301.f0, "g_301.f0", print_hash_value);
    transparent_crc(g_301.f1, "g_301.f1", print_hash_value);
    transparent_crc(g_301.f2, "g_301.f2", print_hash_value);
    transparent_crc(g_301.f3, "g_301.f3", print_hash_value);
    transparent_crc(g_301.f4, "g_301.f4", print_hash_value);
    transparent_crc(g_301.f5, "g_301.f5", print_hash_value);
    transparent_crc(g_301.f6, "g_301.f6", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_345.f0, "g_345.f0", print_hash_value);
    transparent_crc(g_345.f1, "g_345.f1", print_hash_value);
    transparent_crc(g_345.f2, "g_345.f2", print_hash_value);
    transparent_crc(g_345.f3, "g_345.f3", print_hash_value);
    transparent_crc(g_345.f4, "g_345.f4", print_hash_value);
    transparent_crc(g_345.f5, "g_345.f5", print_hash_value);
    transparent_crc(g_345.f6, "g_345.f6", print_hash_value);
    transparent_crc(g_346.f0, "g_346.f0", print_hash_value);
    transparent_crc(g_346.f1, "g_346.f1", print_hash_value);
    transparent_crc(g_346.f2, "g_346.f2", print_hash_value);
    transparent_crc(g_346.f3, "g_346.f3", print_hash_value);
    transparent_crc(g_346.f4, "g_346.f4", print_hash_value);
    transparent_crc(g_346.f5, "g_346.f5", print_hash_value);
    transparent_crc(g_346.f6, "g_346.f6", print_hash_value);
    transparent_crc(g_347.f0, "g_347.f0", print_hash_value);
    transparent_crc(g_347.f1, "g_347.f1", print_hash_value);
    transparent_crc(g_347.f2, "g_347.f2", print_hash_value);
    transparent_crc(g_347.f3, "g_347.f3", print_hash_value);
    transparent_crc(g_347.f4, "g_347.f4", print_hash_value);
    transparent_crc(g_347.f5, "g_347.f5", print_hash_value);
    transparent_crc(g_347.f6, "g_347.f6", print_hash_value);
    transparent_crc(g_354.f0, "g_354.f0", print_hash_value);
    transparent_crc(g_354.f1, "g_354.f1", print_hash_value);
    transparent_crc(g_354.f2, "g_354.f2", print_hash_value);
    transparent_crc(g_354.f3, "g_354.f3", print_hash_value);
    transparent_crc(g_354.f4, "g_354.f4", print_hash_value);
    transparent_crc(g_354.f5, "g_354.f5", print_hash_value);
    transparent_crc(g_354.f6, "g_354.f6", print_hash_value);
    transparent_crc(g_381.f0, "g_381.f0", print_hash_value);
    transparent_crc(g_381.f1, "g_381.f1", print_hash_value);
    transparent_crc(g_381.f2, "g_381.f2", print_hash_value);
    transparent_crc(g_381.f3, "g_381.f3", print_hash_value);
    transparent_crc(g_381.f4, "g_381.f4", print_hash_value);
    transparent_crc(g_381.f5, "g_381.f5", print_hash_value);
    transparent_crc(g_381.f6, "g_381.f6", print_hash_value);
    transparent_crc(g_383.f0, "g_383.f0", print_hash_value);
    transparent_crc(g_383.f1, "g_383.f1", print_hash_value);
    transparent_crc(g_383.f2, "g_383.f2", print_hash_value);
    transparent_crc(g_383.f3, "g_383.f3", print_hash_value);
    transparent_crc(g_383.f4, "g_383.f4", print_hash_value);
    transparent_crc(g_383.f5, "g_383.f5", print_hash_value);
    transparent_crc(g_383.f6, "g_383.f6", print_hash_value);
    transparent_crc(g_386.f0, "g_386.f0", print_hash_value);
    transparent_crc(g_386.f1, "g_386.f1", print_hash_value);
    transparent_crc(g_386.f2, "g_386.f2", print_hash_value);
    transparent_crc(g_386.f3, "g_386.f3", print_hash_value);
    transparent_crc(g_386.f4, "g_386.f4", print_hash_value);
    transparent_crc(g_386.f5, "g_386.f5", print_hash_value);
    transparent_crc(g_386.f6, "g_386.f6", print_hash_value);
    transparent_crc(g_425.f0, "g_425.f0", print_hash_value);
    transparent_crc(g_425.f1, "g_425.f1", print_hash_value);
    transparent_crc(g_425.f2, "g_425.f2", print_hash_value);
    transparent_crc(g_425.f3, "g_425.f3", print_hash_value);
    transparent_crc(g_425.f4, "g_425.f4", print_hash_value);
    transparent_crc(g_425.f5, "g_425.f5", print_hash_value);
    transparent_crc(g_425.f6, "g_425.f6", print_hash_value);
    transparent_crc(g_448.f0, "g_448.f0", print_hash_value);
    transparent_crc(g_448.f1, "g_448.f1", print_hash_value);
    transparent_crc(g_448.f2, "g_448.f2", print_hash_value);
    transparent_crc(g_448.f3, "g_448.f3", print_hash_value);
    transparent_crc(g_448.f4, "g_448.f4", print_hash_value);
    transparent_crc(g_448.f5, "g_448.f5", print_hash_value);
    transparent_crc(g_448.f6, "g_448.f6", print_hash_value);
    transparent_crc(g_573.f0, "g_573.f0", print_hash_value);
    transparent_crc(g_573.f1, "g_573.f1", print_hash_value);
    transparent_crc(g_573.f2, "g_573.f2", print_hash_value);
    transparent_crc(g_573.f3, "g_573.f3", print_hash_value);
    transparent_crc(g_573.f4, "g_573.f4", print_hash_value);
    transparent_crc(g_573.f5, "g_573.f5", print_hash_value);
    transparent_crc(g_573.f6, "g_573.f6", print_hash_value);
    transparent_crc(g_656.f0, "g_656.f0", print_hash_value);
    transparent_crc(g_656.f1, "g_656.f1", print_hash_value);
    transparent_crc(g_656.f2, "g_656.f2", print_hash_value);
    transparent_crc(g_656.f3, "g_656.f3", print_hash_value);
    transparent_crc(g_656.f4, "g_656.f4", print_hash_value);
    transparent_crc(g_656.f5, "g_656.f5", print_hash_value);
    transparent_crc(g_656.f6, "g_656.f6", print_hash_value);
    transparent_crc(g_657.f0, "g_657.f0", print_hash_value);
    transparent_crc(g_657.f1, "g_657.f1", print_hash_value);
    transparent_crc(g_657.f2, "g_657.f2", print_hash_value);
    transparent_crc(g_657.f3, "g_657.f3", print_hash_value);
    transparent_crc(g_657.f4, "g_657.f4", print_hash_value);
    transparent_crc(g_657.f5, "g_657.f5", print_hash_value);
    transparent_crc(g_657.f6, "g_657.f6", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_661[i][j][k].f0, "g_661[i][j][k].f0", print_hash_value);
                transparent_crc(g_661[i][j][k].f1, "g_661[i][j][k].f1", print_hash_value);
                transparent_crc(g_661[i][j][k].f2, "g_661[i][j][k].f2", print_hash_value);
                transparent_crc(g_661[i][j][k].f3, "g_661[i][j][k].f3", print_hash_value);
                transparent_crc(g_661[i][j][k].f4, "g_661[i][j][k].f4", print_hash_value);
                transparent_crc(g_661[i][j][k].f5, "g_661[i][j][k].f5", print_hash_value);
                transparent_crc(g_661[i][j][k].f6, "g_661[i][j][k].f6", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_663.f0, "g_663.f0", print_hash_value);
    transparent_crc(g_663.f1, "g_663.f1", print_hash_value);
    transparent_crc(g_663.f2, "g_663.f2", print_hash_value);
    transparent_crc(g_663.f3, "g_663.f3", print_hash_value);
    transparent_crc(g_663.f4, "g_663.f4", print_hash_value);
    transparent_crc(g_663.f5, "g_663.f5", print_hash_value);
    transparent_crc(g_663.f6, "g_663.f6", print_hash_value);
    transparent_crc(g_667.f0, "g_667.f0", print_hash_value);
    transparent_crc(g_667.f1, "g_667.f1", print_hash_value);
    transparent_crc(g_667.f2, "g_667.f2", print_hash_value);
    transparent_crc(g_667.f3, "g_667.f3", print_hash_value);
    transparent_crc(g_667.f4, "g_667.f4", print_hash_value);
    transparent_crc(g_667.f5, "g_667.f5", print_hash_value);
    transparent_crc(g_667.f6, "g_667.f6", print_hash_value);
    transparent_crc(g_671, "g_671", print_hash_value);
    transparent_crc(g_672.f0, "g_672.f0", print_hash_value);
    transparent_crc(g_672.f1, "g_672.f1", print_hash_value);
    transparent_crc(g_672.f2, "g_672.f2", print_hash_value);
    transparent_crc(g_672.f3, "g_672.f3", print_hash_value);
    transparent_crc(g_672.f4, "g_672.f4", print_hash_value);
    transparent_crc(g_672.f5, "g_672.f5", print_hash_value);
    transparent_crc(g_672.f6, "g_672.f6", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_680[i][j][k].f0, "g_680[i][j][k].f0", print_hash_value);
                transparent_crc(g_680[i][j][k].f1, "g_680[i][j][k].f1", print_hash_value);
                transparent_crc(g_680[i][j][k].f2, "g_680[i][j][k].f2", print_hash_value);
                transparent_crc(g_680[i][j][k].f3, "g_680[i][j][k].f3", print_hash_value);
                transparent_crc(g_680[i][j][k].f4, "g_680[i][j][k].f4", print_hash_value);
                transparent_crc(g_680[i][j][k].f5, "g_680[i][j][k].f5", print_hash_value);
                transparent_crc(g_680[i][j][k].f6, "g_680[i][j][k].f6", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_681.f0, "g_681.f0", print_hash_value);
    transparent_crc(g_681.f1, "g_681.f1", print_hash_value);
    transparent_crc(g_681.f2, "g_681.f2", print_hash_value);
    transparent_crc(g_681.f3, "g_681.f3", print_hash_value);
    transparent_crc(g_681.f4, "g_681.f4", print_hash_value);
    transparent_crc(g_681.f5, "g_681.f5", print_hash_value);
    transparent_crc(g_681.f6, "g_681.f6", print_hash_value);
    transparent_crc(g_687.f0, "g_687.f0", print_hash_value);
    transparent_crc(g_687.f1, "g_687.f1", print_hash_value);
    transparent_crc(g_687.f2, "g_687.f2", print_hash_value);
    transparent_crc(g_687.f3, "g_687.f3", print_hash_value);
    transparent_crc(g_687.f4, "g_687.f4", print_hash_value);
    transparent_crc(g_687.f5, "g_687.f5", print_hash_value);
    transparent_crc(g_687.f6, "g_687.f6", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_691[i], "g_691[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
