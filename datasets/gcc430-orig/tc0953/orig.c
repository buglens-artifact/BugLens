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



static int g_6 = 1L;
static short g_19 = 0x1940L;
static short g_39 = 0x5AF8L;
static short *g_38[6][10][4] = {{{&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}}, {{&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}}, {{&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}}, {{&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}}, {{&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}}, {{&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}, {&g_39, &g_39, &g_39, &g_39}}};
static unsigned char g_52 = 0x24L;
static unsigned g_74 = 0x943C7D87L;
static int g_75 = (-4L);
static unsigned char g_77 = 0x6EL;
static int g_81[6] = {0L, 0L, 0L, 0L, 0L, 0L};
static unsigned short g_89[10][1][8] = {{{0x8B30L, 0x5347L, 0x50D1L, 0x50D1L, 0x5347L, 0x8B30L, 0x5347L, 0x50D1L}}, {{0x8B30L, 0x5347L, 0x50D1L, 0x50D1L, 0x5347L, 0x8B30L, 0x5347L, 0x50D1L}}, {{0x8B30L, 0x5347L, 0x50D1L, 0x50D1L, 0x5347L, 0x8B30L, 0x5347L, 0x50D1L}}, {{0x8B30L, 0x5347L, 0x50D1L, 0x50D1L, 0x5347L, 0x8B30L, 0x5347L, 0x50D1L}}, {{0x8B30L, 0x5347L, 0x50D1L, 0x50D1L, 0x5347L, 0x8B30L, 0x5347L, 0x50D1L}}, {{0x8B30L, 0x5347L, 0x50D1L, 0x50D1L, 0x5347L, 0x8B30L, 0x5347L, 0x50D1L}}, {{0x8B30L, 0x5347L, 0x50D1L, 0x50D1L, 0x5347L, 0x8B30L, 0x5347L, 0x50D1L}}, {{0x8B30L, 0x5347L, 0x50D1L, 0x50D1L, 0x5347L, 0x8B30L, 0x5347L, 0x50D1L}}, {{0x8B30L, 0x5347L, 0x50D1L, 0x50D1L, 0x5347L, 0x8B30L, 0x5347L, 0x50D1L}}, {{0x8B30L, 0x5347L, 0x50D1L, 0x50D1L, 0x5347L, 0x8B30L, 0x5347L, 0x50D1L}}};
static short g_96 = 5L;
static unsigned char *g_108 = &g_77;
static unsigned char g_120 = 0x33L;
static short g_123 = 0L;
static char g_125 = 1L;
static int *g_132 = (void*)0;
static unsigned char **g_191 = &g_108;
static unsigned char ***g_190[9] = {(void*)0, &g_191, (void*)0, &g_191, (void*)0, &g_191, (void*)0, &g_191, (void*)0};
static short **g_211 = (void*)0;
static short ***g_210[9] = {&g_211, &g_211, &g_211, &g_211, &g_211, &g_211, &g_211, &g_211, &g_211};
static unsigned g_258 = 0xF4ACA799L;
static unsigned g_287 = 0x1AE82296L;
static int *g_341 = &g_81[5];
static unsigned short *g_374 = &g_89[8][0][7];
static unsigned short **g_373 = &g_374;
static unsigned char g_474 = 9UL;
static char *g_562[8] = {&g_125, &g_125, &g_125, &g_125, &g_125, &g_125, &g_125, &g_125};
static char **g_561[2] = {&g_562[2], &g_562[2]};
static char **g_564 = &g_562[2];
static unsigned char ***g_614 = &g_191;
static int **g_672 = &g_132;
static int ***g_671[5][7][1] = {{{&g_672}, {&g_672}, {&g_672}, {&g_672}, {&g_672}, {&g_672}, {&g_672}}, {{&g_672}, {&g_672}, {&g_672}, {&g_672}, {&g_672}, {&g_672}, {&g_672}}, {{&g_672}, {&g_672}, {&g_672}, {&g_672}, {&g_672}, {&g_672}, {&g_672}}, {{&g_672}, {&g_672}, {&g_672}, {&g_672}, {&g_672}, {&g_672}, {&g_672}}, {{&g_672}, {&g_672}, {&g_672}, {&g_672}, {&g_672}, {&g_672}, {&g_672}}};
static unsigned g_692 = 1UL;
static short g_758 = 1L;
static unsigned char ***g_883 = &g_191;
static unsigned char g_890 = 0xFFL;
static unsigned char ****g_937[8][8] = {{&g_614, &g_190[6], &g_614, &g_614, &g_190[6], &g_614, &g_190[6], &g_614}, {&g_614, &g_190[6], &g_614, &g_614, &g_190[6], &g_614, &g_190[6], &g_614}, {&g_614, &g_190[6], &g_614, &g_614, &g_190[6], &g_614, &g_190[6], &g_614}, {&g_614, &g_190[6], &g_614, &g_614, &g_190[6], &g_614, &g_190[6], &g_614}, {&g_614, &g_190[6], &g_614, &g_614, &g_190[6], &g_614, &g_190[6], &g_614}, {&g_614, &g_190[6], &g_614, &g_614, &g_190[6], &g_614, &g_190[6], &g_614}, {&g_614, &g_190[6], &g_614, &g_614, &g_190[6], &g_614, &g_190[6], &g_614}, {&g_614, &g_190[6], &g_614, &g_614, &g_190[6], &g_614, &g_190[6], &g_614}};
static short g_965 = 0xC769L;
static unsigned *g_991 = &g_74;
static unsigned **g_990 = &g_991;
static unsigned ***g_989 = &g_990;



static short func_1(void);
static int * func_8(unsigned short p_9, unsigned short p_10, int p_11, int p_12);
static unsigned char func_23(unsigned p_24, unsigned char p_25, unsigned p_26);
static int * func_30(char p_31);
static short func_34(int * p_35, int p_36);
static int * func_43(short ** p_44, int p_45, unsigned p_46, unsigned p_47);
static char func_53(char p_54);
static unsigned short func_57(unsigned short p_58, char p_59, int * p_60, int * p_61, unsigned p_62);
static unsigned func_64(int * p_65, short p_66, int * p_67, unsigned short p_68, unsigned char * p_69);
static int * func_70(unsigned char * p_71);
static short func_1(void)
{
    int l_2 = 0x48D327CBL;
    unsigned l_5[5][9][2] = {{{0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}}, {{0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}}, {{0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}}, {{0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}}, {{0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}, {0UL, 0x831EB239L}}};
    unsigned char *l_601 = &g_77;
    short **l_602 = &g_38[4][2][0];
    int *l_617 = &g_6;
    unsigned short l_694 = 7UL;
    int l_695 = (-6L);
    int *l_700 = &g_81[5];
    unsigned l_713[2];
    unsigned short ***l_762 = &g_373;
    int *l_766 = &g_81[5];
    unsigned char l_808[6][10] = {{1UL, 0xDEL, 0x89L, 0xCFL, 7UL, 0xCFL, 0x89L, 0xDEL, 1UL, 253UL}, {1UL, 0xDEL, 0x89L, 0xCFL, 7UL, 0xCFL, 0x89L, 0xDEL, 1UL, 253UL}, {1UL, 0xDEL, 0x89L, 0xCFL, 7UL, 0xCFL, 0x89L, 0xDEL, 1UL, 253UL}, {1UL, 0xDEL, 0x89L, 0xCFL, 7UL, 0xCFL, 0x89L, 0xDEL, 1UL, 253UL}, {1UL, 0xDEL, 0x89L, 0xCFL, 7UL, 0xCFL, 0x89L, 0xDEL, 1UL, 253UL}, {1UL, 0xDEL, 0x89L, 0xCFL, 7UL, 0xCFL, 0x89L, 0xDEL, 1UL, 253UL}};
    char ***l_845 = &g_564;
    char ****l_844 = &l_845;
    int l_849 = 0L;
    int l_872 = 0x26608710L;
    unsigned short l_892 = 1UL;
    unsigned l_966 = 0xEC177026L;
    int ***l_976 = (void*)0;
    int l_983 = 0x8A43AFBBL;
    int l_984[6] = {0L, 0L, 0x008DB7FEL, 0L, 0L, 0x008DB7FEL};
    char l_992[6] = {0L, 0x26L, 0L, 0x26L, 0L, 0x26L};
    unsigned l_993 = 4294967287UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_713[i] = 0UL;
    if (l_2)
    {
        char l_7 = 0L;
        unsigned char *l_588 = &g_77;
        short **l_597 = (void*)0;
        char **l_620 = &g_562[0];
        int *l_678[4];
        unsigned char ****l_690 = (void*)0;
        unsigned char *****l_689 = &l_690;
        unsigned char l_691 = 250UL;
        char l_693 = 1L;
        unsigned short l_696 = 0x0A6DL;
        int i;
        for (i = 0; i < 4; i++)
            l_678[i] = (void*)0;
        for (l_2 = 17; (l_2 > (-6)); l_2 = safe_sub_func_int16_t_s_s(l_2, 5))
        {
            char l_13[9] = {0xF6L, 0xCAL, 0xF6L, 0xCAL, 0xF6L, 0xCAL, 0xF6L, 0xCAL, 0xF6L};
            short **l_599 = &g_38[5][7][1];
            int l_613 = 0L;
            char ***l_625 = &g_561[1];
            unsigned char l_628 = 0UL;
            unsigned char l_647[2];
            char l_677 = 1L;
            int i;
            for (i = 0; i < 2; i++)
                l_647[i] = 2UL;
            for (g_6 = 0; (g_6 <= 1); g_6 += 1)
            {
                int l_618 = 0x6A9D74E6L;
                char ***l_619[2];
                int *l_649 = &g_81[5];
                int i;
                for (i = 0; i < 2; i++)
                    l_619[i] = (void*)0;
            }
            for (l_7 = (-21); (l_7 > (-17)); l_7 = safe_add_func_uint32_t_u_u(l_7, 8))
            {
                return (*l_617);
            }
            (*l_617) = (*l_617);
            for (g_258 = 0; (g_258 <= 18); g_258 = safe_add_func_int16_t_s_s(g_258, 8))
            {
                unsigned short l_661 = 7UL;
                int **l_664 = &l_617;
                unsigned short *l_675 = &l_661;
                short *l_676 = &g_19;
                (*g_341) = (safe_rshift_func_uint16_t_u_u((*l_617), (safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u(((l_661 = l_7) || func_23((safe_rshift_func_uint16_t_u_s(((**g_373) = ((&g_211 != ((((*g_341) = l_7) == (*l_617)) , &l_602)) > (**g_373))), l_661)), l_628, l_7)), 2)), 3))));
                (*l_664) = &g_6;
                (**l_664) = (*g_341);
                (*g_341) = ((**l_664) = ((((safe_mul_func_uint16_t_u_u((((*l_625) = &g_562[7]) != (void*)0), ((*l_675) = (((**g_373) = ((l_613 = (safe_sub_func_uint32_t_u_u(g_75, func_23(l_7, (((safe_mod_func_int32_t_s_s(0xD25A68C5L, g_81[3])) , g_671[3][1][0]) != ((((**g_373) >= ((safe_rshift_func_uint16_t_u_u((((*l_676) = (((*l_675) = (*g_374)) , (**l_664))) >= (**l_664)), 5)) > l_7)) && (-2L)) , &g_672)), g_258)))) != 0UL)) ^ 0x4C19L)))) || (*l_617)) == l_677) , (*g_341)));
            }
        }
        for (g_52 = 0; g_52 < 8; g_52 += 1)
        {
            g_562[g_52] = (void*)0;
        }

        (*l_617) = (((*g_672) = l_678[2]) == (void*)0);
        (*g_672) = func_8((safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(0xE8FC85D5L, (((*l_601) = 0x7AL) , (((*l_617) , (func_34((*g_672), ((safe_sub_func_int16_t_s_s(((((*g_374) != 0x7A22L) , func_64(((safe_lshift_func_uint16_t_u_s((((*l_689) = &g_614) != (l_691 , &g_190[8])), (*l_617))) , l_678[2]), (*l_617), l_617, g_692, l_601)) && 8L), 0xB22EL)) | 0x11L)) | 0x67A3L)) || g_125)))), (-1L))), l_693)), l_694, l_695, l_696);

        ;
        ;
    }
    else
    {
        int *l_697[5] = {&l_695, &l_695, &l_695, &l_695, &l_695};
        int i;
        l_617 = ((*g_672) = l_697[3]);

        ;
        ;
        for (g_474 = 0; (g_474 == 50); g_474 = safe_add_func_int16_t_s_s(g_474, 2))
        {
            short l_701 = (-1L);
            unsigned char *l_702[2];
            int i;
            for (i = 0; i < 2; i++)
                l_702[i] = (void*)0;
            (**g_672) = (((&g_562[0] == (void*)0) >= 0xE4L) <= func_64(l_700, l_701, (*g_672), ((*g_374) = (**g_373)), l_702[1]));
            (*g_132) = 0xF1F04E03L;
        }
    }

    ;

    ;
    for (g_77 = 0; (g_77 != 50); g_77 = safe_add_func_int32_t_s_s(g_77, 1))
    {
        int *l_705 = &g_81[1];
        unsigned short *l_712 = &l_694;
        int l_714[6];
        short **l_733[4] = {&g_38[2][8][1], &g_38[5][4][0], &g_38[2][8][1], &g_38[5][4][0]};
        int i;
        for (i = 0; i < 6; i++)
            l_714[i] = 0xFAAF46B4L;
    }
    for (g_96 = 0; (g_96 >= 27); ++g_96)
    {
        unsigned l_757 = 4294967294UL;
        int l_770[4] = {0x9DD7A4A5L, 0x68C7EBDEL, 0x9DD7A4A5L, 0x68C7EBDEL};
        unsigned l_781 = 1UL;
        int l_821 = 0L;
        unsigned short *l_826[1];
        char l_838 = (-7L);
        short **l_865[8][6][3];
        unsigned char *l_871 = &g_77;
        unsigned l_981 = 4294967289UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_826[i] = &l_694;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 6; j++)
            {
                for (k = 0; k < 3; k++)
                    l_865[i][j][k] = &g_38[5][7][1];
            }
        }
        if (l_757)
            break;
    }
    return l_993;


}







static int * func_8(unsigned short p_9, unsigned short p_10, int p_11, int p_12)
{
    int *l_538 = &g_6;
    unsigned *l_547 = &g_74;
    short **l_550 = (void*)0;
    int *l_567 = &g_81[5];
    if (func_34(l_538, (((safe_add_func_uint16_t_u_u((0x4F6965D0L >= (safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((((*l_547) = 0UL) , (safe_lshift_func_uint8_t_u_s(((!(func_34(func_43(l_550, ((*l_538) , ((void*)0 == &p_11)), ((p_9 = (*g_374)) & ((*l_538) == p_11)), p_10), (*l_538)) != (*l_538))) != (*l_538)), p_12))), (*l_538))), (*l_538))), 0x49L))), p_12)) <= p_12) != p_10)))
    {
        unsigned char **l_566 = &g_108;
        int l_569 = 8L;
        unsigned **l_582 = (void*)0;
        unsigned **l_584 = &l_547;
        unsigned ***l_583 = &l_584;
        for (g_287 = 11; (g_287 != 52); ++g_287)
        {
            int **l_553 = (void*)0;
            int **l_554[6] = {(void*)0, (void*)0, &l_538, (void*)0, (void*)0, &l_538};
            unsigned char **l_565[8] = {(void*)0, &g_108, (void*)0, &g_108, (void*)0, &g_108, (void*)0, &g_108};
            int *l_576 = &g_6;
            int i;
            g_132 = &p_12;

            ;
            for (p_9 = (-24); (p_9 < 27); p_9 = safe_add_func_uint16_t_u_u(p_9, 5))
            {
                int *l_559 = (void*)0;
                if (p_9)
                    break;
                for (g_77 = (-19); (g_77 < 17); ++g_77)
                {
                    int *l_560[5][7] = {{&g_81[5], &g_81[5], (void*)0, (void*)0, (void*)0, &g_81[5], &g_81[5]}, {&g_81[5], &g_81[5], (void*)0, (void*)0, (void*)0, &g_81[5], &g_81[5]}, {&g_81[5], &g_81[5], (void*)0, (void*)0, (void*)0, &g_81[5], &g_81[5]}, {&g_81[5], &g_81[5], (void*)0, (void*)0, (void*)0, &g_81[5], &g_81[5]}, {&g_81[5], &g_81[5], (void*)0, (void*)0, (void*)0, &g_81[5], &g_81[5]}};
                    int i, j;
                    if (p_9)
                        break;
                    l_560[0][0] = l_559;
                    (*g_341) = 5L;
                }
            }
            for (g_52 = 1; (g_52 <= 5); g_52 += 1)
            {
                char ***l_563 = &g_561[1];
                short **l_568 = &g_38[5][7][1];
                int *l_578[1][10][3] = {{{&l_569, &l_569, &g_6}, {&l_569, &l_569, &g_6}, {&l_569, &l_569, &g_6}, {&l_569, &l_569, &g_6}, {&l_569, &l_569, &g_6}, {&l_569, &l_569, &g_6}, {&l_569, &l_569, &g_6}, {&l_569, &l_569, &g_6}, {&l_569, &l_569, &g_6}, {&l_569, &l_569, &g_6}}};
                int i, j, k;
            }
        }

        ;
        for (g_96 = 0; g_96 < 9; g_96 += 1)
        {
            g_190[g_96] = &g_191;
        }
        (*g_341) = (l_582 == ((p_9 || 0xC84CL) , ((*l_583) = &l_547)));
    }
    else
    {
        char **l_585 = &g_562[2];
        char ***l_586 = &g_564;
        (*l_586) = l_585;
        return &g_81[5];


    }

    ;
    return &g_81[5];



}







static unsigned char func_23(unsigned p_24, unsigned char p_25, unsigned p_26)
{
    char l_29[4] = {1L, (-1L), 1L, (-1L)};
    int *l_37 = &g_6;
    unsigned char **l_482 = &g_108;
    unsigned l_493 = 0xB82B9CA8L;
    unsigned l_495 = 0UL;
    int *l_524 = &g_81[4];
    int *l_525 = (void*)0;
    short *l_532 = &g_96;
    int l_533 = 1L;
    unsigned char *l_534[5][7] = {{&g_52, &g_120, &g_52, &g_120, &g_52, &g_120, &g_52}, {&g_52, &g_120, &g_52, &g_120, &g_52, &g_120, &g_52}, {&g_52, &g_120, &g_52, &g_120, &g_52, &g_120, &g_52}, {&g_52, &g_120, &g_52, &g_120, &g_52, &g_120, &g_52}, {&g_52, &g_120, &g_52, &g_120, &g_52, &g_120, &g_52}};
    int i, j;
    for (p_26 = 0; (p_26 == 56); p_26 = safe_add_func_uint32_t_u_u(p_26, 8))
    {
        unsigned char **l_480 = &g_108;
        unsigned char ***l_481[7];
        int **l_483 = &l_37;
        short **l_484 = &g_38[5][7][1];
        int *l_511[9][5][5] = {{{&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}}, {{&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}}, {{&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}}, {{&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}}, {{&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}}, {{&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}}, {{&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}}, {{&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}}, {{&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}, {&g_81[1], &g_81[2], &g_81[5], (void*)0, &g_81[5]}}};
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_481[i] = &l_480;
    }
    l_524 = l_525;

    ;
    if (func_34(l_524, ((*g_341) = func_64(&g_81[4], ((p_24 < (safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(5L, (-1L))), func_64(&g_81[5], ((*l_532) = p_25), (func_57(p_24, p_24, l_525, l_524, p_25) , l_37), l_533, l_534[4][6]))), p_26))) != 0xE7L), l_37, (*g_374), (*l_482)))))
    {
        int *l_535[3][4][2] = {{{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}, {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}, {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}};
        int **l_536 = &l_37;
        int i, j, k;
        (*l_536) = l_535[0][0][0];

        ;
    }
    else
    {
        return p_26;
    }

    ;
    return p_26;
}







static int * func_30(char p_31)
{
    int *l_83 = &g_6;
    short **l_172 = (void*)0;
    unsigned char *l_206 = &g_120;
    int *l_290[4][10][6] = {{{&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}}, {{&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}}, {{&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}}, {{&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}, {&g_6, (void*)0, (void*)0, (void*)0, &g_6, (void*)0}}};
    char l_291 = (-3L);
    unsigned char ***l_367[6][9][4] = {{{&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}}, {{&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}}, {{&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}}, {{&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}}, {{&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}}, {{&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}, {&g_191, &g_191, (void*)0, &g_191}}};
    unsigned short **l_376 = &g_374;
    int *l_381 = &g_6;
    short **l_436[6];
    short ***l_437 = (void*)0;
    short ***l_438[3];
    short **l_439 = &g_38[2][2][3];
    unsigned *l_440 = &g_287;
    char l_471 = (-1L);
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_436[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_438[i] = &g_211;
    for (g_39 = 1; (g_39 != 20); g_39++)
    {
        unsigned char *l_50 = (void*)0;
        unsigned char *l_51[1][7] = {{&g_52, &g_52, &g_52, &g_52, &g_52, &g_52, &g_52}};
        int l_72 = 0xD7B92BB7L;
        unsigned *l_73 = &g_74;
        unsigned char *l_76[9];
        int l_82 = (-7L);
        unsigned short *l_88[4][3] = {{&g_89[0][0][7], &g_89[0][0][7], &g_89[2][0][1]}, {&g_89[0][0][7], &g_89[0][0][7], &g_89[2][0][1]}, {&g_89[0][0][7], &g_89[0][0][7], &g_89[2][0][1]}, {&g_89[0][0][7], &g_89[0][0][7], &g_89[2][0][1]}};
        short **l_171 = &g_38[2][1][3];
        short ***l_170[2][4][5] = {{{&l_171, &l_171, &l_171, &l_171, &l_171}, {&l_171, &l_171, &l_171, &l_171, &l_171}, {&l_171, &l_171, &l_171, &l_171, &l_171}, {&l_171, &l_171, &l_171, &l_171, &l_171}}, {{&l_171, &l_171, &l_171, &l_171, &l_171}, {&l_171, &l_171, &l_171, &l_171, &l_171}, {&l_171, &l_171, &l_171, &l_171, &l_171}, {&l_171, &l_171, &l_171, &l_171, &l_171}}};
        unsigned char **l_184[5] = {&l_51[0][0], (void*)0, &l_51[0][0], (void*)0, &l_51[0][0]};
        unsigned l_380 = 0xA4EE61FDL;
        int **l_386 = (void*)0;
        unsigned char *l_388 = &g_52;
        unsigned short l_422 = 2UL;
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_76[i] = &g_77;
    }
    if (((l_172 == (l_439 = l_436[0])) & ((*l_440) = (*l_83))))
    {
        unsigned char *l_445 = (void*)0;
        int *l_447 = &g_81[5];
        int l_452 = 1L;
        int l_472 = 0x2FB95E0CL;
        unsigned l_473[9] = {18446744073709551615UL, 0xD40A2E0CL, 18446744073709551615UL, 0xD40A2E0CL, 18446744073709551615UL, 0xD40A2E0CL, 18446744073709551615UL, 0xD40A2E0CL, 18446744073709551615UL};
        int **l_475 = &l_83;
        int i;
        for (g_287 = (-30); (g_287 != 42); g_287 = safe_add_func_int16_t_s_s(g_287, 3))
        {
            unsigned char *l_448 = &g_120;
            int *l_449[4][10][6] = {{{&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}}, {{&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}}, {{&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}}, {{&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}, {&g_81[5], &g_81[0], (void*)0, &g_81[5], &g_81[5], (void*)0}}};
            unsigned short ***l_453 = &g_373;
            int **l_458[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_458[i] = &l_381;
            for (p_31 = 12; (p_31 <= 0); p_31 = safe_sub_func_int16_t_s_s(p_31, 2))
            {
                int **l_446[9][6][4] = {{{&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}}, {{&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}}, {{&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}}, {{&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}}, {{&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}}, {{&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}}, {{&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}}, {{&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}}, {{&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}, {&l_381, &l_290[1][9][3], (void*)0, (void*)0}}};
                int i, j, k;
                l_447 = func_70(l_445);

                ;
                l_449[0][1][0] = func_70(l_448);
                for (g_77 = (-21); (g_77 == 28); ++g_77)
                {
                    unsigned short ***l_454 = &g_373;
                    unsigned char *l_455 = &g_52;
                    l_452 = (-1L);
                    (*g_341) = (l_453 != l_454);
                    for (g_258 = 0; (g_258 <= 2); g_258 += 1)
                    {
                        int i;
                        l_447 = func_70((l_455 = l_455));
                        if ((*g_341))
                            break;
                        g_81[g_258] = (*g_341);
                    }
                    for (l_452 = 0; (l_452 > (-1)); --l_452)
                    {
                        g_341 = (void*)0;

                        ;
                        return l_290[1][9][3];


                    }
                }
            }

            ;
            l_447 = func_70(((*g_191) = (*g_191)));

            ;
            (*g_341) = ((!p_31) == (0L > func_53(g_75)));


            l_447 = (void*)0;

            ;
        }


        ;
        (*g_341) = func_64(((*l_475) = (((((*l_440) = (*l_381)) & (g_474 = ((l_452 = (*g_341)) && (safe_add_func_uint16_t_u_u((0UL ^ (+(safe_lshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(((*g_341) = (*g_341)), ((safe_rshift_func_int16_t_s_s((((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(l_471, 13)), (g_89[1][0][4] > (((*l_381) & (((!(g_74 = ((l_452 = (&l_376 != &g_373)) > 0x582AL))) , 0L) != l_472)) <= (**g_191))))) != (*g_108)) || (*l_381)), 4)) ^ p_31))), 1)))), l_473[1]))))) < g_52) , l_381)), p_31, l_381, (*g_374), (*g_191));
        for (p_31 = 0; (p_31 <= 8); p_31 += 1)
        {
            int *l_477 = &l_472;
            l_381 = &g_81[5];

            ;
            for (g_39 = 8; (g_39 >= 3); g_39 -= 1)
            {
                int *l_476 = (void*)0;
                for (g_123 = 6; (g_123 >= 3); g_123 -= 1)
                {
                    (*l_475) = l_476;

                    ;
                    for (g_74 = 0; (g_74 <= 5); g_74 += 1)
                    {
                        (*l_475) = l_477;

                        ;
                        if ((*g_341))
                            break;
                    }

                    ;
                }
            }
        }

        ;
        ;
    }
    else
    {
        return &g_81[5];


    }



    ;
    ;
    return &g_6;


}







static short func_34(int * p_35, int p_36)
{
    return p_36;
}







static int * func_43(short ** p_44, int p_45, unsigned p_46, unsigned p_47)
{
    int l_133 = 6L;
    int *l_134 = &g_81[4];
    int l_158 = 0xEE4AC108L;
    int **l_169 = &g_132;
    if ((l_133 == 0xF5B4EA81L))
    {
        int *l_135 = &g_81[5];
        unsigned l_142 = 0UL;
        char *l_143 = &g_125;
        int **l_144 = &g_132;
        (*l_135) = (((*g_108) > g_74) , func_57(g_81[1], g_89[2][0][7], l_134, l_135, (((+(*g_108)) != ((*l_143) = (safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s(((*l_135) >= ((*l_134) > (-1L))), l_142)), g_120)), p_45)))) , 1UL)));
        (*l_144) = ((*l_134) , (void*)0);

        ;
    }
    else
    {
        int **l_145[9] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
        unsigned *l_150 = (void*)0;
        unsigned *l_151 = &g_74;
        short **l_160 = (void*)0;
        short ***l_159 = &l_160;
        unsigned char *l_168 = (void*)0;
        int i;
        g_132 = (void*)0;

        ;
        (*l_159) = ((g_81[3] = (g_81[5] > (safe_add_func_int8_t_s_s((((*l_134) < 5L) || (func_57((safe_lshift_func_int8_t_s_u(((((*l_151) = g_39) & 1UL) == (safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s((l_158 = (((((-6L) < (((*g_108) = (((safe_lshift_func_int8_t_s_s(((*g_108) | func_34(l_134, ((p_47 > (*l_134)) > 0x9FB3AEF0L))), 7)) , (*l_134)) | 1L)) || p_46)) >= g_123) <= 0x0075B0AEL) | (-8L))), p_46)), p_47))), 0)), p_45, &g_81[5], l_134, g_52) & (*l_134))), p_46)))) , &g_38[5][7][1]);

        ;
        for (l_133 = 1; (l_133 < (-16)); l_133--)
        {
            unsigned short *l_163 = &g_89[9][0][5];
            int l_167 = 0x22A3D401L;
            l_167 = (((*l_163) = (g_74 | (*g_108))) & (safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((-7L))), ((*l_134) , l_167))));
        }
        l_134 = func_70(l_168);

        ;
    }

    ;
    ;
    (*l_169) = (l_134 = func_70(&g_52));

    ;
    ;
    return &g_6;


}







static char func_53(char p_54)
{
    int l_92 = 0x65AFEF71L;
    unsigned char *l_93 = (void*)0;
    unsigned *l_94 = &g_74;
    short *l_95 = &g_96;
    unsigned char l_97 = 1UL;
    int *l_98 = &g_81[5];
    unsigned char l_111 = 0x19L;
    int **l_129 = &l_98;
    int *l_131[3];
    int **l_130[10] = {&l_131[2], &l_131[2], &l_131[2], &l_131[2], &l_131[2], &l_131[2], &l_131[2], &l_131[2], &l_131[2], &l_131[2]};
    int i;
    for (i = 0; i < 3; i++)
        l_131[i] = &g_81[5];
    (*l_98) = (safe_lshift_func_int16_t_s_s((func_57(g_39, l_92, &l_92, func_70(l_93), (((l_92 && ((*l_95) = (((l_92 < ((void*)0 != l_94)) , g_75) , p_54))) , 255UL) <= g_81[5])) || l_97), l_92));
    for (g_96 = 3; (g_96 >= 0); g_96 -= 1)
    {
        int l_99[2];
        unsigned char *l_109 = &l_97;
        int i;
        for (i = 0; i < 2; i++)
            l_99[i] = 1L;
        (*l_98) = p_54;
        if (l_99[1])
            break;
        for (l_92 = 0; l_92 < 10; l_92 += 1)
        {
            for (l_97 = 0; l_97 < 1; l_97 += 1)
            {
                for (g_75 = 0; g_75 < 8; g_75 += 1)
                {
                    g_89[l_92][l_97][g_75] = 65531UL;
                }
            }
        }
        for (g_77 = 0; (g_77 <= 3); g_77 += 1)
        {
            unsigned ***l_100 = (void*)0;
            unsigned **l_102[7] = {&l_94, &l_94, &l_94, &l_94, &l_94, &l_94, &l_94};
            unsigned ***l_101 = &l_102[2];
            int *l_105 = &g_81[3];
            int i;
            (*l_101) = (void*)0;
        }
    }
    g_132 = ((*l_129) = &l_92);

    ;
    ;
    return p_54;


}







static unsigned short func_57(unsigned short p_58, char p_59, int * p_60, int * p_61, unsigned p_62)
{
    int *l_87[4] = {&g_6, &g_81[5], &g_6, &g_81[5]};
    int **l_86 = &l_87[1];
    int i;
    for (g_77 = 0; (g_77 > 44); g_77 = safe_add_func_int8_t_s_s(g_77, 8))
    {
        return g_6;
    }
    (*l_86) = p_60;


    (*l_86) = p_60;
    (*l_86) = p_61;


    return g_74;
}







static unsigned func_64(int * p_65, short p_66, int * p_67, unsigned short p_68, unsigned char * p_69)
{
    int l_78 = 0x1B0A093FL;
    int *l_79 = (void*)0;
    int *l_80[6][5][8] = {{{(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}, {(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}, {(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}, {(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}, {(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}}, {{(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}, {(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}, {(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}, {(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}, {(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}}, {{(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}, {(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}, {(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}, {(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}, {(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}}, {{(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}, {(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}, {(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}, {(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}, {(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}}, {{(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}, {(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}, {(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}, {(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}, {(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}}, {{(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}, {(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}, {(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}, {(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}, {(void*)0, &g_6, &g_81[5], &g_81[5], &g_81[5], &g_81[4], &g_81[5], &g_6}}};
    int i, j, k;
    g_81[0] = ((l_78 >= p_66) , (~g_74));
    g_81[4] = func_34(l_80[3][3][3], g_6);
    return g_81[0];
}







static int * func_70(unsigned char * p_71)
{
    return &g_6;


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_81[i], "g_81[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_89[i][j][k], "g_89[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    transparent_crc(g_287, "g_287", print_hash_value);
    transparent_crc(g_474, "g_474", print_hash_value);
    transparent_crc(g_692, "g_692", print_hash_value);
    transparent_crc(g_758, "g_758", print_hash_value);
    transparent_crc(g_890, "g_890", print_hash_value);
    transparent_crc(g_965, "g_965", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
