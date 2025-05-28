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



static char g_11 = 0x51L;
static const long long g_13 = (-1L);
static unsigned long long g_17[9][10] = {{18446744073709551609UL,0UL,0x85FAFE44FA3FDA37LL,18446744073709551609UL,2UL,0x7673ED13222C7E12LL,18446744073709551609UL,18446744073709551615UL,0x85FAFE44FA3FDA37LL,0x85FAFE44FA3FDA37LL},{2UL,0UL,0xCEE61780EEC299E8LL,0xE2499E68FC786C7ALL,0xE2499E68FC786C7ALL,0xCEE61780EEC299E8LL,0UL,2UL,0x09E13C9534CE5FEFLL,0xC509CA4F06702E63LL},{18446744073709551608UL,18446744073709551609UL,0x51EBF0DDD9CD4431LL,18446744073709551615UL,0x7673ED13222C7E12LL,18446744073709551615UL,0xC509CA4F06702E63LL,0x7673ED13222C7E12LL,18446744073709551609UL,0xE2499E68FC786C7ALL},{18446744073709551609UL,2UL,0x51EBF0DDD9CD4431LL,0x7673ED13222C7E12LL,1UL,0x7673ED13222C7E12LL,0x51EBF0DDD9CD4431LL,2UL,18446744073709551609UL,0x51EBF0DDD9CD4431LL},{18446744073709551615UL,18446744073709551608UL,0xCEE61780EEC299E8LL,0xC509CA4F06702E63LL,18446744073709551608UL,18446744073709551615UL,1UL,0x7673ED13222C7E12LL,0xE2499E68FC786C7ALL,18446744073709551609UL},{18446744073709551615UL,18446744073709551615UL,0xCEE61780EEC299E8LL,18446744073709551609UL,0xB35F19716E289AA5LL,0xB35F19716E289AA5LL,18446744073709551609UL,0xCEE61780EEC299E8LL,18446744073709551615UL,18446744073709551615UL},{0xCEE61780EEC299E8LL,0x7673ED13222C7E12LL,18446744073709551615UL,0x4C6A37D7C869B7D6LL,18446744073709551609UL,1UL,0xCEE61780EEC299E8LL,18446744073709551615UL,1UL,18446744073709551615UL},{0x7673ED13222C7E12LL,18446744073709551615UL,0xC509CA4F06702E63LL,0x7673ED13222C7E12LL,18446744073709551609UL,0xE2499E68FC786C7ALL,18446744073709551609UL,0x7673ED13222C7E12LL,0xC509CA4F06702E63LL,18446744073709551615UL},{18446744073709551609UL,0xCEE61780EEC299E8LL,2UL,1UL,0xB35F19716E289AA5LL,2UL,18446744073709551615UL,18446744073709551615UL,0xCEE61780EEC299E8LL,18446744073709551609UL}};
static unsigned g_18 = 0x00B8F3BEL;
static long long g_52 = 0x9618DE77BF6B3DADLL;
static int g_53[8][6] = {{0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L},{0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L},{0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L},{0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L},{0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L},{0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L},{0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L},{0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L,0x7CCB15B7L}};
static short g_115[3][9] = {{0x464FL,0x464FL,0x464FL,0x464FL,0x464FL,0x464FL,0x464FL,0x464FL,0x464FL},{0x464FL,0x464FL,0x464FL,0x464FL,0x464FL,0x464FL,0x464FL,0x464FL,0x464FL},{0x464FL,0x464FL,0x464FL,0x464FL,0x464FL,0x464FL,0x464FL,0x464FL,0x464FL}};
static char g_175 = 0x1CL;
static int g_193[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
static unsigned g_204 = 0x3231570AL;
static char g_262 = 0x82L;
static unsigned g_263 = 8UL;
static unsigned g_282 = 0x7F051BE4L;
static unsigned long long g_292 = 0xDB0181DC7B62B502LL;
static long long g_297 = 1L;
static int g_308 = 0x24C56DE6L;
static long long g_309 = (-1L);
static int g_362[6][3][10] = {{{0x72BF7BF8L,(-1L),0x2B5618F2L,0L,(-1L),(-8L),(-1L),(-8L),(-1L),0L},{1L,0x2E4A0732L,1L,0x2B5618F2L,(-1L),0x3FCF70D3L,0x2B5618F2L,(-1L),0L,1L},{(-1L),0x72BF7BF8L,0x733499AAL,(-5L),0x2E4A0732L,0L,(-1L),(-1L),0L,0x2E4A0732L}},{{0x72BF7BF8L,1L,1L,0x72BF7BF8L,0L,(-1L),0x2E4A0732L,(-8L),1L,(-1L)},{0L,(-1L),0x2B5618F2L,0x3FCF70D3L,(-1L),0x2B5618F2L,1L,0x2E4A0732L,1L,0x2B5618F2L},{(-5L),0x72BF7BF8L,1L,0x72BF7BF8L,(-5L),0xEC6E6118L,0L,(-5L),0L,(-1L)}},{{0x2E4A0732L,0L,0x3FCF70D3L,(-5L),(-1L),1L,0L,0L,0L,0L},{0x549BE8B9L,0x3FCF70D3L,0x733499AAL,0x733499AAL,0x3FCF70D3L,0x549BE8B9L,0x57B8F58DL,(-1L),1L,0x733499AAL},{0x2B5618F2L,(-8L),0L,0L,0L,0xEABCBB65L,0L,0x2B5618F2L,0x72BF7BF8L,0x2B5618F2L}},{{0x2B5618F2L,0x549BE8B9L,0L,0x3FCF70D3L,0L,0x549BE8B9L,0x2B5618F2L,0xEC6E6118L,0x549BE8B9L,(-8L)},{0x549BE8B9L,0x2B5618F2L,0xEC6E6118L,0x549BE8B9L,(-8L),1L,0L,(-1L),0xEC6E6118L,0xEC6E6118L},{(-8L),0x2B5618F2L,0x2E4A0732L,0L,0L,0x2E4A0732L,0x2B5618F2L,(-8L),0L,0L}},{{0x3FCF70D3L,0x549BE8B9L,0x57B8F58DL,(-1L),1L,0x733499AAL,0L,1L,0x549BE8B9L,0L},{0L,(-8L),0x57B8F58DL,1L,1L,1L,0x57B8F58DL,(-8L),0L,0x57B8F58DL},{(-1L),0x3FCF70D3L,0x2E4A0732L,0L,0x3FCF70D3L,(-5L),0L,(-1L),(-1L),0L}},{{0x2B5618F2L,0L,0xEC6E6118L,0L,0x57B8F58DL,0x57B8F58DL,0L,0xEC6E6118L,0L,(-1L)},{0x549BE8B9L,1L,0x57B8F58DL,0xEC6E6118L,0L,(-1L),0x549BE8B9L,(-1L),(-1L),0x57B8F58DL},{1L,(-1L),(-5L),1L,0L,0L,0L,1L,(-5L),(-1L)}}};
static int g_397 = (-1L);
static int g_419 = (-1L);
static unsigned short g_431[8][8] = {{65531UL,65535UL,0xEC53L,65534UL,65534UL,0xEC53L,65535UL,65531UL},{65535UL,0x94F6L,65531UL,0x4C7AL,65531UL,0x94F6L,65535UL,65535UL},{0x94F6L,0x4C7AL,0xEC53L,0xEC53L,0x4C7AL,0x94F6L,65534UL,0x94F6L},{0x4C7AL,0x94F6L,65534UL,0x94F6L,0x4C7AL,0xEC53L,0xEC53L,0x4C7AL},{0x94F6L,65535UL,65535UL,0x94F6L,65531UL,0x4C7AL,65531UL,0x94F6L},{65535UL,65531UL,65535UL,0xEC53L,65534UL,65534UL,0xEC53L,65535UL},{65531UL,65531UL,65534UL,0x4C7AL,65535UL,0x4C7AL,65534UL,65531UL},{65531UL,65535UL,0xEC53L,65534UL,65534UL,0xEC53L,65535UL,65531UL}};
static const unsigned char g_467 = 247UL;
static char g_539 = (-1L);
static unsigned char g_544 = 0x24L;
static unsigned g_594 = 0xEDE27F85L;
static long long g_770 = 0xD5214180F3690179LL;
static unsigned char g_771 = 254UL;
static long long g_812 = 0xDED6F3FCA934C316LL;
static unsigned short g_828 = 0x1C37L;
static volatile long long g_829[1][10] = {{0xB8DEBD81D157516BLL,0xB8DEBD81D157516BLL,0xB8DEBD81D157516BLL,0xB8DEBD81D157516BLL,0xB8DEBD81D157516BLL,0xB8DEBD81D157516BLL,0xB8DEBD81D157516BLL,0xB8DEBD81D157516BLL,0xB8DEBD81D157516BLL,0xB8DEBD81D157516BLL}};
static unsigned g_878 = 9UL;
static int g_890 = 0xEBC7075EL;
static unsigned long long g_1012[4][2][10] = {{{1UL,0xBB3F34784683178ELL,0xBB3F34784683178ELL,1UL,0xB8115F867AC54D3FLL,1UL,0xBB3F34784683178ELL,0xBB3F34784683178ELL,1UL,0xB8115F867AC54D3FLL},{1UL,0xBB3F34784683178ELL,0xBB3F34784683178ELL,1UL,0xB8115F867AC54D3FLL,1UL,0xBB3F34784683178ELL,0xBB3F34784683178ELL,1UL,0xB8115F867AC54D3FLL}},{{1UL,0xBB3F34784683178ELL,0xBB3F34784683178ELL,1UL,0xB8115F867AC54D3FLL,1UL,0xBB3F34784683178ELL,0xBB3F34784683178ELL,1UL,0xB8115F867AC54D3FLL},{1UL,0xBB3F34784683178ELL,0xBB3F34784683178ELL,1UL,0xB8115F867AC54D3FLL,1UL,0xBB3F34784683178ELL,0xBB3F34784683178ELL,1UL,0xB8115F867AC54D3FLL}},{{1UL,0xBB3F34784683178ELL,0xBB3F34784683178ELL,1UL,0xB8115F867AC54D3FLL,1UL,0xBB3F34784683178ELL,0xBB3F34784683178ELL,1UL,0xB8115F867AC54D3FLL},{1UL,0xBB3F34784683178ELL,0xBB3F34784683178ELL,1UL,0xB8115F867AC54D3FLL,1UL,0xBB3F34784683178ELL,0xBB3F34784683178ELL,1UL,0xB8115F867AC54D3FLL}},{{1UL,0xBB3F34784683178ELL,0xBB3F34784683178ELL,1UL,0xB8115F867AC54D3FLL,1UL,0xBB3F34784683178ELL,0xBB3F34784683178ELL,1UL,0xB8115F867AC54D3FLL},{1UL,0xBB3F34784683178ELL,0xBB3F34784683178ELL,1UL,0xB8115F867AC54D3FLL,1UL,0xBB3F34784683178ELL,0xBB3F34784683178ELL,1UL,0xB8115F867AC54D3FLL}}};
static const volatile unsigned g_1126 = 1UL;
static char g_1154 = 0x30L;
static char g_1297 = 2L;
static unsigned short g_1536 = 0x7FACL;
static unsigned g_1537 = 0UL;
static unsigned short g_1602 = 0xD323L;
static int g_1605 = 4L;
static unsigned long long g_1607 = 18446744073709551611UL;
static volatile int g_1621[5] = {(-10L),(-10L),(-10L),(-10L),(-10L)};
static long long g_1644 = 0xFADB89FA7CF09676LL;
static volatile long long g_1667 = 0xD1E61D47761F990FLL;



static unsigned long long func_1(void);
static unsigned short func_6(const long long p_7, int p_8, const unsigned char p_9, unsigned p_10);
static int func_20(long long p_21);
static char func_33(unsigned short p_34);
static unsigned long long func_35(unsigned p_36, unsigned long long p_37);
static unsigned func_38(long long p_39, long long p_40, int p_41, const int p_42);
static unsigned short func_67(unsigned short p_68, unsigned long long p_69, int p_70, unsigned char p_71, char p_72);
static const unsigned short func_75(unsigned long long p_76, const int p_77);
static unsigned long long func_84(char p_85, unsigned p_86);
static const unsigned char func_94(unsigned p_95, unsigned p_96, int p_97, int p_98, unsigned p_99);
static unsigned long long func_1(void)
{
    unsigned l_12 = 0x74AA0D72L;
    int l_16 = 5L;
    int l_19 = 0xA95534FDL;
    unsigned l_1658 = 1UL;
    volatile int l_1668[5] = {0x9A5CC3C6L,0x9A5CC3C6L,0x9A5CC3C6L,0x9A5CC3C6L,0x9A5CC3C6L};
    int i;
    l_19 ^= ((safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(0x951AL, (!(g_18 ^= func_6((g_11 = 4L), l_12, g_13, ((safe_lshift_func_uint16_t_u_s((0xC4L == ((l_16 = 0xD7L) , l_12)), 13)) ^ (g_17[4][3] = 0L))))))), 7)) != l_12);
    g_1644 &= func_20(l_19);
    for (g_11 = (-2); (g_11 >= (-25)); g_11 = safe_sub_func_int16_t_s_s(g_11, 9))
    {
        unsigned short l_1655 = 7UL;
        l_19 = (safe_mul_func_int16_t_s_s((safe_div_func_int32_t_s_s(1L, (safe_add_func_uint64_t_u_u((safe_add_func_uint64_t_u_u(g_263, l_1655)), l_19)))), (g_115[1][8] = (l_1655 || (safe_add_func_int8_t_s_s(g_1621[3], l_12))))));
        if (l_12)
            break;
        if (g_1602)
            continue;
    }
    l_1668[4] = ((l_1658 , (((safe_mul_func_uint8_t_u_u((g_419 , (safe_add_func_int16_t_s_s(g_18, (safe_add_func_int16_t_s_s(g_594, 0xFB09L))))), (safe_rshift_func_int16_t_s_u(0xAA26L, (l_19 = 0x35FEL))))) , (l_12 && (0x7795CF2D50EDAED9LL || g_829[0][9]))) , g_1012[0][0][3])) , g_1667);
    return g_544;
}







static unsigned short func_6(const long long p_7, int p_8, const unsigned char p_9, unsigned p_10)
{
    return p_8;
}







static int func_20(long long p_21)
{
    int l_22 = 4L;
    const int l_1275 = 2L;
    int l_1598 = 0x5045C037L;
    int l_1599[3];
    const int l_1600[4][10][5] = {{{0x027BDE49L,0x388BFC26L,(-1L),0x388BFC26L,0x027BDE49L},{0x90457310L,6L,(-3L),0x90457310L,(-3L)},{(-1L),(-1L),1L,0x7DC23AE4L,(-7L)},{6L,(-8L),(-8L),6L,(-3L)},{4L,0x7DC23AE4L,0x027BDE49L,0x027BDE49L,0x7DC23AE4L},{(-3L),(-8L),1L,0x2EE08DB4L,0x2EE08DB4L},{0x388BFC26L,(-1L),0x388BFC26L,0x027BDE49L,1L},{0x90457310L,6L,0x2EE08DB4L,6L,0x90457310L},{0x388BFC26L,4L,(-1L),0x7DC23AE4L,(-1L)},{(-3L),(-3L),0x2EE08DB4L,0x90457310L,0xE09B954BL}},{{4L,0x388BFC26L,0x388BFC26L,4L,(-1L)},{6L,0x90457310L,1L,1L,0x90457310L},{(-1L),0x388BFC26L,0x027BDE49L,1L,1L},{(-8L),(-3L),(-8L),1L,0x2EE08DB4L},{0x7DC23AE4L,4L,1L,4L,0x7DC23AE4L},{(-8L),6L,(-3L),0x90457310L,(-3L)},{(-1L),(-1L),1L,0x7DC23AE4L,(-7L)},{6L,(-8L),(-8L),6L,(-3L)},{4L,0x7DC23AE4L,0x027BDE49L,0x027BDE49L,0x7DC23AE4L},{(-3L),(-8L),1L,0x2EE08DB4L,0x2EE08DB4L}},{{0x388BFC26L,4L,0x027BDE49L,(-1L),(-7L)},{0x2EE08DB4L,0x90457310L,0xE09B954BL,0x90457310L,0x2EE08DB4L},{0x027BDE49L,0x7DC23AE4L,4L,1L,4L},{6L,6L,0xE09B954BL,0x2EE08DB4L,(-8L)},{0x7DC23AE4L,0x027BDE49L,0x027BDE49L,0x7DC23AE4L,4L},{0x90457310L,0x2EE08DB4L,(-3L),(-3L),0x2EE08DB4L},{4L,0x027BDE49L,(-1L),(-7L),(-7L)},{1L,6L,1L,(-3L),0xE09B954BL},{1L,0x7DC23AE4L,(-7L),0x7DC23AE4L,1L},{1L,0x90457310L,6L,0x2EE08DB4L,6L}},{{4L,4L,(-7L),1L,0x388BFC26L},{0x90457310L,1L,1L,0x90457310L,6L},{0x7DC23AE4L,1L,(-1L),(-1L),1L},{6L,1L,(-3L),0xE09B954BL,0xE09B954BL},{0x027BDE49L,4L,0x027BDE49L,(-1L),(-7L)},{0x2EE08DB4L,0x90457310L,0xE09B954BL,0x90457310L,0x2EE08DB4L},{0x027BDE49L,0x7DC23AE4L,4L,1L,4L},{6L,6L,0xE09B954BL,0x2EE08DB4L,(-8L)},{0x7DC23AE4L,0x027BDE49L,0x027BDE49L,0x7DC23AE4L,4L},{0x90457310L,0x2EE08DB4L,0x2EE08DB4L,0x2EE08DB4L,1L}}};
    char l_1637 = 0xDBL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1599[i] = 1L;
    if (((l_22 = (+0x48967C74L)) != (((((g_13 < (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((func_6((safe_rshift_func_uint16_t_u_s((l_1599[0] = (0xD7EFL <= (l_1598 = (g_13 >= func_33((((((g_17[6][9] , ((func_35(p_21, g_18) >= g_17[7][3]) > 1L)) == l_1275) , p_21) & 0L) , g_594)))))), p_21)), g_13, l_1600[0][1][1], p_21) ^ g_1154), p_21)) < g_18), p_21)), 8)), 0x8B85L))) != 1L) == g_18) <= p_21) <= p_21)))
    {
        short l_1601 = 0xCBF0L;
        unsigned long long l_1606 = 0UL;
        int l_1609 = (-3L);
        if (((((l_1599[2] = l_1601) || 0UL) , (g_1602 |= func_33(p_21))) <= (safe_mod_func_uint32_t_u_u(l_1275, ((g_1605 = p_21) , 4294967287UL)))))
        {
            int l_1608 = 8L;
            g_1607 ^= l_1606;
            l_1608 = 0x1C11E466L;
        }
        else
        {
            l_1609 |= g_771;
        }
    }
    else
    {
        unsigned char l_1624 = 1UL;
        int l_1627 = (-1L);
        int l_1628 = 3L;
        for (g_309 = 20; (g_309 != (-22)); --g_309)
        {
            int l_1612 = (-2L);
            l_1598 = l_1612;
        }
        g_1621[3] = (((safe_sub_func_uint64_t_u_u(0xBC893FDE9F675AB6LL, (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(((safe_mul_func_uint8_t_u_u(0x40L, l_1275)) && (p_21 = (((l_1628 = (g_1621[3] , (~(~(l_1599[2] = (255UL <= ((((func_35(p_21, (safe_mod_func_int8_t_s_s((l_1627 = func_33((l_22 = func_67(p_21, l_1624, (l_1598 ^= (safe_mul_func_int16_t_s_s(p_21, 0x1850L))), p_21, g_1012[0][0][3])))), 0x36L))) >= 0xBB2DL) || l_1624) || 255UL) <= p_21))))))) , 18446744073709551611UL) != l_1624))), l_1624)), 4294967295UL)))) >= 18446744073709551610UL) >= l_1275);
        for (g_52 = 0; (g_52 == 8); g_52 = safe_add_func_int32_t_s_s(g_52, 8))
        {
            l_22 |= p_21;
            if (g_829[0][6])
                break;
        }
    }
    l_1599[2] = func_75(((safe_div_func_int64_t_s_s(((!g_431[6][4]) >= (l_1600[2][6][0] < func_84(g_431[4][4], p_21))), p_21)) <= ((((((g_18 != (l_22 = 0xBE03L)) ^ ((safe_lshift_func_uint16_t_u_u(func_6((~p_21), g_539, l_1599[0], l_1599[0]), g_362[0][2][7])) <= p_21)) | g_829[0][2]) || p_21) && g_1621[1]) , l_1598)), l_1599[0]);
    l_1599[0] = ((g_18 == ((safe_lshift_func_uint16_t_u_u(p_21, func_75(l_1637, (l_1598 = (l_22 = 0x42017A6DL))))) ^ (g_890 = (safe_rshift_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(func_6((g_1621[2] , (g_770 = 5L)), ((!p_21) == (p_21 > 0x020B6DB1L)), p_21, g_1607), g_17[6][1])), 4))))) , g_308);
    for (g_204 = (-18); (g_204 == 39); ++g_204)
    {
        return l_1600[3][4][2];
    }
    return l_22;
}







static char func_33(unsigned short p_34)
{
    short l_1280 = 0x4CFCL;
    int l_1285 = (-9L);
    int l_1294[7] = {0xD521ECC9L,0xD521ECC9L,0xD521ECC9L,0xD521ECC9L,0xD521ECC9L,0xD521ECC9L,0xD521ECC9L};
    int l_1415[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    unsigned short l_1420 = 65535UL;
    unsigned char l_1453 = 3UL;
    unsigned char l_1484[8][9][1] = {{{254UL},{0UL},{0xC5L},{0xC5L},{0UL},{254UL},{0UL},{0xC5L},{0xC5L}},{{0UL},{254UL},{0UL},{0xC5L},{0xC5L},{0UL},{254UL},{0UL},{0xC5L}},{{0xC5L},{0UL},{254UL},{0UL},{0xC5L},{0xC5L},{0UL},{254UL},{0UL}},{{0xC5L},{0xC5L},{0UL},{254UL},{0UL},{0xC5L},{0xC5L},{0UL},{254UL}},{{0UL},{0xC5L},{0xC5L},{0UL},{254UL},{0UL},{0xC5L},{0xC5L},{0UL}},{{254UL},{0UL},{0xC5L},{0xC5L},{0UL},{254UL},{0UL},{0xC5L},{0xC5L}},{{0UL},{254UL},{0UL},{0xC5L},{0xC5L},{0UL},{254UL},{0UL},{0xC5L}},{{0xC5L},{0UL},{254UL},{0UL},{0xC5L},{0xC5L},{0UL},{254UL},{0UL}}};
    unsigned l_1491 = 0x99187D7DL;
    unsigned short l_1548 = 65535UL;
    int l_1570 = 0L;
    short l_1571 = 0xF74FL;
    int i, j, k;
    if ((0xC4L | (safe_mul_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u(0x7BL, func_35(l_1280, p_34))) ^ (l_1285 = (safe_sub_func_int64_t_s_s(func_6(p_34, g_17[4][3], (safe_div_func_int64_t_s_s(((l_1280 ^ (l_1280 <= l_1280)) || g_17[2][4]), l_1280)), g_17[5][9]), p_34)))) , g_193[7]), l_1280))))
    {
        unsigned l_1286[9] = {0x13492C47L,0x13492C47L,0x13492C47L,0x13492C47L,0x13492C47L,0x13492C47L,0x13492C47L,0x13492C47L,0x13492C47L};
        int l_1289[8][7] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{4L,4L,4L,4L,4L,4L,4L},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{4L,4L,4L,4L,4L,4L,4L},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{4L,4L,4L,4L,4L,4L,4L},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{4L,4L,4L,4L,4L,4L,4L}};
        char l_1333[1];
        int l_1421[6][5] = {{(-1L),0x54B4CB5EL,(-1L),(-1L),0x54B4CB5EL},{0L,0x07046949L,0x07046949L,0L,0x07046949L},{0x54B4CB5EL,0x54B4CB5EL,0x7BCF9EAAL,0x54B4CB5EL,0x54B4CB5EL},{0x07046949L,0L,0x07046949L,0x07046949L,0L},{0x54B4CB5EL,(-1L),(-1L),0x54B4CB5EL,(-1L)},{0L,0L,0x71962149L,0L,0L}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_1333[i] = (-1L);
        l_1286[7] = p_34;
        for (g_539 = 2; (g_539 >= 0); g_539 -= 1)
        {
            unsigned long long l_1295 = 9UL;
            int l_1300 = 0L;
            int l_1323 = 1L;
            char l_1452[9];
            int i;
            for (i = 0; i < 9; i++)
                l_1452[i] = 0x3EL;
            if ((safe_rshift_func_uint16_t_u_u(func_84((l_1289[4][3] = 5L), ((p_34 != ((l_1286[7] != (!p_34)) > 1L)) || (((safe_rshift_func_uint8_t_u_s((l_1285 = ((safe_rshift_func_int16_t_s_u((-1L), 4)) & g_878)), (+(((func_6(g_309, l_1294[4], p_34, l_1295) == p_34) & p_34) && g_419)))) <= (-6L)) > l_1294[2]))), 1)))
            {
                for (g_297 = 2; (g_297 >= 0); g_297 -= 1)
                {
                    unsigned char l_1296 = 254UL;
                    return l_1296;
                }
                g_890 ^= g_309;
                if (p_34)
                    break;
            }
            else
            {
                const char l_1317 = 0xF0L;
                long long l_1322 = 1L;
                int l_1336[6] = {3L,0x8A0D9288L,3L,3L,0x8A0D9288L,3L};
                int i;
                l_1294[2] = 0x9982600BL;
                for (g_890 = 2; (g_890 >= 0); g_890 -= 1)
                {
                    int l_1316 = 4L;
                    if ((g_1297 |= (l_1289[3][3] &= func_6(((((((func_84(g_829[0][6], l_1295) > l_1295) , g_13) , 0x08L) >= p_34) , g_1126) || p_34), p_34, g_18, g_544))))
                    {
                        char l_1318 = 8L;
                        int l_1319 = 1L;
                        l_1319 = ((safe_lshift_func_int16_t_s_u(g_175, 1)) != (((l_1300 ^= 0x8EL) <= (safe_add_func_int32_t_s_s((safe_sub_func_int64_t_s_s(func_6((safe_rshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u(l_1295, l_1289[4][3])), (safe_unary_minus_func_uint16_t_u((safe_mul_func_uint8_t_u_u((g_771 |= (safe_rshift_func_int8_t_s_s(g_18, (safe_rshift_func_int8_t_s_s(l_1316, g_193[1]))))), ((6L != func_6(l_1316, g_11, g_397, l_1289[1][2])) , p_34))))))), g_13, l_1294[1], g_17[4][3]), 18446744073709551614UL)), l_1317))) , l_1318));
                        l_1322 = (safe_lshift_func_uint8_t_u_s(p_34, l_1316));
                    }
                    else
                    {
                        l_1323 = (l_1286[0] , (((g_308 |= 1L) , (l_1300 = 0xC6E9L)) , g_297));
                        if (g_362[3][1][8])
                            continue;
                    }
                    for (g_52 = 0; (g_52 <= 2); g_52 += 1)
                    {
                        int l_1332 = 0L;
                        int i, j, k;
                        l_1332 = ((safe_add_func_uint16_t_u_u(((l_1289[4][3] = ((safe_mul_func_int16_t_s_s((((safe_div_func_int32_t_s_s(g_362[(g_890 + 3)][g_52][(g_539 + 2)], p_34)) , 0L) ^ g_362[(g_890 + 3)][g_52][(g_539 + 2)]), (((safe_div_func_int16_t_s_s((g_829[0][2] , g_282), g_812)) == ((0xB5L < func_6(p_34, g_1012[0][0][3], p_34, l_1316)) , 0x4F78A3383871E45BLL)) <= 0xCA25L))) || 4L)) && 4294967295UL), p_34)) , p_34);
                        l_1300 = 0x4F3C7360L;
                        l_1336[5] = (((l_1333[0] && (g_544 , (((safe_mul_func_uint8_t_u_u(p_34, 0xEFL)) , p_34) & g_362[4][2][3]))) && ((g_397 < 0xAC5DDA90L) > (0x62B8L != g_11))) | (-9L));
                    }
                }
                g_890 = (-9L);
                for (g_419 = 1; (g_419 >= 0); g_419 -= 1)
                {
                    unsigned l_1343 = 18446744073709551609UL;
                    int l_1346[1][1][4];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 4; k++)
                                l_1346[i][j][k] = (-1L);
                        }
                    }
                    for (g_175 = 0; (g_175 <= 1); g_175 += 1)
                    {
                        int i, j, k;
                        g_890 = ((safe_lshift_func_uint16_t_u_s(0x2532L, 13)) , (l_1336[(g_175 + 2)] = (-3L)));
                        l_1285 = (((-1L) || 0x58F0L) , (safe_mod_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(l_1336[(g_419 + 3)], func_6((l_1343 = g_1012[(g_175 + 1)][g_175][(g_539 + 4)]), g_431[(g_175 + 1)][(g_539 + 2)], (g_771 = (g_829[0][9] , ((l_1333[0] , (((4294967295UL > ((safe_mod_func_uint32_t_u_u(l_1346[0][0][2], g_1154)) & p_34)) > p_34) , 0xA7C4C68228536A26LL)) > l_1322))), p_34))), g_878)));
                        g_308 = p_34;
                    }
                    for (g_812 = 0; (g_812 <= 5); g_812 += 1)
                    {
                        int i;
                        l_1336[g_812] = 1L;
                        if (l_1336[g_812])
                            continue;
                    }
                }
            }
            g_890 = ((safe_sub_func_int8_t_s_s((p_34 >= (safe_div_func_uint64_t_u_u(18446744073709551609UL, (0xF074L || ((safe_lshift_func_int16_t_s_s((l_1333[0] && (safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(func_84(((safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s(0x24363A0964882EC7LL, (4L != p_34))), (!(+((safe_mul_func_int16_t_s_s((l_1285 < (g_362[2][2][2] <= g_193[6])), l_1294[2])) | 1L))))) , 0L), g_17[4][3]), l_1333[0])), l_1294[4]))), 2)) < 1UL))))), 0xA3L)) >= 0xD11FEB94L);
            if (p_34)
            {
                l_1285 = (safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((l_1294[2] = (p_34 = 0x2875L)), ((l_1333[0] , l_1280) ^ (l_1295 != 0L)))), (safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(func_67(g_193[5], ((safe_add_func_uint16_t_u_u(65535UL, ((safe_add_func_int16_t_s_s((((g_17[4][3] ^ g_204) , 0L) && l_1289[7][4]), l_1300)) > l_1286[7]))) == l_1295), l_1300, l_1300, g_362[1][0][7]), l_1280)), l_1333[0]))));
            }
            else
            {
                char l_1379[3][10][1] = {{{0x0BL},{0xDDL},{0x0BL},{0xDDL},{0x0BL},{0xDDL},{0x0BL},{0xDDL},{0x0BL},{0xDDL}},{{0x0BL},{0xDDL},{0x0BL},{0xDDL},{0x0BL},{0xDDL},{0x0BL},{0xDDL},{0x0BL},{0xDDL}},{{0x0BL},{0xDDL},{0x0BL},{0xDDL},{0x0BL},{0xDDL},{0x0BL},{0xDDL},{0x0BL},{0xDDL}}};
                int l_1408 = 0x4CBB586CL;
                int i, j, k;
                l_1379[1][4][0] = l_1294[2];
                if (l_1333[0])
                    break;
                for (l_1285 = 0; (l_1285 <= 2); l_1285 += 1)
                {
                    char l_1395[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                    int i;
                    for (g_262 = 0; (g_262 <= 2); g_262 += 1)
                    {
                        int l_1394 = (-1L);
                        l_1395[5] = func_84(g_297, (0x2330L < ((safe_mul_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(((g_52 == (safe_lshift_func_uint8_t_u_u((l_1294[4] = (l_1289[6][2] = (safe_sub_func_int32_t_s_s(g_175, l_1323)))), g_431[4][4]))) < ((safe_div_func_uint8_t_u_u((safe_div_func_int32_t_s_s(((safe_sub_func_int16_t_s_s(l_1333[0], l_1394)) < g_115[1][6]), g_1154)), p_34)) < l_1280)), 0x3E92L)) || 18446744073709551615UL), l_1394)) != 0xB433L)));
                        g_53[3][1] = (((p_34 , (p_34 , p_34)) != ((safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((safe_sub_func_int32_t_s_s(p_34, ((((18446744073709551609UL == (-1L)) || l_1395[5]) , (g_544 = ((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_uint16_t_u_s((((0xE2C393A2748DA96DLL == (safe_add_func_uint8_t_u_u((g_308 , l_1323), g_1012[1][1][9]))) < 1UL) , p_34), g_544)) & 0UL) & 0x14C1L), 4)) >= l_1395[5]))) & p_34))) , g_193[5]), 7)), l_1394)) , 4UL)) , g_115[1][6]);
                        if (l_1395[2])
                            break;
                    }
                    for (g_890 = 2; (g_890 >= 0); g_890 -= 1)
                    {
                        l_1408 = p_34;
                    }
                }
                l_1408 = ((l_1415[3] |= ((safe_add_func_int64_t_s_s(((((safe_rshift_func_uint16_t_u_u(((func_94((+g_204), g_431[3][7], l_1323, ((p_34 , ((g_878 = ((g_297 |= func_84(p_34, (0x2CEA19352F095EA4LL & (((l_1289[1][3] = (g_1297 = l_1294[4])) | (g_544 = (((safe_mod_func_int8_t_s_s(l_1300, ((g_18 == p_34) & l_1408))) , 0xE5E732E8L) <= g_594))) > l_1323)))) || 0x358E5E2F3409F057LL)) > g_115[1][8])) == 0x94L), g_467) || g_115[1][6]) != l_1285), 8)) <= g_13) > l_1294[5]) & 18446744073709551607UL), l_1294[4])) , p_34)) , 0x6CCF742EL);
            }
            g_308 = ((((0xC88CB4DD0891F454LL | g_308) <= (safe_div_func_int8_t_s_s(l_1285, 0xD6L))) & 18446744073709551615UL) && (0xE60B5506L < (l_1285 = ((l_1421[4][0] = ((l_1289[4][3] = (safe_mul_func_uint16_t_u_u(func_6(l_1280, (((l_1420 = 0xB1E89838493F6334LL) & (l_1289[4][6] &= ((((0x0D63L == 0xFFDCL) && 0xCC7EL) < l_1323) > g_115[1][6]))) , g_539), l_1300, g_292), 0x3DDFL))) , p_34)) , g_594))));
            for (l_1295 = 0; (l_1295 <= 2); l_1295 += 1)
            {
                unsigned long long l_1434 = 1UL;
                int l_1446 = 0xC857F1E6L;
                long long l_1451[4][6] = {{0x5287B6F0B2AF4743LL,(-1L),(-5L),(-5L),(-1L),0x5287B6F0B2AF4743LL},{4L,0x5287B6F0B2AF4743LL,(-5L),0x5287B6F0B2AF4743LL,4L,4L},{0xC09823985FF0EC71LL,0x5287B6F0B2AF4743LL,0x5287B6F0B2AF4743LL,0xC09823985FF0EC71LL,(-1L),0xC09823985FF0EC71LL},{0xC09823985FF0EC71LL,(-1L),0xC09823985FF0EC71LL,0x5287B6F0B2AF4743LL,0x5287B6F0B2AF4743LL,0xC09823985FF0EC71LL}};
                int l_1454 = (-9L);
                int i, j;
                l_1285 &= (l_1454 |= (safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((((safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((l_1420 <= p_34), (((safe_rshift_func_uint16_t_u_s((l_1434 = p_34), func_38(((safe_lshift_func_uint8_t_u_s((func_94((((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint64_t_u((g_17[4][3] | (((safe_sub_func_int16_t_s_s((0x184EL < (l_1452[5] = (((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s(l_1446, 14)), 1)) && g_262) , ((safe_sub_func_int8_t_s_s(p_34, (l_1451[3][4] |= ((((safe_add_func_int32_t_s_s(g_193[6], l_1421[0][0])) >= l_1323) , 0UL) || l_1300)))) < l_1415[1])))), g_829[0][2])) , 8L) ^ g_204)))), g_115[1][6])) != l_1294[1]) , l_1451[3][4]), p_34, g_17[4][3], p_34, g_1012[0][1][4]) || l_1300), p_34)) == g_539), l_1453, p_34, g_1154))) != g_17[7][7]) <= 1UL))), p_34)), p_34)) > g_18) | l_1333[0]), p_34)), l_1453)));
                for (l_1280 = 2; (l_1280 >= 0); l_1280 -= 1)
                {
                    const unsigned l_1457[1] = {4294967295UL};
                    int l_1460[4][6][2] = {{{1L,1L},{1L,0xDE27AB52L},{(-2L),1L},{0xB29A31B1L,(-1L)},{0xB29A31B1L,1L},{(-2L),0xDE27AB52L}},{{1L,1L},{1L,0xB29A31B1L},{0L,0xDE27AB52L},{0xDE27AB52L,0L},{0xB29A31B1L,1L},{1L,1L}},{{0xDE27AB52L,(-2L)},{1L,0xB29A31B1L},{(-1L),0xB29A31B1L},{1L,(-2L)},{0xDE27AB52L,1L},{1L,0L}},{{(-1L),0x1AF6E459L},{1L,1L},{0x1AF6E459L,(-1L)},{0L,0x1BEFFFA0L},{0x84995C91L,1L},{(-1L),0x84995C91L}}};
                    int i, j, k;
                    l_1460[3][1][0] |= (((g_878 >= 0xCF79DA19L) && p_34) <= (safe_lshift_func_int8_t_s_u(g_397, func_84(func_6(p_34, (l_1457[0] & (l_1454 = (l_1294[1] = ((safe_mul_func_uint8_t_u_u((p_34 ^ func_84(p_34, g_17[4][3])), g_1126)) == (-3L))))), l_1421[4][0], p_34), p_34))));
                    for (l_1323 = 6; (l_1323 >= 0); l_1323 -= 1)
                    {
                        int i, j;
                        l_1289[(l_1295 + 3)][l_1295] = l_1289[l_1323][l_1280];
                    }
                    g_419 = g_362[3][1][8];
                }
                for (g_544 = 0; (g_544 <= 2); g_544 += 1)
                {
                    return g_297;
                }
            }
        }
        l_1421[2][3] = (safe_sub_func_int16_t_s_s((safe_div_func_int64_t_s_s(func_35((safe_sub_func_int64_t_s_s(0xF7E54C6E8252DC9ELL, g_297)), ((safe_sub_func_int64_t_s_s(((+((255UL < (l_1421[0][2] != p_34)) && (l_1415[0] , p_34))) | (safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s((g_878 | ((l_1294[4] < g_193[6]) , g_770)), l_1333[0])), 0xB7L))), g_292)) && l_1420)), g_17[4][3])), (-1L)));
    }
    else
    {
        unsigned long long l_1477 = 0x80DE056FC2FE148BLL;
        int l_1478 = 0xE362A1F2L;
        int l_1487 = 0x136D5B6CL;
        int l_1488 = 0x21B18058L;
        l_1415[3] = (safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((252UL == (l_1478 = (l_1477 , 255UL))), ((l_1294[0] = (l_1488 |= (safe_mod_func_int64_t_s_s((0x6282L | ((+(safe_unary_minus_func_uint64_t_u((g_17[4][3] , g_13)))) , (safe_mod_func_uint32_t_u_u(l_1484[6][1][0], func_67((((safe_add_func_uint8_t_u_u(p_34, (l_1487 &= g_309))) <= g_1297) , l_1477), l_1420, g_878, p_34, g_11))))), g_1154)))) , 1L))), g_1012[2][1][6]));
        if ((l_1294[4] ^= (safe_rshift_func_int16_t_s_s(((l_1491 , (safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(func_84(l_1484[6][1][0], (((safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s((g_17[4][3] >= (g_309 >= g_397)), l_1478)), g_282)) , ((l_1484[6][1][0] >= (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint16_t_u(p_34)), 6)), p_34))) , (-1L))) , p_34)), l_1280)), 0UL))) , p_34), p_34))))
        {
            int l_1515[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            int l_1516 = 0xE6BBE7DCL;
            int i;
            l_1487 = ((safe_sub_func_uint64_t_u_u(func_38((l_1285 |= (g_878 > g_17[0][6])), p_34, (g_53[0][5] = (safe_mul_func_int16_t_s_s((-9L), ((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((((l_1515[2] = (((safe_mod_func_uint16_t_u_u(func_94(l_1484[1][4][0], l_1477, (p_34 != p_34), l_1484[3][7][0], l_1280), p_34)) && p_34) != p_34)) ^ 1UL) & l_1516), 15)), 5L)) > 65535UL)))), l_1415[5]), 18446744073709551615UL)) & g_1297);
            l_1487 = func_38(p_34, (g_52 |= ((safe_lshift_func_uint8_t_u_s(0x93L, 2)) ^ 1UL)), p_34, g_292);
        }
        else
        {
            unsigned l_1525 = 6UL;
            int l_1527 = 1L;
            l_1285 = ((g_467 != l_1487) <= (safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((((l_1527 = (p_34 < func_6((((safe_mod_func_int32_t_s_s((l_1525 | ((safe_unary_minus_func_uint32_t_u(func_75((l_1488 = func_38(l_1488, p_34, (g_397 &= g_175), l_1478)), g_18))) , p_34)), g_18)) ^ l_1484[6][1][0]) >= g_18), l_1491, g_18, l_1487))) < l_1525) , 0x3AL), 5)), l_1478)));
            g_397 = p_34;
        }
    }
    g_1537 ^= (g_362[5][0][8] >= (((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(((l_1294[4] = l_1415[1]) , g_397), 10)) > ((l_1285 ^= (((+6L) != g_17[4][3]) >= p_34)) ^ (0x9B8CFE79C6446D32LL == g_419))), (safe_mul_func_int8_t_s_s((p_34 , g_175), p_34)))) || g_1536) && l_1280));
    if ((g_812 > (((g_829[0][7] , ((p_34 <= ((safe_add_func_int64_t_s_s((safe_div_func_int64_t_s_s(((safe_sub_func_uint16_t_u_u(l_1484[2][3][0], p_34)) || ((safe_sub_func_uint32_t_u_u((g_1537 = (l_1294[1] , (safe_rshift_func_uint16_t_u_u(l_1548, 15)))), ((+(l_1294[5] , (g_17[4][1] = (g_53[0][0] || g_1126)))) & 0x22D0B95EA671962CLL))) | 1UL)), g_308)), l_1294[2])) || 1UL)) == g_13)) >= g_175) , 1L)))
    {
        unsigned short l_1557[1][1][10] = {{{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}}};
        short l_1572 = 0xAA7FL;
        int l_1573 = 0xFA97BA87L;
        int i, j, k;
        l_1571 &= (safe_sub_func_int8_t_s_s(g_467, (safe_mod_func_int8_t_s_s((safe_div_func_int16_t_s_s((((g_544 , (safe_mod_func_int32_t_s_s(p_34, l_1557[0][0][1]))) > ((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((18446744073709551611UL >= (((l_1557[0][0][1] && ((func_6(l_1415[1], ((((l_1570 ^= func_6(((g_1537 ^= func_84((((((~(safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(0x8139L, (l_1285 = (safe_sub_func_int16_t_s_s(g_204, g_878))))), g_193[6]))) >= 0UL) , l_1415[2]) && l_1294[4]) >= p_34), l_1557[0][0][6])) != p_34), g_594, g_544, p_34)) && g_115[2][8]) < 0x5CDEFD37F15385DDLL) , 0x253180ECL), p_34, g_544) > p_34) , 0x02A1L)) < (-1L)) <= l_1484[0][3][0])), 6)), l_1557[0][0][1])) > l_1484[0][1][0])) >= g_115[1][1]), p_34)), g_829[0][2]))));
        l_1572 = g_419;
        l_1573 ^= (g_53[0][5] = 0x154A82BEL);
    }
    else
    {
        unsigned l_1574 = 0x1C662ADAL;
        int l_1585 = (-1L);
        int l_1586 = 1L;
        l_1574 = (-7L);
        l_1586 = (l_1585 ^= ((safe_mod_func_int32_t_s_s((p_34 == (7UL | 1L)), (((safe_mod_func_uint32_t_u_u((p_34 <= p_34), 4294967294UL)) <= ((p_34 | (safe_mod_func_int8_t_s_s((g_594 || (safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(p_34, l_1484[6][1][0])), g_539))), g_13))) , l_1574)) , p_34))) || 0x92D596CF461B3428LL));
    }
    for (g_828 = 0; (g_828 < 12); g_828 = safe_add_func_int16_t_s_s(g_828, 8))
    {
        int l_1589 = 0L;
        l_1589 = p_34;
        l_1415[3] = ((l_1294[3] = g_1012[0][0][3]) , (p_34 || (safe_sub_func_int64_t_s_s((((l_1285 = (safe_add_func_int8_t_s_s((((g_431[4][4] <= (safe_mul_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((0xCAL >= ((g_193[3] , g_17[1][1]) , ((p_34 , p_34) , p_34))), 0L)) > g_467), l_1589))) && l_1589) , (-10L)), 0x58L))) > 1UL) | (-1L)), p_34))));
    }
    return g_397;
}







static unsigned long long func_35(unsigned p_36, unsigned long long p_37)
{
    unsigned short l_43 = 4UL;
    int l_46 = 0xE8B88BB1L;
    unsigned long long l_51 = 18446744073709551610UL;
    int l_1274 = 0xC41251B1L;
    l_1274 = (func_38((l_43 ^= 5L), g_17[0][3], (safe_lshift_func_uint16_t_u_s(g_13, (g_53[0][5] = ((l_46 = (func_6((g_52 = (l_46 == ((safe_mul_func_uint8_t_u_u(((p_36 , p_36) > (safe_div_func_int32_t_s_s(l_46, l_51))), (p_37 > 0x3CL))) & 1UL))), g_13, p_37, l_46) > p_36)) == l_51)))), p_36) != g_539);
    l_46 = p_37;
    return l_46;
}







static unsigned func_38(long long p_39, long long p_40, int p_41, const int p_42)
{
    int l_54 = 0x71CE904CL;
    int l_55 = 0x85AE3403L;
    unsigned l_682[1][8];
    const long long l_958 = (-1L);
    long long l_1006 = 0L;
    const int l_1009[10][10][2] = {{{0L,0x93EE1F98L},{0xB024974DL,0L},{0x52E3CD75L,0x8697B651L},{0x52E3CD75L,0L},{0xB024974DL,0x93EE1F98L},{0L,0x241C47BBL},{0xE31DB615L,0L},{0x8697B651L,0x52E3CD75L},{0x52E3CD75L,(-1L)},{0xE31DB615L,0x93EE1F98L}},{{(-1L),0x93EE1F98L},{0xE31DB615L,(-1L)},{0x52E3CD75L,0x52E3CD75L},{0x8697B651L,0L},{0xE31DB615L,0x241C47BBL},{0L,0x93EE1F98L},{0xB024974DL,0L},{0x52E3CD75L,0x8697B651L},{0x52E3CD75L,0L},{0xB024974DL,0x93EE1F98L}},{{0L,0x241C47BBL},{0xE31DB615L,0L},{0x8697B651L,0x52E3CD75L},{0x52E3CD75L,(-1L)},{0xE31DB615L,0x93EE1F98L},{(-1L),0x93EE1F98L},{0xE31DB615L,(-1L)},{0x52E3CD75L,0x52E3CD75L},{0x8697B651L,0L},{0xE31DB615L,0x241C47BBL}},{{0L,0x93EE1F98L},{0xB024974DL,0L},{0x52E3CD75L,0xB024974DL},{0xE31DB615L,0xA298B1DAL},{0x241C47BBL,0L},{0xA298B1DAL,(-1L)},{0x93EE1F98L,0xA298B1DAL},{0xB024974DL,0xE31DB615L},{0xE31DB615L,(-10L)},{0x93EE1F98L,0L}},{{(-10L),0L},{0x93EE1F98L,(-10L)},{0xE31DB615L,0xE31DB615L},{0xB024974DL,0xA298B1DAL},{0x93EE1F98L,(-1L)},{0xA298B1DAL,0L},{0x241C47BBL,0xA298B1DAL},{0xE31DB615L,0xB024974DL},{0xE31DB615L,0xA298B1DAL},{0x241C47BBL,0L}},{{0xA298B1DAL,(-1L)},{0x93EE1F98L,0xA298B1DAL},{0xB024974DL,0xE31DB615L},{0xE31DB615L,(-10L)},{0x93EE1F98L,0L},{(-10L),0L},{0x93EE1F98L,(-10L)},{0xE31DB615L,0xE31DB615L},{0xB024974DL,0xA298B1DAL},{0x93EE1F98L,(-1L)}},{{0xA298B1DAL,0L},{0x241C47BBL,0xA298B1DAL},{0xE31DB615L,0xB024974DL},{0xE31DB615L,0xA298B1DAL},{0x241C47BBL,0L},{0xA298B1DAL,(-1L)},{0x93EE1F98L,0xA298B1DAL},{0xB024974DL,0xE31DB615L},{0xE31DB615L,(-10L)},{0x93EE1F98L,0L}},{{(-10L),0L},{0x93EE1F98L,(-10L)},{0xE31DB615L,0xE31DB615L},{0xB024974DL,0xA298B1DAL},{0x93EE1F98L,(-1L)},{0xA298B1DAL,0L},{0x241C47BBL,0xA298B1DAL},{0xE31DB615L,0xB024974DL},{0xE31DB615L,0xA298B1DAL},{0x241C47BBL,0L}},{{0xB024974DL,0xF67F62E5L},{(-10L),0xB024974DL},{0L,(-1L)},{(-1L),(-8L)},{(-10L),0x8697B651L},{(-8L),0x8697B651L},{(-10L),(-8L)},{(-1L),(-1L)},{0L,0xB024974DL},{(-10L),0xF67F62E5L}},{{0xB024974DL,0x8697B651L},{0x4F4864D7L,0xB024974DL},{(-1L),0L},{(-1L),0xB024974DL},{0x4F4864D7L,0x8697B651L},{0xB024974DL,0xF67F62E5L},{(-10L),0xB024974DL},{0L,(-1L)},{(-1L),(-8L)},{(-10L),0x8697B651L}}};
    unsigned l_1013 = 6UL;
    unsigned short l_1024 = 1UL;
    unsigned long long l_1045[7][5][6] = {{{18446744073709551606UL,0xE5D7A26E97FC576DLL,0x5B4CA048AEDDF4E6LL,1UL,18446744073709551615UL,1UL},{0xE83ADF156EA3D716LL,18446744073709551612UL,0xE83ADF156EA3D716LL,18446744073709551611UL,1UL,0x31C9DDD18997FA8FLL},{0xAE6850F002666A77LL,1UL,1UL,0x46DDE4D9F6367A2ALL,0x22C9833AAFA4D534LL,0x18949B3495DCD0D6LL},{0xA581712B4F41CCDELL,18446744073709551615UL,1UL,0x46DDE4D9F6367A2ALL,0UL,18446744073709551611UL},{0xAE6850F002666A77LL,18446744073709551611UL,1UL,18446744073709551611UL,0xCCD36CBE88E37199LL,0UL}},{{0xE83ADF156EA3D716LL,18446744073709551606UL,0xBFA6B930E15FDB0CLL,1UL,2UL,0xA0D1C35137B336F8LL},{18446744073709551606UL,18446744073709551615UL,0xE5D7A26E97FC576DLL,1UL,18446744073709551615UL,0x91EFD23D50937391LL},{0x31C9DDD18997FA8FLL,0UL,4UL,0UL,0UL,18446744073709551614UL},{1UL,18446744073709551615UL,0x5301718950FD679ALL,4UL,1UL,0xE83ADF156EA3D716LL},{1UL,4UL,4UL,0x89D387F6D640840FLL,0x342F72789695C203LL,0x22C9833AAFA4D534LL}},{{0xEDE9539C1985C94CLL,18446744073709551612UL,18446744073709551610UL,0x07CF6C27FB0121A8LL,18446744073709551615UL,18446744073709551609UL},{0xCCD36CBE88E37199LL,1UL,18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551615UL},{0x4484EB8F6C99F166LL,0xA581712B4F41CCDELL,0xA581712B4F41CCDELL,0x4484EB8F6C99F166LL,0xA0D1C35137B336F8LL,18446744073709551615UL},{0x89D387F6D640840FLL,1UL,0xCCBB6CD532FFDF10LL,18446744073709551613UL,0UL,0xDF19A27C6A31E9ECLL},{18446744073709551615UL,0x342F72789695C203LL,0xE4DF3CE328B83EAALL,0xE5D7A26E97FC576DLL,0UL,0UL}},{{0UL,1UL,0xCCD36CBE88E37199LL,1UL,0xA0D1C35137B336F8LL,1UL},{1UL,0xA581712B4F41CCDELL,1UL,0x22C9833AAFA4D534LL,18446744073709551615UL,0xD8B168D4D161B178LL},{0x342F72789695C203LL,1UL,0xBFA6B930E15FDB0CLL,0xAE6850F002666A77LL,18446744073709551615UL,0xE5D7A26E97FC576DLL},{1UL,18446744073709551612UL,1UL,18446744073709551615UL,0x342F72789695C203LL,0UL},{18446744073709551610UL,4UL,0xAE6850F002666A77LL,0x342F72789695C203LL,0xD8B168D4D161B178LL,18446744073709551615UL}},{{0x6481526B6AA83033LL,0xBD3DE722CF19A460LL,0xE5D7A26E97FC576DLL,18446744073709551612UL,0UL,4UL},{0xE5D7A26E97FC576DLL,0xA0D1C35137B336F8LL,0x07CF6C27FB0121A8LL,0xDF19A27C6A31E9ECLL,0xBD3DE722CF19A460LL,0xD0DB020A22721B31LL},{18446744073709551615UL,18446744073709551611UL,9UL,0x18949B3495DCD0D6LL,0x07CF6C27FB0121A8LL,0x91EFD23D50937391LL},{0xDF19A27C6A31E9ECLL,18446744073709551609UL,1UL,18446744073709551609UL,0xDF19A27C6A31E9ECLL,1UL},{0x22C9833AAFA4D534LL,0xBFA6B930E15FDB0CLL,0x3A033B143F17757ALL,0x5301718950FD679ALL,0xE4DF3CE328B83EAALL,0xAE6850F002666A77LL}},{{0x31C9DDD18997FA8FLL,18446744073709551606UL,0x46DDE4D9F6367A2ALL,18446744073709551615UL,0xA581712B4F41CCDELL,18446744073709551615UL},{4UL,0xBD3DE722CF19A460LL,18446744073709551615UL,0x89D387F6D640840FLL,1UL,0xBFA6B930E15FDB0CLL},{0xA581712B4F41CCDELL,0xE5D7A26E97FC576DLL,2UL,0x4484EB8F6C99F166LL,0xEDE9539C1985C94CLL,0x3A033B143F17757ALL},{18446744073709551615UL,0UL,0xA581712B4F41CCDELL,0xCCD36CBE88E37199LL,0UL,0UL},{0x3A033B143F17757ALL,1UL,0x91EFD23D50937391LL,0xEDE9539C1985C94CLL,9UL,2UL}},{{0xE4DF3CE328B83EAALL,18446744073709551609UL,0x31C9DDD18997FA8FLL,0x18949B3495DCD0D6LL,0xD8B168D4D161B178LL,0xE5D7A26E97FC576DLL},{0x91EFD23D50937391LL,0UL,18446744073709551615UL,0xA1D00C47E282045ELL,0x22C9833AAFA4D534LL,1UL},{1UL,0UL,0x22C9833AAFA4D534LL,0UL,18446744073709551606UL,0x31C9DDD18997FA8FLL},{18446744073709551610UL,0x07CF6C27FB0121A8LL,18446744073709551615UL,18446744073709551609UL,2UL,0xBD3DE722CF19A460LL},{0xEDE9539C1985C94CLL,4UL,1UL,1UL,4UL,0xEDE9539C1985C94CLL}}};
    unsigned l_1080[2];
    unsigned short l_1111 = 65535UL;
    unsigned short l_1157 = 3UL;
    short l_1192 = 5L;
    int l_1203 = 0x895F2143L;
    long long l_1230 = (-1L);
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
            l_682[i][j] = 0x1BA5810AL;
    }
    for (i = 0; i < 2; i++)
        l_1080[i] = 1UL;
lbl_964:
    l_54 = 0xA2E55FDCL;
lbl_944:
    p_41 = (func_6(((((l_55 = l_54) ^ 0x456AA7D8L) && (((safe_div_func_uint64_t_u_u(((safe_add_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u(0x6366113C509C0D0DLL, (safe_lshift_func_int16_t_s_s((g_18 <= (safe_div_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(g_17[4][3])), func_67(l_54, ((safe_div_func_uint16_t_u_u(func_75((((safe_lshift_func_int8_t_s_s((safe_mod_func_int64_t_s_s(0xBB8FA76005BF03BELL, l_54)), 7)) & p_41) & 1UL), g_18), l_682[0][4])) & 0x5EDB31B6L), l_682[0][4], g_17[4][3], g_18)))), 1)))) ^ 0x88L), l_55)) != l_682[0][1]), 0x582674270DDC38DALL)) ^ g_467) , 0xCEL)) , l_682[0][7]), g_467, l_54, p_42) , p_40);
    if (((safe_div_func_uint8_t_u_u((((func_84(p_39, g_431[4][4]) ^ (safe_lshift_func_int16_t_s_s(g_890, func_6(p_39, ((safe_add_func_uint16_t_u_u(l_682[0][4], 0x8160L)) == (safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((l_55 = l_682[0][6]), (g_17[4][3] >= g_362[3][1][8]))), l_682[0][6]))), g_397, g_115[1][5])))) , p_42) <= l_54), 1L)) , p_40))
    {
        short l_936 = 0x1273L;
        int l_962 = 1L;
        int l_963 = 0x713D1964L;
        int l_1031 = (-1L);
        if (g_362[3][1][8])
        {
            unsigned long long l_939 = 1UL;
            unsigned l_956 = 1UL;
            int l_986[3];
            int l_987 = 0xAE83BA8BL;
            int i;
            for (i = 0; i < 3; i++)
                l_986[i] = 0x1633F319L;
            for (g_11 = 0; (g_11 == 26); g_11 = safe_add_func_int32_t_s_s(g_11, 4))
            {
                unsigned long long l_957 = 0UL;
                int l_988[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_988[i] = (-1L);
                for (g_262 = 0; (g_262 > 26); ++g_262)
                {
                    int l_949 = 1L;
                    if ((safe_sub_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(l_936, (safe_lshift_func_int16_t_s_u((((~((l_939 == (((p_42 < (safe_div_func_uint32_t_u_u((l_939 == (safe_sub_func_int16_t_s_s(l_936, g_539))), g_362[4][0][4]))) == l_939) , g_362[4][1][2])) & g_539)) != g_17[4][3]) , 9L), l_939)))), p_39)))
                    {
                        p_41 = 8L;
                    }
                    else
                    {
                        if (g_890)
                            goto lbl_944;
                        p_41 = 5L;
                        p_41 = (-6L);
                    }
                    if (l_936)
                        continue;
                    p_41 = (safe_lshift_func_int16_t_s_s(g_770, p_40));
                    for (g_878 = 0; (g_878 == 24); g_878 = safe_add_func_uint32_t_u_u(g_878, 3))
                    {
                        int l_959 = 0x46260688L;
                        p_41 |= ((l_949 > ((p_39 && g_262) & (1UL | ((safe_mod_func_uint64_t_u_u(((g_309 = ((safe_sub_func_uint32_t_u_u(l_939, ((g_362[4][0][9] | ((l_959 &= func_6(((p_40 , p_39) | (safe_mul_func_uint16_t_u_u(l_956, l_957))), l_55, l_958, l_957)) < l_956)) >= g_890))) & g_397)) ^ (-1L)), 3L)) && 0x8C22L)))) , l_956);
                        l_963 |= (l_962 |= (safe_add_func_int8_t_s_s(l_957, p_40)));
                        if (g_292)
                            goto lbl_964;
                        p_41 = (l_939 < l_959);
                    }
                }
                g_53[6][5] = (((((((l_939 > g_17[4][3]) || func_94(((safe_mul_func_uint8_t_u_u((((safe_unary_minus_func_uint16_t_u(((safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((l_988[3] = (((g_467 == (+(safe_add_func_uint8_t_u_u((((((safe_sub_func_uint16_t_u_u((((p_42 != (((safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(l_936, (((l_986[2] = (l_55 = (safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(func_94((0xB1CA6490AE00A121LL && func_94((0x14E6L ^ (l_986[2] = ((func_6((0xC6562ECFL <= l_957), g_397, p_42, g_362[2][0][4]) | g_13) , l_55))), p_41, g_362[0][2][8], p_41, l_963)), l_956, l_963, g_770, p_42), 2)), l_963)))) ^ 0L) , l_956))), 0x60CF815BL)) , 1UL) , 0xF6E9E436L)) != p_41) & p_39), 0x918EL)) >= 0L) || 0xB563L) & l_962) ^ p_42), 0x29L)))) <= l_987) >= g_770)) >= 0x49L), 0x9DL)), p_41)) <= l_939))) , p_42) , l_682[0][5]), l_957)) <= l_957), g_812, g_829[0][2], p_42, l_939)) || p_42) | l_957) >= g_771) != p_39) ^ 0x3AL);
            }
            return l_682[0][4];
        }
        else
        {
            unsigned short l_1007[6] = {0x8EF6L,65531UL,0x8EF6L,0x8EF6L,65531UL,0x8EF6L};
            int l_1008 = 8L;
            int l_1011[10][8][3] = {{{0x14CD4B6BL,0x3B2E21FAL,(-1L)},{0x65503905L,0xFB0D3C30L,0x969B02A0L},{6L,0L,1L},{0L,(-9L),0x034D2ADCL},{6L,(-4L),0x95AA8DCCL},{0x65503905L,0x85E60058L,0xBB91C52BL},{0x14CD4B6BL,0xFDEF6069L,1L},{(-4L),0x85E60058L,0L}},{{0x2D6CB0F7L,(-4L),(-1L)},{0xAC1016C0L,(-9L),0xAC1016C0L},{6L,6L,(-1L)},{(-4L),0x5723F2A9L,0x034D2ADCL},{0x55901F8CL,(-1L),(-1L)},{0xBB91C52BL,0x85E60058L,0x65503905L},{0x55901F8CL,0L,(-1L)},{(-4L),0xCF5DD8EBL,0x79875344L}},{{6L,0x4165CD61L,(-1L)},{0x0F997D1EL,0xCF5DD8EBL,0xBB91C52BL},{0xF93A6340L,0L,(-1L)},{0xEB9EC7D2L,0x85E60058L,0xEB9EC7D2L},{6L,(-1L),(-1L)},{0xAC1016C0L,0x5723F2A9L,0xBB91C52BL},{0x55901F8CL,6L,(-1L)},{0x034D2ADCL,0x85E60058L,0x79875344L}},{{0x55901F8CL,0x3B2E21FAL,(-1L)},{0xAC1016C0L,0xCF5DD8EBL,0x65503905L},{6L,1L,(-1L)},{0xEB9EC7D2L,0xCF5DD8EBL,0x034D2ADCL},{0xF93A6340L,0x3B2E21FAL,(-1L)},{0x0F997D1EL,0x85E60058L,0x0F997D1EL},{6L,6L,(-1L)},{(-4L),0x5723F2A9L,0x034D2ADCL}},{{0x55901F8CL,(-1L),(-1L)},{0xBB91C52BL,0x85E60058L,0x65503905L},{0x55901F8CL,0L,(-1L)},{(-4L),0xCF5DD8EBL,0x79875344L},{6L,0x4165CD61L,(-1L)},{0x0F997D1EL,0xCF5DD8EBL,0xBB91C52BL},{0xF93A6340L,0L,(-1L)},{0xEB9EC7D2L,0x85E60058L,0xEB9EC7D2L}},{{6L,(-1L),(-1L)},{0xAC1016C0L,0x5723F2A9L,0xBB91C52BL},{0xA9D1B70BL,0x95AA8DCCL,0xC8A4E0B4L},{1L,0xF27946B7L,(-1L)},{0xA9D1B70BL,0x14CD4B6BL,0L},{1L,0x2F193957L,0x5D1FF195L},{1L,1L,0xC8A4E0B4L},{(-1L),0x2F193957L,1L}},{{0x7870516BL,0x14CD4B6BL,0xE3896D44L},{0x414444B5L,0xF27946B7L,0x414444B5L},{1L,0x95AA8DCCL,0xE3896D44L},{0x5EA9E068L,0xF028E87BL,1L},{0xA9D1B70BL,6L,0xC8A4E0B4L},{0L,0xF27946B7L,0x5D1FF195L},{0xA9D1B70BL,(-1L),0L},{0x5EA9E068L,0x2F193957L,(-1L)}},{{1L,0x2D6CB0F7L,0xC8A4E0B4L},{0x414444B5L,0x2F193957L,0L},{0x7870516BL,(-1L),0xE3896D44L},{(-1L),0xF27946B7L,(-1L)},{1L,6L,0xE3896D44L},{1L,0xF028E87BL,0L},{0xA9D1B70BL,0x95AA8DCCL,0xC8A4E0B4L},{1L,0xF27946B7L,(-1L)}},{{0xA9D1B70BL,0x14CD4B6BL,0L},{1L,0x2F193957L,0x5D1FF195L},{1L,1L,0xC8A4E0B4L},{(-1L),0x2F193957L,1L},{0x7870516BL,0x14CD4B6BL,0xE3896D44L},{0x414444B5L,0xF27946B7L,0x414444B5L},{1L,0x95AA8DCCL,0xE3896D44L},{0x5EA9E068L,0xF028E87BL,1L}},{{0xA9D1B70BL,6L,0xC8A4E0B4L},{0L,0xF27946B7L,1L},{0x50A17FEBL,0x95AA8DCCL,1L},{(-1L),(-1L),0x5EA9E068L},{0xA9D1B70BL,0xF93A6340L,0xE3896D44L},{0x3EF9E047L,(-1L),0x5D1FF195L},{(-2L),0x95AA8DCCL,0xDFA5A2D1L},{(-7L),0x2F193957L,(-7L)}}};
            int l_1044 = 0xA80FDF07L;
            int i, j, k;
            for (g_878 = 15; (g_878 != 32); ++g_878)
            {
                unsigned long long l_1001 = 0x8D39E035AED73D5ELL;
                int l_1010 = 0L;
                char l_1046 = 0xE5L;
                g_397 = (p_39 < (-2L));
                g_890 &= (safe_mod_func_int16_t_s_s(((func_94((g_1012[0][0][3] ^= (safe_add_func_uint8_t_u_u((safe_div_func_int16_t_s_s(l_682[0][2], func_84(g_17[4][3], (((((safe_add_func_uint16_t_u_u(65535UL, (safe_lshift_func_uint8_t_u_s(((l_1001 || (l_1010 = (safe_mod_func_int64_t_s_s(func_94(((g_115[1][6] = l_936) , ((safe_sub_func_uint64_t_u_u(((~l_958) <= (l_1006 & 0xDAD1L)), func_75((l_1008 = (~(l_1007[2] = ((((!(g_544 &= (l_963 , p_39))) < g_297) >= p_39) , g_13)))), l_1009[4][3][0]))) , p_39)), l_1001, g_17[5][9], p_39, l_1001), 0x2233C62DFC6D8D88LL)))) > l_1011[3][0][2]), 0)))) > 0xC4DA53FB40297316LL) <= l_682[0][4]) | p_41) && l_963)))), l_682[0][4]))), p_39, g_594, p_41, l_1011[3][1][0]) == l_1013) >= g_828), g_467));
                l_1031 &= (safe_add_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u((g_431[1][4] , ((((0x042CL >= (((!func_84(((p_39 == g_308) , (g_467 < ((safe_add_func_uint8_t_u_u((+((safe_rshift_func_uint16_t_u_s(l_962, (l_963 = l_1010))) > l_1024)), (safe_add_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s(l_936, l_936)), p_40)) != g_362[2][2][0]), p_42)))) || l_54))), g_17[6][9])) , 0x21E23094L) , p_41)) , p_42) < 0UL) < g_115[1][6])), 5)), 5)) & 65535UL), 1UL));
                g_890 |= func_75(((safe_mod_func_int16_t_s_s((((func_84(l_1031, (l_1010 = (safe_mul_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u(((g_204 = l_682[0][5]) ^ func_84((func_84(((~0x53CBC4BCL) , (safe_rshift_func_uint8_t_u_u((((p_39 , ((l_962 && (p_41 = (g_53[4][5] = l_963))) & func_6(l_1010, (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u(func_6(l_1001, p_40, l_962, l_55), p_42)), l_1044)), g_115[2][6], g_18))) && p_40) | 0xA0L), l_1044))), p_40) <= l_1045[5][0][0]), g_812)), p_39)) < l_1006) > g_13), p_42)))) > l_1044) || g_828) , l_1046), g_282)) < 0xFA8B9ADFL), g_282);
            }
            l_1008 = (-10L);
            for (g_282 = (-5); (g_282 != 9); g_282 = safe_add_func_uint64_t_u_u(g_282, 7))
            {
                unsigned l_1057[9][5][5] = {{{0UL,0xA89584A8L,3UL,0xC0DF946CL,0x38E98CF0L},{0UL,1UL,7UL,0xA89584A8L,0x420C9948L},{0x92AEEA57L,4294967295UL,0UL,0UL,0x07A77AE2L},{0UL,0xEF478EA1L,0UL,4294967292UL,4294967293UL},{0xF53A0156L,0xEF478EA1L,0xA152BB9FL,0x38B29A64L,0x38B29A64L}},{{0x07A77AE2L,4294967295UL,0x07A77AE2L,4294967295UL,4294967288UL},{4294967288UL,1UL,0xF871762AL,3UL,4294967295UL},{0xC0DF946CL,0xA89584A8L,0xB52EC043L,0x07A77AE2L,0x92AEEA57L},{4294967290UL,0UL,0xF871762AL,4294967295UL,0xF84DD7F6L},{0UL,0x3A4F9F8FL,0x07A77AE2L,4294967295UL,0xEF478EA1L}},{{0x7F72E3F1L,0xF871762AL,0xA152BB9FL,0x420C9948L,0UL},{0x3A4F9F8FL,4294967288UL,0UL,0x420C9948L,0UL},{3UL,4294967295UL,0UL,4294967295UL,3UL},{0xB52EC043L,3UL,7UL,4294967295UL,0xA152BB9FL},{0UL,0xF53A0156L,3UL,0x07A77AE2L,0xA89584A8L}},{{0x38E98CF0L,0UL,4294967295UL,0x92AEEA57L,0UL},{4294967295UL,3UL,4294967288UL,0xCF303EA4L,0x92AEEA57L},{0UL,0xF871762AL,0x38B29A64L,0x7F72E3F1L,0UL},{4294967288UL,0x420C9948L,4294967293UL,0x38E98CF0L,0xF53A0156L},{4294967288UL,4294967295UL,0x07A77AE2L,4294967295UL,0x07A77AE2L}},{{0UL,0UL,0x420C9948L,0UL,4294967288UL},{4294967295UL,4294967292UL,0x38E98CF0L,7UL,0xC0DF946CL},{0UL,0xCBF9A015L,4294967292UL,4294967295UL,4294967290UL},{4294967295UL,4294967292UL,0x7F72E3F1L,0xA89584A8L,0UL},{0xA89584A8L,0UL,0xF871762AL,0x38B29A64L,0x7F72E3F1L}},{{0x92AEEA57L,4294967295UL,7UL,0UL,0x3A4F9F8FL},{0x38B29A64L,0x420C9948L,7UL,4294967293UL,3UL},{0xCBF9A015L,0xF871762AL,0xF871762AL,0xCBF9A015L,0xB52EC043L},{4294967295UL,3UL,0x7F72E3F1L,0x0D01FA66L,0UL},{4294967292UL,0UL,4294967292UL,0xA152BB9FL,0x38E98CF0L}},{{7UL,4UL,0x38E98CF0L,0x0D01FA66L,0xCBF9A015L},{0UL,0x92AEEA57L,0x420C9948L,0xCBF9A015L,0xA152BB9FL},{3UL,1UL,0x07A77AE2L,4294967293UL,0xF84DD7F6L},{4UL,0UL,4294967293UL,0UL,0xF84DD7F6L},{0xEF478EA1L,0xA152BB9FL,0x7F72E3F1L,0x7F72E3F1L,0UL}},{{7UL,0x7F72E3F1L,0UL,0UL,4294967295UL},{0xEF478EA1L,0xF53A0156L,4294967290UL,0x420C9948L,0UL},{0xF53A0156L,0UL,0xC0DF946CL,0xF84DD7F6L,4294967295UL},{0xEF478EA1L,4294967293UL,4294967288UL,0UL,0xA89584A8L},{7UL,4294967292UL,0x07A77AE2L,4294967290UL,0x92AEEA57L}},{{0x07A77AE2L,3UL,0xF53A0156L,0UL,0x38B29A64L},{4294967292UL,3UL,0UL,0xCBF9A015L,0xCBF9A015L},{0x92AEEA57L,4294967292UL,0x92AEEA57L,0xF871762AL,4294967295UL},{4294967295UL,4294967293UL,0UL,0xC0DF946CL,4294967292UL},{0xF84DD7F6L,0UL,0UL,0x92AEEA57L,7UL}}};
                int l_1062[10] = {(-6L),0x764752F2L,0x7C5C855FL,0x764752F2L,(-6L),(-6L),0x764752F2L,0x7C5C855FL,0x764752F2L,(-6L)};
                int i, j, k;
                g_397 = ((safe_add_func_uint8_t_u_u(0UL, func_6(g_193[6], ((safe_add_func_int8_t_s_s(g_362[5][1][0], ((((safe_div_func_int32_t_s_s((l_1008 = (safe_lshift_func_uint16_t_u_s(g_397, 4))), (((g_544 |= l_1057[3][0][3]) ^ (l_1062[6] ^= (safe_add_func_int32_t_s_s(((((func_6(l_962, p_42, (l_55 = ((safe_sub_func_uint8_t_u_u((0x1BEC0A8A9380159ELL > g_890), l_963)) | 18446744073709551615UL)), l_963) != g_431[4][4]) > 9L) , 0UL) && 0xB038L), 0x99A7AF56L)))) | l_1057[8][1][0]))) >= 0x5123L) ^ l_962) == l_1031))) , p_40), g_175, l_1057[3][0][3]))) , p_42);
                return p_39;
            }
        }
        p_41 = (func_94((g_263 ^= l_1045[5][0][0]), (safe_add_func_uint8_t_u_u((l_54 < (((func_6(l_1009[6][1][1], g_53[4][5], l_963, (18446744073709551615UL && g_18)) ^ (l_962 = (p_42 , l_963))) == 0xBA63L) == 0xE9C0A5FDL)), 0xE5L)), g_115[1][6], g_17[4][3], l_682[0][4]) <= (-1L));
    }
    else
    {
        unsigned l_1071[2];
        int i;
        for (i = 0; i < 2; i++)
            l_1071[i] = 2UL;
        l_55 |= (p_41 = (((safe_mul_func_int16_t_s_s(((g_308 = 1L) >= l_1071[1]), g_812)) <= (func_6(((safe_add_func_int16_t_s_s((g_115[1][6] = g_829[0][2]), ((safe_lshift_func_int16_t_s_u(p_41, (((safe_add_func_uint32_t_u_u(l_1071[1], (((safe_add_func_int32_t_s_s((g_770 || ((!((p_40 <= p_40) ^ g_175)) ^ l_1071[1])), p_42)) && 8L) >= 255UL))) == 255UL) , 0UL))) < l_1080[1]))) , (-9L)), l_1071[0], g_52, g_175) < g_431[4][2])) != l_1080[0]));
    }
    for (g_204 = 0; (g_204 <= 4); g_204 += 1)
    {
        unsigned l_1097 = 0xED7A0D60L;
        int l_1130[8] = {(-1L),0x31EF1C2CL,(-1L),0x31EF1C2CL,(-1L),0x31EF1C2CL,(-1L),0x31EF1C2CL};
        char l_1134 = 0x02L;
        int l_1143[10][4] = {{0xBC91FB10L,0x1D30029DL,(-8L),(-8L)},{(-1L),(-1L),(-7L),(-2L)},{(-7L),(-2L),0xF2CCBEA6L,0x80FED0C6L},{0x80FED0C6L,0x501EE246L,(-1L),0xF2CCBEA6L},{0x80CEDA08L,0x501EE246L,0xAC1C4DE7L,0x80FED0C6L},{0x501EE246L,(-2L),(-1L),(-2L)},{(-4L),0xAC1C4DE7L,0x4D011153L,0xF2CCBEA6L},{0x501EE246L,0xBC91FB10L,(-7L),(-1L)},{0xF2CCBEA6L,(-7L),(-9L),0x4D011153L},{0xF2CCBEA6L,(-2L),(-7L),(-1L)}};
        long long l_1156 = (-1L);
        int i, j;
        g_53[0][5] ^= (safe_sub_func_int8_t_s_s((g_175 = ((safe_lshift_func_int8_t_s_u((g_1012[0][1][7] < func_6((safe_lshift_func_uint16_t_u_u(p_40, 3)), (g_308 = ((g_18 , 0xB979L) != (safe_unary_minus_func_int8_t_s((safe_mod_func_uint16_t_u_u(((safe_unary_minus_func_int8_t_s((l_1080[1] , g_828))) , (safe_div_func_uint16_t_u_u((((((func_6(((safe_sub_func_int32_t_s_s((((((g_544 = (g_419 == 9UL)) ^ ((safe_mod_func_int16_t_s_s((g_812 == (-10L)), g_263)) , p_42)) > g_419) , l_682[0][6]) <= l_1013), p_42)) < l_682[0][0]), g_18, l_55, g_175) , l_1097) , l_1097) || p_42) & p_41) && 0x2D1C802CL), (-7L)))), g_282)))))), p_40, l_1009[5][1][0])), l_1045[6][4][5])) , l_682[0][7])), 0x99L));
        for (g_594 = 1; (g_594 <= 4); g_594 += 1)
        {
            unsigned l_1127 = 0x36F73177L;
            int l_1128[8] = {0x249C37D3L,0x249C37D3L,0x34399537L,0x249C37D3L,0x249C37D3L,0x34399537L,0x249C37D3L,0x249C37D3L};
            int l_1129[5] = {0xDB9AB849L,0xDB9AB849L,0xDB9AB849L,0xDB9AB849L,0xDB9AB849L};
            unsigned l_1131 = 0x6E378850L;
            int l_1160 = 1L;
            unsigned long long l_1196[6] = {18446744073709551615UL,0x51A3239880700348LL,0x51A3239880700348LL,18446744073709551615UL,0x51A3239880700348LL,0x51A3239880700348LL};
            const unsigned short l_1214 = 0UL;
            int i;
            g_53[0][5] = (l_1130[4] |= (safe_rshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((g_544 = g_193[6]), ((((safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((l_1129[3] = (safe_mod_func_uint16_t_u_u(p_40, (safe_unary_minus_func_int64_t_s((l_1128[4] = ((g_282 | (safe_div_func_uint32_t_u_u((func_6((l_1111 , g_292), (p_42 <= (safe_div_func_uint64_t_u_u(((safe_sub_func_int64_t_s_s(p_42, (0xECD12BCBL || (safe_mul_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((((safe_sub_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((0L != g_431[4][4]), 0x09L)) | p_42), 0x4B10L)), g_1126)) , g_890) == 1L) == g_878), 255UL)), l_1127))))) , 0UL), 0xB183B319FB709BC0LL))), l_1006, l_1097) > l_1127), g_771))) && 1UL))))))), l_1111)), p_41)) , p_41) || g_292) || 1UL))) , l_1097), 13)));
            g_397 = g_594;
            for (g_292 = 1; (g_292 <= 4); g_292 += 1)
            {
                unsigned l_1144 = 1UL;
                for (l_1127 = 1; (l_1127 <= 4); l_1127 += 1)
                {
                    int i, j, k;
                    if ((l_1045[(g_594 + 1)][g_594][g_594] >= (l_1045[(g_204 + 1)][l_1127][g_594] ^ 0x58C2C017L)))
                    {
                        return l_1131;
                    }
                    else
                    {
                        p_41 &= ((safe_lshift_func_int8_t_s_u(l_1045[(g_204 + 1)][l_1127][g_594], 6)) , l_1134);
                    }
                }
                p_41 = p_41;
                for (g_175 = 0; (g_175 == 4); g_175++)
                {
                    int l_1153 = (-4L);
                    unsigned long long l_1155 = 0xEB4863EF96F65F11LL;
                    l_1157 = func_6((safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((l_1130[4] = p_40), (l_1128[4] = (l_1129[3] |= l_1128[4])))), (g_115[1][6] = ((l_1143[8][0] = p_41) && (l_1144 && ((p_39 , l_1127) < (safe_mul_func_uint16_t_u_u((((((p_42 | (l_1155 = (((safe_rshift_func_uint8_t_u_s((g_11 , func_6((safe_rshift_func_uint8_t_u_u(((((safe_add_func_int16_t_s_s((p_41 != l_1153), 0L)) > (-1L)) , l_1144) , g_17[4][3]), 3)), g_544, p_42, g_1154)), g_297)) != 0x5DL) , 1L))) || l_1144) , l_1144) || 0xD6L) == l_1144), 0x721BL)))))))), p_42)), l_1156, p_42, g_829[0][2]);
                    l_1160 = (safe_mul_func_uint8_t_u_u(0UL, p_41));
                    l_1130[1] ^= ((safe_sub_func_uint8_t_u_u(((-8L) < ((((l_1144 == (-10L)) == (safe_sub_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_u(g_175, (safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((65535UL >= ((p_42 != ((-6L) == (g_1154 > (safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s(0x94L, 0x67L)), 65535UL)), l_1144)) || g_431[4][4]), 10))))) & l_1129[1])) , 0x28L), 2)), (-5L))))) , p_40), g_829[0][9]))) , l_1006) , g_17[4][3])), g_17[4][3])) , g_297);
                    for (p_39 = 0; (p_39 <= (-19)); p_39 = safe_sub_func_int8_t_s_s(p_39, 3))
                    {
                        unsigned long long l_1187 = 0x0925B27B7DAAF11FLL;
                        unsigned l_1193 = 0x50640624L;
                        p_41 = func_6(p_39, l_1160, (((p_39 == (safe_mod_func_int32_t_s_s(((p_42 == ((l_1129[1] = (p_41 > (safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((l_1187 = (p_41 && g_308)) > (func_6(g_878, p_41, g_770, l_1144) | 0xA99856D4F30A4794LL)), 5)), g_1012[2][0][5])))) && p_41)) > 0xA6L), 0xFA284C43L))) >= g_594) | 0UL), g_594);
                        g_308 = g_115[0][5];
                        p_41 = ((-1L) ^ func_6(((safe_lshift_func_uint16_t_u_s(0UL, 15)) < ((safe_add_func_uint64_t_u_u(func_6((g_812 = ((g_13 >= (g_193[7] , l_1111)) == func_6((!(((g_431[3][7] <= (l_1131 >= l_1153)) | p_40) , g_771)), g_263, l_1130[2], l_1192))), l_1193, p_42, g_282), 18446744073709551615UL)) ^ g_1126)), l_1187, g_13, p_39));
                        l_1129[3] ^= (func_6((((safe_mul_func_int16_t_s_s(g_292, func_6(func_6(g_890, l_1196[4], (p_40 , (safe_lshift_func_int16_t_s_u(func_6(((l_1153 > (safe_mod_func_int16_t_s_s(g_1012[3][0][2], g_308))) , (((safe_rshift_func_int8_t_s_s((18446744073709551615UL == (l_1144 , g_1154)), 7)) >= p_39) || p_39)), l_1203, l_1144, p_39), p_41))), p_39), g_263, l_1009[4][3][0], l_55))) == g_13) , p_41), l_958, l_1127, p_41) ^ g_770);
                    }
                }
                g_53[2][4] &= ((l_55 = (safe_rshift_func_int8_t_s_u((((safe_sub_func_int16_t_s_s(func_6((((safe_mul_func_int16_t_s_s(l_1131, p_39)) , g_204) , g_890), (func_6((func_6((func_6(p_42, (g_262 <= (safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s(l_1144, 0L)), l_682[0][4]))), l_1214, l_1013) , g_878), l_1111, l_1129[2], p_39) == l_1134), p_41, g_13, g_309) & g_17[4][3]), l_1131, p_42), l_1129[3])) | p_41) == 0UL), g_297))) | 18446744073709551615UL);
            }
        }
        if (func_84((safe_rshift_func_int8_t_s_u(0xBBL, (!g_362[1][0][9]))), l_1013))
        {
            unsigned l_1222 = 1UL;
            for (l_1203 = 0; (l_1203 <= 0); l_1203 += 1)
            {
                unsigned short l_1221 = 0UL;
                int i, j;
                g_53[3][4] = ((safe_mod_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u((l_682[l_1203][(g_204 + 1)] >= func_84(l_1221, g_362[3][1][8])), l_1222)), (safe_add_func_int8_t_s_s((safe_div_func_uint16_t_u_u(l_1221, l_1143[1][1])), ((safe_mod_func_int64_t_s_s(0x980D456F06BC885FLL, func_6((g_812 = (((safe_unary_minus_func_uint16_t_u(func_6(l_1143[5][2], l_1222, g_17[4][3], p_39))) >= l_1222) < 0xAAL)), l_1230, l_1221, p_40))) ^ g_282))))) > l_1097);
            }
        }
        else
        {
            const long long l_1239[5][2][8] = {{{1L,0xBD1CC1D26FBBCCCBLL,0xBD1CC1D26FBBCCCBLL,1L,7L,0x8B12786E3D7120DFLL,1L,0x8B12786E3D7120DFLL},{1L,0L,0xE0F217FA147C27D4LL,0L,1L,0xE0F217FA147C27D4LL,0x74E4CAC199874CFALL,0x74E4CAC199874CFALL}},{{0x8B12786E3D7120DFLL,0L,7L,7L,0L,0x8B12786E3D7120DFLL,0xBD1CC1D26FBBCCCBLL,0L},{0x74E4CAC199874CFALL,0xBD1CC1D26FBBCCCBLL,7L,0x74E4CAC199874CFALL,7L,0xBD1CC1D26FBBCCCBLL,0x74E4CAC199874CFALL,0x8B12786E3D7120DFLL}},{{0L,1L,0xE0F217FA147C27D4LL,0x74E4CAC199874CFALL,0x74E4CAC199874CFALL,0xE0F217FA147C27D4LL,1L,0L},{0x8B12786E3D7120DFLL,0x74E4CAC199874CFALL,0xBD1CC1D26FBBCCCBLL,7L,0x74E4CAC199874CFALL,7L,0xBD1CC1D26FBBCCCBLL,0x74E4CAC199874CFALL}},{{0L,0xBD1CC1D26FBBCCCBLL,0x8B12786E3D7120DFLL,0L,7L,7L,0L,0x8B12786E3D7120DFLL},{0x74E4CAC199874CFALL,0x74E4CAC199874CFALL,0xE0F217FA147C27D4LL,1L,1L,0x098541EF37366A21LL,1L,0x74E4CAC199874CFALL}},{{7L,0x74E4CAC199874CFALL,7L,0xBD1CC1D26FBBCCCBLL,0x74E4CAC199874CFALL,0x8B12786E3D7120DFLL,0x8B12786E3D7120DFLL,0x74E4CAC199874CFALL},{0x74E4CAC199874CFALL,0x8B12786E3D7120DFLL,0x8B12786E3D7120DFLL,0x74E4CAC199874CFALL,0xBD1CC1D26FBBCCCBLL,7L,0x74E4CAC199874CFALL,7L}}};
            int l_1273 = (-1L);
            int i, j, k;
            if (g_397)
            {
                l_1143[8][0] = (((((!p_41) ^ (((p_39 |= g_175) | (p_42 ^ g_193[6])) != (func_6((~p_41), p_42, (((safe_add_func_uint32_t_u_u(4294967288UL, ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(0x4743L, 12)), l_1045[5][0][0])) > 0UL))) <= l_1239[1][1][2]) > l_1239[1][1][2]), g_309) >= p_40))) , p_41) < g_263) ^ g_362[3][1][8]);
                for (g_262 = 4; (g_262 >= 0); g_262 -= 1)
                {
                    return l_1239[1][1][2];
                }
            }
            else
            {
                short l_1264[8] = {0x572DL,0x572DL,0x8D97L,0x572DL,0x572DL,0x8D97L,0x572DL,0x572DL};
                int i;
                g_890 ^= (safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u(65530UL, (((safe_mod_func_uint8_t_u_u((l_1273 = (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(g_467, (safe_lshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((g_771 = (safe_rshift_func_int8_t_s_s(g_13, g_539))), 3)), (func_6((l_55 = (safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((l_1264[3] || (255UL != (((g_262 ^= (safe_mul_func_int16_t_s_s((((safe_sub_func_uint8_t_u_u((~p_42), 0x0FL)) , ((safe_mul_func_uint16_t_u_u(func_84((safe_lshift_func_uint8_t_u_u(l_1143[2][0], 0)), p_41), l_1264[3])) & g_878)) , p_41), g_770))) ^ 255UL) || 0x599D37EEFAB324A0LL))), 15)), 1L))), g_175, p_40, p_39) && p_39))), l_1156)))), g_17[4][3]))), 0x3DL)) == l_1239[3][1][5]) == 0x89B0L))), 8L)), 3));
                if (l_682[0][0])
                    break;
            }
        }
    }
    return p_42;
}







static unsigned short func_67(unsigned short p_68, unsigned long long p_69, int p_70, unsigned char p_71, char p_72)
{
    int l_691 = 0x13C561AAL;
    int l_692 = (-9L);
    int l_695 = 0x3A1F7CE0L;
    int l_696 = 0L;
    short l_709 = 2L;
    char l_917 = 0L;
    if ((safe_mul_func_int8_t_s_s(g_115[0][7], (0x37L && ((safe_add_func_int8_t_s_s((((p_70 <= (safe_rshift_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((l_691 = (p_71 == (0L ^ 0x19A77A979979660ALL))), (p_71 ^ l_692))), func_84((l_696 ^= (safe_sub_func_int16_t_s_s(func_84((l_695 = func_6(g_53[0][5], p_68, p_69, p_69)), g_17[4][3]), g_544))), l_692)))) , p_69) || l_692), g_175)) >= g_467)))))
    {
        const int l_699[3][8] = {{0xFE129C56L,0L,0xFE129C56L,0xFE129C56L,0L,0xFE129C56L,0xFE129C56L,0L},{0L,0xFE129C56L,0xFE129C56L,0L,0xFE129C56L,0xFE129C56L,0L,0xFE129C56L},{0L,0L,0xD0A80D57L,0L,0L,0xD0A80D57L,0L,0L}};
        const unsigned l_702 = 1UL;
        int l_729 = 1L;
        const int l_749 = 3L;
        unsigned l_763 = 1UL;
        unsigned short l_795 = 0x2FFBL;
        int l_845 = 0x5BBCAAD4L;
        int i, j;
        if (func_84((safe_mul_func_int16_t_s_s((((((l_699[2][1] ^ (~(safe_mul_func_uint16_t_u_u(l_702, 65535UL)))) || ((p_69 = (safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(g_539, (l_709 &= ((((safe_div_func_int16_t_s_s((p_69 ^ l_695), (0x185C7D2EL || l_699[2][1]))) , func_84(p_70, g_175)) & g_262) & 0xCC4E823DL)))), l_695))) >= p_72)) || 0x67826294L) , p_68) <= g_13), g_309)), g_431[3][5]))
        {
            int l_728 = 0x8A83AA88L;
            l_692 = (safe_lshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(p_68, (((safe_rshift_func_uint16_t_u_u(l_702, (p_68 & (p_68 <= (safe_rshift_func_int16_t_s_s(0xB491L, 6)))))) < (l_696 ^ (-5L))) | (g_175 = ((!(!((safe_div_func_uint64_t_u_u(((g_594 == 0UL) ^ p_71), l_692)) , g_193[6]))) , g_17[6][4]))))) , g_362[1][1][6]), 13));
            if (g_13)
                goto lbl_916;
            l_729 = (((((~((func_6(p_72, l_692, ((((func_6(p_68, l_699[0][3], (0x00D7L < p_71), (g_594 ^= (safe_sub_func_uint64_t_u_u((18446744073709551606UL & (safe_sub_func_int8_t_s_s((((l_728 = (((safe_mod_func_int32_t_s_s(((safe_div_func_int64_t_s_s(p_72, (g_297 , (-1L)))) , (-8L)), p_71)) >= 4294967293UL) != g_282)) == p_69) ^ p_69), p_68))), 0x16C27E2894F6CF4ELL)))) , 0L) != g_17[4][3]) == 0x3F1A75B7916086E1LL) || l_728), p_72) , p_69) == 0L)) , l_702) || (-3L)) || p_72) && 8L);
        }
        else
        {
            int l_732 = (-1L);
            int l_750[10] = {0L,0xB087DCBCL,0x13F1F53AL,0x13F1F53AL,0xB087DCBCL,0L,0xB087DCBCL,0x13F1F53AL,0x13F1F53AL,0xB087DCBCL};
            long long l_760 = 1L;
            unsigned short l_798 = 0x466CL;
            long long l_823 = 0L;
            long long l_830 = 3L;
            int i;
            if (l_699[0][5])
            {
                unsigned l_730 = 0xE5EC2A53L;
                unsigned short l_731 = 0x24FDL;
                g_308 = ((func_6(g_11, l_730, g_115[0][2], l_731) <= ((l_732 ^ ((safe_div_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint8_t_u((((251UL == p_69) , (-10L)) , g_115[1][6]))), l_730)) , p_69), 0x50L)) != 1L)) || p_70)) , l_699[1][7]);
            }
            else
            {
                int l_742[7];
                long long l_761 = 0xA36765892C42FA2CLL;
                const unsigned short l_784 = 0x8E56L;
                int l_811 = 0x2DED0BDEL;
                int i;
                for (i = 0; i < 7; i++)
                    l_742[i] = 1L;
                g_397 = (!(safe_add_func_int8_t_s_s((4UL >= (safe_rshift_func_int16_t_s_s((l_691 >= l_742[4]), (((safe_mul_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u(p_69, p_69)) & (l_702 | (p_71 != p_68))), (l_750[9] = (func_84(((safe_add_func_int32_t_s_s(l_696, p_70)) == p_72), l_742[4]) || l_749)))) ^ l_696) <= 0x14L)))), p_72)));
                if ((safe_sub_func_uint32_t_u_u(3UL, l_691)))
                {
                    unsigned l_755 = 8UL;
                    int l_762 = 8L;
                    g_53[0][5] = p_71;
                    l_762 = ((safe_div_func_int64_t_s_s((g_297 && l_755), (func_84((g_282 & (0x2CACL == l_691)), (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(l_732, l_760)), l_702))) , l_761))) > g_115[1][6]);
                    return l_763;
                }
                else
                {
                    short l_783 = 0x5E53L;
                    long long l_810 = 1L;
                    g_53[0][5] = (func_75(((safe_lshift_func_uint8_t_u_u(0x87L, 6)) | g_53[0][5]), g_115[1][3]) <= ((l_732 & (safe_mul_func_uint8_t_u_u((l_696 ^ ((0x7E00L & (g_771 = func_6((g_770 = ((safe_add_func_int64_t_s_s(0x693C70896B997919LL, (((g_18 == 1UL) == g_467) || 0UL))) || 0x53L)), p_69, p_69, g_17[4][1]))) == p_68)), l_760))) ^ (-1L)));
                    for (g_175 = 0; (g_175 <= (-24)); --g_175)
                    {
                        int l_776 = 0x31E1530DL;
                        int l_801 = 0xA4CCD7B3L;
                        l_750[2] = (safe_div_func_int16_t_s_s(g_431[6][0], (l_776 || ((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(0x33L, ((0x64L >= l_776) > g_539))), (p_71 != (safe_rshift_func_uint16_t_u_u(((func_6(p_69, l_783, l_784, g_175) <= l_783) & l_702), l_783))))) , l_776))));
                        l_798 = (func_84((safe_mod_func_uint32_t_u_u(l_776, ((g_419 & func_6((safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(l_783, (safe_unary_minus_func_uint8_t_u((safe_unary_minus_func_int8_t_s(((safe_lshift_func_uint16_t_u_u(l_795, 1)) & 0xFBL))))))), 0)), (l_742[0] , (0UL >= (safe_sub_func_uint8_t_u_u(l_784, p_71)))), p_70, g_193[1])) , p_72))), l_732) < l_783);
                        l_729 = (safe_add_func_int8_t_s_s(0x80L, l_691));
                        l_801 ^= func_6((l_696 = (p_68 > g_431[5][1])), p_72, l_702, g_309);
                    }
                    l_729 = ((g_812 &= (func_94((((safe_add_func_uint64_t_u_u((p_69 = (l_783 < (((l_695 , (safe_lshift_func_uint8_t_u_u((((l_783 > ((((l_811 &= ((safe_rshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u((g_419 == (l_750[9] && 0x1EL)), (g_115[0][3] ^= (l_695 ^= l_702)))), p_68)) , (((l_810 ^ l_810) == 0xF8911588D1BC352ELL) > l_742[4]))) && (-1L)) == 0x8224L) || g_771)) , 3UL) || 0x9C37L), 3))) & 8L) && p_70))), g_594)) , g_419) , g_297), l_696, g_18, g_262, g_431[4][4]) , l_783)) | p_70);
                }
                l_742[4] = (l_750[5] = (l_729 || g_204));
            }
            l_830 ^= func_84(l_763, (l_692 &= (safe_mod_func_int16_t_s_s(g_11, (safe_add_func_int8_t_s_s((((g_52 = ((safe_add_func_uint8_t_u_u(((3UL <= ((safe_div_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((((l_823 , g_812) && (safe_div_func_uint16_t_u_u(l_795, (func_94((safe_sub_func_int64_t_s_s(((g_262 ^ g_770) , 1L), g_828)), l_696, g_812, p_69, p_69) & g_11)))) < l_732) >= 0xF4L), l_691)), p_72)) & 1L)) && 0x499056F4L), g_829[0][2])) , p_71)) < p_69) > g_771), g_18))))));
            l_750[9] = (safe_rshift_func_uint16_t_u_u(g_193[5], (p_69 >= 0xE66103D7A4A6D5CDLL)));
            if (l_763)
            {
                const long long l_844 = 0xC7050034895BEF40LL;
                l_845 ^= (safe_unary_minus_func_uint8_t_u((g_771 &= ((((l_729 , (safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((safe_add_func_int32_t_s_s(g_594, (g_53[6][2] = ((((safe_add_func_int64_t_s_s(1L, (l_750[1] &= g_262))) ^ l_732) && (func_6(l_844, p_68, p_71, p_69) ^ p_68)) | l_732)))) < g_52), 0xE1CCL)), 13)), 8UL))) >= 0UL) < l_729) ^ 0x67951859L))));
                l_692 ^= (safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s(p_70, l_844)), 4));
                g_419 = l_750[9];
            }
            else
            {
                return p_71;
            }
        }
    }
    else
    {
        return g_204;
    }
lbl_916:
    for (p_68 = 0; (p_68 <= 2); p_68 += 1)
    {
        short l_855 = 0x3B7FL;
        int l_858 = (-1L);
        int l_915 = 0xD09CFC9AL;
        int i;
        if (((safe_mul_func_int16_t_s_s(g_193[p_68], g_829[0][2])) > ((g_431[4][4] || 0x5EL) , g_431[5][5])))
        {
            unsigned char l_854[4] = {253UL,253UL,253UL,253UL};
            int i;
            g_53[7][0] = ((safe_mul_func_int8_t_s_s(func_84((l_855 = l_854[3]), (((!((g_770 != 0L) & 1UL)) >= 0xAEL) , (func_84((safe_sub_func_uint64_t_u_u(p_68, g_193[p_68])), g_193[p_68]) & p_72))), 0L)) , l_858);
            if (((l_855 || (g_292 , 0x034EBBE7L)) == l_854[3]))
            {
                int l_868 = (-9L);
                int l_889[9] = {(-7L),0xFBDCD3C4L,0xFBDCD3C4L,(-7L),0xFBDCD3C4L,0xFBDCD3C4L,(-7L),0xFBDCD3C4L,0xFBDCD3C4L};
                int i;
                if ((safe_div_func_int16_t_s_s(l_696, (safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(((safe_unary_minus_func_int8_t_s((safe_div_func_int32_t_s_s(g_115[1][6], 0xBA313519L)))) == l_868), (p_70 , ((safe_mod_func_uint32_t_u_u((func_84((((safe_mod_func_int32_t_s_s((l_692 = 0x50ADCAE9L), l_868)) | (safe_unary_minus_func_uint16_t_u((g_878 = ((p_69 || (((safe_rshift_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u(func_6(g_829[0][2], p_69, g_309, g_17[8][5]), 0L)) , 0x38461F34L) , p_71), g_193[5])) || 0x845ED9D016767FC7LL) ^ g_309)) , p_70))))) != p_72), g_539) || p_71), g_115[0][3])) < p_71)))), l_709)))))
                {
                    if (l_868)
                        break;
                    if (g_309)
                        continue;
                    g_308 = p_71;
                    for (g_292 = 0; (g_292 <= 2); g_292 += 1)
                    {
                        int i, j;
                        g_53[(p_68 + 2)][(p_68 + 3)] = (safe_add_func_int64_t_s_s((safe_mul_func_int16_t_s_s((g_53[(p_68 + 4)][(p_68 + 3)] , g_115[g_292][(g_292 + 5)]), 0UL)), (((g_115[g_292][(p_68 + 4)] || (0xC912L & ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(l_868, 15)), ((l_889[8] = (safe_add_func_uint32_t_u_u(g_13, g_17[4][3]))) | (p_72 || 0x54L)))) , g_890))) & g_829[0][2]) == 2UL)));
                    }
                }
                else
                {
                    return g_175;
                }
                for (l_696 = 7; (l_696 >= 2); l_696 -= 1)
                {
                    return l_889[0];
                }
            }
            else
            {
                unsigned l_901 = 4UL;
                for (g_812 = 0; (g_812 <= 2); g_812 += 1)
                {
                    short l_891 = (-2L);
                    int l_900 = 0x4AE61AC5L;
                    if (l_858)
                        break;
                    for (l_709 = 2; (l_709 >= 0); l_709 -= 1)
                    {
                        int l_902[10][3] = {{1L,1L,0x146E391FL},{0L,6L,(-6L)},{0x385661F4L,1L,0x385661F4L},{0x385661F4L,0L,1L},{0L,0x385661F4L,0x385661F4L},{1L,0x385661F4L,(-6L)},{6L,0L,0x146E391FL},{0L,0L,1L},{6L,0x146E391FL,1L},{(-6L),0L,(-6L)}};
                        int i, j;
                        l_902[2][1] = (((l_891 == ((g_115[g_812][(p_68 + 1)] |= (p_68 & (((l_900 = (g_282 < ((0x7056L <= (((safe_mod_func_uint8_t_u_u((g_544 = (~((safe_mod_func_uint32_t_u_u((func_6((safe_mod_func_uint16_t_u_u(p_71, 0xFC3BL)), g_17[0][7], g_771, (safe_mul_func_int16_t_s_s(func_6(g_204, g_544, g_193[p_68], l_855), g_397))) >= p_71), g_594)) && g_419))), p_72)) , p_68) || p_68)) | 0x0F33L))) , g_770) ^ p_70))) && 0x0472L)) > 9UL) , l_901);
                    }
                }
            }
        }
        else
        {
            return g_362[3][1][8];
        }
        l_696 ^= ((p_70 == p_69) , (safe_mul_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(g_193[p_68], ((g_467 == (safe_lshift_func_int16_t_s_u(0xDBF1L, 7))) == func_6((g_193[p_68] , ((safe_div_func_uint8_t_u_u((((func_6(l_709, l_858, p_71, p_72) <= p_70) , p_69) > g_193[6]), (-9L))) <= g_431[4][4])), l_709, p_69, l_709)))) , l_692), 0x3123L)));
        for (l_858 = 6; (l_858 >= 0); l_858 -= 1)
        {
            if (p_68)
                break;
            return p_72;
        }
        g_53[6][2] = (safe_sub_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u((g_771 = p_71), 255UL)) | (g_544 = g_52)) > (g_431[4][4] = l_696)), g_308));
        for (g_890 = 1; (g_890 <= 7); g_890 += 1)
        {
            if (g_11)
                break;
            l_915 = 0x30BBB937L;
            g_419 |= (l_855 <= g_362[0][2][4]);
            for (p_70 = 0; (p_70 <= 7); p_70 += 1)
            {
                l_915 = l_691;
            }
        }
    }
    return l_917;
}







static const unsigned short func_75(unsigned long long p_76, const int p_77)
{
    int l_91 = (-1L);
    const unsigned l_100 = 0UL;
    int l_681 = 9L;
    l_681 = (safe_add_func_uint64_t_u_u(func_84((safe_div_func_uint64_t_u_u((g_52 == ((func_6((0xB44AAF27L == 0xCC562928L), p_77, ((safe_sub_func_uint64_t_u_u((l_91 ^ p_77), l_91)) , (~(safe_rshift_func_uint8_t_u_u(g_11, func_94(func_6(g_17[6][8], g_17[4][3], l_100, l_91), p_76, g_17[4][3], l_100, p_77))))), l_91) <= g_52) < (-6L))), l_91)), g_52), 0x5A5144A77989663ALL));
    return l_100;
}







static unsigned long long func_84(char p_85, unsigned p_86)
{
    const unsigned long long l_667 = 0x3F904876D5A04B16LL;
    for (g_419 = 29; (g_419 >= 25); g_419 = safe_sub_func_int32_t_s_s(g_419, 2))
    {
        unsigned l_668[2];
        int i;
        for (i = 0; i < 2; i++)
            l_668[i] = 0x4C4C6129L;
        for (g_52 = 0; (g_52 == (-5)); g_52 = safe_sub_func_int8_t_s_s(g_52, 6))
        {
            unsigned short l_669[6][8] = {{0UL,1UL,0UL,65527UL,65527UL,0UL,1UL,0UL},{65535UL,65527UL,3UL,65527UL,65535UL,65535UL,65527UL,3UL},{65535UL,65535UL,65527UL,3UL,65527UL,65535UL,65535UL,65527UL},{0UL,65527UL,65527UL,0UL,1UL,0UL,65527UL,65527UL},{65527UL,1UL,3UL,3UL,1UL,65527UL,1UL,3UL},{0UL,1UL,0UL,65527UL,65527UL,0UL,1UL,0UL}};
            int i, j;
            g_308 |= (l_669[1][1] ^= (l_667 , l_668[1]));
        }
        for (g_263 = 0; (g_263 == 27); g_263 = safe_add_func_int8_t_s_s(g_263, 7))
        {
            unsigned l_672 = 0xB6E958A7L;
            return l_672;
        }
        for (g_292 = 1; (g_292 <= 7); g_292 += 1)
        {
            unsigned short l_677 = 0x0946L;
            int l_680 = (-1L);
            int i;
            g_53[1][3] ^= (safe_div_func_int64_t_s_s((0x8ADE1C928783005CLL < l_668[1]), (safe_mul_func_int16_t_s_s((l_680 |= (l_677 <= ((g_193[g_292] = ((safe_add_func_int16_t_s_s(p_86, p_86)) || (func_6(func_6((p_85 | (g_11 = p_86)), g_362[1][0][0], g_467, g_419), l_677, g_467, l_677) >= p_85))) , 0UL))), p_86))));
        }
    }
    return l_667;
}







static const unsigned char func_94(unsigned p_95, unsigned p_96, int p_97, int p_98, unsigned p_99)
{
    unsigned char l_109 = 0x05L;
    const unsigned short l_110 = 1UL;
    int l_111 = 0L;
    const unsigned long long l_114 = 1UL;
    int l_116 = (-1L);
    long long l_119 = 0x8A167226A680CA0CLL;
    short l_124 = 0x8784L;
    const unsigned long long l_138 = 18446744073709551612UL;
    long long l_230 = 0xC1734EC993FBD6B8LL;
    unsigned short l_348 = 0x56C0L;
    unsigned short l_420 = 0UL;
    unsigned l_580 = 0xB034FF01L;
    unsigned long long l_598[3][5][4] = {{{0x8A4B17D1833F30FCLL,18446744073709551615UL,0x8A4B17D1833F30FCLL,18446744073709551615UL},{0x8A4B17D1833F30FCLL,18446744073709551615UL,0x8A4B17D1833F30FCLL,18446744073709551615UL},{0x8A4B17D1833F30FCLL,18446744073709551615UL,0x8A4B17D1833F30FCLL,18446744073709551615UL},{0x8A4B17D1833F30FCLL,18446744073709551615UL,0x8A4B17D1833F30FCLL,18446744073709551615UL},{0x8A4B17D1833F30FCLL,18446744073709551615UL,0x8A4B17D1833F30FCLL,18446744073709551615UL}},{{0x8A4B17D1833F30FCLL,18446744073709551615UL,0x8A4B17D1833F30FCLL,18446744073709551615UL},{0x8A4B17D1833F30FCLL,18446744073709551615UL,0x8A4B17D1833F30FCLL,18446744073709551615UL},{0x8A4B17D1833F30FCLL,18446744073709551615UL,0x8A4B17D1833F30FCLL,18446744073709551615UL},{0x8A4B17D1833F30FCLL,18446744073709551615UL,0x8A4B17D1833F30FCLL,18446744073709551615UL},{0x8A4B17D1833F30FCLL,18446744073709551615UL,0x8A4B17D1833F30FCLL,18446744073709551615UL}},{{0x8A4B17D1833F30FCLL,18446744073709551615UL,0x8A4B17D1833F30FCLL,18446744073709551615UL},{0x8A4B17D1833F30FCLL,18446744073709551615UL,0x8A4B17D1833F30FCLL,18446744073709551615UL},{0x8A4B17D1833F30FCLL,18446744073709551615UL,0x8A4B17D1833F30FCLL,18446744073709551615UL},{0x8A4B17D1833F30FCLL,18446744073709551615UL,0x8A4B17D1833F30FCLL,18446744073709551615UL},{0x8A4B17D1833F30FCLL,18446744073709551615UL,0x8A4B17D1833F30FCLL,18446744073709551615UL}}};
    int l_618 = 0x290A048EL;
    unsigned l_619[10][9][2] = {{{1UL,1UL},{18446744073709551615UL,18446744073709551615UL},{0x98EAA6C9L,18446744073709551610UL},{0UL,1UL},{18446744073709551615UL,0x092118AAL},{2UL,18446744073709551615UL},{3UL,6UL},{3UL,18446744073709551615UL},{2UL,0x092118AAL}},{{18446744073709551615UL,1UL},{0UL,18446744073709551610UL},{0x98EAA6C9L,18446744073709551615UL},{18446744073709551615UL,1UL},{1UL,0UL},{0xD8835874L,0x998C174BL},{1UL,0xC285DBC0L},{18446744073709551611UL,0UL},{1UL,2UL}},{{0xD5169D51L,0xD8835874L},{0UL,1UL},{4UL,18446744073709551608UL},{0xC285DBC0L,18446744073709551614UL},{0UL,18446744073709551614UL},{0xC285DBC0L,18446744073709551608UL},{4UL,1UL},{0UL,0xD8835874L},{0xD5169D51L,2UL}},{{1UL,0UL},{18446744073709551611UL,0xC285DBC0L},{1UL,0x998C174BL},{0xD8835874L,0UL},{1UL,1UL},{18446744073709551615UL,18446744073709551615UL},{0x98EAA6C9L,18446744073709551610UL},{0UL,1UL},{18446744073709551615UL,0x092118AAL}},{{2UL,0x86D87D1FL},{0UL,1UL},{0UL,0x86D87D1FL},{1UL,18446744073709551610UL},{0x86D87D1FL,18446744073709551612UL},{0xC285DBC0L,2UL},{0UL,1UL},{1UL,5UL},{0UL,0UL}},{{18446744073709551615UL,1UL},{5UL,6UL},{0x092118AAL,0xC285DBC0L},{6UL,1UL},{0x98EAA6C9L,18446744073709551615UL},{18446744073709551614UL,3UL},{0xD5169D51L,4UL},{6UL,0xD8835874L},{0UL,0xD8835874L}},{{6UL,4UL},{0xD5169D51L,3UL},{18446744073709551614UL,18446744073709551615UL},{0x98EAA6C9L,1UL},{6UL,0xC285DBC0L},{0x092118AAL,6UL},{5UL,1UL},{18446744073709551615UL,0UL},{0UL,5UL}},{{1UL,1UL},{0UL,2UL},{0xC285DBC0L,18446744073709551612UL},{0x86D87D1FL,18446744073709551610UL},{1UL,0x86D87D1FL},{0UL,1UL},{0UL,0x86D87D1FL},{1UL,18446744073709551610UL},{0x86D87D1FL,18446744073709551612UL}},{{0xC285DBC0L,2UL},{0UL,1UL},{1UL,5UL},{0UL,0UL},{18446744073709551615UL,1UL},{5UL,6UL},{0x092118AAL,0xC285DBC0L},{6UL,1UL},{0x98EAA6C9L,18446744073709551615UL}},{{18446744073709551614UL,3UL},{0xD5169D51L,4UL},{6UL,0xD8835874L},{0UL,0UL},{0UL,1UL},{18446744073709551612UL,0x86D87D1FL},{3UL,0xC285DBC0L},{0x998C174BL,0UL},{0x54A5A300L,1UL}}};
    unsigned l_647 = 4294967295UL;
    int i, j, k;
lbl_314:
    for (p_97 = (-21); (p_97 != 9); p_97 = safe_add_func_int64_t_s_s(p_97, 8))
    {
        long long l_112[5][10][5] = {{{0x6B532C91DF6875C0LL,0xC984E575B16568BFLL,0xA91114308392A3DFLL,0x69497261C4191E15LL,0x4A886803F40BDE86LL},{0xC0861EEEE36A709CLL,(-6L),0xB4AB4704B5258326LL,0x0376B33B0C632DA6LL,(-8L)},{0xA91114308392A3DFLL,(-1L),1L,(-1L),1L},{(-1L),2L,2L,(-1L),0x0E3AF3587EAAD8A3LL},{0x3EC9324971ED8D5FLL,1L,0xCC80AA79CB204CE7LL,1L,(-1L)},{(-4L),4L,0x0E3AF3587EAAD8A3LL,0xCFEE4E9FC46A622BLL,0xDE445E70CA4AAA59LL},{1L,(-1L),0xA91114308392A3DFLL,1L,0x74D0E4E2A80421A5LL},{0L,0x947C661B5B55C241LL,0x30D066B32335DC65LL,(-1L),0x947C661B5B55C241LL},{0x4A886803F40BDE86LL,0x6B532C91DF6875C0LL,0x552ABCF54F23DFB5LL,(-1L),0L},{4L,0x77E331CA04C897B4LL,(-4L),0x0376B33B0C632DA6LL,(-4L)}},{{0L,0L,0xE9BC94048DEE8705LL,0x69497261C4191E15LL,(-1L)},{0xCFEE4E9FC46A622BLL,(-7L),0x56F02031241CAE3ALL,0x0E3AF3587EAAD8A3LL,0xC0861EEEE36A709CLL},{0x69497261C4191E15LL,1L,0x4A886803F40BDE86LL,(-1L),0x9E62AD52EBB0BE52LL},{0L,(-7L),0xD39C238541C8ED9FLL,0x947C661B5B55C241LL,(-8L)},{1L,0L,0x74D0E4E2A80421A5LL,1L,0x69497261C4191E15LL},{0xDE445E70CA4AAA59LL,0x77E331CA04C897B4LL,0xCFEE4E9FC46A622BLL,(-8L),0xFA7B1138347E9BEELL},{0x3EC9324971ED8D5FLL,0x6B532C91DF6875C0LL,0L,0x6B532C91DF6875C0LL,0x9E62AD52EBB0BE52LL},{0xB4AB4704B5258326LL,0x56F02031241CAE3ALL,1L,0xD39C238541C8ED9FLL,0xBFBDA86EFADCADDFLL},{0xC984E575B16568BFLL,0xCF3CB9137EFE7B18LL,0L,0x4A886803F40BDE86LL,0xCF3CB9137EFE7B18LL},{(-4L),2L,(-8L),0x56F02031241CAE3ALL,0xBFBDA86EFADCADDFLL}},{{0x1A59CB379706C822LL,0x4A886803F40BDE86LL,1L,0xE9BC94048DEE8705LL,0x9E62AD52EBB0BE52LL},{0xBFBDA86EFADCADDFLL,3L,0xB4AB4704B5258326LL,(-4L),0xB9CBC2055579FD63LL},{0x74D0E4E2A80421A5LL,1L,(-1L),0x552ABCF54F23DFB5LL,0x552ABCF54F23DFB5LL},{0x06A83B75A479C51ALL,0x983ECD6362296547LL,0x06A83B75A479C51ALL,0x30D066B32335DC65LL,0xCFEE4E9FC46A622BLL},{0xC984E575B16568BFLL,0x54074BD288A0B6D6LL,0x1A59CB379706C822LL,0xA91114308392A3DFLL,0xCC80AA79CB204CE7LL},{0x0E3AF3587EAAD8A3LL,0xBFBDA86EFADCADDFLL,0x947C661B5B55C241LL,0x0E3AF3587EAAD8A3LL,(-4L)},{1L,0x4A886803F40BDE86LL,0x1A59CB379706C822LL,0xCC80AA79CB204CE7LL,1L},{0x5B7CC70ECFAE2F6FLL,0xEAD84D86666F4520LL,0x06A83B75A479C51ALL,2L,1L},{0x4A886803F40BDE86LL,0xA91114308392A3DFLL,(-1L),1L,(-1L)},{1L,0x56F02031241CAE3ALL,0xB4AB4704B5258326LL,0xB4AB4704B5258326LL,0x56F02031241CAE3ALL}},{{0x552ABCF54F23DFB5LL,0x1A59CB379706C822LL,1L,0xA91114308392A3DFLL,0xEA9C7313B58279F8LL},{2L,0x0E3AF3587EAAD8A3LL,(-8L),0x77E331CA04C897B4LL,0x5B7CC70ECFAE2F6FLL},{0xEA9C7313B58279F8LL,(-1L),0L,1L,1L},{2L,0xB9CBC2055579FD63LL,1L,(-4L),0x06A83B75A479C51ALL},{0x552ABCF54F23DFB5LL,(-3L),0x3EC9324971ED8D5FLL,1L,1L},{1L,0x49B9DBF79CE2C80CLL,0xEAD84D86666F4520LL,0L,0xCFEE4E9FC46A622BLL},{0x74D0E4E2A80421A5LL,0xEC5F198F030F790ELL,0xEC5F198F030F790ELL,0x74D0E4E2A80421A5LL,0xEA9C7313B58279F8LL},{0x56F02031241CAE3ALL,2L,(-6L),0xFA7B1138347E9BEELL,(-4L)},{0xCF3CB9137EFE7B18LL,1L,0xEA9C7313B58279F8LL,0x54074BD288A0B6D6LL,0xA91114308392A3DFLL},{2L,0x30D066B32335DC65LL,0xB4AB4704B5258326LL,0xFA7B1138347E9BEELL,(-2L)}},{{0x4A886803F40BDE86LL,1L,0L,0x74D0E4E2A80421A5LL,1L},{3L,0x49B9DBF79CE2C80CLL,0L,0x30D066B32335DC65LL,0x983ECD6362296547LL},{1L,0x1A59CB379706C822LL,0xCF3CB9137EFE7B18LL,1L,0xCF3CB9137EFE7B18LL},{0x983ECD6362296547LL,0x983ECD6362296547LL,0x5086CD17E59D8630LL,0xBFBDA86EFADCADDFLL,(-4L)},{0x54074BD288A0B6D6LL,0x552ABCF54F23DFB5LL,0L,0xEA9C7313B58279F8LL,(-1L)},{0xBFBDA86EFADCADDFLL,1L,3L,0xCFEE4E9FC46A622BLL,1L},{0x4A886803F40BDE86LL,0x552ABCF54F23DFB5LL,0xB37CA69BD5AD9A11LL,1L,0xC984E575B16568BFLL},{0xEAD84D86666F4520LL,0x983ECD6362296547LL,(-2L),0xEAD84D86666F4520LL,0xBFBDA86EFADCADDFLL},{0xA91114308392A3DFLL,0x1A59CB379706C822LL,0x54074BD288A0B6D6LL,0xC984E575B16568BFLL,1L},{0x56F02031241CAE3ALL,0x49B9DBF79CE2C80CLL,0x947C661B5B55C241LL,0x49B9DBF79CE2C80CLL,0x56F02031241CAE3ALL}}};
        int l_113 = 0xC998684FL;
        int i, j, k;
        l_116 = ((g_115[1][6] = ((((safe_add_func_uint8_t_u_u((safe_div_func_int8_t_s_s(((l_113 = (safe_mul_func_int8_t_s_s(func_6(g_17[4][3], g_53[0][5], ((+l_109) >= func_6((l_111 = l_110), p_99, p_99, l_112[4][6][4])), g_13), 0x58L))) , l_112[4][6][4]), p_97)), p_98)) >= l_109) , p_97) || l_114)) , l_112[4][6][4]);
        return l_113;
    }
lbl_553:
    for (p_96 = 19; (p_96 != 13); --p_96)
    {
        unsigned char l_136 = 0x44L;
        int l_137 = 1L;
        l_119 ^= g_53[0][5];
        l_137 = (safe_sub_func_uint16_t_u_u(func_6(g_17[4][3], (safe_sub_func_uint32_t_u_u((l_124 ^ (-10L)), (safe_rshift_func_int8_t_s_u((g_115[1][6] == ((safe_div_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(g_53[0][5], (safe_unary_minus_func_int16_t_s(func_6(p_95, (safe_mod_func_int32_t_s_s(func_6((((safe_rshift_func_int8_t_s_u(l_109, 4)) , g_11) || (l_136 = g_53[0][5])), p_96, p_96, g_53[0][5]), l_137)), l_137, g_18))))), g_115[1][6])) | 0xC59A757E7574C5A9LL)), 5)))), l_138, p_98), (-7L)));
    }
    for (p_97 = 0; (p_97 > 0); p_97 = safe_add_func_uint64_t_u_u(p_97, 5))
    {
        unsigned short l_143 = 65535UL;
        int l_190[5];
        short l_249 = 1L;
        unsigned l_264 = 0x7CB76F65L;
        long long l_266 = 1L;
        char l_349 = 0x39L;
        int l_432 = 0L;
        char l_434 = (-1L);
        int l_565 = 0x6AB972FCL;
        const unsigned short l_579 = 7UL;
        int l_640 = 0x13ABE40DL;
        unsigned short l_646 = 0x1870L;
        int i;
        for (i = 0; i < 5; i++)
            l_190[i] = (-5L);
        if ((((safe_lshift_func_int16_t_s_u(l_143, 13)) == 0x5FL) == (g_53[1][1] &= (safe_add_func_uint16_t_u_u(65531UL, l_119)))))
        {
            char l_169 = 6L;
            for (l_124 = (-12); (l_124 < 16); l_124 = safe_add_func_uint8_t_u_u(l_124, 8))
            {
                char l_170 = (-2L);
                l_111 = ((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u((((g_115[2][6] | (18446744073709551615UL == (p_97 , l_143))) , (safe_mul_func_uint8_t_u_u((0xA15F50615D4C801ALL ^ (safe_sub_func_int64_t_s_s((((safe_add_func_int16_t_s_s((p_98 | (((safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(p_96, (safe_mul_func_uint16_t_u_u(l_143, 0x80E9L)))), 0)) == g_53[7][4]) != p_96)), g_18)) , 252UL) > l_138), (-1L)))), g_17[4][3]))) < (-6L)), 0xDB86E312L)), 9)) > 1L);
                for (l_109 = 0; (l_109 <= 5); l_109 += 1)
                {
                    unsigned long long l_166 = 1UL;
                    int i, j;
                    if (g_115[2][4])
                        break;
                    g_53[(l_109 + 1)][l_109] |= (l_166 & (p_99 != p_97));
                    for (p_95 = 0; (p_95 < 2); p_95 = safe_add_func_uint64_t_u_u(p_95, 6))
                    {
                        g_53[4][3] = 0xD11B3277L;
                    }
                    for (l_116 = 2; (l_116 >= 0); l_116 -= 1)
                    {
                        int i, j;
                        return g_115[l_116][(l_116 + 5)];
                    }
                }
                if (l_143)
                {
                    l_169 = 6L;
                    for (l_111 = 0; (l_111 <= 2); l_111 += 1)
                    {
                        int i, j;
                        g_53[0][5] ^= g_115[l_111][l_111];
                    }
                }
                else
                {
                    l_170 ^= g_115[1][6];
                }
            }
            g_53[4][1] = (p_95 , (l_169 , l_116));
        }
        else
        {
            unsigned l_184 = 18446744073709551615UL;
            int l_189 = 0x814B8F76L;
            char l_252 = (-1L);
            int l_383 = (-1L);
            short l_464[1];
            const unsigned short l_466 = 0x3D87L;
            int i;
            for (i = 0; i < 1; i++)
                l_464[i] = 0x1842L;
            for (l_143 = 0; (l_143 <= 2); l_143 += 1)
            {
                int l_194 = 0x609B5FE7L;
                int l_214 = 0xFF9ED612L;
                int i, j;
                if ((safe_sub_func_uint8_t_u_u(g_115[l_143][(l_143 + 4)], (safe_mul_func_int8_t_s_s(g_53[l_143][(l_143 + 2)], g_53[l_143][l_143])))))
                {
                    unsigned l_188 = 0UL;
                    for (p_99 = 0; (p_99 <= 2); p_99 += 1)
                    {
                        if (g_175)
                            break;
                        if (l_143)
                            break;
                        if (p_95)
                            continue;
                    }
                    l_116 = g_53[l_143][(l_143 + 2)];
                    for (g_175 = 0; (g_175 <= 2); g_175 += 1)
                    {
                        int l_187 = 0x6E9E258EL;
                        l_188 |= (safe_lshift_func_int8_t_s_s(p_97, (safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((g_175 ^ l_110) , (safe_mul_func_int16_t_s_s(g_17[4][3], p_98))), l_184)), func_6(((safe_mul_func_int16_t_s_s(((p_99 && l_111) || (-1L)), l_187)) || p_95), g_115[1][2], g_53[0][5], p_95)))));
                    }
                }
                else
                {
                    const unsigned short l_195 = 0x387BL;
                    l_189 = (g_53[0][5] = 0x7AEDB7C0L);
                    l_190[4] = g_53[0][5];
                    l_194 ^= (safe_rshift_func_uint16_t_u_u(((p_96 && (p_97 ^ (0x327A7BC723BD2C5ALL >= 0x0DB6F473321FAC70LL))) >= func_6(func_6(p_99, (g_193[6] = (g_53[0][5] &= 1L)), g_175, l_110), p_97, g_13, p_95)), g_115[1][7]));
                    for (p_99 = 0; (p_99 <= 2); p_99 += 1)
                    {
                        return l_195;
                    }
                }
                g_53[l_143][l_143] = (l_119 , (l_116 = p_96));
                for (l_119 = 0; (l_119 <= 2); l_119 += 1)
                {
                    long long l_213 = (-1L);
                    char l_215 = 0L;
                    l_116 ^= (safe_sub_func_uint8_t_u_u(((p_98 , (safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u((((func_6((g_204 ^= g_175), (safe_add_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u(0x46L, 0xA2L)) & ((((l_111 = g_53[l_143][l_143]) < g_53[l_143][(l_143 + 2)]) && (safe_rshift_func_int16_t_s_u(((func_6(g_18, func_6((1UL < (safe_mod_func_uint32_t_u_u(p_97, g_52))), g_193[7], g_193[4], l_194), g_115[1][6], l_213) == (-3L)) && g_13), g_53[l_143][l_143]))) ^ 0x08L)), 0UL)), l_189, p_98) == l_214) >= 0xA1L) , 0UL), 0x00L)), l_213)), p_99))) > (-6L)), l_215));
                    l_116 = (safe_add_func_int16_t_s_s((~(safe_mul_func_int8_t_s_s((g_175 = (((-8L) && g_11) | ((safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(p_98, (((!(g_17[6][6] & g_115[1][6])) | (safe_mod_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s(l_143, 5)) & (g_11 , 1UL)), g_115[2][1]))) ^ 0x541DL))) , l_138), l_194)) , l_190[4]))), 0x00L))), g_18));
                }
            }
            if ((g_53[3][3] = ((func_6(p_96, ((func_6((l_189 ^= (safe_lshift_func_uint8_t_u_u(l_230, (+func_6(func_6((((((safe_mod_func_uint32_t_u_u((l_138 != g_53[0][5]), (safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(l_111, ((p_98 > ((((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_s(0xC2L, (safe_sub_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(g_17[2][4], p_95)), p_96)) && l_119), 0xC2L)))) > p_99), g_53[1][3])) == p_97), p_95)) < p_97) && 2L) , l_230)) && l_190[4]))), g_18)))) < l_114) , (-1L)) < p_98) , l_138), p_95, g_193[6], l_190[3]), l_249, p_98, l_190[3]))))), l_124, g_53[0][5], l_249) != l_184) < l_184), p_95, l_184) > 0x73L) && g_17[3][8])))
            {
                const unsigned l_261 = 4294967294UL;
                int l_265 = 3L;
                unsigned l_267 = 4294967291UL;
                l_189 &= g_193[5];
                if (func_6((1L <= (((((g_263 = ((safe_sub_func_int32_t_s_s(l_252, g_17[8][3])) , ((((((func_6(g_11, p_98, (safe_mul_func_uint8_t_u_u((g_262 ^= (((safe_mod_func_int32_t_s_s(l_111, func_6(p_95, (safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(p_98, (0xBCADL != 0xC7A8L))), 6)), l_261, l_261))) || g_11) & g_175)), g_17[4][3])), p_99) , p_96) , (-4L)) || g_175) == g_53[7][5]) & (-1L)) , l_184))) & l_116) , l_261) > (-6L)) < l_264)), l_189, g_115[2][5], p_98))
                {
                    if (p_97)
                    {
                        l_266 = (l_265 &= g_17[0][6]);
                        if (l_267)
                            break;
                    }
                    else
                    {
                        g_53[7][2] = (((safe_rshift_func_uint16_t_u_s(g_262, 0)) & (safe_mul_func_int8_t_s_s((func_6(g_175, (safe_lshift_func_uint16_t_u_u(p_99, (p_99 || (safe_div_func_uint64_t_u_u(18446744073709551607UL, (safe_mod_func_int64_t_s_s((g_115[1][0] , (safe_sub_func_int32_t_s_s(((l_116 = func_6(g_53[0][5], p_99, ((g_282 ^= (safe_div_func_uint64_t_u_u(((g_115[1][6] && g_17[4][3]) <= 0UL), g_175))) , l_252), l_265)) == p_97), 0xAD0DFBB7L))), l_249))))))), p_97, l_119) <= 0x0C69462FL), p_97))) ^ p_98);
                    }
                }
                else
                {
                    long long l_312 = 0x094BE1140EC21474LL;
                    for (g_175 = 0; (g_175 <= 2); g_175 += 1)
                    {
                        int l_313 = 0xA48ED956L;
                        int i, j;
                        g_53[3][4] = ((l_111 = g_115[1][6]) & (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(0x3741L, 1UL)), (g_53[7][1] || (safe_add_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((g_292 = (safe_unary_minus_func_uint32_t_u(l_261))), (safe_add_func_int16_t_s_s(g_193[0], l_110)))), (safe_lshift_func_int16_t_s_s(p_98, (((g_297 = ((l_265 ^ l_138) , 0x2921L)) <= 0x4695L) < p_97)))))))));
                        if (p_97)
                            break;
                        l_313 = (func_6(((l_265 = ((p_96 , (((((safe_mul_func_int32_t_s_s(g_175, ((safe_sub_func_uint16_t_u_u(p_95, (l_190[3] = ((safe_lshift_func_int16_t_s_s((l_312 = (safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(((g_308 |= 65535UL) && (g_309 = l_265)), (safe_mul_func_uint8_t_u_u(l_143, func_6(p_97, g_292, g_18, g_263))))), 1))), g_193[5])) >= l_264)))) > l_266))) >= l_184) , 0x7CL) >= 1L) <= 0x117C11C3L)) ^ g_11)) , (-1L)), l_230, p_96, l_261) > g_11);
                    }
                }
                for (l_143 = 0; (l_143 <= 5); l_143 += 1)
                {
                    long long l_330 = 6L;
                    if (g_204)
                        goto lbl_314;
                    for (l_184 = 0; (l_184 <= 5); l_184 += 1)
                    {
                        unsigned short l_327 = 65530UL;
                        int l_328 = 0xABE34B05L;
                        int l_329 = (-2L);
                        int i, j;
                        l_111 = (g_53[(l_143 + 1)][l_184] | g_193[(l_184 + 2)]);
                        l_330 ^= (safe_rshift_func_uint8_t_u_s(func_6((safe_div_func_int64_t_s_s((g_297 = (safe_lshift_func_uint16_t_u_s(g_53[0][5], 0))), p_95)), ((l_329 = ((9L ^ (safe_mul_func_uint16_t_u_u((l_328 &= (g_13 == (p_96 > (safe_mul_func_int8_t_s_s((-10L), ((g_204 = ((safe_add_func_int64_t_s_s(p_99, g_11)) || (l_327 = p_96))) != p_98)))))), g_18))) < 0x0D92A695A641E57ELL)) ^ p_99), g_11, p_96), p_97));
                        l_190[4] ^= l_330;
                    }
                }
            }
            else
            {
                unsigned l_347 = 0xF883B221L;
                int l_350 = 3L;
                unsigned l_393 = 1UL;
                int l_404[10][3] = {{(-1L),(-1L),(-1L)},{0x9589938AL,0x9589938AL,0x9589938AL},{(-1L),(-1L),(-1L)},{0x9589938AL,0x9589938AL,0x9589938AL},{(-1L),(-1L),(-1L)},{0x9589938AL,0x9589938AL,0x9589938AL},{(-1L),(-1L),(-1L)},{0x9589938AL,0x9589938AL,0x9589938AL},{(-1L),(-1L),(-1L)},{0x9589938AL,0x9589938AL,0x9589938AL}};
                int l_405 = 0L;
                int l_435 = 1L;
                int i, j;
                if (p_98)
                {
                    unsigned short l_346 = 0x6290L;
                    for (l_109 = 0; (l_109 <= 2); l_109 += 1)
                    {
                        int i, j;
                        l_116 ^= func_6((safe_mul_func_int8_t_s_s(g_53[(l_109 + 2)][l_109], (1L & (func_6(((safe_add_func_int64_t_s_s(((((l_189 = p_95) > g_115[1][6]) != 65527UL) != 0x3FL), ((safe_mul_func_uint8_t_u_u((((safe_unary_minus_func_uint32_t_u(((safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((l_190[4] >= ((((6UL > ((safe_lshift_func_int8_t_s_u((l_346 == l_347), 1)) == 4294967295UL)) | g_262) > p_97) & 0UL)), p_95)) | 0UL), l_347)), g_53[(l_109 + 2)][l_109])) && g_115[1][5]))) , l_346) , 0UL), 0x10L)) && p_99))) != l_348), g_53[(l_109 + 2)][l_109], l_347, l_349) | l_111)))), g_18, p_95, g_18);
                        g_53[(l_109 + 1)][(l_109 + 1)] = (l_347 != g_262);
                        l_350 = (g_53[0][5] != (0xB21F73AB003C8CE0LL <= (g_308 , l_252)));
                    }
                }
                else
                {
                    for (p_95 = 1; (p_95 <= 4); p_95 += 1)
                    {
                        int i;
                        return l_190[p_95];
                    }
                }
                for (g_263 = 0; (g_263 <= 7); g_263 += 1)
                {
                    int l_363 = (-2L);
                    unsigned l_382 = 1UL;
                    int i;
                    if (g_193[g_263])
                    {
                        int l_353 = 0x284DA9F0L;
                        l_363 = ((safe_mod_func_uint64_t_u_u(((0xBFL < l_353) , ((g_292 = func_6(l_190[2], l_184, p_98, (p_98 ^ (safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((((g_362[3][1][8] |= (safe_lshift_func_int8_t_s_u(l_184, 3))) , p_99) >= g_204), l_114)), g_292)), l_190[4]))))) != g_115[1][6])), 0x848BA51F8BB1916CLL)) || p_97);
                        l_350 = (0L ^ (safe_add_func_uint8_t_u_u((p_99 , p_95), ((safe_lshift_func_int16_t_s_u(4L, p_95)) >= 0x32L))));
                        if (l_347)
                            break;
                        g_308 = (safe_sub_func_int32_t_s_s(((l_110 == ((safe_rshift_func_uint16_t_u_s(0x6CAFL, 6)) , ((((5UL == (safe_rshift_func_int8_t_s_s(l_347, func_6((l_116 = (safe_mod_func_uint64_t_u_u(p_99, (safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(((l_353 , p_95) || p_96), p_97)), g_262))))), p_99, p_96, l_382)))) , l_190[4]) == g_18) == 1UL))) , l_143), p_95));
                    }
                    else
                    {
                        unsigned char l_384 = 1UL;
                        int l_387 = 0x35671BD1L;
                        l_383 = (0L & (l_189 , (l_189 = g_17[5][3])));
                        g_53[1][3] &= (l_384 == p_98);
                        g_53[1][3] = ((((p_99 >= (l_116 |= (((l_111 = p_96) , p_95) || ((p_96 ^ func_6(g_309, g_362[3][1][8], p_97, (g_282 |= (l_387 = (safe_mod_func_uint64_t_u_u(p_95, l_189)))))) < 0xC4130EAAL)))) , g_18) < 0x16522CDCL) <= l_143);
                    }
                    l_190[0] |= g_175;
                    for (l_264 = 0; (l_264 <= 5); l_264 += 1)
                    {
                        unsigned l_390 = 0x9EB566F3L;
                        int i, j;
                        l_390 |= (safe_lshift_func_int16_t_s_u((l_189 = (l_383 = g_53[l_264][l_264])), 8));
                    }
                }
                l_383 = (safe_add_func_uint64_t_u_u((l_350 = p_97), (l_393 & l_184)));
                for (l_350 = 0; (l_350 <= 5); l_350 += 1)
                {
                    unsigned char l_409[8] = {0x3DL,0xE2L,0x3DL,0x3DL,0xE2L,0x3DL,0x3DL,0xE2L};
                    int i, j;
                    l_405 = (safe_unary_minus_func_int64_t_s((g_53[(l_350 + 1)][l_350] , (l_404[8][0] = func_6(g_297, (g_53[(l_350 + 1)][l_350] = (p_97 == (+((((safe_rshift_func_uint8_t_u_s((+g_18), ((((g_397 = (g_309 = (l_189 = 1L))) || func_6((g_309 = (p_98 || (safe_add_func_uint64_t_u_u(1UL, (l_190[1] = l_383))))), ((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((1L > g_53[(l_350 + 1)][l_350]), 1UL)), l_347)) , g_263), g_292, p_95)) | p_99) , 0x03L))) == g_52) ^ 1L) >= 1L)))), p_95, p_95)))));
                    if (((p_97 , ((safe_lshift_func_int8_t_s_u((l_347 , (func_6(p_97, p_99, g_397, g_308) != func_6(g_53[(l_350 + 1)][l_350], l_383, g_362[2][0][0], l_350))), l_249)) || g_263)) <= p_99))
                    {
                        unsigned l_408 = 0x3C5497D5L;
                        l_190[4] = l_408;
                        l_383 &= 0xBE2DB5A4L;
                    }
                    else
                    {
                        if (l_190[4])
                            break;
                        if (l_404[8][0])
                            continue;
                        if (p_96)
                            break;
                    }
                    if ((255UL < ((~l_409[1]) < p_96)))
                    {
                        l_383 = (l_405 = (safe_rshift_func_uint16_t_u_s(l_405, 13)));
                    }
                    else
                    {
                        const unsigned l_418 = 0UL;
                        int l_433 = (-1L);
                        l_116 ^= (safe_mul_func_int16_t_s_s(((((safe_mul_func_int8_t_s_s((g_262 = (1UL > g_292)), (l_111 , ((l_404[0][2] > 1UL) , g_362[3][1][8])))) < g_297) | (safe_lshift_func_uint16_t_u_s(func_6(l_418, g_263, g_53[2][1], g_419), l_420))) , p_98), g_309));
                        l_435 &= (safe_sub_func_int32_t_s_s(((func_6((l_404[8][0] &= ((l_433 = (((safe_sub_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u(g_53[(l_350 + 1)][l_350], (7UL != (g_115[0][2] = p_98)))) || p_99), (func_6((l_190[4] = 0x5F0E6FBD6F847244LL), (l_432 = (((((safe_mul_func_uint8_t_u_u((l_418 != (l_405 ^= ((l_184 ^ (p_95 != ((((g_431[4][4] = (safe_lshift_func_int8_t_s_u(((0x08C638B5L != 4294967295UL) <= g_419), 1))) > 0xCEF0L) < 0x5E59C284662E8185LL) <= p_95))) <= g_18))), p_95)) && 3L) && g_53[0][5]) < p_99) != l_264)), g_204, g_13) & l_184))) > 4294967286UL) && g_53[0][5])) <= 1UL)), p_97, p_99, l_434) >= l_350) , p_96), 3L));
                    }
                }
            }
            if ((g_308 = ((g_53[7][1] != (safe_sub_func_uint64_t_u_u((((safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((safe_unary_minus_func_uint8_t_u(((l_190[4] ^= (((+func_6(g_53[0][5], p_96, p_97, g_362[4][1][7])) || ((safe_lshift_func_int16_t_s_s((func_6((l_184 , (l_432 &= p_98)), (6UL | g_292), g_263, l_138) >= p_95), 12)) <= p_96)) , 0x6FDA9DA4L)) ^ g_431[5][2]))) || 0xA6L), 1UL)), 6)) , g_11) == p_95), g_53[7][2]))) != 0x64B1L)))
            {
                short l_445[6] = {0x6168L,(-1L),(-1L),0x6168L,(-1L),(-1L)};
                int i;
                g_53[0][5] = l_445[2];
            }
            else
            {
                char l_448 = 0xA5L;
                short l_461[8];
                const char l_465 = 0L;
                int i;
                for (i = 0; i < 8; i++)
                    l_461[i] = 0L;
                for (g_175 = 0; (g_175 != (-19)); g_175 = safe_sub_func_int16_t_s_s(g_175, 2))
                {
                    return g_52;
                }
                g_419 ^= (l_448 >= func_6(g_263, g_262, g_11, p_95));
                l_116 = (((((g_204 = (!g_297)) || 4294967294UL) < ((safe_mod_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(1L, (l_190[3] = p_99))) > ((g_282 >= (g_18 >= ((safe_mod_func_int64_t_s_s((func_6((((func_6(((l_189 = (((safe_mod_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(l_448, ((safe_rshift_func_int16_t_s_u((l_461[7] , ((((safe_mod_func_uint8_t_u_u(p_95, p_99)) != 0xE45CF571L) >= 0x6AA0L) ^ 0xA368L)), 12)) >= 0x5EL))) <= g_17[6][6]), g_115[1][3])) , 0x333DL) <= p_95)) | 9L), l_464[0], l_448, g_297) >= l_461[7]) || l_465) , l_466), p_98, g_467, p_99) , l_448), g_53[1][5])) || l_461[7]))) & l_252)), p_97)) != g_193[5])) | l_230) , p_95);
            }
            l_190[4] = g_431[4][4];
        }
        for (g_308 = (-6); (g_308 == 26); g_308 = safe_add_func_uint8_t_u_u(g_308, 6))
        {
            unsigned char l_483[7];
            int l_484 = 0L;
            int l_507[10][10][2] = {{{(-1L),0L},{0x2BE3EC5EL,0x2BE3EC5EL},{(-9L),0x2BE3EC5EL},{0x2BE3EC5EL,0L},{(-1L),0L},{(-9L),(-1L)},{0L,0L},{0L,(-1L)},{(-9L),0L},{(-1L),0L}},{{0x2BE3EC5EL,0x2BE3EC5EL},{(-9L),0x2BE3EC5EL},{0x2BE3EC5EL,0L},{(-1L),0L},{(-9L),(-1L)},{0L,0L},{0L,(-1L)},{(-9L),0L},{(-1L),0L},{0x2BE3EC5EL,0x2BE3EC5EL}},{{(-9L),0x2BE3EC5EL},{0x2BE3EC5EL,0L},{(-1L),0L},{(-9L),(-1L)},{0L,0L},{0L,(-1L)},{(-9L),0L},{(-1L),0L},{0x2BE3EC5EL,0x2BE3EC5EL},{(-9L),0x2BE3EC5EL}},{{0x2BE3EC5EL,0L},{(-1L),0L},{(-9L),(-1L)},{0L,0L},{0L,(-1L)},{(-9L),0L},{(-1L),0L},{0x2BE3EC5EL,0x2BE3EC5EL},{0L,0L},{0L,(-9L)}},{{0x2BE3EC5EL,(-1L)},{0L,0x2BE3EC5EL},{(-1L),(-9L)},{(-1L),0x2BE3EC5EL},{0L,(-1L)},{0x2BE3EC5EL,(-9L)},{0L,0L},{0L,0L},{0L,(-9L)},{0x2BE3EC5EL,(-1L)}},{{0L,0x2BE3EC5EL},{(-1L),(-9L)},{(-1L),0x2BE3EC5EL},{0L,(-1L)},{0x2BE3EC5EL,(-9L)},{0L,0L},{0L,0L},{0L,(-9L)},{0x2BE3EC5EL,(-1L)},{0L,0x2BE3EC5EL}},{{(-1L),(-9L)},{(-1L),0x2BE3EC5EL},{0L,(-1L)},{0x2BE3EC5EL,(-9L)},{0L,0L},{0L,0L},{0L,(-9L)},{0x2BE3EC5EL,(-1L)},{0L,0x2BE3EC5EL},{(-1L),(-9L)}},{{(-1L),0x2BE3EC5EL},{0L,(-1L)},{0x2BE3EC5EL,(-9L)},{0L,0L},{0L,0L},{0L,(-9L)},{0x2BE3EC5EL,(-1L)},{0L,0x2BE3EC5EL},{(-1L),(-9L)},{(-1L),0x2BE3EC5EL}},{{0L,(-1L)},{0x2BE3EC5EL,(-9L)},{0L,0L},{0L,0L},{0L,(-9L)},{0x2BE3EC5EL,(-1L)},{9L,0L},{0L,0xE8E13BC2L},{0L,0L},{9L,0L}},{{0L,0xE8E13BC2L},{(-9L),(-9L)},{9L,(-9L)},{(-9L),0xE8E13BC2L},{0L,0L},{9L,0L},{0L,0xE8E13BC2L},{0L,0L},{9L,0L},{0L,0xE8E13BC2L}}};
            int l_540[6][7] = {{1L,(-1L),0xBC514713L,(-1L),1L,(-1L),0xBC514713L},{0xAAD94177L,0xAAD94177L,3L,9L,0x7B5BDD8CL,0x7B5BDD8CL,9L},{0x939F186FL,(-6L),0x939F186FL,(-1L),0x939F186FL,(-6L),0x939F186FL},{0xAAD94177L,9L,9L,0xAAD94177L,0x7B5BDD8CL,3L,3L},{1L,(-6L),0xBC514713L,(-6L),1L,(-6L),0xBC514713L},{0x7B5BDD8CL,0xAAD94177L,9L,9L,0xAAD94177L,0x7B5BDD8CL,3L}};
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_483[i] = 1UL;
            if (l_266)
            {
                g_53[3][3] = 2L;
            }
            else
            {
                int l_480 = (-1L);
                unsigned l_520 = 0x63D1E85AL;
                l_484 = func_6(((safe_rshift_func_uint16_t_u_u(((((g_18 >= (l_119 < func_6((1UL != ((p_96 , (safe_div_func_uint32_t_u_u((18446744073709551615UL > ((safe_rshift_func_uint8_t_u_u(l_111, 1)) ^ (p_96 ^ (safe_lshift_func_uint16_t_u_u(l_480, ((safe_sub_func_int64_t_s_s(((0x03671FC6B6284754LL > 0x155396E05EC6BD98LL) & l_190[0]), g_362[3][1][8])) ^ 0xE78F07ABL)))))), 1L))) <= p_96)), p_99, g_204, g_17[8][2]))) <= l_483[1]) , l_114) , p_96), 1)) , l_230), p_99, l_483[1], p_97);
                if ((+l_483[1]))
                {
                    unsigned short l_488 = 0xE608L;
                    for (g_175 = 3; (g_175 < (-26)); g_175--)
                    {
                        long long l_487[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_487[i] = 0x84F2D46EC264D355LL;
                        l_111 = ((+g_193[3]) | g_467);
                        l_488 = l_487[1];
                        g_53[4][2] = ((safe_mod_func_int16_t_s_s(0xBD78L, (safe_mul_func_int16_t_s_s((+((~l_487[0]) , ((g_292 = l_348) | g_17[0][7]))), g_17[2][5])))) == (l_480 = (((l_480 >= ((safe_add_func_int16_t_s_s(func_6(((safe_sub_func_uint32_t_u_u((l_483[5] || (safe_add_func_int8_t_s_s(g_431[0][2], (g_397 ^ g_362[2][1][8])))), 0L)) <= g_17[8][5]), l_114, p_95, l_488), 8UL)) , l_483[4])) | p_95) | 0x75F433E2L)));
                    }
                }
                else
                {
                    for (l_420 = 0; (l_420 != 50); l_420 = safe_add_func_int64_t_s_s(l_420, 5))
                    {
                        unsigned char l_523[6] = {0xF7L,0xF7L,0xF7L,0xF7L,0xF7L,0xF7L};
                        const int l_526 = 0x85E7D54FL;
                        int i;
                        g_419 &= (p_97 , (safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s((l_484 , (g_362[3][1][8] <= (safe_add_func_uint16_t_u_u((func_6((l_507[8][6][1] != (safe_mul_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((func_6((safe_add_func_int32_t_s_s(func_6((0x40C6L ^ (g_204 < (((safe_lshift_func_int16_t_s_u((l_116 = (safe_mod_func_int32_t_s_s(((!(p_96 &= 0x8841C7C1L)) , g_175), (((l_480 = g_193[3]) != g_17[4][3]) , g_115[1][6])))), g_362[3][1][4])) >= g_262) ^ g_263))), l_520, l_484, g_431[1][1]), g_297)), p_98, g_11, p_99) , g_115[2][6]), p_99)) , g_13), 1L)) , 0L), (-1L)))), l_484, l_507[8][6][1], p_99) , g_262), l_230)))), p_95)), l_484)));
                        l_480 ^= g_17[4][3];
                        l_480 = (p_98 != ((g_13 < (safe_add_func_int16_t_s_s((l_523[2] ^= (l_190[4] = g_431[4][4])), (safe_mod_func_int16_t_s_s((g_467 != func_6(g_17[0][3], p_95, l_526, l_507[0][0][0])), 0xF0EEL))))) || g_397));
                        if (p_99)
                            continue;
                    }
                }
                for (g_419 = 0; (g_419 > (-18)); g_419 = safe_sub_func_uint8_t_u_u(g_419, 5))
                {
                    int l_541[6] = {0x9C15E16AL,0x9C15E16AL,0x9C15E16AL,0x9C15E16AL,0x9C15E16AL,0x9C15E16AL};
                    int i;
                    for (g_309 = (-5); (g_309 >= (-12)); g_309 = safe_sub_func_uint16_t_u_u(g_309, 1))
                    {
                        int l_533 = 0x4D81D241L;
                        int l_538 = (-1L);
                        l_432 = (g_115[1][6] , func_6(func_6(p_97, (safe_add_func_uint64_t_u_u(l_533, (((5L == ((l_432 || (~0xCEL)) != (l_190[4] = func_6(((func_6((!((((l_538 = (g_262 = (safe_rshift_func_uint16_t_u_s(((p_97 ^ l_533) > (((safe_mod_func_int8_t_s_s(((0xC8L ^ l_484) , p_97), g_17[1][2])) , l_520) || p_98)), 5)))) | 2UL) && (-10L)) >= p_99)), p_95, p_97, p_97) == 0x7454380597304963LL) , p_95), p_99, g_263, p_98)))) >= 0L) , p_97))), l_480, p_96), l_483[1], l_507[5][2][1], g_539));
                    }
                    if (g_13)
                    {
                        g_53[5][2] |= (g_13 , func_6(g_115[1][4], p_95, (l_540[3][4] = g_175), l_111));
                    }
                    else
                    {
                        unsigned char l_549 = 1UL;
                        int l_552 = 5L;
                        g_53[0][5] = (l_541[5] , (safe_div_func_uint64_t_u_u((g_292 = p_95), (g_544 = l_111))));
                        if (p_96)
                            continue;
                        l_480 = l_138;
                        l_480 = ((l_552 = (+(((+(safe_add_func_uint32_t_u_u(l_109, l_143))) , (l_541[0] , ((safe_lshift_func_uint8_t_u_u((((l_549 || ((g_52 , (safe_mul_func_int16_t_s_s(g_263, p_99))) || (g_115[1][6] <= ((func_6((p_99 , 0x4FB1AA9814ACB7F1LL), p_99, g_544, l_549) ^ p_96) == g_204)))) & g_193[0]) < 0x72L), p_99)) || 0x28L))) , (-1L)))) , 2L);
                    }
                }
                l_484 |= (-1L);
            }
        }
        if (g_309)
            continue;
        for (l_109 = 0; (l_109 <= 2); l_109 += 1)
        {
            unsigned l_564[4][3][2] = {{{0xB9B603D8L,4294967291UL},{0x25CE08F9L,4294967291UL},{0xB9B603D8L,4294967291UL}},{{0x25CE08F9L,4294967291UL},{0xB9B603D8L,4294967291UL},{0x25CE08F9L,4294967291UL}},{{0xB9B603D8L,4294967291UL},{0x25CE08F9L,4294967291UL},{0xB9B603D8L,4294967291UL}},{{0x25CE08F9L,4294967291UL},{0xB9B603D8L,4294967291UL},{0x25CE08F9L,4294967291UL}}};
            unsigned l_581 = 4294967286UL;
            int l_596[10][2][9] = {{{1L,0xC23DBDBAL,4L,0L,7L,1L,0L,0x88D9C844L,0x88D9C844L},{1L,(-8L),0x0DC23DE0L,1L,0x0DC23DE0L,(-8L),1L,(-5L),0x4F6B8297L}},{{(-10L),8L,0xD9FA0437L,2L,0xC23DBDBAL,8L,0L,0L,0L},{7L,0xB26D6582L,0xEFA69EEBL,0xEBC11FA1L,(-9L),1L,0x45E63291L,(-5L),0x7A3D651EL}},{{0xFF312E88L,0x4F6B8297L,(-10L),0xEFA69EEBL,0L,0xEBC11FA1L,0x0DC23DE0L,0x88D9C844L,(-10L)},{1L,(-10L),0x816EBA6FL,(-5L),8L,0xEBC11FA1L,0xEBC11FA1L,8L,(-5L)}},{{0x88D9C844L,0xEFA69EEBL,0x88D9C844L,0x8853A4C4L,0x7A3D651EL,1L,0xD9FA0437L,(-9L),0x0DC23DE0L},{(-9L),0L,7L,0xD9FA0437L,0x45E63291L,8L,0x4F6B8297L,(-8L),2L}},{{0x816EBA6FL,7L,0x3AE9BB6EL,0x8853A4C4L,0L,(-8L),0x0A3A73F4L,0xB26D6582L,1L},{0L,1L,(-1L),(-9L),0L,0x621B5A68L,(-10L),0xDC838EF4L,(-8L)}},{{0xD9FA0437L,8L,(-10L),7L,7L,(-10L),8L,0xD9FA0437L,2L},{(-10L),0x5BC72DDEL,(-5L),5L,0x45E63291L,0x7A3D651EL,8L,(-10L),7L}},{{0x8853A4C4L,1L,5L,7L,(-5L),0xC23DBDBAL,0x3AE9BB6EL,1L,2L},{2L,7L,(-9L),0x621B5A68L,1L,0x385A8516L,0xD9FA0437L,0xEBC11FA1L,(-8L)}},{{0x621B5A68L,0x7A3D651EL,0xEFA69EEBL,(-1L),0x816EBA6FL,0xB26D6582L,0xD9FA0437L,0xB26D6582L,0x816EBA6FL},{1L,0x8853A4C4L,0x8853A4C4L,1L,0xFF312E88L,1L,0x3AE9BB6EL,(-1L),7L}},{{0x4F6B8297L,0x45E63291L,1L,0x5BC72DDEL,4L,7L,8L,0xEFA69EEBL,0L},{1L,0x4F6B8297L,0x7A3D651EL,0x816EBA6FL,0xFF312E88L,(-1L),8L,1L,(-9L)}},{{(-10L),0x3AE9BB6EL,0xFF312E88L,0x45E63291L,0x816EBA6FL,0L,(-10L),(-8L),0x7A3D651EL},{8L,(-10L),0xFF312E88L,1L,1L,1L,0xFF312E88L,(-10L),8L}}};
            char l_630 = 0xEDL;
            int i, j, k;
            if (g_262)
                goto lbl_553;
            for (l_420 = 0; (l_420 <= 2); l_420 += 1)
            {
                int l_582 = 0x90120C8CL;
                unsigned long long l_597 = 18446744073709551611UL;
                int l_644 = 0xD87BED87L;
                unsigned char l_645[6] = {1UL,1UL,0x41L,1UL,1UL,0x41L};
                int l_648[1];
                short l_653[1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_648[i] = 1L;
                for (i = 0; i < 1; i++)
                    l_653[i] = 0x9182L;
                l_565 = (l_190[4] = ((!(((l_432 = (((safe_mul_func_int16_t_s_s(func_6((safe_add_func_int8_t_s_s(0x76L, (((safe_mod_func_uint64_t_u_u(((g_362[(l_109 + 3)][l_420][(l_109 + 6)] != (p_97 && (p_95 < p_98))) < p_97), (safe_mul_func_int16_t_s_s(((((l_116 = (g_309 = ((18446744073709551609UL ^ g_362[(l_109 + 3)][l_420][(l_109 + 6)]) && (g_431[4][4] = (~((-8L) | (-7L))))))) , p_98) <= 0L) , g_362[(l_109 + 3)][l_420][(l_109 + 6)]), p_96)))) == p_95) || 6L))), g_282, g_362[(l_109 + 3)][l_420][(l_109 + 6)], l_564[0][1][1]), p_97)) <= 0x3E7BD9BDL) || g_362[1][1][9])) , g_431[4][0]) || g_115[1][6])) , p_99));
                l_582 ^= ((safe_div_func_uint8_t_u_u(func_6(((safe_mul_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u((g_544 , (~func_6(func_6(((((((1UL & (!(l_109 | (((g_175 != (safe_mul_func_uint8_t_u_u(func_6(l_110, (safe_unary_minus_func_uint8_t_u(((0xB2L & 0x02L) <= (g_362[(l_109 + 3)][l_420][(l_109 + 6)] > (((safe_mul_func_int8_t_s_s((l_116 |= (safe_mod_func_int64_t_s_s((g_309 = ((func_6(g_13, p_97, g_362[2][2][6], l_564[1][1][1]) , l_249) > 0x6C4AL)), 0xE5EA6FE55BA1ADC7LL))), g_419)) , g_175) == p_99))))), g_52, l_109), 0x84L))) == g_544) ^ g_292)))) && 0x2498A8C1L) & l_190[4]) & g_362[(l_109 + 3)][l_420][(l_109 + 6)]) , 0x72123F9BD2942C8BLL) <= 18446744073709551612UL), g_539, g_53[0][5], g_544), l_249, l_579, l_138))), 8)) , l_580) >= p_95), l_581)) == g_13), g_297, p_98, l_348), 0xBBL)) >= g_115[1][6]);
                for (p_99 = 0; (p_99 <= 1); p_99 += 1)
                {
                    int l_595[4][5] = {{0x9994010CL,0xA0B25DE4L,0xA0B25DE4L,0x9994010CL,1L},{0x9994010CL,1L,1L,1L,1L},{1L,0xA0B25DE4L,1L,0x8B13864FL,0x8B13864FL},{0xA0B25DE4L,1L,0xA0B25DE4L,1L,0x8B13864FL}};
                    int i, j, k;
                    l_596[0][1][4] = (l_564[(l_420 + 1)][l_109][p_99] & ((l_595[0][1] = (((safe_add_func_uint32_t_u_u(((g_115[1][7] ^ (g_544 = l_579)) ^ ((safe_lshift_func_uint8_t_u_u(func_6((safe_unary_minus_func_uint64_t_u(4UL)), (l_116 = ((safe_rshift_func_uint8_t_u_u(l_109, 7)) <= ((func_6(l_580, g_175, p_95, func_6(((safe_lshift_func_int8_t_s_s((l_565 = g_594), g_193[3])) == p_95), p_98, g_17[3][0], l_564[(l_420 + 1)][l_109][p_99])) == g_115[1][6]) , p_95))), p_99, p_98), g_115[1][6])) >= 4294967295UL)), 0UL)) != l_564[0][1][1]) , 0x10AEA30CL)) != 1UL));
                    if (p_96)
                        break;
                }
                if (((l_597 != ((l_597 , l_598[0][1][0]) <= (safe_mul_func_uint8_t_u_u(((g_297 = ((l_266 != (safe_div_func_uint32_t_u_u((func_6(g_18, p_95, p_97, g_539) || p_98), p_99))) & p_98)) , 0x71L), 0xADL)))) < p_95))
                {
                    const int l_613 = 0x1D029E48L;
                    int l_631 = 1L;
                    g_397 = (p_95 , (((safe_mod_func_uint8_t_u_u((g_204 <= 3L), ((l_432 = (safe_div_func_int64_t_s_s(p_98, (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((l_619[2][5][1] = (safe_mul_func_int8_t_s_s(l_613, func_6(g_115[1][6], ((safe_add_func_uint32_t_u_u((func_6((safe_mul_func_uint16_t_u_u((p_99 & func_6(l_564[1][0][0], p_96, l_582, g_397)), p_98)), l_190[4], p_96, l_618) || p_95), 7L)) == l_190[4]), g_204, g_419)))), p_95)), l_190[4]))))) ^ p_96))) && p_95) > g_17[4][3]));
                    for (p_98 = 2; (p_98 >= 0); p_98 -= 1)
                    {
                        char l_643 = 0x9DL;
                        l_631 = (safe_mod_func_int64_t_s_s((p_95 , (func_6((!(safe_mod_func_int8_t_s_s((g_204 || ((g_204 && ((safe_div_func_uint16_t_u_u((l_596[9][1][1] = (safe_lshift_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(l_434, l_596[6][0][1])) < 4294967295UL), p_97))), 0x8DD6L)) & func_6((g_53[5][1] > p_95), g_204, g_17[6][0], p_99))) , g_362[3][0][4])), 0xC9L))), p_99, g_297, p_95) != l_630)), 0xF9ACCA5F4EB89664LL));
                        l_432 = (((((((g_431[4][4] = (l_596[3][0][5] = p_95)) != ((~g_193[2]) , (l_631 <= ((~0xC3EB733BL) <= (0xFBL & ((safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(l_640, 1)), 3)) != 0xF3L), (g_292 & (safe_add_func_uint32_t_u_u(p_95, g_175))))), l_643)) ^ g_467)))))) < l_631) && l_644) && p_95) != 4294967293UL) != l_138);
                        l_646 &= ((g_419 &= l_631) >= (g_53[2][2] && func_6((l_619[2][5][1] , func_6((l_582 |= l_581), g_467, l_613, p_95)), (((g_544 = (l_645[0] > p_96)) || p_96) && g_53[0][5]), l_645[0], p_95)));
                        if (p_99)
                            break;
                    }
                    l_647 = 0x764EEB62L;
                }
                else
                {
                    int l_652 = (-7L);
                    l_653[0] |= ((l_618 = (func_6(p_96, p_97, l_116, l_648[0]) , (((~(g_544 &= (255UL <= g_292))) == (safe_rshift_func_int16_t_s_s(g_263, 6))) , (l_190[4] = (safe_unary_minus_func_uint64_t_u(((-2L) <= g_362[3][1][8]))))))) & l_652);
                    l_116 &= (((((((+func_6(g_17[3][5], l_618, g_297, (l_652 || (safe_unary_minus_func_uint16_t_u((((l_565 = l_564[3][1][0]) == (l_596[1][1][4] = ((safe_add_func_int32_t_s_s(0x55434467L, ((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(((l_582 &= (p_97 , (0UL == (g_544 = ((l_652 > l_124) , g_262))))) , g_362[(l_109 + 3)][l_420][(l_109 + 6)]), 0x1CL)), 3)), p_97)) && l_596[0][1][4]))) >= p_98))) , l_124)))))) != 0x25L) , p_96) < p_98) , l_652) <= 0L) ^ 0x2CA1FD95L);
                    for (g_309 = 0; (g_309 <= 2); g_309 += 1)
                    {
                        g_53[2][3] &= p_97;
                        if (l_230)
                            goto lbl_553;
                    }
                }
            }
        }
    }
    return p_98;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_17[i][j], "g_17[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_53[i][j], "g_53[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_115[i][j], "g_115[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_175, "g_175", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_193[i], "g_193[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_297, "g_297", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_362[i][j][k], "g_362[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_397, "g_397", print_hash_value);
    transparent_crc(g_419, "g_419", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_431[i][j], "g_431[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_467, "g_467", print_hash_value);
    transparent_crc(g_539, "g_539", print_hash_value);
    transparent_crc(g_544, "g_544", print_hash_value);
    transparent_crc(g_594, "g_594", print_hash_value);
    transparent_crc(g_770, "g_770", print_hash_value);
    transparent_crc(g_771, "g_771", print_hash_value);
    transparent_crc(g_812, "g_812", print_hash_value);
    transparent_crc(g_828, "g_828", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_829[i][j], "g_829[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_878, "g_878", print_hash_value);
    transparent_crc(g_890, "g_890", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_1012[i][j][k], "g_1012[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1126, "g_1126", print_hash_value);
    transparent_crc(g_1154, "g_1154", print_hash_value);
    transparent_crc(g_1297, "g_1297", print_hash_value);
    transparent_crc(g_1536, "g_1536", print_hash_value);
    transparent_crc(g_1537, "g_1537", print_hash_value);
    transparent_crc(g_1602, "g_1602", print_hash_value);
    transparent_crc(g_1605, "g_1605", print_hash_value);
    transparent_crc(g_1607, "g_1607", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1621[i], "g_1621[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1644, "g_1644", print_hash_value);
    transparent_crc(g_1667, "g_1667", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
