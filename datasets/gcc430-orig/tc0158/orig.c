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



static int g_21 = (-1L);
static int g_58[1][1] = {{(-1L)}};
static volatile unsigned char g_62 = 1UL;
static volatile unsigned char *g_61 = &g_62;
static unsigned char *g_63 = (void*)0;
static unsigned char g_65 = 0xA9L;
static int g_78 = 0x719BD953L;
static long long g_85 = 0x98AFBB1CA9823142LL;
static volatile int g_112[8][3][10] = {{{(-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL}, {(-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL}, {(-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL}}, {{(-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL}, {(-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL}, {(-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL}}, {{(-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL}, {(-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL}, {(-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL}}, {{(-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL}, {(-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL}, {(-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL}}, {{(-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL}, {(-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL}, {(-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL}}, {{(-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL}, {(-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL}, {(-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL}}, {{(-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL}, {(-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL}, {(-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL}}, {{(-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL}, {(-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL}, {(-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL, (-1L), 0x8A88EB8BL}}};
static volatile int *g_111 = &g_112[3][1][6];
static volatile int * volatile *g_110 = &g_111;
static int *g_119 = &g_58[0][0];
static int * volatile *g_118 = &g_119;
static volatile int **g_139 = &g_111;
static volatile int *** volatile g_138[9][7] = {{(void*)0, (void*)0, &g_139, &g_139, &g_139, &g_139, &g_139}, {(void*)0, (void*)0, &g_139, &g_139, &g_139, &g_139, &g_139}, {(void*)0, (void*)0, &g_139, &g_139, &g_139, &g_139, &g_139}, {(void*)0, (void*)0, &g_139, &g_139, &g_139, &g_139, &g_139}, {(void*)0, (void*)0, &g_139, &g_139, &g_139, &g_139, &g_139}, {(void*)0, (void*)0, &g_139, &g_139, &g_139, &g_139, &g_139}, {(void*)0, (void*)0, &g_139, &g_139, &g_139, &g_139, &g_139}, {(void*)0, (void*)0, &g_139, &g_139, &g_139, &g_139, &g_139}, {(void*)0, (void*)0, &g_139, &g_139, &g_139, &g_139, &g_139}};
static volatile int *** volatile g_140 = &g_139;
static unsigned g_147 = 18446744073709551614UL;
static unsigned long long g_149 = 0x7D20874A55526D78LL;
static short g_152[3] = {0x3B62L, 0x3B62L, 0x3B62L};
static unsigned char g_168 = 0x89L;
static unsigned short g_183[1][6] = {{4UL, 0x3706L, 4UL, 0x3706L, 4UL, 0x3706L}};
static unsigned short g_200 = 0x028DL;
static unsigned g_201 = 0UL;
static unsigned char g_202 = 255UL;
static int *g_204 = (void*)0;
static int ** volatile g_203[7][7] = {{&g_204, &g_204, (void*)0, &g_204, (void*)0, &g_204, (void*)0}, {&g_204, &g_204, (void*)0, &g_204, (void*)0, &g_204, (void*)0}, {&g_204, &g_204, (void*)0, &g_204, (void*)0, &g_204, (void*)0}, {&g_204, &g_204, (void*)0, &g_204, (void*)0, &g_204, (void*)0}, {&g_204, &g_204, (void*)0, &g_204, (void*)0, &g_204, (void*)0}, {&g_204, &g_204, (void*)0, &g_204, (void*)0, &g_204, (void*)0}, {&g_204, &g_204, (void*)0, &g_204, (void*)0, &g_204, (void*)0}};
static int ** volatile g_225 = &g_204;
static unsigned g_284[10][9] = {{1UL, 4UL, 0x07EB25A5L, 0xDCD15B84L, 0xB4A2E471L, 4294967295UL, 0UL, 0UL, 4294967295UL}, {1UL, 4UL, 0x07EB25A5L, 0xDCD15B84L, 0xB4A2E471L, 4294967295UL, 0UL, 0UL, 4294967295UL}, {1UL, 4UL, 0x07EB25A5L, 0xDCD15B84L, 0xB4A2E471L, 4294967295UL, 0UL, 0UL, 4294967295UL}, {1UL, 4UL, 0x07EB25A5L, 0xDCD15B84L, 0xB4A2E471L, 4294967295UL, 0UL, 0UL, 4294967295UL}, {1UL, 4UL, 0x07EB25A5L, 0xDCD15B84L, 0xB4A2E471L, 4294967295UL, 0UL, 0UL, 4294967295UL}, {1UL, 4UL, 0x07EB25A5L, 0xDCD15B84L, 0xB4A2E471L, 4294967295UL, 0UL, 0UL, 4294967295UL}, {1UL, 4UL, 0x07EB25A5L, 0xDCD15B84L, 0xB4A2E471L, 4294967295UL, 0UL, 0UL, 4294967295UL}, {1UL, 4UL, 0x07EB25A5L, 0xDCD15B84L, 0xB4A2E471L, 4294967295UL, 0UL, 0UL, 4294967295UL}, {1UL, 4UL, 0x07EB25A5L, 0xDCD15B84L, 0xB4A2E471L, 4294967295UL, 0UL, 0UL, 4294967295UL}, {1UL, 4UL, 0x07EB25A5L, 0xDCD15B84L, 0xB4A2E471L, 4294967295UL, 0UL, 0UL, 4294967295UL}};
static int ** volatile g_315 = &g_204;
static long long *g_324[1] = {&g_85};
static long long **g_323 = &g_324[0];
static long long **g_329 = (void*)0;
static unsigned g_340 = 0xDE01071DL;
static int ** volatile g_342[2][5] = {{(void*)0, (void*)0, &g_204, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_204, (void*)0, (void*)0}};
static int ** volatile g_348[6][10] = {{&g_204, &g_204, &g_204, &g_204, (void*)0, &g_204, &g_204, &g_204, &g_204, &g_204}, {&g_204, &g_204, &g_204, &g_204, (void*)0, &g_204, &g_204, &g_204, &g_204, &g_204}, {&g_204, &g_204, &g_204, &g_204, (void*)0, &g_204, &g_204, &g_204, &g_204, &g_204}, {&g_204, &g_204, &g_204, &g_204, (void*)0, &g_204, &g_204, &g_204, &g_204, &g_204}, {&g_204, &g_204, &g_204, &g_204, (void*)0, &g_204, &g_204, &g_204, &g_204, &g_204}, {&g_204, &g_204, &g_204, &g_204, (void*)0, &g_204, &g_204, &g_204, &g_204, &g_204}};
static int ** volatile g_375[5] = {&g_204, &g_204, &g_204, &g_204, &g_204};
static int ** volatile g_376 = &g_204;
static char g_378 = 9L;
static int ** volatile g_397 = (void*)0;
static int *g_415 = &g_78;
static int ** volatile g_414 = &g_415;
static int ** volatile g_418 = (void*)0;
static int g_434 = 0L;
static int g_436[6] = {0x83EE477EL, 0x83EE477EL, (-8L), 0x83EE477EL, 0x83EE477EL, (-8L)};
static int ** volatile g_459 = &g_204;
static unsigned g_468 = 0x0572C180L;
static unsigned *g_490 = &g_284[0][7];
static unsigned **g_489 = &g_490;
static volatile unsigned char ** volatile g_521 = &g_61;
static volatile unsigned char ** volatile * volatile g_520 = &g_521;
static unsigned long long g_570 = 2UL;
static volatile unsigned g_580 = 0xE80F89DCL;
static short g_599 = 0x8423L;
static char *g_623[9][3][9] = {{{&g_378, &g_378, (void*)0, (void*)0, &g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, (void*)0, (void*)0, &g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, (void*)0, (void*)0, &g_378, &g_378, &g_378, &g_378, &g_378}}, {{&g_378, &g_378, (void*)0, (void*)0, &g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, (void*)0, (void*)0, &g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, (void*)0, (void*)0, &g_378, &g_378, &g_378, &g_378, &g_378}}, {{&g_378, &g_378, (void*)0, (void*)0, &g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, (void*)0, (void*)0, &g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, (void*)0, (void*)0, &g_378, &g_378, &g_378, &g_378, &g_378}}, {{&g_378, &g_378, (void*)0, (void*)0, &g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, (void*)0, (void*)0, &g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, (void*)0, (void*)0, &g_378, &g_378, &g_378, &g_378, &g_378}}, {{&g_378, &g_378, (void*)0, (void*)0, &g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, (void*)0, (void*)0, &g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, (void*)0, (void*)0, &g_378, &g_378, &g_378, &g_378, &g_378}}, {{&g_378, &g_378, (void*)0, (void*)0, &g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, (void*)0, (void*)0, &g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, (void*)0, (void*)0, &g_378, &g_378, &g_378, &g_378, &g_378}}, {{&g_378, &g_378, (void*)0, (void*)0, &g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, (void*)0, (void*)0, &g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, (void*)0, (void*)0, &g_378, &g_378, &g_378, &g_378, &g_378}}, {{&g_378, &g_378, (void*)0, (void*)0, &g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, (void*)0, (void*)0, &g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, (void*)0, (void*)0, &g_378, &g_378, &g_378, &g_378, &g_378}}, {{&g_378, &g_378, (void*)0, (void*)0, &g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, (void*)0, (void*)0, &g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, (void*)0, (void*)0, &g_378, &g_378, &g_378, &g_378, &g_378}}};
static char **g_622 = &g_623[6][0][6];
static char *** volatile g_621 = &g_622;
static unsigned char g_707 = 0x37L;
static int g_708 = 0x7664CEDCL;
static int ** volatile g_738 = &g_204;
static int * volatile g_740 = &g_436[4];
static int * volatile g_754 = (void*)0;
static int * volatile g_755[3][1][9] = {{{&g_436[0], &g_436[5], (void*)0, &g_436[5], &g_436[0], &g_708, &g_436[0], &g_436[5], (void*)0}}, {{&g_436[0], &g_436[5], (void*)0, &g_436[5], &g_436[0], &g_708, &g_436[0], &g_436[5], (void*)0}}, {{&g_436[0], &g_436[5], (void*)0, &g_436[5], &g_436[0], &g_708, &g_436[0], &g_436[5], (void*)0}}};
static int * volatile g_799 = &g_78;
static int g_816 = 1L;
static int ** volatile g_878 = &g_204;
static volatile unsigned short g_926[9] = {65535UL, 65535UL, 65535UL, 65535UL, 65535UL, 65535UL, 65535UL, 65535UL, 65535UL};
static volatile unsigned short *g_925[7][6][3] = {{{&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}}, {{&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}}, {{&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}}, {{&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}}, {{&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}}, {{&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}}, {{&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}, {&g_926[6], &g_926[2], (void*)0}}};
static volatile unsigned short ** volatile g_924 = &g_925[4][5][1];
static volatile unsigned short ** volatile *g_923 = &g_924;
static int * volatile g_934 = &g_708;



static unsigned char func_1(void);
static char func_4(unsigned p_5, unsigned long long p_6, unsigned char p_7);
static short func_10(char p_11);
static unsigned char func_12(int p_13, int p_14);
static int func_15(char p_16, unsigned long long p_17, unsigned p_18, unsigned p_19, unsigned long long p_20);
static unsigned short func_25(int p_26);
static int * func_31(unsigned char p_32, unsigned char p_33, int p_34, short p_35);
static unsigned char * func_36(unsigned char * p_37, unsigned p_38, unsigned char * p_39, unsigned p_40, int * p_41);
static unsigned func_44(long long p_45, unsigned p_46, short p_47, unsigned char ** p_48);
static long long func_51(unsigned p_52, unsigned char ** p_53, unsigned p_54, unsigned char p_55);
static unsigned char func_1(void)
{
    unsigned l_22[10][2][5] = {{{0xE4145C17L, 4294967294UL, 0x68807383L, 0x5A40F2FDL, 0x065C829EL}, {0xE4145C17L, 4294967294UL, 0x68807383L, 0x5A40F2FDL, 0x065C829EL}}, {{0xE4145C17L, 4294967294UL, 0x68807383L, 0x5A40F2FDL, 0x065C829EL}, {0xE4145C17L, 4294967294UL, 0x68807383L, 0x5A40F2FDL, 0x065C829EL}}, {{0xE4145C17L, 4294967294UL, 0x68807383L, 0x5A40F2FDL, 0x065C829EL}, {0xE4145C17L, 4294967294UL, 0x68807383L, 0x5A40F2FDL, 0x065C829EL}}, {{0xE4145C17L, 4294967294UL, 0x68807383L, 0x5A40F2FDL, 0x065C829EL}, {0xE4145C17L, 4294967294UL, 0x68807383L, 0x5A40F2FDL, 0x065C829EL}}, {{0xE4145C17L, 4294967294UL, 0x68807383L, 0x5A40F2FDL, 0x065C829EL}, {0xE4145C17L, 4294967294UL, 0x68807383L, 0x5A40F2FDL, 0x065C829EL}}, {{0xE4145C17L, 4294967294UL, 0x68807383L, 0x5A40F2FDL, 0x065C829EL}, {0xE4145C17L, 4294967294UL, 0x68807383L, 0x5A40F2FDL, 0x065C829EL}}, {{0xE4145C17L, 4294967294UL, 0x68807383L, 0x5A40F2FDL, 0x065C829EL}, {0xE4145C17L, 4294967294UL, 0x68807383L, 0x5A40F2FDL, 0x065C829EL}}, {{0xE4145C17L, 4294967294UL, 0x68807383L, 0x5A40F2FDL, 0x065C829EL}, {0xE4145C17L, 4294967294UL, 0x68807383L, 0x5A40F2FDL, 0x065C829EL}}, {{0xE4145C17L, 4294967294UL, 0x68807383L, 0x5A40F2FDL, 0x065C829EL}, {0xE4145C17L, 4294967294UL, 0x68807383L, 0x5A40F2FDL, 0x065C829EL}}, {{0xE4145C17L, 4294967294UL, 0x68807383L, 0x5A40F2FDL, 0x065C829EL}, {0xE4145C17L, 4294967294UL, 0x68807383L, 0x5A40F2FDL, 0x065C829EL}}};
    int l_776[8];
    unsigned char l_779 = 0x68L;
    unsigned l_780 = 4UL;
    char *l_785 = &g_378;
    int l_836 = 0xA7EDAB82L;
    unsigned char l_847[4] = {0x1CL, 0x60L, 0x1CL, 0x60L};
    int *l_848 = &g_436[5];
    short l_851 = 0x352EL;
    long long *l_852 = &g_85;
    unsigned long long *l_853 = &g_149;
    int **l_938 = &g_415;
    int ***l_937 = &l_938;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_776[i] = 8L;
    l_776[7] = ((0x32B1CECBL ^ (safe_add_func_int8_t_s_s(func_4((((safe_sub_func_int16_t_s_s(func_10((func_12(func_15(g_21, g_21, l_22[5][1][3], l_22[4][1][2], l_22[5][0][1]), g_21) , l_22[5][1][3])), (-9L))) & 2UL) ^ 5UL), g_708, l_22[4][0][2]), 255UL))) > l_22[5][1][3]);

    ;
    ;
    ;
    ;

    if ((func_4((l_776[7] | ((((l_776[0] && (((*l_785) = ((+(((safe_div_func_int32_t_s_s(l_779, l_780)) , l_780) ^ ((**g_489) , (l_22[5][1][3] == (**g_521))))) < (safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((g_340 != l_22[5][1][3]), l_776[6])), (**g_489))))) , 0xEDB41087L)) >= l_776[7]) && l_22[8][0][1]) , 0L)), l_779, l_22[5][1][3]) == 0x8E10L))
    {
        short l_795 = 0x3D78L;
        int **l_798[5][1] = {{&g_119}, {&g_119}, {&g_119}, {&g_119}, {&g_119}};
        long long *l_814[8] = {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85};
        long long l_817 = 0L;
        unsigned short *l_835 = (void*)0;
        unsigned short **l_834 = &l_835;
        int i, j;
        (*g_110) = (void*)0;

        ;
        for (g_468 = 0; (g_468 >= 1); g_468 = safe_add_func_uint8_t_u_u(g_468, 4))
        {
            char l_788 = 0xC8L;
            return l_788;
        }
        if ((safe_sub_func_uint64_t_u_u((((safe_div_func_int32_t_s_s((-1L), (**g_489))) < (l_795 == func_4(g_340, l_776[6], (safe_div_func_int32_t_s_s(((g_201 ^ ((&g_119 == l_798[4][0]) & l_776[6])) && l_776[7]), l_776[7]))))) ^ (**g_489)), g_200)))
        {
            (*g_799) = l_780;
        }
        else
        {
            int *l_804 = &g_21;
            int l_809 = 0x539AE094L;
            int *l_815 = &l_776[4];
            unsigned short **l_832 = (void*)0;
            int l_837[5] = {0xDFFE81CBL, 0x3431A5F6L, 0xDFFE81CBL, 0x3431A5F6L, 0xDFFE81CBL};
            short l_844[5][3][8] = {{{0x5106L, 0x2A21L, (-3L), 0xBDF8L, 0xA50FL, 1L, 0x41C8L, 0L}, {0x5106L, 0x2A21L, (-3L), 0xBDF8L, 0xA50FL, 1L, 0x41C8L, 0L}, {0x5106L, 0x2A21L, (-3L), 0xBDF8L, 0xA50FL, 1L, 0x41C8L, 0L}}, {{0x5106L, 0x2A21L, (-3L), 0xBDF8L, 0xA50FL, 1L, 0x41C8L, 0L}, {0x5106L, 0x2A21L, (-3L), 0xBDF8L, 0xA50FL, 1L, 0x41C8L, 0L}, {0x5106L, 0x2A21L, (-3L), 0xBDF8L, 0xA50FL, 1L, 0x41C8L, 0L}}, {{0x5106L, 0x2A21L, (-3L), 0xBDF8L, 0xA50FL, 1L, 0x41C8L, 0L}, {0x5106L, 0x2A21L, (-3L), 0xBDF8L, 0xA50FL, 1L, 0x41C8L, 0L}, {0x5106L, 0x2A21L, (-3L), 0xBDF8L, 0xA50FL, 1L, 0x41C8L, 0L}}, {{0x5106L, 0x2A21L, (-3L), 0xBDF8L, 0xA50FL, 1L, 0x41C8L, 0L}, {0x5106L, 0x2A21L, (-3L), 0xBDF8L, 0xA50FL, 1L, 0x41C8L, 0L}, {0x5106L, 0x2A21L, (-3L), 0xBDF8L, 0xA50FL, 1L, 0x41C8L, 0L}}, {{0x5106L, 0x2A21L, (-3L), 0xBDF8L, 0xA50FL, 1L, 0x41C8L, 0L}, {0x5106L, 0x2A21L, (-3L), 0xBDF8L, 0xA50FL, 1L, 0x41C8L, 0L}, {0x5106L, 0x2A21L, (-3L), 0xBDF8L, 0xA50FL, 1L, 0x41C8L, 0L}}};
            unsigned char **l_845 = &g_63;
            int i, j, k;
            if ((safe_lshift_func_uint8_t_u_s((g_65 = (safe_add_func_int64_t_s_s(((void*)0 == l_804), g_580))), ((safe_lshift_func_uint16_t_u_s(((((safe_lshift_func_uint16_t_u_s(l_809, ((l_795 , (((l_22[0][0][1] && ((*l_815) = (safe_mod_func_int8_t_s_s((-8L), (safe_lshift_func_int8_t_s_u((((*g_323) = (*g_323)) != l_814[6]), 6)))))) & l_22[5][1][3]) > l_22[7][1][4])) >= g_202))) >= g_816) != l_795) & 1UL), 10)) ^ 0x8BL))))
            {
                (*g_459) = (*g_225);
                l_817 = (-6L);
                l_776[5] = (*g_799);
            }
            else
            {
                unsigned short ***l_833 = &l_832;
                short *l_842 = &g_152[1];
                int l_843[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_843[i] = 0x80B13414L;
                (*l_815) = (*l_815);
                (*l_815) = (safe_sub_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((***g_520), l_776[4])) ^ 0xD5L), 0x5548D97EL));
            }
            l_836 = l_795;
            (*l_815) = (*l_815);
        }
    }
    else
    {
        long long l_846 = 0x6CE59ED69AE7DD68LL;
        return l_846;
    }

    ;
    if (func_4((((*l_848) = l_847[2]) & ((**g_489) <= (g_183[0][3] || (safe_add_func_int64_t_s_s(l_851, ((*g_323) == l_852)))))), ((*l_853) = g_378), (safe_add_func_uint64_t_u_u(g_707, ((!(safe_div_func_uint64_t_u_u(g_85, 0x7F57099DC12806C9LL))) | g_202)))))
    {
        int *l_861[5] = {&g_436[5], &g_436[5], &g_436[5], &g_436[5], &g_436[5]};
        unsigned l_909 = 0x54CCA4D9L;
        int i;
        for (g_65 = 0; (g_65 == 16); g_65++)
        {
            long long l_860 = (-6L);
            int **l_862[3][4][6] = {{{&g_415, &g_415, &l_861[0], &g_415, &g_415, &l_861[0]}, {&g_415, &g_415, &l_861[0], &g_415, &g_415, &l_861[0]}, {&g_415, &g_415, &l_861[0], &g_415, &g_415, &l_861[0]}, {&g_415, &g_415, &l_861[0], &g_415, &g_415, &l_861[0]}}, {{&g_415, &g_415, &l_861[0], &g_415, &g_415, &l_861[0]}, {&g_415, &g_415, &l_861[0], &g_415, &g_415, &l_861[0]}, {&g_415, &g_415, &l_861[0], &g_415, &g_415, &l_861[0]}, {&g_415, &g_415, &l_861[0], &g_415, &g_415, &l_861[0]}}, {{&g_415, &g_415, &l_861[0], &g_415, &g_415, &l_861[0]}, {&g_415, &g_415, &l_861[0], &g_415, &g_415, &l_861[0]}, {&g_415, &g_415, &l_861[0], &g_415, &g_415, &l_861[0]}, {&g_415, &g_415, &l_861[0], &g_415, &g_415, &l_861[0]}}};
            int i, j, k;
            if (l_860)
                break;
            l_848 = l_861[2];
        }
        for (g_200 = (-29); (g_200 != 57); ++g_200)
        {
            int **l_869 = (void*)0;
            int ***l_868 = &l_869;
            unsigned l_910 = 0xC9A6BDC4L;
            unsigned l_917 = 0x5B8FFF98L;
            for (g_707 = 0; (g_707 < 18); g_707++)
            {
                unsigned short l_867 = 65535UL;
                long long l_872 = 1L;
                int *l_877 = &g_708;
                int l_904 = 0x27FA608DL;
                if ((((((1UL < (0UL >= 0xB30BL)) , (*l_848)) < (0xFE3ACBA2L & (+func_10((*l_848))))) , ((((void*)0 == (**g_140)) , l_867) , (void*)0)) != l_868))
                {
                    int l_873 = 0x6D046DA2L;
                    short *l_874 = &l_851;
                    (*g_414) = func_31((**g_521), (((*g_490) = ((l_867 == (safe_rshift_func_int16_t_s_s(((*l_874) = ((l_872 , ((l_873 = (g_468 || g_201)) , (l_873 , 8UL))) , g_152[0])), 5))) || ((safe_div_func_uint16_t_u_u(g_58[0][0], l_873)) , l_872))) == 0x21E17D08L), l_872, g_434);
                    for (g_201 = 0; (g_201 <= 2); g_201 += 1)
                    {
                        (*g_878) = l_877;

                        ;
                    }

                    ;
                    for (l_851 = 0; (l_851 <= 12); l_851++)
                    {
                        (*g_139) = (void*)0;
                        return (*l_848);
                    }
                    if ((*g_740))
                        continue;
                }
                else
                {
                    unsigned l_903 = 0xBDBB3DAAL;
                    int l_905[10] = {(-2L), (-2L), 1L, (-2L), (-2L), 1L, (-2L), (-2L), 1L, (-2L)};
                    int *l_908 = (void*)0;
                    int i;
                    for (g_149 = 0; (g_149 <= 2); g_149 += 1)
                    {
                        int i;
                        (*g_376) = &g_436[(g_149 + 2)];

                        ;
                        if ((*g_799))
                            continue;
                        l_905[3] = ((safe_lshift_func_uint8_t_u_s(func_10((((((**g_323) = (safe_lshift_func_uint16_t_u_u(g_434, g_62))) | (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_u(((*g_490) < (safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((((((*l_848) ^ g_436[(g_149 + 2)]) , (l_904 = ((*l_848) = ((safe_mod_func_uint64_t_u_u(((((safe_rshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u((g_183[0][5] = ((~(*l_848)) && (l_903 >= (*l_848)))), 13)) == ((*l_877) = (*g_204))), (*g_204))), 0)) && g_436[g_149]) ^ (*g_204)) , 1UL), 0xEF1D50BC12726041LL)) == 0x5454DB5F78C0208CLL)))) , g_436[g_149]) < g_58[0][0]), l_903)), 11))), l_903)) <= 0xE258L), g_284[6][4]))) != 4L) , (-7L))), 1)) == (-6L));

                        ;
                        (*g_315) = (void*)0;
                    }

                    ;
                    l_908 = ((safe_lshift_func_uint8_t_u_s((*l_877), 2)) , (void*)0);
                }
            }

            ;
            (*l_848) = l_909;
            if (l_910)
                break;
            if (((0x4B1842B6BBBE535BLL != ((*l_853) = func_4(((((-3L) | (g_816 | (safe_sub_func_int16_t_s_s((g_284[6][4] == (safe_div_func_int64_t_s_s(((*l_852) = func_51((*g_490), &g_63, (*g_490), (**g_521))), g_202))), (*l_848))))) <= (*l_848)) > g_168), (*l_848), g_434))) <= 1UL))
            {
                char l_915 = (-10L);
                unsigned long long l_916[5];
                int **l_918 = &g_415;
                int i;
                for (i = 0; i < 5; i++)
                    l_916[i] = 1UL;
                (*g_414) = (((*g_119) = (((l_915 = ((**g_489) <= 4294967295UL)) && ((0xABB0DDE0E265F0E6LL > ((**g_323) = (((0xA16D006C6C581255LL & 0UL) || l_916[2]) || (l_917 && (((*l_853) = ((g_570 & g_708) < 0xD5041B7DL)) , 0x89D8L))))) <= (*g_490))) & l_916[2])) , &l_776[7]);

                ;
                (*l_918) = (l_861[0] = (void*)0);

                ;
            }
            else
            {
                unsigned short *l_922 = &g_200;
                unsigned short **l_921[1][2][9] = {{{&l_922, &l_922, &l_922, &l_922, &l_922, &l_922, &l_922, &l_922, &l_922}, {&l_922, &l_922, &l_922, &l_922, &l_922, &l_922, &l_922, &l_922, &l_922}}};
                unsigned short ***l_920[10] = {(void*)0, (void*)0, &l_921[0][0][8], (void*)0, (void*)0, &l_921[0][0][8], (void*)0, (void*)0, &l_921[0][0][8], (void*)0};
                unsigned short ****l_919 = &l_920[5];
                int l_929 = 0xA110E84CL;
                int i, j, k;
                (*l_848) = (((*l_919) = (void*)0) == g_923);
                for (g_570 = 0; (g_570 <= 38); g_570 = safe_add_func_uint8_t_u_u(g_570, 7))
                {
                    return l_929;
                }
            }

            ;
        }

        ;

    }
    else
    {
        short l_932 = 0x1837L;
        int l_933 = (-1L);
        int **l_936 = &l_848;
        int ***l_935 = &l_936;
        unsigned char l_939[1];
        int i;
        for (i = 0; i < 1; i++)
            l_939[i] = 0xCBL;
        (*l_848) = (safe_mod_func_int16_t_s_s((*l_848), l_932));
        l_933 = 0L;
        (*g_934) = ((*l_848) = (*l_848));
        l_939[0] = ((l_935 = (void*)0) != l_937);

        ;
    }

    ;
    return (*l_848);
}







static char func_4(unsigned p_5, unsigned long long p_6, unsigned char p_7)
{
    int l_730 = (-1L);
    unsigned char **l_735 = &g_63;
    int l_741 = 0x55271942L;
    unsigned short *l_745 = &g_183[0][1];
    unsigned short **l_744 = &l_745;
    int l_752 = 0x25B8E054L;
    int **l_775[9] = {&g_204, &g_415, &g_204, &g_415, &g_204, &g_415, &g_204, &g_415, &g_204};
    int i;
    (*g_738) = func_31(l_730, (safe_lshift_func_int8_t_s_u(((246UL < p_5) & l_730), 4)), (*g_119), (l_730 , ((safe_lshift_func_uint8_t_u_u((l_735 != (*g_520)), 3)) , ((safe_rshift_func_int8_t_s_u(l_730, 0)) == g_112[3][1][6]))));

    ;
    for (g_21 = 0; (g_21 <= 4); g_21 += 1)
    {
        int **l_739 = &g_415;
        int *l_753 = (void*)0;
        int *l_756[4][7] = {{&l_752, &g_78, &l_752, &g_78, &l_752, &g_78, &l_752}, {&l_752, &g_78, &l_752, &g_78, &l_752, &g_78, &l_752}, {&l_752, &g_78, &l_752, &g_78, &l_752, &g_78, &l_752}, {&l_752, &g_78, &l_752, &g_78, &l_752, &g_78, &l_752}};
        int i, j;
        (*l_739) = (*g_738);
        (*g_740) = l_730;
        l_752 = (((l_730 = p_7) == l_741) ^ (safe_div_func_int16_t_s_s((!p_5), (((void*)0 == l_744) , (safe_rshift_func_int8_t_s_u(func_44((+((p_5 , 0x8454BD59L) , (-8L))), (*g_490), g_85, &g_63), p_7))))));
    }
    for (g_707 = 18; (g_707 == 34); g_707 = safe_add_func_int8_t_s_s(g_707, 3))
    {
        unsigned short l_761 = 65526UL;
        for (l_741 = 19; (l_741 > (-25)); --l_741)
        {
            int *l_762 = (void*)0;
            int l_774[2][8];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 8; j++)
                    l_774[i][j] = 0xBB2B6C3EL;
            }
            if (l_761)
            {
                int **l_763 = &l_762;
                int **l_764 = &g_204;
                (*l_764) = ((*l_763) = l_762);
            }
            else
            {
                unsigned char l_765[9] = {253UL, 253UL, 0x4FL, 253UL, 253UL, 0x4FL, 253UL, 253UL, 0x4FL};
                int i;
                l_765[8] = p_5;
                l_774[0][6] = (p_7 >= p_7);
            }
        }
    }
    return p_7;
}







static short func_10(char p_11)
{
    unsigned short *l_726[2];
    int l_729 = (-1L);
    int i;
    for (i = 0; i < 2; i++)
        l_726[i] = (void*)0;
    l_729 = (safe_rshift_func_uint8_t_u_u(func_12((((**g_323) = ((safe_rshift_func_uint8_t_u_s((**g_521), (((safe_sub_func_int64_t_s_s(((void*)0 == l_726[1]), ((safe_sub_func_uint8_t_u_u((((p_11 | l_729) , (((((((((0xA6L > 0L) < l_729) , 2L) <= p_11) < 65527UL) , p_11) & 0L) < 0xD209FA9CL) > p_11)) | l_729), l_729)) , 0xA6F152FEF289B731LL))) <= l_729) && g_434))) > l_729)) < g_152[1]), p_11), 1));

    ;
    l_729 = l_729;
    return l_729;
}







static unsigned char func_12(int p_13, int p_14)
{
    long long l_709[2];
    int *l_710 = &g_708;
    unsigned char **l_716[9] = {&g_63, &g_63, &g_63, &g_63, &g_63, &g_63, &g_63, &g_63, &g_63};
    int **l_717 = &g_204;
    int **l_718 = &g_415;
    int *l_719[2][6] = {{&g_708, &g_436[2], &g_708, &g_708, &g_436[2], &g_708}, {&g_708, &g_436[2], &g_708, &g_708, &g_436[2], &g_708}};
    int i, j;
    for (i = 0; i < 2; i++)
        l_709[i] = 0x6E0D3C951A5BE333LL;
    l_719[1][2] = ((*l_717) = func_31(l_709[0], l_709[0], (l_710 != ((*l_718) = func_31((safe_unary_minus_func_uint32_t_u((safe_unary_minus_func_uint32_t_u((g_570 , (*l_710)))))), (0L && (safe_unary_minus_func_uint32_t_u((*l_710)))), ((*g_119) = (safe_mod_func_int16_t_s_s((((func_44((((*g_490) && (*l_710)) <= p_13), p_13, p_13, l_716[3]) && 0xA7CB9F17L) < 0xE97B61E4L) || p_13), g_147))), p_14))), p_13));

    ;
    return (**g_521);
}







static int func_15(char p_16, unsigned long long p_17, unsigned p_18, unsigned p_19, unsigned long long p_20)
{
    unsigned char l_28 = 0x88L;
    unsigned char *l_29[3][2] = {{(void*)0, &l_28}, {(void*)0, &l_28}, {(void*)0, &l_28}};
    int l_30[4][2][6] = {{{0xD3624B67L, 0x9EFEDEDCL, 0xD3624B67L, 0x9EFEDEDCL, 0xD3624B67L, 0x9EFEDEDCL}, {0xD3624B67L, 0x9EFEDEDCL, 0xD3624B67L, 0x9EFEDEDCL, 0xD3624B67L, 0x9EFEDEDCL}}, {{0xD3624B67L, 0x9EFEDEDCL, 0xD3624B67L, 0x9EFEDEDCL, 0xD3624B67L, 0x9EFEDEDCL}, {0xD3624B67L, 0x9EFEDEDCL, 0xD3624B67L, 0x9EFEDEDCL, 0xD3624B67L, 0x9EFEDEDCL}}, {{0xD3624B67L, 0x9EFEDEDCL, 0xD3624B67L, 0x9EFEDEDCL, 0xD3624B67L, 0x9EFEDEDCL}, {0xD3624B67L, 0x9EFEDEDCL, 0xD3624B67L, 0x9EFEDEDCL, 0xD3624B67L, 0x9EFEDEDCL}}, {{0xD3624B67L, 0x9EFEDEDCL, 0xD3624B67L, 0x9EFEDEDCL, 0xD3624B67L, 0x9EFEDEDCL}, {0xD3624B67L, 0x9EFEDEDCL, 0xD3624B67L, 0x9EFEDEDCL, 0xD3624B67L, 0x9EFEDEDCL}}};
    int *l_460[5] = {&g_436[0], &g_436[5], &g_436[0], &g_436[5], &g_436[0]};
    unsigned short l_461 = 65527UL;
    unsigned *l_467 = &g_468;
    int l_469 = 0L;
    unsigned short l_617 = 65528UL;
    long long *l_618 = &g_85;
    unsigned char l_703 = 0x0AL;
    int i, j, k;
    l_469 = (((g_21 <= (((((l_461 = (safe_rshift_func_uint16_t_u_s(func_25((safe_unary_minus_func_uint8_t_u((l_30[3][0][3] = l_28)))), 9))) >= ((safe_unary_minus_func_uint8_t_u(p_19)) | 0UL)) != (safe_lshift_func_int16_t_s_u((p_16 > ((safe_mod_func_int64_t_s_s((4294967287UL < ((*l_467) = p_17)), (0x54E669BEAC9F45F8LL || p_20))) | p_19)), 8))) , p_19) ^ p_18)) || 0xCFL) , p_16);

    ;
    ;
    ;
    for (p_18 = 22; (p_18 >= 34); p_18++)
    {
        int **l_472 = &g_204;
        int l_480 = 0x546AA43CL;
        unsigned **l_492 = (void*)0;
        unsigned char *l_526 = &g_202;
        unsigned char l_527 = 1UL;
        unsigned l_547[6] = {4294967292UL, 4294967292UL, 1UL, 4294967292UL, 4294967292UL, 1UL};
        long long *l_573[10] = {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85};
        int *l_575 = (void*)0;
        unsigned l_577 = 5UL;
        char *l_620 = (void*)0;
        char **l_619 = &l_620;
        unsigned short *l_627[4] = {&g_200, (void*)0, &g_200, (void*)0};
        unsigned char l_646 = 0x49L;
        unsigned l_665 = 4294967286UL;
        unsigned l_667 = 4294967287UL;
        int i;
        (*l_472) = (l_460[1] = &l_30[2][0][3]);

        ;
        (*g_204) = (**l_472);
        for (p_17 = 17; (p_17 > 26); p_17++)
        {
            char l_478 = 1L;
            short *l_487 = &g_152[2];
            unsigned **l_488 = &l_467;
            unsigned char **l_519 = (void*)0;
            unsigned char ***l_518[2];
            unsigned char ****l_517 = &l_518[0];
            unsigned long long l_566 = 0xC987023658091D94LL;
            int *l_569[6][5][3] = {{{&g_436[2], &l_480, &g_436[0]}, {&g_436[2], &l_480, &g_436[0]}, {&g_436[2], &l_480, &g_436[0]}, {&g_436[2], &l_480, &g_436[0]}, {&g_436[2], &l_480, &g_436[0]}}, {{&g_436[2], &l_480, &g_436[0]}, {&g_436[2], &l_480, &g_436[0]}, {&g_436[2], &l_480, &g_436[0]}, {&g_436[2], &l_480, &g_436[0]}, {&g_436[2], &l_480, &g_436[0]}}, {{&g_436[2], &l_480, &g_436[0]}, {&g_436[2], &l_480, &g_436[0]}, {&g_436[2], &l_480, &g_436[0]}, {&g_436[2], &l_480, &g_436[0]}, {&g_436[2], &l_480, &g_436[0]}}, {{&g_436[2], &l_480, &g_436[0]}, {&g_436[2], &l_480, &g_436[0]}, {&g_436[2], &l_480, &g_436[0]}, {&g_436[2], &l_480, &g_436[0]}, {&g_436[2], &l_480, &g_436[0]}}, {{&g_436[2], &l_480, &g_436[0]}, {&g_436[2], &l_480, &g_436[0]}, {&g_436[2], &l_480, &g_436[0]}, {&g_436[2], &l_480, &g_436[0]}, {&g_436[2], &l_480, &g_436[0]}}, {{&g_436[2], &l_480, &g_436[0]}, {&g_436[2], &l_480, &g_436[0]}, {&g_436[2], &l_480, &g_436[0]}, {&g_436[2], &l_480, &g_436[0]}, {&g_436[2], &l_480, &g_436[0]}}};
            long long *l_572 = (void*)0;
            int ***l_576 = &l_472;
            unsigned short *l_582 = (void*)0;
            unsigned short *l_583[3][6][3] = {{{&g_183[0][1], &g_183[0][1], (void*)0}, {&g_183[0][1], &g_183[0][1], (void*)0}, {&g_183[0][1], &g_183[0][1], (void*)0}, {&g_183[0][1], &g_183[0][1], (void*)0}, {&g_183[0][1], &g_183[0][1], (void*)0}, {&g_183[0][1], &g_183[0][1], (void*)0}}, {{&g_183[0][1], &g_183[0][1], (void*)0}, {&g_183[0][1], &g_183[0][1], (void*)0}, {&g_183[0][1], &g_183[0][1], (void*)0}, {&g_183[0][1], &g_183[0][1], (void*)0}, {&g_183[0][1], &g_183[0][1], (void*)0}, {&g_183[0][1], &g_183[0][1], (void*)0}}, {{&g_183[0][1], &g_183[0][1], (void*)0}, {&g_183[0][1], &g_183[0][1], (void*)0}, {&g_183[0][1], &g_183[0][1], (void*)0}, {&g_183[0][1], &g_183[0][1], (void*)0}, {&g_183[0][1], &g_183[0][1], (void*)0}, {&g_183[0][1], &g_183[0][1], (void*)0}}};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_518[i] = &l_519;
            for (g_340 = 0; (g_340 == 44); ++g_340)
            {
                unsigned short l_507 = 1UL;
                for (g_147 = 0; (g_147 <= 5); g_147 += 1)
                {
                    short *l_485[9] = {&g_152[1], &g_152[2], &g_152[1], &g_152[2], &g_152[1], &g_152[2], &g_152[1], &g_152[2], &g_152[1]};
                    short **l_486 = (void*)0;
                    unsigned ***l_491[3];
                    unsigned l_497[7][9] = {{18446744073709551606UL, 0xEFB95547L, 0xB747BD11L, 0UL, 3UL, 0x7DEB2149L, 3UL, 0UL, 0xB747BD11L}, {18446744073709551606UL, 0xEFB95547L, 0xB747BD11L, 0UL, 3UL, 0x7DEB2149L, 3UL, 0UL, 0xB747BD11L}, {18446744073709551606UL, 0xEFB95547L, 0xB747BD11L, 0UL, 3UL, 0x7DEB2149L, 3UL, 0UL, 0xB747BD11L}, {18446744073709551606UL, 0xEFB95547L, 0xB747BD11L, 0UL, 3UL, 0x7DEB2149L, 3UL, 0UL, 0xB747BD11L}, {18446744073709551606UL, 0xEFB95547L, 0xB747BD11L, 0UL, 3UL, 0x7DEB2149L, 3UL, 0UL, 0xB747BD11L}, {18446744073709551606UL, 0xEFB95547L, 0xB747BD11L, 0UL, 3UL, 0x7DEB2149L, 3UL, 0UL, 0xB747BD11L}, {18446744073709551606UL, 0xEFB95547L, 0xB747BD11L, 0UL, 3UL, 0x7DEB2149L, 3UL, 0UL, 0xB747BD11L}};
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_491[i] = &g_489;
                    if ((g_436[g_147] = g_436[g_147]))
                    {
                        return (*g_119);


                    }
                    else
                    {
                        int *l_477[2][8] = {{(void*)0, &l_30[3][0][3], &l_30[3][0][3], &l_30[3][0][3], (void*)0, &l_469, (void*)0, &l_30[3][0][3]}, {(void*)0, &l_30[3][0][3], &l_30[3][0][3], &l_30[3][0][3], (void*)0, &l_469, (void*)0, &l_30[3][0][3]}};
                        short *l_479 = &g_152[1];
                        int i, j;
                        (*l_472) = (*l_472);
                        (*l_472) = l_477[1][5];

                        ;
                        (*l_472) = func_31(l_478, (*g_61), p_17, ((*l_479) = g_21));

                        ;
                    }

                    ;
                    (*g_111) = ((l_480 == (((safe_div_func_uint64_t_u_u(p_20, (safe_add_func_uint16_t_u_u((((l_487 = l_485[2]) != (void*)0) != p_20), 5L)))) , l_488) == (l_492 = g_489))) , (g_436[g_147] > p_17));

                    ;
                    for (l_469 = 0; (l_469 <= 2); l_469 += 1)
                    {
                        unsigned long long *l_504 = &g_149;
                        int *l_508 = &g_436[5];
                        int i;
                        if (g_152[l_469])
                            break;
                        l_508 = ((*l_472) = func_31((safe_div_func_uint64_t_u_u(g_152[l_469], g_62)), (safe_lshift_func_uint8_t_u_s((l_497[6][7] >= (((safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_add_func_uint64_t_u_u(p_18, ((*l_504) = p_17))), g_152[2])), 7)) | ((safe_sub_func_int32_t_s_s(((p_16 == (p_18 , l_478)) && 0xE5F5319DL), p_17)) > g_152[l_469])) , l_507)), g_21)), (*g_119), g_200));

                        ;
                    }
                }
            }
            if ((safe_lshift_func_uint16_t_u_u((p_17 < (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_s(((((((((*g_489) = (*g_489)) == (void*)0) < func_44(((-1L) >= (((((((*l_517) = (void*)0) != g_520) < (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s((((*l_467) = (p_16 | ((void*)0 == l_526))) & 4294967291UL), 8)), p_17))) <= p_16) , (void*)0) == &p_16)), g_200, g_65, &g_63)) , &p_16) != (void*)0) < g_183[0][5]) < 0L), g_436[5])) ^ l_527), 13))), 15)))
            {
                int *l_528 = (void*)0;
                (*l_472) = l_528;

                ;
            }
            else
            {
                int l_533 = 8L;
                unsigned short *l_539 = &l_461;
                int l_551 = (-1L);
                int **l_561[7][8][4] = {{{(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}}, {{(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}}, {{(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}}, {{(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}}, {{(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}}, {{(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}}, {{(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}, {(void*)0, &g_204, &l_460[0], &g_415}}};
                int i, j, k;
                for (g_78 = 0; (g_78 <= 1); g_78 += 1)
                {
                    int i, j, k;
                    return l_30[g_78][g_78][(g_78 + 4)];


                }
                if ((safe_sub_func_int16_t_s_s((p_20 | (((safe_div_func_int32_t_s_s(0x8F80B0F9L, l_533)) || (safe_unary_minus_func_int16_t_s((l_478 & (safe_sub_func_int64_t_s_s(p_20, (p_17 < ((*g_490) = p_16)))))))) >= 0x9B7A42B928C0F4D5LL)), 0x98F3L)))
                {
                    long long l_546 = 0L;
                    unsigned l_550 = 0UL;
                    (*g_110) = (*g_139);
                    for (l_469 = 0; (l_469 >= (-12)); l_469 = safe_sub_func_uint32_t_u_u(l_469, 1))
                    {
                        (*l_472) = func_31(p_18, (250UL & (((safe_lshift_func_uint16_t_u_u(p_16, p_17)) < (p_17 != ((*l_487) = (safe_sub_func_int32_t_s_s(((l_551 = (l_546 , (l_547[4] && (safe_div_func_int8_t_s_s(func_44(((l_546 >= l_533) != g_378), (*g_490), l_550, &g_63), 8UL))))) != 0L), p_16))))) > p_19)), p_17, g_183[0][3]);

                        ;
                    }
                }
                else
                {
                    unsigned char l_568 = 255UL;
                    unsigned long long *l_574 = &g_149;
                    for (p_16 = 0; (p_16 != 22); ++p_16)
                    {
                        unsigned short **l_554 = &l_539;
                        int l_567[3][6] = {{(-8L), 0xFC5A2E17L, 1L, (-1L), (-1L), 1L}, {(-8L), 0xFC5A2E17L, 1L, (-1L), (-1L), 1L}, {(-8L), 0xFC5A2E17L, 1L, (-1L), (-1L), 1L}};
                        unsigned long long *l_571 = &g_149;
                        int i, j;
                        l_569[1][0][1] = ((*l_472) = func_31(p_19, l_533, ((l_551 = (((**g_520) == &g_65) , ((void*)0 != l_554))) , (((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s(((((((((safe_rshift_func_uint16_t_u_s(((l_561[3][4][2] == l_472) < func_44(((safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(((p_19 > (-1L)) || p_18), g_78)) , p_19), 0xE9L)) , (**g_323)), (**g_489), l_566, &g_63)), 15)) && 0UL) || l_566) <= l_567[1][3]) | p_18) , 9L) , (***g_520)) , p_20), l_568)), l_567[0][0])) , 0x258BL) >= 0UL)), p_17));

                        ;
                        (*g_111) = 1L;
                        g_570 = p_16;
                        (**g_110) = (((*l_571) = g_65) && (5L == ((l_572 != l_573[1]) || p_18)));
                    }
                    l_575 = func_31((4UL ^ ((*l_574) = 18446744073709551608UL)), p_16, (*g_119), p_20);
                    (*g_111) = (p_20 , 1L);
                }
            }


            if (((&l_478 == &p_16) , ((p_19 = p_16) != (&l_472 == l_576))))
            {
                (**g_139) = p_18;
                if ((**g_139))
                    break;
                (*g_111) = p_16;
                if (l_577)
                    continue;
            }
            else
            {
                if (p_19)
                {
                    return p_19;


                }
                else
                {
                    unsigned short l_581 = 0x6A72L;
                    (**g_110) = (((safe_rshift_func_int16_t_s_u(g_580, 0)) != l_581) || g_434);
                }
                if (p_19)
                    continue;
            }
            (*g_111) = (func_51(p_17, &l_29[1][1], (**g_489), (((l_480 = (((*g_61) , (((&g_323 != (void*)0) , p_16) , ((p_19 , (**g_323)) <= 0xD2FF40AB42366A57LL))) > 7L)) ^ (-1L)) , (*g_61))) | p_19);
        }

        ;
        ;
        for (l_461 = 0; (l_461 <= 0); l_461 += 1)
        {
            unsigned *l_587 = (void*)0;
            unsigned *l_588 = &l_577;
            unsigned char l_589 = 249UL;
            unsigned char **l_616 = &l_29[2][0];
            int l_645 = 0xCD0C369FL;
            unsigned long long l_689 = 0xFBB19E27D1C3543ELL;
            long long *l_702 = &g_85;
            int i, j;
            if (g_58[l_461][l_461])
                break;
            (*l_472) = func_31((((&l_492 == ((g_58[l_461][l_461] = (*g_119)) , (func_44(p_19, ((*l_467) = (*g_490)), (safe_mul_func_uint32_t_u_u(((void*)0 != &l_29[1][0]), (((***g_520) && (safe_unary_minus_func_int64_t_s((((*l_588) = (((p_16 > p_18) ^ p_19) , (**g_489))) < 0x5E300A04L)))) >= 1UL))), &l_526) , (void*)0))) , l_589) ^ p_20), l_589, p_16, l_589);

            ;
            for (g_201 = 0; (g_201 < 24); g_201++)
            {
                int *l_595[3][5] = {{(void*)0, &l_30[3][0][3], (void*)0, &l_30[3][0][3], (void*)0}, {(void*)0, &l_30[3][0][3], (void*)0, &l_30[3][0][3], (void*)0}, {(void*)0, &l_30[3][0][3], (void*)0, &l_30[3][0][3], (void*)0}};
                int **l_624 = &g_119;
                unsigned short *l_626 = &g_183[0][2];
                unsigned l_691[10][9][2] = {{{0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}}, {{0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}}, {{0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}}, {{0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}}, {{0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}}, {{0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}}, {{0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}}, {{0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}}, {{0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}}, {{0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}, {0x8000A154L, 0x31FDD65AL}}};
                int i, j, k;
                if (p_16)
                {
                    unsigned char **l_596 = &l_29[0][0];
                    int l_615 = (-1L);
                    int *l_629 = &l_480;
                    for (g_168 = 0; (g_168 <= 1); g_168 += 1)
                    {
                        int *l_592 = &g_78;
                        (*l_472) = l_592;

                        ;
                    }
                    if ((((safe_rshift_func_uint16_t_u_s(p_17, func_51(((**g_489) >= (p_19 , ((void*)0 == l_595[1][2]))), l_596, (*g_490), ((g_200 & (((safe_div_func_int8_t_s_s(p_19, p_17)) & g_58[0][0]) & p_16)) , 250UL)))) < g_599) , 1L))
                    {
                        char l_610 = 0x21L;
                        unsigned char **l_613[3][6] = {{&l_29[0][0], &l_29[0][0], (void*)0, &l_29[2][1], (void*)0, &l_29[2][1]}, {&l_29[0][0], &l_29[0][0], (void*)0, &l_29[2][1], (void*)0, &l_29[2][1]}, {&l_29[0][0], &l_29[0][0], (void*)0, &l_29[2][1], (void*)0, &l_29[2][1]}};
                        char *l_614 = &g_378;
                        int i, j;
                        if (p_16)
                            break;
                        (*l_472) = func_31(((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s(1L, ((safe_rshift_func_uint16_t_u_u((((safe_div_func_int64_t_s_s(((**g_489) == (func_44((((**g_323) = (safe_rshift_func_int8_t_s_s(func_44(l_610, (safe_sub_func_uint16_t_u_u((((*l_614) = func_51(p_17, &g_63, p_19, func_51(p_16, l_613[2][4], (**g_489), (*g_61)))) <= l_615), 0L)), p_16, l_616), p_19))) & p_16), p_17, p_17, &g_63) , l_617)), p_17)) , l_618) == (void*)0), g_468)) != 0x1A42L))) > p_20), (*g_490))) || g_58[l_461][l_461]), g_436[5], l_589, p_20);

                        ;
                        (*l_472) = (*g_459);
                        (*g_621) = l_619;

                        ;
                    }
                    else
                    {
                        char ***l_625 = &g_622;
                        unsigned char **l_628[2][9][5] = {{{&l_29[2][0], &g_63, &l_29[2][0], &l_29[2][0], &g_63}, {&l_29[2][0], &g_63, &l_29[2][0], &l_29[2][0], &g_63}, {&l_29[2][0], &g_63, &l_29[2][0], &l_29[2][0], &g_63}, {&l_29[2][0], &g_63, &l_29[2][0], &l_29[2][0], &g_63}, {&l_29[2][0], &g_63, &l_29[2][0], &l_29[2][0], &g_63}, {&l_29[2][0], &g_63, &l_29[2][0], &l_29[2][0], &g_63}, {&l_29[2][0], &g_63, &l_29[2][0], &l_29[2][0], &g_63}, {&l_29[2][0], &g_63, &l_29[2][0], &l_29[2][0], &g_63}, {&l_29[2][0], &g_63, &l_29[2][0], &l_29[2][0], &g_63}}, {{&l_29[2][0], &g_63, &l_29[2][0], &l_29[2][0], &g_63}, {&l_29[2][0], &g_63, &l_29[2][0], &l_29[2][0], &g_63}, {&l_29[2][0], &g_63, &l_29[2][0], &l_29[2][0], &g_63}, {&l_29[2][0], &g_63, &l_29[2][0], &l_29[2][0], &g_63}, {&l_29[2][0], &g_63, &l_29[2][0], &l_29[2][0], &g_63}, {&l_29[2][0], &g_63, &l_29[2][0], &l_29[2][0], &g_63}, {&l_29[2][0], &g_63, &l_29[2][0], &l_29[2][0], &g_63}, {&l_29[2][0], &g_63, &l_29[2][0], &l_29[2][0], &g_63}, {&l_29[2][0], &g_63, &l_29[2][0], &l_29[2][0], &g_63}}};
                        int i, j, k;
                        (**g_110) = (((void*)0 != l_624) , func_44(p_17, (func_51(((**g_489) = (p_20 > ((((((*l_625) = &l_620) != (void*)0) , l_626) == l_627[0]) == 0xEAL))), l_628[0][7][4], l_615, (*g_61)) || 0x1CC6L), p_16, &g_63));

                        ;
                        l_629 = l_588;

                        ;
                        (**g_139) = (p_16 , 0x132E945EL);
                    }

                    ;
                    ;
                }
                else
                {
                    unsigned char **l_636[6];
                    int l_644[5][7][3] = {{{(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}}, {{(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}}, {{(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}}, {{(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}}, {{(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}, {(-8L), 0xAF206258L, (-1L)}}};
                    unsigned long long l_647 = 0x7DC275228085194CLL;
                    int **l_648 = &l_595[0][1];
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_636[i] = &l_29[2][0];
                    (*l_648) = ((*l_472) = func_31((+((safe_mod_func_int32_t_s_s(p_18, ((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_s(func_51(((*l_588) = ((0L != g_58[0][0]) != g_58[l_461][l_461])), l_636[5], p_18, ((+(+g_58[l_461][l_461])) && (l_480 = (l_645 = (safe_sub_func_int16_t_s_s((safe_add_func_int64_t_s_s((safe_unary_minus_func_int16_t_s(((((((safe_rshift_func_int16_t_s_u((p_18 , p_16), 4)) ^ g_149) >= 0x0CB9L) , 0xBBB0L) != g_436[5]) <= g_284[4][5]))), (**g_323))), l_644[0][0][1])))))), p_16)) || l_646), g_85)) | g_58[0][0]))) <= l_647)), p_19, l_647, p_19));

                    ;
                }
                (*l_472) = (*g_376);
                (**g_139) = (**g_110);
                for (p_19 = (-23); (p_19 >= 11); p_19 = safe_add_func_int32_t_s_s(p_19, 6))
                {
                    unsigned ***l_657 = &g_489;
                    int l_663 = 1L;
                    char *l_666 = &g_378;
                    unsigned char l_672[9][1] = {{0xC5L}, {0xC5L}, {0xC5L}, {0xC5L}, {0xC5L}, {0xC5L}, {0xC5L}, {0xC5L}, {0xC5L}};
                    unsigned l_687 = 0xB1C5DF62L;
                    int i, j;
                    if (((safe_div_func_int64_t_s_s((g_58[l_461][l_461] || 0x17F05DFF2784C7F4LL), (safe_div_func_uint32_t_u_u((((-4L) == ((safe_sub_func_uint32_t_u_u((l_492 == ((*l_657) = (((*l_588) = (*g_490)) , &g_490))), ((safe_unary_minus_func_uint16_t_u((safe_div_func_int64_t_s_s(((+(((*g_490) == (l_663 == 1UL)) != (-1L))) | p_17), 0xF225368335AC5B79LL)))) ^ p_17))) , (***g_520))) && p_18), (-1L))))) && 0xA8A22D44E611C89ELL))
                    {
                        unsigned long long l_664 = 0UL;
                        (**g_110) = l_664;
                        if ((***g_140))
                            break;
                    }
                    else
                    {
                        (*l_472) = l_595[1][2];

                        ;
                    }
                    if ((((l_665 = func_51(p_20, &g_63, (**g_489), p_18)) && ((g_58[l_461][l_461] , p_17) < ((void*)0 == l_666))) , l_667))
                    {
                        (*l_472) = (*g_315);
                        if (p_17)
                            continue;
                    }
                    else
                    {
                        char l_677[5] = {0xD4L, 0xAEL, 0xD4L, 0xAEL, 0xD4L};
                        unsigned short l_684 = 0xD46FL;
                        short *l_688[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_688[i] = (void*)0;
                        (*l_472) = (void*)0;

                        ;
                        (**g_110) = (0x19L && func_44((p_17 , (((void*)0 != (*g_376)) && (!((func_44((safe_sub_func_int64_t_s_s((((p_16 = (6UL <= (safe_lshift_func_uint8_t_u_u((255UL | l_672[8][0]), 0)))) , (func_44(p_19, ((((safe_sub_func_int16_t_s_s((((safe_add_func_int64_t_s_s(p_19, (**g_323))) | p_17) && (***g_520)), p_18)) || p_16) && (**g_323)) && g_436[5]), p_20, &l_29[2][0]) && (**g_489))) < g_570), l_645)), (*g_490), g_599, &l_29[2][0]) , l_677[3]) , 0x09L)))), (**g_489), p_18, l_616));
                        l_663 = (((((safe_add_func_uint64_t_u_u((func_44((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s(l_645, 3)), 1)), ((*g_490) = l_684), (g_152[2] = (func_44(func_44(((*l_618) = l_677[3]), p_18, (safe_sub_func_int32_t_s_s((l_687 = (-1L)), l_589)), &l_29[1][0]), p_17, l_677[3], &g_63) , 0x1F98L)), &l_29[2][0]) != g_58[l_461][l_461]), l_684)) && p_17) , 65535UL) , l_672[0][0]) <= l_689);
                        l_460[3] = ((*l_472) = (void*)0);
                    }
                    (*l_472) = &l_469;

                    ;
                    for (g_599 = 0; (g_599 <= 0); g_599 += 1)
                    {
                        short l_690 = 0x65A0L;
                        unsigned l_692 = 0xF5C51788L;
                    }
                }
            }

            ;
            for (g_599 = 1; (g_599 >= 0); g_599 -= 1)
            {
                int l_701 = (-10L);
                int l_706[3][5] = {{0xAC029ABEL, 0xFCE7A57DL, 0xA31E6AD1L, 0xFCE7A57DL, 0xAC029ABEL}, {0xAC029ABEL, 0xFCE7A57DL, 0xA31E6AD1L, 0xFCE7A57DL, 0xAC029ABEL}, {0xAC029ABEL, 0xFCE7A57DL, 0xA31E6AD1L, 0xFCE7A57DL, 0xAC029ABEL}};
                int i, j;
                (**g_110) = ((safe_div_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(func_44(g_58[l_461][l_461], (func_44(p_18, l_645, (((((void*)0 == &g_119) >= ((safe_div_func_int64_t_s_s(((0x34L > (safe_div_func_uint8_t_u_u(p_19, 1UL))) , (func_51(l_645, &g_63, p_19, p_16) ^ g_378)), p_18)) < l_701)) , l_573[1]) != l_702), l_616) & 0x99L), g_434, &g_63), 0)) & 0x34L), p_18)) , (-1L));
                (**g_110) = (p_16 , ((l_703 = l_701) > (p_17 || ((*l_467) = ((safe_rshift_func_uint16_t_u_u(0UL, (l_706[0][4] = g_168))) <= g_707)))));
                return g_708;



            }
        }

        ;

    }

    ;


    (*g_110) = (void*)0;

    ;
    return p_17;


}







static unsigned short func_25(int p_26)
{
    unsigned char *l_42[6];
    unsigned char **l_43 = &l_42[4];
    int *l_56 = (void*)0;
    int *l_57 = &g_58[0][0];
    unsigned char *l_64 = &g_65;
    unsigned char **l_67 = &g_63;
    unsigned char ***l_66 = &l_67;
    unsigned char *l_68[10][7][3] = {{{&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}}, {{&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}}, {{&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}}, {{&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}}, {{&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}}, {{&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}}, {{&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}}, {{&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}}, {{&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}}, {{&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}, {&g_65, &g_65, &g_65}}};
    int l_69 = 0xB3DF1C91L;
    int l_83 = 0x314CD590L;
    long long *l_84[5];
    int l_280 = 0x1E57495FL;
    int l_453[6];
    int l_454[10] = {0x4EE6EE54L, 7L, 0x4EE6EE54L, 7L, 0x4EE6EE54L, 7L, 0x4EE6EE54L, 7L, 0x4EE6EE54L, 7L};
    int **l_458 = (void*)0;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_42[i] = (void*)0;
    for (i = 0; i < 5; i++)
        l_84[i] = &g_85;
    for (i = 0; i < 6; i++)
        l_453[i] = 0x28E9F85EL;
    (*g_459) = func_31((l_453[2] = (l_280 = ((((*l_43) = func_36(((*l_43) = l_42[4]), func_44((safe_sub_func_uint64_t_u_u((+g_21), (l_83 = ((func_51((((*l_57) = p_26) , (g_58[0][0] , (safe_lshift_func_uint8_t_u_s(g_58[0][0], (g_61 == (l_64 = g_63)))))), l_43, ((l_69 = (((*l_66) = &g_63) == (void*)0)) , g_65), p_26) != l_83) < p_26)))), p_26, g_65, &g_63), &g_202, l_280, g_119)) == (void*)0) , 255UL))), l_454[3], l_454[3], p_26);


    ;
    ;
    ;
    ;
    return p_26;
}







static int * func_31(unsigned char p_32, unsigned char p_33, int p_34, short p_35)
{
    int *l_455 = (void*)0;
    int **l_456 = (void*)0;
    int **l_457 = &g_415;
    (*l_457) = l_455;

    ;
    return (*l_457);


}







static unsigned char * func_36(unsigned char * p_37, unsigned p_38, unsigned char * p_39, unsigned p_40, int * p_41)
{
    unsigned *l_283 = &g_284[4][5];
    long long *l_285 = &g_85;
    int l_288 = 0L;
    short *l_289 = &g_152[1];
    char *l_381[5][1][2] = {{{&g_378, &g_378}}, {{&g_378, &g_378}}, {{&g_378, &g_378}}, {{&g_378, &g_378}}, {{&g_378, &g_378}}};
    unsigned char **l_403 = &g_63;
    int l_442 = 0xD3D46050L;
    int l_443 = (-1L);
    int i, j, k;
    if ((((((safe_add_func_int8_t_s_s(((+func_51(((*l_283) = p_40), &g_63, g_202, ((l_285 != (void*)0) < (safe_rshift_func_uint8_t_u_s(l_288, 6))))) , p_40), (p_38 | g_85))) < p_38) || p_40) , l_289) == l_289))
    {
        unsigned long long l_302 = 0x8867868B905371D5LL;
        short l_313 = (-10L);
        long long **l_330 = &g_324[0];
        if ((safe_rshift_func_int8_t_s_u(p_38, 7)))
        {
            unsigned char l_303 = 1UL;
            unsigned **l_306 = &l_283;
            int *l_314 = &g_78;
            (*g_111) = (safe_div_func_int64_t_s_s(((*p_39) >= (p_38 ^ (safe_add_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u(((1UL > ((safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s((l_288 != 65535UL), func_44(l_302, g_65, g_58[0][0], (func_51(l_303, &g_63, p_38, l_303) , &g_63)))), p_40)) && p_38)) <= l_303), 0)), l_303)))), p_40));
            (**g_139) = ((*p_41) = (safe_rshift_func_uint8_t_u_s(((func_51((g_284[4][5] = ((((252UL || ((((*l_306) = (void*)0) == &p_40) || (safe_div_func_uint16_t_u_u((+(safe_add_func_uint32_t_u_u(l_288, (safe_add_func_uint64_t_u_u(0UL, (((l_302 ^ (*p_41)) | l_313) , 2L)))))), l_288)))) == l_303) <= p_40) ^ l_288)), &g_63, l_303, (*g_61)) , p_40) || 0x4969L), 5)));

            ;
            (*g_315) = l_314;

            ;
        }
        else
        {
            (*p_41) = (*p_41);
        }

        ;
        ;
        for (g_200 = 0; (g_200 <= 0); g_200 += 1)
        {
            unsigned l_338 = 18446744073709551615UL;
            unsigned char **l_341 = &g_63;
            for (g_85 = 2; (g_85 <= 8); g_85 += 1)
            {
                int **l_316 = (void*)0;
                long long ***l_325 = &g_323;
                long long ***l_326 = (void*)0;
                long long **l_328 = &l_285;
                long long ***l_327[4][6] = {{&l_328, &l_328, &l_328, &l_328, &l_328, &l_328}, {&l_328, &l_328, &l_328, &l_328, &l_328, &l_328}, {&l_328, &l_328, &l_328, &l_328, &l_328, &l_328}, {&l_328, &l_328, &l_328, &l_328, &l_328, &l_328}};
                unsigned long long l_337 = 1UL;
                unsigned *l_339 = &g_340;
                int i, j;
                (*g_225) = p_41;

                ;
                (**g_139) = func_51((((safe_sub_func_uint32_t_u_u(((*l_339) = (g_284[(g_200 + 7)][(g_200 + 8)] = (g_58[g_200][g_200] <= (safe_lshift_func_int8_t_s_s(((0x8CL | (*g_61)) , p_38), (((((safe_add_func_int16_t_s_s(((g_329 = ((*l_325) = g_323)) == (p_38 , l_330)), ((*l_289) = (safe_div_func_uint16_t_u_u(g_201, (safe_sub_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(7L, g_78)), l_337))))))) ^ g_168) != (-6L)) >= l_338) & 255UL)))))), 0UL)) , 0L) , 0x41ADA6DFL), l_341, g_183[0][5], l_302);

                ;
            }
            for (g_202 = 0; (g_202 <= 0); g_202 += 1)
            {
                for (l_338 = 0; (l_338 <= 0); l_338 += 1)
                {
                    int **l_343 = &g_204;
                    (*l_343) = p_41;

                    ;
                }
            }
        }

        ;
        ;
    }
    else
    {
        int *l_347 = &l_288;
        unsigned char **l_351 = &g_63;
        char *l_377 = &g_378;
        short *l_380 = &g_152[2];
        int *l_433 = &g_434;
        int *l_435 = &g_436[5];
        unsigned long long *l_441[7] = {(void*)0, &g_149, (void*)0, &g_149, (void*)0, &g_149, (void*)0};
        long long l_444[2][8] = {{0x780A0FC840620EE0LL, 8L, 1L, 8L, 0x780A0FC840620EE0LL, 8L, 1L, 8L}, {0x780A0FC840620EE0LL, 8L, 1L, 8L, 0x780A0FC840620EE0LL, 8L, 1L, 8L}};
        int i, j;
        for (g_201 = 0; (g_201 > 23); g_201++)
        {
            int l_361 = 0xE0B8B0C2L;
            for (p_40 = 0; (p_40 <= 2); p_40 += 1)
            {
                unsigned char *l_346[7];
                int *l_349 = &g_78;
                unsigned l_360 = 0xF6D4AE69L;
                int i;
                for (i = 0; i < 7; i++)
                    l_346[i] = &g_168;
                for (g_168 = 0; (g_168 <= 2); g_168 += 1)
                {
                    return l_346[3];



                }
                for (g_340 = 0; (g_340 <= 2); g_340 += 1)
                {
                    int i, j, k;
                    (**g_140) = &g_112[(p_40 + 3)][p_40][(p_40 + 5)];
                    l_349 = l_347;

                    ;
                    for (g_85 = 0; (g_85 <= 2); g_85 += 1)
                    {
                        int **l_350 = &g_204;
                        (*l_350) = (p_41 = &l_288);

                        ;
                        ;
                        if (l_288)
                            break;
                    }
                }

                ;
                (*l_349) = ((((*l_285) = (g_200 > ((func_51(p_38, l_351, ((safe_add_func_uint64_t_u_u(g_112[3][1][6], 1L)) , (p_40 , (safe_lshift_func_uint16_t_u_s((safe_sub_func_int64_t_s_s(((safe_div_func_int32_t_s_s(((((~p_40) != (*l_349)) | (0xF6C03773507AE036LL ^ p_38)) , (*g_111)), g_65)) < l_360), 0xDD55966B01AD845FLL)), g_152[2])))), (*p_39)) <= (*p_39)) ^ l_361))) != (-4L)) , l_361);
                for (g_147 = 0; (g_147 <= 2); g_147 += 1)
                {
                    if (l_361)
                        break;
                }
            }
        }

        ;
        ;
        for (g_65 = 7; (g_65 != 15); g_65++)
        {
            unsigned long long l_364 = 0x9036414A52CCE86ALL;
            unsigned char **l_404[3][1][4] = {{{&g_63, &g_63, &g_63, &g_63}}, {{&g_63, &g_63, &g_63, &g_63}}, {{&g_63, &g_63, &g_63, &g_63}}};
            int **l_416 = (void*)0;
            int i, j, k;
            if (l_364)
                break;
            for (g_149 = 0; (g_149 > 58); ++g_149)
            {
                return p_39;



            }
            if (((*p_41) = (safe_lshift_func_int8_t_s_u(g_78, (safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(g_152[1], (safe_mod_func_int32_t_s_s(0xA9E5370DL, 4294967292UL)))), l_288))))))
            {
                unsigned l_379 = 0UL;
                long long **l_408 = &l_285;
                int *l_412 = &l_288;
                (*g_376) = &l_288;

                ;
                if (((((l_377 = (((*l_347) = (**g_118)) , g_63)) == ((((!((((*l_289) = (l_289 != (((**g_323) = (+((p_40 <= (g_378 == (p_40 >= p_40))) | (p_40 != (6L < l_379))))) , l_380))) != g_200) | 0x7D43AD27L)) | l_364) , g_78) , l_381[0][0][1])) || l_288) != (*p_39)))
                {
                    int l_392 = 9L;
                    unsigned short *l_394 = &g_183[0][1];
                    unsigned short **l_393 = &l_394;
                    unsigned short *l_396 = &g_200;
                    unsigned short **l_395 = &l_396;
                    unsigned char *l_407 = &g_65;
                    if ((safe_rshift_func_uint8_t_u_u((safe_add_func_int64_t_s_s(0x61134DBC5A0A8497LL, ((safe_add_func_int8_t_s_s((l_288 , (((safe_div_func_uint8_t_u_u((((((*p_39) = (func_51((safe_mod_func_uint32_t_u_u(0UL, (*l_347))), &g_63, ((*l_283) = g_78), (((*l_393) = (l_392 , l_380)) == ((*l_395) = &g_200))) && 65535UL)) < p_38) >= 0x04D1562EF163EFBALL) || (*g_61)), l_288)) , 0x9E632D1BL) >= 0x2F3796F6L)), l_392)) != (*l_347)))), 0)))
                    {
                        int **l_398 = &g_204;
                        (*l_398) = p_41;

                        ;
                        (*g_111) = ((g_62 && (safe_sub_func_int8_t_s_s(l_392, g_62))) != ((safe_add_func_uint32_t_u_u(((g_65 ^ 0L) == (((l_403 = &g_63) == l_404[2][0][0]) <= g_58[0][0])), (safe_rshift_func_int16_t_s_u(1L, 1)))) <= g_78));
                    }
                    else
                    {
                        return l_407;



                    }

                    ;
                    ;
                }
                else
                {
                    if ((l_408 != (void*)0))
                    {
                        int *l_409[8][5] = {{&g_78, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_78, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_78, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_78, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_78, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_78, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_78, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_78, (void*)0, (void*)0, (void*)0, (void*)0}};
                        int **l_410 = (void*)0;
                        int **l_411 = &l_409[7][0];
                        int i, j;
                        (*l_411) = l_409[7][0];
                        (*l_411) = l_412;
                    }
                    else
                    {
                        int **l_413 = &g_204;
                        (*g_414) = ((*l_413) = &l_288);

                        ;
                        g_118 = l_416;

                        ;
                    }

                    ;
                    ;
                    (*l_412) = (*l_412);
                    (**g_315) = (safe_unary_minus_func_int64_t_s(0x872BC794F0E5C5ABLL));
                    return p_37;




                }

                ;
                ;
            }
            else
            {
                int **l_419 = &g_204;
                (*l_419) = p_41;

                ;
                if ((*p_41))
                    continue;
                if ((*p_41))
                    continue;
            }

            ;
        }

        ;
        ;
        (**g_110) = (safe_div_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((p_40 , l_288), (safe_sub_func_uint32_t_u_u(((*p_41) ^ ((~(safe_unary_minus_func_uint32_t_u((safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s(l_288, (safe_add_func_int16_t_s_s((l_288 != 0xBAC67C9084D83E6ELL), ((*l_380) = ((((((*l_435) = ((*g_415) = (((*l_433) = p_40) , l_288))) != ((safe_lshift_func_uint8_t_u_s(((l_444[0][4] = (l_443 = (l_442 = (safe_rshift_func_uint16_t_u_s((0x10D425599260D381LL > 18446744073709551615UL), 14))))) ^ p_40), 5)) || g_85)) && p_40) != (*g_61)) , 0x882FL)))))), l_288))))) <= (-4L))), g_340)))), 65526UL));
    }

    ;
    ;
    ;
    ;
    for (g_378 = (-25); (g_378 >= 1); g_378 = safe_add_func_int32_t_s_s(g_378, 9))
    {
        int l_451[6][1][2] = {{{0x1E66309EL, 0x394CD77AL}}, {{0x1E66309EL, 0x394CD77AL}}, {{0x1E66309EL, 0x394CD77AL}}, {{0x1E66309EL, 0x394CD77AL}}, {{0x1E66309EL, 0x394CD77AL}}, {{0x1E66309EL, 0x394CD77AL}}};
        unsigned short l_452 = 0xEE69L;
        int i, j, k;
        (**g_139) = (((safe_mod_func_uint32_t_u_u(g_58[0][0], (safe_mod_func_uint16_t_u_u((1L <= (l_451[0][0][1] | (l_443 || (*p_41)))), (l_452 = (0UL | p_38)))))) == (-9L)) < (l_288 <= g_21));
    }
    return &g_168;



}







static unsigned func_44(long long p_45, unsigned p_46, short p_47, unsigned char ** p_48)
{
    int l_89 = 1L;
    long long *l_91 = &g_85;
    long long *l_94 = &g_85;
    unsigned l_102 = 0x5A5982EDL;
    int *l_135 = &g_21;
    int l_187 = (-2L);
    int *l_252 = (void*)0;
    int *l_253 = &l_89;
    unsigned l_261 = 4294967295UL;
    long long l_279 = (-3L);
    for (g_78 = 0; (g_78 >= 0); g_78 -= 1)
    {
        unsigned char *l_86 = (void*)0;
        int l_90[2];
        long long *l_93 = (void*)0;
        long long **l_92[8][6][5] = {{{&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}}, {{&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}}, {{&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}}, {{&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}}, {{&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}}, {{&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}}, {{&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}}, {{&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}, {&l_91, &l_91, (void*)0, (void*)0, &l_91}}};
        int *l_99 = &l_90[1];
        int *l_100 = &l_89;
        int l_150 = 1L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_90[i] = 0xFA8ABF26L;
        (*l_100) = ((*l_99) = ((g_65 = ((*g_61) ^ g_85)) && (safe_sub_func_uint64_t_u_u(l_89, ((*l_91) = ((((+l_90[0]) , (l_91 != (l_94 = l_91))) , (safe_div_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(g_85, p_46)) && ((l_90[0] & 0L) <= 0x48L)), (-1L)))) , p_45))))));
        if (p_47)
        {
            return p_47;
        }
        else
        {
            int **l_103 = &l_99;
            (*l_100) = (safe_unary_minus_func_uint64_t_u(p_45));
            l_102 = g_78;
            (*l_99) = g_62;
            (*l_103) = (void*)0;

            ;
        }

        ;
    }
    l_279 = (8L & g_65);
    return g_112[3][1][6];
}







static long long func_51(unsigned p_52, unsigned char ** p_53, unsigned p_54, unsigned char p_55)
{
    int *l_77[2];
    int i;
    for (i = 0; i < 2; i++)
        l_77[i] = &g_78;
    g_78 = (safe_mod_func_int8_t_s_s(p_54, (safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u(((+((*g_61) >= (p_52 | (l_77[0] == l_77[0])))) | ((safe_add_func_uint64_t_u_u(g_58[0][0], g_65)) , p_54)))), (safe_rshift_func_int16_t_s_s(g_65, g_21))))));
    return g_65;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_21, "g_21", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_58[i][j], "g_58[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_112[i][j][k], "g_112[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_152[i], "g_152[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_168, "g_168", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_183[i][j], "g_183[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_284[i][j], "g_284[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_340, "g_340", print_hash_value);
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_434, "g_434", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_436[i], "g_436[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_468, "g_468", print_hash_value);
    transparent_crc(g_570, "g_570", print_hash_value);
    transparent_crc(g_580, "g_580", print_hash_value);
    transparent_crc(g_599, "g_599", print_hash_value);
    transparent_crc(g_707, "g_707", print_hash_value);
    transparent_crc(g_708, "g_708", print_hash_value);
    transparent_crc(g_816, "g_816", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_926[i], "g_926[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
