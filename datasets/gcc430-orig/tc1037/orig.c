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



static int g_2 = 0xA6318529L;
static volatile int g_29 = 0x271DBCABL;
static volatile int g_30 = 0x3B8CFF26L;
static int g_31 = (-1L);
static unsigned g_83[7] = {6UL, 6UL, 6UL, 6UL, 6UL, 6UL, 6UL};
static volatile char g_101 = 0xABL;
static volatile unsigned char g_102 = 1UL;
static volatile unsigned char g_153[3][8] = {{248UL, 255UL, 248UL, 255UL, 248UL, 255UL, 248UL, 255UL}, {248UL, 255UL, 248UL, 255UL, 248UL, 255UL, 248UL, 255UL}, {248UL, 255UL, 248UL, 255UL, 248UL, 255UL, 248UL, 255UL}};
static char g_167[5][1] = {{0x2FL}, {0x2FL}, {0x2FL}, {0x2FL}, {0x2FL}};
static volatile int g_169 = 0x3C557905L;
static int g_170 = 0xE296350FL;
static volatile unsigned g_174 = 0x5A7C04A7L;
static volatile int g_284 = 1L;
static volatile unsigned g_439 = 0x4F0B8E9DL;
static int g_476 = 0xB5FB86B1L;
static short g_483 = 8L;
static unsigned char g_484 = 0xBDL;
static unsigned g_518 = 4294967288UL;
static volatile char g_576 = 0x56L;
static unsigned g_680 = 0x1BF20BC5L;
static volatile int g_683[1] = {0xD6C72A13L};
static volatile int g_684 = 0xFDDD9E40L;
static int g_827[7] = {0x754E2FF5L, 3L, 0x754E2FF5L, 3L, 0x754E2FF5L, 3L, 0x754E2FF5L};
static volatile char g_1091[2][1] = {{(-1L)}, {(-1L)}};
static volatile short g_1096[9] = {(-1L), 3L, (-1L), 3L, (-1L), 3L, (-1L), 3L, (-1L)};
static unsigned g_1097 = 0x3164409CL;
static unsigned short g_1158 = 1UL;
static char g_1194 = 1L;
static volatile short g_1356 = 0xB3DEL;
static unsigned g_1394 = 0x3AF9A3A9L;
static unsigned short g_1583 = 1UL;
static volatile int g_1586 = (-1L);
static unsigned char g_1598 = 253UL;
static short g_1668 = (-7L);
static volatile short g_1695 = 0x6155L;
static unsigned char g_1718[7][3] = {{0UL, 0UL, 0xCFL}, {0UL, 0UL, 0xCFL}, {0UL, 0UL, 0xCFL}, {0UL, 0UL, 0xCFL}, {0UL, 0UL, 0xCFL}, {0UL, 0UL, 0xCFL}, {0UL, 0UL, 0xCFL}};
static const short g_1770 = 0x7E8CL;
static int g_1816 = 7L;
static int g_1823 = 0x8805124DL;
static volatile short g_1892[2] = {(-7L), (-7L)};
static short g_1970 = 0xDA53L;
static unsigned g_2093[10] = {0UL, 0x86F2D565L, 0UL, 0x86F2D565L, 0UL, 0x86F2D565L, 0UL, 0x86F2D565L, 0UL, 0x86F2D565L};
static volatile int g_2094 = 0L;
static volatile short g_2095 = 0xCCE9L;
static char g_2190 = 0xA5L;
static volatile int g_2262[2] = {0L, 0L};



static short func_1(void);
static unsigned func_8(short p_9, int p_10, unsigned char p_11);
static unsigned char func_13(unsigned short p_14, char p_15);
static int func_18(unsigned short p_19, short p_20, short p_21, unsigned p_22, const unsigned short p_23);
static int func_26(int p_27);
static unsigned short func_32(int p_33, short p_34, int p_35, char p_36);
static char func_37(unsigned p_38, unsigned p_39);
static short func_42(unsigned p_43, unsigned char p_44, unsigned p_45, int p_46);
static short func_48(const int p_49, char p_50, unsigned char p_51, const char p_52, short p_53);
static unsigned short func_54(int p_55, char p_56, short p_57, int p_58);
static short func_1(void)
{
    short l_3 = 0x9BEBL;
    char l_12 = (-1L);
    int l_1893 = 0x30038477L;
    int l_1894 = (-10L);
    int l_1895 = 1L;
    int l_1897 = 0x09056E5BL;
    unsigned l_2004 = 1UL;
    unsigned l_2087 = 0x1CFCF9EEL;
    int l_2097[9][5] = {{0x5BD0E825L, 0x66F3B0E8L, 0xBA754246L, 1L, 0xBA754246L}, {0x5BD0E825L, 0x66F3B0E8L, 0xBA754246L, 1L, 0xBA754246L}, {0x5BD0E825L, 0x66F3B0E8L, 0xBA754246L, 1L, 0xBA754246L}, {0x5BD0E825L, 0x66F3B0E8L, 0xBA754246L, 1L, 0xBA754246L}, {0x5BD0E825L, 0x66F3B0E8L, 0xBA754246L, 1L, 0xBA754246L}, {0x5BD0E825L, 0x66F3B0E8L, 0xBA754246L, 1L, 0xBA754246L}, {0x5BD0E825L, 0x66F3B0E8L, 0xBA754246L, 1L, 0xBA754246L}, {0x5BD0E825L, 0x66F3B0E8L, 0xBA754246L, 1L, 0xBA754246L}, {0x5BD0E825L, 0x66F3B0E8L, 0xBA754246L, 1L, 0xBA754246L}};
    char l_2169 = 0x6FL;
    const int l_2174 = 0xD7AD5E15L;
    unsigned short l_2189 = 65529UL;
    unsigned short l_2264 = 65535UL;
    int i, j;
    l_3 = g_2;
    if ((g_2 != (l_3 > ((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(((func_8(l_12, (1L & ((-6L) == (g_2 & (l_3 != func_13(g_2, g_2))))), g_2) >= 0x9F30E692L) | l_12), 4)) | 3L), g_2)) || 0x8E12E016L))))
    {
        unsigned l_1830 = 0xCE926E69L;
        int l_1870[10] = {0x89565B22L, 0x6DBA7B08L, 0x89565B22L, 0x6DBA7B08L, 0x89565B22L, 0x6DBA7B08L, 0x89565B22L, 0x6DBA7B08L, 0x89565B22L, 0x6DBA7B08L};
        int i;
        if ((l_3 || g_683[0]))
        {
            unsigned l_1831[5];
            int l_1835 = (-9L);
            int l_1890 = 0xEE5E98ABL;
            int l_1896 = 0x69DA3AC9L;
            int l_1922 = 0x7AC5AB28L;
            short l_1956 = 3L;
            int i;
            for (i = 0; i < 5; i++)
                l_1831[i] = 1UL;
            g_169 = (safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(g_174, g_1823)), (safe_sub_func_uint16_t_u_u(1UL, (l_3 >= func_8((((((0L | (-1L)) ^ (((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((5UL || (l_1830 && l_12)), 1)), 0x423A0570L)) < g_476) , l_12)) >= l_3) | l_1830) , 0L), g_167[2][0], l_1831[4]))))));
            g_29 = l_3;
            for (g_170 = 0; (g_170 != 9); ++g_170)
            {
                unsigned short l_1834 = 0x1466L;
                l_1835 |= l_1834;
                if ((safe_rshift_func_uint8_t_u_s(l_1830, l_1830)))
                {
                    unsigned l_1838 = 18446744073709551613UL;
                    l_1838 = g_1158;
                }
                else
                {
                    unsigned char l_1849 = 1UL;
                    short l_1857 = 0x951BL;
                    l_1835 &= ((safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(func_8(l_12, ((safe_lshift_func_int16_t_s_s(g_827[4], 7)) >= ((func_8(l_1849, g_174, (((g_680 > (safe_unary_minus_func_uint8_t_u((+(l_1834 > ((safe_sub_func_int8_t_s_s(0xAEL, (safe_add_func_int32_t_s_s(g_680, g_1823)))) != g_2)))))) , 0x408B2305L) , g_170)) == 0x6CD43ADDL) & l_1830)), g_1394), g_1598)), g_1770)) != l_1849), 0x43L)), 255UL)) == l_1834);
                    return l_1857;
                }
            }
            for (g_680 = 0; (g_680 <= 4); g_680 += 1)
            {
                int l_1886 = 0x14A3FCAEL;
                unsigned short l_1898 = 0xE14DL;
                int l_1923[2][4] = {{(-4L), 1L, (-4L), 1L}, {(-4L), 1L, (-4L), 1L}};
                int l_1924 = 4L;
                int i, j;
                g_169 = ((g_827[(g_680 + 2)] & (safe_mul_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u((8UL || (l_12 , (safe_rshift_func_int16_t_s_s((g_102 >= ((safe_lshift_func_uint8_t_u_u(g_1394, 4)) , l_3)), (g_167[0][0] ^ 0xD429L))))), 0UL)) , l_12) > g_518), g_1394))) || 4L);
                if ((safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((4294967295UL != (g_153[0][5] <= 0L)) & ((g_827[3] , (0L != ((g_827[(g_680 + 2)] , g_1097) , (g_1823 , (1UL < g_2))))) <= 254UL)), g_1158)), l_1831[4])))
                {
                    unsigned char l_1879 = 0UL;
                    int l_1888 = 0x462CDCB5L;
                    int l_1889 = 7L;
                    int l_1891[4][3] = {{0x4C7E8356L, 0x37959EC2L, 0x06573619L}, {0x4C7E8356L, 0x37959EC2L, 0x06573619L}, {0x4C7E8356L, 0x37959EC2L, 0x06573619L}, {0x4C7E8356L, 0x37959EC2L, 0x06573619L}};
                    int i, j;
                    if (((l_1831[4] < (0x91L <= 253UL)) != g_1356))
                    {
                        unsigned short l_1884 = 3UL;
                        l_1870[3] = l_3;
                        g_170 = ((((3L | 0x5BL) != (safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(((((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u(l_1879, 2)), 7)) && (8L | (safe_rshift_func_uint8_t_u_s(0x2BL, 4)))) , (g_1356 >= ((((safe_lshift_func_uint16_t_u_u(g_1816, g_1158)) == g_167[2][0]) || g_83[4]) & l_1884))) == l_1884), 1)), l_1884))) | 4294967295UL) && 65527UL);
                    }
                    else
                    {
                        char l_1885 = (-2L);
                        int l_1887[3][1];
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1887[i][j] = 5L;
                        }
                        l_1898--;
                        l_1896 &= ((((safe_mod_func_int8_t_s_s(g_29, g_827[(g_680 + 2)])) , 0xC032L) , g_683[0]) , ((((((g_83[0] , 0x742086BFL) && g_683[0]) != (g_827[0] > (safe_sub_func_int8_t_s_s(0x78L, 7L)))) != 0L) & 0xE3L) | l_1893));
                    }
                    g_1816 ^= (0xE7L > (0L <= (~g_102)));
                }
                else
                {
                    const unsigned short l_1919 = 0x56EAL;
                    l_1924 ^= (g_827[3] >= (safe_mul_func_uint16_t_u_u(g_167[2][0], (((((((0UL & (l_1895 , ((((((safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(l_1886, 0xFFL)), ((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((((5UL == l_1919) || ((safe_mod_func_uint32_t_u_u((0x6028L <= 0x6396L), g_167[2][0])) , 1L)) , g_827[3]), 0UL)), 4)), 4)), l_1830)) == 1UL))) & 5L) ^ g_169) , l_1835) , l_1831[4]) == 0xBEL))) , l_1893) != l_1830) >= l_1922) != 0x6DL) , l_1923[0][1]) ^ g_1718[4][1]))));
                    g_1586 = (safe_mul_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u(0xB37FL, (0L > (g_153[2][6] == 0xC1A9L)))) || g_169) & 0L), (safe_rshift_func_uint16_t_u_u(g_1598, (safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(g_167[2][0], 2)), 0L))))));
                    for (l_1894 = 0; (l_1894 <= 4); l_1894 += 1)
                    {
                        int l_1937[6][8] = {{5L, 5L, 0x9113357DL, 5L, 5L, 0x9113357DL, 5L, 5L}, {5L, 5L, 0x9113357DL, 5L, 5L, 0x9113357DL, 5L, 5L}, {5L, 5L, 0x9113357DL, 5L, 5L, 0x9113357DL, 5L, 5L}, {5L, 5L, 0x9113357DL, 5L, 5L, 0x9113357DL, 5L, 5L}, {5L, 5L, 0x9113357DL, 5L, 5L, 0x9113357DL, 5L, 5L}, {5L, 5L, 0x9113357DL, 5L, 5L, 0x9113357DL, 5L, 5L}};
                        int i, j;
                        if (l_1870[3])
                            break;
                        g_683[0] = 7L;
                        g_31 &= ((safe_add_func_uint32_t_u_u((1L < 65535UL), l_1937[1][4])) , (((((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u(g_153[2][1], ((safe_rshift_func_uint16_t_u_s(65535UL, (1L < (safe_sub_func_int32_t_s_s((l_1923[0][3] && (safe_rshift_func_int8_t_s_u((((safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(l_1894, (safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s((l_1956 > l_1890), g_167[2][0])), l_1896)))), 65529UL)) > g_483) < g_1583), 3))), g_827[(g_680 + 2)]))))) < l_1924))), l_1922)) < g_83[5]) && g_284) ^ g_476) , g_170));
                    }
                }
            }
        }
        else
        {
            l_1870[3] &= g_29;
        }
        for (g_1194 = 0; (g_1194 >= (-25)); --g_1194)
        {
            unsigned l_1967 = 0xE2F117F7L;
            int l_2003 = 1L;
            for (g_1668 = 0; (g_1668 <= 0); g_1668 += 1)
            {
                unsigned l_1999 = 0x9764DCD9L;
                unsigned l_2002 = 1UL;
                int i, j;
                if ((((safe_add_func_uint16_t_u_u((((((safe_mul_func_uint16_t_u_u(65532UL, (g_827[(g_1668 + 2)] <= g_167[(g_1668 + 2)][g_1668]))) <= 0x07F9L) != (safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((func_8(((((g_1718[(g_1668 + 5)][(g_1668 + 1)] , 5UL) < l_1967) == (func_48(g_1194, (safe_rshift_func_int8_t_s_u(0L, 6)), l_1893, g_1091[0][0], g_484) , (-2L))) <= g_827[(g_1668 + 2)]), g_827[2], l_3) && g_1718[1][0]) ^ 0xBB18L), l_1870[3])), g_1970))) , l_1897) , 0x54D7L), l_1895)) ^ 0x3800L) & 1L))
                {
                    unsigned char l_1975 = 1UL;
                    int l_1988 = 0xC073BB51L;
                    g_683[0] = ((-1L) == (safe_lshift_func_uint8_t_u_u((l_12 , (((g_1091[0][0] , ((safe_sub_func_int16_t_s_s(g_439, (g_1816 <= g_1598))) >= (-2L))) , g_1718[1][0]) || l_1975)), g_167[(g_1668 + 2)][g_1668])));
                    for (g_1816 = 0; (g_1816 <= 0); g_1816 += 1)
                    {
                        int i;
                        g_683[g_1816] ^= (safe_rshift_func_uint8_t_u_s(l_1870[(g_1816 + 5)], 5));
                        l_1988 = (((safe_add_func_int32_t_s_s(((((safe_mul_func_int16_t_s_s(g_683[g_1816], (((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((g_518 != g_827[5]) < (g_827[(g_1668 + 2)] || g_827[(g_1668 + 2)])), 3)), l_1830)) == (safe_lshift_func_int8_t_s_s(g_1097, ((l_1988 & l_1870[(g_1668 + 6)]) | 0x91832E5DL)))) & g_518))) , 0x7AC8A90AL) >= g_1668) == l_1988), l_1870[7])) > l_1975) < 65535UL);
                        g_31 = (safe_mul_func_uint16_t_u_u(((g_153[2][6] , (g_1770 != (g_1091[0][0] != l_1967))) | ((l_1870[(g_1668 + 6)] != (safe_rshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(g_1718[1][0], (1UL > g_827[(g_1668 + 2)]))) == (g_827[(g_1668 + 2)] , g_170)), l_1967))) ^ (-1L))), 0x1FCBL));
                    }
                    l_2003 = ((safe_lshift_func_int8_t_s_s((g_1718[(g_1668 + 5)][(g_1668 + 1)] != ((((l_1999 ^ (func_8(g_827[(g_1668 + 2)], (((safe_rshift_func_int16_t_s_s((g_167[1][0] , l_2002), 1)) | l_1870[8]) >= l_1870[3]), g_1668) && l_2002)) <= l_1870[9]) > l_1870[9]) != 0L)), 5)) >= 0x7B39584DL);
                }
                else
                {
                    return l_1895;
                }
                l_2003 = g_683[0];
                for (g_1816 = 0; (g_1816 >= 0); g_1816 -= 1)
                {
                    l_2004 = 0xBA1772AFL;
                }
            }
        }
    }
    else
    {
        const unsigned char l_2015 = 4UL;
        int l_2016[7][8] = {{0xB92B3AB7L, 6L, (-1L), 6L, 0xB92B3AB7L, 7L, (-1L), 6L}, {0xB92B3AB7L, 6L, (-1L), 6L, 0xB92B3AB7L, 7L, (-1L), 6L}, {0xB92B3AB7L, 6L, (-1L), 6L, 0xB92B3AB7L, 7L, (-1L), 6L}, {0xB92B3AB7L, 6L, (-1L), 6L, 0xB92B3AB7L, 7L, (-1L), 6L}, {0xB92B3AB7L, 6L, (-1L), 6L, 0xB92B3AB7L, 7L, (-1L), 6L}, {0xB92B3AB7L, 6L, (-1L), 6L, 0xB92B3AB7L, 7L, (-1L), 6L}, {0xB92B3AB7L, 6L, (-1L), 6L, 0xB92B3AB7L, 7L, (-1L), 6L}};
        const unsigned l_2083 = 0x3121E413L;
        unsigned short l_2086 = 4UL;
        unsigned l_2092 = 0xEC623285L;
        char l_2096[5][8] = {{0x24L, 0L, (-4L), 0xFCL, 0xA3L, 0xEBL, 0xA3L, 0xFCL}, {0x24L, 0L, (-4L), 0xFCL, 0xA3L, 0xEBL, 0xA3L, 0xFCL}, {0x24L, 0L, (-4L), 0xFCL, 0xA3L, 0xEBL, 0xA3L, 0xFCL}, {0x24L, 0L, (-4L), 0xFCL, 0xA3L, 0xEBL, 0xA3L, 0xFCL}, {0x24L, 0L, (-4L), 0xFCL, 0xA3L, 0xEBL, 0xA3L, 0xFCL}};
        unsigned char l_2098 = 0x50L;
        unsigned short l_2112 = 0xD620L;
        char l_2220 = 0x2CL;
        int l_2223 = 0L;
        int l_2237 = 0L;
        char l_2255 = 0x56L;
        unsigned short l_2270 = 2UL;
        int i, j;
        l_2016[5][6] = func_8(g_683[0], (func_8((safe_sub_func_int32_t_s_s(((-9L) < ((safe_mod_func_int8_t_s_s((((func_8(g_1718[1][0], ((((safe_mod_func_int32_t_s_s((safe_add_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s(func_8(l_1897, g_1816, (l_1895 < (l_2015 & g_518))), 0x27B4L)) & l_2004) || l_2004), 0x27L)), g_167[3][0])) > 0x068EL) <= 1UL) , 0x551F8D6EL), l_12) ^ l_2015) == g_1770) | g_167[0][0]), 5UL)) >= g_827[5])), 0L)), g_1970, l_2004) ^ g_484), l_12);
        if (g_1096[5])
        {
            unsigned l_2018 = 0x4DECCCFEL;
            l_1894 = (((func_18((func_8(g_1598, g_1097, (((g_1970 , (safe_unary_minus_func_int32_t_s((l_2018 > (((g_83[5] & ((safe_add_func_uint16_t_u_u((g_683[0] , (0x9E7CL && (+((((l_2018 ^ func_8(l_2016[5][6], g_1096[5], g_167[4][0])) & g_518) < g_1158) >= g_1598)))), l_1893)) , l_3)) & l_2018) , l_3))))) != g_827[0]) , l_2004)) , l_2015), l_2018, l_1895, g_827[3], g_484) <= l_2016[5][6]) , 0x229CL) & l_12);
        }
        else
        {
            int l_2021 = (-4L);
            int l_2049 = 0xAB93167FL;
            unsigned l_2084 = 2UL;
            if ((((func_26((!(l_1893 || (l_2021 , (safe_sub_func_uint16_t_u_u((g_153[1][2] || (safe_mul_func_uint8_t_u_u(g_827[2], (safe_lshift_func_int16_t_s_u(l_1895, 0))))), (((0x6376BF91L || g_484) , (l_1893 <= 0xD675L)) > l_2016[5][6]))))))) >= l_1895) , 0xF0BEE139L) == g_1823))
            {
                unsigned l_2044[10] = {0xE793E5F1L, 5UL, 0x2DA9FF74L, 0x2DA9FF74L, 5UL, 0xE793E5F1L, 5UL, 0x2DA9FF74L, 0x2DA9FF74L, 5UL};
                int i;
                if ((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(0x4299L, (safe_sub_func_uint16_t_u_u(l_3, (safe_mul_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(0xA834L, g_1695)) , (!(safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(func_48((safe_add_func_uint16_t_u_u(g_174, (l_2021 && g_167[0][0]))), g_31, g_1598, l_2016[6][2], g_1770), g_1394)), g_1194)))), (-1L))))))), 0x60C8L)))
                {
                    unsigned l_2047 = 1UL;
                    unsigned l_2048 = 0xA025764FL;
                    unsigned char l_2060 = 6UL;
                    l_2049 = (l_2044[4] && func_42(((func_42((g_1816 ^ (safe_sub_func_uint32_t_u_u((g_1695 , g_1718[4][2]), (6UL <= 0UL)))), l_2016[5][6], g_1668, l_2047) == 0xD214L) , l_2044[9]), g_1718[3][2], l_2048, l_1897));
                    for (g_170 = 0; (g_170 <= 1); g_170 += 1)
                    {
                        int i;
                        g_31 &= (g_827[(g_170 + 4)] <= (((safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(((g_1586 > 0x682C2669L) && 7UL), (l_2016[2][1] == (safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(l_2060, g_484)), ((~l_2060) <= ((safe_rshift_func_uint8_t_u_u(func_8(((safe_sub_func_int16_t_s_s(g_827[(g_170 + 4)], l_2016[2][7])) || l_2044[7]), l_2044[3], g_1718[1][0]), l_2016[5][1])) <= g_1668))))))) , g_169), g_167[3][0])), g_1583)) != 0xC058L) | l_2049));
                        if (g_683[0])
                            continue;
                        if (g_576)
                            continue;
                        return g_1097;
                    }
                }
                else
                {
                    l_1893 = 1L;
                }
            }
            else
            {
                unsigned char l_2085 = 255UL;
                for (g_31 = 0; (g_31 == (-29)); g_31 = safe_sub_func_int16_t_s_s(g_31, 7))
                {
                    for (g_1823 = 0; (g_1823 <= 15); g_1823 = safe_add_func_uint32_t_u_u(g_1823, 6))
                    {
                        return g_1091[0][0];
                    }
                    l_2016[3][3] = g_83[0];
                }
                g_683[0] = ((safe_lshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(l_2004, (((((safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s(func_48((safe_lshift_func_uint16_t_u_s(g_1097, (func_18((0x5FL != (safe_sub_func_int8_t_s_s((l_1895 || ((func_18(((+l_1897) <= l_2015), ((~(((g_827[0] ^ (func_48((((safe_lshift_func_uint16_t_u_s((g_30 < 1UL), 4)) , l_2083) || 0x6CD112CBL), l_2084, l_1897, l_2015, l_2004) != l_1897)) | l_2085) & 0x00L)) <= 0x1DCA1926L), l_2016[1][4], l_2084, g_1097) , g_827[3]) >= l_2086)), g_827[1]))), g_1823, l_1893, g_31, l_2085) < 0L))), l_2086, g_2, g_1394, l_2086), 0x8DAAL)), 3)) >= g_1583) && (-6L)) < l_2087) , l_2049))) , g_680), g_1583)) != g_827[5]);
                return l_2086;
            }
            g_31 ^= (safe_add_func_int8_t_s_s(6L, (((((((safe_mod_func_int32_t_s_s(g_1394, func_8((((0xA5967BFFL && g_1091[0][0]) && (l_1895 | g_1823)) ^ (((func_8(l_2092, g_83[3], func_8(g_1394, g_170, g_518)) != l_2021) , 0xF8AB77F1L) || l_2015)), l_2015, g_167[2][0]))) >= g_484) < l_1894) , 0x1EA4L) ^ g_2093[3]) , g_2094) ^ (-1L))));
            g_169 = l_2004;
        }
        l_2098--;
        if ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s((~l_2083), 3)), 8)))
        {
            unsigned char l_2107 = 0xB9L;
            int l_2137[2][2];
            int l_2156 = 0xB3964A88L;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                    l_2137[i][j] = 4L;
            }
            for (g_1194 = 0; (g_1194 != 4); g_1194 = safe_add_func_int8_t_s_s(g_1194, 8))
            {
                return l_2107;
            }
            for (g_2 = 0; (g_2 != 11); ++g_2)
            {
                const int l_2117[9][8] = {{0xC126463FL, 0xB09A6334L, 0x17B87628L, 0x5CF33814L, 5L, 0x1C4ECB17L, 0x6F1BF661L, 0xB5A93627L}, {0xC126463FL, 0xB09A6334L, 0x17B87628L, 0x5CF33814L, 5L, 0x1C4ECB17L, 0x6F1BF661L, 0xB5A93627L}, {0xC126463FL, 0xB09A6334L, 0x17B87628L, 0x5CF33814L, 5L, 0x1C4ECB17L, 0x6F1BF661L, 0xB5A93627L}, {0xC126463FL, 0xB09A6334L, 0x17B87628L, 0x5CF33814L, 5L, 0x1C4ECB17L, 0x6F1BF661L, 0xB5A93627L}, {0xC126463FL, 0xB09A6334L, 0x17B87628L, 0x5CF33814L, 5L, 0x1C4ECB17L, 0x6F1BF661L, 0xB5A93627L}, {0xC126463FL, 0xB09A6334L, 0x17B87628L, 0x5CF33814L, 5L, 0x1C4ECB17L, 0x6F1BF661L, 0xB5A93627L}, {0xC126463FL, 0xB09A6334L, 0x17B87628L, 0x5CF33814L, 5L, 0x1C4ECB17L, 0x6F1BF661L, 0xB5A93627L}, {0xC126463FL, 0xB09A6334L, 0x17B87628L, 0x5CF33814L, 5L, 0x1C4ECB17L, 0x6F1BF661L, 0xB5A93627L}, {0xC126463FL, 0xB09A6334L, 0x17B87628L, 0x5CF33814L, 5L, 0x1C4ECB17L, 0x6F1BF661L, 0xB5A93627L}};
                int i, j;
                for (g_1097 = 0; (g_1097 <= 41); g_1097++)
                {
                    for (g_1816 = 0; (g_1816 >= 0); g_1816 -= 1)
                    {
                        int i;
                        return g_1096[g_1816];
                    }
                }
                l_2112--;
                if (g_2093[5])
                {
                    int l_2136 = 0L;
                    if (g_683[0])
                        break;
                    l_2137[1][1] = (safe_mod_func_uint32_t_u_u(l_2117[8][0], func_48(((safe_mod_func_uint16_t_u_u((l_2107 , func_42((((safe_mod_func_uint8_t_u_u(g_101, (safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(g_1816, (l_2097[7][1] == g_1718[1][0]))), g_483)), 15)))) == (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((((g_1816 , (safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((g_1097 > l_2136) > g_1158), g_1583)), g_1394))) <= 4294967292UL) , 2L) <= 0x92448CA6L), 0UL)), l_2107))) >= g_1823), g_2093[8], l_2136, l_2117[8][0])), 1L)) < g_1394), g_1718[3][0], g_1718[4][2], l_2117[4][1], l_2096[0][7])));
                    if (l_2136)
                        continue;
                    l_2016[2][3] = l_1897;
                }
                else
                {
                    short l_2155 = 1L;
                    int l_2157 = 6L;
                    unsigned short l_2158 = 0x1A3DL;
                    for (l_2098 = (-28); (l_2098 > 50); ++l_2098)
                    {
                        int l_2154 = 0L;
                        g_170 ^= (((-1L) && ((((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s(g_1394, (((safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(g_102, (g_827[3] , (safe_add_func_uint16_t_u_u((0x2480L && 0xC85AL), (safe_lshift_func_int8_t_s_s(g_680, (l_2083 < (safe_add_func_int16_t_s_s(l_2097[6][0], 0x2133L)))))))))), g_31)) && 8L) > l_2107))), l_2154)) , g_101) >= 0xFEL) >= g_83[0])) && 65535UL);
                        ++l_2158;
                        g_683[0] = g_1091[0][0];
                    }
                }
                return g_684;
            }
            return g_1586;
        }
        else
        {
            unsigned short l_2175[10] = {0x2A7CL, 0x2A7CL, 0x6500L, 0x2A7CL, 0x2A7CL, 0x6500L, 0x2A7CL, 0x2A7CL, 0x6500L, 0x2A7CL};
            int l_2221 = 0x020E3B7EL;
            int l_2249 = 0xDB09D3B7L;
            int l_2250 = 1L;
            int l_2251[8] = {0xF0FF6040L, 0x082C6C2BL, 0xF0FF6040L, 0x082C6C2BL, 0xF0FF6040L, 0x082C6C2BL, 0xF0FF6040L, 0x082C6C2BL};
            int l_2261 = (-1L);
            char l_2267 = 0xFDL;
            int l_2268 = 0x4E6421D4L;
            short l_2269 = 1L;
            int i;
            g_1823 &= ((safe_mul_func_uint8_t_u_u(((!(252UL != ((safe_rshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((g_683[0] & g_83[0]), (func_8(l_2169, (safe_lshift_func_uint8_t_u_s(g_1718[3][1], 6)), g_1598) , ((safe_mul_func_uint8_t_u_u((func_8(g_518, (l_2174 , l_1895), g_1970) , g_1097), l_2096[0][1])) == 0x44F801CDL)))), l_2175[3])) , l_1893), g_1668)) , g_284))) , l_2086), 0x5BL)) == 0xFA6C4BDCL);
            for (g_484 = (-19); (g_484 != 59); g_484++)
            {
                unsigned l_2182 = 0x67F04B32L;
                int l_2219 = 0xCF89740CL;
                unsigned l_2224 = 0x2CC68B42L;
                unsigned char l_2227 = 254UL;
                unsigned l_2228[7];
                int l_2252 = 0xC9D92BEAL;
                int l_2253 = (-1L);
                int l_2254 = 7L;
                int l_2256[1][10][6] = {{{0x5EB0CBF1L, (-1L), 0x88643537L, (-1L), 0x5EB0CBF1L, (-8L)}, {0x5EB0CBF1L, (-1L), 0x88643537L, (-1L), 0x5EB0CBF1L, (-8L)}, {0x5EB0CBF1L, (-1L), 0x88643537L, (-1L), 0x5EB0CBF1L, (-8L)}, {0x5EB0CBF1L, (-1L), 0x88643537L, (-1L), 0x5EB0CBF1L, (-8L)}, {0x5EB0CBF1L, (-1L), 0x88643537L, (-1L), 0x5EB0CBF1L, (-8L)}, {0x5EB0CBF1L, (-1L), 0x88643537L, (-1L), 0x5EB0CBF1L, (-8L)}, {0x5EB0CBF1L, (-1L), 0x88643537L, (-1L), 0x5EB0CBF1L, (-8L)}, {0x5EB0CBF1L, (-1L), 0x88643537L, (-1L), 0x5EB0CBF1L, (-8L)}, {0x5EB0CBF1L, (-1L), 0x88643537L, (-1L), 0x5EB0CBF1L, (-8L)}, {0x5EB0CBF1L, (-1L), 0x88643537L, (-1L), 0x5EB0CBF1L, (-8L)}}};
                int l_2257 = 0xF0FBC560L;
                int l_2258[1][6][8] = {{{0x929452FCL, 0x929452FCL, 6L, 4L, (-1L), 4L, 6L, 0x929452FCL}, {0x929452FCL, 0x929452FCL, 6L, 4L, (-1L), 4L, 6L, 0x929452FCL}, {0x929452FCL, 0x929452FCL, 6L, 4L, (-1L), 4L, 6L, 0x929452FCL}, {0x929452FCL, 0x929452FCL, 6L, 4L, (-1L), 4L, 6L, 0x929452FCL}, {0x929452FCL, 0x929452FCL, 6L, 4L, (-1L), 4L, 6L, 0x929452FCL}, {0x929452FCL, 0x929452FCL, 6L, 4L, (-1L), 4L, 6L, 0x929452FCL}}};
                short l_2259 = 0L;
                short l_2260 = 5L;
                int l_2263 = 4L;
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_2228[i] = 0x283577A7L;
                g_1823 = (((((((g_83[0] > (safe_add_func_uint16_t_u_u((+((safe_sub_func_uint16_t_u_u((l_2182 , (((((((-3L) >= ((safe_mod_func_int16_t_s_s(g_1970, (safe_sub_func_int32_t_s_s((g_518 , ((safe_mul_func_int8_t_s_s((-4L), 0x4AL)) < l_2174)), ((l_2189 >= g_83[6]) , (-9L)))))) | g_1583)) ^ l_2182) < g_1970) , 0x258DL) || l_2098) == g_31)), g_1356)) <= l_2112)), 1L))) , g_284) & g_2190) < 0x8002DAFCL) <= 0x11L) , g_1583) > 2UL);
                for (g_1668 = 0; (g_1668 >= 0); g_1668 -= 1)
                {
                    int l_2217[7];
                    const unsigned short l_2218 = 65535UL;
                    unsigned short l_2247 = 0xCEC1L;
                    unsigned l_2248[8];
                    int i, j;
                    for (i = 0; i < 7; i++)
                        l_2217[i] = (-1L);
                    for (i = 0; i < 8; i++)
                        l_2248[i] = 0x1C16E7BFL;
                    if (g_1091[g_1668][g_1668])
                    {
                        int l_2222[9] = {6L, (-10L), 6L, (-10L), 6L, (-10L), 6L, (-10L), 6L};
                        int i, j;
                        g_284 = g_1091[g_1668][g_1668];
                        l_2219 = (safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(0xF71BL, (safe_lshift_func_int16_t_s_u(func_8(g_683[g_1668], l_2096[0][1], (l_2182 , ((((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((g_83[2] && ((safe_mul_func_uint16_t_u_u((((((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(0x221AL, func_8(((safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(g_1097, ((g_1668 != (l_2217[0] < l_2175[2])) && g_83[0]))), 0x012D2677L)), 3)) , g_1770), l_2175[3], l_2098))), g_2093[2])), 0UL)) , 1L) == 0x285EC8CEL) ^ l_2175[3]) > 0xB6L), g_31)) || g_31)), 4)), g_1583)) > g_1823) != 5UL) && g_1970))), g_1718[4][0])))) == g_1598), l_2218)), g_31));
                        if (l_2175[9])
                            break;
                        l_2224--;
                    }
                    else
                    {
                        l_2227 = l_2175[6];
                    }
                    l_2228[6]--;
                    l_2221 = (safe_mod_func_int8_t_s_s(0x29L, (safe_sub_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(l_2237, g_167[3][0])) , (((((+(safe_mod_func_uint16_t_u_u(g_153[0][0], ((safe_unary_minus_func_uint16_t_u((g_31 >= g_170))) , (safe_rshift_func_uint8_t_u_s(l_2175[3], (safe_mul_func_uint8_t_u_u(func_8(g_2093[4], ((safe_lshift_func_int8_t_s_u((((((l_2227 ^ g_2) <= l_2189) ^ g_827[5]) & l_2247) > 1UL), l_2169)) , l_1893), l_2175[3]), l_2174)))))))) > l_2248[4]) > g_1194) && g_1586) ^ 0x538E6B35L)), l_2097[1][4]))));
                }
                l_2264--;
            }
            --l_2270;
        }
    }
    return g_684;
}







static unsigned func_8(short p_9, int p_10, unsigned char p_11)
{
    unsigned char l_1818 = 0x60L;
    for (g_680 = 27; (g_680 == 25); --g_680)
    {
        for (g_483 = (-25); (g_483 <= (-8)); ++g_483)
        {
            unsigned l_1817 = 0xB0408ED4L;
            g_1816 = (1UL | (safe_lshift_func_uint8_t_u_s(1UL, 5)));
            if (l_1817)
                continue;
        }
    }
    return l_1818;
}







static unsigned char func_13(unsigned short p_14, char p_15)
{
    short l_16[10][3] = {{(-3L), 0xF4F2L, 1L}, {(-3L), 0xF4F2L, 1L}, {(-3L), 0xF4F2L, 1L}, {(-3L), 0xF4F2L, 1L}, {(-3L), 0xF4F2L, 1L}, {(-3L), 0xF4F2L, 1L}, {(-3L), 0xF4F2L, 1L}, {(-3L), 0xF4F2L, 1L}, {(-3L), 0xF4F2L, 1L}, {(-3L), 0xF4F2L, 1L}};
    int l_17 = 0L;
    int l_1749 = 0x8062BDD2L;
    int i, j;
    l_16[6][2] &= g_2;
    l_17 = p_15;
    l_17 = func_18(((safe_add_func_int32_t_s_s(func_26(p_14), l_1749)) > l_16[6][2]), p_14, (p_14 | (((g_2 == (0L <= (((((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_int8_t_s((p_15 , 0x5BL))), 1)) , l_17) == 0x2C7B5586L) && l_17) <= g_2))) == g_83[0]) <= 250UL)), p_14, p_15);
    return g_1091[0][0];
}







static int func_18(unsigned short p_19, short p_20, short p_21, unsigned p_22, const unsigned short p_23)
{
    int l_1769 = 0xB608B4E4L;
    int l_1772 = 0x7FE483A3L;
    for (g_1158 = 0; (g_1158 < 8); ++g_1158)
    {
        unsigned l_1767 = 0UL;
        unsigned l_1768 = 18446744073709551610UL;
        int l_1771 = 0xDAAA356EL;
        l_1771 = (((((safe_mod_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u(65529UL, ((func_48((safe_sub_func_uint8_t_u_u(g_1586, (p_20 == (safe_add_func_uint32_t_u_u(p_22, (p_19 && (g_1718[6][2] != (safe_lshift_func_int8_t_s_u((l_1767 <= (~l_1768)), (p_20 <= 0xF3L)))))))))), l_1769, p_21, g_1770, p_19) == l_1769) && p_19))) , 0L), 0xB3E91B09L)) & g_1583) > 0xA717L) , 9L) == g_1668);
    }
    l_1772 |= g_518;
    for (p_20 = 0; (p_20 < (-21)); --p_20)
    {
        unsigned short l_1798 = 65535UL;
        unsigned char l_1809 = 2UL;
        for (g_1668 = 22; (g_1668 < (-29)); g_1668--)
        {
            unsigned l_1797 = 0xAD17C55AL;
            l_1772 = p_19;
            l_1772 = ((((safe_sub_func_uint16_t_u_u((l_1772 | ((p_21 & p_19) ^ (safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(g_1586, ((safe_sub_func_uint32_t_u_u(0UL, ((((((safe_lshift_func_uint16_t_u_s((p_23 != (safe_mod_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(g_1598, g_1394)), (safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((((((250UL | 4UL) == g_170) ^ 7L) ^ 0xE238L) >= g_1158), p_21)), p_23)))), l_1797))), 10)) ^ l_1797) && p_20) >= l_1798) | (-1L)) , l_1769))) || l_1797))), 0xC41CL)))), g_827[4])) || l_1769) , 0UL) != l_1772);
            g_170 |= ((safe_sub_func_int8_t_s_s(g_102, (((safe_mul_func_int16_t_s_s(l_1769, (l_1797 && ((g_1194 || ((safe_lshift_func_int16_t_s_s(((~g_1583) , ((safe_add_func_uint16_t_u_u(1UL, l_1769)) != (safe_lshift_func_int16_t_s_u(l_1769, l_1797)))), p_21)) , l_1797)) >= p_20)))) == 0UL) , l_1798))) , l_1809);
            return l_1769;
        }
    }
    return l_1769;
}







static int func_26(int p_27)
{
    unsigned char l_28[1];
    unsigned short l_1553 = 0xD133L;
    int l_1563 = 0x7FD82D80L;
    int l_1679 = 0x6825288DL;
    int i;
    for (i = 0; i < 1; i++)
        l_28[i] = 0UL;
    for (p_27 = 0; (p_27 >= 0); p_27 -= 1)
    {
        int l_65 = (-8L);
        short l_1543[6];
        int l_1566 = 0x55678C83L;
        int l_1567 = (-5L);
        unsigned char l_1590 = 0x51L;
        int l_1597 = 0x51C6F9CAL;
        int l_1647 = 1L;
        const char l_1693 = 0x9EL;
        int i;
        for (i = 0; i < 6; i++)
            l_1543[i] = 0x7A91L;
        for (g_31 = 0; (g_31 <= 0); g_31 += 1)
        {
            short l_690 = (-3L);
            int l_1564 = 0xA0C24115L;
            int i;
            if (((func_32((func_37(((safe_mul_func_uint16_t_u_u(65534UL, l_28[p_27])) && ((func_42((safe_unary_minus_func_int16_t_s(func_48(l_28[0], (+0x12L), (func_54((safe_lshift_func_int16_t_s_u(p_27, 5)), l_28[0], (safe_sub_func_int32_t_s_s(((safe_sub_func_int8_t_s_s(g_31, (l_28[0] < ((g_2 , g_2) , l_28[p_27])))) , l_28[0]), (-4L))), l_65) && g_683[0]), g_167[2][0], l_690))), l_28[0], p_27, g_83[0]) < 0xF493L) , 0x68F7E09CL)), l_28[0]) ^ l_65), g_167[0][0], l_28[0], g_31) < l_28[0]) == g_83[0]))
            {
                int l_1539 = 0xBAFFE26CL;
                int l_1540 = 0x0E7D7171L;
                if ((g_680 , (safe_lshift_func_uint8_t_u_u((g_1096[5] < (safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s((p_27 <= l_65), ((safe_lshift_func_uint8_t_u_u(p_27, (safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s((-1L), (safe_add_func_uint32_t_u_u(p_27, ((0x86L ^ p_27) & l_28[0]))))), l_1539)))) >= g_1194))), l_1540))), g_827[3]))))
                {
                    int l_1546[10] = {0x71256056L, 0xB71C29C6L, 0x71256056L, 0xB71C29C6L, 0x71256056L, 0xB71C29C6L, 0x71256056L, 0xB71C29C6L, 0x71256056L, 0xB71C29C6L};
                    int i;
                    g_683[0] = ((func_54(((safe_lshift_func_uint16_t_u_s(g_101, 15)) > l_1543[4]), (safe_mul_func_int16_t_s_s(l_1546[9], (safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(g_1394, (safe_sub_func_uint8_t_u_u(((p_27 >= (l_1553 && (safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(p_27, l_65)), (safe_mul_func_uint8_t_u_u(p_27, 0x64L)))), l_1546[3])))) != l_1543[2]), p_27)))), g_2)))), g_827[6], l_1543[4]) & l_28[0]) & l_1540);
                    if (l_1546[9])
                        break;
                }
                else
                {
                    unsigned l_1562 = 0UL;
                    int l_1565[6][7] = {{0x209B88A7L, 0xC6E7822EL, (-9L), 0L, 0xBE0A3C49L, 0x14033228L, 0xBE0A3C49L}, {0x209B88A7L, 0xC6E7822EL, (-9L), 0L, 0xBE0A3C49L, 0x14033228L, 0xBE0A3C49L}, {0x209B88A7L, 0xC6E7822EL, (-9L), 0L, 0xBE0A3C49L, 0x14033228L, 0xBE0A3C49L}, {0x209B88A7L, 0xC6E7822EL, (-9L), 0L, 0xBE0A3C49L, 0x14033228L, 0xBE0A3C49L}, {0x209B88A7L, 0xC6E7822EL, (-9L), 0L, 0xBE0A3C49L, 0x14033228L, 0xBE0A3C49L}, {0x209B88A7L, 0xC6E7822EL, (-9L), 0L, 0xBE0A3C49L, 0x14033228L, 0xBE0A3C49L}};
                    int i, j;
                    if (l_28[p_27])
                    {
                        unsigned short l_1568 = 0x3B6EL;
                        l_1562 = p_27;
                        l_1563 = (-1L);
                        l_1564 = ((l_65 != (((func_54(g_101, l_1539, g_680, (l_65 , l_690)) , (+0L)) <= 246UL) | l_1540)) & l_690);
                        --l_1568;
                    }
                    else
                    {
                        l_1563 = (l_690 , (safe_rshift_func_int8_t_s_u((0xCA62L != (safe_mod_func_uint8_t_u_u(g_680, (safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((((((255UL < (((safe_rshift_func_int16_t_s_u(g_1158, ((l_1565[0][2] | ((safe_add_func_uint8_t_u_u(g_1097, ((g_484 ^ l_1563) , g_30))) , p_27)) == g_484))) | g_1583) ^ 0x80L)) == p_27) || g_518) & g_167[2][0]) & p_27), 0UL)), 0UL))))), p_27)));
                        l_1564 = ((p_27 ^ 4294967288UL) , g_83[2]);
                        g_30 ^= l_1566;
                    }
                    for (l_1562 = 0; (l_1562 <= 0); l_1562 += 1)
                    {
                        unsigned l_1587 = 0xA496778BL;
                        g_683[0] = (safe_lshift_func_int16_t_s_s(0x6AC2L, 7));
                        l_1587++;
                        l_1565[0][3] = ((g_170 >= g_2) && p_27);
                    }
                    for (g_1158 = 0; (g_1158 <= 0); g_1158 += 1)
                    {
                        l_1590 = (0L && g_102);
                    }
                    l_1564 = (((safe_add_func_uint32_t_u_u(p_27, (p_27 , 0xA9393E7CL))) > func_32(p_27, l_690, (((((-1L) > ((((!(safe_mod_func_int32_t_s_s(((p_27 | ((+(p_27 , (safe_sub_func_int32_t_s_s((func_42((0xD3L >= p_27), l_1543[4], g_1096[4], l_1597) != g_1583), 0xB85699C4L)))) ^ p_27)) != g_1158), l_1563))) , g_170) || p_27) != g_167[0][0])) ^ 252UL) , p_27) <= g_1598), p_27)) & l_1567);
                }
            }
            else
            {
                int l_1603 = 0x6D89478BL;
                int l_1680 = 0x0A82DD94L;
                if ((safe_lshift_func_uint8_t_u_s((p_27 | ((func_37((g_153[1][2] , (+l_65)), (safe_mul_func_uint16_t_u_u(p_27, l_1603))) , p_27) != ((g_31 , (g_2 ^ l_28[0])) >= g_167[2][0]))), 2)))
                {
                    unsigned short l_1608 = 65528UL;
                    unsigned char l_1619 = 1UL;
                    int l_1637[3][8] = {{5L, 0xF0F798C5L, 5L, 0xF0F798C5L, 5L, 0xF0F798C5L, 5L, 0xF0F798C5L}, {5L, 0xF0F798C5L, 5L, 0xF0F798C5L, 5L, 0xF0F798C5L, 5L, 0xF0F798C5L}, {5L, 0xF0F798C5L, 5L, 0xF0F798C5L, 5L, 0xF0F798C5L, 5L, 0xF0F798C5L}};
                    int i, j;
                    l_1564 = (func_54(func_42(g_102, p_27, p_27, g_680), ((safe_mul_func_int8_t_s_s((0x9CL == 0xF6L), (4294967291UL <= ((safe_add_func_int32_t_s_s(0xE04C8D7CL, 0x1A1A45E8L)) , 5UL)))) , l_1603), g_31, g_1598) , (-3L));
                    l_1563 = ((g_1096[5] <= (l_1608 <= p_27)) && func_32((safe_mul_func_int8_t_s_s(func_37((g_827[5] <= 0x590B9D55L), ((p_27 != (safe_add_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(p_27, (~g_83[0]))), (((((((((safe_mul_func_uint8_t_u_u(0x8EL, 4UL)) <= g_1091[1][0]) == l_1608) > p_27) , g_1394) || g_2) , g_1158) & g_167[0][0]) >= 0x2A61L))) <= l_1553), 4294967293UL))) | p_27)), p_27)), p_27, l_1603, l_1619));
                    if ((func_54(func_42(l_1619, p_27, (safe_mod_func_int32_t_s_s((((l_28[0] , p_27) , (safe_add_func_uint8_t_u_u(g_101, p_27))) , g_476), (safe_mod_func_int8_t_s_s((g_483 | g_827[4]), 250UL)))), p_27), g_2, g_1598, l_1603) , g_1583))
                    {
                        char l_1636 = 0xE4L;
                        l_1637[0][2] = (((safe_mul_func_int8_t_s_s(g_31, ((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(g_518, l_1566)), (l_1563 != (g_83[0] == (p_27 <= (((safe_sub_func_uint32_t_u_u(4294967287UL, (p_27 < ((p_27 & l_1603) >= 0xBCL)))) ^ 1UL) || g_1097)))))) , l_1636))) & 0xEDA5L) || p_27);
                    }
                    else
                    {
                        return p_27;
                    }
                }
                else
                {
                    for (l_1597 = 0; (l_1597 <= 0); l_1597 += 1)
                    {
                        int i, j;
                        l_1563 = ((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((0xA3B0L > (func_37((((safe_mul_func_uint8_t_u_u(g_1091[l_1597][p_27], (safe_mod_func_uint32_t_u_u((g_518 , l_1553), 4294967295UL)))) , (0xC0248DC4L > (((safe_sub_func_int16_t_s_s(l_1647, 0UL)) && (((safe_lshift_func_int16_t_s_s(p_27, g_1356)) , l_1603) , 0x5DL)) == 0UL))) , p_27), p_27) <= l_690)))), l_1564)) , l_1564);
                        g_683[0] = p_27;
                        l_1564 = g_684;
                    }
                }
                if (((safe_mod_func_int8_t_s_s((g_439 , func_32(((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(((p_27 <= (p_27 != ((safe_lshift_func_uint16_t_u_u(((4UL || (safe_lshift_func_uint16_t_u_u(((((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(func_54(l_1603, (((safe_mul_func_uint16_t_u_u(l_1590, g_484)) != p_27) | (((g_1091[0][0] >= 0UL) > p_27) <= p_27)), l_1603, p_27), g_1668)), g_827[1])) < l_1647) == p_27) ^ g_167[2][0]), 13))) ^ l_28[p_27]), 5)) != 3UL))) , 0x68L), g_167[2][0])), l_65)) & g_1194), p_27, l_28[p_27], l_1564)), p_27)) == 0x23F15ECEL))
                {
                    l_1566 = (safe_lshift_func_int16_t_s_u(0x041DL, 0));
                }
                else
                {
                    return p_27;
                }
                l_1566 = (l_28[0] <= (safe_mod_func_int16_t_s_s((1L != ((l_28[0] <= l_1563) , ((((((safe_lshift_func_uint8_t_u_s(((0L == func_48(l_1603, ((~(p_27 > (l_28[0] >= func_42((safe_sub_func_int16_t_s_s(l_1563, p_27)), g_1394, p_27, g_167[2][0])))) == p_27), l_1679, g_83[0], l_28[0])) > 1L), 1)) < p_27) & g_1668) , g_683[0]) , l_28[p_27]) != l_1603))), 0xF0C4L)));
                for (l_1679 = 0; (l_1679 <= 0); l_1679 += 1)
                {
                    unsigned l_1681[4][2] = {{0xDFD0D53EL, 0x244CEC9AL}, {0xDFD0D53EL, 0x244CEC9AL}, {0xDFD0D53EL, 0x244CEC9AL}, {0xDFD0D53EL, 0x244CEC9AL}};
                    const char l_1692 = 0x60L;
                    int l_1694 = 1L;
                    int i, j;
                    l_1681[3][1]--;
                    for (l_1590 = 0; (l_1590 <= 0); l_1590 += 1)
                    {
                        if (p_27)
                            break;
                    }
                    if ((((safe_sub_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u(g_31, (safe_add_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u(g_2, 3L)) , (p_27 == (((g_83[6] , g_683[0]) >= (p_27 , (((p_27 && ((l_1590 < 0x52C59A38L) && l_1603)) != l_690) & p_27))) , 0x65L))) && g_31), g_518)))) < p_27) && l_1692), l_1693)) >= 0x1AL) == 65531UL))
                    {
                        unsigned char l_1696 = 0x6FL;
                        l_1694 = p_27;
                        l_1694 |= g_1091[0][0];
                        ++l_1696;
                    }
                    else
                    {
                        unsigned char l_1703 = 1UL;
                        g_170 = l_1566;
                        g_1718[1][0] &= (safe_add_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(func_42(l_1703, p_27, g_153[1][3], (safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((g_83[0] <= (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(1UL, (safe_rshift_func_int16_t_s_s(p_27, (0xD6L < (g_31 , l_1694)))))) , l_1553), 0xB859L)), 2)), 0x17DCL))), 2)), 0UL))), 0xEDL)) >= l_28[p_27]), g_83[6]));
                        if (g_1194)
                            continue;
                    }
                    if ((safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(func_48(p_27, p_27, (g_1586 ^ g_1158), (p_27 != (l_1681[0][0] > p_27)), (safe_add_func_int32_t_s_s(0xB8CCEA58L, (+(0x9C8FL <= 0xA861L))))), l_1553)) || g_284), p_27)), g_827[3])))
                    {
                        unsigned char l_1745[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1745[i] = 0x50L;
                        g_683[0] &= p_27;
                        l_1694 = l_1680;
                        g_169 |= g_827[3];
                        l_1745[1] = (safe_mul_func_int16_t_s_s((((((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(((g_1091[0][0] == (safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((l_1566 & (safe_lshift_func_int8_t_s_s(p_27, 7))) | ((g_483 > p_27) | (-1L))), (((p_27 , (((safe_sub_func_int32_t_s_s((g_1097 & (g_167[2][0] != p_27)), 7UL)) < p_27) , p_27)) && g_827[3]) >= 0x2FL))) == p_27), 13)), 0x9AE0L)), l_28[p_27]))) || 0x95L), p_27)) || g_1356), p_27)) < 0x75L) == 0x55639D92L) <= (-4L)) > l_1566), 0x0284L));
                    }
                    else
                    {
                        unsigned char l_1746 = 0x69L;
                        ++l_1746;
                    }
                }
            }
        }
        l_1679 = ((l_28[p_27] >= l_28[p_27]) >= g_1194);
    }
    return p_27;
}







static unsigned short func_32(int p_33, short p_34, int p_35, char p_36)
{
    int l_1183 = 1L;
    const unsigned l_1184[4] = {1UL, 4294967295UL, 1UL, 4294967295UL};
    unsigned char l_1237 = 250UL;
    unsigned l_1254 = 0x0EE33858L;
    int l_1266 = 0x7CCDF57CL;
    int l_1268 = (-1L);
    int l_1305 = (-1L);
    unsigned l_1381 = 0x8503D293L;
    int l_1395 = 1L;
    int l_1396 = 0xA02DFAAAL;
    int l_1397 = 0xC22C28D9L;
    int l_1398 = 0L;
    int l_1399[4][6][6] = {{{0x4F7B5BB4L, 4L, 0xBFC15FCEL, 0x146BB23EL, (-9L), 1L}, {0x4F7B5BB4L, 4L, 0xBFC15FCEL, 0x146BB23EL, (-9L), 1L}, {0x4F7B5BB4L, 4L, 0xBFC15FCEL, 0x146BB23EL, (-9L), 1L}, {0x4F7B5BB4L, 4L, 0xBFC15FCEL, 0x146BB23EL, (-9L), 1L}, {0x4F7B5BB4L, 4L, 0xBFC15FCEL, 0x146BB23EL, (-9L), 1L}, {0x4F7B5BB4L, 4L, 0xBFC15FCEL, 0x146BB23EL, (-9L), 1L}}, {{0x4F7B5BB4L, 4L, 0xBFC15FCEL, 0x146BB23EL, (-9L), 1L}, {0x4F7B5BB4L, 4L, 0xBFC15FCEL, 0x146BB23EL, (-9L), 1L}, {0x4F7B5BB4L, 4L, 0xBFC15FCEL, 0x146BB23EL, (-9L), 1L}, {0x4F7B5BB4L, 4L, 0xBFC15FCEL, 0x146BB23EL, (-9L), 1L}, {0x4F7B5BB4L, 4L, 0xBFC15FCEL, 0x146BB23EL, (-9L), 1L}, {0x4F7B5BB4L, 4L, 0xBFC15FCEL, 0x146BB23EL, (-9L), 1L}}, {{0x4F7B5BB4L, 4L, 0xBFC15FCEL, 0x146BB23EL, (-9L), 1L}, {0x4F7B5BB4L, 4L, 0xBFC15FCEL, 0x146BB23EL, (-9L), 1L}, {0x4F7B5BB4L, 4L, 0xBFC15FCEL, 0x146BB23EL, (-9L), 1L}, {0x4F7B5BB4L, 4L, 0xBFC15FCEL, 0x146BB23EL, (-9L), 1L}, {0x4F7B5BB4L, 4L, 0xBFC15FCEL, 0x146BB23EL, (-9L), 1L}, {0x4F7B5BB4L, 4L, 0xBFC15FCEL, 0x146BB23EL, (-9L), 1L}}, {{0x4F7B5BB4L, 4L, 0xBFC15FCEL, 0x146BB23EL, (-9L), 1L}, {0x4F7B5BB4L, 4L, 0xBFC15FCEL, 0x146BB23EL, (-9L), 1L}, {0x4F7B5BB4L, 4L, 0xBFC15FCEL, 0x146BB23EL, (-9L), 1L}, {0x4F7B5BB4L, 4L, 0xBFC15FCEL, 0x146BB23EL, (-9L), 1L}, {0x4F7B5BB4L, 4L, 0xBFC15FCEL, 0x146BB23EL, (-9L), 1L}, {0x4F7B5BB4L, 4L, 0xBFC15FCEL, 0x146BB23EL, (-9L), 1L}}};
    unsigned l_1400 = 0xECC5DDB6L;
    short l_1470 = (-10L);
    unsigned l_1522 = 2UL;
    int i, j, k;
    for (p_35 = (-6); (p_35 <= 25); p_35++)
    {
        unsigned l_1185 = 8UL;
        g_683[0] = (((safe_unary_minus_func_uint8_t_u((((safe_add_func_int32_t_s_s(l_1183, (l_1184[0] && l_1185))) | (((safe_mul_func_int8_t_s_s(1L, 0xD1L)) == (~(func_54(g_1097, p_35, ((p_35 <= g_680) | l_1185), p_36) & g_476))) <= l_1185)) != p_35))) ^ p_34) && 0x068EFC5FL);
        p_33 = ((((-10L) >= (safe_mod_func_int16_t_s_s(((g_29 < ((safe_mul_func_int16_t_s_s(((p_35 ^ (p_34 , (safe_mul_func_int8_t_s_s(l_1184[0], l_1185)))) , (g_827[3] > l_1185)), (p_34 >= 0x46L))) != g_1194)) , g_174), p_33))) >= (-1L)) < 0L);
    }
    for (p_34 = (-7); (p_34 != (-13)); --p_34)
    {
        short l_1207 = 0xF3F4L;
        if ((safe_rshift_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(0x62L, g_1096[5])) >= (1L | g_484)), ((((safe_sub_func_uint8_t_u_u(l_1207, 0x82L)) != (p_33 > (-1L))) , (safe_mul_func_int8_t_s_s(6L, l_1183))) , l_1207))), g_1097)) , p_33) < 5UL), g_827[2])))
        {
            unsigned l_1214 = 0xC9B5FAC1L;
            for (l_1207 = 0; (l_1207 == 13); l_1207 = safe_add_func_int32_t_s_s(l_1207, 7))
            {
                const int l_1221 = (-2L);
                g_683[0] = (((l_1207 ^ ((p_34 == g_1091[0][0]) , 255UL)) , 0xB8L) != (safe_add_func_uint32_t_u_u(l_1214, (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(p_33, (l_1221 , l_1207))), 7)), p_36)))));
            }
            if (p_33)
                continue;
            for (p_36 = 4; (p_36 < (-12)); --p_36)
            {
                return p_35;
            }
            g_683[0] = (safe_lshift_func_int8_t_s_u((((p_35 && ((safe_lshift_func_uint16_t_u_s(p_33, g_83[6])) , l_1184[0])) ^ l_1207) != func_37(l_1214, g_102)), (1UL < 1UL)));
        }
        else
        {
            for (g_518 = 14; (g_518 <= 17); g_518++)
            {
                p_33 = (0xB4C0CED3L | l_1207);
            }
            return p_36;
        }
        g_683[0] = g_30;
    }
    if (g_153[1][6])
    {
        unsigned short l_1236[4][8][1] = {{{65532UL}, {65532UL}, {65532UL}, {65532UL}, {65532UL}, {65532UL}, {65532UL}, {65532UL}}, {{65532UL}, {65532UL}, {65532UL}, {65532UL}, {65532UL}, {65532UL}, {65532UL}, {65532UL}}, {{65532UL}, {65532UL}, {65532UL}, {65532UL}, {65532UL}, {65532UL}, {65532UL}, {65532UL}}, {{65532UL}, {65532UL}, {65532UL}, {65532UL}, {65532UL}, {65532UL}, {65532UL}, {65532UL}}};
        int l_1238 = 0x9CF5818CL;
        int i, j, k;
        l_1238 = (safe_mul_func_uint16_t_u_u(((g_683[0] , (safe_mod_func_int16_t_s_s(l_1184[2], (((safe_mul_func_int16_t_s_s(0xCA74L, (g_576 , ((l_1183 , (((func_37(g_476, p_35) < 0x82152246L) || 252UL) ^ p_35)) < l_1184[0])))) >= p_35) | l_1236[3][1][0])))) < p_34), l_1237));
    }
    else
    {
        char l_1249[9] = {1L, 0x5FL, 1L, 0x5FL, 1L, 0x5FL, 1L, 0x5FL, 1L};
        int l_1267 = 0x0B7A1CD1L;
        const int l_1287 = 0xB61496D1L;
        int l_1309[4][6][7] = {{{0xC8966CBBL, 0xAE4CAF36L, 0xEA1827FDL, 0x9D1EAF62L, 0xED85D996L, 1L, 1L}, {0xC8966CBBL, 0xAE4CAF36L, 0xEA1827FDL, 0x9D1EAF62L, 0xED85D996L, 1L, 1L}, {0xC8966CBBL, 0xAE4CAF36L, 0xEA1827FDL, 0x9D1EAF62L, 0xED85D996L, 1L, 1L}, {0xC8966CBBL, 0xAE4CAF36L, 0xEA1827FDL, 0x9D1EAF62L, 0xED85D996L, 1L, 1L}, {0xC8966CBBL, 0xAE4CAF36L, 0xEA1827FDL, 0x9D1EAF62L, 0xED85D996L, 1L, 1L}, {0xC8966CBBL, 0xAE4CAF36L, 0xEA1827FDL, 0x9D1EAF62L, 0xED85D996L, 1L, 1L}}, {{0xC8966CBBL, 0xAE4CAF36L, 0xEA1827FDL, 0x9D1EAF62L, 0xED85D996L, 1L, 1L}, {0xC8966CBBL, 0xAE4CAF36L, 0xEA1827FDL, 0x9D1EAF62L, 0xED85D996L, 1L, 1L}, {0xC8966CBBL, 0xAE4CAF36L, 0xEA1827FDL, 0x9D1EAF62L, 0xED85D996L, 1L, 1L}, {0xC8966CBBL, 0xAE4CAF36L, 0xEA1827FDL, 0x9D1EAF62L, 0xED85D996L, 1L, 1L}, {0xC8966CBBL, 0xAE4CAF36L, 0xEA1827FDL, 0x9D1EAF62L, 0xED85D996L, 1L, 1L}, {0xC8966CBBL, 0xAE4CAF36L, 0xEA1827FDL, 0x9D1EAF62L, 0xED85D996L, 1L, 1L}}, {{0xC8966CBBL, 0xAE4CAF36L, 0xEA1827FDL, 0x9D1EAF62L, 0xED85D996L, 1L, 1L}, {0xC8966CBBL, 0xAE4CAF36L, 0xEA1827FDL, 0x9D1EAF62L, 0xED85D996L, 1L, 1L}, {0xC8966CBBL, 0xAE4CAF36L, 0xEA1827FDL, 0x9D1EAF62L, 0xED85D996L, 1L, 1L}, {0xC8966CBBL, 0xAE4CAF36L, 0xEA1827FDL, 0x9D1EAF62L, 0xED85D996L, 1L, 1L}, {0xC8966CBBL, 0xAE4CAF36L, 0xEA1827FDL, 0x9D1EAF62L, 0xED85D996L, 1L, 1L}, {0xC8966CBBL, 0xAE4CAF36L, 0xEA1827FDL, 0x9D1EAF62L, 0xED85D996L, 1L, 1L}}, {{0xC8966CBBL, 0xAE4CAF36L, 0xEA1827FDL, 0x9D1EAF62L, 0xED85D996L, 1L, 1L}, {0xC8966CBBL, 0xAE4CAF36L, 0xEA1827FDL, 0x9D1EAF62L, 0xED85D996L, 1L, 1L}, {0xC8966CBBL, 0xAE4CAF36L, 0xEA1827FDL, 0x9D1EAF62L, 0xED85D996L, 1L, 1L}, {0xC8966CBBL, 0xAE4CAF36L, 0xEA1827FDL, 0x9D1EAF62L, 0xED85D996L, 1L, 1L}, {0xC8966CBBL, 0xAE4CAF36L, 0xEA1827FDL, 0x9D1EAF62L, 0xED85D996L, 1L, 1L}, {0xC8966CBBL, 0xAE4CAF36L, 0xEA1827FDL, 0x9D1EAF62L, 0xED85D996L, 1L, 1L}}};
        int i, j, k;
        if (g_102)
        {
            p_35 = 0xE0EBE435L;
            for (g_680 = 0; (g_680 <= 0); g_680 += 1)
            {
                int l_1250 = 0x24BD0C62L;
                g_29 = g_153[2][6];
                g_284 = (((l_1184[2] | g_1091[0][0]) , ((safe_lshift_func_uint16_t_u_s(p_34, (safe_mul_func_int8_t_s_s(0x1AL, ((g_101 > (safe_lshift_func_uint8_t_u_s(((g_827[4] >= ((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((0xD2L > g_83[6]), ((p_34 < l_1237) >= l_1249[3]))), 4)) | p_33)) < g_170), g_680))) && g_31))))) | 0x76L)) , g_2);
                return l_1250;
            }
            g_169 = (p_34 >= p_36);
        }
        else
        {
            const unsigned l_1259 = 18446744073709551615UL;
            int l_1269 = 2L;
            unsigned char l_1308 = 0xC9L;
            const unsigned l_1344 = 0UL;
            int l_1355 = 0x6BC26438L;
            for (g_483 = 8; (g_483 >= 0); g_483 -= 1)
            {
                int l_1251 = 0x96CAA364L;
                unsigned l_1263 = 3UL;
                unsigned char l_1357 = 5UL;
                unsigned l_1380 = 4294967289UL;
                for (l_1183 = 1; (l_1183 <= 8); l_1183 += 1)
                {
                    unsigned l_1292 = 1UL;
                    int i;
                    if (g_1096[l_1183])
                    {
                        int l_1262 = 8L;
                        g_30 = (l_1251 , l_1184[1]);
                        l_1262 = (safe_mul_func_uint8_t_u_u(p_34, (l_1254 < ((safe_mod_func_int16_t_s_s((((l_1259 == l_1251) || ((safe_add_func_uint8_t_u_u((l_1259 | (g_1096[5] , p_34)), (((~(g_31 & (~2L))) ^ 0x00CFL) | l_1249[3]))) > 7L)) , 0x22D6L), 0x0AA4L)) <= l_1249[3]))));
                    }
                    else
                    {
                        unsigned short l_1270 = 1UL;
                        ++l_1263;
                        if (g_2)
                            break;
                        l_1270--;
                        p_35 = (p_36 != (safe_rshift_func_int16_t_s_u((((p_34 <= ((safe_lshift_func_int8_t_s_u(((g_29 , ((((((g_153[2][6] == (safe_sub_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s((l_1287 || (l_1269 >= (safe_sub_func_uint16_t_u_u(((65535UL && 0xC1CBL) != (l_1292 <= 0L)), g_31)))), g_167[2][0])), l_1270)), p_34)) & 0xD2DE920EL), g_83[0])) , 0xDB2AL), g_518))) > 0xA8L) ^ p_34) || 0xC8493559L) , g_1091[0][0]) , l_1292)) == g_167[1][0]), 2)) == 0L)) & 0x003AL) & 0x907BL), g_484)));
                    }
                    for (g_680 = 0; (g_680 <= 8); g_680 += 1)
                    {
                        g_30 = (((l_1259 ^ (l_1254 , ((safe_rshift_func_int16_t_s_u((((((0xDC46L != (((((g_484 , (g_29 >= (((safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s(0xA4L, l_1268)), l_1263)) , (safe_lshift_func_int8_t_s_s((-1L), g_680))) , p_33))) ^ 0xD5L) , l_1266) ^ p_34) , 0xF657L)) && 0xB7L) == g_31) , 1L) < 4L), 12)) , p_35))) == 0xC8F1525CL) != l_1259);
                        p_33 = g_1091[0][0];
                        g_30 = (p_33 & p_36);
                        g_683[0] = ((((((g_170 || ((0xE9895704L == ((((safe_mul_func_int16_t_s_s(p_33, (((l_1249[4] == (l_1305 && (safe_mod_func_uint8_t_u_u((p_36 , g_683[0]), (p_34 , l_1308))))) < p_35) & l_1292))) , 0x74L) | g_83[0]) & 0xB838L)) > g_2)) <= 4UL) , p_36) , 0xB5BD7614L) | g_518) > l_1309[1][1][2]);
                    }
                }
                for (p_34 = 0; (p_34 <= 8); p_34 += 1)
                {
                    unsigned l_1321 = 0UL;
                    int l_1324 = 0xB62EC1E1L;
                    g_29 = (safe_sub_func_int32_t_s_s(p_33, ((safe_add_func_uint32_t_u_u(p_36, (safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((p_36 & g_153[2][6]))), (((safe_mod_func_uint8_t_u_u((l_1184[0] >= p_34), g_1097)) == (p_36 ^ (safe_mul_func_uint16_t_u_u(0x9C6CL, l_1268)))) != g_1097))))) && g_31)));
                    l_1321--;
                    l_1324 &= 0x9080A880L;
                    p_35 = (((((p_34 || 2UL) || (safe_mul_func_uint16_t_u_u((l_1324 , (((-1L) <= l_1237) ^ (!((((g_170 == ((safe_unary_minus_func_uint8_t_u((0x1FE3A075L && (safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(g_476, g_1091[0][0])), g_1097)), p_33))))) == l_1321)) < p_33) > (-4L)) < g_476)))), (-9L)))) , g_153[2][6]) , g_170) == l_1266);
                }
                l_1269 = (((safe_mul_func_int16_t_s_s((p_35 && (safe_mod_func_int16_t_s_s(g_680, l_1263))), (l_1263 >= g_284))) == 0xFBB7L) , ((safe_lshift_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((((((g_167[2][0] >= l_1259) , ((255UL ^ g_1091[0][0]) & g_167[2][0])) | l_1263) != l_1183) <= l_1263), g_484)) & 0x1DL), p_34)) > g_1158));
                if ((((safe_add_func_int8_t_s_s(l_1344, (safe_mul_func_uint16_t_u_u(g_684, ((safe_sub_func_int32_t_s_s(0L, (l_1263 , (safe_rshift_func_uint16_t_u_s(((safe_sub_func_int8_t_s_s(g_83[0], p_33)) != ((safe_sub_func_int32_t_s_s(l_1355, (~(p_33 || p_33)))) || p_35)), 3))))) & l_1344))))) && l_1251) | g_476))
                {
                    int l_1364 = 8L;
                    for (l_1254 = 1; (l_1254 <= 8); l_1254 += 1)
                    {
                        l_1309[3][3][5] = (p_34 & p_34);
                        --l_1357;
                        if (g_827[3])
                            break;
                        l_1309[1][2][3] = 1L;
                    }
                    g_683[0] = (safe_sub_func_uint32_t_u_u((g_284 , (0xEAFE0699L & p_36)), ((((safe_lshift_func_int16_t_s_s(p_33, 11)) | ((g_518 ^ (l_1268 == 0UL)) <= l_1364)) & (l_1287 && 0x3664L)) > g_518)));
                }
                else
                {
                    unsigned l_1379[4][9] = {{4294967290UL, 0x40BE5E02L, 0x54E910B3L, 9UL, 9UL, 0x1280903EL, 0x875C13D6L, 4294967295UL, 0x875C13D6L}, {4294967290UL, 0x40BE5E02L, 0x54E910B3L, 9UL, 9UL, 0x1280903EL, 0x875C13D6L, 4294967295UL, 0x875C13D6L}, {4294967290UL, 0x40BE5E02L, 0x54E910B3L, 9UL, 9UL, 0x1280903EL, 0x875C13D6L, 4294967295UL, 0x875C13D6L}, {4294967290UL, 0x40BE5E02L, 0x54E910B3L, 9UL, 9UL, 0x1280903EL, 0x875C13D6L, 4294967295UL, 0x875C13D6L}};
                    int i, j;
                    for (g_680 = 0; (g_680 <= 8); g_680 += 1)
                    {
                        unsigned l_1365 = 0x6BA30690L;
                        g_284 |= ((l_1266 && p_36) , l_1251);
                        g_284 = (l_1365 , (safe_add_func_int8_t_s_s((g_476 > (safe_unary_minus_func_int8_t_s(g_170))), (safe_mul_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((((safe_mul_func_uint8_t_u_u(g_484, g_1096[8])) > (safe_add_func_int16_t_s_s(p_34, (0xC0A1L & 0xC512L)))) <= (safe_add_func_int32_t_s_s(l_1249[2], l_1379[3][3]))) ^ l_1380), p_34)) >= 1UL), p_34)))));
                        l_1381++;
                    }
                }
            }
            l_1268 = 0x90C59D34L;
        }
        for (l_1268 = 14; (l_1268 > 21); l_1268++)
        {
            unsigned l_1393 = 0UL;
            g_1394 |= (+((((safe_rshift_func_uint16_t_u_u(((p_36 && (g_1091[0][0] , l_1266)) , ((((safe_add_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s((0x6FL & ((p_33 != ((func_54(((safe_unary_minus_func_int32_t_s(l_1287)) || g_101), l_1393, g_170, p_35) ^ p_33) > p_36)) > p_34)), 0)) || 0x27L) ^ l_1267), 248UL)) & p_35) > g_31) <= p_36)), l_1183)) <= g_167[2][0]) , 0x3BE54527L) , g_827[3]));
        }
        l_1400--;
    }
    for (g_518 = 0; (g_518 <= 0); g_518 += 1)
    {
        unsigned l_1441 = 4294967295UL;
        int l_1457 = 0x3DE75AC7L;
        unsigned l_1458 = 0UL;
        int l_1520 = 1L;
        int l_1521[1];
        int i;
        for (i = 0; i < 1; i++)
            l_1521[i] = 0x6C15F491L;
        if (((g_827[(g_518 + 5)] > (-5L)) , (safe_rshift_func_int16_t_s_u(g_827[(g_518 + 5)], 12))))
        {
            unsigned l_1437 = 0xC95EF63EL;
            int l_1448 = 1L;
            for (l_1398 = 0; (l_1398 <= 0); l_1398 += 1)
            {
                unsigned short l_1407 = 0xA724L;
                int i, j;
                if ((g_683[g_518] >= (safe_mod_func_uint16_t_u_u(g_167[(l_1398 + 4)][g_518], l_1407))))
                {
                    for (l_1268 = 0; (l_1268 <= 2); l_1268 += 1)
                    {
                        int i, j;
                        return g_167[(g_518 + 4)][l_1398];
                    }
                    g_284 = 0x093527CBL;
                    l_1268 = (safe_mul_func_uint16_t_u_u((l_1395 , ((p_34 || l_1268) & (safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(65535UL, (safe_mul_func_uint8_t_u_u(((p_36 , g_170) >= ((((g_827[3] || (safe_sub_func_uint32_t_u_u(l_1266, (g_683[0] , g_827[(g_518 + 5)])))) ^ g_31) == g_170) & p_33)), p_34)))), p_36)))), 0xD729L));
                }
                else
                {
                    unsigned char l_1436[6] = {0x63L, 0x63L, 0xDDL, 0x63L, 0x63L, 0xDDL};
                    int i;
                    g_170 |= (safe_add_func_uint32_t_u_u((p_33 || (g_1394 ^ (safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(g_827[(g_518 + 5)], (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((!(safe_mul_func_uint16_t_u_u(g_29, (g_167[2][0] >= ((p_33 ^ ((safe_add_func_uint16_t_u_u(((+l_1396) & (p_35 != (((+(safe_rshift_func_int8_t_s_u((-8L), 1))) == g_167[(l_1398 + 4)][g_518]) >= l_1436[0]))), g_680)) , g_518)) , 252UL))))), 6)), l_1437)))), l_1436[1])), p_35)))), g_680));
                    if (l_1254)
                        continue;
                }
                for (p_33 = 0; (p_33 >= 0); p_33 -= 1)
                {
                    char l_1438 = 0xE8L;
                    l_1438 &= g_483;
                }
                return g_1096[5];
            }
            l_1448 ^= ((safe_add_func_int32_t_s_s(p_34, l_1441)) < (((safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s((-1L), l_1437)), (l_1441 , g_518))) >= p_35) == (((safe_add_func_uint8_t_u_u(p_35, ((-8L) && p_33))) ^ 0xE8B1A18EL) & g_683[0])));
            p_35 = l_1448;
        }
        else
        {
            unsigned l_1455[10][3] = {{0xF982CD48L, 4294967290UL, 0xF982CD48L}, {0xF982CD48L, 4294967290UL, 0xF982CD48L}, {0xF982CD48L, 4294967290UL, 0xF982CD48L}, {0xF982CD48L, 4294967290UL, 0xF982CD48L}, {0xF982CD48L, 4294967290UL, 0xF982CD48L}, {0xF982CD48L, 4294967290UL, 0xF982CD48L}, {0xF982CD48L, 4294967290UL, 0xF982CD48L}, {0xF982CD48L, 4294967290UL, 0xF982CD48L}, {0xF982CD48L, 4294967290UL, 0xF982CD48L}, {0xF982CD48L, 4294967290UL, 0xF982CD48L}};
            int l_1456 = 0x5A6DABC9L;
            int i, j;
            if (((((safe_mul_func_int16_t_s_s(p_35, g_827[(g_518 + 5)])) & ((safe_mul_func_uint8_t_u_u(((((g_1356 , (safe_mul_func_uint16_t_u_u((g_439 , (p_33 && (+0x4CA1L))), (l_1455[3][0] | (~((p_35 >= p_35) && 0x8B43E07EL)))))) == (-2L)) > 1L) , p_35), g_83[3])) , 0x678FL)) , g_1097) || g_31))
            {
                const unsigned l_1471[10][3][8] = {{{1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}, {1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}, {1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}}, {{1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}, {1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}, {1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}}, {{1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}, {1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}, {1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}}, {{1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}, {1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}, {1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}}, {{1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}, {1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}, {1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}}, {{1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}, {1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}, {1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}}, {{1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}, {1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}, {1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}}, {{1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}, {1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}, {1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}}, {{1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}, {1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}, {1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}}, {{1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}, {1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}, {1UL, 0UL, 18446744073709551608UL, 18446744073709551615UL, 0xC0ED623FL, 6UL, 18446744073709551615UL, 0xF9296B2DL}}};
                unsigned l_1498[9] = {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL};
                int i, j, k;
                for (l_1396 = 6; (l_1396 >= 0); l_1396 -= 1)
                {
                    l_1458--;
                    if (p_36)
                        break;
                }
                for (l_1395 = 2; (l_1395 <= 6); l_1395 += 1)
                {
                    const char l_1467 = 6L;
                    if ((safe_add_func_int8_t_s_s((((0L <= p_35) && (((safe_rshift_func_int16_t_s_u(((safe_sub_func_int32_t_s_s(l_1467, g_576)) == (l_1455[3][0] & (safe_add_func_uint16_t_u_u((l_1470 == 1UL), g_484)))), g_476)) , g_1096[5]) | g_83[5])) ^ 4294967287UL), g_1394)))
                    {
                        if (g_484)
                            break;
                        if (l_1471[1][2][7])
                            break;
                    }
                    else
                    {
                        g_29 = (safe_lshift_func_int16_t_s_s(g_827[3], 10));
                    }
                    p_35 &= (safe_mul_func_uint16_t_u_u(0x5404L, (((l_1471[1][2][7] && g_153[2][1]) != p_33) < g_1394)));
                }
                g_169 = (((p_34 >= (((safe_rshift_func_int8_t_s_u((g_827[(g_518 + 5)] & ((((safe_sub_func_int32_t_s_s((251UL ^ l_1471[3][0][3]), l_1471[8][0][1])) && (safe_add_func_int16_t_s_s((+((l_1455[3][0] ^ (safe_mul_func_int8_t_s_s(l_1471[6][1][5], (safe_add_func_uint32_t_u_u(((safe_add_func_int32_t_s_s(p_34, ((safe_add_func_uint8_t_u_u(p_36, l_1455[3][0])) == p_35))) || p_34), g_1394))))) > p_33)), g_167[2][0]))) && 1L) <= 0x50L)), 1)) <= g_683[0]) | (-1L))) , l_1400) && (-1L));
                g_284 = (((safe_add_func_uint16_t_u_u(((l_1471[1][2][7] >= 0xC8L) >= 0x3200B244L), l_1183)) && 0L) && (safe_sub_func_int8_t_s_s(l_1441, (p_36 , ((((((p_35 , (safe_mul_func_uint16_t_u_u((g_167[2][0] != p_35), 0xCC50L))) ^ p_34) , g_576) <= g_83[0]) > l_1498[8]) ^ p_35)))));
            }
            else
            {
                unsigned short l_1511[5][2][10] = {{{65535UL, 9UL, 5UL, 9UL, 65535UL, 0UL, 1UL, 0x21E8L, 1UL, 9UL}, {65535UL, 9UL, 5UL, 9UL, 65535UL, 0UL, 1UL, 0x21E8L, 1UL, 9UL}}, {{65535UL, 9UL, 5UL, 9UL, 65535UL, 0UL, 1UL, 0x21E8L, 1UL, 9UL}, {65535UL, 9UL, 5UL, 9UL, 65535UL, 0UL, 1UL, 0x21E8L, 1UL, 9UL}}, {{65535UL, 9UL, 5UL, 9UL, 65535UL, 0UL, 1UL, 0x21E8L, 1UL, 9UL}, {65535UL, 9UL, 5UL, 9UL, 65535UL, 0UL, 1UL, 0x21E8L, 1UL, 9UL}}, {{65535UL, 9UL, 5UL, 9UL, 65535UL, 0UL, 1UL, 0x21E8L, 1UL, 9UL}, {65535UL, 9UL, 5UL, 9UL, 65535UL, 0UL, 1UL, 0x21E8L, 1UL, 9UL}}, {{65535UL, 9UL, 5UL, 9UL, 65535UL, 0UL, 1UL, 0x21E8L, 1UL, 9UL}, {65535UL, 9UL, 5UL, 9UL, 65535UL, 0UL, 1UL, 0x21E8L, 1UL, 9UL}}};
                unsigned l_1516 = 0x6F22B52CL;
                unsigned char l_1517[9] = {1UL, 1UL, 0xD8L, 1UL, 1UL, 0xD8L, 1UL, 1UL, 0xD8L};
                int i, j, k;
                p_35 = l_1237;
                for (p_34 = 0; (p_34 <= 6); p_34 += 1)
                {
                    short l_1505 = 0L;
                    l_1456 = ((((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(l_1505, (safe_add_func_uint32_t_u_u(p_34, g_683[0])))), 10)), 0x8AL)) , (((((((g_169 <= ((!(safe_unary_minus_func_int16_t_s(((safe_add_func_int8_t_s_s(l_1511[0][1][0], ((((safe_mod_func_uint8_t_u_u(g_827[(g_518 + 5)], ((g_827[(g_518 + 5)] , (safe_mul_func_uint16_t_u_u(l_1511[0][1][0], 0x5B60L))) , l_1516))) ^ l_1505) , p_34) != g_483))) > g_483)))) >= g_827[5])) == p_34) >= g_2) , g_518) , 0x86F9L) > 0x44DFL) < g_827[5])) < 0x82L) ^ g_1158);
                }
                l_1517[1]--;
            }
            for (p_35 = 0; (p_35 >= 0); p_35 -= 1)
            {
                int i, j;
                if (g_1091[(g_518 + 1)][p_35])
                    break;
                p_33 = (-3L);
            }
        }
        --l_1522;
        for (g_680 = 0; (g_680 <= 0); g_680 += 1)
        {
            l_1399[3][1][3] &= (p_36 & (l_1458 && g_1097));
            g_284 = g_1091[0][0];
        }
    }
    return g_101;
}







static char func_37(unsigned p_38, unsigned p_39)
{
    int l_848 = 1L;
    int l_884 = 0x890479B2L;
    int l_906[10] = {0xF2410E97L, 0xF2410E97L, 0xFFF55D8FL, 0xF2410E97L, 0xF2410E97L, 0xFFF55D8FL, 0xF2410E97L, 0xF2410E97L, 0xFFF55D8FL, 0xF2410E97L};
    short l_936 = 6L;
    char l_937 = 0x1BL;
    unsigned l_969 = 18446744073709551615UL;
    unsigned char l_983 = 249UL;
    int l_1059 = 0L;
    int l_1069 = 0xF7D5BF16L;
    unsigned l_1070 = 0xF8775AA3L;
    unsigned short l_1095 = 65528UL;
    char l_1113[10][10];
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
            l_1113[i][j] = 0L;
    }
    for (p_38 = 0; (p_38 <= 6); p_38 += 1)
    {
        int l_843 = (-4L);
        unsigned char l_895[6][8] = {{251UL, 0x72L, 251UL, 0x72L, 251UL, 0x72L, 251UL, 0x72L}, {251UL, 0x72L, 251UL, 0x72L, 251UL, 0x72L, 251UL, 0x72L}, {251UL, 0x72L, 251UL, 0x72L, 251UL, 0x72L, 251UL, 0x72L}, {251UL, 0x72L, 251UL, 0x72L, 251UL, 0x72L, 251UL, 0x72L}, {251UL, 0x72L, 251UL, 0x72L, 251UL, 0x72L, 251UL, 0x72L}, {251UL, 0x72L, 251UL, 0x72L, 251UL, 0x72L, 251UL, 0x72L}};
        int l_905 = 0xB958E2AFL;
        int l_907 = 0xF38D8546L;
        char l_908 = (-1L);
        int l_909[5] = {0xE7C0B120L, (-1L), 0xE7C0B120L, (-1L), 0xE7C0B120L};
        int i, j;
        l_843 = (((g_827[p_38] <= (((g_683[0] == (safe_mul_func_int16_t_s_s((g_827[p_38] == (p_39 != g_167[2][0])), (g_827[p_38] ^ g_827[p_38])))) , 1UL) < ((((g_680 & g_827[p_38]) ^ g_827[p_38]) , (-1L)) ^ p_38))) && 0UL) || 255UL);
        g_683[0] = ((((safe_sub_func_int32_t_s_s(g_684, g_827[p_38])) != p_39) | (safe_rshift_func_uint8_t_u_s(p_38, 3))) <= l_848);
        for (g_484 = 0; (g_484 <= 0); g_484 += 1)
        {
            unsigned short l_875 = 0x29C3L;
            int l_881 = 0xCA360F78L;
            int l_910 = 0xBD7DD89DL;
            int l_911[10];
            int i;
            for (i = 0; i < 10; i++)
                l_911[i] = 0L;
            for (g_518 = 0; (g_518 <= 0); g_518 += 1)
            {
                short l_856[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_856[i] = 0L;
                for (g_476 = 0; (g_476 <= 6); g_476 += 1)
                {
                    int i, j;
                    g_683[g_518] = (((g_683[g_518] ^ (safe_unary_minus_func_int16_t_s((0x42221D7CL >= ((safe_sub_func_uint8_t_u_u(((1L | (!(g_167[(g_484 + 4)][g_484] , (p_38 ^ (g_484 == ((0xF03FL >= (safe_rshift_func_uint16_t_u_s(1UL, (65535UL ^ 1L)))) <= g_680)))))) <= g_827[p_38]), p_39)) , l_856[1]))))) , 0xA74BL) , (-1L));
                    g_683[g_518] = g_167[0][0];
                    g_683[0] = ((safe_mod_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((((((l_843 , (safe_rshift_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((((safe_add_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((!(safe_lshift_func_uint16_t_u_s((g_483 > 7UL), l_875))), l_856[1])) || 0x2609L), g_153[2][6])) & ((safe_rshift_func_int16_t_s_s((l_843 > g_167[(g_484 + 4)][g_484]), g_827[5])) && 0xFE3BL)) ^ g_680), g_167[(g_484 + 4)][g_484])), l_875)) > 8UL) , l_856[1]), 4))) >= (-1L)) <= l_848) , g_2) && p_39), 65535UL)) || l_856[1]), l_875)), p_38)) ^ l_875);
                }
                g_683[g_518] = g_683[g_484];
                if (((g_827[3] , (safe_mul_func_uint8_t_u_u((l_875 && g_827[3]), (g_827[p_38] , 4L)))) > p_39))
                {
                    unsigned l_880 = 0xCAD77327L;
                    g_284 = l_880;
                    if (p_39)
                        continue;
                }
                else
                {
                    l_881 = 0x181A4131L;
                }
                l_884 |= (safe_mod_func_int8_t_s_s(0xDDL, g_683[g_518]));
            }
            l_843 = (safe_mod_func_uint16_t_u_u(l_881, l_875));
            for (g_680 = 0; (g_680 <= 0); g_680 += 1)
            {
                unsigned l_900 = 0x0FA7B87DL;
                g_170 ^= p_39;
                l_884 = ((safe_lshift_func_int8_t_s_s((-2L), (l_884 || l_884))) != g_101);
                l_843 = (safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(l_848, (l_895[3][6] <= (safe_lshift_func_int16_t_s_s(((-1L) | (((safe_mul_func_uint8_t_u_u((p_38 , g_153[2][6]), p_39)) >= p_39) , 0x053A584CL)), l_900))))), 0x4CF1L)), p_39));
                for (g_483 = 0; (g_483 >= 0); g_483 -= 1)
                {
                    return g_101;
                }
            }
            if ((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s(l_895[3][6], 6)), 4)))
            {
                char l_912 = (-1L);
                int l_913 = 0xFDFE17EBL;
                int l_914 = 0x14CEF7ADL;
                int l_915 = 0xF597F383L;
                int l_916[9][8][3] = {{{0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}}, {{0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}}, {{0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}}, {{0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}}, {{0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}}, {{0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}}, {{0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}}, {{0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}}, {{0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}, {0xCBC6B9BEL, 0x088C2709L, (-1L)}}};
                unsigned char l_917 = 0xFBL;
                int i, j, k;
                ++l_917;
            }
            else
            {
                unsigned l_921 = 0xB12340C9L;
                for (l_905 = 0; (l_905 >= 0); l_905 -= 1)
                {
                    int l_920 = 0xC2FCC69CL;
                    l_884 &= p_39;
                    for (l_843 = 0; (l_843 <= 5); l_843 += 1)
                    {
                        int i;
                        return l_911[(l_905 + 8)];
                    }
                    if (l_920)
                        continue;
                }
                l_921 &= p_39;
                l_937 = (l_908 >= (((((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s(((-7L) & (0x038BL & p_38)), l_881)), p_38)), (+((safe_add_func_uint8_t_u_u(p_38, ((safe_sub_func_int16_t_s_s((p_38 > (safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((0x44FBL > p_38), l_921)), g_284))), p_39)) <= l_848))) == l_936)))) >= l_884) == g_170) > g_827[p_38]) , g_174));
            }
        }
        if (p_38)
            continue;
    }
    for (g_484 = 0; (g_484 <= 0); g_484 += 1)
    {
        unsigned l_942 = 0UL;
        int l_955 = 0L;
        int l_1000 = (-1L);
        char l_1022 = 6L;
        if (g_2)
        {
            int i;
            g_170 &= g_174;
        }
        else
        {
            unsigned l_938 = 18446744073709551615UL;
            int l_960 = 0x935544F2L;
            short l_981 = 5L;
            if (g_484)
                break;
            for (l_937 = 2; (l_937 >= 0); l_937 -= 1)
            {
                int l_972 = 4L;
                short l_976 = 0L;
                int l_979 = 0xC2667B60L;
                int l_982 = (-4L);
                int i, j;
                if (((g_167[(g_484 + 4)][g_484] , g_167[(g_484 + 1)][g_484]) == 65535UL))
                {
                    int i;
                    g_683[g_484] = g_683[g_484];
                    for (g_680 = 0; (g_680 <= 0); g_680 += 1)
                    {
                        l_938 = p_38;
                    }
                }
                else
                {
                    unsigned char l_939[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_939[i] = 0x30L;
                    if ((l_939[0] > (4294967295UL ^ ((((+((safe_lshift_func_uint16_t_u_u((((((0xCB409623L != l_942) < ((safe_lshift_func_uint16_t_u_s(0UL, 9)) ^ g_284)) | (-5L)) != (safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((l_906[9] && ((safe_lshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(g_476, 0x39B4L)), p_38)), p_38)) , g_170)) && l_938), p_39)), g_484))) > l_942), g_83[0])) >= g_83[0])) && l_938) & 255UL) ^ g_31))))
                    {
                        g_284 = 0x381DCFB8L;
                        l_955 = 0L;
                        return g_83[0];
                    }
                    else
                    {
                        l_960 &= ((((((g_484 & 65534UL) != ((((g_30 & ((safe_add_func_uint8_t_u_u(l_942, (p_39 , 0xE0L))) , g_31)) ^ (((safe_sub_func_uint16_t_u_u(g_167[2][0], (l_848 , l_938))) ^ p_38) | g_518)) , p_38) < 65535UL)) | g_167[(g_484 + 4)][g_484]) & (-1L)) && l_937) , l_884);
                    }
                    l_955 = (safe_lshift_func_uint8_t_u_u((+((0x7BEAL || (safe_mod_func_uint16_t_u_u(g_30, l_936))) , ((p_39 <= l_906[9]) < g_30))), 1));
                    g_30 = ((safe_mod_func_int16_t_s_s(((g_827[3] , p_39) ^ p_38), (safe_unary_minus_func_uint16_t_u((((g_484 == (safe_unary_minus_func_int16_t_s(((((p_38 >= l_969) || l_938) > l_884) , g_439)))) > g_167[2][0]) < g_2))))) , l_955);
                    for (l_848 = 0; (l_848 <= 0); l_848 += 1)
                    {
                        int i;
                        l_960 = (((safe_mod_func_int32_t_s_s(((((l_939[l_848] ^ l_939[l_848]) >= l_939[0]) | 65526UL) == l_906[8]), p_39)) && (g_153[1][6] ^ (g_2 <= ((((((((g_2 <= p_39) & p_38) && 4UL) && p_38) != 0x435AB1BCL) > 4294967292UL) != g_170) , 0x72E6L)))) , g_167[(g_484 + 1)][g_484]);
                        return l_939[0];
                    }
                }
                for (g_518 = 0; (g_518 <= 0); g_518 += 1)
                {
                    unsigned l_973 = 0UL;
                    const unsigned short l_980 = 65535UL;
                    --l_973;
                    if (l_848)
                        continue;
                    if (((g_101 == p_38) == (((((((l_976 , (((g_83[0] <= 0xB378L) , g_167[(g_484 + 4)][g_484]) | (safe_sub_func_uint16_t_u_u(l_979, l_980)))) , 1UL) | 0xD1489993L) || p_39) || p_39) ^ l_973) == g_483)))
                    {
                        l_960 ^= p_38;
                    }
                    else
                    {
                        g_683[0] = g_167[2][0];
                        return g_29;
                    }
                    for (g_483 = 0; g_483 < 7; g_483 += 1)
                    {
                        g_827[g_483] = 1L;
                    }
                }
                l_884 = (p_39 < p_39);
                ++l_983;
            }
        }
        if (((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((l_937 != g_29), (0x896473E1L | ((((g_827[3] ^ ((safe_lshift_func_int16_t_s_s(l_969, 10)) || 1L)) < (safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((((0xC8L ^ g_680) | p_38) == l_942), p_38)), 11)), g_167[2][0]))) , p_38) >= g_2)))) < 0x27L), 2)) && g_83[0]))
        {
            l_955 ^= (safe_mul_func_uint16_t_u_u(0x45A9L, 0xB9F7L));
            g_284 = l_955;
        }
        else
        {
            for (l_937 = 0; (l_937 <= 2); l_937 += 1)
            {
                l_955 &= g_2;
                if (g_174)
                    continue;
                l_1000 ^= l_955;
                if (l_955)
                    continue;
            }
        }
        for (g_518 = 0; (g_518 <= 2); g_518 += 1)
        {
            char l_1021 = 0xF6L;
            int l_1023 = 0xC06FF13AL;
            int l_1024 = 7L;
            int l_1025 = 0xE827B9DFL;
            if ((1L != (safe_rshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((g_2 , g_174), (((safe_sub_func_int16_t_s_s((l_937 & (+((safe_mod_func_int32_t_s_s(p_39, (safe_lshift_func_uint16_t_u_u(p_38, p_39)))) || 0xBDL))), g_827[5])) & p_39) != g_827[3]))), p_38)), 2))))
            {
                l_1000 &= (g_680 , p_39);
                return g_30;
            }
            else
            {
                int l_1020 = 0L;
                if (p_38)
                {
                    char l_1017 = (-1L);
                    l_906[9] = (safe_add_func_int32_t_s_s(g_83[0], (g_2 & g_439)));
                    l_1021 = (0x4149E1A8L == ((safe_lshift_func_uint8_t_u_u((g_83[0] && (((g_102 == 0xC3L) && (((l_1017 || ((safe_add_func_int8_t_s_s(l_969, (((p_38 , l_906[2]) <= (((((l_1017 || l_1000) < l_1020) < g_153[2][6]) <= g_2) , 0xA7F6553DL)) & l_955))) , l_1020)) , p_39) ^ p_38)) , p_38)), 4)) > 0xE6L));
                }
                else
                {
                    unsigned char l_1026[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1026[i] = 1UL;
                    g_170 = p_38;
                    --l_1026[2];
                }
                return g_684;
            }
        }
    }
    if (((l_906[9] || (safe_rshift_func_int16_t_s_u(((p_39 || 0xBE86L) >= ((safe_add_func_int16_t_s_s(p_38, (safe_lshift_func_int8_t_s_s((0xC5L | ((safe_sub_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((func_48(((safe_add_func_int16_t_s_s((g_102 , (p_38 | (g_170 & ((((safe_sub_func_uint8_t_u_u(p_38, l_937)) | 0xDBL) ^ p_39) != p_38)))), p_39)) , 0x6EEB202AL), p_39, g_484, l_906[9], g_83[0]) ^ (-2L)), 0L)) , l_936), 1L)) , 0UL)), 2)))) >= l_983)), l_884))) , p_38))
    {
        unsigned l_1057 = 0xE5CA473FL;
        int l_1060 = (-1L);
        int l_1064[1];
        unsigned short l_1112 = 0x9085L;
        char l_1114 = 0xAEL;
        int i;
        for (i = 0; i < 1; i++)
            l_1064[i] = 0L;
        for (l_969 = 0; (l_969 != 34); ++l_969)
        {
            char l_1058 = 0x5DL;
            int l_1065 = 0x29E319B5L;
            int l_1066[2][6][8];
            short l_1067 = (-10L);
            int l_1068 = 0xC978D362L;
            short l_1094 = 0xF438L;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 6; j++)
                {
                    for (k = 0; k < 8; k++)
                        l_1066[i][j][k] = 0xEAE839E1L;
                }
            }
            if (((((((((safe_mul_func_uint8_t_u_u((p_38 > (0xE5L || (safe_add_func_uint16_t_u_u((~((safe_lshift_func_uint16_t_u_s(((0x75C0L & (safe_lshift_func_int8_t_s_u((p_38 , l_848), 1))) , (safe_mod_func_int16_t_s_s(func_54(l_936, (((p_39 != (safe_lshift_func_uint16_t_u_s(g_102, l_969))) | 9UL) , l_1057), p_39, g_518), p_38))), 15)) ^ (-10L))), (-1L))))), p_38)) && l_1057) && l_1058) & l_1059) <= 0xF465L) == 0xCCL) == p_39) || 1L))
            {
                return l_936;
            }
            else
            {
                int l_1061 = (-1L);
                int l_1062 = 0x1D3E6349L;
                int l_1063[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1063[i] = 1L;
                l_1070--;
                l_906[9] = (safe_add_func_uint16_t_u_u(func_48(((g_683[0] , (((safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(g_31, (safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(func_42((p_39 | ((safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s(((g_827[3] == (((g_683[0] , ((((safe_rshift_func_int16_t_s_s(l_1064[0], g_1091[0][0])) < ((safe_lshift_func_uint16_t_u_u(l_1057, ((l_1067 , g_483) & 5L))) && l_1064[0])) > 0x23C12009L) | p_39)) > 0xF8L) <= g_827[4])) , l_1063[0]), 0UL)), 0x1E9C3062L)) != p_39)), p_39, l_1064[0], l_1094), 0xBCL)), g_83[0])), 11)))), l_1095)) , p_38) , p_38)) , p_38), l_1062, g_83[0], p_38, p_39), 0x4D0BL));
                g_1097++;
            }
        }
        l_1114 &= (safe_rshift_func_int8_t_s_u(((((safe_add_func_uint8_t_u_u((l_1064[0] ^ g_827[3]), ((0xC1L != (l_937 , (!(((g_576 < p_38) || (safe_rshift_func_uint16_t_u_s(((p_39 >= ((safe_mod_func_int8_t_s_s((func_48(((0L <= (safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(p_38, 9UL)) > 0x24L), g_1097))) , g_576), p_38, p_38, p_38, g_167[2][0]) > p_39), p_38)) < p_39)) != l_1112), l_1064[0]))) && p_38)))) , l_1064[0]))) <= l_1113[8][0]) <= (-1L)) , 0x3DL), 6));
    }
    else
    {
        char l_1116 = (-3L);
        int l_1117 = 1L;
        char l_1177 = 1L;
        for (g_1097 = 0; (g_1097 <= 0); g_1097 += 1)
        {
            unsigned char l_1115 = 0x9FL;
            return l_1115;
        }
        if (l_1116)
        {
            unsigned l_1118 = 0xDCD76F12L;
            int l_1129 = 1L;
            int l_1130 = 0x253D4E8EL;
            int l_1131 = 1L;
            --l_1118;
            l_1117 = (safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((l_1116 <= ((((safe_unary_minus_func_int32_t_s((safe_unary_minus_func_uint8_t_u(g_102)))) == p_39) > ((safe_mod_func_uint16_t_u_u(p_39, (8UL && p_38))) & g_170)) >= (l_1117 ^ g_827[3]))), 6)), (-1L)));
            for (l_1095 = 0; (l_1095 <= 0); l_1095 += 1)
            {
                volatile int l_1135 = 8L;
                for (g_476 = 0; (g_476 <= 0); g_476 += 1)
                {
                    unsigned char l_1132 = 1UL;
                    int i, j;
                    l_1132++;
                    l_1135 = ((g_1091[(l_1095 + 1)][g_476] & p_38) , g_1091[0][0]);
                }
                if (g_101)
                    break;
                for (l_1116 = 0; (l_1116 <= 0); l_1116 += 1)
                {
                    unsigned short l_1138 = 65528UL;
                    l_1130 |= (safe_mul_func_uint16_t_u_u(0xEB78L, g_680));
                    ++l_1138;
                }
            }
        }
        else
        {
            int l_1157 = 0x771D480DL;
            for (l_969 = 0; (l_969 == 46); l_969 = safe_add_func_uint32_t_u_u(l_969, 7))
            {
                unsigned l_1150[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1150[i] = 4UL;
                g_683[0] = 0x2FD25B6CL;
                g_1158 ^= (safe_mul_func_int16_t_s_s(((g_684 == p_39) < (((safe_unary_minus_func_int8_t_s(l_1113[7][5])) != (safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((l_1150[1] & (((((safe_rshift_func_uint8_t_u_u(p_39, (g_1097 ^ ((safe_mul_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(p_38, (p_39 != (p_38 , g_2)))) == 255UL) | l_1116), p_38)) >= p_39)))) <= 0x79B60132L) == g_484) > g_170) ^ p_38)), l_1157)) ^ l_884), 1L))) & l_1157)), 1UL));
                if (l_1150[1])
                    break;
            }
            l_1157 = (safe_unary_minus_func_uint16_t_u(((p_38 , 246UL) , g_170)));
            for (l_1116 = (-10); (l_1116 <= 13); ++l_1116)
            {
                int l_1176 = 0L;
                g_169 = 1L;
                l_1117 = ((safe_add_func_uint8_t_u_u(((func_48(p_38, (safe_add_func_uint8_t_u_u((g_83[0] , ((safe_sub_func_int32_t_s_s((!0xDD9891E5L), p_39)) | ((safe_sub_func_int16_t_s_s(((l_884 != g_684) >= 255UL), ((((~((safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((g_518 && l_1116), 1UL)), l_1157)) | p_38)) <= 4294967288UL) >= l_1117) | 0x8C2BL))) < g_518))), l_1176)), l_1177, p_39, g_484) && p_39) && g_167[2][0]), 0x3BL)) , l_1177);
            }
        }
    }
    return l_884;
}







static short func_42(unsigned p_43, unsigned char p_44, unsigned p_45, int p_46)
{
    int l_792 = 0x77FAB185L;
    int l_793 = (-4L);
    int l_796 = 1L;
    unsigned short l_801 = 8UL;
    int l_828 = 1L;
    unsigned short l_833 = 0xE911L;
    unsigned short l_838 = 0x8F9AL;
    for (g_476 = 21; (g_476 > (-11)); --g_476)
    {
        char l_794 = 3L;
        int l_795 = (-3L);
        int l_797 = 0xF2F6242AL;
        int l_798 = 0xED34C6A6L;
        int l_799 = 0L;
        int l_800[3][9] = {{0x057EC2F8L, (-1L), 0x057EC2F8L, 0L, 1L, 0x2256588FL, 0xA7130D26L, 0xA7130D26L, 0x2256588FL}, {0x057EC2F8L, (-1L), 0x057EC2F8L, 0L, 1L, 0x2256588FL, 0xA7130D26L, 0xA7130D26L, 0x2256588FL}, {0x057EC2F8L, (-1L), 0x057EC2F8L, 0L, 1L, 0x2256588FL, 0xA7130D26L, 0xA7130D26L, 0x2256588FL}};
        int i, j;
        l_801++;
        for (g_680 = 0; (g_680 <= 0); g_680 += 1)
        {
            unsigned l_806[3];
            int l_813 = (-8L);
            int l_814 = 0L;
            int i, j;
            for (i = 0; i < 3; i++)
                l_806[i] = 2UL;
            for (l_794 = 2; (l_794 >= 0); l_794 -= 1)
            {
                unsigned l_815 = 0x515F52C5L;
                int i, j;
                if ((g_167[(l_794 + 2)][g_680] && ((0UL <= (g_167[(l_794 + 1)][g_680] , (safe_lshift_func_uint8_t_u_s((0x7DL && ((g_153[g_680][(g_680 + 7)] >= (g_83[(l_794 + 3)] | (l_806[2] | p_43))) <= (safe_mod_func_uint8_t_u_u((g_680 , g_484), g_483)))), 6)))) > p_43)))
                {
                    int i, j;
                    l_800[g_680][(g_680 + 4)] &= p_43;
                    for (g_483 = 4; (g_483 >= 1); g_483 -= 1)
                    {
                        int i, j;
                        l_800[l_794][(g_680 + 7)] ^= (safe_add_func_uint8_t_u_u(0x4EL, (safe_lshift_func_uint8_t_u_u(((g_2 || (0xE590008BL < (0UL != g_476))) < p_45), 3))));
                        ++l_815;
                        l_793 = (safe_lshift_func_uint8_t_u_s((l_793 && l_800[l_794][(g_680 + 7)]), 5));
                    }
                }
                else
                {
                    g_683[0] = p_46;
                    return l_814;
                }
                g_827[3] ^= ((g_683[0] > ((safe_lshift_func_uint8_t_u_s(g_167[2][0], (p_44 , ((safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(p_44, (p_44 < 65529UL))), 5)) && ((safe_unary_minus_func_int32_t_s(g_167[(l_794 + 2)][g_680])) ^ (l_806[2] | l_799)))))) < 0xBD32L)) && g_167[2][0]);
            }
            if (g_167[(g_680 + 4)][g_680])
                break;
        }
    }
    l_793 = l_828;
    l_793 = ((safe_mod_func_uint8_t_u_u(func_48(l_828, ((safe_mul_func_uint16_t_u_u(func_48((l_796 > l_833), g_827[0], p_43, (((safe_lshift_func_int8_t_s_u(p_43, ((((((((((((g_683[0] & (g_170 & (safe_add_func_int8_t_s_s(((p_43 && g_167[3][0]) >= 0xCAC0BDE5L), l_801)))) , 3UL) >= l_792) < l_793) | 1L) == l_838) ^ (-1L)) && l_828) != l_792) & 6UL) >= g_484) , 0x85L))) == g_827[6]) ^ 0UL), p_44), 0L)) & p_43), g_476, l_833, l_828), g_476)) == 0x78F2L);
    return g_683[0];
}







static short func_48(const int p_49, char p_50, unsigned char p_51, const char p_52, short p_53)
{
    unsigned l_701 = 0xE043C6F0L;
    int l_704 = (-1L);
    short l_705[5][8][3] = {{{0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}}, {{0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}}, {{0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}}, {{0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}}, {{0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}, {0x5F35L, (-10L), 0x8BD8L}}};
    int l_706 = 9L;
    int l_707 = 2L;
    int l_708 = 0x56A34E9CL;
    int l_709 = 0x75A78FB5L;
    int l_712 = 0x5488147BL;
    int l_715 = 0x27D40664L;
    int l_717 = 0xF6B03414L;
    int l_718 = 9L;
    int l_719 = 2L;
    int l_720 = (-1L);
    unsigned l_721 = 4294967295UL;
    int i, j, k;
    if (g_684)
    {
        return p_52;
    }
    else
    {
        char l_699 = 0x91L;
        short l_700 = 0x0D48L;
        int l_710 = 0x9486CDA0L;
        char l_711 = 0x2DL;
        int l_713 = 0x581E6084L;
        int l_714 = 3L;
        int l_716[3][4] = {{0L, 0x19C7B53EL, 0L, 0x19C7B53EL}, {0L, 0x19C7B53EL, 0L, 0x19C7B53EL}, {0L, 0x19C7B53EL, 0L, 0x19C7B53EL}};
        unsigned l_753 = 18446744073709551606UL;
        unsigned l_781 = 18446744073709551615UL;
        int i, j;
        g_170 ^= ((g_174 | (p_51 >= (((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s((g_484 != p_51), (safe_lshift_func_int16_t_s_s((-1L), (l_699 >= 9UL))))), (-8L))), (l_700 , p_50))) & 0L) || l_701))) && p_49);
        if (g_439)
        {
            int l_702 = (-3L);
            int l_703[5] = {6L, (-1L), 6L, (-1L), 6L};
            int l_756[3][1];
            unsigned l_760 = 18446744073709551613UL;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_756[i][j] = 0x11FB3672L;
            }
            l_721++;
            for (g_680 = 0; (g_680 != 40); g_680 = safe_add_func_int16_t_s_s(g_680, 1))
            {
                char l_726 = (-2L);
                int l_742[10][8][3] = {{{0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}}, {{0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}}, {{0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}}, {{0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}}, {{0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}}, {{0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}}, {{0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}}, {{0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}}, {{0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}}, {{0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}, {0xF88AC64DL, 0x6B52E8D2L, 0xCAED3D70L}}};
                int i, j, k;
                if (p_50)
                {
                    unsigned l_727 = 0xC4F46B2EL;
                    for (l_711 = 0; (l_711 <= 2); l_711 += 1)
                    {
                        int i, j;
                        g_170 |= g_153[l_711][(l_711 + 5)];
                    }
                    l_727++;
                    g_169 = (p_50 > (safe_rshift_func_int16_t_s_u((p_52 | l_702), (safe_mul_func_int8_t_s_s((l_708 == g_476), (-4L))))));
                    for (l_718 = (-14); (l_718 < (-29)); --l_718)
                    {
                        l_716[0][3] = (safe_rshift_func_int8_t_s_s((-10L), 3));
                        g_29 |= (safe_rshift_func_uint8_t_u_s(l_727, 3));
                        return l_715;
                    }
                }
                else
                {
                    int l_743 = 4L;
                    int l_744 = (-1L);
                    int l_745 = 0x1D7C1D2EL;
                    for (l_714 = 0; (l_714 > 7); l_714 = safe_add_func_uint16_t_u_u(l_714, 3))
                    {
                        unsigned char l_746 = 0xA4L;
                        --l_746;
                        l_742[5][6][2] ^= (-1L);
                    }
                    if (l_712)
                        break;
                    l_703[0] = (l_703[3] && g_167[2][0]);
                }
                if (g_169)
                {
                    g_170 ^= (safe_add_func_uint8_t_u_u(p_52, (((safe_sub_func_uint32_t_u_u(g_31, l_753)) ^ (((l_703[0] >= p_50) <= ((safe_add_func_uint8_t_u_u((l_756[2][0] & g_101), 250UL)) <= l_726)) , 0L)) > 0x6EFFL)));
                    for (l_706 = 0; (l_706 != (-24)); l_706--)
                    {
                        l_719 = 0xF083B7C2L;
                    }
                }
                else
                {
                    int l_759[10][3] = {{(-1L), 0x45C45A5DL, (-1L)}, {(-1L), 0x45C45A5DL, (-1L)}, {(-1L), 0x45C45A5DL, (-1L)}, {(-1L), 0x45C45A5DL, (-1L)}, {(-1L), 0x45C45A5DL, (-1L)}, {(-1L), 0x45C45A5DL, (-1L)}, {(-1L), 0x45C45A5DL, (-1L)}, {(-1L), 0x45C45A5DL, (-1L)}, {(-1L), 0x45C45A5DL, (-1L)}, {(-1L), 0x45C45A5DL, (-1L)}};
                    int l_765 = (-1L);
                    int l_766[4];
                    int i, j;
                    for (i = 0; i < 4; i++)
                        l_766[i] = 0xDF2B2CC2L;
                    --l_760;
                    for (l_720 = 0; (l_720 > 9); l_720 = safe_add_func_uint16_t_u_u(l_720, 1))
                    {
                        unsigned char l_767 = 247UL;
                        l_767++;
                    }
                }
                l_742[0][7][0] = p_53;
            }
        }
        else
        {
            unsigned char l_776 = 0x80L;
            int l_777 = (-1L);
            int l_778 = 1L;
            int l_779 = (-2L);
            int l_780[7] = {0x0AC82297L, 0xBCDC86EFL, 0x0AC82297L, 0xBCDC86EFL, 0x0AC82297L, 0xBCDC86EFL, 0x0AC82297L};
            int i;
            g_683[0] = ((safe_rshift_func_uint8_t_u_s(g_101, 4)) >= (p_50 > p_53));
            l_713 = (safe_mod_func_uint16_t_u_u((g_153[2][6] , (l_709 > (safe_mul_func_uint16_t_u_u(((func_54(l_704, p_53, g_29, g_2) == l_776) == (((g_31 && g_83[1]) >= g_476) == l_719)), 1UL)))), 4UL));
            l_781++;
        }
        for (l_710 = 0; (l_710 <= 10); l_710 = safe_add_func_uint32_t_u_u(l_710, 5))
        {
            unsigned l_786 = 0UL;
            unsigned char l_789 = 0UL;
            l_786++;
            return l_789;
        }
        g_169 = p_52;
    }
    return l_709;
}







static unsigned short func_54(int p_55, char p_56, short p_57, int p_58)
{
    const unsigned short l_70 = 0xCC68L;
    const unsigned l_73[2] = {0xD6D23037L, 0xD6D23037L};
    int l_100[5][10] = {{(-5L), 8L, 0x34A9CADDL, 0x225587BBL, 8L, 0xFB7A8BFCL, 8L, 0x225587BBL, 0x34A9CADDL, 8L}, {(-5L), 8L, 0x34A9CADDL, 0x225587BBL, 8L, 0xFB7A8BFCL, 8L, 0x225587BBL, 0x34A9CADDL, 8L}, {(-5L), 8L, 0x34A9CADDL, 0x225587BBL, 8L, 0xFB7A8BFCL, 8L, 0x225587BBL, 0x34A9CADDL, 8L}, {(-5L), 8L, 0x34A9CADDL, 0x225587BBL, 8L, 0xFB7A8BFCL, 8L, 0x225587BBL, 0x34A9CADDL, 8L}, {(-5L), 8L, 0x34A9CADDL, 0x225587BBL, 8L, 0xFB7A8BFCL, 8L, 0x225587BBL, 0x34A9CADDL, 8L}};
    unsigned short l_141 = 0xBA64L;
    unsigned l_151 = 4294967295UL;
    short l_181 = 0x8637L;
    short l_358 = (-1L);
    char l_538[10] = {0xFEL, 0L, 0xFEL, 0L, 0xFEL, 0L, 0xFEL, 0L, 0xFEL, 0L};
    const unsigned short l_579 = 0x08DBL;
    unsigned l_685 = 0xBD74A122L;
    int i, j;
    if (((safe_sub_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(l_70, (safe_lshift_func_uint16_t_u_s(g_31, 13)))) || (((g_2 & 0UL) <= (l_70 < 0xFCE9347AL)) , l_73[0])), (l_73[0] != (safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((l_73[0] != g_31), g_31)), g_29))))) <= l_70))
    {
        unsigned short l_85[3][9][6] = {{{0x0EBEL, 0x3846L, 0UL, 65535UL, 1UL, 1UL}, {0x0EBEL, 0x3846L, 0UL, 65535UL, 1UL, 1UL}, {0x0EBEL, 0x3846L, 0UL, 65535UL, 1UL, 1UL}, {0x0EBEL, 0x3846L, 0UL, 65535UL, 1UL, 1UL}, {0x0EBEL, 0x3846L, 0UL, 65535UL, 1UL, 1UL}, {0x0EBEL, 0x3846L, 0UL, 65535UL, 1UL, 1UL}, {0x0EBEL, 0x3846L, 0UL, 65535UL, 1UL, 1UL}, {0x0EBEL, 0x3846L, 0UL, 65535UL, 1UL, 1UL}, {0x0EBEL, 0x3846L, 0UL, 65535UL, 1UL, 1UL}}, {{0x0EBEL, 0x3846L, 0UL, 65535UL, 1UL, 1UL}, {0x0EBEL, 0x3846L, 0UL, 65535UL, 1UL, 1UL}, {0x0EBEL, 0x3846L, 0UL, 65535UL, 1UL, 1UL}, {0x0EBEL, 0x3846L, 0UL, 65535UL, 1UL, 1UL}, {0x0EBEL, 0x3846L, 0UL, 65535UL, 1UL, 1UL}, {0x0EBEL, 0x3846L, 0UL, 65535UL, 1UL, 1UL}, {0x0EBEL, 0x3846L, 0UL, 65535UL, 1UL, 1UL}, {0x0EBEL, 0x3846L, 0UL, 65535UL, 1UL, 1UL}, {0x0EBEL, 0x3846L, 0UL, 65535UL, 1UL, 1UL}}, {{0x0EBEL, 0x3846L, 0UL, 65535UL, 1UL, 1UL}, {0x0EBEL, 0x3846L, 0UL, 65535UL, 1UL, 1UL}, {0x0EBEL, 0x3846L, 0UL, 65535UL, 1UL, 1UL}, {0x0EBEL, 0x3846L, 0UL, 65535UL, 1UL, 1UL}, {0x0EBEL, 0x3846L, 0UL, 65535UL, 1UL, 1UL}, {0x0EBEL, 0x3846L, 0UL, 65535UL, 1UL, 1UL}, {0x0EBEL, 0x3846L, 0UL, 65535UL, 1UL, 1UL}, {0x0EBEL, 0x3846L, 0UL, 65535UL, 1UL, 1UL}, {0x0EBEL, 0x3846L, 0UL, 65535UL, 1UL, 1UL}}};
        char l_139 = 0xB0L;
        int l_166 = 0x0A43F849L;
        unsigned l_206 = 0x9A86176EL;
        unsigned short l_268 = 65534UL;
        const short l_291 = 0x7875L;
        const unsigned char l_450 = 0xA1L;
        char l_478[8] = {0L, 0L, 8L, 0L, 0L, 8L, 0L, 0L};
        unsigned short l_530 = 0x3A70L;
        int l_569 = 0x74D990A1L;
        int l_618 = 0L;
        int l_644 = 0xCCD5EA10L;
        int i, j, k;
        for (p_55 = 8; (p_55 > 14); ++p_55)
        {
            int l_80 = 0x3BD65BDFL;
            const char l_84 = 0x5DL;
            unsigned l_144 = 4294967293UL;
            int l_147 = 1L;
            l_80 = 4L;
            if ((((((-9L) > g_29) , (g_31 , 0x6DL)) , (p_57 == ((safe_mul_func_uint16_t_u_u(65535UL, ((p_56 >= g_30) < (l_73[1] != g_31)))) & g_83[0]))) < l_84))
            {
                unsigned l_106 = 6UL;
                --l_85[2][0][2];
                if (p_57)
                {
                    int l_98 = (-3L);
                    int l_99 = 1L;
                    if (((safe_lshift_func_uint16_t_u_s(((~g_83[5]) , (safe_add_func_uint8_t_u_u(((((p_55 < 0x20L) , ((safe_mod_func_int32_t_s_s(g_83[0], (safe_mod_func_uint8_t_u_u(p_55, g_31)))) | g_83[0])) && (safe_sub_func_int8_t_s_s((l_98 & 249UL), p_58))) , l_84), 4L))), g_31)) , p_55))
                    {
                        g_102++;
                        return p_55;
                    }
                    else
                    {
                        l_100[4][0] = p_57;
                        l_99 = p_58;
                        if (p_58)
                            break;
                    }
                }
                else
                {
                    if (l_100[1][7])
                    {
                        unsigned l_105 = 0x97794FBAL;
                        p_58 = p_56;
                        return l_105;
                    }
                    else
                    {
                        l_106--;
                        p_58 = l_84;
                        return l_85[2][0][2];
                    }
                }
                for (p_56 = 25; (p_56 != 21); p_56 = safe_sub_func_uint32_t_u_u(p_56, 9))
                {
                    p_58 = (safe_rshift_func_uint16_t_u_s(p_58, 11));
                }
            }
            else
            {
                int l_123 = 7L;
                unsigned short l_142[5][2] = {{0xD786L, 65535UL}, {0xD786L, 65535UL}, {0xD786L, 65535UL}, {0xD786L, 65535UL}, {0xD786L, 65535UL}};
                char l_152 = 6L;
                int l_164 = 1L;
                int l_165 = (-5L);
                int l_171[9];
                int i, j;
                for (i = 0; i < 9; i++)
                    l_171[i] = (-2L);
                g_30 = ((g_83[0] && (safe_mul_func_uint16_t_u_u((((((l_80 , g_83[0]) || (~p_57)) > (safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((((p_58 , 65535UL) & (l_85[2][0][2] , (safe_mod_func_int8_t_s_s(((g_83[2] & p_58) != g_29), l_123)))) , 0xE0L), 0xF2L)), 7L))) , g_102) , 0UL), g_31))) == g_83[1]);
                if (l_123)
                {
                    short l_124 = 0x53E4L;
                    int l_163 = 0xA5CC0B3DL;
                    int l_168[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_168[i] = 0x7827581FL;
                    if (g_31)
                    {
                        unsigned char l_140 = 9UL;
                        int l_143 = 0xEE2B33A3L;
                        if (l_124)
                            break;
                        l_143 = ((p_55 == (((l_124 <= (((((safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(p_57, (safe_rshift_func_int16_t_s_s(((safe_add_func_int16_t_s_s((((0xDDF9L | ((((g_83[0] != (((l_100[1][7] != g_2) , 0x848FL) <= (safe_mod_func_uint32_t_u_u(l_139, l_140)))) , l_139) && g_30) ^ p_55)) , l_140) > l_139), 0xE664L)) != g_83[0]), 6)))) , l_141), l_140)), l_142[4][1])), p_58)) <= l_84) , g_83[0]) == g_2) , p_55)) | 1L) , 1UL)) & p_55);
                    }
                    else
                    {
                        unsigned l_150 = 4UL;
                        p_58 = ((~(l_144 & ((g_2 == l_100[1][7]) < l_85[2][0][2]))) != 0x85L);
                        l_147 &= (safe_add_func_uint16_t_u_u(l_124, (g_31 < p_58)));
                        g_29 = (g_101 > ((safe_sub_func_int16_t_s_s((!l_142[4][1]), (((l_85[2][0][2] || ((l_150 <= p_55) != (((l_151 , l_144) ^ (p_58 , ((g_83[0] > g_83[6]) != 65531UL))) < 0x24L))) != (-1L)) & l_124))) < 0x5567L));
                    }
                    if (l_152)
                    {
                        unsigned short l_162 = 9UL;
                        int l_172 = 0x01D58953L;
                        int l_173 = (-8L);
                        ++g_153[2][6];
                        l_162 = (safe_mod_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((-1L), g_29)) , 255UL), (safe_lshift_func_uint16_t_u_s(p_56, 10))));
                        g_174--;
                    }
                    else
                    {
                        unsigned l_184 = 0x106ED31EL;
                        g_29 = (p_58 || (((g_167[2][0] , (safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint8_t_u_u((l_181 , (safe_sub_func_uint32_t_u_u(((g_174 > ((-8L) ^ l_181)) , ((p_55 ^ (0x1EL == p_55)) && g_167[2][0])), 0x84D6A5DCL))), 0xCEL)) == 0x7E89L), p_57))) <= g_167[4][0]) || l_184));
                        g_30 = (g_30 , p_57);
                    }
                    return p_56;
                }
                else
                {
                    short l_191[8][1] = {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}};
                    int i, j;
                    p_58 = ((safe_sub_func_int8_t_s_s(((g_30 < ((safe_sub_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u(p_58, l_191[5][0])) , ((safe_lshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(((safe_add_func_int32_t_s_s((l_73[0] > (safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s(l_142[4][1], p_58)), (safe_add_func_uint16_t_u_u((((l_191[0][0] ^ (safe_lshift_func_int16_t_s_u(l_142[2][0], 6))) && (+l_147)) == 0x8EL), p_55))))), g_167[2][0])) , 1L), 0x8D31AF41L)), 1)) , p_58)) , p_58), l_139)) > 1L)) || 0xB1F7L), 0xF2L)) != g_167[2][0]);
                    p_58 ^= g_169;
                    p_58 = l_206;
                }
            }
            return g_31;
        }
        if ((safe_sub_func_uint8_t_u_u(l_73[0], (safe_add_func_uint16_t_u_u(p_55, ((safe_rshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(l_85[2][0][2], ((g_83[0] >= 0xDA30L) & (safe_mod_func_uint8_t_u_u(l_70, (safe_sub_func_uint16_t_u_u((p_55 != g_167[2][0]), p_56))))))), 4)) >= (-1L)))))))
        {
            char l_219 = 1L;
            int l_239 = 0xDD1DBFA4L;
            char l_285 = 0xACL;
            unsigned short l_359[6][3][2] = {{{65533UL, 3UL}, {65533UL, 3UL}, {65533UL, 3UL}}, {{65533UL, 3UL}, {65533UL, 3UL}, {65533UL, 3UL}}, {{65533UL, 3UL}, {65533UL, 3UL}, {65533UL, 3UL}}, {{65533UL, 3UL}, {65533UL, 3UL}, {65533UL, 3UL}}, {{65533UL, 3UL}, {65533UL, 3UL}, {65533UL, 3UL}}, {{65533UL, 3UL}, {65533UL, 3UL}, {65533UL, 3UL}}};
            unsigned l_403 = 0x90AA29DEL;
            unsigned char l_445 = 0x3EL;
            unsigned l_468 = 4294967292UL;
            int l_517[5][6][5] = {{{0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}, {0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}, {0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}, {0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}, {0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}, {0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}}, {{0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}, {0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}, {0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}, {0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}, {0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}, {0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}}, {{0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}, {0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}, {0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}, {0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}, {0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}, {0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}}, {{0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}, {0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}, {0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}, {0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}, {0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}, {0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}}, {{0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}, {0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}, {0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}, {0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}, {0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}, {0x1BD6B79AL, (-1L), (-1L), 0x6A9DD226L, (-7L)}}};
            unsigned l_531 = 0x7F2E56B5L;
            int i, j, k;
            for (l_151 = 0; (l_151 <= 2); l_151 += 1)
            {
                unsigned l_220 = 18446744073709551615UL;
                l_220++;
                p_58 ^= g_153[2][6];
                g_30 = (((safe_rshift_func_int16_t_s_s(g_29, 11)) , (safe_mul_func_int16_t_s_s((((safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((p_58 , p_56) , p_56), (l_85[2][0][2] ^ (safe_sub_func_int16_t_s_s(((4294967295UL & 0x33CD6398L) >= (safe_mul_func_int8_t_s_s((+((g_153[2][6] , g_83[0]) & g_170)), (-1L)))), l_220))))), g_2)), p_56)) && 3UL) & p_58), p_55))) || 0x33F7L);
                for (l_139 = 0; (l_139 <= 2); l_139 += 1)
                {
                    for (p_56 = 2; (p_56 >= 0); p_56 -= 1)
                    {
                        int i, j, k;
                        l_100[(l_151 + 1)][(l_151 + 7)] = l_85[l_139][(l_151 + 3)][l_139];
                        p_58 = (l_85[l_139][(l_139 + 6)][l_139] < l_85[l_139][(l_139 + 3)][l_139]);
                    }
                    l_239 = (safe_mul_func_int8_t_s_s(g_102, g_170));
                    if (g_167[2][0])
                        break;
                    for (l_206 = 0; (l_206 <= 2); l_206 += 1)
                    {
                        int i, j, k;
                        p_58 = (safe_rshift_func_uint16_t_u_u(l_85[l_139][(l_139 + 2)][(l_206 + 2)], 0));
                    }
                }
            }
            if (((((+((safe_lshift_func_uint8_t_u_s((((l_85[1][5][0] , (p_55 != 0xEAD67A6CL)) & l_73[0]) && g_29), p_58)) <= (g_31 && 0x19L))) || 0x24C49024L) != 250UL) > 0xC6D34CFEL))
            {
                unsigned l_247 = 4294967295UL;
                int l_303 = 1L;
                unsigned l_424 = 0x17BEFE16L;
                int l_438 = (-1L);
                for (l_141 = 0; (l_141 >= 28); ++l_141)
                {
                    unsigned char l_269 = 4UL;
                    for (l_151 = 0; (l_151 <= 2); l_151 += 1)
                    {
                        int l_246 = 0x8D056594L;
                        int i, j;
                        l_246 = (g_153[l_151][(l_151 + 2)] && g_153[l_151][l_151]);
                        g_169 = g_153[l_151][(l_151 + 5)];
                        if (l_247)
                            break;
                        if (g_31)
                            break;
                    }
                    g_170 = (safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(g_170, 0x6AF2F86AL)), ((l_166 <= l_239) && (g_2 ^ l_85[2][0][2]))));
                    for (g_170 = (-6); (g_170 == 15); g_170++)
                    {
                        p_58 = ((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s(g_153[0][6], (!((-1L) <= (g_83[3] == (((safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(((g_170 >= g_31) || p_57), (safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s((((l_100[1][7] >= p_56) , l_268) != 0xA85F17F0L), 0x07C2L)) | l_85[1][6][4]) && 0x6AL), l_247)) < l_239), l_269)))), p_57)) != 0xF5F9C350L) && 0x61L)))))), 0x15L)) == 3L);
                        return p_58;
                    }
                }
                if (((0xDD0621BFL < ((safe_sub_func_int32_t_s_s(g_101, g_83[0])) && (l_268 & ((safe_add_func_uint16_t_u_u(l_247, (((safe_lshift_func_uint8_t_u_s(((((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((p_55 > ((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(g_167[2][0], p_57)) <= l_151), p_56)) != 0x29318B52L)), 1UL)), g_284)) > g_170) <= g_167[2][0]) < l_285), p_58)) , p_56) >= l_85[1][2][1]))) >= p_58)))) ^ p_58))
                {
                    int l_286 = 0x13280503L;
                    if ((l_239 | ((l_286 < ((safe_lshift_func_int16_t_s_s(l_291, 13)) >= ((safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(l_247, ((p_57 , (((((l_247 ^ l_247) > ((safe_unary_minus_func_int32_t_s((safe_rshift_func_uint16_t_u_u(p_56, 0)))) >= (safe_sub_func_uint16_t_u_u(((0L > p_58) | l_268), g_167[2][0])))) , 0x2DC38A90L) , g_153[2][1]) && l_100[1][7])) != p_55))), p_55)) > 0UL))) || l_219)))
                    {
                        g_284 ^= (safe_sub_func_int16_t_s_s(l_247, 65533UL));
                        l_303 = (p_56 <= p_55);
                        return p_58;
                    }
                    else
                    {
                        char l_309 = 1L;
                        unsigned char l_318 = 255UL;
                        p_58 &= (-1L);
                        g_30 = (((safe_sub_func_uint32_t_u_u(((((safe_rshift_func_int8_t_s_s(((((safe_unary_minus_func_int16_t_s(((((l_85[2][0][2] <= l_73[0]) > l_303) & l_309) >= (l_286 , g_167[1][0])))) < (safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(g_170, 7)), p_55))) , p_56) , (-1L)), 5)) || p_56) >= l_309) >= g_31), l_285)) | 0x2AE39DF6L) > p_56);
                        l_303 &= ((7UL || (!(safe_add_func_uint32_t_u_u((l_309 & (2UL ^ (g_101 | l_247))), (safe_add_func_int32_t_s_s(l_286, l_318)))))) || (safe_lshift_func_int8_t_s_s(((l_291 < (safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(0x01F3L, l_286)) >= g_169), 6))) > (-8L)), 0)));
                    }
                }
                else
                {
                    unsigned l_325 = 4294967286UL;
                    return l_325;
                }
                for (l_181 = 0; (l_181 <= 2); l_181 += 1)
                {
                    int l_360 = 0xA3F2C9B0L;
                    l_166 = (((((0x14FEL ^ (safe_mod_func_int32_t_s_s(((l_100[1][7] , l_70) , 0xB2D17970L), l_303))) , ((safe_lshift_func_uint8_t_u_u(((((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u(((g_284 ^ (l_239 < g_170)) >= (safe_lshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s(p_57, 7UL)), p_56))), 12)), 3)) > l_85[2][0][2]) == l_239) ^ p_56), p_57)) , 4294967288UL)) | 0L) , p_58) && p_57);
                    if ((safe_lshift_func_uint16_t_u_u(g_101, 4)))
                    {
                        p_58 = (((safe_sub_func_int32_t_s_s((((safe_unary_minus_func_uint8_t_u(255UL)) , (l_268 , (g_170 , g_153[2][6]))) , l_239), 0xC47C60C4L)) <= (l_73[1] , 65528UL)) , g_31);
                    }
                    else
                    {
                        short l_357 = 5L;
                        l_359[1][2][1] = (safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s((g_167[2][0] >= (((safe_mul_func_uint8_t_u_u((((((safe_lshift_func_uint16_t_u_u((g_2 | p_55), (safe_lshift_func_int8_t_s_u(g_2, 1)))) ^ g_29) ^ (((-6L) == (safe_mod_func_int16_t_s_s(l_357, p_57))) ^ p_57)) && 0x2EL) <= g_167[2][0]), l_70)) && g_169) <= 5UL)), 4294967287UL)), l_358)), (-8L)));
                        if (l_360)
                            continue;
                    }
                    for (l_358 = 0; (l_358 <= 2); l_358 += 1)
                    {
                        int l_383[3];
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_383[i] = 0x04C94ED6L;
                        g_170 = (g_153[l_181][(l_358 + 2)] && ((safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s(((1L || l_360) > (((0x0261L ^ g_102) > ((255UL > g_31) > (safe_lshift_func_int8_t_s_s(l_247, 0)))) , ((((g_170 , 0xEC828539L) & p_55) || g_169) < 0x3444L))), l_359[3][2][0])), 0x1EB7L)) < l_166));
                        l_166 = (0xECL | (((safe_sub_func_uint8_t_u_u(1UL, ((((((~(p_58 ^ (-5L))) != 1L) || g_83[0]) == ((safe_sub_func_uint32_t_u_u(4294967291UL, (+((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(g_153[2][6], 1)), ((l_360 <= p_57) , p_55))) , 0xD018CBE6L)))) < g_83[2])) & 0UL) > g_83[5]))) | l_100[1][7]) >= g_167[2][0]));
                        l_383[0] = (((g_31 , g_30) | (g_167[2][0] , p_58)) & (p_58 , ((p_55 < (safe_mod_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u((((safe_add_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(((g_83[0] , (p_57 != (g_31 >= 6L))) || p_56), 4UL)) == p_58), l_285)) || l_100[1][7]) , l_359[3][0][0]), 0x0EL)) , 0UL), l_383[2]))) == l_360)));
                    }
                }
                if ((g_29 < (p_57 , ((safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(g_83[6], p_58)), (+((safe_add_func_uint16_t_u_u(g_83[2], ((g_170 < g_2) > l_247))) || 65531UL)))) <= 4UL))))
                {
                    char l_392 = 0x5FL;
                    int l_437 = 4L;
                    for (l_151 = 0; (l_151 <= 46); ++l_151)
                    {
                        int l_402 = 0L;
                        l_403 = ((0x2DBFFCE8L | l_392) & ((((safe_unary_minus_func_int8_t_s(((((g_167[2][0] && p_57) > g_153[2][1]) == ((safe_mod_func_uint32_t_u_u(0xDF9F01FBL, ((safe_sub_func_int16_t_s_s(p_56, (g_31 ^ (safe_rshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(l_219, p_57)) ^ 0xFEL), 7))))) & g_167[1][0]))) > l_358)) ^ p_58))) || l_402) , 4294967292UL) , 1L));
                    }
                    g_169 = (safe_sub_func_uint8_t_u_u(0xB1L, ((l_303 || (safe_add_func_int16_t_s_s((((g_153[0][2] && 0xD768629AL) || (safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((g_30 ^ (2UL == 0UL)), 15)), p_55)), l_403)), g_83[0])), (-1L)))) < 0L), g_31))) && g_169)));
                    if (g_2)
                    {
                        int l_436 = (-4L);
                        p_58 &= (0xA2A0L || ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((p_57 > l_70), l_424)) , g_83[0]), 6)), 0L)) == g_167[2][0]));
                        l_303 &= ((3UL == (((safe_mod_func_uint32_t_u_u((((safe_mod_func_uint8_t_u_u((((((((safe_lshift_func_int16_t_s_s((-6L), ((((~((safe_unary_minus_func_uint8_t_u(((p_55 <= g_102) , l_85[2][5][3]))) & (p_56 , (((safe_sub_func_int32_t_s_s((1UL < p_58), (safe_sub_func_int16_t_s_s(p_55, g_83[3])))) && 0L) , g_83[2])))) , g_284) && p_58) , p_58))) , p_56) , 0xC52A4E98L) , 0x82E4L) | g_31) , p_57) != l_166), l_436)) < g_83[0]) | g_2), g_167[2][0])) , g_83[5]) && p_56)) >= 0xA3L);
                        ++g_439;
                    }
                    else
                    {
                        unsigned char l_442 = 0x7CL;
                        l_442++;
                        g_284 = (p_57 == (l_442 | (l_442 & g_153[1][5])));
                        p_58 = 0x1C91F2F8L;
                    }
                }
                else
                {
                    short l_463 = (-1L);
                    int l_475 = 0L;
                    int l_477[10][9][2] = {{{6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}}, {{6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}}, {{6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}}, {{6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}}, {{6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}}, {{6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}}, {{6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}}, {{6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}}, {{6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}}, {{6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}, {6L, 1L}}};
                    int i, j, k;
                    p_58 = l_445;
                    for (l_445 = (-20); (l_445 >= 22); l_445 = safe_add_func_uint16_t_u_u(l_445, 1))
                    {
                        unsigned short l_479 = 0x3514L;
                        int l_482 = 0L;
                        g_169 = (safe_lshift_func_int16_t_s_u(l_450, (g_83[0] , (((4294967295UL | p_58) , (((p_58 != (-6L)) < ((((((((((((safe_lshift_func_int8_t_s_s(((safe_add_func_int8_t_s_s(1L, l_424)) , (safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(p_58, 4294967294UL)) & l_463), 0x2731L)) <= 7UL), 255UL)), p_55))), 3)) , 0UL) < 0UL) || 0x81D1L) , g_439) != 0x02C06835L) && (-1L)) & p_58) <= 1L) , g_83[0]) < p_56) >= p_58)) <= g_167[2][0])) | g_167[4][0]))));
                        g_170 = (safe_mod_func_int16_t_s_s((0xCBL || p_56), ((safe_lshift_func_int16_t_s_s(0x6D4FL, 14)) ^ (l_468 ^ (g_174 == (safe_sub_func_int32_t_s_s(g_167[2][0], (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s((~p_57), (g_2 ^ (-6L)))), 2)))))))));
                        ++l_479;
                        g_484++;
                    }
                }
            }
            else
            {
                unsigned char l_499[1][2];
                int l_502 = 9L;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_499[i][j] = 0xEEL;
                }
                p_58 = (safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(0L, (((((0x5F0BA095L <= (safe_lshift_func_uint8_t_u_u((l_100[1][7] | (safe_sub_func_uint32_t_u_u((l_499[0][1] >= (safe_mod_func_uint16_t_u_u((g_167[2][0] >= g_102), p_58))), l_502))), (g_170 , g_83[0])))) >= 4294967290UL) == p_57) | 1UL) <= 0x789C4176L))) != 0xFDL), 0xCAL)), p_56)), 10));
            }
            if (((0x4FF2L >= (safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(g_174, (254UL && (-1L)))), (g_476 || (p_57 > l_73[0]))))) ^ ((g_167[2][0] || g_484) || l_100[3][4])))
            {
                unsigned char l_509 = 0UL;
                g_30 = (safe_mod_func_int32_t_s_s((l_509 , (p_56 < ((0xA5L | g_83[0]) <= (safe_sub_func_uint8_t_u_u(((0x2003L ^ p_55) >= g_101), ((safe_lshift_func_int16_t_s_u((g_476 , g_483), l_509)) & p_56)))))), g_476));
            }
            else
            {
                int l_514 = 0x75CB0391L;
                int l_516 = 0x8E4BD243L;
                int l_533 = (-1L);
                int l_536 = 0L;
                if (l_514)
                {
                    unsigned l_525[5][9][5] = {{{0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}}, {{0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}}, {{0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}}, {{0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}}, {{0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}, {0UL, 0xD84D2C88L, 0x2FE5FE70L, 18446744073709551615UL, 18446744073709551613UL}}};
                    int l_534 = 0L;
                    int l_535 = (-1L);
                    int l_540 = 0L;
                    unsigned char l_541 = 254UL;
                    int i, j, k;
                    if ((g_29 <= p_56))
                    {
                        int l_515 = 0xC5297BFDL;
                        --g_518;
                    }
                    else
                    {
                        int l_532 = 0x1A53E0ADL;
                        int l_537 = 0xF039BE76L;
                        int l_539[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_539[i] = (-5L);
                        l_517[2][1][4] ^= ((l_291 ^ (((((((g_284 || g_170) >= (((safe_sub_func_int8_t_s_s(((((((((safe_mod_func_uint16_t_u_u(l_525[2][1][2], (safe_add_func_uint32_t_u_u((((safe_mod_func_uint16_t_u_u(((0x22L < 0x98L) & (p_56 | ((p_58 < l_530) > 0x9FC85A52L))), p_56)) >= 0xA1F1L) ^ p_57), g_83[2])))) <= g_518) & l_531) < p_57) != 0xF830DA3AL) | 0xD2499436L) < p_58) , p_56), p_57)) ^ g_483) > l_532)) & 0x4EE1L) <= g_167[2][0]) , 255UL) , 0xB74016A3L) ^ l_285)) || 1UL);
                        p_58 = p_55;
                        --l_541;
                        return g_284;
                    }
                    g_29 = (safe_sub_func_int32_t_s_s(l_541, ((safe_sub_func_int16_t_s_s(g_170, l_100[1][7])) && g_483)));
                }
                else
                {
                    char l_552 = 0x00L;
                    for (p_56 = (-15); (p_56 >= (-14)); p_56 = safe_add_func_uint32_t_u_u(p_56, 5))
                    {
                        g_170 &= (l_100[1][7] != p_55);
                        p_58 ^= (safe_rshift_func_int16_t_s_u(g_518, 13));
                    }
                    if ((g_31 , g_83[0]))
                    {
                        g_284 &= p_57;
                        g_30 = ((g_484 ^ (g_153[2][6] != g_167[1][0])) , g_174);
                    }
                    else
                    {
                        unsigned l_553 = 0xE6C6213DL;
                        l_553++;
                        return p_55;
                    }
                    for (l_206 = 26; (l_206 == 5); l_206--)
                    {
                        char l_560[2];
                        char l_563 = 0L;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_560[i] = 0x04L;
                        g_29 = g_167[2][0];
                        g_284 = (safe_lshift_func_uint16_t_u_u(l_560[1], (+(0xD5F0B7E1L ^ ((safe_mul_func_int8_t_s_s((l_563 , ((safe_mul_func_uint8_t_u_u(l_85[2][0][2], (safe_lshift_func_uint16_t_u_u((p_55 , 65529UL), 11)))) > l_560[1])), 0x07L)) && (((g_174 >= p_55) < l_268) || g_476))))));
                        p_58 = g_169;
                        if (g_153[2][6])
                            continue;
                    }
                }
                l_569 = (safe_unary_minus_func_int16_t_s(g_170));
                p_58 = p_57;
            }
            l_166 |= (safe_mod_func_uint8_t_u_u(p_55, (safe_lshift_func_uint16_t_u_u((0L ^ (safe_rshift_func_int16_t_s_s((p_58 != g_484), l_445))), (((l_517[2][5][4] | g_83[4]) <= 0xB5ECC560L) , (0xADL != g_576))))));
        }
        else
        {
            unsigned l_596 = 0x6B3D5CD2L;
            int l_604[5];
            int i;
            for (i = 0; i < 5; i++)
                l_604[i] = 0L;
            if (g_30)
            {
                unsigned short l_591[9][8][3] = {{{65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}}, {{65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}}, {{65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}}, {{65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}}, {{65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}}, {{65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}}, {{65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}}, {{65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}}, {{65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}, {65528UL, 0x489EL, 65528UL}}};
                int l_597 = 0xD5640E0AL;
                int i, j, k;
                p_58 = (safe_add_func_uint16_t_u_u((g_102 , l_579), ((safe_sub_func_int32_t_s_s((0x8BL < ((safe_mul_func_int16_t_s_s(g_484, (safe_add_func_int8_t_s_s(g_476, 1L)))) , (~g_83[0]))), (g_518 < (safe_rshift_func_uint16_t_u_s((g_167[2][0] & p_56), p_55))))) ^ p_55)));
                for (l_530 = 0; (l_530 > 46); l_530 = safe_add_func_int16_t_s_s(l_530, 6))
                {
                    unsigned l_590 = 18446744073709551615UL;
                    if (g_29)
                    {
                        l_590 = ((p_58 && (g_484 && 1UL)) , ((p_55 , g_284) && 0x67AF5FF4L));
                        g_284 &= (-1L);
                        l_591[7][4][2]--;
                    }
                    else
                    {
                        return l_591[7][4][2];
                    }
                    for (p_58 = 0; (p_58 != 22); p_58++)
                    {
                        l_166 = ((l_590 <= l_591[7][4][2]) & ((l_596 >= (g_476 ^ p_57)) | (l_538[6] && p_55)));
                        l_597 = l_538[6];
                        if (p_57)
                            break;
                    }
                }
            }
            else
            {
                unsigned char l_603 = 0UL;
                for (g_170 = 2; (g_170 >= 0); g_170 -= 1)
                {
                    unsigned l_602 = 18446744073709551607UL;
                    if (g_31)
                        break;
                    for (l_166 = 2; (l_166 >= 0); l_166 -= 1)
                    {
                        int i, j;
                        g_169 = (g_153[l_166][(l_166 + 1)] && p_55);
                        l_602 = (((((safe_add_func_int8_t_s_s(p_57, l_73[0])) ^ 253UL) > g_174) > g_2) , (~((g_476 , ((safe_lshift_func_uint8_t_u_s((g_476 || (0xC4F5L != (g_170 , 65528UL))), g_153[l_166][(l_166 + 1)])) , 0x6C8D7D62L)) | p_55)));
                        l_604[3] = l_603;
                    }
                }
            }
            for (l_569 = 0; (l_569 != 0); ++l_569)
            {
                unsigned char l_614 = 0xFAL;
                volatile unsigned short l_626[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_626[i] = 65535UL;
                for (p_58 = 18; (p_58 == (-1)); --p_58)
                {
                    unsigned l_620 = 0x4FF5BB27L;
                    int l_625 = 6L;
                    for (l_166 = 28; (l_166 >= 2); --l_166)
                    {
                        int l_613[7] = {(-10L), (-10L), 0x10336108L, (-10L), (-10L), 0x10336108L, (-10L)};
                        int l_617[6][10][2] = {{{0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}}, {{0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}}, {{0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}}, {{0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}}, {{0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}}, {{0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}, {0xB6A29DA7L, 0x31DF7B16L}}};
                        int l_619 = 0xC3FC3822L;
                        int i, j, k;
                        l_100[1][7] |= ((((safe_add_func_uint32_t_u_u(p_57, ((l_613[6] <= (0xEABCL || ((l_614 | (safe_add_func_uint32_t_u_u(p_57, (0x1AFFFFF6L || ((0xC72CL <= p_55) , (g_174 , g_518)))))) , l_617[0][2][1]))) == (-1L)))) != 1UL) > 0xC1F1L) < g_170);
                        l_620++;
                        g_30 |= (l_596 ^ p_55);
                        l_604[3] = (p_56 >= (safe_lshift_func_uint16_t_u_s(g_2, l_614)));
                    }
                    l_625 = (~l_579);
                }
                l_626[1] = g_284;
            }
        }
        p_58 = (((safe_unary_minus_func_int16_t_s(g_153[2][6])) & ((safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s(p_58, ((((safe_sub_func_uint32_t_u_u((((((safe_mod_func_int16_t_s_s(g_518, l_291)) < (safe_add_func_int16_t_s_s((((l_268 , l_100[3][6]) || ((((((safe_mul_func_uint8_t_u_u((((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(p_56, 3)), (g_483 != g_83[6]))) ^ p_57) == 0xF624L), g_167[4][0])) , l_538[6]) != (-1L)) <= 0x09L) >= l_644) != g_170)) , 0x4558L), p_55))) == 0x27L) , l_85[1][8][3]) || 0x7686L), p_55)) , l_100[0][8]) , 1UL) <= p_55))), 250UL)) & l_618)) | 0x1FACA550L);
        for (l_141 = 0; (l_141 == 7); l_141 = safe_add_func_int32_t_s_s(l_141, 4))
        {
            for (p_58 = (-29); (p_58 == 8); p_58 = safe_add_func_uint16_t_u_u(p_58, 6))
            {
                unsigned l_649[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_649[i] = 18446744073709551615UL;
                l_100[2][0] = g_153[1][0];
                --l_649[0];
            }
            if (p_56)
                break;
        }
    }
    else
    {
        int l_656 = 0x739BE8EEL;
        unsigned l_670[4][5][5] = {{{0x280E2EE4L, 0x94204A80L, 0xCAB14CE9L, 0x48EC6800L, 4294967288UL}, {0x280E2EE4L, 0x94204A80L, 0xCAB14CE9L, 0x48EC6800L, 4294967288UL}, {0x280E2EE4L, 0x94204A80L, 0xCAB14CE9L, 0x48EC6800L, 4294967288UL}, {0x280E2EE4L, 0x94204A80L, 0xCAB14CE9L, 0x48EC6800L, 4294967288UL}, {0x280E2EE4L, 0x94204A80L, 0xCAB14CE9L, 0x48EC6800L, 4294967288UL}}, {{0x280E2EE4L, 0x94204A80L, 0xCAB14CE9L, 0x48EC6800L, 4294967288UL}, {0x280E2EE4L, 0x94204A80L, 0xCAB14CE9L, 0x48EC6800L, 4294967288UL}, {0x280E2EE4L, 0x94204A80L, 0xCAB14CE9L, 0x48EC6800L, 4294967288UL}, {0x280E2EE4L, 0x94204A80L, 0xCAB14CE9L, 0x48EC6800L, 4294967288UL}, {0x280E2EE4L, 0x94204A80L, 0xCAB14CE9L, 0x48EC6800L, 4294967288UL}}, {{0x280E2EE4L, 0x94204A80L, 0xCAB14CE9L, 0x48EC6800L, 4294967288UL}, {0x280E2EE4L, 0x94204A80L, 0xCAB14CE9L, 0x48EC6800L, 4294967288UL}, {0x280E2EE4L, 0x94204A80L, 0xCAB14CE9L, 0x48EC6800L, 4294967288UL}, {0x280E2EE4L, 0x94204A80L, 0xCAB14CE9L, 0x48EC6800L, 4294967288UL}, {0x280E2EE4L, 0x94204A80L, 0xCAB14CE9L, 0x48EC6800L, 4294967288UL}}, {{0x280E2EE4L, 0x94204A80L, 0xCAB14CE9L, 0x48EC6800L, 4294967288UL}, {0x280E2EE4L, 0x94204A80L, 0xCAB14CE9L, 0x48EC6800L, 4294967288UL}, {0x280E2EE4L, 0x94204A80L, 0xCAB14CE9L, 0x48EC6800L, 4294967288UL}, {0x280E2EE4L, 0x94204A80L, 0xCAB14CE9L, 0x48EC6800L, 4294967288UL}, {0x280E2EE4L, 0x94204A80L, 0xCAB14CE9L, 0x48EC6800L, 4294967288UL}}};
        int l_676[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_676[i] = (-9L);
        for (g_483 = (-4); (g_483 >= 8); g_483 = safe_add_func_uint16_t_u_u(g_483, 2))
        {
            unsigned l_669 = 0xF009D106L;
            char l_673 = (-9L);
            int l_678 = 0L;
            p_58 = g_101;
            g_170 = ((safe_sub_func_int32_t_s_s((l_656 != (p_56 & l_656)), (safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_u((((safe_rshift_func_uint8_t_u_s((g_2 > ((safe_mul_func_uint8_t_u_u((((safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(p_55, (1L <= l_669))), (p_55 > (l_669 , 8L)))) & l_670[1][3][4]) , l_538[6]), 0xE7L)) >= l_669)), 4)) < 255UL) || p_57), g_2)) , 0x4FL), 0)))) != l_670[2][4][2]);
            for (l_151 = 0; (l_151 == 20); l_151++)
            {
                int l_674 = 0xFE26F66AL;
                int l_675 = 1L;
                int l_677 = 0x19951991L;
                int l_679[6] = {(-4L), (-1L), (-4L), (-1L), (-4L), (-1L)};
                int i;
                g_680--;
            }
            for (l_358 = 0; (l_358 >= 0); l_358 -= 1)
            {
                int i;
                l_678 = 1L;
                if (l_676[l_358])
                    continue;
            }
        }
        --l_685;
        return l_670[3][3][3];
    }
    g_29 = (p_58 <= ((p_58 ^ ((g_29 >= (safe_mod_func_int16_t_s_s(0x7884L, g_167[2][0]))) | (g_167[2][0] , 1UL))) <= g_484));
    return g_102;
}





int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_83[i], "g_83[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_153[i][j], "g_153[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_167[i][j], "g_167[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_439, "g_439", print_hash_value);
    transparent_crc(g_476, "g_476", print_hash_value);
    transparent_crc(g_483, "g_483", print_hash_value);
    transparent_crc(g_484, "g_484", print_hash_value);
    transparent_crc(g_518, "g_518", print_hash_value);
    transparent_crc(g_576, "g_576", print_hash_value);
    transparent_crc(g_680, "g_680", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_683[i], "g_683[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_684, "g_684", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_827[i], "g_827[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1091[i][j], "g_1091[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_1096[i], "g_1096[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1097, "g_1097", print_hash_value);
    transparent_crc(g_1158, "g_1158", print_hash_value);
    transparent_crc(g_1194, "g_1194", print_hash_value);
    transparent_crc(g_1356, "g_1356", print_hash_value);
    transparent_crc(g_1394, "g_1394", print_hash_value);
    transparent_crc(g_1583, "g_1583", print_hash_value);
    transparent_crc(g_1586, "g_1586", print_hash_value);
    transparent_crc(g_1598, "g_1598", print_hash_value);
    transparent_crc(g_1668, "g_1668", print_hash_value);
    transparent_crc(g_1695, "g_1695", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1718[i][j], "g_1718[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1770, "g_1770", print_hash_value);
    transparent_crc(g_1816, "g_1816", print_hash_value);
    transparent_crc(g_1823, "g_1823", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1892[i], "g_1892[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1970, "g_1970", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_2093[i], "g_2093[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2094, "g_2094", print_hash_value);
    transparent_crc(g_2095, "g_2095", print_hash_value);
    transparent_crc(g_2190, "g_2190", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2262[i], "g_2262[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
