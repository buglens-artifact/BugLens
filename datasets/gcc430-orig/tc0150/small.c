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



static unsigned char g_9[7][2][7] = {{{249UL,0x27L,0x27L,249UL,1UL,9UL,1UL},{0x90L,0xE6L,3UL,0x35L,0x0CL,2UL,0x0CL}},{{249UL,0x27L,0x27L,249UL,1UL,9UL,1UL},{0x90L,0xE6L,3UL,0x35L,0x0CL,2UL,0x0CL}},{{249UL,0x27L,0x27L,249UL,1UL,9UL,1UL},{0x90L,0xE6L,3UL,0x35L,0x0CL,2UL,0x0CL}},{{249UL,0x27L,0x27L,249UL,249UL,247UL,249UL},{1UL,0xB5L,0xDBL,2UL,0x90L,255UL,0x90L}},{{9UL,2UL,2UL,9UL,249UL,247UL,249UL},{1UL,0xB5L,0xDBL,2UL,0x90L,255UL,0x90L}},{{9UL,2UL,2UL,9UL,249UL,247UL,249UL},{1UL,0xB5L,0xDBL,2UL,0x90L,255UL,0x90L}},{{9UL,2UL,2UL,9UL,249UL,247UL,249UL},{1UL,0xB5L,0xDBL,2UL,0x90L,255UL,0x90L}}};
static unsigned char g_10 = 0UL;
static int g_42[8][3][8] = {{{0x21F20595L,(-5L),0x68927649L,(-5L),(-2L),0xFBE62699L,0L,0xFBE62699L},{(-5L),(-1L),0x761E7FF5L,(-1L),(-5L),0xDDB2097EL,1L,0xC8F94914L},{0x761E7FF5L,0xE905F4D0L,0x26954EB8L,(-2L),0xC01D4C3FL,(-5L),0L,(-1L)}},{{0L,1L,0x26954EB8L,0L,0L,0x26954EB8L,1L,0L},{0xC01D4C3FL,0x21F20595L,0x761E7FF5L,0xC8F94914L,0x68927649L,0xE905F4D0L,0L,0x26954EB8L},{0L,(-2L),0x68927649L,(-2L),0xFBE62699L,0L,0xFBE62699L,(-2L)}},{{0xDDB2097EL,0L,0xDDB2097EL,0x26954EB8L,0L,0xE905F4D0L,0x68927649L,0xC8F94914L},{(-2L),0xDDB2097EL,0xFBE62699L,0L,(-5L),0x761E7FF5L,0L,0L},{(-2L),0L,0x21F20595L,0x21F20595L,0L,(-2L),0L,1L}},{{0xDDB2097EL,0xC01D4C3FL,0x761E7FF5L,0L,0xFBE62699L,0L,0xC8F94914L,0L},{(-5L),1L,0L,0L,(-5L),0L,0L,1L},{0xC8F94914L,(-5L),0L,0x21F20595L,0L,0x26954EB8L,(-5L),0L}},{{0x21F20595L,0xE905F4D0L,1L,0L,0xC8F94914L,(-5L),(-5L),0xC8F94914L},{0x26954EB8L,0L,0L,0x26954EB8L,1L,0L,0L,(-2L)},{1L,0L,0L,(-2L),0x68927649L,0xDDB2097EL,0xC8F94914L,0xE905F4D0L}},{{0L,0L,0x761E7FF5L,0xFBE62699L,0x761E7FF5L,0L,0L,0x21F20595L},{(-5L),0L,0x21F20595L,0L,0x26954EB8L,(-5L),0L,0xC01D4C3FL},{0xC01D4C3FL,0xE905F4D0L,0xFBE62699L,0xFBE62699L,1L,1L,0xFBE62699L,0L}},{{0L,0L,0xC01D4C3FL,0L,(-5L),0x26954EB8L,0L,0x21F20595L},{0x26954EB8L,(-1L),0L,(-5L),0xFBE62699L,0x21F20595L,0x68927649L,0x21F20595L},{(-1L),0L,1L,0L,(-1L),0xC8F94914L,0xC01D4C3FL,0L}},{{1L,(-2L),0xDDB2097EL,0xFBE62699L,0L,(-5L),0x761E7FF5L,0L},{0x761E7FF5L,0xC01D4C3FL,0xDDB2097EL,(-5L),(-5L),0xDDB2097EL,0xC01D4C3FL,0x761E7FF5L},{0L,0x26954EB8L,1L,0L,0L,(-2L),0x68927649L,0xDDB2097EL}}};
static int *g_51 = &g_42[6][0][7];
static short g_67 = 0x20EAL;
static unsigned short g_70 = 65535UL;
static int *g_73 = &g_42[7][2][4];
static int **g_72[3] = {&g_73,&g_73,&g_73};
static char g_86 = 0x34L;
static unsigned char g_88[8][7][4] = {{{1UL,1UL,0xF4L,0xEBL},{247UL,1UL,1UL,247UL},{0x3EL,251UL,1UL,6UL},{0x22L,0xB4L,252UL,5UL},{1UL,252UL,247UL,5UL},{251UL,0xB4L,7UL,6UL},{0x6DL,251UL,248UL,247UL}},{{0x17L,1UL,0UL,0xEBL},{0x1FL,1UL,0xA5L,5UL},{4UL,0x5AL,6UL,0x17L},{255UL,1UL,0UL,0x76L},{0xC3L,1UL,5UL,254UL},{0x3BL,5UL,0xB9L,0x8EL},{0x8EL,248UL,0UL,0xB9L}},{{0UL,0x6DL,248UL,0x94L},{1UL,0xE6L,0x82L,5UL},{7UL,1UL,0xCBL,0UL},{0xF4L,5UL,0UL,0xE0L},{0x76L,0x27L,0xE7L,0xDBL},{251UL,0x3BL,0xB5L,254UL},{0x82L,0xEBL,0xB4L,1UL}},{{7UL,0x8EL,1UL,0UL},{0x6DL,0UL,1UL,8UL},{0xE4L,247UL,0UL,252UL},{246UL,1UL,1UL,252UL},{0UL,0x9CL,0UL,1UL},{0xC3L,0xCBL,0x76L,248UL},{0xFDL,5UL,252UL,0xCBL}},{{5UL,0x27L,252UL,0x17L},{0xFDL,0x0EL,0x76L,0x16L},{0xC3L,4UL,0UL,5UL},{0UL,5UL,1UL,0x93L},{246UL,0UL,0UL,1UL},{0xE4L,248UL,0UL,0x82L},{0x29L,1UL,0x6DL,2UL}},{{0xCBL,1UL,0xE0L,247UL},{0UL,0xFDL,0x3BL,252UL},{0x18L,0x3BL,0UL,0x1CL},{247UL,0x3EL,0UL,0xC3L},{248UL,247UL,0x1CL,1UL},{0xCBL,0x5AL,0UL,1UL},{255UL,7UL,251UL,0xA5L}},{{0x9CL,1UL,2UL,1UL},{0xF4L,0UL,5UL,248UL},{0xE6L,253UL,0x2EL,1UL},{248UL,0x17L,1UL,7UL},{0xA5L,0x2EL,1UL,0xE0L},{1UL,0x3BL,248UL,1UL},{1UL,252UL,0x30L,0x30L}},{{0xFFL,0xFFL,0x2EL,2UL},{5UL,1UL,0xE4L,0xF4L},{1UL,0xADL,0x77L,0xE4L},{0x9CL,0xADL,0UL,0xF4L},{0xADL,1UL,1UL,2UL},{0xEBL,0xFFL,0x1CL,0x30L},{0UL,252UL,5UL,1UL}}};
static short *g_95 = &g_67;
static short **g_94[1] = {&g_95};
static unsigned g_131[8] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
static unsigned g_133[7][10] = {{4294967290UL,0x8B036ACEL,4294967295UL,0x8B036ACEL,4294967290UL,4294967290UL,0x8B036ACEL,4294967295UL,0x8B036ACEL,4294967290UL},{4294967290UL,0x8B036ACEL,4294967295UL,0x8B036ACEL,4294967290UL,4294967290UL,0x8B036ACEL,4294967295UL,0x8B036ACEL,4294967290UL},{4294967290UL,0x8B036ACEL,4294967295UL,0x8B036ACEL,4294967290UL,4294967290UL,0x8B036ACEL,4294967295UL,0x8B036ACEL,4294967290UL},{4294967290UL,0x8B036ACEL,4294967295UL,0x8B036ACEL,4294967290UL,4294967290UL,0x8B036ACEL,4294967295UL,0x8B036ACEL,4294967290UL},{4294967290UL,0x8B036ACEL,4294967295UL,0x8B036ACEL,4294967290UL,4294967290UL,0x8B036ACEL,4294967295UL,0x8B036ACEL,4294967290UL},{4294967290UL,0x8B036ACEL,4294967295UL,0x8B036ACEL,4294967290UL,4294967290UL,0x8B036ACEL,4294967295UL,0x8B036ACEL,4294967290UL},{4294967290UL,0x8B036ACEL,4294967295UL,0x8B036ACEL,4294967290UL,4294967290UL,0x8B036ACEL,4294967295UL,0x8B036ACEL,4294967290UL}};
static char *g_205 = &g_86;
static unsigned short g_229 = 0x9FA5L;
static int g_251[4][4][9] = {{{(-1L),0xDD0078BCL,0xBCE47EABL,0x1717C3DFL,0L,(-1L),0xF23F4BAEL,1L,(-3L)},{1L,1L,0x1BD201EBL,0x829D655AL,0x47BFBD1EL,0xC9B0C5A6L,0x1732A5C8L,0x4CCEA3E2L,0x1732A5C8L},{7L,1L,(-1L),(-1L),(-5L),0x90A9B597L,1L,1L,1L},{0x1BD201EBL,0x1732A5C8L,(-6L),0xB0FE0126L,0x8F3C2C29L,0xD6846D41L,0xCFA881E8L,1L,0x88130779L}},{{(-3L),0x97F08B36L,(-1L),1L,0xACBC3A3FL,1L,1L,(-3L),(-8L)},{0xCE087C82L,1L,0x00E8144AL,0x47BFBD1EL,0x47BFBD1EL,0x00E8144AL,1L,0xCE087C82L,0x4CCEA3E2L},{0x317C2296L,1L,0x90A9B597L,1L,1L,1L,1L,0xF23F4BAEL,1L},{0xC1A50624L,0x88130779L,0x4A214248L,(-8L),0L,1L,(-6L),(-3L),0x4CCEA3E2L}},{{0x1717C3DFL,(-8L),(-5L),0x317C2296L,0xDD0078BCL,0xDD0078BCL,0x317C2296L,(-5L),(-8L)},{0x8F3C2C29L,0x4CCEA3E2L,(-3L),(-6L),1L,0L,(-8L),0x4A214248L,0x88130779L},{2L,1L,0xF23F4BAEL,1L,1L,1L,1L,0x90A9B597L,1L},{1L,0x4CCEA3E2L,0xCE087C82L,1L,0x00E8144AL,0x47BFBD1EL,0x47BFBD1EL,0x00E8144AL,1L}},{{(-3L),(-8L),(-3L),1L,1L,0xACBC3A3FL,1L,(-1L),0x97F08B36L},{1L,0xD6846D41L,0xC1A50624L,0x88130779L,0x4A214248L,(-8L),0L,1L,(-6L)},{1L,(-8L),0x317C2296L,0L,1L,(-3L),0xA6F3B492L,0xA6F3B492L,(-3L)},{0x1BD201EBL,0xC1A50624L,0xCE087C82L,0xC1A50624L,0x1BD201EBL,0x1732A5C8L,(-6L),0xB0FE0126L,0x8F3C2C29L}}};
static int g_262 = 0x54566B5CL;
static int *g_261 = &g_262;
static int **g_260 = &g_261;
static unsigned short **g_312 = (void*)0;
static short g_369 = 1L;
static char g_408 = 0x8AL;
static int ***g_427 = &g_72[2];



static char func_1(void);
static unsigned char * func_11(unsigned char * p_12, unsigned short p_13, short p_14);
static unsigned char * func_15(unsigned char * p_16, unsigned char * p_17, unsigned char * p_18, unsigned char * p_19, unsigned char p_20);
static unsigned char * func_21(unsigned char * p_22, unsigned char * p_23, unsigned short p_24, unsigned char p_25, unsigned char p_26);
static unsigned char * func_27(int p_28, char p_29, unsigned char * p_30, short p_31);
static unsigned char func_34(unsigned char * p_35, unsigned p_36);
static short func_47(int p_48, unsigned p_49, int p_50);
static int func_53(unsigned char * p_54);
static unsigned char * func_55(int * p_56, unsigned char p_57);
static int * func_58(unsigned p_59, unsigned char * p_60, int p_61, int p_62, int * p_63);
static char func_1(void)
{
    int l_6 = (-8L);
    unsigned char *l_7 = (void*)0;
    unsigned char *l_8 = &g_9[5][1][6];
    int l_37 = 1L;
    char l_396 = 0x0CL;
    int l_411 = 0x33982F37L;
    unsigned char **l_433 = &l_7;
    unsigned l_434 = 0xB04E7B95L;
    (*g_51) = ((((safe_lshift_func_int8_t_s_s(((l_6 = ((*l_8) = ((safe_rshift_func_uint8_t_u_s(0UL, 3)) > l_6))) <= g_10), ((((l_37 = (((*g_205) = (1UL | ((g_10 & (((*l_433) = func_11(func_15(func_21((g_10 , func_27((((safe_rshift_func_uint8_t_u_s(func_34(&g_10, (l_37 ^ (safe_sub_func_int32_t_s_s((g_10 || l_37), 0x6F263393L)))), 2)) < l_37) >= l_37), l_37, &g_88[4][4][2], l_37)), l_7, l_396, l_37, l_396), &g_10, &g_10, l_8, g_131[5]), g_251[1][0][2], l_411)) == (void*)0)) <= 8L))) >= g_70)) ^ l_396) , (*g_51)) , (*g_205)))) | 0xEC14L) != 0x0C14L) , l_434);

    ;
    ;
    return l_434;
}







static unsigned char * func_11(unsigned char * p_12, unsigned short p_13, short p_14)
{
    int ***l_426 = &g_72[2];
    unsigned char *l_430 = &g_10;
    int *l_432 = (void*)0;
    for (g_408 = (-28); (g_408 != (-3)); g_408 = safe_add_func_int32_t_s_s(g_408, 9))
    {
        short *l_418 = &g_369;
        for (g_262 = 7; (g_262 >= (-5)); g_262--)
        {
            unsigned *l_419 = &g_131[2];
            int l_429 = 0L;
            short **l_431 = &l_418;
            (*g_51) = ((g_88[4][0][3] = ((safe_sub_func_uint32_t_u_u(((*l_419) = ((void*)0 != l_418)), (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((g_229 = (safe_add_func_uint8_t_u_u(((g_427 = l_426) != ((&g_72[1] == l_426) , &g_72[1])), func_53(((g_67 >= (safe_unary_minus_func_int8_t_s((0x1135L & func_47((g_88[4][5][0] , 0x620FA5E4L), g_88[6][5][1], l_429))))) , l_430))))), 15)) | 0UL), 1)))) , g_42[2][1][6])) & l_429);
            (*g_51) = (&l_418 == l_431);
        }
    }
    (**g_427) = l_432;

    ;
    return &g_10;


}







static unsigned char * func_15(unsigned char * p_16, unsigned char * p_17, unsigned char * p_18, unsigned char * p_19, unsigned char p_20)
{
    (*g_51) = (p_20 , ((void*)0 != &g_312));
    return &g_10;


}







static unsigned char * func_21(unsigned char * p_22, unsigned char * p_23, unsigned short p_24, unsigned char p_25, unsigned char p_26)
{
    unsigned char *l_401 = (void*)0;
    int l_406[2];
    int l_409 = (-7L);
    int *l_410 = &g_42[5][2][2];
    int i;
    for (i = 0; i < 2; i++)
        l_406[i] = 0L;
    for (g_369 = 0; (g_369 > (-10)); g_369--)
    {
        int *l_399[10] = {&g_42[4][1][1],&g_42[4][1][1],&g_42[4][1][1],&g_42[4][1][1],&g_42[4][1][1],&g_42[4][1][1],&g_42[4][1][1],&g_42[4][1][1],&g_42[4][1][1],&g_42[4][1][1]};
        int **l_400 = &g_73;
        char l_402 = 0x5BL;
        unsigned char *l_405[5] = {&g_88[4][0][3],&g_88[4][0][3],&g_88[4][0][3],&g_88[4][0][3],&g_88[4][0][3]};
        char *l_407 = &g_408;
        int i;
        (*l_400) = l_399[8];

        ;
        (*l_400) = &l_406[0];

        ;
    }

    ;
    return &g_88[4][0][3];



}







static unsigned char * func_27(int p_28, char p_29, unsigned char * p_30, short p_31)
{
    int *l_382 = &g_42[5][0][7];
    int **l_383 = (void*)0;
    int **l_384 = &g_73;
    unsigned short *l_389 = &g_229;
    int l_390 = 1L;
    unsigned char *l_395 = &g_88[4][0][3];
    (*l_384) = (l_382 = l_382);
    (*l_382) = func_53((p_31 , p_30));
    (*l_384) = func_58((func_47((((((func_47((*l_382), g_131[7], (safe_mod_func_int32_t_s_s((safe_mod_func_int32_t_s_s((((*l_389) = 65532UL) != (func_53(&g_10) > (l_390 = (**l_384)))), (safe_mod_func_int16_t_s_s((((((((*l_382) , (((safe_add_func_uint8_t_u_u((((void*)0 == l_382) ^ 0x13FE2F50L), (*g_205))) == g_86) < g_131[5])) && (*l_382)) , (*l_382)) && 0xF229L) <= 0UL) > g_133[1][4]), (**l_384))))), p_29))) , p_28) ^ p_28) & p_31) < (**l_384)) > (**l_384)), g_131[5], p_28) & 1L), l_395, (*l_382), (*g_73), (*l_384));

    ;
    return &g_10;


}







static unsigned char func_34(unsigned char * p_35, unsigned p_36)
{
    int *l_41 = &g_42[5][2][2];
    int **l_40 = &l_41;
    unsigned char l_52 = 9UL;
    int **l_75 = &g_73;
    int l_142 = (-10L);
    unsigned l_191 = 18446744073709551615UL;
    unsigned l_198 = 0x17B7F45CL;
    short l_271[3];
    unsigned char l_336[5] = {0x05L,0x05L,0x05L,0x05L,0x05L};
    char **l_344 = (void*)0;
    unsigned short *l_359[8] = {&g_229,&g_229,(void*)0,&g_229,&g_229,(void*)0,&g_229,&g_229};
    unsigned short **l_358 = &l_359[4];
    int l_380 = 0xE0FAAD68L;
    int i;
    for (i = 0; i < 3; i++)
        l_271[i] = (-9L);
    (*l_40) = (void*)0;

    ;
    for (p_36 = 0; (p_36 >= 10); p_36++)
    {
        short *l_66 = &g_67;
        int l_68[3];
        unsigned short *l_69 = &g_70;
        int **l_71 = (void*)0;
        int ***l_74[9] = {&g_72[2],&g_72[2],&g_72[2],&g_72[2],&g_72[2],&g_72[2],&g_72[2],&g_72[2],&g_72[2]};
        int i;
        for (i = 0; i < 3; i++)
            l_68[i] = 0x6833686AL;
    }
    (*g_73) = (*g_73);
    for (g_67 = (-30); (g_67 > 22); g_67 = safe_add_func_uint32_t_u_u(g_67, 1))
    {
        short l_147 = 0xA804L;
        char l_156 = 5L;
        int *l_157[3];
        int ***l_168 = (void*)0;
        unsigned char *l_196[9][5][5] = {{{(void*)0,&g_10,&g_88[4][0][3],&g_10,&g_88[4][0][3]},{(void*)0,(void*)0,&g_88[3][5][3],(void*)0,&g_88[4][0][3]},{&g_88[6][1][2],&g_10,&g_88[7][2][1],&g_10,&g_88[6][1][2]},{(void*)0,&l_52,&g_88[4][0][3],(void*)0,(void*)0},{&g_88[4][0][3],&g_10,&g_88[4][0][3],&g_10,(void*)0}},{{&g_88[4][0][3],(void*)0,&l_52,&l_52,(void*)0},{&g_88[6][1][2],&g_10,&g_88[4][0][3],&g_88[1][3][3],&g_88[6][1][2]},{(void*)0,(void*)0,&l_52,(void*)0,&g_88[4][0][3]},{(void*)0,&g_88[1][3][3],&g_88[4][0][3],&g_10,&g_88[4][0][3]},{(void*)0,(void*)0,&g_88[4][0][3],(void*)0,(void*)0}},{{&g_88[6][1][2],&g_10,&g_88[7][2][1],&g_10,&g_88[6][1][2]},{&g_88[4][0][3],&l_52,&g_88[3][5][3],(void*)0,(void*)0},{&g_88[4][0][3],&g_10,&g_88[4][0][3],&g_88[1][3][3],(void*)0},{(void*)0,(void*)0,(void*)0,&l_52,(void*)0},{&g_88[6][1][2],&g_88[1][3][3],&g_88[4][0][3],&g_10,&g_88[6][1][2]}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_10,&g_88[4][0][3],&g_10,&g_88[4][0][3]},{(void*)0,(void*)0,&g_88[3][5][3],(void*)0,&g_88[4][0][3]},{&g_88[6][1][2],&g_10,&g_88[7][2][1],&g_10,&g_88[6][1][2]},{(void*)0,&l_52,&g_88[4][0][3],(void*)0,(void*)0}},{{&g_88[4][0][3],&g_10,&g_88[4][0][3],&g_10,(void*)0},{&g_88[4][0][3],(void*)0,&l_52,&l_52,(void*)0},{&g_88[6][1][2],&g_10,&g_88[4][0][3],&g_88[1][3][3],&g_88[6][1][2]},{(void*)0,(void*)0,&l_52,(void*)0,&g_88[4][0][3]},{(void*)0,&g_88[1][3][3],&g_88[4][0][3],&g_10,&g_88[4][0][3]}},{{(void*)0,(void*)0,&g_88[4][0][3],(void*)0,(void*)0},{&g_88[6][1][2],&g_10,&g_88[7][2][1],&g_10,&g_88[6][1][2]},{&g_88[4][0][3],&l_52,&g_88[3][5][3],(void*)0,(void*)0},{&g_88[4][0][3],&g_10,&g_88[4][0][3],&g_88[1][3][3],(void*)0},{(void*)0,(void*)0,(void*)0,&l_52,(void*)0}},{{&g_88[6][1][2],&g_88[1][3][3],&g_88[4][0][3],&g_10,&g_88[6][1][2]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_10,&g_88[4][0][3],&g_10,&g_88[4][0][3]},{(void*)0,(void*)0,&g_88[3][5][3],(void*)0,&g_88[4][0][3]},{&g_88[6][1][2],&g_10,&g_88[7][2][1],&g_10,&g_88[6][1][2]}},{{(void*)0,&l_52,&g_88[4][0][3],(void*)0,(void*)0},{&g_88[4][0][3],&g_10,&g_88[4][0][3],&g_10,(void*)0},{&g_88[4][0][3],(void*)0,&l_52,&l_52,(void*)0},{&g_88[6][1][2],&g_10,&g_88[4][0][3],&g_88[1][3][3],&g_88[6][1][2]},{(void*)0,(void*)0,&l_52,(void*)0,&g_88[4][0][3]}},{{(void*)0,&g_88[1][3][3],&g_88[4][0][3],&g_10,&g_88[4][0][3]},{(void*)0,(void*)0,&g_88[4][0][3],(void*)0,(void*)0},{&g_88[6][1][2],&g_10,&g_88[7][2][1],&g_10,&g_88[6][1][2]},{&g_88[4][0][3],&l_52,&g_88[3][5][3],(void*)0,(void*)0},{&g_88[4][0][3],&g_10,&g_88[4][0][3],&g_88[1][3][3],(void*)0}}};
        unsigned l_214[6][8][4];
        unsigned char *l_240 = &l_52;
        int l_253 = 0x95D116E5L;
        int *l_254 = (void*)0;
        int l_295[3][4][7] = {{{0x835C08C9L,0xD38FAC8FL,0x835C08C9L,1L,0x353104D5L,0xB7EBC46DL,1L},{0x4F53CB6CL,0L,(-1L),(-9L),(-7L),0x66065819L,(-9L)},{0x1FDA2849L,5L,0x835C08C9L,(-9L),0xB7EBC46DL,0xB7EBC46DL,(-9L)},{0xF2F87219L,0L,0xF2F87219L,0xB261DA18L,(-7L),3L,0xB261DA18L}},{{0x1FDA2849L,0xD38FAC8FL,(-2L),(-9L),0x353104D5L,0x198BDFEDL,(-9L)},{0x4F53CB6CL,3L,0xF2F87219L,(-9L),3L,3L,(-9L)},{0x835C08C9L,0xD38FAC8FL,0x835C08C9L,1L,0x353104D5L,0xB7EBC46DL,1L},{0x4F53CB6CL,0L,(-1L),(-9L),(-7L),0x66065819L,(-9L)}},{{0x1FDA2849L,5L,0x835C08C9L,(-9L),0xB7EBC46DL,0xB7EBC46DL,(-9L)},{0xF2F87219L,0L,0xF2F87219L,0xB261DA18L,(-7L),3L,0xB261DA18L},{0x1FDA2849L,0xD38FAC8FL,(-2L),(-9L),0x353104D5L,0x198BDFEDL,(-9L)},{0x4F53CB6CL,3L,0xF2F87219L,(-9L),3L,3L,(-9L)}}};
        short **l_304 = &g_95;
        int l_352[1][8][8] = {{{0xE0C538D2L,0x810A8295L,1L,1L,0x810A8295L,0xE0C538D2L,0xE9AA10C5L,0x810A8295L},{0x82A1002BL,0xE0C538D2L,0xE9AA10C5L,0x810A8295L,0xE9AA10C5L,0xE0C538D2L,0x810A8295L,1L},{0x40F5263CL,0x82A1002BL,0L,0x810A8295L,0x810A8295L,0L,0x82A1002BL,0x40F5263CL},{1L,0x810A8295L,0xE0C538D2L,0xE9AA10C5L,0x810A8295L,0xE9AA10C5L,0xE0C538D2L,0x810A8295L},{0x40F5263CL,0xE0C538D2L,1L,0x40F5263CL,0xE9AA10C5L,0xE9AA10C5L,0x40F5263CL,1L},{0x810A8295L,0x810A8295L,0L,0x82A1002BL,0x40F5263CL,0L,0x40F5263CL,0x82A1002BL},{1L,0x82A1002BL,1L,0xE9AA10C5L,0x82A1002BL,0xE0C538D2L,0xE0C538D2L,0x82A1002BL},{0x82A1002BL,0xE0C538D2L,0xE0C538D2L,0x82A1002BL,0xE9AA10C5L,1L,0x82A1002BL,1L}}};
        unsigned short *l_357 = &g_229;
        unsigned short **l_356 = &l_357;
        int l_379 = 0xFA7F40F6L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_157[i] = &g_42[5][2][2];
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 8; j++)
            {
                for (k = 0; k < 4; k++)
                    l_214[i][j][k] = 0x7D722781L;
            }
        }
    }
    return g_133[0][6];
}







static short func_47(int p_48, unsigned p_49, int p_50)
{
    int *l_140 = &g_42[7][0][2];
    for (p_49 = 0; (p_49 <= 39); ++p_49)
    {
        int *l_141 = (void*)0;
        l_141 = l_140;

        ;
    }
    return p_50;
}







static int func_53(unsigned char * p_54)
{
    int l_137[2][10][10] = {{{(-1L),0xC12CE41FL,0L,0L,0xC12CE41FL,(-1L),0xC12CE41FL,0L,0L,0xC12CE41FL},{(-1L),0xC12CE41FL,0L,0L,0xC12CE41FL,(-1L),0xC12CE41FL,0L,0L,0xC12CE41FL},{(-1L),0xC12CE41FL,0L,0L,0xC12CE41FL,(-1L),0xC12CE41FL,0L,0L,0xC12CE41FL},{(-1L),0xC12CE41FL,0L,0L,0xC12CE41FL,(-1L),0xC12CE41FL,0L,0L,0xC12CE41FL},{0L,0L,0x408D08F6L,0x408D08F6L,0L,0L,0L,0x408D08F6L,0x408D08F6L,0L},{0L,0L,0x408D08F6L,0x408D08F6L,0L,0L,0L,0x408D08F6L,0x408D08F6L,0L},{0L,0L,0x408D08F6L,0x408D08F6L,0L,0L,0L,0x408D08F6L,0x408D08F6L,0L},{0L,0L,0x408D08F6L,0x408D08F6L,0L,0L,0L,0x408D08F6L,0x408D08F6L,0L},{0L,0L,0x408D08F6L,0x408D08F6L,0L,0L,0L,0x408D08F6L,0x408D08F6L,0L},{0L,0L,0x408D08F6L,0x408D08F6L,0L,0L,0L,0x408D08F6L,0x408D08F6L,0L}},{{0L,0L,0x408D08F6L,0x408D08F6L,0L,0L,0L,0x408D08F6L,0x408D08F6L,0L},{0L,0L,0x408D08F6L,0x408D08F6L,0L,0L,0L,0x408D08F6L,0x408D08F6L,0L},{0L,0L,0x408D08F6L,0x408D08F6L,0L,0L,0L,0x408D08F6L,0x408D08F6L,0L},{0L,0L,0x408D08F6L,0x408D08F6L,0L,0L,0L,0xC12CE41FL,0xC12CE41FL,0L},{0x408D08F6L,0L,0xC12CE41FL,0xC12CE41FL,0L,0x408D08F6L,0L,0xC12CE41FL,0xC12CE41FL,0L},{0x408D08F6L,0L,0xC12CE41FL,0xC12CE41FL,0L,0x408D08F6L,0L,0xC12CE41FL,0xC12CE41FL,0L},{0x408D08F6L,0L,0xC12CE41FL,0xC12CE41FL,0L,0x408D08F6L,0L,0xC12CE41FL,0xC12CE41FL,0L},{0x408D08F6L,0L,0xC12CE41FL,0xC12CE41FL,0L,0x408D08F6L,0L,0xC12CE41FL,0xC12CE41FL,0L},{0x408D08F6L,0L,0xC12CE41FL,0xC12CE41FL,0L,0x408D08F6L,0L,0xC12CE41FL,0xC12CE41FL,0L},{0x408D08F6L,0L,0xC12CE41FL,0xC12CE41FL,0L,0x408D08F6L,0L,0xC12CE41FL,0xC12CE41FL,0L}}};
    int i, j, k;
    l_137[0][6][3] = (p_54 != (void*)0);
    return l_137[1][5][2];
}







static unsigned char * func_55(int * p_56, unsigned char p_57)
{
    unsigned char *l_114 = &g_10;
    int l_115 = 0x86B46617L;
    int **l_116 = (void*)0;
    int **l_117 = &g_73;
    short *l_118 = &g_67;
    unsigned *l_129 = (void*)0;
    unsigned *l_130 = &g_131[5];
    unsigned *l_132[10];
    char l_134[1];
    short **l_135 = &g_95;
    int *l_136 = &g_42[5][2][2];
    int i;
    for (i = 0; i < 10; i++)
        l_132[i] = &g_133[1][4];
    for (i = 0; i < 1; i++)
        l_134[i] = 0x66L;
    (*l_117) = p_56;

    ;
    (*l_136) = (l_118 != ((*l_135) = ((safe_add_func_uint8_t_u_u(((l_118 != (void*)0) < 7L), (safe_lshift_func_uint8_t_u_s((((((0xE2A20AB3L == (g_133[1][4] = ((*l_130) = ((0L ^ (((safe_sub_func_int8_t_s_s(p_57, p_57)) > ((safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u(g_86, p_57)), g_67)) && 0x861CL)) == l_115)) || p_57)))) ^ l_134[0]) <= p_57) , l_134[0]) < 252UL), 5)))) , (void*)0)));

    ;
    return l_114;


}







static int * func_58(unsigned p_59, unsigned char * p_60, int p_61, int p_62, int * p_63)
{
    unsigned short l_80 = 0UL;
    char *l_85 = &g_86;
    unsigned char *l_87 = &g_88[4][0][3];
    int *l_89 = &g_42[6][2][5];
    short l_101 = 0x78A3L;
    int *l_111 = (void*)0;
    (*g_73) = (*g_73);
    if ((safe_lshift_func_uint8_t_u_u(((*l_87) = (safe_mod_func_uint16_t_u_u((~l_80), ((((safe_rshift_func_int16_t_s_s(l_80, 2)) , &p_62) != ((safe_sub_func_uint8_t_u_u((p_62 | (*g_73)), ((*l_85) = g_42[7][1][4]))) , &p_62)) || ((-1L) ^ ((p_62 >= g_10) < l_80)))))), 4)))
    {
        int **l_90 = &g_73;
        int l_93 = 1L;
        (*l_90) = l_89;
        for (g_86 = 0; (g_86 <= 2); g_86 += 1)
        {
            int *l_92 = &g_42[5][2][2];
            short **l_96[3][5][8] = {{{&g_95,(void*)0,&g_95,&g_95,(void*)0,&g_95,&g_95,(void*)0},{(void*)0,&g_95,&g_95,(void*)0,&g_95,&g_95,&g_95,&g_95},{&g_95,&g_95,(void*)0,&g_95,&g_95,&g_95,&g_95,&g_95},{&g_95,&g_95,(void*)0,&g_95,&g_95,&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95,&g_95,&g_95,&g_95,&g_95,&g_95}},{{&g_95,&g_95,(void*)0,&g_95,&g_95,(void*)0,&g_95,&g_95},{&g_95,&g_95,&g_95,&g_95,&g_95,&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95,&g_95,&g_95,&g_95,&g_95,(void*)0},{&g_95,&g_95,&g_95,&g_95,&g_95,(void*)0,&g_95,&g_95},{(void*)0,&g_95,(void*)0,&g_95,&g_95,&g_95,&g_95,&g_95}},{{(void*)0,&g_95,&g_95,(void*)0,&g_95,&g_95,&g_95,(void*)0},{(void*)0,&g_95,(void*)0,(void*)0,&g_95,&g_95,&g_95,&g_95},{(void*)0,&g_95,&g_95,&g_95,&g_95,(void*)0,&g_95,(void*)0},{&g_95,&g_95,&g_95,&g_95,&g_95,&g_95,&g_95,&g_95},{&g_95,&g_95,(void*)0,&g_95,&g_95,(void*)0,(void*)0,(void*)0}}};
            int i, j, k;
            for (p_61 = 0; (p_61 <= 3); p_61 += 1)
            {
                int *l_91 = &g_42[2][2][6];
                unsigned short l_109 = 65532UL;
                for (l_80 = 0; (l_80 <= 2); l_80 += 1)
                {
                    return l_91;



                }
                for (p_59 = 0; (p_59 <= 3); p_59 += 1)
                {
                    return l_92;



                }
                if ((*l_89))
                {
                    for (l_80 = 0; (l_80 <= 3); l_80 += 1)
                    {
                        (*l_90) = l_89;

                        ;
                        return l_92;


                    }
                    (*l_90) = &p_62;

                    ;
                }
                else
                {
                    unsigned l_110 = 9UL;
                    if (l_93)
                        break;
                    l_96[1][3][1] = g_94[0];
                    if ((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_s(l_101, (safe_sub_func_int32_t_s_s(((p_61 | g_70) > (((((g_42[4][1][3] , (((*l_90) = (void*)0) == (void*)0)) || ((g_67 | g_86) == ((((1L != p_59) ^ 0UL) <= p_61) , p_59))) != (*p_60)) | 252UL) , 0x3E4EL)), 4294967288UL)))) & (*l_89)), p_59)))
                    {
                        int *l_104 = &g_42[5][2][2];
                        (*l_90) = l_104;

                        ;
                        return (*l_90);


                    }
                    else
                    {
                        (*l_92) = (safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s(g_42[7][1][6], g_88[4][0][3])), l_109));
                        (*l_90) = (void*)0;
                        p_63 = &p_62;

                        ;
                        if ((*p_63))
                            continue;
                    }

                    ;
                    ;
                    for (l_101 = 2; (l_101 >= 0); l_101 -= 1)
                    {
                        int i, j, k;
                        (*l_90) = &p_62;

                        ;
                        (*p_63) = ((p_59 , (((*p_63) , l_110) <= ((*l_91) = 0x848FL))) > (g_88[4][0][3] | 1UL));
                        (*l_90) = (void*)0;

                        ;
                    }
                }

                ;
                for (l_109 = 0; (l_109 <= 3); l_109 += 1)
                {
                    return l_89;



                }
            }

            ;

            return l_92;



        }
    }
    else
    {
        for (g_86 = 2; (g_86 >= 0); g_86 -= 1)
        {
            return l_111;


        }
    }
    l_89 = (g_42[1][0][6] , l_111);

    ;
    return l_111;


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_9[i][j][k], "g_9[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_10, "g_10", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_42[i][j][k], "g_42[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_88[i][j][k], "g_88[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_131[i], "g_131[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_133[i][j], "g_133[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_229, "g_229", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_251[i][j][k], "g_251[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_369, "g_369", print_hash_value);
    transparent_crc(g_408, "g_408", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
